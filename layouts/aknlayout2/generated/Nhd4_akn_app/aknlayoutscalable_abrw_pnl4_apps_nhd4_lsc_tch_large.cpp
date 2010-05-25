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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x000a3c65 };

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
0x04a1,	// (0x000a4106) Screen

0x04ad,	// (0x000a4112) application_window

0x0515,	// (0x000a417a) area_bottom_pane_ParamLimits

0x0515,	// (0x000a417a) area_bottom_pane

0x0572,	// (0x000a41d7) area_top_pane_ParamLimits

0x0572,	// (0x000a41d7) area_top_pane

0x945b,	// (0x000ad0c0) call_video_uplink_pane_ParamLimits

0x945b,	// (0x000ad0c0) call_video_uplink_pane

0x0600,	// (0x000a4265) main_pane_ParamLimits

0x0600,	// (0x000a4265) main_pane

0xc0bb,	// (0x000afd20) context_pane

0x38d1,	// (0x000a7536) navi_pane

0x3903,	// (0x000a7568) popup_cale_events_window_ParamLimits

0x3903,	// (0x000a7568) popup_cale_events_window

0xc0ce,	// (0x000afd33) popup_mup_playback_window

0x391b,	// (0x000a7580) signal_pane

0x9f88,	// (0x000adbed) main_browser_pane

0xa15f,	// (0x000addc4) main_burst_pane

0x3627,	// (0x000a728c) main_calc_pane

0xc098,	// (0x000afcfd) main_cale_day_pane

0x363b,	// (0x000a72a0) main_cale_month_pane

0xc098,	// (0x000afcfd) main_cale_week_pane

0xa15f,	// (0x000addc4) main_call_pane

0x954c,	// (0x000ad1b1) main_call_poc_pane

0xa15f,	// (0x000addc4) main_camera_pane

0xa15f,	// (0x000addc4) main_chi_dic_pane

0xa936,	// (0x000ae59b) main_clock_pane

0x954c,	// (0x000ad1b1) main_fmradio_pane

0xa15f,	// (0x000addc4) main_graph_messa_pane

0x954c,	// (0x000ad1b1) main_help_pane

0x9f88,	// (0x000adbed) main_im_pane

0x97a7,	// (0x000ad40c) main_image_pane_ParamLimits

0x97a7,	// (0x000ad40c) main_image_pane

0x954c,	// (0x000ad1b1) main_location2_pane

0xa15f,	// (0x000addc4) main_location_pane

0x97a7,	// (0x000ad40c) main_messa_pane

0x954c,	// (0x000ad1b1) main_mp2_pane

0xa15f,	// (0x000addc4) main_mp_pane

0x954c,	// (0x000ad1b1) main_msg_pane

0x954c,	// (0x000ad1b1) main_mup_eq_pane

0x954c,	// (0x000ad1b1) main_mup_pane

0x9f88,	// (0x000adbed) main_notes_pane

0x954c,	// (0x000ad1b1) main_pec_pane

0x954c,	// (0x000ad1b1) main_phob_pane

0x954c,	// (0x000ad1b1) main_pinb_pane

0x954c,	// (0x000ad1b1) main_postcard_pane

0x954c,	// (0x000ad1b1) main_qdial_pane

0xa15f,	// (0x000addc4) main_skin_pane

0x954c,	// (0x000ad1b1) main_smil2_pane

0xa15f,	// (0x000addc4) main_smil_pane

0xa15f,	// (0x000addc4) main_video_pane

0xa15f,	// (0x000addc4) main_video_tele_pane

0x97a7,	// (0x000ad40c) main_viewer_pane_ParamLimits

0x97a7,	// (0x000ad40c) main_viewer_pane

0xa15f,	// (0x000addc4) main_vorec_pane

0x368d,	// (0x000a72f2) popup_blid_sat_info_window_ParamLimits

0x368d,	// (0x000a72f2) popup_blid_sat_info_window

0x36e5,	// (0x000a734a) popup_dyc_status_message_window_ParamLimits

0x36e5,	// (0x000a734a) popup_dyc_status_message_window

0x36fd,	// (0x000a7362) popup_grid_large_graphic_window_ParamLimits

0x36fd,	// (0x000a7362) popup_grid_large_graphic_window

0x37ad,	// (0x000a7412) popup_loc_request_window_ParamLimits

0x37ad,	// (0x000a7412) popup_loc_request_window

0x38a9,	// (0x000a750e) popup_wml_address_window_ParamLimits

0x38a9,	// (0x000a750e) popup_wml_address_window

0x3461,	// (0x000a70c6) call_muted_g1

0x3115,	// (0x000a6d7a) popup_call_audio_conf_window_ParamLimits

0x3115,	// (0x000a6d7a) popup_call_audio_conf_window

0x3475,	// (0x000a70da) popup_call_audio_first_window_ParamLimits

0x3475,	// (0x000a70da) popup_call_audio_first_window

0x34eb,	// (0x000a7150) popup_call_audio_in_window_ParamLimits

0x34eb,	// (0x000a7150) popup_call_audio_in_window

0x3527,	// (0x000a718c) popup_call_audio_out_window_ParamLimits

0x3527,	// (0x000a718c) popup_call_audio_out_window

0x3561,	// (0x000a71c6) popup_call_audio_second_window_ParamLimits

0x3561,	// (0x000a71c6) popup_call_audio_second_window

0x35b7,	// (0x000a721c) popup_call_audio_wait_window_ParamLimits

0x35b7,	// (0x000a721c) popup_call_audio_wait_window

0x35ec,	// (0x000a7251) popup_number_entry_window_ParamLimits

0x35ec,	// (0x000a7251) popup_number_entry_window

0xe1cd,	// (0x000b1e32) bg_popup_call_pane_cp05_ParamLimits

0xe1cd,	// (0x000b1e32) bg_popup_call_pane_cp05

0xe1ed,	// (0x000b1e52) popup_number_entry_window_t1

0xecbe,	// (0x000b2923) popup_number_entry_window_t2

0xecd0,	// (0x000b2935) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x000b2d2f) popup_number_entry_window_t

0xece2,	// (0x000b2947) text_title_cp2

0xecf5,	// (0x000b295a) bg_popup_call_pane_cp_ParamLimits

0xecf5,	// (0x000b295a) bg_popup_call_pane_cp

0xed03,	// (0x000b2968) call_thumbnail_pane

0xed0b,	// (0x000b2970) popup_call_audio_in_window_g1_ParamLimits

0xed0b,	// (0x000b2970) popup_call_audio_in_window_g1

0xed17,	// (0x000b297c) popup_call_audio_in_window_g2_ParamLimits

0xed17,	// (0x000b297c) popup_call_audio_in_window_g2

0xed23,	// (0x000b2988) popup_call_audio_in_window_g3_ParamLimits

0xed23,	// (0x000b2988) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x000b2d38) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x000b2d38) popup_call_audio_in_window_g

0xed2f,	// (0x000b2994) popup_call_audio_in_window_t1_ParamLimits

0xed2f,	// (0x000b2994) popup_call_audio_in_window_t1

0xed4b,	// (0x000b29b0) popup_call_audio_in_window_t2_ParamLimits

0xed4b,	// (0x000b29b0) popup_call_audio_in_window_t2

0xed67,	// (0x000b29cc) popup_call_audio_in_window_t3_ParamLimits

0xed67,	// (0x000b29cc) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x000b2d3f) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x000b2d3f) popup_call_audio_in_window_t

0xecf5,	// (0x000b295a) bg_popup_call_pane_cp01_ParamLimits

0xecf5,	// (0x000b295a) bg_popup_call_pane_cp01

0xed03,	// (0x000b2968) call_thumbnail_pane_cp02

0xed7a,	// (0x000b29df) call_type_pane_cp022

0xed82,	// (0x000b29e7) popup_call_audio_out_window_g1_ParamLimits

0xed82,	// (0x000b29e7) popup_call_audio_out_window_g1

0xed94,	// (0x000b29f9) popup_call_audio_out_window_g2_ParamLimits

0xed94,	// (0x000b29f9) popup_call_audio_out_window_g2

0xeda0,	// (0x000b2a05) popup_call_audio_out_window_g3_ParamLimits

0xeda0,	// (0x000b2a05) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x000b2d46) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x000b2d46) popup_call_audio_out_window_g

0xedb2,	// (0x000b2a17) popup_call_audio_out_window_t1_ParamLimits

0xedb2,	// (0x000b2a17) popup_call_audio_out_window_t1

0xedca,	// (0x000b2a2f) popup_call_audio_out_window_t2_ParamLimits

0xedca,	// (0x000b2a2f) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x000b2d4d) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x000b2d4d) popup_call_audio_out_window_t

0xeddf,	// (0x000b2a44) bg_popup_call_pane_ParamLimits

0xeddf,	// (0x000b2a44) bg_popup_call_pane

0x07bd,	// (0x000a4422) call_thumbnail_pane_cp_ParamLimits

0x07bd,	// (0x000a4422) call_thumbnail_pane_cp

0xee63,	// (0x000b2ac8) call_type_pane_cp01_ParamLimits

0xee63,	// (0x000b2ac8) call_type_pane_cp01

0xeea7,	// (0x000b2b0c) popup_call_audio_first_window_g1_ParamLimits

0xeea7,	// (0x000b2b0c) popup_call_audio_first_window_g1

0xeef3,	// (0x000b2b58) popup_call_audio_first_window_g2_ParamLimits

0xeef3,	// (0x000b2b58) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x000b2d52) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x000b2d52) popup_call_audio_first_window_g

0xef37,	// (0x000b2b9c) popup_call_audio_first_window_t1_ParamLimits

0xef37,	// (0x000b2b9c) popup_call_audio_first_window_t1

0x9491,	// (0x000ad0f6) popup_call_audio_first_window_t4_ParamLimits

0x9491,	// (0x000ad0f6) popup_call_audio_first_window_t4

0x951d,	// (0x000ad182) popup_call_audio_first_window_t5_ParamLimits

0x951d,	// (0x000ad182) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x000b2d57) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x000b2d57) popup_call_audio_first_window_t

0x954c,	// (0x000ad1b1) bg_popup_call_pane_cp02

0x9556,	// (0x000ad1bb) call_type_pane_cp023

0x955e,	// (0x000ad1c3) popup_call_audio_wait_window_g1

0x9566,	// (0x000ad1cb) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000b2d5e) popup_call_audio_wait_window_g

0x956e,	// (0x000ad1d3) popup_call_audio_wait_window_t3

0x957c,	// (0x000ad1e1) bg_popup_call_pane_cp03_ParamLimits

0x957c,	// (0x000ad1e1) bg_popup_call_pane_cp03

0x95dc,	// (0x000ad241) call_thumbnail_pane_cp011_ParamLimits

0x95dc,	// (0x000ad241) call_thumbnail_pane_cp011

0x95e8,	// (0x000ad24d) call_type_pane_cp034_ParamLimits

0x95e8,	// (0x000ad24d) call_type_pane_cp034

0x9624,	// (0x000ad289) popup_call_audio_second_window_g1_ParamLimits

0x9624,	// (0x000ad289) popup_call_audio_second_window_g1

0x9660,	// (0x000ad2c5) popup_call_audio_second_window_g2_ParamLimits

0x9660,	// (0x000ad2c5) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x000b2d63) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x000b2d63) popup_call_audio_second_window_g

0x969c,	// (0x000ad301) popup_call_audio_second_window_t1_ParamLimits

0x969c,	// (0x000ad301) popup_call_audio_second_window_t1

0x971d,	// (0x000ad382) popup_call_audio_second_window_t2_ParamLimits

0x971d,	// (0x000ad382) popup_call_audio_second_window_t2

0x9753,	// (0x000ad3b8) popup_call_audio_second_window_t3_ParamLimits

0x9753,	// (0x000ad3b8) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x000b2d68) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x000b2d68) popup_call_audio_second_window_t

0x954c,	// (0x000ad1b1) bg_popup_call_pane_cp04

0x9789,	// (0x000ad3ee) list_conf_pane

0x9791,	// (0x000ad3f6) popup_call_audio_conf_window_t1

0x979f,	// (0x000ad404) call_thumbnail_pane_g1

0x97a7,	// (0x000ad40c) bg_pinb_pane_ParamLimits

0x97a7,	// (0x000ad40c) bg_pinb_pane

0x97b5,	// (0x000ad41a) find_pinb_pane

0x97be,	// (0x000ad423) listscroll_pinb_pane_ParamLimits

0x97be,	// (0x000ad423) listscroll_pinb_pane

0x97cd,	// (0x000ad432) pinb_bg_pane_g1

0x07e1,	// (0x000a4446) pinb_bg_pane_g2

0x07ed,	// (0x000a4452) pinb_bg_pane_g3

0x07f9,	// (0x000a445e) pinb_bg_pane_g4

0x0805,	// (0x000a446a) pinb_bg_pane_g5

0x0811,	// (0x000a4476) pinb_bg_pane_g6

0x081c,	// (0x000a4481) pinb_bg_pane_g7

0x0827,	// (0x000a448c) pinb_bg_pane_g8

0x0832,	// (0x000a4497) pinb_bg_pane_g9

0x083c,	// (0x000a44a1) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x000b2d6f) pinb_bg_pane_g

0x0859,	// (0x000a44be) grid_pinb_pane

0x0862,	// (0x000a44c7) list_pinb_pane

0x086b,	// (0x000a44d0) scroll_pane_cp01_ParamLimits

0x086b,	// (0x000a44d0) scroll_pane_cp01

0x97d7,	// (0x000ad43c) find_pinb_pane_g1_ParamLimits

0x97d7,	// (0x000ad43c) find_pinb_pane_g1

0x97ef,	// (0x000ad454) find_pinb_pane_t1

0x9801,	// (0x000ad466) find_pinb_pane_t2

0x0001,

0xf124,	// (0x000b2d89) find_pinb_pane_t

0x9816,	// (0x000ad47b) input_focus_pane_cp01_ParamLimits

0x9816,	// (0x000ad47b) input_focus_pane_cp01

0x087d,	// (0x000a44e2) cell_pinb_pane_ParamLimits

0x087d,	// (0x000a44e2) cell_pinb_pane

0x08a8,	// (0x000a450d) cell_pinb_pane_g1_ParamLimits

0x08a8,	// (0x000a450d) cell_pinb_pane_g1

0x9822,	// (0x000ad487) cell_pinb_pane_g2_ParamLimits

0x9822,	// (0x000ad487) cell_pinb_pane_g2

0x982e,	// (0x000ad493) cell_pinb_pane_g3_ParamLimits

0x982e,	// (0x000ad493) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x000b2d8e) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x000b2d8e) cell_pinb_pane_g

0x954c,	// (0x000ad1b1) grid_highlight_pane_cp01

0x08bb,	// (0x000a4520) list_pinb_item_pane_ParamLimits

0x08bb,	// (0x000a4520) list_pinb_item_pane

0x954c,	// (0x000ad1b1) list_highlight_pane_cp02

0x08ce,	// (0x000a4533) list_pinb_item_pane_g1_ParamLimits

0x08ce,	// (0x000a4533) list_pinb_item_pane_g1

0x08db,	// (0x000a4540) list_pinb_item_pane_g2_ParamLimits

0x08db,	// (0x000a4540) list_pinb_item_pane_g2

0x08e7,	// (0x000a454c) list_pinb_item_pane_g3_ParamLimits

0x08e7,	// (0x000a454c) list_pinb_item_pane_g3

0x08f8,	// (0x000a455d) list_pinb_item_pane_g4_ParamLimits

0x08f8,	// (0x000a455d) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x000b2d95) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x000b2d95) list_pinb_item_pane_g

0x0904,	// (0x000a4569) list_pinb_item_pane_t1_ParamLimits

0x0904,	// (0x000a4569) list_pinb_item_pane_t1

0x0939,	// (0x000a459e) calc_display_pane

0x0961,	// (0x000a45c6) calc_paper_pane

0x0984,	// (0x000a45e9) grid_calc_pane

0x954c,	// (0x000ad1b1) bg_list_pane_cp01

0x09b2,	// (0x000a4617) clock_g1

0x09ba,	// (0x000a461f) clock_g2

0x0001,

0xf139,	// (0x000b2d9e) clock_g

0x09c2,	// (0x000a4627) clock_t1_ParamLimits

0x09c2,	// (0x000a4627) clock_t1

0x09d7,	// (0x000a463c) clock_t2_ParamLimits

0x09d7,	// (0x000a463c) clock_t2

0x09e9,	// (0x000a464e) clock_t3_ParamLimits

0x09e9,	// (0x000a464e) clock_t3

0x09fb,	// (0x000a4660) clock_t4_ParamLimits

0x09fb,	// (0x000a4660) clock_t4

0x0a0d,	// (0x000a4672) clock_t5_ParamLimits

0x0a0d,	// (0x000a4672) clock_t5

0x0a22,	// (0x000a4687) clock_t6_ParamLimits

0x0a22,	// (0x000a4687) clock_t6

0x0a34,	// (0x000a4699) clock_t7_ParamLimits

0x0a34,	// (0x000a4699) clock_t7

0x0a46,	// (0x000a46ab) clock_t8_ParamLimits

0x0a46,	// (0x000a46ab) clock_t8

0x0a5a,	// (0x000a46bf) clock_t9_ParamLimits

0x0a5a,	// (0x000a46bf) clock_t9

0x0008,

0xf13e,	// (0x000b2da3) clock_t_ParamLimits

0xf13e,	// (0x000b2da3) clock_t

0x9842,	// (0x000ad4a7) popup_clock_analogue_window_cp02

0x9842,	// (0x000ad4a7) popup_clock_digital_window_cp01

0x984a,	// (0x000ad4af) listscroll_help_pane

0x954c,	// (0x000ad1b1) phob_pre_status_pane

0x9854,	// (0x000ad4b9) grid_qdial_pane

0x97a7,	// (0x000ad40c) listscroll_mce_pane

0x97a7,	// (0x000ad40c) bg_notes_pane

0x9f66,	// (0x000adbcb) list_notes_pane

0x0a6e,	// (0x000a46d3) scroll_pane_cp06

0x9f74,	// (0x000adbd9) bg_calc_paper_pane

0x985e,	// (0x000ad4c3) list_calc_pane

0x9f88,	// (0x000adbed) bg_calc_display_pane

0x0a82,	// (0x000a46e7) calc_display_pane_t1

0x0a94,	// (0x000a46f9) calc_display_pane_t2

0x9878,	// (0x000ad4dd) calc_display_pane_t3

0x0002,

0xf151,	// (0x000b2db6) calc_display_pane_t

0x0aa6,	// (0x000a470b) cell_calc_pane_ParamLimits

0x0aa6,	// (0x000a470b) cell_calc_pane

0x9f94,	// (0x000adbf9) bg_calc_paper_pane_g1

0x9fa0,	// (0x000adc05) bg_calc_paper_pane_g2

0x9fac,	// (0x000adc11) bg_calc_paper_pane_g3

0x9fb8,	// (0x000adc1d) bg_calc_paper_pane_g4

0x9fc4,	// (0x000adc29) bg_calc_paper_pane_g5

0x0add,	// (0x000a4742) bg_calc_paper_pane_g6

0x0aec,	// (0x000a4751) bg_calc_paper_pane_g7

0x0afb,	// (0x000a4760) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x000b2dbd) bg_calc_paper_pane_g

0x0b0e,	// (0x000a4773) calc_bg_paper_pane_g9

0x0b21,	// (0x000a4786) list_calc_item_pane_ParamLimits

0x0b21,	// (0x000a4786) list_calc_item_pane

0x9fd0,	// (0x000adc35) list_calc_item_pane_g1

0x988a,	// (0x000ad4ef) list_calc_item_pane_t1_ParamLimits

0x988a,	// (0x000ad4ef) list_calc_item_pane_t1

0x0b3a,	// (0x000a479f) list_calc_item_pane_t2_ParamLimits

0x0b3a,	// (0x000a479f) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x000b2dce) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x000b2dce) list_calc_item_pane_t

0x9fdd,	// (0x000adc42) cell_calc_pane_g1

0x9fe7,	// (0x000adc4c) grid_highlight_pane_cp02

0xa009,	// (0x000adc6e) bg_calc_display_pane_g1

0x989c,	// (0x000ad501) bg_calc_display_pane_g2

0xa012,	// (0x000adc77) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x000b2dd8) bg_calc_display_pane_g

0x0b6c,	// (0x000a47d1) cell_qdial_pane_ParamLimits

0x0b6c,	// (0x000a47d1) cell_qdial_pane

0x0b80,	// (0x000a47e5) cell_qdial_pane_g1_ParamLimits

0x0b80,	// (0x000a47e5) cell_qdial_pane_g1

0x0b96,	// (0x000a47fb) cell_qdial_pane_g2_ParamLimits

0x0b96,	// (0x000a47fb) cell_qdial_pane_g2

0xa01b,	// (0x000adc80) cell_qdial_pane_g3_ParamLimits

0xa01b,	// (0x000adc80) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000b2ddf) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000b2ddf) cell_qdial_pane_g

0x0bbc,	// (0x000a4821) cell_qdial_pane_t1_ParamLimits

0x0bbc,	// (0x000a4821) cell_qdial_pane_t1

0x0bd4,	// (0x000a4839) cell_qdial_pane_t2_ParamLimits

0x0bd4,	// (0x000a4839) cell_qdial_pane_t2

0x0be7,	// (0x000a484c) cell_qdial_pane_t3_ParamLimits

0x0be7,	// (0x000a484c) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000b2de8) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000b2de8) cell_qdial_pane_t

0x954c,	// (0x000ad1b1) grid_highlight_pane_cp04

0xa027,	// (0x000adc8c) thumbnail_qdial_pane_ParamLimits

0xa027,	// (0x000adc8c) thumbnail_qdial_pane

0xa083,	// (0x000adce8) list_help_pane

0xa08c,	// (0x000adcf1) scroll_pane_cp02

0xb5b3,	// (0x000af218) help_list_pane_t1_ParamLimits

0xb5b3,	// (0x000af218) help_list_pane_t1

0x98a6,	// (0x000ad50b) bg_notes_pane_g2

0x98ae,	// (0x000ad513) bg_notes_pane_g3

0x98b6,	// (0x000ad51b) notes_bg_pane_g1

0x98be,	// (0x000ad523) notes_bg_pane_g4

0x98c6,	// (0x000ad52b) notes_bg_pane_g5

0x98ce,	// (0x000ad533) notes_bg_pane_g6

0x98d6,	// (0x000ad53b) notes_bg_pane_g7

0x98de,	// (0x000ad543) notes_bg_pane_g8

0x98e6,	// (0x000ad54b) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x000b2e06) notes_bg_pane_g

0x0bfa,	// (0x000a485f) list_notes_text_pane_ParamLimits

0x0bfa,	// (0x000a485f) list_notes_text_pane

0xa095,	// (0x000adcfa) list_notes_text_pane_g1

0xb5d1,	// (0x000af236) list_notes_text_pane_t1

0x0c10,	// (0x000a4875) listscroll_cale_week_pane

0x0c3c,	// (0x000a48a1) bg_cale_heading_pane

0xa0b8,	// (0x000add1d) bg_cale_pane_cp01

0x0c54,	// (0x000a48b9) cale_week_corner_pane

0x0c73,	// (0x000a48d8) cale_week_day_heading_pane

0x0c90,	// (0x000a48f5) cale_week_scroll_pane_g1

0x0ca3,	// (0x000a4908) cale_week_scroll_pane_g2

0x0cbb,	// (0x000a4920) cale_week_scroll_pane_g3

0x0cd3,	// (0x000a4938) cale_week_scroll_pane_g4

0x0ceb,	// (0x000a4950) cale_week_scroll_pane_g5

0x0d0b,	// (0x000a4970) cale_week_scroll_pane_g6

0x0d2b,	// (0x000a4990) cale_week_scroll_pane_g7

0x0d4b,	// (0x000a49b0) cale_week_scroll_pane_g8

0x0d6f,	// (0x000a49d4) cale_week_scroll_pane_g9

0x0d87,	// (0x000a49ec) cale_week_scroll_pane_g10

0x0d9f,	// (0x000a4a04) cale_week_scroll_pane_g11

0x0db7,	// (0x000a4a1c) cale_week_scroll_pane_g12

0x0dcf,	// (0x000a4a34) cale_week_scroll_pane_g13

0x0dcf,	// (0x000a4a34) cale_week_scroll_pane_g14

0x0dcf,	// (0x000a4a34) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000b2e15) cale_week_scroll_pane_g

0x0e0b,	// (0x000a4a70) cale_week_time_pane

0x0e2f,	// (0x000a4a94) grid_cale_week_pane

0xa0e7,	// (0x000add4c) scroll_pane_cp08

0x0e55,	// (0x000a4aba) cell_cale_week_pane_ParamLimits

0x0e55,	// (0x000a4aba) cell_cale_week_pane

0x0ee3,	// (0x000a4b48) cale_week_day_heading_pane_t1

0x0f0d,	// (0x000a4b72) cale_week_day_heading_pane_t2

0x0f3c,	// (0x000a4ba1) cale_week_day_heading_pane_t3

0x0f6b,	// (0x000a4bd0) cale_week_day_heading_pane_t4

0x0f9a,	// (0x000a4bff) cale_week_day_heading_pane_t5

0x0fd1,	// (0x000a4c36) cale_week_day_heading_pane_t6

0x1008,	// (0x000a4c6d) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000b2e36) cale_week_day_heading_pane_t

0xa104,	// (0x000add69) bg_cale_side_pane

0x1032,	// (0x000a4c97) cale_week_time_pane_t1

0x104c,	// (0x000a4cb1) cale_week_time_pane_t2

0x1066,	// (0x000a4ccb) cale_week_time_pane_t3

0x1080,	// (0x000a4ce5) cale_week_time_pane_t4

0x109a,	// (0x000a4cff) cale_week_time_pane_t5

0x10b4,	// (0x000a4d19) cale_week_time_pane_t6

0x10ce,	// (0x000a4d33) cale_week_time_pane_t7

0x10e8,	// (0x000a4d4d) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x000b2e45) cale_week_time_pane_t

0x1108,	// (0x000a4d6d) cell_cale_week_pane_g2

0x112c,	// (0x000a4d91) cell_cale_week_pane_g3_ParamLimits

0x112c,	// (0x000a4d91) cell_cale_week_pane_g3

0xa112,	// (0x000add77) grid_highlight_pane_cp07

0xa11a,	// (0x000add7f) listscroll_gms_pane

0xa124,	// (0x000add89) grid_gms_pane

0xa12d,	// (0x000add92) listscroll_gms_pane_g1

0xa135,	// (0x000add9a) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x000b2e56) listscroll_gms_pane_g

0x1144,	// (0x000a4da9) scroll_pane_cp010

0x114f,	// (0x000a4db4) cell_gms_pane_ParamLimits

0x114f,	// (0x000a4db4) cell_gms_pane

0x1161,	// (0x000a4dc6) cell_gms_pane_g1

0xa13d,	// (0x000adda2) cell_gms_pane_g2

0xa145,	// (0x000addaa) cell_gms_pane_g3

0xa14e,	// (0x000addb3) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x000b2e5b) cell_gms_pane_g

0xa157,	// (0x000addbc) grid_highlight_pane_cp09

0x340b,	// (0x000a7070) phob_pre_status_pane_g1

0x3413,	// (0x000a7078) phob_pre_status_pane_g2

0x341b,	// (0x000a7080) phob_pre_status_pane_g3

0x3423,	// (0x000a7088) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x000b3259) phob_pre_status_pane_g

0x3433,	// (0x000a7098) phob_pre_status_pane_t1

0x3441,	// (0x000a70a6) phob_pre_status_pane_t2

0x3451,	// (0x000a70b6) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x000b3264) phob_pre_status_pane_t

0xa15f,	// (0x000addc4) bg_list_pane_cp05

0x1171,	// (0x000a4dd6) grid_vorec_pane

0x1179,	// (0x000a4dde) vorec_t1

0x1187,	// (0x000a4dec) vorec_t2

0x1195,	// (0x000a4dfa) vorec_t3

0x11a3,	// (0x000a4e08) vorec_t4

0x9435,	// (0x000ad09a) vorec_t5

0x9443,	// (0x000ad0a8) vorec_t6

0x0004,

0xf1ff,	// (0x000b2e64) vorec_t

0x9451,	// (0x000ad0b6) wait_bar_pane_cp01

0x11bf,	// (0x000a4e24) cell_vorec_pane_ParamLimits

0x11bf,	// (0x000a4e24) cell_vorec_pane

0x98ee,	// (0x000ad553) cell_vorec_pane_g1

0x954c,	// (0x000ad1b1) grid_highlight_pane_cp05

0x11ea,	// (0x000a4e4f) cams_zoom_pane

0x11f9,	// (0x000a4e5e) image_vga_pane

0x1213,	// (0x000a4e78) main_camera_pane_g1

0x1225,	// (0x000a4e8a) main_camera_pane_g2

0x1235,	// (0x000a4e9a) main_camera_pane_g3

0x1245,	// (0x000a4eaa) main_camera_pane_g4

0x1255,	// (0x000a4eba) main_camera_pane_g5

0x1265,	// (0x000a4eca) main_camera_pane_g6

0x1275,	// (0x000a4eda) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000b2e6f) main_camera_pane_g

0x1285,	// (0x000a4eea) main_camera_pane_t1

0x129b,	// (0x000a4f00) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000b2e80) main_camera_pane_t

0x12d5,	// (0x000a4f3a) cams_zoom_pane_cp_ParamLimits

0x12d5,	// (0x000a4f3a) cams_zoom_pane_cp

0x12fd,	// (0x000a4f62) image_cif_pane_ParamLimits

0x12fd,	// (0x000a4f62) image_cif_pane

0x1338,	// (0x000a4f9d) image_subqcif_pane

0x1340,	// (0x000a4fa5) main_video_pane_g1_ParamLimits

0x1340,	// (0x000a4fa5) main_video_pane_g1

0x1364,	// (0x000a4fc9) main_video_pane_g2_ParamLimits

0x1364,	// (0x000a4fc9) main_video_pane_g2

0x1398,	// (0x000a4ffd) main_video_pane_g3_ParamLimits

0x1398,	// (0x000a4ffd) main_video_pane_g3

0x13c6,	// (0x000a502b) main_video_pane_g4_ParamLimits

0x13c6,	// (0x000a502b) main_video_pane_g4

0x13f4,	// (0x000a5059) main_video_pane_g5_ParamLimits

0x13f4,	// (0x000a5059) main_video_pane_g5

0xa173,	// (0x000addd8) main_video_pane_g6_ParamLimits

0xa173,	// (0x000addd8) main_video_pane_g6

0x0006,

0xf220,	// (0x000b2e85) main_video_pane_g_ParamLimits

0xf220,	// (0x000b2e85) main_video_pane_g

0x141d,	// (0x000a5082) main_video_pane_t1_ParamLimits

0x141d,	// (0x000a5082) main_video_pane_t1

0xa18d,	// (0x000addf2) cams_zoom_pane_g1

0xa196,	// (0x000addfb) cams_zoom_pane_g2

0xa19f,	// (0x000ade04) cams_zoom_pane_g3

0xa1a8,	// (0x000ade0d) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000b2e94) cams_zoom_pane_g

0x147a,	// (0x000a50df) grid_cams_pane

0x1494,	// (0x000a50f9) linegrid_cams_pane

0x14a7,	// (0x000a510c) cell_cams_pane_ParamLimits

0x14a7,	// (0x000a510c) cell_cams_pane

0xa1b1,	// (0x000ade16) cams_burst_image_pane

0xa1b9,	// (0x000ade1e) cell_cams_pane_g1

0x954c,	// (0x000ad1b1) grid_highlight_pane_cp03

0x9fdd,	// (0x000adc42) mp_bg_pane_g1

0x954c,	// (0x000ad1b1) bg_list_pane_cp03

0xbfbd,	// (0x000afc22) bg_mp_pane

0xbfc5,	// (0x000afc2a) grid_mp_pane

0xbfcd,	// (0x000afc32) media_player_g1

0xbfd5,	// (0x000afc3a) media_player_t1

0xbfe3,	// (0x000afc48) media_player_t2

0xbff1,	// (0x000afc56) media_player_t3

0xbfff,	// (0x000afc64) media_player_t4

0xc00d,	// (0x000afc72) media_player_t5

0xc01b,	// (0x000afc80) media_player_t6

0xc029,	// (0x000afc8e) media_player_t7

0x0006,

0xf5de,	// (0x000b3243) media_player_t

0xc037,	// (0x000afc9c) wait_bar_pane_cp02

0xf5c3,	// (0x000b3228) main_usb_pane_t

0x3402,	// (0x000a7067) cell_mp_pane

0x9fdd,	// (0x000adc42) cell_mp_pane_g1

0x954c,	// (0x000ad1b1) grid_highlight_pane_cp06

0xa1c1,	// (0x000ade26) grid_skin_colour_pane

0xa1c9,	// (0x000ade2e) list_highlight_pane_cp03

0x15c0,	// (0x000a5225) skin_g1

0xa1d1,	// (0x000ade36) skin_t1

0xa1e0,	// (0x000ade45) skin_t2

0x0001,

0xf264,	// (0x000b2ec9) skin_t

0x15c8,	// (0x000a522d) cell_skin_colour_pane_ParamLimits

0x15c8,	// (0x000a522d) cell_skin_colour_pane

0xa1ee,	// (0x000ade53) cell_skin_colour_pane_g1

0x1641,	// (0x000a52a6) call_video_g1_ParamLimits

0x1641,	// (0x000a52a6) call_video_g1

0x165d,	// (0x000a52c2) call_video_g2_ParamLimits

0x165d,	// (0x000a52c2) call_video_g2

0x0001,

0xf269,	// (0x000b2ece) call_video_g_ParamLimits

0xf269,	// (0x000b2ece) call_video_g

0x16af,	// (0x000a5314) call_video_uplink_pane_cp1_ParamLimits

0x16af,	// (0x000a5314) call_video_uplink_pane_cp1

0xa200,	// (0x000ade65) call_video_uplink_pane_cp2

0x174e,	// (0x000a53b3) video_down_crop_pane_ParamLimits

0x174e,	// (0x000a53b3) video_down_crop_pane

0x1837,	// (0x000a549c) video_down_pane_ParamLimits

0x1837,	// (0x000a549c) video_down_pane

0xa208,	// (0x000ade6d) video_down_subqcif_pane_ParamLimits

0xa208,	// (0x000ade6d) video_down_subqcif_pane

0xa220,	// (0x000ade85) video_down_subqcif_pane_cp_ParamLimits

0xa220,	// (0x000ade85) video_down_subqcif_pane_cp

0xa246,	// (0x000adeab) im_reading_pane_ParamLimits

0xa246,	// (0x000adeab) im_reading_pane

0x1945,	// (0x000a55aa) im_writing_pane_ParamLimits

0x1945,	// (0x000a55aa) im_writing_pane

0x195b,	// (0x000a55c0) im_reading_pane_t1

0xa260,	// (0x000adec5) list_im_pane

0xa271,	// (0x000aded6) scroll_pane_cp07

0x1995,	// (0x000a55fa) im_writing_pane_t1_ParamLimits

0x1995,	// (0x000a55fa) im_writing_pane_t1

0xa28a,	// (0x000adeef) im_writing_pane_t2_ParamLimits

0xa28a,	// (0x000adeef) im_writing_pane_t2

0x0001,

0xf273,	// (0x000b2ed8) im_writing_pane_t_ParamLimits

0xf273,	// (0x000b2ed8) im_writing_pane_t

0x954c,	// (0x000ad1b1) input_focus_pane_cp04

0x954c,	// (0x000ad1b1) input_focus_pane_cp05

0x19aa,	// (0x000a560f) list_im_single_pane_ParamLimits

0x19aa,	// (0x000a560f) list_im_single_pane

0x19bf,	// (0x000a5624) list_single_im_pane_t1

0x33c2,	// (0x000a7027) blid_accuracy_pane

0x33ca,	// (0x000a702f) blid_compass_pane

0x33d4,	// (0x000a7039) main_location_t1

0x33e4,	// (0x000a7049) main_location_t2

0x33f4,	// (0x000a7059) main_location_t3

0x0002,

0xf5ed,	// (0x000b3252) main_location_t

0x954c,	// (0x000ad1b1) aid_levels_location

0x9fdd,	// (0x000adc42) blid_accuracy_pane_g1

0x9fdd,	// (0x000adc42) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000b2f3a) blid_accuracy_pane_g

0xa2d2,	// (0x000adf37) wml_content_pane

0xa310,	// (0x000adf75) wml_button_pane_ParamLimits

0xa310,	// (0x000adf75) wml_button_pane

0x19ce,	// (0x000a5633) wml_list_single_large_pane_ParamLimits

0x19ce,	// (0x000a5633) wml_list_single_large_pane

0x19e3,	// (0x000a5648) wml_list_single_medium_pane_ParamLimits

0x19e3,	// (0x000a5648) wml_list_single_medium_pane

0x19fa,	// (0x000a565f) wml_list_single_small_pane_ParamLimits

0x19fa,	// (0x000a565f) wml_list_single_small_pane

0xa324,	// (0x000adf89) wml_selection_box_pane_ParamLimits

0xa324,	// (0x000adf89) wml_selection_box_pane

0xa337,	// (0x000adf9c) wml_list_single_pane_t1

0xa346,	// (0x000adfab) wml_list_single_medium_pane_t1

0xa355,	// (0x000adfba) wml_list_single_large_pane_t1

0xa364,	// (0x000adfc9) input_focus_pane_cp02_ParamLimits

0xa364,	// (0x000adfc9) input_focus_pane_cp02

0xa377,	// (0x000adfdc) wml_selection_box_pane_g1

0xa380,	// (0x000adfe5) wml_selection_box_pane_t1_ParamLimits

0xa380,	// (0x000adfe5) wml_selection_box_pane_t1

0x97a7,	// (0x000ad40c) bg_wml_button_pane_ParamLimits

0x97a7,	// (0x000ad40c) bg_wml_button_pane

0xa398,	// (0x000adffd) wml_button_pane_g1

0xa3a0,	// (0x000ae005) wml_button_pane_t1

0xa398,	// (0x000adffd) wml_button_bg_pane_g1

0xa3b0,	// (0x000ae015) wml_button_bg_pane_g2

0xa3b8,	// (0x000ae01d) wml_button_bg_pane_g3

0xa3c0,	// (0x000ae025) wml_button_bg_pane_g4

0xa3c8,	// (0x000ae02d) wml_button_bg_pane_g5

0xa3d0,	// (0x000ae035) wml_button_bg_pane_g6

0xa3d8,	// (0x000ae03d) wml_button_bg_pane_g7

0xa3e0,	// (0x000ae045) wml_button_bg_pane_g8

0xa3e8,	// (0x000ae04d) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000b2edd) wml_button_bg_pane_g

0x1a13,	// (0x000a5678) bg_list_pane_cp02

0xa3f0,	// (0x000ae055) mce_header_pane_ParamLimits

0xa3f0,	// (0x000ae055) mce_header_pane

0xa406,	// (0x000ae06b) mce_icon_pane

0xa406,	// (0x000ae06b) mce_image_pane

0xa40f,	// (0x000ae074) mce_text_pane_ParamLimits

0xa40f,	// (0x000ae074) mce_text_pane

0x1a1b,	// (0x000a5680) scroll_pane_cp03

0xa308,	// (0x000adf6d) scroll_pane_cp04

0xa422,	// (0x000ae087) scroll_pane_cp05_ParamLimits

0xa422,	// (0x000ae087) scroll_pane_cp05

0x1a25,	// (0x000a568a) mce_header_field_pane_ParamLimits

0x1a25,	// (0x000a568a) mce_header_field_pane

0x1a3c,	// (0x000a56a1) mce_header_field_pane_2_ParamLimits

0x1a3c,	// (0x000a56a1) mce_header_field_pane_2

0x1a52,	// (0x000a56b7) mce_header_field_pane_3

0x1a5a,	// (0x000a56bf) list_single_mce_message_pane_ParamLimits

0x1a5a,	// (0x000a56bf) list_single_mce_message_pane

0x1a70,	// (0x000a56d5) list_single_mce_smart_pane_ParamLimits

0x1a70,	// (0x000a56d5) list_single_mce_smart_pane

0xa42e,	// (0x000ae093) input_focus_pane_cp03

0xa437,	// (0x000ae09c) list_header_data_pane

0x1a91,	// (0x000a56f6) mce_header_field_pane_t1

0x1aa1,	// (0x000a5706) list_single_mce_header_pane_ParamLimits

0x1aa1,	// (0x000a5706) list_single_mce_header_pane

0xa43f,	// (0x000ae0a4) list_single_mce_header_pane_t1

0xa44e,	// (0x000ae0b3) list_single_mce_message_pane_g1

0xa456,	// (0x000ae0bb) list_single_mce_message_pane_t1

0x1adb,	// (0x000a5740) bg_cale_heading_pane_cp01_ParamLimits

0x1adb,	// (0x000a5740) bg_cale_heading_pane_cp01

0xa464,	// (0x000ae0c9) bg_cale_pane_cp02_ParamLimits

0xa464,	// (0x000ae0c9) bg_cale_pane_cp02

0x1b15,	// (0x000a577a) cale_month_corner_pane

0x1b34,	// (0x000a5799) cale_month_day_heading_pane_ParamLimits

0x1b34,	// (0x000a5799) cale_month_day_heading_pane

0x1b86,	// (0x000a57eb) cale_month_pane_g1_ParamLimits

0x1b86,	// (0x000a57eb) cale_month_pane_g1

0x1bb5,	// (0x000a581a) cale_month_pane_g2_ParamLimits

0x1bb5,	// (0x000a581a) cale_month_pane_g2

0x1be5,	// (0x000a584a) cale_month_pane_g3_ParamLimits

0x1be5,	// (0x000a584a) cale_month_pane_g3

0x1c21,	// (0x000a5886) cale_month_pane_g4_ParamLimits

0x1c21,	// (0x000a5886) cale_month_pane_g4

0x1c5d,	// (0x000a58c2) cale_month_pane_g5_ParamLimits

0x1c5d,	// (0x000a58c2) cale_month_pane_g5

0x1ca5,	// (0x000a590a) cale_month_pane_g6_ParamLimits

0x1ca5,	// (0x000a590a) cale_month_pane_g6

0x1cf1,	// (0x000a5956) cale_month_pane_g7_ParamLimits

0x1cf1,	// (0x000a5956) cale_month_pane_g7

0x1d41,	// (0x000a59a6) cale_month_pane_g8_ParamLimits

0x1d41,	// (0x000a59a6) cale_month_pane_g8

0x1d95,	// (0x000a59fa) cale_month_pane_g9_ParamLimits

0x1d95,	// (0x000a59fa) cale_month_pane_g9

0x1de7,	// (0x000a5a4c) cale_month_pane_g10_ParamLimits

0x1de7,	// (0x000a5a4c) cale_month_pane_g10

0x1e39,	// (0x000a5a9e) cale_month_pane_g11_ParamLimits

0x1e39,	// (0x000a5a9e) cale_month_pane_g11

0x1e8b,	// (0x000a5af0) cale_month_pane_g12_ParamLimits

0x1e8b,	// (0x000a5af0) cale_month_pane_g12

0x1edd,	// (0x000a5b42) cale_month_pane_g13_ParamLimits

0x1edd,	// (0x000a5b42) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000b2ef0) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000b2ef0) cale_month_pane_g

0x1f2f,	// (0x000a5b94) cale_month_week_pane

0x1f53,	// (0x000a5bb8) grid_cale_month_pane_ParamLimits

0x1f53,	// (0x000a5bb8) grid_cale_month_pane

0x1f9c,	// (0x000a5c01) cale_month_day_heading_pane_t1

0x1fde,	// (0x000a5c43) cale_month_day_heading_pane_t2

0x2013,	// (0x000a5c78) cale_month_day_heading_pane_t3

0x2048,	// (0x000a5cad) cale_month_day_heading_pane_t4

0x2085,	// (0x000a5cea) cale_month_day_heading_pane_t5

0x20ca,	// (0x000a5d2f) cale_month_day_heading_pane_t6

0x210f,	// (0x000a5d74) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000b2f0b) cale_month_day_heading_pane_t

0xa104,	// (0x000add69) bg_cale_side_pane_cp01

0x215c,	// (0x000a5dc1) cale_month_week_pane_t1

0x2175,	// (0x000a5dda) cale_month_week_pane_t2

0x218e,	// (0x000a5df3) cale_month_week_pane_t3

0x21a7,	// (0x000a5e0c) cale_month_week_pane_t4

0x21c0,	// (0x000a5e25) cale_month_week_pane_t5

0x21d9,	// (0x000a5e3e) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000b2f1a) cale_month_week_pane_t

0x21f2,	// (0x000a5e57) cell_cale_month_pane_ParamLimits

0x21f2,	// (0x000a5e57) cell_cale_month_pane

0x98f8,	// (0x000ad55d) cell_cale_month_pane_g1

0x234a,	// (0x000a5faf) cell_cale_month_pane_t1_ParamLimits

0x234a,	// (0x000a5faf) cell_cale_month_pane_t1

0xa112,	// (0x000add77) grid_highlight_pane_cp08

0x9fdd,	// (0x000adc42) main_smil_g1

0x2376,	// (0x000a5fdb) smil_status_pane

0xa4a3,	// (0x000ae108) smil_text_pane

0xbe9d,	// (0x000afb02) bg_popup_call3_rect_pane_g8

0xbea5,	// (0x000afb0a) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000b31d3) bg_popup_call3_rect_pane_g

0xc135,	// (0x000afd9a) smil_status_volume_pane_g1

0xa4ad,	// (0x000ae112) smil_status_pane_t1

0x9a3e,	// (0x000ad6a3) volume_smil_pane

0xa4c4,	// (0x000ae129) list_smil_text_pane

0x238b,	// (0x000a5ff0) scroll_pane_cp011

0x2396,	// (0x000a5ffb) smil_text_list_pane_t1_ParamLimits

0x2396,	// (0x000a5ffb) smil_text_list_pane_t1

0x9904,	// (0x000ad569) aid_volume_smil_ParamLimits

0x9904,	// (0x000ad569) aid_volume_smil

0x9fdd,	// (0x000adc42) smil_volume_pane_g1

0x9fdd,	// (0x000adc42) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000b2f3a) smil_volume_pane_g

0x0c10,	// (0x000a4875) listscroll_cale_day_pane

0xa4ce,	// (0x000ae133) bg_cale_pane

0xa4e6,	// (0x000ae14b) list_cale_pane

0xa509,	// (0x000ae16e) scroll_pane_cp09

0xa51a,	// (0x000ae17f) cale_bg_pane_g1

0xa522,	// (0x000ae187) cale_bg_pane_g2

0xa52a,	// (0x000ae18f) cale_bg_pane_g3

0xa532,	// (0x000ae197) cale_bg_pane_g4

0xa53a,	// (0x000ae19f) cale_bg_pane_g5

0xa542,	// (0x000ae1a7) cale_bg_pane_g6

0xa54a,	// (0x000ae1af) cale_bg_pane_g7

0xa552,	// (0x000ae1b7) cale_bg_pane_g8

0xa55a,	// (0x000ae1bf) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000b2f3f) cale_bg_pane_g

0x23e2,	// (0x000a6047) list_cale_time_pane_ParamLimits

0x23e2,	// (0x000a6047) list_cale_time_pane

0xa562,	// (0x000ae1c7) list_cale_time_pane_g1_ParamLimits

0xa562,	// (0x000ae1c7) list_cale_time_pane_g1

0xa56e,	// (0x000ae1d3) list_cale_time_pane_g2_ParamLimits

0xa56e,	// (0x000ae1d3) list_cale_time_pane_g2

0x23f8,	// (0x000a605d) list_cale_time_pane_g3_ParamLimits

0x23f8,	// (0x000a605d) list_cale_time_pane_g3

0x2406,	// (0x000a606b) list_cale_time_pane_g4_ParamLimits

0x2406,	// (0x000a606b) list_cale_time_pane_g4

0x2414,	// (0x000a6079) list_cale_time_pane_g5_ParamLimits

0x2414,	// (0x000a6079) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000b2f52) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000b2f52) list_cale_time_pane_g

0xa588,	// (0x000ae1ed) list_cale_time_pane_t1_ParamLimits

0xa588,	// (0x000ae1ed) list_cale_time_pane_t1

0xa5b0,	// (0x000ae215) list_cale_time_pane_t2_ParamLimits

0xa5b0,	// (0x000ae215) list_cale_time_pane_t2

0x2794,	// (0x000a63f9) aid_blid_cardinal_pane

0x27d2,	// (0x000a6437) compass_pane_t4

0xa5d8,	// (0x000ae23d) list_cale_time_pane_t4_ParamLimits

0xa5d8,	// (0x000ae23d) list_cale_time_pane_t4

0x27e0,	// (0x000a6445) compass_pane_t5

0x27ee,	// (0x000a6453) compass_pane_t6

0x27fc,	// (0x000a6461) compass_pane_t7

0xaa50,	// (0x000ae6b5) navi_pane_cc_t1

0xac3b,	// (0x000ae8a0) aid_phob_thumbnail_center_pane

0x2dd8,	// (0x000a6a3d) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000b2f5f) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000b2f5f) list_cale_time_pane_t

0xecf5,	// (0x000b295a) bg_popup_window_pane_cp02_ParamLimits

0xecf5,	// (0x000b295a) bg_popup_window_pane_cp02

0xa600,	// (0x000ae265) heading_pane_cp01_ParamLimits

0xa600,	// (0x000ae265) heading_pane_cp01

0xa60c,	// (0x000ae271) loc_req_pane_ParamLimits

0xa60c,	// (0x000ae271) loc_req_pane

0xa61c,	// (0x000ae281) loc_type_pane_ParamLimits

0xa61c,	// (0x000ae281) loc_type_pane

0xa62e,	// (0x000ae293) loc_type_pane_t1_ParamLimits

0xa62e,	// (0x000ae293) loc_type_pane_t1

0xa640,	// (0x000ae2a5) loc_type_pane_t2_ParamLimits

0xa640,	// (0x000ae2a5) loc_type_pane_t2

0xa652,	// (0x000ae2b7) loc_type_pane_t3_ParamLimits

0xa652,	// (0x000ae2b7) loc_type_pane_t3

0x0002,

0xf301,	// (0x000b2f66) loc_type_pane_t_ParamLimits

0xf301,	// (0x000b2f66) loc_type_pane_t

0xa664,	// (0x000ae2c9) list_loc_req_pane

0xa66e,	// (0x000ae2d3) scroll_pane_cp012

0x2422,	// (0x000a6087) list_single_loc_request_popup_menu_pane_ParamLimits

0x2422,	// (0x000a6087) list_single_loc_request_popup_menu_pane

0xa679,	// (0x000ae2de) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa679,	// (0x000ae2de) list_single_loc_request_popup_menu_pane_g1

0xa685,	// (0x000ae2ea) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa685,	// (0x000ae2ea) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000b2f6d) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000b2f6d) list_single_loc_request_popup_menu_pane_g

0xa691,	// (0x000ae2f6) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa691,	// (0x000ae2f6) list_single_loc_request_popup_menu_pane_t1

0x97a7,	// (0x000ad40c) bg_popup_window_pane_cp03_ParamLimits

0x97a7,	// (0x000ad40c) bg_popup_window_pane_cp03

0xb5df,	// (0x000af244) heading_loc_req_pane_ParamLimits

0xb5df,	// (0x000af244) heading_loc_req_pane

0x242f,	// (0x000a6094) popup_dyc_status_message_window_g1_ParamLimits

0x242f,	// (0x000a6094) popup_dyc_status_message_window_g1

0x2443,	// (0x000a60a8) popup_dyc_status_message_window_t1_ParamLimits

0x2443,	// (0x000a60a8) popup_dyc_status_message_window_t1

0x2458,	// (0x000a60bd) popup_dyc_status_message_window_t2_ParamLimits

0x2458,	// (0x000a60bd) popup_dyc_status_message_window_t2

0x246d,	// (0x000a60d2) popup_dyc_status_message_window_t3_ParamLimits

0x246d,	// (0x000a60d2) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000b2f72) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000b2f72) popup_dyc_status_message_window_t

0x954c,	// (0x000ad1b1) bg_heading_pane_cp01

0xa6a7,	// (0x000ae30c) heading_loc_req_pane_g1

0xa6af,	// (0x000ae314) heading_loc_req_pane_g2

0xa6b7,	// (0x000ae31c) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000b2f79) heading_loc_req_pane_g

0xa6bf,	// (0x000ae324) heading_loc_req_pane_t1

0xa6ce,	// (0x000ae333) bg_popup_sub_pane_cp01_ParamLimits

0xa6ce,	// (0x000ae333) bg_popup_sub_pane_cp01

0xa6dc,	// (0x000ae341) popup_cale_events_window_g1_ParamLimits

0xa6dc,	// (0x000ae341) popup_cale_events_window_g1

0xa6fc,	// (0x000ae361) popup_cale_events_window_g2_ParamLimits

0xa6fc,	// (0x000ae361) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000b2fad) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000b2fad) popup_cale_events_window_g

0xa71c,	// (0x000ae381) popup_cale_events_window_t1_ParamLimits

0xa71c,	// (0x000ae381) popup_cale_events_window_t1

0xa72e,	// (0x000ae393) popup_cale_events_window_t2_ParamLimits

0xa72e,	// (0x000ae393) popup_cale_events_window_t2

0xa76c,	// (0x000ae3d1) popup_cale_events_window_t3_ParamLimits

0xa76c,	// (0x000ae3d1) popup_cale_events_window_t3

0xa7a6,	// (0x000ae40b) popup_cale_events_window_t4_ParamLimits

0xa7a6,	// (0x000ae40b) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000b2fb2) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000b2fb2) popup_cale_events_window_t

0x2564,	// (0x000a61c9) call_type_pane

0x2574,	// (0x000a61d9) popup_call_status_window_g1

0x2588,	// (0x000a61ed) popup_call_status_window_g2

0x259c,	// (0x000a6201) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000b2fbb) popup_call_status_window_g

0xa7dc,	// (0x000ae441) call_type_pane_g1

0xa7e5,	// (0x000ae44a) call_type_pane_g2

0x0001,

0xf35d,	// (0x000b2fc2) call_type_pane_g

0x954c,	// (0x000ad1b1) bg_popup_sub_pane_cp02

0xa7ee,	// (0x000ae453) listscroll_popup_wml_pane

0xa7f6,	// (0x000ae45b) list_wml_pane

0xa800,	// (0x000ae465) scroll_pane_cp013

0xa80b,	// (0x000ae470) list_single_graphic_popup_wml_pane_ParamLimits

0xa80b,	// (0x000ae470) list_single_graphic_popup_wml_pane

0x9fdd,	// (0x000adc42) list_single_graphic_popup_wml_pane_g1

0xa81f,	// (0x000ae484) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000b2fc7) list_single_graphic_popup_wml_pane_g

0xa827,	// (0x000ae48c) list_single_graphic_popup_wml_pane_t1

0xa83d,	// (0x000ae4a2) aid_call_pane

0x979f,	// (0x000ad404) popup_clock_analogue_window_g1

0x979f,	// (0x000ad404) popup_clock_analogue_window_g2

0x9926,	// (0x000ad58b) popup_clock_analogue_window_g3

0x9926,	// (0x000ad58b) popup_clock_analogue_window_g4

0x9fdd,	// (0x000adc42) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000b2fcc) popup_clock_analogue_window_g

0x992e,	// (0x000ad593) popup_clock_analogue_window_t1

0x993c,	// (0x000ad5a1) clock_digital_number_pane_ParamLimits

0x993c,	// (0x000ad5a1) clock_digital_number_pane

0x9948,	// (0x000ad5ad) clock_digital_number_pane_cp02_ParamLimits

0x9948,	// (0x000ad5ad) clock_digital_number_pane_cp02

0x9954,	// (0x000ad5b9) clock_digital_number_pane_cp03_ParamLimits

0x9954,	// (0x000ad5b9) clock_digital_number_pane_cp03

0x9960,	// (0x000ad5c5) clock_digital_number_pane_cp04_ParamLimits

0x9960,	// (0x000ad5c5) clock_digital_number_pane_cp04

0x996c,	// (0x000ad5d1) clock_digital_separator_pane_ParamLimits

0x996c,	// (0x000ad5d1) clock_digital_separator_pane

0x9978,	// (0x000ad5dd) popup_clock_digital_window_t1

0x9fdd,	// (0x000adc42) clock_digital_number_pane_g1

0x9fdd,	// (0x000adc42) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000b2f3a) clock_digital_number_pane_g

0x9fdd,	// (0x000adc42) clock_digital_separator_pane_g1

0x9fdd,	// (0x000adc42) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000b2f3a) clock_digital_separator_pane_g

0x954c,	// (0x000ad1b1) bg_popup_window_pane_cp04

0xa845,	// (0x000ae4aa) heading_pane_cp03

0xa84d,	// (0x000ae4b2) listscroll_popup_gms_pane

0xa855,	// (0x000ae4ba) grid_large_graphic_popup_pane

0xa85f,	// (0x000ae4c4) listscroll_popup_gms_pane_g1

0xa867,	// (0x000ae4cc) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000b2fd7) listscroll_popup_gms_pane_g

0xa308,	// (0x000adf6d) scroll_pane_cp014

0x25ab,	// (0x000a6210) cell_large_graphic_popup_pane_ParamLimits

0x25ab,	// (0x000a6210) cell_large_graphic_popup_pane

0x25c3,	// (0x000a6228) cell_large_graphic_popup_pane_g1_ParamLimits

0x25c3,	// (0x000a6228) cell_large_graphic_popup_pane_g1

0xa86f,	// (0x000ae4d4) cell_large_graphic_popup_pane_g2_ParamLimits

0xa86f,	// (0x000ae4d4) cell_large_graphic_popup_pane_g2

0xa87b,	// (0x000ae4e0) cell_large_graphic_popup_pane_g3_ParamLimits

0xa87b,	// (0x000ae4e0) cell_large_graphic_popup_pane_g3

0xa888,	// (0x000ae4ed) cell_large_graphic_popup_pane_g4_ParamLimits

0xa888,	// (0x000ae4ed) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000b2fdc) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000b2fdc) cell_large_graphic_popup_pane_g

0xa898,	// (0x000ae4fd) grid_highlight_pane_cp010

0x9fdd,	// (0x000adc42) bg_popup_call_pane_g1

0xa8a2,	// (0x000ae507) list_single_graphic_popup_conf_pane_ParamLimits

0xa8a2,	// (0x000ae507) list_single_graphic_popup_conf_pane

0xa8b5,	// (0x000ae51a) list_highlight_pane_cp01

0xa8be,	// (0x000ae523) list_single_graphic_popup_conf_pane_g1

0xa8c6,	// (0x000ae52b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000b2fe5) list_single_graphic_popup_conf_pane_g

0xa8ce,	// (0x000ae533) list_single_graphic_popup_conf_pane_t1

0xa8dc,	// (0x000ae541) linegrid_cams_pane_g1

0x25cf,	// (0x000a6234) linegrid_cams_pane_g2

0xa145,	// (0x000addaa) linegrid_cams_pane_g3

0xa8e5,	// (0x000ae54a) linegrid_cams_pane_g4

0x25d8,	// (0x000a623d) linegrid_cams_pane_g5

0x25e1,	// (0x000a6246) linegrid_cams_pane_g6

0xa14e,	// (0x000addb3) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000b2fea) linegrid_cams_pane_g

0xa8ee,	// (0x000ae553) popup_clock_analogue_window

0xa8ee,	// (0x000ae553) popup_clock_digital_window

0x954c,	// (0x000ad1b1) popup_phob_thumbnail_window

0x9fdd,	// (0x000adc42) call_video_uplink_pane_g1

0xa8f7,	// (0x000ae55c) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000b2ff9) call_video_uplink_pane_g

0xa8ff,	// (0x000ae564) video_uplink_pane

0xa907,	// (0x000ae56c) mce_image_pane_g1

0x25ec,	// (0x000a6251) mce_image_pane_g2

0x25f4,	// (0x000a6259) mce_image_pane_g3

0x25fc,	// (0x000a6261) mce_image_pane_g4

0x2606,	// (0x000a626b) mce_image_pane_g5

0x0004,

0xf399,	// (0x000b2ffe) mce_image_pane_g

0xa911,	// (0x000ae576) control_top_pane_stacon_cp01_ParamLimits

0xa911,	// (0x000ae576) control_top_pane_stacon_cp01

0xa925,	// (0x000ae58a) uni_indicator_pane_stacon_cp01_ParamLimits

0xa925,	// (0x000ae58a) uni_indicator_pane_stacon_cp01

0xa936,	// (0x000ae59b) bg_popup_sub_pane_cp03

0x260e,	// (0x000a6273) chi_dic_find_pane

0x2616,	// (0x000a627b) listscroll_chi_dic_pane

0x261f,	// (0x000a6284) main_pane_chidic_g1

0x2632,	// (0x000a6297) chi_dic_find_pane_t1

0xa940,	// (0x000ae5a5) find_chidic_pane

0xa949,	// (0x000ae5ae) chi_dic_list_pane_ParamLimits

0xa949,	// (0x000ae5ae) chi_dic_list_pane

0xa95a,	// (0x000ae5bf) scroll_pane_cp020

0x2640,	// (0x000a62a5) find_chidic_pane_t1

0x954c,	// (0x000ad1b1) input_focus_pane_cp06

0x264f,	// (0x000a62b4) list_chi_dic_pane_ParamLimits

0x264f,	// (0x000a62b4) list_chi_dic_pane

0x2661,	// (0x000a62c6) list_chi_dic_pane_t1_ParamLimits

0x2661,	// (0x000a62c6) list_chi_dic_pane_t1

0x954c,	// (0x000ad1b1) list_highlight_pane_cp020

0xa962,	// (0x000ae5c7) bg_cale_heading_pane_g1

0x2674,	// (0x000a62d9) bg_cale_heading_pane_g2

0x267c,	// (0x000a62e1) bg_cale_heading_pane_g3

0x2684,	// (0x000a62e9) bg_cale_heading_pane_g4

0x268e,	// (0x000a62f3) bg_cale_heading_pane_g5

0x2698,	// (0x000a62fd) bg_cale_heading_pane_g6

0x26a0,	// (0x000a6305) bg_cale_heading_pane_g7

0x26a8,	// (0x000a630d) bg_cale_heading_pane_g8

0x26b2,	// (0x000a6317) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000b3009) bg_cale_heading_pane_g

0xa962,	// (0x000ae5c7) bg_cale_side_pane_g1

0x26bc,	// (0x000a6321) bg_cale_side_pane_g2

0x26c4,	// (0x000a6329) bg_cale_side_pane_g3

0x26cc,	// (0x000a6331) bg_cale_side_pane_g4

0x26d4,	// (0x000a6339) bg_cale_side_pane_g5

0x26dc,	// (0x000a6341) bg_cale_side_pane_g6

0x26e4,	// (0x000a6349) bg_cale_side_pane_g7

0x26ec,	// (0x000a6351) bg_cale_side_pane_g8

0x26f4,	// (0x000a6359) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000b301c) bg_cale_side_pane_g

0x26fc,	// (0x000a6361) popup_call_status_window_ParamLimits

0x26fc,	// (0x000a6361) popup_call_status_window

0xa96a,	// (0x000ae5cf) stacon_top_pane

0xa972,	// (0x000ae5d7) status_pane_ParamLimits

0xa972,	// (0x000ae5d7) status_pane

0xa987,	// (0x000ae5ec) status_small_pane

0xa98f,	// (0x000ae5f4) control_pane

0x954c,	// (0x000ad1b1) stacon_bottom_pane

0xa997,	// (0x000ae5fc) list_single_mce_smart_pane_t1_ParamLimits

0xa997,	// (0x000ae5fc) list_single_mce_smart_pane_t1

0xa9aa,	// (0x000ae60f) list_single_mce_smart_pane_t2_ParamLimits

0xa9aa,	// (0x000ae60f) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000b302f) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000b302f) list_single_mce_smart_pane_t

0x2743,	// (0x000a63a8) compass_pane

0x274c,	// (0x000a63b1) main_location2_pane_t1

0x275e,	// (0x000a63c3) main_location2_pane_t2

0x2770,	// (0x000a63d5) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000b3034) main_location2_pane_t

0xa9c9,	// (0x000ae62e) compass_pane_g1_ParamLimits

0xa9c9,	// (0x000ae62e) compass_pane_g1

0x27b4,	// (0x000a6419) compass_pane_t1

0x27c3,	// (0x000a6428) compass_pane_t2

0x0005,

0xf3d8,	// (0x000b303d) compass_pane_t

0x280a,	// (0x000a646f) text_secondary_cp61

0xaa47,	// (0x000ae6ac) navi_pane_cams_g5

0xaad1,	// (0x000ae736) navi_pane_im_t1

0xaadf,	// (0x000ae744) navi_pane_mp_g1_ParamLimits

0xaadf,	// (0x000ae744) navi_pane_mp_g1

0xaaf3,	// (0x000ae758) navi_pane_mp_g2_ParamLimits

0xaaf3,	// (0x000ae758) navi_pane_mp_g2

0xaaff,	// (0x000ae764) navi_pane_mp_g3_ParamLimits

0xaaff,	// (0x000ae764) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000b3051) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000b3051) navi_pane_mp_g

0xab0b,	// (0x000ae770) navi_pane_mp_t1

0xab19,	// (0x000ae77e) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000b3058) navi_pane_mp_t

0xab84,	// (0x000ae7e9) navi_pane_vt_g1

0xab0b,	// (0x000ae770) navi_pane_vt_t1

0xab8c,	// (0x000ae7f1) navi_slider_pane

0xa15f,	// (0x000addc4) zooming_pane

0xab9c,	// (0x000ae801) navi_slider_pane_g1

0x9995,	// (0x000ad5fa) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000b305f) navi_slider_pane_g

0xabc0,	// (0x000ae825) aid_levels_zoom

0xabc8,	// (0x000ae82d) zooming_pane_g1

0xabd0,	// (0x000ae835) zooming_pane_g2

0xabd0,	// (0x000ae835) zooming_pane_g3

0x0002,

0xf409,	// (0x000b306e) zooming_pane_g

0xabd8,	// (0x000ae83d) level_10_zoom

0xabe1,	// (0x000ae846) level_11_zoom

0xabea,	// (0x000ae84f) level_1_zoom

0xabf3,	// (0x000ae858) level_2_zoom

0xabfc,	// (0x000ae861) level_3_zoom

0xac05,	// (0x000ae86a) level_4_zoom

0xac0e,	// (0x000ae873) level_5_zoom

0xac17,	// (0x000ae87c) level_6_zoom

0xac20,	// (0x000ae885) level_7_zoom

0xac29,	// (0x000ae88e) level_8_zoom

0xac32,	// (0x000ae897) level_9_zoom

0xac43,	// (0x000ae8a8) popup_phob_thumbnail_window_g1

0xac4b,	// (0x000ae8b0) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000b3075) popup_phob_thumbnail_window_g

0xc03f,	// (0x000afca4) level_1_location

0xc047,	// (0x000afcac) level_2_location

0xc04f,	// (0x000afcb4) level_3_location

0xc057,	// (0x000afcbc) level_4_location

0xa15f,	// (0x000addc4) level_5_location

0x285b,	// (0x000a64c0) mce_icon_pane_g1

0x2865,	// (0x000a64ca) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000b307a) mce_icon_pane_g

0x286d,	// (0x000a64d2) main_mup_pane_g1_ParamLimits

0x286d,	// (0x000a64d2) main_mup_pane_g1

0x2883,	// (0x000a64e8) main_mup_pane_g2_ParamLimits

0x2883,	// (0x000a64e8) main_mup_pane_g2

0x2895,	// (0x000a64fa) main_mup_pane_g3_ParamLimits

0x2895,	// (0x000a64fa) main_mup_pane_g3

0x28a7,	// (0x000a650c) main_mup_pane_g4_ParamLimits

0x28a7,	// (0x000a650c) main_mup_pane_g4

0x28bf,	// (0x000a6524) main_mup_pane_g5_ParamLimits

0x28bf,	// (0x000a6524) main_mup_pane_g5

0x28db,	// (0x000a6540) main_mup_pane_g6_ParamLimits

0x28db,	// (0x000a6540) main_mup_pane_g6

0x28f3,	// (0x000a6558) main_mup_pane_g7_ParamLimits

0x28f3,	// (0x000a6558) main_mup_pane_g7

0x290b,	// (0x000a6570) main_mup_pane_g8_ParamLimits

0x290b,	// (0x000a6570) main_mup_pane_g8

0x2923,	// (0x000a6588) main_mup_pane_g9_ParamLimits

0x2923,	// (0x000a6588) main_mup_pane_g9

0x293d,	// (0x000a65a2) main_mup_pane_g10_ParamLimits

0x293d,	// (0x000a65a2) main_mup_pane_g10

0x2957,	// (0x000a65bc) main_mup_pane_g11_ParamLimits

0x2957,	// (0x000a65bc) main_mup_pane_g11

0x296b,	// (0x000a65d0) main_mup_pane_g12_ParamLimits

0x296b,	// (0x000a65d0) main_mup_pane_g12

0x2981,	// (0x000a65e6) main_mup_pane_g13_ParamLimits

0x2981,	// (0x000a65e6) main_mup_pane_g13

0x000c,

0xf41a,	// (0x000b307f) main_mup_pane_g_ParamLimits

0xf41a,	// (0x000b307f) main_mup_pane_g

0x2995,	// (0x000a65fa) main_mup_pane_t1_ParamLimits

0x2995,	// (0x000a65fa) main_mup_pane_t1

0x29af,	// (0x000a6614) main_mup_pane_t2_ParamLimits

0x29af,	// (0x000a6614) main_mup_pane_t2

0x29c7,	// (0x000a662c) main_mup_pane_t3_ParamLimits

0x29c7,	// (0x000a662c) main_mup_pane_t3

0x29df,	// (0x000a6644) main_mup_pane_t4_ParamLimits

0x29df,	// (0x000a6644) main_mup_pane_t4

0x29fd,	// (0x000a6662) main_mup_pane_t5_ParamLimits

0x29fd,	// (0x000a6662) main_mup_pane_t5

0x2a12,	// (0x000a6677) main_mup_pane_t6_ParamLimits

0x2a12,	// (0x000a6677) main_mup_pane_t6

0x0005,

0xf435,	// (0x000b309a) main_mup_pane_t_ParamLimits

0xf435,	// (0x000b309a) main_mup_pane_t

0x2a24,	// (0x000a6689) mup_progress_pane_ParamLimits

0x2a24,	// (0x000a6689) mup_progress_pane

0x2a30,	// (0x000a6695) mup_visualizer_pane_ParamLimits

0x2a30,	// (0x000a6695) mup_visualizer_pane

0x2a64,	// (0x000a66c9) mup_volume_pane_ParamLimits

0x2a64,	// (0x000a66c9) mup_volume_pane

0xaa5e,	// (0x000ae6c3) mup_visualizer_pane_g1_ParamLimits

0xaa5e,	// (0x000ae6c3) mup_visualizer_pane_g1

0xaa5e,	// (0x000ae6c3) mup_visualizer_pane_g2_ParamLimits

0xaa5e,	// (0x000ae6c3) mup_visualizer_pane_g2

0xa9c9,	// (0x000ae62e) mup_visualizer_pane_g3_ParamLimits

0xa9c9,	// (0x000ae62e) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000b30a7) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000b30a7) mup_visualizer_pane_g

0x9fdd,	// (0x000adc42) mup_volume_pane_g1

0xac5b,	// (0x000ae8c0) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000b30ae) mup_volume_pane_g

0x9fdd,	// (0x000adc42) mup_progress_pane_g1

0xac64,	// (0x000ae8c9) mup_progress_pane_g2

0xac6d,	// (0x000ae8d2) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000b30b3) mup_progress_pane_g

0x954c,	// (0x000ad1b1) bg_popup_window_pane_cp05

0xac76,	// (0x000ae8db) heading_pane_cp02_ParamLimits

0xac76,	// (0x000ae8db) heading_pane_cp02

0xac90,	// (0x000ae8f5) list_popup_blid_pane

0xac98,	// (0x000ae8fd) list_blid_sat_info_pane_ParamLimits

0xac98,	// (0x000ae8fd) list_blid_sat_info_pane

0xacab,	// (0x000ae910) list_blid_sat_info_pane_g1

0xacb3,	// (0x000ae918) list_blid_sat_info_pane_t1

0x2b7a,	// (0x000a67df) mup_equalizer_pane_ParamLimits

0x2b7a,	// (0x000a67df) mup_equalizer_pane

0x2b93,	// (0x000a67f8) mup_equalizer_pane_cp1_ParamLimits

0x2b93,	// (0x000a67f8) mup_equalizer_pane_cp1

0x2bb0,	// (0x000a6815) mup_equalizer_pane_cp2_ParamLimits

0x2bb0,	// (0x000a6815) mup_equalizer_pane_cp2

0x2bcd,	// (0x000a6832) mup_equalizer_pane_cp3_ParamLimits

0x2bcd,	// (0x000a6832) mup_equalizer_pane_cp3

0x2bee,	// (0x000a6853) mup_equalizer_pane_cp4_ParamLimits

0x2bee,	// (0x000a6853) mup_equalizer_pane_cp4

0x2c0f,	// (0x000a6874) mup_equalizer_pane_cp5

0x2c23,	// (0x000a6888) mup_equalizer_pane_cp6

0x2c37,	// (0x000a689c) mup_equalizer_pane_cp7

0xbf1d,	// (0x000afb82) bg_popup_call_poc_act_pane_g9

0xbf25,	// (0x000afb8a) bg_popup_call_poc_act_pane_g10

0xbf2d,	// (0x000afb92) bg_popup_call_poc_act_pane_g11

0x000a,

0x97a7,	// (0x000ad40c) mup_scale_pane

0x9fdd,	// (0x000adc42) mup_scale_pane_g1

0xacc1,	// (0x000ae926) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000b30cf) mup_scale_pane_g

0xace5,	// (0x000ae94a) msg_data_pane

0xaced,	// (0x000ae952) scroll_pane_cp017

0x2c5d,	// (0x000a68c2) bg_list_pane_cp04_ParamLimits

0x2c5d,	// (0x000a68c2) bg_list_pane_cp04

0xacf5,	// (0x000ae95a) msg_data_pane_g1

0x2c75,	// (0x000a68da) msg_data_pane_g2

0x2c7d,	// (0x000a68e2) msg_data_pane_g3

0x2c85,	// (0x000a68ea) msg_data_pane_g4

0x2c8d,	// (0x000a68f2) msg_data_pane_g5

0x2c95,	// (0x000a68fa) msg_data_pane_g6

0x2c9d,	// (0x000a6902) msg_data_pane_g7

0x0006,

0xf479,	// (0x000b30de) msg_data_pane_g

0x2ca5,	// (0x000a690a) msg_text_pane_ParamLimits

0x2ca5,	// (0x000a690a) msg_text_pane

0x2cd0,	// (0x000a6935) qrid_highlight_pane_cp011_ParamLimits

0x2cd0,	// (0x000a6935) qrid_highlight_pane_cp011

0x954c,	// (0x000ad1b1) msg_body_pane

0x954c,	// (0x000ad1b1) msg_header_pane

0xad06,	// (0x000ae96b) input_focus_pane_cp07

0xb5ff,	// (0x000af264) msg_header_pane_t1_ParamLimits

0xb5ff,	// (0x000af264) msg_header_pane_t1

0xb611,	// (0x000af276) msg_header_pane_t2_ParamLimits

0xb611,	// (0x000af276) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000b30f2) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000b30f2) msg_header_pane_t

0xad1b,	// (0x000ae980) msg_body_pane_g1

0xb623,	// (0x000af288) msg_body_pane_t1_ParamLimits

0xb623,	// (0x000af288) msg_body_pane_t1

0xb654,	// (0x000af2b9) msg_body_pane_t2_ParamLimits

0xb654,	// (0x000af2b9) msg_body_pane_t2

0xb666,	// (0x000af2cb) msg_body_pane_t3_ParamLimits

0xb666,	// (0x000af2cb) msg_body_pane_t3

0x0002,

0xf492,	// (0x000b30f7) msg_body_pane_t_ParamLimits

0xf492,	// (0x000b30f7) msg_body_pane_t

0x2d2e,	// (0x000a6993) main_viewer_pane_g1_ParamLimits

0x2d2e,	// (0x000a6993) main_viewer_pane_g1

0x2d3c,	// (0x000a69a1) main_viewer_pane_g2_ParamLimits

0x2d3c,	// (0x000a69a1) main_viewer_pane_g2

0x2d4a,	// (0x000a69af) main_viewer_pane_g3_ParamLimits

0x2d4a,	// (0x000a69af) main_viewer_pane_g3

0x2d59,	// (0x000a69be) main_viewer_pane_g4_ParamLimits

0x2d59,	// (0x000a69be) main_viewer_pane_g4

0x99bf,	// (0x000ad624) main_viewer_pane_g5_ParamLimits

0x99bf,	// (0x000ad624) main_viewer_pane_g5

0x99bf,	// (0x000ad624) main_viewer_pane_g7_ParamLimits

0x99bf,	// (0x000ad624) main_viewer_pane_g7

0xa679,	// (0x000ae2de) main_viewer_pane_g8_ParamLimits

0xa679,	// (0x000ae2de) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000b3107) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000b3107) main_viewer_pane_g

0xad23,	// (0x000ae988) viewer_content_pane_ParamLimits

0xad23,	// (0x000ae988) viewer_content_pane

0x2d95,	// (0x000a69fa) main_postcard_pane_g1_ParamLimits

0x2d95,	// (0x000a69fa) main_postcard_pane_g1

0x2dab,	// (0x000a6a10) main_postcard_pane_g2_ParamLimits

0x2dab,	// (0x000a6a10) main_postcard_pane_g2

0x2dc1,	// (0x000a6a26) main_postcard_pane_g3_ParamLimits

0x2dc1,	// (0x000a6a26) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000b3118) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000b3118) main_postcard_pane_g

0x2dd8,	// (0x000a6a3d) main_postcard_pane_g4

0xc148,	// (0x000afdad) smil_status_volume_pane_g2

0x2e1b,	// (0x000a6a80) postcard_pane_ParamLimits

0x2e1b,	// (0x000a6a80) postcard_pane

0xad31,	// (0x000ae996) postcard_pane_g1_ParamLimits

0xad31,	// (0x000ae996) postcard_pane_g1

0x2e5d,	// (0x000a6ac2) postcard_pane_g2_ParamLimits

0x2e5d,	// (0x000a6ac2) postcard_pane_g2

0x2e69,	// (0x000a6ace) postcard_pane_g3_ParamLimits

0x2e69,	// (0x000a6ace) postcard_pane_g3

0xad3f,	// (0x000ae9a4) postcard_pane_g4_ParamLimits

0xad3f,	// (0x000ae9a4) postcard_pane_g4

0x2e75,	// (0x000a6ada) postcard_pane_g5_ParamLimits

0x2e75,	// (0x000a6ada) postcard_pane_g5

0x2e8a,	// (0x000a6aef) postcard_pane_g6_ParamLimits

0x2e8a,	// (0x000a6aef) postcard_pane_g6

0xad31,	// (0x000ae996) postcard_pane_g7_ParamLimits

0xad31,	// (0x000ae996) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000b3125) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000b3125) postcard_pane_g

0x2e9e,	// (0x000a6b03) main_mp2_pane_g1_ParamLimits

0x2e9e,	// (0x000a6b03) main_mp2_pane_g1

0x2eaa,	// (0x000a6b0f) main_mp2_pane_g2_ParamLimits

0x2eaa,	// (0x000a6b0f) main_mp2_pane_g2

0x2eb6,	// (0x000a6b1b) main_mp2_pane_g3_ParamLimits

0x2eb6,	// (0x000a6b1b) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000b3134) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000b3134) main_mp2_pane_g

0x2ec2,	// (0x000a6b27) main_mp2_pane_t1_ParamLimits

0x2ec2,	// (0x000a6b27) main_mp2_pane_t1

0x2ed7,	// (0x000a6b3c) main_mp2_pane_t2_ParamLimits

0x2ed7,	// (0x000a6b3c) main_mp2_pane_t2

0x2ee9,	// (0x000a6b4e) main_mp2_pane_t3_ParamLimits

0x2ee9,	// (0x000a6b4e) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000b313b) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000b313b) main_mp2_pane_t

0xad4d,	// (0x000ae9b2) pec_content_pane_ParamLimits

0xad4d,	// (0x000ae9b2) pec_content_pane

0xa308,	// (0x000adf6d) scroll_pane_cp015

0xad5f,	// (0x000ae9c4) pec_attribute_pane_ParamLimits

0xad5f,	// (0x000ae9c4) pec_attribute_pane

0x2efb,	// (0x000a6b60) pec_content_pane_g1_ParamLimits

0x2efb,	// (0x000a6b60) pec_content_pane_g1

0xad6f,	// (0x000ae9d4) pec_content_pane_t1_ParamLimits

0xad6f,	// (0x000ae9d4) pec_content_pane_t1

0xad81,	// (0x000ae9e6) pec_content_pane_t2_ParamLimits

0xad81,	// (0x000ae9e6) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000b3142) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000b3142) pec_content_pane_t

0x2f07,	// (0x000a6b6c) list_single_graphic_pane_cp01_ParamLimits

0x2f07,	// (0x000a6b6c) list_single_graphic_pane_cp01

0x97a7,	// (0x000ad40c) bg_popup_sub_pane_cp04

0xad93,	// (0x000ae9f8) popup_mup_playback_window_g1

0xad9f,	// (0x000aea04) popup_mup_playback_window_t1

0xadb4,	// (0x000aea19) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000b3147) popup_mup_playback_window_t

0xadeb,	// (0x000aea50) main_image_pane_g1_ParamLimits

0xadeb,	// (0x000aea50) main_image_pane_g1

0xae2e,	// (0x000aea93) scroll_pane_cp018_ParamLimits

0xae2e,	// (0x000aea93) scroll_pane_cp018

0xae46,	// (0x000aeaab) scroll_pane_cp016_ParamLimits

0xae46,	// (0x000aeaab) scroll_pane_cp016

0x2fd5,	// (0x000a6c3a) smil2_image_pane_ParamLimits

0x2fd5,	// (0x000a6c3a) smil2_image_pane

0x3005,	// (0x000a6c6a) smil2_root_pane_ParamLimits

0x3005,	// (0x000a6c6a) smil2_root_pane

0x303d,	// (0x000a6ca2) smil2_text_pane_ParamLimits

0x303d,	// (0x000a6ca2) smil2_text_pane

0x954c,	// (0x000ad1b1) bg_list_pane_cp06

0xae82,	// (0x000aeae7) grid_radio_pane

0x954c,	// (0x000ad1b1) bg_popup_window_pane_cp06

0xae8a,	// (0x000aeaef) main_fmradio_pane_t1

0xa845,	// (0x000ae4aa) heading_pane_cp04

0xae98,	// (0x000aeafd) main_fmradio_pane_t2

0xbf75,	// (0x000afbda) popup_cale_lunar_info_window_g1

0xaea6,	// (0x000aeb0b) main_fmradio_pane_t3

0xbf7d,	// (0x000afbe2) popup_cale_lunar_info_window_g2

0xaeb4,	// (0x000aeb19) main_fmradio_pane_t4

0x0001,

0xaec2,	// (0x000aeb27) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x000b3235) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000b315c) main_fmradio_pane_t

0xaed0,	// (0x000aeb35) wait_bar_pane_cp03

0xaed8,	// (0x000aeb3d) cell_fmradio_pane_ParamLimits

0xaed8,	// (0x000aeb3d) cell_fmradio_pane

0xad31,	// (0x000ae996) cell_fmradio_pane_g1_ParamLimits

0xad31,	// (0x000ae996) cell_fmradio_pane_g1

0x954c,	// (0x000ad1b1) grid_highlight_pane_cp011

0xaeeb,	// (0x000aeb50) poc_content_pane_ParamLimits

0xaeeb,	// (0x000aeb50) poc_content_pane

0xaefd,	// (0x000aeb62) scroll_pane_cp019

0x30bd,	// (0x000a6d22) popup_call_poc_act_window_ParamLimits

0x30bd,	// (0x000a6d22) popup_call_poc_act_window

0x30e1,	// (0x000a6d46) popup_call_poc_inact_window_ParamLimits

0x30e1,	// (0x000a6d46) popup_call_poc_inact_window

0xf594,	// (0x000b31f9) bg_popup_call_poc_act_pane_g

0xbf35,	// (0x000afb9a) bg_popup_call_poc_inact_pane_g1

0xbf3d,	// (0x000afba2) bg_popup_call_poc_inact_pane_g2

0xaf05,	// (0x000aeb6a) popup_call_poc_act_window_g2

0xbf45,	// (0x000afbaa) bg_popup_call_poc_inact_pane_g3

0xbec5,	// (0x000afb2a) bg_popup_call_poc_inact_pane_g4

0xbf4d,	// (0x000afbb2) bg_popup_call_poc_inact_pane_g5

0xaf0d,	// (0x000aeb72) popup_call_poc_act_window_t1_ParamLimits

0xaf0d,	// (0x000aeb72) popup_call_poc_act_window_t1

0xaf35,	// (0x000aeb9a) popup_call_poc_act_window_t2_ParamLimits

0xaf35,	// (0x000aeb9a) popup_call_poc_act_window_t2

0xaf5d,	// (0x000aebc2) popup_call_poc_act_window_t3_ParamLimits

0xaf5d,	// (0x000aebc2) popup_call_poc_act_window_t3

0xaf85,	// (0x000aebea) popup_call_poc_act_window_t4_ParamLimits

0xaf85,	// (0x000aebea) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000b3167) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000b3167) popup_call_poc_act_window_t

0xbf55,	// (0x000afbba) bg_popup_call_poc_inact_pane_g6

0xbf5d,	// (0x000afbc2) bg_popup_call_poc_inact_pane_g7

0xbf65,	// (0x000afbca) bg_popup_call_poc_inact_pane_g8

0xaf97,	// (0x000aebfc) popup_call_poc_inact_window_g2

0xbf6d,	// (0x000afbd2) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x000b3210) bg_popup_call_poc_inact_pane_g

0xaf9f,	// (0x000aec04) popup_call_poc_inact_window_t1_ParamLimits

0xaf9f,	// (0x000aec04) popup_call_poc_inact_window_t1

0xafb4,	// (0x000aec19) popup_call_poc_inact_window_t2_ParamLimits

0xafb4,	// (0x000aec19) popup_call_poc_inact_window_t2

0xafc9,	// (0x000aec2e) popup_call_poc_inact_window_t3_ParamLimits

0xafc9,	// (0x000aec2e) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x000b3170) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x000b3170) popup_call_poc_inact_window_t

0xc0bb,	// (0x000afd20) context_pane_ParamLimits

0x391b,	// (0x000a7580) signal_pane_ParamLimits

0xa15f,	// (0x000addc4) main_call2_pane

0x9a0a,	// (0x000ad66f) popup_phob_thumbnail2_window_ParamLimits

0x9a0a,	// (0x000ad66f) popup_phob_thumbnail2_window

0x99a7,	// (0x000ad60c) aid_hotspot_pointer_arrow_pane

0x99af,	// (0x000ad614) aid_hotspot_pointer_hand_pane

0x342b,	// (0x000a7090) phob_pre_status_pane_g5

0x11ea,	// (0x000a4e4f) cams_zoom_pane_ParamLimits

0x11f9,	// (0x000a4e5e) image_vga_pane_ParamLimits

0x1213,	// (0x000a4e78) main_camera_pane_g1_ParamLimits

0x1225,	// (0x000a4e8a) main_camera_pane_g2_ParamLimits

0x1235,	// (0x000a4e9a) main_camera_pane_g3_ParamLimits

0x1245,	// (0x000a4eaa) main_camera_pane_g4_ParamLimits

0x1255,	// (0x000a4eba) main_camera_pane_g5_ParamLimits

0x1265,	// (0x000a4eca) main_camera_pane_g6_ParamLimits

0x1275,	// (0x000a4eda) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000b2e6f) main_camera_pane_g_ParamLimits

0x1285,	// (0x000a4eea) main_camera_pane_t1_ParamLimits

0x129b,	// (0x000a4f00) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000b2e80) main_camera_pane_t_ParamLimits

0x97a7,	// (0x000ad40c) bg_popup_preview_window_pane_cp01_ParamLimits

0x97a7,	// (0x000ad40c) bg_popup_preview_window_pane_cp01

0xafde,	// (0x000aec43) popup_phob_thumbnail2_window_g1_ParamLimits

0xafde,	// (0x000aec43) popup_phob_thumbnail2_window_g1

0x954c,	// (0x000ad1b1) call2_cli_visual_pane

0x3115,	// (0x000a6d7a) popup_call2_audio_conf_window_ParamLimits

0x3115,	// (0x000a6d7a) popup_call2_audio_conf_window

0x3135,	// (0x000a6d9a) popup_call2_audio_first_window_ParamLimits

0x3135,	// (0x000a6d9a) popup_call2_audio_first_window

0x31cb,	// (0x000a6e30) popup_call2_audio_in_window_ParamLimits

0x31cb,	// (0x000a6e30) popup_call2_audio_in_window

0x3213,	// (0x000a6e78) popup_call2_audio_out_window_ParamLimits

0x3213,	// (0x000a6e78) popup_call2_audio_out_window

0x327d,	// (0x000a6ee2) popup_call2_audio_second_window_ParamLimits

0x327d,	// (0x000a6ee2) popup_call2_audio_second_window

0x32e3,	// (0x000a6f48) popup_call2_audio_wait_window_ParamLimits

0x32e3,	// (0x000a6f48) popup_call2_audio_wait_window

0x954c,	// (0x000ad1b1) bg_popup_call2_act_pane_cp03

0x9789,	// (0x000ad3ee) list_conf_pane_cp

0xafea,	// (0x000aec4f) popup_call2_audio_conf_window_t1

0xaff8,	// (0x000aec5d) list_single_graphic_popup_conf2_pane_ParamLimits

0xaff8,	// (0x000aec5d) list_single_graphic_popup_conf2_pane

0xa8b5,	// (0x000ae51a) list_highlight_pane_cp04

0xb00b,	// (0x000aec70) list_single_graphic_popup_conf2_pane_g1

0xa8c6,	// (0x000ae52b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x000b3177) list_single_graphic_popup_conf2_pane_g

0xb015,	// (0x000aec7a) list_single_graphic_popup_conf2_pane_t1

0xb023,	// (0x000aec88) bg_popup_call2_act_pane_cp01_ParamLimits

0xb023,	// (0x000aec88) bg_popup_call2_act_pane_cp01

0xb0ad,	// (0x000aed12) call_type_pane_cp05_ParamLimits

0xb0ad,	// (0x000aed12) call_type_pane_cp05

0xb101,	// (0x000aed66) popup_call2_audio_second_window_g1_ParamLimits

0xb101,	// (0x000aed66) popup_call2_audio_second_window_g1

0xb155,	// (0x000aedba) popup_call2_audio_second_window_g2_ParamLimits

0xb155,	// (0x000aedba) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x000b317c) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x000b317c) popup_call2_audio_second_window_g

0xb1ba,	// (0x000aee1f) popup_call2_audio_second_window_t1_ParamLimits

0xb1ba,	// (0x000aee1f) popup_call2_audio_second_window_t1

0xb275,	// (0x000aeeda) popup_call2_audio_second_window_t2_ParamLimits

0xb275,	// (0x000aeeda) popup_call2_audio_second_window_t2

0xb2c8,	// (0x000aef2d) popup_call2_audio_second_window_t3_ParamLimits

0xb2c8,	// (0x000aef2d) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x000b3183) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x000b3183) popup_call2_audio_second_window_t

0x954c,	// (0x000ad1b1) bg_popup_call2_in_pane_cp02

0x9556,	// (0x000ad1bb) call_type_pane_cp04

0x955e,	// (0x000ad1c3) popup_call2_audio_wait_window_g1

0x9566,	// (0x000ad1cb) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000b2d5e) popup_call2_audio_wait_window_g

0x956e,	// (0x000ad1d3) popup_call2_audio_wait_window_t3

0xb3bb,	// (0x000af020) bg_popup_call2_act_pane_ParamLimits

0xb3bb,	// (0x000af020) bg_popup_call2_act_pane

0xb47b,	// (0x000af0e0) call_type_pane_cp03_ParamLimits

0xb47b,	// (0x000af0e0) call_type_pane_cp03

0xb4df,	// (0x000af144) popup_call2_audio_first_window_g1_ParamLimits

0xb4df,	// (0x000af144) popup_call2_audio_first_window_g1

0xb54f,	// (0x000af1b4) popup_call2_audio_first_window_g2_ParamLimits

0xb54f,	// (0x000af1b4) popup_call2_audio_first_window_g2

0xaa5e,	// (0x000ae6c3) popup_call2_audio_first_window_g3_ParamLimits

0xaa5e,	// (0x000ae6c3) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x000b318c) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x000b318c) popup_call2_audio_first_window_g

0xb6f2,	// (0x000af357) popup_call2_audio_first_window_t1_ParamLimits

0xb6f2,	// (0x000af357) popup_call2_audio_first_window_t1

0xb7f5,	// (0x000af45a) popup_call2_audio_first_window_t4_ParamLimits

0xb7f5,	// (0x000af45a) popup_call2_audio_first_window_t4

0xb8d8,	// (0x000af53d) popup_call2_audio_first_window_t5_ParamLimits

0xb8d8,	// (0x000af53d) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x000b3197) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x000b3197) popup_call2_audio_first_window_t

0x979f,	// (0x000ad404) bg_popup_call2_act_pane_g1

0xbf85,	// (0x000afbea) popup_cale_lunar_info_window_t1

0xbf93,	// (0x000afbf8) popup_cale_lunar_info_window_t2

0xbfa1,	// (0x000afc06) popup_cale_lunar_info_window_t3

0x954c,	// (0x000ad1b1) bg_popup_call2_bubble_pane

0xb9d9,	// (0x000af63e) bg_popup_call2_in_pane_cp01_ParamLimits

0xb9d9,	// (0x000af63e) bg_popup_call2_in_pane_cp01

0xed7a,	// (0x000b29df) call_type_pane_cp02

0xba21,	// (0x000af686) popup_call2_audio_out_window_g1_ParamLimits

0xba21,	// (0x000af686) popup_call2_audio_out_window_g1

0xba4d,	// (0x000af6b2) popup_call2_audio_out_window_g2_ParamLimits

0xba4d,	// (0x000af6b2) popup_call2_audio_out_window_g2

0xba75,	// (0x000af6da) popup_call2_audio_out_window_g3_ParamLimits

0xba75,	// (0x000af6da) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x000b31a0) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x000b31a0) popup_call2_audio_out_window_g

0xbab0,	// (0x000af715) popup_call2_audio_out_window_t1_ParamLimits

0xbab0,	// (0x000af715) popup_call2_audio_out_window_t1

0xbb0f,	// (0x000af774) popup_call2_audio_out_window_t2_ParamLimits

0xbb0f,	// (0x000af774) popup_call2_audio_out_window_t2

0xbb63,	// (0x000af7c8) popup_call2_audio_out_window_t3_ParamLimits

0xbb63,	// (0x000af7c8) popup_call2_audio_out_window_t3

0xbb79,	// (0x000af7de) popup_call2_audio_out_window_t4_ParamLimits

0xbb79,	// (0x000af7de) popup_call2_audio_out_window_t4

0xbb8f,	// (0x000af7f4) popup_call2_audio_out_window_t5_ParamLimits

0xbb8f,	// (0x000af7f4) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x000b31a9) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x000b31a9) popup_call2_audio_out_window_t

0xbbf3,	// (0x000af858) bg_popup_call2_in_pane_ParamLimits

0xbbf3,	// (0x000af858) bg_popup_call2_in_pane

0xbc4f,	// (0x000af8b4) popup_call2_audio_in_window_g1_ParamLimits

0xbc4f,	// (0x000af8b4) popup_call2_audio_in_window_g1

0xbc87,	// (0x000af8ec) popup_call2_audio_in_window_g2_ParamLimits

0xbc87,	// (0x000af8ec) popup_call2_audio_in_window_g2

0xbcbf,	// (0x000af924) popup_call2_audio_in_window_g3_ParamLimits

0xbcbf,	// (0x000af924) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000b31b6) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000b31b6) popup_call2_audio_in_window_g

0xbd17,	// (0x000af97c) popup_call2_audio_in_window_t1_ParamLimits

0xbd17,	// (0x000af97c) popup_call2_audio_in_window_t1

0xbd97,	// (0x000af9fc) popup_call2_audio_in_window_t2_ParamLimits

0xbd97,	// (0x000af9fc) popup_call2_audio_in_window_t2

0xbe17,	// (0x000afa7c) popup_call2_audio_in_window_t3_ParamLimits

0xbe17,	// (0x000afa7c) popup_call2_audio_in_window_t3

0xbe31,	// (0x000afa96) popup_call2_audio_in_window_t4_ParamLimits

0xbe31,	// (0x000afa96) popup_call2_audio_in_window_t4

0xbe43,	// (0x000afaa8) popup_call2_audio_in_window_t5_ParamLimits

0xbe43,	// (0x000afaa8) popup_call2_audio_in_window_t5

0xbe58,	// (0x000afabd) popup_call2_audio_in_window_t6_ParamLimits

0xbe58,	// (0x000afabd) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x000b31bf) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x000b31bf) popup_call2_audio_in_window_t

0x979f,	// (0x000ad404) bg_popup_call2_in_pane_g1

0xbfaf,	// (0x000afc14) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x000b323a) popup_cale_lunar_info_window_t

0x97a7,	// (0x000ad40c) bg_popup_call2_rect_pane_ParamLimits

0x97a7,	// (0x000ad40c) bg_popup_call2_rect_pane

0x954c,	// (0x000ad1b1) call2_cli_visual_graphic_pane

0x954c,	// (0x000ad1b1) call2_cli_visual_text_pane

0x9a31,	// (0x000ad696) smil_status_volume_pane_g3

0x0002,

0x9fdd,	// (0x000adc42) call2_cli_visual_graphic_pane_g1

0x9fdd,	// (0x000adc42) call2_cli_visual_graphic_pane_g2

0x9fdd,	// (0x000adc42) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x000b31cc) call2_cli_visual_graphic_pane_g

0xbe6d,	// (0x000afad2) bg_popup_call2_rect_pane_g1

0xa07b,	// (0x000adce0) bg_popup_call2_rect_pane_g2

0xbe75,	// (0x000afada) bg_popup_call2_rect_pane_g3

0xbe7d,	// (0x000afae2) bg_popup_call2_rect_pane_g4

0xbe85,	// (0x000afaea) bg_popup_call2_rect_pane_g5

0xbe8d,	// (0x000afaf2) bg_popup_call2_rect_pane_g6

0xbe95,	// (0x000afafa) bg_popup_call2_rect_pane_g7

0xbe9d,	// (0x000afb02) bg_popup_call2_rect_pane_g8

0xbea5,	// (0x000afb0a) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000b31d3) bg_popup_call2_rect_pane_g

0xbead,	// (0x000afb12) bg_popup_call2_bubble_pane_g1

0xbeb5,	// (0x000afb1a) bg_popup_call2_bubble_pane_g2

0xbebd,	// (0x000afb22) bg_popup_call2_bubble_pane_g3

0xbec5,	// (0x000afb2a) bg_popup_call2_bubble_pane_g4

0xbecd,	// (0x000afb32) bg_popup_call2_bubble_pane_g5

0xbed5,	// (0x000afb3a) bg_popup_call2_bubble_pane_g6

0xbedd,	// (0x000afb42) bg_popup_call2_bubble_pane_g7

0xbee5,	// (0x000afb4a) bg_popup_call2_bubble_pane_g8

0xbeed,	// (0x000afb52) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000b31e6) bg_popup_call2_bubble_pane_g

0x0c22,	// (0x000a4887) aid_cale_week_size_cell_pane

0x12b1,	// (0x000a4f16) aid_cams_cif_uncrop_pane_ParamLimits

0x12b1,	// (0x000a4f16) aid_cams_cif_uncrop_pane

0x1466,	// (0x000a50cb) aid_cams_size_cell_ParamLimits

0x1466,	// (0x000a50cb) aid_cams_size_cell

0x147a,	// (0x000a50df) grid_cams_pane_ParamLimits

0x1494,	// (0x000a50f9) linegrid_cams_pane_ParamLimits

0x1673,	// (0x000a52d8) call_video_pane_t1

0x1691,	// (0x000a52f6) call_video_pane_t2

0x0001,

0xf26e,	// (0x000b2ed3) call_video_pane_t

0x1ab5,	// (0x000a571a) aid_cale_month_size_cell_pane_ParamLimits

0x1ab5,	// (0x000a571a) aid_cale_month_size_cell_pane

0xf61e,	// (0x000b3283) smil_status_volume_pane_g

0x9a3e,	// (0x000ad6a3) volume_smil_pane_ParamLimits

0x04c1,	// (0x000a4126) aid_popup2_width_pane

0x0ba6,	// (0x000a480b) cell_qdial_pane_g4_ParamLimits

0x0ba6,	// (0x000a480b) cell_qdial_pane_g4

0x2794,	// (0x000a63f9) aid_blid_cardinal_pane_ParamLimits

0x27a0,	// (0x000a6405) aid_blid_destination_pane_ParamLimits

0x27a0,	// (0x000a6405) aid_blid_destination_pane

0x97a7,	// (0x000ad40c) bg_popup_call_poc_act_pane_ParamLimits

0x97a7,	// (0x000ad40c) bg_popup_call_poc_act_pane

0x97a7,	// (0x000ad40c) bg_popup_call_poc_inact_pane_ParamLimits

0x97a7,	// (0x000ad40c) bg_popup_call_poc_inact_pane

0xbef5,	// (0x000afb5a) bg_popup_call_poc_act_pane_g1

0xbefd,	// (0x000afb62) bg_popup_call_poc_act_pane_g2

0xbf05,	// (0x000afb6a) bg_popup_call_poc_act_pane_g3

0xbec5,	// (0x000afb2a) bg_popup_call_poc_act_pane_g4

0xbecd,	// (0x000afb32) bg_popup_call_poc_act_pane_g5

0xbf0d,	// (0x000afb72) bg_popup_call_poc_act_pane_g6

0xbedd,	// (0x000afb42) bg_popup_call_poc_act_pane_g7

0xbf15,	// (0x000afb7a) bg_popup_call_poc_act_pane_g8

0x954c,	// (0x000ad1b1) main_usb_pane

0x99e5,	// (0x000ad64a) popup_cale_lunar_info_window

0x195b,	// (0x000a55c0) im_reading_pane_t1_ParamLimits

0xa260,	// (0x000adec5) list_im_pane_ParamLimits

0xa271,	// (0x000aded6) scroll_pane_cp07_ParamLimits

0x954c,	// (0x000ad1b1) grid_highlight_pane_cp012

0x97a7,	// (0x000ad40c) mup_scale_pane_ParamLimits

0xad31,	// (0x000ae996) main_usb_pane_g1_ParamLimits

0xad31,	// (0x000ae996) main_usb_pane_g1

0x3340,	// (0x000a6fa5) main_usb_pane_g2_ParamLimits

0x3340,	// (0x000a6fa5) main_usb_pane_g2

0x0001,

0xf5be,	// (0x000b3223) main_usb_pane_g_ParamLimits

0xf5be,	// (0x000b3223) main_usb_pane_g

0x3356,	// (0x000a6fbb) main_usb_pane_t1_ParamLimits

0x3356,	// (0x000a6fbb) main_usb_pane_t1

0x3368,	// (0x000a6fcd) main_usb_pane_t2_ParamLimits

0x3368,	// (0x000a6fcd) main_usb_pane_t2

0x337a,	// (0x000a6fdf) main_usb_pane_t3_ParamLimits

0x337a,	// (0x000a6fdf) main_usb_pane_t3

0x338c,	// (0x000a6ff1) main_usb_pane_t4_ParamLimits

0x338c,	// (0x000a6ff1) main_usb_pane_t4

0x339e,	// (0x000a7003) main_usb_pane_t5_ParamLimits

0x339e,	// (0x000a7003) main_usb_pane_t5

0x33b0,	// (0x000a7015) main_usb_pane_t6_ParamLimits

0x33b0,	// (0x000a7015) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x000b3228) main_usb_pane_t_ParamLimits

0x2743,	// (0x000a63a8) aid_text_placing

0x274c,	// (0x000a63b1) main_location2_pane_t1_ParamLimits

0x275e,	// (0x000a63c3) main_location2_pane_t2_ParamLimits

0x2770,	// (0x000a63d5) main_location2_pane_t3_ParamLimits

0x2782,	// (0x000a63e7) main_location2_pane_t4_ParamLimits

0x2782,	// (0x000a63e7) main_location2_pane_t4

0xf3cf,	// (0x000b3034) main_location2_pane_t_ParamLimits

0x97e3,	// (0x000ad448) find_pinb_pane_g2_ParamLimits

0x97e3,	// (0x000ad448) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x000b2d84) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x000b2d84) find_pinb_pane_g

0x97ef,	// (0x000ad454) find_pinb_pane_t1_ParamLimits

0x9801,	// (0x000ad466) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x000b2d89) find_pinb_pane_t_ParamLimits

0x954c,	// (0x000ad1b1) main_call3_pane

0x1f9c,	// (0x000a5c01) cale_month_day_heading_pane_t1_ParamLimits

0x1fde,	// (0x000a5c43) cale_month_day_heading_pane_t2_ParamLimits

0x2013,	// (0x000a5c78) cale_month_day_heading_pane_t3_ParamLimits

0x2048,	// (0x000a5cad) cale_month_day_heading_pane_t4_ParamLimits

0x2085,	// (0x000a5cea) cale_month_day_heading_pane_t5_ParamLimits

0x20ca,	// (0x000a5d2f) cale_month_day_heading_pane_t6_ParamLimits

0x210f,	// (0x000a5d74) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000b2f0b) cale_month_day_heading_pane_t_ParamLimits

0xa4bb,	// (0x000ae120) smil_status_volume_pane

0x2e39,	// (0x000a6a9e) postcard_address_pane_ParamLimits

0x2e39,	// (0x000a6a9e) postcard_address_pane

0x2e4b,	// (0x000a6ab0) postcard_message_pane_ParamLimits

0x2e4b,	// (0x000a6ab0) postcard_message_pane

0x331d,	// (0x000a6f82) call2_cli_visual_pane_t1_ParamLimits

0x331d,	// (0x000a6f82) call2_cli_visual_pane_t1

0x3b4a,	// (0x000a77af) postcard_message_pane_t1_ParamLimits

0x3b4a,	// (0x000a77af) postcard_message_pane_t1

0x3b33,	// (0x000a7798) postcard_address_pane_t1_ParamLimits

0x3b33,	// (0x000a7798) postcard_address_pane_t1

0x3b1f,	// (0x000a7784) popup_call3_audio_in_window_ParamLimits

0x3b1f,	// (0x000a7784) popup_call3_audio_in_window

0x39aa,	// (0x000a760f) bg_popup_call3_in_pane_ParamLimits

0x39aa,	// (0x000a760f) bg_popup_call3_in_pane

0x3a20,	// (0x000a7685) popup_call3_audio_in_window_g1_ParamLimits

0x3a20,	// (0x000a7685) popup_call3_audio_in_window_g1

0x3a40,	// (0x000a76a5) popup_call3_audio_in_window_g2_ParamLimits

0x3a40,	// (0x000a76a5) popup_call3_audio_in_window_g2

0x3a60,	// (0x000a76c5) popup_call3_audio_in_window_g3_ParamLimits

0x3a60,	// (0x000a76c5) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x000b328a) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x000b328a) popup_call3_audio_in_window_g

0x3a91,	// (0x000a76f6) popup_call3_audio_in_window_t1_ParamLimits

0x3a91,	// (0x000a76f6) popup_call3_audio_in_window_t1

0x3acf,	// (0x000a7734) popup_call3_audio_in_window_t2_ParamLimits

0x3acf,	// (0x000a7734) popup_call3_audio_in_window_t2

0x3b0d,	// (0x000a7772) popup_call3_audio_in_window_t3_ParamLimits

0x3b0d,	// (0x000a7772) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x000b3293) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x000b3293) popup_call3_audio_in_window_t

0xa15f,	// (0x000addc4) bg_popup_call3_rect_pane

0xbe6d,	// (0x000afad2) bg_popup_call3_rect_pane_g1

0xa07b,	// (0x000adce0) bg_popup_call3_rect_pane_g2

0xbe75,	// (0x000afada) bg_popup_call3_rect_pane_g3

0xbe7d,	// (0x000afae2) bg_popup_call3_rect_pane_g4

0xbe85,	// (0x000afaea) bg_popup_call3_rect_pane_g5

0xbe8d,	// (0x000afaf2) bg_popup_call3_rect_pane_g6

0xbe95,	// (0x000afafa) bg_popup_call3_rect_pane_g7

0x2a7a,	// (0x000a66df) mup_visualizer_osc_pane

0xac53,	// (0x000ae8b8) mup_visualizer_spec_pane

0x39da,	// (0x000a763f) call3_video_qcif_pane_ParamLimits

0x39da,	// (0x000a763f) call3_video_qcif_pane

0x39ed,	// (0x000a7652) call3_video_qcif_uncrop_pane_ParamLimits

0x39ed,	// (0x000a7652) call3_video_qcif_uncrop_pane

0x39fb,	// (0x000a7660) call3_video_subqcif_pane_ParamLimits

0x39fb,	// (0x000a7660) call3_video_subqcif_pane

0x3a0f,	// (0x000a7674) call3_video_subqcif_uncrop_pane_ParamLimits

0x3a0f,	// (0x000a7674) call3_video_subqcif_uncrop_pane

0x3a80,	// (0x000a76e5) popup_call3_audio_in_window_g4_ParamLimits

0x3a80,	// (0x000a76e5) popup_call3_audio_in_window_g4

0x3999,	// (0x000a75fe) mup_spec_half_pane

0x39a2,	// (0x000a7607) mup_spec_half_pane_cp

0xc11b,	// (0x000afd80) mup_osc_middle_pane

0xc124,	// (0x000afd89) mup_visualizer_osc_pane_g1

0x3979,	// (0x000a75de) mup_spec_bar_pane_ParamLimits

0x3979,	// (0x000a75de) mup_spec_bar_pane

0xc108,	// (0x000afd6d) mup_spec_bar_pane_g1

0xc112,	// (0x000afd77) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x000b327e) mup_spec_bar_pane_g

0x0c22,	// (0x000a4887) aid_cale_week_size_cell_pane_ParamLimits

0x0c3c,	// (0x000a48a1) bg_cale_heading_pane_ParamLimits

0xa0b8,	// (0x000add1d) bg_cale_pane_cp01_ParamLimits

0x0c54,	// (0x000a48b9) cale_week_corner_pane_ParamLimits

0x0c73,	// (0x000a48d8) cale_week_day_heading_pane_ParamLimits

0x0c90,	// (0x000a48f5) cale_week_scroll_pane_g1_ParamLimits

0x0ca3,	// (0x000a4908) cale_week_scroll_pane_g2_ParamLimits

0x0cbb,	// (0x000a4920) cale_week_scroll_pane_g3_ParamLimits

0x0cd3,	// (0x000a4938) cale_week_scroll_pane_g4_ParamLimits

0x0ceb,	// (0x000a4950) cale_week_scroll_pane_g5_ParamLimits

0x0d0b,	// (0x000a4970) cale_week_scroll_pane_g6_ParamLimits

0x0d2b,	// (0x000a4990) cale_week_scroll_pane_g7_ParamLimits

0x0d4b,	// (0x000a49b0) cale_week_scroll_pane_g8_ParamLimits

0x0d6f,	// (0x000a49d4) cale_week_scroll_pane_g9_ParamLimits

0x0d87,	// (0x000a49ec) cale_week_scroll_pane_g10_ParamLimits

0x0d9f,	// (0x000a4a04) cale_week_scroll_pane_g11_ParamLimits

0x0db7,	// (0x000a4a1c) cale_week_scroll_pane_g12_ParamLimits

0x0dcf,	// (0x000a4a34) cale_week_scroll_pane_g13_ParamLimits

0x0dcf,	// (0x000a4a34) cale_week_scroll_pane_g14_ParamLimits

0x0dcf,	// (0x000a4a34) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000b2e15) cale_week_scroll_pane_g_ParamLimits

0x0e0b,	// (0x000a4a70) cale_week_time_pane_ParamLimits

0x0e2f,	// (0x000a4a94) grid_cale_week_pane_ParamLimits

0xa0d5,	// (0x000add3a) listscroll_cale_week_pane_t1

0xa0e7,	// (0x000add4c) scroll_pane_cp08_ParamLimits

0x1b15,	// (0x000a577a) cale_month_corner_pane_ParamLimits

0xa491,	// (0x000ae0f6) cale_month_pane_t1

0x1f2f,	// (0x000a5b94) cale_month_week_pane_ParamLimits

0x2574,	// (0x000a61d9) popup_call_status_window_g1_ParamLimits

0x2588,	// (0x000a61ed) popup_call_status_window_g2_ParamLimits

0x259c,	// (0x000a6201) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000b2fbb) popup_call_status_window_g_ParamLimits

0xa835,	// (0x000ae49a) aid_call2_pane

0x2ce6,	// (0x000a694b) msg_header_pane_g1

0x2e39,	// (0x000a6a9e) postcard_address2_pane_ParamLimits

0x2e39,	// (0x000a6a9e) postcard_address2_pane

0x2e4b,	// (0x000a6ab0) postcard_message2_pane_ParamLimits

0x2e4b,	// (0x000a6ab0) postcard_message2_pane

0x3929,	// (0x000a758e) message2_row_pane_ParamLimits

0x3929,	// (0x000a758e) message2_row_pane

0x3946,	// (0x000a75ab) address2_row_pane_ParamLimits

0x3946,	// (0x000a75ab) address2_row_pane

0xc0d6,	// (0x000afd3b) postcard_message2_row_pane_g1

0xc0de,	// (0x000afd43) postcard_message2_row_pane_t1

0xc0d6,	// (0x000afd3b) address2_row_pane_g1

0xc0de,	// (0x000afd43) address2_row_pane_t1

0x1169,	// (0x000a4dce) aid_size_cell_vorec

0x954c,	// (0x000ad1b1) main_rss_pane

0x3959,	// (0x000a75be) rss_list_single_pane_ParamLimits

0x3959,	// (0x000a75be) rss_list_single_pane

0xc0ec,	// (0x000afd51) rss_list_single_pane_t1

0xc0fa,	// (0x000afd5f) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x000b3279) rss_list_single_pane_t

0x954c,	// (0x000ad1b1) main_camera2_pane

0x954c,	// (0x000ad1b1) main_video2_pane

0x3bc3,	// (0x000a7828) cams_zoom_pane_cp2_ParamLimits

0x3bc3,	// (0x000a7828) cams_zoom_pane_cp2

0x3be3,	// (0x000a7848) image2_vga_pane_ParamLimits

0x3be3,	// (0x000a7848) image2_vga_pane

0x3c34,	// (0x000a7899) main_camera2_pane_g1_ParamLimits

0x3c34,	// (0x000a7899) main_camera2_pane_g1

0x3c54,	// (0x000a78b9) main_camera2_pane_g2_ParamLimits

0x3c54,	// (0x000a78b9) main_camera2_pane_g2

0x3c74,	// (0x000a78d9) main_camera2_pane_g3_ParamLimits

0x3c74,	// (0x000a78d9) main_camera2_pane_g3

0x3c94,	// (0x000a78f9) main_camera2_pane_g4_ParamLimits

0x3c94,	// (0x000a78f9) main_camera2_pane_g4

0x3cb4,	// (0x000a7919) main_camera2_pane_g5_ParamLimits

0x3cb4,	// (0x000a7919) main_camera2_pane_g5

0x3cd4,	// (0x000a7939) main_camera2_pane_g6_ParamLimits

0x3cd4,	// (0x000a7939) main_camera2_pane_g6

0x3cf4,	// (0x000a7959) main_camera2_pane_g7_ParamLimits

0x3cf4,	// (0x000a7959) main_camera2_pane_g7

0x3d14,	// (0x000a7979) main_camera2_pane_g8_ParamLimits

0x3d14,	// (0x000a7979) main_camera2_pane_g8

0x0008,

0xf635,	// (0x000b329a) main_camera2_pane_g_ParamLimits

0xf635,	// (0x000b329a) main_camera2_pane_g

0x3d54,	// (0x000a79b9) main_camera2_pane_t1_ParamLimits

0x3d54,	// (0x000a79b9) main_camera2_pane_t1

0x3d89,	// (0x000a79ee) main_camera2_pane_t2_ParamLimits

0x3d89,	// (0x000a79ee) main_camera2_pane_t2

0x3daf,	// (0x000a7a14) main_camera2_pane_t3_ParamLimits

0x3daf,	// (0x000a7a14) main_camera2_pane_t3

0x3e0d,	// (0x000a7a72) main_camera2_pane_t4_ParamLimits

0x3e0d,	// (0x000a7a72) main_camera2_pane_t4

0x0006,

0xf648,	// (0x000b32ad) main_camera2_pane_t_ParamLimits

0xf648,	// (0x000b32ad) main_camera2_pane_t

0x3e9f,	// (0x000a7b04) cams_zoom_pane_cp4_ParamLimits

0x3e9f,	// (0x000a7b04) cams_zoom_pane_cp4

0x3eb5,	// (0x000a7b1a) image2_cif_pane_ParamLimits

0x3eb5,	// (0x000a7b1a) image2_cif_pane

0x3ee0,	// (0x000a7b45) image2_subqcif_pane_ParamLimits

0x3ee0,	// (0x000a7b45) image2_subqcif_pane

0x3efa,	// (0x000a7b5f) main_video2_pane_g1_ParamLimits

0x3efa,	// (0x000a7b5f) main_video2_pane_g1

0x3f14,	// (0x000a7b79) main_video2_pane_g2_ParamLimits

0x3f14,	// (0x000a7b79) main_video2_pane_g2

0x3f2a,	// (0x000a7b8f) main_video2_pane_g3_ParamLimits

0x3f2a,	// (0x000a7b8f) main_video2_pane_g3

0x3f40,	// (0x000a7ba5) main_video2_pane_g4_ParamLimits

0x3f40,	// (0x000a7ba5) main_video2_pane_g4

0x3f56,	// (0x000a7bbb) main_video2_pane_g5_ParamLimits

0x3f56,	// (0x000a7bbb) main_video2_pane_g5

0x3f6c,	// (0x000a7bd1) main_video2_pane_g6_ParamLimits

0x3f6c,	// (0x000a7bd1) main_video2_pane_g6

0x0005,

0xf657,	// (0x000b32bc) main_video2_pane_g_ParamLimits

0xf657,	// (0x000b32bc) main_video2_pane_g

0x3f86,	// (0x000a7beb) main_video2_pane_t1_ParamLimits

0x3f86,	// (0x000a7beb) main_video2_pane_t1

0x3faa,	// (0x000a7c0f) main_video2_pane_t2_ParamLimits

0x3faa,	// (0x000a7c0f) main_video2_pane_t2

0x3ff8,	// (0x000a7c5d) main_video2_pane_t3_ParamLimits

0x3ff8,	// (0x000a7c5d) main_video2_pane_t3

0x0002,

0xf664,	// (0x000b32c9) main_video2_pane_t_ParamLimits

0xf664,	// (0x000b32c9) main_video2_pane_t

0x346b,	// (0x000a70d0) call_muted_g2

0x0001,

0xf606,	// (0x000b326b) call_muted_g

0x954c,	// (0x000ad1b1) main_mup2_pane

0x4040,	// (0x000a7ca5) main_mup2_pane_g1_ParamLimits

0x4040,	// (0x000a7ca5) main_mup2_pane_g1

0x404c,	// (0x000a7cb1) main_mup2_pane_g2_ParamLimits

0x404c,	// (0x000a7cb1) main_mup2_pane_g2

0x9aac,	// (0x000ad711) main_mup_pane_g13_cp1

0x9ab4,	// (0x000ad719) mup_volume_pane_cp1

0x4068,	// (0x000a7ccd) main_mup2_pane_g4_ParamLimits

0x4068,	// (0x000a7ccd) main_mup2_pane_g4

0x407a,	// (0x000a7cdf) main_mup2_pane_g5_ParamLimits

0x407a,	// (0x000a7cdf) main_mup2_pane_g5

0x408c,	// (0x000a7cf1) main_mup2_pane_g6_ParamLimits

0x408c,	// (0x000a7cf1) main_mup2_pane_g6

0x409e,	// (0x000a7d03) main_mup2_pane_g7_ParamLimits

0x409e,	// (0x000a7d03) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x000b32d0) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x000b32d0) main_mup2_pane_g

0x40b6,	// (0x000a7d1b) main_mup2_pane_t1_ParamLimits

0x40b6,	// (0x000a7d1b) main_mup2_pane_t1

0x40cc,	// (0x000a7d31) main_mup2_pane_t2_ParamLimits

0x40cc,	// (0x000a7d31) main_mup2_pane_t2

0x40e2,	// (0x000a7d47) main_mup2_pane_t3_ParamLimits

0x40e2,	// (0x000a7d47) main_mup2_pane_t3

0x40f8,	// (0x000a7d5d) main_mup2_pane_t4_ParamLimits

0x40f8,	// (0x000a7d5d) main_mup2_pane_t4

0x4110,	// (0x000a7d75) main_mup2_pane_t5_ParamLimits

0x4110,	// (0x000a7d75) main_mup2_pane_t5

0x4128,	// (0x000a7d8d) main_mup2_pane_t6_ParamLimits

0x4128,	// (0x000a7d8d) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x000b32df) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x000b32df) main_mup2_pane_t

0x4158,	// (0x000a7dbd) mup2_visualizer_pane_ParamLimits

0x4158,	// (0x000a7dbd) mup2_visualizer_pane

0x4186,	// (0x000a7deb) mup_progress_pane_cp_ParamLimits

0x4186,	// (0x000a7deb) mup_progress_pane_cp

0x9a97,	// (0x000ad6fc) mup_volume_pane_cp_ParamLimits

0x9a97,	// (0x000ad6fc) mup_volume_pane_cp

0x419a,	// (0x000a7dff) mup2_visualizer_pane_g1_ParamLimits

0x419a,	// (0x000a7dff) mup2_visualizer_pane_g1

0xc15b,	// (0x000afdc0) mup2_visualizer_pane_g2_ParamLimits

0xc15b,	// (0x000afdc0) mup2_visualizer_pane_g2

0x41b1,	// (0x000a7e16) mup2_visualizer_pane_g3_ParamLimits

0x41b1,	// (0x000a7e16) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x000b32ec) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x000b32ec) mup2_visualizer_pane_g

0xae7a,	// (0x000aeadf) aid_size_cell_fmradio

0x361d,	// (0x000a7282) aid_height_parent_landcape

0xa2ef,	// (0x000adf54) wml_content_pane_cp

0xa2f7,	// (0x000adf5c) wml_tabs_pane

0xa300,	// (0x000adf65) popup_wml_miniature_window

0xa308,	// (0x000adf6d) scroll_pane_cp021

0xa31c,	// (0x000adf81) wml_content_pane_comp8

0x954c,	// (0x000ad1b1) bg_popup_sub_pane_cp05

0xc179,	// (0x000afdde) popup_wml_miniature_window_g1

0xc181,	// (0x000afde6) wml_miniature_view_pane

0x41bd,	// (0x000a7e22) aid_size_wml_view

0x41c5,	// (0x000a7e2a) wml_miniature_view_pane_g1

0x41ce,	// (0x000a7e33) wml_miniature_view_pane_g2

0x41d7,	// (0x000a7e3c) wml_miniature_view_pane_g3

0x41df,	// (0x000a7e44) wml_miniature_view_pane_g4

0x41e7,	// (0x000a7e4c) wml_miniature_view_pane_g5

0x41ef,	// (0x000a7e54) wml_miniature_view_pane_g6

0x41f7,	// (0x000a7e5c) wml_miniature_view_pane_g7

0x41ff,	// (0x000a7e64) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x000b32f3) wml_miniature_view_pane_g

0xc189,	// (0x000afdee) background_graphic_ParamLimits

0xc189,	// (0x000afdee) background_graphic

0xc195,	// (0x000afdfa) wml_tabs_2_pane

0xc19e,	// (0x000afe03) wml_tabs_3_pane_ParamLimits

0xc19e,	// (0x000afe03) wml_tabs_3_pane

0xc1b0,	// (0x000afe15) wml_tabs_4_pane_ParamLimits

0xc1b0,	// (0x000afe15) wml_tabs_4_pane

0xc1c6,	// (0x000afe2b) wml_tabs_5_pane_ParamLimits

0xc1c6,	// (0x000afe2b) wml_tabs_5_pane

0xc1e0,	// (0x000afe45) wml_tabs_pane_g2_ParamLimits

0xc1e0,	// (0x000afe45) wml_tabs_pane_g2

0xc1f4,	// (0x000afe59) wml_tabs_pane_g3_ParamLimits

0xc1f4,	// (0x000afe59) wml_tabs_pane_g3

0x4207,	// (0x000a7e6c) wml_tabs_2_active_pane_ParamLimits

0x4207,	// (0x000a7e6c) wml_tabs_2_active_pane

0x421b,	// (0x000a7e80) wml_tabs_2_passive_pane_ParamLimits

0x421b,	// (0x000a7e80) wml_tabs_2_passive_pane

0x422f,	// (0x000a7e94) wml_tabs_3_active_pane_cp_ParamLimits

0x422f,	// (0x000a7e94) wml_tabs_3_active_pane_cp

0x4244,	// (0x000a7ea9) wml_tabs_3_passive_pane_ParamLimits

0x4244,	// (0x000a7ea9) wml_tabs_3_passive_pane

0x4257,	// (0x000a7ebc) wml_tabs_3_passive_pane_cp_ParamLimits

0x4257,	// (0x000a7ebc) wml_tabs_3_passive_pane_cp

0x426e,	// (0x000a7ed3) tabs_4_active_pane

0x4276,	// (0x000a7edb) tabs_4_passive_pane

0x4280,	// (0x000a7ee5) tabs_4_passive_pane_cp

0x4288,	// (0x000a7eed) tabs_4_passive_pane_cp2

0x3338,	// (0x000a6f9d) aid_height_text

0x2a4c,	// (0x000a66b1) mup_volume_cont_pane_ParamLimits

0x2a4c,	// (0x000a66b1) mup_volume_cont_pane

0x0847,	// (0x000a44ac) aid_size_cell_pinb

0x0851,	// (0x000a44b6) aid_size_list_pinb

0x4172,	// (0x000a7dd7) mup2_volume_cont_pane_ParamLimits

0x4172,	// (0x000a7dd7) mup2_volume_cont_pane

0x9a83,	// (0x000ad6e8) mup2_volume_cont_pane_g1_ParamLimits

0x9a83,	// (0x000ad6e8) mup2_volume_cont_pane_g1

0x04cd,	// (0x000a4132) aid_size_cell_touch_ParamLimits

0x04cd,	// (0x000a4132) aid_size_cell_touch

0x0736,	// (0x000a439b) touch_pane_ParamLimits

0x0736,	// (0x000a439b) touch_pane

0x9487,	// (0x000ad0ec) main_rss2_pane

0xc211,	// (0x000afe76) listscroll_rss2_pane

0xc21a,	// (0x000afe7f) rss2_navigation_pane

0xc222,	// (0x000afe87) list_rss2_pane

0xa95a,	// (0x000ae5bf) scroll_pane_cp22

0xc22a,	// (0x000afe8f) rss2_navigation_pane_g1

0xc233,	// (0x000afe98) rss2_navigation_pane_g2

0xc23b,	// (0x000afea0) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x000b3304) rss2_navigation_pane_g

0xc243,	// (0x000afea8) rss2_navigation_pane_t1

0x4292,	// (0x000a7ef7) rss2_list_single_pane_ParamLimits

0x4292,	// (0x000a7ef7) rss2_list_single_pane

0xc251,	// (0x000afeb6) rss2_list_single_pane_t2

0xc25f,	// (0x000afec4) rss2_list_single_pane_t3_ParamLimits

0xc25f,	// (0x000afec4) rss2_list_single_pane_t3

0xc27c,	// (0x000afee1) rss2_list_single_pane_t4

0x2381,	// (0x000a5fe6) smil_status_pane_g1

0x9479,	// (0x000ad0de) main_image2_pane_ParamLimits

0x9479,	// (0x000ad0de) main_image2_pane

0x3d34,	// (0x000a7999) main_camera2_pane_g9_ParamLimits

0x3d34,	// (0x000a7999) main_camera2_pane_g9

0x3e62,	// (0x000a7ac7) main_camera2_pane_t5_ParamLimits

0x3e62,	// (0x000a7ac7) main_camera2_pane_t5

0x9a53,	// (0x000ad6b8) main_camera2_pane_t6_ParamLimits

0x9a53,	// (0x000ad6b8) main_camera2_pane_t6

0x42a8,	// (0x000a7f0d) main_image2_pane_g1_ParamLimits

0x42a8,	// (0x000a7f0d) main_image2_pane_g1

0x3073,	// (0x000a6cd8) smil2_video_pane_ParamLimits

0x3073,	// (0x000a6cd8) smil2_video_pane

0x050d,	// (0x000a4172) aid_zoom_text_primary_cp

0x946f,	// (0x000ad0d4) popup_preview_fixed_window

0xa258,	// (0x000adebd) im_reading_pane_g1

0x3bab,	// (0x000a7810) cams2_bc_adjust_pane_cp_ParamLimits

0x3bab,	// (0x000a7810) cams2_bc_adjust_pane_cp

0x3e91,	// (0x000a7af6) cams2_bc_adjust_pane_ParamLimits

0x3e91,	// (0x000a7af6) cams2_bc_adjust_pane

0xcbbb,	// (0x000b0820) cams2_bc_adjust_pane_g1

0x9abc,	// (0x000ad721) cams2_slider_pane

0x9ac5,	// (0x000ad72a) cams2_slider_pane_g1

0x9ace,	// (0x000ad733) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x000b330b) cams2_slider_pane_g

0x0939,	// (0x000a459e) calc_display_pane_ParamLimits

0x0961,	// (0x000a45c6) calc_paper_pane_ParamLimits

0x0984,	// (0x000a45e9) grid_calc_pane_ParamLimits

0x9978,	// (0x000ad5dd) popup_clock_digital_window_t1_ParamLimits

0xae17,	// (0x000aea7c) main_image_pane_t1

0x091b,	// (0x000a4580) aid_size_cell_calc_ParamLimits

0x091b,	// (0x000a4580) aid_size_cell_calc

0x3675,	// (0x000a72da) popup_blid_sat_info2_window_ParamLimits

0x3675,	// (0x000a72da) popup_blid_sat_info2_window

0xc292,	// (0x000afef7) aid_size_cell_blid

0xc29a,	// (0x000afeff) bg_popup_window_pane_cp07

0xc2bd,	// (0x000aff22) grid_popup_blid_pane

0xc2c7,	// (0x000aff2c) heading_pane_cp05_ParamLimits

0xc2c7,	// (0x000aff2c) heading_pane_cp05

0xc391,	// (0x000afff6) cell_popup_blid_pane_ParamLimits

0xc391,	// (0x000afff6) cell_popup_blid_pane

0xc3b5,	// (0x000b001a) cell_popup_blid_pane_g1

0xc3bd,	// (0x000b0022) cell_popup_blid_pane_t1

0x4142,	// (0x000a7da7) mup2_indicator_pane_ParamLimits

0x4142,	// (0x000a7da7) mup2_indicator_pane

0xa15f,	// (0x000addc4) mup2_visualizer_osc_pane

0xc167,	// (0x000afdcc) mup2_visualizer_spec_pane_ParamLimits

0xc167,	// (0x000afdcc) mup2_visualizer_spec_pane

0x42be,	// (0x000a7f23) mup2_spec_half_pane

0x42c7,	// (0x000a7f2c) mup2_spec_half_pane_cp

0x42cf,	// (0x000a7f34) mup2_spec_bar_pane_ParamLimits

0x42cf,	// (0x000a7f34) mup2_spec_bar_pane

0xc108,	// (0x000afd6d) mup2_spec_bar_pane_g1

0xc112,	// (0x000afd77) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x000b327e) mup2_spec_bar_pane_g

0x42ef,	// (0x000a7f54) mup2_osc_middle_pane

0xc124,	// (0x000afd89) mup2_visualizer_osc_pane_g1

0xe1ed,	// (0x000b1e52) popup_number_entry_window_t1_ParamLimits

0xecbe,	// (0x000b2923) popup_number_entry_window_t2_ParamLimits

0xecd0,	// (0x000b2935) popup_number_entry_window_t3_ParamLimits

0x0788,	// (0x000a43ed) popup_number_entry_window_t5_ParamLimits

0x0788,	// (0x000a43ed) popup_number_entry_window_t5

0xf0ca,	// (0x000b2d2f) popup_number_entry_window_t_ParamLimits

0xece2,	// (0x000b2947) text_title_cp2_ParamLimits

0x99b7,	// (0x000ad61c) aid_hotspot_pointer_text2_pane

0x99d1,	// (0x000ad636) main_viewer_pane_g9_ParamLimits

0x99d1,	// (0x000ad636) main_viewer_pane_g9

0xa491,	// (0x000ae0f6) cale_month_pane_t1_ParamLimits

0xa4ce,	// (0x000ae133) bg_cale_pane_ParamLimits

0xa4e6,	// (0x000ae14b) list_cale_pane_ParamLimits

0xa4f7,	// (0x000ae15c) listscroll_cale_day_pane_t1

0xa509,	// (0x000ae16e) scroll_pane_cp09_ParamLimits

0x2a82,	// (0x000a66e7) main_mup_eq_pane_t1_ParamLimits

0x2a82,	// (0x000a66e7) main_mup_eq_pane_t1

0x2a9c,	// (0x000a6701) main_mup_eq_pane_t2_ParamLimits

0x2a9c,	// (0x000a6701) main_mup_eq_pane_t2

0x2ab6,	// (0x000a671b) main_mup_eq_pane_t3_ParamLimits

0x2ab6,	// (0x000a671b) main_mup_eq_pane_t3

0x2ad2,	// (0x000a6737) main_mup_eq_pane_t4_ParamLimits

0x2ad2,	// (0x000a6737) main_mup_eq_pane_t4

0x2aee,	// (0x000a6753) main_mup_eq_pane_t5_ParamLimits

0x2aee,	// (0x000a6753) main_mup_eq_pane_t5

0x2b0a,	// (0x000a676f) main_mup_eq_pane_t6_ParamLimits

0x2b0a,	// (0x000a676f) main_mup_eq_pane_t6

0x2b1e,	// (0x000a6783) main_mup_eq_pane_t7_ParamLimits

0x2b1e,	// (0x000a6783) main_mup_eq_pane_t7

0x2b32,	// (0x000a6797) main_mup_eq_pane_t8_ParamLimits

0x2b32,	// (0x000a6797) main_mup_eq_pane_t8

0x2b46,	// (0x000a67ab) main_mup_eq_pane_t9_ParamLimits

0x2b46,	// (0x000a67ab) main_mup_eq_pane_t9

0x2b60,	// (0x000a67c5) main_mup_eq_pane_t10_ParamLimits

0x2b60,	// (0x000a67c5) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000b30ba) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000b30ba) main_mup_eq_pane_t

0x2c0f,	// (0x000a6874) mup_equalizer_pane_cp5_ParamLimits

0x2c23,	// (0x000a6888) mup_equalizer_pane_cp6_ParamLimits

0x2c37,	// (0x000a689c) mup_equalizer_pane_cp7_ParamLimits

0x9487,	// (0x000ad0ec) main_gallery_pane

0xc12d,	// (0x000afd92) smil2_volume_pane

0xc135,	// (0x000afd9a) smil_status_volume_pane_g1_ParamLimits

0xc148,	// (0x000afdad) smil_status_volume_pane_g2_ParamLimits

0x9a31,	// (0x000ad696) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x000b3283) smil_status_volume_pane_g_ParamLimits

0xc29a,	// (0x000afeff) bg_popup_window_pane_cp07_ParamLimits

0xc2a8,	// (0x000aff0d) blid_firmament_pane

0x42f8,	// (0x000a7f5d) aid_size_cell_gallery_ParamLimits

0x42f8,	// (0x000a7f5d) aid_size_cell_gallery

0x430e,	// (0x000a7f73) grid_gallery_pane_ParamLimits

0x430e,	// (0x000a7f73) grid_gallery_pane

0x4327,	// (0x000a7f8c) cell_gallery_pane_ParamLimits

0x4327,	// (0x000a7f8c) cell_gallery_pane

0xc3cb,	// (0x000b0030) bg_cell_gallery_focus_pane_ParamLimits

0xc3cb,	// (0x000b0030) bg_cell_gallery_focus_pane

0xc3dd,	// (0x000b0042) cell_gallery_pane_g1_ParamLimits

0xc3dd,	// (0x000b0042) cell_gallery_pane_g1

0x4370,	// (0x000a7fd5) cell_gallery_pane_g2_ParamLimits

0x4370,	// (0x000a7fd5) cell_gallery_pane_g2

0x437d,	// (0x000a7fe2) cell_gallery_pane_g3_ParamLimits

0x437d,	// (0x000a7fe2) cell_gallery_pane_g3

0xc3e9,	// (0x000b004e) cell_gallery_pane_g4_ParamLimits

0xc3e9,	// (0x000b004e) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x000b3331) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x000b3331) cell_gallery_pane_g

0xc3f5,	// (0x000b005a) bg_cell_gallery_focus_pane_g1

0xc3fd,	// (0x000b0062) bg_cell_gallery_focus_pane_g2

0xc405,	// (0x000b006a) bg_cell_gallery_focus_pane_g3

0xc40d,	// (0x000b0072) bg_cell_gallery_focus_pane_g4

0xc415,	// (0x000b007a) bg_cell_gallery_focus_pane_g5

0xc41d,	// (0x000b0082) bg_cell_gallery_focus_pane_g6

0xc425,	// (0x000b008a) bg_cell_gallery_focus_pane_g7

0xc42d,	// (0x000b0092) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x000b333a) bg_cell_gallery_focus_pane_g

0xc435,	// (0x000b009a) aid_firma_cardinal

0xc449,	// (0x000b00ae) blid_firmament_pane_t1

0xc460,	// (0x000b00c5) blid_firmament_pane_t2

0xc477,	// (0x000b00dc) blid_firmament_pane_t3

0xc48e,	// (0x000b00f3) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x000b334b) blid_firmament_pane_t

0xc4a5,	// (0x000b010a) blid_sat_info_pane

0xc4b5,	// (0x000b011a) blid_sat_info_pane_g1

0xc4b5,	// (0x000b011a) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x000b3354) blid_sat_info_pane_g

0xc4bf,	// (0x000b0124) blid_sat_info_pane_t1

0xc4cd,	// (0x000b0132) smil2_volume_content_pane

0xc4d6,	// (0x000b013b) smil2_volume_pane_g1

0xc4de,	// (0x000b0143) smil2_volume_content_pane_g1

0xc4e7,	// (0x000b014c) smil2_volume_content_pane_g2

0xc4f0,	// (0x000b0155) smil2_volume_content_pane_g3

0xc4f9,	// (0x000b015e) smil2_volume_content_pane_g4

0xc502,	// (0x000b0167) smil2_volume_content_pane_g5

0xc50b,	// (0x000b0170) smil2_volume_content_pane_g6

0xc514,	// (0x000b0179) smil2_volume_content_pane_g7

0xc51d,	// (0x000b0182) smil2_volume_content_pane_g8

0xc526,	// (0x000b018b) smil2_volume_content_pane_g9

0xc52f,	// (0x000b0194) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x000b3359) smil2_volume_content_pane_g

0x0ee3,	// (0x000a4b48) cale_week_day_heading_pane_t1_ParamLimits

0x0f0d,	// (0x000a4b72) cale_week_day_heading_pane_t2_ParamLimits

0x0f3c,	// (0x000a4ba1) cale_week_day_heading_pane_t3_ParamLimits

0x0f6b,	// (0x000a4bd0) cale_week_day_heading_pane_t4_ParamLimits

0x0f9a,	// (0x000a4bff) cale_week_day_heading_pane_t5_ParamLimits

0x0fd1,	// (0x000a4c36) cale_week_day_heading_pane_t6_ParamLimits

0x1008,	// (0x000a4c6d) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000b2e36) cale_week_day_heading_pane_t_ParamLimits

0xa104,	// (0x000add69) bg_cale_side_pane_ParamLimits

0x1032,	// (0x000a4c97) cale_week_time_pane_t1_ParamLimits

0x104c,	// (0x000a4cb1) cale_week_time_pane_t2_ParamLimits

0x1066,	// (0x000a4ccb) cale_week_time_pane_t3_ParamLimits

0x1080,	// (0x000a4ce5) cale_week_time_pane_t4_ParamLimits

0x109a,	// (0x000a4cff) cale_week_time_pane_t5_ParamLimits

0x10b4,	// (0x000a4d19) cale_week_time_pane_t6_ParamLimits

0x10ce,	// (0x000a4d33) cale_week_time_pane_t7_ParamLimits

0x10e8,	// (0x000a4d4d) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x000b2e45) cale_week_time_pane_t_ParamLimits

0x1108,	// (0x000a4d6d) cell_cale_week_pane_g2_ParamLimits

0xa104,	// (0x000add69) bg_cale_side_pane_cp01_ParamLimits

0x215c,	// (0x000a5dc1) cale_month_week_pane_t1_ParamLimits

0x2175,	// (0x000a5dda) cale_month_week_pane_t2_ParamLimits

0x218e,	// (0x000a5df3) cale_month_week_pane_t3_ParamLimits

0x21a7,	// (0x000a5e0c) cale_month_week_pane_t4_ParamLimits

0x21c0,	// (0x000a5e25) cale_month_week_pane_t5_ParamLimits

0x21d9,	// (0x000a5e3e) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000b2f1a) cale_month_week_pane_t_ParamLimits

0x98f8,	// (0x000ad55d) cell_cale_month_pane_g1_ParamLimits

0x9487,	// (0x000ad0ec) main_cale_event_viewer_pane

0xe1c3,	// (0x000b1e28) listscroll_cale_event_viewer_pane

0xc538,	// (0x000b019d) list_cale_ev_pane

0xc540,	// (0x000b01a5) scroll_pane_cp023

0xc54c,	// (0x000b01b1) field_cale_ev_pane_ParamLimits

0xc54c,	// (0x000b01b1) field_cale_ev_pane

0xc56a,	// (0x000b01cf) field_cale_ev_content_pane_ParamLimits

0xc56a,	// (0x000b01cf) field_cale_ev_content_pane

0xc576,	// (0x000b01db) field_cale_ev_pane_g1_ParamLimits

0xc576,	// (0x000b01db) field_cale_ev_pane_g1

0xc582,	// (0x000b01e7) field_cale_ev_pane_g2_ParamLimits

0xc582,	// (0x000b01e7) field_cale_ev_pane_g2

0xc59a,	// (0x000b01ff) field_cale_ev_pane_g3_ParamLimits

0xc59a,	// (0x000b01ff) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x000b336e) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x000b336e) field_cale_ev_pane_g

0xc5b2,	// (0x000b0217) field_cale_ev_pane_t1_ParamLimits

0xc5b2,	// (0x000b0217) field_cale_ev_pane_t1

0xb5b3,	// (0x000af218) field_cale_ev_content_pane_t1_ParamLimits

0xb5b3,	// (0x000af218) field_cale_ev_content_pane_t1

0xacfd,	// (0x000ae962) bg_button_pane_cp01

0x0c10,	// (0x000a4875) listscroll_cale_week_pane_ParamLimits

0xa0af,	// (0x000add14) popup_toolbar_window_cp01

0xa0d5,	// (0x000add3a) listscroll_cale_week_pane_t1_ParamLimits

0x0c10,	// (0x000a4875) listscroll_cale_day_pane_ParamLimits

0xa0af,	// (0x000add14) popup_toolbar_window_cp02

0xa4f7,	// (0x000ae15c) listscroll_cale_day_pane_t1_ParamLimits

0x363b,	// (0x000a72a0) main_cale_month_pane_ParamLimits

0x9a1c,	// (0x000ad681) popup_toolbar_window_cp03_ParamLimits

0x9a1c,	// (0x000ad681) popup_toolbar_window_cp03

0x2f3b,	// (0x000a6ba0) main_image_pane_g2_ParamLimits

0x2f3b,	// (0x000a6ba0) main_image_pane_g2

0x2f4c,	// (0x000a6bb1) main_image_pane_g3_ParamLimits

0x2f4c,	// (0x000a6bb1) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000b314c) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000b314c) main_image_pane_g

0xae17,	// (0x000aea7c) main_image_pane_t1_ParamLimits

0x2f5d,	// (0x000a6bc2) main_image_pane_t2_ParamLimits

0x2f5d,	// (0x000a6bc2) main_image_pane_t2

0x2f6f,	// (0x000a6bd4) main_image_pane_t3_ParamLimits

0x2f6f,	// (0x000a6bd4) main_image_pane_t3

0x2f97,	// (0x000a6bfc) main_image_pane_t4_ParamLimits

0x2f97,	// (0x000a6bfc) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000b3153) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000b3153) main_image_pane_t

0x2fb7,	// (0x000a6c1c) popup_image_details_window_cp01

0x2fc1,	// (0x000a6c26) popup_toobar_trans_pane_cp01_ParamLimits

0x2fc1,	// (0x000a6c26) popup_toobar_trans_pane_cp01

0x3746,	// (0x000a73ab) popup_image_details_window_ParamLimits

0x3746,	// (0x000a73ab) popup_image_details_window

0x99ef,	// (0x000ad654) popup_image_focus_window

0x3b65,	// (0x000a77ca) camera2_autofocus_pane_ParamLimits

0x3b65,	// (0x000a77ca) camera2_autofocus_pane

0xe1c3,	// (0x000b1e28) bg_popup_sub_pane_cp06

0xc5c9,	// (0x000b022e) popup_image_focus_window_g1

0xc5d1,	// (0x000b0236) popup_image_focus_window_g2

0xc5d9,	// (0x000b023e) popup_image_focus_window_g3

0xc5e1,	// (0x000b0246) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x000b3375) popup_image_focus_window_g

0xc5e9,	// (0x000b024e) popup_image_focus_window_t1

0xc5f7,	// (0x000b025c) popup_image_focus_window_t2

0xc607,	// (0x000b026c) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x000b337e) popup_image_focus_window_t

0xc615,	// (0x000b027a) camera2_autofocus_pane_g1

0xe200,	// (0x000b1e65) bg_tb_trans_pane_cp01

0xc623,	// (0x000b0288) popup_image_details_window_g1

0xc636,	// (0x000b029b) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x000b3390) popup_image_details_window_g

0xc65f,	// (0x000b02c4) popup_image_details_window_t1

0xc671,	// (0x000b02d6) popup_image_details_window_t2

0xc68a,	// (0x000b02ef) popup_image_details_window_t3

0xc69e,	// (0x000b0303) popup_image_details_window_t4

0xc6b9,	// (0x000b031e) popup_image_details_window_t5

0x0004,

0xf732,	// (0x000b3397) popup_image_details_window_t

0x9f74,	// (0x000adbd9) bg_calc_paper_pane_ParamLimits

0x9487,	// (0x000ad0ec) grid_highlight_pane_cp013

0x985e,	// (0x000ad4c3) list_calc_pane_ParamLimits

0x9870,	// (0x000ad4d5) scroll_pane_cp024

0x9f88,	// (0x000adbed) bg_calc_display_pane_ParamLimits

0x0a82,	// (0x000a46e7) calc_display_pane_t1_ParamLimits

0x0a94,	// (0x000a46f9) calc_display_pane_t2_ParamLimits

0x9878,	// (0x000ad4dd) calc_display_pane_t3_ParamLimits

0xf151,	// (0x000b2db6) calc_display_pane_t_ParamLimits

0x0b54,	// (0x000a47b9) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x000b2dd3) cell_calc_pane_g

0x0b5d,	// (0x000a47c2) cell_calc_pane_t1

0x9fe7,	// (0x000adc4c) grid_highlight_pane_cp02_ParamLimits

0x9ffd,	// (0x000adc62) toolbar_button_pane_cp01_ParamLimits

0x9ffd,	// (0x000adc62) toolbar_button_pane_cp01

0xae5c,	// (0x000aeac1) temp_image_control_pane_ParamLimits

0xae5c,	// (0x000aeac1) temp_image_control_pane

0x9479,	// (0x000ad0de) main_mp3_pane

0xc6d3,	// (0x000b0338) temp_image_control_pane_g1_ParamLimits

0xc6d3,	// (0x000b0338) temp_image_control_pane_g1

0xc6e1,	// (0x000b0346) temp_image_control_pane_g2_ParamLimits

0xc6e1,	// (0x000b0346) temp_image_control_pane_g2

0xc6f3,	// (0x000b0358) temp_image_control_pane_g3_ParamLimits

0xc6f3,	// (0x000b0358) temp_image_control_pane_g3

0x43ba,	// (0x000a801f) temp_image_control_pane_g4_ParamLimits

0x43ba,	// (0x000a801f) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x000b33a2) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x000b33a2) temp_image_control_pane_g

0xc6d3,	// (0x000b0338) main_mp3_pane_g1

0x43cd,	// (0x000a8032) main_mp3_pane_g2

0x0007,

0xf746,	// (0x000b33ab) main_mp3_pane_g

0xc736,	// (0x000b039b) main_mp3_pane_t1

0xa167,	// (0x000addcc) main_camera_pane_g8_ParamLimits

0xa167,	// (0x000addcc) main_camera_pane_g8

0x140c,	// (0x000a5071) main_video_pane_g7_ParamLimits

0x140c,	// (0x000a5071) main_video_pane_g7

0x9a71,	// (0x000ad6d6) main_camera2_pane_t7_ParamLimits

0x9a71,	// (0x000ad6d6) main_camera2_pane_t7

0xa2af,	// (0x000adf14) scroll_pane_cp025_ParamLimits

0xa2af,	// (0x000adf14) scroll_pane_cp025

0xa2c3,	// (0x000adf28) scroll_pane_cp026_ParamLimits

0xa2c3,	// (0x000adf28) scroll_pane_cp026

0xa2d2,	// (0x000adf37) wml_content_pane_ParamLimits

0x9487,	// (0x000ad0ec) main_touch_calib_pane

0x44a1,	// (0x000a8106) main_touch_calib_pane_g1

0x44b3,	// (0x000a8118) main_touch_calib_pane_g2

0x44c5,	// (0x000a812a) main_touch_calib_pane_g3

0x44d7,	// (0x000a813c) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x000b33c9) main_touch_calib_pane_g

0x44e9,	// (0x000a814e) main_touch_calib_pane_t1

0x4503,	// (0x000a8168) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x000b33d2) main_touch_calib_pane_t

0xaa29,	// (0x000ae68e) mup_progress_pane_cp02

0xaa6c,	// (0x000ae6d1) navi_pane_g1

0xab27,	// (0x000ae78c) navi_pane_mp_t3

0x9479,	// (0x000ad0de) main_mp3_pane_ParamLimits

0x38d1,	// (0x000a7536) navi_pane_ParamLimits

0xc6d3,	// (0x000b0338) main_mp3_pane_g1_ParamLimits

0x43cd,	// (0x000a8032) main_mp3_pane_g2_ParamLimits

0x43db,	// (0x000a8040) main_mp3_pane_g3_ParamLimits

0x43db,	// (0x000a8040) main_mp3_pane_g3

0x43e9,	// (0x000a804e) main_mp3_pane_g4_ParamLimits

0x43e9,	// (0x000a804e) main_mp3_pane_g4

0xc703,	// (0x000b0368) main_mp3_pane_g5_ParamLimits

0xc703,	// (0x000b0368) main_mp3_pane_g5

0xc711,	// (0x000b0376) main_mp3_pane_g6_ParamLimits

0xc711,	// (0x000b0376) main_mp3_pane_g6

0xc71e,	// (0x000b0383) main_mp3_pane_g7_ParamLimits

0xc71e,	// (0x000b0383) main_mp3_pane_g7

0xc72a,	// (0x000b038f) main_mp3_pane_g8_ParamLimits

0xc72a,	// (0x000b038f) main_mp3_pane_g8

0xf746,	// (0x000b33ab) main_mp3_pane_g_ParamLimits

0x43f5,	// (0x000a805a) main_mp3_pane_t2

0x4403,	// (0x000a8068) main_mp3_pane_t3

0xc744,	// (0x000b03a9) main_mp3_pane_t4

0xc752,	// (0x000b03b7) main_mp3_pane_t5

0x0005,

0xf757,	// (0x000b33bc) main_mp3_pane_t

0xc760,	// (0x000b03c5) mup_progress_pane_cp01

0x050d,	// (0x000a4172) aid_zoom_text_secondary2

0xc538,	// (0x000b019d) list_cale_ev2_pane

0xc540,	// (0x000b01a5) scroll_pane_cp023_ParamLimits

0x4559,	// (0x000a81be) field_cale_ev2_pane_ParamLimits

0x4559,	// (0x000a81be) field_cale_ev2_pane

0xc768,	// (0x000b03cd) field_cale_ev2_pane_g1_ParamLimits

0xc768,	// (0x000b03cd) field_cale_ev2_pane_g1

0xc774,	// (0x000b03d9) field_cale_ev2_pane_g2_ParamLimits

0xc774,	// (0x000b03d9) field_cale_ev2_pane_g2

0xc78c,	// (0x000b03f1) field_cale_ev2_pane_g3_ParamLimits

0xc78c,	// (0x000b03f1) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x000b33dd) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x000b33dd) field_cale_ev2_pane_g

0xc7b0,	// (0x000b0415) field_cale_ev2_pane_t1_ParamLimits

0xc7b0,	// (0x000b0415) field_cale_ev2_pane_t1

0xc7c7,	// (0x000b042c) field_cale_ev2_pane_t2_ParamLimits

0xc7c7,	// (0x000b042c) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x000b33e6) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x000b33e6) field_cale_ev2_pane_t

0x2def,	// (0x000a6a54) main_postcard_pane_g5_ParamLimits

0x2def,	// (0x000a6a54) main_postcard_pane_g5

0x2e05,	// (0x000a6a6a) main_postcard_pane_g6_ParamLimits

0x2e05,	// (0x000a6a6a) main_postcard_pane_g6

0x11d2,	// (0x000a4e37) camera2_autofocus_pane_cp_ParamLimits

0x11d2,	// (0x000a4e37) camera2_autofocus_pane_cp

0x9479,	// (0x000ad0de) main_mup3_pane

0x459a,	// (0x000a81ff) main_mup3_pane_g1_ParamLimits

0x459a,	// (0x000a81ff) main_mup3_pane_g1

0x45bc,	// (0x000a8221) main_mup3_pane_g2_ParamLimits

0x45bc,	// (0x000a8221) main_mup3_pane_g2

0x463c,	// (0x000a82a1) main_mup3_pane_g3_ParamLimits

0x463c,	// (0x000a82a1) main_mup3_pane_g3

0x4682,	// (0x000a82e7) main_mup3_pane_g4_ParamLimits

0x4682,	// (0x000a82e7) main_mup3_pane_g4

0x46c8,	// (0x000a832d) main_mup3_pane_g5_ParamLimits

0x46c8,	// (0x000a832d) main_mup3_pane_g5

0x470e,	// (0x000a8373) main_mup3_pane_g6_ParamLimits

0x470e,	// (0x000a8373) main_mup3_pane_g6

0xc7dc,	// (0x000b0441) main_mup3_pane_g7_ParamLimits

0xc7dc,	// (0x000b0441) main_mup3_pane_g7

0x0007,

0xf791,	// (0x000b33f6) main_mup3_pane_g_ParamLimits

0xf791,	// (0x000b33f6) main_mup3_pane_g

0x478c,	// (0x000a83f1) main_mup3_pane_t1_ParamLimits

0x478c,	// (0x000a83f1) main_mup3_pane_t1

0x4800,	// (0x000a8465) main_mup3_pane_t2_ParamLimits

0x4800,	// (0x000a8465) main_mup3_pane_t2

0x48d4,	// (0x000a8539) main_mup3_pane_t4_ParamLimits

0x48d4,	// (0x000a8539) main_mup3_pane_t4

0x492a,	// (0x000a858f) main_mup3_pane_t5_ParamLimits

0x492a,	// (0x000a858f) main_mup3_pane_t5

0x49e6,	// (0x000a864b) main_mup3_pane_t6_ParamLimits

0x49e6,	// (0x000a864b) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x000b3407) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x000b3407) main_mup3_pane_t

0x4a9e,	// (0x000a8703) mup3_progress_pane_ParamLimits

0x4a9e,	// (0x000a8703) mup3_progress_pane

0x4b2a,	// (0x000a878f) popup_mup3_control_window_ParamLimits

0x4b2a,	// (0x000a878f) popup_mup3_control_window

0xc7ea,	// (0x000b044f) popup_mup3_text_window

0x4b5c,	// (0x000a87c1) mup3_progress_pane_t1

0x4b7b,	// (0x000a87e0) mup3_progress_pane_t2

0xc7f2,	// (0x000b0457) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x000b3414) mup3_progress_pane_t

0xc80f,	// (0x000b0474) mup_progress_pane_cp03

0xe1c3,	// (0x000b1e28) bg_tb_trans_pane_cp04

0x4b9a,	// (0x000a87ff) mup3_volume_pane

0x4ba2,	// (0x000a8807) popup_mup3_control_window_g1

0x4bab,	// (0x000a8810) mup3_volume_pane_g1

0x4bb4,	// (0x000a8819) mup3_volume_pane_g2

0x4bbd,	// (0x000a8822) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x000b341b) mup3_volume_pane_g

0xe1c3,	// (0x000b1e28) bg_tb_trans_pane_cp03

0xc81f,	// (0x000b0484) popup_mup3_text_window_g1

0xc827,	// (0x000b048c) popup_mup3_text_window_t1

0x9fd0,	// (0x000adc35) list_calc_item_pane_g1_ParamLimits

0xc208,	// (0x000afe6d) mup_volume_pane_cp_g1

0x451d,	// (0x000a8182) main_touch_calib_pane_t3

0x4531,	// (0x000a8196) main_touch_calib_pane_t4

0x4545,	// (0x000a81aa) main_touch_calib_pane_t5

0x04b9,	// (0x000a411e) aid_cell_size_toolbar2

0x04c1,	// (0x000a4126) aid_popup3_width_pane

0x04fd,	// (0x000a4162) aid_zoom_text_msg_primary

0x11b1,	// (0x000a4e16) vorec_t7

0x9f94,	// (0x000adbf9) bg_calc_paper_pane_g1_ParamLimits

0x9fa0,	// (0x000adc05) bg_calc_paper_pane_g2_ParamLimits

0x9fac,	// (0x000adc11) bg_calc_paper_pane_g3_ParamLimits

0x9fb8,	// (0x000adc1d) bg_calc_paper_pane_g4_ParamLimits

0x9fc4,	// (0x000adc29) bg_calc_paper_pane_g5_ParamLimits

0x0add,	// (0x000a4742) bg_calc_paper_pane_g6_ParamLimits

0x0aec,	// (0x000a4751) bg_calc_paper_pane_g7_ParamLimits

0x0afb,	// (0x000a4760) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x000b2dbd) bg_calc_paper_pane_g_ParamLimits

0x0b0e,	// (0x000a4773) calc_bg_paper_pane_g9_ParamLimits

0x131e,	// (0x000a4f83) image_qvga_pane_ParamLimits

0x131e,	// (0x000a4f83) image_qvga_pane

0x97a7,	// (0x000ad40c) bg_popup_sub_pane_cp04_ParamLimits

0xad93,	// (0x000ae9f8) popup_mup_playback_window_g1_ParamLimits

0xad9f,	// (0x000aea04) popup_mup_playback_window_t1_ParamLimits

0xadb4,	// (0x000aea19) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000b3147) popup_mup_playback_window_t_ParamLimits

0x405c,	// (0x000a7cc1) main_mup2_pane_g3_ParamLimits

0x405c,	// (0x000a7cc1) main_mup2_pane_g3

0x1714,	// (0x000a5379) popup_toolbar_window_cp04

0xb1a9,	// (0x000aee0e) popup_call2_audio_second_window_g3_ParamLimits

0xb1a9,	// (0x000aee0e) popup_call2_audio_second_window_g3

0xb678,	// (0x000af2dd) popup_call2_audio_first_window_g4_ParamLimits

0xb678,	// (0x000af2dd) popup_call2_audio_first_window_g4

0xbcf7,	// (0x000af95c) popup_call2_audio_in_window_g4_ParamLimits

0xbcf7,	// (0x000af95c) popup_call2_audio_in_window_g4

0x2f1d,	// (0x000a6b82) aid_area_sk_bg_cut_ParamLimits

0x2f1d,	// (0x000a6b82) aid_area_sk_bg_cut

0xadc9,	// (0x000aea2e) aid_area_sk_bg_cut_2_ParamLimits

0xadc9,	// (0x000aea2e) aid_area_sk_bg_cut_2

0x4360,	// (0x000a7fc5) aid_placing_details_win

0x4368,	// (0x000a7fcd) aid_placing_details_win_2

0xc615,	// (0x000b027a) camera2_autofocus_pane_g1_ParamLimits

0x06cf,	// (0x000a4334) popup_fixed_preview_cale_window_ParamLimits

0x06cf,	// (0x000a4334) popup_fixed_preview_cale_window

0xaba5,	// (0x000ae80a) navi_slider_pane_g3

0xabae,	// (0x000ae813) navi_slider_pane_g4

0xabb7,	// (0x000ae81c) navi_slider_pane_g5

0xaba5,	// (0x000ae80a) navi_slider_pane_g6

0x999e,	// (0x000ad603) navi_slider_pane_g7

0xacca,	// (0x000ae92f) mup_scale_pane_g3

0xacd3,	// (0x000ae938) mup_scale_pane_g4

0xacdc,	// (0x000ae941) mup_scale_pane_g5

0x2c4b,	// (0x000a68b0) mup_scale_pane_g6

0x2c54,	// (0x000a68b9) mup_scale_pane_g7

0xaba5,	// (0x000ae80a) cams2_slider_pane_g3

0xc28a,	// (0x000afeef) cams2_slider_pane_g4

0x9ad7,	// (0x000ad73c) cams2_slider_pane_g5

0xaba5,	// (0x000ae80a) cams2_slider_pane_g6

0x9adf,	// (0x000ad744) cams2_slider_pane_g7

0xc4b5,	// (0x000b011a) camera2_autofocus_pane_cp_g1

0xc098,	// (0x000afcfd) bg_popup_preview_window_pane_cp02_ParamLimits

0xc098,	// (0x000afcfd) bg_popup_preview_window_pane_cp02

0xc835,	// (0x000b049a) list_fp_cale_pane_ParamLimits

0xc835,	// (0x000b049a) list_fp_cale_pane

0xc841,	// (0x000b04a6) popup_fixed_preview_cale_window_t1_ParamLimits

0xc841,	// (0x000b04a6) popup_fixed_preview_cale_window_t1

0x4bc6,	// (0x000a882b) popup_fixed_preview_cale_window_t2_ParamLimits

0x4bc6,	// (0x000a882b) popup_fixed_preview_cale_window_t2

0x4bdb,	// (0x000a8840) popup_fixed_preview_cale_window_t3_ParamLimits

0x4bdb,	// (0x000a8840) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x000b3422) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x000b3422) popup_fixed_preview_cale_window_t

0x4bf0,	// (0x000a8855) list_single_fp_cale_pane_ParamLimits

0x4bf0,	// (0x000a8855) list_single_fp_cale_pane

0xc85f,	// (0x000b04c4) list_single_fp_cale_pane_g1_ParamLimits

0xc85f,	// (0x000b04c4) list_single_fp_cale_pane_g1

0xc86b,	// (0x000b04d0) list_single_fp_cale_pane_g2_ParamLimits

0xc86b,	// (0x000b04d0) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x000b3429) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x000b3429) list_single_fp_cale_pane_g

0xc884,	// (0x000b04e9) list_single_fp_cale_pane_t1_ParamLimits

0xc884,	// (0x000b04e9) list_single_fp_cale_pane_t1

0xc896,	// (0x000b04fb) list_single_fp_cale_pane_t2_ParamLimits

0xc896,	// (0x000b04fb) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x000b3430) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x000b3430) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9487,	// (0x000ad0ec) main_dialer_pane

0x4c06,	// (0x000a886b) aid_cell_size_keypad

0x4c10,	// (0x000a8875) dialer_ne_pane

0x4c18,	// (0x000a887d) grid_dialer_command_1_pane

0x4c20,	// (0x000a8885) grid_dialer_command_2_pane

0x4c28,	// (0x000a888d) grid_dialer_keypad_pane

0x4c3a,	// (0x000a889f) bg_popup_call_pane_cp06_ParamLimits

0x4c3a,	// (0x000a889f) bg_popup_call_pane_cp06

0x4c46,	// (0x000a88ab) dialer_ne_clear_pane_ParamLimits

0x4c46,	// (0x000a88ab) dialer_ne_clear_pane

0xc8c9,	// (0x000b052e) dialer_ne_pane_g1

0xc8d1,	// (0x000b0536) dialer_ne_pane_t1_ParamLimits

0xc8d1,	// (0x000b0536) dialer_ne_pane_t1

0x4c52,	// (0x000a88b7) dialer_ne_pane_t2_ParamLimits

0x4c52,	// (0x000a88b7) dialer_ne_pane_t2

0x4c7c,	// (0x000a88e1) dialer_ne_pane_t3_ParamLimits

0x4c7c,	// (0x000a88e1) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x000b3435) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x000b3435) dialer_ne_pane_t

0x4cac,	// (0x000a8911) dialer_ne_pane_t3_copy1_ParamLimits

0x4cac,	// (0x000a8911) dialer_ne_pane_t3_copy1

0x4cdb,	// (0x000a8940) cell_dialer_keypad_pane_ParamLimits

0x4cdb,	// (0x000a8940) cell_dialer_keypad_pane

0x4cf2,	// (0x000a8957) cell_dialer_command_1_pane_ParamLimits

0x4cf2,	// (0x000a8957) cell_dialer_command_1_pane

0x4d08,	// (0x000a896d) cell_dialer_command_2_pane_ParamLimits

0x4d08,	// (0x000a896d) cell_dialer_command_2_pane

0xc8e3,	// (0x000b0548) bg_button_pane_cp02_ParamLimits

0xc8e3,	// (0x000b0548) bg_button_pane_cp02

0x4d17,	// (0x000a897c) cell_dialer_keypad_pane_g1_ParamLimits

0x4d17,	// (0x000a897c) cell_dialer_keypad_pane_g1

0xc8e3,	// (0x000b0548) bg_button_pane_cp03_ParamLimits

0xc8e3,	// (0x000b0548) bg_button_pane_cp03

0x4d2b,	// (0x000a8990) cell_dialer_command_1_pane_g1_ParamLimits

0x4d2b,	// (0x000a8990) cell_dialer_command_1_pane_g1

0xc8ef,	// (0x000b0554) bg_button_pane_cp04

0x4d3f,	// (0x000a89a4) cell_dialer_command_2_pane_g1

0xa15f,	// (0x000addc4) bg_button_pane_cp06

0xc8f7,	// (0x000b055c) dialer_ne_clear_pane_g1

0xaa78,	// (0x000ae6dd) navi_pane_g2

0xaaa6,	// (0x000ae70b) navi_pane_g3

0x0002,

0xf3e5,	// (0x000b304a) navi_pane_g

0xab35,	// (0x000ae79a) navi_pane_mv_g2

0xab5c,	// (0x000ae7c1) navi_pane_mv_g5

0x2819,	// (0x000a647e) navi_pane_mv_t1

0x9f88,	// (0x000adbed) main_clock2_pane

0x4d8d,	// (0x000a89f2) main_clock2_list_pane_ParamLimits

0x4d8d,	// (0x000a89f2) main_clock2_list_pane

0x4dc7,	// (0x000a8a2c) main_clock2_pane_t1_ParamLimits

0x4dc7,	// (0x000a8a2c) main_clock2_pane_t1

0x4e05,	// (0x000a8a6a) main_clock2_pane_t2_ParamLimits

0x4e05,	// (0x000a8a6a) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x000b3441) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x000b3441) main_clock2_pane_t

0x4ea3,	// (0x000a8b08) popup_clock_analogue_window_cp03_ParamLimits

0x4ea3,	// (0x000a8b08) popup_clock_analogue_window_cp03

0x4ec8,	// (0x000a8b2d) popup_clock_digital_window_cp02_ParamLimits

0x4ec8,	// (0x000a8b2d) popup_clock_digital_window_cp02

0x4f39,	// (0x000a8b9e) main_clock2_list_single_pane_ParamLimits

0x4f39,	// (0x000a8b9e) main_clock2_list_single_pane

0xa15f,	// (0x000addc4) list_highlight_pane_cp05

0xc931,	// (0x000b0596) main_clock2_list_single_pane_t1

0x1714,	// (0x000a5379) popup_toolbar_window_cp04_ParamLimits

0x438a,	// (0x000a7fef) camera2_autofocus_pane_g2_ParamLimits

0x438a,	// (0x000a7fef) camera2_autofocus_pane_g2

0x4396,	// (0x000a7ffb) camera2_autofocus_pane_g3_ParamLimits

0x4396,	// (0x000a7ffb) camera2_autofocus_pane_g3

0x43a2,	// (0x000a8007) camera2_autofocus_pane_g4_ParamLimits

0x43a2,	// (0x000a8007) camera2_autofocus_pane_g4

0x43ae,	// (0x000a8013) camera2_autofocus_pane_g5_ParamLimits

0x43ae,	// (0x000a8013) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x000b3385) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x000b3385) camera2_autofocus_pane_g

0x457a,	// (0x000a81df) camera2_autofocus_pane_cp_g2

0x4582,	// (0x000a81e7) camera2_autofocus_pane_cp_g3

0x458a,	// (0x000a81ef) camera2_autofocus_pane_cp_g4

0x4592,	// (0x000a81f7) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x000b33eb) camera2_autofocus_pane_cp_g

0x4c32,	// (0x000a8897) popup_dialer_spcha_window

0xe1c3,	// (0x000b1e28) bg_popup_sub_pane_cp07

0xc93f,	// (0x000b05a4) list_spcha_pane

0xc947,	// (0x000b05ac) list_single_spcha_pane_ParamLimits

0xc947,	// (0x000b05ac) list_single_spcha_pane

0xe1c3,	// (0x000b1e28) list_highlight_pane_cp06

0xc958,	// (0x000b05bd) list_single_spcha_pane_t1

0xbaa1,	// (0x000af706) popup_call2_audio_out_window_g4_ParamLimits

0xbaa1,	// (0x000af706) popup_call2_audio_out_window_g4

0x9487,	// (0x000ad0ec) main_imed2_pane

0x99f7,	// (0x000ad65c) popup_imed_adjust2_window

0x375e,	// (0x000a73c3) popup_imed_trans_window_ParamLimits

0x375e,	// (0x000a73c3) popup_imed_trans_window

0xc2f3,	// (0x000aff58) popup_blid_sat_info2_window_t1

0xc301,	// (0x000aff66) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x000b331a) popup_blid_sat_info2_window_t

0x4fe2,	// (0x000a8c47) aid_size_cell_colour_35

0x5002,	// (0x000a8c67) aid_size_cell_colour_112

0x5022,	// (0x000a8c87) aid_size_cell_effect

0xc0a4,	// (0x000afd09) bg_tb_trans_pane_cp02

0xa600,	// (0x000ae265) heading_imed_pane

0x5042,	// (0x000a8ca7) listscroll_imed_pane

0xc966,	// (0x000b05cb) heading_imed_pane_g1

0xc96e,	// (0x000b05d3) heading_imed_pane_t1

0xc97c,	// (0x000b05e1) grid_imed_colour_35_pane_ParamLimits

0xc97c,	// (0x000b05e1) grid_imed_colour_35_pane

0x504e,	// (0x000a8cb3) grid_imed_effect_pane

0xc994,	// (0x000b05f9) list_imed_aspect_pane

0x5064,	// (0x000a8cc9) scroll_pane_cp027_ParamLimits

0x5064,	// (0x000a8cc9) scroll_pane_cp027

0x5075,	// (0x000a8cda) cell_imed_effect_pane_ParamLimits

0x5075,	// (0x000a8cda) cell_imed_effect_pane

0xc99c,	// (0x000b0601) cell_imed_colour_pane_ParamLimits

0xc99c,	// (0x000b0601) cell_imed_colour_pane

0xc9de,	// (0x000b0643) cell_imed_colour_pane_g1_ParamLimits

0xc9de,	// (0x000b0643) cell_imed_colour_pane_g1

0xc9ef,	// (0x000b0654) hgihlgiht_grid_pane_cp016_ParamLimits

0xc9ef,	// (0x000b0654) hgihlgiht_grid_pane_cp016

0x509c,	// (0x000a8d01) cell_imed_effect_pane_g1

0x50a4,	// (0x000a8d09) grid_highlight_pane_cp017

0xca00,	// (0x000b0665) list_imed_single_pane_ParamLimits

0xca00,	// (0x000b0665) list_imed_single_pane

0xe1c3,	// (0x000b1e28) list_highlight_pane_cp07

0xca15,	// (0x000b067a) list_imed_aspect_pane_comp1_t1

0xc0a4,	// (0x000afd09) bg_tb_trans_pane_cp05

0xca37,	// (0x000b069c) popup_imed_adjust2_window_g1

0xca5e,	// (0x000b06c3) popup_imed_adjust2_window_t1

0xca76,	// (0x000b06db) slider_imed_adjust_pane

0xca8a,	// (0x000b06ef) slider_imed_adjust_pane_g1

0xca9a,	// (0x000b06ff) slider_imed_adjust_pane_g2

0xcaaa,	// (0x000b070f) slider_imed_adjust_pane_g3

0xcabb,	// (0x000b0720) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x000b345e) slider_imed_adjust_pane_g

0x50ad,	// (0x000a8d12) aid_size_cell_clipart2

0x50b9,	// (0x000a8d1e) grid_imed_clipart_pane

0xcacc,	// (0x000b0731) scroll_pane_cp031

0x50c3,	// (0x000a8d28) cell_imed_clipart_pane_ParamLimits

0x50c3,	// (0x000a8d28) cell_imed_clipart_pane

0x50e5,	// (0x000a8d4a) cell_imed_clipart_pane_g1

0xe1c3,	// (0x000b1e28) grid_highlight_pane_cp014

0x4da2,	// (0x000a8a07) main_clock2_pane_g1_ParamLimits

0x4da2,	// (0x000a8a07) main_clock2_pane_g1

0x4ee4,	// (0x000a8b49) aid_call2_pane_cp10

0x4ef6,	// (0x000a8b5b) aid_call_pane_cp10

0xa9c9,	// (0x000ae62e) popup_clock_analogue_window_cp10_g1

0xa9c9,	// (0x000ae62e) popup_clock_analogue_window_cp10_g2

0x4f08,	// (0x000a8b6d) popup_clock_analogue_window_cp10_g3

0x4f08,	// (0x000a8b6d) popup_clock_analogue_window_cp10_g4

0xa9c9,	// (0x000ae62e) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x000b344c) popup_clock_analogue_window_cp10_g

0x4f1a,	// (0x000a8b7f) popup_clock_analogue_window_cp10_t1

0x4f4b,	// (0x000a8bb0) clock_digital_number_pane_cp10_ParamLimits

0x4f4b,	// (0x000a8bb0) clock_digital_number_pane_cp10

0x4f63,	// (0x000a8bc8) clock_digital_number_pane_cp11_ParamLimits

0x4f63,	// (0x000a8bc8) clock_digital_number_pane_cp11

0x4f7b,	// (0x000a8be0) clock_digital_number_pane_cp12_ParamLimits

0x4f7b,	// (0x000a8be0) clock_digital_number_pane_cp12

0x4f93,	// (0x000a8bf8) clock_digital_number_pane_cp13_ParamLimits

0x4f93,	// (0x000a8bf8) clock_digital_number_pane_cp13

0x4fab,	// (0x000a8c10) clock_digital_separator_pane_cp10_ParamLimits

0x4fab,	// (0x000a8c10) clock_digital_separator_pane_cp10

0x4fc3,	// (0x000a8c28) popup_clock_digital_window_cp02_t1_ParamLimits

0x4fc3,	// (0x000a8c28) popup_clock_digital_window_cp02_t1

0x979f,	// (0x000ad404) clock_digital_number_pane_cp10_g1

0x979f,	// (0x000ad404) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x000b3467) clock_digital_number_pane_cp10_g

0x979f,	// (0x000ad404) clock_digital_separator_pane_cp10_g1

0x979f,	// (0x000ad404) clock_digital_separator_pane_g2_cp10

0xab64,	// (0x000ae7c9) navi_pane_vded_g4

0xab6d,	// (0x000ae7d2) navi_pane_vded_g5

0xab76,	// (0x000ae7db) navi_pane_vded_t1

0x9487,	// (0x000ad0ec) main_vded_pane

0x50ee,	// (0x000a8d53) main_vded_pane_g1

0x50f8,	// (0x000a8d5d) main_vded_pane_g2

0x5102,	// (0x000a8d67) main_vded_pane_g3

0x0002,

0xf807,	// (0x000b346c) main_vded_pane_g

0x510c,	// (0x000a8d71) main_vded_pane_t1

0x511a,	// (0x000a8d7f) main_vded_pane_t2

0x0001,

0xf80e,	// (0x000b3473) main_vded_pane_t

0x5128,	// (0x000a8d8d) vded_slider_pane

0x5130,	// (0x000a8d95) vded_video_pane

0xcad4,	// (0x000b0739) vded_video_pane_g1

0x5138,	// (0x000a8d9d) vded_video_pane_g2

0xc4b5,	// (0x000b011a) vded_video_pane_g3

0x0002,

0xf813,	// (0x000b3478) vded_video_pane_g

0xcade,	// (0x000b0743) vded_slider_pane_g1

0xc208,	// (0x000afe6d) vded_slider_pane_g2

0xcae7,	// (0x000b074c) vded_slider_pane_g3

0xcaf0,	// (0x000b0755) vded_slider_pane_g4

0xcaf9,	// (0x000b075e) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x000b347f) vded_slider_pane_g

0x4b12,	// (0x000a8777) mup3_rocker_pane_ParamLimits

0x4b12,	// (0x000a8777) mup3_rocker_pane

0x5141,	// (0x000a8da6) mup3_control_keys_pane_g1

0x5149,	// (0x000a8dae) mup3_control_keys_pane_g2

0x5151,	// (0x000a8db6) mup3_control_keys_pane_g3

0x5159,	// (0x000a8dbe) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x000b348a) mup3_control_keys_pane_g

0x0706,	// (0x000a436b) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0706,	// (0x000a436b) popup_toolbar2_fixed_window_cp01

0x4b46,	// (0x000a87ab) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4b46,	// (0x000a87ab) popup_toolbar2_fixed_window_cp02

0xb31b,	// (0x000aef80) popup_call2_audio_second_window_t4_ParamLimits

0xb31b,	// (0x000aef80) popup_call2_audio_second_window_t4

0xb90e,	// (0x000af573) popup_call2_audio_first_window_t6_ParamLimits

0xb90e,	// (0x000af573) popup_call2_audio_first_window_t6

0xbba4,	// (0x000af809) popup_call2_audio_out_window_t6_ParamLimits

0xbba4,	// (0x000af809) popup_call2_audio_out_window_t6

0x9487,	// (0x000ad0ec) main_vitu_pane

0x5169,	// (0x000a8dce) aid_size_cell_itu_ParamLimits

0x5169,	// (0x000a8dce) aid_size_cell_itu

0xe200,	// (0x000b1e65) bg_popup_window_pane_cp08_ParamLimits

0xe200,	// (0x000b1e65) bg_popup_window_pane_cp08

0x517f,	// (0x000a8de4) field_vitu_entry_pane_ParamLimits

0x517f,	// (0x000a8de4) field_vitu_entry_pane

0x5197,	// (0x000a8dfc) grid_vitu_function_pane_ParamLimits

0x5197,	// (0x000a8dfc) grid_vitu_function_pane

0x51b2,	// (0x000a8e17) grid_vitu_itu_pane_ParamLimits

0x51b2,	// (0x000a8e17) grid_vitu_itu_pane

0x51d0,	// (0x000a8e35) cell_vitu_itu_pane_ParamLimits

0x51d0,	// (0x000a8e35) cell_vitu_itu_pane

0x51f2,	// (0x000a8e57) cell_vitu_function_pane_ParamLimits

0x51f2,	// (0x000a8e57) cell_vitu_function_pane

0xe200,	// (0x000b1e65) bg_popup_sub_pane_cp08_ParamLimits

0xe200,	// (0x000b1e65) bg_popup_sub_pane_cp08

0x520b,	// (0x000a8e70) field_vitu_entry_pane_t1_ParamLimits

0x520b,	// (0x000a8e70) field_vitu_entry_pane_t1

0xcb1a,	// (0x000b077f) field_vitu_entry_pane_t2_ParamLimits

0xcb1a,	// (0x000b077f) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x000b3498) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x000b3498) field_vitu_entry_pane_t

0xcb37,	// (0x000b079c) bg_button_pane_cp05_ParamLimits

0xcb37,	// (0x000b079c) bg_button_pane_cp05

0x522a,	// (0x000a8e8f) cell_vitu_itu_pane_g1

0x5242,	// (0x000a8ea7) cell_vitu_itu_pane_t1_ParamLimits

0x5242,	// (0x000a8ea7) cell_vitu_itu_pane_t1

0x5254,	// (0x000a8eb9) cell_vitu_itu_pane_t2_ParamLimits

0x5254,	// (0x000a8eb9) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x000b349d) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x000b349d) cell_vitu_itu_pane_t

0xcb45,	// (0x000b07aa) bg_button_pane_cp07

0x5289,	// (0x000a8eee) cell_vitu_function_pane_g1

0x983a,	// (0x000ad49f) main_calc_pane_g1

0x04f1,	// (0x000a4156) aid_visual_content_pane

0x9487,	// (0x000ad0ec) main_vradio_pane

0x5292,	// (0x000a8ef7) main_vradio_pane_g1_ParamLimits

0x5292,	// (0x000a8ef7) main_vradio_pane_g1

0xcb4f,	// (0x000b07b4) main_vradio_pane_g2_ParamLimits

0xcb4f,	// (0x000b07b4) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x000b34a4) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x000b34a4) main_vradio_pane_g

0x52ab,	// (0x000a8f10) main_vradio_pane_t1_ParamLimits

0x52ab,	// (0x000a8f10) main_vradio_pane_t1

0x52c0,	// (0x000a8f25) main_vradio_pane_t2_ParamLimits

0x52c0,	// (0x000a8f25) main_vradio_pane_t2

0xcb5c,	// (0x000b07c1) main_vradio_pane_t3_ParamLimits

0xcb5c,	// (0x000b07c1) main_vradio_pane_t3

0x0002,

0xf844,	// (0x000b34a9) main_vradio_pane_t_ParamLimits

0xf844,	// (0x000b34a9) main_vradio_pane_t

0x52d5,	// (0x000a8f3a) vradio_rocker_control_pane_ParamLimits

0x52d5,	// (0x000a8f3a) vradio_rocker_control_pane

0x52e7,	// (0x000a8f4c) vradio_station_info_pane_ParamLimits

0x52e7,	// (0x000a8f4c) vradio_station_info_pane

0xcb70,	// (0x000b07d5) vradio_frequency_info_pane_ParamLimits

0xcb70,	// (0x000b07d5) vradio_frequency_info_pane

0xc4b5,	// (0x000b011a) vradio_station_info_pane_g1

0xcb7f,	// (0x000b07e4) vradio_station_info_pane_t1_ParamLimits

0xcb7f,	// (0x000b07e4) vradio_station_info_pane_t1

0xcba1,	// (0x000b0806) vradio_station_info_pane_t2_ParamLimits

0xcba1,	// (0x000b0806) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x000b34b0) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x000b34b0) vradio_station_info_pane_t

0xcbb3,	// (0x000b0818) vradio_tuning_pane

0xcbc3,	// (0x000b0828) vradio_rocker_control_pane_g1

0xcbcb,	// (0x000b0830) vradio_rocker_control_pane_g2

0xcbd3,	// (0x000b0838) vradio_rocker_control_pane_g3

0xcbdb,	// (0x000b0840) vradio_rocker_control_pane_g4

0xcbe3,	// (0x000b0848) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x000b34b5) vradio_rocker_control_pane_g

0x52f9,	// (0x000a8f5e) vradio_frequency_info_pane_g1

0xcbeb,	// (0x000b0850) vradio_frequency_info_pane_t1_ParamLimits

0xcbeb,	// (0x000b0850) vradio_frequency_info_pane_t1

0x5303,	// (0x000a8f68) vradio_tuning_pane_g1

0x530e,	// (0x000a8f73) vradio_tuning_pane_t1

0x054e,	// (0x000a41b3) area_side_right_pane_ParamLimits

0x054e,	// (0x000a41b3) area_side_right_pane

0xc05f,	// (0x000afcc4) status_small_pane_g1

0xc067,	// (0x000afccc) status_small_pane_g2

0xc070,	// (0x000afcd5) status_small_pane_g3

0xc079,	// (0x000afcde) status_small_pane_g4

0x0003,

0xf60b,	// (0x000b3270) status_small_pane_g

0xc082,	// (0x000afce7) status_small_pane_t1

0x9487,	// (0x000ad0ec) main_video3_pane

0xcbff,	// (0x000b0864) cams_zoom_vslider_pane

0xcc07,	// (0x000b086c) image3_wide_pane_ParamLimits

0xcc07,	// (0x000b086c) image3_wide_pane

0xcc21,	// (0x000b0886) image3_wide_small_pane

0xcc2d,	// (0x000b0892) main_video3_pane_g1_ParamLimits

0xcc2d,	// (0x000b0892) main_video3_pane_g1

0xcc49,	// (0x000b08ae) main_video3_pane_g2_ParamLimits

0xcc49,	// (0x000b08ae) main_video3_pane_g2

0x0001,

0xf85b,	// (0x000b34c0) main_video3_pane_g_ParamLimits

0xf85b,	// (0x000b34c0) main_video3_pane_g

0xcc65,	// (0x000b08ca) main_video3_pane_t1_ParamLimits

0xcc65,	// (0x000b08ca) main_video3_pane_t1

0xcc90,	// (0x000b08f5) main_video3_pane_t2_ParamLimits

0xcc90,	// (0x000b08f5) main_video3_pane_t2

0xccbb,	// (0x000b0920) main_video3_pane_t3_ParamLimits

0xccbb,	// (0x000b0920) main_video3_pane_t3

0x0002,

0xf860,	// (0x000b34c5) main_video3_pane_t_ParamLimits

0xf860,	// (0x000b34c5) main_video3_pane_t

0xcce8,	// (0x000b094d) cams_zoom_vslider_pane_g1

0xccf1,	// (0x000b0956) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x000b34cc) cams_zoom_vslider_pane_g

0xccf9,	// (0x000b095e) small_slider_vertical_pane

0xc4b5,	// (0x000b011a) small_slider_vertical_pane_g1

0xc4b5,	// (0x000b011a) small_slider_vertical_pane_g2

0xcd01,	// (0x000b0966) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x000b34d1) small_slider_vertical_pane_g

0x9487,	// (0x000ad0ec) main_hwr_training_pane

0xcd0a,	// (0x000b096f) hwr_training_instruct_pane_ParamLimits

0xcd0a,	// (0x000b096f) hwr_training_instruct_pane

0x531d,	// (0x000a8f82) hwr_training_navi_pane_ParamLimits

0x531d,	// (0x000a8f82) hwr_training_navi_pane

0x533c,	// (0x000a8fa1) hwr_training_write_pane_ParamLimits

0x533c,	// (0x000a8fa1) hwr_training_write_pane

0xe1c3,	// (0x000b1e28) bg_frame_shadow_pane

0xcd41,	// (0x000b09a6) hwr_training_write_pane_g1

0xcd49,	// (0x000b09ae) hwr_training_write_pane_g2

0xcd51,	// (0x000b09b6) hwr_training_write_pane_g3

0xcd59,	// (0x000b09be) hwr_training_write_pane_g4

0xcd61,	// (0x000b09c6) hwr_training_write_pane_g5

0xcd69,	// (0x000b09ce) hwr_training_write_pane_g6

0xcd71,	// (0x000b09d6) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x000b34d8) hwr_training_write_pane_g

0x9ae8,	// (0x000ad74d) hwr_training_navi_pane_g1_ParamLimits

0x9ae8,	// (0x000ad74d) hwr_training_navi_pane_g1

0x9afa,	// (0x000ad75f) hwr_training_navi_pane_g2_ParamLimits

0x9afa,	// (0x000ad75f) hwr_training_navi_pane_g2

0x9b0c,	// (0x000ad771) hwr_training_navi_pane_g3_ParamLimits

0x9b0c,	// (0x000ad771) hwr_training_navi_pane_g3

0x9b1c,	// (0x000ad781) hwr_training_navi_pane_g4_ParamLimits

0x9b1c,	// (0x000ad781) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x000b34e7) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x000b34e7) hwr_training_navi_pane_g

0x9b29,	// (0x000ad78e) hwr_training_navi_pane_t1

0x5386,	// (0x000a8feb) list_single_hwr_training_instruct_pane_ParamLimits

0x5386,	// (0x000a8feb) list_single_hwr_training_instruct_pane

0xcd79,	// (0x000b09de) list_single_hwr_training_instruct_pane_t1

0xc3f5,	// (0x000b005a) bg_frame_shadow_pane_g1

0xcd88,	// (0x000b09ed) bg_frame_shadow_pane_g2

0xcd90,	// (0x000b09f5) bg_frame_shadow_pane_g3

0xcd98,	// (0x000b09fd) bg_frame_shadow_pane_g4

0xcda0,	// (0x000b0a05) bg_frame_shadow_pane_g5

0xcda8,	// (0x000b0a0d) bg_frame_shadow_pane_g6

0xcdb0,	// (0x000b0a15) bg_frame_shadow_pane_g7

0xa053,	// (0x000adcb8) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x000b34f2) bg_frame_shadow_pane_g

0x9487,	// (0x000ad0ec) main_video_tele_dialer_pane

0x539c,	// (0x000a9001) aid_size_cell_video_keypad_ParamLimits

0x539c,	// (0x000a9001) aid_size_cell_video_keypad

0x53b6,	// (0x000a901b) grid_video_dialer_keypad_pane_ParamLimits

0x53b6,	// (0x000a901b) grid_video_dialer_keypad_pane

0x5404,	// (0x000a9069) video_down_pane_cp_ParamLimits

0x5404,	// (0x000a9069) video_down_pane_cp

0x5436,	// (0x000a909b) cell_video_dialer_keypad_pane_ParamLimits

0x5436,	// (0x000a909b) cell_video_dialer_keypad_pane

0xcdb8,	// (0x000b0a1d) bg_button_pane_cp08_ParamLimits

0xcdb8,	// (0x000b0a1d) bg_button_pane_cp08

0x5458,	// (0x000a90bd) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5458,	// (0x000a90bd) cell_video_dialer_keypad_pane_g1

0x4afc,	// (0x000a8761) mup3_rocker2_pane_ParamLimits

0x4afc,	// (0x000a8761) mup3_rocker2_pane

0xc4b5,	// (0x000b011a) mup3_rocker2_pane_g1

0x364d,	// (0x000a72b2) main_dialer2_pane

0x9487,	// (0x000ad0ec) main_mp4_pane

0x9b3f,	// (0x000ad7a4) main_mp4_pane_g1_ParamLimits

0x9b3f,	// (0x000ad7a4) main_mp4_pane_g1

0x9b3f,	// (0x000ad7a4) main_mp4_pane_g2_ParamLimits

0x9b3f,	// (0x000ad7a4) main_mp4_pane_g2

0x5492,	// (0x000a90f7) main_mp4_pane_g3_ParamLimits

0x5492,	// (0x000a90f7) main_mp4_pane_g3

0x9b4d,	// (0x000ad7b2) main_mp4_pane_g4_ParamLimits

0x9b4d,	// (0x000ad7b2) main_mp4_pane_g4

0x9b75,	// (0x000ad7da) main_mp4_pane_g5_ParamLimits

0x9b75,	// (0x000ad7da) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x000b3512) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x000b3512) main_mp4_pane_g

0x9bc5,	// (0x000ad82a) main_mp4_pane_t1_ParamLimits

0x9bc5,	// (0x000ad82a) main_mp4_pane_t1

0x9c21,	// (0x000ad886) main_mp4_pane_t2_ParamLimits

0x9c21,	// (0x000ad886) main_mp4_pane_t2

0xcdc4,	// (0x000b0a29) main_mp4_pane_t3_ParamLimits

0xcdc4,	// (0x000b0a29) main_mp4_pane_t3

0x9c73,	// (0x000ad8d8) main_mp4_pane_t4_ParamLimits

0x9c73,	// (0x000ad8d8) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x000b351f) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x000b351f) main_mp4_pane_t

0x9cb7,	// (0x000ad91c) mp4_progress_pane_ParamLimits

0x9cb7,	// (0x000ad91c) mp4_progress_pane

0x9d01,	// (0x000ad966) mp4_rocker_pane_ParamLimits

0x9d01,	// (0x000ad966) mp4_rocker_pane

0xcdec,	// (0x000b0a51) mp4_progress_pane_t1

0xce05,	// (0x000b0a6a) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x000b3528) mp4_progress_pane_t

0xce1e,	// (0x000b0a83) mup_progress_pane_cp04

0xce2a,	// (0x000b0a8f) mp4_rocker_pane_g1

0x54ce,	// (0x000a9133) aid_cell_size_keypad2_ParamLimits

0x54ce,	// (0x000a9133) aid_cell_size_keypad2

0x54e4,	// (0x000a9149) dialer2_ne_pane_ParamLimits

0x54e4,	// (0x000a9149) dialer2_ne_pane

0x54fe,	// (0x000a9163) grid_dialer2_keypad_pane_ParamLimits

0x54fe,	// (0x000a9163) grid_dialer2_keypad_pane

0xc29a,	// (0x000afeff) bg_popup_call_pane_cp07_ParamLimits

0xc29a,	// (0x000afeff) bg_popup_call_pane_cp07

0x551a,	// (0x000a917f) dialer2_ne_pane_t1_ParamLimits

0x551a,	// (0x000a917f) dialer2_ne_pane_t1

0x5556,	// (0x000a91bb) cell_dialer2_keypad_pane_ParamLimits

0x5556,	// (0x000a91bb) cell_dialer2_keypad_pane

0xce46,	// (0x000b0aab) bg_button_pane_pane_cp04_ParamLimits

0xce46,	// (0x000b0aab) bg_button_pane_pane_cp04

0x5578,	// (0x000a91dd) cell_dialer2_keypad_pane_g1_ParamLimits

0x5578,	// (0x000a91dd) cell_dialer2_keypad_pane_g1

0x15e8,	// (0x000a524d) aid_placing_vt_set_content_ParamLimits

0x15e8,	// (0x000a524d) aid_placing_vt_set_content

0x1610,	// (0x000a5275) aid_placing_vt_set_title_ParamLimits

0x1610,	// (0x000a5275) aid_placing_vt_set_title

0x9487,	// (0x000ad0ec) main_image3_pane

0x563e,	// (0x000a92a3) area_side_right_pane_cp01_ParamLimits

0x563e,	// (0x000a92a3) area_side_right_pane_cp01

0x9b3f,	// (0x000ad7a4) main_image3_pane_g1_ParamLimits

0x9b3f,	// (0x000ad7a4) main_image3_pane_g1

0x5655,	// (0x000a92ba) main_image3_pane_g2_ParamLimits

0x5655,	// (0x000a92ba) main_image3_pane_g2

0x567d,	// (0x000a92e2) main_image3_pane_g3_ParamLimits

0x567d,	// (0x000a92e2) main_image3_pane_g3

0x56a7,	// (0x000a930c) main_image3_pane_g4_ParamLimits

0x56a7,	// (0x000a930c) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x000b3537) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x000b3537) main_image3_pane_g

0x56d1,	// (0x000a9336) main_image3_pane_t1_ParamLimits

0x56d1,	// (0x000a9336) main_image3_pane_t1

0x5729,	// (0x000a938e) main_image3_pane_t2_ParamLimits

0x5729,	// (0x000a938e) main_image3_pane_t2

0x577b,	// (0x000a93e0) main_image3_pane_t3_ParamLimits

0x577b,	// (0x000a93e0) main_image3_pane_t3

0x0003,

0xf8db,	// (0x000b3540) main_image3_pane_t_ParamLimits

0xf8db,	// (0x000b3540) main_image3_pane_t

0xe200,	// (0x000b1e65) grid_sctrl_middle_pane_cp01_ParamLimits

0xe200,	// (0x000b1e65) grid_sctrl_middle_pane_cp01

0x5803,	// (0x000a9468) cell_sctrl_middle_pane_cp01_ParamLimits

0x5803,	// (0x000a9468) cell_sctrl_middle_pane_cp01

0x5820,	// (0x000a9485) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5820,	// (0x000a9485) cell_sctrl_middle_pane_cp01_g1

0x9487,	// (0x000ad0ec) main_call4_pane

0x5836,	// (0x000a949b) aid_size_button_call4_ParamLimits

0x5836,	// (0x000a949b) aid_size_button_call4

0x5867,	// (0x000a94cc) call4_windows_pane_ParamLimits

0x5867,	// (0x000a94cc) call4_windows_pane

0x5887,	// (0x000a94ec) grid_call4_button_pane_ParamLimits

0x5887,	// (0x000a94ec) grid_call4_button_pane

0xce52,	// (0x000b0ab7) call4_windows_conf_pane

0xce69,	// (0x000b0ace) popup_call4_audio_first_window_ParamLimits

0xce69,	// (0x000b0ace) popup_call4_audio_first_window

0xceb5,	// (0x000b0b1a) popup_call4_audio_second_window_ParamLimits

0xceb5,	// (0x000b0b1a) popup_call4_audio_second_window

0xcec9,	// (0x000b0b2e) popup_call4_audio_wait_window_ParamLimits

0xcec9,	// (0x000b0b2e) popup_call4_audio_wait_window

0x58b4,	// (0x000a9519) cell_call4_button_pane_ParamLimits

0x58b4,	// (0x000a9519) cell_call4_button_pane

0x58dd,	// (0x000a9542) bg_button_pane_cp09_ParamLimits

0x58dd,	// (0x000a9542) bg_button_pane_cp09

0x58e9,	// (0x000a954e) cell_call4_button_pane_g1_ParamLimits

0x58e9,	// (0x000a954e) cell_call4_button_pane_g1

0x590f,	// (0x000a9574) cell_call4_button_pane_t1_ParamLimits

0x590f,	// (0x000a9574) cell_call4_button_pane_t1

0xcf11,	// (0x000b0b76) popup_call4_audio_conf_window_ParamLimits

0xcf11,	// (0x000b0b76) popup_call4_audio_conf_window

0x4b5c,	// (0x000a87c1) mup3_progress_pane_t1_ParamLimits

0x4b7b,	// (0x000a87e0) mup3_progress_pane_t2_ParamLimits

0xc7f2,	// (0x000b0457) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x000b3414) mup3_progress_pane_t_ParamLimits

0xc80f,	// (0x000b0474) mup_progress_pane_cp03_ParamLimits

0x5161,	// (0x000a8dc6) mup3_control_keys_pane_g4_copy1

0x9ce5,	// (0x000ad94a) mp4_rocker2_pane_ParamLimits

0x9ce5,	// (0x000ad94a) mp4_rocker2_pane

0xcf25,	// (0x000b0b8a) mp4_rocker2_pane_g1

0xcf2d,	// (0x000b0b92) mp4_rocker2_pane_g2

0x9d53,	// (0x000ad9b8) mp4_rocker2_pane_g3

0x9d5b,	// (0x000ad9c0) mp4_rocker2_pane_g4

0x9d63,	// (0x000ad9c8) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x000b3549) mp4_rocker2_pane_g

0x9487,	// (0x000ad0ec) main_camera4_pane

0x9487,	// (0x000ad0ec) main_video4_pane

0x53d2,	// (0x000a9037) main_video_tele_dialer_pane_t1_ParamLimits

0x53d2,	// (0x000a9037) main_video_tele_dialer_pane_t1

0x53eb,	// (0x000a9050) main_video_tele_dialer_pane_t2_ParamLimits

0x53eb,	// (0x000a9050) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x000b3503) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x000b3503) main_video_tele_dialer_pane_t

0x5951,	// (0x000a95b6) cam4_autofocus_pane_ParamLimits

0x5951,	// (0x000a95b6) cam4_autofocus_pane

0x5967,	// (0x000a95cc) cam4_image_uncrop_pane_ParamLimits

0x5967,	// (0x000a95cc) cam4_image_uncrop_pane

0x5981,	// (0x000a95e6) cam4_indicators_pane_ParamLimits

0x5981,	// (0x000a95e6) cam4_indicators_pane

0x59ac,	// (0x000a9611) main_camera4_pane_g1_ParamLimits

0x59ac,	// (0x000a9611) main_camera4_pane_g1

0x59be,	// (0x000a9623) main_camera4_pane_g2_ParamLimits

0x59be,	// (0x000a9623) main_camera4_pane_g2

0x59d1,	// (0x000a9636) main_camera4_pane_g3_ParamLimits

0x59d1,	// (0x000a9636) main_camera4_pane_g3

0x59e4,	// (0x000a9649) main_camera4_pane_g4_ParamLimits

0x59e4,	// (0x000a9649) main_camera4_pane_g4

0x59f7,	// (0x000a965c) main_camera4_pane_g5_ParamLimits

0x59f7,	// (0x000a965c) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x000b3554) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x000b3554) main_camera4_pane_g

0x5a1b,	// (0x000a9680) main_camera4_pane_t1_ParamLimits

0x5a1b,	// (0x000a9680) main_camera4_pane_t1

0x9d87,	// (0x000ad9ec) bg_tb_trans_pane_cp06

0x9d9d,	// (0x000ada02) cam4_indicators_pane_g1

0x9dae,	// (0x000ada13) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x000b356f) cam4_indicators_pane_g

0x9dc6,	// (0x000ada2b) cam4_indicators_pane_t1

0x5a7f,	// (0x000a96e4) main_video4_pane_g1_ParamLimits

0x5a7f,	// (0x000a96e4) main_video4_pane_g1

0x5a8e,	// (0x000a96f3) main_video4_pane_g2_ParamLimits

0x5a8e,	// (0x000a96f3) main_video4_pane_g2

0x5a9d,	// (0x000a9702) main_video4_pane_g3_ParamLimits

0x5a9d,	// (0x000a9702) main_video4_pane_g3

0x5aac,	// (0x000a9711) main_video4_pane_g4_ParamLimits

0x5aac,	// (0x000a9711) main_video4_pane_g4

0x0004,

0xf911,	// (0x000b3576) main_video4_pane_g_ParamLimits

0xf911,	// (0x000b3576) main_video4_pane_g

0x5aca,	// (0x000a972f) vid4_indicators_pane_ParamLimits

0x5aca,	// (0x000a972f) vid4_indicators_pane

0x5af8,	// (0x000a975d) video4_image_uncrop_cif_pane_ParamLimits

0x5af8,	// (0x000a975d) video4_image_uncrop_cif_pane

0x5b12,	// (0x000a9777) video4_image_uncrop_nhd_pane_ParamLimits

0x5b12,	// (0x000a9777) video4_image_uncrop_nhd_pane

0x5967,	// (0x000a95cc) video4_image_uncrop_vga_pane_ParamLimits

0x5967,	// (0x000a95cc) video4_image_uncrop_vga_pane

0x9479,	// (0x000ad0de) bg_tb_trans_pane_cp07

0x9df0,	// (0x000ada55) vid4_indicators_pane_g1

0x9e04,	// (0x000ada69) vid4_indicators_pane_g2

0x9e18,	// (0x000ada7d) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x000b3581) vid4_indicators_pane_g

0x9e45,	// (0x000adaaa) vid4_indicators_pane_t1

0x5b26,	// (0x000a978b) cam4_autofocus_pane_g1

0x5b2e,	// (0x000a9793) cam4_autofocus_pane_g2

0x5b36,	// (0x000a979b) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x000b358c) cam4_autofocus_pane_g

0x5b3e,	// (0x000a97a3) cam4_autofocus_pane_g3_copy1

0x541a,	// (0x000a907f) video_down_pane_cp_t1

0x5428,	// (0x000a908d) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x000b3508) video_down_pane_cp_t

0x9479,	// (0x000ad0de) popup_vitu2_window_ParamLimits

0x9479,	// (0x000ad0de) popup_vitu2_window

0x5b46,	// (0x000a97ab) aid_size_cell2_itu2_ParamLimits

0x5b46,	// (0x000a97ab) aid_size_cell2_itu2

0x5b6c,	// (0x000a97d1) aid_size_cell_itu2_ParamLimits

0x5b6c,	// (0x000a97d1) aid_size_cell_itu2

0x5bc8,	// (0x000a982d) bg_popup_window_pane_cp09_ParamLimits

0x5bc8,	// (0x000a982d) bg_popup_window_pane_cp09

0x5bd6,	// (0x000a983b) field_vitu2_entry_pane_ParamLimits

0x5bd6,	// (0x000a983b) field_vitu2_entry_pane

0x5bfc,	// (0x000a9861) grid_vitu2_function_pane_ParamLimits

0x5bfc,	// (0x000a9861) grid_vitu2_function_pane

0x5c4d,	// (0x000a98b2) grid_vitu2_itu_pane_ParamLimits

0x5c4d,	// (0x000a98b2) grid_vitu2_itu_pane

0x5ce3,	// (0x000a9948) cell_vitu2_itu_pane_ParamLimits

0x5ce3,	// (0x000a9948) cell_vitu2_itu_pane

0x5d0f,	// (0x000a9974) cell_vitu2_function_pane_ParamLimits

0x5d0f,	// (0x000a9974) cell_vitu2_function_pane

0xcf47,	// (0x000b0bac) bg_popup_call_pane_cp08_ParamLimits

0xcf47,	// (0x000b0bac) bg_popup_call_pane_cp08

0xcf5e,	// (0x000b0bc3) field_vitu2_entry_pane_g1

0xcf6a,	// (0x000b0bcf) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x000b3593) field_vitu2_entry_pane_g

0x5d4e,	// (0x000a99b3) field_vitu2_entry_pane_t1_ParamLimits

0x5d4e,	// (0x000a99b3) field_vitu2_entry_pane_t1

0xcf84,	// (0x000b0be9) field_vitu2_entry_pane_t2_ParamLimits

0xcf84,	// (0x000b0be9) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x000b359a) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x000b359a) field_vitu2_entry_pane_t

0x5d7d,	// (0x000a99e2) bg_button_pane_cp010_ParamLimits

0x5d7d,	// (0x000a99e2) bg_button_pane_cp010

0x9e5c,	// (0x000adac1) cell_vitu2_itu_pane_g1

0x5d99,	// (0x000a99fe) cell_vitu2_itu_pane_t1_ParamLimits

0x5d99,	// (0x000a99fe) cell_vitu2_itu_pane_t1

0x03b5,	// (0x000a401a) cell_vitu2_itu_pane_t2_ParamLimits

0x03b5,	// (0x000a401a) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x000b35a4) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x000b35a4) cell_vitu2_itu_pane_t

0x9479,	// (0x000ad0de) bg_button_pane_cp011

0x5df7,	// (0x000a9a5c) cell_vitu2_function_pane_g1

0x9487,	// (0x000ad0ec) main_myfav_hc_pane

0x57cb,	// (0x000a9430) popup_image3_note_pane_ParamLimits

0x57cb,	// (0x000a9430) popup_image3_note_pane

0x57e7,	// (0x000a944c) popup_image3_tool_bar_pane_ParamLimits

0x57e7,	// (0x000a944c) popup_image3_tool_bar_pane

0x0443,	// (0x000a40a8) cell_vitu2_itu_pane_t3_ParamLimits

0x0443,	// (0x000a40a8) cell_vitu2_itu_pane_t3

0xe1c3,	// (0x000b1e28) bg_popup_trans_pane

0xcfa9,	// (0x000b0c0e) grid_image3_tool_bar_pane

0xcfb3,	// (0x000b0c18) bg_popup_trans_pane_g1

0xa3b8,	// (0x000ae01d) bg_popup_trans_pane_g2

0xcfbb,	// (0x000b0c20) bg_popup_trans_pane_g3

0xcfc3,	// (0x000b0c28) bg_popup_trans_pane_g4

0xcfcb,	// (0x000b0c30) bg_popup_trans_pane_g5

0xcfd3,	// (0x000b0c38) bg_popup_trans_pane_g6

0xcfdb,	// (0x000b0c40) bg_popup_trans_pane_g7

0xcfe3,	// (0x000b0c48) bg_popup_trans_pane_g8

0xa398,	// (0x000adffd) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x000b35ab) bg_popup_trans_pane_g

0xcfeb,	// (0x000b0c50) cell_image3_tool_bar_pane_ParamLimits

0xcfeb,	// (0x000b0c50) cell_image3_tool_bar_pane

0xc4b5,	// (0x000b011a) cell_image3_tool_bar_pane_g1

0xe1c3,	// (0x000b1e28) bg_popup_trans_pane_cp1

0xcfff,	// (0x000b0c64) popup_image3_note_pane_t1

0xd00d,	// (0x000b0c72) popup_image3_note_pane_t2

0xd01b,	// (0x000b0c80) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x000b35be) popup_image3_note_pane_t

0xd029,	// (0x000b0c8e) popup_image3_note_pane_t3_copy1

0x5e0b,	// (0x000a9a70) bg_myfav_hc_instruction_pane_ParamLimits

0x5e0b,	// (0x000a9a70) bg_myfav_hc_instruction_pane

0x5e1f,	// (0x000a9a84) cell_myfav_contact_pane_ParamLimits

0x5e1f,	// (0x000a9a84) cell_myfav_contact_pane

0x5e3d,	// (0x000a9aa2) cell_myfav_contact_pane_cp1_ParamLimits

0x5e3d,	// (0x000a9aa2) cell_myfav_contact_pane_cp1

0x5e55,	// (0x000a9aba) cell_myfav_contact_pane_cp2_ParamLimits

0x5e55,	// (0x000a9aba) cell_myfav_contact_pane_cp2

0x5e6d,	// (0x000a9ad2) cell_myfav_contact_pane_cp3_ParamLimits

0x5e6d,	// (0x000a9ad2) cell_myfav_contact_pane_cp3

0x5e84,	// (0x000a9ae9) cell_myfav_contact_pane_cp4_ParamLimits

0x5e84,	// (0x000a9ae9) cell_myfav_contact_pane_cp4

0x5e9c,	// (0x000a9b01) cell_myfav_contact_pane_cp5_ParamLimits

0x5e9c,	// (0x000a9b01) cell_myfav_contact_pane_cp5

0x5eb0,	// (0x000a9b15) cell_myfav_contact_pane_cp6_ParamLimits

0x5eb0,	// (0x000a9b15) cell_myfav_contact_pane_cp6

0x5ec6,	// (0x000a9b2b) cell_myfav_contact_pane_cp7_ParamLimits

0x5ec6,	// (0x000a9b2b) cell_myfav_contact_pane_cp7

0xd037,	// (0x000b0c9c) listscroll_gen_pane_cp05

0x5ee0,	// (0x000a9b45) main_myfav_hc_pane_g1_ParamLimits

0x5ee0,	// (0x000a9b45) main_myfav_hc_pane_g1

0x5efa,	// (0x000a9b5f) main_myfav_hc_pane_g2_ParamLimits

0x5efa,	// (0x000a9b5f) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x000b35c5) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x000b35c5) main_myfav_hc_pane_g

0x5f2c,	// (0x000a9b91) main_myfav_hc_pane_t1_ParamLimits

0x5f2c,	// (0x000a9b91) main_myfav_hc_pane_t1

0xd040,	// (0x000b0ca5) main_myfav_hc_pane_t2_ParamLimits

0xd040,	// (0x000b0ca5) main_myfav_hc_pane_t2

0xd052,	// (0x000b0cb7) main_myfav_hc_pane_t3_ParamLimits

0xd052,	// (0x000b0cb7) main_myfav_hc_pane_t3

0x5f43,	// (0x000a9ba8) main_myfav_hc_pane_t4_ParamLimits

0x5f43,	// (0x000a9ba8) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x000b35cc) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x000b35cc) main_myfav_hc_pane_t

0xc4b5,	// (0x000b011a) bg_myfav_hc_instruction_pane_g1

0xd064,	// (0x000b0cc9) cell_myfav_contact_pane_g1_ParamLimits

0xd064,	// (0x000b0cc9) cell_myfav_contact_pane_g1

0xd064,	// (0x000b0cc9) cell_myfav_contact_pane_g2_ParamLimits

0xd064,	// (0x000b0cc9) cell_myfav_contact_pane_g2

0xd070,	// (0x000b0cd5) cell_myfav_contact_pane_g3_ParamLimits

0xd070,	// (0x000b0cd5) cell_myfav_contact_pane_g3

0xc7dc,	// (0x000b0441) cell_myfav_contact_pane_g4_ParamLimits

0xc7dc,	// (0x000b0441) cell_myfav_contact_pane_g4

0xd07d,	// (0x000b0ce2) cell_myfav_contact_pane_g5_ParamLimits

0xd07d,	// (0x000b0ce2) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x000b35d7) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x000b35d7) cell_myfav_contact_pane_g

0x5f14,	// (0x000a9b79) main_myfav_hc_pane_g3_ParamLimits

0x5f14,	// (0x000a9b79) main_myfav_hc_pane_g3

0x0668,	// (0x000a42cd) popup_adpt_find_window

0x5f6b,	// (0x000a9bd0) afind_page_pane_ParamLimits

0x5f6b,	// (0x000a9bd0) afind_page_pane

0x5f80,	// (0x000a9be5) aid_size_cell_afind_ParamLimits

0x5f80,	// (0x000a9be5) aid_size_cell_afind

0x5f9e,	// (0x000a9c03) bg_popup_sub_pane_cp09_ParamLimits

0x5f9e,	// (0x000a9c03) bg_popup_sub_pane_cp09

0x5fab,	// (0x000a9c10) find_pane_cp01_ParamLimits

0x5fab,	// (0x000a9c10) find_pane_cp01

0xd089,	// (0x000b0cee) grid_afind_control_pane_ParamLimits

0xd089,	// (0x000b0cee) grid_afind_control_pane

0x5fb8,	// (0x000a9c1d) grid_afind_pane_ParamLimits

0x5fb8,	// (0x000a9c1d) grid_afind_pane

0x5fd7,	// (0x000a9c3c) cell_afind_pane_ParamLimits

0x5fd7,	// (0x000a9c3c) cell_afind_pane

0xc4b5,	// (0x000b011a) afind_page_pane_g1

0x603e,	// (0x000a9ca3) afind_page_pane_g2

0x6047,	// (0x000a9cac) afind_page_pane_g3

0x0002,

0xf97d,	// (0x000b35e2) afind_page_pane_g

0x6050,	// (0x000a9cb5) afind_page_pane_t1

0xd09d,	// (0x000b0d02) cell_afind_grid_control_pane_ParamLimits

0xd09d,	// (0x000b0d02) cell_afind_grid_control_pane

0xce46,	// (0x000b0aab) bg_button_pane_cp69_ParamLimits

0xce46,	// (0x000b0aab) bg_button_pane_cp69

0x6070,	// (0x000a9cd5) cell_afind_pane_g1_ParamLimits

0x6070,	// (0x000a9cd5) cell_afind_pane_g1

0x607d,	// (0x000a9ce2) cell_afind_pane_t1_ParamLimits

0x607d,	// (0x000a9ce2) cell_afind_pane_t1

0xa1b1,	// (0x000ade16) bg_button_pane_cp72

0xd0ac,	// (0x000b0d11) cell_afind_grid_control_pane_g1

0x30fa,	// (0x000a6d5f) aid_image_placing_area_ParamLimits

0x30fa,	// (0x000a6d5f) aid_image_placing_area

0xcb02,	// (0x000b0767) field_vitu_entry_pane_g1_ParamLimits

0xcb02,	// (0x000b0767) field_vitu_entry_pane_g1

0xcb0e,	// (0x000b0773) field_vitu_entry_pane_g2_ParamLimits

0xcb0e,	// (0x000b0773) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x000b3493) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x000b3493) field_vitu_entry_pane_g

0x522a,	// (0x000a8e8f) cell_vitu_itu_pane_g1_ParamLimits

0x526c,	// (0x000a8ed1) cell_vitu_itu_pane_t3_ParamLimits

0x526c,	// (0x000a8ed1) cell_vitu_itu_pane_t3

0xcdec,	// (0x000b0a51) mp4_progress_pane_t1_ParamLimits

0xce05,	// (0x000b0a6a) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x000b3528) mp4_progress_pane_t_ParamLimits

0xce1e,	// (0x000b0a83) mup_progress_pane_cp04_ParamLimits

0x5f57,	// (0x000a9bbc) main_myfav_hc_pane_t5_ParamLimits

0x5f57,	// (0x000a9bbc) main_myfav_hc_pane_t5

0x0505,	// (0x000a416a) aid_zoom_text_primary

0x0668,	// (0x000a42cd) popup_adpt_find_window_ParamLimits

0x9479,	// (0x000ad0de) main_cam_set_pane

0x5998,	// (0x000a95fd) cam4_zoom_pane_ParamLimits

0x5998,	// (0x000a95fd) cam4_zoom_pane

0x608f,	// (0x000a9cf4) main_cam_set_pane_g1_ParamLimits

0x608f,	// (0x000a9cf4) main_cam_set_pane_g1

0x609d,	// (0x000a9d02) main_cam_set_pane_g2_ParamLimits

0x609d,	// (0x000a9d02) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x000b35e9) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x000b35e9) main_cam_set_pane_g

0x60be,	// (0x000a9d23) main_cam_set_pane_t1_ParamLimits

0x60be,	// (0x000a9d23) main_cam_set_pane_t1

0x60d9,	// (0x000a9d3e) main_cset_listscroll_pane_ParamLimits

0x60d9,	// (0x000a9d3e) main_cset_listscroll_pane

0x60f9,	// (0x000a9d5e) main_cset_slider_pane_ParamLimits

0x60f9,	// (0x000a9d5e) main_cset_slider_pane

0xd0bd,	// (0x000b0d22) main_cset_list_pane_ParamLimits

0xd0bd,	// (0x000b0d22) main_cset_list_pane

0xd0cd,	// (0x000b0d32) scroll_pane_cp028

0x611f,	// (0x000a9d84) aid_area_touch_slider

0x613b,	// (0x000a9da0) cset_slider_pane

0x6165,	// (0x000a9dca) main_cset_slider_pane_g1

0x617a,	// (0x000a9ddf) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x000b35ee) main_cset_slider_pane_g

0xd11e,	// (0x000b0d83) main_cset_slider_pane_t1

0x621e,	// (0x000a9e83) main_cset_slider_pane_t2

0x6238,	// (0x000a9e9d) main_cset_slider_pane_t3

0x6252,	// (0x000a9eb7) main_cset_slider_pane_t4

0x626c,	// (0x000a9ed1) main_cset_slider_pane_t5

0x6286,	// (0x000a9eeb) main_cset_slider_pane_t6

0x629b,	// (0x000a9f00) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x000b3613) main_cset_slider_pane_t

0x639f,	// (0x000aa004) cset_list_set_pane_ParamLimits

0x639f,	// (0x000aa004) cset_list_set_pane

0x63b1,	// (0x000aa016) aid_position_infowindow_above

0x63b9,	// (0x000aa01e) aid_position_infowindow_below

0x63c1,	// (0x000aa026) cset_list_set_pane_g1_ParamLimits

0x63c1,	// (0x000aa026) cset_list_set_pane_g1

0x63cd,	// (0x000aa032) cset_list_set_pane_g3_ParamLimits

0x63cd,	// (0x000aa032) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x000b3632) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x000b3632) cset_list_set_pane_g

0x63dc,	// (0x000aa041) cset_list_set_pane_t1_ParamLimits

0x63dc,	// (0x000aa041) cset_list_set_pane_t1

0xe200,	// (0x000b1e65) list_highlight_pane_cp021_ParamLimits

0xe200,	// (0x000b1e65) list_highlight_pane_cp021

0xacca,	// (0x000ae92f) cset_slider_pane_g1

0xacdc,	// (0x000ae941) cset_slider_pane_g2

0xacd3,	// (0x000ae938) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x000b3637) cset_slider_pane_g

0x9e6e,	// (0x000adad3) aid_area_touch_cam4_zoom

0x9e76,	// (0x000adadb) cam4_zoom_cont_pane

0x9e7e,	// (0x000adae3) cam4_zoom_pane_g1

0x9e86,	// (0x000adaeb) cam4_zoom_pane_g2

0x63f1,	// (0x000aa056) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x000b363e) cam4_zoom_pane_g

0x9e8e,	// (0x000adaf3) cam4_zoom_cont_pane_g1

0x9e97,	// (0x000adafc) cam4_zoom_cont_pane_g2

0x9ea0,	// (0x000adb05) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x000b3645) cam4_zoom_cont_pane_g

0x5854,	// (0x000a94b9) call4_image_pane_ParamLimits

0x5854,	// (0x000a94b9) call4_image_pane

0xce52,	// (0x000b0ab7) call4_windows_conf_pane_ParamLimits

0xce93,	// (0x000b0af8) popup_call4_audio_in_window_ParamLimits

0xce93,	// (0x000b0af8) popup_call4_audio_in_window

0xe1c3,	// (0x000b1e28) bg_popup_call2_act_pane_cp02

0xcf09,	// (0x000b0b6e) call4_list_conf_pane

0xc4b5,	// (0x000b011a) call4_image_pane_g1

0xc4b5,	// (0x000b011a) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x000b3354) call4_image_pane_g

0xd1be,	// (0x000b0e23) list_single_graphic_popup_conf4_pane_ParamLimits

0xd1be,	// (0x000b0e23) list_single_graphic_popup_conf4_pane

0xe1c3,	// (0x000b1e28) list_highlight_pane_cp022

0xd1d1,	// (0x000b0e36) list_single_graphic_popup_conf4_pane_g1

0xa8c6,	// (0x000ae52b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x000b364c) list_single_graphic_popup_conf4_pane_g

0xd1d9,	// (0x000b0e3e) list_single_graphic_popup_conf4_pane_t1

0x1734,	// (0x000a5399) popup_vtel_slider_window_ParamLimits

0x1734,	// (0x000a5399) popup_vtel_slider_window

0xce34,	// (0x000b0a99) dialer2_ne_pane_t2_ParamLimits

0xce34,	// (0x000b0a99) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x000b352d) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x000b352d) dialer2_ne_pane_t

0xc29a,	// (0x000afeff) bg_popup_sub_pane_cp010_ParamLimits

0xc29a,	// (0x000afeff) bg_popup_sub_pane_cp010

0x63f9,	// (0x000aa05e) popup_vtel_slider_window_g1_ParamLimits

0x63f9,	// (0x000aa05e) popup_vtel_slider_window_g1

0x640c,	// (0x000aa071) popup_vtel_slider_window_g2_ParamLimits

0x640c,	// (0x000aa071) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x000b3651) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x000b3651) popup_vtel_slider_window_g

0x6462,	// (0x000aa0c7) vtel_slider_pane_ParamLimits

0x6462,	// (0x000aa0c7) vtel_slider_pane

0x6484,	// (0x000aa0e9) vtel_slider_pane_g1_ParamLimits

0x6484,	// (0x000aa0e9) vtel_slider_pane_g1

0x6498,	// (0x000aa0fd) vtel_slider_pane_g2_ParamLimits

0x6498,	// (0x000aa0fd) vtel_slider_pane_g2

0x64b0,	// (0x000aa115) vtel_slider_pane_g3_ParamLimits

0x64b0,	// (0x000aa115) vtel_slider_pane_g3

0x6484,	// (0x000aa0e9) vtel_slider_pane_g4_ParamLimits

0x6484,	// (0x000aa0e9) vtel_slider_pane_g4

0x64c6,	// (0x000aa12b) vtel_slider_pane_g5_ParamLimits

0x64c6,	// (0x000aa12b) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x000b365a) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x000b365a) vtel_slider_pane_g

0x9479,	// (0x000ad0de) main_gallery2_pane

0x5b98,	// (0x000a97fd) aid_size_row_itut2_dropdow_list_ParamLimits

0x5b98,	// (0x000a97fd) aid_size_row_itut2_dropdow_list

0x5c24,	// (0x000a9889) grid_vitu2_function_top_pane_ParamLimits

0x5c24,	// (0x000a9889) grid_vitu2_function_top_pane

0x5c8e,	// (0x000a98f3) popup_vitu2_dropdown_list_window_ParamLimits

0x5c8e,	// (0x000a98f3) popup_vitu2_dropdown_list_window

0x5cb7,	// (0x000a991c) popup_vitu2_match_list_window

0x64ea,	// (0x000aa14f) cell_vitu2_function_top_pane_ParamLimits

0x64ea,	// (0x000aa14f) cell_vitu2_function_top_pane

0x6502,	// (0x000aa167) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6502,	// (0x000aa167) cell_vitu2_function_top_pane_cp01

0x651e,	// (0x000aa183) cell_vitu2_function_top_wide_pane_ParamLimits

0x651e,	// (0x000aa183) cell_vitu2_function_top_wide_pane

0x9479,	// (0x000ad0de) bg_button_pane_cp012

0x653a,	// (0x000aa19f) cell_vitu2_function_top_pane_g1

0x9ea9,	// (0x000adb0e) bg_button_pane_cp013_ParamLimits

0x9ea9,	// (0x000adb0e) bg_button_pane_cp013

0x654e,	// (0x000aa1b3) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x654e,	// (0x000aa1b3) cell_vitu2_function_top_wide_pane_g1

0x9479,	// (0x000ad0de) bg_popup_sub_pane_cp20

0x6566,	// (0x000aa1cb) list_vitu2_match_list_pane

0xcfb3,	// (0x000b0c18) bg_popup_sub_pane_cp20_g1

0xcfbb,	// (0x000b0c20) bg_popup_sub_pane_cp20_g2

0xa3b8,	// (0x000ae01d) bg_popup_sub_pane_cp20_g3

0xcfc3,	// (0x000b0c28) bg_popup_sub_pane_cp20_g4

0xa398,	// (0x000adffd) bg_popup_sub_pane_cp20_g5

0xd1ef,	// (0x000b0e54) bg_popup_sub_pane_cp20_g6

0xcfd3,	// (0x000b0c38) bg_popup_sub_pane_cp20_g7

0xcfdb,	// (0x000b0c40) bg_popup_sub_pane_cp20_g8

0xcfe3,	// (0x000b0c48) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x000b3665) bg_popup_sub_pane_cp20_g

0x9ec5,	// (0x000adb2a) list_vitu2_match_list_item_pane_ParamLimits

0x9ec5,	// (0x000adb2a) list_vitu2_match_list_item_pane

0x9ed7,	// (0x000adb3c) list_vitu2_match_list_item_pane_t1

0x9487,	// (0x000ad0ec) bg_popup_sub_pane_cp21

0x9ee5,	// (0x000adb4a) grid_vitu2_dropdown_list_pane

0x65d4,	// (0x000aa239) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x65d4,	// (0x000aa239) cell_vitu2_dropdown_list_char_pane

0x65f5,	// (0x000aa25a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x65f5,	// (0x000aa25a) cell_vitu2_dropdown_list_ctrl_pane

0xd1f7,	// (0x000b0e5c) cell_vitu2_dropdown_list_char_pane_g1

0xd200,	// (0x000b0e65) cell_vitu2_dropdown_list_char_pane_g2

0xd209,	// (0x000b0e6e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x000b3682) cell_vitu2_dropdown_list_char_pane_g

0x6621,	// (0x000aa286) cell_vitu2_dropdown_list_char_pane_t1

0x662f,	// (0x000aa294) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x662f,	// (0x000aa294) cell_vitu2_dropdown_list_ctrl_pane_g1

0x663c,	// (0x000aa2a1) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x663c,	// (0x000aa2a1) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6649,	// (0x000aa2ae) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6649,	// (0x000aa2ae) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6656,	// (0x000aa2bb) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6656,	// (0x000aa2bb) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9d87,	// (0x000ad9ec) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9d87,	// (0x000ad9ec) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x000b3689) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x000b3689) cell_vitu2_dropdown_list_ctrl_pane_g

0x6672,	// (0x000aa2d7) aid_size_cell_gallery2_ParamLimits

0x6672,	// (0x000aa2d7) aid_size_cell_gallery2

0x6690,	// (0x000aa2f5) grid_gallery2_pane_ParamLimits

0x6690,	// (0x000aa2f5) grid_gallery2_pane

0x66aa,	// (0x000aa30f) scroll_pane_cp029_ParamLimits

0x66aa,	// (0x000aa30f) scroll_pane_cp029

0x66b6,	// (0x000aa31b) cell_gallery2_pane_ParamLimits

0x66b6,	// (0x000aa31b) cell_gallery2_pane

0xd212,	// (0x000b0e77) cell_gallery2_pane_g2

0x6712,	// (0x000aa377) cell_gallery2_pane_g3

0xd21a,	// (0x000b0e7f) cell_gallery2_pane_g4

0xd222,	// (0x000b0e87) cell_gallery2_pane_g5

0xa15f,	// (0x000addc4) grid_highlight_pane_cp10

0x5cb7,	// (0x000a991c) popup_vitu2_match_list_window_ParamLimits

0x5ccc,	// (0x000a9931) popup_vitu2_query_window_ParamLimits

0x5ccc,	// (0x000a9931) popup_vitu2_query_window

0x9487,	// (0x000ad0ec) bg_vitu2_candi_button_pane

0xd1f7,	// (0x000b0e5c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd200,	// (0x000b0e65) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd209,	// (0x000b0e6e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x671a,	// (0x000aa37f) bg_button_pane_cp015

0x672e,	// (0x000aa393) bg_button_pane_cp016

0x6741,	// (0x000aa3a6) bg_button_pane_cp017

0xc0a4,	// (0x000afd09) bg_popup_sub_pane_cp22

0xd22a,	// (0x000b0e8f) popup_vitu2_query_window_g1

0x6786,	// (0x000aa3eb) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x000b3694) popup_vitu2_query_window_g

0x67a5,	// (0x000aa40a) popup_vitu2_query_window_t1_ParamLimits

0x67a5,	// (0x000aa40a) popup_vitu2_query_window_t1

0x67da,	// (0x000aa43f) popup_vitu2_query_window_t2_ParamLimits

0x67da,	// (0x000aa43f) popup_vitu2_query_window_t2

0x67ec,	// (0x000aa451) popup_vitu2_query_window_t3_ParamLimits

0x67ec,	// (0x000aa451) popup_vitu2_query_window_t3

0x6814,	// (0x000aa479) popup_vitu2_query_window_t4_ParamLimits

0x6814,	// (0x000aa479) popup_vitu2_query_window_t4

0x6835,	// (0x000aa49a) popup_vitu2_query_window_t5_ParamLimits

0x6835,	// (0x000aa49a) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x000b369b) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x000b369b) popup_vitu2_query_window_t

0xd0b5,	// (0x000b0d1a) main_cset_text_pane

0x611f,	// (0x000a9d84) aid_area_touch_slider_ParamLimits

0x613b,	// (0x000a9da0) cset_slider_pane_ParamLimits

0x6165,	// (0x000a9dca) main_cset_slider_pane_g1_ParamLimits

0x617a,	// (0x000a9ddf) main_cset_slider_pane_g2_ParamLimits

0xd0d6,	// (0x000b0d3b) main_cset_slider_pane_g3_ParamLimits

0xd0d6,	// (0x000b0d3b) main_cset_slider_pane_g3

0x618f,	// (0x000a9df4) main_cset_slider_pane_g4_ParamLimits

0x618f,	// (0x000a9df4) main_cset_slider_pane_g4

0x619e,	// (0x000a9e03) main_cset_slider_pane_g5_ParamLimits

0x619e,	// (0x000a9e03) main_cset_slider_pane_g5

0x61aa,	// (0x000a9e0f) main_cset_slider_pane_g6_ParamLimits

0x61aa,	// (0x000a9e0f) main_cset_slider_pane_g6

0xf989,	// (0x000b35ee) main_cset_slider_pane_g_ParamLimits

0xd11e,	// (0x000b0d83) main_cset_slider_pane_t1_ParamLimits

0x621e,	// (0x000a9e83) main_cset_slider_pane_t2_ParamLimits

0x6238,	// (0x000a9e9d) main_cset_slider_pane_t3_ParamLimits

0x6252,	// (0x000a9eb7) main_cset_slider_pane_t4_ParamLimits

0x626c,	// (0x000a9ed1) main_cset_slider_pane_t5_ParamLimits

0x6286,	// (0x000a9eeb) main_cset_slider_pane_t6_ParamLimits

0x629b,	// (0x000a9f00) main_cset_slider_pane_t7_ParamLimits

0x62c5,	// (0x000a9f2a) main_cset_slider_pane_t8_ParamLimits

0x62c5,	// (0x000a9f2a) main_cset_slider_pane_t8

0x62ed,	// (0x000a9f52) main_cset_slider_pane_t9_ParamLimits

0x62ed,	// (0x000a9f52) main_cset_slider_pane_t9

0x6315,	// (0x000a9f7a) main_cset_slider_pane_t10_ParamLimits

0x6315,	// (0x000a9f7a) main_cset_slider_pane_t10

0x633d,	// (0x000a9fa2) main_cset_slider_pane_t11_ParamLimits

0x633d,	// (0x000a9fa2) main_cset_slider_pane_t11

0x6365,	// (0x000a9fca) main_cset_slider_pane_t12_ParamLimits

0x6365,	// (0x000a9fca) main_cset_slider_pane_t12

0x6382,	// (0x000a9fe7) main_cset_slider_pane_t13_ParamLimits

0x6382,	// (0x000a9fe7) main_cset_slider_pane_t13

0xf9ae,	// (0x000b3613) main_cset_slider_pane_t_ParamLimits

0xe1c3,	// (0x000b1e28) bg_popup_sub_pane_cp011

0xd236,	// (0x000b0e9b) main_cset_text_pane_g1

0xd23e,	// (0x000b0ea3) main_cset_text_pane_t1

0xd24c,	// (0x000b0eb1) main_cset_text_pane_t2

0xd25a,	// (0x000b0ebf) main_cset_text_pane_t3

0xd268,	// (0x000b0ecd) main_cset_text_pane_t4

0xd276,	// (0x000b0edb) main_cset_text_pane_t5

0xd284,	// (0x000b0ee9) main_cset_text_pane_t6

0xd292,	// (0x000b0ef7) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x000b36aa) main_cset_text_pane_t

0x9487,	// (0x000ad0ec) main_cam4_burst_pane

0x9487,	// (0x000ad0ec) main_cam5_pane

0x605e,	// (0x000a9cc3) bg_button_pane_cp019

0x6067,	// (0x000a9ccc) bg_button_pane_cp020

0xd0e2,	// (0x000b0d47) main_cset_slider_pane_g7_ParamLimits

0xd0e2,	// (0x000b0d47) main_cset_slider_pane_g7

0xd0ee,	// (0x000b0d53) main_cset_slider_pane_g8_ParamLimits

0xd0ee,	// (0x000b0d53) main_cset_slider_pane_g8

0x61be,	// (0x000a9e23) main_cset_slider_pane_g9_ParamLimits

0x61be,	// (0x000a9e23) main_cset_slider_pane_g9

0x61ca,	// (0x000a9e2f) main_cset_slider_pane_g10_ParamLimits

0x61ca,	// (0x000a9e2f) main_cset_slider_pane_g10

0x61d6,	// (0x000a9e3b) main_cset_slider_pane_g11_ParamLimits

0x61d6,	// (0x000a9e3b) main_cset_slider_pane_g11

0x61e2,	// (0x000a9e47) main_cset_slider_pane_g12_ParamLimits

0x61e2,	// (0x000a9e47) main_cset_slider_pane_g12

0x61ee,	// (0x000a9e53) main_cset_slider_pane_g13_ParamLimits

0x61ee,	// (0x000a9e53) main_cset_slider_pane_g13

0x61fa,	// (0x000a9e5f) main_cset_slider_pane_g14_ParamLimits

0x61fa,	// (0x000a9e5f) main_cset_slider_pane_g14

0x6206,	// (0x000a9e6b) main_cset_slider_pane_g15_ParamLimits

0x6206,	// (0x000a9e6b) main_cset_slider_pane_g15

0xd14c,	// (0x000b0db1) main_cset_slider_pane_t14_ParamLimits

0xd14c,	// (0x000b0db1) main_cset_slider_pane_t14

0xd185,	// (0x000b0dea) main_cset_slider_pane_t15_ParamLimits

0xd185,	// (0x000b0dea) main_cset_slider_pane_t15

0x68ac,	// (0x000aa511) aid_cam4_burst_size_cell_ParamLimits

0x68ac,	// (0x000aa511) aid_cam4_burst_size_cell

0x68cc,	// (0x000aa531) grid_cam4_burst_pane_ParamLimits

0x68cc,	// (0x000aa531) grid_cam4_burst_pane

0x6904,	// (0x000aa569) linegrid_cam4_burst_pane_ParamLimits

0x6904,	// (0x000aa569) linegrid_cam4_burst_pane

0xd2a0,	// (0x000b0f05) scroll_pane_cp30_ParamLimits

0xd2a0,	// (0x000b0f05) scroll_pane_cp30

0x6928,	// (0x000aa58d) cell_cam4_burst_pane_ParamLimits

0x6928,	// (0x000aa58d) cell_cam4_burst_pane

0xd2ac,	// (0x000b0f11) linegrid_cam4_burst_pane_g1_ParamLimits

0xd2ac,	// (0x000b0f11) linegrid_cam4_burst_pane_g1

0x6975,	// (0x000aa5da) linegrid_cam4_burst_pane_g2_ParamLimits

0x6975,	// (0x000aa5da) linegrid_cam4_burst_pane_g2

0xd2b9,	// (0x000b0f1e) linegrid_cam4_burst_pane_g3_ParamLimits

0xd2b9,	// (0x000b0f1e) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x000b36b9) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x000b36b9) linegrid_cam4_burst_pane_g

0x6986,	// (0x000aa5eb) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6986,	// (0x000aa5eb) linegrid_cam4_burst_pane_g3_copy1

0xd2c6,	// (0x000b0f2b) linegrid_cam4_burst_pane_g4_ParamLimits

0xd2c6,	// (0x000b0f2b) linegrid_cam4_burst_pane_g4

0x69a0,	// (0x000aa605) linegrid_cam4_burst_pane_g5_ParamLimits

0x69a0,	// (0x000aa605) linegrid_cam4_burst_pane_g5

0x69b1,	// (0x000aa616) linegrid_cam4_burst_pane_g6_ParamLimits

0x69b1,	// (0x000aa616) linegrid_cam4_burst_pane_g6

0xd2d3,	// (0x000b0f38) linegrid_cam4_burst_pane_g7_ParamLimits

0xd2d3,	// (0x000b0f38) linegrid_cam4_burst_pane_g7

0x69c8,	// (0x000aa62d) cell_cam4_burst_pane_g1

0xd2ec,	// (0x000b0f51) main_cam5_pane_t1_ParamLimits

0xd2ec,	// (0x000b0f51) main_cam5_pane_t1

0xd2fe,	// (0x000b0f63) main_cam5_pane_t2_ParamLimits

0xd2fe,	// (0x000b0f63) main_cam5_pane_t2

0xd310,	// (0x000b0f75) main_cam5_pane_t3_ParamLimits

0xd310,	// (0x000b0f75) main_cam5_pane_t3

0xd322,	// (0x000b0f87) main_cam5_pane_t4_ParamLimits

0xd322,	// (0x000b0f87) main_cam5_pane_t4

0xd33a,	// (0x000b0f9f) main_cam5_pane_t5_ParamLimits

0xd33a,	// (0x000b0f9f) main_cam5_pane_t5

0xd34e,	// (0x000b0fb3) main_cam5_pane_t6_ParamLimits

0xd34e,	// (0x000b0fb3) main_cam5_pane_t6

0xd362,	// (0x000b0fc7) main_cam5_pane_t7_ParamLimits

0xd362,	// (0x000b0fc7) main_cam5_pane_t7

0xd374,	// (0x000b0fd9) main_cam5_pane_t8_ParamLimits

0xd374,	// (0x000b0fd9) main_cam5_pane_t8

0xd390,	// (0x000b0ff5) main_cam5_pane_t9_ParamLimits

0xd390,	// (0x000b0ff5) main_cam5_pane_t9

0xd3a2,	// (0x000b1007) main_cam5_pane_t10_ParamLimits

0xd3a2,	// (0x000b1007) main_cam5_pane_t10

0xd3b4,	// (0x000b1019) main_cam5_pane_t11_ParamLimits

0xd3b4,	// (0x000b1019) main_cam5_pane_t11

0xd3c6,	// (0x000b102b) main_cam5_pane_t12_ParamLimits

0xd3c6,	// (0x000b102b) main_cam5_pane_t12

0xd3db,	// (0x000b1040) main_cam5_pane_t13_ParamLimits

0xd3db,	// (0x000b1040) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x000b36c5) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x000b36c5) main_cam5_pane_t

0x06ea,	// (0x000a434f) popup_scut_keymap_window_ParamLimits

0x06ea,	// (0x000a434f) popup_scut_keymap_window

0x69db,	// (0x000aa640) aid_size_cell_brow_shortcut

0xa15f,	// (0x000addc4) bg_popup_window_pane_cp010

0x69e7,	// (0x000aa64c) grid_scut_pane

0x69f3,	// (0x000aa658) cell_scut_pane_ParamLimits

0x69f3,	// (0x000aa658) cell_scut_pane

0x6a0a,	// (0x000aa66f) cell_scut_pane_g1

0xd3f8,	// (0x000b105d) cell_scut_pane_t1

0xd407,	// (0x000b106c) cell_scut_pane_t2

0x6a13,	// (0x000aa678) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x000b36e0) cell_scut_pane_t

0x471f,	// (0x000a8384) main_mup3_pane_g8_ParamLimits

0x471f,	// (0x000a8384) main_mup3_pane_g8

0x5bb0,	// (0x000a9815) area_vitu2_query_pane_ParamLimits

0x5bb0,	// (0x000a9815) area_vitu2_query_pane

0x6754,	// (0x000aa3b9) input_focus_pane_cp08

0xd416,	// (0x000b107b) area_vitu2_query_pane_g1

0x6a21,	// (0x000aa686) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x000b36e7) area_vitu2_query_pane_g

0x6a32,	// (0x000aa697) area_vitu2_query_pane_t1_ParamLimits

0x6a32,	// (0x000aa697) area_vitu2_query_pane_t1

0x6a46,	// (0x000aa6ab) area_vitu2_query_pane_t2_ParamLimits

0x6a46,	// (0x000aa6ab) area_vitu2_query_pane_t2

0x6a5a,	// (0x000aa6bf) area_vitu2_query_pane_t3_ParamLimits

0x6a5a,	// (0x000aa6bf) area_vitu2_query_pane_t3

0xd422,	// (0x000b1087) area_vitu2_query_pane_t4_ParamLimits

0xd422,	// (0x000b1087) area_vitu2_query_pane_t4

0xd44a,	// (0x000b10af) area_vitu2_query_pane_t5_ParamLimits

0xd44a,	// (0x000b10af) area_vitu2_query_pane_t5

0xd472,	// (0x000b10d7) area_vitu2_query_pane_t6_ParamLimits

0xd472,	// (0x000b10d7) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x000b36ec) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x000b36ec) area_vitu2_query_pane_t

0x6a82,	// (0x000aa6e7) bg_button_pane_cp018

0x6a90,	// (0x000aa6f5) bg_button_pane_cp021

0x6a9c,	// (0x000aa701) bg_button_pane_cp022

0x6aad,	// (0x000aa712) input_focus_pane_cp09

0xa9d5,	// (0x000ae63a) aid_size_touch_mv_arrow_left

0xaa00,	// (0x000ae665) aid_size_touch_mv_arrow_right

0xd0fa,	// (0x000b0d5f) main_cset_slider_pane_g16_ParamLimits

0xd0fa,	// (0x000b0d5f) main_cset_slider_pane_g16

0xd106,	// (0x000b0d6b) main_cset_slider_pane_g17_ParamLimits

0xd106,	// (0x000b0d6b) main_cset_slider_pane_g17

0x69c8,	// (0x000aa62d) cell_cam4_burst_pane_g1_ParamLimits

0xe1c3,	// (0x000b1e28) compa_mode_pane

0x641c,	// (0x000aa081) popup_vtel_slider_window_g3_ParamLimits

0x641c,	// (0x000aa081) popup_vtel_slider_window_g3

0x6433,	// (0x000aa098) popup_vtel_slider_window_g4_ParamLimits

0x6433,	// (0x000aa098) popup_vtel_slider_window_g4

0x644a,	// (0x000aa0af) popup_vtel_slider_window_t1_ParamLimits

0x644a,	// (0x000aa0af) popup_vtel_slider_window_t1

0x9487,	// (0x000ad0ec) main_cl_pane

0x99f7,	// (0x000ad65c) popup_imed_adjust2_window_ParamLimits

0xc0a4,	// (0x000afd09) bg_tb_trans_pane_cp05_ParamLimits

0xca37,	// (0x000b069c) popup_imed_adjust2_window_g1_ParamLimits

0xca46,	// (0x000b06ab) popup_imed_adjust2_window_g2_ParamLimits

0xca46,	// (0x000b06ab) popup_imed_adjust2_window_g2

0xca52,	// (0x000b06b7) popup_imed_adjust2_window_g3_ParamLimits

0xca52,	// (0x000b06b7) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x000b3457) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x000b3457) popup_imed_adjust2_window_g

0xca5e,	// (0x000b06c3) popup_imed_adjust2_window_t1_ParamLimits

0xca76,	// (0x000b06db) slider_imed_adjust_pane_ParamLimits

0xca8a,	// (0x000b06ef) slider_imed_adjust_pane_g1_ParamLimits

0xca9a,	// (0x000b06ff) slider_imed_adjust_pane_g2_ParamLimits

0xcaaa,	// (0x000b070f) slider_imed_adjust_pane_g3_ParamLimits

0xcabb,	// (0x000b0720) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x000b345e) slider_imed_adjust_pane_g_ParamLimits

0x5939,	// (0x000a959e) aid_touch_area_cam4_ParamLimits

0x5939,	// (0x000a959e) aid_touch_area_cam4

0x9d6b,	// (0x000ad9d0) battery_pane_cp01

0x5a08,	// (0x000a966d) main_camera4_pane_g6_ParamLimits

0x5a08,	// (0x000a966d) main_camera4_pane_g6

0x5a32,	// (0x000a9697) main_camera4_pane_t2_ParamLimits

0x5a32,	// (0x000a9697) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x000b3561) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x000b3561) main_camera4_pane_t

0x5a67,	// (0x000a96cc) aid_touch_area_vid4_ParamLimits

0x5a67,	// (0x000a96cc) aid_touch_area_vid4

0x5abb,	// (0x000a9720) main_video4_pane_g5_ParamLimits

0x5abb,	// (0x000a9720) main_video4_pane_g5

0x5ae0,	// (0x000a9745) vid4_progress_pane_ParamLimits

0x5ae0,	// (0x000a9745) vid4_progress_pane

0xd112,	// (0x000b0d77) main_cset_slider_pane_g18_ParamLimits

0xd112,	// (0x000b0d77) main_cset_slider_pane_g18

0xd2e0,	// (0x000b0f45) cell_cam4_burst_pane_g2_ParamLimits

0xd2e0,	// (0x000b0f45) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x000b36c0) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x000b36c0) cell_cam4_burst_pane_g

0x9f88,	// (0x000adbed) bg_cl_pane_ParamLimits

0x9f88,	// (0x000adbed) bg_cl_pane

0x6abe,	// (0x000aa723) cl_header_pane_ParamLimits

0x6abe,	// (0x000aa723) cl_header_pane

0x6ad2,	// (0x000aa737) cl_listscroll_pane_ParamLimits

0x6ad2,	// (0x000aa737) cl_listscroll_pane

0xd4be,	// (0x000b1123) bg_cl_pane_g1

0xd4c6,	// (0x000b112b) bg_cl_pane_g2

0xd4ce,	// (0x000b1133) bg_cl_pane_g3

0xd4d6,	// (0x000b113b) bg_cl_pane_g4

0xd4de,	// (0x000b1143) bg_cl_pane_g5

0xd4e6,	// (0x000b114b) bg_cl_pane_g6

0xd4ee,	// (0x000b1153) bg_cl_pane_g7

0xd4f6,	// (0x000b115b) bg_cl_pane_g8

0xd4fe,	// (0x000b1163) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x000b36fb) bg_cl_pane_g

0x6ae2,	// (0x000aa747) aid_height_cl_leading_ParamLimits

0x6ae2,	// (0x000aa747) aid_height_cl_leading

0x6aee,	// (0x000aa753) aid_height_cl_text_ParamLimits

0x6aee,	// (0x000aa753) aid_height_cl_text

0xe200,	// (0x000b1e65) bg_cl_header_pane_ParamLimits

0xe200,	// (0x000b1e65) bg_cl_header_pane

0x6b0d,	// (0x000aa772) cl_header_pane_g1_ParamLimits

0x6b0d,	// (0x000aa772) cl_header_pane_g1

0x6b23,	// (0x000aa788) cl_header_pane_t1_ParamLimits

0x6b23,	// (0x000aa788) cl_header_pane_t1

0xd506,	// (0x000b116b) cl_list_pane

0xd0cd,	// (0x000b0d32) hc_scroll_pane_cp01

0xa398,	// (0x000adffd) bg_cl_header_pane_g1

0xcfb3,	// (0x000b0c18) bg_cl_header_pane_g2

0xa3b8,	// (0x000ae01d) bg_cl_header_pane_g3

0xcfc3,	// (0x000b0c28) bg_cl_header_pane_g4

0xcfbb,	// (0x000b0c20) bg_cl_header_pane_g5

0xd1ef,	// (0x000b0e54) bg_cl_header_pane_g6

0xcfdb,	// (0x000b0c40) bg_cl_header_pane_g7

0xcfe3,	// (0x000b0c48) bg_cl_header_pane_g8

0xcfd3,	// (0x000b0c38) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x000b370e) bg_cl_header_pane_g

0x6b3c,	// (0x000aa7a1) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6b3c,	// (0x000aa7a1) hc_cl_list_double_graphic_heading_pane

0x6b4d,	// (0x000aa7b2) hc_cl_list_single_graphic_pane_ParamLimits

0x6b4d,	// (0x000aa7b2) hc_cl_list_single_graphic_pane

0x6b66,	// (0x000aa7cb) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6b66,	// (0x000aa7cb) hc_cl_list_single_graphic_pane_g1

0x6b72,	// (0x000aa7d7) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6b72,	// (0x000aa7d7) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x000b3721) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x000b3721) hc_cl_list_single_graphic_pane_g

0x6b86,	// (0x000aa7eb) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6b86,	// (0x000aa7eb) hc_cl_list_single_graphic_pane_t1

0x6b66,	// (0x000aa7cb) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6b66,	// (0x000aa7cb) hc_cl_list_double_graphic_heading_pane_g1

0x6b9b,	// (0x000aa800) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6b9b,	// (0x000aa800) hc_cl_list_double_graphic_heading_pane_g2

0x6baf,	// (0x000aa814) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6baf,	// (0x000aa814) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x000b3726) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x000b3726) hc_cl_list_double_graphic_heading_pane_g

0x6bc3,	// (0x000aa828) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6bc3,	// (0x000aa828) hc_cl_list_double_graphic_heading_pane_t1

0x6bd8,	// (0x000aa83d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6bd8,	// (0x000aa83d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x000b372d) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x000b372d) hc_cl_list_double_graphic_heading_pane_t

0x9ef5,	// (0x000adb5a) vid4_progress_pane_g1

0x9f05,	// (0x000adb6a) vid4_progress_pane_g2

0x6bed,	// (0x000aa852) vid4_progress_pane_g3

0x9f15,	// (0x000adb7a) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x000b3732) vid4_progress_pane_g

0x6bff,	// (0x000aa864) vid4_progress_pane_t1

0x9f2d,	// (0x000adb92) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x000b373d) vid4_progress_pane_t

0x6c15,	// (0x000aa87a) wait_bar_pane_cp07

0xc2a8,	// (0x000aff0d) blid_firmament_pane_ParamLimits

0xc2eb,	// (0x000aff50) popup_blid_sat_info2_window_g1

0xc30f,	// (0x000aff74) popup_blid_sat_info2_window_t3

0xc31d,	// (0x000aff82) popup_blid_sat_info2_window_t4

0xc32b,	// (0x000aff90) popup_blid_sat_info2_window_t5

0xc339,	// (0x000aff9e) popup_blid_sat_info2_window_t6

0xc349,	// (0x000affae) popup_blid_sat_info2_window_t7

0xc357,	// (0x000affbc) popup_blid_sat_info2_window_t8

0xc365,	// (0x000affca) popup_blid_sat_info2_window_t9

0xc373,	// (0x000affd8) popup_blid_sat_info2_window_t10

0xc435,	// (0x000b009a) aid_firma_cardinal_ParamLimits

0xc449,	// (0x000b00ae) blid_firmament_pane_t1_ParamLimits

0xc460,	// (0x000b00c5) blid_firmament_pane_t2_ParamLimits

0xc477,	// (0x000b00dc) blid_firmament_pane_t3_ParamLimits

0xc48e,	// (0x000b00f3) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x000b334b) blid_firmament_pane_t_ParamLimits

0xc4a5,	// (0x000b010a) blid_sat_info_pane_ParamLimits

0x9479,	// (0x000ad0de) main_cam_set_pane_ParamLimits

0x4fe2,	// (0x000a8c47) aid_size_cell_colour_35_ParamLimits

0x5002,	// (0x000a8c67) aid_size_cell_colour_112_ParamLimits

0x5022,	// (0x000a8c87) aid_size_cell_effect_ParamLimits

0xc0a4,	// (0x000afd09) bg_tb_trans_pane_cp02_ParamLimits

0xa600,	// (0x000ae265) heading_imed_pane_ParamLimits

0x5042,	// (0x000a8ca7) listscroll_imed_pane_ParamLimits

0xb68a,	// (0x000af2ef) popup_call2_audio_first_window_g5_ParamLimits

0xb68a,	// (0x000af2ef) popup_call2_audio_first_window_g5

0x55e0,	// (0x000a9245) aid_size_touch_image3_arrow_left_ParamLimits

0x55e0,	// (0x000a9245) aid_size_touch_image3_arrow_left

0x560c,	// (0x000a9271) aid_size_touch_image3_arrow_right_ParamLimits

0x560c,	// (0x000a9271) aid_size_touch_image3_arrow_right

0x9f42,	// (0x000adba7) vid4_progress_pane_t3

0x5357,	// (0x000a8fbc) main_hwr_training_symbol_option_pane_ParamLimits

0x5357,	// (0x000a8fbc) main_hwr_training_symbol_option_pane

0xcd2c,	// (0x000b0991) popup_hwr_training_preview_window_ParamLimits

0xcd2c,	// (0x000b0991) popup_hwr_training_preview_window

0x5377,	// (0x000a8fdc) hwr_training_navi_pane_g5_ParamLimits

0x5377,	// (0x000a8fdc) hwr_training_navi_pane_g5

0xcfa1,	// (0x000b0c06) popup_char_count_window

0x9479,	// (0x000ad0de) bg_popup_sub_pane_cp20_ParamLimits

0x6566,	// (0x000aa1cb) list_vitu2_match_list_pane_ParamLimits

0x6575,	// (0x000aa1da) vitu2_page_scroll_pane_ParamLimits

0x6575,	// (0x000aa1da) vitu2_page_scroll_pane

0xd517,	// (0x000b117c) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd517,	// (0x000b117c) list_single_hwr_training_symbol_option_pane

0xd52a,	// (0x000b118f) list_single_hwr_training_symbol_option_pane_g1

0xd532,	// (0x000b1197) list_single_hwr_training_symbol_option_pane_t1

0xd540,	// (0x000b11a5) bg_button_pane_cp023

0xd549,	// (0x000b11ae) bg_button_pane_cp024

0x6c5e,	// (0x000aa8c3) vitu2_page_scroll_pane_g1

0x6c66,	// (0x000aa8cb) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x000b3744) vitu2_page_scroll_pane_g

0x6c6e,	// (0x000aa8d3) vitu2_page_scroll_pane_t1

0xc4de,	// (0x000b0143) popup_char_count_window_g1

0xd57c,	// (0x000b11e1) popup_char_count_window_g2

0xd585,	// (0x000b11ea) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x000b3749) popup_char_count_window_g

0xd58e,	// (0x000b11f3) popup_char_count_window_t1

0x9487,	// (0x000ad0ec) main_vded2_pane

0xca23,	// (0x000b0688) aid_size_cell_imed_line

0xca2d,	// (0x000b0692) grid_imed_line_width_pane

0x9e29,	// (0x000ada8e) vid4_indicators_pane_g4

0xd59c,	// (0x000b1201) cell_imed_line_width_pane_ParamLimits

0xd59c,	// (0x000b1201) cell_imed_line_width_pane

0xd5b0,	// (0x000b1215) cell_imed_line_width_pane_g1

0xcbbb,	// (0x000b0820) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x000b3750) cell_imed_line_width_pane_g

0x6c7d,	// (0x000aa8e2) main_vded2_pane_g1_ParamLimits

0x6c7d,	// (0x000aa8e2) main_vded2_pane_g1

0x6c93,	// (0x000aa8f8) main_vded2_pane_g2_ParamLimits

0x6c93,	// (0x000aa8f8) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x000b3755) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x000b3755) main_vded2_pane_g

0x6ca5,	// (0x000aa90a) vded2_slider_pane_ParamLimits

0x6ca5,	// (0x000aa90a) vded2_slider_pane

0x6cb5,	// (0x000aa91a) aid_size_touch_vded2_end

0x6cbf,	// (0x000aa924) aid_size_touch_vded2_playhead

0xd5b9,	// (0x000b121e) aid_size_touch_vded2_start

0xd5c1,	// (0x000b1226) vded2_slider_bg_pane

0xd5ca,	// (0x000b122f) vded2_slider_pane_g1

0xd5d3,	// (0x000b1238) vded2_slider_pane_g2

0x6cc9,	// (0x000aa92e) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x000b375a) vded2_slider_pane_g

0xd5db,	// (0x000b1240) vded2_slider_bg_pane_g1

0xd5e4,	// (0x000b1249) vded2_slider_bg_pane_g2

0xd5ed,	// (0x000b1252) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x000b3761) vded2_slider_bg_pane_g

0x2d68,	// (0x000a69cd) aid_postcard_touch_down_pane_ParamLimits

0x2d68,	// (0x000a69cd) aid_postcard_touch_down_pane

0x2d7e,	// (0x000a69e3) aid_postcard_touch_up_pane_ParamLimits

0x2d7e,	// (0x000a69e3) aid_postcard_touch_up_pane

0x9487,	// (0x000ad0ec) main_blid2_pane

0x99dd,	// (0x000ad642) popup_blid2_search_window

0xe1c3,	// (0x000b1e28) blid2_gps_pane

0xe1c3,	// (0x000b1e28) blid2_navig_pane

0xe1c3,	// (0x000b1e28) blid2_search_pane

0xe1c3,	// (0x000b1e28) blid2_tripm_pane

0x6cd4,	// (0x000aa939) blid2_search_pane_g1_ParamLimits

0x6cd4,	// (0x000aa939) blid2_search_pane_g1

0x6cec,	// (0x000aa951) blid2_search_pane_t1_ParamLimits

0x6cec,	// (0x000aa951) blid2_search_pane_t1

0x6cfe,	// (0x000aa963) aid_size_cell_blid2_gps_ParamLimits

0x6cfe,	// (0x000aa963) aid_size_cell_blid2_gps

0x6d16,	// (0x000aa97b) blid2_gps_pane_g1_ParamLimits

0x6d16,	// (0x000aa97b) blid2_gps_pane_g1

0x6d2a,	// (0x000aa98f) grid_blid2_satellite_pane_ParamLimits

0x6d2a,	// (0x000aa98f) grid_blid2_satellite_pane

0x6d44,	// (0x000aa9a9) blid2_navig_pane_g1_ParamLimits

0x6d44,	// (0x000aa9a9) blid2_navig_pane_g1

0x6d50,	// (0x000aa9b5) blid2_navig_pane_t1_ParamLimits

0x6d50,	// (0x000aa9b5) blid2_navig_pane_t1

0x6d6b,	// (0x000aa9d0) blid2_navig_pane_t2_ParamLimits

0x6d6b,	// (0x000aa9d0) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x000b3768) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x000b3768) blid2_navig_pane_t

0x6d86,	// (0x000aa9eb) blid2_navig_ring_pane_ParamLimits

0x6d86,	// (0x000aa9eb) blid2_navig_ring_pane

0x6d9f,	// (0x000aaa04) blid2_speed_pane_ParamLimits

0x6d9f,	// (0x000aaa04) blid2_speed_pane

0x6dab,	// (0x000aaa10) blid2_tripm_pane_g1_ParamLimits

0x6dab,	// (0x000aaa10) blid2_tripm_pane_g1

0x6dc6,	// (0x000aaa2b) blid2_tripm_pane_g2_ParamLimits

0x6dc6,	// (0x000aaa2b) blid2_tripm_pane_g2

0x6dda,	// (0x000aaa3f) blid2_tripm_pane_g3_ParamLimits

0x6dda,	// (0x000aaa3f) blid2_tripm_pane_g3

0x6dee,	// (0x000aaa53) blid2_tripm_pane_g4_ParamLimits

0x6dee,	// (0x000aaa53) blid2_tripm_pane_g4

0x6e02,	// (0x000aaa67) blid2_tripm_pane_g5_ParamLimits

0x6e02,	// (0x000aaa67) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x000b376d) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x000b376d) blid2_tripm_pane_g

0x6e28,	// (0x000aaa8d) blid2_tripm_pane_t1_ParamLimits

0x6e28,	// (0x000aaa8d) blid2_tripm_pane_t1

0x6e43,	// (0x000aaaa8) blid2_tripm_pane_t2_ParamLimits

0x6e43,	// (0x000aaaa8) blid2_tripm_pane_t2

0x6e5c,	// (0x000aaac1) blid2_tripm_pane_t3_ParamLimits

0x6e5c,	// (0x000aaac1) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x000b377a) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x000b377a) blid2_tripm_pane_t

0x6ea3,	// (0x000aab08) cell_blid2_satellite_pane_ParamLimits

0x6ea3,	// (0x000aab08) cell_blid2_satellite_pane

0x6ec1,	// (0x000aab26) cell_blid2_satellite_pane_g1

0xd5f6,	// (0x000b125b) cell_blid2_satellite_pane_t1

0xc4b5,	// (0x000b011a) blid2_speed_pane_g1

0xd604,	// (0x000b1269) blid2_speed_pane_t1

0xd612,	// (0x000b1277) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x000b3783) blid2_speed_pane_t

0xc4b5,	// (0x000b011a) blid2_navig_ring_pane_g1

0x6eca,	// (0x000aab2f) blid2_navig_ring_pane_g2

0x6ed2,	// (0x000aab37) blid2_navig_ring_pane_g3

0x6eda,	// (0x000aab3f) blid2_navig_ring_pane_g4

0x6ee2,	// (0x000aab47) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x000b3788) blid2_navig_ring_pane_g

0xe1c3,	// (0x000b1e28) bg_popup_window_pane_cp011

0xd620,	// (0x000b1285) popup_blid2_search_window_g1

0xd628,	// (0x000b128d) popup_blid2_search_window_t1

0xd636,	// (0x000b129b) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x000b3793) popup_blid2_search_window_t

0xa2a7,	// (0x000adf0c) main_browser_pane_g1

0x9f88,	// (0x000adbed) main_browser_pane_ParamLimits

0x9479,	// (0x000ad0de) bg_button_pane_cp011_ParamLimits

0x5df7,	// (0x000a9a5c) cell_vitu2_function_pane_g1_ParamLimits

0xc0a4,	// (0x000afd09) bg_popup_sub_pane_cp22_ParamLimits

0x6754,	// (0x000aa3b9) input_focus_pane_cp08_ParamLimits

0x676b,	// (0x000aa3d0) popup_vitu2_query_button_pane_ParamLimits

0x676b,	// (0x000aa3d0) popup_vitu2_query_button_pane

0x677c,	// (0x000aa3e1) popup_vitu2_query_input_button_pane

0xd22a,	// (0x000b0e8f) popup_vitu2_query_window_g1_ParamLimits

0x6786,	// (0x000aa3eb) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x000b3694) popup_vitu2_query_window_g_ParamLimits

0xe1c3,	// (0x000b1e28) bg_button_pane_cp026

0x6eea,	// (0x000aab4f) popup_vitu2_query_input_button_pane_g1

0xe1c3,	// (0x000b1e28) bg_button_pane_cp025

0xd644,	// (0x000b12a9) popup_vitu2_query_button_pane_t1

0x4411,	// (0x000a8076) main_mp3_pane_t6

0x441f,	// (0x000a8084) popup_slider_window_cp01

0x9d95,	// (0x000ad9fa) cam4_battery_pane

0x9de8,	// (0x000ada4d) cam4_battery_pane_cp02

0x9eed,	// (0x000adb52) cam4_battery_pane_cp01

0x9eed,	// (0x000adb52) cam4_battery_pane_cp03

0xce2a,	// (0x000b0a8f) cam4_battery_pane_g1

0xc4b5,	// (0x000b011a) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x000b3798) cam4_battery_pane_g

0xc381,	// (0x000affe6) popup_blid_sat_info2_window_t11

0xa9d5,	// (0x000ae63a) aid_size_touch_mv_arrow_left_ParamLimits

0xaa00,	// (0x000ae665) aid_size_touch_mv_arrow_right_ParamLimits

0xaa6c,	// (0x000ae6d1) navi_pane_g1_ParamLimits

0xaa78,	// (0x000ae6dd) navi_pane_g2_ParamLimits

0xaaa6,	// (0x000ae70b) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000b304a) navi_pane_g_ParamLimits

0x2819,	// (0x000a647e) navi_pane_mv_t1_ParamLimits

0x504e,	// (0x000a8cb3) grid_imed_effect_pane_ParamLimits

0x1631,	// (0x000a5296) aid_placing_vt_slider_lsc

0xa1f6,	// (0x000ade5b) aid_placing_vt_slider_prt

0xe200,	// (0x000b1e65) bg_tb_trans_pane_cp01_ParamLimits

0xc623,	// (0x000b0288) popup_image_details_window_g1_ParamLimits

0xc636,	// (0x000b029b) popup_image_details_window_g2_ParamLimits

0xc64b,	// (0x000b02b0) popup_image_details_window_g3_ParamLimits

0xc64b,	// (0x000b02b0) popup_image_details_window_g3

0xf72b,	// (0x000b3390) popup_image_details_window_g_ParamLimits

0xc65f,	// (0x000b02c4) popup_image_details_window_t1_ParamLimits

0xc671,	// (0x000b02d6) popup_image_details_window_t2_ParamLimits

0xc68a,	// (0x000b02ef) popup_image_details_window_t3_ParamLimits

0xc69e,	// (0x000b0303) popup_image_details_window_t4_ParamLimits

0xc6b9,	// (0x000b031e) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x000b3397) popup_image_details_window_t_ParamLimits

0x6afa,	// (0x000aa75f) cl_header_name_pane_ParamLimits

0x6afa,	// (0x000aa75f) cl_header_name_pane

0x6ef2,	// (0x000aab57) cl_header_name_pane_t1_ParamLimits

0x6ef2,	// (0x000aab57) cl_header_name_pane_t1

0x6f13,	// (0x000aab78) cl_header_name_pane_t2_ParamLimits

0x6f13,	// (0x000aab78) cl_header_name_pane_t2

0x6f55,	// (0x000aabba) cl_header_name_pane_t3_ParamLimits

0x6f55,	// (0x000aabba) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x000b379d) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x000b379d) cl_header_name_pane_t

0xab35,	// (0x000ae79a) navi_pane_mv_g2_ParamLimits

0xcf5e,	// (0x000b0bc3) field_vitu2_entry_pane_g1_ParamLimits

0xcf6a,	// (0x000b0bcf) field_vitu2_entry_pane_g2_ParamLimits

0xcf76,	// (0x000b0bdb) field_vitu2_entry_pane_g3_ParamLimits

0xcf76,	// (0x000b0bdb) field_vitu2_entry_pane_g3

0xf92e,	// (0x000b3593) field_vitu2_entry_pane_g_ParamLimits

0x9e5c,	// (0x000adac1) cell_vitu2_itu_pane_g1_ParamLimits

0x5d8b,	// (0x000a99f0) cell_vitu2_itu_pane_g2_ParamLimits

0x5d8b,	// (0x000a99f0) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x000b359f) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x000b359f) cell_vitu2_itu_pane_g

0x9479,	// (0x000ad0de) bg_vkb2_func_pane_cp05_ParamLimits

0x9479,	// (0x000ad0de) bg_vkb2_func_pane_cp05

0x9479,	// (0x000ad0de) bg_vkb2_func_pane_cp03

0x9479,	// (0x000ad0de) bg_vkb2_func_pane_cp04

0x9479,	// (0x000ad0de) bg_vkb2_func_pane_cp10_ParamLimits

0x9479,	// (0x000ad0de) bg_vkb2_func_pane_cp10

0x6a9c,	// (0x000aa701) bg_vkb2_func_pane_cp08

0x6a82,	// (0x000aa6e7) bg_vkb2_func_pane_cp06

0x6a90,	// (0x000aa6f5) bg_vkb2_func_pane_cp07

0xd552,	// (0x000b11b7) bg_vkb2_func_pane_cp11_ParamLimits

0xd552,	// (0x000b11b7) bg_vkb2_func_pane_cp11

0xd567,	// (0x000b11cc) bg_vkb2_func_pane_cp12_ParamLimits

0xd567,	// (0x000b11cc) bg_vkb2_func_pane_cp12

0xe1c3,	// (0x000b1e28) bg_vkb2_func_pane_cp09

0xcfb3,	// (0x000b0c18) bg_vkb2_func_pane_g1

0xa3b8,	// (0x000ae01d) bg_vkb2_func_pane_g2

0xcfbb,	// (0x000b0c20) bg_vkb2_func_pane_g3

0xcfc3,	// (0x000b0c28) bg_vkb2_func_pane_g4

0xd1ef,	// (0x000b0e54) bg_vkb2_func_pane_g5

0xcfdb,	// (0x000b0c40) bg_vkb2_func_pane_g6

0xcfe3,	// (0x000b0c48) bg_vkb2_func_pane_g7

0xcfd3,	// (0x000b0c38) bg_vkb2_func_pane_g8

0xa398,	// (0x000adffd) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x000b37a4) bg_vkb2_func_pane_g

0x6e16,	// (0x000aaa7b) blid2_tripm_pane_g6_ParamLimits

0x6e16,	// (0x000aaa7b) blid2_tripm_pane_g6

0xcde4,	// (0x000b0a49) mp4_progress_pane_g1

0x6e8f,	// (0x000aaaf4) blid2_tripm_values_pane_ParamLimits

0x6e8f,	// (0x000aaaf4) blid2_tripm_values_pane

0x6f86,	// (0x000aabeb) blid2_tripm_values_pane_t1

0x6f94,	// (0x000aabf9) blid2_tripm_values_pane_t2

0x6fa2,	// (0x000aac07) blid2_tripm_values_pane_t3

0x6fb0,	// (0x000aac15) blid2_tripm_values_pane_t4

0x6fbe,	// (0x000aac23) blid2_tripm_values_pane_t5

0x6fcc,	// (0x000aac31) blid2_tripm_values_pane_t6

0x6fda,	// (0x000aac3f) blid2_tripm_values_pane_t7

0x6fe8,	// (0x000aac4d) blid2_tripm_values_pane_t8

0x6ff6,	// (0x000aac5b) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x000b37b7) blid2_tripm_values_pane_t

0x1673,	// (0x000a52d8) call_video_pane_t1_ParamLimits

0x1691,	// (0x000a52f6) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000b2ed3) call_video_pane_t_ParamLimits

0x2ce6,	// (0x000a694b) msg_header_pane_g1_ParamLimits

0xad0f,	// (0x000ae974) msg_header_pane_g2_ParamLimits

0xad0f,	// (0x000ae974) msg_header_pane_g2

0x0001,

0xf488,	// (0x000b30ed) msg_header_pane_g_ParamLimits

0xf488,	// (0x000b30ed) msg_header_pane_g

0x9f88,	// (0x000adbed) main_clock2_pane_ParamLimits

0x4d47,	// (0x000a89ac) grid_clock2_toolbar_pane_ParamLimits

0x4d47,	// (0x000a89ac) grid_clock2_toolbar_pane

0x4d47,	// (0x000a89ac) listscroll_clock2_pane_ParamLimits

0x4d47,	// (0x000a89ac) listscroll_clock2_pane

0x4e43,	// (0x000a8aa8) main_clock2_pane_t3_ParamLimits

0x4e43,	// (0x000a8aa8) main_clock2_pane_t3

0x4e67,	// (0x000a8acc) main_clock2_pane_t4_ParamLimits

0x4e67,	// (0x000a8acc) main_clock2_pane_t4

0xd652,	// (0x000b12b7) cell_clock2_toolbar_pane

0xd65a,	// (0x000b12bf) cell_clock2_toolbar_pane_cp01

0xd65a,	// (0x000b12bf) cell_clock2_toolbar_pane_cp02

0xd662,	// (0x000b12c7) cell_clock2_toolbar_pane_cp03

0xd66a,	// (0x000b12cf) list_clock2_pane

0xa95a,	// (0x000ae5bf) scroll_pane_cp10

0xd672,	// (0x000b12d7) list_single_clock2_pane_ParamLimits

0xd672,	// (0x000b12d7) list_single_clock2_pane

0xa15f,	// (0x000addc4) list_highlight_pane_cp08

0xd67f,	// (0x000b12e4) list_single_clock2_pane_t1

0xd68d,	// (0x000b12f2) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x000b37ca) list_single_clock2_pane_t

0xe1c3,	// (0x000b1e28) bg_button_pane_cp10

0xd6bb,	// (0x000b1320) cell_clock2_toolbar_pane_g1

0x2cf4,	// (0x000a6959) aid_main_viewer_pane_g1_ParamLimits

0x2cf4,	// (0x000a6959) aid_main_viewer_pane_g1

0x2d02,	// (0x000a6967) aid_main_viewer_pane_g2_ParamLimits

0x2d02,	// (0x000a6967) aid_main_viewer_pane_g2

0x2d10,	// (0x000a6975) aid_main_viewer_pane_g3_ParamLimits

0x2d10,	// (0x000a6975) aid_main_viewer_pane_g3

0x2d1f,	// (0x000a6984) aid_main_viewer_pane_g4_ParamLimits

0x2d1f,	// (0x000a6984) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000b30fe) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000b30fe) aid_main_viewer_pane_g

0x3627,	// (0x000a728c) main_calc_pane_ParamLimits

0x364d,	// (0x000a72b2) main_dialer2_pane_ParamLimits

0x9487,	// (0x000ad0ec) main_cam6_pane

0x9487,	// (0x000ad0ec) main_vid6_pane

0x4d53,	// (0x000a89b8) listscroll_gen_pane_cp06_ParamLimits

0x4d53,	// (0x000a89b8) listscroll_gen_pane_cp06

0x4e8a,	// (0x000a8aef) main_clock2_pane_t5_ParamLimits

0x4e8a,	// (0x000a8aef) main_clock2_pane_t5

0x4ee4,	// (0x000a8b49) aid_call2_pane_cp10_ParamLimits

0x4ef6,	// (0x000a8b5b) aid_call_pane_cp10_ParamLimits

0xa9c9,	// (0x000ae62e) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa9c9,	// (0x000ae62e) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4f08,	// (0x000a8b6d) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4f08,	// (0x000a8b6d) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa9c9,	// (0x000ae62e) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x000b344c) popup_clock_analogue_window_cp10_g_ParamLimits

0x4f1a,	// (0x000a8b7f) popup_clock_analogue_window_cp10_t1_ParamLimits

0x558d,	// (0x000a91f2) cell_dialer2_keypad_pane_g2_ParamLimits

0x558d,	// (0x000a91f2) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x000b3532) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x000b3532) cell_dialer2_keypad_pane_g

0x55a9,	// (0x000a920e) cell_dialer2_keypad_pane_t1

0x6111,	// (0x000a9d76) main_cset_text2_pane_ParamLimits

0x6111,	// (0x000a9d76) main_cset_text2_pane

0xd416,	// (0x000b107b) area_vitu2_query_pane_g1_ParamLimits

0x6a21,	// (0x000aa686) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x000b36e7) area_vitu2_query_pane_g_ParamLimits

0xd49a,	// (0x000b10ff) area_vitu2_query_pane_t7_ParamLimits

0xd49a,	// (0x000b10ff) area_vitu2_query_pane_t7

0x6a82,	// (0x000aa6e7) bg_button_pane_cp018_ParamLimits

0x6a90,	// (0x000aa6f5) bg_button_pane_cp021_ParamLimits

0x6a9c,	// (0x000aa701) bg_button_pane_cp022_ParamLimits

0x6a9c,	// (0x000aa701) bg_vkb2_func_pane_cp08_ParamLimits

0x6a82,	// (0x000aa6e7) bg_vkb2_func_pane_cp06_ParamLimits

0x6a90,	// (0x000aa6f5) bg_vkb2_func_pane_cp07_ParamLimits

0x6aad,	// (0x000aa712) input_focus_pane_cp09_ParamLimits

0x9f58,	// (0x000adbbd) cam6_autofocus_pane_ParamLimits

0x9f58,	// (0x000adbbd) cam6_autofocus_pane

0x7004,	// (0x000aac69) cam6_image_uncrop_pane_ParamLimits

0x7004,	// (0x000aac69) cam6_image_uncrop_pane

0x7013,	// (0x000aac78) cam6_indi_pane_ParamLimits

0x7013,	// (0x000aac78) cam6_indi_pane

0x7029,	// (0x000aac8e) cam6_mode_pane_ParamLimits

0x7029,	// (0x000aac8e) cam6_mode_pane

0x703b,	// (0x000aaca0) cam6_timer_pane_ParamLimits

0x703b,	// (0x000aaca0) cam6_timer_pane

0x704b,	// (0x000aacb0) cam6_zoom_pane_ParamLimits

0x704b,	// (0x000aacb0) cam6_zoom_pane

0x7057,	// (0x000aacbc) cam6_mode_pane_g1_ParamLimits

0x7057,	// (0x000aacbc) cam6_mode_pane_g1

0x7067,	// (0x000aaccc) cam6_mode_pane_g2_ParamLimits

0x7067,	// (0x000aaccc) cam6_mode_pane_g2

0x7077,	// (0x000aacdc) cam6_mode_pane_g3_ParamLimits

0x7077,	// (0x000aacdc) cam6_mode_pane_g3

0x7087,	// (0x000aacec) cam6_mode_pane_g4_ParamLimits

0x7087,	// (0x000aacec) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x000b37cf) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x000b37cf) cam6_mode_pane_g

0xd69b,	// (0x000b1300) bg_tb_trans_pane_cp08_ParamLimits

0xd69b,	// (0x000b1300) bg_tb_trans_pane_cp08

0xd6c3,	// (0x000b1328) cam6_battery_pane_ParamLimits

0xd6c3,	// (0x000b1328) cam6_battery_pane

0xd6d9,	// (0x000b133e) cam6_indi_pane_g1_ParamLimits

0xd6d9,	// (0x000b133e) cam6_indi_pane_g1

0xd6eb,	// (0x000b1350) cam6_indi_pane_g2_ParamLimits

0xd6eb,	// (0x000b1350) cam6_indi_pane_g2

0xd6fd,	// (0x000b1362) cam6_indi_pane_g3_ParamLimits

0xd6fd,	// (0x000b1362) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x000b37d8) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x000b37d8) cam6_indi_pane_g

0xd70f,	// (0x000b1374) cam6_indi_pane_t1_ParamLimits

0xd70f,	// (0x000b1374) cam6_indi_pane_t1

0x7097,	// (0x000aacfc) cam6_autofocus_pane_g1

0x709f,	// (0x000aad04) cam6_autofocus_pane_g2

0x70a7,	// (0x000aad0c) cam6_autofocus_pane_g3

0x70af,	// (0x000aad14) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x000b37df) cam6_autofocus_pane_g

0xd735,	// (0x000b139a) cam6_timer_pane_g1

0xd73d,	// (0x000b13a2) cam6_timer_pane_t1

0xd74b,	// (0x000b13b0) cam6_zoom_cont_pane

0xd753,	// (0x000b13b8) cam6_zoom_pane_g1

0xd75b,	// (0x000b13c0) cam6_zoom_pane_g2

0x70b7,	// (0x000aad1c) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x000b37e8) cam6_zoom_pane_g

0xc4b5,	// (0x000b011a) cam6_battery_pane_g1

0xc4b5,	// (0x000b011a) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x000b3354) cam6_battery_pane_g

0xd763,	// (0x000b13c8) cam6_zoom_cont_pane_g1

0xd76c,	// (0x000b13d1) cam6_zoom_cont_pane_g2

0xd775,	// (0x000b13da) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x000b37ef) cam6_zoom_cont_pane_g

0x70d4,	// (0x000aad39) cam6_mode_pane_cp_ParamLimits

0x70d4,	// (0x000aad39) cam6_mode_pane_cp

0x70e6,	// (0x000aad4b) cam6_zoom_pane_cp_ParamLimits

0x70e6,	// (0x000aad4b) cam6_zoom_pane_cp

0x70f2,	// (0x000aad57) vid6_image_uncrop_cif_pane_ParamLimits

0x70f2,	// (0x000aad57) vid6_image_uncrop_cif_pane

0x7102,	// (0x000aad67) vid6_image_uncrop_nhd_pane_ParamLimits

0x7102,	// (0x000aad67) vid6_image_uncrop_nhd_pane

0x7111,	// (0x000aad76) vid6_image_uncrop_vga_pane_ParamLimits

0x7111,	// (0x000aad76) vid6_image_uncrop_vga_pane

0x7120,	// (0x000aad85) vid6_image_uncrop_wvga_pane_ParamLimits

0x7120,	// (0x000aad85) vid6_image_uncrop_wvga_pane

0x712f,	// (0x000aad94) vid6_indi_pane_ParamLimits

0x712f,	// (0x000aad94) vid6_indi_pane

0xd69b,	// (0x000b1300) bg_tb_trans_pane_cp09_ParamLimits

0xd69b,	// (0x000b1300) bg_tb_trans_pane_cp09

0xd78d,	// (0x000b13f2) cam6_battery_pane_cp_ParamLimits

0xd78d,	// (0x000b13f2) cam6_battery_pane_cp

0xd799,	// (0x000b13fe) vid6_indi_pane_g1_ParamLimits

0xd799,	// (0x000b13fe) vid6_indi_pane_g1

0xd7ab,	// (0x000b1410) vid6_indi_pane_g2_ParamLimits

0xd7ab,	// (0x000b1410) vid6_indi_pane_g2

0xd7bd,	// (0x000b1422) vid6_indi_pane_g3_ParamLimits

0xd7bd,	// (0x000b1422) vid6_indi_pane_g3

0xd7d2,	// (0x000b1437) vid6_indi_pane_g4_ParamLimits

0xd7d2,	// (0x000b1437) vid6_indi_pane_g4

0xd7e7,	// (0x000b144c) vid6_indi_pane_g5_ParamLimits

0xd7e7,	// (0x000b144c) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x000b37f6) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x000b37f6) vid6_indi_pane_g

0xd801,	// (0x000b1466) vid6_indi_pane_t1_ParamLimits

0xd801,	// (0x000b1466) vid6_indi_pane_t1

0xd817,	// (0x000b147c) vid6_indi_pane_t2_ParamLimits

0xd817,	// (0x000b147c) vid6_indi_pane_t2

0xd83f,	// (0x000b14a4) vid6_indi_pane_t3_ParamLimits

0xd83f,	// (0x000b14a4) vid6_indi_pane_t3

0xd867,	// (0x000b14cc) vid6_indi_pane_t4_ParamLimits

0xd867,	// (0x000b14cc) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x000b3801) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x000b3801) vid6_indi_pane_t

0xd88b,	// (0x000b14f0) wait_bar_pane_cp08

0x7147,	// (0x000aadac) main_cset_text2_pane_t1_ParamLimits

0x7147,	// (0x000aadac) main_cset_text2_pane_t1

0x70bf,	// (0x000aad24) listscroll_gen_pane_cp06_t1_ParamLimits

0x70bf,	// (0x000aad24) listscroll_gen_pane_cp06_t1

0x9487,	// (0x000ad0ec) main_cam6_set_pane

0x9d87,	// (0x000ad9ec) bg_tb_trans_pane_cp06_ParamLimits

0x9d9d,	// (0x000ada02) cam4_indicators_pane_g1_ParamLimits

0x9dae,	// (0x000ada13) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x000b356f) cam4_indicators_pane_g_ParamLimits

0x9dc6,	// (0x000ada2b) cam4_indicators_pane_t1_ParamLimits

0x9479,	// (0x000ad0de) bg_tb_trans_pane_cp07_ParamLimits

0x9df0,	// (0x000ada55) vid4_indicators_pane_g1_ParamLimits

0x9e04,	// (0x000ada69) vid4_indicators_pane_g2_ParamLimits

0x9e18,	// (0x000ada7d) vid4_indicators_pane_g3_ParamLimits

0x9e29,	// (0x000ada8e) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x000b3581) vid4_indicators_pane_g_ParamLimits

0x9e45,	// (0x000adaaa) vid4_indicators_pane_t1_ParamLimits

0x9ef5,	// (0x000adb5a) vid4_progress_pane_g1_ParamLimits

0x9f05,	// (0x000adb6a) vid4_progress_pane_g2_ParamLimits

0x6bed,	// (0x000aa852) vid4_progress_pane_g3_ParamLimits

0x9f15,	// (0x000adb7a) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x000b3732) vid4_progress_pane_g_ParamLimits

0x6bff,	// (0x000aa864) vid4_progress_pane_t1_ParamLimits

0x9f2d,	// (0x000adb92) vid4_progress_pane_t2_ParamLimits

0x9f42,	// (0x000adba7) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x000b373d) vid4_progress_pane_t_ParamLimits

0x6c15,	// (0x000aa87a) wait_bar_pane_cp07_ParamLimits

0x7165,	// (0x000aadca) main_cam6_set_pane_g2_ParamLimits

0x7165,	// (0x000aadca) main_cam6_set_pane_g2

0x7189,	// (0x000aadee) main_cset6_listscroll_pane_ParamLimits

0x7189,	// (0x000aadee) main_cset6_listscroll_pane

0x71a5,	// (0x000aae0a) main_cset6_slider_pane_ParamLimits

0x71a5,	// (0x000aae0a) main_cset6_slider_pane

0x71bb,	// (0x000aae20) main_cset6_text2_pane_ParamLimits

0x71bb,	// (0x000aae20) main_cset6_text2_pane

0xd89a,	// (0x000b14ff) main_cset6_text_pane

0xd8a2,	// (0x000b1507) main_cset_list_pane_copy1_ParamLimits

0xd8a2,	// (0x000b1507) main_cset_list_pane_copy1

0xd8b2,	// (0x000b1517) scroll_pane_cp028_copy1

0x71c9,	// (0x000aae2e) cset_list_set_pane_copy1

0x71db,	// (0x000aae40) aid_position_infowindow_above_copy1

0x71e3,	// (0x000aae48) aid_position_infowindow_below_copy1

0xeff4,	// (0x000b2c59) cset_list_set_pane_g1_copy1

0xd8bb,	// (0x000b1520) cset_list_set_pane_g3_copy1_ParamLimits

0xd8bb,	// (0x000b1520) cset_list_set_pane_g3_copy1

0xd8ca,	// (0x000b152f) cset_list_set_pane_t1_copy1_ParamLimits

0xd8ca,	// (0x000b152f) cset_list_set_pane_t1_copy1

0xe200,	// (0x000b1e65) list_highlight_pane_cp021_copy1_ParamLimits

0xe200,	// (0x000b1e65) list_highlight_pane_cp021_copy1

0xd8df,	// (0x000b1544) cset6_slider_pane_ParamLimits

0xd8df,	// (0x000b1544) cset6_slider_pane

0xd90b,	// (0x000b1570) main_cset6_slider_pane_g1_ParamLimits

0xd90b,	// (0x000b1570) main_cset6_slider_pane_g1

0x71eb,	// (0x000aae50) main_cset6_slider_pane_g2_ParamLimits

0x71eb,	// (0x000aae50) main_cset6_slider_pane_g2

0xd933,	// (0x000b1598) main_cset6_slider_pane_g3_ParamLimits

0xd933,	// (0x000b1598) main_cset6_slider_pane_g3

0x7213,	// (0x000aae78) main_cset6_slider_pane_g4_ParamLimits

0x7213,	// (0x000aae78) main_cset6_slider_pane_g4

0xd93f,	// (0x000b15a4) main_cset6_slider_pane_g5_ParamLimits

0xd93f,	// (0x000b15a4) main_cset6_slider_pane_g5

0xd0e2,	// (0x000b0d47) main_cset6_slider_pane_g7_ParamLimits

0xd0e2,	// (0x000b0d47) main_cset6_slider_pane_g7

0xd0ee,	// (0x000b0d53) main_cset6_slider_pane_g8_ParamLimits

0xd0ee,	// (0x000b0d53) main_cset6_slider_pane_g8

0x61be,	// (0x000a9e23) main_cset6_slider_pane_g9_ParamLimits

0x61be,	// (0x000a9e23) main_cset6_slider_pane_g9

0x61ca,	// (0x000a9e2f) main_cset6_slider_pane_g10_ParamLimits

0x61ca,	// (0x000a9e2f) main_cset6_slider_pane_g10

0x61d6,	// (0x000a9e3b) main_cset6_slider_pane_g11_ParamLimits

0x61d6,	// (0x000a9e3b) main_cset6_slider_pane_g11

0x61e2,	// (0x000a9e47) main_cset6_slider_pane_g12_ParamLimits

0x61e2,	// (0x000a9e47) main_cset6_slider_pane_g12

0x61ee,	// (0x000a9e53) main_cset6_slider_pane_g13_ParamLimits

0x61ee,	// (0x000a9e53) main_cset6_slider_pane_g13

0x61fa,	// (0x000a9e5f) main_cset6_slider_pane_g14_ParamLimits

0x61fa,	// (0x000a9e5f) main_cset6_slider_pane_g14

0x721f,	// (0x000aae84) main_cset6_slider_pane_g15_ParamLimits

0x721f,	// (0x000aae84) main_cset6_slider_pane_g15

0xd0fa,	// (0x000b0d5f) main_cset6_slider_pane_g16_ParamLimits

0xd0fa,	// (0x000b0d5f) main_cset6_slider_pane_g16

0xd106,	// (0x000b0d6b) main_cset6_slider_pane_g17_ParamLimits

0xd106,	// (0x000b0d6b) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x000b380a) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x000b380a) main_cset6_slider_pane_g

0xd94b,	// (0x000b15b0) main_cset6_slider_pane_t1_ParamLimits

0xd94b,	// (0x000b15b0) main_cset6_slider_pane_t1

0x724f,	// (0x000aaeb4) main_cset6_slider_pane_t2_ParamLimits

0x724f,	// (0x000aaeb4) main_cset6_slider_pane_t2

0x727a,	// (0x000aaedf) main_cset6_slider_pane_t3_ParamLimits

0x727a,	// (0x000aaedf) main_cset6_slider_pane_t3

0x72a5,	// (0x000aaf0a) main_cset6_slider_pane_t4_ParamLimits

0x72a5,	// (0x000aaf0a) main_cset6_slider_pane_t4

0x72d0,	// (0x000aaf35) main_cset6_slider_pane_t5_ParamLimits

0x72d0,	// (0x000aaf35) main_cset6_slider_pane_t5

0xd98c,	// (0x000b15f1) main_cset6_slider_pane_t7_ParamLimits

0xd98c,	// (0x000b15f1) main_cset6_slider_pane_t7

0x72fb,	// (0x000aaf60) main_cset6_slider_pane_t8_ParamLimits

0x72fb,	// (0x000aaf60) main_cset6_slider_pane_t8

0x731f,	// (0x000aaf84) main_cset6_slider_pane_t9_ParamLimits

0x731f,	// (0x000aaf84) main_cset6_slider_pane_t9

0x7343,	// (0x000aafa8) main_cset6_slider_pane_t10_ParamLimits

0x7343,	// (0x000aafa8) main_cset6_slider_pane_t10

0x7367,	// (0x000aafcc) main_cset6_slider_pane_t11_ParamLimits

0x7367,	// (0x000aafcc) main_cset6_slider_pane_t11

0xd9c2,	// (0x000b1627) main_cset6_slider_pane_t14_ParamLimits

0xd9c2,	// (0x000b1627) main_cset6_slider_pane_t14

0xd9fb,	// (0x000b1660) main_cset6_slider_pane_t15_ParamLimits

0xd9fb,	// (0x000b1660) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x000b382f) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x000b382f) main_cset6_slider_pane_t

0xcd01,	// (0x000b0966) cset_slider_pane_g1_copy1

0xd6a9,	// (0x000b130e) cset_slider_pane_g2_copy1

0xd6b2,	// (0x000b1317) cset_slider_pane_g3_copy1

0xe1c3,	// (0x000b1e28) bg_popup_sub_pane_cp011_copy1

0xda34,	// (0x000b1699) main_cset_text_pane_g1_copy1

0xd23e,	// (0x000b0ea3) main_cset_text_pane_t1_copy1

0xd24c,	// (0x000b0eb1) main_cset_text_pane_t2_copy1

0xd25a,	// (0x000b0ebf) main_cset_text_pane_t3_copy1

0xd268,	// (0x000b0ecd) main_cset_text_pane_t4_copy1

0xd276,	// (0x000b0edb) main_cset_text_pane_t5_copy1

0xda3c,	// (0x000b16a1) main_cset_text_pane_t6_copy1

0xda4a,	// (0x000b16af) main_cset_text_pane_t7_copy1

0x7147,	// (0x000aadac) main_cset_text2_pane_t1_copy1

0x9479,	// (0x000ad0de) main_ncimui_pane

0x3891,	// (0x000a74f6) popup_query_ncimui_window_ParamLimits

0x3891,	// (0x000a74f6) popup_query_ncimui_window

0xc7a4,	// (0x000b0409) field_cale_ev2_pane_g4_ParamLimits

0xc7a4,	// (0x000b0409) field_cale_ev2_pane_g4

0x546c,	// (0x000a90d1) cell_video_dialer_keypad_pane_g2_ParamLimits

0x546c,	// (0x000a90d1) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x000b350d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x000b350d) cell_video_dialer_keypad_pane_g

0x5484,	// (0x000a90e9) cell_video_dialer_keypad_pane_t1

0xe1c3,	// (0x000b1e28) bg_popup_window_pane_cp012

0xa845,	// (0x000ae4aa) heading_pane_cp06

0xda76,	// (0x000b16db) ncim_query_content_pane

0xe1c3,	// (0x000b1e28) bg_popup_heading_pane_cp01

0xda7e,	// (0x000b16e3) ncim_heading_pane_t1

0xda8c,	// (0x000b16f1) ncim_indicator_popup_pane

0xda9e,	// (0x000b1703) ncim_query_button_pane

0xdab2,	// (0x000b1717) ncim_query_content_pane_t1

0xdac4,	// (0x000b1729) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x000b3873) ncim_query_content_pane_t

0xdafe,	// (0x000b1763) ncim_query_list_pane

0xdb10,	// (0x000b1775) ncim_query_popup_pane

0xda8c,	// (0x000b16f1) ncim_indicator_popup_pane_ParamLimits

0x7583,	// (0x000ab1e8) ncim_query_content_pane_g1_ParamLimits

0x7583,	// (0x000ab1e8) ncim_query_content_pane_g1

0xdab2,	// (0x000b1717) ncim_query_content_pane_t1_ParamLimits

0xdac4,	// (0x000b1729) ncim_query_content_pane_t2_ParamLimits

0x758f,	// (0x000ab1f4) ncim_query_content_pane_t3_ParamLimits

0x758f,	// (0x000ab1f4) ncim_query_content_pane_t3

0x75b7,	// (0x000ab21c) ncim_query_content_pane_t4_ParamLimits

0x75b7,	// (0x000ab21c) ncim_query_content_pane_t4

0x75df,	// (0x000ab244) ncim_query_content_pane_t5_ParamLimits

0x75df,	// (0x000ab244) ncim_query_content_pane_t5

0xdad6,	// (0x000b173b) ncim_query_content_pane_t6_ParamLimits

0xdad6,	// (0x000b173b) ncim_query_content_pane_t6

0xfc0e,	// (0x000b3873) ncim_query_content_pane_t_ParamLimits

0xdafe,	// (0x000b1763) ncim_query_list_pane_ParamLimits

0xdb10,	// (0x000b1775) ncim_query_popup_pane_ParamLimits

0xdb24,	// (0x000b1789) wait_bar_pane_cp04

0xe1c3,	// (0x000b1e28) input_focus_pane_cp011

0xdb2c,	// (0x000b1791) ncim_query_popup_pane_t1

0xdb3a,	// (0x000b179f) ncim_list_query_list_pane_ParamLimits

0xdb3a,	// (0x000b179f) ncim_list_query_list_pane

0xe1c3,	// (0x000b1e28) bg_button_pane_cp027

0xdb47,	// (0x000b17ac) ncim_query_button_pane_g1

0xe1c3,	// (0x000b1e28) list_highlight_pane_cp012

0xdb51,	// (0x000b17b6) ncim_list_query_list_pane_g1

0xdb59,	// (0x000b17be) ncim_list_query_list_pane_t1

0x9dba,	// (0x000ada1f) cam4_indicators_pane_g3_ParamLimits

0x9dba,	// (0x000ada1f) cam4_indicators_pane_g3

0x9e35,	// (0x000ada9a) vid4_indicators_pane_g5_ParamLimits

0x9e35,	// (0x000ada9a) vid4_indicators_pane_g5

0x9f21,	// (0x000adb86) vid4_progress_pane_g5_ParamLimits

0x9f21,	// (0x000adb86) vid4_progress_pane_g5

0x746e,	// (0x000ab0d3) main_ncimui_pane_g1

0x74d7,	// (0x000ab13c) ncimui_group_query_pane_ParamLimits

0x74d7,	// (0x000ab13c) ncimui_group_query_pane

0x751f,	// (0x000ab184) ncimui_list_pane_ParamLimits

0x751f,	// (0x000ab184) ncimui_list_pane

0x7546,	// (0x000ab1ab) ncimui_text_pane_ParamLimits

0x7546,	// (0x000ab1ab) ncimui_text_pane

0x7607,	// (0x000ab26c) ncimui_text_pane_t1_ParamLimits

0x7607,	// (0x000ab26c) ncimui_text_pane_t1

0xdb67,	// (0x000b17cc) ncimui_list_single_graphic_pane_ParamLimits

0xdb67,	// (0x000b17cc) ncimui_list_single_graphic_pane

0x7625,	// (0x000ab28a) ncimui_query_pane_ParamLimits

0x7625,	// (0x000ab28a) ncimui_query_pane

0xe1c3,	// (0x000b1e28) list_highlight_pane_cp013

0xdb77,	// (0x000b17dc) ncim_list_query_list_pane_t1_copy1

0xdb85,	// (0x000b17ea) ncim_list_single_graphic_pane_g1

0x7638,	// (0x000ab29d) ncim_query_button_pane_cp01

0x7644,	// (0x000ab2a9) ncim_query_entry_pane_ParamLimits

0x7644,	// (0x000ab2a9) ncim_query_entry_pane

0x7657,	// (0x000ab2bc) ncimui_query_pane_g1

0x7663,	// (0x000ab2c8) ncimui_query_pane_t1_ParamLimits

0x7663,	// (0x000ab2c8) ncimui_query_pane_t1

0xe200,	// (0x000b1e65) input_focus_pane_cp012

0xdb8d,	// (0x000b17f2) ncim_query_entry_pane_t1

0x9f88,	// (0x000adbed) main_im_pane_ParamLimits

0x9479,	// (0x000ad0de) main_mobtv_pane_ParamLimits

0x9479,	// (0x000ad0de) main_mobtv_pane

0x7237,	// (0x000aae9c) main_cset6_slider_pane_g18_ParamLimits

0x7237,	// (0x000aae9c) main_cset6_slider_pane_g18

0x7243,	// (0x000aaea8) main_cset6_slider_pane_g19_ParamLimits

0x7243,	// (0x000aaea8) main_cset6_slider_pane_g19

0x767c,	// (0x000ab2e1) bg_main_mobtv_pane_ParamLimits

0x767c,	// (0x000ab2e1) bg_main_mobtv_pane

0x768a,	// (0x000ab2ef) main_mobtv_info_pane

0x7693,	// (0x000ab2f8) main_mobtv_loading_pane_ParamLimits

0x7693,	// (0x000ab2f8) main_mobtv_loading_pane

0xdb9f,	// (0x000b1804) main_mobtv_pg_channel_list_pane

0xdba9,	// (0x000b180e) main_mobtv_pg_hdr_pane

0x76a0,	// (0x000ab305) main_mobtv_programe_curr_pane_ParamLimits

0x76a0,	// (0x000ab305) main_mobtv_programe_curr_pane

0x76ad,	// (0x000ab312) main_mobtv_programe_next_pane_ParamLimits

0x76ad,	// (0x000ab312) main_mobtv_programe_next_pane

0xdbb2,	// (0x000b1817) popup_mobtv_noti_window

0xc4b5,	// (0x000b011a) main_tv_pg_hdr_pane_g1

0xdbba,	// (0x000b181f) main_tv_pg_hdr_pane_g2

0xdbc2,	// (0x000b1827) main_tv_pg_hdr_pane_g3

0xdbca,	// (0x000b182f) main_tv_pg_hdr_pane_g4

0xdbd2,	// (0x000b1837) main_tv_pg_hdr_pane_g5

0xdbdc,	// (0x000b1841) main_tv_pg_hdr_pane_g6

0xdbe6,	// (0x000b184b) main_tv_pg_hdr_pane_g7

0xdbf0,	// (0x000b1855) main_tv_pg_hdr_pane_g8

0xdbfa,	// (0x000b185f) main_tv_pg_hdr_pane_g9

0xdc04,	// (0x000b1869) main_tv_pg_hdr_pane_g10

0xdc0e,	// (0x000b1873) main_tv_pg_hdr_pane_g11

0x000a,

0x0056,	// (0x000a3cbb) main_tv_pg_hdr_pane_g

0xdc18,	// (0x000b187d) main_tv_pg_hdr_pane_t1

0xdc26,	// (0x000b188b) main_tv_pg_hdr_pane_t2

0xdc34,	// (0x000b1899) main_tv_pg_hdr_pane_t3

0xdc44,	// (0x000b18a9) main_tv_pg_hdr_pane_t4

0xdc54,	// (0x000b18b9) main_tv_pg_hdr_pane_t5

0x0004,

0x006d,	// (0x000a3cd2) main_tv_pg_hdr_pane_t

0xdc64,	// (0x000b18c9) single_mobtv_pg_channel_pane_ParamLimits

0xdc64,	// (0x000b18c9) single_mobtv_pg_channel_pane

0xdc76,	// (0x000b18db) single_mobtv_pg_channel_table_pane

0xa4bb,	// (0x000ae120) single_mobtv_pg_channel_thumb_pane

0xdc7f,	// (0x000b18e4) single_tv_pg_channel_pane_g1

0xdc88,	// (0x000b18ed) single_tv_pg_channel_pane_g2

0x0001,

0x0078,	// (0x000a3cdd) single_tv_pg_channel_pane_g

0xc703,	// (0x000b0368) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc703,	// (0x000b0368) bg_single_mobtv_pg_channel_thumb_pane

0xdc91,	// (0x000b18f6) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdc91,	// (0x000b18f6) single_mobtv_pg_channel_thumb_pane_g1

0xdc9f,	// (0x000b1904) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdc9f,	// (0x000b1904) single_mobtv_pg_channel_thumb_pane_g2

0xdcab,	// (0x000b1910) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdcab,	// (0x000b1910) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x007d,	// (0x000a3ce2) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x007d,	// (0x000a3ce2) single_mobtv_pg_channel_thumb_pane_g

0xdcb7,	// (0x000b191c) single_mobtv_pg_channel_thumb_pane_t1

0xdcc5,	// (0x000b192a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0084,	// (0x000a3ce9) single_mobtv_pg_channel_thumb_pane_t

0xc4b5,	// (0x000b011a) bg_single_mobtv_pg_channel_table_pane_g1

0xc4b5,	// (0x000b011a) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x000b3354) bg_single_mobtv_pg_channel_table_pane_g

0xdcd3,	// (0x000b1938) single_mobtv_pg_channel_table_pane_t1

0xdce1,	// (0x000b1946) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0089,	// (0x000a3cee) single_mobtv_pg_channel_table_pane_t

0x76c2,	// (0x000ab327) main_mobtv_info_pane_g1_ParamLimits

0x76c2,	// (0x000ab327) main_mobtv_info_pane_g1

0x76e0,	// (0x000ab345) main_mobtv_info_pane_t1_ParamLimits

0x76e0,	// (0x000ab345) main_mobtv_info_pane_t1

0x7758,	// (0x000ab3bd) main_mobtv_info_pane_t2_ParamLimits

0x7758,	// (0x000ab3bd) main_mobtv_info_pane_t2

0x0002,

0xfc20,	// (0x000b3885) main_mobtv_info_pane_t_ParamLimits

0xfc20,	// (0x000b3885) main_mobtv_info_pane_t

0x77e7,	// (0x000ab44c) wait_bar_pane_cp05

0x77f9,	// (0x000ab45e) main_mobtv_loading_pane_g1_ParamLimits

0x77f9,	// (0x000ab45e) main_mobtv_loading_pane_g1

0x780c,	// (0x000ab471) main_mobtv_loading_pane_g2_ParamLimits

0x780c,	// (0x000ab471) main_mobtv_loading_pane_g2

0x7818,	// (0x000ab47d) main_mobtv_loading_pane_g3_ParamLimits

0x7818,	// (0x000ab47d) main_mobtv_loading_pane_g3

0x0002,

0xfc27,	// (0x000b388c) main_mobtv_loading_pane_g_ParamLimits

0xfc27,	// (0x000b388c) main_mobtv_loading_pane_g

0xdcef,	// (0x000b1954) main_mobtv_loading_pane_t1_ParamLimits

0xdcef,	// (0x000b1954) main_mobtv_loading_pane_t1

0xdd07,	// (0x000b196c) main_mobtv_loading_pane_t2_ParamLimits

0xdd07,	// (0x000b196c) main_mobtv_loading_pane_t2

0x0001,

0x00a1,	// (0x000a3d06) main_mobtv_loading_pane_t_ParamLimits

0x00a1,	// (0x000a3d06) main_mobtv_loading_pane_t

0x782b,	// (0x000ab490) wait_bar_pane_cp06_ParamLimits

0x782b,	// (0x000ab490) wait_bar_pane_cp06

0xdd2b,	// (0x000b1990) main_mobtv_programe_curr_pane_t1

0xdd39,	// (0x000b199e) main_mobtv_programe_curr_pane_t2

0x0001,

0x00a6,	// (0x000a3d0b) main_mobtv_programe_curr_pane_t

0xdd47,	// (0x000b19ac) main_mobtv_programe_next_pane_t1

0xdd55,	// (0x000b19ba) main_mobtv_programe_next_pane_t2

0xdd63,	// (0x000b19c8) main_mobtv_programe_next_pane_t3

0x0002,

0x00ab,	// (0x000a3d10) main_mobtv_programe_next_pane_t

0xe1c3,	// (0x000b1e28) bg_popup_mobtv_noti_window_pane

0xdd71,	// (0x000b19d6) popup_mobtv_noti_window_g1

0xdd79,	// (0x000b19de) popup_mobtv_noti_window_t1

0xdd87,	// (0x000b19ec) popup_mobtv_noti_window_t2

0x0001,

0x00b2,	// (0x000a3d17) popup_mobtv_noti_window_t

0xc4b5,	// (0x000b011a) bg_popup_mobtv_noti_window_pane_g1

0x9487,	// (0x000ad0ec) sc_clock_pane

0x9487,	// (0x000ad0ec) main_fs_bigclock_pane

0x6e79,	// (0x000aaade) blid2_tripm_pane_t4_ParamLimits

0x6e79,	// (0x000aaade) blid2_tripm_pane_t4

0x783a,	// (0x000ab49f) sc_clock_pane_g1_ParamLimits

0x783a,	// (0x000ab49f) sc_clock_pane_g1

0x784c,	// (0x000ab4b1) sc_clock_pane_t1_ParamLimits

0x784c,	// (0x000ab4b1) sc_clock_pane_t1

0x786e,	// (0x000ab4d3) sc_clock_pane_t2_ParamLimits

0x786e,	// (0x000ab4d3) sc_clock_pane_t2

0x7886,	// (0x000ab4eb) sc_clock_pane_t3_ParamLimits

0x7886,	// (0x000ab4eb) sc_clock_pane_t3

0x0004,

0xfc2e,	// (0x000b3893) sc_clock_pane_t_ParamLimits

0xfc2e,	// (0x000b3893) sc_clock_pane_t

0x8900,	// (0x000ac565) main_fs_bigclock_indicator_pane_ParamLimits

0x8900,	// (0x000ac565) main_fs_bigclock_indicator_pane

0x792c,	// (0x000ab591) main_fs_bigclock_pane_g1_ParamLimits

0x792c,	// (0x000ab591) main_fs_bigclock_pane_g1

0x890c,	// (0x000ac571) main_fs_bigclock_pane_t1_ParamLimits

0x890c,	// (0x000ac571) main_fs_bigclock_pane_t1

0x891e,	// (0x000ac583) main_fs_bigclock_pane_t2_ParamLimits

0x891e,	// (0x000ac583) main_fs_bigclock_pane_t2

0x8932,	// (0x000ac597) main_fs_bigclock_pane_t3_ParamLimits

0x8932,	// (0x000ac597) main_fs_bigclock_pane_t3

0x0002,

0xfe0a,	// (0x000b3a6f) main_fs_bigclock_pane_t_ParamLimits

0xfe0a,	// (0x000b3a6f) main_fs_bigclock_pane_t

0xe940,	// (0x000b25a5) main_fs_bigclock_indicator_pane_g1

0xdaa6,	// (0x000b170b) ncim_query_content_pane_g2_ParamLimits

0xdaa6,	// (0x000b170b) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x000b386e) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x000b386e) ncim_query_content_pane_g

0x789f,	// (0x000ab504) sc_clock_pane_t4_ParamLimits

0x789f,	// (0x000ab504) sc_clock_pane_t4

0x9479,	// (0x000ad0de) main_radioblah_pane

0xced7,	// (0x000b0b3c) cell_call4_button_pane_t1_copy1_ParamLimits

0xced7,	// (0x000b0b3c) cell_call4_button_pane_t1_copy1

0x7486,	// (0x000ab0eb) main_ncimui_pane_t1_ParamLimits

0x7486,	// (0x000ab0eb) main_ncimui_pane_t1

0x74a0,	// (0x000ab105) main_ncimui_pane_t2_ParamLimits

0x74a0,	// (0x000ab105) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x000b3867) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x000b3867) main_ncimui_pane_t

0xdecd,	// (0x000b1b32) main_radioblah_anim_pane_ParamLimits

0xdecd,	// (0x000b1b32) main_radioblah_anim_pane

0xdede,	// (0x000b1b43) main_radioblah_info_pane_ParamLimits

0xdede,	// (0x000b1b43) main_radioblah_info_pane

0xdef2,	// (0x000b1b57) main_radioblah_pane_t1_ParamLimits

0xdef2,	// (0x000b1b57) main_radioblah_pane_t1

0xdf0e,	// (0x000b1b73) main_radioblah_pane_t2_ParamLimits

0xdf0e,	// (0x000b1b73) main_radioblah_pane_t2

0x0003,

0x00d8,	// (0x000a3d3d) main_radioblah_pane_t_ParamLimits

0x00d8,	// (0x000a3d3d) main_radioblah_pane_t

0x798b,	// (0x000ab5f0) main_radioblah_rocker_ctrl_pane_ParamLimits

0x798b,	// (0x000ab5f0) main_radioblah_rocker_ctrl_pane

0xdf56,	// (0x000b1bbb) main_radioblah_info_pane_t1_ParamLimits

0xdf56,	// (0x000b1bbb) main_radioblah_info_pane_t1

0x79e3,	// (0x000ab648) main_radioblah_info_pane_t2_ParamLimits

0x79e3,	// (0x000ab648) main_radioblah_info_pane_t2

0x0003,

0xfc39,	// (0x000b389e) main_radioblah_info_pane_t_ParamLimits

0xfc39,	// (0x000b389e) main_radioblah_info_pane_t

0xc4b5,	// (0x000b011a) main_radioblah_rocker_ctrl_pane_g1

0x7a93,	// (0x000ab6f8) main_radioblah_rocker_ctrl_pane_g2

0x7a9b,	// (0x000ab700) main_radioblah_rocker_ctrl_pane_g3

0x7aa3,	// (0x000ab708) main_radioblah_rocker_ctrl_pane_g4

0x7aab,	// (0x000ab710) main_radioblah_rocker_ctrl_pane_g5

0x7ab3,	// (0x000ab718) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc42,	// (0x000b38a7) main_radioblah_rocker_ctrl_pane_g

0x7147,	// (0x000aadac) main_cset_text2_pane_t1_copy1_ParamLimits

0x9d7f,	// (0x000ad9e4) cam4_image_uncrop_qvga_pane

0x9de0,	// (0x000ada45) vid4_image_uncrop_qcif_pane

0x9f58,	// (0x000adbbd) cam6_image_uncrop_qvga_pane_ParamLimits

0x9f58,	// (0x000adbbd) cam6_image_uncrop_qvga_pane

0xd77d,	// (0x000b13e2) vid6_image_uncrop_qcif_pane_ParamLimits

0xd77d,	// (0x000b13e2) vid6_image_uncrop_qcif_pane

0xe1c3,	// (0x000b1e28) bg_popup_preview_window_pane_cp03

0xda58,	// (0x000b16bd) list_cset_text2_pane

0xda60,	// (0x000b16c5) main_cset6_text2_pane_g1

0xda68,	// (0x000b16cd) main_cset6_text2_pane_t1

0xdf90,	// (0x000b1bf5) list_cset_text2_pane_t1_ParamLimits

0xdf90,	// (0x000b1bf5) list_cset_text2_pane_t1

0x9479,	// (0x000ad0de) main_radioblah_pane_ParamLimits

0x77d3,	// (0x000ab438) main_mobtv_info_pane_t3_ParamLimits

0x77d3,	// (0x000ab438) main_mobtv_info_pane_t3

0x7979,	// (0x000ab5de) main_radioblah_pane_g1

0x79b3,	// (0x000ab618) main_radioblah_info_pane_g1

0x7a38,	// (0x000ab69d) main_radioblah_info_pane_t3_ParamLimits

0x7a38,	// (0x000ab69d) main_radioblah_info_pane_t3

0x22fa,	// (0x000a5f5f) highlight_cell_cale_month_pane_ParamLimits

0x22fa,	// (0x000a5f5f) highlight_cell_cale_month_pane

0x9487,	// (0x000ad0ec) main_phob_fisheye_pane

0xc853,	// (0x000b04b8) scroll_pane_cp0031_ParamLimits

0xc853,	// (0x000b04b8) scroll_pane_cp0031

0xd88b,	// (0x000b14f0) wait_bar_pane_cp08_ParamLimits

0x71c9,	// (0x000aae2e) cset_list_set_pane_copy1_ParamLimits

0xdfab,	// (0x000b1c10) highlight_cell_cale_month_pane_g1

0x7abb,	// (0x000ab720) highlight_cell_cale_month_pane_t1

0xd506,	// (0x000b116b) list_gen_pane_cp01

0xd0cd,	// (0x000b0d32) scroll_pane_01

0x7ac9,	// (0x000ab72e) list_single_double_fisheye_pane

0x7ad2,	// (0x000ab737) list_double_fisheye_pane_g1_ParamLimits

0x7ad2,	// (0x000ab737) list_double_fisheye_pane_g1

0x7ade,	// (0x000ab743) list_double_fisheye_pane_g2_ParamLimits

0x7ade,	// (0x000ab743) list_double_fisheye_pane_g2

0x7af2,	// (0x000ab757) list_double_fisheye_pane_g3_ParamLimits

0x7af2,	// (0x000ab757) list_double_fisheye_pane_g3

0x0004,

0xfc4f,	// (0x000b38b4) list_double_fisheye_pane_g_ParamLimits

0xfc4f,	// (0x000b38b4) list_double_fisheye_pane_g

0x7b1b,	// (0x000ab780) list_double_fisheye_pane_t1_ParamLimits

0x7b1b,	// (0x000ab780) list_double_fisheye_pane_t1

0x7b36,	// (0x000ab79b) list_double_fisheye_pane_t2_ParamLimits

0x7b36,	// (0x000ab79b) list_double_fisheye_pane_t2

0x0001,

0xfc5a,	// (0x000b38bf) list_double_fisheye_pane_t_ParamLimits

0xfc5a,	// (0x000b38bf) list_double_fisheye_pane_t

0x9487,	// (0x000ad0ec) main_call5_pane

0x78ca,	// (0x000ab52f) sc_swipe_pane_ParamLimits

0x78ca,	// (0x000ab52f) sc_swipe_pane

0x7b6b,	// (0x000ab7d0) call5_image_pane_ParamLimits

0x7b6b,	// (0x000ab7d0) call5_image_pane

0x7b88,	// (0x000ab7ed) call5_swipe_1_pane_ParamLimits

0x7b88,	// (0x000ab7ed) call5_swipe_1_pane

0x7b9b,	// (0x000ab800) call5_swipe_2_pane_ParamLimits

0x7b9b,	// (0x000ab800) call5_swipe_2_pane

0x7bc6,	// (0x000ab82b) popup_call5_audio_first_window_ParamLimits

0x7bc6,	// (0x000ab82b) popup_call5_audio_first_window

0xc703,	// (0x000b0368) call5_swipe_1_pane_g1_ParamLimits

0xc703,	// (0x000b0368) call5_swipe_1_pane_g1

0xdfb3,	// (0x000b1c18) call5_swipe_1_pane_g2_ParamLimits

0xdfb3,	// (0x000b1c18) call5_swipe_1_pane_g2

0x0001,

0xfc5f,	// (0x000b38c4) call5_swipe_1_pane_g_ParamLimits

0xfc5f,	// (0x000b38c4) call5_swipe_1_pane_g

0xdfbf,	// (0x000b1c24) call5_swipe_1_pane_t1_ParamLimits

0xdfbf,	// (0x000b1c24) call5_swipe_1_pane_t1

0xc703,	// (0x000b0368) call5_swipe_2_pane_g1_ParamLimits

0xc703,	// (0x000b0368) call5_swipe_2_pane_g1

0xdfd4,	// (0x000b1c39) call5_swipe_2_pane_g2_ParamLimits

0xdfd4,	// (0x000b1c39) call5_swipe_2_pane_g2

0x0001,

0xfc64,	// (0x000b38c9) call5_swipe_2_pane_g_ParamLimits

0xfc64,	// (0x000b38c9) call5_swipe_2_pane_g

0xdfe0,	// (0x000b1c45) call5_swipe_2_pane_t1_ParamLimits

0xdfe0,	// (0x000b1c45) call5_swipe_2_pane_t1

0xdff5,	// (0x000b1c5a) sc_swipe_pane_g1_ParamLimits

0xdff5,	// (0x000b1c5a) sc_swipe_pane_g1

0xe002,	// (0x000b1c67) sc_swipe_pane_g2_ParamLimits

0xe002,	// (0x000b1c67) sc_swipe_pane_g2

0x0001,

0xfc69,	// (0x000b38ce) sc_swipe_pane_g_ParamLimits

0xfc69,	// (0x000b38ce) sc_swipe_pane_g

0xe00e,	// (0x000b1c73) sc_swipe_pane_t1_ParamLimits

0xe00e,	// (0x000b1c73) sc_swipe_pane_t1

0x9487,	// (0x000ad0ec) main_cmail_launcher_pane

0x7bd7,	// (0x000ab83c) aid_size_cell_cmail_l_ParamLimits

0x7bd7,	// (0x000ab83c) aid_size_cell_cmail_l

0x7bf1,	// (0x000ab856) grid_cmail_l_pane_ParamLimits

0x7bf1,	// (0x000ab856) grid_cmail_l_pane

0x7c0b,	// (0x000ab870) cell_cmail_l_pane_ParamLimits

0x7c0b,	// (0x000ab870) cell_cmail_l_pane

0x7c31,	// (0x000ab896) cell_cmail_l_pane_g1_ParamLimits

0x7c31,	// (0x000ab896) cell_cmail_l_pane_g1

0x7c42,	// (0x000ab8a7) cell_cmail_l_pane_t1_ParamLimits

0x7c42,	// (0x000ab8a7) cell_cmail_l_pane_t1

0xe023,	// (0x000b1c88) cell_cmail_l_pane_t2_ParamLimits

0xe023,	// (0x000b1c88) cell_cmail_l_pane_t2

0x0001,

0xfc6e,	// (0x000b38d3) cell_cmail_l_pane_t_ParamLimits

0xfc6e,	// (0x000b38d3) cell_cmail_l_pane_t

0xe200,	// (0x000b1e65) grid_highlight_pane_cp018_ParamLimits

0xe200,	// (0x000b1e65) grid_highlight_pane_cp018

0x05cf,	// (0x000a4234) main2_pane_ParamLimits

0x05cf,	// (0x000a4234) main2_pane

0xa033,	// (0x000adc98) popup_sp_fs_action_menu_bg_pane_g1

0xa03b,	// (0x000adca0) popup_sp_fs_action_menu_bg_pane_g2

0xa043,	// (0x000adca8) popup_sp_fs_action_menu_bg_pane_g3

0xa04b,	// (0x000adcb0) popup_sp_fs_action_menu_bg_pane_g4

0xa053,	// (0x000adcb8) popup_sp_fs_action_menu_bg_pane_g5

0xa05b,	// (0x000adcc0) popup_sp_fs_action_menu_bg_pane_g6

0xa063,	// (0x000adcc8) popup_sp_fs_action_menu_bg_pane_g7

0xa06b,	// (0x000adcd0) popup_sp_fs_action_menu_bg_pane_g8

0xa073,	// (0x000adcd8) popup_sp_fs_action_menu_bg_pane_g9

0xa07b,	// (0x000adce0) popup_sp_fs_action_menu_bg_pane_g10

0xa07b,	// (0x000adce0) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x000b2def) popup_sp_fs_action_menu_bg_pane_g

0x14c7,	// (0x000a512c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x14c7,	// (0x000a512c) list_medium_line_x2_t3_g3_g1

0x14d3,	// (0x000a5138) list_medium_line_x2_t3_g3_g2_ParamLimits

0x14d3,	// (0x000a5138) list_medium_line_x2_t3_g3_g2

0x14df,	// (0x000a5144) list_medium_line_x2_t3_g3_g3_ParamLimits

0x14df,	// (0x000a5144) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000b2e9d) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000b2e9d) list_medium_line_x2_t3_g3_g

0x14eb,	// (0x000a5150) list_medium_line_x2_t3_g3_t1_ParamLimits

0x14eb,	// (0x000a5150) list_medium_line_x2_t3_g3_t1

0x1500,	// (0x000a5165) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1500,	// (0x000a5165) list_medium_line_x2_t3_g3_t2

0x1514,	// (0x000a5179) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1514,	// (0x000a5179) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000b2ea4) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000b2ea4) list_medium_line_x2_t3_g3_t

0x14c7,	// (0x000a512c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x14c7,	// (0x000a512c) list_medium_line_x2_t3_g2_g1

0x14df,	// (0x000a5144) list_medium_line_x2_t3_g2_g2_ParamLimits

0x14df,	// (0x000a5144) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000b2eab) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000b2eab) list_medium_line_x2_t3_g2_g

0x1529,	// (0x000a518e) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1529,	// (0x000a518e) list_medium_line_x2_t3_g2_t1

0x153f,	// (0x000a51a4) list_medium_line_x2_t3_g2_t2_ParamLimits

0x153f,	// (0x000a51a4) list_medium_line_x2_t3_g2_t2

0x1514,	// (0x000a5179) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1514,	// (0x000a5179) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000b2eb0) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000b2eb0) list_medium_line_x2_t3_g2_t

0x14c7,	// (0x000a512c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x14c7,	// (0x000a512c) list_medium_line_x2_t4_g4_g1

0x1551,	// (0x000a51b6) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1551,	// (0x000a51b6) list_medium_line_x2_t4_g4_g2

0x14d3,	// (0x000a5138) list_medium_line_x2_t4_g4_g3_ParamLimits

0x14d3,	// (0x000a5138) list_medium_line_x2_t4_g4_g3

0x155d,	// (0x000a51c2) list_medium_line_x2_t4_g4_g4_ParamLimits

0x155d,	// (0x000a51c2) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000b2eb7) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000b2eb7) list_medium_line_x2_t4_g4_g

0x1569,	// (0x000a51ce) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1569,	// (0x000a51ce) list_medium_line_x2_t4_g4_t1

0x1583,	// (0x000a51e8) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1583,	// (0x000a51e8) list_medium_line_x2_t4_g4_t2

0x1599,	// (0x000a51fe) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1599,	// (0x000a51fe) list_medium_line_x2_t4_g4_t3

0x15ae,	// (0x000a5213) list_medium_line_x2_t4_g4_t4_ParamLimits

0x15ae,	// (0x000a5213) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000b2ec0) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000b2ec0) list_medium_line_x2_t4_g4_t

0x14c7,	// (0x000a512c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x14c7,	// (0x000a512c) list_medium_line_x2_t2_g4_g1

0x1551,	// (0x000a51b6) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1551,	// (0x000a51b6) list_medium_line_x2_t2_g4_g2

0x14d3,	// (0x000a5138) list_medium_line_x2_t2_g4_g3_ParamLimits

0x14d3,	// (0x000a5138) list_medium_line_x2_t2_g4_g3

0x14df,	// (0x000a5144) list_medium_line_x2_t2_g4_g4_ParamLimits

0x14df,	// (0x000a5144) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000b2f27) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000b2f27) list_medium_line_x2_t2_g4_g

0x2320,	// (0x000a5f85) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2320,	// (0x000a5f85) list_medium_line_x2_t2_g4_t1

0x1514,	// (0x000a5179) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1514,	// (0x000a5179) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000b2f30) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000b2f30) list_medium_line_x2_t2_g4_t

0x14c7,	// (0x000a512c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x14c7,	// (0x000a512c) list_medium_line_x2_t2_g3_g1

0x14d3,	// (0x000a5138) list_medium_line_x2_t2_g3_g2_ParamLimits

0x14d3,	// (0x000a5138) list_medium_line_x2_t2_g3_g2

0x14df,	// (0x000a5144) list_medium_line_x2_t2_g3_g3_ParamLimits

0x14df,	// (0x000a5144) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000b2e9d) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000b2e9d) list_medium_line_x2_t2_g3_g

0x2335,	// (0x000a5f9a) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2335,	// (0x000a5f9a) list_medium_line_x2_t2_g3_t1

0x1514,	// (0x000a5179) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1514,	// (0x000a5179) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000b2f35) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000b2f35) list_medium_line_x2_t2_g3_t

0x2489,	// (0x000a60ee) main_sp_fs_list_pane_ParamLimits

0x2489,	// (0x000a60ee) main_sp_fs_list_pane

0xb5eb,	// (0x000af250) sp_fs_scroll_pane_ParamLimits

0xb5eb,	// (0x000af250) sp_fs_scroll_pane

0x2495,	// (0x000a60fa) list_medium_line_x2_t3_t1

0x24a5,	// (0x000a610a) list_medium_line_x2_t3_t2

0x24b3,	// (0x000a6118) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000b2f80) list_medium_line_x2_t3_t

0x24c1,	// (0x000a6126) list_medium_line_x3_t4_t1

0x24d1,	// (0x000a6136) list_medium_line_x3_t4_t2

0x24df,	// (0x000a6144) list_medium_line_x3_t4_t3

0x24b3,	// (0x000a6118) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000b2f87) list_medium_line_x3_t4_t

0x24ed,	// (0x000a6152) list_medium_line_x4_t5_t1

0x24fd,	// (0x000a6162) list_medium_line_x4_t5_t2

0x24df,	// (0x000a6144) list_medium_line_x4_t5_t3

0x250b,	// (0x000a6170) list_medium_line_x4_t5_t4

0x24b3,	// (0x000a6118) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000b2f90) list_medium_line_x4_t5_t

0x14c7,	// (0x000a512c) list_medium_line_t4_g4_g1_ParamLimits

0x14c7,	// (0x000a512c) list_medium_line_t4_g4_g1

0x155d,	// (0x000a51c2) list_medium_line_t4_g4_g2_ParamLimits

0x155d,	// (0x000a51c2) list_medium_line_t4_g4_g2

0x2519,	// (0x000a617e) list_medium_line_t4_g4_g3_ParamLimits

0x2519,	// (0x000a617e) list_medium_line_t4_g4_g3

0x14df,	// (0x000a5144) list_medium_line_t4_g4_g4_ParamLimits

0x14df,	// (0x000a5144) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x000b2f9b) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x000b2f9b) list_medium_line_t4_g4_g

0x2525,	// (0x000a618a) list_medium_line_t4_g4_t1_ParamLimits

0x2525,	// (0x000a618a) list_medium_line_t4_g4_t1

0x253a,	// (0x000a619f) list_medium_line_t4_g4_t2_ParamLimits

0x253a,	// (0x000a619f) list_medium_line_t4_g4_t2

0x254f,	// (0x000a61b4) list_medium_line_t4_g4_t3_ParamLimits

0x254f,	// (0x000a61b4) list_medium_line_t4_g4_t3

0x1514,	// (0x000a5179) list_medium_line_t4_g4_t4_ParamLimits

0x1514,	// (0x000a5179) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000b2fa4) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000b2fa4) list_medium_line_t4_g4_t

0x2627,	// (0x000a628c) chi_dic_find_pane_g1

0x3661,	// (0x000a72c6) main_tport_pane

0x64dc,	// (0x000aa141) list_medium_line_plain_t1

0x6584,	// (0x000aa1e9) list_medium_line_t2_g2_g1_ParamLimits

0x6584,	// (0x000aa1e9) list_medium_line_t2_g2_g1

0x6590,	// (0x000aa1f5) list_medium_line_t2_g2_g2_ParamLimits

0x6590,	// (0x000aa1f5) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x000b3678) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x000b3678) list_medium_line_t2_g2_g

0x659c,	// (0x000aa201) list_medium_line_t2_g2_t1_ParamLimits

0x659c,	// (0x000aa201) list_medium_line_t2_g2_t1

0x65b6,	// (0x000aa21b) list_medium_line_t2_g2_t2_ParamLimits

0x65b6,	// (0x000aa21b) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x000b367d) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x000b367d) list_medium_line_t2_g2_t

0xd50f,	// (0x000b1174) aid_sp_fs_list_icon_a_sm

0xefe3,	// (0x000b2c48) aid_sp_fs_list_icon_d

0xc0b2,	// (0x000afd17) aid_sp_fs_text_primary

0xefeb,	// (0x000b2c50) aid_sp_fs_text_secondary

0x6c26,	// (0x000aa88b) list_medium_line

0x6c26,	// (0x000aa88b) list_medium_line_g2

0x6c26,	// (0x000aa88b) list_medium_line_g3

0x6c26,	// (0x000aa88b) list_medium_line_plain

0x6c26,	// (0x000aa88b) list_medium_line_plain_t2

0x6c26,	// (0x000aa88b) list_medium_line_plain_t3

0x6c26,	// (0x000aa88b) list_medium_line_right_icon

0x6c26,	// (0x000aa88b) list_medium_line_right_iconx2

0x6c26,	// (0x000aa88b) list_medium_line_t2

0x6c26,	// (0x000aa88b) list_medium_line_t2_g2

0x6c26,	// (0x000aa88b) list_medium_line_t2_g3

0x6c26,	// (0x000aa88b) list_medium_line_t2_right_icon

0x6c26,	// (0x000aa88b) list_medium_line_t2_right_iconx2

0x6c26,	// (0x000aa88b) list_medium_line_t3

0x6c26,	// (0x000aa88b) list_medium_line_t3_g2

0x6c26,	// (0x000aa88b) list_medium_line_t3_g3

0x6c26,	// (0x000aa88b) list_medium_line_t3_right_iconx2

0x6c2f,	// (0x000aa894) list_medium_line_t4_g4

0x6c38,	// (0x000aa89d) list_medium_line_x2

0x6c38,	// (0x000aa89d) list_medium_line_x2_t2_g2

0x6c38,	// (0x000aa89d) list_medium_line_x2_t2_g3

0x6c38,	// (0x000aa89d) list_medium_line_x2_t2_g4

0x6c38,	// (0x000aa89d) list_medium_line_x2_t3

0x6c38,	// (0x000aa89d) list_medium_line_x2_t3_g2

0x6c38,	// (0x000aa89d) list_medium_line_x2_t3_g3

0x6c38,	// (0x000aa89d) list_medium_line_x2_t3_g4

0x6c38,	// (0x000aa89d) list_medium_line_x2_t4_g2

0x6c38,	// (0x000aa89d) list_medium_line_x2_t4_g4

0x6c41,	// (0x000aa8a6) list_medium_line_x3

0x6c41,	// (0x000aa8a6) list_medium_line_x3_t4

0x6c41,	// (0x000aa8a6) list_medium_line_x3_t4_g4

0x6c2f,	// (0x000aa894) list_medium_line_x4_t4

0x6c2f,	// (0x000aa894) list_medium_line_x4_t4_g7

0x6c2f,	// (0x000aa894) list_medium_line_x4_t5

0x6c4a,	// (0x000aa8af) list_single_fs_dyc_pane_ParamLimits

0x6c4a,	// (0x000aa8af) list_single_fs_dyc_pane

0x14c7,	// (0x000a512c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x14c7,	// (0x000a512c) list_medium_line_x4_t4_g7_g1

0x738b,	// (0x000aaff0) list_medium_line_x4_t4_g7_g2_ParamLimits

0x738b,	// (0x000aaff0) list_medium_line_x4_t4_g7_g2

0x7397,	// (0x000aaffc) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7397,	// (0x000aaffc) list_medium_line_x4_t4_g7_g3

0x73a6,	// (0x000ab00b) list_medium_line_x4_t4_g7_g4_ParamLimits

0x73a6,	// (0x000ab00b) list_medium_line_x4_t4_g7_g4

0x73b2,	// (0x000ab017) list_medium_line_x4_t4_g7_g5_ParamLimits

0x73b2,	// (0x000ab017) list_medium_line_x4_t4_g7_g5

0x73c1,	// (0x000ab026) list_medium_line_x4_t4_g7_g6_ParamLimits

0x73c1,	// (0x000ab026) list_medium_line_x4_t4_g7_g6

0x73d0,	// (0x000ab035) list_medium_line_x4_t4_g7_g7_ParamLimits

0x73d0,	// (0x000ab035) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x000b3848) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x000b3848) list_medium_line_x4_t4_g7_g

0x73dc,	// (0x000ab041) list_medium_line_x4_t4_g7_t1_ParamLimits

0x73dc,	// (0x000ab041) list_medium_line_x4_t4_g7_t1

0x73f1,	// (0x000ab056) list_medium_line_x4_t4_g7_t2_ParamLimits

0x73f1,	// (0x000ab056) list_medium_line_x4_t4_g7_t2

0x7406,	// (0x000ab06b) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7406,	// (0x000ab06b) list_medium_line_x4_t4_g7_t3

0x741b,	// (0x000ab080) list_medium_line_x4_t4_g7_t4_ParamLimits

0x741b,	// (0x000ab080) list_medium_line_x4_t4_g7_t4

0x742d,	// (0x000ab092) list_medium_line_x4_t4_g7_t5_ParamLimits

0x742d,	// (0x000ab092) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x000b3857) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x000b3857) list_medium_line_x4_t4_g7_t

0x743f,	// (0x000ab0a4) list_single_dyc_row_pane_ParamLimits

0x743f,	// (0x000ab0a4) list_single_dyc_row_pane

0x7b58,	// (0x000ab7bd) call5_gesture_pane_ParamLimits

0x7b58,	// (0x000ab7bd) call5_gesture_pane

0x7bae,	// (0x000ab813) call5_windows_pane_ParamLimits

0x7bae,	// (0x000ab813) call5_windows_pane

0x7c58,	// (0x000ab8bd) call5_swipe_1_pane_cp_ParamLimits

0x7c58,	// (0x000ab8bd) call5_swipe_1_pane_cp

0x7c64,	// (0x000ab8c9) call5_swipe_2_pane_cp_ParamLimits

0x7c64,	// (0x000ab8c9) call5_swipe_2_pane_cp

0xa15f,	// (0x000addc4) call5_image_pane_cp

0x7c70,	// (0x000ab8d5) popup_call5_audio_first_window_cp_ParamLimits

0x7c70,	// (0x000ab8d5) popup_call5_audio_first_window_cp

0xdff5,	// (0x000b1c5a) call5_swipe_1_pane_g1_cp_ParamLimits

0xdff5,	// (0x000b1c5a) call5_swipe_1_pane_g1_cp

0xe035,	// (0x000b1c9a) call5_swipe_1_pane_g2_cp

0xe00e,	// (0x000b1c73) call5_swipe_1_pane_t1_cp_ParamLimits

0xe00e,	// (0x000b1c73) call5_swipe_1_pane_t1_cp

0xdff5,	// (0x000b1c5a) call5_swipe_2_pane_g1_cp_ParamLimits

0xdff5,	// (0x000b1c5a) call5_swipe_2_pane_g1_cp

0xe03d,	// (0x000b1ca2) call5_swipe_2_pane_g2_cp

0xe045,	// (0x000b1caa) call5_swipe_2_pane_t1_cp_ParamLimits

0xe045,	// (0x000b1caa) call5_swipe_2_pane_t1_cp

0xe200,	// (0x000b1e65) main_sp_fs_email_pane

0xe05a,	// (0x000b1cbf) main_sp_fs_listscroll_pane_te

0x7c7e,	// (0x000ab8e3) popup_sp_fs_action_menu_pane_ParamLimits

0x7c7e,	// (0x000ab8e3) popup_sp_fs_action_menu_pane

0xc4b5,	// (0x000b011a) bg_sp_fs_ctrlbar_pane_g1

0xe063,	// (0x000b1cc8) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe06c,	// (0x000b1cd1) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe075,	// (0x000b1cda) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc4b5,	// (0x000b011a) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc73,	// (0x000b38d8) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc29a,	// (0x000afeff) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc29a,	// (0x000afeff) bg_sp_fs_ctrlbar_ddmenu_pane

0xe07e,	// (0x000b1ce3) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe07e,	// (0x000b1ce3) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe08a,	// (0x000b1cef) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe08a,	// (0x000b1cef) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc7c,	// (0x000b38e1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc7c,	// (0x000b38e1) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe096,	// (0x000b1cfb) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe096,	// (0x000b1cfb) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7cc2,	// (0x000ab927) list_medium_line_t2_right_icon_g1

0x7cca,	// (0x000ab92f) list_medium_line_t2_right_icon_t1

0x7cda,	// (0x000ab93f) list_medium_line_t2_right_icon_t2

0x0001,

0xfc81,	// (0x000b38e6) list_medium_line_t2_right_icon_t

0xc0a4,	// (0x000afd09) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc0a4,	// (0x000afd09) bg_sp_fs_ctrlbar_pane

0x7d34,	// (0x000ab999) main_sp_fs_ctrlbar_button_pane_cp01

0x7d3e,	// (0x000ab9a3) main_sp_fs_ctrlbar_ddmenu_pane

0xe0e8,	// (0x000b1d4d) main_sp_fs_ctrlbar_pane_g1

0xe0f4,	// (0x000b1d59) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x012e,	// (0x000a3d93) main_sp_fs_ctrlbar_pane_g

0xe100,	// (0x000b1d65) main_sp_fs_ctrlbar_pane_t1

0x7d48,	// (0x000ab9ad) main_sp_fs_ctrlbar_pane

0x7d6c,	// (0x000ab9d1) main_sp_fs_listscroll_pane_te_cp01

0x7d8c,	// (0x000ab9f1) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7d8c,	// (0x000ab9f1) popup_sp_fs_action_menu_pane_cp01

0xe200,	// (0x000b1e65) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe200,	// (0x000b1e65) bg_sp_fs_highlight_list_pane_cp01

0xe130,	// (0x000b1d95) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe130,	// (0x000b1d95) sp_fs_action_menu_list_gene_pane_g1

0xe13f,	// (0x000b1da4) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe13f,	// (0x000b1da4) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0x0138,	// (0x000a3d9d) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0x0138,	// (0x000a3d9d) sp_fs_action_menu_list_gene_pane_g

0xe14c,	// (0x000b1db1) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe14c,	// (0x000b1db1) sp_fs_action_menu_list_gene_pane_t1

0xe164,	// (0x000b1dc9) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe164,	// (0x000b1dc9) sp_fs_action_menu_list_gene_pane

0xe183,	// (0x000b1de8) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe183,	// (0x000b1de8) popup_sp_fs_action_menu_bg_pane

0xe191,	// (0x000b1df6) sp_fs_action_menu_list_pane_ParamLimits

0xe191,	// (0x000b1df6) sp_fs_action_menu_list_pane

0x7dbc,	// (0x000aba21) sp_fs_scroll_pane_cp01_ParamLimits

0x7dbc,	// (0x000aba21) sp_fs_scroll_pane_cp01

0x7de2,	// (0x000aba47) list_medium_line_plain_t2_t1

0x7df2,	// (0x000aba57) list_medium_line_plain_t2_t2

0x0001,

0xfc86,	// (0x000b38eb) list_medium_line_plain_t2_t

0x7e02,	// (0x000aba67) list_medium_line_plain_t3_t1

0x7e12,	// (0x000aba77) list_medium_line_plain_t3_t2

0x7e20,	// (0x000aba85) list_medium_line_plain_t3_t3

0x0002,

0xfc8b,	// (0x000b38f0) list_medium_line_plain_t3_t

0x14c7,	// (0x000a512c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x14c7,	// (0x000a512c) list_medium_line_x2_t2_g2_g1

0x14df,	// (0x000a5144) list_medium_line_x2_t2_g2_g2_ParamLimits

0x14df,	// (0x000a5144) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000b2eab) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000b2eab) list_medium_line_x2_t2_g2_g

0x2525,	// (0x000a618a) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2525,	// (0x000a618a) list_medium_line_x2_t2_g2_t1

0x1514,	// (0x000a5179) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1514,	// (0x000a5179) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc92,	// (0x000b38f7) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc92,	// (0x000b38f7) list_medium_line_x2_t2_g2_t

0x14c7,	// (0x000a512c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x14c7,	// (0x000a512c) list_medium_line_x2_t4_g2_g1

0x7e2e,	// (0x000aba93) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7e2e,	// (0x000aba93) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc97,	// (0x000b38fc) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc97,	// (0x000b38fc) list_medium_line_x2_t4_g2_g

0x7e40,	// (0x000abaa5) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7e40,	// (0x000abaa5) list_medium_line_x2_t4_g2_t1

0x7e5a,	// (0x000ababf) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7e5a,	// (0x000ababf) list_medium_line_x2_t4_g2_t2

0x7e70,	// (0x000abad5) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7e70,	// (0x000abad5) list_medium_line_x2_t4_g2_t3

0x1514,	// (0x000a5179) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1514,	// (0x000a5179) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc9c,	// (0x000b3901) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc9c,	// (0x000b3901) list_medium_line_x2_t4_g2_t

0x7e85,	// (0x000abaea) list_medium_line_t3_right_iconx2_g1

0x7cc2,	// (0x000ab927) list_medium_line_t3_right_iconx2_g2

0x7e8d,	// (0x000abaf2) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfca5,	// (0x000b390a) list_medium_line_t3_right_iconx2_g

0x7e97,	// (0x000abafc) list_medium_line_t3_right_iconx2_t1

0x7ea7,	// (0x000abb0c) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcac,	// (0x000b3911) list_medium_line_t3_right_iconx2_t

0x14c7,	// (0x000a512c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x14c7,	// (0x000a512c) list_medium_line_x3_t4_g4_g1

0x14d3,	// (0x000a5138) list_medium_line_x3_t4_g4_g2_ParamLimits

0x14d3,	// (0x000a5138) list_medium_line_x3_t4_g4_g2

0x155d,	// (0x000a51c2) list_medium_line_x3_t4_g4_g3_ParamLimits

0x155d,	// (0x000a51c2) list_medium_line_x3_t4_g4_g3

0x7eb5,	// (0x000abb1a) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7eb5,	// (0x000abb1a) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcb1,	// (0x000b3916) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcb1,	// (0x000b3916) list_medium_line_x3_t4_g4_g

0x7ec1,	// (0x000abb26) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7ec1,	// (0x000abb26) list_medium_line_x3_t4_g4_t1

0x7ed8,	// (0x000abb3d) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7ed8,	// (0x000abb3d) list_medium_line_x3_t4_g4_t2

0x253a,	// (0x000a619f) list_medium_line_x3_t4_g4_t3_ParamLimits

0x253a,	// (0x000a619f) list_medium_line_x3_t4_g4_t3

0x7ef3,	// (0x000abb58) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7ef3,	// (0x000abb58) list_medium_line_x3_t4_g4_t4

0x0003,

0xfcba,	// (0x000b391f) list_medium_line_x3_t4_g4_t_ParamLimits

0xfcba,	// (0x000b391f) list_medium_line_x3_t4_g4_t

0x7f10,	// (0x000abb75) list_single_dyc_row_text_pane_t1_ParamLimits

0x7f10,	// (0x000abb75) list_single_dyc_row_text_pane_t1

0x7f59,	// (0x000abbbe) list_single_dyc_row_text_pane_t2_ParamLimits

0x7f59,	// (0x000abbbe) list_single_dyc_row_text_pane_t2

0xe1b1,	// (0x000b1e16) list_single_dyc_row_text_pane_t3_ParamLimits

0xe1b1,	// (0x000b1e16) list_single_dyc_row_text_pane_t3

0x0005,

0xfcc3,	// (0x000b3928) list_single_dyc_row_text_pane_t_ParamLimits

0xfcc3,	// (0x000b3928) list_single_dyc_row_text_pane_t

0xe220,	// (0x000b1e85) list_single_dyc_row_pane_g1_ParamLimits

0xe220,	// (0x000b1e85) list_single_dyc_row_pane_g1

0xe22c,	// (0x000b1e91) list_single_dyc_row_pane_g2_ParamLimits

0xe22c,	// (0x000b1e91) list_single_dyc_row_pane_g2

0xe238,	// (0x000b1e9d) list_single_dyc_row_pane_g3_ParamLimits

0xe238,	// (0x000b1e9d) list_single_dyc_row_pane_g3

0xe244,	// (0x000b1ea9) list_single_dyc_row_pane_g4_ParamLimits

0xe244,	// (0x000b1ea9) list_single_dyc_row_pane_g4

0x0003,

0xfcd0,	// (0x000b3935) list_single_dyc_row_pane_g_ParamLimits

0xfcd0,	// (0x000b3935) list_single_dyc_row_pane_g

0xe250,	// (0x000b1eb5) list_single_dyc_row_text_pane_ParamLimits

0xe250,	// (0x000b1eb5) list_single_dyc_row_text_pane

0xe1c3,	// (0x000b1e28) bg_sp_fs_scroll_pane

0xe26f,	// (0x000b1ed4) thumb_sp_fs_scroll_pane

0x6584,	// (0x000aa1e9) list_medium_line_g1_ParamLimits

0x6584,	// (0x000aa1e9) list_medium_line_g1

0x808e,	// (0x000abcf3) list_medium_line_t1_ParamLimits

0x808e,	// (0x000abcf3) list_medium_line_t1

0x14c7,	// (0x000a512c) list_medium_line_x2_g1_ParamLimits

0x14c7,	// (0x000a512c) list_medium_line_x2_g1

0x14d3,	// (0x000a5138) list_medium_line_x2_g2_ParamLimits

0x14d3,	// (0x000a5138) list_medium_line_x2_g2

0x0001,

0xfcd9,	// (0x000b393e) list_medium_line_x2_g_ParamLimits

0xfcd9,	// (0x000b393e) list_medium_line_x2_g

0xe278,	// (0x000b1edd) list_medium_line_x2_t1_ParamLimits

0xe278,	// (0x000b1edd) list_medium_line_x2_t1

0x14c7,	// (0x000a512c) list_medium_line_x3_g1_ParamLimits

0x14c7,	// (0x000a512c) list_medium_line_x3_g1

0x14d3,	// (0x000a5138) list_medium_line_x3_g2_ParamLimits

0x14d3,	// (0x000a5138) list_medium_line_x3_g2

0x0001,

0xfcd9,	// (0x000b393e) list_medium_line_x3_g_ParamLimits

0xfcd9,	// (0x000b393e) list_medium_line_x3_g

0xe278,	// (0x000b1edd) list_medium_line_x3_t1_ParamLimits

0xe278,	// (0x000b1edd) list_medium_line_x3_t1

0xe28e,	// (0x000b1ef3) thumb_sp_fs_scroll_pane_g1

0xe297,	// (0x000b1efc) thumb_sp_fs_scroll_pane_g2

0xe2a0,	// (0x000b1f05) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfcde,	// (0x000b3943) thumb_sp_fs_scroll_pane_g

0xe28e,	// (0x000b1ef3) bg_sp_fs_scroll_pane_g1

0xe297,	// (0x000b1efc) bg_sp_fs_scroll_pane_g2

0xe2a0,	// (0x000b1f05) bg_sp_fs_scroll_pane_g3

0x0002,

0xfcde,	// (0x000b3943) bg_sp_fs_scroll_pane_g

0x14c7,	// (0x000a512c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x14c7,	// (0x000a512c) list_medium_line_x2_t3_g4_g1

0x1551,	// (0x000a51b6) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1551,	// (0x000a51b6) list_medium_line_x2_t3_g4_g2

0x14d3,	// (0x000a5138) list_medium_line_x2_t3_g4_g3_ParamLimits

0x14d3,	// (0x000a5138) list_medium_line_x2_t3_g4_g3

0x14df,	// (0x000a5144) list_medium_line_x2_t3_g4_g4_ParamLimits

0x14df,	// (0x000a5144) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000b2f27) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000b2f27) list_medium_line_x2_t3_g4_g

0x80a3,	// (0x000abd08) list_medium_line_x2_t3_g4_t1_ParamLimits

0x80a3,	// (0x000abd08) list_medium_line_x2_t3_g4_t1

0x80bd,	// (0x000abd22) list_medium_line_x2_t3_g4_t2_ParamLimits

0x80bd,	// (0x000abd22) list_medium_line_x2_t3_g4_t2

0x1514,	// (0x000a5179) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1514,	// (0x000a5179) list_medium_line_x2_t3_g4_t3

0x0002,

0xfce5,	// (0x000b394a) list_medium_line_x2_t3_g4_t_ParamLimits

0xfce5,	// (0x000b394a) list_medium_line_x2_t3_g4_t

0x6584,	// (0x000aa1e9) list_medium_line_g2_g1_ParamLimits

0x6584,	// (0x000aa1e9) list_medium_line_g2_g1

0x6590,	// (0x000aa1f5) list_medium_line_g2_g2_ParamLimits

0x6590,	// (0x000aa1f5) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x000b3678) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x000b3678) list_medium_line_g2_g

0x80d7,	// (0x000abd3c) list_medium_line_g2_t1_ParamLimits

0x80d7,	// (0x000abd3c) list_medium_line_g2_t1

0x6584,	// (0x000aa1e9) list_medium_line_t3_g2_g1_ParamLimits

0x6584,	// (0x000aa1e9) list_medium_line_t3_g2_g1

0x6590,	// (0x000aa1f5) list_medium_line_t3_g2_g2_ParamLimits

0x6590,	// (0x000aa1f5) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x000b3678) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x000b3678) list_medium_line_t3_g2_g

0x80ec,	// (0x000abd51) list_medium_line_t3_g2_t1_ParamLimits

0x80ec,	// (0x000abd51) list_medium_line_t3_g2_t1

0x8106,	// (0x000abd6b) list_medium_line_t3_g2_t2_ParamLimits

0x8106,	// (0x000abd6b) list_medium_line_t3_g2_t2

0x811c,	// (0x000abd81) list_medium_line_t3_g2_t3_ParamLimits

0x811c,	// (0x000abd81) list_medium_line_t3_g2_t3

0x0002,

0xfcec,	// (0x000b3951) list_medium_line_t3_g2_t_ParamLimits

0xfcec,	// (0x000b3951) list_medium_line_t3_g2_t

0x7cc2,	// (0x000ab927) list_medium_line_right_icon_g1

0x8136,	// (0x000abd9b) list_medium_line_right_icon_t1

0x6584,	// (0x000aa1e9) list_medium_line_t2_g1_ParamLimits

0x6584,	// (0x000aa1e9) list_medium_line_t2_g1

0x8144,	// (0x000abda9) list_medium_line_t2_t1_ParamLimits

0x8144,	// (0x000abda9) list_medium_line_t2_t1

0x815e,	// (0x000abdc3) list_medium_line_t2_t2_ParamLimits

0x815e,	// (0x000abdc3) list_medium_line_t2_t2

0x0001,

0xfcf3,	// (0x000b3958) list_medium_line_t2_t_ParamLimits

0xfcf3,	// (0x000b3958) list_medium_line_t2_t

0x6584,	// (0x000aa1e9) list_medium_line_t3_g1_ParamLimits

0x6584,	// (0x000aa1e9) list_medium_line_t3_g1

0x8177,	// (0x000abddc) list_medium_line_t3_t1_ParamLimits

0x8177,	// (0x000abddc) list_medium_line_t3_t1

0x8191,	// (0x000abdf6) list_medium_line_t3_t2_ParamLimits

0x8191,	// (0x000abdf6) list_medium_line_t3_t2

0x81a7,	// (0x000abe0c) list_medium_line_t3_t3_ParamLimits

0x81a7,	// (0x000abe0c) list_medium_line_t3_t3

0x0002,

0xfcf8,	// (0x000b395d) list_medium_line_t3_t_ParamLimits

0xfcf8,	// (0x000b395d) list_medium_line_t3_t

0x6584,	// (0x000aa1e9) list_medium_line_g3_g1_ParamLimits

0x6584,	// (0x000aa1e9) list_medium_line_g3_g1

0x81bc,	// (0x000abe21) list_medium_line_g3_g2_ParamLimits

0x81bc,	// (0x000abe21) list_medium_line_g3_g2

0x6590,	// (0x000aa1f5) list_medium_line_g3_g3_ParamLimits

0x6590,	// (0x000aa1f5) list_medium_line_g3_g3

0x0002,

0xfcff,	// (0x000b3964) list_medium_line_g3_g_ParamLimits

0xfcff,	// (0x000b3964) list_medium_line_g3_g

0x81c8,	// (0x000abe2d) list_medium_line_g3_t1_ParamLimits

0x81c8,	// (0x000abe2d) list_medium_line_g3_t1

0x6584,	// (0x000aa1e9) list_medium_line_t2_g3_g1_ParamLimits

0x6584,	// (0x000aa1e9) list_medium_line_t2_g3_g1

0x81bc,	// (0x000abe21) list_medium_line_t2_g3_g2_ParamLimits

0x81bc,	// (0x000abe21) list_medium_line_t2_g3_g2

0x6590,	// (0x000aa1f5) list_medium_line_t2_g3_g3_ParamLimits

0x6590,	// (0x000aa1f5) list_medium_line_t2_g3_g3

0x0002,

0xfcff,	// (0x000b3964) list_medium_line_t2_g3_g_ParamLimits

0xfcff,	// (0x000b3964) list_medium_line_t2_g3_g

0x81dd,	// (0x000abe42) list_medium_line_t2_g3_t1_ParamLimits

0x81dd,	// (0x000abe42) list_medium_line_t2_g3_t1

0x81f7,	// (0x000abe5c) list_medium_line_t2_g3_t2_ParamLimits

0x81f7,	// (0x000abe5c) list_medium_line_t2_g3_t2

0x0001,

0xfd06,	// (0x000b396b) list_medium_line_t2_g3_t_ParamLimits

0xfd06,	// (0x000b396b) list_medium_line_t2_g3_t

0x6584,	// (0x000aa1e9) list_medium_line_t3_g3_g1_ParamLimits

0x6584,	// (0x000aa1e9) list_medium_line_t3_g3_g1

0x81bc,	// (0x000abe21) list_medium_line_t3_g3_g2_ParamLimits

0x81bc,	// (0x000abe21) list_medium_line_t3_g3_g2

0x6590,	// (0x000aa1f5) list_medium_line_t3_g3_g3_ParamLimits

0x6590,	// (0x000aa1f5) list_medium_line_t3_g3_g3

0x0002,

0xfcff,	// (0x000b3964) list_medium_line_t3_g3_g_ParamLimits

0xfcff,	// (0x000b3964) list_medium_line_t3_g3_g

0x8215,	// (0x000abe7a) list_medium_line_t3_g3_t1_ParamLimits

0x8215,	// (0x000abe7a) list_medium_line_t3_g3_t1

0x822e,	// (0x000abe93) list_medium_line_t3_g3_t2_ParamLimits

0x822e,	// (0x000abe93) list_medium_line_t3_g3_t2

0x8244,	// (0x000abea9) list_medium_line_t3_g3_t3_ParamLimits

0x8244,	// (0x000abea9) list_medium_line_t3_g3_t3

0x0002,

0xfd0b,	// (0x000b3970) list_medium_line_t3_g3_t_ParamLimits

0xfd0b,	// (0x000b3970) list_medium_line_t3_g3_t

0x7e85,	// (0x000abaea) list_medium_line_right_iconx2_g1

0x7cc2,	// (0x000ab927) list_medium_line_right_iconx2_g2

0x0001,

0xfd12,	// (0x000b3977) list_medium_line_right_iconx2_g

0xeffc,	// (0x000b2c61) list_medium_line_right_iconx2_t1

0x7e85,	// (0x000abaea) list_medium_line_t2_right_iconx2_g1

0x7cc2,	// (0x000ab927) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd12,	// (0x000b3977) list_medium_line_t2_right_iconx2_g

0x825e,	// (0x000abec3) list_medium_line_t2_right_iconx2_t1

0x826e,	// (0x000abed3) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd17,	// (0x000b397c) list_medium_line_t2_right_iconx2_t

0x8280,	// (0x000abee5) list_medium_line_x4_t4_t1

0x828e,	// (0x000abef3) list_medium_line_x4_t4_t2

0x829e,	// (0x000abf03) list_medium_line_x4_t4_t3

0x82ae,	// (0x000abf13) list_medium_line_x4_t4_t4

0x0003,

0xfd1c,	// (0x000b3981) list_medium_line_x4_t4_t

0x8301,	// (0x000abf66) tport_appsw_pane_ParamLimits

0x8301,	// (0x000abf66) tport_appsw_pane

0x8319,	// (0x000abf7e) tport_contact_pane_ParamLimits

0x8319,	// (0x000abf7e) tport_contact_pane

0x8331,	// (0x000abf96) tport_listscroll_pane_ParamLimits

0x8331,	// (0x000abf96) tport_listscroll_pane

0x834b,	// (0x000abfb0) cell_tport_appsw_pane_ParamLimits

0x834b,	// (0x000abfb0) cell_tport_appsw_pane

0xcf76,	// (0x000b0bdb) tport_appsw_pane_g1_ParamLimits

0xcf76,	// (0x000b0bdb) tport_appsw_pane_g1

0xe2a9,	// (0x000b1f0e) tport_contact_pane_g1

0xe2b2,	// (0x000b1f17) tport_contact_pane_t1

0xe2c0,	// (0x000b1f25) tport_contact_pane_t2

0x0001,

0xfd25,	// (0x000b398a) tport_contact_pane_t

0xe2ce,	// (0x000b1f33) list_tport_pane

0xe2d7,	// (0x000b1f3c) scroll_pane_cp_030

0x8393,	// (0x000abff8) cell_tport_appsw_pane_g1

0x83a3,	// (0x000ac008) cell_tport_appsw_pane_t1

0x83b1,	// (0x000ac016) grid_highlight_pane_cp019

0x83b9,	// (0x000ac01e) list_tport_double_graphic_pane_ParamLimits

0x83b9,	// (0x000ac01e) list_tport_double_graphic_pane

0xe200,	// (0x000b1e65) list_highlight_pane_cp023_ParamLimits

0xe200,	// (0x000b1e65) list_highlight_pane_cp023

0x83c6,	// (0x000ac02b) list_tport_double_graphic_pane_g1_ParamLimits

0x83c6,	// (0x000ac02b) list_tport_double_graphic_pane_g1

0x83d3,	// (0x000ac038) list_tport_double_graphic_pane_t1_ParamLimits

0x83d3,	// (0x000ac038) list_tport_double_graphic_pane_t1

0x83e8,	// (0x000ac04d) list_tport_double_graphic_pane_t2_ParamLimits

0x83e8,	// (0x000ac04d) list_tport_double_graphic_pane_t2

0x0001,

0xfd31,	// (0x000b3996) list_tport_double_graphic_pane_t_ParamLimits

0xfd31,	// (0x000b3996) list_tport_double_graphic_pane_t

0xe1c3,	// (0x000b1e28) main_cale_note_pane

0x5d34,	// (0x000a9999) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5d34,	// (0x000a9999) cell_vitu2_function_top_wide_pane_cp01

0x77e7,	// (0x000ab44c) wait_bar_pane_cp05_ParamLimits

0xe200,	// (0x000b1e65) listscroll_cmail_pane

0xe2e0,	// (0x000b1f45) list_cmail_pane

0x83fa,	// (0x000ac05f) list_cmail_body_pane

0x840f,	// (0x000ac074) list_single_cmail_header_caption_pane

0x8426,	// (0x000ac08b) list_single_cmail_header_detail_pane_ParamLimits

0x8426,	// (0x000ac08b) list_single_cmail_header_detail_pane

0xe2f0,	// (0x000b1f55) list_single_cmail_header_caption_pane_t1

0x8450,	// (0x000ac0b5) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8450,	// (0x000ac0b5) list_single_cmail_header_detail_pane_g1

0xf00a,	// (0x000b2c6f) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf00a,	// (0x000b2c6f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd36,	// (0x000b399b) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd36,	// (0x000b399b) list_single_cmail_header_detail_pane_g

0xe314,	// (0x000b1f79) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe314,	// (0x000b1f79) list_single_cmail_header_detail_pane_t1

0xe374,	// (0x000b1fd9) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe374,	// (0x000b1fd9) list_single_cmail_header_editor_pane_bg

0xdc88,	// (0x000b18ed) list_cmail_body_pane_g1

0xe38b,	// (0x000b1ff0) list_cmail_body_pane_t1

0xcfb3,	// (0x000b0c18) list_single_cmail_header_editor_pane_bg_g1

0xa3b8,	// (0x000ae01d) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcfc3,	// (0x000b0c28) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcfbb,	// (0x000b0c20) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd1ef,	// (0x000b0e54) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcfe3,	// (0x000b0c48) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcfd3,	// (0x000b0c38) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcfdb,	// (0x000b0c40) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa398,	// (0x000adffd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8468,	// (0x000ac0cd) calenote_gesture_pane_ParamLimits

0x8468,	// (0x000ac0cd) calenote_gesture_pane

0x8488,	// (0x000ac0ed) calenote_window_pane_ParamLimits

0x8488,	// (0x000ac0ed) calenote_window_pane

0xe399,	// (0x000b1ffe) popup_note_window_cp01

0x84a4,	// (0x000ac109) calenote_swipe_1_pane_ParamLimits

0x84a4,	// (0x000ac109) calenote_swipe_1_pane

0x7c64,	// (0x000ab8c9) calenote_swipe_2_pane_ParamLimits

0x7c64,	// (0x000ab8c9) calenote_swipe_2_pane

0xdff5,	// (0x000b1c5a) calenote_swipe_1_pane_g1_ParamLimits

0xdff5,	// (0x000b1c5a) calenote_swipe_1_pane_g1

0xe002,	// (0x000b1c67) calenote_swipe_1_pane_g2_ParamLimits

0xe002,	// (0x000b1c67) calenote_swipe_1_pane_g2

0x0001,

0xfc69,	// (0x000b38ce) calenote_swipe_1_pane_g_ParamLimits

0xfc69,	// (0x000b38ce) calenote_swipe_1_pane_g

0xe3ab,	// (0x000b2010) calenote_swipe_1_pane_t1_ParamLimits

0xe3ab,	// (0x000b2010) calenote_swipe_1_pane_t1

0xdff5,	// (0x000b1c5a) calenote_swipe_2_pane_g1_ParamLimits

0xdff5,	// (0x000b1c5a) calenote_swipe_2_pane_g1

0xe3ca,	// (0x000b202f) calenote_swipe_2_pane_g2_ParamLimits

0xe3ca,	// (0x000b202f) calenote_swipe_2_pane_g2

0x0001,

0xfd42,	// (0x000b39a7) calenote_swipe_2_pane_g_ParamLimits

0xfd42,	// (0x000b39a7) calenote_swipe_2_pane_g

0xe3d6,	// (0x000b203b) calenote_swipe_2_pane_t1_ParamLimits

0xe3d6,	// (0x000b203b) calenote_swipe_2_pane_t1

0xe1c3,	// (0x000b1e28) main_mup_navstr_pane

0x49f8,	// (0x000a865d) main_mup3_pane_t7_ParamLimits

0x49f8,	// (0x000a865d) main_mup3_pane_t7

0x9b9d,	// (0x000ad802) main_mp4_pane_g6_ParamLimits

0x9b9d,	// (0x000ad802) main_mp4_pane_g6

0x9d41,	// (0x000ad9a6) main_image3_pane_t4_ParamLimits

0x9d41,	// (0x000ad9a6) main_image3_pane_t4

0x84b9,	// (0x000ac11e) popup_navstr_preview_pane_ParamLimits

0x84b9,	// (0x000ac11e) popup_navstr_preview_pane

0x84cd,	// (0x000ac132) scroll_navstr_pane_ParamLimits

0x84cd,	// (0x000ac132) scroll_navstr_pane

0xe1c3,	// (0x000b1e28) bg_popup_preview_window_pane_cp04

0xe3fd,	// (0x000b2062) popup_navstr_preview_pane_t1

0x84e1,	// (0x000ac146) scroll_navstr_pane_g1_ParamLimits

0x84e1,	// (0x000ac146) scroll_navstr_pane_g1

0x84f5,	// (0x000ac15a) scroll_navstr_pane_t1_ParamLimits

0x84f5,	// (0x000ac15a) scroll_navstr_pane_t1

0xe3a2,	// (0x000b2007) bg_button_pane_cp014

0xe3a2,	// (0x000b2007) bg_button_pane_cp030

0x7afe,	// (0x000ab763) list_double_fisheye_pane_g4_ParamLimits

0x7afe,	// (0x000ab763) list_double_fisheye_pane_g4

0x7b0a,	// (0x000ab76f) list_double_fisheye_pane_g5_ParamLimits

0x7b0a,	// (0x000ab76f) list_double_fisheye_pane_g5

0xb5eb,	// (0x000af250) sp_fs_scroll_pane_cp03

0xe0e8,	// (0x000b1d4d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe0f4,	// (0x000b1d59) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x012e,	// (0x000a3d93) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe100,	// (0x000b1d65) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe2e8,	// (0x000b1f4d) sp_fs_scroll_pane_cp02

0xa09e,	// (0x000add03) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa09e,	// (0x000add03) popup_sp_fs_calendar_preview_list_single_pane

0xe1c3,	// (0x000b1e28) main_cam6_pano_pane

0x9479,	// (0x000ad0de) main_mup3_pane_ParamLimits

0xe1c3,	// (0x000b1e28) main_phacti_pane

0x76ba,	// (0x000ab31f) bg_button_pane_cp11

0x76d4,	// (0x000ab339) main_mobtv_info_pane_g2_ParamLimits

0x76d4,	// (0x000ab339) main_mobtv_info_pane_g2

0x0001,

0xfc1b,	// (0x000b3880) main_mobtv_info_pane_g_ParamLimits

0xfc1b,	// (0x000b3880) main_mobtv_info_pane_g

0x78b1,	// (0x000ab516) sc_clock_pane_t5_ParamLimits

0x78b1,	// (0x000ab516) sc_clock_pane_t5

0x7979,	// (0x000ab5de) main_radioblah_pane_g1_ParamLimits

0xdf26,	// (0x000b1b8b) main_radioblah_pane_t3_ParamLimits

0xdf26,	// (0x000b1b8b) main_radioblah_pane_t3

0xdf3e,	// (0x000b1ba3) main_radioblah_pane_t4_ParamLimits

0xdf3e,	// (0x000b1ba3) main_radioblah_pane_t4

0x79a1,	// (0x000ab606) main_radioblah_text_pane_ParamLimits

0x79a1,	// (0x000ab606) main_radioblah_text_pane

0x79b3,	// (0x000ab618) main_radioblah_info_pane_g1_ParamLimits

0x7a4c,	// (0x000ab6b1) main_radioblah_info_pane_t4_ParamLimits

0x7a4c,	// (0x000ab6b1) main_radioblah_info_pane_t4

0xe200,	// (0x000b1e65) main_sp_fs_calendar_pane

0x850c,	// (0x000ac171) main_phacti_pane_g1

0x8514,	// (0x000ac179) phacti_note_pane_ParamLimits

0x8514,	// (0x000ac179) phacti_note_pane

0xe414,	// (0x000b2079) phacti_term_pane_ParamLimits

0xe414,	// (0x000b2079) phacti_term_pane

0xe429,	// (0x000b208e) phacti_note_pane_t1_ParamLimits

0xe429,	// (0x000b208e) phacti_note_pane_t1

0xe440,	// (0x000b20a5) phacti_term_pane_g1

0xe448,	// (0x000b20ad) phacti_term_pane_t1_ParamLimits

0xe448,	// (0x000b20ad) phacti_term_pane_t1

0xe472,	// (0x000b20d7) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe47a,	// (0x000b20df) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd4c,	// (0x000b39b1) popup_sp_fs_calendar_preview_list_single_pane_g

0xe482,	// (0x000b20e7) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe482,	// (0x000b20e7) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe498,	// (0x000b20fd) aid_popup_sp_fs_bg_corner_pane

0xc4b5,	// (0x000b011a) popup_sp_fs_calendar_preview_bg_pane_g1

0xe1c3,	// (0x000b1e28) popup_sp_fs_calendar_preview_bg_pane

0x1350,	// (0x000a4fb5) popup_sp_fs_calendar_preview_list_pane

0xc0a4,	// (0x000afd09) bg_main_sp_fs_cale_pane_ParamLimits

0xc0a4,	// (0x000afd09) bg_main_sp_fs_cale_pane

0xe4a9,	// (0x000b210e) listscroll_cale_mrui_pane_ParamLimits

0xe4a9,	// (0x000b210e) listscroll_cale_mrui_pane

0xe4be,	// (0x000b2123) listscroll_sp_fs_schedule_track_pane

0xe4c7,	// (0x000b212c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe4c7,	// (0x000b212c) main_sp_fs_ctrlbar_pane_cp01

0xe4da,	// (0x000b213f) main_sp_fs_ribbon_pane

0xe4e2,	// (0x000b2147) popup_sp_fs_cale_preview_window

0x8589,	// (0x000ac1ee) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8589,	// (0x000ac1ee) list_single_sp_fs_schedule_track_pane

0xe200,	// (0x000b1e65) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe200,	// (0x000b1e65) bg_sp_fs_highlight_list_pane_cp03

0x859d,	// (0x000ac202) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x859d,	// (0x000ac202) list_single_sp_fs_schedule_track_pane_g1

0x85a9,	// (0x000ac20e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x85a9,	// (0x000ac20e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd51,	// (0x000b39b6) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd51,	// (0x000b39b6) list_single_sp_fs_schedule_track_pane_g

0x85b5,	// (0x000ac21a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x85b5,	// (0x000ac21a) list_single_sp_fs_schedule_track_pane_t1

0x85cf,	// (0x000ac234) sp_fs_schedule_track_pane_ParamLimits

0x85cf,	// (0x000ac234) sp_fs_schedule_track_pane

0xe4f4,	// (0x000b2159) sp_fs_schedule_track_pane_g1

0xe4fc,	// (0x000b2161) sp_fs_schedule_track_pane_g2

0xe504,	// (0x000b2169) sp_fs_schedule_track_pane_g3

0xe50c,	// (0x000b2171) sp_fs_schedule_track_pane_g4

0xe514,	// (0x000b2179) sp_fs_schedule_track_pane_g5

0x0004,

0xfd56,	// (0x000b39bb) sp_fs_schedule_track_pane_g

0xcfb3,	// (0x000b0c18) bg_sp_fs_schedule_viewer_highlight_g1

0xa3b8,	// (0x000ae01d) bg_sp_fs_schedule_viewer_highlight_g2

0xcfbb,	// (0x000b0c20) bg_sp_fs_schedule_viewer_highlight_g3

0xcfc3,	// (0x000b0c28) bg_sp_fs_schedule_viewer_highlight_g4

0xd1ef,	// (0x000b0e54) bg_sp_fs_schedule_viewer_highlight_g5

0xcfd3,	// (0x000b0c38) bg_sp_fs_schedule_viewer_highlight_g6

0xcfdb,	// (0x000b0c40) bg_sp_fs_schedule_viewer_highlight_g7

0xcfe3,	// (0x000b0c48) bg_sp_fs_schedule_viewer_highlight_g8

0xa398,	// (0x000adffd) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd61,	// (0x000b39c6) bg_sp_fs_schedule_viewer_highlight_g

0xe1c3,	// (0x000b1e28) bg_main_sp_fs_ribbon_pane

0x85e0,	// (0x000ac245) main_sp_fs_ribbon_pane_g1

0xe51c,	// (0x000b2181) main_sp_fs_ribbon_pane_t1

0x85e9,	// (0x000ac24e) main_sp_fs_ribbon_pane_t2

0xe52b,	// (0x000b2190) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd74,	// (0x000b39d9) main_sp_fs_ribbon_pane_t

0xe53a,	// (0x000b219f) main_sp_fs_ribbon_scheduler_pane

0xe542,	// (0x000b21a7) bg_main_sp_fs_ribbon_pane_g1

0xe54b,	// (0x000b21b0) bg_main_sp_fs_ribbon_pane_g2

0xe554,	// (0x000b21b9) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd7b,	// (0x000b39e0) bg_main_sp_fs_ribbon_pane_g

0xe55c,	// (0x000b21c1) main_sp_fs_ribbon_scheduler_pane_g1

0xe565,	// (0x000b21ca) main_sp_fs_ribbon_scheduler_pane_g2

0xe56e,	// (0x000b21d3) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd82,	// (0x000b39e7) main_sp_fs_ribbon_scheduler_pane_g

0xe577,	// (0x000b21dc) list_cale_mrui_pane

0x85f8,	// (0x000ac25d) sp_fs_scroll_pane_cp07_ParamLimits

0x85f8,	// (0x000ac25d) sp_fs_scroll_pane_cp07

0x8614,	// (0x000ac279) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8614,	// (0x000ac279) bg_sp_fs_schedule_viewer_highlight

0xe584,	// (0x000b21e9) list_single_sp_fs_schedule_track_pane_cp01

0xe58c,	// (0x000b21f1) list_sp_fs_schedule_track_pane

0xe594,	// (0x000b21f9) sp_fs_scroll_pane_cp06_ParamLimits

0xe594,	// (0x000b21f9) sp_fs_scroll_pane_cp06

0xc4b5,	// (0x000b011a) bgmain_sp_fs_calendar_pane_g1

0x8624,	// (0x000ac289) list_single_cale_mrui_pane_ParamLimits

0x8624,	// (0x000ac289) list_single_cale_mrui_pane

0xe5a6,	// (0x000b220b) list_single_cale_mrui_row_pane_ParamLimits

0xe5a6,	// (0x000b220b) list_single_cale_mrui_row_pane

0xe5b3,	// (0x000b2218) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe5b3,	// (0x000b2218) list_single_cale_mrui_row_pane_g1

0xe5f8,	// (0x000b225d) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe5f8,	// (0x000b225d) list_single_cale_mrui_row_pane_t1

0x8645,	// (0x000ac2aa) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8645,	// (0x000ac2aa) list_single_cale_mrui_row_pane_t2

0xe60a,	// (0x000b226f) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe60a,	// (0x000b226f) list_single_cale_mrui_row_pane_t3

0xe639,	// (0x000b229e) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe639,	// (0x000b229e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd90,	// (0x000b39f5) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd90,	// (0x000b39f5) list_single_cale_mrui_row_pane_t

0x86ad,	// (0x000ac312) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x86ad,	// (0x000ac312) list_single_cmail_header_editor_pane_bg_cp01

0x86d3,	// (0x000ac338) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x86d3,	// (0x000ac338) list_single_cmail_header_editor_pane_bg_cp02

0x86f3,	// (0x000ac358) main_radioblah_text_pane_t1_ParamLimits

0x86f3,	// (0x000ac358) main_radioblah_text_pane_t1

0xe668,	// (0x000b22cd) cam6_indi_pane_cp01

0xe670,	// (0x000b22d5) cam6_mode_pane_cp01

0xe678,	// (0x000b22dd) cam6_pano_pane

0xe681,	// (0x000b22e6) cam6_zoom_pane_cp01

0xe689,	// (0x000b22ee) cam6_pano_image_pane

0xe694,	// (0x000b22f9) cam6_pano_pane_g1

0xdc88,	// (0x000b18ed) cam6_pano_pane_g2

0xe69d,	// (0x000b2302) cam6_pano_pane_g3

0xe6a6,	// (0x000b230b) cam6_pano_pane_g4

0xcad4,	// (0x000b0739) cam6_pano_pane_g5

0xe6af,	// (0x000b2314) cam6_pano_pane_g6

0xe6b9,	// (0x000b231e) cam6_pano_pane_g7

0xe6c1,	// (0x000b2326) cam6_pano_pane_g8

0xe6ca,	// (0x000b232f) cam6_pano_pane_g9

0x0008,

0xfd99,	// (0x000b39fe) cam6_pano_pane_g

0xe1c3,	// (0x000b1e28) main_browser_tag_pane

0xe3f5,	// (0x000b205a) grid_navstr_albumart_pane

0xe6d5,	// (0x000b233a) cell_navstr_albumart_pane_ParamLimits

0xe6d5,	// (0x000b233a) cell_navstr_albumart_pane

0xe6f5,	// (0x000b235a) cell_navstr_albumart_pane_g1

0xbe75,	// (0x000afada) cell_navstr_albumart_pane_g2

0xbe85,	// (0x000afaea) cell_navstr_albumart_pane_g3

0xbe7d,	// (0x000afae2) cell_navstr_albumart_pane_g4

0x0003,

0xfdac,	// (0x000b3a11) cell_navstr_albumart_pane_g

0x870e,	// (0x000ac373) bt_list_pane_ParamLimits

0x870e,	// (0x000ac373) bt_list_pane

0x8722,	// (0x000ac387) bt_list_pane_t1

0x8731,	// (0x000ac396) bt_list_pane_t2

0x0001,

0xfdb5,	// (0x000b3a1a) bt_list_pane_t

0xe1c3,	// (0x000b1e28) main_cale_prevew_pane

0x8740,	// (0x000ac3a5) popup_cale_preview_window_ParamLimits

0x8740,	// (0x000ac3a5) popup_cale_preview_window

0xe200,	// (0x000b1e65) bg_popup_preview_window_pane_cp05_ParamLimits

0xe200,	// (0x000b1e65) bg_popup_preview_window_pane_cp05

0xe6fd,	// (0x000b2362) list_cale_preview_pane_ParamLimits

0xe6fd,	// (0x000b2362) list_cale_preview_pane

0x8759,	// (0x000ac3be) list_double_cale_preview_pane_ParamLimits

0x8759,	// (0x000ac3be) list_double_cale_preview_pane

0xcfeb,	// (0x000b0c50) list_single_cale_preview_pane_ParamLimits

0xcfeb,	// (0x000b0c50) list_single_cale_preview_pane

0x876b,	// (0x000ac3d0) list_single_cale_preview_pane_g1

0x8773,	// (0x000ac3d8) list_single_cale_preview_pane_t1_ParamLimits

0x8773,	// (0x000ac3d8) list_single_cale_preview_pane_t1

0x8788,	// (0x000ac3ed) list_double_cale_preview_pane_g1

0x8790,	// (0x000ac3f5) list_double_cale_preview_pane_t1_ParamLimits

0x8790,	// (0x000ac3f5) list_double_cale_preview_pane_t1

0x87a5,	// (0x000ac40a) list_double_cale_preview_pane_t2_ParamLimits

0x87a5,	// (0x000ac40a) list_double_cale_preview_pane_t2

0x0001,

0xfdba,	// (0x000b3a1f) list_double_cale_preview_pane_t_ParamLimits

0xfdba,	// (0x000b3a1f) list_double_cale_preview_pane_t

0xe1c3,	// (0x000b1e28) main_ezdial_pane

0xe200,	// (0x000b1e65) main_sp_fs_email_pane_ParamLimits

0x7cec,	// (0x000ab951) cmail_ddmenu_btn01_pane_ParamLimits

0x7cec,	// (0x000ab951) cmail_ddmenu_btn01_pane

0x7cff,	// (0x000ab964) cmail_ddmenu_btn02_pane_ParamLimits

0x7cff,	// (0x000ab964) cmail_ddmenu_btn02_pane

0x7d22,	// (0x000ab987) cmail_ddmenu_btn03_pane_ParamLimits

0x7d22,	// (0x000ab987) cmail_ddmenu_btn03_pane

0x7d48,	// (0x000ab9ad) main_sp_fs_ctrlbar_pane_ParamLimits

0x7d6c,	// (0x000ab9d1) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x83fa,	// (0x000ac05f) list_cmail_body_pane_ParamLimits

0xe2fe,	// (0x000b1f63) bg_button_pane_cp12

0xe307,	// (0x000b1f6c) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe307,	// (0x000b1f6c) list_single_cmail_header_detail_pane_g3

0xe350,	// (0x000b1fb5) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe350,	// (0x000b1fb5) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd3d,	// (0x000b39a2) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd3d,	// (0x000b39a2) list_single_cmail_header_detail_pane_t

0xe45d,	// (0x000b20c2) phacti_term_pane_t2_ParamLimits

0xe45d,	// (0x000b20c2) phacti_term_pane_t2

0x0001,

0xfd47,	// (0x000b39ac) phacti_term_pane_t_ParamLimits

0xfd47,	// (0x000b39ac) phacti_term_pane_t

0xe709,	// (0x000b236e) aid_size_list_single_double

0x87bd,	// (0x000ac422) popup_ezdial_listscroll_window

0x87d9,	// (0x000ac43e) popup_number_entry_window_cp01

0xa15f,	// (0x000addc4) bg_popup_call_pane_cp09

0xe715,	// (0x000b237a) ezdial_list_pane

0xe71d,	// (0x000b2382) scroll_pane_cp23

0xc0a4,	// (0x000afd09) bg_button_pane_cp028_ParamLimits

0xc0a4,	// (0x000afd09) bg_button_pane_cp028

0x87e7,	// (0x000ac44c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x87e7,	// (0x000ac44c) cmail_ddmenu_btn01_pane_g1

0x87f3,	// (0x000ac458) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x87f3,	// (0x000ac458) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfdbf,	// (0x000b3a24) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfdbf,	// (0x000b3a24) cmail_ddmenu_btn01_pane_g

0xe725,	// (0x000b238a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe725,	// (0x000b238a) cmail_ddmenu_btn01_pane_t1

0xc0a4,	// (0x000afd09) bg_button_pane_cp029_ParamLimits

0xc0a4,	// (0x000afd09) bg_button_pane_cp029

0x87ff,	// (0x000ac464) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x87ff,	// (0x000ac464) cmail_ddmenu_btn02_pane_g1

0x8818,	// (0x000ac47d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8818,	// (0x000ac47d) cmail_ddmenu_btn02_pane_t1

0xe200,	// (0x000b1e65) bg_button_pane_cp031_ParamLimits

0xe200,	// (0x000b1e65) bg_button_pane_cp031

0x87ff,	// (0x000ac464) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x87ff,	// (0x000ac464) cmail_ddmenu_btn03_pane_g1

0x8818,	// (0x000ac47d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8818,	// (0x000ac47d) cmail_ddmenu_btn03_pane_t1

0x55a9,	// (0x000a920e) cell_dialer2_keypad_pane_t1_ParamLimits

0x55c3,	// (0x000a9228) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x55c3,	// (0x000a9228) cell_dialer2_keypad_pane_t1_copy1

0x74cf,	// (0x000ab134) ncimui_group_button_pane

0xe200,	// (0x000b1e65) main_sp_fs_calendar_pane_ParamLimits

0x840f,	// (0x000ac074) list_single_cmail_header_caption_pane_ParamLimits

0xe4a0,	// (0x000b2105) aid_recal_txt_sm_pane

0xe1c3,	// (0x000b1e28) mian_recal_day_pane

0xe4e2,	// (0x000b2147) popup_sp_fs_cale_preview_window_ParamLimits

0xe73a,	// (0x000b239f) list_recal_day_pane

0xe77c,	// (0x000b23e1) list_single_recal_day_pane_ParamLimits

0xe77c,	// (0x000b23e1) list_single_recal_day_pane

0xe78e,	// (0x000b23f3) list_single_recal_day_pane_g1_ParamLimits

0xe78e,	// (0x000b23f3) list_single_recal_day_pane_g1

0xe79a,	// (0x000b23ff) list_single_recal_day_pane_g2_ParamLimits

0xe79a,	// (0x000b23ff) list_single_recal_day_pane_g2

0xe7a6,	// (0x000b240b) list_single_recal_day_pane_g3_ParamLimits

0xe7a6,	// (0x000b240b) list_single_recal_day_pane_g3

0x883c,	// (0x000ac4a1) list_single_recal_day_pane_g4_ParamLimits

0x883c,	// (0x000ac4a1) list_single_recal_day_pane_g4

0xe7b2,	// (0x000b2417) list_single_recal_day_pane_g5_ParamLimits

0xe7b2,	// (0x000b2417) list_single_recal_day_pane_g5

0xe7be,	// (0x000b2423) list_single_recal_day_pane_g6_ParamLimits

0xe7be,	// (0x000b2423) list_single_recal_day_pane_g6

0x0004,

0xfdce,	// (0x000b3a33) list_single_recal_day_pane_g_ParamLimits

0xfdce,	// (0x000b3a33) list_single_recal_day_pane_g

0xe7d2,	// (0x000b2437) list_single_recal_day_pane_t1

0xe7e4,	// (0x000b2449) list_single_recal_day_pane_t2

0x0001,

0xfdd9,	// (0x000b3a3e) list_single_recal_day_pane_t

0x8854,	// (0x000ac4b9) ncimui_query_button_pane_ParamLimits

0x8854,	// (0x000ac4b9) ncimui_query_button_pane

0x8864,	// (0x000ac4c9) ncimui_query_button_pane_t1_ParamLimits

0x8864,	// (0x000ac4c9) ncimui_query_button_pane_t1

0xe7f6,	// (0x000b245b) ncimui_query_button_pane_t2_ParamLimits

0xe7f6,	// (0x000b245b) ncimui_query_button_pane_t2

0x0001,

0xfdde,	// (0x000b3a43) ncimui_query_button_pane_t_ParamLimits

0xfdde,	// (0x000b3a43) ncimui_query_button_pane_t

0x8877,	// (0x000ac4dc) query_button_pane_ParamLimits

0x8877,	// (0x000ac4dc) query_button_pane

0xe1c3,	// (0x000b1e28) bg_button_pane_cp0028

0xe809,	// (0x000b246e) query_button_pane_t1

0x3661,	// (0x000a72c6) main_tport_pane_ParamLimits

0x82be,	// (0x000abf23) bg_popup_window_pane_cp01_ParamLimits

0x82be,	// (0x000abf23) bg_popup_window_pane_cp01

0x82d9,	// (0x000abf3e) heading_pane_cp08_ParamLimits

0x82d9,	// (0x000abf3e) heading_pane_cp08

0x82ec,	// (0x000abf51) heading_pane_cp07_ParamLimits

0x82ec,	// (0x000abf51) heading_pane_cp07

0x8393,	// (0x000abff8) cell_tport_appsw_pane_g2

0x0002,

0xfd2a,	// (0x000b398f) cell_tport_appsw_pane_g

0xb5f7,	// (0x000af25c) input_candi_list_open_g1

0xa57b,	// (0x000ae1e0) list_cale_time_pane_g6_ParamLimits

0xa57b,	// (0x000ae1e0) list_cale_time_pane_g6

0x4429,	// (0x000a808e) aid_size_touch_calib_1_ParamLimits

0x4429,	// (0x000a808e) aid_size_touch_calib_1

0x443b,	// (0x000a80a0) aid_size_touch_calib_2_ParamLimits

0x443b,	// (0x000a80a0) aid_size_touch_calib_2

0x4453,	// (0x000a80b8) aid_size_touch_calib_3_ParamLimits

0x4453,	// (0x000a80b8) aid_size_touch_calib_3

0x4471,	// (0x000a80d6) aid_size_touch_calib_4_ParamLimits

0x4471,	// (0x000a80d6) aid_size_touch_calib_4

0x4489,	// (0x000a80ee) main_touch_calib_button_group_pane_ParamLimits

0x4489,	// (0x000a80ee) main_touch_calib_button_group_pane

0x44a1,	// (0x000a8106) main_touch_calib_pane_g1_ParamLimits

0x44b3,	// (0x000a8118) main_touch_calib_pane_g2_ParamLimits

0x44c5,	// (0x000a812a) main_touch_calib_pane_g3_ParamLimits

0x44d7,	// (0x000a813c) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x000b33c9) main_touch_calib_pane_g_ParamLimits

0x44e9,	// (0x000a814e) main_touch_calib_pane_t1_ParamLimits

0x4503,	// (0x000a8168) main_touch_calib_pane_t2_ParamLimits

0x451d,	// (0x000a8182) main_touch_calib_pane_t3_ParamLimits

0x4531,	// (0x000a8196) main_touch_calib_pane_t4_ParamLimits

0x4545,	// (0x000a81aa) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x000b33d2) main_touch_calib_pane_t_ParamLimits

0xc877,	// (0x000b04dc) list_single_fp_cale_pane_g3_ParamLimits

0xc877,	// (0x000b04dc) list_single_fp_cale_pane_g3

0x9479,	// (0x000ad0de) bg_button_pane_cp012_ParamLimits

0x9479,	// (0x000ad0de) bg_vkb2_func_pane_cp03_ParamLimits

0x653a,	// (0x000aa19f) cell_vitu2_function_top_pane_g1_ParamLimits

0x9479,	// (0x000ad0de) bg_vkb2_func_pane_cp04_ParamLimits

0x745a,	// (0x000ab0bf) main_ncimui_button_group_pane_ParamLimits

0x745a,	// (0x000ab0bf) main_ncimui_button_group_pane

0x74ba,	// (0x000ab11f) main_ncimui_pane_t3_ParamLimits

0x74ba,	// (0x000ab11f) main_ncimui_pane_t3

0xe40b,	// (0x000b2070) phacti_button_group_pane

0xe709,	// (0x000b236e) aid_size_list_single_double_ParamLimits

0x87bd,	// (0x000ac422) popup_ezdial_listscroll_window_ParamLimits

0x87d9,	// (0x000ac43e) popup_number_entry_window_cp01_ParamLimits

0x888a,	// (0x000ac4ef) phacti_button_pane_ParamLimits

0x888a,	// (0x000ac4ef) phacti_button_pane

0xe1c3,	// (0x000b1e28) bg_button_pane_cp14

0xe817,	// (0x000b247c) phacti_button_pane_t1

0x889b,	// (0x000ac500) main_touch_calib_button_pane_ParamLimits

0x889b,	// (0x000ac500) main_touch_calib_button_pane

0x9f88,	// (0x000adbed) bg_button_pane_cp18_ParamLimits

0x9f88,	// (0x000adbed) bg_button_pane_cp18

0xe825,	// (0x000b248a) main_touch_calib_button_pane_t1_ParamLimits

0xe825,	// (0x000b248a) main_touch_calib_button_pane_t1

0xe83b,	// (0x000b24a0) main_touch_calib_button_pane_t2_ParamLimits

0xe83b,	// (0x000b24a0) main_touch_calib_button_pane_t2

0x0001,

0xfde3,	// (0x000b3a48) main_touch_calib_button_pane_t_ParamLimits

0xfde3,	// (0x000b3a48) main_touch_calib_button_pane_t

0xe1c3,	// (0x000b1e28) cell_ncimui_button_pane

0xe1c3,	// (0x000b1e28) bg_button_pane_cp032

0xe859,	// (0x000b24be) cell_ncimui_button_pane_t1

0x9d21,	// (0x000ad986) image3_infobar_pane_ParamLimits

0x9d21,	// (0x000ad986) image3_infobar_pane

0x78dd,	// (0x000ab542) fs_bigclock_status_pane_ParamLimits

0x78dd,	// (0x000ab542) fs_bigclock_status_pane

0x78ea,	// (0x000ab54f) main_fs_bigclock_clock_pane_ParamLimits

0x78ea,	// (0x000ab54f) main_fs_bigclock_clock_pane

0x7908,	// (0x000ab56d) main_fs_bigclock_indi_pane_ParamLimits

0x7908,	// (0x000ab56d) main_fs_bigclock_indi_pane

0x793a,	// (0x000ab59f) main_fs_bigclock_swipe_pane_ParamLimits

0x793a,	// (0x000ab59f) main_fs_bigclock_swipe_pane

0xe1c3,	// (0x000b1e28) main_fs_clock_dumped_data

0xdd95,	// (0x000b19fa) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdd95,	// (0x000b19fa) list_single_fs_bigclock_indicator_pane_g1

0xddb1,	// (0x000b1a16) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xddb1,	// (0x000b1a16) list_single_fs_bigclock_indicator_pane_g2

0xddcb,	// (0x000b1a30) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xddcb,	// (0x000b1a30) list_single_fs_bigclock_indicator_pane_g3

0xdde5,	// (0x000b1a4a) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdde5,	// (0x000b1a4a) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x00c2,	// (0x000a3d27) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x00c2,	// (0x000a3d27) list_single_fs_bigclock_indicator_pane_g

0xde10,	// (0x000b1a75) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xde10,	// (0x000b1a75) list_single_fs_bigclock_indicator_pane_t1

0xde38,	// (0x000b1a9d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xde38,	// (0x000b1a9d) list_single_fs_bigclock_indicator_pane_t2

0xde60,	// (0x000b1ac5) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xde60,	// (0x000b1ac5) list_single_fs_bigclock_indicator_pane_t3

0xde88,	// (0x000b1aed) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xde88,	// (0x000b1aed) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x00cd,	// (0x000a3d32) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x00cd,	// (0x000a3d32) list_single_fs_bigclock_indicator_pane_t

0xe867,	// (0x000b24cc) image3_infobar_fav_pane_ParamLimits

0xe867,	// (0x000b24cc) image3_infobar_fav_pane

0xe877,	// (0x000b24dc) image3_infobar_loc_pane_ParamLimits

0xe877,	// (0x000b24dc) image3_infobar_loc_pane

0xe88b,	// (0x000b24f0) image3_infobar_time_pane_ParamLimits

0xe88b,	// (0x000b24f0) image3_infobar_time_pane

0xc4b5,	// (0x000b011a) image3_infobar_time_pane_g1

0xe89b,	// (0x000b2500) image3_infobar_time_pane_t1

0xc4b5,	// (0x000b011a) image3_infobar_loc_pane_g1

0xe8a9,	// (0x000b250e) image3_infobar_loc_pane_g2

0x0001,

0xfde8,	// (0x000b3a4d) image3_infobar_loc_pane_g

0xe8b1,	// (0x000b2516) image3_infobar_loc_pane_t1

0xc4b5,	// (0x000b011a) image3_infobar_fav_pane_g1

0xe8bf,	// (0x000b2524) image3_infobar_fav_pane_g2

0x0001,

0xfded,	// (0x000b3a52) image3_infobar_fav_pane_g

0xe8c7,	// (0x000b252c) fs_bigclock_status_battery_pane

0xe8d0,	// (0x000b2535) fs_bigclock_status_signal_pane

0xe8d9,	// (0x000b253e) fs_bigclock_status_title_pane

0xe8e2,	// (0x000b2547) fs_bigclock_status_signal_pane_g1

0xe8eb,	// (0x000b2550) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdf2,	// (0x000b3a57) fs_bigclock_status_signal_pane_g

0xe8f3,	// (0x000b2558) fs_bigclock_status_battery_pane_g1

0xe8fc,	// (0x000b2561) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdf7,	// (0x000b3a5c) fs_bigclock_status_battery_pane_g

0xe904,	// (0x000b2569) fs_bigclock_status_title_pane_t1

0x88b0,	// (0x000ac515) main_fs_bigclock_clock_pane_g1

0x88b0,	// (0x000ac515) main_fs_bigclock_clock_pane_g2

0x88c1,	// (0x000ac526) main_fs_bigclock_clock_pane_g3

0x88c1,	// (0x000ac526) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdfc,	// (0x000b3a61) main_fs_bigclock_clock_pane_g

0x88d4,	// (0x000ac539) main_fs_bigclock_clock_pane_t1

0x88ea,	// (0x000ac54f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe05,	// (0x000b3a6a) main_fs_bigclock_clock_pane_t

0xe912,	// (0x000b2577) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe912,	// (0x000b2577) list_single_fs_bigclock_indicator_pane

0xe923,	// (0x000b2588) list_single_fs_bigclock_pane_ParamLimits

0xe923,	// (0x000b2588) list_single_fs_bigclock_pane

0xe949,	// (0x000b25ae) main_fs_bigclock_indicator_pane_t1

0xe958,	// (0x000b25bd) list_single_fs_bigclock_pane_g1

0xe960,	// (0x000b25c5) list_single_fs_bigclock_pane_t1

0xc4b5,	// (0x000b011a) main_fs_bigclock_swipe_pane_g1

0xe9a3,	// (0x000b2608) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe16,	// (0x000b3a7b) main_fs_bigclock_swipe_pane_g

0xe9ab,	// (0x000b2610) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe9ab,	// (0x000b2610) main_fs_bigclock_swipe_pane_t1

0x2564,	// (0x000a61c9) call_type_pane_ParamLimits

0xe1c3,	// (0x000b1e28) main_btmg_pane

0xe5df,	// (0x000b2244) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe5df,	// (0x000b2244) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd89,	// (0x000b39ee) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd89,	// (0x000b39ee) list_single_cale_mrui_row_pane_g

0xe763,	// (0x000b23c8) list_recal_vselct_arw_lo_pane

0xe76b,	// (0x000b23d0) list_recal_vselct_arw_up_pane

0xe773,	// (0x000b23d8) list_recal_vselct_pane

0x8944,	// (0x000ac5a9) btmg_button_pane

0x894e,	// (0x000ac5b3) main_btmg_pane_g1

0xe1c3,	// (0x000b1e28) bg_button_pane_cp044

0xe9c8,	// (0x000b262d) btmg_button_pane_t1

0xc090,	// (0x000afcf5) aid_listscroll_gen

0xe200,	// (0x000b1e65) main_cntbar_detail_pane

0xe2e0,	// (0x000b1f45) list_cmail_folder_pane

0xb5eb,	// (0x000af250) sp_fs_scroll_pane_cp03_ParamLimits

0x8958,	// (0x000ac5bd) list_single_fs_dyc_pane_cp01_ParamLimits

0x8958,	// (0x000ac5bd) list_single_fs_dyc_pane_cp01

0xe9d6,	// (0x000b263b) aid_size_cmail_indent

0xe9df,	// (0x000b2644) list_single_dyc_row_pane_cp01

0x89a0,	// (0x000ac605) cntbar_detail_list_pane_ParamLimits

0x89a0,	// (0x000ac605) cntbar_detail_list_pane

0x89ec,	// (0x000ac651) main_cntbar_detail_cont_pane_ParamLimits

0x89ec,	// (0x000ac651) main_cntbar_detail_cont_pane

0xb5eb,	// (0x000af250) scroll_pane_cp032_ParamLimits

0xb5eb,	// (0x000af250) scroll_pane_cp032

0x8a00,	// (0x000ac665) cntbar_detail_list_event_pane_ParamLimits

0x8a00,	// (0x000ac665) cntbar_detail_list_event_pane

0x89b0,	// (0x000ac615) cntbar_detail_list_shct_pane

0xa406,	// (0x000ae06b) aid_list_gen

0xe9e8,	// (0x000b264d) aid_scroll

0xe9f1,	// (0x000b2656) aid_size_touch_scroll_bar

0x6c38,	// (0x000aa89d) aid_list_double

0x6c26,	// (0x000aa88b) aid_list_single

0x6c26,	// (0x000aa88b) aid_list_single_lg

0x8a10,	// (0x000ac675) aid_list_z_g_a_sm

0x8a18,	// (0x000ac67d) aid_list_z_g_d

0x8a20,	// (0x000ac685) aid_txt_z_prm

0x8a2e,	// (0x000ac693) aid_txt_z_prm_cp01

0x8a3c,	// (0x000ac6a1) aid_txt_z_sec

0x8a4a,	// (0x000ac6af) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8a4a,	// (0x000ac6af) main_cntbar_detail_cont_pane_g1

0x8a5e,	// (0x000ac6c3) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8a5e,	// (0x000ac6c3) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe1b,	// (0x000b3a80) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe1b,	// (0x000b3a80) main_cntbar_detail_cont_pane_g

0xe9fa,	// (0x000b265f) main_cntbar_detail_cont_pane_t1

0xea08,	// (0x000b266d) main_cntbar_detail_cont_pane_t2

0xea16,	// (0x000b267b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe20,	// (0x000b3a85) main_cntbar_detail_cont_pane_t

0x8a6e,	// (0x000ac6d3) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8a6e,	// (0x000ac6d3) cell_cntbar_detail_list_shct_pane

0xea24,	// (0x000b2689) cntbar_detail_list_shct_pane_g1

0xea2d,	// (0x000b2692) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe27,	// (0x000b3a8c) cntbar_detail_list_shct_pane_g

0x8a82,	// (0x000ac6e7) cntbar_detail_list_event_pane_g1_ParamLimits

0x8a82,	// (0x000ac6e7) cntbar_detail_list_event_pane_g1

0x8a8e,	// (0x000ac6f3) cntbar_detail_list_event_pane_g2_ParamLimits

0x8a8e,	// (0x000ac6f3) cntbar_detail_list_event_pane_g2

0x0005,

0xfe2c,	// (0x000b3a91) cntbar_detail_list_event_pane_g_ParamLimits

0xfe2c,	// (0x000b3a91) cntbar_detail_list_event_pane_g

0x8afa,	// (0x000ac75f) cntbar_detail_list_event_pane_t1_ParamLimits

0x8afa,	// (0x000ac75f) cntbar_detail_list_event_pane_t1

0x8b0f,	// (0x000ac774) cntbar_detail_list_event_pane_t2_ParamLimits

0x8b0f,	// (0x000ac774) cntbar_detail_list_event_pane_t2

0x0002,

0xfe39,	// (0x000b3a9e) cntbar_detail_list_event_pane_t_ParamLimits

0xfe39,	// (0x000b3a9e) cntbar_detail_list_event_pane_t

0xc4b5,	// (0x000b011a) cell_cntbar_detail_list_shct_pane_g1

0xab54,	// (0x000ae7b9) navi_pane_mv_g3

0xe200,	// (0x000b1e65) main_cntbar_detail_pane_ParamLimits

0xe1c3,	// (0x000b1e28) main_notif_wgt_pane

0x9b37,	// (0x000ad79c) aid_tch_main_mp4_pane_g4

0x9d19,	// (0x000ad97e) popup_slider_window_cp02

0xe759,	// (0x000b23be) list_recal_day_event_pane

0x896e,	// (0x000ac5d3) cntbar_detail_btn_pane_ParamLimits

0x896e,	// (0x000ac5d3) cntbar_detail_btn_pane

0x8987,	// (0x000ac5ec) cntbar_detail_btn_pane_cp01_ParamLimits

0x8987,	// (0x000ac5ec) cntbar_detail_btn_pane_cp01

0x89b0,	// (0x000ac615) cntbar_detail_list_shct_pane_ParamLimits

0x89c0,	// (0x000ac625) cntbar_detail_pane_g1_ParamLimits

0x89c0,	// (0x000ac625) cntbar_detail_pane_g1

0x89d0,	// (0x000ac635) cntbar_detail_pane_t1_ParamLimits

0x89d0,	// (0x000ac635) cntbar_detail_pane_t1

0x8a9a,	// (0x000ac6ff) cntbar_detail_list_event_pane_g3_ParamLimits

0x8a9a,	// (0x000ac6ff) cntbar_detail_list_event_pane_g3

0x8ab2,	// (0x000ac717) cntbar_detail_list_event_pane_g4_ParamLimits

0x8ab2,	// (0x000ac717) cntbar_detail_list_event_pane_g4

0x8aca,	// (0x000ac72f) cntbar_detail_list_event_pane_g5_ParamLimits

0x8aca,	// (0x000ac72f) cntbar_detail_list_event_pane_g5

0x8ae2,	// (0x000ac747) cntbar_detail_list_event_pane_g6_ParamLimits

0x8ae2,	// (0x000ac747) cntbar_detail_list_event_pane_g6

0x8b24,	// (0x000ac789) cntbar_detail_list_event_pane_t3_ParamLimits

0x8b24,	// (0x000ac789) cntbar_detail_list_event_pane_t3

0x8b36,	// (0x000ac79b) popup_notif_wgt_window_ParamLimits

0x8b36,	// (0x000ac79b) popup_notif_wgt_window

0x8b4f,	// (0x000ac7b4) popup_submenu_window_cp01_ParamLimits

0x8b4f,	// (0x000ac7b4) popup_submenu_window_cp01

0xa15f,	// (0x000addc4) bg_popup_window_pane_cp10

0xea36,	// (0x000b269b) listscroll_notif_wgt_pane

0xea48,	// (0x000b26ad) list_notif_wgt_window

0xea51,	// (0x000b26b6) scroll_pane_cp033

0x8b61,	// (0x000ac7c6) list_notif_wgt_row_pane_ParamLimits

0x8b61,	// (0x000ac7c6) list_notif_wgt_row_pane

0xea5a,	// (0x000b26bf) aid_size_list_notif_wgt_del

0xea67,	// (0x000b26cc) list_notif_wgt_row_pane_g1

0xea73,	// (0x000b26d8) list_notif_wgt_row_pane_g2

0xea82,	// (0x000b26e7) list_notif_wgt_row_pane_g3

0x0002,

0xfe40,	// (0x000b3aa5) list_notif_wgt_row_pane_g

0xea8f,	// (0x000b26f4) list_notif_wgt_row_pane_t1

0xeaa5,	// (0x000b270a) list_notif_wgt_row_pane_t2

0xeab7,	// (0x000b271c) list_notif_wgt_row_pane_t3

0x0002,

0xfe47,	// (0x000b3aac) list_notif_wgt_row_pane_t

0xd209,	// (0x000b0e6e) list_recal_day_event_pane_g1

0xeac9,	// (0x000b272e) list_recal_day_event_pane_t1

0xe1c3,	// (0x000b1e28) bg_button_pane_cp045

0x8b71,	// (0x000ac7d6) cntbar_detail_btn_pane_t1

0xc0a4,	// (0x000afd09) main_callh_pane_ParamLimits

0xc0a4,	// (0x000afd09) main_callh_pane

0xe1c3,	// (0x000b1e28) main_coverflow0_pane

0xe1c3,	// (0x000b1e28) main_wgtman_pane

0x7952,	// (0x000ab5b7) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7952,	// (0x000ab5b7) main_fs_bigclock_unlock_btn_pane

0x838b,	// (0x000abff0) bg_button_pane_cp16

0x839b,	// (0x000ac000) cell_tport_appsw_pane_g3

0x8b7f,	// (0x000ac7e4) cf0_flow_pane_ParamLimits

0x8b7f,	// (0x000ac7e4) cf0_flow_pane

0xead8,	// (0x000b273d) listscroll_cf0_pane

0xeae3,	// (0x000b2748) main_cf0_pane_g1

0x8b94,	// (0x000ac7f9) main_cf0_pane_t1_ParamLimits

0x8b94,	// (0x000ac7f9) main_cf0_pane_t1

0x8bab,	// (0x000ac810) main_cf0_pane_t2_ParamLimits

0x8bab,	// (0x000ac810) main_cf0_pane_t2

0x0001,

0xfe53,	// (0x000b3ab8) main_cf0_pane_t_ParamLimits

0xfe53,	// (0x000b3ab8) main_cf0_pane_t

0xeaf5,	// (0x000b275a) scroll_pane_cp11

0x8bc2,	// (0x000ac827) cf0_flow_pane_g1

0x8bca,	// (0x000ac82f) cf0_flow_pane_g2

0x0001,

0xfe58,	// (0x000b3abd) cf0_flow_pane_g

0x8bd2,	// (0x000ac837) cf0_flow_pane_t1

0xe1c3,	// (0x000b1e28) main_call6_pane

0xe1c3,	// (0x000b1e28) main_calllock_pane

0x8be0,	// (0x000ac845) call6_btn_grp_pane_ParamLimits

0x8be0,	// (0x000ac845) call6_btn_grp_pane

0x8bfa,	// (0x000ac85f) call6_pane_g1_ParamLimits

0x8bfa,	// (0x000ac85f) call6_pane_g1

0x8c0f,	// (0x000ac874) popup_call6_1st_window_ParamLimits

0x8c0f,	// (0x000ac874) popup_call6_1st_window

0x8c20,	// (0x000ac885) popup_call6_2nd_window_ParamLimits

0x8c20,	// (0x000ac885) popup_call6_2nd_window

0x8c31,	// (0x000ac896) cell_call6_btn_pane_ParamLimits

0x8c31,	// (0x000ac896) cell_call6_btn_pane

0xa15f,	// (0x000addc4) bg_popup_call2_in_pane_cp03

0xeb00,	// (0x000b2765) popup_call6_1st_window_g1

0xeb08,	// (0x000b276d) popup_call6_1st_window_g2

0xeb10,	// (0x000b2775) popup_call6_1st_window_g3

0x0002,

0xfe5d,	// (0x000b3ac2) popup_call6_1st_window_g

0xeb18,	// (0x000b277d) popup_call6_1st_window_t1

0xeb27,	// (0x000b278c) popup_call6_1st_window_t2

0xeb37,	// (0x000b279c) popup_call6_1st_window_t3

0x0002,

0xfe64,	// (0x000b3ac9) popup_call6_1st_window_t

0xa15f,	// (0x000addc4) bg_popup_call2_in_pane_cp04

0xeb00,	// (0x000b2765) popup_call6_2nd_window_g1

0xeb08,	// (0x000b276d) popup_call6_2nd_window_g2

0xeb10,	// (0x000b2775) popup_call6_2nd_window_g3

0x0002,

0xfe5d,	// (0x000b3ac2) popup_call6_2nd_window_g

0xeb18,	// (0x000b277d) popup_call6_2nd_window_t1

0xe1c3,	// (0x000b1e28) bg_button_pane_cp15

0xeb47,	// (0x000b27ac) cell_call6_btn_pane_g1

0xeb50,	// (0x000b27b5) cell_call6_btn_pane_t1

0x8c45,	// (0x000ac8aa) listscroll_wgtman_pane_ParamLimits

0x8c45,	// (0x000ac8aa) listscroll_wgtman_pane

0x8c66,	// (0x000ac8cb) wgtman_btn_pane_ParamLimits

0x8c66,	// (0x000ac8cb) wgtman_btn_pane

0xa95a,	// (0x000ae5bf) aid_scroll_copy1

0xeb5f,	// (0x000b27c4) list_wgtman_pane

0x8ca9,	// (0x000ac90e) wgtman_btn_pane_g1_ParamLimits

0x8ca9,	// (0x000ac90e) wgtman_btn_pane_g1

0x8cd5,	// (0x000ac93a) wgtman_btn_pane_t1_ParamLimits

0x8cd5,	// (0x000ac93a) wgtman_btn_pane_t1

0xeb69,	// (0x000b27ce) wgtman_btn_pane_t2_ParamLimits

0xeb69,	// (0x000b27ce) wgtman_btn_pane_t2

0x0001,

0xfe6b,	// (0x000b3ad0) wgtman_btn_pane_t_ParamLimits

0xfe6b,	// (0x000b3ad0) wgtman_btn_pane_t

0x8d12,	// (0x000ac977) listrow_wgtman_pane_ParamLimits

0x8d12,	// (0x000ac977) listrow_wgtman_pane

0x8d24,	// (0x000ac989) listrow_wgtman_pane_g1

0x8d31,	// (0x000ac996) listrow_wgtman_pane_g2

0x0001,

0xfe70,	// (0x000b3ad5) listrow_wgtman_pane_g

0x8d4f,	// (0x000ac9b4) listrow_wgtman_pane_t1

0x8d67,	// (0x000ac9cc) listrow_wgtman_pane_t2

0x0001,

0xfe75,	// (0x000b3ada) listrow_wgtman_pane_t

0x8d8d,	// (0x000ac9f2) wait_bar_pane_cp09

0xeb80,	// (0x000b27e5) main_calllock_btn_pane

0xeb8a,	// (0x000b27ef) main_calllock_pane_g1

0xe1c3,	// (0x000b1e28) bg_button_pane_cp17

0xeb95,	// (0x000b27fa) main_calllock_btn_pane_g1

0xeb9e,	// (0x000b2803) main_calllock_btn_pane_t1

0xe1c3,	// (0x000b1e28) main_dialer3_pane

0xe1c3,	// (0x000b1e28) main_fmrd2_pane

0xc4b5,	// (0x000b011a) main_fs_bigclock_unlock_btn_pane_g1

0x8da7,	// (0x000aca0c) main_fs_bigclock_unlock_btn_pane_t1

0x8db5,	// (0x000aca1a) area_fmrd2_info_pane_ParamLimits

0x8db5,	// (0x000aca1a) area_fmrd2_info_pane

0x8dc6,	// (0x000aca2b) area_fmrd2_visual_pane_ParamLimits

0x8dc6,	// (0x000aca2b) area_fmrd2_visual_pane

0x8dd4,	// (0x000aca39) fmrd2_indi_pane_ParamLimits

0x8dd4,	// (0x000aca39) fmrd2_indi_pane

0x8de1,	// (0x000aca46) area_fmrd2_visual_pane_g1

0x8de9,	// (0x000aca4e) area_fmrd2_visual_pane_t1

0x8df9,	// (0x000aca5e) area_fmrd2_visual_pane_t2

0x8e09,	// (0x000aca6e) area_fmrd2_visual_pane_t3

0x0002,

0xfe7f,	// (0x000b3ae4) area_fmrd2_visual_pane_t

0x8e19,	// (0x000aca7e) area_fmrd2_info_pane_g1

0x8e21,	// (0x000aca86) area_fmrd2_info_pane_t1

0x8e31,	// (0x000aca96) area_fmrd2_info_pane_t2

0x8e41,	// (0x000acaa6) area_fmrd2_info_pane_t3

0x8e51,	// (0x000acab6) area_fmrd2_info_pane_t4

0x0003,

0xfe86,	// (0x000b3aeb) area_fmrd2_info_pane_t

0x8e5f,	// (0x000acac4) fmrd2_indi_pane_t1

0x8e6f,	// (0x000acad4) fmrd2_indi_pane_t2

0x8e7f,	// (0x000acae4) fmrd2_indi_pane_t3

0x0002,

0xfe8f,	// (0x000b3af4) fmrd2_indi_pane_t

0xddf4,	// (0x000b1a59) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xddf4,	// (0x000b1a59) list_single_fs_bigclock_indicator_pane_g5

0xdea5,	// (0x000b1b0a) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdea5,	// (0x000b1b0a) list_single_fs_bigclock_indicator_pane_t5

0x8528,	// (0x000ac18d) aid_cell_bcale_month_pane_ParamLimits

0x8528,	// (0x000ac18d) aid_cell_bcale_month_pane

0x8546,	// (0x000ac1ab) bcale_month_pane_ParamLimits

0x8546,	// (0x000ac1ab) bcale_month_pane

0x856a,	// (0x000ac1cf) bcale_preview_pane_ParamLimits

0x856a,	// (0x000ac1cf) bcale_preview_pane

0xe960,	// (0x000b25c5) list_single_fs_bigclock_pane_t1_ParamLimits

0xe97f,	// (0x000b25e4) list_single_fs_bigclock_pane_t2_ParamLimits

0xe97f,	// (0x000b25e4) list_single_fs_bigclock_pane_t2

0x0001,

0xfe11,	// (0x000b3a76) list_single_fs_bigclock_pane_t_ParamLimits

0xfe11,	// (0x000b3a76) list_single_fs_bigclock_pane_t

0x8d9f,	// (0x000aca04) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe7a,	// (0x000b3adf) main_fs_bigclock_unlock_btn_pane_g

0x8e8f,	// (0x000acaf4) aid_dia3_key_size_ParamLimits

0x8e8f,	// (0x000acaf4) aid_dia3_key_size

0x8e9e,	// (0x000acb03) aid_dia3_listrow_size_ParamLimits

0x8e9e,	// (0x000acb03) aid_dia3_listrow_size

0x8eb3,	// (0x000acb18) dia3_keypad_fun_pane_ParamLimits

0x8eb3,	// (0x000acb18) dia3_keypad_fun_pane

0x8ecf,	// (0x000acb34) dia3_keypad_num_pane_ParamLimits

0x8ecf,	// (0x000acb34) dia3_keypad_num_pane

0x8eea,	// (0x000acb4f) dia3_listscroll_pane_ParamLimits

0x8eea,	// (0x000acb4f) dia3_listscroll_pane

0x8efd,	// (0x000acb62) dia3_numentry_pane_ParamLimits

0x8efd,	// (0x000acb62) dia3_numentry_pane

0xebad,	// (0x000b2812) dia3_list_pane

0xebb8,	// (0x000b281d) scroll_pane_cp12

0xe1c3,	// (0x000b1e28) bg_dia3_numentry_pane

0x8f11,	// (0x000acb76) dia3_numentry_pane_t1

0x8f20,	// (0x000acb85) cell_dia3_key_num_pane

0x8f28,	// (0x000acb8d) cell_dia3_key0_fun_pane_ParamLimits

0x8f28,	// (0x000acb8d) cell_dia3_key0_fun_pane

0x8f3c,	// (0x000acba1) cell_dia3_key1_fun_pane_ParamLimits

0x8f3c,	// (0x000acba1) cell_dia3_key1_fun_pane

0x8f54,	// (0x000acbb9) dia3_listrow_pane

0xdb47,	// (0x000b17ac) bg_dia3_numentry_pane_g1

0xe1c3,	// (0x000b1e28) bg_button_pane_cp21

0xebc3,	// (0x000b2828) cell_dia3_key_num_pane_t1

0xebd1,	// (0x000b2836) cell_dia3_key_num_pane_t2

0xebe0,	// (0x000b2845) cell_dia3_key_num_pane_t3

0xebef,	// (0x000b2854) cell_dia3_key_num_pane_t4

0x0003,

0xfe96,	// (0x000b3afb) cell_dia3_key_num_pane_t

0xe1c3,	// (0x000b1e28) bg_button_pane_cp19

0x8f66,	// (0x000acbcb) cell_dia3_key0_fun_pane_g1

0xe1c3,	// (0x000b1e28) bg_button_pane_cp20

0x8f6e,	// (0x000acbd3) cell_dia3_key1_fun_pane_g1

0x8f76,	// (0x000acbdb) area_left_week_number_pane

0x8f82,	// (0x000acbe7) area_top_day_name_pane

0x8f95,	// (0x000acbfa) frame_month_view_pane

0xebfe,	// (0x000b2863) grid_month_view_pane

0x8fa8,	// (0x000acc0d) cell_top_day_name_pane_ParamLimits

0x8fa8,	// (0x000acc0d) cell_top_day_name_pane

0x8fd5,	// (0x000acc3a) cell_area_left_week_number_pane_ParamLimits

0x8fd5,	// (0x000acc3a) cell_area_left_week_number_pane

0x8fe9,	// (0x000acc4e) cell_month_view_pane_ParamLimits

0x8fe9,	// (0x000acc4e) cell_month_view_pane

0xec0c,	// (0x000b2871) frm_month_g1

0x9016,	// (0x000acc7b) frm_month_g2

0x9029,	// (0x000acc8e) frm_month_g3

0x903c,	// (0x000acca1) frm_month_g4

0x904f,	// (0x000accb4) frm_month_g5

0x9062,	// (0x000accc7) frm_month_g6

0x9075,	// (0x000accda) frm_month_g7

0xec19,	// (0x000b287e) frm_month_g8

0x9088,	// (0x000acced) frm_month_g9

0x9098,	// (0x000accfd) frm_month_g10

0x90a8,	// (0x000acd0d) frm_month_g11

0x90b8,	// (0x000acd1d) frm_month_g12

0x90ca,	// (0x000acd2f) frm_month_g13

0x90dc,	// (0x000acd41) frm_month_g14

0x90f0,	// (0x000acd55) frm_month_g15

0x9104,	// (0x000acd69) frm_month_g16

0x000f,

0xfe9f,	// (0x000b3b04) frm_month_g

0xec26,	// (0x000b288b) cell_top_day_name_pane_t1

0x9118,	// (0x000acd7d) cell_area_left_week_number_pane_g1

0x9124,	// (0x000acd89) cell_area_left_week_number_pane_t1

0xc703,	// (0x000b0368) cell_month_view_pane_g1

0x9137,	// (0x000acd9c) cell_month_view_pane_t1

0xe1c3,	// (0x000b1e28) main_fps_pane

0xe0b0,	// (0x000b1d15) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe0b0,	// (0x000b1d15) cmail_ddmenu_btn02_pane_cp1

0xe0cc,	// (0x000b1d31) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe0cc,	// (0x000b1d31) cmail_ddmenu_btn02_pane_cp2

0x880b,	// (0x000ac470) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x880b,	// (0x000ac470) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfdc4,	// (0x000b3a29) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfdc4,	// (0x000b3a29) cmail_ddmenu_btn02_pane_g

0x882a,	// (0x000ac48f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x882a,	// (0x000ac48f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfdc9,	// (0x000b3a2e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfdc9,	// (0x000b3a2e) cmail_ddmenu_btn02_pane_t

0x914a,	// (0x000acdaf) fps_text_pane_ParamLimits

0x914a,	// (0x000acdaf) fps_text_pane

0x9161,	// (0x000acdc6) main_fps_pane_g1_ParamLimits

0x9161,	// (0x000acdc6) main_fps_pane_g1

0x917b,	// (0x000acde0) wait_bar_pane_cp010_ParamLimits

0x917b,	// (0x000acde0) wait_bar_pane_cp010

0x918c,	// (0x000acdf1) fps_text_pane_t1_ParamLimits

0x918c,	// (0x000acdf1) fps_text_pane_t1

0xcf35,	// (0x000b0b9a) cam4_image_uncrop_pane_g1

0xcf3e,	// (0x000b0ba3) cam4_image_uncrop_pane_g2

0x5a53,	// (0x000a96b8) cam4_image_uncrop_pane_g3

0x5a5c,	// (0x000a96c1) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x000b3566) cam4_image_uncrop_pane_g

0x8f54,	// (0x000acbb9) dia3_listrow_pane_ParamLimits

0xe1c3,	// (0x000b1e28) main_phob2_pane

0x835c,	// (0x000abfc1) cell_tport_appsw_pane_cp02_ParamLimits

0x835c,	// (0x000abfc1) cell_tport_appsw_pane_cp02

0x8370,	// (0x000abfd5) cell_tport_appsw_pane_cp03_ParamLimits

0x8370,	// (0x000abfd5) cell_tport_appsw_pane_cp03

0xe1c3,	// (0x000b1e28) phob2_contact_card_pane

0xe1c3,	// (0x000b1e28) phob2_listscroll_pane

0xec39,	// (0x000b289e) phob2_list_pane

0xec41,	// (0x000b28a6) scroll_pane_cp034

0x91a4,	// (0x000ace09) phob2_cc_data_pane_ParamLimits

0x91a4,	// (0x000ace09) phob2_cc_data_pane

0x91c3,	// (0x000ace28) phob2_cc_listscroll_pane_ParamLimits

0x91c3,	// (0x000ace28) phob2_cc_listscroll_pane

0x8d12,	// (0x000ac977) list_double_large_graphic_phob2_pane_ParamLimits

0x8d12,	// (0x000ac977) list_double_large_graphic_phob2_pane

0x91e1,	// (0x000ace46) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x91e1,	// (0x000ace46) list_double_large_graphic_phob2_pane_g1

0x91f7,	// (0x000ace5c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x91f7,	// (0x000ace5c) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfec0,	// (0x000b3b25) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfec0,	// (0x000b3b25) list_double_large_graphic_phob2_pane_g

0x9203,	// (0x000ace68) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9203,	// (0x000ace68) list_double_large_graphic_phob2_pane_t1

0x9219,	// (0x000ace7e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9219,	// (0x000ace7e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfec5,	// (0x000b3b2a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfec5,	// (0x000b3b2a) list_double_large_graphic_phob2_pane_t

0xe1c3,	// (0x000b1e28) list_highlight_pane_cp024

0x922e,	// (0x000ace93) phob2_cc_button_pane

0x9236,	// (0x000ace9b) phob2_cc_data_pane_g1_ParamLimits

0x9236,	// (0x000ace9b) phob2_cc_data_pane_g1

0x924b,	// (0x000aceb0) phob2_cc_data_pane_g2_ParamLimits

0x924b,	// (0x000aceb0) phob2_cc_data_pane_g2

0x0001,

0xfeca,	// (0x000b3b2f) phob2_cc_data_pane_g_ParamLimits

0xfeca,	// (0x000b3b2f) phob2_cc_data_pane_g

0x925b,	// (0x000acec0) phob2_cc_data_pane_t1_ParamLimits

0x925b,	// (0x000acec0) phob2_cc_data_pane_t1

0x9273,	// (0x000aced8) phob2_cc_data_pane_t2_ParamLimits

0x9273,	// (0x000aced8) phob2_cc_data_pane_t2

0x928b,	// (0x000acef0) phob2_cc_data_pane_t3_ParamLimits

0x928b,	// (0x000acef0) phob2_cc_data_pane_t3

0x0002,

0xfecf,	// (0x000b3b34) phob2_cc_data_pane_t_ParamLimits

0xfecf,	// (0x000b3b34) phob2_cc_data_pane_t

0xec49,	// (0x000b28ae) phob2_cc_list_pane_ParamLimits

0xec49,	// (0x000b28ae) phob2_cc_list_pane

0xd2a0,	// (0x000b0f05) scroll_pane_cp035_ParamLimits

0xd2a0,	// (0x000b0f05) scroll_pane_cp035

0xe200,	// (0x000b1e65) bg_button_pane_cp033

0xec55,	// (0x000b28ba) phob2_cc_button_pane_g1

0xec61,	// (0x000b28c6) phob2_cc_button_pane_t1

0xec76,	// (0x000b28db) phob2_cc_button_pane_t2

0x0001,

0xfed6,	// (0x000b3b3b) phob2_cc_button_pane_t

0x92a3,	// (0x000acf08) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x92a3,	// (0x000acf08) list_double_large_graphic_phob2_cc_pane

0x92b6,	// (0x000acf1b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x92b6,	// (0x000acf1b) list_double_large_graphic_phob2_cc_pane_g1

0x92c2,	// (0x000acf27) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x92c2,	// (0x000acf27) list_double_large_graphic_phob2_cc_pane_g2

0x92ce,	// (0x000acf33) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x92ce,	// (0x000acf33) list_double_large_graphic_phob2_cc_pane_g3

0x92da,	// (0x000acf3f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x92da,	// (0x000acf3f) list_double_large_graphic_phob2_cc_pane_g4

0x92e6,	// (0x000acf4b) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x92e6,	// (0x000acf4b) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfedb,	// (0x000b3b40) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfedb,	// (0x000b3b40) list_double_large_graphic_phob2_cc_pane_g

0x92f2,	// (0x000acf57) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x92f2,	// (0x000acf57) list_double_large_graphic_phob2_cc_pane_t1

0x931b,	// (0x000acf80) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x931b,	// (0x000acf80) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfee6,	// (0x000b3b4b) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfee6,	// (0x000b3b4b) list_double_large_graphic_phob2_cc_pane_t

0xec88,	// (0x000b28ed) list_highlight_pane_cp025_ParamLimits

0xec88,	// (0x000b28ed) list_highlight_pane_cp025

0xe200,	// (0x000b1e65) bg_button_pane_cp033_ParamLimits

0xec55,	// (0x000b28ba) phob2_cc_button_pane_g1_ParamLimits

0xec61,	// (0x000b28c6) phob2_cc_button_pane_t1_ParamLimits

0xec76,	// (0x000b28db) phob2_cc_button_pane_t2_ParamLimits

0xfed6,	// (0x000b3b3b) phob2_cc_button_pane_t_ParamLimits

0x072a,	// (0x000a438f) popup_wgtman_window

0xd0cd,	// (0x000b0d32) scroll_pane_cp038

0x8c8b,	// (0x000ac8f0) wgtman_btn_pane_cp_01_ParamLimits

0x8c8b,	// (0x000ac8f0) wgtman_btn_pane_cp_01

0xec96,	// (0x000b28fb) wgtman_content_pane

0xec9f,	// (0x000b2904) wgtman_heading_pane

0xe1c3,	// (0x000b1e28) bg_heading_pane_cp02

0xeca8,	// (0x000b290d) wgtman_heading_pane_g1

0xf016,	// (0x000b2c7b) wgtman_heading_pane_t1

0xf024,	// (0x000b2c89) scroll_pane_cp036

0xf02c,	// (0x000b2c91) wgtman_list_pane

0xdf90,	// (0x000b1bf5) wgtman_list_pane_t1_ParamLimits

0xdf90,	// (0x000b1bf5) wgtman_list_pane_t1

0x9d73,	// (0x000ad9d8) cam4_grid_pane

0x671a,	// (0x000aa37f) bg_button_pane_cp015_ParamLimits

0x672e,	// (0x000aa393) bg_button_pane_cp016_ParamLimits

0x6741,	// (0x000aa3a6) bg_button_pane_cp017_ParamLimits

0x6799,	// (0x000aa3fe) popup_vitu2_query_window_g3_ParamLimits

0x6799,	// (0x000aa3fe) popup_vitu2_query_window_g3

0x6856,	// (0x000aa4bb) popup_vitu2_query_window_t6_ParamLimits

0x6856,	// (0x000aa4bb) popup_vitu2_query_window_t6

0x6881,	// (0x000aa4e6) popup_vitu2_query_window_t7_ParamLimits

0x6881,	// (0x000aa4e6) popup_vitu2_query_window_t7

0xcf35,	// (0x000b0b9a) cam4_grid_pane_g1

0xcf3e,	// (0x000b0ba3) cam4_grid_pane_g2

0xf034,	// (0x000b2c99) cam4_grid_pane_g3

0xf03d,	// (0x000b2ca2) cam4_grid_pane_g4

0x0003,

0xfeeb,	// (0x000b3b50) cam4_grid_pane_g

0x1631,	// (0x000a5296) aid_placing_vt_slider_lsc_ParamLimits

0x192e,	// (0x000a5593) vidtel_button_pane_ParamLimits

0x192e,	// (0x000a5593) vidtel_button_pane

0xe1c3,	// (0x000b1e28) bg_button_pane_cp034

0x9344,	// (0x000acfa9) vidtel_button_pane_g1

0xf048,	// (0x000b2cad) vidtel_button_pane_t1

0xd1e7,	// (0x000b0e4c) aid_size_vtel_slider_touch

0xd2a0,	// (0x000b0f05) scroll_pane_cp039

0x7638,	// (0x000ab29d) ncim_query_button_pane_cp01_ParamLimits

0x7657,	// (0x000ab2bc) ncimui_query_pane_g1_ParamLimits

0xe200,	// (0x000b1e65) input_focus_pane_cp012_ParamLimits

0xdb8d,	// (0x000b17f2) ncim_query_entry_pane_t1_ParamLimits

0xd2a0,	// (0x000b0f05) scroll_pane_cp039_ParamLimits

0xaa31,	// (0x000ae696) navi_pane_bcale_mc_g1

0xaa39,	// (0x000ae69e) navi_pane_bcale_mc_t1

0xe115,	// (0x000b1d7a) main_sp_fs_email_pane_g1

0xe121,	// (0x000b1d86) main_sp_fs_email_pane_g2

0x0001,

0x0133,	// (0x000a3d98) main_sp_fs_email_pane_g

0xe5eb,	// (0x000b2250) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe5eb,	// (0x000b2250) list_single_cale_mrui_row_pane_g3

0x884a,	// (0x000ac4af) list_single_recal_day_pane_g5_event_pane

0xe7ca,	// (0x000b242f) list_single_recal_day_pane_g7

0xf05e,	// (0x000b2cc3) list_recal_day_event_pane_cp01

0xf067,	// (0x000b2ccc) list_recal_vselct_arw_lo_pane_cp01

0xf06f,	// (0x000b2cd4) list_recal_vselct_arw_up_pane_cp01

0xf077,	// (0x000b2cdc) list_recal_vselct_pane_cp01

0xd209,	// (0x000b0e6e) list_recal_day_event_pane_cp01_g1

0xf081,	// (0x000b2ce6) list_recal_day_event_pane_cp01_t1

0xe7d2,	// (0x000b2437) list_single_recal_day_pane_t1_ParamLimits

0xe7e4,	// (0x000b2449) list_single_recal_day_pane_t2_ParamLimits

0xfdd9,	// (0x000b3a3e) list_single_recal_day_pane_t_ParamLimits

0x97a7,	// (0x000ad40c) bg_notes_pane_ParamLimits

0x9f66,	// (0x000adbcb) list_notes_pane_ParamLimits

0x0a6e,	// (0x000a46d3) scroll_pane_cp06_ParamLimits

0x9f88,	// (0x000adbed) main_notes_pane_ParamLimits

0xe1c3,	// (0x000b1e28) main_welc_pane

0x934c,	// (0x000acfb1) main_welc_body_pane_ParamLimits

0x934c,	// (0x000acfb1) main_welc_body_pane

0x9369,	// (0x000acfce) main_welc_opti_pane_ParamLimits

0x9369,	// (0x000acfce) main_welc_opti_pane

0x93ae,	// (0x000ad013) main_welc_pane_t1_ParamLimits

0x93ae,	// (0x000ad013) main_welc_pane_t1

0x93cc,	// (0x000ad031) main_welc_body_row_pane_ParamLimits

0x93cc,	// (0x000ad031) main_welc_body_row_pane

0xecb0,	// (0x000b2915) main_welc_opti_row_pane_ParamLimits

0xecb0,	// (0x000b2915) main_welc_opti_row_pane

0xf08f,	// (0x000b2cf4) main_welc_opti_row_pane_g1

0x93e1,	// (0x000ad046) main_welc_opti_row_pane_t1

0xf097,	// (0x000b2cfc) main_welc_body_row_pane_t1

0xea40,	// (0x000b26a5) popup_notif_wgt_heading_pane

0xea5a,	// (0x000b26bf) aid_size_list_notif_wgt_del_ParamLimits

0xea67,	// (0x000b26cc) list_notif_wgt_row_pane_g1_ParamLimits

0xea73,	// (0x000b26d8) list_notif_wgt_row_pane_g2_ParamLimits

0xea82,	// (0x000b26e7) list_notif_wgt_row_pane_g3_ParamLimits

0xfe40,	// (0x000b3aa5) list_notif_wgt_row_pane_g_ParamLimits

0xea8f,	// (0x000b26f4) list_notif_wgt_row_pane_t1_ParamLimits

0xeaa5,	// (0x000b270a) list_notif_wgt_row_pane_t2_ParamLimits

0xeab7,	// (0x000b271c) list_notif_wgt_row_pane_t3_ParamLimits

0xfe47,	// (0x000b3aac) list_notif_wgt_row_pane_t_ParamLimits

0x8d24,	// (0x000ac989) listrow_wgtman_pane_g1_ParamLimits

0x8d31,	// (0x000ac996) listrow_wgtman_pane_g2_ParamLimits

0xfe70,	// (0x000b3ad5) listrow_wgtman_pane_g_ParamLimits

0x8d4f,	// (0x000ac9b4) listrow_wgtman_pane_t1_ParamLimits

0x8d67,	// (0x000ac9cc) listrow_wgtman_pane_t2_ParamLimits

0xfe75,	// (0x000b3ada) listrow_wgtman_pane_t_ParamLimits

0x8d8d,	// (0x000ac9f2) wait_bar_pane_cp09_ParamLimits

0xe1c3,	// (0x000b1e28) bg_popup_heading_pane_cp02

0xf0a6,	// (0x000b2d0b) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x000b2d13) popup_notif_wgt_heading_pane_t1

0xe1c3,	// (0x000b1e28) main_vids_pane

0xe1c3,	// (0x000b1e28) vids_listscroll_pane

0x93f0,	// (0x000ad055) scroll_pane_cp040

0xe1c3,	// (0x000b1e28) vids_list_pane

0x93fb,	// (0x000ad060) vids_list_double_pane_ParamLimits

0x93fb,	// (0x000ad060) vids_list_double_pane

0x940c,	// (0x000ad071) vids_list_double_pane_g1

0x9415,	// (0x000ad07a) vids_list_double_pane_t1

0x9425,	// (0x000ad08a) vids_list_double_pane_t2

0x0001,

0xfef9,	// (0x000b3b5e) vids_list_double_pane_t

0x9479,	// (0x000ad0de) main_ncimui_pane_ParamLimits

0x746e,	// (0x000ab0d3) main_ncimui_pane_g1_ParamLimits

0x747a,	// (0x000ab0df) main_ncimui_pane_g2_ParamLimits

0x747a,	// (0x000ab0df) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x000b3862) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x000b3862) main_ncimui_pane_g

0x9384,	// (0x000acfe9) main_welc_pane_g1_ParamLimits

0x9384,	// (0x000acfe9) main_welc_pane_g1

0x9399,	// (0x000acffe) main_welc_pane_g2_ParamLimits

0x9399,	// (0x000acffe) main_welc_pane_g2

0x0001,

0xfef4,	// (0x000b3b59) main_welc_pane_g_ParamLimits

0xfef4,	// (0x000b3b59) main_welc_pane_g

0x97a7,	// (0x000ad40c) listscroll_mce_pane_ParamLimits

0xab94,	// (0x000ae7f9) wait_bar_pane_cp10

0xc098,	// (0x000afcfd) main_cale_day_pane_ParamLimits

0xc098,	// (0x000afcfd) main_cale_week_pane_ParamLimits

0x97a7,	// (0x000ad40c) main_messa_pane_ParamLimits

0x4d7b,	// (0x000a89e0) main_clock2_btn_pane_ParamLimits

0x4d7b,	// (0x000a89e0) main_clock2_btn_pane

0xc8ff,	// (0x000b0564) main_clock2_btn_pane_cp01_ParamLimits

0xc8ff,	// (0x000b0564) main_clock2_btn_pane_cp01

0xe577,	// (0x000b21dc) list_cale_mrui_pane_ParamLimits

0xeaed,	// (0x000b2752) main_cf0_pane_g2

0x0001,

0xfe4e,	// (0x000b3ab3) main_cf0_pane_g

0x8f76,	// (0x000acbdb) area_left_week_number_pane_ParamLimits

0x8f82,	// (0x000acbe7) area_top_day_name_pane_ParamLimits

0x8f95,	// (0x000acbfa) frame_month_view_pane_ParamLimits

0xebfe,	// (0x000b2863) grid_month_view_pane_ParamLimits

0xec0c,	// (0x000b2871) frm_month_g1_ParamLimits

0x9016,	// (0x000acc7b) frm_month_g2_ParamLimits

0x9029,	// (0x000acc8e) frm_month_g3_ParamLimits

0x903c,	// (0x000acca1) frm_month_g4_ParamLimits

0x904f,	// (0x000accb4) frm_month_g5_ParamLimits

0x9062,	// (0x000accc7) frm_month_g6_ParamLimits

0x9075,	// (0x000accda) frm_month_g7_ParamLimits

0xec19,	// (0x000b287e) frm_month_g8_ParamLimits

0x9088,	// (0x000acced) frm_month_g9_ParamLimits

0x9098,	// (0x000accfd) frm_month_g10_ParamLimits

0x90a8,	// (0x000acd0d) frm_month_g11_ParamLimits

0x90b8,	// (0x000acd1d) frm_month_g12_ParamLimits

0x90ca,	// (0x000acd2f) frm_month_g13_ParamLimits

0x90dc,	// (0x000acd41) frm_month_g14_ParamLimits

0x90f0,	// (0x000acd55) frm_month_g15_ParamLimits

0x9104,	// (0x000acd69) frm_month_g16_ParamLimits

0xfe9f,	// (0x000b3b04) frm_month_g_ParamLimits

0xec26,	// (0x000b288b) cell_top_day_name_pane_t1_ParamLimits

0x9118,	// (0x000acd7d) cell_area_left_week_number_pane_g1_ParamLimits

0x9124,	// (0x000acd89) cell_area_left_week_number_pane_t1_ParamLimits

0xc703,	// (0x000b0368) cell_month_view_pane_g1_ParamLimits

0x9137,	// (0x000acd9c) cell_month_view_pane_t1_ParamLimits

0x979f,	// (0x000ad404) main_clock2_btn_pane_g1

0xf0bc,	// (0x000b2d21) main_clock2_btn_pane_t1

0xe200,	// (0x000b1e65) listscroll_cmail_pane_ParamLimits

0xe115,	// (0x000b1d7a) main_sp_fs_email_pane_g1_ParamLimits

0xe121,	// (0x000b1d86) main_sp_fs_email_pane_g2_ParamLimits

0x0133,	// (0x000a3d98) main_sp_fs_email_pane_g_ParamLimits

0xe73a,	// (0x000b239f) list_recal_day_pane_ParamLimits

0xe74b,	// (0x000b23b0) mian_recal_day_pane_t1

0x7fcf,	// (0x000abc34) list_single_dyc_row_text_pane_t4_ParamLimits

0x7fcf,	// (0x000abc34) list_single_dyc_row_text_pane_t4

0x8018,	// (0x000abc7d) list_single_dyc_row_text_pane_t5_ParamLimits

0x8018,	// (0x000abc7d) list_single_dyc_row_text_pane_t5

0xe20e,	// (0x000b1e73) list_single_dyc_row_text_pane_t6_ParamLimits

0xe20e,	// (0x000b1e73) list_single_dyc_row_text_pane_t6

0x23da,	// (0x000a603f) aid_mgn_list_cale_time_pane

0x9479,	// (0x000ad0de) main_gallery2_pane_ParamLimits

0xc915,	// (0x000b057a) main_clock2_pane_cp01_t1

0xc923,	// (0x000b0588) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x000b343c) main_clock2_pane_cp01_t

0x0de7,	// (0x000a4a4c) cale_week_scroll_pane_g16_ParamLimits

0x0de7,	// (0x000a4a4c) cale_week_scroll_pane_g16

0xa15f,	// (0x000addc4) vorec_slider_pane

0xf048,	// (0x000b2cad) vidtel_button_pane_t1_ParamLimits

0x88b0,	// (0x000ac515) main_fs_bigclock_clock_pane_g1_ParamLimits

0x88b0,	// (0x000ac515) main_fs_bigclock_clock_pane_g2_ParamLimits

0x88c1,	// (0x000ac526) main_fs_bigclock_clock_pane_g3_ParamLimits

0x88c1,	// (0x000ac526) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfdfc,	// (0x000b3a61) main_fs_bigclock_clock_pane_g_ParamLimits

0x88d4,	// (0x000ac539) main_fs_bigclock_clock_pane_t1_ParamLimits

0x88ea,	// (0x000ac54f) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe05,	// (0x000b3a6a) main_fs_bigclock_clock_pane_t_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
