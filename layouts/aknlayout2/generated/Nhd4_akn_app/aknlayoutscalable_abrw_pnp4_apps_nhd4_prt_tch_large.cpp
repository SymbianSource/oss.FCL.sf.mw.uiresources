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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0007eb08 };

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
0x567d,	// (0x00084185) Screen

0x5689,	// (0x00084191) application_window

0x56c9,	// (0x000841d1) area_bottom_pane_ParamLimits

0x56c9,	// (0x000841d1) area_bottom_pane

0x56fe,	// (0x00084206) area_top_pane_ParamLimits

0x56fe,	// (0x00084206) area_top_pane

0x3f7c,	// (0x00082a84) call_video_uplink_pane_ParamLimits

0x3f7c,	// (0x00082a84) call_video_uplink_pane

0x578b,	// (0x00084293) main_pane_ParamLimits

0x578b,	// (0x00084293) main_pane

0x0d34,	// (0x0007f83c) context_pane

0x895b,	// (0x00087463) navi_pane

0x897b,	// (0x00087483) popup_cale_events_window_ParamLimits

0x897b,	// (0x00087483) popup_cale_events_window

0x0d47,	// (0x0007f84f) popup_mup_playback_window

0x8993,	// (0x0008749b) signal_pane

0xd9c2,	// (0x0008c4ca) main_browser_pane

0xe44a,	// (0x0008cf52) main_burst_pane

0x8831,	// (0x00087339) main_calc_pane

0xe44a,	// (0x0008cf52) main_cale_day_pane

0xd9c2,	// (0x0008c4ca) main_cale_month_pane

0xe44a,	// (0x0008cf52) main_cale_week_pane

0xe44a,	// (0x0008cf52) main_call_pane

0x43e2,	// (0x00082eea) main_call_poc_pane

0xe44a,	// (0x0008cf52) main_camera_pane

0xe44a,	// (0x0008cf52) main_chi_dic_pane

0xe2d9,	// (0x0008cde1) main_clock_pane

0x43e2,	// (0x00082eea) main_fmradio_pane

0xe44a,	// (0x0008cf52) main_graph_messa_pane

0x43e2,	// (0x00082eea) main_help_pane

0xd9c2,	// (0x0008c4ca) main_im_pane

0x463d,	// (0x00083145) main_image_pane_ParamLimits

0x463d,	// (0x00083145) main_image_pane

0x43e2,	// (0x00082eea) main_location2_pane

0xe44a,	// (0x0008cf52) main_location_pane

0x43e2,	// (0x00082eea) main_messa_pane

0x43e2,	// (0x00082eea) main_mp2_pane

0xe44a,	// (0x0008cf52) main_mp_pane

0x43e2,	// (0x00082eea) main_msg_pane

0x43e2,	// (0x00082eea) main_mup_eq_pane

0x43e2,	// (0x00082eea) main_mup_pane

0xe44a,	// (0x0008cf52) main_notes_pane

0x43e2,	// (0x00082eea) main_pec_pane

0x43e2,	// (0x00082eea) main_phob_pane

0x43e2,	// (0x00082eea) main_pinb_pane

0x43e2,	// (0x00082eea) main_postcard_pane

0x43e2,	// (0x00082eea) main_qdial_pane

0xe44a,	// (0x0008cf52) main_skin_pane

0x43e2,	// (0x00082eea) main_smil2_pane

0xe44a,	// (0x0008cf52) main_smil_pane

0xe44a,	// (0x0008cf52) main_video_pane

0xe44a,	// (0x0008cf52) main_video_tele_pane

0x463d,	// (0x00083145) main_viewer_pane_ParamLimits

0x463d,	// (0x00083145) main_viewer_pane

0xe44a,	// (0x0008cf52) main_vorec_pane

0x8867,	// (0x0008736f) popup_blid_sat_info_window_ParamLimits

0x8867,	// (0x0008736f) popup_blid_sat_info_window

0x887d,	// (0x00087385) popup_dyc_status_message_window_ParamLimits

0x887d,	// (0x00087385) popup_dyc_status_message_window

0x888b,	// (0x00087393) popup_grid_large_graphic_window_ParamLimits

0x888b,	// (0x00087393) popup_grid_large_graphic_window

0x88ff,	// (0x00087407) popup_loc_request_window_ParamLimits

0x88ff,	// (0x00087407) popup_loc_request_window

0x8933,	// (0x0008743b) popup_wml_address_window_ParamLimits

0x8933,	// (0x0008743b) popup_wml_address_window

0x8709,	// (0x00087211) call_muted_g1

0x83c8,	// (0x00086ed0) popup_call_audio_conf_window_ParamLimits

0x83c8,	// (0x00086ed0) popup_call_audio_conf_window

0x8719,	// (0x00087221) popup_call_audio_first_window_ParamLimits

0x8719,	// (0x00087221) popup_call_audio_first_window

0x8759,	// (0x00087261) popup_call_audio_in_window_ParamLimits

0x8759,	// (0x00087261) popup_call_audio_in_window

0x877d,	// (0x00087285) popup_call_audio_out_window_ParamLimits

0x877d,	// (0x00087285) popup_call_audio_out_window

0x879f,	// (0x000872a7) popup_call_audio_second_window_ParamLimits

0x879f,	// (0x000872a7) popup_call_audio_second_window

0x87cf,	// (0x000872d7) popup_call_audio_wait_window_ParamLimits

0x87cf,	// (0x000872d7) popup_call_audio_wait_window

0x87f0,	// (0x000872f8) popup_number_entry_window_ParamLimits

0x87f0,	// (0x000872f8) popup_number_entry_window

0x3fa8,	// (0x00082ab0) bg_popup_call_pane_cp05_ParamLimits

0x3fa8,	// (0x00082ab0) bg_popup_call_pane_cp05

0x3fc8,	// (0x00082ad0) popup_number_entry_window_t1

0x3fdb,	// (0x00082ae3) popup_number_entry_window_t2

0x3fed,	// (0x00082af5) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0008dbf4) popup_number_entry_window_t

0x3fff,	// (0x00082b07) text_title_cp2

0x4012,	// (0x00082b1a) bg_popup_call_pane_cp_ParamLimits

0x4012,	// (0x00082b1a) bg_popup_call_pane_cp

0x4020,	// (0x00082b28) call_thumbnail_pane

0x4028,	// (0x00082b30) popup_call_audio_in_window_g1_ParamLimits

0x4028,	// (0x00082b30) popup_call_audio_in_window_g1

0x4034,	// (0x00082b3c) popup_call_audio_in_window_g2_ParamLimits

0x4034,	// (0x00082b3c) popup_call_audio_in_window_g2

0x4040,	// (0x00082b48) popup_call_audio_in_window_g3_ParamLimits

0x4040,	// (0x00082b48) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0008dbfd) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0008dbfd) popup_call_audio_in_window_g

0x404c,	// (0x00082b54) popup_call_audio_in_window_t1_ParamLimits

0x404c,	// (0x00082b54) popup_call_audio_in_window_t1

0x4090,	// (0x00082b98) popup_call_audio_in_window_t2_ParamLimits

0x4090,	// (0x00082b98) popup_call_audio_in_window_t2

0x40ab,	// (0x00082bb3) popup_call_audio_in_window_t3_ParamLimits

0x40ab,	// (0x00082bb3) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0008dc04) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0008dc04) popup_call_audio_in_window_t

0x4012,	// (0x00082b1a) bg_popup_call_pane_cp01_ParamLimits

0x4012,	// (0x00082b1a) bg_popup_call_pane_cp01

0x4020,	// (0x00082b28) call_thumbnail_pane_cp02

0x40be,	// (0x00082bc6) call_type_pane_cp022

0x40c6,	// (0x00082bce) popup_call_audio_out_window_g1_ParamLimits

0x40c6,	// (0x00082bce) popup_call_audio_out_window_g1

0x40d8,	// (0x00082be0) popup_call_audio_out_window_g2_ParamLimits

0x40d8,	// (0x00082be0) popup_call_audio_out_window_g2

0x40e4,	// (0x00082bec) popup_call_audio_out_window_g3_ParamLimits

0x40e4,	// (0x00082bec) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0008dc0b) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0008dc0b) popup_call_audio_out_window_g

0x40f6,	// (0x00082bfe) popup_call_audio_out_window_t1_ParamLimits

0x40f6,	// (0x00082bfe) popup_call_audio_out_window_t1

0x410e,	// (0x00082c16) popup_call_audio_out_window_t2_ParamLimits

0x410e,	// (0x00082c16) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0008dc12) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0008dc12) popup_call_audio_out_window_t

0x4123,	// (0x00082c2b) bg_popup_call_pane_ParamLimits

0x4123,	// (0x00082c2b) bg_popup_call_pane

0x597e,	// (0x00084486) call_thumbnail_pane_cp_ParamLimits

0x597e,	// (0x00084486) call_thumbnail_pane_cp

0x41a7,	// (0x00082caf) call_type_pane_cp01_ParamLimits

0x41a7,	// (0x00082caf) call_type_pane_cp01

0x41eb,	// (0x00082cf3) popup_call_audio_first_window_g1_ParamLimits

0x41eb,	// (0x00082cf3) popup_call_audio_first_window_g1

0x4237,	// (0x00082d3f) popup_call_audio_first_window_g2_ParamLimits

0x4237,	// (0x00082d3f) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0008dc17) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0008dc17) popup_call_audio_first_window_g

0x427b,	// (0x00082d83) popup_call_audio_first_window_t1_ParamLimits

0x427b,	// (0x00082d83) popup_call_audio_first_window_t1

0x4327,	// (0x00082e2f) popup_call_audio_first_window_t4_ParamLimits

0x4327,	// (0x00082e2f) popup_call_audio_first_window_t4

0x43b3,	// (0x00082ebb) popup_call_audio_first_window_t5_ParamLimits

0x43b3,	// (0x00082ebb) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0008dc1c) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0008dc1c) popup_call_audio_first_window_t

0x43e2,	// (0x00082eea) bg_popup_call_pane_cp02

0x43ec,	// (0x00082ef4) call_type_pane_cp023

0x43f4,	// (0x00082efc) popup_call_audio_wait_window_g1

0x43fc,	// (0x00082f04) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0008dc23) popup_call_audio_wait_window_g

0x4404,	// (0x00082f0c) popup_call_audio_wait_window_t3

0x4412,	// (0x00082f1a) bg_popup_call_pane_cp03_ParamLimits

0x4412,	// (0x00082f1a) bg_popup_call_pane_cp03

0x4472,	// (0x00082f7a) call_thumbnail_pane_cp011_ParamLimits

0x4472,	// (0x00082f7a) call_thumbnail_pane_cp011

0x447e,	// (0x00082f86) call_type_pane_cp034_ParamLimits

0x447e,	// (0x00082f86) call_type_pane_cp034

0x44ba,	// (0x00082fc2) popup_call_audio_second_window_g1_ParamLimits

0x44ba,	// (0x00082fc2) popup_call_audio_second_window_g1

0x44f6,	// (0x00082ffe) popup_call_audio_second_window_g2_ParamLimits

0x44f6,	// (0x00082ffe) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0008dc28) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0008dc28) popup_call_audio_second_window_g

0x4532,	// (0x0008303a) popup_call_audio_second_window_t1_ParamLimits

0x4532,	// (0x0008303a) popup_call_audio_second_window_t1

0x45b3,	// (0x000830bb) popup_call_audio_second_window_t2_ParamLimits

0x45b3,	// (0x000830bb) popup_call_audio_second_window_t2

0x45e9,	// (0x000830f1) popup_call_audio_second_window_t3_ParamLimits

0x45e9,	// (0x000830f1) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0008dc2d) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0008dc2d) popup_call_audio_second_window_t

0x43e2,	// (0x00082eea) bg_popup_call_pane_cp04

0x461f,	// (0x00083127) list_conf_pane

0x4627,	// (0x0008312f) popup_call_audio_conf_window_t1

0x4635,	// (0x0008313d) call_thumbnail_pane_g1

0x463d,	// (0x00083145) bg_pinb_pane_ParamLimits

0x463d,	// (0x00083145) bg_pinb_pane

0x464b,	// (0x00083153) find_pinb_pane

0x4654,	// (0x0008315c) listscroll_pinb_pane_ParamLimits

0x4654,	// (0x0008315c) listscroll_pinb_pane

0x4663,	// (0x0008316b) pinb_bg_pane_g1

0x59a2,	// (0x000844aa) pinb_bg_pane_g2

0x59ae,	// (0x000844b6) pinb_bg_pane_g3

0x59ba,	// (0x000844c2) pinb_bg_pane_g4

0x59c6,	// (0x000844ce) pinb_bg_pane_g5

0x59d2,	// (0x000844da) pinb_bg_pane_g6

0x59dd,	// (0x000844e5) pinb_bg_pane_g7

0x59e8,	// (0x000844f0) pinb_bg_pane_g8

0x59f3,	// (0x000844fb) pinb_bg_pane_g9

0x59fd,	// (0x00084505) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0008dc34) pinb_bg_pane_g

0x5a12,	// (0x0008451a) grid_pinb_pane

0x5a1d,	// (0x00084525) list_pinb_pane

0x5a28,	// (0x00084530) scroll_pane_cp01_ParamLimits

0x5a28,	// (0x00084530) scroll_pane_cp01

0x4675,	// (0x0008317d) find_pinb_pane_g1_ParamLimits

0x4675,	// (0x0008317d) find_pinb_pane_g1

0x468d,	// (0x00083195) find_pinb_pane_t1

0x469f,	// (0x000831a7) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0008dc4e) find_pinb_pane_t

0x46b4,	// (0x000831bc) input_focus_pane_cp01_ParamLimits

0x46b4,	// (0x000831bc) input_focus_pane_cp01

0x5a3a,	// (0x00084542) cell_pinb_pane_ParamLimits

0x5a3a,	// (0x00084542) cell_pinb_pane

0x5a68,	// (0x00084570) cell_pinb_pane_g1_ParamLimits

0x5a68,	// (0x00084570) cell_pinb_pane_g1

0x5a7d,	// (0x00084585) cell_pinb_pane_g2_ParamLimits

0x5a7d,	// (0x00084585) cell_pinb_pane_g2

0x46c0,	// (0x000831c8) cell_pinb_pane_g3_ParamLimits

0x46c0,	// (0x000831c8) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0008dc53) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0008dc53) cell_pinb_pane_g

0x43e2,	// (0x00082eea) grid_highlight_pane_cp01

0x5a89,	// (0x00084591) list_pinb_item_pane_ParamLimits

0x5a89,	// (0x00084591) list_pinb_item_pane

0x43e2,	// (0x00082eea) list_highlight_pane_cp02

0x46cc,	// (0x000831d4) list_pinb_item_pane_g1_ParamLimits

0x46cc,	// (0x000831d4) list_pinb_item_pane_g1

0x46d9,	// (0x000831e1) list_pinb_item_pane_g2_ParamLimits

0x46d9,	// (0x000831e1) list_pinb_item_pane_g2

0x5ab3,	// (0x000845bb) list_pinb_item_pane_g3_ParamLimits

0x5ab3,	// (0x000845bb) list_pinb_item_pane_g3

0x46e5,	// (0x000831ed) list_pinb_item_pane_g4_ParamLimits

0x46e5,	// (0x000831ed) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0008dc5a) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0008dc5a) list_pinb_item_pane_g

0x46f1,	// (0x000831f9) list_pinb_item_pane_t1_ParamLimits

0x46f1,	// (0x000831f9) list_pinb_item_pane_t1

0x5ade,	// (0x000845e6) calc_display_pane

0x5afc,	// (0x00084604) calc_paper_pane

0x5b18,	// (0x00084620) grid_calc_pane

0x43e2,	// (0x00082eea) bg_list_pane_cp01

0x5b44,	// (0x0008464c) clock_g1

0x5b4c,	// (0x00084654) clock_g2

0x0001,

0xf15b,	// (0x0008dc63) clock_g

0x5b56,	// (0x0008465e) clock_t1_ParamLimits

0x5b56,	// (0x0008465e) clock_t1

0x5b6b,	// (0x00084673) clock_t2_ParamLimits

0x5b6b,	// (0x00084673) clock_t2

0x5b7d,	// (0x00084685) clock_t3_ParamLimits

0x5b7d,	// (0x00084685) clock_t3

0x5b8f,	// (0x00084697) clock_t4_ParamLimits

0x5b8f,	// (0x00084697) clock_t4

0x5ba1,	// (0x000846a9) clock_t5_ParamLimits

0x5ba1,	// (0x000846a9) clock_t5

0x5bb6,	// (0x000846be) clock_t6_ParamLimits

0x5bb6,	// (0x000846be) clock_t6

0x5bc8,	// (0x000846d0) clock_t7_ParamLimits

0x5bc8,	// (0x000846d0) clock_t7

0x5bda,	// (0x000846e2) clock_t8_ParamLimits

0x5bda,	// (0x000846e2) clock_t8

0x5bf0,	// (0x000846f8) clock_t9_ParamLimits

0x5bf0,	// (0x000846f8) clock_t9

0x0008,

0xf160,	// (0x0008dc68) clock_t_ParamLimits

0xf160,	// (0x0008dc68) clock_t

0x4708,	// (0x00083210) popup_clock_analogue_window_cp02

0x4708,	// (0x00083210) popup_clock_digital_window_cp01

0x4710,	// (0x00083218) listscroll_help_pane

0x43e2,	// (0x00082eea) phob_pre_status_pane

0x471a,	// (0x00083222) grid_qdial_pane

0x43e2,	// (0x00082eea) listscroll_mce_pane

0x4724,	// (0x0008322c) bg_notes_pane

0x472e,	// (0x00083236) list_notes_pane

0x5c06,	// (0x0008470e) scroll_pane_cp06

0x4738,	// (0x00083240) bg_calc_paper_pane

0x5c1b,	// (0x00084723) list_calc_pane

0xd9c2,	// (0x0008c4ca) bg_calc_display_pane

0x5c35,	// (0x0008473d) calc_display_pane_t1

0x5c4a,	// (0x00084752) calc_display_pane_t2

0x5c5f,	// (0x00084767) calc_display_pane_t3

0x0002,

0xf173,	// (0x0008dc7b) calc_display_pane_t

0x5c71,	// (0x00084779) cell_calc_pane_ParamLimits

0x5c71,	// (0x00084779) cell_calc_pane

0xd9ce,	// (0x0008c4d6) bg_calc_paper_pane_g1

0xd9da,	// (0x0008c4e2) bg_calc_paper_pane_g2

0xd9e6,	// (0x0008c4ee) bg_calc_paper_pane_g3

0xd9f2,	// (0x0008c4fa) bg_calc_paper_pane_g4

0xd9fe,	// (0x0008c506) bg_calc_paper_pane_g5

0x5c9e,	// (0x000847a6) bg_calc_paper_pane_g6

0x5caf,	// (0x000847b7) bg_calc_paper_pane_g7

0x5cc0,	// (0x000847c8) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0008dc82) bg_calc_paper_pane_g

0x5cd1,	// (0x000847d9) calc_bg_paper_pane_g9

0x5ce2,	// (0x000847ea) list_calc_item_pane_ParamLimits

0x5ce2,	// (0x000847ea) list_calc_item_pane

0xda0a,	// (0x0008c512) list_calc_item_pane_g1

0x5d1c,	// (0x00084824) list_calc_item_pane_t1_ParamLimits

0x5d1c,	// (0x00084824) list_calc_item_pane_t1

0x5d2e,	// (0x00084836) list_calc_item_pane_t2_ParamLimits

0x5d2e,	// (0x00084836) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0008dc93) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0008dc93) list_calc_item_pane_t

0xda17,	// (0x0008c51f) cell_calc_pane_g1

0xda21,	// (0x0008c529) grid_highlight_pane_cp02

0xda43,	// (0x0008c54b) bg_calc_display_pane_g1

0x5d5e,	// (0x00084866) bg_calc_display_pane_g2

0xda4c,	// (0x0008c554) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0008dc9d) bg_calc_display_pane_g

0x5d68,	// (0x00084870) cell_qdial_pane_ParamLimits

0x5d68,	// (0x00084870) cell_qdial_pane

0x5d7c,	// (0x00084884) cell_qdial_pane_g1_ParamLimits

0x5d7c,	// (0x00084884) cell_qdial_pane_g1

0x5d89,	// (0x00084891) cell_qdial_pane_g2_ParamLimits

0x5d89,	// (0x00084891) cell_qdial_pane_g2

0xda55,	// (0x0008c55d) cell_qdial_pane_g3_ParamLimits

0xda55,	// (0x0008c55d) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0008dca4) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0008dca4) cell_qdial_pane_g

0x5da7,	// (0x000848af) cell_qdial_pane_t1_ParamLimits

0x5da7,	// (0x000848af) cell_qdial_pane_t1

0x5dbf,	// (0x000848c7) cell_qdial_pane_t2_ParamLimits

0x5dbf,	// (0x000848c7) cell_qdial_pane_t2

0x5dd2,	// (0x000848da) cell_qdial_pane_t3_ParamLimits

0x5dd2,	// (0x000848da) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0008dcad) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0008dcad) cell_qdial_pane_t

0x43e2,	// (0x00082eea) grid_highlight_pane_cp04

0xda61,	// (0x0008c569) thumbnail_qdial_pane_ParamLimits

0xda61,	// (0x0008c569) thumbnail_qdial_pane

0xdabd,	// (0x0008c5c5) list_help_pane

0xdac6,	// (0x0008c5ce) scroll_pane_cp02

0x5de5,	// (0x000848ed) help_list_pane_t1_ParamLimits

0x5de5,	// (0x000848ed) help_list_pane_t1

0x5e23,	// (0x0008492b) bg_notes_pane_g2

0x5e2b,	// (0x00084933) bg_notes_pane_g3

0x5e33,	// (0x0008493b) notes_bg_pane_g1

0x5e3b,	// (0x00084943) notes_bg_pane_g4

0x5e43,	// (0x0008494b) notes_bg_pane_g5

0x5e4b,	// (0x00084953) notes_bg_pane_g6

0x5e53,	// (0x0008495b) notes_bg_pane_g7

0x5e5b,	// (0x00084963) notes_bg_pane_g8

0x5e63,	// (0x0008496b) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0008dccb) notes_bg_pane_g

0x5e6b,	// (0x00084973) list_notes_text_pane_ParamLimits

0x5e6b,	// (0x00084973) list_notes_text_pane

0xdacf,	// (0x0008c5d7) list_notes_text_pane_g1

0x5e9b,	// (0x000849a3) list_notes_text_pane_t1

0xd9c2,	// (0x0008c4ca) listscroll_cale_week_pane

0x5ec6,	// (0x000849ce) bg_cale_heading_pane

0xdae9,	// (0x0008c5f1) bg_cale_pane_cp01

0x5ee2,	// (0x000849ea) cale_week_corner_pane

0x5ef3,	// (0x000849fb) cale_week_day_heading_pane

0x5f0f,	// (0x00084a17) cale_week_scroll_pane_g1

0x5f28,	// (0x00084a30) cale_week_scroll_pane_g2

0x5f39,	// (0x00084a41) cale_week_scroll_pane_g3

0x5f4a,	// (0x00084a52) cale_week_scroll_pane_g4

0x5f5b,	// (0x00084a63) cale_week_scroll_pane_g5

0x5f6c,	// (0x00084a74) cale_week_scroll_pane_g6

0x5f7d,	// (0x00084a85) cale_week_scroll_pane_g7

0x5f90,	// (0x00084a98) cale_week_scroll_pane_g8

0x5fa3,	// (0x00084aab) cale_week_scroll_pane_g9

0x5fb4,	// (0x00084abc) cale_week_scroll_pane_g10

0x5fc5,	// (0x00084acd) cale_week_scroll_pane_g11

0x5fd6,	// (0x00084ade) cale_week_scroll_pane_g12

0x5fef,	// (0x00084af7) cale_week_scroll_pane_g13

0x6008,	// (0x00084b10) cale_week_scroll_pane_g14

0x6021,	// (0x00084b29) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0008dcda) cale_week_scroll_pane_g

0x603a,	// (0x00084b42) cale_week_time_pane

0x604d,	// (0x00084b55) grid_cale_week_pane

0x606a,	// (0x00084b72) scroll_pane_cp08

0x6084,	// (0x00084b8c) cell_cale_week_pane_ParamLimits

0x6084,	// (0x00084b8c) cell_cale_week_pane

0x60d4,	// (0x00084bdc) cale_week_day_heading_pane_t1

0x60e8,	// (0x00084bf0) cale_week_day_heading_pane_t2

0x60fc,	// (0x00084c04) cale_week_day_heading_pane_t3

0x6110,	// (0x00084c18) cale_week_day_heading_pane_t4

0x6124,	// (0x00084c2c) cale_week_day_heading_pane_t5

0x6138,	// (0x00084c40) cale_week_day_heading_pane_t6

0x614c,	// (0x00084c54) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0008dcf9) cale_week_day_heading_pane_t

0xdb14,	// (0x0008c61c) bg_cale_side_pane

0x6160,	// (0x00084c68) cale_week_time_pane_t1

0x6178,	// (0x00084c80) cale_week_time_pane_t2

0x6190,	// (0x00084c98) cale_week_time_pane_t3

0x61a8,	// (0x00084cb0) cale_week_time_pane_t4

0x61c0,	// (0x00084cc8) cale_week_time_pane_t5

0x61d8,	// (0x00084ce0) cale_week_time_pane_t6

0x61f8,	// (0x00084d00) cale_week_time_pane_t7

0x6218,	// (0x00084d20) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0008dd08) cale_week_time_pane_t

0x6238,	// (0x00084d40) cell_cale_week_pane_g2

0x6249,	// (0x00084d51) cell_cale_week_pane_g3_ParamLimits

0x6249,	// (0x00084d51) cell_cale_week_pane_g3

0xdb22,	// (0x0008c62a) grid_highlight_pane_cp07

0xdb2a,	// (0x0008c632) listscroll_gms_pane

0xdb34,	// (0x0008c63c) grid_gms_pane

0xdb3d,	// (0x0008c645) listscroll_gms_pane_g1

0xdb45,	// (0x0008c64d) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0008dd19) listscroll_gms_pane_g

0x6261,	// (0x00084d69) scroll_pane_cp010

0x626c,	// (0x00084d74) cell_gms_pane_ParamLimits

0x626c,	// (0x00084d74) cell_gms_pane

0x627e,	// (0x00084d86) cell_gms_pane_g1

0xdb4d,	// (0x0008c655) cell_gms_pane_g2

0xdacf,	// (0x0008c5d7) cell_gms_pane_g3

0xdb55,	// (0x0008c65d) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0008dd1e) cell_gms_pane_g

0xdb5e,	// (0x0008c666) grid_highlight_pane_cp09

0x86b1,	// (0x000871b9) phob_pre_status_pane_g1

0x86b9,	// (0x000871c1) phob_pre_status_pane_g2

0x86c1,	// (0x000871c9) phob_pre_status_pane_g3

0x86c9,	// (0x000871d1) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0008e10d) phob_pre_status_pane_g

0x86d9,	// (0x000871e1) phob_pre_status_pane_t1

0x86e9,	// (0x000871f1) phob_pre_status_pane_t2

0x86f9,	// (0x00087201) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x0008e118) phob_pre_status_pane_t

0x43e2,	// (0x00082eea) bg_list_pane_cp05

0x628e,	// (0x00084d96) grid_vorec_pane

0x6296,	// (0x00084d9e) vorec_t1

0x62a4,	// (0x00084dac) vorec_t2

0x62b2,	// (0x00084dba) vorec_t3

0x62c0,	// (0x00084dc8) vorec_t4

0x62ce,	// (0x00084dd6) vorec_t5

0x62dc,	// (0x00084de4) vorec_t6

0x0006,

0xf21f,	// (0x0008dd27) vorec_t

0x62f8,	// (0x00084e00) wait_bar_pane_cp01

0xdb66,	// (0x0008c66e) cell_vorec_pane_ParamLimits

0xdb66,	// (0x0008c66e) cell_vorec_pane

0xdb79,	// (0x0008c681) cell_vorec_pane_g1

0x43e2,	// (0x00082eea) grid_highlight_pane_cp05

0x6310,	// (0x00084e18) cams_zoom_pane

0x631c,	// (0x00084e24) image_vga_pane

0x632b,	// (0x00084e33) main_camera_pane_g1

0x6339,	// (0x00084e41) main_camera_pane_g2

0x6347,	// (0x00084e4f) main_camera_pane_g3

0x6353,	// (0x00084e5b) main_camera_pane_g4

0x635f,	// (0x00084e67) main_camera_pane_g5

0x636b,	// (0x00084e73) main_camera_pane_g6

0x6377,	// (0x00084e7f) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0008dd36) main_camera_pane_g

0x6383,	// (0x00084e8b) main_camera_pane_t1

0x6395,	// (0x00084e9d) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0008dd47) main_camera_pane_t

0x63b6,	// (0x00084ebe) cams_zoom_pane_cp_ParamLimits

0x63b6,	// (0x00084ebe) cams_zoom_pane_cp

0x63da,	// (0x00084ee2) image_cif_pane_ParamLimits

0x63da,	// (0x00084ee2) image_cif_pane

0x63f8,	// (0x00084f00) image_subqcif_pane

0x6400,	// (0x00084f08) main_video_pane_g1_ParamLimits

0x6400,	// (0x00084f08) main_video_pane_g1

0x6420,	// (0x00084f28) main_video_pane_g2_ParamLimits

0x6420,	// (0x00084f28) main_video_pane_g2

0x6452,	// (0x00084f5a) main_video_pane_g3_ParamLimits

0x6452,	// (0x00084f5a) main_video_pane_g3

0x647d,	// (0x00084f85) main_video_pane_g4_ParamLimits

0x647d,	// (0x00084f85) main_video_pane_g4

0x64a8,	// (0x00084fb0) main_video_pane_g5_ParamLimits

0x64a8,	// (0x00084fb0) main_video_pane_g5

0xdb8f,	// (0x0008c697) main_video_pane_g6_ParamLimits

0xdb8f,	// (0x0008c697) main_video_pane_g6

0x0006,

0xf244,	// (0x0008dd4c) main_video_pane_g_ParamLimits

0xf244,	// (0x0008dd4c) main_video_pane_g

0x64cc,	// (0x00084fd4) main_video_pane_t1_ParamLimits

0x64cc,	// (0x00084fd4) main_video_pane_t1

0xdba9,	// (0x0008c6b1) cams_zoom_pane_g1

0xdbb2,	// (0x0008c6ba) cams_zoom_pane_g2

0xdbbb,	// (0x0008c6c3) cams_zoom_pane_g3

0xdbc4,	// (0x0008c6cc) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0008dd5b) cams_zoom_pane_g

0x6516,	// (0x0008501e) grid_cams_pane

0x6524,	// (0x0008502c) linegrid_cams_pane

0x6532,	// (0x0008503a) cell_cams_pane_ParamLimits

0x6532,	// (0x0008503a) cell_cams_pane

0xdbcd,	// (0x0008c6d5) cams_burst_image_pane

0xdbd5,	// (0x0008c6dd) cell_cams_pane_g1

0x43e2,	// (0x00082eea) grid_highlight_pane_cp03

0xda17,	// (0x0008c51f) mp_bg_pane_g1

0x43e2,	// (0x00082eea) bg_list_pane_cp03

0x0c0c,	// (0x0007f714) bg_mp_pane

0x0c14,	// (0x0007f71c) grid_mp_pane

0x0c1c,	// (0x0007f724) media_player_g1

0x0c24,	// (0x0007f72c) media_player_t1

0x0c32,	// (0x0007f73a) media_player_t2

0x0c40,	// (0x0007f748) media_player_t3

0x0c4e,	// (0x0007f756) media_player_t4

0x0c5c,	// (0x0007f764) media_player_t5

0x0c6a,	// (0x0007f772) media_player_t6

0x0c78,	// (0x0007f780) media_player_t7

0x0006,

0xf5ef,	// (0x0008e0f7) media_player_t

0x0c86,	// (0x0007f78e) wait_bar_pane_cp02

0xf5d4,	// (0x0008e0dc) main_usb_pane_t

0x86a8,	// (0x000871b0) cell_mp_pane

0xda17,	// (0x0008c51f) cell_mp_pane_g1

0x43e2,	// (0x00082eea) grid_highlight_pane_cp06

0xdbdd,	// (0x0008c6e5) grid_skin_colour_pane

0xdbe5,	// (0x0008c6ed) list_highlight_pane_cp03

0x6595,	// (0x0008509d) skin_g1

0xdbed,	// (0x0008c6f5) skin_t1

0xdbfc,	// (0x0008c704) skin_t2

0x0001,

0xf288,	// (0x0008dd90) skin_t

0x659f,	// (0x000850a7) cell_skin_colour_pane_ParamLimits

0x659f,	// (0x000850a7) cell_skin_colour_pane

0xdc0a,	// (0x0008c712) cell_skin_colour_pane_g1

0x6623,	// (0x0008512b) call_video_g1_ParamLimits

0x6623,	// (0x0008512b) call_video_g1

0x6633,	// (0x0008513b) call_video_g2_ParamLimits

0x6633,	// (0x0008513b) call_video_g2

0x0001,

0xf28d,	// (0x0008dd95) call_video_g_ParamLimits

0xf28d,	// (0x0008dd95) call_video_g

0x668d,	// (0x00085195) call_video_uplink_pane_cp1_ParamLimits

0x668d,	// (0x00085195) call_video_uplink_pane_cp1

0xdc1c,	// (0x0008c724) call_video_uplink_pane_cp2

0x6759,	// (0x00085261) video_down_crop_pane_ParamLimits

0x6759,	// (0x00085261) video_down_crop_pane

0x684b,	// (0x00085353) video_down_pane_ParamLimits

0x684b,	// (0x00085353) video_down_pane

0xdc24,	// (0x0008c72c) video_down_subqcif_pane_ParamLimits

0xdc24,	// (0x0008c72c) video_down_subqcif_pane

0xdc3c,	// (0x0008c744) video_down_subqcif_pane_cp_ParamLimits

0xdc3c,	// (0x0008c744) video_down_subqcif_pane_cp

0xdc60,	// (0x0008c768) im_reading_pane_ParamLimits

0xdc60,	// (0x0008c768) im_reading_pane

0x696d,	// (0x00085475) im_writing_pane_ParamLimits

0x696d,	// (0x00085475) im_writing_pane

0x698b,	// (0x00085493) im_reading_pane_t1

0xdc7a,	// (0x0008c782) list_im_pane

0xdc8b,	// (0x0008c793) scroll_pane_cp07

0x69eb,	// (0x000854f3) im_writing_pane_t1_ParamLimits

0x69eb,	// (0x000854f3) im_writing_pane_t1

0xdca4,	// (0x0008c7ac) im_writing_pane_t2_ParamLimits

0xdca4,	// (0x0008c7ac) im_writing_pane_t2

0x0001,

0xf297,	// (0x0008dd9f) im_writing_pane_t_ParamLimits

0xf297,	// (0x0008dd9f) im_writing_pane_t

0x43e2,	// (0x00082eea) input_focus_pane_cp04

0x43e2,	// (0x00082eea) input_focus_pane_cp05

0x69fd,	// (0x00085505) list_im_single_pane_ParamLimits

0x69fd,	// (0x00085505) list_im_single_pane

0x6a29,	// (0x00085531) list_single_im_pane_t1

0x866c,	// (0x00087174) blid_accuracy_pane

0x8674,	// (0x0008717c) blid_compass_pane

0x867e,	// (0x00087186) main_location_t1

0x868c,	// (0x00087194) main_location_t2

0x869a,	// (0x000871a2) main_location_t3

0x0002,

0xf5fe,	// (0x0008e106) main_location_t

0x43e2,	// (0x00082eea) aid_levels_location

0xda17,	// (0x0008c51f) blid_accuracy_pane_g1

0xda17,	// (0x0008c51f) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0008de01) blid_accuracy_pane_g

0xdcec,	// (0x0008c7f4) wml_content_pane

0xdd2a,	// (0x0008c832) wml_button_pane_ParamLimits

0xdd2a,	// (0x0008c832) wml_button_pane

0x6a38,	// (0x00085540) wml_list_single_large_pane_ParamLimits

0x6a38,	// (0x00085540) wml_list_single_large_pane

0x6a6a,	// (0x00085572) wml_list_single_medium_pane_ParamLimits

0x6a6a,	// (0x00085572) wml_list_single_medium_pane

0x6aa3,	// (0x000855ab) wml_list_single_small_pane_ParamLimits

0x6aa3,	// (0x000855ab) wml_list_single_small_pane

0xdd3e,	// (0x0008c846) wml_selection_box_pane_ParamLimits

0xdd3e,	// (0x0008c846) wml_selection_box_pane

0xdd51,	// (0x0008c859) wml_list_single_pane_t1

0xdd60,	// (0x0008c868) wml_list_single_medium_pane_t1

0xdd6f,	// (0x0008c877) wml_list_single_large_pane_t1

0xdd7e,	// (0x0008c886) input_focus_pane_cp02_ParamLimits

0xdd7e,	// (0x0008c886) input_focus_pane_cp02

0xdd91,	// (0x0008c899) wml_selection_box_pane_g1

0xdd9a,	// (0x0008c8a2) wml_selection_box_pane_t1_ParamLimits

0xdd9a,	// (0x0008c8a2) wml_selection_box_pane_t1

0x463d,	// (0x00083145) bg_wml_button_pane_ParamLimits

0x463d,	// (0x00083145) bg_wml_button_pane

0xddb2,	// (0x0008c8ba) wml_button_pane_g1

0xddba,	// (0x0008c8c2) wml_button_pane_t1

0xddb2,	// (0x0008c8ba) wml_button_bg_pane_g1

0xddca,	// (0x0008c8d2) wml_button_bg_pane_g2

0xddd2,	// (0x0008c8da) wml_button_bg_pane_g3

0xddda,	// (0x0008c8e2) wml_button_bg_pane_g4

0xdde2,	// (0x0008c8ea) wml_button_bg_pane_g5

0xddea,	// (0x0008c8f2) wml_button_bg_pane_g6

0xddf2,	// (0x0008c8fa) wml_button_bg_pane_g7

0xddfa,	// (0x0008c902) wml_button_bg_pane_g8

0xde02,	// (0x0008c90a) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0008dda4) wml_button_bg_pane_g

0x6aeb,	// (0x000855f3) bg_list_pane_cp02

0xde0a,	// (0x0008c912) mce_header_pane_ParamLimits

0xde0a,	// (0x0008c912) mce_header_pane

0xde20,	// (0x0008c928) mce_icon_pane

0xde20,	// (0x0008c928) mce_image_pane

0xde29,	// (0x0008c931) mce_text_pane_ParamLimits

0xde29,	// (0x0008c931) mce_text_pane

0x6af5,	// (0x000855fd) scroll_pane_cp03

0xdd22,	// (0x0008c82a) scroll_pane_cp04

0xde3c,	// (0x0008c944) scroll_pane_cp05_ParamLimits

0xde3c,	// (0x0008c944) scroll_pane_cp05

0x6aff,	// (0x00085607) mce_header_field_pane_ParamLimits

0x6aff,	// (0x00085607) mce_header_field_pane

0x6b1f,	// (0x00085627) mce_header_field_pane_2_ParamLimits

0x6b1f,	// (0x00085627) mce_header_field_pane_2

0x6b35,	// (0x0008563d) mce_header_field_pane_3

0x6b3d,	// (0x00085645) list_single_mce_message_pane_ParamLimits

0x6b3d,	// (0x00085645) list_single_mce_message_pane

0x6b6d,	// (0x00085675) list_single_mce_smart_pane_ParamLimits

0x6b6d,	// (0x00085675) list_single_mce_smart_pane

0xde48,	// (0x0008c950) input_focus_pane_cp03

0xde51,	// (0x0008c959) list_header_data_pane

0x6ba8,	// (0x000856b0) mce_header_field_pane_t1

0x6bb8,	// (0x000856c0) list_single_mce_header_pane_ParamLimits

0x6bb8,	// (0x000856c0) list_single_mce_header_pane

0xde59,	// (0x0008c961) list_single_mce_header_pane_t1

0xde68,	// (0x0008c970) list_single_mce_message_pane_g1

0xde70,	// (0x0008c978) list_single_mce_message_pane_t1

0x6c0a,	// (0x00085712) bg_cale_heading_pane_cp01_ParamLimits

0x6c0a,	// (0x00085712) bg_cale_heading_pane_cp01

0xde7e,	// (0x0008c986) bg_cale_pane_cp02_ParamLimits

0xde7e,	// (0x0008c986) bg_cale_pane_cp02

0x6c3d,	// (0x00085745) cale_month_corner_pane

0x6c53,	// (0x0008575b) cale_month_day_heading_pane_ParamLimits

0x6c53,	// (0x0008575b) cale_month_day_heading_pane

0x6c96,	// (0x0008579e) cale_month_pane_g1_ParamLimits

0x6c96,	// (0x0008579e) cale_month_pane_g1

0x6cc2,	// (0x000857ca) cale_month_pane_g2_ParamLimits

0x6cc2,	// (0x000857ca) cale_month_pane_g2

0x6ce5,	// (0x000857ed) cale_month_pane_g3_ParamLimits

0x6ce5,	// (0x000857ed) cale_month_pane_g3

0x6d21,	// (0x00085829) cale_month_pane_g4_ParamLimits

0x6d21,	// (0x00085829) cale_month_pane_g4

0x6d5d,	// (0x00085865) cale_month_pane_g5_ParamLimits

0x6d5d,	// (0x00085865) cale_month_pane_g5

0x6d99,	// (0x000858a1) cale_month_pane_g6_ParamLimits

0x6d99,	// (0x000858a1) cale_month_pane_g6

0x6dd5,	// (0x000858dd) cale_month_pane_g7_ParamLimits

0x6dd5,	// (0x000858dd) cale_month_pane_g7

0x6e21,	// (0x00085929) cale_month_pane_g8_ParamLimits

0x6e21,	// (0x00085929) cale_month_pane_g8

0x6e6d,	// (0x00085975) cale_month_pane_g9_ParamLimits

0x6e6d,	// (0x00085975) cale_month_pane_g9

0x6eb3,	// (0x000859bb) cale_month_pane_g10_ParamLimits

0x6eb3,	// (0x000859bb) cale_month_pane_g10

0x6ef9,	// (0x00085a01) cale_month_pane_g11_ParamLimits

0x6ef9,	// (0x00085a01) cale_month_pane_g11

0x6f37,	// (0x00085a3f) cale_month_pane_g12_ParamLimits

0x6f37,	// (0x00085a3f) cale_month_pane_g12

0x6f75,	// (0x00085a7d) cale_month_pane_g13_ParamLimits

0x6f75,	// (0x00085a7d) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0008ddb7) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0008ddb7) cale_month_pane_g

0x6fb3,	// (0x00085abb) cale_month_week_pane

0x6fc6,	// (0x00085ace) grid_cale_month_pane_ParamLimits

0x6fc6,	// (0x00085ace) grid_cale_month_pane

0x7004,	// (0x00085b0c) cale_month_day_heading_pane_t1

0x7062,	// (0x00085b6a) cale_month_day_heading_pane_t2

0x70c7,	// (0x00085bcf) cale_month_day_heading_pane_t3

0x712c,	// (0x00085c34) cale_month_day_heading_pane_t4

0x7191,	// (0x00085c99) cale_month_day_heading_pane_t5

0x71f6,	// (0x00085cfe) cale_month_day_heading_pane_t6

0x7263,	// (0x00085d6b) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0008ddd2) cale_month_day_heading_pane_t

0xdb14,	// (0x0008c61c) bg_cale_side_pane_cp01

0x72d8,	// (0x00085de0) cale_month_week_pane_t1

0x72ef,	// (0x00085df7) cale_month_week_pane_t2

0x7306,	// (0x00085e0e) cale_month_week_pane_t3

0x731d,	// (0x00085e25) cale_month_week_pane_t4

0x7334,	// (0x00085e3c) cale_month_week_pane_t5

0x7353,	// (0x00085e5b) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0008dde1) cale_month_week_pane_t

0x7372,	// (0x00085e7a) cell_cale_month_pane_ParamLimits

0x7372,	// (0x00085e7a) cell_cale_month_pane

0x7440,	// (0x00085f48) cell_cale_month_pane_g1

0x744c,	// (0x00085f54) cell_cale_month_pane_t1_ParamLimits

0x744c,	// (0x00085f54) cell_cale_month_pane_t1

0xdb22,	// (0x0008c62a) grid_highlight_pane_cp08

0xda17,	// (0x0008c51f) main_smil_g1

0x7468,	// (0x00085f70) smil_status_pane

0xdeb3,	// (0x0008c9bb) smil_text_pane

0x0b24,	// (0x0007f62c) bg_popup_call3_rect_pane_g8

0x0b2c,	// (0x0007f634) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0008e09a) bg_popup_call3_rect_pane_g

0x0dc1,	// (0x0007f8c9) smil_status_volume_pane_g1

0xdebd,	// (0x0008c9c5) smil_status_pane_t1

0x8a50,	// (0x00087558) volume_smil_pane

0xded4,	// (0x0008c9dc) list_smil_text_pane

0x747b,	// (0x00085f83) scroll_pane_cp011

0x7486,	// (0x00085f8e) smil_text_list_pane_t1_ParamLimits

0x7486,	// (0x00085f8e) smil_text_list_pane_t1

0x7531,	// (0x00086039) aid_volume_smil_ParamLimits

0x7531,	// (0x00086039) aid_volume_smil

0xda17,	// (0x0008c51f) smil_volume_pane_g1

0xda17,	// (0x0008c51f) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0008de01) smil_volume_pane_g

0xd9c2,	// (0x0008c4ca) listscroll_cale_day_pane

0xdede,	// (0x0008c9e6) bg_cale_pane

0xdef6,	// (0x0008c9fe) list_cale_pane

0xdf07,	// (0x0008ca0f) scroll_pane_cp09

0xdf18,	// (0x0008ca20) cale_bg_pane_g1

0xdf20,	// (0x0008ca28) cale_bg_pane_g2

0xdf28,	// (0x0008ca30) cale_bg_pane_g3

0xdf30,	// (0x0008ca38) cale_bg_pane_g4

0xdf38,	// (0x0008ca40) cale_bg_pane_g5

0xdf40,	// (0x0008ca48) cale_bg_pane_g6

0xdf48,	// (0x0008ca50) cale_bg_pane_g7

0xdf50,	// (0x0008ca58) cale_bg_pane_g8

0xdf58,	// (0x0008ca60) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0008de06) cale_bg_pane_g

0x7553,	// (0x0008605b) list_cale_time_pane_ParamLimits

0x7553,	// (0x0008605b) list_cale_time_pane

0x7574,	// (0x0008607c) list_cale_time_pane_g1_ParamLimits

0x7574,	// (0x0008607c) list_cale_time_pane_g1

0xdf60,	// (0x0008ca68) list_cale_time_pane_g2_ParamLimits

0xdf60,	// (0x0008ca68) list_cale_time_pane_g2

0x7580,	// (0x00086088) list_cale_time_pane_g3_ParamLimits

0x7580,	// (0x00086088) list_cale_time_pane_g3

0x759c,	// (0x000860a4) list_cale_time_pane_g4_ParamLimits

0x759c,	// (0x000860a4) list_cale_time_pane_g4

0x75aa,	// (0x000860b2) list_cale_time_pane_g5_ParamLimits

0x75aa,	// (0x000860b2) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0008de19) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0008de19) list_cale_time_pane_g

0x75b8,	// (0x000860c0) list_cale_time_pane_t1_ParamLimits

0x75b8,	// (0x000860c0) list_cale_time_pane_t1

0x75e0,	// (0x000860e8) list_cale_time_pane_t2_ParamLimits

0x75e0,	// (0x000860e8) list_cale_time_pane_t2

0x793a,	// (0x00086442) aid_blid_cardinal_pane

0x797c,	// (0x00086484) compass_pane_t4

0x7608,	// (0x00086110) list_cale_time_pane_t4_ParamLimits

0x7608,	// (0x00086110) list_cale_time_pane_t4

0x798a,	// (0x00086492) compass_pane_t5

0x799a,	// (0x000864a2) compass_pane_t6

0x79a8,	// (0x000864b0) compass_pane_t7

0xe39c,	// (0x0008cea4) navi_pane_cc_t1

0xe4f1,	// (0x0008cff9) aid_phob_thumbnail_center_pane

0x8162,	// (0x00086c6a) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0008de26) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0008de26) list_cale_time_pane_t

0x4012,	// (0x00082b1a) bg_popup_window_pane_cp02_ParamLimits

0x4012,	// (0x00082b1a) bg_popup_window_pane_cp02

0xdf7a,	// (0x0008ca82) heading_pane_cp01_ParamLimits

0xdf7a,	// (0x0008ca82) heading_pane_cp01

0xdf86,	// (0x0008ca8e) loc_req_pane_ParamLimits

0xdf86,	// (0x0008ca8e) loc_req_pane

0xdf96,	// (0x0008ca9e) loc_type_pane_ParamLimits

0xdf96,	// (0x0008ca9e) loc_type_pane

0xdfa8,	// (0x0008cab0) loc_type_pane_t1_ParamLimits

0xdfa8,	// (0x0008cab0) loc_type_pane_t1

0xdfba,	// (0x0008cac2) loc_type_pane_t2_ParamLimits

0xdfba,	// (0x0008cac2) loc_type_pane_t2

0xdfcc,	// (0x0008cad4) loc_type_pane_t3_ParamLimits

0xdfcc,	// (0x0008cad4) loc_type_pane_t3

0x0002,

0xf325,	// (0x0008de2d) loc_type_pane_t_ParamLimits

0xf325,	// (0x0008de2d) loc_type_pane_t

0xdfde,	// (0x0008cae6) list_loc_req_pane

0xdfe8,	// (0x0008caf0) scroll_pane_cp012

0x7630,	// (0x00086138) list_single_loc_request_popup_menu_pane_ParamLimits

0x7630,	// (0x00086138) list_single_loc_request_popup_menu_pane

0xdff3,	// (0x0008cafb) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xdff3,	// (0x0008cafb) list_single_loc_request_popup_menu_pane_g1

0xdfff,	// (0x0008cb07) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xdfff,	// (0x0008cb07) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0008de34) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0008de34) list_single_loc_request_popup_menu_pane_g

0xe00b,	// (0x0008cb13) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe00b,	// (0x0008cb13) list_single_loc_request_popup_menu_pane_t1

0x7642,	// (0x0008614a) bg_popup_window_pane_cp03_ParamLimits

0x7642,	// (0x0008614a) bg_popup_window_pane_cp03

0x7650,	// (0x00086158) heading_loc_req_pane_ParamLimits

0x7650,	// (0x00086158) heading_loc_req_pane

0x765c,	// (0x00086164) popup_dyc_status_message_window_g1_ParamLimits

0x765c,	// (0x00086164) popup_dyc_status_message_window_g1

0x7668,	// (0x00086170) popup_dyc_status_message_window_t1_ParamLimits

0x7668,	// (0x00086170) popup_dyc_status_message_window_t1

0x767a,	// (0x00086182) popup_dyc_status_message_window_t2_ParamLimits

0x767a,	// (0x00086182) popup_dyc_status_message_window_t2

0x768c,	// (0x00086194) popup_dyc_status_message_window_t3_ParamLimits

0x768c,	// (0x00086194) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0008de39) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0008de39) popup_dyc_status_message_window_t

0x43e2,	// (0x00082eea) bg_heading_pane_cp01

0xe021,	// (0x0008cb29) heading_loc_req_pane_g1

0xe029,	// (0x0008cb31) heading_loc_req_pane_g2

0xe031,	// (0x0008cb39) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0008de40) heading_loc_req_pane_g

0xe039,	// (0x0008cb41) heading_loc_req_pane_t1

0xe048,	// (0x0008cb50) bg_popup_sub_pane_cp01_ParamLimits

0xe048,	// (0x0008cb50) bg_popup_sub_pane_cp01

0xe056,	// (0x0008cb5e) popup_cale_events_window_g1_ParamLimits

0xe056,	// (0x0008cb5e) popup_cale_events_window_g1

0xe076,	// (0x0008cb7e) popup_cale_events_window_g2_ParamLimits

0xe076,	// (0x0008cb7e) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0008de74) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0008de74) popup_cale_events_window_g

0xe096,	// (0x0008cb9e) popup_cale_events_window_t1_ParamLimits

0xe096,	// (0x0008cb9e) popup_cale_events_window_t1

0xe0a8,	// (0x0008cbb0) popup_cale_events_window_t2_ParamLimits

0xe0a8,	// (0x0008cbb0) popup_cale_events_window_t2

0xe0e6,	// (0x0008cbee) popup_cale_events_window_t3_ParamLimits

0xe0e6,	// (0x0008cbee) popup_cale_events_window_t3

0xe120,	// (0x0008cc28) popup_cale_events_window_t4_ParamLimits

0xe120,	// (0x0008cc28) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0008de79) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0008de79) popup_cale_events_window_t

0x7710,	// (0x00086218) call_type_pane

0xe156,	// (0x0008cc5e) popup_call_status_window_g1

0x771c,	// (0x00086224) popup_call_status_window_g2

0x7728,	// (0x00086230) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0008de82) popup_call_status_window_g

0xe164,	// (0x0008cc6c) call_type_pane_g1

0xe16d,	// (0x0008cc75) call_type_pane_g2

0x0001,

0xf381,	// (0x0008de89) call_type_pane_g

0x43e2,	// (0x00082eea) bg_popup_sub_pane_cp02

0xe176,	// (0x0008cc7e) listscroll_popup_wml_pane

0xe17e,	// (0x0008cc86) list_wml_pane

0xe188,	// (0x0008cc90) scroll_pane_cp013

0xe193,	// (0x0008cc9b) list_single_graphic_popup_wml_pane_ParamLimits

0xe193,	// (0x0008cc9b) list_single_graphic_popup_wml_pane

0xda17,	// (0x0008c51f) list_single_graphic_popup_wml_pane_g1

0xe1a7,	// (0x0008ccaf) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0008de8e) list_single_graphic_popup_wml_pane_g

0xe1af,	// (0x0008ccb7) list_single_graphic_popup_wml_pane_t1

0xe1c5,	// (0x0008cccd) aid_call_pane

0x4635,	// (0x0008313d) popup_clock_analogue_window_g1

0x4635,	// (0x0008313d) popup_clock_analogue_window_g2

0x7734,	// (0x0008623c) popup_clock_analogue_window_g3

0x7734,	// (0x0008623c) popup_clock_analogue_window_g4

0xda17,	// (0x0008c51f) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0008de93) popup_clock_analogue_window_g

0x773c,	// (0x00086244) popup_clock_analogue_window_t1

0x774a,	// (0x00086252) clock_digital_number_pane_ParamLimits

0x774a,	// (0x00086252) clock_digital_number_pane

0x7756,	// (0x0008625e) clock_digital_number_pane_cp02_ParamLimits

0x7756,	// (0x0008625e) clock_digital_number_pane_cp02

0x7762,	// (0x0008626a) clock_digital_number_pane_cp03_ParamLimits

0x7762,	// (0x0008626a) clock_digital_number_pane_cp03

0x776e,	// (0x00086276) clock_digital_number_pane_cp04_ParamLimits

0x776e,	// (0x00086276) clock_digital_number_pane_cp04

0x777a,	// (0x00086282) clock_digital_separator_pane_ParamLimits

0x777a,	// (0x00086282) clock_digital_separator_pane

0x7786,	// (0x0008628e) popup_clock_digital_window_t1

0xda17,	// (0x0008c51f) clock_digital_number_pane_g1

0xda17,	// (0x0008c51f) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0008de01) clock_digital_number_pane_g

0xda17,	// (0x0008c51f) clock_digital_separator_pane_g1

0xda17,	// (0x0008c51f) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0008de01) clock_digital_separator_pane_g

0x43e2,	// (0x00082eea) bg_popup_window_pane_cp04

0xe1cd,	// (0x0008ccd5) heading_pane_cp03

0xe1d5,	// (0x0008ccdd) listscroll_popup_gms_pane

0xe1dd,	// (0x0008cce5) grid_large_graphic_popup_pane

0xe1e7,	// (0x0008ccef) listscroll_popup_gms_pane_g1

0xe1ef,	// (0x0008ccf7) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0008de9e) listscroll_popup_gms_pane_g

0xdd22,	// (0x0008c82a) scroll_pane_cp014

0xe1f7,	// (0x0008ccff) cell_large_graphic_popup_pane_ParamLimits

0xe1f7,	// (0x0008ccff) cell_large_graphic_popup_pane

0xe20f,	// (0x0008cd17) cell_large_graphic_popup_pane_g1_ParamLimits

0xe20f,	// (0x0008cd17) cell_large_graphic_popup_pane_g1

0xe21b,	// (0x0008cd23) cell_large_graphic_popup_pane_g2_ParamLimits

0xe21b,	// (0x0008cd23) cell_large_graphic_popup_pane_g2

0xe227,	// (0x0008cd2f) cell_large_graphic_popup_pane_g3_ParamLimits

0xe227,	// (0x0008cd2f) cell_large_graphic_popup_pane_g3

0xe234,	// (0x0008cd3c) cell_large_graphic_popup_pane_g4_ParamLimits

0xe234,	// (0x0008cd3c) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0008dea3) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0008dea3) cell_large_graphic_popup_pane_g

0xe244,	// (0x0008cd4c) grid_highlight_pane_cp010

0xda17,	// (0x0008c51f) bg_popup_call_pane_g1

0xe24e,	// (0x0008cd56) list_single_graphic_popup_conf_pane_ParamLimits

0xe24e,	// (0x0008cd56) list_single_graphic_popup_conf_pane

0xe260,	// (0x0008cd68) list_highlight_pane_cp01

0xe269,	// (0x0008cd71) list_single_graphic_popup_conf_pane_g1

0xe271,	// (0x0008cd79) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0008deac) list_single_graphic_popup_conf_pane_g

0xe279,	// (0x0008cd81) list_single_graphic_popup_conf_pane_t1

0xe287,	// (0x0008cd8f) linegrid_cams_pane_g1

0x77a3,	// (0x000862ab) linegrid_cams_pane_g2

0xdacf,	// (0x0008c5d7) linegrid_cams_pane_g3

0xe290,	// (0x0008cd98) linegrid_cams_pane_g4

0x77ac,	// (0x000862b4) linegrid_cams_pane_g5

0x77b5,	// (0x000862bd) linegrid_cams_pane_g6

0xdb55,	// (0x0008c65d) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0008deb1) linegrid_cams_pane_g

0xe299,	// (0x0008cda1) popup_clock_analogue_window

0xe299,	// (0x0008cda1) popup_clock_digital_window

0x43e2,	// (0x00082eea) popup_phob_thumbnail_window

0xda17,	// (0x0008c51f) call_video_uplink_pane_g1

0xe2a2,	// (0x0008cdaa) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0008dec0) call_video_uplink_pane_g

0xdb22,	// (0x0008c62a) video_uplink_pane

0xe2aa,	// (0x0008cdb2) mce_image_pane_g1

0x77be,	// (0x000862c6) mce_image_pane_g2

0x77c6,	// (0x000862ce) mce_image_pane_g3

0x77ce,	// (0x000862d6) mce_image_pane_g4

0x77d6,	// (0x000862de) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0008dec5) mce_image_pane_g

0xe2b4,	// (0x0008cdbc) control_top_pane_stacon_cp01_ParamLimits

0xe2b4,	// (0x0008cdbc) control_top_pane_stacon_cp01

0xe2c8,	// (0x0008cdd0) uni_indicator_pane_stacon_cp01_ParamLimits

0xe2c8,	// (0x0008cdd0) uni_indicator_pane_stacon_cp01

0xe2d9,	// (0x0008cde1) bg_popup_sub_pane_cp03

0x77de,	// (0x000862e6) chi_dic_find_pane

0x77e6,	// (0x000862ee) listscroll_chi_dic_pane

0x77ef,	// (0x000862f7) main_pane_chidic_g1

0x7802,	// (0x0008630a) chi_dic_find_pane_t1

0xe2e3,	// (0x0008cdeb) find_chidic_pane

0xe2ec,	// (0x0008cdf4) chi_dic_list_pane_ParamLimits

0xe2ec,	// (0x0008cdf4) chi_dic_list_pane

0xe2fd,	// (0x0008ce05) scroll_pane_cp020

0x7810,	// (0x00086318) find_chidic_pane_t1

0x43e2,	// (0x00082eea) input_focus_pane_cp06

0x781f,	// (0x00086327) list_chi_dic_pane_ParamLimits

0x781f,	// (0x00086327) list_chi_dic_pane

0xe305,	// (0x0008ce0d) list_chi_dic_pane_t1_ParamLimits

0xe305,	// (0x0008ce0d) list_chi_dic_pane_t1

0x43e2,	// (0x00082eea) list_highlight_pane_cp020

0xe318,	// (0x0008ce20) bg_cale_heading_pane_g1

0x7840,	// (0x00086348) bg_cale_heading_pane_g2

0x7848,	// (0x00086350) bg_cale_heading_pane_g3

0x7850,	// (0x00086358) bg_cale_heading_pane_g4

0x785a,	// (0x00086362) bg_cale_heading_pane_g5

0x7864,	// (0x0008636c) bg_cale_heading_pane_g6

0x786c,	// (0x00086374) bg_cale_heading_pane_g7

0x7874,	// (0x0008637c) bg_cale_heading_pane_g8

0x787e,	// (0x00086386) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0008ded0) bg_cale_heading_pane_g

0xe318,	// (0x0008ce20) bg_cale_side_pane_g1

0x7888,	// (0x00086390) bg_cale_side_pane_g2

0x7892,	// (0x0008639a) bg_cale_side_pane_g3

0x789c,	// (0x000863a4) bg_cale_side_pane_g4

0x78a6,	// (0x000863ae) bg_cale_side_pane_g5

0x78b0,	// (0x000863b8) bg_cale_side_pane_g6

0x78ba,	// (0x000863c2) bg_cale_side_pane_g7

0x78c4,	// (0x000863cc) bg_cale_side_pane_g8

0x78cc,	// (0x000863d4) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0008dee3) bg_cale_side_pane_g

0x78d4,	// (0x000863dc) popup_call_status_window_ParamLimits

0x78d4,	// (0x000863dc) popup_call_status_window

0xe320,	// (0x0008ce28) stacon_top_pane

0xe328,	// (0x0008ce30) status_pane_ParamLimits

0xe328,	// (0x0008ce30) status_pane

0xe33d,	// (0x0008ce45) status_small_pane

0xe345,	// (0x0008ce4d) control_pane

0x43e2,	// (0x00082eea) stacon_bottom_pane

0xe34d,	// (0x0008ce55) list_single_mce_smart_pane_t1_ParamLimits

0xe34d,	// (0x0008ce55) list_single_mce_smart_pane_t1

0xe360,	// (0x0008ce68) list_single_mce_smart_pane_t2_ParamLimits

0xe360,	// (0x0008ce68) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0008def6) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0008def6) list_single_mce_smart_pane_t

0x78e0,	// (0x000863e8) compass_pane

0x78ec,	// (0x000863f4) main_location2_pane_t1

0x7900,	// (0x00086408) main_location2_pane_t2

0x7914,	// (0x0008641c) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0008defb) main_location2_pane_t

0xe37f,	// (0x0008ce87) compass_pane_g1_ParamLimits

0xe37f,	// (0x0008ce87) compass_pane_g1

0x795e,	// (0x00086466) compass_pane_t1

0x796d,	// (0x00086475) compass_pane_t2

0x0005,

0xf3fc,	// (0x0008df04) compass_pane_t

0x79b8,	// (0x000864c0) text_secondary_cp61

0xe393,	// (0x0008ce9b) navi_pane_cams_g5

0xe3b6,	// (0x0008cebe) navi_pane_im_t1

0xe3c4,	// (0x0008cecc) navi_pane_mp_g1_ParamLimits

0xe3c4,	// (0x0008cecc) navi_pane_mp_g1

0xe3d8,	// (0x0008cee0) navi_pane_mp_g2_ParamLimits

0xe3d8,	// (0x0008cee0) navi_pane_mp_g2

0xe3e4,	// (0x0008ceec) navi_pane_mp_g3_ParamLimits

0xe3e4,	// (0x0008ceec) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0008df18) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0008df18) navi_pane_mp_g

0xe3f0,	// (0x0008cef8) navi_pane_mp_t1

0xe3fe,	// (0x0008cf06) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0008df1f) navi_pane_mp_t

0xe43a,	// (0x0008cf42) navi_pane_vt_g1

0xe3f0,	// (0x0008cef8) navi_pane_vt_t1

0xe442,	// (0x0008cf4a) navi_slider_pane

0xe44a,	// (0x0008cf52) zooming_pane

0xe452,	// (0x0008cf5a) navi_slider_pane_g1

0x7acf,	// (0x000865d7) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0008df26) navi_slider_pane_g

0xe476,	// (0x0008cf7e) aid_levels_zoom

0xe47e,	// (0x0008cf86) zooming_pane_g1

0xe486,	// (0x0008cf8e) zooming_pane_g2

0xe486,	// (0x0008cf8e) zooming_pane_g3

0x0002,

0xf42d,	// (0x0008df35) zooming_pane_g

0xe48e,	// (0x0008cf96) level_10_zoom

0xe497,	// (0x0008cf9f) level_11_zoom

0xe4a0,	// (0x0008cfa8) level_1_zoom

0xe4a9,	// (0x0008cfb1) level_2_zoom

0xe4b2,	// (0x0008cfba) level_3_zoom

0xe4bb,	// (0x0008cfc3) level_4_zoom

0xe4c4,	// (0x0008cfcc) level_5_zoom

0xe4cd,	// (0x0008cfd5) level_6_zoom

0xe4d6,	// (0x0008cfde) level_7_zoom

0xe4df,	// (0x0008cfe7) level_8_zoom

0xe4e8,	// (0x0008cff0) level_9_zoom

0xe4f9,	// (0x0008d001) popup_phob_thumbnail_window_g1

0xe501,	// (0x0008d009) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0008df3c) popup_phob_thumbnail_window_g

0x0c8e,	// (0x0007f796) level_1_location

0x0c96,	// (0x0007f79e) level_2_location

0x0c9e,	// (0x0007f7a6) level_3_location

0x0ca6,	// (0x0007f7ae) level_4_location

0xe44a,	// (0x0008cf52) level_5_location

0x7ae1,	// (0x000865e9) mce_icon_pane_g1

0x7ae9,	// (0x000865f1) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0008df41) mce_icon_pane_g

0x7af1,	// (0x000865f9) main_mup_pane_g1_ParamLimits

0x7af1,	// (0x000865f9) main_mup_pane_g1

0x7b09,	// (0x00086611) main_mup_pane_g2_ParamLimits

0x7b09,	// (0x00086611) main_mup_pane_g2

0x7b25,	// (0x0008662d) main_mup_pane_g3_ParamLimits

0x7b25,	// (0x0008662d) main_mup_pane_g3

0x7b41,	// (0x00086649) main_mup_pane_g4_ParamLimits

0x7b41,	// (0x00086649) main_mup_pane_g4

0x7b5d,	// (0x00086665) main_mup_pane_g5_ParamLimits

0x7b5d,	// (0x00086665) main_mup_pane_g5

0x7b7e,	// (0x00086686) main_mup_pane_g6_ParamLimits

0x7b7e,	// (0x00086686) main_mup_pane_g6

0x7b9a,	// (0x000866a2) main_mup_pane_g7_ParamLimits

0x7b9a,	// (0x000866a2) main_mup_pane_g7

0x7bb6,	// (0x000866be) main_mup_pane_g8_ParamLimits

0x7bb6,	// (0x000866be) main_mup_pane_g8

0x7bd2,	// (0x000866da) main_mup_pane_g9_ParamLimits

0x7bd2,	// (0x000866da) main_mup_pane_g9

0x7bf1,	// (0x000866f9) main_mup_pane_g10_ParamLimits

0x7bf1,	// (0x000866f9) main_mup_pane_g10

0x7c10,	// (0x00086718) main_mup_pane_g11_ParamLimits

0x7c10,	// (0x00086718) main_mup_pane_g11

0x7c28,	// (0x00086730) main_mup_pane_g12_ParamLimits

0x7c28,	// (0x00086730) main_mup_pane_g12

0x7c36,	// (0x0008673e) main_mup_pane_g13_ParamLimits

0x7c36,	// (0x0008673e) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0008df46) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0008df46) main_mup_pane_g

0x7c4c,	// (0x00086754) main_mup_pane_t1_ParamLimits

0x7c4c,	// (0x00086754) main_mup_pane_t1

0x7c69,	// (0x00086771) main_mup_pane_t2_ParamLimits

0x7c69,	// (0x00086771) main_mup_pane_t2

0x7c83,	// (0x0008678b) main_mup_pane_t3_ParamLimits

0x7c83,	// (0x0008678b) main_mup_pane_t3

0x7c9d,	// (0x000867a5) main_mup_pane_t4_ParamLimits

0x7c9d,	// (0x000867a5) main_mup_pane_t4

0x7caf,	// (0x000867b7) main_mup_pane_t5_ParamLimits

0x7caf,	// (0x000867b7) main_mup_pane_t5

0x7cc1,	// (0x000867c9) main_mup_pane_t6_ParamLimits

0x7cc1,	// (0x000867c9) main_mup_pane_t6

0x0005,

0xf459,	// (0x0008df61) main_mup_pane_t_ParamLimits

0xf459,	// (0x0008df61) main_mup_pane_t

0x7cd7,	// (0x000867df) mup_progress_pane_ParamLimits

0x7cd7,	// (0x000867df) mup_progress_pane

0x7ce3,	// (0x000867eb) mup_visualizer_pane_ParamLimits

0x7ce3,	// (0x000867eb) mup_visualizer_pane

0x7d21,	// (0x00086829) mup_volume_pane_ParamLimits

0x7d21,	// (0x00086829) mup_volume_pane

0xe156,	// (0x0008cc5e) mup_visualizer_pane_g1_ParamLimits

0xe156,	// (0x0008cc5e) mup_visualizer_pane_g1

0xe156,	// (0x0008cc5e) mup_visualizer_pane_g2_ParamLimits

0xe156,	// (0x0008cc5e) mup_visualizer_pane_g2

0xe37f,	// (0x0008ce87) mup_visualizer_pane_g3_ParamLimits

0xe37f,	// (0x0008ce87) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0008df6e) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0008df6e) mup_visualizer_pane_g

0xda17,	// (0x0008c51f) mup_volume_pane_g1

0xe511,	// (0x0008d019) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0008df75) mup_volume_pane_g

0xda17,	// (0x0008c51f) mup_progress_pane_g1

0xe51a,	// (0x0008d022) mup_progress_pane_g2

0xe523,	// (0x0008d02b) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0008df7a) mup_progress_pane_g

0x43e2,	// (0x00082eea) bg_popup_window_pane_cp05

0xe52c,	// (0x0008d034) heading_pane_cp02_ParamLimits

0xe52c,	// (0x0008d034) heading_pane_cp02

0xe546,	// (0x0008d04e) list_popup_blid_pane

0xe54e,	// (0x0008d056) list_blid_sat_info_pane_ParamLimits

0xe54e,	// (0x0008d056) list_blid_sat_info_pane

0xe561,	// (0x0008d069) list_blid_sat_info_pane_g1

0xe569,	// (0x0008d071) list_blid_sat_info_pane_t1

0x7e2c,	// (0x00086934) mup_equalizer_pane_ParamLimits

0x7e2c,	// (0x00086934) mup_equalizer_pane

0x7e4d,	// (0x00086955) mup_equalizer_pane_cp1_ParamLimits

0x7e4d,	// (0x00086955) mup_equalizer_pane_cp1

0x7e6e,	// (0x00086976) mup_equalizer_pane_cp2_ParamLimits

0x7e6e,	// (0x00086976) mup_equalizer_pane_cp2

0x7e8f,	// (0x00086997) mup_equalizer_pane_cp3_ParamLimits

0x7e8f,	// (0x00086997) mup_equalizer_pane_cp3

0x7eb0,	// (0x000869b8) mup_equalizer_pane_cp4_ParamLimits

0x7eb0,	// (0x000869b8) mup_equalizer_pane_cp4

0x7ed1,	// (0x000869d9) mup_equalizer_pane_cp5

0x7ee7,	// (0x000869ef) mup_equalizer_pane_cp6

0x7eff,	// (0x00086a07) mup_equalizer_pane_cp7

0x0bac,	// (0x0007f6b4) bg_popup_call_poc_act_pane_g9

0x0bb4,	// (0x0007f6bc) bg_popup_call_poc_act_pane_g10

0x0bbc,	// (0x0007f6c4) bg_popup_call_poc_act_pane_g11

0x000a,

0x463d,	// (0x00083145) mup_scale_pane

0xda17,	// (0x0008c51f) mup_scale_pane_g1

0xe577,	// (0x0008d07f) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0008df96) mup_scale_pane_g

0xe59b,	// (0x0008d0a3) msg_data_pane

0xe5a3,	// (0x0008d0ab) scroll_pane_cp017

0x7f29,	// (0x00086a31) bg_list_pane_cp04_ParamLimits

0x7f29,	// (0x00086a31) bg_list_pane_cp04

0xe5ab,	// (0x0008d0b3) msg_data_pane_g1

0x7f49,	// (0x00086a51) msg_data_pane_g2

0x77c6,	// (0x000862ce) msg_data_pane_g3

0x7f51,	// (0x00086a59) msg_data_pane_g4

0x7f59,	// (0x00086a61) msg_data_pane_g5

0x7f61,	// (0x00086a69) msg_data_pane_g6

0x7f69,	// (0x00086a71) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0008dfa5) msg_data_pane_g

0x7f71,	// (0x00086a79) msg_text_pane_ParamLimits

0x7f71,	// (0x00086a79) msg_text_pane

0x7fbb,	// (0x00086ac3) qrid_highlight_pane_cp011_ParamLimits

0x7fbb,	// (0x00086ac3) qrid_highlight_pane_cp011

0x43e2,	// (0x00082eea) msg_body_pane

0x43e2,	// (0x00082eea) msg_header_pane

0xe5bc,	// (0x0008d0c4) input_focus_pane_cp07

0x7fe5,	// (0x00086aed) msg_header_pane_t1_ParamLimits

0x7fe5,	// (0x00086aed) msg_header_pane_t1

0x7ff9,	// (0x00086b01) msg_header_pane_t2_ParamLimits

0x7ff9,	// (0x00086b01) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0008dfb9) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0008dfb9) msg_header_pane_t

0xe5d1,	// (0x0008d0d9) msg_body_pane_g1

0x800b,	// (0x00086b13) msg_body_pane_t1_ParamLimits

0x800b,	// (0x00086b13) msg_body_pane_t1

0x803c,	// (0x00086b44) msg_body_pane_t2_ParamLimits

0x803c,	// (0x00086b44) msg_body_pane_t2

0x804e,	// (0x00086b56) msg_body_pane_t3_ParamLimits

0x804e,	// (0x00086b56) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0008dfbe) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0008dfbe) msg_body_pane_t

0x80b2,	// (0x00086bba) main_viewer_pane_g1_ParamLimits

0x80b2,	// (0x00086bba) main_viewer_pane_g1

0x80be,	// (0x00086bc6) main_viewer_pane_g2_ParamLimits

0x80be,	// (0x00086bc6) main_viewer_pane_g2

0x80ca,	// (0x00086bd2) main_viewer_pane_g3_ParamLimits

0x80ca,	// (0x00086bd2) main_viewer_pane_g3

0x80db,	// (0x00086be3) main_viewer_pane_g4_ParamLimits

0x80db,	// (0x00086be3) main_viewer_pane_g4

0x80ec,	// (0x00086bf4) main_viewer_pane_g5_ParamLimits

0x80ec,	// (0x00086bf4) main_viewer_pane_g5

0x80ec,	// (0x00086bf4) main_viewer_pane_g7_ParamLimits

0x80ec,	// (0x00086bf4) main_viewer_pane_g7

0x80fe,	// (0x00086c06) main_viewer_pane_g8_ParamLimits

0x80fe,	// (0x00086c06) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0008dfce) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0008dfce) main_viewer_pane_g

0xe5d9,	// (0x0008d0e1) viewer_content_pane_ParamLimits

0xe5d9,	// (0x0008d0e1) viewer_content_pane

0x8136,	// (0x00086c3e) main_postcard_pane_g1_ParamLimits

0x8136,	// (0x00086c3e) main_postcard_pane_g1

0x8144,	// (0x00086c4c) main_postcard_pane_g2_ParamLimits

0x8144,	// (0x00086c4c) main_postcard_pane_g2

0x8152,	// (0x00086c5a) main_postcard_pane_g3_ParamLimits

0x8152,	// (0x00086c5a) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0008dfdf) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0008dfdf) main_postcard_pane_g

0x8162,	// (0x00086c6a) main_postcard_pane_g4

0x0dae,	// (0x0007f8b6) smil_status_volume_pane_g2

0x818e,	// (0x00086c96) postcard_pane_ParamLimits

0x818e,	// (0x00086c96) postcard_pane

0xe156,	// (0x0008cc5e) postcard_pane_g1_ParamLimits

0xe156,	// (0x0008cc5e) postcard_pane_g1

0x81c0,	// (0x00086cc8) postcard_pane_g2_ParamLimits

0x81c0,	// (0x00086cc8) postcard_pane_g2

0x81cc,	// (0x00086cd4) postcard_pane_g3_ParamLimits

0x81cc,	// (0x00086cd4) postcard_pane_g3

0xe5e7,	// (0x0008d0ef) postcard_pane_g4_ParamLimits

0xe5e7,	// (0x0008d0ef) postcard_pane_g4

0x81d8,	// (0x00086ce0) postcard_pane_g5_ParamLimits

0x81d8,	// (0x00086ce0) postcard_pane_g5

0x81e4,	// (0x00086cec) postcard_pane_g6_ParamLimits

0x81e4,	// (0x00086cec) postcard_pane_g6

0xe5f5,	// (0x0008d0fd) postcard_pane_g7_ParamLimits

0xe5f5,	// (0x0008d0fd) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0008dfec) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0008dfec) postcard_pane_g

0x81f0,	// (0x00086cf8) main_mp2_pane_g1_ParamLimits

0x81f0,	// (0x00086cf8) main_mp2_pane_g1

0x81fc,	// (0x00086d04) main_mp2_pane_g2_ParamLimits

0x81fc,	// (0x00086d04) main_mp2_pane_g2

0x8208,	// (0x00086d10) main_mp2_pane_g3_ParamLimits

0x8208,	// (0x00086d10) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0008dffb) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0008dffb) main_mp2_pane_g

0x8214,	// (0x00086d1c) main_mp2_pane_t1_ParamLimits

0x8214,	// (0x00086d1c) main_mp2_pane_t1

0x822b,	// (0x00086d33) main_mp2_pane_t2_ParamLimits

0x822b,	// (0x00086d33) main_mp2_pane_t2

0x823d,	// (0x00086d45) main_mp2_pane_t3_ParamLimits

0x823d,	// (0x00086d45) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0008e002) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0008e002) main_mp2_pane_t

0xe603,	// (0x0008d10b) pec_content_pane_ParamLimits

0xe603,	// (0x0008d10b) pec_content_pane

0xdd22,	// (0x0008c82a) scroll_pane_cp015

0xe615,	// (0x0008d11d) pec_attribute_pane_ParamLimits

0xe615,	// (0x0008d11d) pec_attribute_pane

0x824f,	// (0x00086d57) pec_content_pane_g1_ParamLimits

0x824f,	// (0x00086d57) pec_content_pane_g1

0xe625,	// (0x0008d12d) pec_content_pane_t1_ParamLimits

0xe625,	// (0x0008d12d) pec_content_pane_t1

0xe637,	// (0x0008d13f) pec_content_pane_t2_ParamLimits

0xe637,	// (0x0008d13f) pec_content_pane_t2

0x0001,

0xf501,	// (0x0008e009) pec_content_pane_t_ParamLimits

0xf501,	// (0x0008e009) pec_content_pane_t

0x825b,	// (0x00086d63) list_single_graphic_pane_cp01_ParamLimits

0x825b,	// (0x00086d63) list_single_graphic_pane_cp01

0x463d,	// (0x00083145) bg_popup_sub_pane_cp04

0xe649,	// (0x0008d151) popup_mup_playback_window_g1

0xe655,	// (0x0008d15d) popup_mup_playback_window_t1

0xe66a,	// (0x0008d172) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0008e00e) popup_mup_playback_window_t

0xe6a1,	// (0x0008d1a9) main_image_pane_g1_ParamLimits

0xe6a1,	// (0x0008d1a9) main_image_pane_g1

0xe6e4,	// (0x0008d1ec) scroll_pane_cp018_ParamLimits

0xe6e4,	// (0x0008d1ec) scroll_pane_cp018

0xe6fc,	// (0x0008d204) scroll_pane_cp016_ParamLimits

0xe6fc,	// (0x0008d204) scroll_pane_cp016

0x82ff,	// (0x00086e07) smil2_image_pane_ParamLimits

0x82ff,	// (0x00086e07) smil2_image_pane

0x8333,	// (0x00086e3b) smil2_root_pane_ParamLimits

0x8333,	// (0x00086e3b) smil2_root_pane

0x835f,	// (0x00086e67) smil2_text_pane_ParamLimits

0x835f,	// (0x00086e67) smil2_text_pane

0x43e2,	// (0x00082eea) bg_list_pane_cp06

0xe738,	// (0x0008d240) grid_radio_pane

0x43e2,	// (0x00082eea) bg_popup_window_pane_cp06

0xe740,	// (0x0008d248) main_fmradio_pane_t1

0xe1cd,	// (0x0008ccd5) heading_pane_cp04

0xe74e,	// (0x0008d256) main_fmradio_pane_t2

0x0bc4,	// (0x0007f6cc) popup_cale_lunar_info_window_g1

0xe75c,	// (0x0008d264) main_fmradio_pane_t3

0x0bcc,	// (0x0007f6d4) popup_cale_lunar_info_window_g2

0xe76a,	// (0x0008d272) main_fmradio_pane_t4

0x0001,

0xe778,	// (0x0008d280) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0008e0e9) popup_cale_lunar_info_window_g

0xf51b,	// (0x0008e023) main_fmradio_pane_t

0xe786,	// (0x0008d28e) wait_bar_pane_cp03

0xe78e,	// (0x0008d296) cell_fmradio_pane_ParamLimits

0xe78e,	// (0x0008d296) cell_fmradio_pane

0xe5f5,	// (0x0008d0fd) cell_fmradio_pane_g1_ParamLimits

0xe5f5,	// (0x0008d0fd) cell_fmradio_pane_g1

0x43e2,	// (0x00082eea) grid_highlight_pane_cp011

0xe7a1,	// (0x0008d2a9) poc_content_pane_ParamLimits

0xe7a1,	// (0x0008d2a9) poc_content_pane

0xe7b3,	// (0x0008d2bb) scroll_pane_cp019

0x839f,	// (0x00086ea7) popup_call_poc_act_window_ParamLimits

0x839f,	// (0x00086ea7) popup_call_poc_act_window

0x83ac,	// (0x00086eb4) popup_call_poc_inact_window_ParamLimits

0x83ac,	// (0x00086eb4) popup_call_poc_inact_window

0xf5b8,	// (0x0008e0c0) bg_popup_call_poc_act_pane_g

0x0b34,	// (0x0007f63c) bg_popup_call_poc_inact_pane_g1

0x0b3c,	// (0x0007f644) bg_popup_call_poc_inact_pane_g2

0xe7bb,	// (0x0008d2c3) popup_call_poc_act_window_g2

0x0b44,	// (0x0007f64c) bg_popup_call_poc_inact_pane_g3

0x0b4c,	// (0x0007f654) bg_popup_call_poc_inact_pane_g4

0x0b54,	// (0x0007f65c) bg_popup_call_poc_inact_pane_g5

0xe7c3,	// (0x0008d2cb) popup_call_poc_act_window_t1_ParamLimits

0xe7c3,	// (0x0008d2cb) popup_call_poc_act_window_t1

0xe7eb,	// (0x0008d2f3) popup_call_poc_act_window_t2_ParamLimits

0xe7eb,	// (0x0008d2f3) popup_call_poc_act_window_t2

0xe813,	// (0x0008d31b) popup_call_poc_act_window_t3_ParamLimits

0xe813,	// (0x0008d31b) popup_call_poc_act_window_t3

0xe83b,	// (0x0008d343) popup_call_poc_act_window_t4_ParamLimits

0xe83b,	// (0x0008d343) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0008e02e) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0008e02e) popup_call_poc_act_window_t

0x0b5c,	// (0x0007f664) bg_popup_call_poc_inact_pane_g6

0x0b64,	// (0x0007f66c) bg_popup_call_poc_inact_pane_g7

0x0b6c,	// (0x0007f674) bg_popup_call_poc_inact_pane_g8

0xe84d,	// (0x0008d355) popup_call_poc_inact_window_g2

0x0b74,	// (0x0007f67c) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x0008e0ad) bg_popup_call_poc_inact_pane_g

0xe855,	// (0x0008d35d) popup_call_poc_inact_window_t1_ParamLimits

0xe855,	// (0x0008d35d) popup_call_poc_inact_window_t1

0xe86a,	// (0x0008d372) popup_call_poc_inact_window_t2_ParamLimits

0xe86a,	// (0x0008d372) popup_call_poc_inact_window_t2

0xe87f,	// (0x0008d387) popup_call_poc_inact_window_t3_ParamLimits

0xe87f,	// (0x0008d387) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0008e037) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0008e037) popup_call_poc_inact_window_t

0x0d34,	// (0x0007f83c) context_pane_ParamLimits

0x8993,	// (0x0008749b) signal_pane_ParamLimits

0xe44a,	// (0x0008cf52) main_call2_pane

0x0d22,	// (0x0007f82a) popup_phob_thumbnail2_window_ParamLimits

0x0d22,	// (0x0007f82a) popup_phob_thumbnail2_window

0x8060,	// (0x00086b68) aid_hotspot_pointer_arrow_pane

0x8068,	// (0x00086b70) aid_hotspot_pointer_hand_pane

0x86d1,	// (0x000871d9) phob_pre_status_pane_g5

0x6310,	// (0x00084e18) cams_zoom_pane_ParamLimits

0x631c,	// (0x00084e24) image_vga_pane_ParamLimits

0x632b,	// (0x00084e33) main_camera_pane_g1_ParamLimits

0x6339,	// (0x00084e41) main_camera_pane_g2_ParamLimits

0x6347,	// (0x00084e4f) main_camera_pane_g3_ParamLimits

0x6353,	// (0x00084e5b) main_camera_pane_g4_ParamLimits

0x635f,	// (0x00084e67) main_camera_pane_g5_ParamLimits

0x636b,	// (0x00084e73) main_camera_pane_g6_ParamLimits

0x6377,	// (0x00084e7f) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0008dd36) main_camera_pane_g_ParamLimits

0x6383,	// (0x00084e8b) main_camera_pane_t1_ParamLimits

0x6395,	// (0x00084e9d) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0008dd47) main_camera_pane_t_ParamLimits

0x463d,	// (0x00083145) bg_popup_preview_window_pane_cp01_ParamLimits

0x463d,	// (0x00083145) bg_popup_preview_window_pane_cp01

0xe894,	// (0x0008d39c) popup_phob_thumbnail2_window_g1_ParamLimits

0xe894,	// (0x0008d39c) popup_phob_thumbnail2_window_g1

0x43e2,	// (0x00082eea) call2_cli_visual_pane

0x83c8,	// (0x00086ed0) popup_call2_audio_conf_window_ParamLimits

0x83c8,	// (0x00086ed0) popup_call2_audio_conf_window

0x83dd,	// (0x00086ee5) popup_call2_audio_first_window_ParamLimits

0x83dd,	// (0x00086ee5) popup_call2_audio_first_window

0x847b,	// (0x00086f83) popup_call2_audio_in_window_ParamLimits

0x847b,	// (0x00086f83) popup_call2_audio_in_window

0x84bd,	// (0x00086fc5) popup_call2_audio_out_window_ParamLimits

0x84bd,	// (0x00086fc5) popup_call2_audio_out_window

0x851f,	// (0x00087027) popup_call2_audio_second_window_ParamLimits

0x851f,	// (0x00087027) popup_call2_audio_second_window

0x857d,	// (0x00087085) popup_call2_audio_wait_window_ParamLimits

0x857d,	// (0x00087085) popup_call2_audio_wait_window

0x43e2,	// (0x00082eea) bg_popup_call2_act_pane_cp03

0x461f,	// (0x00083127) list_conf_pane_cp

0xe8a0,	// (0x0008d3a8) popup_call2_audio_conf_window_t1

0xe8ae,	// (0x0008d3b6) list_single_graphic_popup_conf2_pane_ParamLimits

0xe8ae,	// (0x0008d3b6) list_single_graphic_popup_conf2_pane

0xe260,	// (0x0008cd68) list_highlight_pane_cp04

0xe8c1,	// (0x0008d3c9) list_single_graphic_popup_conf2_pane_g1

0xe271,	// (0x0008cd79) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0008e03e) list_single_graphic_popup_conf2_pane_g

0xe8cb,	// (0x0008d3d3) list_single_graphic_popup_conf2_pane_t1

0xe8d9,	// (0x0008d3e1) bg_popup_call2_act_pane_cp01_ParamLimits

0xe8d9,	// (0x0008d3e1) bg_popup_call2_act_pane_cp01

0xe963,	// (0x0008d46b) call_type_pane_cp05_ParamLimits

0xe963,	// (0x0008d46b) call_type_pane_cp05

0xe9b7,	// (0x0008d4bf) popup_call2_audio_second_window_g1_ParamLimits

0xe9b7,	// (0x0008d4bf) popup_call2_audio_second_window_g1

0xea0b,	// (0x0008d513) popup_call2_audio_second_window_g2_ParamLimits

0xea0b,	// (0x0008d513) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0008e043) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0008e043) popup_call2_audio_second_window_g

0xea70,	// (0x0008d578) popup_call2_audio_second_window_t1_ParamLimits

0xea70,	// (0x0008d578) popup_call2_audio_second_window_t1

0xeb2b,	// (0x0008d633) popup_call2_audio_second_window_t2_ParamLimits

0xeb2b,	// (0x0008d633) popup_call2_audio_second_window_t2

0xeb7e,	// (0x0008d686) popup_call2_audio_second_window_t3_ParamLimits

0xeb7e,	// (0x0008d686) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0008e04a) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0008e04a) popup_call2_audio_second_window_t

0x43e2,	// (0x00082eea) bg_popup_call2_in_pane_cp02

0x43ec,	// (0x00082ef4) call_type_pane_cp04

0x43f4,	// (0x00082efc) popup_call2_audio_wait_window_g1

0x43fc,	// (0x00082f04) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0008dc23) popup_call2_audio_wait_window_g

0x4404,	// (0x00082f0c) popup_call2_audio_wait_window_t3

0xec71,	// (0x0008d779) bg_popup_call2_act_pane_ParamLimits

0xec71,	// (0x0008d779) bg_popup_call2_act_pane

0xed31,	// (0x0008d839) call_type_pane_cp03_ParamLimits

0xed31,	// (0x0008d839) call_type_pane_cp03

0xed95,	// (0x0008d89d) popup_call2_audio_first_window_g1_ParamLimits

0xed95,	// (0x0008d89d) popup_call2_audio_first_window_g1

0xee05,	// (0x0008d90d) popup_call2_audio_first_window_g2_ParamLimits

0xee05,	// (0x0008d90d) popup_call2_audio_first_window_g2

0xe156,	// (0x0008cc5e) popup_call2_audio_first_window_g3_ParamLimits

0xe156,	// (0x0008cc5e) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0008e053) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0008e053) popup_call2_audio_first_window_g

0xeee3,	// (0x0008d9eb) popup_call2_audio_first_window_t1_ParamLimits

0xeee3,	// (0x0008d9eb) popup_call2_audio_first_window_t1

0xefe6,	// (0x0008daee) popup_call2_audio_first_window_t4_ParamLimits

0xefe6,	// (0x0008daee) popup_call2_audio_first_window_t4

0x055f,	// (0x0007f067) popup_call2_audio_first_window_t5_ParamLimits

0x055f,	// (0x0007f067) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0008e05e) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0008e05e) popup_call2_audio_first_window_t

0x4635,	// (0x0008313d) bg_popup_call2_act_pane_g1

0x0bd4,	// (0x0007f6dc) popup_cale_lunar_info_window_t1

0x0be2,	// (0x0007f6ea) popup_cale_lunar_info_window_t2

0x0bf0,	// (0x0007f6f8) popup_cale_lunar_info_window_t3

0x43e2,	// (0x00082eea) bg_popup_call2_bubble_pane

0x0660,	// (0x0007f168) bg_popup_call2_in_pane_cp01_ParamLimits

0x0660,	// (0x0007f168) bg_popup_call2_in_pane_cp01

0x40be,	// (0x00082bc6) call_type_pane_cp02

0x06a8,	// (0x0007f1b0) popup_call2_audio_out_window_g1_ParamLimits

0x06a8,	// (0x0007f1b0) popup_call2_audio_out_window_g1

0x06d4,	// (0x0007f1dc) popup_call2_audio_out_window_g2_ParamLimits

0x06d4,	// (0x0007f1dc) popup_call2_audio_out_window_g2

0x06fc,	// (0x0007f204) popup_call2_audio_out_window_g3_ParamLimits

0x06fc,	// (0x0007f204) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0008e067) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0008e067) popup_call2_audio_out_window_g

0x0737,	// (0x0007f23f) popup_call2_audio_out_window_t1_ParamLimits

0x0737,	// (0x0007f23f) popup_call2_audio_out_window_t1

0x0796,	// (0x0007f29e) popup_call2_audio_out_window_t2_ParamLimits

0x0796,	// (0x0007f29e) popup_call2_audio_out_window_t2

0x07ea,	// (0x0007f2f2) popup_call2_audio_out_window_t3_ParamLimits

0x07ea,	// (0x0007f2f2) popup_call2_audio_out_window_t3

0x0800,	// (0x0007f308) popup_call2_audio_out_window_t4_ParamLimits

0x0800,	// (0x0007f308) popup_call2_audio_out_window_t4

0x0816,	// (0x0007f31e) popup_call2_audio_out_window_t5_ParamLimits

0x0816,	// (0x0007f31e) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0008e070) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0008e070) popup_call2_audio_out_window_t

0x087a,	// (0x0007f382) bg_popup_call2_in_pane_ParamLimits

0x087a,	// (0x0007f382) bg_popup_call2_in_pane

0x08d6,	// (0x0007f3de) popup_call2_audio_in_window_g1_ParamLimits

0x08d6,	// (0x0007f3de) popup_call2_audio_in_window_g1

0x090e,	// (0x0007f416) popup_call2_audio_in_window_g2_ParamLimits

0x090e,	// (0x0007f416) popup_call2_audio_in_window_g2

0x0946,	// (0x0007f44e) popup_call2_audio_in_window_g3_ParamLimits

0x0946,	// (0x0007f44e) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0008e07d) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0008e07d) popup_call2_audio_in_window_g

0x099e,	// (0x0007f4a6) popup_call2_audio_in_window_t1_ParamLimits

0x099e,	// (0x0007f4a6) popup_call2_audio_in_window_t1

0x0a1e,	// (0x0007f526) popup_call2_audio_in_window_t2_ParamLimits

0x0a1e,	// (0x0007f526) popup_call2_audio_in_window_t2

0x0a9e,	// (0x0007f5a6) popup_call2_audio_in_window_t3_ParamLimits

0x0a9e,	// (0x0007f5a6) popup_call2_audio_in_window_t3

0x0ab8,	// (0x0007f5c0) popup_call2_audio_in_window_t4_ParamLimits

0x0ab8,	// (0x0007f5c0) popup_call2_audio_in_window_t4

0x0aca,	// (0x0007f5d2) popup_call2_audio_in_window_t5_ParamLimits

0x0aca,	// (0x0007f5d2) popup_call2_audio_in_window_t5

0x0adf,	// (0x0007f5e7) popup_call2_audio_in_window_t6_ParamLimits

0x0adf,	// (0x0007f5e7) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0008e086) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0008e086) popup_call2_audio_in_window_t

0x4635,	// (0x0008313d) bg_popup_call2_in_pane_g1

0x0bfe,	// (0x0007f706) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x0008e0ee) popup_cale_lunar_info_window_t

0x463d,	// (0x00083145) bg_popup_call2_rect_pane_ParamLimits

0x463d,	// (0x00083145) bg_popup_call2_rect_pane

0x43e2,	// (0x00082eea) call2_cli_visual_graphic_pane

0x43e2,	// (0x00082eea) call2_cli_visual_text_pane

0x8a43,	// (0x0008754b) smil_status_volume_pane_g3

0x0002,

0xda17,	// (0x0008c51f) call2_cli_visual_graphic_pane_g1

0xda17,	// (0x0008c51f) call2_cli_visual_graphic_pane_g2

0xda17,	// (0x0008c51f) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0008e093) call2_cli_visual_graphic_pane_g

0x0af4,	// (0x0007f5fc) bg_popup_call2_rect_pane_g1

0xdab5,	// (0x0008c5bd) bg_popup_call2_rect_pane_g2

0x0afc,	// (0x0007f604) bg_popup_call2_rect_pane_g3

0x0b04,	// (0x0007f60c) bg_popup_call2_rect_pane_g4

0x0b0c,	// (0x0007f614) bg_popup_call2_rect_pane_g5

0x0b14,	// (0x0007f61c) bg_popup_call2_rect_pane_g6

0x0b1c,	// (0x0007f624) bg_popup_call2_rect_pane_g7

0x0b24,	// (0x0007f62c) bg_popup_call2_rect_pane_g8

0x0b2c,	// (0x0007f634) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0008e09a) bg_popup_call2_rect_pane_g

0x0b34,	// (0x0007f63c) bg_popup_call2_bubble_pane_g1

0x0b3c,	// (0x0007f644) bg_popup_call2_bubble_pane_g2

0x0b44,	// (0x0007f64c) bg_popup_call2_bubble_pane_g3

0x0b4c,	// (0x0007f654) bg_popup_call2_bubble_pane_g4

0x0b54,	// (0x0007f65c) bg_popup_call2_bubble_pane_g5

0x0b5c,	// (0x0007f664) bg_popup_call2_bubble_pane_g6

0x0b64,	// (0x0007f66c) bg_popup_call2_bubble_pane_g7

0x0b6c,	// (0x0007f674) bg_popup_call2_bubble_pane_g8

0x0b74,	// (0x0007f67c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0008e0ad) bg_popup_call2_bubble_pane_g

0x5eb3,	// (0x000849bb) aid_cale_week_size_cell_pane

0x63a7,	// (0x00084eaf) aid_cams_cif_uncrop_pane_ParamLimits

0x63a7,	// (0x00084eaf) aid_cams_cif_uncrop_pane

0x650a,	// (0x00085012) aid_cams_size_cell_ParamLimits

0x650a,	// (0x00085012) aid_cams_size_cell

0x6516,	// (0x0008501e) grid_cams_pane_ParamLimits

0x6524,	// (0x0008502c) linegrid_cams_pane_ParamLimits

0x664b,	// (0x00085153) call_video_pane_t1

0x666c,	// (0x00085174) call_video_pane_t2

0x0001,

0xf292,	// (0x0008dd9a) call_video_pane_t

0x6bec,	// (0x000856f4) aid_cale_month_size_cell_pane_ParamLimits

0x6bec,	// (0x000856f4) aid_cale_month_size_cell_pane

0xf62f,	// (0x0008e137) smil_status_volume_pane_g

0x8a50,	// (0x00087558) volume_smil_pane_ParamLimits

0x01b5,	// (0x0007ecbd) aid_popup2_width_pane

0x5d9a,	// (0x000848a2) cell_qdial_pane_g4_ParamLimits

0x5d9a,	// (0x000848a2) cell_qdial_pane_g4

0x793a,	// (0x00086442) aid_blid_cardinal_pane_ParamLimits

0x794a,	// (0x00086452) aid_blid_destination_pane_ParamLimits

0x794a,	// (0x00086452) aid_blid_destination_pane

0x463d,	// (0x00083145) bg_popup_call_poc_act_pane_ParamLimits

0x463d,	// (0x00083145) bg_popup_call_poc_act_pane

0x463d,	// (0x00083145) bg_popup_call_poc_inact_pane_ParamLimits

0x463d,	// (0x00083145) bg_popup_call_poc_inact_pane

0x0b84,	// (0x0007f68c) bg_popup_call_poc_act_pane_g1

0x0b8c,	// (0x0007f694) bg_popup_call_poc_act_pane_g2

0x0b94,	// (0x0007f69c) bg_popup_call_poc_act_pane_g3

0x0b4c,	// (0x0007f654) bg_popup_call_poc_act_pane_g4

0x0b54,	// (0x0007f65c) bg_popup_call_poc_act_pane_g5

0x0b9c,	// (0x0007f6a4) bg_popup_call_poc_act_pane_g6

0x0b64,	// (0x0007f66c) bg_popup_call_poc_act_pane_g7

0x0ba4,	// (0x0007f6ac) bg_popup_call_poc_act_pane_g8

0x43e2,	// (0x00082eea) main_usb_pane

0x0cfd,	// (0x0007f805) popup_cale_lunar_info_window

0x698b,	// (0x00085493) im_reading_pane_t1_ParamLimits

0xdc7a,	// (0x0008c782) list_im_pane_ParamLimits

0xdc8b,	// (0x0008c793) scroll_pane_cp07_ParamLimits

0x43e2,	// (0x00082eea) grid_highlight_pane_cp012

0x463d,	// (0x00083145) mup_scale_pane_ParamLimits

0xe156,	// (0x0008cc5e) main_usb_pane_g1_ParamLimits

0xe156,	// (0x0008cc5e) main_usb_pane_g1

0x85f4,	// (0x000870fc) main_usb_pane_g2_ParamLimits

0x85f4,	// (0x000870fc) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x0008e0d7) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x0008e0d7) main_usb_pane_g

0x8600,	// (0x00087108) main_usb_pane_t1_ParamLimits

0x8600,	// (0x00087108) main_usb_pane_t1

0x8612,	// (0x0008711a) main_usb_pane_t2_ParamLimits

0x8612,	// (0x0008711a) main_usb_pane_t2

0x8624,	// (0x0008712c) main_usb_pane_t3_ParamLimits

0x8624,	// (0x0008712c) main_usb_pane_t3

0x8636,	// (0x0008713e) main_usb_pane_t4_ParamLimits

0x8636,	// (0x0008713e) main_usb_pane_t4

0x8648,	// (0x00087150) main_usb_pane_t5_ParamLimits

0x8648,	// (0x00087150) main_usb_pane_t5

0x865a,	// (0x00087162) main_usb_pane_t6_ParamLimits

0x865a,	// (0x00087162) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0008e0dc) main_usb_pane_t_ParamLimits

0x78e0,	// (0x000863e8) aid_text_placing

0x78ec,	// (0x000863f4) main_location2_pane_t1_ParamLimits

0x7900,	// (0x00086408) main_location2_pane_t2_ParamLimits

0x7914,	// (0x0008641c) main_location2_pane_t3_ParamLimits

0x7928,	// (0x00086430) main_location2_pane_t4_ParamLimits

0x7928,	// (0x00086430) main_location2_pane_t4

0xf3f3,	// (0x0008defb) main_location2_pane_t_ParamLimits

0x4681,	// (0x00083189) find_pinb_pane_g2_ParamLimits

0x4681,	// (0x00083189) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0008dc49) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0008dc49) find_pinb_pane_g

0x468d,	// (0x00083195) find_pinb_pane_t1_ParamLimits

0x469f,	// (0x000831a7) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0008dc4e) find_pinb_pane_t_ParamLimits

0x43e2,	// (0x00082eea) main_call3_pane

0x7004,	// (0x00085b0c) cale_month_day_heading_pane_t1_ParamLimits

0x7062,	// (0x00085b6a) cale_month_day_heading_pane_t2_ParamLimits

0x70c7,	// (0x00085bcf) cale_month_day_heading_pane_t3_ParamLimits

0x712c,	// (0x00085c34) cale_month_day_heading_pane_t4_ParamLimits

0x7191,	// (0x00085c99) cale_month_day_heading_pane_t5_ParamLimits

0x71f6,	// (0x00085cfe) cale_month_day_heading_pane_t6_ParamLimits

0x7263,	// (0x00085d6b) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0008ddd2) cale_month_day_heading_pane_t_ParamLimits

0xdecb,	// (0x0008c9d3) smil_status_volume_pane

0x81a8,	// (0x00086cb0) postcard_address_pane_ParamLimits

0x81a8,	// (0x00086cb0) postcard_address_pane

0x81b4,	// (0x00086cbc) postcard_message_pane_ParamLimits

0x81b4,	// (0x00086cbc) postcard_message_pane

0x85bc,	// (0x000870c4) call2_cli_visual_pane_t1_ParamLimits

0x85bc,	// (0x000870c4) call2_cli_visual_pane_t1

0x8ba3,	// (0x000876ab) postcard_message_pane_t1_ParamLimits

0x8ba3,	// (0x000876ab) postcard_message_pane_t1

0x8b8c,	// (0x00087694) postcard_address_pane_t1_ParamLimits

0x8b8c,	// (0x00087694) postcard_address_pane_t1

0x8b7d,	// (0x00087685) popup_call3_audio_in_window_ParamLimits

0x8b7d,	// (0x00087685) popup_call3_audio_in_window

0x8a65,	// (0x0008756d) bg_popup_call3_in_pane_ParamLimits

0x8a65,	// (0x0008756d) bg_popup_call3_in_pane

0x8ac3,	// (0x000875cb) popup_call3_audio_in_window_g1_ParamLimits

0x8ac3,	// (0x000875cb) popup_call3_audio_in_window_g1

0x8adb,	// (0x000875e3) popup_call3_audio_in_window_g2_ParamLimits

0x8adb,	// (0x000875e3) popup_call3_audio_in_window_g2

0x8af3,	// (0x000875fb) popup_call3_audio_in_window_g3_ParamLimits

0x8af3,	// (0x000875fb) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x0008e13e) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x0008e13e) popup_call3_audio_in_window_g

0x8b1b,	// (0x00087623) popup_call3_audio_in_window_t1_ParamLimits

0x8b1b,	// (0x00087623) popup_call3_audio_in_window_t1

0x8b43,	// (0x0008764b) popup_call3_audio_in_window_t2_ParamLimits

0x8b43,	// (0x0008764b) popup_call3_audio_in_window_t2

0x8b6b,	// (0x00087673) popup_call3_audio_in_window_t3_ParamLimits

0x8b6b,	// (0x00087673) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x0008e147) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x0008e147) popup_call3_audio_in_window_t

0xe44a,	// (0x0008cf52) bg_popup_call3_rect_pane

0x0af4,	// (0x0007f5fc) bg_popup_call3_rect_pane_g1

0xdab5,	// (0x0008c5bd) bg_popup_call3_rect_pane_g2

0x0afc,	// (0x0007f604) bg_popup_call3_rect_pane_g3

0x0b04,	// (0x0007f60c) bg_popup_call3_rect_pane_g4

0x0b0c,	// (0x0007f614) bg_popup_call3_rect_pane_g5

0x0b14,	// (0x0007f61c) bg_popup_call3_rect_pane_g6

0x0b1c,	// (0x0007f624) bg_popup_call3_rect_pane_g7

0x7d3c,	// (0x00086844) mup_visualizer_osc_pane

0xe509,	// (0x0008d011) mup_visualizer_spec_pane

0x8a85,	// (0x0008758d) call3_video_qcif_pane_ParamLimits

0x8a85,	// (0x0008758d) call3_video_qcif_pane

0x8a95,	// (0x0008759d) call3_video_qcif_uncrop_pane_ParamLimits

0x8a95,	// (0x0008759d) call3_video_qcif_uncrop_pane

0x8aa1,	// (0x000875a9) call3_video_subqcif_pane_ParamLimits

0x8aa1,	// (0x000875a9) call3_video_subqcif_pane

0x8ab3,	// (0x000875bb) call3_video_subqcif_uncrop_pane_ParamLimits

0x8ab3,	// (0x000875bb) call3_video_subqcif_uncrop_pane

0x8b0b,	// (0x00087613) popup_call3_audio_in_window_g4_ParamLimits

0x8b0b,	// (0x00087613) popup_call3_audio_in_window_g4

0x8a32,	// (0x0008753a) mup_spec_half_pane

0x8a3b,	// (0x00087543) mup_spec_half_pane_cp

0x0d94,	// (0x0007f89c) mup_osc_middle_pane

0x0d9d,	// (0x0007f8a5) mup_visualizer_osc_pane_g1

0x8a13,	// (0x0008751b) mup_spec_bar_pane_ParamLimits

0x8a13,	// (0x0008751b) mup_spec_bar_pane

0x0d81,	// (0x0007f889) mup_spec_bar_pane_g1

0x0d8b,	// (0x0007f893) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0008e132) mup_spec_bar_pane_g

0x5eb3,	// (0x000849bb) aid_cale_week_size_cell_pane_ParamLimits

0x5ec6,	// (0x000849ce) bg_cale_heading_pane_ParamLimits

0xdae9,	// (0x0008c5f1) bg_cale_pane_cp01_ParamLimits

0x5ee2,	// (0x000849ea) cale_week_corner_pane_ParamLimits

0x5ef3,	// (0x000849fb) cale_week_day_heading_pane_ParamLimits

0x5f0f,	// (0x00084a17) cale_week_scroll_pane_g1_ParamLimits

0x5f28,	// (0x00084a30) cale_week_scroll_pane_g2_ParamLimits

0x5f39,	// (0x00084a41) cale_week_scroll_pane_g3_ParamLimits

0x5f4a,	// (0x00084a52) cale_week_scroll_pane_g4_ParamLimits

0x5f5b,	// (0x00084a63) cale_week_scroll_pane_g5_ParamLimits

0x5f6c,	// (0x00084a74) cale_week_scroll_pane_g6_ParamLimits

0x5f7d,	// (0x00084a85) cale_week_scroll_pane_g7_ParamLimits

0x5f90,	// (0x00084a98) cale_week_scroll_pane_g8_ParamLimits

0x5fa3,	// (0x00084aab) cale_week_scroll_pane_g9_ParamLimits

0x5fb4,	// (0x00084abc) cale_week_scroll_pane_g10_ParamLimits

0x5fc5,	// (0x00084acd) cale_week_scroll_pane_g11_ParamLimits

0x5fd6,	// (0x00084ade) cale_week_scroll_pane_g12_ParamLimits

0x5fef,	// (0x00084af7) cale_week_scroll_pane_g13_ParamLimits

0x6008,	// (0x00084b10) cale_week_scroll_pane_g14_ParamLimits

0x6021,	// (0x00084b29) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0008dcda) cale_week_scroll_pane_g_ParamLimits

0x603a,	// (0x00084b42) cale_week_time_pane_ParamLimits

0x604d,	// (0x00084b55) grid_cale_week_pane_ParamLimits

0xdb02,	// (0x0008c60a) listscroll_cale_week_pane_t1

0x606a,	// (0x00084b72) scroll_pane_cp08_ParamLimits

0x6c3d,	// (0x00085745) cale_month_corner_pane_ParamLimits

0xdea1,	// (0x0008c9a9) cale_month_pane_t1

0x6fb3,	// (0x00085abb) cale_month_week_pane_ParamLimits

0xe156,	// (0x0008cc5e) popup_call_status_window_g1_ParamLimits

0x771c,	// (0x00086224) popup_call_status_window_g2_ParamLimits

0x7728,	// (0x00086230) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0008de82) popup_call_status_window_g_ParamLimits

0xe1bd,	// (0x0008ccc5) aid_call2_pane

0x7fd7,	// (0x00086adf) msg_header_pane_g1

0x81a8,	// (0x00086cb0) postcard_address2_pane_ParamLimits

0x81a8,	// (0x00086cb0) postcard_address2_pane

0x81b4,	// (0x00086cbc) postcard_message2_pane_ParamLimits

0x81b4,	// (0x00086cbc) postcard_message2_pane

0x89a1,	// (0x000874a9) message2_row_pane_ParamLimits

0x89a1,	// (0x000874a9) message2_row_pane

0x89be,	// (0x000874c6) address2_row_pane_ParamLimits

0x89be,	// (0x000874c6) address2_row_pane

0x0d4f,	// (0x0007f857) postcard_message2_row_pane_g1

0x0d57,	// (0x0007f85f) postcard_message2_row_pane_t1

0x0d4f,	// (0x0007f857) address2_row_pane_g1

0x0d57,	// (0x0007f85f) address2_row_pane_t1

0x6286,	// (0x00084d8e) aid_size_cell_vorec

0x43e2,	// (0x00082eea) main_rss_pane

0x89d1,	// (0x000874d9) rss_list_single_pane_ParamLimits

0x89d1,	// (0x000874d9) rss_list_single_pane

0x0d65,	// (0x0007f86d) rss_list_single_pane_t1

0x0d73,	// (0x0007f87b) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0008e12d) rss_list_single_pane_t

0x43e2,	// (0x00082eea) main_camera2_pane

0x43e2,	// (0x00082eea) main_video2_pane

0x8c07,	// (0x0008770f) cams_zoom_pane_cp2_ParamLimits

0x8c07,	// (0x0008770f) cams_zoom_pane_cp2

0x8c13,	// (0x0008771b) image2_vga_pane_ParamLimits

0x8c13,	// (0x0008771b) image2_vga_pane

0x8c22,	// (0x0008772a) main_camera2_pane_g1_ParamLimits

0x8c22,	// (0x0008772a) main_camera2_pane_g1

0x8c2e,	// (0x00087736) main_camera2_pane_g2_ParamLimits

0x8c2e,	// (0x00087736) main_camera2_pane_g2

0x8c3a,	// (0x00087742) main_camera2_pane_g3_ParamLimits

0x8c3a,	// (0x00087742) main_camera2_pane_g3

0x8c46,	// (0x0008774e) main_camera2_pane_g4_ParamLimits

0x8c46,	// (0x0008774e) main_camera2_pane_g4

0x8c52,	// (0x0008775a) main_camera2_pane_g5_ParamLimits

0x8c52,	// (0x0008775a) main_camera2_pane_g5

0x8c5e,	// (0x00087766) main_camera2_pane_g6_ParamLimits

0x8c5e,	// (0x00087766) main_camera2_pane_g6

0x8c6a,	// (0x00087772) main_camera2_pane_g7_ParamLimits

0x8c6a,	// (0x00087772) main_camera2_pane_g7

0x8c76,	// (0x0008777e) main_camera2_pane_g8_ParamLimits

0x8c76,	// (0x0008777e) main_camera2_pane_g8

0x0008,

0xf646,	// (0x0008e14e) main_camera2_pane_g_ParamLimits

0xf646,	// (0x0008e14e) main_camera2_pane_g

0x8c8e,	// (0x00087796) main_camera2_pane_t1_ParamLimits

0x8c8e,	// (0x00087796) main_camera2_pane_t1

0x8ca0,	// (0x000877a8) main_camera2_pane_t2_ParamLimits

0x8ca0,	// (0x000877a8) main_camera2_pane_t2

0x8cb2,	// (0x000877ba) main_camera2_pane_t3_ParamLimits

0x8cb2,	// (0x000877ba) main_camera2_pane_t3

0x8cc4,	// (0x000877cc) main_camera2_pane_t4_ParamLimits

0x8cc4,	// (0x000877cc) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0008e161) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0008e161) main_camera2_pane_t

0x8d26,	// (0x0008782e) cams_zoom_pane_cp4_ParamLimits

0x8d26,	// (0x0008782e) cams_zoom_pane_cp4

0x8d36,	// (0x0008783e) image2_cif_pane_ParamLimits

0x8d36,	// (0x0008783e) image2_cif_pane

0x8d4b,	// (0x00087853) image2_subqcif_pane_ParamLimits

0x8d4b,	// (0x00087853) image2_subqcif_pane

0x8d5a,	// (0x00087862) main_video2_pane_g1_ParamLimits

0x8d5a,	// (0x00087862) main_video2_pane_g1

0x8d6c,	// (0x00087874) main_video2_pane_g2_ParamLimits

0x8d6c,	// (0x00087874) main_video2_pane_g2

0x8d7c,	// (0x00087884) main_video2_pane_g3_ParamLimits

0x8d7c,	// (0x00087884) main_video2_pane_g3

0x8d8c,	// (0x00087894) main_video2_pane_g4_ParamLimits

0x8d8c,	// (0x00087894) main_video2_pane_g4

0x8d9c,	// (0x000878a4) main_video2_pane_g5_ParamLimits

0x8d9c,	// (0x000878a4) main_video2_pane_g5

0x8dac,	// (0x000878b4) main_video2_pane_g6_ParamLimits

0x8dac,	// (0x000878b4) main_video2_pane_g6

0x0005,

0xf668,	// (0x0008e170) main_video2_pane_g_ParamLimits

0xf668,	// (0x0008e170) main_video2_pane_g

0x8dbe,	// (0x000878c6) main_video2_pane_t1_ParamLimits

0x8dbe,	// (0x000878c6) main_video2_pane_t1

0x8dd8,	// (0x000878e0) main_video2_pane_t2_ParamLimits

0x8dd8,	// (0x000878e0) main_video2_pane_t2

0x8dfe,	// (0x00087906) main_video2_pane_t3_ParamLimits

0x8dfe,	// (0x00087906) main_video2_pane_t3

0x0002,

0xf675,	// (0x0008e17d) main_video2_pane_t_ParamLimits

0xf675,	// (0x0008e17d) main_video2_pane_t

0x8711,	// (0x00087219) call_muted_g2

0x0001,

0xf617,	// (0x0008e11f) call_muted_g

0x43e2,	// (0x00082eea) main_mup2_pane

0x0e54,	// (0x0007f95c) main_mup2_pane_g1_ParamLimits

0x0e54,	// (0x0007f95c) main_mup2_pane_g1

0x8e24,	// (0x0008792c) main_mup2_pane_g2_ParamLimits

0x8e24,	// (0x0008792c) main_mup2_pane_g2

0x90a6,	// (0x00087bae) main_mup_pane_g13_cp1

0x90ae,	// (0x00087bb6) mup_volume_pane_cp1

0x8e44,	// (0x0008794c) main_mup2_pane_g4_ParamLimits

0x8e44,	// (0x0008794c) main_mup2_pane_g4

0x8e59,	// (0x00087961) main_mup2_pane_g5_ParamLimits

0x8e59,	// (0x00087961) main_mup2_pane_g5

0x8e6e,	// (0x00087976) main_mup2_pane_g6_ParamLimits

0x8e6e,	// (0x00087976) main_mup2_pane_g6

0x8e83,	// (0x0008798b) main_mup2_pane_g7_ParamLimits

0x8e83,	// (0x0008798b) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x0008e184) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x0008e184) main_mup2_pane_g

0x8e9f,	// (0x000879a7) main_mup2_pane_t1_ParamLimits

0x8e9f,	// (0x000879a7) main_mup2_pane_t1

0x8eb6,	// (0x000879be) main_mup2_pane_t2_ParamLimits

0x8eb6,	// (0x000879be) main_mup2_pane_t2

0x8ecd,	// (0x000879d5) main_mup2_pane_t3_ParamLimits

0x8ecd,	// (0x000879d5) main_mup2_pane_t3

0x8ee4,	// (0x000879ec) main_mup2_pane_t4_ParamLimits

0x8ee4,	// (0x000879ec) main_mup2_pane_t4

0x8efe,	// (0x00087a06) main_mup2_pane_t5_ParamLimits

0x8efe,	// (0x00087a06) main_mup2_pane_t5

0x8f18,	// (0x00087a20) main_mup2_pane_t6_ParamLimits

0x8f18,	// (0x00087a20) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x0008e193) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x0008e193) main_mup2_pane_t

0x8f50,	// (0x00087a58) mup2_visualizer_pane_ParamLimits

0x8f50,	// (0x00087a58) mup2_visualizer_pane

0x8f86,	// (0x00087a8e) mup_progress_pane_cp_ParamLimits

0x8f86,	// (0x00087a8e) mup_progress_pane_cp

0x9091,	// (0x00087b99) mup_volume_pane_cp_ParamLimits

0x9091,	// (0x00087b99) mup_volume_pane_cp

0x8f9d,	// (0x00087aa5) mup2_visualizer_pane_g1_ParamLimits

0x8f9d,	// (0x00087aa5) mup2_visualizer_pane_g1

0x0e26,	// (0x0007f92e) mup2_visualizer_pane_g2_ParamLimits

0x0e26,	// (0x0007f92e) mup2_visualizer_pane_g2

0x8fb2,	// (0x00087aba) mup2_visualizer_pane_g3_ParamLimits

0x8fb2,	// (0x00087aba) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x0008e1a0) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x0008e1a0) mup2_visualizer_pane_g

0xe730,	// (0x0008d238) aid_size_cell_fmradio

0x8827,	// (0x0008732f) aid_height_parent_landcape

0xdd09,	// (0x0008c811) wml_content_pane_cp

0xdd11,	// (0x0008c819) wml_tabs_pane

0xdd1a,	// (0x0008c822) popup_wml_miniature_window

0xdd22,	// (0x0008c82a) scroll_pane_cp021

0xdd36,	// (0x0008c83e) wml_content_pane_comp8

0x43e2,	// (0x00082eea) bg_popup_sub_pane_cp05

0x0e44,	// (0x0007f94c) popup_wml_miniature_window_g1

0x0e4c,	// (0x0007f954) wml_miniature_view_pane

0x8fc0,	// (0x00087ac8) aid_size_wml_view

0x8fc8,	// (0x00087ad0) wml_miniature_view_pane_g1

0x8fd1,	// (0x00087ad9) wml_miniature_view_pane_g2

0x8fda,	// (0x00087ae2) wml_miniature_view_pane_g3

0x8fe2,	// (0x00087aea) wml_miniature_view_pane_g4

0x8fea,	// (0x00087af2) wml_miniature_view_pane_g5

0x8ff2,	// (0x00087afa) wml_miniature_view_pane_g6

0x8ffa,	// (0x00087b02) wml_miniature_view_pane_g7

0x9002,	// (0x00087b0a) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x0008e1a7) wml_miniature_view_pane_g

0x0e54,	// (0x0007f95c) background_graphic_ParamLimits

0x0e54,	// (0x0007f95c) background_graphic

0x0e60,	// (0x0007f968) wml_tabs_2_pane

0x0e69,	// (0x0007f971) wml_tabs_3_pane_ParamLimits

0x0e69,	// (0x0007f971) wml_tabs_3_pane

0x0e7b,	// (0x0007f983) wml_tabs_4_pane_ParamLimits

0x0e7b,	// (0x0007f983) wml_tabs_4_pane

0x0e91,	// (0x0007f999) wml_tabs_5_pane_ParamLimits

0x0e91,	// (0x0007f999) wml_tabs_5_pane

0x0eab,	// (0x0007f9b3) wml_tabs_pane_g2_ParamLimits

0x0eab,	// (0x0007f9b3) wml_tabs_pane_g2

0x0ebf,	// (0x0007f9c7) wml_tabs_pane_g3_ParamLimits

0x0ebf,	// (0x0007f9c7) wml_tabs_pane_g3

0x900a,	// (0x00087b12) wml_tabs_2_active_pane_ParamLimits

0x900a,	// (0x00087b12) wml_tabs_2_active_pane

0x901a,	// (0x00087b22) wml_tabs_2_passive_pane_ParamLimits

0x901a,	// (0x00087b22) wml_tabs_2_passive_pane

0x902a,	// (0x00087b32) wml_tabs_3_active_pane_cp_ParamLimits

0x902a,	// (0x00087b32) wml_tabs_3_active_pane_cp

0x903b,	// (0x00087b43) wml_tabs_3_passive_pane_ParamLimits

0x903b,	// (0x00087b43) wml_tabs_3_passive_pane

0x904c,	// (0x00087b54) wml_tabs_3_passive_pane_cp_ParamLimits

0x904c,	// (0x00087b54) wml_tabs_3_passive_pane_cp

0x905d,	// (0x00087b65) tabs_4_active_pane

0x9065,	// (0x00087b6d) tabs_4_passive_pane

0x906d,	// (0x00087b75) tabs_4_passive_pane_cp

0x9075,	// (0x00087b7d) tabs_4_passive_pane_cp2

0x0b7c,	// (0x0007f684) aid_height_text

0x7d05,	// (0x0008680d) mup_volume_cont_pane_ParamLimits

0x7d05,	// (0x0008680d) mup_volume_cont_pane

0x5a08,	// (0x00084510) aid_size_cell_pinb

0x466d,	// (0x00083175) aid_size_list_pinb

0x8f6f,	// (0x00087a77) mup2_volume_cont_pane_ParamLimits

0x8f6f,	// (0x00087a77) mup2_volume_cont_pane

0x907d,	// (0x00087b85) mup2_volume_cont_pane_g1_ParamLimits

0x907d,	// (0x00087b85) mup2_volume_cont_pane_g1

0x5695,	// (0x0008419d) aid_size_cell_touch_ParamLimits

0x5695,	// (0x0008419d) aid_size_cell_touch

0x58e8,	// (0x000843f0) touch_pane_ParamLimits

0x58e8,	// (0x000843f0) touch_pane

0x01a3,	// (0x0007ecab) main_rss2_pane

0x0f15,	// (0x0007fa1d) listscroll_rss2_pane

0x0f1e,	// (0x0007fa26) rss2_navigation_pane

0x0f26,	// (0x0007fa2e) list_rss2_pane

0xe2fd,	// (0x0008ce05) scroll_pane_cp22

0x0f2e,	// (0x0007fa36) rss2_navigation_pane_g1

0x0f37,	// (0x0007fa3f) rss2_navigation_pane_g2

0x0f3f,	// (0x0007fa47) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0008e1b8) rss2_navigation_pane_g

0x0f47,	// (0x0007fa4f) rss2_navigation_pane_t1

0x90b6,	// (0x00087bbe) rss2_list_single_pane_ParamLimits

0x90b6,	// (0x00087bbe) rss2_list_single_pane

0x0f55,	// (0x0007fa5d) rss2_list_single_pane_t2

0x0f63,	// (0x0007fa6b) rss2_list_single_pane_t3_ParamLimits

0x0f63,	// (0x0007fa6b) rss2_list_single_pane_t3

0x0f80,	// (0x0007fa88) rss2_list_single_pane_t4

0x7473,	// (0x00085f7b) smil_status_pane_g1

0x3f9a,	// (0x00082aa2) main_image2_pane_ParamLimits

0x3f9a,	// (0x00082aa2) main_image2_pane

0x8c82,	// (0x0008778a) main_camera2_pane_g9_ParamLimits

0x8c82,	// (0x0008778a) main_camera2_pane_g9

0x8cd6,	// (0x000877de) main_camera2_pane_t5_ParamLimits

0x8cd6,	// (0x000877de) main_camera2_pane_t5

0x8ce8,	// (0x000877f0) main_camera2_pane_t6_ParamLimits

0x8ce8,	// (0x000877f0) main_camera2_pane_t6

0x90f2,	// (0x00087bfa) main_image2_pane_g1_ParamLimits

0x90f2,	// (0x00087bfa) main_image2_pane_g1

0x8389,	// (0x00086e91) smil2_video_pane_ParamLimits

0x8389,	// (0x00086e91) smil2_video_pane

0x01d1,	// (0x0007ecd9) aid_zoom_text_primary_cp

0x3f90,	// (0x00082a98) popup_preview_fixed_window

0xdc72,	// (0x0008c77a) im_reading_pane_g1

0x8bcc,	// (0x000876d4) cams2_bc_adjust_pane_cp_ParamLimits

0x8bcc,	// (0x000876d4) cams2_bc_adjust_pane_cp

0x8d18,	// (0x00087820) cams2_bc_adjust_pane_ParamLimits

0x8d18,	// (0x00087820) cams2_bc_adjust_pane

0x22f6,	// (0x00080dfe) cams2_bc_adjust_pane_g1

0x90fe,	// (0x00087c06) cams2_slider_pane

0x9107,	// (0x00087c0f) cams2_slider_pane_g1

0x9110,	// (0x00087c18) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x0008e1bf) cams2_slider_pane_g

0x5ade,	// (0x000845e6) calc_display_pane_ParamLimits

0x5afc,	// (0x00084604) calc_paper_pane_ParamLimits

0x5b18,	// (0x00084620) grid_calc_pane_ParamLimits

0x7786,	// (0x0008628e) popup_clock_digital_window_t1_ParamLimits

0xe6cd,	// (0x0008d1d5) main_image_pane_t1

0x5ac4,	// (0x000845cc) aid_size_cell_calc_ParamLimits

0x5ac4,	// (0x000845cc) aid_size_cell_calc

0x8859,	// (0x00087361) popup_blid_sat_info2_window_ParamLimits

0x8859,	// (0x00087361) popup_blid_sat_info2_window

0x0fca,	// (0x0007fad2) aid_size_cell_blid

0x0fd2,	// (0x0007fada) bg_popup_window_pane_cp07

0x0ff5,	// (0x0007fafd) grid_popup_blid_pane

0x0fff,	// (0x0007fb07) heading_pane_cp05_ParamLimits

0x0fff,	// (0x0007fb07) heading_pane_cp05

0x10c9,	// (0x0007fbd1) cell_popup_blid_pane_ParamLimits

0x10c9,	// (0x0007fbd1) cell_popup_blid_pane

0x10ef,	// (0x0007fbf7) cell_popup_blid_pane_g1

0x10f7,	// (0x0007fbff) cell_popup_blid_pane_t1

0x8f35,	// (0x00087a3d) mup2_indicator_pane_ParamLimits

0x8f35,	// (0x00087a3d) mup2_indicator_pane

0xe44a,	// (0x0008cf52) mup2_visualizer_osc_pane

0x0e32,	// (0x0007f93a) mup2_visualizer_spec_pane_ParamLimits

0x0e32,	// (0x0007f93a) mup2_visualizer_spec_pane

0x912a,	// (0x00087c32) mup2_spec_half_pane

0x9133,	// (0x00087c3b) mup2_spec_half_pane_cp

0x913d,	// (0x00087c45) mup2_spec_bar_pane_ParamLimits

0x913d,	// (0x00087c45) mup2_spec_bar_pane

0x0d81,	// (0x0007f889) mup2_spec_bar_pane_g1

0x0d8b,	// (0x0007f893) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0008e132) mup2_spec_bar_pane_g

0x915c,	// (0x00087c64) mup2_osc_middle_pane

0x0d9d,	// (0x0007f8a5) mup2_visualizer_osc_pane_g1

0x3fc8,	// (0x00082ad0) popup_number_entry_window_t1_ParamLimits

0x3fdb,	// (0x00082ae3) popup_number_entry_window_t2_ParamLimits

0x3fed,	// (0x00082af5) popup_number_entry_window_t3_ParamLimits

0x593f,	// (0x00084447) popup_number_entry_window_t5_ParamLimits

0x593f,	// (0x00084447) popup_number_entry_window_t5

0xf0ec,	// (0x0008dbf4) popup_number_entry_window_t_ParamLimits

0x3fff,	// (0x00082b07) text_title_cp2_ParamLimits

0x8070,	// (0x00086b78) aid_hotspot_pointer_text2_pane

0x810a,	// (0x00086c12) main_viewer_pane_g9_ParamLimits

0x810a,	// (0x00086c12) main_viewer_pane_g9

0xdea1,	// (0x0008c9a9) cale_month_pane_t1_ParamLimits

0xdede,	// (0x0008c9e6) bg_cale_pane_ParamLimits

0xdef6,	// (0x0008c9fe) list_cale_pane_ParamLimits

0xdb02,	// (0x0008c60a) listscroll_cale_day_pane_t1

0xdf07,	// (0x0008ca0f) scroll_pane_cp09_ParamLimits

0x7d44,	// (0x0008684c) main_mup_eq_pane_t1_ParamLimits

0x7d44,	// (0x0008684c) main_mup_eq_pane_t1

0x7d5e,	// (0x00086866) main_mup_eq_pane_t2_ParamLimits

0x7d5e,	// (0x00086866) main_mup_eq_pane_t2

0x7d76,	// (0x0008687e) main_mup_eq_pane_t3_ParamLimits

0x7d76,	// (0x0008687e) main_mup_eq_pane_t3

0x7d8e,	// (0x00086896) main_mup_eq_pane_t4_ParamLimits

0x7d8e,	// (0x00086896) main_mup_eq_pane_t4

0x7da6,	// (0x000868ae) main_mup_eq_pane_t5_ParamLimits

0x7da6,	// (0x000868ae) main_mup_eq_pane_t5

0x7dbe,	// (0x000868c6) main_mup_eq_pane_t6_ParamLimits

0x7dbe,	// (0x000868c6) main_mup_eq_pane_t6

0x7dd2,	// (0x000868da) main_mup_eq_pane_t7_ParamLimits

0x7dd2,	// (0x000868da) main_mup_eq_pane_t7

0x7de6,	// (0x000868ee) main_mup_eq_pane_t8_ParamLimits

0x7de6,	// (0x000868ee) main_mup_eq_pane_t8

0x7dfc,	// (0x00086904) main_mup_eq_pane_t9_ParamLimits

0x7dfc,	// (0x00086904) main_mup_eq_pane_t9

0x7e14,	// (0x0008691c) main_mup_eq_pane_t10_ParamLimits

0x7e14,	// (0x0008691c) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0008df81) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0008df81) main_mup_eq_pane_t

0x7ed1,	// (0x000869d9) mup_equalizer_pane_cp5_ParamLimits

0x7ee7,	// (0x000869ef) mup_equalizer_pane_cp6_ParamLimits

0x7eff,	// (0x00086a07) mup_equalizer_pane_cp7_ParamLimits

0x01a3,	// (0x0007ecab) main_gallery_pane

0x0da6,	// (0x0007f8ae) smil2_volume_pane

0x0dc1,	// (0x0007f8c9) smil_status_volume_pane_g1_ParamLimits

0x0dae,	// (0x0007f8b6) smil_status_volume_pane_g2_ParamLimits

0x8a43,	// (0x0008754b) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x0008e137) smil_status_volume_pane_g_ParamLimits

0x0fd2,	// (0x0007fada) bg_popup_window_pane_cp07_ParamLimits

0x0fe0,	// (0x0007fae8) blid_firmament_pane

0x9165,	// (0x00087c6d) aid_size_cell_gallery_ParamLimits

0x9165,	// (0x00087c6d) aid_size_cell_gallery

0x9173,	// (0x00087c7b) grid_gallery_pane_ParamLimits

0x9173,	// (0x00087c7b) grid_gallery_pane

0x9183,	// (0x00087c8b) cell_gallery_pane_ParamLimits

0x9183,	// (0x00087c8b) cell_gallery_pane

0x1105,	// (0x0007fc0d) bg_cell_gallery_focus_pane_ParamLimits

0x1105,	// (0x0007fc0d) bg_cell_gallery_focus_pane

0x1117,	// (0x0007fc1f) cell_gallery_pane_g1_ParamLimits

0x1117,	// (0x0007fc1f) cell_gallery_pane_g1

0x91d1,	// (0x00087cd9) cell_gallery_pane_g2_ParamLimits

0x91d1,	// (0x00087cd9) cell_gallery_pane_g2

0x91de,	// (0x00087ce6) cell_gallery_pane_g3_ParamLimits

0x91de,	// (0x00087ce6) cell_gallery_pane_g3

0x1123,	// (0x0007fc2b) cell_gallery_pane_g4_ParamLimits

0x1123,	// (0x0007fc2b) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x0008e1e5) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x0008e1e5) cell_gallery_pane_g

0x112f,	// (0x0007fc37) bg_cell_gallery_focus_pane_g1

0x1137,	// (0x0007fc3f) bg_cell_gallery_focus_pane_g2

0x113f,	// (0x0007fc47) bg_cell_gallery_focus_pane_g3

0x1147,	// (0x0007fc4f) bg_cell_gallery_focus_pane_g4

0x114f,	// (0x0007fc57) bg_cell_gallery_focus_pane_g5

0x1157,	// (0x0007fc5f) bg_cell_gallery_focus_pane_g6

0x115f,	// (0x0007fc67) bg_cell_gallery_focus_pane_g7

0x1167,	// (0x0007fc6f) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0008e1ee) bg_cell_gallery_focus_pane_g

0x116f,	// (0x0007fc77) aid_firma_cardinal

0x1183,	// (0x0007fc8b) blid_firmament_pane_t1

0x119a,	// (0x0007fca2) blid_firmament_pane_t2

0x11b1,	// (0x0007fcb9) blid_firmament_pane_t3

0x11c8,	// (0x0007fcd0) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x0008e1ff) blid_firmament_pane_t

0x11df,	// (0x0007fce7) blid_sat_info_pane

0x11ef,	// (0x0007fcf7) blid_sat_info_pane_g1

0x11ef,	// (0x0007fcf7) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x0008e208) blid_sat_info_pane_g

0x11f9,	// (0x0007fd01) blid_sat_info_pane_t1

0x1207,	// (0x0007fd0f) smil2_volume_content_pane

0x1210,	// (0x0007fd18) smil2_volume_pane_g1

0x1218,	// (0x0007fd20) smil2_volume_content_pane_g1

0x1221,	// (0x0007fd29) smil2_volume_content_pane_g2

0x122a,	// (0x0007fd32) smil2_volume_content_pane_g3

0x1233,	// (0x0007fd3b) smil2_volume_content_pane_g4

0x123c,	// (0x0007fd44) smil2_volume_content_pane_g5

0x1245,	// (0x0007fd4d) smil2_volume_content_pane_g6

0x124e,	// (0x0007fd56) smil2_volume_content_pane_g7

0x1257,	// (0x0007fd5f) smil2_volume_content_pane_g8

0x1260,	// (0x0007fd68) smil2_volume_content_pane_g9

0x1269,	// (0x0007fd71) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0008e20d) smil2_volume_content_pane_g

0x60d4,	// (0x00084bdc) cale_week_day_heading_pane_t1_ParamLimits

0x60e8,	// (0x00084bf0) cale_week_day_heading_pane_t2_ParamLimits

0x60fc,	// (0x00084c04) cale_week_day_heading_pane_t3_ParamLimits

0x6110,	// (0x00084c18) cale_week_day_heading_pane_t4_ParamLimits

0x6124,	// (0x00084c2c) cale_week_day_heading_pane_t5_ParamLimits

0x6138,	// (0x00084c40) cale_week_day_heading_pane_t6_ParamLimits

0x614c,	// (0x00084c54) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0008dcf9) cale_week_day_heading_pane_t_ParamLimits

0xdb14,	// (0x0008c61c) bg_cale_side_pane_ParamLimits

0x6160,	// (0x00084c68) cale_week_time_pane_t1_ParamLimits

0x6178,	// (0x00084c80) cale_week_time_pane_t2_ParamLimits

0x6190,	// (0x00084c98) cale_week_time_pane_t3_ParamLimits

0x61a8,	// (0x00084cb0) cale_week_time_pane_t4_ParamLimits

0x61c0,	// (0x00084cc8) cale_week_time_pane_t5_ParamLimits

0x61d8,	// (0x00084ce0) cale_week_time_pane_t6_ParamLimits

0x61f8,	// (0x00084d00) cale_week_time_pane_t7_ParamLimits

0x6218,	// (0x00084d20) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0008dd08) cale_week_time_pane_t_ParamLimits

0x6238,	// (0x00084d40) cell_cale_week_pane_g2_ParamLimits

0xdb14,	// (0x0008c61c) bg_cale_side_pane_cp01_ParamLimits

0x72d8,	// (0x00085de0) cale_month_week_pane_t1_ParamLimits

0x72ef,	// (0x00085df7) cale_month_week_pane_t2_ParamLimits

0x7306,	// (0x00085e0e) cale_month_week_pane_t3_ParamLimits

0x731d,	// (0x00085e25) cale_month_week_pane_t4_ParamLimits

0x7334,	// (0x00085e3c) cale_month_week_pane_t5_ParamLimits

0x7353,	// (0x00085e5b) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0008dde1) cale_month_week_pane_t_ParamLimits

0x7440,	// (0x00085f48) cell_cale_month_pane_g1_ParamLimits

0x01a3,	// (0x0007ecab) main_cale_event_viewer_pane

0x01a3,	// (0x0007ecab) listscroll_cale_event_viewer_pane

0x1272,	// (0x0007fd7a) list_cale_ev_pane

0x127a,	// (0x0007fd82) scroll_pane_cp023

0x1286,	// (0x0007fd8e) field_cale_ev_pane_ParamLimits

0x1286,	// (0x0007fd8e) field_cale_ev_pane

0x12a0,	// (0x0007fda8) field_cale_ev_content_pane_ParamLimits

0x12a0,	// (0x0007fda8) field_cale_ev_content_pane

0x12ac,	// (0x0007fdb4) field_cale_ev_pane_g1_ParamLimits

0x12ac,	// (0x0007fdb4) field_cale_ev_pane_g1

0x12b8,	// (0x0007fdc0) field_cale_ev_pane_g2_ParamLimits

0x12b8,	// (0x0007fdc0) field_cale_ev_pane_g2

0x12d0,	// (0x0007fdd8) field_cale_ev_pane_g3_ParamLimits

0x12d0,	// (0x0007fdd8) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0008e222) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0008e222) field_cale_ev_pane_g

0x12e8,	// (0x0007fdf0) field_cale_ev_pane_t1_ParamLimits

0x12e8,	// (0x0007fdf0) field_cale_ev_pane_t1

0x12ff,	// (0x0007fe07) field_cale_ev_content_pane_t1_ParamLimits

0x12ff,	// (0x0007fe07) field_cale_ev_content_pane_t1

0xe5b3,	// (0x0008d0bb) bg_button_pane_cp01

0xd9c2,	// (0x0008c4ca) listscroll_cale_week_pane_ParamLimits

0x5ea9,	// (0x000849b1) popup_toolbar_window_cp01

0xdb02,	// (0x0008c60a) listscroll_cale_week_pane_t1_ParamLimits

0xd9c2,	// (0x0008c4ca) listscroll_cale_day_pane_ParamLimits

0x5ea9,	// (0x000849b1) popup_toolbar_window_cp02

0xdb02,	// (0x0008c60a) listscroll_cale_day_pane_t1_ParamLimits

0xd9c2,	// (0x0008c4ca) main_cale_month_pane_ParamLimits

0x891d,	// (0x00087425) popup_toolbar_window_cp03_ParamLimits

0x891d,	// (0x00087425) popup_toolbar_window_cp03

0x829b,	// (0x00086da3) main_image_pane_g2_ParamLimits

0x829b,	// (0x00086da3) main_image_pane_g2

0x82a7,	// (0x00086daf) main_image_pane_g3_ParamLimits

0x82a7,	// (0x00086daf) main_image_pane_g3

0x0002,

0xf50b,	// (0x0008e013) main_image_pane_g_ParamLimits

0xf50b,	// (0x0008e013) main_image_pane_g

0xe6cd,	// (0x0008d1d5) main_image_pane_t1_ParamLimits

0x82b3,	// (0x00086dbb) main_image_pane_t2_ParamLimits

0x82b3,	// (0x00086dbb) main_image_pane_t2

0x82c5,	// (0x00086dcd) main_image_pane_t3_ParamLimits

0x82c5,	// (0x00086dcd) main_image_pane_t3

0x82d7,	// (0x00086ddf) main_image_pane_t4_ParamLimits

0x82d7,	// (0x00086ddf) main_image_pane_t4

0x0003,

0xf512,	// (0x0008e01a) main_image_pane_t_ParamLimits

0xf512,	// (0x0008e01a) main_image_pane_t

0x82e9,	// (0x00086df1) popup_image_details_window_cp01

0x82f3,	// (0x00086dfb) popup_toobar_trans_pane_cp01_ParamLimits

0x82f3,	// (0x00086dfb) popup_toobar_trans_pane_cp01

0x88a2,	// (0x000873aa) popup_image_details_window_ParamLimits

0x88a2,	// (0x000873aa) popup_image_details_window

0x0d07,	// (0x0007f80f) popup_image_focus_window

0x8bbe,	// (0x000876c6) camera2_autofocus_pane_ParamLimits

0x8bbe,	// (0x000876c6) camera2_autofocus_pane

0x01a3,	// (0x0007ecab) bg_popup_sub_pane_cp06

0x131c,	// (0x0007fe24) popup_image_focus_window_g1

0x1324,	// (0x0007fe2c) popup_image_focus_window_g2

0x132c,	// (0x0007fe34) popup_image_focus_window_g3

0x1334,	// (0x0007fe3c) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x0008e229) popup_image_focus_window_g

0x133c,	// (0x0007fe44) popup_image_focus_window_t1

0x134a,	// (0x0007fe52) popup_image_focus_window_t2

0x135a,	// (0x0007fe62) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x0008e232) popup_image_focus_window_t

0x1368,	// (0x0007fe70) camera2_autofocus_pane_g1

0x3f9a,	// (0x00082aa2) bg_tb_trans_pane_cp01

0x1376,	// (0x0007fe7e) popup_image_details_window_g1

0x1389,	// (0x0007fe91) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x0008e244) popup_image_details_window_g

0x13b2,	// (0x0007feba) popup_image_details_window_t1

0x13c4,	// (0x0007fecc) popup_image_details_window_t2

0x13dd,	// (0x0007fee5) popup_image_details_window_t3

0x13f1,	// (0x0007fef9) popup_image_details_window_t4

0x140c,	// (0x0007ff14) popup_image_details_window_t5

0x0004,

0xf743,	// (0x0008e24b) popup_image_details_window_t

0x4738,	// (0x00083240) bg_calc_paper_pane_ParamLimits

0x5c11,	// (0x00084719) grid_highlight_pane_cp013

0x5c1b,	// (0x00084723) list_calc_pane_ParamLimits

0x5c2d,	// (0x00084735) scroll_pane_cp024

0xd9c2,	// (0x0008c4ca) bg_calc_display_pane_ParamLimits

0x5c35,	// (0x0008473d) calc_display_pane_t1_ParamLimits

0x5c4a,	// (0x00084752) calc_display_pane_t2_ParamLimits

0x5c5f,	// (0x00084767) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0008dc7b) calc_display_pane_t_ParamLimits

0x5d46,	// (0x0008484e) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0008dc98) cell_calc_pane_g

0x5d4f,	// (0x00084857) cell_calc_pane_t1

0xda21,	// (0x0008c529) grid_highlight_pane_cp02_ParamLimits

0xda37,	// (0x0008c53f) toolbar_button_pane_cp01_ParamLimits

0xda37,	// (0x0008c53f) toolbar_button_pane_cp01

0xe712,	// (0x0008d21a) temp_image_control_pane_ParamLimits

0xe712,	// (0x0008d21a) temp_image_control_pane

0x3f9a,	// (0x00082aa2) main_mp3_pane

0x1426,	// (0x0007ff2e) temp_image_control_pane_g1_ParamLimits

0x1426,	// (0x0007ff2e) temp_image_control_pane_g1

0x1434,	// (0x0007ff3c) temp_image_control_pane_g2_ParamLimits

0x1434,	// (0x0007ff3c) temp_image_control_pane_g2

0x1446,	// (0x0007ff4e) temp_image_control_pane_g3_ParamLimits

0x1446,	// (0x0007ff4e) temp_image_control_pane_g3

0x921b,	// (0x00087d23) temp_image_control_pane_g4_ParamLimits

0x921b,	// (0x00087d23) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x0008e256) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x0008e256) temp_image_control_pane_g

0x1426,	// (0x0007ff2e) main_mp3_pane_g1

0x922c,	// (0x00087d34) main_mp3_pane_g2

0x0007,

0xf757,	// (0x0008e25f) main_mp3_pane_g

0x1489,	// (0x0007ff91) main_mp3_pane_t1

0xdb83,	// (0x0008c68b) main_camera_pane_g8_ParamLimits

0xdb83,	// (0x0008c68b) main_camera_pane_g8

0x64c0,	// (0x00084fc8) main_video_pane_g7_ParamLimits

0x64c0,	// (0x00084fc8) main_video_pane_g7

0x8d06,	// (0x0008780e) main_camera2_pane_t7_ParamLimits

0x8d06,	// (0x0008780e) main_camera2_pane_t7

0xdcc9,	// (0x0008c7d1) scroll_pane_cp025_ParamLimits

0xdcc9,	// (0x0008c7d1) scroll_pane_cp025

0xdcdd,	// (0x0008c7e5) scroll_pane_cp026_ParamLimits

0xdcdd,	// (0x0008c7e5) scroll_pane_cp026

0xdcec,	// (0x0008c7f4) wml_content_pane_ParamLimits

0x01a3,	// (0x0007ecab) main_touch_calib_pane

0x92d0,	// (0x00087dd8) main_touch_calib_pane_g1

0x92dc,	// (0x00087de4) main_touch_calib_pane_g2

0x92e8,	// (0x00087df0) main_touch_calib_pane_g3

0x92f4,	// (0x00087dfc) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x0008e27d) main_touch_calib_pane_g

0x9300,	// (0x00087e08) main_touch_calib_pane_t1

0x9317,	// (0x00087e1f) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x0008e286) main_touch_calib_pane_t

0xe38b,	// (0x0008ce93) mup_progress_pane_cp02

0xe3aa,	// (0x0008ceb2) navi_pane_g1

0xe40c,	// (0x0008cf14) navi_pane_mp_t3

0x3f9a,	// (0x00082aa2) main_mp3_pane_ParamLimits

0x895b,	// (0x00087463) navi_pane_ParamLimits

0x1426,	// (0x0007ff2e) main_mp3_pane_g1_ParamLimits

0x922c,	// (0x00087d34) main_mp3_pane_g2_ParamLimits

0x9238,	// (0x00087d40) main_mp3_pane_g3_ParamLimits

0x9238,	// (0x00087d40) main_mp3_pane_g3

0x9244,	// (0x00087d4c) main_mp3_pane_g4_ParamLimits

0x9244,	// (0x00087d4c) main_mp3_pane_g4

0x1456,	// (0x0007ff5e) main_mp3_pane_g5_ParamLimits

0x1456,	// (0x0007ff5e) main_mp3_pane_g5

0x1464,	// (0x0007ff6c) main_mp3_pane_g6_ParamLimits

0x1464,	// (0x0007ff6c) main_mp3_pane_g6

0x1471,	// (0x0007ff79) main_mp3_pane_g7_ParamLimits

0x1471,	// (0x0007ff79) main_mp3_pane_g7

0x147d,	// (0x0007ff85) main_mp3_pane_g8_ParamLimits

0x147d,	// (0x0007ff85) main_mp3_pane_g8

0xf757,	// (0x0008e25f) main_mp3_pane_g_ParamLimits

0x9250,	// (0x00087d58) main_mp3_pane_t2

0x9260,	// (0x00087d68) main_mp3_pane_t3

0x1497,	// (0x0007ff9f) main_mp3_pane_t4

0x14a5,	// (0x0007ffad) main_mp3_pane_t5

0x0005,

0xf768,	// (0x0008e270) main_mp3_pane_t

0x14b3,	// (0x0007ffbb) mup_progress_pane_cp01

0x01d1,	// (0x0007ecd9) aid_zoom_text_secondary2

0x1272,	// (0x0007fd7a) list_cale_ev2_pane

0x127a,	// (0x0007fd82) scroll_pane_cp023_ParamLimits

0x936a,	// (0x00087e72) field_cale_ev2_pane_ParamLimits

0x936a,	// (0x00087e72) field_cale_ev2_pane

0x939e,	// (0x00087ea6) field_cale_ev2_pane_g1_ParamLimits

0x939e,	// (0x00087ea6) field_cale_ev2_pane_g1

0x93aa,	// (0x00087eb2) field_cale_ev2_pane_g2_ParamLimits

0x93aa,	// (0x00087eb2) field_cale_ev2_pane_g2

0x93c2,	// (0x00087eca) field_cale_ev2_pane_g3_ParamLimits

0x93c2,	// (0x00087eca) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0008e291) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0008e291) field_cale_ev2_pane_g

0x14c7,	// (0x0007ffcf) field_cale_ev2_pane_t1_ParamLimits

0x14c7,	// (0x0007ffcf) field_cale_ev2_pane_t1

0x14de,	// (0x0007ffe6) field_cale_ev2_pane_t2_ParamLimits

0x14de,	// (0x0007ffe6) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0008e29a) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0008e29a) field_cale_ev2_pane_t

0x8172,	// (0x00086c7a) main_postcard_pane_g5_ParamLimits

0x8172,	// (0x00086c7a) main_postcard_pane_g5

0x8180,	// (0x00086c88) main_postcard_pane_g6_ParamLimits

0x8180,	// (0x00086c88) main_postcard_pane_g6

0x6300,	// (0x00084e08) camera2_autofocus_pane_cp_ParamLimits

0x6300,	// (0x00084e08) camera2_autofocus_pane_cp

0x3f9a,	// (0x00082aa2) main_mup3_pane

0x93fa,	// (0x00087f02) main_mup3_pane_g1_ParamLimits

0x93fa,	// (0x00087f02) main_mup3_pane_g1

0x941b,	// (0x00087f23) main_mup3_pane_g2_ParamLimits

0x941b,	// (0x00087f23) main_mup3_pane_g2

0x9496,	// (0x00087f9e) main_mup3_pane_g3_ParamLimits

0x9496,	// (0x00087f9e) main_mup3_pane_g3

0x94d5,	// (0x00087fdd) main_mup3_pane_g4_ParamLimits

0x94d5,	// (0x00087fdd) main_mup3_pane_g4

0x9514,	// (0x0008801c) main_mup3_pane_g5_ParamLimits

0x9514,	// (0x0008801c) main_mup3_pane_g5

0x9555,	// (0x0008805d) main_mup3_pane_g6_ParamLimits

0x9555,	// (0x0008805d) main_mup3_pane_g6

0x14f3,	// (0x0007fffb) main_mup3_pane_g7_ParamLimits

0x14f3,	// (0x0007fffb) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0008e2aa) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0008e2aa) main_mup3_pane_g

0x95c7,	// (0x000880cf) main_mup3_pane_t1_ParamLimits

0x95c7,	// (0x000880cf) main_mup3_pane_t1

0x9636,	// (0x0008813e) main_mup3_pane_t2_ParamLimits

0x9636,	// (0x0008813e) main_mup3_pane_t2

0x96ff,	// (0x00088207) main_mup3_pane_t4_ParamLimits

0x96ff,	// (0x00088207) main_mup3_pane_t4

0x9751,	// (0x00088259) main_mup3_pane_t5_ParamLimits

0x9751,	// (0x00088259) main_mup3_pane_t5

0x97f9,	// (0x00088301) main_mup3_pane_t6_ParamLimits

0x97f9,	// (0x00088301) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0008e2bb) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0008e2bb) main_mup3_pane_t

0x98a1,	// (0x000883a9) mup3_progress_pane_ParamLimits

0x98a1,	// (0x000883a9) mup3_progress_pane

0x9906,	// (0x0008840e) popup_mup3_control_window_ParamLimits

0x9906,	// (0x0008840e) popup_mup3_control_window

0x1501,	// (0x00080009) popup_mup3_text_window

0x991f,	// (0x00088427) mup3_progress_pane_t1

0x9936,	// (0x0008843e) mup3_progress_pane_t2

0x1509,	// (0x00080011) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0008e2c8) mup3_progress_pane_t

0x1520,	// (0x00080028) mup_progress_pane_cp03

0x01a3,	// (0x0007ecab) bg_tb_trans_pane_cp04

0x994d,	// (0x00088455) mup3_volume_pane

0x9955,	// (0x0008845d) popup_mup3_control_window_g1

0x995e,	// (0x00088466) mup3_volume_pane_g1

0x9967,	// (0x0008846f) mup3_volume_pane_g2

0x9970,	// (0x00088478) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0008e2cf) mup3_volume_pane_g

0x01a3,	// (0x0007ecab) bg_tb_trans_pane_cp03

0x1530,	// (0x00080038) popup_mup3_text_window_g1

0x1538,	// (0x00080040) popup_mup3_text_window_t1

0xda0a,	// (0x0008c512) list_calc_item_pane_g1_ParamLimits

0x0efc,	// (0x0007fa04) mup_volume_pane_cp_g1

0x932e,	// (0x00087e36) main_touch_calib_pane_t3

0x9342,	// (0x00087e4a) main_touch_calib_pane_t4

0x9356,	// (0x00087e5e) main_touch_calib_pane_t5

0x01ad,	// (0x0007ecb5) aid_cell_size_toolbar2

0x01b5,	// (0x0007ecbd) aid_popup3_width_pane

0x01c1,	// (0x0007ecc9) aid_zoom_text_msg_primary

0x62ea,	// (0x00084df2) vorec_t7

0xd9ce,	// (0x0008c4d6) bg_calc_paper_pane_g1_ParamLimits

0xd9da,	// (0x0008c4e2) bg_calc_paper_pane_g2_ParamLimits

0xd9e6,	// (0x0008c4ee) bg_calc_paper_pane_g3_ParamLimits

0xd9f2,	// (0x0008c4fa) bg_calc_paper_pane_g4_ParamLimits

0xd9fe,	// (0x0008c506) bg_calc_paper_pane_g5_ParamLimits

0x5c9e,	// (0x000847a6) bg_calc_paper_pane_g6_ParamLimits

0x5caf,	// (0x000847b7) bg_calc_paper_pane_g7_ParamLimits

0x5cc0,	// (0x000847c8) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0008dc82) bg_calc_paper_pane_g_ParamLimits

0x5cd1,	// (0x000847d9) calc_bg_paper_pane_g9_ParamLimits

0x63e9,	// (0x00084ef1) image_qvga_pane_ParamLimits

0x63e9,	// (0x00084ef1) image_qvga_pane

0x463d,	// (0x00083145) bg_popup_sub_pane_cp04_ParamLimits

0xe649,	// (0x0008d151) popup_mup_playback_window_g1_ParamLimits

0xe655,	// (0x0008d15d) popup_mup_playback_window_t1_ParamLimits

0xe66a,	// (0x0008d172) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0008e00e) popup_mup_playback_window_t_ParamLimits

0x8e35,	// (0x0008793d) main_mup2_pane_g3_ParamLimits

0x8e35,	// (0x0008793d) main_mup2_pane_g3

0x66f9,	// (0x00085201) popup_toolbar_window_cp04

0xea5f,	// (0x0008d567) popup_call2_audio_second_window_g3_ParamLimits

0xea5f,	// (0x0008d567) popup_call2_audio_second_window_g3

0xee69,	// (0x0008d971) popup_call2_audio_first_window_g4_ParamLimits

0xee69,	// (0x0008d971) popup_call2_audio_first_window_g4

0x097e,	// (0x0007f486) popup_call2_audio_in_window_g4_ParamLimits

0x097e,	// (0x0007f486) popup_call2_audio_in_window_g4

0x828e,	// (0x00086d96) aid_area_sk_bg_cut_ParamLimits

0x828e,	// (0x00086d96) aid_area_sk_bg_cut

0xe67f,	// (0x0008d187) aid_area_sk_bg_cut_2_ParamLimits

0xe67f,	// (0x0008d187) aid_area_sk_bg_cut_2

0x91c1,	// (0x00087cc9) aid_placing_details_win

0x91c9,	// (0x00087cd1) aid_placing_details_win_2

0x1368,	// (0x0007fe70) camera2_autofocus_pane_g1_ParamLimits

0x5896,	// (0x0008439e) popup_fixed_preview_cale_window_ParamLimits

0x5896,	// (0x0008439e) popup_fixed_preview_cale_window

0xe45b,	// (0x0008cf63) navi_slider_pane_g3

0xe464,	// (0x0008cf6c) navi_slider_pane_g4

0xe46d,	// (0x0008cf75) navi_slider_pane_g5

0xe45b,	// (0x0008cf63) navi_slider_pane_g6

0x7ad8,	// (0x000865e0) navi_slider_pane_g7

0xe580,	// (0x0008d088) mup_scale_pane_g3

0xe589,	// (0x0008d091) mup_scale_pane_g4

0xe592,	// (0x0008d09a) mup_scale_pane_g5

0x7f17,	// (0x00086a1f) mup_scale_pane_g6

0x7f20,	// (0x00086a28) mup_scale_pane_g7

0xe45b,	// (0x0008cf63) cams2_slider_pane_g3

0x0fb1,	// (0x0007fab9) cams2_slider_pane_g4

0x9119,	// (0x00087c21) cams2_slider_pane_g5

0xe45b,	// (0x0008cf63) cams2_slider_pane_g6

0x9121,	// (0x00087c29) cams2_slider_pane_g7

0x11ef,	// (0x0007fcf7) camera2_autofocus_pane_cp_g1

0x1546,	// (0x0008004e) bg_popup_preview_window_pane_cp02_ParamLimits

0x1546,	// (0x0008004e) bg_popup_preview_window_pane_cp02

0x1552,	// (0x0008005a) list_fp_cale_pane_ParamLimits

0x1552,	// (0x0008005a) list_fp_cale_pane

0x155e,	// (0x00080066) popup_fixed_preview_cale_window_t1_ParamLimits

0x155e,	// (0x00080066) popup_fixed_preview_cale_window_t1

0x9979,	// (0x00088481) popup_fixed_preview_cale_window_t2_ParamLimits

0x9979,	// (0x00088481) popup_fixed_preview_cale_window_t2

0x998e,	// (0x00088496) popup_fixed_preview_cale_window_t3_ParamLimits

0x998e,	// (0x00088496) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x0008e2d6) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x0008e2d6) popup_fixed_preview_cale_window_t

0x99a3,	// (0x000884ab) list_single_fp_cale_pane_ParamLimits

0x99a3,	// (0x000884ab) list_single_fp_cale_pane

0x157c,	// (0x00080084) list_single_fp_cale_pane_g1_ParamLimits

0x157c,	// (0x00080084) list_single_fp_cale_pane_g1

0x1588,	// (0x00080090) list_single_fp_cale_pane_g2_ParamLimits

0x1588,	// (0x00080090) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0008e2dd) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0008e2dd) list_single_fp_cale_pane_g

0x15a1,	// (0x000800a9) list_single_fp_cale_pane_t1_ParamLimits

0x15a1,	// (0x000800a9) list_single_fp_cale_pane_t1

0x15b3,	// (0x000800bb) list_single_fp_cale_pane_t2_ParamLimits

0x15b3,	// (0x000800bb) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x0008e2e4) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x0008e2e4) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x01a3,	// (0x0007ecab) main_dialer_pane

0x99b7,	// (0x000884bf) aid_cell_size_keypad

0x99c1,	// (0x000884c9) dialer_ne_pane

0x99cb,	// (0x000884d3) grid_dialer_command_1_pane

0x99d3,	// (0x000884db) grid_dialer_command_2_pane

0x99db,	// (0x000884e3) grid_dialer_keypad_pane

0x99ef,	// (0x000884f7) bg_popup_call_pane_cp06_ParamLimits

0x99ef,	// (0x000884f7) bg_popup_call_pane_cp06

0x99fb,	// (0x00088503) dialer_ne_clear_pane_ParamLimits

0x99fb,	// (0x00088503) dialer_ne_clear_pane

0x15e6,	// (0x000800ee) dialer_ne_pane_g1

0x15ee,	// (0x000800f6) dialer_ne_pane_t1_ParamLimits

0x15ee,	// (0x000800f6) dialer_ne_pane_t1

0x9a07,	// (0x0008850f) dialer_ne_pane_t2_ParamLimits

0x9a07,	// (0x0008850f) dialer_ne_pane_t2

0x9a24,	// (0x0008852c) dialer_ne_pane_t3_ParamLimits

0x9a24,	// (0x0008852c) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0008e2e9) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0008e2e9) dialer_ne_pane_t

0x9a48,	// (0x00088550) dialer_ne_pane_t3_copy1_ParamLimits

0x9a48,	// (0x00088550) dialer_ne_pane_t3_copy1

0x9a6c,	// (0x00088574) cell_dialer_keypad_pane_ParamLimits

0x9a6c,	// (0x00088574) cell_dialer_keypad_pane

0x9a83,	// (0x0008858b) cell_dialer_command_1_pane_ParamLimits

0x9a83,	// (0x0008858b) cell_dialer_command_1_pane

0x9a99,	// (0x000885a1) cell_dialer_command_2_pane_ParamLimits

0x9a99,	// (0x000885a1) cell_dialer_command_2_pane

0x1600,	// (0x00080108) bg_button_pane_cp02_ParamLimits

0x1600,	// (0x00080108) bg_button_pane_cp02

0x9aa8,	// (0x000885b0) cell_dialer_keypad_pane_g1_ParamLimits

0x9aa8,	// (0x000885b0) cell_dialer_keypad_pane_g1

0x1600,	// (0x00080108) bg_button_pane_cp03_ParamLimits

0x1600,	// (0x00080108) bg_button_pane_cp03

0x9abd,	// (0x000885c5) cell_dialer_command_1_pane_g1_ParamLimits

0x9abd,	// (0x000885c5) cell_dialer_command_1_pane_g1

0x160c,	// (0x00080114) bg_button_pane_cp04

0x9ad0,	// (0x000885d8) cell_dialer_command_2_pane_g1

0xe44a,	// (0x0008cf52) bg_button_pane_cp06

0x1614,	// (0x0008011c) dialer_ne_clear_pane_g1

0x7a1b,	// (0x00086523) navi_pane_g2

0x7a49,	// (0x00086551) navi_pane_g3

0x0002,

0xf409,	// (0x0008df11) navi_pane_g

0x7a74,	// (0x0008657c) navi_pane_mv_g2

0x7a9b,	// (0x000865a3) navi_pane_mv_g5

0x7aa3,	// (0x000865ab) navi_pane_mv_t1

0xd9c2,	// (0x0008c4ca) main_clock2_pane

0x9afe,	// (0x00088606) main_clock2_list_pane_ParamLimits

0x9afe,	// (0x00088606) main_clock2_list_pane

0x9b26,	// (0x0008862e) main_clock2_pane_t1_ParamLimits

0x9b26,	// (0x0008862e) main_clock2_pane_t1

0x9b56,	// (0x0008865e) main_clock2_pane_t2_ParamLimits

0x9b56,	// (0x0008865e) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0008e2f0) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0008e2f0) main_clock2_pane_t

0x9bbd,	// (0x000886c5) popup_clock_analogue_window_cp03_ParamLimits

0x9bbd,	// (0x000886c5) popup_clock_analogue_window_cp03

0x9bdd,	// (0x000886e5) popup_clock_digital_window_cp02_ParamLimits

0x9bdd,	// (0x000886e5) popup_clock_digital_window_cp02

0x9c52,	// (0x0008875a) main_clock2_list_single_pane_ParamLimits

0x9c52,	// (0x0008875a) main_clock2_list_single_pane

0xe44a,	// (0x0008cf52) list_highlight_pane_cp05

0x161c,	// (0x00080124) main_clock2_list_single_pane_t1

0x66f9,	// (0x00085201) popup_toolbar_window_cp04_ParamLimits

0x91eb,	// (0x00087cf3) camera2_autofocus_pane_g2_ParamLimits

0x91eb,	// (0x00087cf3) camera2_autofocus_pane_g2

0x91f7,	// (0x00087cff) camera2_autofocus_pane_g3_ParamLimits

0x91f7,	// (0x00087cff) camera2_autofocus_pane_g3

0x9203,	// (0x00087d0b) camera2_autofocus_pane_g4_ParamLimits

0x9203,	// (0x00087d0b) camera2_autofocus_pane_g4

0x920f,	// (0x00087d17) camera2_autofocus_pane_g5_ParamLimits

0x920f,	// (0x00087d17) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x0008e239) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x0008e239) camera2_autofocus_pane_g

0x93da,	// (0x00087ee2) camera2_autofocus_pane_cp_g2

0x93e2,	// (0x00087eea) camera2_autofocus_pane_cp_g3

0x93ea,	// (0x00087ef2) camera2_autofocus_pane_cp_g4

0x93f2,	// (0x00087efa) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0008e29f) camera2_autofocus_pane_cp_g

0x99e7,	// (0x000884ef) popup_dialer_spcha_window

0x01a3,	// (0x0007ecab) bg_popup_sub_pane_cp07

0x162a,	// (0x00080132) list_spcha_pane

0x1632,	// (0x0008013a) list_single_spcha_pane_ParamLimits

0x1632,	// (0x0008013a) list_single_spcha_pane

0x01a3,	// (0x0007ecab) list_highlight_pane_cp06

0x1643,	// (0x0008014b) list_single_spcha_pane_t1

0x0728,	// (0x0007f230) popup_call2_audio_out_window_g4_ParamLimits

0x0728,	// (0x0007f230) popup_call2_audio_out_window_g4

0x01a3,	// (0x0007ecab) main_imed2_pane

0x0d0f,	// (0x0007f817) popup_imed_adjust2_window

0x88b0,	// (0x000873b8) popup_imed_trans_window_ParamLimits

0x88b0,	// (0x000873b8) popup_imed_trans_window

0x102b,	// (0x0007fb33) popup_blid_sat_info2_window_t1

0x1039,	// (0x0007fb41) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0008e1ce) popup_blid_sat_info2_window_t

0x9cfc,	// (0x00088804) aid_size_cell_colour_35

0x9d16,	// (0x0008881e) aid_size_cell_colour_112

0x9d2d,	// (0x00088835) aid_size_cell_effect

0x3f9a,	// (0x00082aa2) bg_tb_trans_pane_cp02

0xf0c9,	// (0x0008dbd1) heading_imed_pane

0x9d47,	// (0x0008884f) listscroll_imed_pane

0x1651,	// (0x00080159) heading_imed_pane_g1

0x1659,	// (0x00080161) heading_imed_pane_t1

0x1667,	// (0x0008016f) grid_imed_colour_35_pane_ParamLimits

0x1667,	// (0x0008016f) grid_imed_colour_35_pane

0x9d53,	// (0x0008885b) grid_imed_effect_pane

0x1682,	// (0x0008018a) list_imed_aspect_pane

0x9d63,	// (0x0008886b) scroll_pane_cp027_ParamLimits

0x9d63,	// (0x0008886b) scroll_pane_cp027

0x9d6f,	// (0x00088877) cell_imed_effect_pane_ParamLimits

0x9d6f,	// (0x00088877) cell_imed_effect_pane

0x168a,	// (0x00080192) cell_imed_colour_pane_ParamLimits

0x168a,	// (0x00080192) cell_imed_colour_pane

0x16cc,	// (0x000801d4) cell_imed_colour_pane_g1_ParamLimits

0x16cc,	// (0x000801d4) cell_imed_colour_pane_g1

0x16dd,	// (0x000801e5) hgihlgiht_grid_pane_cp016_ParamLimits

0x16dd,	// (0x000801e5) hgihlgiht_grid_pane_cp016

0x9d87,	// (0x0008888f) cell_imed_effect_pane_g1

0x9d8f,	// (0x00088897) grid_highlight_pane_cp017

0xf0d5,	// (0x0008dbdd) list_imed_single_pane_ParamLimits

0xf0d5,	// (0x0008dbdd) list_imed_single_pane

0x01a3,	// (0x0007ecab) list_highlight_pane_cp07

0x16ee,	// (0x000801f6) list_imed_aspect_pane_comp1_t1

0x0ce7,	// (0x0007f7ef) bg_tb_trans_pane_cp05

0x1710,	// (0x00080218) popup_imed_adjust2_window_g1

0x1737,	// (0x0008023f) popup_imed_adjust2_window_t1

0x174f,	// (0x00080257) slider_imed_adjust_pane

0x1763,	// (0x0008026b) slider_imed_adjust_pane_g1

0x1773,	// (0x0008027b) slider_imed_adjust_pane_g2

0x1783,	// (0x0008028b) slider_imed_adjust_pane_g3

0x1794,	// (0x0008029c) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0008e30d) slider_imed_adjust_pane_g

0x9d98,	// (0x000888a0) aid_size_cell_clipart2

0x9da4,	// (0x000888ac) grid_imed_clipart_pane

0x17a5,	// (0x000802ad) scroll_pane_cp031

0x9dae,	// (0x000888b6) cell_imed_clipart_pane_ParamLimits

0x9dae,	// (0x000888b6) cell_imed_clipart_pane

0x9dd5,	// (0x000888dd) cell_imed_clipart_pane_g1

0x01a3,	// (0x0007ecab) grid_highlight_pane_cp014

0x9b0a,	// (0x00088612) main_clock2_pane_g1_ParamLimits

0x9b0a,	// (0x00088612) main_clock2_pane_g1

0x9bf9,	// (0x00088701) aid_call2_pane_cp10

0x9c0b,	// (0x00088713) aid_call_pane_cp10

0xe37f,	// (0x0008ce87) popup_clock_analogue_window_cp10_g1

0xe37f,	// (0x0008ce87) popup_clock_analogue_window_cp10_g2

0x9c1d,	// (0x00088725) popup_clock_analogue_window_cp10_g3

0x9c1d,	// (0x00088725) popup_clock_analogue_window_cp10_g4

0xe37f,	// (0x0008ce87) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0008e2fb) popup_clock_analogue_window_cp10_g

0x9c33,	// (0x0008873b) popup_clock_analogue_window_cp10_t1

0x9c64,	// (0x0008876c) clock_digital_number_pane_cp10_ParamLimits

0x9c64,	// (0x0008876c) clock_digital_number_pane_cp10

0x9c7c,	// (0x00088784) clock_digital_number_pane_cp11_ParamLimits

0x9c7c,	// (0x00088784) clock_digital_number_pane_cp11

0x9c94,	// (0x0008879c) clock_digital_number_pane_cp12_ParamLimits

0x9c94,	// (0x0008879c) clock_digital_number_pane_cp12

0x9cac,	// (0x000887b4) clock_digital_number_pane_cp13_ParamLimits

0x9cac,	// (0x000887b4) clock_digital_number_pane_cp13

0x9cc4,	// (0x000887cc) clock_digital_separator_pane_cp10_ParamLimits

0x9cc4,	// (0x000887cc) clock_digital_separator_pane_cp10

0x9cdc,	// (0x000887e4) popup_clock_digital_window_cp02_t1_ParamLimits

0x9cdc,	// (0x000887e4) popup_clock_digital_window_cp02_t1

0x4635,	// (0x0008313d) clock_digital_number_pane_cp10_g1

0x4635,	// (0x0008313d) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x0008e316) clock_digital_number_pane_cp10_g

0x4635,	// (0x0008313d) clock_digital_separator_pane_cp10_g1

0x4635,	// (0x0008313d) clock_digital_separator_pane_g2_cp10

0xe41a,	// (0x0008cf22) navi_pane_vded_g4

0xe423,	// (0x0008cf2b) navi_pane_vded_g5

0xe42c,	// (0x0008cf34) navi_pane_vded_t1

0x01a3,	// (0x0007ecab) main_vded_pane

0x9dde,	// (0x000888e6) main_vded_pane_g1

0x9dea,	// (0x000888f2) main_vded_pane_g2

0x9df4,	// (0x000888fc) main_vded_pane_g3

0x0002,

0xf813,	// (0x0008e31b) main_vded_pane_g

0x9dfe,	// (0x00088906) main_vded_pane_t1

0x9e0c,	// (0x00088914) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0008e322) main_vded_pane_t

0x9e1a,	// (0x00088922) vded_slider_pane

0x9e24,	// (0x0008892c) vded_video_pane

0x17ad,	// (0x000802b5) vded_video_pane_g1

0x9e2e,	// (0x00088936) vded_video_pane_g2

0x11ef,	// (0x0007fcf7) vded_video_pane_g3

0x0002,

0xf81f,	// (0x0008e327) vded_video_pane_g

0x17b7,	// (0x000802bf) vded_slider_pane_g1

0x0efc,	// (0x0007fa04) vded_slider_pane_g2

0x17c0,	// (0x000802c8) vded_slider_pane_g3

0x17c9,	// (0x000802d1) vded_slider_pane_g4

0x17d2,	// (0x000802da) vded_slider_pane_g5

0x0004,

0xf826,	// (0x0008e32e) vded_slider_pane_g

0x98f8,	// (0x00088400) mup3_rocker_pane_ParamLimits

0x98f8,	// (0x00088400) mup3_rocker_pane

0x9e37,	// (0x0008893f) mup3_control_keys_pane_g1

0x9e3f,	// (0x00088947) mup3_control_keys_pane_g2

0x9e47,	// (0x0008894f) mup3_control_keys_pane_g3

0x9e4f,	// (0x00088957) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x0008e339) mup3_control_keys_pane_g

0x58b4,	// (0x000843bc) popup_toolbar2_fixed_window_cp01_ParamLimits

0x58b4,	// (0x000843bc) popup_toolbar2_fixed_window_cp01

0x9912,	// (0x0008841a) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9912,	// (0x0008841a) popup_toolbar2_fixed_window_cp02

0xebd1,	// (0x0008d6d9) popup_call2_audio_second_window_t4_ParamLimits

0xebd1,	// (0x0008d6d9) popup_call2_audio_second_window_t4

0x0595,	// (0x0007f09d) popup_call2_audio_first_window_t6_ParamLimits

0x0595,	// (0x0007f09d) popup_call2_audio_first_window_t6

0x082b,	// (0x0007f333) popup_call2_audio_out_window_t6_ParamLimits

0x082b,	// (0x0007f333) popup_call2_audio_out_window_t6

0x01a3,	// (0x0007ecab) main_vitu_pane

0x9e5f,	// (0x00088967) aid_size_cell_itu_ParamLimits

0x9e5f,	// (0x00088967) aid_size_cell_itu

0x1c0c,	// (0x00080714) bg_popup_window_pane_cp08_ParamLimits

0x1c0c,	// (0x00080714) bg_popup_window_pane_cp08

0x9e6d,	// (0x00088975) field_vitu_entry_pane_ParamLimits

0x9e6d,	// (0x00088975) field_vitu_entry_pane

0x9e7c,	// (0x00088984) grid_vitu_function_pane_ParamLimits

0x9e7c,	// (0x00088984) grid_vitu_function_pane

0x9e8c,	// (0x00088994) grid_vitu_itu_pane_ParamLimits

0x9e8c,	// (0x00088994) grid_vitu_itu_pane

0x9e9c,	// (0x000889a4) cell_vitu_itu_pane_ParamLimits

0x9e9c,	// (0x000889a4) cell_vitu_itu_pane

0x9eb1,	// (0x000889b9) cell_vitu_function_pane_ParamLimits

0x9eb1,	// (0x000889b9) cell_vitu_function_pane

0x3f9a,	// (0x00082aa2) bg_popup_sub_pane_cp08_ParamLimits

0x3f9a,	// (0x00082aa2) bg_popup_sub_pane_cp08

0x9ec5,	// (0x000889cd) field_vitu_entry_pane_t1_ParamLimits

0x9ec5,	// (0x000889cd) field_vitu_entry_pane_t1

0x17f3,	// (0x000802fb) field_vitu_entry_pane_t2_ParamLimits

0x17f3,	// (0x000802fb) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x0008e347) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x0008e347) field_vitu_entry_pane_t

0x1810,	// (0x00080318) bg_button_pane_cp05_ParamLimits

0x1810,	// (0x00080318) bg_button_pane_cp05

0x9ee2,	// (0x000889ea) cell_vitu_itu_pane_g1

0x9efa,	// (0x00088a02) cell_vitu_itu_pane_t1_ParamLimits

0x9efa,	// (0x00088a02) cell_vitu_itu_pane_t1

0x9f0c,	// (0x00088a14) cell_vitu_itu_pane_t2_ParamLimits

0x9f0c,	// (0x00088a14) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0008e34c) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0008e34c) cell_vitu_itu_pane_t

0x181e,	// (0x00080326) bg_button_pane_cp07

0x9f41,	// (0x00088a49) cell_vitu_function_pane_g1

0x5b3c,	// (0x00084644) main_calc_pane_g1

0x56bd,	// (0x000841c5) aid_visual_content_pane

0x01a3,	// (0x0007ecab) main_vradio_pane

0x9f4a,	// (0x00088a52) main_vradio_pane_g1_ParamLimits

0x9f4a,	// (0x00088a52) main_vradio_pane_g1

0x1828,	// (0x00080330) main_vradio_pane_g2_ParamLimits

0x1828,	// (0x00080330) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0008e353) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0008e353) main_vradio_pane_g

0x9f5a,	// (0x00088a62) main_vradio_pane_t1_ParamLimits

0x9f5a,	// (0x00088a62) main_vradio_pane_t1

0x9f6c,	// (0x00088a74) main_vradio_pane_t2_ParamLimits

0x9f6c,	// (0x00088a74) main_vradio_pane_t2

0x1835,	// (0x0008033d) main_vradio_pane_t3_ParamLimits

0x1835,	// (0x0008033d) main_vradio_pane_t3

0x0002,

0xf850,	// (0x0008e358) main_vradio_pane_t_ParamLimits

0xf850,	// (0x0008e358) main_vradio_pane_t

0x9f7e,	// (0x00088a86) vradio_rocker_control_pane_ParamLimits

0x9f7e,	// (0x00088a86) vradio_rocker_control_pane

0x9f8a,	// (0x00088a92) vradio_station_info_pane_ParamLimits

0x9f8a,	// (0x00088a92) vradio_station_info_pane

0x1849,	// (0x00080351) vradio_frequency_info_pane_ParamLimits

0x1849,	// (0x00080351) vradio_frequency_info_pane

0x11ef,	// (0x0007fcf7) vradio_station_info_pane_g1

0x1858,	// (0x00080360) vradio_station_info_pane_t1_ParamLimits

0x1858,	// (0x00080360) vradio_station_info_pane_t1

0x187a,	// (0x00080382) vradio_station_info_pane_t2_ParamLimits

0x187a,	// (0x00080382) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x0008e35f) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x0008e35f) vradio_station_info_pane_t

0x188c,	// (0x00080394) vradio_tuning_pane

0x1894,	// (0x0008039c) vradio_rocker_control_pane_g1

0x189c,	// (0x000803a4) vradio_rocker_control_pane_g2

0x18a4,	// (0x000803ac) vradio_rocker_control_pane_g3

0x18ac,	// (0x000803b4) vradio_rocker_control_pane_g4

0x18b4,	// (0x000803bc) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0008e364) vradio_rocker_control_pane_g

0x9f99,	// (0x00088aa1) vradio_frequency_info_pane_g1

0x18bc,	// (0x000803c4) vradio_frequency_info_pane_t1_ParamLimits

0x18bc,	// (0x000803c4) vradio_frequency_info_pane_t1

0x9fa3,	// (0x00088aab) vradio_tuning_pane_g1

0x9fac,	// (0x00088ab4) vradio_tuning_pane_t1

0x01d9,	// (0x0007ece1) area_side_right_pane_ParamLimits

0x01d9,	// (0x0007ece1) area_side_right_pane

0x0cae,	// (0x0007f7b6) status_small_pane_g1

0x0cb6,	// (0x0007f7be) status_small_pane_g2

0x0cbf,	// (0x0007f7c7) status_small_pane_g3

0x0cc8,	// (0x0007f7d0) status_small_pane_g4

0x0003,

0xf61c,	// (0x0008e124) status_small_pane_g

0x0cd1,	// (0x0007f7d9) status_small_pane_t1

0x01a3,	// (0x0007ecab) main_video3_pane

0x18d0,	// (0x000803d8) cams_zoom_vslider_pane

0x18d8,	// (0x000803e0) image3_wide_pane_ParamLimits

0x18d8,	// (0x000803e0) image3_wide_pane

0x18f2,	// (0x000803fa) image3_wide_small_pane

0x18fe,	// (0x00080406) main_video3_pane_g1_ParamLimits

0x18fe,	// (0x00080406) main_video3_pane_g1

0x191a,	// (0x00080422) main_video3_pane_g2_ParamLimits

0x191a,	// (0x00080422) main_video3_pane_g2

0x0001,

0xf867,	// (0x0008e36f) main_video3_pane_g_ParamLimits

0xf867,	// (0x0008e36f) main_video3_pane_g

0x1936,	// (0x0008043e) main_video3_pane_t1_ParamLimits

0x1936,	// (0x0008043e) main_video3_pane_t1

0x1961,	// (0x00080469) main_video3_pane_t2_ParamLimits

0x1961,	// (0x00080469) main_video3_pane_t2

0x198c,	// (0x00080494) main_video3_pane_t3_ParamLimits

0x198c,	// (0x00080494) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0008e374) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0008e374) main_video3_pane_t

0x19b9,	// (0x000804c1) cams_zoom_vslider_pane_g1

0x19c2,	// (0x000804ca) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x0008e37b) cams_zoom_vslider_pane_g

0x19ca,	// (0x000804d2) small_slider_vertical_pane

0x11ef,	// (0x0007fcf7) small_slider_vertical_pane_g1

0x11ef,	// (0x0007fcf7) small_slider_vertical_pane_g2

0x19d2,	// (0x000804da) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x0008e380) small_slider_vertical_pane_g

0x01a3,	// (0x0007ecab) main_hwr_training_pane

0x19db,	// (0x000804e3) hwr_training_instruct_pane_ParamLimits

0x19db,	// (0x000804e3) hwr_training_instruct_pane

0x9fbb,	// (0x00088ac3) hwr_training_navi_pane_ParamLimits

0x9fbb,	// (0x00088ac3) hwr_training_navi_pane

0x9fd5,	// (0x00088add) hwr_training_write_pane_ParamLimits

0x9fd5,	// (0x00088add) hwr_training_write_pane

0x01a3,	// (0x0007ecab) bg_frame_shadow_pane

0x1a12,	// (0x0008051a) hwr_training_write_pane_g1

0x1a1a,	// (0x00080522) hwr_training_write_pane_g2

0x1a22,	// (0x0008052a) hwr_training_write_pane_g3

0x1a2a,	// (0x00080532) hwr_training_write_pane_g4

0x1a32,	// (0x0008053a) hwr_training_write_pane_g5

0x1a3a,	// (0x00080542) hwr_training_write_pane_g6

0x1a42,	// (0x0008054a) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x0008e387) hwr_training_write_pane_g

0xa00d,	// (0x00088b15) hwr_training_navi_pane_g1_ParamLimits

0xa00d,	// (0x00088b15) hwr_training_navi_pane_g1

0xa01f,	// (0x00088b27) hwr_training_navi_pane_g2_ParamLimits

0xa01f,	// (0x00088b27) hwr_training_navi_pane_g2

0xa031,	// (0x00088b39) hwr_training_navi_pane_g3_ParamLimits

0xa031,	// (0x00088b39) hwr_training_navi_pane_g3

0xa041,	// (0x00088b49) hwr_training_navi_pane_g4_ParamLimits

0xa041,	// (0x00088b49) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x0008e396) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x0008e396) hwr_training_navi_pane_g

0xa05b,	// (0x00088b63) hwr_training_navi_pane_t1

0xa069,	// (0x00088b71) list_single_hwr_training_instruct_pane_ParamLimits

0xa069,	// (0x00088b71) list_single_hwr_training_instruct_pane

0x1a4a,	// (0x00080552) list_single_hwr_training_instruct_pane_t1

0x112f,	// (0x0007fc37) bg_frame_shadow_pane_g1

0x1a59,	// (0x00080561) bg_frame_shadow_pane_g2

0x1a61,	// (0x00080569) bg_frame_shadow_pane_g3

0x1a69,	// (0x00080571) bg_frame_shadow_pane_g4

0x1a71,	// (0x00080579) bg_frame_shadow_pane_g5

0x1a79,	// (0x00080581) bg_frame_shadow_pane_g6

0x1a81,	// (0x00080589) bg_frame_shadow_pane_g7

0xda8d,	// (0x0008c595) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0008e3a1) bg_frame_shadow_pane_g

0x01a3,	// (0x0007ecab) main_video_tele_dialer_pane

0xa09f,	// (0x00088ba7) aid_size_cell_video_keypad_ParamLimits

0xa09f,	// (0x00088ba7) aid_size_cell_video_keypad

0xa0af,	// (0x00088bb7) grid_video_dialer_keypad_pane_ParamLimits

0xa0af,	// (0x00088bb7) grid_video_dialer_keypad_pane

0xa0e1,	// (0x00088be9) video_down_pane_cp_ParamLimits

0xa0e1,	// (0x00088be9) video_down_pane_cp

0xa109,	// (0x00088c11) cell_video_dialer_keypad_pane_ParamLimits

0xa109,	// (0x00088c11) cell_video_dialer_keypad_pane

0x1a89,	// (0x00080591) bg_button_pane_cp08_ParamLimits

0x1a89,	// (0x00080591) bg_button_pane_cp08

0xa11e,	// (0x00088c26) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa11e,	// (0x00088c26) cell_video_dialer_keypad_pane_g1

0x98ec,	// (0x000883f4) mup3_rocker2_pane_ParamLimits

0x98ec,	// (0x000883f4) mup3_rocker2_pane

0x11ef,	// (0x0007fcf7) mup3_rocker2_pane_g1

0x883e,	// (0x00087346) main_dialer2_pane

0x01a3,	// (0x0007ecab) main_mp4_pane

0xa15d,	// (0x00088c65) main_mp4_pane_g1_ParamLimits

0xa15d,	// (0x00088c65) main_mp4_pane_g1

0xa16b,	// (0x00088c73) main_mp4_pane_g2_ParamLimits

0xa16b,	// (0x00088c73) main_mp4_pane_g2

0xa179,	// (0x00088c81) main_mp4_pane_g3_ParamLimits

0xa179,	// (0x00088c81) main_mp4_pane_g3

0xa1be,	// (0x00088cc6) main_mp4_pane_g4_ParamLimits

0xa1be,	// (0x00088cc6) main_mp4_pane_g4

0xa1e6,	// (0x00088cee) main_mp4_pane_g5_ParamLimits

0xa1e6,	// (0x00088cee) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x0008e3c1) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x0008e3c1) main_mp4_pane_g

0xa236,	// (0x00088d3e) main_mp4_pane_t1_ParamLimits

0xa236,	// (0x00088d3e) main_mp4_pane_t1

0xa292,	// (0x00088d9a) main_mp4_pane_t2_ParamLimits

0xa292,	// (0x00088d9a) main_mp4_pane_t2

0x1a95,	// (0x0008059d) main_mp4_pane_t3_ParamLimits

0x1a95,	// (0x0008059d) main_mp4_pane_t3

0xa2e4,	// (0x00088dec) main_mp4_pane_t4_ParamLimits

0xa2e4,	// (0x00088dec) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0008e3ce) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0008e3ce) main_mp4_pane_t

0xa328,	// (0x00088e30) mp4_progress_pane_ParamLimits

0xa328,	// (0x00088e30) mp4_progress_pane

0xa372,	// (0x00088e7a) mp4_rocker_pane_ParamLimits

0xa372,	// (0x00088e7a) mp4_rocker_pane

0x1abd,	// (0x000805c5) mp4_progress_pane_t1

0x1ad6,	// (0x000805de) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x0008e3d7) mp4_progress_pane_t

0x1aef,	// (0x000805f7) mup_progress_pane_cp04

0x2397,	// (0x00080e9f) mp4_rocker_pane_g1

0xa392,	// (0x00088e9a) aid_cell_size_keypad2_ParamLimits

0xa392,	// (0x00088e9a) aid_cell_size_keypad2

0xa3a2,	// (0x00088eaa) dialer2_ne_pane_ParamLimits

0xa3a2,	// (0x00088eaa) dialer2_ne_pane

0xa3b0,	// (0x00088eb8) grid_dialer2_keypad_pane_ParamLimits

0xa3b0,	// (0x00088eb8) grid_dialer2_keypad_pane

0x23f2,	// (0x00080efa) bg_popup_call_pane_cp07_ParamLimits

0x23f2,	// (0x00080efa) bg_popup_call_pane_cp07

0xa3c0,	// (0x00088ec8) dialer2_ne_pane_t1_ParamLimits

0xa3c0,	// (0x00088ec8) dialer2_ne_pane_t1

0xa3e5,	// (0x00088eed) cell_dialer2_keypad_pane_ParamLimits

0xa3e5,	// (0x00088eed) cell_dialer2_keypad_pane

0x1b0d,	// (0x00080615) bg_button_pane_pane_cp04_ParamLimits

0x1b0d,	// (0x00080615) bg_button_pane_pane_cp04

0xa3fc,	// (0x00088f04) cell_dialer2_keypad_pane_g1_ParamLimits

0xa3fc,	// (0x00088f04) cell_dialer2_keypad_pane_g1

0x65bb,	// (0x000850c3) aid_placing_vt_set_content_ParamLimits

0x65bb,	// (0x000850c3) aid_placing_vt_set_content

0x65e7,	// (0x000850ef) aid_placing_vt_set_title_ParamLimits

0x65e7,	// (0x000850ef) aid_placing_vt_set_title

0x01a3,	// (0x0007ecab) main_image3_pane

0xa496,	// (0x00088f9e) area_side_right_pane_cp01_ParamLimits

0xa496,	// (0x00088f9e) area_side_right_pane_cp01

0xa4c3,	// (0x00088fcb) main_image3_pane_g1_ParamLimits

0xa4c3,	// (0x00088fcb) main_image3_pane_g1

0xa4d1,	// (0x00088fd9) main_image3_pane_g2_ParamLimits

0xa4d1,	// (0x00088fd9) main_image3_pane_g2

0xa4ea,	// (0x00088ff2) main_image3_pane_g3_ParamLimits

0xa4ea,	// (0x00088ff2) main_image3_pane_g3

0xa503,	// (0x0008900b) main_image3_pane_g4_ParamLimits

0xa503,	// (0x0008900b) main_image3_pane_g4

0x0003,

0xf8de,	// (0x0008e3e6) main_image3_pane_g_ParamLimits

0xf8de,	// (0x0008e3e6) main_image3_pane_g

0xa51c,	// (0x00089024) main_image3_pane_t1_ParamLimits

0xa51c,	// (0x00089024) main_image3_pane_t1

0xa541,	// (0x00089049) main_image3_pane_t2_ParamLimits

0xa541,	// (0x00089049) main_image3_pane_t2

0xa560,	// (0x00089068) main_image3_pane_t3_ParamLimits

0xa560,	// (0x00089068) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x0008e3ef) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x0008e3ef) main_image3_pane_t

0x1c0c,	// (0x00080714) grid_sctrl_middle_pane_cp01_ParamLimits

0x1c0c,	// (0x00080714) grid_sctrl_middle_pane_cp01

0xa5c1,	// (0x000890c9) cell_sctrl_middle_pane_cp01_ParamLimits

0xa5c1,	// (0x000890c9) cell_sctrl_middle_pane_cp01

0xa5d2,	// (0x000890da) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa5d2,	// (0x000890da) cell_sctrl_middle_pane_cp01_g1

0x01a3,	// (0x0007ecab) main_call4_pane

0xa5df,	// (0x000890e7) aid_size_button_call4_ParamLimits

0xa5df,	// (0x000890e7) aid_size_button_call4

0xa60f,	// (0x00089117) call4_windows_pane_ParamLimits

0xa60f,	// (0x00089117) call4_windows_pane

0xa629,	// (0x00089131) grid_call4_button_pane_ParamLimits

0xa629,	// (0x00089131) grid_call4_button_pane

0x1b19,	// (0x00080621) call4_windows_conf_pane

0x1b2e,	// (0x00080636) popup_call4_audio_first_window_ParamLimits

0x1b2e,	// (0x00080636) popup_call4_audio_first_window

0x1b7a,	// (0x00080682) popup_call4_audio_second_window_ParamLimits

0x1b7a,	// (0x00080682) popup_call4_audio_second_window

0x1b8e,	// (0x00080696) popup_call4_audio_wait_window_ParamLimits

0x1b8e,	// (0x00080696) popup_call4_audio_wait_window

0xa64d,	// (0x00089155) cell_call4_button_pane_ParamLimits

0xa64d,	// (0x00089155) cell_call4_button_pane

0xa672,	// (0x0008917a) bg_button_pane_cp09_ParamLimits

0xa672,	// (0x0008917a) bg_button_pane_cp09

0xa67e,	// (0x00089186) cell_call4_button_pane_g1_ParamLimits

0xa67e,	// (0x00089186) cell_call4_button_pane_g1

0xa68b,	// (0x00089193) cell_call4_button_pane_t1_ParamLimits

0xa68b,	// (0x00089193) cell_call4_button_pane_t1

0x1bd6,	// (0x000806de) popup_call4_audio_conf_window_ParamLimits

0x1bd6,	// (0x000806de) popup_call4_audio_conf_window

0x991f,	// (0x00088427) mup3_progress_pane_t1_ParamLimits

0x9936,	// (0x0008843e) mup3_progress_pane_t2_ParamLimits

0x1509,	// (0x00080011) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0008e2c8) mup3_progress_pane_t_ParamLimits

0x1520,	// (0x00080028) mup_progress_pane_cp03_ParamLimits

0x9e57,	// (0x0008895f) mup3_control_keys_pane_g4_copy1

0xa356,	// (0x00088e5e) mp4_rocker2_pane_ParamLimits

0xa356,	// (0x00088e5e) mp4_rocker2_pane

0x1bf2,	// (0x000806fa) mp4_rocker2_pane_g1

0x1bea,	// (0x000806f2) mp4_rocker2_pane_g2

0xa69d,	// (0x000891a5) mp4_rocker2_pane_g3

0xa6a5,	// (0x000891ad) mp4_rocker2_pane_g4

0xa6ad,	// (0x000891b5) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x0008e3f8) mp4_rocker2_pane_g

0x01a3,	// (0x0007ecab) main_camera4_pane

0x01a3,	// (0x0007ecab) main_video4_pane

0xa0bd,	// (0x00088bc5) main_video_tele_dialer_pane_t1_ParamLimits

0xa0bd,	// (0x00088bc5) main_video_tele_dialer_pane_t1

0xa0cf,	// (0x00088bd7) main_video_tele_dialer_pane_t2_ParamLimits

0xa0cf,	// (0x00088bd7) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x0008e3b2) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x0008e3b2) main_video_tele_dialer_pane_t

0xa6cd,	// (0x000891d5) cam4_autofocus_pane_ParamLimits

0xa6cd,	// (0x000891d5) cam4_autofocus_pane

0xa6e7,	// (0x000891ef) cam4_image_uncrop_pane_ParamLimits

0xa6e7,	// (0x000891ef) cam4_image_uncrop_pane

0xa6fe,	// (0x00089206) cam4_indicators_pane_ParamLimits

0xa6fe,	// (0x00089206) cam4_indicators_pane

0xa71a,	// (0x00089222) main_camera4_pane_g1_ParamLimits

0xa71a,	// (0x00089222) main_camera4_pane_g1

0xa726,	// (0x0008922e) main_camera4_pane_g2_ParamLimits

0xa726,	// (0x0008922e) main_camera4_pane_g2

0xa726,	// (0x0008922e) main_camera4_pane_g3_ParamLimits

0xa726,	// (0x0008922e) main_camera4_pane_g3

0xa732,	// (0x0008923a) main_camera4_pane_g4_ParamLimits

0xa732,	// (0x0008923a) main_camera4_pane_g4

0xa73e,	// (0x00089246) main_camera4_pane_g5_ParamLimits

0xa73e,	// (0x00089246) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x0008e403) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x0008e403) main_camera4_pane_g

0xa758,	// (0x00089260) main_camera4_pane_t1_ParamLimits

0xa758,	// (0x00089260) main_camera4_pane_t1

0xa7a0,	// (0x000892a8) bg_tb_trans_pane_cp06

0xa7b6,	// (0x000892be) cam4_indicators_pane_g1

0xa7c7,	// (0x000892cf) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x0008e41e) cam4_indicators_pane_g

0xa7e5,	// (0x000892ed) cam4_indicators_pane_t1

0xa80f,	// (0x00089317) main_video4_pane_g1_ParamLimits

0xa80f,	// (0x00089317) main_video4_pane_g1

0xa81b,	// (0x00089323) main_video4_pane_g2_ParamLimits

0xa81b,	// (0x00089323) main_video4_pane_g2

0xa827,	// (0x0008932f) main_video4_pane_g3_ParamLimits

0xa827,	// (0x0008932f) main_video4_pane_g3

0xa833,	// (0x0008933b) main_video4_pane_g4_ParamLimits

0xa833,	// (0x0008933b) main_video4_pane_g4

0x0004,

0xf91d,	// (0x0008e425) main_video4_pane_g_ParamLimits

0xf91d,	// (0x0008e425) main_video4_pane_g

0xa853,	// (0x0008935b) vid4_indicators_pane_ParamLimits

0xa853,	// (0x0008935b) vid4_indicators_pane

0xa871,	// (0x00089379) video4_image_uncrop_cif_pane_ParamLimits

0xa871,	// (0x00089379) video4_image_uncrop_cif_pane

0xa880,	// (0x00089388) video4_image_uncrop_nhd_pane_ParamLimits

0xa880,	// (0x00089388) video4_image_uncrop_nhd_pane

0xa6e7,	// (0x000891ef) video4_image_uncrop_vga_pane_ParamLimits

0xa6e7,	// (0x000891ef) video4_image_uncrop_vga_pane

0xa88d,	// (0x00089395) bg_tb_trans_pane_cp07

0xa7b6,	// (0x000892be) vid4_indicators_pane_g1

0xa8a3,	// (0x000893ab) vid4_indicators_pane_g2

0xa8b4,	// (0x000893bc) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x0008e430) vid4_indicators_pane_g

0xa8e1,	// (0x000893e9) vid4_indicators_pane_t1

0xa8fa,	// (0x00089402) cam4_autofocus_pane_g1

0xa902,	// (0x0008940a) cam4_autofocus_pane_g2

0xa90a,	// (0x00089412) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x0008e43b) cam4_autofocus_pane_g

0xa912,	// (0x0008941a) cam4_autofocus_pane_g3_copy1

0xa0ed,	// (0x00088bf5) video_down_pane_cp_t1

0xa0fb,	// (0x00088c03) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x0008e3b7) video_down_pane_cp_t

0x1c0c,	// (0x00080714) popup_vitu2_window_ParamLimits

0x1c0c,	// (0x00080714) popup_vitu2_window

0xa91a,	// (0x00089422) aid_size_cell2_itu2_ParamLimits

0xa91a,	// (0x00089422) aid_size_cell2_itu2

0xa93c,	// (0x00089444) aid_size_cell_itu2_ParamLimits

0xa93c,	// (0x00089444) aid_size_cell_itu2

0xa980,	// (0x00089488) bg_popup_window_pane_cp09_ParamLimits

0xa980,	// (0x00089488) bg_popup_window_pane_cp09

0xa98e,	// (0x00089496) field_vitu2_entry_pane_ParamLimits

0xa98e,	// (0x00089496) field_vitu2_entry_pane

0xa9ae,	// (0x000894b6) grid_vitu2_function_pane_ParamLimits

0xa9ae,	// (0x000894b6) grid_vitu2_function_pane

0xa9f2,	// (0x000894fa) grid_vitu2_itu_pane_ParamLimits

0xa9f2,	// (0x000894fa) grid_vitu2_itu_pane

0xaa68,	// (0x00089570) cell_vitu2_itu_pane_ParamLimits

0xaa68,	// (0x00089570) cell_vitu2_itu_pane

0xaa7d,	// (0x00089585) cell_vitu2_function_pane_ParamLimits

0xaa7d,	// (0x00089585) cell_vitu2_function_pane

0x1c1a,	// (0x00080722) bg_popup_call_pane_cp08_ParamLimits

0x1c1a,	// (0x00080722) bg_popup_call_pane_cp08

0x1c33,	// (0x0008073b) field_vitu2_entry_pane_g1

0x1c3f,	// (0x00080747) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x0008e442) field_vitu2_entry_pane_g

0xaabe,	// (0x000895c6) field_vitu2_entry_pane_t1_ParamLimits

0xaabe,	// (0x000895c6) field_vitu2_entry_pane_t1

0x1c59,	// (0x00080761) field_vitu2_entry_pane_t2_ParamLimits

0x1c59,	// (0x00080761) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x0008e449) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x0008e449) field_vitu2_entry_pane_t

0xaaee,	// (0x000895f6) bg_button_pane_cp010_ParamLimits

0xaaee,	// (0x000895f6) bg_button_pane_cp010

0xaafc,	// (0x00089604) cell_vitu2_itu_pane_g1

0xab1a,	// (0x00089622) cell_vitu2_itu_pane_t1_ParamLimits

0xab1a,	// (0x00089622) cell_vitu2_itu_pane_t1

0x55c2,	// (0x000840ca) cell_vitu2_itu_pane_t2_ParamLimits

0x55c2,	// (0x000840ca) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x0008e453) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x0008e453) cell_vitu2_itu_pane_t

0xa88d,	// (0x00089395) bg_button_pane_cp011

0xab6c,	// (0x00089674) cell_vitu2_function_pane_g1

0x01a3,	// (0x0007ecab) main_myfav_hc_pane

0xa5a2,	// (0x000890aa) popup_image3_note_pane_ParamLimits

0xa5a2,	// (0x000890aa) popup_image3_note_pane

0xa5b0,	// (0x000890b8) popup_image3_tool_bar_pane_ParamLimits

0xa5b0,	// (0x000890b8) popup_image3_tool_bar_pane

0x5630,	// (0x00084138) cell_vitu2_itu_pane_t3_ParamLimits

0x5630,	// (0x00084138) cell_vitu2_itu_pane_t3

0x01a3,	// (0x0007ecab) bg_popup_trans_pane

0x1c7e,	// (0x00080786) grid_image3_tool_bar_pane

0x1c88,	// (0x00080790) bg_popup_trans_pane_g1

0xddd2,	// (0x0008c8da) bg_popup_trans_pane_g2

0x1c90,	// (0x00080798) bg_popup_trans_pane_g3

0x1c98,	// (0x000807a0) bg_popup_trans_pane_g4

0x1ca0,	// (0x000807a8) bg_popup_trans_pane_g5

0x1ca8,	// (0x000807b0) bg_popup_trans_pane_g6

0x1cb0,	// (0x000807b8) bg_popup_trans_pane_g7

0x1cb8,	// (0x000807c0) bg_popup_trans_pane_g8

0xddb2,	// (0x0008c8ba) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x0008e45a) bg_popup_trans_pane_g

0x1cc0,	// (0x000807c8) cell_image3_tool_bar_pane_ParamLimits

0x1cc0,	// (0x000807c8) cell_image3_tool_bar_pane

0x11ef,	// (0x0007fcf7) cell_image3_tool_bar_pane_g1

0x01a3,	// (0x0007ecab) bg_popup_trans_pane_cp1

0x1cd4,	// (0x000807dc) popup_image3_note_pane_t1

0x1ce2,	// (0x000807ea) popup_image3_note_pane_t2

0x1cf0,	// (0x000807f8) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x0008e46d) popup_image3_note_pane_t

0x1cfe,	// (0x00080806) popup_image3_note_pane_t3_copy1

0xab80,	// (0x00089688) bg_myfav_hc_instruction_pane_ParamLimits

0xab80,	// (0x00089688) bg_myfav_hc_instruction_pane

0xab98,	// (0x000896a0) cell_myfav_contact_pane_ParamLimits

0xab98,	// (0x000896a0) cell_myfav_contact_pane

0xabb2,	// (0x000896ba) cell_myfav_contact_pane_cp1_ParamLimits

0xabb2,	// (0x000896ba) cell_myfav_contact_pane_cp1

0xabca,	// (0x000896d2) cell_myfav_contact_pane_cp2_ParamLimits

0xabca,	// (0x000896d2) cell_myfav_contact_pane_cp2

0xabe2,	// (0x000896ea) cell_myfav_contact_pane_cp3_ParamLimits

0xabe2,	// (0x000896ea) cell_myfav_contact_pane_cp3

0xabf9,	// (0x00089701) cell_myfav_contact_pane_cp4_ParamLimits

0xabf9,	// (0x00089701) cell_myfav_contact_pane_cp4

0xac0f,	// (0x00089717) cell_myfav_contact_pane_cp5_ParamLimits

0xac0f,	// (0x00089717) cell_myfav_contact_pane_cp5

0xac23,	// (0x0008972b) cell_myfav_contact_pane_cp6_ParamLimits

0xac23,	// (0x0008972b) cell_myfav_contact_pane_cp6

0xac37,	// (0x0008973f) cell_myfav_contact_pane_cp7_ParamLimits

0xac37,	// (0x0008973f) cell_myfav_contact_pane_cp7

0x1d0c,	// (0x00080814) listscroll_gen_pane_cp05

0xac4f,	// (0x00089757) main_myfav_hc_pane_g1_ParamLimits

0xac4f,	// (0x00089757) main_myfav_hc_pane_g1

0xac67,	// (0x0008976f) main_myfav_hc_pane_g2_ParamLimits

0xac67,	// (0x0008976f) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0008e474) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0008e474) main_myfav_hc_pane_g

0xac97,	// (0x0008979f) main_myfav_hc_pane_t1_ParamLimits

0xac97,	// (0x0008979f) main_myfav_hc_pane_t1

0x1d15,	// (0x0008081d) main_myfav_hc_pane_t2_ParamLimits

0x1d15,	// (0x0008081d) main_myfav_hc_pane_t2

0x1d27,	// (0x0008082f) main_myfav_hc_pane_t3_ParamLimits

0x1d27,	// (0x0008082f) main_myfav_hc_pane_t3

0xacae,	// (0x000897b6) main_myfav_hc_pane_t4_ParamLimits

0xacae,	// (0x000897b6) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x0008e47b) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x0008e47b) main_myfav_hc_pane_t

0x11ef,	// (0x0007fcf7) bg_myfav_hc_instruction_pane_g1

0x1d39,	// (0x00080841) cell_myfav_contact_pane_g1_ParamLimits

0x1d39,	// (0x00080841) cell_myfav_contact_pane_g1

0x1d39,	// (0x00080841) cell_myfav_contact_pane_g2_ParamLimits

0x1d39,	// (0x00080841) cell_myfav_contact_pane_g2

0x1d45,	// (0x0008084d) cell_myfav_contact_pane_g3_ParamLimits

0x1d45,	// (0x0008084d) cell_myfav_contact_pane_g3

0x14f3,	// (0x0007fffb) cell_myfav_contact_pane_g4_ParamLimits

0x14f3,	// (0x0007fffb) cell_myfav_contact_pane_g4

0x1d52,	// (0x0008085a) cell_myfav_contact_pane_g5_ParamLimits

0x1d52,	// (0x0008085a) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x0008e486) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x0008e486) cell_myfav_contact_pane_g

0xac7f,	// (0x00089787) main_myfav_hc_pane_g3_ParamLimits

0xac7f,	// (0x00089787) main_myfav_hc_pane_g3

0x57f9,	// (0x00084301) popup_adpt_find_window

0xacd8,	// (0x000897e0) afind_page_pane_ParamLimits

0xacd8,	// (0x000897e0) afind_page_pane

0xace5,	// (0x000897ed) aid_size_cell_afind_ParamLimits

0xace5,	// (0x000897ed) aid_size_cell_afind

0xacff,	// (0x00089807) bg_popup_sub_pane_cp09_ParamLimits

0xacff,	// (0x00089807) bg_popup_sub_pane_cp09

0xad0c,	// (0x00089814) find_pane_cp01_ParamLimits

0xad0c,	// (0x00089814) find_pane_cp01

0x1d5e,	// (0x00080866) grid_afind_control_pane_ParamLimits

0x1d5e,	// (0x00080866) grid_afind_control_pane

0xad19,	// (0x00089821) grid_afind_pane_ParamLimits

0xad19,	// (0x00089821) grid_afind_pane

0xad35,	// (0x0008983d) cell_afind_pane_ParamLimits

0xad35,	// (0x0008983d) cell_afind_pane

0x11ef,	// (0x0007fcf7) afind_page_pane_g1

0xad7d,	// (0x00089885) afind_page_pane_g2

0xad86,	// (0x0008988e) afind_page_pane_g3

0x0002,

0xf989,	// (0x0008e491) afind_page_pane_g

0xad8f,	// (0x00089897) afind_page_pane_t1

0x1d72,	// (0x0008087a) cell_afind_grid_control_pane_ParamLimits

0x1d72,	// (0x0008087a) cell_afind_grid_control_pane

0x1b0d,	// (0x00080615) bg_button_pane_cp69_ParamLimits

0x1b0d,	// (0x00080615) bg_button_pane_cp69

0xada6,	// (0x000898ae) cell_afind_pane_g1_ParamLimits

0xada6,	// (0x000898ae) cell_afind_pane_g1

0xadb3,	// (0x000898bb) cell_afind_pane_t1_ParamLimits

0xadb3,	// (0x000898bb) cell_afind_pane_t1

0xdbcd,	// (0x0008c6d5) bg_button_pane_cp72

0x1d81,	// (0x00080889) cell_afind_grid_control_pane_g1

0x83b9,	// (0x00086ec1) aid_image_placing_area_ParamLimits

0x83b9,	// (0x00086ec1) aid_image_placing_area

0x17db,	// (0x000802e3) field_vitu_entry_pane_g1_ParamLimits

0x17db,	// (0x000802e3) field_vitu_entry_pane_g1

0x17e7,	// (0x000802ef) field_vitu_entry_pane_g2_ParamLimits

0x17e7,	// (0x000802ef) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0008e342) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0008e342) field_vitu_entry_pane_g

0x9ee2,	// (0x000889ea) cell_vitu_itu_pane_g1_ParamLimits

0x9f24,	// (0x00088a2c) cell_vitu_itu_pane_t3_ParamLimits

0x9f24,	// (0x00088a2c) cell_vitu_itu_pane_t3

0x1abd,	// (0x000805c5) mp4_progress_pane_t1_ParamLimits

0x1ad6,	// (0x000805de) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x0008e3d7) mp4_progress_pane_t_ParamLimits

0x1aef,	// (0x000805f7) mup_progress_pane_cp04_ParamLimits

0xacc2,	// (0x000897ca) main_myfav_hc_pane_t5_ParamLimits

0xacc2,	// (0x000897ca) main_myfav_hc_pane_t5

0x01c9,	// (0x0007ecd1) aid_zoom_text_primary

0x57f9,	// (0x00084301) popup_adpt_find_window_ParamLimits

0x3f9a,	// (0x00082aa2) main_cam_set_pane

0xa70c,	// (0x00089214) cam4_zoom_pane_ParamLimits

0xa70c,	// (0x00089214) cam4_zoom_pane

0xadc5,	// (0x000898cd) main_cam_set_pane_g1_ParamLimits

0xadc5,	// (0x000898cd) main_cam_set_pane_g1

0xadd3,	// (0x000898db) main_cam_set_pane_g2_ParamLimits

0xadd3,	// (0x000898db) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x0008e498) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x0008e498) main_cam_set_pane_g

0xaddf,	// (0x000898e7) main_cam_set_pane_t1_ParamLimits

0xaddf,	// (0x000898e7) main_cam_set_pane_t1

0xadfb,	// (0x00089903) main_cset_listscroll_pane_ParamLimits

0xadfb,	// (0x00089903) main_cset_listscroll_pane

0xae26,	// (0x0008992e) main_cset_slider_pane_ParamLimits

0xae26,	// (0x0008992e) main_cset_slider_pane

0x1d92,	// (0x0008089a) main_cset_list_pane_ParamLimits

0x1d92,	// (0x0008089a) main_cset_list_pane

0x1da2,	// (0x000808aa) scroll_pane_cp028

0xae45,	// (0x0008994d) aid_area_touch_slider

0xae61,	// (0x00089969) cset_slider_pane

0xae8b,	// (0x00089993) main_cset_slider_pane_g1

0xaea0,	// (0x000899a8) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x0008e49d) main_cset_slider_pane_g

0x1ddb,	// (0x000808e3) main_cset_slider_pane_t1

0xaf68,	// (0x00089a70) main_cset_slider_pane_t2

0xaf82,	// (0x00089a8a) main_cset_slider_pane_t3

0xaf9c,	// (0x00089aa4) main_cset_slider_pane_t4

0xafba,	// (0x00089ac2) main_cset_slider_pane_t5

0xafdc,	// (0x00089ae4) main_cset_slider_pane_t6

0xaff3,	// (0x00089afb) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x0008e4c2) main_cset_slider_pane_t

0xb101,	// (0x00089c09) cset_list_set_pane_ParamLimits

0xb101,	// (0x00089c09) cset_list_set_pane

0xb11e,	// (0x00089c26) aid_position_infowindow_above

0xb126,	// (0x00089c2e) aid_position_infowindow_below

0xb12e,	// (0x00089c36) cset_list_set_pane_g1_ParamLimits

0xb12e,	// (0x00089c36) cset_list_set_pane_g1

0xb13a,	// (0x00089c42) cset_list_set_pane_g3_ParamLimits

0xb13a,	// (0x00089c42) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x0008e4e1) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x0008e4e1) cset_list_set_pane_g

0xb149,	// (0x00089c51) cset_list_set_pane_t1_ParamLimits

0xb149,	// (0x00089c51) cset_list_set_pane_t1

0x3f9a,	// (0x00082aa2) list_highlight_pane_cp021_ParamLimits

0x3f9a,	// (0x00082aa2) list_highlight_pane_cp021

0xe580,	// (0x0008d088) cset_slider_pane_g1

0xe592,	// (0x0008d09a) cset_slider_pane_g2

0xe589,	// (0x0008d091) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x0008e4e6) cset_slider_pane_g

0xb15e,	// (0x00089c66) aid_area_touch_cam4_zoom

0xb166,	// (0x00089c6e) cam4_zoom_cont_pane

0xb16e,	// (0x00089c76) cam4_zoom_pane_g1

0xb176,	// (0x00089c7e) cam4_zoom_pane_g2

0xb17e,	// (0x00089c86) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x0008e4ed) cam4_zoom_pane_g

0xb186,	// (0x00089c8e) cam4_zoom_cont_pane_g1

0xb18f,	// (0x00089c97) cam4_zoom_cont_pane_g2

0xb198,	// (0x00089ca0) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x0008e4f4) cam4_zoom_cont_pane_g

0xa5f9,	// (0x00089101) call4_image_pane_ParamLimits

0xa5f9,	// (0x00089101) call4_image_pane

0x1b19,	// (0x00080621) call4_windows_conf_pane_ParamLimits

0x1b58,	// (0x00080660) popup_call4_audio_in_window_ParamLimits

0x1b58,	// (0x00080660) popup_call4_audio_in_window

0x01a3,	// (0x0007ecab) bg_popup_call2_act_pane_cp02

0x1bce,	// (0x000806d6) call4_list_conf_pane

0x11ef,	// (0x0007fcf7) call4_image_pane_g1

0x11ef,	// (0x0007fcf7) call4_image_pane_g2

0x0001,

0xf700,	// (0x0008e208) call4_image_pane_g

0x1e96,	// (0x0008099e) list_single_graphic_popup_conf4_pane_ParamLimits

0x1e96,	// (0x0008099e) list_single_graphic_popup_conf4_pane

0x01a3,	// (0x0007ecab) list_highlight_pane_cp022

0x1ea9,	// (0x000809b1) list_single_graphic_popup_conf4_pane_g1

0xe271,	// (0x0008cd79) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x0008e4fb) list_single_graphic_popup_conf4_pane_g

0x1eb1,	// (0x000809b9) list_single_graphic_popup_conf4_pane_t1

0x674b,	// (0x00085253) popup_vtel_slider_window_ParamLimits

0x674b,	// (0x00085253) popup_vtel_slider_window

0x1afb,	// (0x00080603) dialer2_ne_pane_t2_ParamLimits

0x1afb,	// (0x00080603) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0008e3dc) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0008e3dc) dialer2_ne_pane_t

0x3f9a,	// (0x00082aa2) bg_popup_sub_pane_cp010_ParamLimits

0x3f9a,	// (0x00082aa2) bg_popup_sub_pane_cp010

0xb1a1,	// (0x00089ca9) popup_vtel_slider_window_g1_ParamLimits

0xb1a1,	// (0x00089ca9) popup_vtel_slider_window_g1

0xb1ad,	// (0x00089cb5) popup_vtel_slider_window_g2_ParamLimits

0xb1ad,	// (0x00089cb5) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x0008e500) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x0008e500) popup_vtel_slider_window_g

0xb1f5,	// (0x00089cfd) vtel_slider_pane_ParamLimits

0xb1f5,	// (0x00089cfd) vtel_slider_pane

0xb204,	// (0x00089d0c) vtel_slider_pane_g1_ParamLimits

0xb204,	// (0x00089d0c) vtel_slider_pane_g1

0xb211,	// (0x00089d19) vtel_slider_pane_g2_ParamLimits

0xb211,	// (0x00089d19) vtel_slider_pane_g2

0xb21e,	// (0x00089d26) vtel_slider_pane_g3_ParamLimits

0xb21e,	// (0x00089d26) vtel_slider_pane_g3

0xb204,	// (0x00089d0c) vtel_slider_pane_g4_ParamLimits

0xb204,	// (0x00089d0c) vtel_slider_pane_g4

0xb22b,	// (0x00089d33) vtel_slider_pane_g5_ParamLimits

0xb22b,	// (0x00089d33) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x0008e509) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x0008e509) vtel_slider_pane_g

0x01a3,	// (0x0007ecab) main_gallery2_pane

0xa962,	// (0x0008946a) aid_size_row_itut2_dropdow_list_ParamLimits

0xa962,	// (0x0008946a) aid_size_row_itut2_dropdow_list

0xa9d0,	// (0x000894d8) grid_vitu2_function_top_pane_ParamLimits

0xa9d0,	// (0x000894d8) grid_vitu2_function_top_pane

0xaa26,	// (0x0008952e) popup_vitu2_dropdown_list_window_ParamLimits

0xaa26,	// (0x0008952e) popup_vitu2_dropdown_list_window

0xaa46,	// (0x0008954e) popup_vitu2_match_list_window

0xb238,	// (0x00089d40) cell_vitu2_function_top_pane_ParamLimits

0xb238,	// (0x00089d40) cell_vitu2_function_top_pane

0xb258,	// (0x00089d60) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb258,	// (0x00089d60) cell_vitu2_function_top_pane_cp01

0xb276,	// (0x00089d7e) cell_vitu2_function_top_wide_pane_ParamLimits

0xb276,	// (0x00089d7e) cell_vitu2_function_top_wide_pane

0xa88d,	// (0x00089395) bg_button_pane_cp012

0xb294,	// (0x00089d9c) cell_vitu2_function_top_pane_g1

0xb2a3,	// (0x00089dab) bg_button_pane_cp013_ParamLimits

0xb2a3,	// (0x00089dab) bg_button_pane_cp013

0xb2bf,	// (0x00089dc7) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb2bf,	// (0x00089dc7) cell_vitu2_function_top_wide_pane_g1

0xb2d7,	// (0x00089ddf) bg_popup_sub_pane_cp20

0xb2e5,	// (0x00089ded) list_vitu2_match_list_pane

0x1c88,	// (0x00080790) bg_popup_sub_pane_cp20_g1

0x1c90,	// (0x00080798) bg_popup_sub_pane_cp20_g2

0xddd2,	// (0x0008c8da) bg_popup_sub_pane_cp20_g3

0x1c98,	// (0x000807a0) bg_popup_sub_pane_cp20_g4

0xddb2,	// (0x0008c8ba) bg_popup_sub_pane_cp20_g5

0x1ed5,	// (0x000809dd) bg_popup_sub_pane_cp20_g6

0x1ca8,	// (0x000807b0) bg_popup_sub_pane_cp20_g7

0x1cb0,	// (0x000807b8) bg_popup_sub_pane_cp20_g8

0x1cb8,	// (0x000807c0) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x0008e514) bg_popup_sub_pane_cp20_g

0xb2fd,	// (0x00089e05) list_vitu2_match_list_item_pane_ParamLimits

0xb2fd,	// (0x00089e05) list_vitu2_match_list_item_pane

0xb30f,	// (0x00089e17) list_vitu2_match_list_item_pane_t1

0x5c11,	// (0x00084719) bg_popup_sub_pane_cp21

0xb34c,	// (0x00089e54) grid_vitu2_dropdown_list_pane

0xb354,	// (0x00089e5c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb354,	// (0x00089e5c) cell_vitu2_dropdown_list_char_pane

0xb375,	// (0x00089e7d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb375,	// (0x00089e7d) cell_vitu2_dropdown_list_ctrl_pane

0x1f07,	// (0x00080a0f) cell_vitu2_dropdown_list_char_pane_g1

0x1efe,	// (0x00080a06) cell_vitu2_dropdown_list_char_pane_g2

0x1ef5,	// (0x000809fd) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x0008e531) cell_vitu2_dropdown_list_char_pane_g

0xb3a1,	// (0x00089ea9) cell_vitu2_dropdown_list_char_pane_t1

0xb3af,	// (0x00089eb7) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb3af,	// (0x00089eb7) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb3bf,	// (0x00089ec7) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb3bf,	// (0x00089ec7) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb3d0,	// (0x00089ed8) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb3d0,	// (0x00089ed8) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb3e0,	// (0x00089ee8) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb3e0,	// (0x00089ee8) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa7a0,	// (0x000892a8) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa7a0,	// (0x000892a8) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x0008e538) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x0008e538) cell_vitu2_dropdown_list_ctrl_pane_g

0xb3fc,	// (0x00089f04) aid_size_cell_gallery2_ParamLimits

0xb3fc,	// (0x00089f04) aid_size_cell_gallery2

0xb40a,	// (0x00089f12) grid_gallery2_pane_ParamLimits

0xb40a,	// (0x00089f12) grid_gallery2_pane

0xb419,	// (0x00089f21) scroll_pane_cp029_ParamLimits

0xb419,	// (0x00089f21) scroll_pane_cp029

0xb425,	// (0x00089f2d) cell_gallery2_pane_ParamLimits

0xb425,	// (0x00089f2d) cell_gallery2_pane

0x1f10,	// (0x00080a18) cell_gallery2_pane_g2

0xb456,	// (0x00089f5e) cell_gallery2_pane_g3

0x1f1a,	// (0x00080a22) cell_gallery2_pane_g4

0x1f22,	// (0x00080a2a) cell_gallery2_pane_g5

0xe44a,	// (0x0008cf52) grid_highlight_pane_cp10

0xaa46,	// (0x0008954e) popup_vitu2_match_list_window_ParamLimits

0xaa58,	// (0x00089560) popup_vitu2_query_window_ParamLimits

0xaa58,	// (0x00089560) popup_vitu2_query_window

0x5c11,	// (0x00084719) bg_vitu2_candi_button_pane

0x1f07,	// (0x00080a0f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x1efe,	// (0x00080a06) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x1ef5,	// (0x000809fd) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb45e,	// (0x00089f66) bg_button_pane_cp015

0xb470,	// (0x00089f78) bg_button_pane_cp016

0xb483,	// (0x00089f8b) bg_button_pane_cp017

0x0ce7,	// (0x0007f7ef) bg_popup_sub_pane_cp22

0x1f2a,	// (0x00080a32) popup_vitu2_query_window_g1

0xb4c8,	// (0x00089fd0) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x0008e543) popup_vitu2_query_window_g

0xb4e5,	// (0x00089fed) popup_vitu2_query_window_t1_ParamLimits

0xb4e5,	// (0x00089fed) popup_vitu2_query_window_t1

0xb518,	// (0x0008a020) popup_vitu2_query_window_t2_ParamLimits

0xb518,	// (0x0008a020) popup_vitu2_query_window_t2

0xb52a,	// (0x0008a032) popup_vitu2_query_window_t3_ParamLimits

0xb52a,	// (0x0008a032) popup_vitu2_query_window_t3

0xb552,	// (0x0008a05a) popup_vitu2_query_window_t4_ParamLimits

0xb552,	// (0x0008a05a) popup_vitu2_query_window_t4

0xb573,	// (0x0008a07b) popup_vitu2_query_window_t5_ParamLimits

0xb573,	// (0x0008a07b) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x0008e54a) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x0008e54a) popup_vitu2_query_window_t

0x1d8a,	// (0x00080892) main_cset_text_pane

0xae45,	// (0x0008994d) aid_area_touch_slider_ParamLimits

0xae61,	// (0x00089969) cset_slider_pane_ParamLimits

0xae8b,	// (0x00089993) main_cset_slider_pane_g1_ParamLimits

0xaea0,	// (0x000899a8) main_cset_slider_pane_g2_ParamLimits

0x1dab,	// (0x000808b3) main_cset_slider_pane_g3_ParamLimits

0x1dab,	// (0x000808b3) main_cset_slider_pane_g3

0xaeb5,	// (0x000899bd) main_cset_slider_pane_g4_ParamLimits

0xaeb5,	// (0x000899bd) main_cset_slider_pane_g4

0xaec4,	// (0x000899cc) main_cset_slider_pane_g5_ParamLimits

0xaec4,	// (0x000899cc) main_cset_slider_pane_g5

0xaed2,	// (0x000899da) main_cset_slider_pane_g6_ParamLimits

0xaed2,	// (0x000899da) main_cset_slider_pane_g6

0xf995,	// (0x0008e49d) main_cset_slider_pane_g_ParamLimits

0x1ddb,	// (0x000808e3) main_cset_slider_pane_t1_ParamLimits

0xaf68,	// (0x00089a70) main_cset_slider_pane_t2_ParamLimits

0xaf82,	// (0x00089a8a) main_cset_slider_pane_t3_ParamLimits

0xaf9c,	// (0x00089aa4) main_cset_slider_pane_t4_ParamLimits

0xafba,	// (0x00089ac2) main_cset_slider_pane_t5_ParamLimits

0xafdc,	// (0x00089ae4) main_cset_slider_pane_t6_ParamLimits

0xaff3,	// (0x00089afb) main_cset_slider_pane_t7_ParamLimits

0xb021,	// (0x00089b29) main_cset_slider_pane_t8_ParamLimits

0xb021,	// (0x00089b29) main_cset_slider_pane_t8

0xb049,	// (0x00089b51) main_cset_slider_pane_t9_ParamLimits

0xb049,	// (0x00089b51) main_cset_slider_pane_t9

0xb071,	// (0x00089b79) main_cset_slider_pane_t10_ParamLimits

0xb071,	// (0x00089b79) main_cset_slider_pane_t10

0xb099,	// (0x00089ba1) main_cset_slider_pane_t11_ParamLimits

0xb099,	// (0x00089ba1) main_cset_slider_pane_t11

0xb0c3,	// (0x00089bcb) main_cset_slider_pane_t12_ParamLimits

0xb0c3,	// (0x00089bcb) main_cset_slider_pane_t12

0xb0e2,	// (0x00089bea) main_cset_slider_pane_t13_ParamLimits

0xb0e2,	// (0x00089bea) main_cset_slider_pane_t13

0xf9ba,	// (0x0008e4c2) main_cset_slider_pane_t_ParamLimits

0x01a3,	// (0x0007ecab) bg_popup_sub_pane_cp011

0x1f36,	// (0x00080a3e) main_cset_text_pane_g1

0x1f3e,	// (0x00080a46) main_cset_text_pane_t1

0x1f4c,	// (0x00080a54) main_cset_text_pane_t2

0x1f5a,	// (0x00080a62) main_cset_text_pane_t3

0x1f68,	// (0x00080a70) main_cset_text_pane_t4

0x1f76,	// (0x00080a7e) main_cset_text_pane_t5

0x1f84,	// (0x00080a8c) main_cset_text_pane_t6

0x1f92,	// (0x00080a9a) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x0008e559) main_cset_text_pane_t

0x01a3,	// (0x0007ecab) main_cam4_burst_pane

0x01a3,	// (0x0007ecab) main_cam5_pane

0xdecb,	// (0x0008c9d3) bg_button_pane_cp019

0xad9d,	// (0x000898a5) bg_button_pane_cp020

0x1db7,	// (0x000808bf) main_cset_slider_pane_g7_ParamLimits

0x1db7,	// (0x000808bf) main_cset_slider_pane_g7

0x1dc3,	// (0x000808cb) main_cset_slider_pane_g8_ParamLimits

0x1dc3,	// (0x000808cb) main_cset_slider_pane_g8

0xaee8,	// (0x000899f0) main_cset_slider_pane_g9_ParamLimits

0xaee8,	// (0x000899f0) main_cset_slider_pane_g9

0xaef4,	// (0x000899fc) main_cset_slider_pane_g10_ParamLimits

0xaef4,	// (0x000899fc) main_cset_slider_pane_g10

0xaf00,	// (0x00089a08) main_cset_slider_pane_g11_ParamLimits

0xaf00,	// (0x00089a08) main_cset_slider_pane_g11

0xaf0c,	// (0x00089a14) main_cset_slider_pane_g12_ParamLimits

0xaf0c,	// (0x00089a14) main_cset_slider_pane_g12

0xaf18,	// (0x00089a20) main_cset_slider_pane_g13_ParamLimits

0xaf18,	// (0x00089a20) main_cset_slider_pane_g13

0xaf26,	// (0x00089a2e) main_cset_slider_pane_g14_ParamLimits

0xaf26,	// (0x00089a2e) main_cset_slider_pane_g14

0xaf34,	// (0x00089a3c) main_cset_slider_pane_g15_ParamLimits

0xaf34,	// (0x00089a3c) main_cset_slider_pane_g15

0x1e09,	// (0x00080911) main_cset_slider_pane_t14_ParamLimits

0x1e09,	// (0x00080911) main_cset_slider_pane_t14

0x1e42,	// (0x0008094a) main_cset_slider_pane_t15_ParamLimits

0x1e42,	// (0x0008094a) main_cset_slider_pane_t15

0xb5ea,	// (0x0008a0f2) aid_cam4_burst_size_cell_ParamLimits

0xb5ea,	// (0x0008a0f2) aid_cam4_burst_size_cell

0xb606,	// (0x0008a10e) grid_cam4_burst_pane_ParamLimits

0xb606,	// (0x0008a10e) grid_cam4_burst_pane

0xb636,	// (0x0008a13e) linegrid_cam4_burst_pane_ParamLimits

0xb636,	// (0x0008a13e) linegrid_cam4_burst_pane

0xb658,	// (0x0008a160) scroll_pane_cp30_ParamLimits

0xb658,	// (0x0008a160) scroll_pane_cp30

0xb664,	// (0x0008a16c) cell_cam4_burst_pane_ParamLimits

0xb664,	// (0x0008a16c) cell_cam4_burst_pane

0x1fac,	// (0x00080ab4) linegrid_cam4_burst_pane_g1_ParamLimits

0x1fac,	// (0x00080ab4) linegrid_cam4_burst_pane_g1

0xb6a0,	// (0x0008a1a8) linegrid_cam4_burst_pane_g2_ParamLimits

0xb6a0,	// (0x0008a1a8) linegrid_cam4_burst_pane_g2

0x1fb9,	// (0x00080ac1) linegrid_cam4_burst_pane_g3_ParamLimits

0x1fb9,	// (0x00080ac1) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x0008e568) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x0008e568) linegrid_cam4_burst_pane_g

0xb6b1,	// (0x0008a1b9) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb6b1,	// (0x0008a1b9) linegrid_cam4_burst_pane_g3_copy1

0x1fc6,	// (0x00080ace) linegrid_cam4_burst_pane_g4_ParamLimits

0x1fc6,	// (0x00080ace) linegrid_cam4_burst_pane_g4

0xb6cb,	// (0x0008a1d3) linegrid_cam4_burst_pane_g5_ParamLimits

0xb6cb,	// (0x0008a1d3) linegrid_cam4_burst_pane_g5

0xb6dc,	// (0x0008a1e4) linegrid_cam4_burst_pane_g6_ParamLimits

0xb6dc,	// (0x0008a1e4) linegrid_cam4_burst_pane_g6

0x1fd3,	// (0x00080adb) linegrid_cam4_burst_pane_g7_ParamLimits

0x1fd3,	// (0x00080adb) linegrid_cam4_burst_pane_g7

0xb6ed,	// (0x0008a1f5) cell_cam4_burst_pane_g1

0x1fec,	// (0x00080af4) main_cam5_pane_t1_ParamLimits

0x1fec,	// (0x00080af4) main_cam5_pane_t1

0x1ffe,	// (0x00080b06) main_cam5_pane_t2_ParamLimits

0x1ffe,	// (0x00080b06) main_cam5_pane_t2

0x2010,	// (0x00080b18) main_cam5_pane_t3_ParamLimits

0x2010,	// (0x00080b18) main_cam5_pane_t3

0x2022,	// (0x00080b2a) main_cam5_pane_t4_ParamLimits

0x2022,	// (0x00080b2a) main_cam5_pane_t4

0x2038,	// (0x00080b40) main_cam5_pane_t5_ParamLimits

0x2038,	// (0x00080b40) main_cam5_pane_t5

0x204a,	// (0x00080b52) main_cam5_pane_t6_ParamLimits

0x204a,	// (0x00080b52) main_cam5_pane_t6

0x205e,	// (0x00080b66) main_cam5_pane_t7_ParamLimits

0x205e,	// (0x00080b66) main_cam5_pane_t7

0x2070,	// (0x00080b78) main_cam5_pane_t8_ParamLimits

0x2070,	// (0x00080b78) main_cam5_pane_t8

0x208c,	// (0x00080b94) main_cam5_pane_t9_ParamLimits

0x208c,	// (0x00080b94) main_cam5_pane_t9

0x209e,	// (0x00080ba6) main_cam5_pane_t10_ParamLimits

0x209e,	// (0x00080ba6) main_cam5_pane_t10

0x20b0,	// (0x00080bb8) main_cam5_pane_t11_ParamLimits

0x20b0,	// (0x00080bb8) main_cam5_pane_t11

0x20c2,	// (0x00080bca) main_cam5_pane_t12_ParamLimits

0x20c2,	// (0x00080bca) main_cam5_pane_t12

0x20d7,	// (0x00080bdf) main_cam5_pane_t13_ParamLimits

0x20d7,	// (0x00080bdf) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x0008e574) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x0008e574) main_cam5_pane_t

0x58a5,	// (0x000843ad) popup_scut_keymap_window_ParamLimits

0x58a5,	// (0x000843ad) popup_scut_keymap_window

0xb700,	// (0x0008a208) aid_size_cell_brow_shortcut

0xe44a,	// (0x0008cf52) bg_popup_window_pane_cp010

0xb70c,	// (0x0008a214) grid_scut_pane

0xb718,	// (0x0008a220) cell_scut_pane_ParamLimits

0xb718,	// (0x0008a220) cell_scut_pane

0xb72f,	// (0x0008a237) cell_scut_pane_g1

0x20f4,	// (0x00080bfc) cell_scut_pane_t1

0x2103,	// (0x00080c0b) cell_scut_pane_t2

0xb738,	// (0x0008a240) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x0008e58f) cell_scut_pane_t

0x9563,	// (0x0008806b) main_mup3_pane_g8_ParamLimits

0x9563,	// (0x0008806b) main_mup3_pane_g8

0xa970,	// (0x00089478) area_vitu2_query_pane_ParamLimits

0xa970,	// (0x00089478) area_vitu2_query_pane

0xb496,	// (0x00089f9e) input_focus_pane_cp08

0x2112,	// (0x00080c1a) area_vitu2_query_pane_g1

0xb746,	// (0x0008a24e) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x0008e596) area_vitu2_query_pane_g

0xb757,	// (0x0008a25f) area_vitu2_query_pane_t1_ParamLimits

0xb757,	// (0x0008a25f) area_vitu2_query_pane_t1

0xb76b,	// (0x0008a273) area_vitu2_query_pane_t2_ParamLimits

0xb76b,	// (0x0008a273) area_vitu2_query_pane_t2

0xb77f,	// (0x0008a287) area_vitu2_query_pane_t3_ParamLimits

0xb77f,	// (0x0008a287) area_vitu2_query_pane_t3

0x211e,	// (0x00080c26) area_vitu2_query_pane_t4_ParamLimits

0x211e,	// (0x00080c26) area_vitu2_query_pane_t4

0x2146,	// (0x00080c4e) area_vitu2_query_pane_t5_ParamLimits

0x2146,	// (0x00080c4e) area_vitu2_query_pane_t5

0x216e,	// (0x00080c76) area_vitu2_query_pane_t6_ParamLimits

0x216e,	// (0x00080c76) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x0008e59b) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x0008e59b) area_vitu2_query_pane_t

0xb7a7,	// (0x0008a2af) bg_button_pane_cp018

0xb7b5,	// (0x0008a2bd) bg_button_pane_cp021

0xb7c1,	// (0x0008a2c9) bg_button_pane_cp022

0xb7d2,	// (0x0008a2da) input_focus_pane_cp09

0x79c7,	// (0x000864cf) aid_size_touch_mv_arrow_left

0x79f2,	// (0x000864fa) aid_size_touch_mv_arrow_right

0xaf4c,	// (0x00089a54) main_cset_slider_pane_g16_ParamLimits

0xaf4c,	// (0x00089a54) main_cset_slider_pane_g16

0xaf5a,	// (0x00089a62) main_cset_slider_pane_g17_ParamLimits

0xaf5a,	// (0x00089a62) main_cset_slider_pane_g17

0xb6ed,	// (0x0008a1f5) cell_cam4_burst_pane_g1_ParamLimits

0x01a3,	// (0x0007ecab) compa_mode_pane

0xb1b9,	// (0x00089cc1) popup_vtel_slider_window_g3_ParamLimits

0xb1b9,	// (0x00089cc1) popup_vtel_slider_window_g3

0xb1cd,	// (0x00089cd5) popup_vtel_slider_window_g4_ParamLimits

0xb1cd,	// (0x00089cd5) popup_vtel_slider_window_g4

0xb1e1,	// (0x00089ce9) popup_vtel_slider_window_t1_ParamLimits

0xb1e1,	// (0x00089ce9) popup_vtel_slider_window_t1

0x01a3,	// (0x0007ecab) main_cl_pane

0x0d0f,	// (0x0007f817) popup_imed_adjust2_window_ParamLimits

0x0ce7,	// (0x0007f7ef) bg_tb_trans_pane_cp05_ParamLimits

0x1710,	// (0x00080218) popup_imed_adjust2_window_g1_ParamLimits

0x171f,	// (0x00080227) popup_imed_adjust2_window_g2_ParamLimits

0x171f,	// (0x00080227) popup_imed_adjust2_window_g2

0x172b,	// (0x00080233) popup_imed_adjust2_window_g3_ParamLimits

0x172b,	// (0x00080233) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x0008e306) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x0008e306) popup_imed_adjust2_window_g

0x1737,	// (0x0008023f) popup_imed_adjust2_window_t1_ParamLimits

0x174f,	// (0x00080257) slider_imed_adjust_pane_ParamLimits

0x1763,	// (0x0008026b) slider_imed_adjust_pane_g1_ParamLimits

0x1773,	// (0x0008027b) slider_imed_adjust_pane_g2_ParamLimits

0x1783,	// (0x0008028b) slider_imed_adjust_pane_g3_ParamLimits

0x1794,	// (0x0008029c) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0008e30d) slider_imed_adjust_pane_g_ParamLimits

0xa6b5,	// (0x000891bd) aid_touch_area_cam4_ParamLimits

0xa6b5,	// (0x000891bd) aid_touch_area_cam4

0xa6c5,	// (0x000891cd) battery_pane_cp01

0xa74c,	// (0x00089254) main_camera4_pane_g6_ParamLimits

0xa74c,	// (0x00089254) main_camera4_pane_g6

0xa76a,	// (0x00089272) main_camera4_pane_t2_ParamLimits

0xa76a,	// (0x00089272) main_camera4_pane_t2

0x0001,

0xf908,	// (0x0008e410) main_camera4_pane_t_ParamLimits

0xf908,	// (0x0008e410) main_camera4_pane_t

0xa7ff,	// (0x00089307) aid_touch_area_vid4_ParamLimits

0xa7ff,	// (0x00089307) aid_touch_area_vid4

0xa83f,	// (0x00089347) main_video4_pane_g5_ParamLimits

0xa83f,	// (0x00089347) main_video4_pane_g5

0xa861,	// (0x00089369) vid4_progress_pane_ParamLimits

0xa861,	// (0x00089369) vid4_progress_pane

0x1dcf,	// (0x000808d7) main_cset_slider_pane_g18_ParamLimits

0x1dcf,	// (0x000808d7) main_cset_slider_pane_g18

0x1fe0,	// (0x00080ae8) cell_cam4_burst_pane_g2_ParamLimits

0x1fe0,	// (0x00080ae8) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x0008e56f) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x0008e56f) cell_cam4_burst_pane_g

0xb7e3,	// (0x0008a2eb) bg_cl_pane_ParamLimits

0xb7e3,	// (0x0008a2eb) bg_cl_pane

0xb7ef,	// (0x0008a2f7) cl_header_pane_ParamLimits

0xb7ef,	// (0x0008a2f7) cl_header_pane

0xb7fb,	// (0x0008a303) cl_listscroll_pane_ParamLimits

0xb7fb,	// (0x0008a303) cl_listscroll_pane

0x21ba,	// (0x00080cc2) bg_cl_pane_g1

0x21c2,	// (0x00080cca) bg_cl_pane_g2

0x21ca,	// (0x00080cd2) bg_cl_pane_g3

0x21d2,	// (0x00080cda) bg_cl_pane_g4

0x21da,	// (0x00080ce2) bg_cl_pane_g5

0x21e2,	// (0x00080cea) bg_cl_pane_g6

0x21ea,	// (0x00080cf2) bg_cl_pane_g7

0x21f2,	// (0x00080cfa) bg_cl_pane_g8

0x21fa,	// (0x00080d02) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x0008e5aa) bg_cl_pane_g

0xb807,	// (0x0008a30f) aid_height_cl_leading_ParamLimits

0xb807,	// (0x0008a30f) aid_height_cl_leading

0xb813,	// (0x0008a31b) aid_height_cl_text_ParamLimits

0xb813,	// (0x0008a31b) aid_height_cl_text

0x1c0c,	// (0x00080714) bg_cl_header_pane_ParamLimits

0x1c0c,	// (0x00080714) bg_cl_header_pane

0xb82b,	// (0x0008a333) cl_header_pane_g1_ParamLimits

0xb82b,	// (0x0008a333) cl_header_pane_g1

0xb838,	// (0x0008a340) cl_header_pane_t1_ParamLimits

0xb838,	// (0x0008a340) cl_header_pane_t1

0x2202,	// (0x00080d0a) cl_list_pane

0x1da2,	// (0x000808aa) hc_scroll_pane_cp01

0xddb2,	// (0x0008c8ba) bg_cl_header_pane_g1

0x1c88,	// (0x00080790) bg_cl_header_pane_g2

0xddd2,	// (0x0008c8da) bg_cl_header_pane_g3

0x1c98,	// (0x000807a0) bg_cl_header_pane_g4

0x1c90,	// (0x00080798) bg_cl_header_pane_g5

0x1ed5,	// (0x000809dd) bg_cl_header_pane_g6

0x1cb0,	// (0x000807b8) bg_cl_header_pane_g7

0x1cb8,	// (0x000807c0) bg_cl_header_pane_g8

0x1ca8,	// (0x000807b0) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x0008e5bd) bg_cl_header_pane_g

0xb84a,	// (0x0008a352) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb84a,	// (0x0008a352) hc_cl_list_double_graphic_heading_pane

0xb861,	// (0x0008a369) hc_cl_list_single_graphic_pane_ParamLimits

0xb861,	// (0x0008a369) hc_cl_list_single_graphic_pane

0xb881,	// (0x0008a389) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb881,	// (0x0008a389) hc_cl_list_single_graphic_pane_g1

0xb88d,	// (0x0008a395) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb88d,	// (0x0008a395) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x0008e5d0) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x0008e5d0) hc_cl_list_single_graphic_pane_g

0xb8a1,	// (0x0008a3a9) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb8a1,	// (0x0008a3a9) hc_cl_list_single_graphic_pane_t1

0xb881,	// (0x0008a389) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb881,	// (0x0008a389) hc_cl_list_double_graphic_heading_pane_g1

0xb8b6,	// (0x0008a3be) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb8b6,	// (0x0008a3be) hc_cl_list_double_graphic_heading_pane_g2

0xb8ca,	// (0x0008a3d2) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb8ca,	// (0x0008a3d2) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x0008e5d5) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x0008e5d5) hc_cl_list_double_graphic_heading_pane_g

0xb8de,	// (0x0008a3e6) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb8de,	// (0x0008a3e6) hc_cl_list_double_graphic_heading_pane_t1

0xb8f3,	// (0x0008a3fb) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb8f3,	// (0x0008a3fb) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x0008e5dc) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x0008e5dc) hc_cl_list_double_graphic_heading_pane_t

0xb910,	// (0x0008a418) vid4_progress_pane_g1

0xb920,	// (0x0008a428) vid4_progress_pane_g2

0xdff3,	// (0x0008cafb) vid4_progress_pane_g3

0xa7c7,	// (0x000892cf) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x0008e5e1) vid4_progress_pane_g

0xb930,	// (0x0008a438) vid4_progress_pane_t1

0xb945,	// (0x0008a44d) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x0008e5ec) vid4_progress_pane_t

0xb970,	// (0x0008a478) wait_bar_pane_cp07

0x0fe0,	// (0x0007fae8) blid_firmament_pane_ParamLimits

0x1023,	// (0x0007fb2b) popup_blid_sat_info2_window_g1

0x1047,	// (0x0007fb4f) popup_blid_sat_info2_window_t3

0x1055,	// (0x0007fb5d) popup_blid_sat_info2_window_t4

0x1063,	// (0x0007fb6b) popup_blid_sat_info2_window_t5

0x1071,	// (0x0007fb79) popup_blid_sat_info2_window_t6

0x1081,	// (0x0007fb89) popup_blid_sat_info2_window_t7

0x108f,	// (0x0007fb97) popup_blid_sat_info2_window_t8

0x109d,	// (0x0007fba5) popup_blid_sat_info2_window_t9

0x10ab,	// (0x0007fbb3) popup_blid_sat_info2_window_t10

0x116f,	// (0x0007fc77) aid_firma_cardinal_ParamLimits

0x1183,	// (0x0007fc8b) blid_firmament_pane_t1_ParamLimits

0x119a,	// (0x0007fca2) blid_firmament_pane_t2_ParamLimits

0x11b1,	// (0x0007fcb9) blid_firmament_pane_t3_ParamLimits

0x11c8,	// (0x0007fcd0) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x0008e1ff) blid_firmament_pane_t_ParamLimits

0x11df,	// (0x0007fce7) blid_sat_info_pane_ParamLimits

0x3f9a,	// (0x00082aa2) main_cam_set_pane_ParamLimits

0x9cfc,	// (0x00088804) aid_size_cell_colour_35_ParamLimits

0x9d16,	// (0x0008881e) aid_size_cell_colour_112_ParamLimits

0x9d2d,	// (0x00088835) aid_size_cell_effect_ParamLimits

0x3f9a,	// (0x00082aa2) bg_tb_trans_pane_cp02_ParamLimits

0xf0c9,	// (0x0008dbd1) heading_imed_pane_ParamLimits

0x9d47,	// (0x0008884f) listscroll_imed_pane_ParamLimits

0xee7b,	// (0x0008d983) popup_call2_audio_first_window_g5_ParamLimits

0xee7b,	// (0x0008d983) popup_call2_audio_first_window_g5

0xa464,	// (0x00088f6c) aid_size_touch_image3_arrow_left_ParamLimits

0xa464,	// (0x00088f6c) aid_size_touch_image3_arrow_left

0xa47a,	// (0x00088f82) aid_size_touch_image3_arrow_right_ParamLimits

0xa47a,	// (0x00088f82) aid_size_touch_image3_arrow_right

0xb95b,	// (0x0008a463) vid4_progress_pane_t3

0x9fed,	// (0x00088af5) main_hwr_training_symbol_option_pane_ParamLimits

0x9fed,	// (0x00088af5) main_hwr_training_symbol_option_pane

0x19fd,	// (0x00080505) popup_hwr_training_preview_window_ParamLimits

0x19fd,	// (0x00080505) popup_hwr_training_preview_window

0xa04e,	// (0x00088b56) hwr_training_navi_pane_g5_ParamLimits

0xa04e,	// (0x00088b56) hwr_training_navi_pane_g5

0x1c76,	// (0x0008077e) popup_char_count_window

0xb2d7,	// (0x00089ddf) bg_popup_sub_pane_cp20_ParamLimits

0xb2e5,	// (0x00089ded) list_vitu2_match_list_pane_ParamLimits

0xb2f1,	// (0x00089df9) vitu2_page_scroll_pane_ParamLimits

0xb2f1,	// (0x00089df9) vitu2_page_scroll_pane

0x2254,	// (0x00080d5c) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2254,	// (0x00080d5c) list_single_hwr_training_symbol_option_pane

0x2267,	// (0x00080d6f) list_single_hwr_training_symbol_option_pane_g1

0x226f,	// (0x00080d77) list_single_hwr_training_symbol_option_pane_t1

0x227d,	// (0x00080d85) bg_button_pane_cp023

0x2286,	// (0x00080d8e) bg_button_pane_cp024

0xb980,	// (0x0008a488) vitu2_page_scroll_pane_g1

0xb988,	// (0x0008a490) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x0008e5f3) vitu2_page_scroll_pane_g

0xb990,	// (0x0008a498) vitu2_page_scroll_pane_t1

0x0efc,	// (0x0007fa04) popup_char_count_window_g1

0x22b9,	// (0x00080dc1) popup_char_count_window_g2

0x22c2,	// (0x00080dca) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x0008e5f8) popup_char_count_window_g

0x22cb,	// (0x00080dd3) popup_char_count_window_t1

0x01a3,	// (0x0007ecab) main_vded2_pane

0x16fc,	// (0x00080204) aid_size_cell_imed_line

0x1706,	// (0x0008020e) grid_imed_line_width_pane

0xa8c5,	// (0x000893cd) vid4_indicators_pane_g4

0x22d9,	// (0x00080de1) cell_imed_line_width_pane_ParamLimits

0x22d9,	// (0x00080de1) cell_imed_line_width_pane

0x22ed,	// (0x00080df5) cell_imed_line_width_pane_g1

0x22f6,	// (0x00080dfe) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x0008e5ff) cell_imed_line_width_pane_g

0xb99f,	// (0x0008a4a7) main_vded2_pane_g1_ParamLimits

0xb99f,	// (0x0008a4a7) main_vded2_pane_g1

0xb9ac,	// (0x0008a4b4) main_vded2_pane_g2_ParamLimits

0xb9ac,	// (0x0008a4b4) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x0008e604) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x0008e604) main_vded2_pane_g

0xb9ba,	// (0x0008a4c2) vded2_slider_pane_ParamLimits

0xb9ba,	// (0x0008a4c2) vded2_slider_pane

0xb9c7,	// (0x0008a4cf) aid_size_touch_vded2_end

0xb9d1,	// (0x0008a4d9) aid_size_touch_vded2_playhead

0x22fe,	// (0x00080e06) aid_size_touch_vded2_start

0x2306,	// (0x00080e0e) vded2_slider_bg_pane

0x230f,	// (0x00080e17) vded2_slider_pane_g1

0x2318,	// (0x00080e20) vded2_slider_pane_g2

0xb9d9,	// (0x0008a4e1) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x0008e609) vded2_slider_pane_g

0x2320,	// (0x00080e28) vded2_slider_bg_pane_g1

0x2329,	// (0x00080e31) vded2_slider_bg_pane_g2

0x2332,	// (0x00080e3a) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x0008e610) vded2_slider_bg_pane_g

0x8116,	// (0x00086c1e) aid_postcard_touch_down_pane_ParamLimits

0x8116,	// (0x00086c1e) aid_postcard_touch_down_pane

0x8126,	// (0x00086c2e) aid_postcard_touch_up_pane_ParamLimits

0x8126,	// (0x00086c2e) aid_postcard_touch_up_pane

0x01a3,	// (0x0007ecab) main_blid2_pane

0x0cf5,	// (0x0007f7fd) popup_blid2_search_window

0x01a3,	// (0x0007ecab) blid2_gps_pane

0x01a3,	// (0x0007ecab) blid2_navig_pane

0x01a3,	// (0x0007ecab) blid2_search_pane

0x01a3,	// (0x0007ecab) blid2_tripm_pane

0xb9e2,	// (0x0008a4ea) blid2_search_pane_g1_ParamLimits

0xb9e2,	// (0x0008a4ea) blid2_search_pane_g1

0xb9f2,	// (0x0008a4fa) blid2_search_pane_t1_ParamLimits

0xb9f2,	// (0x0008a4fa) blid2_search_pane_t1

0xba04,	// (0x0008a50c) aid_size_cell_blid2_gps_ParamLimits

0xba04,	// (0x0008a50c) aid_size_cell_blid2_gps

0xba14,	// (0x0008a51c) blid2_gps_pane_g1_ParamLimits

0xba14,	// (0x0008a51c) blid2_gps_pane_g1

0xba20,	// (0x0008a528) grid_blid2_satellite_pane_ParamLimits

0xba20,	// (0x0008a528) grid_blid2_satellite_pane

0xba30,	// (0x0008a538) blid2_navig_pane_g1_ParamLimits

0xba30,	// (0x0008a538) blid2_navig_pane_g1

0xba3c,	// (0x0008a544) blid2_navig_pane_t1_ParamLimits

0xba3c,	// (0x0008a544) blid2_navig_pane_t1

0xba4e,	// (0x0008a556) blid2_navig_pane_t2_ParamLimits

0xba4e,	// (0x0008a556) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x0008e617) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x0008e617) blid2_navig_pane_t

0xba60,	// (0x0008a568) blid2_navig_ring_pane_ParamLimits

0xba60,	// (0x0008a568) blid2_navig_ring_pane

0xba70,	// (0x0008a578) blid2_speed_pane_ParamLimits

0xba70,	// (0x0008a578) blid2_speed_pane

0xba7c,	// (0x0008a584) blid2_tripm_pane_g1_ParamLimits

0xba7c,	// (0x0008a584) blid2_tripm_pane_g1

0xba8c,	// (0x0008a594) blid2_tripm_pane_g2_ParamLimits

0xba8c,	// (0x0008a594) blid2_tripm_pane_g2

0xba98,	// (0x0008a5a0) blid2_tripm_pane_g3_ParamLimits

0xba98,	// (0x0008a5a0) blid2_tripm_pane_g3

0xbaa4,	// (0x0008a5ac) blid2_tripm_pane_g4_ParamLimits

0xbaa4,	// (0x0008a5ac) blid2_tripm_pane_g4

0xbab0,	// (0x0008a5b8) blid2_tripm_pane_g5_ParamLimits

0xbab0,	// (0x0008a5b8) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x0008e61c) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x0008e61c) blid2_tripm_pane_g

0xbacc,	// (0x0008a5d4) blid2_tripm_pane_t1_ParamLimits

0xbacc,	// (0x0008a5d4) blid2_tripm_pane_t1

0xbae0,	// (0x0008a5e8) blid2_tripm_pane_t2_ParamLimits

0xbae0,	// (0x0008a5e8) blid2_tripm_pane_t2

0xbaf4,	// (0x0008a5fc) blid2_tripm_pane_t3_ParamLimits

0xbaf4,	// (0x0008a5fc) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x0008e629) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x0008e629) blid2_tripm_pane_t

0xbb26,	// (0x0008a62e) cell_blid2_satellite_pane_ParamLimits

0xbb26,	// (0x0008a62e) cell_blid2_satellite_pane

0xbb40,	// (0x0008a648) cell_blid2_satellite_pane_g1

0x233b,	// (0x00080e43) cell_blid2_satellite_pane_t1

0x11ef,	// (0x0007fcf7) blid2_speed_pane_g1

0x2349,	// (0x00080e51) blid2_speed_pane_t1

0x2357,	// (0x00080e5f) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x0008e632) blid2_speed_pane_t

0x11ef,	// (0x0007fcf7) blid2_navig_ring_pane_g1

0xbb49,	// (0x0008a651) blid2_navig_ring_pane_g2

0xbb51,	// (0x0008a659) blid2_navig_ring_pane_g3

0xbb59,	// (0x0008a661) blid2_navig_ring_pane_g4

0xbb61,	// (0x0008a669) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x0008e637) blid2_navig_ring_pane_g

0x01a3,	// (0x0007ecab) bg_popup_window_pane_cp011

0x2365,	// (0x00080e6d) popup_blid2_search_window_g1

0x236d,	// (0x00080e75) popup_blid2_search_window_t1

0x237b,	// (0x00080e83) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x0008e642) popup_blid2_search_window_t

0xdcc1,	// (0x0008c7c9) main_browser_pane_g1

0xd9c2,	// (0x0008c4ca) main_browser_pane_ParamLimits

0xa88d,	// (0x00089395) bg_button_pane_cp011_ParamLimits

0xab6c,	// (0x00089674) cell_vitu2_function_pane_g1_ParamLimits

0x0ce7,	// (0x0007f7ef) bg_popup_sub_pane_cp22_ParamLimits

0xb496,	// (0x00089f9e) input_focus_pane_cp08_ParamLimits

0xb4ad,	// (0x00089fb5) popup_vitu2_query_button_pane_ParamLimits

0xb4ad,	// (0x00089fb5) popup_vitu2_query_button_pane

0xb4be,	// (0x00089fc6) popup_vitu2_query_input_button_pane

0x1f2a,	// (0x00080a32) popup_vitu2_query_window_g1_ParamLimits

0xb4c8,	// (0x00089fd0) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x0008e543) popup_vitu2_query_window_g_ParamLimits

0x01a3,	// (0x0007ecab) bg_button_pane_cp026

0xbb69,	// (0x0008a671) popup_vitu2_query_input_button_pane_g1

0x01a3,	// (0x0007ecab) bg_button_pane_cp025

0x2389,	// (0x00080e91) popup_vitu2_query_button_pane_t1

0x9270,	// (0x00087d78) main_mp3_pane_t6

0x9280,	// (0x00087d88) popup_slider_window_cp01

0xa7ae,	// (0x000892b6) cam4_battery_pane

0xa89b,	// (0x000893a3) cam4_battery_pane_cp02

0xb908,	// (0x0008a410) cam4_battery_pane_cp01

0xb908,	// (0x0008a410) cam4_battery_pane_cp03

0x2397,	// (0x00080e9f) cam4_battery_pane_g1

0x11ef,	// (0x0007fcf7) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x0008e647) cam4_battery_pane_g

0x10b9,	// (0x0007fbc1) popup_blid_sat_info2_window_t11

0x79c7,	// (0x000864cf) aid_size_touch_mv_arrow_left_ParamLimits

0x79f2,	// (0x000864fa) aid_size_touch_mv_arrow_right_ParamLimits

0xe3aa,	// (0x0008ceb2) navi_pane_g1_ParamLimits

0x7a1b,	// (0x00086523) navi_pane_g2_ParamLimits

0x7a49,	// (0x00086551) navi_pane_g3_ParamLimits

0xf409,	// (0x0008df11) navi_pane_g_ParamLimits

0x7aa3,	// (0x000865ab) navi_pane_mv_t1_ParamLimits

0x9d53,	// (0x0008885b) grid_imed_effect_pane_ParamLimits

0x660b,	// (0x00085113) aid_placing_vt_slider_lsc

0xdc12,	// (0x0008c71a) aid_placing_vt_slider_prt

0x3f9a,	// (0x00082aa2) bg_tb_trans_pane_cp01_ParamLimits

0x1376,	// (0x0007fe7e) popup_image_details_window_g1_ParamLimits

0x1389,	// (0x0007fe91) popup_image_details_window_g2_ParamLimits

0x139e,	// (0x0007fea6) popup_image_details_window_g3_ParamLimits

0x139e,	// (0x0007fea6) popup_image_details_window_g3

0xf73c,	// (0x0008e244) popup_image_details_window_g_ParamLimits

0x13b2,	// (0x0007feba) popup_image_details_window_t1_ParamLimits

0x13c4,	// (0x0007fecc) popup_image_details_window_t2_ParamLimits

0x13dd,	// (0x0007fee5) popup_image_details_window_t3_ParamLimits

0x13f1,	// (0x0007fef9) popup_image_details_window_t4_ParamLimits

0x140c,	// (0x0007ff14) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x0008e24b) popup_image_details_window_t_ParamLimits

0xb81f,	// (0x0008a327) cl_header_name_pane_ParamLimits

0xb81f,	// (0x0008a327) cl_header_name_pane

0xbb71,	// (0x0008a679) cl_header_name_pane_t1_ParamLimits

0xbb71,	// (0x0008a679) cl_header_name_pane_t1

0xbb88,	// (0x0008a690) cl_header_name_pane_t2_ParamLimits

0xbb88,	// (0x0008a690) cl_header_name_pane_t2

0xbbb2,	// (0x0008a6ba) cl_header_name_pane_t3_ParamLimits

0xbbb2,	// (0x0008a6ba) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x0008e64c) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x0008e64c) cl_header_name_pane_t

0x7a74,	// (0x0008657c) navi_pane_mv_g2_ParamLimits

0x1c33,	// (0x0008073b) field_vitu2_entry_pane_g1_ParamLimits

0x1c3f,	// (0x00080747) field_vitu2_entry_pane_g2_ParamLimits

0x1c4b,	// (0x00080753) field_vitu2_entry_pane_g3_ParamLimits

0x1c4b,	// (0x00080753) field_vitu2_entry_pane_g3

0xf93a,	// (0x0008e442) field_vitu2_entry_pane_g_ParamLimits

0xaafc,	// (0x00089604) cell_vitu2_itu_pane_g1_ParamLimits

0xab0c,	// (0x00089614) cell_vitu2_itu_pane_g2_ParamLimits

0xab0c,	// (0x00089614) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x0008e44e) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x0008e44e) cell_vitu2_itu_pane_g

0xa88d,	// (0x00089395) bg_vkb2_func_pane_cp05_ParamLimits

0xa88d,	// (0x00089395) bg_vkb2_func_pane_cp05

0xa88d,	// (0x00089395) bg_vkb2_func_pane_cp03

0xa88d,	// (0x00089395) bg_vkb2_func_pane_cp04

0xa88d,	// (0x00089395) bg_vkb2_func_pane_cp10_ParamLimits

0xa88d,	// (0x00089395) bg_vkb2_func_pane_cp10

0xb7c1,	// (0x0008a2c9) bg_vkb2_func_pane_cp08

0xb7a7,	// (0x0008a2af) bg_vkb2_func_pane_cp06

0xb7b5,	// (0x0008a2bd) bg_vkb2_func_pane_cp07

0x228f,	// (0x00080d97) bg_vkb2_func_pane_cp11_ParamLimits

0x228f,	// (0x00080d97) bg_vkb2_func_pane_cp11

0x22a4,	// (0x00080dac) bg_vkb2_func_pane_cp12_ParamLimits

0x22a4,	// (0x00080dac) bg_vkb2_func_pane_cp12

0x01a3,	// (0x0007ecab) bg_vkb2_func_pane_cp09

0x1c88,	// (0x00080790) bg_vkb2_func_pane_g1

0xddd2,	// (0x0008c8da) bg_vkb2_func_pane_g2

0x1c90,	// (0x00080798) bg_vkb2_func_pane_g3

0x1c98,	// (0x000807a0) bg_vkb2_func_pane_g4

0x1ed5,	// (0x000809dd) bg_vkb2_func_pane_g5

0x1cb0,	// (0x000807b8) bg_vkb2_func_pane_g6

0x1cb8,	// (0x000807c0) bg_vkb2_func_pane_g7

0x1ca8,	// (0x000807b0) bg_vkb2_func_pane_g8

0xddb2,	// (0x0008c8ba) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x0008e653) bg_vkb2_func_pane_g

0xbabe,	// (0x0008a5c6) blid2_tripm_pane_g6_ParamLimits

0xbabe,	// (0x0008a5c6) blid2_tripm_pane_g6

0x1ab5,	// (0x000805bd) mp4_progress_pane_g1

0xbb1a,	// (0x0008a622) blid2_tripm_values_pane_ParamLimits

0xbb1a,	// (0x0008a622) blid2_tripm_values_pane

0xbbd7,	// (0x0008a6df) blid2_tripm_values_pane_t1

0xbbe5,	// (0x0008a6ed) blid2_tripm_values_pane_t2

0xbbf3,	// (0x0008a6fb) blid2_tripm_values_pane_t3

0xbc01,	// (0x0008a709) blid2_tripm_values_pane_t4

0xbc0f,	// (0x0008a717) blid2_tripm_values_pane_t5

0xbc1d,	// (0x0008a725) blid2_tripm_values_pane_t6

0xbc2b,	// (0x0008a733) blid2_tripm_values_pane_t7

0xbc39,	// (0x0008a741) blid2_tripm_values_pane_t8

0xbc47,	// (0x0008a74f) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x0008e666) blid2_tripm_values_pane_t

0x664b,	// (0x00085153) call_video_pane_t1_ParamLimits

0x666c,	// (0x00085174) call_video_pane_t2_ParamLimits

0xf292,	// (0x0008dd9a) call_video_pane_t_ParamLimits

0x7fd7,	// (0x00086adf) msg_header_pane_g1_ParamLimits

0xe5c5,	// (0x0008d0cd) msg_header_pane_g2_ParamLimits

0xe5c5,	// (0x0008d0cd) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0008dfb4) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0008dfb4) msg_header_pane_g

0xd9c2,	// (0x0008c4ca) main_clock2_pane_ParamLimits

0x9ad8,	// (0x000885e0) grid_clock2_toolbar_pane_ParamLimits

0x9ad8,	// (0x000885e0) grid_clock2_toolbar_pane

0x9ad8,	// (0x000885e0) listscroll_clock2_pane_ParamLimits

0x9ad8,	// (0x000885e0) listscroll_clock2_pane

0x9b86,	// (0x0008868e) main_clock2_pane_t3_ParamLimits

0x9b86,	// (0x0008868e) main_clock2_pane_t3

0x9b98,	// (0x000886a0) main_clock2_pane_t4_ParamLimits

0x9b98,	// (0x000886a0) main_clock2_pane_t4

0x23a1,	// (0x00080ea9) cell_clock2_toolbar_pane

0x23a9,	// (0x00080eb1) cell_clock2_toolbar_pane_cp01

0x23a9,	// (0x00080eb1) cell_clock2_toolbar_pane_cp02

0x23b1,	// (0x00080eb9) cell_clock2_toolbar_pane_cp03

0x23b9,	// (0x00080ec1) list_clock2_pane

0xe2fd,	// (0x0008ce05) scroll_pane_cp10

0x23c1,	// (0x00080ec9) list_single_clock2_pane_ParamLimits

0x23c1,	// (0x00080ec9) list_single_clock2_pane

0xe44a,	// (0x0008cf52) list_highlight_pane_cp08

0x23ce,	// (0x00080ed6) list_single_clock2_pane_t1

0x23dc,	// (0x00080ee4) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x0008e679) list_single_clock2_pane_t

0x01a3,	// (0x0007ecab) bg_button_pane_cp10

0x23ea,	// (0x00080ef2) cell_clock2_toolbar_pane_g1

0x8078,	// (0x00086b80) aid_main_viewer_pane_g1_ParamLimits

0x8078,	// (0x00086b80) aid_main_viewer_pane_g1

0x8084,	// (0x00086b8c) aid_main_viewer_pane_g2_ParamLimits

0x8084,	// (0x00086b8c) aid_main_viewer_pane_g2

0x8090,	// (0x00086b98) aid_main_viewer_pane_g3_ParamLimits

0x8090,	// (0x00086b98) aid_main_viewer_pane_g3

0x80a1,	// (0x00086ba9) aid_main_viewer_pane_g4_ParamLimits

0x80a1,	// (0x00086ba9) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0008dfc5) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0008dfc5) aid_main_viewer_pane_g

0x8831,	// (0x00087339) main_calc_pane_ParamLimits

0x883e,	// (0x00087346) main_dialer2_pane_ParamLimits

0x01a3,	// (0x0007ecab) main_cam6_pane

0x01a3,	// (0x0007ecab) main_vid6_pane

0x9ae4,	// (0x000885ec) listscroll_gen_pane_cp06_ParamLimits

0x9ae4,	// (0x000885ec) listscroll_gen_pane_cp06

0x9baa,	// (0x000886b2) main_clock2_pane_t5_ParamLimits

0x9baa,	// (0x000886b2) main_clock2_pane_t5

0x9bf9,	// (0x00088701) aid_call2_pane_cp10_ParamLimits

0x9c0b,	// (0x00088713) aid_call_pane_cp10_ParamLimits

0xe37f,	// (0x0008ce87) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe37f,	// (0x0008ce87) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9c1d,	// (0x00088725) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9c1d,	// (0x00088725) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe37f,	// (0x0008ce87) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0008e2fb) popup_clock_analogue_window_cp10_g_ParamLimits

0x9c33,	// (0x0008873b) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa411,	// (0x00088f19) cell_dialer2_keypad_pane_g2_ParamLimits

0xa411,	// (0x00088f19) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x0008e3e1) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x0008e3e1) cell_dialer2_keypad_pane_g

0xa42d,	// (0x00088f35) cell_dialer2_keypad_pane_t1

0xae32,	// (0x0008993a) main_cset_text2_pane_ParamLimits

0xae32,	// (0x0008993a) main_cset_text2_pane

0x2112,	// (0x00080c1a) area_vitu2_query_pane_g1_ParamLimits

0xb746,	// (0x0008a24e) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x0008e596) area_vitu2_query_pane_g_ParamLimits

0x2196,	// (0x00080c9e) area_vitu2_query_pane_t7_ParamLimits

0x2196,	// (0x00080c9e) area_vitu2_query_pane_t7

0xb7a7,	// (0x0008a2af) bg_button_pane_cp018_ParamLimits

0xb7b5,	// (0x0008a2bd) bg_button_pane_cp021_ParamLimits

0xb7c1,	// (0x0008a2c9) bg_button_pane_cp022_ParamLimits

0xb7c1,	// (0x0008a2c9) bg_vkb2_func_pane_cp08_ParamLimits

0xb7a7,	// (0x0008a2af) bg_vkb2_func_pane_cp06_ParamLimits

0xb7b5,	// (0x0008a2bd) bg_vkb2_func_pane_cp07_ParamLimits

0xb7d2,	// (0x0008a2da) input_focus_pane_cp09_ParamLimits

0xbc55,	// (0x0008a75d) cam6_autofocus_pane_ParamLimits

0xbc55,	// (0x0008a75d) cam6_autofocus_pane

0xbc77,	// (0x0008a77f) cam6_image_uncrop_pane_ParamLimits

0xbc77,	// (0x0008a77f) cam6_image_uncrop_pane

0xbca4,	// (0x0008a7ac) cam6_indi_pane_ParamLimits

0xbca4,	// (0x0008a7ac) cam6_indi_pane

0xbcbe,	// (0x0008a7c6) cam6_mode_pane_ParamLimits

0xbcbe,	// (0x0008a7c6) cam6_mode_pane

0xbcd2,	// (0x0008a7da) cam6_timer_pane_ParamLimits

0xbcd2,	// (0x0008a7da) cam6_timer_pane

0xbcde,	// (0x0008a7e6) cam6_zoom_pane_ParamLimits

0xbcde,	// (0x0008a7e6) cam6_zoom_pane

0xbcf6,	// (0x0008a7fe) cam6_mode_pane_g1_ParamLimits

0xbcf6,	// (0x0008a7fe) cam6_mode_pane_g1

0xbd02,	// (0x0008a80a) cam6_mode_pane_g2_ParamLimits

0xbd02,	// (0x0008a80a) cam6_mode_pane_g2

0xbd0e,	// (0x0008a816) cam6_mode_pane_g3_ParamLimits

0xbd0e,	// (0x0008a816) cam6_mode_pane_g3

0xbd1a,	// (0x0008a822) cam6_mode_pane_g4_ParamLimits

0xbd1a,	// (0x0008a822) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x0008e67e) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x0008e67e) cam6_mode_pane_g

0x23f2,	// (0x00080efa) bg_tb_trans_pane_cp08_ParamLimits

0x23f2,	// (0x00080efa) bg_tb_trans_pane_cp08

0x2400,	// (0x00080f08) cam6_battery_pane_ParamLimits

0x2400,	// (0x00080f08) cam6_battery_pane

0x2416,	// (0x00080f1e) cam6_indi_pane_g1_ParamLimits

0x2416,	// (0x00080f1e) cam6_indi_pane_g1

0x2428,	// (0x00080f30) cam6_indi_pane_g2_ParamLimits

0x2428,	// (0x00080f30) cam6_indi_pane_g2

0x243a,	// (0x00080f42) cam6_indi_pane_g3_ParamLimits

0x243a,	// (0x00080f42) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x0008e687) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x0008e687) cam6_indi_pane_g

0x244c,	// (0x00080f54) cam6_indi_pane_t1_ParamLimits

0x244c,	// (0x00080f54) cam6_indi_pane_t1

0xa902,	// (0x0008940a) cam6_autofocus_pane_g1

0xa8fa,	// (0x00089402) cam6_autofocus_pane_g2

0xa912,	// (0x0008941a) cam6_autofocus_pane_g3

0xa90a,	// (0x00089412) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x0008e68e) cam6_autofocus_pane_g

0x2472,	// (0x00080f7a) cam6_timer_pane_g1

0x247a,	// (0x00080f82) cam6_timer_pane_t1

0x2488,	// (0x00080f90) cam6_zoom_cont_pane

0x2490,	// (0x00080f98) cam6_zoom_pane_g1

0x2498,	// (0x00080fa0) cam6_zoom_pane_g2

0xbd26,	// (0x0008a82e) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x0008e697) cam6_zoom_pane_g

0x11ef,	// (0x0007fcf7) cam6_battery_pane_g1

0x11ef,	// (0x0007fcf7) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x0008e208) cam6_battery_pane_g

0x24a0,	// (0x00080fa8) cam6_zoom_cont_pane_g1

0x24a9,	// (0x00080fb1) cam6_zoom_cont_pane_g2

0x24b2,	// (0x00080fba) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x0008e69e) cam6_zoom_cont_pane_g

0xbd40,	// (0x0008a848) cam6_mode_pane_cp_ParamLimits

0xbd40,	// (0x0008a848) cam6_mode_pane_cp

0xbd54,	// (0x0008a85c) cam6_zoom_pane_cp_ParamLimits

0xbd54,	// (0x0008a85c) cam6_zoom_pane_cp

0xbd6c,	// (0x0008a874) vid6_image_uncrop_cif_pane_ParamLimits

0xbd6c,	// (0x0008a874) vid6_image_uncrop_cif_pane

0xbd98,	// (0x0008a8a0) vid6_image_uncrop_nhd_pane_ParamLimits

0xbd98,	// (0x0008a8a0) vid6_image_uncrop_nhd_pane

0xbdb5,	// (0x0008a8bd) vid6_image_uncrop_vga_pane_ParamLimits

0xbdb5,	// (0x0008a8bd) vid6_image_uncrop_vga_pane

0xbdd4,	// (0x0008a8dc) vid6_image_uncrop_wvga_pane_ParamLimits

0xbdd4,	// (0x0008a8dc) vid6_image_uncrop_wvga_pane

0xbdf1,	// (0x0008a8f9) vid6_indi_pane_ParamLimits

0xbdf1,	// (0x0008a8f9) vid6_indi_pane

0x23f2,	// (0x00080efa) bg_tb_trans_pane_cp09_ParamLimits

0x23f2,	// (0x00080efa) bg_tb_trans_pane_cp09

0x24ca,	// (0x00080fd2) cam6_battery_pane_cp_ParamLimits

0x24ca,	// (0x00080fd2) cam6_battery_pane_cp

0x24d6,	// (0x00080fde) vid6_indi_pane_g1_ParamLimits

0x24d6,	// (0x00080fde) vid6_indi_pane_g1

0x24e8,	// (0x00080ff0) vid6_indi_pane_g2_ParamLimits

0x24e8,	// (0x00080ff0) vid6_indi_pane_g2

0x24fa,	// (0x00081002) vid6_indi_pane_g3_ParamLimits

0x24fa,	// (0x00081002) vid6_indi_pane_g3

0x250f,	// (0x00081017) vid6_indi_pane_g4_ParamLimits

0x250f,	// (0x00081017) vid6_indi_pane_g4

0x2524,	// (0x0008102c) vid6_indi_pane_g5_ParamLimits

0x2524,	// (0x0008102c) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x0008e6a5) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x0008e6a5) vid6_indi_pane_g

0x253e,	// (0x00081046) vid6_indi_pane_t1_ParamLimits

0x253e,	// (0x00081046) vid6_indi_pane_t1

0x2554,	// (0x0008105c) vid6_indi_pane_t2_ParamLimits

0x2554,	// (0x0008105c) vid6_indi_pane_t2

0x257c,	// (0x00081084) vid6_indi_pane_t3_ParamLimits

0x257c,	// (0x00081084) vid6_indi_pane_t3

0x25a4,	// (0x000810ac) vid6_indi_pane_t4_ParamLimits

0x25a4,	// (0x000810ac) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x0008e6b0) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x0008e6b0) vid6_indi_pane_t

0x25c8,	// (0x000810d0) wait_bar_pane_cp08

0xbe14,	// (0x0008a91c) main_cset_text2_pane_t1_ParamLimits

0xbe14,	// (0x0008a91c) main_cset_text2_pane_t1

0xbd2e,	// (0x0008a836) listscroll_gen_pane_cp06_t1_ParamLimits

0xbd2e,	// (0x0008a836) listscroll_gen_pane_cp06_t1

0x01a3,	// (0x0007ecab) main_cam6_set_pane

0xa7a0,	// (0x000892a8) bg_tb_trans_pane_cp06_ParamLimits

0xa7b6,	// (0x000892be) cam4_indicators_pane_g1_ParamLimits

0xa7c7,	// (0x000892cf) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x0008e41e) cam4_indicators_pane_g_ParamLimits

0xa7e5,	// (0x000892ed) cam4_indicators_pane_t1_ParamLimits

0xa88d,	// (0x00089395) bg_tb_trans_pane_cp07_ParamLimits

0xa7b6,	// (0x000892be) vid4_indicators_pane_g1_ParamLimits

0xa8a3,	// (0x000893ab) vid4_indicators_pane_g2_ParamLimits

0xa8b4,	// (0x000893bc) vid4_indicators_pane_g3_ParamLimits

0xa8c5,	// (0x000893cd) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x0008e430) vid4_indicators_pane_g_ParamLimits

0xa8e1,	// (0x000893e9) vid4_indicators_pane_t1_ParamLimits

0xb910,	// (0x0008a418) vid4_progress_pane_g1_ParamLimits

0xb920,	// (0x0008a428) vid4_progress_pane_g2_ParamLimits

0xdff3,	// (0x0008cafb) vid4_progress_pane_g3_ParamLimits

0xa7c7,	// (0x000892cf) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x0008e5e1) vid4_progress_pane_g_ParamLimits

0xb930,	// (0x0008a438) vid4_progress_pane_t1_ParamLimits

0xb945,	// (0x0008a44d) vid4_progress_pane_t2_ParamLimits

0xb95b,	// (0x0008a463) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x0008e5ec) vid4_progress_pane_t_ParamLimits

0xb970,	// (0x0008a478) wait_bar_pane_cp07_ParamLimits

0xbe52,	// (0x0008a95a) main_cam6_set_pane_g2_ParamLimits

0xbe52,	// (0x0008a95a) main_cam6_set_pane_g2

0xbe5e,	// (0x0008a966) main_cset6_listscroll_pane_ParamLimits

0xbe5e,	// (0x0008a966) main_cset6_listscroll_pane

0xbe89,	// (0x0008a991) main_cset6_slider_pane_ParamLimits

0xbe89,	// (0x0008a991) main_cset6_slider_pane

0xbe95,	// (0x0008a99d) main_cset6_text2_pane_ParamLimits

0xbe95,	// (0x0008a99d) main_cset6_text2_pane

0x25d7,	// (0x000810df) main_cset6_text_pane

0x25df,	// (0x000810e7) main_cset_list_pane_copy1_ParamLimits

0x25df,	// (0x000810e7) main_cset_list_pane_copy1

0x25ef,	// (0x000810f7) scroll_pane_cp028_copy1

0xbea8,	// (0x0008a9b0) cset_list_set_pane_copy1

0xbec2,	// (0x0008a9ca) aid_position_infowindow_above_copy1

0xbeca,	// (0x0008a9d2) aid_position_infowindow_below_copy1

0x3f60,	// (0x00082a68) cset_list_set_pane_g1_copy1

0xb13a,	// (0x00089c42) cset_list_set_pane_g3_copy1_ParamLimits

0xb13a,	// (0x00089c42) cset_list_set_pane_g3_copy1

0xb149,	// (0x00089c51) cset_list_set_pane_t1_copy1_ParamLimits

0xb149,	// (0x00089c51) cset_list_set_pane_t1_copy1

0x3f9a,	// (0x00082aa2) list_highlight_pane_cp021_copy1_ParamLimits

0x3f9a,	// (0x00082aa2) list_highlight_pane_cp021_copy1

0x25f8,	// (0x00081100) cset6_slider_pane_ParamLimits

0x25f8,	// (0x00081100) cset6_slider_pane

0x2624,	// (0x0008112c) main_cset6_slider_pane_g1_ParamLimits

0x2624,	// (0x0008112c) main_cset6_slider_pane_g1

0xbed2,	// (0x0008a9da) main_cset6_slider_pane_g2_ParamLimits

0xbed2,	// (0x0008a9da) main_cset6_slider_pane_g2

0x1db7,	// (0x000808bf) main_cset6_slider_pane_g3_ParamLimits

0x1db7,	// (0x000808bf) main_cset6_slider_pane_g3

0xbefa,	// (0x0008aa02) main_cset6_slider_pane_g4_ParamLimits

0xbefa,	// (0x0008aa02) main_cset6_slider_pane_g4

0xbf06,	// (0x0008aa0e) main_cset6_slider_pane_g5_ParamLimits

0xbf06,	// (0x0008aa0e) main_cset6_slider_pane_g5

0x1db7,	// (0x000808bf) main_cset6_slider_pane_g7_ParamLimits

0x1db7,	// (0x000808bf) main_cset6_slider_pane_g7

0x1dc3,	// (0x000808cb) main_cset6_slider_pane_g8_ParamLimits

0x1dc3,	// (0x000808cb) main_cset6_slider_pane_g8

0xbf14,	// (0x0008aa1c) main_cset6_slider_pane_g9_ParamLimits

0xbf14,	// (0x0008aa1c) main_cset6_slider_pane_g9

0xbf20,	// (0x0008aa28) main_cset6_slider_pane_g10_ParamLimits

0xbf20,	// (0x0008aa28) main_cset6_slider_pane_g10

0xbefa,	// (0x0008aa02) main_cset6_slider_pane_g11_ParamLimits

0xbefa,	// (0x0008aa02) main_cset6_slider_pane_g11

0xbf2c,	// (0x0008aa34) main_cset6_slider_pane_g12_ParamLimits

0xbf2c,	// (0x0008aa34) main_cset6_slider_pane_g12

0xbf38,	// (0x0008aa40) main_cset6_slider_pane_g13_ParamLimits

0xbf38,	// (0x0008aa40) main_cset6_slider_pane_g13

0xbf46,	// (0x0008aa4e) main_cset6_slider_pane_g14_ParamLimits

0xbf46,	// (0x0008aa4e) main_cset6_slider_pane_g14

0xbf54,	// (0x0008aa5c) main_cset6_slider_pane_g15_ParamLimits

0xbf54,	// (0x0008aa5c) main_cset6_slider_pane_g15

0xbf06,	// (0x0008aa0e) main_cset6_slider_pane_g16_ParamLimits

0xbf06,	// (0x0008aa0e) main_cset6_slider_pane_g16

0xbf6c,	// (0x0008aa74) main_cset6_slider_pane_g17_ParamLimits

0xbf6c,	// (0x0008aa74) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x0008e6b9) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x0008e6b9) main_cset6_slider_pane_g

0x264c,	// (0x00081154) main_cset6_slider_pane_t1_ParamLimits

0x264c,	// (0x00081154) main_cset6_slider_pane_t1

0xbf7a,	// (0x0008aa82) main_cset6_slider_pane_t2_ParamLimits

0xbf7a,	// (0x0008aa82) main_cset6_slider_pane_t2

0xbfa5,	// (0x0008aaad) main_cset6_slider_pane_t3_ParamLimits

0xbfa5,	// (0x0008aaad) main_cset6_slider_pane_t3

0xbfd0,	// (0x0008aad8) main_cset6_slider_pane_t4_ParamLimits

0xbfd0,	// (0x0008aad8) main_cset6_slider_pane_t4

0xbffd,	// (0x0008ab05) main_cset6_slider_pane_t5_ParamLimits

0xbffd,	// (0x0008ab05) main_cset6_slider_pane_t5

0x268d,	// (0x00081195) main_cset6_slider_pane_t7_ParamLimits

0x268d,	// (0x00081195) main_cset6_slider_pane_t7

0xc02a,	// (0x0008ab32) main_cset6_slider_pane_t8_ParamLimits

0xc02a,	// (0x0008ab32) main_cset6_slider_pane_t8

0xc04e,	// (0x0008ab56) main_cset6_slider_pane_t9_ParamLimits

0xc04e,	// (0x0008ab56) main_cset6_slider_pane_t9

0xc072,	// (0x0008ab7a) main_cset6_slider_pane_t10_ParamLimits

0xc072,	// (0x0008ab7a) main_cset6_slider_pane_t10

0xc096,	// (0x0008ab9e) main_cset6_slider_pane_t11_ParamLimits

0xc096,	// (0x0008ab9e) main_cset6_slider_pane_t11

0x26c3,	// (0x000811cb) main_cset6_slider_pane_t14_ParamLimits

0x26c3,	// (0x000811cb) main_cset6_slider_pane_t14

0x26fc,	// (0x00081204) main_cset6_slider_pane_t15_ParamLimits

0x26fc,	// (0x00081204) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x0008e6de) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x0008e6de) main_cset6_slider_pane_t

0x1e7b,	// (0x00080983) cset_slider_pane_g1_copy1

0x1e84,	// (0x0008098c) cset_slider_pane_g2_copy1

0x1e8d,	// (0x00080995) cset_slider_pane_g3_copy1

0x01a3,	// (0x0007ecab) bg_popup_sub_pane_cp011_copy1

0x1f36,	// (0x00080a3e) main_cset_text_pane_g1_copy1

0x1f3e,	// (0x00080a46) main_cset_text_pane_t1_copy1

0x1f4c,	// (0x00080a54) main_cset_text_pane_t2_copy1

0x1f5a,	// (0x00080a62) main_cset_text_pane_t3_copy1

0x1f68,	// (0x00080a70) main_cset_text_pane_t4_copy1

0x1f76,	// (0x00080a7e) main_cset_text_pane_t5_copy1

0x1f84,	// (0x00080a8c) main_cset_text_pane_t6_copy1

0x1f92,	// (0x00080a9a) main_cset_text_pane_t7_copy1

0xc0bc,	// (0x0008abc4) main_cset_text2_pane_t1_copy1

0x01a3,	// (0x0007ecab) main_ncimui_pane

0x887d,	// (0x00087385) popup_query_ncimui_window_ParamLimits

0x887d,	// (0x00087385) popup_query_ncimui_window

0x14bb,	// (0x0007ffc3) field_cale_ev2_pane_g4_ParamLimits

0x14bb,	// (0x0007ffc3) field_cale_ev2_pane_g4

0xa12f,	// (0x00088c37) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa12f,	// (0x00088c37) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0008e3bc) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0008e3bc) cell_video_dialer_keypad_pane_g

0xa147,	// (0x00088c4f) cell_video_dialer_keypad_pane_t1

0x01a3,	// (0x0007ecab) bg_popup_window_pane_cp012

0xe1cd,	// (0x0008ccd5) heading_pane_cp06

0x2824,	// (0x0008132c) ncim_query_content_pane

0x01a3,	// (0x0007ecab) bg_popup_heading_pane_cp01

0x282c,	// (0x00081334) ncim_heading_pane_t1

0x283a,	// (0x00081342) ncim_indicator_popup_pane

0x284c,	// (0x00081354) ncim_query_button_pane

0x2860,	// (0x00081368) ncim_query_content_pane_t1

0x2872,	// (0x0008137a) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x0008e71d) ncim_query_content_pane_t

0x28ac,	// (0x000813b4) ncim_query_list_pane

0x28be,	// (0x000813c6) ncim_query_popup_pane

0x283a,	// (0x00081342) ncim_indicator_popup_pane_ParamLimits

0xc1e9,	// (0x0008acf1) ncim_query_content_pane_g1_ParamLimits

0xc1e9,	// (0x0008acf1) ncim_query_content_pane_g1

0x2860,	// (0x00081368) ncim_query_content_pane_t1_ParamLimits

0x2872,	// (0x0008137a) ncim_query_content_pane_t2_ParamLimits

0xc1f5,	// (0x0008acfd) ncim_query_content_pane_t3_ParamLimits

0xc1f5,	// (0x0008acfd) ncim_query_content_pane_t3

0xc212,	// (0x0008ad1a) ncim_query_content_pane_t4_ParamLimits

0xc212,	// (0x0008ad1a) ncim_query_content_pane_t4

0xc22f,	// (0x0008ad37) ncim_query_content_pane_t5_ParamLimits

0xc22f,	// (0x0008ad37) ncim_query_content_pane_t5

0x2884,	// (0x0008138c) ncim_query_content_pane_t6_ParamLimits

0x2884,	// (0x0008138c) ncim_query_content_pane_t6

0xfc15,	// (0x0008e71d) ncim_query_content_pane_t_ParamLimits

0x28ac,	// (0x000813b4) ncim_query_list_pane_ParamLimits

0x28be,	// (0x000813c6) ncim_query_popup_pane_ParamLimits

0x28d2,	// (0x000813da) wait_bar_pane_cp04

0x01a3,	// (0x0007ecab) input_focus_pane_cp011

0x28da,	// (0x000813e2) ncim_query_popup_pane_t1

0x28e8,	// (0x000813f0) ncim_list_query_list_pane_ParamLimits

0x28e8,	// (0x000813f0) ncim_list_query_list_pane

0x01a3,	// (0x0007ecab) bg_button_pane_cp027

0x28fb,	// (0x00081403) ncim_query_button_pane_g1

0x01a3,	// (0x0007ecab) list_highlight_pane_cp012

0x2905,	// (0x0008140d) ncim_list_query_list_pane_g1

0x290d,	// (0x00081415) ncim_list_query_list_pane_t1

0xa7d6,	// (0x000892de) cam4_indicators_pane_g3_ParamLimits

0xa7d6,	// (0x000892de) cam4_indicators_pane_g3

0xa8d1,	// (0x000893d9) vid4_indicators_pane_g5_ParamLimits

0xa8d1,	// (0x000893d9) vid4_indicators_pane_g5

0xa7d6,	// (0x000892de) vid4_progress_pane_g5_ParamLimits

0xa7d6,	// (0x000892de) vid4_progress_pane_g5

0xc102,	// (0x0008ac0a) main_ncimui_pane_g1

0xc158,	// (0x0008ac60) ncimui_group_query_pane_ParamLimits

0xc158,	// (0x0008ac60) ncimui_group_query_pane

0xc194,	// (0x0008ac9c) ncimui_list_pane_ParamLimits

0xc194,	// (0x0008ac9c) ncimui_list_pane

0xc1b5,	// (0x0008acbd) ncimui_text_pane_ParamLimits

0xc1b5,	// (0x0008acbd) ncimui_text_pane

0xc24c,	// (0x0008ad54) ncimui_text_pane_t1_ParamLimits

0xc24c,	// (0x0008ad54) ncimui_text_pane_t1

0x291b,	// (0x00081423) ncimui_list_single_graphic_pane_ParamLimits

0x291b,	// (0x00081423) ncimui_list_single_graphic_pane

0xc26b,	// (0x0008ad73) ncimui_query_pane_ParamLimits

0xc26b,	// (0x0008ad73) ncimui_query_pane

0x01a3,	// (0x0007ecab) list_highlight_pane_cp013

0x292b,	// (0x00081433) ncim_list_query_list_pane_t1_copy1

0x2905,	// (0x0008140d) ncim_list_single_graphic_pane_g1

0x2939,	// (0x00081441) ncim_query_button_pane_cp01

0x2945,	// (0x0008144d) ncim_query_entry_pane_ParamLimits

0x2945,	// (0x0008144d) ncim_query_entry_pane

0x2958,	// (0x00081460) ncimui_query_pane_g1

0x2964,	// (0x0008146c) ncimui_query_pane_t1_ParamLimits

0x2964,	// (0x0008146c) ncimui_query_pane_t1

0x3f9a,	// (0x00082aa2) input_focus_pane_cp012

0x297d,	// (0x00081485) ncim_query_entry_pane_t1

0xd9c2,	// (0x0008c4ca) main_im_pane_ParamLimits

0x3f9a,	// (0x00082aa2) main_mobtv_pane_ParamLimits

0x3f9a,	// (0x00082aa2) main_mobtv_pane

0xbf14,	// (0x0008aa1c) main_cset6_slider_pane_g18_ParamLimits

0xbf14,	// (0x0008aa1c) main_cset6_slider_pane_g18

0xbf38,	// (0x0008aa40) main_cset6_slider_pane_g19_ParamLimits

0xbf38,	// (0x0008aa40) main_cset6_slider_pane_g19

0x1c4b,	// (0x00080753) bg_main_mobtv_pane_ParamLimits

0x1c4b,	// (0x00080753) bg_main_mobtv_pane

0xc27e,	// (0x0008ad86) main_mobtv_info_pane

0xc289,	// (0x0008ad91) main_mobtv_loading_pane_ParamLimits

0xc289,	// (0x0008ad91) main_mobtv_loading_pane

0x298f,	// (0x00081497) main_mobtv_pg_channel_list_pane

0x2999,	// (0x000814a1) main_mobtv_pg_hdr_pane

0xc296,	// (0x0008ad9e) main_mobtv_programe_curr_pane_ParamLimits

0xc296,	// (0x0008ad9e) main_mobtv_programe_curr_pane

0xc2a3,	// (0x0008adab) main_mobtv_programe_next_pane_ParamLimits

0xc2a3,	// (0x0008adab) main_mobtv_programe_next_pane

0x29a2,	// (0x000814aa) popup_mobtv_noti_window

0x11ef,	// (0x0007fcf7) main_tv_pg_hdr_pane_g1

0x29aa,	// (0x000814b2) main_tv_pg_hdr_pane_g2

0x29b2,	// (0x000814ba) main_tv_pg_hdr_pane_g3

0x29ba,	// (0x000814c2) main_tv_pg_hdr_pane_g4

0x29c2,	// (0x000814ca) main_tv_pg_hdr_pane_g5

0x29cc,	// (0x000814d4) main_tv_pg_hdr_pane_g6

0x29d6,	// (0x000814de) main_tv_pg_hdr_pane_g7

0x29e0,	// (0x000814e8) main_tv_pg_hdr_pane_g8

0x29ea,	// (0x000814f2) main_tv_pg_hdr_pane_g9

0x29f4,	// (0x000814fc) main_tv_pg_hdr_pane_g10

0x29fe,	// (0x00081506) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x0008e72a) main_tv_pg_hdr_pane_g

0x2a08,	// (0x00081510) main_tv_pg_hdr_pane_t1

0x2a16,	// (0x0008151e) main_tv_pg_hdr_pane_t2

0x2a24,	// (0x0008152c) main_tv_pg_hdr_pane_t3

0x2a34,	// (0x0008153c) main_tv_pg_hdr_pane_t4

0x2a44,	// (0x0008154c) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x0008e741) main_tv_pg_hdr_pane_t

0x2a54,	// (0x0008155c) single_mobtv_pg_channel_pane_ParamLimits

0x2a54,	// (0x0008155c) single_mobtv_pg_channel_pane

0x2a66,	// (0x0008156e) single_mobtv_pg_channel_table_pane

0x2a6f,	// (0x00081577) single_mobtv_pg_channel_thumb_pane

0x2a78,	// (0x00081580) single_tv_pg_channel_pane_g1

0x2a81,	// (0x00081589) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x0008e74c) single_tv_pg_channel_pane_g

0x1456,	// (0x0007ff5e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1456,	// (0x0007ff5e) bg_single_mobtv_pg_channel_thumb_pane

0x2a8a,	// (0x00081592) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2a8a,	// (0x00081592) single_mobtv_pg_channel_thumb_pane_g1

0x2a98,	// (0x000815a0) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2a98,	// (0x000815a0) single_mobtv_pg_channel_thumb_pane_g2

0x2aa4,	// (0x000815ac) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2aa4,	// (0x000815ac) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x0008e751) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x0008e751) single_mobtv_pg_channel_thumb_pane_g

0x2ab0,	// (0x000815b8) single_mobtv_pg_channel_thumb_pane_t1

0x2abe,	// (0x000815c6) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x0008e758) single_mobtv_pg_channel_thumb_pane_t

0x11ef,	// (0x0007fcf7) bg_single_mobtv_pg_channel_table_pane_g1

0x11ef,	// (0x0007fcf7) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x0008e208) bg_single_mobtv_pg_channel_table_pane_g

0x2acc,	// (0x000815d4) single_mobtv_pg_channel_table_pane_t1

0x2ada,	// (0x000815e2) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x0008e75d) single_mobtv_pg_channel_table_pane_t

0xc2b8,	// (0x0008adc0) main_mobtv_info_pane_g1_ParamLimits

0xc2b8,	// (0x0008adc0) main_mobtv_info_pane_g1

0xc2d4,	// (0x0008addc) main_mobtv_info_pane_t1_ParamLimits

0xc2d4,	// (0x0008addc) main_mobtv_info_pane_t1

0xc34c,	// (0x0008ae54) main_mobtv_info_pane_t2_ParamLimits

0xc34c,	// (0x0008ae54) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x0008e767) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x0008e767) main_mobtv_info_pane_t

0xc3db,	// (0x0008aee3) wait_bar_pane_cp05

0xc3ed,	// (0x0008aef5) main_mobtv_loading_pane_g1_ParamLimits

0xc3ed,	// (0x0008aef5) main_mobtv_loading_pane_g1

0xc3fb,	// (0x0008af03) main_mobtv_loading_pane_g2_ParamLimits

0xc3fb,	// (0x0008af03) main_mobtv_loading_pane_g2

0xc407,	// (0x0008af0f) main_mobtv_loading_pane_g3_ParamLimits

0xc407,	// (0x0008af0f) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x0008e76e) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x0008e76e) main_mobtv_loading_pane_g

0x2ae8,	// (0x000815f0) main_mobtv_loading_pane_t1_ParamLimits

0x2ae8,	// (0x000815f0) main_mobtv_loading_pane_t1

0x2b00,	// (0x00081608) main_mobtv_loading_pane_t2_ParamLimits

0x2b00,	// (0x00081608) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x0008e775) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x0008e775) main_mobtv_loading_pane_t

0xc415,	// (0x0008af1d) wait_bar_pane_cp06_ParamLimits

0xc415,	// (0x0008af1d) wait_bar_pane_cp06

0x2b24,	// (0x0008162c) main_mobtv_programe_curr_pane_t1

0x2b32,	// (0x0008163a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x0008e77a) main_mobtv_programe_curr_pane_t

0x2b40,	// (0x00081648) main_mobtv_programe_next_pane_t1

0x2b4e,	// (0x00081656) main_mobtv_programe_next_pane_t2

0x2b5c,	// (0x00081664) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x0008e77f) main_mobtv_programe_next_pane_t

0x01a3,	// (0x0007ecab) bg_popup_mobtv_noti_window_pane

0x2b6a,	// (0x00081672) popup_mobtv_noti_window_g1

0x2b72,	// (0x0008167a) popup_mobtv_noti_window_t1

0x2b80,	// (0x00081688) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x0008e786) popup_mobtv_noti_window_t

0x11ef,	// (0x0007fcf7) bg_popup_mobtv_noti_window_pane_g1

0x01a3,	// (0x0007ecab) sc_clock_pane

0x01a3,	// (0x0007ecab) main_fs_bigclock_pane

0xbb08,	// (0x0008a610) blid2_tripm_pane_t4_ParamLimits

0xbb08,	// (0x0008a610) blid2_tripm_pane_t4

0xc421,	// (0x0008af29) sc_clock_pane_g1_ParamLimits

0xc421,	// (0x0008af29) sc_clock_pane_g1

0xc42f,	// (0x0008af37) sc_clock_pane_t1_ParamLimits

0xc42f,	// (0x0008af37) sc_clock_pane_t1

0xc442,	// (0x0008af4a) sc_clock_pane_t2_ParamLimits

0xc442,	// (0x0008af4a) sc_clock_pane_t2

0xc454,	// (0x0008af5c) sc_clock_pane_t3_ParamLimits

0xc454,	// (0x0008af5c) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x0008e78b) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x0008e78b) sc_clock_pane_t

0xd178,	// (0x0008bc80) main_fs_bigclock_indicator_pane_ParamLimits

0xd178,	// (0x0008bc80) main_fs_bigclock_indicator_pane

0xc4dc,	// (0x0008afe4) main_fs_bigclock_pane_g1_ParamLimits

0xc4dc,	// (0x0008afe4) main_fs_bigclock_pane_g1

0xd184,	// (0x0008bc8c) main_fs_bigclock_pane_t1_ParamLimits

0xd184,	// (0x0008bc8c) main_fs_bigclock_pane_t1

0xd196,	// (0x0008bc9e) main_fs_bigclock_pane_t2_ParamLimits

0xd196,	// (0x0008bc9e) main_fs_bigclock_pane_t2

0xd1a8,	// (0x0008bcb0) main_fs_bigclock_pane_t3_ParamLimits

0xd1a8,	// (0x0008bcb0) main_fs_bigclock_pane_t3

0x0002,

0xfe82,	// (0x0008e98a) main_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x0008e98a) main_fs_bigclock_pane_t

0x3784,	// (0x0008228c) main_fs_bigclock_indicator_pane_g1

0x2854,	// (0x0008135c) ncim_query_content_pane_g2_ParamLimits

0x2854,	// (0x0008135c) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x0008e718) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x0008e718) ncim_query_content_pane_g

0xc468,	// (0x0008af70) sc_clock_pane_t4_ParamLimits

0xc468,	// (0x0008af70) sc_clock_pane_t4

0x3f9a,	// (0x00082aa2) main_radioblah_pane

0x1b9c,	// (0x000806a4) cell_call4_button_pane_t1_copy1_ParamLimits

0x1b9c,	// (0x000806a4) cell_call4_button_pane_t1_copy1

0xc10a,	// (0x0008ac12) main_ncimui_pane_t1_ParamLimits

0xc10a,	// (0x0008ac12) main_ncimui_pane_t1

0xc124,	// (0x0008ac2c) main_ncimui_pane_t2_ParamLimits

0xc124,	// (0x0008ac2c) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x0008e711) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x0008e711) main_ncimui_pane_t

0x2cb0,	// (0x000817b8) main_radioblah_anim_pane_ParamLimits

0x2cb0,	// (0x000817b8) main_radioblah_anim_pane

0x2cc1,	// (0x000817c9) main_radioblah_info_pane_ParamLimits

0x2cc1,	// (0x000817c9) main_radioblah_info_pane

0x2cd5,	// (0x000817dd) main_radioblah_pane_t1_ParamLimits

0x2cd5,	// (0x000817dd) main_radioblah_pane_t1

0x2cf1,	// (0x000817f9) main_radioblah_pane_t2_ParamLimits

0x2cf1,	// (0x000817f9) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x0008e7ac) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x0008e7ac) main_radioblah_pane_t

0xc52e,	// (0x0008b036) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc52e,	// (0x0008b036) main_radioblah_rocker_ctrl_pane

0x2d39,	// (0x00081841) main_radioblah_info_pane_t1_ParamLimits

0x2d39,	// (0x00081841) main_radioblah_info_pane_t1

0xc573,	// (0x0008b07b) main_radioblah_info_pane_t2_ParamLimits

0xc573,	// (0x0008b07b) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x0008e7b5) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x0008e7b5) main_radioblah_info_pane_t

0x11ef,	// (0x0007fcf7) main_radioblah_rocker_ctrl_pane_g1

0xc623,	// (0x0008b12b) main_radioblah_rocker_ctrl_pane_g2

0xc62b,	// (0x0008b133) main_radioblah_rocker_ctrl_pane_g3

0xc633,	// (0x0008b13b) main_radioblah_rocker_ctrl_pane_g4

0xc63b,	// (0x0008b143) main_radioblah_rocker_ctrl_pane_g5

0xc643,	// (0x0008b14b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x0008e7be) main_radioblah_rocker_ctrl_pane_g

0xc0bc,	// (0x0008abc4) main_cset_text2_pane_t1_copy1_ParamLimits

0xa6f6,	// (0x000891fe) cam4_image_uncrop_qvga_pane

0xa84b,	// (0x00089353) vid4_image_uncrop_qcif_pane

0xbc96,	// (0x0008a79e) cam6_image_uncrop_qvga_pane_ParamLimits

0xbc96,	// (0x0008a79e) cam6_image_uncrop_qvga_pane

0x24ba,	// (0x00080fc2) vid6_image_uncrop_qcif_pane_ParamLimits

0x24ba,	// (0x00080fc2) vid6_image_uncrop_qcif_pane

0x01a3,	// (0x0007ecab) bg_popup_preview_window_pane_cp03

0x2806,	// (0x0008130e) list_cset_text2_pane

0x280e,	// (0x00081316) main_cset6_text2_pane_g1

0x2816,	// (0x0008131e) main_cset6_text2_pane_t1

0xc64b,	// (0x0008b153) list_cset_text2_pane_t1_ParamLimits

0xc64b,	// (0x0008b153) list_cset_text2_pane_t1

0x3f9a,	// (0x00082aa2) main_radioblah_pane_ParamLimits

0xc3c7,	// (0x0008aecf) main_mobtv_info_pane_t3_ParamLimits

0xc3c7,	// (0x0008aecf) main_mobtv_info_pane_t3

0xc51c,	// (0x0008b024) main_radioblah_pane_g1

0xc547,	// (0x0008b04f) main_radioblah_info_pane_g1

0xc5c8,	// (0x0008b0d0) main_radioblah_info_pane_t3_ParamLimits

0xc5c8,	// (0x0008b0d0) main_radioblah_info_pane_t3

0x7422,	// (0x00085f2a) highlight_cell_cale_month_pane_ParamLimits

0x7422,	// (0x00085f2a) highlight_cell_cale_month_pane

0x01a3,	// (0x0007ecab) main_phob_fisheye_pane

0x1570,	// (0x00080078) scroll_pane_cp0031_ParamLimits

0x1570,	// (0x00080078) scroll_pane_cp0031

0x25c8,	// (0x000810d0) wait_bar_pane_cp08_ParamLimits

0xbea8,	// (0x0008a9b0) cset_list_set_pane_copy1_ParamLimits

0x2d73,	// (0x0008187b) highlight_cell_cale_month_pane_g1

0xc676,	// (0x0008b17e) highlight_cell_cale_month_pane_t1

0x2202,	// (0x00080d0a) list_gen_pane_cp01

0x1da2,	// (0x000808aa) scroll_pane_01

0xc684,	// (0x0008b18c) list_single_double_fisheye_pane

0xc68d,	// (0x0008b195) list_double_fisheye_pane_g1_ParamLimits

0xc68d,	// (0x0008b195) list_double_fisheye_pane_g1

0xc699,	// (0x0008b1a1) list_double_fisheye_pane_g2_ParamLimits

0xc699,	// (0x0008b1a1) list_double_fisheye_pane_g2

0xc6ad,	// (0x0008b1b5) list_double_fisheye_pane_g3_ParamLimits

0xc6ad,	// (0x0008b1b5) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x0008e7cb) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x0008e7cb) list_double_fisheye_pane_g

0xc6d6,	// (0x0008b1de) list_double_fisheye_pane_t1_ParamLimits

0xc6d6,	// (0x0008b1de) list_double_fisheye_pane_t1

0xc6f1,	// (0x0008b1f9) list_double_fisheye_pane_t2_ParamLimits

0xc6f1,	// (0x0008b1f9) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x0008e7d6) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x0008e7d6) list_double_fisheye_pane_t

0x01a3,	// (0x0007ecab) main_call5_pane

0xc48e,	// (0x0008af96) sc_swipe_pane_ParamLimits

0xc48e,	// (0x0008af96) sc_swipe_pane

0xc71f,	// (0x0008b227) call5_image_pane_ParamLimits

0xc71f,	// (0x0008b227) call5_image_pane

0xc72f,	// (0x0008b237) call5_swipe_1_pane_ParamLimits

0xc72f,	// (0x0008b237) call5_swipe_1_pane

0xc73b,	// (0x0008b243) call5_swipe_2_pane_ParamLimits

0xc73b,	// (0x0008b243) call5_swipe_2_pane

0xc755,	// (0x0008b25d) popup_call5_audio_first_window_ParamLimits

0xc755,	// (0x0008b25d) popup_call5_audio_first_window

0x1456,	// (0x0007ff5e) call5_swipe_1_pane_g1_ParamLimits

0x1456,	// (0x0007ff5e) call5_swipe_1_pane_g1

0x2d7b,	// (0x00081883) call5_swipe_1_pane_g2_ParamLimits

0x2d7b,	// (0x00081883) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x0008e7db) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x0008e7db) call5_swipe_1_pane_g

0x2d87,	// (0x0008188f) call5_swipe_1_pane_t1_ParamLimits

0x2d87,	// (0x0008188f) call5_swipe_1_pane_t1

0x1456,	// (0x0007ff5e) call5_swipe_2_pane_g1_ParamLimits

0x1456,	// (0x0007ff5e) call5_swipe_2_pane_g1

0x2d9c,	// (0x000818a4) call5_swipe_2_pane_g2_ParamLimits

0x2d9c,	// (0x000818a4) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x0008e7e0) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x0008e7e0) call5_swipe_2_pane_g

0x2da8,	// (0x000818b0) call5_swipe_2_pane_t1_ParamLimits

0x2da8,	// (0x000818b0) call5_swipe_2_pane_t1

0x2dbd,	// (0x000818c5) sc_swipe_pane_g1_ParamLimits

0x2dbd,	// (0x000818c5) sc_swipe_pane_g1

0x2dca,	// (0x000818d2) sc_swipe_pane_g2_ParamLimits

0x2dca,	// (0x000818d2) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x0008e7e5) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x0008e7e5) sc_swipe_pane_g

0x2dd6,	// (0x000818de) sc_swipe_pane_t1_ParamLimits

0x2dd6,	// (0x000818de) sc_swipe_pane_t1

0x01a3,	// (0x0007ecab) main_cmail_launcher_pane

0xc763,	// (0x0008b26b) aid_size_cell_cmail_l_ParamLimits

0xc763,	// (0x0008b26b) aid_size_cell_cmail_l

0xc773,	// (0x0008b27b) grid_cmail_l_pane_ParamLimits

0xc773,	// (0x0008b27b) grid_cmail_l_pane

0xc783,	// (0x0008b28b) cell_cmail_l_pane_ParamLimits

0xc783,	// (0x0008b28b) cell_cmail_l_pane

0xc797,	// (0x0008b29f) cell_cmail_l_pane_g1_ParamLimits

0xc797,	// (0x0008b29f) cell_cmail_l_pane_g1

0xc7a3,	// (0x0008b2ab) cell_cmail_l_pane_t1_ParamLimits

0xc7a3,	// (0x0008b2ab) cell_cmail_l_pane_t1

0x2deb,	// (0x000818f3) cell_cmail_l_pane_t2_ParamLimits

0x2deb,	// (0x000818f3) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x0008e7ea) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x0008e7ea) cell_cmail_l_pane_t

0x3f9a,	// (0x00082aa2) grid_highlight_pane_cp018_ParamLimits

0x3f9a,	// (0x00082aa2) grid_highlight_pane_cp018

0x5762,	// (0x0008426a) main2_pane_ParamLimits

0x5762,	// (0x0008426a) main2_pane

0xda6d,	// (0x0008c575) popup_sp_fs_action_menu_bg_pane_g1

0xda75,	// (0x0008c57d) popup_sp_fs_action_menu_bg_pane_g2

0xda7d,	// (0x0008c585) popup_sp_fs_action_menu_bg_pane_g3

0xda85,	// (0x0008c58d) popup_sp_fs_action_menu_bg_pane_g4

0xda8d,	// (0x0008c595) popup_sp_fs_action_menu_bg_pane_g5

0xda95,	// (0x0008c59d) popup_sp_fs_action_menu_bg_pane_g6

0xda9d,	// (0x0008c5a5) popup_sp_fs_action_menu_bg_pane_g7

0xdaa5,	// (0x0008c5ad) popup_sp_fs_action_menu_bg_pane_g8

0xdaad,	// (0x0008c5b5) popup_sp_fs_action_menu_bg_pane_g9

0xdab5,	// (0x0008c5bd) popup_sp_fs_action_menu_bg_pane_g10

0xdab5,	// (0x0008c5bd) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0008dcb4) popup_sp_fs_action_menu_bg_pane_g

0x030f,	// (0x0007ee17) list_medium_line_x2_t3_g3_g1_ParamLimits

0x030f,	// (0x0007ee17) list_medium_line_x2_t3_g3_g1

0x031b,	// (0x0007ee23) list_medium_line_x2_t3_g3_g2_ParamLimits

0x031b,	// (0x0007ee23) list_medium_line_x2_t3_g3_g2

0x0327,	// (0x0007ee2f) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0327,	// (0x0007ee2f) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0008dd64) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0008dd64) list_medium_line_x2_t3_g3_g

0x0333,	// (0x0007ee3b) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0333,	// (0x0007ee3b) list_medium_line_x2_t3_g3_t1

0x6545,	// (0x0008504d) list_medium_line_x2_t3_g3_t2_ParamLimits

0x6545,	// (0x0008504d) list_medium_line_x2_t3_g3_t2

0x0348,	// (0x0007ee50) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0348,	// (0x0007ee50) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0008dd6b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0008dd6b) list_medium_line_x2_t3_g3_t

0x030f,	// (0x0007ee17) list_medium_line_x2_t3_g2_g1_ParamLimits

0x030f,	// (0x0007ee17) list_medium_line_x2_t3_g2_g1

0x0327,	// (0x0007ee2f) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0327,	// (0x0007ee2f) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0008dd72) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0008dd72) list_medium_line_x2_t3_g2_g

0x035d,	// (0x0007ee65) list_medium_line_x2_t3_g2_t1_ParamLimits

0x035d,	// (0x0007ee65) list_medium_line_x2_t3_g2_t1

0x0373,	// (0x0007ee7b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0373,	// (0x0007ee7b) list_medium_line_x2_t3_g2_t2

0x0385,	// (0x0007ee8d) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0385,	// (0x0007ee8d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0008dd77) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0008dd77) list_medium_line_x2_t3_g2_t

0x030f,	// (0x0007ee17) list_medium_line_x2_t4_g4_g1_ParamLimits

0x030f,	// (0x0007ee17) list_medium_line_x2_t4_g4_g1

0x03a3,	// (0x0007eeab) list_medium_line_x2_t4_g4_g2_ParamLimits

0x03a3,	// (0x0007eeab) list_medium_line_x2_t4_g4_g2

0x031b,	// (0x0007ee23) list_medium_line_x2_t4_g4_g3_ParamLimits

0x031b,	// (0x0007ee23) list_medium_line_x2_t4_g4_g3

0x03af,	// (0x0007eeb7) list_medium_line_x2_t4_g4_g4_ParamLimits

0x03af,	// (0x0007eeb7) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0008dd7e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0008dd7e) list_medium_line_x2_t4_g4_g

0x6557,	// (0x0008505f) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6557,	// (0x0008505f) list_medium_line_x2_t4_g4_t1

0x656e,	// (0x00085076) list_medium_line_x2_t4_g4_t2_ParamLimits

0x656e,	// (0x00085076) list_medium_line_x2_t4_g4_t2

0x6583,	// (0x0008508b) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6583,	// (0x0008508b) list_medium_line_x2_t4_g4_t3

0x03bb,	// (0x0007eec3) list_medium_line_x2_t4_g4_t4_ParamLimits

0x03bb,	// (0x0007eec3) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0008dd87) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0008dd87) list_medium_line_x2_t4_g4_t

0x030f,	// (0x0007ee17) list_medium_line_x2_t2_g4_g1_ParamLimits

0x030f,	// (0x0007ee17) list_medium_line_x2_t2_g4_g1

0x03a3,	// (0x0007eeab) list_medium_line_x2_t2_g4_g2_ParamLimits

0x03a3,	// (0x0007eeab) list_medium_line_x2_t2_g4_g2

0x031b,	// (0x0007ee23) list_medium_line_x2_t2_g4_g3_ParamLimits

0x031b,	// (0x0007ee23) list_medium_line_x2_t2_g4_g3

0x0327,	// (0x0007ee2f) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0327,	// (0x0007ee2f) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0008ddee) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0008ddee) list_medium_line_x2_t2_g4_g

0x03cd,	// (0x0007eed5) list_medium_line_x2_t2_g4_t1_ParamLimits

0x03cd,	// (0x0007eed5) list_medium_line_x2_t2_g4_t1

0x0348,	// (0x0007ee50) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0348,	// (0x0007ee50) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0008ddf7) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0008ddf7) list_medium_line_x2_t2_g4_t

0x030f,	// (0x0007ee17) list_medium_line_x2_t2_g3_g1_ParamLimits

0x030f,	// (0x0007ee17) list_medium_line_x2_t2_g3_g1

0x031b,	// (0x0007ee23) list_medium_line_x2_t2_g3_g2_ParamLimits

0x031b,	// (0x0007ee23) list_medium_line_x2_t2_g3_g2

0x0327,	// (0x0007ee2f) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0327,	// (0x0007ee2f) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0008dd64) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0008dd64) list_medium_line_x2_t2_g3_g

0x03e2,	// (0x0007eeea) list_medium_line_x2_t2_g3_t1_ParamLimits

0x03e2,	// (0x0007eeea) list_medium_line_x2_t2_g3_t1

0x0348,	// (0x0007ee50) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0348,	// (0x0007ee50) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0008ddfc) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0008ddfc) list_medium_line_x2_t2_g3_t

0x769e,	// (0x000861a6) main_sp_fs_list_pane_ParamLimits

0x769e,	// (0x000861a6) main_sp_fs_list_pane

0x76aa,	// (0x000861b2) sp_fs_scroll_pane_ParamLimits

0x76aa,	// (0x000861b2) sp_fs_scroll_pane

0x76b6,	// (0x000861be) list_medium_line_x2_t3_t1

0x76c6,	// (0x000861ce) list_medium_line_x2_t3_t2

0x0425,	// (0x0007ef2d) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0008de47) list_medium_line_x2_t3_t

0x76d4,	// (0x000861dc) list_medium_line_x3_t4_t1

0x76e4,	// (0x000861ec) list_medium_line_x3_t4_t2

0x0433,	// (0x0007ef3b) list_medium_line_x3_t4_t3

0x0425,	// (0x0007ef2d) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0008de4e) list_medium_line_x3_t4_t

0x76f2,	// (0x000861fa) list_medium_line_x4_t5_t1

0x7702,	// (0x0008620a) list_medium_line_x4_t5_t2

0x0433,	// (0x0007ef3b) list_medium_line_x4_t5_t3

0x0441,	// (0x0007ef49) list_medium_line_x4_t5_t4

0x0425,	// (0x0007ef2d) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0008de57) list_medium_line_x4_t5_t

0x030f,	// (0x0007ee17) list_medium_line_t4_g4_g1_ParamLimits

0x030f,	// (0x0007ee17) list_medium_line_t4_g4_g1

0x03af,	// (0x0007eeb7) list_medium_line_t4_g4_g2_ParamLimits

0x03af,	// (0x0007eeb7) list_medium_line_t4_g4_g2

0x044f,	// (0x0007ef57) list_medium_line_t4_g4_g3_ParamLimits

0x044f,	// (0x0007ef57) list_medium_line_t4_g4_g3

0x0327,	// (0x0007ee2f) list_medium_line_t4_g4_g4_ParamLimits

0x0327,	// (0x0007ee2f) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0008de62) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0008de62) list_medium_line_t4_g4_g

0x045b,	// (0x0007ef63) list_medium_line_t4_g4_t1_ParamLimits

0x045b,	// (0x0007ef63) list_medium_line_t4_g4_t1

0x0470,	// (0x0007ef78) list_medium_line_t4_g4_t2_ParamLimits

0x0470,	// (0x0007ef78) list_medium_line_t4_g4_t2

0x0486,	// (0x0007ef8e) list_medium_line_t4_g4_t3_ParamLimits

0x0486,	// (0x0007ef8e) list_medium_line_t4_g4_t3

0x0348,	// (0x0007ee50) list_medium_line_t4_g4_t4_ParamLimits

0x0348,	// (0x0007ee50) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0008de6b) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0008de6b) list_medium_line_t4_g4_t

0x77f7,	// (0x000862ff) chi_dic_find_pane_g1

0x884c,	// (0x00087354) main_tport_pane

0x1ec7,	// (0x000809cf) list_medium_line_plain_t1

0x1edd,	// (0x000809e5) list_medium_line_t2_g2_g1_ParamLimits

0x1edd,	// (0x000809e5) list_medium_line_t2_g2_g1

0x1ee9,	// (0x000809f1) list_medium_line_t2_g2_g2_ParamLimits

0x1ee9,	// (0x000809f1) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x0008e527) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x0008e527) list_medium_line_t2_g2_g

0xb31d,	// (0x00089e25) list_medium_line_t2_g2_t1_ParamLimits

0xb31d,	// (0x00089e25) list_medium_line_t2_g2_t1

0xb337,	// (0x00089e3f) list_medium_line_t2_g2_t2_ParamLimits

0xb337,	// (0x00089e3f) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x0008e52c) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x0008e52c) list_medium_line_t2_g2_t

0x220b,	// (0x00080d13) aid_sp_fs_list_icon_a_sm

0x3f4a,	// (0x00082a52) aid_sp_fs_list_icon_d

0x2213,	// (0x00080d1b) aid_sp_fs_text_primary

0x221c,	// (0x00080d24) aid_sp_fs_text_secondary

0x2225,	// (0x00080d2d) list_medium_line

0x2225,	// (0x00080d2d) list_medium_line_g2

0x2225,	// (0x00080d2d) list_medium_line_g3

0x2225,	// (0x00080d2d) list_medium_line_plain

0x2225,	// (0x00080d2d) list_medium_line_plain_t2

0x2225,	// (0x00080d2d) list_medium_line_plain_t3

0x2225,	// (0x00080d2d) list_medium_line_right_icon

0x2225,	// (0x00080d2d) list_medium_line_right_iconx2

0x2225,	// (0x00080d2d) list_medium_line_t2

0x2225,	// (0x00080d2d) list_medium_line_t2_g2

0x2225,	// (0x00080d2d) list_medium_line_t2_g3

0x2225,	// (0x00080d2d) list_medium_line_t2_right_icon

0x2225,	// (0x00080d2d) list_medium_line_t2_right_iconx2

0x2225,	// (0x00080d2d) list_medium_line_t3

0x2225,	// (0x00080d2d) list_medium_line_t3_g2

0x2225,	// (0x00080d2d) list_medium_line_t3_g3

0x2225,	// (0x00080d2d) list_medium_line_t3_right_iconx2

0x222e,	// (0x00080d36) list_medium_line_t4_g4

0x4067,	// (0x00082b6f) list_medium_line_x2

0x4067,	// (0x00082b6f) list_medium_line_x2_t2_g2

0x4067,	// (0x00082b6f) list_medium_line_x2_t2_g3

0x4067,	// (0x00082b6f) list_medium_line_x2_t2_g4

0x4067,	// (0x00082b6f) list_medium_line_x2_t3

0x4067,	// (0x00082b6f) list_medium_line_x2_t3_g2

0x4067,	// (0x00082b6f) list_medium_line_x2_t3_g3

0x4067,	// (0x00082b6f) list_medium_line_x2_t3_g4

0x4067,	// (0x00082b6f) list_medium_line_x2_t4_g2

0x4067,	// (0x00082b6f) list_medium_line_x2_t4_g4

0x2237,	// (0x00080d3f) list_medium_line_x3

0x2237,	// (0x00080d3f) list_medium_line_x3_t4

0x2237,	// (0x00080d3f) list_medium_line_x3_t4_g4

0x222e,	// (0x00080d36) list_medium_line_x4_t4

0x222e,	// (0x00080d36) list_medium_line_x4_t4_g7

0x222e,	// (0x00080d36) list_medium_line_x4_t5

0x2240,	// (0x00080d48) list_single_fs_dyc_pane_ParamLimits

0x2240,	// (0x00080d48) list_single_fs_dyc_pane

0x030f,	// (0x0007ee17) list_medium_line_x4_t4_g7_g1_ParamLimits

0x030f,	// (0x0007ee17) list_medium_line_x4_t4_g7_g1

0x2735,	// (0x0008123d) list_medium_line_x4_t4_g7_g2_ParamLimits

0x2735,	// (0x0008123d) list_medium_line_x4_t4_g7_g2

0x2741,	// (0x00081249) list_medium_line_x4_t4_g7_g3_ParamLimits

0x2741,	// (0x00081249) list_medium_line_x4_t4_g7_g3

0x2750,	// (0x00081258) list_medium_line_x4_t4_g7_g4_ParamLimits

0x2750,	// (0x00081258) list_medium_line_x4_t4_g7_g4

0x275c,	// (0x00081264) list_medium_line_x4_t4_g7_g5_ParamLimits

0x275c,	// (0x00081264) list_medium_line_x4_t4_g7_g5

0x276b,	// (0x00081273) list_medium_line_x4_t4_g7_g6_ParamLimits

0x276b,	// (0x00081273) list_medium_line_x4_t4_g7_g6

0x277a,	// (0x00081282) list_medium_line_x4_t4_g7_g7_ParamLimits

0x277a,	// (0x00081282) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x0008e6f7) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x0008e6f7) list_medium_line_x4_t4_g7_g

0x2786,	// (0x0008128e) list_medium_line_x4_t4_g7_t1_ParamLimits

0x2786,	// (0x0008128e) list_medium_line_x4_t4_g7_t1

0x279b,	// (0x000812a3) list_medium_line_x4_t4_g7_t2_ParamLimits

0x279b,	// (0x000812a3) list_medium_line_x4_t4_g7_t2

0x27b0,	// (0x000812b8) list_medium_line_x4_t4_g7_t3_ParamLimits

0x27b0,	// (0x000812b8) list_medium_line_x4_t4_g7_t3

0x27c5,	// (0x000812cd) list_medium_line_x4_t4_g7_t4_ParamLimits

0x27c5,	// (0x000812cd) list_medium_line_x4_t4_g7_t4

0x27d7,	// (0x000812df) list_medium_line_x4_t4_g7_t5_ParamLimits

0x27d7,	// (0x000812df) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x0008e706) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x0008e706) list_medium_line_x4_t4_g7_t

0x27e9,	// (0x000812f1) list_single_dyc_row_pane_ParamLimits

0x27e9,	// (0x000812f1) list_single_dyc_row_pane

0xc713,	// (0x0008b21b) call5_gesture_pane_ParamLimits

0xc713,	// (0x0008b21b) call5_gesture_pane

0xc747,	// (0x0008b24f) call5_windows_pane_ParamLimits

0xc747,	// (0x0008b24f) call5_windows_pane

0xc7b9,	// (0x0008b2c1) call5_swipe_1_pane_cp_ParamLimits

0xc7b9,	// (0x0008b2c1) call5_swipe_1_pane_cp

0xc7c5,	// (0x0008b2cd) call5_swipe_2_pane_cp_ParamLimits

0xc7c5,	// (0x0008b2cd) call5_swipe_2_pane_cp

0xe44a,	// (0x0008cf52) call5_image_pane_cp

0xc7d1,	// (0x0008b2d9) popup_call5_audio_first_window_cp_ParamLimits

0xc7d1,	// (0x0008b2d9) popup_call5_audio_first_window_cp

0x2dbd,	// (0x000818c5) call5_swipe_1_pane_g1_cp_ParamLimits

0x2dbd,	// (0x000818c5) call5_swipe_1_pane_g1_cp

0x2dfd,	// (0x00081905) call5_swipe_1_pane_g2_cp

0x2dd6,	// (0x000818de) call5_swipe_1_pane_t1_cp_ParamLimits

0x2dd6,	// (0x000818de) call5_swipe_1_pane_t1_cp

0x2dbd,	// (0x000818c5) call5_swipe_2_pane_g1_cp_ParamLimits

0x2dbd,	// (0x000818c5) call5_swipe_2_pane_g1_cp

0x2e05,	// (0x0008190d) call5_swipe_2_pane_g2_cp

0x2e0d,	// (0x00081915) call5_swipe_2_pane_t1_cp_ParamLimits

0x2e0d,	// (0x00081915) call5_swipe_2_pane_t1_cp

0x3f9a,	// (0x00082aa2) main_sp_fs_email_pane

0x2e22,	// (0x0008192a) main_sp_fs_listscroll_pane_te

0x2e2b,	// (0x00081933) popup_sp_fs_action_menu_pane_ParamLimits

0x2e2b,	// (0x00081933) popup_sp_fs_action_menu_pane

0x11ef,	// (0x0007fcf7) bg_sp_fs_ctrlbar_pane_g1

0x2e6d,	// (0x00081975) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x2e76,	// (0x0008197e) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2e7f,	// (0x00081987) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x11ef,	// (0x0007fcf7) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x0008e7ef) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x0fd2,	// (0x0007fada) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x0fd2,	// (0x0007fada) bg_sp_fs_ctrlbar_ddmenu_pane

0x2e88,	// (0x00081990) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x2e88,	// (0x00081990) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x2e94,	// (0x0008199c) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x2e94,	// (0x0008199c) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x0008e7f8) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x0008e7f8) main_sp_fs_ctrlbar_ddmenu_pane_g

0x2ea0,	// (0x000819a8) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x2ea0,	// (0x000819a8) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x2eba,	// (0x000819c2) list_medium_line_t2_right_icon_g1

0xc7dd,	// (0x0008b2e5) list_medium_line_t2_right_icon_t1

0xc7ed,	// (0x0008b2f5) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x0008e7fd) list_medium_line_t2_right_icon_t

0x0ce7,	// (0x0007f7ef) bg_sp_fs_ctrlbar_pane_ParamLimits

0x0ce7,	// (0x0007f7ef) bg_sp_fs_ctrlbar_pane

0xc852,	// (0x0008b35a) main_sp_fs_ctrlbar_button_pane_cp01

0xc85a,	// (0x0008b362) main_sp_fs_ctrlbar_ddmenu_pane

0x2efa,	// (0x00081a02) main_sp_fs_ctrlbar_pane_g1

0x2f06,	// (0x00081a0e) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x0008e802) main_sp_fs_ctrlbar_pane_g

0x2f12,	// (0x00081a1a) main_sp_fs_ctrlbar_pane_t1

0xc864,	// (0x0008b36c) main_sp_fs_ctrlbar_pane

0xc880,	// (0x0008b388) main_sp_fs_listscroll_pane_te_cp01

0xc891,	// (0x0008b399) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc891,	// (0x0008b399) popup_sp_fs_action_menu_pane_cp01

0x3f9a,	// (0x00082aa2) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x3f9a,	// (0x00082aa2) bg_sp_fs_highlight_list_pane_cp01

0x2f27,	// (0x00081a2f) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x2f27,	// (0x00081a2f) sp_fs_action_menu_list_gene_pane_g1

0x2f36,	// (0x00081a3e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x2f36,	// (0x00081a3e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x0008e807) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x0008e807) sp_fs_action_menu_list_gene_pane_g

0x2f43,	// (0x00081a4b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x2f43,	// (0x00081a4b) sp_fs_action_menu_list_gene_pane_t1

0x2f5b,	// (0x00081a63) sp_fs_action_menu_list_gene_pane_ParamLimits

0x2f5b,	// (0x00081a63) sp_fs_action_menu_list_gene_pane

0x2f7a,	// (0x00081a82) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x2f7a,	// (0x00081a82) popup_sp_fs_action_menu_bg_pane

0x2f88,	// (0x00081a90) sp_fs_action_menu_list_pane_ParamLimits

0x2f88,	// (0x00081a90) sp_fs_action_menu_list_pane

0x2fa8,	// (0x00081ab0) sp_fs_scroll_pane_cp01_ParamLimits

0x2fa8,	// (0x00081ab0) sp_fs_scroll_pane_cp01

0xc8a9,	// (0x0008b3b1) list_medium_line_plain_t2_t1

0xc8b9,	// (0x0008b3c1) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0008e80c) list_medium_line_plain_t2_t

0xc8c7,	// (0x0008b3cf) list_medium_line_plain_t3_t1

0xc8d7,	// (0x0008b3df) list_medium_line_plain_t3_t2

0xc8e5,	// (0x0008b3ed) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0008e811) list_medium_line_plain_t3_t

0x030f,	// (0x0007ee17) list_medium_line_x2_t2_g2_g1_ParamLimits

0x030f,	// (0x0007ee17) list_medium_line_x2_t2_g2_g1

0x0327,	// (0x0007ee2f) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0327,	// (0x0007ee2f) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0008dd72) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0008dd72) list_medium_line_x2_t2_g2_g

0x045b,	// (0x0007ef63) list_medium_line_x2_t2_g2_t1_ParamLimits

0x045b,	// (0x0007ef63) list_medium_line_x2_t2_g2_t1

0x0348,	// (0x0007ee50) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0348,	// (0x0007ee50) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x0008e818) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x0008e818) list_medium_line_x2_t2_g2_t

0x030f,	// (0x0007ee17) list_medium_line_x2_t4_g2_g1_ParamLimits

0x030f,	// (0x0007ee17) list_medium_line_x2_t4_g2_g1

0x2fce,	// (0x00081ad6) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2fce,	// (0x00081ad6) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd15,	// (0x0008e81d) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd15,	// (0x0008e81d) list_medium_line_x2_t4_g2_g

0xc8f3,	// (0x0008b3fb) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc8f3,	// (0x0008b3fb) list_medium_line_x2_t4_g2_t1

0xc90a,	// (0x0008b412) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc90a,	// (0x0008b412) list_medium_line_x2_t4_g2_t2

0xc91f,	// (0x0008b427) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc91f,	// (0x0008b427) list_medium_line_x2_t4_g2_t3

0x0348,	// (0x0007ee50) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0348,	// (0x0007ee50) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1a,	// (0x0008e822) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1a,	// (0x0008e822) list_medium_line_x2_t4_g2_t

0x2fe0,	// (0x00081ae8) list_medium_line_t3_right_iconx2_g1

0x2eba,	// (0x000819c2) list_medium_line_t3_right_iconx2_g2

0xc931,	// (0x0008b439) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd23,	// (0x0008e82b) list_medium_line_t3_right_iconx2_g

0xc939,	// (0x0008b441) list_medium_line_t3_right_iconx2_t1

0xc949,	// (0x0008b451) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2a,	// (0x0008e832) list_medium_line_t3_right_iconx2_t

0x030f,	// (0x0007ee17) list_medium_line_x3_t4_g4_g1_ParamLimits

0x030f,	// (0x0007ee17) list_medium_line_x3_t4_g4_g1

0x031b,	// (0x0007ee23) list_medium_line_x3_t4_g4_g2_ParamLimits

0x031b,	// (0x0007ee23) list_medium_line_x3_t4_g4_g2

0x03af,	// (0x0007eeb7) list_medium_line_x3_t4_g4_g3_ParamLimits

0x03af,	// (0x0007eeb7) list_medium_line_x3_t4_g4_g3

0x2fe8,	// (0x00081af0) list_medium_line_x3_t4_g4_g4_ParamLimits

0x2fe8,	// (0x00081af0) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2f,	// (0x0008e837) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2f,	// (0x0008e837) list_medium_line_x3_t4_g4_g

0xc957,	// (0x0008b45f) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc957,	// (0x0008b45f) list_medium_line_x3_t4_g4_t1

0xc96e,	// (0x0008b476) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc96e,	// (0x0008b476) list_medium_line_x3_t4_g4_t2

0x2ff4,	// (0x00081afc) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2ff4,	// (0x00081afc) list_medium_line_x3_t4_g4_t3

0x3009,	// (0x00081b11) list_medium_line_x3_t4_g4_t4_ParamLimits

0x3009,	// (0x00081b11) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd38,	// (0x0008e840) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd38,	// (0x0008e840) list_medium_line_x3_t4_g4_t

0xc983,	// (0x0008b48b) list_single_dyc_row_text_pane_t1_ParamLimits

0xc983,	// (0x0008b48b) list_single_dyc_row_text_pane_t1

0xc9ba,	// (0x0008b4c2) list_single_dyc_row_text_pane_t2_ParamLimits

0xc9ba,	// (0x0008b4c2) list_single_dyc_row_text_pane_t2

0x3026,	// (0x00081b2e) list_single_dyc_row_text_pane_t3_ParamLimits

0x3026,	// (0x00081b2e) list_single_dyc_row_text_pane_t3

0x0002,

0xfd41,	// (0x0008e849) list_single_dyc_row_text_pane_t_ParamLimits

0xfd41,	// (0x0008e849) list_single_dyc_row_text_pane_t

0x3038,	// (0x00081b40) list_single_dyc_row_pane_g1_ParamLimits

0x3038,	// (0x00081b40) list_single_dyc_row_pane_g1

0x3044,	// (0x00081b4c) list_single_dyc_row_pane_g2_ParamLimits

0x3044,	// (0x00081b4c) list_single_dyc_row_pane_g2

0x3050,	// (0x00081b58) list_single_dyc_row_pane_g3_ParamLimits

0x3050,	// (0x00081b58) list_single_dyc_row_pane_g3

0x305c,	// (0x00081b64) list_single_dyc_row_pane_g4_ParamLimits

0x305c,	// (0x00081b64) list_single_dyc_row_pane_g4

0x0003,

0xfd48,	// (0x0008e850) list_single_dyc_row_pane_g_ParamLimits

0xfd48,	// (0x0008e850) list_single_dyc_row_pane_g

0x3068,	// (0x00081b70) list_single_dyc_row_text_pane_ParamLimits

0x3068,	// (0x00081b70) list_single_dyc_row_text_pane

0x01a3,	// (0x0007ecab) bg_sp_fs_scroll_pane

0x3087,	// (0x00081b8f) thumb_sp_fs_scroll_pane

0x1edd,	// (0x000809e5) list_medium_line_g1_ParamLimits

0x1edd,	// (0x000809e5) list_medium_line_g1

0x3090,	// (0x00081b98) list_medium_line_t1_ParamLimits

0x3090,	// (0x00081b98) list_medium_line_t1

0x030f,	// (0x0007ee17) list_medium_line_x2_g1_ParamLimits

0x030f,	// (0x0007ee17) list_medium_line_x2_g1

0x031b,	// (0x0007ee23) list_medium_line_x2_g2_ParamLimits

0x031b,	// (0x0007ee23) list_medium_line_x2_g2

0x0001,

0xfd51,	// (0x0008e859) list_medium_line_x2_g_ParamLimits

0xfd51,	// (0x0008e859) list_medium_line_x2_g

0x30a5,	// (0x00081bad) list_medium_line_x2_t1_ParamLimits

0x30a5,	// (0x00081bad) list_medium_line_x2_t1

0x030f,	// (0x0007ee17) list_medium_line_x3_g1_ParamLimits

0x030f,	// (0x0007ee17) list_medium_line_x3_g1

0x031b,	// (0x0007ee23) list_medium_line_x3_g2_ParamLimits

0x031b,	// (0x0007ee23) list_medium_line_x3_g2

0x0001,

0xfd51,	// (0x0008e859) list_medium_line_x3_g_ParamLimits

0xfd51,	// (0x0008e859) list_medium_line_x3_g

0x30a5,	// (0x00081bad) list_medium_line_x3_t1_ParamLimits

0x30a5,	// (0x00081bad) list_medium_line_x3_t1

0x30bb,	// (0x00081bc3) thumb_sp_fs_scroll_pane_g1

0x30c4,	// (0x00081bcc) thumb_sp_fs_scroll_pane_g2

0x30cd,	// (0x00081bd5) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x0008e85e) thumb_sp_fs_scroll_pane_g

0x30bb,	// (0x00081bc3) bg_sp_fs_scroll_pane_g1

0x30c4,	// (0x00081bcc) bg_sp_fs_scroll_pane_g2

0x30cd,	// (0x00081bd5) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x0008e85e) bg_sp_fs_scroll_pane_g

0x030f,	// (0x0007ee17) list_medium_line_x2_t3_g4_g1_ParamLimits

0x030f,	// (0x0007ee17) list_medium_line_x2_t3_g4_g1

0x03a3,	// (0x0007eeab) list_medium_line_x2_t3_g4_g2_ParamLimits

0x03a3,	// (0x0007eeab) list_medium_line_x2_t3_g4_g2

0x031b,	// (0x0007ee23) list_medium_line_x2_t3_g4_g3_ParamLimits

0x031b,	// (0x0007ee23) list_medium_line_x2_t3_g4_g3

0x0327,	// (0x0007ee2f) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0327,	// (0x0007ee2f) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0008ddee) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0008ddee) list_medium_line_x2_t3_g4_g

0xca14,	// (0x0008b51c) list_medium_line_x2_t3_g4_t1_ParamLimits

0xca14,	// (0x0008b51c) list_medium_line_x2_t3_g4_t1

0xca2a,	// (0x0008b532) list_medium_line_x2_t3_g4_t2_ParamLimits

0xca2a,	// (0x0008b532) list_medium_line_x2_t3_g4_t2

0x0348,	// (0x0007ee50) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0348,	// (0x0007ee50) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5d,	// (0x0008e865) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5d,	// (0x0008e865) list_medium_line_x2_t3_g4_t

0x1edd,	// (0x000809e5) list_medium_line_g2_g1_ParamLimits

0x1edd,	// (0x000809e5) list_medium_line_g2_g1

0x1ee9,	// (0x000809f1) list_medium_line_g2_g2_ParamLimits

0x1ee9,	// (0x000809f1) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x0008e527) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x0008e527) list_medium_line_g2_g

0x30d6,	// (0x00081bde) list_medium_line_g2_t1_ParamLimits

0x30d6,	// (0x00081bde) list_medium_line_g2_t1

0x1edd,	// (0x000809e5) list_medium_line_t3_g2_g1_ParamLimits

0x1edd,	// (0x000809e5) list_medium_line_t3_g2_g1

0x1ee9,	// (0x000809f1) list_medium_line_t3_g2_g2_ParamLimits

0x1ee9,	// (0x000809f1) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x0008e527) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x0008e527) list_medium_line_t3_g2_g

0xca43,	// (0x0008b54b) list_medium_line_t3_g2_t1_ParamLimits

0xca43,	// (0x0008b54b) list_medium_line_t3_g2_t1

0xca5d,	// (0x0008b565) list_medium_line_t3_g2_t2_ParamLimits

0xca5d,	// (0x0008b565) list_medium_line_t3_g2_t2

0xca72,	// (0x0008b57a) list_medium_line_t3_g2_t3_ParamLimits

0xca72,	// (0x0008b57a) list_medium_line_t3_g2_t3

0x0002,

0xfd64,	// (0x0008e86c) list_medium_line_t3_g2_t_ParamLimits

0xfd64,	// (0x0008e86c) list_medium_line_t3_g2_t

0x2eba,	// (0x000819c2) list_medium_line_right_icon_g1

0x30eb,	// (0x00081bf3) list_medium_line_right_icon_t1

0x1edd,	// (0x000809e5) list_medium_line_t2_g1_ParamLimits

0x1edd,	// (0x000809e5) list_medium_line_t2_g1

0xca88,	// (0x0008b590) list_medium_line_t2_t1_ParamLimits

0xca88,	// (0x0008b590) list_medium_line_t2_t1

0xcaa2,	// (0x0008b5aa) list_medium_line_t2_t2_ParamLimits

0xcaa2,	// (0x0008b5aa) list_medium_line_t2_t2

0x0001,

0xfd6b,	// (0x0008e873) list_medium_line_t2_t_ParamLimits

0xfd6b,	// (0x0008e873) list_medium_line_t2_t

0x1edd,	// (0x000809e5) list_medium_line_t3_g1_ParamLimits

0x1edd,	// (0x000809e5) list_medium_line_t3_g1

0xcab7,	// (0x0008b5bf) list_medium_line_t3_t1_ParamLimits

0xcab7,	// (0x0008b5bf) list_medium_line_t3_t1

0xcace,	// (0x0008b5d6) list_medium_line_t3_t2_ParamLimits

0xcace,	// (0x0008b5d6) list_medium_line_t3_t2

0xcae3,	// (0x0008b5eb) list_medium_line_t3_t3_ParamLimits

0xcae3,	// (0x0008b5eb) list_medium_line_t3_t3

0x0002,

0xfd70,	// (0x0008e878) list_medium_line_t3_t_ParamLimits

0xfd70,	// (0x0008e878) list_medium_line_t3_t

0x1edd,	// (0x000809e5) list_medium_line_g3_g1_ParamLimits

0x1edd,	// (0x000809e5) list_medium_line_g3_g1

0x30f9,	// (0x00081c01) list_medium_line_g3_g2_ParamLimits

0x30f9,	// (0x00081c01) list_medium_line_g3_g2

0x1ee9,	// (0x000809f1) list_medium_line_g3_g3_ParamLimits

0x1ee9,	// (0x000809f1) list_medium_line_g3_g3

0x0002,

0xfd77,	// (0x0008e87f) list_medium_line_g3_g_ParamLimits

0xfd77,	// (0x0008e87f) list_medium_line_g3_g

0x3105,	// (0x00081c0d) list_medium_line_g3_t1_ParamLimits

0x3105,	// (0x00081c0d) list_medium_line_g3_t1

0x1edd,	// (0x000809e5) list_medium_line_t2_g3_g1_ParamLimits

0x1edd,	// (0x000809e5) list_medium_line_t2_g3_g1

0x30f9,	// (0x00081c01) list_medium_line_t2_g3_g2_ParamLimits

0x30f9,	// (0x00081c01) list_medium_line_t2_g3_g2

0x1ee9,	// (0x000809f1) list_medium_line_t2_g3_g3_ParamLimits

0x1ee9,	// (0x000809f1) list_medium_line_t2_g3_g3

0x0002,

0xfd77,	// (0x0008e87f) list_medium_line_t2_g3_g_ParamLimits

0xfd77,	// (0x0008e87f) list_medium_line_t2_g3_g

0xcaf5,	// (0x0008b5fd) list_medium_line_t2_g3_t1_ParamLimits

0xcaf5,	// (0x0008b5fd) list_medium_line_t2_g3_t1

0xcb0c,	// (0x0008b614) list_medium_line_t2_g3_t2_ParamLimits

0xcb0c,	// (0x0008b614) list_medium_line_t2_g3_t2

0x0001,

0xfd7e,	// (0x0008e886) list_medium_line_t2_g3_t_ParamLimits

0xfd7e,	// (0x0008e886) list_medium_line_t2_g3_t

0x1edd,	// (0x000809e5) list_medium_line_t3_g3_g1_ParamLimits

0x1edd,	// (0x000809e5) list_medium_line_t3_g3_g1

0x30f9,	// (0x00081c01) list_medium_line_t3_g3_g2_ParamLimits

0x30f9,	// (0x00081c01) list_medium_line_t3_g3_g2

0x1ee9,	// (0x000809f1) list_medium_line_t3_g3_g3_ParamLimits

0x1ee9,	// (0x000809f1) list_medium_line_t3_g3_g3

0x0002,

0xfd77,	// (0x0008e87f) list_medium_line_t3_g3_g_ParamLimits

0xfd77,	// (0x0008e87f) list_medium_line_t3_g3_g

0xcb21,	// (0x0008b629) list_medium_line_t3_g3_t1_ParamLimits

0xcb21,	// (0x0008b629) list_medium_line_t3_g3_t1

0xcb35,	// (0x0008b63d) list_medium_line_t3_g3_t2_ParamLimits

0xcb35,	// (0x0008b63d) list_medium_line_t3_g3_t2

0xcb47,	// (0x0008b64f) list_medium_line_t3_g3_t3_ParamLimits

0xcb47,	// (0x0008b64f) list_medium_line_t3_g3_t3

0x0002,

0xfd83,	// (0x0008e88b) list_medium_line_t3_g3_t_ParamLimits

0xfd83,	// (0x0008e88b) list_medium_line_t3_g3_t

0x2fe0,	// (0x00081ae8) list_medium_line_right_iconx2_g1

0x2eba,	// (0x000819c2) list_medium_line_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0008e892) list_medium_line_right_iconx2_g

0x311a,	// (0x00081c22) list_medium_line_right_iconx2_t1

0x2fe0,	// (0x00081ae8) list_medium_line_t2_right_iconx2_g1

0x2eba,	// (0x000819c2) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0008e892) list_medium_line_t2_right_iconx2_g

0xcb59,	// (0x0008b661) list_medium_line_t2_right_iconx2_t1

0xcb69,	// (0x0008b671) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8f,	// (0x0008e897) list_medium_line_t2_right_iconx2_t

0x3128,	// (0x00081c30) list_medium_line_x4_t4_t1

0xcb77,	// (0x0008b67f) list_medium_line_x4_t4_t2

0xcb87,	// (0x0008b68f) list_medium_line_x4_t4_t3

0xcb97,	// (0x0008b69f) list_medium_line_x4_t4_t4

0x0003,

0xfd94,	// (0x0008e89c) list_medium_line_x4_t4_t

0xcbd0,	// (0x0008b6d8) tport_appsw_pane_ParamLimits

0xcbd0,	// (0x0008b6d8) tport_appsw_pane

0xcbdc,	// (0x0008b6e4) tport_contact_pane_ParamLimits

0xcbdc,	// (0x0008b6e4) tport_contact_pane

0xcbec,	// (0x0008b6f4) tport_listscroll_pane_ParamLimits

0xcbec,	// (0x0008b6f4) tport_listscroll_pane

0xcbfc,	// (0x0008b704) cell_tport_appsw_pane_ParamLimits

0xcbfc,	// (0x0008b704) cell_tport_appsw_pane

0x14f3,	// (0x0007fffb) tport_appsw_pane_g1_ParamLimits

0x14f3,	// (0x0007fffb) tport_appsw_pane_g1

0x3136,	// (0x00081c3e) tport_contact_pane_g1

0x313f,	// (0x00081c47) tport_contact_pane_t1

0x314d,	// (0x00081c55) tport_contact_pane_t2

0x0001,

0xfd9d,	// (0x0008e8a5) tport_contact_pane_t

0x315b,	// (0x00081c63) list_tport_pane

0x3164,	// (0x00081c6c) scroll_pane_cp_030

0x3175,	// (0x00081c7d) cell_tport_appsw_pane_g1

0x3185,	// (0x00081c8d) cell_tport_appsw_pane_t1

0x01a3,	// (0x0007ecab) grid_highlight_pane_cp019

0xcc27,	// (0x0008b72f) list_tport_double_graphic_pane_ParamLimits

0xcc27,	// (0x0008b72f) list_tport_double_graphic_pane

0x3f9a,	// (0x00082aa2) list_highlight_pane_cp023_ParamLimits

0x3f9a,	// (0x00082aa2) list_highlight_pane_cp023

0xcc3a,	// (0x0008b742) list_tport_double_graphic_pane_g1_ParamLimits

0xcc3a,	// (0x0008b742) list_tport_double_graphic_pane_g1

0xcc47,	// (0x0008b74f) list_tport_double_graphic_pane_t1_ParamLimits

0xcc47,	// (0x0008b74f) list_tport_double_graphic_pane_t1

0xcc5c,	// (0x0008b764) list_tport_double_graphic_pane_t2_ParamLimits

0xcc5c,	// (0x0008b764) list_tport_double_graphic_pane_t2

0x0001,

0xfda9,	// (0x0008e8b1) list_tport_double_graphic_pane_t_ParamLimits

0xfda9,	// (0x0008e8b1) list_tport_double_graphic_pane_t

0x01a3,	// (0x0007ecab) main_cale_note_pane

0xaaa4,	// (0x000895ac) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xaaa4,	// (0x000895ac) cell_vitu2_function_top_wide_pane_cp01

0xc3db,	// (0x0008aee3) wait_bar_pane_cp05_ParamLimits

0x01a3,	// (0x0007ecab) listscroll_cmail_pane

0x319b,	// (0x00081ca3) list_cmail_pane

0xcc78,	// (0x0008b780) list_cmail_body_pane

0xcc9c,	// (0x0008b7a4) list_single_cmail_header_caption_pane

0xccca,	// (0x0008b7d2) list_single_cmail_header_detail_pane_ParamLimits

0xccca,	// (0x0008b7d2) list_single_cmail_header_detail_pane

0xcd02,	// (0x0008b80a) list_single_cmail_header_caption_pane_t1

0xcd12,	// (0x0008b81a) list_single_cmail_header_detail_pane_g1_ParamLimits

0xcd12,	// (0x0008b81a) list_single_cmail_header_detail_pane_g1

0x3f68,	// (0x00082a70) list_single_cmail_header_detail_pane_g2_ParamLimits

0x3f68,	// (0x00082a70) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdae,	// (0x0008e8b6) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdae,	// (0x0008e8b6) list_single_cmail_header_detail_pane_g

0x31c8,	// (0x00081cd0) list_single_cmail_header_detail_pane_t1_ParamLimits

0x31c8,	// (0x00081cd0) list_single_cmail_header_detail_pane_t1

0x31fa,	// (0x00081d02) list_single_cmail_header_editor_pane_bg_ParamLimits

0x31fa,	// (0x00081d02) list_single_cmail_header_editor_pane_bg

0x320c,	// (0x00081d14) list_cmail_body_pane_g1

0x3215,	// (0x00081d1d) list_cmail_body_pane_t1

0x1c88,	// (0x00080790) list_single_cmail_header_editor_pane_bg_g1

0xddd2,	// (0x0008c8da) list_single_cmail_header_editor_pane_bg_g1_copy1

0x1c98,	// (0x000807a0) list_single_cmail_header_editor_pane_bg_g1_copy2

0x1c90,	// (0x00080798) list_single_cmail_header_editor_pane_bg_g1_copy3

0x1ed5,	// (0x000809dd) list_single_cmail_header_editor_pane_bg_g1_copy4

0x1cb8,	// (0x000807c0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x1ca8,	// (0x000807b0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x1cb0,	// (0x000807b8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xddb2,	// (0x0008c8ba) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcd50,	// (0x0008b858) calenote_gesture_pane_ParamLimits

0xcd50,	// (0x0008b858) calenote_gesture_pane

0xcd6a,	// (0x0008b872) calenote_window_pane_ParamLimits

0xcd6a,	// (0x0008b872) calenote_window_pane

0x3223,	// (0x00081d2b) popup_note_window_cp01

0xcd82,	// (0x0008b88a) calenote_swipe_1_pane_ParamLimits

0xcd82,	// (0x0008b88a) calenote_swipe_1_pane

0xc7c5,	// (0x0008b2cd) calenote_swipe_2_pane_ParamLimits

0xc7c5,	// (0x0008b2cd) calenote_swipe_2_pane

0x2dbd,	// (0x000818c5) calenote_swipe_1_pane_g1_ParamLimits

0x2dbd,	// (0x000818c5) calenote_swipe_1_pane_g1

0x2dca,	// (0x000818d2) calenote_swipe_1_pane_g2_ParamLimits

0x2dca,	// (0x000818d2) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x0008e7e5) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x0008e7e5) calenote_swipe_1_pane_g

0x3235,	// (0x00081d3d) calenote_swipe_1_pane_t1_ParamLimits

0x3235,	// (0x00081d3d) calenote_swipe_1_pane_t1

0x2dbd,	// (0x000818c5) calenote_swipe_2_pane_g1_ParamLimits

0x2dbd,	// (0x000818c5) calenote_swipe_2_pane_g1

0x3254,	// (0x00081d5c) calenote_swipe_2_pane_g2_ParamLimits

0x3254,	// (0x00081d5c) calenote_swipe_2_pane_g2

0x0001,

0xfdba,	// (0x0008e8c2) calenote_swipe_2_pane_g_ParamLimits

0xfdba,	// (0x0008e8c2) calenote_swipe_2_pane_g

0x3260,	// (0x00081d68) calenote_swipe_2_pane_t1_ParamLimits

0x3260,	// (0x00081d68) calenote_swipe_2_pane_t1

0x01a3,	// (0x0007ecab) main_mup_navstr_pane

0x980b,	// (0x00088313) main_mup3_pane_t7_ParamLimits

0x980b,	// (0x00088313) main_mup3_pane_t7

0xa20e,	// (0x00088d16) main_mp4_pane_g6_ParamLimits

0xa20e,	// (0x00088d16) main_mp4_pane_g6

0xa590,	// (0x00089098) main_image3_pane_t4_ParamLimits

0xa590,	// (0x00089098) main_image3_pane_t4

0xcd95,	// (0x0008b89d) popup_navstr_preview_pane_ParamLimits

0xcd95,	// (0x0008b89d) popup_navstr_preview_pane

0xcda1,	// (0x0008b8a9) scroll_navstr_pane_ParamLimits

0xcda1,	// (0x0008b8a9) scroll_navstr_pane

0x01a3,	// (0x0007ecab) bg_popup_preview_window_pane_cp04

0x3287,	// (0x00081d8f) popup_navstr_preview_pane_t1

0xcdad,	// (0x0008b8b5) scroll_navstr_pane_g1_ParamLimits

0xcdad,	// (0x0008b8b5) scroll_navstr_pane_g1

0xcdba,	// (0x0008b8c2) scroll_navstr_pane_t1_ParamLimits

0xcdba,	// (0x0008b8c2) scroll_navstr_pane_t1

0x322c,	// (0x00081d34) bg_button_pane_cp014

0x322c,	// (0x00081d34) bg_button_pane_cp030

0xc6b9,	// (0x0008b1c1) list_double_fisheye_pane_g4_ParamLimits

0xc6b9,	// (0x0008b1c1) list_double_fisheye_pane_g4

0xc6c5,	// (0x0008b1cd) list_double_fisheye_pane_g5_ParamLimits

0xc6c5,	// (0x0008b1cd) list_double_fisheye_pane_g5

0x31a3,	// (0x00081cab) sp_fs_scroll_pane_cp03

0x2efa,	// (0x00081a02) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x2f06,	// (0x00081a0e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x0008e802) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x2f12,	// (0x00081a1a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xcc6e,	// (0x0008b776) sp_fs_scroll_pane_cp02

0xdad8,	// (0x0008c5e0) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xdad8,	// (0x0008c5e0) popup_sp_fs_calendar_preview_list_single_pane

0x01a3,	// (0x0007ecab) main_cam6_pano_pane

0x3f9a,	// (0x00082aa2) main_mup3_pane_ParamLimits

0x01a3,	// (0x0007ecab) main_phacti_pane

0xc2b0,	// (0x0008adb8) bg_button_pane_cp11

0xc2c8,	// (0x0008add0) main_mobtv_info_pane_g2_ParamLimits

0xc2c8,	// (0x0008add0) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x0008e762) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x0008e762) main_mobtv_info_pane_g

0xc47a,	// (0x0008af82) sc_clock_pane_t5_ParamLimits

0xc47a,	// (0x0008af82) sc_clock_pane_t5

0xc51c,	// (0x0008b024) main_radioblah_pane_g1_ParamLimits

0x2d09,	// (0x00081811) main_radioblah_pane_t3_ParamLimits

0x2d09,	// (0x00081811) main_radioblah_pane_t3

0x2d21,	// (0x00081829) main_radioblah_pane_t4_ParamLimits

0x2d21,	// (0x00081829) main_radioblah_pane_t4

0xc53a,	// (0x0008b042) main_radioblah_text_pane_ParamLimits

0xc53a,	// (0x0008b042) main_radioblah_text_pane

0xc547,	// (0x0008b04f) main_radioblah_info_pane_g1_ParamLimits

0xc5dc,	// (0x0008b0e4) main_radioblah_info_pane_t4_ParamLimits

0xc5dc,	// (0x0008b0e4) main_radioblah_info_pane_t4

0x3f9a,	// (0x00082aa2) main_sp_fs_calendar_pane

0xcdcc,	// (0x0008b8d4) main_phacti_pane_g1

0xcdd4,	// (0x0008b8dc) phacti_note_pane_ParamLimits

0xcdd4,	// (0x0008b8dc) phacti_note_pane

0x329e,	// (0x00081da6) phacti_term_pane_ParamLimits

0x329e,	// (0x00081da6) phacti_term_pane

0x32b3,	// (0x00081dbb) phacti_note_pane_t1_ParamLimits

0x32b3,	// (0x00081dbb) phacti_note_pane_t1

0x32ca,	// (0x00081dd2) phacti_term_pane_g1

0x32d2,	// (0x00081dda) phacti_term_pane_t1_ParamLimits

0x32d2,	// (0x00081dda) phacti_term_pane_t1

0x32fc,	// (0x00081e04) popup_sp_fs_calendar_preview_list_single_pane_g1

0x3304,	// (0x00081e0c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc4,	// (0x0008e8cc) popup_sp_fs_calendar_preview_list_single_pane_g

0x330c,	// (0x00081e14) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x330c,	// (0x00081e14) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3322,	// (0x00081e2a) aid_popup_sp_fs_bg_corner_pane

0x11ef,	// (0x0007fcf7) popup_sp_fs_calendar_preview_bg_pane_g1

0x01a3,	// (0x0007ecab) popup_sp_fs_calendar_preview_bg_pane

0x332a,	// (0x00081e32) popup_sp_fs_calendar_preview_list_pane

0x3f9a,	// (0x00082aa2) bg_main_sp_fs_cale_pane_ParamLimits

0x3f9a,	// (0x00082aa2) bg_main_sp_fs_cale_pane

0x3332,	// (0x00081e3a) listscroll_cale_mrui_pane_ParamLimits

0x3332,	// (0x00081e3a) listscroll_cale_mrui_pane

0x3346,	// (0x00081e4e) listscroll_sp_fs_schedule_track_pane

0x334f,	// (0x00081e57) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x334f,	// (0x00081e57) main_sp_fs_ctrlbar_pane_cp01

0x3360,	// (0x00081e68) main_sp_fs_ribbon_pane

0x3368,	// (0x00081e70) popup_sp_fs_cale_preview_window

0xce17,	// (0x0008b91f) list_single_sp_fs_schedule_track_pane_ParamLimits

0xce17,	// (0x0008b91f) list_single_sp_fs_schedule_track_pane

0x1c0c,	// (0x00080714) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1c0c,	// (0x00080714) bg_sp_fs_highlight_list_pane_cp03

0xce39,	// (0x0008b941) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xce39,	// (0x0008b941) list_single_sp_fs_schedule_track_pane_g1

0xce45,	// (0x0008b94d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xce45,	// (0x0008b94d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc9,	// (0x0008e8d1) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc9,	// (0x0008e8d1) list_single_sp_fs_schedule_track_pane_g

0xce51,	// (0x0008b959) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xce51,	// (0x0008b959) list_single_sp_fs_schedule_track_pane_t1

0xce69,	// (0x0008b971) sp_fs_schedule_track_pane_ParamLimits

0xce69,	// (0x0008b971) sp_fs_schedule_track_pane

0x337a,	// (0x00081e82) sp_fs_schedule_track_pane_g1

0x3382,	// (0x00081e8a) sp_fs_schedule_track_pane_g2

0x338a,	// (0x00081e92) sp_fs_schedule_track_pane_g3

0x3392,	// (0x00081e9a) sp_fs_schedule_track_pane_g4

0x339a,	// (0x00081ea2) sp_fs_schedule_track_pane_g5

0x0004,

0xfdce,	// (0x0008e8d6) sp_fs_schedule_track_pane_g

0x1c88,	// (0x00080790) bg_sp_fs_schedule_viewer_highlight_g1

0xddd2,	// (0x0008c8da) bg_sp_fs_schedule_viewer_highlight_g2

0x1c90,	// (0x00080798) bg_sp_fs_schedule_viewer_highlight_g3

0x1c98,	// (0x000807a0) bg_sp_fs_schedule_viewer_highlight_g4

0x1ed5,	// (0x000809dd) bg_sp_fs_schedule_viewer_highlight_g5

0x1ca8,	// (0x000807b0) bg_sp_fs_schedule_viewer_highlight_g6

0x1cb0,	// (0x000807b8) bg_sp_fs_schedule_viewer_highlight_g7

0x1cb8,	// (0x000807c0) bg_sp_fs_schedule_viewer_highlight_g8

0xddb2,	// (0x0008c8ba) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd9,	// (0x0008e8e1) bg_sp_fs_schedule_viewer_highlight_g

0x01a3,	// (0x0007ecab) bg_main_sp_fs_ribbon_pane

0xce79,	// (0x0008b981) main_sp_fs_ribbon_pane_g1

0x33a2,	// (0x00081eaa) main_sp_fs_ribbon_pane_t1

0xce82,	// (0x0008b98a) main_sp_fs_ribbon_pane_t2

0x33b1,	// (0x00081eb9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdec,	// (0x0008e8f4) main_sp_fs_ribbon_pane_t

0x33c0,	// (0x00081ec8) main_sp_fs_ribbon_scheduler_pane

0x33c8,	// (0x00081ed0) bg_main_sp_fs_ribbon_pane_g1

0x33d1,	// (0x00081ed9) bg_main_sp_fs_ribbon_pane_g2

0x33da,	// (0x00081ee2) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf3,	// (0x0008e8fb) bg_main_sp_fs_ribbon_pane_g

0x33e2,	// (0x00081eea) main_sp_fs_ribbon_scheduler_pane_g1

0x33eb,	// (0x00081ef3) main_sp_fs_ribbon_scheduler_pane_g2

0x33f4,	// (0x00081efc) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfa,	// (0x0008e902) main_sp_fs_ribbon_scheduler_pane_g

0x33fd,	// (0x00081f05) list_cale_mrui_pane

0xce91,	// (0x0008b999) sp_fs_scroll_pane_cp07_ParamLimits

0xce91,	// (0x0008b999) sp_fs_scroll_pane_cp07

0xcea7,	// (0x0008b9af) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xcea7,	// (0x0008b9af) bg_sp_fs_schedule_viewer_highlight

0x3406,	// (0x00081f0e) list_single_sp_fs_schedule_track_pane_cp01

0x340e,	// (0x00081f16) list_sp_fs_schedule_track_pane

0x3416,	// (0x00081f1e) sp_fs_scroll_pane_cp06_ParamLimits

0x3416,	// (0x00081f1e) sp_fs_scroll_pane_cp06

0x11ef,	// (0x0007fcf7) bgmain_sp_fs_calendar_pane_g1

0xceb4,	// (0x0008b9bc) list_single_cale_mrui_pane_ParamLimits

0xceb4,	// (0x0008b9bc) list_single_cale_mrui_pane

0x3428,	// (0x00081f30) list_single_cale_mrui_row_pane_ParamLimits

0x3428,	// (0x00081f30) list_single_cale_mrui_row_pane

0x3435,	// (0x00081f3d) list_single_cale_mrui_row_pane_g1_ParamLimits

0x3435,	// (0x00081f3d) list_single_cale_mrui_row_pane_g1

0x346d,	// (0x00081f75) list_single_cale_mrui_row_pane_t1_ParamLimits

0x346d,	// (0x00081f75) list_single_cale_mrui_row_pane_t1

0xcee0,	// (0x0008b9e8) list_single_cale_mrui_row_pane_t2_ParamLimits

0xcee0,	// (0x0008b9e8) list_single_cale_mrui_row_pane_t2

0x347f,	// (0x00081f87) list_single_cale_mrui_row_pane_t3_ParamLimits

0x347f,	// (0x00081f87) list_single_cale_mrui_row_pane_t3

0x34ae,	// (0x00081fb6) list_single_cale_mrui_row_pane_t4_ParamLimits

0x34ae,	// (0x00081fb6) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe06,	// (0x0008e90e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe06,	// (0x0008e90e) list_single_cale_mrui_row_pane_t

0xcf46,	// (0x0008ba4e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xcf46,	// (0x0008ba4e) list_single_cmail_header_editor_pane_bg_cp01

0xcf68,	// (0x0008ba70) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xcf68,	// (0x0008ba70) list_single_cmail_header_editor_pane_bg_cp02

0xcf84,	// (0x0008ba8c) main_radioblah_text_pane_t1_ParamLimits

0xcf84,	// (0x0008ba8c) main_radioblah_text_pane_t1

0x34dd,	// (0x00081fe5) cam6_indi_pane_cp01

0x34e5,	// (0x00081fed) cam6_mode_pane_cp01

0x34ed,	// (0x00081ff5) cam6_pano_pane

0x34f6,	// (0x00081ffe) cam6_zoom_pane_cp01

0x34fe,	// (0x00082006) cam6_pano_image_pane

0x3509,	// (0x00082011) cam6_pano_pane_g1

0x2a81,	// (0x00081589) cam6_pano_pane_g2

0x3512,	// (0x0008201a) cam6_pano_pane_g3

0x351b,	// (0x00082023) cam6_pano_pane_g4

0x17ad,	// (0x000802b5) cam6_pano_pane_g5

0x3524,	// (0x0008202c) cam6_pano_pane_g6

0x352e,	// (0x00082036) cam6_pano_pane_g7

0x3536,	// (0x0008203e) cam6_pano_pane_g8

0x353f,	// (0x00082047) cam6_pano_pane_g9

0x0008,

0xfe0f,	// (0x0008e917) cam6_pano_pane_g

0x01a3,	// (0x0007ecab) main_browser_tag_pane

0x327f,	// (0x00081d87) grid_navstr_albumart_pane

0x354a,	// (0x00082052) cell_navstr_albumart_pane_ParamLimits

0x354a,	// (0x00082052) cell_navstr_albumart_pane

0xe5ab,	// (0x0008d0b3) cell_navstr_albumart_pane_g1

0x0afc,	// (0x0007f604) cell_navstr_albumart_pane_g2

0x0b0c,	// (0x0007f614) cell_navstr_albumart_pane_g3

0x0b04,	// (0x0007f60c) cell_navstr_albumart_pane_g4

0x0003,

0xfe22,	// (0x0008e92a) cell_navstr_albumart_pane_g

0xcfa1,	// (0x0008baa9) bt_list_pane_ParamLimits

0xcfa1,	// (0x0008baa9) bt_list_pane

0xcfc8,	// (0x0008bad0) bt_list_pane_t1

0xcfd7,	// (0x0008badf) bt_list_pane_t2

0x0001,

0xfe2b,	// (0x0008e933) bt_list_pane_t

0x01a3,	// (0x0007ecab) main_cale_prevew_pane

0xcfe6,	// (0x0008baee) popup_cale_preview_window_ParamLimits

0xcfe6,	// (0x0008baee) popup_cale_preview_window

0x3f9a,	// (0x00082aa2) bg_popup_preview_window_pane_cp05_ParamLimits

0x3f9a,	// (0x00082aa2) bg_popup_preview_window_pane_cp05

0x356c,	// (0x00082074) list_cale_preview_pane_ParamLimits

0x356c,	// (0x00082074) list_cale_preview_pane

0xcffd,	// (0x0008bb05) list_double_cale_preview_pane_ParamLimits

0xcffd,	// (0x0008bb05) list_double_cale_preview_pane

0xd00f,	// (0x0008bb17) list_single_cale_preview_pane_ParamLimits

0xd00f,	// (0x0008bb17) list_single_cale_preview_pane

0xd023,	// (0x0008bb2b) list_single_cale_preview_pane_g1

0xd02b,	// (0x0008bb33) list_single_cale_preview_pane_t1_ParamLimits

0xd02b,	// (0x0008bb33) list_single_cale_preview_pane_t1

0xd040,	// (0x0008bb48) list_double_cale_preview_pane_g1

0xd048,	// (0x0008bb50) list_double_cale_preview_pane_t1_ParamLimits

0xd048,	// (0x0008bb50) list_double_cale_preview_pane_t1

0xd05d,	// (0x0008bb65) list_double_cale_preview_pane_t2_ParamLimits

0xd05d,	// (0x0008bb65) list_double_cale_preview_pane_t2

0x0001,

0xfe30,	// (0x0008e938) list_double_cale_preview_pane_t_ParamLimits

0xfe30,	// (0x0008e938) list_double_cale_preview_pane_t

0x01a3,	// (0x0007ecab) main_ezdial_pane

0x3f9a,	// (0x00082aa2) main_sp_fs_email_pane_ParamLimits

0xc7fb,	// (0x0008b303) cmail_ddmenu_btn01_pane_ParamLimits

0xc7fb,	// (0x0008b303) cmail_ddmenu_btn01_pane

0xc818,	// (0x0008b320) cmail_ddmenu_btn02_pane_ParamLimits

0xc818,	// (0x0008b320) cmail_ddmenu_btn02_pane

0xc836,	// (0x0008b33e) cmail_ddmenu_btn03_pane_ParamLimits

0xc836,	// (0x0008b33e) cmail_ddmenu_btn03_pane

0xc864,	// (0x0008b36c) main_sp_fs_ctrlbar_pane_ParamLimits

0xc880,	// (0x0008b388) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcc78,	// (0x0008b780) list_cmail_body_pane_ParamLimits

0x31b2,	// (0x00081cba) bg_button_pane_cp12

0x31bb,	// (0x00081cc3) list_single_cmail_header_detail_pane_g3_ParamLimits

0x31bb,	// (0x00081cc3) list_single_cmail_header_detail_pane_g3

0xcd2a,	// (0x0008b832) list_single_cmail_header_detail_pane_t2_ParamLimits

0xcd2a,	// (0x0008b832) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb5,	// (0x0008e8bd) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb5,	// (0x0008e8bd) list_single_cmail_header_detail_pane_t

0x32e7,	// (0x00081def) phacti_term_pane_t2_ParamLimits

0x32e7,	// (0x00081def) phacti_term_pane_t2

0x0001,

0xfdbf,	// (0x0008e8c7) phacti_term_pane_t_ParamLimits

0xfdbf,	// (0x0008e8c7) phacti_term_pane_t

0x3578,	// (0x00082080) aid_size_list_single_double

0xd075,	// (0x0008bb7d) popup_ezdial_listscroll_window

0xd096,	// (0x0008bb9e) popup_number_entry_window_cp01

0xe44a,	// (0x0008cf52) bg_popup_call_pane_cp09

0x3584,	// (0x0008208c) ezdial_list_pane

0x358c,	// (0x00082094) scroll_pane_cp23

0x0fd2,	// (0x0007fada) bg_button_pane_cp028_ParamLimits

0x0fd2,	// (0x0007fada) bg_button_pane_cp028

0xd0a4,	// (0x0008bbac) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd0a4,	// (0x0008bbac) cmail_ddmenu_btn01_pane_g1

0xd0b6,	// (0x0008bbbe) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd0b6,	// (0x0008bbbe) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe35,	// (0x0008e93d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe35,	// (0x0008e93d) cmail_ddmenu_btn01_pane_g

0x3594,	// (0x0008209c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3594,	// (0x0008209c) cmail_ddmenu_btn01_pane_t1

0x0ce7,	// (0x0007f7ef) bg_button_pane_cp029_ParamLimits

0x0ce7,	// (0x0007f7ef) bg_button_pane_cp029

0xd0b6,	// (0x0008bbbe) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd0b6,	// (0x0008bbbe) cmail_ddmenu_btn02_pane_g1

0xd0ce,	// (0x0008bbd6) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd0ce,	// (0x0008bbd6) cmail_ddmenu_btn02_pane_t1

0x1c0c,	// (0x00080714) bg_button_pane_cp031_ParamLimits

0x1c0c,	// (0x00080714) bg_button_pane_cp031

0xd0b6,	// (0x0008bbbe) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd0b6,	// (0x0008bbbe) cmail_ddmenu_btn03_pane_g1

0xd0ce,	// (0x0008bbd6) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd0ce,	// (0x0008bbd6) cmail_ddmenu_btn03_pane_t1

0xa42d,	// (0x00088f35) cell_dialer2_keypad_pane_t1_ParamLimits

0xa447,	// (0x00088f4f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa447,	// (0x00088f4f) cell_dialer2_keypad_pane_t1_copy1

0xc150,	// (0x0008ac58) ncimui_group_button_pane

0x3f9a,	// (0x00082aa2) main_sp_fs_calendar_pane_ParamLimits

0xcc9c,	// (0x0008b7a4) list_single_cmail_header_caption_pane_ParamLimits

0x407e,	// (0x00082b86) aid_recal_txt_sm_pane

0x01a3,	// (0x0007ecab) mian_recal_day_pane

0x3368,	// (0x00081e70) popup_sp_fs_cale_preview_window_ParamLimits

0x01a3,	// (0x0007ecab) list_recal_day_pane

0x35c2,	// (0x000820ca) list_single_recal_day_pane_ParamLimits

0x35c2,	// (0x000820ca) list_single_recal_day_pane

0x35d4,	// (0x000820dc) list_single_recal_day_pane_g1_ParamLimits

0x35d4,	// (0x000820dc) list_single_recal_day_pane_g1

0x35e0,	// (0x000820e8) list_single_recal_day_pane_g2_ParamLimits

0x35e0,	// (0x000820e8) list_single_recal_day_pane_g2

0x35ef,	// (0x000820f7) list_single_recal_day_pane_g3_ParamLimits

0x35ef,	// (0x000820f7) list_single_recal_day_pane_g3

0xd0f2,	// (0x0008bbfa) list_single_recal_day_pane_g4_ParamLimits

0xd0f2,	// (0x0008bbfa) list_single_recal_day_pane_g4

0x35fb,	// (0x00082103) list_single_recal_day_pane_g5_ParamLimits

0x35fb,	// (0x00082103) list_single_recal_day_pane_g5

0x360a,	// (0x00082112) list_single_recal_day_pane_g6_ParamLimits

0x360a,	// (0x00082112) list_single_recal_day_pane_g6

0x0005,

0xfe44,	// (0x0008e94c) list_single_recal_day_pane_g_ParamLimits

0xfe44,	// (0x0008e94c) list_single_recal_day_pane_g

0x3616,	// (0x0008211e) list_single_recal_day_pane_t1

0x3624,	// (0x0008212c) list_single_recal_day_pane_t2

0x0001,

0xfe51,	// (0x0008e959) list_single_recal_day_pane_t

0xd105,	// (0x0008bc0d) ncimui_query_button_pane_ParamLimits

0xd105,	// (0x0008bc0d) ncimui_query_button_pane

0xd115,	// (0x0008bc1d) ncimui_query_button_pane_t1_ParamLimits

0xd115,	// (0x0008bc1d) ncimui_query_button_pane_t1

0x3632,	// (0x0008213a) ncimui_query_button_pane_t2_ParamLimits

0x3632,	// (0x0008213a) ncimui_query_button_pane_t2

0x0001,

0xfe56,	// (0x0008e95e) ncimui_query_button_pane_t_ParamLimits

0xfe56,	// (0x0008e95e) ncimui_query_button_pane_t

0xd128,	// (0x0008bc30) query_button_pane_ParamLimits

0xd128,	// (0x0008bc30) query_button_pane

0x01a3,	// (0x0007ecab) bg_button_pane_cp0028

0x3645,	// (0x0008214d) query_button_pane_t1

0x884c,	// (0x00087354) main_tport_pane_ParamLimits

0xcba7,	// (0x0008b6af) bg_popup_window_pane_cp01_ParamLimits

0xcba7,	// (0x0008b6af) bg_popup_window_pane_cp01

0xcbb4,	// (0x0008b6bc) heading_pane_cp08_ParamLimits

0xcbb4,	// (0x0008b6bc) heading_pane_cp08

0xcbc2,	// (0x0008b6ca) heading_pane_cp07_ParamLimits

0xcbc2,	// (0x0008b6ca) heading_pane_cp07

0x3175,	// (0x00081c7d) cell_tport_appsw_pane_g2

0x0002,

0xfda2,	// (0x0008e8aa) cell_tport_appsw_pane_g

0x7f41,	// (0x00086a49) input_candi_list_open_g1

0xdf6d,	// (0x0008ca75) list_cale_time_pane_g6_ParamLimits

0xdf6d,	// (0x0008ca75) list_cale_time_pane_g6

0x928a,	// (0x00087d92) aid_size_touch_calib_1_ParamLimits

0x928a,	// (0x00087d92) aid_size_touch_calib_1

0x9296,	// (0x00087d9e) aid_size_touch_calib_2_ParamLimits

0x9296,	// (0x00087d9e) aid_size_touch_calib_2

0x92a4,	// (0x00087dac) aid_size_touch_calib_3_ParamLimits

0x92a4,	// (0x00087dac) aid_size_touch_calib_3

0x92b4,	// (0x00087dbc) aid_size_touch_calib_4_ParamLimits

0x92b4,	// (0x00087dbc) aid_size_touch_calib_4

0x92c2,	// (0x00087dca) main_touch_calib_button_group_pane_ParamLimits

0x92c2,	// (0x00087dca) main_touch_calib_button_group_pane

0x92d0,	// (0x00087dd8) main_touch_calib_pane_g1_ParamLimits

0x92dc,	// (0x00087de4) main_touch_calib_pane_g2_ParamLimits

0x92e8,	// (0x00087df0) main_touch_calib_pane_g3_ParamLimits

0x92f4,	// (0x00087dfc) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x0008e27d) main_touch_calib_pane_g_ParamLimits

0x9300,	// (0x00087e08) main_touch_calib_pane_t1_ParamLimits

0x9317,	// (0x00087e1f) main_touch_calib_pane_t2_ParamLimits

0x932e,	// (0x00087e36) main_touch_calib_pane_t3_ParamLimits

0x9342,	// (0x00087e4a) main_touch_calib_pane_t4_ParamLimits

0x9356,	// (0x00087e5e) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x0008e286) main_touch_calib_pane_t_ParamLimits

0x1594,	// (0x0008009c) list_single_fp_cale_pane_g3_ParamLimits

0x1594,	// (0x0008009c) list_single_fp_cale_pane_g3

0xa88d,	// (0x00089395) bg_button_pane_cp012_ParamLimits

0xa88d,	// (0x00089395) bg_vkb2_func_pane_cp03_ParamLimits

0xb294,	// (0x00089d9c) cell_vitu2_function_top_pane_g1_ParamLimits

0xa88d,	// (0x00089395) bg_vkb2_func_pane_cp04_ParamLimits

0xc0ee,	// (0x0008abf6) main_ncimui_button_group_pane_ParamLimits

0xc0ee,	// (0x0008abf6) main_ncimui_button_group_pane

0xc13e,	// (0x0008ac46) main_ncimui_pane_t3_ParamLimits

0xc13e,	// (0x0008ac46) main_ncimui_pane_t3

0x3295,	// (0x00081d9d) phacti_button_group_pane

0x3578,	// (0x00082080) aid_size_list_single_double_ParamLimits

0xd075,	// (0x0008bb7d) popup_ezdial_listscroll_window_ParamLimits

0xd096,	// (0x0008bb9e) popup_number_entry_window_cp01_ParamLimits

0xd135,	// (0x0008bc3d) phacti_button_pane_ParamLimits

0xd135,	// (0x0008bc3d) phacti_button_pane

0x01a3,	// (0x0007ecab) bg_button_pane_cp14

0x3653,	// (0x0008215b) phacti_button_pane_t1

0xd146,	// (0x0008bc4e) main_touch_calib_button_pane_ParamLimits

0xd146,	// (0x0008bc4e) main_touch_calib_button_pane

0xd9c2,	// (0x0008c4ca) bg_button_pane_cp18_ParamLimits

0xd9c2,	// (0x0008c4ca) bg_button_pane_cp18

0x3661,	// (0x00082169) main_touch_calib_button_pane_t1_ParamLimits

0x3661,	// (0x00082169) main_touch_calib_button_pane_t1

0x3677,	// (0x0008217f) main_touch_calib_button_pane_t2_ParamLimits

0x3677,	// (0x0008217f) main_touch_calib_button_pane_t2

0x0001,

0xfe5b,	// (0x0008e963) main_touch_calib_button_pane_t_ParamLimits

0xfe5b,	// (0x0008e963) main_touch_calib_button_pane_t

0x01a3,	// (0x0007ecab) cell_ncimui_button_pane

0x01a3,	// (0x0007ecab) bg_button_pane_cp032

0x3695,	// (0x0008219d) cell_ncimui_button_pane_t1

0xa4a3,	// (0x00088fab) image3_infobar_pane_ParamLimits

0xa4a3,	// (0x00088fab) image3_infobar_pane

0xc49c,	// (0x0008afa4) fs_bigclock_status_pane_ParamLimits

0xc49c,	// (0x0008afa4) fs_bigclock_status_pane

0xc4a9,	// (0x0008afb1) main_fs_bigclock_clock_pane_ParamLimits

0xc4a9,	// (0x0008afb1) main_fs_bigclock_clock_pane

0xc4bd,	// (0x0008afc5) main_fs_bigclock_indi_pane_ParamLimits

0xc4bd,	// (0x0008afc5) main_fs_bigclock_indi_pane

0xc4ea,	// (0x0008aff2) main_fs_bigclock_swipe_pane_ParamLimits

0xc4ea,	// (0x0008aff2) main_fs_bigclock_swipe_pane

0x01a3,	// (0x0007ecab) main_fs_clock_dumped_data

0x2b8e,	// (0x00081696) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x2b8e,	// (0x00081696) list_single_fs_bigclock_indicator_pane_g1

0x2bac,	// (0x000816b4) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x2bac,	// (0x000816b4) list_single_fs_bigclock_indicator_pane_g2

0x2bc6,	// (0x000816ce) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x2bc6,	// (0x000816ce) list_single_fs_bigclock_indicator_pane_g3

0x2be0,	// (0x000816e8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x2be0,	// (0x000816e8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x0008e796) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x0008e796) list_single_fs_bigclock_indicator_pane_g

0x2c06,	// (0x0008170e) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x2c06,	// (0x0008170e) list_single_fs_bigclock_indicator_pane_t1

0x2c2e,	// (0x00081736) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x2c2e,	// (0x00081736) list_single_fs_bigclock_indicator_pane_t2

0x2c56,	// (0x0008175e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x2c56,	// (0x0008175e) list_single_fs_bigclock_indicator_pane_t3

0x2c7e,	// (0x00081786) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x2c7e,	// (0x00081786) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x0008e7a1) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x0008e7a1) list_single_fs_bigclock_indicator_pane_t

0x36a3,	// (0x000821ab) image3_infobar_fav_pane_ParamLimits

0x36a3,	// (0x000821ab) image3_infobar_fav_pane

0x36b3,	// (0x000821bb) image3_infobar_loc_pane_ParamLimits

0x36b3,	// (0x000821bb) image3_infobar_loc_pane

0x36c7,	// (0x000821cf) image3_infobar_time_pane_ParamLimits

0x36c7,	// (0x000821cf) image3_infobar_time_pane

0x11ef,	// (0x0007fcf7) image3_infobar_time_pane_g1

0x36d7,	// (0x000821df) image3_infobar_time_pane_t1

0x11ef,	// (0x0007fcf7) image3_infobar_loc_pane_g1

0x36e5,	// (0x000821ed) image3_infobar_loc_pane_g2

0x0001,

0xfe60,	// (0x0008e968) image3_infobar_loc_pane_g

0x36ed,	// (0x000821f5) image3_infobar_loc_pane_t1

0x11ef,	// (0x0007fcf7) image3_infobar_fav_pane_g1

0x36fb,	// (0x00082203) image3_infobar_fav_pane_g2

0x0001,

0xfe65,	// (0x0008e96d) image3_infobar_fav_pane_g

0x3703,	// (0x0008220b) fs_bigclock_status_battery_pane

0x370c,	// (0x00082214) fs_bigclock_status_signal_pane

0x3715,	// (0x0008221d) fs_bigclock_status_title_pane

0x371e,	// (0x00082226) fs_bigclock_status_signal_pane_g1

0x3727,	// (0x0008222f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6a,	// (0x0008e972) fs_bigclock_status_signal_pane_g

0x372f,	// (0x00082237) fs_bigclock_status_battery_pane_g1

0x3738,	// (0x00082240) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6f,	// (0x0008e977) fs_bigclock_status_battery_pane_g

0x3740,	// (0x00082248) fs_bigclock_status_title_pane_t1

0x11ef,	// (0x0007fcf7) main_fs_bigclock_clock_pane_g1

0x374e,	// (0x00082256) main_fs_bigclock_clock_pane_g2

0x374e,	// (0x00082256) main_fs_bigclock_clock_pane_g3

0x374e,	// (0x00082256) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe74,	// (0x0008e97c) main_fs_bigclock_clock_pane_g

0x3756,	// (0x0008225e) main_fs_bigclock_clock_pane_t1

0x3764,	// (0x0008226c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7d,	// (0x0008e985) main_fs_bigclock_clock_pane_t

0x3773,	// (0x0008227b) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3773,	// (0x0008227b) list_single_fs_bigclock_indicator_pane

0xd156,	// (0x0008bc5e) list_single_fs_bigclock_pane_ParamLimits

0xd156,	// (0x0008bc5e) list_single_fs_bigclock_pane

0x378d,	// (0x00082295) main_fs_bigclock_indicator_pane_t1

0x379c,	// (0x000822a4) list_single_fs_bigclock_pane_g1

0x37a4,	// (0x000822ac) list_single_fs_bigclock_pane_t1

0x11ef,	// (0x0007fcf7) main_fs_bigclock_swipe_pane_g1

0x37e2,	// (0x000822ea) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8e,	// (0x0008e996) main_fs_bigclock_swipe_pane_g

0x37ea,	// (0x000822f2) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x37ea,	// (0x000822f2) main_fs_bigclock_swipe_pane_t1

0x7710,	// (0x00086218) call_type_pane_ParamLimits

0x01a3,	// (0x0007ecab) main_btmg_pane

0x3461,	// (0x00081f69) list_single_cale_mrui_row_pane_g2_ParamLimits

0x3461,	// (0x00081f69) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe01,	// (0x0008e909) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe01,	// (0x0008e909) list_single_cale_mrui_row_pane_g

0x35b2,	// (0x000820ba) list_recal_vselct_arw_lo_pane

0x35ba,	// (0x000820c2) list_recal_vselct_arw_up_pane

0x4087,	// (0x00082b8f) list_recal_vselct_pane

0x3807,	// (0x0008230f) btmg_button_pane

0xd1ba,	// (0x0008bcc2) main_btmg_pane_g1

0x01a3,	// (0x0007ecab) bg_button_pane_cp044

0x3811,	// (0x00082319) btmg_button_pane_t1

0x0cdf,	// (0x0007f7e7) aid_listscroll_gen

0x3f9a,	// (0x00082aa2) main_cntbar_detail_pane

0x3193,	// (0x00081c9b) list_cmail_folder_pane

0x31a3,	// (0x00081cab) sp_fs_scroll_pane_cp03_ParamLimits

0xd1c2,	// (0x0008bcca) list_single_fs_dyc_pane_cp01_ParamLimits

0xd1c2,	// (0x0008bcca) list_single_fs_dyc_pane_cp01

0x381f,	// (0x00082327) aid_size_cmail_indent

0x3828,	// (0x00082330) list_single_dyc_row_pane_cp01

0xd20e,	// (0x0008bd16) cntbar_detail_list_pane_ParamLimits

0xd20e,	// (0x0008bd16) cntbar_detail_list_pane

0xd248,	// (0x0008bd50) main_cntbar_detail_cont_pane_ParamLimits

0xd248,	// (0x0008bd50) main_cntbar_detail_cont_pane

0x76aa,	// (0x000861b2) scroll_pane_cp032_ParamLimits

0x76aa,	// (0x000861b2) scroll_pane_cp032

0xd254,	// (0x0008bd5c) cntbar_detail_list_event_pane_ParamLimits

0xd254,	// (0x0008bd5c) cntbar_detail_list_event_pane

0xd21a,	// (0x0008bd22) cntbar_detail_list_shct_pane

0xde20,	// (0x0008c928) aid_list_gen

0x3831,	// (0x00082339) aid_scroll

0x383a,	// (0x00082342) aid_size_touch_scroll_bar

0x4067,	// (0x00082b6f) aid_list_double

0x384c,	// (0x00082354) aid_list_single

0x3855,	// (0x0008235d) aid_list_single_lg

0x385e,	// (0x00082366) aid_list_z_g_a_sm

0x3f74,	// (0x00082a7c) aid_list_z_g_d

0x3866,	// (0x0008236e) aid_txt_z_prm

0xd268,	// (0x0008bd70) aid_txt_z_prm_cp01

0xd276,	// (0x0008bd7e) aid_txt_z_sec

0xd284,	// (0x0008bd8c) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd284,	// (0x0008bd8c) main_cntbar_detail_cont_pane_g1

0xd291,	// (0x0008bd99) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd291,	// (0x0008bd99) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe93,	// (0x0008e99b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe93,	// (0x0008e99b) main_cntbar_detail_cont_pane_g

0x3874,	// (0x0008237c) main_cntbar_detail_cont_pane_t1

0x3882,	// (0x0008238a) main_cntbar_detail_cont_pane_t2

0x3890,	// (0x00082398) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe98,	// (0x0008e9a0) main_cntbar_detail_cont_pane_t

0xd29d,	// (0x0008bda5) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd29d,	// (0x0008bda5) cell_cntbar_detail_list_shct_pane

0x389e,	// (0x000823a6) cntbar_detail_list_shct_pane_g1

0x38a7,	// (0x000823af) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9f,	// (0x0008e9a7) cntbar_detail_list_shct_pane_g

0xd2b1,	// (0x0008bdb9) cntbar_detail_list_event_pane_g1_ParamLimits

0xd2b1,	// (0x0008bdb9) cntbar_detail_list_event_pane_g1

0xd2bd,	// (0x0008bdc5) cntbar_detail_list_event_pane_g2_ParamLimits

0xd2bd,	// (0x0008bdc5) cntbar_detail_list_event_pane_g2

0x0005,

0xfea4,	// (0x0008e9ac) cntbar_detail_list_event_pane_g_ParamLimits

0xfea4,	// (0x0008e9ac) cntbar_detail_list_event_pane_g

0xd329,	// (0x0008be31) cntbar_detail_list_event_pane_t1_ParamLimits

0xd329,	// (0x0008be31) cntbar_detail_list_event_pane_t1

0xd33e,	// (0x0008be46) cntbar_detail_list_event_pane_t2_ParamLimits

0xd33e,	// (0x0008be46) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb1,	// (0x0008e9b9) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb1,	// (0x0008e9b9) cntbar_detail_list_event_pane_t

0x11ef,	// (0x0007fcf7) cell_cntbar_detail_list_shct_pane_g1

0x7a93,	// (0x0008659b) navi_pane_mv_g3

0x3f9a,	// (0x00082aa2) main_cntbar_detail_pane_ParamLimits

0x01a3,	// (0x0007ecab) main_notif_wgt_pane

0xa155,	// (0x00088c5d) aid_tch_main_mp4_pane_g4

0xa38a,	// (0x00088e92) popup_slider_window_cp02

0x35a9,	// (0x000820b1) list_recal_day_event_pane

0xd1ee,	// (0x0008bcf6) cntbar_detail_btn_pane_ParamLimits

0xd1ee,	// (0x0008bcf6) cntbar_detail_btn_pane

0xd1fe,	// (0x0008bd06) cntbar_detail_btn_pane_cp01_ParamLimits

0xd1fe,	// (0x0008bd06) cntbar_detail_btn_pane_cp01

0xd21a,	// (0x0008bd22) cntbar_detail_list_shct_pane_ParamLimits

0xd226,	// (0x0008bd2e) cntbar_detail_pane_g1_ParamLimits

0xd226,	// (0x0008bd2e) cntbar_detail_pane_g1

0xd232,	// (0x0008bd3a) cntbar_detail_pane_t1_ParamLimits

0xd232,	// (0x0008bd3a) cntbar_detail_pane_t1

0xd2c9,	// (0x0008bdd1) cntbar_detail_list_event_pane_g3_ParamLimits

0xd2c9,	// (0x0008bdd1) cntbar_detail_list_event_pane_g3

0xd2e1,	// (0x0008bde9) cntbar_detail_list_event_pane_g4_ParamLimits

0xd2e1,	// (0x0008bde9) cntbar_detail_list_event_pane_g4

0xd2f9,	// (0x0008be01) cntbar_detail_list_event_pane_g5_ParamLimits

0xd2f9,	// (0x0008be01) cntbar_detail_list_event_pane_g5

0xd311,	// (0x0008be19) cntbar_detail_list_event_pane_g6_ParamLimits

0xd311,	// (0x0008be19) cntbar_detail_list_event_pane_g6

0xd353,	// (0x0008be5b) cntbar_detail_list_event_pane_t3_ParamLimits

0xd353,	// (0x0008be5b) cntbar_detail_list_event_pane_t3

0xd365,	// (0x0008be6d) popup_notif_wgt_window_ParamLimits

0xd365,	// (0x0008be6d) popup_notif_wgt_window

0xd375,	// (0x0008be7d) popup_submenu_window_cp01_ParamLimits

0xd375,	// (0x0008be7d) popup_submenu_window_cp01

0xe44a,	// (0x0008cf52) bg_popup_window_pane_cp10

0x38b0,	// (0x000823b8) listscroll_notif_wgt_pane

0x38ba,	// (0x000823c2) list_notif_wgt_window

0x38c3,	// (0x000823cb) scroll_pane_cp033

0x38cc,	// (0x000823d4) list_notif_wgt_row_pane_ParamLimits

0x38cc,	// (0x000823d4) list_notif_wgt_row_pane

0x38e0,	// (0x000823e8) aid_size_list_notif_wgt_del

0x38e9,	// (0x000823f1) list_notif_wgt_row_pane_g1

0x38f1,	// (0x000823f9) list_notif_wgt_row_pane_g2

0x38f9,	// (0x00082401) list_notif_wgt_row_pane_g3

0x0002,

0xfeb8,	// (0x0008e9c0) list_notif_wgt_row_pane_g

0x3902,	// (0x0008240a) list_notif_wgt_row_pane_t1

0x3910,	// (0x00082418) list_notif_wgt_row_pane_t2

0x391e,	// (0x00082426) list_notif_wgt_row_pane_t3

0x0002,

0xfebf,	// (0x0008e9c7) list_notif_wgt_row_pane_t

0x1ef5,	// (0x000809fd) list_recal_day_event_pane_g1

0x392c,	// (0x00082434) list_recal_day_event_pane_t1

0x01a3,	// (0x0007ecab) bg_button_pane_cp045

0x393b,	// (0x00082443) cntbar_detail_btn_pane_t1

0x0ce7,	// (0x0007f7ef) main_callh_pane_ParamLimits

0x0ce7,	// (0x0007f7ef) main_callh_pane

0x01a3,	// (0x0007ecab) main_coverflow0_pane

0x01a3,	// (0x0007ecab) main_wgtman_pane

0xc502,	// (0x0008b00a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc502,	// (0x0008b00a) main_fs_bigclock_unlock_btn_pane

0x316d,	// (0x00081c75) bg_button_pane_cp16

0x317d,	// (0x00081c85) cell_tport_appsw_pane_g3

0xd383,	// (0x0008be8b) cf0_flow_pane_ParamLimits

0xd383,	// (0x0008be8b) cf0_flow_pane

0x3949,	// (0x00082451) listscroll_cf0_pane

0x3952,	// (0x0008245a) main_cf0_pane_g1

0xd392,	// (0x0008be9a) main_cf0_pane_t1_ParamLimits

0xd392,	// (0x0008be9a) main_cf0_pane_t1

0xd3a6,	// (0x0008beae) main_cf0_pane_t2_ParamLimits

0xd3a6,	// (0x0008beae) main_cf0_pane_t2

0x0001,

0xfec6,	// (0x0008e9ce) main_cf0_pane_t_ParamLimits

0xfec6,	// (0x0008e9ce) main_cf0_pane_t

0x395c,	// (0x00082464) scroll_pane_cp11

0xd3ba,	// (0x0008bec2) cf0_flow_pane_g1

0xd3c2,	// (0x0008beca) cf0_flow_pane_g2

0x0001,

0xfecb,	// (0x0008e9d3) cf0_flow_pane_g

0xd3ca,	// (0x0008bed2) cf0_flow_pane_t1

0x01a3,	// (0x0007ecab) main_call6_pane

0x01a3,	// (0x0007ecab) main_calllock_pane

0xd3d8,	// (0x0008bee0) call6_btn_grp_pane_ParamLimits

0xd3d8,	// (0x0008bee0) call6_btn_grp_pane

0xd3e7,	// (0x0008beef) call6_pane_g1_ParamLimits

0xd3e7,	// (0x0008beef) call6_pane_g1

0xd3f6,	// (0x0008befe) popup_call6_1st_window_ParamLimits

0xd3f6,	// (0x0008befe) popup_call6_1st_window

0xd404,	// (0x0008bf0c) popup_call6_2nd_window_ParamLimits

0xd404,	// (0x0008bf0c) popup_call6_2nd_window

0xd412,	// (0x0008bf1a) cell_call6_btn_pane_ParamLimits

0xd412,	// (0x0008bf1a) cell_call6_btn_pane

0xe44a,	// (0x0008cf52) bg_popup_call2_in_pane_cp03

0x3967,	// (0x0008246f) popup_call6_1st_window_g1

0x396f,	// (0x00082477) popup_call6_1st_window_g2

0x3977,	// (0x0008247f) popup_call6_1st_window_g3

0x0002,

0xfed0,	// (0x0008e9d8) popup_call6_1st_window_g

0x397f,	// (0x00082487) popup_call6_1st_window_t1

0x398e,	// (0x00082496) popup_call6_1st_window_t2

0x399e,	// (0x000824a6) popup_call6_1st_window_t3

0x0002,

0xfed7,	// (0x0008e9df) popup_call6_1st_window_t

0xe44a,	// (0x0008cf52) bg_popup_call2_in_pane_cp04

0x3967,	// (0x0008246f) popup_call6_2nd_window_g1

0x396f,	// (0x00082477) popup_call6_2nd_window_g2

0x3977,	// (0x0008247f) popup_call6_2nd_window_g3

0x0002,

0xfed0,	// (0x0008e9d8) popup_call6_2nd_window_g

0x397f,	// (0x00082487) popup_call6_2nd_window_t1

0x01a3,	// (0x0007ecab) bg_button_pane_cp15

0x39ae,	// (0x000824b6) cell_call6_btn_pane_g1

0x39b7,	// (0x000824bf) cell_call6_btn_pane_t1

0xd421,	// (0x0008bf29) listscroll_wgtman_pane_ParamLimits

0xd421,	// (0x0008bf29) listscroll_wgtman_pane

0xd43f,	// (0x0008bf47) wgtman_btn_pane_ParamLimits

0xd43f,	// (0x0008bf47) wgtman_btn_pane

0xe2fd,	// (0x0008ce05) aid_scroll_copy1

0x39c6,	// (0x000824ce) list_wgtman_pane

0xd474,	// (0x0008bf7c) wgtman_btn_pane_g1_ParamLimits

0xd474,	// (0x0008bf7c) wgtman_btn_pane_g1

0xd49c,	// (0x0008bfa4) wgtman_btn_pane_t1_ParamLimits

0xd49c,	// (0x0008bfa4) wgtman_btn_pane_t1

0x39d0,	// (0x000824d8) wgtman_btn_pane_t2_ParamLimits

0x39d0,	// (0x000824d8) wgtman_btn_pane_t2

0x0001,

0xfede,	// (0x0008e9e6) wgtman_btn_pane_t_ParamLimits

0xfede,	// (0x0008e9e6) wgtman_btn_pane_t

0xd4d3,	// (0x0008bfdb) listrow_wgtman_pane_ParamLimits

0xd4d3,	// (0x0008bfdb) listrow_wgtman_pane

0xd4ef,	// (0x0008bff7) listrow_wgtman_pane_g1

0xd4f8,	// (0x0008c000) listrow_wgtman_pane_g2

0x0001,

0xfee3,	// (0x0008e9eb) listrow_wgtman_pane_g

0xd502,	// (0x0008c00a) listrow_wgtman_pane_t1

0xd510,	// (0x0008c018) listrow_wgtman_pane_t2

0x0001,

0xfee8,	// (0x0008e9f0) listrow_wgtman_pane_t

0xd51e,	// (0x0008c026) wait_bar_pane_cp09

0x39e7,	// (0x000824ef) main_calllock_btn_pane

0x39f1,	// (0x000824f9) main_calllock_pane_g1

0x01a3,	// (0x0007ecab) bg_button_pane_cp17

0x39fc,	// (0x00082504) main_calllock_btn_pane_g1

0x3a05,	// (0x0008250d) main_calllock_btn_pane_t1

0x01a3,	// (0x0007ecab) main_dialer3_pane

0x01a3,	// (0x0007ecab) main_fmrd2_pane

0x11ef,	// (0x0007fcf7) main_fs_bigclock_unlock_btn_pane_g1

0x3a1c,	// (0x00082524) main_fs_bigclock_unlock_btn_pane_t1

0xd526,	// (0x0008c02e) area_fmrd2_info_pane_ParamLimits

0xd526,	// (0x0008c02e) area_fmrd2_info_pane

0xd534,	// (0x0008c03c) area_fmrd2_visual_pane_ParamLimits

0xd534,	// (0x0008c03c) area_fmrd2_visual_pane

0xd542,	// (0x0008c04a) fmrd2_indi_pane_ParamLimits

0xd542,	// (0x0008c04a) fmrd2_indi_pane

0xd54f,	// (0x0008c057) area_fmrd2_visual_pane_g1

0xd557,	// (0x0008c05f) area_fmrd2_visual_pane_t1

0xd567,	// (0x0008c06f) area_fmrd2_visual_pane_t2

0xd577,	// (0x0008c07f) area_fmrd2_visual_pane_t3

0x0002,

0xfef2,	// (0x0008e9fa) area_fmrd2_visual_pane_t

0xd587,	// (0x0008c08f) area_fmrd2_info_pane_g1

0xd58f,	// (0x0008c097) area_fmrd2_info_pane_t1

0xd59f,	// (0x0008c0a7) area_fmrd2_info_pane_t2

0xd5af,	// (0x0008c0b7) area_fmrd2_info_pane_t3

0xd5bf,	// (0x0008c0c7) area_fmrd2_info_pane_t4

0x0003,

0xfef9,	// (0x0008ea01) area_fmrd2_info_pane_t

0xd5cd,	// (0x0008c0d5) fmrd2_indi_pane_t1

0xd5dd,	// (0x0008c0e5) fmrd2_indi_pane_t2

0xd5ed,	// (0x0008c0f5) fmrd2_indi_pane_t3

0x0002,

0xff02,	// (0x0008ea0a) fmrd2_indi_pane_t

0x2bef,	// (0x000816f7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x2bef,	// (0x000816f7) list_single_fs_bigclock_indicator_pane_g5

0x2c93,	// (0x0008179b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x2c93,	// (0x0008179b) list_single_fs_bigclock_indicator_pane_t5

0xcdea,	// (0x0008b8f2) aid_cell_bcale_month_pane_ParamLimits

0xcdea,	// (0x0008b8f2) aid_cell_bcale_month_pane

0xcdf6,	// (0x0008b8fe) bcale_month_pane_ParamLimits

0xcdf6,	// (0x0008b8fe) bcale_month_pane

0xce06,	// (0x0008b90e) bcale_preview_pane_ParamLimits

0xce06,	// (0x0008b90e) bcale_preview_pane

0x37a4,	// (0x000822ac) list_single_fs_bigclock_pane_t1_ParamLimits

0x37be,	// (0x000822c6) list_single_fs_bigclock_pane_t2_ParamLimits

0x37be,	// (0x000822c6) list_single_fs_bigclock_pane_t2

0x0001,

0xfe89,	// (0x0008e991) list_single_fs_bigclock_pane_t_ParamLimits

0xfe89,	// (0x0008e991) list_single_fs_bigclock_pane_t

0x3a14,	// (0x0008251c) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeed,	// (0x0008e9f5) main_fs_bigclock_unlock_btn_pane_g

0xd5fb,	// (0x0008c103) aid_dia3_key_size_ParamLimits

0xd5fb,	// (0x0008c103) aid_dia3_key_size

0xd607,	// (0x0008c10f) aid_dia3_listrow_size_ParamLimits

0xd607,	// (0x0008c10f) aid_dia3_listrow_size

0xd617,	// (0x0008c11f) dia3_keypad_fun_pane_ParamLimits

0xd617,	// (0x0008c11f) dia3_keypad_fun_pane

0xd629,	// (0x0008c131) dia3_keypad_num_pane_ParamLimits

0xd629,	// (0x0008c131) dia3_keypad_num_pane

0xd63b,	// (0x0008c143) dia3_listscroll_pane_ParamLimits

0xd63b,	// (0x0008c143) dia3_listscroll_pane

0xd649,	// (0x0008c151) dia3_numentry_pane_ParamLimits

0xd649,	// (0x0008c151) dia3_numentry_pane

0x3a2a,	// (0x00082532) dia3_list_pane

0x3a35,	// (0x0008253d) scroll_pane_cp12

0x01a3,	// (0x0007ecab) bg_dia3_numentry_pane

0xd657,	// (0x0008c15f) dia3_numentry_pane_t1

0xd666,	// (0x0008c16e) cell_dia3_key_num_pane

0xd66e,	// (0x0008c176) cell_dia3_key0_fun_pane_ParamLimits

0xd66e,	// (0x0008c176) cell_dia3_key0_fun_pane

0xd67b,	// (0x0008c183) cell_dia3_key1_fun_pane_ParamLimits

0xd67b,	// (0x0008c183) cell_dia3_key1_fun_pane

0xd688,	// (0x0008c190) dia3_listrow_pane

0x28fb,	// (0x00081403) bg_dia3_numentry_pane_g1

0x01a3,	// (0x0007ecab) bg_button_pane_cp21

0x3a40,	// (0x00082548) cell_dia3_key_num_pane_t1

0x3a4e,	// (0x00082556) cell_dia3_key_num_pane_t2

0x3a5d,	// (0x00082565) cell_dia3_key_num_pane_t3

0x3a6c,	// (0x00082574) cell_dia3_key_num_pane_t4

0x0003,

0xff09,	// (0x0008ea11) cell_dia3_key_num_pane_t

0x01a3,	// (0x0007ecab) bg_button_pane_cp19

0xd695,	// (0x0008c19d) cell_dia3_key0_fun_pane_g1

0x01a3,	// (0x0007ecab) bg_button_pane_cp20

0xd69d,	// (0x0008c1a5) cell_dia3_key1_fun_pane_g1

0xd6a5,	// (0x0008c1ad) area_left_week_number_pane

0xd6ae,	// (0x0008c1b6) area_top_day_name_pane

0xd6b7,	// (0x0008c1bf) frame_month_view_pane

0xd6c1,	// (0x0008c1c9) grid_month_view_pane

0xd6cb,	// (0x0008c1d3) cell_top_day_name_pane_ParamLimits

0xd6cb,	// (0x0008c1d3) cell_top_day_name_pane

0xd6e5,	// (0x0008c1ed) cell_area_left_week_number_pane_ParamLimits

0xd6e5,	// (0x0008c1ed) cell_area_left_week_number_pane

0xd6f9,	// (0x0008c201) cell_month_view_pane_ParamLimits

0xd6f9,	// (0x0008c201) cell_month_view_pane

0x3a84,	// (0x0008258c) frm_month_g1

0xd716,	// (0x0008c21e) frm_month_g2

0xd720,	// (0x0008c228) frm_month_g3

0xd72a,	// (0x0008c232) frm_month_g4

0xd734,	// (0x0008c23c) frm_month_g5

0xd73e,	// (0x0008c246) frm_month_g6

0xd748,	// (0x0008c250) frm_month_g7

0x3a8d,	// (0x00082595) frm_month_g8

0xd752,	// (0x0008c25a) frm_month_g9

0xd75b,	// (0x0008c263) frm_month_g10

0xd764,	// (0x0008c26c) frm_month_g11

0xd76d,	// (0x0008c275) frm_month_g12

0xd776,	// (0x0008c27e) frm_month_g13

0xd77f,	// (0x0008c287) frm_month_g14

0xd788,	// (0x0008c290) frm_month_g15

0xd793,	// (0x0008c29b) frm_month_g16

0x000f,

0xff12,	// (0x0008ea1a) frm_month_g

0xd79e,	// (0x0008c2a6) cell_top_day_name_pane_t1

0xd7ad,	// (0x0008c2b5) cell_area_left_week_number_pane_g1

0xd79e,	// (0x0008c2a6) cell_area_left_week_number_pane_t1

0x11ef,	// (0x0007fcf7) cell_month_view_pane_g1

0xd7b5,	// (0x0008c2bd) cell_month_view_pane_t1

0x01a3,	// (0x0007ecab) main_fps_pane

0x2ec2,	// (0x000819ca) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x2ec2,	// (0x000819ca) cmail_ddmenu_btn02_pane_cp1

0x2ede,	// (0x000819e6) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x2ede,	// (0x000819e6) cmail_ddmenu_btn02_pane_cp2

0xd0c2,	// (0x0008bbca) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd0c2,	// (0x0008bbca) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3a,	// (0x0008e942) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3a,	// (0x0008e942) cmail_ddmenu_btn02_pane_g

0xd0e0,	// (0x0008bbe8) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd0e0,	// (0x0008bbe8) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3f,	// (0x0008e947) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3f,	// (0x0008e947) cmail_ddmenu_btn02_pane_t

0xd7c4,	// (0x0008c2cc) fps_text_pane_ParamLimits

0xd7c4,	// (0x0008c2cc) fps_text_pane

0xd7d1,	// (0x0008c2d9) main_fps_pane_g1_ParamLimits

0xd7d1,	// (0x0008c2d9) main_fps_pane_g1

0xd7df,	// (0x0008c2e7) wait_bar_pane_cp010_ParamLimits

0xd7df,	// (0x0008c2e7) wait_bar_pane_cp010

0xd7eb,	// (0x0008c2f3) fps_text_pane_t1_ParamLimits

0xd7eb,	// (0x0008c2f3) fps_text_pane_t1

0xa77c,	// (0x00089284) cam4_image_uncrop_pane_g1

0xa785,	// (0x0008928d) cam4_image_uncrop_pane_g2

0xa78e,	// (0x00089296) cam4_image_uncrop_pane_g3

0xa797,	// (0x0008929f) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x0008e415) cam4_image_uncrop_pane_g

0xd688,	// (0x0008c190) dia3_listrow_pane_ParamLimits

0x01a3,	// (0x0007ecab) main_phob2_pane

0xcc09,	// (0x0008b711) cell_tport_appsw_pane_cp02_ParamLimits

0xcc09,	// (0x0008b711) cell_tport_appsw_pane_cp02

0xcc18,	// (0x0008b720) cell_tport_appsw_pane_cp03_ParamLimits

0xcc18,	// (0x0008b720) cell_tport_appsw_pane_cp03

0x01a3,	// (0x0007ecab) phob2_contact_card_pane

0x01a3,	// (0x0007ecab) phob2_listscroll_pane

0x3a96,	// (0x0008259e) phob2_list_pane

0x3a9e,	// (0x000825a6) scroll_pane_cp034

0xd804,	// (0x0008c30c) phob2_cc_data_pane_ParamLimits

0xd804,	// (0x0008c30c) phob2_cc_data_pane

0xd81e,	// (0x0008c326) phob2_cc_listscroll_pane_ParamLimits

0xd81e,	// (0x0008c326) phob2_cc_listscroll_pane

0xd838,	// (0x0008c340) list_double_large_graphic_phob2_pane_ParamLimits

0xd838,	// (0x0008c340) list_double_large_graphic_phob2_pane

0xd85b,	// (0x0008c363) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd85b,	// (0x0008c363) list_double_large_graphic_phob2_pane_g1

0xd868,	// (0x0008c370) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd868,	// (0x0008c370) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x0008ea3b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x0008ea3b) list_double_large_graphic_phob2_pane_g

0xd874,	// (0x0008c37c) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd874,	// (0x0008c37c) list_double_large_graphic_phob2_pane_t1

0xd889,	// (0x0008c391) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd889,	// (0x0008c391) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x0008ea40) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x0008ea40) list_double_large_graphic_phob2_pane_t

0x01a3,	// (0x0007ecab) list_highlight_pane_cp024

0x3aa6,	// (0x000825ae) phob2_cc_button_pane

0xd89b,	// (0x0008c3a3) phob2_cc_data_pane_g1_ParamLimits

0xd89b,	// (0x0008c3a3) phob2_cc_data_pane_g1

0xd8a7,	// (0x0008c3af) phob2_cc_data_pane_g2_ParamLimits

0xd8a7,	// (0x0008c3af) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x0008ea45) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x0008ea45) phob2_cc_data_pane_g

0xd8b3,	// (0x0008c3bb) phob2_cc_data_pane_t1_ParamLimits

0xd8b3,	// (0x0008c3bb) phob2_cc_data_pane_t1

0xd8c5,	// (0x0008c3cd) phob2_cc_data_pane_t2_ParamLimits

0xd8c5,	// (0x0008c3cd) phob2_cc_data_pane_t2

0xd8d7,	// (0x0008c3df) phob2_cc_data_pane_t3_ParamLimits

0xd8d7,	// (0x0008c3df) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x0008ea4a) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x0008ea4a) phob2_cc_data_pane_t

0x3aae,	// (0x000825b6) phob2_cc_list_pane_ParamLimits

0x3aae,	// (0x000825b6) phob2_cc_list_pane

0x1fa0,	// (0x00080aa8) scroll_pane_cp035_ParamLimits

0x1fa0,	// (0x00080aa8) scroll_pane_cp035

0x3f9a,	// (0x00082aa2) bg_button_pane_cp033

0x3aba,	// (0x000825c2) phob2_cc_button_pane_g1

0x3ac6,	// (0x000825ce) phob2_cc_button_pane_t1

0x3adb,	// (0x000825e3) phob2_cc_button_pane_t2

0x0001,

0xff49,	// (0x0008ea51) phob2_cc_button_pane_t

0xd8e9,	// (0x0008c3f1) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd8e9,	// (0x0008c3f1) list_double_large_graphic_phob2_cc_pane

0xd919,	// (0x0008c421) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd919,	// (0x0008c421) list_double_large_graphic_phob2_cc_pane_g1

0xd92a,	// (0x0008c432) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd92a,	// (0x0008c432) list_double_large_graphic_phob2_cc_pane_g2

0xd939,	// (0x0008c441) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd939,	// (0x0008c441) list_double_large_graphic_phob2_cc_pane_g3

0xd948,	// (0x0008c450) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd948,	// (0x0008c450) list_double_large_graphic_phob2_cc_pane_g4

0xd959,	// (0x0008c461) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd959,	// (0x0008c461) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4e,	// (0x0008ea56) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4e,	// (0x0008ea56) list_double_large_graphic_phob2_cc_pane_g

0xd968,	// (0x0008c470) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xd968,	// (0x0008c470) list_double_large_graphic_phob2_cc_pane_t1

0xd991,	// (0x0008c499) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xd991,	// (0x0008c499) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff59,	// (0x0008ea61) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff59,	// (0x0008ea61) list_double_large_graphic_phob2_cc_pane_t

0x3aed,	// (0x000825f5) list_highlight_pane_cp025_ParamLimits

0x3aed,	// (0x000825f5) list_highlight_pane_cp025

0x3f9a,	// (0x00082aa2) bg_button_pane_cp033_ParamLimits

0x3aba,	// (0x000825c2) phob2_cc_button_pane_g1_ParamLimits

0x3ac6,	// (0x000825ce) phob2_cc_button_pane_t1_ParamLimits

0x3adb,	// (0x000825e3) phob2_cc_button_pane_t2_ParamLimits

0xff49,	// (0x0008ea51) phob2_cc_button_pane_t_ParamLimits

0x58dc,	// (0x000843e4) popup_wgtman_window

0x1da2,	// (0x000808aa) scroll_pane_cp038

0xd45c,	// (0x0008bf64) wgtman_btn_pane_cp_01_ParamLimits

0xd45c,	// (0x0008bf64) wgtman_btn_pane_cp_01

0x3afb,	// (0x00082603) wgtman_content_pane

0x3843,	// (0x0008234b) wgtman_heading_pane

0x01a3,	// (0x0007ecab) bg_heading_pane_cp02

0x3b04,	// (0x0008260c) wgtman_heading_pane_g1

0x3b0c,	// (0x00082614) wgtman_heading_pane_t1

0x3b1a,	// (0x00082622) scroll_pane_cp036

0x3b22,	// (0x0008262a) wgtman_list_pane

0x3b2a,	// (0x00082632) wgtman_list_pane_t1_ParamLimits

0x3b2a,	// (0x00082632) wgtman_list_pane_t1

0xa6db,	// (0x000891e3) cam4_grid_pane

0xb45e,	// (0x00089f66) bg_button_pane_cp015_ParamLimits

0xb470,	// (0x00089f78) bg_button_pane_cp016_ParamLimits

0xb483,	// (0x00089f8b) bg_button_pane_cp017_ParamLimits

0xb4d9,	// (0x00089fe1) popup_vitu2_query_window_g3_ParamLimits

0xb4d9,	// (0x00089fe1) popup_vitu2_query_window_g3

0xb594,	// (0x0008a09c) popup_vitu2_query_window_t6_ParamLimits

0xb594,	// (0x0008a09c) popup_vitu2_query_window_t6

0xb5bf,	// (0x0008a0c7) popup_vitu2_query_window_t7_ParamLimits

0xb5bf,	// (0x0008a0c7) popup_vitu2_query_window_t7

0x1bfa,	// (0x00080702) cam4_grid_pane_g1

0x1c03,	// (0x0008070b) cam4_grid_pane_g2

0x3b48,	// (0x00082650) cam4_grid_pane_g3

0x3b51,	// (0x00082659) cam4_grid_pane_g4

0x0003,

0xff5e,	// (0x0008ea66) cam4_grid_pane_g

0x660b,	// (0x00085113) aid_placing_vt_slider_lsc_ParamLimits

0x694b,	// (0x00085453) vidtel_button_pane_ParamLimits

0x694b,	// (0x00085453) vidtel_button_pane

0x01a3,	// (0x0007ecab) bg_button_pane_cp034

0xd9ba,	// (0x0008c4c2) vidtel_button_pane_g1

0x3b5c,	// (0x00082664) vidtel_button_pane_t1

0x1ebf,	// (0x000809c7) aid_size_vtel_slider_touch

0x1fa0,	// (0x00080aa8) scroll_pane_cp039

0x2939,	// (0x00081441) ncim_query_button_pane_cp01_ParamLimits

0x2958,	// (0x00081460) ncimui_query_pane_g1_ParamLimits

0x3f9a,	// (0x00082aa2) input_focus_pane_cp012_ParamLimits

0x297d,	// (0x00081485) ncim_query_entry_pane_t1_ParamLimits

0x1fa0,	// (0x00080aa8) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
