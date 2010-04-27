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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00076066 };

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
0x68f7,	// (0x0007c95d) Screen

0x6903,	// (0x0007c969) application_window

0x695f,	// (0x0007c9c5) area_bottom_pane_ParamLimits

0x695f,	// (0x0007c9c5) area_bottom_pane

0x69b8,	// (0x0007ca1e) area_top_pane_ParamLimits

0x69b8,	// (0x0007ca1e) area_top_pane

0x6a1c,	// (0x0007ca82) call_video_uplink_pane_ParamLimits

0x6a1c,	// (0x0007ca82) call_video_uplink_pane

0x6a5b,	// (0x0007cac1) main_pane_ParamLimits

0x6a5b,	// (0x0007cac1) main_pane

0x1fdb,	// (0x00078041) context_pane

0x9d81,	// (0x0007fde7) navi_pane

0x9da7,	// (0x0007fe0d) popup_cale_events_window_ParamLimits

0x9da7,	// (0x0007fe0d) popup_cale_events_window

0x1fee,	// (0x00078054) popup_mup_playback_window

0x9dbf,	// (0x0007fe25) signal_pane

0xf010,	// (0x00085076) main_browser_pane

0x014f,	// (0x000761b5) main_burst_pane

0x9c0d,	// (0x0007fc73) main_calc_pane

0x1fc1,	// (0x00078027) main_cale_day_pane

0x7198,	// (0x0007d1fe) main_cale_month_pane

0x1fc1,	// (0x00078027) main_cale_week_pane

0x014f,	// (0x000761b5) main_call_pane

0xecd9,	// (0x00084d3f) main_call_poc_pane

0x014f,	// (0x000761b5) main_camera_pane

0x014f,	// (0x000761b5) main_chi_dic_pane

0x0932,	// (0x00076998) main_clock_pane

0xecd9,	// (0x00084d3f) main_fmradio_pane

0x014f,	// (0x000761b5) main_graph_messa_pane

0xecd9,	// (0x00084d3f) main_help_pane

0xf010,	// (0x00085076) main_im_pane

0xef4b,	// (0x00084fb1) main_image_pane_ParamLimits

0xef4b,	// (0x00084fb1) main_image_pane

0xecd9,	// (0x00084d3f) main_location2_pane

0x014f,	// (0x000761b5) main_location_pane

0xef4b,	// (0x00084fb1) main_messa_pane

0xecd9,	// (0x00084d3f) main_mp2_pane

0x014f,	// (0x000761b5) main_mp_pane

0xecd9,	// (0x00084d3f) main_msg_pane

0xecd9,	// (0x00084d3f) main_mup_eq_pane

0xecd9,	// (0x00084d3f) main_mup_pane

0xf010,	// (0x00085076) main_notes_pane

0xecd9,	// (0x00084d3f) main_pec_pane

0xecd9,	// (0x00084d3f) main_phob_pane

0xecd9,	// (0x00084d3f) main_pinb_pane

0xecd9,	// (0x00084d3f) main_postcard_pane

0xecd9,	// (0x00084d3f) main_qdial_pane

0x014f,	// (0x000761b5) main_skin_pane

0xecd9,	// (0x00084d3f) main_smil2_pane

0x014f,	// (0x000761b5) main_smil_pane

0x014f,	// (0x000761b5) main_video_pane

0x014f,	// (0x000761b5) main_video_tele_pane

0xef4b,	// (0x00084fb1) main_viewer_pane_ParamLimits

0xef4b,	// (0x00084fb1) main_viewer_pane

0x014f,	// (0x000761b5) main_vorec_pane

0x9c4b,	// (0x0007fcb1) popup_blid_sat_info_window_ParamLimits

0x9c4b,	// (0x0007fcb1) popup_blid_sat_info_window

0x9c6b,	// (0x0007fcd1) popup_dyc_status_message_window_ParamLimits

0x9c6b,	// (0x0007fcd1) popup_dyc_status_message_window

0x9c7b,	// (0x0007fce1) popup_grid_large_graphic_window_ParamLimits

0x9c7b,	// (0x0007fce1) popup_grid_large_graphic_window

0x9d0c,	// (0x0007fd72) popup_loc_request_window_ParamLimits

0x9d0c,	// (0x0007fd72) popup_loc_request_window

0x9d59,	// (0x0007fdbf) popup_wml_address_window_ParamLimits

0x9d59,	// (0x0007fdbf) popup_wml_address_window

0x9ae5,	// (0x0007fb4b) call_muted_g1

0x97a7,	// (0x0007f80d) popup_call_audio_conf_window_ParamLimits

0x97a7,	// (0x0007f80d) popup_call_audio_conf_window

0x9af5,	// (0x0007fb5b) popup_call_audio_first_window_ParamLimits

0x9af5,	// (0x0007fb5b) popup_call_audio_first_window

0x9b35,	// (0x0007fb9b) popup_call_audio_in_window_ParamLimits

0x9b35,	// (0x0007fb9b) popup_call_audio_in_window

0x9b59,	// (0x0007fbbf) popup_call_audio_out_window_ParamLimits

0x9b59,	// (0x0007fbbf) popup_call_audio_out_window

0x9b7b,	// (0x0007fbe1) popup_call_audio_second_window_ParamLimits

0x9b7b,	// (0x0007fbe1) popup_call_audio_second_window

0x9bab,	// (0x0007fc11) popup_call_audio_wait_window_ParamLimits

0x9bab,	// (0x0007fc11) popup_call_audio_wait_window

0x9bcc,	// (0x0007fc32) popup_number_entry_window_ParamLimits

0x9bcc,	// (0x0007fc32) popup_number_entry_window

0xe8c6,	// (0x0008492c) bg_popup_call_pane_cp05_ParamLimits

0xe8c6,	// (0x0008492c) bg_popup_call_pane_cp05

0xe8e6,	// (0x0008494c) popup_number_entry_window_t1

0xe8f9,	// (0x0008495f) popup_number_entry_window_t2

0xe90b,	// (0x00084971) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x00085130) popup_number_entry_window_t

0xe91d,	// (0x00084983) text_title_cp2

0xe930,	// (0x00084996) bg_popup_call_pane_cp_ParamLimits

0xe930,	// (0x00084996) bg_popup_call_pane_cp

0xe93e,	// (0x000849a4) call_thumbnail_pane

0xe946,	// (0x000849ac) popup_call_audio_in_window_g1_ParamLimits

0xe946,	// (0x000849ac) popup_call_audio_in_window_g1

0xe952,	// (0x000849b8) popup_call_audio_in_window_g2_ParamLimits

0xe952,	// (0x000849b8) popup_call_audio_in_window_g2

0xe95e,	// (0x000849c4) popup_call_audio_in_window_g3_ParamLimits

0xe95e,	// (0x000849c4) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x00085139) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x00085139) popup_call_audio_in_window_g

0xe96a,	// (0x000849d0) popup_call_audio_in_window_t1_ParamLimits

0xe96a,	// (0x000849d0) popup_call_audio_in_window_t1

0xe986,	// (0x000849ec) popup_call_audio_in_window_t2_ParamLimits

0xe986,	// (0x000849ec) popup_call_audio_in_window_t2

0xe9a2,	// (0x00084a08) popup_call_audio_in_window_t3_ParamLimits

0xe9a2,	// (0x00084a08) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x00085140) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x00085140) popup_call_audio_in_window_t

0xe930,	// (0x00084996) bg_popup_call_pane_cp01_ParamLimits

0xe930,	// (0x00084996) bg_popup_call_pane_cp01

0xe93e,	// (0x000849a4) call_thumbnail_pane_cp02

0xe9b5,	// (0x00084a1b) call_type_pane_cp022

0xe9bd,	// (0x00084a23) popup_call_audio_out_window_g1_ParamLimits

0xe9bd,	// (0x00084a23) popup_call_audio_out_window_g1

0xe9cf,	// (0x00084a35) popup_call_audio_out_window_g2_ParamLimits

0xe9cf,	// (0x00084a35) popup_call_audio_out_window_g2

0xe9db,	// (0x00084a41) popup_call_audio_out_window_g3_ParamLimits

0xe9db,	// (0x00084a41) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x00085147) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x00085147) popup_call_audio_out_window_g

0xe9ed,	// (0x00084a53) popup_call_audio_out_window_t1_ParamLimits

0xe9ed,	// (0x00084a53) popup_call_audio_out_window_t1

0xea05,	// (0x00084a6b) popup_call_audio_out_window_t2_ParamLimits

0xea05,	// (0x00084a6b) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0008514e) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0008514e) popup_call_audio_out_window_t

0xea1a,	// (0x00084a80) bg_popup_call_pane_ParamLimits

0xea1a,	// (0x00084a80) bg_popup_call_pane

0x6c5c,	// (0x0007ccc2) call_thumbnail_pane_cp_ParamLimits

0x6c5c,	// (0x0007ccc2) call_thumbnail_pane_cp

0xea9e,	// (0x00084b04) call_type_pane_cp01_ParamLimits

0xea9e,	// (0x00084b04) call_type_pane_cp01

0xeae2,	// (0x00084b48) popup_call_audio_first_window_g1_ParamLimits

0xeae2,	// (0x00084b48) popup_call_audio_first_window_g1

0xeb2e,	// (0x00084b94) popup_call_audio_first_window_g2_ParamLimits

0xeb2e,	// (0x00084b94) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x00085153) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x00085153) popup_call_audio_first_window_g

0xeb72,	// (0x00084bd8) popup_call_audio_first_window_t1_ParamLimits

0xeb72,	// (0x00084bd8) popup_call_audio_first_window_t1

0xec1e,	// (0x00084c84) popup_call_audio_first_window_t4_ParamLimits

0xec1e,	// (0x00084c84) popup_call_audio_first_window_t4

0xecaa,	// (0x00084d10) popup_call_audio_first_window_t5_ParamLimits

0xecaa,	// (0x00084d10) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x00085158) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x00085158) popup_call_audio_first_window_t

0xecd9,	// (0x00084d3f) bg_popup_call_pane_cp02

0xece3,	// (0x00084d49) call_type_pane_cp023

0xeceb,	// (0x00084d51) popup_call_audio_wait_window_g1

0xecf3,	// (0x00084d59) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0008515f) popup_call_audio_wait_window_g

0xecfb,	// (0x00084d61) popup_call_audio_wait_window_t3

0xed09,	// (0x00084d6f) bg_popup_call_pane_cp03_ParamLimits

0xed09,	// (0x00084d6f) bg_popup_call_pane_cp03

0xed80,	// (0x00084de6) call_thumbnail_pane_cp011_ParamLimits

0xed80,	// (0x00084de6) call_thumbnail_pane_cp011

0xed8c,	// (0x00084df2) call_type_pane_cp034_ParamLimits

0xed8c,	// (0x00084df2) call_type_pane_cp034

0xedc8,	// (0x00084e2e) popup_call_audio_second_window_g1_ParamLimits

0xedc8,	// (0x00084e2e) popup_call_audio_second_window_g1

0xee04,	// (0x00084e6a) popup_call_audio_second_window_g2_ParamLimits

0xee04,	// (0x00084e6a) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x00085164) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x00085164) popup_call_audio_second_window_g

0xee40,	// (0x00084ea6) popup_call_audio_second_window_t1_ParamLimits

0xee40,	// (0x00084ea6) popup_call_audio_second_window_t1

0xeec1,	// (0x00084f27) popup_call_audio_second_window_t2_ParamLimits

0xeec1,	// (0x00084f27) popup_call_audio_second_window_t2

0xeef7,	// (0x00084f5d) popup_call_audio_second_window_t3_ParamLimits

0xeef7,	// (0x00084f5d) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x00085169) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x00085169) popup_call_audio_second_window_t

0xecd9,	// (0x00084d3f) bg_popup_call_pane_cp04

0xef2d,	// (0x00084f93) list_conf_pane

0xef35,	// (0x00084f9b) popup_call_audio_conf_window_t1

0xef43,	// (0x00084fa9) call_thumbnail_pane_g1

0xef4b,	// (0x00084fb1) bg_pinb_pane_ParamLimits

0xef4b,	// (0x00084fb1) bg_pinb_pane

0xef59,	// (0x00084fbf) find_pinb_pane

0xef62,	// (0x00084fc8) listscroll_pinb_pane_ParamLimits

0xef62,	// (0x00084fc8) listscroll_pinb_pane

0xef71,	// (0x00084fd7) pinb_bg_pane_g1

0x6c80,	// (0x0007cce6) pinb_bg_pane_g2

0x6c8c,	// (0x0007ccf2) pinb_bg_pane_g3

0x6c98,	// (0x0007ccfe) pinb_bg_pane_g4

0x6ca4,	// (0x0007cd0a) pinb_bg_pane_g5

0x6cb0,	// (0x0007cd16) pinb_bg_pane_g6

0x6cbb,	// (0x0007cd21) pinb_bg_pane_g7

0x6cc6,	// (0x0007cd2c) pinb_bg_pane_g8

0x6cd1,	// (0x0007cd37) pinb_bg_pane_g9

0x6cdb,	// (0x0007cd41) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x00085170) pinb_bg_pane_g

0x6cf8,	// (0x0007cd5e) grid_pinb_pane

0x6d03,	// (0x0007cd69) list_pinb_pane

0x6d0e,	// (0x0007cd74) scroll_pane_cp01_ParamLimits

0x6d0e,	// (0x0007cd74) scroll_pane_cp01

0xef7b,	// (0x00084fe1) find_pinb_pane_g1_ParamLimits

0xef7b,	// (0x00084fe1) find_pinb_pane_g1

0xef93,	// (0x00084ff9) find_pinb_pane_t1

0xefa5,	// (0x0008500b) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0008518a) find_pinb_pane_t

0xefba,	// (0x00085020) input_focus_pane_cp01_ParamLimits

0xefba,	// (0x00085020) input_focus_pane_cp01

0x6d20,	// (0x0007cd86) cell_pinb_pane_ParamLimits

0x6d20,	// (0x0007cd86) cell_pinb_pane

0x6d48,	// (0x0007cdae) cell_pinb_pane_g1_ParamLimits

0x6d48,	// (0x0007cdae) cell_pinb_pane_g1

0x6d5d,	// (0x0007cdc3) cell_pinb_pane_g2_ParamLimits

0x6d5d,	// (0x0007cdc3) cell_pinb_pane_g2

0xefc6,	// (0x0008502c) cell_pinb_pane_g3_ParamLimits

0xefc6,	// (0x0008502c) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0008518f) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0008518f) cell_pinb_pane_g

0xecd9,	// (0x00084d3f) grid_highlight_pane_cp01

0x6d69,	// (0x0007cdcf) list_pinb_item_pane_ParamLimits

0x6d69,	// (0x0007cdcf) list_pinb_item_pane

0xecd9,	// (0x00084d3f) list_highlight_pane_cp02

0x6d8f,	// (0x0007cdf5) list_pinb_item_pane_g1_ParamLimits

0x6d8f,	// (0x0007cdf5) list_pinb_item_pane_g1

0x6d9c,	// (0x0007ce02) list_pinb_item_pane_g2_ParamLimits

0x6d9c,	// (0x0007ce02) list_pinb_item_pane_g2

0x6da8,	// (0x0007ce0e) list_pinb_item_pane_g3_ParamLimits

0x6da8,	// (0x0007ce0e) list_pinb_item_pane_g3

0x6db9,	// (0x0007ce1f) list_pinb_item_pane_g4_ParamLimits

0x6db9,	// (0x0007ce1f) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x00085196) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x00085196) list_pinb_item_pane_g

0x6dc5,	// (0x0007ce2b) list_pinb_item_pane_t1_ParamLimits

0x6dc5,	// (0x0007ce2b) list_pinb_item_pane_t1

0x6df6,	// (0x0007ce5c) calc_display_pane

0x6e14,	// (0x0007ce7a) calc_paper_pane

0x6e30,	// (0x0007ce96) grid_calc_pane

0xecd9,	// (0x00084d3f) bg_list_pane_cp01

0x6e5c,	// (0x0007cec2) clock_g1

0x6e64,	// (0x0007ceca) clock_g2

0x0001,

0xf139,	// (0x0008519f) clock_g

0x6e6e,	// (0x0007ced4) clock_t1_ParamLimits

0x6e6e,	// (0x0007ced4) clock_t1

0x6e83,	// (0x0007cee9) clock_t2_ParamLimits

0x6e83,	// (0x0007cee9) clock_t2

0x6e95,	// (0x0007cefb) clock_t3_ParamLimits

0x6e95,	// (0x0007cefb) clock_t3

0x6ea7,	// (0x0007cf0d) clock_t4_ParamLimits

0x6ea7,	// (0x0007cf0d) clock_t4

0x6eb9,	// (0x0007cf1f) clock_t5_ParamLimits

0x6eb9,	// (0x0007cf1f) clock_t5

0x6ece,	// (0x0007cf34) clock_t6_ParamLimits

0x6ece,	// (0x0007cf34) clock_t6

0x6ee0,	// (0x0007cf46) clock_t7_ParamLimits

0x6ee0,	// (0x0007cf46) clock_t7

0x6ef2,	// (0x0007cf58) clock_t8_ParamLimits

0x6ef2,	// (0x0007cf58) clock_t8

0x6f08,	// (0x0007cf6e) clock_t9_ParamLimits

0x6f08,	// (0x0007cf6e) clock_t9

0x0008,

0xf13e,	// (0x000851a4) clock_t_ParamLimits

0xf13e,	// (0x000851a4) clock_t

0xefd2,	// (0x00085038) popup_clock_analogue_window_cp02

0xefd2,	// (0x00085038) popup_clock_digital_window_cp01

0xefda,	// (0x00085040) listscroll_help_pane

0xecd9,	// (0x00084d3f) phob_pre_status_pane

0xefe4,	// (0x0008504a) grid_qdial_pane

0xef4b,	// (0x00084fb1) listscroll_mce_pane

0xef4b,	// (0x00084fb1) bg_notes_pane

0xefee,	// (0x00085054) list_notes_pane

0x6f1e,	// (0x0007cf84) scroll_pane_cp06

0xeffc,	// (0x00085062) bg_calc_paper_pane

0x6f2d,	// (0x0007cf93) list_calc_pane

0xf010,	// (0x00085076) bg_calc_display_pane

0x6f47,	// (0x0007cfad) calc_display_pane_t1

0x6f5c,	// (0x0007cfc2) calc_display_pane_t2

0x6f71,	// (0x0007cfd7) calc_display_pane_t3

0x0002,

0xf151,	// (0x000851b7) calc_display_pane_t

0x6f83,	// (0x0007cfe9) cell_calc_pane_ParamLimits

0x6f83,	// (0x0007cfe9) cell_calc_pane

0xf01c,	// (0x00085082) bg_calc_paper_pane_g1

0xf028,	// (0x0008508e) bg_calc_paper_pane_g2

0xf034,	// (0x0008509a) bg_calc_paper_pane_g3

0xf040,	// (0x000850a6) bg_calc_paper_pane_g4

0xf04c,	// (0x000850b2) bg_calc_paper_pane_g5

0x6fb0,	// (0x0007d016) bg_calc_paper_pane_g6

0x6fc1,	// (0x0007d027) bg_calc_paper_pane_g7

0x6fd2,	// (0x0007d038) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x000851be) bg_calc_paper_pane_g

0x6fe3,	// (0x0007d049) calc_bg_paper_pane_g9

0x6ff4,	// (0x0007d05a) list_calc_item_pane_ParamLimits

0x6ff4,	// (0x0007d05a) list_calc_item_pane

0xf058,	// (0x000850be) list_calc_item_pane_g1

0x7023,	// (0x0007d089) list_calc_item_pane_t1_ParamLimits

0x7023,	// (0x0007d089) list_calc_item_pane_t1

0x7035,	// (0x0007d09b) list_calc_item_pane_t2_ParamLimits

0x7035,	// (0x0007d09b) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x000851cf) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x000851cf) list_calc_item_pane_t

0xf065,	// (0x000850cb) cell_calc_pane_g1

0xf06f,	// (0x000850d5) grid_highlight_pane_cp02

0x23fe,	// (0x00078464) bg_calc_display_pane_g1

0x7065,	// (0x0007d0cb) bg_calc_display_pane_g2

0x706f,	// (0x0007d0d5) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x000851d9) bg_calc_display_pane_g

0x7078,	// (0x0007d0de) cell_qdial_pane_ParamLimits

0x7078,	// (0x0007d0de) cell_qdial_pane

0x708c,	// (0x0007d0f2) cell_qdial_pane_g1_ParamLimits

0x708c,	// (0x0007d0f2) cell_qdial_pane_g1

0x7099,	// (0x0007d0ff) cell_qdial_pane_g2_ParamLimits

0x7099,	// (0x0007d0ff) cell_qdial_pane_g2

0xf091,	// (0x000850f7) cell_qdial_pane_g3_ParamLimits

0xf091,	// (0x000850f7) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000851e0) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000851e0) cell_qdial_pane_g

0x70b7,	// (0x0007d11d) cell_qdial_pane_t1_ParamLimits

0x70b7,	// (0x0007d11d) cell_qdial_pane_t1

0x70cf,	// (0x0007d135) cell_qdial_pane_t2_ParamLimits

0x70cf,	// (0x0007d135) cell_qdial_pane_t2

0x70e2,	// (0x0007d148) cell_qdial_pane_t3_ParamLimits

0x70e2,	// (0x0007d148) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000851e9) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000851e9) cell_qdial_pane_t

0xecd9,	// (0x00084d3f) grid_highlight_pane_cp04

0xf09d,	// (0x00085103) thumbnail_qdial_pane_ParamLimits

0xf09d,	// (0x00085103) thumbnail_qdial_pane

0x0073,	// (0x000760d9) list_help_pane

0x007c,	// (0x000760e2) scroll_pane_cp02

0x70f5,	// (0x0007d15b) help_list_pane_t1_ParamLimits

0x70f5,	// (0x0007d15b) help_list_pane_t1

0x7128,	// (0x0007d18e) bg_notes_pane_g2

0x7130,	// (0x0007d196) bg_notes_pane_g3

0x7138,	// (0x0007d19e) notes_bg_pane_g1

0x7140,	// (0x0007d1a6) notes_bg_pane_g4

0x7148,	// (0x0007d1ae) notes_bg_pane_g5

0x7150,	// (0x0007d1b6) notes_bg_pane_g6

0x7158,	// (0x0007d1be) notes_bg_pane_g7

0x7160,	// (0x0007d1c6) notes_bg_pane_g8

0x7168,	// (0x0007d1ce) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x00085207) notes_bg_pane_g

0x7170,	// (0x0007d1d6) list_notes_text_pane_ParamLimits

0x7170,	// (0x0007d1d6) list_notes_text_pane

0x0085,	// (0x000760eb) list_notes_text_pane_g1

0x5681,	// (0x0007b6e7) list_notes_text_pane_t1

0x7198,	// (0x0007d1fe) listscroll_cale_week_pane

0x71bd,	// (0x0007d223) bg_cale_heading_pane

0x00a8,	// (0x0007610e) bg_cale_pane_cp01

0x71df,	// (0x0007d245) cale_week_corner_pane

0x71f9,	// (0x0007d25f) cale_week_day_heading_pane

0x721b,	// (0x0007d281) cale_week_scroll_pane_g1

0x7238,	// (0x0007d29e) cale_week_scroll_pane_g2

0x724b,	// (0x0007d2b1) cale_week_scroll_pane_g3

0x725e,	// (0x0007d2c4) cale_week_scroll_pane_g4

0x7271,	// (0x0007d2d7) cale_week_scroll_pane_g5

0x7284,	// (0x0007d2ea) cale_week_scroll_pane_g6

0x7297,	// (0x0007d2fd) cale_week_scroll_pane_g7

0x72aa,	// (0x0007d310) cale_week_scroll_pane_g8

0x72bf,	// (0x0007d325) cale_week_scroll_pane_g9

0x72d2,	// (0x0007d338) cale_week_scroll_pane_g10

0x72e5,	// (0x0007d34b) cale_week_scroll_pane_g11

0x72f8,	// (0x0007d35e) cale_week_scroll_pane_g12

0x730f,	// (0x0007d375) cale_week_scroll_pane_g13

0x732a,	// (0x0007d390) cale_week_scroll_pane_g14

0x7345,	// (0x0007d3ab) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x00085216) cale_week_scroll_pane_g

0x7375,	// (0x0007d3db) cale_week_time_pane

0x738a,	// (0x0007d3f0) grid_cale_week_pane

0x00d7,	// (0x0007613d) scroll_pane_cp08

0x73a9,	// (0x0007d40f) cell_cale_week_pane_ParamLimits

0x73a9,	// (0x0007d40f) cell_cale_week_pane

0x740b,	// (0x0007d471) cale_week_day_heading_pane_t1

0x7446,	// (0x0007d4ac) cale_week_day_heading_pane_t2

0x7481,	// (0x0007d4e7) cale_week_day_heading_pane_t3

0x74bc,	// (0x0007d522) cale_week_day_heading_pane_t4

0x74f7,	// (0x0007d55d) cale_week_day_heading_pane_t5

0x7532,	// (0x0007d598) cale_week_day_heading_pane_t6

0x756d,	// (0x0007d5d3) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x00085237) cale_week_day_heading_pane_t

0x00f4,	// (0x0007615a) bg_cale_side_pane

0x75a8,	// (0x0007d60e) cale_week_time_pane_t1

0x75c2,	// (0x0007d628) cale_week_time_pane_t2

0x75dc,	// (0x0007d642) cale_week_time_pane_t3

0x75f6,	// (0x0007d65c) cale_week_time_pane_t4

0x7610,	// (0x0007d676) cale_week_time_pane_t5

0x762a,	// (0x0007d690) cale_week_time_pane_t6

0x764a,	// (0x0007d6b0) cale_week_time_pane_t7

0x766c,	// (0x0007d6d2) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x00085246) cale_week_time_pane_t

0x7690,	// (0x0007d6f6) cell_cale_week_pane_g2

0x76b4,	// (0x0007d71a) cell_cale_week_pane_g3_ParamLimits

0x76b4,	// (0x0007d71a) cell_cale_week_pane_g3

0x0102,	// (0x00076168) grid_highlight_pane_cp07

0x010a,	// (0x00076170) listscroll_gms_pane

0x0114,	// (0x0007617a) grid_gms_pane

0x011d,	// (0x00076183) listscroll_gms_pane_g1

0x0125,	// (0x0007618b) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x00085257) listscroll_gms_pane_g

0x76cc,	// (0x0007d732) scroll_pane_cp010

0x76d7,	// (0x0007d73d) cell_gms_pane_ParamLimits

0x76d7,	// (0x0007d73d) cell_gms_pane

0x76ea,	// (0x0007d750) cell_gms_pane_g1

0x012d,	// (0x00076193) cell_gms_pane_g2

0x0135,	// (0x0007619b) cell_gms_pane_g3

0x013e,	// (0x000761a4) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0008525c) cell_gms_pane_g

0x0147,	// (0x000761ad) grid_highlight_pane_cp09

0x9a8d,	// (0x0007faf3) phob_pre_status_pane_g1

0x9a95,	// (0x0007fafb) phob_pre_status_pane_g2

0x9a9d,	// (0x0007fb03) phob_pre_status_pane_g3

0x9aa5,	// (0x0007fb0b) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x00085647) phob_pre_status_pane_g

0x9ab5,	// (0x0007fb1b) phob_pre_status_pane_t1

0x9ac5,	// (0x0007fb2b) phob_pre_status_pane_t2

0x9ad5,	// (0x0007fb3b) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x00085652) phob_pre_status_pane_t

0x014f,	// (0x000761b5) bg_list_pane_cp05

0x76fa,	// (0x0007d760) grid_vorec_pane

0x7704,	// (0x0007d76a) vorec_t1

0x7712,	// (0x0007d778) vorec_t2

0x7720,	// (0x0007d786) vorec_t3

0x772e,	// (0x0007d794) vorec_t4

0xe896,	// (0x000848fc) vorec_t5

0xe8a4,	// (0x0008490a) vorec_t6

0x0004,

0xf1ff,	// (0x00085265) vorec_t

0xe8b2,	// (0x00084918) wait_bar_pane_cp01

0x774a,	// (0x0007d7b0) cell_vorec_pane_ParamLimits

0x774a,	// (0x0007d7b0) cell_vorec_pane

0x775d,	// (0x0007d7c3) cell_vorec_pane_g1

0xecd9,	// (0x00084d3f) grid_highlight_pane_cp05

0x7777,	// (0x0007d7dd) cams_zoom_pane

0x7783,	// (0x0007d7e9) image_vga_pane

0x7792,	// (0x0007d7f8) main_camera_pane_g1

0x77a0,	// (0x0007d806) main_camera_pane_g2

0x77ac,	// (0x0007d812) main_camera_pane_g3

0x77b8,	// (0x0007d81e) main_camera_pane_g4

0x77c4,	// (0x0007d82a) main_camera_pane_g5

0x77d0,	// (0x0007d836) main_camera_pane_g6

0x77dc,	// (0x0007d842) main_camera_pane_g7

0x0007,

0xf20a,	// (0x00085270) main_camera_pane_g

0x77e8,	// (0x0007d84e) main_camera_pane_t1

0x77fa,	// (0x0007d860) main_camera_pane_t2

0x0001,

0xf21b,	// (0x00085281) main_camera_pane_t

0x781b,	// (0x0007d881) cams_zoom_pane_cp_ParamLimits

0x781b,	// (0x0007d881) cams_zoom_pane_cp

0x783f,	// (0x0007d8a5) image_cif_pane_ParamLimits

0x783f,	// (0x0007d8a5) image_cif_pane

0x785d,	// (0x0007d8c3) image_subqcif_pane

0x7865,	// (0x0007d8cb) main_video_pane_g1_ParamLimits

0x7865,	// (0x0007d8cb) main_video_pane_g1

0x7885,	// (0x0007d8eb) main_video_pane_g2_ParamLimits

0x7885,	// (0x0007d8eb) main_video_pane_g2

0x78b5,	// (0x0007d91b) main_video_pane_g3_ParamLimits

0x78b5,	// (0x0007d91b) main_video_pane_g3

0x78de,	// (0x0007d944) main_video_pane_g4_ParamLimits

0x78de,	// (0x0007d944) main_video_pane_g4

0x7907,	// (0x0007d96d) main_video_pane_g5_ParamLimits

0x7907,	// (0x0007d96d) main_video_pane_g5

0x0163,	// (0x000761c9) main_video_pane_g6_ParamLimits

0x0163,	// (0x000761c9) main_video_pane_g6

0x0006,

0xf220,	// (0x00085286) main_video_pane_g_ParamLimits

0xf220,	// (0x00085286) main_video_pane_g

0x7929,	// (0x0007d98f) main_video_pane_t1_ParamLimits

0x7929,	// (0x0007d98f) main_video_pane_t1

0x017d,	// (0x000761e3) cams_zoom_pane_g1

0x0186,	// (0x000761ec) cams_zoom_pane_g2

0x018f,	// (0x000761f5) cams_zoom_pane_g3

0x0198,	// (0x000761fe) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x00085295) cams_zoom_pane_g

0x7973,	// (0x0007d9d9) grid_cams_pane

0x7981,	// (0x0007d9e7) linegrid_cams_pane

0x798f,	// (0x0007d9f5) cell_cams_pane_ParamLimits

0x798f,	// (0x0007d9f5) cell_cams_pane

0x01a1,	// (0x00076207) cams_burst_image_pane

0x01a9,	// (0x0007620f) cell_cams_pane_g1

0xecd9,	// (0x00084d3f) grid_highlight_pane_cp03

0xf065,	// (0x000850cb) mp_bg_pane_g1

0xecd9,	// (0x00084d3f) bg_list_pane_cp03

0x1ee6,	// (0x00077f4c) bg_mp_pane

0x1eee,	// (0x00077f54) grid_mp_pane

0x1ef6,	// (0x00077f5c) media_player_g1

0x1efe,	// (0x00077f64) media_player_t1

0x1f0c,	// (0x00077f72) media_player_t2

0x1f1a,	// (0x00077f80) media_player_t3

0x1f28,	// (0x00077f8e) media_player_t4

0x1f36,	// (0x00077f9c) media_player_t5

0x1f44,	// (0x00077faa) media_player_t6

0x1f52,	// (0x00077fb8) media_player_t7

0x0006,

0xf5cb,	// (0x00085631) media_player_t

0x1f60,	// (0x00077fc6) wait_bar_pane_cp02

0xf5b0,	// (0x00085616) main_usb_pane_t

0x9a84,	// (0x0007faea) cell_mp_pane

0xf065,	// (0x000850cb) cell_mp_pane_g1

0xecd9,	// (0x00084d3f) grid_highlight_pane_cp06

0x01b1,	// (0x00076217) grid_skin_colour_pane

0x01b9,	// (0x0007621f) list_highlight_pane_cp03

0x79ba,	// (0x0007da20) skin_g1

0x01c1,	// (0x00076227) skin_t1

0x01d0,	// (0x00076236) skin_t2

0x0001,

0xf264,	// (0x000852ca) skin_t

0x79c4,	// (0x0007da2a) cell_skin_colour_pane_ParamLimits

0x79c4,	// (0x0007da2a) cell_skin_colour_pane

0x01de,	// (0x00076244) cell_skin_colour_pane_g1

0x7a48,	// (0x0007daae) call_video_g1_ParamLimits

0x7a48,	// (0x0007daae) call_video_g1

0x7a58,	// (0x0007dabe) call_video_g2_ParamLimits

0x7a58,	// (0x0007dabe) call_video_g2

0x0001,

0xf269,	// (0x000852cf) call_video_g_ParamLimits

0xf269,	// (0x000852cf) call_video_g

0x7ab2,	// (0x0007db18) call_video_uplink_pane_cp1_ParamLimits

0x7ab2,	// (0x0007db18) call_video_uplink_pane_cp1

0x01f0,	// (0x00076256) call_video_uplink_pane_cp2

0x7b7e,	// (0x0007dbe4) video_down_crop_pane_ParamLimits

0x7b7e,	// (0x0007dbe4) video_down_crop_pane

0x7c7c,	// (0x0007dce2) video_down_pane_ParamLimits

0x7c7c,	// (0x0007dce2) video_down_pane

0x01f8,	// (0x0007625e) video_down_subqcif_pane_ParamLimits

0x01f8,	// (0x0007625e) video_down_subqcif_pane

0x0210,	// (0x00076276) video_down_subqcif_pane_cp_ParamLimits

0x0210,	// (0x00076276) video_down_subqcif_pane_cp

0x0236,	// (0x0007629c) im_reading_pane_ParamLimits

0x0236,	// (0x0007629c) im_reading_pane

0x7d9e,	// (0x0007de04) im_writing_pane_ParamLimits

0x7d9e,	// (0x0007de04) im_writing_pane

0x7dbc,	// (0x0007de22) im_reading_pane_t1

0x0250,	// (0x000762b6) list_im_pane

0x0261,	// (0x000762c7) scroll_pane_cp07

0x7e10,	// (0x0007de76) im_writing_pane_t1_ParamLimits

0x7e10,	// (0x0007de76) im_writing_pane_t1

0x027a,	// (0x000762e0) im_writing_pane_t2_ParamLimits

0x027a,	// (0x000762e0) im_writing_pane_t2

0x0001,

0xf273,	// (0x000852d9) im_writing_pane_t_ParamLimits

0xf273,	// (0x000852d9) im_writing_pane_t

0xecd9,	// (0x00084d3f) input_focus_pane_cp04

0xecd9,	// (0x00084d3f) input_focus_pane_cp05

0x7e25,	// (0x0007de8b) list_im_single_pane_ParamLimits

0x7e25,	// (0x0007de8b) list_im_single_pane

0x7e49,	// (0x0007deaf) list_single_im_pane_t1

0x9a48,	// (0x0007faae) blid_accuracy_pane

0x9a50,	// (0x0007fab6) blid_compass_pane

0x9a5a,	// (0x0007fac0) main_location_t1

0x9a68,	// (0x0007face) main_location_t2

0x9a76,	// (0x0007fadc) main_location_t3

0x0002,

0xf5da,	// (0x00085640) main_location_t

0xecd9,	// (0x00084d3f) aid_levels_location

0xf065,	// (0x000850cb) blid_accuracy_pane_g1

0xf065,	// (0x000850cb) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0008533b) blid_accuracy_pane_g

0x02c2,	// (0x00076328) wml_content_pane

0x0300,	// (0x00076366) wml_button_pane_ParamLimits

0x0300,	// (0x00076366) wml_button_pane

0x7e58,	// (0x0007debe) wml_list_single_large_pane_ParamLimits

0x7e58,	// (0x0007debe) wml_list_single_large_pane

0x7e82,	// (0x0007dee8) wml_list_single_medium_pane_ParamLimits

0x7e82,	// (0x0007dee8) wml_list_single_medium_pane

0x7eb3,	// (0x0007df19) wml_list_single_small_pane_ParamLimits

0x7eb3,	// (0x0007df19) wml_list_single_small_pane

0x0314,	// (0x0007637a) wml_selection_box_pane_ParamLimits

0x0314,	// (0x0007637a) wml_selection_box_pane

0x0327,	// (0x0007638d) wml_list_single_pane_t1

0x0336,	// (0x0007639c) wml_list_single_medium_pane_t1

0x0345,	// (0x000763ab) wml_list_single_large_pane_t1

0x0354,	// (0x000763ba) input_focus_pane_cp02_ParamLimits

0x0354,	// (0x000763ba) input_focus_pane_cp02

0x0367,	// (0x000763cd) wml_selection_box_pane_g1

0x0370,	// (0x000763d6) wml_selection_box_pane_t1_ParamLimits

0x0370,	// (0x000763d6) wml_selection_box_pane_t1

0xef4b,	// (0x00084fb1) bg_wml_button_pane_ParamLimits

0xef4b,	// (0x00084fb1) bg_wml_button_pane

0x0388,	// (0x000763ee) wml_button_pane_g1

0x0390,	// (0x000763f6) wml_button_pane_t1

0x0388,	// (0x000763ee) wml_button_bg_pane_g1

0x03a0,	// (0x00076406) wml_button_bg_pane_g2

0x03a8,	// (0x0007640e) wml_button_bg_pane_g3

0x03b0,	// (0x00076416) wml_button_bg_pane_g4

0x03b8,	// (0x0007641e) wml_button_bg_pane_g5

0x03c0,	// (0x00076426) wml_button_bg_pane_g6

0x03c8,	// (0x0007642e) wml_button_bg_pane_g7

0x03d0,	// (0x00076436) wml_button_bg_pane_g8

0x03d8,	// (0x0007643e) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000852de) wml_button_bg_pane_g

0x7eed,	// (0x0007df53) bg_list_pane_cp02

0x03e0,	// (0x00076446) mce_header_pane_ParamLimits

0x03e0,	// (0x00076446) mce_header_pane

0x03f6,	// (0x0007645c) mce_icon_pane

0x03f6,	// (0x0007645c) mce_image_pane

0x03ff,	// (0x00076465) mce_text_pane_ParamLimits

0x03ff,	// (0x00076465) mce_text_pane

0x7ef7,	// (0x0007df5d) scroll_pane_cp03

0x02f8,	// (0x0007635e) scroll_pane_cp04

0x0412,	// (0x00076478) scroll_pane_cp05_ParamLimits

0x0412,	// (0x00076478) scroll_pane_cp05

0x7f01,	// (0x0007df67) mce_header_field_pane_ParamLimits

0x7f01,	// (0x0007df67) mce_header_field_pane

0x7f21,	// (0x0007df87) mce_header_field_pane_2_ParamLimits

0x7f21,	// (0x0007df87) mce_header_field_pane_2

0x7f37,	// (0x0007df9d) mce_header_field_pane_3

0x7f3f,	// (0x0007dfa5) list_single_mce_message_pane_ParamLimits

0x7f3f,	// (0x0007dfa5) list_single_mce_message_pane

0x7f6a,	// (0x0007dfd0) list_single_mce_smart_pane_ParamLimits

0x7f6a,	// (0x0007dfd0) list_single_mce_smart_pane

0x041e,	// (0x00076484) input_focus_pane_cp03

0x0427,	// (0x0007648d) list_header_data_pane

0x7fa0,	// (0x0007e006) mce_header_field_pane_t1

0x7fae,	// (0x0007e014) list_single_mce_header_pane_ParamLimits

0x7fae,	// (0x0007e014) list_single_mce_header_pane

0x042f,	// (0x00076495) list_single_mce_header_pane_t1

0x043e,	// (0x000764a4) list_single_mce_message_pane_g1

0x0446,	// (0x000764ac) list_single_mce_message_pane_t1

0x8000,	// (0x0007e066) bg_cale_heading_pane_cp01_ParamLimits

0x8000,	// (0x0007e066) bg_cale_heading_pane_cp01

0x0454,	// (0x000764ba) bg_cale_pane_cp02_ParamLimits

0x0454,	// (0x000764ba) bg_cale_pane_cp02

0x8043,	// (0x0007e0a9) cale_month_corner_pane

0x805d,	// (0x0007e0c3) cale_month_day_heading_pane_ParamLimits

0x805d,	// (0x0007e0c3) cale_month_day_heading_pane

0x80b8,	// (0x0007e11e) cale_month_pane_g1_ParamLimits

0x80b8,	// (0x0007e11e) cale_month_pane_g1

0x80f0,	// (0x0007e156) cale_month_pane_g2_ParamLimits

0x80f0,	// (0x0007e156) cale_month_pane_g2

0x8119,	// (0x0007e17f) cale_month_pane_g3_ParamLimits

0x8119,	// (0x0007e17f) cale_month_pane_g3

0x8165,	// (0x0007e1cb) cale_month_pane_g4_ParamLimits

0x8165,	// (0x0007e1cb) cale_month_pane_g4

0x81b1,	// (0x0007e217) cale_month_pane_g5_ParamLimits

0x81b1,	// (0x0007e217) cale_month_pane_g5

0x81fd,	// (0x0007e263) cale_month_pane_g6_ParamLimits

0x81fd,	// (0x0007e263) cale_month_pane_g6

0x8249,	// (0x0007e2af) cale_month_pane_g7_ParamLimits

0x8249,	// (0x0007e2af) cale_month_pane_g7

0x82ad,	// (0x0007e313) cale_month_pane_g8_ParamLimits

0x82ad,	// (0x0007e313) cale_month_pane_g8

0x8311,	// (0x0007e377) cale_month_pane_g9_ParamLimits

0x8311,	// (0x0007e377) cale_month_pane_g9

0x836f,	// (0x0007e3d5) cale_month_pane_g10_ParamLimits

0x836f,	// (0x0007e3d5) cale_month_pane_g10

0x83cb,	// (0x0007e431) cale_month_pane_g11_ParamLimits

0x83cb,	// (0x0007e431) cale_month_pane_g11

0x841f,	// (0x0007e485) cale_month_pane_g12_ParamLimits

0x841f,	// (0x0007e485) cale_month_pane_g12

0x8475,	// (0x0007e4db) cale_month_pane_g13_ParamLimits

0x8475,	// (0x0007e4db) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000852f1) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000852f1) cale_month_pane_g

0x84cb,	// (0x0007e531) cale_month_week_pane

0x84e0,	// (0x0007e546) grid_cale_month_pane_ParamLimits

0x84e0,	// (0x0007e546) grid_cale_month_pane

0x852e,	// (0x0007e594) cale_month_day_heading_pane_t1

0x85b4,	// (0x0007e61a) cale_month_day_heading_pane_t2

0x8645,	// (0x0007e6ab) cale_month_day_heading_pane_t3

0x86d6,	// (0x0007e73c) cale_month_day_heading_pane_t4

0x8767,	// (0x0007e7cd) cale_month_day_heading_pane_t5

0x87f8,	// (0x0007e85e) cale_month_day_heading_pane_t6

0x8889,	// (0x0007e8ef) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0008530c) cale_month_day_heading_pane_t

0x00f4,	// (0x0007615a) bg_cale_side_pane_cp01

0x8932,	// (0x0007e998) cale_month_week_pane_t1

0x894b,	// (0x0007e9b1) cale_month_week_pane_t2

0x8964,	// (0x0007e9ca) cale_month_week_pane_t3

0x897d,	// (0x0007e9e3) cale_month_week_pane_t4

0x8996,	// (0x0007e9fc) cale_month_week_pane_t5

0x89b7,	// (0x0007ea1d) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0008531b) cale_month_week_pane_t

0x89d8,	// (0x0007ea3e) cell_cale_month_pane_ParamLimits

0x89d8,	// (0x0007ea3e) cell_cale_month_pane

0x8afa,	// (0x0007eb60) cell_cale_month_pane_g1

0x8b06,	// (0x0007eb6c) cell_cale_month_pane_t1_ParamLimits

0x8b06,	// (0x0007eb6c) cell_cale_month_pane_t1

0x0102,	// (0x00076168) grid_highlight_pane_cp08

0xf065,	// (0x000850cb) main_smil_g1

0x8b26,	// (0x0007eb8c) smil_status_pane

0x0493,	// (0x000764f9) smil_text_pane

0x1dfa,	// (0x00077e60) bg_popup_call3_rect_pane_g8

0x1e02,	// (0x00077e68) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000855d4) bg_popup_call3_rect_pane_g

0x2068,	// (0x000780ce) smil_status_volume_pane_g1

0x049d,	// (0x00076503) smil_status_pane_t1

0x9e72,	// (0x0007fed8) volume_smil_pane

0x04b4,	// (0x0007651a) list_smil_text_pane

0x8b39,	// (0x0007eb9f) scroll_pane_cp011

0x8b44,	// (0x0007ebaa) smil_text_list_pane_t1_ParamLimits

0x8b44,	// (0x0007ebaa) smil_text_list_pane_t1

0x8bbc,	// (0x0007ec22) aid_volume_smil_ParamLimits

0x8bbc,	// (0x0007ec22) aid_volume_smil

0xf065,	// (0x000850cb) smil_volume_pane_g1

0xf065,	// (0x000850cb) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0008533b) smil_volume_pane_g

0x7198,	// (0x0007d1fe) listscroll_cale_day_pane

0x04be,	// (0x00076524) bg_cale_pane

0x04d6,	// (0x0007653c) list_cale_pane

0x04f9,	// (0x0007655f) scroll_pane_cp09

0x050a,	// (0x00076570) cale_bg_pane_g1

0x0512,	// (0x00076578) cale_bg_pane_g2

0x051a,	// (0x00076580) cale_bg_pane_g3

0x0522,	// (0x00076588) cale_bg_pane_g4

0x052a,	// (0x00076590) cale_bg_pane_g5

0x0532,	// (0x00076598) cale_bg_pane_g6

0x053a,	// (0x000765a0) cale_bg_pane_g7

0x0542,	// (0x000765a8) cale_bg_pane_g8

0x054a,	// (0x000765b0) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x00085340) cale_bg_pane_g

0x8be6,	// (0x0007ec4c) list_cale_time_pane_ParamLimits

0x8be6,	// (0x0007ec4c) list_cale_time_pane

0x0552,	// (0x000765b8) list_cale_time_pane_g1_ParamLimits

0x0552,	// (0x000765b8) list_cale_time_pane_g1

0x055e,	// (0x000765c4) list_cale_time_pane_g2_ParamLimits

0x055e,	// (0x000765c4) list_cale_time_pane_g2

0x8c08,	// (0x0007ec6e) list_cale_time_pane_g3_ParamLimits

0x8c08,	// (0x0007ec6e) list_cale_time_pane_g3

0x8c16,	// (0x0007ec7c) list_cale_time_pane_g4_ParamLimits

0x8c16,	// (0x0007ec7c) list_cale_time_pane_g4

0x8c24,	// (0x0007ec8a) list_cale_time_pane_g5_ParamLimits

0x8c24,	// (0x0007ec8a) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x00085353) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x00085353) list_cale_time_pane_g

0x0578,	// (0x000765de) list_cale_time_pane_t1_ParamLimits

0x0578,	// (0x000765de) list_cale_time_pane_t1

0x05a0,	// (0x00076606) list_cale_time_pane_t2_ParamLimits

0x05a0,	// (0x00076606) list_cale_time_pane_t2

0x8eeb,	// (0x0007ef51) aid_blid_cardinal_pane

0x8f2d,	// (0x0007ef93) compass_pane_t4

0x05c8,	// (0x0007662e) list_cale_time_pane_t4_ParamLimits

0x05c8,	// (0x0007662e) list_cale_time_pane_t4

0x8f3b,	// (0x0007efa1) compass_pane_t5

0x8f4b,	// (0x0007efb1) compass_pane_t6

0x8f59,	// (0x0007efbf) compass_pane_t7

0x0a85,	// (0x00076aeb) navi_pane_cc_t1

0x0c62,	// (0x00076cc8) aid_phob_thumbnail_center_pane

0x954e,	// (0x0007f5b4) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x00085360) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x00085360) list_cale_time_pane_t

0xe930,	// (0x00084996) bg_popup_window_pane_cp02_ParamLimits

0xe930,	// (0x00084996) bg_popup_window_pane_cp02

0x05f0,	// (0x00076656) heading_pane_cp01_ParamLimits

0x05f0,	// (0x00076656) heading_pane_cp01

0x05fc,	// (0x00076662) loc_req_pane_ParamLimits

0x05fc,	// (0x00076662) loc_req_pane

0x060c,	// (0x00076672) loc_type_pane_ParamLimits

0x060c,	// (0x00076672) loc_type_pane

0x061e,	// (0x00076684) loc_type_pane_t1_ParamLimits

0x061e,	// (0x00076684) loc_type_pane_t1

0x0630,	// (0x00076696) loc_type_pane_t2_ParamLimits

0x0630,	// (0x00076696) loc_type_pane_t2

0x0642,	// (0x000766a8) loc_type_pane_t3_ParamLimits

0x0642,	// (0x000766a8) loc_type_pane_t3

0x0002,

0xf301,	// (0x00085367) loc_type_pane_t_ParamLimits

0xf301,	// (0x00085367) loc_type_pane_t

0x0654,	// (0x000766ba) list_loc_req_pane

0x065e,	// (0x000766c4) scroll_pane_cp012

0x8c32,	// (0x0007ec98) list_single_loc_request_popup_menu_pane_ParamLimits

0x8c32,	// (0x0007ec98) list_single_loc_request_popup_menu_pane

0x0669,	// (0x000766cf) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0669,	// (0x000766cf) list_single_loc_request_popup_menu_pane_g1

0x0675,	// (0x000766db) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0675,	// (0x000766db) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0008536e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0008536e) list_single_loc_request_popup_menu_pane_g

0x0681,	// (0x000766e7) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0681,	// (0x000766e7) list_single_loc_request_popup_menu_pane_t1

0x8c44,	// (0x0007ecaa) bg_popup_window_pane_cp03_ParamLimits

0x8c44,	// (0x0007ecaa) bg_popup_window_pane_cp03

0x8c52,	// (0x0007ecb8) heading_loc_req_pane_ParamLimits

0x8c52,	// (0x0007ecb8) heading_loc_req_pane

0x8c5e,	// (0x0007ecc4) popup_dyc_status_message_window_g1_ParamLimits

0x8c5e,	// (0x0007ecc4) popup_dyc_status_message_window_g1

0x8c6a,	// (0x0007ecd0) popup_dyc_status_message_window_t1_ParamLimits

0x8c6a,	// (0x0007ecd0) popup_dyc_status_message_window_t1

0x8c7c,	// (0x0007ece2) popup_dyc_status_message_window_t2_ParamLimits

0x8c7c,	// (0x0007ece2) popup_dyc_status_message_window_t2

0x8c8e,	// (0x0007ecf4) popup_dyc_status_message_window_t3_ParamLimits

0x8c8e,	// (0x0007ecf4) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x00085373) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x00085373) popup_dyc_status_message_window_t

0xecd9,	// (0x00084d3f) bg_heading_pane_cp01

0x06a3,	// (0x00076709) heading_loc_req_pane_g1

0x06ab,	// (0x00076711) heading_loc_req_pane_g2

0x06b3,	// (0x00076719) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0008537a) heading_loc_req_pane_g

0x06bb,	// (0x00076721) heading_loc_req_pane_t1

0x06ca,	// (0x00076730) bg_popup_sub_pane_cp01_ParamLimits

0x06ca,	// (0x00076730) bg_popup_sub_pane_cp01

0x06d8,	// (0x0007673e) popup_cale_events_window_g1_ParamLimits

0x06d8,	// (0x0007673e) popup_cale_events_window_g1

0x06f8,	// (0x0007675e) popup_cale_events_window_g2_ParamLimits

0x06f8,	// (0x0007675e) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000853ae) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000853ae) popup_cale_events_window_g

0x0718,	// (0x0007677e) popup_cale_events_window_t1_ParamLimits

0x0718,	// (0x0007677e) popup_cale_events_window_t1

0x072a,	// (0x00076790) popup_cale_events_window_t2_ParamLimits

0x072a,	// (0x00076790) popup_cale_events_window_t2

0x0768,	// (0x000767ce) popup_cale_events_window_t3_ParamLimits

0x0768,	// (0x000767ce) popup_cale_events_window_t3

0x07a2,	// (0x00076808) popup_cale_events_window_t4_ParamLimits

0x07a2,	// (0x00076808) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000853b3) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000853b3) popup_cale_events_window_t

0x8cb8,	// (0x0007ed1e) call_type_pane

0x0c7a,	// (0x00076ce0) popup_call_status_window_g1

0x8cc4,	// (0x0007ed2a) popup_call_status_window_g2

0x8cd0,	// (0x0007ed36) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000853bc) popup_call_status_window_g

0x07d8,	// (0x0007683e) call_type_pane_g1

0x07e1,	// (0x00076847) call_type_pane_g2

0x0001,

0xf35d,	// (0x000853c3) call_type_pane_g

0xecd9,	// (0x00084d3f) bg_popup_sub_pane_cp02

0x07ea,	// (0x00076850) listscroll_popup_wml_pane

0x07f2,	// (0x00076858) list_wml_pane

0x07fc,	// (0x00076862) scroll_pane_cp013

0x0807,	// (0x0007686d) list_single_graphic_popup_wml_pane_ParamLimits

0x0807,	// (0x0007686d) list_single_graphic_popup_wml_pane

0xf065,	// (0x000850cb) list_single_graphic_popup_wml_pane_g1

0x081b,	// (0x00076881) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000853c8) list_single_graphic_popup_wml_pane_g

0x0823,	// (0x00076889) list_single_graphic_popup_wml_pane_t1

0x0831,	// (0x00076897) aid_call_pane

0xef43,	// (0x00084fa9) popup_clock_analogue_window_g1

0xef43,	// (0x00084fa9) popup_clock_analogue_window_g2

0x8cdc,	// (0x0007ed42) popup_clock_analogue_window_g3

0x8cdc,	// (0x0007ed42) popup_clock_analogue_window_g4

0xf065,	// (0x000850cb) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000853cd) popup_clock_analogue_window_g

0x8ce4,	// (0x0007ed4a) popup_clock_analogue_window_t1

0x8cf2,	// (0x0007ed58) clock_digital_number_pane_ParamLimits

0x8cf2,	// (0x0007ed58) clock_digital_number_pane

0x8cfe,	// (0x0007ed64) clock_digital_number_pane_cp02_ParamLimits

0x8cfe,	// (0x0007ed64) clock_digital_number_pane_cp02

0x8d0a,	// (0x0007ed70) clock_digital_number_pane_cp03_ParamLimits

0x8d0a,	// (0x0007ed70) clock_digital_number_pane_cp03

0x8d16,	// (0x0007ed7c) clock_digital_number_pane_cp04_ParamLimits

0x8d16,	// (0x0007ed7c) clock_digital_number_pane_cp04

0x8d26,	// (0x0007ed8c) clock_digital_separator_pane_ParamLimits

0x8d26,	// (0x0007ed8c) clock_digital_separator_pane

0x8d32,	// (0x0007ed98) popup_clock_digital_window_t1

0xf065,	// (0x000850cb) clock_digital_number_pane_g1

0xf065,	// (0x000850cb) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0008533b) clock_digital_number_pane_g

0xf065,	// (0x000850cb) clock_digital_separator_pane_g1

0xf065,	// (0x000850cb) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0008533b) clock_digital_separator_pane_g

0xecd9,	// (0x00084d3f) bg_popup_window_pane_cp04

0x0841,	// (0x000768a7) heading_pane_cp03

0x0849,	// (0x000768af) listscroll_popup_gms_pane

0x0851,	// (0x000768b7) grid_large_graphic_popup_pane

0x085b,	// (0x000768c1) listscroll_popup_gms_pane_g1

0x0863,	// (0x000768c9) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000853d8) listscroll_popup_gms_pane_g

0x02f8,	// (0x0007635e) scroll_pane_cp014

0x8d4f,	// (0x0007edb5) cell_large_graphic_popup_pane_ParamLimits

0x8d4f,	// (0x0007edb5) cell_large_graphic_popup_pane

0x8d67,	// (0x0007edcd) cell_large_graphic_popup_pane_g1_ParamLimits

0x8d67,	// (0x0007edcd) cell_large_graphic_popup_pane_g1

0x086b,	// (0x000768d1) cell_large_graphic_popup_pane_g2_ParamLimits

0x086b,	// (0x000768d1) cell_large_graphic_popup_pane_g2

0x0877,	// (0x000768dd) cell_large_graphic_popup_pane_g3_ParamLimits

0x0877,	// (0x000768dd) cell_large_graphic_popup_pane_g3

0x0884,	// (0x000768ea) cell_large_graphic_popup_pane_g4_ParamLimits

0x0884,	// (0x000768ea) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000853dd) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000853dd) cell_large_graphic_popup_pane_g

0x0894,	// (0x000768fa) grid_highlight_pane_cp010

0xf065,	// (0x000850cb) bg_popup_call_pane_g1

0x089e,	// (0x00076904) list_single_graphic_popup_conf_pane_ParamLimits

0x089e,	// (0x00076904) list_single_graphic_popup_conf_pane

0x08b1,	// (0x00076917) list_highlight_pane_cp01

0x08ba,	// (0x00076920) list_single_graphic_popup_conf_pane_g1

0x08c2,	// (0x00076928) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000853e6) list_single_graphic_popup_conf_pane_g

0x08ca,	// (0x00076930) list_single_graphic_popup_conf_pane_t1

0x08d8,	// (0x0007693e) linegrid_cams_pane_g1

0x8d73,	// (0x0007edd9) linegrid_cams_pane_g2

0x0135,	// (0x0007619b) linegrid_cams_pane_g3

0x08e1,	// (0x00076947) linegrid_cams_pane_g4

0x8d7c,	// (0x0007ede2) linegrid_cams_pane_g5

0x8d85,	// (0x0007edeb) linegrid_cams_pane_g6

0x013e,	// (0x000761a4) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000853eb) linegrid_cams_pane_g

0x08ea,	// (0x00076950) popup_clock_analogue_window

0x08ea,	// (0x00076950) popup_clock_digital_window

0xecd9,	// (0x00084d3f) popup_phob_thumbnail_window

0xf065,	// (0x000850cb) call_video_uplink_pane_g1

0x08f3,	// (0x00076959) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000853fa) call_video_uplink_pane_g

0x08fb,	// (0x00076961) video_uplink_pane

0x0903,	// (0x00076969) mce_image_pane_g1

0x8d8e,	// (0x0007edf4) mce_image_pane_g2

0x8d98,	// (0x0007edfe) mce_image_pane_g3

0x8da0,	// (0x0007ee06) mce_image_pane_g4

0x8da8,	// (0x0007ee0e) mce_image_pane_g5

0x0004,

0xf399,	// (0x000853ff) mce_image_pane_g

0x090d,	// (0x00076973) control_top_pane_stacon_cp01_ParamLimits

0x090d,	// (0x00076973) control_top_pane_stacon_cp01

0x0921,	// (0x00076987) uni_indicator_pane_stacon_cp01_ParamLimits

0x0921,	// (0x00076987) uni_indicator_pane_stacon_cp01

0x0932,	// (0x00076998) bg_popup_sub_pane_cp03

0x093c,	// (0x000769a2) chi_dic_find_pane

0x8db0,	// (0x0007ee16) listscroll_chi_dic_pane

0x0944,	// (0x000769aa) main_pane_chidic_g1

0x094c,	// (0x000769b2) chi_dic_find_pane_t1

0x095a,	// (0x000769c0) find_chidic_pane

0x0963,	// (0x000769c9) chi_dic_list_pane_ParamLimits

0x0963,	// (0x000769c9) chi_dic_list_pane

0x0974,	// (0x000769da) scroll_pane_cp020

0x097c,	// (0x000769e2) find_chidic_pane_t1

0xecd9,	// (0x00084d3f) input_focus_pane_cp06

0x8dc4,	// (0x0007ee2a) list_chi_dic_pane_ParamLimits

0x8dc4,	// (0x0007ee2a) list_chi_dic_pane

0x8dde,	// (0x0007ee44) list_chi_dic_pane_t1_ParamLimits

0x8dde,	// (0x0007ee44) list_chi_dic_pane_t1

0xecd9,	// (0x00084d3f) list_highlight_pane_cp020

0x098b,	// (0x000769f1) bg_cale_heading_pane_g1

0x8df1,	// (0x0007ee57) bg_cale_heading_pane_g2

0x8df9,	// (0x0007ee5f) bg_cale_heading_pane_g3

0x8e01,	// (0x0007ee67) bg_cale_heading_pane_g4

0x8e0b,	// (0x0007ee71) bg_cale_heading_pane_g5

0x8e15,	// (0x0007ee7b) bg_cale_heading_pane_g6

0x8e1d,	// (0x0007ee83) bg_cale_heading_pane_g7

0x8e25,	// (0x0007ee8b) bg_cale_heading_pane_g8

0x8e2f,	// (0x0007ee95) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0008540a) bg_cale_heading_pane_g

0x098b,	// (0x000769f1) bg_cale_side_pane_g1

0x8e39,	// (0x0007ee9f) bg_cale_side_pane_g2

0x8e43,	// (0x0007eea9) bg_cale_side_pane_g3

0x8e4d,	// (0x0007eeb3) bg_cale_side_pane_g4

0x8e57,	// (0x0007eebd) bg_cale_side_pane_g5

0x8e61,	// (0x0007eec7) bg_cale_side_pane_g6

0x8e6b,	// (0x0007eed1) bg_cale_side_pane_g7

0x8e75,	// (0x0007eedb) bg_cale_side_pane_g8

0x8e7d,	// (0x0007eee3) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0008541d) bg_cale_side_pane_g

0x8e85,	// (0x0007eeeb) popup_call_status_window_ParamLimits

0x8e85,	// (0x0007eeeb) popup_call_status_window

0x0993,	// (0x000769f9) stacon_top_pane

0x099b,	// (0x00076a01) status_pane_ParamLimits

0x099b,	// (0x00076a01) status_pane

0x09b0,	// (0x00076a16) status_small_pane

0x09b8,	// (0x00076a1e) control_pane

0xecd9,	// (0x00084d3f) stacon_bottom_pane

0x09c0,	// (0x00076a26) list_single_mce_smart_pane_t1_ParamLimits

0x09c0,	// (0x00076a26) list_single_mce_smart_pane_t1

0x09d3,	// (0x00076a39) list_single_mce_smart_pane_t2_ParamLimits

0x09d3,	// (0x00076a39) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x00085430) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x00085430) list_single_mce_smart_pane_t

0x8e91,	// (0x0007eef7) compass_pane

0x8e9d,	// (0x0007ef03) main_location2_pane_t1

0x8eb1,	// (0x0007ef17) main_location2_pane_t2

0x8ec5,	// (0x0007ef2b) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x00085435) main_location2_pane_t

0x09f2,	// (0x00076a58) compass_pane_g1_ParamLimits

0x09f2,	// (0x00076a58) compass_pane_g1

0x8f0f,	// (0x0007ef75) compass_pane_t1

0x8f1e,	// (0x0007ef84) compass_pane_t2

0x0005,

0xf3d8,	// (0x0008543e) compass_pane_t

0x8f69,	// (0x0007efcf) text_secondary_cp61

0x0a7c,	// (0x00076ae2) navi_pane_cams_g5

0x0af8,	// (0x00076b5e) navi_pane_im_t1

0x0b06,	// (0x00076b6c) navi_pane_mp_g1_ParamLimits

0x0b06,	// (0x00076b6c) navi_pane_mp_g1

0x0b1a,	// (0x00076b80) navi_pane_mp_g2_ParamLimits

0x0b1a,	// (0x00076b80) navi_pane_mp_g2

0x0b26,	// (0x00076b8c) navi_pane_mp_g3_ParamLimits

0x0b26,	// (0x00076b8c) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x00085452) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x00085452) navi_pane_mp_g

0x0b32,	// (0x00076b98) navi_pane_mp_t1

0x0b40,	// (0x00076ba6) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x00085459) navi_pane_mp_t

0x0bab,	// (0x00076c11) navi_pane_vt_g1

0x0b32,	// (0x00076b98) navi_pane_vt_t1

0x0bb3,	// (0x00076c19) navi_slider_pane

0x014f,	// (0x000761b5) zooming_pane

0x0bc3,	// (0x00076c29) navi_slider_pane_g1

0x8fa4,	// (0x0007f00a) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x00085460) navi_slider_pane_g

0x0be7,	// (0x00076c4d) aid_levels_zoom

0x0bef,	// (0x00076c55) zooming_pane_g1

0x0bf7,	// (0x00076c5d) zooming_pane_g2

0x0bf7,	// (0x00076c5d) zooming_pane_g3

0x0002,

0xf409,	// (0x0008546f) zooming_pane_g

0x0bff,	// (0x00076c65) level_10_zoom

0x0c08,	// (0x00076c6e) level_11_zoom

0x0c11,	// (0x00076c77) level_1_zoom

0x0c1a,	// (0x00076c80) level_2_zoom

0x0c23,	// (0x00076c89) level_3_zoom

0x0c2c,	// (0x00076c92) level_4_zoom

0x0c35,	// (0x00076c9b) level_5_zoom

0x0c3e,	// (0x00076ca4) level_6_zoom

0x0c47,	// (0x00076cad) level_7_zoom

0x0c50,	// (0x00076cb6) level_8_zoom

0x0c59,	// (0x00076cbf) level_9_zoom

0x0c6a,	// (0x00076cd0) popup_phob_thumbnail_window_g1

0x0c72,	// (0x00076cd8) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x00085476) popup_phob_thumbnail_window_g

0x1f68,	// (0x00077fce) level_1_location

0x1f70,	// (0x00077fd6) level_2_location

0x1f78,	// (0x00077fde) level_3_location

0x1f80,	// (0x00077fe6) level_4_location

0x014f,	// (0x000761b5) level_5_location

0x8fb6,	// (0x0007f01c) mce_icon_pane_g1

0x8fbe,	// (0x0007f024) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0008547b) mce_icon_pane_g

0x8fc6,	// (0x0007f02c) main_mup_pane_g1_ParamLimits

0x8fc6,	// (0x0007f02c) main_mup_pane_g1

0x8fde,	// (0x0007f044) main_mup_pane_g2_ParamLimits

0x8fde,	// (0x0007f044) main_mup_pane_g2

0x8ffa,	// (0x0007f060) main_mup_pane_g3_ParamLimits

0x8ffa,	// (0x0007f060) main_mup_pane_g3

0x9016,	// (0x0007f07c) main_mup_pane_g4_ParamLimits

0x9016,	// (0x0007f07c) main_mup_pane_g4

0x9032,	// (0x0007f098) main_mup_pane_g5_ParamLimits

0x9032,	// (0x0007f098) main_mup_pane_g5

0x9053,	// (0x0007f0b9) main_mup_pane_g6_ParamLimits

0x9053,	// (0x0007f0b9) main_mup_pane_g6

0x906f,	// (0x0007f0d5) main_mup_pane_g7_ParamLimits

0x906f,	// (0x0007f0d5) main_mup_pane_g7

0x908b,	// (0x0007f0f1) main_mup_pane_g8_ParamLimits

0x908b,	// (0x0007f0f1) main_mup_pane_g8

0x90ab,	// (0x0007f111) main_mup_pane_g9_ParamLimits

0x90ab,	// (0x0007f111) main_mup_pane_g9

0x90ca,	// (0x0007f130) main_mup_pane_g10_ParamLimits

0x90ca,	// (0x0007f130) main_mup_pane_g10

0x90e9,	// (0x0007f14f) main_mup_pane_g11_ParamLimits

0x90e9,	// (0x0007f14f) main_mup_pane_g11

0x9101,	// (0x0007f167) main_mup_pane_g12_ParamLimits

0x9101,	// (0x0007f167) main_mup_pane_g12

0x910f,	// (0x0007f175) main_mup_pane_g13_ParamLimits

0x910f,	// (0x0007f175) main_mup_pane_g13

0x000c,

0xf41a,	// (0x00085480) main_mup_pane_g_ParamLimits

0xf41a,	// (0x00085480) main_mup_pane_g

0x9125,	// (0x0007f18b) main_mup_pane_t1_ParamLimits

0x9125,	// (0x0007f18b) main_mup_pane_t1

0x9142,	// (0x0007f1a8) main_mup_pane_t2_ParamLimits

0x9142,	// (0x0007f1a8) main_mup_pane_t2

0x915c,	// (0x0007f1c2) main_mup_pane_t3_ParamLimits

0x915c,	// (0x0007f1c2) main_mup_pane_t3

0x9176,	// (0x0007f1dc) main_mup_pane_t4_ParamLimits

0x9176,	// (0x0007f1dc) main_mup_pane_t4

0x9188,	// (0x0007f1ee) main_mup_pane_t5_ParamLimits

0x9188,	// (0x0007f1ee) main_mup_pane_t5

0x919a,	// (0x0007f200) main_mup_pane_t6_ParamLimits

0x919a,	// (0x0007f200) main_mup_pane_t6

0x0005,

0xf435,	// (0x0008549b) main_mup_pane_t_ParamLimits

0xf435,	// (0x0008549b) main_mup_pane_t

0x91b0,	// (0x0007f216) mup_progress_pane_ParamLimits

0x91b0,	// (0x0007f216) mup_progress_pane

0x91bc,	// (0x0007f222) mup_visualizer_pane_ParamLimits

0x91bc,	// (0x0007f222) mup_visualizer_pane

0x91f6,	// (0x0007f25c) mup_volume_pane_ParamLimits

0x91f6,	// (0x0007f25c) mup_volume_pane

0x0c7a,	// (0x00076ce0) mup_visualizer_pane_g1_ParamLimits

0x0c7a,	// (0x00076ce0) mup_visualizer_pane_g1

0x0c7a,	// (0x00076ce0) mup_visualizer_pane_g2_ParamLimits

0x0c7a,	// (0x00076ce0) mup_visualizer_pane_g2

0x09f2,	// (0x00076a58) mup_visualizer_pane_g3_ParamLimits

0x09f2,	// (0x00076a58) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000854a8) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000854a8) mup_visualizer_pane_g

0xf065,	// (0x000850cb) mup_volume_pane_g1

0x0c90,	// (0x00076cf6) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000854af) mup_volume_pane_g

0xf065,	// (0x000850cb) mup_progress_pane_g1

0x0c99,	// (0x00076cff) mup_progress_pane_g2

0x0ca2,	// (0x00076d08) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000854b4) mup_progress_pane_g

0xecd9,	// (0x00084d3f) bg_popup_window_pane_cp05

0x0cab,	// (0x00076d11) heading_pane_cp02_ParamLimits

0x0cab,	// (0x00076d11) heading_pane_cp02

0x0cc5,	// (0x00076d2b) list_popup_blid_pane

0x0ccd,	// (0x00076d33) list_blid_sat_info_pane_ParamLimits

0x0ccd,	// (0x00076d33) list_blid_sat_info_pane

0x0ce0,	// (0x00076d46) list_blid_sat_info_pane_g1

0x0ce8,	// (0x00076d4e) list_blid_sat_info_pane_t1

0x9303,	// (0x0007f369) mup_equalizer_pane_ParamLimits

0x9303,	// (0x0007f369) mup_equalizer_pane

0x9324,	// (0x0007f38a) mup_equalizer_pane_cp1_ParamLimits

0x9324,	// (0x0007f38a) mup_equalizer_pane_cp1

0x9345,	// (0x0007f3ab) mup_equalizer_pane_cp2_ParamLimits

0x9345,	// (0x0007f3ab) mup_equalizer_pane_cp2

0x9366,	// (0x0007f3cc) mup_equalizer_pane_cp3_ParamLimits

0x9366,	// (0x0007f3cc) mup_equalizer_pane_cp3

0x9387,	// (0x0007f3ed) mup_equalizer_pane_cp4_ParamLimits

0x9387,	// (0x0007f3ed) mup_equalizer_pane_cp4

0x93a8,	// (0x0007f40e) mup_equalizer_pane_cp5

0x93be,	// (0x0007f424) mup_equalizer_pane_cp6

0x93d6,	// (0x0007f43c) mup_equalizer_pane_cp7

0x1e7a,	// (0x00077ee0) bg_popup_call_poc_act_pane_g9

0x1e82,	// (0x00077ee8) bg_popup_call_poc_act_pane_g10

0x1e8a,	// (0x00077ef0) bg_popup_call_poc_act_pane_g11

0x000a,

0xef4b,	// (0x00084fb1) mup_scale_pane

0xf065,	// (0x000850cb) mup_scale_pane_g1

0x0cf6,	// (0x00076d5c) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000854d0) mup_scale_pane_g

0x0d1a,	// (0x00076d80) msg_data_pane

0x0d22,	// (0x00076d88) scroll_pane_cp017

0x5889,	// (0x0007b8ef) bg_list_pane_cp04_ParamLimits

0x5889,	// (0x0007b8ef) bg_list_pane_cp04

0x0d2a,	// (0x00076d90) msg_data_pane_g1

0x9400,	// (0x0007f466) msg_data_pane_g2

0x940a,	// (0x0007f470) msg_data_pane_g3

0x9412,	// (0x0007f478) msg_data_pane_g4

0x941a,	// (0x0007f480) msg_data_pane_g5

0x9422,	// (0x0007f488) msg_data_pane_g6

0x942a,	// (0x0007f490) msg_data_pane_g7

0x0006,

0xf479,	// (0x000854df) msg_data_pane_g

0x58af,	// (0x0007b915) msg_text_pane_ParamLimits

0x58af,	// (0x0007b915) msg_text_pane

0x9432,	// (0x0007f498) qrid_highlight_pane_cp011_ParamLimits

0x9432,	// (0x0007f498) qrid_highlight_pane_cp011

0xecd9,	// (0x00084d3f) msg_body_pane

0xecd9,	// (0x00084d3f) msg_header_pane

0x0d3b,	// (0x00076da1) input_focus_pane_cp07

0x58f2,	// (0x0007b958) msg_header_pane_t1_ParamLimits

0x58f2,	// (0x0007b958) msg_header_pane_t1

0x5904,	// (0x0007b96a) msg_header_pane_t2_ParamLimits

0x5904,	// (0x0007b96a) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000854f3) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000854f3) msg_header_pane_t

0x0d50,	// (0x00076db6) msg_body_pane_g1

0x5916,	// (0x0007b97c) msg_body_pane_t1_ParamLimits

0x5916,	// (0x0007b97c) msg_body_pane_t1

0x5947,	// (0x0007b9ad) msg_body_pane_t2_ParamLimits

0x5947,	// (0x0007b9ad) msg_body_pane_t2

0x5959,	// (0x0007b9bf) msg_body_pane_t3_ParamLimits

0x5959,	// (0x0007b9bf) msg_body_pane_t3

0x0002,

0xf492,	// (0x000854f8) msg_body_pane_t_ParamLimits

0xf492,	// (0x000854f8) msg_body_pane_t

0x949e,	// (0x0007f504) main_viewer_pane_g1_ParamLimits

0x949e,	// (0x0007f504) main_viewer_pane_g1

0x94aa,	// (0x0007f510) main_viewer_pane_g2_ParamLimits

0x94aa,	// (0x0007f510) main_viewer_pane_g2

0x94b6,	// (0x0007f51c) main_viewer_pane_g3_ParamLimits

0x94b6,	// (0x0007f51c) main_viewer_pane_g3

0x94c7,	// (0x0007f52d) main_viewer_pane_g4_ParamLimits

0x94c7,	// (0x0007f52d) main_viewer_pane_g4

0x94d8,	// (0x0007f53e) main_viewer_pane_g5_ParamLimits

0x94d8,	// (0x0007f53e) main_viewer_pane_g5

0x94d8,	// (0x0007f53e) main_viewer_pane_g7_ParamLimits

0x94d8,	// (0x0007f53e) main_viewer_pane_g7

0x94ea,	// (0x0007f550) main_viewer_pane_g8_ParamLimits

0x94ea,	// (0x0007f550) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x00085508) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x00085508) main_viewer_pane_g

0x0d58,	// (0x00076dbe) viewer_content_pane_ParamLimits

0x0d58,	// (0x00076dbe) viewer_content_pane

0x9522,	// (0x0007f588) main_postcard_pane_g1_ParamLimits

0x9522,	// (0x0007f588) main_postcard_pane_g1

0x9530,	// (0x0007f596) main_postcard_pane_g2_ParamLimits

0x9530,	// (0x0007f596) main_postcard_pane_g2

0x953e,	// (0x0007f5a4) main_postcard_pane_g3_ParamLimits

0x953e,	// (0x0007f5a4) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x00085519) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x00085519) main_postcard_pane_g

0x954e,	// (0x0007f5b4) main_postcard_pane_g4

0x2055,	// (0x000780bb) smil_status_volume_pane_g2

0x957a,	// (0x0007f5e0) postcard_pane_ParamLimits

0x957a,	// (0x0007f5e0) postcard_pane

0x0c7a,	// (0x00076ce0) postcard_pane_g1_ParamLimits

0x0c7a,	// (0x00076ce0) postcard_pane_g1

0x95ac,	// (0x0007f612) postcard_pane_g2_ParamLimits

0x95ac,	// (0x0007f612) postcard_pane_g2

0x95b8,	// (0x0007f61e) postcard_pane_g3_ParamLimits

0x95b8,	// (0x0007f61e) postcard_pane_g3

0x0d74,	// (0x00076dda) postcard_pane_g4_ParamLimits

0x0d74,	// (0x00076dda) postcard_pane_g4

0x95c4,	// (0x0007f62a) postcard_pane_g5_ParamLimits

0x95c4,	// (0x0007f62a) postcard_pane_g5

0x95d0,	// (0x0007f636) postcard_pane_g6_ParamLimits

0x95d0,	// (0x0007f636) postcard_pane_g6

0x0d66,	// (0x00076dcc) postcard_pane_g7_ParamLimits

0x0d66,	// (0x00076dcc) postcard_pane_g7

0x0006,

0xf4c0,	// (0x00085526) postcard_pane_g_ParamLimits

0xf4c0,	// (0x00085526) postcard_pane_g

0x95dc,	// (0x0007f642) main_mp2_pane_g1_ParamLimits

0x95dc,	// (0x0007f642) main_mp2_pane_g1

0x95e8,	// (0x0007f64e) main_mp2_pane_g2_ParamLimits

0x95e8,	// (0x0007f64e) main_mp2_pane_g2

0x95f4,	// (0x0007f65a) main_mp2_pane_g3_ParamLimits

0x95f4,	// (0x0007f65a) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x00085535) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x00085535) main_mp2_pane_g

0x9600,	// (0x0007f666) main_mp2_pane_t1_ParamLimits

0x9600,	// (0x0007f666) main_mp2_pane_t1

0x9617,	// (0x0007f67d) main_mp2_pane_t2_ParamLimits

0x9617,	// (0x0007f67d) main_mp2_pane_t2

0x962b,	// (0x0007f691) main_mp2_pane_t3_ParamLimits

0x962b,	// (0x0007f691) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0008553c) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0008553c) main_mp2_pane_t

0x0d82,	// (0x00076de8) pec_content_pane_ParamLimits

0x0d82,	// (0x00076de8) pec_content_pane

0x02f8,	// (0x0007635e) scroll_pane_cp015

0x0d94,	// (0x00076dfa) pec_attribute_pane_ParamLimits

0x0d94,	// (0x00076dfa) pec_attribute_pane

0x963d,	// (0x0007f6a3) pec_content_pane_g1_ParamLimits

0x963d,	// (0x0007f6a3) pec_content_pane_g1

0x0da4,	// (0x00076e0a) pec_content_pane_t1_ParamLimits

0x0da4,	// (0x00076e0a) pec_content_pane_t1

0x0db6,	// (0x00076e1c) pec_content_pane_t2_ParamLimits

0x0db6,	// (0x00076e1c) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x00085543) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x00085543) pec_content_pane_t

0x9649,	// (0x0007f6af) list_single_graphic_pane_cp01_ParamLimits

0x9649,	// (0x0007f6af) list_single_graphic_pane_cp01

0xef4b,	// (0x00084fb1) bg_popup_sub_pane_cp04

0x0dc8,	// (0x00076e2e) popup_mup_playback_window_g1

0x0dd4,	// (0x00076e3a) popup_mup_playback_window_t1

0x0de9,	// (0x00076e4f) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x00085548) popup_mup_playback_window_t

0x0e20,	// (0x00076e86) main_image_pane_g1_ParamLimits

0x0e20,	// (0x00076e86) main_image_pane_g1

0x0e63,	// (0x00076ec9) scroll_pane_cp018_ParamLimits

0x0e63,	// (0x00076ec9) scroll_pane_cp018

0x0e7b,	// (0x00076ee1) scroll_pane_cp016_ParamLimits

0x0e7b,	// (0x00076ee1) scroll_pane_cp016

0x96e2,	// (0x0007f748) smil2_image_pane_ParamLimits

0x96e2,	// (0x0007f748) smil2_image_pane

0x9712,	// (0x0007f778) smil2_root_pane_ParamLimits

0x9712,	// (0x0007f778) smil2_root_pane

0x973e,	// (0x0007f7a4) smil2_text_pane_ParamLimits

0x973e,	// (0x0007f7a4) smil2_text_pane

0xecd9,	// (0x00084d3f) bg_list_pane_cp06

0x0eb7,	// (0x00076f1d) grid_radio_pane

0xecd9,	// (0x00084d3f) bg_popup_window_pane_cp06

0x0ebf,	// (0x00076f25) main_fmradio_pane_t1

0x0841,	// (0x000768a7) heading_pane_cp04

0x0ecd,	// (0x00076f33) main_fmradio_pane_t2

0x1e92,	// (0x00077ef8) popup_cale_lunar_info_window_g1

0x0edb,	// (0x00076f41) main_fmradio_pane_t3

0x1e9a,	// (0x00077f00) popup_cale_lunar_info_window_g2

0x0ee9,	// (0x00076f4f) main_fmradio_pane_t4

0x0001,

0x0ef7,	// (0x00076f5d) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x00085623) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0008555d) main_fmradio_pane_t

0x0f05,	// (0x00076f6b) wait_bar_pane_cp03

0x0f0d,	// (0x00076f73) cell_fmradio_pane_ParamLimits

0x0f0d,	// (0x00076f73) cell_fmradio_pane

0x0d66,	// (0x00076dcc) cell_fmradio_pane_g1_ParamLimits

0x0d66,	// (0x00076dcc) cell_fmradio_pane_g1

0xecd9,	// (0x00084d3f) grid_highlight_pane_cp011

0x0f20,	// (0x00076f86) poc_content_pane_ParamLimits

0x0f20,	// (0x00076f86) poc_content_pane

0x0f32,	// (0x00076f98) scroll_pane_cp019

0x977e,	// (0x0007f7e4) popup_call_poc_act_window_ParamLimits

0x977e,	// (0x0007f7e4) popup_call_poc_act_window

0x978b,	// (0x0007f7f1) popup_call_poc_inact_window_ParamLimits

0x978b,	// (0x0007f7f1) popup_call_poc_inact_window

0xf594,	// (0x000855fa) bg_popup_call_poc_act_pane_g

0x1e0a,	// (0x00077e70) bg_popup_call_poc_inact_pane_g1

0x1e12,	// (0x00077e78) bg_popup_call_poc_inact_pane_g2

0x0f3a,	// (0x00076fa0) popup_call_poc_act_window_g2

0x1e1a,	// (0x00077e80) bg_popup_call_poc_inact_pane_g3

0x1e22,	// (0x00077e88) bg_popup_call_poc_inact_pane_g4

0x1e2a,	// (0x00077e90) bg_popup_call_poc_inact_pane_g5

0x0f42,	// (0x00076fa8) popup_call_poc_act_window_t1_ParamLimits

0x0f42,	// (0x00076fa8) popup_call_poc_act_window_t1

0x0f6a,	// (0x00076fd0) popup_call_poc_act_window_t2_ParamLimits

0x0f6a,	// (0x00076fd0) popup_call_poc_act_window_t2

0x0f92,	// (0x00076ff8) popup_call_poc_act_window_t3_ParamLimits

0x0f92,	// (0x00076ff8) popup_call_poc_act_window_t3

0x0fba,	// (0x00077020) popup_call_poc_act_window_t4_ParamLimits

0x0fba,	// (0x00077020) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x00085568) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x00085568) popup_call_poc_act_window_t

0x1e32,	// (0x00077e98) bg_popup_call_poc_inact_pane_g6

0x1e3a,	// (0x00077ea0) bg_popup_call_poc_inact_pane_g7

0x1e42,	// (0x00077ea8) bg_popup_call_poc_inact_pane_g8

0x0fcc,	// (0x00077032) popup_call_poc_inact_window_g2

0x1e4a,	// (0x00077eb0) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x000855e7) bg_popup_call_poc_inact_pane_g

0x0fd4,	// (0x0007703a) popup_call_poc_inact_window_t1_ParamLimits

0x0fd4,	// (0x0007703a) popup_call_poc_inact_window_t1

0x0fe9,	// (0x0007704f) popup_call_poc_inact_window_t2_ParamLimits

0x0fe9,	// (0x0007704f) popup_call_poc_inact_window_t2

0x0ffe,	// (0x00077064) popup_call_poc_inact_window_t3_ParamLimits

0x0ffe,	// (0x00077064) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x00085571) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x00085571) popup_call_poc_inact_window_t

0x1fdb,	// (0x00078041) context_pane_ParamLimits

0x9dbf,	// (0x0007fe25) signal_pane_ParamLimits

0x014f,	// (0x000761b5) main_call2_pane

0x9d32,	// (0x0007fd98) popup_phob_thumbnail2_window_ParamLimits

0x9d32,	// (0x0007fd98) popup_phob_thumbnail2_window

0x944c,	// (0x0007f4b2) aid_hotspot_pointer_arrow_pane

0x9454,	// (0x0007f4ba) aid_hotspot_pointer_hand_pane

0x9aad,	// (0x0007fb13) phob_pre_status_pane_g5

0x7777,	// (0x0007d7dd) cams_zoom_pane_ParamLimits

0x7783,	// (0x0007d7e9) image_vga_pane_ParamLimits

0x7792,	// (0x0007d7f8) main_camera_pane_g1_ParamLimits

0x77a0,	// (0x0007d806) main_camera_pane_g2_ParamLimits

0x77ac,	// (0x0007d812) main_camera_pane_g3_ParamLimits

0x77b8,	// (0x0007d81e) main_camera_pane_g4_ParamLimits

0x77c4,	// (0x0007d82a) main_camera_pane_g5_ParamLimits

0x77d0,	// (0x0007d836) main_camera_pane_g6_ParamLimits

0x77dc,	// (0x0007d842) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x00085270) main_camera_pane_g_ParamLimits

0x77e8,	// (0x0007d84e) main_camera_pane_t1_ParamLimits

0x77fa,	// (0x0007d860) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x00085281) main_camera_pane_t_ParamLimits

0xef4b,	// (0x00084fb1) bg_popup_preview_window_pane_cp01_ParamLimits

0xef4b,	// (0x00084fb1) bg_popup_preview_window_pane_cp01

0x1013,	// (0x00077079) popup_phob_thumbnail2_window_g1_ParamLimits

0x1013,	// (0x00077079) popup_phob_thumbnail2_window_g1

0xecd9,	// (0x00084d3f) call2_cli_visual_pane

0x97a7,	// (0x0007f80d) popup_call2_audio_conf_window_ParamLimits

0x97a7,	// (0x0007f80d) popup_call2_audio_conf_window

0x97bc,	// (0x0007f822) popup_call2_audio_first_window_ParamLimits

0x97bc,	// (0x0007f822) popup_call2_audio_first_window

0x985a,	// (0x0007f8c0) popup_call2_audio_in_window_ParamLimits

0x985a,	// (0x0007f8c0) popup_call2_audio_in_window

0x989c,	// (0x0007f902) popup_call2_audio_out_window_ParamLimits

0x989c,	// (0x0007f902) popup_call2_audio_out_window

0x98fe,	// (0x0007f964) popup_call2_audio_second_window_ParamLimits

0x98fe,	// (0x0007f964) popup_call2_audio_second_window

0x995c,	// (0x0007f9c2) popup_call2_audio_wait_window_ParamLimits

0x995c,	// (0x0007f9c2) popup_call2_audio_wait_window

0xecd9,	// (0x00084d3f) bg_popup_call2_act_pane_cp03

0xef2d,	// (0x00084f93) list_conf_pane_cp

0x101f,	// (0x00077085) popup_call2_audio_conf_window_t1

0x089e,	// (0x00076904) list_single_graphic_popup_conf2_pane_ParamLimits

0x089e,	// (0x00076904) list_single_graphic_popup_conf2_pane

0x08b1,	// (0x00076917) list_highlight_pane_cp04

0x102d,	// (0x00077093) list_single_graphic_popup_conf2_pane_g1

0x08c2,	// (0x00076928) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x00085578) list_single_graphic_popup_conf2_pane_g

0x1037,	// (0x0007709d) list_single_graphic_popup_conf2_pane_t1

0x1045,	// (0x000770ab) bg_popup_call2_act_pane_cp01_ParamLimits

0x1045,	// (0x000770ab) bg_popup_call2_act_pane_cp01

0x10cf,	// (0x00077135) call_type_pane_cp05_ParamLimits

0x10cf,	// (0x00077135) call_type_pane_cp05

0x1123,	// (0x00077189) popup_call2_audio_second_window_g1_ParamLimits

0x1123,	// (0x00077189) popup_call2_audio_second_window_g1

0x1177,	// (0x000771dd) popup_call2_audio_second_window_g2_ParamLimits

0x1177,	// (0x000771dd) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0008557d) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0008557d) popup_call2_audio_second_window_g

0x11dc,	// (0x00077242) popup_call2_audio_second_window_t1_ParamLimits

0x11dc,	// (0x00077242) popup_call2_audio_second_window_t1

0x1297,	// (0x000772fd) popup_call2_audio_second_window_t2_ParamLimits

0x1297,	// (0x000772fd) popup_call2_audio_second_window_t2

0x12ea,	// (0x00077350) popup_call2_audio_second_window_t3_ParamLimits

0x12ea,	// (0x00077350) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x00085584) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x00085584) popup_call2_audio_second_window_t

0xecd9,	// (0x00084d3f) bg_popup_call2_in_pane_cp02

0xece3,	// (0x00084d49) call_type_pane_cp04

0xeceb,	// (0x00084d51) popup_call2_audio_wait_window_g1

0xecf3,	// (0x00084d59) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0008515f) popup_call2_audio_wait_window_g

0xecfb,	// (0x00084d61) popup_call2_audio_wait_window_t3

0x13dd,	// (0x00077443) bg_popup_call2_act_pane_ParamLimits

0x13dd,	// (0x00077443) bg_popup_call2_act_pane

0x149d,	// (0x00077503) call_type_pane_cp03_ParamLimits

0x149d,	// (0x00077503) call_type_pane_cp03

0x1501,	// (0x00077567) popup_call2_audio_first_window_g1_ParamLimits

0x1501,	// (0x00077567) popup_call2_audio_first_window_g1

0x1571,	// (0x000775d7) popup_call2_audio_first_window_g2_ParamLimits

0x1571,	// (0x000775d7) popup_call2_audio_first_window_g2

0x0c7a,	// (0x00076ce0) popup_call2_audio_first_window_g3_ParamLimits

0x0c7a,	// (0x00076ce0) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0008558d) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0008558d) popup_call2_audio_first_window_g

0x164f,	// (0x000776b5) popup_call2_audio_first_window_t1_ParamLimits

0x164f,	// (0x000776b5) popup_call2_audio_first_window_t1

0x1752,	// (0x000777b8) popup_call2_audio_first_window_t4_ParamLimits

0x1752,	// (0x000777b8) popup_call2_audio_first_window_t4

0x1835,	// (0x0007789b) popup_call2_audio_first_window_t5_ParamLimits

0x1835,	// (0x0007789b) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x00085598) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x00085598) popup_call2_audio_first_window_t

0xef43,	// (0x00084fa9) bg_popup_call2_act_pane_g1

0x1ea2,	// (0x00077f08) popup_cale_lunar_info_window_t1

0x1eb0,	// (0x00077f16) popup_cale_lunar_info_window_t2

0x1eca,	// (0x00077f30) popup_cale_lunar_info_window_t3

0xecd9,	// (0x00084d3f) bg_popup_call2_bubble_pane

0x1936,	// (0x0007799c) bg_popup_call2_in_pane_cp01_ParamLimits

0x1936,	// (0x0007799c) bg_popup_call2_in_pane_cp01

0xe9b5,	// (0x00084a1b) call_type_pane_cp02

0x197e,	// (0x000779e4) popup_call2_audio_out_window_g1_ParamLimits

0x197e,	// (0x000779e4) popup_call2_audio_out_window_g1

0x19aa,	// (0x00077a10) popup_call2_audio_out_window_g2_ParamLimits

0x19aa,	// (0x00077a10) popup_call2_audio_out_window_g2

0x19d2,	// (0x00077a38) popup_call2_audio_out_window_g3_ParamLimits

0x19d2,	// (0x00077a38) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x000855a1) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x000855a1) popup_call2_audio_out_window_g

0x1a0d,	// (0x00077a73) popup_call2_audio_out_window_t1_ParamLimits

0x1a0d,	// (0x00077a73) popup_call2_audio_out_window_t1

0x1a6c,	// (0x00077ad2) popup_call2_audio_out_window_t2_ParamLimits

0x1a6c,	// (0x00077ad2) popup_call2_audio_out_window_t2

0x1ac0,	// (0x00077b26) popup_call2_audio_out_window_t3_ParamLimits

0x1ac0,	// (0x00077b26) popup_call2_audio_out_window_t3

0x1ad6,	// (0x00077b3c) popup_call2_audio_out_window_t4_ParamLimits

0x1ad6,	// (0x00077b3c) popup_call2_audio_out_window_t4

0x1aec,	// (0x00077b52) popup_call2_audio_out_window_t5_ParamLimits

0x1aec,	// (0x00077b52) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x000855aa) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x000855aa) popup_call2_audio_out_window_t

0x1b50,	// (0x00077bb6) bg_popup_call2_in_pane_ParamLimits

0x1b50,	// (0x00077bb6) bg_popup_call2_in_pane

0x1bac,	// (0x00077c12) popup_call2_audio_in_window_g1_ParamLimits

0x1bac,	// (0x00077c12) popup_call2_audio_in_window_g1

0x1be4,	// (0x00077c4a) popup_call2_audio_in_window_g2_ParamLimits

0x1be4,	// (0x00077c4a) popup_call2_audio_in_window_g2

0x1c1c,	// (0x00077c82) popup_call2_audio_in_window_g3_ParamLimits

0x1c1c,	// (0x00077c82) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000855b7) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000855b7) popup_call2_audio_in_window_g

0x1c74,	// (0x00077cda) popup_call2_audio_in_window_t1_ParamLimits

0x1c74,	// (0x00077cda) popup_call2_audio_in_window_t1

0x1cf4,	// (0x00077d5a) popup_call2_audio_in_window_t2_ParamLimits

0x1cf4,	// (0x00077d5a) popup_call2_audio_in_window_t2

0x1d74,	// (0x00077dda) popup_call2_audio_in_window_t3_ParamLimits

0x1d74,	// (0x00077dda) popup_call2_audio_in_window_t3

0x1d8e,	// (0x00077df4) popup_call2_audio_in_window_t4_ParamLimits

0x1d8e,	// (0x00077df4) popup_call2_audio_in_window_t4

0x1da0,	// (0x00077e06) popup_call2_audio_in_window_t5_ParamLimits

0x1da0,	// (0x00077e06) popup_call2_audio_in_window_t5

0x1db5,	// (0x00077e1b) popup_call2_audio_in_window_t6_ParamLimits

0x1db5,	// (0x00077e1b) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x000855c0) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x000855c0) popup_call2_audio_in_window_t

0xef43,	// (0x00084fa9) bg_popup_call2_in_pane_g1

0x1ed8,	// (0x00077f3e) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x00085628) popup_cale_lunar_info_window_t

0xef4b,	// (0x00084fb1) bg_popup_call2_rect_pane_ParamLimits

0xef4b,	// (0x00084fb1) bg_popup_call2_rect_pane

0xecd9,	// (0x00084d3f) call2_cli_visual_graphic_pane

0xecd9,	// (0x00084d3f) call2_cli_visual_text_pane

0x9e65,	// (0x0007fecb) smil_status_volume_pane_g3

0x0002,

0xf065,	// (0x000850cb) call2_cli_visual_graphic_pane_g1

0xf065,	// (0x000850cb) call2_cli_visual_graphic_pane_g2

0xf065,	// (0x000850cb) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x000855cd) call2_cli_visual_graphic_pane_g

0x1dca,	// (0x00077e30) bg_popup_call2_rect_pane_g1

0x006b,	// (0x000760d1) bg_popup_call2_rect_pane_g2

0x1dd2,	// (0x00077e38) bg_popup_call2_rect_pane_g3

0x1dda,	// (0x00077e40) bg_popup_call2_rect_pane_g4

0x1de2,	// (0x00077e48) bg_popup_call2_rect_pane_g5

0x1dea,	// (0x00077e50) bg_popup_call2_rect_pane_g6

0x1df2,	// (0x00077e58) bg_popup_call2_rect_pane_g7

0x1dfa,	// (0x00077e60) bg_popup_call2_rect_pane_g8

0x1e02,	// (0x00077e68) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000855d4) bg_popup_call2_rect_pane_g

0x1e0a,	// (0x00077e70) bg_popup_call2_bubble_pane_g1

0x1e12,	// (0x00077e78) bg_popup_call2_bubble_pane_g2

0x1e1a,	// (0x00077e80) bg_popup_call2_bubble_pane_g3

0x1e22,	// (0x00077e88) bg_popup_call2_bubble_pane_g4

0x1e2a,	// (0x00077e90) bg_popup_call2_bubble_pane_g5

0x1e32,	// (0x00077e98) bg_popup_call2_bubble_pane_g6

0x1e3a,	// (0x00077ea0) bg_popup_call2_bubble_pane_g7

0x1e42,	// (0x00077ea8) bg_popup_call2_bubble_pane_g8

0x1e4a,	// (0x00077eb0) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000855e7) bg_popup_call2_bubble_pane_g

0x71a8,	// (0x0007d20e) aid_cale_week_size_cell_pane

0x780c,	// (0x0007d872) aid_cams_cif_uncrop_pane_ParamLimits

0x780c,	// (0x0007d872) aid_cams_cif_uncrop_pane

0x7967,	// (0x0007d9cd) aid_cams_size_cell_ParamLimits

0x7967,	// (0x0007d9cd) aid_cams_size_cell

0x7973,	// (0x0007d9d9) grid_cams_pane_ParamLimits

0x7981,	// (0x0007d9e7) linegrid_cams_pane_ParamLimits

0x7a70,	// (0x0007dad6) call_video_pane_t1

0x7a91,	// (0x0007daf7) call_video_pane_t2

0x0001,

0xf26e,	// (0x000852d4) call_video_pane_t

0x7fda,	// (0x0007e040) aid_cale_month_size_cell_pane_ParamLimits

0x7fda,	// (0x0007e040) aid_cale_month_size_cell_pane

0xf60b,	// (0x00085671) smil_status_volume_pane_g

0x9e72,	// (0x0007fed8) volume_smil_pane_ParamLimits

0x6917,	// (0x0007c97d) aid_popup2_width_pane

0x70aa,	// (0x0007d110) cell_qdial_pane_g4_ParamLimits

0x70aa,	// (0x0007d110) cell_qdial_pane_g4

0x8eeb,	// (0x0007ef51) aid_blid_cardinal_pane_ParamLimits

0x8efb,	// (0x0007ef61) aid_blid_destination_pane_ParamLimits

0x8efb,	// (0x0007ef61) aid_blid_destination_pane

0xef4b,	// (0x00084fb1) bg_popup_call_poc_act_pane_ParamLimits

0xef4b,	// (0x00084fb1) bg_popup_call_poc_act_pane

0xef4b,	// (0x00084fb1) bg_popup_call_poc_inact_pane_ParamLimits

0xef4b,	// (0x00084fb1) bg_popup_call_poc_inact_pane

0x1e52,	// (0x00077eb8) bg_popup_call_poc_act_pane_g1

0x1e5a,	// (0x00077ec0) bg_popup_call_poc_act_pane_g2

0x1e62,	// (0x00077ec8) bg_popup_call_poc_act_pane_g3

0x1e22,	// (0x00077e88) bg_popup_call_poc_act_pane_g4

0x1e2a,	// (0x00077e90) bg_popup_call_poc_act_pane_g5

0x1e6a,	// (0x00077ed0) bg_popup_call_poc_act_pane_g6

0x1e3a,	// (0x00077ea0) bg_popup_call_poc_act_pane_g7

0x1e72,	// (0x00077ed8) bg_popup_call_poc_act_pane_g8

0xecd9,	// (0x00084d3f) main_usb_pane

0x9c61,	// (0x0007fcc7) popup_cale_lunar_info_window

0x7dbc,	// (0x0007de22) im_reading_pane_t1_ParamLimits

0x0250,	// (0x000762b6) list_im_pane_ParamLimits

0x0261,	// (0x000762c7) scroll_pane_cp07_ParamLimits

0xecd9,	// (0x00084d3f) grid_highlight_pane_cp012

0xef4b,	// (0x00084fb1) mup_scale_pane_ParamLimits

0x0c7a,	// (0x00076ce0) main_usb_pane_g1_ParamLimits

0x0c7a,	// (0x00076ce0) main_usb_pane_g1

0x99d0,	// (0x0007fa36) main_usb_pane_g2_ParamLimits

0x99d0,	// (0x0007fa36) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x00085611) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x00085611) main_usb_pane_g

0x99dc,	// (0x0007fa42) main_usb_pane_t1_ParamLimits

0x99dc,	// (0x0007fa42) main_usb_pane_t1

0x99ee,	// (0x0007fa54) main_usb_pane_t2_ParamLimits

0x99ee,	// (0x0007fa54) main_usb_pane_t2

0x9a00,	// (0x0007fa66) main_usb_pane_t3_ParamLimits

0x9a00,	// (0x0007fa66) main_usb_pane_t3

0x9a12,	// (0x0007fa78) main_usb_pane_t4_ParamLimits

0x9a12,	// (0x0007fa78) main_usb_pane_t4

0x9a24,	// (0x0007fa8a) main_usb_pane_t5_ParamLimits

0x9a24,	// (0x0007fa8a) main_usb_pane_t5

0x9a36,	// (0x0007fa9c) main_usb_pane_t6_ParamLimits

0x9a36,	// (0x0007fa9c) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x00085616) main_usb_pane_t_ParamLimits

0x8e91,	// (0x0007eef7) aid_text_placing

0x8e9d,	// (0x0007ef03) main_location2_pane_t1_ParamLimits

0x8eb1,	// (0x0007ef17) main_location2_pane_t2_ParamLimits

0x8ec5,	// (0x0007ef2b) main_location2_pane_t3_ParamLimits

0x8ed9,	// (0x0007ef3f) main_location2_pane_t4_ParamLimits

0x8ed9,	// (0x0007ef3f) main_location2_pane_t4

0xf3cf,	// (0x00085435) main_location2_pane_t_ParamLimits

0xef87,	// (0x00084fed) find_pinb_pane_g2_ParamLimits

0xef87,	// (0x00084fed) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x00085185) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x00085185) find_pinb_pane_g

0xef93,	// (0x00084ff9) find_pinb_pane_t1_ParamLimits

0xefa5,	// (0x0008500b) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0008518a) find_pinb_pane_t_ParamLimits

0xecd9,	// (0x00084d3f) main_call3_pane

0x852e,	// (0x0007e594) cale_month_day_heading_pane_t1_ParamLimits

0x85b4,	// (0x0007e61a) cale_month_day_heading_pane_t2_ParamLimits

0x8645,	// (0x0007e6ab) cale_month_day_heading_pane_t3_ParamLimits

0x86d6,	// (0x0007e73c) cale_month_day_heading_pane_t4_ParamLimits

0x8767,	// (0x0007e7cd) cale_month_day_heading_pane_t5_ParamLimits

0x87f8,	// (0x0007e85e) cale_month_day_heading_pane_t6_ParamLimits

0x8889,	// (0x0007e8ef) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0008530c) cale_month_day_heading_pane_t_ParamLimits

0x04ab,	// (0x00076511) smil_status_volume_pane

0x9594,	// (0x0007f5fa) postcard_address_pane_ParamLimits

0x9594,	// (0x0007f5fa) postcard_address_pane

0x95a0,	// (0x0007f606) postcard_message_pane_ParamLimits

0x95a0,	// (0x0007f606) postcard_message_pane

0x999b,	// (0x0007fa01) call2_cli_visual_pane_t1_ParamLimits

0x999b,	// (0x0007fa01) call2_cli_visual_pane_t1

0x9fc9,	// (0x0008002f) postcard_message_pane_t1_ParamLimits

0x9fc9,	// (0x0008002f) postcard_message_pane_t1

0x9fb2,	// (0x00080018) postcard_address_pane_t1_ParamLimits

0x9fb2,	// (0x00080018) postcard_address_pane_t1

0x9fa3,	// (0x00080009) popup_call3_audio_in_window_ParamLimits

0x9fa3,	// (0x00080009) popup_call3_audio_in_window

0x9e87,	// (0x0007feed) bg_popup_call3_in_pane_ParamLimits

0x9e87,	// (0x0007feed) bg_popup_call3_in_pane

0x9ee9,	// (0x0007ff4f) popup_call3_audio_in_window_g1_ParamLimits

0x9ee9,	// (0x0007ff4f) popup_call3_audio_in_window_g1

0x9f01,	// (0x0007ff67) popup_call3_audio_in_window_g2_ParamLimits

0x9f01,	// (0x0007ff67) popup_call3_audio_in_window_g2

0x9f19,	// (0x0007ff7f) popup_call3_audio_in_window_g3_ParamLimits

0x9f19,	// (0x0007ff7f) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x00085678) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x00085678) popup_call3_audio_in_window_g

0x9f41,	// (0x0007ffa7) popup_call3_audio_in_window_t1_ParamLimits

0x9f41,	// (0x0007ffa7) popup_call3_audio_in_window_t1

0x9f69,	// (0x0007ffcf) popup_call3_audio_in_window_t2_ParamLimits

0x9f69,	// (0x0007ffcf) popup_call3_audio_in_window_t2

0x9f91,	// (0x0007fff7) popup_call3_audio_in_window_t3_ParamLimits

0x9f91,	// (0x0007fff7) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x00085681) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x00085681) popup_call3_audio_in_window_t

0x014f,	// (0x000761b5) bg_popup_call3_rect_pane

0x1dca,	// (0x00077e30) bg_popup_call3_rect_pane_g1

0x006b,	// (0x000760d1) bg_popup_call3_rect_pane_g2

0x1dd2,	// (0x00077e38) bg_popup_call3_rect_pane_g3

0x1dda,	// (0x00077e40) bg_popup_call3_rect_pane_g4

0x1de2,	// (0x00077e48) bg_popup_call3_rect_pane_g5

0x1dea,	// (0x00077e50) bg_popup_call3_rect_pane_g6

0x1df2,	// (0x00077e58) bg_popup_call3_rect_pane_g7

0x9211,	// (0x0007f277) mup_visualizer_osc_pane

0x0c88,	// (0x00076cee) mup_visualizer_spec_pane

0x9ea7,	// (0x0007ff0d) call3_video_qcif_pane_ParamLimits

0x9ea7,	// (0x0007ff0d) call3_video_qcif_pane

0x9eb9,	// (0x0007ff1f) call3_video_qcif_uncrop_pane_ParamLimits

0x9eb9,	// (0x0007ff1f) call3_video_qcif_uncrop_pane

0x9ec7,	// (0x0007ff2d) call3_video_subqcif_pane_ParamLimits

0x9ec7,	// (0x0007ff2d) call3_video_subqcif_pane

0x9ed9,	// (0x0007ff3f) call3_video_subqcif_uncrop_pane_ParamLimits

0x9ed9,	// (0x0007ff3f) call3_video_subqcif_uncrop_pane

0x9f31,	// (0x0007ff97) popup_call3_audio_in_window_g4_ParamLimits

0x9f31,	// (0x0007ff97) popup_call3_audio_in_window_g4

0x9e54,	// (0x0007feba) mup_spec_half_pane

0x9e5d,	// (0x0007fec3) mup_spec_half_pane_cp

0x203b,	// (0x000780a1) mup_osc_middle_pane

0x2044,	// (0x000780aa) mup_visualizer_osc_pane_g1

0x9e35,	// (0x0007fe9b) mup_spec_bar_pane_ParamLimits

0x9e35,	// (0x0007fe9b) mup_spec_bar_pane

0x2028,	// (0x0007808e) mup_spec_bar_pane_g1

0x2032,	// (0x00078098) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0008566c) mup_spec_bar_pane_g

0x71a8,	// (0x0007d20e) aid_cale_week_size_cell_pane_ParamLimits

0x71bd,	// (0x0007d223) bg_cale_heading_pane_ParamLimits

0x00a8,	// (0x0007610e) bg_cale_pane_cp01_ParamLimits

0x71df,	// (0x0007d245) cale_week_corner_pane_ParamLimits

0x71f9,	// (0x0007d25f) cale_week_day_heading_pane_ParamLimits

0x721b,	// (0x0007d281) cale_week_scroll_pane_g1_ParamLimits

0x7238,	// (0x0007d29e) cale_week_scroll_pane_g2_ParamLimits

0x724b,	// (0x0007d2b1) cale_week_scroll_pane_g3_ParamLimits

0x725e,	// (0x0007d2c4) cale_week_scroll_pane_g4_ParamLimits

0x7271,	// (0x0007d2d7) cale_week_scroll_pane_g5_ParamLimits

0x7284,	// (0x0007d2ea) cale_week_scroll_pane_g6_ParamLimits

0x7297,	// (0x0007d2fd) cale_week_scroll_pane_g7_ParamLimits

0x72aa,	// (0x0007d310) cale_week_scroll_pane_g8_ParamLimits

0x72bf,	// (0x0007d325) cale_week_scroll_pane_g9_ParamLimits

0x72d2,	// (0x0007d338) cale_week_scroll_pane_g10_ParamLimits

0x72e5,	// (0x0007d34b) cale_week_scroll_pane_g11_ParamLimits

0x72f8,	// (0x0007d35e) cale_week_scroll_pane_g12_ParamLimits

0x730f,	// (0x0007d375) cale_week_scroll_pane_g13_ParamLimits

0x732a,	// (0x0007d390) cale_week_scroll_pane_g14_ParamLimits

0x7345,	// (0x0007d3ab) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x00085216) cale_week_scroll_pane_g_ParamLimits

0x7375,	// (0x0007d3db) cale_week_time_pane_ParamLimits

0x738a,	// (0x0007d3f0) grid_cale_week_pane_ParamLimits

0x00c5,	// (0x0007612b) listscroll_cale_week_pane_t1

0x00d7,	// (0x0007613d) scroll_pane_cp08_ParamLimits

0x8043,	// (0x0007e0a9) cale_month_corner_pane_ParamLimits

0x0481,	// (0x000764e7) cale_month_pane_t1

0x84cb,	// (0x0007e531) cale_month_week_pane_ParamLimits

0x0c7a,	// (0x00076ce0) popup_call_status_window_g1_ParamLimits

0x8cc4,	// (0x0007ed2a) popup_call_status_window_g2_ParamLimits

0x8cd0,	// (0x0007ed36) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000853bc) popup_call_status_window_g_ParamLimits

0x0839,	// (0x0007689f) aid_call2_pane

0x58e6,	// (0x0007b94c) msg_header_pane_g1

0x9594,	// (0x0007f5fa) postcard_address2_pane_ParamLimits

0x9594,	// (0x0007f5fa) postcard_address2_pane

0x95a0,	// (0x0007f606) postcard_message2_pane_ParamLimits

0x95a0,	// (0x0007f606) postcard_message2_pane

0x9dcd,	// (0x0007fe33) message2_row_pane_ParamLimits

0x9dcd,	// (0x0007fe33) message2_row_pane

0x9de8,	// (0x0007fe4e) address2_row_pane_ParamLimits

0x9de8,	// (0x0007fe4e) address2_row_pane

0x1ff6,	// (0x0007805c) postcard_message2_row_pane_g1

0x1ffe,	// (0x00078064) postcard_message2_row_pane_t1

0x1ff6,	// (0x0007805c) address2_row_pane_g1

0x1ffe,	// (0x00078064) address2_row_pane_t1

0x76f2,	// (0x0007d758) aid_size_cell_vorec

0xecd9,	// (0x00084d3f) main_rss_pane

0x9dfb,	// (0x0007fe61) rss_list_single_pane_ParamLimits

0x9dfb,	// (0x0007fe61) rss_list_single_pane

0x200c,	// (0x00078072) rss_list_single_pane_t1

0x201a,	// (0x00078080) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x00085667) rss_list_single_pane_t

0xecd9,	// (0x00084d3f) main_camera2_pane

0xecd9,	// (0x00084d3f) main_video2_pane

0xa02d,	// (0x00080093) cams_zoom_pane_cp2_ParamLimits

0xa02d,	// (0x00080093) cams_zoom_pane_cp2

0xa039,	// (0x0008009f) image2_vga_pane_ParamLimits

0xa039,	// (0x0008009f) image2_vga_pane

0xa048,	// (0x000800ae) main_camera2_pane_g1_ParamLimits

0xa048,	// (0x000800ae) main_camera2_pane_g1

0xa054,	// (0x000800ba) main_camera2_pane_g2_ParamLimits

0xa054,	// (0x000800ba) main_camera2_pane_g2

0xa060,	// (0x000800c6) main_camera2_pane_g3_ParamLimits

0xa060,	// (0x000800c6) main_camera2_pane_g3

0xa06c,	// (0x000800d2) main_camera2_pane_g4_ParamLimits

0xa06c,	// (0x000800d2) main_camera2_pane_g4

0xa078,	// (0x000800de) main_camera2_pane_g5_ParamLimits

0xa078,	// (0x000800de) main_camera2_pane_g5

0xa084,	// (0x000800ea) main_camera2_pane_g6_ParamLimits

0xa084,	// (0x000800ea) main_camera2_pane_g6

0xa090,	// (0x000800f6) main_camera2_pane_g7_ParamLimits

0xa090,	// (0x000800f6) main_camera2_pane_g7

0xa09c,	// (0x00080102) main_camera2_pane_g8_ParamLimits

0xa09c,	// (0x00080102) main_camera2_pane_g8

0x0008,

0xf622,	// (0x00085688) main_camera2_pane_g_ParamLimits

0xf622,	// (0x00085688) main_camera2_pane_g

0xa0b4,	// (0x0008011a) main_camera2_pane_t1_ParamLimits

0xa0b4,	// (0x0008011a) main_camera2_pane_t1

0xa0c6,	// (0x0008012c) main_camera2_pane_t2_ParamLimits

0xa0c6,	// (0x0008012c) main_camera2_pane_t2

0xa0d8,	// (0x0008013e) main_camera2_pane_t3_ParamLimits

0xa0d8,	// (0x0008013e) main_camera2_pane_t3

0xa0ea,	// (0x00080150) main_camera2_pane_t4_ParamLimits

0xa0ea,	// (0x00080150) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0008569b) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0008569b) main_camera2_pane_t

0xa14c,	// (0x000801b2) cams_zoom_pane_cp4_ParamLimits

0xa14c,	// (0x000801b2) cams_zoom_pane_cp4

0xa15c,	// (0x000801c2) image2_cif_pane_ParamLimits

0xa15c,	// (0x000801c2) image2_cif_pane

0xa171,	// (0x000801d7) image2_subqcif_pane_ParamLimits

0xa171,	// (0x000801d7) image2_subqcif_pane

0xa180,	// (0x000801e6) main_video2_pane_g1_ParamLimits

0xa180,	// (0x000801e6) main_video2_pane_g1

0xa192,	// (0x000801f8) main_video2_pane_g2_ParamLimits

0xa192,	// (0x000801f8) main_video2_pane_g2

0xa1a2,	// (0x00080208) main_video2_pane_g3_ParamLimits

0xa1a2,	// (0x00080208) main_video2_pane_g3

0xa1b2,	// (0x00080218) main_video2_pane_g4_ParamLimits

0xa1b2,	// (0x00080218) main_video2_pane_g4

0xa1c2,	// (0x00080228) main_video2_pane_g5_ParamLimits

0xa1c2,	// (0x00080228) main_video2_pane_g5

0xa1d2,	// (0x00080238) main_video2_pane_g6_ParamLimits

0xa1d2,	// (0x00080238) main_video2_pane_g6

0x0005,

0xf644,	// (0x000856aa) main_video2_pane_g_ParamLimits

0xf644,	// (0x000856aa) main_video2_pane_g

0xa1e4,	// (0x0008024a) main_video2_pane_t1_ParamLimits

0xa1e4,	// (0x0008024a) main_video2_pane_t1

0xa1fe,	// (0x00080264) main_video2_pane_t2_ParamLimits

0xa1fe,	// (0x00080264) main_video2_pane_t2

0xa224,	// (0x0008028a) main_video2_pane_t3_ParamLimits

0xa224,	// (0x0008028a) main_video2_pane_t3

0x0002,

0xf651,	// (0x000856b7) main_video2_pane_t_ParamLimits

0xf651,	// (0x000856b7) main_video2_pane_t

0x9aed,	// (0x0007fb53) call_muted_g2

0x0001,

0xf5f3,	// (0x00085659) call_muted_g

0xecd9,	// (0x00084d3f) main_mup2_pane

0x20a9,	// (0x0007810f) main_mup2_pane_g1_ParamLimits

0x20a9,	// (0x0007810f) main_mup2_pane_g1

0xa24a,	// (0x000802b0) main_mup2_pane_g2_ParamLimits

0xa24a,	// (0x000802b0) main_mup2_pane_g2

0xa4cc,	// (0x00080532) main_mup_pane_g13_cp1

0xa4d4,	// (0x0008053a) mup_volume_pane_cp1

0xa26a,	// (0x000802d0) main_mup2_pane_g4_ParamLimits

0xa26a,	// (0x000802d0) main_mup2_pane_g4

0xa27f,	// (0x000802e5) main_mup2_pane_g5_ParamLimits

0xa27f,	// (0x000802e5) main_mup2_pane_g5

0xa294,	// (0x000802fa) main_mup2_pane_g6_ParamLimits

0xa294,	// (0x000802fa) main_mup2_pane_g6

0xa2a9,	// (0x0008030f) main_mup2_pane_g7_ParamLimits

0xa2a9,	// (0x0008030f) main_mup2_pane_g7

0x0006,

0xf658,	// (0x000856be) main_mup2_pane_g_ParamLimits

0xf658,	// (0x000856be) main_mup2_pane_g

0xa2c5,	// (0x0008032b) main_mup2_pane_t1_ParamLimits

0xa2c5,	// (0x0008032b) main_mup2_pane_t1

0xa2dc,	// (0x00080342) main_mup2_pane_t2_ParamLimits

0xa2dc,	// (0x00080342) main_mup2_pane_t2

0xa2f3,	// (0x00080359) main_mup2_pane_t3_ParamLimits

0xa2f3,	// (0x00080359) main_mup2_pane_t3

0xa30a,	// (0x00080370) main_mup2_pane_t4_ParamLimits

0xa30a,	// (0x00080370) main_mup2_pane_t4

0xa324,	// (0x0008038a) main_mup2_pane_t5_ParamLimits

0xa324,	// (0x0008038a) main_mup2_pane_t5

0xa33e,	// (0x000803a4) main_mup2_pane_t6_ParamLimits

0xa33e,	// (0x000803a4) main_mup2_pane_t6

0x0005,

0xf667,	// (0x000856cd) main_mup2_pane_t_ParamLimits

0xf667,	// (0x000856cd) main_mup2_pane_t

0xa376,	// (0x000803dc) mup2_visualizer_pane_ParamLimits

0xa376,	// (0x000803dc) mup2_visualizer_pane

0xa3ac,	// (0x00080412) mup_progress_pane_cp_ParamLimits

0xa3ac,	// (0x00080412) mup_progress_pane_cp

0xa4b7,	// (0x0008051d) mup_volume_pane_cp_ParamLimits

0xa4b7,	// (0x0008051d) mup_volume_pane_cp

0xa3c3,	// (0x00080429) mup2_visualizer_pane_g1_ParamLimits

0xa3c3,	// (0x00080429) mup2_visualizer_pane_g1

0x207b,	// (0x000780e1) mup2_visualizer_pane_g2_ParamLimits

0x207b,	// (0x000780e1) mup2_visualizer_pane_g2

0xa3d8,	// (0x0008043e) mup2_visualizer_pane_g3_ParamLimits

0xa3d8,	// (0x0008043e) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x000856da) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x000856da) mup2_visualizer_pane_g

0x0eaf,	// (0x00076f15) aid_size_cell_fmradio

0x9c03,	// (0x0007fc69) aid_height_parent_landcape

0x02df,	// (0x00076345) wml_content_pane_cp

0x02e7,	// (0x0007634d) wml_tabs_pane

0x02f0,	// (0x00076356) popup_wml_miniature_window

0x02f8,	// (0x0007635e) scroll_pane_cp021

0x030c,	// (0x00076372) wml_content_pane_comp8

0xecd9,	// (0x00084d3f) bg_popup_sub_pane_cp05

0x2099,	// (0x000780ff) popup_wml_miniature_window_g1

0x20a1,	// (0x00078107) wml_miniature_view_pane

0xa3e6,	// (0x0008044c) aid_size_wml_view

0xa3ee,	// (0x00080454) wml_miniature_view_pane_g1

0xa3f7,	// (0x0008045d) wml_miniature_view_pane_g2

0xa400,	// (0x00080466) wml_miniature_view_pane_g3

0xa408,	// (0x0008046e) wml_miniature_view_pane_g4

0xa410,	// (0x00080476) wml_miniature_view_pane_g5

0xa418,	// (0x0008047e) wml_miniature_view_pane_g6

0xa420,	// (0x00080486) wml_miniature_view_pane_g7

0xa428,	// (0x0008048e) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x000856e1) wml_miniature_view_pane_g

0x20a9,	// (0x0007810f) background_graphic_ParamLimits

0x20a9,	// (0x0007810f) background_graphic

0x20b5,	// (0x0007811b) wml_tabs_2_pane

0x20be,	// (0x00078124) wml_tabs_3_pane_ParamLimits

0x20be,	// (0x00078124) wml_tabs_3_pane

0x20d0,	// (0x00078136) wml_tabs_4_pane_ParamLimits

0x20d0,	// (0x00078136) wml_tabs_4_pane

0x20e6,	// (0x0007814c) wml_tabs_5_pane_ParamLimits

0x20e6,	// (0x0007814c) wml_tabs_5_pane

0x2100,	// (0x00078166) wml_tabs_pane_g2_ParamLimits

0x2100,	// (0x00078166) wml_tabs_pane_g2

0x2114,	// (0x0007817a) wml_tabs_pane_g3_ParamLimits

0x2114,	// (0x0007817a) wml_tabs_pane_g3

0xa430,	// (0x00080496) wml_tabs_2_active_pane_ParamLimits

0xa430,	// (0x00080496) wml_tabs_2_active_pane

0xa440,	// (0x000804a6) wml_tabs_2_passive_pane_ParamLimits

0xa440,	// (0x000804a6) wml_tabs_2_passive_pane

0xa450,	// (0x000804b6) wml_tabs_3_active_pane_cp_ParamLimits

0xa450,	// (0x000804b6) wml_tabs_3_active_pane_cp

0xa461,	// (0x000804c7) wml_tabs_3_passive_pane_ParamLimits

0xa461,	// (0x000804c7) wml_tabs_3_passive_pane

0xa472,	// (0x000804d8) wml_tabs_3_passive_pane_cp_ParamLimits

0xa472,	// (0x000804d8) wml_tabs_3_passive_pane_cp

0xa483,	// (0x000804e9) tabs_4_active_pane

0xa48b,	// (0x000804f1) tabs_4_passive_pane

0xa493,	// (0x000804f9) tabs_4_passive_pane_cp

0xa49b,	// (0x00080501) tabs_4_passive_pane_cp2

0x99c8,	// (0x0007fa2e) aid_height_text

0x91de,	// (0x0007f244) mup_volume_cont_pane_ParamLimits

0x91de,	// (0x0007f244) mup_volume_cont_pane

0x6ce6,	// (0x0007cd4c) aid_size_cell_pinb

0x6cf0,	// (0x0007cd56) aid_size_list_pinb

0xa395,	// (0x000803fb) mup2_volume_cont_pane_ParamLimits

0xa395,	// (0x000803fb) mup2_volume_cont_pane

0xa4a3,	// (0x00080509) mup2_volume_cont_pane_g1_ParamLimits

0xa4a3,	// (0x00080509) mup2_volume_cont_pane_g1

0x6923,	// (0x0007c989) aid_size_cell_touch_ParamLimits

0x6923,	// (0x0007c989) aid_size_cell_touch

0x6bcc,	// (0x0007cc32) touch_pane_ParamLimits

0x6bcc,	// (0x0007cc32) touch_pane

0xe8bc,	// (0x00084922) main_rss2_pane

0x2131,	// (0x00078197) listscroll_rss2_pane

0x213a,	// (0x000781a0) rss2_navigation_pane

0x2142,	// (0x000781a8) list_rss2_pane

0x0974,	// (0x000769da) scroll_pane_cp22

0x214a,	// (0x000781b0) rss2_navigation_pane_g1

0x2153,	// (0x000781b9) rss2_navigation_pane_g2

0x215b,	// (0x000781c1) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x000856f2) rss2_navigation_pane_g

0x2163,	// (0x000781c9) rss2_navigation_pane_t1

0xa4dc,	// (0x00080542) rss2_list_single_pane_ParamLimits

0xa4dc,	// (0x00080542) rss2_list_single_pane

0x2171,	// (0x000781d7) rss2_list_single_pane_t2

0x217f,	// (0x000781e5) rss2_list_single_pane_t3_ParamLimits

0x217f,	// (0x000781e5) rss2_list_single_pane_t3

0x219c,	// (0x00078202) rss2_list_single_pane_t4

0x8b31,	// (0x0007eb97) smil_status_pane_g1

0x0a50,	// (0x00076ab6) main_image2_pane_ParamLimits

0x0a50,	// (0x00076ab6) main_image2_pane

0xa0a8,	// (0x0008010e) main_camera2_pane_g9_ParamLimits

0xa0a8,	// (0x0008010e) main_camera2_pane_g9

0xa0fc,	// (0x00080162) main_camera2_pane_t5_ParamLimits

0xa0fc,	// (0x00080162) main_camera2_pane_t5

0xa10e,	// (0x00080174) main_camera2_pane_t6_ParamLimits

0xa10e,	// (0x00080174) main_camera2_pane_t6

0xa50d,	// (0x00080573) main_image2_pane_g1_ParamLimits

0xa50d,	// (0x00080573) main_image2_pane_g1

0x9768,	// (0x0007f7ce) smil2_video_pane_ParamLimits

0x9768,	// (0x0007f7ce) smil2_video_pane

0x6957,	// (0x0007c9bd) aid_zoom_text_primary_cp

0x6b75,	// (0x0007cbdb) popup_preview_fixed_window

0x0248,	// (0x000762ae) im_reading_pane_g1

0x9ff2,	// (0x00080058) cams2_bc_adjust_pane_cp_ParamLimits

0x9ff2,	// (0x00080058) cams2_bc_adjust_pane_cp

0xa13e,	// (0x000801a4) cams2_bc_adjust_pane_ParamLimits

0xa13e,	// (0x000801a4) cams2_bc_adjust_pane

0xa519,	// (0x0008057f) cams2_bc_adjust_pane_g1

0xa521,	// (0x00080587) cams2_slider_pane

0xa52a,	// (0x00080590) cams2_slider_pane_g1

0xa533,	// (0x00080599) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x000856f9) cams2_slider_pane_g

0x6df6,	// (0x0007ce5c) calc_display_pane_ParamLimits

0x6e14,	// (0x0007ce7a) calc_paper_pane_ParamLimits

0x6e30,	// (0x0007ce96) grid_calc_pane_ParamLimits

0x8d32,	// (0x0007ed98) popup_clock_digital_window_t1_ParamLimits

0x0e4c,	// (0x00076eb2) main_image_pane_t1

0x6ddc,	// (0x0007ce42) aid_size_cell_calc_ParamLimits

0x6ddc,	// (0x0007ce42) aid_size_cell_calc

0x9c3d,	// (0x0007fca3) popup_blid_sat_info2_window_ParamLimits

0x9c3d,	// (0x0007fca3) popup_blid_sat_info2_window

0x21b2,	// (0x00078218) aid_size_cell_blid

0x21ba,	// (0x00078220) bg_popup_window_pane_cp07

0x21dd,	// (0x00078243) grid_popup_blid_pane

0x21e7,	// (0x0007824d) heading_pane_cp05_ParamLimits

0x21e7,	// (0x0007824d) heading_pane_cp05

0x22b1,	// (0x00078317) cell_popup_blid_pane_ParamLimits

0x22b1,	// (0x00078317) cell_popup_blid_pane

0x22d5,	// (0x0007833b) cell_popup_blid_pane_g1

0x22dd,	// (0x00078343) cell_popup_blid_pane_t1

0xa35b,	// (0x000803c1) mup2_indicator_pane_ParamLimits

0xa35b,	// (0x000803c1) mup2_indicator_pane

0x014f,	// (0x000761b5) mup2_visualizer_osc_pane

0x2087,	// (0x000780ed) mup2_visualizer_spec_pane_ParamLimits

0x2087,	// (0x000780ed) mup2_visualizer_spec_pane

0xa54d,	// (0x000805b3) mup2_spec_half_pane

0xa556,	// (0x000805bc) mup2_spec_half_pane_cp

0xa560,	// (0x000805c6) mup2_spec_bar_pane_ParamLimits

0xa560,	// (0x000805c6) mup2_spec_bar_pane

0x2028,	// (0x0007808e) mup2_spec_bar_pane_g1

0x2032,	// (0x00078098) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0008566c) mup2_spec_bar_pane_g

0xa57f,	// (0x000805e5) mup2_osc_middle_pane

0x2044,	// (0x000780aa) mup2_visualizer_osc_pane_g1

0xe8e6,	// (0x0008494c) popup_number_entry_window_t1_ParamLimits

0xe8f9,	// (0x0008495f) popup_number_entry_window_t2_ParamLimits

0xe90b,	// (0x00084971) popup_number_entry_window_t3_ParamLimits

0x6c23,	// (0x0007cc89) popup_number_entry_window_t5_ParamLimits

0x6c23,	// (0x0007cc89) popup_number_entry_window_t5

0xf0ca,	// (0x00085130) popup_number_entry_window_t_ParamLimits

0xe91d,	// (0x00084983) text_title_cp2_ParamLimits

0x945c,	// (0x0007f4c2) aid_hotspot_pointer_text2_pane

0x94f6,	// (0x0007f55c) main_viewer_pane_g9_ParamLimits

0x94f6,	// (0x0007f55c) main_viewer_pane_g9

0x0481,	// (0x000764e7) cale_month_pane_t1_ParamLimits

0x04be,	// (0x00076524) bg_cale_pane_ParamLimits

0x04d6,	// (0x0007653c) list_cale_pane_ParamLimits

0x04e7,	// (0x0007654d) listscroll_cale_day_pane_t1

0x04f9,	// (0x0007655f) scroll_pane_cp09_ParamLimits

0x9219,	// (0x0007f27f) main_mup_eq_pane_t1_ParamLimits

0x9219,	// (0x0007f27f) main_mup_eq_pane_t1

0x9233,	// (0x0007f299) main_mup_eq_pane_t2_ParamLimits

0x9233,	// (0x0007f299) main_mup_eq_pane_t2

0x924d,	// (0x0007f2b3) main_mup_eq_pane_t3_ParamLimits

0x924d,	// (0x0007f2b3) main_mup_eq_pane_t3

0x9265,	// (0x0007f2cb) main_mup_eq_pane_t4_ParamLimits

0x9265,	// (0x0007f2cb) main_mup_eq_pane_t4

0x927d,	// (0x0007f2e3) main_mup_eq_pane_t5_ParamLimits

0x927d,	// (0x0007f2e3) main_mup_eq_pane_t5

0x9295,	// (0x0007f2fb) main_mup_eq_pane_t6_ParamLimits

0x9295,	// (0x0007f2fb) main_mup_eq_pane_t6

0x92a9,	// (0x0007f30f) main_mup_eq_pane_t7_ParamLimits

0x92a9,	// (0x0007f30f) main_mup_eq_pane_t7

0x92bd,	// (0x0007f323) main_mup_eq_pane_t8_ParamLimits

0x92bd,	// (0x0007f323) main_mup_eq_pane_t8

0x92d3,	// (0x0007f339) main_mup_eq_pane_t9_ParamLimits

0x92d3,	// (0x0007f339) main_mup_eq_pane_t9

0x92eb,	// (0x0007f351) main_mup_eq_pane_t10_ParamLimits

0x92eb,	// (0x0007f351) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000854bb) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000854bb) main_mup_eq_pane_t

0x93a8,	// (0x0007f40e) mup_equalizer_pane_cp5_ParamLimits

0x93be,	// (0x0007f424) mup_equalizer_pane_cp6_ParamLimits

0x93d6,	// (0x0007f43c) mup_equalizer_pane_cp7_ParamLimits

0xe8bc,	// (0x00084922) main_gallery_pane

0x204d,	// (0x000780b3) smil2_volume_pane

0x2068,	// (0x000780ce) smil_status_volume_pane_g1_ParamLimits

0x2055,	// (0x000780bb) smil_status_volume_pane_g2_ParamLimits

0x9e65,	// (0x0007fecb) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x00085671) smil_status_volume_pane_g_ParamLimits

0x21ba,	// (0x00078220) bg_popup_window_pane_cp07_ParamLimits

0x21c8,	// (0x0007822e) blid_firmament_pane

0xa588,	// (0x000805ee) aid_size_cell_gallery_ParamLimits

0xa588,	// (0x000805ee) aid_size_cell_gallery

0xa596,	// (0x000805fc) grid_gallery_pane_ParamLimits

0xa596,	// (0x000805fc) grid_gallery_pane

0xa5a6,	// (0x0008060c) cell_gallery_pane_ParamLimits

0xa5a6,	// (0x0008060c) cell_gallery_pane

0x22eb,	// (0x00078351) bg_cell_gallery_focus_pane_ParamLimits

0x22eb,	// (0x00078351) bg_cell_gallery_focus_pane

0x22fd,	// (0x00078363) cell_gallery_pane_g1_ParamLimits

0x22fd,	// (0x00078363) cell_gallery_pane_g1

0xa5f4,	// (0x0008065a) cell_gallery_pane_g2_ParamLimits

0xa5f4,	// (0x0008065a) cell_gallery_pane_g2

0xa601,	// (0x00080667) cell_gallery_pane_g3_ParamLimits

0xa601,	// (0x00080667) cell_gallery_pane_g3

0x2309,	// (0x0007836f) cell_gallery_pane_g4_ParamLimits

0x2309,	// (0x0007836f) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0008571f) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0008571f) cell_gallery_pane_g

0x2315,	// (0x0007837b) bg_cell_gallery_focus_pane_g1

0x231d,	// (0x00078383) bg_cell_gallery_focus_pane_g2

0x2325,	// (0x0007838b) bg_cell_gallery_focus_pane_g3

0x232d,	// (0x00078393) bg_cell_gallery_focus_pane_g4

0x2335,	// (0x0007839b) bg_cell_gallery_focus_pane_g5

0x233d,	// (0x000783a3) bg_cell_gallery_focus_pane_g6

0x2345,	// (0x000783ab) bg_cell_gallery_focus_pane_g7

0x234d,	// (0x000783b3) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x00085728) bg_cell_gallery_focus_pane_g

0x2355,	// (0x000783bb) aid_firma_cardinal

0x2369,	// (0x000783cf) blid_firmament_pane_t1

0x2380,	// (0x000783e6) blid_firmament_pane_t2

0x2397,	// (0x000783fd) blid_firmament_pane_t3

0x23ae,	// (0x00078414) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x00085739) blid_firmament_pane_t

0x23c5,	// (0x0007842b) blid_sat_info_pane

0x23d5,	// (0x0007843b) blid_sat_info_pane_g1

0x23d5,	// (0x0007843b) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x00085742) blid_sat_info_pane_g

0x23df,	// (0x00078445) blid_sat_info_pane_t1

0x23ed,	// (0x00078453) smil2_volume_content_pane

0x23f6,	// (0x0007845c) smil2_volume_pane_g1

0x23fe,	// (0x00078464) smil2_volume_content_pane_g1

0x2407,	// (0x0007846d) smil2_volume_content_pane_g2

0x2410,	// (0x00078476) smil2_volume_content_pane_g3

0x2419,	// (0x0007847f) smil2_volume_content_pane_g4

0x2422,	// (0x00078488) smil2_volume_content_pane_g5

0x242b,	// (0x00078491) smil2_volume_content_pane_g6

0x2434,	// (0x0007849a) smil2_volume_content_pane_g7

0x243d,	// (0x000784a3) smil2_volume_content_pane_g8

0x2446,	// (0x000784ac) smil2_volume_content_pane_g9

0x244f,	// (0x000784b5) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x00085747) smil2_volume_content_pane_g

0x740b,	// (0x0007d471) cale_week_day_heading_pane_t1_ParamLimits

0x7446,	// (0x0007d4ac) cale_week_day_heading_pane_t2_ParamLimits

0x7481,	// (0x0007d4e7) cale_week_day_heading_pane_t3_ParamLimits

0x74bc,	// (0x0007d522) cale_week_day_heading_pane_t4_ParamLimits

0x74f7,	// (0x0007d55d) cale_week_day_heading_pane_t5_ParamLimits

0x7532,	// (0x0007d598) cale_week_day_heading_pane_t6_ParamLimits

0x756d,	// (0x0007d5d3) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x00085237) cale_week_day_heading_pane_t_ParamLimits

0x00f4,	// (0x0007615a) bg_cale_side_pane_ParamLimits

0x75a8,	// (0x0007d60e) cale_week_time_pane_t1_ParamLimits

0x75c2,	// (0x0007d628) cale_week_time_pane_t2_ParamLimits

0x75dc,	// (0x0007d642) cale_week_time_pane_t3_ParamLimits

0x75f6,	// (0x0007d65c) cale_week_time_pane_t4_ParamLimits

0x7610,	// (0x0007d676) cale_week_time_pane_t5_ParamLimits

0x762a,	// (0x0007d690) cale_week_time_pane_t6_ParamLimits

0x764a,	// (0x0007d6b0) cale_week_time_pane_t7_ParamLimits

0x766c,	// (0x0007d6d2) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x00085246) cale_week_time_pane_t_ParamLimits

0x7690,	// (0x0007d6f6) cell_cale_week_pane_g2_ParamLimits

0x00f4,	// (0x0007615a) bg_cale_side_pane_cp01_ParamLimits

0x8932,	// (0x0007e998) cale_month_week_pane_t1_ParamLimits

0x894b,	// (0x0007e9b1) cale_month_week_pane_t2_ParamLimits

0x8964,	// (0x0007e9ca) cale_month_week_pane_t3_ParamLimits

0x897d,	// (0x0007e9e3) cale_month_week_pane_t4_ParamLimits

0x8996,	// (0x0007e9fc) cale_month_week_pane_t5_ParamLimits

0x89b7,	// (0x0007ea1d) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0008531b) cale_month_week_pane_t_ParamLimits

0x8afa,	// (0x0007eb60) cell_cale_month_pane_g1_ParamLimits

0xe8bc,	// (0x00084922) main_cale_event_viewer_pane

0xe8bc,	// (0x00084922) listscroll_cale_event_viewer_pane

0x2458,	// (0x000784be) list_cale_ev_pane

0x2460,	// (0x000784c6) scroll_pane_cp023

0x246c,	// (0x000784d2) field_cale_ev_pane_ParamLimits

0x246c,	// (0x000784d2) field_cale_ev_pane

0x248a,	// (0x000784f0) field_cale_ev_content_pane_ParamLimits

0x248a,	// (0x000784f0) field_cale_ev_content_pane

0x2496,	// (0x000784fc) field_cale_ev_pane_g1_ParamLimits

0x2496,	// (0x000784fc) field_cale_ev_pane_g1

0x24a2,	// (0x00078508) field_cale_ev_pane_g2_ParamLimits

0x24a2,	// (0x00078508) field_cale_ev_pane_g2

0x24ba,	// (0x00078520) field_cale_ev_pane_g3_ParamLimits

0x24ba,	// (0x00078520) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0008575c) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0008575c) field_cale_ev_pane_g

0x24d2,	// (0x00078538) field_cale_ev_pane_t1_ParamLimits

0x24d2,	// (0x00078538) field_cale_ev_pane_t1

0x24e9,	// (0x0007854f) field_cale_ev_content_pane_t1_ParamLimits

0x24e9,	// (0x0007854f) field_cale_ev_content_pane_t1

0x0d32,	// (0x00076d98) bg_button_pane_cp01

0x7198,	// (0x0007d1fe) listscroll_cale_week_pane_ParamLimits

0x009f,	// (0x00076105) popup_toolbar_window_cp01

0x00c5,	// (0x0007612b) listscroll_cale_week_pane_t1_ParamLimits

0x7198,	// (0x0007d1fe) listscroll_cale_day_pane_ParamLimits

0x009f,	// (0x00076105) popup_toolbar_window_cp02

0x04e7,	// (0x0007654d) listscroll_cale_day_pane_t1_ParamLimits

0x7198,	// (0x0007d1fe) main_cale_month_pane_ParamLimits

0x9d44,	// (0x0007fdaa) popup_toolbar_window_cp03_ParamLimits

0x9d44,	// (0x0007fdaa) popup_toolbar_window_cp03

0x967e,	// (0x0007f6e4) main_image_pane_g2_ParamLimits

0x967e,	// (0x0007f6e4) main_image_pane_g2

0x968a,	// (0x0007f6f0) main_image_pane_g3_ParamLimits

0x968a,	// (0x0007f6f0) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0008554d) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0008554d) main_image_pane_g

0x0e4c,	// (0x00076eb2) main_image_pane_t1_ParamLimits

0x9696,	// (0x0007f6fc) main_image_pane_t2_ParamLimits

0x9696,	// (0x0007f6fc) main_image_pane_t2

0x96a8,	// (0x0007f70e) main_image_pane_t3_ParamLimits

0x96a8,	// (0x0007f70e) main_image_pane_t3

0x96ba,	// (0x0007f720) main_image_pane_t4_ParamLimits

0x96ba,	// (0x0007f720) main_image_pane_t4

0x0003,

0xf4ee,	// (0x00085554) main_image_pane_t_ParamLimits

0xf4ee,	// (0x00085554) main_image_pane_t

0x96cc,	// (0x0007f732) popup_image_details_window_cp01

0x96d6,	// (0x0007f73c) popup_toobar_trans_pane_cp01_ParamLimits

0x96d6,	// (0x0007f73c) popup_toobar_trans_pane_cp01

0x9c94,	// (0x0007fcfa) popup_image_details_window_ParamLimits

0x9c94,	// (0x0007fcfa) popup_image_details_window

0x9ca2,	// (0x0007fd08) popup_image_focus_window

0x9fe4,	// (0x0008004a) camera2_autofocus_pane_ParamLimits

0x9fe4,	// (0x0008004a) camera2_autofocus_pane

0xe8bc,	// (0x00084922) bg_popup_sub_pane_cp06

0x2507,	// (0x0007856d) popup_image_focus_window_g1

0x250f,	// (0x00078575) popup_image_focus_window_g2

0x2517,	// (0x0007857d) popup_image_focus_window_g3

0x251f,	// (0x00078585) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x00085763) popup_image_focus_window_g

0x2527,	// (0x0007858d) popup_image_focus_window_t1

0x2535,	// (0x0007859b) popup_image_focus_window_t2

0x2545,	// (0x000785ab) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0008576c) popup_image_focus_window_t

0x2553,	// (0x000785b9) camera2_autofocus_pane_g1

0x0a50,	// (0x00076ab6) bg_tb_trans_pane_cp01

0x2561,	// (0x000785c7) popup_image_details_window_g1

0x2574,	// (0x000785da) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0008577e) popup_image_details_window_g

0x259d,	// (0x00078603) popup_image_details_window_t1

0x25af,	// (0x00078615) popup_image_details_window_t2

0x25c8,	// (0x0007862e) popup_image_details_window_t3

0x25dc,	// (0x00078642) popup_image_details_window_t4

0x25f7,	// (0x0007865d) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x00085785) popup_image_details_window_t

0xeffc,	// (0x00085062) bg_calc_paper_pane_ParamLimits

0xe8bc,	// (0x00084922) grid_highlight_pane_cp013

0x6f2d,	// (0x0007cf93) list_calc_pane_ParamLimits

0x6f3f,	// (0x0007cfa5) scroll_pane_cp024

0xf010,	// (0x00085076) bg_calc_display_pane_ParamLimits

0x6f47,	// (0x0007cfad) calc_display_pane_t1_ParamLimits

0x6f5c,	// (0x0007cfc2) calc_display_pane_t2_ParamLimits

0x6f71,	// (0x0007cfd7) calc_display_pane_t3_ParamLimits

0xf151,	// (0x000851b7) calc_display_pane_t_ParamLimits

0x704d,	// (0x0007d0b3) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x000851d4) cell_calc_pane_g

0x7056,	// (0x0007d0bc) cell_calc_pane_t1

0xf06f,	// (0x000850d5) grid_highlight_pane_cp02_ParamLimits

0xf085,	// (0x000850eb) toolbar_button_pane_cp01_ParamLimits

0xf085,	// (0x000850eb) toolbar_button_pane_cp01

0x0e91,	// (0x00076ef7) temp_image_control_pane_ParamLimits

0x0e91,	// (0x00076ef7) temp_image_control_pane

0x0a50,	// (0x00076ab6) main_mp3_pane

0x2611,	// (0x00078677) temp_image_control_pane_g1_ParamLimits

0x2611,	// (0x00078677) temp_image_control_pane_g1

0x261f,	// (0x00078685) temp_image_control_pane_g2_ParamLimits

0x261f,	// (0x00078685) temp_image_control_pane_g2

0x2631,	// (0x00078697) temp_image_control_pane_g3_ParamLimits

0x2631,	// (0x00078697) temp_image_control_pane_g3

0xa63e,	// (0x000806a4) temp_image_control_pane_g4_ParamLimits

0xa63e,	// (0x000806a4) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x00085790) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x00085790) temp_image_control_pane_g

0x2611,	// (0x00078677) main_mp3_pane_g1

0xa64f,	// (0x000806b5) main_mp3_pane_g2

0x0007,

0xf733,	// (0x00085799) main_mp3_pane_g

0x2674,	// (0x000786da) main_mp3_pane_t1

0x0157,	// (0x000761bd) main_camera_pane_g8_ParamLimits

0x0157,	// (0x000761bd) main_camera_pane_g8

0x791d,	// (0x0007d983) main_video_pane_g7_ParamLimits

0x791d,	// (0x0007d983) main_video_pane_g7

0xa12c,	// (0x00080192) main_camera2_pane_t7_ParamLimits

0xa12c,	// (0x00080192) main_camera2_pane_t7

0x029f,	// (0x00076305) scroll_pane_cp025_ParamLimits

0x029f,	// (0x00076305) scroll_pane_cp025

0x02b3,	// (0x00076319) scroll_pane_cp026_ParamLimits

0x02b3,	// (0x00076319) scroll_pane_cp026

0x02c2,	// (0x00076328) wml_content_pane_ParamLimits

0xe8bc,	// (0x00084922) main_touch_calib_pane

0xa6f3,	// (0x00080759) main_touch_calib_pane_g1

0xa6ff,	// (0x00080765) main_touch_calib_pane_g2

0xa70b,	// (0x00080771) main_touch_calib_pane_g3

0xa717,	// (0x0008077d) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x000857b7) main_touch_calib_pane_g

0xa723,	// (0x00080789) main_touch_calib_pane_t1

0xa73c,	// (0x000807a2) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x000857c0) main_touch_calib_pane_t

0x0a5e,	// (0x00076ac4) mup_progress_pane_cp02

0x0a93,	// (0x00076af9) navi_pane_g1

0x0b4e,	// (0x00076bb4) navi_pane_mp_t3

0x0a50,	// (0x00076ab6) main_mp3_pane_ParamLimits

0x9d81,	// (0x0007fde7) navi_pane_ParamLimits

0x2611,	// (0x00078677) main_mp3_pane_g1_ParamLimits

0xa64f,	// (0x000806b5) main_mp3_pane_g2_ParamLimits

0xa65b,	// (0x000806c1) main_mp3_pane_g3_ParamLimits

0xa65b,	// (0x000806c1) main_mp3_pane_g3

0xa667,	// (0x000806cd) main_mp3_pane_g4_ParamLimits

0xa667,	// (0x000806cd) main_mp3_pane_g4

0x2641,	// (0x000786a7) main_mp3_pane_g5_ParamLimits

0x2641,	// (0x000786a7) main_mp3_pane_g5

0x264f,	// (0x000786b5) main_mp3_pane_g6_ParamLimits

0x264f,	// (0x000786b5) main_mp3_pane_g6

0x265c,	// (0x000786c2) main_mp3_pane_g7_ParamLimits

0x265c,	// (0x000786c2) main_mp3_pane_g7

0x2668,	// (0x000786ce) main_mp3_pane_g8_ParamLimits

0x2668,	// (0x000786ce) main_mp3_pane_g8

0xf733,	// (0x00085799) main_mp3_pane_g_ParamLimits

0xa673,	// (0x000806d9) main_mp3_pane_t2

0xa683,	// (0x000806e9) main_mp3_pane_t3

0x2682,	// (0x000786e8) main_mp3_pane_t4

0x2690,	// (0x000786f6) main_mp3_pane_t5

0x0005,

0xf744,	// (0x000857aa) main_mp3_pane_t

0x269e,	// (0x00078704) mup_progress_pane_cp01

0x6957,	// (0x0007c9bd) aid_zoom_text_secondary2

0x2458,	// (0x000784be) list_cale_ev2_pane

0x2460,	// (0x000784c6) scroll_pane_cp023_ParamLimits

0xa797,	// (0x000807fd) field_cale_ev2_pane_ParamLimits

0xa797,	// (0x000807fd) field_cale_ev2_pane

0xa7c0,	// (0x00080826) field_cale_ev2_pane_g1_ParamLimits

0xa7c0,	// (0x00080826) field_cale_ev2_pane_g1

0xa7cc,	// (0x00080832) field_cale_ev2_pane_g2_ParamLimits

0xa7cc,	// (0x00080832) field_cale_ev2_pane_g2

0xa7e4,	// (0x0008084a) field_cale_ev2_pane_g3_ParamLimits

0xa7e4,	// (0x0008084a) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x000857cb) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x000857cb) field_cale_ev2_pane_g

0x596b,	// (0x0007b9d1) field_cale_ev2_pane_t1_ParamLimits

0x596b,	// (0x0007b9d1) field_cale_ev2_pane_t1

0x5982,	// (0x0007b9e8) field_cale_ev2_pane_t2_ParamLimits

0x5982,	// (0x0007b9e8) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x000857d4) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x000857d4) field_cale_ev2_pane_t

0x955e,	// (0x0007f5c4) main_postcard_pane_g5_ParamLimits

0x955e,	// (0x0007f5c4) main_postcard_pane_g5

0x956c,	// (0x0007f5d2) main_postcard_pane_g6_ParamLimits

0x956c,	// (0x0007f5d2) main_postcard_pane_g6

0x7767,	// (0x0007d7cd) camera2_autofocus_pane_cp_ParamLimits

0x7767,	// (0x0007d7cd) camera2_autofocus_pane_cp

0x0a50,	// (0x00076ab6) main_mup3_pane

0xa808,	// (0x0008086e) main_mup3_pane_g1_ParamLimits

0xa808,	// (0x0008086e) main_mup3_pane_g1

0xa829,	// (0x0008088f) main_mup3_pane_g2_ParamLimits

0xa829,	// (0x0008088f) main_mup3_pane_g2

0xa8a1,	// (0x00080907) main_mup3_pane_g3_ParamLimits

0xa8a1,	// (0x00080907) main_mup3_pane_g3

0xa8e4,	// (0x0008094a) main_mup3_pane_g4_ParamLimits

0xa8e4,	// (0x0008094a) main_mup3_pane_g4

0xa927,	// (0x0008098d) main_mup3_pane_g5_ParamLimits

0xa927,	// (0x0008098d) main_mup3_pane_g5

0xa96a,	// (0x000809d0) main_mup3_pane_g6_ParamLimits

0xa96a,	// (0x000809d0) main_mup3_pane_g6

0x26c6,	// (0x0007872c) main_mup3_pane_g7_ParamLimits

0x26c6,	// (0x0007872c) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x000857e4) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x000857e4) main_mup3_pane_g

0xa9e0,	// (0x00080a46) main_mup3_pane_t1_ParamLimits

0xa9e0,	// (0x00080a46) main_mup3_pane_t1

0xaa4f,	// (0x00080ab5) main_mup3_pane_t2_ParamLimits

0xaa4f,	// (0x00080ab5) main_mup3_pane_t2

0xab18,	// (0x00080b7e) main_mup3_pane_t4_ParamLimits

0xab18,	// (0x00080b7e) main_mup3_pane_t4

0xab66,	// (0x00080bcc) main_mup3_pane_t5_ParamLimits

0xab66,	// (0x00080bcc) main_mup3_pane_t5

0xac16,	// (0x00080c7c) main_mup3_pane_t6_ParamLimits

0xac16,	// (0x00080c7c) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x000857f5) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x000857f5) main_mup3_pane_t

0xacc2,	// (0x00080d28) mup3_progress_pane_ParamLimits

0xacc2,	// (0x00080d28) mup3_progress_pane

0xad40,	// (0x00080da6) popup_mup3_control_window_ParamLimits

0xad40,	// (0x00080da6) popup_mup3_control_window

0x26d4,	// (0x0007873a) popup_mup3_text_window

0xad59,	// (0x00080dbf) mup3_progress_pane_t1

0xad78,	// (0x00080dde) mup3_progress_pane_t2

0x26dc,	// (0x00078742) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x00085802) mup3_progress_pane_t

0x26f9,	// (0x0007875f) mup_progress_pane_cp03

0xe8bc,	// (0x00084922) bg_tb_trans_pane_cp04

0xad97,	// (0x00080dfd) mup3_volume_pane

0xad9f,	// (0x00080e05) popup_mup3_control_window_g1

0xada8,	// (0x00080e0e) mup3_volume_pane_g1

0xadb1,	// (0x00080e17) mup3_volume_pane_g2

0xadba,	// (0x00080e20) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x00085809) mup3_volume_pane_g

0xe8bc,	// (0x00084922) bg_tb_trans_pane_cp03

0x2709,	// (0x0007876f) popup_mup3_text_window_g1

0x2711,	// (0x00078777) popup_mup3_text_window_t1

0xf058,	// (0x000850be) list_calc_item_pane_g1_ParamLimits

0x2128,	// (0x0007818e) mup_volume_pane_cp_g1

0xa755,	// (0x000807bb) main_touch_calib_pane_t3

0xa76b,	// (0x000807d1) main_touch_calib_pane_t4

0xa781,	// (0x000807e7) main_touch_calib_pane_t5

0x690f,	// (0x0007c975) aid_cell_size_toolbar2

0x6917,	// (0x0007c97d) aid_popup3_width_pane

0x5671,	// (0x0007b6d7) aid_zoom_text_msg_primary

0x773c,	// (0x0007d7a2) vorec_t7

0xf01c,	// (0x00085082) bg_calc_paper_pane_g1_ParamLimits

0xf028,	// (0x0008508e) bg_calc_paper_pane_g2_ParamLimits

0xf034,	// (0x0008509a) bg_calc_paper_pane_g3_ParamLimits

0xf040,	// (0x000850a6) bg_calc_paper_pane_g4_ParamLimits

0xf04c,	// (0x000850b2) bg_calc_paper_pane_g5_ParamLimits

0x6fb0,	// (0x0007d016) bg_calc_paper_pane_g6_ParamLimits

0x6fc1,	// (0x0007d027) bg_calc_paper_pane_g7_ParamLimits

0x6fd2,	// (0x0007d038) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x000851be) bg_calc_paper_pane_g_ParamLimits

0x6fe3,	// (0x0007d049) calc_bg_paper_pane_g9_ParamLimits

0x784e,	// (0x0007d8b4) image_qvga_pane_ParamLimits

0x784e,	// (0x0007d8b4) image_qvga_pane

0xef4b,	// (0x00084fb1) bg_popup_sub_pane_cp04_ParamLimits

0x0dc8,	// (0x00076e2e) popup_mup_playback_window_g1_ParamLimits

0x0dd4,	// (0x00076e3a) popup_mup_playback_window_t1_ParamLimits

0x0de9,	// (0x00076e4f) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x00085548) popup_mup_playback_window_t_ParamLimits

0xa25b,	// (0x000802c1) main_mup2_pane_g3_ParamLimits

0xa25b,	// (0x000802c1) main_mup2_pane_g3

0x7b1e,	// (0x0007db84) popup_toolbar_window_cp04

0x11cb,	// (0x00077231) popup_call2_audio_second_window_g3_ParamLimits

0x11cb,	// (0x00077231) popup_call2_audio_second_window_g3

0x15d5,	// (0x0007763b) popup_call2_audio_first_window_g4_ParamLimits

0x15d5,	// (0x0007763b) popup_call2_audio_first_window_g4

0x1c54,	// (0x00077cba) popup_call2_audio_in_window_g4_ParamLimits

0x1c54,	// (0x00077cba) popup_call2_audio_in_window_g4

0x9671,	// (0x0007f6d7) aid_area_sk_bg_cut_ParamLimits

0x9671,	// (0x0007f6d7) aid_area_sk_bg_cut

0x0dfe,	// (0x00076e64) aid_area_sk_bg_cut_2_ParamLimits

0x0dfe,	// (0x00076e64) aid_area_sk_bg_cut_2

0xa5e4,	// (0x0008064a) aid_placing_details_win

0xa5ec,	// (0x00080652) aid_placing_details_win_2

0x2553,	// (0x000785b9) camera2_autofocus_pane_g1_ParamLimits

0x6b66,	// (0x0007cbcc) popup_fixed_preview_cale_window_ParamLimits

0x6b66,	// (0x0007cbcc) popup_fixed_preview_cale_window

0x0bde,	// (0x00076c44) navi_slider_pane_g3

0x0bd5,	// (0x00076c3b) navi_slider_pane_g4

0x0bcc,	// (0x00076c32) navi_slider_pane_g5

0x0bde,	// (0x00076c44) navi_slider_pane_g6

0x8fad,	// (0x0007f013) navi_slider_pane_g7

0x0cff,	// (0x00076d65) mup_scale_pane_g3

0x0d08,	// (0x00076d6e) mup_scale_pane_g4

0x0d11,	// (0x00076d77) mup_scale_pane_g5

0x93ee,	// (0x0007f454) mup_scale_pane_g6

0x93f7,	// (0x0007f45d) mup_scale_pane_g7

0x0bde,	// (0x00076c44) cams2_slider_pane_g3

0x21aa,	// (0x00078210) cams2_slider_pane_g4

0xa53c,	// (0x000805a2) cams2_slider_pane_g5

0x0bde,	// (0x00076c44) cams2_slider_pane_g6

0xa544,	// (0x000805aa) cams2_slider_pane_g7

0x23d5,	// (0x0007843b) camera2_autofocus_pane_cp_g1

0x1fc1,	// (0x00078027) bg_popup_preview_window_pane_cp02_ParamLimits

0x1fc1,	// (0x00078027) bg_popup_preview_window_pane_cp02

0x271f,	// (0x00078785) list_fp_cale_pane_ParamLimits

0x271f,	// (0x00078785) list_fp_cale_pane

0x272b,	// (0x00078791) popup_fixed_preview_cale_window_t1_ParamLimits

0x272b,	// (0x00078791) popup_fixed_preview_cale_window_t1

0xadc3,	// (0x00080e29) popup_fixed_preview_cale_window_t2_ParamLimits

0xadc3,	// (0x00080e29) popup_fixed_preview_cale_window_t2

0xadd8,	// (0x00080e3e) popup_fixed_preview_cale_window_t3_ParamLimits

0xadd8,	// (0x00080e3e) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x00085810) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x00085810) popup_fixed_preview_cale_window_t

0xaded,	// (0x00080e53) list_single_fp_cale_pane_ParamLimits

0xaded,	// (0x00080e53) list_single_fp_cale_pane

0x2749,	// (0x000787af) list_single_fp_cale_pane_g1_ParamLimits

0x2749,	// (0x000787af) list_single_fp_cale_pane_g1

0x2755,	// (0x000787bb) list_single_fp_cale_pane_g2_ParamLimits

0x2755,	// (0x000787bb) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x00085817) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x00085817) list_single_fp_cale_pane_g

0x276e,	// (0x000787d4) list_single_fp_cale_pane_t1_ParamLimits

0x276e,	// (0x000787d4) list_single_fp_cale_pane_t1

0x2780,	// (0x000787e6) list_single_fp_cale_pane_t2_ParamLimits

0x2780,	// (0x000787e6) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0008581e) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0008581e) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe8bc,	// (0x00084922) main_dialer_pane

0xae00,	// (0x00080e66) aid_cell_size_keypad

0xae0a,	// (0x00080e70) dialer_ne_pane

0xae14,	// (0x00080e7a) grid_dialer_command_1_pane

0xae1c,	// (0x00080e82) grid_dialer_command_2_pane

0xae24,	// (0x00080e8a) grid_dialer_keypad_pane

0xae36,	// (0x00080e9c) bg_popup_call_pane_cp06_ParamLimits

0xae36,	// (0x00080e9c) bg_popup_call_pane_cp06

0xae42,	// (0x00080ea8) dialer_ne_clear_pane_ParamLimits

0xae42,	// (0x00080ea8) dialer_ne_clear_pane

0x27b3,	// (0x00078819) dialer_ne_pane_g1

0x27bb,	// (0x00078821) dialer_ne_pane_t1_ParamLimits

0x27bb,	// (0x00078821) dialer_ne_pane_t1

0xae4e,	// (0x00080eb4) dialer_ne_pane_t2_ParamLimits

0xae4e,	// (0x00080eb4) dialer_ne_pane_t2

0xae6b,	// (0x00080ed1) dialer_ne_pane_t3_ParamLimits

0xae6b,	// (0x00080ed1) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x00085823) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x00085823) dialer_ne_pane_t

0xae8f,	// (0x00080ef5) dialer_ne_pane_t3_copy1_ParamLimits

0xae8f,	// (0x00080ef5) dialer_ne_pane_t3_copy1

0xaeb3,	// (0x00080f19) cell_dialer_keypad_pane_ParamLimits

0xaeb3,	// (0x00080f19) cell_dialer_keypad_pane

0xaeca,	// (0x00080f30) cell_dialer_command_1_pane_ParamLimits

0xaeca,	// (0x00080f30) cell_dialer_command_1_pane

0xaee0,	// (0x00080f46) cell_dialer_command_2_pane_ParamLimits

0xaee0,	// (0x00080f46) cell_dialer_command_2_pane

0x27cd,	// (0x00078833) bg_button_pane_cp02_ParamLimits

0x27cd,	// (0x00078833) bg_button_pane_cp02

0xaeef,	// (0x00080f55) cell_dialer_keypad_pane_g1_ParamLimits

0xaeef,	// (0x00080f55) cell_dialer_keypad_pane_g1

0x27cd,	// (0x00078833) bg_button_pane_cp03_ParamLimits

0x27cd,	// (0x00078833) bg_button_pane_cp03

0xaf04,	// (0x00080f6a) cell_dialer_command_1_pane_g1_ParamLimits

0xaf04,	// (0x00080f6a) cell_dialer_command_1_pane_g1

0x27d9,	// (0x0007883f) bg_button_pane_cp04

0xaf18,	// (0x00080f7e) cell_dialer_command_2_pane_g1

0x014f,	// (0x000761b5) bg_button_pane_cp06

0x27e1,	// (0x00078847) dialer_ne_clear_pane_g1

0x0a9f,	// (0x00076b05) navi_pane_g2

0x0acd,	// (0x00076b33) navi_pane_g3

0x0002,

0xf3e5,	// (0x0008544b) navi_pane_g

0x0b5c,	// (0x00076bc2) navi_pane_mv_g2

0x0b83,	// (0x00076be9) navi_pane_mv_g5

0x8f78,	// (0x0007efde) navi_pane_mv_t1

0xf010,	// (0x00085076) main_clock2_pane

0xaf56,	// (0x00080fbc) main_clock2_list_pane_ParamLimits

0xaf56,	// (0x00080fbc) main_clock2_list_pane

0xaf7e,	// (0x00080fe4) main_clock2_pane_t1_ParamLimits

0xaf7e,	// (0x00080fe4) main_clock2_pane_t1

0xafa0,	// (0x00081006) main_clock2_pane_t2_ParamLimits

0xafa0,	// (0x00081006) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0008582f) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0008582f) main_clock2_pane_t

0xaffb,	// (0x00081061) popup_clock_analogue_window_cp03_ParamLimits

0xaffb,	// (0x00081061) popup_clock_analogue_window_cp03

0xb019,	// (0x0008107f) popup_clock_digital_window_cp02_ParamLimits

0xb019,	// (0x0008107f) popup_clock_digital_window_cp02

0xb086,	// (0x000810ec) main_clock2_list_single_pane_ParamLimits

0xb086,	// (0x000810ec) main_clock2_list_single_pane

0x014f,	// (0x000761b5) list_highlight_pane_cp05

0x281f,	// (0x00078885) main_clock2_list_single_pane_t1

0x7b1e,	// (0x0007db84) popup_toolbar_window_cp04_ParamLimits

0xa60e,	// (0x00080674) camera2_autofocus_pane_g2_ParamLimits

0xa60e,	// (0x00080674) camera2_autofocus_pane_g2

0xa61a,	// (0x00080680) camera2_autofocus_pane_g3_ParamLimits

0xa61a,	// (0x00080680) camera2_autofocus_pane_g3

0xa626,	// (0x0008068c) camera2_autofocus_pane_g4_ParamLimits

0xa626,	// (0x0008068c) camera2_autofocus_pane_g4

0xa632,	// (0x00080698) camera2_autofocus_pane_g5_ParamLimits

0xa632,	// (0x00080698) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x00085773) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x00085773) camera2_autofocus_pane_g

0x26a6,	// (0x0007870c) camera2_autofocus_pane_cp_g2

0x26ae,	// (0x00078714) camera2_autofocus_pane_cp_g3

0x26b6,	// (0x0007871c) camera2_autofocus_pane_cp_g4

0x26be,	// (0x00078724) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x000857d9) camera2_autofocus_pane_cp_g

0xae2e,	// (0x00080e94) popup_dialer_spcha_window

0xe8bc,	// (0x00084922) bg_popup_sub_pane_cp07

0x282d,	// (0x00078893) list_spcha_pane

0x2835,	// (0x0007889b) list_single_spcha_pane_ParamLimits

0x2835,	// (0x0007889b) list_single_spcha_pane

0xe8bc,	// (0x00084922) list_highlight_pane_cp06

0x2846,	// (0x000788ac) list_single_spcha_pane_t1

0x19fe,	// (0x00077a64) popup_call2_audio_out_window_g4_ParamLimits

0x19fe,	// (0x00077a64) popup_call2_audio_out_window_g4

0xe8bc,	// (0x00084922) main_imed2_pane

0x9caa,	// (0x0007fd10) popup_imed_adjust2_window

0x9cbd,	// (0x0007fd23) popup_imed_trans_window_ParamLimits

0x9cbd,	// (0x0007fd23) popup_imed_trans_window

0x2213,	// (0x00078279) popup_blid_sat_info2_window_t1

0x2221,	// (0x00078287) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x00085708) popup_blid_sat_info2_window_t

0xb130,	// (0x00081196) aid_size_cell_colour_35

0xb14a,	// (0x000811b0) aid_size_cell_colour_112

0xb161,	// (0x000811c7) aid_size_cell_effect

0x0a50,	// (0x00076ab6) bg_tb_trans_pane_cp02

0x0697,	// (0x000766fd) heading_imed_pane

0xb17b,	// (0x000811e1) listscroll_imed_pane

0x2854,	// (0x000788ba) heading_imed_pane_g1

0x285c,	// (0x000788c2) heading_imed_pane_t1

0x286a,	// (0x000788d0) grid_imed_colour_35_pane_ParamLimits

0x286a,	// (0x000788d0) grid_imed_colour_35_pane

0xb187,	// (0x000811ed) grid_imed_effect_pane

0x2881,	// (0x000788e7) list_imed_aspect_pane

0xb197,	// (0x000811fd) scroll_pane_cp027_ParamLimits

0xb197,	// (0x000811fd) scroll_pane_cp027

0xb1a3,	// (0x00081209) cell_imed_effect_pane_ParamLimits

0xb1a3,	// (0x00081209) cell_imed_effect_pane

0x2889,	// (0x000788ef) cell_imed_colour_pane_ParamLimits

0x2889,	// (0x000788ef) cell_imed_colour_pane

0x28cb,	// (0x00078931) cell_imed_colour_pane_g1_ParamLimits

0x28cb,	// (0x00078931) cell_imed_colour_pane_g1

0x28dc,	// (0x00078942) hgihlgiht_grid_pane_cp016_ParamLimits

0x28dc,	// (0x00078942) hgihlgiht_grid_pane_cp016

0xb1bb,	// (0x00081221) cell_imed_effect_pane_g1

0xb1c3,	// (0x00081229) grid_highlight_pane_cp017

0x28ed,	// (0x00078953) list_imed_single_pane_ParamLimits

0x28ed,	// (0x00078953) list_imed_single_pane

0xe8bc,	// (0x00084922) list_highlight_pane_cp07

0x2902,	// (0x00078968) list_imed_aspect_pane_comp1_t1

0x1fcd,	// (0x00078033) bg_tb_trans_pane_cp05

0x2924,	// (0x0007898a) popup_imed_adjust2_window_g1

0x294b,	// (0x000789b1) popup_imed_adjust2_window_t1

0x2963,	// (0x000789c9) slider_imed_adjust_pane

0x2977,	// (0x000789dd) slider_imed_adjust_pane_g1

0x2987,	// (0x000789ed) slider_imed_adjust_pane_g2

0x2997,	// (0x000789fd) slider_imed_adjust_pane_g3

0x29a8,	// (0x00078a0e) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0008584c) slider_imed_adjust_pane_g

0xb1cc,	// (0x00081232) aid_size_cell_clipart2

0xb1d8,	// (0x0008123e) grid_imed_clipart_pane

0x29b9,	// (0x00078a1f) scroll_pane_cp031

0xb1e2,	// (0x00081248) cell_imed_clipart_pane_ParamLimits

0xb1e2,	// (0x00081248) cell_imed_clipart_pane

0xb204,	// (0x0008126a) cell_imed_clipart_pane_g1

0xe8bc,	// (0x00084922) grid_highlight_pane_cp014

0xaf62,	// (0x00080fc8) main_clock2_pane_g1_ParamLimits

0xaf62,	// (0x00080fc8) main_clock2_pane_g1

0xb031,	// (0x00081097) aid_call2_pane_cp10

0xb043,	// (0x000810a9) aid_call_pane_cp10

0x09f2,	// (0x00076a58) popup_clock_analogue_window_cp10_g1

0x09f2,	// (0x00076a58) popup_clock_analogue_window_cp10_g2

0xb055,	// (0x000810bb) popup_clock_analogue_window_cp10_g3

0xb055,	// (0x000810bb) popup_clock_analogue_window_cp10_g4

0x09f2,	// (0x00076a58) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0008583a) popup_clock_analogue_window_cp10_g

0xb067,	// (0x000810cd) popup_clock_analogue_window_cp10_t1

0xb098,	// (0x000810fe) clock_digital_number_pane_cp10_ParamLimits

0xb098,	// (0x000810fe) clock_digital_number_pane_cp10

0xb0b0,	// (0x00081116) clock_digital_number_pane_cp11_ParamLimits

0xb0b0,	// (0x00081116) clock_digital_number_pane_cp11

0xb0c8,	// (0x0008112e) clock_digital_number_pane_cp12_ParamLimits

0xb0c8,	// (0x0008112e) clock_digital_number_pane_cp12

0xb0e0,	// (0x00081146) clock_digital_number_pane_cp13_ParamLimits

0xb0e0,	// (0x00081146) clock_digital_number_pane_cp13

0xb0f8,	// (0x0008115e) clock_digital_separator_pane_cp10_ParamLimits

0xb0f8,	// (0x0008115e) clock_digital_separator_pane_cp10

0xb110,	// (0x00081176) popup_clock_digital_window_cp02_t1_ParamLimits

0xb110,	// (0x00081176) popup_clock_digital_window_cp02_t1

0xef43,	// (0x00084fa9) clock_digital_number_pane_cp10_g1

0xef43,	// (0x00084fa9) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x00085855) clock_digital_number_pane_cp10_g

0xef43,	// (0x00084fa9) clock_digital_separator_pane_cp10_g1

0xef43,	// (0x00084fa9) clock_digital_separator_pane_g2_cp10

0x0b8b,	// (0x00076bf1) navi_pane_vded_g4

0x0b94,	// (0x00076bfa) navi_pane_vded_g5

0x0b9d,	// (0x00076c03) navi_pane_vded_t1

0xe8bc,	// (0x00084922) main_vded_pane

0xb20d,	// (0x00081273) main_vded_pane_g1

0xb219,	// (0x0008127f) main_vded_pane_g2

0xb223,	// (0x00081289) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0008585a) main_vded_pane_g

0xb22d,	// (0x00081293) main_vded_pane_t1

0xb23b,	// (0x000812a1) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x00085861) main_vded_pane_t

0xb249,	// (0x000812af) vded_slider_pane

0xb253,	// (0x000812b9) vded_video_pane

0x29c1,	// (0x00078a27) vded_video_pane_g1

0xb25d,	// (0x000812c3) vded_video_pane_g2

0x23d5,	// (0x0007843b) vded_video_pane_g3

0x0002,

0xf800,	// (0x00085866) vded_video_pane_g

0x29cb,	// (0x00078a31) vded_slider_pane_g1

0x2128,	// (0x0007818e) vded_slider_pane_g2

0x29d4,	// (0x00078a3a) vded_slider_pane_g3

0x29dd,	// (0x00078a43) vded_slider_pane_g4

0x29e6,	// (0x00078a4c) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0008586d) vded_slider_pane_g

0xad32,	// (0x00080d98) mup3_rocker_pane_ParamLimits

0xad32,	// (0x00080d98) mup3_rocker_pane

0xb266,	// (0x000812cc) mup3_control_keys_pane_g1

0xb26e,	// (0x000812d4) mup3_control_keys_pane_g2

0xb276,	// (0x000812dc) mup3_control_keys_pane_g3

0xb27e,	// (0x000812e4) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x00085878) mup3_control_keys_pane_g

0x6b8e,	// (0x0007cbf4) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6b8e,	// (0x0007cbf4) popup_toolbar2_fixed_window_cp01

0xad4c,	// (0x00080db2) popup_toolbar2_fixed_window_cp02_ParamLimits

0xad4c,	// (0x00080db2) popup_toolbar2_fixed_window_cp02

0x133d,	// (0x000773a3) popup_call2_audio_second_window_t4_ParamLimits

0x133d,	// (0x000773a3) popup_call2_audio_second_window_t4

0x186b,	// (0x000778d1) popup_call2_audio_first_window_t6_ParamLimits

0x186b,	// (0x000778d1) popup_call2_audio_first_window_t6

0x1b01,	// (0x00077b67) popup_call2_audio_out_window_t6_ParamLimits

0x1b01,	// (0x00077b67) popup_call2_audio_out_window_t6

0xe8bc,	// (0x00084922) main_vitu_pane

0xb28e,	// (0x000812f4) aid_size_cell_itu_ParamLimits

0xb28e,	// (0x000812f4) aid_size_cell_itu

0x3d36,	// (0x00079d9c) bg_popup_window_pane_cp08_ParamLimits

0x3d36,	// (0x00079d9c) bg_popup_window_pane_cp08

0xb29c,	// (0x00081302) field_vitu_entry_pane_ParamLimits

0xb29c,	// (0x00081302) field_vitu_entry_pane

0xb2ab,	// (0x00081311) grid_vitu_function_pane_ParamLimits

0xb2ab,	// (0x00081311) grid_vitu_function_pane

0xb2bb,	// (0x00081321) grid_vitu_itu_pane_ParamLimits

0xb2bb,	// (0x00081321) grid_vitu_itu_pane

0xb2cb,	// (0x00081331) cell_vitu_itu_pane_ParamLimits

0xb2cb,	// (0x00081331) cell_vitu_itu_pane

0xb2e0,	// (0x00081346) cell_vitu_function_pane_ParamLimits

0xb2e0,	// (0x00081346) cell_vitu_function_pane

0x0a50,	// (0x00076ab6) bg_popup_sub_pane_cp08_ParamLimits

0x0a50,	// (0x00076ab6) bg_popup_sub_pane_cp08

0xb2f2,	// (0x00081358) field_vitu_entry_pane_t1_ParamLimits

0xb2f2,	// (0x00081358) field_vitu_entry_pane_t1

0x2a07,	// (0x00078a6d) field_vitu_entry_pane_t2_ParamLimits

0x2a07,	// (0x00078a6d) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x00085886) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x00085886) field_vitu_entry_pane_t

0x2a24,	// (0x00078a8a) bg_button_pane_cp05_ParamLimits

0x2a24,	// (0x00078a8a) bg_button_pane_cp05

0xb30e,	// (0x00081374) cell_vitu_itu_pane_g1

0xb326,	// (0x0008138c) cell_vitu_itu_pane_t1_ParamLimits

0xb326,	// (0x0008138c) cell_vitu_itu_pane_t1

0xb338,	// (0x0008139e) cell_vitu_itu_pane_t2_ParamLimits

0xb338,	// (0x0008139e) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0008588b) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0008588b) cell_vitu_itu_pane_t

0x2a32,	// (0x00078a98) bg_button_pane_cp07

0xb36d,	// (0x000813d3) cell_vitu_function_pane_g1

0x6e54,	// (0x0007ceba) main_calc_pane_g1

0x694b,	// (0x0007c9b1) aid_visual_content_pane

0xe8bc,	// (0x00084922) main_vradio_pane

0xb376,	// (0x000813dc) main_vradio_pane_g1_ParamLimits

0xb376,	// (0x000813dc) main_vradio_pane_g1

0x2a3c,	// (0x00078aa2) main_vradio_pane_g2_ParamLimits

0x2a3c,	// (0x00078aa2) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x00085892) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x00085892) main_vradio_pane_g

0xb386,	// (0x000813ec) main_vradio_pane_t1_ParamLimits

0xb386,	// (0x000813ec) main_vradio_pane_t1

0xb398,	// (0x000813fe) main_vradio_pane_t2_ParamLimits

0xb398,	// (0x000813fe) main_vradio_pane_t2

0x2a49,	// (0x00078aaf) main_vradio_pane_t3_ParamLimits

0x2a49,	// (0x00078aaf) main_vradio_pane_t3

0x0002,

0xf831,	// (0x00085897) main_vradio_pane_t_ParamLimits

0xf831,	// (0x00085897) main_vradio_pane_t

0xb3aa,	// (0x00081410) vradio_rocker_control_pane_ParamLimits

0xb3aa,	// (0x00081410) vradio_rocker_control_pane

0xb3b6,	// (0x0008141c) vradio_station_info_pane_ParamLimits

0xb3b6,	// (0x0008141c) vradio_station_info_pane

0x2a5d,	// (0x00078ac3) vradio_frequency_info_pane_ParamLimits

0x2a5d,	// (0x00078ac3) vradio_frequency_info_pane

0x23d5,	// (0x0007843b) vradio_station_info_pane_g1

0x2a6c,	// (0x00078ad2) vradio_station_info_pane_t1_ParamLimits

0x2a6c,	// (0x00078ad2) vradio_station_info_pane_t1

0x2a8e,	// (0x00078af4) vradio_station_info_pane_t2_ParamLimits

0x2a8e,	// (0x00078af4) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0008589e) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0008589e) vradio_station_info_pane_t

0x2aa0,	// (0x00078b06) vradio_tuning_pane

0x2aa8,	// (0x00078b0e) vradio_rocker_control_pane_g1

0x2ab0,	// (0x00078b16) vradio_rocker_control_pane_g2

0x2ab8,	// (0x00078b1e) vradio_rocker_control_pane_g3

0x2ac0,	// (0x00078b26) vradio_rocker_control_pane_g4

0x2ac8,	// (0x00078b2e) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x000858a3) vradio_rocker_control_pane_g

0xb3c5,	// (0x0008142b) vradio_frequency_info_pane_g1

0x2ad0,	// (0x00078b36) vradio_frequency_info_pane_t1_ParamLimits

0x2ad0,	// (0x00078b36) vradio_frequency_info_pane_t1

0xb3cf,	// (0x00081435) vradio_tuning_pane_g1

0xb3d8,	// (0x0008143e) vradio_tuning_pane_t1

0x6994,	// (0x0007c9fa) area_side_right_pane_ParamLimits

0x6994,	// (0x0007c9fa) area_side_right_pane

0x1f88,	// (0x00077fee) status_small_pane_g1

0x1f90,	// (0x00077ff6) status_small_pane_g2

0x1f99,	// (0x00077fff) status_small_pane_g3

0x1fa2,	// (0x00078008) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0008565e) status_small_pane_g

0x1fab,	// (0x00078011) status_small_pane_t1

0xe8bc,	// (0x00084922) main_video3_pane

0x2ae4,	// (0x00078b4a) cams_zoom_vslider_pane

0x2aec,	// (0x00078b52) image3_wide_pane_ParamLimits

0x2aec,	// (0x00078b52) image3_wide_pane

0x2b06,	// (0x00078b6c) image3_wide_small_pane

0x2b12,	// (0x00078b78) main_video3_pane_g1_ParamLimits

0x2b12,	// (0x00078b78) main_video3_pane_g1

0x2b2e,	// (0x00078b94) main_video3_pane_g2_ParamLimits

0x2b2e,	// (0x00078b94) main_video3_pane_g2

0x0001,

0xf848,	// (0x000858ae) main_video3_pane_g_ParamLimits

0xf848,	// (0x000858ae) main_video3_pane_g

0x2b4a,	// (0x00078bb0) main_video3_pane_t1_ParamLimits

0x2b4a,	// (0x00078bb0) main_video3_pane_t1

0x2b75,	// (0x00078bdb) main_video3_pane_t2_ParamLimits

0x2b75,	// (0x00078bdb) main_video3_pane_t2

0x2ba0,	// (0x00078c06) main_video3_pane_t3_ParamLimits

0x2ba0,	// (0x00078c06) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000858b3) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000858b3) main_video3_pane_t

0x2bcd,	// (0x00078c33) cams_zoom_vslider_pane_g1

0x2bd6,	// (0x00078c3c) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000858ba) cams_zoom_vslider_pane_g

0x2bde,	// (0x00078c44) small_slider_vertical_pane

0x23d5,	// (0x0007843b) small_slider_vertical_pane_g1

0x23d5,	// (0x0007843b) small_slider_vertical_pane_g2

0x2be6,	// (0x00078c4c) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000858bf) small_slider_vertical_pane_g

0xe8bc,	// (0x00084922) main_hwr_training_pane

0x2bef,	// (0x00078c55) hwr_training_instruct_pane_ParamLimits

0x2bef,	// (0x00078c55) hwr_training_instruct_pane

0xb3e7,	// (0x0008144d) hwr_training_navi_pane_ParamLimits

0xb3e7,	// (0x0008144d) hwr_training_navi_pane

0xb401,	// (0x00081467) hwr_training_write_pane_ParamLimits

0xb401,	// (0x00081467) hwr_training_write_pane

0xe8bc,	// (0x00084922) bg_frame_shadow_pane

0x2c26,	// (0x00078c8c) hwr_training_write_pane_g1

0x2c2e,	// (0x00078c94) hwr_training_write_pane_g2

0x2c36,	// (0x00078c9c) hwr_training_write_pane_g3

0x2c3e,	// (0x00078ca4) hwr_training_write_pane_g4

0x2c46,	// (0x00078cac) hwr_training_write_pane_g5

0x2c4e,	// (0x00078cb4) hwr_training_write_pane_g6

0x2c56,	// (0x00078cbc) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000858c6) hwr_training_write_pane_g

0xb439,	// (0x0008149f) hwr_training_navi_pane_g1_ParamLimits

0xb439,	// (0x0008149f) hwr_training_navi_pane_g1

0xb44b,	// (0x000814b1) hwr_training_navi_pane_g2_ParamLimits

0xb44b,	// (0x000814b1) hwr_training_navi_pane_g2

0xb45d,	// (0x000814c3) hwr_training_navi_pane_g3_ParamLimits

0xb45d,	// (0x000814c3) hwr_training_navi_pane_g3

0xb46d,	// (0x000814d3) hwr_training_navi_pane_g4_ParamLimits

0xb46d,	// (0x000814d3) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000858d5) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000858d5) hwr_training_navi_pane_g

0xb487,	// (0x000814ed) hwr_training_navi_pane_t1

0xb495,	// (0x000814fb) list_single_hwr_training_instruct_pane_ParamLimits

0xb495,	// (0x000814fb) list_single_hwr_training_instruct_pane

0x2c5e,	// (0x00078cc4) list_single_hwr_training_instruct_pane_t1

0x2315,	// (0x0007837b) bg_frame_shadow_pane_g1

0x2c6d,	// (0x00078cd3) bg_frame_shadow_pane_g2

0x2c75,	// (0x00078cdb) bg_frame_shadow_pane_g3

0x2c7d,	// (0x00078ce3) bg_frame_shadow_pane_g4

0x2c85,	// (0x00078ceb) bg_frame_shadow_pane_g5

0x2c8d,	// (0x00078cf3) bg_frame_shadow_pane_g6

0x2c95,	// (0x00078cfb) bg_frame_shadow_pane_g7

0x0043,	// (0x000760a9) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000858e0) bg_frame_shadow_pane_g

0xe8bc,	// (0x00084922) main_video_tele_dialer_pane

0xb4ba,	// (0x00081520) aid_size_cell_video_keypad_ParamLimits

0xb4ba,	// (0x00081520) aid_size_cell_video_keypad

0xb4ca,	// (0x00081530) grid_video_dialer_keypad_pane_ParamLimits

0xb4ca,	// (0x00081530) grid_video_dialer_keypad_pane

0xb4fe,	// (0x00081564) video_down_pane_cp_ParamLimits

0xb4fe,	// (0x00081564) video_down_pane_cp

0xb528,	// (0x0008158e) cell_video_dialer_keypad_pane_ParamLimits

0xb528,	// (0x0008158e) cell_video_dialer_keypad_pane

0x2c9d,	// (0x00078d03) bg_button_pane_cp08_ParamLimits

0x2c9d,	// (0x00078d03) bg_button_pane_cp08

0xb53d,	// (0x000815a3) cell_video_dialer_keypad_pane_g1_ParamLimits

0xb53d,	// (0x000815a3) cell_video_dialer_keypad_pane_g1

0xad26,	// (0x00080d8c) mup3_rocker2_pane_ParamLimits

0xad26,	// (0x00080d8c) mup3_rocker2_pane

0x23d5,	// (0x0007843b) mup3_rocker2_pane_g1

0x9c1a,	// (0x0007fc80) main_dialer2_pane

0xe8bc,	// (0x00084922) main_mp4_pane

0xb57c,	// (0x000815e2) main_mp4_pane_g1_ParamLimits

0xb57c,	// (0x000815e2) main_mp4_pane_g1

0xb58a,	// (0x000815f0) main_mp4_pane_g2_ParamLimits

0xb58a,	// (0x000815f0) main_mp4_pane_g2

0xb598,	// (0x000815fe) main_mp4_pane_g3_ParamLimits

0xb598,	// (0x000815fe) main_mp4_pane_g3

0xb5dd,	// (0x00081643) main_mp4_pane_g4_ParamLimits

0xb5dd,	// (0x00081643) main_mp4_pane_g4

0xb605,	// (0x0008166b) main_mp4_pane_g5_ParamLimits

0xb605,	// (0x0008166b) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x00085900) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x00085900) main_mp4_pane_g

0xb655,	// (0x000816bb) main_mp4_pane_t1_ParamLimits

0xb655,	// (0x000816bb) main_mp4_pane_t1

0xb6b1,	// (0x00081717) main_mp4_pane_t2_ParamLimits

0xb6b1,	// (0x00081717) main_mp4_pane_t2

0x2ca9,	// (0x00078d0f) main_mp4_pane_t3_ParamLimits

0x2ca9,	// (0x00078d0f) main_mp4_pane_t3

0xb703,	// (0x00081769) main_mp4_pane_t4_ParamLimits

0xb703,	// (0x00081769) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0008590d) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0008590d) main_mp4_pane_t

0xb747,	// (0x000817ad) mp4_progress_pane_ParamLimits

0xb747,	// (0x000817ad) mp4_progress_pane

0xb791,	// (0x000817f7) mp4_rocker_pane_ParamLimits

0xb791,	// (0x000817f7) mp4_rocker_pane

0x2cd1,	// (0x00078d37) mp4_progress_pane_t1

0x2cea,	// (0x00078d50) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x00085916) mp4_progress_pane_t

0x2d03,	// (0x00078d69) mup_progress_pane_cp04

0x23d5,	// (0x0007843b) mp4_rocker_pane_g1

0xb7b1,	// (0x00081817) aid_cell_size_keypad2_ParamLimits

0xb7b1,	// (0x00081817) aid_cell_size_keypad2

0xb7c1,	// (0x00081827) dialer2_ne_pane_ParamLimits

0xb7c1,	// (0x00081827) dialer2_ne_pane

0xb7cf,	// (0x00081835) grid_dialer2_keypad_pane_ParamLimits

0xb7cf,	// (0x00081835) grid_dialer2_keypad_pane

0x34c0,	// (0x00079526) bg_popup_call_pane_cp07_ParamLimits

0x34c0,	// (0x00079526) bg_popup_call_pane_cp07

0xb7df,	// (0x00081845) dialer2_ne_pane_t1_ParamLimits

0xb7df,	// (0x00081845) dialer2_ne_pane_t1

0xb804,	// (0x0008186a) cell_dialer2_keypad_pane_ParamLimits

0xb804,	// (0x0008186a) cell_dialer2_keypad_pane

0x2d21,	// (0x00078d87) bg_button_pane_pane_cp04_ParamLimits

0x2d21,	// (0x00078d87) bg_button_pane_pane_cp04

0xb819,	// (0x0008187f) cell_dialer2_keypad_pane_g1_ParamLimits

0xb819,	// (0x0008187f) cell_dialer2_keypad_pane_g1

0x79e0,	// (0x0007da46) aid_placing_vt_set_content_ParamLimits

0x79e0,	// (0x0007da46) aid_placing_vt_set_content

0x7a0c,	// (0x0007da72) aid_placing_vt_set_title_ParamLimits

0x7a0c,	// (0x0007da72) aid_placing_vt_set_title

0xe8bc,	// (0x00084922) main_image3_pane

0xb8b3,	// (0x00081919) area_side_right_pane_cp01_ParamLimits

0xb8b3,	// (0x00081919) area_side_right_pane_cp01

0xed69,	// (0x00084dcf) main_image3_pane_g1_ParamLimits

0xed69,	// (0x00084dcf) main_image3_pane_g1

0xb8e0,	// (0x00081946) main_image3_pane_g2_ParamLimits

0xb8e0,	// (0x00081946) main_image3_pane_g2

0xb8f9,	// (0x0008195f) main_image3_pane_g3_ParamLimits

0xb8f9,	// (0x0008195f) main_image3_pane_g3

0xb912,	// (0x00081978) main_image3_pane_g4_ParamLimits

0xb912,	// (0x00081978) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x00085925) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x00085925) main_image3_pane_g

0xb92b,	// (0x00081991) main_image3_pane_t1_ParamLimits

0xb92b,	// (0x00081991) main_image3_pane_t1

0xb950,	// (0x000819b6) main_image3_pane_t2_ParamLimits

0xb950,	// (0x000819b6) main_image3_pane_t2

0xb96f,	// (0x000819d5) main_image3_pane_t3_ParamLimits

0xb96f,	// (0x000819d5) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0008592e) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0008592e) main_image3_pane_t

0x3d36,	// (0x00079d9c) grid_sctrl_middle_pane_cp01_ParamLimits

0x3d36,	// (0x00079d9c) grid_sctrl_middle_pane_cp01

0xb9d0,	// (0x00081a36) cell_sctrl_middle_pane_cp01_ParamLimits

0xb9d0,	// (0x00081a36) cell_sctrl_middle_pane_cp01

0xb9e1,	// (0x00081a47) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xb9e1,	// (0x00081a47) cell_sctrl_middle_pane_cp01_g1

0xe8bc,	// (0x00084922) main_call4_pane

0xb9ee,	// (0x00081a54) aid_size_button_call4_ParamLimits

0xb9ee,	// (0x00081a54) aid_size_button_call4

0xba1e,	// (0x00081a84) call4_windows_pane_ParamLimits

0xba1e,	// (0x00081a84) call4_windows_pane

0xba38,	// (0x00081a9e) grid_call4_button_pane_ParamLimits

0xba38,	// (0x00081a9e) grid_call4_button_pane

0x2d2d,	// (0x00078d93) call4_windows_conf_pane

0x2d44,	// (0x00078daa) popup_call4_audio_first_window_ParamLimits

0x2d44,	// (0x00078daa) popup_call4_audio_first_window

0x2d90,	// (0x00078df6) popup_call4_audio_second_window_ParamLimits

0x2d90,	// (0x00078df6) popup_call4_audio_second_window

0x2da4,	// (0x00078e0a) popup_call4_audio_wait_window_ParamLimits

0x2da4,	// (0x00078e0a) popup_call4_audio_wait_window

0xba5c,	// (0x00081ac2) cell_call4_button_pane_ParamLimits

0xba5c,	// (0x00081ac2) cell_call4_button_pane

0xba81,	// (0x00081ae7) bg_button_pane_cp09_ParamLimits

0xba81,	// (0x00081ae7) bg_button_pane_cp09

0xba8d,	// (0x00081af3) cell_call4_button_pane_g1_ParamLimits

0xba8d,	// (0x00081af3) cell_call4_button_pane_g1

0xba9a,	// (0x00081b00) cell_call4_button_pane_t1_ParamLimits

0xba9a,	// (0x00081b00) cell_call4_button_pane_t1

0x2dec,	// (0x00078e52) popup_call4_audio_conf_window_ParamLimits

0x2dec,	// (0x00078e52) popup_call4_audio_conf_window

0xad59,	// (0x00080dbf) mup3_progress_pane_t1_ParamLimits

0xad78,	// (0x00080dde) mup3_progress_pane_t2_ParamLimits

0x26dc,	// (0x00078742) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x00085802) mup3_progress_pane_t_ParamLimits

0x26f9,	// (0x0007875f) mup_progress_pane_cp03_ParamLimits

0xb286,	// (0x000812ec) mup3_control_keys_pane_g4_copy1

0xb775,	// (0x000817db) mp4_rocker2_pane_ParamLimits

0xb775,	// (0x000817db) mp4_rocker2_pane

0x2e08,	// (0x00078e6e) mp4_rocker2_pane_g1

0x2e00,	// (0x00078e66) mp4_rocker2_pane_g2

0xbaac,	// (0x00081b12) mp4_rocker2_pane_g3

0xbab4,	// (0x00081b1a) mp4_rocker2_pane_g4

0xbabc,	// (0x00081b22) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x00085937) mp4_rocker2_pane_g

0xe8bc,	// (0x00084922) main_camera4_pane

0xe8bc,	// (0x00084922) main_video4_pane

0xb4da,	// (0x00081540) main_video_tele_dialer_pane_t1_ParamLimits

0xb4da,	// (0x00081540) main_video_tele_dialer_pane_t1

0xb4ec,	// (0x00081552) main_video_tele_dialer_pane_t2_ParamLimits

0xb4ec,	// (0x00081552) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000858f1) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000858f1) main_video_tele_dialer_pane_t

0xbadc,	// (0x00081b42) cam4_autofocus_pane_ParamLimits

0xbadc,	// (0x00081b42) cam4_autofocus_pane

0xbaf6,	// (0x00081b5c) cam4_image_uncrop_pane_ParamLimits

0xbaf6,	// (0x00081b5c) cam4_image_uncrop_pane

0xbb0d,	// (0x00081b73) cam4_indicators_pane_ParamLimits

0xbb0d,	// (0x00081b73) cam4_indicators_pane

0xbb29,	// (0x00081b8f) main_camera4_pane_g1_ParamLimits

0xbb29,	// (0x00081b8f) main_camera4_pane_g1

0xbb35,	// (0x00081b9b) main_camera4_pane_g2_ParamLimits

0xbb35,	// (0x00081b9b) main_camera4_pane_g2

0xbb35,	// (0x00081b9b) main_camera4_pane_g3_ParamLimits

0xbb35,	// (0x00081b9b) main_camera4_pane_g3

0xbb41,	// (0x00081ba7) main_camera4_pane_g4_ParamLimits

0xbb41,	// (0x00081ba7) main_camera4_pane_g4

0xbb4d,	// (0x00081bb3) main_camera4_pane_g5_ParamLimits

0xbb4d,	// (0x00081bb3) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x00085942) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x00085942) main_camera4_pane_g

0xbb67,	// (0x00081bcd) main_camera4_pane_t1_ParamLimits

0xbb67,	// (0x00081bcd) main_camera4_pane_t1

0x2641,	// (0x000786a7) bg_tb_trans_pane_cp06

0xbbb7,	// (0x00081c1d) cam4_indicators_pane_g1

0xbbc8,	// (0x00081c2e) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0008595d) cam4_indicators_pane_g

0xbbe6,	// (0x00081c4c) cam4_indicators_pane_t1

0xbc10,	// (0x00081c76) main_video4_pane_g1_ParamLimits

0xbc10,	// (0x00081c76) main_video4_pane_g1

0xbc1c,	// (0x00081c82) main_video4_pane_g2_ParamLimits

0xbc1c,	// (0x00081c82) main_video4_pane_g2

0xbc28,	// (0x00081c8e) main_video4_pane_g3_ParamLimits

0xbc28,	// (0x00081c8e) main_video4_pane_g3

0xbc34,	// (0x00081c9a) main_video4_pane_g4_ParamLimits

0xbc34,	// (0x00081c9a) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x00085964) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x00085964) main_video4_pane_g

0xbc54,	// (0x00081cba) vid4_indicators_pane_ParamLimits

0xbc54,	// (0x00081cba) vid4_indicators_pane

0xbc73,	// (0x00081cd9) video4_image_uncrop_cif_pane_ParamLimits

0xbc73,	// (0x00081cd9) video4_image_uncrop_cif_pane

0xbc82,	// (0x00081ce8) video4_image_uncrop_nhd_pane_ParamLimits

0xbc82,	// (0x00081ce8) video4_image_uncrop_nhd_pane

0xbaf6,	// (0x00081b5c) video4_image_uncrop_vga_pane_ParamLimits

0xbaf6,	// (0x00081b5c) video4_image_uncrop_vga_pane

0x0a50,	// (0x00076ab6) bg_tb_trans_pane_cp07

0xbc99,	// (0x00081cff) vid4_indicators_pane_g1

0xbcad,	// (0x00081d13) vid4_indicators_pane_g2

0xbcc1,	// (0x00081d27) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0008596f) vid4_indicators_pane_g

0xbcf0,	// (0x00081d56) vid4_indicators_pane_t1

0xbd07,	// (0x00081d6d) cam4_autofocus_pane_g1

0xbd0f,	// (0x00081d75) cam4_autofocus_pane_g2

0xbd17,	// (0x00081d7d) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0008597a) cam4_autofocus_pane_g

0xbd1f,	// (0x00081d85) cam4_autofocus_pane_g3_copy1

0xb50c,	// (0x00081572) video_down_pane_cp_t1

0xb51a,	// (0x00081580) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000858f6) video_down_pane_cp_t

0x3d36,	// (0x00079d9c) popup_vitu2_window_ParamLimits

0x3d36,	// (0x00079d9c) popup_vitu2_window

0xbd27,	// (0x00081d8d) aid_size_cell2_itu2_ParamLimits

0xbd27,	// (0x00081d8d) aid_size_cell2_itu2

0xbd49,	// (0x00081daf) aid_size_cell_itu2_ParamLimits

0xbd49,	// (0x00081daf) aid_size_cell_itu2

0x34c0,	// (0x00079526) bg_popup_window_pane_cp09_ParamLimits

0x34c0,	// (0x00079526) bg_popup_window_pane_cp09

0xbd8d,	// (0x00081df3) field_vitu2_entry_pane_ParamLimits

0xbd8d,	// (0x00081df3) field_vitu2_entry_pane

0xbdad,	// (0x00081e13) grid_vitu2_function_pane_ParamLimits

0xbdad,	// (0x00081e13) grid_vitu2_function_pane

0xbdf1,	// (0x00081e57) grid_vitu2_itu_pane_ParamLimits

0xbdf1,	// (0x00081e57) grid_vitu2_itu_pane

0xbe6d,	// (0x00081ed3) cell_vitu2_itu_pane_ParamLimits

0xbe6d,	// (0x00081ed3) cell_vitu2_itu_pane

0xbe86,	// (0x00081eec) cell_vitu2_function_pane_ParamLimits

0xbe86,	// (0x00081eec) cell_vitu2_function_pane

0x2e10,	// (0x00078e76) bg_popup_call_pane_cp08_ParamLimits

0x2e10,	// (0x00078e76) bg_popup_call_pane_cp08

0x2e27,	// (0x00078e8d) field_vitu2_entry_pane_g1

0x2e33,	// (0x00078e99) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x00085981) field_vitu2_entry_pane_g

0x5997,	// (0x0007b9fd) field_vitu2_entry_pane_t1_ParamLimits

0x5997,	// (0x0007b9fd) field_vitu2_entry_pane_t1

0x59c7,	// (0x0007ba2d) field_vitu2_entry_pane_t2_ParamLimits

0x59c7,	// (0x0007ba2d) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x00085988) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x00085988) field_vitu2_entry_pane_t

0xbec7,	// (0x00081f2d) bg_button_pane_cp010_ParamLimits

0xbec7,	// (0x00081f2d) bg_button_pane_cp010

0xbed5,	// (0x00081f3b) cell_vitu2_itu_pane_g1

0xbef5,	// (0x00081f5b) cell_vitu2_itu_pane_t1_ParamLimits

0xbef5,	// (0x00081f5b) cell_vitu2_itu_pane_t1

0x59e4,	// (0x0007ba4a) cell_vitu2_itu_pane_t2_ParamLimits

0x59e4,	// (0x0007ba4a) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x00085992) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x00085992) cell_vitu2_itu_pane_t

0x0a50,	// (0x00076ab6) bg_button_pane_cp011

0xbf41,	// (0x00081fa7) cell_vitu2_function_pane_g1

0xe8bc,	// (0x00084922) main_myfav_hc_pane

0xb9b1,	// (0x00081a17) popup_image3_note_pane_ParamLimits

0xb9b1,	// (0x00081a17) popup_image3_note_pane

0xb9bf,	// (0x00081a25) popup_image3_tool_bar_pane_ParamLimits

0xb9bf,	// (0x00081a25) popup_image3_tool_bar_pane

0x5a5a,	// (0x0007bac0) cell_vitu2_itu_pane_t3_ParamLimits

0x5a5a,	// (0x0007bac0) cell_vitu2_itu_pane_t3

0xe8bc,	// (0x00084922) bg_popup_trans_pane

0x2e55,	// (0x00078ebb) grid_image3_tool_bar_pane

0x2e5f,	// (0x00078ec5) bg_popup_trans_pane_g1

0x03a8,	// (0x0007640e) bg_popup_trans_pane_g2

0x2e67,	// (0x00078ecd) bg_popup_trans_pane_g3

0x2e6f,	// (0x00078ed5) bg_popup_trans_pane_g4

0x2e77,	// (0x00078edd) bg_popup_trans_pane_g5

0x2e7f,	// (0x00078ee5) bg_popup_trans_pane_g6

0x2e87,	// (0x00078eed) bg_popup_trans_pane_g7

0x2e8f,	// (0x00078ef5) bg_popup_trans_pane_g8

0x0388,	// (0x000763ee) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x00085999) bg_popup_trans_pane_g

0x2e97,	// (0x00078efd) cell_image3_tool_bar_pane_ParamLimits

0x2e97,	// (0x00078efd) cell_image3_tool_bar_pane

0x23d5,	// (0x0007843b) cell_image3_tool_bar_pane_g1

0xe8bc,	// (0x00084922) bg_popup_trans_pane_cp1

0x2eab,	// (0x00078f11) popup_image3_note_pane_t1

0x2eb9,	// (0x00078f1f) popup_image3_note_pane_t2

0x2ec7,	// (0x00078f2d) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000859ac) popup_image3_note_pane_t

0x2ed5,	// (0x00078f3b) popup_image3_note_pane_t3_copy1

0xbf55,	// (0x00081fbb) bg_myfav_hc_instruction_pane_ParamLimits

0xbf55,	// (0x00081fbb) bg_myfav_hc_instruction_pane

0xbf6d,	// (0x00081fd3) cell_myfav_contact_pane_ParamLimits

0xbf6d,	// (0x00081fd3) cell_myfav_contact_pane

0xbf87,	// (0x00081fed) cell_myfav_contact_pane_cp1_ParamLimits

0xbf87,	// (0x00081fed) cell_myfav_contact_pane_cp1

0xbf9f,	// (0x00082005) cell_myfav_contact_pane_cp2_ParamLimits

0xbf9f,	// (0x00082005) cell_myfav_contact_pane_cp2

0xbfb7,	// (0x0008201d) cell_myfav_contact_pane_cp3_ParamLimits

0xbfb7,	// (0x0008201d) cell_myfav_contact_pane_cp3

0xbfce,	// (0x00082034) cell_myfav_contact_pane_cp4_ParamLimits

0xbfce,	// (0x00082034) cell_myfav_contact_pane_cp4

0xbfe4,	// (0x0008204a) cell_myfav_contact_pane_cp5_ParamLimits

0xbfe4,	// (0x0008204a) cell_myfav_contact_pane_cp5

0xbff8,	// (0x0008205e) cell_myfav_contact_pane_cp6_ParamLimits

0xbff8,	// (0x0008205e) cell_myfav_contact_pane_cp6

0xc00c,	// (0x00082072) cell_myfav_contact_pane_cp7_ParamLimits

0xc00c,	// (0x00082072) cell_myfav_contact_pane_cp7

0x2ee3,	// (0x00078f49) listscroll_gen_pane_cp05

0xc024,	// (0x0008208a) main_myfav_hc_pane_g1_ParamLimits

0xc024,	// (0x0008208a) main_myfav_hc_pane_g1

0xc03a,	// (0x000820a0) main_myfav_hc_pane_g2_ParamLimits

0xc03a,	// (0x000820a0) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000859b3) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000859b3) main_myfav_hc_pane_g

0xc068,	// (0x000820ce) main_myfav_hc_pane_t1_ParamLimits

0xc068,	// (0x000820ce) main_myfav_hc_pane_t1

0x2eec,	// (0x00078f52) main_myfav_hc_pane_t2_ParamLimits

0x2eec,	// (0x00078f52) main_myfav_hc_pane_t2

0x2efe,	// (0x00078f64) main_myfav_hc_pane_t3_ParamLimits

0x2efe,	// (0x00078f64) main_myfav_hc_pane_t3

0xc07f,	// (0x000820e5) main_myfav_hc_pane_t4_ParamLimits

0xc07f,	// (0x000820e5) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000859ba) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000859ba) main_myfav_hc_pane_t

0x23d5,	// (0x0007843b) bg_myfav_hc_instruction_pane_g1

0x2f10,	// (0x00078f76) cell_myfav_contact_pane_g1_ParamLimits

0x2f10,	// (0x00078f76) cell_myfav_contact_pane_g1

0x2f10,	// (0x00078f76) cell_myfav_contact_pane_g2_ParamLimits

0x2f10,	// (0x00078f76) cell_myfav_contact_pane_g2

0x2f1c,	// (0x00078f82) cell_myfav_contact_pane_g3_ParamLimits

0x2f1c,	// (0x00078f82) cell_myfav_contact_pane_g3

0x26c6,	// (0x0007872c) cell_myfav_contact_pane_g4_ParamLimits

0x26c6,	// (0x0007872c) cell_myfav_contact_pane_g4

0x2f29,	// (0x00078f8f) cell_myfav_contact_pane_g5_ParamLimits

0x2f29,	// (0x00078f8f) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000859c5) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000859c5) cell_myfav_contact_pane_g

0xc050,	// (0x000820b6) main_myfav_hc_pane_g3_ParamLimits

0xc050,	// (0x000820b6) main_myfav_hc_pane_g3

0x6ac9,	// (0x0007cb2f) popup_adpt_find_window

0xc0a9,	// (0x0008210f) afind_page_pane_ParamLimits

0xc0a9,	// (0x0008210f) afind_page_pane

0xc0b6,	// (0x0008211c) aid_size_cell_afind_ParamLimits

0xc0b6,	// (0x0008211c) aid_size_cell_afind

0xc0d0,	// (0x00082136) bg_popup_sub_pane_cp09_ParamLimits

0xc0d0,	// (0x00082136) bg_popup_sub_pane_cp09

0xc0dd,	// (0x00082143) find_pane_cp01_ParamLimits

0xc0dd,	// (0x00082143) find_pane_cp01

0x2f35,	// (0x00078f9b) grid_afind_control_pane_ParamLimits

0x2f35,	// (0x00078f9b) grid_afind_control_pane

0xc0ea,	// (0x00082150) grid_afind_pane_ParamLimits

0xc0ea,	// (0x00082150) grid_afind_pane

0xc106,	// (0x0008216c) cell_afind_pane_ParamLimits

0xc106,	// (0x0008216c) cell_afind_pane

0x23d5,	// (0x0007843b) afind_page_pane_g1

0xc14e,	// (0x000821b4) afind_page_pane_g2

0xc157,	// (0x000821bd) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000859d0) afind_page_pane_g

0xc160,	// (0x000821c6) afind_page_pane_t1

0x2f49,	// (0x00078faf) cell_afind_grid_control_pane_ParamLimits

0x2f49,	// (0x00078faf) cell_afind_grid_control_pane

0x2d21,	// (0x00078d87) bg_button_pane_cp69_ParamLimits

0x2d21,	// (0x00078d87) bg_button_pane_cp69

0xc180,	// (0x000821e6) cell_afind_pane_g1_ParamLimits

0xc180,	// (0x000821e6) cell_afind_pane_g1

0xc18d,	// (0x000821f3) cell_afind_pane_t1_ParamLimits

0xc18d,	// (0x000821f3) cell_afind_pane_t1

0x01a1,	// (0x00076207) bg_button_pane_cp72

0x2f58,	// (0x00078fbe) cell_afind_grid_control_pane_g1

0x9798,	// (0x0007f7fe) aid_image_placing_area_ParamLimits

0x9798,	// (0x0007f7fe) aid_image_placing_area

0x29ef,	// (0x00078a55) field_vitu_entry_pane_g1_ParamLimits

0x29ef,	// (0x00078a55) field_vitu_entry_pane_g1

0x29fb,	// (0x00078a61) field_vitu_entry_pane_g2_ParamLimits

0x29fb,	// (0x00078a61) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x00085881) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x00085881) field_vitu_entry_pane_g

0xb30e,	// (0x00081374) cell_vitu_itu_pane_g1_ParamLimits

0xb350,	// (0x000813b6) cell_vitu_itu_pane_t3_ParamLimits

0xb350,	// (0x000813b6) cell_vitu_itu_pane_t3

0x2cd1,	// (0x00078d37) mp4_progress_pane_t1_ParamLimits

0x2cea,	// (0x00078d50) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x00085916) mp4_progress_pane_t_ParamLimits

0x2d03,	// (0x00078d69) mup_progress_pane_cp04_ParamLimits

0xc093,	// (0x000820f9) main_myfav_hc_pane_t5_ParamLimits

0xc093,	// (0x000820f9) main_myfav_hc_pane_t5

0x5679,	// (0x0007b6df) aid_zoom_text_primary

0x6ac9,	// (0x0007cb2f) popup_adpt_find_window_ParamLimits

0x0a50,	// (0x00076ab6) main_cam_set_pane

0xbb1b,	// (0x00081b81) cam4_zoom_pane_ParamLimits

0xbb1b,	// (0x00081b81) cam4_zoom_pane

0xc19f,	// (0x00082205) main_cam_set_pane_g1_ParamLimits

0xc19f,	// (0x00082205) main_cam_set_pane_g1

0xc1ad,	// (0x00082213) main_cam_set_pane_g2_ParamLimits

0xc1ad,	// (0x00082213) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000859d7) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000859d7) main_cam_set_pane_g

0xc1b9,	// (0x0008221f) main_cam_set_pane_t1_ParamLimits

0xc1b9,	// (0x0008221f) main_cam_set_pane_t1

0xc1d5,	// (0x0008223b) main_cset_listscroll_pane_ParamLimits

0xc1d5,	// (0x0008223b) main_cset_listscroll_pane

0xc200,	// (0x00082266) main_cset_slider_pane_ParamLimits

0xc200,	// (0x00082266) main_cset_slider_pane

0x2f69,	// (0x00078fcf) main_cset_list_pane_ParamLimits

0x2f69,	// (0x00078fcf) main_cset_list_pane

0x2f79,	// (0x00078fdf) scroll_pane_cp028

0xc21f,	// (0x00082285) aid_area_touch_slider

0xc23b,	// (0x000822a1) cset_slider_pane

0xc265,	// (0x000822cb) main_cset_slider_pane_g1

0xc27a,	// (0x000822e0) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000859dc) main_cset_slider_pane_g

0x2fb2,	// (0x00079018) main_cset_slider_pane_t1

0xc33c,	// (0x000823a2) main_cset_slider_pane_t2

0xc356,	// (0x000823bc) main_cset_slider_pane_t3

0xc370,	// (0x000823d6) main_cset_slider_pane_t4

0xc38a,	// (0x000823f0) main_cset_slider_pane_t5

0xc3a8,	// (0x0008240e) main_cset_slider_pane_t6

0xc3bf,	// (0x00082425) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x00085a01) main_cset_slider_pane_t

0xc4cb,	// (0x00082531) cset_list_set_pane_ParamLimits

0xc4cb,	// (0x00082531) cset_list_set_pane

0xc4e1,	// (0x00082547) aid_position_infowindow_above

0xc4e9,	// (0x0008254f) aid_position_infowindow_below

0xc4f1,	// (0x00082557) cset_list_set_pane_g1_ParamLimits

0xc4f1,	// (0x00082557) cset_list_set_pane_g1

0x5aac,	// (0x0007bb12) cset_list_set_pane_g3_ParamLimits

0x5aac,	// (0x0007bb12) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x00085a20) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x00085a20) cset_list_set_pane_g

0x5abb,	// (0x0007bb21) cset_list_set_pane_t1_ParamLimits

0x5abb,	// (0x0007bb21) cset_list_set_pane_t1

0x0a50,	// (0x00076ab6) list_highlight_pane_cp021_ParamLimits

0x0a50,	// (0x00076ab6) list_highlight_pane_cp021

0x0cff,	// (0x00076d65) cset_slider_pane_g1

0x0d11,	// (0x00076d77) cset_slider_pane_g2

0x0d08,	// (0x00076d6e) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x00085a25) cset_slider_pane_g

0xc4fd,	// (0x00082563) aid_area_touch_cam4_zoom

0xc505,	// (0x0008256b) cam4_zoom_cont_pane

0xc50d,	// (0x00082573) cam4_zoom_pane_g1

0xc515,	// (0x0008257b) cam4_zoom_pane_g2

0xc51d,	// (0x00082583) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x00085a2c) cam4_zoom_pane_g

0x32f6,	// (0x0007935c) cam4_zoom_cont_pane_g1

0x32ff,	// (0x00079365) cam4_zoom_cont_pane_g2

0x3308,	// (0x0007936e) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x00085a33) cam4_zoom_cont_pane_g

0xba08,	// (0x00081a6e) call4_image_pane_ParamLimits

0xba08,	// (0x00081a6e) call4_image_pane

0x2d2d,	// (0x00078d93) call4_windows_conf_pane_ParamLimits

0x2d6e,	// (0x00078dd4) popup_call4_audio_in_window_ParamLimits

0x2d6e,	// (0x00078dd4) popup_call4_audio_in_window

0xe8bc,	// (0x00084922) bg_popup_call2_act_pane_cp02

0x2de4,	// (0x00078e4a) call4_list_conf_pane

0x23d5,	// (0x0007843b) call4_image_pane_g1

0x23d5,	// (0x0007843b) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x00085742) call4_image_pane_g

0x3052,	// (0x000790b8) list_single_graphic_popup_conf4_pane_ParamLimits

0x3052,	// (0x000790b8) list_single_graphic_popup_conf4_pane

0xe8bc,	// (0x00084922) list_highlight_pane_cp022

0x3065,	// (0x000790cb) list_single_graphic_popup_conf4_pane_g1

0x08c2,	// (0x00076928) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x00085a3a) list_single_graphic_popup_conf4_pane_g

0x306d,	// (0x000790d3) list_single_graphic_popup_conf4_pane_t1

0x7b70,	// (0x0007dbd6) popup_vtel_slider_window_ParamLimits

0x7b70,	// (0x0007dbd6) popup_vtel_slider_window

0x2d0f,	// (0x00078d75) dialer2_ne_pane_t2_ParamLimits

0x2d0f,	// (0x00078d75) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0008591b) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0008591b) dialer2_ne_pane_t

0x0a50,	// (0x00076ab6) bg_popup_sub_pane_cp010_ParamLimits

0x0a50,	// (0x00076ab6) bg_popup_sub_pane_cp010

0xc525,	// (0x0008258b) popup_vtel_slider_window_g1_ParamLimits

0xc525,	// (0x0008258b) popup_vtel_slider_window_g1

0xc531,	// (0x00082597) popup_vtel_slider_window_g2_ParamLimits

0xc531,	// (0x00082597) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x00085a3f) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x00085a3f) popup_vtel_slider_window_g

0xc579,	// (0x000825df) vtel_slider_pane_ParamLimits

0xc579,	// (0x000825df) vtel_slider_pane

0xc588,	// (0x000825ee) vtel_slider_pane_g1_ParamLimits

0xc588,	// (0x000825ee) vtel_slider_pane_g1

0xc595,	// (0x000825fb) vtel_slider_pane_g2_ParamLimits

0xc595,	// (0x000825fb) vtel_slider_pane_g2

0xc5a2,	// (0x00082608) vtel_slider_pane_g3_ParamLimits

0xc5a2,	// (0x00082608) vtel_slider_pane_g3

0xc588,	// (0x000825ee) vtel_slider_pane_g4_ParamLimits

0xc588,	// (0x000825ee) vtel_slider_pane_g4

0xc5af,	// (0x00082615) vtel_slider_pane_g5_ParamLimits

0xc5af,	// (0x00082615) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x00085a48) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x00085a48) vtel_slider_pane_g

0x0a50,	// (0x00076ab6) main_gallery2_pane

0xbd6f,	// (0x00081dd5) aid_size_row_itut2_dropdow_list_ParamLimits

0xbd6f,	// (0x00081dd5) aid_size_row_itut2_dropdow_list

0xbdcf,	// (0x00081e35) grid_vitu2_function_top_pane_ParamLimits

0xbdcf,	// (0x00081e35) grid_vitu2_function_top_pane

0xbe29,	// (0x00081e8f) popup_vitu2_dropdown_list_window_ParamLimits

0xbe29,	// (0x00081e8f) popup_vitu2_dropdown_list_window

0xbe49,	// (0x00081eaf) popup_vitu2_match_list_window

0xc5bc,	// (0x00082622) cell_vitu2_function_top_pane_ParamLimits

0xc5bc,	// (0x00082622) cell_vitu2_function_top_pane

0xc5d6,	// (0x0008263c) cell_vitu2_function_top_pane_cp01_ParamLimits

0xc5d6,	// (0x0008263c) cell_vitu2_function_top_pane_cp01

0xc5f2,	// (0x00082658) cell_vitu2_function_top_wide_pane_ParamLimits

0xc5f2,	// (0x00082658) cell_vitu2_function_top_wide_pane

0x0a50,	// (0x00076ab6) bg_button_pane_cp012

0xc60e,	// (0x00082674) cell_vitu2_function_top_pane_g1

0xc622,	// (0x00082688) bg_button_pane_cp013_ParamLimits

0xc622,	// (0x00082688) bg_button_pane_cp013

0xc63e,	// (0x000826a4) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc63e,	// (0x000826a4) cell_vitu2_function_top_wide_pane_g1

0x3d36,	// (0x00079d9c) bg_popup_sub_pane_cp20

0xc656,	// (0x000826bc) list_vitu2_match_list_pane

0x2e5f,	// (0x00078ec5) bg_popup_sub_pane_cp20_g1

0x2e67,	// (0x00078ecd) bg_popup_sub_pane_cp20_g2

0x03a8,	// (0x0007640e) bg_popup_sub_pane_cp20_g3

0x2e6f,	// (0x00078ed5) bg_popup_sub_pane_cp20_g4

0x0388,	// (0x000763ee) bg_popup_sub_pane_cp20_g5

0x3083,	// (0x000790e9) bg_popup_sub_pane_cp20_g6

0x2e7f,	// (0x00078ee5) bg_popup_sub_pane_cp20_g7

0x2e87,	// (0x00078eed) bg_popup_sub_pane_cp20_g8

0x2e8f,	// (0x00078ef5) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x00085a53) bg_popup_sub_pane_cp20_g

0xc66e,	// (0x000826d4) list_vitu2_match_list_item_pane_ParamLimits

0xc66e,	// (0x000826d4) list_vitu2_match_list_item_pane

0xc680,	// (0x000826e6) list_vitu2_match_list_item_pane_t1

0xe8bc,	// (0x00084922) bg_popup_sub_pane_cp21

0x07ea,	// (0x00076850) grid_vitu2_dropdown_list_pane

0xc69a,	// (0x00082700) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xc69a,	// (0x00082700) cell_vitu2_dropdown_list_char_pane

0xc6bb,	// (0x00082721) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xc6bb,	// (0x00082721) cell_vitu2_dropdown_list_ctrl_pane

0x309d,	// (0x00079103) cell_vitu2_dropdown_list_char_pane_g1

0x3094,	// (0x000790fa) cell_vitu2_dropdown_list_char_pane_g2

0x308b,	// (0x000790f1) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x00085a70) cell_vitu2_dropdown_list_char_pane_g

0xc6e7,	// (0x0008274d) cell_vitu2_dropdown_list_char_pane_t1

0xc6f5,	// (0x0008275b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc6f5,	// (0x0008275b) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc705,	// (0x0008276b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc705,	// (0x0008276b) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc716,	// (0x0008277c) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc716,	// (0x0008277c) cell_vitu2_dropdown_list_ctrl_pane_g3

0xc726,	// (0x0008278c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xc726,	// (0x0008278c) cell_vitu2_dropdown_list_ctrl_pane_g4

0x2641,	// (0x000786a7) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x2641,	// (0x000786a7) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x00085a77) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x00085a77) cell_vitu2_dropdown_list_ctrl_pane_g

0xc742,	// (0x000827a8) aid_size_cell_gallery2_ParamLimits

0xc742,	// (0x000827a8) aid_size_cell_gallery2

0xc75c,	// (0x000827c2) grid_gallery2_pane_ParamLimits

0xc75c,	// (0x000827c2) grid_gallery2_pane

0xb197,	// (0x000811fd) scroll_pane_cp029_ParamLimits

0xb197,	// (0x000811fd) scroll_pane_cp029

0xc773,	// (0x000827d9) cell_gallery2_pane_ParamLimits

0xc773,	// (0x000827d9) cell_gallery2_pane

0x30a6,	// (0x0007910c) cell_gallery2_pane_g2

0x41c0,	// (0x0007a226) cell_gallery2_pane_g3

0x30ae,	// (0x00079114) cell_gallery2_pane_g4

0x30b6,	// (0x0007911c) cell_gallery2_pane_g5

0x014f,	// (0x000761b5) grid_highlight_pane_cp10

0xbe49,	// (0x00081eaf) popup_vitu2_match_list_window_ParamLimits

0xbe5d,	// (0x00081ec3) popup_vitu2_query_window_ParamLimits

0xbe5d,	// (0x00081ec3) popup_vitu2_query_window

0xe8bc,	// (0x00084922) bg_vitu2_candi_button_pane

0x309d,	// (0x00079103) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x3094,	// (0x000790fa) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x308b,	// (0x000790f1) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5b16,	// (0x0007bb7c) bg_button_pane_cp015

0xc7c7,	// (0x0008282d) bg_button_pane_cp016

0xc7da,	// (0x00082840) bg_button_pane_cp017

0x1fcd,	// (0x00078033) bg_popup_sub_pane_cp22

0x30be,	// (0x00079124) popup_vitu2_query_window_g1

0x5b49,	// (0x0007bbaf) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x00085a82) popup_vitu2_query_window_g

0x5b66,	// (0x0007bbcc) popup_vitu2_query_window_t1_ParamLimits

0x5b66,	// (0x0007bbcc) popup_vitu2_query_window_t1

0x5b99,	// (0x0007bbff) popup_vitu2_query_window_t2_ParamLimits

0x5b99,	// (0x0007bbff) popup_vitu2_query_window_t2

0x5bab,	// (0x0007bc11) popup_vitu2_query_window_t3_ParamLimits

0x5bab,	// (0x0007bc11) popup_vitu2_query_window_t3

0xc7fe,	// (0x00082864) popup_vitu2_query_window_t4_ParamLimits

0xc7fe,	// (0x00082864) popup_vitu2_query_window_t4

0xc81f,	// (0x00082885) popup_vitu2_query_window_t5_ParamLimits

0xc81f,	// (0x00082885) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x00085a89) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x00085a89) popup_vitu2_query_window_t

0x2f61,	// (0x00078fc7) main_cset_text_pane

0xc21f,	// (0x00082285) aid_area_touch_slider_ParamLimits

0xc23b,	// (0x000822a1) cset_slider_pane_ParamLimits

0xc265,	// (0x000822cb) main_cset_slider_pane_g1_ParamLimits

0xc27a,	// (0x000822e0) main_cset_slider_pane_g2_ParamLimits

0x2f82,	// (0x00078fe8) main_cset_slider_pane_g3_ParamLimits

0x2f82,	// (0x00078fe8) main_cset_slider_pane_g3

0xc28f,	// (0x000822f5) main_cset_slider_pane_g4_ParamLimits

0xc28f,	// (0x000822f5) main_cset_slider_pane_g4

0xc29e,	// (0x00082304) main_cset_slider_pane_g5_ParamLimits

0xc29e,	// (0x00082304) main_cset_slider_pane_g5

0xc2ac,	// (0x00082312) main_cset_slider_pane_g6_ParamLimits

0xc2ac,	// (0x00082312) main_cset_slider_pane_g6

0xf976,	// (0x000859dc) main_cset_slider_pane_g_ParamLimits

0x2fb2,	// (0x00079018) main_cset_slider_pane_t1_ParamLimits

0xc33c,	// (0x000823a2) main_cset_slider_pane_t2_ParamLimits

0xc356,	// (0x000823bc) main_cset_slider_pane_t3_ParamLimits

0xc370,	// (0x000823d6) main_cset_slider_pane_t4_ParamLimits

0xc38a,	// (0x000823f0) main_cset_slider_pane_t5_ParamLimits

0xc3a8,	// (0x0008240e) main_cset_slider_pane_t6_ParamLimits

0xc3bf,	// (0x00082425) main_cset_slider_pane_t7_ParamLimits

0xc3ed,	// (0x00082453) main_cset_slider_pane_t8_ParamLimits

0xc3ed,	// (0x00082453) main_cset_slider_pane_t8

0xc415,	// (0x0008247b) main_cset_slider_pane_t9_ParamLimits

0xc415,	// (0x0008247b) main_cset_slider_pane_t9

0xc43d,	// (0x000824a3) main_cset_slider_pane_t10_ParamLimits

0xc43d,	// (0x000824a3) main_cset_slider_pane_t10

0xc465,	// (0x000824cb) main_cset_slider_pane_t11_ParamLimits

0xc465,	// (0x000824cb) main_cset_slider_pane_t11

0xc48f,	// (0x000824f5) main_cset_slider_pane_t12_ParamLimits

0xc48f,	// (0x000824f5) main_cset_slider_pane_t12

0xc4ac,	// (0x00082512) main_cset_slider_pane_t13_ParamLimits

0xc4ac,	// (0x00082512) main_cset_slider_pane_t13

0xf99b,	// (0x00085a01) main_cset_slider_pane_t_ParamLimits

0xe8bc,	// (0x00084922) bg_popup_sub_pane_cp011

0x30ca,	// (0x00079130) main_cset_text_pane_g1

0x30d2,	// (0x00079138) main_cset_text_pane_t1

0x30e0,	// (0x00079146) main_cset_text_pane_t2

0x30ee,	// (0x00079154) main_cset_text_pane_t3

0x30fc,	// (0x00079162) main_cset_text_pane_t4

0x310a,	// (0x00079170) main_cset_text_pane_t5

0x3118,	// (0x0007917e) main_cset_text_pane_t6

0x3126,	// (0x0007918c) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x00085a98) main_cset_text_pane_t

0xe8bc,	// (0x00084922) main_cam4_burst_pane

0xe8bc,	// (0x00084922) main_cam5_pane

0xc16e,	// (0x000821d4) bg_button_pane_cp019

0xc177,	// (0x000821dd) bg_button_pane_cp020

0x2f8e,	// (0x00078ff4) main_cset_slider_pane_g7_ParamLimits

0x2f8e,	// (0x00078ff4) main_cset_slider_pane_g7

0x2f9a,	// (0x00079000) main_cset_slider_pane_g8_ParamLimits

0x2f9a,	// (0x00079000) main_cset_slider_pane_g8

0xc2c0,	// (0x00082326) main_cset_slider_pane_g9_ParamLimits

0xc2c0,	// (0x00082326) main_cset_slider_pane_g9

0xc2cc,	// (0x00082332) main_cset_slider_pane_g10_ParamLimits

0xc2cc,	// (0x00082332) main_cset_slider_pane_g10

0xc2d8,	// (0x0008233e) main_cset_slider_pane_g11_ParamLimits

0xc2d8,	// (0x0008233e) main_cset_slider_pane_g11

0xc2e4,	// (0x0008234a) main_cset_slider_pane_g12_ParamLimits

0xc2e4,	// (0x0008234a) main_cset_slider_pane_g12

0xc2f0,	// (0x00082356) main_cset_slider_pane_g13_ParamLimits

0xc2f0,	// (0x00082356) main_cset_slider_pane_g13

0xc2fc,	// (0x00082362) main_cset_slider_pane_g14_ParamLimits

0xc2fc,	// (0x00082362) main_cset_slider_pane_g14

0xc308,	// (0x0008236e) main_cset_slider_pane_g15_ParamLimits

0xc308,	// (0x0008236e) main_cset_slider_pane_g15

0x2fe0,	// (0x00079046) main_cset_slider_pane_t14_ParamLimits

0x2fe0,	// (0x00079046) main_cset_slider_pane_t14

0x3019,	// (0x0007907f) main_cset_slider_pane_t15_ParamLimits

0x3019,	// (0x0007907f) main_cset_slider_pane_t15

0xc840,	// (0x000828a6) aid_cam4_burst_size_cell_ParamLimits

0xc840,	// (0x000828a6) aid_cam4_burst_size_cell

0xc85c,	// (0x000828c2) grid_cam4_burst_pane_ParamLimits

0xc85c,	// (0x000828c2) grid_cam4_burst_pane

0xc88c,	// (0x000828f2) linegrid_cam4_burst_pane_ParamLimits

0xc88c,	// (0x000828f2) linegrid_cam4_burst_pane

0xc8ac,	// (0x00082912) scroll_pane_cp30_ParamLimits

0xc8ac,	// (0x00082912) scroll_pane_cp30

0xc8b8,	// (0x0008291e) cell_cam4_burst_pane_ParamLimits

0xc8b8,	// (0x0008291e) cell_cam4_burst_pane

0x3140,	// (0x000791a6) linegrid_cam4_burst_pane_g1_ParamLimits

0x3140,	// (0x000791a6) linegrid_cam4_burst_pane_g1

0xc8f4,	// (0x0008295a) linegrid_cam4_burst_pane_g2_ParamLimits

0xc8f4,	// (0x0008295a) linegrid_cam4_burst_pane_g2

0x314d,	// (0x000791b3) linegrid_cam4_burst_pane_g3_ParamLimits

0x314d,	// (0x000791b3) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x00085aa7) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x00085aa7) linegrid_cam4_burst_pane_g

0xc905,	// (0x0008296b) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc905,	// (0x0008296b) linegrid_cam4_burst_pane_g3_copy1

0x315a,	// (0x000791c0) linegrid_cam4_burst_pane_g4_ParamLimits

0x315a,	// (0x000791c0) linegrid_cam4_burst_pane_g4

0xc91f,	// (0x00082985) linegrid_cam4_burst_pane_g5_ParamLimits

0xc91f,	// (0x00082985) linegrid_cam4_burst_pane_g5

0xc930,	// (0x00082996) linegrid_cam4_burst_pane_g6_ParamLimits

0xc930,	// (0x00082996) linegrid_cam4_burst_pane_g6

0x3167,	// (0x000791cd) linegrid_cam4_burst_pane_g7_ParamLimits

0x3167,	// (0x000791cd) linegrid_cam4_burst_pane_g7

0xc941,	// (0x000829a7) cell_cam4_burst_pane_g1

0x3180,	// (0x000791e6) main_cam5_pane_t1_ParamLimits

0x3180,	// (0x000791e6) main_cam5_pane_t1

0x3192,	// (0x000791f8) main_cam5_pane_t2_ParamLimits

0x3192,	// (0x000791f8) main_cam5_pane_t2

0x31a4,	// (0x0007920a) main_cam5_pane_t3_ParamLimits

0x31a4,	// (0x0007920a) main_cam5_pane_t3

0x31b6,	// (0x0007921c) main_cam5_pane_t4_ParamLimits

0x31b6,	// (0x0007921c) main_cam5_pane_t4

0x31ce,	// (0x00079234) main_cam5_pane_t5_ParamLimits

0x31ce,	// (0x00079234) main_cam5_pane_t5

0x31e2,	// (0x00079248) main_cam5_pane_t6_ParamLimits

0x31e2,	// (0x00079248) main_cam5_pane_t6

0x31f6,	// (0x0007925c) main_cam5_pane_t7_ParamLimits

0x31f6,	// (0x0007925c) main_cam5_pane_t7

0x3208,	// (0x0007926e) main_cam5_pane_t8_ParamLimits

0x3208,	// (0x0007926e) main_cam5_pane_t8

0x3224,	// (0x0007928a) main_cam5_pane_t9_ParamLimits

0x3224,	// (0x0007928a) main_cam5_pane_t9

0x3236,	// (0x0007929c) main_cam5_pane_t10_ParamLimits

0x3236,	// (0x0007929c) main_cam5_pane_t10

0x3248,	// (0x000792ae) main_cam5_pane_t11_ParamLimits

0x3248,	// (0x000792ae) main_cam5_pane_t11

0x325a,	// (0x000792c0) main_cam5_pane_t12_ParamLimits

0x325a,	// (0x000792c0) main_cam5_pane_t12

0x326f,	// (0x000792d5) main_cam5_pane_t13_ParamLimits

0x326f,	// (0x000792d5) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x00085ab3) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x00085ab3) main_cam5_pane_t

0x6b7f,	// (0x0007cbe5) popup_scut_keymap_window_ParamLimits

0x6b7f,	// (0x0007cbe5) popup_scut_keymap_window

0xc954,	// (0x000829ba) aid_size_cell_brow_shortcut

0x014f,	// (0x000761b5) bg_popup_window_pane_cp010

0xc960,	// (0x000829c6) grid_scut_pane

0xc96c,	// (0x000829d2) cell_scut_pane_ParamLimits

0xc96c,	// (0x000829d2) cell_scut_pane

0xc983,	// (0x000829e9) cell_scut_pane_g1

0x328c,	// (0x000792f2) cell_scut_pane_t1

0x329b,	// (0x00079301) cell_scut_pane_t2

0xc98c,	// (0x000829f2) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x00085ace) cell_scut_pane_t

0xa978,	// (0x000809de) main_mup3_pane_g8_ParamLimits

0xa978,	// (0x000809de) main_mup3_pane_g8

0xbd7d,	// (0x00081de3) area_vitu2_query_pane_ParamLimits

0xbd7d,	// (0x00081de3) area_vitu2_query_pane

0x5b28,	// (0x0007bb8e) input_focus_pane_cp08

0x32aa,	// (0x00079310) area_vitu2_query_pane_g1

0x5c29,	// (0x0007bc8f) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x00085ad5) area_vitu2_query_pane_g

0xc99a,	// (0x00082a00) area_vitu2_query_pane_t1_ParamLimits

0xc99a,	// (0x00082a00) area_vitu2_query_pane_t1

0xc9ae,	// (0x00082a14) area_vitu2_query_pane_t2_ParamLimits

0xc9ae,	// (0x00082a14) area_vitu2_query_pane_t2

0x5c3a,	// (0x0007bca0) area_vitu2_query_pane_t3_ParamLimits

0x5c3a,	// (0x0007bca0) area_vitu2_query_pane_t3

0x5c62,	// (0x0007bcc8) area_vitu2_query_pane_t4_ParamLimits

0x5c62,	// (0x0007bcc8) area_vitu2_query_pane_t4

0x5c8a,	// (0x0007bcf0) area_vitu2_query_pane_t5_ParamLimits

0x5c8a,	// (0x0007bcf0) area_vitu2_query_pane_t5

0x5cb2,	// (0x0007bd18) area_vitu2_query_pane_t6_ParamLimits

0x5cb2,	// (0x0007bd18) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x00085ada) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x00085ada) area_vitu2_query_pane_t

0xc9c2,	// (0x00082a28) bg_button_pane_cp018

0xc9d0,	// (0x00082a36) bg_button_pane_cp021

0x5cfe,	// (0x0007bd64) bg_button_pane_cp022

0x5d0f,	// (0x0007bd75) input_focus_pane_cp09

0x09fe,	// (0x00076a64) aid_size_touch_mv_arrow_left

0x0a27,	// (0x00076a8d) aid_size_touch_mv_arrow_right

0xc320,	// (0x00082386) main_cset_slider_pane_g16_ParamLimits

0xc320,	// (0x00082386) main_cset_slider_pane_g16

0xc32e,	// (0x00082394) main_cset_slider_pane_g17_ParamLimits

0xc32e,	// (0x00082394) main_cset_slider_pane_g17

0xc941,	// (0x000829a7) cell_cam4_burst_pane_g1_ParamLimits

0xe8bc,	// (0x00084922) compa_mode_pane

0xc53d,	// (0x000825a3) popup_vtel_slider_window_g3_ParamLimits

0xc53d,	// (0x000825a3) popup_vtel_slider_window_g3

0xc551,	// (0x000825b7) popup_vtel_slider_window_g4_ParamLimits

0xc551,	// (0x000825b7) popup_vtel_slider_window_g4

0xc565,	// (0x000825cb) popup_vtel_slider_window_t1_ParamLimits

0xc565,	// (0x000825cb) popup_vtel_slider_window_t1

0xe8bc,	// (0x00084922) main_cl_pane

0x9caa,	// (0x0007fd10) popup_imed_adjust2_window_ParamLimits

0x1fcd,	// (0x00078033) bg_tb_trans_pane_cp05_ParamLimits

0x2924,	// (0x0007898a) popup_imed_adjust2_window_g1_ParamLimits

0x2933,	// (0x00078999) popup_imed_adjust2_window_g2_ParamLimits

0x2933,	// (0x00078999) popup_imed_adjust2_window_g2

0x293f,	// (0x000789a5) popup_imed_adjust2_window_g3_ParamLimits

0x293f,	// (0x000789a5) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x00085845) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x00085845) popup_imed_adjust2_window_g

0x294b,	// (0x000789b1) popup_imed_adjust2_window_t1_ParamLimits

0x2963,	// (0x000789c9) slider_imed_adjust_pane_ParamLimits

0x2977,	// (0x000789dd) slider_imed_adjust_pane_g1_ParamLimits

0x2987,	// (0x000789ed) slider_imed_adjust_pane_g2_ParamLimits

0x2997,	// (0x000789fd) slider_imed_adjust_pane_g3_ParamLimits

0x29a8,	// (0x00078a0e) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0008584c) slider_imed_adjust_pane_g_ParamLimits

0xbac4,	// (0x00081b2a) aid_touch_area_cam4_ParamLimits

0xbac4,	// (0x00081b2a) aid_touch_area_cam4

0xbad4,	// (0x00081b3a) battery_pane_cp01

0xbb5b,	// (0x00081bc1) main_camera4_pane_g6_ParamLimits

0xbb5b,	// (0x00081bc1) main_camera4_pane_g6

0xbb79,	// (0x00081bdf) main_camera4_pane_t2_ParamLimits

0xbb79,	// (0x00081bdf) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0008594f) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0008594f) main_camera4_pane_t

0xbc00,	// (0x00081c66) aid_touch_area_vid4_ParamLimits

0xbc00,	// (0x00081c66) aid_touch_area_vid4

0xbc40,	// (0x00081ca6) main_video4_pane_g5_ParamLimits

0xbc40,	// (0x00081ca6) main_video4_pane_g5

0xbc64,	// (0x00081cca) vid4_progress_pane_ParamLimits

0xbc64,	// (0x00081cca) vid4_progress_pane

0x2fa6,	// (0x0007900c) main_cset_slider_pane_g18_ParamLimits

0x2fa6,	// (0x0007900c) main_cset_slider_pane_g18

0x3174,	// (0x000791da) cell_cam4_burst_pane_g2_ParamLimits

0x3174,	// (0x000791da) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x00085aae) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x00085aae) cell_cam4_burst_pane_g

0xc9dc,	// (0x00082a42) bg_cl_pane_ParamLimits

0xc9dc,	// (0x00082a42) bg_cl_pane

0xc9e8,	// (0x00082a4e) cl_header_pane_ParamLimits

0xc9e8,	// (0x00082a4e) cl_header_pane

0xc9f4,	// (0x00082a5a) cl_listscroll_pane_ParamLimits

0xc9f4,	// (0x00082a5a) cl_listscroll_pane

0x32b6,	// (0x0007931c) bg_cl_pane_g1

0x32be,	// (0x00079324) bg_cl_pane_g2

0x32c6,	// (0x0007932c) bg_cl_pane_g3

0x32ce,	// (0x00079334) bg_cl_pane_g4

0x32d6,	// (0x0007933c) bg_cl_pane_g5

0x32de,	// (0x00079344) bg_cl_pane_g6

0x32e6,	// (0x0007934c) bg_cl_pane_g7

0x32ee,	// (0x00079354) bg_cl_pane_g8

0x3323,	// (0x00079389) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x00085ae9) bg_cl_pane_g

0xca00,	// (0x00082a66) aid_height_cl_leading_ParamLimits

0xca00,	// (0x00082a66) aid_height_cl_leading

0xca0c,	// (0x00082a72) aid_height_cl_text_ParamLimits

0xca0c,	// (0x00082a72) aid_height_cl_text

0x3d36,	// (0x00079d9c) bg_cl_header_pane_ParamLimits

0x3d36,	// (0x00079d9c) bg_cl_header_pane

0xca24,	// (0x00082a8a) cl_header_pane_g1_ParamLimits

0xca24,	// (0x00082a8a) cl_header_pane_g1

0xca31,	// (0x00082a97) cl_header_pane_t1_ParamLimits

0xca31,	// (0x00082a97) cl_header_pane_t1

0x332b,	// (0x00079391) cl_list_pane

0x2f79,	// (0x00078fdf) hc_scroll_pane_cp01

0x0388,	// (0x000763ee) bg_cl_header_pane_g1

0x2e5f,	// (0x00078ec5) bg_cl_header_pane_g2

0x03a8,	// (0x0007640e) bg_cl_header_pane_g3

0x2e6f,	// (0x00078ed5) bg_cl_header_pane_g4

0x2e67,	// (0x00078ecd) bg_cl_header_pane_g5

0x3083,	// (0x000790e9) bg_cl_header_pane_g6

0x2e87,	// (0x00078eed) bg_cl_header_pane_g7

0x2e8f,	// (0x00078ef5) bg_cl_header_pane_g8

0x2e7f,	// (0x00078ee5) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x00085afc) bg_cl_header_pane_g

0xca43,	// (0x00082aa9) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xca43,	// (0x00082aa9) hc_cl_list_double_graphic_heading_pane

0xca54,	// (0x00082aba) hc_cl_list_single_graphic_pane_ParamLimits

0xca54,	// (0x00082aba) hc_cl_list_single_graphic_pane

0xca6d,	// (0x00082ad3) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xca6d,	// (0x00082ad3) hc_cl_list_single_graphic_pane_g1

0xca79,	// (0x00082adf) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xca79,	// (0x00082adf) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x00085b0f) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x00085b0f) hc_cl_list_single_graphic_pane_g

0xca8d,	// (0x00082af3) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xca8d,	// (0x00082af3) hc_cl_list_single_graphic_pane_t1

0xca6d,	// (0x00082ad3) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xca6d,	// (0x00082ad3) hc_cl_list_double_graphic_heading_pane_g1

0xcaa2,	// (0x00082b08) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xcaa2,	// (0x00082b08) hc_cl_list_double_graphic_heading_pane_g2

0xcab6,	// (0x00082b1c) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xcab6,	// (0x00082b1c) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x00085b14) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x00085b14) hc_cl_list_double_graphic_heading_pane_g

0xcaca,	// (0x00082b30) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xcaca,	// (0x00082b30) hc_cl_list_double_graphic_heading_pane_t1

0xcadf,	// (0x00082b45) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xcadf,	// (0x00082b45) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x00085b1b) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x00085b1b) hc_cl_list_double_graphic_heading_pane_t

0xcafc,	// (0x00082b62) vid4_progress_pane_g1

0xcb0c,	// (0x00082b72) vid4_progress_pane_g2

0xcb1c,	// (0x00082b82) vid4_progress_pane_g3

0xcb2e,	// (0x00082b94) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x00085b20) vid4_progress_pane_g

0xcb46,	// (0x00082bac) vid4_progress_pane_t1

0xcb5c,	// (0x00082bc2) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x00085b2b) vid4_progress_pane_t

0xcb86,	// (0x00082bec) wait_bar_pane_cp07

0x21c8,	// (0x0007822e) blid_firmament_pane_ParamLimits

0x220b,	// (0x00078271) popup_blid_sat_info2_window_g1

0x222f,	// (0x00078295) popup_blid_sat_info2_window_t3

0x223d,	// (0x000782a3) popup_blid_sat_info2_window_t4

0x224b,	// (0x000782b1) popup_blid_sat_info2_window_t5

0x2259,	// (0x000782bf) popup_blid_sat_info2_window_t6

0x2269,	// (0x000782cf) popup_blid_sat_info2_window_t7

0x2277,	// (0x000782dd) popup_blid_sat_info2_window_t8

0x2285,	// (0x000782eb) popup_blid_sat_info2_window_t9

0x2293,	// (0x000782f9) popup_blid_sat_info2_window_t10

0x2355,	// (0x000783bb) aid_firma_cardinal_ParamLimits

0x2369,	// (0x000783cf) blid_firmament_pane_t1_ParamLimits

0x2380,	// (0x000783e6) blid_firmament_pane_t2_ParamLimits

0x2397,	// (0x000783fd) blid_firmament_pane_t3_ParamLimits

0x23ae,	// (0x00078414) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x00085739) blid_firmament_pane_t_ParamLimits

0x23c5,	// (0x0007842b) blid_sat_info_pane_ParamLimits

0x0a50,	// (0x00076ab6) main_cam_set_pane_ParamLimits

0xb130,	// (0x00081196) aid_size_cell_colour_35_ParamLimits

0xb14a,	// (0x000811b0) aid_size_cell_colour_112_ParamLimits

0xb161,	// (0x000811c7) aid_size_cell_effect_ParamLimits

0x0a50,	// (0x00076ab6) bg_tb_trans_pane_cp02_ParamLimits

0x0697,	// (0x000766fd) heading_imed_pane_ParamLimits

0xb17b,	// (0x000811e1) listscroll_imed_pane_ParamLimits

0x15e7,	// (0x0007764d) popup_call2_audio_first_window_g5_ParamLimits

0x15e7,	// (0x0007764d) popup_call2_audio_first_window_g5

0xb881,	// (0x000818e7) aid_size_touch_image3_arrow_left_ParamLimits

0xb881,	// (0x000818e7) aid_size_touch_image3_arrow_left

0xb897,	// (0x000818fd) aid_size_touch_image3_arrow_right_ParamLimits

0xb897,	// (0x000818fd) aid_size_touch_image3_arrow_right

0xcb71,	// (0x00082bd7) vid4_progress_pane_t3

0xb419,	// (0x0008147f) main_hwr_training_symbol_option_pane_ParamLimits

0xb419,	// (0x0008147f) main_hwr_training_symbol_option_pane

0x2c11,	// (0x00078c77) popup_hwr_training_preview_window_ParamLimits

0x2c11,	// (0x00078c77) popup_hwr_training_preview_window

0xb47a,	// (0x000814e0) hwr_training_navi_pane_g5_ParamLimits

0xb47a,	// (0x000814e0) hwr_training_navi_pane_g5

0x2e4d,	// (0x00078eb3) popup_char_count_window

0x3d36,	// (0x00079d9c) bg_popup_sub_pane_cp20_ParamLimits

0xc656,	// (0x000826bc) list_vitu2_match_list_pane_ParamLimits

0xc662,	// (0x000826c8) vitu2_page_scroll_pane_ParamLimits

0xc662,	// (0x000826c8) vitu2_page_scroll_pane

0x3334,	// (0x0007939a) list_single_hwr_training_symbol_option_pane_ParamLimits

0x3334,	// (0x0007939a) list_single_hwr_training_symbol_option_pane

0x3347,	// (0x000793ad) list_single_hwr_training_symbol_option_pane_g1

0x334f,	// (0x000793b5) list_single_hwr_training_symbol_option_pane_t1

0x335d,	// (0x000793c3) bg_button_pane_cp023

0x3366,	// (0x000793cc) bg_button_pane_cp024

0xcbbc,	// (0x00082c22) vitu2_page_scroll_pane_g1

0xcbc4,	// (0x00082c2a) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x00085b32) vitu2_page_scroll_pane_g

0xcbcc,	// (0x00082c32) vitu2_page_scroll_pane_t1

0x2128,	// (0x0007818e) popup_char_count_window_g1

0x3399,	// (0x000793ff) popup_char_count_window_g2

0x33a2,	// (0x00079408) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x00085b37) popup_char_count_window_g

0x33ab,	// (0x00079411) popup_char_count_window_t1

0xe8bc,	// (0x00084922) main_vded2_pane

0x2910,	// (0x00078976) aid_size_cell_imed_line

0x291a,	// (0x00078980) grid_imed_line_width_pane

0xbcd2,	// (0x00081d38) vid4_indicators_pane_g4

0x33b9,	// (0x0007941f) cell_imed_line_width_pane_ParamLimits

0x33b9,	// (0x0007941f) cell_imed_line_width_pane

0x33cd,	// (0x00079433) cell_imed_line_width_pane_g1

0x3311,	// (0x00079377) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x00085b3e) cell_imed_line_width_pane_g

0xcbdb,	// (0x00082c41) main_vded2_pane_g1_ParamLimits

0xcbdb,	// (0x00082c41) main_vded2_pane_g1

0xcbe8,	// (0x00082c4e) main_vded2_pane_g2_ParamLimits

0xcbe8,	// (0x00082c4e) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x00085b43) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x00085b43) main_vded2_pane_g

0xcbf6,	// (0x00082c5c) vded2_slider_pane_ParamLimits

0xcbf6,	// (0x00082c5c) vded2_slider_pane

0xcc03,	// (0x00082c69) aid_size_touch_vded2_end

0xcc0d,	// (0x00082c73) aid_size_touch_vded2_playhead

0x33d6,	// (0x0007943c) aid_size_touch_vded2_start

0x33de,	// (0x00079444) vded2_slider_bg_pane

0x33e7,	// (0x0007944d) vded2_slider_pane_g1

0x33f0,	// (0x00079456) vded2_slider_pane_g2

0xcc15,	// (0x00082c7b) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x00085b48) vded2_slider_pane_g

0x33f8,	// (0x0007945e) vded2_slider_bg_pane_g1

0x3401,	// (0x00079467) vded2_slider_bg_pane_g2

0x340a,	// (0x00079470) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x00085b4f) vded2_slider_bg_pane_g

0x9502,	// (0x0007f568) aid_postcard_touch_down_pane_ParamLimits

0x9502,	// (0x0007f568) aid_postcard_touch_down_pane

0x9512,	// (0x0007f578) aid_postcard_touch_up_pane_ParamLimits

0x9512,	// (0x0007f578) aid_postcard_touch_up_pane

0xe8bc,	// (0x00084922) main_blid2_pane

0x9c35,	// (0x0007fc9b) popup_blid2_search_window

0xe8bc,	// (0x00084922) blid2_gps_pane

0xe8bc,	// (0x00084922) blid2_navig_pane

0xe8bc,	// (0x00084922) blid2_search_pane

0xe8bc,	// (0x00084922) blid2_tripm_pane

0xcc1e,	// (0x00082c84) blid2_search_pane_g1_ParamLimits

0xcc1e,	// (0x00082c84) blid2_search_pane_g1

0xcc2e,	// (0x00082c94) blid2_search_pane_t1_ParamLimits

0xcc2e,	// (0x00082c94) blid2_search_pane_t1

0xcc40,	// (0x00082ca6) aid_size_cell_blid2_gps_ParamLimits

0xcc40,	// (0x00082ca6) aid_size_cell_blid2_gps

0xcc50,	// (0x00082cb6) blid2_gps_pane_g1_ParamLimits

0xcc50,	// (0x00082cb6) blid2_gps_pane_g1

0xcc5c,	// (0x00082cc2) grid_blid2_satellite_pane_ParamLimits

0xcc5c,	// (0x00082cc2) grid_blid2_satellite_pane

0xcc6c,	// (0x00082cd2) blid2_navig_pane_g1_ParamLimits

0xcc6c,	// (0x00082cd2) blid2_navig_pane_g1

0xcc78,	// (0x00082cde) blid2_navig_pane_t1_ParamLimits

0xcc78,	// (0x00082cde) blid2_navig_pane_t1

0xcc8a,	// (0x00082cf0) blid2_navig_pane_t2_ParamLimits

0xcc8a,	// (0x00082cf0) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x00085b56) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x00085b56) blid2_navig_pane_t

0xcc9c,	// (0x00082d02) blid2_navig_ring_pane_ParamLimits

0xcc9c,	// (0x00082d02) blid2_navig_ring_pane

0xccac,	// (0x00082d12) blid2_speed_pane_ParamLimits

0xccac,	// (0x00082d12) blid2_speed_pane

0xccb8,	// (0x00082d1e) blid2_tripm_pane_g1_ParamLimits

0xccb8,	// (0x00082d1e) blid2_tripm_pane_g1

0xccc8,	// (0x00082d2e) blid2_tripm_pane_g2_ParamLimits

0xccc8,	// (0x00082d2e) blid2_tripm_pane_g2

0xccd4,	// (0x00082d3a) blid2_tripm_pane_g3_ParamLimits

0xccd4,	// (0x00082d3a) blid2_tripm_pane_g3

0xcce0,	// (0x00082d46) blid2_tripm_pane_g4_ParamLimits

0xcce0,	// (0x00082d46) blid2_tripm_pane_g4

0xccec,	// (0x00082d52) blid2_tripm_pane_g5_ParamLimits

0xccec,	// (0x00082d52) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x00085b5b) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x00085b5b) blid2_tripm_pane_g

0xcd08,	// (0x00082d6e) blid2_tripm_pane_t1_ParamLimits

0xcd08,	// (0x00082d6e) blid2_tripm_pane_t1

0xcd1c,	// (0x00082d82) blid2_tripm_pane_t2_ParamLimits

0xcd1c,	// (0x00082d82) blid2_tripm_pane_t2

0xcd2e,	// (0x00082d94) blid2_tripm_pane_t3_ParamLimits

0xcd2e,	// (0x00082d94) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x00085b68) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x00085b68) blid2_tripm_pane_t

0xcd60,	// (0x00082dc6) cell_blid2_satellite_pane_ParamLimits

0xcd60,	// (0x00082dc6) cell_blid2_satellite_pane

0xcd7a,	// (0x00082de0) cell_blid2_satellite_pane_g1

0x3413,	// (0x00079479) cell_blid2_satellite_pane_t1

0x23d5,	// (0x0007843b) blid2_speed_pane_g1

0x3421,	// (0x00079487) blid2_speed_pane_t1

0x342f,	// (0x00079495) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x00085b71) blid2_speed_pane_t

0x23d5,	// (0x0007843b) blid2_navig_ring_pane_g1

0xcd83,	// (0x00082de9) blid2_navig_ring_pane_g2

0xcd8b,	// (0x00082df1) blid2_navig_ring_pane_g3

0xcd93,	// (0x00082df9) blid2_navig_ring_pane_g4

0xcd9b,	// (0x00082e01) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x00085b76) blid2_navig_ring_pane_g

0xe8bc,	// (0x00084922) bg_popup_window_pane_cp011

0x343d,	// (0x000794a3) popup_blid2_search_window_g1

0x3445,	// (0x000794ab) popup_blid2_search_window_t1

0x3453,	// (0x000794b9) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x00085b81) popup_blid2_search_window_t

0x0297,	// (0x000762fd) main_browser_pane_g1

0xf010,	// (0x00085076) main_browser_pane_ParamLimits

0x0a50,	// (0x00076ab6) bg_button_pane_cp011_ParamLimits

0xbf41,	// (0x00081fa7) cell_vitu2_function_pane_g1_ParamLimits

0x1fcd,	// (0x00078033) bg_popup_sub_pane_cp22_ParamLimits

0x5b28,	// (0x0007bb8e) input_focus_pane_cp08_ParamLimits

0xc7ed,	// (0x00082853) popup_vitu2_query_button_pane_ParamLimits

0xc7ed,	// (0x00082853) popup_vitu2_query_button_pane

0x5b3f,	// (0x0007bba5) popup_vitu2_query_input_button_pane

0x30be,	// (0x00079124) popup_vitu2_query_window_g1_ParamLimits

0x5b49,	// (0x0007bbaf) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x00085a82) popup_vitu2_query_window_g_ParamLimits

0xe8bc,	// (0x00084922) bg_button_pane_cp026

0xcda3,	// (0x00082e09) popup_vitu2_query_input_button_pane_g1

0xe8bc,	// (0x00084922) bg_button_pane_cp025

0x3461,	// (0x000794c7) popup_vitu2_query_button_pane_t1

0xa693,	// (0x000806f9) main_mp3_pane_t6

0xa6a3,	// (0x00080709) popup_slider_window_cp01

0xbbaf,	// (0x00081c15) cam4_battery_pane

0xbc8f,	// (0x00081cf5) cam4_battery_pane_cp02

0xcaf4,	// (0x00082b5a) cam4_battery_pane_cp01

0xcaf4,	// (0x00082b5a) cam4_battery_pane_cp03

0x23d5,	// (0x0007843b) cam4_battery_pane_g1

0x3319,	// (0x0007937f) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x00085b86) cam4_battery_pane_g

0x22a1,	// (0x00078307) popup_blid_sat_info2_window_t11

0x09fe,	// (0x00076a64) aid_size_touch_mv_arrow_left_ParamLimits

0x0a27,	// (0x00076a8d) aid_size_touch_mv_arrow_right_ParamLimits

0x0a93,	// (0x00076af9) navi_pane_g1_ParamLimits

0x0a9f,	// (0x00076b05) navi_pane_g2_ParamLimits

0x0acd,	// (0x00076b33) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0008544b) navi_pane_g_ParamLimits

0x8f78,	// (0x0007efde) navi_pane_mv_t1_ParamLimits

0xb187,	// (0x000811ed) grid_imed_effect_pane_ParamLimits

0x7a30,	// (0x0007da96) aid_placing_vt_slider_lsc

0x01e6,	// (0x0007624c) aid_placing_vt_slider_prt

0x0a50,	// (0x00076ab6) bg_tb_trans_pane_cp01_ParamLimits

0x2561,	// (0x000785c7) popup_image_details_window_g1_ParamLimits

0x2574,	// (0x000785da) popup_image_details_window_g2_ParamLimits

0x2589,	// (0x000785ef) popup_image_details_window_g3_ParamLimits

0x2589,	// (0x000785ef) popup_image_details_window_g3

0xf718,	// (0x0008577e) popup_image_details_window_g_ParamLimits

0x259d,	// (0x00078603) popup_image_details_window_t1_ParamLimits

0x25af,	// (0x00078615) popup_image_details_window_t2_ParamLimits

0x25c8,	// (0x0007862e) popup_image_details_window_t3_ParamLimits

0x25dc,	// (0x00078642) popup_image_details_window_t4_ParamLimits

0x25f7,	// (0x0007865d) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x00085785) popup_image_details_window_t_ParamLimits

0xca18,	// (0x00082a7e) cl_header_name_pane_ParamLimits

0xca18,	// (0x00082a7e) cl_header_name_pane

0xcdab,	// (0x00082e11) cl_header_name_pane_t1_ParamLimits

0xcdab,	// (0x00082e11) cl_header_name_pane_t1

0xcdc2,	// (0x00082e28) cl_header_name_pane_t2_ParamLimits

0xcdc2,	// (0x00082e28) cl_header_name_pane_t2

0xcdec,	// (0x00082e52) cl_header_name_pane_t3_ParamLimits

0xcdec,	// (0x00082e52) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x00085b8b) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x00085b8b) cl_header_name_pane_t

0x0b5c,	// (0x00076bc2) navi_pane_mv_g2_ParamLimits

0x2e27,	// (0x00078e8d) field_vitu2_entry_pane_g1_ParamLimits

0x2e33,	// (0x00078e99) field_vitu2_entry_pane_g2_ParamLimits

0x2e3f,	// (0x00078ea5) field_vitu2_entry_pane_g3_ParamLimits

0x2e3f,	// (0x00078ea5) field_vitu2_entry_pane_g3

0xf91b,	// (0x00085981) field_vitu2_entry_pane_g_ParamLimits

0xbed5,	// (0x00081f3b) cell_vitu2_itu_pane_g1_ParamLimits

0xbee7,	// (0x00081f4d) cell_vitu2_itu_pane_g2_ParamLimits

0xbee7,	// (0x00081f4d) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0008598d) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0008598d) cell_vitu2_itu_pane_g

0x0a50,	// (0x00076ab6) bg_vkb2_func_pane_cp05_ParamLimits

0x0a50,	// (0x00076ab6) bg_vkb2_func_pane_cp05

0x0a50,	// (0x00076ab6) bg_vkb2_func_pane_cp03

0x0a50,	// (0x00076ab6) bg_vkb2_func_pane_cp04

0x0a50,	// (0x00076ab6) bg_vkb2_func_pane_cp10_ParamLimits

0x0a50,	// (0x00076ab6) bg_vkb2_func_pane_cp10

0x5cfe,	// (0x0007bd64) bg_vkb2_func_pane_cp08

0xc9c2,	// (0x00082a28) bg_vkb2_func_pane_cp06

0xc9d0,	// (0x00082a36) bg_vkb2_func_pane_cp07

0x336f,	// (0x000793d5) bg_vkb2_func_pane_cp11_ParamLimits

0x336f,	// (0x000793d5) bg_vkb2_func_pane_cp11

0x3384,	// (0x000793ea) bg_vkb2_func_pane_cp12_ParamLimits

0x3384,	// (0x000793ea) bg_vkb2_func_pane_cp12

0xe8bc,	// (0x00084922) bg_vkb2_func_pane_cp09

0x2e5f,	// (0x00078ec5) bg_vkb2_func_pane_g1

0x03a8,	// (0x0007640e) bg_vkb2_func_pane_g2

0x2e67,	// (0x00078ecd) bg_vkb2_func_pane_g3

0x2e6f,	// (0x00078ed5) bg_vkb2_func_pane_g4

0x3083,	// (0x000790e9) bg_vkb2_func_pane_g5

0x2e87,	// (0x00078eed) bg_vkb2_func_pane_g6

0x2e8f,	// (0x00078ef5) bg_vkb2_func_pane_g7

0x2e7f,	// (0x00078ee5) bg_vkb2_func_pane_g8

0x0388,	// (0x000763ee) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x00085b92) bg_vkb2_func_pane_g

0xccfa,	// (0x00082d60) blid2_tripm_pane_g6_ParamLimits

0xccfa,	// (0x00082d60) blid2_tripm_pane_g6

0x2cc9,	// (0x00078d2f) mp4_progress_pane_g1

0xcd54,	// (0x00082dba) blid2_tripm_values_pane_ParamLimits

0xcd54,	// (0x00082dba) blid2_tripm_values_pane

0xce11,	// (0x00082e77) blid2_tripm_values_pane_t1

0xce1f,	// (0x00082e85) blid2_tripm_values_pane_t2

0xce2d,	// (0x00082e93) blid2_tripm_values_pane_t3

0xce3b,	// (0x00082ea1) blid2_tripm_values_pane_t4

0xce49,	// (0x00082eaf) blid2_tripm_values_pane_t5

0xce57,	// (0x00082ebd) blid2_tripm_values_pane_t6

0xce65,	// (0x00082ecb) blid2_tripm_values_pane_t7

0xce73,	// (0x00082ed9) blid2_tripm_values_pane_t8

0xce81,	// (0x00082ee7) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x00085ba5) blid2_tripm_values_pane_t

0x7a70,	// (0x0007dad6) call_video_pane_t1_ParamLimits

0x7a91,	// (0x0007daf7) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000852d4) call_video_pane_t_ParamLimits

0x58e6,	// (0x0007b94c) msg_header_pane_g1_ParamLimits

0x0d44,	// (0x00076daa) msg_header_pane_g2_ParamLimits

0x0d44,	// (0x00076daa) msg_header_pane_g2

0x0001,

0xf488,	// (0x000854ee) msg_header_pane_g_ParamLimits

0xf488,	// (0x000854ee) msg_header_pane_g

0xf010,	// (0x00085076) main_clock2_pane_ParamLimits

0xaf20,	// (0x00080f86) grid_clock2_toolbar_pane_ParamLimits

0xaf20,	// (0x00080f86) grid_clock2_toolbar_pane

0xaf20,	// (0x00080f86) listscroll_clock2_pane_ParamLimits

0xaf20,	// (0x00080f86) listscroll_clock2_pane

0xafc4,	// (0x0008102a) main_clock2_pane_t3_ParamLimits

0xafc4,	// (0x0008102a) main_clock2_pane_t3

0xafd6,	// (0x0008103c) main_clock2_pane_t4_ParamLimits

0xafd6,	// (0x0008103c) main_clock2_pane_t4

0x346f,	// (0x000794d5) cell_clock2_toolbar_pane

0x3477,	// (0x000794dd) cell_clock2_toolbar_pane_cp01

0x3477,	// (0x000794dd) cell_clock2_toolbar_pane_cp02

0x347f,	// (0x000794e5) cell_clock2_toolbar_pane_cp03

0x3487,	// (0x000794ed) list_clock2_pane

0x0974,	// (0x000769da) scroll_pane_cp10

0x348f,	// (0x000794f5) list_single_clock2_pane_ParamLimits

0x348f,	// (0x000794f5) list_single_clock2_pane

0x014f,	// (0x000761b5) list_highlight_pane_cp08

0x349c,	// (0x00079502) list_single_clock2_pane_t1

0x34aa,	// (0x00079510) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x00085bb8) list_single_clock2_pane_t

0xe8bc,	// (0x00084922) bg_button_pane_cp10

0x34b8,	// (0x0007951e) cell_clock2_toolbar_pane_g1

0x9464,	// (0x0007f4ca) aid_main_viewer_pane_g1_ParamLimits

0x9464,	// (0x0007f4ca) aid_main_viewer_pane_g1

0x9470,	// (0x0007f4d6) aid_main_viewer_pane_g2_ParamLimits

0x9470,	// (0x0007f4d6) aid_main_viewer_pane_g2

0x947c,	// (0x0007f4e2) aid_main_viewer_pane_g3_ParamLimits

0x947c,	// (0x0007f4e2) aid_main_viewer_pane_g3

0x948d,	// (0x0007f4f3) aid_main_viewer_pane_g4_ParamLimits

0x948d,	// (0x0007f4f3) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000854ff) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000854ff) aid_main_viewer_pane_g

0x9c0d,	// (0x0007fc73) main_calc_pane_ParamLimits

0x9c1a,	// (0x0007fc80) main_dialer2_pane_ParamLimits

0xe8bc,	// (0x00084922) main_cam6_pane

0xe8bc,	// (0x00084922) main_vid6_pane

0xaf2c,	// (0x00080f92) listscroll_gen_pane_cp06_ParamLimits

0xaf2c,	// (0x00080f92) listscroll_gen_pane_cp06

0xafe8,	// (0x0008104e) main_clock2_pane_t5_ParamLimits

0xafe8,	// (0x0008104e) main_clock2_pane_t5

0xb031,	// (0x00081097) aid_call2_pane_cp10_ParamLimits

0xb043,	// (0x000810a9) aid_call_pane_cp10_ParamLimits

0x09f2,	// (0x00076a58) popup_clock_analogue_window_cp10_g1_ParamLimits

0x09f2,	// (0x00076a58) popup_clock_analogue_window_cp10_g2_ParamLimits

0xb055,	// (0x000810bb) popup_clock_analogue_window_cp10_g3_ParamLimits

0xb055,	// (0x000810bb) popup_clock_analogue_window_cp10_g4_ParamLimits

0x09f2,	// (0x00076a58) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0008583a) popup_clock_analogue_window_cp10_g_ParamLimits

0xb067,	// (0x000810cd) popup_clock_analogue_window_cp10_t1_ParamLimits

0xb82e,	// (0x00081894) cell_dialer2_keypad_pane_g2_ParamLimits

0xb82e,	// (0x00081894) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x00085920) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x00085920) cell_dialer2_keypad_pane_g

0xb84a,	// (0x000818b0) cell_dialer2_keypad_pane_t1

0xc20c,	// (0x00082272) main_cset_text2_pane_ParamLimits

0xc20c,	// (0x00082272) main_cset_text2_pane

0x32aa,	// (0x00079310) area_vitu2_query_pane_g1_ParamLimits

0x5c29,	// (0x0007bc8f) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x00085ad5) area_vitu2_query_pane_g_ParamLimits

0x5cda,	// (0x0007bd40) area_vitu2_query_pane_t7_ParamLimits

0x5cda,	// (0x0007bd40) area_vitu2_query_pane_t7

0xc9c2,	// (0x00082a28) bg_button_pane_cp018_ParamLimits

0xc9d0,	// (0x00082a36) bg_button_pane_cp021_ParamLimits

0x5cfe,	// (0x0007bd64) bg_button_pane_cp022_ParamLimits

0x5cfe,	// (0x0007bd64) bg_vkb2_func_pane_cp08_ParamLimits

0xc9c2,	// (0x00082a28) bg_vkb2_func_pane_cp06_ParamLimits

0xc9d0,	// (0x00082a36) bg_vkb2_func_pane_cp07_ParamLimits

0x5d0f,	// (0x0007bd75) input_focus_pane_cp09_ParamLimits

0xce8f,	// (0x00082ef5) cam6_autofocus_pane_ParamLimits

0xce8f,	// (0x00082ef5) cam6_autofocus_pane

0xceb1,	// (0x00082f17) cam6_image_uncrop_pane_ParamLimits

0xceb1,	// (0x00082f17) cam6_image_uncrop_pane

0xcede,	// (0x00082f44) cam6_indi_pane_ParamLimits

0xcede,	// (0x00082f44) cam6_indi_pane

0xcef8,	// (0x00082f5e) cam6_mode_pane_ParamLimits

0xcef8,	// (0x00082f5e) cam6_mode_pane

0xcf0c,	// (0x00082f72) cam6_timer_pane_ParamLimits

0xcf0c,	// (0x00082f72) cam6_timer_pane

0xcf18,	// (0x00082f7e) cam6_zoom_pane_ParamLimits

0xcf18,	// (0x00082f7e) cam6_zoom_pane

0xcf30,	// (0x00082f96) cam6_mode_pane_g1_ParamLimits

0xcf30,	// (0x00082f96) cam6_mode_pane_g1

0xcf3c,	// (0x00082fa2) cam6_mode_pane_g2_ParamLimits

0xcf3c,	// (0x00082fa2) cam6_mode_pane_g2

0xcf48,	// (0x00082fae) cam6_mode_pane_g3_ParamLimits

0xcf48,	// (0x00082fae) cam6_mode_pane_g3

0xcf54,	// (0x00082fba) cam6_mode_pane_g4_ParamLimits

0xcf54,	// (0x00082fba) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x00085bbd) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x00085bbd) cam6_mode_pane_g

0x34c0,	// (0x00079526) bg_tb_trans_pane_cp08_ParamLimits

0x34c0,	// (0x00079526) bg_tb_trans_pane_cp08

0x34ce,	// (0x00079534) cam6_battery_pane_ParamLimits

0x34ce,	// (0x00079534) cam6_battery_pane

0x34e4,	// (0x0007954a) cam6_indi_pane_g1_ParamLimits

0x34e4,	// (0x0007954a) cam6_indi_pane_g1

0x34f6,	// (0x0007955c) cam6_indi_pane_g2_ParamLimits

0x34f6,	// (0x0007955c) cam6_indi_pane_g2

0x3508,	// (0x0007956e) cam6_indi_pane_g3_ParamLimits

0x3508,	// (0x0007956e) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x00085bc6) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x00085bc6) cam6_indi_pane_g

0x351a,	// (0x00079580) cam6_indi_pane_t1_ParamLimits

0x351a,	// (0x00079580) cam6_indi_pane_t1

0xbd07,	// (0x00081d6d) cam6_autofocus_pane_g1

0xbd0f,	// (0x00081d75) cam6_autofocus_pane_g2

0xbd17,	// (0x00081d7d) cam6_autofocus_pane_g3

0xbd1f,	// (0x00081d85) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x00085bcd) cam6_autofocus_pane_g

0x3540,	// (0x000795a6) cam6_timer_pane_g1

0x3548,	// (0x000795ae) cam6_timer_pane_t1

0x3556,	// (0x000795bc) cam6_zoom_cont_pane

0x355e,	// (0x000795c4) cam6_zoom_pane_g1

0x3566,	// (0x000795cc) cam6_zoom_pane_g2

0xcf60,	// (0x00082fc6) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x00085bd6) cam6_zoom_pane_g

0x23d5,	// (0x0007843b) cam6_battery_pane_g1

0x23d5,	// (0x0007843b) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x00085742) cam6_battery_pane_g

0x356e,	// (0x000795d4) cam6_zoom_cont_pane_g1

0x3577,	// (0x000795dd) cam6_zoom_cont_pane_g2

0x3580,	// (0x000795e6) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x00085bdd) cam6_zoom_cont_pane_g

0xcf7d,	// (0x00082fe3) cam6_mode_pane_cp_ParamLimits

0xcf7d,	// (0x00082fe3) cam6_mode_pane_cp

0xcf18,	// (0x00082f7e) cam6_zoom_pane_cp_ParamLimits

0xcf18,	// (0x00082f7e) cam6_zoom_pane_cp

0xcf91,	// (0x00082ff7) vid6_image_uncrop_cif_pane_ParamLimits

0xcf91,	// (0x00082ff7) vid6_image_uncrop_cif_pane

0xcfbd,	// (0x00083023) vid6_image_uncrop_nhd_pane_ParamLimits

0xcfbd,	// (0x00083023) vid6_image_uncrop_nhd_pane

0xceb1,	// (0x00082f17) vid6_image_uncrop_vga_pane_ParamLimits

0xceb1,	// (0x00082f17) vid6_image_uncrop_vga_pane

0xcfda,	// (0x00083040) vid6_image_uncrop_wvga_pane_ParamLimits

0xcfda,	// (0x00083040) vid6_image_uncrop_wvga_pane

0xcff7,	// (0x0008305d) vid6_indi_pane_ParamLimits

0xcff7,	// (0x0008305d) vid6_indi_pane

0x34c0,	// (0x00079526) bg_tb_trans_pane_cp09_ParamLimits

0x34c0,	// (0x00079526) bg_tb_trans_pane_cp09

0x3598,	// (0x000795fe) cam6_battery_pane_cp_ParamLimits

0x3598,	// (0x000795fe) cam6_battery_pane_cp

0x35a4,	// (0x0007960a) vid6_indi_pane_g1_ParamLimits

0x35a4,	// (0x0007960a) vid6_indi_pane_g1

0x35b6,	// (0x0007961c) vid6_indi_pane_g2_ParamLimits

0x35b6,	// (0x0007961c) vid6_indi_pane_g2

0x35c8,	// (0x0007962e) vid6_indi_pane_g3_ParamLimits

0x35c8,	// (0x0007962e) vid6_indi_pane_g3

0x35dd,	// (0x00079643) vid6_indi_pane_g4_ParamLimits

0x35dd,	// (0x00079643) vid6_indi_pane_g4

0x35f2,	// (0x00079658) vid6_indi_pane_g5_ParamLimits

0x35f2,	// (0x00079658) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x00085be4) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x00085be4) vid6_indi_pane_g

0x360c,	// (0x00079672) vid6_indi_pane_t1_ParamLimits

0x360c,	// (0x00079672) vid6_indi_pane_t1

0x3622,	// (0x00079688) vid6_indi_pane_t2_ParamLimits

0x3622,	// (0x00079688) vid6_indi_pane_t2

0x364a,	// (0x000796b0) vid6_indi_pane_t3_ParamLimits

0x364a,	// (0x000796b0) vid6_indi_pane_t3

0x3672,	// (0x000796d8) vid6_indi_pane_t4_ParamLimits

0x3672,	// (0x000796d8) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x00085bef) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x00085bef) vid6_indi_pane_t

0x3696,	// (0x000796fc) wait_bar_pane_cp08

0xd01c,	// (0x00083082) main_cset_text2_pane_t1_ParamLimits

0xd01c,	// (0x00083082) main_cset_text2_pane_t1

0xcf68,	// (0x00082fce) listscroll_gen_pane_cp06_t1_ParamLimits

0xcf68,	// (0x00082fce) listscroll_gen_pane_cp06_t1

0xe8bc,	// (0x00084922) main_cam6_set_pane

0x2641,	// (0x000786a7) bg_tb_trans_pane_cp06_ParamLimits

0xbbb7,	// (0x00081c1d) cam4_indicators_pane_g1_ParamLimits

0xbbc8,	// (0x00081c2e) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0008595d) cam4_indicators_pane_g_ParamLimits

0xbbe6,	// (0x00081c4c) cam4_indicators_pane_t1_ParamLimits

0x0a50,	// (0x00076ab6) bg_tb_trans_pane_cp07_ParamLimits

0xbc99,	// (0x00081cff) vid4_indicators_pane_g1_ParamLimits

0xbcad,	// (0x00081d13) vid4_indicators_pane_g2_ParamLimits

0xbcc1,	// (0x00081d27) vid4_indicators_pane_g3_ParamLimits

0xbcd2,	// (0x00081d38) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0008596f) vid4_indicators_pane_g_ParamLimits

0xbcf0,	// (0x00081d56) vid4_indicators_pane_t1_ParamLimits

0xcafc,	// (0x00082b62) vid4_progress_pane_g1_ParamLimits

0xcb0c,	// (0x00082b72) vid4_progress_pane_g2_ParamLimits

0xcb1c,	// (0x00082b82) vid4_progress_pane_g3_ParamLimits

0xcb2e,	// (0x00082b94) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x00085b20) vid4_progress_pane_g_ParamLimits

0xcb46,	// (0x00082bac) vid4_progress_pane_t1_ParamLimits

0xcb5c,	// (0x00082bc2) vid4_progress_pane_t2_ParamLimits

0xcb71,	// (0x00082bd7) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x00085b2b) vid4_progress_pane_t_ParamLimits

0xcb86,	// (0x00082bec) wait_bar_pane_cp07_ParamLimits

0xd04f,	// (0x000830b5) main_cam6_set_pane_g2_ParamLimits

0xd04f,	// (0x000830b5) main_cam6_set_pane_g2

0xd05b,	// (0x000830c1) main_cset6_listscroll_pane_ParamLimits

0xd05b,	// (0x000830c1) main_cset6_listscroll_pane

0xd086,	// (0x000830ec) main_cset6_slider_pane_ParamLimits

0xd086,	// (0x000830ec) main_cset6_slider_pane

0xd092,	// (0x000830f8) main_cset6_text2_pane_ParamLimits

0xd092,	// (0x000830f8) main_cset6_text2_pane

0x36a5,	// (0x0007970b) main_cset6_text_pane

0x36ad,	// (0x00079713) main_cset_list_pane_copy1_ParamLimits

0x36ad,	// (0x00079713) main_cset_list_pane_copy1

0x36bd,	// (0x00079723) scroll_pane_cp028_copy1

0xd0a5,	// (0x0008310b) cset_list_set_pane_copy1

0xd0b8,	// (0x0008311e) aid_position_infowindow_above_copy1

0xd0c0,	// (0x00083126) aid_position_infowindow_below_copy1

0xd0c8,	// (0x0008312e) cset_list_set_pane_g1_copy1

0x5aac,	// (0x0007bb12) cset_list_set_pane_g3_copy1_ParamLimits

0x5aac,	// (0x0007bb12) cset_list_set_pane_g3_copy1

0x5abb,	// (0x0007bb21) cset_list_set_pane_t1_copy1_ParamLimits

0x5abb,	// (0x0007bb21) cset_list_set_pane_t1_copy1

0x0a50,	// (0x00076ab6) list_highlight_pane_cp021_copy1_ParamLimits

0x0a50,	// (0x00076ab6) list_highlight_pane_cp021_copy1

0x36c6,	// (0x0007972c) cset6_slider_pane_ParamLimits

0x36c6,	// (0x0007972c) cset6_slider_pane

0x36f2,	// (0x00079758) main_cset6_slider_pane_g1_ParamLimits

0x36f2,	// (0x00079758) main_cset6_slider_pane_g1

0xd0d0,	// (0x00083136) main_cset6_slider_pane_g2_ParamLimits

0xd0d0,	// (0x00083136) main_cset6_slider_pane_g2

0x371a,	// (0x00079780) main_cset6_slider_pane_g3_ParamLimits

0x371a,	// (0x00079780) main_cset6_slider_pane_g3

0xd0f8,	// (0x0008315e) main_cset6_slider_pane_g4_ParamLimits

0xd0f8,	// (0x0008315e) main_cset6_slider_pane_g4

0xd104,	// (0x0008316a) main_cset6_slider_pane_g5_ParamLimits

0xd104,	// (0x0008316a) main_cset6_slider_pane_g5

0x2f8e,	// (0x00078ff4) main_cset6_slider_pane_g7_ParamLimits

0x2f8e,	// (0x00078ff4) main_cset6_slider_pane_g7

0x2f9a,	// (0x00079000) main_cset6_slider_pane_g8_ParamLimits

0x2f9a,	// (0x00079000) main_cset6_slider_pane_g8

0xd112,	// (0x00083178) main_cset6_slider_pane_g9_ParamLimits

0xd112,	// (0x00083178) main_cset6_slider_pane_g9

0xd11e,	// (0x00083184) main_cset6_slider_pane_g10_ParamLimits

0xd11e,	// (0x00083184) main_cset6_slider_pane_g10

0xd12a,	// (0x00083190) main_cset6_slider_pane_g11_ParamLimits

0xd12a,	// (0x00083190) main_cset6_slider_pane_g11

0xd136,	// (0x0008319c) main_cset6_slider_pane_g12_ParamLimits

0xd136,	// (0x0008319c) main_cset6_slider_pane_g12

0xd142,	// (0x000831a8) main_cset6_slider_pane_g13_ParamLimits

0xd142,	// (0x000831a8) main_cset6_slider_pane_g13

0xd14e,	// (0x000831b4) main_cset6_slider_pane_g14_ParamLimits

0xd14e,	// (0x000831b4) main_cset6_slider_pane_g14

0xd15a,	// (0x000831c0) main_cset6_slider_pane_g15_ParamLimits

0xd15a,	// (0x000831c0) main_cset6_slider_pane_g15

0xd172,	// (0x000831d8) main_cset6_slider_pane_g16_ParamLimits

0xd172,	// (0x000831d8) main_cset6_slider_pane_g16

0xd180,	// (0x000831e6) main_cset6_slider_pane_g17_ParamLimits

0xd180,	// (0x000831e6) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x00085bf8) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x00085bf8) main_cset6_slider_pane_g

0x3726,	// (0x0007978c) main_cset6_slider_pane_t1_ParamLimits

0x3726,	// (0x0007978c) main_cset6_slider_pane_t1

0xd1a6,	// (0x0008320c) main_cset6_slider_pane_t2_ParamLimits

0xd1a6,	// (0x0008320c) main_cset6_slider_pane_t2

0xd1d1,	// (0x00083237) main_cset6_slider_pane_t3_ParamLimits

0xd1d1,	// (0x00083237) main_cset6_slider_pane_t3

0xd1fc,	// (0x00083262) main_cset6_slider_pane_t4_ParamLimits

0xd1fc,	// (0x00083262) main_cset6_slider_pane_t4

0xd227,	// (0x0008328d) main_cset6_slider_pane_t5_ParamLimits

0xd227,	// (0x0008328d) main_cset6_slider_pane_t5

0x3767,	// (0x000797cd) main_cset6_slider_pane_t7_ParamLimits

0x3767,	// (0x000797cd) main_cset6_slider_pane_t7

0xd254,	// (0x000832ba) main_cset6_slider_pane_t8_ParamLimits

0xd254,	// (0x000832ba) main_cset6_slider_pane_t8

0xd278,	// (0x000832de) main_cset6_slider_pane_t9_ParamLimits

0xd278,	// (0x000832de) main_cset6_slider_pane_t9

0xd29c,	// (0x00083302) main_cset6_slider_pane_t10_ParamLimits

0xd29c,	// (0x00083302) main_cset6_slider_pane_t10

0xd2c0,	// (0x00083326) main_cset6_slider_pane_t11_ParamLimits

0xd2c0,	// (0x00083326) main_cset6_slider_pane_t11

0x379d,	// (0x00079803) main_cset6_slider_pane_t14_ParamLimits

0x379d,	// (0x00079803) main_cset6_slider_pane_t14

0x37d6,	// (0x0007983c) main_cset6_slider_pane_t15_ParamLimits

0x37d6,	// (0x0007983c) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x00085c1d) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x00085c1d) main_cset6_slider_pane_t

0x32f6,	// (0x0007935c) cset_slider_pane_g1_copy1

0x32ff,	// (0x00079365) cset_slider_pane_g2_copy1

0x3308,	// (0x0007936e) cset_slider_pane_g3_copy1

0xe8bc,	// (0x00084922) bg_popup_sub_pane_cp011_copy1

0x380f,	// (0x00079875) main_cset_text_pane_g1_copy1

0x30d2,	// (0x00079138) main_cset_text_pane_t1_copy1

0x30e0,	// (0x00079146) main_cset_text_pane_t2_copy1

0x30ee,	// (0x00079154) main_cset_text_pane_t3_copy1

0x30fc,	// (0x00079162) main_cset_text_pane_t4_copy1

0x310a,	// (0x00079170) main_cset_text_pane_t5_copy1

0x3817,	// (0x0007987d) main_cset_text_pane_t6_copy1

0x3126,	// (0x0007918c) main_cset_text_pane_t7_copy1

0xd2ff,	// (0x00083365) main_cset_text2_pane_t1_copy1

0x0a50,	// (0x00076ab6) main_ncimui_pane

0x9c6b,	// (0x0007fcd1) popup_query_ncimui_window_ParamLimits

0x9c6b,	// (0x0007fcd1) popup_query_ncimui_window

0xa7fc,	// (0x00080862) field_cale_ev2_pane_g4_ParamLimits

0xa7fc,	// (0x00080862) field_cale_ev2_pane_g4

0xb54e,	// (0x000815b4) cell_video_dialer_keypad_pane_g2_ParamLimits

0xb54e,	// (0x000815b4) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000858fb) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000858fb) cell_video_dialer_keypad_pane_g

0xb566,	// (0x000815cc) cell_video_dialer_keypad_pane_t1

0xe8bc,	// (0x00084922) bg_popup_window_pane_cp012

0x0841,	// (0x000768a7) heading_pane_cp06

0x3843,	// (0x000798a9) ncim_query_content_pane

0xe8bc,	// (0x00084922) bg_popup_heading_pane_cp01

0x384b,	// (0x000798b1) ncim_heading_pane_t1

0x3859,	// (0x000798bf) ncim_indicator_popup_pane

0x386b,	// (0x000798d1) ncim_query_button_pane

0x387f,	// (0x000798e5) ncim_query_content_pane_t1

0x3891,	// (0x000798f7) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x00085c61) ncim_query_content_pane_t

0x38cb,	// (0x00079931) ncim_query_list_pane

0x38dd,	// (0x00079943) ncim_query_popup_pane

0x3859,	// (0x000798bf) ncim_indicator_popup_pane_ParamLimits

0xd452,	// (0x000834b8) ncim_query_content_pane_g1_ParamLimits

0xd452,	// (0x000834b8) ncim_query_content_pane_g1

0x387f,	// (0x000798e5) ncim_query_content_pane_t1_ParamLimits

0x3891,	// (0x000798f7) ncim_query_content_pane_t2_ParamLimits

0xd45e,	// (0x000834c4) ncim_query_content_pane_t3_ParamLimits

0xd45e,	// (0x000834c4) ncim_query_content_pane_t3

0xd47b,	// (0x000834e1) ncim_query_content_pane_t4_ParamLimits

0xd47b,	// (0x000834e1) ncim_query_content_pane_t4

0xd498,	// (0x000834fe) ncim_query_content_pane_t5_ParamLimits

0xd498,	// (0x000834fe) ncim_query_content_pane_t5

0x38a3,	// (0x00079909) ncim_query_content_pane_t6_ParamLimits

0x38a3,	// (0x00079909) ncim_query_content_pane_t6

0xfbfb,	// (0x00085c61) ncim_query_content_pane_t_ParamLimits

0x38cb,	// (0x00079931) ncim_query_list_pane_ParamLimits

0x38dd,	// (0x00079943) ncim_query_popup_pane_ParamLimits

0x38f1,	// (0x00079957) wait_bar_pane_cp04

0xe8bc,	// (0x00084922) input_focus_pane_cp011

0x38f9,	// (0x0007995f) ncim_query_popup_pane_t1

0x3907,	// (0x0007996d) ncim_list_query_list_pane_ParamLimits

0x3907,	// (0x0007996d) ncim_list_query_list_pane

0xe8bc,	// (0x00084922) bg_button_pane_cp027

0x3914,	// (0x0007997a) ncim_query_button_pane_g1

0xe8bc,	// (0x00084922) list_highlight_pane_cp012

0x391e,	// (0x00079984) ncim_list_query_list_pane_g1

0x3926,	// (0x0007998c) ncim_list_query_list_pane_t1

0xbbd7,	// (0x00081c3d) cam4_indicators_pane_g3_ParamLimits

0xbbd7,	// (0x00081c3d) cam4_indicators_pane_g3

0xbcde,	// (0x00081d44) vid4_indicators_pane_g5_ParamLimits

0xbcde,	// (0x00081d44) vid4_indicators_pane_g5

0xcb3a,	// (0x00082ba0) vid4_progress_pane_g5_ParamLimits

0xcb3a,	// (0x00082ba0) vid4_progress_pane_g5

0xd33e,	// (0x000833a4) main_ncimui_pane_g1

0xd3a6,	// (0x0008340c) ncimui_group_query_pane_ParamLimits

0xd3a6,	// (0x0008340c) ncimui_group_query_pane

0xd3ee,	// (0x00083454) ncimui_list_pane_ParamLimits

0xd3ee,	// (0x00083454) ncimui_list_pane

0xd415,	// (0x0008347b) ncimui_text_pane_ParamLimits

0xd415,	// (0x0008347b) ncimui_text_pane

0xd4b5,	// (0x0008351b) ncimui_text_pane_t1_ParamLimits

0xd4b5,	// (0x0008351b) ncimui_text_pane_t1

0x3934,	// (0x0007999a) ncimui_list_single_graphic_pane_ParamLimits

0x3934,	// (0x0007999a) ncimui_list_single_graphic_pane

0xd4d4,	// (0x0008353a) ncimui_query_pane_ParamLimits

0xd4d4,	// (0x0008353a) ncimui_query_pane

0xe8bc,	// (0x00084922) list_highlight_pane_cp013

0x3944,	// (0x000799aa) ncim_list_query_list_pane_t1_copy1

0x391e,	// (0x00079984) ncim_list_single_graphic_pane_g1

0x3952,	// (0x000799b8) ncim_query_button_pane_cp01

0x395e,	// (0x000799c4) ncim_query_entry_pane_ParamLimits

0x395e,	// (0x000799c4) ncim_query_entry_pane

0x3971,	// (0x000799d7) ncimui_query_pane_g1

0x397d,	// (0x000799e3) ncimui_query_pane_t1_ParamLimits

0x397d,	// (0x000799e3) ncimui_query_pane_t1

0x0a50,	// (0x00076ab6) input_focus_pane_cp012

0x3996,	// (0x000799fc) ncim_query_entry_pane_t1

0xf010,	// (0x00085076) main_im_pane_ParamLimits

0x0a50,	// (0x00076ab6) main_mobtv_pane_ParamLimits

0x0a50,	// (0x00076ab6) main_mobtv_pane

0xd18e,	// (0x000831f4) main_cset6_slider_pane_g18_ParamLimits

0xd18e,	// (0x000831f4) main_cset6_slider_pane_g18

0xd19a,	// (0x00083200) main_cset6_slider_pane_g19_ParamLimits

0xd19a,	// (0x00083200) main_cset6_slider_pane_g19

0x2e3f,	// (0x00078ea5) bg_main_mobtv_pane_ParamLimits

0x2e3f,	// (0x00078ea5) bg_main_mobtv_pane

0xd4e7,	// (0x0008354d) main_mobtv_info_pane

0xd4f2,	// (0x00083558) main_mobtv_loading_pane_ParamLimits

0xd4f2,	// (0x00083558) main_mobtv_loading_pane

0x39a8,	// (0x00079a0e) main_mobtv_pg_channel_list_pane

0x39b2,	// (0x00079a18) main_mobtv_pg_hdr_pane

0xd4ff,	// (0x00083565) main_mobtv_programe_curr_pane_ParamLimits

0xd4ff,	// (0x00083565) main_mobtv_programe_curr_pane

0xd50c,	// (0x00083572) main_mobtv_programe_next_pane_ParamLimits

0xd50c,	// (0x00083572) main_mobtv_programe_next_pane

0x39bb,	// (0x00079a21) popup_mobtv_noti_window

0x23d5,	// (0x0007843b) main_tv_pg_hdr_pane_g1

0x39c3,	// (0x00079a29) main_tv_pg_hdr_pane_g2

0x39cb,	// (0x00079a31) main_tv_pg_hdr_pane_g3

0x39d3,	// (0x00079a39) main_tv_pg_hdr_pane_g4

0x39db,	// (0x00079a41) main_tv_pg_hdr_pane_g5

0x39e5,	// (0x00079a4b) main_tv_pg_hdr_pane_g6

0x39ef,	// (0x00079a55) main_tv_pg_hdr_pane_g7

0x39f9,	// (0x00079a5f) main_tv_pg_hdr_pane_g8

0x3a03,	// (0x00079a69) main_tv_pg_hdr_pane_g9

0x3a0d,	// (0x00079a73) main_tv_pg_hdr_pane_g10

0x3a17,	// (0x00079a7d) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x00085c6e) main_tv_pg_hdr_pane_g

0x3a21,	// (0x00079a87) main_tv_pg_hdr_pane_t1

0x3a2f,	// (0x00079a95) main_tv_pg_hdr_pane_t2

0x3a3d,	// (0x00079aa3) main_tv_pg_hdr_pane_t3

0x3a4d,	// (0x00079ab3) main_tv_pg_hdr_pane_t4

0x3a5d,	// (0x00079ac3) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x00085c85) main_tv_pg_hdr_pane_t

0x3a6d,	// (0x00079ad3) single_mobtv_pg_channel_pane_ParamLimits

0x3a6d,	// (0x00079ad3) single_mobtv_pg_channel_pane

0x3a7f,	// (0x00079ae5) single_mobtv_pg_channel_table_pane

0x3a88,	// (0x00079aee) single_mobtv_pg_channel_thumb_pane

0x3a91,	// (0x00079af7) single_tv_pg_channel_pane_g1

0x3a9a,	// (0x00079b00) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x00085c90) single_tv_pg_channel_pane_g

0x2641,	// (0x000786a7) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2641,	// (0x000786a7) bg_single_mobtv_pg_channel_thumb_pane

0x3aa3,	// (0x00079b09) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x3aa3,	// (0x00079b09) single_mobtv_pg_channel_thumb_pane_g1

0x3ab1,	// (0x00079b17) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x3ab1,	// (0x00079b17) single_mobtv_pg_channel_thumb_pane_g2

0x3abd,	// (0x00079b23) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x3abd,	// (0x00079b23) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x00085c95) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x00085c95) single_mobtv_pg_channel_thumb_pane_g

0x3ac9,	// (0x00079b2f) single_mobtv_pg_channel_thumb_pane_t1

0x3ad7,	// (0x00079b3d) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x00085c9c) single_mobtv_pg_channel_thumb_pane_t

0x23d5,	// (0x0007843b) bg_single_mobtv_pg_channel_table_pane_g1

0x23d5,	// (0x0007843b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x00085742) bg_single_mobtv_pg_channel_table_pane_g

0x3ae5,	// (0x00079b4b) single_mobtv_pg_channel_table_pane_t1

0x3af3,	// (0x00079b59) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x00085ca1) single_mobtv_pg_channel_table_pane_t

0xd521,	// (0x00083587) main_mobtv_info_pane_g1_ParamLimits

0xd521,	// (0x00083587) main_mobtv_info_pane_g1

0xd53d,	// (0x000835a3) main_mobtv_info_pane_t1_ParamLimits

0xd53d,	// (0x000835a3) main_mobtv_info_pane_t1

0xd5b5,	// (0x0008361b) main_mobtv_info_pane_t2_ParamLimits

0xd5b5,	// (0x0008361b) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x00085cab) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x00085cab) main_mobtv_info_pane_t

0xd644,	// (0x000836aa) wait_bar_pane_cp05

0xd656,	// (0x000836bc) main_mobtv_loading_pane_g1_ParamLimits

0xd656,	// (0x000836bc) main_mobtv_loading_pane_g1

0xd664,	// (0x000836ca) main_mobtv_loading_pane_g2_ParamLimits

0xd664,	// (0x000836ca) main_mobtv_loading_pane_g2

0xd670,	// (0x000836d6) main_mobtv_loading_pane_g3_ParamLimits

0xd670,	// (0x000836d6) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x00085cb2) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x00085cb2) main_mobtv_loading_pane_g

0x3b01,	// (0x00079b67) main_mobtv_loading_pane_t1_ParamLimits

0x3b01,	// (0x00079b67) main_mobtv_loading_pane_t1

0x3b19,	// (0x00079b7f) main_mobtv_loading_pane_t2_ParamLimits

0x3b19,	// (0x00079b7f) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x00085cb9) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x00085cb9) main_mobtv_loading_pane_t

0xd67e,	// (0x000836e4) wait_bar_pane_cp06_ParamLimits

0xd67e,	// (0x000836e4) wait_bar_pane_cp06

0x3b3d,	// (0x00079ba3) main_mobtv_programe_curr_pane_t1

0x3b4b,	// (0x00079bb1) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x00085cbe) main_mobtv_programe_curr_pane_t

0x3b59,	// (0x00079bbf) main_mobtv_programe_next_pane_t1

0x3b67,	// (0x00079bcd) main_mobtv_programe_next_pane_t2

0x3b75,	// (0x00079bdb) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x00085cc3) main_mobtv_programe_next_pane_t

0xe8bc,	// (0x00084922) bg_popup_mobtv_noti_window_pane

0x3b83,	// (0x00079be9) popup_mobtv_noti_window_g1

0x3b8b,	// (0x00079bf1) popup_mobtv_noti_window_t1

0x3b99,	// (0x00079bff) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x00085cca) popup_mobtv_noti_window_t

0x23d5,	// (0x0007843b) bg_popup_mobtv_noti_window_pane_g1

0xe8bc,	// (0x00084922) sc_clock_pane

0xe8bc,	// (0x00084922) main_fs_bigclock_pane

0xcd42,	// (0x00082da8) blid2_tripm_pane_t4_ParamLimits

0xcd42,	// (0x00082da8) blid2_tripm_pane_t4

0xd68a,	// (0x000836f0) sc_clock_pane_g1_ParamLimits

0xd68a,	// (0x000836f0) sc_clock_pane_g1

0xd698,	// (0x000836fe) sc_clock_pane_t1_ParamLimits

0xd698,	// (0x000836fe) sc_clock_pane_t1

0xd6ab,	// (0x00083711) sc_clock_pane_t2_ParamLimits

0xd6ab,	// (0x00083711) sc_clock_pane_t2

0xd6bd,	// (0x00083723) sc_clock_pane_t3_ParamLimits

0xd6bd,	// (0x00083723) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x00085ccf) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x00085ccf) sc_clock_pane_t

0xdf98,	// (0x00083ffe) main_fs_bigclock_indicator_pane_ParamLimits

0xdf98,	// (0x00083ffe) main_fs_bigclock_indicator_pane

0xd746,	// (0x000837ac) main_fs_bigclock_pane_g1_ParamLimits

0xd746,	// (0x000837ac) main_fs_bigclock_pane_g1

0xdfa4,	// (0x0008400a) main_fs_bigclock_pane_t1_ParamLimits

0xdfa4,	// (0x0008400a) main_fs_bigclock_pane_t1

0xdfb6,	// (0x0008401c) main_fs_bigclock_pane_t2_ParamLimits

0xdfb6,	// (0x0008401c) main_fs_bigclock_pane_t2

0xdfca,	// (0x00084030) main_fs_bigclock_pane_t3_ParamLimits

0xdfca,	// (0x00084030) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x00085ed9) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x00085ed9) main_fs_bigclock_pane_t

0x43de,	// (0x0007a444) main_fs_bigclock_indicator_pane_g1

0x3873,	// (0x000798d9) ncim_query_content_pane_g2_ParamLimits

0x3873,	// (0x000798d9) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x00085c5c) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x00085c5c) ncim_query_content_pane_g

0xd6d1,	// (0x00083737) sc_clock_pane_t4_ParamLimits

0xd6d1,	// (0x00083737) sc_clock_pane_t4

0x0a50,	// (0x00076ab6) main_radioblah_pane

0x2db2,	// (0x00078e18) cell_call4_button_pane_t1_copy1_ParamLimits

0x2db2,	// (0x00078e18) cell_call4_button_pane_t1_copy1

0xd358,	// (0x000833be) main_ncimui_pane_t1_ParamLimits

0xd358,	// (0x000833be) main_ncimui_pane_t1

0xd372,	// (0x000833d8) main_ncimui_pane_t2_ParamLimits

0xd372,	// (0x000833d8) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x00085c55) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x00085c55) main_ncimui_pane_t

0x3cdd,	// (0x00079d43) main_radioblah_anim_pane_ParamLimits

0x3cdd,	// (0x00079d43) main_radioblah_anim_pane

0x3cee,	// (0x00079d54) main_radioblah_info_pane_ParamLimits

0x3cee,	// (0x00079d54) main_radioblah_info_pane

0x3d02,	// (0x00079d68) main_radioblah_pane_t1_ParamLimits

0x3d02,	// (0x00079d68) main_radioblah_pane_t1

0x3d1e,	// (0x00079d84) main_radioblah_pane_t2_ParamLimits

0x3d1e,	// (0x00079d84) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x00085cf0) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x00085cf0) main_radioblah_pane_t

0xd798,	// (0x000837fe) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd798,	// (0x000837fe) main_radioblah_rocker_ctrl_pane

0x3d86,	// (0x00079dec) main_radioblah_info_pane_t1_ParamLimits

0x3d86,	// (0x00079dec) main_radioblah_info_pane_t1

0xd7dd,	// (0x00083843) main_radioblah_info_pane_t2_ParamLimits

0xd7dd,	// (0x00083843) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x00085cf9) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x00085cf9) main_radioblah_info_pane_t

0x23d5,	// (0x0007843b) main_radioblah_rocker_ctrl_pane_g1

0xd88d,	// (0x000838f3) main_radioblah_rocker_ctrl_pane_g2

0xd895,	// (0x000838fb) main_radioblah_rocker_ctrl_pane_g3

0xd89d,	// (0x00083903) main_radioblah_rocker_ctrl_pane_g4

0xd8a5,	// (0x0008390b) main_radioblah_rocker_ctrl_pane_g5

0xd8ad,	// (0x00083913) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x00085d02) main_radioblah_rocker_ctrl_pane_g

0xd2ff,	// (0x00083365) main_cset_text2_pane_t1_copy1_ParamLimits

0xbb05,	// (0x00081b6b) cam4_image_uncrop_qvga_pane

0xbc4c,	// (0x00081cb2) vid4_image_uncrop_qcif_pane

0xced0,	// (0x00082f36) cam6_image_uncrop_qvga_pane_ParamLimits

0xced0,	// (0x00082f36) cam6_image_uncrop_qvga_pane

0x3588,	// (0x000795ee) vid6_image_uncrop_qcif_pane_ParamLimits

0x3588,	// (0x000795ee) vid6_image_uncrop_qcif_pane

0xe8bc,	// (0x00084922) bg_popup_preview_window_pane_cp03

0x3825,	// (0x0007988b) list_cset_text2_pane

0x382d,	// (0x00079893) main_cset6_text2_pane_g1

0x3835,	// (0x0007989b) main_cset6_text2_pane_t1

0xd8b5,	// (0x0008391b) list_cset_text2_pane_t1_ParamLimits

0xd8b5,	// (0x0008391b) list_cset_text2_pane_t1

0x0a50,	// (0x00076ab6) main_radioblah_pane_ParamLimits

0xd630,	// (0x00083696) main_mobtv_info_pane_t3_ParamLimits

0xd630,	// (0x00083696) main_mobtv_info_pane_t3

0xd786,	// (0x000837ec) main_radioblah_pane_g1

0xd7b1,	// (0x00083817) main_radioblah_info_pane_g1

0xd832,	// (0x00083898) main_radioblah_info_pane_t3_ParamLimits

0xd832,	// (0x00083898) main_radioblah_info_pane_t3

0x8ad4,	// (0x0007eb3a) highlight_cell_cale_month_pane_ParamLimits

0x8ad4,	// (0x0007eb3a) highlight_cell_cale_month_pane

0xe8bc,	// (0x00084922) main_phob_fisheye_pane

0x273d,	// (0x000787a3) scroll_pane_cp0031_ParamLimits

0x273d,	// (0x000787a3) scroll_pane_cp0031

0x3696,	// (0x000796fc) wait_bar_pane_cp08_ParamLimits

0xd0a5,	// (0x0008310b) cset_list_set_pane_copy1_ParamLimits

0x3dc0,	// (0x00079e26) highlight_cell_cale_month_pane_g1

0xd8d2,	// (0x00083938) highlight_cell_cale_month_pane_t1

0x332b,	// (0x00079391) list_gen_pane_cp01

0x2f79,	// (0x00078fdf) scroll_pane_01

0x5e04,	// (0x0007be6a) list_single_double_fisheye_pane

0x5e0d,	// (0x0007be73) list_double_fisheye_pane_g1_ParamLimits

0x5e0d,	// (0x0007be73) list_double_fisheye_pane_g1

0x5e19,	// (0x0007be7f) list_double_fisheye_pane_g2_ParamLimits

0x5e19,	// (0x0007be7f) list_double_fisheye_pane_g2

0x5e2d,	// (0x0007be93) list_double_fisheye_pane_g3_ParamLimits

0x5e2d,	// (0x0007be93) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x00085d0f) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x00085d0f) list_double_fisheye_pane_g

0x5e56,	// (0x0007bebc) list_double_fisheye_pane_t1_ParamLimits

0x5e56,	// (0x0007bebc) list_double_fisheye_pane_t1

0x5e71,	// (0x0007bed7) list_double_fisheye_pane_t2_ParamLimits

0x5e71,	// (0x0007bed7) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x00085d1a) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x00085d1a) list_double_fisheye_pane_t

0xe8bc,	// (0x00084922) main_call5_pane

0xd6f7,	// (0x0008375d) sc_swipe_pane_ParamLimits

0xd6f7,	// (0x0008375d) sc_swipe_pane

0xd8ec,	// (0x00083952) call5_image_pane_ParamLimits

0xd8ec,	// (0x00083952) call5_image_pane

0xd8fc,	// (0x00083962) call5_swipe_1_pane_ParamLimits

0xd8fc,	// (0x00083962) call5_swipe_1_pane

0xd908,	// (0x0008396e) call5_swipe_2_pane_ParamLimits

0xd908,	// (0x0008396e) call5_swipe_2_pane

0xd922,	// (0x00083988) popup_call5_audio_first_window_ParamLimits

0xd922,	// (0x00083988) popup_call5_audio_first_window

0x2641,	// (0x000786a7) call5_swipe_1_pane_g1_ParamLimits

0x2641,	// (0x000786a7) call5_swipe_1_pane_g1

0x3dc8,	// (0x00079e2e) call5_swipe_1_pane_g2_ParamLimits

0x3dc8,	// (0x00079e2e) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x00085d1f) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x00085d1f) call5_swipe_1_pane_g

0x3dd4,	// (0x00079e3a) call5_swipe_1_pane_t1_ParamLimits

0x3dd4,	// (0x00079e3a) call5_swipe_1_pane_t1

0x2641,	// (0x000786a7) call5_swipe_2_pane_g1_ParamLimits

0x2641,	// (0x000786a7) call5_swipe_2_pane_g1

0x3de9,	// (0x00079e4f) call5_swipe_2_pane_g2_ParamLimits

0x3de9,	// (0x00079e4f) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x00085d24) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x00085d24) call5_swipe_2_pane_g

0x3df5,	// (0x00079e5b) call5_swipe_2_pane_t1_ParamLimits

0x3df5,	// (0x00079e5b) call5_swipe_2_pane_t1

0x3e0a,	// (0x00079e70) sc_swipe_pane_g1_ParamLimits

0x3e0a,	// (0x00079e70) sc_swipe_pane_g1

0x3e17,	// (0x00079e7d) sc_swipe_pane_g2_ParamLimits

0x3e17,	// (0x00079e7d) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x00085d29) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x00085d29) sc_swipe_pane_g

0x3e23,	// (0x00079e89) sc_swipe_pane_t1_ParamLimits

0x3e23,	// (0x00079e89) sc_swipe_pane_t1

0xe8bc,	// (0x00084922) main_cmail_launcher_pane

0xd930,	// (0x00083996) aid_size_cell_cmail_l_ParamLimits

0xd930,	// (0x00083996) aid_size_cell_cmail_l

0xd940,	// (0x000839a6) grid_cmail_l_pane_ParamLimits

0xd940,	// (0x000839a6) grid_cmail_l_pane

0xd950,	// (0x000839b6) cell_cmail_l_pane_ParamLimits

0xd950,	// (0x000839b6) cell_cmail_l_pane

0xd964,	// (0x000839ca) cell_cmail_l_pane_g1_ParamLimits

0xd964,	// (0x000839ca) cell_cmail_l_pane_g1

0xd970,	// (0x000839d6) cell_cmail_l_pane_t1_ParamLimits

0xd970,	// (0x000839d6) cell_cmail_l_pane_t1

0x3e38,	// (0x00079e9e) cell_cmail_l_pane_t2_ParamLimits

0x3e38,	// (0x00079e9e) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x00085d2e) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x00085d2e) cell_cmail_l_pane_t

0x0a50,	// (0x00076ab6) grid_highlight_pane_cp018_ParamLimits

0x0a50,	// (0x00076ab6) grid_highlight_pane_cp018

0x6a30,	// (0x0007ca96) main2_pane_ParamLimits

0x6a30,	// (0x0007ca96) main2_pane

0xf0a9,	// (0x0008510f) popup_sp_fs_action_menu_bg_pane_g1

0xf0b1,	// (0x00085117) popup_sp_fs_action_menu_bg_pane_g2

0xf0b9,	// (0x0008511f) popup_sp_fs_action_menu_bg_pane_g3

0x003b,	// (0x000760a1) popup_sp_fs_action_menu_bg_pane_g4

0x0043,	// (0x000760a9) popup_sp_fs_action_menu_bg_pane_g5

0x004b,	// (0x000760b1) popup_sp_fs_action_menu_bg_pane_g6

0x0053,	// (0x000760b9) popup_sp_fs_action_menu_bg_pane_g7

0x005b,	// (0x000760c1) popup_sp_fs_action_menu_bg_pane_g8

0x0063,	// (0x000760c9) popup_sp_fs_action_menu_bg_pane_g9

0x006b,	// (0x000760d1) popup_sp_fs_action_menu_bg_pane_g10

0x006b,	// (0x000760d1) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x000851f0) popup_sp_fs_action_menu_bg_pane_g

0x568f,	// (0x0007b6f5) list_medium_line_x2_t3_g3_g1_ParamLimits

0x568f,	// (0x0007b6f5) list_medium_line_x2_t3_g3_g1

0x79a2,	// (0x0007da08) list_medium_line_x2_t3_g3_g2_ParamLimits

0x79a2,	// (0x0007da08) list_medium_line_x2_t3_g3_g2

0x569b,	// (0x0007b701) list_medium_line_x2_t3_g3_g3_ParamLimits

0x569b,	// (0x0007b701) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0008529e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0008529e) list_medium_line_x2_t3_g3_g

0x56a7,	// (0x0007b70d) list_medium_line_x2_t3_g3_t1_ParamLimits

0x56a7,	// (0x0007b70d) list_medium_line_x2_t3_g3_t1

0x56bc,	// (0x0007b722) list_medium_line_x2_t3_g3_t2_ParamLimits

0x56bc,	// (0x0007b722) list_medium_line_x2_t3_g3_t2

0x56ce,	// (0x0007b734) list_medium_line_x2_t3_g3_t3_ParamLimits

0x56ce,	// (0x0007b734) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000852a5) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000852a5) list_medium_line_x2_t3_g3_t

0x568f,	// (0x0007b6f5) list_medium_line_x2_t3_g2_g1_ParamLimits

0x568f,	// (0x0007b6f5) list_medium_line_x2_t3_g2_g1

0x569b,	// (0x0007b701) list_medium_line_x2_t3_g2_g2_ParamLimits

0x569b,	// (0x0007b701) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000852ac) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000852ac) list_medium_line_x2_t3_g2_g

0x56e3,	// (0x0007b749) list_medium_line_x2_t3_g2_t1_ParamLimits

0x56e3,	// (0x0007b749) list_medium_line_x2_t3_g2_t1

0x56f9,	// (0x0007b75f) list_medium_line_x2_t3_g2_t2_ParamLimits

0x56f9,	// (0x0007b75f) list_medium_line_x2_t3_g2_t2

0x570b,	// (0x0007b771) list_medium_line_x2_t3_g2_t3_ParamLimits

0x570b,	// (0x0007b771) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000852b1) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000852b1) list_medium_line_x2_t3_g2_t

0x568f,	// (0x0007b6f5) list_medium_line_x2_t4_g4_g1_ParamLimits

0x568f,	// (0x0007b6f5) list_medium_line_x2_t4_g4_g1

0x79ae,	// (0x0007da14) list_medium_line_x2_t4_g4_g2_ParamLimits

0x79ae,	// (0x0007da14) list_medium_line_x2_t4_g4_g2

0x79a2,	// (0x0007da08) list_medium_line_x2_t4_g4_g3_ParamLimits

0x79a2,	// (0x0007da08) list_medium_line_x2_t4_g4_g3

0x5728,	// (0x0007b78e) list_medium_line_x2_t4_g4_g4_ParamLimits

0x5728,	// (0x0007b78e) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000852b8) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000852b8) list_medium_line_x2_t4_g4_g

0x5734,	// (0x0007b79a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x5734,	// (0x0007b79a) list_medium_line_x2_t4_g4_t1

0x574b,	// (0x0007b7b1) list_medium_line_x2_t4_g4_t2_ParamLimits

0x574b,	// (0x0007b7b1) list_medium_line_x2_t4_g4_t2

0x5760,	// (0x0007b7c6) list_medium_line_x2_t4_g4_t3_ParamLimits

0x5760,	// (0x0007b7c6) list_medium_line_x2_t4_g4_t3

0x5772,	// (0x0007b7d8) list_medium_line_x2_t4_g4_t4_ParamLimits

0x5772,	// (0x0007b7d8) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000852c1) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000852c1) list_medium_line_x2_t4_g4_t

0x568f,	// (0x0007b6f5) list_medium_line_x2_t2_g4_g1_ParamLimits

0x568f,	// (0x0007b6f5) list_medium_line_x2_t2_g4_g1

0x79ae,	// (0x0007da14) list_medium_line_x2_t2_g4_g2_ParamLimits

0x79ae,	// (0x0007da14) list_medium_line_x2_t2_g4_g2

0x79a2,	// (0x0007da08) list_medium_line_x2_t2_g4_g3_ParamLimits

0x79a2,	// (0x0007da08) list_medium_line_x2_t2_g4_g3

0x569b,	// (0x0007b701) list_medium_line_x2_t2_g4_g4_ParamLimits

0x569b,	// (0x0007b701) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x00085328) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x00085328) list_medium_line_x2_t2_g4_g

0x5784,	// (0x0007b7ea) list_medium_line_x2_t2_g4_t1_ParamLimits

0x5784,	// (0x0007b7ea) list_medium_line_x2_t2_g4_t1

0x56ce,	// (0x0007b734) list_medium_line_x2_t2_g4_t2_ParamLimits

0x56ce,	// (0x0007b734) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x00085331) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x00085331) list_medium_line_x2_t2_g4_t

0x568f,	// (0x0007b6f5) list_medium_line_x2_t2_g3_g1_ParamLimits

0x568f,	// (0x0007b6f5) list_medium_line_x2_t2_g3_g1

0x79a2,	// (0x0007da08) list_medium_line_x2_t2_g3_g2_ParamLimits

0x79a2,	// (0x0007da08) list_medium_line_x2_t2_g3_g2

0x569b,	// (0x0007b701) list_medium_line_x2_t2_g3_g3_ParamLimits

0x569b,	// (0x0007b701) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0008529e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0008529e) list_medium_line_x2_t2_g3_g

0x5799,	// (0x0007b7ff) list_medium_line_x2_t2_g3_t1_ParamLimits

0x5799,	// (0x0007b7ff) list_medium_line_x2_t2_g3_t1

0x56ce,	// (0x0007b734) list_medium_line_x2_t2_g3_t2_ParamLimits

0x56ce,	// (0x0007b734) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x00085336) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x00085336) list_medium_line_x2_t2_g3_t

0x8ca0,	// (0x0007ed06) main_sp_fs_list_pane_ParamLimits

0x8ca0,	// (0x0007ed06) main_sp_fs_list_pane

0x8cac,	// (0x0007ed12) sp_fs_scroll_pane_ParamLimits

0x8cac,	// (0x0007ed12) sp_fs_scroll_pane

0x57ae,	// (0x0007b814) list_medium_line_x2_t3_t1

0x57be,	// (0x0007b824) list_medium_line_x2_t3_t2

0x57cc,	// (0x0007b832) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x00085381) list_medium_line_x2_t3_t

0x57da,	// (0x0007b840) list_medium_line_x3_t4_t1

0x57ea,	// (0x0007b850) list_medium_line_x3_t4_t2

0x57f8,	// (0x0007b85e) list_medium_line_x3_t4_t3

0x57cc,	// (0x0007b832) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x00085388) list_medium_line_x3_t4_t

0x5806,	// (0x0007b86c) list_medium_line_x4_t5_t1

0x5816,	// (0x0007b87c) list_medium_line_x4_t5_t2

0x57f8,	// (0x0007b85e) list_medium_line_x4_t5_t3

0x5824,	// (0x0007b88a) list_medium_line_x4_t5_t4

0x57cc,	// (0x0007b832) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x00085391) list_medium_line_x4_t5_t

0x568f,	// (0x0007b6f5) list_medium_line_t4_g4_g1_ParamLimits

0x568f,	// (0x0007b6f5) list_medium_line_t4_g4_g1

0x5832,	// (0x0007b898) list_medium_line_t4_g4_g2_ParamLimits

0x5832,	// (0x0007b898) list_medium_line_t4_g4_g2

0x583e,	// (0x0007b8a4) list_medium_line_t4_g4_g3_ParamLimits

0x583e,	// (0x0007b8a4) list_medium_line_t4_g4_g3

0x569b,	// (0x0007b701) list_medium_line_t4_g4_g4_ParamLimits

0x569b,	// (0x0007b701) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0008539c) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0008539c) list_medium_line_t4_g4_g

0x584a,	// (0x0007b8b0) list_medium_line_t4_g4_t1_ParamLimits

0x584a,	// (0x0007b8b0) list_medium_line_t4_g4_t1

0x585f,	// (0x0007b8c5) list_medium_line_t4_g4_t2_ParamLimits

0x585f,	// (0x0007b8c5) list_medium_line_t4_g4_t2

0x5874,	// (0x0007b8da) list_medium_line_t4_g4_t3_ParamLimits

0x5874,	// (0x0007b8da) list_medium_line_t4_g4_t3

0x56ce,	// (0x0007b734) list_medium_line_t4_g4_t4_ParamLimits

0x56ce,	// (0x0007b734) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000853a5) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000853a5) list_medium_line_t4_g4_t

0x8db9,	// (0x0007ee1f) chi_dic_find_pane_g1

0x9c28,	// (0x0007fc8e) main_tport_pane

0x5ad0,	// (0x0007bb36) list_medium_line_plain_t1

0x5ade,	// (0x0007bb44) list_medium_line_t2_g2_g1_ParamLimits

0x5ade,	// (0x0007bb44) list_medium_line_t2_g2_g1

0xc68e,	// (0x000826f4) list_medium_line_t2_g2_g2_ParamLimits

0xc68e,	// (0x000826f4) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x00085a66) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x00085a66) list_medium_line_t2_g2_g

0x5aea,	// (0x0007bb50) list_medium_line_t2_g2_t1_ParamLimits

0x5aea,	// (0x0007bb50) list_medium_line_t2_g2_t1

0x5b01,	// (0x0007bb67) list_medium_line_t2_g2_t2_ParamLimits

0x5b01,	// (0x0007bb67) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x00085a6b) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x00085a6b) list_medium_line_t2_g2_t

0x5d20,	// (0x0007bd86) aid_sp_fs_list_icon_a_sm

0xcb99,	// (0x00082bff) aid_sp_fs_list_icon_d

0x5d28,	// (0x0007bd8e) aid_sp_fs_text_primary

0x5d31,	// (0x0007bd97) aid_sp_fs_text_secondary

0xcba1,	// (0x00082c07) list_medium_line

0xcba1,	// (0x00082c07) list_medium_line_g2

0xcba1,	// (0x00082c07) list_medium_line_g3

0xcba1,	// (0x00082c07) list_medium_line_plain

0xcba1,	// (0x00082c07) list_medium_line_plain_t2

0xcba1,	// (0x00082c07) list_medium_line_plain_t3

0xcba1,	// (0x00082c07) list_medium_line_right_icon

0xcba1,	// (0x00082c07) list_medium_line_right_iconx2

0xcba1,	// (0x00082c07) list_medium_line_t2

0xcba1,	// (0x00082c07) list_medium_line_t2_g2

0xcba1,	// (0x00082c07) list_medium_line_t2_g3

0xcba1,	// (0x00082c07) list_medium_line_t2_right_icon

0xcba1,	// (0x00082c07) list_medium_line_t2_right_iconx2

0xcba1,	// (0x00082c07) list_medium_line_t3

0xcba1,	// (0x00082c07) list_medium_line_t3_g2

0xcba1,	// (0x00082c07) list_medium_line_t3_g3

0xcba1,	// (0x00082c07) list_medium_line_t3_right_iconx2

0xcbaa,	// (0x00082c10) list_medium_line_t4_g4

0xed77,	// (0x00084ddd) list_medium_line_x2

0xed77,	// (0x00084ddd) list_medium_line_x2_t2_g2

0xed77,	// (0x00084ddd) list_medium_line_x2_t2_g3

0xed77,	// (0x00084ddd) list_medium_line_x2_t2_g4

0xed77,	// (0x00084ddd) list_medium_line_x2_t3

0xed77,	// (0x00084ddd) list_medium_line_x2_t3_g2

0xed77,	// (0x00084ddd) list_medium_line_x2_t3_g3

0xed77,	// (0x00084ddd) list_medium_line_x2_t3_g4

0xed77,	// (0x00084ddd) list_medium_line_x2_t4_g2

0xed77,	// (0x00084ddd) list_medium_line_x2_t4_g4

0xcbb3,	// (0x00082c19) list_medium_line_x3

0xcbb3,	// (0x00082c19) list_medium_line_x3_t4

0xcbb3,	// (0x00082c19) list_medium_line_x3_t4_g4

0xcbaa,	// (0x00082c10) list_medium_line_x4_t4

0xcbaa,	// (0x00082c10) list_medium_line_x4_t4_g7

0xcbaa,	// (0x00082c10) list_medium_line_x4_t5

0x5d3a,	// (0x0007bda0) list_single_fs_dyc_pane_ParamLimits

0x5d3a,	// (0x0007bda0) list_single_fs_dyc_pane

0x568f,	// (0x0007b6f5) list_medium_line_x4_t4_g7_g1_ParamLimits

0x568f,	// (0x0007b6f5) list_medium_line_x4_t4_g7_g1

0x5d4e,	// (0x0007bdb4) list_medium_line_x4_t4_g7_g2_ParamLimits

0x5d4e,	// (0x0007bdb4) list_medium_line_x4_t4_g7_g2

0xd2e4,	// (0x0008334a) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd2e4,	// (0x0008334a) list_medium_line_x4_t4_g7_g3

0xd2f3,	// (0x00083359) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd2f3,	// (0x00083359) list_medium_line_x4_t4_g7_g4

0x5d5a,	// (0x0007bdc0) list_medium_line_x4_t4_g7_g5_ParamLimits

0x5d5a,	// (0x0007bdc0) list_medium_line_x4_t4_g7_g5

0x5d69,	// (0x0007bdcf) list_medium_line_x4_t4_g7_g6_ParamLimits

0x5d69,	// (0x0007bdcf) list_medium_line_x4_t4_g7_g6

0x5d78,	// (0x0007bdde) list_medium_line_x4_t4_g7_g7_ParamLimits

0x5d78,	// (0x0007bdde) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x00085c36) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x00085c36) list_medium_line_x4_t4_g7_g

0x5d84,	// (0x0007bdea) list_medium_line_x4_t4_g7_t1_ParamLimits

0x5d84,	// (0x0007bdea) list_medium_line_x4_t4_g7_t1

0x5d99,	// (0x0007bdff) list_medium_line_x4_t4_g7_t2_ParamLimits

0x5d99,	// (0x0007bdff) list_medium_line_x4_t4_g7_t2

0x5dae,	// (0x0007be14) list_medium_line_x4_t4_g7_t3_ParamLimits

0x5dae,	// (0x0007be14) list_medium_line_x4_t4_g7_t3

0x5dc3,	// (0x0007be29) list_medium_line_x4_t4_g7_t4_ParamLimits

0x5dc3,	// (0x0007be29) list_medium_line_x4_t4_g7_t4

0x5dd5,	// (0x0007be3b) list_medium_line_x4_t4_g7_t5_ParamLimits

0x5dd5,	// (0x0007be3b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x00085c45) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x00085c45) list_medium_line_x4_t4_g7_t

0x5de7,	// (0x0007be4d) list_single_dyc_row_pane_ParamLimits

0x5de7,	// (0x0007be4d) list_single_dyc_row_pane

0xd8e0,	// (0x00083946) call5_gesture_pane_ParamLimits

0xd8e0,	// (0x00083946) call5_gesture_pane

0xd914,	// (0x0008397a) call5_windows_pane_ParamLimits

0xd914,	// (0x0008397a) call5_windows_pane

0xd986,	// (0x000839ec) call5_swipe_1_pane_cp_ParamLimits

0xd986,	// (0x000839ec) call5_swipe_1_pane_cp

0xd992,	// (0x000839f8) call5_swipe_2_pane_cp_ParamLimits

0xd992,	// (0x000839f8) call5_swipe_2_pane_cp

0x014f,	// (0x000761b5) call5_image_pane_cp

0xd99e,	// (0x00083a04) popup_call5_audio_first_window_cp_ParamLimits

0xd99e,	// (0x00083a04) popup_call5_audio_first_window_cp

0x3e0a,	// (0x00079e70) call5_swipe_1_pane_g1_cp_ParamLimits

0x3e0a,	// (0x00079e70) call5_swipe_1_pane_g1_cp

0x3e4a,	// (0x00079eb0) call5_swipe_1_pane_g2_cp

0x3e23,	// (0x00079e89) call5_swipe_1_pane_t1_cp_ParamLimits

0x3e23,	// (0x00079e89) call5_swipe_1_pane_t1_cp

0x3e0a,	// (0x00079e70) call5_swipe_2_pane_g1_cp_ParamLimits

0x3e0a,	// (0x00079e70) call5_swipe_2_pane_g1_cp

0x3e52,	// (0x00079eb8) call5_swipe_2_pane_g2_cp

0x3e5a,	// (0x00079ec0) call5_swipe_2_pane_t1_cp_ParamLimits

0x3e5a,	// (0x00079ec0) call5_swipe_2_pane_t1_cp

0x0a50,	// (0x00076ab6) main_sp_fs_email_pane

0x3e6f,	// (0x00079ed5) main_sp_fs_listscroll_pane_te

0xd9ac,	// (0x00083a12) popup_sp_fs_action_menu_pane_ParamLimits

0xd9ac,	// (0x00083a12) popup_sp_fs_action_menu_pane

0x23d5,	// (0x0007843b) bg_sp_fs_ctrlbar_pane_g1

0x29d4,	// (0x00078a3a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x29e6,	// (0x00078a4c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x29dd,	// (0x00078a43) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x23d5,	// (0x0007843b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x00085d33) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x21ba,	// (0x00078220) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x21ba,	// (0x00078220) bg_sp_fs_ctrlbar_ddmenu_pane

0x3e78,	// (0x00079ede) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x3e78,	// (0x00079ede) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x3e84,	// (0x00079eea) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x3e84,	// (0x00079eea) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x00085d3c) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x00085d3c) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3e90,	// (0x00079ef6) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3e90,	// (0x00079ef6) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xd9f0,	// (0x00083a56) list_medium_line_t2_right_icon_g1

0x5e93,	// (0x0007bef9) list_medium_line_t2_right_icon_t1

0x5ea3,	// (0x0007bf09) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x00085d41) list_medium_line_t2_right_icon_t

0x1fcd,	// (0x00078033) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1fcd,	// (0x00078033) bg_sp_fs_ctrlbar_pane

0xda4f,	// (0x00083ab5) main_sp_fs_ctrlbar_button_pane_cp01

0xda57,	// (0x00083abd) main_sp_fs_ctrlbar_ddmenu_pane

0x3ee2,	// (0x00079f48) main_sp_fs_ctrlbar_pane_g1

0x3eee,	// (0x00079f54) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x00085d46) main_sp_fs_ctrlbar_pane_g

0x3efa,	// (0x00079f60) main_sp_fs_ctrlbar_pane_t1

0xda61,	// (0x00083ac7) main_sp_fs_ctrlbar_pane

0xda77,	// (0x00083add) main_sp_fs_listscroll_pane_te_cp01

0x5eb1,	// (0x0007bf17) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x5eb1,	// (0x0007bf17) popup_sp_fs_action_menu_pane_cp01

0x0a50,	// (0x00076ab6) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0a50,	// (0x00076ab6) bg_sp_fs_highlight_list_pane_cp01

0x5edb,	// (0x0007bf41) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5edb,	// (0x0007bf41) sp_fs_action_menu_list_gene_pane_g1

0x3f2a,	// (0x00079f90) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x3f2a,	// (0x00079f90) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x00085d50) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x00085d50) sp_fs_action_menu_list_gene_pane_g

0x5eea,	// (0x0007bf50) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5eea,	// (0x0007bf50) sp_fs_action_menu_list_gene_pane_t1

0x5f02,	// (0x0007bf68) sp_fs_action_menu_list_gene_pane_ParamLimits

0x5f02,	// (0x0007bf68) sp_fs_action_menu_list_gene_pane

0x3f37,	// (0x00079f9d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x3f37,	// (0x00079f9d) popup_sp_fs_action_menu_bg_pane

0x5f23,	// (0x0007bf89) sp_fs_action_menu_list_pane_ParamLimits

0x5f23,	// (0x0007bf89) sp_fs_action_menu_list_pane

0x5f45,	// (0x0007bfab) sp_fs_scroll_pane_cp01_ParamLimits

0x5f45,	// (0x0007bfab) sp_fs_scroll_pane_cp01

0x5f6b,	// (0x0007bfd1) list_medium_line_plain_t2_t1

0x5f7b,	// (0x0007bfe1) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x00085d55) list_medium_line_plain_t2_t

0x5f89,	// (0x0007bfef) list_medium_line_plain_t3_t1

0x5f99,	// (0x0007bfff) list_medium_line_plain_t3_t2

0x5fa7,	// (0x0007c00d) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x00085d5a) list_medium_line_plain_t3_t

0x568f,	// (0x0007b6f5) list_medium_line_x2_t2_g2_g1_ParamLimits

0x568f,	// (0x0007b6f5) list_medium_line_x2_t2_g2_g1

0x569b,	// (0x0007b701) list_medium_line_x2_t2_g2_g2_ParamLimits

0x569b,	// (0x0007b701) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000852ac) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000852ac) list_medium_line_x2_t2_g2_g

0x584a,	// (0x0007b8b0) list_medium_line_x2_t2_g2_t1_ParamLimits

0x584a,	// (0x0007b8b0) list_medium_line_x2_t2_g2_t1

0x56ce,	// (0x0007b734) list_medium_line_x2_t2_g2_t2_ParamLimits

0x56ce,	// (0x0007b734) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x00085d61) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x00085d61) list_medium_line_x2_t2_g2_t

0x568f,	// (0x0007b6f5) list_medium_line_x2_t4_g2_g1_ParamLimits

0x568f,	// (0x0007b6f5) list_medium_line_x2_t4_g2_g1

0x5fb5,	// (0x0007c01b) list_medium_line_x2_t4_g2_g2_ParamLimits

0x5fb5,	// (0x0007c01b) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x00085d66) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x00085d66) list_medium_line_x2_t4_g2_g

0x5fc7,	// (0x0007c02d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x5fc7,	// (0x0007c02d) list_medium_line_x2_t4_g2_t1

0x5fe1,	// (0x0007c047) list_medium_line_x2_t4_g2_t2_ParamLimits

0x5fe1,	// (0x0007c047) list_medium_line_x2_t4_g2_t2

0x5ff6,	// (0x0007c05c) list_medium_line_x2_t4_g2_t3_ParamLimits

0x5ff6,	// (0x0007c05c) list_medium_line_x2_t4_g2_t3

0x56ce,	// (0x0007b734) list_medium_line_x2_t4_g2_t4_ParamLimits

0x56ce,	// (0x0007b734) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x00085d6b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x00085d6b) list_medium_line_x2_t4_g2_t

0xda88,	// (0x00083aee) list_medium_line_t3_right_iconx2_g1

0xd9f0,	// (0x00083a56) list_medium_line_t3_right_iconx2_g2

0x600b,	// (0x0007c071) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x00085d74) list_medium_line_t3_right_iconx2_g

0x6013,	// (0x0007c079) list_medium_line_t3_right_iconx2_t1

0x6023,	// (0x0007c089) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x00085d7b) list_medium_line_t3_right_iconx2_t

0x568f,	// (0x0007b6f5) list_medium_line_x3_t4_g4_g1_ParamLimits

0x568f,	// (0x0007b6f5) list_medium_line_x3_t4_g4_g1

0x79a2,	// (0x0007da08) list_medium_line_x3_t4_g4_g2_ParamLimits

0x79a2,	// (0x0007da08) list_medium_line_x3_t4_g4_g2

0x5832,	// (0x0007b898) list_medium_line_x3_t4_g4_g3_ParamLimits

0x5832,	// (0x0007b898) list_medium_line_x3_t4_g4_g3

0xda90,	// (0x00083af6) list_medium_line_x3_t4_g4_g4_ParamLimits

0xda90,	// (0x00083af6) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x00085d80) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x00085d80) list_medium_line_x3_t4_g4_g

0x6031,	// (0x0007c097) list_medium_line_x3_t4_g4_t1_ParamLimits

0x6031,	// (0x0007c097) list_medium_line_x3_t4_g4_t1

0x6048,	// (0x0007c0ae) list_medium_line_x3_t4_g4_t2_ParamLimits

0x6048,	// (0x0007c0ae) list_medium_line_x3_t4_g4_t2

0x585f,	// (0x0007b8c5) list_medium_line_x3_t4_g4_t3_ParamLimits

0x585f,	// (0x0007b8c5) list_medium_line_x3_t4_g4_t3

0x605d,	// (0x0007c0c3) list_medium_line_x3_t4_g4_t4_ParamLimits

0x605d,	// (0x0007c0c3) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x00085d89) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x00085d89) list_medium_line_x3_t4_g4_t

0x607a,	// (0x0007c0e0) list_single_dyc_row_text_pane_t1_ParamLimits

0x607a,	// (0x0007c0e0) list_single_dyc_row_text_pane_t1

0x60b1,	// (0x0007c117) list_single_dyc_row_text_pane_t2_ParamLimits

0x60b1,	// (0x0007c117) list_single_dyc_row_text_pane_t2

0x6127,	// (0x0007c18d) list_single_dyc_row_text_pane_t3_ParamLimits

0x6127,	// (0x0007c18d) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x00085d92) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x00085d92) list_single_dyc_row_text_pane_t

0x61f8,	// (0x0007c25e) list_single_dyc_row_pane_g1_ParamLimits

0x61f8,	// (0x0007c25e) list_single_dyc_row_pane_g1

0x6204,	// (0x0007c26a) list_single_dyc_row_pane_g2_ParamLimits

0x6204,	// (0x0007c26a) list_single_dyc_row_pane_g2

0x6210,	// (0x0007c276) list_single_dyc_row_pane_g3_ParamLimits

0x6210,	// (0x0007c276) list_single_dyc_row_pane_g3

0x621c,	// (0x0007c282) list_single_dyc_row_pane_g4_ParamLimits

0x621c,	// (0x0007c282) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x00085d9f) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x00085d9f) list_single_dyc_row_pane_g

0x6228,	// (0x0007c28e) list_single_dyc_row_text_pane_ParamLimits

0x6228,	// (0x0007c28e) list_single_dyc_row_text_pane

0xe8bc,	// (0x00084922) bg_sp_fs_scroll_pane

0x3f45,	// (0x00079fab) thumb_sp_fs_scroll_pane

0x5ade,	// (0x0007bb44) list_medium_line_g1_ParamLimits

0x5ade,	// (0x0007bb44) list_medium_line_g1

0x6247,	// (0x0007c2ad) list_medium_line_t1_ParamLimits

0x6247,	// (0x0007c2ad) list_medium_line_t1

0x568f,	// (0x0007b6f5) list_medium_line_x2_g1_ParamLimits

0x568f,	// (0x0007b6f5) list_medium_line_x2_g1

0x79a2,	// (0x0007da08) list_medium_line_x2_g2_ParamLimits

0x79a2,	// (0x0007da08) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x00085da8) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x00085da8) list_medium_line_x2_g

0x625c,	// (0x0007c2c2) list_medium_line_x2_t1_ParamLimits

0x625c,	// (0x0007c2c2) list_medium_line_x2_t1

0x568f,	// (0x0007b6f5) list_medium_line_x3_g1_ParamLimits

0x568f,	// (0x0007b6f5) list_medium_line_x3_g1

0x79a2,	// (0x0007da08) list_medium_line_x3_g2_ParamLimits

0x79a2,	// (0x0007da08) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x00085da8) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x00085da8) list_medium_line_x3_g

0x625c,	// (0x0007c2c2) list_medium_line_x3_t1_ParamLimits

0x625c,	// (0x0007c2c2) list_medium_line_x3_t1

0x3f4e,	// (0x00079fb4) thumb_sp_fs_scroll_pane_g1

0x3f57,	// (0x00079fbd) thumb_sp_fs_scroll_pane_g2

0x3f60,	// (0x00079fc6) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00085dad) thumb_sp_fs_scroll_pane_g

0x3f4e,	// (0x00079fb4) bg_sp_fs_scroll_pane_g1

0x3f57,	// (0x00079fbd) bg_sp_fs_scroll_pane_g2

0x3f60,	// (0x00079fc6) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00085dad) bg_sp_fs_scroll_pane_g

0x568f,	// (0x0007b6f5) list_medium_line_x2_t3_g4_g1_ParamLimits

0x568f,	// (0x0007b6f5) list_medium_line_x2_t3_g4_g1

0x79ae,	// (0x0007da14) list_medium_line_x2_t3_g4_g2_ParamLimits

0x79ae,	// (0x0007da14) list_medium_line_x2_t3_g4_g2

0x79a2,	// (0x0007da08) list_medium_line_x2_t3_g4_g3_ParamLimits

0x79a2,	// (0x0007da08) list_medium_line_x2_t3_g4_g3

0x569b,	// (0x0007b701) list_medium_line_x2_t3_g4_g4_ParamLimits

0x569b,	// (0x0007b701) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x00085328) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x00085328) list_medium_line_x2_t3_g4_g

0x6272,	// (0x0007c2d8) list_medium_line_x2_t3_g4_t1_ParamLimits

0x6272,	// (0x0007c2d8) list_medium_line_x2_t3_g4_t1

0x6288,	// (0x0007c2ee) list_medium_line_x2_t3_g4_t2_ParamLimits

0x6288,	// (0x0007c2ee) list_medium_line_x2_t3_g4_t2

0x56ce,	// (0x0007b734) list_medium_line_x2_t3_g4_t3_ParamLimits

0x56ce,	// (0x0007b734) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x00085db4) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x00085db4) list_medium_line_x2_t3_g4_t

0x5ade,	// (0x0007bb44) list_medium_line_g2_g1_ParamLimits

0x5ade,	// (0x0007bb44) list_medium_line_g2_g1

0xc68e,	// (0x000826f4) list_medium_line_g2_g2_ParamLimits

0xc68e,	// (0x000826f4) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x00085a66) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x00085a66) list_medium_line_g2_g

0x62a2,	// (0x0007c308) list_medium_line_g2_t1_ParamLimits

0x62a2,	// (0x0007c308) list_medium_line_g2_t1

0x5ade,	// (0x0007bb44) list_medium_line_t3_g2_g1_ParamLimits

0x5ade,	// (0x0007bb44) list_medium_line_t3_g2_g1

0xc68e,	// (0x000826f4) list_medium_line_t3_g2_g2_ParamLimits

0xc68e,	// (0x000826f4) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x00085a66) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x00085a66) list_medium_line_t3_g2_g

0x62b7,	// (0x0007c31d) list_medium_line_t3_g2_t1_ParamLimits

0x62b7,	// (0x0007c31d) list_medium_line_t3_g2_t1

0x62ce,	// (0x0007c334) list_medium_line_t3_g2_t2_ParamLimits

0x62ce,	// (0x0007c334) list_medium_line_t3_g2_t2

0x62e3,	// (0x0007c349) list_medium_line_t3_g2_t3_ParamLimits

0x62e3,	// (0x0007c349) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x00085dbb) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x00085dbb) list_medium_line_t3_g2_t

0xd9f0,	// (0x00083a56) list_medium_line_right_icon_g1

0x62f8,	// (0x0007c35e) list_medium_line_right_icon_t1

0x5ade,	// (0x0007bb44) list_medium_line_t2_g1_ParamLimits

0x5ade,	// (0x0007bb44) list_medium_line_t2_g1

0x6306,	// (0x0007c36c) list_medium_line_t2_t1_ParamLimits

0x6306,	// (0x0007c36c) list_medium_line_t2_t1

0x6320,	// (0x0007c386) list_medium_line_t2_t2_ParamLimits

0x6320,	// (0x0007c386) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x00085dc2) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x00085dc2) list_medium_line_t2_t

0x5ade,	// (0x0007bb44) list_medium_line_t3_g1_ParamLimits

0x5ade,	// (0x0007bb44) list_medium_line_t3_g1

0x6335,	// (0x0007c39b) list_medium_line_t3_t1_ParamLimits

0x6335,	// (0x0007c39b) list_medium_line_t3_t1

0x634f,	// (0x0007c3b5) list_medium_line_t3_t2_ParamLimits

0x634f,	// (0x0007c3b5) list_medium_line_t3_t2

0x6364,	// (0x0007c3ca) list_medium_line_t3_t3_ParamLimits

0x6364,	// (0x0007c3ca) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x00085dc7) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x00085dc7) list_medium_line_t3_t

0x5ade,	// (0x0007bb44) list_medium_line_g3_g1_ParamLimits

0x5ade,	// (0x0007bb44) list_medium_line_g3_g1

0xda9c,	// (0x00083b02) list_medium_line_g3_g2_ParamLimits

0xda9c,	// (0x00083b02) list_medium_line_g3_g2

0xc68e,	// (0x000826f4) list_medium_line_g3_g3_ParamLimits

0xc68e,	// (0x000826f4) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x00085dce) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x00085dce) list_medium_line_g3_g

0x6379,	// (0x0007c3df) list_medium_line_g3_t1_ParamLimits

0x6379,	// (0x0007c3df) list_medium_line_g3_t1

0x5ade,	// (0x0007bb44) list_medium_line_t2_g3_g1_ParamLimits

0x5ade,	// (0x0007bb44) list_medium_line_t2_g3_g1

0xda9c,	// (0x00083b02) list_medium_line_t2_g3_g2_ParamLimits

0xda9c,	// (0x00083b02) list_medium_line_t2_g3_g2

0xc68e,	// (0x000826f4) list_medium_line_t2_g3_g3_ParamLimits

0xc68e,	// (0x000826f4) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x00085dce) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x00085dce) list_medium_line_t2_g3_g

0x638e,	// (0x0007c3f4) list_medium_line_t2_g3_t1_ParamLimits

0x638e,	// (0x0007c3f4) list_medium_line_t2_g3_t1

0x63a5,	// (0x0007c40b) list_medium_line_t2_g3_t2_ParamLimits

0x63a5,	// (0x0007c40b) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x00085dd5) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x00085dd5) list_medium_line_t2_g3_t

0x5ade,	// (0x0007bb44) list_medium_line_t3_g3_g1_ParamLimits

0x5ade,	// (0x0007bb44) list_medium_line_t3_g3_g1

0xda9c,	// (0x00083b02) list_medium_line_t3_g3_g2_ParamLimits

0xda9c,	// (0x00083b02) list_medium_line_t3_g3_g2

0xc68e,	// (0x000826f4) list_medium_line_t3_g3_g3_ParamLimits

0xc68e,	// (0x000826f4) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x00085dce) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x00085dce) list_medium_line_t3_g3_g

0x63ba,	// (0x0007c420) list_medium_line_t3_g3_t1_ParamLimits

0x63ba,	// (0x0007c420) list_medium_line_t3_g3_t1

0x63d3,	// (0x0007c439) list_medium_line_t3_g3_t2_ParamLimits

0x63d3,	// (0x0007c439) list_medium_line_t3_g3_t2

0x63e9,	// (0x0007c44f) list_medium_line_t3_g3_t3_ParamLimits

0x63e9,	// (0x0007c44f) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x00085dda) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x00085dda) list_medium_line_t3_g3_t

0xda88,	// (0x00083aee) list_medium_line_right_iconx2_g1

0xd9f0,	// (0x00083a56) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00085de1) list_medium_line_right_iconx2_g

0xdaa8,	// (0x00083b0e) list_medium_line_right_iconx2_t1

0xda88,	// (0x00083aee) list_medium_line_t2_right_iconx2_g1

0xd9f0,	// (0x00083a56) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00085de1) list_medium_line_t2_right_iconx2_g

0x63ff,	// (0x0007c465) list_medium_line_t2_right_iconx2_t1

0x640f,	// (0x0007c475) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x00085de6) list_medium_line_t2_right_iconx2_t

0x641d,	// (0x0007c483) list_medium_line_x4_t4_t1

0x642b,	// (0x0007c491) list_medium_line_x4_t4_t2

0x643b,	// (0x0007c4a1) list_medium_line_x4_t4_t3

0x644b,	// (0x0007c4b1) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x00085deb) list_medium_line_x4_t4_t

0xdae0,	// (0x00083b46) tport_appsw_pane_ParamLimits

0xdae0,	// (0x00083b46) tport_appsw_pane

0xdaee,	// (0x00083b54) tport_contact_pane_ParamLimits

0xdaee,	// (0x00083b54) tport_contact_pane

0xdafe,	// (0x00083b64) tport_listscroll_pane_ParamLimits

0xdafe,	// (0x00083b64) tport_listscroll_pane

0xdb0e,	// (0x00083b74) cell_tport_appsw_pane_ParamLimits

0xdb0e,	// (0x00083b74) cell_tport_appsw_pane

0x26c6,	// (0x0007872c) tport_appsw_pane_g1_ParamLimits

0x26c6,	// (0x0007872c) tport_appsw_pane_g1

0x3f69,	// (0x00079fcf) tport_contact_pane_g1

0x38f9,	// (0x0007995f) tport_contact_pane_t1

0x3f72,	// (0x00079fd8) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x00085df4) tport_contact_pane_t

0x3f80,	// (0x00079fe6) list_tport_pane

0x3f89,	// (0x00079fef) scroll_pane_cp_030

0xdb41,	// (0x00083ba7) cell_tport_appsw_pane_g1

0xdb51,	// (0x00083bb7) cell_tport_appsw_pane_t1

0xdb5f,	// (0x00083bc5) grid_highlight_pane_cp019

0xdb67,	// (0x00083bcd) list_tport_double_graphic_pane_ParamLimits

0xdb67,	// (0x00083bcd) list_tport_double_graphic_pane

0x0a50,	// (0x00076ab6) list_highlight_pane_cp023_ParamLimits

0x0a50,	// (0x00076ab6) list_highlight_pane_cp023

0xdb78,	// (0x00083bde) list_tport_double_graphic_pane_g1_ParamLimits

0xdb78,	// (0x00083bde) list_tport_double_graphic_pane_g1

0xdb85,	// (0x00083beb) list_tport_double_graphic_pane_t1_ParamLimits

0xdb85,	// (0x00083beb) list_tport_double_graphic_pane_t1

0xdb9a,	// (0x00083c00) list_tport_double_graphic_pane_t2_ParamLimits

0xdb9a,	// (0x00083c00) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x00085e00) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x00085e00) list_tport_double_graphic_pane_t

0xe8bc,	// (0x00084922) main_cale_note_pane

0xbead,	// (0x00081f13) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xbead,	// (0x00081f13) cell_vitu2_function_top_wide_pane_cp01

0xd644,	// (0x000836aa) wait_bar_pane_cp05_ParamLimits

0x0a50,	// (0x00076ab6) listscroll_cmail_pane

0x3f92,	// (0x00079ff8) list_cmail_pane

0xdbac,	// (0x00083c12) list_cmail_body_pane

0xdbcc,	// (0x00083c32) list_single_cmail_header_caption_pane

0xdbf8,	// (0x00083c5e) list_single_cmail_header_detail_pane_ParamLimits

0xdbf8,	// (0x00083c5e) list_single_cmail_header_detail_pane

0x3fa2,	// (0x0007a008) list_single_cmail_header_caption_pane_t1

0x645b,	// (0x0007c4c1) list_single_cmail_header_detail_pane_g1_ParamLimits

0x645b,	// (0x0007c4c1) list_single_cmail_header_detail_pane_g1

0xdc2e,	// (0x00083c94) list_single_cmail_header_detail_pane_g2_ParamLimits

0xdc2e,	// (0x00083c94) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x00085e05) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x00085e05) list_single_cmail_header_detail_pane_g

0x6471,	// (0x0007c4d7) list_single_cmail_header_detail_pane_t1_ParamLimits

0x6471,	// (0x0007c4d7) list_single_cmail_header_detail_pane_t1

0x64d1,	// (0x0007c537) list_single_cmail_header_editor_pane_bg_ParamLimits

0x64d1,	// (0x0007c537) list_single_cmail_header_editor_pane_bg

0x3a9a,	// (0x00079b00) list_cmail_body_pane_g1

0x3fc6,	// (0x0007a02c) list_cmail_body_pane_t1

0x2e5f,	// (0x00078ec5) list_single_cmail_header_editor_pane_bg_g1

0x03a8,	// (0x0007640e) list_single_cmail_header_editor_pane_bg_g1_copy1

0x2e6f,	// (0x00078ed5) list_single_cmail_header_editor_pane_bg_g1_copy2

0x2e67,	// (0x00078ecd) list_single_cmail_header_editor_pane_bg_g1_copy3

0x3083,	// (0x000790e9) list_single_cmail_header_editor_pane_bg_g1_copy4

0x2e8f,	// (0x00078ef5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x2e7f,	// (0x00078ee5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x2e87,	// (0x00078eed) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0388,	// (0x000763ee) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xdc3a,	// (0x00083ca0) calenote_gesture_pane_ParamLimits

0xdc3a,	// (0x00083ca0) calenote_gesture_pane

0xdc54,	// (0x00083cba) calenote_window_pane_ParamLimits

0xdc54,	// (0x00083cba) calenote_window_pane

0x3fd4,	// (0x0007a03a) popup_note_window_cp01

0xdc6c,	// (0x00083cd2) calenote_swipe_1_pane_ParamLimits

0xdc6c,	// (0x00083cd2) calenote_swipe_1_pane

0xd992,	// (0x000839f8) calenote_swipe_2_pane_ParamLimits

0xd992,	// (0x000839f8) calenote_swipe_2_pane

0x3e0a,	// (0x00079e70) calenote_swipe_1_pane_g1_ParamLimits

0x3e0a,	// (0x00079e70) calenote_swipe_1_pane_g1

0x3e17,	// (0x00079e7d) calenote_swipe_1_pane_g2_ParamLimits

0x3e17,	// (0x00079e7d) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x00085d29) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x00085d29) calenote_swipe_1_pane_g

0x3fe6,	// (0x0007a04c) calenote_swipe_1_pane_t1_ParamLimits

0x3fe6,	// (0x0007a04c) calenote_swipe_1_pane_t1

0x3e0a,	// (0x00079e70) calenote_swipe_2_pane_g1_ParamLimits

0x3e0a,	// (0x00079e70) calenote_swipe_2_pane_g1

0x4005,	// (0x0007a06b) calenote_swipe_2_pane_g2_ParamLimits

0x4005,	// (0x0007a06b) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x00085e11) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x00085e11) calenote_swipe_2_pane_g

0x4011,	// (0x0007a077) calenote_swipe_2_pane_t1_ParamLimits

0x4011,	// (0x0007a077) calenote_swipe_2_pane_t1

0xe8bc,	// (0x00084922) main_mup_navstr_pane

0xac28,	// (0x00080c8e) main_mup3_pane_t7_ParamLimits

0xac28,	// (0x00080c8e) main_mup3_pane_t7

0xb62d,	// (0x00081693) main_mp4_pane_g6_ParamLimits

0xb62d,	// (0x00081693) main_mp4_pane_g6

0xb99f,	// (0x00081a05) main_image3_pane_t4_ParamLimits

0xb99f,	// (0x00081a05) main_image3_pane_t4

0xdc7f,	// (0x00083ce5) popup_navstr_preview_pane_ParamLimits

0xdc7f,	// (0x00083ce5) popup_navstr_preview_pane

0xdc8b,	// (0x00083cf1) scroll_navstr_pane_ParamLimits

0xdc8b,	// (0x00083cf1) scroll_navstr_pane

0xe8bc,	// (0x00084922) bg_popup_preview_window_pane_cp04

0x4038,	// (0x0007a09e) popup_navstr_preview_pane_t1

0xdc97,	// (0x00083cfd) scroll_navstr_pane_g1_ParamLimits

0xdc97,	// (0x00083cfd) scroll_navstr_pane_g1

0xdca4,	// (0x00083d0a) scroll_navstr_pane_t1_ParamLimits

0xdca4,	// (0x00083d0a) scroll_navstr_pane_t1

0x3fdd,	// (0x0007a043) bg_button_pane_cp014

0x3fdd,	// (0x0007a043) bg_button_pane_cp030

0x5e39,	// (0x0007be9f) list_double_fisheye_pane_g4_ParamLimits

0x5e39,	// (0x0007be9f) list_double_fisheye_pane_g4

0x5e45,	// (0x0007beab) list_double_fisheye_pane_g5_ParamLimits

0x5e45,	// (0x0007beab) list_double_fisheye_pane_g5

0x1ebe,	// (0x00077f24) sp_fs_scroll_pane_cp03

0x3ee2,	// (0x00079f48) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x3eee,	// (0x00079f54) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x00085d46) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x3efa,	// (0x00079f60) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x3f9a,	// (0x0007a000) sp_fs_scroll_pane_cp02

0x008e,	// (0x000760f4) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x008e,	// (0x000760f4) popup_sp_fs_calendar_preview_list_single_pane

0xe8bc,	// (0x00084922) main_cam6_pano_pane

0x0a50,	// (0x00076ab6) main_mup3_pane_ParamLimits

0xe8bc,	// (0x00084922) main_phacti_pane

0xd519,	// (0x0008357f) bg_button_pane_cp11

0xd531,	// (0x00083597) main_mobtv_info_pane_g2_ParamLimits

0xd531,	// (0x00083597) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x00085ca6) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x00085ca6) main_mobtv_info_pane_g

0xd6e3,	// (0x00083749) sc_clock_pane_t5_ParamLimits

0xd6e3,	// (0x00083749) sc_clock_pane_t5

0xd786,	// (0x000837ec) main_radioblah_pane_g1_ParamLimits

0x3d56,	// (0x00079dbc) main_radioblah_pane_t3_ParamLimits

0x3d56,	// (0x00079dbc) main_radioblah_pane_t3

0x3d6e,	// (0x00079dd4) main_radioblah_pane_t4_ParamLimits

0x3d6e,	// (0x00079dd4) main_radioblah_pane_t4

0xd7a4,	// (0x0008380a) main_radioblah_text_pane_ParamLimits

0xd7a4,	// (0x0008380a) main_radioblah_text_pane

0xd7b1,	// (0x00083817) main_radioblah_info_pane_g1_ParamLimits

0xd846,	// (0x000838ac) main_radioblah_info_pane_t4_ParamLimits

0xd846,	// (0x000838ac) main_radioblah_info_pane_t4

0x0a50,	// (0x00076ab6) main_sp_fs_calendar_pane

0xdcb6,	// (0x00083d1c) main_phacti_pane_g1

0xdcbe,	// (0x00083d24) phacti_note_pane_ParamLimits

0xdcbe,	// (0x00083d24) phacti_note_pane

0x404f,	// (0x0007a0b5) phacti_term_pane_ParamLimits

0x404f,	// (0x0007a0b5) phacti_term_pane

0x4064,	// (0x0007a0ca) phacti_note_pane_t1_ParamLimits

0x4064,	// (0x0007a0ca) phacti_note_pane_t1

0x64e8,	// (0x0007c54e) phacti_term_pane_g1

0x64f0,	// (0x0007c556) phacti_term_pane_t1_ParamLimits

0x64f0,	// (0x0007c556) phacti_term_pane_t1

0x407b,	// (0x0007a0e1) popup_sp_fs_calendar_preview_list_single_pane_g1

0x01a9,	// (0x0007620f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x00085e1b) popup_sp_fs_calendar_preview_list_single_pane_g

0x4083,	// (0x0007a0e9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x4083,	// (0x0007a0e9) popup_sp_fs_calendar_preview_list_single_pane_t1

0x4098,	// (0x0007a0fe) aid_popup_sp_fs_bg_corner_pane

0x23d5,	// (0x0007843b) popup_sp_fs_calendar_preview_bg_pane_g1

0xe8bc,	// (0x00084922) popup_sp_fs_calendar_preview_bg_pane

0x40a0,	// (0x0007a106) popup_sp_fs_calendar_preview_list_pane

0x1fcd,	// (0x00078033) bg_main_sp_fs_cale_pane_ParamLimits

0x1fcd,	// (0x00078033) bg_main_sp_fs_cale_pane

0x651a,	// (0x0007c580) listscroll_cale_mrui_pane_ParamLimits

0x651a,	// (0x0007c580) listscroll_cale_mrui_pane

0x2ee3,	// (0x00078f49) listscroll_sp_fs_schedule_track_pane

0x652f,	// (0x0007c595) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x652f,	// (0x0007c595) main_sp_fs_ctrlbar_pane_cp01

0x40a8,	// (0x0007a10e) main_sp_fs_ribbon_pane

0x6542,	// (0x0007c5a8) popup_sp_fs_cale_preview_window

0xdd21,	// (0x00083d87) list_single_sp_fs_schedule_track_pane_ParamLimits

0xdd21,	// (0x00083d87) list_single_sp_fs_schedule_track_pane

0x3d36,	// (0x00079d9c) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3d36,	// (0x00079d9c) bg_sp_fs_highlight_list_pane_cp03

0xdd44,	// (0x00083daa) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xdd44,	// (0x00083daa) list_single_sp_fs_schedule_track_pane_g1

0xdd50,	// (0x00083db6) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xdd50,	// (0x00083db6) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x00085e20) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x00085e20) list_single_sp_fs_schedule_track_pane_g

0xdd5c,	// (0x00083dc2) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xdd5c,	// (0x00083dc2) list_single_sp_fs_schedule_track_pane_t1

0xdd74,	// (0x00083dda) sp_fs_schedule_track_pane_ParamLimits

0xdd74,	// (0x00083dda) sp_fs_schedule_track_pane

0x40b0,	// (0x0007a116) sp_fs_schedule_track_pane_g1

0x40b8,	// (0x0007a11e) sp_fs_schedule_track_pane_g2

0x40c0,	// (0x0007a126) sp_fs_schedule_track_pane_g3

0x40c8,	// (0x0007a12e) sp_fs_schedule_track_pane_g4

0x40d0,	// (0x0007a136) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x00085e25) sp_fs_schedule_track_pane_g

0x2e5f,	// (0x00078ec5) bg_sp_fs_schedule_viewer_highlight_g1

0x03a8,	// (0x0007640e) bg_sp_fs_schedule_viewer_highlight_g2

0x2e67,	// (0x00078ecd) bg_sp_fs_schedule_viewer_highlight_g3

0x2e6f,	// (0x00078ed5) bg_sp_fs_schedule_viewer_highlight_g4

0x3083,	// (0x000790e9) bg_sp_fs_schedule_viewer_highlight_g5

0x2e7f,	// (0x00078ee5) bg_sp_fs_schedule_viewer_highlight_g6

0x2e87,	// (0x00078eed) bg_sp_fs_schedule_viewer_highlight_g7

0x2e8f,	// (0x00078ef5) bg_sp_fs_schedule_viewer_highlight_g8

0x0388,	// (0x000763ee) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x00085e30) bg_sp_fs_schedule_viewer_highlight_g

0xe8bc,	// (0x00084922) bg_main_sp_fs_ribbon_pane

0xdd84,	// (0x00083dea) main_sp_fs_ribbon_pane_g1

0x40d8,	// (0x0007a13e) main_sp_fs_ribbon_pane_t1

0xdd8d,	// (0x00083df3) main_sp_fs_ribbon_pane_t2

0x40e7,	// (0x0007a14d) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x00085e43) main_sp_fs_ribbon_pane_t

0x40f6,	// (0x0007a15c) main_sp_fs_ribbon_scheduler_pane

0x40fe,	// (0x0007a164) bg_main_sp_fs_ribbon_pane_g1

0x4107,	// (0x0007a16d) bg_main_sp_fs_ribbon_pane_g2

0x4110,	// (0x0007a176) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x00085e4a) bg_main_sp_fs_ribbon_pane_g

0x4118,	// (0x0007a17e) main_sp_fs_ribbon_scheduler_pane_g1

0x4121,	// (0x0007a187) main_sp_fs_ribbon_scheduler_pane_g2

0x412a,	// (0x0007a190) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x00085e51) main_sp_fs_ribbon_scheduler_pane_g

0x4133,	// (0x0007a199) list_cale_mrui_pane

0xdd9c,	// (0x00083e02) sp_fs_scroll_pane_cp07_ParamLimits

0xdd9c,	// (0x00083e02) sp_fs_scroll_pane_cp07

0xddb8,	// (0x00083e1e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xddb8,	// (0x00083e1e) bg_sp_fs_schedule_viewer_highlight

0x4140,	// (0x0007a1a6) list_single_sp_fs_schedule_track_pane_cp01

0x4148,	// (0x0007a1ae) list_sp_fs_schedule_track_pane

0x4150,	// (0x0007a1b6) sp_fs_scroll_pane_cp06_ParamLimits

0x4150,	// (0x0007a1b6) sp_fs_scroll_pane_cp06

0x23d5,	// (0x0007843b) bgmain_sp_fs_calendar_pane_g1

0x6554,	// (0x0007c5ba) list_single_cale_mrui_pane_ParamLimits

0x6554,	// (0x0007c5ba) list_single_cale_mrui_pane

0x6581,	// (0x0007c5e7) list_single_cale_mrui_row_pane_ParamLimits

0x6581,	// (0x0007c5e7) list_single_cale_mrui_row_pane

0x658e,	// (0x0007c5f4) list_single_cale_mrui_row_pane_g1_ParamLimits

0x658e,	// (0x0007c5f4) list_single_cale_mrui_row_pane_g1

0x65c6,	// (0x0007c62c) list_single_cale_mrui_row_pane_t1_ParamLimits

0x65c6,	// (0x0007c62c) list_single_cale_mrui_row_pane_t1

0x65d8,	// (0x0007c63e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x65d8,	// (0x0007c63e) list_single_cale_mrui_row_pane_t2

0x663e,	// (0x0007c6a4) list_single_cale_mrui_row_pane_t3_ParamLimits

0x663e,	// (0x0007c6a4) list_single_cale_mrui_row_pane_t3

0x666d,	// (0x0007c6d3) list_single_cale_mrui_row_pane_t4_ParamLimits

0x666d,	// (0x0007c6d3) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x00085e5f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x00085e5f) list_single_cale_mrui_row_pane_t

0x669c,	// (0x0007c702) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x669c,	// (0x0007c702) list_single_cmail_header_editor_pane_bg_cp01

0x66bc,	// (0x0007c722) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x66bc,	// (0x0007c722) list_single_cmail_header_editor_pane_bg_cp02

0xddc5,	// (0x00083e2b) main_radioblah_text_pane_t1_ParamLimits

0xddc5,	// (0x00083e2b) main_radioblah_text_pane_t1

0x416f,	// (0x0007a1d5) cam6_indi_pane_cp01

0x4177,	// (0x0007a1dd) cam6_mode_pane_cp01

0x417f,	// (0x0007a1e5) cam6_pano_pane

0x4188,	// (0x0007a1ee) cam6_zoom_pane_cp01

0x4190,	// (0x0007a1f6) cam6_pano_image_pane

0x419b,	// (0x0007a201) cam6_pano_pane_g1

0x3a9a,	// (0x00079b00) cam6_pano_pane_g2

0x41a4,	// (0x0007a20a) cam6_pano_pane_g3

0x41ad,	// (0x0007a213) cam6_pano_pane_g4

0x29c1,	// (0x00078a27) cam6_pano_pane_g5

0x41b6,	// (0x0007a21c) cam6_pano_pane_g6

0x41c0,	// (0x0007a226) cam6_pano_pane_g7

0x41c8,	// (0x0007a22e) cam6_pano_pane_g8

0x41d1,	// (0x0007a237) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x00085e68) cam6_pano_pane_g

0xe8bc,	// (0x00084922) main_browser_tag_pane

0x4030,	// (0x0007a096) grid_navstr_albumart_pane

0x41dc,	// (0x0007a242) cell_navstr_albumart_pane_ParamLimits

0x41dc,	// (0x0007a242) cell_navstr_albumart_pane

0x41fc,	// (0x0007a262) cell_navstr_albumart_pane_g1

0x1dd2,	// (0x00077e38) cell_navstr_albumart_pane_g2

0x1de2,	// (0x00077e48) cell_navstr_albumart_pane_g3

0x1dda,	// (0x00077e40) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x00085e7b) cell_navstr_albumart_pane_g

0xdde0,	// (0x00083e46) bt_list_pane_ParamLimits

0xdde0,	// (0x00083e46) bt_list_pane

0xde00,	// (0x00083e66) bt_list_pane_t1

0xde0f,	// (0x00083e75) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x00085e84) bt_list_pane_t

0xe8bc,	// (0x00084922) main_cale_prevew_pane

0xde1e,	// (0x00083e84) popup_cale_preview_window_ParamLimits

0xde1e,	// (0x00083e84) popup_cale_preview_window

0x0a50,	// (0x00076ab6) bg_popup_preview_window_pane_cp05_ParamLimits

0x0a50,	// (0x00076ab6) bg_popup_preview_window_pane_cp05

0x4204,	// (0x0007a26a) list_cale_preview_pane_ParamLimits

0x4204,	// (0x0007a26a) list_cale_preview_pane

0xde37,	// (0x00083e9d) list_double_cale_preview_pane_ParamLimits

0xde37,	// (0x00083e9d) list_double_cale_preview_pane

0xde49,	// (0x00083eaf) list_single_cale_preview_pane_ParamLimits

0xde49,	// (0x00083eaf) list_single_cale_preview_pane

0xde5f,	// (0x00083ec5) list_single_cale_preview_pane_g1

0xde67,	// (0x00083ecd) list_single_cale_preview_pane_t1_ParamLimits

0xde67,	// (0x00083ecd) list_single_cale_preview_pane_t1

0xde7c,	// (0x00083ee2) list_double_cale_preview_pane_g1

0xde84,	// (0x00083eea) list_double_cale_preview_pane_t1_ParamLimits

0xde84,	// (0x00083eea) list_double_cale_preview_pane_t1

0xde99,	// (0x00083eff) list_double_cale_preview_pane_t2_ParamLimits

0xde99,	// (0x00083eff) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x00085e89) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x00085e89) list_double_cale_preview_pane_t

0xe8bc,	// (0x00084922) main_ezdial_pane

0x0a50,	// (0x00076ab6) main_sp_fs_email_pane_ParamLimits

0xd9f8,	// (0x00083a5e) cmail_ddmenu_btn01_pane_ParamLimits

0xd9f8,	// (0x00083a5e) cmail_ddmenu_btn01_pane

0xda15,	// (0x00083a7b) cmail_ddmenu_btn02_pane_ParamLimits

0xda15,	// (0x00083a7b) cmail_ddmenu_btn02_pane

0xda33,	// (0x00083a99) cmail_ddmenu_btn03_pane_ParamLimits

0xda33,	// (0x00083a99) cmail_ddmenu_btn03_pane

0xda61,	// (0x00083ac7) main_sp_fs_ctrlbar_pane_ParamLimits

0xda77,	// (0x00083add) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xdbac,	// (0x00083c12) list_cmail_body_pane_ParamLimits

0x3fb0,	// (0x0007a016) bg_button_pane_cp12

0x3fb9,	// (0x0007a01f) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3fb9,	// (0x0007a01f) list_single_cmail_header_detail_pane_g3

0x64ad,	// (0x0007c513) list_single_cmail_header_detail_pane_t2_ParamLimits

0x64ad,	// (0x0007c513) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x00085e0c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x00085e0c) list_single_cmail_header_detail_pane_t

0x6505,	// (0x0007c56b) phacti_term_pane_t2_ParamLimits

0x6505,	// (0x0007c56b) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x00085e16) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x00085e16) phacti_term_pane_t

0x4210,	// (0x0007a276) aid_size_list_single_double

0xdeb1,	// (0x00083f17) popup_ezdial_listscroll_window

0xded2,	// (0x00083f38) popup_number_entry_window_cp01

0x014f,	// (0x000761b5) bg_popup_call_pane_cp09

0x421c,	// (0x0007a282) ezdial_list_pane

0x4224,	// (0x0007a28a) scroll_pane_cp23

0x21ba,	// (0x00078220) bg_button_pane_cp028_ParamLimits

0x21ba,	// (0x00078220) bg_button_pane_cp028

0xdee0,	// (0x00083f46) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xdee0,	// (0x00083f46) cmail_ddmenu_btn01_pane_g1

0xdef0,	// (0x00083f56) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xdef0,	// (0x00083f56) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x00085e8e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x00085e8e) cmail_ddmenu_btn01_pane_g

0x422c,	// (0x0007a292) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x422c,	// (0x0007a292) cmail_ddmenu_btn01_pane_t1

0x1fcd,	// (0x00078033) bg_button_pane_cp029_ParamLimits

0x1fcd,	// (0x00078033) bg_button_pane_cp029

0xdefc,	// (0x00083f62) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xdefc,	// (0x00083f62) cmail_ddmenu_btn02_pane_g1

0xdf14,	// (0x00083f7a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xdf14,	// (0x00083f7a) cmail_ddmenu_btn02_pane_t1

0x3d36,	// (0x00079d9c) bg_button_pane_cp031_ParamLimits

0x3d36,	// (0x00079d9c) bg_button_pane_cp031

0xdefc,	// (0x00083f62) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xdefc,	// (0x00083f62) cmail_ddmenu_btn03_pane_g1

0xdf14,	// (0x00083f7a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xdf14,	// (0x00083f7a) cmail_ddmenu_btn03_pane_t1

0xb84a,	// (0x000818b0) cell_dialer2_keypad_pane_t1_ParamLimits

0xb864,	// (0x000818ca) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb864,	// (0x000818ca) cell_dialer2_keypad_pane_t1_copy1

0xd39e,	// (0x00083404) ncimui_group_button_pane

0x0a50,	// (0x00076ab6) main_sp_fs_calendar_pane_ParamLimits

0xdbcc,	// (0x00083c32) list_single_cmail_header_caption_pane_ParamLimits

0xf0c1,	// (0x00085127) aid_recal_txt_sm_pane

0xe8bc,	// (0x00084922) mian_recal_day_pane

0x6542,	// (0x0007c5a8) popup_sp_fs_cale_preview_window_ParamLimits

0x4242,	// (0x0007a2a8) list_recal_day_pane

0x66f4,	// (0x0007c75a) list_single_recal_day_pane_ParamLimits

0x66f4,	// (0x0007c75a) list_single_recal_day_pane

0x4269,	// (0x0007a2cf) list_single_recal_day_pane_g1_ParamLimits

0x4269,	// (0x0007a2cf) list_single_recal_day_pane_g1

0x6706,	// (0x0007c76c) list_single_recal_day_pane_g2_ParamLimits

0x6706,	// (0x0007c76c) list_single_recal_day_pane_g2

0x6716,	// (0x0007c77c) list_single_recal_day_pane_g3_ParamLimits

0x6716,	// (0x0007c77c) list_single_recal_day_pane_g3

0x6722,	// (0x0007c788) list_single_recal_day_pane_g4_ParamLimits

0x6722,	// (0x0007c788) list_single_recal_day_pane_g4

0x6738,	// (0x0007c79e) list_single_recal_day_pane_g5_ParamLimits

0x6738,	// (0x0007c79e) list_single_recal_day_pane_g5

0x6752,	// (0x0007c7b8) list_single_recal_day_pane_g6_ParamLimits

0x6752,	// (0x0007c7b8) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x00085e9d) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x00085e9d) list_single_recal_day_pane_g

0x6766,	// (0x0007c7cc) list_single_recal_day_pane_t1

0x6778,	// (0x0007c7de) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x00085ea8) list_single_recal_day_pane_t

0xdf38,	// (0x00083f9e) ncimui_query_button_pane_ParamLimits

0xdf38,	// (0x00083f9e) ncimui_query_button_pane

0xdf48,	// (0x00083fae) ncimui_query_button_pane_t1_ParamLimits

0xdf48,	// (0x00083fae) ncimui_query_button_pane_t1

0x4275,	// (0x0007a2db) ncimui_query_button_pane_t2_ParamLimits

0x4275,	// (0x0007a2db) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x00085ead) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x00085ead) ncimui_query_button_pane_t

0xdf5b,	// (0x00083fc1) query_button_pane_ParamLimits

0xdf5b,	// (0x00083fc1) query_button_pane

0xe8bc,	// (0x00084922) bg_button_pane_cp0028

0x4288,	// (0x0007a2ee) query_button_pane_t1

0x9c28,	// (0x0007fc8e) main_tport_pane_ParamLimits

0xdab6,	// (0x00083b1c) bg_popup_window_pane_cp01_ParamLimits

0xdab6,	// (0x00083b1c) bg_popup_window_pane_cp01

0xdac4,	// (0x00083b2a) heading_pane_cp08_ParamLimits

0xdac4,	// (0x00083b2a) heading_pane_cp08

0xdad2,	// (0x00083b38) heading_pane_cp07_ParamLimits

0xdad2,	// (0x00083b38) heading_pane_cp07

0xdb41,	// (0x00083ba7) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x00085df9) cell_tport_appsw_pane_g

0x58a7,	// (0x0007b90d) input_candi_list_open_g1

0x056b,	// (0x000765d1) list_cale_time_pane_g6_ParamLimits

0x056b,	// (0x000765d1) list_cale_time_pane_g6

0xa6ad,	// (0x00080713) aid_size_touch_calib_1_ParamLimits

0xa6ad,	// (0x00080713) aid_size_touch_calib_1

0xa6b9,	// (0x0008071f) aid_size_touch_calib_2_ParamLimits

0xa6b9,	// (0x0008071f) aid_size_touch_calib_2

0xa6c7,	// (0x0008072d) aid_size_touch_calib_3_ParamLimits

0xa6c7,	// (0x0008072d) aid_size_touch_calib_3

0xa6d7,	// (0x0008073d) aid_size_touch_calib_4_ParamLimits

0xa6d7,	// (0x0008073d) aid_size_touch_calib_4

0xa6e5,	// (0x0008074b) main_touch_calib_button_group_pane_ParamLimits

0xa6e5,	// (0x0008074b) main_touch_calib_button_group_pane

0xa6f3,	// (0x00080759) main_touch_calib_pane_g1_ParamLimits

0xa6ff,	// (0x00080765) main_touch_calib_pane_g2_ParamLimits

0xa70b,	// (0x00080771) main_touch_calib_pane_g3_ParamLimits

0xa717,	// (0x0008077d) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x000857b7) main_touch_calib_pane_g_ParamLimits

0xa723,	// (0x00080789) main_touch_calib_pane_t1_ParamLimits

0xa73c,	// (0x000807a2) main_touch_calib_pane_t2_ParamLimits

0xa755,	// (0x000807bb) main_touch_calib_pane_t3_ParamLimits

0xa76b,	// (0x000807d1) main_touch_calib_pane_t4_ParamLimits

0xa781,	// (0x000807e7) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x000857c0) main_touch_calib_pane_t_ParamLimits

0x2761,	// (0x000787c7) list_single_fp_cale_pane_g3_ParamLimits

0x2761,	// (0x000787c7) list_single_fp_cale_pane_g3

0x0a50,	// (0x00076ab6) bg_button_pane_cp012_ParamLimits

0x0a50,	// (0x00076ab6) bg_vkb2_func_pane_cp03_ParamLimits

0xc60e,	// (0x00082674) cell_vitu2_function_top_pane_g1_ParamLimits

0x0a50,	// (0x00076ab6) bg_vkb2_func_pane_cp04_ParamLimits

0xd326,	// (0x0008338c) main_ncimui_button_group_pane_ParamLimits

0xd326,	// (0x0008338c) main_ncimui_button_group_pane

0xd38c,	// (0x000833f2) main_ncimui_pane_t3_ParamLimits

0xd38c,	// (0x000833f2) main_ncimui_pane_t3

0x4046,	// (0x0007a0ac) phacti_button_group_pane

0x4210,	// (0x0007a276) aid_size_list_single_double_ParamLimits

0xdeb1,	// (0x00083f17) popup_ezdial_listscroll_window_ParamLimits

0xded2,	// (0x00083f38) popup_number_entry_window_cp01_ParamLimits

0xdf68,	// (0x00083fce) phacti_button_pane_ParamLimits

0xdf68,	// (0x00083fce) phacti_button_pane

0xe8bc,	// (0x00084922) bg_button_pane_cp14

0x4296,	// (0x0007a2fc) phacti_button_pane_t1

0xdf79,	// (0x00083fdf) main_touch_calib_button_pane_ParamLimits

0xdf79,	// (0x00083fdf) main_touch_calib_button_pane

0xf010,	// (0x00085076) bg_button_pane_cp18_ParamLimits

0xf010,	// (0x00085076) bg_button_pane_cp18

0x42a4,	// (0x0007a30a) main_touch_calib_button_pane_t1_ParamLimits

0x42a4,	// (0x0007a30a) main_touch_calib_button_pane_t1

0x42ba,	// (0x0007a320) main_touch_calib_button_pane_t2_ParamLimits

0x42ba,	// (0x0007a320) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x00085eb2) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x00085eb2) main_touch_calib_button_pane_t

0xe8bc,	// (0x00084922) cell_ncimui_button_pane

0xe8bc,	// (0x00084922) bg_button_pane_cp032

0x42d8,	// (0x0007a33e) cell_ncimui_button_pane_t1

0xb8c0,	// (0x00081926) image3_infobar_pane_ParamLimits

0xb8c0,	// (0x00081926) image3_infobar_pane

0xd705,	// (0x0008376b) fs_bigclock_status_pane_ParamLimits

0xd705,	// (0x0008376b) fs_bigclock_status_pane

0xd712,	// (0x00083778) main_fs_bigclock_clock_pane_ParamLimits

0xd712,	// (0x00083778) main_fs_bigclock_clock_pane

0xd72c,	// (0x00083792) main_fs_bigclock_indi_pane_ParamLimits

0xd72c,	// (0x00083792) main_fs_bigclock_indi_pane

0xd754,	// (0x000837ba) main_fs_bigclock_swipe_pane_ParamLimits

0xd754,	// (0x000837ba) main_fs_bigclock_swipe_pane

0xe8bc,	// (0x00084922) main_fs_clock_dumped_data

0x3ba7,	// (0x00079c0d) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x3ba7,	// (0x00079c0d) list_single_fs_bigclock_indicator_pane_g1

0x3bc2,	// (0x00079c28) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x3bc2,	// (0x00079c28) list_single_fs_bigclock_indicator_pane_g2

0x3bdc,	// (0x00079c42) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x3bdc,	// (0x00079c42) list_single_fs_bigclock_indicator_pane_g3

0x3bf6,	// (0x00079c5c) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x3bf6,	// (0x00079c5c) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x00085cda) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x00085cda) list_single_fs_bigclock_indicator_pane_g

0x3c21,	// (0x00079c87) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x3c21,	// (0x00079c87) list_single_fs_bigclock_indicator_pane_t1

0x3c49,	// (0x00079caf) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3c49,	// (0x00079caf) list_single_fs_bigclock_indicator_pane_t2

0x3c71,	// (0x00079cd7) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x3c71,	// (0x00079cd7) list_single_fs_bigclock_indicator_pane_t3

0x3c99,	// (0x00079cff) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x3c99,	// (0x00079cff) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x00085ce5) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x00085ce5) list_single_fs_bigclock_indicator_pane_t

0x42e6,	// (0x0007a34c) image3_infobar_fav_pane_ParamLimits

0x42e6,	// (0x0007a34c) image3_infobar_fav_pane

0x42f6,	// (0x0007a35c) image3_infobar_loc_pane_ParamLimits

0x42f6,	// (0x0007a35c) image3_infobar_loc_pane

0x430a,	// (0x0007a370) image3_infobar_time_pane_ParamLimits

0x430a,	// (0x0007a370) image3_infobar_time_pane

0x23d5,	// (0x0007843b) image3_infobar_time_pane_g1

0x431a,	// (0x0007a380) image3_infobar_time_pane_t1

0x23d5,	// (0x0007843b) image3_infobar_loc_pane_g1

0x4328,	// (0x0007a38e) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x00085eb7) image3_infobar_loc_pane_g

0x4330,	// (0x0007a396) image3_infobar_loc_pane_t1

0x23d5,	// (0x0007843b) image3_infobar_fav_pane_g1

0x433e,	// (0x0007a3a4) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x00085ebc) image3_infobar_fav_pane_g

0x4346,	// (0x0007a3ac) fs_bigclock_status_battery_pane

0x434f,	// (0x0007a3b5) fs_bigclock_status_signal_pane

0x4358,	// (0x0007a3be) fs_bigclock_status_title_pane

0x4361,	// (0x0007a3c7) fs_bigclock_status_signal_pane_g1

0x436a,	// (0x0007a3d0) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x00085ec1) fs_bigclock_status_signal_pane_g

0x4372,	// (0x0007a3d8) fs_bigclock_status_battery_pane_g1

0x437b,	// (0x0007a3e1) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x00085ec6) fs_bigclock_status_battery_pane_g

0x4383,	// (0x0007a3e9) fs_bigclock_status_title_pane_t1

0x23d5,	// (0x0007843b) main_fs_bigclock_clock_pane_g1

0x4391,	// (0x0007a3f7) main_fs_bigclock_clock_pane_g2

0x439a,	// (0x0007a400) main_fs_bigclock_clock_pane_g3

0x439a,	// (0x0007a400) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x00085ecb) main_fs_bigclock_clock_pane_g

0x43a2,	// (0x0007a408) main_fs_bigclock_clock_pane_t1

0xdf89,	// (0x00083fef) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x00085ed4) main_fs_bigclock_clock_pane_t

0x43b0,	// (0x0007a416) list_single_fs_bigclock_indicator_pane_ParamLimits

0x43b0,	// (0x0007a416) list_single_fs_bigclock_indicator_pane

0x43c1,	// (0x0007a427) list_single_fs_bigclock_pane_ParamLimits

0x43c1,	// (0x0007a427) list_single_fs_bigclock_pane

0x43e7,	// (0x0007a44d) main_fs_bigclock_indicator_pane_t1

0x43f6,	// (0x0007a45c) list_single_fs_bigclock_pane_g1

0x43fe,	// (0x0007a464) list_single_fs_bigclock_pane_t1

0x23d5,	// (0x0007843b) main_fs_bigclock_swipe_pane_g1

0x4441,	// (0x0007a4a7) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x00085ee5) main_fs_bigclock_swipe_pane_g

0x4449,	// (0x0007a4af) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x4449,	// (0x0007a4af) main_fs_bigclock_swipe_pane_t1

0x8cb8,	// (0x0007ed1e) call_type_pane_ParamLimits

0xe8bc,	// (0x00084922) main_btmg_pane

0x65ba,	// (0x0007c620) list_single_cale_mrui_row_pane_g2_ParamLimits

0x65ba,	// (0x0007c620) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x00085e58) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x00085e58) list_single_cale_mrui_row_pane_g

0x66e2,	// (0x0007c748) list_recal_vselct_arw_lo_pane

0x4261,	// (0x0007a2c7) list_recal_vselct_arw_up_pane

0x66ea,	// (0x0007c750) list_recal_vselct_pane

0xdfdc,	// (0x00084042) btmg_button_pane

0xdfe8,	// (0x0008404e) main_btmg_pane_g1

0xe8bc,	// (0x00084922) bg_button_pane_cp044

0x4466,	// (0x0007a4cc) btmg_button_pane_t1

0x1fb9,	// (0x0007801f) aid_listscroll_gen

0x0a50,	// (0x00076ab6) main_cntbar_detail_pane

0x3f92,	// (0x00079ff8) list_cmail_folder_pane

0x1ebe,	// (0x00077f24) sp_fs_scroll_pane_cp03_ParamLimits

0x678a,	// (0x0007c7f0) list_single_fs_dyc_pane_cp01_ParamLimits

0x678a,	// (0x0007c7f0) list_single_fs_dyc_pane_cp01

0x4474,	// (0x0007a4da) aid_size_cmail_indent

0x67b5,	// (0x0007c81b) list_single_dyc_row_pane_cp01

0xe010,	// (0x00084076) cntbar_detail_list_pane_ParamLimits

0xe010,	// (0x00084076) cntbar_detail_list_pane

0xe04a,	// (0x000840b0) main_cntbar_detail_cont_pane_ParamLimits

0xe04a,	// (0x000840b0) main_cntbar_detail_cont_pane

0x8cac,	// (0x0007ed12) scroll_pane_cp032_ParamLimits

0x8cac,	// (0x0007ed12) scroll_pane_cp032

0xe056,	// (0x000840bc) cntbar_detail_list_event_pane_ParamLimits

0xe056,	// (0x000840bc) cntbar_detail_list_event_pane

0xe01c,	// (0x00084082) cntbar_detail_list_shct_pane

0x03f6,	// (0x0007645c) aid_list_gen

0x447d,	// (0x0007a4e3) aid_scroll

0x4486,	// (0x0007a4ec) aid_size_touch_scroll_bar

0xed77,	// (0x00084ddd) aid_list_double

0xe06a,	// (0x000840d0) aid_list_single

0xcba1,	// (0x00082c07) aid_list_single_lg

0x67be,	// (0x0007c824) aid_list_z_g_a_sm

0xe073,	// (0x000840d9) aid_list_z_g_d

0x67c6,	// (0x0007c82c) aid_txt_z_prm

0x67d4,	// (0x0007c83a) aid_txt_z_prm_cp01

0x67e2,	// (0x0007c848) aid_txt_z_sec

0xe07b,	// (0x000840e1) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe07b,	// (0x000840e1) main_cntbar_detail_cont_pane_g1

0xe088,	// (0x000840ee) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe088,	// (0x000840ee) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x00085eea) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x00085eea) main_cntbar_detail_cont_pane_g

0x448f,	// (0x0007a4f5) main_cntbar_detail_cont_pane_t1

0x449d,	// (0x0007a503) main_cntbar_detail_cont_pane_t2

0x44ab,	// (0x0007a511) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x00085eef) main_cntbar_detail_cont_pane_t

0xe094,	// (0x000840fa) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe094,	// (0x000840fa) cell_cntbar_detail_list_shct_pane

0x44b9,	// (0x0007a51f) cntbar_detail_list_shct_pane_g1

0x44c2,	// (0x0007a528) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x00085ef6) cntbar_detail_list_shct_pane_g

0xe0a8,	// (0x0008410e) cntbar_detail_list_event_pane_g1_ParamLimits

0xe0a8,	// (0x0008410e) cntbar_detail_list_event_pane_g1

0xe0b4,	// (0x0008411a) cntbar_detail_list_event_pane_g2_ParamLimits

0xe0b4,	// (0x0008411a) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x00085efb) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x00085efb) cntbar_detail_list_event_pane_g

0xe120,	// (0x00084186) cntbar_detail_list_event_pane_t1_ParamLimits

0xe120,	// (0x00084186) cntbar_detail_list_event_pane_t1

0xe135,	// (0x0008419b) cntbar_detail_list_event_pane_t2_ParamLimits

0xe135,	// (0x0008419b) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x00085f08) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x00085f08) cntbar_detail_list_event_pane_t

0x23d5,	// (0x0007843b) cell_cntbar_detail_list_shct_pane_g1

0x0b7b,	// (0x00076be1) navi_pane_mv_g3

0x0a50,	// (0x00076ab6) main_cntbar_detail_pane_ParamLimits

0xe8bc,	// (0x00084922) main_notif_wgt_pane

0xb574,	// (0x000815da) aid_tch_main_mp4_pane_g4

0xb7a9,	// (0x0008180f) popup_slider_window_cp02

0x66d8,	// (0x0007c73e) list_recal_day_event_pane

0xdff0,	// (0x00084056) cntbar_detail_btn_pane_ParamLimits

0xdff0,	// (0x00084056) cntbar_detail_btn_pane

0xe000,	// (0x00084066) cntbar_detail_btn_pane_cp01_ParamLimits

0xe000,	// (0x00084066) cntbar_detail_btn_pane_cp01

0xe01c,	// (0x00084082) cntbar_detail_list_shct_pane_ParamLimits

0xe028,	// (0x0008408e) cntbar_detail_pane_g1_ParamLimits

0xe028,	// (0x0008408e) cntbar_detail_pane_g1

0xe034,	// (0x0008409a) cntbar_detail_pane_t1_ParamLimits

0xe034,	// (0x0008409a) cntbar_detail_pane_t1

0xe0c0,	// (0x00084126) cntbar_detail_list_event_pane_g3_ParamLimits

0xe0c0,	// (0x00084126) cntbar_detail_list_event_pane_g3

0xe0d8,	// (0x0008413e) cntbar_detail_list_event_pane_g4_ParamLimits

0xe0d8,	// (0x0008413e) cntbar_detail_list_event_pane_g4

0xe0f0,	// (0x00084156) cntbar_detail_list_event_pane_g5_ParamLimits

0xe0f0,	// (0x00084156) cntbar_detail_list_event_pane_g5

0xe108,	// (0x0008416e) cntbar_detail_list_event_pane_g6_ParamLimits

0xe108,	// (0x0008416e) cntbar_detail_list_event_pane_g6

0xe14a,	// (0x000841b0) cntbar_detail_list_event_pane_t3_ParamLimits

0xe14a,	// (0x000841b0) cntbar_detail_list_event_pane_t3

0xe15c,	// (0x000841c2) popup_notif_wgt_window_ParamLimits

0xe15c,	// (0x000841c2) popup_notif_wgt_window

0xe16c,	// (0x000841d2) popup_submenu_window_cp01_ParamLimits

0xe16c,	// (0x000841d2) popup_submenu_window_cp01

0x014f,	// (0x000761b5) bg_popup_window_pane_cp10

0x44cb,	// (0x0007a531) listscroll_notif_wgt_pane

0x44dd,	// (0x0007a543) list_notif_wgt_window

0x44e6,	// (0x0007a54c) scroll_pane_cp033

0xe17e,	// (0x000841e4) list_notif_wgt_row_pane_ParamLimits

0xe17e,	// (0x000841e4) list_notif_wgt_row_pane

0x44ef,	// (0x0007a555) aid_size_list_notif_wgt_del

0x44fc,	// (0x0007a562) list_notif_wgt_row_pane_g1

0x4508,	// (0x0007a56e) list_notif_wgt_row_pane_g2

0x451c,	// (0x0007a582) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x00085f0f) list_notif_wgt_row_pane_g

0x4529,	// (0x0007a58f) list_notif_wgt_row_pane_t1

0x453f,	// (0x0007a5a5) list_notif_wgt_row_pane_t2

0x4551,	// (0x0007a5b7) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x00085f16) list_notif_wgt_row_pane_t

0x309d,	// (0x00079103) list_recal_day_event_pane_g1

0x4563,	// (0x0007a5c9) list_recal_day_event_pane_t1

0xe8bc,	// (0x00084922) bg_button_pane_cp045

0xe190,	// (0x000841f6) cntbar_detail_btn_pane_t1

0x1fcd,	// (0x00078033) main_callh_pane_ParamLimits

0x1fcd,	// (0x00078033) main_callh_pane

0xe8bc,	// (0x00084922) main_coverflow0_pane

0xe8bc,	// (0x00084922) main_wgtman_pane

0xd76c,	// (0x000837d2) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd76c,	// (0x000837d2) main_fs_bigclock_unlock_btn_pane

0xdb39,	// (0x00083b9f) bg_button_pane_cp16

0xdb49,	// (0x00083baf) cell_tport_appsw_pane_g3

0xe19e,	// (0x00084204) cf0_flow_pane_ParamLimits

0xe19e,	// (0x00084204) cf0_flow_pane

0x4572,	// (0x0007a5d8) listscroll_cf0_pane

0x457d,	// (0x0007a5e3) main_cf0_pane_g1

0xe1ad,	// (0x00084213) main_cf0_pane_t1_ParamLimits

0xe1ad,	// (0x00084213) main_cf0_pane_t1

0xe1c1,	// (0x00084227) main_cf0_pane_t2_ParamLimits

0xe1c1,	// (0x00084227) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x00085f22) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x00085f22) main_cf0_pane_t

0x458f,	// (0x0007a5f5) scroll_pane_cp11

0xe1d5,	// (0x0008423b) cf0_flow_pane_g1

0xe1dd,	// (0x00084243) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x00085f27) cf0_flow_pane_g

0xe1e5,	// (0x0008424b) cf0_flow_pane_t1

0xe8bc,	// (0x00084922) main_call6_pane

0xe8bc,	// (0x00084922) main_calllock_pane

0xe1f3,	// (0x00084259) call6_btn_grp_pane_ParamLimits

0xe1f3,	// (0x00084259) call6_btn_grp_pane

0xe202,	// (0x00084268) call6_pane_g1_ParamLimits

0xe202,	// (0x00084268) call6_pane_g1

0xe211,	// (0x00084277) popup_call6_1st_window_ParamLimits

0xe211,	// (0x00084277) popup_call6_1st_window

0xe21f,	// (0x00084285) popup_call6_2nd_window_ParamLimits

0xe21f,	// (0x00084285) popup_call6_2nd_window

0xe22d,	// (0x00084293) cell_call6_btn_pane_ParamLimits

0xe22d,	// (0x00084293) cell_call6_btn_pane

0x014f,	// (0x000761b5) bg_popup_call2_in_pane_cp03

0x459a,	// (0x0007a600) popup_call6_1st_window_g1

0x45a2,	// (0x0007a608) popup_call6_1st_window_g2

0x45aa,	// (0x0007a610) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x00085f2c) popup_call6_1st_window_g

0x45b2,	// (0x0007a618) popup_call6_1st_window_t1

0x45c1,	// (0x0007a627) popup_call6_1st_window_t2

0x45d1,	// (0x0007a637) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x00085f33) popup_call6_1st_window_t

0x014f,	// (0x000761b5) bg_popup_call2_in_pane_cp04

0x459a,	// (0x0007a600) popup_call6_2nd_window_g1

0x45a2,	// (0x0007a608) popup_call6_2nd_window_g2

0x45aa,	// (0x0007a610) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x00085f2c) popup_call6_2nd_window_g

0x45b2,	// (0x0007a618) popup_call6_2nd_window_t1

0xe8bc,	// (0x00084922) bg_button_pane_cp15

0x45e1,	// (0x0007a647) cell_call6_btn_pane_g1

0x45ea,	// (0x0007a650) cell_call6_btn_pane_t1

0xe23c,	// (0x000842a2) listscroll_wgtman_pane_ParamLimits

0xe23c,	// (0x000842a2) listscroll_wgtman_pane

0xe258,	// (0x000842be) wgtman_btn_pane_ParamLimits

0xe258,	// (0x000842be) wgtman_btn_pane

0x0974,	// (0x000769da) aid_scroll_copy1

0x45f9,	// (0x0007a65f) list_wgtman_pane

0xe28d,	// (0x000842f3) wgtman_btn_pane_g1_ParamLimits

0xe28d,	// (0x000842f3) wgtman_btn_pane_g1

0xe2b5,	// (0x0008431b) wgtman_btn_pane_t1_ParamLimits

0xe2b5,	// (0x0008431b) wgtman_btn_pane_t1

0x4603,	// (0x0007a669) wgtman_btn_pane_t2_ParamLimits

0x4603,	// (0x0007a669) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x00085f3a) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x00085f3a) wgtman_btn_pane_t

0xe2ec,	// (0x00084352) listrow_wgtman_pane_ParamLimits

0xe2ec,	// (0x00084352) listrow_wgtman_pane

0xe307,	// (0x0008436d) listrow_wgtman_pane_g1

0xe314,	// (0x0008437a) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x00085f3f) listrow_wgtman_pane_g

0x67f0,	// (0x0007c856) listrow_wgtman_pane_t1

0x6808,	// (0x0007c86e) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x00085f44) listrow_wgtman_pane_t

0x682e,	// (0x0007c894) wait_bar_pane_cp09

0x461a,	// (0x0007a680) main_calllock_btn_pane

0x4624,	// (0x0007a68a) main_calllock_pane_g1

0xe8bc,	// (0x00084922) bg_button_pane_cp17

0x4630,	// (0x0007a696) main_calllock_btn_pane_g1

0x4639,	// (0x0007a69f) main_calllock_btn_pane_t1

0xe8bc,	// (0x00084922) main_dialer3_pane

0xe8bc,	// (0x00084922) main_fmrd2_pane

0x23d5,	// (0x0007843b) main_fs_bigclock_unlock_btn_pane_g1

0x4650,	// (0x0007a6b6) main_fs_bigclock_unlock_btn_pane_t1

0xe332,	// (0x00084398) area_fmrd2_info_pane_ParamLimits

0xe332,	// (0x00084398) area_fmrd2_info_pane

0xe340,	// (0x000843a6) area_fmrd2_visual_pane_ParamLimits

0xe340,	// (0x000843a6) area_fmrd2_visual_pane

0xe34e,	// (0x000843b4) fmrd2_indi_pane_ParamLimits

0xe34e,	// (0x000843b4) fmrd2_indi_pane

0xe35b,	// (0x000843c1) area_fmrd2_visual_pane_g1

0xe363,	// (0x000843c9) area_fmrd2_visual_pane_t1

0xe373,	// (0x000843d9) area_fmrd2_visual_pane_t2

0xe383,	// (0x000843e9) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x00085f4e) area_fmrd2_visual_pane_t

0xe393,	// (0x000843f9) area_fmrd2_info_pane_g1

0xe39b,	// (0x00084401) area_fmrd2_info_pane_t1

0xe3ab,	// (0x00084411) area_fmrd2_info_pane_t2

0xe3bb,	// (0x00084421) area_fmrd2_info_pane_t3

0xe3cb,	// (0x00084431) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x00085f55) area_fmrd2_info_pane_t

0xe3d9,	// (0x0008443f) fmrd2_indi_pane_t1

0xe3e9,	// (0x0008444f) fmrd2_indi_pane_t2

0xe3f9,	// (0x0008445f) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x00085f5e) fmrd2_indi_pane_t

0x3c05,	// (0x00079c6b) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x3c05,	// (0x00079c6b) list_single_fs_bigclock_indicator_pane_g5

0x3cb5,	// (0x00079d1b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3cb5,	// (0x00079d1b) list_single_fs_bigclock_indicator_pane_t5

0xdcd4,	// (0x00083d3a) aid_cell_bcale_month_pane_ParamLimits

0xdcd4,	// (0x00083d3a) aid_cell_bcale_month_pane

0xdcf2,	// (0x00083d58) bcale_month_pane_ParamLimits

0xdcf2,	// (0x00083d58) bcale_month_pane

0xdd10,	// (0x00083d76) bcale_preview_pane_ParamLimits

0xdd10,	// (0x00083d76) bcale_preview_pane

0x43fe,	// (0x0007a464) list_single_fs_bigclock_pane_t1_ParamLimits

0x441d,	// (0x0007a483) list_single_fs_bigclock_pane_t2_ParamLimits

0x441d,	// (0x0007a483) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x00085ee0) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x00085ee0) list_single_fs_bigclock_pane_t

0x4648,	// (0x0007a6ae) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x00085f49) main_fs_bigclock_unlock_btn_pane_g

0xe407,	// (0x0008446d) aid_dia3_key_size_ParamLimits

0xe407,	// (0x0008446d) aid_dia3_key_size

0xe413,	// (0x00084479) aid_dia3_listrow_size_ParamLimits

0xe413,	// (0x00084479) aid_dia3_listrow_size

0xe423,	// (0x00084489) dia3_keypad_fun_pane_ParamLimits

0xe423,	// (0x00084489) dia3_keypad_fun_pane

0xe435,	// (0x0008449b) dia3_keypad_num_pane_ParamLimits

0xe435,	// (0x0008449b) dia3_keypad_num_pane

0xe447,	// (0x000844ad) dia3_listscroll_pane_ParamLimits

0xe447,	// (0x000844ad) dia3_listscroll_pane

0xe455,	// (0x000844bb) dia3_numentry_pane_ParamLimits

0xe455,	// (0x000844bb) dia3_numentry_pane

0x465e,	// (0x0007a6c4) dia3_list_pane

0x4669,	// (0x0007a6cf) scroll_pane_cp12

0xe8bc,	// (0x00084922) bg_dia3_numentry_pane

0xe463,	// (0x000844c9) dia3_numentry_pane_t1

0xe472,	// (0x000844d8) cell_dia3_key_num_pane

0xe47a,	// (0x000844e0) cell_dia3_key0_fun_pane_ParamLimits

0xe47a,	// (0x000844e0) cell_dia3_key0_fun_pane

0xe487,	// (0x000844ed) cell_dia3_key1_fun_pane_ParamLimits

0xe487,	// (0x000844ed) cell_dia3_key1_fun_pane

0xe494,	// (0x000844fa) dia3_listrow_pane

0x3914,	// (0x0007997a) bg_dia3_numentry_pane_g1

0xe8bc,	// (0x00084922) bg_button_pane_cp21

0x4674,	// (0x0007a6da) cell_dia3_key_num_pane_t1

0x4682,	// (0x0007a6e8) cell_dia3_key_num_pane_t2

0x4691,	// (0x0007a6f7) cell_dia3_key_num_pane_t3

0x46a0,	// (0x0007a706) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x00085f65) cell_dia3_key_num_pane_t

0xe8bc,	// (0x00084922) bg_button_pane_cp19

0xe4a1,	// (0x00084507) cell_dia3_key0_fun_pane_g1

0xe8bc,	// (0x00084922) bg_button_pane_cp20

0xe4a9,	// (0x0008450f) cell_dia3_key1_fun_pane_g1

0xe4b1,	// (0x00084517) area_left_week_number_pane

0xe4c4,	// (0x0008452a) area_top_day_name_pane

0xe4d2,	// (0x00084538) frame_month_view_pane

0x46af,	// (0x0007a715) grid_month_view_pane

0xe4e7,	// (0x0008454d) cell_top_day_name_pane_ParamLimits

0xe4e7,	// (0x0008454d) cell_top_day_name_pane

0xe501,	// (0x00084567) cell_area_left_week_number_pane_ParamLimits

0xe501,	// (0x00084567) cell_area_left_week_number_pane

0xe524,	// (0x0008458a) cell_month_view_pane_ParamLimits

0xe524,	// (0x0008458a) cell_month_view_pane

0x46bd,	// (0x0007a723) frm_month_g1

0xe550,	// (0x000845b6) frm_month_g2

0xe561,	// (0x000845c7) frm_month_g3

0xe572,	// (0x000845d8) frm_month_g4

0xe583,	// (0x000845e9) frm_month_g5

0xe596,	// (0x000845fc) frm_month_g6

0xe5a9,	// (0x0008460f) frm_month_g7

0x46ca,	// (0x0007a730) frm_month_g8

0xe5bc,	// (0x00084622) frm_month_g9

0xe5c9,	// (0x0008462f) frm_month_g10

0xe5d6,	// (0x0008463c) frm_month_g11

0xe5e3,	// (0x00084649) frm_month_g12

0xe5f0,	// (0x00084656) frm_month_g13

0xe5fd,	// (0x00084663) frm_month_g14

0xe60c,	// (0x00084672) frm_month_g15

0xe61b,	// (0x00084681) frm_month_g16

0x000f,

0xff08,	// (0x00085f6e) frm_month_g

0x46d7,	// (0x0007a73d) cell_top_day_name_pane_t1

0xe62a,	// (0x00084690) cell_area_left_week_number_pane_g1

0xe639,	// (0x0008469f) cell_area_left_week_number_pane_t1

0x2641,	// (0x000786a7) cell_month_view_pane_g1

0xe64f,	// (0x000846b5) cell_month_view_pane_t1

0xe8bc,	// (0x00084922) main_fps_pane

0x3eaa,	// (0x00079f10) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3eaa,	// (0x00079f10) cmail_ddmenu_btn02_pane_cp1

0x3ec6,	// (0x00079f2c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x3ec6,	// (0x00079f2c) cmail_ddmenu_btn02_pane_cp2

0xdf08,	// (0x00083f6e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xdf08,	// (0x00083f6e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x00085e93) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x00085e93) cmail_ddmenu_btn02_pane_g

0xdf26,	// (0x00083f8c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xdf26,	// (0x00083f8c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x00085e98) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x00085e98) cmail_ddmenu_btn02_pane_t

0xe665,	// (0x000846cb) fps_text_pane_ParamLimits

0xe665,	// (0x000846cb) fps_text_pane

0xe672,	// (0x000846d8) main_fps_pane_g1_ParamLimits

0xe672,	// (0x000846d8) main_fps_pane_g1

0xe680,	// (0x000846e6) wait_bar_pane_cp010_ParamLimits

0xe680,	// (0x000846e6) wait_bar_pane_cp010

0xe68c,	// (0x000846f2) fps_text_pane_t1_ParamLimits

0xe68c,	// (0x000846f2) fps_text_pane_t1

0xbb8b,	// (0x00081bf1) cam4_image_uncrop_pane_g1

0xbb94,	// (0x00081bfa) cam4_image_uncrop_pane_g2

0xbb9d,	// (0x00081c03) cam4_image_uncrop_pane_g3

0xbba6,	// (0x00081c0c) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x00085954) cam4_image_uncrop_pane_g

0xe494,	// (0x000844fa) dia3_listrow_pane_ParamLimits

0xe8bc,	// (0x00084922) main_phob2_pane

0xdb1b,	// (0x00083b81) cell_tport_appsw_pane_cp02_ParamLimits

0xdb1b,	// (0x00083b81) cell_tport_appsw_pane_cp02

0xdb2a,	// (0x00083b90) cell_tport_appsw_pane_cp03_ParamLimits

0xdb2a,	// (0x00083b90) cell_tport_appsw_pane_cp03

0xe8bc,	// (0x00084922) phob2_contact_card_pane

0xe8bc,	// (0x00084922) phob2_listscroll_pane

0x46ea,	// (0x0007a750) phob2_list_pane

0x46f2,	// (0x0007a758) scroll_pane_cp034

0xe6a5,	// (0x0008470b) phob2_cc_data_pane_ParamLimits

0xe6a5,	// (0x0008470b) phob2_cc_data_pane

0xe6bf,	// (0x00084725) phob2_cc_listscroll_pane_ParamLimits

0xe6bf,	// (0x00084725) phob2_cc_listscroll_pane

0xe6d9,	// (0x0008473f) list_double_large_graphic_phob2_pane_ParamLimits

0xe6d9,	// (0x0008473f) list_double_large_graphic_phob2_pane

0xe6f7,	// (0x0008475d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe6f7,	// (0x0008475d) list_double_large_graphic_phob2_pane_g1

0x6840,	// (0x0007c8a6) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x6840,	// (0x0007c8a6) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x00085f8f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x00085f8f) list_double_large_graphic_phob2_pane_g

0x684c,	// (0x0007c8b2) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x684c,	// (0x0007c8b2) list_double_large_graphic_phob2_pane_t1

0x6861,	// (0x0007c8c7) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x6861,	// (0x0007c8c7) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x00085f94) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x00085f94) list_double_large_graphic_phob2_pane_t

0xe8bc,	// (0x00084922) list_highlight_pane_cp024

0xe70d,	// (0x00084773) phob2_cc_button_pane

0xe715,	// (0x0008477b) phob2_cc_data_pane_g1_ParamLimits

0xe715,	// (0x0008477b) phob2_cc_data_pane_g1

0xe721,	// (0x00084787) phob2_cc_data_pane_g2_ParamLimits

0xe721,	// (0x00084787) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x00085f99) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x00085f99) phob2_cc_data_pane_g

0xe72d,	// (0x00084793) phob2_cc_data_pane_t1_ParamLimits

0xe72d,	// (0x00084793) phob2_cc_data_pane_t1

0xe73f,	// (0x000847a5) phob2_cc_data_pane_t2_ParamLimits

0xe73f,	// (0x000847a5) phob2_cc_data_pane_t2

0xe751,	// (0x000847b7) phob2_cc_data_pane_t3_ParamLimits

0xe751,	// (0x000847b7) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x00085f9e) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x00085f9e) phob2_cc_data_pane_t

0x46fa,	// (0x0007a760) phob2_cc_list_pane_ParamLimits

0x46fa,	// (0x0007a760) phob2_cc_list_pane

0x3134,	// (0x0007919a) scroll_pane_cp035_ParamLimits

0x3134,	// (0x0007919a) scroll_pane_cp035

0x0a50,	// (0x00076ab6) bg_button_pane_cp033

0x4706,	// (0x0007a76c) phob2_cc_button_pane_g1

0x4712,	// (0x0007a778) phob2_cc_button_pane_t1

0x4727,	// (0x0007a78d) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x00085fa5) phob2_cc_button_pane_t

0xe763,	// (0x000847c9) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe763,	// (0x000847c9) list_double_large_graphic_phob2_cc_pane

0xe78a,	// (0x000847f0) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe78a,	// (0x000847f0) list_double_large_graphic_phob2_cc_pane_g1

0xe79b,	// (0x00084801) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xe79b,	// (0x00084801) list_double_large_graphic_phob2_cc_pane_g2

0x6873,	// (0x0007c8d9) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x6873,	// (0x0007c8d9) list_double_large_graphic_phob2_cc_pane_g3

0x687f,	// (0x0007c8e5) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x687f,	// (0x0007c8e5) list_double_large_graphic_phob2_cc_pane_g4

0x688b,	// (0x0007c8f1) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x688b,	// (0x0007c8f1) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x00085faa) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x00085faa) list_double_large_graphic_phob2_cc_pane_g

0x6897,	// (0x0007c8fd) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x6897,	// (0x0007c8fd) list_double_large_graphic_phob2_cc_pane_t1

0x68c0,	// (0x0007c926) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x68c0,	// (0x0007c926) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x00085fb5) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x00085fb5) list_double_large_graphic_phob2_cc_pane_t

0x4739,	// (0x0007a79f) list_highlight_pane_cp025_ParamLimits

0x4739,	// (0x0007a79f) list_highlight_pane_cp025

0x0a50,	// (0x00076ab6) bg_button_pane_cp033_ParamLimits

0x4706,	// (0x0007a76c) phob2_cc_button_pane_g1_ParamLimits

0x4712,	// (0x0007a778) phob2_cc_button_pane_t1_ParamLimits

0x4727,	// (0x0007a78d) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x00085fa5) phob2_cc_button_pane_t_ParamLimits

0x6bc0,	// (0x0007cc26) popup_wgtman_window

0x2f79,	// (0x00078fdf) scroll_pane_cp038

0xe275,	// (0x000842db) wgtman_btn_pane_cp_01_ParamLimits

0xe275,	// (0x000842db) wgtman_btn_pane_cp_01

0x4747,	// (0x0007a7ad) wgtman_content_pane

0x4750,	// (0x0007a7b6) wgtman_heading_pane

0xe8bc,	// (0x00084922) bg_heading_pane_cp02

0x4759,	// (0x0007a7bf) wgtman_heading_pane_g1

0x4761,	// (0x0007a7c7) wgtman_heading_pane_t1

0x476f,	// (0x0007a7d5) scroll_pane_cp036

0x4777,	// (0x0007a7dd) wgtman_list_pane

0x477f,	// (0x0007a7e5) wgtman_list_pane_t1_ParamLimits

0x477f,	// (0x0007a7e5) wgtman_list_pane_t1

0xbaea,	// (0x00081b50) cam4_grid_pane

0x5b16,	// (0x0007bb7c) bg_button_pane_cp015_ParamLimits

0xc7c7,	// (0x0008282d) bg_button_pane_cp016_ParamLimits

0xc7da,	// (0x00082840) bg_button_pane_cp017_ParamLimits

0x5b5a,	// (0x0007bbc0) popup_vitu2_query_window_g3_ParamLimits

0x5b5a,	// (0x0007bbc0) popup_vitu2_query_window_g3

0x5bd3,	// (0x0007bc39) popup_vitu2_query_window_t6_ParamLimits

0x5bd3,	// (0x0007bc39) popup_vitu2_query_window_t6

0x5bfe,	// (0x0007bc64) popup_vitu2_query_window_t7_ParamLimits

0x5bfe,	// (0x0007bc64) popup_vitu2_query_window_t7

0x3d44,	// (0x00079daa) cam4_grid_pane_g1

0x3d4d,	// (0x00079db3) cam4_grid_pane_g2

0x4799,	// (0x0007a7ff) cam4_grid_pane_g3

0x47a2,	// (0x0007a808) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x00085fba) cam4_grid_pane_g

0x7a30,	// (0x0007da96) aid_placing_vt_slider_lsc_ParamLimits

0x7d7c,	// (0x0007dde2) vidtel_button_pane_ParamLimits

0x7d7c,	// (0x0007dde2) vidtel_button_pane

0x47ad,	// (0x0007a813) bg_button_pane_cp034

0xe7a7,	// (0x0008480d) vidtel_button_pane_g1

0x47b7,	// (0x0007a81d) vidtel_button_pane_t1

0x307b,	// (0x000790e1) aid_size_vtel_slider_touch

0x3134,	// (0x0007919a) scroll_pane_cp039

0x3952,	// (0x000799b8) ncim_query_button_pane_cp01_ParamLimits

0x3971,	// (0x000799d7) ncimui_query_pane_g1_ParamLimits

0x0a50,	// (0x00076ab6) input_focus_pane_cp012_ParamLimits

0x3996,	// (0x000799fc) ncim_query_entry_pane_t1_ParamLimits

0x3134,	// (0x0007919a) scroll_pane_cp039_ParamLimits

0x0a66,	// (0x00076acc) navi_pane_bcale_mc_g1

0x0a6e,	// (0x00076ad4) navi_pane_bcale_mc_t1

0x3f0f,	// (0x00079f75) main_sp_fs_email_pane_g1

0x3f1b,	// (0x00079f81) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x00085d4b) main_sp_fs_email_pane_g

0x4162,	// (0x0007a1c8) list_single_cale_mrui_row_pane_g3_ParamLimits

0x4162,	// (0x0007a1c8) list_single_cale_mrui_row_pane_g3

0x6748,	// (0x0007c7ae) list_single_recal_day_pane_g5_event_pane

0x675e,	// (0x0007c7c4) list_single_recal_day_pane_g7

0x47c5,	// (0x0007a82b) list_recal_day_event_pane_cp01

0x47ce,	// (0x0007a834) list_recal_vselct_arw_lo_pane_cp01

0x47d6,	// (0x0007a83c) list_recal_vselct_arw_up_pane_cp01

0x47de,	// (0x0007a844) list_recal_vselct_pane_cp01

0x309d,	// (0x00079103) list_recal_day_event_pane_cp01_g1

0x68e9,	// (0x0007c94f) list_recal_day_event_pane_cp01_t1

0x6766,	// (0x0007c7cc) list_single_recal_day_pane_t1_ParamLimits

0x6778,	// (0x0007c7de) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x00085ea8) list_single_recal_day_pane_t_ParamLimits

0xef4b,	// (0x00084fb1) bg_notes_pane_ParamLimits

0xefee,	// (0x00085054) list_notes_pane_ParamLimits

0x6f1e,	// (0x0007cf84) scroll_pane_cp06_ParamLimits

0xf010,	// (0x00085076) main_notes_pane_ParamLimits

0xe8bc,	// (0x00084922) main_welc_pane

0xe7af,	// (0x00084815) main_welc_body_pane_ParamLimits

0xe7af,	// (0x00084815) main_welc_body_pane

0xe7c9,	// (0x0008482f) main_welc_opti_pane_ParamLimits

0xe7c9,	// (0x0008482f) main_welc_opti_pane

0xe7fc,	// (0x00084862) main_welc_pane_t1_ParamLimits

0xe7fc,	// (0x00084862) main_welc_pane_t1

0xe816,	// (0x0008487c) main_welc_body_row_pane_ParamLimits

0xe816,	// (0x0008487c) main_welc_body_row_pane

0x3d36,	// (0x00079d9c) main_welc_opti_row_pane_ParamLimits

0x3d36,	// (0x00079d9c) main_welc_opti_row_pane

0x47e8,	// (0x0007a84e) main_welc_opti_row_pane_g1

0xe83b,	// (0x000848a1) main_welc_opti_row_pane_t1

0x47f0,	// (0x0007a856) main_welc_body_row_pane_t1

0x44d5,	// (0x0007a53b) popup_notif_wgt_heading_pane

0x44ef,	// (0x0007a555) aid_size_list_notif_wgt_del_ParamLimits

0x44fc,	// (0x0007a562) list_notif_wgt_row_pane_g1_ParamLimits

0x4508,	// (0x0007a56e) list_notif_wgt_row_pane_g2_ParamLimits

0x451c,	// (0x0007a582) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x00085f0f) list_notif_wgt_row_pane_g_ParamLimits

0x4529,	// (0x0007a58f) list_notif_wgt_row_pane_t1_ParamLimits

0x453f,	// (0x0007a5a5) list_notif_wgt_row_pane_t2_ParamLimits

0x4551,	// (0x0007a5b7) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x00085f16) list_notif_wgt_row_pane_t_ParamLimits

0xe307,	// (0x0008436d) listrow_wgtman_pane_g1_ParamLimits

0xe314,	// (0x0008437a) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x00085f3f) listrow_wgtman_pane_g_ParamLimits

0x67f0,	// (0x0007c856) listrow_wgtman_pane_t1_ParamLimits

0x6808,	// (0x0007c86e) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x00085f44) listrow_wgtman_pane_t_ParamLimits

0x682e,	// (0x0007c894) wait_bar_pane_cp09_ParamLimits

0xe8bc,	// (0x00084922) bg_popup_heading_pane_cp02

0x47ff,	// (0x0007a865) popup_notif_wgt_heading_pane_g1

0x4807,	// (0x0007a86d) popup_notif_wgt_heading_pane_t1

0xe8bc,	// (0x00084922) main_vids_pane

0xe8bc,	// (0x00084922) vids_listscroll_pane

0xe84a,	// (0x000848b0) scroll_pane_cp040

0xe8bc,	// (0x00084922) vids_list_pane

0xe855,	// (0x000848bb) vids_list_double_pane_ParamLimits

0xe855,	// (0x000848bb) vids_list_double_pane

0xe86f,	// (0x000848d5) vids_list_double_pane_g1

0xe878,	// (0x000848de) vids_list_double_pane_t1

0xe888,	// (0x000848ee) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x00085fc8) vids_list_double_pane_t

0x0a50,	// (0x00076ab6) main_ncimui_pane_ParamLimits

0xd33e,	// (0x000833a4) main_ncimui_pane_g1_ParamLimits

0xd34a,	// (0x000833b0) main_ncimui_pane_g2_ParamLimits

0xd34a,	// (0x000833b0) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x00085c50) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x00085c50) main_ncimui_pane_g

0xe7e2,	// (0x00084848) main_welc_pane_g1_ParamLimits

0xe7e2,	// (0x00084848) main_welc_pane_g1

0xe7ee,	// (0x00084854) main_welc_pane_g2_ParamLimits

0xe7ee,	// (0x00084854) main_welc_pane_g2

0x0001,

0xff5d,	// (0x00085fc3) main_welc_pane_g_ParamLimits

0xff5d,	// (0x00085fc3) main_welc_pane_g

0xef4b,	// (0x00084fb1) listscroll_mce_pane_ParamLimits

0x0bbb,	// (0x00076c21) wait_bar_pane_cp10

0x1fc1,	// (0x00078027) main_cale_day_pane_ParamLimits

0x1fc1,	// (0x00078027) main_cale_week_pane_ParamLimits

0xef4b,	// (0x00084fb1) main_messa_pane_ParamLimits

0xaf4a,	// (0x00080fb0) main_clock2_btn_pane_ParamLimits

0xaf4a,	// (0x00080fb0) main_clock2_btn_pane

0x27e9,	// (0x0007884f) main_clock2_btn_pane_cp01_ParamLimits

0x27e9,	// (0x0007884f) main_clock2_btn_pane_cp01

0x4133,	// (0x0007a199) list_cale_mrui_pane_ParamLimits

0x4587,	// (0x0007a5ed) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x00085f1d) main_cf0_pane_g

0xe4b1,	// (0x00084517) area_left_week_number_pane_ParamLimits

0xe4c4,	// (0x0008452a) area_top_day_name_pane_ParamLimits

0xe4d2,	// (0x00084538) frame_month_view_pane_ParamLimits

0x46af,	// (0x0007a715) grid_month_view_pane_ParamLimits

0x46bd,	// (0x0007a723) frm_month_g1_ParamLimits

0xe550,	// (0x000845b6) frm_month_g2_ParamLimits

0xe561,	// (0x000845c7) frm_month_g3_ParamLimits

0xe572,	// (0x000845d8) frm_month_g4_ParamLimits

0xe583,	// (0x000845e9) frm_month_g5_ParamLimits

0xe596,	// (0x000845fc) frm_month_g6_ParamLimits

0xe5a9,	// (0x0008460f) frm_month_g7_ParamLimits

0x46ca,	// (0x0007a730) frm_month_g8_ParamLimits

0xe5bc,	// (0x00084622) frm_month_g9_ParamLimits

0xe5c9,	// (0x0008462f) frm_month_g10_ParamLimits

0xe5d6,	// (0x0008463c) frm_month_g11_ParamLimits

0xe5e3,	// (0x00084649) frm_month_g12_ParamLimits

0xe5f0,	// (0x00084656) frm_month_g13_ParamLimits

0xe5fd,	// (0x00084663) frm_month_g14_ParamLimits

0xe60c,	// (0x00084672) frm_month_g15_ParamLimits

0xe61b,	// (0x00084681) frm_month_g16_ParamLimits

0xff08,	// (0x00085f6e) frm_month_g_ParamLimits

0x46d7,	// (0x0007a73d) cell_top_day_name_pane_t1_ParamLimits

0xe62a,	// (0x00084690) cell_area_left_week_number_pane_g1_ParamLimits

0xe639,	// (0x0008469f) cell_area_left_week_number_pane_t1_ParamLimits

0x2641,	// (0x000786a7) cell_month_view_pane_g1_ParamLimits

0xe64f,	// (0x000846b5) cell_month_view_pane_t1_ParamLimits

0xef43,	// (0x00084fa9) main_clock2_btn_pane_g1

0x4815,	// (0x0007a87b) main_clock2_btn_pane_t1

0x0a50,	// (0x00076ab6) listscroll_cmail_pane_ParamLimits

0x3f0f,	// (0x00079f75) main_sp_fs_email_pane_g1_ParamLimits

0x3f1b,	// (0x00079f81) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x00085d4b) main_sp_fs_email_pane_g_ParamLimits

0x4242,	// (0x0007a2a8) list_recal_day_pane_ParamLimits

0x4253,	// (0x0007a2b9) mian_recal_day_pane_t1

0x6139,	// (0x0007c19f) list_single_dyc_row_text_pane_t4_ParamLimits

0x6139,	// (0x0007c19f) list_single_dyc_row_text_pane_t4

0x6170,	// (0x0007c1d6) list_single_dyc_row_text_pane_t5_ParamLimits

0x6170,	// (0x0007c1d6) list_single_dyc_row_text_pane_t5

0x61e6,	// (0x0007c24c) list_single_dyc_row_text_pane_t6_ParamLimits

0x61e6,	// (0x0007c24c) list_single_dyc_row_text_pane_t6

0x8bde,	// (0x0007ec44) aid_mgn_list_cale_time_pane

0x0a50,	// (0x00076ab6) main_gallery2_pane_ParamLimits

0x27ff,	// (0x00078865) main_clock2_pane_cp01_t1

0x280f,	// (0x00078875) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0008582a) main_clock2_pane_cp01_t

0x7360,	// (0x0007d3c6) cale_week_scroll_pane_g16_ParamLimits

0x7360,	// (0x0007d3c6) cale_week_scroll_pane_g16

0x014f,	// (0x000761b5) vorec_slider_pane
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
