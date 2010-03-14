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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0008085a };

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
0x55f7,	// (0x00085e51) Screen

0x5603,	// (0x00085e5d) application_window

0x5643,	// (0x00085e9d) area_bottom_pane_ParamLimits

0x5643,	// (0x00085e9d) area_bottom_pane

0x5678,	// (0x00085ed2) area_top_pane_ParamLimits

0x5678,	// (0x00085ed2) area_top_pane

0x01bf,	// (0x00080a19) call_video_uplink_pane_ParamLimits

0x01bf,	// (0x00080a19) call_video_uplink_pane

0x5705,	// (0x00085f5f) main_pane_ParamLimits

0x5705,	// (0x00085f5f) main_pane

0x0ced,	// (0x00081547) context_pane

0x880f,	// (0x00089069) navi_pane

0x8833,	// (0x0008908d) popup_cale_events_window_ParamLimits

0x8833,	// (0x0008908d) popup_cale_events_window

0x0d00,	// (0x0008155a) popup_mup_playback_window

0x884b,	// (0x000890a5) signal_pane

0x4514,	// (0x00084d6e) main_browser_pane

0xe1b3,	// (0x0008ea0d) main_burst_pane

0x86c1,	// (0x00088f1b) main_calc_pane

0xe1b3,	// (0x0008ea0d) main_cale_day_pane

0x4514,	// (0x00084d6e) main_cale_month_pane

0xe1b3,	// (0x0008ea0d) main_cale_week_pane

0xe1b3,	// (0x0008ea0d) main_call_pane

0x41e6,	// (0x00084a40) main_call_poc_pane

0xe1b3,	// (0x0008ea0d) main_camera_pane

0xe1b3,	// (0x0008ea0d) main_chi_dic_pane

0xe055,	// (0x0008e8af) main_clock_pane

0x41e6,	// (0x00084a40) main_fmradio_pane

0xe1b3,	// (0x0008ea0d) main_graph_messa_pane

0x41e6,	// (0x00084a40) main_help_pane

0x4514,	// (0x00084d6e) main_im_pane

0x4441,	// (0x00084c9b) main_image_pane_ParamLimits

0x4441,	// (0x00084c9b) main_image_pane

0x41e6,	// (0x00084a40) main_location2_pane

0xe1b3,	// (0x0008ea0d) main_location_pane

0x41e6,	// (0x00084a40) main_messa_pane

0x41e6,	// (0x00084a40) main_mp2_pane

0xe1b3,	// (0x0008ea0d) main_mp_pane

0x41e6,	// (0x00084a40) main_msg_pane

0x41e6,	// (0x00084a40) main_mup_eq_pane

0x41e6,	// (0x00084a40) main_mup_pane

0x4514,	// (0x00084d6e) main_notes_pane

0x41e6,	// (0x00084a40) main_pec_pane

0x41e6,	// (0x00084a40) main_phob_pane

0x41e6,	// (0x00084a40) main_pinb_pane

0x41e6,	// (0x00084a40) main_postcard_pane

0x41e6,	// (0x00084a40) main_qdial_pane

0xe1b3,	// (0x0008ea0d) main_skin_pane

0x41e6,	// (0x00084a40) main_smil2_pane

0xe1b3,	// (0x0008ea0d) main_smil_pane

0xe1b3,	// (0x0008ea0d) main_video_pane

0xe1b3,	// (0x0008ea0d) main_video_tele_pane

0x4441,	// (0x00084c9b) main_viewer_pane_ParamLimits

0x4441,	// (0x00084c9b) main_viewer_pane

0xe1b3,	// (0x0008ea0d) main_vorec_pane

0x86f9,	// (0x00088f53) popup_blid_sat_info_window_ParamLimits

0x86f9,	// (0x00088f53) popup_blid_sat_info_window

0x8713,	// (0x00088f6d) popup_dyc_status_message_window_ParamLimits

0x8713,	// (0x00088f6d) popup_dyc_status_message_window

0x8723,	// (0x00088f7d) popup_grid_large_graphic_window_ParamLimits

0x8723,	// (0x00088f7d) popup_grid_large_graphic_window

0x879b,	// (0x00088ff5) popup_loc_request_window_ParamLimits

0x879b,	// (0x00088ff5) popup_loc_request_window

0x87e3,	// (0x0008903d) popup_wml_address_window_ParamLimits

0x87e3,	// (0x0008903d) popup_wml_address_window

0x8599,	// (0x00088df3) call_muted_g1

0x8258,	// (0x00088ab2) popup_call_audio_conf_window_ParamLimits

0x8258,	// (0x00088ab2) popup_call_audio_conf_window

0x85a9,	// (0x00088e03) popup_call_audio_first_window_ParamLimits

0x85a9,	// (0x00088e03) popup_call_audio_first_window

0x85e9,	// (0x00088e43) popup_call_audio_in_window_ParamLimits

0x85e9,	// (0x00088e43) popup_call_audio_in_window

0x860d,	// (0x00088e67) popup_call_audio_out_window_ParamLimits

0x860d,	// (0x00088e67) popup_call_audio_out_window

0x862f,	// (0x00088e89) popup_call_audio_second_window_ParamLimits

0x862f,	// (0x00088e89) popup_call_audio_second_window

0x865f,	// (0x00088eb9) popup_call_audio_wait_window_ParamLimits

0x865f,	// (0x00088eb9) popup_call_audio_wait_window

0x8680,	// (0x00088eda) popup_number_entry_window_ParamLimits

0x8680,	// (0x00088eda) popup_number_entry_window

0x01eb,	// (0x00080a45) bg_popup_call_pane_cp05_ParamLimits

0x01eb,	// (0x00080a45) bg_popup_call_pane_cp05

0x020b,	// (0x00080a65) popup_number_entry_window_t1

0x021e,	// (0x00080a78) popup_number_entry_window_t2

0x0230,	// (0x00080a8a) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x0008f941) popup_number_entry_window_t

0x0277,	// (0x00080ad1) text_title_cp2

0x028a,	// (0x00080ae4) bg_popup_call_pane_cp_ParamLimits

0x028a,	// (0x00080ae4) bg_popup_call_pane_cp

0x0298,	// (0x00080af2) call_thumbnail_pane

0x02a0,	// (0x00080afa) popup_call_audio_in_window_g1_ParamLimits

0x02a0,	// (0x00080afa) popup_call_audio_in_window_g1

0x02ac,	// (0x00080b06) popup_call_audio_in_window_g2_ParamLimits

0x02ac,	// (0x00080b06) popup_call_audio_in_window_g2

0x02b8,	// (0x00080b12) popup_call_audio_in_window_g3_ParamLimits

0x02b8,	// (0x00080b12) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x0008f94a) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x0008f94a) popup_call_audio_in_window_g

0x02c4,	// (0x00080b1e) popup_call_audio_in_window_t1_ParamLimits

0x02c4,	// (0x00080b1e) popup_call_audio_in_window_t1

0x02e0,	// (0x00080b3a) popup_call_audio_in_window_t2_ParamLimits

0x02e0,	// (0x00080b3a) popup_call_audio_in_window_t2

0x02fc,	// (0x00080b56) popup_call_audio_in_window_t3_ParamLimits

0x02fc,	// (0x00080b56) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x0008f951) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x0008f951) popup_call_audio_in_window_t

0x028a,	// (0x00080ae4) bg_popup_call_pane_cp01_ParamLimits

0x028a,	// (0x00080ae4) bg_popup_call_pane_cp01

0x0298,	// (0x00080af2) call_thumbnail_pane_cp02

0x030f,	// (0x00080b69) call_type_pane_cp022

0x0317,	// (0x00080b71) popup_call_audio_out_window_g1_ParamLimits

0x0317,	// (0x00080b71) popup_call_audio_out_window_g1

0x0329,	// (0x00080b83) popup_call_audio_out_window_g2_ParamLimits

0x0329,	// (0x00080b83) popup_call_audio_out_window_g2

0x0335,	// (0x00080b8f) popup_call_audio_out_window_g3_ParamLimits

0x0335,	// (0x00080b8f) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x0008f958) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x0008f958) popup_call_audio_out_window_g

0x0347,	// (0x00080ba1) popup_call_audio_out_window_t1_ParamLimits

0x0347,	// (0x00080ba1) popup_call_audio_out_window_t1

0x035f,	// (0x00080bb9) popup_call_audio_out_window_t2_ParamLimits

0x035f,	// (0x00080bb9) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x0008f95f) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x0008f95f) popup_call_audio_out_window_t

0x0374,	// (0x00080bce) bg_popup_call_pane_ParamLimits

0x0374,	// (0x00080bce) bg_popup_call_pane

0x58be,	// (0x00086118) call_thumbnail_pane_cp_ParamLimits

0x58be,	// (0x00086118) call_thumbnail_pane_cp

0x3be7,	// (0x00084441) call_type_pane_cp01_ParamLimits

0x3be7,	// (0x00084441) call_type_pane_cp01

0x3c2b,	// (0x00084485) popup_call_audio_first_window_g1_ParamLimits

0x3c2b,	// (0x00084485) popup_call_audio_first_window_g1

0x3c77,	// (0x000844d1) popup_call_audio_first_window_g2_ParamLimits

0x3c77,	// (0x000844d1) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x0008f964) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x0008f964) popup_call_audio_first_window_g

0x3cbb,	// (0x00084515) popup_call_audio_first_window_t1_ParamLimits

0x3cbb,	// (0x00084515) popup_call_audio_first_window_t1

0x3d67,	// (0x000845c1) popup_call_audio_first_window_t4_ParamLimits

0x3d67,	// (0x000845c1) popup_call_audio_first_window_t4

0x41b7,	// (0x00084a11) popup_call_audio_first_window_t5_ParamLimits

0x41b7,	// (0x00084a11) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x0008f969) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x0008f969) popup_call_audio_first_window_t

0x41e6,	// (0x00084a40) bg_popup_call_pane_cp02

0x41f0,	// (0x00084a4a) call_type_pane_cp023

0x41f8,	// (0x00084a52) popup_call_audio_wait_window_g1

0x4200,	// (0x00084a5a) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x0008f970) popup_call_audio_wait_window_g

0x4208,	// (0x00084a62) popup_call_audio_wait_window_t3

0x4216,	// (0x00084a70) bg_popup_call_pane_cp03_ParamLimits

0x4216,	// (0x00084a70) bg_popup_call_pane_cp03

0x4276,	// (0x00084ad0) call_thumbnail_pane_cp011_ParamLimits

0x4276,	// (0x00084ad0) call_thumbnail_pane_cp011

0x4282,	// (0x00084adc) call_type_pane_cp034_ParamLimits

0x4282,	// (0x00084adc) call_type_pane_cp034

0x42be,	// (0x00084b18) popup_call_audio_second_window_g1_ParamLimits

0x42be,	// (0x00084b18) popup_call_audio_second_window_g1

0x42fa,	// (0x00084b54) popup_call_audio_second_window_g2_ParamLimits

0x42fa,	// (0x00084b54) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x0008f975) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x0008f975) popup_call_audio_second_window_g

0x4336,	// (0x00084b90) popup_call_audio_second_window_t1_ParamLimits

0x4336,	// (0x00084b90) popup_call_audio_second_window_t1

0x43b7,	// (0x00084c11) popup_call_audio_second_window_t2_ParamLimits

0x43b7,	// (0x00084c11) popup_call_audio_second_window_t2

0x43ed,	// (0x00084c47) popup_call_audio_second_window_t3_ParamLimits

0x43ed,	// (0x00084c47) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x0008f97a) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x0008f97a) popup_call_audio_second_window_t

0x41e6,	// (0x00084a40) bg_popup_call_pane_cp04

0x4423,	// (0x00084c7d) list_conf_pane

0x442b,	// (0x00084c85) popup_call_audio_conf_window_t1

0x4439,	// (0x00084c93) call_thumbnail_pane_g1

0x4441,	// (0x00084c9b) bg_pinb_pane_ParamLimits

0x4441,	// (0x00084c9b) bg_pinb_pane

0x444f,	// (0x00084ca9) find_pinb_pane

0x4458,	// (0x00084cb2) listscroll_pinb_pane_ParamLimits

0x4458,	// (0x00084cb2) listscroll_pinb_pane

0x4467,	// (0x00084cc1) pinb_bg_pane_g1

0x58e2,	// (0x0008613c) pinb_bg_pane_g2

0x58ee,	// (0x00086148) pinb_bg_pane_g3

0x58fa,	// (0x00086154) pinb_bg_pane_g4

0x5906,	// (0x00086160) pinb_bg_pane_g5

0x5912,	// (0x0008616c) pinb_bg_pane_g6

0x591d,	// (0x00086177) pinb_bg_pane_g7

0x5928,	// (0x00086182) pinb_bg_pane_g8

0x5933,	// (0x0008618d) pinb_bg_pane_g9

0x593d,	// (0x00086197) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x0008f981) pinb_bg_pane_g

0x595a,	// (0x000861b4) grid_pinb_pane

0x5965,	// (0x000861bf) list_pinb_pane

0x5970,	// (0x000861ca) scroll_pane_cp01_ParamLimits

0x5970,	// (0x000861ca) scroll_pane_cp01

0x4471,	// (0x00084ccb) find_pinb_pane_g1_ParamLimits

0x4471,	// (0x00084ccb) find_pinb_pane_g1

0x4489,	// (0x00084ce3) find_pinb_pane_t1

0x449b,	// (0x00084cf5) find_pinb_pane_t2

0x0001,

0xf141,	// (0x0008f99b) find_pinb_pane_t

0x44b0,	// (0x00084d0a) input_focus_pane_cp01_ParamLimits

0x44b0,	// (0x00084d0a) input_focus_pane_cp01

0x5982,	// (0x000861dc) cell_pinb_pane_ParamLimits

0x5982,	// (0x000861dc) cell_pinb_pane

0x59a0,	// (0x000861fa) cell_pinb_pane_g1_ParamLimits

0x59a0,	// (0x000861fa) cell_pinb_pane_g1

0x59b5,	// (0x0008620f) cell_pinb_pane_g2_ParamLimits

0x59b5,	// (0x0008620f) cell_pinb_pane_g2

0x44bc,	// (0x00084d16) cell_pinb_pane_g3_ParamLimits

0x44bc,	// (0x00084d16) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x0008f9a0) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x0008f9a0) cell_pinb_pane_g

0x41e6,	// (0x00084a40) grid_highlight_pane_cp01

0x59c1,	// (0x0008621b) list_pinb_item_pane_ParamLimits

0x59c1,	// (0x0008621b) list_pinb_item_pane

0x41e6,	// (0x00084a40) list_highlight_pane_cp02

0x59dc,	// (0x00086236) list_pinb_item_pane_g1_ParamLimits

0x59dc,	// (0x00086236) list_pinb_item_pane_g1

0x59e9,	// (0x00086243) list_pinb_item_pane_g2_ParamLimits

0x59e9,	// (0x00086243) list_pinb_item_pane_g2

0x59f5,	// (0x0008624f) list_pinb_item_pane_g3_ParamLimits

0x59f5,	// (0x0008624f) list_pinb_item_pane_g3

0x5a06,	// (0x00086260) list_pinb_item_pane_g4_ParamLimits

0x5a06,	// (0x00086260) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x0008f9a7) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x0008f9a7) list_pinb_item_pane_g

0x5a12,	// (0x0008626c) list_pinb_item_pane_t1_ParamLimits

0x5a12,	// (0x0008626c) list_pinb_item_pane_t1

0x5a43,	// (0x0008629d) calc_display_pane

0x5a61,	// (0x000862bb) calc_paper_pane

0x5a7d,	// (0x000862d7) grid_calc_pane

0x41e6,	// (0x00084a40) bg_list_pane_cp01

0x5aa9,	// (0x00086303) clock_g1

0x5ab1,	// (0x0008630b) clock_g2

0x0001,

0xf156,	// (0x0008f9b0) clock_g

0x5abb,	// (0x00086315) clock_t1_ParamLimits

0x5abb,	// (0x00086315) clock_t1

0x5ad0,	// (0x0008632a) clock_t2_ParamLimits

0x5ad0,	// (0x0008632a) clock_t2

0x5ae2,	// (0x0008633c) clock_t3_ParamLimits

0x5ae2,	// (0x0008633c) clock_t3

0x5af4,	// (0x0008634e) clock_t4_ParamLimits

0x5af4,	// (0x0008634e) clock_t4

0x5b06,	// (0x00086360) clock_t5_ParamLimits

0x5b06,	// (0x00086360) clock_t5

0x5b1b,	// (0x00086375) clock_t6_ParamLimits

0x5b1b,	// (0x00086375) clock_t6

0x5b2d,	// (0x00086387) clock_t7_ParamLimits

0x5b2d,	// (0x00086387) clock_t7

0x5b3f,	// (0x00086399) clock_t8_ParamLimits

0x5b3f,	// (0x00086399) clock_t8

0x5b55,	// (0x000863af) clock_t9_ParamLimits

0x5b55,	// (0x000863af) clock_t9

0x0008,

0xf15b,	// (0x0008f9b5) clock_t_ParamLimits

0xf15b,	// (0x0008f9b5) clock_t

0x44c8,	// (0x00084d22) popup_clock_analogue_window_cp02

0x44c8,	// (0x00084d22) popup_clock_digital_window_cp01

0x44d0,	// (0x00084d2a) listscroll_help_pane

0x41e6,	// (0x00084a40) phob_pre_status_pane

0x44da,	// (0x00084d34) grid_qdial_pane

0x41e6,	// (0x00084a40) listscroll_mce_pane

0x44e4,	// (0x00084d3e) bg_notes_pane

0x44f2,	// (0x00084d4c) list_notes_pane

0x5b6b,	// (0x000863c5) scroll_pane_cp06

0x4500,	// (0x00084d5a) bg_calc_paper_pane

0x5b84,	// (0x000863de) list_calc_pane

0x4514,	// (0x00084d6e) bg_calc_display_pane

0x5b9e,	// (0x000863f8) calc_display_pane_t1

0x5bb3,	// (0x0008640d) calc_display_pane_t2

0x5bc8,	// (0x00086422) calc_display_pane_t3

0x0002,

0xf16e,	// (0x0008f9c8) calc_display_pane_t

0x5bda,	// (0x00086434) cell_calc_pane_ParamLimits

0x5bda,	// (0x00086434) cell_calc_pane

0x4520,	// (0x00084d7a) bg_calc_paper_pane_g1

0x4538,	// (0x00084d92) bg_calc_paper_pane_g2

0x452c,	// (0x00084d86) bg_calc_paper_pane_g3

0x4550,	// (0x00084daa) bg_calc_paper_pane_g4

0x4544,	// (0x00084d9e) bg_calc_paper_pane_g5

0x5c09,	// (0x00086463) bg_calc_paper_pane_g6

0x5c1a,	// (0x00086474) bg_calc_paper_pane_g7

0x5c2b,	// (0x00086485) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x0008f9cf) bg_calc_paper_pane_g

0x5c3e,	// (0x00086498) calc_bg_paper_pane_g9

0x5c51,	// (0x000864ab) list_calc_item_pane_ParamLimits

0x5c51,	// (0x000864ab) list_calc_item_pane

0x455c,	// (0x00084db6) list_calc_item_pane_g1

0x5c72,	// (0x000864cc) list_calc_item_pane_t1_ParamLimits

0x5c72,	// (0x000864cc) list_calc_item_pane_t1

0x5c84,	// (0x000864de) list_calc_item_pane_t2_ParamLimits

0x5c84,	// (0x000864de) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x0008f9e0) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x0008f9e0) list_calc_item_pane_t

0x4569,	// (0x00084dc3) cell_calc_pane_g1

0x4573,	// (0x00084dcd) grid_highlight_pane_cp02

0x459e,	// (0x00084df8) bg_calc_display_pane_g1

0x5cb4,	// (0x0008650e) bg_calc_display_pane_g2

0x4595,	// (0x00084def) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x0008f9ea) bg_calc_display_pane_g

0x5cbe,	// (0x00086518) cell_qdial_pane_ParamLimits

0x5cbe,	// (0x00086518) cell_qdial_pane

0x5cd4,	// (0x0008652e) cell_qdial_pane_g1_ParamLimits

0x5cd4,	// (0x0008652e) cell_qdial_pane_g1

0x5ce1,	// (0x0008653b) cell_qdial_pane_g2_ParamLimits

0x5ce1,	// (0x0008653b) cell_qdial_pane_g2

0x45a7,	// (0x00084e01) cell_qdial_pane_g3_ParamLimits

0x45a7,	// (0x00084e01) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x0008f9f1) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x0008f9f1) cell_qdial_pane_g

0x5cff,	// (0x00086559) cell_qdial_pane_t1_ParamLimits

0x5cff,	// (0x00086559) cell_qdial_pane_t1

0x5d17,	// (0x00086571) cell_qdial_pane_t2_ParamLimits

0x5d17,	// (0x00086571) cell_qdial_pane_t2

0x5d2a,	// (0x00086584) cell_qdial_pane_t3_ParamLimits

0x5d2a,	// (0x00086584) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x0008f9fa) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x0008f9fa) cell_qdial_pane_t

0x41e6,	// (0x00084a40) grid_highlight_pane_cp04

0x45b3,	// (0x00084e0d) thumbnail_qdial_pane_ParamLimits

0x45b3,	// (0x00084e0d) thumbnail_qdial_pane

0x460f,	// (0x00084e69) list_help_pane

0x4618,	// (0x00084e72) scroll_pane_cp02

0x5d3d,	// (0x00086597) help_list_pane_t1_ParamLimits

0x5d3d,	// (0x00086597) help_list_pane_t1

0x5d64,	// (0x000865be) bg_notes_pane_g2

0x5d6c,	// (0x000865c6) bg_notes_pane_g3

0x5d74,	// (0x000865ce) notes_bg_pane_g1

0x5d7c,	// (0x000865d6) notes_bg_pane_g4

0x5d84,	// (0x000865de) notes_bg_pane_g5

0x5d8c,	// (0x000865e6) notes_bg_pane_g6

0x5d94,	// (0x000865ee) notes_bg_pane_g7

0x5d9c,	// (0x000865f6) notes_bg_pane_g8

0x5da4,	// (0x000865fe) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x0008fa18) notes_bg_pane_g

0x5dac,	// (0x00086606) list_notes_text_pane_ParamLimits

0x5dac,	// (0x00086606) list_notes_text_pane

0x4621,	// (0x00084e7b) list_notes_text_pane_g1

0x5dce,	// (0x00086628) list_notes_text_pane_t1

0x4514,	// (0x00084d6e) listscroll_cale_week_pane

0x5df9,	// (0x00086653) bg_cale_heading_pane

0x463b,	// (0x00084e95) bg_cale_pane_cp01

0x5e15,	// (0x0008666f) cale_week_corner_pane

0x5e2b,	// (0x00086685) cale_week_day_heading_pane

0x5e47,	// (0x000866a1) cale_week_scroll_pane_g1

0x5e60,	// (0x000866ba) cale_week_scroll_pane_g2

0x5e71,	// (0x000866cb) cale_week_scroll_pane_g3

0x5e82,	// (0x000866dc) cale_week_scroll_pane_g4

0x5e93,	// (0x000866ed) cale_week_scroll_pane_g5

0x5ea4,	// (0x000866fe) cale_week_scroll_pane_g6

0x5eb7,	// (0x00086711) cale_week_scroll_pane_g7

0x5eca,	// (0x00086724) cale_week_scroll_pane_g8

0x5edd,	// (0x00086737) cale_week_scroll_pane_g9

0x5eee,	// (0x00086748) cale_week_scroll_pane_g10

0x5eff,	// (0x00086759) cale_week_scroll_pane_g11

0x5f10,	// (0x0008676a) cale_week_scroll_pane_g12

0x5f21,	// (0x0008677b) cale_week_scroll_pane_g13

0x5f32,	// (0x0008678c) cale_week_scroll_pane_g14

0x5f4b,	// (0x000867a5) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x0008fa27) cale_week_scroll_pane_g

0x5f64,	// (0x000867be) cale_week_time_pane

0x5f77,	// (0x000867d1) grid_cale_week_pane

0x5f94,	// (0x000867ee) scroll_pane_cp08

0x5fae,	// (0x00086808) cell_cale_week_pane_ParamLimits

0x5fae,	// (0x00086808) cell_cale_week_pane

0x5ff0,	// (0x0008684a) cale_week_day_heading_pane_t1

0x601d,	// (0x00086877) cale_week_day_heading_pane_t2

0x604a,	// (0x000868a4) cale_week_day_heading_pane_t3

0x6077,	// (0x000868d1) cale_week_day_heading_pane_t4

0x60a4,	// (0x000868fe) cale_week_day_heading_pane_t5

0x60d1,	// (0x0008692b) cale_week_day_heading_pane_t6

0x60fe,	// (0x00086958) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x0008fa46) cale_week_day_heading_pane_t

0x4666,	// (0x00084ec0) bg_cale_side_pane

0x612b,	// (0x00086985) cale_week_time_pane_t1

0x6143,	// (0x0008699d) cale_week_time_pane_t2

0x615b,	// (0x000869b5) cale_week_time_pane_t3

0x6173,	// (0x000869cd) cale_week_time_pane_t4

0x618b,	// (0x000869e5) cale_week_time_pane_t5

0x61a3,	// (0x000869fd) cale_week_time_pane_t6

0x61bb,	// (0x00086a15) cale_week_time_pane_t7

0x61d3,	// (0x00086a2d) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x0008fa55) cale_week_time_pane_t

0x61ef,	// (0x00086a49) cell_cale_week_pane_g2

0x6208,	// (0x00086a62) cell_cale_week_pane_g3_ParamLimits

0x6208,	// (0x00086a62) cell_cale_week_pane_g3

0x4674,	// (0x00084ece) grid_highlight_pane_cp07

0x467c,	// (0x00084ed6) listscroll_gms_pane

0x4686,	// (0x00084ee0) grid_gms_pane

0x468f,	// (0x00084ee9) listscroll_gms_pane_g1

0x4697,	// (0x00084ef1) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x0008fa66) listscroll_gms_pane_g

0x6220,	// (0x00086a7a) scroll_pane_cp010

0x622b,	// (0x00086a85) cell_gms_pane_ParamLimits

0x622b,	// (0x00086a85) cell_gms_pane

0x623e,	// (0x00086a98) cell_gms_pane_g1

0x469f,	// (0x00084ef9) cell_gms_pane_g2

0x46a7,	// (0x00084f01) cell_gms_pane_g3

0x46b0,	// (0x00084f0a) cell_gms_pane_g4

0x0003,

0xf211,	// (0x0008fa6b) cell_gms_pane_g

0x46b9,	// (0x00084f13) grid_highlight_pane_cp09

0x8541,	// (0x00088d9b) phob_pre_status_pane_g1

0x8549,	// (0x00088da3) phob_pre_status_pane_g2

0x8551,	// (0x00088dab) phob_pre_status_pane_g3

0x8559,	// (0x00088db3) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x0008fe5a) phob_pre_status_pane_g

0x8569,	// (0x00088dc3) phob_pre_status_pane_t1

0x8579,	// (0x00088dd3) phob_pre_status_pane_t2

0x8589,	// (0x00088de3) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x0008fe65) phob_pre_status_pane_t

0x41e6,	// (0x00084a40) bg_list_pane_cp05

0x624e,	// (0x00086aa8) grid_vorec_pane

0x6258,	// (0x00086ab2) vorec_t1

0x6266,	// (0x00086ac0) vorec_t2

0x6274,	// (0x00086ace) vorec_t3

0x6282,	// (0x00086adc) vorec_t4

0x6290,	// (0x00086aea) vorec_t5

0x629e,	// (0x00086af8) vorec_t6

0x0006,

0xf21a,	// (0x0008fa74) vorec_t

0x62ba,	// (0x00086b14) wait_bar_pane_cp01

0x62c2,	// (0x00086b1c) cell_vorec_pane_ParamLimits

0x62c2,	// (0x00086b1c) cell_vorec_pane

0xd90a,	// (0x0008e164) cell_vorec_pane_g1

0x41e6,	// (0x00084a40) grid_highlight_pane_cp05

0x62e5,	// (0x00086b3f) cams_zoom_pane

0x62f1,	// (0x00086b4b) image_vga_pane

0x6300,	// (0x00086b5a) main_camera_pane_g1

0x630e,	// (0x00086b68) main_camera_pane_g2

0x631a,	// (0x00086b74) main_camera_pane_g3

0x6328,	// (0x00086b82) main_camera_pane_g4

0x6336,	// (0x00086b90) main_camera_pane_g5

0x6344,	// (0x00086b9e) main_camera_pane_g6

0x6352,	// (0x00086bac) main_camera_pane_g7

0x0007,

0xf229,	// (0x0008fa83) main_camera_pane_g

0x6360,	// (0x00086bba) main_camera_pane_t1

0x6372,	// (0x00086bcc) main_camera_pane_t2

0x0001,

0xf23a,	// (0x0008fa94) main_camera_pane_t

0x6395,	// (0x00086bef) cams_zoom_pane_cp_ParamLimits

0x6395,	// (0x00086bef) cams_zoom_pane_cp

0x63b9,	// (0x00086c13) image_cif_pane_ParamLimits

0x63b9,	// (0x00086c13) image_cif_pane

0x63d7,	// (0x00086c31) image_subqcif_pane

0x63e1,	// (0x00086c3b) main_video_pane_g1_ParamLimits

0x63e1,	// (0x00086c3b) main_video_pane_g1

0x6401,	// (0x00086c5b) main_video_pane_g2_ParamLimits

0x6401,	// (0x00086c5b) main_video_pane_g2

0x6431,	// (0x00086c8b) main_video_pane_g3_ParamLimits

0x6431,	// (0x00086c8b) main_video_pane_g3

0x645a,	// (0x00086cb4) main_video_pane_g4_ParamLimits

0x645a,	// (0x00086cb4) main_video_pane_g4

0x6483,	// (0x00086cdd) main_video_pane_g5_ParamLimits

0x6483,	// (0x00086cdd) main_video_pane_g5

0xd920,	// (0x0008e17a) main_video_pane_g6_ParamLimits

0xd920,	// (0x0008e17a) main_video_pane_g6

0x0006,

0xf23f,	// (0x0008fa99) main_video_pane_g_ParamLimits

0xf23f,	// (0x0008fa99) main_video_pane_g

0x64a5,	// (0x00086cff) main_video_pane_t1_ParamLimits

0x64a5,	// (0x00086cff) main_video_pane_t1

0xd93a,	// (0x0008e194) cams_zoom_pane_g1

0xd943,	// (0x0008e19d) cams_zoom_pane_g2

0xd94c,	// (0x0008e1a6) cams_zoom_pane_g3

0xd955,	// (0x0008e1af) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x0008faa8) cams_zoom_pane_g

0x64ef,	// (0x00086d49) grid_cams_pane

0x64fd,	// (0x00086d57) linegrid_cams_pane

0x6509,	// (0x00086d63) cell_cams_pane_ParamLimits

0x6509,	// (0x00086d63) cell_cams_pane

0xd95e,	// (0x0008e1b8) cams_burst_image_pane

0xd966,	// (0x0008e1c0) cell_cams_pane_g1

0x41e6,	// (0x00084a40) grid_highlight_pane_cp03

0x4569,	// (0x00084dc3) mp_bg_pane_g1

0x41e6,	// (0x00084a40) bg_list_pane_cp03

0x0bbf,	// (0x00081419) bg_mp_pane

0x0bc7,	// (0x00081421) grid_mp_pane

0x0bcf,	// (0x00081429) media_player_g1

0x0bd9,	// (0x00081433) media_player_t1

0x0be7,	// (0x00081441) media_player_t2

0x0bf5,	// (0x0008144f) media_player_t3

0x0c03,	// (0x0008145d) media_player_t4

0x0c11,	// (0x0008146b) media_player_t5

0x0c1f,	// (0x00081479) media_player_t6

0x0c2d,	// (0x00081487) media_player_t7

0x0006,

0xf5ea,	// (0x0008fe44) media_player_t

0x0c3b,	// (0x00081495) wait_bar_pane_cp02

0xf5cf,	// (0x0008fe29) main_usb_pane_t

0x8538,	// (0x00088d92) cell_mp_pane

0x4569,	// (0x00084dc3) cell_mp_pane_g1

0x41e6,	// (0x00084a40) grid_highlight_pane_cp06

0xd96e,	// (0x0008e1c8) grid_skin_colour_pane

0xd976,	// (0x0008e1d0) list_highlight_pane_cp03

0x6575,	// (0x00086dcf) skin_g1

0xd97e,	// (0x0008e1d8) skin_t1

0xd98d,	// (0x0008e1e7) skin_t2

0x0001,

0xf283,	// (0x0008fadd) skin_t

0x657f,	// (0x00086dd9) cell_skin_colour_pane_ParamLimits

0x657f,	// (0x00086dd9) cell_skin_colour_pane

0xd99b,	// (0x0008e1f5) cell_skin_colour_pane_g1

0x65ff,	// (0x00086e59) call_video_g1_ParamLimits

0x65ff,	// (0x00086e59) call_video_g1

0x660f,	// (0x00086e69) call_video_g2_ParamLimits

0x660f,	// (0x00086e69) call_video_g2

0x0001,

0xf288,	// (0x0008fae2) call_video_g_ParamLimits

0xf288,	// (0x0008fae2) call_video_g

0x665f,	// (0x00086eb9) call_video_uplink_pane_cp1_ParamLimits

0x665f,	// (0x00086eb9) call_video_uplink_pane_cp1

0xd9ad,	// (0x0008e207) call_video_uplink_pane_cp2

0x672d,	// (0x00086f87) video_down_crop_pane_ParamLimits

0x672d,	// (0x00086f87) video_down_crop_pane

0x681f,	// (0x00087079) video_down_pane_ParamLimits

0x681f,	// (0x00087079) video_down_pane

0xd9b5,	// (0x0008e20f) video_down_subqcif_pane_ParamLimits

0xd9b5,	// (0x0008e20f) video_down_subqcif_pane

0xd9cf,	// (0x0008e229) video_down_subqcif_pane_cp_ParamLimits

0xd9cf,	// (0x0008e229) video_down_subqcif_pane_cp

0xd9f7,	// (0x0008e251) im_reading_pane_ParamLimits

0xd9f7,	// (0x0008e251) im_reading_pane

0x693c,	// (0x00087196) im_writing_pane_ParamLimits

0x693c,	// (0x00087196) im_writing_pane

0x695a,	// (0x000871b4) im_reading_pane_t1

0xda11,	// (0x0008e26b) list_im_pane

0xda22,	// (0x0008e27c) scroll_pane_cp07

0x699c,	// (0x000871f6) im_writing_pane_t1_ParamLimits

0x699c,	// (0x000871f6) im_writing_pane_t1

0xda3b,	// (0x0008e295) im_writing_pane_t2_ParamLimits

0xda3b,	// (0x0008e295) im_writing_pane_t2

0x0001,

0xf292,	// (0x0008faec) im_writing_pane_t_ParamLimits

0xf292,	// (0x0008faec) im_writing_pane_t

0x41e6,	// (0x00084a40) input_focus_pane_cp04

0x41e6,	// (0x00084a40) input_focus_pane_cp05

0x69ae,	// (0x00087208) list_im_single_pane_ParamLimits

0x69ae,	// (0x00087208) list_im_single_pane

0x69c7,	// (0x00087221) list_single_im_pane_t1

0x84fc,	// (0x00088d56) blid_accuracy_pane

0x8504,	// (0x00088d5e) blid_compass_pane

0x850e,	// (0x00088d68) main_location_t1

0x851c,	// (0x00088d76) main_location_t2

0x852a,	// (0x00088d84) main_location_t3

0x0002,

0xf5f9,	// (0x0008fe53) main_location_t

0x41e6,	// (0x00084a40) aid_levels_location

0x4569,	// (0x00084dc3) blid_accuracy_pane_g1

0x4569,	// (0x00084dc3) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x0008fb4e) blid_accuracy_pane_g

0xda83,	// (0x0008e2dd) wml_content_pane

0xdac1,	// (0x0008e31b) wml_button_pane_ParamLimits

0xdac1,	// (0x0008e31b) wml_button_pane

0x69d6,	// (0x00087230) wml_list_single_large_pane_ParamLimits

0x69d6,	// (0x00087230) wml_list_single_large_pane

0x69f8,	// (0x00087252) wml_list_single_medium_pane_ParamLimits

0x69f8,	// (0x00087252) wml_list_single_medium_pane

0x6a1b,	// (0x00087275) wml_list_single_small_pane_ParamLimits

0x6a1b,	// (0x00087275) wml_list_single_small_pane

0xdad5,	// (0x0008e32f) wml_selection_box_pane_ParamLimits

0xdad5,	// (0x0008e32f) wml_selection_box_pane

0xdae8,	// (0x0008e342) wml_list_single_pane_t1

0xdaf7,	// (0x0008e351) wml_list_single_medium_pane_t1

0xdb06,	// (0x0008e360) wml_list_single_large_pane_t1

0xdb15,	// (0x0008e36f) input_focus_pane_cp02_ParamLimits

0xdb15,	// (0x0008e36f) input_focus_pane_cp02

0xdb28,	// (0x0008e382) wml_selection_box_pane_g1

0xdb31,	// (0x0008e38b) wml_selection_box_pane_t1_ParamLimits

0xdb31,	// (0x0008e38b) wml_selection_box_pane_t1

0x4441,	// (0x00084c9b) bg_wml_button_pane_ParamLimits

0x4441,	// (0x00084c9b) bg_wml_button_pane

0xdb49,	// (0x0008e3a3) wml_button_pane_g1

0xdb51,	// (0x0008e3ab) wml_button_pane_t1

0xdb49,	// (0x0008e3a3) wml_button_bg_pane_g1

0xdb61,	// (0x0008e3bb) wml_button_bg_pane_g2

0xdb69,	// (0x0008e3c3) wml_button_bg_pane_g3

0xdb71,	// (0x0008e3cb) wml_button_bg_pane_g4

0xdb79,	// (0x0008e3d3) wml_button_bg_pane_g5

0xdb81,	// (0x0008e3db) wml_button_bg_pane_g6

0xdb89,	// (0x0008e3e3) wml_button_bg_pane_g7

0xdb91,	// (0x0008e3eb) wml_button_bg_pane_g8

0xdb99,	// (0x0008e3f3) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x0008faf1) wml_button_bg_pane_g

0x6a43,	// (0x0008729d) bg_list_pane_cp02

0xdba1,	// (0x0008e3fb) mce_header_pane_ParamLimits

0xdba1,	// (0x0008e3fb) mce_header_pane

0xdbb7,	// (0x0008e411) mce_icon_pane

0xdbb7,	// (0x0008e411) mce_image_pane

0xdbc0,	// (0x0008e41a) mce_text_pane_ParamLimits

0xdbc0,	// (0x0008e41a) mce_text_pane

0x6a4d,	// (0x000872a7) scroll_pane_cp03

0xdab9,	// (0x0008e313) scroll_pane_cp04

0xdbd3,	// (0x0008e42d) scroll_pane_cp05_ParamLimits

0xdbd3,	// (0x0008e42d) scroll_pane_cp05

0x6a57,	// (0x000872b1) mce_header_field_pane_ParamLimits

0x6a57,	// (0x000872b1) mce_header_field_pane

0x6a79,	// (0x000872d3) mce_header_field_pane_2_ParamLimits

0x6a79,	// (0x000872d3) mce_header_field_pane_2

0x6a8f,	// (0x000872e9) mce_header_field_pane_3

0x6a97,	// (0x000872f1) list_single_mce_message_pane_ParamLimits

0x6a97,	// (0x000872f1) list_single_mce_message_pane

0x6ab0,	// (0x0008730a) list_single_mce_smart_pane_ParamLimits

0x6ab0,	// (0x0008730a) list_single_mce_smart_pane

0xdbdf,	// (0x0008e439) input_focus_pane_cp03

0xdbe8,	// (0x0008e442) list_header_data_pane

0x6ad4,	// (0x0008732e) mce_header_field_pane_t1

0x6ae4,	// (0x0008733e) list_single_mce_header_pane_ParamLimits

0x6ae4,	// (0x0008733e) list_single_mce_header_pane

0xdbf0,	// (0x0008e44a) list_single_mce_header_pane_t1

0xdbff,	// (0x0008e459) list_single_mce_message_pane_g1

0xdc07,	// (0x0008e461) list_single_mce_message_pane_t1

0x6b1a,	// (0x00087374) bg_cale_heading_pane_cp01_ParamLimits

0x6b1a,	// (0x00087374) bg_cale_heading_pane_cp01

0xdc15,	// (0x0008e46f) bg_cale_pane_cp02_ParamLimits

0xdc15,	// (0x0008e46f) bg_cale_pane_cp02

0x6b4d,	// (0x000873a7) cale_month_corner_pane

0x6b63,	// (0x000873bd) cale_month_day_heading_pane_ParamLimits

0x6b63,	// (0x000873bd) cale_month_day_heading_pane

0x6ba6,	// (0x00087400) cale_month_pane_g1_ParamLimits

0x6ba6,	// (0x00087400) cale_month_pane_g1

0x6bd2,	// (0x0008742c) cale_month_pane_g2_ParamLimits

0x6bd2,	// (0x0008742c) cale_month_pane_g2

0x6bf5,	// (0x0008744f) cale_month_pane_g3_ParamLimits

0x6bf5,	// (0x0008744f) cale_month_pane_g3

0x6c31,	// (0x0008748b) cale_month_pane_g4_ParamLimits

0x6c31,	// (0x0008748b) cale_month_pane_g4

0x6c6d,	// (0x000874c7) cale_month_pane_g5_ParamLimits

0x6c6d,	// (0x000874c7) cale_month_pane_g5

0x6ca9,	// (0x00087503) cale_month_pane_g6_ParamLimits

0x6ca9,	// (0x00087503) cale_month_pane_g6

0x6cf5,	// (0x0008754f) cale_month_pane_g7_ParamLimits

0x6cf5,	// (0x0008754f) cale_month_pane_g7

0x6d41,	// (0x0008759b) cale_month_pane_g8_ParamLimits

0x6d41,	// (0x0008759b) cale_month_pane_g8

0x6d8d,	// (0x000875e7) cale_month_pane_g9_ParamLimits

0x6d8d,	// (0x000875e7) cale_month_pane_g9

0x6dc7,	// (0x00087621) cale_month_pane_g10_ParamLimits

0x6dc7,	// (0x00087621) cale_month_pane_g10

0x6e01,	// (0x0008765b) cale_month_pane_g11_ParamLimits

0x6e01,	// (0x0008765b) cale_month_pane_g11

0x6e3b,	// (0x00087695) cale_month_pane_g12_ParamLimits

0x6e3b,	// (0x00087695) cale_month_pane_g12

0x6e79,	// (0x000876d3) cale_month_pane_g13_ParamLimits

0x6e79,	// (0x000876d3) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x0008fb04) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x0008fb04) cale_month_pane_g

0x6eb7,	// (0x00087711) cale_month_week_pane

0x6eca,	// (0x00087724) grid_cale_month_pane_ParamLimits

0x6eca,	// (0x00087724) grid_cale_month_pane

0x6f08,	// (0x00087762) cale_month_day_heading_pane_t1

0x6f66,	// (0x000877c0) cale_month_day_heading_pane_t2

0x6fcb,	// (0x00087825) cale_month_day_heading_pane_t3

0x7030,	// (0x0008788a) cale_month_day_heading_pane_t4

0x7095,	// (0x000878ef) cale_month_day_heading_pane_t5

0x7102,	// (0x0008795c) cale_month_day_heading_pane_t6

0x7177,	// (0x000879d1) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x0008fb1f) cale_month_day_heading_pane_t

0x4666,	// (0x00084ec0) bg_cale_side_pane_cp01

0x71ec,	// (0x00087a46) cale_month_week_pane_t1

0x7203,	// (0x00087a5d) cale_month_week_pane_t2

0x721a,	// (0x00087a74) cale_month_week_pane_t3

0x7231,	// (0x00087a8b) cale_month_week_pane_t4

0x7248,	// (0x00087aa2) cale_month_week_pane_t5

0x725f,	// (0x00087ab9) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x0008fb2e) cale_month_week_pane_t

0x7276,	// (0x00087ad0) cell_cale_month_pane_ParamLimits

0x7276,	// (0x00087ad0) cell_cale_month_pane

0x7344,	// (0x00087b9e) cell_cale_month_pane_g1

0x7350,	// (0x00087baa) cell_cale_month_pane_t1_ParamLimits

0x7350,	// (0x00087baa) cell_cale_month_pane_t1

0x4674,	// (0x00084ece) grid_highlight_pane_cp08

0x4569,	// (0x00084dc3) main_smil_g1

0x736c,	// (0x00087bc6) smil_status_pane

0xdc4a,	// (0x0008e4a4) smil_text_pane

0x0add,	// (0x00081337) bg_popup_call3_rect_pane_g8

0x0ae5,	// (0x0008133f) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x0008fde7) bg_popup_call3_rect_pane_g

0x0d8d,	// (0x000815e7) smil_status_volume_pane_g1

0xdc54,	// (0x0008e4ae) smil_status_pane_t1

0x88dd,	// (0x00089137) volume_smil_pane

0xdc6b,	// (0x0008e4c5) list_smil_text_pane

0x737f,	// (0x00087bd9) scroll_pane_cp011

0x738a,	// (0x00087be4) smil_text_list_pane_t1_ParamLimits

0x738a,	// (0x00087be4) smil_text_list_pane_t1

0x73de,	// (0x00087c38) aid_volume_smil_ParamLimits

0x73de,	// (0x00087c38) aid_volume_smil

0x4569,	// (0x00084dc3) smil_volume_pane_g1

0x4569,	// (0x00084dc3) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x0008fb4e) smil_volume_pane_g

0x4514,	// (0x00084d6e) listscroll_cale_day_pane

0xdc75,	// (0x0008e4cf) bg_cale_pane

0xdc8d,	// (0x0008e4e7) list_cale_pane

0xdc9e,	// (0x0008e4f8) scroll_pane_cp09

0xdcaf,	// (0x0008e509) cale_bg_pane_g1

0xdcb7,	// (0x0008e511) cale_bg_pane_g2

0xdcbf,	// (0x0008e519) cale_bg_pane_g3

0xdcc7,	// (0x0008e521) cale_bg_pane_g4

0xdccf,	// (0x0008e529) cale_bg_pane_g5

0xdcd7,	// (0x0008e531) cale_bg_pane_g6

0xdcdf,	// (0x0008e539) cale_bg_pane_g7

0xdce7,	// (0x0008e541) cale_bg_pane_g8

0xdcef,	// (0x0008e549) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x0008fb53) cale_bg_pane_g

0x7400,	// (0x00087c5a) list_cale_time_pane_ParamLimits

0x7400,	// (0x00087c5a) list_cale_time_pane

0x7415,	// (0x00087c6f) list_cale_time_pane_g1_ParamLimits

0x7415,	// (0x00087c6f) list_cale_time_pane_g1

0xdcf7,	// (0x0008e551) list_cale_time_pane_g2_ParamLimits

0xdcf7,	// (0x0008e551) list_cale_time_pane_g2

0x7421,	// (0x00087c7b) list_cale_time_pane_g3_ParamLimits

0x7421,	// (0x00087c7b) list_cale_time_pane_g3

0x742f,	// (0x00087c89) list_cale_time_pane_g4_ParamLimits

0x742f,	// (0x00087c89) list_cale_time_pane_g4

0x743d,	// (0x00087c97) list_cale_time_pane_g5_ParamLimits

0x743d,	// (0x00087c97) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x0008fb66) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x0008fb66) list_cale_time_pane_g

0x744b,	// (0x00087ca5) list_cale_time_pane_t1_ParamLimits

0x744b,	// (0x00087ca5) list_cale_time_pane_t1

0x7473,	// (0x00087ccd) list_cale_time_pane_t2_ParamLimits

0x7473,	// (0x00087ccd) list_cale_time_pane_t2

0x7807,	// (0x00088061) aid_blid_cardinal_pane

0x7849,	// (0x000880a3) compass_pane_t4

0x749b,	// (0x00087cf5) list_cale_time_pane_t4_ParamLimits

0x749b,	// (0x00087cf5) list_cale_time_pane_t4

0x7857,	// (0x000880b1) compass_pane_t5

0x7867,	// (0x000880c1) compass_pane_t6

0x7875,	// (0x000880cf) compass_pane_t7

0xe105,	// (0x0008e95f) navi_pane_cc_t1

0xe25a,	// (0x0008eab4) aid_phob_thumbnail_center_pane

0x7ff8,	// (0x00088852) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x0008fb73) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x0008fb73) list_cale_time_pane_t

0x028a,	// (0x00080ae4) bg_popup_window_pane_cp02_ParamLimits

0x028a,	// (0x00080ae4) bg_popup_window_pane_cp02

0xdd11,	// (0x0008e56b) heading_pane_cp01_ParamLimits

0xdd11,	// (0x0008e56b) heading_pane_cp01

0xdd1d,	// (0x0008e577) loc_req_pane_ParamLimits

0xdd1d,	// (0x0008e577) loc_req_pane

0xdd2d,	// (0x0008e587) loc_type_pane_ParamLimits

0xdd2d,	// (0x0008e587) loc_type_pane

0xdd3f,	// (0x0008e599) loc_type_pane_t1_ParamLimits

0xdd3f,	// (0x0008e599) loc_type_pane_t1

0xdd51,	// (0x0008e5ab) loc_type_pane_t2_ParamLimits

0xdd51,	// (0x0008e5ab) loc_type_pane_t2

0xdd63,	// (0x0008e5bd) loc_type_pane_t3_ParamLimits

0xdd63,	// (0x0008e5bd) loc_type_pane_t3

0x0002,

0xf320,	// (0x0008fb7a) loc_type_pane_t_ParamLimits

0xf320,	// (0x0008fb7a) loc_type_pane_t

0xdd75,	// (0x0008e5cf) list_loc_req_pane

0xdd7f,	// (0x0008e5d9) scroll_pane_cp012

0x74c3,	// (0x00087d1d) list_single_loc_request_popup_menu_pane_ParamLimits

0x74c3,	// (0x00087d1d) list_single_loc_request_popup_menu_pane

0xdd8a,	// (0x0008e5e4) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xdd8a,	// (0x0008e5e4) list_single_loc_request_popup_menu_pane_g1

0xdd96,	// (0x0008e5f0) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xdd96,	// (0x0008e5f0) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x0008fb81) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x0008fb81) list_single_loc_request_popup_menu_pane_g

0xdda2,	// (0x0008e5fc) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xdda2,	// (0x0008e5fc) list_single_loc_request_popup_menu_pane_t1

0x74d5,	// (0x00087d2f) bg_popup_window_pane_cp03_ParamLimits

0x74d5,	// (0x00087d2f) bg_popup_window_pane_cp03

0x74e3,	// (0x00087d3d) heading_loc_req_pane_ParamLimits

0x74e3,	// (0x00087d3d) heading_loc_req_pane

0x74ef,	// (0x00087d49) popup_dyc_status_message_window_g1_ParamLimits

0x74ef,	// (0x00087d49) popup_dyc_status_message_window_g1

0x74fb,	// (0x00087d55) popup_dyc_status_message_window_t1_ParamLimits

0x74fb,	// (0x00087d55) popup_dyc_status_message_window_t1

0x750d,	// (0x00087d67) popup_dyc_status_message_window_t2_ParamLimits

0x750d,	// (0x00087d67) popup_dyc_status_message_window_t2

0x751f,	// (0x00087d79) popup_dyc_status_message_window_t3_ParamLimits

0x751f,	// (0x00087d79) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x0008fb86) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x0008fb86) popup_dyc_status_message_window_t

0x41e6,	// (0x00084a40) bg_heading_pane_cp01

0xddb8,	// (0x0008e612) heading_loc_req_pane_g1

0xddc0,	// (0x0008e61a) heading_loc_req_pane_g2

0xddc8,	// (0x0008e622) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x0008fb8d) heading_loc_req_pane_g

0xddd0,	// (0x0008e62a) heading_loc_req_pane_t1

0xdde0,	// (0x0008e63a) bg_popup_sub_pane_cp01_ParamLimits

0xdde0,	// (0x0008e63a) bg_popup_sub_pane_cp01

0xddee,	// (0x0008e648) popup_cale_events_window_g1_ParamLimits

0xddee,	// (0x0008e648) popup_cale_events_window_g1

0xde0e,	// (0x0008e668) popup_cale_events_window_g2_ParamLimits

0xde0e,	// (0x0008e668) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x0008fbc1) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x0008fbc1) popup_cale_events_window_g

0xde2e,	// (0x0008e688) popup_cale_events_window_t1_ParamLimits

0xde2e,	// (0x0008e688) popup_cale_events_window_t1

0xde40,	// (0x0008e69a) popup_cale_events_window_t2_ParamLimits

0xde40,	// (0x0008e69a) popup_cale_events_window_t2

0xde7e,	// (0x0008e6d8) popup_cale_events_window_t3_ParamLimits

0xde7e,	// (0x0008e6d8) popup_cale_events_window_t3

0xdeb8,	// (0x0008e712) popup_cale_events_window_t4_ParamLimits

0xdeb8,	// (0x0008e712) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x0008fbc6) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x0008fbc6) popup_cale_events_window_t

0x75a3,	// (0x00087dfd) call_type_pane

0xdeee,	// (0x0008e748) popup_call_status_window_g1

0x75af,	// (0x00087e09) popup_call_status_window_g2

0x75bb,	// (0x00087e15) popup_call_status_window_g3

0x0002,

0xf375,	// (0x0008fbcf) popup_call_status_window_g

0xdefc,	// (0x0008e756) call_type_pane_g1

0xdf05,	// (0x0008e75f) call_type_pane_g2

0x0001,

0xf37c,	// (0x0008fbd6) call_type_pane_g

0x41e6,	// (0x00084a40) bg_popup_sub_pane_cp02

0xdf0e,	// (0x0008e768) listscroll_popup_wml_pane

0xdf16,	// (0x0008e770) list_wml_pane

0xdf20,	// (0x0008e77a) scroll_pane_cp013

0xdf2b,	// (0x0008e785) list_single_graphic_popup_wml_pane_ParamLimits

0xdf2b,	// (0x0008e785) list_single_graphic_popup_wml_pane

0x4569,	// (0x00084dc3) list_single_graphic_popup_wml_pane_g1

0xdf3f,	// (0x0008e799) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x0008fbdb) list_single_graphic_popup_wml_pane_g

0xdf47,	// (0x0008e7a1) list_single_graphic_popup_wml_pane_t1

0xdf5d,	// (0x0008e7b7) aid_call_pane

0x4439,	// (0x00084c93) popup_clock_analogue_window_g1

0x4439,	// (0x00084c93) popup_clock_analogue_window_g2

0x75c7,	// (0x00087e21) popup_clock_analogue_window_g3

0x75c7,	// (0x00087e21) popup_clock_analogue_window_g4

0x4569,	// (0x00084dc3) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x0008fbe0) popup_clock_analogue_window_g

0x75cf,	// (0x00087e29) popup_clock_analogue_window_t1

0x75dd,	// (0x00087e37) clock_digital_number_pane_ParamLimits

0x75dd,	// (0x00087e37) clock_digital_number_pane

0x75e9,	// (0x00087e43) clock_digital_number_pane_cp02_ParamLimits

0x75e9,	// (0x00087e43) clock_digital_number_pane_cp02

0x75f5,	// (0x00087e4f) clock_digital_number_pane_cp03_ParamLimits

0x75f5,	// (0x00087e4f) clock_digital_number_pane_cp03

0x7601,	// (0x00087e5b) clock_digital_number_pane_cp04_ParamLimits

0x7601,	// (0x00087e5b) clock_digital_number_pane_cp04

0x760d,	// (0x00087e67) clock_digital_separator_pane_ParamLimits

0x760d,	// (0x00087e67) clock_digital_separator_pane

0x7619,	// (0x00087e73) popup_clock_digital_window_t1

0x4569,	// (0x00084dc3) clock_digital_number_pane_g1

0x4569,	// (0x00084dc3) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x0008fb4e) clock_digital_number_pane_g

0x4569,	// (0x00084dc3) clock_digital_separator_pane_g1

0x4569,	// (0x00084dc3) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x0008fb4e) clock_digital_separator_pane_g

0x41e6,	// (0x00084a40) bg_popup_window_pane_cp04

0xdf65,	// (0x0008e7bf) heading_pane_cp03

0xdf6d,	// (0x0008e7c7) listscroll_popup_gms_pane

0xdf75,	// (0x0008e7cf) grid_large_graphic_popup_pane

0xdf7f,	// (0x0008e7d9) listscroll_popup_gms_pane_g1

0xdf87,	// (0x0008e7e1) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x0008fbeb) listscroll_popup_gms_pane_g

0xdab9,	// (0x0008e313) scroll_pane_cp014

0x7636,	// (0x00087e90) cell_large_graphic_popup_pane_ParamLimits

0x7636,	// (0x00087e90) cell_large_graphic_popup_pane

0x7650,	// (0x00087eaa) cell_large_graphic_popup_pane_g1_ParamLimits

0x7650,	// (0x00087eaa) cell_large_graphic_popup_pane_g1

0xdf8f,	// (0x0008e7e9) cell_large_graphic_popup_pane_g2_ParamLimits

0xdf8f,	// (0x0008e7e9) cell_large_graphic_popup_pane_g2

0xdf9b,	// (0x0008e7f5) cell_large_graphic_popup_pane_g3_ParamLimits

0xdf9b,	// (0x0008e7f5) cell_large_graphic_popup_pane_g3

0xdfa8,	// (0x0008e802) cell_large_graphic_popup_pane_g4_ParamLimits

0xdfa8,	// (0x0008e802) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x0008fbf0) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x0008fbf0) cell_large_graphic_popup_pane_g

0xdfb8,	// (0x0008e812) grid_highlight_pane_cp010

0x4569,	// (0x00084dc3) bg_popup_call_pane_g1

0xdfc2,	// (0x0008e81c) list_single_graphic_popup_conf_pane_ParamLimits

0xdfc2,	// (0x0008e81c) list_single_graphic_popup_conf_pane

0xdfd4,	// (0x0008e82e) list_highlight_pane_cp01

0xdfdd,	// (0x0008e837) list_single_graphic_popup_conf_pane_g1

0xdfe5,	// (0x0008e83f) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x0008fbf9) list_single_graphic_popup_conf_pane_g

0xdfed,	// (0x0008e847) list_single_graphic_popup_conf_pane_t1

0xdffb,	// (0x0008e855) linegrid_cams_pane_g1

0x765c,	// (0x00087eb6) linegrid_cams_pane_g2

0x46a7,	// (0x00084f01) linegrid_cams_pane_g3

0xe004,	// (0x0008e85e) linegrid_cams_pane_g4

0x7665,	// (0x00087ebf) linegrid_cams_pane_g5

0x766e,	// (0x00087ec8) linegrid_cams_pane_g6

0x46b0,	// (0x00084f0a) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x0008fbfe) linegrid_cams_pane_g

0xe00d,	// (0x0008e867) popup_clock_analogue_window

0xe00d,	// (0x0008e867) popup_clock_digital_window

0x41e6,	// (0x00084a40) popup_phob_thumbnail_window

0x4569,	// (0x00084dc3) call_video_uplink_pane_g1

0xe016,	// (0x0008e870) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x0008fc0d) call_video_uplink_pane_g

0xe01e,	// (0x0008e878) video_uplink_pane

0xe026,	// (0x0008e880) mce_image_pane_g1

0x7679,	// (0x00087ed3) mce_image_pane_g2

0x7683,	// (0x00087edd) mce_image_pane_g3

0x768d,	// (0x00087ee7) mce_image_pane_g4

0x7695,	// (0x00087eef) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x0008fc12) mce_image_pane_g

0xe030,	// (0x0008e88a) control_top_pane_stacon_cp01_ParamLimits

0xe030,	// (0x0008e88a) control_top_pane_stacon_cp01

0xe044,	// (0x0008e89e) uni_indicator_pane_stacon_cp01_ParamLimits

0xe044,	// (0x0008e89e) uni_indicator_pane_stacon_cp01

0xe055,	// (0x0008e8af) bg_popup_sub_pane_cp03

0x769d,	// (0x00087ef7) chi_dic_find_pane

0x76a5,	// (0x00087eff) listscroll_chi_dic_pane

0x76ae,	// (0x00087f08) main_pane_chidic_g1

0x76c1,	// (0x00087f1b) chi_dic_find_pane_t1

0xe05f,	// (0x0008e8b9) find_chidic_pane

0xe068,	// (0x0008e8c2) chi_dic_list_pane_ParamLimits

0xe068,	// (0x0008e8c2) chi_dic_list_pane

0xe079,	// (0x0008e8d3) scroll_pane_cp020

0x76cf,	// (0x00087f29) find_chidic_pane_t1

0x41e6,	// (0x00084a40) input_focus_pane_cp06

0x76de,	// (0x00087f38) list_chi_dic_pane_ParamLimits

0x76de,	// (0x00087f38) list_chi_dic_pane

0x76f3,	// (0x00087f4d) list_chi_dic_pane_t1_ParamLimits

0x76f3,	// (0x00087f4d) list_chi_dic_pane_t1

0x41e6,	// (0x00084a40) list_highlight_pane_cp020

0xe081,	// (0x0008e8db) bg_cale_heading_pane_g1

0x7706,	// (0x00087f60) bg_cale_heading_pane_g2

0x770e,	// (0x00087f68) bg_cale_heading_pane_g3

0x7716,	// (0x00087f70) bg_cale_heading_pane_g4

0x7720,	// (0x00087f7a) bg_cale_heading_pane_g5

0x772a,	// (0x00087f84) bg_cale_heading_pane_g6

0x7732,	// (0x00087f8c) bg_cale_heading_pane_g7

0x773a,	// (0x00087f94) bg_cale_heading_pane_g8

0x7744,	// (0x00087f9e) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x0008fc1d) bg_cale_heading_pane_g

0xe081,	// (0x0008e8db) bg_cale_side_pane_g1

0x774e,	// (0x00087fa8) bg_cale_side_pane_g2

0x7758,	// (0x00087fb2) bg_cale_side_pane_g3

0x7762,	// (0x00087fbc) bg_cale_side_pane_g4

0x776c,	// (0x00087fc6) bg_cale_side_pane_g5

0x7776,	// (0x00087fd0) bg_cale_side_pane_g6

0x7780,	// (0x00087fda) bg_cale_side_pane_g7

0x778a,	// (0x00087fe4) bg_cale_side_pane_g8

0x7792,	// (0x00087fec) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x0008fc30) bg_cale_side_pane_g

0x779a,	// (0x00087ff4) popup_call_status_window_ParamLimits

0x779a,	// (0x00087ff4) popup_call_status_window

0xe089,	// (0x0008e8e3) stacon_top_pane

0xe091,	// (0x0008e8eb) status_pane_ParamLimits

0xe091,	// (0x0008e8eb) status_pane

0xe0a6,	// (0x0008e900) status_small_pane

0xe0ae,	// (0x0008e908) control_pane

0x41e6,	// (0x00084a40) stacon_bottom_pane

0xe0b6,	// (0x0008e910) list_single_mce_smart_pane_t1_ParamLimits

0xe0b6,	// (0x0008e910) list_single_mce_smart_pane_t1

0xe0c9,	// (0x0008e923) list_single_mce_smart_pane_t2_ParamLimits

0xe0c9,	// (0x0008e923) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x0008fc43) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x0008fc43) list_single_mce_smart_pane_t

0x77a6,	// (0x00088000) compass_pane

0x77b1,	// (0x0008800b) main_location2_pane_t1

0x77c7,	// (0x00088021) main_location2_pane_t2

0x77dd,	// (0x00088037) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x0008fc48) main_location2_pane_t

0xe0e8,	// (0x0008e942) compass_pane_g1_ParamLimits

0xe0e8,	// (0x0008e942) compass_pane_g1

0x782b,	// (0x00088085) compass_pane_t1

0x783a,	// (0x00088094) compass_pane_t2

0x0005,

0xf3f7,	// (0x0008fc51) compass_pane_t

0x7885,	// (0x000880df) text_secondary_cp61

0xe0fc,	// (0x0008e956) navi_pane_cams_g5

0xe11f,	// (0x0008e979) navi_pane_im_t1

0xe12d,	// (0x0008e987) navi_pane_mp_g1_ParamLimits

0xe12d,	// (0x0008e987) navi_pane_mp_g1

0xe141,	// (0x0008e99b) navi_pane_mp_g2_ParamLimits

0xe141,	// (0x0008e99b) navi_pane_mp_g2

0xe14d,	// (0x0008e9a7) navi_pane_mp_g3_ParamLimits

0xe14d,	// (0x0008e9a7) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x0008fc65) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x0008fc65) navi_pane_mp_g

0xe159,	// (0x0008e9b3) navi_pane_mp_t1

0xe167,	// (0x0008e9c1) navi_pane_mp_t2

0x0002,

0xf412,	// (0x0008fc6c) navi_pane_mp_t

0xe1a3,	// (0x0008e9fd) navi_pane_vt_g1

0xe159,	// (0x0008e9b3) navi_pane_vt_t1

0xe1ab,	// (0x0008ea05) navi_slider_pane

0xe1b3,	// (0x0008ea0d) zooming_pane

0xe1bb,	// (0x0008ea15) navi_slider_pane_g1

0x79b2,	// (0x0008820c) navi_slider_pane_g2

0x0006,

0xf419,	// (0x0008fc73) navi_slider_pane_g

0xe1df,	// (0x0008ea39) aid_levels_zoom

0xe1e7,	// (0x0008ea41) zooming_pane_g1

0xe1ef,	// (0x0008ea49) zooming_pane_g2

0xe1ef,	// (0x0008ea49) zooming_pane_g3

0x0002,

0xf428,	// (0x0008fc82) zooming_pane_g

0xe1f7,	// (0x0008ea51) level_10_zoom

0xe200,	// (0x0008ea5a) level_11_zoom

0xe209,	// (0x0008ea63) level_1_zoom

0xe212,	// (0x0008ea6c) level_2_zoom

0xe21b,	// (0x0008ea75) level_3_zoom

0xe224,	// (0x0008ea7e) level_4_zoom

0xe22d,	// (0x0008ea87) level_5_zoom

0xe236,	// (0x0008ea90) level_6_zoom

0xe23f,	// (0x0008ea99) level_7_zoom

0xe248,	// (0x0008eaa2) level_8_zoom

0xe251,	// (0x0008eaab) level_9_zoom

0xe262,	// (0x0008eabc) popup_phob_thumbnail_window_g1

0xe26a,	// (0x0008eac4) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x0008fc89) popup_phob_thumbnail_window_g

0x0c43,	// (0x0008149d) level_1_location

0x0c4b,	// (0x000814a5) level_2_location

0x0c53,	// (0x000814ad) level_3_location

0x0c5b,	// (0x000814b5) level_4_location

0xe1b3,	// (0x0008ea0d) level_5_location

0x79c4,	// (0x0008821e) mce_icon_pane_g1

0x79cc,	// (0x00088226) mce_icon_pane_g2

0x0001,

0xf434,	// (0x0008fc8e) mce_icon_pane_g

0x79d4,	// (0x0008822e) main_mup_pane_g1_ParamLimits

0x79d4,	// (0x0008822e) main_mup_pane_g1

0x79ec,	// (0x00088246) main_mup_pane_g2_ParamLimits

0x79ec,	// (0x00088246) main_mup_pane_g2

0x7a08,	// (0x00088262) main_mup_pane_g3_ParamLimits

0x7a08,	// (0x00088262) main_mup_pane_g3

0x7a24,	// (0x0008827e) main_mup_pane_g4_ParamLimits

0x7a24,	// (0x0008827e) main_mup_pane_g4

0x7a38,	// (0x00088292) main_mup_pane_g5_ParamLimits

0x7a38,	// (0x00088292) main_mup_pane_g5

0x7a59,	// (0x000882b3) main_mup_pane_g6_ParamLimits

0x7a59,	// (0x000882b3) main_mup_pane_g6

0x7a79,	// (0x000882d3) main_mup_pane_g7_ParamLimits

0x7a79,	// (0x000882d3) main_mup_pane_g7

0x7a9d,	// (0x000882f7) main_mup_pane_g8_ParamLimits

0x7a9d,	// (0x000882f7) main_mup_pane_g8

0x7ac1,	// (0x0008831b) main_mup_pane_g9_ParamLimits

0x7ac1,	// (0x0008831b) main_mup_pane_g9

0x7ae4,	// (0x0008833e) main_mup_pane_g10_ParamLimits

0x7ae4,	// (0x0008833e) main_mup_pane_g10

0x7b07,	// (0x00088361) main_mup_pane_g11_ParamLimits

0x7b07,	// (0x00088361) main_mup_pane_g11

0x7b27,	// (0x00088381) main_mup_pane_g12_ParamLimits

0x7b27,	// (0x00088381) main_mup_pane_g12

0x7b35,	// (0x0008838f) main_mup_pane_g13_ParamLimits

0x7b35,	// (0x0008838f) main_mup_pane_g13

0x000c,

0xf439,	// (0x0008fc93) main_mup_pane_g_ParamLimits

0xf439,	// (0x0008fc93) main_mup_pane_g

0x7b4b,	// (0x000883a5) main_mup_pane_t1_ParamLimits

0x7b4b,	// (0x000883a5) main_mup_pane_t1

0x7b6a,	// (0x000883c4) main_mup_pane_t2_ParamLimits

0x7b6a,	// (0x000883c4) main_mup_pane_t2

0x7b84,	// (0x000883de) main_mup_pane_t3_ParamLimits

0x7b84,	// (0x000883de) main_mup_pane_t3

0x7b9e,	// (0x000883f8) main_mup_pane_t4_ParamLimits

0x7b9e,	// (0x000883f8) main_mup_pane_t4

0x7bb0,	// (0x0008840a) main_mup_pane_t5_ParamLimits

0x7bb0,	// (0x0008840a) main_mup_pane_t5

0x7bc2,	// (0x0008841c) main_mup_pane_t6_ParamLimits

0x7bc2,	// (0x0008841c) main_mup_pane_t6

0x0005,

0xf454,	// (0x0008fcae) main_mup_pane_t_ParamLimits

0xf454,	// (0x0008fcae) main_mup_pane_t

0x7bd8,	// (0x00088432) mup_progress_pane_ParamLimits

0x7bd8,	// (0x00088432) mup_progress_pane

0x7be4,	// (0x0008843e) mup_visualizer_pane_ParamLimits

0x7be4,	// (0x0008843e) mup_visualizer_pane

0x7c1e,	// (0x00088478) mup_volume_pane_ParamLimits

0x7c1e,	// (0x00088478) mup_volume_pane

0xdeee,	// (0x0008e748) mup_visualizer_pane_g1_ParamLimits

0xdeee,	// (0x0008e748) mup_visualizer_pane_g1

0xdeee,	// (0x0008e748) mup_visualizer_pane_g2_ParamLimits

0xdeee,	// (0x0008e748) mup_visualizer_pane_g2

0xe0e8,	// (0x0008e942) mup_visualizer_pane_g3_ParamLimits

0xe0e8,	// (0x0008e942) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x0008fcbb) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x0008fcbb) mup_visualizer_pane_g

0x4569,	// (0x00084dc3) mup_volume_pane_g1

0xe27a,	// (0x0008ead4) mup_volume_pane_g2

0x0001,

0xf468,	// (0x0008fcc2) mup_volume_pane_g

0x4569,	// (0x00084dc3) mup_progress_pane_g1

0xe283,	// (0x0008eadd) mup_progress_pane_g2

0xe28c,	// (0x0008eae6) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x0008fcc7) mup_progress_pane_g

0x41e6,	// (0x00084a40) bg_popup_window_pane_cp05

0xe295,	// (0x0008eaef) heading_pane_cp02_ParamLimits

0xe295,	// (0x0008eaef) heading_pane_cp02

0xe2b1,	// (0x0008eb0b) list_popup_blid_pane

0xe2b9,	// (0x0008eb13) list_blid_sat_info_pane_ParamLimits

0xe2b9,	// (0x0008eb13) list_blid_sat_info_pane

0xe2cc,	// (0x0008eb26) list_blid_sat_info_pane_g1

0xe2d4,	// (0x0008eb2e) list_blid_sat_info_pane_t1

0x7d3d,	// (0x00088597) mup_equalizer_pane_ParamLimits

0x7d3d,	// (0x00088597) mup_equalizer_pane

0x7d5e,	// (0x000885b8) mup_equalizer_pane_cp1_ParamLimits

0x7d5e,	// (0x000885b8) mup_equalizer_pane_cp1

0x7d7f,	// (0x000885d9) mup_equalizer_pane_cp2_ParamLimits

0x7d7f,	// (0x000885d9) mup_equalizer_pane_cp2

0x7da0,	// (0x000885fa) mup_equalizer_pane_cp3_ParamLimits

0x7da0,	// (0x000885fa) mup_equalizer_pane_cp3

0x7dc5,	// (0x0008861f) mup_equalizer_pane_cp4_ParamLimits

0x7dc5,	// (0x0008861f) mup_equalizer_pane_cp4

0x7dea,	// (0x00088644) mup_equalizer_pane_cp5

0x7e02,	// (0x0008865c) mup_equalizer_pane_cp6

0x7e1a,	// (0x00088674) mup_equalizer_pane_cp7

0x0b5d,	// (0x000813b7) bg_popup_call_poc_act_pane_g9

0x0b65,	// (0x000813bf) bg_popup_call_poc_act_pane_g10

0x0b6d,	// (0x000813c7) bg_popup_call_poc_act_pane_g11

0x000a,

0x4441,	// (0x00084c9b) mup_scale_pane

0x4569,	// (0x00084dc3) mup_scale_pane_g1

0xe2e2,	// (0x0008eb3c) mup_scale_pane_g2

0x0006,

0xf489,	// (0x0008fce3) mup_scale_pane_g

0xe306,	// (0x0008eb60) msg_data_pane

0xe30e,	// (0x0008eb68) scroll_pane_cp017

0x7e44,	// (0x0008869e) bg_list_pane_cp04_ParamLimits

0x7e44,	// (0x0008869e) bg_list_pane_cp04

0xe316,	// (0x0008eb70) msg_data_pane_g1

0x7e64,	// (0x000886be) msg_data_pane_g2

0x7e6e,	// (0x000886c8) msg_data_pane_g3

0x7e78,	// (0x000886d2) msg_data_pane_g4

0x7e80,	// (0x000886da) msg_data_pane_g5

0x7e88,	// (0x000886e2) msg_data_pane_g6

0x7e90,	// (0x000886ea) msg_data_pane_g7

0x0006,

0xf498,	// (0x0008fcf2) msg_data_pane_g

0x7e98,	// (0x000886f2) msg_text_pane_ParamLimits

0x7e98,	// (0x000886f2) msg_text_pane

0x7ebe,	// (0x00088718) qrid_highlight_pane_cp011_ParamLimits

0x7ebe,	// (0x00088718) qrid_highlight_pane_cp011

0x41e6,	// (0x00084a40) msg_body_pane

0x41e6,	// (0x00084a40) msg_header_pane

0xe327,	// (0x0008eb81) input_focus_pane_cp07

0x7ee2,	// (0x0008873c) msg_header_pane_t1_ParamLimits

0x7ee2,	// (0x0008873c) msg_header_pane_t1

0x0710,	// (0x00080f6a) msg_header_pane_t2_ParamLimits

0x0710,	// (0x00080f6a) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x0008fd06) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x0008fd06) msg_header_pane_t

0xe33c,	// (0x0008eb96) msg_body_pane_g1

0x0722,	// (0x00080f7c) msg_body_pane_t1_ParamLimits

0x0722,	// (0x00080f7c) msg_body_pane_t1

0x0753,	// (0x00080fad) msg_body_pane_t2_ParamLimits

0x0753,	// (0x00080fad) msg_body_pane_t2

0x0765,	// (0x00080fbf) msg_body_pane_t3_ParamLimits

0x0765,	// (0x00080fbf) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x0008fd0b) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x0008fd0b) msg_body_pane_t

0x7f48,	// (0x000887a2) main_viewer_pane_g1_ParamLimits

0x7f48,	// (0x000887a2) main_viewer_pane_g1

0x7f54,	// (0x000887ae) main_viewer_pane_g2_ParamLimits

0x7f54,	// (0x000887ae) main_viewer_pane_g2

0x7f60,	// (0x000887ba) main_viewer_pane_g3_ParamLimits

0x7f60,	// (0x000887ba) main_viewer_pane_g3

0x7f71,	// (0x000887cb) main_viewer_pane_g4_ParamLimits

0x7f71,	// (0x000887cb) main_viewer_pane_g4

0x7f82,	// (0x000887dc) main_viewer_pane_g5_ParamLimits

0x7f82,	// (0x000887dc) main_viewer_pane_g5

0x7f82,	// (0x000887dc) main_viewer_pane_g7_ParamLimits

0x7f82,	// (0x000887dc) main_viewer_pane_g7

0x7f94,	// (0x000887ee) main_viewer_pane_g8_ParamLimits

0x7f94,	// (0x000887ee) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x0008fd1b) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x0008fd1b) main_viewer_pane_g

0xe344,	// (0x0008eb9e) viewer_content_pane_ParamLimits

0xe344,	// (0x0008eb9e) viewer_content_pane

0x7fcc,	// (0x00088826) main_postcard_pane_g1_ParamLimits

0x7fcc,	// (0x00088826) main_postcard_pane_g1

0x7fda,	// (0x00088834) main_postcard_pane_g2_ParamLimits

0x7fda,	// (0x00088834) main_postcard_pane_g2

0x7fe8,	// (0x00088842) main_postcard_pane_g3_ParamLimits

0x7fe8,	// (0x00088842) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x0008fd2c) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x0008fd2c) main_postcard_pane_g

0x7ff8,	// (0x00088852) main_postcard_pane_g4

0x0d7a,	// (0x000815d4) smil_status_volume_pane_g2

0x8024,	// (0x0008887e) postcard_pane_ParamLimits

0x8024,	// (0x0008887e) postcard_pane

0xdeee,	// (0x0008e748) postcard_pane_g1_ParamLimits

0xdeee,	// (0x0008e748) postcard_pane_g1

0x805e,	// (0x000888b8) postcard_pane_g2_ParamLimits

0x805e,	// (0x000888b8) postcard_pane_g2

0x806a,	// (0x000888c4) postcard_pane_g3_ParamLimits

0x806a,	// (0x000888c4) postcard_pane_g3

0xe352,	// (0x0008ebac) postcard_pane_g4_ParamLimits

0xe352,	// (0x0008ebac) postcard_pane_g4

0x8076,	// (0x000888d0) postcard_pane_g5_ParamLimits

0x8076,	// (0x000888d0) postcard_pane_g5

0x8082,	// (0x000888dc) postcard_pane_g6_ParamLimits

0x8082,	// (0x000888dc) postcard_pane_g6

0xe360,	// (0x0008ebba) postcard_pane_g7_ParamLimits

0xe360,	// (0x0008ebba) postcard_pane_g7

0x0006,

0xf4df,	// (0x0008fd39) postcard_pane_g_ParamLimits

0xf4df,	// (0x0008fd39) postcard_pane_g

0x8090,	// (0x000888ea) main_mp2_pane_g1_ParamLimits

0x8090,	// (0x000888ea) main_mp2_pane_g1

0x809e,	// (0x000888f8) main_mp2_pane_g2_ParamLimits

0x809e,	// (0x000888f8) main_mp2_pane_g2

0x80aa,	// (0x00088904) main_mp2_pane_g3_ParamLimits

0x80aa,	// (0x00088904) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x0008fd48) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x0008fd48) main_mp2_pane_g

0x80b6,	// (0x00088910) main_mp2_pane_t1_ParamLimits

0x80b6,	// (0x00088910) main_mp2_pane_t1

0x80cd,	// (0x00088927) main_mp2_pane_t2_ParamLimits

0x80cd,	// (0x00088927) main_mp2_pane_t2

0x80e1,	// (0x0008893b) main_mp2_pane_t3_ParamLimits

0x80e1,	// (0x0008893b) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x0008fd4f) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x0008fd4f) main_mp2_pane_t

0xe36e,	// (0x0008ebc8) pec_content_pane_ParamLimits

0xe36e,	// (0x0008ebc8) pec_content_pane

0xdab9,	// (0x0008e313) scroll_pane_cp015

0xe380,	// (0x0008ebda) pec_attribute_pane_ParamLimits

0xe380,	// (0x0008ebda) pec_attribute_pane

0x80f3,	// (0x0008894d) pec_content_pane_g1_ParamLimits

0x80f3,	// (0x0008894d) pec_content_pane_g1

0xe390,	// (0x0008ebea) pec_content_pane_t1_ParamLimits

0xe390,	// (0x0008ebea) pec_content_pane_t1

0xe3a2,	// (0x0008ebfc) pec_content_pane_t2_ParamLimits

0xe3a2,	// (0x0008ebfc) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x0008fd56) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x0008fd56) pec_content_pane_t

0x80ff,	// (0x00088959) list_single_graphic_pane_cp01_ParamLimits

0x80ff,	// (0x00088959) list_single_graphic_pane_cp01

0x4441,	// (0x00084c9b) bg_popup_sub_pane_cp04

0xe3b4,	// (0x0008ec0e) popup_mup_playback_window_g1

0xe3c0,	// (0x0008ec1a) popup_mup_playback_window_t1

0xe3d5,	// (0x0008ec2f) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x0008fd5b) popup_mup_playback_window_t

0xe40c,	// (0x0008ec66) main_image_pane_g1_ParamLimits

0xe40c,	// (0x0008ec66) main_image_pane_g1

0xe44f,	// (0x0008eca9) scroll_pane_cp018_ParamLimits

0xe44f,	// (0x0008eca9) scroll_pane_cp018

0xe467,	// (0x0008ecc1) scroll_pane_cp016_ParamLimits

0xe467,	// (0x0008ecc1) scroll_pane_cp016

0x818d,	// (0x000889e7) smil2_image_pane_ParamLimits

0x818d,	// (0x000889e7) smil2_image_pane

0x81c3,	// (0x00088a1d) smil2_root_pane_ParamLimits

0x81c3,	// (0x00088a1d) smil2_root_pane

0x81ef,	// (0x00088a49) smil2_text_pane_ParamLimits

0x81ef,	// (0x00088a49) smil2_text_pane

0x41e6,	// (0x00084a40) bg_list_pane_cp06

0xe4a3,	// (0x0008ecfd) grid_radio_pane

0x41e6,	// (0x00084a40) bg_popup_window_pane_cp06

0xe4ad,	// (0x0008ed07) main_fmradio_pane_t1

0xdf65,	// (0x0008e7bf) heading_pane_cp04

0xe4bb,	// (0x0008ed15) main_fmradio_pane_t2

0x0b75,	// (0x000813cf) popup_cale_lunar_info_window_g1

0xe4c9,	// (0x0008ed23) main_fmradio_pane_t3

0x0b7d,	// (0x000813d7) popup_cale_lunar_info_window_g2

0xe4d9,	// (0x0008ed33) main_fmradio_pane_t4

0x0001,

0xe4e7,	// (0x0008ed41) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x0008fe36) popup_cale_lunar_info_window_g

0xf516,	// (0x0008fd70) main_fmradio_pane_t

0xe4f5,	// (0x0008ed4f) wait_bar_pane_cp03

0xe4fd,	// (0x0008ed57) cell_fmradio_pane_ParamLimits

0xe4fd,	// (0x0008ed57) cell_fmradio_pane

0xe360,	// (0x0008ebba) cell_fmradio_pane_g1_ParamLimits

0xe360,	// (0x0008ebba) cell_fmradio_pane_g1

0x41e6,	// (0x00084a40) grid_highlight_pane_cp011

0xe512,	// (0x0008ed6c) poc_content_pane_ParamLimits

0xe512,	// (0x0008ed6c) poc_content_pane

0xe524,	// (0x0008ed7e) scroll_pane_cp019

0x822f,	// (0x00088a89) popup_call_poc_act_window_ParamLimits

0x822f,	// (0x00088a89) popup_call_poc_act_window

0x823c,	// (0x00088a96) popup_call_poc_inact_window_ParamLimits

0x823c,	// (0x00088a96) popup_call_poc_inact_window

0xf5b3,	// (0x0008fe0d) bg_popup_call_poc_act_pane_g

0x0aed,	// (0x00081347) bg_popup_call_poc_inact_pane_g1

0x0af5,	// (0x0008134f) bg_popup_call_poc_inact_pane_g2

0xe52c,	// (0x0008ed86) popup_call_poc_act_window_g2

0x0afd,	// (0x00081357) bg_popup_call_poc_inact_pane_g3

0x0b05,	// (0x0008135f) bg_popup_call_poc_inact_pane_g4

0x0b0d,	// (0x00081367) bg_popup_call_poc_inact_pane_g5

0xe534,	// (0x0008ed8e) popup_call_poc_act_window_t1_ParamLimits

0xe534,	// (0x0008ed8e) popup_call_poc_act_window_t1

0xe55c,	// (0x0008edb6) popup_call_poc_act_window_t2_ParamLimits

0xe55c,	// (0x0008edb6) popup_call_poc_act_window_t2

0xe584,	// (0x0008edde) popup_call_poc_act_window_t3_ParamLimits

0xe584,	// (0x0008edde) popup_call_poc_act_window_t3

0xe5ac,	// (0x0008ee06) popup_call_poc_act_window_t4_ParamLimits

0xe5ac,	// (0x0008ee06) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x0008fd7b) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x0008fd7b) popup_call_poc_act_window_t

0x0b15,	// (0x0008136f) bg_popup_call_poc_inact_pane_g6

0x0b1d,	// (0x00081377) bg_popup_call_poc_inact_pane_g7

0x0b25,	// (0x0008137f) bg_popup_call_poc_inact_pane_g8

0xe5be,	// (0x0008ee18) popup_call_poc_inact_window_g2

0x0b2d,	// (0x00081387) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x0008fdfa) bg_popup_call_poc_inact_pane_g

0xe5c6,	// (0x0008ee20) popup_call_poc_inact_window_t1_ParamLimits

0xe5c6,	// (0x0008ee20) popup_call_poc_inact_window_t1

0xe5db,	// (0x0008ee35) popup_call_poc_inact_window_t2_ParamLimits

0xe5db,	// (0x0008ee35) popup_call_poc_inact_window_t2

0xe5f0,	// (0x0008ee4a) popup_call_poc_inact_window_t3_ParamLimits

0xe5f0,	// (0x0008ee4a) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x0008fd84) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x0008fd84) popup_call_poc_inact_window_t

0x0ced,	// (0x00081547) context_pane_ParamLimits

0x884b,	// (0x000890a5) signal_pane_ParamLimits

0xe1b3,	// (0x0008ea0d) main_call2_pane

0x0cdb,	// (0x00081535) popup_phob_thumbnail2_window_ParamLimits

0x0cdb,	// (0x00081535) popup_phob_thumbnail2_window

0x7ef6,	// (0x00088750) aid_hotspot_pointer_arrow_pane

0x7efe,	// (0x00088758) aid_hotspot_pointer_hand_pane

0x8561,	// (0x00088dbb) phob_pre_status_pane_g5

0x62e5,	// (0x00086b3f) cams_zoom_pane_ParamLimits

0x62f1,	// (0x00086b4b) image_vga_pane_ParamLimits

0x6300,	// (0x00086b5a) main_camera_pane_g1_ParamLimits

0x630e,	// (0x00086b68) main_camera_pane_g2_ParamLimits

0x631a,	// (0x00086b74) main_camera_pane_g3_ParamLimits

0x6328,	// (0x00086b82) main_camera_pane_g4_ParamLimits

0x6336,	// (0x00086b90) main_camera_pane_g5_ParamLimits

0x6344,	// (0x00086b9e) main_camera_pane_g6_ParamLimits

0x6352,	// (0x00086bac) main_camera_pane_g7_ParamLimits

0xf229,	// (0x0008fa83) main_camera_pane_g_ParamLimits

0x6360,	// (0x00086bba) main_camera_pane_t1_ParamLimits

0x6372,	// (0x00086bcc) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x0008fa94) main_camera_pane_t_ParamLimits

0x4441,	// (0x00084c9b) bg_popup_preview_window_pane_cp01_ParamLimits

0x4441,	// (0x00084c9b) bg_popup_preview_window_pane_cp01

0xe605,	// (0x0008ee5f) popup_phob_thumbnail2_window_g1_ParamLimits

0xe605,	// (0x0008ee5f) popup_phob_thumbnail2_window_g1

0x41e6,	// (0x00084a40) call2_cli_visual_pane

0x8258,	// (0x00088ab2) popup_call2_audio_conf_window_ParamLimits

0x8258,	// (0x00088ab2) popup_call2_audio_conf_window

0x8271,	// (0x00088acb) popup_call2_audio_first_window_ParamLimits

0x8271,	// (0x00088acb) popup_call2_audio_first_window

0x830f,	// (0x00088b69) popup_call2_audio_in_window_ParamLimits

0x830f,	// (0x00088b69) popup_call2_audio_in_window

0x8353,	// (0x00088bad) popup_call2_audio_out_window_ParamLimits

0x8353,	// (0x00088bad) popup_call2_audio_out_window

0x83bd,	// (0x00088c17) popup_call2_audio_second_window_ParamLimits

0x83bd,	// (0x00088c17) popup_call2_audio_second_window

0x841b,	// (0x00088c75) popup_call2_audio_wait_window_ParamLimits

0x841b,	// (0x00088c75) popup_call2_audio_wait_window

0x41e6,	// (0x00084a40) bg_popup_call2_act_pane_cp03

0x4423,	// (0x00084c7d) list_conf_pane_cp

0xe611,	// (0x0008ee6b) popup_call2_audio_conf_window_t1

0xe61f,	// (0x0008ee79) list_single_graphic_popup_conf2_pane_ParamLimits

0xe61f,	// (0x0008ee79) list_single_graphic_popup_conf2_pane

0xdfd4,	// (0x0008e82e) list_highlight_pane_cp04

0xe632,	// (0x0008ee8c) list_single_graphic_popup_conf2_pane_g1

0xdfe5,	// (0x0008e83f) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x0008fd8b) list_single_graphic_popup_conf2_pane_g

0xe63c,	// (0x0008ee96) list_single_graphic_popup_conf2_pane_t1

0xe64a,	// (0x0008eea4) bg_popup_call2_act_pane_cp01_ParamLimits

0xe64a,	// (0x0008eea4) bg_popup_call2_act_pane_cp01

0xe6d4,	// (0x0008ef2e) call_type_pane_cp05_ParamLimits

0xe6d4,	// (0x0008ef2e) call_type_pane_cp05

0xe728,	// (0x0008ef82) popup_call2_audio_second_window_g1_ParamLimits

0xe728,	// (0x0008ef82) popup_call2_audio_second_window_g1

0xe77c,	// (0x0008efd6) popup_call2_audio_second_window_g2_ParamLimits

0xe77c,	// (0x0008efd6) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x0008fd90) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x0008fd90) popup_call2_audio_second_window_g

0xe7e1,	// (0x0008f03b) popup_call2_audio_second_window_t1_ParamLimits

0xe7e1,	// (0x0008f03b) popup_call2_audio_second_window_t1

0xe89c,	// (0x0008f0f6) popup_call2_audio_second_window_t2_ParamLimits

0xe89c,	// (0x0008f0f6) popup_call2_audio_second_window_t2

0xe8ef,	// (0x0008f149) popup_call2_audio_second_window_t3_ParamLimits

0xe8ef,	// (0x0008f149) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x0008fd97) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x0008fd97) popup_call2_audio_second_window_t

0x41e6,	// (0x00084a40) bg_popup_call2_in_pane_cp02

0x41f0,	// (0x00084a4a) call_type_pane_cp04

0x41f8,	// (0x00084a52) popup_call2_audio_wait_window_g1

0x4200,	// (0x00084a5a) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x0008f970) popup_call2_audio_wait_window_g

0x4208,	// (0x00084a62) popup_call2_audio_wait_window_t3

0xe9e2,	// (0x0008f23c) bg_popup_call2_act_pane_ParamLimits

0xe9e2,	// (0x0008f23c) bg_popup_call2_act_pane

0xeaa2,	// (0x0008f2fc) call_type_pane_cp03_ParamLimits

0xeaa2,	// (0x0008f2fc) call_type_pane_cp03

0xeb06,	// (0x0008f360) popup_call2_audio_first_window_g1_ParamLimits

0xeb06,	// (0x0008f360) popup_call2_audio_first_window_g1

0xeb76,	// (0x0008f3d0) popup_call2_audio_first_window_g2_ParamLimits

0xeb76,	// (0x0008f3d0) popup_call2_audio_first_window_g2

0xdeee,	// (0x0008e748) popup_call2_audio_first_window_g3_ParamLimits

0xdeee,	// (0x0008e748) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x0008fda0) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x0008fda0) popup_call2_audio_first_window_g

0xec54,	// (0x0008f4ae) popup_call2_audio_first_window_t1_ParamLimits

0xec54,	// (0x0008f4ae) popup_call2_audio_first_window_t1

0xed57,	// (0x0008f5b1) popup_call2_audio_first_window_t4_ParamLimits

0xed57,	// (0x0008f5b1) popup_call2_audio_first_window_t4

0xee3a,	// (0x0008f694) popup_call2_audio_first_window_t5_ParamLimits

0xee3a,	// (0x0008f694) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x0008fdab) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x0008fdab) popup_call2_audio_first_window_t

0x4439,	// (0x00084c93) bg_popup_call2_act_pane_g1

0x0b87,	// (0x000813e1) popup_cale_lunar_info_window_t1

0x0b95,	// (0x000813ef) popup_cale_lunar_info_window_t2

0x0ba3,	// (0x000813fd) popup_cale_lunar_info_window_t3

0x41e6,	// (0x00084a40) bg_popup_call2_bubble_pane

0xef3b,	// (0x0008f795) bg_popup_call2_in_pane_cp01_ParamLimits

0xef3b,	// (0x0008f795) bg_popup_call2_in_pane_cp01

0x030f,	// (0x00080b69) call_type_pane_cp02

0xef83,	// (0x0008f7dd) popup_call2_audio_out_window_g1_ParamLimits

0xef83,	// (0x0008f7dd) popup_call2_audio_out_window_g1

0xefaf,	// (0x0008f809) popup_call2_audio_out_window_g2_ParamLimits

0xefaf,	// (0x0008f809) popup_call2_audio_out_window_g2

0xefd7,	// (0x0008f831) popup_call2_audio_out_window_g3_ParamLimits

0xefd7,	// (0x0008f831) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x0008fdb4) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x0008fdb4) popup_call2_audio_out_window_g

0xf012,	// (0x0008f86c) popup_call2_audio_out_window_t1_ParamLimits

0xf012,	// (0x0008f86c) popup_call2_audio_out_window_t1

0xf071,	// (0x0008f8cb) popup_call2_audio_out_window_t2_ParamLimits

0xf071,	// (0x0008f8cb) popup_call2_audio_out_window_t2

0xf0c5,	// (0x0008f91f) popup_call2_audio_out_window_t3_ParamLimits

0xf0c5,	// (0x0008f91f) popup_call2_audio_out_window_t3

0x07b9,	// (0x00081013) popup_call2_audio_out_window_t4_ParamLimits

0x07b9,	// (0x00081013) popup_call2_audio_out_window_t4

0x07cf,	// (0x00081029) popup_call2_audio_out_window_t5_ParamLimits

0x07cf,	// (0x00081029) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x0008fdbd) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x0008fdbd) popup_call2_audio_out_window_t

0x0833,	// (0x0008108d) bg_popup_call2_in_pane_ParamLimits

0x0833,	// (0x0008108d) bg_popup_call2_in_pane

0x088f,	// (0x000810e9) popup_call2_audio_in_window_g1_ParamLimits

0x088f,	// (0x000810e9) popup_call2_audio_in_window_g1

0x08c7,	// (0x00081121) popup_call2_audio_in_window_g2_ParamLimits

0x08c7,	// (0x00081121) popup_call2_audio_in_window_g2

0x08ff,	// (0x00081159) popup_call2_audio_in_window_g3_ParamLimits

0x08ff,	// (0x00081159) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x0008fdca) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x0008fdca) popup_call2_audio_in_window_g

0x0957,	// (0x000811b1) popup_call2_audio_in_window_t1_ParamLimits

0x0957,	// (0x000811b1) popup_call2_audio_in_window_t1

0x09d7,	// (0x00081231) popup_call2_audio_in_window_t2_ParamLimits

0x09d7,	// (0x00081231) popup_call2_audio_in_window_t2

0x0a57,	// (0x000812b1) popup_call2_audio_in_window_t3_ParamLimits

0x0a57,	// (0x000812b1) popup_call2_audio_in_window_t3

0x0a71,	// (0x000812cb) popup_call2_audio_in_window_t4_ParamLimits

0x0a71,	// (0x000812cb) popup_call2_audio_in_window_t4

0x0a83,	// (0x000812dd) popup_call2_audio_in_window_t5_ParamLimits

0x0a83,	// (0x000812dd) popup_call2_audio_in_window_t5

0x0a98,	// (0x000812f2) popup_call2_audio_in_window_t6_ParamLimits

0x0a98,	// (0x000812f2) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x0008fdd3) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x0008fdd3) popup_call2_audio_in_window_t

0x4439,	// (0x00084c93) bg_popup_call2_in_pane_g1

0x0bb1,	// (0x0008140b) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x0008fe3b) popup_cale_lunar_info_window_t

0x4441,	// (0x00084c9b) bg_popup_call2_rect_pane_ParamLimits

0x4441,	// (0x00084c9b) bg_popup_call2_rect_pane

0x41e6,	// (0x00084a40) call2_cli_visual_graphic_pane

0x41e6,	// (0x00084a40) call2_cli_visual_text_pane

0x88d0,	// (0x0008912a) smil_status_volume_pane_g3

0x0002,

0x4569,	// (0x00084dc3) call2_cli_visual_graphic_pane_g1

0x4569,	// (0x00084dc3) call2_cli_visual_graphic_pane_g2

0x4569,	// (0x00084dc3) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x0008fde0) call2_cli_visual_graphic_pane_g

0x0aad,	// (0x00081307) bg_popup_call2_rect_pane_g1

0x4607,	// (0x00084e61) bg_popup_call2_rect_pane_g2

0x0ab5,	// (0x0008130f) bg_popup_call2_rect_pane_g3

0x0abd,	// (0x00081317) bg_popup_call2_rect_pane_g4

0x0ac5,	// (0x0008131f) bg_popup_call2_rect_pane_g5

0x0acd,	// (0x00081327) bg_popup_call2_rect_pane_g6

0x0ad5,	// (0x0008132f) bg_popup_call2_rect_pane_g7

0x0add,	// (0x00081337) bg_popup_call2_rect_pane_g8

0x0ae5,	// (0x0008133f) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x0008fde7) bg_popup_call2_rect_pane_g

0x0aed,	// (0x00081347) bg_popup_call2_bubble_pane_g1

0x0af5,	// (0x0008134f) bg_popup_call2_bubble_pane_g2

0x0afd,	// (0x00081357) bg_popup_call2_bubble_pane_g3

0x0b05,	// (0x0008135f) bg_popup_call2_bubble_pane_g4

0x0b0d,	// (0x00081367) bg_popup_call2_bubble_pane_g5

0x0b15,	// (0x0008136f) bg_popup_call2_bubble_pane_g6

0x0b1d,	// (0x00081377) bg_popup_call2_bubble_pane_g7

0x0b25,	// (0x0008137f) bg_popup_call2_bubble_pane_g8

0x0b2d,	// (0x00081387) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x0008fdfa) bg_popup_call2_bubble_pane_g

0x5de6,	// (0x00086640) aid_cale_week_size_cell_pane

0x6386,	// (0x00086be0) aid_cams_cif_uncrop_pane_ParamLimits

0x6386,	// (0x00086be0) aid_cams_cif_uncrop_pane

0x64e3,	// (0x00086d3d) aid_cams_size_cell_ParamLimits

0x64e3,	// (0x00086d3d) aid_cams_size_cell

0x64ef,	// (0x00086d49) grid_cams_pane_ParamLimits

0x64fd,	// (0x00086d57) linegrid_cams_pane_ParamLimits

0x6625,	// (0x00086e7f) call_video_pane_t1

0x6642,	// (0x00086e9c) call_video_pane_t2

0x0001,

0xf28d,	// (0x0008fae7) call_video_pane_t

0x6afc,	// (0x00087356) aid_cale_month_size_cell_pane_ParamLimits

0x6afc,	// (0x00087356) aid_cale_month_size_cell_pane

0xf62a,	// (0x0008fe84) smil_status_volume_pane_g

0x88dd,	// (0x00089137) volume_smil_pane_ParamLimits

0x0176,	// (0x000809d0) aid_popup2_width_pane

0x5cf2,	// (0x0008654c) cell_qdial_pane_g4_ParamLimits

0x5cf2,	// (0x0008654c) cell_qdial_pane_g4

0x7807,	// (0x00088061) aid_blid_cardinal_pane_ParamLimits

0x7817,	// (0x00088071) aid_blid_destination_pane_ParamLimits

0x7817,	// (0x00088071) aid_blid_destination_pane

0x4441,	// (0x00084c9b) bg_popup_call_poc_act_pane_ParamLimits

0x4441,	// (0x00084c9b) bg_popup_call_poc_act_pane

0x4441,	// (0x00084c9b) bg_popup_call_poc_inact_pane_ParamLimits

0x4441,	// (0x00084c9b) bg_popup_call_poc_inact_pane

0x0b35,	// (0x0008138f) bg_popup_call_poc_act_pane_g1

0x0b3d,	// (0x00081397) bg_popup_call_poc_act_pane_g2

0x0b45,	// (0x0008139f) bg_popup_call_poc_act_pane_g3

0x0b05,	// (0x0008135f) bg_popup_call_poc_act_pane_g4

0x0b0d,	// (0x00081367) bg_popup_call_poc_act_pane_g5

0x0b4d,	// (0x000813a7) bg_popup_call_poc_act_pane_g6

0x0b1d,	// (0x00081377) bg_popup_call_poc_act_pane_g7

0x0b55,	// (0x000813af) bg_popup_call_poc_act_pane_g8

0x41e6,	// (0x00084a40) main_usb_pane

0x0cb2,	// (0x0008150c) popup_cale_lunar_info_window

0x695a,	// (0x000871b4) im_reading_pane_t1_ParamLimits

0xda11,	// (0x0008e26b) list_im_pane_ParamLimits

0xda22,	// (0x0008e27c) scroll_pane_cp07_ParamLimits

0x41e6,	// (0x00084a40) grid_highlight_pane_cp012

0x4441,	// (0x00084c9b) mup_scale_pane_ParamLimits

0xdeee,	// (0x0008e748) main_usb_pane_g1_ParamLimits

0xdeee,	// (0x0008e748) main_usb_pane_g1

0x8484,	// (0x00088cde) main_usb_pane_g2_ParamLimits

0x8484,	// (0x00088cde) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x0008fe24) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x0008fe24) main_usb_pane_g

0x8490,	// (0x00088cea) main_usb_pane_t1_ParamLimits

0x8490,	// (0x00088cea) main_usb_pane_t1

0x84a2,	// (0x00088cfc) main_usb_pane_t2_ParamLimits

0x84a2,	// (0x00088cfc) main_usb_pane_t2

0x84b4,	// (0x00088d0e) main_usb_pane_t3_ParamLimits

0x84b4,	// (0x00088d0e) main_usb_pane_t3

0x84c6,	// (0x00088d20) main_usb_pane_t4_ParamLimits

0x84c6,	// (0x00088d20) main_usb_pane_t4

0x84d8,	// (0x00088d32) main_usb_pane_t5_ParamLimits

0x84d8,	// (0x00088d32) main_usb_pane_t5

0x84ea,	// (0x00088d44) main_usb_pane_t6_ParamLimits

0x84ea,	// (0x00088d44) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x0008fe29) main_usb_pane_t_ParamLimits

0x77a6,	// (0x00088000) aid_text_placing

0x77b1,	// (0x0008800b) main_location2_pane_t1_ParamLimits

0x77c7,	// (0x00088021) main_location2_pane_t2_ParamLimits

0x77dd,	// (0x00088037) main_location2_pane_t3_ParamLimits

0x77f3,	// (0x0008804d) main_location2_pane_t4_ParamLimits

0x77f3,	// (0x0008804d) main_location2_pane_t4

0xf3ee,	// (0x0008fc48) main_location2_pane_t_ParamLimits

0x447d,	// (0x00084cd7) find_pinb_pane_g2_ParamLimits

0x447d,	// (0x00084cd7) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x0008f996) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x0008f996) find_pinb_pane_g

0x4489,	// (0x00084ce3) find_pinb_pane_t1_ParamLimits

0x449b,	// (0x00084cf5) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x0008f99b) find_pinb_pane_t_ParamLimits

0x41e6,	// (0x00084a40) main_call3_pane

0x6f08,	// (0x00087762) cale_month_day_heading_pane_t1_ParamLimits

0x6f66,	// (0x000877c0) cale_month_day_heading_pane_t2_ParamLimits

0x6fcb,	// (0x00087825) cale_month_day_heading_pane_t3_ParamLimits

0x7030,	// (0x0008788a) cale_month_day_heading_pane_t4_ParamLimits

0x7095,	// (0x000878ef) cale_month_day_heading_pane_t5_ParamLimits

0x7102,	// (0x0008795c) cale_month_day_heading_pane_t6_ParamLimits

0x7177,	// (0x000879d1) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x0008fb1f) cale_month_day_heading_pane_t_ParamLimits

0xdc62,	// (0x0008e4bc) smil_status_volume_pane

0x8042,	// (0x0008889c) postcard_address_pane_ParamLimits

0x8042,	// (0x0008889c) postcard_address_pane

0x8050,	// (0x000888aa) postcard_message_pane_ParamLimits

0x8050,	// (0x000888aa) postcard_message_pane

0x845a,	// (0x00088cb4) call2_cli_visual_pane_t1_ParamLimits

0x845a,	// (0x00088cb4) call2_cli_visual_pane_t1

0x8a23,	// (0x0008927d) postcard_message_pane_t1_ParamLimits

0x8a23,	// (0x0008927d) postcard_message_pane_t1

0x0dc2,	// (0x0008161c) postcard_address_pane_t1_ParamLimits

0x0dc2,	// (0x0008161c) postcard_address_pane_t1

0x8a14,	// (0x0008926e) popup_call3_audio_in_window_ParamLimits

0x8a14,	// (0x0008926e) popup_call3_audio_in_window

0x88f2,	// (0x0008914c) bg_popup_call3_in_pane_ParamLimits

0x88f2,	// (0x0008914c) bg_popup_call3_in_pane

0x895a,	// (0x000891b4) popup_call3_audio_in_window_g1_ParamLimits

0x895a,	// (0x000891b4) popup_call3_audio_in_window_g1

0x8972,	// (0x000891cc) popup_call3_audio_in_window_g2_ParamLimits

0x8972,	// (0x000891cc) popup_call3_audio_in_window_g2

0x898a,	// (0x000891e4) popup_call3_audio_in_window_g3_ParamLimits

0x898a,	// (0x000891e4) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x0008fe8b) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x0008fe8b) popup_call3_audio_in_window_g

0x89b2,	// (0x0008920c) popup_call3_audio_in_window_t1_ParamLimits

0x89b2,	// (0x0008920c) popup_call3_audio_in_window_t1

0x89da,	// (0x00089234) popup_call3_audio_in_window_t2_ParamLimits

0x89da,	// (0x00089234) popup_call3_audio_in_window_t2

0x8a02,	// (0x0008925c) popup_call3_audio_in_window_t3_ParamLimits

0x8a02,	// (0x0008925c) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x0008fe94) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x0008fe94) popup_call3_audio_in_window_t

0xe1b3,	// (0x0008ea0d) bg_popup_call3_rect_pane

0x0aad,	// (0x00081307) bg_popup_call3_rect_pane_g1

0x4607,	// (0x00084e61) bg_popup_call3_rect_pane_g2

0x0ab5,	// (0x0008130f) bg_popup_call3_rect_pane_g3

0x0abd,	// (0x00081317) bg_popup_call3_rect_pane_g4

0x0ac5,	// (0x0008131f) bg_popup_call3_rect_pane_g5

0x0acd,	// (0x00081327) bg_popup_call3_rect_pane_g6

0x0ad5,	// (0x0008132f) bg_popup_call3_rect_pane_g7

0x7c39,	// (0x00088493) mup_visualizer_osc_pane

0xe272,	// (0x0008eacc) mup_visualizer_spec_pane

0x8912,	// (0x0008916c) call3_video_qcif_pane_ParamLimits

0x8912,	// (0x0008916c) call3_video_qcif_pane

0x8924,	// (0x0008917e) call3_video_qcif_uncrop_pane_ParamLimits

0x8924,	// (0x0008917e) call3_video_qcif_uncrop_pane

0x8934,	// (0x0008918e) call3_video_subqcif_pane_ParamLimits

0x8934,	// (0x0008918e) call3_video_subqcif_pane

0x8948,	// (0x000891a2) call3_video_subqcif_uncrop_pane_ParamLimits

0x8948,	// (0x000891a2) call3_video_subqcif_uncrop_pane

0x89a2,	// (0x000891fc) popup_call3_audio_in_window_g4_ParamLimits

0x89a2,	// (0x000891fc) popup_call3_audio_in_window_g4

0x88bf,	// (0x00089119) mup_spec_half_pane

0x88c8,	// (0x00089122) mup_spec_half_pane_cp

0x0d60,	// (0x000815ba) mup_osc_middle_pane

0x0d69,	// (0x000815c3) mup_visualizer_osc_pane_g1

0x889f,	// (0x000890f9) mup_spec_bar_pane_ParamLimits

0x889f,	// (0x000890f9) mup_spec_bar_pane

0x0d4d,	// (0x000815a7) mup_spec_bar_pane_g1

0x0d57,	// (0x000815b1) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0008fe7f) mup_spec_bar_pane_g

0x5de6,	// (0x00086640) aid_cale_week_size_cell_pane_ParamLimits

0x5df9,	// (0x00086653) bg_cale_heading_pane_ParamLimits

0x463b,	// (0x00084e95) bg_cale_pane_cp01_ParamLimits

0x5e15,	// (0x0008666f) cale_week_corner_pane_ParamLimits

0x5e2b,	// (0x00086685) cale_week_day_heading_pane_ParamLimits

0x5e47,	// (0x000866a1) cale_week_scroll_pane_g1_ParamLimits

0x5e60,	// (0x000866ba) cale_week_scroll_pane_g2_ParamLimits

0x5e71,	// (0x000866cb) cale_week_scroll_pane_g3_ParamLimits

0x5e82,	// (0x000866dc) cale_week_scroll_pane_g4_ParamLimits

0x5e93,	// (0x000866ed) cale_week_scroll_pane_g5_ParamLimits

0x5ea4,	// (0x000866fe) cale_week_scroll_pane_g6_ParamLimits

0x5eb7,	// (0x00086711) cale_week_scroll_pane_g7_ParamLimits

0x5eca,	// (0x00086724) cale_week_scroll_pane_g8_ParamLimits

0x5edd,	// (0x00086737) cale_week_scroll_pane_g9_ParamLimits

0x5eee,	// (0x00086748) cale_week_scroll_pane_g10_ParamLimits

0x5eff,	// (0x00086759) cale_week_scroll_pane_g11_ParamLimits

0x5f10,	// (0x0008676a) cale_week_scroll_pane_g12_ParamLimits

0x5f21,	// (0x0008677b) cale_week_scroll_pane_g13_ParamLimits

0x5f32,	// (0x0008678c) cale_week_scroll_pane_g14_ParamLimits

0x5f4b,	// (0x000867a5) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x0008fa27) cale_week_scroll_pane_g_ParamLimits

0x5f64,	// (0x000867be) cale_week_time_pane_ParamLimits

0x5f77,	// (0x000867d1) grid_cale_week_pane_ParamLimits

0x4654,	// (0x00084eae) listscroll_cale_week_pane_t1

0x5f94,	// (0x000867ee) scroll_pane_cp08_ParamLimits

0x6b4d,	// (0x000873a7) cale_month_corner_pane_ParamLimits

0xdc38,	// (0x0008e492) cale_month_pane_t1

0x6eb7,	// (0x00087711) cale_month_week_pane_ParamLimits

0xdeee,	// (0x0008e748) popup_call_status_window_g1_ParamLimits

0x75af,	// (0x00087e09) popup_call_status_window_g2_ParamLimits

0x75bb,	// (0x00087e15) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x0008fbcf) popup_call_status_window_g_ParamLimits

0xdf55,	// (0x0008e7af) aid_call2_pane

0x7ed4,	// (0x0008872e) msg_header_pane_g1

0x8042,	// (0x0008889c) postcard_address2_pane_ParamLimits

0x8042,	// (0x0008889c) postcard_address2_pane

0x8050,	// (0x000888aa) postcard_message2_pane_ParamLimits

0x8050,	// (0x000888aa) postcard_message2_pane

0x8859,	// (0x000890b3) message2_row_pane_ParamLimits

0x8859,	// (0x000890b3) message2_row_pane

0x0d08,	// (0x00081562) address2_row_pane_ParamLimits

0x0d08,	// (0x00081562) address2_row_pane

0x0d1b,	// (0x00081575) postcard_message2_row_pane_g1

0x0d23,	// (0x0008157d) postcard_message2_row_pane_t1

0x0d1b,	// (0x00081575) address2_row_pane_g1

0x0d23,	// (0x0008157d) address2_row_pane_t1

0x6246,	// (0x00086aa0) aid_size_cell_vorec

0x41e6,	// (0x00084a40) main_rss_pane

0x8873,	// (0x000890cd) rss_list_single_pane_ParamLimits

0x8873,	// (0x000890cd) rss_list_single_pane

0x0d31,	// (0x0008158b) rss_list_single_pane_t1

0x0d3f,	// (0x00081599) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x0008fe7a) rss_list_single_pane_t

0x41e6,	// (0x00084a40) main_camera2_pane

0x41e6,	// (0x00084a40) main_video2_pane

0x8a87,	// (0x000892e1) cams_zoom_pane_cp2_ParamLimits

0x8a87,	// (0x000892e1) cams_zoom_pane_cp2

0x8a93,	// (0x000892ed) image2_vga_pane_ParamLimits

0x8a93,	// (0x000892ed) image2_vga_pane

0x8aa2,	// (0x000892fc) main_camera2_pane_g1_ParamLimits

0x8aa2,	// (0x000892fc) main_camera2_pane_g1

0x8aae,	// (0x00089308) main_camera2_pane_g2_ParamLimits

0x8aae,	// (0x00089308) main_camera2_pane_g2

0x8aba,	// (0x00089314) main_camera2_pane_g3_ParamLimits

0x8aba,	// (0x00089314) main_camera2_pane_g3

0x8ac6,	// (0x00089320) main_camera2_pane_g4_ParamLimits

0x8ac6,	// (0x00089320) main_camera2_pane_g4

0x8ad2,	// (0x0008932c) main_camera2_pane_g5_ParamLimits

0x8ad2,	// (0x0008932c) main_camera2_pane_g5

0x8ade,	// (0x00089338) main_camera2_pane_g6_ParamLimits

0x8ade,	// (0x00089338) main_camera2_pane_g6

0x8aea,	// (0x00089344) main_camera2_pane_g7_ParamLimits

0x8aea,	// (0x00089344) main_camera2_pane_g7

0x8af6,	// (0x00089350) main_camera2_pane_g8_ParamLimits

0x8af6,	// (0x00089350) main_camera2_pane_g8

0x0008,

0xf641,	// (0x0008fe9b) main_camera2_pane_g_ParamLimits

0xf641,	// (0x0008fe9b) main_camera2_pane_g

0x8b0e,	// (0x00089368) main_camera2_pane_t1_ParamLimits

0x8b0e,	// (0x00089368) main_camera2_pane_t1

0x8b20,	// (0x0008937a) main_camera2_pane_t2_ParamLimits

0x8b20,	// (0x0008937a) main_camera2_pane_t2

0x8b32,	// (0x0008938c) main_camera2_pane_t3_ParamLimits

0x8b32,	// (0x0008938c) main_camera2_pane_t3

0x8b44,	// (0x0008939e) main_camera2_pane_t4_ParamLimits

0x8b44,	// (0x0008939e) main_camera2_pane_t4

0x0006,

0xf654,	// (0x0008feae) main_camera2_pane_t_ParamLimits

0xf654,	// (0x0008feae) main_camera2_pane_t

0x8ba1,	// (0x000893fb) cams_zoom_pane_cp4_ParamLimits

0x8ba1,	// (0x000893fb) cams_zoom_pane_cp4

0x8bb1,	// (0x0008940b) image2_cif_pane_ParamLimits

0x8bb1,	// (0x0008940b) image2_cif_pane

0x8bc6,	// (0x00089420) image2_subqcif_pane_ParamLimits

0x8bc6,	// (0x00089420) image2_subqcif_pane

0x8bd5,	// (0x0008942f) main_video2_pane_g1_ParamLimits

0x8bd5,	// (0x0008942f) main_video2_pane_g1

0x8be7,	// (0x00089441) main_video2_pane_g2_ParamLimits

0x8be7,	// (0x00089441) main_video2_pane_g2

0x8bf7,	// (0x00089451) main_video2_pane_g3_ParamLimits

0x8bf7,	// (0x00089451) main_video2_pane_g3

0x8c07,	// (0x00089461) main_video2_pane_g4_ParamLimits

0x8c07,	// (0x00089461) main_video2_pane_g4

0x8c17,	// (0x00089471) main_video2_pane_g5_ParamLimits

0x8c17,	// (0x00089471) main_video2_pane_g5

0x8c27,	// (0x00089481) main_video2_pane_g6_ParamLimits

0x8c27,	// (0x00089481) main_video2_pane_g6

0x0005,

0xf663,	// (0x0008febd) main_video2_pane_g_ParamLimits

0xf663,	// (0x0008febd) main_video2_pane_g

0x8c39,	// (0x00089493) main_video2_pane_t1_ParamLimits

0x8c39,	// (0x00089493) main_video2_pane_t1

0x8c53,	// (0x000894ad) main_video2_pane_t2_ParamLimits

0x8c53,	// (0x000894ad) main_video2_pane_t2

0x8c79,	// (0x000894d3) main_video2_pane_t3_ParamLimits

0x8c79,	// (0x000894d3) main_video2_pane_t3

0x0002,

0xf670,	// (0x0008feca) main_video2_pane_t_ParamLimits

0xf670,	// (0x0008feca) main_video2_pane_t

0x85a1,	// (0x00088dfb) call_muted_g2

0x0001,

0xf612,	// (0x0008fe6c) call_muted_g

0x41e6,	// (0x00084a40) main_mup2_pane

0x0e32,	// (0x0008168c) main_mup2_pane_g1_ParamLimits

0x0e32,	// (0x0008168c) main_mup2_pane_g1

0x8c9f,	// (0x000894f9) main_mup2_pane_g2_ParamLimits

0x8c9f,	// (0x000894f9) main_mup2_pane_g2

0x8f23,	// (0x0008977d) main_mup_pane_g13_cp1

0x8f2b,	// (0x00089785) mup_volume_pane_cp1

0x8cc1,	// (0x0008951b) main_mup2_pane_g4_ParamLimits

0x8cc1,	// (0x0008951b) main_mup2_pane_g4

0x8cd2,	// (0x0008952c) main_mup2_pane_g5_ParamLimits

0x8cd2,	// (0x0008952c) main_mup2_pane_g5

0x8ce3,	// (0x0008953d) main_mup2_pane_g6_ParamLimits

0x8ce3,	// (0x0008953d) main_mup2_pane_g6

0x8cf4,	// (0x0008954e) main_mup2_pane_g7_ParamLimits

0x8cf4,	// (0x0008954e) main_mup2_pane_g7

0x0006,

0xf677,	// (0x0008fed1) main_mup2_pane_g_ParamLimits

0xf677,	// (0x0008fed1) main_mup2_pane_g

0x8d10,	// (0x0008956a) main_mup2_pane_t1_ParamLimits

0x8d10,	// (0x0008956a) main_mup2_pane_t1

0x8d27,	// (0x00089581) main_mup2_pane_t2_ParamLimits

0x8d27,	// (0x00089581) main_mup2_pane_t2

0x8d3e,	// (0x00089598) main_mup2_pane_t3_ParamLimits

0x8d3e,	// (0x00089598) main_mup2_pane_t3

0x8d55,	// (0x000895af) main_mup2_pane_t4_ParamLimits

0x8d55,	// (0x000895af) main_mup2_pane_t4

0x8d6f,	// (0x000895c9) main_mup2_pane_t5_ParamLimits

0x8d6f,	// (0x000895c9) main_mup2_pane_t5

0x8d89,	// (0x000895e3) main_mup2_pane_t6_ParamLimits

0x8d89,	// (0x000895e3) main_mup2_pane_t6

0x0005,

0xf686,	// (0x0008fee0) main_mup2_pane_t_ParamLimits

0xf686,	// (0x0008fee0) main_mup2_pane_t

0x8dc1,	// (0x0008961b) mup2_visualizer_pane_ParamLimits

0x8dc1,	// (0x0008961b) mup2_visualizer_pane

0x8df7,	// (0x00089651) mup_progress_pane_cp_ParamLimits

0x8df7,	// (0x00089651) mup_progress_pane_cp

0x8f0e,	// (0x00089768) mup_volume_pane_cp_ParamLimits

0x8f0e,	// (0x00089768) mup_volume_pane_cp

0x8e10,	// (0x0008966a) mup2_visualizer_pane_g1_ParamLimits

0x8e10,	// (0x0008966a) mup2_visualizer_pane_g1

0x0e04,	// (0x0008165e) mup2_visualizer_pane_g2_ParamLimits

0x0e04,	// (0x0008165e) mup2_visualizer_pane_g2

0x8e25,	// (0x0008967f) mup2_visualizer_pane_g3_ParamLimits

0x8e25,	// (0x0008967f) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x0008feed) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x0008feed) mup2_visualizer_pane_g

0xe49b,	// (0x0008ecf5) aid_size_cell_fmradio

0x86b7,	// (0x00088f11) aid_height_parent_landcape

0xdaa0,	// (0x0008e2fa) wml_content_pane_cp

0xdaa8,	// (0x0008e302) wml_tabs_pane

0xdab1,	// (0x0008e30b) popup_wml_miniature_window

0xdab9,	// (0x0008e313) scroll_pane_cp021

0xdacd,	// (0x0008e327) wml_content_pane_comp8

0x41e6,	// (0x00084a40) bg_popup_sub_pane_cp05

0x0e22,	// (0x0008167c) popup_wml_miniature_window_g1

0x0e2a,	// (0x00081684) wml_miniature_view_pane

0x8e31,	// (0x0008968b) aid_size_wml_view

0x8e39,	// (0x00089693) wml_miniature_view_pane_g1

0x8e42,	// (0x0008969c) wml_miniature_view_pane_g2

0x8e4b,	// (0x000896a5) wml_miniature_view_pane_g3

0x8e53,	// (0x000896ad) wml_miniature_view_pane_g4

0x8e5b,	// (0x000896b5) wml_miniature_view_pane_g5

0x8e63,	// (0x000896bd) wml_miniature_view_pane_g6

0x8e6b,	// (0x000896c5) wml_miniature_view_pane_g7

0x8e73,	// (0x000896cd) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x0008fef4) wml_miniature_view_pane_g

0x0e32,	// (0x0008168c) background_graphic_ParamLimits

0x0e32,	// (0x0008168c) background_graphic

0x0e3e,	// (0x00081698) wml_tabs_2_pane

0x0e47,	// (0x000816a1) wml_tabs_3_pane_ParamLimits

0x0e47,	// (0x000816a1) wml_tabs_3_pane

0x0e59,	// (0x000816b3) wml_tabs_4_pane_ParamLimits

0x0e59,	// (0x000816b3) wml_tabs_4_pane

0x0e6f,	// (0x000816c9) wml_tabs_5_pane_ParamLimits

0x0e6f,	// (0x000816c9) wml_tabs_5_pane

0x0e89,	// (0x000816e3) wml_tabs_pane_g2_ParamLimits

0x0e89,	// (0x000816e3) wml_tabs_pane_g2

0x0e9d,	// (0x000816f7) wml_tabs_pane_g3_ParamLimits

0x0e9d,	// (0x000816f7) wml_tabs_pane_g3

0x8e7b,	// (0x000896d5) wml_tabs_2_active_pane_ParamLimits

0x8e7b,	// (0x000896d5) wml_tabs_2_active_pane

0x8e8d,	// (0x000896e7) wml_tabs_2_passive_pane_ParamLimits

0x8e8d,	// (0x000896e7) wml_tabs_2_passive_pane

0x8e9f,	// (0x000896f9) wml_tabs_3_active_pane_cp_ParamLimits

0x8e9f,	// (0x000896f9) wml_tabs_3_active_pane_cp

0x8eb2,	// (0x0008970c) wml_tabs_3_passive_pane_ParamLimits

0x8eb2,	// (0x0008970c) wml_tabs_3_passive_pane

0x8ec3,	// (0x0008971d) wml_tabs_3_passive_pane_cp_ParamLimits

0x8ec3,	// (0x0008971d) wml_tabs_3_passive_pane_cp

0x8ed8,	// (0x00089732) tabs_4_active_pane

0x8ee0,	// (0x0008973a) tabs_4_passive_pane

0x8ee8,	// (0x00089742) tabs_4_passive_pane_cp

0x8ef0,	// (0x0008974a) tabs_4_passive_pane_cp2

0x847c,	// (0x00088cd6) aid_height_text

0x7c02,	// (0x0008845c) mup_volume_cont_pane_ParamLimits

0x7c02,	// (0x0008845c) mup_volume_cont_pane

0x5948,	// (0x000861a2) aid_size_cell_pinb

0x5952,	// (0x000861ac) aid_size_list_pinb

0x8de0,	// (0x0008963a) mup2_volume_cont_pane_ParamLimits

0x8de0,	// (0x0008963a) mup2_volume_cont_pane

0x8efa,	// (0x00089754) mup2_volume_cont_pane_g1_ParamLimits

0x8efa,	// (0x00089754) mup2_volume_cont_pane_g1

0x560f,	// (0x00085e69) aid_size_cell_touch_ParamLimits

0x560f,	// (0x00085e69) aid_size_cell_touch

0x5867,	// (0x000860c1) touch_pane_ParamLimits

0x5867,	// (0x000860c1) touch_pane

0x0164,	// (0x000809be) main_rss2_pane

0x0ef3,	// (0x0008174d) listscroll_rss2_pane

0x0efc,	// (0x00081756) rss2_navigation_pane

0x0f04,	// (0x0008175e) list_rss2_pane

0xe079,	// (0x0008e8d3) scroll_pane_cp22

0x0f0c,	// (0x00081766) rss2_navigation_pane_g1

0x0f15,	// (0x0008176f) rss2_navigation_pane_g2

0x0f1d,	// (0x00081777) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x0008ff05) rss2_navigation_pane_g

0x0f25,	// (0x0008177f) rss2_navigation_pane_t1

0x8f33,	// (0x0008978d) rss2_list_single_pane_ParamLimits

0x8f33,	// (0x0008978d) rss2_list_single_pane

0x0f33,	// (0x0008178d) rss2_list_single_pane_t2

0x0f41,	// (0x0008179b) rss2_list_single_pane_t3_ParamLimits

0x0f41,	// (0x0008179b) rss2_list_single_pane_t3

0x0f5e,	// (0x000817b8) rss2_list_single_pane_t4

0x7377,	// (0x00087bd1) smil_status_pane_g1

0x01dd,	// (0x00080a37) main_image2_pane_ParamLimits

0x01dd,	// (0x00080a37) main_image2_pane

0x8b02,	// (0x0008935c) main_camera2_pane_g9_ParamLimits

0x8b02,	// (0x0008935c) main_camera2_pane_g9

0x8b56,	// (0x000893b0) main_camera2_pane_t5_ParamLimits

0x8b56,	// (0x000893b0) main_camera2_pane_t5

0x8b68,	// (0x000893c2) main_camera2_pane_t6_ParamLimits

0x8b68,	// (0x000893c2) main_camera2_pane_t6

0x8f56,	// (0x000897b0) main_image2_pane_g1_ParamLimits

0x8f56,	// (0x000897b0) main_image2_pane_g1

0x8219,	// (0x00088a73) smil2_video_pane_ParamLimits

0x8219,	// (0x00088a73) smil2_video_pane

0x0192,	// (0x000809ec) aid_zoom_text_primary_cp

0x01d3,	// (0x00080a2d) popup_preview_fixed_window

0xda09,	// (0x0008e263) im_reading_pane_g1

0x8a4c,	// (0x000892a6) cams2_bc_adjust_pane_cp_ParamLimits

0x8a4c,	// (0x000892a6) cams2_bc_adjust_pane_cp

0x8b93,	// (0x000893ed) cams2_bc_adjust_pane_ParamLimits

0x8b93,	// (0x000893ed) cams2_bc_adjust_pane

0x2294,	// (0x00082aee) cams2_bc_adjust_pane_g1

0x8f62,	// (0x000897bc) cams2_slider_pane

0x8f6b,	// (0x000897c5) cams2_slider_pane_g1

0x8f74,	// (0x000897ce) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x0008ff0c) cams2_slider_pane_g

0x5a43,	// (0x0008629d) calc_display_pane_ParamLimits

0x5a61,	// (0x000862bb) calc_paper_pane_ParamLimits

0x5a7d,	// (0x000862d7) grid_calc_pane_ParamLimits

0x7619,	// (0x00087e73) popup_clock_digital_window_t1_ParamLimits

0xe438,	// (0x0008ec92) main_image_pane_t1

0x5a29,	// (0x00086283) aid_size_cell_calc_ParamLimits

0x5a29,	// (0x00086283) aid_size_cell_calc

0x86e9,	// (0x00088f43) popup_blid_sat_info2_window_ParamLimits

0x86e9,	// (0x00088f43) popup_blid_sat_info2_window

0x0fa8,	// (0x00081802) aid_size_cell_blid

0x0fb0,	// (0x0008180a) bg_popup_window_pane_cp07

0x0fd3,	// (0x0008182d) grid_popup_blid_pane

0x0fdd,	// (0x00081837) heading_pane_cp05_ParamLimits

0x0fdd,	// (0x00081837) heading_pane_cp05

0x10a7,	// (0x00081901) cell_popup_blid_pane_ParamLimits

0x10a7,	// (0x00081901) cell_popup_blid_pane

0x10d1,	// (0x0008192b) cell_popup_blid_pane_g1

0x10d9,	// (0x00081933) cell_popup_blid_pane_t1

0x8da6,	// (0x00089600) mup2_indicator_pane_ParamLimits

0x8da6,	// (0x00089600) mup2_indicator_pane

0xe1b3,	// (0x0008ea0d) mup2_visualizer_osc_pane

0x0e10,	// (0x0008166a) mup2_visualizer_spec_pane_ParamLimits

0x0e10,	// (0x0008166a) mup2_visualizer_spec_pane

0x8f8e,	// (0x000897e8) mup2_spec_half_pane

0x8f97,	// (0x000897f1) mup2_spec_half_pane_cp

0x8f9f,	// (0x000897f9) mup2_spec_bar_pane_ParamLimits

0x8f9f,	// (0x000897f9) mup2_spec_bar_pane

0x0d4d,	// (0x000815a7) mup2_spec_bar_pane_g1

0x0d57,	// (0x000815b1) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0008fe7f) mup2_spec_bar_pane_g

0x8fbe,	// (0x00089818) mup2_osc_middle_pane

0x0d69,	// (0x000815c3) mup2_visualizer_osc_pane_g1

0x020b,	// (0x00080a65) popup_number_entry_window_t1_ParamLimits

0x021e,	// (0x00080a78) popup_number_entry_window_t2_ParamLimits

0x0230,	// (0x00080a8a) popup_number_entry_window_t3_ParamLimits

0x0242,	// (0x00080a9c) popup_number_entry_window_t5_ParamLimits

0x0242,	// (0x00080a9c) popup_number_entry_window_t5

0xf0e7,	// (0x0008f941) popup_number_entry_window_t_ParamLimits

0x0277,	// (0x00080ad1) text_title_cp2_ParamLimits

0x7f06,	// (0x00088760) aid_hotspot_pointer_text2_pane

0x7fa0,	// (0x000887fa) main_viewer_pane_g9_ParamLimits

0x7fa0,	// (0x000887fa) main_viewer_pane_g9

0xdc38,	// (0x0008e492) cale_month_pane_t1_ParamLimits

0xdc75,	// (0x0008e4cf) bg_cale_pane_ParamLimits

0xdc8d,	// (0x0008e4e7) list_cale_pane_ParamLimits

0x4654,	// (0x00084eae) listscroll_cale_day_pane_t1

0xdc9e,	// (0x0008e4f8) scroll_pane_cp09_ParamLimits

0x7c41,	// (0x0008849b) main_mup_eq_pane_t1_ParamLimits

0x7c41,	// (0x0008849b) main_mup_eq_pane_t1

0x7c5d,	// (0x000884b7) main_mup_eq_pane_t2_ParamLimits

0x7c5d,	// (0x000884b7) main_mup_eq_pane_t2

0x7c79,	// (0x000884d3) main_mup_eq_pane_t3_ParamLimits

0x7c79,	// (0x000884d3) main_mup_eq_pane_t3

0x7c93,	// (0x000884ed) main_mup_eq_pane_t4_ParamLimits

0x7c93,	// (0x000884ed) main_mup_eq_pane_t4

0x7cad,	// (0x00088507) main_mup_eq_pane_t5_ParamLimits

0x7cad,	// (0x00088507) main_mup_eq_pane_t5

0x7cc7,	// (0x00088521) main_mup_eq_pane_t6_ParamLimits

0x7cc7,	// (0x00088521) main_mup_eq_pane_t6

0x7cdd,	// (0x00088537) main_mup_eq_pane_t7_ParamLimits

0x7cdd,	// (0x00088537) main_mup_eq_pane_t7

0x7cf3,	// (0x0008854d) main_mup_eq_pane_t8_ParamLimits

0x7cf3,	// (0x0008854d) main_mup_eq_pane_t8

0x7d09,	// (0x00088563) main_mup_eq_pane_t9_ParamLimits

0x7d09,	// (0x00088563) main_mup_eq_pane_t9

0x7d25,	// (0x0008857f) main_mup_eq_pane_t10_ParamLimits

0x7d25,	// (0x0008857f) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x0008fcce) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x0008fcce) main_mup_eq_pane_t

0x7dea,	// (0x00088644) mup_equalizer_pane_cp5_ParamLimits

0x7e02,	// (0x0008865c) mup_equalizer_pane_cp6_ParamLimits

0x7e1a,	// (0x00088674) mup_equalizer_pane_cp7_ParamLimits

0x0164,	// (0x000809be) main_gallery_pane

0x0d72,	// (0x000815cc) smil2_volume_pane

0x0d8d,	// (0x000815e7) smil_status_volume_pane_g1_ParamLimits

0x0d7a,	// (0x000815d4) smil_status_volume_pane_g2_ParamLimits

0x88d0,	// (0x0008912a) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x0008fe84) smil_status_volume_pane_g_ParamLimits

0x0fb0,	// (0x0008180a) bg_popup_window_pane_cp07_ParamLimits

0x0fbe,	// (0x00081818) blid_firmament_pane

0x8fc7,	// (0x00089821) aid_size_cell_gallery_ParamLimits

0x8fc7,	// (0x00089821) aid_size_cell_gallery

0x8fd5,	// (0x0008982f) grid_gallery_pane_ParamLimits

0x8fd5,	// (0x0008982f) grid_gallery_pane

0x8fe5,	// (0x0008983f) cell_gallery_pane_ParamLimits

0x8fe5,	// (0x0008983f) cell_gallery_pane

0x10e7,	// (0x00081941) bg_cell_gallery_focus_pane_ParamLimits

0x10e7,	// (0x00081941) bg_cell_gallery_focus_pane

0x10f9,	// (0x00081953) cell_gallery_pane_g1_ParamLimits

0x10f9,	// (0x00081953) cell_gallery_pane_g1

0x9030,	// (0x0008988a) cell_gallery_pane_g2_ParamLimits

0x9030,	// (0x0008988a) cell_gallery_pane_g2

0x903d,	// (0x00089897) cell_gallery_pane_g3_ParamLimits

0x903d,	// (0x00089897) cell_gallery_pane_g3

0x1105,	// (0x0008195f) cell_gallery_pane_g4_ParamLimits

0x1105,	// (0x0008195f) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x0008ff32) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x0008ff32) cell_gallery_pane_g

0x1111,	// (0x0008196b) bg_cell_gallery_focus_pane_g1

0x1119,	// (0x00081973) bg_cell_gallery_focus_pane_g2

0x1121,	// (0x0008197b) bg_cell_gallery_focus_pane_g3

0x1129,	// (0x00081983) bg_cell_gallery_focus_pane_g4

0x1131,	// (0x0008198b) bg_cell_gallery_focus_pane_g5

0x1139,	// (0x00081993) bg_cell_gallery_focus_pane_g6

0x1141,	// (0x0008199b) bg_cell_gallery_focus_pane_g7

0x1149,	// (0x000819a3) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x0008ff3b) bg_cell_gallery_focus_pane_g

0x1151,	// (0x000819ab) aid_firma_cardinal

0x1165,	// (0x000819bf) blid_firmament_pane_t1

0x117c,	// (0x000819d6) blid_firmament_pane_t2

0x1193,	// (0x000819ed) blid_firmament_pane_t3

0x11aa,	// (0x00081a04) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x0008ff4c) blid_firmament_pane_t

0x11c1,	// (0x00081a1b) blid_sat_info_pane

0x11d1,	// (0x00081a2b) blid_sat_info_pane_g1

0x11d1,	// (0x00081a2b) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x0008ff55) blid_sat_info_pane_g

0x11db,	// (0x00081a35) blid_sat_info_pane_t1

0x11e9,	// (0x00081a43) smil2_volume_content_pane

0x11f2,	// (0x00081a4c) smil2_volume_pane_g1

0x11fa,	// (0x00081a54) smil2_volume_content_pane_g1

0x1203,	// (0x00081a5d) smil2_volume_content_pane_g2

0x120c,	// (0x00081a66) smil2_volume_content_pane_g3

0x1215,	// (0x00081a6f) smil2_volume_content_pane_g4

0x121e,	// (0x00081a78) smil2_volume_content_pane_g5

0x1227,	// (0x00081a81) smil2_volume_content_pane_g6

0x1230,	// (0x00081a8a) smil2_volume_content_pane_g7

0x1239,	// (0x00081a93) smil2_volume_content_pane_g8

0x1242,	// (0x00081a9c) smil2_volume_content_pane_g9

0x124b,	// (0x00081aa5) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x0008ff5a) smil2_volume_content_pane_g

0x5ff0,	// (0x0008684a) cale_week_day_heading_pane_t1_ParamLimits

0x601d,	// (0x00086877) cale_week_day_heading_pane_t2_ParamLimits

0x604a,	// (0x000868a4) cale_week_day_heading_pane_t3_ParamLimits

0x6077,	// (0x000868d1) cale_week_day_heading_pane_t4_ParamLimits

0x60a4,	// (0x000868fe) cale_week_day_heading_pane_t5_ParamLimits

0x60d1,	// (0x0008692b) cale_week_day_heading_pane_t6_ParamLimits

0x60fe,	// (0x00086958) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x0008fa46) cale_week_day_heading_pane_t_ParamLimits

0x4666,	// (0x00084ec0) bg_cale_side_pane_ParamLimits

0x612b,	// (0x00086985) cale_week_time_pane_t1_ParamLimits

0x6143,	// (0x0008699d) cale_week_time_pane_t2_ParamLimits

0x615b,	// (0x000869b5) cale_week_time_pane_t3_ParamLimits

0x6173,	// (0x000869cd) cale_week_time_pane_t4_ParamLimits

0x618b,	// (0x000869e5) cale_week_time_pane_t5_ParamLimits

0x61a3,	// (0x000869fd) cale_week_time_pane_t6_ParamLimits

0x61bb,	// (0x00086a15) cale_week_time_pane_t7_ParamLimits

0x61d3,	// (0x00086a2d) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x0008fa55) cale_week_time_pane_t_ParamLimits

0x61ef,	// (0x00086a49) cell_cale_week_pane_g2_ParamLimits

0x4666,	// (0x00084ec0) bg_cale_side_pane_cp01_ParamLimits

0x71ec,	// (0x00087a46) cale_month_week_pane_t1_ParamLimits

0x7203,	// (0x00087a5d) cale_month_week_pane_t2_ParamLimits

0x721a,	// (0x00087a74) cale_month_week_pane_t3_ParamLimits

0x7231,	// (0x00087a8b) cale_month_week_pane_t4_ParamLimits

0x7248,	// (0x00087aa2) cale_month_week_pane_t5_ParamLimits

0x725f,	// (0x00087ab9) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x0008fb2e) cale_month_week_pane_t_ParamLimits

0x7344,	// (0x00087b9e) cell_cale_month_pane_g1_ParamLimits

0x0164,	// (0x000809be) main_cale_event_viewer_pane

0x0164,	// (0x000809be) listscroll_cale_event_viewer_pane

0x1254,	// (0x00081aae) list_cale_ev_pane

0x125c,	// (0x00081ab6) scroll_pane_cp023

0x904a,	// (0x000898a4) field_cale_ev_pane_ParamLimits

0x904a,	// (0x000898a4) field_cale_ev_pane

0x1268,	// (0x00081ac2) field_cale_ev_content_pane_ParamLimits

0x1268,	// (0x00081ac2) field_cale_ev_content_pane

0x1274,	// (0x00081ace) field_cale_ev_pane_g1_ParamLimits

0x1274,	// (0x00081ace) field_cale_ev_pane_g1

0x1280,	// (0x00081ada) field_cale_ev_pane_g2_ParamLimits

0x1280,	// (0x00081ada) field_cale_ev_pane_g2

0x1298,	// (0x00081af2) field_cale_ev_pane_g3_ParamLimits

0x1298,	// (0x00081af2) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x0008ff6f) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x0008ff6f) field_cale_ev_pane_g

0x12b0,	// (0x00081b0a) field_cale_ev_pane_t1_ParamLimits

0x12b0,	// (0x00081b0a) field_cale_ev_pane_t1

0x906e,	// (0x000898c8) field_cale_ev_content_pane_t1_ParamLimits

0x906e,	// (0x000898c8) field_cale_ev_content_pane_t1

0xe31e,	// (0x0008eb78) bg_button_pane_cp01

0x4514,	// (0x00084d6e) listscroll_cale_week_pane_ParamLimits

0x5ddc,	// (0x00086636) popup_toolbar_window_cp01

0x4654,	// (0x00084eae) listscroll_cale_week_pane_t1_ParamLimits

0x4514,	// (0x00084d6e) listscroll_cale_day_pane_ParamLimits

0x5ddc,	// (0x00086636) popup_toolbar_window_cp02

0x4654,	// (0x00084eae) listscroll_cale_day_pane_t1_ParamLimits

0x4514,	// (0x00084d6e) main_cale_month_pane_ParamLimits

0x87cd,	// (0x00089027) popup_toolbar_window_cp03_ParamLimits

0x87cd,	// (0x00089027) popup_toolbar_window_cp03

0x8129,	// (0x00088983) main_image_pane_g2_ParamLimits

0x8129,	// (0x00088983) main_image_pane_g2

0x8135,	// (0x0008898f) main_image_pane_g3_ParamLimits

0x8135,	// (0x0008898f) main_image_pane_g3

0x0002,

0xf506,	// (0x0008fd60) main_image_pane_g_ParamLimits

0xf506,	// (0x0008fd60) main_image_pane_g

0xe438,	// (0x0008ec92) main_image_pane_t1_ParamLimits

0x8141,	// (0x0008899b) main_image_pane_t2_ParamLimits

0x8141,	// (0x0008899b) main_image_pane_t2

0x8153,	// (0x000889ad) main_image_pane_t3_ParamLimits

0x8153,	// (0x000889ad) main_image_pane_t3

0x8165,	// (0x000889bf) main_image_pane_t4_ParamLimits

0x8165,	// (0x000889bf) main_image_pane_t4

0x0003,

0xf50d,	// (0x0008fd67) main_image_pane_t_ParamLimits

0xf50d,	// (0x0008fd67) main_image_pane_t

0x8177,	// (0x000889d1) popup_image_details_window_cp01

0x8181,	// (0x000889db) popup_toobar_trans_pane_cp01_ParamLimits

0x8181,	// (0x000889db) popup_toobar_trans_pane_cp01

0x873e,	// (0x00088f98) popup_image_details_window_ParamLimits

0x873e,	// (0x00088f98) popup_image_details_window

0x0cbe,	// (0x00081518) popup_image_focus_window

0x8a3e,	// (0x00089298) camera2_autofocus_pane_ParamLimits

0x8a3e,	// (0x00089298) camera2_autofocus_pane

0x0164,	// (0x000809be) bg_popup_sub_pane_cp06

0x12c7,	// (0x00081b21) popup_image_focus_window_g1

0x12cf,	// (0x00081b29) popup_image_focus_window_g2

0x12d7,	// (0x00081b31) popup_image_focus_window_g3

0x12df,	// (0x00081b39) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x0008ff76) popup_image_focus_window_g

0x12e7,	// (0x00081b41) popup_image_focus_window_t1

0x12f5,	// (0x00081b4f) popup_image_focus_window_t2

0x1305,	// (0x00081b5f) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x0008ff7f) popup_image_focus_window_t

0x1313,	// (0x00081b6d) camera2_autofocus_pane_g1

0x01dd,	// (0x00080a37) bg_tb_trans_pane_cp01

0x1321,	// (0x00081b7b) popup_image_details_window_g1

0x1334,	// (0x00081b8e) popup_image_details_window_g2

0x0002,

0xf737,	// (0x0008ff91) popup_image_details_window_g

0x135d,	// (0x00081bb7) popup_image_details_window_t1

0x136f,	// (0x00081bc9) popup_image_details_window_t2

0x1388,	// (0x00081be2) popup_image_details_window_t3

0x139c,	// (0x00081bf6) popup_image_details_window_t4

0x13b7,	// (0x00081c11) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x0008ff98) popup_image_details_window_t

0x4500,	// (0x00084d5a) bg_calc_paper_pane_ParamLimits

0x5b7a,	// (0x000863d4) grid_highlight_pane_cp013

0x5b84,	// (0x000863de) list_calc_pane_ParamLimits

0x5b96,	// (0x000863f0) scroll_pane_cp024

0x4514,	// (0x00084d6e) bg_calc_display_pane_ParamLimits

0x5b9e,	// (0x000863f8) calc_display_pane_t1_ParamLimits

0x5bb3,	// (0x0008640d) calc_display_pane_t2_ParamLimits

0x5bc8,	// (0x00086422) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x0008f9c8) calc_display_pane_t_ParamLimits

0x5c9c,	// (0x000864f6) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x0008f9e5) cell_calc_pane_g

0x5ca5,	// (0x000864ff) cell_calc_pane_t1

0x4573,	// (0x00084dcd) grid_highlight_pane_cp02_ParamLimits

0x4589,	// (0x00084de3) toolbar_button_pane_cp01_ParamLimits

0x4589,	// (0x00084de3) toolbar_button_pane_cp01

0xe47d,	// (0x0008ecd7) temp_image_control_pane_ParamLimits

0xe47d,	// (0x0008ecd7) temp_image_control_pane

0x01dd,	// (0x00080a37) main_mp3_pane

0x13d1,	// (0x00081c2b) temp_image_control_pane_g1_ParamLimits

0x13d1,	// (0x00081c2b) temp_image_control_pane_g1

0x13df,	// (0x00081c39) temp_image_control_pane_g2_ParamLimits

0x13df,	// (0x00081c39) temp_image_control_pane_g2

0x13f1,	// (0x00081c4b) temp_image_control_pane_g3_ParamLimits

0x13f1,	// (0x00081c4b) temp_image_control_pane_g3

0x90b9,	// (0x00089913) temp_image_control_pane_g4_ParamLimits

0x90b9,	// (0x00089913) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x0008ffa3) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x0008ffa3) temp_image_control_pane_g

0x13d1,	// (0x00081c2b) main_mp3_pane_g1

0x90ca,	// (0x00089924) main_mp3_pane_g2

0x0007,

0xf752,	// (0x0008ffac) main_mp3_pane_g

0x1434,	// (0x00081c8e) main_mp3_pane_t1

0xd914,	// (0x0008e16e) main_camera_pane_g8_ParamLimits

0xd914,	// (0x0008e16e) main_camera_pane_g8

0x6499,	// (0x00086cf3) main_video_pane_g7_ParamLimits

0x6499,	// (0x00086cf3) main_video_pane_g7

0x8b81,	// (0x000893db) main_camera2_pane_t7_ParamLimits

0x8b81,	// (0x000893db) main_camera2_pane_t7

0xda60,	// (0x0008e2ba) scroll_pane_cp025_ParamLimits

0xda60,	// (0x0008e2ba) scroll_pane_cp025

0xda74,	// (0x0008e2ce) scroll_pane_cp026_ParamLimits

0xda74,	// (0x0008e2ce) scroll_pane_cp026

0xda83,	// (0x0008e2dd) wml_content_pane_ParamLimits

0x0164,	// (0x000809be) main_touch_calib_pane

0x916e,	// (0x000899c8) main_touch_calib_pane_g1

0x917a,	// (0x000899d4) main_touch_calib_pane_g2

0x9186,	// (0x000899e0) main_touch_calib_pane_g3

0x9192,	// (0x000899ec) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x0008ffca) main_touch_calib_pane_g

0x919e,	// (0x000899f8) main_touch_calib_pane_t1

0x91b5,	// (0x00089a0f) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x0008ffd3) main_touch_calib_pane_t

0xe0f4,	// (0x0008e94e) mup_progress_pane_cp02

0xe113,	// (0x0008e96d) navi_pane_g1

0xe175,	// (0x0008e9cf) navi_pane_mp_t3

0x01dd,	// (0x00080a37) main_mp3_pane_ParamLimits

0x880f,	// (0x00089069) navi_pane_ParamLimits

0x13d1,	// (0x00081c2b) main_mp3_pane_g1_ParamLimits

0x90ca,	// (0x00089924) main_mp3_pane_g2_ParamLimits

0x90d6,	// (0x00089930) main_mp3_pane_g3_ParamLimits

0x90d6,	// (0x00089930) main_mp3_pane_g3

0x90e2,	// (0x0008993c) main_mp3_pane_g4_ParamLimits

0x90e2,	// (0x0008993c) main_mp3_pane_g4

0x1401,	// (0x00081c5b) main_mp3_pane_g5_ParamLimits

0x1401,	// (0x00081c5b) main_mp3_pane_g5

0x140f,	// (0x00081c69) main_mp3_pane_g6_ParamLimits

0x140f,	// (0x00081c69) main_mp3_pane_g6

0x141c,	// (0x00081c76) main_mp3_pane_g7_ParamLimits

0x141c,	// (0x00081c76) main_mp3_pane_g7

0x1428,	// (0x00081c82) main_mp3_pane_g8_ParamLimits

0x1428,	// (0x00081c82) main_mp3_pane_g8

0xf752,	// (0x0008ffac) main_mp3_pane_g_ParamLimits

0x90ee,	// (0x00089948) main_mp3_pane_t2

0x90fe,	// (0x00089958) main_mp3_pane_t3

0x1442,	// (0x00081c9c) main_mp3_pane_t4

0x1450,	// (0x00081caa) main_mp3_pane_t5

0x0005,

0xf763,	// (0x0008ffbd) main_mp3_pane_t

0x145e,	// (0x00081cb8) mup_progress_pane_cp01

0x0192,	// (0x000809ec) aid_zoom_text_secondary2

0x1254,	// (0x00081aae) list_cale_ev2_pane

0x125c,	// (0x00081ab6) scroll_pane_cp023_ParamLimits

0x920c,	// (0x00089a66) field_cale_ev2_pane_ParamLimits

0x920c,	// (0x00089a66) field_cale_ev2_pane

0x9227,	// (0x00089a81) field_cale_ev2_pane_g1_ParamLimits

0x9227,	// (0x00089a81) field_cale_ev2_pane_g1

0x9233,	// (0x00089a8d) field_cale_ev2_pane_g2_ParamLimits

0x9233,	// (0x00089a8d) field_cale_ev2_pane_g2

0x924b,	// (0x00089aa5) field_cale_ev2_pane_g3_ParamLimits

0x924b,	// (0x00089aa5) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x0008ffde) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x0008ffde) field_cale_ev2_pane_g

0x9263,	// (0x00089abd) field_cale_ev2_pane_t1_ParamLimits

0x9263,	// (0x00089abd) field_cale_ev2_pane_t1

0x927a,	// (0x00089ad4) field_cale_ev2_pane_t2_ParamLimits

0x927a,	// (0x00089ad4) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x0008ffe7) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x0008ffe7) field_cale_ev2_pane_t

0x8008,	// (0x00088862) main_postcard_pane_g5_ParamLimits

0x8008,	// (0x00088862) main_postcard_pane_g5

0x8016,	// (0x00088870) main_postcard_pane_g6_ParamLimits

0x8016,	// (0x00088870) main_postcard_pane_g6

0x62d7,	// (0x00086b31) camera2_autofocus_pane_cp_ParamLimits

0x62d7,	// (0x00086b31) camera2_autofocus_pane_cp

0x01dd,	// (0x00080a37) main_mup3_pane

0x92af,	// (0x00089b09) main_mup3_pane_g1_ParamLimits

0x92af,	// (0x00089b09) main_mup3_pane_g1

0x92d0,	// (0x00089b2a) main_mup3_pane_g2_ParamLimits

0x92d0,	// (0x00089b2a) main_mup3_pane_g2

0x934c,	// (0x00089ba6) main_mup3_pane_g3_ParamLimits

0x934c,	// (0x00089ba6) main_mup3_pane_g3

0x9391,	// (0x00089beb) main_mup3_pane_g4_ParamLimits

0x9391,	// (0x00089beb) main_mup3_pane_g4

0x93d6,	// (0x00089c30) main_mup3_pane_g5_ParamLimits

0x93d6,	// (0x00089c30) main_mup3_pane_g5

0x941b,	// (0x00089c75) main_mup3_pane_g6_ParamLimits

0x941b,	// (0x00089c75) main_mup3_pane_g6

0x1472,	// (0x00081ccc) main_mup3_pane_g7_ParamLimits

0x1472,	// (0x00081ccc) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x0008fff7) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x0008fff7) main_mup3_pane_g

0x9491,	// (0x00089ceb) main_mup3_pane_t1_ParamLimits

0x9491,	// (0x00089ceb) main_mup3_pane_t1

0x94fc,	// (0x00089d56) main_mup3_pane_t2_ParamLimits

0x94fc,	// (0x00089d56) main_mup3_pane_t2

0x95c5,	// (0x00089e1f) main_mup3_pane_t4_ParamLimits

0x95c5,	// (0x00089e1f) main_mup3_pane_t4

0x9619,	// (0x00089e73) main_mup3_pane_t5_ParamLimits

0x9619,	// (0x00089e73) main_mup3_pane_t5

0x96c9,	// (0x00089f23) main_mup3_pane_t6_ParamLimits

0x96c9,	// (0x00089f23) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x00090008) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x00090008) main_mup3_pane_t

0x9771,	// (0x00089fcb) mup3_progress_pane_ParamLimits

0x9771,	// (0x00089fcb) mup3_progress_pane

0x97eb,	// (0x0008a045) popup_mup3_control_window_ParamLimits

0x97eb,	// (0x0008a045) popup_mup3_control_window

0x1480,	// (0x00081cda) popup_mup3_text_window

0x9808,	// (0x0008a062) mup3_progress_pane_t1

0x981f,	// (0x0008a079) mup3_progress_pane_t2

0x1488,	// (0x00081ce2) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x00090015) mup3_progress_pane_t

0x149f,	// (0x00081cf9) mup_progress_pane_cp03

0x0164,	// (0x000809be) bg_tb_trans_pane_cp04

0x9836,	// (0x0008a090) mup3_volume_pane

0x983e,	// (0x0008a098) popup_mup3_control_window_g1

0x22be,	// (0x00082b18) mup3_volume_pane_g1

0x22c7,	// (0x00082b21) mup3_volume_pane_g2

0x22d0,	// (0x00082b2a) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x0009001c) mup3_volume_pane_g

0x0164,	// (0x000809be) bg_tb_trans_pane_cp03

0x14af,	// (0x00081d09) popup_mup3_text_window_g1

0x14b7,	// (0x00081d11) popup_mup3_text_window_t1

0x455c,	// (0x00084db6) list_calc_item_pane_g1_ParamLimits

0x0eda,	// (0x00081734) mup_volume_pane_cp_g1

0x91cc,	// (0x00089a26) main_touch_calib_pane_t3

0x91e0,	// (0x00089a3a) main_touch_calib_pane_t4

0x91f6,	// (0x00089a50) main_touch_calib_pane_t5

0x016e,	// (0x000809c8) aid_cell_size_toolbar2

0x0176,	// (0x000809d0) aid_popup3_width_pane

0x0182,	// (0x000809dc) aid_zoom_text_msg_primary

0x62ac,	// (0x00086b06) vorec_t7

0x4520,	// (0x00084d7a) bg_calc_paper_pane_g1_ParamLimits

0x4538,	// (0x00084d92) bg_calc_paper_pane_g2_ParamLimits

0x452c,	// (0x00084d86) bg_calc_paper_pane_g3_ParamLimits

0x4550,	// (0x00084daa) bg_calc_paper_pane_g4_ParamLimits

0x4544,	// (0x00084d9e) bg_calc_paper_pane_g5_ParamLimits

0x5c09,	// (0x00086463) bg_calc_paper_pane_g6_ParamLimits

0x5c1a,	// (0x00086474) bg_calc_paper_pane_g7_ParamLimits

0x5c2b,	// (0x00086485) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x0008f9cf) bg_calc_paper_pane_g_ParamLimits

0x5c3e,	// (0x00086498) calc_bg_paper_pane_g9_ParamLimits

0x63c8,	// (0x00086c22) image_qvga_pane_ParamLimits

0x63c8,	// (0x00086c22) image_qvga_pane

0x4441,	// (0x00084c9b) bg_popup_sub_pane_cp04_ParamLimits

0xe3b4,	// (0x0008ec0e) popup_mup_playback_window_g1_ParamLimits

0xe3c0,	// (0x0008ec1a) popup_mup_playback_window_t1_ParamLimits

0xe3d5,	// (0x0008ec2f) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x0008fd5b) popup_mup_playback_window_t_ParamLimits

0x8cb0,	// (0x0008950a) main_mup2_pane_g3_ParamLimits

0x8cb0,	// (0x0008950a) main_mup2_pane_g3

0x66cb,	// (0x00086f25) popup_toolbar_window_cp04

0xe7d0,	// (0x0008f02a) popup_call2_audio_second_window_g3_ParamLimits

0xe7d0,	// (0x0008f02a) popup_call2_audio_second_window_g3

0xebda,	// (0x0008f434) popup_call2_audio_first_window_g4_ParamLimits

0xebda,	// (0x0008f434) popup_call2_audio_first_window_g4

0x0937,	// (0x00081191) popup_call2_audio_in_window_g4_ParamLimits

0x0937,	// (0x00081191) popup_call2_audio_in_window_g4

0x811c,	// (0x00088976) aid_area_sk_bg_cut_ParamLimits

0x811c,	// (0x00088976) aid_area_sk_bg_cut

0xe3ea,	// (0x0008ec44) aid_area_sk_bg_cut_2_ParamLimits

0xe3ea,	// (0x0008ec44) aid_area_sk_bg_cut_2

0x9020,	// (0x0008987a) aid_placing_details_win

0x9028,	// (0x00089882) aid_placing_details_win_2

0x1313,	// (0x00081b6d) camera2_autofocus_pane_g1_ParamLimits

0x5815,	// (0x0008606f) popup_fixed_preview_cale_window_ParamLimits

0x5815,	// (0x0008606f) popup_fixed_preview_cale_window

0xe1c4,	// (0x0008ea1e) navi_slider_pane_g3

0xe1cd,	// (0x0008ea27) navi_slider_pane_g4

0xe1d6,	// (0x0008ea30) navi_slider_pane_g5

0xe1c4,	// (0x0008ea1e) navi_slider_pane_g6

0x79bb,	// (0x00088215) navi_slider_pane_g7

0xe2eb,	// (0x0008eb45) mup_scale_pane_g3

0xe2f4,	// (0x0008eb4e) mup_scale_pane_g4

0xe2fd,	// (0x0008eb57) mup_scale_pane_g5

0x7e32,	// (0x0008868c) mup_scale_pane_g6

0x7e3b,	// (0x00088695) mup_scale_pane_g7

0xe1c4,	// (0x0008ea1e) cams2_slider_pane_g3

0x0f8f,	// (0x000817e9) cams2_slider_pane_g4

0x8f7d,	// (0x000897d7) cams2_slider_pane_g5

0xe1c4,	// (0x0008ea1e) cams2_slider_pane_g6

0x8f85,	// (0x000897df) cams2_slider_pane_g7

0x11d1,	// (0x00081a2b) camera2_autofocus_pane_cp_g1

0x14c5,	// (0x00081d1f) bg_popup_preview_window_pane_cp02_ParamLimits

0x14c5,	// (0x00081d1f) bg_popup_preview_window_pane_cp02

0x14d1,	// (0x00081d2b) list_fp_cale_pane_ParamLimits

0x14d1,	// (0x00081d2b) list_fp_cale_pane

0x14dd,	// (0x00081d37) popup_fixed_preview_cale_window_t1_ParamLimits

0x14dd,	// (0x00081d37) popup_fixed_preview_cale_window_t1

0x9847,	// (0x0008a0a1) popup_fixed_preview_cale_window_t2_ParamLimits

0x9847,	// (0x0008a0a1) popup_fixed_preview_cale_window_t2

0x985c,	// (0x0008a0b6) popup_fixed_preview_cale_window_t3_ParamLimits

0x985c,	// (0x0008a0b6) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x00090023) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x00090023) popup_fixed_preview_cale_window_t

0x9871,	// (0x0008a0cb) list_single_fp_cale_pane_ParamLimits

0x9871,	// (0x0008a0cb) list_single_fp_cale_pane

0x1513,	// (0x00081d6d) list_single_fp_cale_pane_g1_ParamLimits

0x1513,	// (0x00081d6d) list_single_fp_cale_pane_g1

0x151f,	// (0x00081d79) list_single_fp_cale_pane_g2_ParamLimits

0x151f,	// (0x00081d79) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x0009002a) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x0009002a) list_single_fp_cale_pane_g

0x1538,	// (0x00081d92) list_single_fp_cale_pane_t1_ParamLimits

0x1538,	// (0x00081d92) list_single_fp_cale_pane_t1

0x154a,	// (0x00081da4) list_single_fp_cale_pane_t2_ParamLimits

0x154a,	// (0x00081da4) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x00090031) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x00090031) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0164,	// (0x000809be) main_dialer_pane

0x987e,	// (0x0008a0d8) aid_cell_size_keypad

0x9888,	// (0x0008a0e2) dialer_ne_pane

0x9892,	// (0x0008a0ec) grid_dialer_command_1_pane

0x989a,	// (0x0008a0f4) grid_dialer_command_2_pane

0x98a2,	// (0x0008a0fc) grid_dialer_keypad_pane

0x98b6,	// (0x0008a110) bg_popup_call_pane_cp06_ParamLimits

0x98b6,	// (0x0008a110) bg_popup_call_pane_cp06

0x98c2,	// (0x0008a11c) dialer_ne_clear_pane_ParamLimits

0x98c2,	// (0x0008a11c) dialer_ne_clear_pane

0x157d,	// (0x00081dd7) dialer_ne_pane_g1

0x1585,	// (0x00081ddf) dialer_ne_pane_t1_ParamLimits

0x1585,	// (0x00081ddf) dialer_ne_pane_t1

0x98ce,	// (0x0008a128) dialer_ne_pane_t2_ParamLimits

0x98ce,	// (0x0008a128) dialer_ne_pane_t2

0x98eb,	// (0x0008a145) dialer_ne_pane_t3_ParamLimits

0x98eb,	// (0x0008a145) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x00090036) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x00090036) dialer_ne_pane_t

0x990f,	// (0x0008a169) dialer_ne_pane_t3_copy1_ParamLimits

0x990f,	// (0x0008a169) dialer_ne_pane_t3_copy1

0x9933,	// (0x0008a18d) cell_dialer_keypad_pane_ParamLimits

0x9933,	// (0x0008a18d) cell_dialer_keypad_pane

0x9948,	// (0x0008a1a2) cell_dialer_command_1_pane_ParamLimits

0x9948,	// (0x0008a1a2) cell_dialer_command_1_pane

0x995e,	// (0x0008a1b8) cell_dialer_command_2_pane_ParamLimits

0x995e,	// (0x0008a1b8) cell_dialer_command_2_pane

0x1597,	// (0x00081df1) bg_button_pane_cp02_ParamLimits

0x1597,	// (0x00081df1) bg_button_pane_cp02

0x996d,	// (0x0008a1c7) cell_dialer_keypad_pane_g1_ParamLimits

0x996d,	// (0x0008a1c7) cell_dialer_keypad_pane_g1

0x1597,	// (0x00081df1) bg_button_pane_cp03_ParamLimits

0x1597,	// (0x00081df1) bg_button_pane_cp03

0x9982,	// (0x0008a1dc) cell_dialer_command_1_pane_g1_ParamLimits

0x9982,	// (0x0008a1dc) cell_dialer_command_1_pane_g1

0x15a3,	// (0x00081dfd) bg_button_pane_cp04

0x9996,	// (0x0008a1f0) cell_dialer_command_2_pane_g1

0xe1b3,	// (0x0008ea0d) bg_button_pane_cp06

0x15ab,	// (0x00081e05) dialer_ne_clear_pane_g1

0x78fe,	// (0x00088158) navi_pane_g2

0x792c,	// (0x00088186) navi_pane_g3

0x0002,

0xf404,	// (0x0008fc5e) navi_pane_g

0x7957,	// (0x000881b1) navi_pane_mv_g2

0x797e,	// (0x000881d8) navi_pane_mv_g5

0x7986,	// (0x000881e0) navi_pane_mv_t1

0x4514,	// (0x00084d6e) main_clock2_pane

0x99c8,	// (0x0008a222) main_clock2_list_pane_ParamLimits

0x99c8,	// (0x0008a222) main_clock2_list_pane

0x99f2,	// (0x0008a24c) main_clock2_pane_t1_ParamLimits

0x99f2,	// (0x0008a24c) main_clock2_pane_t1

0x9a20,	// (0x0008a27a) main_clock2_pane_t2_ParamLimits

0x9a20,	// (0x0008a27a) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x0009003d) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x0009003d) main_clock2_pane_t

0x9a89,	// (0x0008a2e3) popup_clock_analogue_window_cp03_ParamLimits

0x9a89,	// (0x0008a2e3) popup_clock_analogue_window_cp03

0x9aa9,	// (0x0008a303) popup_clock_digital_window_cp02_ParamLimits

0x9aa9,	// (0x0008a303) popup_clock_digital_window_cp02

0x9b1a,	// (0x0008a374) main_clock2_list_single_pane_ParamLimits

0x9b1a,	// (0x0008a374) main_clock2_list_single_pane

0xe1b3,	// (0x0008ea0d) list_highlight_pane_cp05

0x15b3,	// (0x00081e0d) main_clock2_list_single_pane_t1

0x66cb,	// (0x00086f25) popup_toolbar_window_cp04_ParamLimits

0x9089,	// (0x000898e3) camera2_autofocus_pane_g2_ParamLimits

0x9089,	// (0x000898e3) camera2_autofocus_pane_g2

0x9095,	// (0x000898ef) camera2_autofocus_pane_g3_ParamLimits

0x9095,	// (0x000898ef) camera2_autofocus_pane_g3

0x90a1,	// (0x000898fb) camera2_autofocus_pane_g4_ParamLimits

0x90a1,	// (0x000898fb) camera2_autofocus_pane_g4

0x90ad,	// (0x00089907) camera2_autofocus_pane_g5_ParamLimits

0x90ad,	// (0x00089907) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x0008ff86) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x0008ff86) camera2_autofocus_pane_g

0x928f,	// (0x00089ae9) camera2_autofocus_pane_cp_g2

0x9297,	// (0x00089af1) camera2_autofocus_pane_cp_g3

0x929f,	// (0x00089af9) camera2_autofocus_pane_cp_g4

0x92a7,	// (0x00089b01) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x0008ffec) camera2_autofocus_pane_cp_g

0x98ae,	// (0x0008a108) popup_dialer_spcha_window

0x0164,	// (0x000809be) bg_popup_sub_pane_cp07

0x15c1,	// (0x00081e1b) list_spcha_pane

0x15c9,	// (0x00081e23) list_single_spcha_pane_ParamLimits

0x15c9,	// (0x00081e23) list_single_spcha_pane

0x0164,	// (0x000809be) list_highlight_pane_cp06

0x15da,	// (0x00081e34) list_single_spcha_pane_t1

0xf003,	// (0x0008f85d) popup_call2_audio_out_window_g4_ParamLimits

0xf003,	// (0x0008f85d) popup_call2_audio_out_window_g4

0x0164,	// (0x000809be) main_imed2_pane

0x0cc8,	// (0x00081522) popup_imed_adjust2_window

0x874c,	// (0x00088fa6) popup_imed_trans_window_ParamLimits

0x874c,	// (0x00088fa6) popup_imed_trans_window

0x1009,	// (0x00081863) popup_blid_sat_info2_window_t1

0x1017,	// (0x00081871) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x0008ff1b) popup_blid_sat_info2_window_t

0x9bc4,	// (0x0008a41e) aid_size_cell_colour_35

0x9bde,	// (0x0008a438) aid_size_cell_colour_112

0x9bf5,	// (0x0008a44f) aid_size_cell_effect

0x01dd,	// (0x00080a37) bg_tb_trans_pane_cp02

0xf0db,	// (0x0008f935) heading_imed_pane

0x9c0f,	// (0x0008a469) listscroll_imed_pane

0x15e8,	// (0x00081e42) heading_imed_pane_g1

0x15f0,	// (0x00081e4a) heading_imed_pane_t1

0x15fe,	// (0x00081e58) grid_imed_colour_35_pane_ParamLimits

0x15fe,	// (0x00081e58) grid_imed_colour_35_pane

0x9c1b,	// (0x0008a475) grid_imed_effect_pane

0x161a,	// (0x00081e74) list_imed_aspect_pane

0x9c2b,	// (0x0008a485) scroll_pane_cp027_ParamLimits

0x9c2b,	// (0x0008a485) scroll_pane_cp027

0x9c37,	// (0x0008a491) cell_imed_effect_pane_ParamLimits

0x9c37,	// (0x0008a491) cell_imed_effect_pane

0x1622,	// (0x00081e7c) cell_imed_colour_pane_ParamLimits

0x1622,	// (0x00081e7c) cell_imed_colour_pane

0x166c,	// (0x00081ec6) cell_imed_colour_pane_g1_ParamLimits

0x166c,	// (0x00081ec6) cell_imed_colour_pane_g1

0x167d,	// (0x00081ed7) hgihlgiht_grid_pane_cp016_ParamLimits

0x167d,	// (0x00081ed7) hgihlgiht_grid_pane_cp016

0x9c53,	// (0x0008a4ad) cell_imed_effect_pane_g1

0x9c5b,	// (0x0008a4b5) grid_highlight_pane_cp017

0x168e,	// (0x00081ee8) list_imed_single_pane_ParamLimits

0x168e,	// (0x00081ee8) list_imed_single_pane

0x0164,	// (0x000809be) list_highlight_pane_cp07

0x16a2,	// (0x00081efc) list_imed_aspect_pane_comp1_t1

0x0c9c,	// (0x000814f6) bg_tb_trans_pane_cp05

0x16c4,	// (0x00081f1e) popup_imed_adjust2_window_g1

0x16eb,	// (0x00081f45) popup_imed_adjust2_window_t1

0x1703,	// (0x00081f5d) slider_imed_adjust_pane

0x1717,	// (0x00081f71) slider_imed_adjust_pane_g1

0x1727,	// (0x00081f81) slider_imed_adjust_pane_g2

0x1737,	// (0x00081f91) slider_imed_adjust_pane_g3

0x1748,	// (0x00081fa2) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x0009005a) slider_imed_adjust_pane_g

0x9c64,	// (0x0008a4be) aid_size_cell_clipart2

0x9c70,	// (0x0008a4ca) grid_imed_clipart_pane

0x1759,	// (0x00081fb3) scroll_pane_cp031

0x9c7a,	// (0x0008a4d4) cell_imed_clipart_pane_ParamLimits

0x9c7a,	// (0x0008a4d4) cell_imed_clipart_pane

0x9c98,	// (0x0008a4f2) cell_imed_clipart_pane_g1

0x0164,	// (0x000809be) grid_highlight_pane_cp014

0x99d4,	// (0x0008a22e) main_clock2_pane_g1_ParamLimits

0x99d4,	// (0x0008a22e) main_clock2_pane_g1

0x9ac5,	// (0x0008a31f) aid_call2_pane_cp10

0x9ad7,	// (0x0008a331) aid_call_pane_cp10

0xe0e8,	// (0x0008e942) popup_clock_analogue_window_cp10_g1

0xe0e8,	// (0x0008e942) popup_clock_analogue_window_cp10_g2

0x9ae9,	// (0x0008a343) popup_clock_analogue_window_cp10_g3

0x9ae9,	// (0x0008a343) popup_clock_analogue_window_cp10_g4

0xe0e8,	// (0x0008e942) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x00090048) popup_clock_analogue_window_cp10_g

0x9afb,	// (0x0008a355) popup_clock_analogue_window_cp10_t1

0x9b2c,	// (0x0008a386) clock_digital_number_pane_cp10_ParamLimits

0x9b2c,	// (0x0008a386) clock_digital_number_pane_cp10

0x9b44,	// (0x0008a39e) clock_digital_number_pane_cp11_ParamLimits

0x9b44,	// (0x0008a39e) clock_digital_number_pane_cp11

0x9b5c,	// (0x0008a3b6) clock_digital_number_pane_cp12_ParamLimits

0x9b5c,	// (0x0008a3b6) clock_digital_number_pane_cp12

0x9b74,	// (0x0008a3ce) clock_digital_number_pane_cp13_ParamLimits

0x9b74,	// (0x0008a3ce) clock_digital_number_pane_cp13

0x9b8c,	// (0x0008a3e6) clock_digital_separator_pane_cp10_ParamLimits

0x9b8c,	// (0x0008a3e6) clock_digital_separator_pane_cp10

0x9ba4,	// (0x0008a3fe) popup_clock_digital_window_cp02_t1_ParamLimits

0x9ba4,	// (0x0008a3fe) popup_clock_digital_window_cp02_t1

0x4439,	// (0x00084c93) clock_digital_number_pane_cp10_g1

0x4439,	// (0x00084c93) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x00090063) clock_digital_number_pane_cp10_g

0x4439,	// (0x00084c93) clock_digital_separator_pane_cp10_g1

0x4439,	// (0x00084c93) clock_digital_separator_pane_g2_cp10

0xe183,	// (0x0008e9dd) navi_pane_vded_g4

0xe18c,	// (0x0008e9e6) navi_pane_vded_g5

0xe195,	// (0x0008e9ef) navi_pane_vded_t1

0x0164,	// (0x000809be) main_vded_pane

0x9ca1,	// (0x0008a4fb) main_vded_pane_g1

0x9cad,	// (0x0008a507) main_vded_pane_g2

0x9cb7,	// (0x0008a511) main_vded_pane_g3

0x0002,

0xf80e,	// (0x00090068) main_vded_pane_g

0x9cc1,	// (0x0008a51b) main_vded_pane_t1

0x9ccf,	// (0x0008a529) main_vded_pane_t2

0x0001,

0xf815,	// (0x0009006f) main_vded_pane_t

0x9cdd,	// (0x0008a537) vded_slider_pane

0x9ce7,	// (0x0008a541) vded_video_pane

0x1761,	// (0x00081fbb) vded_video_pane_g1

0x9cf3,	// (0x0008a54d) vded_video_pane_g2

0x11d1,	// (0x00081a2b) vded_video_pane_g3

0x0002,

0xf81a,	// (0x00090074) vded_video_pane_g

0x176b,	// (0x00081fc5) vded_slider_pane_g1

0x0eda,	// (0x00081734) vded_slider_pane_g2

0x1774,	// (0x00081fce) vded_slider_pane_g3

0x177d,	// (0x00081fd7) vded_slider_pane_g4

0x1786,	// (0x00081fe0) vded_slider_pane_g5

0x0004,

0xf821,	// (0x0009007b) vded_slider_pane_g

0x97df,	// (0x0008a039) mup3_rocker_pane_ParamLimits

0x97df,	// (0x0008a039) mup3_rocker_pane

0x9cfc,	// (0x0008a556) mup3_control_keys_pane_g1

0x9d04,	// (0x0008a55e) mup3_control_keys_pane_g2

0x9d0c,	// (0x0008a566) mup3_control_keys_pane_g3

0x9d14,	// (0x0008a56e) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x00090086) mup3_control_keys_pane_g

0x5833,	// (0x0008608d) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5833,	// (0x0008608d) popup_toolbar2_fixed_window_cp01

0x97fb,	// (0x0008a055) popup_toolbar2_fixed_window_cp02_ParamLimits

0x97fb,	// (0x0008a055) popup_toolbar2_fixed_window_cp02

0xe942,	// (0x0008f19c) popup_call2_audio_second_window_t4_ParamLimits

0xe942,	// (0x0008f19c) popup_call2_audio_second_window_t4

0xee70,	// (0x0008f6ca) popup_call2_audio_first_window_t6_ParamLimits

0xee70,	// (0x0008f6ca) popup_call2_audio_first_window_t6

0x07e4,	// (0x0008103e) popup_call2_audio_out_window_t6_ParamLimits

0x07e4,	// (0x0008103e) popup_call2_audio_out_window_t6

0x0164,	// (0x000809be) main_vitu_pane

0x9d24,	// (0x0008a57e) aid_size_cell_itu_ParamLimits

0x9d24,	// (0x0008a57e) aid_size_cell_itu

0x1b92,	// (0x000823ec) bg_popup_window_pane_cp08_ParamLimits

0x1b92,	// (0x000823ec) bg_popup_window_pane_cp08

0x9d32,	// (0x0008a58c) field_vitu_entry_pane_ParamLimits

0x9d32,	// (0x0008a58c) field_vitu_entry_pane

0x9d41,	// (0x0008a59b) grid_vitu_function_pane_ParamLimits

0x9d41,	// (0x0008a59b) grid_vitu_function_pane

0x9d51,	// (0x0008a5ab) grid_vitu_itu_pane_ParamLimits

0x9d51,	// (0x0008a5ab) grid_vitu_itu_pane

0x9d5f,	// (0x0008a5b9) cell_vitu_itu_pane_ParamLimits

0x9d5f,	// (0x0008a5b9) cell_vitu_itu_pane

0x9d76,	// (0x0008a5d0) cell_vitu_function_pane_ParamLimits

0x9d76,	// (0x0008a5d0) cell_vitu_function_pane

0x01dd,	// (0x00080a37) bg_popup_sub_pane_cp08_ParamLimits

0x01dd,	// (0x00080a37) bg_popup_sub_pane_cp08

0x9d8a,	// (0x0008a5e4) field_vitu_entry_pane_t1_ParamLimits

0x9d8a,	// (0x0008a5e4) field_vitu_entry_pane_t1

0x17a7,	// (0x00082001) field_vitu_entry_pane_t2_ParamLimits

0x17a7,	// (0x00082001) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x00090094) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x00090094) field_vitu_entry_pane_t

0x17c4,	// (0x0008201e) bg_button_pane_cp05_ParamLimits

0x17c4,	// (0x0008201e) bg_button_pane_cp05

0x9da3,	// (0x0008a5fd) cell_vitu_itu_pane_g1

0x9dbb,	// (0x0008a615) cell_vitu_itu_pane_t1_ParamLimits

0x9dbb,	// (0x0008a615) cell_vitu_itu_pane_t1

0x9dcd,	// (0x0008a627) cell_vitu_itu_pane_t2_ParamLimits

0x9dcd,	// (0x0008a627) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x00090099) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x00090099) cell_vitu_itu_pane_t

0x17d2,	// (0x0008202c) bg_button_pane_cp07

0x9e10,	// (0x0008a66a) cell_vitu_function_pane_g1

0x5aa1,	// (0x000862fb) main_calc_pane_g1

0x5637,	// (0x00085e91) aid_visual_content_pane

0x0164,	// (0x000809be) main_vradio_pane

0x9e19,	// (0x0008a673) main_vradio_pane_g1_ParamLimits

0x9e19,	// (0x0008a673) main_vradio_pane_g1

0x17dc,	// (0x00082036) main_vradio_pane_g2_ParamLimits

0x17dc,	// (0x00082036) main_vradio_pane_g2

0x0001,

0xf846,	// (0x000900a0) main_vradio_pane_g_ParamLimits

0xf846,	// (0x000900a0) main_vradio_pane_g

0x9e27,	// (0x0008a681) main_vradio_pane_t1_ParamLimits

0x9e27,	// (0x0008a681) main_vradio_pane_t1

0x9e39,	// (0x0008a693) main_vradio_pane_t2_ParamLimits

0x9e39,	// (0x0008a693) main_vradio_pane_t2

0x17e9,	// (0x00082043) main_vradio_pane_t3_ParamLimits

0x17e9,	// (0x00082043) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x000900a5) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x000900a5) main_vradio_pane_t

0x9e4b,	// (0x0008a6a5) vradio_rocker_control_pane_ParamLimits

0x9e4b,	// (0x0008a6a5) vradio_rocker_control_pane

0x9e57,	// (0x0008a6b1) vradio_station_info_pane_ParamLimits

0x9e57,	// (0x0008a6b1) vradio_station_info_pane

0x17fd,	// (0x00082057) vradio_frequency_info_pane_ParamLimits

0x17fd,	// (0x00082057) vradio_frequency_info_pane

0x11d1,	// (0x00081a2b) vradio_station_info_pane_g1

0x180c,	// (0x00082066) vradio_station_info_pane_t1_ParamLimits

0x180c,	// (0x00082066) vradio_station_info_pane_t1

0x182e,	// (0x00082088) vradio_station_info_pane_t2_ParamLimits

0x182e,	// (0x00082088) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x000900ac) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x000900ac) vradio_station_info_pane_t

0x1840,	// (0x0008209a) vradio_tuning_pane

0x1848,	// (0x000820a2) vradio_rocker_control_pane_g1

0x1850,	// (0x000820aa) vradio_rocker_control_pane_g2

0x1858,	// (0x000820b2) vradio_rocker_control_pane_g3

0x1860,	// (0x000820ba) vradio_rocker_control_pane_g4

0x1868,	// (0x000820c2) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x000900b1) vradio_rocker_control_pane_g

0x9e64,	// (0x0008a6be) vradio_frequency_info_pane_g1

0x1870,	// (0x000820ca) vradio_frequency_info_pane_t1_ParamLimits

0x1870,	// (0x000820ca) vradio_frequency_info_pane_t1

0x9e6e,	// (0x0008a6c8) vradio_tuning_pane_g1

0x9e79,	// (0x0008a6d3) vradio_tuning_pane_t1

0x019a,	// (0x000809f4) area_side_right_pane_ParamLimits

0x019a,	// (0x000809f4) area_side_right_pane

0x0c63,	// (0x000814bd) status_small_pane_g1

0x0c6b,	// (0x000814c5) status_small_pane_g2

0x0c74,	// (0x000814ce) status_small_pane_g3

0x0c7d,	// (0x000814d7) status_small_pane_g4

0x0003,

0xf617,	// (0x0008fe71) status_small_pane_g

0x0c86,	// (0x000814e0) status_small_pane_t1

0x0164,	// (0x000809be) main_video3_pane

0x1884,	// (0x000820de) cams_zoom_vslider_pane

0x188c,	// (0x000820e6) image3_wide_pane_ParamLimits

0x188c,	// (0x000820e6) image3_wide_pane

0x18a6,	// (0x00082100) image3_wide_small_pane

0x18b2,	// (0x0008210c) main_video3_pane_g1_ParamLimits

0x18b2,	// (0x0008210c) main_video3_pane_g1

0x18ce,	// (0x00082128) main_video3_pane_g2_ParamLimits

0x18ce,	// (0x00082128) main_video3_pane_g2

0x0001,

0xf862,	// (0x000900bc) main_video3_pane_g_ParamLimits

0xf862,	// (0x000900bc) main_video3_pane_g

0x18ea,	// (0x00082144) main_video3_pane_t1_ParamLimits

0x18ea,	// (0x00082144) main_video3_pane_t1

0x1915,	// (0x0008216f) main_video3_pane_t2_ParamLimits

0x1915,	// (0x0008216f) main_video3_pane_t2

0x1942,	// (0x0008219c) main_video3_pane_t3_ParamLimits

0x1942,	// (0x0008219c) main_video3_pane_t3

0x0002,

0xf867,	// (0x000900c1) main_video3_pane_t_ParamLimits

0xf867,	// (0x000900c1) main_video3_pane_t

0x196f,	// (0x000821c9) cams_zoom_vslider_pane_g1

0x1978,	// (0x000821d2) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x000900c8) cams_zoom_vslider_pane_g

0x1980,	// (0x000821da) small_slider_vertical_pane

0x11d1,	// (0x00081a2b) small_slider_vertical_pane_g1

0x11d1,	// (0x00081a2b) small_slider_vertical_pane_g2

0x1988,	// (0x000821e2) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x000900cd) small_slider_vertical_pane_g

0x0164,	// (0x000809be) main_hwr_training_pane

0x1991,	// (0x000821eb) hwr_training_instruct_pane_ParamLimits

0x1991,	// (0x000821eb) hwr_training_instruct_pane

0x9e88,	// (0x0008a6e2) hwr_training_navi_pane_ParamLimits

0x9e88,	// (0x0008a6e2) hwr_training_navi_pane

0x9ea2,	// (0x0008a6fc) hwr_training_write_pane_ParamLimits

0x9ea2,	// (0x0008a6fc) hwr_training_write_pane

0x0164,	// (0x000809be) bg_frame_shadow_pane

0x19c8,	// (0x00082222) hwr_training_write_pane_g1

0x19d0,	// (0x0008222a) hwr_training_write_pane_g2

0x19d8,	// (0x00082232) hwr_training_write_pane_g3

0x19e0,	// (0x0008223a) hwr_training_write_pane_g4

0x19e8,	// (0x00082242) hwr_training_write_pane_g5

0x19f0,	// (0x0008224a) hwr_training_write_pane_g6

0x19f8,	// (0x00082252) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x000900d4) hwr_training_write_pane_g

0x9eda,	// (0x0008a734) hwr_training_navi_pane_g1_ParamLimits

0x9eda,	// (0x0008a734) hwr_training_navi_pane_g1

0x9eec,	// (0x0008a746) hwr_training_navi_pane_g2_ParamLimits

0x9eec,	// (0x0008a746) hwr_training_navi_pane_g2

0x9efe,	// (0x0008a758) hwr_training_navi_pane_g3_ParamLimits

0x9efe,	// (0x0008a758) hwr_training_navi_pane_g3

0x9f0e,	// (0x0008a768) hwr_training_navi_pane_g4_ParamLimits

0x9f0e,	// (0x0008a768) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x000900e3) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x000900e3) hwr_training_navi_pane_g

0x9f28,	// (0x0008a782) hwr_training_navi_pane_t1

0x9f36,	// (0x0008a790) list_single_hwr_training_instruct_pane_ParamLimits

0x9f36,	// (0x0008a790) list_single_hwr_training_instruct_pane

0x1a00,	// (0x0008225a) list_single_hwr_training_instruct_pane_t1

0x1111,	// (0x0008196b) bg_frame_shadow_pane_g1

0x1a0f,	// (0x00082269) bg_frame_shadow_pane_g2

0x1a17,	// (0x00082271) bg_frame_shadow_pane_g3

0x1a1f,	// (0x00082279) bg_frame_shadow_pane_g4

0x1a27,	// (0x00082281) bg_frame_shadow_pane_g5

0x1a2f,	// (0x00082289) bg_frame_shadow_pane_g6

0x1a37,	// (0x00082291) bg_frame_shadow_pane_g7

0x45df,	// (0x00084e39) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x000900ee) bg_frame_shadow_pane_g

0x0164,	// (0x000809be) main_video_tele_dialer_pane

0x9f4f,	// (0x0008a7a9) aid_size_cell_video_keypad_ParamLimits

0x9f4f,	// (0x0008a7a9) aid_size_cell_video_keypad

0x9f5f,	// (0x0008a7b9) grid_video_dialer_keypad_pane_ParamLimits

0x9f5f,	// (0x0008a7b9) grid_video_dialer_keypad_pane

0x9f91,	// (0x0008a7eb) video_down_pane_cp_ParamLimits

0x9f91,	// (0x0008a7eb) video_down_pane_cp

0x9fb9,	// (0x0008a813) cell_video_dialer_keypad_pane_ParamLimits

0x9fb9,	// (0x0008a813) cell_video_dialer_keypad_pane

0x1a3f,	// (0x00082299) bg_button_pane_cp08_ParamLimits

0x1a3f,	// (0x00082299) bg_button_pane_cp08

0x9fd0,	// (0x0008a82a) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9fd0,	// (0x0008a82a) cell_video_dialer_keypad_pane_g1

0x97d3,	// (0x0008a02d) mup3_rocker2_pane_ParamLimits

0x97d3,	// (0x0008a02d) mup3_rocker2_pane

0x11d1,	// (0x00081a2b) mup3_rocker2_pane_g1

0x86ce,	// (0x00088f28) main_dialer2_pane

0x0164,	// (0x000809be) main_mp4_pane

0xa00f,	// (0x0008a869) main_mp4_pane_g1_ParamLimits

0xa00f,	// (0x0008a869) main_mp4_pane_g1

0xa01d,	// (0x0008a877) main_mp4_pane_g2_ParamLimits

0xa01d,	// (0x0008a877) main_mp4_pane_g2

0xa02b,	// (0x0008a885) main_mp4_pane_g3_ParamLimits

0xa02b,	// (0x0008a885) main_mp4_pane_g3

0xa07e,	// (0x0008a8d8) main_mp4_pane_g4_ParamLimits

0xa07e,	// (0x0008a8d8) main_mp4_pane_g4

0xa0a6,	// (0x0008a900) main_mp4_pane_g5_ParamLimits

0xa0a6,	// (0x0008a900) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x0009010e) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x0009010e) main_mp4_pane_g

0xa0f6,	// (0x0008a950) main_mp4_pane_t1_ParamLimits

0xa0f6,	// (0x0008a950) main_mp4_pane_t1

0xa152,	// (0x0008a9ac) main_mp4_pane_t2_ParamLimits

0xa152,	// (0x0008a9ac) main_mp4_pane_t2

0x1a4b,	// (0x000822a5) main_mp4_pane_t3_ParamLimits

0x1a4b,	// (0x000822a5) main_mp4_pane_t3

0xa1a4,	// (0x0008a9fe) main_mp4_pane_t4_ParamLimits

0xa1a4,	// (0x0008a9fe) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x0009011b) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x0009011b) main_mp4_pane_t

0xa1e4,	// (0x0008aa3e) mp4_progress_pane_ParamLimits

0xa1e4,	// (0x0008aa3e) mp4_progress_pane

0xa22e,	// (0x0008aa88) mp4_rocker_pane_ParamLimits

0xa22e,	// (0x0008aa88) mp4_rocker_pane

0x1a73,	// (0x000822cd) mp4_progress_pane_t1

0x1a8c,	// (0x000822e6) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x00090124) mp4_progress_pane_t

0x1aa5,	// (0x000822ff) mup_progress_pane_cp04

0x2335,	// (0x00082b8f) mp4_rocker_pane_g1

0xa250,	// (0x0008aaaa) aid_cell_size_keypad2_ParamLimits

0xa250,	// (0x0008aaaa) aid_cell_size_keypad2

0xa260,	// (0x0008aaba) dialer2_ne_pane_ParamLimits

0xa260,	// (0x0008aaba) dialer2_ne_pane

0xa26c,	// (0x0008aac6) grid_dialer2_keypad_pane_ParamLimits

0xa26c,	// (0x0008aac6) grid_dialer2_keypad_pane

0x2390,	// (0x00082bea) bg_popup_call_pane_cp07_ParamLimits

0x2390,	// (0x00082bea) bg_popup_call_pane_cp07

0xa27a,	// (0x0008aad4) dialer2_ne_pane_t1_ParamLimits

0xa27a,	// (0x0008aad4) dialer2_ne_pane_t1

0xa29f,	// (0x0008aaf9) cell_dialer2_keypad_pane_ParamLimits

0xa29f,	// (0x0008aaf9) cell_dialer2_keypad_pane

0x1ac3,	// (0x0008231d) bg_button_pane_pane_cp04_ParamLimits

0x1ac3,	// (0x0008231d) bg_button_pane_pane_cp04

0xa2b6,	// (0x0008ab10) cell_dialer2_keypad_pane_g1_ParamLimits

0xa2b6,	// (0x0008ab10) cell_dialer2_keypad_pane_g1

0x659d,	// (0x00086df7) aid_placing_vt_set_content_ParamLimits

0x659d,	// (0x00086df7) aid_placing_vt_set_content

0x65c5,	// (0x00086e1f) aid_placing_vt_set_title_ParamLimits

0x65c5,	// (0x00086e1f) aid_placing_vt_set_title

0x0164,	// (0x000809be) main_image3_pane

0xa350,	// (0x0008abaa) area_side_right_pane_cp01_ParamLimits

0xa350,	// (0x0008abaa) area_side_right_pane_cp01

0xa37f,	// (0x0008abd9) main_image3_pane_g1_ParamLimits

0xa37f,	// (0x0008abd9) main_image3_pane_g1

0xa38d,	// (0x0008abe7) main_image3_pane_g2_ParamLimits

0xa38d,	// (0x0008abe7) main_image3_pane_g2

0xa3a6,	// (0x0008ac00) main_image3_pane_g3_ParamLimits

0xa3a6,	// (0x0008ac00) main_image3_pane_g3

0xa3bf,	// (0x0008ac19) main_image3_pane_g4_ParamLimits

0xa3bf,	// (0x0008ac19) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x00090133) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x00090133) main_image3_pane_g

0xa3d8,	// (0x0008ac32) main_image3_pane_t1_ParamLimits

0xa3d8,	// (0x0008ac32) main_image3_pane_t1

0xa3fd,	// (0x0008ac57) main_image3_pane_t2_ParamLimits

0xa3fd,	// (0x0008ac57) main_image3_pane_t2

0xa41c,	// (0x0008ac76) main_image3_pane_t3_ParamLimits

0xa41c,	// (0x0008ac76) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x0009013c) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x0009013c) main_image3_pane_t

0x1b92,	// (0x000823ec) grid_sctrl_middle_pane_cp01_ParamLimits

0x1b92,	// (0x000823ec) grid_sctrl_middle_pane_cp01

0xa47d,	// (0x0008acd7) cell_sctrl_middle_pane_cp01_ParamLimits

0xa47d,	// (0x0008acd7) cell_sctrl_middle_pane_cp01

0xa48e,	// (0x0008ace8) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa48e,	// (0x0008ace8) cell_sctrl_middle_pane_cp01_g1

0x0164,	// (0x000809be) main_call4_pane

0xa49b,	// (0x0008acf5) aid_size_button_call4_ParamLimits

0xa49b,	// (0x0008acf5) aid_size_button_call4

0xa4cd,	// (0x0008ad27) call4_windows_pane_ParamLimits

0xa4cd,	// (0x0008ad27) call4_windows_pane

0xa4e9,	// (0x0008ad43) grid_call4_button_pane_ParamLimits

0xa4e9,	// (0x0008ad43) grid_call4_button_pane

0x1acf,	// (0x00082329) call4_windows_conf_pane

0xa50d,	// (0x0008ad67) popup_call4_audio_first_window_ParamLimits

0xa50d,	// (0x0008ad67) popup_call4_audio_first_window

0xa539,	// (0x0008ad93) popup_call4_audio_second_window_ParamLimits

0xa539,	// (0x0008ad93) popup_call4_audio_second_window

0x1b0c,	// (0x00082366) popup_call4_audio_wait_window_ParamLimits

0x1b0c,	// (0x00082366) popup_call4_audio_wait_window

0xa54d,	// (0x0008ada7) cell_call4_button_pane_ParamLimits

0xa54d,	// (0x0008ada7) cell_call4_button_pane

0xa570,	// (0x0008adca) bg_button_pane_cp09_ParamLimits

0xa570,	// (0x0008adca) bg_button_pane_cp09

0xa57c,	// (0x0008add6) cell_call4_button_pane_g1_ParamLimits

0xa57c,	// (0x0008add6) cell_call4_button_pane_g1

0xa589,	// (0x0008ade3) cell_call4_button_pane_t1_ParamLimits

0xa589,	// (0x0008ade3) cell_call4_button_pane_t1

0x1b54,	// (0x000823ae) popup_call4_audio_conf_window_ParamLimits

0x1b54,	// (0x000823ae) popup_call4_audio_conf_window

0x9808,	// (0x0008a062) mup3_progress_pane_t1_ParamLimits

0x981f,	// (0x0008a079) mup3_progress_pane_t2_ParamLimits

0x1488,	// (0x00081ce2) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x00090015) mup3_progress_pane_t_ParamLimits

0x149f,	// (0x00081cf9) mup_progress_pane_cp03_ParamLimits

0x9d1c,	// (0x0008a576) mup3_control_keys_pane_g4_copy1

0xa212,	// (0x0008aa6c) mp4_rocker2_pane_ParamLimits

0xa212,	// (0x0008aa6c) mp4_rocker2_pane

0x1b76,	// (0x000823d0) mp4_rocker2_pane_g1

0x1b6e,	// (0x000823c8) mp4_rocker2_pane_g2

0xa59b,	// (0x0008adf5) mp4_rocker2_pane_g3

0xa5a3,	// (0x0008adfd) mp4_rocker2_pane_g4

0xa5ab,	// (0x0008ae05) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x00090145) mp4_rocker2_pane_g

0x0164,	// (0x000809be) main_camera4_pane

0x0164,	// (0x000809be) main_video4_pane

0x9f6d,	// (0x0008a7c7) main_video_tele_dialer_pane_t1_ParamLimits

0x9f6d,	// (0x0008a7c7) main_video_tele_dialer_pane_t1

0x9f7f,	// (0x0008a7d9) main_video_tele_dialer_pane_t2_ParamLimits

0x9f7f,	// (0x0008a7d9) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x000900ff) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x000900ff) main_video_tele_dialer_pane_t

0xa5cb,	// (0x0008ae25) cam4_autofocus_pane_ParamLimits

0xa5cb,	// (0x0008ae25) cam4_autofocus_pane

0xa5e3,	// (0x0008ae3d) cam4_image_uncrop_pane_ParamLimits

0xa5e3,	// (0x0008ae3d) cam4_image_uncrop_pane

0xa5fc,	// (0x0008ae56) cam4_indicators_pane_ParamLimits

0xa5fc,	// (0x0008ae56) cam4_indicators_pane

0xa618,	// (0x0008ae72) main_camera4_pane_g1_ParamLimits

0xa618,	// (0x0008ae72) main_camera4_pane_g1

0xa624,	// (0x0008ae7e) main_camera4_pane_g2_ParamLimits

0xa624,	// (0x0008ae7e) main_camera4_pane_g2

0xa624,	// (0x0008ae7e) main_camera4_pane_g3_ParamLimits

0xa624,	// (0x0008ae7e) main_camera4_pane_g3

0xa630,	// (0x0008ae8a) main_camera4_pane_g4_ParamLimits

0xa630,	// (0x0008ae8a) main_camera4_pane_g4

0xa63c,	// (0x0008ae96) main_camera4_pane_g5_ParamLimits

0xa63c,	// (0x0008ae96) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x00090150) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x00090150) main_camera4_pane_g

0xa656,	// (0x0008aeb0) main_camera4_pane_t1_ParamLimits

0xa656,	// (0x0008aeb0) main_camera4_pane_t1

0xa6a0,	// (0x0008aefa) bg_tb_trans_pane_cp06

0xa6b6,	// (0x0008af10) cam4_indicators_pane_g1

0xa6c6,	// (0x0008af20) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x0009016b) cam4_indicators_pane_g

0xa6de,	// (0x0008af38) cam4_indicators_pane_t1

0xa70a,	// (0x0008af64) main_video4_pane_g1_ParamLimits

0xa70a,	// (0x0008af64) main_video4_pane_g1

0xa716,	// (0x0008af70) main_video4_pane_g2_ParamLimits

0xa716,	// (0x0008af70) main_video4_pane_g2

0xa722,	// (0x0008af7c) main_video4_pane_g3_ParamLimits

0xa722,	// (0x0008af7c) main_video4_pane_g3

0xa72e,	// (0x0008af88) main_video4_pane_g4_ParamLimits

0xa72e,	// (0x0008af88) main_video4_pane_g4

0x0004,

0xf918,	// (0x00090172) main_video4_pane_g_ParamLimits

0xf918,	// (0x00090172) main_video4_pane_g

0xa750,	// (0x0008afaa) vid4_indicators_pane_ParamLimits

0xa750,	// (0x0008afaa) vid4_indicators_pane

0xa76e,	// (0x0008afc8) video4_image_uncrop_cif_pane_ParamLimits

0xa76e,	// (0x0008afc8) video4_image_uncrop_cif_pane

0xa77d,	// (0x0008afd7) video4_image_uncrop_nhd_pane_ParamLimits

0xa77d,	// (0x0008afd7) video4_image_uncrop_nhd_pane

0xa5e3,	// (0x0008ae3d) video4_image_uncrop_vga_pane_ParamLimits

0xa5e3,	// (0x0008ae3d) video4_image_uncrop_vga_pane

0xa78c,	// (0x0008afe6) bg_tb_trans_pane_cp07

0xa7a4,	// (0x0008affe) vid4_indicators_pane_g1

0xa7b6,	// (0x0008b010) vid4_indicators_pane_g2

0xa7c9,	// (0x0008b023) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x0009017d) vid4_indicators_pane_g

0xa7f6,	// (0x0008b050) vid4_indicators_pane_t1

0xa811,	// (0x0008b06b) cam4_autofocus_pane_g1

0xa819,	// (0x0008b073) cam4_autofocus_pane_g2

0xa821,	// (0x0008b07b) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x00090188) cam4_autofocus_pane_g

0xa829,	// (0x0008b083) cam4_autofocus_pane_g3_copy1

0x9f9d,	// (0x0008a7f7) video_down_pane_cp_t1

0x9fab,	// (0x0008a805) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x00090104) video_down_pane_cp_t

0x1b92,	// (0x000823ec) popup_vitu2_window_ParamLimits

0x1b92,	// (0x000823ec) popup_vitu2_window

0xa831,	// (0x0008b08b) aid_size_cell2_itu2_ParamLimits

0xa831,	// (0x0008b08b) aid_size_cell2_itu2

0xa853,	// (0x0008b0ad) aid_size_cell_itu2_ParamLimits

0xa853,	// (0x0008b0ad) aid_size_cell_itu2

0xa897,	// (0x0008b0f1) bg_popup_window_pane_cp09_ParamLimits

0xa897,	// (0x0008b0f1) bg_popup_window_pane_cp09

0xa8a5,	// (0x0008b0ff) field_vitu2_entry_pane_ParamLimits

0xa8a5,	// (0x0008b0ff) field_vitu2_entry_pane

0xa8c5,	// (0x0008b11f) grid_vitu2_function_pane_ParamLimits

0xa8c5,	// (0x0008b11f) grid_vitu2_function_pane

0xa909,	// (0x0008b163) grid_vitu2_itu_pane_ParamLimits

0xa909,	// (0x0008b163) grid_vitu2_itu_pane

0xa97d,	// (0x0008b1d7) cell_vitu2_itu_pane_ParamLimits

0xa97d,	// (0x0008b1d7) cell_vitu2_itu_pane

0xa994,	// (0x0008b1ee) cell_vitu2_function_pane_ParamLimits

0xa994,	// (0x0008b1ee) cell_vitu2_function_pane

0x1ba0,	// (0x000823fa) bg_popup_call_pane_cp08_ParamLimits

0x1ba0,	// (0x000823fa) bg_popup_call_pane_cp08

0x1bb9,	// (0x00082413) field_vitu2_entry_pane_g1

0x1bc5,	// (0x0008241f) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x0009018f) field_vitu2_entry_pane_g

0xa9d8,	// (0x0008b232) field_vitu2_entry_pane_t1_ParamLimits

0xa9d8,	// (0x0008b232) field_vitu2_entry_pane_t1

0x1bdf,	// (0x00082439) field_vitu2_entry_pane_t2_ParamLimits

0x1bdf,	// (0x00082439) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x00090196) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x00090196) field_vitu2_entry_pane_t

0xaa05,	// (0x0008b25f) bg_button_pane_cp010_ParamLimits

0xaa05,	// (0x0008b25f) bg_button_pane_cp010

0xaa13,	// (0x0008b26d) cell_vitu2_itu_pane_g1

0xaa31,	// (0x0008b28b) cell_vitu2_itu_pane_t1_ParamLimits

0xaa31,	// (0x0008b28b) cell_vitu2_itu_pane_t1

0x553c,	// (0x00085d96) cell_vitu2_itu_pane_t2_ParamLimits

0x553c,	// (0x00085d96) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x000901a0) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x000901a0) cell_vitu2_itu_pane_t

0xa78c,	// (0x0008afe6) bg_button_pane_cp011

0xaa83,	// (0x0008b2dd) cell_vitu2_function_pane_g1

0x0164,	// (0x000809be) main_myfav_hc_pane

0xa45e,	// (0x0008acb8) popup_image3_note_pane_ParamLimits

0xa45e,	// (0x0008acb8) popup_image3_note_pane

0xa46c,	// (0x0008acc6) popup_image3_tool_bar_pane_ParamLimits

0xa46c,	// (0x0008acc6) popup_image3_tool_bar_pane

0x55aa,	// (0x00085e04) cell_vitu2_itu_pane_t3_ParamLimits

0x55aa,	// (0x00085e04) cell_vitu2_itu_pane_t3

0x0164,	// (0x000809be) bg_popup_trans_pane

0x1c04,	// (0x0008245e) grid_image3_tool_bar_pane

0x1c0e,	// (0x00082468) bg_popup_trans_pane_g1

0xdb69,	// (0x0008e3c3) bg_popup_trans_pane_g2

0x1c16,	// (0x00082470) bg_popup_trans_pane_g3

0x1c1e,	// (0x00082478) bg_popup_trans_pane_g4

0x1c26,	// (0x00082480) bg_popup_trans_pane_g5

0x1c2e,	// (0x00082488) bg_popup_trans_pane_g6

0x1c36,	// (0x00082490) bg_popup_trans_pane_g7

0x1c3e,	// (0x00082498) bg_popup_trans_pane_g8

0xdb49,	// (0x0008e3a3) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x000901a7) bg_popup_trans_pane_g

0x1c46,	// (0x000824a0) cell_image3_tool_bar_pane_ParamLimits

0x1c46,	// (0x000824a0) cell_image3_tool_bar_pane

0x11d1,	// (0x00081a2b) cell_image3_tool_bar_pane_g1

0x0164,	// (0x000809be) bg_popup_trans_pane_cp1

0x1c5c,	// (0x000824b6) popup_image3_note_pane_t1

0x1c6a,	// (0x000824c4) popup_image3_note_pane_t2

0x1c78,	// (0x000824d2) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x000901ba) popup_image3_note_pane_t

0x1c88,	// (0x000824e2) popup_image3_note_pane_t3_copy1

0xaa97,	// (0x0008b2f1) bg_myfav_hc_instruction_pane_ParamLimits

0xaa97,	// (0x0008b2f1) bg_myfav_hc_instruction_pane

0xaaaf,	// (0x0008b309) cell_myfav_contact_pane_ParamLimits

0xaaaf,	// (0x0008b309) cell_myfav_contact_pane

0xaac9,	// (0x0008b323) cell_myfav_contact_pane_cp1_ParamLimits

0xaac9,	// (0x0008b323) cell_myfav_contact_pane_cp1

0xaae1,	// (0x0008b33b) cell_myfav_contact_pane_cp2_ParamLimits

0xaae1,	// (0x0008b33b) cell_myfav_contact_pane_cp2

0xaaf9,	// (0x0008b353) cell_myfav_contact_pane_cp3_ParamLimits

0xaaf9,	// (0x0008b353) cell_myfav_contact_pane_cp3

0xab10,	// (0x0008b36a) cell_myfav_contact_pane_cp4_ParamLimits

0xab10,	// (0x0008b36a) cell_myfav_contact_pane_cp4

0xab26,	// (0x0008b380) cell_myfav_contact_pane_cp5_ParamLimits

0xab26,	// (0x0008b380) cell_myfav_contact_pane_cp5

0xab3a,	// (0x0008b394) cell_myfav_contact_pane_cp6_ParamLimits

0xab3a,	// (0x0008b394) cell_myfav_contact_pane_cp6

0xab4e,	// (0x0008b3a8) cell_myfav_contact_pane_cp7_ParamLimits

0xab4e,	// (0x0008b3a8) cell_myfav_contact_pane_cp7

0x1c96,	// (0x000824f0) listscroll_gen_pane_cp05

0xab66,	// (0x0008b3c0) main_myfav_hc_pane_g1_ParamLimits

0xab66,	// (0x0008b3c0) main_myfav_hc_pane_g1

0xab80,	// (0x0008b3da) main_myfav_hc_pane_g2_ParamLimits

0xab80,	// (0x0008b3da) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x000901c1) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x000901c1) main_myfav_hc_pane_g

0xabb2,	// (0x0008b40c) main_myfav_hc_pane_t1_ParamLimits

0xabb2,	// (0x0008b40c) main_myfav_hc_pane_t1

0x1c9f,	// (0x000824f9) main_myfav_hc_pane_t2_ParamLimits

0x1c9f,	// (0x000824f9) main_myfav_hc_pane_t2

0x1cb1,	// (0x0008250b) main_myfav_hc_pane_t3_ParamLimits

0x1cb1,	// (0x0008250b) main_myfav_hc_pane_t3

0xabc9,	// (0x0008b423) main_myfav_hc_pane_t4_ParamLimits

0xabc9,	// (0x0008b423) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x000901c8) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x000901c8) main_myfav_hc_pane_t

0x11d1,	// (0x00081a2b) bg_myfav_hc_instruction_pane_g1

0x1cc3,	// (0x0008251d) cell_myfav_contact_pane_g1_ParamLimits

0x1cc3,	// (0x0008251d) cell_myfav_contact_pane_g1

0x1cc3,	// (0x0008251d) cell_myfav_contact_pane_g2_ParamLimits

0x1cc3,	// (0x0008251d) cell_myfav_contact_pane_g2

0x1ccf,	// (0x00082529) cell_myfav_contact_pane_g3_ParamLimits

0x1ccf,	// (0x00082529) cell_myfav_contact_pane_g3

0x1472,	// (0x00081ccc) cell_myfav_contact_pane_g4_ParamLimits

0x1472,	// (0x00081ccc) cell_myfav_contact_pane_g4

0x1cdc,	// (0x00082536) cell_myfav_contact_pane_g5_ParamLimits

0x1cdc,	// (0x00082536) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x000901d3) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x000901d3) cell_myfav_contact_pane_g

0xab9a,	// (0x0008b3f4) main_myfav_hc_pane_g3_ParamLimits

0xab9a,	// (0x0008b3f4) main_myfav_hc_pane_g3

0x5777,	// (0x00085fd1) popup_adpt_find_window

0xabf3,	// (0x0008b44d) afind_page_pane_ParamLimits

0xabf3,	// (0x0008b44d) afind_page_pane

0xac00,	// (0x0008b45a) aid_size_cell_afind_ParamLimits

0xac00,	// (0x0008b45a) aid_size_cell_afind

0xac1a,	// (0x0008b474) bg_popup_sub_pane_cp09_ParamLimits

0xac1a,	// (0x0008b474) bg_popup_sub_pane_cp09

0xac27,	// (0x0008b481) find_pane_cp01_ParamLimits

0xac27,	// (0x0008b481) find_pane_cp01

0x1ce8,	// (0x00082542) grid_afind_control_pane_ParamLimits

0x1ce8,	// (0x00082542) grid_afind_control_pane

0xac34,	// (0x0008b48e) grid_afind_pane_ParamLimits

0xac34,	// (0x0008b48e) grid_afind_pane

0xac50,	// (0x0008b4aa) cell_afind_pane_ParamLimits

0xac50,	// (0x0008b4aa) cell_afind_pane

0x11d1,	// (0x00081a2b) afind_page_pane_g1

0xac9a,	// (0x0008b4f4) afind_page_pane_g2

0xaca3,	// (0x0008b4fd) afind_page_pane_g3

0x0002,

0xf984,	// (0x000901de) afind_page_pane_g

0xacac,	// (0x0008b506) afind_page_pane_t1

0x1cfc,	// (0x00082556) cell_afind_grid_control_pane_ParamLimits

0x1cfc,	// (0x00082556) cell_afind_grid_control_pane

0x1ac3,	// (0x0008231d) bg_button_pane_cp69_ParamLimits

0x1ac3,	// (0x0008231d) bg_button_pane_cp69

0xaccc,	// (0x0008b526) cell_afind_pane_g1_ParamLimits

0xaccc,	// (0x0008b526) cell_afind_pane_g1

0xacd9,	// (0x0008b533) cell_afind_pane_t1_ParamLimits

0xacd9,	// (0x0008b533) cell_afind_pane_t1

0xd95e,	// (0x0008e1b8) bg_button_pane_cp72

0x1d0b,	// (0x00082565) cell_afind_grid_control_pane_g1

0x8249,	// (0x00088aa3) aid_image_placing_area_ParamLimits

0x8249,	// (0x00088aa3) aid_image_placing_area

0x178f,	// (0x00081fe9) field_vitu_entry_pane_g1_ParamLimits

0x178f,	// (0x00081fe9) field_vitu_entry_pane_g1

0x179b,	// (0x00081ff5) field_vitu_entry_pane_g2_ParamLimits

0x179b,	// (0x00081ff5) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x0009008f) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x0009008f) field_vitu_entry_pane_g

0x9da3,	// (0x0008a5fd) cell_vitu_itu_pane_g1_ParamLimits

0x9df3,	// (0x0008a64d) cell_vitu_itu_pane_t3_ParamLimits

0x9df3,	// (0x0008a64d) cell_vitu_itu_pane_t3

0x1a73,	// (0x000822cd) mp4_progress_pane_t1_ParamLimits

0x1a8c,	// (0x000822e6) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x00090124) mp4_progress_pane_t_ParamLimits

0x1aa5,	// (0x000822ff) mup_progress_pane_cp04_ParamLimits

0xabdd,	// (0x0008b437) main_myfav_hc_pane_t5_ParamLimits

0xabdd,	// (0x0008b437) main_myfav_hc_pane_t5

0x018a,	// (0x000809e4) aid_zoom_text_primary

0x5777,	// (0x00085fd1) popup_adpt_find_window_ParamLimits

0x01dd,	// (0x00080a37) main_cam_set_pane

0xa60a,	// (0x0008ae64) cam4_zoom_pane_ParamLimits

0xa60a,	// (0x0008ae64) cam4_zoom_pane

0xaceb,	// (0x0008b545) main_cam_set_pane_g1_ParamLimits

0xaceb,	// (0x0008b545) main_cam_set_pane_g1

0xacf9,	// (0x0008b553) main_cam_set_pane_g2_ParamLimits

0xacf9,	// (0x0008b553) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x000901e5) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x000901e5) main_cam_set_pane_g

0xad05,	// (0x0008b55f) main_cam_set_pane_t1_ParamLimits

0xad05,	// (0x0008b55f) main_cam_set_pane_t1

0xad21,	// (0x0008b57b) main_cset_listscroll_pane_ParamLimits

0xad21,	// (0x0008b57b) main_cset_listscroll_pane

0xad50,	// (0x0008b5aa) main_cset_slider_pane_ParamLimits

0xad50,	// (0x0008b5aa) main_cset_slider_pane

0x1d1c,	// (0x00082576) main_cset_list_pane_ParamLimits

0x1d1c,	// (0x00082576) main_cset_list_pane

0x1d2c,	// (0x00082586) scroll_pane_cp028

0xad71,	// (0x0008b5cb) aid_area_touch_slider

0xad8d,	// (0x0008b5e7) cset_slider_pane

0xadb7,	// (0x0008b611) main_cset_slider_pane_g1

0xadcc,	// (0x0008b626) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x000901ea) main_cset_slider_pane_g

0x1d65,	// (0x000825bf) main_cset_slider_pane_t1

0xae88,	// (0x0008b6e2) main_cset_slider_pane_t2

0xaea2,	// (0x0008b6fc) main_cset_slider_pane_t3

0xaebc,	// (0x0008b716) main_cset_slider_pane_t4

0xaed6,	// (0x0008b730) main_cset_slider_pane_t5

0xaef0,	// (0x0008b74a) main_cset_slider_pane_t6

0xaf05,	// (0x0008b75f) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x0009020f) main_cset_slider_pane_t

0xb009,	// (0x0008b863) cset_list_set_pane_ParamLimits

0xb009,	// (0x0008b863) cset_list_set_pane

0xb01a,	// (0x0008b874) aid_position_infowindow_above

0xb022,	// (0x0008b87c) aid_position_infowindow_below

0xb02a,	// (0x0008b884) cset_list_set_pane_g1_ParamLimits

0xb02a,	// (0x0008b884) cset_list_set_pane_g1

0xb036,	// (0x0008b890) cset_list_set_pane_g3_ParamLimits

0xb036,	// (0x0008b890) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x0009022e) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x0009022e) cset_list_set_pane_g

0xb045,	// (0x0008b89f) cset_list_set_pane_t1_ParamLimits

0xb045,	// (0x0008b89f) cset_list_set_pane_t1

0x01dd,	// (0x00080a37) list_highlight_pane_cp021_ParamLimits

0x01dd,	// (0x00080a37) list_highlight_pane_cp021

0xe2eb,	// (0x0008eb45) cset_slider_pane_g1

0xe2fd,	// (0x0008eb57) cset_slider_pane_g2

0xe2f4,	// (0x0008eb4e) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x00090233) cset_slider_pane_g

0xb05a,	// (0x0008b8b4) aid_area_touch_cam4_zoom

0xb062,	// (0x0008b8bc) cam4_zoom_cont_pane

0xb06a,	// (0x0008b8c4) cam4_zoom_pane_g1

0xb072,	// (0x0008b8cc) cam4_zoom_pane_g2

0xb07a,	// (0x0008b8d4) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x0009023a) cam4_zoom_pane_g

0xb082,	// (0x0008b8dc) cam4_zoom_cont_pane_g1

0xb08b,	// (0x0008b8e5) cam4_zoom_cont_pane_g2

0xb094,	// (0x0008b8ee) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x00090241) cam4_zoom_cont_pane_g

0xa4b5,	// (0x0008ad0f) call4_image_pane_ParamLimits

0xa4b5,	// (0x0008ad0f) call4_image_pane

0x1acf,	// (0x00082329) call4_windows_conf_pane_ParamLimits

0x1aea,	// (0x00082344) popup_call4_audio_in_window_ParamLimits

0x1aea,	// (0x00082344) popup_call4_audio_in_window

0x0164,	// (0x000809be) bg_popup_call2_act_pane_cp02

0x1b4c,	// (0x000823a6) call4_list_conf_pane

0x11d1,	// (0x00081a2b) call4_image_pane_g1

0x11d1,	// (0x00081a2b) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x0008ff55) call4_image_pane_g

0x1e20,	// (0x0008267a) list_single_graphic_popup_conf4_pane_ParamLimits

0x1e20,	// (0x0008267a) list_single_graphic_popup_conf4_pane

0x0164,	// (0x000809be) list_highlight_pane_cp022

0x1e35,	// (0x0008268f) list_single_graphic_popup_conf4_pane_g1

0xdfe5,	// (0x0008e83f) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x00090248) list_single_graphic_popup_conf4_pane_g

0x1e3d,	// (0x00082697) list_single_graphic_popup_conf4_pane_t1

0x671f,	// (0x00086f79) popup_vtel_slider_window_ParamLimits

0x671f,	// (0x00086f79) popup_vtel_slider_window

0x1ab1,	// (0x0008230b) dialer2_ne_pane_t2_ParamLimits

0x1ab1,	// (0x0008230b) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x00090129) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x00090129) dialer2_ne_pane_t

0x01dd,	// (0x00080a37) bg_popup_sub_pane_cp010_ParamLimits

0x01dd,	// (0x00080a37) bg_popup_sub_pane_cp010

0xb09d,	// (0x0008b8f7) popup_vtel_slider_window_g1_ParamLimits

0xb09d,	// (0x0008b8f7) popup_vtel_slider_window_g1

0xb0a9,	// (0x0008b903) popup_vtel_slider_window_g2_ParamLimits

0xb0a9,	// (0x0008b903) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x0009024d) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x0009024d) popup_vtel_slider_window_g

0xb0f1,	// (0x0008b94b) vtel_slider_pane_ParamLimits

0xb0f1,	// (0x0008b94b) vtel_slider_pane

0xb100,	// (0x0008b95a) vtel_slider_pane_g1_ParamLimits

0xb100,	// (0x0008b95a) vtel_slider_pane_g1

0xb10d,	// (0x0008b967) vtel_slider_pane_g2_ParamLimits

0xb10d,	// (0x0008b967) vtel_slider_pane_g2

0xb11a,	// (0x0008b974) vtel_slider_pane_g3_ParamLimits

0xb11a,	// (0x0008b974) vtel_slider_pane_g3

0xb100,	// (0x0008b95a) vtel_slider_pane_g4_ParamLimits

0xb100,	// (0x0008b95a) vtel_slider_pane_g4

0xb127,	// (0x0008b981) vtel_slider_pane_g5_ParamLimits

0xb127,	// (0x0008b981) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x00090256) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x00090256) vtel_slider_pane_g

0x0164,	// (0x000809be) main_gallery2_pane

0xa879,	// (0x0008b0d3) aid_size_row_itut2_dropdow_list_ParamLimits

0xa879,	// (0x0008b0d3) aid_size_row_itut2_dropdow_list

0xa8e7,	// (0x0008b141) grid_vitu2_function_top_pane_ParamLimits

0xa8e7,	// (0x0008b141) grid_vitu2_function_top_pane

0xa939,	// (0x0008b193) popup_vitu2_dropdown_list_window_ParamLimits

0xa939,	// (0x0008b193) popup_vitu2_dropdown_list_window

0xa959,	// (0x0008b1b3) popup_vitu2_match_list_window

0xb134,	// (0x0008b98e) cell_vitu2_function_top_pane_ParamLimits

0xb134,	// (0x0008b98e) cell_vitu2_function_top_pane

0xb154,	// (0x0008b9ae) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb154,	// (0x0008b9ae) cell_vitu2_function_top_pane_cp01

0xb172,	// (0x0008b9cc) cell_vitu2_function_top_wide_pane_ParamLimits

0xb172,	// (0x0008b9cc) cell_vitu2_function_top_wide_pane

0xa78c,	// (0x0008afe6) bg_button_pane_cp012

0xb190,	// (0x0008b9ea) cell_vitu2_function_top_pane_g1

0xb19f,	// (0x0008b9f9) bg_button_pane_cp013_ParamLimits

0xb19f,	// (0x0008b9f9) bg_button_pane_cp013

0xb1bb,	// (0x0008ba15) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb1bb,	// (0x0008ba15) cell_vitu2_function_top_wide_pane_g1

0xb1d3,	// (0x0008ba2d) bg_popup_sub_pane_cp20

0xb1e1,	// (0x0008ba3b) list_vitu2_match_list_pane

0x1c0e,	// (0x00082468) bg_popup_sub_pane_cp20_g1

0x1c16,	// (0x00082470) bg_popup_sub_pane_cp20_g2

0xdb69,	// (0x0008e3c3) bg_popup_sub_pane_cp20_g3

0x1c1e,	// (0x00082478) bg_popup_sub_pane_cp20_g4

0xdb49,	// (0x0008e3a3) bg_popup_sub_pane_cp20_g5

0x1e61,	// (0x000826bb) bg_popup_sub_pane_cp20_g6

0x1c2e,	// (0x00082488) bg_popup_sub_pane_cp20_g7

0x1c36,	// (0x00082490) bg_popup_sub_pane_cp20_g8

0x1c3e,	// (0x00082498) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x00090261) bg_popup_sub_pane_cp20_g

0xb1f9,	// (0x0008ba53) list_vitu2_match_list_item_pane_ParamLimits

0xb1f9,	// (0x0008ba53) list_vitu2_match_list_item_pane

0xb20b,	// (0x0008ba65) list_vitu2_match_list_item_pane_t1

0x5b7a,	// (0x000863d4) bg_popup_sub_pane_cp21

0xb245,	// (0x0008ba9f) grid_vitu2_dropdown_list_pane

0xb24d,	// (0x0008baa7) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb24d,	// (0x0008baa7) cell_vitu2_dropdown_list_char_pane

0xb272,	// (0x0008bacc) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb272,	// (0x0008bacc) cell_vitu2_dropdown_list_ctrl_pane

0x1e93,	// (0x000826ed) cell_vitu2_dropdown_list_char_pane_g1

0x1e8a,	// (0x000826e4) cell_vitu2_dropdown_list_char_pane_g2

0x1e81,	// (0x000826db) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa24,	// (0x0009027e) cell_vitu2_dropdown_list_char_pane_g

0xb2a0,	// (0x0008bafa) cell_vitu2_dropdown_list_char_pane_t1

0xb2ae,	// (0x0008bb08) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb2ae,	// (0x0008bb08) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb2be,	// (0x0008bb18) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb2be,	// (0x0008bb18) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb2cf,	// (0x0008bb29) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb2cf,	// (0x0008bb29) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb2df,	// (0x0008bb39) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb2df,	// (0x0008bb39) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa6a0,	// (0x0008aefa) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa6a0,	// (0x0008aefa) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa2b,	// (0x00090285) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa2b,	// (0x00090285) cell_vitu2_dropdown_list_ctrl_pane_g

0xb2f8,	// (0x0008bb52) aid_size_cell_gallery2_ParamLimits

0xb2f8,	// (0x0008bb52) aid_size_cell_gallery2

0xb306,	// (0x0008bb60) grid_gallery2_pane_ParamLimits

0xb306,	// (0x0008bb60) grid_gallery2_pane

0xb315,	// (0x0008bb6f) scroll_pane_cp029_ParamLimits

0xb315,	// (0x0008bb6f) scroll_pane_cp029

0xb321,	// (0x0008bb7b) cell_gallery2_pane_ParamLimits

0xb321,	// (0x0008bb7b) cell_gallery2_pane

0x1e9c,	// (0x000826f6) cell_gallery2_pane_g2

0xb34b,	// (0x0008bba5) cell_gallery2_pane_g3

0x1ea6,	// (0x00082700) cell_gallery2_pane_g4

0x1eae,	// (0x00082708) cell_gallery2_pane_g5

0xe1b3,	// (0x0008ea0d) grid_highlight_pane_cp10

0xa959,	// (0x0008b1b3) popup_vitu2_match_list_window_ParamLimits

0xa96d,	// (0x0008b1c7) popup_vitu2_query_window_ParamLimits

0xa96d,	// (0x0008b1c7) popup_vitu2_query_window

0x5b7a,	// (0x000863d4) bg_vitu2_candi_button_pane

0x1e93,	// (0x000826ed) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x1e8a,	// (0x000826e4) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x1e81,	// (0x000826db) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb353,	// (0x0008bbad) bg_button_pane_cp015

0xb365,	// (0x0008bbbf) bg_button_pane_cp016

0xb378,	// (0x0008bbd2) bg_button_pane_cp017

0x0c9c,	// (0x000814f6) bg_popup_sub_pane_cp22

0x1eb6,	// (0x00082710) popup_vitu2_query_window_g1

0xb3bd,	// (0x0008bc17) popup_vitu2_query_window_g2

0x0002,

0xfa36,	// (0x00090290) popup_vitu2_query_window_g

0xb3da,	// (0x0008bc34) popup_vitu2_query_window_t1_ParamLimits

0xb3da,	// (0x0008bc34) popup_vitu2_query_window_t1

0xb40d,	// (0x0008bc67) popup_vitu2_query_window_t2_ParamLimits

0xb40d,	// (0x0008bc67) popup_vitu2_query_window_t2

0xb41f,	// (0x0008bc79) popup_vitu2_query_window_t3_ParamLimits

0xb41f,	// (0x0008bc79) popup_vitu2_query_window_t3

0xb447,	// (0x0008bca1) popup_vitu2_query_window_t4_ParamLimits

0xb447,	// (0x0008bca1) popup_vitu2_query_window_t4

0xb46a,	// (0x0008bcc4) popup_vitu2_query_window_t5_ParamLimits

0xb46a,	// (0x0008bcc4) popup_vitu2_query_window_t5

0x0006,

0xfa3d,	// (0x00090297) popup_vitu2_query_window_t_ParamLimits

0xfa3d,	// (0x00090297) popup_vitu2_query_window_t

0x1d14,	// (0x0008256e) main_cset_text_pane

0xad71,	// (0x0008b5cb) aid_area_touch_slider_ParamLimits

0xad8d,	// (0x0008b5e7) cset_slider_pane_ParamLimits

0xadb7,	// (0x0008b611) main_cset_slider_pane_g1_ParamLimits

0xadcc,	// (0x0008b626) main_cset_slider_pane_g2_ParamLimits

0x1d35,	// (0x0008258f) main_cset_slider_pane_g3_ParamLimits

0x1d35,	// (0x0008258f) main_cset_slider_pane_g3

0xade1,	// (0x0008b63b) main_cset_slider_pane_g4_ParamLimits

0xade1,	// (0x0008b63b) main_cset_slider_pane_g4

0xadf0,	// (0x0008b64a) main_cset_slider_pane_g5_ParamLimits

0xadf0,	// (0x0008b64a) main_cset_slider_pane_g5

0xadfc,	// (0x0008b656) main_cset_slider_pane_g6_ParamLimits

0xadfc,	// (0x0008b656) main_cset_slider_pane_g6

0xf990,	// (0x000901ea) main_cset_slider_pane_g_ParamLimits

0x1d65,	// (0x000825bf) main_cset_slider_pane_t1_ParamLimits

0xae88,	// (0x0008b6e2) main_cset_slider_pane_t2_ParamLimits

0xaea2,	// (0x0008b6fc) main_cset_slider_pane_t3_ParamLimits

0xaebc,	// (0x0008b716) main_cset_slider_pane_t4_ParamLimits

0xaed6,	// (0x0008b730) main_cset_slider_pane_t5_ParamLimits

0xaef0,	// (0x0008b74a) main_cset_slider_pane_t6_ParamLimits

0xaf05,	// (0x0008b75f) main_cset_slider_pane_t7_ParamLimits

0xaf2f,	// (0x0008b789) main_cset_slider_pane_t8_ParamLimits

0xaf2f,	// (0x0008b789) main_cset_slider_pane_t8

0xaf57,	// (0x0008b7b1) main_cset_slider_pane_t9_ParamLimits

0xaf57,	// (0x0008b7b1) main_cset_slider_pane_t9

0xaf7f,	// (0x0008b7d9) main_cset_slider_pane_t10_ParamLimits

0xaf7f,	// (0x0008b7d9) main_cset_slider_pane_t10

0xafa7,	// (0x0008b801) main_cset_slider_pane_t11_ParamLimits

0xafa7,	// (0x0008b801) main_cset_slider_pane_t11

0xafcf,	// (0x0008b829) main_cset_slider_pane_t12_ParamLimits

0xafcf,	// (0x0008b829) main_cset_slider_pane_t12

0xafec,	// (0x0008b846) main_cset_slider_pane_t13_ParamLimits

0xafec,	// (0x0008b846) main_cset_slider_pane_t13

0xf9b5,	// (0x0009020f) main_cset_slider_pane_t_ParamLimits

0x0164,	// (0x000809be) bg_popup_sub_pane_cp011

0x1ec2,	// (0x0008271c) main_cset_text_pane_g1

0x1eca,	// (0x00082724) main_cset_text_pane_t1

0x1ed8,	// (0x00082732) main_cset_text_pane_t2

0x1ee6,	// (0x00082740) main_cset_text_pane_t3

0x1ef4,	// (0x0008274e) main_cset_text_pane_t4

0x1f02,	// (0x0008275c) main_cset_text_pane_t5

0x1f10,	// (0x0008276a) main_cset_text_pane_t6

0x1f1e,	// (0x00082778) main_cset_text_pane_t7

0x0006,

0xfa4c,	// (0x000902a6) main_cset_text_pane_t

0x0164,	// (0x000809be) main_cam4_burst_pane

0x0164,	// (0x000809be) main_cam5_pane

0xacba,	// (0x0008b514) bg_button_pane_cp019

0xacc3,	// (0x0008b51d) bg_button_pane_cp020

0x1d41,	// (0x0008259b) main_cset_slider_pane_g7_ParamLimits

0x1d41,	// (0x0008259b) main_cset_slider_pane_g7

0x1d4d,	// (0x000825a7) main_cset_slider_pane_g8_ParamLimits

0x1d4d,	// (0x000825a7) main_cset_slider_pane_g8

0xae10,	// (0x0008b66a) main_cset_slider_pane_g9_ParamLimits

0xae10,	// (0x0008b66a) main_cset_slider_pane_g9

0xae1c,	// (0x0008b676) main_cset_slider_pane_g10_ParamLimits

0xae1c,	// (0x0008b676) main_cset_slider_pane_g10

0xae28,	// (0x0008b682) main_cset_slider_pane_g11_ParamLimits

0xae28,	// (0x0008b682) main_cset_slider_pane_g11

0xae34,	// (0x0008b68e) main_cset_slider_pane_g12_ParamLimits

0xae34,	// (0x0008b68e) main_cset_slider_pane_g12

0xae40,	// (0x0008b69a) main_cset_slider_pane_g13_ParamLimits

0xae40,	// (0x0008b69a) main_cset_slider_pane_g13

0xae4c,	// (0x0008b6a6) main_cset_slider_pane_g14_ParamLimits

0xae4c,	// (0x0008b6a6) main_cset_slider_pane_g14

0xae58,	// (0x0008b6b2) main_cset_slider_pane_g15_ParamLimits

0xae58,	// (0x0008b6b2) main_cset_slider_pane_g15

0x1d93,	// (0x000825ed) main_cset_slider_pane_t14_ParamLimits

0x1d93,	// (0x000825ed) main_cset_slider_pane_t14

0x1dcc,	// (0x00082626) main_cset_slider_pane_t15_ParamLimits

0x1dcc,	// (0x00082626) main_cset_slider_pane_t15

0xb4e3,	// (0x0008bd3d) aid_cam4_burst_size_cell_ParamLimits

0xb4e3,	// (0x0008bd3d) aid_cam4_burst_size_cell

0xb4ff,	// (0x0008bd59) grid_cam4_burst_pane_ParamLimits

0xb4ff,	// (0x0008bd59) grid_cam4_burst_pane

0xb531,	// (0x0008bd8b) linegrid_cam4_burst_pane_ParamLimits

0xb531,	// (0x0008bd8b) linegrid_cam4_burst_pane

0xb54f,	// (0x0008bda9) scroll_pane_cp30_ParamLimits

0xb54f,	// (0x0008bda9) scroll_pane_cp30

0xb55b,	// (0x0008bdb5) cell_cam4_burst_pane_ParamLimits

0xb55b,	// (0x0008bdb5) cell_cam4_burst_pane

0x1f38,	// (0x00082792) linegrid_cam4_burst_pane_g1_ParamLimits

0x1f38,	// (0x00082792) linegrid_cam4_burst_pane_g1

0xb59b,	// (0x0008bdf5) linegrid_cam4_burst_pane_g2_ParamLimits

0xb59b,	// (0x0008bdf5) linegrid_cam4_burst_pane_g2

0x1f45,	// (0x0008279f) linegrid_cam4_burst_pane_g3_ParamLimits

0x1f45,	// (0x0008279f) linegrid_cam4_burst_pane_g3

0x0002,

0xfa5b,	// (0x000902b5) linegrid_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x000902b5) linegrid_cam4_burst_pane_g

0xb5ac,	// (0x0008be06) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb5ac,	// (0x0008be06) linegrid_cam4_burst_pane_g3_copy1

0x1f52,	// (0x000827ac) linegrid_cam4_burst_pane_g4_ParamLimits

0x1f52,	// (0x000827ac) linegrid_cam4_burst_pane_g4

0xb5c6,	// (0x0008be20) linegrid_cam4_burst_pane_g5_ParamLimits

0xb5c6,	// (0x0008be20) linegrid_cam4_burst_pane_g5

0xb5d7,	// (0x0008be31) linegrid_cam4_burst_pane_g6_ParamLimits

0xb5d7,	// (0x0008be31) linegrid_cam4_burst_pane_g6

0x1f5f,	// (0x000827b9) linegrid_cam4_burst_pane_g7_ParamLimits

0x1f5f,	// (0x000827b9) linegrid_cam4_burst_pane_g7

0xb5ee,	// (0x0008be48) cell_cam4_burst_pane_g1

0x1f78,	// (0x000827d2) main_cam5_pane_t1_ParamLimits

0x1f78,	// (0x000827d2) main_cam5_pane_t1

0x1f8a,	// (0x000827e4) main_cam5_pane_t2_ParamLimits

0x1f8a,	// (0x000827e4) main_cam5_pane_t2

0x1f9c,	// (0x000827f6) main_cam5_pane_t3_ParamLimits

0x1f9c,	// (0x000827f6) main_cam5_pane_t3

0x1fae,	// (0x00082808) main_cam5_pane_t4_ParamLimits

0x1fae,	// (0x00082808) main_cam5_pane_t4

0x1fc6,	// (0x00082820) main_cam5_pane_t5_ParamLimits

0x1fc6,	// (0x00082820) main_cam5_pane_t5

0x1fda,	// (0x00082834) main_cam5_pane_t6_ParamLimits

0x1fda,	// (0x00082834) main_cam5_pane_t6

0x1fee,	// (0x00082848) main_cam5_pane_t7_ParamLimits

0x1fee,	// (0x00082848) main_cam5_pane_t7

0x2000,	// (0x0008285a) main_cam5_pane_t8_ParamLimits

0x2000,	// (0x0008285a) main_cam5_pane_t8

0x201e,	// (0x00082878) main_cam5_pane_t9_ParamLimits

0x201e,	// (0x00082878) main_cam5_pane_t9

0x2030,	// (0x0008288a) main_cam5_pane_t10_ParamLimits

0x2030,	// (0x0008288a) main_cam5_pane_t10

0x2042,	// (0x0008289c) main_cam5_pane_t11_ParamLimits

0x2042,	// (0x0008289c) main_cam5_pane_t11

0x2056,	// (0x000828b0) main_cam5_pane_t12_ParamLimits

0x2056,	// (0x000828b0) main_cam5_pane_t12

0x206d,	// (0x000828c7) main_cam5_pane_t13_ParamLimits

0x206d,	// (0x000828c7) main_cam5_pane_t13

0x000c,

0xfa67,	// (0x000902c1) main_cam5_pane_t_ParamLimits

0xfa67,	// (0x000902c1) main_cam5_pane_t

0x5824,	// (0x0008607e) popup_scut_keymap_window_ParamLimits

0x5824,	// (0x0008607e) popup_scut_keymap_window

0xb601,	// (0x0008be5b) aid_size_cell_brow_shortcut

0xe1b3,	// (0x0008ea0d) bg_popup_window_pane_cp010

0xb60d,	// (0x0008be67) grid_scut_pane

0xb619,	// (0x0008be73) cell_scut_pane_ParamLimits

0xb619,	// (0x0008be73) cell_scut_pane

0xb634,	// (0x0008be8e) cell_scut_pane_g1

0x2090,	// (0x000828ea) cell_scut_pane_t1

0x209f,	// (0x000828f9) cell_scut_pane_t2

0xb63d,	// (0x0008be97) cell_scut_pane_t3

0x0002,

0xfa82,	// (0x000902dc) cell_scut_pane_t

0x9429,	// (0x00089c83) main_mup3_pane_g8_ParamLimits

0x9429,	// (0x00089c83) main_mup3_pane_g8

0xa887,	// (0x0008b0e1) area_vitu2_query_pane_ParamLimits

0xa887,	// (0x0008b0e1) area_vitu2_query_pane

0xb38b,	// (0x0008bbe5) input_focus_pane_cp08

0x20ae,	// (0x00082908) area_vitu2_query_pane_g1

0xb64b,	// (0x0008bea5) area_vitu2_query_pane_g2

0x0001,

0xfa89,	// (0x000902e3) area_vitu2_query_pane_g

0xb65c,	// (0x0008beb6) area_vitu2_query_pane_t1_ParamLimits

0xb65c,	// (0x0008beb6) area_vitu2_query_pane_t1

0xb670,	// (0x0008beca) area_vitu2_query_pane_t2_ParamLimits

0xb670,	// (0x0008beca) area_vitu2_query_pane_t2

0xb684,	// (0x0008bede) area_vitu2_query_pane_t3_ParamLimits

0xb684,	// (0x0008bede) area_vitu2_query_pane_t3

0x20ba,	// (0x00082914) area_vitu2_query_pane_t4_ParamLimits

0x20ba,	// (0x00082914) area_vitu2_query_pane_t4

0x20e2,	// (0x0008293c) area_vitu2_query_pane_t5_ParamLimits

0x20e2,	// (0x0008293c) area_vitu2_query_pane_t5

0x210a,	// (0x00082964) area_vitu2_query_pane_t6_ParamLimits

0x210a,	// (0x00082964) area_vitu2_query_pane_t6

0x0006,

0xfa8e,	// (0x000902e8) area_vitu2_query_pane_t_ParamLimits

0xfa8e,	// (0x000902e8) area_vitu2_query_pane_t

0xb6ac,	// (0x0008bf06) bg_button_pane_cp018

0xb6ba,	// (0x0008bf14) bg_button_pane_cp021

0xb6c6,	// (0x0008bf20) bg_button_pane_cp022

0xb6d7,	// (0x0008bf31) input_focus_pane_cp09

0x7894,	// (0x000880ee) aid_size_touch_mv_arrow_left

0x78bf,	// (0x00088119) aid_size_touch_mv_arrow_right

0xae70,	// (0x0008b6ca) main_cset_slider_pane_g16_ParamLimits

0xae70,	// (0x0008b6ca) main_cset_slider_pane_g16

0xae7c,	// (0x0008b6d6) main_cset_slider_pane_g17_ParamLimits

0xae7c,	// (0x0008b6d6) main_cset_slider_pane_g17

0xb5ee,	// (0x0008be48) cell_cam4_burst_pane_g1_ParamLimits

0x0164,	// (0x000809be) compa_mode_pane

0xb0b5,	// (0x0008b90f) popup_vtel_slider_window_g3_ParamLimits

0xb0b5,	// (0x0008b90f) popup_vtel_slider_window_g3

0xb0c9,	// (0x0008b923) popup_vtel_slider_window_g4_ParamLimits

0xb0c9,	// (0x0008b923) popup_vtel_slider_window_g4

0xb0dd,	// (0x0008b937) popup_vtel_slider_window_t1_ParamLimits

0xb0dd,	// (0x0008b937) popup_vtel_slider_window_t1

0x0164,	// (0x000809be) main_cl_pane

0x0cc8,	// (0x00081522) popup_imed_adjust2_window_ParamLimits

0x0c9c,	// (0x000814f6) bg_tb_trans_pane_cp05_ParamLimits

0x16c4,	// (0x00081f1e) popup_imed_adjust2_window_g1_ParamLimits

0x16d3,	// (0x00081f2d) popup_imed_adjust2_window_g2_ParamLimits

0x16d3,	// (0x00081f2d) popup_imed_adjust2_window_g2

0x16df,	// (0x00081f39) popup_imed_adjust2_window_g3_ParamLimits

0x16df,	// (0x00081f39) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x00090053) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x00090053) popup_imed_adjust2_window_g

0x16eb,	// (0x00081f45) popup_imed_adjust2_window_t1_ParamLimits

0x1703,	// (0x00081f5d) slider_imed_adjust_pane_ParamLimits

0x1717,	// (0x00081f71) slider_imed_adjust_pane_g1_ParamLimits

0x1727,	// (0x00081f81) slider_imed_adjust_pane_g2_ParamLimits

0x1737,	// (0x00081f91) slider_imed_adjust_pane_g3_ParamLimits

0x1748,	// (0x00081fa2) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x0009005a) slider_imed_adjust_pane_g_ParamLimits

0xa5b3,	// (0x0008ae0d) aid_touch_area_cam4_ParamLimits

0xa5b3,	// (0x0008ae0d) aid_touch_area_cam4

0xa5c3,	// (0x0008ae1d) battery_pane_cp01

0xa64a,	// (0x0008aea4) main_camera4_pane_g6_ParamLimits

0xa64a,	// (0x0008aea4) main_camera4_pane_g6

0xa668,	// (0x0008aec2) main_camera4_pane_t2_ParamLimits

0xa668,	// (0x0008aec2) main_camera4_pane_t2

0x0001,

0xf903,	// (0x0009015d) main_camera4_pane_t_ParamLimits

0xf903,	// (0x0009015d) main_camera4_pane_t

0xa6fa,	// (0x0008af54) aid_touch_area_vid4_ParamLimits

0xa6fa,	// (0x0008af54) aid_touch_area_vid4

0xa73a,	// (0x0008af94) main_video4_pane_g5_ParamLimits

0xa73a,	// (0x0008af94) main_video4_pane_g5

0xa75e,	// (0x0008afb8) vid4_progress_pane_ParamLimits

0xa75e,	// (0x0008afb8) vid4_progress_pane

0x1d59,	// (0x000825b3) main_cset_slider_pane_g18_ParamLimits

0x1d59,	// (0x000825b3) main_cset_slider_pane_g18

0x1f6c,	// (0x000827c6) cell_cam4_burst_pane_g2_ParamLimits

0x1f6c,	// (0x000827c6) cell_cam4_burst_pane_g2

0x0001,

0xfa62,	// (0x000902bc) cell_cam4_burst_pane_g_ParamLimits

0xfa62,	// (0x000902bc) cell_cam4_burst_pane_g

0xb6e8,	// (0x0008bf42) bg_cl_pane_ParamLimits

0xb6e8,	// (0x0008bf42) bg_cl_pane

0xb6f4,	// (0x0008bf4e) cl_header_pane_ParamLimits

0xb6f4,	// (0x0008bf4e) cl_header_pane

0xb700,	// (0x0008bf5a) cl_listscroll_pane_ParamLimits

0xb700,	// (0x0008bf5a) cl_listscroll_pane

0x2156,	// (0x000829b0) bg_cl_pane_g1

0x215e,	// (0x000829b8) bg_cl_pane_g2

0x2166,	// (0x000829c0) bg_cl_pane_g3

0x216e,	// (0x000829c8) bg_cl_pane_g4

0x2176,	// (0x000829d0) bg_cl_pane_g5

0x217e,	// (0x000829d8) bg_cl_pane_g6

0x2186,	// (0x000829e0) bg_cl_pane_g7

0x218e,	// (0x000829e8) bg_cl_pane_g8

0x2196,	// (0x000829f0) bg_cl_pane_g9

0x0008,

0xfa9d,	// (0x000902f7) bg_cl_pane_g

0xb70c,	// (0x0008bf66) aid_height_cl_leading_ParamLimits

0xb70c,	// (0x0008bf66) aid_height_cl_leading

0xb718,	// (0x0008bf72) aid_height_cl_text_ParamLimits

0xb718,	// (0x0008bf72) aid_height_cl_text

0x1b92,	// (0x000823ec) bg_cl_header_pane_ParamLimits

0x1b92,	// (0x000823ec) bg_cl_header_pane

0xb730,	// (0x0008bf8a) cl_header_pane_g1_ParamLimits

0xb730,	// (0x0008bf8a) cl_header_pane_g1

0xb73d,	// (0x0008bf97) cl_header_pane_t1_ParamLimits

0xb73d,	// (0x0008bf97) cl_header_pane_t1

0x219e,	// (0x000829f8) cl_list_pane

0x1d2c,	// (0x00082586) hc_scroll_pane_cp01

0xdb49,	// (0x0008e3a3) bg_cl_header_pane_g1

0x1c0e,	// (0x00082468) bg_cl_header_pane_g2

0xdb69,	// (0x0008e3c3) bg_cl_header_pane_g3

0x1c1e,	// (0x00082478) bg_cl_header_pane_g4

0x1c16,	// (0x00082470) bg_cl_header_pane_g5

0x1e61,	// (0x000826bb) bg_cl_header_pane_g6

0x1c36,	// (0x00082490) bg_cl_header_pane_g7

0x1c3e,	// (0x00082498) bg_cl_header_pane_g8

0x1c2e,	// (0x00082488) bg_cl_header_pane_g9

0x0008,

0xfab0,	// (0x0009030a) bg_cl_header_pane_g

0xb74f,	// (0x0008bfa9) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb74f,	// (0x0008bfa9) hc_cl_list_double_graphic_heading_pane

0xb75f,	// (0x0008bfb9) hc_cl_list_single_graphic_pane_ParamLimits

0xb75f,	// (0x0008bfb9) hc_cl_list_single_graphic_pane

0xb771,	// (0x0008bfcb) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb771,	// (0x0008bfcb) hc_cl_list_single_graphic_pane_g1

0xb77d,	// (0x0008bfd7) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb77d,	// (0x0008bfd7) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac3,	// (0x0009031d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac3,	// (0x0009031d) hc_cl_list_single_graphic_pane_g

0xb791,	// (0x0008bfeb) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb791,	// (0x0008bfeb) hc_cl_list_single_graphic_pane_t1

0xb771,	// (0x0008bfcb) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb771,	// (0x0008bfcb) hc_cl_list_double_graphic_heading_pane_g1

0xb7a6,	// (0x0008c000) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb7a6,	// (0x0008c000) hc_cl_list_double_graphic_heading_pane_g2

0xb7ba,	// (0x0008c014) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb7ba,	// (0x0008c014) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac8,	// (0x00090322) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac8,	// (0x00090322) hc_cl_list_double_graphic_heading_pane_g

0xb7ce,	// (0x0008c028) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb7ce,	// (0x0008c028) hc_cl_list_double_graphic_heading_pane_t1

0xb7e3,	// (0x0008c03d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb7e3,	// (0x0008c03d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfacf,	// (0x00090329) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfacf,	// (0x00090329) hc_cl_list_double_graphic_heading_pane_t

0xb80a,	// (0x0008c064) vid4_progress_pane_g1

0xb81b,	// (0x0008c075) vid4_progress_pane_g2

0x7f94,	// (0x000887ee) vid4_progress_pane_g3

0xa6c6,	// (0x0008af20) vid4_progress_pane_g4

0x0004,

0xfad4,	// (0x0009032e) vid4_progress_pane_g

0xb82d,	// (0x0008c087) vid4_progress_pane_t1

0xb842,	// (0x0008c09c) vid4_progress_pane_t2

0x0002,

0xfadf,	// (0x00090339) vid4_progress_pane_t

0xb871,	// (0x0008c0cb) wait_bar_pane_cp07

0x0fbe,	// (0x00081818) blid_firmament_pane_ParamLimits

0x1001,	// (0x0008185b) popup_blid_sat_info2_window_g1

0x1025,	// (0x0008187f) popup_blid_sat_info2_window_t3

0x1033,	// (0x0008188d) popup_blid_sat_info2_window_t4

0x1041,	// (0x0008189b) popup_blid_sat_info2_window_t5

0x104f,	// (0x000818a9) popup_blid_sat_info2_window_t6

0x105f,	// (0x000818b9) popup_blid_sat_info2_window_t7

0x106d,	// (0x000818c7) popup_blid_sat_info2_window_t8

0x107b,	// (0x000818d5) popup_blid_sat_info2_window_t9

0x1089,	// (0x000818e3) popup_blid_sat_info2_window_t10

0x1151,	// (0x000819ab) aid_firma_cardinal_ParamLimits

0x1165,	// (0x000819bf) blid_firmament_pane_t1_ParamLimits

0x117c,	// (0x000819d6) blid_firmament_pane_t2_ParamLimits

0x1193,	// (0x000819ed) blid_firmament_pane_t3_ParamLimits

0x11aa,	// (0x00081a04) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x0008ff4c) blid_firmament_pane_t_ParamLimits

0x11c1,	// (0x00081a1b) blid_sat_info_pane_ParamLimits

0x01dd,	// (0x00080a37) main_cam_set_pane_ParamLimits

0x9bc4,	// (0x0008a41e) aid_size_cell_colour_35_ParamLimits

0x9bde,	// (0x0008a438) aid_size_cell_colour_112_ParamLimits

0x9bf5,	// (0x0008a44f) aid_size_cell_effect_ParamLimits

0x01dd,	// (0x00080a37) bg_tb_trans_pane_cp02_ParamLimits

0xf0db,	// (0x0008f935) heading_imed_pane_ParamLimits

0x9c0f,	// (0x0008a469) listscroll_imed_pane_ParamLimits

0xebec,	// (0x0008f446) popup_call2_audio_first_window_g5_ParamLimits

0xebec,	// (0x0008f446) popup_call2_audio_first_window_g5

0xa31e,	// (0x0008ab78) aid_size_touch_image3_arrow_left_ParamLimits

0xa31e,	// (0x0008ab78) aid_size_touch_image3_arrow_left

0xa334,	// (0x0008ab8e) aid_size_touch_image3_arrow_right_ParamLimits

0xa334,	// (0x0008ab8e) aid_size_touch_image3_arrow_right

0xb85a,	// (0x0008c0b4) vid4_progress_pane_t3

0x9eba,	// (0x0008a714) main_hwr_training_symbol_option_pane_ParamLimits

0x9eba,	// (0x0008a714) main_hwr_training_symbol_option_pane

0x19b3,	// (0x0008220d) popup_hwr_training_preview_window_ParamLimits

0x19b3,	// (0x0008220d) popup_hwr_training_preview_window

0x9f1b,	// (0x0008a775) hwr_training_navi_pane_g5_ParamLimits

0x9f1b,	// (0x0008a775) hwr_training_navi_pane_g5

0x1bfc,	// (0x00082456) popup_char_count_window

0xb1d3,	// (0x0008ba2d) bg_popup_sub_pane_cp20_ParamLimits

0xb1e1,	// (0x0008ba3b) list_vitu2_match_list_pane_ParamLimits

0xb1ed,	// (0x0008ba47) vitu2_page_scroll_pane_ParamLimits

0xb1ed,	// (0x0008ba47) vitu2_page_scroll_pane

0x21f0,	// (0x00082a4a) list_single_hwr_training_symbol_option_pane_ParamLimits

0x21f0,	// (0x00082a4a) list_single_hwr_training_symbol_option_pane

0x2203,	// (0x00082a5d) list_single_hwr_training_symbol_option_pane_g1

0x220b,	// (0x00082a65) list_single_hwr_training_symbol_option_pane_t1

0x2219,	// (0x00082a73) bg_button_pane_cp023

0x2222,	// (0x00082a7c) bg_button_pane_cp024

0xb883,	// (0x0008c0dd) vitu2_page_scroll_pane_g1

0xb88b,	// (0x0008c0e5) vitu2_page_scroll_pane_g2

0x0001,

0xfae6,	// (0x00090340) vitu2_page_scroll_pane_g

0xb895,	// (0x0008c0ef) vitu2_page_scroll_pane_t1

0x0eda,	// (0x00081734) popup_char_count_window_g1

0x2255,	// (0x00082aaf) popup_char_count_window_g2

0x225e,	// (0x00082ab8) popup_char_count_window_g3

0x0002,

0xfaeb,	// (0x00090345) popup_char_count_window_g

0x2267,	// (0x00082ac1) popup_char_count_window_t1

0x0164,	// (0x000809be) main_vded2_pane

0x16b0,	// (0x00081f0a) aid_size_cell_imed_line

0x16ba,	// (0x00081f14) grid_imed_line_width_pane

0xa7da,	// (0x0008b034) vid4_indicators_pane_g4

0x2275,	// (0x00082acf) cell_imed_line_width_pane_ParamLimits

0x2275,	// (0x00082acf) cell_imed_line_width_pane

0x228b,	// (0x00082ae5) cell_imed_line_width_pane_g1

0x2294,	// (0x00082aee) cell_imed_line_width_pane_g2

0x0001,

0xfaf2,	// (0x0009034c) cell_imed_line_width_pane_g

0xb8a4,	// (0x0008c0fe) main_vded2_pane_g1_ParamLimits

0xb8a4,	// (0x0008c0fe) main_vded2_pane_g1

0xb8b3,	// (0x0008c10d) main_vded2_pane_g2_ParamLimits

0xb8b3,	// (0x0008c10d) main_vded2_pane_g2

0x0001,

0xfaf7,	// (0x00090351) main_vded2_pane_g_ParamLimits

0xfaf7,	// (0x00090351) main_vded2_pane_g

0xb8c1,	// (0x0008c11b) vded2_slider_pane_ParamLimits

0xb8c1,	// (0x0008c11b) vded2_slider_pane

0xb8ce,	// (0x0008c128) aid_size_touch_vded2_end

0xb8d8,	// (0x0008c132) aid_size_touch_vded2_playhead

0x229c,	// (0x00082af6) aid_size_touch_vded2_start

0x22a4,	// (0x00082afe) vded2_slider_bg_pane

0x22ad,	// (0x00082b07) vded2_slider_pane_g1

0x22b6,	// (0x00082b10) vded2_slider_pane_g2

0xb8e0,	// (0x0008c13a) vded2_slider_pane_g3

0x0002,

0xfafc,	// (0x00090356) vded2_slider_pane_g

0x22be,	// (0x00082b18) vded2_slider_bg_pane_g1

0x22c7,	// (0x00082b21) vded2_slider_bg_pane_g2

0x22d0,	// (0x00082b2a) vded2_slider_bg_pane_g3

0x0002,

0xf7c2,	// (0x0009001c) vded2_slider_bg_pane_g

0x7fac,	// (0x00088806) aid_postcard_touch_down_pane_ParamLimits

0x7fac,	// (0x00088806) aid_postcard_touch_down_pane

0x7fbc,	// (0x00088816) aid_postcard_touch_up_pane_ParamLimits

0x7fbc,	// (0x00088816) aid_postcard_touch_up_pane

0x0164,	// (0x000809be) main_blid2_pane

0x0caa,	// (0x00081504) popup_blid2_search_window

0x0164,	// (0x000809be) blid2_gps_pane

0x0164,	// (0x000809be) blid2_navig_pane

0x0164,	// (0x000809be) blid2_search_pane

0x0164,	// (0x000809be) blid2_tripm_pane

0xb8e9,	// (0x0008c143) blid2_search_pane_g1_ParamLimits

0xb8e9,	// (0x0008c143) blid2_search_pane_g1

0xb8f5,	// (0x0008c14f) blid2_search_pane_t1_ParamLimits

0xb8f5,	// (0x0008c14f) blid2_search_pane_t1

0xb907,	// (0x0008c161) aid_size_cell_blid2_gps_ParamLimits

0xb907,	// (0x0008c161) aid_size_cell_blid2_gps

0xb917,	// (0x0008c171) blid2_gps_pane_g1_ParamLimits

0xb917,	// (0x0008c171) blid2_gps_pane_g1

0xb923,	// (0x0008c17d) grid_blid2_satellite_pane_ParamLimits

0xb923,	// (0x0008c17d) grid_blid2_satellite_pane

0xb931,	// (0x0008c18b) blid2_navig_pane_g1_ParamLimits

0xb931,	// (0x0008c18b) blid2_navig_pane_g1

0xb93d,	// (0x0008c197) blid2_navig_pane_t1_ParamLimits

0xb93d,	// (0x0008c197) blid2_navig_pane_t1

0xb94f,	// (0x0008c1a9) blid2_navig_pane_t2_ParamLimits

0xb94f,	// (0x0008c1a9) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0009035d) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0009035d) blid2_navig_pane_t

0xb961,	// (0x0008c1bb) blid2_navig_ring_pane_ParamLimits

0xb961,	// (0x0008c1bb) blid2_navig_ring_pane

0xb971,	// (0x0008c1cb) blid2_speed_pane_ParamLimits

0xb971,	// (0x0008c1cb) blid2_speed_pane

0xb97d,	// (0x0008c1d7) blid2_tripm_pane_g1_ParamLimits

0xb97d,	// (0x0008c1d7) blid2_tripm_pane_g1

0xb98d,	// (0x0008c1e7) blid2_tripm_pane_g2_ParamLimits

0xb98d,	// (0x0008c1e7) blid2_tripm_pane_g2

0xb999,	// (0x0008c1f3) blid2_tripm_pane_g3_ParamLimits

0xb999,	// (0x0008c1f3) blid2_tripm_pane_g3

0xb9a5,	// (0x0008c1ff) blid2_tripm_pane_g4_ParamLimits

0xb9a5,	// (0x0008c1ff) blid2_tripm_pane_g4

0xb9b1,	// (0x0008c20b) blid2_tripm_pane_g5_ParamLimits

0xb9b1,	// (0x0008c20b) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x00090362) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x00090362) blid2_tripm_pane_g

0xb9cd,	// (0x0008c227) blid2_tripm_pane_t1_ParamLimits

0xb9cd,	// (0x0008c227) blid2_tripm_pane_t1

0xb9df,	// (0x0008c239) blid2_tripm_pane_t2_ParamLimits

0xb9df,	// (0x0008c239) blid2_tripm_pane_t2

0xb9f1,	// (0x0008c24b) blid2_tripm_pane_t3_ParamLimits

0xb9f1,	// (0x0008c24b) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0009036f) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0009036f) blid2_tripm_pane_t

0xba23,	// (0x0008c27d) cell_blid2_satellite_pane_ParamLimits

0xba23,	// (0x0008c27d) cell_blid2_satellite_pane

0xba41,	// (0x0008c29b) cell_blid2_satellite_pane_g1

0x22d9,	// (0x00082b33) cell_blid2_satellite_pane_t1

0x11d1,	// (0x00081a2b) blid2_speed_pane_g1

0x22e7,	// (0x00082b41) blid2_speed_pane_t1

0x22f5,	// (0x00082b4f) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x00090378) blid2_speed_pane_t

0x11d1,	// (0x00081a2b) blid2_navig_ring_pane_g1

0xba4a,	// (0x0008c2a4) blid2_navig_ring_pane_g2

0xba52,	// (0x0008c2ac) blid2_navig_ring_pane_g3

0xba5a,	// (0x0008c2b4) blid2_navig_ring_pane_g4

0xba62,	// (0x0008c2bc) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0009037d) blid2_navig_ring_pane_g

0x0164,	// (0x000809be) bg_popup_window_pane_cp011

0x2303,	// (0x00082b5d) popup_blid2_search_window_g1

0x230b,	// (0x00082b65) popup_blid2_search_window_t1

0x2319,	// (0x00082b73) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x00090388) popup_blid2_search_window_t

0xda58,	// (0x0008e2b2) main_browser_pane_g1

0x4514,	// (0x00084d6e) main_browser_pane_ParamLimits

0xa78c,	// (0x0008afe6) bg_button_pane_cp011_ParamLimits

0xaa83,	// (0x0008b2dd) cell_vitu2_function_pane_g1_ParamLimits

0x0c9c,	// (0x000814f6) bg_popup_sub_pane_cp22_ParamLimits

0xb38b,	// (0x0008bbe5) input_focus_pane_cp08_ParamLimits

0xb3a2,	// (0x0008bbfc) popup_vitu2_query_button_pane_ParamLimits

0xb3a2,	// (0x0008bbfc) popup_vitu2_query_button_pane

0xb3b3,	// (0x0008bc0d) popup_vitu2_query_input_button_pane

0x1eb6,	// (0x00082710) popup_vitu2_query_window_g1_ParamLimits

0xb3bd,	// (0x0008bc17) popup_vitu2_query_window_g2_ParamLimits

0xfa36,	// (0x00090290) popup_vitu2_query_window_g_ParamLimits

0x0164,	// (0x000809be) bg_button_pane_cp026

0xba6a,	// (0x0008c2c4) popup_vitu2_query_input_button_pane_g1

0x0164,	// (0x000809be) bg_button_pane_cp025

0x2327,	// (0x00082b81) popup_vitu2_query_button_pane_t1

0x910e,	// (0x00089968) main_mp3_pane_t6

0x911e,	// (0x00089978) popup_slider_window_cp01

0xa6ae,	// (0x0008af08) cam4_battery_pane

0xa79a,	// (0x0008aff4) cam4_battery_pane_cp02

0xb7f8,	// (0x0008c052) cam4_battery_pane_cp01

0xb802,	// (0x0008c05c) cam4_battery_pane_cp03

0x2335,	// (0x00082b8f) cam4_battery_pane_g1

0x11d1,	// (0x00081a2b) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0009038d) cam4_battery_pane_g

0x1097,	// (0x000818f1) popup_blid_sat_info2_window_t11

0x7894,	// (0x000880ee) aid_size_touch_mv_arrow_left_ParamLimits

0x78bf,	// (0x00088119) aid_size_touch_mv_arrow_right_ParamLimits

0xe113,	// (0x0008e96d) navi_pane_g1_ParamLimits

0x78fe,	// (0x00088158) navi_pane_g2_ParamLimits

0x792c,	// (0x00088186) navi_pane_g3_ParamLimits

0xf404,	// (0x0008fc5e) navi_pane_g_ParamLimits

0x7986,	// (0x000881e0) navi_pane_mv_t1_ParamLimits

0x9c1b,	// (0x0008a475) grid_imed_effect_pane_ParamLimits

0x65e7,	// (0x00086e41) aid_placing_vt_slider_lsc

0xd9a3,	// (0x0008e1fd) aid_placing_vt_slider_prt

0x01dd,	// (0x00080a37) bg_tb_trans_pane_cp01_ParamLimits

0x1321,	// (0x00081b7b) popup_image_details_window_g1_ParamLimits

0x1334,	// (0x00081b8e) popup_image_details_window_g2_ParamLimits

0x1349,	// (0x00081ba3) popup_image_details_window_g3_ParamLimits

0x1349,	// (0x00081ba3) popup_image_details_window_g3

0xf737,	// (0x0008ff91) popup_image_details_window_g_ParamLimits

0x135d,	// (0x00081bb7) popup_image_details_window_t1_ParamLimits

0x136f,	// (0x00081bc9) popup_image_details_window_t2_ParamLimits

0x1388,	// (0x00081be2) popup_image_details_window_t3_ParamLimits

0x139c,	// (0x00081bf6) popup_image_details_window_t4_ParamLimits

0x13b7,	// (0x00081c11) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x0008ff98) popup_image_details_window_t_ParamLimits

0xb724,	// (0x0008bf7e) cl_header_name_pane_ParamLimits

0xb724,	// (0x0008bf7e) cl_header_name_pane

0xba72,	// (0x0008c2cc) cl_header_name_pane_t1_ParamLimits

0xba72,	// (0x0008c2cc) cl_header_name_pane_t1

0xba89,	// (0x0008c2e3) cl_header_name_pane_t2_ParamLimits

0xba89,	// (0x0008c2e3) cl_header_name_pane_t2

0xbab3,	// (0x0008c30d) cl_header_name_pane_t3_ParamLimits

0xbab3,	// (0x0008c30d) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x00090392) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x00090392) cl_header_name_pane_t

0x7957,	// (0x000881b1) navi_pane_mv_g2_ParamLimits

0x1bb9,	// (0x00082413) field_vitu2_entry_pane_g1_ParamLimits

0x1bc5,	// (0x0008241f) field_vitu2_entry_pane_g2_ParamLimits

0x1bd1,	// (0x0008242b) field_vitu2_entry_pane_g3_ParamLimits

0x1bd1,	// (0x0008242b) field_vitu2_entry_pane_g3

0xf935,	// (0x0009018f) field_vitu2_entry_pane_g_ParamLimits

0xaa13,	// (0x0008b26d) cell_vitu2_itu_pane_g1_ParamLimits

0xaa23,	// (0x0008b27d) cell_vitu2_itu_pane_g2_ParamLimits

0xaa23,	// (0x0008b27d) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x0009019b) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x0009019b) cell_vitu2_itu_pane_g

0xa78c,	// (0x0008afe6) bg_vkb2_func_pane_cp05_ParamLimits

0xa78c,	// (0x0008afe6) bg_vkb2_func_pane_cp05

0xa78c,	// (0x0008afe6) bg_vkb2_func_pane_cp03

0xa78c,	// (0x0008afe6) bg_vkb2_func_pane_cp04

0xa78c,	// (0x0008afe6) bg_vkb2_func_pane_cp10_ParamLimits

0xa78c,	// (0x0008afe6) bg_vkb2_func_pane_cp10

0xb6c6,	// (0x0008bf20) bg_vkb2_func_pane_cp08

0xb6ac,	// (0x0008bf06) bg_vkb2_func_pane_cp06

0xb6ba,	// (0x0008bf14) bg_vkb2_func_pane_cp07

0x222b,	// (0x00082a85) bg_vkb2_func_pane_cp11_ParamLimits

0x222b,	// (0x00082a85) bg_vkb2_func_pane_cp11

0x2240,	// (0x00082a9a) bg_vkb2_func_pane_cp12_ParamLimits

0x2240,	// (0x00082a9a) bg_vkb2_func_pane_cp12

0x0164,	// (0x000809be) bg_vkb2_func_pane_cp09

0x1c0e,	// (0x00082468) bg_vkb2_func_pane_g1

0xdb69,	// (0x0008e3c3) bg_vkb2_func_pane_g2

0x1c16,	// (0x00082470) bg_vkb2_func_pane_g3

0x1c1e,	// (0x00082478) bg_vkb2_func_pane_g4

0x1e61,	// (0x000826bb) bg_vkb2_func_pane_g5

0x1c36,	// (0x00082490) bg_vkb2_func_pane_g6

0x1c3e,	// (0x00082498) bg_vkb2_func_pane_g7

0x1c2e,	// (0x00082488) bg_vkb2_func_pane_g8

0xdb49,	// (0x0008e3a3) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x00090399) bg_vkb2_func_pane_g

0xb9bf,	// (0x0008c219) blid2_tripm_pane_g6_ParamLimits

0xb9bf,	// (0x0008c219) blid2_tripm_pane_g6

0x1a6b,	// (0x000822c5) mp4_progress_pane_g1

0xba17,	// (0x0008c271) blid2_tripm_values_pane_ParamLimits

0xba17,	// (0x0008c271) blid2_tripm_values_pane

0xbad8,	// (0x0008c332) blid2_tripm_values_pane_t1

0xbae6,	// (0x0008c340) blid2_tripm_values_pane_t2

0xbaf4,	// (0x0008c34e) blid2_tripm_values_pane_t3

0xbb02,	// (0x0008c35c) blid2_tripm_values_pane_t4

0xbb10,	// (0x0008c36a) blid2_tripm_values_pane_t5

0xbb1e,	// (0x0008c378) blid2_tripm_values_pane_t6

0xbb2c,	// (0x0008c386) blid2_tripm_values_pane_t7

0xbb3a,	// (0x0008c394) blid2_tripm_values_pane_t8

0xbb48,	// (0x0008c3a2) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x000903ac) blid2_tripm_values_pane_t

0x6625,	// (0x00086e7f) call_video_pane_t1_ParamLimits

0x6642,	// (0x00086e9c) call_video_pane_t2_ParamLimits

0xf28d,	// (0x0008fae7) call_video_pane_t_ParamLimits

0x7ed4,	// (0x0008872e) msg_header_pane_g1_ParamLimits

0xe330,	// (0x0008eb8a) msg_header_pane_g2_ParamLimits

0xe330,	// (0x0008eb8a) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x0008fd01) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x0008fd01) msg_header_pane_g

0x4514,	// (0x00084d6e) main_clock2_pane_ParamLimits

0x999e,	// (0x0008a1f8) grid_clock2_toolbar_pane_ParamLimits

0x999e,	// (0x0008a1f8) grid_clock2_toolbar_pane

0x999e,	// (0x0008a1f8) listscroll_clock2_pane_ParamLimits

0x999e,	// (0x0008a1f8) listscroll_clock2_pane

0x9a52,	// (0x0008a2ac) main_clock2_pane_t3_ParamLimits

0x9a52,	// (0x0008a2ac) main_clock2_pane_t3

0x9a64,	// (0x0008a2be) main_clock2_pane_t4_ParamLimits

0x9a64,	// (0x0008a2be) main_clock2_pane_t4

0x233f,	// (0x00082b99) cell_clock2_toolbar_pane

0x2347,	// (0x00082ba1) cell_clock2_toolbar_pane_cp01

0x2347,	// (0x00082ba1) cell_clock2_toolbar_pane_cp02

0x234f,	// (0x00082ba9) cell_clock2_toolbar_pane_cp03

0x2357,	// (0x00082bb1) list_clock2_pane

0xe079,	// (0x0008e8d3) scroll_pane_cp10

0x235f,	// (0x00082bb9) list_single_clock2_pane_ParamLimits

0x235f,	// (0x00082bb9) list_single_clock2_pane

0xe1b3,	// (0x0008ea0d) list_highlight_pane_cp08

0x236c,	// (0x00082bc6) list_single_clock2_pane_t1

0x237a,	// (0x00082bd4) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x000903bf) list_single_clock2_pane_t

0x0164,	// (0x000809be) bg_button_pane_cp10

0x2388,	// (0x00082be2) cell_clock2_toolbar_pane_g1

0x7f0e,	// (0x00088768) aid_main_viewer_pane_g1_ParamLimits

0x7f0e,	// (0x00088768) aid_main_viewer_pane_g1

0x7f1a,	// (0x00088774) aid_main_viewer_pane_g2_ParamLimits

0x7f1a,	// (0x00088774) aid_main_viewer_pane_g2

0x7f26,	// (0x00088780) aid_main_viewer_pane_g3_ParamLimits

0x7f26,	// (0x00088780) aid_main_viewer_pane_g3

0x7f37,	// (0x00088791) aid_main_viewer_pane_g4_ParamLimits

0x7f37,	// (0x00088791) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x0008fd12) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x0008fd12) aid_main_viewer_pane_g

0x86c1,	// (0x00088f1b) main_calc_pane_ParamLimits

0x86ce,	// (0x00088f28) main_dialer2_pane_ParamLimits

0x0164,	// (0x000809be) main_cam6_pane

0x0164,	// (0x000809be) main_vid6_pane

0x99aa,	// (0x0008a204) listscroll_gen_pane_cp06_ParamLimits

0x99aa,	// (0x0008a204) listscroll_gen_pane_cp06

0x9a76,	// (0x0008a2d0) main_clock2_pane_t5_ParamLimits

0x9a76,	// (0x0008a2d0) main_clock2_pane_t5

0x9ac5,	// (0x0008a31f) aid_call2_pane_cp10_ParamLimits

0x9ad7,	// (0x0008a331) aid_call_pane_cp10_ParamLimits

0xe0e8,	// (0x0008e942) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe0e8,	// (0x0008e942) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9ae9,	// (0x0008a343) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9ae9,	// (0x0008a343) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe0e8,	// (0x0008e942) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x00090048) popup_clock_analogue_window_cp10_g_ParamLimits

0x9afb,	// (0x0008a355) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa2cb,	// (0x0008ab25) cell_dialer2_keypad_pane_g2_ParamLimits

0xa2cb,	// (0x0008ab25) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x0009012e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x0009012e) cell_dialer2_keypad_pane_g

0xa2e7,	// (0x0008ab41) cell_dialer2_keypad_pane_t1

0xad5e,	// (0x0008b5b8) main_cset_text2_pane_ParamLimits

0xad5e,	// (0x0008b5b8) main_cset_text2_pane

0x20ae,	// (0x00082908) area_vitu2_query_pane_g1_ParamLimits

0xb64b,	// (0x0008bea5) area_vitu2_query_pane_g2_ParamLimits

0xfa89,	// (0x000902e3) area_vitu2_query_pane_g_ParamLimits

0x2132,	// (0x0008298c) area_vitu2_query_pane_t7_ParamLimits

0x2132,	// (0x0008298c) area_vitu2_query_pane_t7

0xb6ac,	// (0x0008bf06) bg_button_pane_cp018_ParamLimits

0xb6ba,	// (0x0008bf14) bg_button_pane_cp021_ParamLimits

0xb6c6,	// (0x0008bf20) bg_button_pane_cp022_ParamLimits

0xb6c6,	// (0x0008bf20) bg_vkb2_func_pane_cp08_ParamLimits

0xb6ac,	// (0x0008bf06) bg_vkb2_func_pane_cp06_ParamLimits

0xb6ba,	// (0x0008bf14) bg_vkb2_func_pane_cp07_ParamLimits

0xb6d7,	// (0x0008bf31) input_focus_pane_cp09_ParamLimits

0xbb56,	// (0x0008c3b0) cam6_autofocus_pane_ParamLimits

0xbb56,	// (0x0008c3b0) cam6_autofocus_pane

0xbb78,	// (0x0008c3d2) cam6_image_uncrop_pane_ParamLimits

0xbb78,	// (0x0008c3d2) cam6_image_uncrop_pane

0xbba5,	// (0x0008c3ff) cam6_indi_pane_ParamLimits

0xbba5,	// (0x0008c3ff) cam6_indi_pane

0xbbbf,	// (0x0008c419) cam6_mode_pane_ParamLimits

0xbbbf,	// (0x0008c419) cam6_mode_pane

0xbbd3,	// (0x0008c42d) cam6_timer_pane_ParamLimits

0xbbd3,	// (0x0008c42d) cam6_timer_pane

0xbbdf,	// (0x0008c439) cam6_zoom_pane_ParamLimits

0xbbdf,	// (0x0008c439) cam6_zoom_pane

0xbbfb,	// (0x0008c455) cam6_mode_pane_g1_ParamLimits

0xbbfb,	// (0x0008c455) cam6_mode_pane_g1

0xbc07,	// (0x0008c461) cam6_mode_pane_g2_ParamLimits

0xbc07,	// (0x0008c461) cam6_mode_pane_g2

0xbc13,	// (0x0008c46d) cam6_mode_pane_g3_ParamLimits

0xbc13,	// (0x0008c46d) cam6_mode_pane_g3

0xbc1f,	// (0x0008c479) cam6_mode_pane_g4_ParamLimits

0xbc1f,	// (0x0008c479) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x000903c4) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x000903c4) cam6_mode_pane_g

0x2390,	// (0x00082bea) bg_tb_trans_pane_cp08_ParamLimits

0x2390,	// (0x00082bea) bg_tb_trans_pane_cp08

0x239e,	// (0x00082bf8) cam6_battery_pane_ParamLimits

0x239e,	// (0x00082bf8) cam6_battery_pane

0x23b4,	// (0x00082c0e) cam6_indi_pane_g1_ParamLimits

0x23b4,	// (0x00082c0e) cam6_indi_pane_g1

0x23c6,	// (0x00082c20) cam6_indi_pane_g2_ParamLimits

0x23c6,	// (0x00082c20) cam6_indi_pane_g2

0x23d8,	// (0x00082c32) cam6_indi_pane_g3_ParamLimits

0x23d8,	// (0x00082c32) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x000903cd) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x000903cd) cam6_indi_pane_g

0x23ea,	// (0x00082c44) cam6_indi_pane_t1_ParamLimits

0x23ea,	// (0x00082c44) cam6_indi_pane_t1

0xa819,	// (0x0008b073) cam6_autofocus_pane_g1

0xa811,	// (0x0008b06b) cam6_autofocus_pane_g2

0xa829,	// (0x0008b083) cam6_autofocus_pane_g3

0xa821,	// (0x0008b07b) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x000903d4) cam6_autofocus_pane_g

0x2410,	// (0x00082c6a) cam6_timer_pane_g1

0x2418,	// (0x00082c72) cam6_timer_pane_t1

0x2426,	// (0x00082c80) cam6_zoom_cont_pane

0x242e,	// (0x00082c88) cam6_zoom_pane_g1

0x2436,	// (0x00082c90) cam6_zoom_pane_g2

0xbc2b,	// (0x0008c485) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x000903dd) cam6_zoom_pane_g

0x11d1,	// (0x00081a2b) cam6_battery_pane_g1

0x11d1,	// (0x00081a2b) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x0008ff55) cam6_battery_pane_g

0x243e,	// (0x00082c98) cam6_zoom_cont_pane_g1

0x2447,	// (0x00082ca1) cam6_zoom_cont_pane_g2

0x2450,	// (0x00082caa) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x000903e4) cam6_zoom_cont_pane_g

0xbc48,	// (0x0008c4a2) cam6_mode_pane_cp_ParamLimits

0xbc48,	// (0x0008c4a2) cam6_mode_pane_cp

0xbc5c,	// (0x0008c4b6) cam6_zoom_pane_cp_ParamLimits

0xbc5c,	// (0x0008c4b6) cam6_zoom_pane_cp

0xbc78,	// (0x0008c4d2) vid6_image_uncrop_cif_pane_ParamLimits

0xbc78,	// (0x0008c4d2) vid6_image_uncrop_cif_pane

0xbca4,	// (0x0008c4fe) vid6_image_uncrop_nhd_pane_ParamLimits

0xbca4,	// (0x0008c4fe) vid6_image_uncrop_nhd_pane

0xbcc3,	// (0x0008c51d) vid6_image_uncrop_vga_pane_ParamLimits

0xbcc3,	// (0x0008c51d) vid6_image_uncrop_vga_pane

0xbce2,	// (0x0008c53c) vid6_image_uncrop_wvga_pane_ParamLimits

0xbce2,	// (0x0008c53c) vid6_image_uncrop_wvga_pane

0xbd01,	// (0x0008c55b) vid6_indi_pane_ParamLimits

0xbd01,	// (0x0008c55b) vid6_indi_pane

0x2390,	// (0x00082bea) bg_tb_trans_pane_cp09_ParamLimits

0x2390,	// (0x00082bea) bg_tb_trans_pane_cp09

0x2468,	// (0x00082cc2) cam6_battery_pane_cp_ParamLimits

0x2468,	// (0x00082cc2) cam6_battery_pane_cp

0x2474,	// (0x00082cce) vid6_indi_pane_g1_ParamLimits

0x2474,	// (0x00082cce) vid6_indi_pane_g1

0x2486,	// (0x00082ce0) vid6_indi_pane_g2_ParamLimits

0x2486,	// (0x00082ce0) vid6_indi_pane_g2

0x2498,	// (0x00082cf2) vid6_indi_pane_g3_ParamLimits

0x2498,	// (0x00082cf2) vid6_indi_pane_g3

0x24af,	// (0x00082d09) vid6_indi_pane_g4_ParamLimits

0x24af,	// (0x00082d09) vid6_indi_pane_g4

0x24c6,	// (0x00082d20) vid6_indi_pane_g5_ParamLimits

0x24c6,	// (0x00082d20) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x000903eb) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x000903eb) vid6_indi_pane_g

0x24e0,	// (0x00082d3a) vid6_indi_pane_t1_ParamLimits

0x24e0,	// (0x00082d3a) vid6_indi_pane_t1

0x24f6,	// (0x00082d50) vid6_indi_pane_t2_ParamLimits

0x24f6,	// (0x00082d50) vid6_indi_pane_t2

0x251e,	// (0x00082d78) vid6_indi_pane_t3_ParamLimits

0x251e,	// (0x00082d78) vid6_indi_pane_t3

0x2546,	// (0x00082da0) vid6_indi_pane_t4_ParamLimits

0x2546,	// (0x00082da0) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x000903f6) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x000903f6) vid6_indi_pane_t

0x256a,	// (0x00082dc4) wait_bar_pane_cp08

0xbd26,	// (0x0008c580) main_cset_text2_pane_t1_ParamLimits

0xbd26,	// (0x0008c580) main_cset_text2_pane_t1

0xbc33,	// (0x0008c48d) listscroll_gen_pane_cp06_t1_ParamLimits

0xbc33,	// (0x0008c48d) listscroll_gen_pane_cp06_t1

0x0164,	// (0x000809be) main_cam6_set_pane

0xa6a0,	// (0x0008aefa) bg_tb_trans_pane_cp06_ParamLimits

0xa6b6,	// (0x0008af10) cam4_indicators_pane_g1_ParamLimits

0xa6c6,	// (0x0008af20) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x0009016b) cam4_indicators_pane_g_ParamLimits

0xa6de,	// (0x0008af38) cam4_indicators_pane_t1_ParamLimits

0xa78c,	// (0x0008afe6) bg_tb_trans_pane_cp07_ParamLimits

0xa7a4,	// (0x0008affe) vid4_indicators_pane_g1_ParamLimits

0xa7b6,	// (0x0008b010) vid4_indicators_pane_g2_ParamLimits

0xa7c9,	// (0x0008b023) vid4_indicators_pane_g3_ParamLimits

0xa7da,	// (0x0008b034) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x0009017d) vid4_indicators_pane_g_ParamLimits

0xa7f6,	// (0x0008b050) vid4_indicators_pane_t1_ParamLimits

0xb80a,	// (0x0008c064) vid4_progress_pane_g1_ParamLimits

0xb81b,	// (0x0008c075) vid4_progress_pane_g2_ParamLimits

0x7f94,	// (0x000887ee) vid4_progress_pane_g3_ParamLimits

0xa6c6,	// (0x0008af20) vid4_progress_pane_g4_ParamLimits

0xfad4,	// (0x0009032e) vid4_progress_pane_g_ParamLimits

0xb82d,	// (0x0008c087) vid4_progress_pane_t1_ParamLimits

0xb842,	// (0x0008c09c) vid4_progress_pane_t2_ParamLimits

0xb85a,	// (0x0008c0b4) vid4_progress_pane_t3_ParamLimits

0xfadf,	// (0x00090339) vid4_progress_pane_t_ParamLimits

0xb871,	// (0x0008c0cb) wait_bar_pane_cp07_ParamLimits

0xbd4d,	// (0x0008c5a7) main_cam6_set_pane_g2_ParamLimits

0xbd4d,	// (0x0008c5a7) main_cam6_set_pane_g2

0xbd59,	// (0x0008c5b3) main_cset6_listscroll_pane_ParamLimits

0xbd59,	// (0x0008c5b3) main_cset6_listscroll_pane

0xbd86,	// (0x0008c5e0) main_cset6_slider_pane_ParamLimits

0xbd86,	// (0x0008c5e0) main_cset6_slider_pane

0xbd92,	// (0x0008c5ec) main_cset6_text2_pane_ParamLimits

0xbd92,	// (0x0008c5ec) main_cset6_text2_pane

0x2579,	// (0x00082dd3) main_cset6_text_pane

0x2581,	// (0x00082ddb) main_cset_list_pane_copy1_ParamLimits

0x2581,	// (0x00082ddb) main_cset_list_pane_copy1

0x2591,	// (0x00082deb) scroll_pane_cp028_copy1

0xbda5,	// (0x0008c5ff) cset_list_set_pane_copy1

0xbdb5,	// (0x0008c60f) aid_position_infowindow_above_copy1

0xbdbd,	// (0x0008c617) aid_position_infowindow_below_copy1

0xbdc5,	// (0x0008c61f) cset_list_set_pane_g1_copy1

0xbdcd,	// (0x0008c627) cset_list_set_pane_g3_copy1_ParamLimits

0xbdcd,	// (0x0008c627) cset_list_set_pane_g3_copy1

0xbddc,	// (0x0008c636) cset_list_set_pane_t1_copy1_ParamLimits

0xbddc,	// (0x0008c636) cset_list_set_pane_t1_copy1

0x01dd,	// (0x00080a37) list_highlight_pane_cp021_copy1_ParamLimits

0x01dd,	// (0x00080a37) list_highlight_pane_cp021_copy1

0x259a,	// (0x00082df4) cset6_slider_pane_ParamLimits

0x259a,	// (0x00082df4) cset6_slider_pane

0x25c6,	// (0x00082e20) main_cset6_slider_pane_g1_ParamLimits

0x25c6,	// (0x00082e20) main_cset6_slider_pane_g1

0xbdf1,	// (0x0008c64b) main_cset6_slider_pane_g2_ParamLimits

0xbdf1,	// (0x0008c64b) main_cset6_slider_pane_g2

0x25ee,	// (0x00082e48) main_cset6_slider_pane_g3_ParamLimits

0x25ee,	// (0x00082e48) main_cset6_slider_pane_g3

0xbe19,	// (0x0008c673) main_cset6_slider_pane_g4_ParamLimits

0xbe19,	// (0x0008c673) main_cset6_slider_pane_g4

0xbe25,	// (0x0008c67f) main_cset6_slider_pane_g5_ParamLimits

0xbe25,	// (0x0008c67f) main_cset6_slider_pane_g5

0x1d41,	// (0x0008259b) main_cset6_slider_pane_g7_ParamLimits

0x1d41,	// (0x0008259b) main_cset6_slider_pane_g7

0x1d4d,	// (0x000825a7) main_cset6_slider_pane_g8_ParamLimits

0x1d4d,	// (0x000825a7) main_cset6_slider_pane_g8

0xbe31,	// (0x0008c68b) main_cset6_slider_pane_g9_ParamLimits

0xbe31,	// (0x0008c68b) main_cset6_slider_pane_g9

0xbe3d,	// (0x0008c697) main_cset6_slider_pane_g10_ParamLimits

0xbe3d,	// (0x0008c697) main_cset6_slider_pane_g10

0xbe49,	// (0x0008c6a3) main_cset6_slider_pane_g11_ParamLimits

0xbe49,	// (0x0008c6a3) main_cset6_slider_pane_g11

0xbe55,	// (0x0008c6af) main_cset6_slider_pane_g12_ParamLimits

0xbe55,	// (0x0008c6af) main_cset6_slider_pane_g12

0xbe61,	// (0x0008c6bb) main_cset6_slider_pane_g13_ParamLimits

0xbe61,	// (0x0008c6bb) main_cset6_slider_pane_g13

0xbe6d,	// (0x0008c6c7) main_cset6_slider_pane_g14_ParamLimits

0xbe6d,	// (0x0008c6c7) main_cset6_slider_pane_g14

0xbe79,	// (0x0008c6d3) main_cset6_slider_pane_g15_ParamLimits

0xbe79,	// (0x0008c6d3) main_cset6_slider_pane_g15

0xbe91,	// (0x0008c6eb) main_cset6_slider_pane_g16_ParamLimits

0xbe91,	// (0x0008c6eb) main_cset6_slider_pane_g16

0xbe9d,	// (0x0008c6f7) main_cset6_slider_pane_g17_ParamLimits

0xbe9d,	// (0x0008c6f7) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x000903ff) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x000903ff) main_cset6_slider_pane_g

0x25fa,	// (0x00082e54) main_cset6_slider_pane_t1_ParamLimits

0x25fa,	// (0x00082e54) main_cset6_slider_pane_t1

0xbec1,	// (0x0008c71b) main_cset6_slider_pane_t2_ParamLimits

0xbec1,	// (0x0008c71b) main_cset6_slider_pane_t2

0xbeec,	// (0x0008c746) main_cset6_slider_pane_t3_ParamLimits

0xbeec,	// (0x0008c746) main_cset6_slider_pane_t3

0xbf17,	// (0x0008c771) main_cset6_slider_pane_t4_ParamLimits

0xbf17,	// (0x0008c771) main_cset6_slider_pane_t4

0xbf42,	// (0x0008c79c) main_cset6_slider_pane_t5_ParamLimits

0xbf42,	// (0x0008c79c) main_cset6_slider_pane_t5

0x263b,	// (0x00082e95) main_cset6_slider_pane_t7_ParamLimits

0x263b,	// (0x00082e95) main_cset6_slider_pane_t7

0xbf6d,	// (0x0008c7c7) main_cset6_slider_pane_t8_ParamLimits

0xbf6d,	// (0x0008c7c7) main_cset6_slider_pane_t8

0xbf91,	// (0x0008c7eb) main_cset6_slider_pane_t9_ParamLimits

0xbf91,	// (0x0008c7eb) main_cset6_slider_pane_t9

0xbfb5,	// (0x0008c80f) main_cset6_slider_pane_t10_ParamLimits

0xbfb5,	// (0x0008c80f) main_cset6_slider_pane_t10

0xbfd9,	// (0x0008c833) main_cset6_slider_pane_t11_ParamLimits

0xbfd9,	// (0x0008c833) main_cset6_slider_pane_t11

0x2671,	// (0x00082ecb) main_cset6_slider_pane_t14_ParamLimits

0x2671,	// (0x00082ecb) main_cset6_slider_pane_t14

0x26aa,	// (0x00082f04) main_cset6_slider_pane_t15_ParamLimits

0x26aa,	// (0x00082f04) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x00090424) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x00090424) main_cset6_slider_pane_t

0x1e05,	// (0x0008265f) cset_slider_pane_g1_copy1

0x1e0e,	// (0x00082668) cset_slider_pane_g2_copy1

0x1e17,	// (0x00082671) cset_slider_pane_g3_copy1

0x0164,	// (0x000809be) bg_popup_sub_pane_cp011_copy1

0x1ec2,	// (0x0008271c) main_cset_text_pane_g1_copy1

0x1eca,	// (0x00082724) main_cset_text_pane_t1_copy1

0x1ed8,	// (0x00082732) main_cset_text_pane_t2_copy1

0x1ee6,	// (0x00082740) main_cset_text_pane_t3_copy1

0x1ef4,	// (0x0008274e) main_cset_text_pane_t4_copy1

0x1f02,	// (0x0008275c) main_cset_text_pane_t5_copy1

0x1f10,	// (0x0008276a) main_cset_text_pane_t6_copy1

0x1f1e,	// (0x00082778) main_cset_text_pane_t7_copy1

0xbffd,	// (0x0008c857) main_cset_text2_pane_t1_copy1

0x0164,	// (0x000809be) main_ncimui_pane

0x8713,	// (0x00088f6d) popup_query_ncimui_window_ParamLimits

0x8713,	// (0x00088f6d) popup_query_ncimui_window

0x1466,	// (0x00081cc0) field_cale_ev2_pane_g4_ParamLimits

0x1466,	// (0x00081cc0) field_cale_ev2_pane_g4

0x9fe1,	// (0x0008a83b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9fe1,	// (0x0008a83b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x00090109) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x00090109) cell_video_dialer_keypad_pane_g

0x9ff9,	// (0x0008a853) cell_video_dialer_keypad_pane_t1

0x0164,	// (0x000809be) bg_popup_window_pane_cp012

0xdf65,	// (0x0008e7bf) heading_pane_cp06

0x27d2,	// (0x0008302c) ncim_query_content_pane

0x0164,	// (0x000809be) bg_popup_heading_pane_cp01

0x27da,	// (0x00083034) ncim_heading_pane_t1

0x27e8,	// (0x00083042) ncim_indicator_popup_pane

0x27fa,	// (0x00083054) ncim_query_button_pane

0x2810,	// (0x0008306a) ncim_query_content_pane_t1

0x2822,	// (0x0008307c) ncim_query_content_pane_t2

0x0005,

0xfc09,	// (0x00090463) ncim_query_content_pane_t

0x285c,	// (0x000830b6) ncim_query_list_pane

0x286e,	// (0x000830c8) ncim_query_popup_pane

0x27e8,	// (0x00083042) ncim_indicator_popup_pane_ParamLimits

0xc124,	// (0x0008c97e) ncim_query_content_pane_g1_ParamLimits

0xc124,	// (0x0008c97e) ncim_query_content_pane_g1

0x2810,	// (0x0008306a) ncim_query_content_pane_t1_ParamLimits

0x2822,	// (0x0008307c) ncim_query_content_pane_t2_ParamLimits

0xc130,	// (0x0008c98a) ncim_query_content_pane_t3_ParamLimits

0xc130,	// (0x0008c98a) ncim_query_content_pane_t3

0xc14d,	// (0x0008c9a7) ncim_query_content_pane_t4_ParamLimits

0xc14d,	// (0x0008c9a7) ncim_query_content_pane_t4

0xc16a,	// (0x0008c9c4) ncim_query_content_pane_t5_ParamLimits

0xc16a,	// (0x0008c9c4) ncim_query_content_pane_t5

0x2834,	// (0x0008308e) ncim_query_content_pane_t6_ParamLimits

0x2834,	// (0x0008308e) ncim_query_content_pane_t6

0xfc09,	// (0x00090463) ncim_query_content_pane_t_ParamLimits

0x285c,	// (0x000830b6) ncim_query_list_pane_ParamLimits

0x286e,	// (0x000830c8) ncim_query_popup_pane_ParamLimits

0x2882,	// (0x000830dc) wait_bar_pane_cp04

0x0164,	// (0x000809be) input_focus_pane_cp011

0x288a,	// (0x000830e4) ncim_query_popup_pane_t1

0x2898,	// (0x000830f2) ncim_list_query_list_pane_ParamLimits

0x2898,	// (0x000830f2) ncim_list_query_list_pane

0x0164,	// (0x000809be) bg_button_pane_cp027

0x28ab,	// (0x00083105) ncim_query_button_pane_g1

0x0164,	// (0x000809be) list_highlight_pane_cp012

0x28b5,	// (0x0008310f) ncim_list_query_list_pane_g1

0x28bd,	// (0x00083117) ncim_list_query_list_pane_t1

0xa6d2,	// (0x0008af2c) cam4_indicators_pane_g3_ParamLimits

0xa6d2,	// (0x0008af2c) cam4_indicators_pane_g3

0xa7e6,	// (0x0008b040) vid4_indicators_pane_g5_ParamLimits

0xa7e6,	// (0x0008b040) vid4_indicators_pane_g5

0xa6d2,	// (0x0008af2c) vid4_progress_pane_g5_ParamLimits

0xa6d2,	// (0x0008af2c) vid4_progress_pane_g5

0xc02b,	// (0x0008c885) main_ncimui_pane_g1

0xc085,	// (0x0008c8df) ncimui_group_query_pane_ParamLimits

0xc085,	// (0x0008c8df) ncimui_group_query_pane

0xc0cf,	// (0x0008c929) ncimui_list_pane_ParamLimits

0xc0cf,	// (0x0008c929) ncimui_list_pane

0xc0f0,	// (0x0008c94a) ncimui_text_pane_ParamLimits

0xc0f0,	// (0x0008c94a) ncimui_text_pane

0xc187,	// (0x0008c9e1) ncimui_text_pane_t1_ParamLimits

0xc187,	// (0x0008c9e1) ncimui_text_pane_t1

0x28cb,	// (0x00083125) ncimui_list_single_graphic_pane_ParamLimits

0x28cb,	// (0x00083125) ncimui_list_single_graphic_pane

0xc1a6,	// (0x0008ca00) ncimui_query_pane_ParamLimits

0xc1a6,	// (0x0008ca00) ncimui_query_pane

0x0164,	// (0x000809be) list_highlight_pane_cp013

0x28db,	// (0x00083135) ncim_list_query_list_pane_t1_copy1

0x28b5,	// (0x0008310f) ncim_list_single_graphic_pane_g1

0x28e9,	// (0x00083143) ncim_query_button_pane_cp01

0x28f5,	// (0x0008314f) ncim_query_entry_pane_ParamLimits

0x28f5,	// (0x0008314f) ncim_query_entry_pane

0x2908,	// (0x00083162) ncimui_query_pane_g1

0x2914,	// (0x0008316e) ncimui_query_pane_t1_ParamLimits

0x2914,	// (0x0008316e) ncimui_query_pane_t1

0x01dd,	// (0x00080a37) input_focus_pane_cp012

0x292d,	// (0x00083187) ncim_query_entry_pane_t1

0x4514,	// (0x00084d6e) main_im_pane_ParamLimits

0x01dd,	// (0x00080a37) main_mobtv_pane_ParamLimits

0x01dd,	// (0x00080a37) main_mobtv_pane

0xbea9,	// (0x0008c703) main_cset6_slider_pane_g18_ParamLimits

0xbea9,	// (0x0008c703) main_cset6_slider_pane_g18

0xbeb5,	// (0x0008c70f) main_cset6_slider_pane_g19_ParamLimits

0xbeb5,	// (0x0008c70f) main_cset6_slider_pane_g19

0x1bd1,	// (0x0008242b) bg_main_mobtv_pane_ParamLimits

0x1bd1,	// (0x0008242b) bg_main_mobtv_pane

0xc1b9,	// (0x0008ca13) main_mobtv_info_pane

0xc1c4,	// (0x0008ca1e) main_mobtv_loading_pane_ParamLimits

0xc1c4,	// (0x0008ca1e) main_mobtv_loading_pane

0x293f,	// (0x00083199) main_mobtv_pg_channel_list_pane

0x2949,	// (0x000831a3) main_mobtv_pg_hdr_pane

0xc1d1,	// (0x0008ca2b) main_mobtv_programe_curr_pane_ParamLimits

0xc1d1,	// (0x0008ca2b) main_mobtv_programe_curr_pane

0xc1de,	// (0x0008ca38) main_mobtv_programe_next_pane_ParamLimits

0xc1de,	// (0x0008ca38) main_mobtv_programe_next_pane

0x2952,	// (0x000831ac) popup_mobtv_noti_window

0x11d1,	// (0x00081a2b) main_tv_pg_hdr_pane_g1

0x295c,	// (0x000831b6) main_tv_pg_hdr_pane_g2

0x2964,	// (0x000831be) main_tv_pg_hdr_pane_g3

0x296c,	// (0x000831c6) main_tv_pg_hdr_pane_g4

0x2974,	// (0x000831ce) main_tv_pg_hdr_pane_g5

0x297e,	// (0x000831d8) main_tv_pg_hdr_pane_g6

0x2988,	// (0x000831e2) main_tv_pg_hdr_pane_g7

0x2992,	// (0x000831ec) main_tv_pg_hdr_pane_g8

0x299c,	// (0x000831f6) main_tv_pg_hdr_pane_g9

0x29a6,	// (0x00083200) main_tv_pg_hdr_pane_g10

0x29b0,	// (0x0008320a) main_tv_pg_hdr_pane_g11

0x000a,

0xfc16,	// (0x00090470) main_tv_pg_hdr_pane_g

0x29ba,	// (0x00083214) main_tv_pg_hdr_pane_t1

0x29c8,	// (0x00083222) main_tv_pg_hdr_pane_t2

0x29d6,	// (0x00083230) main_tv_pg_hdr_pane_t3

0x29e6,	// (0x00083240) main_tv_pg_hdr_pane_t4

0x29f6,	// (0x00083250) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2d,	// (0x00090487) main_tv_pg_hdr_pane_t

0x2a06,	// (0x00083260) single_mobtv_pg_channel_pane_ParamLimits

0x2a06,	// (0x00083260) single_mobtv_pg_channel_pane

0x2a18,	// (0x00083272) single_mobtv_pg_channel_table_pane

0x2a21,	// (0x0008327b) single_mobtv_pg_channel_thumb_pane

0x2a2a,	// (0x00083284) single_tv_pg_channel_pane_g1

0x2a33,	// (0x0008328d) single_tv_pg_channel_pane_g2

0x0001,

0xfc38,	// (0x00090492) single_tv_pg_channel_pane_g

0x1401,	// (0x00081c5b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1401,	// (0x00081c5b) bg_single_mobtv_pg_channel_thumb_pane

0x2a3c,	// (0x00083296) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2a3c,	// (0x00083296) single_mobtv_pg_channel_thumb_pane_g1

0x2a4a,	// (0x000832a4) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2a4a,	// (0x000832a4) single_mobtv_pg_channel_thumb_pane_g2

0x2a56,	// (0x000832b0) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2a56,	// (0x000832b0) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3d,	// (0x00090497) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3d,	// (0x00090497) single_mobtv_pg_channel_thumb_pane_g

0x2a62,	// (0x000832bc) single_mobtv_pg_channel_thumb_pane_t1

0x2a70,	// (0x000832ca) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc44,	// (0x0009049e) single_mobtv_pg_channel_thumb_pane_t

0x11d1,	// (0x00081a2b) bg_single_mobtv_pg_channel_table_pane_g1

0x11d1,	// (0x00081a2b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x0008ff55) bg_single_mobtv_pg_channel_table_pane_g

0x2a7e,	// (0x000832d8) single_mobtv_pg_channel_table_pane_t1

0x2a8c,	// (0x000832e6) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc49,	// (0x000904a3) single_mobtv_pg_channel_table_pane_t

0xc1f3,	// (0x0008ca4d) main_mobtv_info_pane_g1_ParamLimits

0xc1f3,	// (0x0008ca4d) main_mobtv_info_pane_g1

0xc20f,	// (0x0008ca69) main_mobtv_info_pane_t1_ParamLimits

0xc20f,	// (0x0008ca69) main_mobtv_info_pane_t1

0xc287,	// (0x0008cae1) main_mobtv_info_pane_t2_ParamLimits

0xc287,	// (0x0008cae1) main_mobtv_info_pane_t2

0x0002,

0xfc53,	// (0x000904ad) main_mobtv_info_pane_t_ParamLimits

0xfc53,	// (0x000904ad) main_mobtv_info_pane_t

0xc318,	// (0x0008cb72) wait_bar_pane_cp05

0xc32a,	// (0x0008cb84) main_mobtv_loading_pane_g1_ParamLimits

0xc32a,	// (0x0008cb84) main_mobtv_loading_pane_g1

0xc336,	// (0x0008cb90) main_mobtv_loading_pane_g2_ParamLimits

0xc336,	// (0x0008cb90) main_mobtv_loading_pane_g2

0xc342,	// (0x0008cb9c) main_mobtv_loading_pane_g3_ParamLimits

0xc342,	// (0x0008cb9c) main_mobtv_loading_pane_g3

0x0002,

0xfc5a,	// (0x000904b4) main_mobtv_loading_pane_g_ParamLimits

0xfc5a,	// (0x000904b4) main_mobtv_loading_pane_g

0x2a9a,	// (0x000832f4) main_mobtv_loading_pane_t1_ParamLimits

0x2a9a,	// (0x000832f4) main_mobtv_loading_pane_t1

0x2ab2,	// (0x0008330c) main_mobtv_loading_pane_t2_ParamLimits

0x2ab2,	// (0x0008330c) main_mobtv_loading_pane_t2

0x0001,

0xfc61,	// (0x000904bb) main_mobtv_loading_pane_t_ParamLimits

0xfc61,	// (0x000904bb) main_mobtv_loading_pane_t

0xc350,	// (0x0008cbaa) wait_bar_pane_cp06_ParamLimits

0xc350,	// (0x0008cbaa) wait_bar_pane_cp06

0x2ad6,	// (0x00083330) main_mobtv_programe_curr_pane_t1

0x2ae4,	// (0x0008333e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc66,	// (0x000904c0) main_mobtv_programe_curr_pane_t

0x2af2,	// (0x0008334c) main_mobtv_programe_next_pane_t1

0x2b00,	// (0x0008335a) main_mobtv_programe_next_pane_t2

0x2b0e,	// (0x00083368) main_mobtv_programe_next_pane_t3

0x0002,

0xfc6b,	// (0x000904c5) main_mobtv_programe_next_pane_t

0x0164,	// (0x000809be) bg_popup_mobtv_noti_window_pane

0x2b1c,	// (0x00083376) popup_mobtv_noti_window_g1

0x2b24,	// (0x0008337e) popup_mobtv_noti_window_t1

0x2b32,	// (0x0008338c) popup_mobtv_noti_window_t2

0x0001,

0xfc72,	// (0x000904cc) popup_mobtv_noti_window_t

0x11d1,	// (0x00081a2b) bg_popup_mobtv_noti_window_pane_g1

0x0164,	// (0x000809be) sc_clock_pane

0x0164,	// (0x000809be) main_fs_bigclock_pane

0xba05,	// (0x0008c25f) blid2_tripm_pane_t4_ParamLimits

0xba05,	// (0x0008c25f) blid2_tripm_pane_t4

0xc35c,	// (0x0008cbb6) sc_clock_pane_g1_ParamLimits

0xc35c,	// (0x0008cbb6) sc_clock_pane_g1

0xc36a,	// (0x0008cbc4) sc_clock_pane_t1_ParamLimits

0xc36a,	// (0x0008cbc4) sc_clock_pane_t1

0xc37f,	// (0x0008cbd9) sc_clock_pane_t2_ParamLimits

0xc37f,	// (0x0008cbd9) sc_clock_pane_t2

0xc391,	// (0x0008cbeb) sc_clock_pane_t3_ParamLimits

0xc391,	// (0x0008cbeb) sc_clock_pane_t3

0x0004,

0xfc77,	// (0x000904d1) sc_clock_pane_t_ParamLimits

0xfc77,	// (0x000904d1) sc_clock_pane_t

0xd0a8,	// (0x0008d902) main_fs_bigclock_indicator_pane_ParamLimits

0xd0a8,	// (0x0008d902) main_fs_bigclock_indicator_pane

0xc41e,	// (0x0008cc78) main_fs_bigclock_pane_g1_ParamLimits

0xc41e,	// (0x0008cc78) main_fs_bigclock_pane_g1

0xd0b4,	// (0x0008d90e) main_fs_bigclock_pane_t1_ParamLimits

0xd0b4,	// (0x0008d90e) main_fs_bigclock_pane_t1

0xd0c6,	// (0x0008d920) main_fs_bigclock_pane_t2_ParamLimits

0xd0c6,	// (0x0008d920) main_fs_bigclock_pane_t2

0xd0da,	// (0x0008d934) main_fs_bigclock_pane_t3_ParamLimits

0xd0da,	// (0x0008d934) main_fs_bigclock_pane_t3

0x0002,

0xfe7b,	// (0x000906d5) main_fs_bigclock_pane_t_ParamLimits

0xfe7b,	// (0x000906d5) main_fs_bigclock_pane_t

0x3781,	// (0x00083fdb) main_fs_bigclock_indicator_pane_g1

0x2802,	// (0x0008305c) ncim_query_content_pane_g2_ParamLimits

0x2802,	// (0x0008305c) ncim_query_content_pane_g2

0x0001,

0xfc04,	// (0x0009045e) ncim_query_content_pane_g_ParamLimits

0xfc04,	// (0x0009045e) ncim_query_content_pane_g

0xc3a3,	// (0x0008cbfd) sc_clock_pane_t4_ParamLimits

0xc3a3,	// (0x0008cbfd) sc_clock_pane_t4

0x01dd,	// (0x00080a37) main_radioblah_pane

0x1b1a,	// (0x00082374) cell_call4_button_pane_t1_copy1_ParamLimits

0x1b1a,	// (0x00082374) cell_call4_button_pane_t1_copy1

0xc035,	// (0x0008c88f) main_ncimui_pane_t1_ParamLimits

0xc035,	// (0x0008c88f) main_ncimui_pane_t1

0xc04f,	// (0x0008c8a9) main_ncimui_pane_t2_ParamLimits

0xc04f,	// (0x0008c8a9) main_ncimui_pane_t2

0x0002,

0xfbfd,	// (0x00090457) main_ncimui_pane_t_ParamLimits

0xfbfd,	// (0x00090457) main_ncimui_pane_t

0x2c7e,	// (0x000834d8) main_radioblah_anim_pane_ParamLimits

0x2c7e,	// (0x000834d8) main_radioblah_anim_pane

0x2c8f,	// (0x000834e9) main_radioblah_info_pane_ParamLimits

0x2c8f,	// (0x000834e9) main_radioblah_info_pane

0x2ca3,	// (0x000834fd) main_radioblah_pane_t1_ParamLimits

0x2ca3,	// (0x000834fd) main_radioblah_pane_t1

0x2cbf,	// (0x00083519) main_radioblah_pane_t2_ParamLimits

0x2cbf,	// (0x00083519) main_radioblah_pane_t2

0x0003,

0xfc98,	// (0x000904f2) main_radioblah_pane_t_ParamLimits

0xfc98,	// (0x000904f2) main_radioblah_pane_t

0xc470,	// (0x0008ccca) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc470,	// (0x0008ccca) main_radioblah_rocker_ctrl_pane

0x2d07,	// (0x00083561) main_radioblah_info_pane_t1_ParamLimits

0x2d07,	// (0x00083561) main_radioblah_info_pane_t1

0xc4b9,	// (0x0008cd13) main_radioblah_info_pane_t2_ParamLimits

0xc4b9,	// (0x0008cd13) main_radioblah_info_pane_t2

0x0003,

0xfca1,	// (0x000904fb) main_radioblah_info_pane_t_ParamLimits

0xfca1,	// (0x000904fb) main_radioblah_info_pane_t

0x11d1,	// (0x00081a2b) main_radioblah_rocker_ctrl_pane_g1

0xc569,	// (0x0008cdc3) main_radioblah_rocker_ctrl_pane_g2

0xc571,	// (0x0008cdcb) main_radioblah_rocker_ctrl_pane_g3

0xc579,	// (0x0008cdd3) main_radioblah_rocker_ctrl_pane_g4

0xc581,	// (0x0008cddb) main_radioblah_rocker_ctrl_pane_g5

0xc589,	// (0x0008cde3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaa,	// (0x00090504) main_radioblah_rocker_ctrl_pane_g

0xbffd,	// (0x0008c857) main_cset_text2_pane_t1_copy1_ParamLimits

0xa5f2,	// (0x0008ae4c) cam4_image_uncrop_qvga_pane

0xa746,	// (0x0008afa0) vid4_image_uncrop_qcif_pane

0xbb97,	// (0x0008c3f1) cam6_image_uncrop_qvga_pane_ParamLimits

0xbb97,	// (0x0008c3f1) cam6_image_uncrop_qvga_pane

0x2458,	// (0x00082cb2) vid6_image_uncrop_qcif_pane_ParamLimits

0x2458,	// (0x00082cb2) vid6_image_uncrop_qcif_pane

0x0164,	// (0x000809be) bg_popup_preview_window_pane_cp03

0x27b4,	// (0x0008300e) list_cset_text2_pane

0x27bc,	// (0x00083016) main_cset6_text2_pane_g1

0x27c4,	// (0x0008301e) main_cset6_text2_pane_t1

0xc591,	// (0x0008cdeb) list_cset_text2_pane_t1_ParamLimits

0xc591,	// (0x0008cdeb) list_cset_text2_pane_t1

0x01dd,	// (0x00080a37) main_radioblah_pane_ParamLimits

0xc304,	// (0x0008cb5e) main_mobtv_info_pane_t3_ParamLimits

0xc304,	// (0x0008cb5e) main_mobtv_info_pane_t3

0xc45e,	// (0x0008ccb8) main_radioblah_pane_g1

0xc489,	// (0x0008cce3) main_radioblah_info_pane_g1

0xc50e,	// (0x0008cd68) main_radioblah_info_pane_t3_ParamLimits

0xc50e,	// (0x0008cd68) main_radioblah_info_pane_t3

0x7326,	// (0x00087b80) highlight_cell_cale_month_pane_ParamLimits

0x7326,	// (0x00087b80) highlight_cell_cale_month_pane

0x0164,	// (0x000809be) main_phob_fisheye_pane

0x14ef,	// (0x00081d49) scroll_pane_cp0031_ParamLimits

0x14ef,	// (0x00081d49) scroll_pane_cp0031

0x256a,	// (0x00082dc4) wait_bar_pane_cp08_ParamLimits

0xbda5,	// (0x0008c5ff) cset_list_set_pane_copy1_ParamLimits

0x2d41,	// (0x0008359b) highlight_cell_cale_month_pane_g1

0xc5a8,	// (0x0008ce02) highlight_cell_cale_month_pane_t1

0x219e,	// (0x000829f8) list_gen_pane_cp01

0x1d2c,	// (0x00082586) scroll_pane_01

0xc5b6,	// (0x0008ce10) list_single_double_fisheye_pane

0xc5bf,	// (0x0008ce19) list_double_fisheye_pane_g1_ParamLimits

0xc5bf,	// (0x0008ce19) list_double_fisheye_pane_g1

0xc5cb,	// (0x0008ce25) list_double_fisheye_pane_g2_ParamLimits

0xc5cb,	// (0x0008ce25) list_double_fisheye_pane_g2

0xc5df,	// (0x0008ce39) list_double_fisheye_pane_g3_ParamLimits

0xc5df,	// (0x0008ce39) list_double_fisheye_pane_g3

0x0004,

0xfcb7,	// (0x00090511) list_double_fisheye_pane_g_ParamLimits

0xfcb7,	// (0x00090511) list_double_fisheye_pane_g

0xc608,	// (0x0008ce62) list_double_fisheye_pane_t1_ParamLimits

0xc608,	// (0x0008ce62) list_double_fisheye_pane_t1

0xc623,	// (0x0008ce7d) list_double_fisheye_pane_t2_ParamLimits

0xc623,	// (0x0008ce7d) list_double_fisheye_pane_t2

0x0001,

0xfcc2,	// (0x0009051c) list_double_fisheye_pane_t_ParamLimits

0xfcc2,	// (0x0009051c) list_double_fisheye_pane_t

0x0164,	// (0x000809be) main_call5_pane

0xc3c9,	// (0x0008cc23) sc_swipe_pane_ParamLimits

0xc3c9,	// (0x0008cc23) sc_swipe_pane

0xc651,	// (0x0008ceab) call5_image_pane_ParamLimits

0xc651,	// (0x0008ceab) call5_image_pane

0xc663,	// (0x0008cebd) call5_swipe_1_pane_ParamLimits

0xc663,	// (0x0008cebd) call5_swipe_1_pane

0xc66f,	// (0x0008cec9) call5_swipe_2_pane_ParamLimits

0xc66f,	// (0x0008cec9) call5_swipe_2_pane

0xc68b,	// (0x0008cee5) popup_call5_audio_first_window_ParamLimits

0xc68b,	// (0x0008cee5) popup_call5_audio_first_window

0x1401,	// (0x00081c5b) call5_swipe_1_pane_g1_ParamLimits

0x1401,	// (0x00081c5b) call5_swipe_1_pane_g1

0x2d49,	// (0x000835a3) call5_swipe_1_pane_g2_ParamLimits

0x2d49,	// (0x000835a3) call5_swipe_1_pane_g2

0x0001,

0xfcc7,	// (0x00090521) call5_swipe_1_pane_g_ParamLimits

0xfcc7,	// (0x00090521) call5_swipe_1_pane_g

0x2d55,	// (0x000835af) call5_swipe_1_pane_t1_ParamLimits

0x2d55,	// (0x000835af) call5_swipe_1_pane_t1

0x1401,	// (0x00081c5b) call5_swipe_2_pane_g1_ParamLimits

0x1401,	// (0x00081c5b) call5_swipe_2_pane_g1

0x2d6a,	// (0x000835c4) call5_swipe_2_pane_g2_ParamLimits

0x2d6a,	// (0x000835c4) call5_swipe_2_pane_g2

0x0001,

0xfccc,	// (0x00090526) call5_swipe_2_pane_g_ParamLimits

0xfccc,	// (0x00090526) call5_swipe_2_pane_g

0x2d76,	// (0x000835d0) call5_swipe_2_pane_t1_ParamLimits

0x2d76,	// (0x000835d0) call5_swipe_2_pane_t1

0x2d8b,	// (0x000835e5) sc_swipe_pane_g1_ParamLimits

0x2d8b,	// (0x000835e5) sc_swipe_pane_g1

0x2d98,	// (0x000835f2) sc_swipe_pane_g2_ParamLimits

0x2d98,	// (0x000835f2) sc_swipe_pane_g2

0x0001,

0xfcd1,	// (0x0009052b) sc_swipe_pane_g_ParamLimits

0xfcd1,	// (0x0009052b) sc_swipe_pane_g

0x2da4,	// (0x000835fe) sc_swipe_pane_t1_ParamLimits

0x2da4,	// (0x000835fe) sc_swipe_pane_t1

0x0164,	// (0x000809be) main_cmail_launcher_pane

0xc69b,	// (0x0008cef5) aid_size_cell_cmail_l_ParamLimits

0xc69b,	// (0x0008cef5) aid_size_cell_cmail_l

0xc6ab,	// (0x0008cf05) grid_cmail_l_pane_ParamLimits

0xc6ab,	// (0x0008cf05) grid_cmail_l_pane

0xc6bb,	// (0x0008cf15) cell_cmail_l_pane_ParamLimits

0xc6bb,	// (0x0008cf15) cell_cmail_l_pane

0xc6d1,	// (0x0008cf2b) cell_cmail_l_pane_g1_ParamLimits

0xc6d1,	// (0x0008cf2b) cell_cmail_l_pane_g1

0xc6dd,	// (0x0008cf37) cell_cmail_l_pane_t1_ParamLimits

0xc6dd,	// (0x0008cf37) cell_cmail_l_pane_t1

0x2db9,	// (0x00083613) cell_cmail_l_pane_t2_ParamLimits

0x2db9,	// (0x00083613) cell_cmail_l_pane_t2

0x0001,

0xfcd6,	// (0x00090530) cell_cmail_l_pane_t_ParamLimits

0xfcd6,	// (0x00090530) cell_cmail_l_pane_t

0x01dd,	// (0x00080a37) grid_highlight_pane_cp018_ParamLimits

0x01dd,	// (0x00080a37) grid_highlight_pane_cp018

0x56dc,	// (0x00085f36) main2_pane_ParamLimits

0x56dc,	// (0x00085f36) main2_pane

0x45bf,	// (0x00084e19) popup_sp_fs_action_menu_bg_pane_g1

0x45c7,	// (0x00084e21) popup_sp_fs_action_menu_bg_pane_g2

0x45cf,	// (0x00084e29) popup_sp_fs_action_menu_bg_pane_g3

0x45d7,	// (0x00084e31) popup_sp_fs_action_menu_bg_pane_g4

0x45df,	// (0x00084e39) popup_sp_fs_action_menu_bg_pane_g5

0x45e7,	// (0x00084e41) popup_sp_fs_action_menu_bg_pane_g6

0x45ef,	// (0x00084e49) popup_sp_fs_action_menu_bg_pane_g7

0x45f7,	// (0x00084e51) popup_sp_fs_action_menu_bg_pane_g8

0x45ff,	// (0x00084e59) popup_sp_fs_action_menu_bg_pane_g9

0x4607,	// (0x00084e61) popup_sp_fs_action_menu_bg_pane_g10

0x4607,	// (0x00084e61) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x0008fa01) popup_sp_fs_action_menu_bg_pane_g

0x04fa,	// (0x00080d54) list_medium_line_x2_t3_g3_g1_ParamLimits

0x04fa,	// (0x00080d54) list_medium_line_x2_t3_g3_g1

0x0506,	// (0x00080d60) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0506,	// (0x00080d60) list_medium_line_x2_t3_g3_g2

0x0512,	// (0x00080d6c) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0512,	// (0x00080d6c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x0008fab1) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x0008fab1) list_medium_line_x2_t3_g3_g

0x051e,	// (0x00080d78) list_medium_line_x2_t3_g3_t1_ParamLimits

0x051e,	// (0x00080d78) list_medium_line_x2_t3_g3_t1

0x651e,	// (0x00086d78) list_medium_line_x2_t3_g3_t2_ParamLimits

0x651e,	// (0x00086d78) list_medium_line_x2_t3_g3_t2

0x0533,	// (0x00080d8d) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0533,	// (0x00080d8d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x0008fab8) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x0008fab8) list_medium_line_x2_t3_g3_t

0x04fa,	// (0x00080d54) list_medium_line_x2_t3_g2_g1_ParamLimits

0x04fa,	// (0x00080d54) list_medium_line_x2_t3_g2_g1

0x0512,	// (0x00080d6c) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0512,	// (0x00080d6c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x0008fabf) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x0008fabf) list_medium_line_x2_t3_g2_g

0x0548,	// (0x00080da2) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0548,	// (0x00080da2) list_medium_line_x2_t3_g2_t1

0x055e,	// (0x00080db8) list_medium_line_x2_t3_g2_t2_ParamLimits

0x055e,	// (0x00080db8) list_medium_line_x2_t3_g2_t2

0x0570,	// (0x00080dca) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0570,	// (0x00080dca) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x0008fac4) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x0008fac4) list_medium_line_x2_t3_g2_t

0x04fa,	// (0x00080d54) list_medium_line_x2_t4_g4_g1_ParamLimits

0x04fa,	// (0x00080d54) list_medium_line_x2_t4_g4_g1

0x058e,	// (0x00080de8) list_medium_line_x2_t4_g4_g2_ParamLimits

0x058e,	// (0x00080de8) list_medium_line_x2_t4_g4_g2

0x0506,	// (0x00080d60) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0506,	// (0x00080d60) list_medium_line_x2_t4_g4_g3

0x059a,	// (0x00080df4) list_medium_line_x2_t4_g4_g4_ParamLimits

0x059a,	// (0x00080df4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x0008facb) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x0008facb) list_medium_line_x2_t4_g4_g

0x6530,	// (0x00086d8a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6530,	// (0x00086d8a) list_medium_line_x2_t4_g4_t1

0x654a,	// (0x00086da4) list_medium_line_x2_t4_g4_t2_ParamLimits

0x654a,	// (0x00086da4) list_medium_line_x2_t4_g4_t2

0x6560,	// (0x00086dba) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6560,	// (0x00086dba) list_medium_line_x2_t4_g4_t3

0x05a6,	// (0x00080e00) list_medium_line_x2_t4_g4_t4_ParamLimits

0x05a6,	// (0x00080e00) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x0008fad4) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x0008fad4) list_medium_line_x2_t4_g4_t

0x04fa,	// (0x00080d54) list_medium_line_x2_t2_g4_g1_ParamLimits

0x04fa,	// (0x00080d54) list_medium_line_x2_t2_g4_g1

0x058e,	// (0x00080de8) list_medium_line_x2_t2_g4_g2_ParamLimits

0x058e,	// (0x00080de8) list_medium_line_x2_t2_g4_g2

0x0506,	// (0x00080d60) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0506,	// (0x00080d60) list_medium_line_x2_t2_g4_g3

0x0512,	// (0x00080d6c) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0512,	// (0x00080d6c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x0008fb3b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x0008fb3b) list_medium_line_x2_t2_g4_g

0x05b8,	// (0x00080e12) list_medium_line_x2_t2_g4_t1_ParamLimits

0x05b8,	// (0x00080e12) list_medium_line_x2_t2_g4_t1

0x0533,	// (0x00080d8d) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0533,	// (0x00080d8d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x0008fb44) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x0008fb44) list_medium_line_x2_t2_g4_t

0x04fa,	// (0x00080d54) list_medium_line_x2_t2_g3_g1_ParamLimits

0x04fa,	// (0x00080d54) list_medium_line_x2_t2_g3_g1

0x0506,	// (0x00080d60) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0506,	// (0x00080d60) list_medium_line_x2_t2_g3_g2

0x0512,	// (0x00080d6c) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0512,	// (0x00080d6c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x0008fab1) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x0008fab1) list_medium_line_x2_t2_g3_g

0x05cd,	// (0x00080e27) list_medium_line_x2_t2_g3_t1_ParamLimits

0x05cd,	// (0x00080e27) list_medium_line_x2_t2_g3_t1

0x0533,	// (0x00080d8d) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0533,	// (0x00080d8d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x0008fb49) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x0008fb49) list_medium_line_x2_t2_g3_t

0x7531,	// (0x00087d8b) main_sp_fs_list_pane_ParamLimits

0x7531,	// (0x00087d8b) main_sp_fs_list_pane

0x753d,	// (0x00087d97) sp_fs_scroll_pane_ParamLimits

0x753d,	// (0x00087d97) sp_fs_scroll_pane

0x7549,	// (0x00087da3) list_medium_line_x2_t3_t1

0x7559,	// (0x00087db3) list_medium_line_x2_t3_t2

0x0610,	// (0x00080e6a) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x0008fb94) list_medium_line_x2_t3_t

0x7567,	// (0x00087dc1) list_medium_line_x3_t4_t1

0x7577,	// (0x00087dd1) list_medium_line_x3_t4_t2

0x061e,	// (0x00080e78) list_medium_line_x3_t4_t3

0x0610,	// (0x00080e6a) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x0008fb9b) list_medium_line_x3_t4_t

0x7585,	// (0x00087ddf) list_medium_line_x4_t5_t1

0x7595,	// (0x00087def) list_medium_line_x4_t5_t2

0x061e,	// (0x00080e78) list_medium_line_x4_t5_t3

0x062c,	// (0x00080e86) list_medium_line_x4_t5_t4

0x0610,	// (0x00080e6a) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x0008fba4) list_medium_line_x4_t5_t

0x04fa,	// (0x00080d54) list_medium_line_t4_g4_g1_ParamLimits

0x04fa,	// (0x00080d54) list_medium_line_t4_g4_g1

0x059a,	// (0x00080df4) list_medium_line_t4_g4_g2_ParamLimits

0x059a,	// (0x00080df4) list_medium_line_t4_g4_g2

0x063a,	// (0x00080e94) list_medium_line_t4_g4_g3_ParamLimits

0x063a,	// (0x00080e94) list_medium_line_t4_g4_g3

0x0512,	// (0x00080d6c) list_medium_line_t4_g4_g4_ParamLimits

0x0512,	// (0x00080d6c) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x0008fbaf) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x0008fbaf) list_medium_line_t4_g4_g

0x0646,	// (0x00080ea0) list_medium_line_t4_g4_t1_ParamLimits

0x0646,	// (0x00080ea0) list_medium_line_t4_g4_t1

0x065b,	// (0x00080eb5) list_medium_line_t4_g4_t2_ParamLimits

0x065b,	// (0x00080eb5) list_medium_line_t4_g4_t2

0x0671,	// (0x00080ecb) list_medium_line_t4_g4_t3_ParamLimits

0x0671,	// (0x00080ecb) list_medium_line_t4_g4_t3

0x0533,	// (0x00080d8d) list_medium_line_t4_g4_t4_ParamLimits

0x0533,	// (0x00080d8d) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x0008fbb8) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x0008fbb8) list_medium_line_t4_g4_t

0x76b6,	// (0x00087f10) chi_dic_find_pane_g1

0x86dc,	// (0x00088f36) main_tport_pane

0x1e53,	// (0x000826ad) list_medium_line_plain_t1

0x1e69,	// (0x000826c3) list_medium_line_t2_g2_g1_ParamLimits

0x1e69,	// (0x000826c3) list_medium_line_t2_g2_g1

0x1e75,	// (0x000826cf) list_medium_line_t2_g2_g2_ParamLimits

0x1e75,	// (0x000826cf) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x00090274) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x00090274) list_medium_line_t2_g2_g

0xb219,	// (0x0008ba73) list_medium_line_t2_g2_t1_ParamLimits

0xb219,	// (0x0008ba73) list_medium_line_t2_g2_t1

0xb230,	// (0x0008ba8a) list_medium_line_t2_g2_t2_ParamLimits

0xb230,	// (0x0008ba8a) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x00090279) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x00090279) list_medium_line_t2_g2_t

0x21a7,	// (0x00082a01) aid_sp_fs_list_icon_a_sm

0x416d,	// (0x000849c7) aid_sp_fs_list_icon_d

0x21af,	// (0x00082a09) aid_sp_fs_text_primary

0x4175,	// (0x000849cf) aid_sp_fs_text_secondary

0x21b8,	// (0x00082a12) list_medium_line

0x21b8,	// (0x00082a12) list_medium_line_g2

0x21b8,	// (0x00082a12) list_medium_line_g3

0x21b8,	// (0x00082a12) list_medium_line_plain

0x21b8,	// (0x00082a12) list_medium_line_plain_t2

0x21b8,	// (0x00082a12) list_medium_line_plain_t3

0x21b8,	// (0x00082a12) list_medium_line_right_icon

0x21b8,	// (0x00082a12) list_medium_line_right_iconx2

0x21b8,	// (0x00082a12) list_medium_line_t2

0x21b8,	// (0x00082a12) list_medium_line_t2_g2

0x21b8,	// (0x00082a12) list_medium_line_t2_g3

0x21b8,	// (0x00082a12) list_medium_line_t2_right_icon

0x21b8,	// (0x00082a12) list_medium_line_t2_right_iconx2

0x21b8,	// (0x00082a12) list_medium_line_t3

0x21b8,	// (0x00082a12) list_medium_line_t3_g2

0x21b8,	// (0x00082a12) list_medium_line_t3_g3

0x21b8,	// (0x00082a12) list_medium_line_t3_right_iconx2

0x21c1,	// (0x00082a1b) list_medium_line_t4_g4

0x21ca,	// (0x00082a24) list_medium_line_x2

0x21ca,	// (0x00082a24) list_medium_line_x2_t2_g2

0x21ca,	// (0x00082a24) list_medium_line_x2_t2_g3

0x21ca,	// (0x00082a24) list_medium_line_x2_t2_g4

0x21ca,	// (0x00082a24) list_medium_line_x2_t3

0x21ca,	// (0x00082a24) list_medium_line_x2_t3_g2

0x21ca,	// (0x00082a24) list_medium_line_x2_t3_g3

0x21ca,	// (0x00082a24) list_medium_line_x2_t3_g4

0x21ca,	// (0x00082a24) list_medium_line_x2_t4_g2

0x21ca,	// (0x00082a24) list_medium_line_x2_t4_g4

0x21d3,	// (0x00082a2d) list_medium_line_x3

0x21d3,	// (0x00082a2d) list_medium_line_x3_t4

0x21d3,	// (0x00082a2d) list_medium_line_x3_t4_g4

0x21c1,	// (0x00082a1b) list_medium_line_x4_t4

0x21c1,	// (0x00082a1b) list_medium_line_x4_t4_g7

0x21c1,	// (0x00082a1b) list_medium_line_x4_t5

0x21dc,	// (0x00082a36) list_single_fs_dyc_pane_ParamLimits

0x21dc,	// (0x00082a36) list_single_fs_dyc_pane

0x04fa,	// (0x00080d54) list_medium_line_x4_t4_g7_g1_ParamLimits

0x04fa,	// (0x00080d54) list_medium_line_x4_t4_g7_g1

0x26e3,	// (0x00082f3d) list_medium_line_x4_t4_g7_g2_ParamLimits

0x26e3,	// (0x00082f3d) list_medium_line_x4_t4_g7_g2

0x26ef,	// (0x00082f49) list_medium_line_x4_t4_g7_g3_ParamLimits

0x26ef,	// (0x00082f49) list_medium_line_x4_t4_g7_g3

0x26fe,	// (0x00082f58) list_medium_line_x4_t4_g7_g4_ParamLimits

0x26fe,	// (0x00082f58) list_medium_line_x4_t4_g7_g4

0x270a,	// (0x00082f64) list_medium_line_x4_t4_g7_g5_ParamLimits

0x270a,	// (0x00082f64) list_medium_line_x4_t4_g7_g5

0x2719,	// (0x00082f73) list_medium_line_x4_t4_g7_g6_ParamLimits

0x2719,	// (0x00082f73) list_medium_line_x4_t4_g7_g6

0x2728,	// (0x00082f82) list_medium_line_x4_t4_g7_g7_ParamLimits

0x2728,	// (0x00082f82) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0009043d) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0009043d) list_medium_line_x4_t4_g7_g

0x2734,	// (0x00082f8e) list_medium_line_x4_t4_g7_t1_ParamLimits

0x2734,	// (0x00082f8e) list_medium_line_x4_t4_g7_t1

0x2749,	// (0x00082fa3) list_medium_line_x4_t4_g7_t2_ParamLimits

0x2749,	// (0x00082fa3) list_medium_line_x4_t4_g7_t2

0x275e,	// (0x00082fb8) list_medium_line_x4_t4_g7_t3_ParamLimits

0x275e,	// (0x00082fb8) list_medium_line_x4_t4_g7_t3

0x2773,	// (0x00082fcd) list_medium_line_x4_t4_g7_t4_ParamLimits

0x2773,	// (0x00082fcd) list_medium_line_x4_t4_g7_t4

0x2785,	// (0x00082fdf) list_medium_line_x4_t4_g7_t5_ParamLimits

0x2785,	// (0x00082fdf) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0009044c) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0009044c) list_medium_line_x4_t4_g7_t

0x2797,	// (0x00082ff1) list_single_dyc_row_pane_ParamLimits

0x2797,	// (0x00082ff1) list_single_dyc_row_pane

0xc645,	// (0x0008ce9f) call5_gesture_pane_ParamLimits

0xc645,	// (0x0008ce9f) call5_gesture_pane

0xc67b,	// (0x0008ced5) call5_windows_pane_ParamLimits

0xc67b,	// (0x0008ced5) call5_windows_pane

0xc6f3,	// (0x0008cf4d) call5_swipe_1_pane_cp_ParamLimits

0xc6f3,	// (0x0008cf4d) call5_swipe_1_pane_cp

0xc6ff,	// (0x0008cf59) call5_swipe_2_pane_cp_ParamLimits

0xc6ff,	// (0x0008cf59) call5_swipe_2_pane_cp

0xe1b3,	// (0x0008ea0d) call5_image_pane_cp

0xc70b,	// (0x0008cf65) popup_call5_audio_first_window_cp_ParamLimits

0xc70b,	// (0x0008cf65) popup_call5_audio_first_window_cp

0x2d8b,	// (0x000835e5) call5_swipe_1_pane_g1_cp_ParamLimits

0x2d8b,	// (0x000835e5) call5_swipe_1_pane_g1_cp

0x2dcb,	// (0x00083625) call5_swipe_1_pane_g2_cp

0x2da4,	// (0x000835fe) call5_swipe_1_pane_t1_cp_ParamLimits

0x2da4,	// (0x000835fe) call5_swipe_1_pane_t1_cp

0x2d8b,	// (0x000835e5) call5_swipe_2_pane_g1_cp_ParamLimits

0x2d8b,	// (0x000835e5) call5_swipe_2_pane_g1_cp

0x2dd3,	// (0x0008362d) call5_swipe_2_pane_g2_cp

0x2ddb,	// (0x00083635) call5_swipe_2_pane_t1_cp_ParamLimits

0x2ddb,	// (0x00083635) call5_swipe_2_pane_t1_cp

0x01dd,	// (0x00080a37) main_sp_fs_email_pane

0x2df0,	// (0x0008364a) main_sp_fs_listscroll_pane_te

0x2df9,	// (0x00083653) popup_sp_fs_action_menu_pane_ParamLimits

0x2df9,	// (0x00083653) popup_sp_fs_action_menu_pane

0x11d1,	// (0x00081a2b) bg_sp_fs_ctrlbar_pane_g1

0x2e3f,	// (0x00083699) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x2e48,	// (0x000836a2) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2e51,	// (0x000836ab) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x11d1,	// (0x00081a2b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcdb,	// (0x00090535) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x0fb0,	// (0x0008180a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x0fb0,	// (0x0008180a) bg_sp_fs_ctrlbar_ddmenu_pane

0x2e5a,	// (0x000836b4) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x2e5a,	// (0x000836b4) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x2e66,	// (0x000836c0) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x2e66,	// (0x000836c0) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce4,	// (0x0009053e) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce4,	// (0x0009053e) main_sp_fs_ctrlbar_ddmenu_pane_g

0x2e72,	// (0x000836cc) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x2e72,	// (0x000836cc) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x2e8c,	// (0x000836e6) list_medium_line_t2_right_icon_g1

0xc719,	// (0x0008cf73) list_medium_line_t2_right_icon_t1

0xc729,	// (0x0008cf83) list_medium_line_t2_right_icon_t2

0x0001,

0xfce9,	// (0x00090543) list_medium_line_t2_right_icon_t

0x0c9c,	// (0x000814f6) bg_sp_fs_ctrlbar_pane_ParamLimits

0x0c9c,	// (0x000814f6) bg_sp_fs_ctrlbar_pane

0xc78e,	// (0x0008cfe8) main_sp_fs_ctrlbar_button_pane_cp01

0xc796,	// (0x0008cff0) main_sp_fs_ctrlbar_ddmenu_pane

0x2ece,	// (0x00083728) main_sp_fs_ctrlbar_pane_g1

0x2eda,	// (0x00083734) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcee,	// (0x00090548) main_sp_fs_ctrlbar_pane_g

0x2ee6,	// (0x00083740) main_sp_fs_ctrlbar_pane_t1

0xc7a0,	// (0x0008cffa) main_sp_fs_ctrlbar_pane

0xc7bc,	// (0x0008d016) main_sp_fs_listscroll_pane_te_cp01

0xc7cd,	// (0x0008d027) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc7cd,	// (0x0008d027) popup_sp_fs_action_menu_pane_cp01

0x01dd,	// (0x00080a37) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x01dd,	// (0x00080a37) bg_sp_fs_highlight_list_pane_cp01

0x2f0b,	// (0x00083765) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x2f0b,	// (0x00083765) sp_fs_action_menu_list_gene_pane_g1

0x2f1a,	// (0x00083774) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x2f1a,	// (0x00083774) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf8,	// (0x00090552) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf8,	// (0x00090552) sp_fs_action_menu_list_gene_pane_g

0x2f27,	// (0x00083781) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x2f27,	// (0x00083781) sp_fs_action_menu_list_gene_pane_t1

0x2f3f,	// (0x00083799) sp_fs_action_menu_list_gene_pane_ParamLimits

0x2f3f,	// (0x00083799) sp_fs_action_menu_list_gene_pane

0x2f62,	// (0x000837bc) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x2f62,	// (0x000837bc) popup_sp_fs_action_menu_bg_pane

0x2f70,	// (0x000837ca) sp_fs_action_menu_list_pane_ParamLimits

0x2f70,	// (0x000837ca) sp_fs_action_menu_list_pane

0x2f94,	// (0x000837ee) sp_fs_scroll_pane_cp01_ParamLimits

0x2f94,	// (0x000837ee) sp_fs_scroll_pane_cp01

0xc7e7,	// (0x0008d041) list_medium_line_plain_t2_t1

0xc7f7,	// (0x0008d051) list_medium_line_plain_t2_t2

0x0001,

0xfcfd,	// (0x00090557) list_medium_line_plain_t2_t

0xc805,	// (0x0008d05f) list_medium_line_plain_t3_t1

0xc815,	// (0x0008d06f) list_medium_line_plain_t3_t2

0xc823,	// (0x0008d07d) list_medium_line_plain_t3_t3

0x0002,

0xfd02,	// (0x0009055c) list_medium_line_plain_t3_t

0x04fa,	// (0x00080d54) list_medium_line_x2_t2_g2_g1_ParamLimits

0x04fa,	// (0x00080d54) list_medium_line_x2_t2_g2_g1

0x0512,	// (0x00080d6c) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0512,	// (0x00080d6c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x0008fabf) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x0008fabf) list_medium_line_x2_t2_g2_g

0x0646,	// (0x00080ea0) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0646,	// (0x00080ea0) list_medium_line_x2_t2_g2_t1

0x0533,	// (0x00080d8d) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0533,	// (0x00080d8d) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd09,	// (0x00090563) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd09,	// (0x00090563) list_medium_line_x2_t2_g2_t

0x04fa,	// (0x00080d54) list_medium_line_x2_t4_g2_g1_ParamLimits

0x04fa,	// (0x00080d54) list_medium_line_x2_t4_g2_g1

0x2fba,	// (0x00083814) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2fba,	// (0x00083814) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd0e,	// (0x00090568) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd0e,	// (0x00090568) list_medium_line_x2_t4_g2_g

0xc831,	// (0x0008d08b) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc831,	// (0x0008d08b) list_medium_line_x2_t4_g2_t1

0xc84b,	// (0x0008d0a5) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc84b,	// (0x0008d0a5) list_medium_line_x2_t4_g2_t2

0xc861,	// (0x0008d0bb) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc861,	// (0x0008d0bb) list_medium_line_x2_t4_g2_t3

0x0533,	// (0x00080d8d) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0533,	// (0x00080d8d) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd13,	// (0x0009056d) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd13,	// (0x0009056d) list_medium_line_x2_t4_g2_t

0x2fcc,	// (0x00083826) list_medium_line_t3_right_iconx2_g1

0x2e8c,	// (0x000836e6) list_medium_line_t3_right_iconx2_g2

0xc876,	// (0x0008d0d0) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1c,	// (0x00090576) list_medium_line_t3_right_iconx2_g

0xc87e,	// (0x0008d0d8) list_medium_line_t3_right_iconx2_t1

0xc88e,	// (0x0008d0e8) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd23,	// (0x0009057d) list_medium_line_t3_right_iconx2_t

0x04fa,	// (0x00080d54) list_medium_line_x3_t4_g4_g1_ParamLimits

0x04fa,	// (0x00080d54) list_medium_line_x3_t4_g4_g1

0x0506,	// (0x00080d60) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0506,	// (0x00080d60) list_medium_line_x3_t4_g4_g2

0x059a,	// (0x00080df4) list_medium_line_x3_t4_g4_g3_ParamLimits

0x059a,	// (0x00080df4) list_medium_line_x3_t4_g4_g3

0x2fd4,	// (0x0008382e) list_medium_line_x3_t4_g4_g4_ParamLimits

0x2fd4,	// (0x0008382e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd28,	// (0x00090582) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd28,	// (0x00090582) list_medium_line_x3_t4_g4_g

0xc89c,	// (0x0008d0f6) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc89c,	// (0x0008d0f6) list_medium_line_x3_t4_g4_t1

0xc8b3,	// (0x0008d10d) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc8b3,	// (0x0008d10d) list_medium_line_x3_t4_g4_t2

0x2fe0,	// (0x0008383a) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2fe0,	// (0x0008383a) list_medium_line_x3_t4_g4_t3

0x2ff5,	// (0x0008384f) list_medium_line_x3_t4_g4_t4_ParamLimits

0x2ff5,	// (0x0008384f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd31,	// (0x0009058b) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd31,	// (0x0009058b) list_medium_line_x3_t4_g4_t

0xc8c8,	// (0x0008d122) list_single_dyc_row_text_pane_t1_ParamLimits

0xc8c8,	// (0x0008d122) list_single_dyc_row_text_pane_t1

0xc90b,	// (0x0008d165) list_single_dyc_row_text_pane_t2_ParamLimits

0xc90b,	// (0x0008d165) list_single_dyc_row_text_pane_t2

0x3012,	// (0x0008386c) list_single_dyc_row_text_pane_t3_ParamLimits

0x3012,	// (0x0008386c) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3a,	// (0x00090594) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3a,	// (0x00090594) list_single_dyc_row_text_pane_t

0x3024,	// (0x0008387e) list_single_dyc_row_pane_g1_ParamLimits

0x3024,	// (0x0008387e) list_single_dyc_row_pane_g1

0x3030,	// (0x0008388a) list_single_dyc_row_pane_g2_ParamLimits

0x3030,	// (0x0008388a) list_single_dyc_row_pane_g2

0x303c,	// (0x00083896) list_single_dyc_row_pane_g3_ParamLimits

0x303c,	// (0x00083896) list_single_dyc_row_pane_g3

0x3048,	// (0x000838a2) list_single_dyc_row_pane_g4_ParamLimits

0x3048,	// (0x000838a2) list_single_dyc_row_pane_g4

0x0003,

0xfd41,	// (0x0009059b) list_single_dyc_row_pane_g_ParamLimits

0xfd41,	// (0x0009059b) list_single_dyc_row_pane_g

0x3054,	// (0x000838ae) list_single_dyc_row_text_pane_ParamLimits

0x3054,	// (0x000838ae) list_single_dyc_row_text_pane

0x0164,	// (0x000809be) bg_sp_fs_scroll_pane

0x3073,	// (0x000838cd) thumb_sp_fs_scroll_pane

0x1e69,	// (0x000826c3) list_medium_line_g1_ParamLimits

0x1e69,	// (0x000826c3) list_medium_line_g1

0x307c,	// (0x000838d6) list_medium_line_t1_ParamLimits

0x307c,	// (0x000838d6) list_medium_line_t1

0x04fa,	// (0x00080d54) list_medium_line_x2_g1_ParamLimits

0x04fa,	// (0x00080d54) list_medium_line_x2_g1

0x0506,	// (0x00080d60) list_medium_line_x2_g2_ParamLimits

0x0506,	// (0x00080d60) list_medium_line_x2_g2

0x0001,

0xfd4a,	// (0x000905a4) list_medium_line_x2_g_ParamLimits

0xfd4a,	// (0x000905a4) list_medium_line_x2_g

0x3091,	// (0x000838eb) list_medium_line_x2_t1_ParamLimits

0x3091,	// (0x000838eb) list_medium_line_x2_t1

0x04fa,	// (0x00080d54) list_medium_line_x3_g1_ParamLimits

0x04fa,	// (0x00080d54) list_medium_line_x3_g1

0x0506,	// (0x00080d60) list_medium_line_x3_g2_ParamLimits

0x0506,	// (0x00080d60) list_medium_line_x3_g2

0x0001,

0xfd4a,	// (0x000905a4) list_medium_line_x3_g_ParamLimits

0xfd4a,	// (0x000905a4) list_medium_line_x3_g

0x3091,	// (0x000838eb) list_medium_line_x3_t1_ParamLimits

0x3091,	// (0x000838eb) list_medium_line_x3_t1

0x30a7,	// (0x00083901) thumb_sp_fs_scroll_pane_g1

0x30b0,	// (0x0008390a) thumb_sp_fs_scroll_pane_g2

0x30b9,	// (0x00083913) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4f,	// (0x000905a9) thumb_sp_fs_scroll_pane_g

0x30a7,	// (0x00083901) bg_sp_fs_scroll_pane_g1

0x30b0,	// (0x0008390a) bg_sp_fs_scroll_pane_g2

0x30b9,	// (0x00083913) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4f,	// (0x000905a9) bg_sp_fs_scroll_pane_g

0x04fa,	// (0x00080d54) list_medium_line_x2_t3_g4_g1_ParamLimits

0x04fa,	// (0x00080d54) list_medium_line_x2_t3_g4_g1

0x058e,	// (0x00080de8) list_medium_line_x2_t3_g4_g2_ParamLimits

0x058e,	// (0x00080de8) list_medium_line_x2_t3_g4_g2

0x0506,	// (0x00080d60) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0506,	// (0x00080d60) list_medium_line_x2_t3_g4_g3

0x0512,	// (0x00080d6c) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0512,	// (0x00080d6c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x0008fb3b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x0008fb3b) list_medium_line_x2_t3_g4_g

0xc965,	// (0x0008d1bf) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc965,	// (0x0008d1bf) list_medium_line_x2_t3_g4_t1

0xc97b,	// (0x0008d1d5) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc97b,	// (0x0008d1d5) list_medium_line_x2_t3_g4_t2

0x0533,	// (0x00080d8d) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0533,	// (0x00080d8d) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd56,	// (0x000905b0) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd56,	// (0x000905b0) list_medium_line_x2_t3_g4_t

0x1e69,	// (0x000826c3) list_medium_line_g2_g1_ParamLimits

0x1e69,	// (0x000826c3) list_medium_line_g2_g1

0x1e75,	// (0x000826cf) list_medium_line_g2_g2_ParamLimits

0x1e75,	// (0x000826cf) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x00090274) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x00090274) list_medium_line_g2_g

0x30c2,	// (0x0008391c) list_medium_line_g2_t1_ParamLimits

0x30c2,	// (0x0008391c) list_medium_line_g2_t1

0x1e69,	// (0x000826c3) list_medium_line_t3_g2_g1_ParamLimits

0x1e69,	// (0x000826c3) list_medium_line_t3_g2_g1

0x1e75,	// (0x000826cf) list_medium_line_t3_g2_g2_ParamLimits

0x1e75,	// (0x000826cf) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x00090274) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x00090274) list_medium_line_t3_g2_g

0xc994,	// (0x0008d1ee) list_medium_line_t3_g2_t1_ParamLimits

0xc994,	// (0x0008d1ee) list_medium_line_t3_g2_t1

0xc9ae,	// (0x0008d208) list_medium_line_t3_g2_t2_ParamLimits

0xc9ae,	// (0x0008d208) list_medium_line_t3_g2_t2

0xc9c4,	// (0x0008d21e) list_medium_line_t3_g2_t3_ParamLimits

0xc9c4,	// (0x0008d21e) list_medium_line_t3_g2_t3

0x0002,

0xfd5d,	// (0x000905b7) list_medium_line_t3_g2_t_ParamLimits

0xfd5d,	// (0x000905b7) list_medium_line_t3_g2_t

0x2e8c,	// (0x000836e6) list_medium_line_right_icon_g1

0x30d7,	// (0x00083931) list_medium_line_right_icon_t1

0x1e69,	// (0x000826c3) list_medium_line_t2_g1_ParamLimits

0x1e69,	// (0x000826c3) list_medium_line_t2_g1

0xc9db,	// (0x0008d235) list_medium_line_t2_t1_ParamLimits

0xc9db,	// (0x0008d235) list_medium_line_t2_t1

0xc9f5,	// (0x0008d24f) list_medium_line_t2_t2_ParamLimits

0xc9f5,	// (0x0008d24f) list_medium_line_t2_t2

0x0001,

0xfd64,	// (0x000905be) list_medium_line_t2_t_ParamLimits

0xfd64,	// (0x000905be) list_medium_line_t2_t

0x1e69,	// (0x000826c3) list_medium_line_t3_g1_ParamLimits

0x1e69,	// (0x000826c3) list_medium_line_t3_g1

0xca0a,	// (0x0008d264) list_medium_line_t3_t1_ParamLimits

0xca0a,	// (0x0008d264) list_medium_line_t3_t1

0xca21,	// (0x0008d27b) list_medium_line_t3_t2_ParamLimits

0xca21,	// (0x0008d27b) list_medium_line_t3_t2

0xca36,	// (0x0008d290) list_medium_line_t3_t3_ParamLimits

0xca36,	// (0x0008d290) list_medium_line_t3_t3

0x0002,

0xfd69,	// (0x000905c3) list_medium_line_t3_t_ParamLimits

0xfd69,	// (0x000905c3) list_medium_line_t3_t

0x1e69,	// (0x000826c3) list_medium_line_g3_g1_ParamLimits

0x1e69,	// (0x000826c3) list_medium_line_g3_g1

0x30e5,	// (0x0008393f) list_medium_line_g3_g2_ParamLimits

0x30e5,	// (0x0008393f) list_medium_line_g3_g2

0x1e75,	// (0x000826cf) list_medium_line_g3_g3_ParamLimits

0x1e75,	// (0x000826cf) list_medium_line_g3_g3

0x0002,

0xfd70,	// (0x000905ca) list_medium_line_g3_g_ParamLimits

0xfd70,	// (0x000905ca) list_medium_line_g3_g

0x30f1,	// (0x0008394b) list_medium_line_g3_t1_ParamLimits

0x30f1,	// (0x0008394b) list_medium_line_g3_t1

0x1e69,	// (0x000826c3) list_medium_line_t2_g3_g1_ParamLimits

0x1e69,	// (0x000826c3) list_medium_line_t2_g3_g1

0x30e5,	// (0x0008393f) list_medium_line_t2_g3_g2_ParamLimits

0x30e5,	// (0x0008393f) list_medium_line_t2_g3_g2

0x1e75,	// (0x000826cf) list_medium_line_t2_g3_g3_ParamLimits

0x1e75,	// (0x000826cf) list_medium_line_t2_g3_g3

0x0002,

0xfd70,	// (0x000905ca) list_medium_line_t2_g3_g_ParamLimits

0xfd70,	// (0x000905ca) list_medium_line_t2_g3_g

0xca48,	// (0x0008d2a2) list_medium_line_t2_g3_t1_ParamLimits

0xca48,	// (0x0008d2a2) list_medium_line_t2_g3_t1

0xca5f,	// (0x0008d2b9) list_medium_line_t2_g3_t2_ParamLimits

0xca5f,	// (0x0008d2b9) list_medium_line_t2_g3_t2

0x0001,

0xfd77,	// (0x000905d1) list_medium_line_t2_g3_t_ParamLimits

0xfd77,	// (0x000905d1) list_medium_line_t2_g3_t

0x1e69,	// (0x000826c3) list_medium_line_t3_g3_g1_ParamLimits

0x1e69,	// (0x000826c3) list_medium_line_t3_g3_g1

0x30e5,	// (0x0008393f) list_medium_line_t3_g3_g2_ParamLimits

0x30e5,	// (0x0008393f) list_medium_line_t3_g3_g2

0x1e75,	// (0x000826cf) list_medium_line_t3_g3_g3_ParamLimits

0x1e75,	// (0x000826cf) list_medium_line_t3_g3_g3

0x0002,

0xfd70,	// (0x000905ca) list_medium_line_t3_g3_g_ParamLimits

0xfd70,	// (0x000905ca) list_medium_line_t3_g3_g

0xca74,	// (0x0008d2ce) list_medium_line_t3_g3_t1_ParamLimits

0xca74,	// (0x0008d2ce) list_medium_line_t3_g3_t1

0xca88,	// (0x0008d2e2) list_medium_line_t3_g3_t2_ParamLimits

0xca88,	// (0x0008d2e2) list_medium_line_t3_g3_t2

0xca9a,	// (0x0008d2f4) list_medium_line_t3_g3_t3_ParamLimits

0xca9a,	// (0x0008d2f4) list_medium_line_t3_g3_t3

0x0002,

0xfd7c,	// (0x000905d6) list_medium_line_t3_g3_t_ParamLimits

0xfd7c,	// (0x000905d6) list_medium_line_t3_g3_t

0x2fcc,	// (0x00083826) list_medium_line_right_iconx2_g1

0x2e8c,	// (0x000836e6) list_medium_line_right_iconx2_g2

0x0001,

0xfd83,	// (0x000905dd) list_medium_line_right_iconx2_g

0x3106,	// (0x00083960) list_medium_line_right_iconx2_t1

0x2fcc,	// (0x00083826) list_medium_line_t2_right_iconx2_g1

0x2e8c,	// (0x000836e6) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd83,	// (0x000905dd) list_medium_line_t2_right_iconx2_g

0xcaae,	// (0x0008d308) list_medium_line_t2_right_iconx2_t1

0xcabe,	// (0x0008d318) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd88,	// (0x000905e2) list_medium_line_t2_right_iconx2_t

0x3114,	// (0x0008396e) list_medium_line_x4_t4_t1

0xcacc,	// (0x0008d326) list_medium_line_x4_t4_t2

0xcadc,	// (0x0008d336) list_medium_line_x4_t4_t3

0xcaec,	// (0x0008d346) list_medium_line_x4_t4_t4

0x0003,

0xfd8d,	// (0x000905e7) list_medium_line_x4_t4_t

0xcb25,	// (0x0008d37f) tport_appsw_pane_ParamLimits

0xcb25,	// (0x0008d37f) tport_appsw_pane

0xcb33,	// (0x0008d38d) tport_contact_pane_ParamLimits

0xcb33,	// (0x0008d38d) tport_contact_pane

0xcb41,	// (0x0008d39b) tport_listscroll_pane_ParamLimits

0xcb41,	// (0x0008d39b) tport_listscroll_pane

0xcb4f,	// (0x0008d3a9) cell_tport_appsw_pane_ParamLimits

0xcb4f,	// (0x0008d3a9) cell_tport_appsw_pane

0x1472,	// (0x00081ccc) tport_appsw_pane_g1_ParamLimits

0x1472,	// (0x00081ccc) tport_appsw_pane_g1

0x3122,	// (0x0008397c) tport_contact_pane_g1

0x312b,	// (0x00083985) tport_contact_pane_t1

0x3139,	// (0x00083993) tport_contact_pane_t2

0x0001,

0xfd96,	// (0x000905f0) tport_contact_pane_t

0x3147,	// (0x000839a1) list_tport_pane

0x3150,	// (0x000839aa) scroll_pane_cp_030

0xcb7a,	// (0x0008d3d4) cell_tport_appsw_pane_g1

0x3169,	// (0x000839c3) cell_tport_appsw_pane_t1

0x0164,	// (0x000809be) grid_highlight_pane_cp019

0xcb8a,	// (0x0008d3e4) list_tport_double_graphic_pane_ParamLimits

0xcb8a,	// (0x0008d3e4) list_tport_double_graphic_pane

0x01dd,	// (0x00080a37) list_highlight_pane_cp023_ParamLimits

0x01dd,	// (0x00080a37) list_highlight_pane_cp023

0xcb9b,	// (0x0008d3f5) list_tport_double_graphic_pane_g1_ParamLimits

0xcb9b,	// (0x0008d3f5) list_tport_double_graphic_pane_g1

0xcba8,	// (0x0008d402) list_tport_double_graphic_pane_t1_ParamLimits

0xcba8,	// (0x0008d402) list_tport_double_graphic_pane_t1

0xcbbd,	// (0x0008d417) list_tport_double_graphic_pane_t2_ParamLimits

0xcbbd,	// (0x0008d417) list_tport_double_graphic_pane_t2

0x0001,

0xfda2,	// (0x000905fc) list_tport_double_graphic_pane_t_ParamLimits

0xfda2,	// (0x000905fc) list_tport_double_graphic_pane_t

0x0164,	// (0x000809be) main_cale_note_pane

0xa9bd,	// (0x0008b217) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa9bd,	// (0x0008b217) cell_vitu2_function_top_wide_pane_cp01

0xc318,	// (0x0008cb72) wait_bar_pane_cp05_ParamLimits

0x0164,	// (0x000809be) listscroll_cmail_pane

0x317f,	// (0x000839d9) list_cmail_pane

0xcbd9,	// (0x0008d433) list_cmail_body_pane

0xcbee,	// (0x0008d448) list_single_cmail_header_caption_pane

0xcc08,	// (0x0008d462) list_single_cmail_header_detail_pane_ParamLimits

0xcc08,	// (0x0008d462) list_single_cmail_header_detail_pane

0xcc37,	// (0x0008d491) list_single_cmail_header_caption_pane_t1

0xcc47,	// (0x0008d4a1) list_single_cmail_header_detail_pane_g1_ParamLimits

0xcc47,	// (0x0008d4a1) list_single_cmail_header_detail_pane_g1

0x419a,	// (0x000849f4) list_single_cmail_header_detail_pane_g2_ParamLimits

0x419a,	// (0x000849f4) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda7,	// (0x00090601) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda7,	// (0x00090601) list_single_cmail_header_detail_pane_g

0x31ac,	// (0x00083a06) list_single_cmail_header_detail_pane_t1_ParamLimits

0x31ac,	// (0x00083a06) list_single_cmail_header_detail_pane_t1

0x31ea,	// (0x00083a44) list_single_cmail_header_editor_pane_bg_ParamLimits

0x31ea,	// (0x00083a44) list_single_cmail_header_editor_pane_bg

0x2a33,	// (0x0008328d) list_cmail_body_pane_g1

0x31fc,	// (0x00083a56) list_cmail_body_pane_t1

0x1c0e,	// (0x00082468) list_single_cmail_header_editor_pane_bg_g1

0xdb69,	// (0x0008e3c3) list_single_cmail_header_editor_pane_bg_g1_copy1

0x1c1e,	// (0x00082478) list_single_cmail_header_editor_pane_bg_g1_copy2

0x1c16,	// (0x00082470) list_single_cmail_header_editor_pane_bg_g1_copy3

0x1e61,	// (0x000826bb) list_single_cmail_header_editor_pane_bg_g1_copy4

0x1c3e,	// (0x00082498) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x1c2e,	// (0x00082488) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x1c36,	// (0x00082490) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xdb49,	// (0x0008e3a3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcc85,	// (0x0008d4df) calenote_gesture_pane_ParamLimits

0xcc85,	// (0x0008d4df) calenote_gesture_pane

0xcc9f,	// (0x0008d4f9) calenote_window_pane_ParamLimits

0xcc9f,	// (0x0008d4f9) calenote_window_pane

0x320a,	// (0x00083a64) popup_note_window_cp01

0xccb7,	// (0x0008d511) calenote_swipe_1_pane_ParamLimits

0xccb7,	// (0x0008d511) calenote_swipe_1_pane

0xc6ff,	// (0x0008cf59) calenote_swipe_2_pane_ParamLimits

0xc6ff,	// (0x0008cf59) calenote_swipe_2_pane

0x2d8b,	// (0x000835e5) calenote_swipe_1_pane_g1_ParamLimits

0x2d8b,	// (0x000835e5) calenote_swipe_1_pane_g1

0x2d98,	// (0x000835f2) calenote_swipe_1_pane_g2_ParamLimits

0x2d98,	// (0x000835f2) calenote_swipe_1_pane_g2

0x0001,

0xfcd1,	// (0x0009052b) calenote_swipe_1_pane_g_ParamLimits

0xfcd1,	// (0x0009052b) calenote_swipe_1_pane_g

0x321c,	// (0x00083a76) calenote_swipe_1_pane_t1_ParamLimits

0x321c,	// (0x00083a76) calenote_swipe_1_pane_t1

0x2d8b,	// (0x000835e5) calenote_swipe_2_pane_g1_ParamLimits

0x2d8b,	// (0x000835e5) calenote_swipe_2_pane_g1

0x323b,	// (0x00083a95) calenote_swipe_2_pane_g2_ParamLimits

0x323b,	// (0x00083a95) calenote_swipe_2_pane_g2

0x0001,

0xfdb3,	// (0x0009060d) calenote_swipe_2_pane_g_ParamLimits

0xfdb3,	// (0x0009060d) calenote_swipe_2_pane_g

0x3247,	// (0x00083aa1) calenote_swipe_2_pane_t1_ParamLimits

0x3247,	// (0x00083aa1) calenote_swipe_2_pane_t1

0x0164,	// (0x000809be) main_mup_navstr_pane

0x96db,	// (0x00089f35) main_mup3_pane_t7_ParamLimits

0x96db,	// (0x00089f35) main_mup3_pane_t7

0xa0ce,	// (0x0008a928) main_mp4_pane_g6_ParamLimits

0xa0ce,	// (0x0008a928) main_mp4_pane_g6

0xa44c,	// (0x0008aca6) main_image3_pane_t4_ParamLimits

0xa44c,	// (0x0008aca6) main_image3_pane_t4

0xccca,	// (0x0008d524) popup_navstr_preview_pane_ParamLimits

0xccca,	// (0x0008d524) popup_navstr_preview_pane

0xccd6,	// (0x0008d530) scroll_navstr_pane_ParamLimits

0xccd6,	// (0x0008d530) scroll_navstr_pane

0x0164,	// (0x000809be) bg_popup_preview_window_pane_cp04

0x326e,	// (0x00083ac8) popup_navstr_preview_pane_t1

0xcce2,	// (0x0008d53c) scroll_navstr_pane_g1_ParamLimits

0xcce2,	// (0x0008d53c) scroll_navstr_pane_g1

0xccef,	// (0x0008d549) scroll_navstr_pane_t1_ParamLimits

0xccef,	// (0x0008d549) scroll_navstr_pane_t1

0x3213,	// (0x00083a6d) bg_button_pane_cp014

0x3213,	// (0x00083a6d) bg_button_pane_cp030

0xc5eb,	// (0x0008ce45) list_double_fisheye_pane_g4_ParamLimits

0xc5eb,	// (0x0008ce45) list_double_fisheye_pane_g4

0xc5f7,	// (0x0008ce51) list_double_fisheye_pane_g5_ParamLimits

0xc5f7,	// (0x0008ce51) list_double_fisheye_pane_g5

0x3187,	// (0x000839e1) sp_fs_scroll_pane_cp03

0x2ece,	// (0x00083728) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x2eda,	// (0x00083734) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcee,	// (0x00090548) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x2ee6,	// (0x00083740) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xcbcf,	// (0x0008d429) sp_fs_scroll_pane_cp02

0x462a,	// (0x00084e84) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x462a,	// (0x00084e84) popup_sp_fs_calendar_preview_list_single_pane

0x0164,	// (0x000809be) main_cam6_pano_pane

0x01dd,	// (0x00080a37) main_mup3_pane_ParamLimits

0x0164,	// (0x000809be) main_phacti_pane

0xc1eb,	// (0x0008ca45) bg_button_pane_cp11

0xc203,	// (0x0008ca5d) main_mobtv_info_pane_g2_ParamLimits

0xc203,	// (0x0008ca5d) main_mobtv_info_pane_g2

0x0001,

0xfc4e,	// (0x000904a8) main_mobtv_info_pane_g_ParamLimits

0xfc4e,	// (0x000904a8) main_mobtv_info_pane_g

0xc3b5,	// (0x0008cc0f) sc_clock_pane_t5_ParamLimits

0xc3b5,	// (0x0008cc0f) sc_clock_pane_t5

0xc45e,	// (0x0008ccb8) main_radioblah_pane_g1_ParamLimits

0x2cd7,	// (0x00083531) main_radioblah_pane_t3_ParamLimits

0x2cd7,	// (0x00083531) main_radioblah_pane_t3

0x2cef,	// (0x00083549) main_radioblah_pane_t4_ParamLimits

0x2cef,	// (0x00083549) main_radioblah_pane_t4

0xc47c,	// (0x0008ccd6) main_radioblah_text_pane_ParamLimits

0xc47c,	// (0x0008ccd6) main_radioblah_text_pane

0xc489,	// (0x0008cce3) main_radioblah_info_pane_g1_ParamLimits

0xc522,	// (0x0008cd7c) main_radioblah_info_pane_t4_ParamLimits

0xc522,	// (0x0008cd7c) main_radioblah_info_pane_t4

0x01dd,	// (0x00080a37) main_sp_fs_calendar_pane

0xcd01,	// (0x0008d55b) main_phacti_pane_g1

0xcd09,	// (0x0008d563) phacti_note_pane_ParamLimits

0xcd09,	// (0x0008d563) phacti_note_pane

0x3285,	// (0x00083adf) phacti_term_pane_ParamLimits

0x3285,	// (0x00083adf) phacti_term_pane

0x329a,	// (0x00083af4) phacti_note_pane_t1_ParamLimits

0x329a,	// (0x00083af4) phacti_note_pane_t1

0x32b1,	// (0x00083b0b) phacti_term_pane_g1

0x32b9,	// (0x00083b13) phacti_term_pane_t1_ParamLimits

0x32b9,	// (0x00083b13) phacti_term_pane_t1

0x32e3,	// (0x00083b3d) popup_sp_fs_calendar_preview_list_single_pane_g1

0x32eb,	// (0x00083b45) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbd,	// (0x00090617) popup_sp_fs_calendar_preview_list_single_pane_g

0x32f3,	// (0x00083b4d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x32f3,	// (0x00083b4d) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3309,	// (0x00083b63) aid_popup_sp_fs_bg_corner_pane

0x11d1,	// (0x00081a2b) popup_sp_fs_calendar_preview_bg_pane_g1

0x0164,	// (0x000809be) popup_sp_fs_calendar_preview_bg_pane

0x3311,	// (0x00083b6b) popup_sp_fs_calendar_preview_list_pane

0x01dd,	// (0x00080a37) bg_main_sp_fs_cale_pane_ParamLimits

0x01dd,	// (0x00080a37) bg_main_sp_fs_cale_pane

0x3319,	// (0x00083b73) listscroll_cale_mrui_pane_ParamLimits

0x3319,	// (0x00083b73) listscroll_cale_mrui_pane

0x332d,	// (0x00083b87) listscroll_sp_fs_schedule_track_pane

0x3336,	// (0x00083b90) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x3336,	// (0x00083b90) main_sp_fs_ctrlbar_pane_cp01

0x3347,	// (0x00083ba1) main_sp_fs_ribbon_pane

0x334f,	// (0x00083ba9) popup_sp_fs_cale_preview_window

0xcd4c,	// (0x0008d5a6) list_single_sp_fs_schedule_track_pane_ParamLimits

0xcd4c,	// (0x0008d5a6) list_single_sp_fs_schedule_track_pane

0x1b92,	// (0x000823ec) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1b92,	// (0x000823ec) bg_sp_fs_highlight_list_pane_cp03

0xcd60,	// (0x0008d5ba) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xcd60,	// (0x0008d5ba) list_single_sp_fs_schedule_track_pane_g1

0xcd6c,	// (0x0008d5c6) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xcd6c,	// (0x0008d5c6) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc2,	// (0x0009061c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc2,	// (0x0009061c) list_single_sp_fs_schedule_track_pane_g

0xcd78,	// (0x0008d5d2) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xcd78,	// (0x0008d5d2) list_single_sp_fs_schedule_track_pane_t1

0xcd96,	// (0x0008d5f0) sp_fs_schedule_track_pane_ParamLimits

0xcd96,	// (0x0008d5f0) sp_fs_schedule_track_pane

0x3361,	// (0x00083bbb) sp_fs_schedule_track_pane_g1

0x3369,	// (0x00083bc3) sp_fs_schedule_track_pane_g2

0x3371,	// (0x00083bcb) sp_fs_schedule_track_pane_g3

0x3379,	// (0x00083bd3) sp_fs_schedule_track_pane_g4

0x3381,	// (0x00083bdb) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc7,	// (0x00090621) sp_fs_schedule_track_pane_g

0x1c0e,	// (0x00082468) bg_sp_fs_schedule_viewer_highlight_g1

0xdb69,	// (0x0008e3c3) bg_sp_fs_schedule_viewer_highlight_g2

0x1c16,	// (0x00082470) bg_sp_fs_schedule_viewer_highlight_g3

0x1c1e,	// (0x00082478) bg_sp_fs_schedule_viewer_highlight_g4

0x1e61,	// (0x000826bb) bg_sp_fs_schedule_viewer_highlight_g5

0x1c2e,	// (0x00082488) bg_sp_fs_schedule_viewer_highlight_g6

0x1c36,	// (0x00082490) bg_sp_fs_schedule_viewer_highlight_g7

0x1c3e,	// (0x00082498) bg_sp_fs_schedule_viewer_highlight_g8

0xdb49,	// (0x0008e3a3) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd2,	// (0x0009062c) bg_sp_fs_schedule_viewer_highlight_g

0x0164,	// (0x000809be) bg_main_sp_fs_ribbon_pane

0xcda8,	// (0x0008d602) main_sp_fs_ribbon_pane_g1

0x3389,	// (0x00083be3) main_sp_fs_ribbon_pane_t1

0xcdb1,	// (0x0008d60b) main_sp_fs_ribbon_pane_t2

0x3398,	// (0x00083bf2) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde5,	// (0x0009063f) main_sp_fs_ribbon_pane_t

0x33a7,	// (0x00083c01) main_sp_fs_ribbon_scheduler_pane

0x33af,	// (0x00083c09) bg_main_sp_fs_ribbon_pane_g1

0x33b8,	// (0x00083c12) bg_main_sp_fs_ribbon_pane_g2

0x33c1,	// (0x00083c1b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdec,	// (0x00090646) bg_main_sp_fs_ribbon_pane_g

0x33c9,	// (0x00083c23) main_sp_fs_ribbon_scheduler_pane_g1

0x33d2,	// (0x00083c2c) main_sp_fs_ribbon_scheduler_pane_g2

0x33db,	// (0x00083c35) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf3,	// (0x0009064d) main_sp_fs_ribbon_scheduler_pane_g

0x33e4,	// (0x00083c3e) list_cale_mrui_pane

0xcdc0,	// (0x0008d61a) sp_fs_scroll_pane_cp07_ParamLimits

0xcdc0,	// (0x0008d61a) sp_fs_scroll_pane_cp07

0xcdd6,	// (0x0008d630) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xcdd6,	// (0x0008d630) bg_sp_fs_schedule_viewer_highlight

0x33ed,	// (0x00083c47) list_single_sp_fs_schedule_track_pane_cp01

0x33f5,	// (0x00083c4f) list_sp_fs_schedule_track_pane

0x33fd,	// (0x00083c57) sp_fs_scroll_pane_cp06_ParamLimits

0x33fd,	// (0x00083c57) sp_fs_scroll_pane_cp06

0x11d1,	// (0x00081a2b) bgmain_sp_fs_calendar_pane_g1

0xcde3,	// (0x0008d63d) list_single_cale_mrui_pane_ParamLimits

0xcde3,	// (0x0008d63d) list_single_cale_mrui_pane

0x340f,	// (0x00083c69) list_single_cale_mrui_row_pane_ParamLimits

0x340f,	// (0x00083c69) list_single_cale_mrui_row_pane

0x341c,	// (0x00083c76) list_single_cale_mrui_row_pane_g1_ParamLimits

0x341c,	// (0x00083c76) list_single_cale_mrui_row_pane_g1

0x3461,	// (0x00083cbb) list_single_cale_mrui_row_pane_t1_ParamLimits

0x3461,	// (0x00083cbb) list_single_cale_mrui_row_pane_t1

0xce0a,	// (0x0008d664) list_single_cale_mrui_row_pane_t2_ParamLimits

0xce0a,	// (0x0008d664) list_single_cale_mrui_row_pane_t2

0x3473,	// (0x00083ccd) list_single_cale_mrui_row_pane_t3_ParamLimits

0x3473,	// (0x00083ccd) list_single_cale_mrui_row_pane_t3

0x34a2,	// (0x00083cfc) list_single_cale_mrui_row_pane_t4_ParamLimits

0x34a2,	// (0x00083cfc) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe01,	// (0x0009065b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe01,	// (0x0009065b) list_single_cale_mrui_row_pane_t

0xce70,	// (0x0008d6ca) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xce70,	// (0x0008d6ca) list_single_cmail_header_editor_pane_bg_cp01

0xce92,	// (0x0008d6ec) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xce92,	// (0x0008d6ec) list_single_cmail_header_editor_pane_bg_cp02

0xceae,	// (0x0008d708) main_radioblah_text_pane_t1_ParamLimits

0xceae,	// (0x0008d708) main_radioblah_text_pane_t1

0x34d1,	// (0x00083d2b) cam6_indi_pane_cp01

0x34d9,	// (0x00083d33) cam6_mode_pane_cp01

0x34e1,	// (0x00083d3b) cam6_pano_pane

0x34ea,	// (0x00083d44) cam6_zoom_pane_cp01

0x34f4,	// (0x00083d4e) cam6_pano_image_pane

0x34fd,	// (0x00083d57) cam6_pano_pane_g1

0x2a33,	// (0x0008328d) cam6_pano_pane_g2

0x3506,	// (0x00083d60) cam6_pano_pane_g3

0x350f,	// (0x00083d69) cam6_pano_pane_g4

0x1761,	// (0x00081fbb) cam6_pano_pane_g5

0x3518,	// (0x00083d72) cam6_pano_pane_g6

0x3520,	// (0x00083d7a) cam6_pano_pane_g7

0x3528,	// (0x00083d82) cam6_pano_pane_g8

0x3531,	// (0x00083d8b) cam6_pano_pane_g9

0x0008,

0xfe0a,	// (0x00090664) cam6_pano_pane_g

0x0164,	// (0x000809be) main_browser_tag_pane

0x3266,	// (0x00083ac0) grid_navstr_albumart_pane

0x353c,	// (0x00083d96) cell_navstr_albumart_pane_ParamLimits

0x353c,	// (0x00083d96) cell_navstr_albumart_pane

0x3558,	// (0x00083db2) cell_navstr_albumart_pane_g1

0x0ab5,	// (0x0008130f) cell_navstr_albumart_pane_g2

0x0ac5,	// (0x0008131f) cell_navstr_albumart_pane_g3

0x0abd,	// (0x00081317) cell_navstr_albumart_pane_g4

0x0003,

0xfe1d,	// (0x00090677) cell_navstr_albumart_pane_g

0xcec8,	// (0x0008d722) bt_list_pane_ParamLimits

0xcec8,	// (0x0008d722) bt_list_pane

0xcee1,	// (0x0008d73b) bt_list_pane_t1

0xcef0,	// (0x0008d74a) bt_list_pane_t2

0x0001,

0xfe26,	// (0x00090680) bt_list_pane_t

0x0164,	// (0x000809be) main_cale_prevew_pane

0xceff,	// (0x0008d759) popup_cale_preview_window_ParamLimits

0xceff,	// (0x0008d759) popup_cale_preview_window

0x01dd,	// (0x00080a37) bg_popup_preview_window_pane_cp05_ParamLimits

0x01dd,	// (0x00080a37) bg_popup_preview_window_pane_cp05

0x3560,	// (0x00083dba) list_cale_preview_pane_ParamLimits

0x3560,	// (0x00083dba) list_cale_preview_pane

0xcf1a,	// (0x0008d774) list_double_cale_preview_pane_ParamLimits

0xcf1a,	// (0x0008d774) list_double_cale_preview_pane

0xcf2e,	// (0x0008d788) list_single_cale_preview_pane_ParamLimits

0xcf2e,	// (0x0008d788) list_single_cale_preview_pane

0xcf46,	// (0x0008d7a0) list_single_cale_preview_pane_g1

0xcf4e,	// (0x0008d7a8) list_single_cale_preview_pane_t1_ParamLimits

0xcf4e,	// (0x0008d7a8) list_single_cale_preview_pane_t1

0xcf63,	// (0x0008d7bd) list_double_cale_preview_pane_g1

0xcf6b,	// (0x0008d7c5) list_double_cale_preview_pane_t1_ParamLimits

0xcf6b,	// (0x0008d7c5) list_double_cale_preview_pane_t1

0xcf80,	// (0x0008d7da) list_double_cale_preview_pane_t2_ParamLimits

0xcf80,	// (0x0008d7da) list_double_cale_preview_pane_t2

0x0001,

0xfe2b,	// (0x00090685) list_double_cale_preview_pane_t_ParamLimits

0xfe2b,	// (0x00090685) list_double_cale_preview_pane_t

0x0164,	// (0x000809be) main_ezdial_pane

0x01dd,	// (0x00080a37) main_sp_fs_email_pane_ParamLimits

0xc737,	// (0x0008cf91) cmail_ddmenu_btn01_pane_ParamLimits

0xc737,	// (0x0008cf91) cmail_ddmenu_btn01_pane

0xc754,	// (0x0008cfae) cmail_ddmenu_btn02_pane_ParamLimits

0xc754,	// (0x0008cfae) cmail_ddmenu_btn02_pane

0xc772,	// (0x0008cfcc) cmail_ddmenu_btn03_pane_ParamLimits

0xc772,	// (0x0008cfcc) cmail_ddmenu_btn03_pane

0xc7a0,	// (0x0008cffa) main_sp_fs_ctrlbar_pane_ParamLimits

0xc7bc,	// (0x0008d016) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcbd9,	// (0x0008d433) list_cmail_body_pane_ParamLimits

0x3196,	// (0x000839f0) bg_button_pane_cp12

0x319f,	// (0x000839f9) list_single_cmail_header_detail_pane_g3_ParamLimits

0x319f,	// (0x000839f9) list_single_cmail_header_detail_pane_g3

0xcc5f,	// (0x0008d4b9) list_single_cmail_header_detail_pane_t2_ParamLimits

0xcc5f,	// (0x0008d4b9) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdae,	// (0x00090608) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdae,	// (0x00090608) list_single_cmail_header_detail_pane_t

0x32ce,	// (0x00083b28) phacti_term_pane_t2_ParamLimits

0x32ce,	// (0x00083b28) phacti_term_pane_t2

0x0001,

0xfdb8,	// (0x00090612) phacti_term_pane_t_ParamLimits

0xfdb8,	// (0x00090612) phacti_term_pane_t

0x356c,	// (0x00083dc6) aid_size_list_single_double

0xcf98,	// (0x0008d7f2) popup_ezdial_listscroll_window

0xcfb8,	// (0x0008d812) popup_number_entry_window_cp01

0xe1b3,	// (0x0008ea0d) bg_popup_call_pane_cp09

0x3578,	// (0x00083dd2) ezdial_list_pane

0x3580,	// (0x00083dda) scroll_pane_cp23

0x0fb0,	// (0x0008180a) bg_button_pane_cp028_ParamLimits

0x0fb0,	// (0x0008180a) bg_button_pane_cp028

0xcfc6,	// (0x0008d820) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xcfc6,	// (0x0008d820) cmail_ddmenu_btn01_pane_g1

0xcfd6,	// (0x0008d830) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xcfd6,	// (0x0008d830) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe30,	// (0x0009068a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe30,	// (0x0009068a) cmail_ddmenu_btn01_pane_g

0x3588,	// (0x00083de2) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3588,	// (0x00083de2) cmail_ddmenu_btn01_pane_t1

0x0c9c,	// (0x000814f6) bg_button_pane_cp029_ParamLimits

0x0c9c,	// (0x000814f6) bg_button_pane_cp029

0xcfd6,	// (0x0008d830) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xcfd6,	// (0x0008d830) cmail_ddmenu_btn02_pane_g1

0xcfee,	// (0x0008d848) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xcfee,	// (0x0008d848) cmail_ddmenu_btn02_pane_t1

0x1b92,	// (0x000823ec) bg_button_pane_cp031_ParamLimits

0x1b92,	// (0x000823ec) bg_button_pane_cp031

0xcfd6,	// (0x0008d830) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xcfd6,	// (0x0008d830) cmail_ddmenu_btn03_pane_g1

0xcfee,	// (0x0008d848) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xcfee,	// (0x0008d848) cmail_ddmenu_btn03_pane_t1

0xa2e7,	// (0x0008ab41) cell_dialer2_keypad_pane_t1_ParamLimits

0xa301,	// (0x0008ab5b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa301,	// (0x0008ab5b) cell_dialer2_keypad_pane_t1_copy1

0xc07b,	// (0x0008c8d5) ncimui_group_button_pane

0x01dd,	// (0x00080a37) main_sp_fs_calendar_pane_ParamLimits

0xcbee,	// (0x0008d448) list_single_cmail_header_caption_pane_ParamLimits

0x41a6,	// (0x00084a00) aid_recal_txt_sm_pane

0x0164,	// (0x000809be) mian_recal_day_pane

0x334f,	// (0x00083ba9) popup_sp_fs_cale_preview_window_ParamLimits

0x0164,	// (0x000809be) list_recal_day_pane

0x35b6,	// (0x00083e10) list_single_recal_day_pane_ParamLimits

0x35b6,	// (0x00083e10) list_single_recal_day_pane

0x35c8,	// (0x00083e22) list_single_recal_day_pane_g1_ParamLimits

0x35c8,	// (0x00083e22) list_single_recal_day_pane_g1

0x35d4,	// (0x00083e2e) list_single_recal_day_pane_g2_ParamLimits

0x35d4,	// (0x00083e2e) list_single_recal_day_pane_g2

0x35e4,	// (0x00083e3e) list_single_recal_day_pane_g3_ParamLimits

0x35e4,	// (0x00083e3e) list_single_recal_day_pane_g3

0xd012,	// (0x0008d86c) list_single_recal_day_pane_g4_ParamLimits

0xd012,	// (0x0008d86c) list_single_recal_day_pane_g4

0x35f0,	// (0x00083e4a) list_single_recal_day_pane_g5_ParamLimits

0x35f0,	// (0x00083e4a) list_single_recal_day_pane_g5

0x3600,	// (0x00083e5a) list_single_recal_day_pane_g6_ParamLimits

0x3600,	// (0x00083e5a) list_single_recal_day_pane_g6

0x0004,

0xfe3f,	// (0x00090699) list_single_recal_day_pane_g_ParamLimits

0xfe3f,	// (0x00090699) list_single_recal_day_pane_g

0x3617,	// (0x00083e71) list_single_recal_day_pane_t1

0x3629,	// (0x00083e83) list_single_recal_day_pane_t2

0x0001,

0xfe4a,	// (0x000906a4) list_single_recal_day_pane_t

0xd032,	// (0x0008d88c) ncimui_query_button_pane_ParamLimits

0xd032,	// (0x0008d88c) ncimui_query_button_pane

0xd042,	// (0x0008d89c) ncimui_query_button_pane_t1_ParamLimits

0xd042,	// (0x0008d89c) ncimui_query_button_pane_t1

0x363e,	// (0x00083e98) ncimui_query_button_pane_t2_ParamLimits

0x363e,	// (0x00083e98) ncimui_query_button_pane_t2

0x0001,

0xfe4f,	// (0x000906a9) ncimui_query_button_pane_t_ParamLimits

0xfe4f,	// (0x000906a9) ncimui_query_button_pane_t

0xd055,	// (0x0008d8af) query_button_pane_ParamLimits

0xd055,	// (0x0008d8af) query_button_pane

0x0164,	// (0x000809be) bg_button_pane_cp0028

0x3651,	// (0x00083eab) query_button_pane_t1

0x86dc,	// (0x00088f36) main_tport_pane_ParamLimits

0xcafc,	// (0x0008d356) bg_popup_window_pane_cp01_ParamLimits

0xcafc,	// (0x0008d356) bg_popup_window_pane_cp01

0xcb09,	// (0x0008d363) heading_pane_cp08_ParamLimits

0xcb09,	// (0x0008d363) heading_pane_cp08

0xcb17,	// (0x0008d371) heading_pane_cp07_ParamLimits

0xcb17,	// (0x0008d371) heading_pane_cp07

0x3161,	// (0x000839bb) cell_tport_appsw_pane_g2

0x0002,

0xfd9b,	// (0x000905f5) cell_tport_appsw_pane_g

0x0708,	// (0x00080f62) input_candi_list_open_g1

0xdd04,	// (0x0008e55e) list_cale_time_pane_g6_ParamLimits

0xdd04,	// (0x0008e55e) list_cale_time_pane_g6

0x9128,	// (0x00089982) aid_size_touch_calib_1_ParamLimits

0x9128,	// (0x00089982) aid_size_touch_calib_1

0x9134,	// (0x0008998e) aid_size_touch_calib_2_ParamLimits

0x9134,	// (0x0008998e) aid_size_touch_calib_2

0x9142,	// (0x0008999c) aid_size_touch_calib_3_ParamLimits

0x9142,	// (0x0008999c) aid_size_touch_calib_3

0x9152,	// (0x000899ac) aid_size_touch_calib_4_ParamLimits

0x9152,	// (0x000899ac) aid_size_touch_calib_4

0x9160,	// (0x000899ba) main_touch_calib_button_group_pane_ParamLimits

0x9160,	// (0x000899ba) main_touch_calib_button_group_pane

0x916e,	// (0x000899c8) main_touch_calib_pane_g1_ParamLimits

0x917a,	// (0x000899d4) main_touch_calib_pane_g2_ParamLimits

0x9186,	// (0x000899e0) main_touch_calib_pane_g3_ParamLimits

0x9192,	// (0x000899ec) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x0008ffca) main_touch_calib_pane_g_ParamLimits

0x919e,	// (0x000899f8) main_touch_calib_pane_t1_ParamLimits

0x91b5,	// (0x00089a0f) main_touch_calib_pane_t2_ParamLimits

0x91cc,	// (0x00089a26) main_touch_calib_pane_t3_ParamLimits

0x91e0,	// (0x00089a3a) main_touch_calib_pane_t4_ParamLimits

0x91f6,	// (0x00089a50) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x0008ffd3) main_touch_calib_pane_t_ParamLimits

0x152b,	// (0x00081d85) list_single_fp_cale_pane_g3_ParamLimits

0x152b,	// (0x00081d85) list_single_fp_cale_pane_g3

0xa78c,	// (0x0008afe6) bg_button_pane_cp012_ParamLimits

0xa78c,	// (0x0008afe6) bg_vkb2_func_pane_cp03_ParamLimits

0xb190,	// (0x0008b9ea) cell_vitu2_function_top_pane_g1_ParamLimits

0xa78c,	// (0x0008afe6) bg_vkb2_func_pane_cp04_ParamLimits

0xc017,	// (0x0008c871) main_ncimui_button_group_pane_ParamLimits

0xc017,	// (0x0008c871) main_ncimui_button_group_pane

0xc069,	// (0x0008c8c3) main_ncimui_pane_t3_ParamLimits

0xc069,	// (0x0008c8c3) main_ncimui_pane_t3

0x327c,	// (0x00083ad6) phacti_button_group_pane

0x356c,	// (0x00083dc6) aid_size_list_single_double_ParamLimits

0xcf98,	// (0x0008d7f2) popup_ezdial_listscroll_window_ParamLimits

0xcfb8,	// (0x0008d812) popup_number_entry_window_cp01_ParamLimits

0xd062,	// (0x0008d8bc) phacti_button_pane_ParamLimits

0xd062,	// (0x0008d8bc) phacti_button_pane

0x0164,	// (0x000809be) bg_button_pane_cp14

0x365f,	// (0x00083eb9) phacti_button_pane_t1

0xd073,	// (0x0008d8cd) main_touch_calib_button_pane_ParamLimits

0xd073,	// (0x0008d8cd) main_touch_calib_button_pane

0x4514,	// (0x00084d6e) bg_button_pane_cp18_ParamLimits

0x4514,	// (0x00084d6e) bg_button_pane_cp18

0x366d,	// (0x00083ec7) main_touch_calib_button_pane_t1_ParamLimits

0x366d,	// (0x00083ec7) main_touch_calib_button_pane_t1

0x3683,	// (0x00083edd) main_touch_calib_button_pane_t2_ParamLimits

0x3683,	// (0x00083edd) main_touch_calib_button_pane_t2

0x0001,

0xfe54,	// (0x000906ae) main_touch_calib_button_pane_t_ParamLimits

0xfe54,	// (0x000906ae) main_touch_calib_button_pane_t

0x0164,	// (0x000809be) cell_ncimui_button_pane

0x0164,	// (0x000809be) bg_button_pane_cp032

0x36a1,	// (0x00083efb) cell_ncimui_button_pane_t1

0xa35d,	// (0x0008abb7) image3_infobar_pane_ParamLimits

0xa35d,	// (0x0008abb7) image3_infobar_pane

0xc3d7,	// (0x0008cc31) fs_bigclock_status_pane_ParamLimits

0xc3d7,	// (0x0008cc31) fs_bigclock_status_pane

0xc3e4,	// (0x0008cc3e) main_fs_bigclock_clock_pane_ParamLimits

0xc3e4,	// (0x0008cc3e) main_fs_bigclock_clock_pane

0xc3fa,	// (0x0008cc54) main_fs_bigclock_indi_pane_ParamLimits

0xc3fa,	// (0x0008cc54) main_fs_bigclock_indi_pane

0xc42c,	// (0x0008cc86) main_fs_bigclock_swipe_pane_ParamLimits

0xc42c,	// (0x0008cc86) main_fs_bigclock_swipe_pane

0x0164,	// (0x000809be) main_fs_clock_dumped_data

0x2b40,	// (0x0008339a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x2b40,	// (0x0008339a) list_single_fs_bigclock_indicator_pane_g1

0x2b6a,	// (0x000833c4) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x2b6a,	// (0x000833c4) list_single_fs_bigclock_indicator_pane_g2

0x2b84,	// (0x000833de) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x2b84,	// (0x000833de) list_single_fs_bigclock_indicator_pane_g3

0x2b9e,	// (0x000833f8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x2b9e,	// (0x000833f8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc82,	// (0x000904dc) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc82,	// (0x000904dc) list_single_fs_bigclock_indicator_pane_g

0x2bc9,	// (0x00083423) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x2bc9,	// (0x00083423) list_single_fs_bigclock_indicator_pane_t1

0x2bf1,	// (0x0008344b) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x2bf1,	// (0x0008344b) list_single_fs_bigclock_indicator_pane_t2

0x2c19,	// (0x00083473) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x2c19,	// (0x00083473) list_single_fs_bigclock_indicator_pane_t3

0x2c41,	// (0x0008349b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x2c41,	// (0x0008349b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8d,	// (0x000904e7) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8d,	// (0x000904e7) list_single_fs_bigclock_indicator_pane_t

0x36af,	// (0x00083f09) image3_infobar_fav_pane_ParamLimits

0x36af,	// (0x00083f09) image3_infobar_fav_pane

0x36bf,	// (0x00083f19) image3_infobar_loc_pane_ParamLimits

0x36bf,	// (0x00083f19) image3_infobar_loc_pane

0x36d5,	// (0x00083f2f) image3_infobar_time_pane_ParamLimits

0x36d5,	// (0x00083f2f) image3_infobar_time_pane

0x11d1,	// (0x00081a2b) image3_infobar_time_pane_g1

0x36e5,	// (0x00083f3f) image3_infobar_time_pane_t1

0x11d1,	// (0x00081a2b) image3_infobar_loc_pane_g1

0x36f3,	// (0x00083f4d) image3_infobar_loc_pane_g2

0x0001,

0xfe59,	// (0x000906b3) image3_infobar_loc_pane_g

0x36fb,	// (0x00083f55) image3_infobar_loc_pane_t1

0x11d1,	// (0x00081a2b) image3_infobar_fav_pane_g1

0x3709,	// (0x00083f63) image3_infobar_fav_pane_g2

0x0001,

0xfe5e,	// (0x000906b8) image3_infobar_fav_pane_g

0x3711,	// (0x00083f6b) fs_bigclock_status_battery_pane

0x371a,	// (0x00083f74) fs_bigclock_status_signal_pane

0x3723,	// (0x00083f7d) fs_bigclock_status_title_pane

0x372c,	// (0x00083f86) fs_bigclock_status_signal_pane_g1

0x3735,	// (0x00083f8f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe63,	// (0x000906bd) fs_bigclock_status_signal_pane_g

0x373d,	// (0x00083f97) fs_bigclock_status_battery_pane_g1

0x3746,	// (0x00083fa0) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe68,	// (0x000906c2) fs_bigclock_status_battery_pane_g

0x374e,	// (0x00083fa8) fs_bigclock_status_title_pane_t1

0x11d1,	// (0x00081a2b) main_fs_bigclock_clock_pane_g1

0x375c,	// (0x00083fb6) main_fs_bigclock_clock_pane_g2

0x375c,	// (0x00083fb6) main_fs_bigclock_clock_pane_g3

0x375c,	// (0x00083fb6) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6d,	// (0x000906c7) main_fs_bigclock_clock_pane_g

0x3764,	// (0x00083fbe) main_fs_bigclock_clock_pane_t1

0x3772,	// (0x00083fcc) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe76,	// (0x000906d0) main_fs_bigclock_clock_pane_t

0xd085,	// (0x0008d8df) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd085,	// (0x0008d8df) list_single_fs_bigclock_indicator_pane

0xd096,	// (0x0008d8f0) list_single_fs_bigclock_pane_ParamLimits

0xd096,	// (0x0008d8f0) list_single_fs_bigclock_pane

0x378a,	// (0x00083fe4) main_fs_bigclock_indicator_pane_t1

0x3799,	// (0x00083ff3) list_single_fs_bigclock_pane_g1

0x37a1,	// (0x00083ffb) list_single_fs_bigclock_pane_t1

0x11d1,	// (0x00081a2b) main_fs_bigclock_swipe_pane_g1

0x37e4,	// (0x0008403e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe87,	// (0x000906e1) main_fs_bigclock_swipe_pane_g

0x37ec,	// (0x00084046) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x37ec,	// (0x00084046) main_fs_bigclock_swipe_pane_t1

0x75a3,	// (0x00087dfd) call_type_pane_ParamLimits

0x0164,	// (0x000809be) main_btmg_pane

0x3448,	// (0x00083ca2) list_single_cale_mrui_row_pane_g2_ParamLimits

0x3448,	// (0x00083ca2) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdfa,	// (0x00090654) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfa,	// (0x00090654) list_single_cale_mrui_row_pane_g

0x35a6,	// (0x00083e00) list_recal_vselct_arw_lo_pane

0x35ae,	// (0x00083e08) list_recal_vselct_arw_up_pane

0x4175,	// (0x000849cf) list_recal_vselct_pane

0x3809,	// (0x00084063) btmg_button_pane

0xd0ec,	// (0x0008d946) main_btmg_pane_g1

0x0164,	// (0x000809be) bg_button_pane_cp044

0x3813,	// (0x0008406d) btmg_button_pane_t1

0x0c94,	// (0x000814ee) aid_listscroll_gen

0x01dd,	// (0x00080a37) main_cntbar_detail_pane

0x3177,	// (0x000839d1) list_cmail_folder_pane

0x3187,	// (0x000839e1) sp_fs_scroll_pane_cp03_ParamLimits

0xd0f4,	// (0x0008d94e) list_single_fs_dyc_pane_cp01_ParamLimits

0xd0f4,	// (0x0008d94e) list_single_fs_dyc_pane_cp01

0x3821,	// (0x0008407b) aid_size_cmail_indent

0x382a,	// (0x00084084) list_single_dyc_row_pane_cp01

0xd12b,	// (0x0008d985) cntbar_detail_list_pane_ParamLimits

0xd12b,	// (0x0008d985) cntbar_detail_list_pane

0xd16b,	// (0x0008d9c5) main_cntbar_detail_cont_pane_ParamLimits

0xd16b,	// (0x0008d9c5) main_cntbar_detail_cont_pane

0x753d,	// (0x00087d97) scroll_pane_cp032_ParamLimits

0x753d,	// (0x00087d97) scroll_pane_cp032

0xd177,	// (0x0008d9d1) cntbar_detail_list_event_pane_ParamLimits

0xd177,	// (0x0008d9d1) cntbar_detail_list_event_pane

0xd139,	// (0x0008d993) cntbar_detail_list_shct_pane

0xdbb7,	// (0x0008e411) aid_list_gen

0x3833,	// (0x0008408d) aid_scroll

0x383c,	// (0x00084096) aid_size_touch_scroll_bar

0xd187,	// (0x0008d9e1) aid_list_double

0x3845,	// (0x0008409f) aid_list_single

0xd190,	// (0x0008d9ea) aid_list_single_lg

0x384e,	// (0x000840a8) aid_list_z_g_a_sm

0x41af,	// (0x00084a09) aid_list_z_g_d

0x3856,	// (0x000840b0) aid_txt_z_prm

0xd199,	// (0x0008d9f3) aid_txt_z_prm_cp01

0xd1a7,	// (0x0008da01) aid_txt_z_sec

0xd1b5,	// (0x0008da0f) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd1b5,	// (0x0008da0f) main_cntbar_detail_cont_pane_g1

0xd1c2,	// (0x0008da1c) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd1c2,	// (0x0008da1c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8c,	// (0x000906e6) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8c,	// (0x000906e6) main_cntbar_detail_cont_pane_g

0x3864,	// (0x000840be) main_cntbar_detail_cont_pane_t1

0x3872,	// (0x000840cc) main_cntbar_detail_cont_pane_t2

0x3880,	// (0x000840da) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe91,	// (0x000906eb) main_cntbar_detail_cont_pane_t

0xd1ce,	// (0x0008da28) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd1ce,	// (0x0008da28) cell_cntbar_detail_list_shct_pane

0x388e,	// (0x000840e8) cntbar_detail_list_shct_pane_g1

0x3897,	// (0x000840f1) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe98,	// (0x000906f2) cntbar_detail_list_shct_pane_g

0xd1e2,	// (0x0008da3c) cntbar_detail_list_event_pane_g1_ParamLimits

0xd1e2,	// (0x0008da3c) cntbar_detail_list_event_pane_g1

0xd1ee,	// (0x0008da48) cntbar_detail_list_event_pane_g2_ParamLimits

0xd1ee,	// (0x0008da48) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9d,	// (0x000906f7) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9d,	// (0x000906f7) cntbar_detail_list_event_pane_g

0xd25c,	// (0x0008dab6) cntbar_detail_list_event_pane_t1_ParamLimits

0xd25c,	// (0x0008dab6) cntbar_detail_list_event_pane_t1

0xd271,	// (0x0008dacb) cntbar_detail_list_event_pane_t2_ParamLimits

0xd271,	// (0x0008dacb) cntbar_detail_list_event_pane_t2

0x0002,

0xfeaa,	// (0x00090704) cntbar_detail_list_event_pane_t_ParamLimits

0xfeaa,	// (0x00090704) cntbar_detail_list_event_pane_t

0x11d1,	// (0x00081a2b) cell_cntbar_detail_list_shct_pane_g1

0x7976,	// (0x000881d0) navi_pane_mv_g3

0x01dd,	// (0x00080a37) main_cntbar_detail_pane_ParamLimits

0x0164,	// (0x000809be) main_notif_wgt_pane

0xa007,	// (0x0008a861) aid_tch_main_mp4_pane_g4

0xa246,	// (0x0008aaa0) popup_slider_window_cp02

0x359d,	// (0x00083df7) list_recal_day_event_pane

0xd10b,	// (0x0008d965) cntbar_detail_btn_pane_ParamLimits

0xd10b,	// (0x0008d965) cntbar_detail_btn_pane

0xd11b,	// (0x0008d975) cntbar_detail_btn_pane_cp01_ParamLimits

0xd11b,	// (0x0008d975) cntbar_detail_btn_pane_cp01

0xd139,	// (0x0008d993) cntbar_detail_list_shct_pane_ParamLimits

0xd145,	// (0x0008d99f) cntbar_detail_pane_g1_ParamLimits

0xd145,	// (0x0008d99f) cntbar_detail_pane_g1

0xd155,	// (0x0008d9af) cntbar_detail_pane_t1_ParamLimits

0xd155,	// (0x0008d9af) cntbar_detail_pane_t1

0xd1fa,	// (0x0008da54) cntbar_detail_list_event_pane_g3_ParamLimits

0xd1fa,	// (0x0008da54) cntbar_detail_list_event_pane_g3

0xd212,	// (0x0008da6c) cntbar_detail_list_event_pane_g4_ParamLimits

0xd212,	// (0x0008da6c) cntbar_detail_list_event_pane_g4

0xd22a,	// (0x0008da84) cntbar_detail_list_event_pane_g5_ParamLimits

0xd22a,	// (0x0008da84) cntbar_detail_list_event_pane_g5

0xd242,	// (0x0008da9c) cntbar_detail_list_event_pane_g6_ParamLimits

0xd242,	// (0x0008da9c) cntbar_detail_list_event_pane_g6

0xd286,	// (0x0008dae0) cntbar_detail_list_event_pane_t3_ParamLimits

0xd286,	// (0x0008dae0) cntbar_detail_list_event_pane_t3

0xd298,	// (0x0008daf2) popup_notif_wgt_window_ParamLimits

0xd298,	// (0x0008daf2) popup_notif_wgt_window

0xd2a8,	// (0x0008db02) popup_submenu_window_cp01_ParamLimits

0xd2a8,	// (0x0008db02) popup_submenu_window_cp01

0xe1b3,	// (0x0008ea0d) bg_popup_window_pane_cp10

0x38a0,	// (0x000840fa) listscroll_notif_wgt_pane

0x38aa,	// (0x00084104) list_notif_wgt_window

0x38b3,	// (0x0008410d) scroll_pane_cp033

0x38bc,	// (0x00084116) list_notif_wgt_row_pane_ParamLimits

0x38bc,	// (0x00084116) list_notif_wgt_row_pane

0x38d0,	// (0x0008412a) aid_size_list_notif_wgt_del

0x38d9,	// (0x00084133) list_notif_wgt_row_pane_g1

0x38e1,	// (0x0008413b) list_notif_wgt_row_pane_g2

0x38e9,	// (0x00084143) list_notif_wgt_row_pane_g3

0x0002,

0xfeb1,	// (0x0009070b) list_notif_wgt_row_pane_g

0x38f2,	// (0x0008414c) list_notif_wgt_row_pane_t1

0x3900,	// (0x0008415a) list_notif_wgt_row_pane_t2

0x390e,	// (0x00084168) list_notif_wgt_row_pane_t3

0x0002,

0xfeb8,	// (0x00090712) list_notif_wgt_row_pane_t

0x1e81,	// (0x000826db) list_recal_day_event_pane_g1

0x391c,	// (0x00084176) list_recal_day_event_pane_t1

0x0164,	// (0x000809be) bg_button_pane_cp045

0x392b,	// (0x00084185) cntbar_detail_btn_pane_t1

0x0c9c,	// (0x000814f6) main_callh_pane_ParamLimits

0x0c9c,	// (0x000814f6) main_callh_pane

0x0164,	// (0x000809be) main_coverflow0_pane

0x0164,	// (0x000809be) main_wgtman_pane

0xc444,	// (0x0008cc9e) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc444,	// (0x0008cc9e) main_fs_bigclock_unlock_btn_pane

0x3159,	// (0x000839b3) bg_button_pane_cp16

0xcb82,	// (0x0008d3dc) cell_tport_appsw_pane_g3

0xd2b8,	// (0x0008db12) cf0_flow_pane_ParamLimits

0xd2b8,	// (0x0008db12) cf0_flow_pane

0x3939,	// (0x00084193) listscroll_cf0_pane

0x3942,	// (0x0008419c) main_cf0_pane_g1

0xd2c7,	// (0x0008db21) main_cf0_pane_t1_ParamLimits

0xd2c7,	// (0x0008db21) main_cf0_pane_t1

0xd2db,	// (0x0008db35) main_cf0_pane_t2_ParamLimits

0xd2db,	// (0x0008db35) main_cf0_pane_t2

0x0001,

0xfebf,	// (0x00090719) main_cf0_pane_t_ParamLimits

0xfebf,	// (0x00090719) main_cf0_pane_t

0x394c,	// (0x000841a6) scroll_pane_cp11

0xd2ef,	// (0x0008db49) cf0_flow_pane_g1

0xd2f7,	// (0x0008db51) cf0_flow_pane_g2

0x0001,

0xfec4,	// (0x0009071e) cf0_flow_pane_g

0xd2ff,	// (0x0008db59) cf0_flow_pane_t1

0x0164,	// (0x000809be) main_call6_pane

0x0164,	// (0x000809be) main_calllock_pane

0xd30d,	// (0x0008db67) call6_btn_grp_pane_ParamLimits

0xd30d,	// (0x0008db67) call6_btn_grp_pane

0xd31a,	// (0x0008db74) call6_pane_g1_ParamLimits

0xd31a,	// (0x0008db74) call6_pane_g1

0xd32a,	// (0x0008db84) popup_call6_1st_window_ParamLimits

0xd32a,	// (0x0008db84) popup_call6_1st_window

0xd338,	// (0x0008db92) popup_call6_2nd_window_ParamLimits

0xd338,	// (0x0008db92) popup_call6_2nd_window

0xd346,	// (0x0008dba0) cell_call6_btn_pane_ParamLimits

0xd346,	// (0x0008dba0) cell_call6_btn_pane

0xe1b3,	// (0x0008ea0d) bg_popup_call2_in_pane_cp03

0x3957,	// (0x000841b1) popup_call6_1st_window_g1

0x395f,	// (0x000841b9) popup_call6_1st_window_g2

0x3967,	// (0x000841c1) popup_call6_1st_window_g3

0x0002,

0xfec9,	// (0x00090723) popup_call6_1st_window_g

0x396f,	// (0x000841c9) popup_call6_1st_window_t1

0x397e,	// (0x000841d8) popup_call6_1st_window_t2

0x398e,	// (0x000841e8) popup_call6_1st_window_t3

0x0002,

0xfed0,	// (0x0009072a) popup_call6_1st_window_t

0xe1b3,	// (0x0008ea0d) bg_popup_call2_in_pane_cp04

0x3957,	// (0x000841b1) popup_call6_2nd_window_g1

0x395f,	// (0x000841b9) popup_call6_2nd_window_g2

0x3967,	// (0x000841c1) popup_call6_2nd_window_g3

0x0002,

0xfec9,	// (0x00090723) popup_call6_2nd_window_g

0x396f,	// (0x000841c9) popup_call6_2nd_window_t1

0x0164,	// (0x000809be) bg_button_pane_cp15

0x399e,	// (0x000841f8) cell_call6_btn_pane_g1

0x39a7,	// (0x00084201) cell_call6_btn_pane_t1

0xd355,	// (0x0008dbaf) listscroll_wgtman_pane_ParamLimits

0xd355,	// (0x0008dbaf) listscroll_wgtman_pane

0xd373,	// (0x0008dbcd) wgtman_btn_pane_ParamLimits

0xd373,	// (0x0008dbcd) wgtman_btn_pane

0xe079,	// (0x0008e8d3) aid_scroll_copy1

0x39b6,	// (0x00084210) list_wgtman_pane

0xd3a8,	// (0x0008dc02) wgtman_btn_pane_g1_ParamLimits

0xd3a8,	// (0x0008dc02) wgtman_btn_pane_g1

0xd3d0,	// (0x0008dc2a) wgtman_btn_pane_t1_ParamLimits

0xd3d0,	// (0x0008dc2a) wgtman_btn_pane_t1

0x39c0,	// (0x0008421a) wgtman_btn_pane_t2_ParamLimits

0x39c0,	// (0x0008421a) wgtman_btn_pane_t2

0x0001,

0xfed7,	// (0x00090731) wgtman_btn_pane_t_ParamLimits

0xfed7,	// (0x00090731) wgtman_btn_pane_t

0xd407,	// (0x0008dc61) listrow_wgtman_pane_ParamLimits

0xd407,	// (0x0008dc61) listrow_wgtman_pane

0xd418,	// (0x0008dc72) listrow_wgtman_pane_g1

0xd421,	// (0x0008dc7b) listrow_wgtman_pane_g2

0x0001,

0xfedc,	// (0x00090736) listrow_wgtman_pane_g

0xd42b,	// (0x0008dc85) listrow_wgtman_pane_t1

0xd439,	// (0x0008dc93) listrow_wgtman_pane_t2

0x0001,

0xfee1,	// (0x0009073b) listrow_wgtman_pane_t

0xd447,	// (0x0008dca1) wait_bar_pane_cp09

0x39d7,	// (0x00084231) main_calllock_btn_pane

0x39e1,	// (0x0008423b) main_calllock_pane_g1

0x0164,	// (0x000809be) bg_button_pane_cp17

0x39ed,	// (0x00084247) main_calllock_btn_pane_g1

0x39f6,	// (0x00084250) main_calllock_btn_pane_t1

0x0164,	// (0x000809be) main_dialer3_pane

0x0164,	// (0x000809be) main_fmrd2_pane

0x11d1,	// (0x00081a2b) main_fs_bigclock_unlock_btn_pane_g1

0x3a0d,	// (0x00084267) main_fs_bigclock_unlock_btn_pane_t1

0xd44f,	// (0x0008dca9) area_fmrd2_info_pane_ParamLimits

0xd44f,	// (0x0008dca9) area_fmrd2_info_pane

0xd45b,	// (0x0008dcb5) area_fmrd2_visual_pane_ParamLimits

0xd45b,	// (0x0008dcb5) area_fmrd2_visual_pane

0xd469,	// (0x0008dcc3) fmrd2_indi_pane_ParamLimits

0xd469,	// (0x0008dcc3) fmrd2_indi_pane

0xd476,	// (0x0008dcd0) area_fmrd2_visual_pane_g1

0xd47e,	// (0x0008dcd8) area_fmrd2_visual_pane_t1

0xd48e,	// (0x0008dce8) area_fmrd2_visual_pane_t2

0xd49e,	// (0x0008dcf8) area_fmrd2_visual_pane_t3

0x0002,

0xfeeb,	// (0x00090745) area_fmrd2_visual_pane_t

0xd4ae,	// (0x0008dd08) area_fmrd2_info_pane_g1

0xd4b6,	// (0x0008dd10) area_fmrd2_info_pane_t1

0xd4c6,	// (0x0008dd20) area_fmrd2_info_pane_t2

0xd4d6,	// (0x0008dd30) area_fmrd2_info_pane_t3

0xd4e6,	// (0x0008dd40) area_fmrd2_info_pane_t4

0x0003,

0xfef2,	// (0x0009074c) area_fmrd2_info_pane_t

0xd4f6,	// (0x0008dd50) fmrd2_indi_pane_t1

0xd506,	// (0x0008dd60) fmrd2_indi_pane_t2

0xd516,	// (0x0008dd70) fmrd2_indi_pane_t3

0x0002,

0xfefb,	// (0x00090755) fmrd2_indi_pane_t

0x2bad,	// (0x00083407) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x2bad,	// (0x00083407) list_single_fs_bigclock_indicator_pane_g5

0x2c56,	// (0x000834b0) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x2c56,	// (0x000834b0) list_single_fs_bigclock_indicator_pane_t5

0xcd1f,	// (0x0008d579) aid_cell_bcale_month_pane_ParamLimits

0xcd1f,	// (0x0008d579) aid_cell_bcale_month_pane

0xcd2b,	// (0x0008d585) bcale_month_pane_ParamLimits

0xcd2b,	// (0x0008d585) bcale_month_pane

0xcd3b,	// (0x0008d595) bcale_preview_pane_ParamLimits

0xcd3b,	// (0x0008d595) bcale_preview_pane

0x37a1,	// (0x00083ffb) list_single_fs_bigclock_pane_t1_ParamLimits

0x37c0,	// (0x0008401a) list_single_fs_bigclock_pane_t2_ParamLimits

0x37c0,	// (0x0008401a) list_single_fs_bigclock_pane_t2

0x0001,

0xfe82,	// (0x000906dc) list_single_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x000906dc) list_single_fs_bigclock_pane_t

0x3a05,	// (0x0008425f) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee6,	// (0x00090740) main_fs_bigclock_unlock_btn_pane_g

0xd526,	// (0x0008dd80) aid_dia3_key_size_ParamLimits

0xd526,	// (0x0008dd80) aid_dia3_key_size

0xd532,	// (0x0008dd8c) aid_dia3_listrow_size_ParamLimits

0xd532,	// (0x0008dd8c) aid_dia3_listrow_size

0xd540,	// (0x0008dd9a) dia3_keypad_fun_pane_ParamLimits

0xd540,	// (0x0008dd9a) dia3_keypad_fun_pane

0xd550,	// (0x0008ddaa) dia3_keypad_num_pane_ParamLimits

0xd550,	// (0x0008ddaa) dia3_keypad_num_pane

0xd560,	// (0x0008ddba) dia3_listscroll_pane_ParamLimits

0xd560,	// (0x0008ddba) dia3_listscroll_pane

0xd570,	// (0x0008ddca) dia3_numentry_pane_ParamLimits

0xd570,	// (0x0008ddca) dia3_numentry_pane

0x3a1b,	// (0x00084275) dia3_list_pane

0x3a26,	// (0x00084280) scroll_pane_cp12

0x0164,	// (0x000809be) bg_dia3_numentry_pane

0x3a31,	// (0x0008428b) dia3_numentry_pane_t1

0xd580,	// (0x0008ddda) cell_dia3_key_num_pane

0xd588,	// (0x0008dde2) cell_dia3_key0_fun_pane_ParamLimits

0xd588,	// (0x0008dde2) cell_dia3_key0_fun_pane

0xd595,	// (0x0008ddef) cell_dia3_key1_fun_pane_ParamLimits

0xd595,	// (0x0008ddef) cell_dia3_key1_fun_pane

0xd5a2,	// (0x0008ddfc) dia3_listrow_pane

0x28ab,	// (0x00083105) bg_dia3_numentry_pane_g1

0x0164,	// (0x000809be) bg_button_pane_cp21

0x3a40,	// (0x0008429a) cell_dia3_key_num_pane_t1

0x3a4e,	// (0x000842a8) cell_dia3_key_num_pane_t2

0x3a5d,	// (0x000842b7) cell_dia3_key_num_pane_t3

0x3a6c,	// (0x000842c6) cell_dia3_key_num_pane_t4

0x0003,

0xff02,	// (0x0009075c) cell_dia3_key_num_pane_t

0x0164,	// (0x000809be) bg_button_pane_cp19

0xd5af,	// (0x0008de09) cell_dia3_key0_fun_pane_g1

0x0164,	// (0x000809be) bg_button_pane_cp20

0xd5b7,	// (0x0008de11) cell_dia3_key1_fun_pane_g1

0xd5bf,	// (0x0008de19) area_left_week_number_pane

0xd5c8,	// (0x0008de22) area_top_day_name_pane

0xd5d1,	// (0x0008de2b) frame_month_view_pane

0xd5db,	// (0x0008de35) grid_month_view_pane

0xd5e5,	// (0x0008de3f) cell_top_day_name_pane_ParamLimits

0xd5e5,	// (0x0008de3f) cell_top_day_name_pane

0xd601,	// (0x0008de5b) cell_area_left_week_number_pane_ParamLimits

0xd601,	// (0x0008de5b) cell_area_left_week_number_pane

0xd615,	// (0x0008de6f) cell_month_view_pane_ParamLimits

0xd615,	// (0x0008de6f) cell_month_view_pane

0x3a7b,	// (0x000842d5) frm_month_g1

0xd634,	// (0x0008de8e) frm_month_g2

0xd63e,	// (0x0008de98) frm_month_g3

0xd648,	// (0x0008dea2) frm_month_g4

0xd652,	// (0x0008deac) frm_month_g5

0xd65c,	// (0x0008deb6) frm_month_g6

0xd666,	// (0x0008dec0) frm_month_g7

0x3a84,	// (0x000842de) frm_month_g8

0xd670,	// (0x0008deca) frm_month_g9

0xd679,	// (0x0008ded3) frm_month_g10

0xd682,	// (0x0008dedc) frm_month_g11

0xd68b,	// (0x0008dee5) frm_month_g12

0xd694,	// (0x0008deee) frm_month_g13

0xd69f,	// (0x0008def9) frm_month_g14

0xd6aa,	// (0x0008df04) frm_month_g15

0xd6b5,	// (0x0008df0f) frm_month_g16

0x000f,

0xff0b,	// (0x00090765) frm_month_g

0xd6c0,	// (0x0008df1a) cell_top_day_name_pane_t1

0xd6cf,	// (0x0008df29) cell_area_left_week_number_pane_g1

0xd6c0,	// (0x0008df1a) cell_area_left_week_number_pane_t1

0x11d1,	// (0x00081a2b) cell_month_view_pane_g1

0xd6d7,	// (0x0008df31) cell_month_view_pane_t1

0x0164,	// (0x000809be) main_fps_pane

0x2e94,	// (0x000836ee) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x2e94,	// (0x000836ee) cmail_ddmenu_btn02_pane_cp1

0x2eb0,	// (0x0008370a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x2eb0,	// (0x0008370a) cmail_ddmenu_btn02_pane_cp2

0xcfe2,	// (0x0008d83c) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xcfe2,	// (0x0008d83c) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe35,	// (0x0009068f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe35,	// (0x0009068f) cmail_ddmenu_btn02_pane_g

0xd000,	// (0x0008d85a) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd000,	// (0x0008d85a) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3a,	// (0x00090694) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3a,	// (0x00090694) cmail_ddmenu_btn02_pane_t

0xd6e6,	// (0x0008df40) fps_text_pane_ParamLimits

0xd6e6,	// (0x0008df40) fps_text_pane

0xd6f3,	// (0x0008df4d) main_fps_pane_g1_ParamLimits

0xd6f3,	// (0x0008df4d) main_fps_pane_g1

0xd6ff,	// (0x0008df59) wait_bar_pane_cp010_ParamLimits

0xd6ff,	// (0x0008df59) wait_bar_pane_cp010

0xd70b,	// (0x0008df65) fps_text_pane_t1_ParamLimits

0xd70b,	// (0x0008df65) fps_text_pane_t1

0xa67a,	// (0x0008aed4) cam4_image_uncrop_pane_g1

0xa683,	// (0x0008aedd) cam4_image_uncrop_pane_g2

0xa68c,	// (0x0008aee6) cam4_image_uncrop_pane_g3

0xa695,	// (0x0008aeef) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x00090162) cam4_image_uncrop_pane_g

0xd5a2,	// (0x0008ddfc) dia3_listrow_pane_ParamLimits

0x0164,	// (0x000809be) main_phob2_pane

0xcb5c,	// (0x0008d3b6) cell_tport_appsw_pane_cp02_ParamLimits

0xcb5c,	// (0x0008d3b6) cell_tport_appsw_pane_cp02

0xcb6b,	// (0x0008d3c5) cell_tport_appsw_pane_cp03_ParamLimits

0xcb6b,	// (0x0008d3c5) cell_tport_appsw_pane_cp03

0x0164,	// (0x000809be) phob2_contact_card_pane

0x0164,	// (0x000809be) phob2_listscroll_pane

0x3a8d,	// (0x000842e7) phob2_list_pane

0x3a95,	// (0x000842ef) scroll_pane_cp034

0xd724,	// (0x0008df7e) phob2_cc_data_pane_ParamLimits

0xd724,	// (0x0008df7e) phob2_cc_data_pane

0xd740,	// (0x0008df9a) phob2_cc_listscroll_pane_ParamLimits

0xd740,	// (0x0008df9a) phob2_cc_listscroll_pane

0xd75c,	// (0x0008dfb6) list_double_large_graphic_phob2_pane_ParamLimits

0xd75c,	// (0x0008dfb6) list_double_large_graphic_phob2_pane

0xd774,	// (0x0008dfce) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd774,	// (0x0008dfce) list_double_large_graphic_phob2_pane_g1

0xd781,	// (0x0008dfdb) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd781,	// (0x0008dfdb) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2c,	// (0x00090786) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2c,	// (0x00090786) list_double_large_graphic_phob2_pane_g

0xd78d,	// (0x0008dfe7) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd78d,	// (0x0008dfe7) list_double_large_graphic_phob2_pane_t1

0xd7a2,	// (0x0008dffc) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd7a2,	// (0x0008dffc) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff31,	// (0x0009078b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff31,	// (0x0009078b) list_double_large_graphic_phob2_pane_t

0x0164,	// (0x000809be) list_highlight_pane_cp024

0x3a9d,	// (0x000842f7) phob2_cc_button_pane

0xd7b4,	// (0x0008e00e) phob2_cc_data_pane_g1_ParamLimits

0xd7b4,	// (0x0008e00e) phob2_cc_data_pane_g1

0xd7c0,	// (0x0008e01a) phob2_cc_data_pane_g2_ParamLimits

0xd7c0,	// (0x0008e01a) phob2_cc_data_pane_g2

0x0001,

0xff36,	// (0x00090790) phob2_cc_data_pane_g_ParamLimits

0xff36,	// (0x00090790) phob2_cc_data_pane_g

0xd7cc,	// (0x0008e026) phob2_cc_data_pane_t1_ParamLimits

0xd7cc,	// (0x0008e026) phob2_cc_data_pane_t1

0xd7de,	// (0x0008e038) phob2_cc_data_pane_t2_ParamLimits

0xd7de,	// (0x0008e038) phob2_cc_data_pane_t2

0xd7f0,	// (0x0008e04a) phob2_cc_data_pane_t3_ParamLimits

0xd7f0,	// (0x0008e04a) phob2_cc_data_pane_t3

0x0002,

0xff3b,	// (0x00090795) phob2_cc_data_pane_t_ParamLimits

0xff3b,	// (0x00090795) phob2_cc_data_pane_t

0x3aa5,	// (0x000842ff) phob2_cc_list_pane_ParamLimits

0x3aa5,	// (0x000842ff) phob2_cc_list_pane

0x1f2c,	// (0x00082786) scroll_pane_cp035_ParamLimits

0x1f2c,	// (0x00082786) scroll_pane_cp035

0x01dd,	// (0x00080a37) bg_button_pane_cp033

0x3ab1,	// (0x0008430b) phob2_cc_button_pane_g1

0x3abd,	// (0x00084317) phob2_cc_button_pane_t1

0x3ad2,	// (0x0008432c) phob2_cc_button_pane_t2

0x0001,

0xff42,	// (0x0009079c) phob2_cc_button_pane_t

0xd802,	// (0x0008e05c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd802,	// (0x0008e05c) list_double_large_graphic_phob2_cc_pane

0xd81e,	// (0x0008e078) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd81e,	// (0x0008e078) list_double_large_graphic_phob2_cc_pane_g1

0xd82f,	// (0x0008e089) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd82f,	// (0x0008e089) list_double_large_graphic_phob2_cc_pane_g2

0xd83e,	// (0x0008e098) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd83e,	// (0x0008e098) list_double_large_graphic_phob2_cc_pane_g3

0xd84d,	// (0x0008e0a7) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd84d,	// (0x0008e0a7) list_double_large_graphic_phob2_cc_pane_g4

0xd85e,	// (0x0008e0b8) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd85e,	// (0x0008e0b8) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff47,	// (0x000907a1) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff47,	// (0x000907a1) list_double_large_graphic_phob2_cc_pane_g

0xd86d,	// (0x0008e0c7) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xd86d,	// (0x0008e0c7) list_double_large_graphic_phob2_cc_pane_t1

0xd896,	// (0x0008e0f0) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xd896,	// (0x0008e0f0) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff52,	// (0x000907ac) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff52,	// (0x000907ac) list_double_large_graphic_phob2_cc_pane_t

0x3ae4,	// (0x0008433e) list_highlight_pane_cp025_ParamLimits

0x3ae4,	// (0x0008433e) list_highlight_pane_cp025

0x01dd,	// (0x00080a37) bg_button_pane_cp033_ParamLimits

0x3ab1,	// (0x0008430b) phob2_cc_button_pane_g1_ParamLimits

0x3abd,	// (0x00084317) phob2_cc_button_pane_t1_ParamLimits

0x3ad2,	// (0x0008432c) phob2_cc_button_pane_t2_ParamLimits

0xff42,	// (0x0009079c) phob2_cc_button_pane_t_ParamLimits

0x585b,	// (0x000860b5) popup_wgtman_window

0x1d2c,	// (0x00082586) scroll_pane_cp038

0xd390,	// (0x0008dbea) wgtman_btn_pane_cp_01_ParamLimits

0xd390,	// (0x0008dbea) wgtman_btn_pane_cp_01

0x3af2,	// (0x0008434c) wgtman_content_pane

0x3afb,	// (0x00084355) wgtman_heading_pane

0x0164,	// (0x000809be) bg_heading_pane_cp02

0x3b04,	// (0x0008435e) wgtman_heading_pane_g1

0x3b0c,	// (0x00084366) wgtman_heading_pane_t1

0x3b1a,	// (0x00084374) scroll_pane_cp036

0x3b22,	// (0x0008437c) wgtman_list_pane

0x3b2a,	// (0x00084384) wgtman_list_pane_t1_ParamLimits

0x3b2a,	// (0x00084384) wgtman_list_pane_t1

0xa5d7,	// (0x0008ae31) cam4_grid_pane

0xb353,	// (0x0008bbad) bg_button_pane_cp015_ParamLimits

0xb365,	// (0x0008bbbf) bg_button_pane_cp016_ParamLimits

0xb378,	// (0x0008bbd2) bg_button_pane_cp017_ParamLimits

0xb3ce,	// (0x0008bc28) popup_vitu2_query_window_g3_ParamLimits

0xb3ce,	// (0x0008bc28) popup_vitu2_query_window_g3

0xb48d,	// (0x0008bce7) popup_vitu2_query_window_t6_ParamLimits

0xb48d,	// (0x0008bce7) popup_vitu2_query_window_t6

0xb4b8,	// (0x0008bd12) popup_vitu2_query_window_t7_ParamLimits

0xb4b8,	// (0x0008bd12) popup_vitu2_query_window_t7

0x1b7e,	// (0x000823d8) cam4_grid_pane_g1

0x1b87,	// (0x000823e1) cam4_grid_pane_g2

0x3b4d,	// (0x000843a7) cam4_grid_pane_g3

0x3b56,	// (0x000843b0) cam4_grid_pane_g4

0x0003,

0xff57,	// (0x000907b1) cam4_grid_pane_g

0x65e7,	// (0x00086e41) aid_placing_vt_slider_lsc_ParamLimits

0x691a,	// (0x00087174) vidtel_button_pane_ParamLimits

0x691a,	// (0x00087174) vidtel_button_pane

0x3b61,	// (0x000843bb) bg_button_pane_cp034

0xd8bf,	// (0x0008e119) vidtel_button_pane_g1

0x3b6b,	// (0x000843c5) vidtel_button_pane_t1

0x1e4b,	// (0x000826a5) aid_size_vtel_slider_touch

0x1f2c,	// (0x00082786) scroll_pane_cp039

0x28e9,	// (0x00083143) ncim_query_button_pane_cp01_ParamLimits

0x2908,	// (0x00083162) ncimui_query_pane_g1_ParamLimits

0x01dd,	// (0x00080a37) input_focus_pane_cp012_ParamLimits

0x292d,	// (0x00083187) ncim_query_entry_pane_t1_ParamLimits

0x1f2c,	// (0x00082786) scroll_pane_cp039_ParamLimits

0x78e8,	// (0x00088142) navi_pane_bcale_mc_g1

0x78f0,	// (0x0008814a) navi_pane_bcale_mc_t1

0x2efb,	// (0x00083755) main_sp_fs_email_pane_g1

0x2f03,	// (0x0008375d) main_sp_fs_email_pane_g2

0x0001,

0xfcf3,	// (0x0009054d) main_sp_fs_email_pane_g

0x3454,	// (0x00083cae) list_single_cale_mrui_row_pane_g3_ParamLimits

0x3454,	// (0x00083cae) list_single_cale_mrui_row_pane_g3

0xd028,	// (0x0008d882) list_single_recal_day_pane_g5_event_pane

0x360f,	// (0x00083e69) list_single_recal_day_pane_g7

0x3b79,	// (0x000843d3) list_recal_day_event_pane_cp01

0x3b82,	// (0x000843dc) list_recal_vselct_arw_lo_pane_cp01

0x3b8a,	// (0x000843e4) list_recal_vselct_arw_up_pane_cp01

0x3b92,	// (0x000843ec) list_recal_vselct_pane_cp01

0x1e81,	// (0x000826db) list_recal_day_event_pane_cp01_g1

0x3b9c,	// (0x000843f6) list_recal_day_event_pane_cp01_t1

0x3617,	// (0x00083e71) list_single_recal_day_pane_t1_ParamLimits

0x3629,	// (0x00083e83) list_single_recal_day_pane_t2_ParamLimits

0xfe4a,	// (0x000906a4) list_single_recal_day_pane_t_ParamLimits

0x44e4,	// (0x00084d3e) bg_notes_pane_ParamLimits

0x44f2,	// (0x00084d4c) list_notes_pane_ParamLimits

0x5b6b,	// (0x000863c5) scroll_pane_cp06_ParamLimits

0x4514,	// (0x00084d6e) main_notes_pane_ParamLimits

0x0164,	// (0x000809be) main_welc_pane

0xd8c7,	// (0x0008e121) main_welc_body_pane_ParamLimits

0xd8c7,	// (0x0008e121) main_welc_body_pane

0xd8d6,	// (0x0008e130) main_welc_opti_pane_ParamLimits

0xd8d6,	// (0x0008e130) main_welc_opti_pane

0xd8e5,	// (0x0008e13f) main_welc_pane_t1_ParamLimits

0xd8e5,	// (0x0008e13f) main_welc_pane_t1

0xcd4c,	// (0x0008d5a6) main_welc_body_row_pane_ParamLimits

0xcd4c,	// (0x0008d5a6) main_welc_body_row_pane

0xd8f9,	// (0x0008e153) main_welc_opti_row_pane_ParamLimits

0xd8f9,	// (0x0008e153) main_welc_opti_row_pane

0x3bc1,	// (0x0008441b) main_welc_opti_row_pane_g1

0x3bc9,	// (0x00084423) main_welc_opti_row_pane_t1

0x3bd8,	// (0x00084432) main_welc_body_row_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
