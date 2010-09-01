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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00053980 };

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
0x3c72,	// (0x000575f2) Screen

0x3c7e,	// (0x000575fe) application_window

0x3cba,	// (0x0005763a) area_bottom_pane_ParamLimits

0x3cba,	// (0x0005763a) area_bottom_pane

0x3cf3,	// (0x00057673) area_top_pane_ParamLimits

0x3cf3,	// (0x00057673) area_top_pane

0xc0cd,	// (0x0005fa4d) call_video_uplink_pane_ParamLimits

0xc0cd,	// (0x0005fa4d) call_video_uplink_pane

0x3d81,	// (0x00057701) main_pane_ParamLimits

0x3d81,	// (0x00057701) main_pane

0x2a3c,	// (0x000563bc) context_pane

0x6aba,	// (0x0005a43a) navi_pane

0x6aec,	// (0x0005a46c) popup_cale_events_window_ParamLimits

0x6aec,	// (0x0005a46c) popup_cale_events_window

0x2a4f,	// (0x000563cf) popup_mup_playback_window

0x6b04,	// (0x0005a484) signal_pane

0x0ae6,	// (0x00054466) main_browser_pane

0x0c98,	// (0x00054618) main_burst_pane

0x6804,	// (0x0005a184) main_calc_pane

0x2a22,	// (0x000563a2) main_cale_day_pane

0x6818,	// (0x0005a198) main_cale_month_pane

0x2a22,	// (0x000563a2) main_cale_week_pane

0x0c98,	// (0x00054618) main_call_pane

0xc516,	// (0x0005fe96) main_call_poc_pane

0x0c98,	// (0x00054618) main_camera_pane

0x0c98,	// (0x00054618) main_chi_dic_pane

0x1483,	// (0x00054e03) main_clock_pane

0xc516,	// (0x0005fe96) main_fmradio_pane

0x0c98,	// (0x00054618) main_graph_messa_pane

0xc516,	// (0x0005fe96) main_help_pane

0x0ae6,	// (0x00054466) main_im_pane

0x09f9,	// (0x00054379) main_image_pane_ParamLimits

0x09f9,	// (0x00054379) main_image_pane

0xc516,	// (0x0005fe96) main_location2_pane

0x0c98,	// (0x00054618) main_location_pane

0x09f9,	// (0x00054379) main_messa_pane

0xc516,	// (0x0005fe96) main_mp2_pane

0x0c98,	// (0x00054618) main_mp_pane

0xc516,	// (0x0005fe96) main_msg_pane

0xc516,	// (0x0005fe96) main_mup_eq_pane

0xc516,	// (0x0005fe96) main_mup_pane

0x0ae6,	// (0x00054466) main_notes_pane

0xc516,	// (0x0005fe96) main_pec_pane

0xc516,	// (0x0005fe96) main_phob_pane

0xc516,	// (0x0005fe96) main_pinb_pane

0xc516,	// (0x0005fe96) main_postcard_pane

0xc516,	// (0x0005fe96) main_qdial_pane

0x0c98,	// (0x00054618) main_skin_pane

0xc516,	// (0x0005fe96) main_smil2_pane

0x0c98,	// (0x00054618) main_smil_pane

0x0c98,	// (0x00054618) main_video_pane

0x0c98,	// (0x00054618) main_video_tele_pane

0x09f9,	// (0x00054379) main_viewer_pane_ParamLimits

0x09f9,	// (0x00054379) main_viewer_pane

0x0c98,	// (0x00054618) main_vorec_pane

0x6876,	// (0x0005a1f6) popup_blid_sat_info_window_ParamLimits

0x6876,	// (0x0005a1f6) popup_blid_sat_info_window

0x68ce,	// (0x0005a24e) popup_dyc_status_message_window_ParamLimits

0x68ce,	// (0x0005a24e) popup_dyc_status_message_window

0x68e6,	// (0x0005a266) popup_grid_large_graphic_window_ParamLimits

0x68e6,	// (0x0005a266) popup_grid_large_graphic_window

0x6996,	// (0x0005a316) popup_loc_request_window_ParamLimits

0x6996,	// (0x0005a316) popup_loc_request_window

0x6a92,	// (0x0005a412) popup_wml_address_window_ParamLimits

0x6a92,	// (0x0005a412) popup_wml_address_window

0x663e,	// (0x00059fbe) call_muted_g1

0x62b1,	// (0x00059c31) popup_call_audio_conf_window_ParamLimits

0x62b1,	// (0x00059c31) popup_call_audio_conf_window

0x6652,	// (0x00059fd2) popup_call_audio_first_window_ParamLimits

0x6652,	// (0x00059fd2) popup_call_audio_first_window

0x66c8,	// (0x0005a048) popup_call_audio_in_window_ParamLimits

0x66c8,	// (0x0005a048) popup_call_audio_in_window

0x6704,	// (0x0005a084) popup_call_audio_out_window_ParamLimits

0x6704,	// (0x0005a084) popup_call_audio_out_window

0x673e,	// (0x0005a0be) popup_call_audio_second_window_ParamLimits

0x673e,	// (0x0005a0be) popup_call_audio_second_window

0x6794,	// (0x0005a114) popup_call_audio_wait_window_ParamLimits

0x6794,	// (0x0005a114) popup_call_audio_wait_window

0x67c9,	// (0x0005a149) popup_number_entry_window_ParamLimits

0x67c9,	// (0x0005a149) popup_number_entry_window

0xc103,	// (0x0005fa83) bg_popup_call_pane_cp05_ParamLimits

0xc103,	// (0x0005fa83) bg_popup_call_pane_cp05

0xc123,	// (0x0005faa3) popup_number_entry_window_t1

0xc136,	// (0x0005fab6) popup_number_entry_window_t2

0xc148,	// (0x0005fac8) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x00062a05) popup_number_entry_window_t

0xc15a,	// (0x0005fada) text_title_cp2

0xc16d,	// (0x0005faed) bg_popup_call_pane_cp_ParamLimits

0xc16d,	// (0x0005faed) bg_popup_call_pane_cp

0xc17b,	// (0x0005fafb) call_thumbnail_pane

0xc183,	// (0x0005fb03) popup_call_audio_in_window_g1_ParamLimits

0xc183,	// (0x0005fb03) popup_call_audio_in_window_g1

0xc18f,	// (0x0005fb0f) popup_call_audio_in_window_g2_ParamLimits

0xc18f,	// (0x0005fb0f) popup_call_audio_in_window_g2

0xc19b,	// (0x0005fb1b) popup_call_audio_in_window_g3_ParamLimits

0xc19b,	// (0x0005fb1b) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x00062a0e) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x00062a0e) popup_call_audio_in_window_g

0xc1a7,	// (0x0005fb27) popup_call_audio_in_window_t1_ParamLimits

0xc1a7,	// (0x0005fb27) popup_call_audio_in_window_t1

0xc1c3,	// (0x0005fb43) popup_call_audio_in_window_t2_ParamLimits

0xc1c3,	// (0x0005fb43) popup_call_audio_in_window_t2

0xc1df,	// (0x0005fb5f) popup_call_audio_in_window_t3_ParamLimits

0xc1df,	// (0x0005fb5f) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x00062a15) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x00062a15) popup_call_audio_in_window_t

0xc16d,	// (0x0005faed) bg_popup_call_pane_cp01_ParamLimits

0xc16d,	// (0x0005faed) bg_popup_call_pane_cp01

0xc17b,	// (0x0005fafb) call_thumbnail_pane_cp02

0xc1f2,	// (0x0005fb72) call_type_pane_cp022

0xc1fa,	// (0x0005fb7a) popup_call_audio_out_window_g1_ParamLimits

0xc1fa,	// (0x0005fb7a) popup_call_audio_out_window_g1

0xc20c,	// (0x0005fb8c) popup_call_audio_out_window_g2_ParamLimits

0xc20c,	// (0x0005fb8c) popup_call_audio_out_window_g2

0xc218,	// (0x0005fb98) popup_call_audio_out_window_g3_ParamLimits

0xc218,	// (0x0005fb98) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x00062a1c) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x00062a1c) popup_call_audio_out_window_g

0xc22a,	// (0x0005fbaa) popup_call_audio_out_window_t1_ParamLimits

0xc22a,	// (0x0005fbaa) popup_call_audio_out_window_t1

0xc242,	// (0x0005fbc2) popup_call_audio_out_window_t2_ParamLimits

0xc242,	// (0x0005fbc2) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x00062a23) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x00062a23) popup_call_audio_out_window_t

0xc257,	// (0x0005fbd7) bg_popup_call_pane_ParamLimits

0xc257,	// (0x0005fbd7) bg_popup_call_pane

0x3f3e,	// (0x000578be) call_thumbnail_pane_cp_ParamLimits

0x3f3e,	// (0x000578be) call_thumbnail_pane_cp

0xc2db,	// (0x0005fc5b) call_type_pane_cp01_ParamLimits

0xc2db,	// (0x0005fc5b) call_type_pane_cp01

0xc31f,	// (0x0005fc9f) popup_call_audio_first_window_g1_ParamLimits

0xc31f,	// (0x0005fc9f) popup_call_audio_first_window_g1

0xc36b,	// (0x0005fceb) popup_call_audio_first_window_g2_ParamLimits

0xc36b,	// (0x0005fceb) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x00062a28) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x00062a28) popup_call_audio_first_window_g

0xc3af,	// (0x0005fd2f) popup_call_audio_first_window_t1_ParamLimits

0xc3af,	// (0x0005fd2f) popup_call_audio_first_window_t1

0xc45b,	// (0x0005fddb) popup_call_audio_first_window_t4_ParamLimits

0xc45b,	// (0x0005fddb) popup_call_audio_first_window_t4

0xc4e7,	// (0x0005fe67) popup_call_audio_first_window_t5_ParamLimits

0xc4e7,	// (0x0005fe67) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x00062a2d) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x00062a2d) popup_call_audio_first_window_t

0xc516,	// (0x0005fe96) bg_popup_call_pane_cp02

0xc520,	// (0x0005fea0) call_type_pane_cp023

0xc528,	// (0x0005fea8) popup_call_audio_wait_window_g1

0xc530,	// (0x0005feb0) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x00062a34) popup_call_audio_wait_window_g

0xc538,	// (0x0005feb8) popup_call_audio_wait_window_t3

0xc546,	// (0x0005fec6) bg_popup_call_pane_cp03_ParamLimits

0xc546,	// (0x0005fec6) bg_popup_call_pane_cp03

0xc5a6,	// (0x0005ff26) call_thumbnail_pane_cp011_ParamLimits

0xc5a6,	// (0x0005ff26) call_thumbnail_pane_cp011

0xc5b2,	// (0x0005ff32) call_type_pane_cp034_ParamLimits

0xc5b2,	// (0x0005ff32) call_type_pane_cp034

0xc5ee,	// (0x0005ff6e) popup_call_audio_second_window_g1_ParamLimits

0xc5ee,	// (0x0005ff6e) popup_call_audio_second_window_g1

0xc62a,	// (0x0005ffaa) popup_call_audio_second_window_g2_ParamLimits

0xc62a,	// (0x0005ffaa) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x00062a39) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x00062a39) popup_call_audio_second_window_g

0x08ee,	// (0x0005426e) popup_call_audio_second_window_t1_ParamLimits

0x08ee,	// (0x0005426e) popup_call_audio_second_window_t1

0x096f,	// (0x000542ef) popup_call_audio_second_window_t2_ParamLimits

0x096f,	// (0x000542ef) popup_call_audio_second_window_t2

0x09a5,	// (0x00054325) popup_call_audio_second_window_t3_ParamLimits

0x09a5,	// (0x00054325) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x00062a3e) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x00062a3e) popup_call_audio_second_window_t

0xc516,	// (0x0005fe96) bg_popup_call_pane_cp04

0x09db,	// (0x0005435b) list_conf_pane

0x09e3,	// (0x00054363) popup_call_audio_conf_window_t1

0x09f1,	// (0x00054371) call_thumbnail_pane_g1

0x09f9,	// (0x00054379) bg_pinb_pane_ParamLimits

0x09f9,	// (0x00054379) bg_pinb_pane

0x0a07,	// (0x00054387) find_pinb_pane

0x09f9,	// (0x00054379) listscroll_pinb_pane_ParamLimits

0x09f9,	// (0x00054379) listscroll_pinb_pane

0x0a11,	// (0x00054391) pinb_bg_pane_g1

0x0a11,	// (0x00054391) pinb_bg_pane_g2

0x0a11,	// (0x00054391) pinb_bg_pane_g3

0x0a11,	// (0x00054391) pinb_bg_pane_g4

0x0a11,	// (0x00054391) pinb_bg_pane_g5

0x0a11,	// (0x00054391) pinb_bg_pane_g6

0x0a11,	// (0x00054391) pinb_bg_pane_g7

0x0a11,	// (0x00054391) pinb_bg_pane_g8

0x0a11,	// (0x00054391) pinb_bg_pane_g9

0x0a11,	// (0x00054391) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x00062a45) pinb_bg_pane_g

0xc074,	// (0x0005f9f4) grid_pinb_pane

0xc074,	// (0x0005f9f4) list_pinb_pane

0x0a1b,	// (0x0005439b) scroll_pane_cp01_ParamLimits

0x0a1b,	// (0x0005439b) scroll_pane_cp01

0x0a29,	// (0x000543a9) find_pinb_pane_g1_ParamLimits

0x0a29,	// (0x000543a9) find_pinb_pane_g1

0x0a41,	// (0x000543c1) find_pinb_pane_t1

0x0a53,	// (0x000543d3) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x00062a5f) find_pinb_pane_t

0x0a68,	// (0x000543e8) input_focus_pane_cp01_ParamLimits

0x0a68,	// (0x000543e8) input_focus_pane_cp01

0xc666,	// (0x0005ffe6) cell_pinb_pane_ParamLimits

0xc666,	// (0x0005ffe6) cell_pinb_pane

0x0a74,	// (0x000543f4) cell_pinb_pane_g1_ParamLimits

0x0a74,	// (0x000543f4) cell_pinb_pane_g1

0x0a82,	// (0x00054402) cell_pinb_pane_g2_ParamLimits

0x0a82,	// (0x00054402) cell_pinb_pane_g2

0x0a82,	// (0x00054402) cell_pinb_pane_g3_ParamLimits

0x0a82,	// (0x00054402) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x00062a64) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x00062a64) cell_pinb_pane_g

0xc516,	// (0x0005fe96) grid_highlight_pane_cp01

0xc666,	// (0x0005ffe6) list_pinb_item_pane_ParamLimits

0xc666,	// (0x0005ffe6) list_pinb_item_pane

0xc074,	// (0x0005f9f4) list_highlight_pane_cp02

0x0a90,	// (0x00054410) list_pinb_item_pane_g1_ParamLimits

0x0a90,	// (0x00054410) list_pinb_item_pane_g1

0x0a82,	// (0x00054402) list_pinb_item_pane_g2_ParamLimits

0x0a82,	// (0x00054402) list_pinb_item_pane_g2

0x0a74,	// (0x000543f4) list_pinb_item_pane_g3_ParamLimits

0x0a74,	// (0x000543f4) list_pinb_item_pane_g3

0x0a82,	// (0x00054402) list_pinb_item_pane_g4_ParamLimits

0x0a82,	// (0x00054402) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x00062a6b) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x00062a6b) list_pinb_item_pane_g

0x0a9e,	// (0x0005441e) list_pinb_item_pane_t1_ParamLimits

0x0a9e,	// (0x0005441e) list_pinb_item_pane_t1

0x3f80,	// (0x00057900) calc_display_pane

0x3fa5,	// (0x00057925) calc_paper_pane

0x3fc8,	// (0x00057948) grid_calc_pane

0xc516,	// (0x0005fe96) bg_list_pane_cp01

0x3ff6,	// (0x00057976) clock_g1

0x3ffe,	// (0x0005797e) clock_g2

0x0001,

0xf0f4,	// (0x00062a74) clock_g

0x4006,	// (0x00057986) clock_t1_ParamLimits

0x4006,	// (0x00057986) clock_t1

0x401b,	// (0x0005799b) clock_t2_ParamLimits

0x401b,	// (0x0005799b) clock_t2

0x402d,	// (0x000579ad) clock_t3_ParamLimits

0x402d,	// (0x000579ad) clock_t3

0x403f,	// (0x000579bf) clock_t4_ParamLimits

0x403f,	// (0x000579bf) clock_t4

0x4051,	// (0x000579d1) clock_t5_ParamLimits

0x4051,	// (0x000579d1) clock_t5

0x4066,	// (0x000579e6) clock_t6_ParamLimits

0x4066,	// (0x000579e6) clock_t6

0x4078,	// (0x000579f8) clock_t7_ParamLimits

0x4078,	// (0x000579f8) clock_t7

0x408a,	// (0x00057a0a) clock_t8_ParamLimits

0x408a,	// (0x00057a0a) clock_t8

0x409e,	// (0x00057a1e) clock_t9_ParamLimits

0x409e,	// (0x00057a1e) clock_t9

0x0008,

0xf0f9,	// (0x00062a79) clock_t_ParamLimits

0xf0f9,	// (0x00062a79) clock_t

0x0ab2,	// (0x00054432) popup_clock_analogue_window_cp02

0x0ab2,	// (0x00054432) popup_clock_digital_window_cp01

0xc516,	// (0x0005fe96) listscroll_help_pane

0xc516,	// (0x0005fe96) phob_pre_status_pane

0x0aba,	// (0x0005443a) grid_qdial_pane

0x09f9,	// (0x00054379) listscroll_mce_pane

0x09f9,	// (0x00054379) bg_notes_pane

0x0ac4,	// (0x00054444) list_notes_pane

0x40b2,	// (0x00057a32) scroll_pane_cp06

0x0ad2,	// (0x00054452) bg_calc_paper_pane

0xc67c,	// (0x0005fffc) list_calc_pane

0x0ae6,	// (0x00054466) bg_calc_display_pane

0x40c6,	// (0x00057a46) calc_display_pane_t1

0x40d8,	// (0x00057a58) calc_display_pane_t2

0xc696,	// (0x00060016) calc_display_pane_t3

0x0002,

0xf10c,	// (0x00062a8c) calc_display_pane_t

0x40ea,	// (0x00057a6a) cell_calc_pane_ParamLimits

0x40ea,	// (0x00057a6a) cell_calc_pane

0x0af2,	// (0x00054472) bg_calc_paper_pane_g1

0x0afe,	// (0x0005447e) bg_calc_paper_pane_g2

0x0b0a,	// (0x0005448a) bg_calc_paper_pane_g3

0x0b16,	// (0x00054496) bg_calc_paper_pane_g4

0x0b22,	// (0x000544a2) bg_calc_paper_pane_g5

0x411f,	// (0x00057a9f) bg_calc_paper_pane_g6

0x412e,	// (0x00057aae) bg_calc_paper_pane_g7

0x413d,	// (0x00057abd) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x00062a93) bg_calc_paper_pane_g

0x4150,	// (0x00057ad0) calc_bg_paper_pane_g9

0x4163,	// (0x00057ae3) list_calc_item_pane_ParamLimits

0x4163,	// (0x00057ae3) list_calc_item_pane

0x0b2e,	// (0x000544ae) list_calc_item_pane_g1

0xc6a8,	// (0x00060028) list_calc_item_pane_t1_ParamLimits

0xc6a8,	// (0x00060028) list_calc_item_pane_t1

0x4178,	// (0x00057af8) list_calc_item_pane_t2_ParamLimits

0x4178,	// (0x00057af8) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x00062aa4) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x00062aa4) list_calc_item_pane_t

0x0a11,	// (0x00054391) cell_calc_pane_g1

0x0b3b,	// (0x000544bb) grid_highlight_pane_cp02

0x2cf6,	// (0x00056676) bg_calc_display_pane_g1

0x41aa,	// (0x00057b2a) bg_calc_display_pane_g2

0x2cbf,	// (0x0005663f) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x00062aae) bg_calc_display_pane_g

0x41b4,	// (0x00057b34) cell_qdial_pane_ParamLimits

0x41b4,	// (0x00057b34) cell_qdial_pane

0x41c8,	// (0x00057b48) cell_qdial_pane_g1_ParamLimits

0x41c8,	// (0x00057b48) cell_qdial_pane_g1

0x41de,	// (0x00057b5e) cell_qdial_pane_g2_ParamLimits

0x41de,	// (0x00057b5e) cell_qdial_pane_g2

0x0b5d,	// (0x000544dd) cell_qdial_pane_g3_ParamLimits

0x0b5d,	// (0x000544dd) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x00062ab5) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x00062ab5) cell_qdial_pane_g

0x4204,	// (0x00057b84) cell_qdial_pane_t1_ParamLimits

0x4204,	// (0x00057b84) cell_qdial_pane_t1

0x421c,	// (0x00057b9c) cell_qdial_pane_t2_ParamLimits

0x421c,	// (0x00057b9c) cell_qdial_pane_t2

0x422f,	// (0x00057baf) cell_qdial_pane_t3_ParamLimits

0x422f,	// (0x00057baf) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x00062abe) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x00062abe) cell_qdial_pane_t

0xc516,	// (0x0005fe96) grid_highlight_pane_cp04

0x0b69,	// (0x000544e9) thumbnail_qdial_pane_ParamLimits

0x0b69,	// (0x000544e9) thumbnail_qdial_pane

0x0bc5,	// (0x00054545) list_help_pane

0x0bce,	// (0x0005454e) scroll_pane_cp02

0x4242,	// (0x00057bc2) help_list_pane_t1_ParamLimits

0x4242,	// (0x00057bc2) help_list_pane_t1

0xc6ba,	// (0x0006003a) bg_notes_pane_g2

0xc6c2,	// (0x00060042) bg_notes_pane_g3

0xc6ca,	// (0x0006004a) notes_bg_pane_g1

0xc6d2,	// (0x00060052) notes_bg_pane_g4

0xc6da,	// (0x0006005a) notes_bg_pane_g5

0xc6e2,	// (0x00060062) notes_bg_pane_g6

0xc6ea,	// (0x0006006a) notes_bg_pane_g7

0xc6f2,	// (0x00060072) notes_bg_pane_g8

0xc6fa,	// (0x0006007a) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x00062adc) notes_bg_pane_g

0x4261,	// (0x00057be1) list_notes_text_pane_ParamLimits

0x4261,	// (0x00057be1) list_notes_text_pane

0x0bd7,	// (0x00054557) list_notes_text_pane_g1

0x4277,	// (0x00057bf7) list_notes_text_pane_t1

0x4285,	// (0x00057c05) listscroll_cale_week_pane

0x42b1,	// (0x00057c31) bg_cale_heading_pane

0x0bfa,	// (0x0005457a) bg_cale_pane_cp01

0x42c9,	// (0x00057c49) cale_week_corner_pane

0x42e8,	// (0x00057c68) cale_week_day_heading_pane

0x4305,	// (0x00057c85) cale_week_scroll_pane_g1

0x4318,	// (0x00057c98) cale_week_scroll_pane_g2

0x4330,	// (0x00057cb0) cale_week_scroll_pane_g3

0x4348,	// (0x00057cc8) cale_week_scroll_pane_g4

0x4360,	// (0x00057ce0) cale_week_scroll_pane_g5

0x4380,	// (0x00057d00) cale_week_scroll_pane_g6

0x43a0,	// (0x00057d20) cale_week_scroll_pane_g7

0x43c0,	// (0x00057d40) cale_week_scroll_pane_g8

0x43e4,	// (0x00057d64) cale_week_scroll_pane_g9

0x43fc,	// (0x00057d7c) cale_week_scroll_pane_g10

0x4414,	// (0x00057d94) cale_week_scroll_pane_g11

0x442c,	// (0x00057dac) cale_week_scroll_pane_g12

0x4444,	// (0x00057dc4) cale_week_scroll_pane_g13

0x4444,	// (0x00057dc4) cale_week_scroll_pane_g14

0x4444,	// (0x00057dc4) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x00062aeb) cale_week_scroll_pane_g

0x4480,	// (0x00057e00) cale_week_time_pane

0x44a4,	// (0x00057e24) grid_cale_week_pane

0x0c29,	// (0x000545a9) scroll_pane_cp08

0x44ca,	// (0x00057e4a) cell_cale_week_pane_ParamLimits

0x44ca,	// (0x00057e4a) cell_cale_week_pane

0x4558,	// (0x00057ed8) cale_week_day_heading_pane_t1

0x4582,	// (0x00057f02) cale_week_day_heading_pane_t2

0x45b1,	// (0x00057f31) cale_week_day_heading_pane_t3

0x45e0,	// (0x00057f60) cale_week_day_heading_pane_t4

0x460f,	// (0x00057f8f) cale_week_day_heading_pane_t5

0x4646,	// (0x00057fc6) cale_week_day_heading_pane_t6

0x467d,	// (0x00057ffd) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x00062b0c) cale_week_day_heading_pane_t

0x0c46,	// (0x000545c6) bg_cale_side_pane

0x46a7,	// (0x00058027) cale_week_time_pane_t1

0x46c1,	// (0x00058041) cale_week_time_pane_t2

0x46db,	// (0x0005805b) cale_week_time_pane_t3

0x46f5,	// (0x00058075) cale_week_time_pane_t4

0x470f,	// (0x0005808f) cale_week_time_pane_t5

0x4729,	// (0x000580a9) cale_week_time_pane_t6

0x4743,	// (0x000580c3) cale_week_time_pane_t7

0x475d,	// (0x000580dd) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x00062b1b) cale_week_time_pane_t

0x477d,	// (0x000580fd) cell_cale_week_pane_g2

0x47a1,	// (0x00058121) cell_cale_week_pane_g3_ParamLimits

0x47a1,	// (0x00058121) cell_cale_week_pane_g3

0x0c54,	// (0x000545d4) grid_highlight_pane_cp07

0x0c5c,	// (0x000545dc) listscroll_gms_pane

0x0c66,	// (0x000545e6) grid_gms_pane

0x0c6f,	// (0x000545ef) listscroll_gms_pane_g1

0x0c77,	// (0x000545f7) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x00062b2c) listscroll_gms_pane_g

0x47b9,	// (0x00058139) scroll_pane_cp010

0x47c4,	// (0x00058144) cell_gms_pane_ParamLimits

0x47c4,	// (0x00058144) cell_gms_pane

0x47d6,	// (0x00058156) cell_gms_pane_g1

0x0c7f,	// (0x000545ff) cell_gms_pane_g2

0x0bd7,	// (0x00054557) cell_gms_pane_g3

0x0c87,	// (0x00054607) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x00062b31) cell_gms_pane_g

0x0c90,	// (0x00054610) grid_highlight_pane_cp09

0x65c6,	// (0x00059f46) phob_pre_status_pane_g1

0x65ce,	// (0x00059f4e) phob_pre_status_pane_g2

0x65d6,	// (0x00059f56) phob_pre_status_pane_g3

0x65de,	// (0x00059f5e) phob_pre_status_pane_g4

0x0004,

0xf588,	// (0x00062f08) phob_pre_status_pane_g

0x65ee,	// (0x00059f6e) phob_pre_status_pane_t1

0x65fc,	// (0x00059f7c) phob_pre_status_pane_t2

0x660c,	// (0x00059f8c) phob_pre_status_pane_t3

0x0002,

0xf593,	// (0x00062f13) phob_pre_status_pane_t

0x0c98,	// (0x00054618) bg_list_pane_cp05

0x47e6,	// (0x00058166) grid_vorec_pane

0x47ee,	// (0x0005816e) vorec_t1

0x47fc,	// (0x0005817c) vorec_t2

0x480a,	// (0x0005818a) vorec_t3

0x4818,	// (0x00058198) vorec_t4

0xbe74,	// (0x0005f7f4) vorec_t5

0xbe82,	// (0x0005f802) vorec_t6

0x0004,

0xf1ba,	// (0x00062b3a) vorec_t

0xbe90,	// (0x0005f810) wait_bar_pane_cp01

0x4834,	// (0x000581b4) cell_vorec_pane_ParamLimits

0x4834,	// (0x000581b4) cell_vorec_pane

0xc702,	// (0x00060082) cell_vorec_pane_g1

0xc516,	// (0x0005fe96) grid_highlight_pane_cp05

0x0a1b,	// (0x0005439b) cams_zoom_pane

0x0a1b,	// (0x0005439b) image_vga_pane

0x0a74,	// (0x000543f4) main_camera_pane_g1

0x0a74,	// (0x000543f4) main_camera_pane_g2

0x0a74,	// (0x000543f4) main_camera_pane_g3

0x0a74,	// (0x000543f4) main_camera_pane_g4

0x0a74,	// (0x000543f4) main_camera_pane_g5

0x0a74,	// (0x000543f4) main_camera_pane_g6

0x0a74,	// (0x000543f4) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x00062b45) main_camera_pane_g

0x0ce8,	// (0x00054668) main_camera_pane_t1

0x0ce8,	// (0x00054668) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x00062b56) main_camera_pane_t

0x485b,	// (0x000581db) cams_zoom_pane_cp_ParamLimits

0x485b,	// (0x000581db) cams_zoom_pane_cp

0x488f,	// (0x0005820f) image_cif_pane_ParamLimits

0x488f,	// (0x0005820f) image_cif_pane

0xc074,	// (0x0005f9f4) image_subqcif_pane

0x48a1,	// (0x00058221) main_video_pane_g1_ParamLimits

0x48a1,	// (0x00058221) main_video_pane_g1

0x48cf,	// (0x0005824f) main_video_pane_g2_ParamLimits

0x48cf,	// (0x0005824f) main_video_pane_g2

0x4909,	// (0x00058289) main_video_pane_g3_ParamLimits

0x4909,	// (0x00058289) main_video_pane_g3

0x4909,	// (0x00058289) main_video_pane_g4_ParamLimits

0x4909,	// (0x00058289) main_video_pane_g4

0x493d,	// (0x000582bd) main_video_pane_g5_ParamLimits

0x493d,	// (0x000582bd) main_video_pane_g5

0x0cb4,	// (0x00054634) main_video_pane_g6_ParamLimits

0x0cb4,	// (0x00054634) main_video_pane_g6

0x0006,

0xf1db,	// (0x00062b5b) main_video_pane_g_ParamLimits

0xf1db,	// (0x00062b5b) main_video_pane_g

0x4959,	// (0x000582d9) main_video_pane_t1_ParamLimits

0x4959,	// (0x000582d9) main_video_pane_t1

0x0cce,	// (0x0005464e) cams_zoom_pane_g1

0x0cce,	// (0x0005464e) cams_zoom_pane_g2

0x0cce,	// (0x0005464e) cams_zoom_pane_g3

0x0cce,	// (0x0005464e) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x00062b6a) cams_zoom_pane_g

0x49b1,	// (0x00058331) grid_cams_pane

0x49cb,	// (0x0005834b) linegrid_cams_pane

0x49de,	// (0x0005835e) cell_cams_pane_ParamLimits

0x49de,	// (0x0005835e) cell_cams_pane

0x0cd8,	// (0x00054658) cams_burst_image_pane

0x0ce0,	// (0x00054660) cell_cams_pane_g1

0xc516,	// (0x0005fe96) grid_highlight_pane_cp03

0x0a11,	// (0x00054391) mp_bg_pane_g1

0xc074,	// (0x0005f9f4) bg_list_pane_cp03

0xc074,	// (0x0005f9f4) bg_mp_pane

0xc074,	// (0x0005f9f4) grid_mp_pane

0x0cce,	// (0x0005464e) media_player_g1

0x1209,	// (0x00054b89) media_player_t1

0x1209,	// (0x00054b89) media_player_t2

0x1209,	// (0x00054b89) media_player_t3

0x1209,	// (0x00054b89) media_player_t4

0x1209,	// (0x00054b89) media_player_t5

0x1209,	// (0x00054b89) media_player_t6

0x1209,	// (0x00054b89) media_player_t7

0x0006,

0xf572,	// (0x00062ef2) media_player_t

0xc074,	// (0x0005f9f4) wait_bar_pane_cp02

0xf557,	// (0x00062ed7) main_usb_pane_t

0x1483,	// (0x00054e03) cell_mp_pane

0x0a11,	// (0x00054391) cell_mp_pane_g1

0xc516,	// (0x0005fe96) grid_highlight_pane_cp06

0x0cfc,	// (0x0005467c) grid_skin_colour_pane

0x0d04,	// (0x00054684) list_highlight_pane_cp03

0x49fe,	// (0x0005837e) skin_g1

0x0d0c,	// (0x0005468c) skin_t1

0x0d1b,	// (0x0005469b) skin_t2

0x0001,

0xf218,	// (0x00062b98) skin_t

0x4a06,	// (0x00058386) cell_skin_colour_pane_ParamLimits

0x4a06,	// (0x00058386) cell_skin_colour_pane

0x0d29,	// (0x000546a9) cell_skin_colour_pane_g1

0x4a7f,	// (0x000583ff) call_video_g1_ParamLimits

0x4a7f,	// (0x000583ff) call_video_g1

0x4a9b,	// (0x0005841b) call_video_g2_ParamLimits

0x4a9b,	// (0x0005841b) call_video_g2

0x0001,

0xf21d,	// (0x00062b9d) call_video_g_ParamLimits

0xf21d,	// (0x00062b9d) call_video_g

0x4aed,	// (0x0005846d) call_video_uplink_pane_cp1_ParamLimits

0x4aed,	// (0x0005846d) call_video_uplink_pane_cp1

0x0d3b,	// (0x000546bb) call_video_uplink_pane_cp2

0x4b8c,	// (0x0005850c) video_down_crop_pane_ParamLimits

0x4b8c,	// (0x0005850c) video_down_crop_pane

0x4c75,	// (0x000585f5) video_down_pane_ParamLimits

0x4c75,	// (0x000585f5) video_down_pane

0x0d43,	// (0x000546c3) video_down_subqcif_pane_ParamLimits

0x0d43,	// (0x000546c3) video_down_subqcif_pane

0x0d5b,	// (0x000546db) video_down_subqcif_pane_cp_ParamLimits

0x0d5b,	// (0x000546db) video_down_subqcif_pane_cp

0x0d81,	// (0x00054701) im_reading_pane_ParamLimits

0x0d81,	// (0x00054701) im_reading_pane

0x4d85,	// (0x00058705) im_writing_pane_ParamLimits

0x4d85,	// (0x00058705) im_writing_pane

0x4d9b,	// (0x0005871b) im_reading_pane_t1

0x0d9b,	// (0x0005471b) list_im_pane

0x0dac,	// (0x0005472c) scroll_pane_cp07

0x4dd5,	// (0x00058755) im_writing_pane_t1_ParamLimits

0x4dd5,	// (0x00058755) im_writing_pane_t1

0x0dc5,	// (0x00054745) im_writing_pane_t2_ParamLimits

0x0dc5,	// (0x00054745) im_writing_pane_t2

0x0001,

0xf227,	// (0x00062ba7) im_writing_pane_t_ParamLimits

0xf227,	// (0x00062ba7) im_writing_pane_t

0xc516,	// (0x0005fe96) input_focus_pane_cp04

0xc516,	// (0x0005fe96) input_focus_pane_cp05

0x4dea,	// (0x0005876a) list_im_single_pane_ParamLimits

0x4dea,	// (0x0005876a) list_im_single_pane

0x4dff,	// (0x0005877f) list_single_im_pane_t1

0x0c98,	// (0x00054618) blid_accuracy_pane

0x0c98,	// (0x00054618) blid_compass_pane

0x29da,	// (0x0005635a) main_location_t1

0x29da,	// (0x0005635a) main_location_t2

0x29da,	// (0x0005635a) main_location_t3

0x0002,

0xf581,	// (0x00062f01) main_location_t

0xc516,	// (0x0005fe96) aid_levels_location

0x0a11,	// (0x00054391) blid_accuracy_pane_g1

0x0a11,	// (0x00054391) blid_accuracy_pane_g2

0x0001,

0xf276,	// (0x00062bf6) blid_accuracy_pane_g

0x0e0d,	// (0x0005478d) wml_content_pane

0x0e4b,	// (0x000547cb) wml_button_pane_ParamLimits

0x0e4b,	// (0x000547cb) wml_button_pane

0x4e0e,	// (0x0005878e) wml_list_single_large_pane_ParamLimits

0x4e0e,	// (0x0005878e) wml_list_single_large_pane

0x4e23,	// (0x000587a3) wml_list_single_medium_pane_ParamLimits

0x4e23,	// (0x000587a3) wml_list_single_medium_pane

0x4e3a,	// (0x000587ba) wml_list_single_small_pane_ParamLimits

0x4e3a,	// (0x000587ba) wml_list_single_small_pane

0x0e5f,	// (0x000547df) wml_selection_box_pane_ParamLimits

0x0e5f,	// (0x000547df) wml_selection_box_pane

0x0e72,	// (0x000547f2) wml_list_single_pane_t1

0x0e81,	// (0x00054801) wml_list_single_medium_pane_t1

0x0e90,	// (0x00054810) wml_list_single_large_pane_t1

0x0e9f,	// (0x0005481f) input_focus_pane_cp02_ParamLimits

0x0e9f,	// (0x0005481f) input_focus_pane_cp02

0x0eb2,	// (0x00054832) wml_selection_box_pane_g1

0x0ebb,	// (0x0005483b) wml_selection_box_pane_t1_ParamLimits

0x0ebb,	// (0x0005483b) wml_selection_box_pane_t1

0x09f9,	// (0x00054379) bg_wml_button_pane_ParamLimits

0x09f9,	// (0x00054379) bg_wml_button_pane

0x0ed3,	// (0x00054853) wml_button_pane_g1

0x0edb,	// (0x0005485b) wml_button_pane_t1

0x0ed3,	// (0x00054853) wml_button_bg_pane_g1

0x0eeb,	// (0x0005486b) wml_button_bg_pane_g2

0x0ef3,	// (0x00054873) wml_button_bg_pane_g3

0x0efb,	// (0x0005487b) wml_button_bg_pane_g4

0x0f03,	// (0x00054883) wml_button_bg_pane_g5

0x0f0b,	// (0x0005488b) wml_button_bg_pane_g6

0x0f13,	// (0x00054893) wml_button_bg_pane_g7

0x0f1b,	// (0x0005489b) wml_button_bg_pane_g8

0x0f23,	// (0x000548a3) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x00062bac) wml_button_bg_pane_g

0x4e53,	// (0x000587d3) bg_list_pane_cp02

0x0f2b,	// (0x000548ab) mce_header_pane_ParamLimits

0x0f2b,	// (0x000548ab) mce_header_pane

0x0f41,	// (0x000548c1) mce_icon_pane

0x0f41,	// (0x000548c1) mce_image_pane

0x0f4a,	// (0x000548ca) mce_text_pane_ParamLimits

0x0f4a,	// (0x000548ca) mce_text_pane

0x4e5b,	// (0x000587db) scroll_pane_cp03

0x0e43,	// (0x000547c3) scroll_pane_cp04

0x0f5d,	// (0x000548dd) scroll_pane_cp05_ParamLimits

0x0f5d,	// (0x000548dd) scroll_pane_cp05

0x4e65,	// (0x000587e5) mce_header_field_pane_ParamLimits

0x4e65,	// (0x000587e5) mce_header_field_pane

0x4e7c,	// (0x000587fc) mce_header_field_pane_2_ParamLimits

0x4e7c,	// (0x000587fc) mce_header_field_pane_2

0x4e92,	// (0x00058812) mce_header_field_pane_3

0x4e9a,	// (0x0005881a) list_single_mce_message_pane_ParamLimits

0x4e9a,	// (0x0005881a) list_single_mce_message_pane

0x4eb0,	// (0x00058830) list_single_mce_smart_pane_ParamLimits

0x4eb0,	// (0x00058830) list_single_mce_smart_pane

0x0f69,	// (0x000548e9) input_focus_pane_cp03

0x0f72,	// (0x000548f2) list_header_data_pane

0x4ed1,	// (0x00058851) mce_header_field_pane_t1

0x4ee1,	// (0x00058861) list_single_mce_header_pane_ParamLimits

0x4ee1,	// (0x00058861) list_single_mce_header_pane

0x0f7a,	// (0x000548fa) list_single_mce_header_pane_t1

0x0f89,	// (0x00054909) list_single_mce_message_pane_g1

0x0f91,	// (0x00054911) list_single_mce_message_pane_t1

0x4f1b,	// (0x0005889b) bg_cale_heading_pane_cp01_ParamLimits

0x4f1b,	// (0x0005889b) bg_cale_heading_pane_cp01

0x0f9f,	// (0x0005491f) bg_cale_pane_cp02_ParamLimits

0x0f9f,	// (0x0005491f) bg_cale_pane_cp02

0x4f55,	// (0x000588d5) cale_month_corner_pane

0x4f74,	// (0x000588f4) cale_month_day_heading_pane_ParamLimits

0x4f74,	// (0x000588f4) cale_month_day_heading_pane

0x4fc6,	// (0x00058946) cale_month_pane_g1_ParamLimits

0x4fc6,	// (0x00058946) cale_month_pane_g1

0x4ff5,	// (0x00058975) cale_month_pane_g2_ParamLimits

0x4ff5,	// (0x00058975) cale_month_pane_g2

0x5025,	// (0x000589a5) cale_month_pane_g3_ParamLimits

0x5025,	// (0x000589a5) cale_month_pane_g3

0x5061,	// (0x000589e1) cale_month_pane_g4_ParamLimits

0x5061,	// (0x000589e1) cale_month_pane_g4

0x509d,	// (0x00058a1d) cale_month_pane_g5_ParamLimits

0x509d,	// (0x00058a1d) cale_month_pane_g5

0x50e5,	// (0x00058a65) cale_month_pane_g6_ParamLimits

0x50e5,	// (0x00058a65) cale_month_pane_g6

0x5131,	// (0x00058ab1) cale_month_pane_g7_ParamLimits

0x5131,	// (0x00058ab1) cale_month_pane_g7

0x5181,	// (0x00058b01) cale_month_pane_g8_ParamLimits

0x5181,	// (0x00058b01) cale_month_pane_g8

0x51d5,	// (0x00058b55) cale_month_pane_g9_ParamLimits

0x51d5,	// (0x00058b55) cale_month_pane_g9

0x5227,	// (0x00058ba7) cale_month_pane_g10_ParamLimits

0x5227,	// (0x00058ba7) cale_month_pane_g10

0x5279,	// (0x00058bf9) cale_month_pane_g11_ParamLimits

0x5279,	// (0x00058bf9) cale_month_pane_g11

0x52cb,	// (0x00058c4b) cale_month_pane_g12_ParamLimits

0x52cb,	// (0x00058c4b) cale_month_pane_g12

0x531d,	// (0x00058c9d) cale_month_pane_g13_ParamLimits

0x531d,	// (0x00058c9d) cale_month_pane_g13

0x000c,

0xf23f,	// (0x00062bbf) cale_month_pane_g_ParamLimits

0xf23f,	// (0x00062bbf) cale_month_pane_g

0x536f,	// (0x00058cef) cale_month_week_pane

0x5393,	// (0x00058d13) grid_cale_month_pane_ParamLimits

0x5393,	// (0x00058d13) grid_cale_month_pane

0x53dc,	// (0x00058d5c) cale_month_day_heading_pane_t1

0x541e,	// (0x00058d9e) cale_month_day_heading_pane_t2

0x5453,	// (0x00058dd3) cale_month_day_heading_pane_t3

0x5488,	// (0x00058e08) cale_month_day_heading_pane_t4

0x54c5,	// (0x00058e45) cale_month_day_heading_pane_t5

0x550a,	// (0x00058e8a) cale_month_day_heading_pane_t6

0x554f,	// (0x00058ecf) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x00062bda) cale_month_day_heading_pane_t

0x0c46,	// (0x000545c6) bg_cale_side_pane_cp01

0x559c,	// (0x00058f1c) cale_month_week_pane_t1

0x55b5,	// (0x00058f35) cale_month_week_pane_t2

0x55ce,	// (0x00058f4e) cale_month_week_pane_t3

0x55e7,	// (0x00058f67) cale_month_week_pane_t4

0x5600,	// (0x00058f80) cale_month_week_pane_t5

0x5619,	// (0x00058f99) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x00062be9) cale_month_week_pane_t

0x5632,	// (0x00058fb2) cell_cale_month_pane_ParamLimits

0x5632,	// (0x00058fb2) cell_cale_month_pane

0xc70c,	// (0x0006008c) cell_cale_month_pane_g1

0x5760,	// (0x000590e0) cell_cale_month_pane_t1_ParamLimits

0x5760,	// (0x000590e0) cell_cale_month_pane_t1

0x0c54,	// (0x000545d4) grid_highlight_pane_cp08

0x0a11,	// (0x00054391) main_smil_g1

0x578c,	// (0x0005910c) smil_status_pane

0x0fde,	// (0x0005495e) smil_text_pane

0x28b2,	// (0x00056232) bg_popup_call3_rect_pane_g8

0x28ba,	// (0x0005623a) bg_popup_call3_rect_pane_g9

0x0008,

0xf502,	// (0x00062e82) bg_popup_call3_rect_pane_g

0x2ab1,	// (0x00056431) smil_status_volume_pane_g1

0x0fe8,	// (0x00054968) smil_status_pane_t1

0xc852,	// (0x000601d2) volume_smil_pane

0x0fff,	// (0x0005497f) list_smil_text_pane

0x57a1,	// (0x00059121) scroll_pane_cp011

0x57ac,	// (0x0005912c) smil_text_list_pane_t1_ParamLimits

0x57ac,	// (0x0005912c) smil_text_list_pane_t1

0xc718,	// (0x00060098) aid_volume_smil_ParamLimits

0xc718,	// (0x00060098) aid_volume_smil

0x0a11,	// (0x00054391) smil_volume_pane_g1

0x0a11,	// (0x00054391) smil_volume_pane_g2

0x0001,

0xf276,	// (0x00062bf6) smil_volume_pane_g

0x4285,	// (0x00057c05) listscroll_cale_day_pane

0x1009,	// (0x00054989) bg_cale_pane

0x1021,	// (0x000549a1) list_cale_pane

0x1044,	// (0x000549c4) scroll_pane_cp09

0x1055,	// (0x000549d5) cale_bg_pane_g1

0x105d,	// (0x000549dd) cale_bg_pane_g2

0x1065,	// (0x000549e5) cale_bg_pane_g3

0x106d,	// (0x000549ed) cale_bg_pane_g4

0x1075,	// (0x000549f5) cale_bg_pane_g5

0x107d,	// (0x000549fd) cale_bg_pane_g6

0x1085,	// (0x00054a05) cale_bg_pane_g7

0x108d,	// (0x00054a0d) cale_bg_pane_g8

0x1095,	// (0x00054a15) cale_bg_pane_g9

0x0008,

0xf27b,	// (0x00062bfb) cale_bg_pane_g

0x57f8,	// (0x00059178) list_cale_time_pane_ParamLimits

0x57f8,	// (0x00059178) list_cale_time_pane

0x109d,	// (0x00054a1d) list_cale_time_pane_g1_ParamLimits

0x109d,	// (0x00054a1d) list_cale_time_pane_g1

0x10a9,	// (0x00054a29) list_cale_time_pane_g2_ParamLimits

0x10a9,	// (0x00054a29) list_cale_time_pane_g2

0x580e,	// (0x0005918e) list_cale_time_pane_g3_ParamLimits

0x580e,	// (0x0005918e) list_cale_time_pane_g3

0x581c,	// (0x0005919c) list_cale_time_pane_g4_ParamLimits

0x581c,	// (0x0005919c) list_cale_time_pane_g4

0x582a,	// (0x000591aa) list_cale_time_pane_g5_ParamLimits

0x582a,	// (0x000591aa) list_cale_time_pane_g5

0x0005,

0xf28e,	// (0x00062c0e) list_cale_time_pane_g_ParamLimits

0xf28e,	// (0x00062c0e) list_cale_time_pane_g

0x10c3,	// (0x00054a43) list_cale_time_pane_t1_ParamLimits

0x10c3,	// (0x00054a43) list_cale_time_pane_t1

0x10eb,	// (0x00054a6b) list_cale_time_pane_t2_ParamLimits

0x10eb,	// (0x00054a6b) list_cale_time_pane_t2

0x5ab7,	// (0x00059437) aid_blid_cardinal_pane

0x5af5,	// (0x00059475) compass_pane_t4

0x1113,	// (0x00054a93) list_cale_time_pane_t4_ParamLimits

0x1113,	// (0x00054a93) list_cale_time_pane_t4

0x5b03,	// (0x00059483) compass_pane_t5

0x5b11,	// (0x00059491) compass_pane_t6

0x5b1f,	// (0x0005949f) compass_pane_t7

0x159d,	// (0x00054f1d) navi_pane_cc_t1

0x177a,	// (0x000550fa) aid_phob_thumbnail_center_pane

0x5f74,	// (0x000598f4) main_postcard_pane_g4_ParamLimits

0x0002,

0xf29b,	// (0x00062c1b) list_cale_time_pane_t_ParamLimits

0xf29b,	// (0x00062c1b) list_cale_time_pane_t

0xc16d,	// (0x0005faed) bg_popup_window_pane_cp02_ParamLimits

0xc16d,	// (0x0005faed) bg_popup_window_pane_cp02

0x113b,	// (0x00054abb) heading_pane_cp01_ParamLimits

0x113b,	// (0x00054abb) heading_pane_cp01

0x1147,	// (0x00054ac7) loc_req_pane_ParamLimits

0x1147,	// (0x00054ac7) loc_req_pane

0x1157,	// (0x00054ad7) loc_type_pane_ParamLimits

0x1157,	// (0x00054ad7) loc_type_pane

0x1169,	// (0x00054ae9) loc_type_pane_t1_ParamLimits

0x1169,	// (0x00054ae9) loc_type_pane_t1

0x117b,	// (0x00054afb) loc_type_pane_t2_ParamLimits

0x117b,	// (0x00054afb) loc_type_pane_t2

0x118d,	// (0x00054b0d) loc_type_pane_t3_ParamLimits

0x118d,	// (0x00054b0d) loc_type_pane_t3

0x0002,

0xf2a2,	// (0x00062c22) loc_type_pane_t_ParamLimits

0xf2a2,	// (0x00062c22) loc_type_pane_t

0x119f,	// (0x00054b1f) list_loc_req_pane

0x11a9,	// (0x00054b29) scroll_pane_cp012

0x5838,	// (0x000591b8) list_single_loc_request_popup_menu_pane_ParamLimits

0x5838,	// (0x000591b8) list_single_loc_request_popup_menu_pane

0x11b4,	// (0x00054b34) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x11b4,	// (0x00054b34) list_single_loc_request_popup_menu_pane_g1

0x11c0,	// (0x00054b40) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x11c0,	// (0x00054b40) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2a9,	// (0x00062c29) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2a9,	// (0x00062c29) list_single_loc_request_popup_menu_pane_g

0x11cc,	// (0x00054b4c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x11cc,	// (0x00054b4c) list_single_loc_request_popup_menu_pane_t1

0x09f9,	// (0x00054379) bg_popup_window_pane_cp03_ParamLimits

0x09f9,	// (0x00054379) bg_popup_window_pane_cp03

0x2cc8,	// (0x00056648) heading_loc_req_pane_ParamLimits

0x2cc8,	// (0x00056648) heading_loc_req_pane

0x5845,	// (0x000591c5) popup_dyc_status_message_window_g1_ParamLimits

0x5845,	// (0x000591c5) popup_dyc_status_message_window_g1

0x5859,	// (0x000591d9) popup_dyc_status_message_window_t1_ParamLimits

0x5859,	// (0x000591d9) popup_dyc_status_message_window_t1

0x586e,	// (0x000591ee) popup_dyc_status_message_window_t2_ParamLimits

0x586e,	// (0x000591ee) popup_dyc_status_message_window_t2

0x5883,	// (0x00059203) popup_dyc_status_message_window_t3_ParamLimits

0x5883,	// (0x00059203) popup_dyc_status_message_window_t3

0x0002,

0xf2ae,	// (0x00062c2e) popup_dyc_status_message_window_t_ParamLimits

0xf2ae,	// (0x00062c2e) popup_dyc_status_message_window_t

0xc516,	// (0x0005fe96) bg_heading_pane_cp01

0x11e2,	// (0x00054b62) heading_loc_req_pane_g1

0x11ea,	// (0x00054b6a) heading_loc_req_pane_g2

0x11f2,	// (0x00054b72) heading_loc_req_pane_g3

0x0002,

0xf2b5,	// (0x00062c35) heading_loc_req_pane_g

0x11fa,	// (0x00054b7a) heading_loc_req_pane_t1

0x1219,	// (0x00054b99) bg_popup_sub_pane_cp01_ParamLimits

0x1219,	// (0x00054b99) bg_popup_sub_pane_cp01

0x1227,	// (0x00054ba7) popup_cale_events_window_g1_ParamLimits

0x1227,	// (0x00054ba7) popup_cale_events_window_g1

0x1247,	// (0x00054bc7) popup_cale_events_window_g2_ParamLimits

0x1247,	// (0x00054bc7) popup_cale_events_window_g2

0x0001,

0xf2d7,	// (0x00062c57) popup_cale_events_window_g_ParamLimits

0xf2d7,	// (0x00062c57) popup_cale_events_window_g

0x1267,	// (0x00054be7) popup_cale_events_window_t1_ParamLimits

0x1267,	// (0x00054be7) popup_cale_events_window_t1

0x1279,	// (0x00054bf9) popup_cale_events_window_t2_ParamLimits

0x1279,	// (0x00054bf9) popup_cale_events_window_t2

0x12b7,	// (0x00054c37) popup_cale_events_window_t3_ParamLimits

0x12b7,	// (0x00054c37) popup_cale_events_window_t3

0x12f1,	// (0x00054c71) popup_cale_events_window_t4_ParamLimits

0x12f1,	// (0x00054c71) popup_cale_events_window_t4

0x0003,

0xf2dc,	// (0x00062c5c) popup_cale_events_window_t_ParamLimits

0xf2dc,	// (0x00062c5c) popup_cale_events_window_t

0x58ab,	// (0x0005922b) call_type_pane

0x58bb,	// (0x0005923b) popup_call_status_window_g1

0x58cf,	// (0x0005924f) popup_call_status_window_g2

0x58e3,	// (0x00059263) popup_call_status_window_g3

0x0002,

0xf2e5,	// (0x00062c65) popup_call_status_window_g

0x1335,	// (0x00054cb5) call_type_pane_g1

0x133e,	// (0x00054cbe) call_type_pane_g2

0x0001,

0xf2ec,	// (0x00062c6c) call_type_pane_g

0xc516,	// (0x0005fe96) bg_popup_sub_pane_cp02

0x1347,	// (0x00054cc7) listscroll_popup_wml_pane

0x134f,	// (0x00054ccf) list_wml_pane

0x1359,	// (0x00054cd9) scroll_pane_cp013

0x1364,	// (0x00054ce4) list_single_graphic_popup_wml_pane_ParamLimits

0x1364,	// (0x00054ce4) list_single_graphic_popup_wml_pane

0x0a11,	// (0x00054391) list_single_graphic_popup_wml_pane_g1

0x1378,	// (0x00054cf8) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f1,	// (0x00062c71) list_single_graphic_popup_wml_pane_g

0x1380,	// (0x00054d00) list_single_graphic_popup_wml_pane_t1

0x1396,	// (0x00054d16) aid_call_pane

0x09f1,	// (0x00054371) popup_clock_analogue_window_g1

0x09f1,	// (0x00054371) popup_clock_analogue_window_g2

0xc73a,	// (0x000600ba) popup_clock_analogue_window_g3

0xc73a,	// (0x000600ba) popup_clock_analogue_window_g4

0x0a11,	// (0x00054391) popup_clock_analogue_window_g5

0x0004,

0xf2f6,	// (0x00062c76) popup_clock_analogue_window_g

0xc742,	// (0x000600c2) popup_clock_analogue_window_t1

0xc750,	// (0x000600d0) clock_digital_number_pane_ParamLimits

0xc750,	// (0x000600d0) clock_digital_number_pane

0xc75c,	// (0x000600dc) clock_digital_number_pane_cp02_ParamLimits

0xc75c,	// (0x000600dc) clock_digital_number_pane_cp02

0xc768,	// (0x000600e8) clock_digital_number_pane_cp03_ParamLimits

0xc768,	// (0x000600e8) clock_digital_number_pane_cp03

0xc774,	// (0x000600f4) clock_digital_number_pane_cp04_ParamLimits

0xc774,	// (0x000600f4) clock_digital_number_pane_cp04

0xc780,	// (0x00060100) clock_digital_separator_pane_ParamLimits

0xc780,	// (0x00060100) clock_digital_separator_pane

0xc78c,	// (0x0006010c) popup_clock_digital_window_t1

0x0a11,	// (0x00054391) clock_digital_number_pane_g1

0x0a11,	// (0x00054391) clock_digital_number_pane_g2

0x0001,

0xf276,	// (0x00062bf6) clock_digital_number_pane_g

0x0a11,	// (0x00054391) clock_digital_separator_pane_g1

0x0a11,	// (0x00054391) clock_digital_separator_pane_g2

0x0001,

0xf276,	// (0x00062bf6) clock_digital_separator_pane_g

0xc516,	// (0x0005fe96) bg_popup_window_pane_cp04

0x139e,	// (0x00054d1e) heading_pane_cp03

0x0c98,	// (0x00054618) listscroll_popup_gms_pane

0xc516,	// (0x0005fe96) grid_large_graphic_popup_pane

0x13a7,	// (0x00054d27) listscroll_popup_gms_pane_g1

0x13b0,	// (0x00054d30) listscroll_popup_gms_pane_g2

0x0001,

0xf301,	// (0x00062c81) listscroll_popup_gms_pane_g

0x13b9,	// (0x00054d39) scroll_pane_cp014

0xc666,	// (0x0005ffe6) cell_large_graphic_popup_pane_ParamLimits

0xc666,	// (0x0005ffe6) cell_large_graphic_popup_pane

0x0a74,	// (0x000543f4) cell_large_graphic_popup_pane_g1_ParamLimits

0x0a74,	// (0x000543f4) cell_large_graphic_popup_pane_g1

0x13c2,	// (0x00054d42) cell_large_graphic_popup_pane_g2_ParamLimits

0x13c2,	// (0x00054d42) cell_large_graphic_popup_pane_g2

0x13d0,	// (0x00054d50) cell_large_graphic_popup_pane_g3_ParamLimits

0x13d0,	// (0x00054d50) cell_large_graphic_popup_pane_g3

0x13de,	// (0x00054d5e) cell_large_graphic_popup_pane_g4_ParamLimits

0x13de,	// (0x00054d5e) cell_large_graphic_popup_pane_g4

0x0003,

0xf306,	// (0x00062c86) cell_large_graphic_popup_pane_g_ParamLimits

0xf306,	// (0x00062c86) cell_large_graphic_popup_pane_g

0xc516,	// (0x0005fe96) grid_highlight_pane_cp010

0x0a11,	// (0x00054391) bg_popup_call_pane_g1

0x13ef,	// (0x00054d6f) list_single_graphic_popup_conf_pane_ParamLimits

0x13ef,	// (0x00054d6f) list_single_graphic_popup_conf_pane

0x1402,	// (0x00054d82) list_highlight_pane_cp01

0x140b,	// (0x00054d8b) list_single_graphic_popup_conf_pane_g1

0x1413,	// (0x00054d93) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf30f,	// (0x00062c8f) list_single_graphic_popup_conf_pane_g

0x141b,	// (0x00054d9b) list_single_graphic_popup_conf_pane_t1

0x1429,	// (0x00054da9) linegrid_cams_pane_g1

0x58f2,	// (0x00059272) linegrid_cams_pane_g2

0x0bd7,	// (0x00054557) linegrid_cams_pane_g3

0x1432,	// (0x00054db2) linegrid_cams_pane_g4

0x58fb,	// (0x0005927b) linegrid_cams_pane_g5

0x5904,	// (0x00059284) linegrid_cams_pane_g6

0x0c87,	// (0x00054607) linegrid_cams_pane_g7

0x0006,

0xf314,	// (0x00062c94) linegrid_cams_pane_g

0x143b,	// (0x00054dbb) popup_clock_analogue_window

0x143b,	// (0x00054dbb) popup_clock_digital_window

0xc516,	// (0x0005fe96) popup_phob_thumbnail_window

0x0a11,	// (0x00054391) call_video_uplink_pane_g1

0x1444,	// (0x00054dc4) call_video_uplink_pane_g2

0x0001,

0xf323,	// (0x00062ca3) call_video_uplink_pane_g

0x144c,	// (0x00054dcc) video_uplink_pane

0x1454,	// (0x00054dd4) mce_image_pane_g1

0x590f,	// (0x0005928f) mce_image_pane_g2

0x5917,	// (0x00059297) mce_image_pane_g3

0x591f,	// (0x0005929f) mce_image_pane_g4

0x5929,	// (0x000592a9) mce_image_pane_g5

0x0004,

0xf328,	// (0x00062ca8) mce_image_pane_g

0x145e,	// (0x00054dde) control_top_pane_stacon_cp01_ParamLimits

0x145e,	// (0x00054dde) control_top_pane_stacon_cp01

0x1472,	// (0x00054df2) uni_indicator_pane_stacon_cp01_ParamLimits

0x1472,	// (0x00054df2) uni_indicator_pane_stacon_cp01

0x1483,	// (0x00054e03) bg_popup_sub_pane_cp03

0x5931,	// (0x000592b1) chi_dic_find_pane

0x5939,	// (0x000592b9) listscroll_chi_dic_pane

0x5942,	// (0x000592c2) main_pane_chidic_g1

0x5955,	// (0x000592d5) chi_dic_find_pane_t1

0x148d,	// (0x00054e0d) find_chidic_pane

0x1496,	// (0x00054e16) chi_dic_list_pane_ParamLimits

0x1496,	// (0x00054e16) chi_dic_list_pane

0x14a7,	// (0x00054e27) scroll_pane_cp020

0x5963,	// (0x000592e3) find_chidic_pane_t1

0xc516,	// (0x0005fe96) input_focus_pane_cp06

0x5972,	// (0x000592f2) list_chi_dic_pane_ParamLimits

0x5972,	// (0x000592f2) list_chi_dic_pane

0x5984,	// (0x00059304) list_chi_dic_pane_t1_ParamLimits

0x5984,	// (0x00059304) list_chi_dic_pane_t1

0xc516,	// (0x0005fe96) list_highlight_pane_cp020

0x14af,	// (0x00054e2f) bg_cale_heading_pane_g1

0x5997,	// (0x00059317) bg_cale_heading_pane_g2

0x599f,	// (0x0005931f) bg_cale_heading_pane_g3

0x59a7,	// (0x00059327) bg_cale_heading_pane_g4

0x59b1,	// (0x00059331) bg_cale_heading_pane_g5

0x59bb,	// (0x0005933b) bg_cale_heading_pane_g6

0x59c3,	// (0x00059343) bg_cale_heading_pane_g7

0x59cb,	// (0x0005934b) bg_cale_heading_pane_g8

0x59d5,	// (0x00059355) bg_cale_heading_pane_g9

0x0008,

0xf333,	// (0x00062cb3) bg_cale_heading_pane_g

0x14af,	// (0x00054e2f) bg_cale_side_pane_g1

0x59df,	// (0x0005935f) bg_cale_side_pane_g2

0x59e7,	// (0x00059367) bg_cale_side_pane_g3

0x59ef,	// (0x0005936f) bg_cale_side_pane_g4

0x59f7,	// (0x00059377) bg_cale_side_pane_g5

0x59ff,	// (0x0005937f) bg_cale_side_pane_g6

0x5a07,	// (0x00059387) bg_cale_side_pane_g7

0x5a0f,	// (0x0005938f) bg_cale_side_pane_g8

0x5a17,	// (0x00059397) bg_cale_side_pane_g9

0x0008,

0xf346,	// (0x00062cc6) bg_cale_side_pane_g

0x5a1f,	// (0x0005939f) popup_call_status_window_ParamLimits

0x5a1f,	// (0x0005939f) popup_call_status_window

0x14b7,	// (0x00054e37) stacon_top_pane

0x14bf,	// (0x00054e3f) status_pane_ParamLimits

0x14bf,	// (0x00054e3f) status_pane

0x14d4,	// (0x00054e54) status_small_pane

0x14dc,	// (0x00054e5c) control_pane

0xc516,	// (0x0005fe96) stacon_bottom_pane

0x14e4,	// (0x00054e64) list_single_mce_smart_pane_t1_ParamLimits

0x14e4,	// (0x00054e64) list_single_mce_smart_pane_t1

0x14f7,	// (0x00054e77) list_single_mce_smart_pane_t2_ParamLimits

0x14f7,	// (0x00054e77) list_single_mce_smart_pane_t2

0x0001,

0xf359,	// (0x00062cd9) list_single_mce_smart_pane_t_ParamLimits

0xf359,	// (0x00062cd9) list_single_mce_smart_pane_t

0x5a66,	// (0x000593e6) compass_pane

0x5a6f,	// (0x000593ef) main_location2_pane_t1

0x5a81,	// (0x00059401) main_location2_pane_t2

0x5a93,	// (0x00059413) main_location2_pane_t3

0x0003,

0xf35e,	// (0x00062cde) main_location2_pane_t

0x1516,	// (0x00054e96) compass_pane_g1_ParamLimits

0x1516,	// (0x00054e96) compass_pane_g1

0x5ad7,	// (0x00059457) compass_pane_t1

0x5ae6,	// (0x00059466) compass_pane_t2

0x0005,

0xf367,	// (0x00062ce7) compass_pane_t

0x5b2d,	// (0x000594ad) text_secondary_cp61

0x1594,	// (0x00054f14) navi_pane_cams_g5

0x1610,	// (0x00054f90) navi_pane_im_t1

0x161e,	// (0x00054f9e) navi_pane_mp_g1_ParamLimits

0x161e,	// (0x00054f9e) navi_pane_mp_g1

0x1632,	// (0x00054fb2) navi_pane_mp_g2_ParamLimits

0x1632,	// (0x00054fb2) navi_pane_mp_g2

0x163e,	// (0x00054fbe) navi_pane_mp_g3_ParamLimits

0x163e,	// (0x00054fbe) navi_pane_mp_g3

0x0002,

0xf37b,	// (0x00062cfb) navi_pane_mp_g_ParamLimits

0xf37b,	// (0x00062cfb) navi_pane_mp_g

0x164a,	// (0x00054fca) navi_pane_mp_t1

0x1658,	// (0x00054fd8) navi_pane_mp_t2

0x0002,

0xf382,	// (0x00062d02) navi_pane_mp_t

0x16c3,	// (0x00055043) navi_pane_vt_g1

0x164a,	// (0x00054fca) navi_pane_vt_t1

0x16cb,	// (0x0005504b) navi_slider_pane

0x0c98,	// (0x00054618) zooming_pane

0x16db,	// (0x0005505b) navi_slider_pane_g1

0xc7a9,	// (0x00060129) navi_slider_pane_g2

0x0006,

0xf389,	// (0x00062d09) navi_slider_pane_g

0x16ff,	// (0x0005507f) aid_levels_zoom

0x1707,	// (0x00055087) zooming_pane_g1

0x170f,	// (0x0005508f) zooming_pane_g2

0x170f,	// (0x0005508f) zooming_pane_g3

0x0002,

0xf398,	// (0x00062d18) zooming_pane_g

0x1717,	// (0x00055097) level_10_zoom

0x1720,	// (0x000550a0) level_11_zoom

0x1729,	// (0x000550a9) level_1_zoom

0x1732,	// (0x000550b2) level_2_zoom

0x173b,	// (0x000550bb) level_3_zoom

0x1744,	// (0x000550c4) level_4_zoom

0x174d,	// (0x000550cd) level_5_zoom

0x1756,	// (0x000550d6) level_6_zoom

0x175f,	// (0x000550df) level_7_zoom

0x1768,	// (0x000550e8) level_8_zoom

0x1771,	// (0x000550f1) level_9_zoom

0x1782,	// (0x00055102) popup_phob_thumbnail_window_g1

0x178a,	// (0x0005510a) popup_phob_thumbnail_window_g2

0x0001,

0xf39f,	// (0x00062d1f) popup_phob_thumbnail_window_g

0x661c,	// (0x00059f9c) level_1_location

0x6624,	// (0x00059fa4) level_2_location

0x662c,	// (0x00059fac) level_3_location

0x6634,	// (0x00059fb4) level_4_location

0x0c98,	// (0x00054618) level_5_location

0x5b7e,	// (0x000594fe) mce_icon_pane_g1

0x5b88,	// (0x00059508) mce_icon_pane_g2

0x0001,

0xf3a4,	// (0x00062d24) mce_icon_pane_g

0x2ce8,	// (0x00056668) main_mup_pane_g1_ParamLimits

0x2ce8,	// (0x00056668) main_mup_pane_g1

0x2ce8,	// (0x00056668) main_mup_pane_g2_ParamLimits

0x2ce8,	// (0x00056668) main_mup_pane_g2

0x2ce8,	// (0x00056668) main_mup_pane_g3_ParamLimits

0x2ce8,	// (0x00056668) main_mup_pane_g3

0x2ce8,	// (0x00056668) main_mup_pane_g4_ParamLimits

0x2ce8,	// (0x00056668) main_mup_pane_g4

0x2ce8,	// (0x00056668) main_mup_pane_g5_ParamLimits

0x2ce8,	// (0x00056668) main_mup_pane_g5

0x2ce8,	// (0x00056668) main_mup_pane_g6_ParamLimits

0x2ce8,	// (0x00056668) main_mup_pane_g6

0x2ce8,	// (0x00056668) main_mup_pane_g7_ParamLimits

0x2ce8,	// (0x00056668) main_mup_pane_g7

0x2ce8,	// (0x00056668) main_mup_pane_g8_ParamLimits

0x2ce8,	// (0x00056668) main_mup_pane_g8

0x2ce8,	// (0x00056668) main_mup_pane_g9_ParamLimits

0x2ce8,	// (0x00056668) main_mup_pane_g9

0x2ce8,	// (0x00056668) main_mup_pane_g10_ParamLimits

0x2ce8,	// (0x00056668) main_mup_pane_g10

0x2ce8,	// (0x00056668) main_mup_pane_g11_ParamLimits

0x2ce8,	// (0x00056668) main_mup_pane_g11

0x0a74,	// (0x000543f4) main_mup_pane_g12_ParamLimits

0x0a74,	// (0x000543f4) main_mup_pane_g12

0x2ce8,	// (0x00056668) main_mup_pane_g13_ParamLimits

0x2ce8,	// (0x00056668) main_mup_pane_g13

0x000c,

0xf3a9,	// (0x00062d29) main_mup_pane_g_ParamLimits

0xf3a9,	// (0x00062d29) main_mup_pane_g

0x2cd4,	// (0x00056654) main_mup_pane_t1_ParamLimits

0x2cd4,	// (0x00056654) main_mup_pane_t1

0x2cd4,	// (0x00056654) main_mup_pane_t2_ParamLimits

0x2cd4,	// (0x00056654) main_mup_pane_t2

0x2cd4,	// (0x00056654) main_mup_pane_t3_ParamLimits

0x2cd4,	// (0x00056654) main_mup_pane_t3

0x0ce8,	// (0x00054668) main_mup_pane_t4_ParamLimits

0x0ce8,	// (0x00054668) main_mup_pane_t4

0x0ce8,	// (0x00054668) main_mup_pane_t5_ParamLimits

0x0ce8,	// (0x00054668) main_mup_pane_t5

0x0ca0,	// (0x00054620) main_mup_pane_t6_ParamLimits

0x0ca0,	// (0x00054620) main_mup_pane_t6

0x0005,

0xf3c4,	// (0x00062d44) main_mup_pane_t_ParamLimits

0xf3c4,	// (0x00062d44) main_mup_pane_t

0xc666,	// (0x0005ffe6) mup_progress_pane_ParamLimits

0xc666,	// (0x0005ffe6) mup_progress_pane

0x2a2e,	// (0x000563ae) mup_visualizer_pane_ParamLimits

0x2a2e,	// (0x000563ae) mup_visualizer_pane

0x2a2e,	// (0x000563ae) mup_volume_pane_ParamLimits

0x2a2e,	// (0x000563ae) mup_volume_pane

0x0a82,	// (0x00054402) mup_visualizer_pane_g1_ParamLimits

0x0a82,	// (0x00054402) mup_visualizer_pane_g1

0x17a0,	// (0x00055120) mup_visualizer_pane_g2_ParamLimits

0x17a0,	// (0x00055120) mup_visualizer_pane_g2

0x0a74,	// (0x000543f4) mup_visualizer_pane_g3_ParamLimits

0x0a74,	// (0x000543f4) mup_visualizer_pane_g3

0x0002,

0xf3d1,	// (0x00062d51) mup_visualizer_pane_g_ParamLimits

0xf3d1,	// (0x00062d51) mup_visualizer_pane_g

0x0cce,	// (0x0005464e) mup_volume_pane_g1

0x0cce,	// (0x0005464e) mup_volume_pane_g2

0x0001,

0xf3d8,	// (0x00062d58) mup_volume_pane_g

0x0cce,	// (0x0005464e) mup_progress_pane_g1

0x0cce,	// (0x0005464e) mup_progress_pane_g2

0x0cce,	// (0x0005464e) mup_progress_pane_g3

0x0002,

0xf3dd,	// (0x00062d5d) mup_progress_pane_g

0xc516,	// (0x0005fe96) bg_popup_window_pane_cp05

0x17ae,	// (0x0005512e) heading_pane_cp02_ParamLimits

0x17ae,	// (0x0005512e) heading_pane_cp02

0x17c8,	// (0x00055148) list_popup_blid_pane

0x17d0,	// (0x00055150) list_blid_sat_info_pane_ParamLimits

0x17d0,	// (0x00055150) list_blid_sat_info_pane

0x17e3,	// (0x00055163) list_blid_sat_info_pane_g1

0x17eb,	// (0x0005516b) list_blid_sat_info_pane_t1

0x5c88,	// (0x00059608) mup_equalizer_pane_ParamLimits

0x5c88,	// (0x00059608) mup_equalizer_pane

0x5ca1,	// (0x00059621) mup_equalizer_pane_cp1_ParamLimits

0x5ca1,	// (0x00059621) mup_equalizer_pane_cp1

0x5cbe,	// (0x0005963e) mup_equalizer_pane_cp2_ParamLimits

0x5cbe,	// (0x0005963e) mup_equalizer_pane_cp2

0x5cdb,	// (0x0005965b) mup_equalizer_pane_cp3_ParamLimits

0x5cdb,	// (0x0005965b) mup_equalizer_pane_cp3

0x5cfc,	// (0x0005967c) mup_equalizer_pane_cp4_ParamLimits

0x5cfc,	// (0x0005967c) mup_equalizer_pane_cp4

0x5d1d,	// (0x0005969d) mup_equalizer_pane_cp5

0x5d31,	// (0x000596b1) mup_equalizer_pane_cp6

0x5d45,	// (0x000596c5) mup_equalizer_pane_cp7

0x2932,	// (0x000562b2) bg_popup_call_poc_act_pane_g9

0x293a,	// (0x000562ba) bg_popup_call_poc_act_pane_g10

0x2942,	// (0x000562c2) bg_popup_call_poc_act_pane_g11

0x000a,

0x09f9,	// (0x00054379) mup_scale_pane

0x0a11,	// (0x00054391) mup_scale_pane_g1

0x17f9,	// (0x00055179) mup_scale_pane_g2

0x0006,

0xf3f9,	// (0x00062d79) mup_scale_pane_g

0x181d,	// (0x0005519d) msg_data_pane

0x1825,	// (0x000551a5) scroll_pane_cp017

0x5d6b,	// (0x000596eb) bg_list_pane_cp04_ParamLimits

0x5d6b,	// (0x000596eb) bg_list_pane_cp04

0x182d,	// (0x000551ad) msg_data_pane_g1

0x5d8b,	// (0x0005970b) msg_data_pane_g2

0x5d93,	// (0x00059713) msg_data_pane_g3

0x5d9b,	// (0x0005971b) msg_data_pane_g4

0x5da3,	// (0x00059723) msg_data_pane_g5

0x5dab,	// (0x0005972b) msg_data_pane_g6

0x5db3,	// (0x00059733) msg_data_pane_g7

0x0006,

0xf408,	// (0x00062d88) msg_data_pane_g

0x5dbb,	// (0x0005973b) msg_text_pane_ParamLimits

0x5dbb,	// (0x0005973b) msg_text_pane

0x5dea,	// (0x0005976a) qrid_highlight_pane_cp011_ParamLimits

0x5dea,	// (0x0005976a) qrid_highlight_pane_cp011

0xc516,	// (0x0005fe96) msg_body_pane

0xc516,	// (0x0005fe96) msg_header_pane

0x183e,	// (0x000551be) input_focus_pane_cp07

0x5e0e,	// (0x0005978e) msg_header_pane_t1_ParamLimits

0x5e0e,	// (0x0005978e) msg_header_pane_t1

0x5e24,	// (0x000597a4) msg_header_pane_t2_ParamLimits

0x5e24,	// (0x000597a4) msg_header_pane_t2

0x0001,

0xf41c,	// (0x00062d9c) msg_header_pane_t_ParamLimits

0xf41c,	// (0x00062d9c) msg_header_pane_t

0x1853,	// (0x000551d3) msg_body_pane_g1

0x5e3b,	// (0x000597bb) msg_body_pane_t1_ParamLimits

0x5e3b,	// (0x000597bb) msg_body_pane_t1

0x5e6c,	// (0x000597ec) msg_body_pane_t2_ParamLimits

0x5e6c,	// (0x000597ec) msg_body_pane_t2

0x5e7e,	// (0x000597fe) msg_body_pane_t3_ParamLimits

0x5e7e,	// (0x000597fe) msg_body_pane_t3

0x0002,

0xf421,	// (0x00062da1) msg_body_pane_t_ParamLimits

0xf421,	// (0x00062da1) msg_body_pane_t

0x5eca,	// (0x0005984a) main_viewer_pane_g1_ParamLimits

0x5eca,	// (0x0005984a) main_viewer_pane_g1

0x5ed8,	// (0x00059858) main_viewer_pane_g2_ParamLimits

0x5ed8,	// (0x00059858) main_viewer_pane_g2

0x5ee6,	// (0x00059866) main_viewer_pane_g3_ParamLimits

0x5ee6,	// (0x00059866) main_viewer_pane_g3

0x5ef5,	// (0x00059875) main_viewer_pane_g4_ParamLimits

0x5ef5,	// (0x00059875) main_viewer_pane_g4

0xc7d3,	// (0x00060153) main_viewer_pane_g5_ParamLimits

0xc7d3,	// (0x00060153) main_viewer_pane_g5

0xc7d3,	// (0x00060153) main_viewer_pane_g7_ParamLimits

0xc7d3,	// (0x00060153) main_viewer_pane_g7

0x11b4,	// (0x00054b34) main_viewer_pane_g8_ParamLimits

0x11b4,	// (0x00054b34) main_viewer_pane_g8

0x0007,

0xf431,	// (0x00062db1) main_viewer_pane_g_ParamLimits

0xf431,	// (0x00062db1) main_viewer_pane_g

0x185b,	// (0x000551db) viewer_content_pane_ParamLimits

0x185b,	// (0x000551db) viewer_content_pane

0x5f31,	// (0x000598b1) main_postcard_pane_g1_ParamLimits

0x5f31,	// (0x000598b1) main_postcard_pane_g1

0x5f47,	// (0x000598c7) main_postcard_pane_g2_ParamLimits

0x5f47,	// (0x000598c7) main_postcard_pane_g2

0x5f5d,	// (0x000598dd) main_postcard_pane_g3_ParamLimits

0x5f5d,	// (0x000598dd) main_postcard_pane_g3

0x0005,

0xf442,	// (0x00062dc2) main_postcard_pane_g_ParamLimits

0xf442,	// (0x00062dc2) main_postcard_pane_g

0x5f74,	// (0x000598f4) main_postcard_pane_g4

0x2ac4,	// (0x00056444) smil_status_volume_pane_g2

0x5fb7,	// (0x00059937) postcard_pane_ParamLimits

0x5fb7,	// (0x00059937) postcard_pane

0x1877,	// (0x000551f7) postcard_pane_g1_ParamLimits

0x1877,	// (0x000551f7) postcard_pane_g1

0x5ff9,	// (0x00059979) postcard_pane_g2_ParamLimits

0x5ff9,	// (0x00059979) postcard_pane_g2

0x6005,	// (0x00059985) postcard_pane_g3_ParamLimits

0x6005,	// (0x00059985) postcard_pane_g3

0x1869,	// (0x000551e9) postcard_pane_g4_ParamLimits

0x1869,	// (0x000551e9) postcard_pane_g4

0x6011,	// (0x00059991) postcard_pane_g5_ParamLimits

0x6011,	// (0x00059991) postcard_pane_g5

0x6026,	// (0x000599a6) postcard_pane_g6_ParamLimits

0x6026,	// (0x000599a6) postcard_pane_g6

0x1877,	// (0x000551f7) postcard_pane_g7_ParamLimits

0x1877,	// (0x000551f7) postcard_pane_g7

0x0006,

0xf44f,	// (0x00062dcf) postcard_pane_g_ParamLimits

0xf44f,	// (0x00062dcf) postcard_pane_g

0x603a,	// (0x000599ba) main_mp2_pane_g1_ParamLimits

0x603a,	// (0x000599ba) main_mp2_pane_g1

0x6046,	// (0x000599c6) main_mp2_pane_g2_ParamLimits

0x6046,	// (0x000599c6) main_mp2_pane_g2

0x6052,	// (0x000599d2) main_mp2_pane_g3_ParamLimits

0x6052,	// (0x000599d2) main_mp2_pane_g3

0x0002,

0xf45e,	// (0x00062dde) main_mp2_pane_g_ParamLimits

0xf45e,	// (0x00062dde) main_mp2_pane_g

0x605e,	// (0x000599de) main_mp2_pane_t1_ParamLimits

0x605e,	// (0x000599de) main_mp2_pane_t1

0x6073,	// (0x000599f3) main_mp2_pane_t2_ParamLimits

0x6073,	// (0x000599f3) main_mp2_pane_t2

0x6085,	// (0x00059a05) main_mp2_pane_t3_ParamLimits

0x6085,	// (0x00059a05) main_mp2_pane_t3

0x0002,

0xf465,	// (0x00062de5) main_mp2_pane_t_ParamLimits

0xf465,	// (0x00062de5) main_mp2_pane_t

0x1885,	// (0x00055205) pec_content_pane_ParamLimits

0x1885,	// (0x00055205) pec_content_pane

0x0e43,	// (0x000547c3) scroll_pane_cp015

0x1897,	// (0x00055217) pec_attribute_pane_ParamLimits

0x1897,	// (0x00055217) pec_attribute_pane

0x6097,	// (0x00059a17) pec_content_pane_g1_ParamLimits

0x6097,	// (0x00059a17) pec_content_pane_g1

0x18a7,	// (0x00055227) pec_content_pane_t1_ParamLimits

0x18a7,	// (0x00055227) pec_content_pane_t1

0x18b9,	// (0x00055239) pec_content_pane_t2_ParamLimits

0x18b9,	// (0x00055239) pec_content_pane_t2

0x0001,

0xf46c,	// (0x00062dec) pec_content_pane_t_ParamLimits

0xf46c,	// (0x00062dec) pec_content_pane_t

0x60a3,	// (0x00059a23) list_single_graphic_pane_cp01_ParamLimits

0x60a3,	// (0x00059a23) list_single_graphic_pane_cp01

0x09f9,	// (0x00054379) bg_popup_sub_pane_cp04

0x18cb,	// (0x0005524b) popup_mup_playback_window_g1

0x18d7,	// (0x00055257) popup_mup_playback_window_t1

0x18ec,	// (0x0005526c) popup_mup_playback_window_t2

0x0001,

0xf471,	// (0x00062df1) popup_mup_playback_window_t

0x1923,	// (0x000552a3) main_image_pane_g1_ParamLimits

0x1923,	// (0x000552a3) main_image_pane_g1

0x1966,	// (0x000552e6) scroll_pane_cp018_ParamLimits

0x1966,	// (0x000552e6) scroll_pane_cp018

0x197e,	// (0x000552fe) scroll_pane_cp016_ParamLimits

0x197e,	// (0x000552fe) scroll_pane_cp016

0x6171,	// (0x00059af1) smil2_image_pane_ParamLimits

0x6171,	// (0x00059af1) smil2_image_pane

0x61a1,	// (0x00059b21) smil2_root_pane_ParamLimits

0x61a1,	// (0x00059b21) smil2_root_pane

0x61d9,	// (0x00059b59) smil2_text_pane_ParamLimits

0x61d9,	// (0x00059b59) smil2_text_pane

0xc516,	// (0x0005fe96) bg_list_pane_cp06

0x19ba,	// (0x0005533a) grid_radio_pane

0xc516,	// (0x0005fe96) bg_popup_window_pane_cp06

0x19c2,	// (0x00055342) main_fmradio_pane_t1

0x298a,	// (0x0005630a) heading_pane_cp04

0x19d0,	// (0x00055350) main_fmradio_pane_t2

0x2992,	// (0x00056312) popup_cale_lunar_info_window_g1

0x19de,	// (0x0005535e) main_fmradio_pane_t3

0x299a,	// (0x0005631a) popup_cale_lunar_info_window_g2

0x19ec,	// (0x0005536c) main_fmradio_pane_t4

0x0001,

0x19fa,	// (0x0005537a) main_fmradio_pane_t5

0x0004,

0xf564,	// (0x00062ee4) popup_cale_lunar_info_window_g

0xf486,	// (0x00062e06) main_fmradio_pane_t

0x1a08,	// (0x00055388) wait_bar_pane_cp03

0x1a10,	// (0x00055390) cell_fmradio_pane_ParamLimits

0x1a10,	// (0x00055390) cell_fmradio_pane

0x1877,	// (0x000551f7) cell_fmradio_pane_g1_ParamLimits

0x1877,	// (0x000551f7) cell_fmradio_pane_g1

0xc516,	// (0x0005fe96) grid_highlight_pane_cp011

0x1a23,	// (0x000553a3) poc_content_pane_ParamLimits

0x1a23,	// (0x000553a3) poc_content_pane

0x1a35,	// (0x000553b5) scroll_pane_cp019

0x6259,	// (0x00059bd9) popup_call_poc_act_window_ParamLimits

0x6259,	// (0x00059bd9) popup_call_poc_act_window

0x627d,	// (0x00059bfd) popup_call_poc_inact_window_ParamLimits

0x627d,	// (0x00059bfd) popup_call_poc_inact_window

0xf528,	// (0x00062ea8) bg_popup_call_poc_act_pane_g

0x294a,	// (0x000562ca) bg_popup_call_poc_inact_pane_g1

0x2952,	// (0x000562d2) bg_popup_call_poc_inact_pane_g2

0x1a3d,	// (0x000553bd) popup_call_poc_act_window_g2

0x295a,	// (0x000562da) bg_popup_call_poc_inact_pane_g3

0x28da,	// (0x0005625a) bg_popup_call_poc_inact_pane_g4

0x2962,	// (0x000562e2) bg_popup_call_poc_inact_pane_g5

0x1a45,	// (0x000553c5) popup_call_poc_act_window_t1_ParamLimits

0x1a45,	// (0x000553c5) popup_call_poc_act_window_t1

0x1a6d,	// (0x000553ed) popup_call_poc_act_window_t2_ParamLimits

0x1a6d,	// (0x000553ed) popup_call_poc_act_window_t2

0x1a95,	// (0x00055415) popup_call_poc_act_window_t3_ParamLimits

0x1a95,	// (0x00055415) popup_call_poc_act_window_t3

0x1abd,	// (0x0005543d) popup_call_poc_act_window_t4_ParamLimits

0x1abd,	// (0x0005543d) popup_call_poc_act_window_t4

0x0003,

0xf491,	// (0x00062e11) popup_call_poc_act_window_t_ParamLimits

0xf491,	// (0x00062e11) popup_call_poc_act_window_t

0x296a,	// (0x000562ea) bg_popup_call_poc_inact_pane_g6

0x2972,	// (0x000562f2) bg_popup_call_poc_inact_pane_g7

0x297a,	// (0x000562fa) bg_popup_call_poc_inact_pane_g8

0x1acf,	// (0x0005544f) popup_call_poc_inact_window_g2

0x2982,	// (0x00056302) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf53f,	// (0x00062ebf) bg_popup_call_poc_inact_pane_g

0x1ad7,	// (0x00055457) popup_call_poc_inact_window_t1_ParamLimits

0x1ad7,	// (0x00055457) popup_call_poc_inact_window_t1

0x1aec,	// (0x0005546c) popup_call_poc_inact_window_t2_ParamLimits

0x1aec,	// (0x0005546c) popup_call_poc_inact_window_t2

0x1b01,	// (0x00055481) popup_call_poc_inact_window_t3_ParamLimits

0x1b01,	// (0x00055481) popup_call_poc_inact_window_t3

0x0002,

0xf49a,	// (0x00062e1a) popup_call_poc_inact_window_t_ParamLimits

0xf49a,	// (0x00062e1a) popup_call_poc_inact_window_t

0x2a3c,	// (0x000563bc) context_pane_ParamLimits

0x6b04,	// (0x0005a484) signal_pane_ParamLimits

0x0c98,	// (0x00054618) main_call2_pane

0xc81e,	// (0x0006019e) popup_phob_thumbnail2_window_ParamLimits

0xc81e,	// (0x0006019e) popup_phob_thumbnail2_window

0xc7bb,	// (0x0006013b) aid_hotspot_pointer_arrow_pane

0xc7c3,	// (0x00060143) aid_hotspot_pointer_hand_pane

0x65e6,	// (0x00059f66) phob_pre_status_pane_g5

0x0a1b,	// (0x0005439b) cams_zoom_pane_ParamLimits

0x0a1b,	// (0x0005439b) image_vga_pane_ParamLimits

0x0a74,	// (0x000543f4) main_camera_pane_g1_ParamLimits

0x0a74,	// (0x000543f4) main_camera_pane_g2_ParamLimits

0x0a74,	// (0x000543f4) main_camera_pane_g3_ParamLimits

0x0a74,	// (0x000543f4) main_camera_pane_g4_ParamLimits

0x0a74,	// (0x000543f4) main_camera_pane_g5_ParamLimits

0x0a74,	// (0x000543f4) main_camera_pane_g6_ParamLimits

0x0a74,	// (0x000543f4) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x00062b45) main_camera_pane_g_ParamLimits

0x0ce8,	// (0x00054668) main_camera_pane_t1_ParamLimits

0x0ce8,	// (0x00054668) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x00062b56) main_camera_pane_t_ParamLimits

0x09f9,	// (0x00054379) bg_popup_preview_window_pane_cp01_ParamLimits

0x09f9,	// (0x00054379) bg_popup_preview_window_pane_cp01

0x1b16,	// (0x00055496) popup_phob_thumbnail2_window_g1_ParamLimits

0x1b16,	// (0x00055496) popup_phob_thumbnail2_window_g1

0xc516,	// (0x0005fe96) call2_cli_visual_pane

0x62b1,	// (0x00059c31) popup_call2_audio_conf_window_ParamLimits

0x62b1,	// (0x00059c31) popup_call2_audio_conf_window

0x62d1,	// (0x00059c51) popup_call2_audio_first_window_ParamLimits

0x62d1,	// (0x00059c51) popup_call2_audio_first_window

0x6367,	// (0x00059ce7) popup_call2_audio_in_window_ParamLimits

0x6367,	// (0x00059ce7) popup_call2_audio_in_window

0x63af,	// (0x00059d2f) popup_call2_audio_out_window_ParamLimits

0x63af,	// (0x00059d2f) popup_call2_audio_out_window

0x6419,	// (0x00059d99) popup_call2_audio_second_window_ParamLimits

0x6419,	// (0x00059d99) popup_call2_audio_second_window

0x647f,	// (0x00059dff) popup_call2_audio_wait_window_ParamLimits

0x647f,	// (0x00059dff) popup_call2_audio_wait_window

0xc516,	// (0x0005fe96) bg_popup_call2_act_pane_cp03

0x09db,	// (0x0005435b) list_conf_pane_cp

0x1b22,	// (0x000554a2) popup_call2_audio_conf_window_t1

0x1b30,	// (0x000554b0) list_single_graphic_popup_conf2_pane_ParamLimits

0x1b30,	// (0x000554b0) list_single_graphic_popup_conf2_pane

0x1402,	// (0x00054d82) list_highlight_pane_cp04

0x1b43,	// (0x000554c3) list_single_graphic_popup_conf2_pane_g1

0x1413,	// (0x00054d93) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a1,	// (0x00062e21) list_single_graphic_popup_conf2_pane_g

0x1b4d,	// (0x000554cd) list_single_graphic_popup_conf2_pane_t1

0x1b5b,	// (0x000554db) bg_popup_call2_act_pane_cp01_ParamLimits

0x1b5b,	// (0x000554db) bg_popup_call2_act_pane_cp01

0x1be5,	// (0x00055565) call_type_pane_cp05_ParamLimits

0x1be5,	// (0x00055565) call_type_pane_cp05

0x1c39,	// (0x000555b9) popup_call2_audio_second_window_g1_ParamLimits

0x1c39,	// (0x000555b9) popup_call2_audio_second_window_g1

0x1c8d,	// (0x0005560d) popup_call2_audio_second_window_g2_ParamLimits

0x1c8d,	// (0x0005560d) popup_call2_audio_second_window_g2

0x0002,

0xf4a6,	// (0x00062e26) popup_call2_audio_second_window_g_ParamLimits

0xf4a6,	// (0x00062e26) popup_call2_audio_second_window_g

0x1cf2,	// (0x00055672) popup_call2_audio_second_window_t1_ParamLimits

0x1cf2,	// (0x00055672) popup_call2_audio_second_window_t1

0x1dad,	// (0x0005572d) popup_call2_audio_second_window_t2_ParamLimits

0x1dad,	// (0x0005572d) popup_call2_audio_second_window_t2

0x1e00,	// (0x00055780) popup_call2_audio_second_window_t3_ParamLimits

0x1e00,	// (0x00055780) popup_call2_audio_second_window_t3

0x0003,

0xf4ad,	// (0x00062e2d) popup_call2_audio_second_window_t_ParamLimits

0xf4ad,	// (0x00062e2d) popup_call2_audio_second_window_t

0xc516,	// (0x0005fe96) bg_popup_call2_in_pane_cp02

0xc520,	// (0x0005fea0) call_type_pane_cp04

0x64b9,	// (0x00059e39) popup_call2_audio_wait_window_g1

0x64c1,	// (0x00059e41) popup_call2_audio_wait_window_g2

0x0001,

0xf4b6,	// (0x00062e36) popup_call2_audio_wait_window_g

0xc538,	// (0x0005feb8) popup_call2_audio_wait_window_t3

0x1ef3,	// (0x00055873) bg_popup_call2_act_pane_ParamLimits

0x1ef3,	// (0x00055873) bg_popup_call2_act_pane

0x1fb3,	// (0x00055933) call_type_pane_cp03_ParamLimits

0x1fb3,	// (0x00055933) call_type_pane_cp03

0x2017,	// (0x00055997) popup_call2_audio_first_window_g1_ParamLimits

0x2017,	// (0x00055997) popup_call2_audio_first_window_g1

0x2087,	// (0x00055a07) popup_call2_audio_first_window_g2_ParamLimits

0x2087,	// (0x00055a07) popup_call2_audio_first_window_g2

0x1327,	// (0x00054ca7) popup_call2_audio_first_window_g3_ParamLimits

0x1327,	// (0x00054ca7) popup_call2_audio_first_window_g3

0x0004,

0xf4bb,	// (0x00062e3b) popup_call2_audio_first_window_g_ParamLimits

0xf4bb,	// (0x00062e3b) popup_call2_audio_first_window_g

0x2165,	// (0x00055ae5) popup_call2_audio_first_window_t1_ParamLimits

0x2165,	// (0x00055ae5) popup_call2_audio_first_window_t1

0x2268,	// (0x00055be8) popup_call2_audio_first_window_t4_ParamLimits

0x2268,	// (0x00055be8) popup_call2_audio_first_window_t4

0x234b,	// (0x00055ccb) popup_call2_audio_first_window_t5_ParamLimits

0x234b,	// (0x00055ccb) popup_call2_audio_first_window_t5

0x0003,

0xf4c6,	// (0x00062e46) popup_call2_audio_first_window_t_ParamLimits

0xf4c6,	// (0x00062e46) popup_call2_audio_first_window_t

0x09f1,	// (0x00054371) bg_popup_call2_act_pane_g1

0x29a2,	// (0x00056322) popup_cale_lunar_info_window_t1

0x29b0,	// (0x00056330) popup_cale_lunar_info_window_t2

0x29be,	// (0x0005633e) popup_cale_lunar_info_window_t3

0xc516,	// (0x0005fe96) bg_popup_call2_bubble_pane

0x244c,	// (0x00055dcc) bg_popup_call2_in_pane_cp01_ParamLimits

0x244c,	// (0x00055dcc) bg_popup_call2_in_pane_cp01

0xc1f2,	// (0x0005fb72) call_type_pane_cp02

0x64c9,	// (0x00059e49) popup_call2_audio_out_window_g1_ParamLimits

0x64c9,	// (0x00059e49) popup_call2_audio_out_window_g1

0x2494,	// (0x00055e14) popup_call2_audio_out_window_g2_ParamLimits

0x2494,	// (0x00055e14) popup_call2_audio_out_window_g2

0x64f5,	// (0x00059e75) popup_call2_audio_out_window_g3_ParamLimits

0x64f5,	// (0x00059e75) popup_call2_audio_out_window_g3

0x0003,

0xf4cf,	// (0x00062e4f) popup_call2_audio_out_window_g_ParamLimits

0xf4cf,	// (0x00062e4f) popup_call2_audio_out_window_g

0x24cb,	// (0x00055e4b) popup_call2_audio_out_window_t1_ParamLimits

0x24cb,	// (0x00055e4b) popup_call2_audio_out_window_t1

0x252a,	// (0x00055eaa) popup_call2_audio_out_window_t2_ParamLimits

0x252a,	// (0x00055eaa) popup_call2_audio_out_window_t2

0x257e,	// (0x00055efe) popup_call2_audio_out_window_t3_ParamLimits

0x257e,	// (0x00055efe) popup_call2_audio_out_window_t3

0x2594,	// (0x00055f14) popup_call2_audio_out_window_t4_ParamLimits

0x2594,	// (0x00055f14) popup_call2_audio_out_window_t4

0x25aa,	// (0x00055f2a) popup_call2_audio_out_window_t5_ParamLimits

0x25aa,	// (0x00055f2a) popup_call2_audio_out_window_t5

0x0005,

0xf4d8,	// (0x00062e58) popup_call2_audio_out_window_t_ParamLimits

0xf4d8,	// (0x00062e58) popup_call2_audio_out_window_t

0x260e,	// (0x00055f8e) bg_popup_call2_in_pane_ParamLimits

0x260e,	// (0x00055f8e) bg_popup_call2_in_pane

0x266a,	// (0x00055fea) popup_call2_audio_in_window_g1_ParamLimits

0x266a,	// (0x00055fea) popup_call2_audio_in_window_g1

0x26a2,	// (0x00056022) popup_call2_audio_in_window_g2_ParamLimits

0x26a2,	// (0x00056022) popup_call2_audio_in_window_g2

0x26da,	// (0x0005605a) popup_call2_audio_in_window_g3_ParamLimits

0x26da,	// (0x0005605a) popup_call2_audio_in_window_g3

0x0003,

0xf4e5,	// (0x00062e65) popup_call2_audio_in_window_g_ParamLimits

0xf4e5,	// (0x00062e65) popup_call2_audio_in_window_g

0x2732,	// (0x000560b2) popup_call2_audio_in_window_t1_ParamLimits

0x2732,	// (0x000560b2) popup_call2_audio_in_window_t1

0x27b2,	// (0x00056132) popup_call2_audio_in_window_t2_ParamLimits

0x27b2,	// (0x00056132) popup_call2_audio_in_window_t2

0x2832,	// (0x000561b2) popup_call2_audio_in_window_t3_ParamLimits

0x2832,	// (0x000561b2) popup_call2_audio_in_window_t3

0x284c,	// (0x000561cc) popup_call2_audio_in_window_t4_ParamLimits

0x284c,	// (0x000561cc) popup_call2_audio_in_window_t4

0x285e,	// (0x000561de) popup_call2_audio_in_window_t5_ParamLimits

0x285e,	// (0x000561de) popup_call2_audio_in_window_t5

0x2870,	// (0x000561f0) popup_call2_audio_in_window_t6_ParamLimits

0x2870,	// (0x000561f0) popup_call2_audio_in_window_t6

0x0005,

0xf4ee,	// (0x00062e6e) popup_call2_audio_in_window_t_ParamLimits

0xf4ee,	// (0x00062e6e) popup_call2_audio_in_window_t

0x09f1,	// (0x00054371) bg_popup_call2_in_pane_g1

0x29cc,	// (0x0005634c) popup_cale_lunar_info_window_t4

0x0003,

0xf569,	// (0x00062ee9) popup_cale_lunar_info_window_t

0x09f9,	// (0x00054379) bg_popup_call2_rect_pane_ParamLimits

0x09f9,	// (0x00054379) bg_popup_call2_rect_pane

0xc516,	// (0x0005fe96) call2_cli_visual_graphic_pane

0xc516,	// (0x0005fe96) call2_cli_visual_text_pane

0xc845,	// (0x000601c5) smil_status_volume_pane_g3

0x0002,

0x0a11,	// (0x00054391) call2_cli_visual_graphic_pane_g1

0x0a11,	// (0x00054391) call2_cli_visual_graphic_pane_g2

0x0a11,	// (0x00054391) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4fb,	// (0x00062e7b) call2_cli_visual_graphic_pane_g

0x2882,	// (0x00056202) bg_popup_call2_rect_pane_g1

0x0bbd,	// (0x0005453d) bg_popup_call2_rect_pane_g2

0x288a,	// (0x0005620a) bg_popup_call2_rect_pane_g3

0x2892,	// (0x00056212) bg_popup_call2_rect_pane_g4

0x289a,	// (0x0005621a) bg_popup_call2_rect_pane_g5

0x28a2,	// (0x00056222) bg_popup_call2_rect_pane_g6

0x28aa,	// (0x0005622a) bg_popup_call2_rect_pane_g7

0x28b2,	// (0x00056232) bg_popup_call2_rect_pane_g8

0x28ba,	// (0x0005623a) bg_popup_call2_rect_pane_g9

0x0008,

0xf502,	// (0x00062e82) bg_popup_call2_rect_pane_g

0x28c2,	// (0x00056242) bg_popup_call2_bubble_pane_g1

0x28ca,	// (0x0005624a) bg_popup_call2_bubble_pane_g2

0x28d2,	// (0x00056252) bg_popup_call2_bubble_pane_g3

0x28da,	// (0x0005625a) bg_popup_call2_bubble_pane_g4

0x28e2,	// (0x00056262) bg_popup_call2_bubble_pane_g5

0x28ea,	// (0x0005626a) bg_popup_call2_bubble_pane_g6

0x28f2,	// (0x00056272) bg_popup_call2_bubble_pane_g7

0x28fa,	// (0x0005627a) bg_popup_call2_bubble_pane_g8

0x2902,	// (0x00056282) bg_popup_call2_bubble_pane_g9

0x0008,

0xf515,	// (0x00062e95) bg_popup_call2_bubble_pane_g

0x4297,	// (0x00057c17) aid_cale_week_size_cell_pane

0x4847,	// (0x000581c7) aid_cams_cif_uncrop_pane_ParamLimits

0x4847,	// (0x000581c7) aid_cams_cif_uncrop_pane

0x499d,	// (0x0005831d) aid_cams_size_cell_ParamLimits

0x499d,	// (0x0005831d) aid_cams_size_cell

0x49b1,	// (0x00058331) grid_cams_pane_ParamLimits

0x49cb,	// (0x0005834b) linegrid_cams_pane_ParamLimits

0x4ab1,	// (0x00058431) call_video_pane_t1

0x4acf,	// (0x0005844f) call_video_pane_t2

0x0001,

0xf222,	// (0x00062ba2) call_video_pane_t

0x4ef5,	// (0x00058875) aid_cale_month_size_cell_pane_ParamLimits

0x4ef5,	// (0x00058875) aid_cale_month_size_cell_pane

0xf5ad,	// (0x00062f2d) smil_status_volume_pane_g

0xc852,	// (0x000601d2) volume_smil_pane_ParamLimits

0xc086,	// (0x0005fa06) aid_popup2_width_pane

0x41ee,	// (0x00057b6e) cell_qdial_pane_g4_ParamLimits

0x41ee,	// (0x00057b6e) cell_qdial_pane_g4

0x5ab7,	// (0x00059437) aid_blid_cardinal_pane_ParamLimits

0x5ac3,	// (0x00059443) aid_blid_destination_pane_ParamLimits

0x5ac3,	// (0x00059443) aid_blid_destination_pane

0x09f9,	// (0x00054379) bg_popup_call_poc_act_pane_ParamLimits

0x09f9,	// (0x00054379) bg_popup_call_poc_act_pane

0x09f9,	// (0x00054379) bg_popup_call_poc_inact_pane_ParamLimits

0x09f9,	// (0x00054379) bg_popup_call_poc_inact_pane

0x290a,	// (0x0005628a) bg_popup_call_poc_act_pane_g1

0x2912,	// (0x00056292) bg_popup_call_poc_act_pane_g2

0x291a,	// (0x0005629a) bg_popup_call_poc_act_pane_g3

0x28da,	// (0x0005625a) bg_popup_call_poc_act_pane_g4

0x28e2,	// (0x00056262) bg_popup_call_poc_act_pane_g5

0x2922,	// (0x000562a2) bg_popup_call_poc_act_pane_g6

0x28f2,	// (0x00056272) bg_popup_call_poc_act_pane_g7

0x292a,	// (0x000562aa) bg_popup_call_poc_act_pane_g8

0xc516,	// (0x0005fe96) main_usb_pane

0xc7f9,	// (0x00060179) popup_cale_lunar_info_window

0x4d9b,	// (0x0005871b) im_reading_pane_t1_ParamLimits

0x0d9b,	// (0x0005471b) list_im_pane_ParamLimits

0x0dac,	// (0x0005472c) scroll_pane_cp07_ParamLimits

0xc516,	// (0x0005fe96) grid_highlight_pane_cp012

0x09f9,	// (0x00054379) mup_scale_pane_ParamLimits

0x1877,	// (0x000551f7) main_usb_pane_g1_ParamLimits

0x1877,	// (0x000551f7) main_usb_pane_g1

0x6544,	// (0x00059ec4) main_usb_pane_g2_ParamLimits

0x6544,	// (0x00059ec4) main_usb_pane_g2

0x0001,

0xf552,	// (0x00062ed2) main_usb_pane_g_ParamLimits

0xf552,	// (0x00062ed2) main_usb_pane_g

0x655a,	// (0x00059eda) main_usb_pane_t1_ParamLimits

0x655a,	// (0x00059eda) main_usb_pane_t1

0x656c,	// (0x00059eec) main_usb_pane_t2_ParamLimits

0x656c,	// (0x00059eec) main_usb_pane_t2

0x657e,	// (0x00059efe) main_usb_pane_t3_ParamLimits

0x657e,	// (0x00059efe) main_usb_pane_t3

0x6590,	// (0x00059f10) main_usb_pane_t4_ParamLimits

0x6590,	// (0x00059f10) main_usb_pane_t4

0x65a2,	// (0x00059f22) main_usb_pane_t5_ParamLimits

0x65a2,	// (0x00059f22) main_usb_pane_t5

0x65b4,	// (0x00059f34) main_usb_pane_t6_ParamLimits

0x65b4,	// (0x00059f34) main_usb_pane_t6

0x0005,

0xf557,	// (0x00062ed7) main_usb_pane_t_ParamLimits

0x5a66,	// (0x000593e6) aid_text_placing

0x5a6f,	// (0x000593ef) main_location2_pane_t1_ParamLimits

0x5a81,	// (0x00059401) main_location2_pane_t2_ParamLimits

0x5a93,	// (0x00059413) main_location2_pane_t3_ParamLimits

0x5aa5,	// (0x00059425) main_location2_pane_t4_ParamLimits

0x5aa5,	// (0x00059425) main_location2_pane_t4

0xf35e,	// (0x00062cde) main_location2_pane_t_ParamLimits

0x0a35,	// (0x000543b5) find_pinb_pane_g2_ParamLimits

0x0a35,	// (0x000543b5) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x00062a5a) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x00062a5a) find_pinb_pane_g

0x0a41,	// (0x000543c1) find_pinb_pane_t1_ParamLimits

0x0a53,	// (0x000543d3) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x00062a5f) find_pinb_pane_t_ParamLimits

0xc516,	// (0x0005fe96) main_call3_pane

0x53dc,	// (0x00058d5c) cale_month_day_heading_pane_t1_ParamLimits

0x541e,	// (0x00058d9e) cale_month_day_heading_pane_t2_ParamLimits

0x5453,	// (0x00058dd3) cale_month_day_heading_pane_t3_ParamLimits

0x5488,	// (0x00058e08) cale_month_day_heading_pane_t4_ParamLimits

0x54c5,	// (0x00058e45) cale_month_day_heading_pane_t5_ParamLimits

0x550a,	// (0x00058e8a) cale_month_day_heading_pane_t6_ParamLimits

0x554f,	// (0x00058ecf) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x00062bda) cale_month_day_heading_pane_t_ParamLimits

0x0ff6,	// (0x00054976) smil_status_volume_pane

0x5fd5,	// (0x00059955) postcard_address_pane_ParamLimits

0x5fd5,	// (0x00059955) postcard_address_pane

0x5fe7,	// (0x00059967) postcard_message_pane_ParamLimits

0x5fe7,	// (0x00059967) postcard_message_pane

0x6521,	// (0x00059ea1) call2_cli_visual_pane_t1_ParamLimits

0x6521,	// (0x00059ea1) call2_cli_visual_pane_t1

0x2aef,	// (0x0005646f) postcard_message_pane_t1_ParamLimits

0x2aef,	// (0x0005646f) postcard_message_pane_t1

0x2ad7,	// (0x00056457) postcard_address_pane_t1_ParamLimits

0x2ad7,	// (0x00056457) postcard_address_pane_t1

0x6cb7,	// (0x0005a637) popup_call3_audio_in_window_ParamLimits

0x6cb7,	// (0x0005a637) popup_call3_audio_in_window

0x6b42,	// (0x0005a4c2) bg_popup_call3_in_pane_ParamLimits

0x6b42,	// (0x0005a4c2) bg_popup_call3_in_pane

0x6bb8,	// (0x0005a538) popup_call3_audio_in_window_g1_ParamLimits

0x6bb8,	// (0x0005a538) popup_call3_audio_in_window_g1

0x6bd8,	// (0x0005a558) popup_call3_audio_in_window_g2_ParamLimits

0x6bd8,	// (0x0005a558) popup_call3_audio_in_window_g2

0x6bf8,	// (0x0005a578) popup_call3_audio_in_window_g3_ParamLimits

0x6bf8,	// (0x0005a578) popup_call3_audio_in_window_g3

0x0003,

0xf5b4,	// (0x00062f34) popup_call3_audio_in_window_g_ParamLimits

0xf5b4,	// (0x00062f34) popup_call3_audio_in_window_g

0x6c29,	// (0x0005a5a9) popup_call3_audio_in_window_t1_ParamLimits

0x6c29,	// (0x0005a5a9) popup_call3_audio_in_window_t1

0x6c67,	// (0x0005a5e7) popup_call3_audio_in_window_t2_ParamLimits

0x6c67,	// (0x0005a5e7) popup_call3_audio_in_window_t2

0x6ca5,	// (0x0005a625) popup_call3_audio_in_window_t3_ParamLimits

0x6ca5,	// (0x0005a625) popup_call3_audio_in_window_t3

0x0002,

0xf5bd,	// (0x00062f3d) popup_call3_audio_in_window_t_ParamLimits

0xf5bd,	// (0x00062f3d) popup_call3_audio_in_window_t

0x0c98,	// (0x00054618) bg_popup_call3_rect_pane

0x2882,	// (0x00056202) bg_popup_call3_rect_pane_g1

0x0bbd,	// (0x0005453d) bg_popup_call3_rect_pane_g2

0x288a,	// (0x0005620a) bg_popup_call3_rect_pane_g3

0x2892,	// (0x00056212) bg_popup_call3_rect_pane_g4

0x289a,	// (0x0005621a) bg_popup_call3_rect_pane_g5

0x28a2,	// (0x00056222) bg_popup_call3_rect_pane_g6

0x28aa,	// (0x0005622a) bg_popup_call3_rect_pane_g7

0xc074,	// (0x0005f9f4) mup_visualizer_osc_pane

0xc074,	// (0x0005f9f4) mup_visualizer_spec_pane

0x6b72,	// (0x0005a4f2) call3_video_qcif_pane_ParamLimits

0x6b72,	// (0x0005a4f2) call3_video_qcif_pane

0x6b85,	// (0x0005a505) call3_video_qcif_uncrop_pane_ParamLimits

0x6b85,	// (0x0005a505) call3_video_qcif_uncrop_pane

0x6b93,	// (0x0005a513) call3_video_subqcif_pane_ParamLimits

0x6b93,	// (0x0005a513) call3_video_subqcif_pane

0x6ba7,	// (0x0005a527) call3_video_subqcif_uncrop_pane_ParamLimits

0x6ba7,	// (0x0005a527) call3_video_subqcif_uncrop_pane

0x6c18,	// (0x0005a598) popup_call3_audio_in_window_g4_ParamLimits

0x6c18,	// (0x0005a598) popup_call3_audio_in_window_g4

0xc074,	// (0x0005f9f4) mup_spec_half_pane

0xc074,	// (0x0005f9f4) mup_spec_half_pane_cp

0xc074,	// (0x0005f9f4) mup_osc_middle_pane

0x0cce,	// (0x0005464e) mup_visualizer_osc_pane_g1

0x2a8a,	// (0x0005640a) mup_spec_bar_pane_ParamLimits

0x2a8a,	// (0x0005640a) mup_spec_bar_pane

0x0cce,	// (0x0005464e) mup_spec_bar_pane_g1

0x0cce,	// (0x0005464e) mup_spec_bar_pane_g2

0x0001,

0xf3d8,	// (0x00062d58) mup_spec_bar_pane_g

0x4297,	// (0x00057c17) aid_cale_week_size_cell_pane_ParamLimits

0x42b1,	// (0x00057c31) bg_cale_heading_pane_ParamLimits

0x0bfa,	// (0x0005457a) bg_cale_pane_cp01_ParamLimits

0x42c9,	// (0x00057c49) cale_week_corner_pane_ParamLimits

0x42e8,	// (0x00057c68) cale_week_day_heading_pane_ParamLimits

0x4305,	// (0x00057c85) cale_week_scroll_pane_g1_ParamLimits

0x4318,	// (0x00057c98) cale_week_scroll_pane_g2_ParamLimits

0x4330,	// (0x00057cb0) cale_week_scroll_pane_g3_ParamLimits

0x4348,	// (0x00057cc8) cale_week_scroll_pane_g4_ParamLimits

0x4360,	// (0x00057ce0) cale_week_scroll_pane_g5_ParamLimits

0x4380,	// (0x00057d00) cale_week_scroll_pane_g6_ParamLimits

0x43a0,	// (0x00057d20) cale_week_scroll_pane_g7_ParamLimits

0x43c0,	// (0x00057d40) cale_week_scroll_pane_g8_ParamLimits

0x43e4,	// (0x00057d64) cale_week_scroll_pane_g9_ParamLimits

0x43fc,	// (0x00057d7c) cale_week_scroll_pane_g10_ParamLimits

0x4414,	// (0x00057d94) cale_week_scroll_pane_g11_ParamLimits

0x442c,	// (0x00057dac) cale_week_scroll_pane_g12_ParamLimits

0x4444,	// (0x00057dc4) cale_week_scroll_pane_g13_ParamLimits

0x4444,	// (0x00057dc4) cale_week_scroll_pane_g14_ParamLimits

0x4444,	// (0x00057dc4) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x00062aeb) cale_week_scroll_pane_g_ParamLimits

0x4480,	// (0x00057e00) cale_week_time_pane_ParamLimits

0x44a4,	// (0x00057e24) grid_cale_week_pane_ParamLimits

0x0c17,	// (0x00054597) listscroll_cale_week_pane_t1

0x0c29,	// (0x000545a9) scroll_pane_cp08_ParamLimits

0x4f55,	// (0x000588d5) cale_month_corner_pane_ParamLimits

0x0fcc,	// (0x0005494c) cale_month_pane_t1

0x536f,	// (0x00058cef) cale_month_week_pane_ParamLimits

0x58bb,	// (0x0005923b) popup_call_status_window_g1_ParamLimits

0x58cf,	// (0x0005924f) popup_call_status_window_g2_ParamLimits

0x58e3,	// (0x00059263) popup_call_status_window_g3_ParamLimits

0xf2e5,	// (0x00062c65) popup_call_status_window_g_ParamLimits

0x138e,	// (0x00054d0e) aid_call2_pane

0x5e00,	// (0x00059780) msg_header_pane_g1

0x5fd5,	// (0x00059955) postcard_address2_pane_ParamLimits

0x5fd5,	// (0x00059955) postcard_address2_pane

0x5fe7,	// (0x00059967) postcard_message2_pane_ParamLimits

0x5fe7,	// (0x00059967) postcard_message2_pane

0x6b12,	// (0x0005a492) message2_row_pane_ParamLimits

0x6b12,	// (0x0005a492) message2_row_pane

0x6b2f,	// (0x0005a4af) address2_row_pane_ParamLimits

0x6b2f,	// (0x0005a4af) address2_row_pane

0x2a57,	// (0x000563d7) postcard_message2_row_pane_g1

0x2a5f,	// (0x000563df) postcard_message2_row_pane_t1

0x2a57,	// (0x000563d7) address2_row_pane_g1

0x2a5f,	// (0x000563df) address2_row_pane_t1

0x47de,	// (0x0005815e) aid_size_cell_vorec

0xc516,	// (0x0005fe96) main_rss_pane

0x2a6d,	// (0x000563ed) rss_list_single_pane_ParamLimits

0x2a6d,	// (0x000563ed) rss_list_single_pane

0x2a7b,	// (0x000563fb) rss_list_single_pane_t1

0x2a7b,	// (0x000563fb) rss_list_single_pane_t2

0x0001,

0xf5a8,	// (0x00062f28) rss_list_single_pane_t

0xc516,	// (0x0005fe96) main_camera2_pane

0xc516,	// (0x0005fe96) main_video2_pane

0xc867,	// (0x000601e7) cams_zoom_pane_cp2_ParamLimits

0xc867,	// (0x000601e7) cams_zoom_pane_cp2

0xc867,	// (0x000601e7) image2_vga_pane_ParamLimits

0xc867,	// (0x000601e7) image2_vga_pane

0xee9a,	// (0x0006281a) main_camera2_pane_g1_ParamLimits

0xee9a,	// (0x0006281a) main_camera2_pane_g1

0xee9a,	// (0x0006281a) main_camera2_pane_g2_ParamLimits

0xee9a,	// (0x0006281a) main_camera2_pane_g2

0xee9a,	// (0x0006281a) main_camera2_pane_g3_ParamLimits

0xee9a,	// (0x0006281a) main_camera2_pane_g3

0xee9a,	// (0x0006281a) main_camera2_pane_g4_ParamLimits

0xee9a,	// (0x0006281a) main_camera2_pane_g4

0xee9a,	// (0x0006281a) main_camera2_pane_g5_ParamLimits

0xee9a,	// (0x0006281a) main_camera2_pane_g5

0xee9a,	// (0x0006281a) main_camera2_pane_g6_ParamLimits

0xee9a,	// (0x0006281a) main_camera2_pane_g6

0xee9a,	// (0x0006281a) main_camera2_pane_g7_ParamLimits

0xee9a,	// (0x0006281a) main_camera2_pane_g7

0xee9a,	// (0x0006281a) main_camera2_pane_g8_ParamLimits

0xee9a,	// (0x0006281a) main_camera2_pane_g8

0x0008,

0xf5c4,	// (0x00062f44) main_camera2_pane_g_ParamLimits

0xf5c4,	// (0x00062f44) main_camera2_pane_g

0x6cd9,	// (0x0005a659) main_camera2_pane_t1_ParamLimits

0x6cd9,	// (0x0005a659) main_camera2_pane_t1

0x6cd9,	// (0x0005a659) main_camera2_pane_t2_ParamLimits

0x6cd9,	// (0x0005a659) main_camera2_pane_t2

0x6cd9,	// (0x0005a659) main_camera2_pane_t3_ParamLimits

0x6cd9,	// (0x0005a659) main_camera2_pane_t3

0x6cd9,	// (0x0005a659) main_camera2_pane_t4_ParamLimits

0x6cd9,	// (0x0005a659) main_camera2_pane_t4

0x0006,

0xf5d7,	// (0x00062f57) main_camera2_pane_t_ParamLimits

0xf5d7,	// (0x00062f57) main_camera2_pane_t

0xeea8,	// (0x00062828) cams_zoom_pane_cp4_ParamLimits

0xeea8,	// (0x00062828) cams_zoom_pane_cp4

0x6ced,	// (0x0005a66d) image2_cif_pane_ParamLimits

0x6ced,	// (0x0005a66d) image2_cif_pane

0xc0eb,	// (0x0005fa6b) image2_subqcif_pane_ParamLimits

0xc0eb,	// (0x0005fa6b) image2_subqcif_pane

0x6cfb,	// (0x0005a67b) main_video2_pane_g1_ParamLimits

0x6cfb,	// (0x0005a67b) main_video2_pane_g1

0x6cfb,	// (0x0005a67b) main_video2_pane_g2_ParamLimits

0x6cfb,	// (0x0005a67b) main_video2_pane_g2

0x6cfb,	// (0x0005a67b) main_video2_pane_g3_ParamLimits

0x6cfb,	// (0x0005a67b) main_video2_pane_g3

0x6cfb,	// (0x0005a67b) main_video2_pane_g4_ParamLimits

0x6cfb,	// (0x0005a67b) main_video2_pane_g4

0x6cfb,	// (0x0005a67b) main_video2_pane_g5_ParamLimits

0x6cfb,	// (0x0005a67b) main_video2_pane_g5

0x6cfb,	// (0x0005a67b) main_video2_pane_g6_ParamLimits

0x6cfb,	// (0x0005a67b) main_video2_pane_g6

0x0005,

0xf5e6,	// (0x00062f66) main_video2_pane_g_ParamLimits

0xf5e6,	// (0x00062f66) main_video2_pane_g

0x6d09,	// (0x0005a689) main_video2_pane_t1_ParamLimits

0x6d09,	// (0x0005a689) main_video2_pane_t1

0x6d09,	// (0x0005a689) main_video2_pane_t2_ParamLimits

0x6d09,	// (0x0005a689) main_video2_pane_t2

0x6d09,	// (0x0005a689) main_video2_pane_t3_ParamLimits

0x6d09,	// (0x0005a689) main_video2_pane_t3

0x0002,

0xf5f3,	// (0x00062f73) main_video2_pane_t_ParamLimits

0xf5f3,	// (0x00062f73) main_video2_pane_t

0x6648,	// (0x00059fc8) call_muted_g2

0x0001,

0xf59a,	// (0x00062f1a) call_muted_g

0xc516,	// (0x0005fe96) main_mup2_pane

0x2ce8,	// (0x00056668) main_mup2_pane_g1_ParamLimits

0x2ce8,	// (0x00056668) main_mup2_pane_g1

0x2ce8,	// (0x00056668) main_mup2_pane_g2_ParamLimits

0x2ce8,	// (0x00056668) main_mup2_pane_g2

0x2d3a,	// (0x000566ba) main_mup_pane_g13_cp1

0xc0f9,	// (0x0005fa79) mup_volume_pane_cp1

0x2ce8,	// (0x00056668) main_mup2_pane_g4_ParamLimits

0x2ce8,	// (0x00056668) main_mup2_pane_g4

0x2ce8,	// (0x00056668) main_mup2_pane_g5_ParamLimits

0x2ce8,	// (0x00056668) main_mup2_pane_g5

0x2ce8,	// (0x00056668) main_mup2_pane_g6_ParamLimits

0x2ce8,	// (0x00056668) main_mup2_pane_g6

0x2ce8,	// (0x00056668) main_mup2_pane_g7_ParamLimits

0x2ce8,	// (0x00056668) main_mup2_pane_g7

0x0006,

0xf5fa,	// (0x00062f7a) main_mup2_pane_g_ParamLimits

0xf5fa,	// (0x00062f7a) main_mup2_pane_g

0x2cd4,	// (0x00056654) main_mup2_pane_t1_ParamLimits

0x2cd4,	// (0x00056654) main_mup2_pane_t1

0x2cd4,	// (0x00056654) main_mup2_pane_t2_ParamLimits

0x2cd4,	// (0x00056654) main_mup2_pane_t2

0x2cd4,	// (0x00056654) main_mup2_pane_t3_ParamLimits

0x2cd4,	// (0x00056654) main_mup2_pane_t3

0x2cd4,	// (0x00056654) main_mup2_pane_t4_ParamLimits

0x2cd4,	// (0x00056654) main_mup2_pane_t4

0x2cd4,	// (0x00056654) main_mup2_pane_t5_ParamLimits

0x2cd4,	// (0x00056654) main_mup2_pane_t5

0x2cd4,	// (0x00056654) main_mup2_pane_t6_ParamLimits

0x2cd4,	// (0x00056654) main_mup2_pane_t6

0x0005,

0xf609,	// (0x00062f89) main_mup2_pane_t_ParamLimits

0xf609,	// (0x00062f89) main_mup2_pane_t

0x2a2e,	// (0x000563ae) mup2_visualizer_pane_ParamLimits

0x2a2e,	// (0x000563ae) mup2_visualizer_pane

0x2a2e,	// (0x000563ae) mup_progress_pane_cp_ParamLimits

0x2a2e,	// (0x000563ae) mup_progress_pane_cp

0xc8c1,	// (0x00060241) mup_volume_pane_cp_ParamLimits

0xc8c1,	// (0x00060241) mup_volume_pane_cp

0x0a74,	// (0x000543f4) mup2_visualizer_pane_g1_ParamLimits

0x0a74,	// (0x000543f4) mup2_visualizer_pane_g1

0x0a82,	// (0x00054402) mup2_visualizer_pane_g2_ParamLimits

0x0a82,	// (0x00054402) mup2_visualizer_pane_g2

0x0a82,	// (0x00054402) mup2_visualizer_pane_g3_ParamLimits

0x0a82,	// (0x00054402) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x00062a64) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x00062a64) mup2_visualizer_pane_g

0x19b2,	// (0x00055332) aid_size_cell_fmradio

0x67fa,	// (0x0005a17a) aid_height_parent_landcape

0x0e2a,	// (0x000547aa) wml_content_pane_cp

0x0e32,	// (0x000547b2) wml_tabs_pane

0x0e3b,	// (0x000547bb) popup_wml_miniature_window

0x0e43,	// (0x000547c3) scroll_pane_cp021

0x0e57,	// (0x000547d7) wml_content_pane_comp8

0xc516,	// (0x0005fe96) bg_popup_sub_pane_cp05

0x2b21,	// (0x000564a1) popup_wml_miniature_window_g1

0x2b29,	// (0x000564a9) wml_miniature_view_pane

0x6d1d,	// (0x0005a69d) aid_size_wml_view

0x6d25,	// (0x0005a6a5) wml_miniature_view_pane_g1

0x6d2e,	// (0x0005a6ae) wml_miniature_view_pane_g2

0x6d37,	// (0x0005a6b7) wml_miniature_view_pane_g3

0x6d3f,	// (0x0005a6bf) wml_miniature_view_pane_g4

0x6d47,	// (0x0005a6c7) wml_miniature_view_pane_g5

0x6d4f,	// (0x0005a6cf) wml_miniature_view_pane_g6

0x6d57,	// (0x0005a6d7) wml_miniature_view_pane_g7

0x6d5f,	// (0x0005a6df) wml_miniature_view_pane_g8

0x0007,

0xf616,	// (0x00062f96) wml_miniature_view_pane_g

0x2b31,	// (0x000564b1) background_graphic_ParamLimits

0x2b31,	// (0x000564b1) background_graphic

0x2b3d,	// (0x000564bd) wml_tabs_2_pane

0x2b46,	// (0x000564c6) wml_tabs_3_pane_ParamLimits

0x2b46,	// (0x000564c6) wml_tabs_3_pane

0x2b58,	// (0x000564d8) wml_tabs_4_pane_ParamLimits

0x2b58,	// (0x000564d8) wml_tabs_4_pane

0x2b6e,	// (0x000564ee) wml_tabs_5_pane_ParamLimits

0x2b6e,	// (0x000564ee) wml_tabs_5_pane

0x2b88,	// (0x00056508) wml_tabs_pane_g2_ParamLimits

0x2b88,	// (0x00056508) wml_tabs_pane_g2

0x2b9d,	// (0x0005651d) wml_tabs_pane_g3_ParamLimits

0x2b9d,	// (0x0005651d) wml_tabs_pane_g3

0x2bb2,	// (0x00056532) wml_tabs_2_active_pane_ParamLimits

0x2bb2,	// (0x00056532) wml_tabs_2_active_pane

0x2bb2,	// (0x00056532) wml_tabs_2_passive_pane_ParamLimits

0x2bb2,	// (0x00056532) wml_tabs_2_passive_pane

0x6d67,	// (0x0005a6e7) wml_tabs_3_active_pane_cp_ParamLimits

0x6d67,	// (0x0005a6e7) wml_tabs_3_active_pane_cp

0x6d7c,	// (0x0005a6fc) wml_tabs_3_passive_pane_ParamLimits

0x6d7c,	// (0x0005a6fc) wml_tabs_3_passive_pane

0x6d8f,	// (0x0005a70f) wml_tabs_3_passive_pane_cp_ParamLimits

0x6d8f,	// (0x0005a70f) wml_tabs_3_passive_pane_cp

0x6da6,	// (0x0005a726) tabs_4_active_pane

0x6dae,	// (0x0005a72e) tabs_4_passive_pane

0x6db8,	// (0x0005a738) tabs_4_passive_pane_cp

0x6dc0,	// (0x0005a740) tabs_4_passive_pane_cp2

0x653c,	// (0x00059ebc) aid_height_text

0x2a2e,	// (0x000563ae) mup_volume_cont_pane_ParamLimits

0x2a2e,	// (0x000563ae) mup_volume_cont_pane

0xc074,	// (0x0005f9f4) aid_size_cell_pinb

0xc074,	// (0x0005f9f4) aid_size_list_pinb

0x2a2e,	// (0x000563ae) mup2_volume_cont_pane_ParamLimits

0x2a2e,	// (0x000563ae) mup2_volume_cont_pane

0xc8ab,	// (0x0006022b) mup2_volume_cont_pane_g1_ParamLimits

0xc8ab,	// (0x0006022b) mup2_volume_cont_pane_g1

0x3c8a,	// (0x0005760a) aid_size_cell_touch_ParamLimits

0x3c8a,	// (0x0005760a) aid_size_cell_touch

0x3eb7,	// (0x00057837) touch_pane_ParamLimits

0x3eb7,	// (0x00057837) touch_pane

0xc0f9,	// (0x0005fa79) main_rss2_pane

0x2bc9,	// (0x00056549) listscroll_rss2_pane

0x2bd2,	// (0x00056552) rss2_navigation_pane

0x2bda,	// (0x0005655a) list_rss2_pane

0x14a7,	// (0x00054e27) scroll_pane_cp22

0x2be2,	// (0x00056562) rss2_navigation_pane_g1

0x2beb,	// (0x0005656b) rss2_navigation_pane_g2

0x2bf3,	// (0x00056573) rss2_navigation_pane_g3

0x0002,

0xf627,	// (0x00062fa7) rss2_navigation_pane_g

0x2bfb,	// (0x0005657b) rss2_navigation_pane_t1

0x6dca,	// (0x0005a74a) rss2_list_single_pane_ParamLimits

0x6dca,	// (0x0005a74a) rss2_list_single_pane

0x2c09,	// (0x00056589) rss2_list_single_pane_t2

0x2c17,	// (0x00056597) rss2_list_single_pane_t3_ParamLimits

0x2c17,	// (0x00056597) rss2_list_single_pane_t3

0x2c34,	// (0x000565b4) rss2_list_single_pane_t4

0x5797,	// (0x00059117) smil_status_pane_g1

0xc0eb,	// (0x0005fa6b) main_image2_pane_ParamLimits

0xc0eb,	// (0x0005fa6b) main_image2_pane

0xee9a,	// (0x0006281a) main_camera2_pane_g9_ParamLimits

0xee9a,	// (0x0006281a) main_camera2_pane_g9

0x6cd9,	// (0x0005a659) main_camera2_pane_t5_ParamLimits

0x6cd9,	// (0x0005a659) main_camera2_pane_t5

0xc875,	// (0x000601f5) main_camera2_pane_t6_ParamLimits

0xc875,	// (0x000601f5) main_camera2_pane_t6

0x6de0,	// (0x0005a760) main_image2_pane_g1_ParamLimits

0x6de0,	// (0x0005a760) main_image2_pane_g1

0x620f,	// (0x00059b8f) smil2_video_pane_ParamLimits

0x620f,	// (0x00059b8f) smil2_video_pane

0xc0a2,	// (0x0005fa22) aid_zoom_text_primary_cp

0xc0e1,	// (0x0005fa61) popup_preview_fixed_window

0x0d93,	// (0x00054713) im_reading_pane_g1

0x6ccb,	// (0x0005a64b) cams2_bc_adjust_pane_cp_ParamLimits

0x6ccb,	// (0x0005a64b) cams2_bc_adjust_pane_cp

0xc89d,	// (0x0006021d) cams2_bc_adjust_pane_ParamLimits

0xc89d,	// (0x0006021d) cams2_bc_adjust_pane

0x2d3a,	// (0x000566ba) cams2_bc_adjust_pane_g1

0xc0f9,	// (0x0005fa79) cams2_slider_pane

0x2d3a,	// (0x000566ba) cams2_slider_pane_g1

0x2d3a,	// (0x000566ba) cams2_slider_pane_g2

0x0006,

0xf62e,	// (0x00062fae) cams2_slider_pane_g

0x3f80,	// (0x00057900) calc_display_pane_ParamLimits

0x3fa5,	// (0x00057925) calc_paper_pane_ParamLimits

0x3fc8,	// (0x00057948) grid_calc_pane_ParamLimits

0xc78c,	// (0x0006010c) popup_clock_digital_window_t1_ParamLimits

0x194f,	// (0x000552cf) main_image_pane_t1

0x3f62,	// (0x000578e2) aid_size_cell_calc_ParamLimits

0x3f62,	// (0x000578e2) aid_size_cell_calc

0x685e,	// (0x0005a1de) popup_blid_sat_info2_window_ParamLimits

0x685e,	// (0x0005a1de) popup_blid_sat_info2_window

0x2c42,	// (0x000565c2) aid_size_cell_blid

0x1792,	// (0x00055112) bg_popup_window_pane_cp07

0x2c5f,	// (0x000565df) grid_popup_blid_pane

0x2c69,	// (0x000565e9) heading_pane_cp05_ParamLimits

0x2c69,	// (0x000565e9) heading_pane_cp05

0x6e6a,	// (0x0005a7ea) cell_popup_blid_pane_ParamLimits

0x6e6a,	// (0x0005a7ea) cell_popup_blid_pane

0x6e8e,	// (0x0005a80e) cell_popup_blid_pane_g1

0x6e96,	// (0x0005a816) cell_popup_blid_pane_t1

0x2a2e,	// (0x000563ae) mup2_indicator_pane_ParamLimits

0x2a2e,	// (0x000563ae) mup2_indicator_pane

0xc074,	// (0x0005f9f4) mup2_visualizer_osc_pane

0x2b0b,	// (0x0005648b) mup2_visualizer_spec_pane_ParamLimits

0x2b0b,	// (0x0005648b) mup2_visualizer_spec_pane

0xc074,	// (0x0005f9f4) mup2_spec_half_pane

0xc074,	// (0x0005f9f4) mup2_spec_half_pane_cp

0x6ea4,	// (0x0005a824) mup2_spec_bar_pane_ParamLimits

0x6ea4,	// (0x0005a824) mup2_spec_bar_pane

0x0cce,	// (0x0005464e) mup2_spec_bar_pane_g1

0x6ec3,	// (0x0005a843) mup2_spec_bar_pane_g2

0x0001,

0xf654,	// (0x00062fd4) mup2_spec_bar_pane_g

0xc074,	// (0x0005f9f4) mup2_osc_middle_pane

0x0cce,	// (0x0005464e) mup2_visualizer_osc_pane_g1

0xc123,	// (0x0005faa3) popup_number_entry_window_t1_ParamLimits

0xc136,	// (0x0005fab6) popup_number_entry_window_t2_ParamLimits

0xc148,	// (0x0005fac8) popup_number_entry_window_t3_ParamLimits

0x3f09,	// (0x00057889) popup_number_entry_window_t5_ParamLimits

0x3f09,	// (0x00057889) popup_number_entry_window_t5

0xf085,	// (0x00062a05) popup_number_entry_window_t_ParamLimits

0xc15a,	// (0x0005fada) text_title_cp2_ParamLimits

0xc7cb,	// (0x0006014b) aid_hotspot_pointer_text2_pane

0xc7e5,	// (0x00060165) main_viewer_pane_g9_ParamLimits

0xc7e5,	// (0x00060165) main_viewer_pane_g9

0x0fcc,	// (0x0005494c) cale_month_pane_t1_ParamLimits

0x1009,	// (0x00054989) bg_cale_pane_ParamLimits

0x1021,	// (0x000549a1) list_cale_pane_ParamLimits

0x1032,	// (0x000549b2) listscroll_cale_day_pane_t1

0x1044,	// (0x000549c4) scroll_pane_cp09_ParamLimits

0x5b90,	// (0x00059510) main_mup_eq_pane_t1_ParamLimits

0x5b90,	// (0x00059510) main_mup_eq_pane_t1

0x5baa,	// (0x0005952a) main_mup_eq_pane_t2_ParamLimits

0x5baa,	// (0x0005952a) main_mup_eq_pane_t2

0x5bc4,	// (0x00059544) main_mup_eq_pane_t3_ParamLimits

0x5bc4,	// (0x00059544) main_mup_eq_pane_t3

0x5be0,	// (0x00059560) main_mup_eq_pane_t4_ParamLimits

0x5be0,	// (0x00059560) main_mup_eq_pane_t4

0x5bfc,	// (0x0005957c) main_mup_eq_pane_t5_ParamLimits

0x5bfc,	// (0x0005957c) main_mup_eq_pane_t5

0x5c18,	// (0x00059598) main_mup_eq_pane_t6_ParamLimits

0x5c18,	// (0x00059598) main_mup_eq_pane_t6

0x5c2c,	// (0x000595ac) main_mup_eq_pane_t7_ParamLimits

0x5c2c,	// (0x000595ac) main_mup_eq_pane_t7

0x5c40,	// (0x000595c0) main_mup_eq_pane_t8_ParamLimits

0x5c40,	// (0x000595c0) main_mup_eq_pane_t8

0x5c54,	// (0x000595d4) main_mup_eq_pane_t9_ParamLimits

0x5c54,	// (0x000595d4) main_mup_eq_pane_t9

0x5c6e,	// (0x000595ee) main_mup_eq_pane_t10_ParamLimits

0x5c6e,	// (0x000595ee) main_mup_eq_pane_t10

0x0009,

0xf3e4,	// (0x00062d64) main_mup_eq_pane_t_ParamLimits

0xf3e4,	// (0x00062d64) main_mup_eq_pane_t

0x5d1d,	// (0x0005969d) mup_equalizer_pane_cp5_ParamLimits

0x5d31,	// (0x000596b1) mup_equalizer_pane_cp6_ParamLimits

0x5d45,	// (0x000596c5) mup_equalizer_pane_cp7_ParamLimits

0xc0f9,	// (0x0005fa79) main_gallery_pane

0x2aa9,	// (0x00056429) smil2_volume_pane

0x2ab1,	// (0x00056431) smil_status_volume_pane_g1_ParamLimits

0x2ac4,	// (0x00056444) smil_status_volume_pane_g2_ParamLimits

0xc845,	// (0x000601c5) smil_status_volume_pane_g3_ParamLimits

0xf5ad,	// (0x00062f2d) smil_status_volume_pane_g_ParamLimits

0x1792,	// (0x00055112) bg_popup_window_pane_cp07_ParamLimits

0x2c4a,	// (0x000565ca) blid_firmament_pane

0x0a1b,	// (0x0005439b) aid_size_cell_gallery_ParamLimits

0x0a1b,	// (0x0005439b) aid_size_cell_gallery

0x0a1b,	// (0x0005439b) grid_gallery_pane_ParamLimits

0x0a1b,	// (0x0005439b) grid_gallery_pane

0x1792,	// (0x00055112) cell_gallery_pane_ParamLimits

0x1792,	// (0x00055112) cell_gallery_pane

0x0a1b,	// (0x0005439b) bg_cell_gallery_focus_pane_ParamLimits

0x0a1b,	// (0x0005439b) bg_cell_gallery_focus_pane

0x0a74,	// (0x000543f4) cell_gallery_pane_g1_ParamLimits

0x0a74,	// (0x000543f4) cell_gallery_pane_g1

0x0a74,	// (0x000543f4) cell_gallery_pane_g2_ParamLimits

0x0a74,	// (0x000543f4) cell_gallery_pane_g2

0x0a74,	// (0x000543f4) cell_gallery_pane_g3_ParamLimits

0x0a74,	// (0x000543f4) cell_gallery_pane_g3

0x0a82,	// (0x00054402) cell_gallery_pane_g4_ParamLimits

0x0a82,	// (0x00054402) cell_gallery_pane_g4

0x0003,

0xf659,	// (0x00062fd9) cell_gallery_pane_g_ParamLimits

0xf659,	// (0x00062fd9) cell_gallery_pane_g

0x6ecd,	// (0x0005a84d) bg_cell_gallery_focus_pane_g1

0x6ed5,	// (0x0005a855) bg_cell_gallery_focus_pane_g2

0x6edd,	// (0x0005a85d) bg_cell_gallery_focus_pane_g3

0x6ee5,	// (0x0005a865) bg_cell_gallery_focus_pane_g4

0x6eed,	// (0x0005a86d) bg_cell_gallery_focus_pane_g5

0x6ef5,	// (0x0005a875) bg_cell_gallery_focus_pane_g6

0x6efd,	// (0x0005a87d) bg_cell_gallery_focus_pane_g7

0x6f05,	// (0x0005a885) bg_cell_gallery_focus_pane_g8

0x0007,

0xf662,	// (0x00062fe2) bg_cell_gallery_focus_pane_g

0x6f0d,	// (0x0005a88d) aid_firma_cardinal

0x6f21,	// (0x0005a8a1) blid_firmament_pane_t1

0x6f38,	// (0x0005a8b8) blid_firmament_pane_t2

0x6f4f,	// (0x0005a8cf) blid_firmament_pane_t3

0x6f66,	// (0x0005a8e6) blid_firmament_pane_t4

0x0003,

0xf673,	// (0x00062ff3) blid_firmament_pane_t

0x6f7d,	// (0x0005a8fd) blid_sat_info_pane

0x0cce,	// (0x0005464e) blid_sat_info_pane_g1

0x0cce,	// (0x0005464e) blid_sat_info_pane_g2

0x0001,

0xf3d8,	// (0x00062d58) blid_sat_info_pane_g

0x6f8d,	// (0x0005a90d) blid_sat_info_pane_t1

0x6f9b,	// (0x0005a91b) smil2_volume_content_pane

0x6fa4,	// (0x0005a924) smil2_volume_pane_g1

0x2cbf,	// (0x0005663f) smil2_volume_content_pane_g1

0x6fac,	// (0x0005a92c) smil2_volume_content_pane_g2

0x6fb5,	// (0x0005a935) smil2_volume_content_pane_g3

0x6fbe,	// (0x0005a93e) smil2_volume_content_pane_g4

0x6fc7,	// (0x0005a947) smil2_volume_content_pane_g5

0x6fd0,	// (0x0005a950) smil2_volume_content_pane_g6

0x6fd9,	// (0x0005a959) smil2_volume_content_pane_g7

0x6fe2,	// (0x0005a962) smil2_volume_content_pane_g8

0x6feb,	// (0x0005a96b) smil2_volume_content_pane_g9

0x6ff4,	// (0x0005a974) smil2_volume_content_pane_g10

0x0009,

0xf67c,	// (0x00062ffc) smil2_volume_content_pane_g

0x4558,	// (0x00057ed8) cale_week_day_heading_pane_t1_ParamLimits

0x4582,	// (0x00057f02) cale_week_day_heading_pane_t2_ParamLimits

0x45b1,	// (0x00057f31) cale_week_day_heading_pane_t3_ParamLimits

0x45e0,	// (0x00057f60) cale_week_day_heading_pane_t4_ParamLimits

0x460f,	// (0x00057f8f) cale_week_day_heading_pane_t5_ParamLimits

0x4646,	// (0x00057fc6) cale_week_day_heading_pane_t6_ParamLimits

0x467d,	// (0x00057ffd) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x00062b0c) cale_week_day_heading_pane_t_ParamLimits

0x0c46,	// (0x000545c6) bg_cale_side_pane_ParamLimits

0x46a7,	// (0x00058027) cale_week_time_pane_t1_ParamLimits

0x46c1,	// (0x00058041) cale_week_time_pane_t2_ParamLimits

0x46db,	// (0x0005805b) cale_week_time_pane_t3_ParamLimits

0x46f5,	// (0x00058075) cale_week_time_pane_t4_ParamLimits

0x470f,	// (0x0005808f) cale_week_time_pane_t5_ParamLimits

0x4729,	// (0x000580a9) cale_week_time_pane_t6_ParamLimits

0x4743,	// (0x000580c3) cale_week_time_pane_t7_ParamLimits

0x475d,	// (0x000580dd) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x00062b1b) cale_week_time_pane_t_ParamLimits

0x477d,	// (0x000580fd) cell_cale_week_pane_g2_ParamLimits

0x0c46,	// (0x000545c6) bg_cale_side_pane_cp01_ParamLimits

0x559c,	// (0x00058f1c) cale_month_week_pane_t1_ParamLimits

0x55b5,	// (0x00058f35) cale_month_week_pane_t2_ParamLimits

0x55ce,	// (0x00058f4e) cale_month_week_pane_t3_ParamLimits

0x55e7,	// (0x00058f67) cale_month_week_pane_t4_ParamLimits

0x5600,	// (0x00058f80) cale_month_week_pane_t5_ParamLimits

0x5619,	// (0x00058f99) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x00062be9) cale_month_week_pane_t_ParamLimits

0xc70c,	// (0x0006008c) cell_cale_month_pane_g1_ParamLimits

0xc0f9,	// (0x0005fa79) main_cale_event_viewer_pane

0xc074,	// (0x0005f9f4) listscroll_cale_event_viewer_pane

0x6ffd,	// (0x0005a97d) list_cale_ev_pane

0x7005,	// (0x0005a985) scroll_pane_cp023

0x7011,	// (0x0005a991) field_cale_ev_pane_ParamLimits

0x7011,	// (0x0005a991) field_cale_ev_pane

0x702f,	// (0x0005a9af) field_cale_ev_content_pane_ParamLimits

0x702f,	// (0x0005a9af) field_cale_ev_content_pane

0x703b,	// (0x0005a9bb) field_cale_ev_pane_g1_ParamLimits

0x703b,	// (0x0005a9bb) field_cale_ev_pane_g1

0x7047,	// (0x0005a9c7) field_cale_ev_pane_g2_ParamLimits

0x7047,	// (0x0005a9c7) field_cale_ev_pane_g2

0x705f,	// (0x0005a9df) field_cale_ev_pane_g3_ParamLimits

0x705f,	// (0x0005a9df) field_cale_ev_pane_g3

0x0002,

0xf691,	// (0x00063011) field_cale_ev_pane_g_ParamLimits

0xf691,	// (0x00063011) field_cale_ev_pane_g

0x7077,	// (0x0005a9f7) field_cale_ev_pane_t1_ParamLimits

0x7077,	// (0x0005a9f7) field_cale_ev_pane_t1

0x708e,	// (0x0005aa0e) field_cale_ev_content_pane_t1_ParamLimits

0x708e,	// (0x0005aa0e) field_cale_ev_content_pane_t1

0x1835,	// (0x000551b5) bg_button_pane_cp01

0x4285,	// (0x00057c05) listscroll_cale_week_pane_ParamLimits

0x0bf1,	// (0x00054571) popup_toolbar_window_cp01

0x0c17,	// (0x00054597) listscroll_cale_week_pane_t1_ParamLimits

0x4285,	// (0x00057c05) listscroll_cale_day_pane_ParamLimits

0x0bf1,	// (0x00054571) popup_toolbar_window_cp02

0x1032,	// (0x000549b2) listscroll_cale_day_pane_t1_ParamLimits

0x6818,	// (0x0005a198) main_cale_month_pane_ParamLimits

0xc830,	// (0x000601b0) popup_toolbar_window_cp03_ParamLimits

0xc830,	// (0x000601b0) popup_toolbar_window_cp03

0x60d7,	// (0x00059a57) main_image_pane_g2_ParamLimits

0x60d7,	// (0x00059a57) main_image_pane_g2

0x60e8,	// (0x00059a68) main_image_pane_g3_ParamLimits

0x60e8,	// (0x00059a68) main_image_pane_g3

0x0002,

0xf476,	// (0x00062df6) main_image_pane_g_ParamLimits

0xf476,	// (0x00062df6) main_image_pane_g

0x194f,	// (0x000552cf) main_image_pane_t1_ParamLimits

0x60f9,	// (0x00059a79) main_image_pane_t2_ParamLimits

0x60f9,	// (0x00059a79) main_image_pane_t2

0x610b,	// (0x00059a8b) main_image_pane_t3_ParamLimits

0x610b,	// (0x00059a8b) main_image_pane_t3

0x6133,	// (0x00059ab3) main_image_pane_t4_ParamLimits

0x6133,	// (0x00059ab3) main_image_pane_t4

0x0003,

0xf47d,	// (0x00062dfd) main_image_pane_t_ParamLimits

0xf47d,	// (0x00062dfd) main_image_pane_t

0x6153,	// (0x00059ad3) popup_image_details_window_cp01

0x615d,	// (0x00059add) popup_toobar_trans_pane_cp01_ParamLimits

0x615d,	// (0x00059add) popup_toobar_trans_pane_cp01

0x692f,	// (0x0005a2af) popup_image_details_window_ParamLimits

0x692f,	// (0x0005a2af) popup_image_details_window

0xc803,	// (0x00060183) popup_image_focus_window

0xc867,	// (0x000601e7) camera2_autofocus_pane_ParamLimits

0xc867,	// (0x000601e7) camera2_autofocus_pane

0xc074,	// (0x0005f9f4) bg_popup_sub_pane_cp06

0x70ac,	// (0x0005aa2c) popup_image_focus_window_g1

0x70b4,	// (0x0005aa34) popup_image_focus_window_g2

0x70bc,	// (0x0005aa3c) popup_image_focus_window_g3

0x70c4,	// (0x0005aa44) popup_image_focus_window_g4

0x0003,

0xf698,	// (0x00063018) popup_image_focus_window_g

0x70cc,	// (0x0005aa4c) popup_image_focus_window_t1

0x70da,	// (0x0005aa5a) popup_image_focus_window_t2

0x70ea,	// (0x0005aa6a) popup_image_focus_window_t3

0x0002,

0xf6a1,	// (0x00063021) popup_image_focus_window_t

0x0a74,	// (0x000543f4) camera2_autofocus_pane_g1

0x0a1b,	// (0x0005439b) bg_tb_trans_pane_cp01

0x70f8,	// (0x0005aa78) popup_image_details_window_g1

0x710b,	// (0x0005aa8b) popup_image_details_window_g2

0x0002,

0xf6b3,	// (0x00063033) popup_image_details_window_g

0x7134,	// (0x0005aab4) popup_image_details_window_t1

0x7146,	// (0x0005aac6) popup_image_details_window_t2

0x715f,	// (0x0005aadf) popup_image_details_window_t3

0x7173,	// (0x0005aaf3) popup_image_details_window_t4

0x718e,	// (0x0005ab0e) popup_image_details_window_t5

0x0004,

0xf6ba,	// (0x0006303a) popup_image_details_window_t

0x0ad2,	// (0x00054452) bg_calc_paper_pane_ParamLimits

0xc0f9,	// (0x0005fa79) grid_highlight_pane_cp013

0xc67c,	// (0x0005fffc) list_calc_pane_ParamLimits

0xc68e,	// (0x0006000e) scroll_pane_cp024

0x0ae6,	// (0x00054466) bg_calc_display_pane_ParamLimits

0x40c6,	// (0x00057a46) calc_display_pane_t1_ParamLimits

0x40d8,	// (0x00057a58) calc_display_pane_t2_ParamLimits

0xc696,	// (0x00060016) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x00062a8c) calc_display_pane_t_ParamLimits

0x4192,	// (0x00057b12) cell_calc_pane_g2

0x0001,

0xf129,	// (0x00062aa9) cell_calc_pane_g

0x419b,	// (0x00057b1b) cell_calc_pane_t1

0x0b3b,	// (0x000544bb) grid_highlight_pane_cp02_ParamLimits

0x0b51,	// (0x000544d1) toolbar_button_pane_cp01_ParamLimits

0x0b51,	// (0x000544d1) toolbar_button_pane_cp01

0x1994,	// (0x00055314) temp_image_control_pane_ParamLimits

0x1994,	// (0x00055314) temp_image_control_pane

0xc0eb,	// (0x0005fa6b) main_mp3_pane

0x71a8,	// (0x0005ab28) temp_image_control_pane_g1_ParamLimits

0x71a8,	// (0x0005ab28) temp_image_control_pane_g1

0x71b6,	// (0x0005ab36) temp_image_control_pane_g2_ParamLimits

0x71b6,	// (0x0005ab36) temp_image_control_pane_g2

0x71c8,	// (0x0005ab48) temp_image_control_pane_g3_ParamLimits

0x71c8,	// (0x0005ab48) temp_image_control_pane_g3

0x71d8,	// (0x0005ab58) temp_image_control_pane_g4_ParamLimits

0x71d8,	// (0x0005ab58) temp_image_control_pane_g4

0x0003,

0xf6c5,	// (0x00063045) temp_image_control_pane_g_ParamLimits

0xf6c5,	// (0x00063045) temp_image_control_pane_g

0x71a8,	// (0x0005ab28) main_mp3_pane_g1

0x71eb,	// (0x0005ab6b) main_mp3_pane_g2

0x0007,

0xf6ce,	// (0x0006304e) main_mp3_pane_g

0x7238,	// (0x0005abb8) main_mp3_pane_t1

0x0a82,	// (0x00054402) main_camera_pane_g8_ParamLimits

0x0a82,	// (0x00054402) main_camera_pane_g8

0x494b,	// (0x000582cb) main_video_pane_g7_ParamLimits

0x494b,	// (0x000582cb) main_video_pane_g7

0xc889,	// (0x00060209) main_camera2_pane_t7_ParamLimits

0xc889,	// (0x00060209) main_camera2_pane_t7

0x0dea,	// (0x0005476a) scroll_pane_cp025_ParamLimits

0x0dea,	// (0x0005476a) scroll_pane_cp025

0x0dfe,	// (0x0005477e) scroll_pane_cp026_ParamLimits

0x0dfe,	// (0x0005477e) scroll_pane_cp026

0x0e0d,	// (0x0005478d) wml_content_pane_ParamLimits

0xc0f9,	// (0x0005fa79) main_touch_calib_pane

0x7316,	// (0x0005ac96) main_touch_calib_pane_g1

0x7328,	// (0x0005aca8) main_touch_calib_pane_g2

0x733a,	// (0x0005acba) main_touch_calib_pane_g3

0x734c,	// (0x0005accc) main_touch_calib_pane_g4

0x0003,

0xf6ec,	// (0x0006306c) main_touch_calib_pane_g

0x735e,	// (0x0005acde) main_touch_calib_pane_t1

0x7378,	// (0x0005acf8) main_touch_calib_pane_t2

0x0004,

0xf6f5,	// (0x00063075) main_touch_calib_pane_t

0x1576,	// (0x00054ef6) mup_progress_pane_cp02

0x15ab,	// (0x00054f2b) navi_pane_g1

0x1666,	// (0x00054fe6) navi_pane_mp_t3

0xc0eb,	// (0x0005fa6b) main_mp3_pane_ParamLimits

0x6aba,	// (0x0005a43a) navi_pane_ParamLimits

0x71a8,	// (0x0005ab28) main_mp3_pane_g1_ParamLimits

0x71eb,	// (0x0005ab6b) main_mp3_pane_g2_ParamLimits

0x71f9,	// (0x0005ab79) main_mp3_pane_g3_ParamLimits

0x71f9,	// (0x0005ab79) main_mp3_pane_g3

0x7207,	// (0x0005ab87) main_mp3_pane_g4_ParamLimits

0x7207,	// (0x0005ab87) main_mp3_pane_g4

0x0a74,	// (0x000543f4) main_mp3_pane_g5_ParamLimits

0x0a74,	// (0x000543f4) main_mp3_pane_g5

0x7213,	// (0x0005ab93) main_mp3_pane_g6_ParamLimits

0x7213,	// (0x0005ab93) main_mp3_pane_g6

0x7220,	// (0x0005aba0) main_mp3_pane_g7_ParamLimits

0x7220,	// (0x0005aba0) main_mp3_pane_g7

0x722c,	// (0x0005abac) main_mp3_pane_g8_ParamLimits

0x722c,	// (0x0005abac) main_mp3_pane_g8

0xf6ce,	// (0x0006304e) main_mp3_pane_g_ParamLimits

0x7246,	// (0x0005abc6) main_mp3_pane_t2

0x7254,	// (0x0005abd4) main_mp3_pane_t3

0x7262,	// (0x0005abe2) main_mp3_pane_t4

0x7270,	// (0x0005abf0) main_mp3_pane_t5

0x0005,

0xf6df,	// (0x0006305f) main_mp3_pane_t

0x728c,	// (0x0005ac0c) mup_progress_pane_cp01

0xc0a2,	// (0x0005fa22) aid_zoom_text_secondary2

0x6ffd,	// (0x0005a97d) list_cale_ev2_pane

0x7005,	// (0x0005a985) scroll_pane_cp023_ParamLimits

0x73ce,	// (0x0005ad4e) field_cale_ev2_pane_ParamLimits

0x73ce,	// (0x0005ad4e) field_cale_ev2_pane

0x73ef,	// (0x0005ad6f) field_cale_ev2_pane_g1_ParamLimits

0x73ef,	// (0x0005ad6f) field_cale_ev2_pane_g1

0x73fb,	// (0x0005ad7b) field_cale_ev2_pane_g2_ParamLimits

0x73fb,	// (0x0005ad7b) field_cale_ev2_pane_g2

0x7413,	// (0x0005ad93) field_cale_ev2_pane_g3_ParamLimits

0x7413,	// (0x0005ad93) field_cale_ev2_pane_g3

0x0003,

0xf700,	// (0x00063080) field_cale_ev2_pane_g_ParamLimits

0xf700,	// (0x00063080) field_cale_ev2_pane_g

0x7437,	// (0x0005adb7) field_cale_ev2_pane_t1_ParamLimits

0x7437,	// (0x0005adb7) field_cale_ev2_pane_t1

0x744e,	// (0x0005adce) field_cale_ev2_pane_t2_ParamLimits

0x744e,	// (0x0005adce) field_cale_ev2_pane_t2

0x0001,

0xf709,	// (0x00063089) field_cale_ev2_pane_t_ParamLimits

0xf709,	// (0x00063089) field_cale_ev2_pane_t

0x5f8b,	// (0x0005990b) main_postcard_pane_g5_ParamLimits

0x5f8b,	// (0x0005990b) main_postcard_pane_g5

0x5fa1,	// (0x00059921) main_postcard_pane_g6_ParamLimits

0x5fa1,	// (0x00059921) main_postcard_pane_g6

0x0a1b,	// (0x0005439b) camera2_autofocus_pane_cp_ParamLimits

0x0a1b,	// (0x0005439b) camera2_autofocus_pane_cp

0xc0eb,	// (0x0005fa6b) main_mup3_pane

0x74a7,	// (0x0005ae27) main_mup3_pane_g1_ParamLimits

0x74a7,	// (0x0005ae27) main_mup3_pane_g1

0x74c9,	// (0x0005ae49) main_mup3_pane_g2_ParamLimits

0x74c9,	// (0x0005ae49) main_mup3_pane_g2

0x7549,	// (0x0005aec9) main_mup3_pane_g3_ParamLimits

0x7549,	// (0x0005aec9) main_mup3_pane_g3

0x758f,	// (0x0005af0f) main_mup3_pane_g4_ParamLimits

0x758f,	// (0x0005af0f) main_mup3_pane_g4

0x75d5,	// (0x0005af55) main_mup3_pane_g5_ParamLimits

0x75d5,	// (0x0005af55) main_mup3_pane_g5

0x761b,	// (0x0005af9b) main_mup3_pane_g6_ParamLimits

0x761b,	// (0x0005af9b) main_mup3_pane_g6

0x0a82,	// (0x00054402) main_mup3_pane_g7_ParamLimits

0x0a82,	// (0x00054402) main_mup3_pane_g7

0x0007,

0xf719,	// (0x00063099) main_mup3_pane_g_ParamLimits

0xf719,	// (0x00063099) main_mup3_pane_g

0x7699,	// (0x0005b019) main_mup3_pane_t1_ParamLimits

0x7699,	// (0x0005b019) main_mup3_pane_t1

0x770d,	// (0x0005b08d) main_mup3_pane_t2_ParamLimits

0x770d,	// (0x0005b08d) main_mup3_pane_t2

0x77e1,	// (0x0005b161) main_mup3_pane_t4_ParamLimits

0x77e1,	// (0x0005b161) main_mup3_pane_t4

0x7837,	// (0x0005b1b7) main_mup3_pane_t5_ParamLimits

0x7837,	// (0x0005b1b7) main_mup3_pane_t5

0x78f3,	// (0x0005b273) main_mup3_pane_t6_ParamLimits

0x78f3,	// (0x0005b273) main_mup3_pane_t6

0x0005,

0xf72a,	// (0x000630aa) main_mup3_pane_t_ParamLimits

0xf72a,	// (0x000630aa) main_mup3_pane_t

0x79ab,	// (0x0005b32b) mup3_progress_pane_ParamLimits

0x79ab,	// (0x0005b32b) mup3_progress_pane

0x7a37,	// (0x0005b3b7) popup_mup3_control_window_ParamLimits

0x7a37,	// (0x0005b3b7) popup_mup3_control_window

0x7a53,	// (0x0005b3d3) popup_mup3_text_window

0x7a71,	// (0x0005b3f1) mup3_progress_pane_t1

0x7a90,	// (0x0005b410) mup3_progress_pane_t2

0x7aaf,	// (0x0005b42f) mup3_progress_pane_t3

0x0002,

0xf737,	// (0x000630b7) mup3_progress_pane_t

0xc8d7,	// (0x00060257) mup_progress_pane_cp03

0xc074,	// (0x0005f9f4) bg_tb_trans_pane_cp04

0x7acc,	// (0x0005b44c) mup3_volume_pane

0x7ad4,	// (0x0005b454) popup_mup3_control_window_g1

0x7add,	// (0x0005b45d) mup3_volume_pane_g1

0x7ae6,	// (0x0005b466) mup3_volume_pane_g2

0x7aef,	// (0x0005b46f) mup3_volume_pane_g3

0x0002,

0xf73e,	// (0x000630be) mup3_volume_pane_g

0xc074,	// (0x0005f9f4) bg_tb_trans_pane_cp03

0xc8e7,	// (0x00060267) popup_mup3_text_window_g1

0xc8ef,	// (0x0006026f) popup_mup3_text_window_t1

0x0b2e,	// (0x000544ae) list_calc_item_pane_g1_ParamLimits

0x2bc0,	// (0x00056540) mup_volume_pane_cp_g1

0x7392,	// (0x0005ad12) main_touch_calib_pane_t3

0x73a6,	// (0x0005ad26) main_touch_calib_pane_t4

0x73ba,	// (0x0005ad3a) main_touch_calib_pane_t5

0xc07e,	// (0x0005f9fe) aid_cell_size_toolbar2

0xc086,	// (0x0005fa06) aid_popup3_width_pane

0xc092,	// (0x0005fa12) aid_zoom_text_msg_primary

0x4826,	// (0x000581a6) vorec_t7

0x0af2,	// (0x00054472) bg_calc_paper_pane_g1_ParamLimits

0x0afe,	// (0x0005447e) bg_calc_paper_pane_g2_ParamLimits

0x0b0a,	// (0x0005448a) bg_calc_paper_pane_g3_ParamLimits

0x0b16,	// (0x00054496) bg_calc_paper_pane_g4_ParamLimits

0x0b22,	// (0x000544a2) bg_calc_paper_pane_g5_ParamLimits

0x411f,	// (0x00057a9f) bg_calc_paper_pane_g6_ParamLimits

0x412e,	// (0x00057aae) bg_calc_paper_pane_g7_ParamLimits

0x413d,	// (0x00057abd) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x00062a93) bg_calc_paper_pane_g_ParamLimits

0x4150,	// (0x00057ad0) calc_bg_paper_pane_g9_ParamLimits

0x0a1b,	// (0x0005439b) image_qvga_pane_ParamLimits

0x0a1b,	// (0x0005439b) image_qvga_pane

0x09f9,	// (0x00054379) bg_popup_sub_pane_cp04_ParamLimits

0x18cb,	// (0x0005524b) popup_mup_playback_window_g1_ParamLimits

0x18d7,	// (0x00055257) popup_mup_playback_window_t1_ParamLimits

0x18ec,	// (0x0005526c) popup_mup_playback_window_t2_ParamLimits

0xf471,	// (0x00062df1) popup_mup_playback_window_t_ParamLimits

0x0a82,	// (0x00054402) main_mup2_pane_g3_ParamLimits

0x0a82,	// (0x00054402) main_mup2_pane_g3

0x4b52,	// (0x000584d2) popup_toolbar_window_cp04

0x1ce1,	// (0x00055661) popup_call2_audio_second_window_g3_ParamLimits

0x1ce1,	// (0x00055661) popup_call2_audio_second_window_g3

0x20eb,	// (0x00055a6b) popup_call2_audio_first_window_g4_ParamLimits

0x20eb,	// (0x00055a6b) popup_call2_audio_first_window_g4

0x2712,	// (0x00056092) popup_call2_audio_in_window_g4_ParamLimits

0x2712,	// (0x00056092) popup_call2_audio_in_window_g4

0x60b9,	// (0x00059a39) aid_area_sk_bg_cut_ParamLimits

0x60b9,	// (0x00059a39) aid_area_sk_bg_cut

0x1901,	// (0x00055281) aid_area_sk_bg_cut_2_ParamLimits

0x1901,	// (0x00055281) aid_area_sk_bg_cut_2

0xc074,	// (0x0005f9f4) aid_placing_details_win

0xc074,	// (0x0005f9f4) aid_placing_details_win_2

0x0a74,	// (0x000543f4) camera2_autofocus_pane_g1_ParamLimits

0x3e50,	// (0x000577d0) popup_fixed_preview_cale_window_ParamLimits

0x3e50,	// (0x000577d0) popup_fixed_preview_cale_window

0x16e4,	// (0x00055064) navi_slider_pane_g3

0x16ed,	// (0x0005506d) navi_slider_pane_g4

0x16f6,	// (0x00055076) navi_slider_pane_g5

0x16e4,	// (0x00055064) navi_slider_pane_g6

0xc7b2,	// (0x00060132) navi_slider_pane_g7

0x1802,	// (0x00055182) mup_scale_pane_g3

0x180b,	// (0x0005518b) mup_scale_pane_g4

0x1814,	// (0x00055194) mup_scale_pane_g5

0x5d59,	// (0x000596d9) mup_scale_pane_g6

0x5d62,	// (0x000596e2) mup_scale_pane_g7

0x2d3a,	// (0x000566ba) cams2_slider_pane_g3

0x2d3a,	// (0x000566ba) cams2_slider_pane_g4

0x2d3a,	// (0x000566ba) cams2_slider_pane_g5

0x2d3a,	// (0x000566ba) cams2_slider_pane_g6

0x2d3a,	// (0x000566ba) cams2_slider_pane_g7

0x0cce,	// (0x0005464e) camera2_autofocus_pane_cp_g1

0x2a22,	// (0x000563a2) bg_popup_preview_window_pane_cp02_ParamLimits

0x2a22,	// (0x000563a2) bg_popup_preview_window_pane_cp02

0xc8fd,	// (0x0006027d) list_fp_cale_pane_ParamLimits

0xc8fd,	// (0x0006027d) list_fp_cale_pane

0xc909,	// (0x00060289) popup_fixed_preview_cale_window_t1_ParamLimits

0xc909,	// (0x00060289) popup_fixed_preview_cale_window_t1

0x7af8,	// (0x0005b478) popup_fixed_preview_cale_window_t2_ParamLimits

0x7af8,	// (0x0005b478) popup_fixed_preview_cale_window_t2

0x7b0d,	// (0x0005b48d) popup_fixed_preview_cale_window_t3_ParamLimits

0x7b0d,	// (0x0005b48d) popup_fixed_preview_cale_window_t3

0x0002,

0xf745,	// (0x000630c5) popup_fixed_preview_cale_window_t_ParamLimits

0xf745,	// (0x000630c5) popup_fixed_preview_cale_window_t

0x7b22,	// (0x0005b4a2) list_single_fp_cale_pane_ParamLimits

0x7b22,	// (0x0005b4a2) list_single_fp_cale_pane

0xc927,	// (0x000602a7) list_single_fp_cale_pane_g1_ParamLimits

0xc927,	// (0x000602a7) list_single_fp_cale_pane_g1

0xc933,	// (0x000602b3) list_single_fp_cale_pane_g2_ParamLimits

0xc933,	// (0x000602b3) list_single_fp_cale_pane_g2

0x0002,

0xf74c,	// (0x000630cc) list_single_fp_cale_pane_g_ParamLimits

0xf74c,	// (0x000630cc) list_single_fp_cale_pane_g

0xc94c,	// (0x000602cc) list_single_fp_cale_pane_t1_ParamLimits

0xc94c,	// (0x000602cc) list_single_fp_cale_pane_t1

0xc95e,	// (0x000602de) list_single_fp_cale_pane_t2_ParamLimits

0xc95e,	// (0x000602de) list_single_fp_cale_pane_t2

0x0001,

0xf753,	// (0x000630d3) list_single_fp_cale_pane_t_ParamLimits

0xf753,	// (0x000630d3) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc0f9,	// (0x0005fa79) main_dialer_pane

0xc074,	// (0x0005f9f4) aid_cell_size_keypad

0xc074,	// (0x0005f9f4) dialer_ne_pane

0xc074,	// (0x0005f9f4) grid_dialer_command_1_pane

0xc074,	// (0x0005f9f4) grid_dialer_command_2_pane

0xc074,	// (0x0005f9f4) grid_dialer_keypad_pane

0x7b38,	// (0x0005b4b8) bg_popup_call_pane_cp06_ParamLimits

0x7b38,	// (0x0005b4b8) bg_popup_call_pane_cp06

0x7b38,	// (0x0005b4b8) dialer_ne_clear_pane_ParamLimits

0x7b38,	// (0x0005b4b8) dialer_ne_clear_pane

0x0cce,	// (0x0005464e) dialer_ne_pane_g1

0x0ca0,	// (0x00054620) dialer_ne_pane_t1_ParamLimits

0x0ca0,	// (0x00054620) dialer_ne_pane_t1

0x7b46,	// (0x0005b4c6) dialer_ne_pane_t2_ParamLimits

0x7b46,	// (0x0005b4c6) dialer_ne_pane_t2

0x7b6e,	// (0x0005b4ee) dialer_ne_pane_t3_ParamLimits

0x7b6e,	// (0x0005b4ee) dialer_ne_pane_t3

0x0002,

0xf758,	// (0x000630d8) dialer_ne_pane_t_ParamLimits

0xf758,	// (0x000630d8) dialer_ne_pane_t

0x7b6e,	// (0x0005b4ee) dialer_ne_pane_t3_copy1_ParamLimits

0x7b6e,	// (0x0005b4ee) dialer_ne_pane_t3_copy1

0xc991,	// (0x00060311) cell_dialer_keypad_pane_ParamLimits

0xc991,	// (0x00060311) cell_dialer_keypad_pane

0x0a1b,	// (0x0005439b) cell_dialer_command_1_pane_ParamLimits

0x0a1b,	// (0x0005439b) cell_dialer_command_1_pane

0xc9a8,	// (0x00060328) cell_dialer_command_2_pane_ParamLimits

0xc9a8,	// (0x00060328) cell_dialer_command_2_pane

0x0a1b,	// (0x0005439b) bg_button_pane_cp02_ParamLimits

0x0a1b,	// (0x0005439b) bg_button_pane_cp02

0x0a74,	// (0x000543f4) cell_dialer_keypad_pane_g1_ParamLimits

0x0a74,	// (0x000543f4) cell_dialer_keypad_pane_g1

0x0a1b,	// (0x0005439b) bg_button_pane_cp03_ParamLimits

0x0a1b,	// (0x0005439b) bg_button_pane_cp03

0x0a74,	// (0x000543f4) cell_dialer_command_1_pane_g1_ParamLimits

0x0a74,	// (0x000543f4) cell_dialer_command_1_pane_g1

0xc074,	// (0x0005f9f4) bg_button_pane_cp04

0x0cce,	// (0x0005464e) cell_dialer_command_2_pane_g1

0xc074,	// (0x0005f9f4) bg_button_pane_cp06

0x0cce,	// (0x0005464e) dialer_ne_clear_pane_g1

0x15b7,	// (0x00054f37) navi_pane_g2

0x15e5,	// (0x00054f65) navi_pane_g3

0x0002,

0xf374,	// (0x00062cf4) navi_pane_g

0x1674,	// (0x00054ff4) navi_pane_mv_g2

0x169b,	// (0x0005501b) navi_pane_mv_g5

0x5b3c,	// (0x000594bc) navi_pane_mv_t1

0x0ae6,	// (0x00054466) main_clock2_pane

0x0a1b,	// (0x0005439b) main_clock2_list_pane_ParamLimits

0x0a1b,	// (0x0005439b) main_clock2_list_pane

0x7c04,	// (0x0005b584) main_clock2_pane_t1_ParamLimits

0x7c04,	// (0x0005b584) main_clock2_pane_t1

0x7c3f,	// (0x0005b5bf) main_clock2_pane_t2_ParamLimits

0x7c3f,	// (0x0005b5bf) main_clock2_pane_t2

0x0004,

0xf764,	// (0x000630e4) main_clock2_pane_t_ParamLimits

0xf764,	// (0x000630e4) main_clock2_pane_t

0x7cdf,	// (0x0005b65f) popup_clock_analogue_window_cp03_ParamLimits

0x7cdf,	// (0x0005b65f) popup_clock_analogue_window_cp03

0x7d04,	// (0x0005b684) popup_clock_digital_window_cp02_ParamLimits

0x7d04,	// (0x0005b684) popup_clock_digital_window_cp02

0x7d7d,	// (0x0005b6fd) main_clock2_list_single_pane_ParamLimits

0x7d7d,	// (0x0005b6fd) main_clock2_list_single_pane

0x0c98,	// (0x00054618) list_highlight_pane_cp05

0xc9eb,	// (0x0006036b) main_clock2_list_single_pane_t1

0x4b52,	// (0x000584d2) popup_toolbar_window_cp04_ParamLimits

0x0a82,	// (0x00054402) camera2_autofocus_pane_g2_ParamLimits

0x0a82,	// (0x00054402) camera2_autofocus_pane_g2

0x0a82,	// (0x00054402) camera2_autofocus_pane_g3_ParamLimits

0x0a82,	// (0x00054402) camera2_autofocus_pane_g3

0x0a82,	// (0x00054402) camera2_autofocus_pane_g4_ParamLimits

0x0a82,	// (0x00054402) camera2_autofocus_pane_g4

0x0a82,	// (0x00054402) camera2_autofocus_pane_g5_ParamLimits

0x0a82,	// (0x00054402) camera2_autofocus_pane_g5

0x0004,

0xf6a8,	// (0x00063028) camera2_autofocus_pane_g_ParamLimits

0xf6a8,	// (0x00063028) camera2_autofocus_pane_g

0x7463,	// (0x0005ade3) camera2_autofocus_pane_cp_g2

0x746b,	// (0x0005adeb) camera2_autofocus_pane_cp_g3

0x7473,	// (0x0005adf3) camera2_autofocus_pane_cp_g4

0x747b,	// (0x0005adfb) camera2_autofocus_pane_cp_g5

0x0004,

0xf70e,	// (0x0006308e) camera2_autofocus_pane_cp_g

0xc074,	// (0x0005f9f4) popup_dialer_spcha_window

0xc074,	// (0x0005f9f4) bg_popup_sub_pane_cp07

0xc074,	// (0x0005f9f4) list_spcha_pane

0xc9f9,	// (0x00060379) list_single_spcha_pane_ParamLimits

0xc9f9,	// (0x00060379) list_single_spcha_pane

0xc074,	// (0x0005f9f4) list_highlight_pane_cp06

0x1209,	// (0x00054b89) list_single_spcha_pane_t1

0x24bc,	// (0x00055e3c) popup_call2_audio_out_window_g4_ParamLimits

0x24bc,	// (0x00055e3c) popup_call2_audio_out_window_g4

0xc0f9,	// (0x0005fa79) main_imed2_pane

0xc80b,	// (0x0006018b) popup_imed_adjust2_window

0x6947,	// (0x0005a2c7) popup_imed_trans_window_ParamLimits

0x6947,	// (0x0005a2c7) popup_imed_trans_window

0x2c95,	// (0x00056615) popup_blid_sat_info2_window_t1

0x2ca3,	// (0x00056623) popup_blid_sat_info2_window_t2

0x000a,

0xf63d,	// (0x00062fbd) popup_blid_sat_info2_window_t

0x7e2e,	// (0x0005b7ae) aid_size_cell_colour_35

0x7e4e,	// (0x0005b7ce) aid_size_cell_colour_112

0x7e6e,	// (0x0005b7ee) aid_size_cell_effect

0x2a2e,	// (0x000563ae) bg_tb_trans_pane_cp02

0x113b,	// (0x00054abb) heading_imed_pane

0x7e8e,	// (0x0005b80e) listscroll_imed_pane

0xca0b,	// (0x0006038b) heading_imed_pane_g1

0xca13,	// (0x00060393) heading_imed_pane_t1

0xca21,	// (0x000603a1) grid_imed_colour_35_pane_ParamLimits

0xca21,	// (0x000603a1) grid_imed_colour_35_pane

0x7e9a,	// (0x0005b81a) grid_imed_effect_pane

0xca39,	// (0x000603b9) list_imed_aspect_pane

0x7eb0,	// (0x0005b830) scroll_pane_cp027_ParamLimits

0x7eb0,	// (0x0005b830) scroll_pane_cp027

0x7ec1,	// (0x0005b841) cell_imed_effect_pane_ParamLimits

0x7ec1,	// (0x0005b841) cell_imed_effect_pane

0xca41,	// (0x000603c1) cell_imed_colour_pane_ParamLimits

0xca41,	// (0x000603c1) cell_imed_colour_pane

0xca83,	// (0x00060403) cell_imed_colour_pane_g1_ParamLimits

0xca83,	// (0x00060403) cell_imed_colour_pane_g1

0xca94,	// (0x00060414) hgihlgiht_grid_pane_cp016_ParamLimits

0xca94,	// (0x00060414) hgihlgiht_grid_pane_cp016

0x7ee8,	// (0x0005b868) cell_imed_effect_pane_g1

0x7ef0,	// (0x0005b870) grid_highlight_pane_cp017

0xcaa5,	// (0x00060425) list_imed_single_pane_ParamLimits

0xcaa5,	// (0x00060425) list_imed_single_pane

0xc074,	// (0x0005f9f4) list_highlight_pane_cp07

0xcaba,	// (0x0006043a) list_imed_aspect_pane_comp1_t1

0x2a2e,	// (0x000563ae) bg_tb_trans_pane_cp05

0xcadc,	// (0x0006045c) popup_imed_adjust2_window_g1

0xcb03,	// (0x00060483) popup_imed_adjust2_window_t1

0xcb1b,	// (0x0006049b) slider_imed_adjust_pane

0xcb2f,	// (0x000604af) slider_imed_adjust_pane_g1

0xcb3f,	// (0x000604bf) slider_imed_adjust_pane_g2

0xcb4f,	// (0x000604cf) slider_imed_adjust_pane_g3

0xcb60,	// (0x000604e0) slider_imed_adjust_pane_g4

0x0003,

0xf781,	// (0x00063101) slider_imed_adjust_pane_g

0x7ef9,	// (0x0005b879) aid_size_cell_clipart2

0x7f05,	// (0x0005b885) grid_imed_clipart_pane

0xcb71,	// (0x000604f1) scroll_pane_cp031

0x7f0f,	// (0x0005b88f) cell_imed_clipart_pane_ParamLimits

0x7f0f,	// (0x0005b88f) cell_imed_clipart_pane

0x7f31,	// (0x0005b8b1) cell_imed_clipart_pane_g1

0xc074,	// (0x0005f9f4) grid_highlight_pane_cp014

0x7be0,	// (0x0005b560) main_clock2_pane_g1_ParamLimits

0x7be0,	// (0x0005b560) main_clock2_pane_g1

0x7d24,	// (0x0005b6a4) aid_call2_pane_cp10

0x7d36,	// (0x0005b6b6) aid_call_pane_cp10

0x1516,	// (0x00054e96) popup_clock_analogue_window_cp10_g1

0x1516,	// (0x00054e96) popup_clock_analogue_window_cp10_g2

0x7d48,	// (0x0005b6c8) popup_clock_analogue_window_cp10_g3

0x7d48,	// (0x0005b6c8) popup_clock_analogue_window_cp10_g4

0x1516,	// (0x00054e96) popup_clock_analogue_window_cp10_g5

0x0004,

0xf76f,	// (0x000630ef) popup_clock_analogue_window_cp10_g

0x7d5e,	// (0x0005b6de) popup_clock_analogue_window_cp10_t1

0x7d8f,	// (0x0005b70f) clock_digital_number_pane_cp10_ParamLimits

0x7d8f,	// (0x0005b70f) clock_digital_number_pane_cp10

0x7da7,	// (0x0005b727) clock_digital_number_pane_cp11_ParamLimits

0x7da7,	// (0x0005b727) clock_digital_number_pane_cp11

0x7dbf,	// (0x0005b73f) clock_digital_number_pane_cp12_ParamLimits

0x7dbf,	// (0x0005b73f) clock_digital_number_pane_cp12

0x7dd9,	// (0x0005b759) clock_digital_number_pane_cp13_ParamLimits

0x7dd9,	// (0x0005b759) clock_digital_number_pane_cp13

0x7df3,	// (0x0005b773) clock_digital_separator_pane_cp10_ParamLimits

0x7df3,	// (0x0005b773) clock_digital_separator_pane_cp10

0x7e0d,	// (0x0005b78d) popup_clock_digital_window_cp02_t1_ParamLimits

0x7e0d,	// (0x0005b78d) popup_clock_digital_window_cp02_t1

0x09f1,	// (0x00054371) clock_digital_number_pane_cp10_g1

0x09f1,	// (0x00054371) clock_digital_number_pane_cp10_g2

0x0001,

0xf78a,	// (0x0006310a) clock_digital_number_pane_cp10_g

0x09f1,	// (0x00054371) clock_digital_separator_pane_cp10_g1

0x09f1,	// (0x00054371) clock_digital_separator_pane_g2_cp10

0x16a3,	// (0x00055023) navi_pane_vded_g4

0x16ac,	// (0x0005502c) navi_pane_vded_g5

0x16b5,	// (0x00055035) navi_pane_vded_t1

0xc0f9,	// (0x0005fa79) main_vded_pane

0x7f3a,	// (0x0005b8ba) main_vded_pane_g1

0x7f44,	// (0x0005b8c4) main_vded_pane_g2

0x7f4e,	// (0x0005b8ce) main_vded_pane_g3

0x0002,

0xf78f,	// (0x0006310f) main_vded_pane_g

0x7f58,	// (0x0005b8d8) main_vded_pane_t1

0x7f66,	// (0x0005b8e6) main_vded_pane_t2

0x0001,

0xf796,	// (0x00063116) main_vded_pane_t

0x7f74,	// (0x0005b8f4) vded_slider_pane

0x7f7c,	// (0x0005b8fc) vded_video_pane

0xcb79,	// (0x000604f9) vded_video_pane_g1

0x7f84,	// (0x0005b904) vded_video_pane_g2

0x0cce,	// (0x0005464e) vded_video_pane_g3

0x0002,

0xf79b,	// (0x0006311b) vded_video_pane_g

0xcb83,	// (0x00060503) vded_slider_pane_g1

0x2bc0,	// (0x00056540) vded_slider_pane_g2

0xcb8c,	// (0x0006050c) vded_slider_pane_g3

0xcb95,	// (0x00060515) vded_slider_pane_g4

0xcb9e,	// (0x0006051e) vded_slider_pane_g5

0x0004,

0xf7a2,	// (0x00063122) vded_slider_pane_g

0x7a1f,	// (0x0005b39f) mup3_rocker_pane_ParamLimits

0x7a1f,	// (0x0005b39f) mup3_rocker_pane

0x7f8d,	// (0x0005b90d) mup3_control_keys_pane_g1

0x7f95,	// (0x0005b915) mup3_control_keys_pane_g2

0x7f9d,	// (0x0005b91d) mup3_control_keys_pane_g3

0x7fa5,	// (0x0005b925) mup3_control_keys_pane_g4

0x0003,

0xf7ad,	// (0x0006312d) mup3_control_keys_pane_g

0x3e87,	// (0x00057807) popup_toolbar2_fixed_window_cp01_ParamLimits

0x3e87,	// (0x00057807) popup_toolbar2_fixed_window_cp01

0x7a5b,	// (0x0005b3db) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7a5b,	// (0x0005b3db) popup_toolbar2_fixed_window_cp02

0x1e53,	// (0x000557d3) popup_call2_audio_second_window_t4_ParamLimits

0x1e53,	// (0x000557d3) popup_call2_audio_second_window_t4

0x2381,	// (0x00055d01) popup_call2_audio_first_window_t6_ParamLimits

0x2381,	// (0x00055d01) popup_call2_audio_first_window_t6

0x25bf,	// (0x00055f3f) popup_call2_audio_out_window_t6_ParamLimits

0x25bf,	// (0x00055f3f) popup_call2_audio_out_window_t6

0xc0f9,	// (0x0005fa79) main_vitu_pane

0x0a1b,	// (0x0005439b) aid_size_cell_itu_ParamLimits

0x0a1b,	// (0x0005439b) aid_size_cell_itu

0x0a1b,	// (0x0005439b) bg_popup_window_pane_cp08_ParamLimits

0x0a1b,	// (0x0005439b) bg_popup_window_pane_cp08

0x0a1b,	// (0x0005439b) field_vitu_entry_pane_ParamLimits

0x0a1b,	// (0x0005439b) field_vitu_entry_pane

0x0a1b,	// (0x0005439b) grid_vitu_function_pane_ParamLimits

0x0a1b,	// (0x0005439b) grid_vitu_function_pane

0x0a1b,	// (0x0005439b) grid_vitu_itu_pane_ParamLimits

0x0a1b,	// (0x0005439b) grid_vitu_itu_pane

0x0a1b,	// (0x0005439b) cell_vitu_itu_pane_ParamLimits

0x0a1b,	// (0x0005439b) cell_vitu_itu_pane

0x0a1b,	// (0x0005439b) cell_vitu_function_pane_ParamLimits

0x0a1b,	// (0x0005439b) cell_vitu_function_pane

0x0a1b,	// (0x0005439b) bg_popup_sub_pane_cp08_ParamLimits

0x0a1b,	// (0x0005439b) bg_popup_sub_pane_cp08

0x0ce8,	// (0x00054668) field_vitu_entry_pane_t1_ParamLimits

0x0ce8,	// (0x00054668) field_vitu_entry_pane_t1

0xcba7,	// (0x00060527) field_vitu_entry_pane_t2_ParamLimits

0xcba7,	// (0x00060527) field_vitu_entry_pane_t2

0x0001,

0xf7b6,	// (0x00063136) field_vitu_entry_pane_t_ParamLimits

0xf7b6,	// (0x00063136) field_vitu_entry_pane_t

0x1792,	// (0x00055112) bg_button_pane_cp05_ParamLimits

0x1792,	// (0x00055112) bg_button_pane_cp05

0xcbc4,	// (0x00060544) cell_vitu_itu_pane_g1

0x2cd4,	// (0x00056654) cell_vitu_itu_pane_t1_ParamLimits

0x2cd4,	// (0x00056654) cell_vitu_itu_pane_t1

0x2cd4,	// (0x00056654) cell_vitu_itu_pane_t2_ParamLimits

0x2cd4,	// (0x00056654) cell_vitu_itu_pane_t2

0x0002,

0xf7bb,	// (0x0006313b) cell_vitu_itu_pane_t_ParamLimits

0xf7bb,	// (0x0006313b) cell_vitu_itu_pane_t

0xc074,	// (0x0005f9f4) bg_button_pane_cp07

0x0cce,	// (0x0005464e) cell_vitu_function_pane_g1

0xc674,	// (0x0005fff4) main_calc_pane_g1

0x3cae,	// (0x0005762e) aid_visual_content_pane

0xc0f9,	// (0x0005fa79) main_vradio_pane

0x0a74,	// (0x000543f4) main_vradio_pane_g1_ParamLimits

0x0a74,	// (0x000543f4) main_vradio_pane_g1

0x0a82,	// (0x00054402) main_vradio_pane_g2_ParamLimits

0x0a82,	// (0x00054402) main_vradio_pane_g2

0x0001,

0xf7c2,	// (0x00063142) main_vradio_pane_g_ParamLimits

0xf7c2,	// (0x00063142) main_vradio_pane_g

0x0ce8,	// (0x00054668) main_vradio_pane_t1_ParamLimits

0x0ce8,	// (0x00054668) main_vradio_pane_t1

0x0ce8,	// (0x00054668) main_vradio_pane_t2_ParamLimits

0x0ce8,	// (0x00054668) main_vradio_pane_t2

0x0ca0,	// (0x00054620) main_vradio_pane_t3_ParamLimits

0x0ca0,	// (0x00054620) main_vradio_pane_t3

0x0002,

0xf7c7,	// (0x00063147) main_vradio_pane_t_ParamLimits

0xf7c7,	// (0x00063147) main_vradio_pane_t

0x0a1b,	// (0x0005439b) vradio_rocker_control_pane_ParamLimits

0x0a1b,	// (0x0005439b) vradio_rocker_control_pane

0x0a1b,	// (0x0005439b) vradio_station_info_pane_ParamLimits

0x0a1b,	// (0x0005439b) vradio_station_info_pane

0x0a1b,	// (0x0005439b) vradio_frequency_info_pane_ParamLimits

0x0a1b,	// (0x0005439b) vradio_frequency_info_pane

0x0cce,	// (0x0005464e) vradio_station_info_pane_g1

0x2cd4,	// (0x00056654) vradio_station_info_pane_t1_ParamLimits

0x2cd4,	// (0x00056654) vradio_station_info_pane_t1

0x0ca0,	// (0x00054620) vradio_station_info_pane_t2_ParamLimits

0x0ca0,	// (0x00054620) vradio_station_info_pane_t2

0x0001,

0xf7ce,	// (0x0006314e) vradio_station_info_pane_t_ParamLimits

0xf7ce,	// (0x0006314e) vradio_station_info_pane_t

0xc074,	// (0x0005f9f4) vradio_tuning_pane

0x7fb5,	// (0x0005b935) vradio_rocker_control_pane_g1

0xcbe0,	// (0x00060560) vradio_rocker_control_pane_g2

0x7fbf,	// (0x0005b93f) vradio_rocker_control_pane_g3

0x7fc9,	// (0x0005b949) vradio_rocker_control_pane_g4

0x7fd3,	// (0x0005b953) vradio_rocker_control_pane_g5

0x0004,

0xf7d3,	// (0x00063153) vradio_rocker_control_pane_g

0x0cce,	// (0x0005464e) vradio_frequency_info_pane_g1

0x0ce8,	// (0x00054668) vradio_frequency_info_pane_t1_ParamLimits

0x0ce8,	// (0x00054668) vradio_frequency_info_pane_t1

0x7fdd,	// (0x0005b95d) vradio_tuning_pane_g1

0x7fe8,	// (0x0005b968) vradio_tuning_pane_t1

0xc0aa,	// (0x0005fa2a) area_side_right_pane_ParamLimits

0xc0aa,	// (0x0005fa2a) area_side_right_pane

0x29e9,	// (0x00056369) status_small_pane_g1

0x29f1,	// (0x00056371) status_small_pane_g2

0x29fa,	// (0x0005637a) status_small_pane_g3

0x2a03,	// (0x00056383) status_small_pane_g4

0x0003,

0xf59f,	// (0x00062f1f) status_small_pane_g

0x2a0c,	// (0x0005638c) status_small_pane_t1

0xc0f9,	// (0x0005fa79) main_video3_pane

0xcbe8,	// (0x00060568) cams_zoom_vslider_pane

0xcbf0,	// (0x00060570) image3_wide_pane_ParamLimits

0xcbf0,	// (0x00060570) image3_wide_pane

0xcc0a,	// (0x0006058a) image3_wide_small_pane

0xcc16,	// (0x00060596) main_video3_pane_g1_ParamLimits

0xcc16,	// (0x00060596) main_video3_pane_g1

0xcc32,	// (0x000605b2) main_video3_pane_g2_ParamLimits

0xcc32,	// (0x000605b2) main_video3_pane_g2

0x0001,

0xf7de,	// (0x0006315e) main_video3_pane_g_ParamLimits

0xf7de,	// (0x0006315e) main_video3_pane_g

0xcc4e,	// (0x000605ce) main_video3_pane_t1_ParamLimits

0xcc4e,	// (0x000605ce) main_video3_pane_t1

0xcc79,	// (0x000605f9) main_video3_pane_t2_ParamLimits

0xcc79,	// (0x000605f9) main_video3_pane_t2

0xcca4,	// (0x00060624) main_video3_pane_t3_ParamLimits

0xcca4,	// (0x00060624) main_video3_pane_t3

0x0002,

0xf7e3,	// (0x00063163) main_video3_pane_t_ParamLimits

0xf7e3,	// (0x00063163) main_video3_pane_t

0xccd1,	// (0x00060651) cams_zoom_vslider_pane_g1

0xccda,	// (0x0006065a) cams_zoom_vslider_pane_g2

0x0001,

0xf7ea,	// (0x0006316a) cams_zoom_vslider_pane_g

0xcce2,	// (0x00060662) small_slider_vertical_pane

0x0cce,	// (0x0005464e) small_slider_vertical_pane_g1

0x0cce,	// (0x0005464e) small_slider_vertical_pane_g2

0xccea,	// (0x0006066a) small_slider_vertical_pane_g3

0x0002,

0xf7ef,	// (0x0006316f) small_slider_vertical_pane_g

0xc0f9,	// (0x0005fa79) main_hwr_training_pane

0xccf3,	// (0x00060673) hwr_training_instruct_pane_ParamLimits

0xccf3,	// (0x00060673) hwr_training_instruct_pane

0x7ff7,	// (0x0005b977) hwr_training_navi_pane_ParamLimits

0x7ff7,	// (0x0005b977) hwr_training_navi_pane

0x8016,	// (0x0005b996) hwr_training_write_pane_ParamLimits

0x8016,	// (0x0005b996) hwr_training_write_pane

0xc074,	// (0x0005f9f4) bg_frame_shadow_pane

0xcd2a,	// (0x000606aa) hwr_training_write_pane_g1

0xcd32,	// (0x000606b2) hwr_training_write_pane_g2

0xcd3a,	// (0x000606ba) hwr_training_write_pane_g3

0xcd42,	// (0x000606c2) hwr_training_write_pane_g4

0xcd4a,	// (0x000606ca) hwr_training_write_pane_g5

0xcd52,	// (0x000606d2) hwr_training_write_pane_g6

0xcd5a,	// (0x000606da) hwr_training_write_pane_g7

0x0006,

0xf7f6,	// (0x00063176) hwr_training_write_pane_g

0xcd62,	// (0x000606e2) hwr_training_navi_pane_g1_ParamLimits

0xcd62,	// (0x000606e2) hwr_training_navi_pane_g1

0xcd74,	// (0x000606f4) hwr_training_navi_pane_g2_ParamLimits

0xcd74,	// (0x000606f4) hwr_training_navi_pane_g2

0xcd86,	// (0x00060706) hwr_training_navi_pane_g3_ParamLimits

0xcd86,	// (0x00060706) hwr_training_navi_pane_g3

0xcd96,	// (0x00060716) hwr_training_navi_pane_g4_ParamLimits

0xcd96,	// (0x00060716) hwr_training_navi_pane_g4

0x0004,

0xf805,	// (0x00063185) hwr_training_navi_pane_g_ParamLimits

0xf805,	// (0x00063185) hwr_training_navi_pane_g

0xcda3,	// (0x00060723) hwr_training_navi_pane_t1

0x8060,	// (0x0005b9e0) list_single_hwr_training_instruct_pane_ParamLimits

0x8060,	// (0x0005b9e0) list_single_hwr_training_instruct_pane

0xcdb1,	// (0x00060731) list_single_hwr_training_instruct_pane_t1

0x6ecd,	// (0x0005a84d) bg_frame_shadow_pane_g1

0xcdc0,	// (0x00060740) bg_frame_shadow_pane_g2

0xcdc8,	// (0x00060748) bg_frame_shadow_pane_g3

0xcdd0,	// (0x00060750) bg_frame_shadow_pane_g4

0xcdd8,	// (0x00060758) bg_frame_shadow_pane_g5

0xcde0,	// (0x00060760) bg_frame_shadow_pane_g6

0xcde8,	// (0x00060768) bg_frame_shadow_pane_g7

0x0b95,	// (0x00054515) bg_frame_shadow_pane_g8

0x0007,

0xf810,	// (0x00063190) bg_frame_shadow_pane_g

0xc0f9,	// (0x0005fa79) main_video_tele_dialer_pane

0x8076,	// (0x0005b9f6) aid_size_cell_video_keypad_ParamLimits

0x8076,	// (0x0005b9f6) aid_size_cell_video_keypad

0x8090,	// (0x0005ba10) grid_video_dialer_keypad_pane_ParamLimits

0x8090,	// (0x0005ba10) grid_video_dialer_keypad_pane

0x80de,	// (0x0005ba5e) video_down_pane_cp_ParamLimits

0x80de,	// (0x0005ba5e) video_down_pane_cp

0x8110,	// (0x0005ba90) cell_video_dialer_keypad_pane_ParamLimits

0x8110,	// (0x0005ba90) cell_video_dialer_keypad_pane

0xcdf0,	// (0x00060770) bg_button_pane_cp08_ParamLimits

0xcdf0,	// (0x00060770) bg_button_pane_cp08

0x8132,	// (0x0005bab2) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8132,	// (0x0005bab2) cell_video_dialer_keypad_pane_g1

0x7a09,	// (0x0005b389) mup3_rocker2_pane_ParamLimits

0x7a09,	// (0x0005b389) mup3_rocker2_pane

0x0cce,	// (0x0005464e) mup3_rocker2_pane_g1

0x682a,	// (0x0005a1aa) main_dialer2_pane

0xc0f9,	// (0x0005fa79) main_mp4_pane

0xce1a,	// (0x0006079a) main_mp4_pane_g1_ParamLimits

0xce1a,	// (0x0006079a) main_mp4_pane_g1

0xce1a,	// (0x0006079a) main_mp4_pane_g2_ParamLimits

0xce1a,	// (0x0006079a) main_mp4_pane_g2

0x816c,	// (0x0005baec) main_mp4_pane_g3_ParamLimits

0x816c,	// (0x0005baec) main_mp4_pane_g3

0xce28,	// (0x000607a8) main_mp4_pane_g4_ParamLimits

0xce28,	// (0x000607a8) main_mp4_pane_g4

0xce56,	// (0x000607d6) main_mp4_pane_g5_ParamLimits

0xce56,	// (0x000607d6) main_mp4_pane_g5

0x0007,

0xf830,	// (0x000631b0) main_mp4_pane_g_ParamLimits

0xf830,	// (0x000631b0) main_mp4_pane_g

0xceca,	// (0x0006084a) main_mp4_pane_t1_ParamLimits

0xceca,	// (0x0006084a) main_mp4_pane_t1

0xcf26,	// (0x000608a6) main_mp4_pane_t2_ParamLimits

0xcf26,	// (0x000608a6) main_mp4_pane_t2

0xcf78,	// (0x000608f8) main_mp4_pane_t3_ParamLimits

0xcf78,	// (0x000608f8) main_mp4_pane_t3

0xcf9e,	// (0x0006091e) main_mp4_pane_t4_ParamLimits

0xcf9e,	// (0x0006091e) main_mp4_pane_t4

0x0003,

0xf841,	// (0x000631c1) main_mp4_pane_t_ParamLimits

0xf841,	// (0x000631c1) main_mp4_pane_t

0xcfe2,	// (0x00060962) mp4_progress_pane_ParamLimits

0xcfe2,	// (0x00060962) mp4_progress_pane

0xd02c,	// (0x000609ac) mp4_rocker_pane_ParamLimits

0xd02c,	// (0x000609ac) mp4_rocker_pane

0xd054,	// (0x000609d4) mp4_progress_pane_t1

0xd06d,	// (0x000609ed) mp4_progress_pane_t2

0x0001,

0xf84a,	// (0x000631ca) mp4_progress_pane_t

0xd086,	// (0x00060a06) mup_progress_pane_cp04

0x2d3a,	// (0x000566ba) mp4_rocker_pane_g1

0x81a8,	// (0x0005bb28) aid_cell_size_keypad2_ParamLimits

0x81a8,	// (0x0005bb28) aid_cell_size_keypad2

0x81be,	// (0x0005bb3e) dialer2_ne_pane_ParamLimits

0x81be,	// (0x0005bb3e) dialer2_ne_pane

0x81d8,	// (0x0005bb58) grid_dialer2_keypad_pane_ParamLimits

0x81d8,	// (0x0005bb58) grid_dialer2_keypad_pane

0x1792,	// (0x00055112) bg_popup_call_pane_cp07_ParamLimits

0x1792,	// (0x00055112) bg_popup_call_pane_cp07

0x81f4,	// (0x0005bb74) dialer2_ne_pane_t1_ParamLimits

0x81f4,	// (0x0005bb74) dialer2_ne_pane_t1

0x8230,	// (0x0005bbb0) cell_dialer2_keypad_pane_ParamLimits

0x8230,	// (0x0005bbb0) cell_dialer2_keypad_pane

0xd0ab,	// (0x00060a2b) bg_button_pane_pane_cp04_ParamLimits

0xd0ab,	// (0x00060a2b) bg_button_pane_pane_cp04

0x8252,	// (0x0005bbd2) cell_dialer2_keypad_pane_g1_ParamLimits

0x8252,	// (0x0005bbd2) cell_dialer2_keypad_pane_g1

0x4a26,	// (0x000583a6) aid_placing_vt_set_content_ParamLimits

0x4a26,	// (0x000583a6) aid_placing_vt_set_content

0x4a4e,	// (0x000583ce) aid_placing_vt_set_title_ParamLimits

0x4a4e,	// (0x000583ce) aid_placing_vt_set_title

0xc0f9,	// (0x0005fa79) main_image3_pane

0x8318,	// (0x0005bc98) area_side_right_pane_cp01_ParamLimits

0x8318,	// (0x0005bc98) area_side_right_pane_cp01

0xce1a,	// (0x0006079a) main_image3_pane_g1_ParamLimits

0xce1a,	// (0x0006079a) main_image3_pane_g1

0x832f,	// (0x0005bcaf) main_image3_pane_g2_ParamLimits

0x832f,	// (0x0005bcaf) main_image3_pane_g2

0x8357,	// (0x0005bcd7) main_image3_pane_g3_ParamLimits

0x8357,	// (0x0005bcd7) main_image3_pane_g3

0x8381,	// (0x0005bd01) main_image3_pane_g4_ParamLimits

0x8381,	// (0x0005bd01) main_image3_pane_g4

0x0003,

0xf859,	// (0x000631d9) main_image3_pane_g_ParamLimits

0xf859,	// (0x000631d9) main_image3_pane_g

0x83ab,	// (0x0005bd2b) main_image3_pane_t1_ParamLimits

0x83ab,	// (0x0005bd2b) main_image3_pane_t1

0x8403,	// (0x0005bd83) main_image3_pane_t2_ParamLimits

0x8403,	// (0x0005bd83) main_image3_pane_t2

0x8455,	// (0x0005bdd5) main_image3_pane_t3_ParamLimits

0x8455,	// (0x0005bdd5) main_image3_pane_t3

0x0003,

0xf862,	// (0x000631e2) main_image3_pane_t_ParamLimits

0xf862,	// (0x000631e2) main_image3_pane_t

0x0a1b,	// (0x0005439b) grid_sctrl_middle_pane_cp01_ParamLimits

0x0a1b,	// (0x0005439b) grid_sctrl_middle_pane_cp01

0x84dd,	// (0x0005be5d) cell_sctrl_middle_pane_cp01_ParamLimits

0x84dd,	// (0x0005be5d) cell_sctrl_middle_pane_cp01

0x84fa,	// (0x0005be7a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x84fa,	// (0x0005be7a) cell_sctrl_middle_pane_cp01_g1

0xc0f9,	// (0x0005fa79) main_call4_pane

0x8510,	// (0x0005be90) aid_size_button_call4_ParamLimits

0x8510,	// (0x0005be90) aid_size_button_call4

0x8543,	// (0x0005bec3) call4_windows_pane_ParamLimits

0x8543,	// (0x0005bec3) call4_windows_pane

0x8562,	// (0x0005bee2) grid_call4_button_pane_ParamLimits

0x8562,	// (0x0005bee2) grid_call4_button_pane

0x8595,	// (0x0005bf15) call4_windows_conf_pane

0x85aa,	// (0x0005bf2a) popup_call4_audio_first_window_ParamLimits

0x85aa,	// (0x0005bf2a) popup_call4_audio_first_window

0x85fa,	// (0x0005bf7a) popup_call4_audio_second_window_ParamLimits

0x85fa,	// (0x0005bf7a) popup_call4_audio_second_window

0x8611,	// (0x0005bf91) popup_call4_audio_wait_window_ParamLimits

0x8611,	// (0x0005bf91) popup_call4_audio_wait_window

0x861f,	// (0x0005bf9f) cell_call4_button_pane_ParamLimits

0x861f,	// (0x0005bf9f) cell_call4_button_pane

0x8644,	// (0x0005bfc4) bg_button_pane_cp09_ParamLimits

0x8644,	// (0x0005bfc4) bg_button_pane_cp09

0x8650,	// (0x0005bfd0) cell_call4_button_pane_g1_ParamLimits

0x8650,	// (0x0005bfd0) cell_call4_button_pane_g1

0x8676,	// (0x0005bff6) cell_call4_button_pane_t1_ParamLimits

0x8676,	// (0x0005bff6) cell_call4_button_pane_t1

0xd123,	// (0x00060aa3) popup_call4_audio_conf_window_ParamLimits

0xd123,	// (0x00060aa3) popup_call4_audio_conf_window

0x7a71,	// (0x0005b3f1) mup3_progress_pane_t1_ParamLimits

0x7a90,	// (0x0005b410) mup3_progress_pane_t2_ParamLimits

0x7aaf,	// (0x0005b42f) mup3_progress_pane_t3_ParamLimits

0xf737,	// (0x000630b7) mup3_progress_pane_t_ParamLimits

0xc8d7,	// (0x00060257) mup_progress_pane_cp03_ParamLimits

0x7fad,	// (0x0005b92d) mup3_control_keys_pane_g4_copy1

0xd010,	// (0x00060990) mp4_rocker2_pane_ParamLimits

0xd010,	// (0x00060990) mp4_rocker2_pane

0xd137,	// (0x00060ab7) mp4_rocker2_pane_g1

0xd13f,	// (0x00060abf) mp4_rocker2_pane_g2

0xd147,	// (0x00060ac7) mp4_rocker2_pane_g3

0xd14f,	// (0x00060acf) mp4_rocker2_pane_g4

0xd157,	// (0x00060ad7) mp4_rocker2_pane_g5

0x0004,

0xf86b,	// (0x000631eb) mp4_rocker2_pane_g

0xc0f9,	// (0x0005fa79) main_camera4_pane

0xc0f9,	// (0x0005fa79) main_video4_pane

0x80ac,	// (0x0005ba2c) main_video_tele_dialer_pane_t1_ParamLimits

0x80ac,	// (0x0005ba2c) main_video_tele_dialer_pane_t1

0x80c5,	// (0x0005ba45) main_video_tele_dialer_pane_t2_ParamLimits

0x80c5,	// (0x0005ba45) main_video_tele_dialer_pane_t2

0x0001,

0xf821,	// (0x000631a1) main_video_tele_dialer_pane_t_ParamLimits

0xf821,	// (0x000631a1) main_video_tele_dialer_pane_t

0x86b8,	// (0x0005c038) cam4_autofocus_pane_ParamLimits

0x86b8,	// (0x0005c038) cam4_autofocus_pane

0x86ce,	// (0x0005c04e) cam4_image_uncrop_pane_ParamLimits

0x86ce,	// (0x0005c04e) cam4_image_uncrop_pane

0x86e8,	// (0x0005c068) cam4_indicators_pane_ParamLimits

0x86e8,	// (0x0005c068) cam4_indicators_pane

0x8713,	// (0x0005c093) main_camera4_pane_g1_ParamLimits

0x8713,	// (0x0005c093) main_camera4_pane_g1

0x8725,	// (0x0005c0a5) main_camera4_pane_g2_ParamLimits

0x8725,	// (0x0005c0a5) main_camera4_pane_g2

0x8738,	// (0x0005c0b8) main_camera4_pane_g3_ParamLimits

0x8738,	// (0x0005c0b8) main_camera4_pane_g3

0x874b,	// (0x0005c0cb) main_camera4_pane_g4_ParamLimits

0x874b,	// (0x0005c0cb) main_camera4_pane_g4

0x875e,	// (0x0005c0de) main_camera4_pane_g5_ParamLimits

0x875e,	// (0x0005c0de) main_camera4_pane_g5

0x0005,

0xf876,	// (0x000631f6) main_camera4_pane_g_ParamLimits

0xf876,	// (0x000631f6) main_camera4_pane_g

0x8782,	// (0x0005c102) main_camera4_pane_t1_ParamLimits

0x8782,	// (0x0005c102) main_camera4_pane_t1

0xd17b,	// (0x00060afb) bg_tb_trans_pane_cp06

0xeebe,	// (0x0006283e) cam4_indicators_pane_g1

0xeecf,	// (0x0006284f) cam4_indicators_pane_g2

0x0002,

0xf891,	// (0x00063211) cam4_indicators_pane_g

0xeee7,	// (0x00062867) cam4_indicators_pane_t1

0x87e6,	// (0x0005c166) main_video4_pane_g1_ParamLimits

0x87e6,	// (0x0005c166) main_video4_pane_g1

0x87f5,	// (0x0005c175) main_video4_pane_g2_ParamLimits

0x87f5,	// (0x0005c175) main_video4_pane_g2

0x8804,	// (0x0005c184) main_video4_pane_g3_ParamLimits

0x8804,	// (0x0005c184) main_video4_pane_g3

0x8813,	// (0x0005c193) main_video4_pane_g4_ParamLimits

0x8813,	// (0x0005c193) main_video4_pane_g4

0x0004,

0xf898,	// (0x00063218) main_video4_pane_g_ParamLimits

0xf898,	// (0x00063218) main_video4_pane_g

0x8831,	// (0x0005c1b1) vid4_indicators_pane_ParamLimits

0x8831,	// (0x0005c1b1) vid4_indicators_pane

0x885f,	// (0x0005c1df) video4_image_uncrop_cif_pane_ParamLimits

0x885f,	// (0x0005c1df) video4_image_uncrop_cif_pane

0x8879,	// (0x0005c1f9) video4_image_uncrop_nhd_pane_ParamLimits

0x8879,	// (0x0005c1f9) video4_image_uncrop_nhd_pane

0x86ce,	// (0x0005c04e) video4_image_uncrop_vga_pane_ParamLimits

0x86ce,	// (0x0005c04e) video4_image_uncrop_vga_pane

0xc0eb,	// (0x0005fa6b) bg_tb_trans_pane_cp07

0xef11,	// (0x00062891) vid4_indicators_pane_g1

0xef25,	// (0x000628a5) vid4_indicators_pane_g2

0xef39,	// (0x000628b9) vid4_indicators_pane_g3

0x0004,

0xf8a3,	// (0x00063223) vid4_indicators_pane_g

0xef66,	// (0x000628e6) vid4_indicators_pane_t1

0x888d,	// (0x0005c20d) cam4_autofocus_pane_g1

0x8895,	// (0x0005c215) cam4_autofocus_pane_g2

0x889d,	// (0x0005c21d) cam4_autofocus_pane_g3

0x0002,

0xf8ae,	// (0x0006322e) cam4_autofocus_pane_g

0x88a5,	// (0x0005c225) cam4_autofocus_pane_g3_copy1

0x80f4,	// (0x0005ba74) video_down_pane_cp_t1

0x8102,	// (0x0005ba82) video_down_pane_cp_t2

0x0001,

0xf826,	// (0x000631a6) video_down_pane_cp_t

0xc0eb,	// (0x0005fa6b) popup_vitu2_window_ParamLimits

0xc0eb,	// (0x0005fa6b) popup_vitu2_window

0x88ad,	// (0x0005c22d) aid_size_cell2_itu2_ParamLimits

0x88ad,	// (0x0005c22d) aid_size_cell2_itu2

0x88cd,	// (0x0005c24d) aid_size_cell_itu2_ParamLimits

0x88cd,	// (0x0005c24d) aid_size_cell_itu2

0x891a,	// (0x0005c29a) bg_popup_window_pane_cp09_ParamLimits

0x891a,	// (0x0005c29a) bg_popup_window_pane_cp09

0x8928,	// (0x0005c2a8) field_vitu2_entry_pane_ParamLimits

0x8928,	// (0x0005c2a8) field_vitu2_entry_pane

0x894b,	// (0x0005c2cb) grid_vitu2_function_pane_ParamLimits

0x894b,	// (0x0005c2cb) grid_vitu2_function_pane

0x8996,	// (0x0005c316) grid_vitu2_itu_pane_ParamLimits

0x8996,	// (0x0005c316) grid_vitu2_itu_pane

0x8a24,	// (0x0005c3a4) cell_vitu2_itu_pane_ParamLimits

0x8a24,	// (0x0005c3a4) cell_vitu2_itu_pane

0x8a50,	// (0x0005c3d0) cell_vitu2_function_pane_ParamLimits

0x8a50,	// (0x0005c3d0) cell_vitu2_function_pane

0xd189,	// (0x00060b09) bg_popup_call_pane_cp08_ParamLimits

0xd189,	// (0x00060b09) bg_popup_call_pane_cp08

0xd1a0,	// (0x00060b20) field_vitu2_entry_pane_g1

0xd1ac,	// (0x00060b2c) field_vitu2_entry_pane_g2

0x0002,

0xf8b5,	// (0x00063235) field_vitu2_entry_pane_g

0x8a8f,	// (0x0005c40f) field_vitu2_entry_pane_t1_ParamLimits

0x8a8f,	// (0x0005c40f) field_vitu2_entry_pane_t1

0xd1b8,	// (0x00060b38) field_vitu2_entry_pane_t2_ParamLimits

0xd1b8,	// (0x00060b38) field_vitu2_entry_pane_t2

0x0001,

0xf8bc,	// (0x0006323c) field_vitu2_entry_pane_t_ParamLimits

0xf8bc,	// (0x0006323c) field_vitu2_entry_pane_t

0x8ac1,	// (0x0005c441) bg_button_pane_cp010_ParamLimits

0x8ac1,	// (0x0005c441) bg_button_pane_cp010

0x8acf,	// (0x0005c44f) cell_vitu2_itu_pane_g1

0x8af5,	// (0x0005c475) cell_vitu2_itu_pane_t1_ParamLimits

0x8af5,	// (0x0005c475) cell_vitu2_itu_pane_t1

0x3b86,	// (0x00057506) cell_vitu2_itu_pane_t2_ParamLimits

0x3b86,	// (0x00057506) cell_vitu2_itu_pane_t2

0x0002,

0xf8c6,	// (0x00063246) cell_vitu2_itu_pane_t_ParamLimits

0xf8c6,	// (0x00063246) cell_vitu2_itu_pane_t

0xc0eb,	// (0x0005fa6b) bg_button_pane_cp011

0x8b53,	// (0x0005c4d3) cell_vitu2_function_pane_g1

0xc0f9,	// (0x0005fa79) main_myfav_hc_pane

0x84a5,	// (0x0005be25) popup_image3_note_pane_ParamLimits

0x84a5,	// (0x0005be25) popup_image3_note_pane

0x84c1,	// (0x0005be41) popup_image3_tool_bar_pane_ParamLimits

0x84c1,	// (0x0005be41) popup_image3_tool_bar_pane

0x3c14,	// (0x00057594) cell_vitu2_itu_pane_t3_ParamLimits

0x3c14,	// (0x00057594) cell_vitu2_itu_pane_t3

0xc074,	// (0x0005f9f4) bg_popup_trans_pane

0xd1dd,	// (0x00060b5d) grid_image3_tool_bar_pane

0xd1e7,	// (0x00060b67) bg_popup_trans_pane_g1

0x0ef3,	// (0x00054873) bg_popup_trans_pane_g2

0xd1ef,	// (0x00060b6f) bg_popup_trans_pane_g3

0xd1f7,	// (0x00060b77) bg_popup_trans_pane_g4

0xd1ff,	// (0x00060b7f) bg_popup_trans_pane_g5

0xd207,	// (0x00060b87) bg_popup_trans_pane_g6

0xd20f,	// (0x00060b8f) bg_popup_trans_pane_g7

0xd217,	// (0x00060b97) bg_popup_trans_pane_g8

0x0ed3,	// (0x00054853) bg_popup_trans_pane_g9

0x0008,

0xf8cd,	// (0x0006324d) bg_popup_trans_pane_g

0xd21f,	// (0x00060b9f) cell_image3_tool_bar_pane_ParamLimits

0xd21f,	// (0x00060b9f) cell_image3_tool_bar_pane

0x0cce,	// (0x0005464e) cell_image3_tool_bar_pane_g1

0xc074,	// (0x0005f9f4) bg_popup_trans_pane_cp1

0xd233,	// (0x00060bb3) popup_image3_note_pane_t1

0xd241,	// (0x00060bc1) popup_image3_note_pane_t2

0xd24f,	// (0x00060bcf) popup_image3_note_pane_t3

0x0002,

0xf8e0,	// (0x00063260) popup_image3_note_pane_t

0xd25d,	// (0x00060bdd) popup_image3_note_pane_t3_copy1

0x8b67,	// (0x0005c4e7) bg_myfav_hc_instruction_pane_ParamLimits

0x8b67,	// (0x0005c4e7) bg_myfav_hc_instruction_pane

0x8b7b,	// (0x0005c4fb) cell_myfav_contact_pane_ParamLimits

0x8b7b,	// (0x0005c4fb) cell_myfav_contact_pane

0x8b99,	// (0x0005c519) cell_myfav_contact_pane_cp1_ParamLimits

0x8b99,	// (0x0005c519) cell_myfav_contact_pane_cp1

0x8bb1,	// (0x0005c531) cell_myfav_contact_pane_cp2_ParamLimits

0x8bb1,	// (0x0005c531) cell_myfav_contact_pane_cp2

0x8bc9,	// (0x0005c549) cell_myfav_contact_pane_cp3_ParamLimits

0x8bc9,	// (0x0005c549) cell_myfav_contact_pane_cp3

0x8be0,	// (0x0005c560) cell_myfav_contact_pane_cp4_ParamLimits

0x8be0,	// (0x0005c560) cell_myfav_contact_pane_cp4

0x8bf8,	// (0x0005c578) cell_myfav_contact_pane_cp5_ParamLimits

0x8bf8,	// (0x0005c578) cell_myfav_contact_pane_cp5

0x8c0c,	// (0x0005c58c) cell_myfav_contact_pane_cp6_ParamLimits

0x8c0c,	// (0x0005c58c) cell_myfav_contact_pane_cp6

0x8c22,	// (0x0005c5a2) cell_myfav_contact_pane_cp7_ParamLimits

0x8c22,	// (0x0005c5a2) cell_myfav_contact_pane_cp7

0xd26b,	// (0x00060beb) listscroll_gen_pane_cp05

0x8c3c,	// (0x0005c5bc) main_myfav_hc_pane_g1_ParamLimits

0x8c3c,	// (0x0005c5bc) main_myfav_hc_pane_g1

0x8c56,	// (0x0005c5d6) main_myfav_hc_pane_g2_ParamLimits

0x8c56,	// (0x0005c5d6) main_myfav_hc_pane_g2

0x0002,

0xf8e7,	// (0x00063267) main_myfav_hc_pane_g_ParamLimits

0xf8e7,	// (0x00063267) main_myfav_hc_pane_g

0x8c88,	// (0x0005c608) main_myfav_hc_pane_t1_ParamLimits

0x8c88,	// (0x0005c608) main_myfav_hc_pane_t1

0xd274,	// (0x00060bf4) main_myfav_hc_pane_t2_ParamLimits

0xd274,	// (0x00060bf4) main_myfav_hc_pane_t2

0xd286,	// (0x00060c06) main_myfav_hc_pane_t3_ParamLimits

0xd286,	// (0x00060c06) main_myfav_hc_pane_t3

0x8c9f,	// (0x0005c61f) main_myfav_hc_pane_t4_ParamLimits

0x8c9f,	// (0x0005c61f) main_myfav_hc_pane_t4

0x0004,

0xf8ee,	// (0x0006326e) main_myfav_hc_pane_t_ParamLimits

0xf8ee,	// (0x0006326e) main_myfav_hc_pane_t

0x0cce,	// (0x0005464e) bg_myfav_hc_instruction_pane_g1

0xd298,	// (0x00060c18) cell_myfav_contact_pane_g1_ParamLimits

0xd298,	// (0x00060c18) cell_myfav_contact_pane_g1

0xd298,	// (0x00060c18) cell_myfav_contact_pane_g2_ParamLimits

0xd298,	// (0x00060c18) cell_myfav_contact_pane_g2

0xd2a4,	// (0x00060c24) cell_myfav_contact_pane_g3_ParamLimits

0xd2a4,	// (0x00060c24) cell_myfav_contact_pane_g3

0x0a82,	// (0x00054402) cell_myfav_contact_pane_g4_ParamLimits

0x0a82,	// (0x00054402) cell_myfav_contact_pane_g4

0xd2b1,	// (0x00060c31) cell_myfav_contact_pane_g5_ParamLimits

0xd2b1,	// (0x00060c31) cell_myfav_contact_pane_g5

0x0004,

0xf8f9,	// (0x00063279) cell_myfav_contact_pane_g_ParamLimits

0xf8f9,	// (0x00063279) cell_myfav_contact_pane_g

0x8c70,	// (0x0005c5f0) main_myfav_hc_pane_g3_ParamLimits

0x8c70,	// (0x0005c5f0) main_myfav_hc_pane_g3

0x3de9,	// (0x00057769) popup_adpt_find_window

0x8cc7,	// (0x0005c647) afind_page_pane_ParamLimits

0x8cc7,	// (0x0005c647) afind_page_pane

0x8cdc,	// (0x0005c65c) aid_size_cell_afind_ParamLimits

0x8cdc,	// (0x0005c65c) aid_size_cell_afind

0x8cfa,	// (0x0005c67a) bg_popup_sub_pane_cp09_ParamLimits

0x8cfa,	// (0x0005c67a) bg_popup_sub_pane_cp09

0x8d07,	// (0x0005c687) find_pane_cp01_ParamLimits

0x8d07,	// (0x0005c687) find_pane_cp01

0xd2bd,	// (0x00060c3d) grid_afind_control_pane_ParamLimits

0xd2bd,	// (0x00060c3d) grid_afind_control_pane

0x8d14,	// (0x0005c694) grid_afind_pane_ParamLimits

0x8d14,	// (0x0005c694) grid_afind_pane

0x8d33,	// (0x0005c6b3) cell_afind_pane_ParamLimits

0x8d33,	// (0x0005c6b3) cell_afind_pane

0x0cce,	// (0x0005464e) afind_page_pane_g1

0x8d9a,	// (0x0005c71a) afind_page_pane_g2

0x8da3,	// (0x0005c723) afind_page_pane_g3

0x0002,

0xf904,	// (0x00063284) afind_page_pane_g

0x8dac,	// (0x0005c72c) afind_page_pane_t1

0xd2d1,	// (0x00060c51) cell_afind_grid_control_pane_ParamLimits

0xd2d1,	// (0x00060c51) cell_afind_grid_control_pane

0xd0ab,	// (0x00060a2b) bg_button_pane_cp69_ParamLimits

0xd0ab,	// (0x00060a2b) bg_button_pane_cp69

0x8dcc,	// (0x0005c74c) cell_afind_pane_g1_ParamLimits

0x8dcc,	// (0x0005c74c) cell_afind_pane_g1

0x8dd9,	// (0x0005c759) cell_afind_pane_t1_ParamLimits

0x8dd9,	// (0x0005c759) cell_afind_pane_t1

0x0cd8,	// (0x00054658) bg_button_pane_cp72

0xd2e0,	// (0x00060c60) cell_afind_grid_control_pane_g1

0x6296,	// (0x00059c16) aid_image_placing_area_ParamLimits

0x6296,	// (0x00059c16) aid_image_placing_area

0x0a74,	// (0x000543f4) field_vitu_entry_pane_g1_ParamLimits

0x0a74,	// (0x000543f4) field_vitu_entry_pane_g1

0x0a74,	// (0x000543f4) field_vitu_entry_pane_g2_ParamLimits

0x0a74,	// (0x000543f4) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x00062b81) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x00062b81) field_vitu_entry_pane_g

0xcbc4,	// (0x00060544) cell_vitu_itu_pane_g1_ParamLimits

0xcba7,	// (0x00060527) cell_vitu_itu_pane_t3_ParamLimits

0xcba7,	// (0x00060527) cell_vitu_itu_pane_t3

0xd054,	// (0x000609d4) mp4_progress_pane_t1_ParamLimits

0xd06d,	// (0x000609ed) mp4_progress_pane_t2_ParamLimits

0xf84a,	// (0x000631ca) mp4_progress_pane_t_ParamLimits

0xd086,	// (0x00060a06) mup_progress_pane_cp04_ParamLimits

0x8cb3,	// (0x0005c633) main_myfav_hc_pane_t5_ParamLimits

0x8cb3,	// (0x0005c633) main_myfav_hc_pane_t5

0xc09a,	// (0x0005fa1a) aid_zoom_text_primary

0x3de9,	// (0x00057769) popup_adpt_find_window_ParamLimits

0xc0eb,	// (0x0005fa6b) main_cam_set_pane

0x86ff,	// (0x0005c07f) cam4_zoom_pane_ParamLimits

0x86ff,	// (0x0005c07f) cam4_zoom_pane

0x8deb,	// (0x0005c76b) main_cam_set_pane_g1_ParamLimits

0x8deb,	// (0x0005c76b) main_cam_set_pane_g1

0x8df9,	// (0x0005c779) main_cam_set_pane_g2_ParamLimits

0x8df9,	// (0x0005c779) main_cam_set_pane_g2

0x0001,

0xf90b,	// (0x0006328b) main_cam_set_pane_g_ParamLimits

0xf90b,	// (0x0006328b) main_cam_set_pane_g

0x8e1a,	// (0x0005c79a) main_cam_set_pane_t1_ParamLimits

0x8e1a,	// (0x0005c79a) main_cam_set_pane_t1

0x8e35,	// (0x0005c7b5) main_cset_listscroll_pane_ParamLimits

0x8e35,	// (0x0005c7b5) main_cset_listscroll_pane

0x8e5b,	// (0x0005c7db) main_cset_slider_pane_ParamLimits

0x8e5b,	// (0x0005c7db) main_cset_slider_pane

0xd2f1,	// (0x00060c71) main_cset_list_pane_ParamLimits

0xd2f1,	// (0x00060c71) main_cset_list_pane

0xd301,	// (0x00060c81) scroll_pane_cp028

0x8e81,	// (0x0005c801) aid_area_touch_slider

0x8e9d,	// (0x0005c81d) cset_slider_pane

0x8ec0,	// (0x0005c840) main_cset_slider_pane_g1

0x8ed5,	// (0x0005c855) main_cset_slider_pane_g2

0x0011,

0xf910,	// (0x00063290) main_cset_slider_pane_g

0xd352,	// (0x00060cd2) main_cset_slider_pane_t1

0x8f79,	// (0x0005c8f9) main_cset_slider_pane_t2

0x8f93,	// (0x0005c913) main_cset_slider_pane_t3

0x8fad,	// (0x0005c92d) main_cset_slider_pane_t4

0x8fc7,	// (0x0005c947) main_cset_slider_pane_t5

0x8fe1,	// (0x0005c961) main_cset_slider_pane_t6

0x8ff6,	// (0x0005c976) main_cset_slider_pane_t7

0x000e,

0xf935,	// (0x000632b5) main_cset_slider_pane_t

0x90fa,	// (0x0005ca7a) cset_list_set_pane_ParamLimits

0x90fa,	// (0x0005ca7a) cset_list_set_pane

0xd3ec,	// (0x00060d6c) aid_position_infowindow_above

0xd3f4,	// (0x00060d74) aid_position_infowindow_below

0x910c,	// (0x0005ca8c) cset_list_set_pane_g1_ParamLimits

0x910c,	// (0x0005ca8c) cset_list_set_pane_g1

0x9118,	// (0x0005ca98) cset_list_set_pane_g3_ParamLimits

0x9118,	// (0x0005ca98) cset_list_set_pane_g3

0x0001,

0xf954,	// (0x000632d4) cset_list_set_pane_g_ParamLimits

0xf954,	// (0x000632d4) cset_list_set_pane_g

0x9127,	// (0x0005caa7) cset_list_set_pane_t1_ParamLimits

0x9127,	// (0x0005caa7) cset_list_set_pane_t1

0x0a1b,	// (0x0005439b) list_highlight_pane_cp021_ParamLimits

0x0a1b,	// (0x0005439b) list_highlight_pane_cp021

0x1802,	// (0x00055182) cset_slider_pane_g1

0x1814,	// (0x00055194) cset_slider_pane_g2

0x180b,	// (0x0005518b) cset_slider_pane_g3

0x0002,

0xf959,	// (0x000632d9) cset_slider_pane_g

0xef7d,	// (0x000628fd) aid_area_touch_cam4_zoom

0xef85,	// (0x00062905) cam4_zoom_cont_pane

0xef8d,	// (0x0006290d) cam4_zoom_pane_g1

0xef95,	// (0x00062915) cam4_zoom_pane_g2

0x913c,	// (0x0005cabc) cam4_zoom_pane_g3

0x0002,

0xf960,	// (0x000632e0) cam4_zoom_pane_g

0xef9d,	// (0x0006291d) cam4_zoom_cont_pane_g1

0xefa6,	// (0x00062926) cam4_zoom_cont_pane_g2

0xefaf,	// (0x0006292f) cam4_zoom_cont_pane_g3

0x0002,

0xf967,	// (0x000632e7) cam4_zoom_cont_pane_g

0x852e,	// (0x0005beae) call4_image_pane_ParamLimits

0x852e,	// (0x0005beae) call4_image_pane

0x8595,	// (0x0005bf15) call4_windows_conf_pane_ParamLimits

0x85d8,	// (0x0005bf58) popup_call4_audio_in_window_ParamLimits

0x85d8,	// (0x0005bf58) popup_call4_audio_in_window

0xc074,	// (0x0005f9f4) bg_popup_call2_act_pane_cp02

0xd11b,	// (0x00060a9b) call4_list_conf_pane

0x0cce,	// (0x0005464e) call4_image_pane_g1

0x0cce,	// (0x0005464e) call4_image_pane_g2

0x0001,

0xf3d8,	// (0x00062d58) call4_image_pane_g

0xd3fc,	// (0x00060d7c) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3fc,	// (0x00060d7c) list_single_graphic_popup_conf4_pane

0xc074,	// (0x0005f9f4) list_highlight_pane_cp022

0xd40f,	// (0x00060d8f) list_single_graphic_popup_conf4_pane_g1

0x1413,	// (0x00054d93) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf96e,	// (0x000632ee) list_single_graphic_popup_conf4_pane_g

0xd417,	// (0x00060d97) list_single_graphic_popup_conf4_pane_t1

0x4b72,	// (0x000584f2) popup_vtel_slider_window_ParamLimits

0x4b72,	// (0x000584f2) popup_vtel_slider_window

0xd099,	// (0x00060a19) dialer2_ne_pane_t2_ParamLimits

0xd099,	// (0x00060a19) dialer2_ne_pane_t2

0x0001,

0xf84f,	// (0x000631cf) dialer2_ne_pane_t_ParamLimits

0xf84f,	// (0x000631cf) dialer2_ne_pane_t

0x1792,	// (0x00055112) bg_popup_sub_pane_cp010_ParamLimits

0x1792,	// (0x00055112) bg_popup_sub_pane_cp010

0x9144,	// (0x0005cac4) popup_vtel_slider_window_g1_ParamLimits

0x9144,	// (0x0005cac4) popup_vtel_slider_window_g1

0x9157,	// (0x0005cad7) popup_vtel_slider_window_g2_ParamLimits

0x9157,	// (0x0005cad7) popup_vtel_slider_window_g2

0x0003,

0xf973,	// (0x000632f3) popup_vtel_slider_window_g_ParamLimits

0xf973,	// (0x000632f3) popup_vtel_slider_window_g

0x91ad,	// (0x0005cb2d) vtel_slider_pane_ParamLimits

0x91ad,	// (0x0005cb2d) vtel_slider_pane

0x91cf,	// (0x0005cb4f) vtel_slider_pane_g1_ParamLimits

0x91cf,	// (0x0005cb4f) vtel_slider_pane_g1

0x91e3,	// (0x0005cb63) vtel_slider_pane_g2_ParamLimits

0x91e3,	// (0x0005cb63) vtel_slider_pane_g2

0x91fb,	// (0x0005cb7b) vtel_slider_pane_g3_ParamLimits

0x91fb,	// (0x0005cb7b) vtel_slider_pane_g3

0x91cf,	// (0x0005cb4f) vtel_slider_pane_g4_ParamLimits

0x91cf,	// (0x0005cb4f) vtel_slider_pane_g4

0x9211,	// (0x0005cb91) vtel_slider_pane_g5_ParamLimits

0x9211,	// (0x0005cb91) vtel_slider_pane_g5

0x0004,

0xf97c,	// (0x000632fc) vtel_slider_pane_g_ParamLimits

0xf97c,	// (0x000632fc) vtel_slider_pane_g

0xc0eb,	// (0x0005fa6b) main_gallery2_pane

0x88ed,	// (0x0005c26d) aid_size_row_itut2_dropdow_list_ParamLimits

0x88ed,	// (0x0005c26d) aid_size_row_itut2_dropdow_list

0x8970,	// (0x0005c2f0) grid_vitu2_function_top_pane_ParamLimits

0x8970,	// (0x0005c2f0) grid_vitu2_function_top_pane

0x89d2,	// (0x0005c352) popup_vitu2_dropdown_list_window_ParamLimits

0x89d2,	// (0x0005c352) popup_vitu2_dropdown_list_window

0x89f8,	// (0x0005c378) popup_vitu2_match_list_window

0x9227,	// (0x0005cba7) cell_vitu2_function_top_pane_ParamLimits

0x9227,	// (0x0005cba7) cell_vitu2_function_top_pane

0x923f,	// (0x0005cbbf) cell_vitu2_function_top_pane_cp01_ParamLimits

0x923f,	// (0x0005cbbf) cell_vitu2_function_top_pane_cp01

0x925b,	// (0x0005cbdb) cell_vitu2_function_top_wide_pane_ParamLimits

0x925b,	// (0x0005cbdb) cell_vitu2_function_top_wide_pane

0xc0eb,	// (0x0005fa6b) bg_button_pane_cp012

0x9279,	// (0x0005cbf9) cell_vitu2_function_top_pane_g1

0xefb8,	// (0x00062938) bg_button_pane_cp013_ParamLimits

0xefb8,	// (0x00062938) bg_button_pane_cp013

0x928d,	// (0x0005cc0d) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x928d,	// (0x0005cc0d) cell_vitu2_function_top_wide_pane_g1

0xc0eb,	// (0x0005fa6b) bg_popup_sub_pane_cp20

0x92a5,	// (0x0005cc25) list_vitu2_match_list_pane

0xd1e7,	// (0x00060b67) bg_popup_sub_pane_cp20_g1

0xd1ef,	// (0x00060b6f) bg_popup_sub_pane_cp20_g2

0x0ef3,	// (0x00054873) bg_popup_sub_pane_cp20_g3

0xd1f7,	// (0x00060b77) bg_popup_sub_pane_cp20_g4

0x0ed3,	// (0x00054853) bg_popup_sub_pane_cp20_g5

0xd42d,	// (0x00060dad) bg_popup_sub_pane_cp20_g6

0xd207,	// (0x00060b87) bg_popup_sub_pane_cp20_g7

0xd20f,	// (0x00060b8f) bg_popup_sub_pane_cp20_g8

0xd217,	// (0x00060b97) bg_popup_sub_pane_cp20_g9

0x0008,

0xf987,	// (0x00063307) bg_popup_sub_pane_cp20_g

0xefd4,	// (0x00062954) list_vitu2_match_list_item_pane_ParamLimits

0xefd4,	// (0x00062954) list_vitu2_match_list_item_pane

0xefe6,	// (0x00062966) list_vitu2_match_list_item_pane_t1

0xc0f9,	// (0x0005fa79) bg_popup_sub_pane_cp21

0x0c98,	// (0x00054618) grid_vitu2_dropdown_list_pane

0x92bd,	// (0x0005cc3d) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x92bd,	// (0x0005cc3d) cell_vitu2_dropdown_list_char_pane

0x92de,	// (0x0005cc5e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x92de,	// (0x0005cc5e) cell_vitu2_dropdown_list_ctrl_pane

0xd435,	// (0x00060db5) cell_vitu2_dropdown_list_char_pane_g1

0xd43e,	// (0x00060dbe) cell_vitu2_dropdown_list_char_pane_g2

0xd447,	// (0x00060dc7) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf99a,	// (0x0006331a) cell_vitu2_dropdown_list_char_pane_g

0x9308,	// (0x0005cc88) cell_vitu2_dropdown_list_char_pane_t1

0x9316,	// (0x0005cc96) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x9316,	// (0x0005cc96) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9326,	// (0x0005cca6) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9326,	// (0x0005cca6) cell_vitu2_dropdown_list_ctrl_pane_g2

0x9337,	// (0x0005ccb7) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x9337,	// (0x0005ccb7) cell_vitu2_dropdown_list_ctrl_pane_g3

0x9347,	// (0x0005ccc7) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x9347,	// (0x0005ccc7) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd17b,	// (0x00060afb) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd17b,	// (0x00060afb) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9a1,	// (0x00063321) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9a1,	// (0x00063321) cell_vitu2_dropdown_list_ctrl_pane_g

0x9363,	// (0x0005cce3) aid_size_cell_gallery2_ParamLimits

0x9363,	// (0x0005cce3) aid_size_cell_gallery2

0x9381,	// (0x0005cd01) grid_gallery2_pane_ParamLimits

0x9381,	// (0x0005cd01) grid_gallery2_pane

0x939b,	// (0x0005cd1b) scroll_pane_cp029_ParamLimits

0x939b,	// (0x0005cd1b) scroll_pane_cp029

0x93ac,	// (0x0005cd2c) cell_gallery2_pane_ParamLimits

0x93ac,	// (0x0005cd2c) cell_gallery2_pane

0xd450,	// (0x00060dd0) cell_gallery2_pane_g2

0x940b,	// (0x0005cd8b) cell_gallery2_pane_g3

0xd458,	// (0x00060dd8) cell_gallery2_pane_g4

0xd460,	// (0x00060de0) cell_gallery2_pane_g5

0x0c98,	// (0x00054618) grid_highlight_pane_cp10

0x89f8,	// (0x0005c378) popup_vitu2_match_list_window_ParamLimits

0x8a0d,	// (0x0005c38d) popup_vitu2_query_window_ParamLimits

0x8a0d,	// (0x0005c38d) popup_vitu2_query_window

0xc0f9,	// (0x0005fa79) bg_vitu2_candi_button_pane

0xd435,	// (0x00060db5) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd43e,	// (0x00060dbe) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd447,	// (0x00060dc7) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x9413,	// (0x0005cd93) bg_button_pane_cp015

0x9425,	// (0x0005cda5) bg_button_pane_cp016

0x9438,	// (0x0005cdb8) bg_button_pane_cp017

0x2a2e,	// (0x000563ae) bg_popup_sub_pane_cp22

0xd468,	// (0x00060de8) popup_vitu2_query_window_g1

0x947b,	// (0x0005cdfb) popup_vitu2_query_window_g2

0x0002,

0xf9ac,	// (0x0006332c) popup_vitu2_query_window_g

0x949a,	// (0x0005ce1a) popup_vitu2_query_window_t1_ParamLimits

0x949a,	// (0x0005ce1a) popup_vitu2_query_window_t1

0x94cf,	// (0x0005ce4f) popup_vitu2_query_window_t2_ParamLimits

0x94cf,	// (0x0005ce4f) popup_vitu2_query_window_t2

0x94e1,	// (0x0005ce61) popup_vitu2_query_window_t3_ParamLimits

0x94e1,	// (0x0005ce61) popup_vitu2_query_window_t3

0x9509,	// (0x0005ce89) popup_vitu2_query_window_t4_ParamLimits

0x9509,	// (0x0005ce89) popup_vitu2_query_window_t4

0x952a,	// (0x0005ceaa) popup_vitu2_query_window_t5_ParamLimits

0x952a,	// (0x0005ceaa) popup_vitu2_query_window_t5

0x0006,

0xf9b3,	// (0x00063333) popup_vitu2_query_window_t_ParamLimits

0xf9b3,	// (0x00063333) popup_vitu2_query_window_t

0xd2e9,	// (0x00060c69) main_cset_text_pane

0x8e81,	// (0x0005c801) aid_area_touch_slider_ParamLimits

0x8e9d,	// (0x0005c81d) cset_slider_pane_ParamLimits

0x8ec0,	// (0x0005c840) main_cset_slider_pane_g1_ParamLimits

0x8ed5,	// (0x0005c855) main_cset_slider_pane_g2_ParamLimits

0xd30a,	// (0x00060c8a) main_cset_slider_pane_g3_ParamLimits

0xd30a,	// (0x00060c8a) main_cset_slider_pane_g3

0x8eea,	// (0x0005c86a) main_cset_slider_pane_g4_ParamLimits

0x8eea,	// (0x0005c86a) main_cset_slider_pane_g4

0x8ef9,	// (0x0005c879) main_cset_slider_pane_g5_ParamLimits

0x8ef9,	// (0x0005c879) main_cset_slider_pane_g5

0x8f05,	// (0x0005c885) main_cset_slider_pane_g6_ParamLimits

0x8f05,	// (0x0005c885) main_cset_slider_pane_g6

0xf910,	// (0x00063290) main_cset_slider_pane_g_ParamLimits

0xd352,	// (0x00060cd2) main_cset_slider_pane_t1_ParamLimits

0x8f79,	// (0x0005c8f9) main_cset_slider_pane_t2_ParamLimits

0x8f93,	// (0x0005c913) main_cset_slider_pane_t3_ParamLimits

0x8fad,	// (0x0005c92d) main_cset_slider_pane_t4_ParamLimits

0x8fc7,	// (0x0005c947) main_cset_slider_pane_t5_ParamLimits

0x8fe1,	// (0x0005c961) main_cset_slider_pane_t6_ParamLimits

0x8ff6,	// (0x0005c976) main_cset_slider_pane_t7_ParamLimits

0x9020,	// (0x0005c9a0) main_cset_slider_pane_t8_ParamLimits

0x9020,	// (0x0005c9a0) main_cset_slider_pane_t8

0x9048,	// (0x0005c9c8) main_cset_slider_pane_t9_ParamLimits

0x9048,	// (0x0005c9c8) main_cset_slider_pane_t9

0x9070,	// (0x0005c9f0) main_cset_slider_pane_t10_ParamLimits

0x9070,	// (0x0005c9f0) main_cset_slider_pane_t10

0x9098,	// (0x0005ca18) main_cset_slider_pane_t11_ParamLimits

0x9098,	// (0x0005ca18) main_cset_slider_pane_t11

0x90c0,	// (0x0005ca40) main_cset_slider_pane_t12_ParamLimits

0x90c0,	// (0x0005ca40) main_cset_slider_pane_t12

0x90dd,	// (0x0005ca5d) main_cset_slider_pane_t13_ParamLimits

0x90dd,	// (0x0005ca5d) main_cset_slider_pane_t13

0xf935,	// (0x000632b5) main_cset_slider_pane_t_ParamLimits

0xc074,	// (0x0005f9f4) bg_popup_sub_pane_cp011

0xd474,	// (0x00060df4) main_cset_text_pane_g1

0xd47c,	// (0x00060dfc) main_cset_text_pane_t1

0xd48a,	// (0x00060e0a) main_cset_text_pane_t2

0xd498,	// (0x00060e18) main_cset_text_pane_t3

0xd4a6,	// (0x00060e26) main_cset_text_pane_t4

0xd4b4,	// (0x00060e34) main_cset_text_pane_t5

0xd4c2,	// (0x00060e42) main_cset_text_pane_t6

0xd4d0,	// (0x00060e50) main_cset_text_pane_t7

0x0006,

0xf9c2,	// (0x00063342) main_cset_text_pane_t

0xc0f9,	// (0x0005fa79) main_cam4_burst_pane

0xc0f9,	// (0x0005fa79) main_cam5_pane

0x8dba,	// (0x0005c73a) bg_button_pane_cp019

0x8dc3,	// (0x0005c743) bg_button_pane_cp020

0xd316,	// (0x00060c96) main_cset_slider_pane_g7_ParamLimits

0xd316,	// (0x00060c96) main_cset_slider_pane_g7

0xd322,	// (0x00060ca2) main_cset_slider_pane_g8_ParamLimits

0xd322,	// (0x00060ca2) main_cset_slider_pane_g8

0x8f19,	// (0x0005c899) main_cset_slider_pane_g9_ParamLimits

0x8f19,	// (0x0005c899) main_cset_slider_pane_g9

0x8f25,	// (0x0005c8a5) main_cset_slider_pane_g10_ParamLimits

0x8f25,	// (0x0005c8a5) main_cset_slider_pane_g10

0x8f31,	// (0x0005c8b1) main_cset_slider_pane_g11_ParamLimits

0x8f31,	// (0x0005c8b1) main_cset_slider_pane_g11

0x8f3d,	// (0x0005c8bd) main_cset_slider_pane_g12_ParamLimits

0x8f3d,	// (0x0005c8bd) main_cset_slider_pane_g12

0x8f49,	// (0x0005c8c9) main_cset_slider_pane_g13_ParamLimits

0x8f49,	// (0x0005c8c9) main_cset_slider_pane_g13

0x8f55,	// (0x0005c8d5) main_cset_slider_pane_g14_ParamLimits

0x8f55,	// (0x0005c8d5) main_cset_slider_pane_g14

0x8f61,	// (0x0005c8e1) main_cset_slider_pane_g15_ParamLimits

0x8f61,	// (0x0005c8e1) main_cset_slider_pane_g15

0xd37a,	// (0x00060cfa) main_cset_slider_pane_t14_ParamLimits

0xd37a,	// (0x00060cfa) main_cset_slider_pane_t14

0xd3b3,	// (0x00060d33) main_cset_slider_pane_t15_ParamLimits

0xd3b3,	// (0x00060d33) main_cset_slider_pane_t15

0x95a1,	// (0x0005cf21) aid_cam4_burst_size_cell_ParamLimits

0x95a1,	// (0x0005cf21) aid_cam4_burst_size_cell

0x95c1,	// (0x0005cf41) grid_cam4_burst_pane_ParamLimits

0x95c1,	// (0x0005cf41) grid_cam4_burst_pane

0x95f9,	// (0x0005cf79) linegrid_cam4_burst_pane_ParamLimits

0x95f9,	// (0x0005cf79) linegrid_cam4_burst_pane

0xd4de,	// (0x00060e5e) scroll_pane_cp30_ParamLimits

0xd4de,	// (0x00060e5e) scroll_pane_cp30

0x961d,	// (0x0005cf9d) cell_cam4_burst_pane_ParamLimits

0x961d,	// (0x0005cf9d) cell_cam4_burst_pane

0xd4ea,	// (0x00060e6a) linegrid_cam4_burst_pane_g1_ParamLimits

0xd4ea,	// (0x00060e6a) linegrid_cam4_burst_pane_g1

0x966a,	// (0x0005cfea) linegrid_cam4_burst_pane_g2_ParamLimits

0x966a,	// (0x0005cfea) linegrid_cam4_burst_pane_g2

0xd4f7,	// (0x00060e77) linegrid_cam4_burst_pane_g3_ParamLimits

0xd4f7,	// (0x00060e77) linegrid_cam4_burst_pane_g3

0x0002,

0xf9d1,	// (0x00063351) linegrid_cam4_burst_pane_g_ParamLimits

0xf9d1,	// (0x00063351) linegrid_cam4_burst_pane_g

0x967b,	// (0x0005cffb) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x967b,	// (0x0005cffb) linegrid_cam4_burst_pane_g3_copy1

0xd504,	// (0x00060e84) linegrid_cam4_burst_pane_g4_ParamLimits

0xd504,	// (0x00060e84) linegrid_cam4_burst_pane_g4

0x9695,	// (0x0005d015) linegrid_cam4_burst_pane_g5_ParamLimits

0x9695,	// (0x0005d015) linegrid_cam4_burst_pane_g5

0x96a6,	// (0x0005d026) linegrid_cam4_burst_pane_g6_ParamLimits

0x96a6,	// (0x0005d026) linegrid_cam4_burst_pane_g6

0xd511,	// (0x00060e91) linegrid_cam4_burst_pane_g7_ParamLimits

0xd511,	// (0x00060e91) linegrid_cam4_burst_pane_g7

0x96bd,	// (0x0005d03d) cell_cam4_burst_pane_g1

0xd52a,	// (0x00060eaa) main_cam5_pane_t1_ParamLimits

0xd52a,	// (0x00060eaa) main_cam5_pane_t1

0xd53c,	// (0x00060ebc) main_cam5_pane_t2_ParamLimits

0xd53c,	// (0x00060ebc) main_cam5_pane_t2

0xd54e,	// (0x00060ece) main_cam5_pane_t3_ParamLimits

0xd54e,	// (0x00060ece) main_cam5_pane_t3

0xd560,	// (0x00060ee0) main_cam5_pane_t4_ParamLimits

0xd560,	// (0x00060ee0) main_cam5_pane_t4

0xd578,	// (0x00060ef8) main_cam5_pane_t5_ParamLimits

0xd578,	// (0x00060ef8) main_cam5_pane_t5

0xd58c,	// (0x00060f0c) main_cam5_pane_t6_ParamLimits

0xd58c,	// (0x00060f0c) main_cam5_pane_t6

0xd5a0,	// (0x00060f20) main_cam5_pane_t7_ParamLimits

0xd5a0,	// (0x00060f20) main_cam5_pane_t7

0xd5b2,	// (0x00060f32) main_cam5_pane_t8_ParamLimits

0xd5b2,	// (0x00060f32) main_cam5_pane_t8

0xd5ce,	// (0x00060f4e) main_cam5_pane_t9_ParamLimits

0xd5ce,	// (0x00060f4e) main_cam5_pane_t9

0xd5e0,	// (0x00060f60) main_cam5_pane_t10_ParamLimits

0xd5e0,	// (0x00060f60) main_cam5_pane_t10

0xd5f2,	// (0x00060f72) main_cam5_pane_t11_ParamLimits

0xd5f2,	// (0x00060f72) main_cam5_pane_t11

0xd604,	// (0x00060f84) main_cam5_pane_t12_ParamLimits

0xd604,	// (0x00060f84) main_cam5_pane_t12

0xd619,	// (0x00060f99) main_cam5_pane_t13_ParamLimits

0xd619,	// (0x00060f99) main_cam5_pane_t13

0x000c,

0xf9dd,	// (0x0006335d) main_cam5_pane_t_ParamLimits

0xf9dd,	// (0x0006335d) main_cam5_pane_t

0x3e6b,	// (0x000577eb) popup_scut_keymap_window_ParamLimits

0x3e6b,	// (0x000577eb) popup_scut_keymap_window

0x96d0,	// (0x0005d050) aid_size_cell_brow_shortcut

0x0c98,	// (0x00054618) bg_popup_window_pane_cp010

0x96dc,	// (0x0005d05c) grid_scut_pane

0x96e8,	// (0x0005d068) cell_scut_pane_ParamLimits

0x96e8,	// (0x0005d068) cell_scut_pane

0x96ff,	// (0x0005d07f) cell_scut_pane_g1

0xd636,	// (0x00060fb6) cell_scut_pane_t1

0xd645,	// (0x00060fc5) cell_scut_pane_t2

0x9708,	// (0x0005d088) cell_scut_pane_t3

0x0002,

0xf9f8,	// (0x00063378) cell_scut_pane_t

0x762c,	// (0x0005afac) main_mup3_pane_g8_ParamLimits

0x762c,	// (0x0005afac) main_mup3_pane_g8

0x8904,	// (0x0005c284) area_vitu2_query_pane_ParamLimits

0x8904,	// (0x0005c284) area_vitu2_query_pane

0x944b,	// (0x0005cdcb) input_focus_pane_cp08

0xd654,	// (0x00060fd4) area_vitu2_query_pane_g1

0x9716,	// (0x0005d096) area_vitu2_query_pane_g2

0x0001,

0xf9ff,	// (0x0006337f) area_vitu2_query_pane_g

0x9727,	// (0x0005d0a7) area_vitu2_query_pane_t1_ParamLimits

0x9727,	// (0x0005d0a7) area_vitu2_query_pane_t1

0x973b,	// (0x0005d0bb) area_vitu2_query_pane_t2_ParamLimits

0x973b,	// (0x0005d0bb) area_vitu2_query_pane_t2

0x974f,	// (0x0005d0cf) area_vitu2_query_pane_t3_ParamLimits

0x974f,	// (0x0005d0cf) area_vitu2_query_pane_t3

0xd660,	// (0x00060fe0) area_vitu2_query_pane_t4_ParamLimits

0xd660,	// (0x00060fe0) area_vitu2_query_pane_t4

0xd688,	// (0x00061008) area_vitu2_query_pane_t5_ParamLimits

0xd688,	// (0x00061008) area_vitu2_query_pane_t5

0xd6b0,	// (0x00061030) area_vitu2_query_pane_t6_ParamLimits

0xd6b0,	// (0x00061030) area_vitu2_query_pane_t6

0x0006,

0xfa04,	// (0x00063384) area_vitu2_query_pane_t_ParamLimits

0xfa04,	// (0x00063384) area_vitu2_query_pane_t

0x9777,	// (0x0005d0f7) bg_button_pane_cp018

0x9785,	// (0x0005d105) bg_button_pane_cp021

0x9791,	// (0x0005d111) bg_button_pane_cp022

0x97a2,	// (0x0005d122) input_focus_pane_cp09

0x1522,	// (0x00054ea2) aid_size_touch_mv_arrow_left

0x154d,	// (0x00054ecd) aid_size_touch_mv_arrow_right

0xd32e,	// (0x00060cae) main_cset_slider_pane_g16_ParamLimits

0xd32e,	// (0x00060cae) main_cset_slider_pane_g16

0xd33a,	// (0x00060cba) main_cset_slider_pane_g17_ParamLimits

0xd33a,	// (0x00060cba) main_cset_slider_pane_g17

0x96bd,	// (0x0005d03d) cell_cam4_burst_pane_g1_ParamLimits

0xc074,	// (0x0005f9f4) compa_mode_pane

0x9167,	// (0x0005cae7) popup_vtel_slider_window_g3_ParamLimits

0x9167,	// (0x0005cae7) popup_vtel_slider_window_g3

0x917e,	// (0x0005cafe) popup_vtel_slider_window_g4_ParamLimits

0x917e,	// (0x0005cafe) popup_vtel_slider_window_g4

0x9195,	// (0x0005cb15) popup_vtel_slider_window_t1_ParamLimits

0x9195,	// (0x0005cb15) popup_vtel_slider_window_t1

0xc0f9,	// (0x0005fa79) main_cl_pane

0xc80b,	// (0x0006018b) popup_imed_adjust2_window_ParamLimits

0x2a2e,	// (0x000563ae) bg_tb_trans_pane_cp05_ParamLimits

0xcadc,	// (0x0006045c) popup_imed_adjust2_window_g1_ParamLimits

0xcaeb,	// (0x0006046b) popup_imed_adjust2_window_g2_ParamLimits

0xcaeb,	// (0x0006046b) popup_imed_adjust2_window_g2

0xcaf7,	// (0x00060477) popup_imed_adjust2_window_g3_ParamLimits

0xcaf7,	// (0x00060477) popup_imed_adjust2_window_g3

0x0002,

0xf77a,	// (0x000630fa) popup_imed_adjust2_window_g_ParamLimits

0xf77a,	// (0x000630fa) popup_imed_adjust2_window_g

0xcb03,	// (0x00060483) popup_imed_adjust2_window_t1_ParamLimits

0xcb1b,	// (0x0006049b) slider_imed_adjust_pane_ParamLimits

0xcb2f,	// (0x000604af) slider_imed_adjust_pane_g1_ParamLimits

0xcb3f,	// (0x000604bf) slider_imed_adjust_pane_g2_ParamLimits

0xcb4f,	// (0x000604cf) slider_imed_adjust_pane_g3_ParamLimits

0xcb60,	// (0x000604e0) slider_imed_adjust_pane_g4_ParamLimits

0xf781,	// (0x00063101) slider_imed_adjust_pane_g_ParamLimits

0x86a0,	// (0x0005c020) aid_touch_area_cam4_ParamLimits

0x86a0,	// (0x0005c020) aid_touch_area_cam4

0xd15f,	// (0x00060adf) battery_pane_cp01

0x876f,	// (0x0005c0ef) main_camera4_pane_g6_ParamLimits

0x876f,	// (0x0005c0ef) main_camera4_pane_g6

0x8799,	// (0x0005c119) main_camera4_pane_t2_ParamLimits

0x8799,	// (0x0005c119) main_camera4_pane_t2

0x0001,

0xf883,	// (0x00063203) main_camera4_pane_t_ParamLimits

0xf883,	// (0x00063203) main_camera4_pane_t

0x87ce,	// (0x0005c14e) aid_touch_area_vid4_ParamLimits

0x87ce,	// (0x0005c14e) aid_touch_area_vid4

0x8822,	// (0x0005c1a2) main_video4_pane_g5_ParamLimits

0x8822,	// (0x0005c1a2) main_video4_pane_g5

0x8847,	// (0x0005c1c7) vid4_progress_pane_ParamLimits

0x8847,	// (0x0005c1c7) vid4_progress_pane

0xd346,	// (0x00060cc6) main_cset_slider_pane_g18_ParamLimits

0xd346,	// (0x00060cc6) main_cset_slider_pane_g18

0xd51e,	// (0x00060e9e) cell_cam4_burst_pane_g2_ParamLimits

0xd51e,	// (0x00060e9e) cell_cam4_burst_pane_g2

0x0001,

0xf9d8,	// (0x00063358) cell_cam4_burst_pane_g_ParamLimits

0xf9d8,	// (0x00063358) cell_cam4_burst_pane_g

0x0ae6,	// (0x00054466) bg_cl_pane_ParamLimits

0x0ae6,	// (0x00054466) bg_cl_pane

0x97b3,	// (0x0005d133) cl_header_pane_ParamLimits

0x97b3,	// (0x0005d133) cl_header_pane

0x97c7,	// (0x0005d147) cl_listscroll_pane_ParamLimits

0x97c7,	// (0x0005d147) cl_listscroll_pane

0xd6fc,	// (0x0006107c) bg_cl_pane_g1

0xd704,	// (0x00061084) bg_cl_pane_g2

0xd70c,	// (0x0006108c) bg_cl_pane_g3

0xd714,	// (0x00061094) bg_cl_pane_g4

0xd71c,	// (0x0006109c) bg_cl_pane_g5

0xd724,	// (0x000610a4) bg_cl_pane_g6

0xd72c,	// (0x000610ac) bg_cl_pane_g7

0xd734,	// (0x000610b4) bg_cl_pane_g8

0xd73c,	// (0x000610bc) bg_cl_pane_g9

0x0008,

0xfa13,	// (0x00063393) bg_cl_pane_g

0x97d7,	// (0x0005d157) aid_height_cl_leading_ParamLimits

0x97d7,	// (0x0005d157) aid_height_cl_leading

0x97e3,	// (0x0005d163) aid_height_cl_text_ParamLimits

0x97e3,	// (0x0005d163) aid_height_cl_text

0x0a1b,	// (0x0005439b) bg_cl_header_pane_ParamLimits

0x0a1b,	// (0x0005439b) bg_cl_header_pane

0x9802,	// (0x0005d182) cl_header_pane_g1_ParamLimits

0x9802,	// (0x0005d182) cl_header_pane_g1

0x9818,	// (0x0005d198) cl_header_pane_t1_ParamLimits

0x9818,	// (0x0005d198) cl_header_pane_t1

0xd744,	// (0x000610c4) cl_list_pane

0xd301,	// (0x00060c81) hc_scroll_pane_cp01

0x0ed3,	// (0x00054853) bg_cl_header_pane_g1

0xd1e7,	// (0x00060b67) bg_cl_header_pane_g2

0x0ef3,	// (0x00054873) bg_cl_header_pane_g3

0xd1f7,	// (0x00060b77) bg_cl_header_pane_g4

0xd1ef,	// (0x00060b6f) bg_cl_header_pane_g5

0xd42d,	// (0x00060dad) bg_cl_header_pane_g6

0xd20f,	// (0x00060b8f) bg_cl_header_pane_g7

0xd217,	// (0x00060b97) bg_cl_header_pane_g8

0xd207,	// (0x00060b87) bg_cl_header_pane_g9

0x0008,

0xfa26,	// (0x000633a6) bg_cl_header_pane_g

0x9831,	// (0x0005d1b1) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9831,	// (0x0005d1b1) hc_cl_list_double_graphic_heading_pane

0x9842,	// (0x0005d1c2) hc_cl_list_single_graphic_pane_ParamLimits

0x9842,	// (0x0005d1c2) hc_cl_list_single_graphic_pane

0x985b,	// (0x0005d1db) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x985b,	// (0x0005d1db) hc_cl_list_single_graphic_pane_g1

0x9867,	// (0x0005d1e7) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9867,	// (0x0005d1e7) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa39,	// (0x000633b9) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa39,	// (0x000633b9) hc_cl_list_single_graphic_pane_g

0x987b,	// (0x0005d1fb) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x987b,	// (0x0005d1fb) hc_cl_list_single_graphic_pane_t1

0x985b,	// (0x0005d1db) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x985b,	// (0x0005d1db) hc_cl_list_double_graphic_heading_pane_g1

0x9890,	// (0x0005d210) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x9890,	// (0x0005d210) hc_cl_list_double_graphic_heading_pane_g2

0x98a4,	// (0x0005d224) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x98a4,	// (0x0005d224) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa3e,	// (0x000633be) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa3e,	// (0x000633be) hc_cl_list_double_graphic_heading_pane_g

0x98b8,	// (0x0005d238) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x98b8,	// (0x0005d238) hc_cl_list_double_graphic_heading_pane_t1

0x98cd,	// (0x0005d24d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x98cd,	// (0x0005d24d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa45,	// (0x000633c5) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa45,	// (0x000633c5) hc_cl_list_double_graphic_heading_pane_t

0xeffc,	// (0x0006297c) vid4_progress_pane_g1

0xf00c,	// (0x0006298c) vid4_progress_pane_g2

0x98e2,	// (0x0005d262) vid4_progress_pane_g3

0xf01c,	// (0x0006299c) vid4_progress_pane_g4

0x0004,

0xfa4a,	// (0x000633ca) vid4_progress_pane_g

0x98f4,	// (0x0005d274) vid4_progress_pane_t1

0xf034,	// (0x000629b4) vid4_progress_pane_t2

0x0002,

0xfa55,	// (0x000633d5) vid4_progress_pane_t

0x990a,	// (0x0005d28a) wait_bar_pane_cp07

0x2c4a,	// (0x000565ca) blid_firmament_pane_ParamLimits

0x2c8d,	// (0x0005660d) popup_blid_sat_info2_window_g1

0x2cb1,	// (0x00056631) popup_blid_sat_info2_window_t3

0x6df6,	// (0x0005a776) popup_blid_sat_info2_window_t4

0x6e04,	// (0x0005a784) popup_blid_sat_info2_window_t5

0x6e12,	// (0x0005a792) popup_blid_sat_info2_window_t6

0x6e22,	// (0x0005a7a2) popup_blid_sat_info2_window_t7

0x6e30,	// (0x0005a7b0) popup_blid_sat_info2_window_t8

0x6e3e,	// (0x0005a7be) popup_blid_sat_info2_window_t9

0x6e4c,	// (0x0005a7cc) popup_blid_sat_info2_window_t10

0x6f0d,	// (0x0005a88d) aid_firma_cardinal_ParamLimits

0x6f21,	// (0x0005a8a1) blid_firmament_pane_t1_ParamLimits

0x6f38,	// (0x0005a8b8) blid_firmament_pane_t2_ParamLimits

0x6f4f,	// (0x0005a8cf) blid_firmament_pane_t3_ParamLimits

0x6f66,	// (0x0005a8e6) blid_firmament_pane_t4_ParamLimits

0xf673,	// (0x00062ff3) blid_firmament_pane_t_ParamLimits

0x6f7d,	// (0x0005a8fd) blid_sat_info_pane_ParamLimits

0xc0eb,	// (0x0005fa6b) main_cam_set_pane_ParamLimits

0x7e2e,	// (0x0005b7ae) aid_size_cell_colour_35_ParamLimits

0x7e4e,	// (0x0005b7ce) aid_size_cell_colour_112_ParamLimits

0x7e6e,	// (0x0005b7ee) aid_size_cell_effect_ParamLimits

0x2a2e,	// (0x000563ae) bg_tb_trans_pane_cp02_ParamLimits

0x113b,	// (0x00054abb) heading_imed_pane_ParamLimits

0x7e8e,	// (0x0005b80e) listscroll_imed_pane_ParamLimits

0x20fd,	// (0x00055a7d) popup_call2_audio_first_window_g5_ParamLimits

0x20fd,	// (0x00055a7d) popup_call2_audio_first_window_g5

0x82ba,	// (0x0005bc3a) aid_size_touch_image3_arrow_left_ParamLimits

0x82ba,	// (0x0005bc3a) aid_size_touch_image3_arrow_left

0x82e6,	// (0x0005bc66) aid_size_touch_image3_arrow_right_ParamLimits

0x82e6,	// (0x0005bc66) aid_size_touch_image3_arrow_right

0xf049,	// (0x000629c9) vid4_progress_pane_t3

0x8031,	// (0x0005b9b1) main_hwr_training_symbol_option_pane_ParamLimits

0x8031,	// (0x0005b9b1) main_hwr_training_symbol_option_pane

0xcd15,	// (0x00060695) popup_hwr_training_preview_window_ParamLimits

0xcd15,	// (0x00060695) popup_hwr_training_preview_window

0x8051,	// (0x0005b9d1) hwr_training_navi_pane_g5_ParamLimits

0x8051,	// (0x0005b9d1) hwr_training_navi_pane_g5

0xd1d5,	// (0x00060b55) popup_char_count_window

0xc0eb,	// (0x0005fa6b) bg_popup_sub_pane_cp20_ParamLimits

0x92a5,	// (0x0005cc25) list_vitu2_match_list_pane_ParamLimits

0x92b1,	// (0x0005cc31) vitu2_page_scroll_pane_ParamLimits

0x92b1,	// (0x0005cc31) vitu2_page_scroll_pane

0xd76f,	// (0x000610ef) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd76f,	// (0x000610ef) list_single_hwr_training_symbol_option_pane

0xd782,	// (0x00061102) list_single_hwr_training_symbol_option_pane_g1

0xd78a,	// (0x0006110a) list_single_hwr_training_symbol_option_pane_t1

0xd798,	// (0x00061118) bg_button_pane_cp023

0xd7a1,	// (0x00061121) bg_button_pane_cp024

0xd7d4,	// (0x00061154) vitu2_page_scroll_pane_g1

0xd7dc,	// (0x0006115c) vitu2_page_scroll_pane_g2

0x0001,

0xfa5c,	// (0x000633dc) vitu2_page_scroll_pane_g

0xd7e4,	// (0x00061164) vitu2_page_scroll_pane_t1

0x2cbf,	// (0x0005663f) popup_char_count_window_g1

0xd7f3,	// (0x00061173) popup_char_count_window_g2

0x2cf6,	// (0x00056676) popup_char_count_window_g3

0x0002,

0xfa61,	// (0x000633e1) popup_char_count_window_g

0xd7fc,	// (0x0006117c) popup_char_count_window_t1

0xc0f9,	// (0x0005fa79) main_vded2_pane

0xcac8,	// (0x00060448) aid_size_cell_imed_line

0xcad2,	// (0x00060452) grid_imed_line_width_pane

0xef4a,	// (0x000628ca) vid4_indicators_pane_g4

0xd80a,	// (0x0006118a) cell_imed_line_width_pane_ParamLimits

0xd80a,	// (0x0006118a) cell_imed_line_width_pane

0xd81e,	// (0x0006119e) cell_imed_line_width_pane_g1

0xd827,	// (0x000611a7) cell_imed_line_width_pane_g2

0x0001,

0xfa68,	// (0x000633e8) cell_imed_line_width_pane_g

0x992f,	// (0x0005d2af) main_vded2_pane_g1_ParamLimits

0x992f,	// (0x0005d2af) main_vded2_pane_g1

0x9945,	// (0x0005d2c5) main_vded2_pane_g2_ParamLimits

0x9945,	// (0x0005d2c5) main_vded2_pane_g2

0x0001,

0xfa6d,	// (0x000633ed) main_vded2_pane_g_ParamLimits

0xfa6d,	// (0x000633ed) main_vded2_pane_g

0x9957,	// (0x0005d2d7) vded2_slider_pane_ParamLimits

0x9957,	// (0x0005d2d7) vded2_slider_pane

0x9967,	// (0x0005d2e7) aid_size_touch_vded2_end

0x9971,	// (0x0005d2f1) aid_size_touch_vded2_playhead

0xd82f,	// (0x000611af) aid_size_touch_vded2_start

0xd837,	// (0x000611b7) vded2_slider_bg_pane

0xd840,	// (0x000611c0) vded2_slider_pane_g1

0xd849,	// (0x000611c9) vded2_slider_pane_g2

0x997b,	// (0x0005d2fb) vded2_slider_pane_g3

0x0002,

0xfa72,	// (0x000633f2) vded2_slider_pane_g

0xd851,	// (0x000611d1) vded2_slider_bg_pane_g1

0xd85a,	// (0x000611da) vded2_slider_bg_pane_g2

0xd863,	// (0x000611e3) vded2_slider_bg_pane_g3

0x0002,

0xfa79,	// (0x000633f9) vded2_slider_bg_pane_g

0x5f04,	// (0x00059884) aid_postcard_touch_down_pane_ParamLimits

0x5f04,	// (0x00059884) aid_postcard_touch_down_pane

0x5f1a,	// (0x0005989a) aid_postcard_touch_up_pane_ParamLimits

0x5f1a,	// (0x0005989a) aid_postcard_touch_up_pane

0xc0f9,	// (0x0005fa79) main_blid2_pane

0xc7f1,	// (0x00060171) popup_blid2_search_window

0xc074,	// (0x0005f9f4) blid2_gps_pane

0xc074,	// (0x0005f9f4) blid2_navig_pane

0xc074,	// (0x0005f9f4) blid2_search_pane

0xc074,	// (0x0005f9f4) blid2_tripm_pane

0x9986,	// (0x0005d306) blid2_search_pane_g1_ParamLimits

0x9986,	// (0x0005d306) blid2_search_pane_g1

0x999e,	// (0x0005d31e) blid2_search_pane_t1_ParamLimits

0x999e,	// (0x0005d31e) blid2_search_pane_t1

0x99b0,	// (0x0005d330) aid_size_cell_blid2_gps_ParamLimits

0x99b0,	// (0x0005d330) aid_size_cell_blid2_gps

0x99c8,	// (0x0005d348) blid2_gps_pane_g1_ParamLimits

0x99c8,	// (0x0005d348) blid2_gps_pane_g1

0x99dc,	// (0x0005d35c) grid_blid2_satellite_pane_ParamLimits

0x99dc,	// (0x0005d35c) grid_blid2_satellite_pane

0x99f6,	// (0x0005d376) blid2_navig_pane_g1_ParamLimits

0x99f6,	// (0x0005d376) blid2_navig_pane_g1

0x9a02,	// (0x0005d382) blid2_navig_pane_t1_ParamLimits

0x9a02,	// (0x0005d382) blid2_navig_pane_t1

0x9a1d,	// (0x0005d39d) blid2_navig_pane_t2_ParamLimits

0x9a1d,	// (0x0005d39d) blid2_navig_pane_t2

0x0001,

0xfa80,	// (0x00063400) blid2_navig_pane_t_ParamLimits

0xfa80,	// (0x00063400) blid2_navig_pane_t

0x9a38,	// (0x0005d3b8) blid2_navig_ring_pane_ParamLimits

0x9a38,	// (0x0005d3b8) blid2_navig_ring_pane

0x9a51,	// (0x0005d3d1) blid2_speed_pane_ParamLimits

0x9a51,	// (0x0005d3d1) blid2_speed_pane

0x9a5d,	// (0x0005d3dd) blid2_tripm_pane_g1_ParamLimits

0x9a5d,	// (0x0005d3dd) blid2_tripm_pane_g1

0x9a78,	// (0x0005d3f8) blid2_tripm_pane_g2_ParamLimits

0x9a78,	// (0x0005d3f8) blid2_tripm_pane_g2

0x9a8c,	// (0x0005d40c) blid2_tripm_pane_g3_ParamLimits

0x9a8c,	// (0x0005d40c) blid2_tripm_pane_g3

0x9aa0,	// (0x0005d420) blid2_tripm_pane_g4_ParamLimits

0x9aa0,	// (0x0005d420) blid2_tripm_pane_g4

0x9ab4,	// (0x0005d434) blid2_tripm_pane_g5_ParamLimits

0x9ab4,	// (0x0005d434) blid2_tripm_pane_g5

0x0005,

0xfa85,	// (0x00063405) blid2_tripm_pane_g_ParamLimits

0xfa85,	// (0x00063405) blid2_tripm_pane_g

0x9ada,	// (0x0005d45a) blid2_tripm_pane_t1_ParamLimits

0x9ada,	// (0x0005d45a) blid2_tripm_pane_t1

0x9af5,	// (0x0005d475) blid2_tripm_pane_t2_ParamLimits

0x9af5,	// (0x0005d475) blid2_tripm_pane_t2

0x9b0e,	// (0x0005d48e) blid2_tripm_pane_t3_ParamLimits

0x9b0e,	// (0x0005d48e) blid2_tripm_pane_t3

0x0003,

0xfa92,	// (0x00063412) blid2_tripm_pane_t_ParamLimits

0xfa92,	// (0x00063412) blid2_tripm_pane_t

0x9b55,	// (0x0005d4d5) cell_blid2_satellite_pane_ParamLimits

0x9b55,	// (0x0005d4d5) cell_blid2_satellite_pane

0x9b73,	// (0x0005d4f3) cell_blid2_satellite_pane_g1

0xd86c,	// (0x000611ec) cell_blid2_satellite_pane_t1

0x0cce,	// (0x0005464e) blid2_speed_pane_g1

0xd87a,	// (0x000611fa) blid2_speed_pane_t1

0xd888,	// (0x00061208) blid2_speed_pane_t2

0x0001,

0xfa9b,	// (0x0006341b) blid2_speed_pane_t

0x0cce,	// (0x0005464e) blid2_navig_ring_pane_g1

0x9b7c,	// (0x0005d4fc) blid2_navig_ring_pane_g2

0x9b84,	// (0x0005d504) blid2_navig_ring_pane_g3

0x9b8c,	// (0x0005d50c) blid2_navig_ring_pane_g4

0x9b94,	// (0x0005d514) blid2_navig_ring_pane_g5

0x0004,

0xfaa0,	// (0x00063420) blid2_navig_ring_pane_g

0xc074,	// (0x0005f9f4) bg_popup_window_pane_cp011

0xd896,	// (0x00061216) popup_blid2_search_window_g1

0xd89e,	// (0x0006121e) popup_blid2_search_window_t1

0xd8ac,	// (0x0006122c) popup_blid2_search_window_t2

0x0001,

0xfaab,	// (0x0006342b) popup_blid2_search_window_t

0x0de2,	// (0x00054762) main_browser_pane_g1

0x0ae6,	// (0x00054466) main_browser_pane_ParamLimits

0xc0eb,	// (0x0005fa6b) bg_button_pane_cp011_ParamLimits

0x8b53,	// (0x0005c4d3) cell_vitu2_function_pane_g1_ParamLimits

0x2a2e,	// (0x000563ae) bg_popup_sub_pane_cp22_ParamLimits

0x944b,	// (0x0005cdcb) input_focus_pane_cp08_ParamLimits

0x9462,	// (0x0005cde2) popup_vitu2_query_button_pane_ParamLimits

0x9462,	// (0x0005cde2) popup_vitu2_query_button_pane

0x9473,	// (0x0005cdf3) popup_vitu2_query_input_button_pane

0xd468,	// (0x00060de8) popup_vitu2_query_window_g1_ParamLimits

0x947b,	// (0x0005cdfb) popup_vitu2_query_window_g2_ParamLimits

0xf9ac,	// (0x0006332c) popup_vitu2_query_window_g_ParamLimits

0xc074,	// (0x0005f9f4) bg_button_pane_cp026

0x9b9c,	// (0x0005d51c) popup_vitu2_query_input_button_pane_g1

0xc074,	// (0x0005f9f4) bg_button_pane_cp025

0xd8ba,	// (0x0006123a) popup_vitu2_query_button_pane_t1

0x727e,	// (0x0005abfe) main_mp3_pane_t6

0x7294,	// (0x0005ac14) popup_slider_window_cp01

0xeeb6,	// (0x00062836) cam4_battery_pane

0xef09,	// (0x00062889) cam4_battery_pane_cp02

0xeff4,	// (0x00062974) cam4_battery_pane_cp01

0xeff4,	// (0x00062974) cam4_battery_pane_cp03

0x2d3a,	// (0x000566ba) cam4_battery_pane_g1

0x0cce,	// (0x0005464e) cam4_battery_pane_g2

0x0001,

0xfab0,	// (0x00063430) cam4_battery_pane_g

0x6e5a,	// (0x0005a7da) popup_blid_sat_info2_window_t11

0x1522,	// (0x00054ea2) aid_size_touch_mv_arrow_left_ParamLimits

0x154d,	// (0x00054ecd) aid_size_touch_mv_arrow_right_ParamLimits

0x15ab,	// (0x00054f2b) navi_pane_g1_ParamLimits

0x15b7,	// (0x00054f37) navi_pane_g2_ParamLimits

0x15e5,	// (0x00054f65) navi_pane_g3_ParamLimits

0xf374,	// (0x00062cf4) navi_pane_g_ParamLimits

0x5b3c,	// (0x000594bc) navi_pane_mv_t1_ParamLimits

0x7e9a,	// (0x0005b81a) grid_imed_effect_pane_ParamLimits

0x4a6f,	// (0x000583ef) aid_placing_vt_slider_lsc

0x0d31,	// (0x000546b1) aid_placing_vt_slider_prt

0x0a1b,	// (0x0005439b) bg_tb_trans_pane_cp01_ParamLimits

0x70f8,	// (0x0005aa78) popup_image_details_window_g1_ParamLimits

0x710b,	// (0x0005aa8b) popup_image_details_window_g2_ParamLimits

0x7120,	// (0x0005aaa0) popup_image_details_window_g3_ParamLimits

0x7120,	// (0x0005aaa0) popup_image_details_window_g3

0xf6b3,	// (0x00063033) popup_image_details_window_g_ParamLimits

0x7134,	// (0x0005aab4) popup_image_details_window_t1_ParamLimits

0x7146,	// (0x0005aac6) popup_image_details_window_t2_ParamLimits

0x715f,	// (0x0005aadf) popup_image_details_window_t3_ParamLimits

0x7173,	// (0x0005aaf3) popup_image_details_window_t4_ParamLimits

0x718e,	// (0x0005ab0e) popup_image_details_window_t5_ParamLimits

0xf6ba,	// (0x0006303a) popup_image_details_window_t_ParamLimits

0x97ef,	// (0x0005d16f) cl_header_name_pane_ParamLimits

0x97ef,	// (0x0005d16f) cl_header_name_pane

0x9ba4,	// (0x0005d524) cl_header_name_pane_t1_ParamLimits

0x9ba4,	// (0x0005d524) cl_header_name_pane_t1

0x9bc5,	// (0x0005d545) cl_header_name_pane_t2_ParamLimits

0x9bc5,	// (0x0005d545) cl_header_name_pane_t2

0x9c07,	// (0x0005d587) cl_header_name_pane_t3_ParamLimits

0x9c07,	// (0x0005d587) cl_header_name_pane_t3

0x0002,

0xfab5,	// (0x00063435) cl_header_name_pane_t_ParamLimits

0xfab5,	// (0x00063435) cl_header_name_pane_t

0x1674,	// (0x00054ff4) navi_pane_mv_g2_ParamLimits

0xd1a0,	// (0x00060b20) field_vitu2_entry_pane_g1_ParamLimits

0xd1ac,	// (0x00060b2c) field_vitu2_entry_pane_g2_ParamLimits

0x2ce8,	// (0x00056668) field_vitu2_entry_pane_g3_ParamLimits

0x2ce8,	// (0x00056668) field_vitu2_entry_pane_g3

0xf8b5,	// (0x00063235) field_vitu2_entry_pane_g_ParamLimits

0x8acf,	// (0x0005c44f) cell_vitu2_itu_pane_g1_ParamLimits

0x8ae7,	// (0x0005c467) cell_vitu2_itu_pane_g2_ParamLimits

0x8ae7,	// (0x0005c467) cell_vitu2_itu_pane_g2

0x0001,

0xf8c1,	// (0x00063241) cell_vitu2_itu_pane_g_ParamLimits

0xf8c1,	// (0x00063241) cell_vitu2_itu_pane_g

0xc0eb,	// (0x0005fa6b) bg_vkb2_func_pane_cp05_ParamLimits

0xc0eb,	// (0x0005fa6b) bg_vkb2_func_pane_cp05

0xc0eb,	// (0x0005fa6b) bg_vkb2_func_pane_cp03

0xc0eb,	// (0x0005fa6b) bg_vkb2_func_pane_cp04

0xc0eb,	// (0x0005fa6b) bg_vkb2_func_pane_cp10_ParamLimits

0xc0eb,	// (0x0005fa6b) bg_vkb2_func_pane_cp10

0x9791,	// (0x0005d111) bg_vkb2_func_pane_cp08

0x9777,	// (0x0005d0f7) bg_vkb2_func_pane_cp06

0x9785,	// (0x0005d105) bg_vkb2_func_pane_cp07

0xd7aa,	// (0x0006112a) bg_vkb2_func_pane_cp11_ParamLimits

0xd7aa,	// (0x0006112a) bg_vkb2_func_pane_cp11

0xd7bf,	// (0x0006113f) bg_vkb2_func_pane_cp12_ParamLimits

0xd7bf,	// (0x0006113f) bg_vkb2_func_pane_cp12

0xc074,	// (0x0005f9f4) bg_vkb2_func_pane_cp09

0xd1e7,	// (0x00060b67) bg_vkb2_func_pane_g1

0x0ef3,	// (0x00054873) bg_vkb2_func_pane_g2

0xd1ef,	// (0x00060b6f) bg_vkb2_func_pane_g3

0xd1f7,	// (0x00060b77) bg_vkb2_func_pane_g4

0xd42d,	// (0x00060dad) bg_vkb2_func_pane_g5

0xd20f,	// (0x00060b8f) bg_vkb2_func_pane_g6

0xd217,	// (0x00060b97) bg_vkb2_func_pane_g7

0xd207,	// (0x00060b87) bg_vkb2_func_pane_g8

0x0ed3,	// (0x00054853) bg_vkb2_func_pane_g9

0x0008,

0xfabc,	// (0x0006343c) bg_vkb2_func_pane_g

0x9ac8,	// (0x0005d448) blid2_tripm_pane_g6_ParamLimits

0x9ac8,	// (0x0005d448) blid2_tripm_pane_g6

0xd04c,	// (0x000609cc) mp4_progress_pane_g1

0x9b41,	// (0x0005d4c1) blid2_tripm_values_pane_ParamLimits

0x9b41,	// (0x0005d4c1) blid2_tripm_values_pane

0x9c38,	// (0x0005d5b8) blid2_tripm_values_pane_t1

0x9c46,	// (0x0005d5c6) blid2_tripm_values_pane_t2

0x9c54,	// (0x0005d5d4) blid2_tripm_values_pane_t3

0x9c62,	// (0x0005d5e2) blid2_tripm_values_pane_t4

0x9c70,	// (0x0005d5f0) blid2_tripm_values_pane_t5

0x9c7e,	// (0x0005d5fe) blid2_tripm_values_pane_t6

0x9c8c,	// (0x0005d60c) blid2_tripm_values_pane_t7

0x9c9a,	// (0x0005d61a) blid2_tripm_values_pane_t8

0x9ca8,	// (0x0005d628) blid2_tripm_values_pane_t9

0x0008,

0xfacf,	// (0x0006344f) blid2_tripm_values_pane_t

0x4ab1,	// (0x00058431) call_video_pane_t1_ParamLimits

0x4acf,	// (0x0005844f) call_video_pane_t2_ParamLimits

0xf222,	// (0x00062ba2) call_video_pane_t_ParamLimits

0x5e00,	// (0x00059780) msg_header_pane_g1_ParamLimits

0x1847,	// (0x000551c7) msg_header_pane_g2_ParamLimits

0x1847,	// (0x000551c7) msg_header_pane_g2

0x0001,

0xf417,	// (0x00062d97) msg_header_pane_g_ParamLimits

0xf417,	// (0x00062d97) msg_header_pane_g

0x0ae6,	// (0x00054466) main_clock2_pane_ParamLimits

0x7b9b,	// (0x0005b51b) grid_clock2_toolbar_pane_ParamLimits

0x7b9b,	// (0x0005b51b) grid_clock2_toolbar_pane

0x7b9b,	// (0x0005b51b) listscroll_clock2_pane_ParamLimits

0x7b9b,	// (0x0005b51b) listscroll_clock2_pane

0x7c7f,	// (0x0005b5ff) main_clock2_pane_t3_ParamLimits

0x7c7f,	// (0x0005b5ff) main_clock2_pane_t3

0x7ca3,	// (0x0005b623) main_clock2_pane_t4_ParamLimits

0x7ca3,	// (0x0005b623) main_clock2_pane_t4

0xd8c8,	// (0x00061248) cell_clock2_toolbar_pane

0xd8d0,	// (0x00061250) cell_clock2_toolbar_pane_cp01

0xd8d0,	// (0x00061250) cell_clock2_toolbar_pane_cp02

0xd8d8,	// (0x00061258) cell_clock2_toolbar_pane_cp03

0xd8e0,	// (0x00061260) list_clock2_pane

0x14a7,	// (0x00054e27) scroll_pane_cp10

0xd8e8,	// (0x00061268) list_single_clock2_pane_ParamLimits

0xd8e8,	// (0x00061268) list_single_clock2_pane

0x0c98,	// (0x00054618) list_highlight_pane_cp08

0xd8f5,	// (0x00061275) list_single_clock2_pane_t1

0xd903,	// (0x00061283) list_single_clock2_pane_t2

0x0001,

0xfae2,	// (0x00063462) list_single_clock2_pane_t

0xc074,	// (0x0005f9f4) bg_button_pane_cp10

0xd911,	// (0x00061291) cell_clock2_toolbar_pane_g1

0x5e90,	// (0x00059810) aid_main_viewer_pane_g1_ParamLimits

0x5e90,	// (0x00059810) aid_main_viewer_pane_g1

0x5e9e,	// (0x0005981e) aid_main_viewer_pane_g2_ParamLimits

0x5e9e,	// (0x0005981e) aid_main_viewer_pane_g2

0x5eac,	// (0x0005982c) aid_main_viewer_pane_g3_ParamLimits

0x5eac,	// (0x0005982c) aid_main_viewer_pane_g3

0x5ebb,	// (0x0005983b) aid_main_viewer_pane_g4_ParamLimits

0x5ebb,	// (0x0005983b) aid_main_viewer_pane_g4

0x0003,

0xf428,	// (0x00062da8) aid_main_viewer_pane_g_ParamLimits

0xf428,	// (0x00062da8) aid_main_viewer_pane_g

0x6804,	// (0x0005a184) main_calc_pane_ParamLimits

0x682a,	// (0x0005a1aa) main_dialer2_pane_ParamLimits

0xc0f9,	// (0x0005fa79) main_cam6_pane

0xc0f9,	// (0x0005fa79) main_vid6_pane

0x7ba7,	// (0x0005b527) listscroll_gen_pane_cp06_ParamLimits

0x7ba7,	// (0x0005b527) listscroll_gen_pane_cp06

0x7cc6,	// (0x0005b646) main_clock2_pane_t5_ParamLimits

0x7cc6,	// (0x0005b646) main_clock2_pane_t5

0x7d24,	// (0x0005b6a4) aid_call2_pane_cp10_ParamLimits

0x7d36,	// (0x0005b6b6) aid_call_pane_cp10_ParamLimits

0x1516,	// (0x00054e96) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1516,	// (0x00054e96) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7d48,	// (0x0005b6c8) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7d48,	// (0x0005b6c8) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1516,	// (0x00054e96) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf76f,	// (0x000630ef) popup_clock_analogue_window_cp10_g_ParamLimits

0x7d5e,	// (0x0005b6de) popup_clock_analogue_window_cp10_t1_ParamLimits

0x8267,	// (0x0005bbe7) cell_dialer2_keypad_pane_g2_ParamLimits

0x8267,	// (0x0005bbe7) cell_dialer2_keypad_pane_g2

0x0001,

0xf854,	// (0x000631d4) cell_dialer2_keypad_pane_g_ParamLimits

0xf854,	// (0x000631d4) cell_dialer2_keypad_pane_g

0x8283,	// (0x0005bc03) cell_dialer2_keypad_pane_t1

0x8e73,	// (0x0005c7f3) main_cset_text2_pane_ParamLimits

0x8e73,	// (0x0005c7f3) main_cset_text2_pane

0xd654,	// (0x00060fd4) area_vitu2_query_pane_g1_ParamLimits

0x9716,	// (0x0005d096) area_vitu2_query_pane_g2_ParamLimits

0xf9ff,	// (0x0006337f) area_vitu2_query_pane_g_ParamLimits

0xd6d8,	// (0x00061058) area_vitu2_query_pane_t7_ParamLimits

0xd6d8,	// (0x00061058) area_vitu2_query_pane_t7

0x9777,	// (0x0005d0f7) bg_button_pane_cp018_ParamLimits

0x9785,	// (0x0005d105) bg_button_pane_cp021_ParamLimits

0x9791,	// (0x0005d111) bg_button_pane_cp022_ParamLimits

0x9791,	// (0x0005d111) bg_vkb2_func_pane_cp08_ParamLimits

0x9777,	// (0x0005d0f7) bg_vkb2_func_pane_cp06_ParamLimits

0x9785,	// (0x0005d105) bg_vkb2_func_pane_cp07_ParamLimits

0x97a2,	// (0x0005d122) input_focus_pane_cp09_ParamLimits

0xf05f,	// (0x000629df) cam6_autofocus_pane_ParamLimits

0xf05f,	// (0x000629df) cam6_autofocus_pane

0x9cb6,	// (0x0005d636) cam6_image_uncrop_pane_ParamLimits

0x9cb6,	// (0x0005d636) cam6_image_uncrop_pane

0x9cc5,	// (0x0005d645) cam6_indi_pane_ParamLimits

0x9cc5,	// (0x0005d645) cam6_indi_pane

0x9cdb,	// (0x0005d65b) cam6_mode_pane_ParamLimits

0x9cdb,	// (0x0005d65b) cam6_mode_pane

0x9ced,	// (0x0005d66d) cam6_timer_pane_ParamLimits

0x9ced,	// (0x0005d66d) cam6_timer_pane

0x9cfd,	// (0x0005d67d) cam6_zoom_pane_ParamLimits

0x9cfd,	// (0x0005d67d) cam6_zoom_pane

0x9d09,	// (0x0005d689) cam6_mode_pane_g1_ParamLimits

0x9d09,	// (0x0005d689) cam6_mode_pane_g1

0x9d19,	// (0x0005d699) cam6_mode_pane_g2_ParamLimits

0x9d19,	// (0x0005d699) cam6_mode_pane_g2

0x9d29,	// (0x0005d6a9) cam6_mode_pane_g3_ParamLimits

0x9d29,	// (0x0005d6a9) cam6_mode_pane_g3

0x9d39,	// (0x0005d6b9) cam6_mode_pane_g4_ParamLimits

0x9d39,	// (0x0005d6b9) cam6_mode_pane_g4

0x0003,

0xfae7,	// (0x00063467) cam6_mode_pane_g_ParamLimits

0xfae7,	// (0x00063467) cam6_mode_pane_g

0x9d49,	// (0x0005d6c9) bg_tb_trans_pane_cp08_ParamLimits

0x9d49,	// (0x0005d6c9) bg_tb_trans_pane_cp08

0xd919,	// (0x00061299) cam6_battery_pane_ParamLimits

0xd919,	// (0x00061299) cam6_battery_pane

0xd92f,	// (0x000612af) cam6_indi_pane_g1_ParamLimits

0xd92f,	// (0x000612af) cam6_indi_pane_g1

0xd941,	// (0x000612c1) cam6_indi_pane_g2_ParamLimits

0xd941,	// (0x000612c1) cam6_indi_pane_g2

0xd953,	// (0x000612d3) cam6_indi_pane_g3_ParamLimits

0xd953,	// (0x000612d3) cam6_indi_pane_g3

0x0002,

0xfaf0,	// (0x00063470) cam6_indi_pane_g_ParamLimits

0xfaf0,	// (0x00063470) cam6_indi_pane_g

0xd965,	// (0x000612e5) cam6_indi_pane_t1_ParamLimits

0xd965,	// (0x000612e5) cam6_indi_pane_t1

0x9d57,	// (0x0005d6d7) cam6_autofocus_pane_g1

0x9d5f,	// (0x0005d6df) cam6_autofocus_pane_g2

0x9d67,	// (0x0005d6e7) cam6_autofocus_pane_g3

0x9d6f,	// (0x0005d6ef) cam6_autofocus_pane_g4

0x0003,

0xfaf7,	// (0x00063477) cam6_autofocus_pane_g

0xd98b,	// (0x0006130b) cam6_timer_pane_g1

0xd993,	// (0x00061313) cam6_timer_pane_t1

0xd9a1,	// (0x00061321) cam6_zoom_cont_pane

0xd9a9,	// (0x00061329) cam6_zoom_pane_g1

0xd9b1,	// (0x00061331) cam6_zoom_pane_g2

0x9d77,	// (0x0005d6f7) cam6_zoom_pane_g3

0x0002,

0xfb00,	// (0x00063480) cam6_zoom_pane_g

0x0cce,	// (0x0005464e) cam6_battery_pane_g1

0x0cce,	// (0x0005464e) cam6_battery_pane_g2

0x0001,

0xf3d8,	// (0x00062d58) cam6_battery_pane_g

0xd9b9,	// (0x00061339) cam6_zoom_cont_pane_g1

0xd9c2,	// (0x00061342) cam6_zoom_cont_pane_g2

0xd9cb,	// (0x0006134b) cam6_zoom_cont_pane_g3

0x0002,

0xfb07,	// (0x00063487) cam6_zoom_cont_pane_g

0x9d94,	// (0x0005d714) cam6_mode_pane_cp_ParamLimits

0x9d94,	// (0x0005d714) cam6_mode_pane_cp

0x9da6,	// (0x0005d726) cam6_zoom_pane_cp_ParamLimits

0x9da6,	// (0x0005d726) cam6_zoom_pane_cp

0x9db2,	// (0x0005d732) vid6_image_uncrop_cif_pane_ParamLimits

0x9db2,	// (0x0005d732) vid6_image_uncrop_cif_pane

0x9dc2,	// (0x0005d742) vid6_image_uncrop_nhd_pane_ParamLimits

0x9dc2,	// (0x0005d742) vid6_image_uncrop_nhd_pane

0x9dd1,	// (0x0005d751) vid6_image_uncrop_vga_pane_ParamLimits

0x9dd1,	// (0x0005d751) vid6_image_uncrop_vga_pane

0x9de0,	// (0x0005d760) vid6_image_uncrop_wvga_pane_ParamLimits

0x9de0,	// (0x0005d760) vid6_image_uncrop_wvga_pane

0x9def,	// (0x0005d76f) vid6_indi_pane_ParamLimits

0x9def,	// (0x0005d76f) vid6_indi_pane

0x9d49,	// (0x0005d6c9) bg_tb_trans_pane_cp09_ParamLimits

0x9d49,	// (0x0005d6c9) bg_tb_trans_pane_cp09

0xd9e3,	// (0x00061363) cam6_battery_pane_cp_ParamLimits

0xd9e3,	// (0x00061363) cam6_battery_pane_cp

0xd9ef,	// (0x0006136f) vid6_indi_pane_g1_ParamLimits

0xd9ef,	// (0x0006136f) vid6_indi_pane_g1

0xda01,	// (0x00061381) vid6_indi_pane_g2_ParamLimits

0xda01,	// (0x00061381) vid6_indi_pane_g2

0xda13,	// (0x00061393) vid6_indi_pane_g3_ParamLimits

0xda13,	// (0x00061393) vid6_indi_pane_g3

0xda28,	// (0x000613a8) vid6_indi_pane_g4_ParamLimits

0xda28,	// (0x000613a8) vid6_indi_pane_g4

0xda3d,	// (0x000613bd) vid6_indi_pane_g5_ParamLimits

0xda3d,	// (0x000613bd) vid6_indi_pane_g5

0x0004,

0xfb0e,	// (0x0006348e) vid6_indi_pane_g_ParamLimits

0xfb0e,	// (0x0006348e) vid6_indi_pane_g

0xda57,	// (0x000613d7) vid6_indi_pane_t1_ParamLimits

0xda57,	// (0x000613d7) vid6_indi_pane_t1

0xda6d,	// (0x000613ed) vid6_indi_pane_t2_ParamLimits

0xda6d,	// (0x000613ed) vid6_indi_pane_t2

0xda95,	// (0x00061415) vid6_indi_pane_t3_ParamLimits

0xda95,	// (0x00061415) vid6_indi_pane_t3

0xdabd,	// (0x0006143d) vid6_indi_pane_t4_ParamLimits

0xdabd,	// (0x0006143d) vid6_indi_pane_t4

0x0003,

0xfb19,	// (0x00063499) vid6_indi_pane_t_ParamLimits

0xfb19,	// (0x00063499) vid6_indi_pane_t

0xdae1,	// (0x00061461) wait_bar_pane_cp08

0x9e07,	// (0x0005d787) main_cset_text2_pane_t1_ParamLimits

0x9e07,	// (0x0005d787) main_cset_text2_pane_t1

0x9d7f,	// (0x0005d6ff) listscroll_gen_pane_cp06_t1_ParamLimits

0x9d7f,	// (0x0005d6ff) listscroll_gen_pane_cp06_t1

0xc0f9,	// (0x0005fa79) main_cam6_set_pane

0xd17b,	// (0x00060afb) bg_tb_trans_pane_cp06_ParamLimits

0xeebe,	// (0x0006283e) cam4_indicators_pane_g1_ParamLimits

0xeecf,	// (0x0006284f) cam4_indicators_pane_g2_ParamLimits

0xf891,	// (0x00063211) cam4_indicators_pane_g_ParamLimits

0xeee7,	// (0x00062867) cam4_indicators_pane_t1_ParamLimits

0xc0eb,	// (0x0005fa6b) bg_tb_trans_pane_cp07_ParamLimits

0xef11,	// (0x00062891) vid4_indicators_pane_g1_ParamLimits

0xef25,	// (0x000628a5) vid4_indicators_pane_g2_ParamLimits

0xef39,	// (0x000628b9) vid4_indicators_pane_g3_ParamLimits

0xef4a,	// (0x000628ca) vid4_indicators_pane_g4_ParamLimits

0xf8a3,	// (0x00063223) vid4_indicators_pane_g_ParamLimits

0xef66,	// (0x000628e6) vid4_indicators_pane_t1_ParamLimits

0xeffc,	// (0x0006297c) vid4_progress_pane_g1_ParamLimits

0xf00c,	// (0x0006298c) vid4_progress_pane_g2_ParamLimits

0x98e2,	// (0x0005d262) vid4_progress_pane_g3_ParamLimits

0xf01c,	// (0x0006299c) vid4_progress_pane_g4_ParamLimits

0xfa4a,	// (0x000633ca) vid4_progress_pane_g_ParamLimits

0x98f4,	// (0x0005d274) vid4_progress_pane_t1_ParamLimits

0xf034,	// (0x000629b4) vid4_progress_pane_t2_ParamLimits

0xf049,	// (0x000629c9) vid4_progress_pane_t3_ParamLimits

0xfa55,	// (0x000633d5) vid4_progress_pane_t_ParamLimits

0x990a,	// (0x0005d28a) wait_bar_pane_cp07_ParamLimits

0x9e25,	// (0x0005d7a5) main_cam6_set_pane_g2_ParamLimits

0x9e25,	// (0x0005d7a5) main_cam6_set_pane_g2

0x9e49,	// (0x0005d7c9) main_cset6_listscroll_pane_ParamLimits

0x9e49,	// (0x0005d7c9) main_cset6_listscroll_pane

0x9e65,	// (0x0005d7e5) main_cset6_slider_pane_ParamLimits

0x9e65,	// (0x0005d7e5) main_cset6_slider_pane

0x9e7b,	// (0x0005d7fb) main_cset6_text2_pane_ParamLimits

0x9e7b,	// (0x0005d7fb) main_cset6_text2_pane

0xdaf0,	// (0x00061470) main_cset6_text_pane

0xdaf8,	// (0x00061478) main_cset_list_pane_copy1_ParamLimits

0xdaf8,	// (0x00061478) main_cset_list_pane_copy1

0xdb08,	// (0x00061488) scroll_pane_cp028_copy1

0x9e89,	// (0x0005d809) cset_list_set_pane_copy1

0x9e9b,	// (0x0005d81b) aid_position_infowindow_above_copy1

0x9ea3,	// (0x0005d823) aid_position_infowindow_below_copy1

0x9eab,	// (0x0005d82b) cset_list_set_pane_g1_copy1

0x9eb3,	// (0x0005d833) cset_list_set_pane_g3_copy1_ParamLimits

0x9eb3,	// (0x0005d833) cset_list_set_pane_g3_copy1

0x9ec2,	// (0x0005d842) cset_list_set_pane_t1_copy1_ParamLimits

0x9ec2,	// (0x0005d842) cset_list_set_pane_t1_copy1

0x0a1b,	// (0x0005439b) list_highlight_pane_cp021_copy1_ParamLimits

0x0a1b,	// (0x0005439b) list_highlight_pane_cp021_copy1

0xdb11,	// (0x00061491) cset6_slider_pane_ParamLimits

0xdb11,	// (0x00061491) cset6_slider_pane

0xdb3d,	// (0x000614bd) main_cset6_slider_pane_g1_ParamLimits

0xdb3d,	// (0x000614bd) main_cset6_slider_pane_g1

0x9ed7,	// (0x0005d857) main_cset6_slider_pane_g2_ParamLimits

0x9ed7,	// (0x0005d857) main_cset6_slider_pane_g2

0xdb65,	// (0x000614e5) main_cset6_slider_pane_g3_ParamLimits

0xdb65,	// (0x000614e5) main_cset6_slider_pane_g3

0x9eff,	// (0x0005d87f) main_cset6_slider_pane_g4_ParamLimits

0x9eff,	// (0x0005d87f) main_cset6_slider_pane_g4

0xdb71,	// (0x000614f1) main_cset6_slider_pane_g5_ParamLimits

0xdb71,	// (0x000614f1) main_cset6_slider_pane_g5

0xd316,	// (0x00060c96) main_cset6_slider_pane_g7_ParamLimits

0xd316,	// (0x00060c96) main_cset6_slider_pane_g7

0xd322,	// (0x00060ca2) main_cset6_slider_pane_g8_ParamLimits

0xd322,	// (0x00060ca2) main_cset6_slider_pane_g8

0x8f19,	// (0x0005c899) main_cset6_slider_pane_g9_ParamLimits

0x8f19,	// (0x0005c899) main_cset6_slider_pane_g9

0x8f25,	// (0x0005c8a5) main_cset6_slider_pane_g10_ParamLimits

0x8f25,	// (0x0005c8a5) main_cset6_slider_pane_g10

0x8f31,	// (0x0005c8b1) main_cset6_slider_pane_g11_ParamLimits

0x8f31,	// (0x0005c8b1) main_cset6_slider_pane_g11

0x8f3d,	// (0x0005c8bd) main_cset6_slider_pane_g12_ParamLimits

0x8f3d,	// (0x0005c8bd) main_cset6_slider_pane_g12

0x8f49,	// (0x0005c8c9) main_cset6_slider_pane_g13_ParamLimits

0x8f49,	// (0x0005c8c9) main_cset6_slider_pane_g13

0x8f55,	// (0x0005c8d5) main_cset6_slider_pane_g14_ParamLimits

0x8f55,	// (0x0005c8d5) main_cset6_slider_pane_g14

0x9f0b,	// (0x0005d88b) main_cset6_slider_pane_g15_ParamLimits

0x9f0b,	// (0x0005d88b) main_cset6_slider_pane_g15

0xd32e,	// (0x00060cae) main_cset6_slider_pane_g16_ParamLimits

0xd32e,	// (0x00060cae) main_cset6_slider_pane_g16

0xd33a,	// (0x00060cba) main_cset6_slider_pane_g17_ParamLimits

0xd33a,	// (0x00060cba) main_cset6_slider_pane_g17

0x0011,

0xfb22,	// (0x000634a2) main_cset6_slider_pane_g_ParamLimits

0xfb22,	// (0x000634a2) main_cset6_slider_pane_g

0xdb7d,	// (0x000614fd) main_cset6_slider_pane_t1_ParamLimits

0xdb7d,	// (0x000614fd) main_cset6_slider_pane_t1

0x9f3b,	// (0x0005d8bb) main_cset6_slider_pane_t2_ParamLimits

0x9f3b,	// (0x0005d8bb) main_cset6_slider_pane_t2

0x9f66,	// (0x0005d8e6) main_cset6_slider_pane_t3_ParamLimits

0x9f66,	// (0x0005d8e6) main_cset6_slider_pane_t3

0x9f91,	// (0x0005d911) main_cset6_slider_pane_t4_ParamLimits

0x9f91,	// (0x0005d911) main_cset6_slider_pane_t4

0x9fbc,	// (0x0005d93c) main_cset6_slider_pane_t5_ParamLimits

0x9fbc,	// (0x0005d93c) main_cset6_slider_pane_t5

0xdbbe,	// (0x0006153e) main_cset6_slider_pane_t7_ParamLimits

0xdbbe,	// (0x0006153e) main_cset6_slider_pane_t7

0x9fe7,	// (0x0005d967) main_cset6_slider_pane_t8_ParamLimits

0x9fe7,	// (0x0005d967) main_cset6_slider_pane_t8

0xa00b,	// (0x0005d98b) main_cset6_slider_pane_t9_ParamLimits

0xa00b,	// (0x0005d98b) main_cset6_slider_pane_t9

0xa02f,	// (0x0005d9af) main_cset6_slider_pane_t10_ParamLimits

0xa02f,	// (0x0005d9af) main_cset6_slider_pane_t10

0xa053,	// (0x0005d9d3) main_cset6_slider_pane_t11_ParamLimits

0xa053,	// (0x0005d9d3) main_cset6_slider_pane_t11

0xdbf4,	// (0x00061574) main_cset6_slider_pane_t14_ParamLimits

0xdbf4,	// (0x00061574) main_cset6_slider_pane_t14

0xdc2d,	// (0x000615ad) main_cset6_slider_pane_t15_ParamLimits

0xdc2d,	// (0x000615ad) main_cset6_slider_pane_t15

0x000b,

0xfb47,	// (0x000634c7) main_cset6_slider_pane_t_ParamLimits

0xfb47,	// (0x000634c7) main_cset6_slider_pane_t

0xccea,	// (0x0006066a) cset_slider_pane_g1_copy1

0xdc66,	// (0x000615e6) cset_slider_pane_g2_copy1

0xdc6f,	// (0x000615ef) cset_slider_pane_g3_copy1

0xc074,	// (0x0005f9f4) bg_popup_sub_pane_cp011_copy1

0xdc81,	// (0x00061601) main_cset_text_pane_g1_copy1

0xd47c,	// (0x00060dfc) main_cset_text_pane_t1_copy1

0xd48a,	// (0x00060e0a) main_cset_text_pane_t2_copy1

0xd498,	// (0x00060e18) main_cset_text_pane_t3_copy1

0xd4a6,	// (0x00060e26) main_cset_text_pane_t4_copy1

0xd4b4,	// (0x00060e34) main_cset_text_pane_t5_copy1

0xdc89,	// (0x00061609) main_cset_text_pane_t6_copy1

0xdc97,	// (0x00061617) main_cset_text_pane_t7_copy1

0x9e07,	// (0x0005d787) main_cset_text2_pane_t1_copy1

0xc0eb,	// (0x0005fa6b) main_ncimui_pane

0x6a7a,	// (0x0005a3fa) popup_query_ncimui_window_ParamLimits

0x6a7a,	// (0x0005a3fa) popup_query_ncimui_window

0x742b,	// (0x0005adab) field_cale_ev2_pane_g4_ParamLimits

0x742b,	// (0x0005adab) field_cale_ev2_pane_g4

0x8146,	// (0x0005bac6) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8146,	// (0x0005bac6) cell_video_dialer_keypad_pane_g2

0x0001,

0xf82b,	// (0x000631ab) cell_video_dialer_keypad_pane_g_ParamLimits

0xf82b,	// (0x000631ab) cell_video_dialer_keypad_pane_g

0x815e,	// (0x0005bade) cell_video_dialer_keypad_pane_t1

0xc074,	// (0x0005f9f4) bg_popup_window_pane_cp012

0x298a,	// (0x0005630a) heading_pane_cp06

0xdcc3,	// (0x00061643) ncim_query_content_pane

0xc074,	// (0x0005f9f4) bg_popup_heading_pane_cp01

0xdccb,	// (0x0006164b) ncim_heading_pane_t1

0xdcd9,	// (0x00061659) ncim_indicator_popup_pane

0xdceb,	// (0x0006166b) ncim_query_button_pane

0xdcff,	// (0x0006167f) ncim_query_content_pane_t1

0xdd11,	// (0x00061691) ncim_query_content_pane_t2

0x0005,

0xfb8b,	// (0x0006350b) ncim_query_content_pane_t

0xdd4b,	// (0x000616cb) ncim_query_list_pane

0xdd5d,	// (0x000616dd) ncim_query_popup_pane

0xdcd9,	// (0x00061659) ncim_indicator_popup_pane_ParamLimits

0xa1bd,	// (0x0005db3d) ncim_query_content_pane_g1_ParamLimits

0xa1bd,	// (0x0005db3d) ncim_query_content_pane_g1

0xdcff,	// (0x0006167f) ncim_query_content_pane_t1_ParamLimits

0xdd11,	// (0x00061691) ncim_query_content_pane_t2_ParamLimits

0xa1c9,	// (0x0005db49) ncim_query_content_pane_t3_ParamLimits

0xa1c9,	// (0x0005db49) ncim_query_content_pane_t3

0xa1f1,	// (0x0005db71) ncim_query_content_pane_t4_ParamLimits

0xa1f1,	// (0x0005db71) ncim_query_content_pane_t4

0xa219,	// (0x0005db99) ncim_query_content_pane_t5_ParamLimits

0xa219,	// (0x0005db99) ncim_query_content_pane_t5

0xdd23,	// (0x000616a3) ncim_query_content_pane_t6_ParamLimits

0xdd23,	// (0x000616a3) ncim_query_content_pane_t6

0xfb8b,	// (0x0006350b) ncim_query_content_pane_t_ParamLimits

0xdd4b,	// (0x000616cb) ncim_query_list_pane_ParamLimits

0xdd5d,	// (0x000616dd) ncim_query_popup_pane_ParamLimits

0xdd71,	// (0x000616f1) wait_bar_pane_cp04

0xc074,	// (0x0005f9f4) input_focus_pane_cp011

0xdd79,	// (0x000616f9) ncim_query_popup_pane_t1

0xdd87,	// (0x00061707) ncim_list_query_list_pane_ParamLimits

0xdd87,	// (0x00061707) ncim_list_query_list_pane

0xc074,	// (0x0005f9f4) bg_button_pane_cp027

0xdd94,	// (0x00061714) ncim_query_button_pane_g1

0xc074,	// (0x0005f9f4) list_highlight_pane_cp012

0xdd9e,	// (0x0006171e) ncim_list_query_list_pane_g1

0xdda6,	// (0x00061726) ncim_list_query_list_pane_t1

0xeedb,	// (0x0006285b) cam4_indicators_pane_g3_ParamLimits

0xeedb,	// (0x0006285b) cam4_indicators_pane_g3

0xef56,	// (0x000628d6) vid4_indicators_pane_g5_ParamLimits

0xef56,	// (0x000628d6) vid4_indicators_pane_g5

0xf028,	// (0x000629a8) vid4_progress_pane_g5_ParamLimits

0xf028,	// (0x000629a8) vid4_progress_pane_g5

0xa0a8,	// (0x0005da28) main_ncimui_pane_g1

0xa111,	// (0x0005da91) ncimui_group_query_pane_ParamLimits

0xa111,	// (0x0005da91) ncimui_group_query_pane

0xa159,	// (0x0005dad9) ncimui_list_pane_ParamLimits

0xa159,	// (0x0005dad9) ncimui_list_pane

0xa180,	// (0x0005db00) ncimui_text_pane_ParamLimits

0xa180,	// (0x0005db00) ncimui_text_pane

0xa241,	// (0x0005dbc1) ncimui_text_pane_t1_ParamLimits

0xa241,	// (0x0005dbc1) ncimui_text_pane_t1

0xddb4,	// (0x00061734) ncimui_list_single_graphic_pane_ParamLimits

0xddb4,	// (0x00061734) ncimui_list_single_graphic_pane

0xa25f,	// (0x0005dbdf) ncimui_query_pane_ParamLimits

0xa25f,	// (0x0005dbdf) ncimui_query_pane

0xc074,	// (0x0005f9f4) list_highlight_pane_cp013

0xddc4,	// (0x00061744) ncim_list_query_list_pane_t1_copy1

0xddd2,	// (0x00061752) ncim_list_single_graphic_pane_g1

0xa272,	// (0x0005dbf2) ncim_query_button_pane_cp01

0xa27e,	// (0x0005dbfe) ncim_query_entry_pane_ParamLimits

0xa27e,	// (0x0005dbfe) ncim_query_entry_pane

0xa291,	// (0x0005dc11) ncimui_query_pane_g1

0xa29d,	// (0x0005dc1d) ncimui_query_pane_t1_ParamLimits

0xa29d,	// (0x0005dc1d) ncimui_query_pane_t1

0x0a1b,	// (0x0005439b) input_focus_pane_cp012

0xddda,	// (0x0006175a) ncim_query_entry_pane_t1

0x0ae6,	// (0x00054466) main_im_pane_ParamLimits

0xc0eb,	// (0x0005fa6b) main_mobtv_pane_ParamLimits

0xc0eb,	// (0x0005fa6b) main_mobtv_pane

0x9f23,	// (0x0005d8a3) main_cset6_slider_pane_g18_ParamLimits

0x9f23,	// (0x0005d8a3) main_cset6_slider_pane_g18

0x9f2f,	// (0x0005d8af) main_cset6_slider_pane_g19_ParamLimits

0x9f2f,	// (0x0005d8af) main_cset6_slider_pane_g19

0x0a90,	// (0x00054410) bg_main_mobtv_pane_ParamLimits

0x0a90,	// (0x00054410) bg_main_mobtv_pane

0xa2b6,	// (0x0005dc36) main_mobtv_info_pane

0xa2bf,	// (0x0005dc3f) main_mobtv_loading_pane_ParamLimits

0xa2bf,	// (0x0005dc3f) main_mobtv_loading_pane

0xddec,	// (0x0006176c) main_mobtv_pg_channel_list_pane

0xddf6,	// (0x00061776) main_mobtv_pg_hdr_pane

0xa2cc,	// (0x0005dc4c) main_mobtv_programe_curr_pane_ParamLimits

0xa2cc,	// (0x0005dc4c) main_mobtv_programe_curr_pane

0xa2d9,	// (0x0005dc59) main_mobtv_programe_next_pane_ParamLimits

0xa2d9,	// (0x0005dc59) main_mobtv_programe_next_pane

0xddff,	// (0x0006177f) popup_mobtv_noti_window

0x0cce,	// (0x0005464e) main_tv_pg_hdr_pane_g1

0xde07,	// (0x00061787) main_tv_pg_hdr_pane_g2

0xde0f,	// (0x0006178f) main_tv_pg_hdr_pane_g3

0xde17,	// (0x00061797) main_tv_pg_hdr_pane_g4

0xde1f,	// (0x0006179f) main_tv_pg_hdr_pane_g5

0xde29,	// (0x000617a9) main_tv_pg_hdr_pane_g6

0xde33,	// (0x000617b3) main_tv_pg_hdr_pane_g7

0xde3d,	// (0x000617bd) main_tv_pg_hdr_pane_g8

0xde47,	// (0x000617c7) main_tv_pg_hdr_pane_g9

0xde51,	// (0x000617d1) main_tv_pg_hdr_pane_g10

0xde5b,	// (0x000617db) main_tv_pg_hdr_pane_g11

0x000a,

0xfb98,	// (0x00063518) main_tv_pg_hdr_pane_g

0xde65,	// (0x000617e5) main_tv_pg_hdr_pane_t1

0xde73,	// (0x000617f3) main_tv_pg_hdr_pane_t2

0xde81,	// (0x00061801) main_tv_pg_hdr_pane_t3

0xde91,	// (0x00061811) main_tv_pg_hdr_pane_t4

0xdea1,	// (0x00061821) main_tv_pg_hdr_pane_t5

0x0004,

0xfbaf,	// (0x0006352f) main_tv_pg_hdr_pane_t

0xdeb1,	// (0x00061831) single_mobtv_pg_channel_pane_ParamLimits

0xdeb1,	// (0x00061831) single_mobtv_pg_channel_pane

0xdec3,	// (0x00061843) single_mobtv_pg_channel_table_pane

0x0ff6,	// (0x00054976) single_mobtv_pg_channel_thumb_pane

0xdecc,	// (0x0006184c) single_tv_pg_channel_pane_g1

0xded5,	// (0x00061855) single_tv_pg_channel_pane_g2

0x0001,

0xfbba,	// (0x0006353a) single_tv_pg_channel_pane_g

0x0a74,	// (0x000543f4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x0a74,	// (0x000543f4) bg_single_mobtv_pg_channel_thumb_pane

0xdede,	// (0x0006185e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdede,	// (0x0006185e) single_mobtv_pg_channel_thumb_pane_g1

0xdeec,	// (0x0006186c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdeec,	// (0x0006186c) single_mobtv_pg_channel_thumb_pane_g2

0xdef8,	// (0x00061878) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdef8,	// (0x00061878) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbbf,	// (0x0006353f) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbbf,	// (0x0006353f) single_mobtv_pg_channel_thumb_pane_g

0xdf04,	// (0x00061884) single_mobtv_pg_channel_thumb_pane_t1

0xdf12,	// (0x00061892) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbc6,	// (0x00063546) single_mobtv_pg_channel_thumb_pane_t

0x0cce,	// (0x0005464e) bg_single_mobtv_pg_channel_table_pane_g1

0x0cce,	// (0x0005464e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3d8,	// (0x00062d58) bg_single_mobtv_pg_channel_table_pane_g

0xdf20,	// (0x000618a0) single_mobtv_pg_channel_table_pane_t1

0xdf2e,	// (0x000618ae) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbcb,	// (0x0006354b) single_mobtv_pg_channel_table_pane_t

0xa2ee,	// (0x0005dc6e) main_mobtv_info_pane_g1_ParamLimits

0xa2ee,	// (0x0005dc6e) main_mobtv_info_pane_g1

0xa30c,	// (0x0005dc8c) main_mobtv_info_pane_t1_ParamLimits

0xa30c,	// (0x0005dc8c) main_mobtv_info_pane_t1

0xa384,	// (0x0005dd04) main_mobtv_info_pane_t2_ParamLimits

0xa384,	// (0x0005dd04) main_mobtv_info_pane_t2

0x0002,

0xfbd5,	// (0x00063555) main_mobtv_info_pane_t_ParamLimits

0xfbd5,	// (0x00063555) main_mobtv_info_pane_t

0xa413,	// (0x0005dd93) wait_bar_pane_cp05

0xa425,	// (0x0005dda5) main_mobtv_loading_pane_g1_ParamLimits

0xa425,	// (0x0005dda5) main_mobtv_loading_pane_g1

0xa438,	// (0x0005ddb8) main_mobtv_loading_pane_g2_ParamLimits

0xa438,	// (0x0005ddb8) main_mobtv_loading_pane_g2

0xa444,	// (0x0005ddc4) main_mobtv_loading_pane_g3_ParamLimits

0xa444,	// (0x0005ddc4) main_mobtv_loading_pane_g3

0x0002,

0xfbdc,	// (0x0006355c) main_mobtv_loading_pane_g_ParamLimits

0xfbdc,	// (0x0006355c) main_mobtv_loading_pane_g

0xdf3c,	// (0x000618bc) main_mobtv_loading_pane_t1_ParamLimits

0xdf3c,	// (0x000618bc) main_mobtv_loading_pane_t1

0xdf54,	// (0x000618d4) main_mobtv_loading_pane_t2_ParamLimits

0xdf54,	// (0x000618d4) main_mobtv_loading_pane_t2

0x0001,

0xfbe3,	// (0x00063563) main_mobtv_loading_pane_t_ParamLimits

0xfbe3,	// (0x00063563) main_mobtv_loading_pane_t

0xa457,	// (0x0005ddd7) wait_bar_pane_cp06_ParamLimits

0xa457,	// (0x0005ddd7) wait_bar_pane_cp06

0xdf78,	// (0x000618f8) main_mobtv_programe_curr_pane_t1

0xdf86,	// (0x00061906) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbe8,	// (0x00063568) main_mobtv_programe_curr_pane_t

0xdf94,	// (0x00061914) main_mobtv_programe_next_pane_t1

0xdfa2,	// (0x00061922) main_mobtv_programe_next_pane_t2

0xdfb0,	// (0x00061930) main_mobtv_programe_next_pane_t3

0x0002,

0xfbed,	// (0x0006356d) main_mobtv_programe_next_pane_t

0xc074,	// (0x0005f9f4) bg_popup_mobtv_noti_window_pane

0xdfbe,	// (0x0006193e) popup_mobtv_noti_window_g1

0xdfc6,	// (0x00061946) popup_mobtv_noti_window_t1

0xdfd4,	// (0x00061954) popup_mobtv_noti_window_t2

0x0001,

0xfbf4,	// (0x00063574) popup_mobtv_noti_window_t

0x0cce,	// (0x0005464e) bg_popup_mobtv_noti_window_pane_g1

0xc0f9,	// (0x0005fa79) sc_clock_pane

0xc0f9,	// (0x0005fa79) main_fs_bigclock_pane

0x9b2b,	// (0x0005d4ab) blid2_tripm_pane_t4_ParamLimits

0x9b2b,	// (0x0005d4ab) blid2_tripm_pane_t4

0xa466,	// (0x0005dde6) sc_clock_pane_g1_ParamLimits

0xa466,	// (0x0005dde6) sc_clock_pane_g1

0xa478,	// (0x0005ddf8) sc_clock_pane_t1_ParamLimits

0xa478,	// (0x0005ddf8) sc_clock_pane_t1

0xa49a,	// (0x0005de1a) sc_clock_pane_t2_ParamLimits

0xa49a,	// (0x0005de1a) sc_clock_pane_t2

0xa4b2,	// (0x0005de32) sc_clock_pane_t3_ParamLimits

0xa4b2,	// (0x0005de32) sc_clock_pane_t3

0x0004,

0xfbf9,	// (0x00063579) sc_clock_pane_t_ParamLimits

0xfbf9,	// (0x00063579) sc_clock_pane_t

0xb1cb,	// (0x0005eb4b) main_fs_bigclock_indicator_pane_ParamLimits

0xb1cb,	// (0x0005eb4b) main_fs_bigclock_indicator_pane

0xa558,	// (0x0005ded8) main_fs_bigclock_pane_g1_ParamLimits

0xa558,	// (0x0005ded8) main_fs_bigclock_pane_g1

0xb1d7,	// (0x0005eb57) main_fs_bigclock_pane_t1_ParamLimits

0xb1d7,	// (0x0005eb57) main_fs_bigclock_pane_t1

0xb1e9,	// (0x0005eb69) main_fs_bigclock_pane_t2_ParamLimits

0xb1e9,	// (0x0005eb69) main_fs_bigclock_pane_t2

0xb1fd,	// (0x0005eb7d) main_fs_bigclock_pane_t3_ParamLimits

0xb1fd,	// (0x0005eb7d) main_fs_bigclock_pane_t3

0x0002,

0xfd8a,	// (0x0006370a) main_fs_bigclock_pane_t_ParamLimits

0xfd8a,	// (0x0006370a) main_fs_bigclock_pane_t

0xeb48,	// (0x000624c8) main_fs_bigclock_indicator_pane_g1

0xdcf3,	// (0x00061673) ncim_query_content_pane_g2_ParamLimits

0xdcf3,	// (0x00061673) ncim_query_content_pane_g2

0x0001,

0xfb86,	// (0x00063506) ncim_query_content_pane_g_ParamLimits

0xfb86,	// (0x00063506) ncim_query_content_pane_g

0xa4cb,	// (0x0005de4b) sc_clock_pane_t4_ParamLimits

0xa4cb,	// (0x0005de4b) sc_clock_pane_t4

0xc0eb,	// (0x0005fa6b) main_radioblah_pane

0xd0e9,	// (0x00060a69) cell_call4_button_pane_t1_copy1_ParamLimits

0xd0e9,	// (0x00060a69) cell_call4_button_pane_t1_copy1

0xa0c0,	// (0x0005da40) main_ncimui_pane_t1_ParamLimits

0xa0c0,	// (0x0005da40) main_ncimui_pane_t1

0xa0da,	// (0x0005da5a) main_ncimui_pane_t2_ParamLimits

0xa0da,	// (0x0005da5a) main_ncimui_pane_t2

0x0002,

0xfb7f,	// (0x000634ff) main_ncimui_pane_t_ParamLimits

0xfb7f,	// (0x000634ff) main_ncimui_pane_t

0xe11a,	// (0x00061a9a) main_radioblah_anim_pane_ParamLimits

0xe11a,	// (0x00061a9a) main_radioblah_anim_pane

0xe12b,	// (0x00061aab) main_radioblah_info_pane_ParamLimits

0xe12b,	// (0x00061aab) main_radioblah_info_pane

0xe13f,	// (0x00061abf) main_radioblah_pane_t1_ParamLimits

0xe13f,	// (0x00061abf) main_radioblah_pane_t1

0xe15b,	// (0x00061adb) main_radioblah_pane_t2_ParamLimits

0xe15b,	// (0x00061adb) main_radioblah_pane_t2

0x0003,

0xfc1a,	// (0x0006359a) main_radioblah_pane_t_ParamLimits

0xfc1a,	// (0x0006359a) main_radioblah_pane_t

0xa5b7,	// (0x0005df37) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa5b7,	// (0x0005df37) main_radioblah_rocker_ctrl_pane

0xe1a3,	// (0x00061b23) main_radioblah_info_pane_t1_ParamLimits

0xe1a3,	// (0x00061b23) main_radioblah_info_pane_t1

0xa60f,	// (0x0005df8f) main_radioblah_info_pane_t2_ParamLimits

0xa60f,	// (0x0005df8f) main_radioblah_info_pane_t2

0x0003,

0xfc23,	// (0x000635a3) main_radioblah_info_pane_t_ParamLimits

0xfc23,	// (0x000635a3) main_radioblah_info_pane_t

0x0cce,	// (0x0005464e) main_radioblah_rocker_ctrl_pane_g1

0xa6bf,	// (0x0005e03f) main_radioblah_rocker_ctrl_pane_g2

0xa6c7,	// (0x0005e047) main_radioblah_rocker_ctrl_pane_g3

0xa6cf,	// (0x0005e04f) main_radioblah_rocker_ctrl_pane_g4

0xa6d7,	// (0x0005e057) main_radioblah_rocker_ctrl_pane_g5

0xa6df,	// (0x0005e05f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc2c,	// (0x000635ac) main_radioblah_rocker_ctrl_pane_g

0x9e07,	// (0x0005d787) main_cset_text2_pane_t1_copy1_ParamLimits

0xd173,	// (0x00060af3) cam4_image_uncrop_qvga_pane

0xef01,	// (0x00062881) vid4_image_uncrop_qcif_pane

0xf05f,	// (0x000629df) cam6_image_uncrop_qvga_pane_ParamLimits

0xf05f,	// (0x000629df) cam6_image_uncrop_qvga_pane

0xd9d3,	// (0x00061353) vid6_image_uncrop_qcif_pane_ParamLimits

0xd9d3,	// (0x00061353) vid6_image_uncrop_qcif_pane

0xc074,	// (0x0005f9f4) bg_popup_preview_window_pane_cp03

0xdca5,	// (0x00061625) list_cset_text2_pane

0xdcad,	// (0x0006162d) main_cset6_text2_pane_g1

0xdcb5,	// (0x00061635) main_cset6_text2_pane_t1

0x033c,	// (0x00053cbc) list_cset_text2_pane_t1_ParamLimits

0x033c,	// (0x00053cbc) list_cset_text2_pane_t1

0xc0eb,	// (0x0005fa6b) main_radioblah_pane_ParamLimits

0xa3ff,	// (0x0005dd7f) main_mobtv_info_pane_t3_ParamLimits

0xa3ff,	// (0x0005dd7f) main_mobtv_info_pane_t3

0xa5a5,	// (0x0005df25) main_radioblah_pane_g1

0xa5df,	// (0x0005df5f) main_radioblah_info_pane_g1

0xa664,	// (0x0005dfe4) main_radioblah_info_pane_t3_ParamLimits

0xa664,	// (0x0005dfe4) main_radioblah_info_pane_t3

0x573a,	// (0x000590ba) highlight_cell_cale_month_pane_ParamLimits

0x573a,	// (0x000590ba) highlight_cell_cale_month_pane

0xc0f9,	// (0x0005fa79) main_phob_fisheye_pane

0xc91b,	// (0x0006029b) scroll_pane_cp0031_ParamLimits

0xc91b,	// (0x0006029b) scroll_pane_cp0031

0xdae1,	// (0x00061461) wait_bar_pane_cp08_ParamLimits

0x9e89,	// (0x0005d809) cset_list_set_pane_copy1_ParamLimits

0xe1dd,	// (0x00061b5d) highlight_cell_cale_month_pane_g1

0xa6e7,	// (0x0005e067) highlight_cell_cale_month_pane_t1

0xd744,	// (0x000610c4) list_gen_pane_cp01

0xd301,	// (0x00060c81) scroll_pane_01

0xa6f5,	// (0x0005e075) list_single_double_fisheye_pane

0xa6fe,	// (0x0005e07e) list_double_fisheye_pane_g1_ParamLimits

0xa6fe,	// (0x0005e07e) list_double_fisheye_pane_g1

0xa70a,	// (0x0005e08a) list_double_fisheye_pane_g2_ParamLimits

0xa70a,	// (0x0005e08a) list_double_fisheye_pane_g2

0xa71e,	// (0x0005e09e) list_double_fisheye_pane_g3_ParamLimits

0xa71e,	// (0x0005e09e) list_double_fisheye_pane_g3

0x0004,

0xfc39,	// (0x000635b9) list_double_fisheye_pane_g_ParamLimits

0xfc39,	// (0x000635b9) list_double_fisheye_pane_g

0xa747,	// (0x0005e0c7) list_double_fisheye_pane_t1_ParamLimits

0xa747,	// (0x0005e0c7) list_double_fisheye_pane_t1

0xa762,	// (0x0005e0e2) list_double_fisheye_pane_t2_ParamLimits

0xa762,	// (0x0005e0e2) list_double_fisheye_pane_t2

0x0001,

0xfc44,	// (0x000635c4) list_double_fisheye_pane_t_ParamLimits

0xfc44,	// (0x000635c4) list_double_fisheye_pane_t

0xc0f9,	// (0x0005fa79) main_call5_pane

0xa4f6,	// (0x0005de76) sc_swipe_pane_ParamLimits

0xa4f6,	// (0x0005de76) sc_swipe_pane

0xa797,	// (0x0005e117) call5_image_pane_ParamLimits

0xa797,	// (0x0005e117) call5_image_pane

0xa7b4,	// (0x0005e134) call5_swipe_1_pane_ParamLimits

0xa7b4,	// (0x0005e134) call5_swipe_1_pane

0xa7c7,	// (0x0005e147) call5_swipe_2_pane_ParamLimits

0xa7c7,	// (0x0005e147) call5_swipe_2_pane

0xa7f2,	// (0x0005e172) popup_call5_audio_first_window_ParamLimits

0xa7f2,	// (0x0005e172) popup_call5_audio_first_window

0x0a74,	// (0x000543f4) call5_swipe_1_pane_g1_ParamLimits

0x0a74,	// (0x000543f4) call5_swipe_1_pane_g1

0xe1e5,	// (0x00061b65) call5_swipe_1_pane_g2_ParamLimits

0xe1e5,	// (0x00061b65) call5_swipe_1_pane_g2

0x0001,

0xfc49,	// (0x000635c9) call5_swipe_1_pane_g_ParamLimits

0xfc49,	// (0x000635c9) call5_swipe_1_pane_g

0xe1f1,	// (0x00061b71) call5_swipe_1_pane_t1_ParamLimits

0xe1f1,	// (0x00061b71) call5_swipe_1_pane_t1

0x0a74,	// (0x000543f4) call5_swipe_2_pane_g1_ParamLimits

0x0a74,	// (0x000543f4) call5_swipe_2_pane_g1

0xe206,	// (0x00061b86) call5_swipe_2_pane_g2_ParamLimits

0xe206,	// (0x00061b86) call5_swipe_2_pane_g2

0x0001,

0xfc4e,	// (0x000635ce) call5_swipe_2_pane_g_ParamLimits

0xfc4e,	// (0x000635ce) call5_swipe_2_pane_g

0xe212,	// (0x00061b92) call5_swipe_2_pane_t1_ParamLimits

0xe212,	// (0x00061b92) call5_swipe_2_pane_t1

0xe227,	// (0x00061ba7) sc_swipe_pane_g1_ParamLimits

0xe227,	// (0x00061ba7) sc_swipe_pane_g1

0xe234,	// (0x00061bb4) sc_swipe_pane_g2_ParamLimits

0xe234,	// (0x00061bb4) sc_swipe_pane_g2

0x0001,

0xfc53,	// (0x000635d3) sc_swipe_pane_g_ParamLimits

0xfc53,	// (0x000635d3) sc_swipe_pane_g

0xe240,	// (0x00061bc0) sc_swipe_pane_t1_ParamLimits

0xe240,	// (0x00061bc0) sc_swipe_pane_t1

0xc0f9,	// (0x0005fa79) main_cmail_launcher_pane

0xa803,	// (0x0005e183) aid_size_cell_cmail_l_ParamLimits

0xa803,	// (0x0005e183) aid_size_cell_cmail_l

0xa811,	// (0x0005e191) grid_cmail_l_pane_ParamLimits

0xa811,	// (0x0005e191) grid_cmail_l_pane

0xa82b,	// (0x0005e1ab) cell_cmail_l_pane_ParamLimits

0xa82b,	// (0x0005e1ab) cell_cmail_l_pane

0xe255,	// (0x00061bd5) cell_cmail_l_pane_g1_ParamLimits

0xe255,	// (0x00061bd5) cell_cmail_l_pane_g1

0xe261,	// (0x00061be1) cell_cmail_l_pane_t1_ParamLimits

0xe261,	// (0x00061be1) cell_cmail_l_pane_t1

0xe277,	// (0x00061bf7) cell_cmail_l_pane_t2_ParamLimits

0xe277,	// (0x00061bf7) cell_cmail_l_pane_t2

0x0001,

0xfc58,	// (0x000635d8) cell_cmail_l_pane_t_ParamLimits

0xfc58,	// (0x000635d8) cell_cmail_l_pane_t

0x0a1b,	// (0x0005439b) grid_highlight_pane_cp018_ParamLimits

0x0a1b,	// (0x0005439b) grid_highlight_pane_cp018

0x3d50,	// (0x000576d0) main2_pane_ParamLimits

0x3d50,	// (0x000576d0) main2_pane

0x0b75,	// (0x000544f5) popup_sp_fs_action_menu_bg_pane_g1

0x0b7d,	// (0x000544fd) popup_sp_fs_action_menu_bg_pane_g2

0x0b85,	// (0x00054505) popup_sp_fs_action_menu_bg_pane_g3

0x0b8d,	// (0x0005450d) popup_sp_fs_action_menu_bg_pane_g4

0x0b95,	// (0x00054515) popup_sp_fs_action_menu_bg_pane_g5

0x0b9d,	// (0x0005451d) popup_sp_fs_action_menu_bg_pane_g6

0x0ba5,	// (0x00054525) popup_sp_fs_action_menu_bg_pane_g7

0x0bad,	// (0x0005452d) popup_sp_fs_action_menu_bg_pane_g8

0x0bb5,	// (0x00054535) popup_sp_fs_action_menu_bg_pane_g9

0x0bbd,	// (0x0005453d) popup_sp_fs_action_menu_bg_pane_g10

0x0bbd,	// (0x0005453d) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x00062ac5) popup_sp_fs_action_menu_bg_pane_g

0x0a74,	// (0x000543f4) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x2_t3_g3_g1

0x0a74,	// (0x000543f4) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x2_t3_g3_g2

0x0a74,	// (0x000543f4) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x00062b73) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x00062b73) list_medium_line_x2_t3_g3_g

0x0ce8,	// (0x00054668) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x2_t3_g3_t1

0x0ce8,	// (0x00054668) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x2_t3_g3_t2

0x0ce8,	// (0x00054668) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x00062b7a) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x00062b7a) list_medium_line_x2_t3_g3_t

0x0a74,	// (0x000543f4) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x2_t3_g2_g1

0x0a74,	// (0x000543f4) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x00062b81) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x00062b81) list_medium_line_x2_t3_g2_g

0x0ce8,	// (0x00054668) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x2_t3_g2_t1

0x0ce8,	// (0x00054668) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x2_t3_g2_t2

0x0ce8,	// (0x00054668) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x00062b7a) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x00062b7a) list_medium_line_x2_t3_g2_t

0x0a74,	// (0x000543f4) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x2_t4_g4_g1

0x0a74,	// (0x000543f4) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x2_t4_g4_g2

0x0a74,	// (0x000543f4) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x2_t4_g4_g3

0x0a74,	// (0x000543f4) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x00062b86) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x00062b86) list_medium_line_x2_t4_g4_g

0x0ce8,	// (0x00054668) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x2_t4_g4_t1

0x0ce8,	// (0x00054668) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x2_t4_g4_t2

0x0ce8,	// (0x00054668) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x2_t4_g4_t3

0x0ce8,	// (0x00054668) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x00062b8f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x00062b8f) list_medium_line_x2_t4_g4_t

0x0a74,	// (0x000543f4) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x2_t2_g4_g1

0x0a74,	// (0x000543f4) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x2_t2_g4_g2

0x0a74,	// (0x000543f4) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x2_t2_g4_g3

0x0a74,	// (0x000543f4) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x00062b86) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x00062b86) list_medium_line_x2_t2_g4_g

0x0ce8,	// (0x00054668) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x2_t2_g4_t1

0x0ce8,	// (0x00054668) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1d6,	// (0x00062b56) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1d6,	// (0x00062b56) list_medium_line_x2_t2_g4_t

0x0a74,	// (0x000543f4) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x2_t2_g3_g1

0x0a74,	// (0x000543f4) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x2_t2_g3_g2

0x0a74,	// (0x000543f4) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x00062b73) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x00062b73) list_medium_line_x2_t2_g3_g

0x0ce8,	// (0x00054668) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x2_t2_g3_t1

0x0ce8,	// (0x00054668) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1d6,	// (0x00062b56) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1d6,	// (0x00062b56) list_medium_line_x2_t2_g3_t

0x589f,	// (0x0005921f) main_sp_fs_list_pane_ParamLimits

0x589f,	// (0x0005921f) main_sp_fs_list_pane

0x2d25,	// (0x000566a5) sp_fs_scroll_pane_ParamLimits

0x2d25,	// (0x000566a5) sp_fs_scroll_pane

0x1209,	// (0x00054b89) list_medium_line_x2_t3_t1

0x1209,	// (0x00054b89) list_medium_line_x2_t3_t2

0x1209,	// (0x00054b89) list_medium_line_x2_t3_t3

0x0002,

0xf2bc,	// (0x00062c3c) list_medium_line_x2_t3_t

0x1209,	// (0x00054b89) list_medium_line_x3_t4_t1

0x1209,	// (0x00054b89) list_medium_line_x3_t4_t2

0x1209,	// (0x00054b89) list_medium_line_x3_t4_t3

0x1209,	// (0x00054b89) list_medium_line_x3_t4_t4

0x0003,

0xf2c3,	// (0x00062c43) list_medium_line_x3_t4_t

0x1209,	// (0x00054b89) list_medium_line_x4_t5_t1

0x1209,	// (0x00054b89) list_medium_line_x4_t5_t2

0x1209,	// (0x00054b89) list_medium_line_x4_t5_t3

0x1209,	// (0x00054b89) list_medium_line_x4_t5_t4

0x1209,	// (0x00054b89) list_medium_line_x4_t5_t5

0x0004,

0xf2cc,	// (0x00062c4c) list_medium_line_x4_t5_t

0x0a74,	// (0x000543f4) list_medium_line_t4_g4_g1_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_t4_g4_g1

0x0a74,	// (0x000543f4) list_medium_line_t4_g4_g2_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_t4_g4_g2

0x0a74,	// (0x000543f4) list_medium_line_t4_g4_g3_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_t4_g4_g3

0x0a74,	// (0x000543f4) list_medium_line_t4_g4_g4_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x00062b86) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x00062b86) list_medium_line_t4_g4_g

0x0ce8,	// (0x00054668) list_medium_line_t4_g4_t1_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_t4_g4_t1

0x0ce8,	// (0x00054668) list_medium_line_t4_g4_t2_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_t4_g4_t2

0x0ce8,	// (0x00054668) list_medium_line_t4_g4_t3_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_t4_g4_t3

0x0ce8,	// (0x00054668) list_medium_line_t4_g4_t4_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x00062b8f) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x00062b8f) list_medium_line_t4_g4_t

0x594a,	// (0x000592ca) chi_dic_find_pane_g1

0x684a,	// (0x0005a1ca) main_tport_pane

0x1209,	// (0x00054b89) list_medium_line_plain_t1

0x0a74,	// (0x000543f4) list_medium_line_t2_g2_g1_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_t2_g2_g1

0x0a74,	// (0x000543f4) list_medium_line_t2_g2_g2_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x00062b81) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x00062b81) list_medium_line_t2_g2_g

0x0ce8,	// (0x00054668) list_medium_line_t2_g2_t1_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_t2_g2_t1

0x0ce8,	// (0x00054668) list_medium_line_t2_g2_t2_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_t2_g2_t2

0x0001,

0xf1d6,	// (0x00062b56) list_medium_line_t2_g2_t_ParamLimits

0xf1d6,	// (0x00062b56) list_medium_line_t2_g2_t

0xd74d,	// (0x000610cd) aid_sp_fs_list_icon_a_sm

0xd755,	// (0x000610d5) aid_sp_fs_list_icon_d

0xd75d,	// (0x000610dd) aid_sp_fs_text_primary

0xd766,	// (0x000610e6) aid_sp_fs_text_secondary

0xc074,	// (0x0005f9f4) list_medium_line

0xc074,	// (0x0005f9f4) list_medium_line_g2

0xc074,	// (0x0005f9f4) list_medium_line_g3

0xc074,	// (0x0005f9f4) list_medium_line_plain

0xc074,	// (0x0005f9f4) list_medium_line_plain_t2

0xc074,	// (0x0005f9f4) list_medium_line_plain_t3

0xc074,	// (0x0005f9f4) list_medium_line_right_icon

0xc074,	// (0x0005f9f4) list_medium_line_right_iconx2

0xc074,	// (0x0005f9f4) list_medium_line_t2

0xc074,	// (0x0005f9f4) list_medium_line_t2_g2

0xc074,	// (0x0005f9f4) list_medium_line_t2_g3

0xc074,	// (0x0005f9f4) list_medium_line_t2_right_icon

0xc074,	// (0x0005f9f4) list_medium_line_t2_right_iconx2

0xc074,	// (0x0005f9f4) list_medium_line_t3

0xc074,	// (0x0005f9f4) list_medium_line_t3_g2

0xc074,	// (0x0005f9f4) list_medium_line_t3_g3

0xc074,	// (0x0005f9f4) list_medium_line_t3_right_iconx2

0xc074,	// (0x0005f9f4) list_medium_line_t4_g4

0xc074,	// (0x0005f9f4) list_medium_line_x2

0xc074,	// (0x0005f9f4) list_medium_line_x2_t2_g2

0xc074,	// (0x0005f9f4) list_medium_line_x2_t2_g3

0xc074,	// (0x0005f9f4) list_medium_line_x2_t2_g4

0xc074,	// (0x0005f9f4) list_medium_line_x2_t3

0xc074,	// (0x0005f9f4) list_medium_line_x2_t3_g2

0xc074,	// (0x0005f9f4) list_medium_line_x2_t3_g3

0xc074,	// (0x0005f9f4) list_medium_line_x2_t3_g4

0xc074,	// (0x0005f9f4) list_medium_line_x2_t4_g2

0xc074,	// (0x0005f9f4) list_medium_line_x2_t4_g4

0xc074,	// (0x0005f9f4) list_medium_line_x3

0xc074,	// (0x0005f9f4) list_medium_line_x3_t4

0xc074,	// (0x0005f9f4) list_medium_line_x3_t4_g4

0xc074,	// (0x0005f9f4) list_medium_line_x4_t4

0xc074,	// (0x0005f9f4) list_medium_line_x4_t4_g7

0xc074,	// (0x0005f9f4) list_medium_line_x4_t5

0x991b,	// (0x0005d29b) list_single_fs_dyc_pane_ParamLimits

0x991b,	// (0x0005d29b) list_single_fs_dyc_pane

0x0a74,	// (0x000543f4) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x4_t4_g7_g1

0x0a74,	// (0x000543f4) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x4_t4_g7_g2

0x0a74,	// (0x000543f4) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x4_t4_g7_g3

0x0a74,	// (0x000543f4) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x4_t4_g7_g4

0x0a74,	// (0x000543f4) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x4_t4_g7_g5

0x0a74,	// (0x000543f4) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x4_t4_g7_g6

0x0a82,	// (0x00054402) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0a82,	// (0x00054402) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb60,	// (0x000634e0) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb60,	// (0x000634e0) list_medium_line_x4_t4_g7_g

0x0ce8,	// (0x00054668) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x4_t4_g7_t1

0x0ce8,	// (0x00054668) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x4_t4_g7_t2

0x0ce8,	// (0x00054668) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x4_t4_g7_t3

0x0ca0,	// (0x00054620) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0ca0,	// (0x00054620) list_medium_line_x4_t4_g7_t4

0x0ca0,	// (0x00054620) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0ca0,	// (0x00054620) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb6f,	// (0x000634ef) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb6f,	// (0x000634ef) list_medium_line_x4_t4_g7_t

0xa077,	// (0x0005d9f7) list_single_dyc_row_pane_ParamLimits

0xa077,	// (0x0005d9f7) list_single_dyc_row_pane

0xa784,	// (0x0005e104) call5_gesture_pane_ParamLimits

0xa784,	// (0x0005e104) call5_gesture_pane

0xa7da,	// (0x0005e15a) call5_windows_pane_ParamLimits

0xa7da,	// (0x0005e15a) call5_windows_pane

0xa845,	// (0x0005e1c5) call5_swipe_1_pane_cp_ParamLimits

0xa845,	// (0x0005e1c5) call5_swipe_1_pane_cp

0xa851,	// (0x0005e1d1) call5_swipe_2_pane_cp_ParamLimits

0xa851,	// (0x0005e1d1) call5_swipe_2_pane_cp

0x0c98,	// (0x00054618) call5_image_pane_cp

0xa85d,	// (0x0005e1dd) popup_call5_audio_first_window_cp_ParamLimits

0xa85d,	// (0x0005e1dd) popup_call5_audio_first_window_cp

0xe227,	// (0x00061ba7) call5_swipe_1_pane_g1_cp_ParamLimits

0xe227,	// (0x00061ba7) call5_swipe_1_pane_g1_cp

0xe294,	// (0x00061c14) call5_swipe_1_pane_g2_cp

0xe240,	// (0x00061bc0) call5_swipe_1_pane_t1_cp_ParamLimits

0xe240,	// (0x00061bc0) call5_swipe_1_pane_t1_cp

0xe227,	// (0x00061ba7) call5_swipe_2_pane_g1_cp_ParamLimits

0xe227,	// (0x00061ba7) call5_swipe_2_pane_g1_cp

0xe29c,	// (0x00061c1c) call5_swipe_2_pane_g2_cp

0xe2a4,	// (0x00061c24) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2a4,	// (0x00061c24) call5_swipe_2_pane_t1_cp

0x0a1b,	// (0x0005439b) main_sp_fs_email_pane

0xe2b9,	// (0x00061c39) main_sp_fs_listscroll_pane_te

0xa86b,	// (0x0005e1eb) popup_sp_fs_action_menu_pane_ParamLimits

0xa86b,	// (0x0005e1eb) popup_sp_fs_action_menu_pane

0x0cce,	// (0x0005464e) bg_sp_fs_ctrlbar_pane_g1

0xe2c2,	// (0x00061c42) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2cb,	// (0x00061c4b) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2a03,	// (0x00056383) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0cce,	// (0x0005464e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc5d,	// (0x000635dd) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x1792,	// (0x00055112) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x1792,	// (0x00055112) bg_sp_fs_ctrlbar_ddmenu_pane

0xe2d4,	// (0x00061c54) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe2d4,	// (0x00061c54) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2e0,	// (0x00061c60) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe2e0,	// (0x00061c60) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc66,	// (0x000635e6) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc66,	// (0x000635e6) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe2ec,	// (0x00061c6c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe2ec,	// (0x00061c6c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0cce,	// (0x0005464e) list_medium_line_t2_right_icon_g1

0x1209,	// (0x00054b89) list_medium_line_t2_right_icon_t1

0x1209,	// (0x00054b89) list_medium_line_t2_right_icon_t2

0x0001,

0xfc6b,	// (0x000635eb) list_medium_line_t2_right_icon_t

0x2a2e,	// (0x000563ae) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2a2e,	// (0x000563ae) bg_sp_fs_ctrlbar_pane

0xa8f5,	// (0x0005e275) main_sp_fs_ctrlbar_button_pane_cp01

0xa8ff,	// (0x0005e27f) main_sp_fs_ctrlbar_ddmenu_pane

0xe33e,	// (0x00061cbe) main_sp_fs_ctrlbar_pane_g1

0xe34a,	// (0x00061cca) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc70,	// (0x000635f0) main_sp_fs_ctrlbar_pane_g

0xa93d,	// (0x0005e2bd) main_sp_fs_ctrlbar_pane_t1

0xa97c,	// (0x0005e2fc) main_sp_fs_ctrlbar_pane

0xa9a0,	// (0x0005e320) main_sp_fs_listscroll_pane_te_cp01

0xa9c0,	// (0x0005e340) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xa9c0,	// (0x0005e340) popup_sp_fs_action_menu_pane_cp01

0x0a1b,	// (0x0005439b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0a1b,	// (0x0005439b) bg_sp_fs_highlight_list_pane_cp01

0xe371,	// (0x00061cf1) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe371,	// (0x00061cf1) sp_fs_action_menu_list_gene_pane_g1

0xe380,	// (0x00061d00) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe380,	// (0x00061d00) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc7e,	// (0x000635fe) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc7e,	// (0x000635fe) sp_fs_action_menu_list_gene_pane_g

0xe38d,	// (0x00061d0d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe38d,	// (0x00061d0d) sp_fs_action_menu_list_gene_pane_t1

0xe3a5,	// (0x00061d25) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe3a5,	// (0x00061d25) sp_fs_action_menu_list_gene_pane

0xe3c4,	// (0x00061d44) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe3c4,	// (0x00061d44) popup_sp_fs_action_menu_bg_pane

0xe3d2,	// (0x00061d52) sp_fs_action_menu_list_pane_ParamLimits

0xe3d2,	// (0x00061d52) sp_fs_action_menu_list_pane

0xa9e5,	// (0x0005e365) sp_fs_scroll_pane_cp01_ParamLimits

0xa9e5,	// (0x0005e365) sp_fs_scroll_pane_cp01

0x1209,	// (0x00054b89) list_medium_line_plain_t2_t1

0x1209,	// (0x00054b89) list_medium_line_plain_t2_t2

0x0001,

0xfc6b,	// (0x000635eb) list_medium_line_plain_t2_t

0x1209,	// (0x00054b89) list_medium_line_plain_t3_t1

0x1209,	// (0x00054b89) list_medium_line_plain_t3_t2

0x1209,	// (0x00054b89) list_medium_line_plain_t3_t3

0x0002,

0xf2bc,	// (0x00062c3c) list_medium_line_plain_t3_t

0x0a74,	// (0x000543f4) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x2_t2_g2_g1

0x0a74,	// (0x000543f4) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x00062b81) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x00062b81) list_medium_line_x2_t2_g2_g

0x0ce8,	// (0x00054668) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x2_t2_g2_t1

0x0ce8,	// (0x00054668) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1d6,	// (0x00062b56) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1d6,	// (0x00062b56) list_medium_line_x2_t2_g2_t

0x0a74,	// (0x000543f4) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x2_t4_g2_g1

0x0a74,	// (0x000543f4) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x00062b81) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x00062b81) list_medium_line_x2_t4_g2_g

0x0ce8,	// (0x00054668) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x2_t4_g2_t1

0x0ce8,	// (0x00054668) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x2_t4_g2_t2

0x0ce8,	// (0x00054668) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x2_t4_g2_t3

0x0ce8,	// (0x00054668) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x00062b8f) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x00062b8f) list_medium_line_x2_t4_g2_t

0x0cce,	// (0x0005464e) list_medium_line_t3_right_iconx2_g1

0x0cce,	// (0x0005464e) list_medium_line_t3_right_iconx2_g2

0x0cce,	// (0x0005464e) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3dd,	// (0x00062d5d) list_medium_line_t3_right_iconx2_g

0x1209,	// (0x00054b89) list_medium_line_t3_right_iconx2_t1

0x1209,	// (0x00054b89) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc6b,	// (0x000635eb) list_medium_line_t3_right_iconx2_t

0x0a74,	// (0x000543f4) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x3_t4_g4_g1

0x0a74,	// (0x000543f4) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x3_t4_g4_g2

0x0a74,	// (0x000543f4) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x3_t4_g4_g3

0x0a74,	// (0x000543f4) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x00062b86) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x00062b86) list_medium_line_x3_t4_g4_g

0x0ce8,	// (0x00054668) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x3_t4_g4_t1

0x0ce8,	// (0x00054668) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x3_t4_g4_t2

0x0ce8,	// (0x00054668) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x3_t4_g4_t3

0x0ce8,	// (0x00054668) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x00062b8f) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x00062b8f) list_medium_line_x3_t4_g4_t

0xaa0b,	// (0x0005e38b) list_single_dyc_row_text_pane_t1_ParamLimits

0xaa0b,	// (0x0005e38b) list_single_dyc_row_text_pane_t1

0xaa54,	// (0x0005e3d4) list_single_dyc_row_text_pane_t2_ParamLimits

0xaa54,	// (0x0005e3d4) list_single_dyc_row_text_pane_t2

0xe3f2,	// (0x00061d72) list_single_dyc_row_text_pane_t3_ParamLimits

0xe3f2,	// (0x00061d72) list_single_dyc_row_text_pane_t3

0x0005,

0xfc83,	// (0x00063603) list_single_dyc_row_text_pane_t_ParamLimits

0xfc83,	// (0x00063603) list_single_dyc_row_text_pane_t

0xe416,	// (0x00061d96) list_single_dyc_row_pane_g1_ParamLimits

0xe416,	// (0x00061d96) list_single_dyc_row_pane_g1

0xe422,	// (0x00061da2) list_single_dyc_row_pane_g2_ParamLimits

0xe422,	// (0x00061da2) list_single_dyc_row_pane_g2

0xe42e,	// (0x00061dae) list_single_dyc_row_pane_g3_ParamLimits

0xe42e,	// (0x00061dae) list_single_dyc_row_pane_g3

0xe43a,	// (0x00061dba) list_single_dyc_row_pane_g4_ParamLimits

0xe43a,	// (0x00061dba) list_single_dyc_row_pane_g4

0x0003,

0xfc90,	// (0x00063610) list_single_dyc_row_pane_g_ParamLimits

0xfc90,	// (0x00063610) list_single_dyc_row_pane_g

0xe446,	// (0x00061dc6) list_single_dyc_row_text_pane_ParamLimits

0xe446,	// (0x00061dc6) list_single_dyc_row_text_pane

0xc074,	// (0x0005f9f4) bg_sp_fs_scroll_pane

0xe465,	// (0x00061de5) thumb_sp_fs_scroll_pane

0x0a74,	// (0x000543f4) list_medium_line_g1_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_g1

0x0ce8,	// (0x00054668) list_medium_line_t1_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_t1

0x0a74,	// (0x000543f4) list_medium_line_x2_g1_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x2_g1

0x0a74,	// (0x000543f4) list_medium_line_x2_g2_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x00062b81) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x00062b81) list_medium_line_x2_g

0x0ce8,	// (0x00054668) list_medium_line_x2_t1_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x2_t1

0x0a74,	// (0x000543f4) list_medium_line_x3_g1_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x3_g1

0xd17b,	// (0x00060afb) list_medium_line_x3_g2_ParamLimits

0xd17b,	// (0x00060afb) list_medium_line_x3_g2

0x0001,

0xfc99,	// (0x00063619) list_medium_line_x3_g_ParamLimits

0xfc99,	// (0x00063619) list_medium_line_x3_g

0xe46e,	// (0x00061dee) list_medium_line_x3_t1_ParamLimits

0xe46e,	// (0x00061dee) list_medium_line_x3_t1

0xe482,	// (0x00061e02) thumb_sp_fs_scroll_pane_g1

0xe48b,	// (0x00061e0b) thumb_sp_fs_scroll_pane_g2

0xe494,	// (0x00061e14) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc9e,	// (0x0006361e) thumb_sp_fs_scroll_pane_g

0xe482,	// (0x00061e02) bg_sp_fs_scroll_pane_g1

0xe48b,	// (0x00061e0b) bg_sp_fs_scroll_pane_g2

0xe494,	// (0x00061e14) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc9e,	// (0x0006361e) bg_sp_fs_scroll_pane_g

0x0a74,	// (0x000543f4) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x2_t3_g4_g1

0x0a74,	// (0x000543f4) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x2_t3_g4_g2

0x0a74,	// (0x000543f4) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x2_t3_g4_g3

0x0a74,	// (0x000543f4) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x00062b86) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x00062b86) list_medium_line_x2_t3_g4_g

0x0ce8,	// (0x00054668) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x2_t3_g4_t1

0x0ce8,	// (0x00054668) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x2_t3_g4_t2

0x0ce8,	// (0x00054668) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x00062b7a) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x00062b7a) list_medium_line_x2_t3_g4_t

0x0a74,	// (0x000543f4) list_medium_line_g2_g1_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_g2_g1

0x0a74,	// (0x000543f4) list_medium_line_g2_g2_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x00062b81) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x00062b81) list_medium_line_g2_g

0x0ce8,	// (0x00054668) list_medium_line_g2_t1_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_g2_t1

0x0a74,	// (0x000543f4) list_medium_line_t3_g2_g1_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_t3_g2_g1

0x0a74,	// (0x000543f4) list_medium_line_t3_g2_g2_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x00062b81) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x00062b81) list_medium_line_t3_g2_g

0x0ce8,	// (0x00054668) list_medium_line_t3_g2_t1_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_t3_g2_t1

0x0ce8,	// (0x00054668) list_medium_line_t3_g2_t2_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_t3_g2_t2

0x0ce8,	// (0x00054668) list_medium_line_t3_g2_t3_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x00062b7a) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x00062b7a) list_medium_line_t3_g2_t

0x0cce,	// (0x0005464e) list_medium_line_right_icon_g1

0x1209,	// (0x00054b89) list_medium_line_right_icon_t1

0x0a74,	// (0x000543f4) list_medium_line_t2_g1_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_t2_g1

0x0ce8,	// (0x00054668) list_medium_line_t2_t1_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_t2_t1

0x0ce8,	// (0x00054668) list_medium_line_t2_t2_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_t2_t2

0x0001,

0xf1d6,	// (0x00062b56) list_medium_line_t2_t_ParamLimits

0xf1d6,	// (0x00062b56) list_medium_line_t2_t

0x0a74,	// (0x000543f4) list_medium_line_t3_g1_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_t3_g1

0x0ce8,	// (0x00054668) list_medium_line_t3_t1_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_t3_t1

0x0ce8,	// (0x00054668) list_medium_line_t3_t2_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_t3_t2

0x0ce8,	// (0x00054668) list_medium_line_t3_t3_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x00062b7a) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x00062b7a) list_medium_line_t3_t

0x0a74,	// (0x000543f4) list_medium_line_g3_g1_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_g3_g1

0x0a74,	// (0x000543f4) list_medium_line_g3_g2_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_g3_g2

0x0a74,	// (0x000543f4) list_medium_line_g3_g3_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x00062b73) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x00062b73) list_medium_line_g3_g

0x0ce8,	// (0x00054668) list_medium_line_g3_t1_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_g3_t1

0x0a74,	// (0x000543f4) list_medium_line_t2_g3_g1_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_t2_g3_g1

0x0a74,	// (0x000543f4) list_medium_line_t2_g3_g2_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_t2_g3_g2

0x0a74,	// (0x000543f4) list_medium_line_t2_g3_g3_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x00062b73) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x00062b73) list_medium_line_t2_g3_g

0x0ce8,	// (0x00054668) list_medium_line_t2_g3_t1_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_t2_g3_t1

0x0ce8,	// (0x00054668) list_medium_line_t2_g3_t2_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_t2_g3_t2

0x0001,

0xf1d6,	// (0x00062b56) list_medium_line_t2_g3_t_ParamLimits

0xf1d6,	// (0x00062b56) list_medium_line_t2_g3_t

0x0a74,	// (0x000543f4) list_medium_line_t3_g3_g1_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_t3_g3_g1

0x0a74,	// (0x000543f4) list_medium_line_t3_g3_g2_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_t3_g3_g2

0x0a74,	// (0x000543f4) list_medium_line_t3_g3_g3_ParamLimits

0x0a74,	// (0x000543f4) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x00062b73) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x00062b73) list_medium_line_t3_g3_g

0x0ce8,	// (0x00054668) list_medium_line_t3_g3_t1_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_t3_g3_t1

0x0ce8,	// (0x00054668) list_medium_line_t3_g3_t2_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_t3_g3_t2

0x0ce8,	// (0x00054668) list_medium_line_t3_g3_t3_ParamLimits

0x0ce8,	// (0x00054668) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x00062b7a) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x00062b7a) list_medium_line_t3_g3_t

0x0cce,	// (0x0005464e) list_medium_line_right_iconx2_g1

0x0cce,	// (0x0005464e) list_medium_line_right_iconx2_g2

0x0001,

0xf3d8,	// (0x00062d58) list_medium_line_right_iconx2_g

0x1209,	// (0x00054b89) list_medium_line_right_iconx2_t1

0x0cce,	// (0x0005464e) list_medium_line_t2_right_iconx2_g1

0x0cce,	// (0x0005464e) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3d8,	// (0x00062d58) list_medium_line_t2_right_iconx2_g

0x1209,	// (0x00054b89) list_medium_line_t2_right_iconx2_t1

0x1209,	// (0x00054b89) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc6b,	// (0x000635eb) list_medium_line_t2_right_iconx2_t

0x1209,	// (0x00054b89) list_medium_line_x4_t4_t1

0x1209,	// (0x00054b89) list_medium_line_x4_t4_t2

0x1209,	// (0x00054b89) list_medium_line_x4_t4_t3

0x1209,	// (0x00054b89) list_medium_line_x4_t4_t4

0x0003,

0xf2c3,	// (0x00062c43) list_medium_line_x4_t4_t

0xabcc,	// (0x0005e54c) tport_appsw_pane_ParamLimits

0xabcc,	// (0x0005e54c) tport_appsw_pane

0xabe4,	// (0x0005e564) tport_contact_pane_ParamLimits

0xabe4,	// (0x0005e564) tport_contact_pane

0xabfc,	// (0x0005e57c) tport_listscroll_pane_ParamLimits

0xabfc,	// (0x0005e57c) tport_listscroll_pane

0xac16,	// (0x0005e596) cell_tport_appsw_pane_ParamLimits

0xac16,	// (0x0005e596) cell_tport_appsw_pane

0x2ce8,	// (0x00056668) tport_appsw_pane_g1_ParamLimits

0x2ce8,	// (0x00056668) tport_appsw_pane_g1

0xe49d,	// (0x00061e1d) tport_contact_pane_g1

0xe4a6,	// (0x00061e26) tport_contact_pane_t1

0xe4b4,	// (0x00061e34) tport_contact_pane_t2

0x0001,

0xfca5,	// (0x00063625) tport_contact_pane_t

0xe4c2,	// (0x00061e42) list_tport_pane

0xe4cb,	// (0x00061e4b) scroll_pane_cp_030

0xac5e,	// (0x0005e5de) cell_tport_appsw_pane_g1

0xac6e,	// (0x0005e5ee) cell_tport_appsw_pane_t1

0xac7c,	// (0x0005e5fc) grid_highlight_pane_cp019

0xac84,	// (0x0005e604) list_tport_double_graphic_pane_ParamLimits

0xac84,	// (0x0005e604) list_tport_double_graphic_pane

0x0a1b,	// (0x0005439b) list_highlight_pane_cp023_ParamLimits

0x0a1b,	// (0x0005439b) list_highlight_pane_cp023

0xac91,	// (0x0005e611) list_tport_double_graphic_pane_g1_ParamLimits

0xac91,	// (0x0005e611) list_tport_double_graphic_pane_g1

0xac9e,	// (0x0005e61e) list_tport_double_graphic_pane_t1_ParamLimits

0xac9e,	// (0x0005e61e) list_tport_double_graphic_pane_t1

0xacb3,	// (0x0005e633) list_tport_double_graphic_pane_t2_ParamLimits

0xacb3,	// (0x0005e633) list_tport_double_graphic_pane_t2

0x0001,

0xfcb1,	// (0x00063631) list_tport_double_graphic_pane_t_ParamLimits

0xfcb1,	// (0x00063631) list_tport_double_graphic_pane_t

0xc074,	// (0x0005f9f4) main_cale_note_pane

0x8a75,	// (0x0005c3f5) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8a75,	// (0x0005c3f5) cell_vitu2_function_top_wide_pane_cp01

0xa413,	// (0x0005dd93) wait_bar_pane_cp05_ParamLimits

0x0a1b,	// (0x0005439b) listscroll_cmail_pane

0xe4d4,	// (0x00061e54) list_cmail_pane

0xacc5,	// (0x0005e645) list_cmail_body_pane

0xacdb,	// (0x0005e65b) list_single_cmail_header_caption_pane

0xacf2,	// (0x0005e672) list_single_cmail_header_detail_pane_ParamLimits

0xacf2,	// (0x0005e672) list_single_cmail_header_detail_pane

0xe4e4,	// (0x00061e64) list_single_cmail_header_caption_pane_t1

0xad1c,	// (0x0005e69c) list_single_cmail_header_detail_pane_g1_ParamLimits

0xad1c,	// (0x0005e69c) list_single_cmail_header_detail_pane_g1

0xe4fb,	// (0x00061e7b) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe4fb,	// (0x00061e7b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcb6,	// (0x00063636) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcb6,	// (0x00063636) list_single_cmail_header_detail_pane_g

0xe514,	// (0x00061e94) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe514,	// (0x00061e94) list_single_cmail_header_detail_pane_t1

0xe574,	// (0x00061ef4) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe574,	// (0x00061ef4) list_single_cmail_header_editor_pane_bg

0xded5,	// (0x00061855) list_cmail_body_pane_g1

0xe58b,	// (0x00061f0b) list_cmail_body_pane_t1

0xd1e7,	// (0x00060b67) list_single_cmail_header_editor_pane_bg_g1

0x0ef3,	// (0x00054873) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1f7,	// (0x00060b77) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1ef,	// (0x00060b6f) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd42d,	// (0x00060dad) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd217,	// (0x00060b97) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd207,	// (0x00060b87) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd20f,	// (0x00060b8f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0ed3,	// (0x00054853) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xad34,	// (0x0005e6b4) calenote_gesture_pane_ParamLimits

0xad34,	// (0x0005e6b4) calenote_gesture_pane

0xad54,	// (0x0005e6d4) calenote_window_pane_ParamLimits

0xad54,	// (0x0005e6d4) calenote_window_pane

0xe599,	// (0x00061f19) popup_note_window_cp01

0xad70,	// (0x0005e6f0) calenote_swipe_1_pane_ParamLimits

0xad70,	// (0x0005e6f0) calenote_swipe_1_pane

0xa851,	// (0x0005e1d1) calenote_swipe_2_pane_ParamLimits

0xa851,	// (0x0005e1d1) calenote_swipe_2_pane

0xe227,	// (0x00061ba7) calenote_swipe_1_pane_g1_ParamLimits

0xe227,	// (0x00061ba7) calenote_swipe_1_pane_g1

0xe234,	// (0x00061bb4) calenote_swipe_1_pane_g2_ParamLimits

0xe234,	// (0x00061bb4) calenote_swipe_1_pane_g2

0x0001,

0xfc53,	// (0x000635d3) calenote_swipe_1_pane_g_ParamLimits

0xfc53,	// (0x000635d3) calenote_swipe_1_pane_g

0xe5ab,	// (0x00061f2b) calenote_swipe_1_pane_t1_ParamLimits

0xe5ab,	// (0x00061f2b) calenote_swipe_1_pane_t1

0xe227,	// (0x00061ba7) calenote_swipe_2_pane_g1_ParamLimits

0xe227,	// (0x00061ba7) calenote_swipe_2_pane_g1

0xe5ca,	// (0x00061f4a) calenote_swipe_2_pane_g2_ParamLimits

0xe5ca,	// (0x00061f4a) calenote_swipe_2_pane_g2

0x0001,

0xfcc2,	// (0x00063642) calenote_swipe_2_pane_g_ParamLimits

0xfcc2,	// (0x00063642) calenote_swipe_2_pane_g

0xe5d6,	// (0x00061f56) calenote_swipe_2_pane_t1_ParamLimits

0xe5d6,	// (0x00061f56) calenote_swipe_2_pane_t1

0xc074,	// (0x0005f9f4) main_mup_navstr_pane

0x7905,	// (0x0005b285) main_mup3_pane_t7_ParamLimits

0x7905,	// (0x0005b285) main_mup3_pane_t7

0xce84,	// (0x00060804) main_mp4_pane_g6_ParamLimits

0xce84,	// (0x00060804) main_mp4_pane_g6

0xd0d7,	// (0x00060a57) main_image3_pane_t4_ParamLimits

0xd0d7,	// (0x00060a57) main_image3_pane_t4

0xad85,	// (0x0005e705) popup_navstr_preview_pane_ParamLimits

0xad85,	// (0x0005e705) popup_navstr_preview_pane

0xad99,	// (0x0005e719) scroll_navstr_pane_ParamLimits

0xad99,	// (0x0005e719) scroll_navstr_pane

0xc074,	// (0x0005f9f4) bg_popup_preview_window_pane_cp04

0xe5fd,	// (0x00061f7d) popup_navstr_preview_pane_t1

0xadad,	// (0x0005e72d) scroll_navstr_pane_g1_ParamLimits

0xadad,	// (0x0005e72d) scroll_navstr_pane_g1

0xadc1,	// (0x0005e741) scroll_navstr_pane_t1_ParamLimits

0xadc1,	// (0x0005e741) scroll_navstr_pane_t1

0xe5a2,	// (0x00061f22) bg_button_pane_cp014

0xe5a2,	// (0x00061f22) bg_button_pane_cp030

0xa72a,	// (0x0005e0aa) list_double_fisheye_pane_g4_ParamLimits

0xa72a,	// (0x0005e0aa) list_double_fisheye_pane_g4

0xa736,	// (0x0005e0b6) list_double_fisheye_pane_g5_ParamLimits

0xa736,	// (0x0005e0b6) list_double_fisheye_pane_g5

0x2d25,	// (0x000566a5) sp_fs_scroll_pane_cp03

0xe33e,	// (0x00061cbe) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe34a,	// (0x00061cca) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc70,	// (0x000635f0) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xa93d,	// (0x0005e2bd) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe4dc,	// (0x00061e5c) sp_fs_scroll_pane_cp02

0x0be0,	// (0x00054560) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0be0,	// (0x00054560) popup_sp_fs_calendar_preview_list_single_pane

0xc074,	// (0x0005f9f4) main_cam6_pano_pane

0xc0eb,	// (0x0005fa6b) main_mup3_pane_ParamLimits

0xc074,	// (0x0005f9f4) main_phacti_pane

0xa2e6,	// (0x0005dc66) bg_button_pane_cp11

0xa300,	// (0x0005dc80) main_mobtv_info_pane_g2_ParamLimits

0xa300,	// (0x0005dc80) main_mobtv_info_pane_g2

0x0001,

0xfbd0,	// (0x00063550) main_mobtv_info_pane_g_ParamLimits

0xfbd0,	// (0x00063550) main_mobtv_info_pane_g

0xa4dd,	// (0x0005de5d) sc_clock_pane_t5_ParamLimits

0xa4dd,	// (0x0005de5d) sc_clock_pane_t5

0xa5a5,	// (0x0005df25) main_radioblah_pane_g1_ParamLimits

0xe173,	// (0x00061af3) main_radioblah_pane_t3_ParamLimits

0xe173,	// (0x00061af3) main_radioblah_pane_t3

0xe18b,	// (0x00061b0b) main_radioblah_pane_t4_ParamLimits

0xe18b,	// (0x00061b0b) main_radioblah_pane_t4

0xa5cd,	// (0x0005df4d) main_radioblah_text_pane_ParamLimits

0xa5cd,	// (0x0005df4d) main_radioblah_text_pane

0xa5df,	// (0x0005df5f) main_radioblah_info_pane_g1_ParamLimits

0xa678,	// (0x0005dff8) main_radioblah_info_pane_t4_ParamLimits

0xa678,	// (0x0005dff8) main_radioblah_info_pane_t4

0x0a1b,	// (0x0005439b) main_sp_fs_calendar_pane

0xadd8,	// (0x0005e758) main_phacti_pane_g1

0xade0,	// (0x0005e760) phacti_note_pane_ParamLimits

0xade0,	// (0x0005e760) phacti_note_pane

0xe614,	// (0x00061f94) phacti_term_pane_ParamLimits

0xe614,	// (0x00061f94) phacti_term_pane

0xe629,	// (0x00061fa9) phacti_note_pane_t1_ParamLimits

0xe629,	// (0x00061fa9) phacti_note_pane_t1

0xe640,	// (0x00061fc0) phacti_term_pane_g1

0xe648,	// (0x00061fc8) phacti_term_pane_t1_ParamLimits

0xe648,	// (0x00061fc8) phacti_term_pane_t1

0xe672,	// (0x00061ff2) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe67a,	// (0x00061ffa) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfccc,	// (0x0006364c) popup_sp_fs_calendar_preview_list_single_pane_g

0xe682,	// (0x00062002) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe682,	// (0x00062002) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe698,	// (0x00062018) aid_popup_sp_fs_bg_corner_pane

0x0cce,	// (0x0005464e) popup_sp_fs_calendar_preview_bg_pane_g1

0xc074,	// (0x0005f9f4) popup_sp_fs_calendar_preview_bg_pane

0xe6a0,	// (0x00062020) popup_sp_fs_calendar_preview_list_pane

0x2a2e,	// (0x000563ae) bg_main_sp_fs_cale_pane_ParamLimits

0x2a2e,	// (0x000563ae) bg_main_sp_fs_cale_pane

0xe6b1,	// (0x00062031) listscroll_cale_mrui_pane_ParamLimits

0xe6b1,	// (0x00062031) listscroll_cale_mrui_pane

0xe6c6,	// (0x00062046) listscroll_sp_fs_schedule_track_pane

0xe6cf,	// (0x0006204f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe6cf,	// (0x0006204f) main_sp_fs_ctrlbar_pane_cp01

0xe6e2,	// (0x00062062) main_sp_fs_ribbon_pane

0xe6ea,	// (0x0006206a) popup_sp_fs_cale_preview_window

0xae55,	// (0x0005e7d5) list_single_sp_fs_schedule_track_pane_ParamLimits

0xae55,	// (0x0005e7d5) list_single_sp_fs_schedule_track_pane

0x0a1b,	// (0x0005439b) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0a1b,	// (0x0005439b) bg_sp_fs_highlight_list_pane_cp03

0xae69,	// (0x0005e7e9) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xae69,	// (0x0005e7e9) list_single_sp_fs_schedule_track_pane_g1

0xae75,	// (0x0005e7f5) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xae75,	// (0x0005e7f5) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcd1,	// (0x00063651) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcd1,	// (0x00063651) list_single_sp_fs_schedule_track_pane_g

0xae81,	// (0x0005e801) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xae81,	// (0x0005e801) list_single_sp_fs_schedule_track_pane_t1

0xae9b,	// (0x0005e81b) sp_fs_schedule_track_pane_ParamLimits

0xae9b,	// (0x0005e81b) sp_fs_schedule_track_pane

0xe6fc,	// (0x0006207c) sp_fs_schedule_track_pane_g1

0xe704,	// (0x00062084) sp_fs_schedule_track_pane_g2

0xe70c,	// (0x0006208c) sp_fs_schedule_track_pane_g3

0xe714,	// (0x00062094) sp_fs_schedule_track_pane_g4

0xe71c,	// (0x0006209c) sp_fs_schedule_track_pane_g5

0x0004,

0xfcd6,	// (0x00063656) sp_fs_schedule_track_pane_g

0xd1e7,	// (0x00060b67) bg_sp_fs_schedule_viewer_highlight_g1

0x0ef3,	// (0x00054873) bg_sp_fs_schedule_viewer_highlight_g2

0xd1ef,	// (0x00060b6f) bg_sp_fs_schedule_viewer_highlight_g3

0xd1f7,	// (0x00060b77) bg_sp_fs_schedule_viewer_highlight_g4

0xd42d,	// (0x00060dad) bg_sp_fs_schedule_viewer_highlight_g5

0xd207,	// (0x00060b87) bg_sp_fs_schedule_viewer_highlight_g6

0xd20f,	// (0x00060b8f) bg_sp_fs_schedule_viewer_highlight_g7

0xd217,	// (0x00060b97) bg_sp_fs_schedule_viewer_highlight_g8

0x0ed3,	// (0x00054853) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfce1,	// (0x00063661) bg_sp_fs_schedule_viewer_highlight_g

0xc074,	// (0x0005f9f4) bg_main_sp_fs_ribbon_pane

0xaeac,	// (0x0005e82c) main_sp_fs_ribbon_pane_g1

0xe724,	// (0x000620a4) main_sp_fs_ribbon_pane_t1

0xaeb5,	// (0x0005e835) main_sp_fs_ribbon_pane_t2

0xe733,	// (0x000620b3) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcf4,	// (0x00063674) main_sp_fs_ribbon_pane_t

0xe742,	// (0x000620c2) main_sp_fs_ribbon_scheduler_pane

0xe74a,	// (0x000620ca) bg_main_sp_fs_ribbon_pane_g1

0xe753,	// (0x000620d3) bg_main_sp_fs_ribbon_pane_g2

0xe75c,	// (0x000620dc) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcfb,	// (0x0006367b) bg_main_sp_fs_ribbon_pane_g

0xe764,	// (0x000620e4) main_sp_fs_ribbon_scheduler_pane_g1

0xe76d,	// (0x000620ed) main_sp_fs_ribbon_scheduler_pane_g2

0xe776,	// (0x000620f6) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd02,	// (0x00063682) main_sp_fs_ribbon_scheduler_pane_g

0xe77f,	// (0x000620ff) list_cale_mrui_pane

0xaec4,	// (0x0005e844) sp_fs_scroll_pane_cp07_ParamLimits

0xaec4,	// (0x0005e844) sp_fs_scroll_pane_cp07

0xaee0,	// (0x0005e860) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xaee0,	// (0x0005e860) bg_sp_fs_schedule_viewer_highlight

0xe78c,	// (0x0006210c) list_single_sp_fs_schedule_track_pane_cp01

0xe794,	// (0x00062114) list_sp_fs_schedule_track_pane

0xe79c,	// (0x0006211c) sp_fs_scroll_pane_cp06_ParamLimits

0xe79c,	// (0x0006211c) sp_fs_scroll_pane_cp06

0x0cce,	// (0x0005464e) bgmain_sp_fs_calendar_pane_g1

0xaef0,	// (0x0005e870) list_single_cale_mrui_pane_ParamLimits

0xaef0,	// (0x0005e870) list_single_cale_mrui_pane

0xe7ae,	// (0x0006212e) list_single_cale_mrui_row_pane_ParamLimits

0xe7ae,	// (0x0006212e) list_single_cale_mrui_row_pane

0xe7bb,	// (0x0006213b) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe7bb,	// (0x0006213b) list_single_cale_mrui_row_pane_g1

0xe800,	// (0x00062180) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe800,	// (0x00062180) list_single_cale_mrui_row_pane_t1

0xaf11,	// (0x0005e891) list_single_cale_mrui_row_pane_t2_ParamLimits

0xaf11,	// (0x0005e891) list_single_cale_mrui_row_pane_t2

0xe812,	// (0x00062192) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe812,	// (0x00062192) list_single_cale_mrui_row_pane_t3

0xe841,	// (0x000621c1) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe841,	// (0x000621c1) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd10,	// (0x00063690) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd10,	// (0x00063690) list_single_cale_mrui_row_pane_t

0xaf79,	// (0x0005e8f9) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xaf79,	// (0x0005e8f9) list_single_cmail_header_editor_pane_bg_cp01

0xaf9f,	// (0x0005e91f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xaf9f,	// (0x0005e91f) list_single_cmail_header_editor_pane_bg_cp02

0xafbf,	// (0x0005e93f) main_radioblah_text_pane_t1_ParamLimits

0xafbf,	// (0x0005e93f) main_radioblah_text_pane_t1

0xe870,	// (0x000621f0) cam6_indi_pane_cp01

0xe878,	// (0x000621f8) cam6_mode_pane_cp01

0xe880,	// (0x00062200) cam6_pano_pane

0xe889,	// (0x00062209) cam6_zoom_pane_cp01

0xe891,	// (0x00062211) cam6_pano_image_pane

0xe89c,	// (0x0006221c) cam6_pano_pane_g1

0xded5,	// (0x00061855) cam6_pano_pane_g2

0xe8a5,	// (0x00062225) cam6_pano_pane_g3

0xe8ae,	// (0x0006222e) cam6_pano_pane_g4

0xcb79,	// (0x000604f9) cam6_pano_pane_g5

0xe8b7,	// (0x00062237) cam6_pano_pane_g6

0xe8c1,	// (0x00062241) cam6_pano_pane_g7

0xe8c9,	// (0x00062249) cam6_pano_pane_g8

0xe8d2,	// (0x00062252) cam6_pano_pane_g9

0x0008,

0xfd19,	// (0x00063699) cam6_pano_pane_g

0xc074,	// (0x0005f9f4) main_browser_tag_pane

0xe5f5,	// (0x00061f75) grid_navstr_albumart_pane

0xe8dd,	// (0x0006225d) cell_navstr_albumart_pane_ParamLimits

0xe8dd,	// (0x0006225d) cell_navstr_albumart_pane

0xe8fd,	// (0x0006227d) cell_navstr_albumart_pane_g1

0x288a,	// (0x0005620a) cell_navstr_albumart_pane_g2

0x289a,	// (0x0005621a) cell_navstr_albumart_pane_g3

0x2892,	// (0x00056212) cell_navstr_albumart_pane_g4

0x0003,

0xfd2c,	// (0x000636ac) cell_navstr_albumart_pane_g

0xafda,	// (0x0005e95a) bt_list_pane_ParamLimits

0xafda,	// (0x0005e95a) bt_list_pane

0xafee,	// (0x0005e96e) bt_list_pane_t1

0xaffd,	// (0x0005e97d) bt_list_pane_t2

0x0001,

0xfd35,	// (0x000636b5) bt_list_pane_t

0xc074,	// (0x0005f9f4) main_cale_prevew_pane

0xb00c,	// (0x0005e98c) popup_cale_preview_window_ParamLimits

0xb00c,	// (0x0005e98c) popup_cale_preview_window

0x0a1b,	// (0x0005439b) bg_popup_preview_window_pane_cp05_ParamLimits

0x0a1b,	// (0x0005439b) bg_popup_preview_window_pane_cp05

0xe905,	// (0x00062285) list_cale_preview_pane_ParamLimits

0xe905,	// (0x00062285) list_cale_preview_pane

0xb025,	// (0x0005e9a5) list_double_cale_preview_pane_ParamLimits

0xb025,	// (0x0005e9a5) list_double_cale_preview_pane

0xd21f,	// (0x00060b9f) list_single_cale_preview_pane_ParamLimits

0xd21f,	// (0x00060b9f) list_single_cale_preview_pane

0xb037,	// (0x0005e9b7) list_single_cale_preview_pane_g1

0xb03f,	// (0x0005e9bf) list_single_cale_preview_pane_t1_ParamLimits

0xb03f,	// (0x0005e9bf) list_single_cale_preview_pane_t1

0xb054,	// (0x0005e9d4) list_double_cale_preview_pane_g1

0xb05c,	// (0x0005e9dc) list_double_cale_preview_pane_t1_ParamLimits

0xb05c,	// (0x0005e9dc) list_double_cale_preview_pane_t1

0xb071,	// (0x0005e9f1) list_double_cale_preview_pane_t2_ParamLimits

0xb071,	// (0x0005e9f1) list_double_cale_preview_pane_t2

0x0001,

0xfd3a,	// (0x000636ba) list_double_cale_preview_pane_t_ParamLimits

0xfd3a,	// (0x000636ba) list_double_cale_preview_pane_t

0xc074,	// (0x0005f9f4) main_ezdial_pane

0x0a1b,	// (0x0005439b) main_sp_fs_email_pane_ParamLimits

0xa8ad,	// (0x0005e22d) cmail_ddmenu_btn01_pane_ParamLimits

0xa8ad,	// (0x0005e22d) cmail_ddmenu_btn01_pane

0xa8c0,	// (0x0005e240) cmail_ddmenu_btn02_pane_ParamLimits

0xa8c0,	// (0x0005e240) cmail_ddmenu_btn02_pane

0xa8e3,	// (0x0005e263) cmail_ddmenu_btn03_pane_ParamLimits

0xa8e3,	// (0x0005e263) cmail_ddmenu_btn03_pane

0xa97c,	// (0x0005e2fc) main_sp_fs_ctrlbar_pane_ParamLimits

0xa9a0,	// (0x0005e320) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xacc5,	// (0x0005e645) list_cmail_body_pane_ParamLimits

0xe4f2,	// (0x00061e72) bg_button_pane_cp12

0xe507,	// (0x00061e87) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe507,	// (0x00061e87) list_single_cmail_header_detail_pane_g3

0xe550,	// (0x00061ed0) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe550,	// (0x00061ed0) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcbd,	// (0x0006363d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcbd,	// (0x0006363d) list_single_cmail_header_detail_pane_t

0xe65d,	// (0x00061fdd) phacti_term_pane_t2_ParamLimits

0xe65d,	// (0x00061fdd) phacti_term_pane_t2

0x0001,

0xfcc7,	// (0x00063647) phacti_term_pane_t_ParamLimits

0xfcc7,	// (0x00063647) phacti_term_pane_t

0xe911,	// (0x00062291) aid_size_list_single_double

0xb089,	// (0x0005ea09) popup_ezdial_listscroll_window

0xb0a5,	// (0x0005ea25) popup_number_entry_window_cp01

0x0c98,	// (0x00054618) bg_popup_call_pane_cp09

0xe91d,	// (0x0006229d) ezdial_list_pane

0xe925,	// (0x000622a5) scroll_pane_cp23

0x2a2e,	// (0x000563ae) bg_button_pane_cp028_ParamLimits

0x2a2e,	// (0x000563ae) bg_button_pane_cp028

0xb0b3,	// (0x0005ea33) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb0b3,	// (0x0005ea33) cmail_ddmenu_btn01_pane_g1

0xb0bf,	// (0x0005ea3f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb0bf,	// (0x0005ea3f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd3f,	// (0x000636bf) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd3f,	// (0x000636bf) cmail_ddmenu_btn01_pane_g

0xe92d,	// (0x000622ad) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe92d,	// (0x000622ad) cmail_ddmenu_btn01_pane_t1

0x2a2e,	// (0x000563ae) bg_button_pane_cp029_ParamLimits

0x2a2e,	// (0x000563ae) bg_button_pane_cp029

0xb0cb,	// (0x0005ea4b) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb0cb,	// (0x0005ea4b) cmail_ddmenu_btn02_pane_g1

0xb0e3,	// (0x0005ea63) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb0e3,	// (0x0005ea63) cmail_ddmenu_btn02_pane_t1

0x0a1b,	// (0x0005439b) bg_button_pane_cp031_ParamLimits

0x0a1b,	// (0x0005439b) bg_button_pane_cp031

0xb0cb,	// (0x0005ea4b) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb0cb,	// (0x0005ea4b) cmail_ddmenu_btn03_pane_g1

0xb0e3,	// (0x0005ea63) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb0e3,	// (0x0005ea63) cmail_ddmenu_btn03_pane_t1

0x8283,	// (0x0005bc03) cell_dialer2_keypad_pane_t1_ParamLimits

0x829d,	// (0x0005bc1d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x829d,	// (0x0005bc1d) cell_dialer2_keypad_pane_t1_copy1

0xa109,	// (0x0005da89) ncimui_group_button_pane

0x0a1b,	// (0x0005439b) main_sp_fs_calendar_pane_ParamLimits

0xacdb,	// (0x0005e65b) list_single_cmail_header_caption_pane_ParamLimits

0xe6a8,	// (0x00062028) aid_recal_txt_sm_pane

0xc074,	// (0x0005f9f4) mian_recal_day_pane

0xe6ea,	// (0x0006206a) popup_sp_fs_cale_preview_window_ParamLimits

0xe942,	// (0x000622c2) list_recal_day_pane

0xe984,	// (0x00062304) list_single_recal_day_pane_ParamLimits

0xe984,	// (0x00062304) list_single_recal_day_pane

0xe996,	// (0x00062316) list_single_recal_day_pane_g1_ParamLimits

0xe996,	// (0x00062316) list_single_recal_day_pane_g1

0xe9a2,	// (0x00062322) list_single_recal_day_pane_g2_ParamLimits

0xe9a2,	// (0x00062322) list_single_recal_day_pane_g2

0xe9ae,	// (0x0006232e) list_single_recal_day_pane_g3_ParamLimits

0xe9ae,	// (0x0006232e) list_single_recal_day_pane_g3

0xb107,	// (0x0005ea87) list_single_recal_day_pane_g4_ParamLimits

0xb107,	// (0x0005ea87) list_single_recal_day_pane_g4

0xe9ba,	// (0x0006233a) list_single_recal_day_pane_g5_ParamLimits

0xe9ba,	// (0x0006233a) list_single_recal_day_pane_g5

0xe9c6,	// (0x00062346) list_single_recal_day_pane_g6_ParamLimits

0xe9c6,	// (0x00062346) list_single_recal_day_pane_g6

0x0004,

0xfd4e,	// (0x000636ce) list_single_recal_day_pane_g_ParamLimits

0xfd4e,	// (0x000636ce) list_single_recal_day_pane_g

0xe9da,	// (0x0006235a) list_single_recal_day_pane_t1

0xe9ec,	// (0x0006236c) list_single_recal_day_pane_t2

0x0001,

0xfd59,	// (0x000636d9) list_single_recal_day_pane_t

0xb11f,	// (0x0005ea9f) ncimui_query_button_pane_ParamLimits

0xb11f,	// (0x0005ea9f) ncimui_query_button_pane

0xb12f,	// (0x0005eaaf) ncimui_query_button_pane_t1_ParamLimits

0xb12f,	// (0x0005eaaf) ncimui_query_button_pane_t1

0xe9fe,	// (0x0006237e) ncimui_query_button_pane_t2_ParamLimits

0xe9fe,	// (0x0006237e) ncimui_query_button_pane_t2

0x0001,

0xfd5e,	// (0x000636de) ncimui_query_button_pane_t_ParamLimits

0xfd5e,	// (0x000636de) ncimui_query_button_pane_t

0xb142,	// (0x0005eac2) query_button_pane_ParamLimits

0xb142,	// (0x0005eac2) query_button_pane

0xc074,	// (0x0005f9f4) bg_button_pane_cp0028

0xea11,	// (0x00062391) query_button_pane_t1

0x684a,	// (0x0005a1ca) main_tport_pane_ParamLimits

0xab89,	// (0x0005e509) bg_popup_window_pane_cp01_ParamLimits

0xab89,	// (0x0005e509) bg_popup_window_pane_cp01

0xaba4,	// (0x0005e524) heading_pane_cp08_ParamLimits

0xaba4,	// (0x0005e524) heading_pane_cp08

0xabb7,	// (0x0005e537) heading_pane_cp07_ParamLimits

0xabb7,	// (0x0005e537) heading_pane_cp07

0xac5e,	// (0x0005e5de) cell_tport_appsw_pane_g2

0x0002,

0xfcaa,	// (0x0006362a) cell_tport_appsw_pane_g

0x5d83,	// (0x00059703) input_candi_list_open_g1

0x10b6,	// (0x00054a36) list_cale_time_pane_g6_ParamLimits

0x10b6,	// (0x00054a36) list_cale_time_pane_g6

0x729e,	// (0x0005ac1e) aid_size_touch_calib_1_ParamLimits

0x729e,	// (0x0005ac1e) aid_size_touch_calib_1

0x72b0,	// (0x0005ac30) aid_size_touch_calib_2_ParamLimits

0x72b0,	// (0x0005ac30) aid_size_touch_calib_2

0x72c8,	// (0x0005ac48) aid_size_touch_calib_3_ParamLimits

0x72c8,	// (0x0005ac48) aid_size_touch_calib_3

0x72e6,	// (0x0005ac66) aid_size_touch_calib_4_ParamLimits

0x72e6,	// (0x0005ac66) aid_size_touch_calib_4

0x72fe,	// (0x0005ac7e) main_touch_calib_button_group_pane_ParamLimits

0x72fe,	// (0x0005ac7e) main_touch_calib_button_group_pane

0x7316,	// (0x0005ac96) main_touch_calib_pane_g1_ParamLimits

0x7328,	// (0x0005aca8) main_touch_calib_pane_g2_ParamLimits

0x733a,	// (0x0005acba) main_touch_calib_pane_g3_ParamLimits

0x734c,	// (0x0005accc) main_touch_calib_pane_g4_ParamLimits

0xf6ec,	// (0x0006306c) main_touch_calib_pane_g_ParamLimits

0x735e,	// (0x0005acde) main_touch_calib_pane_t1_ParamLimits

0x7378,	// (0x0005acf8) main_touch_calib_pane_t2_ParamLimits

0x7392,	// (0x0005ad12) main_touch_calib_pane_t3_ParamLimits

0x73a6,	// (0x0005ad26) main_touch_calib_pane_t4_ParamLimits

0x73ba,	// (0x0005ad3a) main_touch_calib_pane_t5_ParamLimits

0xf6f5,	// (0x00063075) main_touch_calib_pane_t_ParamLimits

0xc93f,	// (0x000602bf) list_single_fp_cale_pane_g3_ParamLimits

0xc93f,	// (0x000602bf) list_single_fp_cale_pane_g3

0xc0eb,	// (0x0005fa6b) bg_button_pane_cp012_ParamLimits

0xc0eb,	// (0x0005fa6b) bg_vkb2_func_pane_cp03_ParamLimits

0x9279,	// (0x0005cbf9) cell_vitu2_function_top_pane_g1_ParamLimits

0xc0eb,	// (0x0005fa6b) bg_vkb2_func_pane_cp04_ParamLimits

0xa094,	// (0x0005da14) main_ncimui_button_group_pane_ParamLimits

0xa094,	// (0x0005da14) main_ncimui_button_group_pane

0xa0f4,	// (0x0005da74) main_ncimui_pane_t3_ParamLimits

0xa0f4,	// (0x0005da74) main_ncimui_pane_t3

0xe60b,	// (0x00061f8b) phacti_button_group_pane

0xe911,	// (0x00062291) aid_size_list_single_double_ParamLimits

0xb089,	// (0x0005ea09) popup_ezdial_listscroll_window_ParamLimits

0xb0a5,	// (0x0005ea25) popup_number_entry_window_cp01_ParamLimits

0xb155,	// (0x0005ead5) phacti_button_pane_ParamLimits

0xb155,	// (0x0005ead5) phacti_button_pane

0xc074,	// (0x0005f9f4) bg_button_pane_cp14

0xea1f,	// (0x0006239f) phacti_button_pane_t1

0xb166,	// (0x0005eae6) main_touch_calib_button_pane_ParamLimits

0xb166,	// (0x0005eae6) main_touch_calib_button_pane

0x0ae6,	// (0x00054466) bg_button_pane_cp18_ParamLimits

0x0ae6,	// (0x00054466) bg_button_pane_cp18

0xea2d,	// (0x000623ad) main_touch_calib_button_pane_t1_ParamLimits

0xea2d,	// (0x000623ad) main_touch_calib_button_pane_t1

0xea43,	// (0x000623c3) main_touch_calib_button_pane_t2_ParamLimits

0xea43,	// (0x000623c3) main_touch_calib_button_pane_t2

0x0001,

0xfd63,	// (0x000636e3) main_touch_calib_button_pane_t_ParamLimits

0xfd63,	// (0x000636e3) main_touch_calib_button_pane_t

0xc074,	// (0x0005f9f4) cell_ncimui_button_pane

0xc074,	// (0x0005f9f4) bg_button_pane_cp032

0xea61,	// (0x000623e1) cell_ncimui_button_pane_t1

0xd0b7,	// (0x00060a37) image3_infobar_pane_ParamLimits

0xd0b7,	// (0x00060a37) image3_infobar_pane

0xa509,	// (0x0005de89) fs_bigclock_status_pane_ParamLimits

0xa509,	// (0x0005de89) fs_bigclock_status_pane

0xa516,	// (0x0005de96) main_fs_bigclock_clock_pane_ParamLimits

0xa516,	// (0x0005de96) main_fs_bigclock_clock_pane

0xa534,	// (0x0005deb4) main_fs_bigclock_indi_pane_ParamLimits

0xa534,	// (0x0005deb4) main_fs_bigclock_indi_pane

0xa566,	// (0x0005dee6) main_fs_bigclock_swipe_pane_ParamLimits

0xa566,	// (0x0005dee6) main_fs_bigclock_swipe_pane

0xc074,	// (0x0005f9f4) main_fs_clock_dumped_data

0xdfe2,	// (0x00061962) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdfe2,	// (0x00061962) list_single_fs_bigclock_indicator_pane_g1

0xdffe,	// (0x0006197e) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdffe,	// (0x0006197e) list_single_fs_bigclock_indicator_pane_g2

0xe018,	// (0x00061998) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe018,	// (0x00061998) list_single_fs_bigclock_indicator_pane_g3

0xe032,	// (0x000619b2) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe032,	// (0x000619b2) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc04,	// (0x00063584) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc04,	// (0x00063584) list_single_fs_bigclock_indicator_pane_g

0xe05d,	// (0x000619dd) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe05d,	// (0x000619dd) list_single_fs_bigclock_indicator_pane_t1

0xe085,	// (0x00061a05) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe085,	// (0x00061a05) list_single_fs_bigclock_indicator_pane_t2

0xe0ad,	// (0x00061a2d) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe0ad,	// (0x00061a2d) list_single_fs_bigclock_indicator_pane_t3

0xe0d5,	// (0x00061a55) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe0d5,	// (0x00061a55) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc0f,	// (0x0006358f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc0f,	// (0x0006358f) list_single_fs_bigclock_indicator_pane_t

0xea6f,	// (0x000623ef) image3_infobar_fav_pane_ParamLimits

0xea6f,	// (0x000623ef) image3_infobar_fav_pane

0xea7f,	// (0x000623ff) image3_infobar_loc_pane_ParamLimits

0xea7f,	// (0x000623ff) image3_infobar_loc_pane

0xea93,	// (0x00062413) image3_infobar_time_pane_ParamLimits

0xea93,	// (0x00062413) image3_infobar_time_pane

0x0cce,	// (0x0005464e) image3_infobar_time_pane_g1

0xeaa3,	// (0x00062423) image3_infobar_time_pane_t1

0x0cce,	// (0x0005464e) image3_infobar_loc_pane_g1

0xeab1,	// (0x00062431) image3_infobar_loc_pane_g2

0x0001,

0xfd68,	// (0x000636e8) image3_infobar_loc_pane_g

0xeab9,	// (0x00062439) image3_infobar_loc_pane_t1

0x0cce,	// (0x0005464e) image3_infobar_fav_pane_g1

0xeac7,	// (0x00062447) image3_infobar_fav_pane_g2

0x0001,

0xfd6d,	// (0x000636ed) image3_infobar_fav_pane_g

0xeacf,	// (0x0006244f) fs_bigclock_status_battery_pane

0xead8,	// (0x00062458) fs_bigclock_status_signal_pane

0xeae1,	// (0x00062461) fs_bigclock_status_title_pane

0xeaea,	// (0x0006246a) fs_bigclock_status_signal_pane_g1

0xeaf3,	// (0x00062473) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd72,	// (0x000636f2) fs_bigclock_status_signal_pane_g

0xeafb,	// (0x0006247b) fs_bigclock_status_battery_pane_g1

0xeb04,	// (0x00062484) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd77,	// (0x000636f7) fs_bigclock_status_battery_pane_g

0xeb0c,	// (0x0006248c) fs_bigclock_status_title_pane_t1

0xb17b,	// (0x0005eafb) main_fs_bigclock_clock_pane_g1

0xb17b,	// (0x0005eafb) main_fs_bigclock_clock_pane_g2

0xb18c,	// (0x0005eb0c) main_fs_bigclock_clock_pane_g3

0xb18c,	// (0x0005eb0c) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd7c,	// (0x000636fc) main_fs_bigclock_clock_pane_g

0xb19f,	// (0x0005eb1f) main_fs_bigclock_clock_pane_t1

0xb1b5,	// (0x0005eb35) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd85,	// (0x00063705) main_fs_bigclock_clock_pane_t

0xeb1a,	// (0x0006249a) list_single_fs_bigclock_indicator_pane_ParamLimits

0xeb1a,	// (0x0006249a) list_single_fs_bigclock_indicator_pane

0xeb2b,	// (0x000624ab) list_single_fs_bigclock_pane_ParamLimits

0xeb2b,	// (0x000624ab) list_single_fs_bigclock_pane

0xeb51,	// (0x000624d1) main_fs_bigclock_indicator_pane_t1

0xeb60,	// (0x000624e0) list_single_fs_bigclock_pane_g1

0xeb68,	// (0x000624e8) list_single_fs_bigclock_pane_t1

0x0cce,	// (0x0005464e) main_fs_bigclock_swipe_pane_g1

0xebab,	// (0x0006252b) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd96,	// (0x00063716) main_fs_bigclock_swipe_pane_g

0xebb3,	// (0x00062533) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xebb3,	// (0x00062533) main_fs_bigclock_swipe_pane_t1

0x58ab,	// (0x0005922b) call_type_pane_ParamLimits

0xc074,	// (0x0005f9f4) main_btmg_pane

0xe7e7,	// (0x00062167) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe7e7,	// (0x00062167) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd09,	// (0x00063689) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd09,	// (0x00063689) list_single_cale_mrui_row_pane_g

0xe96b,	// (0x000622eb) list_recal_vselct_arw_lo_pane

0xe973,	// (0x000622f3) list_recal_vselct_arw_up_pane

0xe97b,	// (0x000622fb) list_recal_vselct_pane

0xb20f,	// (0x0005eb8f) btmg_button_pane

0xb219,	// (0x0005eb99) main_btmg_pane_g1

0xc074,	// (0x0005f9f4) bg_button_pane_cp044

0xebd0,	// (0x00062550) btmg_button_pane_t1

0x2a1a,	// (0x0005639a) aid_listscroll_gen

0x0a1b,	// (0x0005439b) main_cntbar_detail_pane

0xe4d4,	// (0x00061e54) list_cmail_folder_pane

0x2d25,	// (0x000566a5) sp_fs_scroll_pane_cp03_ParamLimits

0xacdb,	// (0x0005e65b) list_single_fs_dyc_pane_cp01_ParamLimits

0xacdb,	// (0x0005e65b) list_single_fs_dyc_pane_cp01

0xebde,	// (0x0006255e) aid_size_cmail_indent

0xebe7,	// (0x00062567) list_single_dyc_row_pane_cp01

0xb255,	// (0x0005ebd5) cntbar_detail_list_pane_ParamLimits

0xb255,	// (0x0005ebd5) cntbar_detail_list_pane

0xb2a1,	// (0x0005ec21) main_cntbar_detail_cont_pane_ParamLimits

0xb2a1,	// (0x0005ec21) main_cntbar_detail_cont_pane

0x2d25,	// (0x000566a5) scroll_pane_cp032_ParamLimits

0x2d25,	// (0x000566a5) scroll_pane_cp032

0xb2b5,	// (0x0005ec35) cntbar_detail_list_event_pane_ParamLimits

0xb2b5,	// (0x0005ec35) cntbar_detail_list_event_pane

0xb265,	// (0x0005ebe5) cntbar_detail_list_shct_pane

0x0f41,	// (0x000548c1) aid_list_gen

0xebf0,	// (0x00062570) aid_scroll

0xebf9,	// (0x00062579) aid_size_touch_scroll_bar

0x2d31,	// (0x000566b1) aid_list_double

0xb2c5,	// (0x0005ec45) aid_list_single

0xb2c5,	// (0x0005ec45) aid_list_single_lg

0xec02,	// (0x00062582) aid_list_z_g_a_sm

0xec0a,	// (0x0006258a) aid_list_z_g_d

0xec12,	// (0x00062592) aid_txt_z_prm

0xec20,	// (0x000625a0) aid_txt_z_prm_cp01

0xec2e,	// (0x000625ae) aid_txt_z_sec

0xb2ce,	// (0x0005ec4e) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb2ce,	// (0x0005ec4e) main_cntbar_detail_cont_pane_g1

0xb2e2,	// (0x0005ec62) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb2e2,	// (0x0005ec62) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd9b,	// (0x0006371b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd9b,	// (0x0006371b) main_cntbar_detail_cont_pane_g

0xec3c,	// (0x000625bc) main_cntbar_detail_cont_pane_t1

0xec4a,	// (0x000625ca) main_cntbar_detail_cont_pane_t2

0xec58,	// (0x000625d8) main_cntbar_detail_cont_pane_t3

0x0002,

0xfda0,	// (0x00063720) main_cntbar_detail_cont_pane_t

0xb2f2,	// (0x0005ec72) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb2f2,	// (0x0005ec72) cell_cntbar_detail_list_shct_pane

0xec66,	// (0x000625e6) cntbar_detail_list_shct_pane_g1

0xec6f,	// (0x000625ef) cntbar_detail_list_shct_pane_g2

0x0001,

0xfda7,	// (0x00063727) cntbar_detail_list_shct_pane_g

0xb306,	// (0x0005ec86) cntbar_detail_list_event_pane_g1_ParamLimits

0xb306,	// (0x0005ec86) cntbar_detail_list_event_pane_g1

0xb312,	// (0x0005ec92) cntbar_detail_list_event_pane_g2_ParamLimits

0xb312,	// (0x0005ec92) cntbar_detail_list_event_pane_g2

0x0005,

0xfdac,	// (0x0006372c) cntbar_detail_list_event_pane_g_ParamLimits

0xfdac,	// (0x0006372c) cntbar_detail_list_event_pane_g

0xb37e,	// (0x0005ecfe) cntbar_detail_list_event_pane_t1_ParamLimits

0xb37e,	// (0x0005ecfe) cntbar_detail_list_event_pane_t1

0xb393,	// (0x0005ed13) cntbar_detail_list_event_pane_t2_ParamLimits

0xb393,	// (0x0005ed13) cntbar_detail_list_event_pane_t2

0x0002,

0xfdb9,	// (0x00063739) cntbar_detail_list_event_pane_t_ParamLimits

0xfdb9,	// (0x00063739) cntbar_detail_list_event_pane_t

0x0cce,	// (0x0005464e) cell_cntbar_detail_list_shct_pane_g1

0x1693,	// (0x00055013) navi_pane_mv_g3

0x0a1b,	// (0x0005439b) main_cntbar_detail_pane_ParamLimits

0xc074,	// (0x0005f9f4) main_notif_wgt_pane

0xce12,	// (0x00060792) aid_tch_main_mp4_pane_g4

0xd044,	// (0x000609c4) popup_slider_window_cp02

0xe961,	// (0x000622e1) list_recal_day_event_pane

0xb223,	// (0x0005eba3) cntbar_detail_btn_pane_ParamLimits

0xb223,	// (0x0005eba3) cntbar_detail_btn_pane

0xb23c,	// (0x0005ebbc) cntbar_detail_btn_pane_cp01_ParamLimits

0xb23c,	// (0x0005ebbc) cntbar_detail_btn_pane_cp01

0xb265,	// (0x0005ebe5) cntbar_detail_list_shct_pane_ParamLimits

0xb275,	// (0x0005ebf5) cntbar_detail_pane_g1_ParamLimits

0xb275,	// (0x0005ebf5) cntbar_detail_pane_g1

0xb285,	// (0x0005ec05) cntbar_detail_pane_t1_ParamLimits

0xb285,	// (0x0005ec05) cntbar_detail_pane_t1

0xb31e,	// (0x0005ec9e) cntbar_detail_list_event_pane_g3_ParamLimits

0xb31e,	// (0x0005ec9e) cntbar_detail_list_event_pane_g3

0xb336,	// (0x0005ecb6) cntbar_detail_list_event_pane_g4_ParamLimits

0xb336,	// (0x0005ecb6) cntbar_detail_list_event_pane_g4

0xb34e,	// (0x0005ecce) cntbar_detail_list_event_pane_g5_ParamLimits

0xb34e,	// (0x0005ecce) cntbar_detail_list_event_pane_g5

0xb366,	// (0x0005ece6) cntbar_detail_list_event_pane_g6_ParamLimits

0xb366,	// (0x0005ece6) cntbar_detail_list_event_pane_g6

0xb3a8,	// (0x0005ed28) cntbar_detail_list_event_pane_t3_ParamLimits

0xb3a8,	// (0x0005ed28) cntbar_detail_list_event_pane_t3

0xb3ba,	// (0x0005ed3a) popup_notif_wgt_window_ParamLimits

0xb3ba,	// (0x0005ed3a) popup_notif_wgt_window

0xb3d3,	// (0x0005ed53) popup_submenu_window_cp01_ParamLimits

0xb3d3,	// (0x0005ed53) popup_submenu_window_cp01

0x0c98,	// (0x00054618) bg_popup_window_pane_cp10

0xec78,	// (0x000625f8) listscroll_notif_wgt_pane

0xec8a,	// (0x0006260a) list_notif_wgt_window

0xec93,	// (0x00062613) scroll_pane_cp033

0xb3e5,	// (0x0005ed65) list_notif_wgt_row_pane_ParamLimits

0xb3e5,	// (0x0005ed65) list_notif_wgt_row_pane

0xec9c,	// (0x0006261c) aid_size_list_notif_wgt_del

0xeca9,	// (0x00062629) list_notif_wgt_row_pane_g1

0xecb5,	// (0x00062635) list_notif_wgt_row_pane_g2

0xecc4,	// (0x00062644) list_notif_wgt_row_pane_g3

0x0002,

0xfdc0,	// (0x00063740) list_notif_wgt_row_pane_g

0xecd1,	// (0x00062651) list_notif_wgt_row_pane_t1

0xece7,	// (0x00062667) list_notif_wgt_row_pane_t2

0xecf9,	// (0x00062679) list_notif_wgt_row_pane_t3

0x0002,

0xfdc7,	// (0x00063747) list_notif_wgt_row_pane_t

0xd447,	// (0x00060dc7) list_recal_day_event_pane_g1

0xed0b,	// (0x0006268b) list_recal_day_event_pane_t1

0xc074,	// (0x0005f9f4) bg_button_pane_cp045

0xb3f5,	// (0x0005ed75) cntbar_detail_btn_pane_t1

0x2a2e,	// (0x000563ae) main_callh_pane_ParamLimits

0x2a2e,	// (0x000563ae) main_callh_pane

0xc074,	// (0x0005f9f4) main_coverflow0_pane

0xc074,	// (0x0005f9f4) main_wgtman_pane

0xa57e,	// (0x0005defe) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xa57e,	// (0x0005defe) main_fs_bigclock_unlock_btn_pane

0xac56,	// (0x0005e5d6) bg_button_pane_cp16

0xac66,	// (0x0005e5e6) cell_tport_appsw_pane_g3

0xb403,	// (0x0005ed83) cf0_flow_pane_ParamLimits

0xb403,	// (0x0005ed83) cf0_flow_pane

0xed1a,	// (0x0006269a) listscroll_cf0_pane

0xed25,	// (0x000626a5) main_cf0_pane_g1

0xb418,	// (0x0005ed98) main_cf0_pane_t1_ParamLimits

0xb418,	// (0x0005ed98) main_cf0_pane_t1

0xb42f,	// (0x0005edaf) main_cf0_pane_t2_ParamLimits

0xb42f,	// (0x0005edaf) main_cf0_pane_t2

0x0001,

0xfdd3,	// (0x00063753) main_cf0_pane_t_ParamLimits

0xfdd3,	// (0x00063753) main_cf0_pane_t

0xed37,	// (0x000626b7) scroll_pane_cp11

0xb446,	// (0x0005edc6) cf0_flow_pane_g1

0xb44e,	// (0x0005edce) cf0_flow_pane_g2

0x0001,

0xfdd8,	// (0x00063758) cf0_flow_pane_g

0xb456,	// (0x0005edd6) cf0_flow_pane_t1

0xc074,	// (0x0005f9f4) main_call6_pane

0xc074,	// (0x0005f9f4) main_calllock_pane

0xb464,	// (0x0005ede4) call6_btn_grp_pane_ParamLimits

0xb464,	// (0x0005ede4) call6_btn_grp_pane

0xb47e,	// (0x0005edfe) call6_pane_g1_ParamLimits

0xb47e,	// (0x0005edfe) call6_pane_g1

0xb494,	// (0x0005ee14) popup_call6_1st_window_ParamLimits

0xb494,	// (0x0005ee14) popup_call6_1st_window

0xb4a5,	// (0x0005ee25) popup_call6_2nd_window_ParamLimits

0xb4a5,	// (0x0005ee25) popup_call6_2nd_window

0xb4b6,	// (0x0005ee36) cell_call6_btn_pane_ParamLimits

0xb4b6,	// (0x0005ee36) cell_call6_btn_pane

0x0c98,	// (0x00054618) bg_popup_call2_in_pane_cp03

0xed42,	// (0x000626c2) popup_call6_1st_window_g1

0xed4a,	// (0x000626ca) popup_call6_1st_window_g2

0xed52,	// (0x000626d2) popup_call6_1st_window_g3

0x0002,

0xfddd,	// (0x0006375d) popup_call6_1st_window_g

0xed5a,	// (0x000626da) popup_call6_1st_window_t1

0xed69,	// (0x000626e9) popup_call6_1st_window_t2

0xed77,	// (0x000626f7) popup_call6_1st_window_t3

0x0002,

0xfde4,	// (0x00063764) popup_call6_1st_window_t

0x0c98,	// (0x00054618) bg_popup_call2_in_pane_cp04

0xed85,	// (0x00062705) popup_call6_2nd_window_g1

0xed8d,	// (0x0006270d) popup_call6_2nd_window_g2

0xed95,	// (0x00062715) popup_call6_2nd_window_g3

0x0002,

0xfdeb,	// (0x0006376b) popup_call6_2nd_window_g

0xed9d,	// (0x0006271d) popup_call6_2nd_window_t1

0xc0f9,	// (0x0005fa79) bg_button_pane_cp15

0xf06d,	// (0x000629ed) cell_call6_btn_pane_g1

0xf076,	// (0x000629f6) cell_call6_btn_pane_t1

0xb4ca,	// (0x0005ee4a) listscroll_wgtman_pane_ParamLimits

0xb4ca,	// (0x0005ee4a) listscroll_wgtman_pane

0xb4eb,	// (0x0005ee6b) wgtman_btn_pane_ParamLimits

0xb4eb,	// (0x0005ee6b) wgtman_btn_pane

0x14a7,	// (0x00054e27) aid_scroll_copy1

0xedac,	// (0x0006272c) list_wgtman_pane

0xb52e,	// (0x0005eeae) wgtman_btn_pane_g1_ParamLimits

0xb52e,	// (0x0005eeae) wgtman_btn_pane_g1

0xb55a,	// (0x0005eeda) wgtman_btn_pane_t1_ParamLimits

0xb55a,	// (0x0005eeda) wgtman_btn_pane_t1

0xedb6,	// (0x00062736) wgtman_btn_pane_t2_ParamLimits

0xedb6,	// (0x00062736) wgtman_btn_pane_t2

0x0001,

0xfdf2,	// (0x00063772) wgtman_btn_pane_t_ParamLimits

0xfdf2,	// (0x00063772) wgtman_btn_pane_t

0xb597,	// (0x0005ef17) listrow_wgtman_pane_ParamLimits

0xb597,	// (0x0005ef17) listrow_wgtman_pane

0xb5aa,	// (0x0005ef2a) listrow_wgtman_pane_g1

0xb5b7,	// (0x0005ef37) listrow_wgtman_pane_g2

0x0001,

0xfdf7,	// (0x00063777) listrow_wgtman_pane_g

0xb5d5,	// (0x0005ef55) listrow_wgtman_pane_t1

0xb5ed,	// (0x0005ef6d) listrow_wgtman_pane_t2

0x0001,

0xfdfc,	// (0x0006377c) listrow_wgtman_pane_t

0xb613,	// (0x0005ef93) wait_bar_pane_cp09

0xedcd,	// (0x0006274d) main_calllock_btn_pane

0xedd7,	// (0x00062757) main_calllock_pane_g1

0xc074,	// (0x0005f9f4) bg_button_pane_cp17

0xeddf,	// (0x0006275f) main_calllock_btn_pane_g1

0xede8,	// (0x00062768) main_calllock_btn_pane_t1

0xc074,	// (0x0005f9f4) main_dialer3_pane

0xc074,	// (0x0005f9f4) main_fmrd2_pane

0x0cce,	// (0x0005464e) main_fs_bigclock_unlock_btn_pane_g1

0xb62d,	// (0x0005efad) main_fs_bigclock_unlock_btn_pane_t1

0xb63b,	// (0x0005efbb) area_fmrd2_info_pane_ParamLimits

0xb63b,	// (0x0005efbb) area_fmrd2_info_pane

0xb64c,	// (0x0005efcc) area_fmrd2_visual_pane_ParamLimits

0xb64c,	// (0x0005efcc) area_fmrd2_visual_pane

0xb65a,	// (0x0005efda) fmrd2_indi_pane_ParamLimits

0xb65a,	// (0x0005efda) fmrd2_indi_pane

0xb667,	// (0x0005efe7) area_fmrd2_visual_pane_g1

0xb66f,	// (0x0005efef) area_fmrd2_visual_pane_t1

0xb67f,	// (0x0005efff) area_fmrd2_visual_pane_t2

0xb68f,	// (0x0005f00f) area_fmrd2_visual_pane_t3

0x0002,

0xfe06,	// (0x00063786) area_fmrd2_visual_pane_t

0xb69f,	// (0x0005f01f) area_fmrd2_info_pane_g1

0xb6a7,	// (0x0005f027) area_fmrd2_info_pane_t1

0xb6b7,	// (0x0005f037) area_fmrd2_info_pane_t2

0xb6c7,	// (0x0005f047) area_fmrd2_info_pane_t3

0xb6d7,	// (0x0005f057) area_fmrd2_info_pane_t4

0x0003,

0xfe0d,	// (0x0006378d) area_fmrd2_info_pane_t

0xb6e5,	// (0x0005f065) fmrd2_indi_pane_t1

0xb6f5,	// (0x0005f075) fmrd2_indi_pane_t2

0xb705,	// (0x0005f085) fmrd2_indi_pane_t3

0x0002,

0xfe16,	// (0x00063796) fmrd2_indi_pane_t

0xe041,	// (0x000619c1) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe041,	// (0x000619c1) list_single_fs_bigclock_indicator_pane_g5

0xe0f2,	// (0x00061a72) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe0f2,	// (0x00061a72) list_single_fs_bigclock_indicator_pane_t5

0xadf4,	// (0x0005e774) aid_cell_bcale_month_pane_ParamLimits

0xadf4,	// (0x0005e774) aid_cell_bcale_month_pane

0xae12,	// (0x0005e792) bcale_month_pane_ParamLimits

0xae12,	// (0x0005e792) bcale_month_pane

0xae36,	// (0x0005e7b6) bcale_preview_pane_ParamLimits

0xae36,	// (0x0005e7b6) bcale_preview_pane

0xeb68,	// (0x000624e8) list_single_fs_bigclock_pane_t1_ParamLimits

0xeb87,	// (0x00062507) list_single_fs_bigclock_pane_t2_ParamLimits

0xeb87,	// (0x00062507) list_single_fs_bigclock_pane_t2

0x0001,

0xfd91,	// (0x00063711) list_single_fs_bigclock_pane_t_ParamLimits

0xfd91,	// (0x00063711) list_single_fs_bigclock_pane_t

0xb625,	// (0x0005efa5) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe01,	// (0x00063781) main_fs_bigclock_unlock_btn_pane_g

0xb715,	// (0x0005f095) aid_dia3_key_size_ParamLimits

0xb715,	// (0x0005f095) aid_dia3_key_size

0xb724,	// (0x0005f0a4) aid_dia3_listrow_size_ParamLimits

0xb724,	// (0x0005f0a4) aid_dia3_listrow_size

0xb739,	// (0x0005f0b9) dia3_keypad_fun_pane_ParamLimits

0xb739,	// (0x0005f0b9) dia3_keypad_fun_pane

0xb755,	// (0x0005f0d5) dia3_keypad_num_pane_ParamLimits

0xb755,	// (0x0005f0d5) dia3_keypad_num_pane

0xb770,	// (0x0005f0f0) dia3_listscroll_pane_ParamLimits

0xb770,	// (0x0005f0f0) dia3_listscroll_pane

0xb783,	// (0x0005f103) dia3_numentry_pane_ParamLimits

0xb783,	// (0x0005f103) dia3_numentry_pane

0xedf7,	// (0x00062777) dia3_list_pane

0xee02,	// (0x00062782) scroll_pane_cp12

0xc074,	// (0x0005f9f4) bg_dia3_numentry_pane

0xb79b,	// (0x0005f11b) dia3_numentry_pane_t1

0xb7aa,	// (0x0005f12a) cell_dia3_key_num_pane

0xb7b2,	// (0x0005f132) cell_dia3_key0_fun_pane_ParamLimits

0xb7b2,	// (0x0005f132) cell_dia3_key0_fun_pane

0xb7c6,	// (0x0005f146) cell_dia3_key1_fun_pane_ParamLimits

0xb7c6,	// (0x0005f146) cell_dia3_key1_fun_pane

0xb7de,	// (0x0005f15e) dia3_listrow_pane

0xdd94,	// (0x00061714) bg_dia3_numentry_pane_g1

0xc074,	// (0x0005f9f4) bg_button_pane_cp21

0xee0d,	// (0x0006278d) cell_dia3_key_num_pane_t1

0xee1b,	// (0x0006279b) cell_dia3_key_num_pane_t2

0xee2a,	// (0x000627aa) cell_dia3_key_num_pane_t3

0xee39,	// (0x000627b9) cell_dia3_key_num_pane_t4

0x0003,

0xfe1d,	// (0x0006379d) cell_dia3_key_num_pane_t

0xc074,	// (0x0005f9f4) bg_button_pane_cp19

0xb7f0,	// (0x0005f170) cell_dia3_key0_fun_pane_g1

0xc074,	// (0x0005f9f4) bg_button_pane_cp20

0xb7f8,	// (0x0005f178) cell_dia3_key1_fun_pane_g1

0xb800,	// (0x0005f180) area_left_week_number_pane

0xb80c,	// (0x0005f18c) area_top_day_name_pane

0xb81f,	// (0x0005f19f) frame_month_view_pane

0xee48,	// (0x000627c8) grid_month_view_pane

0xb832,	// (0x0005f1b2) cell_top_day_name_pane_ParamLimits

0xb832,	// (0x0005f1b2) cell_top_day_name_pane

0xb85f,	// (0x0005f1df) cell_area_left_week_number_pane_ParamLimits

0xb85f,	// (0x0005f1df) cell_area_left_week_number_pane

0xb873,	// (0x0005f1f3) cell_month_view_pane_ParamLimits

0xb873,	// (0x0005f1f3) cell_month_view_pane

0xee56,	// (0x000627d6) frm_month_g1

0xb8a0,	// (0x0005f220) frm_month_g2

0xb8b3,	// (0x0005f233) frm_month_g3

0xb8c6,	// (0x0005f246) frm_month_g4

0xb8d9,	// (0x0005f259) frm_month_g5

0xb8ec,	// (0x0005f26c) frm_month_g6

0xb8ff,	// (0x0005f27f) frm_month_g7

0xee63,	// (0x000627e3) frm_month_g8

0xb912,	// (0x0005f292) frm_month_g9

0xb922,	// (0x0005f2a2) frm_month_g10

0xb932,	// (0x0005f2b2) frm_month_g11

0xb942,	// (0x0005f2c2) frm_month_g12

0xb954,	// (0x0005f2d4) frm_month_g13

0xb966,	// (0x0005f2e6) frm_month_g14

0xb97a,	// (0x0005f2fa) frm_month_g15

0xb98e,	// (0x0005f30e) frm_month_g16

0x000f,

0xfe26,	// (0x000637a6) frm_month_g

0x001c,	// (0x0005399c) cell_top_day_name_pane_t1

0xb9a2,	// (0x0005f322) cell_area_left_week_number_pane_g1

0xb9ae,	// (0x0005f32e) cell_area_left_week_number_pane_t1

0x0a74,	// (0x000543f4) cell_month_view_pane_g1

0xb9c1,	// (0x0005f341) cell_month_view_pane_t1

0xc074,	// (0x0005f9f4) main_fps_pane

0xe306,	// (0x00061c86) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe306,	// (0x00061c86) cmail_ddmenu_btn02_pane_cp1

0xe322,	// (0x00061ca2) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe322,	// (0x00061ca2) cmail_ddmenu_btn02_pane_cp2

0xb0d7,	// (0x0005ea57) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb0d7,	// (0x0005ea57) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd44,	// (0x000636c4) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd44,	// (0x000636c4) cmail_ddmenu_btn02_pane_g

0xb0f5,	// (0x0005ea75) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb0f5,	// (0x0005ea75) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd49,	// (0x000636c9) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd49,	// (0x000636c9) cmail_ddmenu_btn02_pane_t

0xb9d4,	// (0x0005f354) fps_text_pane_ParamLimits

0xb9d4,	// (0x0005f354) fps_text_pane

0xb9eb,	// (0x0005f36b) main_fps_pane_g1_ParamLimits

0xb9eb,	// (0x0005f36b) main_fps_pane_g1

0xba05,	// (0x0005f385) wait_bar_pane_cp010_ParamLimits

0xba05,	// (0x0005f385) wait_bar_pane_cp010

0xba16,	// (0x0005f396) fps_text_pane_t1_ParamLimits

0xba16,	// (0x0005f396) fps_text_pane_t1

0x0357,	// (0x00053cd7) cam4_image_uncrop_pane_g1

0x0360,	// (0x00053ce0) cam4_image_uncrop_pane_g2

0x87ba,	// (0x0005c13a) cam4_image_uncrop_pane_g3

0x87c3,	// (0x0005c143) cam4_image_uncrop_pane_g4

0x0003,

0xf888,	// (0x00063208) cam4_image_uncrop_pane_g

0xb7de,	// (0x0005f15e) dia3_listrow_pane_ParamLimits

0xc074,	// (0x0005f9f4) main_phob2_pane

0xac27,	// (0x0005e5a7) cell_tport_appsw_pane_cp02_ParamLimits

0xac27,	// (0x0005e5a7) cell_tport_appsw_pane_cp02

0xac3b,	// (0x0005e5bb) cell_tport_appsw_pane_cp03_ParamLimits

0xac3b,	// (0x0005e5bb) cell_tport_appsw_pane_cp03

0xc074,	// (0x0005f9f4) phob2_contact_card_pane

0xc074,	// (0x0005f9f4) phob2_listscroll_pane

0x00aa,	// (0x00053a2a) phob2_list_pane

0x00b2,	// (0x00053a32) scroll_pane_cp034

0xba2e,	// (0x0005f3ae) phob2_cc_data_pane_ParamLimits

0xba2e,	// (0x0005f3ae) phob2_cc_data_pane

0xba4d,	// (0x0005f3cd) phob2_cc_listscroll_pane_ParamLimits

0xba4d,	// (0x0005f3cd) phob2_cc_listscroll_pane

0xb597,	// (0x0005ef17) list_double_large_graphic_phob2_pane_ParamLimits

0xb597,	// (0x0005ef17) list_double_large_graphic_phob2_pane

0xba6b,	// (0x0005f3eb) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xba6b,	// (0x0005f3eb) list_double_large_graphic_phob2_pane_g1

0xba78,	// (0x0005f3f8) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xba78,	// (0x0005f3f8) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe47,	// (0x000637c7) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe47,	// (0x000637c7) list_double_large_graphic_phob2_pane_g

0xba9e,	// (0x0005f41e) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xba9e,	// (0x0005f41e) list_double_large_graphic_phob2_pane_t1

0xbab3,	// (0x0005f433) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xbab3,	// (0x0005f433) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe50,	// (0x000637d0) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe50,	// (0x000637d0) list_double_large_graphic_phob2_pane_t

0xc074,	// (0x0005f9f4) list_highlight_pane_cp024

0x014b,	// (0x00053acb) phob2_cc_button_pane

0xbac8,	// (0x0005f448) phob2_cc_data_pane_g1_ParamLimits

0xbac8,	// (0x0005f448) phob2_cc_data_pane_g1

0xbadf,	// (0x0005f45f) phob2_cc_data_pane_g2_ParamLimits

0xbadf,	// (0x0005f45f) phob2_cc_data_pane_g2

0x0001,

0xfe55,	// (0x000637d5) phob2_cc_data_pane_g_ParamLimits

0xfe55,	// (0x000637d5) phob2_cc_data_pane_g

0xbaf1,	// (0x0005f471) phob2_cc_data_pane_t1_ParamLimits

0xbaf1,	// (0x0005f471) phob2_cc_data_pane_t1

0xbb09,	// (0x0005f489) phob2_cc_data_pane_t2_ParamLimits

0xbb09,	// (0x0005f489) phob2_cc_data_pane_t2

0xbb21,	// (0x0005f4a1) phob2_cc_data_pane_t3_ParamLimits

0xbb21,	// (0x0005f4a1) phob2_cc_data_pane_t3

0x0002,

0xfe5a,	// (0x000637da) phob2_cc_data_pane_t_ParamLimits

0xfe5a,	// (0x000637da) phob2_cc_data_pane_t

0x01b0,	// (0x00053b30) phob2_cc_list_pane_ParamLimits

0x01b0,	// (0x00053b30) phob2_cc_list_pane

0xd4de,	// (0x00060e5e) scroll_pane_cp035_ParamLimits

0xd4de,	// (0x00060e5e) scroll_pane_cp035

0x0a1b,	// (0x0005439b) bg_button_pane_cp033

0x01bc,	// (0x00053b3c) phob2_cc_button_pane_g1

0x01c8,	// (0x00053b48) phob2_cc_button_pane_t1

0x01dd,	// (0x00053b5d) phob2_cc_button_pane_t2

0x0001,

0xfe61,	// (0x000637e1) phob2_cc_button_pane_t

0xbb39,	// (0x0005f4b9) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xbb39,	// (0x0005f4b9) list_double_large_graphic_phob2_cc_pane

0xbb6b,	// (0x0005f4eb) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xbb6b,	// (0x0005f4eb) list_double_large_graphic_phob2_cc_pane_g1

0xbb77,	// (0x0005f4f7) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xbb77,	// (0x0005f4f7) list_double_large_graphic_phob2_cc_pane_g2

0xbb83,	// (0x0005f503) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xbb83,	// (0x0005f503) list_double_large_graphic_phob2_cc_pane_g3

0xbb8f,	// (0x0005f50f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xbb8f,	// (0x0005f50f) list_double_large_graphic_phob2_cc_pane_g4

0xbb9b,	// (0x0005f51b) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xbb9b,	// (0x0005f51b) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe66,	// (0x000637e6) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe66,	// (0x000637e6) list_double_large_graphic_phob2_cc_pane_g

0xbba7,	// (0x0005f527) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xbba7,	// (0x0005f527) list_double_large_graphic_phob2_cc_pane_t1

0xbbd0,	// (0x0005f550) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xbbd0,	// (0x0005f550) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe71,	// (0x000637f1) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe71,	// (0x000637f1) list_double_large_graphic_phob2_cc_pane_t

0x02f6,	// (0x00053c76) list_highlight_pane_cp025_ParamLimits

0x02f6,	// (0x00053c76) list_highlight_pane_cp025

0x0a1b,	// (0x0005439b) bg_button_pane_cp033_ParamLimits

0x01bc,	// (0x00053b3c) phob2_cc_button_pane_g1_ParamLimits

0x01c8,	// (0x00053b48) phob2_cc_button_pane_t1_ParamLimits

0x01dd,	// (0x00053b5d) phob2_cc_button_pane_t2_ParamLimits

0xfe61,	// (0x000637e1) phob2_cc_button_pane_t_ParamLimits

0x3eab,	// (0x0005782b) popup_wgtman_window

0xd301,	// (0x00060c81) scroll_pane_cp038

0xb510,	// (0x0005ee90) wgtman_btn_pane_cp_01_ParamLimits

0xb510,	// (0x0005ee90) wgtman_btn_pane_cp_01

0x0304,	// (0x00053c84) wgtman_content_pane

0x030d,	// (0x00053c8d) wgtman_heading_pane

0xc074,	// (0x0005f9f4) bg_heading_pane_cp02

0x0316,	// (0x00053c96) wgtman_heading_pane_g1

0x031e,	// (0x00053c9e) wgtman_heading_pane_t1

0x032c,	// (0x00053cac) scroll_pane_cp036

0x0334,	// (0x00053cb4) wgtman_list_pane

0x033c,	// (0x00053cbc) wgtman_list_pane_t1_ParamLimits

0x033c,	// (0x00053cbc) wgtman_list_pane_t1

0xd167,	// (0x00060ae7) cam4_grid_pane

0x9413,	// (0x0005cd93) bg_button_pane_cp015_ParamLimits

0x9425,	// (0x0005cda5) bg_button_pane_cp016_ParamLimits

0x9438,	// (0x0005cdb8) bg_button_pane_cp017_ParamLimits

0x948e,	// (0x0005ce0e) popup_vitu2_query_window_g3_ParamLimits

0x948e,	// (0x0005ce0e) popup_vitu2_query_window_g3

0x954b,	// (0x0005cecb) popup_vitu2_query_window_t6_ParamLimits

0x954b,	// (0x0005cecb) popup_vitu2_query_window_t6

0x9576,	// (0x0005cef6) popup_vitu2_query_window_t7_ParamLimits

0x9576,	// (0x0005cef6) popup_vitu2_query_window_t7

0x0357,	// (0x00053cd7) cam4_grid_pane_g1

0x0360,	// (0x00053ce0) cam4_grid_pane_g2

0x0369,	// (0x00053ce9) cam4_grid_pane_g3

0x0372,	// (0x00053cf2) cam4_grid_pane_g4

0x0003,

0xfe76,	// (0x000637f6) cam4_grid_pane_g

0x4a6f,	// (0x000583ef) aid_placing_vt_slider_lsc_ParamLimits

0x4d6c,	// (0x000586ec) vidtel_button_pane_ParamLimits

0x4d6c,	// (0x000586ec) vidtel_button_pane

0xc074,	// (0x0005f9f4) bg_button_pane_cp034

0x037d,	// (0x00053cfd) vidtel_button_pane_g1

0x0385,	// (0x00053d05) vidtel_button_pane_t1

0xd425,	// (0x00060da5) aid_size_vtel_slider_touch

0xd4de,	// (0x00060e5e) scroll_pane_cp039

0xa272,	// (0x0005dbf2) ncim_query_button_pane_cp01_ParamLimits

0xa291,	// (0x0005dc11) ncimui_query_pane_g1_ParamLimits

0x0a1b,	// (0x0005439b) input_focus_pane_cp012_ParamLimits

0xddda,	// (0x0006175a) ncim_query_entry_pane_t1_ParamLimits

0xd4de,	// (0x00060e5e) scroll_pane_cp039_ParamLimits

0x157e,	// (0x00054efe) navi_pane_bcale_mc_g1

0x1586,	// (0x00054f06) navi_pane_bcale_mc_t1

0xe356,	// (0x00061cd6) main_sp_fs_email_pane_g1

0xe362,	// (0x00061ce2) main_sp_fs_email_pane_g2

0x0001,

0xfc79,	// (0x000635f9) main_sp_fs_email_pane_g

0xe7f3,	// (0x00062173) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe7f3,	// (0x00062173) list_single_cale_mrui_row_pane_g3

0xb115,	// (0x0005ea95) list_single_recal_day_pane_g5_event_pane

0xe9d2,	// (0x00062352) list_single_recal_day_pane_g7

0x039b,	// (0x00053d1b) list_recal_day_event_pane_cp01

0x03a4,	// (0x00053d24) list_recal_vselct_arw_lo_pane_cp01

0x03ac,	// (0x00053d2c) list_recal_vselct_arw_up_pane_cp01

0x03b4,	// (0x00053d34) list_recal_vselct_pane_cp01

0xd447,	// (0x00060dc7) list_recal_day_event_pane_cp01_g1

0xee70,	// (0x000627f0) list_recal_day_event_pane_cp01_t1

0xe9da,	// (0x0006235a) list_single_recal_day_pane_t1_ParamLimits

0xe9ec,	// (0x0006236c) list_single_recal_day_pane_t2_ParamLimits

0xfd59,	// (0x000636d9) list_single_recal_day_pane_t_ParamLimits

0x09f9,	// (0x00054379) bg_notes_pane_ParamLimits

0x0ac4,	// (0x00054444) list_notes_pane_ParamLimits

0x40b2,	// (0x00057a32) scroll_pane_cp06_ParamLimits

0x0ae6,	// (0x00054466) main_notes_pane_ParamLimits

0x0a1b,	// (0x0005439b) main_welc_pane

0xbc15,	// (0x0005f595) main_welc_body_pane_ParamLimits

0xbc15,	// (0x0005f595) main_welc_body_pane

0xbc32,	// (0x0005f5b2) main_welc_opti_pane_ParamLimits

0xbc32,	// (0x0005f5b2) main_welc_opti_pane

0xbca6,	// (0x0005f626) main_welc_pane_t1_ParamLimits

0xbca6,	// (0x0005f626) main_welc_pane_t1

0xbe0c,	// (0x0005f78c) main_welc_body_row_pane_ParamLimits

0xbe0c,	// (0x0005f78c) main_welc_body_row_pane

0xc666,	// (0x0005ffe6) main_welc_opti_row_pane_ParamLimits

0xc666,	// (0x0005ffe6) main_welc_opti_row_pane

0x0588,	// (0x00053f08) main_welc_opti_row_pane_g1

0xbe21,	// (0x0005f7a1) main_welc_opti_row_pane_t1

0x059f,	// (0x00053f1f) main_welc_body_row_pane_t1

0xec82,	// (0x00062602) popup_notif_wgt_heading_pane

0xec9c,	// (0x0006261c) aid_size_list_notif_wgt_del_ParamLimits

0xeca9,	// (0x00062629) list_notif_wgt_row_pane_g1_ParamLimits

0xecb5,	// (0x00062635) list_notif_wgt_row_pane_g2_ParamLimits

0xecc4,	// (0x00062644) list_notif_wgt_row_pane_g3_ParamLimits

0xfdc0,	// (0x00063740) list_notif_wgt_row_pane_g_ParamLimits

0xecd1,	// (0x00062651) list_notif_wgt_row_pane_t1_ParamLimits

0xece7,	// (0x00062667) list_notif_wgt_row_pane_t2_ParamLimits

0xecf9,	// (0x00062679) list_notif_wgt_row_pane_t3_ParamLimits

0xfdc7,	// (0x00063747) list_notif_wgt_row_pane_t_ParamLimits

0xb5aa,	// (0x0005ef2a) listrow_wgtman_pane_g1_ParamLimits

0xb5b7,	// (0x0005ef37) listrow_wgtman_pane_g2_ParamLimits

0xfdf7,	// (0x00063777) listrow_wgtman_pane_g_ParamLimits

0xb5d5,	// (0x0005ef55) listrow_wgtman_pane_t1_ParamLimits

0xb5ed,	// (0x0005ef6d) listrow_wgtman_pane_t2_ParamLimits

0xfdfc,	// (0x0006377c) listrow_wgtman_pane_t_ParamLimits

0xb613,	// (0x0005ef93) wait_bar_pane_cp09_ParamLimits

0xc074,	// (0x0005f9f4) bg_popup_heading_pane_cp02

0x05ae,	// (0x00053f2e) popup_notif_wgt_heading_pane_g1

0x05b6,	// (0x00053f36) popup_notif_wgt_heading_pane_t1

0xc074,	// (0x0005f9f4) main_vids_pane

0xc074,	// (0x0005f9f4) vids_listscroll_pane

0xbe30,	// (0x0005f7b0) scroll_pane_cp040

0xc074,	// (0x0005f9f4) vids_list_pane

0xbe3b,	// (0x0005f7bb) vids_list_double_pane_ParamLimits

0xbe3b,	// (0x0005f7bb) vids_list_double_pane

0xbe4c,	// (0x0005f7cc) vids_list_double_pane_g1

0xbe55,	// (0x0005f7d5) vids_list_double_pane_t1

0xbe64,	// (0x0005f7e4) vids_list_double_pane_t2

0x0001,

0xfe95,	// (0x00063815) vids_list_double_pane_t

0xc0eb,	// (0x0005fa6b) main_ncimui_pane_ParamLimits

0xa0a8,	// (0x0005da28) main_ncimui_pane_g1_ParamLimits

0xa0b4,	// (0x0005da34) main_ncimui_pane_g2_ParamLimits

0xa0b4,	// (0x0005da34) main_ncimui_pane_g2

0x0001,

0xfb7a,	// (0x000634fa) main_ncimui_pane_g_ParamLimits

0xfb7a,	// (0x000634fa) main_ncimui_pane_g

0xbc4d,	// (0x0005f5cd) main_welc_pane_g1_ParamLimits

0xbc4d,	// (0x0005f5cd) main_welc_pane_g1

0xbc62,	// (0x0005f5e2) main_welc_pane_g2_ParamLimits

0xbc62,	// (0x0005f5e2) main_welc_pane_g2

0x0003,

0xfe7f,	// (0x000637ff) main_welc_pane_g_ParamLimits

0xfe7f,	// (0x000637ff) main_welc_pane_g

0x09f9,	// (0x00054379) listscroll_mce_pane_ParamLimits

0x16d3,	// (0x00055053) wait_bar_pane_cp10

0x2a22,	// (0x000563a2) main_cale_day_pane_ParamLimits

0x2a22,	// (0x000563a2) main_cale_week_pane_ParamLimits

0x09f9,	// (0x00054379) main_messa_pane_ParamLimits

0x7bcc,	// (0x0005b54c) main_clock2_btn_pane_ParamLimits

0x7bcc,	// (0x0005b54c) main_clock2_btn_pane

0xc9b9,	// (0x00060339) main_clock2_btn_pane_cp01_ParamLimits

0xc9b9,	// (0x00060339) main_clock2_btn_pane_cp01

0xe77f,	// (0x000620ff) list_cale_mrui_pane_ParamLimits

0xed2f,	// (0x000626af) main_cf0_pane_g2

0x0001,

0xfdce,	// (0x0006374e) main_cf0_pane_g

0xb800,	// (0x0005f180) area_left_week_number_pane_ParamLimits

0xb80c,	// (0x0005f18c) area_top_day_name_pane_ParamLimits

0xb81f,	// (0x0005f19f) frame_month_view_pane_ParamLimits

0xee48,	// (0x000627c8) grid_month_view_pane_ParamLimits

0xee56,	// (0x000627d6) frm_month_g1_ParamLimits

0xb8a0,	// (0x0005f220) frm_month_g2_ParamLimits

0xb8b3,	// (0x0005f233) frm_month_g3_ParamLimits

0xb8c6,	// (0x0005f246) frm_month_g4_ParamLimits

0xb8d9,	// (0x0005f259) frm_month_g5_ParamLimits

0xb8ec,	// (0x0005f26c) frm_month_g6_ParamLimits

0xb8ff,	// (0x0005f27f) frm_month_g7_ParamLimits

0xee63,	// (0x000627e3) frm_month_g8_ParamLimits

0xb912,	// (0x0005f292) frm_month_g9_ParamLimits

0xb922,	// (0x0005f2a2) frm_month_g10_ParamLimits

0xb932,	// (0x0005f2b2) frm_month_g11_ParamLimits

0xb942,	// (0x0005f2c2) frm_month_g12_ParamLimits

0xb954,	// (0x0005f2d4) frm_month_g13_ParamLimits

0xb966,	// (0x0005f2e6) frm_month_g14_ParamLimits

0xb97a,	// (0x0005f2fa) frm_month_g15_ParamLimits

0xb98e,	// (0x0005f30e) frm_month_g16_ParamLimits

0xfe26,	// (0x000637a6) frm_month_g_ParamLimits

0x001c,	// (0x0005399c) cell_top_day_name_pane_t1_ParamLimits

0xb9a2,	// (0x0005f322) cell_area_left_week_number_pane_g1_ParamLimits

0xb9ae,	// (0x0005f32e) cell_area_left_week_number_pane_t1_ParamLimits

0x0a74,	// (0x000543f4) cell_month_view_pane_g1_ParamLimits

0xb9c1,	// (0x0005f341) cell_month_view_pane_t1_ParamLimits

0x09f1,	// (0x00054371) main_clock2_btn_pane_g1

0x060e,	// (0x00053f8e) main_clock2_btn_pane_t1

0x0a1b,	// (0x0005439b) listscroll_cmail_pane_ParamLimits

0xe356,	// (0x00061cd6) main_sp_fs_email_pane_g1_ParamLimits

0xe362,	// (0x00061ce2) main_sp_fs_email_pane_g2_ParamLimits

0xfc79,	// (0x000635f9) main_sp_fs_email_pane_g_ParamLimits

0xe942,	// (0x000622c2) list_recal_day_pane_ParamLimits

0xe953,	// (0x000622d3) mian_recal_day_pane_t1

0xaaca,	// (0x0005e44a) list_single_dyc_row_text_pane_t4_ParamLimits

0xaaca,	// (0x0005e44a) list_single_dyc_row_text_pane_t4

0xab13,	// (0x0005e493) list_single_dyc_row_text_pane_t5_ParamLimits

0xab13,	// (0x0005e493) list_single_dyc_row_text_pane_t5

0xe404,	// (0x00061d84) list_single_dyc_row_text_pane_t6_ParamLimits

0xe404,	// (0x00061d84) list_single_dyc_row_text_pane_t6

0x57f0,	// (0x00059170) aid_mgn_list_cale_time_pane

0xc0eb,	// (0x0005fa6b) main_gallery2_pane_ParamLimits

0xc9cf,	// (0x0006034f) main_clock2_pane_cp01_t1

0xc9dd,	// (0x0006035d) main_clock2_pane_cp01_t3

0x0001,

0xf75f,	// (0x000630df) main_clock2_pane_cp01_t

0x445c,	// (0x00057ddc) cale_week_scroll_pane_g16_ParamLimits

0x445c,	// (0x00057ddc) cale_week_scroll_pane_g16

0x0c98,	// (0x00054618) vorec_slider_pane

0x0385,	// (0x00053d05) vidtel_button_pane_t1_ParamLimits

0xb17b,	// (0x0005eafb) main_fs_bigclock_clock_pane_g1_ParamLimits

0xb17b,	// (0x0005eafb) main_fs_bigclock_clock_pane_g2_ParamLimits

0xb18c,	// (0x0005eb0c) main_fs_bigclock_clock_pane_g3_ParamLimits

0xb18c,	// (0x0005eb0c) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd7c,	// (0x000636fc) main_fs_bigclock_clock_pane_g_ParamLimits

0xb19f,	// (0x0005eb1f) main_fs_bigclock_clock_pane_t1_ParamLimits

0xb1b5,	// (0x0005eb35) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd85,	// (0x00063705) main_fs_bigclock_clock_pane_t_ParamLimits

0x7483,	// (0x0005ae03) main_mup3_lyrics_pane_ParamLimits

0x7483,	// (0x0005ae03) main_mup3_lyrics_pane

0xbe9a,	// (0x0005f81a) main_mup3_lyrics_pane_t1_ParamLimits

0xbe9a,	// (0x0005f81a) main_mup3_lyrics_pane_t1

0xcdfc,	// (0x0006077c) aid_main_mp4_pane_t1_area

0xce06,	// (0x00060786) aid_main_mp4_pane_t2_area

0xceb2,	// (0x00060832) main_mp4_pane_g7_ParamLimits

0xceb2,	// (0x00060832) main_mp4_pane_g7

0xcebe,	// (0x0006083e) main_mp4_pane_g8_ParamLimits

0xcebe,	// (0x0006083e) main_mp4_pane_g8

0x858b,	// (0x0005bf0b) aid_call6_pane_g1_size

0xbb54,	// (0x0005f4d4) list_double_large_graphic_phob2_other_pane_ParamLimits

0xbb54,	// (0x0005f4d4) list_double_large_graphic_phob2_other_pane

0x14af,	// (0x00054e2f) list_double_large_graphic_phob2_other_pane_g1

0xc074,	// (0x0005f9f4) list_highlight_pane_cp026

0x0a1b,	// (0x0005439b) main_welc_pane_ParamLimits

0xa909,	// (0x0005e289) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xa909,	// (0x0005e289) main_sp_fs_ctrlbar_pane_g3

0xa923,	// (0x0005e2a3) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xa923,	// (0x0005e2a3) main_sp_fs_ctrlbar_pane_g4

0xa957,	// (0x0005e2d7) toolbar2_fixed_button_pane_cp01

0xa962,	// (0x0005e2e2) toolbar2_fixed_button_pane_cp02

0xa96f,	// (0x0005e2ef) toolbar2_fixed_button_pane_cp03

0xbbf9,	// (0x0005f579) list_welc_entry_pane_ParamLimits

0xbbf9,	// (0x0005f579) list_welc_entry_pane

0xbc77,	// (0x0005f5f7) main_welc_pane_g3_ParamLimits

0xbc77,	// (0x0005f5f7) main_welc_pane_g3

0xbcc4,	// (0x0005f644) main_welc_pane_t2_ParamLimits

0xbcc4,	// (0x0005f644) main_welc_pane_t2

0xbcde,	// (0x0005f65e) main_welc_pane_t3_ParamLimits

0xbcde,	// (0x0005f65e) main_welc_pane_t3

0x0005,

0xfe88,	// (0x00063808) main_welc_pane_t_ParamLimits

0xfe88,	// (0x00063808) main_welc_pane_t

0xbd90,	// (0x0005f710) welc_button_pane_ParamLimits

0xbd90,	// (0x0005f710) welc_button_pane

0xbdf8,	// (0x0005f778) welc_service_logo_pane_ParamLimits

0xbdf8,	// (0x0005f778) welc_service_logo_pane

0xbeb6,	// (0x0005f836) list_single_welc_entry_pane_ParamLimits

0xbeb6,	// (0x0005f836) list_single_welc_entry_pane

0xbec7,	// (0x0005f847) list_single_welc_entry_pane_g1

0xbecf,	// (0x0005f84f) list_single_welc_entry_pane_t1

0xbedd,	// (0x0005f85d) list_single_welc_entry_pane_t2

0x0001,

0xfe9a,	// (0x0006381a) list_single_welc_entry_pane_t

0xc074,	// (0x0005f9f4) bg_button_pane_cp035

0x06ad,	// (0x0005402d) welc_button_pane_t1

0x06bb,	// (0x0005403b) welc_service_logo_pane_g1

0x06c4,	// (0x00054044) welc_service_logo_pane_g2

0x0001,

0xfe9f,	// (0x0006381f) welc_service_logo_pane_g

0xc0f9,	// (0x0005fa79) main_int_radio_pane

0xdc78,	// (0x000615f8) list_single_fs_dyc_pane_g1

0xba84,	// (0x0005f404) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xba84,	// (0x0005f404) list_double_large_graphic_phob2_pane_g3

0xba90,	// (0x0005f410) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xba90,	// (0x0005f410) list_double_large_graphic_phob2_pane_g4

0xbeeb,	// (0x0005f86b) main_int_radio1_pane_ParamLimits

0xbeeb,	// (0x0005f86b) main_int_radio1_pane

0x06df,	// (0x0005405f) find_pane_cp02

0xbf08,	// (0x0005f888) input_focus_pane_cp12_ParamLimits

0xbf08,	// (0x0005f888) input_focus_pane_cp12

0xbf18,	// (0x0005f898) input_focus_pane_cp13_ParamLimits

0xbf18,	// (0x0005f898) input_focus_pane_cp13

0xbf2c,	// (0x0005f8ac) input_focus_pane_cp14_ParamLimits

0xbf2c,	// (0x0005f8ac) input_focus_pane_cp14

0x0724,	// (0x000540a4) int_radio1_listscroll_pane

0xbf40,	// (0x0005f8c0) main_int_radio1_pane_g1_ParamLimits

0xbf40,	// (0x0005f8c0) main_int_radio1_pane_g1

0xbf58,	// (0x0005f8d8) main_int_radio1_pane_t1_ParamLimits

0xbf58,	// (0x0005f8d8) main_int_radio1_pane_t1

0xbf73,	// (0x0005f8f3) main_int_radio1_pane_t2_ParamLimits

0xbf73,	// (0x0005f8f3) main_int_radio1_pane_t2

0xbf8e,	// (0x0005f90e) main_int_radio1_pane_t3_ParamLimits

0xbf8e,	// (0x0005f90e) main_int_radio1_pane_t3

0xbfa9,	// (0x0005f929) main_int_radio1_pane_t4_ParamLimits

0xbfa9,	// (0x0005f929) main_int_radio1_pane_t4

0x0791,	// (0x00054111) main_int_radio1_pane_t5_ParamLimits

0x0791,	// (0x00054111) main_int_radio1_pane_t5

0xbfbb,	// (0x0005f93b) main_int_radio1_pane_t6_ParamLimits

0xbfbb,	// (0x0005f93b) main_int_radio1_pane_t6

0xbfd0,	// (0x0005f950) main_int_radio1_pane_t7_ParamLimits

0xbfd0,	// (0x0005f950) main_int_radio1_pane_t7

0xbfe5,	// (0x0005f965) main_int_radio1_pane_t8_ParamLimits

0xbfe5,	// (0x0005f965) main_int_radio1_pane_t8

0xc004,	// (0x0005f984) main_int_radio1_pane_t9_ParamLimits

0xc004,	// (0x0005f984) main_int_radio1_pane_t9

0xc016,	// (0x0005f996) main_int_radio1_pane_t10_ParamLimits

0xc016,	// (0x0005f996) main_int_radio1_pane_t10

0xc03c,	// (0x0005f9bc) main_int_radio1_pane_t11_ParamLimits

0xc03c,	// (0x0005f9bc) main_int_radio1_pane_t11

0xc062,	// (0x0005f9e2) main_int_radio1_pane_t12_ParamLimits

0xc062,	// (0x0005f9e2) main_int_radio1_pane_t12

0x000b,

0xfea4,	// (0x00063824) main_int_radio1_pane_t_ParamLimits

0xfea4,	// (0x00063824) main_int_radio1_pane_t

0x0866,	// (0x000541e6) int_radio_list_pane

0x00b2,	// (0x00053a32) scroll_pane_cp037

0x086e,	// (0x000541ee) list_double_large_graphic_int_radio_pane_ParamLimits

0x086e,	// (0x000541ee) list_double_large_graphic_int_radio_pane

0x0887,	// (0x00054207) list_double_large_graphic_int_radio_pane_g1

0xee7e,	// (0x000627fe) list_double_large_graphic_int_radio_pane_t1

0xee8c,	// (0x0006280c) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfebd,	// (0x0006383d) list_double_large_graphic_int_radio_pane_t

0xc074,	// (0x0005f9f4) list_highlight_pane_cp027

0x03cd,	// (0x00053d4d) main_button_pane_4

0xbc87,	// (0x0005f607) main_welc_pane_g4_ParamLimits

0xbc87,	// (0x0005f607) main_welc_pane_g4

0xbcf6,	// (0x0005f676) main_welc_pane_t4_ParamLimits

0xbcf6,	// (0x0005f676) main_welc_pane_t4

0xbd0b,	// (0x0005f68b) main_welc_pane_t5_ParamLimits

0xbd0b,	// (0x0005f68b) main_welc_pane_t5

0xbd55,	// (0x0005f6d5) main_welc_pane_t6_ParamLimits

0xbd55,	// (0x0005f6d5) main_welc_pane_t6

0xbda7,	// (0x0005f727) welc_button_pane_2_ParamLimits

0xbda7,	// (0x0005f727) welc_button_pane_2

0xbdc3,	// (0x0005f743) welc_button_pane_3_ParamLimits

0xbdc3,	// (0x0005f743) welc_button_pane_3

0x03cd,	// (0x00053d4d) welc_button_pane_4

0xbde2,	// (0x0005f762) welc_button_pane_5_ParamLimits

0xbde2,	// (0x0005f762) welc_button_pane_5

0x683e,	// (0x0005a1be) main_popup_welc_pane

0x0890,	// (0x00054210) main_welc_sk_g3

0x089a,	// (0x0005421a) main_welc_sk_g4

0x08a4,	// (0x00054224) main_welc_sk_t3

0x08b4,	// (0x00054234) main_welc_sk_t4

0x08c4,	// (0x00054244) popup_welc_pane_t4

0x08d2,	// (0x00054252) popup_welc_pane_t5

0x08e0,	// (0x00054260) popup_welc_pane_t6
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
