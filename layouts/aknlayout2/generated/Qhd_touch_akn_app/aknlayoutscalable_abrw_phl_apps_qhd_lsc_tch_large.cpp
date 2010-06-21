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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000a5126 };

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
0x022d,	// (0x000a5353) Screen

0x0239,	// (0x000a535f) application_window

0x02a1,	// (0x000a53c7) area_bottom_pane_ParamLimits

0x02a1,	// (0x000a53c7) area_bottom_pane

0x02fe,	// (0x000a5424) area_top_pane_ParamLimits

0x02fe,	// (0x000a5424) area_top_pane

0x9549,	// (0x000ae66f) call_video_uplink_pane_ParamLimits

0x9549,	// (0x000ae66f) call_video_uplink_pane

0x038c,	// (0x000a54b2) main_pane_ParamLimits

0x038c,	// (0x000a54b2) main_pane

0xbc8a,	// (0x000b0db0) context_pane

0x38e2,	// (0x000a8a08) navi_pane

0x3914,	// (0x000a8a3a) popup_cale_events_window_ParamLimits

0x3914,	// (0x000a8a3a) popup_cale_events_window

0xbc9d,	// (0x000b0dc3) popup_mup_playback_window

0x392c,	// (0x000a8a52) signal_pane

0xed70,	// (0x000b3e96) main_browser_pane

0x9709,	// (0x000ae82f) main_burst_pane

0x3630,	// (0x000a8756) main_calc_pane

0xbc70,	// (0x000b0d96) main_cale_day_pane

0x3644,	// (0x000a876a) main_cale_month_pane

0xbc70,	// (0x000b0d96) main_cale_week_pane

0x9709,	// (0x000ae82f) main_call_pane

0xea50,	// (0x000b3b76) main_call_poc_pane

0x9709,	// (0x000ae82f) main_camera_pane

0x9709,	// (0x000ae82f) main_chi_dic_pane

0xa5ef,	// (0x000af715) main_clock_pane

0xea50,	// (0x000b3b76) main_fmradio_pane

0x9709,	// (0x000ae82f) main_graph_messa_pane

0xea50,	// (0x000b3b76) main_help_pane

0xed70,	// (0x000b3e96) main_im_pane

0xecab,	// (0x000b3dd1) main_image_pane_ParamLimits

0xecab,	// (0x000b3dd1) main_image_pane

0xea50,	// (0x000b3b76) main_location2_pane

0x9709,	// (0x000ae82f) main_location_pane

0xecab,	// (0x000b3dd1) main_messa_pane

0xea50,	// (0x000b3b76) main_mp2_pane

0x9709,	// (0x000ae82f) main_mp_pane

0xea50,	// (0x000b3b76) main_msg_pane

0xea50,	// (0x000b3b76) main_mup_eq_pane

0xea50,	// (0x000b3b76) main_mup_pane

0xed70,	// (0x000b3e96) main_notes_pane

0xea50,	// (0x000b3b76) main_pec_pane

0xea50,	// (0x000b3b76) main_phob_pane

0xea50,	// (0x000b3b76) main_pinb_pane

0xea50,	// (0x000b3b76) main_postcard_pane

0xea50,	// (0x000b3b76) main_qdial_pane

0x9709,	// (0x000ae82f) main_skin_pane

0xea50,	// (0x000b3b76) main_smil2_pane

0x9709,	// (0x000ae82f) main_smil_pane

0x9709,	// (0x000ae82f) main_video_pane

0x9709,	// (0x000ae82f) main_video_tele_pane

0xecab,	// (0x000b3dd1) main_viewer_pane_ParamLimits

0xecab,	// (0x000b3dd1) main_viewer_pane

0x9709,	// (0x000ae82f) main_vorec_pane

0x3696,	// (0x000a87bc) popup_blid_sat_info_window_ParamLimits

0x3696,	// (0x000a87bc) popup_blid_sat_info_window

0x36ee,	// (0x000a8814) popup_dyc_status_message_window_ParamLimits

0x36ee,	// (0x000a8814) popup_dyc_status_message_window

0x3708,	// (0x000a882e) popup_grid_large_graphic_window_ParamLimits

0x3708,	// (0x000a882e) popup_grid_large_graphic_window

0x37c4,	// (0x000a88ea) popup_loc_request_window_ParamLimits

0x37c4,	// (0x000a88ea) popup_loc_request_window

0x38ba,	// (0x000a89e0) popup_wml_address_window_ParamLimits

0x38ba,	// (0x000a89e0) popup_wml_address_window

0x346a,	// (0x000a8590) call_muted_g1

0x311f,	// (0x000a8245) popup_call_audio_conf_window_ParamLimits

0x311f,	// (0x000a8245) popup_call_audio_conf_window

0x347e,	// (0x000a85a4) popup_call_audio_first_window_ParamLimits

0x347e,	// (0x000a85a4) popup_call_audio_first_window

0x34f4,	// (0x000a861a) popup_call_audio_in_window_ParamLimits

0x34f4,	// (0x000a861a) popup_call_audio_in_window

0x3530,	// (0x000a8656) popup_call_audio_out_window_ParamLimits

0x3530,	// (0x000a8656) popup_call_audio_out_window

0x356a,	// (0x000a8690) popup_call_audio_second_window_ParamLimits

0x356a,	// (0x000a8690) popup_call_audio_second_window

0x35c0,	// (0x000a86e6) popup_call_audio_wait_window_ParamLimits

0x35c0,	// (0x000a86e6) popup_call_audio_wait_window

0x35f5,	// (0x000a871b) popup_number_entry_window_ParamLimits

0x35f5,	// (0x000a871b) popup_number_entry_window

0xe63d,	// (0x000b3763) bg_popup_call_pane_cp05_ParamLimits

0xe63d,	// (0x000b3763) bg_popup_call_pane_cp05

0xe65d,	// (0x000b3783) popup_number_entry_window_t1

0xe670,	// (0x000b3796) popup_number_entry_window_t2

0xe682,	// (0x000b37a8) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x000b41ec) popup_number_entry_window_t

0xe694,	// (0x000b37ba) text_title_cp2

0xe6a7,	// (0x000b37cd) bg_popup_call_pane_cp_ParamLimits

0xe6a7,	// (0x000b37cd) bg_popup_call_pane_cp

0xe6b5,	// (0x000b37db) call_thumbnail_pane

0xe6bd,	// (0x000b37e3) popup_call_audio_in_window_g1_ParamLimits

0xe6bd,	// (0x000b37e3) popup_call_audio_in_window_g1

0xe6c9,	// (0x000b37ef) popup_call_audio_in_window_g2_ParamLimits

0xe6c9,	// (0x000b37ef) popup_call_audio_in_window_g2

0xe6d5,	// (0x000b37fb) popup_call_audio_in_window_g3_ParamLimits

0xe6d5,	// (0x000b37fb) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x000b41f5) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x000b41f5) popup_call_audio_in_window_g

0xe6e1,	// (0x000b3807) popup_call_audio_in_window_t1_ParamLimits

0xe6e1,	// (0x000b3807) popup_call_audio_in_window_t1

0xe6fd,	// (0x000b3823) popup_call_audio_in_window_t2_ParamLimits

0xe6fd,	// (0x000b3823) popup_call_audio_in_window_t2

0xe719,	// (0x000b383f) popup_call_audio_in_window_t3_ParamLimits

0xe719,	// (0x000b383f) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x000b41fc) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x000b41fc) popup_call_audio_in_window_t

0xe6a7,	// (0x000b37cd) bg_popup_call_pane_cp01_ParamLimits

0xe6a7,	// (0x000b37cd) bg_popup_call_pane_cp01

0xe6b5,	// (0x000b37db) call_thumbnail_pane_cp02

0xe72c,	// (0x000b3852) call_type_pane_cp022

0xe734,	// (0x000b385a) popup_call_audio_out_window_g1_ParamLimits

0xe734,	// (0x000b385a) popup_call_audio_out_window_g1

0xe746,	// (0x000b386c) popup_call_audio_out_window_g2_ParamLimits

0xe746,	// (0x000b386c) popup_call_audio_out_window_g2

0xe752,	// (0x000b3878) popup_call_audio_out_window_g3_ParamLimits

0xe752,	// (0x000b3878) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x000b4203) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x000b4203) popup_call_audio_out_window_g

0xe764,	// (0x000b388a) popup_call_audio_out_window_t1_ParamLimits

0xe764,	// (0x000b388a) popup_call_audio_out_window_t1

0xe77c,	// (0x000b38a2) popup_call_audio_out_window_t2_ParamLimits

0xe77c,	// (0x000b38a2) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x000b420a) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x000b420a) popup_call_audio_out_window_t

0xe791,	// (0x000b38b7) bg_popup_call_pane_ParamLimits

0xe791,	// (0x000b38b7) bg_popup_call_pane

0x0548,	// (0x000a566e) call_thumbnail_pane_cp_ParamLimits

0x0548,	// (0x000a566e) call_thumbnail_pane_cp

0xe815,	// (0x000b393b) call_type_pane_cp01_ParamLimits

0xe815,	// (0x000b393b) call_type_pane_cp01

0xe859,	// (0x000b397f) popup_call_audio_first_window_g1_ParamLimits

0xe859,	// (0x000b397f) popup_call_audio_first_window_g1

0xe8a5,	// (0x000b39cb) popup_call_audio_first_window_g2_ParamLimits

0xe8a5,	// (0x000b39cb) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x000b420f) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x000b420f) popup_call_audio_first_window_g

0xe8e9,	// (0x000b3a0f) popup_call_audio_first_window_t1_ParamLimits

0xe8e9,	// (0x000b3a0f) popup_call_audio_first_window_t1

0xe995,	// (0x000b3abb) popup_call_audio_first_window_t4_ParamLimits

0xe995,	// (0x000b3abb) popup_call_audio_first_window_t4

0xea21,	// (0x000b3b47) popup_call_audio_first_window_t5_ParamLimits

0xea21,	// (0x000b3b47) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x000b4214) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x000b4214) popup_call_audio_first_window_t

0xea50,	// (0x000b3b76) bg_popup_call_pane_cp02

0xea5a,	// (0x000b3b80) call_type_pane_cp023

0xea62,	// (0x000b3b88) popup_call_audio_wait_window_g1

0xea6a,	// (0x000b3b90) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000b421b) popup_call_audio_wait_window_g

0xea72,	// (0x000b3b98) popup_call_audio_wait_window_t3

0xea80,	// (0x000b3ba6) bg_popup_call_pane_cp03_ParamLimits

0xea80,	// (0x000b3ba6) bg_popup_call_pane_cp03

0xeae0,	// (0x000b3c06) call_thumbnail_pane_cp011_ParamLimits

0xeae0,	// (0x000b3c06) call_thumbnail_pane_cp011

0xeaec,	// (0x000b3c12) call_type_pane_cp034_ParamLimits

0xeaec,	// (0x000b3c12) call_type_pane_cp034

0xeb28,	// (0x000b3c4e) popup_call_audio_second_window_g1_ParamLimits

0xeb28,	// (0x000b3c4e) popup_call_audio_second_window_g1

0xeb64,	// (0x000b3c8a) popup_call_audio_second_window_g2_ParamLimits

0xeb64,	// (0x000b3c8a) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x000b4220) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x000b4220) popup_call_audio_second_window_g

0xeba0,	// (0x000b3cc6) popup_call_audio_second_window_t1_ParamLimits

0xeba0,	// (0x000b3cc6) popup_call_audio_second_window_t1

0xec21,	// (0x000b3d47) popup_call_audio_second_window_t2_ParamLimits

0xec21,	// (0x000b3d47) popup_call_audio_second_window_t2

0xec57,	// (0x000b3d7d) popup_call_audio_second_window_t3_ParamLimits

0xec57,	// (0x000b3d7d) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x000b4225) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x000b4225) popup_call_audio_second_window_t

0xea50,	// (0x000b3b76) bg_popup_call_pane_cp04

0xec8d,	// (0x000b3db3) list_conf_pane

0xec95,	// (0x000b3dbb) popup_call_audio_conf_window_t1

0xeca3,	// (0x000b3dc9) call_thumbnail_pane_g1

0xecab,	// (0x000b3dd1) bg_pinb_pane_ParamLimits

0xecab,	// (0x000b3dd1) bg_pinb_pane

0xecb9,	// (0x000b3ddf) find_pinb_pane

0xecc2,	// (0x000b3de8) listscroll_pinb_pane_ParamLimits

0xecc2,	// (0x000b3de8) listscroll_pinb_pane

0xecd1,	// (0x000b3df7) pinb_bg_pane_g1

0x056c,	// (0x000a5692) pinb_bg_pane_g2

0x0578,	// (0x000a569e) pinb_bg_pane_g3

0x0584,	// (0x000a56aa) pinb_bg_pane_g4

0x0590,	// (0x000a56b6) pinb_bg_pane_g5

0x059c,	// (0x000a56c2) pinb_bg_pane_g6

0x05a7,	// (0x000a56cd) pinb_bg_pane_g7

0x05b2,	// (0x000a56d8) pinb_bg_pane_g8

0x05bd,	// (0x000a56e3) pinb_bg_pane_g9

0x05c7,	// (0x000a56ed) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x000b422c) pinb_bg_pane_g

0x05e4,	// (0x000a570a) grid_pinb_pane

0x05ed,	// (0x000a5713) list_pinb_pane

0x05f6,	// (0x000a571c) scroll_pane_cp01_ParamLimits

0x05f6,	// (0x000a571c) scroll_pane_cp01

0xecdb,	// (0x000b3e01) find_pinb_pane_g1_ParamLimits

0xecdb,	// (0x000b3e01) find_pinb_pane_g1

0xecf3,	// (0x000b3e19) find_pinb_pane_t1

0xed05,	// (0x000b3e2b) find_pinb_pane_t2

0x0001,

0xf120,	// (0x000b4246) find_pinb_pane_t

0xed1a,	// (0x000b3e40) input_focus_pane_cp01_ParamLimits

0xed1a,	// (0x000b3e40) input_focus_pane_cp01

0x0608,	// (0x000a572e) cell_pinb_pane_ParamLimits

0x0608,	// (0x000a572e) cell_pinb_pane

0x0631,	// (0x000a5757) cell_pinb_pane_g1_ParamLimits

0x0631,	// (0x000a5757) cell_pinb_pane_g1

0x0641,	// (0x000a5767) cell_pinb_pane_g2_ParamLimits

0x0641,	// (0x000a5767) cell_pinb_pane_g2

0xed26,	// (0x000b3e4c) cell_pinb_pane_g3_ParamLimits

0xed26,	// (0x000b3e4c) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x000b424b) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x000b424b) cell_pinb_pane_g

0xea50,	// (0x000b3b76) grid_highlight_pane_cp01

0x064d,	// (0x000a5773) list_pinb_item_pane_ParamLimits

0x064d,	// (0x000a5773) list_pinb_item_pane

0xea50,	// (0x000b3b76) list_highlight_pane_cp02

0x065f,	// (0x000a5785) list_pinb_item_pane_g1_ParamLimits

0x065f,	// (0x000a5785) list_pinb_item_pane_g1

0x066c,	// (0x000a5792) list_pinb_item_pane_g2_ParamLimits

0x066c,	// (0x000a5792) list_pinb_item_pane_g2

0x0678,	// (0x000a579e) list_pinb_item_pane_g3_ParamLimits

0x0678,	// (0x000a579e) list_pinb_item_pane_g3

0x0689,	// (0x000a57af) list_pinb_item_pane_g4_ParamLimits

0x0689,	// (0x000a57af) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x000b4252) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x000b4252) list_pinb_item_pane_g

0x0695,	// (0x000a57bb) list_pinb_item_pane_t1_ParamLimits

0x0695,	// (0x000a57bb) list_pinb_item_pane_t1

0x06ca,	// (0x000a57f0) calc_display_pane

0x06ef,	// (0x000a5815) calc_paper_pane

0x0712,	// (0x000a5838) grid_calc_pane

0xea50,	// (0x000b3b76) bg_list_pane_cp01

0x0740,	// (0x000a5866) clock_g1

0x0748,	// (0x000a586e) clock_g2

0x0001,

0xf135,	// (0x000b425b) clock_g

0x0750,	// (0x000a5876) clock_t1_ParamLimits

0x0750,	// (0x000a5876) clock_t1

0x0765,	// (0x000a588b) clock_t2_ParamLimits

0x0765,	// (0x000a588b) clock_t2

0x0777,	// (0x000a589d) clock_t3_ParamLimits

0x0777,	// (0x000a589d) clock_t3

0x0789,	// (0x000a58af) clock_t4_ParamLimits

0x0789,	// (0x000a58af) clock_t4

0x079b,	// (0x000a58c1) clock_t5_ParamLimits

0x079b,	// (0x000a58c1) clock_t5

0x07b0,	// (0x000a58d6) clock_t6_ParamLimits

0x07b0,	// (0x000a58d6) clock_t6

0x07c2,	// (0x000a58e8) clock_t7_ParamLimits

0x07c2,	// (0x000a58e8) clock_t7

0x07d4,	// (0x000a58fa) clock_t8_ParamLimits

0x07d4,	// (0x000a58fa) clock_t8

0x07e8,	// (0x000a590e) clock_t9_ParamLimits

0x07e8,	// (0x000a590e) clock_t9

0x0008,

0xf13a,	// (0x000b4260) clock_t_ParamLimits

0xf13a,	// (0x000b4260) clock_t

0xed32,	// (0x000b3e58) popup_clock_analogue_window_cp02

0xed32,	// (0x000b3e58) popup_clock_digital_window_cp01

0xed3a,	// (0x000b3e60) listscroll_help_pane

0xea50,	// (0x000b3b76) phob_pre_status_pane

0xed44,	// (0x000b3e6a) grid_qdial_pane

0xecab,	// (0x000b3dd1) listscroll_mce_pane

0xecab,	// (0x000b3dd1) bg_notes_pane

0xed4e,	// (0x000b3e74) list_notes_pane

0x07fc,	// (0x000a5922) scroll_pane_cp06

0xed5c,	// (0x000b3e82) bg_calc_paper_pane

0x9587,	// (0x000ae6ad) list_calc_pane

0xed70,	// (0x000b3e96) bg_calc_display_pane

0x0810,	// (0x000a5936) calc_display_pane_t1

0x0825,	// (0x000a594b) calc_display_pane_t2

0x95a1,	// (0x000ae6c7) calc_display_pane_t3

0x0002,

0xf14d,	// (0x000b4273) calc_display_pane_t

0x083a,	// (0x000a5960) cell_calc_pane_ParamLimits

0x083a,	// (0x000a5960) cell_calc_pane

0xed7c,	// (0x000b3ea2) bg_calc_paper_pane_g1

0xed88,	// (0x000b3eae) bg_calc_paper_pane_g2

0xed94,	// (0x000b3eba) bg_calc_paper_pane_g3

0xeda0,	// (0x000b3ec6) bg_calc_paper_pane_g4

0xedac,	// (0x000b3ed2) bg_calc_paper_pane_g5

0x086f,	// (0x000a5995) bg_calc_paper_pane_g6

0x087e,	// (0x000a59a4) bg_calc_paper_pane_g7

0x088d,	// (0x000a59b3) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x000b427a) bg_calc_paper_pane_g

0x08a0,	// (0x000a59c6) calc_bg_paper_pane_g9

0x08b3,	// (0x000a59d9) list_calc_item_pane_ParamLimits

0x08b3,	// (0x000a59d9) list_calc_item_pane

0xedb8,	// (0x000b3ede) list_calc_item_pane_g1

0x95b3,	// (0x000ae6d9) list_calc_item_pane_t1_ParamLimits

0x95b3,	// (0x000ae6d9) list_calc_item_pane_t1

0x08cb,	// (0x000a59f1) list_calc_item_pane_t2_ParamLimits

0x08cb,	// (0x000a59f1) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x000b428b) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x000b428b) list_calc_item_pane_t

0xedc5,	// (0x000b3eeb) cell_calc_pane_g1

0xedcf,	// (0x000b3ef5) grid_highlight_pane_cp02

0x08fd,	// (0x000a5a23) bg_calc_display_pane_g1

0x0906,	// (0x000a5a2c) bg_calc_display_pane_g2

0xedf1,	// (0x000b3f17) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x000b4295) bg_calc_display_pane_g

0x0910,	// (0x000a5a36) cell_qdial_pane_ParamLimits

0x0910,	// (0x000a5a36) cell_qdial_pane

0x0924,	// (0x000a5a4a) cell_qdial_pane_g1_ParamLimits

0x0924,	// (0x000a5a4a) cell_qdial_pane_g1

0x093a,	// (0x000a5a60) cell_qdial_pane_g2_ParamLimits

0x093a,	// (0x000a5a60) cell_qdial_pane_g2

0xedfa,	// (0x000b3f20) cell_qdial_pane_g3_ParamLimits

0xedfa,	// (0x000b3f20) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x000b429c) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x000b429c) cell_qdial_pane_g

0x0961,	// (0x000a5a87) cell_qdial_pane_t1_ParamLimits

0x0961,	// (0x000a5a87) cell_qdial_pane_t1

0x0979,	// (0x000a5a9f) cell_qdial_pane_t2_ParamLimits

0x0979,	// (0x000a5a9f) cell_qdial_pane_t2

0x098c,	// (0x000a5ab2) cell_qdial_pane_t3_ParamLimits

0x098c,	// (0x000a5ab2) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x000b42a5) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x000b42a5) cell_qdial_pane_t

0xea50,	// (0x000b3b76) grid_highlight_pane_cp04

0xee06,	// (0x000b3f2c) thumbnail_qdial_pane_ParamLimits

0xee06,	// (0x000b3f2c) thumbnail_qdial_pane

0x95e5,	// (0x000ae70b) list_help_pane

0x95ee,	// (0x000ae714) scroll_pane_cp02

0x099f,	// (0x000a5ac5) help_list_pane_t1_ParamLimits

0x099f,	// (0x000a5ac5) help_list_pane_t1

0x95f7,	// (0x000ae71d) bg_notes_pane_g2

0x95ff,	// (0x000ae725) bg_notes_pane_g3

0x9607,	// (0x000ae72d) notes_bg_pane_g1

0x960f,	// (0x000ae735) notes_bg_pane_g4

0x9617,	// (0x000ae73d) notes_bg_pane_g5

0x961f,	// (0x000ae745) notes_bg_pane_g6

0x9627,	// (0x000ae74d) notes_bg_pane_g7

0x962f,	// (0x000ae755) notes_bg_pane_g8

0x9637,	// (0x000ae75d) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x000b42c3) notes_bg_pane_g

0x09bc,	// (0x000a5ae2) list_notes_text_pane_ParamLimits

0x09bc,	// (0x000a5ae2) list_notes_text_pane

0x963f,	// (0x000ae765) list_notes_text_pane_g1

0x09d1,	// (0x000a5af7) list_notes_text_pane_t1

0x09df,	// (0x000a5b05) listscroll_cale_week_pane

0x0a0b,	// (0x000a5b31) bg_cale_heading_pane

0x9662,	// (0x000ae788) bg_cale_pane_cp01

0x0a23,	// (0x000a5b49) cale_week_corner_pane

0x0a42,	// (0x000a5b68) cale_week_day_heading_pane

0x0a5f,	// (0x000a5b85) cale_week_scroll_pane_g1

0x0a72,	// (0x000a5b98) cale_week_scroll_pane_g2

0x0a8a,	// (0x000a5bb0) cale_week_scroll_pane_g3

0x0aa2,	// (0x000a5bc8) cale_week_scroll_pane_g4

0x0aba,	// (0x000a5be0) cale_week_scroll_pane_g5

0x0ada,	// (0x000a5c00) cale_week_scroll_pane_g6

0x0afa,	// (0x000a5c20) cale_week_scroll_pane_g7

0x0b1a,	// (0x000a5c40) cale_week_scroll_pane_g8

0x0b3e,	// (0x000a5c64) cale_week_scroll_pane_g9

0x0b56,	// (0x000a5c7c) cale_week_scroll_pane_g10

0x0b6e,	// (0x000a5c94) cale_week_scroll_pane_g11

0x0b86,	// (0x000a5cac) cale_week_scroll_pane_g12

0x0b9e,	// (0x000a5cc4) cale_week_scroll_pane_g13

0x0b9e,	// (0x000a5cc4) cale_week_scroll_pane_g14

0x0b9e,	// (0x000a5cc4) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x000b42d2) cale_week_scroll_pane_g

0x0bda,	// (0x000a5d00) cale_week_time_pane

0x0bfe,	// (0x000a5d24) grid_cale_week_pane

0x9691,	// (0x000ae7b7) scroll_pane_cp08

0x0c24,	// (0x000a5d4a) cell_cale_week_pane_ParamLimits

0x0c24,	// (0x000a5d4a) cell_cale_week_pane

0x0cb2,	// (0x000a5dd8) cale_week_day_heading_pane_t1

0x0cdc,	// (0x000a5e02) cale_week_day_heading_pane_t2

0x0d0b,	// (0x000a5e31) cale_week_day_heading_pane_t3

0x0d3a,	// (0x000a5e60) cale_week_day_heading_pane_t4

0x0d69,	// (0x000a5e8f) cale_week_day_heading_pane_t5

0x0da0,	// (0x000a5ec6) cale_week_day_heading_pane_t6

0x0dd7,	// (0x000a5efd) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x000b42f3) cale_week_day_heading_pane_t

0x96ae,	// (0x000ae7d4) bg_cale_side_pane

0x0e01,	// (0x000a5f27) cale_week_time_pane_t1

0x0e1b,	// (0x000a5f41) cale_week_time_pane_t2

0x0e35,	// (0x000a5f5b) cale_week_time_pane_t3

0x0e4f,	// (0x000a5f75) cale_week_time_pane_t4

0x0e69,	// (0x000a5f8f) cale_week_time_pane_t5

0x0e83,	// (0x000a5fa9) cale_week_time_pane_t6

0x0e9d,	// (0x000a5fc3) cale_week_time_pane_t7

0x0eb7,	// (0x000a5fdd) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x000b4302) cale_week_time_pane_t

0x0ed1,	// (0x000a5ff7) cell_cale_week_pane_g2

0x0ef0,	// (0x000a6016) cell_cale_week_pane_g3_ParamLimits

0x0ef0,	// (0x000a6016) cell_cale_week_pane_g3

0x96bc,	// (0x000ae7e2) grid_highlight_pane_cp07

0x96c4,	// (0x000ae7ea) listscroll_gms_pane

0x96ce,	// (0x000ae7f4) grid_gms_pane

0x96d7,	// (0x000ae7fd) listscroll_gms_pane_g1

0x96df,	// (0x000ae805) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x000b4313) listscroll_gms_pane_g

0x0f08,	// (0x000a602e) scroll_pane_cp010

0x0f13,	// (0x000a6039) cell_gms_pane_ParamLimits

0x0f13,	// (0x000a6039) cell_gms_pane

0x0f26,	// (0x000a604c) cell_gms_pane_g1

0x96e7,	// (0x000ae80d) cell_gms_pane_g2

0x96ef,	// (0x000ae815) cell_gms_pane_g3

0x96f8,	// (0x000ae81e) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x000b4318) cell_gms_pane_g

0x9701,	// (0x000ae827) grid_highlight_pane_cp09

0x3414,	// (0x000a853a) phob_pre_status_pane_g1

0x341c,	// (0x000a8542) phob_pre_status_pane_g2

0x3424,	// (0x000a854a) phob_pre_status_pane_g3

0x342c,	// (0x000a8552) phob_pre_status_pane_g4

0x0004,

0xf5dd,	// (0x000b4703) phob_pre_status_pane_g

0x343c,	// (0x000a8562) phob_pre_status_pane_t1

0x344a,	// (0x000a8570) phob_pre_status_pane_t2

0x345a,	// (0x000a8580) phob_pre_status_pane_t3

0x0002,

0xf5e8,	// (0x000b470e) phob_pre_status_pane_t

0x9709,	// (0x000ae82f) bg_list_pane_cp05

0x0f36,	// (0x000a605c) grid_vorec_pane

0x0f3e,	// (0x000a6064) vorec_t1

0x0f4c,	// (0x000a6072) vorec_t2

0x0f5a,	// (0x000a6080) vorec_t3

0x0f68,	// (0x000a608e) vorec_t4

0x9507,	// (0x000ae62d) vorec_t5

0x9515,	// (0x000ae63b) vorec_t6

0x0004,

0xf1fb,	// (0x000b4321) vorec_t

0x9523,	// (0x000ae649) wait_bar_pane_cp01

0x0f84,	// (0x000a60aa) cell_vorec_pane_ParamLimits

0x0f84,	// (0x000a60aa) cell_vorec_pane

0x9711,	// (0x000ae837) cell_vorec_pane_g1

0xea50,	// (0x000b3b76) grid_highlight_pane_cp05

0x0fac,	// (0x000a60d2) cams_zoom_pane

0x0fbb,	// (0x000a60e1) image_vga_pane

0x0fd5,	// (0x000a60fb) main_camera_pane_g1

0x0fe7,	// (0x000a610d) main_camera_pane_g2

0x0ff7,	// (0x000a611d) main_camera_pane_g3

0x1007,	// (0x000a612d) main_camera_pane_g4

0x1017,	// (0x000a613d) main_camera_pane_g5

0x1027,	// (0x000a614d) main_camera_pane_g6

0x1039,	// (0x000a615f) main_camera_pane_g7

0x0007,

0xf206,	// (0x000b432c) main_camera_pane_g

0x1049,	// (0x000a616f) main_camera_pane_t1

0x105f,	// (0x000a6185) main_camera_pane_t2

0x0001,

0xf217,	// (0x000b433d) main_camera_pane_t

0x1099,	// (0x000a61bf) cams_zoom_pane_cp_ParamLimits

0x1099,	// (0x000a61bf) cams_zoom_pane_cp

0x10c1,	// (0x000a61e7) image_cif_pane_ParamLimits

0x10c1,	// (0x000a61e7) image_cif_pane

0x10f7,	// (0x000a621d) image_subqcif_pane

0x10ff,	// (0x000a6225) main_video_pane_g1_ParamLimits

0x10ff,	// (0x000a6225) main_video_pane_g1

0x1123,	// (0x000a6249) main_video_pane_g2_ParamLimits

0x1123,	// (0x000a6249) main_video_pane_g2

0x1157,	// (0x000a627d) main_video_pane_g3_ParamLimits

0x1157,	// (0x000a627d) main_video_pane_g3

0x1185,	// (0x000a62ab) main_video_pane_g4_ParamLimits

0x1185,	// (0x000a62ab) main_video_pane_g4

0x11b3,	// (0x000a62d9) main_video_pane_g5_ParamLimits

0x11b3,	// (0x000a62d9) main_video_pane_g5

0x9727,	// (0x000ae84d) main_video_pane_g6_ParamLimits

0x9727,	// (0x000ae84d) main_video_pane_g6

0x0006,

0xf21c,	// (0x000b4342) main_video_pane_g_ParamLimits

0xf21c,	// (0x000b4342) main_video_pane_g

0x11dc,	// (0x000a6302) main_video_pane_t1_ParamLimits

0x11dc,	// (0x000a6302) main_video_pane_t1

0x9741,	// (0x000ae867) cams_zoom_pane_g1

0x974a,	// (0x000ae870) cams_zoom_pane_g2

0x9753,	// (0x000ae879) cams_zoom_pane_g3

0x975c,	// (0x000ae882) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x000b4351) cams_zoom_pane_g

0x1239,	// (0x000a635f) grid_cams_pane

0x1253,	// (0x000a6379) linegrid_cams_pane

0x1267,	// (0x000a638d) cell_cams_pane_ParamLimits

0x1267,	// (0x000a638d) cell_cams_pane

0x9765,	// (0x000ae88b) cams_burst_image_pane

0x976d,	// (0x000ae893) cell_cams_pane_g1

0xea50,	// (0x000b3b76) grid_highlight_pane_cp03

0xedc5,	// (0x000b3eeb) mp_bg_pane_g1

0xea50,	// (0x000b3b76) bg_list_pane_cp03

0xbb95,	// (0x000b0cbb) bg_mp_pane

0xbb9d,	// (0x000b0cc3) grid_mp_pane

0xbba5,	// (0x000b0ccb) media_player_g1

0xbbad,	// (0x000b0cd3) media_player_t1

0xbbbb,	// (0x000b0ce1) media_player_t2

0xbbc9,	// (0x000b0cef) media_player_t3

0xbbd7,	// (0x000b0cfd) media_player_t4

0xbbe5,	// (0x000b0d0b) media_player_t5

0xbbf3,	// (0x000b0d19) media_player_t6

0xbc01,	// (0x000b0d27) media_player_t7

0x0006,

0xf5c7,	// (0x000b46ed) media_player_t

0xbc0f,	// (0x000b0d35) wait_bar_pane_cp02

0xf5ac,	// (0x000b46d2) main_usb_pane_t

0x340b,	// (0x000a8531) cell_mp_pane

0xedc5,	// (0x000b3eeb) cell_mp_pane_g1

0xea50,	// (0x000b3b76) grid_highlight_pane_cp06

0x9775,	// (0x000ae89b) grid_skin_colour_pane

0x977d,	// (0x000ae8a3) list_highlight_pane_cp03

0x1380,	// (0x000a64a6) skin_g1

0x9785,	// (0x000ae8ab) skin_t1

0x9794,	// (0x000ae8ba) skin_t2

0x0001,

0xf260,	// (0x000b4386) skin_t

0x1388,	// (0x000a64ae) cell_skin_colour_pane_ParamLimits

0x1388,	// (0x000a64ae) cell_skin_colour_pane

0x97a2,	// (0x000ae8c8) cell_skin_colour_pane_g1

0x1401,	// (0x000a6527) call_video_g1_ParamLimits

0x1401,	// (0x000a6527) call_video_g1

0x141d,	// (0x000a6543) call_video_g2_ParamLimits

0x141d,	// (0x000a6543) call_video_g2

0x0001,

0xf265,	// (0x000b438b) call_video_g_ParamLimits

0xf265,	// (0x000b438b) call_video_g

0x146f,	// (0x000a6595) call_video_uplink_pane_cp1_ParamLimits

0x146f,	// (0x000a6595) call_video_uplink_pane_cp1

0x97b4,	// (0x000ae8da) call_video_uplink_pane_cp2

0x150e,	// (0x000a6634) video_down_crop_pane_ParamLimits

0x150e,	// (0x000a6634) video_down_crop_pane

0x1605,	// (0x000a672b) video_down_pane_ParamLimits

0x1605,	// (0x000a672b) video_down_pane

0x97bc,	// (0x000ae8e2) video_down_subqcif_pane_ParamLimits

0x97bc,	// (0x000ae8e2) video_down_subqcif_pane

0x97d4,	// (0x000ae8fa) video_down_subqcif_pane_cp_ParamLimits

0x97d4,	// (0x000ae8fa) video_down_subqcif_pane_cp

0x97fa,	// (0x000ae920) im_reading_pane_ParamLimits

0x97fa,	// (0x000ae920) im_reading_pane

0x1715,	// (0x000a683b) im_writing_pane_ParamLimits

0x1715,	// (0x000a683b) im_writing_pane

0x172b,	// (0x000a6851) im_reading_pane_t1

0x9814,	// (0x000ae93a) list_im_pane

0x9825,	// (0x000ae94b) scroll_pane_cp07

0x1764,	// (0x000a688a) im_writing_pane_t1_ParamLimits

0x1764,	// (0x000a688a) im_writing_pane_t1

0x983e,	// (0x000ae964) im_writing_pane_t2_ParamLimits

0x983e,	// (0x000ae964) im_writing_pane_t2

0x0001,

0xf26f,	// (0x000b4395) im_writing_pane_t_ParamLimits

0xf26f,	// (0x000b4395) im_writing_pane_t

0xea50,	// (0x000b3b76) input_focus_pane_cp04

0xea50,	// (0x000b3b76) input_focus_pane_cp05

0x1779,	// (0x000a689f) list_im_single_pane_ParamLimits

0x1779,	// (0x000a689f) list_im_single_pane

0x178d,	// (0x000a68b3) list_single_im_pane_t1

0x33cb,	// (0x000a84f1) blid_accuracy_pane

0x33d3,	// (0x000a84f9) blid_compass_pane

0x33dd,	// (0x000a8503) main_location_t1

0x33ed,	// (0x000a8513) main_location_t2

0x33fd,	// (0x000a8523) main_location_t3

0x0002,

0xf5d6,	// (0x000b46fc) main_location_t

0xea50,	// (0x000b3b76) aid_levels_location

0xedc5,	// (0x000b3eeb) blid_accuracy_pane_g1

0xedc5,	// (0x000b3eeb) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x000b43f7) blid_accuracy_pane_g

0x9886,	// (0x000ae9ac) wml_content_pane

0x98c4,	// (0x000ae9ea) wml_button_pane_ParamLimits

0x98c4,	// (0x000ae9ea) wml_button_pane

0x179c,	// (0x000a68c2) wml_list_single_large_pane_ParamLimits

0x179c,	// (0x000a68c2) wml_list_single_large_pane

0x17b1,	// (0x000a68d7) wml_list_single_medium_pane_ParamLimits

0x17b1,	// (0x000a68d7) wml_list_single_medium_pane

0x17c7,	// (0x000a68ed) wml_list_single_small_pane_ParamLimits

0x17c7,	// (0x000a68ed) wml_list_single_small_pane

0x98d8,	// (0x000ae9fe) wml_selection_box_pane_ParamLimits

0x98d8,	// (0x000ae9fe) wml_selection_box_pane

0x98eb,	// (0x000aea11) wml_list_single_pane_t1

0x98fa,	// (0x000aea20) wml_list_single_medium_pane_t1

0x9909,	// (0x000aea2f) wml_list_single_large_pane_t1

0x9918,	// (0x000aea3e) input_focus_pane_cp02_ParamLimits

0x9918,	// (0x000aea3e) input_focus_pane_cp02

0x992b,	// (0x000aea51) wml_selection_box_pane_g1

0x9934,	// (0x000aea5a) wml_selection_box_pane_t1_ParamLimits

0x9934,	// (0x000aea5a) wml_selection_box_pane_t1

0xecab,	// (0x000b3dd1) bg_wml_button_pane_ParamLimits

0xecab,	// (0x000b3dd1) bg_wml_button_pane

0x994c,	// (0x000aea72) wml_button_pane_g1

0x9954,	// (0x000aea7a) wml_button_pane_t1

0x994c,	// (0x000aea72) wml_button_bg_pane_g1

0x9964,	// (0x000aea8a) wml_button_bg_pane_g2

0x996c,	// (0x000aea92) wml_button_bg_pane_g3

0x9974,	// (0x000aea9a) wml_button_bg_pane_g4

0x997c,	// (0x000aeaa2) wml_button_bg_pane_g5

0x9984,	// (0x000aeaaa) wml_button_bg_pane_g6

0x998c,	// (0x000aeab2) wml_button_bg_pane_g7

0x9994,	// (0x000aeaba) wml_button_bg_pane_g8

0x999c,	// (0x000aeac2) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x000b439a) wml_button_bg_pane_g

0x17df,	// (0x000a6905) bg_list_pane_cp02

0x99a4,	// (0x000aeaca) mce_header_pane_ParamLimits

0x99a4,	// (0x000aeaca) mce_header_pane

0x99ba,	// (0x000aeae0) mce_icon_pane

0x99ba,	// (0x000aeae0) mce_image_pane

0x99c3,	// (0x000aeae9) mce_text_pane_ParamLimits

0x99c3,	// (0x000aeae9) mce_text_pane

0x17e7,	// (0x000a690d) scroll_pane_cp03

0x98bc,	// (0x000ae9e2) scroll_pane_cp04

0x99d6,	// (0x000aeafc) scroll_pane_cp05_ParamLimits

0x99d6,	// (0x000aeafc) scroll_pane_cp05

0x17f1,	// (0x000a6917) mce_header_field_pane_ParamLimits

0x17f1,	// (0x000a6917) mce_header_field_pane

0x1808,	// (0x000a692e) mce_header_field_pane_2_ParamLimits

0x1808,	// (0x000a692e) mce_header_field_pane_2

0x181e,	// (0x000a6944) mce_header_field_pane_3

0x1826,	// (0x000a694c) list_single_mce_message_pane_ParamLimits

0x1826,	// (0x000a694c) list_single_mce_message_pane

0x183b,	// (0x000a6961) list_single_mce_smart_pane_ParamLimits

0x183b,	// (0x000a6961) list_single_mce_smart_pane

0x99e2,	// (0x000aeb08) input_focus_pane_cp03

0x99eb,	// (0x000aeb11) list_header_data_pane

0x185b,	// (0x000a6981) mce_header_field_pane_t1

0x186b,	// (0x000a6991) list_single_mce_header_pane_ParamLimits

0x186b,	// (0x000a6991) list_single_mce_header_pane

0x99f3,	// (0x000aeb19) list_single_mce_header_pane_t1

0x9a02,	// (0x000aeb28) list_single_mce_message_pane_g1

0x9a0a,	// (0x000aeb30) list_single_mce_message_pane_t1

0x18a5,	// (0x000a69cb) bg_cale_heading_pane_cp01_ParamLimits

0x18a5,	// (0x000a69cb) bg_cale_heading_pane_cp01

0x9a18,	// (0x000aeb3e) bg_cale_pane_cp02_ParamLimits

0x9a18,	// (0x000aeb3e) bg_cale_pane_cp02

0x18df,	// (0x000a6a05) cale_month_corner_pane

0x18fe,	// (0x000a6a24) cale_month_day_heading_pane_ParamLimits

0x18fe,	// (0x000a6a24) cale_month_day_heading_pane

0x1950,	// (0x000a6a76) cale_month_pane_g1_ParamLimits

0x1950,	// (0x000a6a76) cale_month_pane_g1

0x197f,	// (0x000a6aa5) cale_month_pane_g2_ParamLimits

0x197f,	// (0x000a6aa5) cale_month_pane_g2

0x19af,	// (0x000a6ad5) cale_month_pane_g3_ParamLimits

0x19af,	// (0x000a6ad5) cale_month_pane_g3

0x19eb,	// (0x000a6b11) cale_month_pane_g4_ParamLimits

0x19eb,	// (0x000a6b11) cale_month_pane_g4

0x1a27,	// (0x000a6b4d) cale_month_pane_g5_ParamLimits

0x1a27,	// (0x000a6b4d) cale_month_pane_g5

0x1a6f,	// (0x000a6b95) cale_month_pane_g6_ParamLimits

0x1a6f,	// (0x000a6b95) cale_month_pane_g6

0x1abb,	// (0x000a6be1) cale_month_pane_g7_ParamLimits

0x1abb,	// (0x000a6be1) cale_month_pane_g7

0x1b0f,	// (0x000a6c35) cale_month_pane_g8_ParamLimits

0x1b0f,	// (0x000a6c35) cale_month_pane_g8

0x1b63,	// (0x000a6c89) cale_month_pane_g9_ParamLimits

0x1b63,	// (0x000a6c89) cale_month_pane_g9

0x1bb5,	// (0x000a6cdb) cale_month_pane_g10_ParamLimits

0x1bb5,	// (0x000a6cdb) cale_month_pane_g10

0x1c07,	// (0x000a6d2d) cale_month_pane_g11_ParamLimits

0x1c07,	// (0x000a6d2d) cale_month_pane_g11

0x1c59,	// (0x000a6d7f) cale_month_pane_g12_ParamLimits

0x1c59,	// (0x000a6d7f) cale_month_pane_g12

0x1cab,	// (0x000a6dd1) cale_month_pane_g13_ParamLimits

0x1cab,	// (0x000a6dd1) cale_month_pane_g13

0x000c,

0xf287,	// (0x000b43ad) cale_month_pane_g_ParamLimits

0xf287,	// (0x000b43ad) cale_month_pane_g

0x1cfd,	// (0x000a6e23) cale_month_week_pane

0x1d21,	// (0x000a6e47) grid_cale_month_pane_ParamLimits

0x1d21,	// (0x000a6e47) grid_cale_month_pane

0x1d6a,	// (0x000a6e90) cale_month_day_heading_pane_t1

0x1df0,	// (0x000a6f16) cale_month_day_heading_pane_t2

0x1e69,	// (0x000a6f8f) cale_month_day_heading_pane_t3

0x1ee2,	// (0x000a7008) cale_month_day_heading_pane_t4

0x1f63,	// (0x000a7089) cale_month_day_heading_pane_t5

0x1fec,	// (0x000a7112) cale_month_day_heading_pane_t6

0x2075,	// (0x000a719b) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x000b43c8) cale_month_day_heading_pane_t

0x96ae,	// (0x000ae7d4) bg_cale_side_pane_cp01

0x2106,	// (0x000a722c) cale_month_week_pane_t1

0x211f,	// (0x000a7245) cale_month_week_pane_t2

0x2138,	// (0x000a725e) cale_month_week_pane_t3

0x2151,	// (0x000a7277) cale_month_week_pane_t4

0x216a,	// (0x000a7290) cale_month_week_pane_t5

0x2183,	// (0x000a72a9) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x000b43d7) cale_month_week_pane_t

0x219c,	// (0x000a72c2) cell_cale_month_pane_ParamLimits

0x219c,	// (0x000a72c2) cell_cale_month_pane

0x9a57,	// (0x000aeb7d) cell_cale_month_pane_g1

0x22f4,	// (0x000a741a) cell_cale_month_pane_t1_ParamLimits

0x22f4,	// (0x000a741a) cell_cale_month_pane_t1

0x96bc,	// (0x000ae7e2) grid_highlight_pane_cp08

0xedc5,	// (0x000b3eeb) main_smil_g1

0x2320,	// (0x000a7446) smil_status_pane

0x9a63,	// (0x000aeb89) smil_text_pane

0xbab5,	// (0x000b0bdb) bg_popup_call3_rect_pane_g8

0xbabd,	// (0x000b0be3) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x000b4690) bg_popup_call3_rect_pane_g

0xbd04,	// (0x000b0e2a) smil_status_volume_pane_g1

0x9a6d,	// (0x000aeb93) smil_status_pane_t1

0x9cfe,	// (0x000aee24) volume_smil_pane

0x9a84,	// (0x000aebaa) list_smil_text_pane

0x2333,	// (0x000a7459) scroll_pane_cp011

0x233e,	// (0x000a7464) smil_text_list_pane_t1_ParamLimits

0x233e,	// (0x000a7464) smil_text_list_pane_t1

0x9a8e,	// (0x000aebb4) aid_volume_smil_ParamLimits

0x9a8e,	// (0x000aebb4) aid_volume_smil

0xedc5,	// (0x000b3eeb) smil_volume_pane_g1

0xedc5,	// (0x000b3eeb) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x000b43f7) smil_volume_pane_g

0x09df,	// (0x000a5b05) listscroll_cale_day_pane

0x9ab0,	// (0x000aebd6) bg_cale_pane

0x9ac8,	// (0x000aebee) list_cale_pane

0x9aeb,	// (0x000aec11) scroll_pane_cp09

0x9afc,	// (0x000aec22) cale_bg_pane_g1

0x9b04,	// (0x000aec2a) cale_bg_pane_g2

0x9b0c,	// (0x000aec32) cale_bg_pane_g3

0x9b14,	// (0x000aec3a) cale_bg_pane_g4

0x9b1c,	// (0x000aec42) cale_bg_pane_g5

0x9b24,	// (0x000aec4a) cale_bg_pane_g6

0x9b2c,	// (0x000aec52) cale_bg_pane_g7

0x9b34,	// (0x000aec5a) cale_bg_pane_g8

0x9b3c,	// (0x000aec62) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x000b43fc) cale_bg_pane_g

0x2382,	// (0x000a74a8) list_cale_time_pane_ParamLimits

0x2382,	// (0x000a74a8) list_cale_time_pane

0x9b44,	// (0x000aec6a) list_cale_time_pane_g1_ParamLimits

0x9b44,	// (0x000aec6a) list_cale_time_pane_g1

0x9b50,	// (0x000aec76) list_cale_time_pane_g2_ParamLimits

0x9b50,	// (0x000aec76) list_cale_time_pane_g2

0x2397,	// (0x000a74bd) list_cale_time_pane_g3_ParamLimits

0x2397,	// (0x000a74bd) list_cale_time_pane_g3

0x23a5,	// (0x000a74cb) list_cale_time_pane_g4_ParamLimits

0x23a5,	// (0x000a74cb) list_cale_time_pane_g4

0x23b3,	// (0x000a74d9) list_cale_time_pane_g5_ParamLimits

0x23b3,	// (0x000a74d9) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x000b440f) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x000b440f) list_cale_time_pane_g

0x9b6a,	// (0x000aec90) list_cale_time_pane_t1_ParamLimits

0x9b6a,	// (0x000aec90) list_cale_time_pane_t1

0x9b92,	// (0x000aecb8) list_cale_time_pane_t2_ParamLimits

0x9b92,	// (0x000aecb8) list_cale_time_pane_t2

0x2714,	// (0x000a783a) aid_blid_cardinal_pane

0x2752,	// (0x000a7878) compass_pane_t4

0x9bba,	// (0x000aece0) list_cale_time_pane_t4_ParamLimits

0x9bba,	// (0x000aece0) list_cale_time_pane_t4

0x2760,	// (0x000a7886) compass_pane_t5

0x276e,	// (0x000a7894) compass_pane_t6

0x277c,	// (0x000a78a2) compass_pane_t7

0xa734,	// (0x000af85a) navi_pane_cc_t1

0xa911,	// (0x000afa37) aid_phob_thumbnail_center_pane

0x2de3,	// (0x000a7f09) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x000b441c) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x000b441c) list_cale_time_pane_t

0xe6a7,	// (0x000b37cd) bg_popup_window_pane_cp02_ParamLimits

0xe6a7,	// (0x000b37cd) bg_popup_window_pane_cp02

0xa2b9,	// (0x000af3df) heading_pane_cp01_ParamLimits

0xa2b9,	// (0x000af3df) heading_pane_cp01

0xa2c5,	// (0x000af3eb) loc_req_pane_ParamLimits

0xa2c5,	// (0x000af3eb) loc_req_pane

0xa2d5,	// (0x000af3fb) loc_type_pane_ParamLimits

0xa2d5,	// (0x000af3fb) loc_type_pane

0xa2e7,	// (0x000af40d) loc_type_pane_t1_ParamLimits

0xa2e7,	// (0x000af40d) loc_type_pane_t1

0xa2f9,	// (0x000af41f) loc_type_pane_t2_ParamLimits

0xa2f9,	// (0x000af41f) loc_type_pane_t2

0xa30b,	// (0x000af431) loc_type_pane_t3_ParamLimits

0xa30b,	// (0x000af431) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x000b4423) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x000b4423) loc_type_pane_t

0xa31d,	// (0x000af443) list_loc_req_pane

0xa327,	// (0x000af44d) scroll_pane_cp012

0x23c1,	// (0x000a74e7) list_single_loc_request_popup_menu_pane_ParamLimits

0x23c1,	// (0x000a74e7) list_single_loc_request_popup_menu_pane

0xa332,	// (0x000af458) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa332,	// (0x000af458) list_single_loc_request_popup_menu_pane_g1

0xa33e,	// (0x000af464) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa33e,	// (0x000af464) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x000b442a) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x000b442a) list_single_loc_request_popup_menu_pane_g

0xa34a,	// (0x000af470) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa34a,	// (0x000af470) list_single_loc_request_popup_menu_pane_t1

0xecab,	// (0x000b3dd1) bg_popup_window_pane_cp03_ParamLimits

0xecab,	// (0x000b3dd1) bg_popup_window_pane_cp03

0xb08c,	// (0x000b01b2) heading_loc_req_pane_ParamLimits

0xb08c,	// (0x000b01b2) heading_loc_req_pane

0x23ce,	// (0x000a74f4) popup_dyc_status_message_window_g1_ParamLimits

0x23ce,	// (0x000a74f4) popup_dyc_status_message_window_g1

0x23e2,	// (0x000a7508) popup_dyc_status_message_window_t1_ParamLimits

0x23e2,	// (0x000a7508) popup_dyc_status_message_window_t1

0x23f7,	// (0x000a751d) popup_dyc_status_message_window_t2_ParamLimits

0x23f7,	// (0x000a751d) popup_dyc_status_message_window_t2

0x240c,	// (0x000a7532) popup_dyc_status_message_window_t3_ParamLimits

0x240c,	// (0x000a7532) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x000b442f) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x000b442f) popup_dyc_status_message_window_t

0xea50,	// (0x000b3b76) bg_heading_pane_cp01

0xa360,	// (0x000af486) heading_loc_req_pane_g1

0xa368,	// (0x000af48e) heading_loc_req_pane_g2

0xa370,	// (0x000af496) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x000b4436) heading_loc_req_pane_g

0xa378,	// (0x000af49e) heading_loc_req_pane_t1

0xa387,	// (0x000af4ad) bg_popup_sub_pane_cp01_ParamLimits

0xa387,	// (0x000af4ad) bg_popup_sub_pane_cp01

0xa395,	// (0x000af4bb) popup_cale_events_window_g1_ParamLimits

0xa395,	// (0x000af4bb) popup_cale_events_window_g1

0xa3b5,	// (0x000af4db) popup_cale_events_window_g2_ParamLimits

0xa3b5,	// (0x000af4db) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x000b446a) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x000b446a) popup_cale_events_window_g

0xa3d5,	// (0x000af4fb) popup_cale_events_window_t1_ParamLimits

0xa3d5,	// (0x000af4fb) popup_cale_events_window_t1

0xa3e7,	// (0x000af50d) popup_cale_events_window_t2_ParamLimits

0xa3e7,	// (0x000af50d) popup_cale_events_window_t2

0xa425,	// (0x000af54b) popup_cale_events_window_t3_ParamLimits

0xa425,	// (0x000af54b) popup_cale_events_window_t3

0xa45f,	// (0x000af585) popup_cale_events_window_t4_ParamLimits

0xa45f,	// (0x000af585) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x000b446f) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x000b446f) popup_cale_events_window_t

0x250f,	// (0x000a7635) call_type_pane

0x251f,	// (0x000a7645) popup_call_status_window_g1

0x2533,	// (0x000a7659) popup_call_status_window_g2

0x2547,	// (0x000a766d) popup_call_status_window_g3

0x0002,

0xf352,	// (0x000b4478) popup_call_status_window_g

0xa495,	// (0x000af5bb) call_type_pane_g1

0xa49e,	// (0x000af5c4) call_type_pane_g2

0x0001,

0xf359,	// (0x000b447f) call_type_pane_g

0xea50,	// (0x000b3b76) bg_popup_sub_pane_cp02

0xa4a7,	// (0x000af5cd) listscroll_popup_wml_pane

0xa4af,	// (0x000af5d5) list_wml_pane

0xa4b9,	// (0x000af5df) scroll_pane_cp013

0xa4c4,	// (0x000af5ea) list_single_graphic_popup_wml_pane_ParamLimits

0xa4c4,	// (0x000af5ea) list_single_graphic_popup_wml_pane

0xedc5,	// (0x000b3eeb) list_single_graphic_popup_wml_pane_g1

0xa4d8,	// (0x000af5fe) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x000b4484) list_single_graphic_popup_wml_pane_g

0xa4e0,	// (0x000af606) list_single_graphic_popup_wml_pane_t1

0xa4f6,	// (0x000af61c) aid_call_pane

0xeca3,	// (0x000b3dc9) popup_clock_analogue_window_g1

0xeca3,	// (0x000b3dc9) popup_clock_analogue_window_g2

0x9be2,	// (0x000aed08) popup_clock_analogue_window_g3

0x9be2,	// (0x000aed08) popup_clock_analogue_window_g4

0xedc5,	// (0x000b3eeb) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x000b4489) popup_clock_analogue_window_g

0x9bea,	// (0x000aed10) popup_clock_analogue_window_t1

0x9bf8,	// (0x000aed1e) clock_digital_number_pane_ParamLimits

0x9bf8,	// (0x000aed1e) clock_digital_number_pane

0x9c04,	// (0x000aed2a) clock_digital_number_pane_cp02_ParamLimits

0x9c04,	// (0x000aed2a) clock_digital_number_pane_cp02

0x9c10,	// (0x000aed36) clock_digital_number_pane_cp03_ParamLimits

0x9c10,	// (0x000aed36) clock_digital_number_pane_cp03

0x9c1c,	// (0x000aed42) clock_digital_number_pane_cp04_ParamLimits

0x9c1c,	// (0x000aed42) clock_digital_number_pane_cp04

0x9c2c,	// (0x000aed52) clock_digital_separator_pane_ParamLimits

0x9c2c,	// (0x000aed52) clock_digital_separator_pane

0x9c38,	// (0x000aed5e) popup_clock_digital_window_t1

0xedc5,	// (0x000b3eeb) clock_digital_number_pane_g1

0xedc5,	// (0x000b3eeb) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x000b43f7) clock_digital_number_pane_g

0xedc5,	// (0x000b3eeb) clock_digital_separator_pane_g1

0xedc5,	// (0x000b3eeb) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x000b43f7) clock_digital_separator_pane_g

0xea50,	// (0x000b3b76) bg_popup_window_pane_cp04

0xa4fe,	// (0x000af624) heading_pane_cp03

0xa506,	// (0x000af62c) listscroll_popup_gms_pane

0xa50e,	// (0x000af634) grid_large_graphic_popup_pane

0xa518,	// (0x000af63e) listscroll_popup_gms_pane_g1

0xa520,	// (0x000af646) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x000b4494) listscroll_popup_gms_pane_g

0x98bc,	// (0x000ae9e2) scroll_pane_cp014

0x2556,	// (0x000a767c) cell_large_graphic_popup_pane_ParamLimits

0x2556,	// (0x000a767c) cell_large_graphic_popup_pane

0x256e,	// (0x000a7694) cell_large_graphic_popup_pane_g1_ParamLimits

0x256e,	// (0x000a7694) cell_large_graphic_popup_pane_g1

0xa528,	// (0x000af64e) cell_large_graphic_popup_pane_g2_ParamLimits

0xa528,	// (0x000af64e) cell_large_graphic_popup_pane_g2

0xa534,	// (0x000af65a) cell_large_graphic_popup_pane_g3_ParamLimits

0xa534,	// (0x000af65a) cell_large_graphic_popup_pane_g3

0xa541,	// (0x000af667) cell_large_graphic_popup_pane_g4_ParamLimits

0xa541,	// (0x000af667) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x000b4499) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x000b4499) cell_large_graphic_popup_pane_g

0xa551,	// (0x000af677) grid_highlight_pane_cp010

0xedc5,	// (0x000b3eeb) bg_popup_call_pane_g1

0xa55b,	// (0x000af681) list_single_graphic_popup_conf_pane_ParamLimits

0xa55b,	// (0x000af681) list_single_graphic_popup_conf_pane

0xa56e,	// (0x000af694) list_highlight_pane_cp01

0xa577,	// (0x000af69d) list_single_graphic_popup_conf_pane_g1

0xa57f,	// (0x000af6a5) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x000b44a2) list_single_graphic_popup_conf_pane_g

0xa587,	// (0x000af6ad) list_single_graphic_popup_conf_pane_t1

0xa595,	// (0x000af6bb) linegrid_cams_pane_g1

0x257a,	// (0x000a76a0) linegrid_cams_pane_g2

0x96ef,	// (0x000ae815) linegrid_cams_pane_g3

0xa59e,	// (0x000af6c4) linegrid_cams_pane_g4

0x2583,	// (0x000a76a9) linegrid_cams_pane_g5

0x258c,	// (0x000a76b2) linegrid_cams_pane_g6

0x96f8,	// (0x000ae81e) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x000b44a7) linegrid_cams_pane_g

0xa5a7,	// (0x000af6cd) popup_clock_analogue_window

0xa5a7,	// (0x000af6cd) popup_clock_digital_window

0xea50,	// (0x000b3b76) popup_phob_thumbnail_window

0xedc5,	// (0x000b3eeb) call_video_uplink_pane_g1

0xa5b0,	// (0x000af6d6) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x000b44b6) call_video_uplink_pane_g

0xa5b8,	// (0x000af6de) video_uplink_pane

0xa5c0,	// (0x000af6e6) mce_image_pane_g1

0x2597,	// (0x000a76bd) mce_image_pane_g2

0x25a1,	// (0x000a76c7) mce_image_pane_g3

0x25a9,	// (0x000a76cf) mce_image_pane_g4

0x25b1,	// (0x000a76d7) mce_image_pane_g5

0x0004,

0xf395,	// (0x000b44bb) mce_image_pane_g

0xa5ca,	// (0x000af6f0) control_top_pane_stacon_cp01_ParamLimits

0xa5ca,	// (0x000af6f0) control_top_pane_stacon_cp01

0xa5de,	// (0x000af704) uni_indicator_pane_stacon_cp01_ParamLimits

0xa5de,	// (0x000af704) uni_indicator_pane_stacon_cp01

0xa5ef,	// (0x000af715) bg_popup_sub_pane_cp03

0xa5f9,	// (0x000af71f) chi_dic_find_pane

0x25b9,	// (0x000a76df) listscroll_chi_dic_pane

0xa601,	// (0x000af727) main_pane_chidic_g1

0xa609,	// (0x000af72f) chi_dic_find_pane_t1

0xa617,	// (0x000af73d) find_chidic_pane

0xa620,	// (0x000af746) chi_dic_list_pane_ParamLimits

0xa620,	// (0x000af746) chi_dic_list_pane

0xa631,	// (0x000af757) scroll_pane_cp020

0xa639,	// (0x000af75f) find_chidic_pane_t1

0xea50,	// (0x000b3b76) input_focus_pane_cp06

0x25cd,	// (0x000a76f3) list_chi_dic_pane_ParamLimits

0x25cd,	// (0x000a76f3) list_chi_dic_pane

0x25df,	// (0x000a7705) list_chi_dic_pane_t1_ParamLimits

0x25df,	// (0x000a7705) list_chi_dic_pane_t1

0xea50,	// (0x000b3b76) list_highlight_pane_cp020

0xa648,	// (0x000af76e) bg_cale_heading_pane_g1

0x25f2,	// (0x000a7718) bg_cale_heading_pane_g2

0x25fa,	// (0x000a7720) bg_cale_heading_pane_g3

0x2602,	// (0x000a7728) bg_cale_heading_pane_g4

0x260c,	// (0x000a7732) bg_cale_heading_pane_g5

0x2616,	// (0x000a773c) bg_cale_heading_pane_g6

0x261e,	// (0x000a7744) bg_cale_heading_pane_g7

0x2626,	// (0x000a774c) bg_cale_heading_pane_g8

0x2630,	// (0x000a7756) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x000b44c6) bg_cale_heading_pane_g

0xa648,	// (0x000af76e) bg_cale_side_pane_g1

0x263a,	// (0x000a7760) bg_cale_side_pane_g2

0x2642,	// (0x000a7768) bg_cale_side_pane_g3

0x264a,	// (0x000a7770) bg_cale_side_pane_g4

0x2652,	// (0x000a7778) bg_cale_side_pane_g5

0x265a,	// (0x000a7780) bg_cale_side_pane_g6

0x2662,	// (0x000a7788) bg_cale_side_pane_g7

0x266a,	// (0x000a7790) bg_cale_side_pane_g8

0x2672,	// (0x000a7798) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x000b44d9) bg_cale_side_pane_g

0x267a,	// (0x000a77a0) popup_call_status_window_ParamLimits

0x267a,	// (0x000a77a0) popup_call_status_window

0xa650,	// (0x000af776) stacon_top_pane

0xa658,	// (0x000af77e) status_pane_ParamLimits

0xa658,	// (0x000af77e) status_pane

0xa66d,	// (0x000af793) status_small_pane

0xa675,	// (0x000af79b) control_pane

0xea50,	// (0x000b3b76) stacon_bottom_pane

0xa67d,	// (0x000af7a3) list_single_mce_smart_pane_t1_ParamLimits

0xa67d,	// (0x000af7a3) list_single_mce_smart_pane_t1

0xa690,	// (0x000af7b6) list_single_mce_smart_pane_t2_ParamLimits

0xa690,	// (0x000af7b6) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x000b44ec) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x000b44ec) list_single_mce_smart_pane_t

0x26c3,	// (0x000a77e9) compass_pane

0x26cc,	// (0x000a77f2) main_location2_pane_t1

0x26de,	// (0x000a7804) main_location2_pane_t2

0x26f0,	// (0x000a7816) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x000b44f1) main_location2_pane_t

0xa6af,	// (0x000af7d5) compass_pane_g1_ParamLimits

0xa6af,	// (0x000af7d5) compass_pane_g1

0x2734,	// (0x000a785a) compass_pane_t1

0x2743,	// (0x000a7869) compass_pane_t2

0x0005,

0xf3d4,	// (0x000b44fa) compass_pane_t

0x278a,	// (0x000a78b0) text_secondary_cp61

0xa72b,	// (0x000af851) navi_pane_cams_g5

0xa7a7,	// (0x000af8cd) navi_pane_im_t1

0xa7b5,	// (0x000af8db) navi_pane_mp_g1_ParamLimits

0xa7b5,	// (0x000af8db) navi_pane_mp_g1

0xa7c9,	// (0x000af8ef) navi_pane_mp_g2_ParamLimits

0xa7c9,	// (0x000af8ef) navi_pane_mp_g2

0xa7d5,	// (0x000af8fb) navi_pane_mp_g3_ParamLimits

0xa7d5,	// (0x000af8fb) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x000b450e) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x000b450e) navi_pane_mp_g

0xa7e1,	// (0x000af907) navi_pane_mp_t1

0xa7ef,	// (0x000af915) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x000b4515) navi_pane_mp_t

0xa85a,	// (0x000af980) navi_pane_vt_g1

0xa7e1,	// (0x000af907) navi_pane_vt_t1

0xa862,	// (0x000af988) navi_slider_pane

0x9709,	// (0x000ae82f) zooming_pane

0xa872,	// (0x000af998) navi_slider_pane_g1

0x9c55,	// (0x000aed7b) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x000b451c) navi_slider_pane_g

0xa896,	// (0x000af9bc) aid_levels_zoom

0xa89e,	// (0x000af9c4) zooming_pane_g1

0xa8a6,	// (0x000af9cc) zooming_pane_g2

0xa8a6,	// (0x000af9cc) zooming_pane_g3

0x0002,

0xf405,	// (0x000b452b) zooming_pane_g

0xa8ae,	// (0x000af9d4) level_10_zoom

0xa8b7,	// (0x000af9dd) level_11_zoom

0xa8c0,	// (0x000af9e6) level_1_zoom

0xa8c9,	// (0x000af9ef) level_2_zoom

0xa8d2,	// (0x000af9f8) level_3_zoom

0xa8db,	// (0x000afa01) level_4_zoom

0xa8e4,	// (0x000afa0a) level_5_zoom

0xa8ed,	// (0x000afa13) level_6_zoom

0xa8f6,	// (0x000afa1c) level_7_zoom

0xa8ff,	// (0x000afa25) level_8_zoom

0xa908,	// (0x000afa2e) level_9_zoom

0xa919,	// (0x000afa3f) popup_phob_thumbnail_window_g1

0xa921,	// (0x000afa47) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x000b4532) popup_phob_thumbnail_window_g

0xbc17,	// (0x000b0d3d) level_1_location

0xbc1f,	// (0x000b0d45) level_2_location

0xbc27,	// (0x000b0d4d) level_3_location

0xbc2f,	// (0x000b0d55) level_4_location

0x9709,	// (0x000ae82f) level_5_location

0x27db,	// (0x000a7901) mce_icon_pane_g1

0x27e5,	// (0x000a790b) mce_icon_pane_g2

0x0001,

0xf411,	// (0x000b4537) mce_icon_pane_g

0x27ed,	// (0x000a7913) main_mup_pane_g1_ParamLimits

0x27ed,	// (0x000a7913) main_mup_pane_g1

0x2803,	// (0x000a7929) main_mup_pane_g2_ParamLimits

0x2803,	// (0x000a7929) main_mup_pane_g2

0x281b,	// (0x000a7941) main_mup_pane_g3_ParamLimits

0x281b,	// (0x000a7941) main_mup_pane_g3

0x2833,	// (0x000a7959) main_mup_pane_g4_ParamLimits

0x2833,	// (0x000a7959) main_mup_pane_g4

0x284b,	// (0x000a7971) main_mup_pane_g5_ParamLimits

0x284b,	// (0x000a7971) main_mup_pane_g5

0x2867,	// (0x000a798d) main_mup_pane_g6_ParamLimits

0x2867,	// (0x000a798d) main_mup_pane_g6

0x287f,	// (0x000a79a5) main_mup_pane_g7_ParamLimits

0x287f,	// (0x000a79a5) main_mup_pane_g7

0x2897,	// (0x000a79bd) main_mup_pane_g8_ParamLimits

0x2897,	// (0x000a79bd) main_mup_pane_g8

0x28b1,	// (0x000a79d7) main_mup_pane_g9_ParamLimits

0x28b1,	// (0x000a79d7) main_mup_pane_g9

0x28cb,	// (0x000a79f1) main_mup_pane_g10_ParamLimits

0x28cb,	// (0x000a79f1) main_mup_pane_g10

0x28e5,	// (0x000a7a0b) main_mup_pane_g11_ParamLimits

0x28e5,	// (0x000a7a0b) main_mup_pane_g11

0x28f9,	// (0x000a7a1f) main_mup_pane_g12_ParamLimits

0x28f9,	// (0x000a7a1f) main_mup_pane_g12

0x290f,	// (0x000a7a35) main_mup_pane_g13_ParamLimits

0x290f,	// (0x000a7a35) main_mup_pane_g13

0x000c,

0xf416,	// (0x000b453c) main_mup_pane_g_ParamLimits

0xf416,	// (0x000b453c) main_mup_pane_g

0x2923,	// (0x000a7a49) main_mup_pane_t1_ParamLimits

0x2923,	// (0x000a7a49) main_mup_pane_t1

0x293d,	// (0x000a7a63) main_mup_pane_t2_ParamLimits

0x293d,	// (0x000a7a63) main_mup_pane_t2

0x2955,	// (0x000a7a7b) main_mup_pane_t3_ParamLimits

0x2955,	// (0x000a7a7b) main_mup_pane_t3

0x296d,	// (0x000a7a93) main_mup_pane_t4_ParamLimits

0x296d,	// (0x000a7a93) main_mup_pane_t4

0x298b,	// (0x000a7ab1) main_mup_pane_t5_ParamLimits

0x298b,	// (0x000a7ab1) main_mup_pane_t5

0x29a0,	// (0x000a7ac6) main_mup_pane_t6_ParamLimits

0x29a0,	// (0x000a7ac6) main_mup_pane_t6

0x0005,

0xf431,	// (0x000b4557) main_mup_pane_t_ParamLimits

0xf431,	// (0x000b4557) main_mup_pane_t

0x29b2,	// (0x000a7ad8) mup_progress_pane_ParamLimits

0x29b2,	// (0x000a7ad8) mup_progress_pane

0x29be,	// (0x000a7ae4) mup_visualizer_pane_ParamLimits

0x29be,	// (0x000a7ae4) mup_visualizer_pane

0x29ee,	// (0x000a7b14) mup_volume_pane_ParamLimits

0x29ee,	// (0x000a7b14) mup_volume_pane

0xa929,	// (0x000afa4f) mup_visualizer_pane_g1_ParamLimits

0xa929,	// (0x000afa4f) mup_visualizer_pane_g1

0xa929,	// (0x000afa4f) mup_visualizer_pane_g2_ParamLimits

0xa929,	// (0x000afa4f) mup_visualizer_pane_g2

0xa6af,	// (0x000af7d5) mup_visualizer_pane_g3_ParamLimits

0xa6af,	// (0x000af7d5) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x000b4564) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x000b4564) mup_visualizer_pane_g

0xedc5,	// (0x000b3eeb) mup_volume_pane_g1

0xa93f,	// (0x000afa65) mup_volume_pane_g2

0x0001,

0xf445,	// (0x000b456b) mup_volume_pane_g

0xedc5,	// (0x000b3eeb) mup_progress_pane_g1

0xa948,	// (0x000afa6e) mup_progress_pane_g2

0xa951,	// (0x000afa77) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x000b4570) mup_progress_pane_g

0xea50,	// (0x000b3b76) bg_popup_window_pane_cp05

0xa95a,	// (0x000afa80) heading_pane_cp02_ParamLimits

0xa95a,	// (0x000afa80) heading_pane_cp02

0xa974,	// (0x000afa9a) list_popup_blid_pane

0xa97c,	// (0x000afaa2) list_blid_sat_info_pane_ParamLimits

0xa97c,	// (0x000afaa2) list_blid_sat_info_pane

0xa98f,	// (0x000afab5) list_blid_sat_info_pane_g1

0xa997,	// (0x000afabd) list_blid_sat_info_pane_t1

0x2b04,	// (0x000a7c2a) mup_equalizer_pane_ParamLimits

0x2b04,	// (0x000a7c2a) mup_equalizer_pane

0x2b1d,	// (0x000a7c43) mup_equalizer_pane_cp1_ParamLimits

0x2b1d,	// (0x000a7c43) mup_equalizer_pane_cp1

0x2b3a,	// (0x000a7c60) mup_equalizer_pane_cp2_ParamLimits

0x2b3a,	// (0x000a7c60) mup_equalizer_pane_cp2

0x2b57,	// (0x000a7c7d) mup_equalizer_pane_cp3_ParamLimits

0x2b57,	// (0x000a7c7d) mup_equalizer_pane_cp3

0x2b78,	// (0x000a7c9e) mup_equalizer_pane_cp4_ParamLimits

0x2b78,	// (0x000a7c9e) mup_equalizer_pane_cp4

0x2b99,	// (0x000a7cbf) mup_equalizer_pane_cp5

0x2bad,	// (0x000a7cd3) mup_equalizer_pane_cp6

0x2bc1,	// (0x000a7ce7) mup_equalizer_pane_cp7

0xbb35,	// (0x000b0c5b) bg_popup_call_poc_act_pane_g9

0xbb3d,	// (0x000b0c63) bg_popup_call_poc_act_pane_g10

0xbb45,	// (0x000b0c6b) bg_popup_call_poc_act_pane_g11

0x000a,

0xecab,	// (0x000b3dd1) mup_scale_pane

0xedc5,	// (0x000b3eeb) mup_scale_pane_g1

0xa9a5,	// (0x000afacb) mup_scale_pane_g2

0x0006,

0xf466,	// (0x000b458c) mup_scale_pane_g

0xa9c9,	// (0x000afaef) msg_data_pane

0xa9d1,	// (0x000afaf7) scroll_pane_cp017

0x2be7,	// (0x000a7d0d) bg_list_pane_cp04_ParamLimits

0x2be7,	// (0x000a7d0d) bg_list_pane_cp04

0xa9d9,	// (0x000afaff) msg_data_pane_g1

0x2c07,	// (0x000a7d2d) msg_data_pane_g2

0x2c11,	// (0x000a7d37) msg_data_pane_g3

0x2c19,	// (0x000a7d3f) msg_data_pane_g4

0x2c21,	// (0x000a7d47) msg_data_pane_g5

0x2c29,	// (0x000a7d4f) msg_data_pane_g6

0x2c31,	// (0x000a7d57) msg_data_pane_g7

0x0006,

0xf475,	// (0x000b459b) msg_data_pane_g

0x2c39,	// (0x000a7d5f) msg_text_pane_ParamLimits

0x2c39,	// (0x000a7d5f) msg_text_pane

0x2c62,	// (0x000a7d88) qrid_highlight_pane_cp011_ParamLimits

0x2c62,	// (0x000a7d88) qrid_highlight_pane_cp011

0xea50,	// (0x000b3b76) msg_body_pane

0xea50,	// (0x000b3b76) msg_header_pane

0xa9ea,	// (0x000afb10) input_focus_pane_cp07

0x2c86,	// (0x000a7dac) msg_header_pane_t1_ParamLimits

0x2c86,	// (0x000a7dac) msg_header_pane_t1

0x2c98,	// (0x000a7dbe) msg_header_pane_t2_ParamLimits

0x2c98,	// (0x000a7dbe) msg_header_pane_t2

0x0001,

0xf489,	// (0x000b45af) msg_header_pane_t_ParamLimits

0xf489,	// (0x000b45af) msg_header_pane_t

0xa9ff,	// (0x000afb25) msg_body_pane_g1

0x2caa,	// (0x000a7dd0) msg_body_pane_t1_ParamLimits

0x2caa,	// (0x000a7dd0) msg_body_pane_t1

0x2cdb,	// (0x000a7e01) msg_body_pane_t2_ParamLimits

0x2cdb,	// (0x000a7e01) msg_body_pane_t2

0x2ced,	// (0x000a7e13) msg_body_pane_t3_ParamLimits

0x2ced,	// (0x000a7e13) msg_body_pane_t3

0x0002,

0xf48e,	// (0x000b45b4) msg_body_pane_t_ParamLimits

0xf48e,	// (0x000b45b4) msg_body_pane_t

0x2d39,	// (0x000a7e5f) main_viewer_pane_g1_ParamLimits

0x2d39,	// (0x000a7e5f) main_viewer_pane_g1

0x2d47,	// (0x000a7e6d) main_viewer_pane_g2_ParamLimits

0x2d47,	// (0x000a7e6d) main_viewer_pane_g2

0x2d55,	// (0x000a7e7b) main_viewer_pane_g3_ParamLimits

0x2d55,	// (0x000a7e7b) main_viewer_pane_g3

0x2d64,	// (0x000a7e8a) main_viewer_pane_g4_ParamLimits

0x2d64,	// (0x000a7e8a) main_viewer_pane_g4

0x9c7f,	// (0x000aeda5) main_viewer_pane_g5_ParamLimits

0x9c7f,	// (0x000aeda5) main_viewer_pane_g5

0x9c7f,	// (0x000aeda5) main_viewer_pane_g7_ParamLimits

0x9c7f,	// (0x000aeda5) main_viewer_pane_g7

0xa332,	// (0x000af458) main_viewer_pane_g8_ParamLimits

0xa332,	// (0x000af458) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x000b45c4) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x000b45c4) main_viewer_pane_g

0xaa07,	// (0x000afb2d) viewer_content_pane_ParamLimits

0xaa07,	// (0x000afb2d) viewer_content_pane

0x2da0,	// (0x000a7ec6) main_postcard_pane_g1_ParamLimits

0x2da0,	// (0x000a7ec6) main_postcard_pane_g1

0x2db6,	// (0x000a7edc) main_postcard_pane_g2_ParamLimits

0x2db6,	// (0x000a7edc) main_postcard_pane_g2

0x2dcc,	// (0x000a7ef2) main_postcard_pane_g3_ParamLimits

0x2dcc,	// (0x000a7ef2) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x000b45d5) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x000b45d5) main_postcard_pane_g

0x2de3,	// (0x000a7f09) main_postcard_pane_g4

0xbd17,	// (0x000b0e3d) smil_status_volume_pane_g2

0x2e26,	// (0x000a7f4c) postcard_pane_ParamLimits

0x2e26,	// (0x000a7f4c) postcard_pane

0xaa15,	// (0x000afb3b) postcard_pane_g1_ParamLimits

0xaa15,	// (0x000afb3b) postcard_pane_g1

0x2e68,	// (0x000a7f8e) postcard_pane_g2_ParamLimits

0x2e68,	// (0x000a7f8e) postcard_pane_g2

0x2e74,	// (0x000a7f9a) postcard_pane_g3_ParamLimits

0x2e74,	// (0x000a7f9a) postcard_pane_g3

0xaa23,	// (0x000afb49) postcard_pane_g4_ParamLimits

0xaa23,	// (0x000afb49) postcard_pane_g4

0x2e80,	// (0x000a7fa6) postcard_pane_g5_ParamLimits

0x2e80,	// (0x000a7fa6) postcard_pane_g5

0x2e95,	// (0x000a7fbb) postcard_pane_g6_ParamLimits

0x2e95,	// (0x000a7fbb) postcard_pane_g6

0xaa15,	// (0x000afb3b) postcard_pane_g7_ParamLimits

0xaa15,	// (0x000afb3b) postcard_pane_g7

0x0006,

0xf4bc,	// (0x000b45e2) postcard_pane_g_ParamLimits

0xf4bc,	// (0x000b45e2) postcard_pane_g

0x2ea9,	// (0x000a7fcf) main_mp2_pane_g1_ParamLimits

0x2ea9,	// (0x000a7fcf) main_mp2_pane_g1

0x2eb5,	// (0x000a7fdb) main_mp2_pane_g2_ParamLimits

0x2eb5,	// (0x000a7fdb) main_mp2_pane_g2

0x2ec1,	// (0x000a7fe7) main_mp2_pane_g3_ParamLimits

0x2ec1,	// (0x000a7fe7) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x000b45f1) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x000b45f1) main_mp2_pane_g

0x2ecd,	// (0x000a7ff3) main_mp2_pane_t1_ParamLimits

0x2ecd,	// (0x000a7ff3) main_mp2_pane_t1

0x2ee2,	// (0x000a8008) main_mp2_pane_t2_ParamLimits

0x2ee2,	// (0x000a8008) main_mp2_pane_t2

0x2ef4,	// (0x000a801a) main_mp2_pane_t3_ParamLimits

0x2ef4,	// (0x000a801a) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x000b45f8) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x000b45f8) main_mp2_pane_t

0xaa31,	// (0x000afb57) pec_content_pane_ParamLimits

0xaa31,	// (0x000afb57) pec_content_pane

0x98bc,	// (0x000ae9e2) scroll_pane_cp015

0xaa43,	// (0x000afb69) pec_attribute_pane_ParamLimits

0xaa43,	// (0x000afb69) pec_attribute_pane

0x2f06,	// (0x000a802c) pec_content_pane_g1_ParamLimits

0x2f06,	// (0x000a802c) pec_content_pane_g1

0xaa53,	// (0x000afb79) pec_content_pane_t1_ParamLimits

0xaa53,	// (0x000afb79) pec_content_pane_t1

0xaa65,	// (0x000afb8b) pec_content_pane_t2_ParamLimits

0xaa65,	// (0x000afb8b) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x000b45ff) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x000b45ff) pec_content_pane_t

0x2f12,	// (0x000a8038) list_single_graphic_pane_cp01_ParamLimits

0x2f12,	// (0x000a8038) list_single_graphic_pane_cp01

0xecab,	// (0x000b3dd1) bg_popup_sub_pane_cp04

0xaa77,	// (0x000afb9d) popup_mup_playback_window_g1

0xaa83,	// (0x000afba9) popup_mup_playback_window_t1

0xaa98,	// (0x000afbbe) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x000b4604) popup_mup_playback_window_t

0xaacf,	// (0x000afbf5) main_image_pane_g1_ParamLimits

0xaacf,	// (0x000afbf5) main_image_pane_g1

0xab12,	// (0x000afc38) scroll_pane_cp018_ParamLimits

0xab12,	// (0x000afc38) scroll_pane_cp018

0xab2a,	// (0x000afc50) scroll_pane_cp016_ParamLimits

0xab2a,	// (0x000afc50) scroll_pane_cp016

0x2fdf,	// (0x000a8105) smil2_image_pane_ParamLimits

0x2fdf,	// (0x000a8105) smil2_image_pane

0x300f,	// (0x000a8135) smil2_root_pane_ParamLimits

0x300f,	// (0x000a8135) smil2_root_pane

0x3047,	// (0x000a816d) smil2_text_pane_ParamLimits

0x3047,	// (0x000a816d) smil2_text_pane

0xea50,	// (0x000b3b76) bg_list_pane_cp06

0xab66,	// (0x000afc8c) grid_radio_pane

0xea50,	// (0x000b3b76) bg_popup_window_pane_cp06

0xab6e,	// (0x000afc94) main_fmradio_pane_t1

0xa4fe,	// (0x000af624) heading_pane_cp04

0xab7c,	// (0x000afca2) main_fmradio_pane_t2

0xbb4d,	// (0x000b0c73) popup_cale_lunar_info_window_g1

0xab8a,	// (0x000afcb0) main_fmradio_pane_t3

0xbb55,	// (0x000b0c7b) popup_cale_lunar_info_window_g2

0xab98,	// (0x000afcbe) main_fmradio_pane_t4

0x0001,

0xaba6,	// (0x000afccc) main_fmradio_pane_t5

0x0004,

0xf5b9,	// (0x000b46df) popup_cale_lunar_info_window_g

0xf4f3,	// (0x000b4619) main_fmradio_pane_t

0xabb4,	// (0x000afcda) wait_bar_pane_cp03

0xabbc,	// (0x000afce2) cell_fmradio_pane_ParamLimits

0xabbc,	// (0x000afce2) cell_fmradio_pane

0xaa15,	// (0x000afb3b) cell_fmradio_pane_g1_ParamLimits

0xaa15,	// (0x000afb3b) cell_fmradio_pane_g1

0xea50,	// (0x000b3b76) grid_highlight_pane_cp011

0xabcf,	// (0x000afcf5) poc_content_pane_ParamLimits

0xabcf,	// (0x000afcf5) poc_content_pane

0xabe1,	// (0x000afd07) scroll_pane_cp019

0x30c7,	// (0x000a81ed) popup_call_poc_act_window_ParamLimits

0x30c7,	// (0x000a81ed) popup_call_poc_act_window

0x30eb,	// (0x000a8211) popup_call_poc_inact_window_ParamLimits

0x30eb,	// (0x000a8211) popup_call_poc_inact_window

0xf590,	// (0x000b46b6) bg_popup_call_poc_act_pane_g

0xbac5,	// (0x000b0beb) bg_popup_call_poc_inact_pane_g1

0xbacd,	// (0x000b0bf3) bg_popup_call_poc_inact_pane_g2

0xabe9,	// (0x000afd0f) popup_call_poc_act_window_g2

0xbad5,	// (0x000b0bfb) bg_popup_call_poc_inact_pane_g3

0xbadd,	// (0x000b0c03) bg_popup_call_poc_inact_pane_g4

0xbae5,	// (0x000b0c0b) bg_popup_call_poc_inact_pane_g5

0xabf1,	// (0x000afd17) popup_call_poc_act_window_t1_ParamLimits

0xabf1,	// (0x000afd17) popup_call_poc_act_window_t1

0xac19,	// (0x000afd3f) popup_call_poc_act_window_t2_ParamLimits

0xac19,	// (0x000afd3f) popup_call_poc_act_window_t2

0xac41,	// (0x000afd67) popup_call_poc_act_window_t3_ParamLimits

0xac41,	// (0x000afd67) popup_call_poc_act_window_t3

0xac69,	// (0x000afd8f) popup_call_poc_act_window_t4_ParamLimits

0xac69,	// (0x000afd8f) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x000b4624) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x000b4624) popup_call_poc_act_window_t

0xbaed,	// (0x000b0c13) bg_popup_call_poc_inact_pane_g6

0xbaf5,	// (0x000b0c1b) bg_popup_call_poc_inact_pane_g7

0xbafd,	// (0x000b0c23) bg_popup_call_poc_inact_pane_g8

0xac7b,	// (0x000afda1) popup_call_poc_inact_window_g2

0xbb05,	// (0x000b0c2b) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf57d,	// (0x000b46a3) bg_popup_call_poc_inact_pane_g

0xac83,	// (0x000afda9) popup_call_poc_inact_window_t1_ParamLimits

0xac83,	// (0x000afda9) popup_call_poc_inact_window_t1

0xac98,	// (0x000afdbe) popup_call_poc_inact_window_t2_ParamLimits

0xac98,	// (0x000afdbe) popup_call_poc_inact_window_t2

0xacad,	// (0x000afdd3) popup_call_poc_inact_window_t3_ParamLimits

0xacad,	// (0x000afdd3) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x000b462d) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x000b462d) popup_call_poc_inact_window_t

0xbc8a,	// (0x000b0db0) context_pane_ParamLimits

0x392c,	// (0x000a8a52) signal_pane_ParamLimits

0x9709,	// (0x000ae82f) main_call2_pane

0x9cca,	// (0x000aedf0) popup_phob_thumbnail2_window_ParamLimits

0x9cca,	// (0x000aedf0) popup_phob_thumbnail2_window

0x9c67,	// (0x000aed8d) aid_hotspot_pointer_arrow_pane

0x9c6f,	// (0x000aed95) aid_hotspot_pointer_hand_pane

0x3434,	// (0x000a855a) phob_pre_status_pane_g5

0x0fac,	// (0x000a60d2) cams_zoom_pane_ParamLimits

0x0fbb,	// (0x000a60e1) image_vga_pane_ParamLimits

0x0fd5,	// (0x000a60fb) main_camera_pane_g1_ParamLimits

0x0fe7,	// (0x000a610d) main_camera_pane_g2_ParamLimits

0x0ff7,	// (0x000a611d) main_camera_pane_g3_ParamLimits

0x1007,	// (0x000a612d) main_camera_pane_g4_ParamLimits

0x1017,	// (0x000a613d) main_camera_pane_g5_ParamLimits

0x1027,	// (0x000a614d) main_camera_pane_g6_ParamLimits

0x1039,	// (0x000a615f) main_camera_pane_g7_ParamLimits

0xf206,	// (0x000b432c) main_camera_pane_g_ParamLimits

0x1049,	// (0x000a616f) main_camera_pane_t1_ParamLimits

0x105f,	// (0x000a6185) main_camera_pane_t2_ParamLimits

0xf217,	// (0x000b433d) main_camera_pane_t_ParamLimits

0xecab,	// (0x000b3dd1) bg_popup_preview_window_pane_cp01_ParamLimits

0xecab,	// (0x000b3dd1) bg_popup_preview_window_pane_cp01

0xacc2,	// (0x000afde8) popup_phob_thumbnail2_window_g1_ParamLimits

0xacc2,	// (0x000afde8) popup_phob_thumbnail2_window_g1

0xea50,	// (0x000b3b76) call2_cli_visual_pane

0x311f,	// (0x000a8245) popup_call2_audio_conf_window_ParamLimits

0x311f,	// (0x000a8245) popup_call2_audio_conf_window

0x313f,	// (0x000a8265) popup_call2_audio_first_window_ParamLimits

0x313f,	// (0x000a8265) popup_call2_audio_first_window

0x31d5,	// (0x000a82fb) popup_call2_audio_in_window_ParamLimits

0x31d5,	// (0x000a82fb) popup_call2_audio_in_window

0x321d,	// (0x000a8343) popup_call2_audio_out_window_ParamLimits

0x321d,	// (0x000a8343) popup_call2_audio_out_window

0x3287,	// (0x000a83ad) popup_call2_audio_second_window_ParamLimits

0x3287,	// (0x000a83ad) popup_call2_audio_second_window

0x32ed,	// (0x000a8413) popup_call2_audio_wait_window_ParamLimits

0x32ed,	// (0x000a8413) popup_call2_audio_wait_window

0xea50,	// (0x000b3b76) bg_popup_call2_act_pane_cp03

0xec8d,	// (0x000b3db3) list_conf_pane_cp

0xacce,	// (0x000afdf4) popup_call2_audio_conf_window_t1

0xa55b,	// (0x000af681) list_single_graphic_popup_conf2_pane_ParamLimits

0xa55b,	// (0x000af681) list_single_graphic_popup_conf2_pane

0xa56e,	// (0x000af694) list_highlight_pane_cp04

0xacdc,	// (0x000afe02) list_single_graphic_popup_conf2_pane_g1

0xa57f,	// (0x000af6a5) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x000b4634) list_single_graphic_popup_conf2_pane_g

0xace6,	// (0x000afe0c) list_single_graphic_popup_conf2_pane_t1

0xacf4,	// (0x000afe1a) bg_popup_call2_act_pane_cp01_ParamLimits

0xacf4,	// (0x000afe1a) bg_popup_call2_act_pane_cp01

0xad7e,	// (0x000afea4) call_type_pane_cp05_ParamLimits

0xad7e,	// (0x000afea4) call_type_pane_cp05

0xadd2,	// (0x000afef8) popup_call2_audio_second_window_g1_ParamLimits

0xadd2,	// (0x000afef8) popup_call2_audio_second_window_g1

0xae26,	// (0x000aff4c) popup_call2_audio_second_window_g2_ParamLimits

0xae26,	// (0x000aff4c) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x000b4639) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x000b4639) popup_call2_audio_second_window_g

0xae8b,	// (0x000affb1) popup_call2_audio_second_window_t1_ParamLimits

0xae8b,	// (0x000affb1) popup_call2_audio_second_window_t1

0xaf46,	// (0x000b006c) popup_call2_audio_second_window_t2_ParamLimits

0xaf46,	// (0x000b006c) popup_call2_audio_second_window_t2

0xaf99,	// (0x000b00bf) popup_call2_audio_second_window_t3_ParamLimits

0xaf99,	// (0x000b00bf) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x000b4640) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x000b4640) popup_call2_audio_second_window_t

0xea50,	// (0x000b3b76) bg_popup_call2_in_pane_cp02

0xea5a,	// (0x000b3b80) call_type_pane_cp04

0xea62,	// (0x000b3b88) popup_call2_audio_wait_window_g1

0xea6a,	// (0x000b3b90) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000b421b) popup_call2_audio_wait_window_g

0xea72,	// (0x000b3b98) popup_call2_audio_wait_window_t3

0xb098,	// (0x000b01be) bg_popup_call2_act_pane_ParamLimits

0xb098,	// (0x000b01be) bg_popup_call2_act_pane

0xb158,	// (0x000b027e) call_type_pane_cp03_ParamLimits

0xb158,	// (0x000b027e) call_type_pane_cp03

0xb1bc,	// (0x000b02e2) popup_call2_audio_first_window_g1_ParamLimits

0xb1bc,	// (0x000b02e2) popup_call2_audio_first_window_g1

0xb22c,	// (0x000b0352) popup_call2_audio_first_window_g2_ParamLimits

0xb22c,	// (0x000b0352) popup_call2_audio_first_window_g2

0xa929,	// (0x000afa4f) popup_call2_audio_first_window_g3_ParamLimits

0xa929,	// (0x000afa4f) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x000b4649) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x000b4649) popup_call2_audio_first_window_g

0xb30a,	// (0x000b0430) popup_call2_audio_first_window_t1_ParamLimits

0xb30a,	// (0x000b0430) popup_call2_audio_first_window_t1

0xb40d,	// (0x000b0533) popup_call2_audio_first_window_t4_ParamLimits

0xb40d,	// (0x000b0533) popup_call2_audio_first_window_t4

0xb4f0,	// (0x000b0616) popup_call2_audio_first_window_t5_ParamLimits

0xb4f0,	// (0x000b0616) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x000b4654) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x000b4654) popup_call2_audio_first_window_t

0xeca3,	// (0x000b3dc9) bg_popup_call2_act_pane_g1

0xbb5d,	// (0x000b0c83) popup_cale_lunar_info_window_t1

0xbb6b,	// (0x000b0c91) popup_cale_lunar_info_window_t2

0xbb79,	// (0x000b0c9f) popup_cale_lunar_info_window_t3

0xea50,	// (0x000b3b76) bg_popup_call2_bubble_pane

0xb5f1,	// (0x000b0717) bg_popup_call2_in_pane_cp01_ParamLimits

0xb5f1,	// (0x000b0717) bg_popup_call2_in_pane_cp01

0xe72c,	// (0x000b3852) call_type_pane_cp02

0xb639,	// (0x000b075f) popup_call2_audio_out_window_g1_ParamLimits

0xb639,	// (0x000b075f) popup_call2_audio_out_window_g1

0xb665,	// (0x000b078b) popup_call2_audio_out_window_g2_ParamLimits

0xb665,	// (0x000b078b) popup_call2_audio_out_window_g2

0xb68d,	// (0x000b07b3) popup_call2_audio_out_window_g3_ParamLimits

0xb68d,	// (0x000b07b3) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x000b465d) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x000b465d) popup_call2_audio_out_window_g

0xb6c8,	// (0x000b07ee) popup_call2_audio_out_window_t1_ParamLimits

0xb6c8,	// (0x000b07ee) popup_call2_audio_out_window_t1

0xb727,	// (0x000b084d) popup_call2_audio_out_window_t2_ParamLimits

0xb727,	// (0x000b084d) popup_call2_audio_out_window_t2

0xb77b,	// (0x000b08a1) popup_call2_audio_out_window_t3_ParamLimits

0xb77b,	// (0x000b08a1) popup_call2_audio_out_window_t3

0xb791,	// (0x000b08b7) popup_call2_audio_out_window_t4_ParamLimits

0xb791,	// (0x000b08b7) popup_call2_audio_out_window_t4

0xb7a7,	// (0x000b08cd) popup_call2_audio_out_window_t5_ParamLimits

0xb7a7,	// (0x000b08cd) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x000b4666) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x000b4666) popup_call2_audio_out_window_t

0xb80b,	// (0x000b0931) bg_popup_call2_in_pane_ParamLimits

0xb80b,	// (0x000b0931) bg_popup_call2_in_pane

0xb867,	// (0x000b098d) popup_call2_audio_in_window_g1_ParamLimits

0xb867,	// (0x000b098d) popup_call2_audio_in_window_g1

0xb89f,	// (0x000b09c5) popup_call2_audio_in_window_g2_ParamLimits

0xb89f,	// (0x000b09c5) popup_call2_audio_in_window_g2

0xb8d7,	// (0x000b09fd) popup_call2_audio_in_window_g3_ParamLimits

0xb8d7,	// (0x000b09fd) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x000b4673) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x000b4673) popup_call2_audio_in_window_g

0xb92f,	// (0x000b0a55) popup_call2_audio_in_window_t1_ParamLimits

0xb92f,	// (0x000b0a55) popup_call2_audio_in_window_t1

0xb9af,	// (0x000b0ad5) popup_call2_audio_in_window_t2_ParamLimits

0xb9af,	// (0x000b0ad5) popup_call2_audio_in_window_t2

0xba2f,	// (0x000b0b55) popup_call2_audio_in_window_t3_ParamLimits

0xba2f,	// (0x000b0b55) popup_call2_audio_in_window_t3

0xba49,	// (0x000b0b6f) popup_call2_audio_in_window_t4_ParamLimits

0xba49,	// (0x000b0b6f) popup_call2_audio_in_window_t4

0xba5b,	// (0x000b0b81) popup_call2_audio_in_window_t5_ParamLimits

0xba5b,	// (0x000b0b81) popup_call2_audio_in_window_t5

0xba70,	// (0x000b0b96) popup_call2_audio_in_window_t6_ParamLimits

0xba70,	// (0x000b0b96) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x000b467c) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x000b467c) popup_call2_audio_in_window_t

0xeca3,	// (0x000b3dc9) bg_popup_call2_in_pane_g1

0xbb87,	// (0x000b0cad) popup_cale_lunar_info_window_t4

0x0003,

0xf5be,	// (0x000b46e4) popup_cale_lunar_info_window_t

0xecab,	// (0x000b3dd1) bg_popup_call2_rect_pane_ParamLimits

0xecab,	// (0x000b3dd1) bg_popup_call2_rect_pane

0xea50,	// (0x000b3b76) call2_cli_visual_graphic_pane

0xea50,	// (0x000b3b76) call2_cli_visual_text_pane

0x9cf1,	// (0x000aee17) smil_status_volume_pane_g3

0x0002,

0xedc5,	// (0x000b3eeb) call2_cli_visual_graphic_pane_g1

0xedc5,	// (0x000b3eeb) call2_cli_visual_graphic_pane_g2

0xedc5,	// (0x000b3eeb) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x000b4689) call2_cli_visual_graphic_pane_g

0xba85,	// (0x000b0bab) bg_popup_call2_rect_pane_g1

0x95dd,	// (0x000ae703) bg_popup_call2_rect_pane_g2

0xba8d,	// (0x000b0bb3) bg_popup_call2_rect_pane_g3

0xba95,	// (0x000b0bbb) bg_popup_call2_rect_pane_g4

0xba9d,	// (0x000b0bc3) bg_popup_call2_rect_pane_g5

0xbaa5,	// (0x000b0bcb) bg_popup_call2_rect_pane_g6

0xbaad,	// (0x000b0bd3) bg_popup_call2_rect_pane_g7

0xbab5,	// (0x000b0bdb) bg_popup_call2_rect_pane_g8

0xbabd,	// (0x000b0be3) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x000b4690) bg_popup_call2_rect_pane_g

0xbac5,	// (0x000b0beb) bg_popup_call2_bubble_pane_g1

0xbacd,	// (0x000b0bf3) bg_popup_call2_bubble_pane_g2

0xbad5,	// (0x000b0bfb) bg_popup_call2_bubble_pane_g3

0xbadd,	// (0x000b0c03) bg_popup_call2_bubble_pane_g4

0xbae5,	// (0x000b0c0b) bg_popup_call2_bubble_pane_g5

0xbaed,	// (0x000b0c13) bg_popup_call2_bubble_pane_g6

0xbaf5,	// (0x000b0c1b) bg_popup_call2_bubble_pane_g7

0xbafd,	// (0x000b0c23) bg_popup_call2_bubble_pane_g8

0xbb05,	// (0x000b0c2b) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x000b46a3) bg_popup_call2_bubble_pane_g

0x09f1,	// (0x000a5b17) aid_cale_week_size_cell_pane

0x1075,	// (0x000a619b) aid_cams_cif_uncrop_pane_ParamLimits

0x1075,	// (0x000a619b) aid_cams_cif_uncrop_pane

0x1225,	// (0x000a634b) aid_cams_size_cell_ParamLimits

0x1225,	// (0x000a634b) aid_cams_size_cell

0x1239,	// (0x000a635f) grid_cams_pane_ParamLimits

0x1253,	// (0x000a6379) linegrid_cams_pane_ParamLimits

0x1433,	// (0x000a6559) call_video_pane_t1

0x1451,	// (0x000a6577) call_video_pane_t2

0x0001,

0xf26a,	// (0x000b4390) call_video_pane_t

0x187f,	// (0x000a69a5) aid_cale_month_size_cell_pane_ParamLimits

0x187f,	// (0x000a69a5) aid_cale_month_size_cell_pane

0xf607,	// (0x000b472d) smil_status_volume_pane_g

0x9cfe,	// (0x000aee24) volume_smil_pane_ParamLimits

0x024d,	// (0x000a5373) aid_popup2_width_pane

0x094b,	// (0x000a5a71) cell_qdial_pane_g4_ParamLimits

0x094b,	// (0x000a5a71) cell_qdial_pane_g4

0x2714,	// (0x000a783a) aid_blid_cardinal_pane_ParamLimits

0x2720,	// (0x000a7846) aid_blid_destination_pane_ParamLimits

0x2720,	// (0x000a7846) aid_blid_destination_pane

0xecab,	// (0x000b3dd1) bg_popup_call_poc_act_pane_ParamLimits

0xecab,	// (0x000b3dd1) bg_popup_call_poc_act_pane

0xecab,	// (0x000b3dd1) bg_popup_call_poc_inact_pane_ParamLimits

0xecab,	// (0x000b3dd1) bg_popup_call_poc_inact_pane

0xbb0d,	// (0x000b0c33) bg_popup_call_poc_act_pane_g1

0xbb15,	// (0x000b0c3b) bg_popup_call_poc_act_pane_g2

0xbb1d,	// (0x000b0c43) bg_popup_call_poc_act_pane_g3

0xbadd,	// (0x000b0c03) bg_popup_call_poc_act_pane_g4

0xbae5,	// (0x000b0c0b) bg_popup_call_poc_act_pane_g5

0xbb25,	// (0x000b0c4b) bg_popup_call_poc_act_pane_g6

0xbaf5,	// (0x000b0c1b) bg_popup_call_poc_act_pane_g7

0xbb2d,	// (0x000b0c53) bg_popup_call_poc_act_pane_g8

0xea50,	// (0x000b3b76) main_usb_pane

0x9ca5,	// (0x000aedcb) popup_cale_lunar_info_window

0x172b,	// (0x000a6851) im_reading_pane_t1_ParamLimits

0x9814,	// (0x000ae93a) list_im_pane_ParamLimits

0x9825,	// (0x000ae94b) scroll_pane_cp07_ParamLimits

0xea50,	// (0x000b3b76) grid_highlight_pane_cp012

0xecab,	// (0x000b3dd1) mup_scale_pane_ParamLimits

0xaa15,	// (0x000afb3b) main_usb_pane_g1_ParamLimits

0xaa15,	// (0x000afb3b) main_usb_pane_g1

0x3349,	// (0x000a846f) main_usb_pane_g2_ParamLimits

0x3349,	// (0x000a846f) main_usb_pane_g2

0x0001,

0xf5a7,	// (0x000b46cd) main_usb_pane_g_ParamLimits

0xf5a7,	// (0x000b46cd) main_usb_pane_g

0x335f,	// (0x000a8485) main_usb_pane_t1_ParamLimits

0x335f,	// (0x000a8485) main_usb_pane_t1

0x3371,	// (0x000a8497) main_usb_pane_t2_ParamLimits

0x3371,	// (0x000a8497) main_usb_pane_t2

0x3383,	// (0x000a84a9) main_usb_pane_t3_ParamLimits

0x3383,	// (0x000a84a9) main_usb_pane_t3

0x3395,	// (0x000a84bb) main_usb_pane_t4_ParamLimits

0x3395,	// (0x000a84bb) main_usb_pane_t4

0x33a7,	// (0x000a84cd) main_usb_pane_t5_ParamLimits

0x33a7,	// (0x000a84cd) main_usb_pane_t5

0x33b9,	// (0x000a84df) main_usb_pane_t6_ParamLimits

0x33b9,	// (0x000a84df) main_usb_pane_t6

0x0005,

0xf5ac,	// (0x000b46d2) main_usb_pane_t_ParamLimits

0x26c3,	// (0x000a77e9) aid_text_placing

0x26cc,	// (0x000a77f2) main_location2_pane_t1_ParamLimits

0x26de,	// (0x000a7804) main_location2_pane_t2_ParamLimits

0x26f0,	// (0x000a7816) main_location2_pane_t3_ParamLimits

0x2702,	// (0x000a7828) main_location2_pane_t4_ParamLimits

0x2702,	// (0x000a7828) main_location2_pane_t4

0xf3cb,	// (0x000b44f1) main_location2_pane_t_ParamLimits

0xece7,	// (0x000b3e0d) find_pinb_pane_g2_ParamLimits

0xece7,	// (0x000b3e0d) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x000b4241) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x000b4241) find_pinb_pane_g

0xecf3,	// (0x000b3e19) find_pinb_pane_t1_ParamLimits

0xed05,	// (0x000b3e2b) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x000b4246) find_pinb_pane_t_ParamLimits

0xea50,	// (0x000b3b76) main_call3_pane

0x1d6a,	// (0x000a6e90) cale_month_day_heading_pane_t1_ParamLimits

0x1df0,	// (0x000a6f16) cale_month_day_heading_pane_t2_ParamLimits

0x1e69,	// (0x000a6f8f) cale_month_day_heading_pane_t3_ParamLimits

0x1ee2,	// (0x000a7008) cale_month_day_heading_pane_t4_ParamLimits

0x1f63,	// (0x000a7089) cale_month_day_heading_pane_t5_ParamLimits

0x1fec,	// (0x000a7112) cale_month_day_heading_pane_t6_ParamLimits

0x2075,	// (0x000a719b) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x000b43c8) cale_month_day_heading_pane_t_ParamLimits

0x9a7b,	// (0x000aeba1) smil_status_volume_pane

0x2e44,	// (0x000a7f6a) postcard_address_pane_ParamLimits

0x2e44,	// (0x000a7f6a) postcard_address_pane

0x2e56,	// (0x000a7f7c) postcard_message_pane_ParamLimits

0x2e56,	// (0x000a7f7c) postcard_message_pane

0x3327,	// (0x000a844d) call2_cli_visual_pane_t1_ParamLimits

0x3327,	// (0x000a844d) call2_cli_visual_pane_t1

0x3b59,	// (0x000a8c7f) postcard_message_pane_t1_ParamLimits

0x3b59,	// (0x000a8c7f) postcard_message_pane_t1

0x3b42,	// (0x000a8c68) postcard_address_pane_t1_ParamLimits

0x3b42,	// (0x000a8c68) postcard_address_pane_t1

0x3b2e,	// (0x000a8c54) popup_call3_audio_in_window_ParamLimits

0x3b2e,	// (0x000a8c54) popup_call3_audio_in_window

0x39b9,	// (0x000a8adf) bg_popup_call3_in_pane_ParamLimits

0x39b9,	// (0x000a8adf) bg_popup_call3_in_pane

0x3a2f,	// (0x000a8b55) popup_call3_audio_in_window_g1_ParamLimits

0x3a2f,	// (0x000a8b55) popup_call3_audio_in_window_g1

0x3a4f,	// (0x000a8b75) popup_call3_audio_in_window_g2_ParamLimits

0x3a4f,	// (0x000a8b75) popup_call3_audio_in_window_g2

0x3a6f,	// (0x000a8b95) popup_call3_audio_in_window_g3_ParamLimits

0x3a6f,	// (0x000a8b95) popup_call3_audio_in_window_g3

0x0003,

0xf60e,	// (0x000b4734) popup_call3_audio_in_window_g_ParamLimits

0xf60e,	// (0x000b4734) popup_call3_audio_in_window_g

0x3aa0,	// (0x000a8bc6) popup_call3_audio_in_window_t1_ParamLimits

0x3aa0,	// (0x000a8bc6) popup_call3_audio_in_window_t1

0x3ade,	// (0x000a8c04) popup_call3_audio_in_window_t2_ParamLimits

0x3ade,	// (0x000a8c04) popup_call3_audio_in_window_t2

0x3b1c,	// (0x000a8c42) popup_call3_audio_in_window_t3_ParamLimits

0x3b1c,	// (0x000a8c42) popup_call3_audio_in_window_t3

0x0002,

0xf617,	// (0x000b473d) popup_call3_audio_in_window_t_ParamLimits

0xf617,	// (0x000b473d) popup_call3_audio_in_window_t

0x9709,	// (0x000ae82f) bg_popup_call3_rect_pane

0xba85,	// (0x000b0bab) bg_popup_call3_rect_pane_g1

0x95dd,	// (0x000ae703) bg_popup_call3_rect_pane_g2

0xba8d,	// (0x000b0bb3) bg_popup_call3_rect_pane_g3

0xba95,	// (0x000b0bbb) bg_popup_call3_rect_pane_g4

0xba9d,	// (0x000b0bc3) bg_popup_call3_rect_pane_g5

0xbaa5,	// (0x000b0bcb) bg_popup_call3_rect_pane_g6

0xbaad,	// (0x000b0bd3) bg_popup_call3_rect_pane_g7

0x2a04,	// (0x000a7b2a) mup_visualizer_osc_pane

0xa937,	// (0x000afa5d) mup_visualizer_spec_pane

0x39e9,	// (0x000a8b0f) call3_video_qcif_pane_ParamLimits

0x39e9,	// (0x000a8b0f) call3_video_qcif_pane

0x39fc,	// (0x000a8b22) call3_video_qcif_uncrop_pane_ParamLimits

0x39fc,	// (0x000a8b22) call3_video_qcif_uncrop_pane

0x3a0a,	// (0x000a8b30) call3_video_subqcif_pane_ParamLimits

0x3a0a,	// (0x000a8b30) call3_video_subqcif_pane

0x3a1e,	// (0x000a8b44) call3_video_subqcif_uncrop_pane_ParamLimits

0x3a1e,	// (0x000a8b44) call3_video_subqcif_uncrop_pane

0x3a8f,	// (0x000a8bb5) popup_call3_audio_in_window_g4_ParamLimits

0x3a8f,	// (0x000a8bb5) popup_call3_audio_in_window_g4

0x39a8,	// (0x000a8ace) mup_spec_half_pane

0x39b1,	// (0x000a8ad7) mup_spec_half_pane_cp

0xbcea,	// (0x000b0e10) mup_osc_middle_pane

0xbcf3,	// (0x000b0e19) mup_visualizer_osc_pane_g1

0x3988,	// (0x000a8aae) mup_spec_bar_pane_ParamLimits

0x3988,	// (0x000a8aae) mup_spec_bar_pane

0xbcd7,	// (0x000b0dfd) mup_spec_bar_pane_g1

0xbce1,	// (0x000b0e07) mup_spec_bar_pane_g2

0x0001,

0xf602,	// (0x000b4728) mup_spec_bar_pane_g

0x09f1,	// (0x000a5b17) aid_cale_week_size_cell_pane_ParamLimits

0x0a0b,	// (0x000a5b31) bg_cale_heading_pane_ParamLimits

0x9662,	// (0x000ae788) bg_cale_pane_cp01_ParamLimits

0x0a23,	// (0x000a5b49) cale_week_corner_pane_ParamLimits

0x0a42,	// (0x000a5b68) cale_week_day_heading_pane_ParamLimits

0x0a5f,	// (0x000a5b85) cale_week_scroll_pane_g1_ParamLimits

0x0a72,	// (0x000a5b98) cale_week_scroll_pane_g2_ParamLimits

0x0a8a,	// (0x000a5bb0) cale_week_scroll_pane_g3_ParamLimits

0x0aa2,	// (0x000a5bc8) cale_week_scroll_pane_g4_ParamLimits

0x0aba,	// (0x000a5be0) cale_week_scroll_pane_g5_ParamLimits

0x0ada,	// (0x000a5c00) cale_week_scroll_pane_g6_ParamLimits

0x0afa,	// (0x000a5c20) cale_week_scroll_pane_g7_ParamLimits

0x0b1a,	// (0x000a5c40) cale_week_scroll_pane_g8_ParamLimits

0x0b3e,	// (0x000a5c64) cale_week_scroll_pane_g9_ParamLimits

0x0b56,	// (0x000a5c7c) cale_week_scroll_pane_g10_ParamLimits

0x0b6e,	// (0x000a5c94) cale_week_scroll_pane_g11_ParamLimits

0x0b86,	// (0x000a5cac) cale_week_scroll_pane_g12_ParamLimits

0x0b9e,	// (0x000a5cc4) cale_week_scroll_pane_g13_ParamLimits

0x0b9e,	// (0x000a5cc4) cale_week_scroll_pane_g14_ParamLimits

0x0b9e,	// (0x000a5cc4) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x000b42d2) cale_week_scroll_pane_g_ParamLimits

0x0bda,	// (0x000a5d00) cale_week_time_pane_ParamLimits

0x0bfe,	// (0x000a5d24) grid_cale_week_pane_ParamLimits

0x967f,	// (0x000ae7a5) listscroll_cale_week_pane_t1

0x9691,	// (0x000ae7b7) scroll_pane_cp08_ParamLimits

0x18df,	// (0x000a6a05) cale_month_corner_pane_ParamLimits

0x9a45,	// (0x000aeb6b) cale_month_pane_t1

0x1cfd,	// (0x000a6e23) cale_month_week_pane_ParamLimits

0x251f,	// (0x000a7645) popup_call_status_window_g1_ParamLimits

0x2533,	// (0x000a7659) popup_call_status_window_g2_ParamLimits

0x2547,	// (0x000a766d) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x000b4478) popup_call_status_window_g_ParamLimits

0xa4ee,	// (0x000af614) aid_call2_pane

0x2c78,	// (0x000a7d9e) msg_header_pane_g1

0x2e44,	// (0x000a7f6a) postcard_address2_pane_ParamLimits

0x2e44,	// (0x000a7f6a) postcard_address2_pane

0x2e56,	// (0x000a7f7c) postcard_message2_pane_ParamLimits

0x2e56,	// (0x000a7f7c) postcard_message2_pane

0x393a,	// (0x000a8a60) message2_row_pane_ParamLimits

0x393a,	// (0x000a8a60) message2_row_pane

0x3956,	// (0x000a8a7c) address2_row_pane_ParamLimits

0x3956,	// (0x000a8a7c) address2_row_pane

0xbca5,	// (0x000b0dcb) postcard_message2_row_pane_g1

0xbcad,	// (0x000b0dd3) postcard_message2_row_pane_t1

0xbca5,	// (0x000b0dcb) address2_row_pane_g1

0xbcad,	// (0x000b0dd3) address2_row_pane_t1

0x0f2e,	// (0x000a6054) aid_size_cell_vorec

0xea50,	// (0x000b3b76) main_rss_pane

0x3969,	// (0x000a8a8f) rss_list_single_pane_ParamLimits

0x3969,	// (0x000a8a8f) rss_list_single_pane

0xbcbb,	// (0x000b0de1) rss_list_single_pane_t1

0xbcc9,	// (0x000b0def) rss_list_single_pane_t2

0x0001,

0xf5fd,	// (0x000b4723) rss_list_single_pane_t

0xea50,	// (0x000b3b76) main_camera2_pane

0xea50,	// (0x000b3b76) main_video2_pane

0x3bd2,	// (0x000a8cf8) cams_zoom_pane_cp2_ParamLimits

0x3bd2,	// (0x000a8cf8) cams_zoom_pane_cp2

0x3bf2,	// (0x000a8d18) image2_vga_pane_ParamLimits

0x3bf2,	// (0x000a8d18) image2_vga_pane

0x3c43,	// (0x000a8d69) main_camera2_pane_g1_ParamLimits

0x3c43,	// (0x000a8d69) main_camera2_pane_g1

0x3c63,	// (0x000a8d89) main_camera2_pane_g2_ParamLimits

0x3c63,	// (0x000a8d89) main_camera2_pane_g2

0x3c83,	// (0x000a8da9) main_camera2_pane_g3_ParamLimits

0x3c83,	// (0x000a8da9) main_camera2_pane_g3

0x3ca3,	// (0x000a8dc9) main_camera2_pane_g4_ParamLimits

0x3ca3,	// (0x000a8dc9) main_camera2_pane_g4

0x3cc3,	// (0x000a8de9) main_camera2_pane_g5_ParamLimits

0x3cc3,	// (0x000a8de9) main_camera2_pane_g5

0x3ce3,	// (0x000a8e09) main_camera2_pane_g6_ParamLimits

0x3ce3,	// (0x000a8e09) main_camera2_pane_g6

0x3d03,	// (0x000a8e29) main_camera2_pane_g7_ParamLimits

0x3d03,	// (0x000a8e29) main_camera2_pane_g7

0x3d23,	// (0x000a8e49) main_camera2_pane_g8_ParamLimits

0x3d23,	// (0x000a8e49) main_camera2_pane_g8

0x0008,

0xf61e,	// (0x000b4744) main_camera2_pane_g_ParamLimits

0xf61e,	// (0x000b4744) main_camera2_pane_g

0x3d63,	// (0x000a8e89) main_camera2_pane_t1_ParamLimits

0x3d63,	// (0x000a8e89) main_camera2_pane_t1

0x3d98,	// (0x000a8ebe) main_camera2_pane_t2_ParamLimits

0x3d98,	// (0x000a8ebe) main_camera2_pane_t2

0x3dbe,	// (0x000a8ee4) main_camera2_pane_t3_ParamLimits

0x3dbe,	// (0x000a8ee4) main_camera2_pane_t3

0x3e1c,	// (0x000a8f42) main_camera2_pane_t4_ParamLimits

0x3e1c,	// (0x000a8f42) main_camera2_pane_t4

0x0006,

0xf631,	// (0x000b4757) main_camera2_pane_t_ParamLimits

0xf631,	// (0x000b4757) main_camera2_pane_t

0x3eae,	// (0x000a8fd4) cams_zoom_pane_cp4_ParamLimits

0x3eae,	// (0x000a8fd4) cams_zoom_pane_cp4

0x3ec4,	// (0x000a8fea) image2_cif_pane_ParamLimits

0x3ec4,	// (0x000a8fea) image2_cif_pane

0x3eef,	// (0x000a9015) image2_subqcif_pane_ParamLimits

0x3eef,	// (0x000a9015) image2_subqcif_pane

0x3f09,	// (0x000a902f) main_video2_pane_g1_ParamLimits

0x3f09,	// (0x000a902f) main_video2_pane_g1

0x3f23,	// (0x000a9049) main_video2_pane_g2_ParamLimits

0x3f23,	// (0x000a9049) main_video2_pane_g2

0x3f39,	// (0x000a905f) main_video2_pane_g3_ParamLimits

0x3f39,	// (0x000a905f) main_video2_pane_g3

0x3f4f,	// (0x000a9075) main_video2_pane_g4_ParamLimits

0x3f4f,	// (0x000a9075) main_video2_pane_g4

0x3f65,	// (0x000a908b) main_video2_pane_g5_ParamLimits

0x3f65,	// (0x000a908b) main_video2_pane_g5

0x3f7b,	// (0x000a90a1) main_video2_pane_g6_ParamLimits

0x3f7b,	// (0x000a90a1) main_video2_pane_g6

0x0005,

0xf640,	// (0x000b4766) main_video2_pane_g_ParamLimits

0xf640,	// (0x000b4766) main_video2_pane_g

0x3f95,	// (0x000a90bb) main_video2_pane_t1_ParamLimits

0x3f95,	// (0x000a90bb) main_video2_pane_t1

0x3fb9,	// (0x000a90df) main_video2_pane_t2_ParamLimits

0x3fb9,	// (0x000a90df) main_video2_pane_t2

0x4007,	// (0x000a912d) main_video2_pane_t3_ParamLimits

0x4007,	// (0x000a912d) main_video2_pane_t3

0x0002,

0xf64d,	// (0x000b4773) main_video2_pane_t_ParamLimits

0xf64d,	// (0x000b4773) main_video2_pane_t

0x3474,	// (0x000a859a) call_muted_g2

0x0001,

0xf5ef,	// (0x000b4715) call_muted_g

0xea50,	// (0x000b3b76) main_mup2_pane

0x404b,	// (0x000a9171) main_mup2_pane_g1_ParamLimits

0x404b,	// (0x000a9171) main_mup2_pane_g1

0x4057,	// (0x000a917d) main_mup2_pane_g2_ParamLimits

0x4057,	// (0x000a917d) main_mup2_pane_g2

0x9d6c,	// (0x000aee92) main_mup_pane_g13_cp1

0x9d74,	// (0x000aee9a) mup_volume_pane_cp1

0x4073,	// (0x000a9199) main_mup2_pane_g4_ParamLimits

0x4073,	// (0x000a9199) main_mup2_pane_g4

0x4085,	// (0x000a91ab) main_mup2_pane_g5_ParamLimits

0x4085,	// (0x000a91ab) main_mup2_pane_g5

0x4097,	// (0x000a91bd) main_mup2_pane_g6_ParamLimits

0x4097,	// (0x000a91bd) main_mup2_pane_g6

0x40a9,	// (0x000a91cf) main_mup2_pane_g7_ParamLimits

0x40a9,	// (0x000a91cf) main_mup2_pane_g7

0x0006,

0xf654,	// (0x000b477a) main_mup2_pane_g_ParamLimits

0xf654,	// (0x000b477a) main_mup2_pane_g

0x40c1,	// (0x000a91e7) main_mup2_pane_t1_ParamLimits

0x40c1,	// (0x000a91e7) main_mup2_pane_t1

0x40d7,	// (0x000a91fd) main_mup2_pane_t2_ParamLimits

0x40d7,	// (0x000a91fd) main_mup2_pane_t2

0x40ed,	// (0x000a9213) main_mup2_pane_t3_ParamLimits

0x40ed,	// (0x000a9213) main_mup2_pane_t3

0x4103,	// (0x000a9229) main_mup2_pane_t4_ParamLimits

0x4103,	// (0x000a9229) main_mup2_pane_t4

0x411b,	// (0x000a9241) main_mup2_pane_t5_ParamLimits

0x411b,	// (0x000a9241) main_mup2_pane_t5

0x4133,	// (0x000a9259) main_mup2_pane_t6_ParamLimits

0x4133,	// (0x000a9259) main_mup2_pane_t6

0x0005,

0xf663,	// (0x000b4789) main_mup2_pane_t_ParamLimits

0xf663,	// (0x000b4789) main_mup2_pane_t

0x4163,	// (0x000a9289) mup2_visualizer_pane_ParamLimits

0x4163,	// (0x000a9289) mup2_visualizer_pane

0x4191,	// (0x000a92b7) mup_progress_pane_cp_ParamLimits

0x4191,	// (0x000a92b7) mup_progress_pane_cp

0x9d57,	// (0x000aee7d) mup_volume_pane_cp_ParamLimits

0x9d57,	// (0x000aee7d) mup_volume_pane_cp

0x41a5,	// (0x000a92cb) mup2_visualizer_pane_g1_ParamLimits

0x41a5,	// (0x000a92cb) mup2_visualizer_pane_g1

0xbd2a,	// (0x000b0e50) mup2_visualizer_pane_g2_ParamLimits

0xbd2a,	// (0x000b0e50) mup2_visualizer_pane_g2

0x41bc,	// (0x000a92e2) mup2_visualizer_pane_g3_ParamLimits

0x41bc,	// (0x000a92e2) mup2_visualizer_pane_g3

0x0002,

0xf670,	// (0x000b4796) mup2_visualizer_pane_g_ParamLimits

0xf670,	// (0x000b4796) mup2_visualizer_pane_g

0xab5e,	// (0x000afc84) aid_size_cell_fmradio

0x3626,	// (0x000a874c) aid_height_parent_landcape

0x98a3,	// (0x000ae9c9) wml_content_pane_cp

0x98ab,	// (0x000ae9d1) wml_tabs_pane

0x98b4,	// (0x000ae9da) popup_wml_miniature_window

0x98bc,	// (0x000ae9e2) scroll_pane_cp021

0x98d0,	// (0x000ae9f6) wml_content_pane_comp8

0xea50,	// (0x000b3b76) bg_popup_sub_pane_cp05

0xbd48,	// (0x000b0e6e) popup_wml_miniature_window_g1

0xbd50,	// (0x000b0e76) wml_miniature_view_pane

0x41c8,	// (0x000a92ee) aid_size_wml_view

0x41d0,	// (0x000a92f6) wml_miniature_view_pane_g1

0x41d9,	// (0x000a92ff) wml_miniature_view_pane_g2

0x41e2,	// (0x000a9308) wml_miniature_view_pane_g3

0x41ea,	// (0x000a9310) wml_miniature_view_pane_g4

0x41f2,	// (0x000a9318) wml_miniature_view_pane_g5

0x41fa,	// (0x000a9320) wml_miniature_view_pane_g6

0x4202,	// (0x000a9328) wml_miniature_view_pane_g7

0x420a,	// (0x000a9330) wml_miniature_view_pane_g8

0x0007,

0xf677,	// (0x000b479d) wml_miniature_view_pane_g

0xbd58,	// (0x000b0e7e) background_graphic_ParamLimits

0xbd58,	// (0x000b0e7e) background_graphic

0xbd64,	// (0x000b0e8a) wml_tabs_2_pane

0xbd6d,	// (0x000b0e93) wml_tabs_3_pane_ParamLimits

0xbd6d,	// (0x000b0e93) wml_tabs_3_pane

0xbd7f,	// (0x000b0ea5) wml_tabs_4_pane_ParamLimits

0xbd7f,	// (0x000b0ea5) wml_tabs_4_pane

0xbd95,	// (0x000b0ebb) wml_tabs_5_pane_ParamLimits

0xbd95,	// (0x000b0ebb) wml_tabs_5_pane

0xbdaf,	// (0x000b0ed5) wml_tabs_pane_g2_ParamLimits

0xbdaf,	// (0x000b0ed5) wml_tabs_pane_g2

0xbdc3,	// (0x000b0ee9) wml_tabs_pane_g3_ParamLimits

0xbdc3,	// (0x000b0ee9) wml_tabs_pane_g3

0x4212,	// (0x000a9338) wml_tabs_2_active_pane_ParamLimits

0x4212,	// (0x000a9338) wml_tabs_2_active_pane

0x4226,	// (0x000a934c) wml_tabs_2_passive_pane_ParamLimits

0x4226,	// (0x000a934c) wml_tabs_2_passive_pane

0x423a,	// (0x000a9360) wml_tabs_3_active_pane_cp_ParamLimits

0x423a,	// (0x000a9360) wml_tabs_3_active_pane_cp

0x424f,	// (0x000a9375) wml_tabs_3_passive_pane_ParamLimits

0x424f,	// (0x000a9375) wml_tabs_3_passive_pane

0x4262,	// (0x000a9388) wml_tabs_3_passive_pane_cp_ParamLimits

0x4262,	// (0x000a9388) wml_tabs_3_passive_pane_cp

0x4279,	// (0x000a939f) tabs_4_active_pane

0x4281,	// (0x000a93a7) tabs_4_passive_pane

0x428b,	// (0x000a93b1) tabs_4_passive_pane_cp

0x4293,	// (0x000a93b9) tabs_4_passive_pane_cp2

0x3341,	// (0x000a8467) aid_height_text

0x29da,	// (0x000a7b00) mup_volume_cont_pane_ParamLimits

0x29da,	// (0x000a7b00) mup_volume_cont_pane

0x05d2,	// (0x000a56f8) aid_size_cell_pinb

0x05dc,	// (0x000a5702) aid_size_list_pinb

0x417d,	// (0x000a92a3) mup2_volume_cont_pane_ParamLimits

0x417d,	// (0x000a92a3) mup2_volume_cont_pane

0x9d43,	// (0x000aee69) mup2_volume_cont_pane_g1_ParamLimits

0x9d43,	// (0x000aee69) mup2_volume_cont_pane_g1

0x0259,	// (0x000a537f) aid_size_cell_touch_ParamLimits

0x0259,	// (0x000a537f) aid_size_cell_touch

0x04c2,	// (0x000a55e8) touch_pane_ParamLimits

0x04c2,	// (0x000a55e8) touch_pane

0x9575,	// (0x000ae69b) main_rss2_pane

0xbde0,	// (0x000b0f06) listscroll_rss2_pane

0xbde9,	// (0x000b0f0f) rss2_navigation_pane

0xbdfd,	// (0x000b0f23) list_rss2_pane

0xa631,	// (0x000af757) scroll_pane_cp22

0xbe05,	// (0x000b0f2b) rss2_navigation_pane_g1

0xbe0e,	// (0x000b0f34) rss2_navigation_pane_g2

0xbe16,	// (0x000b0f3c) rss2_navigation_pane_g3

0x0002,

0xf688,	// (0x000b47ae) rss2_navigation_pane_g

0xbe1e,	// (0x000b0f44) rss2_navigation_pane_t1

0x429d,	// (0x000a93c3) rss2_list_single_pane_ParamLimits

0x429d,	// (0x000a93c3) rss2_list_single_pane

0xbe2c,	// (0x000b0f52) rss2_list_single_pane_t2

0xbe3a,	// (0x000b0f60) rss2_list_single_pane_t3_ParamLimits

0xbe3a,	// (0x000b0f60) rss2_list_single_pane_t3

0xbe57,	// (0x000b0f7d) rss2_list_single_pane_t4

0x2329,	// (0x000a744f) smil_status_pane_g1

0x9567,	// (0x000ae68d) main_image2_pane_ParamLimits

0x9567,	// (0x000ae68d) main_image2_pane

0x3d43,	// (0x000a8e69) main_camera2_pane_g9_ParamLimits

0x3d43,	// (0x000a8e69) main_camera2_pane_g9

0x3e71,	// (0x000a8f97) main_camera2_pane_t5_ParamLimits

0x3e71,	// (0x000a8f97) main_camera2_pane_t5

0x9d13,	// (0x000aee39) main_camera2_pane_t6_ParamLimits

0x9d13,	// (0x000aee39) main_camera2_pane_t6

0x42b2,	// (0x000a93d8) main_image2_pane_g1_ParamLimits

0x42b2,	// (0x000a93d8) main_image2_pane_g1

0x307d,	// (0x000a81a3) smil2_video_pane_ParamLimits

0x307d,	// (0x000a81a3) smil2_video_pane

0x0299,	// (0x000a53bf) aid_zoom_text_primary_cp

0x955d,	// (0x000ae683) popup_preview_fixed_window

0x980c,	// (0x000ae932) im_reading_pane_g1

0x3bba,	// (0x000a8ce0) cams2_bc_adjust_pane_cp_ParamLimits

0x3bba,	// (0x000a8ce0) cams2_bc_adjust_pane_cp

0x3ea0,	// (0x000a8fc6) cams2_bc_adjust_pane_ParamLimits

0x3ea0,	// (0x000a8fc6) cams2_bc_adjust_pane

0xcb5b,	// (0x000b1c81) cams2_bc_adjust_pane_g1

0x9d7c,	// (0x000aeea2) cams2_slider_pane

0x9d85,	// (0x000aeeab) cams2_slider_pane_g1

0x9d8e,	// (0x000aeeb4) cams2_slider_pane_g2

0x0006,

0xf68f,	// (0x000b47b5) cams2_slider_pane_g

0x06ca,	// (0x000a57f0) calc_display_pane_ParamLimits

0x06ef,	// (0x000a5815) calc_paper_pane_ParamLimits

0x0712,	// (0x000a5838) grid_calc_pane_ParamLimits

0x9c38,	// (0x000aed5e) popup_clock_digital_window_t1_ParamLimits

0xaafb,	// (0x000afc21) main_image_pane_t1

0x06ac,	// (0x000a57d2) aid_size_cell_calc_ParamLimits

0x06ac,	// (0x000a57d2) aid_size_cell_calc

0x367e,	// (0x000a87a4) popup_blid_sat_info2_window_ParamLimits

0x367e,	// (0x000a87a4) popup_blid_sat_info2_window

0xbe6d,	// (0x000b0f93) aid_size_cell_blid

0xbe75,	// (0x000b0f9b) bg_popup_window_pane_cp07

0xbe98,	// (0x000b0fbe) grid_popup_blid_pane

0xbea2,	// (0x000b0fc8) heading_pane_cp05_ParamLimits

0xbea2,	// (0x000b0fc8) heading_pane_cp05

0xbf6c,	// (0x000b1092) cell_popup_blid_pane_ParamLimits

0xbf6c,	// (0x000b1092) cell_popup_blid_pane

0xbf90,	// (0x000b10b6) cell_popup_blid_pane_g1

0xbf98,	// (0x000b10be) cell_popup_blid_pane_t1

0x414d,	// (0x000a9273) mup2_indicator_pane_ParamLimits

0x414d,	// (0x000a9273) mup2_indicator_pane

0x9709,	// (0x000ae82f) mup2_visualizer_osc_pane

0xbd36,	// (0x000b0e5c) mup2_visualizer_spec_pane_ParamLimits

0xbd36,	// (0x000b0e5c) mup2_visualizer_spec_pane

0x42c8,	// (0x000a93ee) mup2_spec_half_pane

0x42d1,	// (0x000a93f7) mup2_spec_half_pane_cp

0x42d9,	// (0x000a93ff) mup2_spec_bar_pane_ParamLimits

0x42d9,	// (0x000a93ff) mup2_spec_bar_pane

0xbcd7,	// (0x000b0dfd) mup2_spec_bar_pane_g1

0xbce1,	// (0x000b0e07) mup2_spec_bar_pane_g2

0x0001,

0xf602,	// (0x000b4728) mup2_spec_bar_pane_g

0x42f9,	// (0x000a941f) mup2_osc_middle_pane

0xbcf3,	// (0x000b0e19) mup2_visualizer_osc_pane_g1

0xe65d,	// (0x000b3783) popup_number_entry_window_t1_ParamLimits

0xe670,	// (0x000b3796) popup_number_entry_window_t2_ParamLimits

0xe682,	// (0x000b37a8) popup_number_entry_window_t3_ParamLimits

0x0514,	// (0x000a563a) popup_number_entry_window_t5_ParamLimits

0x0514,	// (0x000a563a) popup_number_entry_window_t5

0xf0c6,	// (0x000b41ec) popup_number_entry_window_t_ParamLimits

0xe694,	// (0x000b37ba) text_title_cp2_ParamLimits

0x9c77,	// (0x000aed9d) aid_hotspot_pointer_text2_pane

0x9c91,	// (0x000aedb7) main_viewer_pane_g9_ParamLimits

0x9c91,	// (0x000aedb7) main_viewer_pane_g9

0x9a45,	// (0x000aeb6b) cale_month_pane_t1_ParamLimits

0x9ab0,	// (0x000aebd6) bg_cale_pane_ParamLimits

0x9ac8,	// (0x000aebee) list_cale_pane_ParamLimits

0x9ad9,	// (0x000aebff) listscroll_cale_day_pane_t1

0x9aeb,	// (0x000aec11) scroll_pane_cp09_ParamLimits

0x2a0c,	// (0x000a7b32) main_mup_eq_pane_t1_ParamLimits

0x2a0c,	// (0x000a7b32) main_mup_eq_pane_t1

0x2a26,	// (0x000a7b4c) main_mup_eq_pane_t2_ParamLimits

0x2a26,	// (0x000a7b4c) main_mup_eq_pane_t2

0x2a40,	// (0x000a7b66) main_mup_eq_pane_t3_ParamLimits

0x2a40,	// (0x000a7b66) main_mup_eq_pane_t3

0x2a5c,	// (0x000a7b82) main_mup_eq_pane_t4_ParamLimits

0x2a5c,	// (0x000a7b82) main_mup_eq_pane_t4

0x2a78,	// (0x000a7b9e) main_mup_eq_pane_t5_ParamLimits

0x2a78,	// (0x000a7b9e) main_mup_eq_pane_t5

0x2a94,	// (0x000a7bba) main_mup_eq_pane_t6_ParamLimits

0x2a94,	// (0x000a7bba) main_mup_eq_pane_t6

0x2aa8,	// (0x000a7bce) main_mup_eq_pane_t7_ParamLimits

0x2aa8,	// (0x000a7bce) main_mup_eq_pane_t7

0x2abc,	// (0x000a7be2) main_mup_eq_pane_t8_ParamLimits

0x2abc,	// (0x000a7be2) main_mup_eq_pane_t8

0x2ad0,	// (0x000a7bf6) main_mup_eq_pane_t9_ParamLimits

0x2ad0,	// (0x000a7bf6) main_mup_eq_pane_t9

0x2aea,	// (0x000a7c10) main_mup_eq_pane_t10_ParamLimits

0x2aea,	// (0x000a7c10) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x000b4577) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x000b4577) main_mup_eq_pane_t

0x2b99,	// (0x000a7cbf) mup_equalizer_pane_cp5_ParamLimits

0x2bad,	// (0x000a7cd3) mup_equalizer_pane_cp6_ParamLimits

0x2bc1,	// (0x000a7ce7) mup_equalizer_pane_cp7_ParamLimits

0x9575,	// (0x000ae69b) main_gallery_pane

0xbcfc,	// (0x000b0e22) smil2_volume_pane

0xbd04,	// (0x000b0e2a) smil_status_volume_pane_g1_ParamLimits

0xbd17,	// (0x000b0e3d) smil_status_volume_pane_g2_ParamLimits

0x9cf1,	// (0x000aee17) smil_status_volume_pane_g3_ParamLimits

0xf607,	// (0x000b472d) smil_status_volume_pane_g_ParamLimits

0xbe75,	// (0x000b0f9b) bg_popup_window_pane_cp07_ParamLimits

0xbe83,	// (0x000b0fa9) blid_firmament_pane

0x4302,	// (0x000a9428) aid_size_cell_gallery_ParamLimits

0x4302,	// (0x000a9428) aid_size_cell_gallery

0x4318,	// (0x000a943e) grid_gallery_pane_ParamLimits

0x4318,	// (0x000a943e) grid_gallery_pane

0x4331,	// (0x000a9457) cell_gallery_pane_ParamLimits

0x4331,	// (0x000a9457) cell_gallery_pane

0xbfa6,	// (0x000b10cc) bg_cell_gallery_focus_pane_ParamLimits

0xbfa6,	// (0x000b10cc) bg_cell_gallery_focus_pane

0xbfb8,	// (0x000b10de) cell_gallery_pane_g1_ParamLimits

0xbfb8,	// (0x000b10de) cell_gallery_pane_g1

0x437a,	// (0x000a94a0) cell_gallery_pane_g2_ParamLimits

0x437a,	// (0x000a94a0) cell_gallery_pane_g2

0x4387,	// (0x000a94ad) cell_gallery_pane_g3_ParamLimits

0x4387,	// (0x000a94ad) cell_gallery_pane_g3

0xbfc4,	// (0x000b10ea) cell_gallery_pane_g4_ParamLimits

0xbfc4,	// (0x000b10ea) cell_gallery_pane_g4

0x0003,

0xf6b5,	// (0x000b47db) cell_gallery_pane_g_ParamLimits

0xf6b5,	// (0x000b47db) cell_gallery_pane_g

0xbfd0,	// (0x000b10f6) bg_cell_gallery_focus_pane_g1

0xbfd8,	// (0x000b10fe) bg_cell_gallery_focus_pane_g2

0xbfe0,	// (0x000b1106) bg_cell_gallery_focus_pane_g3

0xbfe8,	// (0x000b110e) bg_cell_gallery_focus_pane_g4

0xbff0,	// (0x000b1116) bg_cell_gallery_focus_pane_g5

0xbff8,	// (0x000b111e) bg_cell_gallery_focus_pane_g6

0xc000,	// (0x000b1126) bg_cell_gallery_focus_pane_g7

0xc008,	// (0x000b112e) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6be,	// (0x000b47e4) bg_cell_gallery_focus_pane_g

0xc010,	// (0x000b1136) aid_firma_cardinal

0xc024,	// (0x000b114a) blid_firmament_pane_t1

0xc03b,	// (0x000b1161) blid_firmament_pane_t2

0xc052,	// (0x000b1178) blid_firmament_pane_t3

0xc069,	// (0x000b118f) blid_firmament_pane_t4

0x0003,

0xf6cf,	// (0x000b47f5) blid_firmament_pane_t

0xc080,	// (0x000b11a6) blid_sat_info_pane

0xc090,	// (0x000b11b6) blid_sat_info_pane_g1

0xc090,	// (0x000b11b6) blid_sat_info_pane_g2

0x0001,

0xf6d8,	// (0x000b47fe) blid_sat_info_pane_g

0xc09a,	// (0x000b11c0) blid_sat_info_pane_t1

0xc0a8,	// (0x000b11ce) smil2_volume_content_pane

0xc0b1,	// (0x000b11d7) smil2_volume_pane_g1

0xedf1,	// (0x000b3f17) smil2_volume_content_pane_g1

0xc0b9,	// (0x000b11df) smil2_volume_content_pane_g2

0xc0c2,	// (0x000b11e8) smil2_volume_content_pane_g3

0xc0cb,	// (0x000b11f1) smil2_volume_content_pane_g4

0xc0d4,	// (0x000b11fa) smil2_volume_content_pane_g5

0xc0dd,	// (0x000b1203) smil2_volume_content_pane_g6

0xc0e6,	// (0x000b120c) smil2_volume_content_pane_g7

0xc0ef,	// (0x000b1215) smil2_volume_content_pane_g8

0xc0f8,	// (0x000b121e) smil2_volume_content_pane_g9

0xc101,	// (0x000b1227) smil2_volume_content_pane_g10

0x0009,

0xf6dd,	// (0x000b4803) smil2_volume_content_pane_g

0x0cb2,	// (0x000a5dd8) cale_week_day_heading_pane_t1_ParamLimits

0x0cdc,	// (0x000a5e02) cale_week_day_heading_pane_t2_ParamLimits

0x0d0b,	// (0x000a5e31) cale_week_day_heading_pane_t3_ParamLimits

0x0d3a,	// (0x000a5e60) cale_week_day_heading_pane_t4_ParamLimits

0x0d69,	// (0x000a5e8f) cale_week_day_heading_pane_t5_ParamLimits

0x0da0,	// (0x000a5ec6) cale_week_day_heading_pane_t6_ParamLimits

0x0dd7,	// (0x000a5efd) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x000b42f3) cale_week_day_heading_pane_t_ParamLimits

0x96ae,	// (0x000ae7d4) bg_cale_side_pane_ParamLimits

0x0e01,	// (0x000a5f27) cale_week_time_pane_t1_ParamLimits

0x0e1b,	// (0x000a5f41) cale_week_time_pane_t2_ParamLimits

0x0e35,	// (0x000a5f5b) cale_week_time_pane_t3_ParamLimits

0x0e4f,	// (0x000a5f75) cale_week_time_pane_t4_ParamLimits

0x0e69,	// (0x000a5f8f) cale_week_time_pane_t5_ParamLimits

0x0e83,	// (0x000a5fa9) cale_week_time_pane_t6_ParamLimits

0x0e9d,	// (0x000a5fc3) cale_week_time_pane_t7_ParamLimits

0x0eb7,	// (0x000a5fdd) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x000b4302) cale_week_time_pane_t_ParamLimits

0x0ed1,	// (0x000a5ff7) cell_cale_week_pane_g2_ParamLimits

0x96ae,	// (0x000ae7d4) bg_cale_side_pane_cp01_ParamLimits

0x2106,	// (0x000a722c) cale_month_week_pane_t1_ParamLimits

0x211f,	// (0x000a7245) cale_month_week_pane_t2_ParamLimits

0x2138,	// (0x000a725e) cale_month_week_pane_t3_ParamLimits

0x2151,	// (0x000a7277) cale_month_week_pane_t4_ParamLimits

0x216a,	// (0x000a7290) cale_month_week_pane_t5_ParamLimits

0x2183,	// (0x000a72a9) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x000b43d7) cale_month_week_pane_t_ParamLimits

0x9a57,	// (0x000aeb7d) cell_cale_month_pane_g1_ParamLimits

0x9575,	// (0x000ae69b) main_cale_event_viewer_pane

0xe633,	// (0x000b3759) listscroll_cale_event_viewer_pane

0xc10a,	// (0x000b1230) list_cale_ev_pane

0xc112,	// (0x000b1238) scroll_pane_cp023

0xc11e,	// (0x000b1244) field_cale_ev_pane_ParamLimits

0xc11e,	// (0x000b1244) field_cale_ev_pane

0xc13c,	// (0x000b1262) field_cale_ev_content_pane_ParamLimits

0xc13c,	// (0x000b1262) field_cale_ev_content_pane

0xc148,	// (0x000b126e) field_cale_ev_pane_g1_ParamLimits

0xc148,	// (0x000b126e) field_cale_ev_pane_g1

0xc154,	// (0x000b127a) field_cale_ev_pane_g2_ParamLimits

0xc154,	// (0x000b127a) field_cale_ev_pane_g2

0xc16c,	// (0x000b1292) field_cale_ev_pane_g3_ParamLimits

0xc16c,	// (0x000b1292) field_cale_ev_pane_g3

0x0002,

0xf6f2,	// (0x000b4818) field_cale_ev_pane_g_ParamLimits

0xf6f2,	// (0x000b4818) field_cale_ev_pane_g

0xc184,	// (0x000b12aa) field_cale_ev_pane_t1_ParamLimits

0xc184,	// (0x000b12aa) field_cale_ev_pane_t1

0xc19b,	// (0x000b12c1) field_cale_ev_content_pane_t1_ParamLimits

0xc19b,	// (0x000b12c1) field_cale_ev_content_pane_t1

0xa9e1,	// (0x000afb07) bg_button_pane_cp01

0x09df,	// (0x000a5b05) listscroll_cale_week_pane_ParamLimits

0x9659,	// (0x000ae77f) popup_toolbar_window_cp01

0x967f,	// (0x000ae7a5) listscroll_cale_week_pane_t1_ParamLimits

0x09df,	// (0x000a5b05) listscroll_cale_day_pane_ParamLimits

0x9659,	// (0x000ae77f) popup_toolbar_window_cp02

0x9ad9,	// (0x000aebff) listscroll_cale_day_pane_t1_ParamLimits

0x3644,	// (0x000a876a) main_cale_month_pane_ParamLimits

0x9cdc,	// (0x000aee02) popup_toolbar_window_cp03_ParamLimits

0x9cdc,	// (0x000aee02) popup_toolbar_window_cp03

0x2f45,	// (0x000a806b) main_image_pane_g2_ParamLimits

0x2f45,	// (0x000a806b) main_image_pane_g2

0x2f56,	// (0x000a807c) main_image_pane_g3_ParamLimits

0x2f56,	// (0x000a807c) main_image_pane_g3

0x0002,

0xf4e3,	// (0x000b4609) main_image_pane_g_ParamLimits

0xf4e3,	// (0x000b4609) main_image_pane_g

0xaafb,	// (0x000afc21) main_image_pane_t1_ParamLimits

0x2f67,	// (0x000a808d) main_image_pane_t2_ParamLimits

0x2f67,	// (0x000a808d) main_image_pane_t2

0x2f79,	// (0x000a809f) main_image_pane_t3_ParamLimits

0x2f79,	// (0x000a809f) main_image_pane_t3

0x2fa1,	// (0x000a80c7) main_image_pane_t4_ParamLimits

0x2fa1,	// (0x000a80c7) main_image_pane_t4

0x0003,

0xf4ea,	// (0x000b4610) main_image_pane_t_ParamLimits

0xf4ea,	// (0x000b4610) main_image_pane_t

0x2fc1,	// (0x000a80e7) popup_image_details_window_cp01

0x2fcb,	// (0x000a80f1) popup_toobar_trans_pane_cp01_ParamLimits

0x2fcb,	// (0x000a80f1) popup_toobar_trans_pane_cp01

0x375d,	// (0x000a8883) popup_image_details_window_ParamLimits

0x375d,	// (0x000a8883) popup_image_details_window

0x9caf,	// (0x000aedd5) popup_image_focus_window

0x3b74,	// (0x000a8c9a) camera2_autofocus_pane_ParamLimits

0x3b74,	// (0x000a8c9a) camera2_autofocus_pane

0xe633,	// (0x000b3759) bg_popup_sub_pane_cp06

0xc1b9,	// (0x000b12df) popup_image_focus_window_g1

0xc1c1,	// (0x000b12e7) popup_image_focus_window_g2

0xc1c9,	// (0x000b12ef) popup_image_focus_window_g3

0xc1d1,	// (0x000b12f7) popup_image_focus_window_g4

0x0003,

0xf6f9,	// (0x000b481f) popup_image_focus_window_g

0xc1d9,	// (0x000b12ff) popup_image_focus_window_t1

0xc1e7,	// (0x000b130d) popup_image_focus_window_t2

0xc1f7,	// (0x000b131d) popup_image_focus_window_t3

0x0002,

0xf702,	// (0x000b4828) popup_image_focus_window_t

0xc205,	// (0x000b132b) camera2_autofocus_pane_g1

0xee42,	// (0x000b3f68) bg_tb_trans_pane_cp01

0xc213,	// (0x000b1339) popup_image_details_window_g1

0xc226,	// (0x000b134c) popup_image_details_window_g2

0x0002,

0xf714,	// (0x000b483a) popup_image_details_window_g

0xc24f,	// (0x000b1375) popup_image_details_window_t1

0xc261,	// (0x000b1387) popup_image_details_window_t2

0xc27a,	// (0x000b13a0) popup_image_details_window_t3

0xc28e,	// (0x000b13b4) popup_image_details_window_t4

0xc2a9,	// (0x000b13cf) popup_image_details_window_t5

0x0004,

0xf71b,	// (0x000b4841) popup_image_details_window_t

0xed5c,	// (0x000b3e82) bg_calc_paper_pane_ParamLimits

0x9575,	// (0x000ae69b) grid_highlight_pane_cp013

0x9587,	// (0x000ae6ad) list_calc_pane_ParamLimits

0x9599,	// (0x000ae6bf) scroll_pane_cp024

0xed70,	// (0x000b3e96) bg_calc_display_pane_ParamLimits

0x0810,	// (0x000a5936) calc_display_pane_t1_ParamLimits

0x0825,	// (0x000a594b) calc_display_pane_t2_ParamLimits

0x95a1,	// (0x000ae6c7) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x000b4273) calc_display_pane_t_ParamLimits

0x08e5,	// (0x000a5a0b) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x000b4290) cell_calc_pane_g

0x08ee,	// (0x000a5a14) cell_calc_pane_t1

0xedcf,	// (0x000b3ef5) grid_highlight_pane_cp02_ParamLimits

0xede5,	// (0x000b3f0b) toolbar_button_pane_cp01_ParamLimits

0xede5,	// (0x000b3f0b) toolbar_button_pane_cp01

0xab40,	// (0x000afc66) temp_image_control_pane_ParamLimits

0xab40,	// (0x000afc66) temp_image_control_pane

0x9567,	// (0x000ae68d) main_mp3_pane

0xc2c3,	// (0x000b13e9) temp_image_control_pane_g1_ParamLimits

0xc2c3,	// (0x000b13e9) temp_image_control_pane_g1

0xc2d1,	// (0x000b13f7) temp_image_control_pane_g2_ParamLimits

0xc2d1,	// (0x000b13f7) temp_image_control_pane_g2

0xc2e3,	// (0x000b1409) temp_image_control_pane_g3_ParamLimits

0xc2e3,	// (0x000b1409) temp_image_control_pane_g3

0x43c4,	// (0x000a94ea) temp_image_control_pane_g4_ParamLimits

0x43c4,	// (0x000a94ea) temp_image_control_pane_g4

0x0003,

0xf726,	// (0x000b484c) temp_image_control_pane_g_ParamLimits

0xf726,	// (0x000b484c) temp_image_control_pane_g

0xc2c3,	// (0x000b13e9) main_mp3_pane_g1

0x43d7,	// (0x000a94fd) main_mp3_pane_g2

0x0007,

0xf72f,	// (0x000b4855) main_mp3_pane_g

0xc326,	// (0x000b144c) main_mp3_pane_t1

0x971b,	// (0x000ae841) main_camera_pane_g8_ParamLimits

0x971b,	// (0x000ae841) main_camera_pane_g8

0x11cb,	// (0x000a62f1) main_video_pane_g7_ParamLimits

0x11cb,	// (0x000a62f1) main_video_pane_g7

0x9d31,	// (0x000aee57) main_camera2_pane_t7_ParamLimits

0x9d31,	// (0x000aee57) main_camera2_pane_t7

0x9863,	// (0x000ae989) scroll_pane_cp025_ParamLimits

0x9863,	// (0x000ae989) scroll_pane_cp025

0x9877,	// (0x000ae99d) scroll_pane_cp026_ParamLimits

0x9877,	// (0x000ae99d) scroll_pane_cp026

0x9886,	// (0x000ae9ac) wml_content_pane_ParamLimits

0x9575,	// (0x000ae69b) main_touch_calib_pane

0x44ab,	// (0x000a95d1) main_touch_calib_pane_g1

0x44bd,	// (0x000a95e3) main_touch_calib_pane_g2

0x44cf,	// (0x000a95f5) main_touch_calib_pane_g3

0x44e1,	// (0x000a9607) main_touch_calib_pane_g4

0x0003,

0xf74d,	// (0x000b4873) main_touch_calib_pane_g

0x44f3,	// (0x000a9619) main_touch_calib_pane_t1

0x450d,	// (0x000a9633) main_touch_calib_pane_t2

0x0004,

0xf756,	// (0x000b487c) main_touch_calib_pane_t

0xa70d,	// (0x000af833) mup_progress_pane_cp02

0xa742,	// (0x000af868) navi_pane_g1

0xa7fd,	// (0x000af923) navi_pane_mp_t3

0x9567,	// (0x000ae68d) main_mp3_pane_ParamLimits

0x38e2,	// (0x000a8a08) navi_pane_ParamLimits

0xc2c3,	// (0x000b13e9) main_mp3_pane_g1_ParamLimits

0x43d7,	// (0x000a94fd) main_mp3_pane_g2_ParamLimits

0x43e5,	// (0x000a950b) main_mp3_pane_g3_ParamLimits

0x43e5,	// (0x000a950b) main_mp3_pane_g3

0x43f3,	// (0x000a9519) main_mp3_pane_g4_ParamLimits

0x43f3,	// (0x000a9519) main_mp3_pane_g4

0xc2f3,	// (0x000b1419) main_mp3_pane_g5_ParamLimits

0xc2f3,	// (0x000b1419) main_mp3_pane_g5

0xc301,	// (0x000b1427) main_mp3_pane_g6_ParamLimits

0xc301,	// (0x000b1427) main_mp3_pane_g6

0xc30e,	// (0x000b1434) main_mp3_pane_g7_ParamLimits

0xc30e,	// (0x000b1434) main_mp3_pane_g7

0xc31a,	// (0x000b1440) main_mp3_pane_g8_ParamLimits

0xc31a,	// (0x000b1440) main_mp3_pane_g8

0xf72f,	// (0x000b4855) main_mp3_pane_g_ParamLimits

0x43ff,	// (0x000a9525) main_mp3_pane_t2

0x440d,	// (0x000a9533) main_mp3_pane_t3

0xc334,	// (0x000b145a) main_mp3_pane_t4

0xc342,	// (0x000b1468) main_mp3_pane_t5

0x0005,

0xf740,	// (0x000b4866) main_mp3_pane_t

0xc350,	// (0x000b1476) mup_progress_pane_cp01

0x0299,	// (0x000a53bf) aid_zoom_text_secondary2

0xc10a,	// (0x000b1230) list_cale_ev2_pane

0xc112,	// (0x000b1238) scroll_pane_cp023_ParamLimits

0x4563,	// (0x000a9689) field_cale_ev2_pane_ParamLimits

0x4563,	// (0x000a9689) field_cale_ev2_pane

0x4583,	// (0x000a96a9) field_cale_ev2_pane_g1_ParamLimits

0x4583,	// (0x000a96a9) field_cale_ev2_pane_g1

0x458f,	// (0x000a96b5) field_cale_ev2_pane_g2_ParamLimits

0x458f,	// (0x000a96b5) field_cale_ev2_pane_g2

0x45a7,	// (0x000a96cd) field_cale_ev2_pane_g3_ParamLimits

0x45a7,	// (0x000a96cd) field_cale_ev2_pane_g3

0x0003,

0xf761,	// (0x000b4887) field_cale_ev2_pane_g_ParamLimits

0xf761,	// (0x000b4887) field_cale_ev2_pane_g

0xc364,	// (0x000b148a) field_cale_ev2_pane_t1_ParamLimits

0xc364,	// (0x000b148a) field_cale_ev2_pane_t1

0xc37b,	// (0x000b14a1) field_cale_ev2_pane_t2_ParamLimits

0xc37b,	// (0x000b14a1) field_cale_ev2_pane_t2

0x0001,

0xf76a,	// (0x000b4890) field_cale_ev2_pane_t_ParamLimits

0xf76a,	// (0x000b4890) field_cale_ev2_pane_t

0x2dfa,	// (0x000a7f20) main_postcard_pane_g5_ParamLimits

0x2dfa,	// (0x000a7f20) main_postcard_pane_g5

0x2e10,	// (0x000a7f36) main_postcard_pane_g6_ParamLimits

0x2e10,	// (0x000a7f36) main_postcard_pane_g6

0x0f97,	// (0x000a60bd) camera2_autofocus_pane_cp_ParamLimits

0x0f97,	// (0x000a60bd) camera2_autofocus_pane_cp

0x9567,	// (0x000ae68d) main_mup3_pane

0x45e3,	// (0x000a9709) main_mup3_pane_g1_ParamLimits

0x45e3,	// (0x000a9709) main_mup3_pane_g1

0x4605,	// (0x000a972b) main_mup3_pane_g2_ParamLimits

0x4605,	// (0x000a972b) main_mup3_pane_g2

0x4683,	// (0x000a97a9) main_mup3_pane_g3_ParamLimits

0x4683,	// (0x000a97a9) main_mup3_pane_g3

0x46c9,	// (0x000a97ef) main_mup3_pane_g4_ParamLimits

0x46c9,	// (0x000a97ef) main_mup3_pane_g4

0x470f,	// (0x000a9835) main_mup3_pane_g5_ParamLimits

0x470f,	// (0x000a9835) main_mup3_pane_g5

0x4755,	// (0x000a987b) main_mup3_pane_g6_ParamLimits

0x4755,	// (0x000a987b) main_mup3_pane_g6

0xc3b0,	// (0x000b14d6) main_mup3_pane_g7_ParamLimits

0xc3b0,	// (0x000b14d6) main_mup3_pane_g7

0x0007,

0xf77a,	// (0x000b48a0) main_mup3_pane_g_ParamLimits

0xf77a,	// (0x000b48a0) main_mup3_pane_g

0x47d3,	// (0x000a98f9) main_mup3_pane_t1_ParamLimits

0x47d3,	// (0x000a98f9) main_mup3_pane_t1

0x4847,	// (0x000a996d) main_mup3_pane_t2_ParamLimits

0x4847,	// (0x000a996d) main_mup3_pane_t2

0x491b,	// (0x000a9a41) main_mup3_pane_t4_ParamLimits

0x491b,	// (0x000a9a41) main_mup3_pane_t4

0x4971,	// (0x000a9a97) main_mup3_pane_t5_ParamLimits

0x4971,	// (0x000a9a97) main_mup3_pane_t5

0x4a2d,	// (0x000a9b53) main_mup3_pane_t6_ParamLimits

0x4a2d,	// (0x000a9b53) main_mup3_pane_t6

0x0005,

0xf78b,	// (0x000b48b1) main_mup3_pane_t_ParamLimits

0xf78b,	// (0x000b48b1) main_mup3_pane_t

0x4ae5,	// (0x000a9c0b) mup3_progress_pane_ParamLimits

0x4ae5,	// (0x000a9c0b) mup3_progress_pane

0x4b7b,	// (0x000a9ca1) popup_mup3_control_window_ParamLimits

0x4b7b,	// (0x000a9ca1) popup_mup3_control_window

0xc3be,	// (0x000b14e4) popup_mup3_text_window

0x4bad,	// (0x000a9cd3) mup3_progress_pane_t1

0x4bcc,	// (0x000a9cf2) mup3_progress_pane_t2

0xc3c6,	// (0x000b14ec) mup3_progress_pane_t3

0x0002,

0xf798,	// (0x000b48be) mup3_progress_pane_t

0xc3e3,	// (0x000b1509) mup_progress_pane_cp03

0xe633,	// (0x000b3759) bg_tb_trans_pane_cp04

0x4beb,	// (0x000a9d11) mup3_volume_pane

0x4bf3,	// (0x000a9d19) popup_mup3_control_window_g1

0x4bfc,	// (0x000a9d22) mup3_volume_pane_g1

0x4c05,	// (0x000a9d2b) mup3_volume_pane_g2

0x4c0e,	// (0x000a9d34) mup3_volume_pane_g3

0x0002,

0xf79f,	// (0x000b48c5) mup3_volume_pane_g

0xe633,	// (0x000b3759) bg_tb_trans_pane_cp03

0xc3f3,	// (0x000b1519) popup_mup3_text_window_g1

0xc3fb,	// (0x000b1521) popup_mup3_text_window_t1

0xedb8,	// (0x000b3ede) list_calc_item_pane_g1_ParamLimits

0xbdd7,	// (0x000b0efd) mup_volume_pane_cp_g1

0x4527,	// (0x000a964d) main_touch_calib_pane_t3

0x453b,	// (0x000a9661) main_touch_calib_pane_t4

0x454f,	// (0x000a9675) main_touch_calib_pane_t5

0x0245,	// (0x000a536b) aid_cell_size_toolbar2

0x024d,	// (0x000a5373) aid_popup3_width_pane

0x0289,	// (0x000a53af) aid_zoom_text_msg_primary

0x0f76,	// (0x000a609c) vorec_t7

0xed7c,	// (0x000b3ea2) bg_calc_paper_pane_g1_ParamLimits

0xed88,	// (0x000b3eae) bg_calc_paper_pane_g2_ParamLimits

0xed94,	// (0x000b3eba) bg_calc_paper_pane_g3_ParamLimits

0xeda0,	// (0x000b3ec6) bg_calc_paper_pane_g4_ParamLimits

0xedac,	// (0x000b3ed2) bg_calc_paper_pane_g5_ParamLimits

0x086f,	// (0x000a5995) bg_calc_paper_pane_g6_ParamLimits

0x087e,	// (0x000a59a4) bg_calc_paper_pane_g7_ParamLimits

0x088d,	// (0x000a59b3) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x000b427a) bg_calc_paper_pane_g_ParamLimits

0x08a0,	// (0x000a59c6) calc_bg_paper_pane_g9_ParamLimits

0x10e2,	// (0x000a6208) image_qvga_pane_ParamLimits

0x10e2,	// (0x000a6208) image_qvga_pane

0xecab,	// (0x000b3dd1) bg_popup_sub_pane_cp04_ParamLimits

0xaa77,	// (0x000afb9d) popup_mup_playback_window_g1_ParamLimits

0xaa83,	// (0x000afba9) popup_mup_playback_window_t1_ParamLimits

0xaa98,	// (0x000afbbe) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x000b4604) popup_mup_playback_window_t_ParamLimits

0x4067,	// (0x000a918d) main_mup2_pane_g3_ParamLimits

0x4067,	// (0x000a918d) main_mup2_pane_g3

0x14d4,	// (0x000a65fa) popup_toolbar_window_cp04

0xae7a,	// (0x000affa0) popup_call2_audio_second_window_g3_ParamLimits

0xae7a,	// (0x000affa0) popup_call2_audio_second_window_g3

0xb290,	// (0x000b03b6) popup_call2_audio_first_window_g4_ParamLimits

0xb290,	// (0x000b03b6) popup_call2_audio_first_window_g4

0xb90f,	// (0x000b0a35) popup_call2_audio_in_window_g4_ParamLimits

0xb90f,	// (0x000b0a35) popup_call2_audio_in_window_g4

0x2f27,	// (0x000a804d) aid_area_sk_bg_cut_ParamLimits

0x2f27,	// (0x000a804d) aid_area_sk_bg_cut

0xaaad,	// (0x000afbd3) aid_area_sk_bg_cut_2_ParamLimits

0xaaad,	// (0x000afbd3) aid_area_sk_bg_cut_2

0x436a,	// (0x000a9490) aid_placing_details_win

0x4372,	// (0x000a9498) aid_placing_details_win_2

0xc205,	// (0x000b132b) camera2_autofocus_pane_g1_ParamLimits

0x045b,	// (0x000a5581) popup_fixed_preview_cale_window_ParamLimits

0x045b,	// (0x000a5581) popup_fixed_preview_cale_window

0xa87b,	// (0x000af9a1) navi_slider_pane_g3

0xa884,	// (0x000af9aa) navi_slider_pane_g4

0xa88d,	// (0x000af9b3) navi_slider_pane_g5

0xa87b,	// (0x000af9a1) navi_slider_pane_g6

0x9c5e,	// (0x000aed84) navi_slider_pane_g7

0xa9ae,	// (0x000afad4) mup_scale_pane_g3

0xa9b7,	// (0x000afadd) mup_scale_pane_g4

0xa9c0,	// (0x000afae6) mup_scale_pane_g5

0x2bd5,	// (0x000a7cfb) mup_scale_pane_g6

0x2bde,	// (0x000a7d04) mup_scale_pane_g7

0xa87b,	// (0x000af9a1) cams2_slider_pane_g3

0xbe65,	// (0x000b0f8b) cams2_slider_pane_g4

0x9d97,	// (0x000aeebd) cams2_slider_pane_g5

0xa87b,	// (0x000af9a1) cams2_slider_pane_g6

0x9d9f,	// (0x000aeec5) cams2_slider_pane_g7

0xc090,	// (0x000b11b6) camera2_autofocus_pane_cp_g1

0xbc70,	// (0x000b0d96) bg_popup_preview_window_pane_cp02_ParamLimits

0xbc70,	// (0x000b0d96) bg_popup_preview_window_pane_cp02

0xc409,	// (0x000b152f) list_fp_cale_pane_ParamLimits

0xc409,	// (0x000b152f) list_fp_cale_pane

0xc415,	// (0x000b153b) popup_fixed_preview_cale_window_t1_ParamLimits

0xc415,	// (0x000b153b) popup_fixed_preview_cale_window_t1

0x4c17,	// (0x000a9d3d) popup_fixed_preview_cale_window_t2_ParamLimits

0x4c17,	// (0x000a9d3d) popup_fixed_preview_cale_window_t2

0x4c2c,	// (0x000a9d52) popup_fixed_preview_cale_window_t3_ParamLimits

0x4c2c,	// (0x000a9d52) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a6,	// (0x000b48cc) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a6,	// (0x000b48cc) popup_fixed_preview_cale_window_t

0x4c41,	// (0x000a9d67) list_single_fp_cale_pane_ParamLimits

0x4c41,	// (0x000a9d67) list_single_fp_cale_pane

0xc433,	// (0x000b1559) list_single_fp_cale_pane_g1_ParamLimits

0xc433,	// (0x000b1559) list_single_fp_cale_pane_g1

0xc43f,	// (0x000b1565) list_single_fp_cale_pane_g2_ParamLimits

0xc43f,	// (0x000b1565) list_single_fp_cale_pane_g2

0x0002,

0xf7ad,	// (0x000b48d3) list_single_fp_cale_pane_g_ParamLimits

0xf7ad,	// (0x000b48d3) list_single_fp_cale_pane_g

0xc458,	// (0x000b157e) list_single_fp_cale_pane_t1_ParamLimits

0xc458,	// (0x000b157e) list_single_fp_cale_pane_t1

0xc46a,	// (0x000b1590) list_single_fp_cale_pane_t2_ParamLimits

0xc46a,	// (0x000b1590) list_single_fp_cale_pane_t2

0x0001,

0xf7b4,	// (0x000b48da) list_single_fp_cale_pane_t_ParamLimits

0xf7b4,	// (0x000b48da) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9575,	// (0x000ae69b) main_dialer_pane

0x4c56,	// (0x000a9d7c) aid_cell_size_keypad

0x4c60,	// (0x000a9d86) dialer_ne_pane

0x4c68,	// (0x000a9d8e) grid_dialer_command_1_pane

0x4c70,	// (0x000a9d96) grid_dialer_command_2_pane

0x4c78,	// (0x000a9d9e) grid_dialer_keypad_pane

0x4c8a,	// (0x000a9db0) bg_popup_call_pane_cp06_ParamLimits

0x4c8a,	// (0x000a9db0) bg_popup_call_pane_cp06

0x4c96,	// (0x000a9dbc) dialer_ne_clear_pane_ParamLimits

0x4c96,	// (0x000a9dbc) dialer_ne_clear_pane

0xc49d,	// (0x000b15c3) dialer_ne_pane_g1

0xc4a5,	// (0x000b15cb) dialer_ne_pane_t1_ParamLimits

0xc4a5,	// (0x000b15cb) dialer_ne_pane_t1

0x4ca2,	// (0x000a9dc8) dialer_ne_pane_t2_ParamLimits

0x4ca2,	// (0x000a9dc8) dialer_ne_pane_t2

0x4ccc,	// (0x000a9df2) dialer_ne_pane_t3_ParamLimits

0x4ccc,	// (0x000a9df2) dialer_ne_pane_t3

0x0002,

0xf7b9,	// (0x000b48df) dialer_ne_pane_t_ParamLimits

0xf7b9,	// (0x000b48df) dialer_ne_pane_t

0x4cfc,	// (0x000a9e22) dialer_ne_pane_t3_copy1_ParamLimits

0x4cfc,	// (0x000a9e22) dialer_ne_pane_t3_copy1

0x4d2b,	// (0x000a9e51) cell_dialer_keypad_pane_ParamLimits

0x4d2b,	// (0x000a9e51) cell_dialer_keypad_pane

0x4d42,	// (0x000a9e68) cell_dialer_command_1_pane_ParamLimits

0x4d42,	// (0x000a9e68) cell_dialer_command_1_pane

0x4d58,	// (0x000a9e7e) cell_dialer_command_2_pane_ParamLimits

0x4d58,	// (0x000a9e7e) cell_dialer_command_2_pane

0xc4b7,	// (0x000b15dd) bg_button_pane_cp02_ParamLimits

0xc4b7,	// (0x000b15dd) bg_button_pane_cp02

0x4d67,	// (0x000a9e8d) cell_dialer_keypad_pane_g1_ParamLimits

0x4d67,	// (0x000a9e8d) cell_dialer_keypad_pane_g1

0xc4b7,	// (0x000b15dd) bg_button_pane_cp03_ParamLimits

0xc4b7,	// (0x000b15dd) bg_button_pane_cp03

0x4d7b,	// (0x000a9ea1) cell_dialer_command_1_pane_g1_ParamLimits

0x4d7b,	// (0x000a9ea1) cell_dialer_command_1_pane_g1

0xc4c3,	// (0x000b15e9) bg_button_pane_cp04

0x4d8f,	// (0x000a9eb5) cell_dialer_command_2_pane_g1

0x9709,	// (0x000ae82f) bg_button_pane_cp06

0xc4cb,	// (0x000b15f1) dialer_ne_clear_pane_g1

0xa74e,	// (0x000af874) navi_pane_g2

0xa77c,	// (0x000af8a2) navi_pane_g3

0x0002,

0xf3e1,	// (0x000b4507) navi_pane_g

0xa80b,	// (0x000af931) navi_pane_mv_g2

0xa832,	// (0x000af958) navi_pane_mv_g5

0x2799,	// (0x000a78bf) navi_pane_mv_t1

0xed70,	// (0x000b3e96) main_clock2_pane

0xee42,	// (0x000b3f68) main_clock2_list_pane_ParamLimits

0xee42,	// (0x000b3f68) main_clock2_list_pane

0x4e00,	// (0x000a9f26) main_clock2_pane_t1_ParamLimits

0x4e00,	// (0x000a9f26) main_clock2_pane_t1

0x4e3b,	// (0x000a9f61) main_clock2_pane_t2_ParamLimits

0x4e3b,	// (0x000a9f61) main_clock2_pane_t2

0x0004,

0xf7c5,	// (0x000b48eb) main_clock2_pane_t_ParamLimits

0xf7c5,	// (0x000b48eb) main_clock2_pane_t

0x4edb,	// (0x000aa001) popup_clock_analogue_window_cp03_ParamLimits

0x4edb,	// (0x000aa001) popup_clock_analogue_window_cp03

0x4f00,	// (0x000aa026) popup_clock_digital_window_cp02_ParamLimits

0x4f00,	// (0x000aa026) popup_clock_digital_window_cp02

0x4f79,	// (0x000aa09f) main_clock2_list_single_pane_ParamLimits

0x4f79,	// (0x000aa09f) main_clock2_list_single_pane

0x9709,	// (0x000ae82f) list_highlight_pane_cp05

0xc509,	// (0x000b162f) main_clock2_list_single_pane_t1

0x14d4,	// (0x000a65fa) popup_toolbar_window_cp04_ParamLimits

0x4394,	// (0x000a94ba) camera2_autofocus_pane_g2_ParamLimits

0x4394,	// (0x000a94ba) camera2_autofocus_pane_g2

0x43a0,	// (0x000a94c6) camera2_autofocus_pane_g3_ParamLimits

0x43a0,	// (0x000a94c6) camera2_autofocus_pane_g3

0x43ac,	// (0x000a94d2) camera2_autofocus_pane_g4_ParamLimits

0x43ac,	// (0x000a94d2) camera2_autofocus_pane_g4

0x43b8,	// (0x000a94de) camera2_autofocus_pane_g5_ParamLimits

0x43b8,	// (0x000a94de) camera2_autofocus_pane_g5

0x0004,

0xf709,	// (0x000b482f) camera2_autofocus_pane_g_ParamLimits

0xf709,	// (0x000b482f) camera2_autofocus_pane_g

0xc390,	// (0x000b14b6) camera2_autofocus_pane_cp_g2

0xc398,	// (0x000b14be) camera2_autofocus_pane_cp_g3

0xc3a0,	// (0x000b14c6) camera2_autofocus_pane_cp_g4

0xc3a8,	// (0x000b14ce) camera2_autofocus_pane_cp_g5

0x0004,

0xf76f,	// (0x000b4895) camera2_autofocus_pane_cp_g

0x4c82,	// (0x000a9da8) popup_dialer_spcha_window

0xe633,	// (0x000b3759) bg_popup_sub_pane_cp07

0xc517,	// (0x000b163d) list_spcha_pane

0xc51f,	// (0x000b1645) list_single_spcha_pane_ParamLimits

0xc51f,	// (0x000b1645) list_single_spcha_pane

0xe633,	// (0x000b3759) list_highlight_pane_cp06

0xc530,	// (0x000b1656) list_single_spcha_pane_t1

0xb6b9,	// (0x000b07df) popup_call2_audio_out_window_g4_ParamLimits

0xb6b9,	// (0x000b07df) popup_call2_audio_out_window_g4

0x9575,	// (0x000ae69b) main_imed2_pane

0x9cb7,	// (0x000aeddd) popup_imed_adjust2_window

0x3775,	// (0x000a889b) popup_imed_trans_window_ParamLimits

0x3775,	// (0x000a889b) popup_imed_trans_window

0xbece,	// (0x000b0ff4) popup_blid_sat_info2_window_t1

0xbedc,	// (0x000b1002) popup_blid_sat_info2_window_t2

0x000a,

0xf69e,	// (0x000b47c4) popup_blid_sat_info2_window_t

0x502a,	// (0x000aa150) aid_size_cell_colour_35

0x504a,	// (0x000aa170) aid_size_cell_colour_112

0x506a,	// (0x000aa190) aid_size_cell_effect

0xbc7c,	// (0x000b0da2) bg_tb_trans_pane_cp02

0xa2b9,	// (0x000af3df) heading_imed_pane

0x508a,	// (0x000aa1b0) listscroll_imed_pane

0xc53e,	// (0x000b1664) heading_imed_pane_g1

0xc546,	// (0x000b166c) heading_imed_pane_t1

0xc554,	// (0x000b167a) grid_imed_colour_35_pane_ParamLimits

0xc554,	// (0x000b167a) grid_imed_colour_35_pane

0x5096,	// (0x000aa1bc) grid_imed_effect_pane

0xc56b,	// (0x000b1691) list_imed_aspect_pane

0x50ac,	// (0x000aa1d2) scroll_pane_cp027_ParamLimits

0x50ac,	// (0x000aa1d2) scroll_pane_cp027

0x50bd,	// (0x000aa1e3) cell_imed_effect_pane_ParamLimits

0x50bd,	// (0x000aa1e3) cell_imed_effect_pane

0xc573,	// (0x000b1699) cell_imed_colour_pane_ParamLimits

0xc573,	// (0x000b1699) cell_imed_colour_pane

0xc5b5,	// (0x000b16db) cell_imed_colour_pane_g1_ParamLimits

0xc5b5,	// (0x000b16db) cell_imed_colour_pane_g1

0xc5c6,	// (0x000b16ec) hgihlgiht_grid_pane_cp016_ParamLimits

0xc5c6,	// (0x000b16ec) hgihlgiht_grid_pane_cp016

0x50e4,	// (0x000aa20a) cell_imed_effect_pane_g1

0x50ec,	// (0x000aa212) grid_highlight_pane_cp017

0xc5d7,	// (0x000b16fd) list_imed_single_pane_ParamLimits

0xc5d7,	// (0x000b16fd) list_imed_single_pane

0xe633,	// (0x000b3759) list_highlight_pane_cp07

0xc5ec,	// (0x000b1712) list_imed_aspect_pane_comp1_t1

0xbc7c,	// (0x000b0da2) bg_tb_trans_pane_cp05

0xc60e,	// (0x000b1734) popup_imed_adjust2_window_g1

0xc635,	// (0x000b175b) popup_imed_adjust2_window_t1

0xc64d,	// (0x000b1773) slider_imed_adjust_pane

0xc661,	// (0x000b1787) slider_imed_adjust_pane_g1

0xc671,	// (0x000b1797) slider_imed_adjust_pane_g2

0xc681,	// (0x000b17a7) slider_imed_adjust_pane_g3

0xc692,	// (0x000b17b8) slider_imed_adjust_pane_g4

0x0003,

0xf7e2,	// (0x000b4908) slider_imed_adjust_pane_g

0x50f5,	// (0x000aa21b) aid_size_cell_clipart2

0x5101,	// (0x000aa227) grid_imed_clipart_pane

0xc6a3,	// (0x000b17c9) scroll_pane_cp031

0x510b,	// (0x000aa231) cell_imed_clipart_pane_ParamLimits

0x510b,	// (0x000aa231) cell_imed_clipart_pane

0x512d,	// (0x000aa253) cell_imed_clipart_pane_g1

0xe633,	// (0x000b3759) grid_highlight_pane_cp014

0x4ddc,	// (0x000a9f02) main_clock2_pane_g1_ParamLimits

0x4ddc,	// (0x000a9f02) main_clock2_pane_g1

0x4f20,	// (0x000aa046) aid_call2_pane_cp10

0x4f32,	// (0x000aa058) aid_call_pane_cp10

0xa6af,	// (0x000af7d5) popup_clock_analogue_window_cp10_g1

0xa6af,	// (0x000af7d5) popup_clock_analogue_window_cp10_g2

0x4f44,	// (0x000aa06a) popup_clock_analogue_window_cp10_g3

0x4f44,	// (0x000aa06a) popup_clock_analogue_window_cp10_g4

0xa6af,	// (0x000af7d5) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d0,	// (0x000b48f6) popup_clock_analogue_window_cp10_g

0x4f5a,	// (0x000aa080) popup_clock_analogue_window_cp10_t1

0x4f8b,	// (0x000aa0b1) clock_digital_number_pane_cp10_ParamLimits

0x4f8b,	// (0x000aa0b1) clock_digital_number_pane_cp10

0x4fa3,	// (0x000aa0c9) clock_digital_number_pane_cp11_ParamLimits

0x4fa3,	// (0x000aa0c9) clock_digital_number_pane_cp11

0x4fbb,	// (0x000aa0e1) clock_digital_number_pane_cp12_ParamLimits

0x4fbb,	// (0x000aa0e1) clock_digital_number_pane_cp12

0x4fd5,	// (0x000aa0fb) clock_digital_number_pane_cp13_ParamLimits

0x4fd5,	// (0x000aa0fb) clock_digital_number_pane_cp13

0x4fef,	// (0x000aa115) clock_digital_separator_pane_cp10_ParamLimits

0x4fef,	// (0x000aa115) clock_digital_separator_pane_cp10

0x5009,	// (0x000aa12f) popup_clock_digital_window_cp02_t1_ParamLimits

0x5009,	// (0x000aa12f) popup_clock_digital_window_cp02_t1

0xeca3,	// (0x000b3dc9) clock_digital_number_pane_cp10_g1

0xeca3,	// (0x000b3dc9) clock_digital_number_pane_cp10_g2

0x0001,

0xf7eb,	// (0x000b4911) clock_digital_number_pane_cp10_g

0xeca3,	// (0x000b3dc9) clock_digital_separator_pane_cp10_g1

0xeca3,	// (0x000b3dc9) clock_digital_separator_pane_g2_cp10

0xa83a,	// (0x000af960) navi_pane_vded_g4

0xa843,	// (0x000af969) navi_pane_vded_g5

0xa84c,	// (0x000af972) navi_pane_vded_t1

0x9575,	// (0x000ae69b) main_vded_pane

0x5136,	// (0x000aa25c) main_vded_pane_g1

0x5140,	// (0x000aa266) main_vded_pane_g2

0x514a,	// (0x000aa270) main_vded_pane_g3

0x0002,

0xf7f0,	// (0x000b4916) main_vded_pane_g

0x5154,	// (0x000aa27a) main_vded_pane_t1

0x5162,	// (0x000aa288) main_vded_pane_t2

0x0001,

0xf7f7,	// (0x000b491d) main_vded_pane_t

0x5170,	// (0x000aa296) vded_slider_pane

0x5178,	// (0x000aa29e) vded_video_pane

0xc6ab,	// (0x000b17d1) vded_video_pane_g1

0x5180,	// (0x000aa2a6) vded_video_pane_g2

0xc090,	// (0x000b11b6) vded_video_pane_g3

0x0002,

0xf7fc,	// (0x000b4922) vded_video_pane_g

0xc6b5,	// (0x000b17db) vded_slider_pane_g1

0xbdd7,	// (0x000b0efd) vded_slider_pane_g2

0xc6be,	// (0x000b17e4) vded_slider_pane_g3

0xc6c7,	// (0x000b17ed) vded_slider_pane_g4

0xc6d0,	// (0x000b17f6) vded_slider_pane_g5

0x0004,

0xf803,	// (0x000b4929) vded_slider_pane_g

0x4b63,	// (0x000a9c89) mup3_rocker_pane_ParamLimits

0x4b63,	// (0x000a9c89) mup3_rocker_pane

0x5189,	// (0x000aa2af) mup3_control_keys_pane_g1

0x5191,	// (0x000aa2b7) mup3_control_keys_pane_g2

0x5199,	// (0x000aa2bf) mup3_control_keys_pane_g3

0x51a1,	// (0x000aa2c7) mup3_control_keys_pane_g4

0x0003,

0xf80e,	// (0x000b4934) mup3_control_keys_pane_g

0x0492,	// (0x000a55b8) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0492,	// (0x000a55b8) popup_toolbar2_fixed_window_cp01

0x4b97,	// (0x000a9cbd) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4b97,	// (0x000a9cbd) popup_toolbar2_fixed_window_cp02

0xafec,	// (0x000b0112) popup_call2_audio_second_window_t4_ParamLimits

0xafec,	// (0x000b0112) popup_call2_audio_second_window_t4

0xb526,	// (0x000b064c) popup_call2_audio_first_window_t6_ParamLimits

0xb526,	// (0x000b064c) popup_call2_audio_first_window_t6

0xb7bc,	// (0x000b08e2) popup_call2_audio_out_window_t6_ParamLimits

0xb7bc,	// (0x000b08e2) popup_call2_audio_out_window_t6

0x9575,	// (0x000ae69b) main_vitu_pane

0x51b1,	// (0x000aa2d7) aid_size_cell_itu_ParamLimits

0x51b1,	// (0x000aa2d7) aid_size_cell_itu

0xee42,	// (0x000b3f68) bg_popup_window_pane_cp08_ParamLimits

0xee42,	// (0x000b3f68) bg_popup_window_pane_cp08

0x51c7,	// (0x000aa2ed) field_vitu_entry_pane_ParamLimits

0x51c7,	// (0x000aa2ed) field_vitu_entry_pane

0x51de,	// (0x000aa304) grid_vitu_function_pane_ParamLimits

0x51de,	// (0x000aa304) grid_vitu_function_pane

0x51f9,	// (0x000aa31f) grid_vitu_itu_pane_ParamLimits

0x51f9,	// (0x000aa31f) grid_vitu_itu_pane

0x5217,	// (0x000aa33d) cell_vitu_itu_pane_ParamLimits

0x5217,	// (0x000aa33d) cell_vitu_itu_pane

0x5239,	// (0x000aa35f) cell_vitu_function_pane_ParamLimits

0x5239,	// (0x000aa35f) cell_vitu_function_pane

0xee42,	// (0x000b3f68) bg_popup_sub_pane_cp08_ParamLimits

0xee42,	// (0x000b3f68) bg_popup_sub_pane_cp08

0x5252,	// (0x000aa378) field_vitu_entry_pane_t1_ParamLimits

0x5252,	// (0x000aa378) field_vitu_entry_pane_t1

0xc6f1,	// (0x000b1817) field_vitu_entry_pane_t2_ParamLimits

0xc6f1,	// (0x000b1817) field_vitu_entry_pane_t2

0x0001,

0xf81c,	// (0x000b4942) field_vitu_entry_pane_t_ParamLimits

0xf81c,	// (0x000b4942) field_vitu_entry_pane_t

0xc70e,	// (0x000b1834) bg_button_pane_cp05_ParamLimits

0xc70e,	// (0x000b1834) bg_button_pane_cp05

0x5270,	// (0x000aa396) cell_vitu_itu_pane_g1

0x5288,	// (0x000aa3ae) cell_vitu_itu_pane_t1_ParamLimits

0x5288,	// (0x000aa3ae) cell_vitu_itu_pane_t1

0x529a,	// (0x000aa3c0) cell_vitu_itu_pane_t2_ParamLimits

0x529a,	// (0x000aa3c0) cell_vitu_itu_pane_t2

0x0002,

0xf821,	// (0x000b4947) cell_vitu_itu_pane_t_ParamLimits

0xf821,	// (0x000b4947) cell_vitu_itu_pane_t

0xc71c,	// (0x000b1842) bg_button_pane_cp07

0x52cf,	// (0x000aa3f5) cell_vitu_function_pane_g1

0x957f,	// (0x000ae6a5) main_calc_pane_g1

0x027d,	// (0x000a53a3) aid_visual_content_pane

0x9575,	// (0x000ae69b) main_vradio_pane

0x52d8,	// (0x000aa3fe) main_vradio_pane_g1_ParamLimits

0x52d8,	// (0x000aa3fe) main_vradio_pane_g1

0xc726,	// (0x000b184c) main_vradio_pane_g2_ParamLimits

0xc726,	// (0x000b184c) main_vradio_pane_g2

0x0001,

0xf828,	// (0x000b494e) main_vradio_pane_g_ParamLimits

0xf828,	// (0x000b494e) main_vradio_pane_g

0x52f1,	// (0x000aa417) main_vradio_pane_t1_ParamLimits

0x52f1,	// (0x000aa417) main_vradio_pane_t1

0x5306,	// (0x000aa42c) main_vradio_pane_t2_ParamLimits

0x5306,	// (0x000aa42c) main_vradio_pane_t2

0xc733,	// (0x000b1859) main_vradio_pane_t3_ParamLimits

0xc733,	// (0x000b1859) main_vradio_pane_t3

0x0002,

0xf82d,	// (0x000b4953) main_vradio_pane_t_ParamLimits

0xf82d,	// (0x000b4953) main_vradio_pane_t

0x531b,	// (0x000aa441) vradio_rocker_control_pane_ParamLimits

0x531b,	// (0x000aa441) vradio_rocker_control_pane

0x532d,	// (0x000aa453) vradio_station_info_pane_ParamLimits

0x532d,	// (0x000aa453) vradio_station_info_pane

0xc747,	// (0x000b186d) vradio_frequency_info_pane_ParamLimits

0xc747,	// (0x000b186d) vradio_frequency_info_pane

0xc090,	// (0x000b11b6) vradio_station_info_pane_g1

0xc756,	// (0x000b187c) vradio_station_info_pane_t1_ParamLimits

0xc756,	// (0x000b187c) vradio_station_info_pane_t1

0xc778,	// (0x000b189e) vradio_station_info_pane_t2_ParamLimits

0xc778,	// (0x000b189e) vradio_station_info_pane_t2

0x0001,

0xf834,	// (0x000b495a) vradio_station_info_pane_t_ParamLimits

0xf834,	// (0x000b495a) vradio_station_info_pane_t

0xc78a,	// (0x000b18b0) vradio_tuning_pane

0xc792,	// (0x000b18b8) vradio_rocker_control_pane_g1

0xc79a,	// (0x000b18c0) vradio_rocker_control_pane_g2

0xc7a2,	// (0x000b18c8) vradio_rocker_control_pane_g3

0xc7aa,	// (0x000b18d0) vradio_rocker_control_pane_g4

0xc7b2,	// (0x000b18d8) vradio_rocker_control_pane_g5

0x0004,

0xf839,	// (0x000b495f) vradio_rocker_control_pane_g

0x533f,	// (0x000aa465) vradio_frequency_info_pane_g1

0xc7ba,	// (0x000b18e0) vradio_frequency_info_pane_t1_ParamLimits

0xc7ba,	// (0x000b18e0) vradio_frequency_info_pane_t1

0x5349,	// (0x000aa46f) vradio_tuning_pane_g1

0x5354,	// (0x000aa47a) vradio_tuning_pane_t1

0x02da,	// (0x000a5400) area_side_right_pane_ParamLimits

0x02da,	// (0x000a5400) area_side_right_pane

0xbc37,	// (0x000b0d5d) status_small_pane_g1

0xbc3f,	// (0x000b0d65) status_small_pane_g2

0xbc48,	// (0x000b0d6e) status_small_pane_g3

0xbc51,	// (0x000b0d77) status_small_pane_g4

0x0003,

0xf5f4,	// (0x000b471a) status_small_pane_g

0xbc5a,	// (0x000b0d80) status_small_pane_t1

0x9575,	// (0x000ae69b) main_video3_pane

0xc7ce,	// (0x000b18f4) cams_zoom_vslider_pane

0xc7d6,	// (0x000b18fc) image3_wide_pane_ParamLimits

0xc7d6,	// (0x000b18fc) image3_wide_pane

0xc7f0,	// (0x000b1916) image3_wide_small_pane

0xc7fc,	// (0x000b1922) main_video3_pane_g1_ParamLimits

0xc7fc,	// (0x000b1922) main_video3_pane_g1

0xc818,	// (0x000b193e) main_video3_pane_g2_ParamLimits

0xc818,	// (0x000b193e) main_video3_pane_g2

0x0001,

0xf844,	// (0x000b496a) main_video3_pane_g_ParamLimits

0xf844,	// (0x000b496a) main_video3_pane_g

0xc834,	// (0x000b195a) main_video3_pane_t1_ParamLimits

0xc834,	// (0x000b195a) main_video3_pane_t1

0xc85f,	// (0x000b1985) main_video3_pane_t2_ParamLimits

0xc85f,	// (0x000b1985) main_video3_pane_t2

0xc88a,	// (0x000b19b0) main_video3_pane_t3_ParamLimits

0xc88a,	// (0x000b19b0) main_video3_pane_t3

0x0002,

0xf849,	// (0x000b496f) main_video3_pane_t_ParamLimits

0xf849,	// (0x000b496f) main_video3_pane_t

0xc8b7,	// (0x000b19dd) cams_zoom_vslider_pane_g1

0xc8c0,	// (0x000b19e6) cams_zoom_vslider_pane_g2

0x0001,

0xf850,	// (0x000b4976) cams_zoom_vslider_pane_g

0xc8c8,	// (0x000b19ee) small_slider_vertical_pane

0xc090,	// (0x000b11b6) small_slider_vertical_pane_g1

0xc090,	// (0x000b11b6) small_slider_vertical_pane_g2

0xc8d0,	// (0x000b19f6) small_slider_vertical_pane_g3

0x0002,

0xf855,	// (0x000b497b) small_slider_vertical_pane_g

0x9575,	// (0x000ae69b) main_hwr_training_pane

0xc8d9,	// (0x000b19ff) hwr_training_instruct_pane_ParamLimits

0xc8d9,	// (0x000b19ff) hwr_training_instruct_pane

0x5363,	// (0x000aa489) hwr_training_navi_pane_ParamLimits

0x5363,	// (0x000aa489) hwr_training_navi_pane

0x5382,	// (0x000aa4a8) hwr_training_write_pane_ParamLimits

0x5382,	// (0x000aa4a8) hwr_training_write_pane

0xe633,	// (0x000b3759) bg_frame_shadow_pane

0xc910,	// (0x000b1a36) hwr_training_write_pane_g1

0xc918,	// (0x000b1a3e) hwr_training_write_pane_g2

0xc920,	// (0x000b1a46) hwr_training_write_pane_g3

0xc928,	// (0x000b1a4e) hwr_training_write_pane_g4

0xc930,	// (0x000b1a56) hwr_training_write_pane_g5

0xc938,	// (0x000b1a5e) hwr_training_write_pane_g6

0xc940,	// (0x000b1a66) hwr_training_write_pane_g7

0x0006,

0xf85c,	// (0x000b4982) hwr_training_write_pane_g

0x9da8,	// (0x000aeece) hwr_training_navi_pane_g1_ParamLimits

0x9da8,	// (0x000aeece) hwr_training_navi_pane_g1

0x9dba,	// (0x000aeee0) hwr_training_navi_pane_g2_ParamLimits

0x9dba,	// (0x000aeee0) hwr_training_navi_pane_g2

0x9dcc,	// (0x000aeef2) hwr_training_navi_pane_g3_ParamLimits

0x9dcc,	// (0x000aeef2) hwr_training_navi_pane_g3

0x9ddc,	// (0x000aef02) hwr_training_navi_pane_g4_ParamLimits

0x9ddc,	// (0x000aef02) hwr_training_navi_pane_g4

0x0004,

0xf86b,	// (0x000b4991) hwr_training_navi_pane_g_ParamLimits

0xf86b,	// (0x000b4991) hwr_training_navi_pane_g

0x9de9,	// (0x000aef0f) hwr_training_navi_pane_t1

0x53ca,	// (0x000aa4f0) list_single_hwr_training_instruct_pane_ParamLimits

0x53ca,	// (0x000aa4f0) list_single_hwr_training_instruct_pane

0xc948,	// (0x000b1a6e) list_single_hwr_training_instruct_pane_t1

0xbfd0,	// (0x000b10f6) bg_frame_shadow_pane_g1

0xc957,	// (0x000b1a7d) bg_frame_shadow_pane_g2

0xc95f,	// (0x000b1a85) bg_frame_shadow_pane_g3

0xc967,	// (0x000b1a8d) bg_frame_shadow_pane_g4

0xc96f,	// (0x000b1a95) bg_frame_shadow_pane_g5

0xc977,	// (0x000b1a9d) bg_frame_shadow_pane_g6

0xc97f,	// (0x000b1aa5) bg_frame_shadow_pane_g7

0xee32,	// (0x000b3f58) bg_frame_shadow_pane_g8

0x0007,

0xf876,	// (0x000b499c) bg_frame_shadow_pane_g

0x9575,	// (0x000ae69b) main_video_tele_dialer_pane

0x53df,	// (0x000aa505) aid_size_cell_video_keypad_ParamLimits

0x53df,	// (0x000aa505) aid_size_cell_video_keypad

0x53f9,	// (0x000aa51f) grid_video_dialer_keypad_pane_ParamLimits

0x53f9,	// (0x000aa51f) grid_video_dialer_keypad_pane

0x5445,	// (0x000aa56b) video_down_pane_cp_ParamLimits

0x5445,	// (0x000aa56b) video_down_pane_cp

0x5477,	// (0x000aa59d) cell_video_dialer_keypad_pane_ParamLimits

0x5477,	// (0x000aa59d) cell_video_dialer_keypad_pane

0xc987,	// (0x000b1aad) bg_button_pane_cp08_ParamLimits

0xc987,	// (0x000b1aad) bg_button_pane_cp08

0x5499,	// (0x000aa5bf) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5499,	// (0x000aa5bf) cell_video_dialer_keypad_pane_g1

0x4b4d,	// (0x000a9c73) mup3_rocker2_pane_ParamLimits

0x4b4d,	// (0x000a9c73) mup3_rocker2_pane

0xc090,	// (0x000b11b6) mup3_rocker2_pane_g1

0x3656,	// (0x000a877c) main_dialer2_pane

0x9575,	// (0x000ae69b) main_mp4_pane

0x9e15,	// (0x000aef3b) main_mp4_pane_g1_ParamLimits

0x9e15,	// (0x000aef3b) main_mp4_pane_g1

0x9e15,	// (0x000aef3b) main_mp4_pane_g2_ParamLimits

0x9e15,	// (0x000aef3b) main_mp4_pane_g2

0x54d0,	// (0x000aa5f6) main_mp4_pane_g3_ParamLimits

0x54d0,	// (0x000aa5f6) main_mp4_pane_g3

0x9e23,	// (0x000aef49) main_mp4_pane_g4_ParamLimits

0x9e23,	// (0x000aef49) main_mp4_pane_g4

0x9e51,	// (0x000aef77) main_mp4_pane_g5_ParamLimits

0x9e51,	// (0x000aef77) main_mp4_pane_g5

0x0007,

0xf896,	// (0x000b49bc) main_mp4_pane_g_ParamLimits

0xf896,	// (0x000b49bc) main_mp4_pane_g

0x9ec5,	// (0x000aefeb) main_mp4_pane_t1_ParamLimits

0x9ec5,	// (0x000aefeb) main_mp4_pane_t1

0x9f21,	// (0x000af047) main_mp4_pane_t2_ParamLimits

0x9f21,	// (0x000af047) main_mp4_pane_t2

0xc993,	// (0x000b1ab9) main_mp4_pane_t3_ParamLimits

0xc993,	// (0x000b1ab9) main_mp4_pane_t3

0x9f73,	// (0x000af099) main_mp4_pane_t4_ParamLimits

0x9f73,	// (0x000af099) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000b49cd) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000b49cd) main_mp4_pane_t

0x9fb7,	// (0x000af0dd) mp4_progress_pane_ParamLimits

0x9fb7,	// (0x000af0dd) mp4_progress_pane

0xa001,	// (0x000af127) mp4_rocker_pane_ParamLimits

0xa001,	// (0x000af127) mp4_rocker_pane

0xc9c1,	// (0x000b1ae7) mp4_progress_pane_t1

0xc9da,	// (0x000b1b00) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000b49d6) mp4_progress_pane_t

0xc9f3,	// (0x000b1b19) mup_progress_pane_cp04

0xcb63,	// (0x000b1c89) mp4_rocker_pane_g1

0x550c,	// (0x000aa632) aid_cell_size_keypad2_ParamLimits

0x550c,	// (0x000aa632) aid_cell_size_keypad2

0x5522,	// (0x000aa648) dialer2_ne_pane_ParamLimits

0x5522,	// (0x000aa648) dialer2_ne_pane

0x553c,	// (0x000aa662) grid_dialer2_keypad_pane_ParamLimits

0x553c,	// (0x000aa662) grid_dialer2_keypad_pane

0xbe75,	// (0x000b0f9b) bg_popup_call_pane_cp07_ParamLimits

0xbe75,	// (0x000b0f9b) bg_popup_call_pane_cp07

0x5558,	// (0x000aa67e) dialer2_ne_pane_t1_ParamLimits

0x5558,	// (0x000aa67e) dialer2_ne_pane_t1

0x5593,	// (0x000aa6b9) cell_dialer2_keypad_pane_ParamLimits

0x5593,	// (0x000aa6b9) cell_dialer2_keypad_pane

0xca18,	// (0x000b1b3e) bg_button_pane_pane_cp04_ParamLimits

0xca18,	// (0x000b1b3e) bg_button_pane_pane_cp04

0x55b5,	// (0x000aa6db) cell_dialer2_keypad_pane_g1_ParamLimits

0x55b5,	// (0x000aa6db) cell_dialer2_keypad_pane_g1

0x13a8,	// (0x000a64ce) aid_placing_vt_set_content_ParamLimits

0x13a8,	// (0x000a64ce) aid_placing_vt_set_content

0x13d0,	// (0x000a64f6) aid_placing_vt_set_title_ParamLimits

0x13d0,	// (0x000a64f6) aid_placing_vt_set_title

0x9575,	// (0x000ae69b) main_image3_pane

0x567b,	// (0x000aa7a1) area_side_right_pane_cp01_ParamLimits

0x567b,	// (0x000aa7a1) area_side_right_pane_cp01

0x9e15,	// (0x000aef3b) main_image3_pane_g1_ParamLimits

0x9e15,	// (0x000aef3b) main_image3_pane_g1

0x5692,	// (0x000aa7b8) main_image3_pane_g2_ParamLimits

0x5692,	// (0x000aa7b8) main_image3_pane_g2

0x56ba,	// (0x000aa7e0) main_image3_pane_g3_ParamLimits

0x56ba,	// (0x000aa7e0) main_image3_pane_g3

0x56e4,	// (0x000aa80a) main_image3_pane_g4_ParamLimits

0x56e4,	// (0x000aa80a) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000b49e5) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000b49e5) main_image3_pane_g

0x570e,	// (0x000aa834) main_image3_pane_t1_ParamLimits

0x570e,	// (0x000aa834) main_image3_pane_t1

0x5766,	// (0x000aa88c) main_image3_pane_t2_ParamLimits

0x5766,	// (0x000aa88c) main_image3_pane_t2

0x57b8,	// (0x000aa8de) main_image3_pane_t3_ParamLimits

0x57b8,	// (0x000aa8de) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000b49ee) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000b49ee) main_image3_pane_t

0xee42,	// (0x000b3f68) grid_sctrl_middle_pane_cp01_ParamLimits

0xee42,	// (0x000b3f68) grid_sctrl_middle_pane_cp01

0x5840,	// (0x000aa966) cell_sctrl_middle_pane_cp01_ParamLimits

0x5840,	// (0x000aa966) cell_sctrl_middle_pane_cp01

0x585d,	// (0x000aa983) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x585d,	// (0x000aa983) cell_sctrl_middle_pane_cp01_g1

0x9575,	// (0x000ae69b) main_call4_pane

0x5873,	// (0x000aa999) aid_size_button_call4_ParamLimits

0x5873,	// (0x000aa999) aid_size_button_call4

0x58a6,	// (0x000aa9cc) call4_windows_pane_ParamLimits

0x58a6,	// (0x000aa9cc) call4_windows_pane

0x58c5,	// (0x000aa9eb) grid_call4_button_pane_ParamLimits

0x58c5,	// (0x000aa9eb) grid_call4_button_pane

0x58f8,	// (0x000aaa1e) call4_windows_conf_pane

0x590f,	// (0x000aaa35) popup_call4_audio_first_window_ParamLimits

0x590f,	// (0x000aaa35) popup_call4_audio_first_window

0x595f,	// (0x000aaa85) popup_call4_audio_second_window_ParamLimits

0x595f,	// (0x000aaa85) popup_call4_audio_second_window

0x5976,	// (0x000aaa9c) popup_call4_audio_wait_window_ParamLimits

0x5976,	// (0x000aaa9c) popup_call4_audio_wait_window

0x5984,	// (0x000aaaaa) cell_call4_button_pane_ParamLimits

0x5984,	// (0x000aaaaa) cell_call4_button_pane

0x59a9,	// (0x000aaacf) bg_button_pane_cp09_ParamLimits

0x59a9,	// (0x000aaacf) bg_button_pane_cp09

0x59b5,	// (0x000aaadb) cell_call4_button_pane_g1_ParamLimits

0x59b5,	// (0x000aaadb) cell_call4_button_pane_g1

0x59db,	// (0x000aab01) cell_call4_button_pane_t1_ParamLimits

0x59db,	// (0x000aab01) cell_call4_button_pane_t1

0xca2c,	// (0x000b1b52) popup_call4_audio_conf_window_ParamLimits

0xca2c,	// (0x000b1b52) popup_call4_audio_conf_window

0x4bad,	// (0x000a9cd3) mup3_progress_pane_t1_ParamLimits

0x4bcc,	// (0x000a9cf2) mup3_progress_pane_t2_ParamLimits

0xc3c6,	// (0x000b14ec) mup3_progress_pane_t3_ParamLimits

0xf798,	// (0x000b48be) mup3_progress_pane_t_ParamLimits

0xc3e3,	// (0x000b1509) mup_progress_pane_cp03_ParamLimits

0x51a9,	// (0x000aa2cf) mup3_control_keys_pane_g4_copy1

0x9fe5,	// (0x000af10b) mp4_rocker2_pane_ParamLimits

0x9fe5,	// (0x000af10b) mp4_rocker2_pane

0xca40,	// (0x000b1b66) mp4_rocker2_pane_g1

0xca48,	// (0x000b1b6e) mp4_rocker2_pane_g2

0xa085,	// (0x000af1ab) mp4_rocker2_pane_g3

0xa08d,	// (0x000af1b3) mp4_rocker2_pane_g4

0xa095,	// (0x000af1bb) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000b49f7) mp4_rocker2_pane_g

0x9575,	// (0x000ae69b) main_camera4_pane

0x9575,	// (0x000ae69b) main_video4_pane

0x5413,	// (0x000aa539) main_video_tele_dialer_pane_t1_ParamLimits

0x5413,	// (0x000aa539) main_video_tele_dialer_pane_t1

0x542c,	// (0x000aa552) main_video_tele_dialer_pane_t2_ParamLimits

0x542c,	// (0x000aa552) main_video_tele_dialer_pane_t2

0x0001,

0xf887,	// (0x000b49ad) main_video_tele_dialer_pane_t_ParamLimits

0xf887,	// (0x000b49ad) main_video_tele_dialer_pane_t

0x5a19,	// (0x000aab3f) cam4_autofocus_pane_ParamLimits

0x5a19,	// (0x000aab3f) cam4_autofocus_pane

0x5a2f,	// (0x000aab55) cam4_image_uncrop_pane_ParamLimits

0x5a2f,	// (0x000aab55) cam4_image_uncrop_pane

0x5a49,	// (0x000aab6f) cam4_indicators_pane_ParamLimits

0x5a49,	// (0x000aab6f) cam4_indicators_pane

0x5a74,	// (0x000aab9a) main_camera4_pane_g1_ParamLimits

0x5a74,	// (0x000aab9a) main_camera4_pane_g1

0x5a86,	// (0x000aabac) main_camera4_pane_g2_ParamLimits

0x5a86,	// (0x000aabac) main_camera4_pane_g2

0x5a99,	// (0x000aabbf) main_camera4_pane_g3_ParamLimits

0x5a99,	// (0x000aabbf) main_camera4_pane_g3

0x5aac,	// (0x000aabd2) main_camera4_pane_g4_ParamLimits

0x5aac,	// (0x000aabd2) main_camera4_pane_g4

0x5abf,	// (0x000aabe5) main_camera4_pane_g5_ParamLimits

0x5abf,	// (0x000aabe5) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000b4a02) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000b4a02) main_camera4_pane_g

0x5ae3,	// (0x000aac09) main_camera4_pane_t1_ParamLimits

0x5ae3,	// (0x000aac09) main_camera4_pane_t1

0xa0b9,	// (0x000af1df) bg_tb_trans_pane_cp06

0xa0cf,	// (0x000af1f5) cam4_indicators_pane_g1

0xa0e0,	// (0x000af206) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000b4a1d) cam4_indicators_pane_g

0xa0fe,	// (0x000af224) cam4_indicators_pane_t1

0x5b47,	// (0x000aac6d) main_video4_pane_g1_ParamLimits

0x5b47,	// (0x000aac6d) main_video4_pane_g1

0x5b56,	// (0x000aac7c) main_video4_pane_g2_ParamLimits

0x5b56,	// (0x000aac7c) main_video4_pane_g2

0x5b65,	// (0x000aac8b) main_video4_pane_g3_ParamLimits

0x5b65,	// (0x000aac8b) main_video4_pane_g3

0x5b74,	// (0x000aac9a) main_video4_pane_g4_ParamLimits

0x5b74,	// (0x000aac9a) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000b4a24) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000b4a24) main_video4_pane_g

0x5b92,	// (0x000aacb8) vid4_indicators_pane_ParamLimits

0x5b92,	// (0x000aacb8) vid4_indicators_pane

0x5bc0,	// (0x000aace6) video4_image_uncrop_cif_pane_ParamLimits

0x5bc0,	// (0x000aace6) video4_image_uncrop_cif_pane

0x5bda,	// (0x000aad00) video4_image_uncrop_nhd_pane_ParamLimits

0x5bda,	// (0x000aad00) video4_image_uncrop_nhd_pane

0x5a2f,	// (0x000aab55) video4_image_uncrop_vga_pane_ParamLimits

0x5a2f,	// (0x000aab55) video4_image_uncrop_vga_pane

0x9567,	// (0x000ae68d) bg_tb_trans_pane_cp07

0xa12a,	// (0x000af250) vid4_indicators_pane_g1

0xa13e,	// (0x000af264) vid4_indicators_pane_g2

0xa152,	// (0x000af278) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000b4a2f) vid4_indicators_pane_g

0xa181,	// (0x000af2a7) vid4_indicators_pane_t1

0x5bee,	// (0x000aad14) cam4_autofocus_pane_g1

0x5bf6,	// (0x000aad1c) cam4_autofocus_pane_g2

0x5bfe,	// (0x000aad24) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000b4a3a) cam4_autofocus_pane_g

0x5c06,	// (0x000aad2c) cam4_autofocus_pane_g3_copy1

0x545b,	// (0x000aa581) video_down_pane_cp_t1

0x5469,	// (0x000aa58f) video_down_pane_cp_t2

0x0001,

0xf88c,	// (0x000b49b2) video_down_pane_cp_t

0x9567,	// (0x000ae68d) popup_vitu2_window_ParamLimits

0x9567,	// (0x000ae68d) popup_vitu2_window

0x5c0e,	// (0x000aad34) aid_size_cell2_itu2_ParamLimits

0x5c0e,	// (0x000aad34) aid_size_cell2_itu2

0x5c34,	// (0x000aad5a) aid_size_cell_itu2_ParamLimits

0x5c34,	// (0x000aad5a) aid_size_cell_itu2

0x5c90,	// (0x000aadb6) bg_popup_window_pane_cp09_ParamLimits

0x5c90,	// (0x000aadb6) bg_popup_window_pane_cp09

0x5c9e,	// (0x000aadc4) field_vitu2_entry_pane_ParamLimits

0x5c9e,	// (0x000aadc4) field_vitu2_entry_pane

0x5cc4,	// (0x000aadea) grid_vitu2_function_pane_ParamLimits

0x5cc4,	// (0x000aadea) grid_vitu2_function_pane

0x5d15,	// (0x000aae3b) grid_vitu2_itu_pane_ParamLimits

0x5d15,	// (0x000aae3b) grid_vitu2_itu_pane

0x5dad,	// (0x000aaed3) cell_vitu2_itu_pane_ParamLimits

0x5dad,	// (0x000aaed3) cell_vitu2_itu_pane

0x5dd9,	// (0x000aaeff) cell_vitu2_function_pane_ParamLimits

0x5dd9,	// (0x000aaeff) cell_vitu2_function_pane

0xca50,	// (0x000b1b76) bg_popup_call_pane_cp08_ParamLimits

0xca50,	// (0x000b1b76) bg_popup_call_pane_cp08

0xca67,	// (0x000b1b8d) field_vitu2_entry_pane_g1

0xca73,	// (0x000b1b99) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000b4a41) field_vitu2_entry_pane_g

0x5e18,	// (0x000aaf3e) field_vitu2_entry_pane_t1_ParamLimits

0x5e18,	// (0x000aaf3e) field_vitu2_entry_pane_t1

0xca8d,	// (0x000b1bb3) field_vitu2_entry_pane_t2_ParamLimits

0xca8d,	// (0x000b1bb3) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000b4a48) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000b4a48) field_vitu2_entry_pane_t

0x5e46,	// (0x000aaf6c) bg_button_pane_cp010_ParamLimits

0x5e46,	// (0x000aaf6c) bg_button_pane_cp010

0xa198,	// (0x000af2be) cell_vitu2_itu_pane_g1

0x5e62,	// (0x000aaf88) cell_vitu2_itu_pane_t1_ParamLimits

0x5e62,	// (0x000aaf88) cell_vitu2_itu_pane_t1

0x0141,	// (0x000a5267) cell_vitu2_itu_pane_t2_ParamLimits

0x0141,	// (0x000a5267) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000b4a52) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000b4a52) cell_vitu2_itu_pane_t

0x9567,	// (0x000ae68d) bg_button_pane_cp011

0x5ec0,	// (0x000aafe6) cell_vitu2_function_pane_g1

0x9575,	// (0x000ae69b) main_myfav_hc_pane

0x5808,	// (0x000aa92e) popup_image3_note_pane_ParamLimits

0x5808,	// (0x000aa92e) popup_image3_note_pane

0x5824,	// (0x000aa94a) popup_image3_tool_bar_pane_ParamLimits

0x5824,	// (0x000aa94a) popup_image3_tool_bar_pane

0x01cf,	// (0x000a52f5) cell_vitu2_itu_pane_t3_ParamLimits

0x01cf,	// (0x000a52f5) cell_vitu2_itu_pane_t3

0xe633,	// (0x000b3759) bg_popup_trans_pane

0xcab2,	// (0x000b1bd8) grid_image3_tool_bar_pane

0xcabc,	// (0x000b1be2) bg_popup_trans_pane_g1

0x996c,	// (0x000aea92) bg_popup_trans_pane_g2

0xcac4,	// (0x000b1bea) bg_popup_trans_pane_g3

0xcacc,	// (0x000b1bf2) bg_popup_trans_pane_g4

0xcad4,	// (0x000b1bfa) bg_popup_trans_pane_g5

0xcadc,	// (0x000b1c02) bg_popup_trans_pane_g6

0xcae4,	// (0x000b1c0a) bg_popup_trans_pane_g7

0xcaec,	// (0x000b1c12) bg_popup_trans_pane_g8

0x994c,	// (0x000aea72) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000b4a59) bg_popup_trans_pane_g

0xcaf4,	// (0x000b1c1a) cell_image3_tool_bar_pane_ParamLimits

0xcaf4,	// (0x000b1c1a) cell_image3_tool_bar_pane

0xc090,	// (0x000b11b6) cell_image3_tool_bar_pane_g1

0xe633,	// (0x000b3759) bg_popup_trans_pane_cp1

0xcb08,	// (0x000b1c2e) popup_image3_note_pane_t1

0xcb16,	// (0x000b1c3c) popup_image3_note_pane_t2

0xcb24,	// (0x000b1c4a) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000b4a6c) popup_image3_note_pane_t

0xcb32,	// (0x000b1c58) popup_image3_note_pane_t3_copy1

0x5ed4,	// (0x000aaffa) bg_myfav_hc_instruction_pane_ParamLimits

0x5ed4,	// (0x000aaffa) bg_myfav_hc_instruction_pane

0x5ee8,	// (0x000ab00e) cell_myfav_contact_pane_ParamLimits

0x5ee8,	// (0x000ab00e) cell_myfav_contact_pane

0x5f06,	// (0x000ab02c) cell_myfav_contact_pane_cp1_ParamLimits

0x5f06,	// (0x000ab02c) cell_myfav_contact_pane_cp1

0x5f1e,	// (0x000ab044) cell_myfav_contact_pane_cp2_ParamLimits

0x5f1e,	// (0x000ab044) cell_myfav_contact_pane_cp2

0x5f36,	// (0x000ab05c) cell_myfav_contact_pane_cp3_ParamLimits

0x5f36,	// (0x000ab05c) cell_myfav_contact_pane_cp3

0x5f4d,	// (0x000ab073) cell_myfav_contact_pane_cp4_ParamLimits

0x5f4d,	// (0x000ab073) cell_myfav_contact_pane_cp4

0x5f65,	// (0x000ab08b) cell_myfav_contact_pane_cp5_ParamLimits

0x5f65,	// (0x000ab08b) cell_myfav_contact_pane_cp5

0x5f79,	// (0x000ab09f) cell_myfav_contact_pane_cp6_ParamLimits

0x5f79,	// (0x000ab09f) cell_myfav_contact_pane_cp6

0x5f8f,	// (0x000ab0b5) cell_myfav_contact_pane_cp7_ParamLimits

0x5f8f,	// (0x000ab0b5) cell_myfav_contact_pane_cp7

0xcb40,	// (0x000b1c66) listscroll_gen_pane_cp05

0x5fa9,	// (0x000ab0cf) main_myfav_hc_pane_g1_ParamLimits

0x5fa9,	// (0x000ab0cf) main_myfav_hc_pane_g1

0x5fc3,	// (0x000ab0e9) main_myfav_hc_pane_g2_ParamLimits

0x5fc3,	// (0x000ab0e9) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000b4a73) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000b4a73) main_myfav_hc_pane_g

0x5ff5,	// (0x000ab11b) main_myfav_hc_pane_t1_ParamLimits

0x5ff5,	// (0x000ab11b) main_myfav_hc_pane_t1

0xcb49,	// (0x000b1c6f) main_myfav_hc_pane_t2_ParamLimits

0xcb49,	// (0x000b1c6f) main_myfav_hc_pane_t2

0xcb7f,	// (0x000b1ca5) main_myfav_hc_pane_t3_ParamLimits

0xcb7f,	// (0x000b1ca5) main_myfav_hc_pane_t3

0x600c,	// (0x000ab132) main_myfav_hc_pane_t4_ParamLimits

0x600c,	// (0x000ab132) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000b4a7a) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000b4a7a) main_myfav_hc_pane_t

0xc090,	// (0x000b11b6) bg_myfav_hc_instruction_pane_g1

0xcb91,	// (0x000b1cb7) cell_myfav_contact_pane_g1_ParamLimits

0xcb91,	// (0x000b1cb7) cell_myfav_contact_pane_g1

0xcb91,	// (0x000b1cb7) cell_myfav_contact_pane_g2_ParamLimits

0xcb91,	// (0x000b1cb7) cell_myfav_contact_pane_g2

0xcb9d,	// (0x000b1cc3) cell_myfav_contact_pane_g3_ParamLimits

0xcb9d,	// (0x000b1cc3) cell_myfav_contact_pane_g3

0xc3b0,	// (0x000b14d6) cell_myfav_contact_pane_g4_ParamLimits

0xc3b0,	// (0x000b14d6) cell_myfav_contact_pane_g4

0xcbaa,	// (0x000b1cd0) cell_myfav_contact_pane_g5_ParamLimits

0xcbaa,	// (0x000b1cd0) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000b4a85) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000b4a85) cell_myfav_contact_pane_g

0x5fdd,	// (0x000ab103) main_myfav_hc_pane_g3_ParamLimits

0x5fdd,	// (0x000ab103) main_myfav_hc_pane_g3

0x03f4,	// (0x000a551a) popup_adpt_find_window

0x6034,	// (0x000ab15a) afind_page_pane_ParamLimits

0x6034,	// (0x000ab15a) afind_page_pane

0x6049,	// (0x000ab16f) aid_size_cell_afind_ParamLimits

0x6049,	// (0x000ab16f) aid_size_cell_afind

0x6067,	// (0x000ab18d) bg_popup_sub_pane_cp09_ParamLimits

0x6067,	// (0x000ab18d) bg_popup_sub_pane_cp09

0x6074,	// (0x000ab19a) find_pane_cp01_ParamLimits

0x6074,	// (0x000ab19a) find_pane_cp01

0xcbb6,	// (0x000b1cdc) grid_afind_control_pane_ParamLimits

0xcbb6,	// (0x000b1cdc) grid_afind_control_pane

0x6081,	// (0x000ab1a7) grid_afind_pane_ParamLimits

0x6081,	// (0x000ab1a7) grid_afind_pane

0x60a3,	// (0x000ab1c9) cell_afind_pane_ParamLimits

0x60a3,	// (0x000ab1c9) cell_afind_pane

0xc090,	// (0x000b11b6) afind_page_pane_g1

0x610a,	// (0x000ab230) afind_page_pane_g2

0x6113,	// (0x000ab239) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000b4a90) afind_page_pane_g

0x611c,	// (0x000ab242) afind_page_pane_t1

0xcbca,	// (0x000b1cf0) cell_afind_grid_control_pane_ParamLimits

0xcbca,	// (0x000b1cf0) cell_afind_grid_control_pane

0xca18,	// (0x000b1b3e) bg_button_pane_cp69_ParamLimits

0xca18,	// (0x000b1b3e) bg_button_pane_cp69

0x613c,	// (0x000ab262) cell_afind_pane_g1_ParamLimits

0x613c,	// (0x000ab262) cell_afind_pane_g1

0x6149,	// (0x000ab26f) cell_afind_pane_t1_ParamLimits

0x6149,	// (0x000ab26f) cell_afind_pane_t1

0x9765,	// (0x000ae88b) bg_button_pane_cp72

0xcbd9,	// (0x000b1cff) cell_afind_grid_control_pane_g1

0x3104,	// (0x000a822a) aid_image_placing_area_ParamLimits

0x3104,	// (0x000a822a) aid_image_placing_area

0xc6d9,	// (0x000b17ff) field_vitu_entry_pane_g1_ParamLimits

0xc6d9,	// (0x000b17ff) field_vitu_entry_pane_g1

0xc6e5,	// (0x000b180b) field_vitu_entry_pane_g2_ParamLimits

0xc6e5,	// (0x000b180b) field_vitu_entry_pane_g2

0x0001,

0xf817,	// (0x000b493d) field_vitu_entry_pane_g_ParamLimits

0xf817,	// (0x000b493d) field_vitu_entry_pane_g

0x5270,	// (0x000aa396) cell_vitu_itu_pane_g1_ParamLimits

0x52b2,	// (0x000aa3d8) cell_vitu_itu_pane_t3_ParamLimits

0x52b2,	// (0x000aa3d8) cell_vitu_itu_pane_t3

0xc9c1,	// (0x000b1ae7) mp4_progress_pane_t1_ParamLimits

0xc9da,	// (0x000b1b00) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000b49d6) mp4_progress_pane_t_ParamLimits

0xc9f3,	// (0x000b1b19) mup_progress_pane_cp04_ParamLimits

0x6020,	// (0x000ab146) main_myfav_hc_pane_t5_ParamLimits

0x6020,	// (0x000ab146) main_myfav_hc_pane_t5

0x0291,	// (0x000a53b7) aid_zoom_text_primary

0x03f4,	// (0x000a551a) popup_adpt_find_window_ParamLimits

0x9567,	// (0x000ae68d) main_cam_set_pane

0x5a60,	// (0x000aab86) cam4_zoom_pane_ParamLimits

0x5a60,	// (0x000aab86) cam4_zoom_pane

0x615b,	// (0x000ab281) main_cam_set_pane_g1_ParamLimits

0x615b,	// (0x000ab281) main_cam_set_pane_g1

0x6169,	// (0x000ab28f) main_cam_set_pane_g2_ParamLimits

0x6169,	// (0x000ab28f) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000b4a97) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000b4a97) main_cam_set_pane_g

0x618a,	// (0x000ab2b0) main_cam_set_pane_t1_ParamLimits

0x618a,	// (0x000ab2b0) main_cam_set_pane_t1

0x61a5,	// (0x000ab2cb) main_cset_listscroll_pane_ParamLimits

0x61a5,	// (0x000ab2cb) main_cset_listscroll_pane

0x61c5,	// (0x000ab2eb) main_cset_slider_pane_ParamLimits

0x61c5,	// (0x000ab2eb) main_cset_slider_pane

0xcbea,	// (0x000b1d10) main_cset_list_pane_ParamLimits

0xcbea,	// (0x000b1d10) main_cset_list_pane

0xcbfa,	// (0x000b1d20) scroll_pane_cp028

0x61eb,	// (0x000ab311) aid_area_touch_slider

0x6207,	// (0x000ab32d) cset_slider_pane

0x6231,	// (0x000ab357) main_cset_slider_pane_g1

0x6246,	// (0x000ab36c) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000b4a9c) main_cset_slider_pane_g

0xcc33,	// (0x000b1d59) main_cset_slider_pane_t1

0x6302,	// (0x000ab428) main_cset_slider_pane_t2

0x631c,	// (0x000ab442) main_cset_slider_pane_t3

0x6336,	// (0x000ab45c) main_cset_slider_pane_t4

0x6350,	// (0x000ab476) main_cset_slider_pane_t5

0x636a,	// (0x000ab490) main_cset_slider_pane_t6

0x637f,	// (0x000ab4a5) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000b4ac1) main_cset_slider_pane_t

0x6483,	// (0x000ab5a9) cset_list_set_pane_ParamLimits

0x6483,	// (0x000ab5a9) cset_list_set_pane

0x6495,	// (0x000ab5bb) aid_position_infowindow_above

0x649d,	// (0x000ab5c3) aid_position_infowindow_below

0xee50,	// (0x000b3f76) cset_list_set_pane_g1_ParamLimits

0xee50,	// (0x000b3f76) cset_list_set_pane_g1

0xccd3,	// (0x000b1df9) cset_list_set_pane_g3_ParamLimits

0xccd3,	// (0x000b1df9) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000b4ae0) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000b4ae0) cset_list_set_pane_g

0xcce2,	// (0x000b1e08) cset_list_set_pane_t1_ParamLimits

0xcce2,	// (0x000b1e08) cset_list_set_pane_t1

0xee42,	// (0x000b3f68) list_highlight_pane_cp021_ParamLimits

0xee42,	// (0x000b3f68) list_highlight_pane_cp021

0xa9ae,	// (0x000afad4) cset_slider_pane_g1

0xa9c0,	// (0x000afae6) cset_slider_pane_g2

0xa9b7,	// (0x000afadd) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000b4ae5) cset_slider_pane_g

0xa1aa,	// (0x000af2d0) aid_area_touch_cam4_zoom

0xa1b2,	// (0x000af2d8) cam4_zoom_cont_pane

0xa1ba,	// (0x000af2e0) cam4_zoom_pane_g1

0xa1c2,	// (0x000af2e8) cam4_zoom_pane_g2

0x64a5,	// (0x000ab5cb) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000b4aec) cam4_zoom_pane_g

0xa1ca,	// (0x000af2f0) cam4_zoom_cont_pane_g1

0xa1d3,	// (0x000af2f9) cam4_zoom_cont_pane_g2

0xa1dc,	// (0x000af302) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000b4af3) cam4_zoom_cont_pane_g

0x5891,	// (0x000aa9b7) call4_image_pane_ParamLimits

0x5891,	// (0x000aa9b7) call4_image_pane

0x58f8,	// (0x000aaa1e) call4_windows_conf_pane_ParamLimits

0x593d,	// (0x000aaa63) popup_call4_audio_in_window_ParamLimits

0x593d,	// (0x000aaa63) popup_call4_audio_in_window

0xe633,	// (0x000b3759) bg_popup_call2_act_pane_cp02

0xca24,	// (0x000b1b4a) call4_list_conf_pane

0xc090,	// (0x000b11b6) call4_image_pane_g1

0xc090,	// (0x000b11b6) call4_image_pane_g2

0x0001,

0xf6d8,	// (0x000b47fe) call4_image_pane_g

0xccf7,	// (0x000b1e1d) list_single_graphic_popup_conf4_pane_ParamLimits

0xccf7,	// (0x000b1e1d) list_single_graphic_popup_conf4_pane

0xe633,	// (0x000b3759) list_highlight_pane_cp022

0xcd0a,	// (0x000b1e30) list_single_graphic_popup_conf4_pane_g1

0xa57f,	// (0x000af6a5) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000b4afa) list_single_graphic_popup_conf4_pane_g

0xcd12,	// (0x000b1e38) list_single_graphic_popup_conf4_pane_t1

0x14f4,	// (0x000a661a) popup_vtel_slider_window_ParamLimits

0x14f4,	// (0x000a661a) popup_vtel_slider_window

0xca06,	// (0x000b1b2c) dialer2_ne_pane_t2_ParamLimits

0xca06,	// (0x000b1b2c) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000b49db) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000b49db) dialer2_ne_pane_t

0xbe75,	// (0x000b0f9b) bg_popup_sub_pane_cp010_ParamLimits

0xbe75,	// (0x000b0f9b) bg_popup_sub_pane_cp010

0x64ad,	// (0x000ab5d3) popup_vtel_slider_window_g1_ParamLimits

0x64ad,	// (0x000ab5d3) popup_vtel_slider_window_g1

0x64c0,	// (0x000ab5e6) popup_vtel_slider_window_g2_ParamLimits

0x64c0,	// (0x000ab5e6) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000b4aff) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000b4aff) popup_vtel_slider_window_g

0x6516,	// (0x000ab63c) vtel_slider_pane_ParamLimits

0x6516,	// (0x000ab63c) vtel_slider_pane

0x6538,	// (0x000ab65e) vtel_slider_pane_g1_ParamLimits

0x6538,	// (0x000ab65e) vtel_slider_pane_g1

0x654c,	// (0x000ab672) vtel_slider_pane_g2_ParamLimits

0x654c,	// (0x000ab672) vtel_slider_pane_g2

0x6564,	// (0x000ab68a) vtel_slider_pane_g3_ParamLimits

0x6564,	// (0x000ab68a) vtel_slider_pane_g3

0x6538,	// (0x000ab65e) vtel_slider_pane_g4_ParamLimits

0x6538,	// (0x000ab65e) vtel_slider_pane_g4

0x657a,	// (0x000ab6a0) vtel_slider_pane_g5_ParamLimits

0x657a,	// (0x000ab6a0) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000b4b08) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000b4b08) vtel_slider_pane_g

0x9567,	// (0x000ae68d) main_gallery2_pane

0x5c60,	// (0x000aad86) aid_size_row_itut2_dropdow_list_ParamLimits

0x5c60,	// (0x000aad86) aid_size_row_itut2_dropdow_list

0x5cec,	// (0x000aae12) grid_vitu2_function_top_pane_ParamLimits

0x5cec,	// (0x000aae12) grid_vitu2_function_top_pane

0x5d56,	// (0x000aae7c) popup_vitu2_dropdown_list_window_ParamLimits

0x5d56,	// (0x000aae7c) popup_vitu2_dropdown_list_window

0x5d7f,	// (0x000aaea5) popup_vitu2_match_list_window

0x659e,	// (0x000ab6c4) cell_vitu2_function_top_pane_ParamLimits

0x659e,	// (0x000ab6c4) cell_vitu2_function_top_pane

0x65b6,	// (0x000ab6dc) cell_vitu2_function_top_pane_cp01_ParamLimits

0x65b6,	// (0x000ab6dc) cell_vitu2_function_top_pane_cp01

0x65d2,	// (0x000ab6f8) cell_vitu2_function_top_wide_pane_ParamLimits

0x65d2,	// (0x000ab6f8) cell_vitu2_function_top_wide_pane

0x9567,	// (0x000ae68d) bg_button_pane_cp012

0x65ee,	// (0x000ab714) cell_vitu2_function_top_pane_g1

0xa1e5,	// (0x000af30b) bg_button_pane_cp013_ParamLimits

0xa1e5,	// (0x000af30b) bg_button_pane_cp013

0x6602,	// (0x000ab728) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6602,	// (0x000ab728) cell_vitu2_function_top_wide_pane_g1

0x9567,	// (0x000ae68d) bg_popup_sub_pane_cp20

0x661a,	// (0x000ab740) list_vitu2_match_list_pane

0xcabc,	// (0x000b1be2) bg_popup_sub_pane_cp20_g1

0xcac4,	// (0x000b1bea) bg_popup_sub_pane_cp20_g2

0x996c,	// (0x000aea92) bg_popup_sub_pane_cp20_g3

0xcacc,	// (0x000b1bf2) bg_popup_sub_pane_cp20_g4

0x994c,	// (0x000aea72) bg_popup_sub_pane_cp20_g5

0xcd28,	// (0x000b1e4e) bg_popup_sub_pane_cp20_g6

0xcadc,	// (0x000b1c02) bg_popup_sub_pane_cp20_g7

0xcae4,	// (0x000b1c0a) bg_popup_sub_pane_cp20_g8

0xcaec,	// (0x000b1c12) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000b4b13) bg_popup_sub_pane_cp20_g

0xa201,	// (0x000af327) list_vitu2_match_list_item_pane_ParamLimits

0xa201,	// (0x000af327) list_vitu2_match_list_item_pane

0xa213,	// (0x000af339) list_vitu2_match_list_item_pane_t1

0x9575,	// (0x000ae69b) bg_popup_sub_pane_cp21

0xa221,	// (0x000af347) grid_vitu2_dropdown_list_pane

0x6688,	// (0x000ab7ae) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6688,	// (0x000ab7ae) cell_vitu2_dropdown_list_char_pane

0x66a9,	// (0x000ab7cf) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x66a9,	// (0x000ab7cf) cell_vitu2_dropdown_list_ctrl_pane

0xcd30,	// (0x000b1e56) cell_vitu2_dropdown_list_char_pane_g1

0xcd39,	// (0x000b1e5f) cell_vitu2_dropdown_list_char_pane_g2

0xcd42,	// (0x000b1e68) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000b4b30) cell_vitu2_dropdown_list_char_pane_g

0x66d5,	// (0x000ab7fb) cell_vitu2_dropdown_list_char_pane_t1

0x66e3,	// (0x000ab809) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x66e3,	// (0x000ab809) cell_vitu2_dropdown_list_ctrl_pane_g1

0x66f0,	// (0x000ab816) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x66f0,	// (0x000ab816) cell_vitu2_dropdown_list_ctrl_pane_g2

0x66fd,	// (0x000ab823) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x66fd,	// (0x000ab823) cell_vitu2_dropdown_list_ctrl_pane_g3

0x670a,	// (0x000ab830) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x670a,	// (0x000ab830) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa0b9,	// (0x000af1df) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa0b9,	// (0x000af1df) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000b4b37) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000b4b37) cell_vitu2_dropdown_list_ctrl_pane_g

0x6726,	// (0x000ab84c) aid_size_cell_gallery2_ParamLimits

0x6726,	// (0x000ab84c) aid_size_cell_gallery2

0x6744,	// (0x000ab86a) grid_gallery2_pane_ParamLimits

0x6744,	// (0x000ab86a) grid_gallery2_pane

0x675e,	// (0x000ab884) scroll_pane_cp029_ParamLimits

0x675e,	// (0x000ab884) scroll_pane_cp029

0x676f,	// (0x000ab895) cell_gallery2_pane_ParamLimits

0x676f,	// (0x000ab895) cell_gallery2_pane

0xcd4b,	// (0x000b1e71) cell_gallery2_pane_g2

0x67ce,	// (0x000ab8f4) cell_gallery2_pane_g3

0xcd53,	// (0x000b1e79) cell_gallery2_pane_g4

0xcd5b,	// (0x000b1e81) cell_gallery2_pane_g5

0x9709,	// (0x000ae82f) grid_highlight_pane_cp10

0x5d7f,	// (0x000aaea5) popup_vitu2_match_list_window_ParamLimits

0x5d96,	// (0x000aaebc) popup_vitu2_query_window_ParamLimits

0x5d96,	// (0x000aaebc) popup_vitu2_query_window

0x9575,	// (0x000ae69b) bg_vitu2_candi_button_pane

0xcd30,	// (0x000b1e56) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcd39,	// (0x000b1e5f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcd42,	// (0x000b1e68) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x67d6,	// (0x000ab8fc) bg_button_pane_cp015

0x67e8,	// (0x000ab90e) bg_button_pane_cp016

0x67fb,	// (0x000ab921) bg_button_pane_cp017

0xbc7c,	// (0x000b0da2) bg_popup_sub_pane_cp22

0xcd63,	// (0x000b1e89) popup_vitu2_query_window_g1

0x6840,	// (0x000ab966) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000b4b42) popup_vitu2_query_window_g

0x685f,	// (0x000ab985) popup_vitu2_query_window_t1_ParamLimits

0x685f,	// (0x000ab985) popup_vitu2_query_window_t1

0x6894,	// (0x000ab9ba) popup_vitu2_query_window_t2_ParamLimits

0x6894,	// (0x000ab9ba) popup_vitu2_query_window_t2

0x68a6,	// (0x000ab9cc) popup_vitu2_query_window_t3_ParamLimits

0x68a6,	// (0x000ab9cc) popup_vitu2_query_window_t3

0x68ce,	// (0x000ab9f4) popup_vitu2_query_window_t4_ParamLimits

0x68ce,	// (0x000ab9f4) popup_vitu2_query_window_t4

0x68ef,	// (0x000aba15) popup_vitu2_query_window_t5_ParamLimits

0x68ef,	// (0x000aba15) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000b4b49) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000b4b49) popup_vitu2_query_window_t

0xcbe2,	// (0x000b1d08) main_cset_text_pane

0x61eb,	// (0x000ab311) aid_area_touch_slider_ParamLimits

0x6207,	// (0x000ab32d) cset_slider_pane_ParamLimits

0x6231,	// (0x000ab357) main_cset_slider_pane_g1_ParamLimits

0x6246,	// (0x000ab36c) main_cset_slider_pane_g2_ParamLimits

0xcc03,	// (0x000b1d29) main_cset_slider_pane_g3_ParamLimits

0xcc03,	// (0x000b1d29) main_cset_slider_pane_g3

0x625b,	// (0x000ab381) main_cset_slider_pane_g4_ParamLimits

0x625b,	// (0x000ab381) main_cset_slider_pane_g4

0x626a,	// (0x000ab390) main_cset_slider_pane_g5_ParamLimits

0x626a,	// (0x000ab390) main_cset_slider_pane_g5

0x6276,	// (0x000ab39c) main_cset_slider_pane_g6_ParamLimits

0x6276,	// (0x000ab39c) main_cset_slider_pane_g6

0xf976,	// (0x000b4a9c) main_cset_slider_pane_g_ParamLimits

0xcc33,	// (0x000b1d59) main_cset_slider_pane_t1_ParamLimits

0x6302,	// (0x000ab428) main_cset_slider_pane_t2_ParamLimits

0x631c,	// (0x000ab442) main_cset_slider_pane_t3_ParamLimits

0x6336,	// (0x000ab45c) main_cset_slider_pane_t4_ParamLimits

0x6350,	// (0x000ab476) main_cset_slider_pane_t5_ParamLimits

0x636a,	// (0x000ab490) main_cset_slider_pane_t6_ParamLimits

0x637f,	// (0x000ab4a5) main_cset_slider_pane_t7_ParamLimits

0x63a9,	// (0x000ab4cf) main_cset_slider_pane_t8_ParamLimits

0x63a9,	// (0x000ab4cf) main_cset_slider_pane_t8

0x63d1,	// (0x000ab4f7) main_cset_slider_pane_t9_ParamLimits

0x63d1,	// (0x000ab4f7) main_cset_slider_pane_t9

0x63f9,	// (0x000ab51f) main_cset_slider_pane_t10_ParamLimits

0x63f9,	// (0x000ab51f) main_cset_slider_pane_t10

0x6421,	// (0x000ab547) main_cset_slider_pane_t11_ParamLimits

0x6421,	// (0x000ab547) main_cset_slider_pane_t11

0x6449,	// (0x000ab56f) main_cset_slider_pane_t12_ParamLimits

0x6449,	// (0x000ab56f) main_cset_slider_pane_t12

0x6466,	// (0x000ab58c) main_cset_slider_pane_t13_ParamLimits

0x6466,	// (0x000ab58c) main_cset_slider_pane_t13

0xf99b,	// (0x000b4ac1) main_cset_slider_pane_t_ParamLimits

0xe633,	// (0x000b3759) bg_popup_sub_pane_cp011

0xcd6f,	// (0x000b1e95) main_cset_text_pane_g1

0xcd77,	// (0x000b1e9d) main_cset_text_pane_t1

0xcd85,	// (0x000b1eab) main_cset_text_pane_t2

0xcd93,	// (0x000b1eb9) main_cset_text_pane_t3

0xcda1,	// (0x000b1ec7) main_cset_text_pane_t4

0xcdaf,	// (0x000b1ed5) main_cset_text_pane_t5

0xcdbd,	// (0x000b1ee3) main_cset_text_pane_t6

0xcdcb,	// (0x000b1ef1) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000b4b58) main_cset_text_pane_t

0x9575,	// (0x000ae69b) main_cam4_burst_pane

0x9575,	// (0x000ae69b) main_cam5_pane

0x612a,	// (0x000ab250) bg_button_pane_cp019

0x6133,	// (0x000ab259) bg_button_pane_cp020

0xcc0f,	// (0x000b1d35) main_cset_slider_pane_g7_ParamLimits

0xcc0f,	// (0x000b1d35) main_cset_slider_pane_g7

0xcc1b,	// (0x000b1d41) main_cset_slider_pane_g8_ParamLimits

0xcc1b,	// (0x000b1d41) main_cset_slider_pane_g8

0x628a,	// (0x000ab3b0) main_cset_slider_pane_g9_ParamLimits

0x628a,	// (0x000ab3b0) main_cset_slider_pane_g9

0x6296,	// (0x000ab3bc) main_cset_slider_pane_g10_ParamLimits

0x6296,	// (0x000ab3bc) main_cset_slider_pane_g10

0x62a2,	// (0x000ab3c8) main_cset_slider_pane_g11_ParamLimits

0x62a2,	// (0x000ab3c8) main_cset_slider_pane_g11

0x62ae,	// (0x000ab3d4) main_cset_slider_pane_g12_ParamLimits

0x62ae,	// (0x000ab3d4) main_cset_slider_pane_g12

0x62ba,	// (0x000ab3e0) main_cset_slider_pane_g13_ParamLimits

0x62ba,	// (0x000ab3e0) main_cset_slider_pane_g13

0x62c6,	// (0x000ab3ec) main_cset_slider_pane_g14_ParamLimits

0x62c6,	// (0x000ab3ec) main_cset_slider_pane_g14

0x62d2,	// (0x000ab3f8) main_cset_slider_pane_g15_ParamLimits

0x62d2,	// (0x000ab3f8) main_cset_slider_pane_g15

0xcc61,	// (0x000b1d87) main_cset_slider_pane_t14_ParamLimits

0xcc61,	// (0x000b1d87) main_cset_slider_pane_t14

0xcc9a,	// (0x000b1dc0) main_cset_slider_pane_t15_ParamLimits

0xcc9a,	// (0x000b1dc0) main_cset_slider_pane_t15

0x6966,	// (0x000aba8c) aid_cam4_burst_size_cell_ParamLimits

0x6966,	// (0x000aba8c) aid_cam4_burst_size_cell

0x6986,	// (0x000abaac) grid_cam4_burst_pane_ParamLimits

0x6986,	// (0x000abaac) grid_cam4_burst_pane

0x69be,	// (0x000abae4) linegrid_cam4_burst_pane_ParamLimits

0x69be,	// (0x000abae4) linegrid_cam4_burst_pane

0xcdd9,	// (0x000b1eff) scroll_pane_cp30_ParamLimits

0xcdd9,	// (0x000b1eff) scroll_pane_cp30

0x69e2,	// (0x000abb08) cell_cam4_burst_pane_ParamLimits

0x69e2,	// (0x000abb08) cell_cam4_burst_pane

0xcde5,	// (0x000b1f0b) linegrid_cam4_burst_pane_g1_ParamLimits

0xcde5,	// (0x000b1f0b) linegrid_cam4_burst_pane_g1

0x6a2f,	// (0x000abb55) linegrid_cam4_burst_pane_g2_ParamLimits

0x6a2f,	// (0x000abb55) linegrid_cam4_burst_pane_g2

0xcdf2,	// (0x000b1f18) linegrid_cam4_burst_pane_g3_ParamLimits

0xcdf2,	// (0x000b1f18) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000b4b67) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000b4b67) linegrid_cam4_burst_pane_g

0x6a40,	// (0x000abb66) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6a40,	// (0x000abb66) linegrid_cam4_burst_pane_g3_copy1

0xcdff,	// (0x000b1f25) linegrid_cam4_burst_pane_g4_ParamLimits

0xcdff,	// (0x000b1f25) linegrid_cam4_burst_pane_g4

0x6a5a,	// (0x000abb80) linegrid_cam4_burst_pane_g5_ParamLimits

0x6a5a,	// (0x000abb80) linegrid_cam4_burst_pane_g5

0x6a6b,	// (0x000abb91) linegrid_cam4_burst_pane_g6_ParamLimits

0x6a6b,	// (0x000abb91) linegrid_cam4_burst_pane_g6

0xce0c,	// (0x000b1f32) linegrid_cam4_burst_pane_g7_ParamLimits

0xce0c,	// (0x000b1f32) linegrid_cam4_burst_pane_g7

0x6a82,	// (0x000abba8) cell_cam4_burst_pane_g1

0xce25,	// (0x000b1f4b) main_cam5_pane_t1_ParamLimits

0xce25,	// (0x000b1f4b) main_cam5_pane_t1

0xce37,	// (0x000b1f5d) main_cam5_pane_t2_ParamLimits

0xce37,	// (0x000b1f5d) main_cam5_pane_t2

0xce49,	// (0x000b1f6f) main_cam5_pane_t3_ParamLimits

0xce49,	// (0x000b1f6f) main_cam5_pane_t3

0xce5b,	// (0x000b1f81) main_cam5_pane_t4_ParamLimits

0xce5b,	// (0x000b1f81) main_cam5_pane_t4

0xce73,	// (0x000b1f99) main_cam5_pane_t5_ParamLimits

0xce73,	// (0x000b1f99) main_cam5_pane_t5

0xce87,	// (0x000b1fad) main_cam5_pane_t6_ParamLimits

0xce87,	// (0x000b1fad) main_cam5_pane_t6

0xce9b,	// (0x000b1fc1) main_cam5_pane_t7_ParamLimits

0xce9b,	// (0x000b1fc1) main_cam5_pane_t7

0xcead,	// (0x000b1fd3) main_cam5_pane_t8_ParamLimits

0xcead,	// (0x000b1fd3) main_cam5_pane_t8

0xcec9,	// (0x000b1fef) main_cam5_pane_t9_ParamLimits

0xcec9,	// (0x000b1fef) main_cam5_pane_t9

0xcedb,	// (0x000b2001) main_cam5_pane_t10_ParamLimits

0xcedb,	// (0x000b2001) main_cam5_pane_t10

0xceed,	// (0x000b2013) main_cam5_pane_t11_ParamLimits

0xceed,	// (0x000b2013) main_cam5_pane_t11

0xceff,	// (0x000b2025) main_cam5_pane_t12_ParamLimits

0xceff,	// (0x000b2025) main_cam5_pane_t12

0xcf14,	// (0x000b203a) main_cam5_pane_t13_ParamLimits

0xcf14,	// (0x000b203a) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000b4b73) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000b4b73) main_cam5_pane_t

0x0476,	// (0x000a559c) popup_scut_keymap_window_ParamLimits

0x0476,	// (0x000a559c) popup_scut_keymap_window

0x6a95,	// (0x000abbbb) aid_size_cell_brow_shortcut

0x9709,	// (0x000ae82f) bg_popup_window_pane_cp010

0x6aa1,	// (0x000abbc7) grid_scut_pane

0x6aad,	// (0x000abbd3) cell_scut_pane_ParamLimits

0x6aad,	// (0x000abbd3) cell_scut_pane

0x6ac4,	// (0x000abbea) cell_scut_pane_g1

0xcf31,	// (0x000b2057) cell_scut_pane_t1

0xcf40,	// (0x000b2066) cell_scut_pane_t2

0x6acd,	// (0x000abbf3) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000b4b8e) cell_scut_pane_t

0x4766,	// (0x000a988c) main_mup3_pane_g8_ParamLimits

0x4766,	// (0x000a988c) main_mup3_pane_g8

0x5c78,	// (0x000aad9e) area_vitu2_query_pane_ParamLimits

0x5c78,	// (0x000aad9e) area_vitu2_query_pane

0x680e,	// (0x000ab934) input_focus_pane_cp08

0xcf4f,	// (0x000b2075) area_vitu2_query_pane_g1

0x6adb,	// (0x000abc01) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000b4b95) area_vitu2_query_pane_g

0x6aec,	// (0x000abc12) area_vitu2_query_pane_t1_ParamLimits

0x6aec,	// (0x000abc12) area_vitu2_query_pane_t1

0x6b00,	// (0x000abc26) area_vitu2_query_pane_t2_ParamLimits

0x6b00,	// (0x000abc26) area_vitu2_query_pane_t2

0x6b14,	// (0x000abc3a) area_vitu2_query_pane_t3_ParamLimits

0x6b14,	// (0x000abc3a) area_vitu2_query_pane_t3

0xcf5b,	// (0x000b2081) area_vitu2_query_pane_t4_ParamLimits

0xcf5b,	// (0x000b2081) area_vitu2_query_pane_t4

0xcf83,	// (0x000b20a9) area_vitu2_query_pane_t5_ParamLimits

0xcf83,	// (0x000b20a9) area_vitu2_query_pane_t5

0xcfab,	// (0x000b20d1) area_vitu2_query_pane_t6_ParamLimits

0xcfab,	// (0x000b20d1) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000b4b9a) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000b4b9a) area_vitu2_query_pane_t

0x6b3c,	// (0x000abc62) bg_button_pane_cp018

0x6b4a,	// (0x000abc70) bg_button_pane_cp021

0x6b56,	// (0x000abc7c) bg_button_pane_cp022

0x6b65,	// (0x000abc8b) input_focus_pane_cp09

0xa6bb,	// (0x000af7e1) aid_size_touch_mv_arrow_left

0xa6e4,	// (0x000af80a) aid_size_touch_mv_arrow_right

0x62ea,	// (0x000ab410) main_cset_slider_pane_g16_ParamLimits

0x62ea,	// (0x000ab410) main_cset_slider_pane_g16

0x62f6,	// (0x000ab41c) main_cset_slider_pane_g17_ParamLimits

0x62f6,	// (0x000ab41c) main_cset_slider_pane_g17

0x6a82,	// (0x000abba8) cell_cam4_burst_pane_g1_ParamLimits

0xe633,	// (0x000b3759) compa_mode_pane

0x64d0,	// (0x000ab5f6) popup_vtel_slider_window_g3_ParamLimits

0x64d0,	// (0x000ab5f6) popup_vtel_slider_window_g3

0x64e7,	// (0x000ab60d) popup_vtel_slider_window_g4_ParamLimits

0x64e7,	// (0x000ab60d) popup_vtel_slider_window_g4

0x64fe,	// (0x000ab624) popup_vtel_slider_window_t1_ParamLimits

0x64fe,	// (0x000ab624) popup_vtel_slider_window_t1

0x9575,	// (0x000ae69b) main_cl_pane

0x9cb7,	// (0x000aeddd) popup_imed_adjust2_window_ParamLimits

0xbc7c,	// (0x000b0da2) bg_tb_trans_pane_cp05_ParamLimits

0xc60e,	// (0x000b1734) popup_imed_adjust2_window_g1_ParamLimits

0xc61d,	// (0x000b1743) popup_imed_adjust2_window_g2_ParamLimits

0xc61d,	// (0x000b1743) popup_imed_adjust2_window_g2

0xc629,	// (0x000b174f) popup_imed_adjust2_window_g3_ParamLimits

0xc629,	// (0x000b174f) popup_imed_adjust2_window_g3

0x0002,

0xf7db,	// (0x000b4901) popup_imed_adjust2_window_g_ParamLimits

0xf7db,	// (0x000b4901) popup_imed_adjust2_window_g

0xc635,	// (0x000b175b) popup_imed_adjust2_window_t1_ParamLimits

0xc64d,	// (0x000b1773) slider_imed_adjust_pane_ParamLimits

0xc661,	// (0x000b1787) slider_imed_adjust_pane_g1_ParamLimits

0xc671,	// (0x000b1797) slider_imed_adjust_pane_g2_ParamLimits

0xc681,	// (0x000b17a7) slider_imed_adjust_pane_g3_ParamLimits

0xc692,	// (0x000b17b8) slider_imed_adjust_pane_g4_ParamLimits

0xf7e2,	// (0x000b4908) slider_imed_adjust_pane_g_ParamLimits

0x5a01,	// (0x000aab27) aid_touch_area_cam4_ParamLimits

0x5a01,	// (0x000aab27) aid_touch_area_cam4

0xa09d,	// (0x000af1c3) battery_pane_cp01

0x5ad0,	// (0x000aabf6) main_camera4_pane_g6_ParamLimits

0x5ad0,	// (0x000aabf6) main_camera4_pane_g6

0x5afa,	// (0x000aac20) main_camera4_pane_t2_ParamLimits

0x5afa,	// (0x000aac20) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000b4a0f) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000b4a0f) main_camera4_pane_t

0x5b2f,	// (0x000aac55) aid_touch_area_vid4_ParamLimits

0x5b2f,	// (0x000aac55) aid_touch_area_vid4

0x5b83,	// (0x000aaca9) main_video4_pane_g5_ParamLimits

0x5b83,	// (0x000aaca9) main_video4_pane_g5

0x5ba8,	// (0x000aacce) vid4_progress_pane_ParamLimits

0x5ba8,	// (0x000aacce) vid4_progress_pane

0xcc27,	// (0x000b1d4d) main_cset_slider_pane_g18_ParamLimits

0xcc27,	// (0x000b1d4d) main_cset_slider_pane_g18

0xce19,	// (0x000b1f3f) cell_cam4_burst_pane_g2_ParamLimits

0xce19,	// (0x000b1f3f) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000b4b6e) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000b4b6e) cell_cam4_burst_pane_g

0xed70,	// (0x000b3e96) bg_cl_pane_ParamLimits

0xed70,	// (0x000b3e96) bg_cl_pane

0x6b74,	// (0x000abc9a) cl_header_pane_ParamLimits

0x6b74,	// (0x000abc9a) cl_header_pane

0x6b88,	// (0x000abcae) cl_listscroll_pane_ParamLimits

0x6b88,	// (0x000abcae) cl_listscroll_pane

0xcff7,	// (0x000b211d) bg_cl_pane_g1

0xcfff,	// (0x000b2125) bg_cl_pane_g2

0xd007,	// (0x000b212d) bg_cl_pane_g3

0xd00f,	// (0x000b2135) bg_cl_pane_g4

0xd017,	// (0x000b213d) bg_cl_pane_g5

0xd01f,	// (0x000b2145) bg_cl_pane_g6

0xd027,	// (0x000b214d) bg_cl_pane_g7

0xd02f,	// (0x000b2155) bg_cl_pane_g8

0xd037,	// (0x000b215d) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000b4ba9) bg_cl_pane_g

0x6b98,	// (0x000abcbe) aid_height_cl_leading_ParamLimits

0x6b98,	// (0x000abcbe) aid_height_cl_leading

0x6ba4,	// (0x000abcca) aid_height_cl_text_ParamLimits

0x6ba4,	// (0x000abcca) aid_height_cl_text

0xee42,	// (0x000b3f68) bg_cl_header_pane_ParamLimits

0xee42,	// (0x000b3f68) bg_cl_header_pane

0x6bc3,	// (0x000abce9) cl_header_pane_g1_ParamLimits

0x6bc3,	// (0x000abce9) cl_header_pane_g1

0x6bd9,	// (0x000abcff) cl_header_pane_t1_ParamLimits

0x6bd9,	// (0x000abcff) cl_header_pane_t1

0xd03f,	// (0x000b2165) cl_list_pane

0xcbfa,	// (0x000b1d20) hc_scroll_pane_cp01

0x994c,	// (0x000aea72) bg_cl_header_pane_g1

0xcabc,	// (0x000b1be2) bg_cl_header_pane_g2

0x996c,	// (0x000aea92) bg_cl_header_pane_g3

0xcacc,	// (0x000b1bf2) bg_cl_header_pane_g4

0xcac4,	// (0x000b1bea) bg_cl_header_pane_g5

0xcd28,	// (0x000b1e4e) bg_cl_header_pane_g6

0xcae4,	// (0x000b1c0a) bg_cl_header_pane_g7

0xcaec,	// (0x000b1c12) bg_cl_header_pane_g8

0xcadc,	// (0x000b1c02) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000b4bbc) bg_cl_header_pane_g

0x6bf2,	// (0x000abd18) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6bf2,	// (0x000abd18) hc_cl_list_double_graphic_heading_pane

0x6c03,	// (0x000abd29) hc_cl_list_single_graphic_pane_ParamLimits

0x6c03,	// (0x000abd29) hc_cl_list_single_graphic_pane

0x6c19,	// (0x000abd3f) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6c19,	// (0x000abd3f) hc_cl_list_single_graphic_pane_g1

0x6c25,	// (0x000abd4b) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6c25,	// (0x000abd4b) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000b4bcf) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000b4bcf) hc_cl_list_single_graphic_pane_g

0x6c39,	// (0x000abd5f) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6c39,	// (0x000abd5f) hc_cl_list_single_graphic_pane_t1

0x6c19,	// (0x000abd3f) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6c19,	// (0x000abd3f) hc_cl_list_double_graphic_heading_pane_g1

0x6c4e,	// (0x000abd74) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6c4e,	// (0x000abd74) hc_cl_list_double_graphic_heading_pane_g2

0x6c62,	// (0x000abd88) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6c62,	// (0x000abd88) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000b4bd4) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000b4bd4) hc_cl_list_double_graphic_heading_pane_g

0x6c76,	// (0x000abd9c) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6c76,	// (0x000abd9c) hc_cl_list_double_graphic_heading_pane_t1

0x6c8b,	// (0x000abdb1) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6c8b,	// (0x000abdb1) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000b4bdb) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000b4bdb) hc_cl_list_double_graphic_heading_pane_t

0xa231,	// (0x000af357) vid4_progress_pane_g1

0xa241,	// (0x000af367) vid4_progress_pane_g2

0x6ca0,	// (0x000abdc6) vid4_progress_pane_g3

0xa251,	// (0x000af377) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000b4be0) vid4_progress_pane_g

0x6cb2,	// (0x000abdd8) vid4_progress_pane_t1

0xa269,	// (0x000af38f) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000b4beb) vid4_progress_pane_t

0x6cca,	// (0x000abdf0) wait_bar_pane_cp07

0xbe83,	// (0x000b0fa9) blid_firmament_pane_ParamLimits

0xbec6,	// (0x000b0fec) popup_blid_sat_info2_window_g1

0xbeea,	// (0x000b1010) popup_blid_sat_info2_window_t3

0xbef8,	// (0x000b101e) popup_blid_sat_info2_window_t4

0xbf06,	// (0x000b102c) popup_blid_sat_info2_window_t5

0xbf14,	// (0x000b103a) popup_blid_sat_info2_window_t6

0xbf24,	// (0x000b104a) popup_blid_sat_info2_window_t7

0xbf32,	// (0x000b1058) popup_blid_sat_info2_window_t8

0xbf40,	// (0x000b1066) popup_blid_sat_info2_window_t9

0xbf4e,	// (0x000b1074) popup_blid_sat_info2_window_t10

0xc010,	// (0x000b1136) aid_firma_cardinal_ParamLimits

0xc024,	// (0x000b114a) blid_firmament_pane_t1_ParamLimits

0xc03b,	// (0x000b1161) blid_firmament_pane_t2_ParamLimits

0xc052,	// (0x000b1178) blid_firmament_pane_t3_ParamLimits

0xc069,	// (0x000b118f) blid_firmament_pane_t4_ParamLimits

0xf6cf,	// (0x000b47f5) blid_firmament_pane_t_ParamLimits

0xc080,	// (0x000b11a6) blid_sat_info_pane_ParamLimits

0x9567,	// (0x000ae68d) main_cam_set_pane_ParamLimits

0x502a,	// (0x000aa150) aid_size_cell_colour_35_ParamLimits

0x504a,	// (0x000aa170) aid_size_cell_colour_112_ParamLimits

0x506a,	// (0x000aa190) aid_size_cell_effect_ParamLimits

0xbc7c,	// (0x000b0da2) bg_tb_trans_pane_cp02_ParamLimits

0xa2b9,	// (0x000af3df) heading_imed_pane_ParamLimits

0x508a,	// (0x000aa1b0) listscroll_imed_pane_ParamLimits

0xb2a2,	// (0x000b03c8) popup_call2_audio_first_window_g5_ParamLimits

0xb2a2,	// (0x000b03c8) popup_call2_audio_first_window_g5

0x561d,	// (0x000aa743) aid_size_touch_image3_arrow_left_ParamLimits

0x561d,	// (0x000aa743) aid_size_touch_image3_arrow_left

0x5649,	// (0x000aa76f) aid_size_touch_image3_arrow_right_ParamLimits

0x5649,	// (0x000aa76f) aid_size_touch_image3_arrow_right

0xa27e,	// (0x000af3a4) vid4_progress_pane_t3

0x539d,	// (0x000aa4c3) main_hwr_training_symbol_option_pane_ParamLimits

0x539d,	// (0x000aa4c3) main_hwr_training_symbol_option_pane

0xc8fb,	// (0x000b1a21) popup_hwr_training_preview_window_ParamLimits

0xc8fb,	// (0x000b1a21) popup_hwr_training_preview_window

0x53bd,	// (0x000aa4e3) hwr_training_navi_pane_g5_ParamLimits

0x53bd,	// (0x000aa4e3) hwr_training_navi_pane_g5

0xcaaa,	// (0x000b1bd0) popup_char_count_window

0x9567,	// (0x000ae68d) bg_popup_sub_pane_cp20_ParamLimits

0x661a,	// (0x000ab740) list_vitu2_match_list_pane_ParamLimits

0x6629,	// (0x000ab74f) vitu2_page_scroll_pane_ParamLimits

0x6629,	// (0x000ab74f) vitu2_page_scroll_pane

0xd059,	// (0x000b217f) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd059,	// (0x000b217f) list_single_hwr_training_symbol_option_pane

0xd06c,	// (0x000b2192) list_single_hwr_training_symbol_option_pane_g1

0xd074,	// (0x000b219a) list_single_hwr_training_symbol_option_pane_t1

0xd082,	// (0x000b21a8) bg_button_pane_cp023

0xd08b,	// (0x000b21b1) bg_button_pane_cp024

0x6d0c,	// (0x000abe32) vitu2_page_scroll_pane_g1

0x6d14,	// (0x000abe3a) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000b4bf2) vitu2_page_scroll_pane_g

0x6d1c,	// (0x000abe42) vitu2_page_scroll_pane_t1

0xbdd7,	// (0x000b0efd) popup_char_count_window_g1

0xd0be,	// (0x000b21e4) popup_char_count_window_g2

0xd0c7,	// (0x000b21ed) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000b4bf7) popup_char_count_window_g

0xd0d0,	// (0x000b21f6) popup_char_count_window_t1

0x9575,	// (0x000ae69b) main_vded2_pane

0xc5fa,	// (0x000b1720) aid_size_cell_imed_line

0xc604,	// (0x000b172a) grid_imed_line_width_pane

0xa163,	// (0x000af289) vid4_indicators_pane_g4

0xd0de,	// (0x000b2204) cell_imed_line_width_pane_ParamLimits

0xd0de,	// (0x000b2204) cell_imed_line_width_pane

0xd0f2,	// (0x000b2218) cell_imed_line_width_pane_g1

0xcb5b,	// (0x000b1c81) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000b4bfe) cell_imed_line_width_pane_g

0x6d2b,	// (0x000abe51) main_vded2_pane_g1_ParamLimits

0x6d2b,	// (0x000abe51) main_vded2_pane_g1

0x6d41,	// (0x000abe67) main_vded2_pane_g2_ParamLimits

0x6d41,	// (0x000abe67) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000b4c03) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000b4c03) main_vded2_pane_g

0x6d53,	// (0x000abe79) vded2_slider_pane_ParamLimits

0x6d53,	// (0x000abe79) vded2_slider_pane

0x6d63,	// (0x000abe89) aid_size_touch_vded2_end

0x6d6d,	// (0x000abe93) aid_size_touch_vded2_playhead

0xd0fb,	// (0x000b2221) aid_size_touch_vded2_start

0xd103,	// (0x000b2229) vded2_slider_bg_pane

0xd10c,	// (0x000b2232) vded2_slider_pane_g1

0xd115,	// (0x000b223b) vded2_slider_pane_g2

0x6d77,	// (0x000abe9d) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000b4c08) vded2_slider_pane_g

0xd11d,	// (0x000b2243) vded2_slider_bg_pane_g1

0xd126,	// (0x000b224c) vded2_slider_bg_pane_g2

0xd12f,	// (0x000b2255) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x000b4c0f) vded2_slider_bg_pane_g

0x2d73,	// (0x000a7e99) aid_postcard_touch_down_pane_ParamLimits

0x2d73,	// (0x000a7e99) aid_postcard_touch_down_pane

0x2d89,	// (0x000a7eaf) aid_postcard_touch_up_pane_ParamLimits

0x2d89,	// (0x000a7eaf) aid_postcard_touch_up_pane

0x9575,	// (0x000ae69b) main_blid2_pane

0x9c9d,	// (0x000aedc3) popup_blid2_search_window

0xe633,	// (0x000b3759) blid2_gps_pane

0xe633,	// (0x000b3759) blid2_navig_pane

0xe633,	// (0x000b3759) blid2_search_pane

0xe633,	// (0x000b3759) blid2_tripm_pane

0x6d82,	// (0x000abea8) blid2_search_pane_g1_ParamLimits

0x6d82,	// (0x000abea8) blid2_search_pane_g1

0x6d9c,	// (0x000abec2) blid2_search_pane_t1_ParamLimits

0x6d9c,	// (0x000abec2) blid2_search_pane_t1

0x6dae,	// (0x000abed4) aid_size_cell_blid2_gps_ParamLimits

0x6dae,	// (0x000abed4) aid_size_cell_blid2_gps

0x6dc6,	// (0x000abeec) blid2_gps_pane_g1_ParamLimits

0x6dc6,	// (0x000abeec) blid2_gps_pane_g1

0x6dda,	// (0x000abf00) grid_blid2_satellite_pane_ParamLimits

0x6dda,	// (0x000abf00) grid_blid2_satellite_pane

0x6df4,	// (0x000abf1a) blid2_navig_pane_g1_ParamLimits

0x6df4,	// (0x000abf1a) blid2_navig_pane_g1

0x6e00,	// (0x000abf26) blid2_navig_pane_t1_ParamLimits

0x6e00,	// (0x000abf26) blid2_navig_pane_t1

0x6e1b,	// (0x000abf41) blid2_navig_pane_t2_ParamLimits

0x6e1b,	// (0x000abf41) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x000b4c16) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x000b4c16) blid2_navig_pane_t

0x6e36,	// (0x000abf5c) blid2_navig_ring_pane_ParamLimits

0x6e36,	// (0x000abf5c) blid2_navig_ring_pane

0x6e4f,	// (0x000abf75) blid2_speed_pane_ParamLimits

0x6e4f,	// (0x000abf75) blid2_speed_pane

0x6e5b,	// (0x000abf81) blid2_tripm_pane_g1_ParamLimits

0x6e5b,	// (0x000abf81) blid2_tripm_pane_g1

0x6e74,	// (0x000abf9a) blid2_tripm_pane_g2_ParamLimits

0x6e74,	// (0x000abf9a) blid2_tripm_pane_g2

0x6e88,	// (0x000abfae) blid2_tripm_pane_g3_ParamLimits

0x6e88,	// (0x000abfae) blid2_tripm_pane_g3

0x6e9c,	// (0x000abfc2) blid2_tripm_pane_g4_ParamLimits

0x6e9c,	// (0x000abfc2) blid2_tripm_pane_g4

0x6eb0,	// (0x000abfd6) blid2_tripm_pane_g5_ParamLimits

0x6eb0,	// (0x000abfd6) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x000b4c1b) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x000b4c1b) blid2_tripm_pane_g

0x6ed6,	// (0x000abffc) blid2_tripm_pane_t1_ParamLimits

0x6ed6,	// (0x000abffc) blid2_tripm_pane_t1

0x6ef1,	// (0x000ac017) blid2_tripm_pane_t2_ParamLimits

0x6ef1,	// (0x000ac017) blid2_tripm_pane_t2

0x6f0a,	// (0x000ac030) blid2_tripm_pane_t3_ParamLimits

0x6f0a,	// (0x000ac030) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x000b4c28) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x000b4c28) blid2_tripm_pane_t

0x6f51,	// (0x000ac077) cell_blid2_satellite_pane_ParamLimits

0x6f51,	// (0x000ac077) cell_blid2_satellite_pane

0x6f6f,	// (0x000ac095) cell_blid2_satellite_pane_g1

0xd138,	// (0x000b225e) cell_blid2_satellite_pane_t1

0xc090,	// (0x000b11b6) blid2_speed_pane_g1

0xd146,	// (0x000b226c) blid2_speed_pane_t1

0xd154,	// (0x000b227a) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x000b4c31) blid2_speed_pane_t

0xc090,	// (0x000b11b6) blid2_navig_ring_pane_g1

0x6f78,	// (0x000ac09e) blid2_navig_ring_pane_g2

0x6f80,	// (0x000ac0a6) blid2_navig_ring_pane_g3

0x6f88,	// (0x000ac0ae) blid2_navig_ring_pane_g4

0x6f90,	// (0x000ac0b6) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x000b4c36) blid2_navig_ring_pane_g

0xe633,	// (0x000b3759) bg_popup_window_pane_cp011

0xd162,	// (0x000b2288) popup_blid2_search_window_g1

0xd16a,	// (0x000b2290) popup_blid2_search_window_t1

0xd178,	// (0x000b229e) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x000b4c41) popup_blid2_search_window_t

0x985b,	// (0x000ae981) main_browser_pane_g1

0xed70,	// (0x000b3e96) main_browser_pane_ParamLimits

0x9567,	// (0x000ae68d) bg_button_pane_cp011_ParamLimits

0x5ec0,	// (0x000aafe6) cell_vitu2_function_pane_g1_ParamLimits

0xbc7c,	// (0x000b0da2) bg_popup_sub_pane_cp22_ParamLimits

0x680e,	// (0x000ab934) input_focus_pane_cp08_ParamLimits

0x6825,	// (0x000ab94b) popup_vitu2_query_button_pane_ParamLimits

0x6825,	// (0x000ab94b) popup_vitu2_query_button_pane

0x6836,	// (0x000ab95c) popup_vitu2_query_input_button_pane

0xcd63,	// (0x000b1e89) popup_vitu2_query_window_g1_ParamLimits

0x6840,	// (0x000ab966) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000b4b42) popup_vitu2_query_window_g_ParamLimits

0xe633,	// (0x000b3759) bg_button_pane_cp026

0x6f98,	// (0x000ac0be) popup_vitu2_query_input_button_pane_g1

0xe633,	// (0x000b3759) bg_button_pane_cp025

0xd186,	// (0x000b22ac) popup_vitu2_query_button_pane_t1

0x441b,	// (0x000a9541) main_mp3_pane_t6

0x4429,	// (0x000a954f) popup_slider_window_cp01

0xa0c7,	// (0x000af1ed) cam4_battery_pane

0xa120,	// (0x000af246) cam4_battery_pane_cp02

0xa229,	// (0x000af34f) cam4_battery_pane_cp01

0xa229,	// (0x000af34f) cam4_battery_pane_cp03

0xcb63,	// (0x000b1c89) cam4_battery_pane_g1

0xc090,	// (0x000b11b6) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x000b4c46) cam4_battery_pane_g

0xbf5c,	// (0x000b1082) popup_blid_sat_info2_window_t11

0xa6bb,	// (0x000af7e1) aid_size_touch_mv_arrow_left_ParamLimits

0xa6e4,	// (0x000af80a) aid_size_touch_mv_arrow_right_ParamLimits

0xa742,	// (0x000af868) navi_pane_g1_ParamLimits

0xa74e,	// (0x000af874) navi_pane_g2_ParamLimits

0xa77c,	// (0x000af8a2) navi_pane_g3_ParamLimits

0xf3e1,	// (0x000b4507) navi_pane_g_ParamLimits

0x2799,	// (0x000a78bf) navi_pane_mv_t1_ParamLimits

0x5096,	// (0x000aa1bc) grid_imed_effect_pane_ParamLimits

0x13f1,	// (0x000a6517) aid_placing_vt_slider_lsc

0x97aa,	// (0x000ae8d0) aid_placing_vt_slider_prt

0xee42,	// (0x000b3f68) bg_tb_trans_pane_cp01_ParamLimits

0xc213,	// (0x000b1339) popup_image_details_window_g1_ParamLimits

0xc226,	// (0x000b134c) popup_image_details_window_g2_ParamLimits

0xc23b,	// (0x000b1361) popup_image_details_window_g3_ParamLimits

0xc23b,	// (0x000b1361) popup_image_details_window_g3

0xf714,	// (0x000b483a) popup_image_details_window_g_ParamLimits

0xc24f,	// (0x000b1375) popup_image_details_window_t1_ParamLimits

0xc261,	// (0x000b1387) popup_image_details_window_t2_ParamLimits

0xc27a,	// (0x000b13a0) popup_image_details_window_t3_ParamLimits

0xc28e,	// (0x000b13b4) popup_image_details_window_t4_ParamLimits

0xc2a9,	// (0x000b13cf) popup_image_details_window_t5_ParamLimits

0xf71b,	// (0x000b4841) popup_image_details_window_t_ParamLimits

0x6bb0,	// (0x000abcd6) cl_header_name_pane_ParamLimits

0x6bb0,	// (0x000abcd6) cl_header_name_pane

0x6fa0,	// (0x000ac0c6) cl_header_name_pane_t1_ParamLimits

0x6fa0,	// (0x000ac0c6) cl_header_name_pane_t1

0x6fc1,	// (0x000ac0e7) cl_header_name_pane_t2_ParamLimits

0x6fc1,	// (0x000ac0e7) cl_header_name_pane_t2

0x7003,	// (0x000ac129) cl_header_name_pane_t3_ParamLimits

0x7003,	// (0x000ac129) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x000b4c4b) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x000b4c4b) cl_header_name_pane_t

0xa80b,	// (0x000af931) navi_pane_mv_g2_ParamLimits

0xca67,	// (0x000b1b8d) field_vitu2_entry_pane_g1_ParamLimits

0xca73,	// (0x000b1b99) field_vitu2_entry_pane_g2_ParamLimits

0xca7f,	// (0x000b1ba5) field_vitu2_entry_pane_g3_ParamLimits

0xca7f,	// (0x000b1ba5) field_vitu2_entry_pane_g3

0xf91b,	// (0x000b4a41) field_vitu2_entry_pane_g_ParamLimits

0xa198,	// (0x000af2be) cell_vitu2_itu_pane_g1_ParamLimits

0x5e54,	// (0x000aaf7a) cell_vitu2_itu_pane_g2_ParamLimits

0x5e54,	// (0x000aaf7a) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000b4a4d) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000b4a4d) cell_vitu2_itu_pane_g

0x9567,	// (0x000ae68d) bg_vkb2_func_pane_cp05_ParamLimits

0x9567,	// (0x000ae68d) bg_vkb2_func_pane_cp05

0x9567,	// (0x000ae68d) bg_vkb2_func_pane_cp03

0x9567,	// (0x000ae68d) bg_vkb2_func_pane_cp04

0x9567,	// (0x000ae68d) bg_vkb2_func_pane_cp10_ParamLimits

0x9567,	// (0x000ae68d) bg_vkb2_func_pane_cp10

0x6b56,	// (0x000abc7c) bg_vkb2_func_pane_cp08

0x6b3c,	// (0x000abc62) bg_vkb2_func_pane_cp06

0x6b4a,	// (0x000abc70) bg_vkb2_func_pane_cp07

0xd094,	// (0x000b21ba) bg_vkb2_func_pane_cp11_ParamLimits

0xd094,	// (0x000b21ba) bg_vkb2_func_pane_cp11

0xd0a9,	// (0x000b21cf) bg_vkb2_func_pane_cp12_ParamLimits

0xd0a9,	// (0x000b21cf) bg_vkb2_func_pane_cp12

0xe633,	// (0x000b3759) bg_vkb2_func_pane_cp09

0xcabc,	// (0x000b1be2) bg_vkb2_func_pane_g1

0x996c,	// (0x000aea92) bg_vkb2_func_pane_g2

0xcac4,	// (0x000b1bea) bg_vkb2_func_pane_g3

0xcacc,	// (0x000b1bf2) bg_vkb2_func_pane_g4

0xcd28,	// (0x000b1e4e) bg_vkb2_func_pane_g5

0xcae4,	// (0x000b1c0a) bg_vkb2_func_pane_g6

0xcaec,	// (0x000b1c12) bg_vkb2_func_pane_g7

0xcadc,	// (0x000b1c02) bg_vkb2_func_pane_g8

0x994c,	// (0x000aea72) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x000b4c52) bg_vkb2_func_pane_g

0x6ec4,	// (0x000abfea) blid2_tripm_pane_g6_ParamLimits

0x6ec4,	// (0x000abfea) blid2_tripm_pane_g6

0xc9b9,	// (0x000b1adf) mp4_progress_pane_g1

0x6f3d,	// (0x000ac063) blid2_tripm_values_pane_ParamLimits

0x6f3d,	// (0x000ac063) blid2_tripm_values_pane

0x7034,	// (0x000ac15a) blid2_tripm_values_pane_t1

0x7042,	// (0x000ac168) blid2_tripm_values_pane_t2

0x7050,	// (0x000ac176) blid2_tripm_values_pane_t3

0x705e,	// (0x000ac184) blid2_tripm_values_pane_t4

0x706c,	// (0x000ac192) blid2_tripm_values_pane_t5

0x707a,	// (0x000ac1a0) blid2_tripm_values_pane_t6

0x7088,	// (0x000ac1ae) blid2_tripm_values_pane_t7

0x7096,	// (0x000ac1bc) blid2_tripm_values_pane_t8

0x70a4,	// (0x000ac1ca) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x000b4c65) blid2_tripm_values_pane_t

0x1433,	// (0x000a6559) call_video_pane_t1_ParamLimits

0x1451,	// (0x000a6577) call_video_pane_t2_ParamLimits

0xf26a,	// (0x000b4390) call_video_pane_t_ParamLimits

0x2c78,	// (0x000a7d9e) msg_header_pane_g1_ParamLimits

0xa9f3,	// (0x000afb19) msg_header_pane_g2_ParamLimits

0xa9f3,	// (0x000afb19) msg_header_pane_g2

0x0001,

0xf484,	// (0x000b45aa) msg_header_pane_g_ParamLimits

0xf484,	// (0x000b45aa) msg_header_pane_g

0xed70,	// (0x000b3e96) main_clock2_pane_ParamLimits

0x4d97,	// (0x000a9ebd) grid_clock2_toolbar_pane_ParamLimits

0x4d97,	// (0x000a9ebd) grid_clock2_toolbar_pane

0x4d97,	// (0x000a9ebd) listscroll_clock2_pane_ParamLimits

0x4d97,	// (0x000a9ebd) listscroll_clock2_pane

0x4e7b,	// (0x000a9fa1) main_clock2_pane_t3_ParamLimits

0x4e7b,	// (0x000a9fa1) main_clock2_pane_t3

0x4e9f,	// (0x000a9fc5) main_clock2_pane_t4_ParamLimits

0x4e9f,	// (0x000a9fc5) main_clock2_pane_t4

0xd194,	// (0x000b22ba) cell_clock2_toolbar_pane

0xd19c,	// (0x000b22c2) cell_clock2_toolbar_pane_cp01

0xd19c,	// (0x000b22c2) cell_clock2_toolbar_pane_cp02

0xd1a4,	// (0x000b22ca) cell_clock2_toolbar_pane_cp03

0xd1ac,	// (0x000b22d2) list_clock2_pane

0xa631,	// (0x000af757) scroll_pane_cp10

0xd1b4,	// (0x000b22da) list_single_clock2_pane_ParamLimits

0xd1b4,	// (0x000b22da) list_single_clock2_pane

0x9709,	// (0x000ae82f) list_highlight_pane_cp08

0xd1c1,	// (0x000b22e7) list_single_clock2_pane_t1

0xd1cf,	// (0x000b22f5) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x000b4c78) list_single_clock2_pane_t

0xe633,	// (0x000b3759) bg_button_pane_cp10

0xd1dd,	// (0x000b2303) cell_clock2_toolbar_pane_g1

0x2cff,	// (0x000a7e25) aid_main_viewer_pane_g1_ParamLimits

0x2cff,	// (0x000a7e25) aid_main_viewer_pane_g1

0x2d0d,	// (0x000a7e33) aid_main_viewer_pane_g2_ParamLimits

0x2d0d,	// (0x000a7e33) aid_main_viewer_pane_g2

0x2d1b,	// (0x000a7e41) aid_main_viewer_pane_g3_ParamLimits

0x2d1b,	// (0x000a7e41) aid_main_viewer_pane_g3

0x2d2a,	// (0x000a7e50) aid_main_viewer_pane_g4_ParamLimits

0x2d2a,	// (0x000a7e50) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x000b45bb) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x000b45bb) aid_main_viewer_pane_g

0x3630,	// (0x000a8756) main_calc_pane_ParamLimits

0x3656,	// (0x000a877c) main_dialer2_pane_ParamLimits

0x9575,	// (0x000ae69b) main_cam6_pane

0x9575,	// (0x000ae69b) main_vid6_pane

0x4da3,	// (0x000a9ec9) listscroll_gen_pane_cp06_ParamLimits

0x4da3,	// (0x000a9ec9) listscroll_gen_pane_cp06

0x4ec2,	// (0x000a9fe8) main_clock2_pane_t5_ParamLimits

0x4ec2,	// (0x000a9fe8) main_clock2_pane_t5

0x4f20,	// (0x000aa046) aid_call2_pane_cp10_ParamLimits

0x4f32,	// (0x000aa058) aid_call_pane_cp10_ParamLimits

0xa6af,	// (0x000af7d5) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa6af,	// (0x000af7d5) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4f44,	// (0x000aa06a) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4f44,	// (0x000aa06a) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa6af,	// (0x000af7d5) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d0,	// (0x000b48f6) popup_clock_analogue_window_cp10_g_ParamLimits

0x4f5a,	// (0x000aa080) popup_clock_analogue_window_cp10_t1_ParamLimits

0x55ca,	// (0x000aa6f0) cell_dialer2_keypad_pane_g2_ParamLimits

0x55ca,	// (0x000aa6f0) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000b49e0) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000b49e0) cell_dialer2_keypad_pane_g

0x55e6,	// (0x000aa70c) cell_dialer2_keypad_pane_t1

0x61dd,	// (0x000ab303) main_cset_text2_pane_ParamLimits

0x61dd,	// (0x000ab303) main_cset_text2_pane

0xcf4f,	// (0x000b2075) area_vitu2_query_pane_g1_ParamLimits

0x6adb,	// (0x000abc01) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000b4b95) area_vitu2_query_pane_g_ParamLimits

0xcfd3,	// (0x000b20f9) area_vitu2_query_pane_t7_ParamLimits

0xcfd3,	// (0x000b20f9) area_vitu2_query_pane_t7

0x6b3c,	// (0x000abc62) bg_button_pane_cp018_ParamLimits

0x6b4a,	// (0x000abc70) bg_button_pane_cp021_ParamLimits

0x6b56,	// (0x000abc7c) bg_button_pane_cp022_ParamLimits

0x6b56,	// (0x000abc7c) bg_vkb2_func_pane_cp08_ParamLimits

0x6b3c,	// (0x000abc62) bg_vkb2_func_pane_cp06_ParamLimits

0x6b4a,	// (0x000abc70) bg_vkb2_func_pane_cp07_ParamLimits

0x6b65,	// (0x000abc8b) input_focus_pane_cp09_ParamLimits

0xa293,	// (0x000af3b9) cam6_autofocus_pane_ParamLimits

0xa293,	// (0x000af3b9) cam6_autofocus_pane

0x70b2,	// (0x000ac1d8) cam6_image_uncrop_pane_ParamLimits

0x70b2,	// (0x000ac1d8) cam6_image_uncrop_pane

0x70c1,	// (0x000ac1e7) cam6_indi_pane_ParamLimits

0x70c1,	// (0x000ac1e7) cam6_indi_pane

0x70d7,	// (0x000ac1fd) cam6_mode_pane_ParamLimits

0x70d7,	// (0x000ac1fd) cam6_mode_pane

0x70e9,	// (0x000ac20f) cam6_timer_pane_ParamLimits

0x70e9,	// (0x000ac20f) cam6_timer_pane

0x70f5,	// (0x000ac21b) cam6_zoom_pane_ParamLimits

0x70f5,	// (0x000ac21b) cam6_zoom_pane

0x7101,	// (0x000ac227) cam6_mode_pane_g1_ParamLimits

0x7101,	// (0x000ac227) cam6_mode_pane_g1

0x7111,	// (0x000ac237) cam6_mode_pane_g2_ParamLimits

0x7111,	// (0x000ac237) cam6_mode_pane_g2

0x7121,	// (0x000ac247) cam6_mode_pane_g3_ParamLimits

0x7121,	// (0x000ac247) cam6_mode_pane_g3

0x7131,	// (0x000ac257) cam6_mode_pane_g4_ParamLimits

0x7131,	// (0x000ac257) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x000b4c7d) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x000b4c7d) cam6_mode_pane_g

0xd1e5,	// (0x000b230b) bg_tb_trans_pane_cp08_ParamLimits

0xd1e5,	// (0x000b230b) bg_tb_trans_pane_cp08

0xd1f3,	// (0x000b2319) cam6_battery_pane_ParamLimits

0xd1f3,	// (0x000b2319) cam6_battery_pane

0xd209,	// (0x000b232f) cam6_indi_pane_g1_ParamLimits

0xd209,	// (0x000b232f) cam6_indi_pane_g1

0xd21b,	// (0x000b2341) cam6_indi_pane_g2_ParamLimits

0xd21b,	// (0x000b2341) cam6_indi_pane_g2

0xd22d,	// (0x000b2353) cam6_indi_pane_g3_ParamLimits

0xd22d,	// (0x000b2353) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x000b4c86) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x000b4c86) cam6_indi_pane_g

0xd23f,	// (0x000b2365) cam6_indi_pane_t1_ParamLimits

0xd23f,	// (0x000b2365) cam6_indi_pane_t1

0x7141,	// (0x000ac267) cam6_autofocus_pane_g1

0x7149,	// (0x000ac26f) cam6_autofocus_pane_g2

0x7151,	// (0x000ac277) cam6_autofocus_pane_g3

0x7159,	// (0x000ac27f) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x000b4c8d) cam6_autofocus_pane_g

0xd265,	// (0x000b238b) cam6_timer_pane_g1

0xd26d,	// (0x000b2393) cam6_timer_pane_t1

0xd27b,	// (0x000b23a1) cam6_zoom_cont_pane

0xd283,	// (0x000b23a9) cam6_zoom_pane_g1

0xd28b,	// (0x000b23b1) cam6_zoom_pane_g2

0x7161,	// (0x000ac287) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x000b4c96) cam6_zoom_pane_g

0xc090,	// (0x000b11b6) cam6_battery_pane_g1

0xc090,	// (0x000b11b6) cam6_battery_pane_g2

0x0001,

0xf6d8,	// (0x000b47fe) cam6_battery_pane_g

0xd293,	// (0x000b23b9) cam6_zoom_cont_pane_g1

0xd29c,	// (0x000b23c2) cam6_zoom_cont_pane_g2

0xd2a5,	// (0x000b23cb) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x000b4c9d) cam6_zoom_cont_pane_g

0x717e,	// (0x000ac2a4) cam6_mode_pane_cp_ParamLimits

0x717e,	// (0x000ac2a4) cam6_mode_pane_cp

0x7190,	// (0x000ac2b6) cam6_zoom_pane_cp_ParamLimits

0x7190,	// (0x000ac2b6) cam6_zoom_pane_cp

0x719c,	// (0x000ac2c2) vid6_image_uncrop_cif_pane_ParamLimits

0x719c,	// (0x000ac2c2) vid6_image_uncrop_cif_pane

0x71ac,	// (0x000ac2d2) vid6_image_uncrop_nhd_pane_ParamLimits

0x71ac,	// (0x000ac2d2) vid6_image_uncrop_nhd_pane

0x71bb,	// (0x000ac2e1) vid6_image_uncrop_vga_pane_ParamLimits

0x71bb,	// (0x000ac2e1) vid6_image_uncrop_vga_pane

0x71ca,	// (0x000ac2f0) vid6_image_uncrop_wvga_pane_ParamLimits

0x71ca,	// (0x000ac2f0) vid6_image_uncrop_wvga_pane

0x71d9,	// (0x000ac2ff) vid6_indi_pane_ParamLimits

0x71d9,	// (0x000ac2ff) vid6_indi_pane

0xd1e5,	// (0x000b230b) bg_tb_trans_pane_cp09_ParamLimits

0xd1e5,	// (0x000b230b) bg_tb_trans_pane_cp09

0xd2bd,	// (0x000b23e3) cam6_battery_pane_cp_ParamLimits

0xd2bd,	// (0x000b23e3) cam6_battery_pane_cp

0xd2c9,	// (0x000b23ef) vid6_indi_pane_g1_ParamLimits

0xd2c9,	// (0x000b23ef) vid6_indi_pane_g1

0xd2db,	// (0x000b2401) vid6_indi_pane_g2_ParamLimits

0xd2db,	// (0x000b2401) vid6_indi_pane_g2

0xd2ed,	// (0x000b2413) vid6_indi_pane_g3_ParamLimits

0xd2ed,	// (0x000b2413) vid6_indi_pane_g3

0xd302,	// (0x000b2428) vid6_indi_pane_g4_ParamLimits

0xd302,	// (0x000b2428) vid6_indi_pane_g4

0xd317,	// (0x000b243d) vid6_indi_pane_g5_ParamLimits

0xd317,	// (0x000b243d) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x000b4ca4) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x000b4ca4) vid6_indi_pane_g

0xd331,	// (0x000b2457) vid6_indi_pane_t1_ParamLimits

0xd331,	// (0x000b2457) vid6_indi_pane_t1

0xd347,	// (0x000b246d) vid6_indi_pane_t2_ParamLimits

0xd347,	// (0x000b246d) vid6_indi_pane_t2

0xd36f,	// (0x000b2495) vid6_indi_pane_t3_ParamLimits

0xd36f,	// (0x000b2495) vid6_indi_pane_t3

0xd397,	// (0x000b24bd) vid6_indi_pane_t4_ParamLimits

0xd397,	// (0x000b24bd) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x000b4caf) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x000b4caf) vid6_indi_pane_t

0xd3bb,	// (0x000b24e1) wait_bar_pane_cp08

0x71f1,	// (0x000ac317) main_cset_text2_pane_t1_ParamLimits

0x71f1,	// (0x000ac317) main_cset_text2_pane_t1

0x7169,	// (0x000ac28f) listscroll_gen_pane_cp06_t1_ParamLimits

0x7169,	// (0x000ac28f) listscroll_gen_pane_cp06_t1

0x9575,	// (0x000ae69b) main_cam6_set_pane

0xa0b9,	// (0x000af1df) bg_tb_trans_pane_cp06_ParamLimits

0xa0cf,	// (0x000af1f5) cam4_indicators_pane_g1_ParamLimits

0xa0e0,	// (0x000af206) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000b4a1d) cam4_indicators_pane_g_ParamLimits

0xa0fe,	// (0x000af224) cam4_indicators_pane_t1_ParamLimits

0x9567,	// (0x000ae68d) bg_tb_trans_pane_cp07_ParamLimits

0xa12a,	// (0x000af250) vid4_indicators_pane_g1_ParamLimits

0xa13e,	// (0x000af264) vid4_indicators_pane_g2_ParamLimits

0xa152,	// (0x000af278) vid4_indicators_pane_g3_ParamLimits

0xa163,	// (0x000af289) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000b4a2f) vid4_indicators_pane_g_ParamLimits

0xa181,	// (0x000af2a7) vid4_indicators_pane_t1_ParamLimits

0xa231,	// (0x000af357) vid4_progress_pane_g1_ParamLimits

0xa241,	// (0x000af367) vid4_progress_pane_g2_ParamLimits

0x6ca0,	// (0x000abdc6) vid4_progress_pane_g3_ParamLimits

0xa251,	// (0x000af377) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000b4be0) vid4_progress_pane_g_ParamLimits

0x6cb2,	// (0x000abdd8) vid4_progress_pane_t1_ParamLimits

0xa269,	// (0x000af38f) vid4_progress_pane_t2_ParamLimits

0xa27e,	// (0x000af3a4) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000b4beb) vid4_progress_pane_t_ParamLimits

0x6cca,	// (0x000abdf0) wait_bar_pane_cp07_ParamLimits

0x720e,	// (0x000ac334) main_cam6_set_pane_g2_ParamLimits

0x720e,	// (0x000ac334) main_cam6_set_pane_g2

0x7232,	// (0x000ac358) main_cset6_listscroll_pane_ParamLimits

0x7232,	// (0x000ac358) main_cset6_listscroll_pane

0x7252,	// (0x000ac378) main_cset6_slider_pane_ParamLimits

0x7252,	// (0x000ac378) main_cset6_slider_pane

0x7268,	// (0x000ac38e) main_cset6_text2_pane_ParamLimits

0x7268,	// (0x000ac38e) main_cset6_text2_pane

0xd3ca,	// (0x000b24f0) main_cset6_text_pane

0xd3d2,	// (0x000b24f8) main_cset_list_pane_copy1_ParamLimits

0xd3d2,	// (0x000b24f8) main_cset_list_pane_copy1

0xd3e2,	// (0x000b2508) scroll_pane_cp028_copy1

0x7276,	// (0x000ac39c) cset_list_set_pane_copy1

0x7287,	// (0x000ac3ad) aid_position_infowindow_above_copy1

0x728f,	// (0x000ac3b5) aid_position_infowindow_below_copy1

0x7297,	// (0x000ac3bd) cset_list_set_pane_g1_copy1

0x729f,	// (0x000ac3c5) cset_list_set_pane_g3_copy1_ParamLimits

0x729f,	// (0x000ac3c5) cset_list_set_pane_g3_copy1

0x72ae,	// (0x000ac3d4) cset_list_set_pane_t1_copy1_ParamLimits

0x72ae,	// (0x000ac3d4) cset_list_set_pane_t1_copy1

0xee42,	// (0x000b3f68) list_highlight_pane_cp021_copy1_ParamLimits

0xee42,	// (0x000b3f68) list_highlight_pane_cp021_copy1

0xd3eb,	// (0x000b2511) cset6_slider_pane_ParamLimits

0xd3eb,	// (0x000b2511) cset6_slider_pane

0xd417,	// (0x000b253d) main_cset6_slider_pane_g1_ParamLimits

0xd417,	// (0x000b253d) main_cset6_slider_pane_g1

0x72c3,	// (0x000ac3e9) main_cset6_slider_pane_g2_ParamLimits

0x72c3,	// (0x000ac3e9) main_cset6_slider_pane_g2

0xd43f,	// (0x000b2565) main_cset6_slider_pane_g3_ParamLimits

0xd43f,	// (0x000b2565) main_cset6_slider_pane_g3

0x72eb,	// (0x000ac411) main_cset6_slider_pane_g4_ParamLimits

0x72eb,	// (0x000ac411) main_cset6_slider_pane_g4

0x72f7,	// (0x000ac41d) main_cset6_slider_pane_g5_ParamLimits

0x72f7,	// (0x000ac41d) main_cset6_slider_pane_g5

0xcc0f,	// (0x000b1d35) main_cset6_slider_pane_g7_ParamLimits

0xcc0f,	// (0x000b1d35) main_cset6_slider_pane_g7

0xcc1b,	// (0x000b1d41) main_cset6_slider_pane_g8_ParamLimits

0xcc1b,	// (0x000b1d41) main_cset6_slider_pane_g8

0x628a,	// (0x000ab3b0) main_cset6_slider_pane_g9_ParamLimits

0x628a,	// (0x000ab3b0) main_cset6_slider_pane_g9

0x6296,	// (0x000ab3bc) main_cset6_slider_pane_g10_ParamLimits

0x6296,	// (0x000ab3bc) main_cset6_slider_pane_g10

0x62a2,	// (0x000ab3c8) main_cset6_slider_pane_g11_ParamLimits

0x62a2,	// (0x000ab3c8) main_cset6_slider_pane_g11

0x62ae,	// (0x000ab3d4) main_cset6_slider_pane_g12_ParamLimits

0x62ae,	// (0x000ab3d4) main_cset6_slider_pane_g12

0x62ba,	// (0x000ab3e0) main_cset6_slider_pane_g13_ParamLimits

0x62ba,	// (0x000ab3e0) main_cset6_slider_pane_g13

0x62c6,	// (0x000ab3ec) main_cset6_slider_pane_g14_ParamLimits

0x62c6,	// (0x000ab3ec) main_cset6_slider_pane_g14

0x7303,	// (0x000ac429) main_cset6_slider_pane_g15_ParamLimits

0x7303,	// (0x000ac429) main_cset6_slider_pane_g15

0x62ea,	// (0x000ab410) main_cset6_slider_pane_g16_ParamLimits

0x62ea,	// (0x000ab410) main_cset6_slider_pane_g16

0x62f6,	// (0x000ab41c) main_cset6_slider_pane_g17_ParamLimits

0x62f6,	// (0x000ab41c) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x000b4cb8) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x000b4cb8) main_cset6_slider_pane_g

0xd44b,	// (0x000b2571) main_cset6_slider_pane_t1_ParamLimits

0xd44b,	// (0x000b2571) main_cset6_slider_pane_t1

0x7333,	// (0x000ac459) main_cset6_slider_pane_t2_ParamLimits

0x7333,	// (0x000ac459) main_cset6_slider_pane_t2

0x735e,	// (0x000ac484) main_cset6_slider_pane_t3_ParamLimits

0x735e,	// (0x000ac484) main_cset6_slider_pane_t3

0x7389,	// (0x000ac4af) main_cset6_slider_pane_t4_ParamLimits

0x7389,	// (0x000ac4af) main_cset6_slider_pane_t4

0x73b4,	// (0x000ac4da) main_cset6_slider_pane_t5_ParamLimits

0x73b4,	// (0x000ac4da) main_cset6_slider_pane_t5

0xd48c,	// (0x000b25b2) main_cset6_slider_pane_t7_ParamLimits

0xd48c,	// (0x000b25b2) main_cset6_slider_pane_t7

0x73df,	// (0x000ac505) main_cset6_slider_pane_t8_ParamLimits

0x73df,	// (0x000ac505) main_cset6_slider_pane_t8

0x7403,	// (0x000ac529) main_cset6_slider_pane_t9_ParamLimits

0x7403,	// (0x000ac529) main_cset6_slider_pane_t9

0x7427,	// (0x000ac54d) main_cset6_slider_pane_t10_ParamLimits

0x7427,	// (0x000ac54d) main_cset6_slider_pane_t10

0x744b,	// (0x000ac571) main_cset6_slider_pane_t11_ParamLimits

0x744b,	// (0x000ac571) main_cset6_slider_pane_t11

0xd4c2,	// (0x000b25e8) main_cset6_slider_pane_t14_ParamLimits

0xd4c2,	// (0x000b25e8) main_cset6_slider_pane_t14

0xd4fb,	// (0x000b2621) main_cset6_slider_pane_t15_ParamLimits

0xd4fb,	// (0x000b2621) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x000b4cdd) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x000b4cdd) main_cset6_slider_pane_t

0xd534,	// (0x000b265a) cset_slider_pane_g1_copy1

0xd53d,	// (0x000b2663) cset_slider_pane_g2_copy1

0xd546,	// (0x000b266c) cset_slider_pane_g3_copy1

0xe633,	// (0x000b3759) bg_popup_sub_pane_cp011_copy1

0xd54f,	// (0x000b2675) main_cset_text_pane_g1_copy1

0xcd77,	// (0x000b1e9d) main_cset_text_pane_t1_copy1

0xcd85,	// (0x000b1eab) main_cset_text_pane_t2_copy1

0xcd93,	// (0x000b1eb9) main_cset_text_pane_t3_copy1

0xcda1,	// (0x000b1ec7) main_cset_text_pane_t4_copy1

0xcdaf,	// (0x000b1ed5) main_cset_text_pane_t5_copy1

0xd557,	// (0x000b267d) main_cset_text_pane_t6_copy1

0xd565,	// (0x000b268b) main_cset_text_pane_t7_copy1

0x71f1,	// (0x000ac317) main_cset_text2_pane_t1_copy1

0x9567,	// (0x000ae68d) main_ncimui_pane

0x38a0,	// (0x000a89c6) popup_query_ncimui_window_ParamLimits

0x38a0,	// (0x000a89c6) popup_query_ncimui_window

0xc358,	// (0x000b147e) field_cale_ev2_pane_g4_ParamLimits

0xc358,	// (0x000b147e) field_cale_ev2_pane_g4

0x54aa,	// (0x000aa5d0) cell_video_dialer_keypad_pane_g2_ParamLimits

0x54aa,	// (0x000aa5d0) cell_video_dialer_keypad_pane_g2

0x0001,

0xf891,	// (0x000b49b7) cell_video_dialer_keypad_pane_g_ParamLimits

0xf891,	// (0x000b49b7) cell_video_dialer_keypad_pane_g

0x54c2,	// (0x000aa5e8) cell_video_dialer_keypad_pane_t1

0xe633,	// (0x000b3759) bg_popup_window_pane_cp012

0xa4fe,	// (0x000af624) heading_pane_cp06

0xd591,	// (0x000b26b7) ncim_query_content_pane

0xe633,	// (0x000b3759) bg_popup_heading_pane_cp01

0xd599,	// (0x000b26bf) ncim_heading_pane_t1

0xd5a7,	// (0x000b26cd) ncim_indicator_popup_pane

0xd5b9,	// (0x000b26df) ncim_query_button_pane

0xd5cd,	// (0x000b26f3) ncim_query_content_pane_t1

0xd5df,	// (0x000b2705) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x000b4d21) ncim_query_content_pane_t

0xd619,	// (0x000b273f) ncim_query_list_pane

0xd62b,	// (0x000b2751) ncim_query_popup_pane

0xd5a7,	// (0x000b26cd) ncim_indicator_popup_pane_ParamLimits

0x7670,	// (0x000ac796) ncim_query_content_pane_g1_ParamLimits

0x7670,	// (0x000ac796) ncim_query_content_pane_g1

0xd5cd,	// (0x000b26f3) ncim_query_content_pane_t1_ParamLimits

0xd5df,	// (0x000b2705) ncim_query_content_pane_t2_ParamLimits

0x767c,	// (0x000ac7a2) ncim_query_content_pane_t3_ParamLimits

0x767c,	// (0x000ac7a2) ncim_query_content_pane_t3

0x76a4,	// (0x000ac7ca) ncim_query_content_pane_t4_ParamLimits

0x76a4,	// (0x000ac7ca) ncim_query_content_pane_t4

0x76cc,	// (0x000ac7f2) ncim_query_content_pane_t5_ParamLimits

0x76cc,	// (0x000ac7f2) ncim_query_content_pane_t5

0xd5f1,	// (0x000b2717) ncim_query_content_pane_t6_ParamLimits

0xd5f1,	// (0x000b2717) ncim_query_content_pane_t6

0xfbfb,	// (0x000b4d21) ncim_query_content_pane_t_ParamLimits

0xd619,	// (0x000b273f) ncim_query_list_pane_ParamLimits

0xd62b,	// (0x000b2751) ncim_query_popup_pane_ParamLimits

0xd63f,	// (0x000b2765) wait_bar_pane_cp04

0xe633,	// (0x000b3759) input_focus_pane_cp011

0xd647,	// (0x000b276d) ncim_query_popup_pane_t1

0xd655,	// (0x000b277b) ncim_list_query_list_pane_ParamLimits

0xd655,	// (0x000b277b) ncim_list_query_list_pane

0xe633,	// (0x000b3759) bg_button_pane_cp027

0xd662,	// (0x000b2788) ncim_query_button_pane_g1

0xe633,	// (0x000b3759) list_highlight_pane_cp012

0xd66c,	// (0x000b2792) ncim_list_query_list_pane_g1

0xd674,	// (0x000b279a) ncim_list_query_list_pane_t1

0xa0ef,	// (0x000af215) cam4_indicators_pane_g3_ParamLimits

0xa0ef,	// (0x000af215) cam4_indicators_pane_g3

0xa16f,	// (0x000af295) vid4_indicators_pane_g5_ParamLimits

0xa16f,	// (0x000af295) vid4_indicators_pane_g5

0xa25d,	// (0x000af383) vid4_progress_pane_g5_ParamLimits

0xa25d,	// (0x000af383) vid4_progress_pane_g5

0x755b,	// (0x000ac681) main_ncimui_pane_g1

0x75c4,	// (0x000ac6ea) ncimui_group_query_pane_ParamLimits

0x75c4,	// (0x000ac6ea) ncimui_group_query_pane

0x760c,	// (0x000ac732) ncimui_list_pane_ParamLimits

0x760c,	// (0x000ac732) ncimui_list_pane

0x7633,	// (0x000ac759) ncimui_text_pane_ParamLimits

0x7633,	// (0x000ac759) ncimui_text_pane

0x76f4,	// (0x000ac81a) ncimui_text_pane_t1_ParamLimits

0x76f4,	// (0x000ac81a) ncimui_text_pane_t1

0xd682,	// (0x000b27a8) ncimui_list_single_graphic_pane_ParamLimits

0xd682,	// (0x000b27a8) ncimui_list_single_graphic_pane

0x7712,	// (0x000ac838) ncimui_query_pane_ParamLimits

0x7712,	// (0x000ac838) ncimui_query_pane

0xe633,	// (0x000b3759) list_highlight_pane_cp013

0xd692,	// (0x000b27b8) ncim_list_query_list_pane_t1_copy1

0xd66c,	// (0x000b2792) ncim_list_single_graphic_pane_g1

0x7725,	// (0x000ac84b) ncim_query_button_pane_cp01

0x7731,	// (0x000ac857) ncim_query_entry_pane_ParamLimits

0x7731,	// (0x000ac857) ncim_query_entry_pane

0x7744,	// (0x000ac86a) ncimui_query_pane_g1

0x7750,	// (0x000ac876) ncimui_query_pane_t1_ParamLimits

0x7750,	// (0x000ac876) ncimui_query_pane_t1

0xee42,	// (0x000b3f68) input_focus_pane_cp012

0xd6a0,	// (0x000b27c6) ncim_query_entry_pane_t1

0xed70,	// (0x000b3e96) main_im_pane_ParamLimits

0x9567,	// (0x000ae68d) main_mobtv_pane_ParamLimits

0x9567,	// (0x000ae68d) main_mobtv_pane

0x731b,	// (0x000ac441) main_cset6_slider_pane_g18_ParamLimits

0x731b,	// (0x000ac441) main_cset6_slider_pane_g18

0x7327,	// (0x000ac44d) main_cset6_slider_pane_g19_ParamLimits

0x7327,	// (0x000ac44d) main_cset6_slider_pane_g19

0x7769,	// (0x000ac88f) bg_main_mobtv_pane_ParamLimits

0x7769,	// (0x000ac88f) bg_main_mobtv_pane

0x7777,	// (0x000ac89d) main_mobtv_info_pane

0x7780,	// (0x000ac8a6) main_mobtv_loading_pane_ParamLimits

0x7780,	// (0x000ac8a6) main_mobtv_loading_pane

0xd6b2,	// (0x000b27d8) main_mobtv_pg_channel_list_pane

0xd6bc,	// (0x000b27e2) main_mobtv_pg_hdr_pane

0x778d,	// (0x000ac8b3) main_mobtv_programe_curr_pane_ParamLimits

0x778d,	// (0x000ac8b3) main_mobtv_programe_curr_pane

0x779a,	// (0x000ac8c0) main_mobtv_programe_next_pane_ParamLimits

0x779a,	// (0x000ac8c0) main_mobtv_programe_next_pane

0xd6c5,	// (0x000b27eb) popup_mobtv_noti_window

0xc090,	// (0x000b11b6) main_tv_pg_hdr_pane_g1

0xd6cd,	// (0x000b27f3) main_tv_pg_hdr_pane_g2

0xd6d5,	// (0x000b27fb) main_tv_pg_hdr_pane_g3

0xd6dd,	// (0x000b2803) main_tv_pg_hdr_pane_g4

0xd6e5,	// (0x000b280b) main_tv_pg_hdr_pane_g5

0xd6ef,	// (0x000b2815) main_tv_pg_hdr_pane_g6

0xd6f9,	// (0x000b281f) main_tv_pg_hdr_pane_g7

0xd703,	// (0x000b2829) main_tv_pg_hdr_pane_g8

0xd70d,	// (0x000b2833) main_tv_pg_hdr_pane_g9

0xd717,	// (0x000b283d) main_tv_pg_hdr_pane_g10

0xd721,	// (0x000b2847) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x000b4d2e) main_tv_pg_hdr_pane_g

0xd72b,	// (0x000b2851) main_tv_pg_hdr_pane_t1

0xd739,	// (0x000b285f) main_tv_pg_hdr_pane_t2

0xd747,	// (0x000b286d) main_tv_pg_hdr_pane_t3

0xd757,	// (0x000b287d) main_tv_pg_hdr_pane_t4

0xd767,	// (0x000b288d) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x000b4d45) main_tv_pg_hdr_pane_t

0xd777,	// (0x000b289d) single_mobtv_pg_channel_pane_ParamLimits

0xd777,	// (0x000b289d) single_mobtv_pg_channel_pane

0xd789,	// (0x000b28af) single_mobtv_pg_channel_table_pane

0xd792,	// (0x000b28b8) single_mobtv_pg_channel_thumb_pane

0xd79b,	// (0x000b28c1) single_tv_pg_channel_pane_g1

0xd7a4,	// (0x000b28ca) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x000b4d50) single_tv_pg_channel_pane_g

0xc2f3,	// (0x000b1419) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc2f3,	// (0x000b1419) bg_single_mobtv_pg_channel_thumb_pane

0xd7ad,	// (0x000b28d3) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd7ad,	// (0x000b28d3) single_mobtv_pg_channel_thumb_pane_g1

0xd7bb,	// (0x000b28e1) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd7bb,	// (0x000b28e1) single_mobtv_pg_channel_thumb_pane_g2

0xd7c7,	// (0x000b28ed) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd7c7,	// (0x000b28ed) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x000b4d55) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x000b4d55) single_mobtv_pg_channel_thumb_pane_g

0xd7d3,	// (0x000b28f9) single_mobtv_pg_channel_thumb_pane_t1

0xd7e1,	// (0x000b2907) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x000b4d5c) single_mobtv_pg_channel_thumb_pane_t

0xc090,	// (0x000b11b6) bg_single_mobtv_pg_channel_table_pane_g1

0xc090,	// (0x000b11b6) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d8,	// (0x000b47fe) bg_single_mobtv_pg_channel_table_pane_g

0xd7ef,	// (0x000b2915) single_mobtv_pg_channel_table_pane_t1

0xd7fd,	// (0x000b2923) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x000b4d61) single_mobtv_pg_channel_table_pane_t

0x77af,	// (0x000ac8d5) main_mobtv_info_pane_g1_ParamLimits

0x77af,	// (0x000ac8d5) main_mobtv_info_pane_g1

0x77cd,	// (0x000ac8f3) main_mobtv_info_pane_t1_ParamLimits

0x77cd,	// (0x000ac8f3) main_mobtv_info_pane_t1

0x7845,	// (0x000ac96b) main_mobtv_info_pane_t2_ParamLimits

0x7845,	// (0x000ac96b) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x000b4d6b) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x000b4d6b) main_mobtv_info_pane_t

0x78d4,	// (0x000ac9fa) wait_bar_pane_cp05

0x78e6,	// (0x000aca0c) main_mobtv_loading_pane_g1_ParamLimits

0x78e6,	// (0x000aca0c) main_mobtv_loading_pane_g1

0x78f9,	// (0x000aca1f) main_mobtv_loading_pane_g2_ParamLimits

0x78f9,	// (0x000aca1f) main_mobtv_loading_pane_g2

0x7905,	// (0x000aca2b) main_mobtv_loading_pane_g3_ParamLimits

0x7905,	// (0x000aca2b) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x000b4d72) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x000b4d72) main_mobtv_loading_pane_g

0xd80b,	// (0x000b2931) main_mobtv_loading_pane_t1_ParamLimits

0xd80b,	// (0x000b2931) main_mobtv_loading_pane_t1

0xd823,	// (0x000b2949) main_mobtv_loading_pane_t2_ParamLimits

0xd823,	// (0x000b2949) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x000b4d79) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x000b4d79) main_mobtv_loading_pane_t

0x7918,	// (0x000aca3e) wait_bar_pane_cp06_ParamLimits

0x7918,	// (0x000aca3e) wait_bar_pane_cp06

0xd847,	// (0x000b296d) main_mobtv_programe_curr_pane_t1

0xd855,	// (0x000b297b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x000b4d7e) main_mobtv_programe_curr_pane_t

0xd863,	// (0x000b2989) main_mobtv_programe_next_pane_t1

0xd871,	// (0x000b2997) main_mobtv_programe_next_pane_t2

0xd87f,	// (0x000b29a5) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x000b4d83) main_mobtv_programe_next_pane_t

0xe633,	// (0x000b3759) bg_popup_mobtv_noti_window_pane

0xd88d,	// (0x000b29b3) popup_mobtv_noti_window_g1

0xd895,	// (0x000b29bb) popup_mobtv_noti_window_t1

0xd8a3,	// (0x000b29c9) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x000b4d8a) popup_mobtv_noti_window_t

0xc090,	// (0x000b11b6) bg_popup_mobtv_noti_window_pane_g1

0x9575,	// (0x000ae69b) sc_clock_pane

0x9575,	// (0x000ae69b) main_fs_bigclock_pane

0x6f27,	// (0x000ac04d) blid2_tripm_pane_t4_ParamLimits

0x6f27,	// (0x000ac04d) blid2_tripm_pane_t4

0x7927,	// (0x000aca4d) sc_clock_pane_g1_ParamLimits

0x7927,	// (0x000aca4d) sc_clock_pane_g1

0x7939,	// (0x000aca5f) sc_clock_pane_t1_ParamLimits

0x7939,	// (0x000aca5f) sc_clock_pane_t1

0x795b,	// (0x000aca81) sc_clock_pane_t2_ParamLimits

0x795b,	// (0x000aca81) sc_clock_pane_t2

0x7973,	// (0x000aca99) sc_clock_pane_t3_ParamLimits

0x7973,	// (0x000aca99) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x000b4d8f) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x000b4d8f) sc_clock_pane_t

0x89b5,	// (0x000adadb) main_fs_bigclock_indicator_pane_ParamLimits

0x89b5,	// (0x000adadb) main_fs_bigclock_indicator_pane

0x7a19,	// (0x000acb3f) main_fs_bigclock_pane_g1_ParamLimits

0x7a19,	// (0x000acb3f) main_fs_bigclock_pane_g1

0x89c1,	// (0x000adae7) main_fs_bigclock_pane_t1_ParamLimits

0x89c1,	// (0x000adae7) main_fs_bigclock_pane_t1

0x89d3,	// (0x000adaf9) main_fs_bigclock_pane_t2_ParamLimits

0x89d3,	// (0x000adaf9) main_fs_bigclock_pane_t2

0x89e7,	// (0x000adb0d) main_fs_bigclock_pane_t3_ParamLimits

0x89e7,	// (0x000adb0d) main_fs_bigclock_pane_t3

0x0002,

0xfe55,	// (0x000b4f7b) main_fs_bigclock_pane_t_ParamLimits

0xfe55,	// (0x000b4f7b) main_fs_bigclock_pane_t

0xe40f,	// (0x000b3535) main_fs_bigclock_indicator_pane_g1

0xd5c1,	// (0x000b26e7) ncim_query_content_pane_g2_ParamLimits

0xd5c1,	// (0x000b26e7) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x000b4d1c) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x000b4d1c) ncim_query_content_pane_g

0x798c,	// (0x000acab2) sc_clock_pane_t4_ParamLimits

0x798c,	// (0x000acab2) sc_clock_pane_t4

0x9567,	// (0x000ae68d) main_radioblah_pane

0xa053,	// (0x000af179) cell_call4_button_pane_t1_copy1_ParamLimits

0xa053,	// (0x000af179) cell_call4_button_pane_t1_copy1

0x7573,	// (0x000ac699) main_ncimui_pane_t1_ParamLimits

0x7573,	// (0x000ac699) main_ncimui_pane_t1

0x758d,	// (0x000ac6b3) main_ncimui_pane_t2_ParamLimits

0x758d,	// (0x000ac6b3) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x000b4d15) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x000b4d15) main_ncimui_pane_t

0xd9e8,	// (0x000b2b0e) main_radioblah_anim_pane_ParamLimits

0xd9e8,	// (0x000b2b0e) main_radioblah_anim_pane

0xd9f9,	// (0x000b2b1f) main_radioblah_info_pane_ParamLimits

0xd9f9,	// (0x000b2b1f) main_radioblah_info_pane

0xda0d,	// (0x000b2b33) main_radioblah_pane_t1_ParamLimits

0xda0d,	// (0x000b2b33) main_radioblah_pane_t1

0xda29,	// (0x000b2b4f) main_radioblah_pane_t2_ParamLimits

0xda29,	// (0x000b2b4f) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x000b4db0) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x000b4db0) main_radioblah_pane_t

0x7a78,	// (0x000acb9e) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7a78,	// (0x000acb9e) main_radioblah_rocker_ctrl_pane

0xda71,	// (0x000b2b97) main_radioblah_info_pane_t1_ParamLimits

0xda71,	// (0x000b2b97) main_radioblah_info_pane_t1

0x7ad0,	// (0x000acbf6) main_radioblah_info_pane_t2_ParamLimits

0x7ad0,	// (0x000acbf6) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x000b4db9) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x000b4db9) main_radioblah_info_pane_t

0xc090,	// (0x000b11b6) main_radioblah_rocker_ctrl_pane_g1

0x7b80,	// (0x000acca6) main_radioblah_rocker_ctrl_pane_g2

0x7b88,	// (0x000accae) main_radioblah_rocker_ctrl_pane_g3

0x7b90,	// (0x000accb6) main_radioblah_rocker_ctrl_pane_g4

0x7b98,	// (0x000accbe) main_radioblah_rocker_ctrl_pane_g5

0x7ba0,	// (0x000accc6) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x000b4dc2) main_radioblah_rocker_ctrl_pane_g

0x71f1,	// (0x000ac317) main_cset_text2_pane_t1_copy1_ParamLimits

0xa0b1,	// (0x000af1d7) cam4_image_uncrop_qvga_pane

0xa118,	// (0x000af23e) vid4_image_uncrop_qcif_pane

0xa293,	// (0x000af3b9) cam6_image_uncrop_qvga_pane_ParamLimits

0xa293,	// (0x000af3b9) cam6_image_uncrop_qvga_pane

0xd2ad,	// (0x000b23d3) vid6_image_uncrop_qcif_pane_ParamLimits

0xd2ad,	// (0x000b23d3) vid6_image_uncrop_qcif_pane

0xe633,	// (0x000b3759) bg_popup_preview_window_pane_cp03

0xd573,	// (0x000b2699) list_cset_text2_pane

0xd57b,	// (0x000b26a1) main_cset6_text2_pane_g1

0xd583,	// (0x000b26a9) main_cset6_text2_pane_t1

0x7ba8,	// (0x000accce) list_cset_text2_pane_t1_ParamLimits

0x7ba8,	// (0x000accce) list_cset_text2_pane_t1

0x9567,	// (0x000ae68d) main_radioblah_pane_ParamLimits

0x78c0,	// (0x000ac9e6) main_mobtv_info_pane_t3_ParamLimits

0x78c0,	// (0x000ac9e6) main_mobtv_info_pane_t3

0x7a66,	// (0x000acb8c) main_radioblah_pane_g1

0x7aa0,	// (0x000acbc6) main_radioblah_info_pane_g1

0x7b25,	// (0x000acc4b) main_radioblah_info_pane_t3_ParamLimits

0x7b25,	// (0x000acc4b) main_radioblah_info_pane_t3

0x22a4,	// (0x000a73ca) highlight_cell_cale_month_pane_ParamLimits

0x22a4,	// (0x000a73ca) highlight_cell_cale_month_pane

0x9575,	// (0x000ae69b) main_phob_fisheye_pane

0xc427,	// (0x000b154d) scroll_pane_cp0031_ParamLimits

0xc427,	// (0x000b154d) scroll_pane_cp0031

0xd3bb,	// (0x000b24e1) wait_bar_pane_cp08_ParamLimits

0x7276,	// (0x000ac39c) cset_list_set_pane_copy1_ParamLimits

0xdaab,	// (0x000b2bd1) highlight_cell_cale_month_pane_g1

0x7bc1,	// (0x000acce7) highlight_cell_cale_month_pane_t1

0xd03f,	// (0x000b2165) list_gen_pane_cp01

0xcbfa,	// (0x000b1d20) scroll_pane_01

0xee6d,	// (0x000b3f93) list_single_double_fisheye_pane

0x7bcf,	// (0x000accf5) list_double_fisheye_pane_g1_ParamLimits

0x7bcf,	// (0x000accf5) list_double_fisheye_pane_g1

0x7bdb,	// (0x000acd01) list_double_fisheye_pane_g2_ParamLimits

0x7bdb,	// (0x000acd01) list_double_fisheye_pane_g2

0x7bef,	// (0x000acd15) list_double_fisheye_pane_g3_ParamLimits

0x7bef,	// (0x000acd15) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x000b4dcf) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x000b4dcf) list_double_fisheye_pane_g

0x7c18,	// (0x000acd3e) list_double_fisheye_pane_t1_ParamLimits

0x7c18,	// (0x000acd3e) list_double_fisheye_pane_t1

0x7c33,	// (0x000acd59) list_double_fisheye_pane_t2_ParamLimits

0x7c33,	// (0x000acd59) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x000b4dda) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x000b4dda) list_double_fisheye_pane_t

0x9575,	// (0x000ae69b) main_call5_pane

0x79b7,	// (0x000acadd) sc_swipe_pane_ParamLimits

0x79b7,	// (0x000acadd) sc_swipe_pane

0x7c68,	// (0x000acd8e) call5_image_pane_ParamLimits

0x7c68,	// (0x000acd8e) call5_image_pane

0x7c85,	// (0x000acdab) call5_swipe_1_pane_ParamLimits

0x7c85,	// (0x000acdab) call5_swipe_1_pane

0x7c98,	// (0x000acdbe) call5_swipe_2_pane_ParamLimits

0x7c98,	// (0x000acdbe) call5_swipe_2_pane

0x7cc3,	// (0x000acde9) popup_call5_audio_first_window_ParamLimits

0x7cc3,	// (0x000acde9) popup_call5_audio_first_window

0xc2f3,	// (0x000b1419) call5_swipe_1_pane_g1_ParamLimits

0xc2f3,	// (0x000b1419) call5_swipe_1_pane_g1

0xdab3,	// (0x000b2bd9) call5_swipe_1_pane_g2_ParamLimits

0xdab3,	// (0x000b2bd9) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x000b4ddf) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x000b4ddf) call5_swipe_1_pane_g

0xdabf,	// (0x000b2be5) call5_swipe_1_pane_t1_ParamLimits

0xdabf,	// (0x000b2be5) call5_swipe_1_pane_t1

0xc2f3,	// (0x000b1419) call5_swipe_2_pane_g1_ParamLimits

0xc2f3,	// (0x000b1419) call5_swipe_2_pane_g1

0xdad4,	// (0x000b2bfa) call5_swipe_2_pane_g2_ParamLimits

0xdad4,	// (0x000b2bfa) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x000b4de4) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x000b4de4) call5_swipe_2_pane_g

0xdae0,	// (0x000b2c06) call5_swipe_2_pane_t1_ParamLimits

0xdae0,	// (0x000b2c06) call5_swipe_2_pane_t1

0xdaf5,	// (0x000b2c1b) sc_swipe_pane_g1_ParamLimits

0xdaf5,	// (0x000b2c1b) sc_swipe_pane_g1

0xdb02,	// (0x000b2c28) sc_swipe_pane_g2_ParamLimits

0xdb02,	// (0x000b2c28) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x000b4de9) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x000b4de9) sc_swipe_pane_g

0xdb0e,	// (0x000b2c34) sc_swipe_pane_t1_ParamLimits

0xdb0e,	// (0x000b2c34) sc_swipe_pane_t1

0x9575,	// (0x000ae69b) main_cmail_launcher_pane

0x7cd4,	// (0x000acdfa) aid_size_cell_cmail_l_ParamLimits

0x7cd4,	// (0x000acdfa) aid_size_cell_cmail_l

0x7ce2,	// (0x000ace08) grid_cmail_l_pane_ParamLimits

0x7ce2,	// (0x000ace08) grid_cmail_l_pane

0x7cfc,	// (0x000ace22) cell_cmail_l_pane_ParamLimits

0x7cfc,	// (0x000ace22) cell_cmail_l_pane

0xdb23,	// (0x000b2c49) cell_cmail_l_pane_g1_ParamLimits

0xdb23,	// (0x000b2c49) cell_cmail_l_pane_g1

0xdb2f,	// (0x000b2c55) cell_cmail_l_pane_t1_ParamLimits

0xdb2f,	// (0x000b2c55) cell_cmail_l_pane_t1

0xdb45,	// (0x000b2c6b) cell_cmail_l_pane_t2_ParamLimits

0xdb45,	// (0x000b2c6b) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x000b4dee) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x000b4dee) cell_cmail_l_pane_t

0xee42,	// (0x000b3f68) grid_highlight_pane_cp018_ParamLimits

0xee42,	// (0x000b3f68) grid_highlight_pane_cp018

0x035b,	// (0x000a5481) main2_pane_ParamLimits

0x035b,	// (0x000a5481) main2_pane

0xee12,	// (0x000b3f38) popup_sp_fs_action_menu_bg_pane_g1

0xee1a,	// (0x000b3f40) popup_sp_fs_action_menu_bg_pane_g2

0xee22,	// (0x000b3f48) popup_sp_fs_action_menu_bg_pane_g3

0xee2a,	// (0x000b3f50) popup_sp_fs_action_menu_bg_pane_g4

0xee32,	// (0x000b3f58) popup_sp_fs_action_menu_bg_pane_g5

0xee3a,	// (0x000b3f60) popup_sp_fs_action_menu_bg_pane_g6

0x95c5,	// (0x000ae6eb) popup_sp_fs_action_menu_bg_pane_g7

0x95cd,	// (0x000ae6f3) popup_sp_fs_action_menu_bg_pane_g8

0x95d5,	// (0x000ae6fb) popup_sp_fs_action_menu_bg_pane_g9

0x95dd,	// (0x000ae703) popup_sp_fs_action_menu_bg_pane_g10

0x95dd,	// (0x000ae703) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x000b42ac) popup_sp_fs_action_menu_bg_pane_g

0x1287,	// (0x000a63ad) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1287,	// (0x000a63ad) list_medium_line_x2_t3_g3_g1

0x1293,	// (0x000a63b9) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1293,	// (0x000a63b9) list_medium_line_x2_t3_g3_g2

0x129f,	// (0x000a63c5) list_medium_line_x2_t3_g3_g3_ParamLimits

0x129f,	// (0x000a63c5) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x000b435a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x000b435a) list_medium_line_x2_t3_g3_g

0x12ab,	// (0x000a63d1) list_medium_line_x2_t3_g3_t1_ParamLimits

0x12ab,	// (0x000a63d1) list_medium_line_x2_t3_g3_t1

0x12c0,	// (0x000a63e6) list_medium_line_x2_t3_g3_t2_ParamLimits

0x12c0,	// (0x000a63e6) list_medium_line_x2_t3_g3_t2

0x12d4,	// (0x000a63fa) list_medium_line_x2_t3_g3_t3_ParamLimits

0x12d4,	// (0x000a63fa) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x000b4361) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x000b4361) list_medium_line_x2_t3_g3_t

0x1287,	// (0x000a63ad) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1287,	// (0x000a63ad) list_medium_line_x2_t3_g2_g1

0x129f,	// (0x000a63c5) list_medium_line_x2_t3_g2_g2_ParamLimits

0x129f,	// (0x000a63c5) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x000b4368) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x000b4368) list_medium_line_x2_t3_g2_g

0x12e9,	// (0x000a640f) list_medium_line_x2_t3_g2_t1_ParamLimits

0x12e9,	// (0x000a640f) list_medium_line_x2_t3_g2_t1

0x12ff,	// (0x000a6425) list_medium_line_x2_t3_g2_t2_ParamLimits

0x12ff,	// (0x000a6425) list_medium_line_x2_t3_g2_t2

0x12d4,	// (0x000a63fa) list_medium_line_x2_t3_g2_t3_ParamLimits

0x12d4,	// (0x000a63fa) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x000b436d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x000b436d) list_medium_line_x2_t3_g2_t

0x1287,	// (0x000a63ad) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1287,	// (0x000a63ad) list_medium_line_x2_t4_g4_g1

0x1311,	// (0x000a6437) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1311,	// (0x000a6437) list_medium_line_x2_t4_g4_g2

0x1293,	// (0x000a63b9) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1293,	// (0x000a63b9) list_medium_line_x2_t4_g4_g3

0x131d,	// (0x000a6443) list_medium_line_x2_t4_g4_g4_ParamLimits

0x131d,	// (0x000a6443) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x000b4374) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x000b4374) list_medium_line_x2_t4_g4_g

0x1329,	// (0x000a644f) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1329,	// (0x000a644f) list_medium_line_x2_t4_g4_t1

0x1343,	// (0x000a6469) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1343,	// (0x000a6469) list_medium_line_x2_t4_g4_t2

0x1359,	// (0x000a647f) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1359,	// (0x000a647f) list_medium_line_x2_t4_g4_t3

0x136e,	// (0x000a6494) list_medium_line_x2_t4_g4_t4_ParamLimits

0x136e,	// (0x000a6494) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x000b437d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x000b437d) list_medium_line_x2_t4_g4_t

0x1287,	// (0x000a63ad) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1287,	// (0x000a63ad) list_medium_line_x2_t2_g4_g1

0x1311,	// (0x000a6437) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1311,	// (0x000a6437) list_medium_line_x2_t2_g4_g2

0x1293,	// (0x000a63b9) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1293,	// (0x000a63b9) list_medium_line_x2_t2_g4_g3

0x129f,	// (0x000a63c5) list_medium_line_x2_t2_g4_g4_ParamLimits

0x129f,	// (0x000a63c5) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x000b43e4) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x000b43e4) list_medium_line_x2_t2_g4_g

0x22ca,	// (0x000a73f0) list_medium_line_x2_t2_g4_t1_ParamLimits

0x22ca,	// (0x000a73f0) list_medium_line_x2_t2_g4_t1

0x12d4,	// (0x000a63fa) list_medium_line_x2_t2_g4_t2_ParamLimits

0x12d4,	// (0x000a63fa) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x000b43ed) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x000b43ed) list_medium_line_x2_t2_g4_t

0x1287,	// (0x000a63ad) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1287,	// (0x000a63ad) list_medium_line_x2_t2_g3_g1

0x1293,	// (0x000a63b9) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1293,	// (0x000a63b9) list_medium_line_x2_t2_g3_g2

0x129f,	// (0x000a63c5) list_medium_line_x2_t2_g3_g3_ParamLimits

0x129f,	// (0x000a63c5) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x000b435a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x000b435a) list_medium_line_x2_t2_g3_g

0x22df,	// (0x000a7405) list_medium_line_x2_t2_g3_t1_ParamLimits

0x22df,	// (0x000a7405) list_medium_line_x2_t2_g3_t1

0x12d4,	// (0x000a63fa) list_medium_line_x2_t2_g3_t2_ParamLimits

0x12d4,	// (0x000a63fa) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x000b43f2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x000b43f2) list_medium_line_x2_t2_g3_t

0x2428,	// (0x000a754e) main_sp_fs_list_pane_ParamLimits

0x2428,	// (0x000a754e) main_sp_fs_list_pane

0xbdf1,	// (0x000b0f17) sp_fs_scroll_pane_ParamLimits

0xbdf1,	// (0x000b0f17) sp_fs_scroll_pane

0x2434,	// (0x000a755a) list_medium_line_x2_t3_t1

0x2444,	// (0x000a756a) list_medium_line_x2_t3_t2

0x2452,	// (0x000a7578) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x000b443d) list_medium_line_x2_t3_t

0x2460,	// (0x000a7586) list_medium_line_x3_t4_t1

0x2470,	// (0x000a7596) list_medium_line_x3_t4_t2

0x247e,	// (0x000a75a4) list_medium_line_x3_t4_t3

0x2452,	// (0x000a7578) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x000b4444) list_medium_line_x3_t4_t

0x248c,	// (0x000a75b2) list_medium_line_x4_t5_t1

0x249c,	// (0x000a75c2) list_medium_line_x4_t5_t2

0x247e,	// (0x000a75a4) list_medium_line_x4_t5_t3

0x24aa,	// (0x000a75d0) list_medium_line_x4_t5_t4

0x2452,	// (0x000a7578) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x000b444d) list_medium_line_x4_t5_t

0x1287,	// (0x000a63ad) list_medium_line_t4_g4_g1_ParamLimits

0x1287,	// (0x000a63ad) list_medium_line_t4_g4_g1

0x24b8,	// (0x000a75de) list_medium_line_t4_g4_g2_ParamLimits

0x24b8,	// (0x000a75de) list_medium_line_t4_g4_g2

0x24c4,	// (0x000a75ea) list_medium_line_t4_g4_g3_ParamLimits

0x24c4,	// (0x000a75ea) list_medium_line_t4_g4_g3

0x129f,	// (0x000a63c5) list_medium_line_t4_g4_g4_ParamLimits

0x129f,	// (0x000a63c5) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x000b4458) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x000b4458) list_medium_line_t4_g4_g

0x24d0,	// (0x000a75f6) list_medium_line_t4_g4_t1_ParamLimits

0x24d0,	// (0x000a75f6) list_medium_line_t4_g4_t1

0x24e5,	// (0x000a760b) list_medium_line_t4_g4_t2_ParamLimits

0x24e5,	// (0x000a760b) list_medium_line_t4_g4_t2

0x24fa,	// (0x000a7620) list_medium_line_t4_g4_t3_ParamLimits

0x24fa,	// (0x000a7620) list_medium_line_t4_g4_t3

0x12d4,	// (0x000a63fa) list_medium_line_t4_g4_t4_ParamLimits

0x12d4,	// (0x000a63fa) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x000b4461) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x000b4461) list_medium_line_t4_g4_t

0x25c2,	// (0x000a76e8) chi_dic_find_pane_g1

0x366a,	// (0x000a8790) main_tport_pane

0x6590,	// (0x000ab6b6) list_medium_line_plain_t1

0x6638,	// (0x000ab75e) list_medium_line_t2_g2_g1_ParamLimits

0x6638,	// (0x000ab75e) list_medium_line_t2_g2_g1

0x6644,	// (0x000ab76a) list_medium_line_t2_g2_g2_ParamLimits

0x6644,	// (0x000ab76a) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000b4b26) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000b4b26) list_medium_line_t2_g2_g

0x6650,	// (0x000ab776) list_medium_line_t2_g2_t1_ParamLimits

0x6650,	// (0x000ab776) list_medium_line_t2_g2_t1

0x666a,	// (0x000ab790) list_medium_line_t2_g2_t2_ParamLimits

0x666a,	// (0x000ab790) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000b4b2b) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000b4b2b) list_medium_line_t2_g2_t

0xd048,	// (0x000b216e) aid_sp_fs_list_icon_a_sm

0xee5c,	// (0x000b3f82) aid_sp_fs_list_icon_d

0xee64,	// (0x000b3f8a) aid_sp_fs_text_primary

0xd050,	// (0x000b2176) aid_sp_fs_text_secondary

0x6cdd,	// (0x000abe03) list_medium_line

0x6cdd,	// (0x000abe03) list_medium_line_g2

0x6cdd,	// (0x000abe03) list_medium_line_g3

0x6cdd,	// (0x000abe03) list_medium_line_plain

0x6cdd,	// (0x000abe03) list_medium_line_plain_t2

0x6cdd,	// (0x000abe03) list_medium_line_plain_t3

0x6cdd,	// (0x000abe03) list_medium_line_right_icon

0x6cdd,	// (0x000abe03) list_medium_line_right_iconx2

0x6cdd,	// (0x000abe03) list_medium_line_t2

0x6cdd,	// (0x000abe03) list_medium_line_t2_g2

0x6cdd,	// (0x000abe03) list_medium_line_t2_g3

0x6cdd,	// (0x000abe03) list_medium_line_t2_right_icon

0x6cdd,	// (0x000abe03) list_medium_line_t2_right_iconx2

0x6cdd,	// (0x000abe03) list_medium_line_t3

0x6cdd,	// (0x000abe03) list_medium_line_t3_g2

0x6cdd,	// (0x000abe03) list_medium_line_t3_g3

0x6cdd,	// (0x000abe03) list_medium_line_t3_right_iconx2

0x6ce6,	// (0x000abe0c) list_medium_line_t4_g4

0x6cdd,	// (0x000abe03) list_medium_line_x2

0x6cdd,	// (0x000abe03) list_medium_line_x2_t2_g2

0x6cdd,	// (0x000abe03) list_medium_line_x2_t2_g3

0x6cdd,	// (0x000abe03) list_medium_line_x2_t2_g4

0x6cdd,	// (0x000abe03) list_medium_line_x2_t3

0x6cdd,	// (0x000abe03) list_medium_line_x2_t3_g2

0x6cdd,	// (0x000abe03) list_medium_line_x2_t3_g3

0x6cdd,	// (0x000abe03) list_medium_line_x2_t3_g4

0x6cdd,	// (0x000abe03) list_medium_line_x2_t4_g2

0x6cdd,	// (0x000abe03) list_medium_line_x2_t4_g4

0x6cef,	// (0x000abe15) list_medium_line_x3

0x6cef,	// (0x000abe15) list_medium_line_x3_t4

0x6cef,	// (0x000abe15) list_medium_line_x3_t4_g4

0x6ce6,	// (0x000abe0c) list_medium_line_x4_t4

0x6ce6,	// (0x000abe0c) list_medium_line_x4_t4_g7

0x6ce6,	// (0x000abe0c) list_medium_line_x4_t5

0x6cf8,	// (0x000abe1e) list_single_fs_dyc_pane_ParamLimits

0x6cf8,	// (0x000abe1e) list_single_fs_dyc_pane

0x1287,	// (0x000a63ad) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1287,	// (0x000a63ad) list_medium_line_x4_t4_g7_g1

0x746f,	// (0x000ac595) list_medium_line_x4_t4_g7_g2_ParamLimits

0x746f,	// (0x000ac595) list_medium_line_x4_t4_g7_g2

0x747b,	// (0x000ac5a1) list_medium_line_x4_t4_g7_g3_ParamLimits

0x747b,	// (0x000ac5a1) list_medium_line_x4_t4_g7_g3

0x748a,	// (0x000ac5b0) list_medium_line_x4_t4_g7_g4_ParamLimits

0x748a,	// (0x000ac5b0) list_medium_line_x4_t4_g7_g4

0x7496,	// (0x000ac5bc) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7496,	// (0x000ac5bc) list_medium_line_x4_t4_g7_g5

0x74a5,	// (0x000ac5cb) list_medium_line_x4_t4_g7_g6_ParamLimits

0x74a5,	// (0x000ac5cb) list_medium_line_x4_t4_g7_g6

0x74b4,	// (0x000ac5da) list_medium_line_x4_t4_g7_g7_ParamLimits

0x74b4,	// (0x000ac5da) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x000b4cf6) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x000b4cf6) list_medium_line_x4_t4_g7_g

0x74c0,	// (0x000ac5e6) list_medium_line_x4_t4_g7_t1_ParamLimits

0x74c0,	// (0x000ac5e6) list_medium_line_x4_t4_g7_t1

0x74d5,	// (0x000ac5fb) list_medium_line_x4_t4_g7_t2_ParamLimits

0x74d5,	// (0x000ac5fb) list_medium_line_x4_t4_g7_t2

0x74ea,	// (0x000ac610) list_medium_line_x4_t4_g7_t3_ParamLimits

0x74ea,	// (0x000ac610) list_medium_line_x4_t4_g7_t3

0x74ff,	// (0x000ac625) list_medium_line_x4_t4_g7_t4_ParamLimits

0x74ff,	// (0x000ac625) list_medium_line_x4_t4_g7_t4

0x7511,	// (0x000ac637) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7511,	// (0x000ac637) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x000b4d05) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x000b4d05) list_medium_line_x4_t4_g7_t

0x7523,	// (0x000ac649) list_single_dyc_row_pane_ParamLimits

0x7523,	// (0x000ac649) list_single_dyc_row_pane

0x7c55,	// (0x000acd7b) call5_gesture_pane_ParamLimits

0x7c55,	// (0x000acd7b) call5_gesture_pane

0x7cab,	// (0x000acdd1) call5_windows_pane_ParamLimits

0x7cab,	// (0x000acdd1) call5_windows_pane

0x7d16,	// (0x000ace3c) call5_swipe_1_pane_cp_ParamLimits

0x7d16,	// (0x000ace3c) call5_swipe_1_pane_cp

0x7d22,	// (0x000ace48) call5_swipe_2_pane_cp_ParamLimits

0x7d22,	// (0x000ace48) call5_swipe_2_pane_cp

0x9709,	// (0x000ae82f) call5_image_pane_cp

0x7d2e,	// (0x000ace54) popup_call5_audio_first_window_cp_ParamLimits

0x7d2e,	// (0x000ace54) popup_call5_audio_first_window_cp

0xdaf5,	// (0x000b2c1b) call5_swipe_1_pane_g1_cp_ParamLimits

0xdaf5,	// (0x000b2c1b) call5_swipe_1_pane_g1_cp

0xdb62,	// (0x000b2c88) call5_swipe_1_pane_g2_cp

0xdb0e,	// (0x000b2c34) call5_swipe_1_pane_t1_cp_ParamLimits

0xdb0e,	// (0x000b2c34) call5_swipe_1_pane_t1_cp

0xdaf5,	// (0x000b2c1b) call5_swipe_2_pane_g1_cp_ParamLimits

0xdaf5,	// (0x000b2c1b) call5_swipe_2_pane_g1_cp

0xdb6a,	// (0x000b2c90) call5_swipe_2_pane_g2_cp

0xdb72,	// (0x000b2c98) call5_swipe_2_pane_t1_cp_ParamLimits

0xdb72,	// (0x000b2c98) call5_swipe_2_pane_t1_cp

0xee42,	// (0x000b3f68) main_sp_fs_email_pane

0xdb87,	// (0x000b2cad) main_sp_fs_listscroll_pane_te

0x7d3c,	// (0x000ace62) popup_sp_fs_action_menu_pane_ParamLimits

0x7d3c,	// (0x000ace62) popup_sp_fs_action_menu_pane

0xc090,	// (0x000b11b6) bg_sp_fs_ctrlbar_pane_g1

0xdb90,	// (0x000b2cb6) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xdb99,	// (0x000b2cbf) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xdba2,	// (0x000b2cc8) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc090,	// (0x000b11b6) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x000b4df3) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbe75,	// (0x000b0f9b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbe75,	// (0x000b0f9b) bg_sp_fs_ctrlbar_ddmenu_pane

0xdbab,	// (0x000b2cd1) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdbab,	// (0x000b2cd1) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdbb7,	// (0x000b2cdd) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdbb7,	// (0x000b2cdd) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x000b4dfc) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x000b4dfc) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdbc3,	// (0x000b2ce9) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdbc3,	// (0x000b2ce9) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7d80,	// (0x000acea6) list_medium_line_t2_right_icon_g1

0x7d88,	// (0x000aceae) list_medium_line_t2_right_icon_t1

0x7d98,	// (0x000acebe) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x000b4e01) list_medium_line_t2_right_icon_t

0xbc7c,	// (0x000b0da2) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbc7c,	// (0x000b0da2) bg_sp_fs_ctrlbar_pane

0x7df2,	// (0x000acf18) main_sp_fs_ctrlbar_button_pane_cp01

0x7dfc,	// (0x000acf22) main_sp_fs_ctrlbar_ddmenu_pane

0xdc15,	// (0x000b2d3b) main_sp_fs_ctrlbar_pane_g1

0xdc21,	// (0x000b2d47) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x000b4e06) main_sp_fs_ctrlbar_pane_g

0xdc2d,	// (0x000b2d53) main_sp_fs_ctrlbar_pane_t1

0x7e06,	// (0x000acf2c) main_sp_fs_ctrlbar_pane

0x7e2a,	// (0x000acf50) main_sp_fs_listscroll_pane_te_cp01

0x7e4a,	// (0x000acf70) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7e4a,	// (0x000acf70) popup_sp_fs_action_menu_pane_cp01

0xee42,	// (0x000b3f68) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xee42,	// (0x000b3f68) bg_sp_fs_highlight_list_pane_cp01

0xdc5d,	// (0x000b2d83) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdc5d,	// (0x000b2d83) sp_fs_action_menu_list_gene_pane_g1

0xdc6c,	// (0x000b2d92) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdc6c,	// (0x000b2d92) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x000b4e10) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x000b4e10) sp_fs_action_menu_list_gene_pane_g

0xdc79,	// (0x000b2d9f) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdc79,	// (0x000b2d9f) sp_fs_action_menu_list_gene_pane_t1

0xdc91,	// (0x000b2db7) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdc91,	// (0x000b2db7) sp_fs_action_menu_list_gene_pane

0xdcb2,	// (0x000b2dd8) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdcb2,	// (0x000b2dd8) popup_sp_fs_action_menu_bg_pane

0xdcc0,	// (0x000b2de6) sp_fs_action_menu_list_pane_ParamLimits

0xdcc0,	// (0x000b2de6) sp_fs_action_menu_list_pane

0xee76,	// (0x000b3f9c) sp_fs_scroll_pane_cp01_ParamLimits

0xee76,	// (0x000b3f9c) sp_fs_scroll_pane_cp01

0x7e7a,	// (0x000acfa0) list_medium_line_plain_t2_t1

0x7e8a,	// (0x000acfb0) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x000b4e15) list_medium_line_plain_t2_t

0x7e9a,	// (0x000acfc0) list_medium_line_plain_t3_t1

0x7eaa,	// (0x000acfd0) list_medium_line_plain_t3_t2

0x7eb8,	// (0x000acfde) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x000b4e1a) list_medium_line_plain_t3_t

0x1287,	// (0x000a63ad) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1287,	// (0x000a63ad) list_medium_line_x2_t2_g2_g1

0x129f,	// (0x000a63c5) list_medium_line_x2_t2_g2_g2_ParamLimits

0x129f,	// (0x000a63c5) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x000b4368) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x000b4368) list_medium_line_x2_t2_g2_g

0x24d0,	// (0x000a75f6) list_medium_line_x2_t2_g2_t1_ParamLimits

0x24d0,	// (0x000a75f6) list_medium_line_x2_t2_g2_t1

0x12d4,	// (0x000a63fa) list_medium_line_x2_t2_g2_t2_ParamLimits

0x12d4,	// (0x000a63fa) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x000b4e21) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x000b4e21) list_medium_line_x2_t2_g2_t

0x1287,	// (0x000a63ad) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1287,	// (0x000a63ad) list_medium_line_x2_t4_g2_g1

0x7ec6,	// (0x000acfec) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7ec6,	// (0x000acfec) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x000b4e26) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x000b4e26) list_medium_line_x2_t4_g2_g

0x7ed8,	// (0x000acffe) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7ed8,	// (0x000acffe) list_medium_line_x2_t4_g2_t1

0x7ef2,	// (0x000ad018) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7ef2,	// (0x000ad018) list_medium_line_x2_t4_g2_t2

0x7f08,	// (0x000ad02e) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7f08,	// (0x000ad02e) list_medium_line_x2_t4_g2_t3

0x12d4,	// (0x000a63fa) list_medium_line_x2_t4_g2_t4_ParamLimits

0x12d4,	// (0x000a63fa) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x000b4e2b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x000b4e2b) list_medium_line_x2_t4_g2_t

0x7f1d,	// (0x000ad043) list_medium_line_t3_right_iconx2_g1

0x7d80,	// (0x000acea6) list_medium_line_t3_right_iconx2_g2

0x7f25,	// (0x000ad04b) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x000b4e34) list_medium_line_t3_right_iconx2_g

0x7f2f,	// (0x000ad055) list_medium_line_t3_right_iconx2_t1

0x7f3f,	// (0x000ad065) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x000b4e3b) list_medium_line_t3_right_iconx2_t

0x1287,	// (0x000a63ad) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1287,	// (0x000a63ad) list_medium_line_x3_t4_g4_g1

0x1293,	// (0x000a63b9) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1293,	// (0x000a63b9) list_medium_line_x3_t4_g4_g2

0x24b8,	// (0x000a75de) list_medium_line_x3_t4_g4_g3_ParamLimits

0x24b8,	// (0x000a75de) list_medium_line_x3_t4_g4_g3

0x7f4d,	// (0x000ad073) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7f4d,	// (0x000ad073) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x000b4e40) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x000b4e40) list_medium_line_x3_t4_g4_g

0x7f59,	// (0x000ad07f) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7f59,	// (0x000ad07f) list_medium_line_x3_t4_g4_t1

0x7f70,	// (0x000ad096) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7f70,	// (0x000ad096) list_medium_line_x3_t4_g4_t2

0x24e5,	// (0x000a760b) list_medium_line_x3_t4_g4_t3_ParamLimits

0x24e5,	// (0x000a760b) list_medium_line_x3_t4_g4_t3

0x7f8b,	// (0x000ad0b1) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7f8b,	// (0x000ad0b1) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x000b4e49) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x000b4e49) list_medium_line_x3_t4_g4_t

0x7fa8,	// (0x000ad0ce) list_single_dyc_row_text_pane_t1_ParamLimits

0x7fa8,	// (0x000ad0ce) list_single_dyc_row_text_pane_t1

0x7ff1,	// (0x000ad117) list_single_dyc_row_text_pane_t2_ParamLimits

0x7ff1,	// (0x000ad117) list_single_dyc_row_text_pane_t2

0xdce2,	// (0x000b2e08) list_single_dyc_row_text_pane_t3_ParamLimits

0xdce2,	// (0x000b2e08) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x000b4e52) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x000b4e52) list_single_dyc_row_text_pane_t

0xdd06,	// (0x000b2e2c) list_single_dyc_row_pane_g1_ParamLimits

0xdd06,	// (0x000b2e2c) list_single_dyc_row_pane_g1

0xdd12,	// (0x000b2e38) list_single_dyc_row_pane_g2_ParamLimits

0xdd12,	// (0x000b2e38) list_single_dyc_row_pane_g2

0xdd1e,	// (0x000b2e44) list_single_dyc_row_pane_g3_ParamLimits

0xdd1e,	// (0x000b2e44) list_single_dyc_row_pane_g3

0xdd2a,	// (0x000b2e50) list_single_dyc_row_pane_g4_ParamLimits

0xdd2a,	// (0x000b2e50) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000b4e5f) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000b4e5f) list_single_dyc_row_pane_g

0xdd36,	// (0x000b2e5c) list_single_dyc_row_text_pane_ParamLimits

0xdd36,	// (0x000b2e5c) list_single_dyc_row_text_pane

0xe633,	// (0x000b3759) bg_sp_fs_scroll_pane

0xdd55,	// (0x000b2e7b) thumb_sp_fs_scroll_pane

0x6638,	// (0x000ab75e) list_medium_line_g1_ParamLimits

0x6638,	// (0x000ab75e) list_medium_line_g1

0x8126,	// (0x000ad24c) list_medium_line_t1_ParamLimits

0x8126,	// (0x000ad24c) list_medium_line_t1

0x1287,	// (0x000a63ad) list_medium_line_x2_g1_ParamLimits

0x1287,	// (0x000a63ad) list_medium_line_x2_g1

0x1293,	// (0x000a63b9) list_medium_line_x2_g2_ParamLimits

0x1293,	// (0x000a63b9) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x000b4e68) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x000b4e68) list_medium_line_x2_g

0xdd5e,	// (0x000b2e84) list_medium_line_x2_t1_ParamLimits

0xdd5e,	// (0x000b2e84) list_medium_line_x2_t1

0x1287,	// (0x000a63ad) list_medium_line_x3_g1_ParamLimits

0x1287,	// (0x000a63ad) list_medium_line_x3_g1

0x1293,	// (0x000a63b9) list_medium_line_x3_g2_ParamLimits

0x1293,	// (0x000a63b9) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x000b4e68) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x000b4e68) list_medium_line_x3_g

0xdd5e,	// (0x000b2e84) list_medium_line_x3_t1_ParamLimits

0xdd5e,	// (0x000b2e84) list_medium_line_x3_t1

0xdd74,	// (0x000b2e9a) thumb_sp_fs_scroll_pane_g1

0xdd7d,	// (0x000b2ea3) thumb_sp_fs_scroll_pane_g2

0xdd86,	// (0x000b2eac) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000b4e6d) thumb_sp_fs_scroll_pane_g

0xdd74,	// (0x000b2e9a) bg_sp_fs_scroll_pane_g1

0xdd7d,	// (0x000b2ea3) bg_sp_fs_scroll_pane_g2

0xdd86,	// (0x000b2eac) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000b4e6d) bg_sp_fs_scroll_pane_g

0x1287,	// (0x000a63ad) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1287,	// (0x000a63ad) list_medium_line_x2_t3_g4_g1

0x1311,	// (0x000a6437) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1311,	// (0x000a6437) list_medium_line_x2_t3_g4_g2

0x1293,	// (0x000a63b9) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1293,	// (0x000a63b9) list_medium_line_x2_t3_g4_g3

0x129f,	// (0x000a63c5) list_medium_line_x2_t3_g4_g4_ParamLimits

0x129f,	// (0x000a63c5) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x000b43e4) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x000b43e4) list_medium_line_x2_t3_g4_g

0x813b,	// (0x000ad261) list_medium_line_x2_t3_g4_t1_ParamLimits

0x813b,	// (0x000ad261) list_medium_line_x2_t3_g4_t1

0x8153,	// (0x000ad279) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8153,	// (0x000ad279) list_medium_line_x2_t3_g4_t2

0x12d4,	// (0x000a63fa) list_medium_line_x2_t3_g4_t3_ParamLimits

0x12d4,	// (0x000a63fa) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000b4e74) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000b4e74) list_medium_line_x2_t3_g4_t

0x6638,	// (0x000ab75e) list_medium_line_g2_g1_ParamLimits

0x6638,	// (0x000ab75e) list_medium_line_g2_g1

0x6644,	// (0x000ab76a) list_medium_line_g2_g2_ParamLimits

0x6644,	// (0x000ab76a) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000b4b26) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000b4b26) list_medium_line_g2_g

0x816d,	// (0x000ad293) list_medium_line_g2_t1_ParamLimits

0x816d,	// (0x000ad293) list_medium_line_g2_t1

0x6638,	// (0x000ab75e) list_medium_line_t3_g2_g1_ParamLimits

0x6638,	// (0x000ab75e) list_medium_line_t3_g2_g1

0x6644,	// (0x000ab76a) list_medium_line_t3_g2_g2_ParamLimits

0x6644,	// (0x000ab76a) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000b4b26) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000b4b26) list_medium_line_t3_g2_g

0x8182,	// (0x000ad2a8) list_medium_line_t3_g2_t1_ParamLimits

0x8182,	// (0x000ad2a8) list_medium_line_t3_g2_t1

0x819c,	// (0x000ad2c2) list_medium_line_t3_g2_t2_ParamLimits

0x819c,	// (0x000ad2c2) list_medium_line_t3_g2_t2

0x81b2,	// (0x000ad2d8) list_medium_line_t3_g2_t3_ParamLimits

0x81b2,	// (0x000ad2d8) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000b4e7b) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000b4e7b) list_medium_line_t3_g2_t

0x7d80,	// (0x000acea6) list_medium_line_right_icon_g1

0x81cc,	// (0x000ad2f2) list_medium_line_right_icon_t1

0x6638,	// (0x000ab75e) list_medium_line_t2_g1_ParamLimits

0x6638,	// (0x000ab75e) list_medium_line_t2_g1

0x81da,	// (0x000ad300) list_medium_line_t2_t1_ParamLimits

0x81da,	// (0x000ad300) list_medium_line_t2_t1

0x81f4,	// (0x000ad31a) list_medium_line_t2_t2_ParamLimits

0x81f4,	// (0x000ad31a) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000b4e82) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000b4e82) list_medium_line_t2_t

0x6638,	// (0x000ab75e) list_medium_line_t3_g1_ParamLimits

0x6638,	// (0x000ab75e) list_medium_line_t3_g1

0x820d,	// (0x000ad333) list_medium_line_t3_t1_ParamLimits

0x820d,	// (0x000ad333) list_medium_line_t3_t1

0x8227,	// (0x000ad34d) list_medium_line_t3_t2_ParamLimits

0x8227,	// (0x000ad34d) list_medium_line_t3_t2

0x823d,	// (0x000ad363) list_medium_line_t3_t3_ParamLimits

0x823d,	// (0x000ad363) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000b4e87) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000b4e87) list_medium_line_t3_t

0x6638,	// (0x000ab75e) list_medium_line_g3_g1_ParamLimits

0x6638,	// (0x000ab75e) list_medium_line_g3_g1

0x8252,	// (0x000ad378) list_medium_line_g3_g2_ParamLimits

0x8252,	// (0x000ad378) list_medium_line_g3_g2

0x6644,	// (0x000ab76a) list_medium_line_g3_g3_ParamLimits

0x6644,	// (0x000ab76a) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000b4e8e) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000b4e8e) list_medium_line_g3_g

0x825e,	// (0x000ad384) list_medium_line_g3_t1_ParamLimits

0x825e,	// (0x000ad384) list_medium_line_g3_t1

0x6638,	// (0x000ab75e) list_medium_line_t2_g3_g1_ParamLimits

0x6638,	// (0x000ab75e) list_medium_line_t2_g3_g1

0x8252,	// (0x000ad378) list_medium_line_t2_g3_g2_ParamLimits

0x8252,	// (0x000ad378) list_medium_line_t2_g3_g2

0x6644,	// (0x000ab76a) list_medium_line_t2_g3_g3_ParamLimits

0x6644,	// (0x000ab76a) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000b4e8e) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000b4e8e) list_medium_line_t2_g3_g

0x8273,	// (0x000ad399) list_medium_line_t2_g3_t1_ParamLimits

0x8273,	// (0x000ad399) list_medium_line_t2_g3_t1

0x828d,	// (0x000ad3b3) list_medium_line_t2_g3_t2_ParamLimits

0x828d,	// (0x000ad3b3) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000b4e95) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000b4e95) list_medium_line_t2_g3_t

0x6638,	// (0x000ab75e) list_medium_line_t3_g3_g1_ParamLimits

0x6638,	// (0x000ab75e) list_medium_line_t3_g3_g1

0x8252,	// (0x000ad378) list_medium_line_t3_g3_g2_ParamLimits

0x8252,	// (0x000ad378) list_medium_line_t3_g3_g2

0x6644,	// (0x000ab76a) list_medium_line_t3_g3_g3_ParamLimits

0x6644,	// (0x000ab76a) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000b4e8e) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000b4e8e) list_medium_line_t3_g3_g

0x82a9,	// (0x000ad3cf) list_medium_line_t3_g3_t1_ParamLimits

0x82a9,	// (0x000ad3cf) list_medium_line_t3_g3_t1

0x82c2,	// (0x000ad3e8) list_medium_line_t3_g3_t2_ParamLimits

0x82c2,	// (0x000ad3e8) list_medium_line_t3_g3_t2

0x82d8,	// (0x000ad3fe) list_medium_line_t3_g3_t3_ParamLimits

0x82d8,	// (0x000ad3fe) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000b4e9a) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000b4e9a) list_medium_line_t3_g3_t

0x7f1d,	// (0x000ad043) list_medium_line_right_iconx2_g1

0x7d80,	// (0x000acea6) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000b4ea1) list_medium_line_right_iconx2_g

0x82f2,	// (0x000ad418) list_medium_line_right_iconx2_t1

0x7f1d,	// (0x000ad043) list_medium_line_t2_right_iconx2_g1

0x7d80,	// (0x000acea6) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000b4ea1) list_medium_line_t2_right_iconx2_g

0x8300,	// (0x000ad426) list_medium_line_t2_right_iconx2_t1

0x8310,	// (0x000ad436) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000b4ea6) list_medium_line_t2_right_iconx2_t

0x8322,	// (0x000ad448) list_medium_line_x4_t4_t1

0x8330,	// (0x000ad456) list_medium_line_x4_t4_t2

0x8340,	// (0x000ad466) list_medium_line_x4_t4_t3

0x8350,	// (0x000ad476) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000b4eab) list_medium_line_x4_t4_t

0x83a3,	// (0x000ad4c9) tport_appsw_pane_ParamLimits

0x83a3,	// (0x000ad4c9) tport_appsw_pane

0x83bb,	// (0x000ad4e1) tport_contact_pane_ParamLimits

0x83bb,	// (0x000ad4e1) tport_contact_pane

0x83d3,	// (0x000ad4f9) tport_listscroll_pane_ParamLimits

0x83d3,	// (0x000ad4f9) tport_listscroll_pane

0x83ed,	// (0x000ad513) cell_tport_appsw_pane_ParamLimits

0x83ed,	// (0x000ad513) cell_tport_appsw_pane

0xca7f,	// (0x000b1ba5) tport_appsw_pane_g1_ParamLimits

0xca7f,	// (0x000b1ba5) tport_appsw_pane_g1

0xdd8f,	// (0x000b2eb5) tport_contact_pane_g1

0xd647,	// (0x000b276d) tport_contact_pane_t1

0xdd98,	// (0x000b2ebe) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000b4eb4) tport_contact_pane_t

0xdda6,	// (0x000b2ecc) list_tport_pane

0xddaf,	// (0x000b2ed5) scroll_pane_cp_030

0x8435,	// (0x000ad55b) cell_tport_appsw_pane_g1

0x8445,	// (0x000ad56b) cell_tport_appsw_pane_t1

0x8453,	// (0x000ad579) grid_highlight_pane_cp019

0x845b,	// (0x000ad581) list_tport_double_graphic_pane_ParamLimits

0x845b,	// (0x000ad581) list_tport_double_graphic_pane

0xee42,	// (0x000b3f68) list_highlight_pane_cp023_ParamLimits

0xee42,	// (0x000b3f68) list_highlight_pane_cp023

0x8468,	// (0x000ad58e) list_tport_double_graphic_pane_g1_ParamLimits

0x8468,	// (0x000ad58e) list_tport_double_graphic_pane_g1

0x8475,	// (0x000ad59b) list_tport_double_graphic_pane_t1_ParamLimits

0x8475,	// (0x000ad59b) list_tport_double_graphic_pane_t1

0x848a,	// (0x000ad5b0) list_tport_double_graphic_pane_t2_ParamLimits

0x848a,	// (0x000ad5b0) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000b4ec0) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000b4ec0) list_tport_double_graphic_pane_t

0xe633,	// (0x000b3759) main_cale_note_pane

0x5dfe,	// (0x000aaf24) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5dfe,	// (0x000aaf24) cell_vitu2_function_top_wide_pane_cp01

0x78d4,	// (0x000ac9fa) wait_bar_pane_cp05_ParamLimits

0xee42,	// (0x000b3f68) listscroll_cmail_pane

0xddb8,	// (0x000b2ede) list_cmail_pane

0x849c,	// (0x000ad5c2) list_cmail_body_pane

0x84b1,	// (0x000ad5d7) list_single_cmail_header_caption_pane

0x84c7,	// (0x000ad5ed) list_single_cmail_header_detail_pane_ParamLimits

0x84c7,	// (0x000ad5ed) list_single_cmail_header_detail_pane

0xddc8,	// (0x000b2eee) list_single_cmail_header_caption_pane_t1

0x84f0,	// (0x000ad616) list_single_cmail_header_detail_pane_g1_ParamLimits

0x84f0,	// (0x000ad616) list_single_cmail_header_detail_pane_g1

0xee9c,	// (0x000b3fc2) list_single_cmail_header_detail_pane_g2_ParamLimits

0xee9c,	// (0x000b3fc2) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000b4ec5) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000b4ec5) list_single_cmail_header_detail_pane_g

0xddec,	// (0x000b2f12) list_single_cmail_header_detail_pane_t1_ParamLimits

0xddec,	// (0x000b2f12) list_single_cmail_header_detail_pane_t1

0xde4c,	// (0x000b2f72) list_single_cmail_header_editor_pane_bg_ParamLimits

0xde4c,	// (0x000b2f72) list_single_cmail_header_editor_pane_bg

0xd7a4,	// (0x000b28ca) list_cmail_body_pane_g1

0xde63,	// (0x000b2f89) list_cmail_body_pane_t1

0xcabc,	// (0x000b1be2) list_single_cmail_header_editor_pane_bg_g1

0x996c,	// (0x000aea92) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcacc,	// (0x000b1bf2) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcac4,	// (0x000b1bea) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcd28,	// (0x000b1e4e) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcaec,	// (0x000b1c12) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcadc,	// (0x000b1c02) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcae4,	// (0x000b1c0a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x994c,	// (0x000aea72) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8508,	// (0x000ad62e) calenote_gesture_pane_ParamLimits

0x8508,	// (0x000ad62e) calenote_gesture_pane

0x8528,	// (0x000ad64e) calenote_window_pane_ParamLimits

0x8528,	// (0x000ad64e) calenote_window_pane

0xde71,	// (0x000b2f97) popup_note_window_cp01

0x8544,	// (0x000ad66a) calenote_swipe_1_pane_ParamLimits

0x8544,	// (0x000ad66a) calenote_swipe_1_pane

0x7d22,	// (0x000ace48) calenote_swipe_2_pane_ParamLimits

0x7d22,	// (0x000ace48) calenote_swipe_2_pane

0xdaf5,	// (0x000b2c1b) calenote_swipe_1_pane_g1_ParamLimits

0xdaf5,	// (0x000b2c1b) calenote_swipe_1_pane_g1

0xdb02,	// (0x000b2c28) calenote_swipe_1_pane_g2_ParamLimits

0xdb02,	// (0x000b2c28) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x000b4de9) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x000b4de9) calenote_swipe_1_pane_g

0xde83,	// (0x000b2fa9) calenote_swipe_1_pane_t1_ParamLimits

0xde83,	// (0x000b2fa9) calenote_swipe_1_pane_t1

0xdaf5,	// (0x000b2c1b) calenote_swipe_2_pane_g1_ParamLimits

0xdaf5,	// (0x000b2c1b) calenote_swipe_2_pane_g1

0xdea2,	// (0x000b2fc8) calenote_swipe_2_pane_g2_ParamLimits

0xdea2,	// (0x000b2fc8) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000b4ed1) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000b4ed1) calenote_swipe_2_pane_g

0xdeae,	// (0x000b2fd4) calenote_swipe_2_pane_t1_ParamLimits

0xdeae,	// (0x000b2fd4) calenote_swipe_2_pane_t1

0xe633,	// (0x000b3759) main_mup_navstr_pane

0x4a3f,	// (0x000a9b65) main_mup3_pane_t7_ParamLimits

0x4a3f,	// (0x000a9b65) main_mup3_pane_t7

0x9e7f,	// (0x000aefa5) main_mp4_pane_g6_ParamLimits

0x9e7f,	// (0x000aefa5) main_mp4_pane_g6

0xa041,	// (0x000af167) main_image3_pane_t4_ParamLimits

0xa041,	// (0x000af167) main_image3_pane_t4

0x8559,	// (0x000ad67f) popup_navstr_preview_pane_ParamLimits

0x8559,	// (0x000ad67f) popup_navstr_preview_pane

0x856d,	// (0x000ad693) scroll_navstr_pane_ParamLimits

0x856d,	// (0x000ad693) scroll_navstr_pane

0xe633,	// (0x000b3759) bg_popup_preview_window_pane_cp04

0xded5,	// (0x000b2ffb) popup_navstr_preview_pane_t1

0x8581,	// (0x000ad6a7) scroll_navstr_pane_g1_ParamLimits

0x8581,	// (0x000ad6a7) scroll_navstr_pane_g1

0x8595,	// (0x000ad6bb) scroll_navstr_pane_t1_ParamLimits

0x8595,	// (0x000ad6bb) scroll_navstr_pane_t1

0xde7a,	// (0x000b2fa0) bg_button_pane_cp014

0xde7a,	// (0x000b2fa0) bg_button_pane_cp030

0x7bfb,	// (0x000acd21) list_double_fisheye_pane_g4_ParamLimits

0x7bfb,	// (0x000acd21) list_double_fisheye_pane_g4

0x7c07,	// (0x000acd2d) list_double_fisheye_pane_g5_ParamLimits

0x7c07,	// (0x000acd2d) list_double_fisheye_pane_g5

0xbdf1,	// (0x000b0f17) sp_fs_scroll_pane_cp03

0xdc15,	// (0x000b2d3b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdc21,	// (0x000b2d47) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x000b4e06) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdc2d,	// (0x000b2d53) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xddc0,	// (0x000b2ee6) sp_fs_scroll_pane_cp02

0x9648,	// (0x000ae76e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9648,	// (0x000ae76e) popup_sp_fs_calendar_preview_list_single_pane

0xe633,	// (0x000b3759) main_cam6_pano_pane

0x9567,	// (0x000ae68d) main_mup3_pane_ParamLimits

0xe633,	// (0x000b3759) main_phacti_pane

0x77a7,	// (0x000ac8cd) bg_button_pane_cp11

0x77c1,	// (0x000ac8e7) main_mobtv_info_pane_g2_ParamLimits

0x77c1,	// (0x000ac8e7) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x000b4d66) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x000b4d66) main_mobtv_info_pane_g

0x799e,	// (0x000acac4) sc_clock_pane_t5_ParamLimits

0x799e,	// (0x000acac4) sc_clock_pane_t5

0x7a66,	// (0x000acb8c) main_radioblah_pane_g1_ParamLimits

0xda41,	// (0x000b2b67) main_radioblah_pane_t3_ParamLimits

0xda41,	// (0x000b2b67) main_radioblah_pane_t3

0xda59,	// (0x000b2b7f) main_radioblah_pane_t4_ParamLimits

0xda59,	// (0x000b2b7f) main_radioblah_pane_t4

0x7a8e,	// (0x000acbb4) main_radioblah_text_pane_ParamLimits

0x7a8e,	// (0x000acbb4) main_radioblah_text_pane

0x7aa0,	// (0x000acbc6) main_radioblah_info_pane_g1_ParamLimits

0x7b39,	// (0x000acc5f) main_radioblah_info_pane_t4_ParamLimits

0x7b39,	// (0x000acc5f) main_radioblah_info_pane_t4

0xee42,	// (0x000b3f68) main_sp_fs_calendar_pane

0x85ac,	// (0x000ad6d2) main_phacti_pane_g1

0x85b4,	// (0x000ad6da) phacti_note_pane_ParamLimits

0x85b4,	// (0x000ad6da) phacti_note_pane

0xdeec,	// (0x000b3012) phacti_term_pane_ParamLimits

0xdeec,	// (0x000b3012) phacti_term_pane

0xdf01,	// (0x000b3027) phacti_note_pane_t1_ParamLimits

0xdf01,	// (0x000b3027) phacti_note_pane_t1

0xdf18,	// (0x000b303e) phacti_term_pane_g1

0xdf20,	// (0x000b3046) phacti_term_pane_t1_ParamLimits

0xdf20,	// (0x000b3046) phacti_term_pane_t1

0xdf4a,	// (0x000b3070) popup_sp_fs_calendar_preview_list_single_pane_g1

0x96e7,	// (0x000ae80d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000b4edb) popup_sp_fs_calendar_preview_list_single_pane_g

0xdf52,	// (0x000b3078) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xdf52,	// (0x000b3078) popup_sp_fs_calendar_preview_list_single_pane_t1

0xdf68,	// (0x000b308e) aid_popup_sp_fs_bg_corner_pane

0xc090,	// (0x000b11b6) popup_sp_fs_calendar_preview_bg_pane_g1

0xe633,	// (0x000b3759) popup_sp_fs_calendar_preview_bg_pane

0xdf70,	// (0x000b3096) popup_sp_fs_calendar_preview_list_pane

0xbc7c,	// (0x000b0da2) bg_main_sp_fs_cale_pane_ParamLimits

0xbc7c,	// (0x000b0da2) bg_main_sp_fs_cale_pane

0xdf78,	// (0x000b309e) listscroll_cale_mrui_pane_ParamLimits

0xdf78,	// (0x000b309e) listscroll_cale_mrui_pane

0xdf8d,	// (0x000b30b3) listscroll_sp_fs_schedule_track_pane

0xdf96,	// (0x000b30bc) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xdf96,	// (0x000b30bc) main_sp_fs_ctrlbar_pane_cp01

0xdfa9,	// (0x000b30cf) main_sp_fs_ribbon_pane

0xdfb1,	// (0x000b30d7) popup_sp_fs_cale_preview_window

0x8629,	// (0x000ad74f) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8629,	// (0x000ad74f) list_single_sp_fs_schedule_track_pane

0xee42,	// (0x000b3f68) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xee42,	// (0x000b3f68) bg_sp_fs_highlight_list_pane_cp03

0x863c,	// (0x000ad762) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x863c,	// (0x000ad762) list_single_sp_fs_schedule_track_pane_g1

0x8648,	// (0x000ad76e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8648,	// (0x000ad76e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000b4ee0) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000b4ee0) list_single_sp_fs_schedule_track_pane_g

0x8654,	// (0x000ad77a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8654,	// (0x000ad77a) list_single_sp_fs_schedule_track_pane_t1

0x866e,	// (0x000ad794) sp_fs_schedule_track_pane_ParamLimits

0x866e,	// (0x000ad794) sp_fs_schedule_track_pane

0xdfc3,	// (0x000b30e9) sp_fs_schedule_track_pane_g1

0xdfcb,	// (0x000b30f1) sp_fs_schedule_track_pane_g2

0xdfd3,	// (0x000b30f9) sp_fs_schedule_track_pane_g3

0xdfdb,	// (0x000b3101) sp_fs_schedule_track_pane_g4

0xdfe3,	// (0x000b3109) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000b4ee5) sp_fs_schedule_track_pane_g

0xcabc,	// (0x000b1be2) bg_sp_fs_schedule_viewer_highlight_g1

0x996c,	// (0x000aea92) bg_sp_fs_schedule_viewer_highlight_g2

0xcac4,	// (0x000b1bea) bg_sp_fs_schedule_viewer_highlight_g3

0xcacc,	// (0x000b1bf2) bg_sp_fs_schedule_viewer_highlight_g4

0xcd28,	// (0x000b1e4e) bg_sp_fs_schedule_viewer_highlight_g5

0xcadc,	// (0x000b1c02) bg_sp_fs_schedule_viewer_highlight_g6

0xcae4,	// (0x000b1c0a) bg_sp_fs_schedule_viewer_highlight_g7

0xcaec,	// (0x000b1c12) bg_sp_fs_schedule_viewer_highlight_g8

0x994c,	// (0x000aea72) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000b4ef0) bg_sp_fs_schedule_viewer_highlight_g

0xe633,	// (0x000b3759) bg_main_sp_fs_ribbon_pane

0x867f,	// (0x000ad7a5) main_sp_fs_ribbon_pane_g1

0xdfeb,	// (0x000b3111) main_sp_fs_ribbon_pane_t1

0x8688,	// (0x000ad7ae) main_sp_fs_ribbon_pane_t2

0xdffa,	// (0x000b3120) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000b4f03) main_sp_fs_ribbon_pane_t

0xe009,	// (0x000b312f) main_sp_fs_ribbon_scheduler_pane

0xe011,	// (0x000b3137) bg_main_sp_fs_ribbon_pane_g1

0xe01a,	// (0x000b3140) bg_main_sp_fs_ribbon_pane_g2

0xe023,	// (0x000b3149) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000b4f0a) bg_main_sp_fs_ribbon_pane_g

0xe02b,	// (0x000b3151) main_sp_fs_ribbon_scheduler_pane_g1

0xe034,	// (0x000b315a) main_sp_fs_ribbon_scheduler_pane_g2

0xe03d,	// (0x000b3163) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000b4f11) main_sp_fs_ribbon_scheduler_pane_g

0xe046,	// (0x000b316c) list_cale_mrui_pane

0x8697,	// (0x000ad7bd) sp_fs_scroll_pane_cp07_ParamLimits

0x8697,	// (0x000ad7bd) sp_fs_scroll_pane_cp07

0x86b3,	// (0x000ad7d9) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x86b3,	// (0x000ad7d9) bg_sp_fs_schedule_viewer_highlight

0xe053,	// (0x000b3179) list_single_sp_fs_schedule_track_pane_cp01

0xe05b,	// (0x000b3181) list_sp_fs_schedule_track_pane

0xe063,	// (0x000b3189) sp_fs_scroll_pane_cp06_ParamLimits

0xe063,	// (0x000b3189) sp_fs_scroll_pane_cp06

0xc090,	// (0x000b11b6) bgmain_sp_fs_calendar_pane_g1

0x86c3,	// (0x000ad7e9) list_single_cale_mrui_pane_ParamLimits

0x86c3,	// (0x000ad7e9) list_single_cale_mrui_pane

0xe075,	// (0x000b319b) list_single_cale_mrui_row_pane_ParamLimits

0xe075,	// (0x000b319b) list_single_cale_mrui_row_pane

0xe082,	// (0x000b31a8) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe082,	// (0x000b31a8) list_single_cale_mrui_row_pane_g1

0xe0c7,	// (0x000b31ed) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe0c7,	// (0x000b31ed) list_single_cale_mrui_row_pane_t1

0x86e4,	// (0x000ad80a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x86e4,	// (0x000ad80a) list_single_cale_mrui_row_pane_t2

0xe0d9,	// (0x000b31ff) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe0d9,	// (0x000b31ff) list_single_cale_mrui_row_pane_t3

0xe108,	// (0x000b322e) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe108,	// (0x000b322e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000b4f1f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000b4f1f) list_single_cale_mrui_row_pane_t

0x874c,	// (0x000ad872) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x874c,	// (0x000ad872) list_single_cmail_header_editor_pane_bg_cp01

0x8772,	// (0x000ad898) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8772,	// (0x000ad898) list_single_cmail_header_editor_pane_bg_cp02

0x8792,	// (0x000ad8b8) main_radioblah_text_pane_t1_ParamLimits

0x8792,	// (0x000ad8b8) main_radioblah_text_pane_t1

0xe137,	// (0x000b325d) cam6_indi_pane_cp01

0xe13f,	// (0x000b3265) cam6_mode_pane_cp01

0xe147,	// (0x000b326d) cam6_pano_pane

0xe150,	// (0x000b3276) cam6_zoom_pane_cp01

0xe158,	// (0x000b327e) cam6_pano_image_pane

0xe163,	// (0x000b3289) cam6_pano_pane_g1

0xd7a4,	// (0x000b28ca) cam6_pano_pane_g2

0xe16c,	// (0x000b3292) cam6_pano_pane_g3

0xe175,	// (0x000b329b) cam6_pano_pane_g4

0xc6ab,	// (0x000b17d1) cam6_pano_pane_g5

0xe17e,	// (0x000b32a4) cam6_pano_pane_g6

0xe188,	// (0x000b32ae) cam6_pano_pane_g7

0xe190,	// (0x000b32b6) cam6_pano_pane_g8

0xe199,	// (0x000b32bf) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x000b4f28) cam6_pano_pane_g

0xe633,	// (0x000b3759) main_browser_tag_pane

0xdecd,	// (0x000b2ff3) grid_navstr_albumart_pane

0xe1a4,	// (0x000b32ca) cell_navstr_albumart_pane_ParamLimits

0xe1a4,	// (0x000b32ca) cell_navstr_albumart_pane

0xe1c4,	// (0x000b32ea) cell_navstr_albumart_pane_g1

0xba8d,	// (0x000b0bb3) cell_navstr_albumart_pane_g2

0xba9d,	// (0x000b0bc3) cell_navstr_albumart_pane_g3

0xba95,	// (0x000b0bbb) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x000b4f3b) cell_navstr_albumart_pane_g

0x87ac,	// (0x000ad8d2) bt_list_pane_ParamLimits

0x87ac,	// (0x000ad8d2) bt_list_pane

0x87c0,	// (0x000ad8e6) bt_list_pane_t1

0x87cf,	// (0x000ad8f5) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x000b4f44) bt_list_pane_t

0xe633,	// (0x000b3759) main_cale_prevew_pane

0x87de,	// (0x000ad904) popup_cale_preview_window_ParamLimits

0x87de,	// (0x000ad904) popup_cale_preview_window

0xee42,	// (0x000b3f68) bg_popup_preview_window_pane_cp05_ParamLimits

0xee42,	// (0x000b3f68) bg_popup_preview_window_pane_cp05

0xe1cc,	// (0x000b32f2) list_cale_preview_pane_ParamLimits

0xe1cc,	// (0x000b32f2) list_cale_preview_pane

0x87f9,	// (0x000ad91f) list_double_cale_preview_pane_ParamLimits

0x87f9,	// (0x000ad91f) list_double_cale_preview_pane

0x880b,	// (0x000ad931) list_single_cale_preview_pane_ParamLimits

0x880b,	// (0x000ad931) list_single_cale_preview_pane

0x8821,	// (0x000ad947) list_single_cale_preview_pane_g1

0x8829,	// (0x000ad94f) list_single_cale_preview_pane_t1_ParamLimits

0x8829,	// (0x000ad94f) list_single_cale_preview_pane_t1

0x883e,	// (0x000ad964) list_double_cale_preview_pane_g1

0x8846,	// (0x000ad96c) list_double_cale_preview_pane_t1_ParamLimits

0x8846,	// (0x000ad96c) list_double_cale_preview_pane_t1

0x885b,	// (0x000ad981) list_double_cale_preview_pane_t2_ParamLimits

0x885b,	// (0x000ad981) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x000b4f49) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x000b4f49) list_double_cale_preview_pane_t

0xe633,	// (0x000b3759) main_ezdial_pane

0xee42,	// (0x000b3f68) main_sp_fs_email_pane_ParamLimits

0x7daa,	// (0x000aced0) cmail_ddmenu_btn01_pane_ParamLimits

0x7daa,	// (0x000aced0) cmail_ddmenu_btn01_pane

0x7dbd,	// (0x000acee3) cmail_ddmenu_btn02_pane_ParamLimits

0x7dbd,	// (0x000acee3) cmail_ddmenu_btn02_pane

0x7de0,	// (0x000acf06) cmail_ddmenu_btn03_pane_ParamLimits

0x7de0,	// (0x000acf06) cmail_ddmenu_btn03_pane

0x7e06,	// (0x000acf2c) main_sp_fs_ctrlbar_pane_ParamLimits

0x7e2a,	// (0x000acf50) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x849c,	// (0x000ad5c2) list_cmail_body_pane_ParamLimits

0xddd6,	// (0x000b2efc) bg_button_pane_cp12

0xdddf,	// (0x000b2f05) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdddf,	// (0x000b2f05) list_single_cmail_header_detail_pane_g3

0xde28,	// (0x000b2f4e) list_single_cmail_header_detail_pane_t2_ParamLimits

0xde28,	// (0x000b2f4e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000b4ecc) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000b4ecc) list_single_cmail_header_detail_pane_t

0xdf35,	// (0x000b305b) phacti_term_pane_t2_ParamLimits

0xdf35,	// (0x000b305b) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000b4ed6) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000b4ed6) phacti_term_pane_t

0xe1d8,	// (0x000b32fe) aid_size_list_single_double

0x8873,	// (0x000ad999) popup_ezdial_listscroll_window

0x888f,	// (0x000ad9b5) popup_number_entry_window_cp01

0x9709,	// (0x000ae82f) bg_popup_call_pane_cp09

0xe1e4,	// (0x000b330a) ezdial_list_pane

0xe1ec,	// (0x000b3312) scroll_pane_cp23

0xbc7c,	// (0x000b0da2) bg_button_pane_cp028_ParamLimits

0xbc7c,	// (0x000b0da2) bg_button_pane_cp028

0x889d,	// (0x000ad9c3) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x889d,	// (0x000ad9c3) cmail_ddmenu_btn01_pane_g1

0x88a9,	// (0x000ad9cf) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x88a9,	// (0x000ad9cf) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x000b4f4e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x000b4f4e) cmail_ddmenu_btn01_pane_g

0xe1f4,	// (0x000b331a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe1f4,	// (0x000b331a) cmail_ddmenu_btn01_pane_t1

0xbc7c,	// (0x000b0da2) bg_button_pane_cp029_ParamLimits

0xbc7c,	// (0x000b0da2) bg_button_pane_cp029

0x88b5,	// (0x000ad9db) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x88b5,	// (0x000ad9db) cmail_ddmenu_btn02_pane_g1

0x88cd,	// (0x000ad9f3) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x88cd,	// (0x000ad9f3) cmail_ddmenu_btn02_pane_t1

0xee42,	// (0x000b3f68) bg_button_pane_cp031_ParamLimits

0xee42,	// (0x000b3f68) bg_button_pane_cp031

0x88b5,	// (0x000ad9db) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x88b5,	// (0x000ad9db) cmail_ddmenu_btn03_pane_g1

0x88cd,	// (0x000ad9f3) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x88cd,	// (0x000ad9f3) cmail_ddmenu_btn03_pane_t1

0x55e6,	// (0x000aa70c) cell_dialer2_keypad_pane_t1_ParamLimits

0x5600,	// (0x000aa726) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5600,	// (0x000aa726) cell_dialer2_keypad_pane_t1_copy1

0x75bc,	// (0x000ac6e2) ncimui_group_button_pane

0xee42,	// (0x000b3f68) main_sp_fs_calendar_pane_ParamLimits

0x84b1,	// (0x000ad5d7) list_single_cmail_header_caption_pane_ParamLimits

0xeea8,	// (0x000b3fce) aid_recal_txt_sm_pane

0xe633,	// (0x000b3759) mian_recal_day_pane

0xdfb1,	// (0x000b30d7) popup_sp_fs_cale_preview_window_ParamLimits

0xe209,	// (0x000b332f) list_recal_day_pane

0xe24b,	// (0x000b3371) list_single_recal_day_pane_ParamLimits

0xe24b,	// (0x000b3371) list_single_recal_day_pane

0xe25d,	// (0x000b3383) list_single_recal_day_pane_g1_ParamLimits

0xe25d,	// (0x000b3383) list_single_recal_day_pane_g1

0xe269,	// (0x000b338f) list_single_recal_day_pane_g2_ParamLimits

0xe269,	// (0x000b338f) list_single_recal_day_pane_g2

0xe275,	// (0x000b339b) list_single_recal_day_pane_g3_ParamLimits

0xe275,	// (0x000b339b) list_single_recal_day_pane_g3

0x88f1,	// (0x000ada17) list_single_recal_day_pane_g4_ParamLimits

0x88f1,	// (0x000ada17) list_single_recal_day_pane_g4

0xe281,	// (0x000b33a7) list_single_recal_day_pane_g5_ParamLimits

0xe281,	// (0x000b33a7) list_single_recal_day_pane_g5

0xe28d,	// (0x000b33b3) list_single_recal_day_pane_g6_ParamLimits

0xe28d,	// (0x000b33b3) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x000b4f5d) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x000b4f5d) list_single_recal_day_pane_g

0xe2a1,	// (0x000b33c7) list_single_recal_day_pane_t1

0xe2b3,	// (0x000b33d9) list_single_recal_day_pane_t2

0x0001,

0x001c,	// (0x000a5142) list_single_recal_day_pane_t

0x8909,	// (0x000ada2f) ncimui_query_button_pane_ParamLimits

0x8909,	// (0x000ada2f) ncimui_query_button_pane

0x8919,	// (0x000ada3f) ncimui_query_button_pane_t1_ParamLimits

0x8919,	// (0x000ada3f) ncimui_query_button_pane_t1

0xe2c5,	// (0x000b33eb) ncimui_query_button_pane_t2_ParamLimits

0xe2c5,	// (0x000b33eb) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x000b4f68) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x000b4f68) ncimui_query_button_pane_t

0x892c,	// (0x000ada52) query_button_pane_ParamLimits

0x892c,	// (0x000ada52) query_button_pane

0xe633,	// (0x000b3759) bg_button_pane_cp0028

0xe2d8,	// (0x000b33fe) query_button_pane_t1

0x366a,	// (0x000a8790) main_tport_pane_ParamLimits

0x8360,	// (0x000ad486) bg_popup_window_pane_cp01_ParamLimits

0x8360,	// (0x000ad486) bg_popup_window_pane_cp01

0x837b,	// (0x000ad4a1) heading_pane_cp08_ParamLimits

0x837b,	// (0x000ad4a1) heading_pane_cp08

0x838e,	// (0x000ad4b4) heading_pane_cp07_ParamLimits

0x838e,	// (0x000ad4b4) heading_pane_cp07

0x8435,	// (0x000ad55b) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000b4eb9) cell_tport_appsw_pane_g

0x2bff,	// (0x000a7d25) input_candi_list_open_g1

0x9b5d,	// (0x000aec83) list_cale_time_pane_g6_ParamLimits

0x9b5d,	// (0x000aec83) list_cale_time_pane_g6

0x4433,	// (0x000a9559) aid_size_touch_calib_1_ParamLimits

0x4433,	// (0x000a9559) aid_size_touch_calib_1

0x4445,	// (0x000a956b) aid_size_touch_calib_2_ParamLimits

0x4445,	// (0x000a956b) aid_size_touch_calib_2

0x445d,	// (0x000a9583) aid_size_touch_calib_3_ParamLimits

0x445d,	// (0x000a9583) aid_size_touch_calib_3

0x447b,	// (0x000a95a1) aid_size_touch_calib_4_ParamLimits

0x447b,	// (0x000a95a1) aid_size_touch_calib_4

0x4493,	// (0x000a95b9) main_touch_calib_button_group_pane_ParamLimits

0x4493,	// (0x000a95b9) main_touch_calib_button_group_pane

0x44ab,	// (0x000a95d1) main_touch_calib_pane_g1_ParamLimits

0x44bd,	// (0x000a95e3) main_touch_calib_pane_g2_ParamLimits

0x44cf,	// (0x000a95f5) main_touch_calib_pane_g3_ParamLimits

0x44e1,	// (0x000a9607) main_touch_calib_pane_g4_ParamLimits

0xf74d,	// (0x000b4873) main_touch_calib_pane_g_ParamLimits

0x44f3,	// (0x000a9619) main_touch_calib_pane_t1_ParamLimits

0x450d,	// (0x000a9633) main_touch_calib_pane_t2_ParamLimits

0x4527,	// (0x000a964d) main_touch_calib_pane_t3_ParamLimits

0x453b,	// (0x000a9661) main_touch_calib_pane_t4_ParamLimits

0x454f,	// (0x000a9675) main_touch_calib_pane_t5_ParamLimits

0xf756,	// (0x000b487c) main_touch_calib_pane_t_ParamLimits

0xc44b,	// (0x000b1571) list_single_fp_cale_pane_g3_ParamLimits

0xc44b,	// (0x000b1571) list_single_fp_cale_pane_g3

0x9567,	// (0x000ae68d) bg_button_pane_cp012_ParamLimits

0x9567,	// (0x000ae68d) bg_vkb2_func_pane_cp03_ParamLimits

0x65ee,	// (0x000ab714) cell_vitu2_function_top_pane_g1_ParamLimits

0x9567,	// (0x000ae68d) bg_vkb2_func_pane_cp04_ParamLimits

0x7547,	// (0x000ac66d) main_ncimui_button_group_pane_ParamLimits

0x7547,	// (0x000ac66d) main_ncimui_button_group_pane

0x75a7,	// (0x000ac6cd) main_ncimui_pane_t3_ParamLimits

0x75a7,	// (0x000ac6cd) main_ncimui_pane_t3

0xdee3,	// (0x000b3009) phacti_button_group_pane

0xe1d8,	// (0x000b32fe) aid_size_list_single_double_ParamLimits

0x8873,	// (0x000ad999) popup_ezdial_listscroll_window_ParamLimits

0x888f,	// (0x000ad9b5) popup_number_entry_window_cp01_ParamLimits

0x893f,	// (0x000ada65) phacti_button_pane_ParamLimits

0x893f,	// (0x000ada65) phacti_button_pane

0xe633,	// (0x000b3759) bg_button_pane_cp14

0xe2e6,	// (0x000b340c) phacti_button_pane_t1

0x8950,	// (0x000ada76) main_touch_calib_button_pane_ParamLimits

0x8950,	// (0x000ada76) main_touch_calib_button_pane

0xed70,	// (0x000b3e96) bg_button_pane_cp18_ParamLimits

0xed70,	// (0x000b3e96) bg_button_pane_cp18

0xe2f4,	// (0x000b341a) main_touch_calib_button_pane_t1_ParamLimits

0xe2f4,	// (0x000b341a) main_touch_calib_button_pane_t1

0xe30a,	// (0x000b3430) main_touch_calib_button_pane_t2_ParamLimits

0xe30a,	// (0x000b3430) main_touch_calib_button_pane_t2

0x0001,

0x0026,	// (0x000a514c) main_touch_calib_button_pane_t_ParamLimits

0x0026,	// (0x000a514c) main_touch_calib_button_pane_t

0xe633,	// (0x000b3759) cell_ncimui_button_pane

0xe633,	// (0x000b3759) bg_button_pane_cp032

0xe328,	// (0x000b344e) cell_ncimui_button_pane_t1

0xa021,	// (0x000af147) image3_infobar_pane_ParamLimits

0xa021,	// (0x000af147) image3_infobar_pane

0x79ca,	// (0x000acaf0) fs_bigclock_status_pane_ParamLimits

0x79ca,	// (0x000acaf0) fs_bigclock_status_pane

0x79d7,	// (0x000acafd) main_fs_bigclock_clock_pane_ParamLimits

0x79d7,	// (0x000acafd) main_fs_bigclock_clock_pane

0x79f5,	// (0x000acb1b) main_fs_bigclock_indi_pane_ParamLimits

0x79f5,	// (0x000acb1b) main_fs_bigclock_indi_pane

0x7a27,	// (0x000acb4d) main_fs_bigclock_swipe_pane_ParamLimits

0x7a27,	// (0x000acb4d) main_fs_bigclock_swipe_pane

0xe633,	// (0x000b3759) main_fs_clock_dumped_data

0xd8b1,	// (0x000b29d7) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd8b1,	// (0x000b29d7) list_single_fs_bigclock_indicator_pane_g1

0xd8cc,	// (0x000b29f2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd8cc,	// (0x000b29f2) list_single_fs_bigclock_indicator_pane_g2

0xd8e6,	// (0x000b2a0c) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd8e6,	// (0x000b2a0c) list_single_fs_bigclock_indicator_pane_g3

0xd900,	// (0x000b2a26) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd900,	// (0x000b2a26) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x000b4d9a) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x000b4d9a) list_single_fs_bigclock_indicator_pane_g

0xd92b,	// (0x000b2a51) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd92b,	// (0x000b2a51) list_single_fs_bigclock_indicator_pane_t1

0xd953,	// (0x000b2a79) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd953,	// (0x000b2a79) list_single_fs_bigclock_indicator_pane_t2

0xd97b,	// (0x000b2aa1) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd97b,	// (0x000b2aa1) list_single_fs_bigclock_indicator_pane_t3

0xd9a3,	// (0x000b2ac9) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd9a3,	// (0x000b2ac9) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x000b4da5) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x000b4da5) list_single_fs_bigclock_indicator_pane_t

0xe336,	// (0x000b345c) image3_infobar_fav_pane_ParamLimits

0xe336,	// (0x000b345c) image3_infobar_fav_pane

0xe346,	// (0x000b346c) image3_infobar_loc_pane_ParamLimits

0xe346,	// (0x000b346c) image3_infobar_loc_pane

0xe35a,	// (0x000b3480) image3_infobar_time_pane_ParamLimits

0xe35a,	// (0x000b3480) image3_infobar_time_pane

0xc090,	// (0x000b11b6) image3_infobar_time_pane_g1

0xe36a,	// (0x000b3490) image3_infobar_time_pane_t1

0xc090,	// (0x000b11b6) image3_infobar_loc_pane_g1

0xe378,	// (0x000b349e) image3_infobar_loc_pane_g2

0x0001,

0x002b,	// (0x000a5151) image3_infobar_loc_pane_g

0xe380,	// (0x000b34a6) image3_infobar_loc_pane_t1

0xc090,	// (0x000b11b6) image3_infobar_fav_pane_g1

0xe38e,	// (0x000b34b4) image3_infobar_fav_pane_g2

0x0001,

0x0030,	// (0x000a5156) image3_infobar_fav_pane_g

0xe396,	// (0x000b34bc) fs_bigclock_status_battery_pane

0xe39f,	// (0x000b34c5) fs_bigclock_status_signal_pane

0xe3a8,	// (0x000b34ce) fs_bigclock_status_title_pane

0xe3b1,	// (0x000b34d7) fs_bigclock_status_signal_pane_g1

0xe3ba,	// (0x000b34e0) fs_bigclock_status_signal_pane_g2

0x0001,

0x0035,	// (0x000a515b) fs_bigclock_status_signal_pane_g

0xe3c2,	// (0x000b34e8) fs_bigclock_status_battery_pane_g1

0xe3cb,	// (0x000b34f1) fs_bigclock_status_battery_pane_g2

0x0001,

0x003a,	// (0x000a5160) fs_bigclock_status_battery_pane_g

0xe3d3,	// (0x000b34f9) fs_bigclock_status_title_pane_t1

0x8965,	// (0x000ada8b) main_fs_bigclock_clock_pane_g1

0x8965,	// (0x000ada8b) main_fs_bigclock_clock_pane_g2

0x8976,	// (0x000ada9c) main_fs_bigclock_clock_pane_g3

0x8976,	// (0x000ada9c) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe47,	// (0x000b4f6d) main_fs_bigclock_clock_pane_g

0x8989,	// (0x000adaaf) main_fs_bigclock_clock_pane_t1

0x899f,	// (0x000adac5) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe50,	// (0x000b4f76) main_fs_bigclock_clock_pane_t

0xe3e1,	// (0x000b3507) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe3e1,	// (0x000b3507) list_single_fs_bigclock_indicator_pane

0xe3f2,	// (0x000b3518) list_single_fs_bigclock_pane_ParamLimits

0xe3f2,	// (0x000b3518) list_single_fs_bigclock_pane

0xe418,	// (0x000b353e) main_fs_bigclock_indicator_pane_t1

0xe427,	// (0x000b354d) list_single_fs_bigclock_pane_g1

0xe42f,	// (0x000b3555) list_single_fs_bigclock_pane_t1

0xc090,	// (0x000b11b6) main_fs_bigclock_swipe_pane_g1

0xe472,	// (0x000b3598) main_fs_bigclock_swipe_pane_g2

0x0001,

0x0059,	// (0x000a517f) main_fs_bigclock_swipe_pane_g

0xe47a,	// (0x000b35a0) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe47a,	// (0x000b35a0) main_fs_bigclock_swipe_pane_t1

0x250f,	// (0x000a7635) call_type_pane_ParamLimits

0xe633,	// (0x000b3759) main_btmg_pane

0xe0ae,	// (0x000b31d4) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe0ae,	// (0x000b31d4) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000b4f18) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000b4f18) list_single_cale_mrui_row_pane_g

0xe232,	// (0x000b3358) list_recal_vselct_arw_lo_pane

0xe23a,	// (0x000b3360) list_recal_vselct_arw_up_pane

0xe242,	// (0x000b3368) list_recal_vselct_pane

0x89f9,	// (0x000adb1f) btmg_button_pane

0x8a03,	// (0x000adb29) main_btmg_pane_g1

0xe633,	// (0x000b3759) bg_button_pane_cp044

0xe497,	// (0x000b35bd) btmg_button_pane_t1

0xbc68,	// (0x000b0d8e) aid_listscroll_gen

0xee42,	// (0x000b3f68) main_cntbar_detail_pane

0xddb8,	// (0x000b2ede) list_cmail_folder_pane

0xbdf1,	// (0x000b0f17) sp_fs_scroll_pane_cp03_ParamLimits

0x8a0d,	// (0x000adb33) list_single_fs_dyc_pane_cp01_ParamLimits

0x8a0d,	// (0x000adb33) list_single_fs_dyc_pane_cp01

0xe4a5,	// (0x000b35cb) aid_size_cmail_indent

0xe4ae,	// (0x000b35d4) list_single_dyc_row_pane_cp01

0x8a54,	// (0x000adb7a) cntbar_detail_list_pane_ParamLimits

0x8a54,	// (0x000adb7a) cntbar_detail_list_pane

0x8aa0,	// (0x000adbc6) main_cntbar_detail_cont_pane_ParamLimits

0x8aa0,	// (0x000adbc6) main_cntbar_detail_cont_pane

0xbdf1,	// (0x000b0f17) scroll_pane_cp032_ParamLimits

0xbdf1,	// (0x000b0f17) scroll_pane_cp032

0x8ab4,	// (0x000adbda) cntbar_detail_list_event_pane_ParamLimits

0x8ab4,	// (0x000adbda) cntbar_detail_list_event_pane

0x8a64,	// (0x000adb8a) cntbar_detail_list_shct_pane

0x99ba,	// (0x000aeae0) aid_list_gen

0xe4b7,	// (0x000b35dd) aid_scroll

0xe4c0,	// (0x000b35e6) aid_size_touch_scroll_bar

0x6cdd,	// (0x000abe03) aid_list_double

0x8ac4,	// (0x000adbea) aid_list_single

0x6cdd,	// (0x000abe03) aid_list_single_lg

0x8acd,	// (0x000adbf3) aid_list_z_g_a_sm

0x8ad5,	// (0x000adbfb) aid_list_z_g_d

0x8add,	// (0x000adc03) aid_txt_z_prm

0x8aeb,	// (0x000adc11) aid_txt_z_prm_cp01

0x8af9,	// (0x000adc1f) aid_txt_z_sec

0x8b07,	// (0x000adc2d) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8b07,	// (0x000adc2d) main_cntbar_detail_cont_pane_g1

0x8b1b,	// (0x000adc41) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8b1b,	// (0x000adc41) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe5c,	// (0x000b4f82) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe5c,	// (0x000b4f82) main_cntbar_detail_cont_pane_g

0xe4c9,	// (0x000b35ef) main_cntbar_detail_cont_pane_t1

0xe4d7,	// (0x000b35fd) main_cntbar_detail_cont_pane_t2

0xe4e5,	// (0x000b360b) main_cntbar_detail_cont_pane_t3

0x0002,

0x0063,	// (0x000a5189) main_cntbar_detail_cont_pane_t

0x8b2b,	// (0x000adc51) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8b2b,	// (0x000adc51) cell_cntbar_detail_list_shct_pane

0xe4f3,	// (0x000b3619) cntbar_detail_list_shct_pane_g1

0xe4fc,	// (0x000b3622) cntbar_detail_list_shct_pane_g2

0x0001,

0x006a,	// (0x000a5190) cntbar_detail_list_shct_pane_g

0x8b3f,	// (0x000adc65) cntbar_detail_list_event_pane_g1_ParamLimits

0x8b3f,	// (0x000adc65) cntbar_detail_list_event_pane_g1

0x8b4b,	// (0x000adc71) cntbar_detail_list_event_pane_g2_ParamLimits

0x8b4b,	// (0x000adc71) cntbar_detail_list_event_pane_g2

0x0005,

0xfe61,	// (0x000b4f87) cntbar_detail_list_event_pane_g_ParamLimits

0xfe61,	// (0x000b4f87) cntbar_detail_list_event_pane_g

0x8bb7,	// (0x000adcdd) cntbar_detail_list_event_pane_t1_ParamLimits

0x8bb7,	// (0x000adcdd) cntbar_detail_list_event_pane_t1

0x8bcc,	// (0x000adcf2) cntbar_detail_list_event_pane_t2_ParamLimits

0x8bcc,	// (0x000adcf2) cntbar_detail_list_event_pane_t2

0x0002,

0xfe6e,	// (0x000b4f94) cntbar_detail_list_event_pane_t_ParamLimits

0xfe6e,	// (0x000b4f94) cntbar_detail_list_event_pane_t

0xc090,	// (0x000b11b6) cell_cntbar_detail_list_shct_pane_g1

0xa82a,	// (0x000af950) navi_pane_mv_g3

0xee42,	// (0x000b3f68) main_cntbar_detail_pane_ParamLimits

0xe633,	// (0x000b3759) main_notif_wgt_pane

0x9e0d,	// (0x000aef33) aid_tch_main_mp4_pane_g4

0xa019,	// (0x000af13f) popup_slider_window_cp02

0xe228,	// (0x000b334e) list_recal_day_event_pane

0x8a22,	// (0x000adb48) cntbar_detail_btn_pane_ParamLimits

0x8a22,	// (0x000adb48) cntbar_detail_btn_pane

0x8a3b,	// (0x000adb61) cntbar_detail_btn_pane_cp01_ParamLimits

0x8a3b,	// (0x000adb61) cntbar_detail_btn_pane_cp01

0x8a64,	// (0x000adb8a) cntbar_detail_list_shct_pane_ParamLimits

0x8a74,	// (0x000adb9a) cntbar_detail_pane_g1_ParamLimits

0x8a74,	// (0x000adb9a) cntbar_detail_pane_g1

0x8a84,	// (0x000adbaa) cntbar_detail_pane_t1_ParamLimits

0x8a84,	// (0x000adbaa) cntbar_detail_pane_t1

0x8b57,	// (0x000adc7d) cntbar_detail_list_event_pane_g3_ParamLimits

0x8b57,	// (0x000adc7d) cntbar_detail_list_event_pane_g3

0x8b6f,	// (0x000adc95) cntbar_detail_list_event_pane_g4_ParamLimits

0x8b6f,	// (0x000adc95) cntbar_detail_list_event_pane_g4

0x8b87,	// (0x000adcad) cntbar_detail_list_event_pane_g5_ParamLimits

0x8b87,	// (0x000adcad) cntbar_detail_list_event_pane_g5

0x8b9f,	// (0x000adcc5) cntbar_detail_list_event_pane_g6_ParamLimits

0x8b9f,	// (0x000adcc5) cntbar_detail_list_event_pane_g6

0x8be1,	// (0x000add07) cntbar_detail_list_event_pane_t3_ParamLimits

0x8be1,	// (0x000add07) cntbar_detail_list_event_pane_t3

0x8bf3,	// (0x000add19) popup_notif_wgt_window_ParamLimits

0x8bf3,	// (0x000add19) popup_notif_wgt_window

0x8c0c,	// (0x000add32) popup_submenu_window_cp01_ParamLimits

0x8c0c,	// (0x000add32) popup_submenu_window_cp01

0x9709,	// (0x000ae82f) bg_popup_window_pane_cp10

0xe505,	// (0x000b362b) listscroll_notif_wgt_pane

0xe517,	// (0x000b363d) list_notif_wgt_window

0xe520,	// (0x000b3646) scroll_pane_cp033

0x8c22,	// (0x000add48) list_notif_wgt_row_pane_ParamLimits

0x8c22,	// (0x000add48) list_notif_wgt_row_pane

0xe529,	// (0x000b364f) aid_size_list_notif_wgt_del

0xe536,	// (0x000b365c) list_notif_wgt_row_pane_g1

0xe542,	// (0x000b3668) list_notif_wgt_row_pane_g2

0xe551,	// (0x000b3677) list_notif_wgt_row_pane_g3

0x0002,

0x0083,	// (0x000a51a9) list_notif_wgt_row_pane_g

0xe55e,	// (0x000b3684) list_notif_wgt_row_pane_t1

0xe574,	// (0x000b369a) list_notif_wgt_row_pane_t2

0xe586,	// (0x000b36ac) list_notif_wgt_row_pane_t3

0x0002,

0x008a,	// (0x000a51b0) list_notif_wgt_row_pane_t

0xcd42,	// (0x000b1e68) list_recal_day_event_pane_g1

0xe598,	// (0x000b36be) list_recal_day_event_pane_t1

0xe633,	// (0x000b3759) bg_button_pane_cp045

0x8c32,	// (0x000add58) cntbar_detail_btn_pane_t1

0xbc7c,	// (0x000b0da2) main_callh_pane_ParamLimits

0xbc7c,	// (0x000b0da2) main_callh_pane

0xe633,	// (0x000b3759) main_coverflow0_pane

0xe633,	// (0x000b3759) main_wgtman_pane

0x7a3f,	// (0x000acb65) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7a3f,	// (0x000acb65) main_fs_bigclock_unlock_btn_pane

0x842d,	// (0x000ad553) bg_button_pane_cp16

0x843d,	// (0x000ad563) cell_tport_appsw_pane_g3

0x8c40,	// (0x000add66) cf0_flow_pane_ParamLimits

0x8c40,	// (0x000add66) cf0_flow_pane

0xe5a7,	// (0x000b36cd) listscroll_cf0_pane

0xe5b2,	// (0x000b36d8) main_cf0_pane_g1

0x8c55,	// (0x000add7b) main_cf0_pane_t1_ParamLimits

0x8c55,	// (0x000add7b) main_cf0_pane_t1

0x8c6c,	// (0x000add92) main_cf0_pane_t2_ParamLimits

0x8c6c,	// (0x000add92) main_cf0_pane_t2

0x0001,

0xfe75,	// (0x000b4f9b) main_cf0_pane_t_ParamLimits

0xfe75,	// (0x000b4f9b) main_cf0_pane_t

0xe5c4,	// (0x000b36ea) scroll_pane_cp11

0x8c83,	// (0x000adda9) cf0_flow_pane_g1

0x8c8b,	// (0x000addb1) cf0_flow_pane_g2

0x0001,

0xfe7a,	// (0x000b4fa0) cf0_flow_pane_g

0x8c93,	// (0x000addb9) cf0_flow_pane_t1

0xe633,	// (0x000b3759) main_call6_pane

0xe633,	// (0x000b3759) main_calllock_pane

0x8ca1,	// (0x000addc7) call6_btn_grp_pane_ParamLimits

0x8ca1,	// (0x000addc7) call6_btn_grp_pane

0x8cbb,	// (0x000adde1) call6_pane_g1_ParamLimits

0x8cbb,	// (0x000adde1) call6_pane_g1

0x8cd1,	// (0x000addf7) popup_call6_1st_window_ParamLimits

0x8cd1,	// (0x000addf7) popup_call6_1st_window

0x8ce2,	// (0x000ade08) popup_call6_2nd_window_ParamLimits

0x8ce2,	// (0x000ade08) popup_call6_2nd_window

0x8cf3,	// (0x000ade19) cell_call6_btn_pane_ParamLimits

0x8cf3,	// (0x000ade19) cell_call6_btn_pane

0x9709,	// (0x000ae82f) bg_popup_call2_in_pane_cp03

0xe5cf,	// (0x000b36f5) popup_call6_1st_window_g1

0xe5d7,	// (0x000b36fd) popup_call6_1st_window_g2

0xe5df,	// (0x000b3705) popup_call6_1st_window_g3

0x0002,

0x00a0,	// (0x000a51c6) popup_call6_1st_window_g

0xe5e7,	// (0x000b370d) popup_call6_1st_window_t1

0xe5f6,	// (0x000b371c) popup_call6_1st_window_t2

0xe604,	// (0x000b372a) popup_call6_1st_window_t3

0x0002,

0x00a7,	// (0x000a51cd) popup_call6_1st_window_t

0x9709,	// (0x000ae82f) bg_popup_call2_in_pane_cp04

0xe5cf,	// (0x000b36f5) popup_call6_2nd_window_g1

0xe5d7,	// (0x000b36fd) popup_call6_2nd_window_g2

0xe5df,	// (0x000b3705) popup_call6_2nd_window_g3

0x0002,

0x00a0,	// (0x000a51c6) popup_call6_2nd_window_g

0xe5e7,	// (0x000b370d) popup_call6_2nd_window_t1

0x9575,	// (0x000ae69b) bg_button_pane_cp15

0xa2a1,	// (0x000af3c7) cell_call6_btn_pane_g1

0xa2aa,	// (0x000af3d0) cell_call6_btn_pane_t1

0x8d06,	// (0x000ade2c) listscroll_wgtman_pane_ParamLimits

0x8d06,	// (0x000ade2c) listscroll_wgtman_pane

0x8d27,	// (0x000ade4d) wgtman_btn_pane_ParamLimits

0x8d27,	// (0x000ade4d) wgtman_btn_pane

0xa631,	// (0x000af757) aid_scroll_copy1

0xe612,	// (0x000b3738) list_wgtman_pane

0x8d6a,	// (0x000ade90) wgtman_btn_pane_g1_ParamLimits

0x8d6a,	// (0x000ade90) wgtman_btn_pane_g1

0x8d96,	// (0x000adebc) wgtman_btn_pane_t1_ParamLimits

0x8d96,	// (0x000adebc) wgtman_btn_pane_t1

0xe61c,	// (0x000b3742) wgtman_btn_pane_t2_ParamLimits

0xe61c,	// (0x000b3742) wgtman_btn_pane_t2

0x0001,

0xfe7f,	// (0x000b4fa5) wgtman_btn_pane_t_ParamLimits

0xfe7f,	// (0x000b4fa5) wgtman_btn_pane_t

0x8dd3,	// (0x000adef9) listrow_wgtman_pane_ParamLimits

0x8dd3,	// (0x000adef9) listrow_wgtman_pane

0x8de5,	// (0x000adf0b) listrow_wgtman_pane_g1

0x8df2,	// (0x000adf18) listrow_wgtman_pane_g2

0x0001,

0xfe84,	// (0x000b4faa) listrow_wgtman_pane_g

0x8e10,	// (0x000adf36) listrow_wgtman_pane_t1

0x8e28,	// (0x000adf4e) listrow_wgtman_pane_t2

0x0001,

0xfe89,	// (0x000b4faf) listrow_wgtman_pane_t

0x8e4e,	// (0x000adf74) wait_bar_pane_cp09

0xeeb1,	// (0x000b3fd7) main_calllock_btn_pane

0xeebb,	// (0x000b3fe1) main_calllock_pane_g1

0xe633,	// (0x000b3759) bg_button_pane_cp17

0xeec7,	// (0x000b3fed) main_calllock_btn_pane_g1

0xeed0,	// (0x000b3ff6) main_calllock_btn_pane_t1

0xe633,	// (0x000b3759) main_dialer3_pane

0xe633,	// (0x000b3759) main_fmrd2_pane

0xc090,	// (0x000b11b6) main_fs_bigclock_unlock_btn_pane_g1

0x8e68,	// (0x000adf8e) main_fs_bigclock_unlock_btn_pane_t1

0x8e76,	// (0x000adf9c) area_fmrd2_info_pane_ParamLimits

0x8e76,	// (0x000adf9c) area_fmrd2_info_pane

0x8e87,	// (0x000adfad) area_fmrd2_visual_pane_ParamLimits

0x8e87,	// (0x000adfad) area_fmrd2_visual_pane

0x8e95,	// (0x000adfbb) fmrd2_indi_pane_ParamLimits

0x8e95,	// (0x000adfbb) fmrd2_indi_pane

0x8ea2,	// (0x000adfc8) area_fmrd2_visual_pane_g1

0x8eaa,	// (0x000adfd0) area_fmrd2_visual_pane_t1

0x8eba,	// (0x000adfe0) area_fmrd2_visual_pane_t2

0x8eca,	// (0x000adff0) area_fmrd2_visual_pane_t3

0x0002,

0xfe93,	// (0x000b4fb9) area_fmrd2_visual_pane_t

0x8eda,	// (0x000ae000) area_fmrd2_info_pane_g1

0x8ee2,	// (0x000ae008) area_fmrd2_info_pane_t1

0x8ef2,	// (0x000ae018) area_fmrd2_info_pane_t2

0x8f02,	// (0x000ae028) area_fmrd2_info_pane_t3

0x8f12,	// (0x000ae038) area_fmrd2_info_pane_t4

0x0003,

0xfe9a,	// (0x000b4fc0) area_fmrd2_info_pane_t

0x8f20,	// (0x000ae046) fmrd2_indi_pane_t1

0x8f30,	// (0x000ae056) fmrd2_indi_pane_t2

0x8f40,	// (0x000ae066) fmrd2_indi_pane_t3

0x0002,

0xfea3,	// (0x000b4fc9) fmrd2_indi_pane_t

0xd90f,	// (0x000b2a35) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd90f,	// (0x000b2a35) list_single_fs_bigclock_indicator_pane_g5

0xd9c0,	// (0x000b2ae6) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd9c0,	// (0x000b2ae6) list_single_fs_bigclock_indicator_pane_t5

0x85c8,	// (0x000ad6ee) aid_cell_bcale_month_pane_ParamLimits

0x85c8,	// (0x000ad6ee) aid_cell_bcale_month_pane

0x85e6,	// (0x000ad70c) bcale_month_pane_ParamLimits

0x85e6,	// (0x000ad70c) bcale_month_pane

0x860a,	// (0x000ad730) bcale_preview_pane_ParamLimits

0x860a,	// (0x000ad730) bcale_preview_pane

0xe42f,	// (0x000b3555) list_single_fs_bigclock_pane_t1_ParamLimits

0xe44e,	// (0x000b3574) list_single_fs_bigclock_pane_t2_ParamLimits

0xe44e,	// (0x000b3574) list_single_fs_bigclock_pane_t2

0x0001,

0x0054,	// (0x000a517a) list_single_fs_bigclock_pane_t_ParamLimits

0x0054,	// (0x000a517a) list_single_fs_bigclock_pane_t

0x8e60,	// (0x000adf86) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe8e,	// (0x000b4fb4) main_fs_bigclock_unlock_btn_pane_g

0x8f50,	// (0x000ae076) aid_dia3_key_size_ParamLimits

0x8f50,	// (0x000ae076) aid_dia3_key_size

0x8f5f,	// (0x000ae085) aid_dia3_listrow_size_ParamLimits

0x8f5f,	// (0x000ae085) aid_dia3_listrow_size

0x8f74,	// (0x000ae09a) dia3_keypad_fun_pane_ParamLimits

0x8f74,	// (0x000ae09a) dia3_keypad_fun_pane

0x8f90,	// (0x000ae0b6) dia3_keypad_num_pane_ParamLimits

0x8f90,	// (0x000ae0b6) dia3_keypad_num_pane

0x8fab,	// (0x000ae0d1) dia3_listscroll_pane_ParamLimits

0x8fab,	// (0x000ae0d1) dia3_listscroll_pane

0x8fbe,	// (0x000ae0e4) dia3_numentry_pane_ParamLimits

0x8fbe,	// (0x000ae0e4) dia3_numentry_pane

0xeedf,	// (0x000b4005) dia3_list_pane

0xeeea,	// (0x000b4010) scroll_pane_cp12

0xe633,	// (0x000b3759) bg_dia3_numentry_pane

0x8fd2,	// (0x000ae0f8) dia3_numentry_pane_t1

0x8fe1,	// (0x000ae107) cell_dia3_key_num_pane

0x8fe9,	// (0x000ae10f) cell_dia3_key0_fun_pane_ParamLimits

0x8fe9,	// (0x000ae10f) cell_dia3_key0_fun_pane

0x8ffd,	// (0x000ae123) cell_dia3_key1_fun_pane_ParamLimits

0x8ffd,	// (0x000ae123) cell_dia3_key1_fun_pane

0x9015,	// (0x000ae13b) dia3_listrow_pane

0xd662,	// (0x000b2788) bg_dia3_numentry_pane_g1

0xe633,	// (0x000b3759) bg_button_pane_cp21

0xeef5,	// (0x000b401b) cell_dia3_key_num_pane_t1

0xef03,	// (0x000b4029) cell_dia3_key_num_pane_t2

0xef12,	// (0x000b4038) cell_dia3_key_num_pane_t3

0xef21,	// (0x000b4047) cell_dia3_key_num_pane_t4

0x0003,

0xfeaa,	// (0x000b4fd0) cell_dia3_key_num_pane_t

0xe633,	// (0x000b3759) bg_button_pane_cp19

0x9027,	// (0x000ae14d) cell_dia3_key0_fun_pane_g1

0xe633,	// (0x000b3759) bg_button_pane_cp20

0x902f,	// (0x000ae155) cell_dia3_key1_fun_pane_g1

0x9037,	// (0x000ae15d) area_left_week_number_pane

0x9043,	// (0x000ae169) area_top_day_name_pane

0x9056,	// (0x000ae17c) frame_month_view_pane

0xef30,	// (0x000b4056) grid_month_view_pane

0x9069,	// (0x000ae18f) cell_top_day_name_pane_ParamLimits

0x9069,	// (0x000ae18f) cell_top_day_name_pane

0x9096,	// (0x000ae1bc) cell_area_left_week_number_pane_ParamLimits

0x9096,	// (0x000ae1bc) cell_area_left_week_number_pane

0x90aa,	// (0x000ae1d0) cell_month_view_pane_ParamLimits

0x90aa,	// (0x000ae1d0) cell_month_view_pane

0xef3e,	// (0x000b4064) frm_month_g1

0x90d7,	// (0x000ae1fd) frm_month_g2

0x90ea,	// (0x000ae210) frm_month_g3

0x90fd,	// (0x000ae223) frm_month_g4

0x9110,	// (0x000ae236) frm_month_g5

0x9123,	// (0x000ae249) frm_month_g6

0x9136,	// (0x000ae25c) frm_month_g7

0xef4b,	// (0x000b4071) frm_month_g8

0x9149,	// (0x000ae26f) frm_month_g9

0x9159,	// (0x000ae27f) frm_month_g10

0x9169,	// (0x000ae28f) frm_month_g11

0x9179,	// (0x000ae29f) frm_month_g12

0x918b,	// (0x000ae2b1) frm_month_g13

0x919d,	// (0x000ae2c3) frm_month_g14

0x91b1,	// (0x000ae2d7) frm_month_g15

0x91c5,	// (0x000ae2eb) frm_month_g16

0x000f,

0xfeb3,	// (0x000b4fd9) frm_month_g

0xef58,	// (0x000b407e) cell_top_day_name_pane_t1

0x91d9,	// (0x000ae2ff) cell_area_left_week_number_pane_g1

0x91e5,	// (0x000ae30b) cell_area_left_week_number_pane_t1

0xc2f3,	// (0x000b1419) cell_month_view_pane_g1

0x91f8,	// (0x000ae31e) cell_month_view_pane_t1

0xe633,	// (0x000b3759) main_fps_pane

0xdbdd,	// (0x000b2d03) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdbdd,	// (0x000b2d03) cmail_ddmenu_btn02_pane_cp1

0xdbf9,	// (0x000b2d1f) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdbf9,	// (0x000b2d1f) cmail_ddmenu_btn02_pane_cp2

0x88c1,	// (0x000ad9e7) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x88c1,	// (0x000ad9e7) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x000b4f53) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x000b4f53) cmail_ddmenu_btn02_pane_g

0x88df,	// (0x000ada05) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x88df,	// (0x000ada05) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x000b4f58) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x000b4f58) cmail_ddmenu_btn02_pane_t

0x920b,	// (0x000ae331) fps_text_pane_ParamLimits

0x920b,	// (0x000ae331) fps_text_pane

0x9222,	// (0x000ae348) main_fps_pane_g1_ParamLimits

0x9222,	// (0x000ae348) main_fps_pane_g1

0x923c,	// (0x000ae362) wait_bar_pane_cp010_ParamLimits

0x923c,	// (0x000ae362) wait_bar_pane_cp010

0x924d,	// (0x000ae373) fps_text_pane_t1_ParamLimits

0x924d,	// (0x000ae373) fps_text_pane_t1

0xcb6d,	// (0x000b1c93) cam4_image_uncrop_pane_g1

0xcb76,	// (0x000b1c9c) cam4_image_uncrop_pane_g2

0x5b1b,	// (0x000aac41) cam4_image_uncrop_pane_g3

0x5b24,	// (0x000aac4a) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000b4a14) cam4_image_uncrop_pane_g

0x9015,	// (0x000ae13b) dia3_listrow_pane_ParamLimits

0xe633,	// (0x000b3759) main_phob2_pane

0x83fe,	// (0x000ad524) cell_tport_appsw_pane_cp02_ParamLimits

0x83fe,	// (0x000ad524) cell_tport_appsw_pane_cp02

0x8412,	// (0x000ad538) cell_tport_appsw_pane_cp03_ParamLimits

0x8412,	// (0x000ad538) cell_tport_appsw_pane_cp03

0xe633,	// (0x000b3759) phob2_contact_card_pane

0xe633,	// (0x000b3759) phob2_listscroll_pane

0xef6b,	// (0x000b4091) phob2_list_pane

0xef73,	// (0x000b4099) scroll_pane_cp034

0x9265,	// (0x000ae38b) phob2_cc_data_pane_ParamLimits

0x9265,	// (0x000ae38b) phob2_cc_data_pane

0x9284,	// (0x000ae3aa) phob2_cc_listscroll_pane_ParamLimits

0x9284,	// (0x000ae3aa) phob2_cc_listscroll_pane

0x8dd3,	// (0x000adef9) list_double_large_graphic_phob2_pane_ParamLimits

0x8dd3,	// (0x000adef9) list_double_large_graphic_phob2_pane

0x92a2,	// (0x000ae3c8) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x92a2,	// (0x000ae3c8) list_double_large_graphic_phob2_pane_g1

0x92b8,	// (0x000ae3de) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x92b8,	// (0x000ae3de) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfed4,	// (0x000b4ffa) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfed4,	// (0x000b4ffa) list_double_large_graphic_phob2_pane_g

0x92c4,	// (0x000ae3ea) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x92c4,	// (0x000ae3ea) list_double_large_graphic_phob2_pane_t1

0x92d9,	// (0x000ae3ff) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x92d9,	// (0x000ae3ff) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfed9,	// (0x000b4fff) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfed9,	// (0x000b4fff) list_double_large_graphic_phob2_pane_t

0xe633,	// (0x000b3759) list_highlight_pane_cp024

0x92eb,	// (0x000ae411) phob2_cc_button_pane

0x92f3,	// (0x000ae419) phob2_cc_data_pane_g1_ParamLimits

0x92f3,	// (0x000ae419) phob2_cc_data_pane_g1

0x9308,	// (0x000ae42e) phob2_cc_data_pane_g2_ParamLimits

0x9308,	// (0x000ae42e) phob2_cc_data_pane_g2

0x0001,

0xfede,	// (0x000b5004) phob2_cc_data_pane_g_ParamLimits

0xfede,	// (0x000b5004) phob2_cc_data_pane_g

0x9318,	// (0x000ae43e) phob2_cc_data_pane_t1_ParamLimits

0x9318,	// (0x000ae43e) phob2_cc_data_pane_t1

0x9330,	// (0x000ae456) phob2_cc_data_pane_t2_ParamLimits

0x9330,	// (0x000ae456) phob2_cc_data_pane_t2

0x9348,	// (0x000ae46e) phob2_cc_data_pane_t3_ParamLimits

0x9348,	// (0x000ae46e) phob2_cc_data_pane_t3

0x0002,

0xfee3,	// (0x000b5009) phob2_cc_data_pane_t_ParamLimits

0xfee3,	// (0x000b5009) phob2_cc_data_pane_t

0xef7b,	// (0x000b40a1) phob2_cc_list_pane_ParamLimits

0xef7b,	// (0x000b40a1) phob2_cc_list_pane

0xcdd9,	// (0x000b1eff) scroll_pane_cp035_ParamLimits

0xcdd9,	// (0x000b1eff) scroll_pane_cp035

0xee42,	// (0x000b3f68) bg_button_pane_cp033

0xef87,	// (0x000b40ad) phob2_cc_button_pane_g1

0xef93,	// (0x000b40b9) phob2_cc_button_pane_t1

0xefa8,	// (0x000b40ce) phob2_cc_button_pane_t2

0x0001,

0xfeea,	// (0x000b5010) phob2_cc_button_pane_t

0x9360,	// (0x000ae486) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9360,	// (0x000ae486) list_double_large_graphic_phob2_cc_pane

0x9390,	// (0x000ae4b6) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9390,	// (0x000ae4b6) list_double_large_graphic_phob2_cc_pane_g1

0x939c,	// (0x000ae4c2) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x939c,	// (0x000ae4c2) list_double_large_graphic_phob2_cc_pane_g2

0x93a8,	// (0x000ae4ce) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x93a8,	// (0x000ae4ce) list_double_large_graphic_phob2_cc_pane_g3

0x93b4,	// (0x000ae4da) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x93b4,	// (0x000ae4da) list_double_large_graphic_phob2_cc_pane_g4

0x93c0,	// (0x000ae4e6) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x93c0,	// (0x000ae4e6) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfeef,	// (0x000b5015) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfeef,	// (0x000b5015) list_double_large_graphic_phob2_cc_pane_g

0x93cc,	// (0x000ae4f2) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x93cc,	// (0x000ae4f2) list_double_large_graphic_phob2_cc_pane_t1

0x93f5,	// (0x000ae51b) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x93f5,	// (0x000ae51b) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfefa,	// (0x000b5020) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfefa,	// (0x000b5020) list_double_large_graphic_phob2_cc_pane_t

0xefba,	// (0x000b40e0) list_highlight_pane_cp025_ParamLimits

0xefba,	// (0x000b40e0) list_highlight_pane_cp025

0xee42,	// (0x000b3f68) bg_button_pane_cp033_ParamLimits

0xef87,	// (0x000b40ad) phob2_cc_button_pane_g1_ParamLimits

0xef93,	// (0x000b40b9) phob2_cc_button_pane_t1_ParamLimits

0xefa8,	// (0x000b40ce) phob2_cc_button_pane_t2_ParamLimits

0xfeea,	// (0x000b5010) phob2_cc_button_pane_t_ParamLimits

0x04b6,	// (0x000a55dc) popup_wgtman_window

0xcbfa,	// (0x000b1d20) scroll_pane_cp038

0x8d4c,	// (0x000ade72) wgtman_btn_pane_cp_01_ParamLimits

0x8d4c,	// (0x000ade72) wgtman_btn_pane_cp_01

0xefc8,	// (0x000b40ee) wgtman_content_pane

0xefd1,	// (0x000b40f7) wgtman_heading_pane

0xe633,	// (0x000b3759) bg_heading_pane_cp02

0xefda,	// (0x000b4100) wgtman_heading_pane_g1

0xefe2,	// (0x000b4108) wgtman_heading_pane_t1

0xeff0,	// (0x000b4116) scroll_pane_cp036

0xeff8,	// (0x000b411e) wgtman_list_pane

0xf000,	// (0x000b4126) wgtman_list_pane_t1_ParamLimits

0xf000,	// (0x000b4126) wgtman_list_pane_t1

0xa0a5,	// (0x000af1cb) cam4_grid_pane

0x67d6,	// (0x000ab8fc) bg_button_pane_cp015_ParamLimits

0x67e8,	// (0x000ab90e) bg_button_pane_cp016_ParamLimits

0x67fb,	// (0x000ab921) bg_button_pane_cp017_ParamLimits

0x6853,	// (0x000ab979) popup_vitu2_query_window_g3_ParamLimits

0x6853,	// (0x000ab979) popup_vitu2_query_window_g3

0x6910,	// (0x000aba36) popup_vitu2_query_window_t6_ParamLimits

0x6910,	// (0x000aba36) popup_vitu2_query_window_t6

0x693b,	// (0x000aba61) popup_vitu2_query_window_t7_ParamLimits

0x693b,	// (0x000aba61) popup_vitu2_query_window_t7

0xcb6d,	// (0x000b1c93) cam4_grid_pane_g1

0xcb76,	// (0x000b1c9c) cam4_grid_pane_g2

0xf01a,	// (0x000b4140) cam4_grid_pane_g3

0xf023,	// (0x000b4149) cam4_grid_pane_g4

0x0003,

0xfeff,	// (0x000b5025) cam4_grid_pane_g

0x13f1,	// (0x000a6517) aid_placing_vt_slider_lsc_ParamLimits

0x16fc,	// (0x000a6822) vidtel_button_pane_ParamLimits

0x16fc,	// (0x000a6822) vidtel_button_pane

0xe633,	// (0x000b3759) bg_button_pane_cp034

0xf02e,	// (0x000b4154) vidtel_button_pane_g1

0xf036,	// (0x000b415c) vidtel_button_pane_t1

0xcd20,	// (0x000b1e46) aid_size_vtel_slider_touch

0xcdd9,	// (0x000b1eff) scroll_pane_cp039

0x7725,	// (0x000ac84b) ncim_query_button_pane_cp01_ParamLimits

0x7744,	// (0x000ac86a) ncimui_query_pane_g1_ParamLimits

0xee42,	// (0x000b3f68) input_focus_pane_cp012_ParamLimits

0xd6a0,	// (0x000b27c6) ncim_query_entry_pane_t1_ParamLimits

0xcdd9,	// (0x000b1eff) scroll_pane_cp039_ParamLimits

0xa715,	// (0x000af83b) navi_pane_bcale_mc_g1

0xa71d,	// (0x000af843) navi_pane_bcale_mc_t1

0xdc42,	// (0x000b2d68) main_sp_fs_email_pane_g1

0xdc4e,	// (0x000b2d74) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x000b4e0b) main_sp_fs_email_pane_g

0xe0ba,	// (0x000b31e0) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe0ba,	// (0x000b31e0) list_single_cale_mrui_row_pane_g3

0x88ff,	// (0x000ada25) list_single_recal_day_pane_g5_event_pane

0xe299,	// (0x000b33bf) list_single_recal_day_pane_g7

0xf04c,	// (0x000b4172) list_recal_day_event_pane_cp01

0xf055,	// (0x000b417b) list_recal_vselct_arw_lo_pane_cp01

0xf05d,	// (0x000b4183) list_recal_vselct_arw_up_pane_cp01

0xf065,	// (0x000b418b) list_recal_vselct_pane_cp01

0xcd42,	// (0x000b1e68) list_recal_day_event_pane_cp01_g1

0xf06f,	// (0x000b4195) list_recal_day_event_pane_cp01_t1

0xe2a1,	// (0x000b33c7) list_single_recal_day_pane_t1_ParamLimits

0xe2b3,	// (0x000b33d9) list_single_recal_day_pane_t2_ParamLimits

0x001c,	// (0x000a5142) list_single_recal_day_pane_t_ParamLimits

0xecab,	// (0x000b3dd1) bg_notes_pane_ParamLimits

0xed4e,	// (0x000b3e74) list_notes_pane_ParamLimits

0x07fc,	// (0x000a5922) scroll_pane_cp06_ParamLimits

0xed70,	// (0x000b3e96) main_notes_pane_ParamLimits

0xe633,	// (0x000b3759) main_welc_pane

0x941e,	// (0x000ae544) main_welc_body_pane_ParamLimits

0x941e,	// (0x000ae544) main_welc_body_pane

0x943c,	// (0x000ae562) main_welc_opti_pane_ParamLimits

0x943c,	// (0x000ae562) main_welc_opti_pane

0x9481,	// (0x000ae5a7) main_welc_pane_t1_ParamLimits

0x9481,	// (0x000ae5a7) main_welc_pane_t1

0x949f,	// (0x000ae5c5) main_welc_body_row_pane_ParamLimits

0x949f,	// (0x000ae5c5) main_welc_body_row_pane

0xf07d,	// (0x000b41a3) main_welc_opti_row_pane_ParamLimits

0xf07d,	// (0x000b41a3) main_welc_opti_row_pane

0xf08b,	// (0x000b41b1) main_welc_opti_row_pane_g1

0x94b3,	// (0x000ae5d9) main_welc_opti_row_pane_t1

0xf093,	// (0x000b41b9) main_welc_body_row_pane_t1

0xe50f,	// (0x000b3635) popup_notif_wgt_heading_pane

0xe529,	// (0x000b364f) aid_size_list_notif_wgt_del_ParamLimits

0xe536,	// (0x000b365c) list_notif_wgt_row_pane_g1_ParamLimits

0xe542,	// (0x000b3668) list_notif_wgt_row_pane_g2_ParamLimits

0xe551,	// (0x000b3677) list_notif_wgt_row_pane_g3_ParamLimits

0x0083,	// (0x000a51a9) list_notif_wgt_row_pane_g_ParamLimits

0xe55e,	// (0x000b3684) list_notif_wgt_row_pane_t1_ParamLimits

0xe574,	// (0x000b369a) list_notif_wgt_row_pane_t2_ParamLimits

0xe586,	// (0x000b36ac) list_notif_wgt_row_pane_t3_ParamLimits

0x008a,	// (0x000a51b0) list_notif_wgt_row_pane_t_ParamLimits

0x8de5,	// (0x000adf0b) listrow_wgtman_pane_g1_ParamLimits

0x8df2,	// (0x000adf18) listrow_wgtman_pane_g2_ParamLimits

0xfe84,	// (0x000b4faa) listrow_wgtman_pane_g_ParamLimits

0x8e10,	// (0x000adf36) listrow_wgtman_pane_t1_ParamLimits

0x8e28,	// (0x000adf4e) listrow_wgtman_pane_t2_ParamLimits

0xfe89,	// (0x000b4faf) listrow_wgtman_pane_t_ParamLimits

0x8e4e,	// (0x000adf74) wait_bar_pane_cp09_ParamLimits

0xe633,	// (0x000b3759) bg_popup_heading_pane_cp02

0xf0a2,	// (0x000b41c8) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x000b41d0) popup_notif_wgt_heading_pane_t1

0xe633,	// (0x000b3759) main_vids_pane

0xe633,	// (0x000b3759) vids_listscroll_pane

0x94c2,	// (0x000ae5e8) scroll_pane_cp040

0xe633,	// (0x000b3759) vids_list_pane

0x94cd,	// (0x000ae5f3) vids_list_double_pane_ParamLimits

0x94cd,	// (0x000ae5f3) vids_list_double_pane

0x94de,	// (0x000ae604) vids_list_double_pane_g1

0x94e7,	// (0x000ae60d) vids_list_double_pane_t1

0x94f7,	// (0x000ae61d) vids_list_double_pane_t2

0x0001,

0xff0d,	// (0x000b5033) vids_list_double_pane_t

0x9567,	// (0x000ae68d) main_ncimui_pane_ParamLimits

0x755b,	// (0x000ac681) main_ncimui_pane_g1_ParamLimits

0x7567,	// (0x000ac68d) main_ncimui_pane_g2_ParamLimits

0x7567,	// (0x000ac68d) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x000b4d10) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x000b4d10) main_ncimui_pane_g

0x9457,	// (0x000ae57d) main_welc_pane_g1_ParamLimits

0x9457,	// (0x000ae57d) main_welc_pane_g1

0x946c,	// (0x000ae592) main_welc_pane_g2_ParamLimits

0x946c,	// (0x000ae592) main_welc_pane_g2

0x0001,

0xff08,	// (0x000b502e) main_welc_pane_g_ParamLimits

0xff08,	// (0x000b502e) main_welc_pane_g

0xecab,	// (0x000b3dd1) listscroll_mce_pane_ParamLimits

0xa86a,	// (0x000af990) wait_bar_pane_cp10

0xbc70,	// (0x000b0d96) main_cale_day_pane_ParamLimits

0xbc70,	// (0x000b0d96) main_cale_week_pane_ParamLimits

0xecab,	// (0x000b3dd1) main_messa_pane_ParamLimits

0x4dc8,	// (0x000a9eee) main_clock2_btn_pane_ParamLimits

0x4dc8,	// (0x000a9eee) main_clock2_btn_pane

0xc4d3,	// (0x000b15f9) main_clock2_btn_pane_cp01_ParamLimits

0xc4d3,	// (0x000b15f9) main_clock2_btn_pane_cp01

0xe046,	// (0x000b316c) list_cale_mrui_pane_ParamLimits

0xe5bc,	// (0x000b36e2) main_cf0_pane_g2

0x0001,

0x0091,	// (0x000a51b7) main_cf0_pane_g

0x9037,	// (0x000ae15d) area_left_week_number_pane_ParamLimits

0x9043,	// (0x000ae169) area_top_day_name_pane_ParamLimits

0x9056,	// (0x000ae17c) frame_month_view_pane_ParamLimits

0xef30,	// (0x000b4056) grid_month_view_pane_ParamLimits

0xef3e,	// (0x000b4064) frm_month_g1_ParamLimits

0x90d7,	// (0x000ae1fd) frm_month_g2_ParamLimits

0x90ea,	// (0x000ae210) frm_month_g3_ParamLimits

0x90fd,	// (0x000ae223) frm_month_g4_ParamLimits

0x9110,	// (0x000ae236) frm_month_g5_ParamLimits

0x9123,	// (0x000ae249) frm_month_g6_ParamLimits

0x9136,	// (0x000ae25c) frm_month_g7_ParamLimits

0xef4b,	// (0x000b4071) frm_month_g8_ParamLimits

0x9149,	// (0x000ae26f) frm_month_g9_ParamLimits

0x9159,	// (0x000ae27f) frm_month_g10_ParamLimits

0x9169,	// (0x000ae28f) frm_month_g11_ParamLimits

0x9179,	// (0x000ae29f) frm_month_g12_ParamLimits

0x918b,	// (0x000ae2b1) frm_month_g13_ParamLimits

0x919d,	// (0x000ae2c3) frm_month_g14_ParamLimits

0x91b1,	// (0x000ae2d7) frm_month_g15_ParamLimits

0x91c5,	// (0x000ae2eb) frm_month_g16_ParamLimits

0xfeb3,	// (0x000b4fd9) frm_month_g_ParamLimits

0xef58,	// (0x000b407e) cell_top_day_name_pane_t1_ParamLimits

0x91d9,	// (0x000ae2ff) cell_area_left_week_number_pane_g1_ParamLimits

0x91e5,	// (0x000ae30b) cell_area_left_week_number_pane_t1_ParamLimits

0xc2f3,	// (0x000b1419) cell_month_view_pane_g1_ParamLimits

0x91f8,	// (0x000ae31e) cell_month_view_pane_t1_ParamLimits

0xeca3,	// (0x000b3dc9) main_clock2_btn_pane_g1

0xf0b8,	// (0x000b41de) main_clock2_btn_pane_t1

0xee42,	// (0x000b3f68) listscroll_cmail_pane_ParamLimits

0xdc42,	// (0x000b2d68) main_sp_fs_email_pane_g1_ParamLimits

0xdc4e,	// (0x000b2d74) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x000b4e0b) main_sp_fs_email_pane_g_ParamLimits

0xe209,	// (0x000b332f) list_recal_day_pane_ParamLimits

0xe21a,	// (0x000b3340) mian_recal_day_pane_t1

0x8067,	// (0x000ad18d) list_single_dyc_row_text_pane_t4_ParamLimits

0x8067,	// (0x000ad18d) list_single_dyc_row_text_pane_t4

0x80b0,	// (0x000ad1d6) list_single_dyc_row_text_pane_t5_ParamLimits

0x80b0,	// (0x000ad1d6) list_single_dyc_row_text_pane_t5

0xdcf4,	// (0x000b2e1a) list_single_dyc_row_text_pane_t6_ParamLimits

0xdcf4,	// (0x000b2e1a) list_single_dyc_row_text_pane_t6

0x237a,	// (0x000a74a0) aid_mgn_list_cale_time_pane

0x9567,	// (0x000ae68d) main_gallery2_pane_ParamLimits

0xc4e9,	// (0x000b160f) main_clock2_pane_cp01_t1

0xc4f9,	// (0x000b161f) main_clock2_pane_cp01_t3

0x0001,

0xf7c0,	// (0x000b48e6) main_clock2_pane_cp01_t

0x0bb6,	// (0x000a5cdc) cale_week_scroll_pane_g16_ParamLimits

0x0bb6,	// (0x000a5cdc) cale_week_scroll_pane_g16

0x9709,	// (0x000ae82f) vorec_slider_pane

0xf036,	// (0x000b415c) vidtel_button_pane_t1_ParamLimits

0x8965,	// (0x000ada8b) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8965,	// (0x000ada8b) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8976,	// (0x000ada9c) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8976,	// (0x000ada9c) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe47,	// (0x000b4f6d) main_fs_bigclock_clock_pane_g_ParamLimits

0x8989,	// (0x000adaaf) main_fs_bigclock_clock_pane_t1_ParamLimits

0x899f,	// (0x000adac5) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe50,	// (0x000b4f76) main_fs_bigclock_clock_pane_t_ParamLimits

0x45bf,	// (0x000a96e5) main_mup3_lyrics_pane_ParamLimits

0x45bf,	// (0x000a96e5) main_mup3_lyrics_pane

0x952d,	// (0x000ae653) main_mup3_lyrics_pane_t1_ParamLimits

0x952d,	// (0x000ae653) main_mup3_lyrics_pane_t1

0x9df7,	// (0x000aef1d) aid_main_mp4_pane_t1_area

0x9e01,	// (0x000aef27) aid_main_mp4_pane_t2_area

0x9ead,	// (0x000aefd3) main_mp4_pane_g7_ParamLimits

0x9ead,	// (0x000aefd3) main_mp4_pane_g7

0x9eb9,	// (0x000aefdf) main_mp4_pane_g8_ParamLimits

0x9eb9,	// (0x000aefdf) main_mp4_pane_g8

0x58ee,	// (0x000aaa14) aid_call6_pane_g1_size

0x937a,	// (0x000ae4a0) list_double_large_graphic_phob2_other_pane_ParamLimits

0x937a,	// (0x000ae4a0) list_double_large_graphic_phob2_other_pane

0x9afc,	// (0x000aec22) list_double_large_graphic_phob2_other_pane_g1

0xe633,	// (0x000b3759) list_highlight_pane_cp026
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
