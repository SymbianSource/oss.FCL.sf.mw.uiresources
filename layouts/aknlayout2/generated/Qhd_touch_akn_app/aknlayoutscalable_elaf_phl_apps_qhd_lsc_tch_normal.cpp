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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0000ede8 };

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
0x0231,	// (0x0000f019) Screen

0x023d,	// (0x0000f025) application_window

0x0279,	// (0x0000f061) area_bottom_pane_ParamLimits

0x0279,	// (0x0000f061) area_bottom_pane

0x02b2,	// (0x0000f09a) area_top_pane_ParamLimits

0x02b2,	// (0x0000f09a) area_top_pane

0x9528,	// (0x00018310) call_video_uplink_pane_ParamLimits

0x9528,	// (0x00018310) call_video_uplink_pane

0x0340,	// (0x0000f128) main_pane_ParamLimits

0x0340,	// (0x0000f128) main_pane

0xbf20,	// (0x0001ad08) context_pane

0x3825,	// (0x0001260d) navi_pane

0x3857,	// (0x0001263f) popup_cale_events_window_ParamLimits

0x3857,	// (0x0001263f) popup_cale_events_window

0xbf33,	// (0x0001ad1b) popup_mup_playback_window

0x386f,	// (0x00012657) signal_pane

0x9ca9,	// (0x00018a91) main_browser_pane

0x9eda,	// (0x00018cc2) main_burst_pane

0x3585,	// (0x0001236d) main_calc_pane

0xbeb2,	// (0x0001ac9a) main_cale_day_pane

0x0996,	// (0x0000f77e) main_cale_month_pane

0xbeb2,	// (0x0001ac9a) main_cale_week_pane

0x9eda,	// (0x00018cc2) main_call_pane

0x9967,	// (0x0001874f) main_call_poc_pane

0x9eda,	// (0x00018cc2) main_camera_pane

0x9eda,	// (0x00018cc2) main_chi_dic_pane

0xa768,	// (0x00019550) main_clock_pane

0x9967,	// (0x0001874f) main_fmradio_pane

0x9eda,	// (0x00018cc2) main_graph_messa_pane

0x9967,	// (0x0001874f) main_help_pane

0x9ca9,	// (0x00018a91) main_im_pane

0x9bc2,	// (0x000189aa) main_image_pane_ParamLimits

0x9bc2,	// (0x000189aa) main_image_pane

0x9967,	// (0x0001874f) main_location2_pane

0x9eda,	// (0x00018cc2) main_location_pane

0x9bc2,	// (0x000189aa) main_messa_pane

0x9967,	// (0x0001874f) main_mp2_pane

0x9eda,	// (0x00018cc2) main_mp_pane

0x9967,	// (0x0001874f) main_msg_pane

0x9967,	// (0x0001874f) main_mup_eq_pane

0x9967,	// (0x0001874f) main_mup_pane

0x9ca9,	// (0x00018a91) main_notes_pane

0x9967,	// (0x0001874f) main_pec_pane

0x9967,	// (0x0001874f) main_phob_pane

0x9967,	// (0x0001874f) main_pinb_pane

0x9967,	// (0x0001874f) main_postcard_pane

0x9967,	// (0x0001874f) main_qdial_pane

0x9eda,	// (0x00018cc2) main_skin_pane

0x9967,	// (0x0001874f) main_smil2_pane

0x9eda,	// (0x00018cc2) main_smil_pane

0x9eda,	// (0x00018cc2) main_video_pane

0x9eda,	// (0x00018cc2) main_video_tele_pane

0x9bc2,	// (0x000189aa) main_viewer_pane_ParamLimits

0x9bc2,	// (0x000189aa) main_viewer_pane

0x9eda,	// (0x00018cc2) main_vorec_pane

0x35d9,	// (0x000123c1) popup_blid_sat_info_window_ParamLimits

0x35d9,	// (0x000123c1) popup_blid_sat_info_window

0x3631,	// (0x00012419) popup_dyc_status_message_window_ParamLimits

0x3631,	// (0x00012419) popup_dyc_status_message_window

0x364b,	// (0x00012433) popup_grid_large_graphic_window_ParamLimits

0x364b,	// (0x00012433) popup_grid_large_graphic_window

0x3707,	// (0x000124ef) popup_loc_request_window_ParamLimits

0x3707,	// (0x000124ef) popup_loc_request_window

0x37fd,	// (0x000125e5) popup_wml_address_window_ParamLimits

0x37fd,	// (0x000125e5) popup_wml_address_window

0x33bf,	// (0x000121a7) call_muted_g1

0x3074,	// (0x00011e5c) popup_call_audio_conf_window_ParamLimits

0x3074,	// (0x00011e5c) popup_call_audio_conf_window

0x33d3,	// (0x000121bb) popup_call_audio_first_window_ParamLimits

0x33d3,	// (0x000121bb) popup_call_audio_first_window

0x3449,	// (0x00012231) popup_call_audio_in_window_ParamLimits

0x3449,	// (0x00012231) popup_call_audio_in_window

0x3485,	// (0x0001226d) popup_call_audio_out_window_ParamLimits

0x3485,	// (0x0001226d) popup_call_audio_out_window

0x34bf,	// (0x000122a7) popup_call_audio_second_window_ParamLimits

0x34bf,	// (0x000122a7) popup_call_audio_second_window

0x3515,	// (0x000122fd) popup_call_audio_wait_window_ParamLimits

0x3515,	// (0x000122fd) popup_call_audio_wait_window

0x354a,	// (0x00012332) popup_number_entry_window_ParamLimits

0x354a,	// (0x00012332) popup_number_entry_window

0x9554,	// (0x0001833c) bg_popup_call_pane_cp05_ParamLimits

0x9554,	// (0x0001833c) bg_popup_call_pane_cp05

0x9574,	// (0x0001835c) popup_number_entry_window_t1

0x9587,	// (0x0001836f) popup_number_entry_window_t2

0x9599,	// (0x00018381) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0001deb2) popup_number_entry_window_t

0x95ab,	// (0x00018393) text_title_cp2

0x95be,	// (0x000183a6) bg_popup_call_pane_cp_ParamLimits

0x95be,	// (0x000183a6) bg_popup_call_pane_cp

0x95cc,	// (0x000183b4) call_thumbnail_pane

0x95d4,	// (0x000183bc) popup_call_audio_in_window_g1_ParamLimits

0x95d4,	// (0x000183bc) popup_call_audio_in_window_g1

0x95e0,	// (0x000183c8) popup_call_audio_in_window_g2_ParamLimits

0x95e0,	// (0x000183c8) popup_call_audio_in_window_g2

0x95ec,	// (0x000183d4) popup_call_audio_in_window_g3_ParamLimits

0x95ec,	// (0x000183d4) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0001debb) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0001debb) popup_call_audio_in_window_g

0x95f8,	// (0x000183e0) popup_call_audio_in_window_t1_ParamLimits

0x95f8,	// (0x000183e0) popup_call_audio_in_window_t1

0x9614,	// (0x000183fc) popup_call_audio_in_window_t2_ParamLimits

0x9614,	// (0x000183fc) popup_call_audio_in_window_t2

0x9630,	// (0x00018418) popup_call_audio_in_window_t3_ParamLimits

0x9630,	// (0x00018418) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0001dec2) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0001dec2) popup_call_audio_in_window_t

0x95be,	// (0x000183a6) bg_popup_call_pane_cp01_ParamLimits

0x95be,	// (0x000183a6) bg_popup_call_pane_cp01

0x95cc,	// (0x000183b4) call_thumbnail_pane_cp02

0x9643,	// (0x0001842b) call_type_pane_cp022

0x964b,	// (0x00018433) popup_call_audio_out_window_g1_ParamLimits

0x964b,	// (0x00018433) popup_call_audio_out_window_g1

0x965d,	// (0x00018445) popup_call_audio_out_window_g2_ParamLimits

0x965d,	// (0x00018445) popup_call_audio_out_window_g2

0x9669,	// (0x00018451) popup_call_audio_out_window_g3_ParamLimits

0x9669,	// (0x00018451) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0001dec9) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0001dec9) popup_call_audio_out_window_g

0x967b,	// (0x00018463) popup_call_audio_out_window_t1_ParamLimits

0x967b,	// (0x00018463) popup_call_audio_out_window_t1

0x9693,	// (0x0001847b) popup_call_audio_out_window_t2_ParamLimits

0x9693,	// (0x0001847b) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0001ded0) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0001ded0) popup_call_audio_out_window_t

0x96a8,	// (0x00018490) bg_popup_call_pane_ParamLimits

0x96a8,	// (0x00018490) bg_popup_call_pane

0x04fc,	// (0x0000f2e4) call_thumbnail_pane_cp_ParamLimits

0x04fc,	// (0x0000f2e4) call_thumbnail_pane_cp

0x972c,	// (0x00018514) call_type_pane_cp01_ParamLimits

0x972c,	// (0x00018514) call_type_pane_cp01

0x9770,	// (0x00018558) popup_call_audio_first_window_g1_ParamLimits

0x9770,	// (0x00018558) popup_call_audio_first_window_g1

0x97bc,	// (0x000185a4) popup_call_audio_first_window_g2_ParamLimits

0x97bc,	// (0x000185a4) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0001ded5) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0001ded5) popup_call_audio_first_window_g

0x9800,	// (0x000185e8) popup_call_audio_first_window_t1_ParamLimits

0x9800,	// (0x000185e8) popup_call_audio_first_window_t1

0x98ac,	// (0x00018694) popup_call_audio_first_window_t4_ParamLimits

0x98ac,	// (0x00018694) popup_call_audio_first_window_t4

0x9938,	// (0x00018720) popup_call_audio_first_window_t5_ParamLimits

0x9938,	// (0x00018720) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0001deda) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0001deda) popup_call_audio_first_window_t

0x9967,	// (0x0001874f) bg_popup_call_pane_cp02

0x9971,	// (0x00018759) call_type_pane_cp023

0x9979,	// (0x00018761) popup_call_audio_wait_window_g1

0x9981,	// (0x00018769) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0001dee1) popup_call_audio_wait_window_g

0x9989,	// (0x00018771) popup_call_audio_wait_window_t3

0x9997,	// (0x0001877f) bg_popup_call_pane_cp03_ParamLimits

0x9997,	// (0x0001877f) bg_popup_call_pane_cp03

0x99f7,	// (0x000187df) call_thumbnail_pane_cp011_ParamLimits

0x99f7,	// (0x000187df) call_thumbnail_pane_cp011

0x9a03,	// (0x000187eb) call_type_pane_cp034_ParamLimits

0x9a03,	// (0x000187eb) call_type_pane_cp034

0x9a3f,	// (0x00018827) popup_call_audio_second_window_g1_ParamLimits

0x9a3f,	// (0x00018827) popup_call_audio_second_window_g1

0x9a7b,	// (0x00018863) popup_call_audio_second_window_g2_ParamLimits

0x9a7b,	// (0x00018863) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0001dee6) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0001dee6) popup_call_audio_second_window_g

0x9ab7,	// (0x0001889f) popup_call_audio_second_window_t1_ParamLimits

0x9ab7,	// (0x0001889f) popup_call_audio_second_window_t1

0x9b38,	// (0x00018920) popup_call_audio_second_window_t2_ParamLimits

0x9b38,	// (0x00018920) popup_call_audio_second_window_t2

0x9b6e,	// (0x00018956) popup_call_audio_second_window_t3_ParamLimits

0x9b6e,	// (0x00018956) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0001deeb) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0001deeb) popup_call_audio_second_window_t

0x9967,	// (0x0001874f) bg_popup_call_pane_cp04

0x9ba4,	// (0x0001898c) list_conf_pane

0x9bac,	// (0x00018994) popup_call_audio_conf_window_t1

0x9bba,	// (0x000189a2) call_thumbnail_pane_g1

0x9bc2,	// (0x000189aa) bg_pinb_pane_ParamLimits

0x9bc2,	// (0x000189aa) bg_pinb_pane

0x9bd0,	// (0x000189b8) find_pinb_pane

0x9bd9,	// (0x000189c1) listscroll_pinb_pane_ParamLimits

0x9bd9,	// (0x000189c1) listscroll_pinb_pane

0x9be8,	// (0x000189d0) pinb_bg_pane_g1

0x0520,	// (0x0000f308) pinb_bg_pane_g2

0x052c,	// (0x0000f314) pinb_bg_pane_g3

0x0538,	// (0x0000f320) pinb_bg_pane_g4

0x0544,	// (0x0000f32c) pinb_bg_pane_g5

0x0550,	// (0x0000f338) pinb_bg_pane_g6

0x055b,	// (0x0000f343) pinb_bg_pane_g7

0x0566,	// (0x0000f34e) pinb_bg_pane_g8

0x0571,	// (0x0000f359) pinb_bg_pane_g9

0x057b,	// (0x0000f363) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0001def2) pinb_bg_pane_g

0x0598,	// (0x0000f380) grid_pinb_pane

0x05a1,	// (0x0000f389) list_pinb_pane

0x05aa,	// (0x0000f392) scroll_pane_cp01_ParamLimits

0x05aa,	// (0x0000f392) scroll_pane_cp01

0x9bf2,	// (0x000189da) find_pinb_pane_g1_ParamLimits

0x9bf2,	// (0x000189da) find_pinb_pane_g1

0x9c0a,	// (0x000189f2) find_pinb_pane_t1

0x9c1c,	// (0x00018a04) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0001df0c) find_pinb_pane_t

0x9c31,	// (0x00018a19) input_focus_pane_cp01_ParamLimits

0x9c31,	// (0x00018a19) input_focus_pane_cp01

0x05bc,	// (0x0000f3a4) cell_pinb_pane_ParamLimits

0x05bc,	// (0x0000f3a4) cell_pinb_pane

0x05e5,	// (0x0000f3cd) cell_pinb_pane_g1_ParamLimits

0x05e5,	// (0x0000f3cd) cell_pinb_pane_g1

0x05f5,	// (0x0000f3dd) cell_pinb_pane_g2_ParamLimits

0x05f5,	// (0x0000f3dd) cell_pinb_pane_g2

0x9c3d,	// (0x00018a25) cell_pinb_pane_g3_ParamLimits

0x9c3d,	// (0x00018a25) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0001df11) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0001df11) cell_pinb_pane_g

0x9967,	// (0x0001874f) grid_highlight_pane_cp01

0x0601,	// (0x0000f3e9) list_pinb_item_pane_ParamLimits

0x0601,	// (0x0000f3e9) list_pinb_item_pane

0x9967,	// (0x0001874f) list_highlight_pane_cp02

0x0613,	// (0x0000f3fb) list_pinb_item_pane_g1_ParamLimits

0x0613,	// (0x0000f3fb) list_pinb_item_pane_g1

0x0620,	// (0x0000f408) list_pinb_item_pane_g2_ParamLimits

0x0620,	// (0x0000f408) list_pinb_item_pane_g2

0x062c,	// (0x0000f414) list_pinb_item_pane_g3_ParamLimits

0x062c,	// (0x0000f414) list_pinb_item_pane_g3

0x063d,	// (0x0000f425) list_pinb_item_pane_g4_ParamLimits

0x063d,	// (0x0000f425) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0001df18) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0001df18) list_pinb_item_pane_g

0x0649,	// (0x0000f431) list_pinb_item_pane_t1_ParamLimits

0x0649,	// (0x0000f431) list_pinb_item_pane_t1

0x067e,	// (0x0000f466) calc_display_pane

0x06a6,	// (0x0000f48e) calc_paper_pane

0x06c9,	// (0x0000f4b1) grid_calc_pane

0x9967,	// (0x0001874f) bg_list_pane_cp01

0x06f7,	// (0x0000f4df) clock_g1

0x06ff,	// (0x0000f4e7) clock_g2

0x0001,

0xf139,	// (0x0001df21) clock_g

0x0707,	// (0x0000f4ef) clock_t1_ParamLimits

0x0707,	// (0x0000f4ef) clock_t1

0x071c,	// (0x0000f504) clock_t2_ParamLimits

0x071c,	// (0x0000f504) clock_t2

0x072e,	// (0x0000f516) clock_t3_ParamLimits

0x072e,	// (0x0000f516) clock_t3

0x0740,	// (0x0000f528) clock_t4_ParamLimits

0x0740,	// (0x0000f528) clock_t4

0x0752,	// (0x0000f53a) clock_t5_ParamLimits

0x0752,	// (0x0000f53a) clock_t5

0x0767,	// (0x0000f54f) clock_t6_ParamLimits

0x0767,	// (0x0000f54f) clock_t6

0x0779,	// (0x0000f561) clock_t7_ParamLimits

0x0779,	// (0x0000f561) clock_t7

0x078b,	// (0x0000f573) clock_t8_ParamLimits

0x078b,	// (0x0000f573) clock_t8

0x079f,	// (0x0000f587) clock_t9_ParamLimits

0x079f,	// (0x0000f587) clock_t9

0x0008,

0xf13e,	// (0x0001df26) clock_t_ParamLimits

0xf13e,	// (0x0001df26) clock_t

0x9c51,	// (0x00018a39) popup_clock_analogue_window_cp02

0x9c51,	// (0x00018a39) popup_clock_digital_window_cp01

0x9c59,	// (0x00018a41) listscroll_help_pane

0x9967,	// (0x0001874f) phob_pre_status_pane

0x9c63,	// (0x00018a4b) grid_qdial_pane

0x9bc2,	// (0x000189aa) listscroll_mce_pane

0x9bc2,	// (0x000189aa) bg_notes_pane

0x9c6d,	// (0x00018a55) list_notes_pane

0x07b3,	// (0x0000f59b) scroll_pane_cp06

0x9c7b,	// (0x00018a63) bg_calc_paper_pane

0x9c8f,	// (0x00018a77) list_calc_pane

0x9ca9,	// (0x00018a91) bg_calc_display_pane

0x07c7,	// (0x0000f5af) calc_display_pane_t1

0x07d9,	// (0x0000f5c1) calc_display_pane_t2

0x9cb5,	// (0x00018a9d) calc_display_pane_t3

0x0002,

0xf151,	// (0x0001df39) calc_display_pane_t

0x07eb,	// (0x0000f5d3) cell_calc_pane_ParamLimits

0x07eb,	// (0x0000f5d3) cell_calc_pane

0x9cc7,	// (0x00018aaf) bg_calc_paper_pane_g1

0x9cd3,	// (0x00018abb) bg_calc_paper_pane_g2

0x9cdf,	// (0x00018ac7) bg_calc_paper_pane_g3

0x9ceb,	// (0x00018ad3) bg_calc_paper_pane_g4

0x9cf7,	// (0x00018adf) bg_calc_paper_pane_g5

0x0820,	// (0x0000f608) bg_calc_paper_pane_g6

0x082f,	// (0x0000f617) bg_calc_paper_pane_g7

0x083e,	// (0x0000f626) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0001df40) bg_calc_paper_pane_g

0x0851,	// (0x0000f639) calc_bg_paper_pane_g9

0x0864,	// (0x0000f64c) list_calc_item_pane_ParamLimits

0x0864,	// (0x0000f64c) list_calc_item_pane

0x9d03,	// (0x00018aeb) list_calc_item_pane_g1

0x9d10,	// (0x00018af8) list_calc_item_pane_t1_ParamLimits

0x9d10,	// (0x00018af8) list_calc_item_pane_t1

0x0879,	// (0x0000f661) list_calc_item_pane_t2_ParamLimits

0x0879,	// (0x0000f661) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0001df51) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0001df51) list_calc_item_pane_t

0x9d22,	// (0x00018b0a) cell_calc_pane_g1

0x9d2c,	// (0x00018b14) grid_highlight_pane_cp02

0x08ab,	// (0x0000f693) bg_calc_display_pane_g1

0x08b4,	// (0x0000f69c) bg_calc_display_pane_g2

0x08be,	// (0x0000f6a6) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0001df5b) bg_calc_display_pane_g

0x08c7,	// (0x0000f6af) cell_qdial_pane_ParamLimits

0x08c7,	// (0x0000f6af) cell_qdial_pane

0x08db,	// (0x0000f6c3) cell_qdial_pane_g1_ParamLimits

0x08db,	// (0x0000f6c3) cell_qdial_pane_g1

0x08f1,	// (0x0000f6d9) cell_qdial_pane_g2_ParamLimits

0x08f1,	// (0x0000f6d9) cell_qdial_pane_g2

0x9d4e,	// (0x00018b36) cell_qdial_pane_g3_ParamLimits

0x9d4e,	// (0x00018b36) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0001df62) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0001df62) cell_qdial_pane_g

0x0918,	// (0x0000f700) cell_qdial_pane_t1_ParamLimits

0x0918,	// (0x0000f700) cell_qdial_pane_t1

0x0930,	// (0x0000f718) cell_qdial_pane_t2_ParamLimits

0x0930,	// (0x0000f718) cell_qdial_pane_t2

0x0943,	// (0x0000f72b) cell_qdial_pane_t3_ParamLimits

0x0943,	// (0x0000f72b) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0001df6b) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0001df6b) cell_qdial_pane_t

0x9967,	// (0x0001874f) grid_highlight_pane_cp04

0x9d5a,	// (0x00018b42) thumbnail_qdial_pane_ParamLimits

0x9d5a,	// (0x00018b42) thumbnail_qdial_pane

0x9db6,	// (0x00018b9e) list_help_pane

0x9dbf,	// (0x00018ba7) scroll_pane_cp02

0x0956,	// (0x0000f73e) help_list_pane_t1_ParamLimits

0x0956,	// (0x0000f73e) help_list_pane_t1

0x9dc8,	// (0x00018bb0) bg_notes_pane_g2

0x9dd0,	// (0x00018bb8) bg_notes_pane_g3

0x9dd8,	// (0x00018bc0) notes_bg_pane_g1

0x9de0,	// (0x00018bc8) notes_bg_pane_g4

0x9de8,	// (0x00018bd0) notes_bg_pane_g5

0x9df0,	// (0x00018bd8) notes_bg_pane_g6

0x9df8,	// (0x00018be0) notes_bg_pane_g7

0x9e00,	// (0x00018be8) notes_bg_pane_g8

0x9e08,	// (0x00018bf0) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0001df89) notes_bg_pane_g

0x0973,	// (0x0000f75b) list_notes_text_pane_ParamLimits

0x0973,	// (0x0000f75b) list_notes_text_pane

0x9e10,	// (0x00018bf8) list_notes_text_pane_g1

0x0988,	// (0x0000f770) list_notes_text_pane_t1

0x0996,	// (0x0000f77e) listscroll_cale_week_pane

0x09c2,	// (0x0000f7aa) bg_cale_heading_pane

0x9e33,	// (0x00018c1b) bg_cale_pane_cp01

0x09da,	// (0x0000f7c2) cale_week_corner_pane

0x09f9,	// (0x0000f7e1) cale_week_day_heading_pane

0x0a16,	// (0x0000f7fe) cale_week_scroll_pane_g1

0x0a29,	// (0x0000f811) cale_week_scroll_pane_g2

0x0a41,	// (0x0000f829) cale_week_scroll_pane_g3

0x0a59,	// (0x0000f841) cale_week_scroll_pane_g4

0x0a71,	// (0x0000f859) cale_week_scroll_pane_g5

0x0a91,	// (0x0000f879) cale_week_scroll_pane_g6

0x0ab1,	// (0x0000f899) cale_week_scroll_pane_g7

0x0ad1,	// (0x0000f8b9) cale_week_scroll_pane_g8

0x0af5,	// (0x0000f8dd) cale_week_scroll_pane_g9

0x0b0d,	// (0x0000f8f5) cale_week_scroll_pane_g10

0x0b25,	// (0x0000f90d) cale_week_scroll_pane_g11

0x0b3d,	// (0x0000f925) cale_week_scroll_pane_g12

0x0b55,	// (0x0000f93d) cale_week_scroll_pane_g13

0x0b55,	// (0x0000f93d) cale_week_scroll_pane_g14

0x0b55,	// (0x0000f93d) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0001df98) cale_week_scroll_pane_g

0x0b91,	// (0x0000f979) cale_week_time_pane

0x0bb5,	// (0x0000f99d) grid_cale_week_pane

0x9e62,	// (0x00018c4a) scroll_pane_cp08

0x0bdb,	// (0x0000f9c3) cell_cale_week_pane_ParamLimits

0x0bdb,	// (0x0000f9c3) cell_cale_week_pane

0x0c69,	// (0x0000fa51) cale_week_day_heading_pane_t1

0x0c93,	// (0x0000fa7b) cale_week_day_heading_pane_t2

0x0cc2,	// (0x0000faaa) cale_week_day_heading_pane_t3

0x0cf1,	// (0x0000fad9) cale_week_day_heading_pane_t4

0x0d20,	// (0x0000fb08) cale_week_day_heading_pane_t5

0x0d57,	// (0x0000fb3f) cale_week_day_heading_pane_t6

0x0d8e,	// (0x0000fb76) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0001dfb9) cale_week_day_heading_pane_t

0x9e7f,	// (0x00018c67) bg_cale_side_pane

0x0db8,	// (0x0000fba0) cale_week_time_pane_t1

0x0dd2,	// (0x0000fbba) cale_week_time_pane_t2

0x0dec,	// (0x0000fbd4) cale_week_time_pane_t3

0x0e06,	// (0x0000fbee) cale_week_time_pane_t4

0x0e20,	// (0x0000fc08) cale_week_time_pane_t5

0x0e3a,	// (0x0000fc22) cale_week_time_pane_t6

0x0e54,	// (0x0000fc3c) cale_week_time_pane_t7

0x0e6e,	// (0x0000fc56) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0001dfc8) cale_week_time_pane_t

0x0e88,	// (0x0000fc70) cell_cale_week_pane_g2

0x0ea7,	// (0x0000fc8f) cell_cale_week_pane_g3_ParamLimits

0x0ea7,	// (0x0000fc8f) cell_cale_week_pane_g3

0x9e8d,	// (0x00018c75) grid_highlight_pane_cp07

0x9e95,	// (0x00018c7d) listscroll_gms_pane

0x9e9f,	// (0x00018c87) grid_gms_pane

0x9ea8,	// (0x00018c90) listscroll_gms_pane_g1

0x9eb0,	// (0x00018c98) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0001dfd9) listscroll_gms_pane_g

0x0ebf,	// (0x0000fca7) scroll_pane_cp010

0x0eca,	// (0x0000fcb2) cell_gms_pane_ParamLimits

0x0eca,	// (0x0000fcb2) cell_gms_pane

0x0edd,	// (0x0000fcc5) cell_gms_pane_g1

0x9eb8,	// (0x00018ca0) cell_gms_pane_g2

0x9ec0,	// (0x00018ca8) cell_gms_pane_g3

0x9ec9,	// (0x00018cb1) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0001dfde) cell_gms_pane_g

0x9ed2,	// (0x00018cba) grid_highlight_pane_cp09

0x3369,	// (0x00012151) phob_pre_status_pane_g1

0x3371,	// (0x00012159) phob_pre_status_pane_g2

0x3379,	// (0x00012161) phob_pre_status_pane_g3

0x3381,	// (0x00012169) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0001e3c9) phob_pre_status_pane_g

0x3391,	// (0x00012179) phob_pre_status_pane_t1

0x339f,	// (0x00012187) phob_pre_status_pane_t2

0x33af,	// (0x00012197) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0001e3d4) phob_pre_status_pane_t

0x9eda,	// (0x00018cc2) bg_list_pane_cp05

0x0eed,	// (0x0000fcd5) grid_vorec_pane

0x0ef5,	// (0x0000fcdd) vorec_t1

0x0f03,	// (0x0000fceb) vorec_t2

0x0f11,	// (0x0000fcf9) vorec_t3

0x0f1f,	// (0x0000fd07) vorec_t4

0x9494,	// (0x0001827c) vorec_t5

0x94a2,	// (0x0001828a) vorec_t6

0x0004,

0xf1ff,	// (0x0001dfe7) vorec_t

0x94b0,	// (0x00018298) wait_bar_pane_cp01

0x0f3b,	// (0x0000fd23) cell_vorec_pane_ParamLimits

0x0f3b,	// (0x0000fd23) cell_vorec_pane

0x9ee2,	// (0x00018cca) cell_vorec_pane_g1

0x9967,	// (0x0001874f) grid_highlight_pane_cp05

0x0f63,	// (0x0000fd4b) cams_zoom_pane

0x0f72,	// (0x0000fd5a) image_vga_pane

0x0f8c,	// (0x0000fd74) main_camera_pane_g1

0x0f9e,	// (0x0000fd86) main_camera_pane_g2

0x0fae,	// (0x0000fd96) main_camera_pane_g3

0x0fbe,	// (0x0000fda6) main_camera_pane_g4

0x0fce,	// (0x0000fdb6) main_camera_pane_g5

0x0fde,	// (0x0000fdc6) main_camera_pane_g6

0x0ff0,	// (0x0000fdd8) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0001dff2) main_camera_pane_g

0x1000,	// (0x0000fde8) main_camera_pane_t1

0x1016,	// (0x0000fdfe) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0001e003) main_camera_pane_t

0x1050,	// (0x0000fe38) cams_zoom_pane_cp_ParamLimits

0x1050,	// (0x0000fe38) cams_zoom_pane_cp

0x1078,	// (0x0000fe60) image_cif_pane_ParamLimits

0x1078,	// (0x0000fe60) image_cif_pane

0x10ae,	// (0x0000fe96) image_subqcif_pane

0x10b6,	// (0x0000fe9e) main_video_pane_g1_ParamLimits

0x10b6,	// (0x0000fe9e) main_video_pane_g1

0x10da,	// (0x0000fec2) main_video_pane_g2_ParamLimits

0x10da,	// (0x0000fec2) main_video_pane_g2

0x110e,	// (0x0000fef6) main_video_pane_g3_ParamLimits

0x110e,	// (0x0000fef6) main_video_pane_g3

0x113c,	// (0x0000ff24) main_video_pane_g4_ParamLimits

0x113c,	// (0x0000ff24) main_video_pane_g4

0x116a,	// (0x0000ff52) main_video_pane_g5_ParamLimits

0x116a,	// (0x0000ff52) main_video_pane_g5

0x9ef8,	// (0x00018ce0) main_video_pane_g6_ParamLimits

0x9ef8,	// (0x00018ce0) main_video_pane_g6

0x0006,

0xf220,	// (0x0001e008) main_video_pane_g_ParamLimits

0xf220,	// (0x0001e008) main_video_pane_g

0x1193,	// (0x0000ff7b) main_video_pane_t1_ParamLimits

0x1193,	// (0x0000ff7b) main_video_pane_t1

0x9f12,	// (0x00018cfa) cams_zoom_pane_g1

0x9f1b,	// (0x00018d03) cams_zoom_pane_g2

0x9f24,	// (0x00018d0c) cams_zoom_pane_g3

0x9f2d,	// (0x00018d15) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0001e017) cams_zoom_pane_g

0x11f0,	// (0x0000ffd8) grid_cams_pane

0x120a,	// (0x0000fff2) linegrid_cams_pane

0x121e,	// (0x00010006) cell_cams_pane_ParamLimits

0x121e,	// (0x00010006) cell_cams_pane

0x9f36,	// (0x00018d1e) cams_burst_image_pane

0x9f3e,	// (0x00018d26) cell_cams_pane_g1

0x9967,	// (0x0001874f) grid_highlight_pane_cp03

0x9d22,	// (0x00018b0a) mp_bg_pane_g1

0x9967,	// (0x0001874f) bg_list_pane_cp03

0xbdd7,	// (0x0001abbf) bg_mp_pane

0xbddf,	// (0x0001abc7) grid_mp_pane

0xbde7,	// (0x0001abcf) media_player_g1

0xbdef,	// (0x0001abd7) media_player_t1

0xbdfd,	// (0x0001abe5) media_player_t2

0xbe0b,	// (0x0001abf3) media_player_t3

0xbe19,	// (0x0001ac01) media_player_t4

0xbe27,	// (0x0001ac0f) media_player_t5

0xbe35,	// (0x0001ac1d) media_player_t6

0xbe43,	// (0x0001ac2b) media_player_t7

0x0006,

0xf5cb,	// (0x0001e3b3) media_player_t

0xbe51,	// (0x0001ac39) wait_bar_pane_cp02

0xf5b0,	// (0x0001e398) main_usb_pane_t

0x3360,	// (0x00012148) cell_mp_pane

0x9d22,	// (0x00018b0a) cell_mp_pane_g1

0x9967,	// (0x0001874f) grid_highlight_pane_cp06

0x9f46,	// (0x00018d2e) grid_skin_colour_pane

0x9f4e,	// (0x00018d36) list_highlight_pane_cp03

0x1354,	// (0x0001013c) skin_g1

0x9f56,	// (0x00018d3e) skin_t1

0x9f65,	// (0x00018d4d) skin_t2

0x0001,

0xf264,	// (0x0001e04c) skin_t

0x135c,	// (0x00010144) cell_skin_colour_pane_ParamLimits

0x135c,	// (0x00010144) cell_skin_colour_pane

0x9f73,	// (0x00018d5b) cell_skin_colour_pane_g1

0x13d5,	// (0x000101bd) call_video_g1_ParamLimits

0x13d5,	// (0x000101bd) call_video_g1

0x13f1,	// (0x000101d9) call_video_g2_ParamLimits

0x13f1,	// (0x000101d9) call_video_g2

0x0001,

0xf269,	// (0x0001e051) call_video_g_ParamLimits

0xf269,	// (0x0001e051) call_video_g

0x1443,	// (0x0001022b) call_video_uplink_pane_cp1_ParamLimits

0x1443,	// (0x0001022b) call_video_uplink_pane_cp1

0x9f85,	// (0x00018d6d) call_video_uplink_pane_cp2

0x14e2,	// (0x000102ca) video_down_crop_pane_ParamLimits

0x14e2,	// (0x000102ca) video_down_crop_pane

0x15d9,	// (0x000103c1) video_down_pane_ParamLimits

0x15d9,	// (0x000103c1) video_down_pane

0x9f8d,	// (0x00018d75) video_down_subqcif_pane_ParamLimits

0x9f8d,	// (0x00018d75) video_down_subqcif_pane

0x9fa5,	// (0x00018d8d) video_down_subqcif_pane_cp_ParamLimits

0x9fa5,	// (0x00018d8d) video_down_subqcif_pane_cp

0x9fcb,	// (0x00018db3) im_reading_pane_ParamLimits

0x9fcb,	// (0x00018db3) im_reading_pane

0x16e9,	// (0x000104d1) im_writing_pane_ParamLimits

0x16e9,	// (0x000104d1) im_writing_pane

0x16ff,	// (0x000104e7) im_reading_pane_t1

0x9fe5,	// (0x00018dcd) list_im_pane

0x9ff6,	// (0x00018dde) scroll_pane_cp07

0x1738,	// (0x00010520) im_writing_pane_t1_ParamLimits

0x1738,	// (0x00010520) im_writing_pane_t1

0xa00f,	// (0x00018df7) im_writing_pane_t2_ParamLimits

0xa00f,	// (0x00018df7) im_writing_pane_t2

0x0001,

0xf273,	// (0x0001e05b) im_writing_pane_t_ParamLimits

0xf273,	// (0x0001e05b) im_writing_pane_t

0x9967,	// (0x0001874f) input_focus_pane_cp04

0x9967,	// (0x0001874f) input_focus_pane_cp05

0x174d,	// (0x00010535) list_im_single_pane_ParamLimits

0x174d,	// (0x00010535) list_im_single_pane

0x1761,	// (0x00010549) list_single_im_pane_t1

0x3320,	// (0x00012108) blid_accuracy_pane

0x3328,	// (0x00012110) blid_compass_pane

0x3332,	// (0x0001211a) main_location_t1

0x3342,	// (0x0001212a) main_location_t2

0x3352,	// (0x0001213a) main_location_t3

0x0002,

0xf5da,	// (0x0001e3c2) main_location_t

0x9967,	// (0x0001874f) aid_levels_location

0x9d22,	// (0x00018b0a) blid_accuracy_pane_g1

0x9d22,	// (0x00018b0a) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0001e0bd) blid_accuracy_pane_g

0xa057,	// (0x00018e3f) wml_content_pane

0xa095,	// (0x00018e7d) wml_button_pane_ParamLimits

0xa095,	// (0x00018e7d) wml_button_pane

0x1770,	// (0x00010558) wml_list_single_large_pane_ParamLimits

0x1770,	// (0x00010558) wml_list_single_large_pane

0x1785,	// (0x0001056d) wml_list_single_medium_pane_ParamLimits

0x1785,	// (0x0001056d) wml_list_single_medium_pane

0x179b,	// (0x00010583) wml_list_single_small_pane_ParamLimits

0x179b,	// (0x00010583) wml_list_single_small_pane

0xa0a9,	// (0x00018e91) wml_selection_box_pane_ParamLimits

0xa0a9,	// (0x00018e91) wml_selection_box_pane

0xa0bc,	// (0x00018ea4) wml_list_single_pane_t1

0xa0cb,	// (0x00018eb3) wml_list_single_medium_pane_t1

0xa0da,	// (0x00018ec2) wml_list_single_large_pane_t1

0xa0e9,	// (0x00018ed1) input_focus_pane_cp02_ParamLimits

0xa0e9,	// (0x00018ed1) input_focus_pane_cp02

0xa0fc,	// (0x00018ee4) wml_selection_box_pane_g1

0xa105,	// (0x00018eed) wml_selection_box_pane_t1_ParamLimits

0xa105,	// (0x00018eed) wml_selection_box_pane_t1

0x9bc2,	// (0x000189aa) bg_wml_button_pane_ParamLimits

0x9bc2,	// (0x000189aa) bg_wml_button_pane

0xa11d,	// (0x00018f05) wml_button_pane_g1

0xa125,	// (0x00018f0d) wml_button_pane_t1

0xa11d,	// (0x00018f05) wml_button_bg_pane_g1

0xa135,	// (0x00018f1d) wml_button_bg_pane_g2

0xa13d,	// (0x00018f25) wml_button_bg_pane_g3

0xa145,	// (0x00018f2d) wml_button_bg_pane_g4

0xa14d,	// (0x00018f35) wml_button_bg_pane_g5

0xa155,	// (0x00018f3d) wml_button_bg_pane_g6

0xa15d,	// (0x00018f45) wml_button_bg_pane_g7

0xa165,	// (0x00018f4d) wml_button_bg_pane_g8

0xa16d,	// (0x00018f55) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0001e060) wml_button_bg_pane_g

0x17b3,	// (0x0001059b) bg_list_pane_cp02

0xa175,	// (0x00018f5d) mce_header_pane_ParamLimits

0xa175,	// (0x00018f5d) mce_header_pane

0xa18b,	// (0x00018f73) mce_icon_pane

0xa18b,	// (0x00018f73) mce_image_pane

0xa194,	// (0x00018f7c) mce_text_pane_ParamLimits

0xa194,	// (0x00018f7c) mce_text_pane

0x17bb,	// (0x000105a3) scroll_pane_cp03

0xa08d,	// (0x00018e75) scroll_pane_cp04

0xa1a7,	// (0x00018f8f) scroll_pane_cp05_ParamLimits

0xa1a7,	// (0x00018f8f) scroll_pane_cp05

0x17c5,	// (0x000105ad) mce_header_field_pane_ParamLimits

0x17c5,	// (0x000105ad) mce_header_field_pane

0x17dc,	// (0x000105c4) mce_header_field_pane_2_ParamLimits

0x17dc,	// (0x000105c4) mce_header_field_pane_2

0x17f2,	// (0x000105da) mce_header_field_pane_3

0x17fa,	// (0x000105e2) list_single_mce_message_pane_ParamLimits

0x17fa,	// (0x000105e2) list_single_mce_message_pane

0x180f,	// (0x000105f7) list_single_mce_smart_pane_ParamLimits

0x180f,	// (0x000105f7) list_single_mce_smart_pane

0xa1b3,	// (0x00018f9b) input_focus_pane_cp03

0xa1bc,	// (0x00018fa4) list_header_data_pane

0x182f,	// (0x00010617) mce_header_field_pane_t1

0x183f,	// (0x00010627) list_single_mce_header_pane_ParamLimits

0x183f,	// (0x00010627) list_single_mce_header_pane

0xa1c4,	// (0x00018fac) list_single_mce_header_pane_t1

0xa1d3,	// (0x00018fbb) list_single_mce_message_pane_g1

0xa1db,	// (0x00018fc3) list_single_mce_message_pane_t1

0x1879,	// (0x00010661) bg_cale_heading_pane_cp01_ParamLimits

0x1879,	// (0x00010661) bg_cale_heading_pane_cp01

0xa1e9,	// (0x00018fd1) bg_cale_pane_cp02_ParamLimits

0xa1e9,	// (0x00018fd1) bg_cale_pane_cp02

0x18b3,	// (0x0001069b) cale_month_corner_pane

0x18d2,	// (0x000106ba) cale_month_day_heading_pane_ParamLimits

0x18d2,	// (0x000106ba) cale_month_day_heading_pane

0x1924,	// (0x0001070c) cale_month_pane_g1_ParamLimits

0x1924,	// (0x0001070c) cale_month_pane_g1

0x1953,	// (0x0001073b) cale_month_pane_g2_ParamLimits

0x1953,	// (0x0001073b) cale_month_pane_g2

0x1983,	// (0x0001076b) cale_month_pane_g3_ParamLimits

0x1983,	// (0x0001076b) cale_month_pane_g3

0x19bf,	// (0x000107a7) cale_month_pane_g4_ParamLimits

0x19bf,	// (0x000107a7) cale_month_pane_g4

0x19fb,	// (0x000107e3) cale_month_pane_g5_ParamLimits

0x19fb,	// (0x000107e3) cale_month_pane_g5

0x1a43,	// (0x0001082b) cale_month_pane_g6_ParamLimits

0x1a43,	// (0x0001082b) cale_month_pane_g6

0x1a8f,	// (0x00010877) cale_month_pane_g7_ParamLimits

0x1a8f,	// (0x00010877) cale_month_pane_g7

0x1ae3,	// (0x000108cb) cale_month_pane_g8_ParamLimits

0x1ae3,	// (0x000108cb) cale_month_pane_g8

0x1b37,	// (0x0001091f) cale_month_pane_g9_ParamLimits

0x1b37,	// (0x0001091f) cale_month_pane_g9

0x1b89,	// (0x00010971) cale_month_pane_g10_ParamLimits

0x1b89,	// (0x00010971) cale_month_pane_g10

0x1bdb,	// (0x000109c3) cale_month_pane_g11_ParamLimits

0x1bdb,	// (0x000109c3) cale_month_pane_g11

0x1c2d,	// (0x00010a15) cale_month_pane_g12_ParamLimits

0x1c2d,	// (0x00010a15) cale_month_pane_g12

0x1c7f,	// (0x00010a67) cale_month_pane_g13_ParamLimits

0x1c7f,	// (0x00010a67) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0001e073) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0001e073) cale_month_pane_g

0x1cd1,	// (0x00010ab9) cale_month_week_pane

0x1cf5,	// (0x00010add) grid_cale_month_pane_ParamLimits

0x1cf5,	// (0x00010add) grid_cale_month_pane

0x1d3e,	// (0x00010b26) cale_month_day_heading_pane_t1

0x1dc4,	// (0x00010bac) cale_month_day_heading_pane_t2

0x1e3d,	// (0x00010c25) cale_month_day_heading_pane_t3

0x1eb6,	// (0x00010c9e) cale_month_day_heading_pane_t4

0x1f37,	// (0x00010d1f) cale_month_day_heading_pane_t5

0x1fc0,	// (0x00010da8) cale_month_day_heading_pane_t6

0x2049,	// (0x00010e31) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0001e08e) cale_month_day_heading_pane_t

0x9e7f,	// (0x00018c67) bg_cale_side_pane_cp01

0x20da,	// (0x00010ec2) cale_month_week_pane_t1

0x20f3,	// (0x00010edb) cale_month_week_pane_t2

0x210c,	// (0x00010ef4) cale_month_week_pane_t3

0x2125,	// (0x00010f0d) cale_month_week_pane_t4

0x213e,	// (0x00010f26) cale_month_week_pane_t5

0x2157,	// (0x00010f3f) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0001e09d) cale_month_week_pane_t

0x2170,	// (0x00010f58) cell_cale_month_pane_ParamLimits

0x2170,	// (0x00010f58) cell_cale_month_pane

0xa228,	// (0x00019010) cell_cale_month_pane_g1

0x22c8,	// (0x000110b0) cell_cale_month_pane_t1_ParamLimits

0x22c8,	// (0x000110b0) cell_cale_month_pane_t1

0x9e8d,	// (0x00018c75) grid_highlight_pane_cp08

0x9d22,	// (0x00018b0a) main_smil_g1

0x22f4,	// (0x000110dc) smil_status_pane

0xa234,	// (0x0001901c) smil_text_pane

0xbcf7,	// (0x0001aadf) bg_popup_call3_rect_pane_g8

0xbcff,	// (0x0001aae7) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0001e356) bg_popup_call3_rect_pane_g

0xbf9a,	// (0x0001ad82) smil_status_volume_pane_g1

0xa23e,	// (0x00019026) smil_status_pane_t1

0xbfcd,	// (0x0001adb5) volume_smil_pane

0xa255,	// (0x0001903d) list_smil_text_pane

0x2307,	// (0x000110ef) scroll_pane_cp011

0x2312,	// (0x000110fa) smil_text_list_pane_t1_ParamLimits

0x2312,	// (0x000110fa) smil_text_list_pane_t1

0xa25f,	// (0x00019047) aid_volume_smil_ParamLimits

0xa25f,	// (0x00019047) aid_volume_smil

0x9d22,	// (0x00018b0a) smil_volume_pane_g1

0x9d22,	// (0x00018b0a) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0001e0bd) smil_volume_pane_g

0x0996,	// (0x0000f77e) listscroll_cale_day_pane

0xa281,	// (0x00019069) bg_cale_pane

0xa299,	// (0x00019081) list_cale_pane

0xa2bc,	// (0x000190a4) scroll_pane_cp09

0xa2cd,	// (0x000190b5) cale_bg_pane_g1

0xa2d5,	// (0x000190bd) cale_bg_pane_g2

0xa2dd,	// (0x000190c5) cale_bg_pane_g3

0xa2e5,	// (0x000190cd) cale_bg_pane_g4

0xa2ed,	// (0x000190d5) cale_bg_pane_g5

0xa2f5,	// (0x000190dd) cale_bg_pane_g6

0xa2fd,	// (0x000190e5) cale_bg_pane_g7

0xa305,	// (0x000190ed) cale_bg_pane_g8

0xa30d,	// (0x000190f5) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0001e0c2) cale_bg_pane_g

0x2356,	// (0x0001113e) list_cale_time_pane_ParamLimits

0x2356,	// (0x0001113e) list_cale_time_pane

0xa315,	// (0x000190fd) list_cale_time_pane_g1_ParamLimits

0xa315,	// (0x000190fd) list_cale_time_pane_g1

0xa321,	// (0x00019109) list_cale_time_pane_g2_ParamLimits

0xa321,	// (0x00019109) list_cale_time_pane_g2

0x236b,	// (0x00011153) list_cale_time_pane_g3_ParamLimits

0x236b,	// (0x00011153) list_cale_time_pane_g3

0x2379,	// (0x00011161) list_cale_time_pane_g4_ParamLimits

0x2379,	// (0x00011161) list_cale_time_pane_g4

0x2387,	// (0x0001116f) list_cale_time_pane_g5_ParamLimits

0x2387,	// (0x0001116f) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0001e0d5) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0001e0d5) list_cale_time_pane_g

0xa33b,	// (0x00019123) list_cale_time_pane_t1_ParamLimits

0xa33b,	// (0x00019123) list_cale_time_pane_t1

0xa363,	// (0x0001914b) list_cale_time_pane_t2_ParamLimits

0xa363,	// (0x0001914b) list_cale_time_pane_t2

0x26e8,	// (0x000114d0) aid_blid_cardinal_pane

0x2726,	// (0x0001150e) compass_pane_t4

0xa38b,	// (0x00019173) list_cale_time_pane_t4_ParamLimits

0xa38b,	// (0x00019173) list_cale_time_pane_t4

0x2734,	// (0x0001151c) compass_pane_t5

0x2742,	// (0x0001152a) compass_pane_t6

0x2750,	// (0x00011538) compass_pane_t7

0xa8ad,	// (0x00019695) navi_pane_cc_t1

0xaa9c,	// (0x00019884) aid_phob_thumbnail_center_pane

0x2d38,	// (0x00011b20) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0001e0e2) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0001e0e2) list_cale_time_pane_t

0x95be,	// (0x000183a6) bg_popup_window_pane_cp02_ParamLimits

0x95be,	// (0x000183a6) bg_popup_window_pane_cp02

0xa3b3,	// (0x0001919b) heading_pane_cp01_ParamLimits

0xa3b3,	// (0x0001919b) heading_pane_cp01

0xa3bf,	// (0x000191a7) loc_req_pane_ParamLimits

0xa3bf,	// (0x000191a7) loc_req_pane

0xa3cf,	// (0x000191b7) loc_type_pane_ParamLimits

0xa3cf,	// (0x000191b7) loc_type_pane

0xa3e1,	// (0x000191c9) loc_type_pane_t1_ParamLimits

0xa3e1,	// (0x000191c9) loc_type_pane_t1

0xa3f3,	// (0x000191db) loc_type_pane_t2_ParamLimits

0xa3f3,	// (0x000191db) loc_type_pane_t2

0xa405,	// (0x000191ed) loc_type_pane_t3_ParamLimits

0xa405,	// (0x000191ed) loc_type_pane_t3

0x0002,

0xf301,	// (0x0001e0e9) loc_type_pane_t_ParamLimits

0xf301,	// (0x0001e0e9) loc_type_pane_t

0xa417,	// (0x000191ff) list_loc_req_pane

0xa421,	// (0x00019209) scroll_pane_cp012

0x2395,	// (0x0001117d) list_single_loc_request_popup_menu_pane_ParamLimits

0x2395,	// (0x0001117d) list_single_loc_request_popup_menu_pane

0xa42c,	// (0x00019214) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa42c,	// (0x00019214) list_single_loc_request_popup_menu_pane_g1

0xa438,	// (0x00019220) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa438,	// (0x00019220) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0001e0f0) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0001e0f0) list_single_loc_request_popup_menu_pane_g

0xa444,	// (0x0001922c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa444,	// (0x0001922c) list_single_loc_request_popup_menu_pane_t1

0x9bc2,	// (0x000189aa) bg_popup_window_pane_cp03_ParamLimits

0x9bc2,	// (0x000189aa) bg_popup_window_pane_cp03

0xa45a,	// (0x00019242) heading_loc_req_pane_ParamLimits

0xa45a,	// (0x00019242) heading_loc_req_pane

0x23a2,	// (0x0001118a) popup_dyc_status_message_window_g1_ParamLimits

0x23a2,	// (0x0001118a) popup_dyc_status_message_window_g1

0x23b6,	// (0x0001119e) popup_dyc_status_message_window_t1_ParamLimits

0x23b6,	// (0x0001119e) popup_dyc_status_message_window_t1

0x23cb,	// (0x000111b3) popup_dyc_status_message_window_t2_ParamLimits

0x23cb,	// (0x000111b3) popup_dyc_status_message_window_t2

0x23e0,	// (0x000111c8) popup_dyc_status_message_window_t3_ParamLimits

0x23e0,	// (0x000111c8) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0001e0f5) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0001e0f5) popup_dyc_status_message_window_t

0x9967,	// (0x0001874f) bg_heading_pane_cp01

0xa466,	// (0x0001924e) heading_loc_req_pane_g1

0xa46e,	// (0x00019256) heading_loc_req_pane_g2

0xa476,	// (0x0001925e) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0001e0fc) heading_loc_req_pane_g

0xa47e,	// (0x00019266) heading_loc_req_pane_t1

0xa48d,	// (0x00019275) bg_popup_sub_pane_cp01_ParamLimits

0xa48d,	// (0x00019275) bg_popup_sub_pane_cp01

0xa49b,	// (0x00019283) popup_cale_events_window_g1_ParamLimits

0xa49b,	// (0x00019283) popup_cale_events_window_g1

0xa4bb,	// (0x000192a3) popup_cale_events_window_g2_ParamLimits

0xa4bb,	// (0x000192a3) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0001e130) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0001e130) popup_cale_events_window_g

0xa4db,	// (0x000192c3) popup_cale_events_window_t1_ParamLimits

0xa4db,	// (0x000192c3) popup_cale_events_window_t1

0xa4ed,	// (0x000192d5) popup_cale_events_window_t2_ParamLimits

0xa4ed,	// (0x000192d5) popup_cale_events_window_t2

0xa52b,	// (0x00019313) popup_cale_events_window_t3_ParamLimits

0xa52b,	// (0x00019313) popup_cale_events_window_t3

0xa565,	// (0x0001934d) popup_cale_events_window_t4_ParamLimits

0xa565,	// (0x0001934d) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0001e135) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0001e135) popup_cale_events_window_t

0x24e3,	// (0x000112cb) call_type_pane

0x24f3,	// (0x000112db) popup_call_status_window_g1

0x2507,	// (0x000112ef) popup_call_status_window_g2

0x251b,	// (0x00011303) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0001e13e) popup_call_status_window_g

0xa59b,	// (0x00019383) call_type_pane_g1

0xa5a4,	// (0x0001938c) call_type_pane_g2

0x0001,

0xf35d,	// (0x0001e145) call_type_pane_g

0x9967,	// (0x0001874f) bg_popup_sub_pane_cp02

0xa5ad,	// (0x00019395) listscroll_popup_wml_pane

0xa5b5,	// (0x0001939d) list_wml_pane

0xa5bf,	// (0x000193a7) scroll_pane_cp013

0xa5ca,	// (0x000193b2) list_single_graphic_popup_wml_pane_ParamLimits

0xa5ca,	// (0x000193b2) list_single_graphic_popup_wml_pane

0x9d22,	// (0x00018b0a) list_single_graphic_popup_wml_pane_g1

0xa5de,	// (0x000193c6) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0001e14a) list_single_graphic_popup_wml_pane_g

0xa5e6,	// (0x000193ce) list_single_graphic_popup_wml_pane_t1

0xa5fc,	// (0x000193e4) aid_call_pane

0x9bba,	// (0x000189a2) popup_clock_analogue_window_g1

0x9bba,	// (0x000189a2) popup_clock_analogue_window_g2

0xa604,	// (0x000193ec) popup_clock_analogue_window_g3

0xa604,	// (0x000193ec) popup_clock_analogue_window_g4

0x9d22,	// (0x00018b0a) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0001e14f) popup_clock_analogue_window_g

0xa60c,	// (0x000193f4) popup_clock_analogue_window_t1

0xa61a,	// (0x00019402) clock_digital_number_pane_ParamLimits

0xa61a,	// (0x00019402) clock_digital_number_pane

0xa626,	// (0x0001940e) clock_digital_number_pane_cp02_ParamLimits

0xa626,	// (0x0001940e) clock_digital_number_pane_cp02

0xa632,	// (0x0001941a) clock_digital_number_pane_cp03_ParamLimits

0xa632,	// (0x0001941a) clock_digital_number_pane_cp03

0xa63e,	// (0x00019426) clock_digital_number_pane_cp04_ParamLimits

0xa63e,	// (0x00019426) clock_digital_number_pane_cp04

0xa64e,	// (0x00019436) clock_digital_separator_pane_ParamLimits

0xa64e,	// (0x00019436) clock_digital_separator_pane

0xa65a,	// (0x00019442) popup_clock_digital_window_t1

0x9d22,	// (0x00018b0a) clock_digital_number_pane_g1

0x9d22,	// (0x00018b0a) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0001e0bd) clock_digital_number_pane_g

0x9d22,	// (0x00018b0a) clock_digital_separator_pane_g1

0x9d22,	// (0x00018b0a) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0001e0bd) clock_digital_separator_pane_g

0x9967,	// (0x0001874f) bg_popup_window_pane_cp04

0xa677,	// (0x0001945f) heading_pane_cp03

0xa67f,	// (0x00019467) listscroll_popup_gms_pane

0xa687,	// (0x0001946f) grid_large_graphic_popup_pane

0xa691,	// (0x00019479) listscroll_popup_gms_pane_g1

0xa699,	// (0x00019481) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0001e15a) listscroll_popup_gms_pane_g

0xa08d,	// (0x00018e75) scroll_pane_cp014

0x252a,	// (0x00011312) cell_large_graphic_popup_pane_ParamLimits

0x252a,	// (0x00011312) cell_large_graphic_popup_pane

0x2542,	// (0x0001132a) cell_large_graphic_popup_pane_g1_ParamLimits

0x2542,	// (0x0001132a) cell_large_graphic_popup_pane_g1

0xa6a1,	// (0x00019489) cell_large_graphic_popup_pane_g2_ParamLimits

0xa6a1,	// (0x00019489) cell_large_graphic_popup_pane_g2

0xa6ad,	// (0x00019495) cell_large_graphic_popup_pane_g3_ParamLimits

0xa6ad,	// (0x00019495) cell_large_graphic_popup_pane_g3

0xa6ba,	// (0x000194a2) cell_large_graphic_popup_pane_g4_ParamLimits

0xa6ba,	// (0x000194a2) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0001e15f) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0001e15f) cell_large_graphic_popup_pane_g

0xa6ca,	// (0x000194b2) grid_highlight_pane_cp010

0x9d22,	// (0x00018b0a) bg_popup_call_pane_g1

0xa6d4,	// (0x000194bc) list_single_graphic_popup_conf_pane_ParamLimits

0xa6d4,	// (0x000194bc) list_single_graphic_popup_conf_pane

0xa6e7,	// (0x000194cf) list_highlight_pane_cp01

0xa6f0,	// (0x000194d8) list_single_graphic_popup_conf_pane_g1

0xa6f8,	// (0x000194e0) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0001e168) list_single_graphic_popup_conf_pane_g

0xa700,	// (0x000194e8) list_single_graphic_popup_conf_pane_t1

0xa70e,	// (0x000194f6) linegrid_cams_pane_g1

0x254e,	// (0x00011336) linegrid_cams_pane_g2

0x9ec0,	// (0x00018ca8) linegrid_cams_pane_g3

0xa717,	// (0x000194ff) linegrid_cams_pane_g4

0x2557,	// (0x0001133f) linegrid_cams_pane_g5

0x2560,	// (0x00011348) linegrid_cams_pane_g6

0x9ec9,	// (0x00018cb1) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0001e16d) linegrid_cams_pane_g

0xa720,	// (0x00019508) popup_clock_analogue_window

0xa720,	// (0x00019508) popup_clock_digital_window

0x9967,	// (0x0001874f) popup_phob_thumbnail_window

0x9d22,	// (0x00018b0a) call_video_uplink_pane_g1

0xa729,	// (0x00019511) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0001e17c) call_video_uplink_pane_g

0xa731,	// (0x00019519) video_uplink_pane

0xa739,	// (0x00019521) mce_image_pane_g1

0x256b,	// (0x00011353) mce_image_pane_g2

0x2575,	// (0x0001135d) mce_image_pane_g3

0x257d,	// (0x00011365) mce_image_pane_g4

0x2585,	// (0x0001136d) mce_image_pane_g5

0x0004,

0xf399,	// (0x0001e181) mce_image_pane_g

0xa743,	// (0x0001952b) control_top_pane_stacon_cp01_ParamLimits

0xa743,	// (0x0001952b) control_top_pane_stacon_cp01

0xa757,	// (0x0001953f) uni_indicator_pane_stacon_cp01_ParamLimits

0xa757,	// (0x0001953f) uni_indicator_pane_stacon_cp01

0xa768,	// (0x00019550) bg_popup_sub_pane_cp03

0xa772,	// (0x0001955a) chi_dic_find_pane

0x258d,	// (0x00011375) listscroll_chi_dic_pane

0xa77a,	// (0x00019562) main_pane_chidic_g1

0xa782,	// (0x0001956a) chi_dic_find_pane_t1

0xa790,	// (0x00019578) find_chidic_pane

0xa799,	// (0x00019581) chi_dic_list_pane_ParamLimits

0xa799,	// (0x00019581) chi_dic_list_pane

0xa7aa,	// (0x00019592) scroll_pane_cp020

0xa7b2,	// (0x0001959a) find_chidic_pane_t1

0x9967,	// (0x0001874f) input_focus_pane_cp06

0x25a1,	// (0x00011389) list_chi_dic_pane_ParamLimits

0x25a1,	// (0x00011389) list_chi_dic_pane

0x25b3,	// (0x0001139b) list_chi_dic_pane_t1_ParamLimits

0x25b3,	// (0x0001139b) list_chi_dic_pane_t1

0x9967,	// (0x0001874f) list_highlight_pane_cp020

0xa7c1,	// (0x000195a9) bg_cale_heading_pane_g1

0x25c6,	// (0x000113ae) bg_cale_heading_pane_g2

0x25ce,	// (0x000113b6) bg_cale_heading_pane_g3

0x25d6,	// (0x000113be) bg_cale_heading_pane_g4

0x25e0,	// (0x000113c8) bg_cale_heading_pane_g5

0x25ea,	// (0x000113d2) bg_cale_heading_pane_g6

0x25f2,	// (0x000113da) bg_cale_heading_pane_g7

0x25fa,	// (0x000113e2) bg_cale_heading_pane_g8

0x2604,	// (0x000113ec) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0001e18c) bg_cale_heading_pane_g

0xa7c1,	// (0x000195a9) bg_cale_side_pane_g1

0x260e,	// (0x000113f6) bg_cale_side_pane_g2

0x2616,	// (0x000113fe) bg_cale_side_pane_g3

0x261e,	// (0x00011406) bg_cale_side_pane_g4

0x2626,	// (0x0001140e) bg_cale_side_pane_g5

0x262e,	// (0x00011416) bg_cale_side_pane_g6

0x2636,	// (0x0001141e) bg_cale_side_pane_g7

0x263e,	// (0x00011426) bg_cale_side_pane_g8

0x2646,	// (0x0001142e) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0001e19f) bg_cale_side_pane_g

0x264e,	// (0x00011436) popup_call_status_window_ParamLimits

0x264e,	// (0x00011436) popup_call_status_window

0xa7c9,	// (0x000195b1) stacon_top_pane

0xa7d1,	// (0x000195b9) status_pane_ParamLimits

0xa7d1,	// (0x000195b9) status_pane

0xa7e6,	// (0x000195ce) status_small_pane

0xa7ee,	// (0x000195d6) control_pane

0x9967,	// (0x0001874f) stacon_bottom_pane

0xa7f6,	// (0x000195de) list_single_mce_smart_pane_t1_ParamLimits

0xa7f6,	// (0x000195de) list_single_mce_smart_pane_t1

0xa809,	// (0x000195f1) list_single_mce_smart_pane_t2_ParamLimits

0xa809,	// (0x000195f1) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0001e1b2) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0001e1b2) list_single_mce_smart_pane_t

0x2697,	// (0x0001147f) compass_pane

0x26a0,	// (0x00011488) main_location2_pane_t1

0x26b2,	// (0x0001149a) main_location2_pane_t2

0x26c4,	// (0x000114ac) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0001e1b7) main_location2_pane_t

0xa828,	// (0x00019610) compass_pane_g1_ParamLimits

0xa828,	// (0x00019610) compass_pane_g1

0x2708,	// (0x000114f0) compass_pane_t1

0x2717,	// (0x000114ff) compass_pane_t2

0x0005,

0xf3d8,	// (0x0001e1c0) compass_pane_t

0x275e,	// (0x00011546) text_secondary_cp61

0xa8a4,	// (0x0001968c) navi_pane_cams_g5

0xa920,	// (0x00019708) navi_pane_im_t1

0xa92e,	// (0x00019716) navi_pane_mp_g1_ParamLimits

0xa92e,	// (0x00019716) navi_pane_mp_g1

0xa942,	// (0x0001972a) navi_pane_mp_g2_ParamLimits

0xa942,	// (0x0001972a) navi_pane_mp_g2

0xa94e,	// (0x00019736) navi_pane_mp_g3_ParamLimits

0xa94e,	// (0x00019736) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0001e1d4) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0001e1d4) navi_pane_mp_g

0xa95a,	// (0x00019742) navi_pane_mp_t1

0xa968,	// (0x00019750) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0001e1db) navi_pane_mp_t

0xa9d3,	// (0x000197bb) navi_pane_vt_g1

0xa95a,	// (0x00019742) navi_pane_vt_t1

0xa9db,	// (0x000197c3) navi_slider_pane

0x9eda,	// (0x00018cc2) zooming_pane

0xa9eb,	// (0x000197d3) navi_slider_pane_g1

0xa9f4,	// (0x000197dc) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0001e1e2) navi_slider_pane_g

0xaa21,	// (0x00019809) aid_levels_zoom

0xaa29,	// (0x00019811) zooming_pane_g1

0xaa31,	// (0x00019819) zooming_pane_g2

0xaa31,	// (0x00019819) zooming_pane_g3

0x0002,

0xf409,	// (0x0001e1f1) zooming_pane_g

0xaa39,	// (0x00019821) level_10_zoom

0xaa42,	// (0x0001982a) level_11_zoom

0xaa4b,	// (0x00019833) level_1_zoom

0xaa54,	// (0x0001983c) level_2_zoom

0xaa5d,	// (0x00019845) level_3_zoom

0xaa66,	// (0x0001984e) level_4_zoom

0xaa6f,	// (0x00019857) level_5_zoom

0xaa78,	// (0x00019860) level_6_zoom

0xaa81,	// (0x00019869) level_7_zoom

0xaa8a,	// (0x00019872) level_8_zoom

0xaa93,	// (0x0001987b) level_9_zoom

0xaaa4,	// (0x0001988c) popup_phob_thumbnail_window_g1

0xaaac,	// (0x00019894) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0001e1f8) popup_phob_thumbnail_window_g

0xbe59,	// (0x0001ac41) level_1_location

0xbe61,	// (0x0001ac49) level_2_location

0xbe69,	// (0x0001ac51) level_3_location

0xbe71,	// (0x0001ac59) level_4_location

0x9eda,	// (0x00018cc2) level_5_location

0x27af,	// (0x00011597) mce_icon_pane_g1

0x27b9,	// (0x000115a1) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0001e1fd) mce_icon_pane_g

0x27c1,	// (0x000115a9) main_mup_pane_g1_ParamLimits

0x27c1,	// (0x000115a9) main_mup_pane_g1

0x27d7,	// (0x000115bf) main_mup_pane_g2_ParamLimits

0x27d7,	// (0x000115bf) main_mup_pane_g2

0x27ef,	// (0x000115d7) main_mup_pane_g3_ParamLimits

0x27ef,	// (0x000115d7) main_mup_pane_g3

0x2807,	// (0x000115ef) main_mup_pane_g4_ParamLimits

0x2807,	// (0x000115ef) main_mup_pane_g4

0x281f,	// (0x00011607) main_mup_pane_g5_ParamLimits

0x281f,	// (0x00011607) main_mup_pane_g5

0x283b,	// (0x00011623) main_mup_pane_g6_ParamLimits

0x283b,	// (0x00011623) main_mup_pane_g6

0x2853,	// (0x0001163b) main_mup_pane_g7_ParamLimits

0x2853,	// (0x0001163b) main_mup_pane_g7

0x286b,	// (0x00011653) main_mup_pane_g8_ParamLimits

0x286b,	// (0x00011653) main_mup_pane_g8

0x2885,	// (0x0001166d) main_mup_pane_g9_ParamLimits

0x2885,	// (0x0001166d) main_mup_pane_g9

0x289f,	// (0x00011687) main_mup_pane_g10_ParamLimits

0x289f,	// (0x00011687) main_mup_pane_g10

0x28b9,	// (0x000116a1) main_mup_pane_g11_ParamLimits

0x28b9,	// (0x000116a1) main_mup_pane_g11

0x28cd,	// (0x000116b5) main_mup_pane_g12_ParamLimits

0x28cd,	// (0x000116b5) main_mup_pane_g12

0x28e3,	// (0x000116cb) main_mup_pane_g13_ParamLimits

0x28e3,	// (0x000116cb) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0001e202) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0001e202) main_mup_pane_g

0x28f7,	// (0x000116df) main_mup_pane_t1_ParamLimits

0x28f7,	// (0x000116df) main_mup_pane_t1

0x2911,	// (0x000116f9) main_mup_pane_t2_ParamLimits

0x2911,	// (0x000116f9) main_mup_pane_t2

0x2929,	// (0x00011711) main_mup_pane_t3_ParamLimits

0x2929,	// (0x00011711) main_mup_pane_t3

0x2941,	// (0x00011729) main_mup_pane_t4_ParamLimits

0x2941,	// (0x00011729) main_mup_pane_t4

0x295f,	// (0x00011747) main_mup_pane_t5_ParamLimits

0x295f,	// (0x00011747) main_mup_pane_t5

0x2974,	// (0x0001175c) main_mup_pane_t6_ParamLimits

0x2974,	// (0x0001175c) main_mup_pane_t6

0x0005,

0xf435,	// (0x0001e21d) main_mup_pane_t_ParamLimits

0xf435,	// (0x0001e21d) main_mup_pane_t

0x2986,	// (0x0001176e) mup_progress_pane_ParamLimits

0x2986,	// (0x0001176e) mup_progress_pane

0x2992,	// (0x0001177a) mup_visualizer_pane_ParamLimits

0x2992,	// (0x0001177a) mup_visualizer_pane

0x29c2,	// (0x000117aa) mup_volume_pane_ParamLimits

0x29c2,	// (0x000117aa) mup_volume_pane

0xaab4,	// (0x0001989c) mup_visualizer_pane_g1_ParamLimits

0xaab4,	// (0x0001989c) mup_visualizer_pane_g1

0xaab4,	// (0x0001989c) mup_visualizer_pane_g2_ParamLimits

0xaab4,	// (0x0001989c) mup_visualizer_pane_g2

0xa828,	// (0x00019610) mup_visualizer_pane_g3_ParamLimits

0xa828,	// (0x00019610) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0001e22a) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0001e22a) mup_visualizer_pane_g

0x9d22,	// (0x00018b0a) mup_volume_pane_g1

0xaaca,	// (0x000198b2) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0001e231) mup_volume_pane_g

0x9d22,	// (0x00018b0a) mup_progress_pane_g1

0xaad3,	// (0x000198bb) mup_progress_pane_g2

0xaadc,	// (0x000198c4) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0001e236) mup_progress_pane_g

0x9967,	// (0x0001874f) bg_popup_window_pane_cp05

0xaae5,	// (0x000198cd) heading_pane_cp02_ParamLimits

0xaae5,	// (0x000198cd) heading_pane_cp02

0xaaff,	// (0x000198e7) list_popup_blid_pane

0xab07,	// (0x000198ef) list_blid_sat_info_pane_ParamLimits

0xab07,	// (0x000198ef) list_blid_sat_info_pane

0xab1a,	// (0x00019902) list_blid_sat_info_pane_g1

0xab22,	// (0x0001990a) list_blid_sat_info_pane_t1

0x2ad8,	// (0x000118c0) mup_equalizer_pane_ParamLimits

0x2ad8,	// (0x000118c0) mup_equalizer_pane

0x2af1,	// (0x000118d9) mup_equalizer_pane_cp1_ParamLimits

0x2af1,	// (0x000118d9) mup_equalizer_pane_cp1

0x2b0e,	// (0x000118f6) mup_equalizer_pane_cp2_ParamLimits

0x2b0e,	// (0x000118f6) mup_equalizer_pane_cp2

0x2b2b,	// (0x00011913) mup_equalizer_pane_cp3_ParamLimits

0x2b2b,	// (0x00011913) mup_equalizer_pane_cp3

0x2b4c,	// (0x00011934) mup_equalizer_pane_cp4_ParamLimits

0x2b4c,	// (0x00011934) mup_equalizer_pane_cp4

0x2b6d,	// (0x00011955) mup_equalizer_pane_cp5

0x2b81,	// (0x00011969) mup_equalizer_pane_cp6

0x2b95,	// (0x0001197d) mup_equalizer_pane_cp7

0xbd77,	// (0x0001ab5f) bg_popup_call_poc_act_pane_g9

0xbd7f,	// (0x0001ab67) bg_popup_call_poc_act_pane_g10

0xbd87,	// (0x0001ab6f) bg_popup_call_poc_act_pane_g11

0x000a,

0x9bc2,	// (0x000189aa) mup_scale_pane

0x9d22,	// (0x00018b0a) mup_scale_pane_g1

0xab30,	// (0x00019918) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0001e252) mup_scale_pane_g

0xab54,	// (0x0001993c) msg_data_pane

0xab5c,	// (0x00019944) scroll_pane_cp017

0x2bbb,	// (0x000119a3) bg_list_pane_cp04_ParamLimits

0x2bbb,	// (0x000119a3) bg_list_pane_cp04

0xab6c,	// (0x00019954) msg_data_pane_g1

0x2bd3,	// (0x000119bb) msg_data_pane_g2

0x2bdd,	// (0x000119c5) msg_data_pane_g3

0x2be5,	// (0x000119cd) msg_data_pane_g4

0x2bed,	// (0x000119d5) msg_data_pane_g5

0x2bf5,	// (0x000119dd) msg_data_pane_g6

0x2bfd,	// (0x000119e5) msg_data_pane_g7

0x0006,

0xf479,	// (0x0001e261) msg_data_pane_g

0x2c05,	// (0x000119ed) msg_text_pane_ParamLimits

0x2c05,	// (0x000119ed) msg_text_pane

0x2c30,	// (0x00011a18) qrid_highlight_pane_cp011_ParamLimits

0x2c30,	// (0x00011a18) qrid_highlight_pane_cp011

0x9967,	// (0x0001874f) msg_body_pane

0x9967,	// (0x0001874f) msg_header_pane

0xab7d,	// (0x00019965) input_focus_pane_cp07

0xab92,	// (0x0001997a) msg_header_pane_t1_ParamLimits

0xab92,	// (0x0001997a) msg_header_pane_t1

0xaba4,	// (0x0001998c) msg_header_pane_t2_ParamLimits

0xaba4,	// (0x0001998c) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0001e275) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0001e275) msg_header_pane_t

0xabb6,	// (0x0001999e) msg_body_pane_g1

0xabbe,	// (0x000199a6) msg_body_pane_t1_ParamLimits

0xabbe,	// (0x000199a6) msg_body_pane_t1

0xabef,	// (0x000199d7) msg_body_pane_t2_ParamLimits

0xabef,	// (0x000199d7) msg_body_pane_t2

0xac01,	// (0x000199e9) msg_body_pane_t3_ParamLimits

0xac01,	// (0x000199e9) msg_body_pane_t3

0x0002,

0xf492,	// (0x0001e27a) msg_body_pane_t_ParamLimits

0xf492,	// (0x0001e27a) msg_body_pane_t

0x2c8e,	// (0x00011a76) main_viewer_pane_g1_ParamLimits

0x2c8e,	// (0x00011a76) main_viewer_pane_g1

0x2c9c,	// (0x00011a84) main_viewer_pane_g2_ParamLimits

0x2c9c,	// (0x00011a84) main_viewer_pane_g2

0x2caa,	// (0x00011a92) main_viewer_pane_g3_ParamLimits

0x2caa,	// (0x00011a92) main_viewer_pane_g3

0x2cb9,	// (0x00011aa1) main_viewer_pane_g4_ParamLimits

0x2cb9,	// (0x00011aa1) main_viewer_pane_g4

0xac2b,	// (0x00019a13) main_viewer_pane_g5_ParamLimits

0xac2b,	// (0x00019a13) main_viewer_pane_g5

0xac2b,	// (0x00019a13) main_viewer_pane_g7_ParamLimits

0xac2b,	// (0x00019a13) main_viewer_pane_g7

0xac3d,	// (0x00019a25) main_viewer_pane_g8_ParamLimits

0xac3d,	// (0x00019a25) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0001e28a) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0001e28a) main_viewer_pane_g

0xac55,	// (0x00019a3d) viewer_content_pane_ParamLimits

0xac55,	// (0x00019a3d) viewer_content_pane

0x2cf5,	// (0x00011add) main_postcard_pane_g1_ParamLimits

0x2cf5,	// (0x00011add) main_postcard_pane_g1

0x2d0b,	// (0x00011af3) main_postcard_pane_g2_ParamLimits

0x2d0b,	// (0x00011af3) main_postcard_pane_g2

0x2d21,	// (0x00011b09) main_postcard_pane_g3_ParamLimits

0x2d21,	// (0x00011b09) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0001e29b) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0001e29b) main_postcard_pane_g

0x2d38,	// (0x00011b20) main_postcard_pane_g4

0xbfad,	// (0x0001ad95) smil_status_volume_pane_g2

0x2d7b,	// (0x00011b63) postcard_pane_ParamLimits

0x2d7b,	// (0x00011b63) postcard_pane

0xac63,	// (0x00019a4b) postcard_pane_g1_ParamLimits

0xac63,	// (0x00019a4b) postcard_pane_g1

0x2dbd,	// (0x00011ba5) postcard_pane_g2_ParamLimits

0x2dbd,	// (0x00011ba5) postcard_pane_g2

0x2dc9,	// (0x00011bb1) postcard_pane_g3_ParamLimits

0x2dc9,	// (0x00011bb1) postcard_pane_g3

0xac71,	// (0x00019a59) postcard_pane_g4_ParamLimits

0xac71,	// (0x00019a59) postcard_pane_g4

0x2dd5,	// (0x00011bbd) postcard_pane_g5_ParamLimits

0x2dd5,	// (0x00011bbd) postcard_pane_g5

0x2dea,	// (0x00011bd2) postcard_pane_g6_ParamLimits

0x2dea,	// (0x00011bd2) postcard_pane_g6

0xac63,	// (0x00019a4b) postcard_pane_g7_ParamLimits

0xac63,	// (0x00019a4b) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0001e2a8) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0001e2a8) postcard_pane_g

0x2dfe,	// (0x00011be6) main_mp2_pane_g1_ParamLimits

0x2dfe,	// (0x00011be6) main_mp2_pane_g1

0x2e0a,	// (0x00011bf2) main_mp2_pane_g2_ParamLimits

0x2e0a,	// (0x00011bf2) main_mp2_pane_g2

0x2e16,	// (0x00011bfe) main_mp2_pane_g3_ParamLimits

0x2e16,	// (0x00011bfe) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0001e2b7) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0001e2b7) main_mp2_pane_g

0x2e22,	// (0x00011c0a) main_mp2_pane_t1_ParamLimits

0x2e22,	// (0x00011c0a) main_mp2_pane_t1

0x2e37,	// (0x00011c1f) main_mp2_pane_t2_ParamLimits

0x2e37,	// (0x00011c1f) main_mp2_pane_t2

0x2e49,	// (0x00011c31) main_mp2_pane_t3_ParamLimits

0x2e49,	// (0x00011c31) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0001e2be) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0001e2be) main_mp2_pane_t

0xac7f,	// (0x00019a67) pec_content_pane_ParamLimits

0xac7f,	// (0x00019a67) pec_content_pane

0xa08d,	// (0x00018e75) scroll_pane_cp015

0xac91,	// (0x00019a79) pec_attribute_pane_ParamLimits

0xac91,	// (0x00019a79) pec_attribute_pane

0x2e5b,	// (0x00011c43) pec_content_pane_g1_ParamLimits

0x2e5b,	// (0x00011c43) pec_content_pane_g1

0xaca1,	// (0x00019a89) pec_content_pane_t1_ParamLimits

0xaca1,	// (0x00019a89) pec_content_pane_t1

0xacb3,	// (0x00019a9b) pec_content_pane_t2_ParamLimits

0xacb3,	// (0x00019a9b) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0001e2c5) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0001e2c5) pec_content_pane_t

0x2e67,	// (0x00011c4f) list_single_graphic_pane_cp01_ParamLimits

0x2e67,	// (0x00011c4f) list_single_graphic_pane_cp01

0x9bc2,	// (0x000189aa) bg_popup_sub_pane_cp04

0xacc5,	// (0x00019aad) popup_mup_playback_window_g1

0xacd1,	// (0x00019ab9) popup_mup_playback_window_t1

0xace6,	// (0x00019ace) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0001e2ca) popup_mup_playback_window_t

0xad1d,	// (0x00019b05) main_image_pane_g1_ParamLimits

0xad1d,	// (0x00019b05) main_image_pane_g1

0xad60,	// (0x00019b48) scroll_pane_cp018_ParamLimits

0xad60,	// (0x00019b48) scroll_pane_cp018

0xad78,	// (0x00019b60) scroll_pane_cp016_ParamLimits

0xad78,	// (0x00019b60) scroll_pane_cp016

0x2f34,	// (0x00011d1c) smil2_image_pane_ParamLimits

0x2f34,	// (0x00011d1c) smil2_image_pane

0x2f64,	// (0x00011d4c) smil2_root_pane_ParamLimits

0x2f64,	// (0x00011d4c) smil2_root_pane

0x2f9c,	// (0x00011d84) smil2_text_pane_ParamLimits

0x2f9c,	// (0x00011d84) smil2_text_pane

0x9967,	// (0x0001874f) bg_list_pane_cp06

0xadb4,	// (0x00019b9c) grid_radio_pane

0x9967,	// (0x0001874f) bg_popup_window_pane_cp06

0xadbc,	// (0x00019ba4) main_fmradio_pane_t1

0xa677,	// (0x0001945f) heading_pane_cp04

0xadca,	// (0x00019bb2) main_fmradio_pane_t2

0xbd8f,	// (0x0001ab77) popup_cale_lunar_info_window_g1

0xadd8,	// (0x00019bc0) main_fmradio_pane_t3

0xbd97,	// (0x0001ab7f) popup_cale_lunar_info_window_g2

0xade6,	// (0x00019bce) main_fmradio_pane_t4

0x0001,

0xadf4,	// (0x00019bdc) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0001e3a5) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0001e2df) main_fmradio_pane_t

0xae02,	// (0x00019bea) wait_bar_pane_cp03

0xae0a,	// (0x00019bf2) cell_fmradio_pane_ParamLimits

0xae0a,	// (0x00019bf2) cell_fmradio_pane

0xac63,	// (0x00019a4b) cell_fmradio_pane_g1_ParamLimits

0xac63,	// (0x00019a4b) cell_fmradio_pane_g1

0x9967,	// (0x0001874f) grid_highlight_pane_cp011

0xae1d,	// (0x00019c05) poc_content_pane_ParamLimits

0xae1d,	// (0x00019c05) poc_content_pane

0xae2f,	// (0x00019c17) scroll_pane_cp019

0x301c,	// (0x00011e04) popup_call_poc_act_window_ParamLimits

0x301c,	// (0x00011e04) popup_call_poc_act_window

0x3040,	// (0x00011e28) popup_call_poc_inact_window_ParamLimits

0x3040,	// (0x00011e28) popup_call_poc_inact_window

0xf594,	// (0x0001e37c) bg_popup_call_poc_act_pane_g

0xbd07,	// (0x0001aaef) bg_popup_call_poc_inact_pane_g1

0xbd0f,	// (0x0001aaf7) bg_popup_call_poc_inact_pane_g2

0xae37,	// (0x00019c1f) popup_call_poc_act_window_g2

0xbd17,	// (0x0001aaff) bg_popup_call_poc_inact_pane_g3

0xbd1f,	// (0x0001ab07) bg_popup_call_poc_inact_pane_g4

0xbd27,	// (0x0001ab0f) bg_popup_call_poc_inact_pane_g5

0xae3f,	// (0x00019c27) popup_call_poc_act_window_t1_ParamLimits

0xae3f,	// (0x00019c27) popup_call_poc_act_window_t1

0xae67,	// (0x00019c4f) popup_call_poc_act_window_t2_ParamLimits

0xae67,	// (0x00019c4f) popup_call_poc_act_window_t2

0xae8f,	// (0x00019c77) popup_call_poc_act_window_t3_ParamLimits

0xae8f,	// (0x00019c77) popup_call_poc_act_window_t3

0xaeb7,	// (0x00019c9f) popup_call_poc_act_window_t4_ParamLimits

0xaeb7,	// (0x00019c9f) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0001e2ea) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0001e2ea) popup_call_poc_act_window_t

0xbd2f,	// (0x0001ab17) bg_popup_call_poc_inact_pane_g6

0xbd37,	// (0x0001ab1f) bg_popup_call_poc_inact_pane_g7

0xbd3f,	// (0x0001ab27) bg_popup_call_poc_inact_pane_g8

0xaec9,	// (0x00019cb1) popup_call_poc_inact_window_g2

0xbd47,	// (0x0001ab2f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0001e369) bg_popup_call_poc_inact_pane_g

0xaed1,	// (0x00019cb9) popup_call_poc_inact_window_t1_ParamLimits

0xaed1,	// (0x00019cb9) popup_call_poc_inact_window_t1

0xaee6,	// (0x00019cce) popup_call_poc_inact_window_t2_ParamLimits

0xaee6,	// (0x00019cce) popup_call_poc_inact_window_t2

0xaefb,	// (0x00019ce3) popup_call_poc_inact_window_t3_ParamLimits

0xaefb,	// (0x00019ce3) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0001e2f3) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0001e2f3) popup_call_poc_inact_window_t

0xbf20,	// (0x0001ad08) context_pane_ParamLimits

0x386f,	// (0x00012657) signal_pane_ParamLimits

0x9eda,	// (0x00018cc2) main_call2_pane

0xbef9,	// (0x0001ace1) popup_phob_thumbnail2_window_ParamLimits

0xbef9,	// (0x0001ace1) popup_phob_thumbnail2_window

0xac13,	// (0x000199fb) aid_hotspot_pointer_arrow_pane

0xac1b,	// (0x00019a03) aid_hotspot_pointer_hand_pane

0x3389,	// (0x00012171) phob_pre_status_pane_g5

0x0f63,	// (0x0000fd4b) cams_zoom_pane_ParamLimits

0x0f72,	// (0x0000fd5a) image_vga_pane_ParamLimits

0x0f8c,	// (0x0000fd74) main_camera_pane_g1_ParamLimits

0x0f9e,	// (0x0000fd86) main_camera_pane_g2_ParamLimits

0x0fae,	// (0x0000fd96) main_camera_pane_g3_ParamLimits

0x0fbe,	// (0x0000fda6) main_camera_pane_g4_ParamLimits

0x0fce,	// (0x0000fdb6) main_camera_pane_g5_ParamLimits

0x0fde,	// (0x0000fdc6) main_camera_pane_g6_ParamLimits

0x0ff0,	// (0x0000fdd8) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0001dff2) main_camera_pane_g_ParamLimits

0x1000,	// (0x0000fde8) main_camera_pane_t1_ParamLimits

0x1016,	// (0x0000fdfe) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0001e003) main_camera_pane_t_ParamLimits

0x9bc2,	// (0x000189aa) bg_popup_preview_window_pane_cp01_ParamLimits

0x9bc2,	// (0x000189aa) bg_popup_preview_window_pane_cp01

0xaf10,	// (0x00019cf8) popup_phob_thumbnail2_window_g1_ParamLimits

0xaf10,	// (0x00019cf8) popup_phob_thumbnail2_window_g1

0x9967,	// (0x0001874f) call2_cli_visual_pane

0x3074,	// (0x00011e5c) popup_call2_audio_conf_window_ParamLimits

0x3074,	// (0x00011e5c) popup_call2_audio_conf_window

0x3094,	// (0x00011e7c) popup_call2_audio_first_window_ParamLimits

0x3094,	// (0x00011e7c) popup_call2_audio_first_window

0x312a,	// (0x00011f12) popup_call2_audio_in_window_ParamLimits

0x312a,	// (0x00011f12) popup_call2_audio_in_window

0x3172,	// (0x00011f5a) popup_call2_audio_out_window_ParamLimits

0x3172,	// (0x00011f5a) popup_call2_audio_out_window

0x31dc,	// (0x00011fc4) popup_call2_audio_second_window_ParamLimits

0x31dc,	// (0x00011fc4) popup_call2_audio_second_window

0x3242,	// (0x0001202a) popup_call2_audio_wait_window_ParamLimits

0x3242,	// (0x0001202a) popup_call2_audio_wait_window

0x9967,	// (0x0001874f) bg_popup_call2_act_pane_cp03

0x9ba4,	// (0x0001898c) list_conf_pane_cp

0xaf1c,	// (0x00019d04) popup_call2_audio_conf_window_t1

0xa6d4,	// (0x000194bc) list_single_graphic_popup_conf2_pane_ParamLimits

0xa6d4,	// (0x000194bc) list_single_graphic_popup_conf2_pane

0xa6e7,	// (0x000194cf) list_highlight_pane_cp04

0xaf2a,	// (0x00019d12) list_single_graphic_popup_conf2_pane_g1

0xa6f8,	// (0x000194e0) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0001e2fa) list_single_graphic_popup_conf2_pane_g

0xaf34,	// (0x00019d1c) list_single_graphic_popup_conf2_pane_t1

0xaf42,	// (0x00019d2a) bg_popup_call2_act_pane_cp01_ParamLimits

0xaf42,	// (0x00019d2a) bg_popup_call2_act_pane_cp01

0xafcc,	// (0x00019db4) call_type_pane_cp05_ParamLimits

0xafcc,	// (0x00019db4) call_type_pane_cp05

0xb020,	// (0x00019e08) popup_call2_audio_second_window_g1_ParamLimits

0xb020,	// (0x00019e08) popup_call2_audio_second_window_g1

0xb074,	// (0x00019e5c) popup_call2_audio_second_window_g2_ParamLimits

0xb074,	// (0x00019e5c) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0001e2ff) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0001e2ff) popup_call2_audio_second_window_g

0xb0d9,	// (0x00019ec1) popup_call2_audio_second_window_t1_ParamLimits

0xb0d9,	// (0x00019ec1) popup_call2_audio_second_window_t1

0xb194,	// (0x00019f7c) popup_call2_audio_second_window_t2_ParamLimits

0xb194,	// (0x00019f7c) popup_call2_audio_second_window_t2

0xb1e7,	// (0x00019fcf) popup_call2_audio_second_window_t3_ParamLimits

0xb1e7,	// (0x00019fcf) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0001e306) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0001e306) popup_call2_audio_second_window_t

0x9967,	// (0x0001874f) bg_popup_call2_in_pane_cp02

0x9971,	// (0x00018759) call_type_pane_cp04

0x9979,	// (0x00018761) popup_call2_audio_wait_window_g1

0x9981,	// (0x00018769) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0001dee1) popup_call2_audio_wait_window_g

0x9989,	// (0x00018771) popup_call2_audio_wait_window_t3

0xb2da,	// (0x0001a0c2) bg_popup_call2_act_pane_ParamLimits

0xb2da,	// (0x0001a0c2) bg_popup_call2_act_pane

0xb39a,	// (0x0001a182) call_type_pane_cp03_ParamLimits

0xb39a,	// (0x0001a182) call_type_pane_cp03

0xb3fe,	// (0x0001a1e6) popup_call2_audio_first_window_g1_ParamLimits

0xb3fe,	// (0x0001a1e6) popup_call2_audio_first_window_g1

0xb46e,	// (0x0001a256) popup_call2_audio_first_window_g2_ParamLimits

0xb46e,	// (0x0001a256) popup_call2_audio_first_window_g2

0xaab4,	// (0x0001989c) popup_call2_audio_first_window_g3_ParamLimits

0xaab4,	// (0x0001989c) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0001e30f) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0001e30f) popup_call2_audio_first_window_g

0xb54c,	// (0x0001a334) popup_call2_audio_first_window_t1_ParamLimits

0xb54c,	// (0x0001a334) popup_call2_audio_first_window_t1

0xb64f,	// (0x0001a437) popup_call2_audio_first_window_t4_ParamLimits

0xb64f,	// (0x0001a437) popup_call2_audio_first_window_t4

0xb732,	// (0x0001a51a) popup_call2_audio_first_window_t5_ParamLimits

0xb732,	// (0x0001a51a) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0001e31a) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0001e31a) popup_call2_audio_first_window_t

0x9bba,	// (0x000189a2) bg_popup_call2_act_pane_g1

0xbd9f,	// (0x0001ab87) popup_cale_lunar_info_window_t1

0xbdad,	// (0x0001ab95) popup_cale_lunar_info_window_t2

0xbdbb,	// (0x0001aba3) popup_cale_lunar_info_window_t3

0x9967,	// (0x0001874f) bg_popup_call2_bubble_pane

0xb833,	// (0x0001a61b) bg_popup_call2_in_pane_cp01_ParamLimits

0xb833,	// (0x0001a61b) bg_popup_call2_in_pane_cp01

0x9643,	// (0x0001842b) call_type_pane_cp02

0xb87b,	// (0x0001a663) popup_call2_audio_out_window_g1_ParamLimits

0xb87b,	// (0x0001a663) popup_call2_audio_out_window_g1

0xb8a7,	// (0x0001a68f) popup_call2_audio_out_window_g2_ParamLimits

0xb8a7,	// (0x0001a68f) popup_call2_audio_out_window_g2

0xb8cf,	// (0x0001a6b7) popup_call2_audio_out_window_g3_ParamLimits

0xb8cf,	// (0x0001a6b7) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0001e323) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0001e323) popup_call2_audio_out_window_g

0xb90a,	// (0x0001a6f2) popup_call2_audio_out_window_t1_ParamLimits

0xb90a,	// (0x0001a6f2) popup_call2_audio_out_window_t1

0xb969,	// (0x0001a751) popup_call2_audio_out_window_t2_ParamLimits

0xb969,	// (0x0001a751) popup_call2_audio_out_window_t2

0xb9bd,	// (0x0001a7a5) popup_call2_audio_out_window_t3_ParamLimits

0xb9bd,	// (0x0001a7a5) popup_call2_audio_out_window_t3

0xb9d3,	// (0x0001a7bb) popup_call2_audio_out_window_t4_ParamLimits

0xb9d3,	// (0x0001a7bb) popup_call2_audio_out_window_t4

0xb9e9,	// (0x0001a7d1) popup_call2_audio_out_window_t5_ParamLimits

0xb9e9,	// (0x0001a7d1) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0001e32c) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0001e32c) popup_call2_audio_out_window_t

0xba4d,	// (0x0001a835) bg_popup_call2_in_pane_ParamLimits

0xba4d,	// (0x0001a835) bg_popup_call2_in_pane

0xbaa9,	// (0x0001a891) popup_call2_audio_in_window_g1_ParamLimits

0xbaa9,	// (0x0001a891) popup_call2_audio_in_window_g1

0xbae1,	// (0x0001a8c9) popup_call2_audio_in_window_g2_ParamLimits

0xbae1,	// (0x0001a8c9) popup_call2_audio_in_window_g2

0xbb19,	// (0x0001a901) popup_call2_audio_in_window_g3_ParamLimits

0xbb19,	// (0x0001a901) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0001e339) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0001e339) popup_call2_audio_in_window_g

0xbb71,	// (0x0001a959) popup_call2_audio_in_window_t1_ParamLimits

0xbb71,	// (0x0001a959) popup_call2_audio_in_window_t1

0xbbf1,	// (0x0001a9d9) popup_call2_audio_in_window_t2_ParamLimits

0xbbf1,	// (0x0001a9d9) popup_call2_audio_in_window_t2

0xbc71,	// (0x0001aa59) popup_call2_audio_in_window_t3_ParamLimits

0xbc71,	// (0x0001aa59) popup_call2_audio_in_window_t3

0xbc8b,	// (0x0001aa73) popup_call2_audio_in_window_t4_ParamLimits

0xbc8b,	// (0x0001aa73) popup_call2_audio_in_window_t4

0xbc9d,	// (0x0001aa85) popup_call2_audio_in_window_t5_ParamLimits

0xbc9d,	// (0x0001aa85) popup_call2_audio_in_window_t5

0xbcb2,	// (0x0001aa9a) popup_call2_audio_in_window_t6_ParamLimits

0xbcb2,	// (0x0001aa9a) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0001e342) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0001e342) popup_call2_audio_in_window_t

0x9bba,	// (0x000189a2) bg_popup_call2_in_pane_g1

0xbdc9,	// (0x0001abb1) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0001e3aa) popup_cale_lunar_info_window_t

0x9bc2,	// (0x000189aa) bg_popup_call2_rect_pane_ParamLimits

0x9bc2,	// (0x000189aa) bg_popup_call2_rect_pane

0x9967,	// (0x0001874f) call2_cli_visual_graphic_pane

0x9967,	// (0x0001874f) call2_cli_visual_text_pane

0xbfc0,	// (0x0001ada8) smil_status_volume_pane_g3

0x0002,

0x9d22,	// (0x00018b0a) call2_cli_visual_graphic_pane_g1

0x9d22,	// (0x00018b0a) call2_cli_visual_graphic_pane_g2

0x9d22,	// (0x00018b0a) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0001e34f) call2_cli_visual_graphic_pane_g

0xbcc7,	// (0x0001aaaf) bg_popup_call2_rect_pane_g1

0x9dae,	// (0x00018b96) bg_popup_call2_rect_pane_g2

0xbccf,	// (0x0001aab7) bg_popup_call2_rect_pane_g3

0xbcd7,	// (0x0001aabf) bg_popup_call2_rect_pane_g4

0xbcdf,	// (0x0001aac7) bg_popup_call2_rect_pane_g5

0xbce7,	// (0x0001aacf) bg_popup_call2_rect_pane_g6

0xbcef,	// (0x0001aad7) bg_popup_call2_rect_pane_g7

0xbcf7,	// (0x0001aadf) bg_popup_call2_rect_pane_g8

0xbcff,	// (0x0001aae7) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0001e356) bg_popup_call2_rect_pane_g

0xbd07,	// (0x0001aaef) bg_popup_call2_bubble_pane_g1

0xbd0f,	// (0x0001aaf7) bg_popup_call2_bubble_pane_g2

0xbd17,	// (0x0001aaff) bg_popup_call2_bubble_pane_g3

0xbd1f,	// (0x0001ab07) bg_popup_call2_bubble_pane_g4

0xbd27,	// (0x0001ab0f) bg_popup_call2_bubble_pane_g5

0xbd2f,	// (0x0001ab17) bg_popup_call2_bubble_pane_g6

0xbd37,	// (0x0001ab1f) bg_popup_call2_bubble_pane_g7

0xbd3f,	// (0x0001ab27) bg_popup_call2_bubble_pane_g8

0xbd47,	// (0x0001ab2f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0001e369) bg_popup_call2_bubble_pane_g

0x09a8,	// (0x0000f790) aid_cale_week_size_cell_pane

0x102c,	// (0x0000fe14) aid_cams_cif_uncrop_pane_ParamLimits

0x102c,	// (0x0000fe14) aid_cams_cif_uncrop_pane

0x11dc,	// (0x0000ffc4) aid_cams_size_cell_ParamLimits

0x11dc,	// (0x0000ffc4) aid_cams_size_cell

0x11f0,	// (0x0000ffd8) grid_cams_pane_ParamLimits

0x120a,	// (0x0000fff2) linegrid_cams_pane_ParamLimits

0x1407,	// (0x000101ef) call_video_pane_t1

0x1425,	// (0x0001020d) call_video_pane_t2

0x0001,

0xf26e,	// (0x0001e056) call_video_pane_t

0x1853,	// (0x0001063b) aid_cale_month_size_cell_pane_ParamLimits

0x1853,	// (0x0001063b) aid_cale_month_size_cell_pane

0xf60b,	// (0x0001e3f3) smil_status_volume_pane_g

0xbfcd,	// (0x0001adb5) volume_smil_pane_ParamLimits

0x94e8,	// (0x000182d0) aid_popup2_width_pane

0x0902,	// (0x0000f6ea) cell_qdial_pane_g4_ParamLimits

0x0902,	// (0x0000f6ea) cell_qdial_pane_g4

0x26e8,	// (0x000114d0) aid_blid_cardinal_pane_ParamLimits

0x26f4,	// (0x000114dc) aid_blid_destination_pane_ParamLimits

0x26f4,	// (0x000114dc) aid_blid_destination_pane

0x9bc2,	// (0x000189aa) bg_popup_call_poc_act_pane_ParamLimits

0x9bc2,	// (0x000189aa) bg_popup_call_poc_act_pane

0x9bc2,	// (0x000189aa) bg_popup_call_poc_inact_pane_ParamLimits

0x9bc2,	// (0x000189aa) bg_popup_call_poc_inact_pane

0xbd4f,	// (0x0001ab37) bg_popup_call_poc_act_pane_g1

0xbd57,	// (0x0001ab3f) bg_popup_call_poc_act_pane_g2

0xbd5f,	// (0x0001ab47) bg_popup_call_poc_act_pane_g3

0xbd1f,	// (0x0001ab07) bg_popup_call_poc_act_pane_g4

0xbd27,	// (0x0001ab0f) bg_popup_call_poc_act_pane_g5

0xbd67,	// (0x0001ab4f) bg_popup_call_poc_act_pane_g6

0xbd37,	// (0x0001ab1f) bg_popup_call_poc_act_pane_g7

0xbd6f,	// (0x0001ab57) bg_popup_call_poc_act_pane_g8

0x9967,	// (0x0001874f) main_usb_pane

0xbed4,	// (0x0001acbc) popup_cale_lunar_info_window

0x16ff,	// (0x000104e7) im_reading_pane_t1_ParamLimits

0x9fe5,	// (0x00018dcd) list_im_pane_ParamLimits

0x9ff6,	// (0x00018dde) scroll_pane_cp07_ParamLimits

0x9967,	// (0x0001874f) grid_highlight_pane_cp012

0x9bc2,	// (0x000189aa) mup_scale_pane_ParamLimits

0xac63,	// (0x00019a4b) main_usb_pane_g1_ParamLimits

0xac63,	// (0x00019a4b) main_usb_pane_g1

0x329e,	// (0x00012086) main_usb_pane_g2_ParamLimits

0x329e,	// (0x00012086) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0001e393) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0001e393) main_usb_pane_g

0x32b4,	// (0x0001209c) main_usb_pane_t1_ParamLimits

0x32b4,	// (0x0001209c) main_usb_pane_t1

0x32c6,	// (0x000120ae) main_usb_pane_t2_ParamLimits

0x32c6,	// (0x000120ae) main_usb_pane_t2

0x32d8,	// (0x000120c0) main_usb_pane_t3_ParamLimits

0x32d8,	// (0x000120c0) main_usb_pane_t3

0x32ea,	// (0x000120d2) main_usb_pane_t4_ParamLimits

0x32ea,	// (0x000120d2) main_usb_pane_t4

0x32fc,	// (0x000120e4) main_usb_pane_t5_ParamLimits

0x32fc,	// (0x000120e4) main_usb_pane_t5

0x330e,	// (0x000120f6) main_usb_pane_t6_ParamLimits

0x330e,	// (0x000120f6) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0001e398) main_usb_pane_t_ParamLimits

0x2697,	// (0x0001147f) aid_text_placing

0x26a0,	// (0x00011488) main_location2_pane_t1_ParamLimits

0x26b2,	// (0x0001149a) main_location2_pane_t2_ParamLimits

0x26c4,	// (0x000114ac) main_location2_pane_t3_ParamLimits

0x26d6,	// (0x000114be) main_location2_pane_t4_ParamLimits

0x26d6,	// (0x000114be) main_location2_pane_t4

0xf3cf,	// (0x0001e1b7) main_location2_pane_t_ParamLimits

0x9bfe,	// (0x000189e6) find_pinb_pane_g2_ParamLimits

0x9bfe,	// (0x000189e6) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0001df07) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0001df07) find_pinb_pane_g

0x9c0a,	// (0x000189f2) find_pinb_pane_t1_ParamLimits

0x9c1c,	// (0x00018a04) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0001df0c) find_pinb_pane_t_ParamLimits

0x9967,	// (0x0001874f) main_call3_pane

0x1d3e,	// (0x00010b26) cale_month_day_heading_pane_t1_ParamLimits

0x1dc4,	// (0x00010bac) cale_month_day_heading_pane_t2_ParamLimits

0x1e3d,	// (0x00010c25) cale_month_day_heading_pane_t3_ParamLimits

0x1eb6,	// (0x00010c9e) cale_month_day_heading_pane_t4_ParamLimits

0x1f37,	// (0x00010d1f) cale_month_day_heading_pane_t5_ParamLimits

0x1fc0,	// (0x00010da8) cale_month_day_heading_pane_t6_ParamLimits

0x2049,	// (0x00010e31) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0001e08e) cale_month_day_heading_pane_t_ParamLimits

0xa24c,	// (0x00019034) smil_status_volume_pane

0x2d99,	// (0x00011b81) postcard_address_pane_ParamLimits

0x2d99,	// (0x00011b81) postcard_address_pane

0x2dab,	// (0x00011b93) postcard_message_pane_ParamLimits

0x2dab,	// (0x00011b93) postcard_message_pane

0x327c,	// (0x00012064) call2_cli_visual_pane_t1_ParamLimits

0x327c,	// (0x00012064) call2_cli_visual_pane_t1

0x3a9c,	// (0x00012884) postcard_message_pane_t1_ParamLimits

0x3a9c,	// (0x00012884) postcard_message_pane_t1

0x3a85,	// (0x0001286d) postcard_address_pane_t1_ParamLimits

0x3a85,	// (0x0001286d) postcard_address_pane_t1

0x3a71,	// (0x00012859) popup_call3_audio_in_window_ParamLimits

0x3a71,	// (0x00012859) popup_call3_audio_in_window

0x38fc,	// (0x000126e4) bg_popup_call3_in_pane_ParamLimits

0x38fc,	// (0x000126e4) bg_popup_call3_in_pane

0x3972,	// (0x0001275a) popup_call3_audio_in_window_g1_ParamLimits

0x3972,	// (0x0001275a) popup_call3_audio_in_window_g1

0x3992,	// (0x0001277a) popup_call3_audio_in_window_g2_ParamLimits

0x3992,	// (0x0001277a) popup_call3_audio_in_window_g2

0x39b2,	// (0x0001279a) popup_call3_audio_in_window_g3_ParamLimits

0x39b2,	// (0x0001279a) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0001e3fa) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0001e3fa) popup_call3_audio_in_window_g

0x39e3,	// (0x000127cb) popup_call3_audio_in_window_t1_ParamLimits

0x39e3,	// (0x000127cb) popup_call3_audio_in_window_t1

0x3a21,	// (0x00012809) popup_call3_audio_in_window_t2_ParamLimits

0x3a21,	// (0x00012809) popup_call3_audio_in_window_t2

0x3a5f,	// (0x00012847) popup_call3_audio_in_window_t3_ParamLimits

0x3a5f,	// (0x00012847) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0001e403) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0001e403) popup_call3_audio_in_window_t

0x9eda,	// (0x00018cc2) bg_popup_call3_rect_pane

0xbcc7,	// (0x0001aaaf) bg_popup_call3_rect_pane_g1

0x9dae,	// (0x00018b96) bg_popup_call3_rect_pane_g2

0xbccf,	// (0x0001aab7) bg_popup_call3_rect_pane_g3

0xbcd7,	// (0x0001aabf) bg_popup_call3_rect_pane_g4

0xbcdf,	// (0x0001aac7) bg_popup_call3_rect_pane_g5

0xbce7,	// (0x0001aacf) bg_popup_call3_rect_pane_g6

0xbcef,	// (0x0001aad7) bg_popup_call3_rect_pane_g7

0x29d8,	// (0x000117c0) mup_visualizer_osc_pane

0xaac2,	// (0x000198aa) mup_visualizer_spec_pane

0x392c,	// (0x00012714) call3_video_qcif_pane_ParamLimits

0x392c,	// (0x00012714) call3_video_qcif_pane

0x393f,	// (0x00012727) call3_video_qcif_uncrop_pane_ParamLimits

0x393f,	// (0x00012727) call3_video_qcif_uncrop_pane

0x394d,	// (0x00012735) call3_video_subqcif_pane_ParamLimits

0x394d,	// (0x00012735) call3_video_subqcif_pane

0x3961,	// (0x00012749) call3_video_subqcif_uncrop_pane_ParamLimits

0x3961,	// (0x00012749) call3_video_subqcif_uncrop_pane

0x39d2,	// (0x000127ba) popup_call3_audio_in_window_g4_ParamLimits

0x39d2,	// (0x000127ba) popup_call3_audio_in_window_g4

0x38eb,	// (0x000126d3) mup_spec_half_pane

0x38f4,	// (0x000126dc) mup_spec_half_pane_cp

0xbf80,	// (0x0001ad68) mup_osc_middle_pane

0xbf89,	// (0x0001ad71) mup_visualizer_osc_pane_g1

0x38cb,	// (0x000126b3) mup_spec_bar_pane_ParamLimits

0x38cb,	// (0x000126b3) mup_spec_bar_pane

0xbf6d,	// (0x0001ad55) mup_spec_bar_pane_g1

0xbf77,	// (0x0001ad5f) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0001e3ee) mup_spec_bar_pane_g

0x09a8,	// (0x0000f790) aid_cale_week_size_cell_pane_ParamLimits

0x09c2,	// (0x0000f7aa) bg_cale_heading_pane_ParamLimits

0x9e33,	// (0x00018c1b) bg_cale_pane_cp01_ParamLimits

0x09da,	// (0x0000f7c2) cale_week_corner_pane_ParamLimits

0x09f9,	// (0x0000f7e1) cale_week_day_heading_pane_ParamLimits

0x0a16,	// (0x0000f7fe) cale_week_scroll_pane_g1_ParamLimits

0x0a29,	// (0x0000f811) cale_week_scroll_pane_g2_ParamLimits

0x0a41,	// (0x0000f829) cale_week_scroll_pane_g3_ParamLimits

0x0a59,	// (0x0000f841) cale_week_scroll_pane_g4_ParamLimits

0x0a71,	// (0x0000f859) cale_week_scroll_pane_g5_ParamLimits

0x0a91,	// (0x0000f879) cale_week_scroll_pane_g6_ParamLimits

0x0ab1,	// (0x0000f899) cale_week_scroll_pane_g7_ParamLimits

0x0ad1,	// (0x0000f8b9) cale_week_scroll_pane_g8_ParamLimits

0x0af5,	// (0x0000f8dd) cale_week_scroll_pane_g9_ParamLimits

0x0b0d,	// (0x0000f8f5) cale_week_scroll_pane_g10_ParamLimits

0x0b25,	// (0x0000f90d) cale_week_scroll_pane_g11_ParamLimits

0x0b3d,	// (0x0000f925) cale_week_scroll_pane_g12_ParamLimits

0x0b55,	// (0x0000f93d) cale_week_scroll_pane_g13_ParamLimits

0x0b55,	// (0x0000f93d) cale_week_scroll_pane_g14_ParamLimits

0x0b55,	// (0x0000f93d) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0001df98) cale_week_scroll_pane_g_ParamLimits

0x0b91,	// (0x0000f979) cale_week_time_pane_ParamLimits

0x0bb5,	// (0x0000f99d) grid_cale_week_pane_ParamLimits

0x9e50,	// (0x00018c38) listscroll_cale_week_pane_t1

0x9e62,	// (0x00018c4a) scroll_pane_cp08_ParamLimits

0x18b3,	// (0x0001069b) cale_month_corner_pane_ParamLimits

0xa216,	// (0x00018ffe) cale_month_pane_t1

0x1cd1,	// (0x00010ab9) cale_month_week_pane_ParamLimits

0x24f3,	// (0x000112db) popup_call_status_window_g1_ParamLimits

0x2507,	// (0x000112ef) popup_call_status_window_g2_ParamLimits

0x251b,	// (0x00011303) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0001e13e) popup_call_status_window_g_ParamLimits

0xa5f4,	// (0x000193dc) aid_call2_pane

0x2c46,	// (0x00011a2e) msg_header_pane_g1

0x2d99,	// (0x00011b81) postcard_address2_pane_ParamLimits

0x2d99,	// (0x00011b81) postcard_address2_pane

0x2dab,	// (0x00011b93) postcard_message2_pane_ParamLimits

0x2dab,	// (0x00011b93) postcard_message2_pane

0x387d,	// (0x00012665) message2_row_pane_ParamLimits

0x387d,	// (0x00012665) message2_row_pane

0x3899,	// (0x00012681) address2_row_pane_ParamLimits

0x3899,	// (0x00012681) address2_row_pane

0xbf3b,	// (0x0001ad23) postcard_message2_row_pane_g1

0xbf43,	// (0x0001ad2b) postcard_message2_row_pane_t1

0xbf3b,	// (0x0001ad23) address2_row_pane_g1

0xbf43,	// (0x0001ad2b) address2_row_pane_t1

0x0ee5,	// (0x0000fccd) aid_size_cell_vorec

0x9967,	// (0x0001874f) main_rss_pane

0x38ac,	// (0x00012694) rss_list_single_pane_ParamLimits

0x38ac,	// (0x00012694) rss_list_single_pane

0xbf51,	// (0x0001ad39) rss_list_single_pane_t1

0xbf5f,	// (0x0001ad47) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0001e3e9) rss_list_single_pane_t

0x9967,	// (0x0001874f) main_camera2_pane

0x9967,	// (0x0001874f) main_video2_pane

0x3b15,	// (0x000128fd) cams_zoom_pane_cp2_ParamLimits

0x3b15,	// (0x000128fd) cams_zoom_pane_cp2

0x3b35,	// (0x0001291d) image2_vga_pane_ParamLimits

0x3b35,	// (0x0001291d) image2_vga_pane

0x3b86,	// (0x0001296e) main_camera2_pane_g1_ParamLimits

0x3b86,	// (0x0001296e) main_camera2_pane_g1

0x3ba6,	// (0x0001298e) main_camera2_pane_g2_ParamLimits

0x3ba6,	// (0x0001298e) main_camera2_pane_g2

0x3bc6,	// (0x000129ae) main_camera2_pane_g3_ParamLimits

0x3bc6,	// (0x000129ae) main_camera2_pane_g3

0x3be6,	// (0x000129ce) main_camera2_pane_g4_ParamLimits

0x3be6,	// (0x000129ce) main_camera2_pane_g4

0x3c06,	// (0x000129ee) main_camera2_pane_g5_ParamLimits

0x3c06,	// (0x000129ee) main_camera2_pane_g5

0x3c26,	// (0x00012a0e) main_camera2_pane_g6_ParamLimits

0x3c26,	// (0x00012a0e) main_camera2_pane_g6

0x3c46,	// (0x00012a2e) main_camera2_pane_g7_ParamLimits

0x3c46,	// (0x00012a2e) main_camera2_pane_g7

0x3c66,	// (0x00012a4e) main_camera2_pane_g8_ParamLimits

0x3c66,	// (0x00012a4e) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0001e40a) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0001e40a) main_camera2_pane_g

0x3ca6,	// (0x00012a8e) main_camera2_pane_t1_ParamLimits

0x3ca6,	// (0x00012a8e) main_camera2_pane_t1

0x3cdb,	// (0x00012ac3) main_camera2_pane_t2_ParamLimits

0x3cdb,	// (0x00012ac3) main_camera2_pane_t2

0x3d01,	// (0x00012ae9) main_camera2_pane_t3_ParamLimits

0x3d01,	// (0x00012ae9) main_camera2_pane_t3

0x3d5f,	// (0x00012b47) main_camera2_pane_t4_ParamLimits

0x3d5f,	// (0x00012b47) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0001e41d) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0001e41d) main_camera2_pane_t

0x3df1,	// (0x00012bd9) cams_zoom_pane_cp4_ParamLimits

0x3df1,	// (0x00012bd9) cams_zoom_pane_cp4

0x3e07,	// (0x00012bef) image2_cif_pane_ParamLimits

0x3e07,	// (0x00012bef) image2_cif_pane

0x3e32,	// (0x00012c1a) image2_subqcif_pane_ParamLimits

0x3e32,	// (0x00012c1a) image2_subqcif_pane

0x3e4c,	// (0x00012c34) main_video2_pane_g1_ParamLimits

0x3e4c,	// (0x00012c34) main_video2_pane_g1

0x3e66,	// (0x00012c4e) main_video2_pane_g2_ParamLimits

0x3e66,	// (0x00012c4e) main_video2_pane_g2

0x3e7c,	// (0x00012c64) main_video2_pane_g3_ParamLimits

0x3e7c,	// (0x00012c64) main_video2_pane_g3

0x3e92,	// (0x00012c7a) main_video2_pane_g4_ParamLimits

0x3e92,	// (0x00012c7a) main_video2_pane_g4

0x3ea8,	// (0x00012c90) main_video2_pane_g5_ParamLimits

0x3ea8,	// (0x00012c90) main_video2_pane_g5

0x3ebe,	// (0x00012ca6) main_video2_pane_g6_ParamLimits

0x3ebe,	// (0x00012ca6) main_video2_pane_g6

0x0005,

0xf644,	// (0x0001e42c) main_video2_pane_g_ParamLimits

0xf644,	// (0x0001e42c) main_video2_pane_g

0x3ed8,	// (0x00012cc0) main_video2_pane_t1_ParamLimits

0x3ed8,	// (0x00012cc0) main_video2_pane_t1

0x3efc,	// (0x00012ce4) main_video2_pane_t2_ParamLimits

0x3efc,	// (0x00012ce4) main_video2_pane_t2

0x3f4a,	// (0x00012d32) main_video2_pane_t3_ParamLimits

0x3f4a,	// (0x00012d32) main_video2_pane_t3

0x0002,

0xf651,	// (0x0001e439) main_video2_pane_t_ParamLimits

0xf651,	// (0x0001e439) main_video2_pane_t

0x33c9,	// (0x000121b1) call_muted_g2

0x0001,

0xf5f3,	// (0x0001e3db) call_muted_g

0x9967,	// (0x0001874f) main_mup2_pane

0x3f8e,	// (0x00012d76) main_mup2_pane_g1_ParamLimits

0x3f8e,	// (0x00012d76) main_mup2_pane_g1

0x3f9a,	// (0x00012d82) main_mup2_pane_g2_ParamLimits

0x3f9a,	// (0x00012d82) main_mup2_pane_g2

0xc0f1,	// (0x0001aed9) main_mup_pane_g13_cp1

0xc0f9,	// (0x0001aee1) mup_volume_pane_cp1

0x3fb6,	// (0x00012d9e) main_mup2_pane_g4_ParamLimits

0x3fb6,	// (0x00012d9e) main_mup2_pane_g4

0x3fc8,	// (0x00012db0) main_mup2_pane_g5_ParamLimits

0x3fc8,	// (0x00012db0) main_mup2_pane_g5

0x3fda,	// (0x00012dc2) main_mup2_pane_g6_ParamLimits

0x3fda,	// (0x00012dc2) main_mup2_pane_g6

0x3fec,	// (0x00012dd4) main_mup2_pane_g7_ParamLimits

0x3fec,	// (0x00012dd4) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0001e440) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0001e440) main_mup2_pane_g

0x4004,	// (0x00012dec) main_mup2_pane_t1_ParamLimits

0x4004,	// (0x00012dec) main_mup2_pane_t1

0x401a,	// (0x00012e02) main_mup2_pane_t2_ParamLimits

0x401a,	// (0x00012e02) main_mup2_pane_t2

0x4030,	// (0x00012e18) main_mup2_pane_t3_ParamLimits

0x4030,	// (0x00012e18) main_mup2_pane_t3

0x4046,	// (0x00012e2e) main_mup2_pane_t4_ParamLimits

0x4046,	// (0x00012e2e) main_mup2_pane_t4

0x405e,	// (0x00012e46) main_mup2_pane_t5_ParamLimits

0x405e,	// (0x00012e46) main_mup2_pane_t5

0x4076,	// (0x00012e5e) main_mup2_pane_t6_ParamLimits

0x4076,	// (0x00012e5e) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0001e44f) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0001e44f) main_mup2_pane_t

0x40a6,	// (0x00012e8e) mup2_visualizer_pane_ParamLimits

0x40a6,	// (0x00012e8e) mup2_visualizer_pane

0x40d4,	// (0x00012ebc) mup_progress_pane_cp_ParamLimits

0x40d4,	// (0x00012ebc) mup_progress_pane_cp

0xc0d3,	// (0x0001aebb) mup_volume_pane_cp_ParamLimits

0xc0d3,	// (0x0001aebb) mup_volume_pane_cp

0x40e8,	// (0x00012ed0) mup2_visualizer_pane_g1_ParamLimits

0x40e8,	// (0x00012ed0) mup2_visualizer_pane_g1

0xc012,	// (0x0001adfa) mup2_visualizer_pane_g2_ParamLimits

0xc012,	// (0x0001adfa) mup2_visualizer_pane_g2

0x40ff,	// (0x00012ee7) mup2_visualizer_pane_g3_ParamLimits

0x40ff,	// (0x00012ee7) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0001e45c) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0001e45c) mup2_visualizer_pane_g

0xadac,	// (0x00019b94) aid_size_cell_fmradio

0x357b,	// (0x00012363) aid_height_parent_landcape

0xa074,	// (0x00018e5c) wml_content_pane_cp

0xa07c,	// (0x00018e64) wml_tabs_pane

0xa085,	// (0x00018e6d) popup_wml_miniature_window

0xa08d,	// (0x00018e75) scroll_pane_cp021

0xa0a1,	// (0x00018e89) wml_content_pane_comp8

0x9967,	// (0x0001874f) bg_popup_sub_pane_cp05

0xc030,	// (0x0001ae18) popup_wml_miniature_window_g1

0xc038,	// (0x0001ae20) wml_miniature_view_pane

0x410b,	// (0x00012ef3) aid_size_wml_view

0x4113,	// (0x00012efb) wml_miniature_view_pane_g1

0x411c,	// (0x00012f04) wml_miniature_view_pane_g2

0x4125,	// (0x00012f0d) wml_miniature_view_pane_g3

0x412d,	// (0x00012f15) wml_miniature_view_pane_g4

0x4135,	// (0x00012f1d) wml_miniature_view_pane_g5

0x413d,	// (0x00012f25) wml_miniature_view_pane_g6

0x4145,	// (0x00012f2d) wml_miniature_view_pane_g7

0x414d,	// (0x00012f35) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0001e463) wml_miniature_view_pane_g

0xc040,	// (0x0001ae28) background_graphic_ParamLimits

0xc040,	// (0x0001ae28) background_graphic

0xc04c,	// (0x0001ae34) wml_tabs_2_pane

0xc055,	// (0x0001ae3d) wml_tabs_3_pane_ParamLimits

0xc055,	// (0x0001ae3d) wml_tabs_3_pane

0xc067,	// (0x0001ae4f) wml_tabs_4_pane_ParamLimits

0xc067,	// (0x0001ae4f) wml_tabs_4_pane

0xc07d,	// (0x0001ae65) wml_tabs_5_pane_ParamLimits

0xc07d,	// (0x0001ae65) wml_tabs_5_pane

0xc097,	// (0x0001ae7f) wml_tabs_pane_g2_ParamLimits

0xc097,	// (0x0001ae7f) wml_tabs_pane_g2

0xc0ab,	// (0x0001ae93) wml_tabs_pane_g3_ParamLimits

0xc0ab,	// (0x0001ae93) wml_tabs_pane_g3

0x4155,	// (0x00012f3d) wml_tabs_2_active_pane_ParamLimits

0x4155,	// (0x00012f3d) wml_tabs_2_active_pane

0x4169,	// (0x00012f51) wml_tabs_2_passive_pane_ParamLimits

0x4169,	// (0x00012f51) wml_tabs_2_passive_pane

0x417d,	// (0x00012f65) wml_tabs_3_active_pane_cp_ParamLimits

0x417d,	// (0x00012f65) wml_tabs_3_active_pane_cp

0x4192,	// (0x00012f7a) wml_tabs_3_passive_pane_ParamLimits

0x4192,	// (0x00012f7a) wml_tabs_3_passive_pane

0x41a5,	// (0x00012f8d) wml_tabs_3_passive_pane_cp_ParamLimits

0x41a5,	// (0x00012f8d) wml_tabs_3_passive_pane_cp

0x41bc,	// (0x00012fa4) tabs_4_active_pane

0x41c4,	// (0x00012fac) tabs_4_passive_pane

0x41ce,	// (0x00012fb6) tabs_4_passive_pane_cp

0x41d6,	// (0x00012fbe) tabs_4_passive_pane_cp2

0x3296,	// (0x0001207e) aid_height_text

0x29ae,	// (0x00011796) mup_volume_cont_pane_ParamLimits

0x29ae,	// (0x00011796) mup_volume_cont_pane

0x0586,	// (0x0000f36e) aid_size_cell_pinb

0x0590,	// (0x0000f378) aid_size_list_pinb

0x40c0,	// (0x00012ea8) mup2_volume_cont_pane_ParamLimits

0x40c0,	// (0x00012ea8) mup2_volume_cont_pane

0xc0bf,	// (0x0001aea7) mup2_volume_cont_pane_g1_ParamLimits

0xc0bf,	// (0x0001aea7) mup2_volume_cont_pane_g1

0x0249,	// (0x0000f031) aid_size_cell_touch_ParamLimits

0x0249,	// (0x0000f031) aid_size_cell_touch

0x0476,	// (0x0000f25e) touch_pane_ParamLimits

0x0476,	// (0x0000f25e) touch_pane

0x94d6,	// (0x000182be) main_rss2_pane

0xc101,	// (0x0001aee9) listscroll_rss2_pane

0xc10a,	// (0x0001aef2) rss2_navigation_pane

0xc112,	// (0x0001aefa) list_rss2_pane

0xa7aa,	// (0x00019592) scroll_pane_cp22

0xc11a,	// (0x0001af02) rss2_navigation_pane_g1

0xc123,	// (0x0001af0b) rss2_navigation_pane_g2

0xc12b,	// (0x0001af13) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0001e474) rss2_navigation_pane_g

0xc133,	// (0x0001af1b) rss2_navigation_pane_t1

0x41e0,	// (0x00012fc8) rss2_list_single_pane_ParamLimits

0x41e0,	// (0x00012fc8) rss2_list_single_pane

0xc141,	// (0x0001af29) rss2_list_single_pane_t2

0xc14f,	// (0x0001af37) rss2_list_single_pane_t3_ParamLimits

0xc14f,	// (0x0001af37) rss2_list_single_pane_t3

0xc16c,	// (0x0001af54) rss2_list_single_pane_t4

0x22fd,	// (0x000110e5) smil_status_pane_g1

0x9546,	// (0x0001832e) main_image2_pane_ParamLimits

0x9546,	// (0x0001832e) main_image2_pane

0x3c86,	// (0x00012a6e) main_camera2_pane_g9_ParamLimits

0x3c86,	// (0x00012a6e) main_camera2_pane_g9

0x3db4,	// (0x00012b9c) main_camera2_pane_t5_ParamLimits

0x3db4,	// (0x00012b9c) main_camera2_pane_t5

0xbfe2,	// (0x0001adca) main_camera2_pane_t6_ParamLimits

0xbfe2,	// (0x0001adca) main_camera2_pane_t6

0x41f5,	// (0x00012fdd) main_image2_pane_g1_ParamLimits

0x41f5,	// (0x00012fdd) main_image2_pane_g1

0x2fd2,	// (0x00011dba) smil2_video_pane_ParamLimits

0x2fd2,	// (0x00011dba) smil2_video_pane

0x94f4,	// (0x000182dc) aid_zoom_text_primary_cp

0x953c,	// (0x00018324) popup_preview_fixed_window

0x9fdd,	// (0x00018dc5) im_reading_pane_g1

0x3afd,	// (0x000128e5) cams2_bc_adjust_pane_cp_ParamLimits

0x3afd,	// (0x000128e5) cams2_bc_adjust_pane_cp

0x3de3,	// (0x00012bcb) cams2_bc_adjust_pane_ParamLimits

0x3de3,	// (0x00012bcb) cams2_bc_adjust_pane

0xc17a,	// (0x0001af62) cams2_bc_adjust_pane_g1

0xc182,	// (0x0001af6a) cams2_slider_pane

0xc18b,	// (0x0001af73) cams2_slider_pane_g1

0xc194,	// (0x0001af7c) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0001e47b) cams2_slider_pane_g

0x067e,	// (0x0000f466) calc_display_pane_ParamLimits

0x06a6,	// (0x0000f48e) calc_paper_pane_ParamLimits

0x06c9,	// (0x0000f4b1) grid_calc_pane_ParamLimits

0xa65a,	// (0x00019442) popup_clock_digital_window_t1_ParamLimits

0xad49,	// (0x00019b31) main_image_pane_t1

0x0660,	// (0x0000f448) aid_size_cell_calc_ParamLimits

0x0660,	// (0x0000f448) aid_size_cell_calc

0x35c1,	// (0x000123a9) popup_blid_sat_info2_window_ParamLimits

0x35c1,	// (0x000123a9) popup_blid_sat_info2_window

0xc1b6,	// (0x0001af9e) aid_size_cell_blid

0xc1be,	// (0x0001afa6) bg_popup_window_pane_cp07

0xc1e1,	// (0x0001afc9) grid_popup_blid_pane

0xc1eb,	// (0x0001afd3) heading_pane_cp05_ParamLimits

0xc1eb,	// (0x0001afd3) heading_pane_cp05

0xc2b5,	// (0x0001b09d) cell_popup_blid_pane_ParamLimits

0xc2b5,	// (0x0001b09d) cell_popup_blid_pane

0xc2d9,	// (0x0001b0c1) cell_popup_blid_pane_g1

0xc2e1,	// (0x0001b0c9) cell_popup_blid_pane_t1

0x4090,	// (0x00012e78) mup2_indicator_pane_ParamLimits

0x4090,	// (0x00012e78) mup2_indicator_pane

0x9eda,	// (0x00018cc2) mup2_visualizer_osc_pane

0xc01e,	// (0x0001ae06) mup2_visualizer_spec_pane_ParamLimits

0xc01e,	// (0x0001ae06) mup2_visualizer_spec_pane

0x420b,	// (0x00012ff3) mup2_spec_half_pane

0x4214,	// (0x00012ffc) mup2_spec_half_pane_cp

0x421c,	// (0x00013004) mup2_spec_bar_pane_ParamLimits

0x421c,	// (0x00013004) mup2_spec_bar_pane

0xbf6d,	// (0x0001ad55) mup2_spec_bar_pane_g1

0xbf77,	// (0x0001ad5f) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0001e3ee) mup2_spec_bar_pane_g

0x423c,	// (0x00013024) mup2_osc_middle_pane

0xbf89,	// (0x0001ad71) mup2_visualizer_osc_pane_g1

0x9574,	// (0x0001835c) popup_number_entry_window_t1_ParamLimits

0x9587,	// (0x0001836f) popup_number_entry_window_t2_ParamLimits

0x9599,	// (0x00018381) popup_number_entry_window_t3_ParamLimits

0x04c8,	// (0x0000f2b0) popup_number_entry_window_t5_ParamLimits

0x04c8,	// (0x0000f2b0) popup_number_entry_window_t5

0xf0ca,	// (0x0001deb2) popup_number_entry_window_t_ParamLimits

0x95ab,	// (0x00018393) text_title_cp2_ParamLimits

0xac23,	// (0x00019a0b) aid_hotspot_pointer_text2_pane

0xac49,	// (0x00019a31) main_viewer_pane_g9_ParamLimits

0xac49,	// (0x00019a31) main_viewer_pane_g9

0xa216,	// (0x00018ffe) cale_month_pane_t1_ParamLimits

0xa281,	// (0x00019069) bg_cale_pane_ParamLimits

0xa299,	// (0x00019081) list_cale_pane_ParamLimits

0xa2aa,	// (0x00019092) listscroll_cale_day_pane_t1

0xa2bc,	// (0x000190a4) scroll_pane_cp09_ParamLimits

0x29e0,	// (0x000117c8) main_mup_eq_pane_t1_ParamLimits

0x29e0,	// (0x000117c8) main_mup_eq_pane_t1

0x29fa,	// (0x000117e2) main_mup_eq_pane_t2_ParamLimits

0x29fa,	// (0x000117e2) main_mup_eq_pane_t2

0x2a14,	// (0x000117fc) main_mup_eq_pane_t3_ParamLimits

0x2a14,	// (0x000117fc) main_mup_eq_pane_t3

0x2a30,	// (0x00011818) main_mup_eq_pane_t4_ParamLimits

0x2a30,	// (0x00011818) main_mup_eq_pane_t4

0x2a4c,	// (0x00011834) main_mup_eq_pane_t5_ParamLimits

0x2a4c,	// (0x00011834) main_mup_eq_pane_t5

0x2a68,	// (0x00011850) main_mup_eq_pane_t6_ParamLimits

0x2a68,	// (0x00011850) main_mup_eq_pane_t6

0x2a7c,	// (0x00011864) main_mup_eq_pane_t7_ParamLimits

0x2a7c,	// (0x00011864) main_mup_eq_pane_t7

0x2a90,	// (0x00011878) main_mup_eq_pane_t8_ParamLimits

0x2a90,	// (0x00011878) main_mup_eq_pane_t8

0x2aa4,	// (0x0001188c) main_mup_eq_pane_t9_ParamLimits

0x2aa4,	// (0x0001188c) main_mup_eq_pane_t9

0x2abe,	// (0x000118a6) main_mup_eq_pane_t10_ParamLimits

0x2abe,	// (0x000118a6) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0001e23d) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0001e23d) main_mup_eq_pane_t

0x2b6d,	// (0x00011955) mup_equalizer_pane_cp5_ParamLimits

0x2b81,	// (0x00011969) mup_equalizer_pane_cp6_ParamLimits

0x2b95,	// (0x0001197d) mup_equalizer_pane_cp7_ParamLimits

0x94d6,	// (0x000182be) main_gallery_pane

0xbf92,	// (0x0001ad7a) smil2_volume_pane

0xbf9a,	// (0x0001ad82) smil_status_volume_pane_g1_ParamLimits

0xbfad,	// (0x0001ad95) smil_status_volume_pane_g2_ParamLimits

0xbfc0,	// (0x0001ada8) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0001e3f3) smil_status_volume_pane_g_ParamLimits

0xc1be,	// (0x0001afa6) bg_popup_window_pane_cp07_ParamLimits

0xc1cc,	// (0x0001afb4) blid_firmament_pane

0x4245,	// (0x0001302d) aid_size_cell_gallery_ParamLimits

0x4245,	// (0x0001302d) aid_size_cell_gallery

0x425b,	// (0x00013043) grid_gallery_pane_ParamLimits

0x425b,	// (0x00013043) grid_gallery_pane

0x4274,	// (0x0001305c) cell_gallery_pane_ParamLimits

0x4274,	// (0x0001305c) cell_gallery_pane

0xc2ef,	// (0x0001b0d7) bg_cell_gallery_focus_pane_ParamLimits

0xc2ef,	// (0x0001b0d7) bg_cell_gallery_focus_pane

0xc301,	// (0x0001b0e9) cell_gallery_pane_g1_ParamLimits

0xc301,	// (0x0001b0e9) cell_gallery_pane_g1

0x42bd,	// (0x000130a5) cell_gallery_pane_g2_ParamLimits

0x42bd,	// (0x000130a5) cell_gallery_pane_g2

0x42ca,	// (0x000130b2) cell_gallery_pane_g3_ParamLimits

0x42ca,	// (0x000130b2) cell_gallery_pane_g3

0xc30d,	// (0x0001b0f5) cell_gallery_pane_g4_ParamLimits

0xc30d,	// (0x0001b0f5) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0001e4a1) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0001e4a1) cell_gallery_pane_g

0xc319,	// (0x0001b101) bg_cell_gallery_focus_pane_g1

0xc321,	// (0x0001b109) bg_cell_gallery_focus_pane_g2

0xc329,	// (0x0001b111) bg_cell_gallery_focus_pane_g3

0xc331,	// (0x0001b119) bg_cell_gallery_focus_pane_g4

0xc339,	// (0x0001b121) bg_cell_gallery_focus_pane_g5

0xc341,	// (0x0001b129) bg_cell_gallery_focus_pane_g6

0xc349,	// (0x0001b131) bg_cell_gallery_focus_pane_g7

0xc351,	// (0x0001b139) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0001e4aa) bg_cell_gallery_focus_pane_g

0xc359,	// (0x0001b141) aid_firma_cardinal

0xc36d,	// (0x0001b155) blid_firmament_pane_t1

0xc384,	// (0x0001b16c) blid_firmament_pane_t2

0xc39b,	// (0x0001b183) blid_firmament_pane_t3

0xc3b2,	// (0x0001b19a) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0001e4bb) blid_firmament_pane_t

0xc3c9,	// (0x0001b1b1) blid_sat_info_pane

0xc3d9,	// (0x0001b1c1) blid_sat_info_pane_g1

0xc3d9,	// (0x0001b1c1) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0001e4c4) blid_sat_info_pane_g

0xc3e3,	// (0x0001b1cb) blid_sat_info_pane_t1

0xc3f1,	// (0x0001b1d9) smil2_volume_content_pane

0xc3fa,	// (0x0001b1e2) smil2_volume_pane_g1

0xc402,	// (0x0001b1ea) smil2_volume_content_pane_g1

0xc40b,	// (0x0001b1f3) smil2_volume_content_pane_g2

0xc414,	// (0x0001b1fc) smil2_volume_content_pane_g3

0xc41d,	// (0x0001b205) smil2_volume_content_pane_g4

0xc426,	// (0x0001b20e) smil2_volume_content_pane_g5

0xc42f,	// (0x0001b217) smil2_volume_content_pane_g6

0xc438,	// (0x0001b220) smil2_volume_content_pane_g7

0xc441,	// (0x0001b229) smil2_volume_content_pane_g8

0xc44a,	// (0x0001b232) smil2_volume_content_pane_g9

0xc453,	// (0x0001b23b) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0001e4c9) smil2_volume_content_pane_g

0x0c69,	// (0x0000fa51) cale_week_day_heading_pane_t1_ParamLimits

0x0c93,	// (0x0000fa7b) cale_week_day_heading_pane_t2_ParamLimits

0x0cc2,	// (0x0000faaa) cale_week_day_heading_pane_t3_ParamLimits

0x0cf1,	// (0x0000fad9) cale_week_day_heading_pane_t4_ParamLimits

0x0d20,	// (0x0000fb08) cale_week_day_heading_pane_t5_ParamLimits

0x0d57,	// (0x0000fb3f) cale_week_day_heading_pane_t6_ParamLimits

0x0d8e,	// (0x0000fb76) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0001dfb9) cale_week_day_heading_pane_t_ParamLimits

0x9e7f,	// (0x00018c67) bg_cale_side_pane_ParamLimits

0x0db8,	// (0x0000fba0) cale_week_time_pane_t1_ParamLimits

0x0dd2,	// (0x0000fbba) cale_week_time_pane_t2_ParamLimits

0x0dec,	// (0x0000fbd4) cale_week_time_pane_t3_ParamLimits

0x0e06,	// (0x0000fbee) cale_week_time_pane_t4_ParamLimits

0x0e20,	// (0x0000fc08) cale_week_time_pane_t5_ParamLimits

0x0e3a,	// (0x0000fc22) cale_week_time_pane_t6_ParamLimits

0x0e54,	// (0x0000fc3c) cale_week_time_pane_t7_ParamLimits

0x0e6e,	// (0x0000fc56) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0001dfc8) cale_week_time_pane_t_ParamLimits

0x0e88,	// (0x0000fc70) cell_cale_week_pane_g2_ParamLimits

0x9e7f,	// (0x00018c67) bg_cale_side_pane_cp01_ParamLimits

0x20da,	// (0x00010ec2) cale_month_week_pane_t1_ParamLimits

0x20f3,	// (0x00010edb) cale_month_week_pane_t2_ParamLimits

0x210c,	// (0x00010ef4) cale_month_week_pane_t3_ParamLimits

0x2125,	// (0x00010f0d) cale_month_week_pane_t4_ParamLimits

0x213e,	// (0x00010f26) cale_month_week_pane_t5_ParamLimits

0x2157,	// (0x00010f3f) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0001e09d) cale_month_week_pane_t_ParamLimits

0xa228,	// (0x00019010) cell_cale_month_pane_g1_ParamLimits

0x94d6,	// (0x000182be) main_cale_event_viewer_pane

0x94d6,	// (0x000182be) listscroll_cale_event_viewer_pane

0xc45c,	// (0x0001b244) list_cale_ev_pane

0xc464,	// (0x0001b24c) scroll_pane_cp023

0xc470,	// (0x0001b258) field_cale_ev_pane_ParamLimits

0xc470,	// (0x0001b258) field_cale_ev_pane

0xc48e,	// (0x0001b276) field_cale_ev_content_pane_ParamLimits

0xc48e,	// (0x0001b276) field_cale_ev_content_pane

0xc49a,	// (0x0001b282) field_cale_ev_pane_g1_ParamLimits

0xc49a,	// (0x0001b282) field_cale_ev_pane_g1

0xc4a6,	// (0x0001b28e) field_cale_ev_pane_g2_ParamLimits

0xc4a6,	// (0x0001b28e) field_cale_ev_pane_g2

0xc4be,	// (0x0001b2a6) field_cale_ev_pane_g3_ParamLimits

0xc4be,	// (0x0001b2a6) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0001e4de) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0001e4de) field_cale_ev_pane_g

0xc4d6,	// (0x0001b2be) field_cale_ev_pane_t1_ParamLimits

0xc4d6,	// (0x0001b2be) field_cale_ev_pane_t1

0xc4ed,	// (0x0001b2d5) field_cale_ev_content_pane_t1_ParamLimits

0xc4ed,	// (0x0001b2d5) field_cale_ev_content_pane_t1

0xab74,	// (0x0001995c) bg_button_pane_cp01

0x0996,	// (0x0000f77e) listscroll_cale_week_pane_ParamLimits

0x9e2a,	// (0x00018c12) popup_toolbar_window_cp01

0x9e50,	// (0x00018c38) listscroll_cale_week_pane_t1_ParamLimits

0x0996,	// (0x0000f77e) listscroll_cale_day_pane_ParamLimits

0x9e2a,	// (0x00018c12) popup_toolbar_window_cp02

0xa2aa,	// (0x00019092) listscroll_cale_day_pane_t1_ParamLimits

0x0996,	// (0x0000f77e) main_cale_month_pane_ParamLimits

0xbf0b,	// (0x0001acf3) popup_toolbar_window_cp03_ParamLimits

0xbf0b,	// (0x0001acf3) popup_toolbar_window_cp03

0x2e9a,	// (0x00011c82) main_image_pane_g2_ParamLimits

0x2e9a,	// (0x00011c82) main_image_pane_g2

0x2eab,	// (0x00011c93) main_image_pane_g3_ParamLimits

0x2eab,	// (0x00011c93) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0001e2cf) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0001e2cf) main_image_pane_g

0xad49,	// (0x00019b31) main_image_pane_t1_ParamLimits

0x2ebc,	// (0x00011ca4) main_image_pane_t2_ParamLimits

0x2ebc,	// (0x00011ca4) main_image_pane_t2

0x2ece,	// (0x00011cb6) main_image_pane_t3_ParamLimits

0x2ece,	// (0x00011cb6) main_image_pane_t3

0x2ef6,	// (0x00011cde) main_image_pane_t4_ParamLimits

0x2ef6,	// (0x00011cde) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0001e2d6) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0001e2d6) main_image_pane_t

0x2f16,	// (0x00011cfe) popup_image_details_window_cp01

0x2f20,	// (0x00011d08) popup_toobar_trans_pane_cp01_ParamLimits

0x2f20,	// (0x00011d08) popup_toobar_trans_pane_cp01

0x36a0,	// (0x00012488) popup_image_details_window_ParamLimits

0x36a0,	// (0x00012488) popup_image_details_window

0xbede,	// (0x0001acc6) popup_image_focus_window

0x3ab7,	// (0x0001289f) camera2_autofocus_pane_ParamLimits

0x3ab7,	// (0x0001289f) camera2_autofocus_pane

0x94d6,	// (0x000182be) bg_popup_sub_pane_cp06

0xc50b,	// (0x0001b2f3) popup_image_focus_window_g1

0xc513,	// (0x0001b2fb) popup_image_focus_window_g2

0xc51b,	// (0x0001b303) popup_image_focus_window_g3

0xc523,	// (0x0001b30b) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0001e4e5) popup_image_focus_window_g

0xc52b,	// (0x0001b313) popup_image_focus_window_t1

0xc539,	// (0x0001b321) popup_image_focus_window_t2

0xc549,	// (0x0001b331) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0001e4ee) popup_image_focus_window_t

0xc557,	// (0x0001b33f) camera2_autofocus_pane_g1

0x9546,	// (0x0001832e) bg_tb_trans_pane_cp01

0xc565,	// (0x0001b34d) popup_image_details_window_g1

0xc578,	// (0x0001b360) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0001e500) popup_image_details_window_g

0xc5a1,	// (0x0001b389) popup_image_details_window_t1

0xc5b3,	// (0x0001b39b) popup_image_details_window_t2

0xc5cc,	// (0x0001b3b4) popup_image_details_window_t3

0xc5e0,	// (0x0001b3c8) popup_image_details_window_t4

0xc5fb,	// (0x0001b3e3) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0001e507) popup_image_details_window_t

0x9c7b,	// (0x00018a63) bg_calc_paper_pane_ParamLimits

0x94d6,	// (0x000182be) grid_highlight_pane_cp013

0x9c8f,	// (0x00018a77) list_calc_pane_ParamLimits

0x9ca1,	// (0x00018a89) scroll_pane_cp024

0x9ca9,	// (0x00018a91) bg_calc_display_pane_ParamLimits

0x07c7,	// (0x0000f5af) calc_display_pane_t1_ParamLimits

0x07d9,	// (0x0000f5c1) calc_display_pane_t2_ParamLimits

0x9cb5,	// (0x00018a9d) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0001df39) calc_display_pane_t_ParamLimits

0x0893,	// (0x0000f67b) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0001df56) cell_calc_pane_g

0x089c,	// (0x0000f684) cell_calc_pane_t1

0x9d2c,	// (0x00018b14) grid_highlight_pane_cp02_ParamLimits

0x9d42,	// (0x00018b2a) toolbar_button_pane_cp01_ParamLimits

0x9d42,	// (0x00018b2a) toolbar_button_pane_cp01

0xad8e,	// (0x00019b76) temp_image_control_pane_ParamLimits

0xad8e,	// (0x00019b76) temp_image_control_pane

0x9546,	// (0x0001832e) main_mp3_pane

0xc615,	// (0x0001b3fd) temp_image_control_pane_g1_ParamLimits

0xc615,	// (0x0001b3fd) temp_image_control_pane_g1

0xc623,	// (0x0001b40b) temp_image_control_pane_g2_ParamLimits

0xc623,	// (0x0001b40b) temp_image_control_pane_g2

0xc635,	// (0x0001b41d) temp_image_control_pane_g3_ParamLimits

0xc635,	// (0x0001b41d) temp_image_control_pane_g3

0x4307,	// (0x000130ef) temp_image_control_pane_g4_ParamLimits

0x4307,	// (0x000130ef) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0001e512) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0001e512) temp_image_control_pane_g

0xc615,	// (0x0001b3fd) main_mp3_pane_g1

0x431a,	// (0x00013102) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0001e51b) main_mp3_pane_g

0xc678,	// (0x0001b460) main_mp3_pane_t1

0x9eec,	// (0x00018cd4) main_camera_pane_g8_ParamLimits

0x9eec,	// (0x00018cd4) main_camera_pane_g8

0x1182,	// (0x0000ff6a) main_video_pane_g7_ParamLimits

0x1182,	// (0x0000ff6a) main_video_pane_g7

0xc000,	// (0x0001ade8) main_camera2_pane_t7_ParamLimits

0xc000,	// (0x0001ade8) main_camera2_pane_t7

0xa034,	// (0x00018e1c) scroll_pane_cp025_ParamLimits

0xa034,	// (0x00018e1c) scroll_pane_cp025

0xa048,	// (0x00018e30) scroll_pane_cp026_ParamLimits

0xa048,	// (0x00018e30) scroll_pane_cp026

0xa057,	// (0x00018e3f) wml_content_pane_ParamLimits

0x94d6,	// (0x000182be) main_touch_calib_pane

0x43ee,	// (0x000131d6) main_touch_calib_pane_g1

0x4400,	// (0x000131e8) main_touch_calib_pane_g2

0x4412,	// (0x000131fa) main_touch_calib_pane_g3

0x4424,	// (0x0001320c) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0001e539) main_touch_calib_pane_g

0x4436,	// (0x0001321e) main_touch_calib_pane_t1

0x4450,	// (0x00013238) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0001e542) main_touch_calib_pane_t

0xa886,	// (0x0001966e) mup_progress_pane_cp02

0xa8bb,	// (0x000196a3) navi_pane_g1

0xa976,	// (0x0001975e) navi_pane_mp_t3

0x9546,	// (0x0001832e) main_mp3_pane_ParamLimits

0x3825,	// (0x0001260d) navi_pane_ParamLimits

0xc615,	// (0x0001b3fd) main_mp3_pane_g1_ParamLimits

0x431a,	// (0x00013102) main_mp3_pane_g2_ParamLimits

0x4328,	// (0x00013110) main_mp3_pane_g3_ParamLimits

0x4328,	// (0x00013110) main_mp3_pane_g3

0x4336,	// (0x0001311e) main_mp3_pane_g4_ParamLimits

0x4336,	// (0x0001311e) main_mp3_pane_g4

0xc645,	// (0x0001b42d) main_mp3_pane_g5_ParamLimits

0xc645,	// (0x0001b42d) main_mp3_pane_g5

0xc653,	// (0x0001b43b) main_mp3_pane_g6_ParamLimits

0xc653,	// (0x0001b43b) main_mp3_pane_g6

0xc660,	// (0x0001b448) main_mp3_pane_g7_ParamLimits

0xc660,	// (0x0001b448) main_mp3_pane_g7

0xc66c,	// (0x0001b454) main_mp3_pane_g8_ParamLimits

0xc66c,	// (0x0001b454) main_mp3_pane_g8

0xf733,	// (0x0001e51b) main_mp3_pane_g_ParamLimits

0x4342,	// (0x0001312a) main_mp3_pane_t2

0x4350,	// (0x00013138) main_mp3_pane_t3

0xc686,	// (0x0001b46e) main_mp3_pane_t4

0xc694,	// (0x0001b47c) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0001e52c) main_mp3_pane_t

0xc6a2,	// (0x0001b48a) mup_progress_pane_cp01

0x94f4,	// (0x000182dc) aid_zoom_text_secondary2

0xc45c,	// (0x0001b244) list_cale_ev2_pane

0xc464,	// (0x0001b24c) scroll_pane_cp023_ParamLimits

0x44a6,	// (0x0001328e) field_cale_ev2_pane_ParamLimits

0x44a6,	// (0x0001328e) field_cale_ev2_pane

0x44c6,	// (0x000132ae) field_cale_ev2_pane_g1_ParamLimits

0x44c6,	// (0x000132ae) field_cale_ev2_pane_g1

0x44d2,	// (0x000132ba) field_cale_ev2_pane_g2_ParamLimits

0x44d2,	// (0x000132ba) field_cale_ev2_pane_g2

0x44ea,	// (0x000132d2) field_cale_ev2_pane_g3_ParamLimits

0x44ea,	// (0x000132d2) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0001e54d) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0001e54d) field_cale_ev2_pane_g

0x4502,	// (0x000132ea) field_cale_ev2_pane_t1_ParamLimits

0x4502,	// (0x000132ea) field_cale_ev2_pane_t1

0x4519,	// (0x00013301) field_cale_ev2_pane_t2_ParamLimits

0x4519,	// (0x00013301) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0001e556) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0001e556) field_cale_ev2_pane_t

0x2d4f,	// (0x00011b37) main_postcard_pane_g5_ParamLimits

0x2d4f,	// (0x00011b37) main_postcard_pane_g5

0x2d65,	// (0x00011b4d) main_postcard_pane_g6_ParamLimits

0x2d65,	// (0x00011b4d) main_postcard_pane_g6

0x0f4e,	// (0x0000fd36) camera2_autofocus_pane_cp_ParamLimits

0x0f4e,	// (0x0000fd36) camera2_autofocus_pane_cp

0x9546,	// (0x0001832e) main_mup3_pane

0x4552,	// (0x0001333a) main_mup3_pane_g1_ParamLimits

0x4552,	// (0x0001333a) main_mup3_pane_g1

0x4574,	// (0x0001335c) main_mup3_pane_g2_ParamLimits

0x4574,	// (0x0001335c) main_mup3_pane_g2

0x45f2,	// (0x000133da) main_mup3_pane_g3_ParamLimits

0x45f2,	// (0x000133da) main_mup3_pane_g3

0x4638,	// (0x00013420) main_mup3_pane_g4_ParamLimits

0x4638,	// (0x00013420) main_mup3_pane_g4

0x467e,	// (0x00013466) main_mup3_pane_g5_ParamLimits

0x467e,	// (0x00013466) main_mup3_pane_g5

0x46c4,	// (0x000134ac) main_mup3_pane_g6_ParamLimits

0x46c4,	// (0x000134ac) main_mup3_pane_g6

0xc6d6,	// (0x0001b4be) main_mup3_pane_g7_ParamLimits

0xc6d6,	// (0x0001b4be) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0001e566) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0001e566) main_mup3_pane_g

0x4742,	// (0x0001352a) main_mup3_pane_t1_ParamLimits

0x4742,	// (0x0001352a) main_mup3_pane_t1

0x47b6,	// (0x0001359e) main_mup3_pane_t2_ParamLimits

0x47b6,	// (0x0001359e) main_mup3_pane_t2

0x488a,	// (0x00013672) main_mup3_pane_t4_ParamLimits

0x488a,	// (0x00013672) main_mup3_pane_t4

0x48e0,	// (0x000136c8) main_mup3_pane_t5_ParamLimits

0x48e0,	// (0x000136c8) main_mup3_pane_t5

0x499c,	// (0x00013784) main_mup3_pane_t6_ParamLimits

0x499c,	// (0x00013784) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0001e577) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0001e577) main_mup3_pane_t

0x4a54,	// (0x0001383c) mup3_progress_pane_ParamLimits

0x4a54,	// (0x0001383c) mup3_progress_pane

0x4aea,	// (0x000138d2) popup_mup3_control_window_ParamLimits

0x4aea,	// (0x000138d2) popup_mup3_control_window

0xc6e4,	// (0x0001b4cc) popup_mup3_text_window

0x4b1c,	// (0x00013904) mup3_progress_pane_t1

0x4b3b,	// (0x00013923) mup3_progress_pane_t2

0xc6ec,	// (0x0001b4d4) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0001e584) mup3_progress_pane_t

0xc709,	// (0x0001b4f1) mup_progress_pane_cp03

0x94d6,	// (0x000182be) bg_tb_trans_pane_cp04

0x4b5a,	// (0x00013942) mup3_volume_pane

0x4b62,	// (0x0001394a) popup_mup3_control_window_g1

0x4b6b,	// (0x00013953) mup3_volume_pane_g1

0x4b74,	// (0x0001395c) mup3_volume_pane_g2

0x4b7d,	// (0x00013965) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0001e58b) mup3_volume_pane_g

0x94d6,	// (0x000182be) bg_tb_trans_pane_cp03

0xc719,	// (0x0001b501) popup_mup3_text_window_g1

0xc721,	// (0x0001b509) popup_mup3_text_window_t1

0x9d03,	// (0x00018aeb) list_calc_item_pane_g1_ParamLimits

0xc0e8,	// (0x0001aed0) mup_volume_pane_cp_g1

0x446a,	// (0x00013252) main_touch_calib_pane_t3

0x447e,	// (0x00013266) main_touch_calib_pane_t4

0x4492,	// (0x0001327a) main_touch_calib_pane_t5

0x94e0,	// (0x000182c8) aid_cell_size_toolbar2

0x94e8,	// (0x000182d0) aid_popup3_width_pane

0x94f4,	// (0x000182dc) aid_zoom_text_msg_primary

0x0f2d,	// (0x0000fd15) vorec_t7

0x9cc7,	// (0x00018aaf) bg_calc_paper_pane_g1_ParamLimits

0x9cd3,	// (0x00018abb) bg_calc_paper_pane_g2_ParamLimits

0x9cdf,	// (0x00018ac7) bg_calc_paper_pane_g3_ParamLimits

0x9ceb,	// (0x00018ad3) bg_calc_paper_pane_g4_ParamLimits

0x9cf7,	// (0x00018adf) bg_calc_paper_pane_g5_ParamLimits

0x0820,	// (0x0000f608) bg_calc_paper_pane_g6_ParamLimits

0x082f,	// (0x0000f617) bg_calc_paper_pane_g7_ParamLimits

0x083e,	// (0x0000f626) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0001df40) bg_calc_paper_pane_g_ParamLimits

0x0851,	// (0x0000f639) calc_bg_paper_pane_g9_ParamLimits

0x1099,	// (0x0000fe81) image_qvga_pane_ParamLimits

0x1099,	// (0x0000fe81) image_qvga_pane

0x9bc2,	// (0x000189aa) bg_popup_sub_pane_cp04_ParamLimits

0xacc5,	// (0x00019aad) popup_mup_playback_window_g1_ParamLimits

0xacd1,	// (0x00019ab9) popup_mup_playback_window_t1_ParamLimits

0xace6,	// (0x00019ace) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0001e2ca) popup_mup_playback_window_t_ParamLimits

0x3faa,	// (0x00012d92) main_mup2_pane_g3_ParamLimits

0x3faa,	// (0x00012d92) main_mup2_pane_g3

0x14a8,	// (0x00010290) popup_toolbar_window_cp04

0xb0c8,	// (0x00019eb0) popup_call2_audio_second_window_g3_ParamLimits

0xb0c8,	// (0x00019eb0) popup_call2_audio_second_window_g3

0xb4d2,	// (0x0001a2ba) popup_call2_audio_first_window_g4_ParamLimits

0xb4d2,	// (0x0001a2ba) popup_call2_audio_first_window_g4

0xbb51,	// (0x0001a939) popup_call2_audio_in_window_g4_ParamLimits

0xbb51,	// (0x0001a939) popup_call2_audio_in_window_g4

0x2e7c,	// (0x00011c64) aid_area_sk_bg_cut_ParamLimits

0x2e7c,	// (0x00011c64) aid_area_sk_bg_cut

0xacfb,	// (0x00019ae3) aid_area_sk_bg_cut_2_ParamLimits

0xacfb,	// (0x00019ae3) aid_area_sk_bg_cut_2

0x42ad,	// (0x00013095) aid_placing_details_win

0x42b5,	// (0x0001309d) aid_placing_details_win_2

0xc557,	// (0x0001b33f) camera2_autofocus_pane_g1_ParamLimits

0x040f,	// (0x0000f1f7) popup_fixed_preview_cale_window_ParamLimits

0x040f,	// (0x0000f1f7) popup_fixed_preview_cale_window

0xa9fd,	// (0x000197e5) navi_slider_pane_g3

0xaa06,	// (0x000197ee) navi_slider_pane_g4

0xaa0f,	// (0x000197f7) navi_slider_pane_g5

0xa9fd,	// (0x000197e5) navi_slider_pane_g6

0xaa18,	// (0x00019800) navi_slider_pane_g7

0xab39,	// (0x00019921) mup_scale_pane_g3

0xab42,	// (0x0001992a) mup_scale_pane_g4

0xab4b,	// (0x00019933) mup_scale_pane_g5

0x2ba9,	// (0x00011991) mup_scale_pane_g6

0x2bb2,	// (0x0001199a) mup_scale_pane_g7

0xa9fd,	// (0x000197e5) cams2_slider_pane_g3

0xc19d,	// (0x0001af85) cams2_slider_pane_g4

0xc1a5,	// (0x0001af8d) cams2_slider_pane_g5

0xa9fd,	// (0x000197e5) cams2_slider_pane_g6

0xc1ad,	// (0x0001af95) cams2_slider_pane_g7

0xc3d9,	// (0x0001b1c1) camera2_autofocus_pane_cp_g1

0xbeb2,	// (0x0001ac9a) bg_popup_preview_window_pane_cp02_ParamLimits

0xbeb2,	// (0x0001ac9a) bg_popup_preview_window_pane_cp02

0xc72f,	// (0x0001b517) list_fp_cale_pane_ParamLimits

0xc72f,	// (0x0001b517) list_fp_cale_pane

0xc73b,	// (0x0001b523) popup_fixed_preview_cale_window_t1_ParamLimits

0xc73b,	// (0x0001b523) popup_fixed_preview_cale_window_t1

0x4b86,	// (0x0001396e) popup_fixed_preview_cale_window_t2_ParamLimits

0x4b86,	// (0x0001396e) popup_fixed_preview_cale_window_t2

0x4b9b,	// (0x00013983) popup_fixed_preview_cale_window_t3_ParamLimits

0x4b9b,	// (0x00013983) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0001e592) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0001e592) popup_fixed_preview_cale_window_t

0x4bb0,	// (0x00013998) list_single_fp_cale_pane_ParamLimits

0x4bb0,	// (0x00013998) list_single_fp_cale_pane

0xc759,	// (0x0001b541) list_single_fp_cale_pane_g1_ParamLimits

0xc759,	// (0x0001b541) list_single_fp_cale_pane_g1

0xc765,	// (0x0001b54d) list_single_fp_cale_pane_g2_ParamLimits

0xc765,	// (0x0001b54d) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0001e599) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0001e599) list_single_fp_cale_pane_g

0xc77e,	// (0x0001b566) list_single_fp_cale_pane_t1_ParamLimits

0xc77e,	// (0x0001b566) list_single_fp_cale_pane_t1

0xc790,	// (0x0001b578) list_single_fp_cale_pane_t2_ParamLimits

0xc790,	// (0x0001b578) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0001e5a0) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0001e5a0) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x94d6,	// (0x000182be) main_dialer_pane

0x4bc5,	// (0x000139ad) aid_cell_size_keypad

0x4bcf,	// (0x000139b7) dialer_ne_pane

0x4bd7,	// (0x000139bf) grid_dialer_command_1_pane

0x4bdf,	// (0x000139c7) grid_dialer_command_2_pane

0x4be7,	// (0x000139cf) grid_dialer_keypad_pane

0x4bf9,	// (0x000139e1) bg_popup_call_pane_cp06_ParamLimits

0x4bf9,	// (0x000139e1) bg_popup_call_pane_cp06

0x4c05,	// (0x000139ed) dialer_ne_clear_pane_ParamLimits

0x4c05,	// (0x000139ed) dialer_ne_clear_pane

0xc7c3,	// (0x0001b5ab) dialer_ne_pane_g1

0xc7cb,	// (0x0001b5b3) dialer_ne_pane_t1_ParamLimits

0xc7cb,	// (0x0001b5b3) dialer_ne_pane_t1

0x4c11,	// (0x000139f9) dialer_ne_pane_t2_ParamLimits

0x4c11,	// (0x000139f9) dialer_ne_pane_t2

0x4c3b,	// (0x00013a23) dialer_ne_pane_t3_ParamLimits

0x4c3b,	// (0x00013a23) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0001e5a5) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0001e5a5) dialer_ne_pane_t

0x4c6b,	// (0x00013a53) dialer_ne_pane_t3_copy1_ParamLimits

0x4c6b,	// (0x00013a53) dialer_ne_pane_t3_copy1

0x4c9a,	// (0x00013a82) cell_dialer_keypad_pane_ParamLimits

0x4c9a,	// (0x00013a82) cell_dialer_keypad_pane

0x4cb1,	// (0x00013a99) cell_dialer_command_1_pane_ParamLimits

0x4cb1,	// (0x00013a99) cell_dialer_command_1_pane

0x4cc7,	// (0x00013aaf) cell_dialer_command_2_pane_ParamLimits

0x4cc7,	// (0x00013aaf) cell_dialer_command_2_pane

0xc7dd,	// (0x0001b5c5) bg_button_pane_cp02_ParamLimits

0xc7dd,	// (0x0001b5c5) bg_button_pane_cp02

0x4cd6,	// (0x00013abe) cell_dialer_keypad_pane_g1_ParamLimits

0x4cd6,	// (0x00013abe) cell_dialer_keypad_pane_g1

0xc7dd,	// (0x0001b5c5) bg_button_pane_cp03_ParamLimits

0xc7dd,	// (0x0001b5c5) bg_button_pane_cp03

0x4cea,	// (0x00013ad2) cell_dialer_command_1_pane_g1_ParamLimits

0x4cea,	// (0x00013ad2) cell_dialer_command_1_pane_g1

0xc7e9,	// (0x0001b5d1) bg_button_pane_cp04

0x4cfe,	// (0x00013ae6) cell_dialer_command_2_pane_g1

0x9eda,	// (0x00018cc2) bg_button_pane_cp06

0xc7f1,	// (0x0001b5d9) dialer_ne_clear_pane_g1

0xa8c7,	// (0x000196af) navi_pane_g2

0xa8f5,	// (0x000196dd) navi_pane_g3

0x0002,

0xf3e5,	// (0x0001e1cd) navi_pane_g

0xa984,	// (0x0001976c) navi_pane_mv_g2

0xa9ab,	// (0x00019793) navi_pane_mv_g5

0x276d,	// (0x00011555) navi_pane_mv_t1

0x9ca9,	// (0x00018a91) main_clock2_pane

0x4d4b,	// (0x00013b33) main_clock2_list_pane_ParamLimits

0x4d4b,	// (0x00013b33) main_clock2_list_pane

0x4d83,	// (0x00013b6b) main_clock2_pane_t1_ParamLimits

0x4d83,	// (0x00013b6b) main_clock2_pane_t1

0x4dbf,	// (0x00013ba7) main_clock2_pane_t2_ParamLimits

0x4dbf,	// (0x00013ba7) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0001e5b1) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0001e5b1) main_clock2_pane_t

0x4e5d,	// (0x00013c45) popup_clock_analogue_window_cp03_ParamLimits

0x4e5d,	// (0x00013c45) popup_clock_analogue_window_cp03

0x4e82,	// (0x00013c6a) popup_clock_digital_window_cp02_ParamLimits

0x4e82,	// (0x00013c6a) popup_clock_digital_window_cp02

0x4ef3,	// (0x00013cdb) main_clock2_list_single_pane_ParamLimits

0x4ef3,	// (0x00013cdb) main_clock2_list_single_pane

0x9eda,	// (0x00018cc2) list_highlight_pane_cp05

0xc82f,	// (0x0001b617) main_clock2_list_single_pane_t1

0x14a8,	// (0x00010290) popup_toolbar_window_cp04_ParamLimits

0x42d7,	// (0x000130bf) camera2_autofocus_pane_g2_ParamLimits

0x42d7,	// (0x000130bf) camera2_autofocus_pane_g2

0x42e3,	// (0x000130cb) camera2_autofocus_pane_g3_ParamLimits

0x42e3,	// (0x000130cb) camera2_autofocus_pane_g3

0x42ef,	// (0x000130d7) camera2_autofocus_pane_g4_ParamLimits

0x42ef,	// (0x000130d7) camera2_autofocus_pane_g4

0x42fb,	// (0x000130e3) camera2_autofocus_pane_g5_ParamLimits

0x42fb,	// (0x000130e3) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0001e4f5) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0001e4f5) camera2_autofocus_pane_g

0xc6b6,	// (0x0001b49e) camera2_autofocus_pane_cp_g2

0xc6be,	// (0x0001b4a6) camera2_autofocus_pane_cp_g3

0xc6c6,	// (0x0001b4ae) camera2_autofocus_pane_cp_g4

0xc6ce,	// (0x0001b4b6) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0001e55b) camera2_autofocus_pane_cp_g

0x4bf1,	// (0x000139d9) popup_dialer_spcha_window

0x94d6,	// (0x000182be) bg_popup_sub_pane_cp07

0xc83d,	// (0x0001b625) list_spcha_pane

0xc845,	// (0x0001b62d) list_single_spcha_pane_ParamLimits

0xc845,	// (0x0001b62d) list_single_spcha_pane

0x94d6,	// (0x000182be) list_highlight_pane_cp06

0xc856,	// (0x0001b63e) list_single_spcha_pane_t1

0xb8fb,	// (0x0001a6e3) popup_call2_audio_out_window_g4_ParamLimits

0xb8fb,	// (0x0001a6e3) popup_call2_audio_out_window_g4

0x94d6,	// (0x000182be) main_imed2_pane

0xbee6,	// (0x0001acce) popup_imed_adjust2_window

0x36b8,	// (0x000124a0) popup_imed_trans_window_ParamLimits

0x36b8,	// (0x000124a0) popup_imed_trans_window

0xc217,	// (0x0001afff) popup_blid_sat_info2_window_t1

0xc225,	// (0x0001b00d) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0001e48a) popup_blid_sat_info2_window_t

0x4f9c,	// (0x00013d84) aid_size_cell_colour_35

0x4fbc,	// (0x00013da4) aid_size_cell_colour_112

0x4fdc,	// (0x00013dc4) aid_size_cell_effect

0xbebe,	// (0x0001aca6) bg_tb_trans_pane_cp02

0xa3b3,	// (0x0001919b) heading_imed_pane

0x4ffc,	// (0x00013de4) listscroll_imed_pane

0xc864,	// (0x0001b64c) heading_imed_pane_g1

0xc86c,	// (0x0001b654) heading_imed_pane_t1

0xc87a,	// (0x0001b662) grid_imed_colour_35_pane_ParamLimits

0xc87a,	// (0x0001b662) grid_imed_colour_35_pane

0x5008,	// (0x00013df0) grid_imed_effect_pane

0xc891,	// (0x0001b679) list_imed_aspect_pane

0x501e,	// (0x00013e06) scroll_pane_cp027_ParamLimits

0x501e,	// (0x00013e06) scroll_pane_cp027

0x502f,	// (0x00013e17) cell_imed_effect_pane_ParamLimits

0x502f,	// (0x00013e17) cell_imed_effect_pane

0xc899,	// (0x0001b681) cell_imed_colour_pane_ParamLimits

0xc899,	// (0x0001b681) cell_imed_colour_pane

0xc8db,	// (0x0001b6c3) cell_imed_colour_pane_g1_ParamLimits

0xc8db,	// (0x0001b6c3) cell_imed_colour_pane_g1

0xc8ec,	// (0x0001b6d4) hgihlgiht_grid_pane_cp016_ParamLimits

0xc8ec,	// (0x0001b6d4) hgihlgiht_grid_pane_cp016

0x5056,	// (0x00013e3e) cell_imed_effect_pane_g1

0x505e,	// (0x00013e46) grid_highlight_pane_cp017

0xc8fd,	// (0x0001b6e5) list_imed_single_pane_ParamLimits

0xc8fd,	// (0x0001b6e5) list_imed_single_pane

0x94d6,	// (0x000182be) list_highlight_pane_cp07

0xc912,	// (0x0001b6fa) list_imed_aspect_pane_comp1_t1

0xbebe,	// (0x0001aca6) bg_tb_trans_pane_cp05

0xc934,	// (0x0001b71c) popup_imed_adjust2_window_g1

0xc95b,	// (0x0001b743) popup_imed_adjust2_window_t1

0xc973,	// (0x0001b75b) slider_imed_adjust_pane

0xc987,	// (0x0001b76f) slider_imed_adjust_pane_g1

0xc997,	// (0x0001b77f) slider_imed_adjust_pane_g2

0xc9a7,	// (0x0001b78f) slider_imed_adjust_pane_g3

0xc9b8,	// (0x0001b7a0) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0001e5ce) slider_imed_adjust_pane_g

0x5067,	// (0x00013e4f) aid_size_cell_clipart2

0x5073,	// (0x00013e5b) grid_imed_clipart_pane

0xc9c9,	// (0x0001b7b1) scroll_pane_cp031

0x507d,	// (0x00013e65) cell_imed_clipart_pane_ParamLimits

0x507d,	// (0x00013e65) cell_imed_clipart_pane

0x509f,	// (0x00013e87) cell_imed_clipart_pane_g1

0x94d6,	// (0x000182be) grid_highlight_pane_cp014

0x4d60,	// (0x00013b48) main_clock2_pane_g1_ParamLimits

0x4d60,	// (0x00013b48) main_clock2_pane_g1

0x4e9e,	// (0x00013c86) aid_call2_pane_cp10

0x4eb0,	// (0x00013c98) aid_call_pane_cp10

0xa828,	// (0x00019610) popup_clock_analogue_window_cp10_g1

0xa828,	// (0x00019610) popup_clock_analogue_window_cp10_g2

0x4ec2,	// (0x00013caa) popup_clock_analogue_window_cp10_g3

0x4ec2,	// (0x00013caa) popup_clock_analogue_window_cp10_g4

0xa828,	// (0x00019610) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0001e5bc) popup_clock_analogue_window_cp10_g

0x4ed4,	// (0x00013cbc) popup_clock_analogue_window_cp10_t1

0x4f05,	// (0x00013ced) clock_digital_number_pane_cp10_ParamLimits

0x4f05,	// (0x00013ced) clock_digital_number_pane_cp10

0x4f1d,	// (0x00013d05) clock_digital_number_pane_cp11_ParamLimits

0x4f1d,	// (0x00013d05) clock_digital_number_pane_cp11

0x4f35,	// (0x00013d1d) clock_digital_number_pane_cp12_ParamLimits

0x4f35,	// (0x00013d1d) clock_digital_number_pane_cp12

0x4f4d,	// (0x00013d35) clock_digital_number_pane_cp13_ParamLimits

0x4f4d,	// (0x00013d35) clock_digital_number_pane_cp13

0x4f65,	// (0x00013d4d) clock_digital_separator_pane_cp10_ParamLimits

0x4f65,	// (0x00013d4d) clock_digital_separator_pane_cp10

0x4f7d,	// (0x00013d65) popup_clock_digital_window_cp02_t1_ParamLimits

0x4f7d,	// (0x00013d65) popup_clock_digital_window_cp02_t1

0x9bba,	// (0x000189a2) clock_digital_number_pane_cp10_g1

0x9bba,	// (0x000189a2) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0001e5d7) clock_digital_number_pane_cp10_g

0x9bba,	// (0x000189a2) clock_digital_separator_pane_cp10_g1

0x9bba,	// (0x000189a2) clock_digital_separator_pane_g2_cp10

0xa9b3,	// (0x0001979b) navi_pane_vded_g4

0xa9bc,	// (0x000197a4) navi_pane_vded_g5

0xa9c5,	// (0x000197ad) navi_pane_vded_t1

0x94d6,	// (0x000182be) main_vded_pane

0x50a8,	// (0x00013e90) main_vded_pane_g1

0x50b2,	// (0x00013e9a) main_vded_pane_g2

0x50bc,	// (0x00013ea4) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0001e5dc) main_vded_pane_g

0x50c6,	// (0x00013eae) main_vded_pane_t1

0x50d4,	// (0x00013ebc) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0001e5e3) main_vded_pane_t

0x50e2,	// (0x00013eca) vded_slider_pane

0x50ea,	// (0x00013ed2) vded_video_pane

0xc9d1,	// (0x0001b7b9) vded_video_pane_g1

0x50f2,	// (0x00013eda) vded_video_pane_g2

0xc3d9,	// (0x0001b1c1) vded_video_pane_g3

0x0002,

0xf800,	// (0x0001e5e8) vded_video_pane_g

0xc9db,	// (0x0001b7c3) vded_slider_pane_g1

0xc0e8,	// (0x0001aed0) vded_slider_pane_g2

0xc9e4,	// (0x0001b7cc) vded_slider_pane_g3

0xc9ed,	// (0x0001b7d5) vded_slider_pane_g4

0xc9f6,	// (0x0001b7de) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0001e5ef) vded_slider_pane_g

0x4ad2,	// (0x000138ba) mup3_rocker_pane_ParamLimits

0x4ad2,	// (0x000138ba) mup3_rocker_pane

0x50fb,	// (0x00013ee3) mup3_control_keys_pane_g1

0x5103,	// (0x00013eeb) mup3_control_keys_pane_g2

0x510b,	// (0x00013ef3) mup3_control_keys_pane_g3

0x5113,	// (0x00013efb) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0001e5fa) mup3_control_keys_pane_g

0x0446,	// (0x0000f22e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0446,	// (0x0000f22e) popup_toolbar2_fixed_window_cp01

0x4b06,	// (0x000138ee) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4b06,	// (0x000138ee) popup_toolbar2_fixed_window_cp02

0xb23a,	// (0x0001a022) popup_call2_audio_second_window_t4_ParamLimits

0xb23a,	// (0x0001a022) popup_call2_audio_second_window_t4

0xb768,	// (0x0001a550) popup_call2_audio_first_window_t6_ParamLimits

0xb768,	// (0x0001a550) popup_call2_audio_first_window_t6

0xb9fe,	// (0x0001a7e6) popup_call2_audio_out_window_t6_ParamLimits

0xb9fe,	// (0x0001a7e6) popup_call2_audio_out_window_t6

0x94d6,	// (0x000182be) main_vitu_pane

0x5123,	// (0x00013f0b) aid_size_cell_itu_ParamLimits

0x5123,	// (0x00013f0b) aid_size_cell_itu

0x9546,	// (0x0001832e) bg_popup_window_pane_cp08_ParamLimits

0x9546,	// (0x0001832e) bg_popup_window_pane_cp08

0x5139,	// (0x00013f21) field_vitu_entry_pane_ParamLimits

0x5139,	// (0x00013f21) field_vitu_entry_pane

0x5150,	// (0x00013f38) grid_vitu_function_pane_ParamLimits

0x5150,	// (0x00013f38) grid_vitu_function_pane

0x516b,	// (0x00013f53) grid_vitu_itu_pane_ParamLimits

0x516b,	// (0x00013f53) grid_vitu_itu_pane

0x5189,	// (0x00013f71) cell_vitu_itu_pane_ParamLimits

0x5189,	// (0x00013f71) cell_vitu_itu_pane

0x51ab,	// (0x00013f93) cell_vitu_function_pane_ParamLimits

0x51ab,	// (0x00013f93) cell_vitu_function_pane

0x9546,	// (0x0001832e) bg_popup_sub_pane_cp08_ParamLimits

0x9546,	// (0x0001832e) bg_popup_sub_pane_cp08

0x51c4,	// (0x00013fac) field_vitu_entry_pane_t1_ParamLimits

0x51c4,	// (0x00013fac) field_vitu_entry_pane_t1

0xca17,	// (0x0001b7ff) field_vitu_entry_pane_t2_ParamLimits

0xca17,	// (0x0001b7ff) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0001e608) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0001e608) field_vitu_entry_pane_t

0xca34,	// (0x0001b81c) bg_button_pane_cp05_ParamLimits

0xca34,	// (0x0001b81c) bg_button_pane_cp05

0x51e2,	// (0x00013fca) cell_vitu_itu_pane_g1

0x51fa,	// (0x00013fe2) cell_vitu_itu_pane_t1_ParamLimits

0x51fa,	// (0x00013fe2) cell_vitu_itu_pane_t1

0x520c,	// (0x00013ff4) cell_vitu_itu_pane_t2_ParamLimits

0x520c,	// (0x00013ff4) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0001e60d) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0001e60d) cell_vitu_itu_pane_t

0xca42,	// (0x0001b82a) bg_button_pane_cp07

0x5241,	// (0x00014029) cell_vitu_function_pane_g1

0x9c49,	// (0x00018a31) main_calc_pane_g1

0x026d,	// (0x0000f055) aid_visual_content_pane

0x94d6,	// (0x000182be) main_vradio_pane

0x524a,	// (0x00014032) main_vradio_pane_g1_ParamLimits

0x524a,	// (0x00014032) main_vradio_pane_g1

0xca4c,	// (0x0001b834) main_vradio_pane_g2_ParamLimits

0xca4c,	// (0x0001b834) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0001e614) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0001e614) main_vradio_pane_g

0x5263,	// (0x0001404b) main_vradio_pane_t1_ParamLimits

0x5263,	// (0x0001404b) main_vradio_pane_t1

0x5278,	// (0x00014060) main_vradio_pane_t2_ParamLimits

0x5278,	// (0x00014060) main_vradio_pane_t2

0xca59,	// (0x0001b841) main_vradio_pane_t3_ParamLimits

0xca59,	// (0x0001b841) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0001e619) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0001e619) main_vradio_pane_t

0x528d,	// (0x00014075) vradio_rocker_control_pane_ParamLimits

0x528d,	// (0x00014075) vradio_rocker_control_pane

0x529f,	// (0x00014087) vradio_station_info_pane_ParamLimits

0x529f,	// (0x00014087) vradio_station_info_pane

0xca6d,	// (0x0001b855) vradio_frequency_info_pane_ParamLimits

0xca6d,	// (0x0001b855) vradio_frequency_info_pane

0xc3d9,	// (0x0001b1c1) vradio_station_info_pane_g1

0xca7c,	// (0x0001b864) vradio_station_info_pane_t1_ParamLimits

0xca7c,	// (0x0001b864) vradio_station_info_pane_t1

0xca9e,	// (0x0001b886) vradio_station_info_pane_t2_ParamLimits

0xca9e,	// (0x0001b886) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0001e620) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0001e620) vradio_station_info_pane_t

0xcab0,	// (0x0001b898) vradio_tuning_pane

0xcab8,	// (0x0001b8a0) vradio_rocker_control_pane_g1

0xcac0,	// (0x0001b8a8) vradio_rocker_control_pane_g2

0xcac8,	// (0x0001b8b0) vradio_rocker_control_pane_g3

0xcad0,	// (0x0001b8b8) vradio_rocker_control_pane_g4

0xcad8,	// (0x0001b8c0) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0001e625) vradio_rocker_control_pane_g

0x52b1,	// (0x00014099) vradio_frequency_info_pane_g1

0xcae0,	// (0x0001b8c8) vradio_frequency_info_pane_t1_ParamLimits

0xcae0,	// (0x0001b8c8) vradio_frequency_info_pane_t1

0x52bb,	// (0x000140a3) vradio_tuning_pane_g1

0x52c6,	// (0x000140ae) vradio_tuning_pane_t1

0x9504,	// (0x000182ec) area_side_right_pane_ParamLimits

0x9504,	// (0x000182ec) area_side_right_pane

0xbe79,	// (0x0001ac61) status_small_pane_g1

0xbe81,	// (0x0001ac69) status_small_pane_g2

0xbe8a,	// (0x0001ac72) status_small_pane_g3

0xbe93,	// (0x0001ac7b) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0001e3e0) status_small_pane_g

0xbe9c,	// (0x0001ac84) status_small_pane_t1

0x94d6,	// (0x000182be) main_video3_pane

0xcaf4,	// (0x0001b8dc) cams_zoom_vslider_pane

0xcafc,	// (0x0001b8e4) image3_wide_pane_ParamLimits

0xcafc,	// (0x0001b8e4) image3_wide_pane

0xcb16,	// (0x0001b8fe) image3_wide_small_pane

0xcb22,	// (0x0001b90a) main_video3_pane_g1_ParamLimits

0xcb22,	// (0x0001b90a) main_video3_pane_g1

0xcb3e,	// (0x0001b926) main_video3_pane_g2_ParamLimits

0xcb3e,	// (0x0001b926) main_video3_pane_g2

0x0001,

0xf848,	// (0x0001e630) main_video3_pane_g_ParamLimits

0xf848,	// (0x0001e630) main_video3_pane_g

0xcb5a,	// (0x0001b942) main_video3_pane_t1_ParamLimits

0xcb5a,	// (0x0001b942) main_video3_pane_t1

0xcb85,	// (0x0001b96d) main_video3_pane_t2_ParamLimits

0xcb85,	// (0x0001b96d) main_video3_pane_t2

0xcbb0,	// (0x0001b998) main_video3_pane_t3_ParamLimits

0xcbb0,	// (0x0001b998) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0001e635) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0001e635) main_video3_pane_t

0xcbdd,	// (0x0001b9c5) cams_zoom_vslider_pane_g1

0xcbe6,	// (0x0001b9ce) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0001e63c) cams_zoom_vslider_pane_g

0xcbee,	// (0x0001b9d6) small_slider_vertical_pane

0xc3d9,	// (0x0001b1c1) small_slider_vertical_pane_g1

0xc3d9,	// (0x0001b1c1) small_slider_vertical_pane_g2

0xcbf6,	// (0x0001b9de) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0001e641) small_slider_vertical_pane_g

0x94d6,	// (0x000182be) main_hwr_training_pane

0xcbff,	// (0x0001b9e7) hwr_training_instruct_pane_ParamLimits

0xcbff,	// (0x0001b9e7) hwr_training_instruct_pane

0x52d5,	// (0x000140bd) hwr_training_navi_pane_ParamLimits

0x52d5,	// (0x000140bd) hwr_training_navi_pane

0x52f4,	// (0x000140dc) hwr_training_write_pane_ParamLimits

0x52f4,	// (0x000140dc) hwr_training_write_pane

0x94d6,	// (0x000182be) bg_frame_shadow_pane

0xcc36,	// (0x0001ba1e) hwr_training_write_pane_g1

0xcc3e,	// (0x0001ba26) hwr_training_write_pane_g2

0xcc46,	// (0x0001ba2e) hwr_training_write_pane_g3

0xcc4e,	// (0x0001ba36) hwr_training_write_pane_g4

0xcc56,	// (0x0001ba3e) hwr_training_write_pane_g5

0xcc5e,	// (0x0001ba46) hwr_training_write_pane_g6

0xcc66,	// (0x0001ba4e) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0001e648) hwr_training_write_pane_g

0xcc6e,	// (0x0001ba56) hwr_training_navi_pane_g1_ParamLimits

0xcc6e,	// (0x0001ba56) hwr_training_navi_pane_g1

0xcc80,	// (0x0001ba68) hwr_training_navi_pane_g2_ParamLimits

0xcc80,	// (0x0001ba68) hwr_training_navi_pane_g2

0xcc92,	// (0x0001ba7a) hwr_training_navi_pane_g3_ParamLimits

0xcc92,	// (0x0001ba7a) hwr_training_navi_pane_g3

0xcca2,	// (0x0001ba8a) hwr_training_navi_pane_g4_ParamLimits

0xcca2,	// (0x0001ba8a) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0001e657) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0001e657) hwr_training_navi_pane_g

0xccaf,	// (0x0001ba97) hwr_training_navi_pane_t1

0x533c,	// (0x00014124) list_single_hwr_training_instruct_pane_ParamLimits

0x533c,	// (0x00014124) list_single_hwr_training_instruct_pane

0xccbd,	// (0x0001baa5) list_single_hwr_training_instruct_pane_t1

0xc319,	// (0x0001b101) bg_frame_shadow_pane_g1

0xcccc,	// (0x0001bab4) bg_frame_shadow_pane_g2

0xccd4,	// (0x0001babc) bg_frame_shadow_pane_g3

0xccdc,	// (0x0001bac4) bg_frame_shadow_pane_g4

0xcce4,	// (0x0001bacc) bg_frame_shadow_pane_g5

0xccec,	// (0x0001bad4) bg_frame_shadow_pane_g6

0xccf4,	// (0x0001badc) bg_frame_shadow_pane_g7

0x9d86,	// (0x00018b6e) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0001e662) bg_frame_shadow_pane_g

0x94d6,	// (0x000182be) main_video_tele_dialer_pane

0x5351,	// (0x00014139) aid_size_cell_video_keypad_ParamLimits

0x5351,	// (0x00014139) aid_size_cell_video_keypad

0x536b,	// (0x00014153) grid_video_dialer_keypad_pane_ParamLimits

0x536b,	// (0x00014153) grid_video_dialer_keypad_pane

0x53b7,	// (0x0001419f) video_down_pane_cp_ParamLimits

0x53b7,	// (0x0001419f) video_down_pane_cp

0x53e9,	// (0x000141d1) cell_video_dialer_keypad_pane_ParamLimits

0x53e9,	// (0x000141d1) cell_video_dialer_keypad_pane

0xccfc,	// (0x0001bae4) bg_button_pane_cp08_ParamLimits

0xccfc,	// (0x0001bae4) bg_button_pane_cp08

0x540b,	// (0x000141f3) cell_video_dialer_keypad_pane_g1_ParamLimits

0x540b,	// (0x000141f3) cell_video_dialer_keypad_pane_g1

0x4abc,	// (0x000138a4) mup3_rocker2_pane_ParamLimits

0x4abc,	// (0x000138a4) mup3_rocker2_pane

0xc3d9,	// (0x0001b1c1) mup3_rocker2_pane_g1

0x3599,	// (0x00012381) main_dialer2_pane

0x94d6,	// (0x000182be) main_mp4_pane

0xcd10,	// (0x0001baf8) main_mp4_pane_g1_ParamLimits

0xcd10,	// (0x0001baf8) main_mp4_pane_g1

0xcd10,	// (0x0001baf8) main_mp4_pane_g2_ParamLimits

0xcd10,	// (0x0001baf8) main_mp4_pane_g2

0x5442,	// (0x0001422a) main_mp4_pane_g3_ParamLimits

0x5442,	// (0x0001422a) main_mp4_pane_g3

0xcd1e,	// (0x0001bb06) main_mp4_pane_g4_ParamLimits

0xcd1e,	// (0x0001bb06) main_mp4_pane_g4

0xcd46,	// (0x0001bb2e) main_mp4_pane_g5_ParamLimits

0xcd46,	// (0x0001bb2e) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0001e682) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0001e682) main_mp4_pane_g

0xcd96,	// (0x0001bb7e) main_mp4_pane_t1_ParamLimits

0xcd96,	// (0x0001bb7e) main_mp4_pane_t1

0xcdf2,	// (0x0001bbda) main_mp4_pane_t2_ParamLimits

0xcdf2,	// (0x0001bbda) main_mp4_pane_t2

0xce44,	// (0x0001bc2c) main_mp4_pane_t3_ParamLimits

0xce44,	// (0x0001bc2c) main_mp4_pane_t3

0xce64,	// (0x0001bc4c) main_mp4_pane_t4_ParamLimits

0xce64,	// (0x0001bc4c) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0001e68f) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0001e68f) main_mp4_pane_t

0xcea8,	// (0x0001bc90) mp4_progress_pane_ParamLimits

0xcea8,	// (0x0001bc90) mp4_progress_pane

0xcef2,	// (0x0001bcda) mp4_rocker_pane_ParamLimits

0xcef2,	// (0x0001bcda) mp4_rocker_pane

0xcf1a,	// (0x0001bd02) mp4_progress_pane_t1

0xcf33,	// (0x0001bd1b) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0001e698) mp4_progress_pane_t

0xcf4c,	// (0x0001bd34) mup_progress_pane_cp04

0xc3d9,	// (0x0001b1c1) mp4_rocker_pane_g1

0x547e,	// (0x00014266) aid_cell_size_keypad2_ParamLimits

0x547e,	// (0x00014266) aid_cell_size_keypad2

0x5494,	// (0x0001427c) dialer2_ne_pane_ParamLimits

0x5494,	// (0x0001427c) dialer2_ne_pane

0x54ae,	// (0x00014296) grid_dialer2_keypad_pane_ParamLimits

0x54ae,	// (0x00014296) grid_dialer2_keypad_pane

0xc1be,	// (0x0001afa6) bg_popup_call_pane_cp07_ParamLimits

0xc1be,	// (0x0001afa6) bg_popup_call_pane_cp07

0x54ca,	// (0x000142b2) dialer2_ne_pane_t1_ParamLimits

0x54ca,	// (0x000142b2) dialer2_ne_pane_t1

0x5505,	// (0x000142ed) cell_dialer2_keypad_pane_ParamLimits

0x5505,	// (0x000142ed) cell_dialer2_keypad_pane

0xcf6a,	// (0x0001bd52) bg_button_pane_pane_cp04_ParamLimits

0xcf6a,	// (0x0001bd52) bg_button_pane_pane_cp04

0x5527,	// (0x0001430f) cell_dialer2_keypad_pane_g1_ParamLimits

0x5527,	// (0x0001430f) cell_dialer2_keypad_pane_g1

0x137c,	// (0x00010164) aid_placing_vt_set_content_ParamLimits

0x137c,	// (0x00010164) aid_placing_vt_set_content

0x13a4,	// (0x0001018c) aid_placing_vt_set_title_ParamLimits

0x13a4,	// (0x0001018c) aid_placing_vt_set_title

0x94d6,	// (0x000182be) main_image3_pane

0x55ed,	// (0x000143d5) area_side_right_pane_cp01_ParamLimits

0x55ed,	// (0x000143d5) area_side_right_pane_cp01

0xcd10,	// (0x0001baf8) main_image3_pane_g1_ParamLimits

0xcd10,	// (0x0001baf8) main_image3_pane_g1

0x5604,	// (0x000143ec) main_image3_pane_g2_ParamLimits

0x5604,	// (0x000143ec) main_image3_pane_g2

0x562c,	// (0x00014414) main_image3_pane_g3_ParamLimits

0x562c,	// (0x00014414) main_image3_pane_g3

0x5656,	// (0x0001443e) main_image3_pane_g4_ParamLimits

0x5656,	// (0x0001443e) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0001e6a7) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0001e6a7) main_image3_pane_g

0x5680,	// (0x00014468) main_image3_pane_t1_ParamLimits

0x5680,	// (0x00014468) main_image3_pane_t1

0x56d8,	// (0x000144c0) main_image3_pane_t2_ParamLimits

0x56d8,	// (0x000144c0) main_image3_pane_t2

0x572a,	// (0x00014512) main_image3_pane_t3_ParamLimits

0x572a,	// (0x00014512) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0001e6b0) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0001e6b0) main_image3_pane_t

0x9546,	// (0x0001832e) grid_sctrl_middle_pane_cp01_ParamLimits

0x9546,	// (0x0001832e) grid_sctrl_middle_pane_cp01

0x57b2,	// (0x0001459a) cell_sctrl_middle_pane_cp01_ParamLimits

0x57b2,	// (0x0001459a) cell_sctrl_middle_pane_cp01

0x57cf,	// (0x000145b7) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x57cf,	// (0x000145b7) cell_sctrl_middle_pane_cp01_g1

0x94d6,	// (0x000182be) main_call4_pane

0x57e5,	// (0x000145cd) aid_size_button_call4_ParamLimits

0x57e5,	// (0x000145cd) aid_size_button_call4

0x5816,	// (0x000145fe) call4_windows_pane_ParamLimits

0x5816,	// (0x000145fe) call4_windows_pane

0x5836,	// (0x0001461e) grid_call4_button_pane_ParamLimits

0x5836,	// (0x0001461e) grid_call4_button_pane

0xcfa8,	// (0x0001bd90) call4_windows_conf_pane

0xcfbf,	// (0x0001bda7) popup_call4_audio_first_window_ParamLimits

0xcfbf,	// (0x0001bda7) popup_call4_audio_first_window

0xd007,	// (0x0001bdef) popup_call4_audio_second_window_ParamLimits

0xd007,	// (0x0001bdef) popup_call4_audio_second_window

0xd020,	// (0x0001be08) popup_call4_audio_wait_window_ParamLimits

0xd020,	// (0x0001be08) popup_call4_audio_wait_window

0x5863,	// (0x0001464b) cell_call4_button_pane_ParamLimits

0x5863,	// (0x0001464b) cell_call4_button_pane

0x588c,	// (0x00014674) bg_button_pane_cp09_ParamLimits

0x588c,	// (0x00014674) bg_button_pane_cp09

0x5898,	// (0x00014680) cell_call4_button_pane_g1_ParamLimits

0x5898,	// (0x00014680) cell_call4_button_pane_g1

0x58be,	// (0x000146a6) cell_call4_button_pane_t1_ParamLimits

0x58be,	// (0x000146a6) cell_call4_button_pane_t1

0xd068,	// (0x0001be50) popup_call4_audio_conf_window_ParamLimits

0xd068,	// (0x0001be50) popup_call4_audio_conf_window

0x4b1c,	// (0x00013904) mup3_progress_pane_t1_ParamLimits

0x4b3b,	// (0x00013923) mup3_progress_pane_t2_ParamLimits

0xc6ec,	// (0x0001b4d4) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0001e584) mup3_progress_pane_t_ParamLimits

0xc709,	// (0x0001b4f1) mup_progress_pane_cp03_ParamLimits

0x511b,	// (0x00013f03) mup3_control_keys_pane_g4_copy1

0xced6,	// (0x0001bcbe) mp4_rocker2_pane_ParamLimits

0xced6,	// (0x0001bcbe) mp4_rocker2_pane

0xd07c,	// (0x0001be64) mp4_rocker2_pane_g1

0xd084,	// (0x0001be6c) mp4_rocker2_pane_g2

0xd08c,	// (0x0001be74) mp4_rocker2_pane_g3

0xd094,	// (0x0001be7c) mp4_rocker2_pane_g4

0xd09c,	// (0x0001be84) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0001e6b9) mp4_rocker2_pane_g

0x94d6,	// (0x000182be) main_camera4_pane

0x94d6,	// (0x000182be) main_video4_pane

0x5385,	// (0x0001416d) main_video_tele_dialer_pane_t1_ParamLimits

0x5385,	// (0x0001416d) main_video_tele_dialer_pane_t1

0x539e,	// (0x00014186) main_video_tele_dialer_pane_t2_ParamLimits

0x539e,	// (0x00014186) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0001e673) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0001e673) main_video_tele_dialer_pane_t

0x58fc,	// (0x000146e4) cam4_autofocus_pane_ParamLimits

0x58fc,	// (0x000146e4) cam4_autofocus_pane

0x5912,	// (0x000146fa) cam4_image_uncrop_pane_ParamLimits

0x5912,	// (0x000146fa) cam4_image_uncrop_pane

0x592c,	// (0x00014714) cam4_indicators_pane_ParamLimits

0x592c,	// (0x00014714) cam4_indicators_pane

0x5957,	// (0x0001473f) main_camera4_pane_g1_ParamLimits

0x5957,	// (0x0001473f) main_camera4_pane_g1

0x5969,	// (0x00014751) main_camera4_pane_g2_ParamLimits

0x5969,	// (0x00014751) main_camera4_pane_g2

0x597c,	// (0x00014764) main_camera4_pane_g3_ParamLimits

0x597c,	// (0x00014764) main_camera4_pane_g3

0x598f,	// (0x00014777) main_camera4_pane_g4_ParamLimits

0x598f,	// (0x00014777) main_camera4_pane_g4

0x59a2,	// (0x0001478a) main_camera4_pane_g5_ParamLimits

0x59a2,	// (0x0001478a) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0001e6c4) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0001e6c4) main_camera4_pane_g

0x59c6,	// (0x000147ae) main_camera4_pane_t1_ParamLimits

0x59c6,	// (0x000147ae) main_camera4_pane_t1

0xc645,	// (0x0001b42d) bg_tb_trans_pane_cp06

0xd0c8,	// (0x0001beb0) cam4_indicators_pane_g1

0xd0d9,	// (0x0001bec1) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0001e6df) cam4_indicators_pane_g

0xd0f7,	// (0x0001bedf) cam4_indicators_pane_t1

0x5a2a,	// (0x00014812) main_video4_pane_g1_ParamLimits

0x5a2a,	// (0x00014812) main_video4_pane_g1

0x5a39,	// (0x00014821) main_video4_pane_g2_ParamLimits

0x5a39,	// (0x00014821) main_video4_pane_g2

0x5a48,	// (0x00014830) main_video4_pane_g3_ParamLimits

0x5a48,	// (0x00014830) main_video4_pane_g3

0x5a57,	// (0x0001483f) main_video4_pane_g4_ParamLimits

0x5a57,	// (0x0001483f) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0001e6e6) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0001e6e6) main_video4_pane_g

0x5a75,	// (0x0001485d) vid4_indicators_pane_ParamLimits

0x5a75,	// (0x0001485d) vid4_indicators_pane

0x5aa3,	// (0x0001488b) video4_image_uncrop_cif_pane_ParamLimits

0x5aa3,	// (0x0001488b) video4_image_uncrop_cif_pane

0x5abd,	// (0x000148a5) video4_image_uncrop_nhd_pane_ParamLimits

0x5abd,	// (0x000148a5) video4_image_uncrop_nhd_pane

0x5912,	// (0x000146fa) video4_image_uncrop_vga_pane_ParamLimits

0x5912,	// (0x000146fa) video4_image_uncrop_vga_pane

0x9546,	// (0x0001832e) bg_tb_trans_pane_cp07

0xd123,	// (0x0001bf0b) vid4_indicators_pane_g1

0xd137,	// (0x0001bf1f) vid4_indicators_pane_g2

0xd14b,	// (0x0001bf33) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0001e6f1) vid4_indicators_pane_g

0xd17a,	// (0x0001bf62) vid4_indicators_pane_t1

0x5ad1,	// (0x000148b9) cam4_autofocus_pane_g1

0x5ad9,	// (0x000148c1) cam4_autofocus_pane_g2

0x5ae1,	// (0x000148c9) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0001e6fc) cam4_autofocus_pane_g

0x5ae9,	// (0x000148d1) cam4_autofocus_pane_g3_copy1

0x53cd,	// (0x000141b5) video_down_pane_cp_t1

0x53db,	// (0x000141c3) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0001e678) video_down_pane_cp_t

0x9546,	// (0x0001832e) popup_vitu2_window_ParamLimits

0x9546,	// (0x0001832e) popup_vitu2_window

0x5af1,	// (0x000148d9) aid_size_cell2_itu2_ParamLimits

0x5af1,	// (0x000148d9) aid_size_cell2_itu2

0x5b17,	// (0x000148ff) aid_size_cell_itu2_ParamLimits

0x5b17,	// (0x000148ff) aid_size_cell_itu2

0x5b73,	// (0x0001495b) bg_popup_window_pane_cp09_ParamLimits

0x5b73,	// (0x0001495b) bg_popup_window_pane_cp09

0x5b81,	// (0x00014969) field_vitu2_entry_pane_ParamLimits

0x5b81,	// (0x00014969) field_vitu2_entry_pane

0x5ba7,	// (0x0001498f) grid_vitu2_function_pane_ParamLimits

0x5ba7,	// (0x0001498f) grid_vitu2_function_pane

0x5bf8,	// (0x000149e0) grid_vitu2_itu_pane_ParamLimits

0x5bf8,	// (0x000149e0) grid_vitu2_itu_pane

0x5c90,	// (0x00014a78) cell_vitu2_itu_pane_ParamLimits

0x5c90,	// (0x00014a78) cell_vitu2_itu_pane

0x5cbc,	// (0x00014aa4) cell_vitu2_function_pane_ParamLimits

0x5cbc,	// (0x00014aa4) cell_vitu2_function_pane

0xd191,	// (0x0001bf79) bg_popup_call_pane_cp08_ParamLimits

0xd191,	// (0x0001bf79) bg_popup_call_pane_cp08

0xd1a8,	// (0x0001bf90) field_vitu2_entry_pane_g1

0xd1b4,	// (0x0001bf9c) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0001e703) field_vitu2_entry_pane_g

0x5cfb,	// (0x00014ae3) field_vitu2_entry_pane_t1_ParamLimits

0x5cfb,	// (0x00014ae3) field_vitu2_entry_pane_t1

0xd1ce,	// (0x0001bfb6) field_vitu2_entry_pane_t2_ParamLimits

0xd1ce,	// (0x0001bfb6) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0001e70a) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0001e70a) field_vitu2_entry_pane_t

0x5d2a,	// (0x00014b12) bg_button_pane_cp010_ParamLimits

0x5d2a,	// (0x00014b12) bg_button_pane_cp010

0xd1f3,	// (0x0001bfdb) cell_vitu2_itu_pane_g1

0x5d46,	// (0x00014b2e) cell_vitu2_itu_pane_t1_ParamLimits

0x5d46,	// (0x00014b2e) cell_vitu2_itu_pane_t1

0x5da4,	// (0x00014b8c) cell_vitu2_itu_pane_t2_ParamLimits

0x5da4,	// (0x00014b8c) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0001e714) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0001e714) cell_vitu2_itu_pane_t

0x9546,	// (0x0001832e) bg_button_pane_cp011

0x5e90,	// (0x00014c78) cell_vitu2_function_pane_g1

0x94d6,	// (0x000182be) main_myfav_hc_pane

0x577a,	// (0x00014562) popup_image3_note_pane_ParamLimits

0x577a,	// (0x00014562) popup_image3_note_pane

0x5796,	// (0x0001457e) popup_image3_tool_bar_pane_ParamLimits

0x5796,	// (0x0001457e) popup_image3_tool_bar_pane

0x5e32,	// (0x00014c1a) cell_vitu2_itu_pane_t3_ParamLimits

0x5e32,	// (0x00014c1a) cell_vitu2_itu_pane_t3

0x94d6,	// (0x000182be) bg_popup_trans_pane

0xd205,	// (0x0001bfed) grid_image3_tool_bar_pane

0xd20f,	// (0x0001bff7) bg_popup_trans_pane_g1

0xa13d,	// (0x00018f25) bg_popup_trans_pane_g2

0xd217,	// (0x0001bfff) bg_popup_trans_pane_g3

0xd21f,	// (0x0001c007) bg_popup_trans_pane_g4

0xd227,	// (0x0001c00f) bg_popup_trans_pane_g5

0xd22f,	// (0x0001c017) bg_popup_trans_pane_g6

0xd237,	// (0x0001c01f) bg_popup_trans_pane_g7

0xd23f,	// (0x0001c027) bg_popup_trans_pane_g8

0xa11d,	// (0x00018f05) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0001e71b) bg_popup_trans_pane_g

0xd247,	// (0x0001c02f) cell_image3_tool_bar_pane_ParamLimits

0xd247,	// (0x0001c02f) cell_image3_tool_bar_pane

0xc3d9,	// (0x0001b1c1) cell_image3_tool_bar_pane_g1

0x94d6,	// (0x000182be) bg_popup_trans_pane_cp1

0xd25b,	// (0x0001c043) popup_image3_note_pane_t1

0xd269,	// (0x0001c051) popup_image3_note_pane_t2

0xd277,	// (0x0001c05f) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0001e72e) popup_image3_note_pane_t

0xd285,	// (0x0001c06d) popup_image3_note_pane_t3_copy1

0x5ea4,	// (0x00014c8c) bg_myfav_hc_instruction_pane_ParamLimits

0x5ea4,	// (0x00014c8c) bg_myfav_hc_instruction_pane

0x5eb8,	// (0x00014ca0) cell_myfav_contact_pane_ParamLimits

0x5eb8,	// (0x00014ca0) cell_myfav_contact_pane

0x5ed6,	// (0x00014cbe) cell_myfav_contact_pane_cp1_ParamLimits

0x5ed6,	// (0x00014cbe) cell_myfav_contact_pane_cp1

0x5eee,	// (0x00014cd6) cell_myfav_contact_pane_cp2_ParamLimits

0x5eee,	// (0x00014cd6) cell_myfav_contact_pane_cp2

0x5f06,	// (0x00014cee) cell_myfav_contact_pane_cp3_ParamLimits

0x5f06,	// (0x00014cee) cell_myfav_contact_pane_cp3

0x5f1d,	// (0x00014d05) cell_myfav_contact_pane_cp4_ParamLimits

0x5f1d,	// (0x00014d05) cell_myfav_contact_pane_cp4

0x5f35,	// (0x00014d1d) cell_myfav_contact_pane_cp5_ParamLimits

0x5f35,	// (0x00014d1d) cell_myfav_contact_pane_cp5

0x5f49,	// (0x00014d31) cell_myfav_contact_pane_cp6_ParamLimits

0x5f49,	// (0x00014d31) cell_myfav_contact_pane_cp6

0x5f5f,	// (0x00014d47) cell_myfav_contact_pane_cp7_ParamLimits

0x5f5f,	// (0x00014d47) cell_myfav_contact_pane_cp7

0xd293,	// (0x0001c07b) listscroll_gen_pane_cp05

0x5f79,	// (0x00014d61) main_myfav_hc_pane_g1_ParamLimits

0x5f79,	// (0x00014d61) main_myfav_hc_pane_g1

0x5f93,	// (0x00014d7b) main_myfav_hc_pane_g2_ParamLimits

0x5f93,	// (0x00014d7b) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0001e735) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0001e735) main_myfav_hc_pane_g

0x5fc5,	// (0x00014dad) main_myfav_hc_pane_t1_ParamLimits

0x5fc5,	// (0x00014dad) main_myfav_hc_pane_t1

0xd29c,	// (0x0001c084) main_myfav_hc_pane_t2_ParamLimits

0xd29c,	// (0x0001c084) main_myfav_hc_pane_t2

0xd2ae,	// (0x0001c096) main_myfav_hc_pane_t3_ParamLimits

0xd2ae,	// (0x0001c096) main_myfav_hc_pane_t3

0x5fdc,	// (0x00014dc4) main_myfav_hc_pane_t4_ParamLimits

0x5fdc,	// (0x00014dc4) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0001e73c) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0001e73c) main_myfav_hc_pane_t

0xc3d9,	// (0x0001b1c1) bg_myfav_hc_instruction_pane_g1

0xd2c0,	// (0x0001c0a8) cell_myfav_contact_pane_g1_ParamLimits

0xd2c0,	// (0x0001c0a8) cell_myfav_contact_pane_g1

0xd2c0,	// (0x0001c0a8) cell_myfav_contact_pane_g2_ParamLimits

0xd2c0,	// (0x0001c0a8) cell_myfav_contact_pane_g2

0xd2cc,	// (0x0001c0b4) cell_myfav_contact_pane_g3_ParamLimits

0xd2cc,	// (0x0001c0b4) cell_myfav_contact_pane_g3

0xc6d6,	// (0x0001b4be) cell_myfav_contact_pane_g4_ParamLimits

0xc6d6,	// (0x0001b4be) cell_myfav_contact_pane_g4

0xd30f,	// (0x0001c0f7) cell_myfav_contact_pane_g5_ParamLimits

0xd30f,	// (0x0001c0f7) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0001e747) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0001e747) cell_myfav_contact_pane_g

0x5fad,	// (0x00014d95) main_myfav_hc_pane_g3_ParamLimits

0x5fad,	// (0x00014d95) main_myfav_hc_pane_g3

0x03a8,	// (0x0000f190) popup_adpt_find_window

0x6004,	// (0x00014dec) afind_page_pane_ParamLimits

0x6004,	// (0x00014dec) afind_page_pane

0x6019,	// (0x00014e01) aid_size_cell_afind_ParamLimits

0x6019,	// (0x00014e01) aid_size_cell_afind

0x6037,	// (0x00014e1f) bg_popup_sub_pane_cp09_ParamLimits

0x6037,	// (0x00014e1f) bg_popup_sub_pane_cp09

0x6044,	// (0x00014e2c) find_pane_cp01_ParamLimits

0x6044,	// (0x00014e2c) find_pane_cp01

0xd31b,	// (0x0001c103) grid_afind_control_pane_ParamLimits

0xd31b,	// (0x0001c103) grid_afind_control_pane

0x6051,	// (0x00014e39) grid_afind_pane_ParamLimits

0x6051,	// (0x00014e39) grid_afind_pane

0x6073,	// (0x00014e5b) cell_afind_pane_ParamLimits

0x6073,	// (0x00014e5b) cell_afind_pane

0xc3d9,	// (0x0001b1c1) afind_page_pane_g1

0x60da,	// (0x00014ec2) afind_page_pane_g2

0x60e3,	// (0x00014ecb) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0001e752) afind_page_pane_g

0x60ec,	// (0x00014ed4) afind_page_pane_t1

0xd32f,	// (0x0001c117) cell_afind_grid_control_pane_ParamLimits

0xd32f,	// (0x0001c117) cell_afind_grid_control_pane

0xcf6a,	// (0x0001bd52) bg_button_pane_cp69_ParamLimits

0xcf6a,	// (0x0001bd52) bg_button_pane_cp69

0x610c,	// (0x00014ef4) cell_afind_pane_g1_ParamLimits

0x610c,	// (0x00014ef4) cell_afind_pane_g1

0x6119,	// (0x00014f01) cell_afind_pane_t1_ParamLimits

0x6119,	// (0x00014f01) cell_afind_pane_t1

0x9f36,	// (0x00018d1e) bg_button_pane_cp72

0xd33e,	// (0x0001c126) cell_afind_grid_control_pane_g1

0x3059,	// (0x00011e41) aid_image_placing_area_ParamLimits

0x3059,	// (0x00011e41) aid_image_placing_area

0xc9ff,	// (0x0001b7e7) field_vitu_entry_pane_g1_ParamLimits

0xc9ff,	// (0x0001b7e7) field_vitu_entry_pane_g1

0xca0b,	// (0x0001b7f3) field_vitu_entry_pane_g2_ParamLimits

0xca0b,	// (0x0001b7f3) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0001e603) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0001e603) field_vitu_entry_pane_g

0x51e2,	// (0x00013fca) cell_vitu_itu_pane_g1_ParamLimits

0x5224,	// (0x0001400c) cell_vitu_itu_pane_t3_ParamLimits

0x5224,	// (0x0001400c) cell_vitu_itu_pane_t3

0xcf1a,	// (0x0001bd02) mp4_progress_pane_t1_ParamLimits

0xcf33,	// (0x0001bd1b) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0001e698) mp4_progress_pane_t_ParamLimits

0xcf4c,	// (0x0001bd34) mup_progress_pane_cp04_ParamLimits

0x5ff0,	// (0x00014dd8) main_myfav_hc_pane_t5_ParamLimits

0x5ff0,	// (0x00014dd8) main_myfav_hc_pane_t5

0x94fc,	// (0x000182e4) aid_zoom_text_primary

0x03a8,	// (0x0000f190) popup_adpt_find_window_ParamLimits

0x9546,	// (0x0001832e) main_cam_set_pane

0x5943,	// (0x0001472b) cam4_zoom_pane_ParamLimits

0x5943,	// (0x0001472b) cam4_zoom_pane

0x612b,	// (0x00014f13) main_cam_set_pane_g1_ParamLimits

0x612b,	// (0x00014f13) main_cam_set_pane_g1

0x6139,	// (0x00014f21) main_cam_set_pane_g2_ParamLimits

0x6139,	// (0x00014f21) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0001e759) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0001e759) main_cam_set_pane_g

0x615a,	// (0x00014f42) main_cam_set_pane_t1_ParamLimits

0x615a,	// (0x00014f42) main_cam_set_pane_t1

0x6175,	// (0x00014f5d) main_cset_listscroll_pane_ParamLimits

0x6175,	// (0x00014f5d) main_cset_listscroll_pane

0x6195,	// (0x00014f7d) main_cset_slider_pane_ParamLimits

0x6195,	// (0x00014f7d) main_cset_slider_pane

0xd34f,	// (0x0001c137) main_cset_list_pane_ParamLimits

0xd34f,	// (0x0001c137) main_cset_list_pane

0xd35f,	// (0x0001c147) scroll_pane_cp028

0x61bb,	// (0x00014fa3) aid_area_touch_slider

0x61d7,	// (0x00014fbf) cset_slider_pane

0x6201,	// (0x00014fe9) main_cset_slider_pane_g1

0x6216,	// (0x00014ffe) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0001e75e) main_cset_slider_pane_g

0xd398,	// (0x0001c180) main_cset_slider_pane_t1

0x62d2,	// (0x000150ba) main_cset_slider_pane_t2

0x62ec,	// (0x000150d4) main_cset_slider_pane_t3

0x6306,	// (0x000150ee) main_cset_slider_pane_t4

0x6320,	// (0x00015108) main_cset_slider_pane_t5

0x633a,	// (0x00015122) main_cset_slider_pane_t6

0x634f,	// (0x00015137) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0001e783) main_cset_slider_pane_t

0x6453,	// (0x0001523b) cset_list_set_pane_ParamLimits

0x6453,	// (0x0001523b) cset_list_set_pane

0x6465,	// (0x0001524d) aid_position_infowindow_above

0x646d,	// (0x00015255) aid_position_infowindow_below

0xd438,	// (0x0001c220) cset_list_set_pane_g1_ParamLimits

0xd438,	// (0x0001c220) cset_list_set_pane_g1

0xd444,	// (0x0001c22c) cset_list_set_pane_g3_ParamLimits

0xd444,	// (0x0001c22c) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0001e7a2) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0001e7a2) cset_list_set_pane_g

0xd453,	// (0x0001c23b) cset_list_set_pane_t1_ParamLimits

0xd453,	// (0x0001c23b) cset_list_set_pane_t1

0x9546,	// (0x0001832e) list_highlight_pane_cp021_ParamLimits

0x9546,	// (0x0001832e) list_highlight_pane_cp021

0xab39,	// (0x00019921) cset_slider_pane_g1

0xab4b,	// (0x00019933) cset_slider_pane_g2

0xab42,	// (0x0001992a) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0001e7a7) cset_slider_pane_g

0xd468,	// (0x0001c250) aid_area_touch_cam4_zoom

0xd470,	// (0x0001c258) cam4_zoom_cont_pane

0xd478,	// (0x0001c260) cam4_zoom_pane_g1

0xd480,	// (0x0001c268) cam4_zoom_pane_g2

0x6475,	// (0x0001525d) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0001e7ae) cam4_zoom_pane_g

0xd488,	// (0x0001c270) cam4_zoom_cont_pane_g1

0xd491,	// (0x0001c279) cam4_zoom_cont_pane_g2

0xd49a,	// (0x0001c282) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0001e7b5) cam4_zoom_cont_pane_g

0x5803,	// (0x000145eb) call4_image_pane_ParamLimits

0x5803,	// (0x000145eb) call4_image_pane

0xcfa8,	// (0x0001bd90) call4_windows_conf_pane_ParamLimits

0xcfe5,	// (0x0001bdcd) popup_call4_audio_in_window_ParamLimits

0xcfe5,	// (0x0001bdcd) popup_call4_audio_in_window

0x94d6,	// (0x000182be) bg_popup_call2_act_pane_cp02

0xd060,	// (0x0001be48) call4_list_conf_pane

0xc3d9,	// (0x0001b1c1) call4_image_pane_g1

0xc3d9,	// (0x0001b1c1) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0001e4c4) call4_image_pane_g

0xd4a3,	// (0x0001c28b) list_single_graphic_popup_conf4_pane_ParamLimits

0xd4a3,	// (0x0001c28b) list_single_graphic_popup_conf4_pane

0x94d6,	// (0x000182be) list_highlight_pane_cp022

0xd4b6,	// (0x0001c29e) list_single_graphic_popup_conf4_pane_g1

0xa6f8,	// (0x000194e0) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0001e7bc) list_single_graphic_popup_conf4_pane_g

0xd4be,	// (0x0001c2a6) list_single_graphic_popup_conf4_pane_t1

0x14c8,	// (0x000102b0) popup_vtel_slider_window_ParamLimits

0x14c8,	// (0x000102b0) popup_vtel_slider_window

0xcf58,	// (0x0001bd40) dialer2_ne_pane_t2_ParamLimits

0xcf58,	// (0x0001bd40) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0001e69d) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0001e69d) dialer2_ne_pane_t

0xc1be,	// (0x0001afa6) bg_popup_sub_pane_cp010_ParamLimits

0xc1be,	// (0x0001afa6) bg_popup_sub_pane_cp010

0x647d,	// (0x00015265) popup_vtel_slider_window_g1_ParamLimits

0x647d,	// (0x00015265) popup_vtel_slider_window_g1

0x6490,	// (0x00015278) popup_vtel_slider_window_g2_ParamLimits

0x6490,	// (0x00015278) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0001e7c1) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0001e7c1) popup_vtel_slider_window_g

0x64e6,	// (0x000152ce) vtel_slider_pane_ParamLimits

0x64e6,	// (0x000152ce) vtel_slider_pane

0x6508,	// (0x000152f0) vtel_slider_pane_g1_ParamLimits

0x6508,	// (0x000152f0) vtel_slider_pane_g1

0x651c,	// (0x00015304) vtel_slider_pane_g2_ParamLimits

0x651c,	// (0x00015304) vtel_slider_pane_g2

0x6534,	// (0x0001531c) vtel_slider_pane_g3_ParamLimits

0x6534,	// (0x0001531c) vtel_slider_pane_g3

0x6508,	// (0x000152f0) vtel_slider_pane_g4_ParamLimits

0x6508,	// (0x000152f0) vtel_slider_pane_g4

0x654a,	// (0x00015332) vtel_slider_pane_g5_ParamLimits

0x654a,	// (0x00015332) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0001e7ca) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0001e7ca) vtel_slider_pane_g

0x9546,	// (0x0001832e) main_gallery2_pane

0x5b43,	// (0x0001492b) aid_size_row_itut2_dropdow_list_ParamLimits

0x5b43,	// (0x0001492b) aid_size_row_itut2_dropdow_list

0x5bcf,	// (0x000149b7) grid_vitu2_function_top_pane_ParamLimits

0x5bcf,	// (0x000149b7) grid_vitu2_function_top_pane

0x5c39,	// (0x00014a21) popup_vitu2_dropdown_list_window_ParamLimits

0x5c39,	// (0x00014a21) popup_vitu2_dropdown_list_window

0x5c62,	// (0x00014a4a) popup_vitu2_match_list_window

0x656e,	// (0x00015356) cell_vitu2_function_top_pane_ParamLimits

0x656e,	// (0x00015356) cell_vitu2_function_top_pane

0x6586,	// (0x0001536e) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6586,	// (0x0001536e) cell_vitu2_function_top_pane_cp01

0x65a2,	// (0x0001538a) cell_vitu2_function_top_wide_pane_ParamLimits

0x65a2,	// (0x0001538a) cell_vitu2_function_top_wide_pane

0x9546,	// (0x0001832e) bg_button_pane_cp012

0x65be,	// (0x000153a6) cell_vitu2_function_top_pane_g1

0xd4d4,	// (0x0001c2bc) bg_button_pane_cp013_ParamLimits

0xd4d4,	// (0x0001c2bc) bg_button_pane_cp013

0x65d2,	// (0x000153ba) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x65d2,	// (0x000153ba) cell_vitu2_function_top_wide_pane_g1

0x9546,	// (0x0001832e) bg_popup_sub_pane_cp20

0x65ea,	// (0x000153d2) list_vitu2_match_list_pane

0xd20f,	// (0x0001bff7) bg_popup_sub_pane_cp20_g1

0xd217,	// (0x0001bfff) bg_popup_sub_pane_cp20_g2

0xa13d,	// (0x00018f25) bg_popup_sub_pane_cp20_g3

0xd21f,	// (0x0001c007) bg_popup_sub_pane_cp20_g4

0xa11d,	// (0x00018f05) bg_popup_sub_pane_cp20_g5

0xd4f0,	// (0x0001c2d8) bg_popup_sub_pane_cp20_g6

0xd22f,	// (0x0001c017) bg_popup_sub_pane_cp20_g7

0xd237,	// (0x0001c01f) bg_popup_sub_pane_cp20_g8

0xd23f,	// (0x0001c027) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0001e7d5) bg_popup_sub_pane_cp20_g

0xd4f8,	// (0x0001c2e0) list_vitu2_match_list_item_pane_ParamLimits

0xd4f8,	// (0x0001c2e0) list_vitu2_match_list_item_pane

0xd50a,	// (0x0001c2f2) list_vitu2_match_list_item_pane_t1

0x94d6,	// (0x000182be) bg_popup_sub_pane_cp21

0xa5ad,	// (0x00019395) grid_vitu2_dropdown_list_pane

0x6658,	// (0x00015440) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6658,	// (0x00015440) cell_vitu2_dropdown_list_char_pane

0x6679,	// (0x00015461) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6679,	// (0x00015461) cell_vitu2_dropdown_list_ctrl_pane

0xd518,	// (0x0001c300) cell_vitu2_dropdown_list_char_pane_g1

0xd521,	// (0x0001c309) cell_vitu2_dropdown_list_char_pane_g2

0xd52a,	// (0x0001c312) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0001e7f2) cell_vitu2_dropdown_list_char_pane_g

0x66a5,	// (0x0001548d) cell_vitu2_dropdown_list_char_pane_t1

0x66b3,	// (0x0001549b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x66b3,	// (0x0001549b) cell_vitu2_dropdown_list_ctrl_pane_g1

0x66c0,	// (0x000154a8) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x66c0,	// (0x000154a8) cell_vitu2_dropdown_list_ctrl_pane_g2

0x66cd,	// (0x000154b5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x66cd,	// (0x000154b5) cell_vitu2_dropdown_list_ctrl_pane_g3

0x66da,	// (0x000154c2) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x66da,	// (0x000154c2) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc645,	// (0x0001b42d) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc645,	// (0x0001b42d) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0001e7f9) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0001e7f9) cell_vitu2_dropdown_list_ctrl_pane_g

0x66f6,	// (0x000154de) aid_size_cell_gallery2_ParamLimits

0x66f6,	// (0x000154de) aid_size_cell_gallery2

0x6714,	// (0x000154fc) grid_gallery2_pane_ParamLimits

0x6714,	// (0x000154fc) grid_gallery2_pane

0x672e,	// (0x00015516) scroll_pane_cp029_ParamLimits

0x672e,	// (0x00015516) scroll_pane_cp029

0x673f,	// (0x00015527) cell_gallery2_pane_ParamLimits

0x673f,	// (0x00015527) cell_gallery2_pane

0xd533,	// (0x0001c31b) cell_gallery2_pane_g2

0x679e,	// (0x00015586) cell_gallery2_pane_g3

0xd53b,	// (0x0001c323) cell_gallery2_pane_g4

0xd543,	// (0x0001c32b) cell_gallery2_pane_g5

0x9eda,	// (0x00018cc2) grid_highlight_pane_cp10

0x5c62,	// (0x00014a4a) popup_vitu2_match_list_window_ParamLimits

0x5c79,	// (0x00014a61) popup_vitu2_query_window_ParamLimits

0x5c79,	// (0x00014a61) popup_vitu2_query_window

0x94d6,	// (0x000182be) bg_vitu2_candi_button_pane

0xd518,	// (0x0001c300) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd521,	// (0x0001c309) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd52a,	// (0x0001c312) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x67a6,	// (0x0001558e) bg_button_pane_cp015

0x67b8,	// (0x000155a0) bg_button_pane_cp016

0x67cb,	// (0x000155b3) bg_button_pane_cp017

0xbebe,	// (0x0001aca6) bg_popup_sub_pane_cp22

0xd54b,	// (0x0001c333) popup_vitu2_query_window_g1

0x6810,	// (0x000155f8) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0001e804) popup_vitu2_query_window_g

0x682f,	// (0x00015617) popup_vitu2_query_window_t1_ParamLimits

0x682f,	// (0x00015617) popup_vitu2_query_window_t1

0x6864,	// (0x0001564c) popup_vitu2_query_window_t2_ParamLimits

0x6864,	// (0x0001564c) popup_vitu2_query_window_t2

0x6876,	// (0x0001565e) popup_vitu2_query_window_t3_ParamLimits

0x6876,	// (0x0001565e) popup_vitu2_query_window_t3

0x689e,	// (0x00015686) popup_vitu2_query_window_t4_ParamLimits

0x689e,	// (0x00015686) popup_vitu2_query_window_t4

0x68bf,	// (0x000156a7) popup_vitu2_query_window_t5_ParamLimits

0x68bf,	// (0x000156a7) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0001e80b) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0001e80b) popup_vitu2_query_window_t

0xd347,	// (0x0001c12f) main_cset_text_pane

0x61bb,	// (0x00014fa3) aid_area_touch_slider_ParamLimits

0x61d7,	// (0x00014fbf) cset_slider_pane_ParamLimits

0x6201,	// (0x00014fe9) main_cset_slider_pane_g1_ParamLimits

0x6216,	// (0x00014ffe) main_cset_slider_pane_g2_ParamLimits

0xd368,	// (0x0001c150) main_cset_slider_pane_g3_ParamLimits

0xd368,	// (0x0001c150) main_cset_slider_pane_g3

0x622b,	// (0x00015013) main_cset_slider_pane_g4_ParamLimits

0x622b,	// (0x00015013) main_cset_slider_pane_g4

0x623a,	// (0x00015022) main_cset_slider_pane_g5_ParamLimits

0x623a,	// (0x00015022) main_cset_slider_pane_g5

0x6246,	// (0x0001502e) main_cset_slider_pane_g6_ParamLimits

0x6246,	// (0x0001502e) main_cset_slider_pane_g6

0xf976,	// (0x0001e75e) main_cset_slider_pane_g_ParamLimits

0xd398,	// (0x0001c180) main_cset_slider_pane_t1_ParamLimits

0x62d2,	// (0x000150ba) main_cset_slider_pane_t2_ParamLimits

0x62ec,	// (0x000150d4) main_cset_slider_pane_t3_ParamLimits

0x6306,	// (0x000150ee) main_cset_slider_pane_t4_ParamLimits

0x6320,	// (0x00015108) main_cset_slider_pane_t5_ParamLimits

0x633a,	// (0x00015122) main_cset_slider_pane_t6_ParamLimits

0x634f,	// (0x00015137) main_cset_slider_pane_t7_ParamLimits

0x6379,	// (0x00015161) main_cset_slider_pane_t8_ParamLimits

0x6379,	// (0x00015161) main_cset_slider_pane_t8

0x63a1,	// (0x00015189) main_cset_slider_pane_t9_ParamLimits

0x63a1,	// (0x00015189) main_cset_slider_pane_t9

0x63c9,	// (0x000151b1) main_cset_slider_pane_t10_ParamLimits

0x63c9,	// (0x000151b1) main_cset_slider_pane_t10

0x63f1,	// (0x000151d9) main_cset_slider_pane_t11_ParamLimits

0x63f1,	// (0x000151d9) main_cset_slider_pane_t11

0x6419,	// (0x00015201) main_cset_slider_pane_t12_ParamLimits

0x6419,	// (0x00015201) main_cset_slider_pane_t12

0x6436,	// (0x0001521e) main_cset_slider_pane_t13_ParamLimits

0x6436,	// (0x0001521e) main_cset_slider_pane_t13

0xf99b,	// (0x0001e783) main_cset_slider_pane_t_ParamLimits

0x94d6,	// (0x000182be) bg_popup_sub_pane_cp011

0xd557,	// (0x0001c33f) main_cset_text_pane_g1

0xd55f,	// (0x0001c347) main_cset_text_pane_t1

0xd56d,	// (0x0001c355) main_cset_text_pane_t2

0xd57b,	// (0x0001c363) main_cset_text_pane_t3

0xd589,	// (0x0001c371) main_cset_text_pane_t4

0xd597,	// (0x0001c37f) main_cset_text_pane_t5

0xd5a5,	// (0x0001c38d) main_cset_text_pane_t6

0xd5b3,	// (0x0001c39b) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0001e81a) main_cset_text_pane_t

0x94d6,	// (0x000182be) main_cam4_burst_pane

0x94d6,	// (0x000182be) main_cam5_pane

0x60fa,	// (0x00014ee2) bg_button_pane_cp019

0x6103,	// (0x00014eeb) bg_button_pane_cp020

0xd374,	// (0x0001c15c) main_cset_slider_pane_g7_ParamLimits

0xd374,	// (0x0001c15c) main_cset_slider_pane_g7

0xd380,	// (0x0001c168) main_cset_slider_pane_g8_ParamLimits

0xd380,	// (0x0001c168) main_cset_slider_pane_g8

0x625a,	// (0x00015042) main_cset_slider_pane_g9_ParamLimits

0x625a,	// (0x00015042) main_cset_slider_pane_g9

0x6266,	// (0x0001504e) main_cset_slider_pane_g10_ParamLimits

0x6266,	// (0x0001504e) main_cset_slider_pane_g10

0x6272,	// (0x0001505a) main_cset_slider_pane_g11_ParamLimits

0x6272,	// (0x0001505a) main_cset_slider_pane_g11

0x627e,	// (0x00015066) main_cset_slider_pane_g12_ParamLimits

0x627e,	// (0x00015066) main_cset_slider_pane_g12

0x628a,	// (0x00015072) main_cset_slider_pane_g13_ParamLimits

0x628a,	// (0x00015072) main_cset_slider_pane_g13

0x6296,	// (0x0001507e) main_cset_slider_pane_g14_ParamLimits

0x6296,	// (0x0001507e) main_cset_slider_pane_g14

0x62a2,	// (0x0001508a) main_cset_slider_pane_g15_ParamLimits

0x62a2,	// (0x0001508a) main_cset_slider_pane_g15

0xd3c6,	// (0x0001c1ae) main_cset_slider_pane_t14_ParamLimits

0xd3c6,	// (0x0001c1ae) main_cset_slider_pane_t14

0xd3ff,	// (0x0001c1e7) main_cset_slider_pane_t15_ParamLimits

0xd3ff,	// (0x0001c1e7) main_cset_slider_pane_t15

0x6936,	// (0x0001571e) aid_cam4_burst_size_cell_ParamLimits

0x6936,	// (0x0001571e) aid_cam4_burst_size_cell

0x6956,	// (0x0001573e) grid_cam4_burst_pane_ParamLimits

0x6956,	// (0x0001573e) grid_cam4_burst_pane

0x698e,	// (0x00015776) linegrid_cam4_burst_pane_ParamLimits

0x698e,	// (0x00015776) linegrid_cam4_burst_pane

0xd5c1,	// (0x0001c3a9) scroll_pane_cp30_ParamLimits

0xd5c1,	// (0x0001c3a9) scroll_pane_cp30

0x69b2,	// (0x0001579a) cell_cam4_burst_pane_ParamLimits

0x69b2,	// (0x0001579a) cell_cam4_burst_pane

0xd5cd,	// (0x0001c3b5) linegrid_cam4_burst_pane_g1_ParamLimits

0xd5cd,	// (0x0001c3b5) linegrid_cam4_burst_pane_g1

0x69ff,	// (0x000157e7) linegrid_cam4_burst_pane_g2_ParamLimits

0x69ff,	// (0x000157e7) linegrid_cam4_burst_pane_g2

0xd5da,	// (0x0001c3c2) linegrid_cam4_burst_pane_g3_ParamLimits

0xd5da,	// (0x0001c3c2) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0001e829) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0001e829) linegrid_cam4_burst_pane_g

0x6a10,	// (0x000157f8) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6a10,	// (0x000157f8) linegrid_cam4_burst_pane_g3_copy1

0xd5e7,	// (0x0001c3cf) linegrid_cam4_burst_pane_g4_ParamLimits

0xd5e7,	// (0x0001c3cf) linegrid_cam4_burst_pane_g4

0x6a2a,	// (0x00015812) linegrid_cam4_burst_pane_g5_ParamLimits

0x6a2a,	// (0x00015812) linegrid_cam4_burst_pane_g5

0x6a3b,	// (0x00015823) linegrid_cam4_burst_pane_g6_ParamLimits

0x6a3b,	// (0x00015823) linegrid_cam4_burst_pane_g6

0xd5f4,	// (0x0001c3dc) linegrid_cam4_burst_pane_g7_ParamLimits

0xd5f4,	// (0x0001c3dc) linegrid_cam4_burst_pane_g7

0x6a52,	// (0x0001583a) cell_cam4_burst_pane_g1

0xd60d,	// (0x0001c3f5) main_cam5_pane_t1_ParamLimits

0xd60d,	// (0x0001c3f5) main_cam5_pane_t1

0xd61f,	// (0x0001c407) main_cam5_pane_t2_ParamLimits

0xd61f,	// (0x0001c407) main_cam5_pane_t2

0xd631,	// (0x0001c419) main_cam5_pane_t3_ParamLimits

0xd631,	// (0x0001c419) main_cam5_pane_t3

0xd643,	// (0x0001c42b) main_cam5_pane_t4_ParamLimits

0xd643,	// (0x0001c42b) main_cam5_pane_t4

0xd65b,	// (0x0001c443) main_cam5_pane_t5_ParamLimits

0xd65b,	// (0x0001c443) main_cam5_pane_t5

0xd66f,	// (0x0001c457) main_cam5_pane_t6_ParamLimits

0xd66f,	// (0x0001c457) main_cam5_pane_t6

0xd683,	// (0x0001c46b) main_cam5_pane_t7_ParamLimits

0xd683,	// (0x0001c46b) main_cam5_pane_t7

0xd695,	// (0x0001c47d) main_cam5_pane_t8_ParamLimits

0xd695,	// (0x0001c47d) main_cam5_pane_t8

0xd6b1,	// (0x0001c499) main_cam5_pane_t9_ParamLimits

0xd6b1,	// (0x0001c499) main_cam5_pane_t9

0xd6c3,	// (0x0001c4ab) main_cam5_pane_t10_ParamLimits

0xd6c3,	// (0x0001c4ab) main_cam5_pane_t10

0xd6d5,	// (0x0001c4bd) main_cam5_pane_t11_ParamLimits

0xd6d5,	// (0x0001c4bd) main_cam5_pane_t11

0xd6e7,	// (0x0001c4cf) main_cam5_pane_t12_ParamLimits

0xd6e7,	// (0x0001c4cf) main_cam5_pane_t12

0xd6fc,	// (0x0001c4e4) main_cam5_pane_t13_ParamLimits

0xd6fc,	// (0x0001c4e4) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0001e835) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0001e835) main_cam5_pane_t

0x042a,	// (0x0000f212) popup_scut_keymap_window_ParamLimits

0x042a,	// (0x0000f212) popup_scut_keymap_window

0x6a65,	// (0x0001584d) aid_size_cell_brow_shortcut

0x9eda,	// (0x00018cc2) bg_popup_window_pane_cp010

0x6a71,	// (0x00015859) grid_scut_pane

0x6a7d,	// (0x00015865) cell_scut_pane_ParamLimits

0x6a7d,	// (0x00015865) cell_scut_pane

0x6a94,	// (0x0001587c) cell_scut_pane_g1

0xd719,	// (0x0001c501) cell_scut_pane_t1

0xd728,	// (0x0001c510) cell_scut_pane_t2

0x6a9d,	// (0x00015885) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0001e850) cell_scut_pane_t

0x46d5,	// (0x000134bd) main_mup3_pane_g8_ParamLimits

0x46d5,	// (0x000134bd) main_mup3_pane_g8

0x5b5b,	// (0x00014943) area_vitu2_query_pane_ParamLimits

0x5b5b,	// (0x00014943) area_vitu2_query_pane

0x67de,	// (0x000155c6) input_focus_pane_cp08

0xd737,	// (0x0001c51f) area_vitu2_query_pane_g1

0x6aab,	// (0x00015893) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0001e857) area_vitu2_query_pane_g

0x6abc,	// (0x000158a4) area_vitu2_query_pane_t1_ParamLimits

0x6abc,	// (0x000158a4) area_vitu2_query_pane_t1

0x6ad0,	// (0x000158b8) area_vitu2_query_pane_t2_ParamLimits

0x6ad0,	// (0x000158b8) area_vitu2_query_pane_t2

0x6ae4,	// (0x000158cc) area_vitu2_query_pane_t3_ParamLimits

0x6ae4,	// (0x000158cc) area_vitu2_query_pane_t3

0xd743,	// (0x0001c52b) area_vitu2_query_pane_t4_ParamLimits

0xd743,	// (0x0001c52b) area_vitu2_query_pane_t4

0xd76b,	// (0x0001c553) area_vitu2_query_pane_t5_ParamLimits

0xd76b,	// (0x0001c553) area_vitu2_query_pane_t5

0xd793,	// (0x0001c57b) area_vitu2_query_pane_t6_ParamLimits

0xd793,	// (0x0001c57b) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0001e85c) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0001e85c) area_vitu2_query_pane_t

0x6b0c,	// (0x000158f4) bg_button_pane_cp018

0x6b1a,	// (0x00015902) bg_button_pane_cp021

0x6b26,	// (0x0001590e) bg_button_pane_cp022

0x6b35,	// (0x0001591d) input_focus_pane_cp09

0xa834,	// (0x0001961c) aid_size_touch_mv_arrow_left

0xa85d,	// (0x00019645) aid_size_touch_mv_arrow_right

0x62ba,	// (0x000150a2) main_cset_slider_pane_g16_ParamLimits

0x62ba,	// (0x000150a2) main_cset_slider_pane_g16

0x62c6,	// (0x000150ae) main_cset_slider_pane_g17_ParamLimits

0x62c6,	// (0x000150ae) main_cset_slider_pane_g17

0x6a52,	// (0x0001583a) cell_cam4_burst_pane_g1_ParamLimits

0x94d6,	// (0x000182be) compa_mode_pane

0x64a0,	// (0x00015288) popup_vtel_slider_window_g3_ParamLimits

0x64a0,	// (0x00015288) popup_vtel_slider_window_g3

0x64b7,	// (0x0001529f) popup_vtel_slider_window_g4_ParamLimits

0x64b7,	// (0x0001529f) popup_vtel_slider_window_g4

0x64ce,	// (0x000152b6) popup_vtel_slider_window_t1_ParamLimits

0x64ce,	// (0x000152b6) popup_vtel_slider_window_t1

0x94d6,	// (0x000182be) main_cl_pane

0xbee6,	// (0x0001acce) popup_imed_adjust2_window_ParamLimits

0xbebe,	// (0x0001aca6) bg_tb_trans_pane_cp05_ParamLimits

0xc934,	// (0x0001b71c) popup_imed_adjust2_window_g1_ParamLimits

0xc943,	// (0x0001b72b) popup_imed_adjust2_window_g2_ParamLimits

0xc943,	// (0x0001b72b) popup_imed_adjust2_window_g2

0xc94f,	// (0x0001b737) popup_imed_adjust2_window_g3_ParamLimits

0xc94f,	// (0x0001b737) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0001e5c7) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0001e5c7) popup_imed_adjust2_window_g

0xc95b,	// (0x0001b743) popup_imed_adjust2_window_t1_ParamLimits

0xc973,	// (0x0001b75b) slider_imed_adjust_pane_ParamLimits

0xc987,	// (0x0001b76f) slider_imed_adjust_pane_g1_ParamLimits

0xc997,	// (0x0001b77f) slider_imed_adjust_pane_g2_ParamLimits

0xc9a7,	// (0x0001b78f) slider_imed_adjust_pane_g3_ParamLimits

0xc9b8,	// (0x0001b7a0) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0001e5ce) slider_imed_adjust_pane_g_ParamLimits

0x58e4,	// (0x000146cc) aid_touch_area_cam4_ParamLimits

0x58e4,	// (0x000146cc) aid_touch_area_cam4

0xd0a4,	// (0x0001be8c) battery_pane_cp01

0x59b3,	// (0x0001479b) main_camera4_pane_g6_ParamLimits

0x59b3,	// (0x0001479b) main_camera4_pane_g6

0x59dd,	// (0x000147c5) main_camera4_pane_t2_ParamLimits

0x59dd,	// (0x000147c5) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0001e6d1) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0001e6d1) main_camera4_pane_t

0x5a12,	// (0x000147fa) aid_touch_area_vid4_ParamLimits

0x5a12,	// (0x000147fa) aid_touch_area_vid4

0x5a66,	// (0x0001484e) main_video4_pane_g5_ParamLimits

0x5a66,	// (0x0001484e) main_video4_pane_g5

0x5a8b,	// (0x00014873) vid4_progress_pane_ParamLimits

0x5a8b,	// (0x00014873) vid4_progress_pane

0xd38c,	// (0x0001c174) main_cset_slider_pane_g18_ParamLimits

0xd38c,	// (0x0001c174) main_cset_slider_pane_g18

0xd601,	// (0x0001c3e9) cell_cam4_burst_pane_g2_ParamLimits

0xd601,	// (0x0001c3e9) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0001e830) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0001e830) cell_cam4_burst_pane_g

0x9ca9,	// (0x00018a91) bg_cl_pane_ParamLimits

0x9ca9,	// (0x00018a91) bg_cl_pane

0x6b44,	// (0x0001592c) cl_header_pane_ParamLimits

0x6b44,	// (0x0001592c) cl_header_pane

0x6b58,	// (0x00015940) cl_listscroll_pane_ParamLimits

0x6b58,	// (0x00015940) cl_listscroll_pane

0xd7df,	// (0x0001c5c7) bg_cl_pane_g1

0xd7e7,	// (0x0001c5cf) bg_cl_pane_g2

0xd7ef,	// (0x0001c5d7) bg_cl_pane_g3

0xd7f7,	// (0x0001c5df) bg_cl_pane_g4

0xd7ff,	// (0x0001c5e7) bg_cl_pane_g5

0xd807,	// (0x0001c5ef) bg_cl_pane_g6

0xd80f,	// (0x0001c5f7) bg_cl_pane_g7

0xd817,	// (0x0001c5ff) bg_cl_pane_g8

0xd81f,	// (0x0001c607) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0001e86b) bg_cl_pane_g

0x6b68,	// (0x00015950) aid_height_cl_leading_ParamLimits

0x6b68,	// (0x00015950) aid_height_cl_leading

0x6b74,	// (0x0001595c) aid_height_cl_text_ParamLimits

0x6b74,	// (0x0001595c) aid_height_cl_text

0x9546,	// (0x0001832e) bg_cl_header_pane_ParamLimits

0x9546,	// (0x0001832e) bg_cl_header_pane

0x6b93,	// (0x0001597b) cl_header_pane_g1_ParamLimits

0x6b93,	// (0x0001597b) cl_header_pane_g1

0x6ba9,	// (0x00015991) cl_header_pane_t1_ParamLimits

0x6ba9,	// (0x00015991) cl_header_pane_t1

0xd827,	// (0x0001c60f) cl_list_pane

0xd35f,	// (0x0001c147) hc_scroll_pane_cp01

0xa11d,	// (0x00018f05) bg_cl_header_pane_g1

0xd20f,	// (0x0001bff7) bg_cl_header_pane_g2

0xa13d,	// (0x00018f25) bg_cl_header_pane_g3

0xd21f,	// (0x0001c007) bg_cl_header_pane_g4

0xd217,	// (0x0001bfff) bg_cl_header_pane_g5

0xd4f0,	// (0x0001c2d8) bg_cl_header_pane_g6

0xd237,	// (0x0001c01f) bg_cl_header_pane_g7

0xd23f,	// (0x0001c027) bg_cl_header_pane_g8

0xd22f,	// (0x0001c017) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0001e87e) bg_cl_header_pane_g

0x6bc2,	// (0x000159aa) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6bc2,	// (0x000159aa) hc_cl_list_double_graphic_heading_pane

0x6bd3,	// (0x000159bb) hc_cl_list_single_graphic_pane_ParamLimits

0x6bd3,	// (0x000159bb) hc_cl_list_single_graphic_pane

0x6be9,	// (0x000159d1) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6be9,	// (0x000159d1) hc_cl_list_single_graphic_pane_g1

0x6bf5,	// (0x000159dd) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6bf5,	// (0x000159dd) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0001e891) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0001e891) hc_cl_list_single_graphic_pane_g

0x6c09,	// (0x000159f1) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6c09,	// (0x000159f1) hc_cl_list_single_graphic_pane_t1

0x6be9,	// (0x000159d1) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6be9,	// (0x000159d1) hc_cl_list_double_graphic_heading_pane_g1

0x6c1e,	// (0x00015a06) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6c1e,	// (0x00015a06) hc_cl_list_double_graphic_heading_pane_g2

0x6c32,	// (0x00015a1a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6c32,	// (0x00015a1a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0001e896) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0001e896) hc_cl_list_double_graphic_heading_pane_g

0x6c46,	// (0x00015a2e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6c46,	// (0x00015a2e) hc_cl_list_double_graphic_heading_pane_t1

0x6c5b,	// (0x00015a43) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6c5b,	// (0x00015a43) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0001e89d) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0001e89d) hc_cl_list_double_graphic_heading_pane_t

0xd838,	// (0x0001c620) vid4_progress_pane_g1

0xd848,	// (0x0001c630) vid4_progress_pane_g2

0x6c70,	// (0x00015a58) vid4_progress_pane_g3

0xd858,	// (0x0001c640) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0001e8a2) vid4_progress_pane_g

0x6c82,	// (0x00015a6a) vid4_progress_pane_t1

0xd870,	// (0x0001c658) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0001e8ad) vid4_progress_pane_t

0x6c9a,	// (0x00015a82) wait_bar_pane_cp07

0xc1cc,	// (0x0001afb4) blid_firmament_pane_ParamLimits

0xc20f,	// (0x0001aff7) popup_blid_sat_info2_window_g1

0xc233,	// (0x0001b01b) popup_blid_sat_info2_window_t3

0xc241,	// (0x0001b029) popup_blid_sat_info2_window_t4

0xc24f,	// (0x0001b037) popup_blid_sat_info2_window_t5

0xc25d,	// (0x0001b045) popup_blid_sat_info2_window_t6

0xc26d,	// (0x0001b055) popup_blid_sat_info2_window_t7

0xc27b,	// (0x0001b063) popup_blid_sat_info2_window_t8

0xc289,	// (0x0001b071) popup_blid_sat_info2_window_t9

0xc297,	// (0x0001b07f) popup_blid_sat_info2_window_t10

0xc359,	// (0x0001b141) aid_firma_cardinal_ParamLimits

0xc36d,	// (0x0001b155) blid_firmament_pane_t1_ParamLimits

0xc384,	// (0x0001b16c) blid_firmament_pane_t2_ParamLimits

0xc39b,	// (0x0001b183) blid_firmament_pane_t3_ParamLimits

0xc3b2,	// (0x0001b19a) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0001e4bb) blid_firmament_pane_t_ParamLimits

0xc3c9,	// (0x0001b1b1) blid_sat_info_pane_ParamLimits

0x9546,	// (0x0001832e) main_cam_set_pane_ParamLimits

0x4f9c,	// (0x00013d84) aid_size_cell_colour_35_ParamLimits

0x4fbc,	// (0x00013da4) aid_size_cell_colour_112_ParamLimits

0x4fdc,	// (0x00013dc4) aid_size_cell_effect_ParamLimits

0xbebe,	// (0x0001aca6) bg_tb_trans_pane_cp02_ParamLimits

0xa3b3,	// (0x0001919b) heading_imed_pane_ParamLimits

0x4ffc,	// (0x00013de4) listscroll_imed_pane_ParamLimits

0xb4e4,	// (0x0001a2cc) popup_call2_audio_first_window_g5_ParamLimits

0xb4e4,	// (0x0001a2cc) popup_call2_audio_first_window_g5

0x558f,	// (0x00014377) aid_size_touch_image3_arrow_left_ParamLimits

0x558f,	// (0x00014377) aid_size_touch_image3_arrow_left

0x55bb,	// (0x000143a3) aid_size_touch_image3_arrow_right_ParamLimits

0x55bb,	// (0x000143a3) aid_size_touch_image3_arrow_right

0xd885,	// (0x0001c66d) vid4_progress_pane_t3

0x530f,	// (0x000140f7) main_hwr_training_symbol_option_pane_ParamLimits

0x530f,	// (0x000140f7) main_hwr_training_symbol_option_pane

0xcc21,	// (0x0001ba09) popup_hwr_training_preview_window_ParamLimits

0xcc21,	// (0x0001ba09) popup_hwr_training_preview_window

0x532f,	// (0x00014117) hwr_training_navi_pane_g5_ParamLimits

0x532f,	// (0x00014117) hwr_training_navi_pane_g5

0xd1eb,	// (0x0001bfd3) popup_char_count_window

0x9546,	// (0x0001832e) bg_popup_sub_pane_cp20_ParamLimits

0x65ea,	// (0x000153d2) list_vitu2_match_list_pane_ParamLimits

0x65f9,	// (0x000153e1) vitu2_page_scroll_pane_ParamLimits

0x65f9,	// (0x000153e1) vitu2_page_scroll_pane

0xd8bc,	// (0x0001c6a4) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd8bc,	// (0x0001c6a4) list_single_hwr_training_symbol_option_pane

0xd8cf,	// (0x0001c6b7) list_single_hwr_training_symbol_option_pane_g1

0xd8d7,	// (0x0001c6bf) list_single_hwr_training_symbol_option_pane_t1

0xd8e5,	// (0x0001c6cd) bg_button_pane_cp023

0xd8ee,	// (0x0001c6d6) bg_button_pane_cp024

0x6ce5,	// (0x00015acd) vitu2_page_scroll_pane_g1

0x6ced,	// (0x00015ad5) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0001e8b4) vitu2_page_scroll_pane_g

0x6cf5,	// (0x00015add) vitu2_page_scroll_pane_t1

0xc0e8,	// (0x0001aed0) popup_char_count_window_g1

0xd921,	// (0x0001c709) popup_char_count_window_g2

0xd92a,	// (0x0001c712) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0001e8b9) popup_char_count_window_g

0xd933,	// (0x0001c71b) popup_char_count_window_t1

0x94d6,	// (0x000182be) main_vded2_pane

0xc920,	// (0x0001b708) aid_size_cell_imed_line

0xc92a,	// (0x0001b712) grid_imed_line_width_pane

0xd15c,	// (0x0001bf44) vid4_indicators_pane_g4

0xd941,	// (0x0001c729) cell_imed_line_width_pane_ParamLimits

0xd941,	// (0x0001c729) cell_imed_line_width_pane

0xd955,	// (0x0001c73d) cell_imed_line_width_pane_g1

0xd95e,	// (0x0001c746) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0001e8c0) cell_imed_line_width_pane_g

0x6d04,	// (0x00015aec) main_vded2_pane_g1_ParamLimits

0x6d04,	// (0x00015aec) main_vded2_pane_g1

0x6d1a,	// (0x00015b02) main_vded2_pane_g2_ParamLimits

0x6d1a,	// (0x00015b02) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0001e8c5) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0001e8c5) main_vded2_pane_g

0x6d2c,	// (0x00015b14) vded2_slider_pane_ParamLimits

0x6d2c,	// (0x00015b14) vded2_slider_pane

0x6d3c,	// (0x00015b24) aid_size_touch_vded2_end

0x6d46,	// (0x00015b2e) aid_size_touch_vded2_playhead

0xd966,	// (0x0001c74e) aid_size_touch_vded2_start

0xd96e,	// (0x0001c756) vded2_slider_bg_pane

0xd977,	// (0x0001c75f) vded2_slider_pane_g1

0xd980,	// (0x0001c768) vded2_slider_pane_g2

0x6d50,	// (0x00015b38) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0001e8ca) vded2_slider_pane_g

0xd988,	// (0x0001c770) vded2_slider_bg_pane_g1

0xd991,	// (0x0001c779) vded2_slider_bg_pane_g2

0xd99a,	// (0x0001c782) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0001e8d1) vded2_slider_bg_pane_g

0x2cc8,	// (0x00011ab0) aid_postcard_touch_down_pane_ParamLimits

0x2cc8,	// (0x00011ab0) aid_postcard_touch_down_pane

0x2cde,	// (0x00011ac6) aid_postcard_touch_up_pane_ParamLimits

0x2cde,	// (0x00011ac6) aid_postcard_touch_up_pane

0x94d6,	// (0x000182be) main_blid2_pane

0xbecc,	// (0x0001acb4) popup_blid2_search_window

0x94d6,	// (0x000182be) blid2_gps_pane

0x94d6,	// (0x000182be) blid2_navig_pane

0x94d6,	// (0x000182be) blid2_search_pane

0x94d6,	// (0x000182be) blid2_tripm_pane

0x6d5b,	// (0x00015b43) blid2_search_pane_g1_ParamLimits

0x6d5b,	// (0x00015b43) blid2_search_pane_g1

0x6d75,	// (0x00015b5d) blid2_search_pane_t1_ParamLimits

0x6d75,	// (0x00015b5d) blid2_search_pane_t1

0x6d87,	// (0x00015b6f) aid_size_cell_blid2_gps_ParamLimits

0x6d87,	// (0x00015b6f) aid_size_cell_blid2_gps

0x6d9f,	// (0x00015b87) blid2_gps_pane_g1_ParamLimits

0x6d9f,	// (0x00015b87) blid2_gps_pane_g1

0x6db3,	// (0x00015b9b) grid_blid2_satellite_pane_ParamLimits

0x6db3,	// (0x00015b9b) grid_blid2_satellite_pane

0x6dcd,	// (0x00015bb5) blid2_navig_pane_g1_ParamLimits

0x6dcd,	// (0x00015bb5) blid2_navig_pane_g1

0x6dd9,	// (0x00015bc1) blid2_navig_pane_t1_ParamLimits

0x6dd9,	// (0x00015bc1) blid2_navig_pane_t1

0x6df4,	// (0x00015bdc) blid2_navig_pane_t2_ParamLimits

0x6df4,	// (0x00015bdc) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0001e8d8) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0001e8d8) blid2_navig_pane_t

0x6e0f,	// (0x00015bf7) blid2_navig_ring_pane_ParamLimits

0x6e0f,	// (0x00015bf7) blid2_navig_ring_pane

0x6e28,	// (0x00015c10) blid2_speed_pane_ParamLimits

0x6e28,	// (0x00015c10) blid2_speed_pane

0x6e34,	// (0x00015c1c) blid2_tripm_pane_g1_ParamLimits

0x6e34,	// (0x00015c1c) blid2_tripm_pane_g1

0x6e4d,	// (0x00015c35) blid2_tripm_pane_g2_ParamLimits

0x6e4d,	// (0x00015c35) blid2_tripm_pane_g2

0x6e61,	// (0x00015c49) blid2_tripm_pane_g3_ParamLimits

0x6e61,	// (0x00015c49) blid2_tripm_pane_g3

0x6e75,	// (0x00015c5d) blid2_tripm_pane_g4_ParamLimits

0x6e75,	// (0x00015c5d) blid2_tripm_pane_g4

0x6e89,	// (0x00015c71) blid2_tripm_pane_g5_ParamLimits

0x6e89,	// (0x00015c71) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0001e8dd) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0001e8dd) blid2_tripm_pane_g

0x6eaf,	// (0x00015c97) blid2_tripm_pane_t1_ParamLimits

0x6eaf,	// (0x00015c97) blid2_tripm_pane_t1

0x6eca,	// (0x00015cb2) blid2_tripm_pane_t2_ParamLimits

0x6eca,	// (0x00015cb2) blid2_tripm_pane_t2

0x6ee3,	// (0x00015ccb) blid2_tripm_pane_t3_ParamLimits

0x6ee3,	// (0x00015ccb) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0001e8ea) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0001e8ea) blid2_tripm_pane_t

0x6f2a,	// (0x00015d12) cell_blid2_satellite_pane_ParamLimits

0x6f2a,	// (0x00015d12) cell_blid2_satellite_pane

0x6f48,	// (0x00015d30) cell_blid2_satellite_pane_g1

0xd9a3,	// (0x0001c78b) cell_blid2_satellite_pane_t1

0xc3d9,	// (0x0001b1c1) blid2_speed_pane_g1

0xd9b1,	// (0x0001c799) blid2_speed_pane_t1

0xd9bf,	// (0x0001c7a7) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0001e8f3) blid2_speed_pane_t

0xc3d9,	// (0x0001b1c1) blid2_navig_ring_pane_g1

0x6f51,	// (0x00015d39) blid2_navig_ring_pane_g2

0x6f59,	// (0x00015d41) blid2_navig_ring_pane_g3

0x6f61,	// (0x00015d49) blid2_navig_ring_pane_g4

0x6f69,	// (0x00015d51) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0001e8f8) blid2_navig_ring_pane_g

0x94d6,	// (0x000182be) bg_popup_window_pane_cp011

0xd9cd,	// (0x0001c7b5) popup_blid2_search_window_g1

0xd9d5,	// (0x0001c7bd) popup_blid2_search_window_t1

0xd9e3,	// (0x0001c7cb) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0001e903) popup_blid2_search_window_t

0xa02c,	// (0x00018e14) main_browser_pane_g1

0x9ca9,	// (0x00018a91) main_browser_pane_ParamLimits

0x9546,	// (0x0001832e) bg_button_pane_cp011_ParamLimits

0x5e90,	// (0x00014c78) cell_vitu2_function_pane_g1_ParamLimits

0xbebe,	// (0x0001aca6) bg_popup_sub_pane_cp22_ParamLimits

0x67de,	// (0x000155c6) input_focus_pane_cp08_ParamLimits

0x67f5,	// (0x000155dd) popup_vitu2_query_button_pane_ParamLimits

0x67f5,	// (0x000155dd) popup_vitu2_query_button_pane

0x6806,	// (0x000155ee) popup_vitu2_query_input_button_pane

0xd54b,	// (0x0001c333) popup_vitu2_query_window_g1_ParamLimits

0x6810,	// (0x000155f8) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0001e804) popup_vitu2_query_window_g_ParamLimits

0x94d6,	// (0x000182be) bg_button_pane_cp026

0x6f71,	// (0x00015d59) popup_vitu2_query_input_button_pane_g1

0x94d6,	// (0x000182be) bg_button_pane_cp025

0xd9f1,	// (0x0001c7d9) popup_vitu2_query_button_pane_t1

0x435e,	// (0x00013146) main_mp3_pane_t6

0x436c,	// (0x00013154) popup_slider_window_cp01

0xd0c0,	// (0x0001bea8) cam4_battery_pane

0xd119,	// (0x0001bf01) cam4_battery_pane_cp02

0xd830,	// (0x0001c618) cam4_battery_pane_cp01

0xd830,	// (0x0001c618) cam4_battery_pane_cp03

0xc3d9,	// (0x0001b1c1) cam4_battery_pane_g1

0xd9ff,	// (0x0001c7e7) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0001e908) cam4_battery_pane_g

0xc2a5,	// (0x0001b08d) popup_blid_sat_info2_window_t11

0xa834,	// (0x0001961c) aid_size_touch_mv_arrow_left_ParamLimits

0xa85d,	// (0x00019645) aid_size_touch_mv_arrow_right_ParamLimits

0xa8bb,	// (0x000196a3) navi_pane_g1_ParamLimits

0xa8c7,	// (0x000196af) navi_pane_g2_ParamLimits

0xa8f5,	// (0x000196dd) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0001e1cd) navi_pane_g_ParamLimits

0x276d,	// (0x00011555) navi_pane_mv_t1_ParamLimits

0x5008,	// (0x00013df0) grid_imed_effect_pane_ParamLimits

0x13c5,	// (0x000101ad) aid_placing_vt_slider_lsc

0x9f7b,	// (0x00018d63) aid_placing_vt_slider_prt

0x9546,	// (0x0001832e) bg_tb_trans_pane_cp01_ParamLimits

0xc565,	// (0x0001b34d) popup_image_details_window_g1_ParamLimits

0xc578,	// (0x0001b360) popup_image_details_window_g2_ParamLimits

0xc58d,	// (0x0001b375) popup_image_details_window_g3_ParamLimits

0xc58d,	// (0x0001b375) popup_image_details_window_g3

0xf718,	// (0x0001e500) popup_image_details_window_g_ParamLimits

0xc5a1,	// (0x0001b389) popup_image_details_window_t1_ParamLimits

0xc5b3,	// (0x0001b39b) popup_image_details_window_t2_ParamLimits

0xc5cc,	// (0x0001b3b4) popup_image_details_window_t3_ParamLimits

0xc5e0,	// (0x0001b3c8) popup_image_details_window_t4_ParamLimits

0xc5fb,	// (0x0001b3e3) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0001e507) popup_image_details_window_t_ParamLimits

0x6b80,	// (0x00015968) cl_header_name_pane_ParamLimits

0x6b80,	// (0x00015968) cl_header_name_pane

0x6f79,	// (0x00015d61) cl_header_name_pane_t1_ParamLimits

0x6f79,	// (0x00015d61) cl_header_name_pane_t1

0x6f9a,	// (0x00015d82) cl_header_name_pane_t2_ParamLimits

0x6f9a,	// (0x00015d82) cl_header_name_pane_t2

0x6fdc,	// (0x00015dc4) cl_header_name_pane_t3_ParamLimits

0x6fdc,	// (0x00015dc4) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0001e90d) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0001e90d) cl_header_name_pane_t

0xa984,	// (0x0001976c) navi_pane_mv_g2_ParamLimits

0xd1a8,	// (0x0001bf90) field_vitu2_entry_pane_g1_ParamLimits

0xd1b4,	// (0x0001bf9c) field_vitu2_entry_pane_g2_ParamLimits

0xd1c0,	// (0x0001bfa8) field_vitu2_entry_pane_g3_ParamLimits

0xd1c0,	// (0x0001bfa8) field_vitu2_entry_pane_g3

0xf91b,	// (0x0001e703) field_vitu2_entry_pane_g_ParamLimits

0xd1f3,	// (0x0001bfdb) cell_vitu2_itu_pane_g1_ParamLimits

0x5d38,	// (0x00014b20) cell_vitu2_itu_pane_g2_ParamLimits

0x5d38,	// (0x00014b20) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0001e70f) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0001e70f) cell_vitu2_itu_pane_g

0x9546,	// (0x0001832e) bg_vkb2_func_pane_cp05_ParamLimits

0x9546,	// (0x0001832e) bg_vkb2_func_pane_cp05

0x9546,	// (0x0001832e) bg_vkb2_func_pane_cp03

0x9546,	// (0x0001832e) bg_vkb2_func_pane_cp04

0x9546,	// (0x0001832e) bg_vkb2_func_pane_cp10_ParamLimits

0x9546,	// (0x0001832e) bg_vkb2_func_pane_cp10

0x6b26,	// (0x0001590e) bg_vkb2_func_pane_cp08

0x6b0c,	// (0x000158f4) bg_vkb2_func_pane_cp06

0x6b1a,	// (0x00015902) bg_vkb2_func_pane_cp07

0xd8f7,	// (0x0001c6df) bg_vkb2_func_pane_cp11_ParamLimits

0xd8f7,	// (0x0001c6df) bg_vkb2_func_pane_cp11

0xd90c,	// (0x0001c6f4) bg_vkb2_func_pane_cp12_ParamLimits

0xd90c,	// (0x0001c6f4) bg_vkb2_func_pane_cp12

0x94d6,	// (0x000182be) bg_vkb2_func_pane_cp09

0xd20f,	// (0x0001bff7) bg_vkb2_func_pane_g1

0xa13d,	// (0x00018f25) bg_vkb2_func_pane_g2

0xd217,	// (0x0001bfff) bg_vkb2_func_pane_g3

0xd21f,	// (0x0001c007) bg_vkb2_func_pane_g4

0xd4f0,	// (0x0001c2d8) bg_vkb2_func_pane_g5

0xd237,	// (0x0001c01f) bg_vkb2_func_pane_g6

0xd23f,	// (0x0001c027) bg_vkb2_func_pane_g7

0xd22f,	// (0x0001c017) bg_vkb2_func_pane_g8

0xa11d,	// (0x00018f05) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0001e914) bg_vkb2_func_pane_g

0x6e9d,	// (0x00015c85) blid2_tripm_pane_g6_ParamLimits

0x6e9d,	// (0x00015c85) blid2_tripm_pane_g6

0xcf12,	// (0x0001bcfa) mp4_progress_pane_g1

0x6f16,	// (0x00015cfe) blid2_tripm_values_pane_ParamLimits

0x6f16,	// (0x00015cfe) blid2_tripm_values_pane

0x700d,	// (0x00015df5) blid2_tripm_values_pane_t1

0x701b,	// (0x00015e03) blid2_tripm_values_pane_t2

0x7029,	// (0x00015e11) blid2_tripm_values_pane_t3

0x7037,	// (0x00015e1f) blid2_tripm_values_pane_t4

0x7045,	// (0x00015e2d) blid2_tripm_values_pane_t5

0x7053,	// (0x00015e3b) blid2_tripm_values_pane_t6

0x7061,	// (0x00015e49) blid2_tripm_values_pane_t7

0x706f,	// (0x00015e57) blid2_tripm_values_pane_t8

0x707d,	// (0x00015e65) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0001e927) blid2_tripm_values_pane_t

0x1407,	// (0x000101ef) call_video_pane_t1_ParamLimits

0x1425,	// (0x0001020d) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0001e056) call_video_pane_t_ParamLimits

0x2c46,	// (0x00011a2e) msg_header_pane_g1_ParamLimits

0xab86,	// (0x0001996e) msg_header_pane_g2_ParamLimits

0xab86,	// (0x0001996e) msg_header_pane_g2

0x0001,

0xf488,	// (0x0001e270) msg_header_pane_g_ParamLimits

0xf488,	// (0x0001e270) msg_header_pane_g

0x9ca9,	// (0x00018a91) main_clock2_pane_ParamLimits

0x4d06,	// (0x00013aee) grid_clock2_toolbar_pane_ParamLimits

0x4d06,	// (0x00013aee) grid_clock2_toolbar_pane

0x4d06,	// (0x00013aee) listscroll_clock2_pane_ParamLimits

0x4d06,	// (0x00013aee) listscroll_clock2_pane

0x4dfd,	// (0x00013be5) main_clock2_pane_t3_ParamLimits

0x4dfd,	// (0x00013be5) main_clock2_pane_t3

0x4e21,	// (0x00013c09) main_clock2_pane_t4_ParamLimits

0x4e21,	// (0x00013c09) main_clock2_pane_t4

0xda09,	// (0x0001c7f1) cell_clock2_toolbar_pane

0xda11,	// (0x0001c7f9) cell_clock2_toolbar_pane_cp01

0xda11,	// (0x0001c7f9) cell_clock2_toolbar_pane_cp02

0xda19,	// (0x0001c801) cell_clock2_toolbar_pane_cp03

0xda21,	// (0x0001c809) list_clock2_pane

0xa7aa,	// (0x00019592) scroll_pane_cp10

0xda29,	// (0x0001c811) list_single_clock2_pane_ParamLimits

0xda29,	// (0x0001c811) list_single_clock2_pane

0x9eda,	// (0x00018cc2) list_highlight_pane_cp08

0xda36,	// (0x0001c81e) list_single_clock2_pane_t1

0xda44,	// (0x0001c82c) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0001e93a) list_single_clock2_pane_t

0x94d6,	// (0x000182be) bg_button_pane_cp10

0xda52,	// (0x0001c83a) cell_clock2_toolbar_pane_g1

0x2c54,	// (0x00011a3c) aid_main_viewer_pane_g1_ParamLimits

0x2c54,	// (0x00011a3c) aid_main_viewer_pane_g1

0x2c62,	// (0x00011a4a) aid_main_viewer_pane_g2_ParamLimits

0x2c62,	// (0x00011a4a) aid_main_viewer_pane_g2

0x2c70,	// (0x00011a58) aid_main_viewer_pane_g3_ParamLimits

0x2c70,	// (0x00011a58) aid_main_viewer_pane_g3

0x2c7f,	// (0x00011a67) aid_main_viewer_pane_g4_ParamLimits

0x2c7f,	// (0x00011a67) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0001e281) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0001e281) aid_main_viewer_pane_g

0x3585,	// (0x0001236d) main_calc_pane_ParamLimits

0x3599,	// (0x00012381) main_dialer2_pane_ParamLimits

0x94d6,	// (0x000182be) main_cam6_pane

0x94d6,	// (0x000182be) main_vid6_pane

0x4d12,	// (0x00013afa) listscroll_gen_pane_cp06_ParamLimits

0x4d12,	// (0x00013afa) listscroll_gen_pane_cp06

0x4e44,	// (0x00013c2c) main_clock2_pane_t5_ParamLimits

0x4e44,	// (0x00013c2c) main_clock2_pane_t5

0x4e9e,	// (0x00013c86) aid_call2_pane_cp10_ParamLimits

0x4eb0,	// (0x00013c98) aid_call_pane_cp10_ParamLimits

0xa828,	// (0x00019610) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa828,	// (0x00019610) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4ec2,	// (0x00013caa) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4ec2,	// (0x00013caa) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa828,	// (0x00019610) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0001e5bc) popup_clock_analogue_window_cp10_g_ParamLimits

0x4ed4,	// (0x00013cbc) popup_clock_analogue_window_cp10_t1_ParamLimits

0x553c,	// (0x00014324) cell_dialer2_keypad_pane_g2_ParamLimits

0x553c,	// (0x00014324) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0001e6a2) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0001e6a2) cell_dialer2_keypad_pane_g

0x5558,	// (0x00014340) cell_dialer2_keypad_pane_t1

0x61ad,	// (0x00014f95) main_cset_text2_pane_ParamLimits

0x61ad,	// (0x00014f95) main_cset_text2_pane

0xd737,	// (0x0001c51f) area_vitu2_query_pane_g1_ParamLimits

0x6aab,	// (0x00015893) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0001e857) area_vitu2_query_pane_g_ParamLimits

0xd7bb,	// (0x0001c5a3) area_vitu2_query_pane_t7_ParamLimits

0xd7bb,	// (0x0001c5a3) area_vitu2_query_pane_t7

0x6b0c,	// (0x000158f4) bg_button_pane_cp018_ParamLimits

0x6b1a,	// (0x00015902) bg_button_pane_cp021_ParamLimits

0x6b26,	// (0x0001590e) bg_button_pane_cp022_ParamLimits

0x6b26,	// (0x0001590e) bg_vkb2_func_pane_cp08_ParamLimits

0x6b0c,	// (0x000158f4) bg_vkb2_func_pane_cp06_ParamLimits

0x6b1a,	// (0x00015902) bg_vkb2_func_pane_cp07_ParamLimits

0x6b35,	// (0x0001591d) input_focus_pane_cp09_ParamLimits

0xda5a,	// (0x0001c842) cam6_autofocus_pane_ParamLimits

0xda5a,	// (0x0001c842) cam6_autofocus_pane

0x708b,	// (0x00015e73) cam6_image_uncrop_pane_ParamLimits

0x708b,	// (0x00015e73) cam6_image_uncrop_pane

0x709a,	// (0x00015e82) cam6_indi_pane_ParamLimits

0x709a,	// (0x00015e82) cam6_indi_pane

0x70b0,	// (0x00015e98) cam6_mode_pane_ParamLimits

0x70b0,	// (0x00015e98) cam6_mode_pane

0x70c2,	// (0x00015eaa) cam6_timer_pane_ParamLimits

0x70c2,	// (0x00015eaa) cam6_timer_pane

0x70ce,	// (0x00015eb6) cam6_zoom_pane_ParamLimits

0x70ce,	// (0x00015eb6) cam6_zoom_pane

0x70da,	// (0x00015ec2) cam6_mode_pane_g1_ParamLimits

0x70da,	// (0x00015ec2) cam6_mode_pane_g1

0x70ea,	// (0x00015ed2) cam6_mode_pane_g2_ParamLimits

0x70ea,	// (0x00015ed2) cam6_mode_pane_g2

0x70fa,	// (0x00015ee2) cam6_mode_pane_g3_ParamLimits

0x70fa,	// (0x00015ee2) cam6_mode_pane_g3

0x710a,	// (0x00015ef2) cam6_mode_pane_g4_ParamLimits

0x710a,	// (0x00015ef2) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0001e93f) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0001e93f) cam6_mode_pane_g

0xd2d9,	// (0x0001c0c1) bg_tb_trans_pane_cp08_ParamLimits

0xd2d9,	// (0x0001c0c1) bg_tb_trans_pane_cp08

0xda68,	// (0x0001c850) cam6_battery_pane_ParamLimits

0xda68,	// (0x0001c850) cam6_battery_pane

0xda7e,	// (0x0001c866) cam6_indi_pane_g1_ParamLimits

0xda7e,	// (0x0001c866) cam6_indi_pane_g1

0xda90,	// (0x0001c878) cam6_indi_pane_g2_ParamLimits

0xda90,	// (0x0001c878) cam6_indi_pane_g2

0xdaa2,	// (0x0001c88a) cam6_indi_pane_g3_ParamLimits

0xdaa2,	// (0x0001c88a) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0001e948) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0001e948) cam6_indi_pane_g

0xdab4,	// (0x0001c89c) cam6_indi_pane_t1_ParamLimits

0xdab4,	// (0x0001c89c) cam6_indi_pane_t1

0x711a,	// (0x00015f02) cam6_autofocus_pane_g1

0x7122,	// (0x00015f0a) cam6_autofocus_pane_g2

0x712a,	// (0x00015f12) cam6_autofocus_pane_g3

0x7132,	// (0x00015f1a) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0001e94f) cam6_autofocus_pane_g

0xdada,	// (0x0001c8c2) cam6_timer_pane_g1

0xdae2,	// (0x0001c8ca) cam6_timer_pane_t1

0xdaf0,	// (0x0001c8d8) cam6_zoom_cont_pane

0xdaf8,	// (0x0001c8e0) cam6_zoom_pane_g1

0xdb00,	// (0x0001c8e8) cam6_zoom_pane_g2

0x713a,	// (0x00015f22) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0001e958) cam6_zoom_pane_g

0xc3d9,	// (0x0001b1c1) cam6_battery_pane_g1

0xc3d9,	// (0x0001b1c1) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0001e4c4) cam6_battery_pane_g

0xdb08,	// (0x0001c8f0) cam6_zoom_cont_pane_g1

0xdb11,	// (0x0001c8f9) cam6_zoom_cont_pane_g2

0xdb1a,	// (0x0001c902) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0001e95f) cam6_zoom_cont_pane_g

0x7157,	// (0x00015f3f) cam6_mode_pane_cp_ParamLimits

0x7157,	// (0x00015f3f) cam6_mode_pane_cp

0x70ce,	// (0x00015eb6) cam6_zoom_pane_cp_ParamLimits

0x70ce,	// (0x00015eb6) cam6_zoom_pane_cp

0x7169,	// (0x00015f51) vid6_image_uncrop_cif_pane_ParamLimits

0x7169,	// (0x00015f51) vid6_image_uncrop_cif_pane

0x7179,	// (0x00015f61) vid6_image_uncrop_nhd_pane_ParamLimits

0x7179,	// (0x00015f61) vid6_image_uncrop_nhd_pane

0x708b,	// (0x00015e73) vid6_image_uncrop_vga_pane_ParamLimits

0x708b,	// (0x00015e73) vid6_image_uncrop_vga_pane

0x7188,	// (0x00015f70) vid6_image_uncrop_wvga_pane_ParamLimits

0x7188,	// (0x00015f70) vid6_image_uncrop_wvga_pane

0x7197,	// (0x00015f7f) vid6_indi_pane_ParamLimits

0x7197,	// (0x00015f7f) vid6_indi_pane

0xd2d9,	// (0x0001c0c1) bg_tb_trans_pane_cp09_ParamLimits

0xd2d9,	// (0x0001c0c1) bg_tb_trans_pane_cp09

0xdb32,	// (0x0001c91a) cam6_battery_pane_cp_ParamLimits

0xdb32,	// (0x0001c91a) cam6_battery_pane_cp

0xdb3e,	// (0x0001c926) vid6_indi_pane_g1_ParamLimits

0xdb3e,	// (0x0001c926) vid6_indi_pane_g1

0xdb50,	// (0x0001c938) vid6_indi_pane_g2_ParamLimits

0xdb50,	// (0x0001c938) vid6_indi_pane_g2

0xdb62,	// (0x0001c94a) vid6_indi_pane_g3_ParamLimits

0xdb62,	// (0x0001c94a) vid6_indi_pane_g3

0xdb77,	// (0x0001c95f) vid6_indi_pane_g4_ParamLimits

0xdb77,	// (0x0001c95f) vid6_indi_pane_g4

0xdb8c,	// (0x0001c974) vid6_indi_pane_g5_ParamLimits

0xdb8c,	// (0x0001c974) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0001e966) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0001e966) vid6_indi_pane_g

0xdba6,	// (0x0001c98e) vid6_indi_pane_t1_ParamLimits

0xdba6,	// (0x0001c98e) vid6_indi_pane_t1

0xdbbc,	// (0x0001c9a4) vid6_indi_pane_t2_ParamLimits

0xdbbc,	// (0x0001c9a4) vid6_indi_pane_t2

0xdbe4,	// (0x0001c9cc) vid6_indi_pane_t3_ParamLimits

0xdbe4,	// (0x0001c9cc) vid6_indi_pane_t3

0xdc0c,	// (0x0001c9f4) vid6_indi_pane_t4_ParamLimits

0xdc0c,	// (0x0001c9f4) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0001e971) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0001e971) vid6_indi_pane_t

0xdc30,	// (0x0001ca18) wait_bar_pane_cp08

0x71af,	// (0x00015f97) main_cset_text2_pane_t1_ParamLimits

0x71af,	// (0x00015f97) main_cset_text2_pane_t1

0x7142,	// (0x00015f2a) listscroll_gen_pane_cp06_t1_ParamLimits

0x7142,	// (0x00015f2a) listscroll_gen_pane_cp06_t1

0x94d6,	// (0x000182be) main_cam6_set_pane

0xc645,	// (0x0001b42d) bg_tb_trans_pane_cp06_ParamLimits

0xd0c8,	// (0x0001beb0) cam4_indicators_pane_g1_ParamLimits

0xd0d9,	// (0x0001bec1) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0001e6df) cam4_indicators_pane_g_ParamLimits

0xd0f7,	// (0x0001bedf) cam4_indicators_pane_t1_ParamLimits

0x9546,	// (0x0001832e) bg_tb_trans_pane_cp07_ParamLimits

0xd123,	// (0x0001bf0b) vid4_indicators_pane_g1_ParamLimits

0xd137,	// (0x0001bf1f) vid4_indicators_pane_g2_ParamLimits

0xd14b,	// (0x0001bf33) vid4_indicators_pane_g3_ParamLimits

0xd15c,	// (0x0001bf44) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0001e6f1) vid4_indicators_pane_g_ParamLimits

0xd17a,	// (0x0001bf62) vid4_indicators_pane_t1_ParamLimits

0xd838,	// (0x0001c620) vid4_progress_pane_g1_ParamLimits

0xd848,	// (0x0001c630) vid4_progress_pane_g2_ParamLimits

0x6c70,	// (0x00015a58) vid4_progress_pane_g3_ParamLimits

0xd858,	// (0x0001c640) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0001e8a2) vid4_progress_pane_g_ParamLimits

0x6c82,	// (0x00015a6a) vid4_progress_pane_t1_ParamLimits

0xd870,	// (0x0001c658) vid4_progress_pane_t2_ParamLimits

0xd885,	// (0x0001c66d) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0001e8ad) vid4_progress_pane_t_ParamLimits

0x6c9a,	// (0x00015a82) wait_bar_pane_cp07_ParamLimits

0x71cc,	// (0x00015fb4) main_cam6_set_pane_g2_ParamLimits

0x71cc,	// (0x00015fb4) main_cam6_set_pane_g2

0x71f0,	// (0x00015fd8) main_cset6_listscroll_pane_ParamLimits

0x71f0,	// (0x00015fd8) main_cset6_listscroll_pane

0x7210,	// (0x00015ff8) main_cset6_slider_pane_ParamLimits

0x7210,	// (0x00015ff8) main_cset6_slider_pane

0x7226,	// (0x0001600e) main_cset6_text2_pane_ParamLimits

0x7226,	// (0x0001600e) main_cset6_text2_pane

0xdc3f,	// (0x0001ca27) main_cset6_text_pane

0xdc47,	// (0x0001ca2f) main_cset_list_pane_copy1_ParamLimits

0xdc47,	// (0x0001ca2f) main_cset_list_pane_copy1

0xdc57,	// (0x0001ca3f) scroll_pane_cp028_copy1

0x7234,	// (0x0001601c) cset_list_set_pane_copy1

0x7245,	// (0x0001602d) aid_position_infowindow_above_copy1

0x724d,	// (0x00016035) aid_position_infowindow_below_copy1

0x7255,	// (0x0001603d) cset_list_set_pane_g1_copy1

0x725d,	// (0x00016045) cset_list_set_pane_g3_copy1_ParamLimits

0x725d,	// (0x00016045) cset_list_set_pane_g3_copy1

0x726c,	// (0x00016054) cset_list_set_pane_t1_copy1_ParamLimits

0x726c,	// (0x00016054) cset_list_set_pane_t1_copy1

0x9546,	// (0x0001832e) list_highlight_pane_cp021_copy1_ParamLimits

0x9546,	// (0x0001832e) list_highlight_pane_cp021_copy1

0xdc60,	// (0x0001ca48) cset6_slider_pane_ParamLimits

0xdc60,	// (0x0001ca48) cset6_slider_pane

0xdc8c,	// (0x0001ca74) main_cset6_slider_pane_g1_ParamLimits

0xdc8c,	// (0x0001ca74) main_cset6_slider_pane_g1

0x7281,	// (0x00016069) main_cset6_slider_pane_g2_ParamLimits

0x7281,	// (0x00016069) main_cset6_slider_pane_g2

0xdcb4,	// (0x0001ca9c) main_cset6_slider_pane_g3_ParamLimits

0xdcb4,	// (0x0001ca9c) main_cset6_slider_pane_g3

0x72a9,	// (0x00016091) main_cset6_slider_pane_g4_ParamLimits

0x72a9,	// (0x00016091) main_cset6_slider_pane_g4

0x72b5,	// (0x0001609d) main_cset6_slider_pane_g5_ParamLimits

0x72b5,	// (0x0001609d) main_cset6_slider_pane_g5

0xd374,	// (0x0001c15c) main_cset6_slider_pane_g7_ParamLimits

0xd374,	// (0x0001c15c) main_cset6_slider_pane_g7

0xd380,	// (0x0001c168) main_cset6_slider_pane_g8_ParamLimits

0xd380,	// (0x0001c168) main_cset6_slider_pane_g8

0x625a,	// (0x00015042) main_cset6_slider_pane_g9_ParamLimits

0x625a,	// (0x00015042) main_cset6_slider_pane_g9

0x6266,	// (0x0001504e) main_cset6_slider_pane_g10_ParamLimits

0x6266,	// (0x0001504e) main_cset6_slider_pane_g10

0x6272,	// (0x0001505a) main_cset6_slider_pane_g11_ParamLimits

0x6272,	// (0x0001505a) main_cset6_slider_pane_g11

0x627e,	// (0x00015066) main_cset6_slider_pane_g12_ParamLimits

0x627e,	// (0x00015066) main_cset6_slider_pane_g12

0x628a,	// (0x00015072) main_cset6_slider_pane_g13_ParamLimits

0x628a,	// (0x00015072) main_cset6_slider_pane_g13

0x6296,	// (0x0001507e) main_cset6_slider_pane_g14_ParamLimits

0x6296,	// (0x0001507e) main_cset6_slider_pane_g14

0x72c1,	// (0x000160a9) main_cset6_slider_pane_g15_ParamLimits

0x72c1,	// (0x000160a9) main_cset6_slider_pane_g15

0x62ba,	// (0x000150a2) main_cset6_slider_pane_g16_ParamLimits

0x62ba,	// (0x000150a2) main_cset6_slider_pane_g16

0x62c6,	// (0x000150ae) main_cset6_slider_pane_g17_ParamLimits

0x62c6,	// (0x000150ae) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0001e97a) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0001e97a) main_cset6_slider_pane_g

0xdcc0,	// (0x0001caa8) main_cset6_slider_pane_t1_ParamLimits

0xdcc0,	// (0x0001caa8) main_cset6_slider_pane_t1

0x72f1,	// (0x000160d9) main_cset6_slider_pane_t2_ParamLimits

0x72f1,	// (0x000160d9) main_cset6_slider_pane_t2

0x731c,	// (0x00016104) main_cset6_slider_pane_t3_ParamLimits

0x731c,	// (0x00016104) main_cset6_slider_pane_t3

0x7347,	// (0x0001612f) main_cset6_slider_pane_t4_ParamLimits

0x7347,	// (0x0001612f) main_cset6_slider_pane_t4

0x7372,	// (0x0001615a) main_cset6_slider_pane_t5_ParamLimits

0x7372,	// (0x0001615a) main_cset6_slider_pane_t5

0xdd01,	// (0x0001cae9) main_cset6_slider_pane_t7_ParamLimits

0xdd01,	// (0x0001cae9) main_cset6_slider_pane_t7

0x739d,	// (0x00016185) main_cset6_slider_pane_t8_ParamLimits

0x739d,	// (0x00016185) main_cset6_slider_pane_t8

0x73c1,	// (0x000161a9) main_cset6_slider_pane_t9_ParamLimits

0x73c1,	// (0x000161a9) main_cset6_slider_pane_t9

0x73e5,	// (0x000161cd) main_cset6_slider_pane_t10_ParamLimits

0x73e5,	// (0x000161cd) main_cset6_slider_pane_t10

0x7409,	// (0x000161f1) main_cset6_slider_pane_t11_ParamLimits

0x7409,	// (0x000161f1) main_cset6_slider_pane_t11

0xdd37,	// (0x0001cb1f) main_cset6_slider_pane_t14_ParamLimits

0xdd37,	// (0x0001cb1f) main_cset6_slider_pane_t14

0xdd70,	// (0x0001cb58) main_cset6_slider_pane_t15_ParamLimits

0xdd70,	// (0x0001cb58) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0001e99f) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0001e99f) main_cset6_slider_pane_t

0xd488,	// (0x0001c270) cset_slider_pane_g1_copy1

0xd491,	// (0x0001c279) cset_slider_pane_g2_copy1

0xd49a,	// (0x0001c282) cset_slider_pane_g3_copy1

0x94d6,	// (0x000182be) bg_popup_sub_pane_cp011_copy1

0xdda9,	// (0x0001cb91) main_cset_text_pane_g1_copy1

0xd55f,	// (0x0001c347) main_cset_text_pane_t1_copy1

0xd56d,	// (0x0001c355) main_cset_text_pane_t2_copy1

0xd57b,	// (0x0001c363) main_cset_text_pane_t3_copy1

0xd589,	// (0x0001c371) main_cset_text_pane_t4_copy1

0xd597,	// (0x0001c37f) main_cset_text_pane_t5_copy1

0xddb1,	// (0x0001cb99) main_cset_text_pane_t6_copy1

0xddbf,	// (0x0001cba7) main_cset_text_pane_t7_copy1

0x71af,	// (0x00015f97) main_cset_text2_pane_t1_copy1

0x9546,	// (0x0001832e) main_ncimui_pane

0x37e3,	// (0x000125cb) popup_query_ncimui_window_ParamLimits

0x37e3,	// (0x000125cb) popup_query_ncimui_window

0xc6aa,	// (0x0001b492) field_cale_ev2_pane_g4_ParamLimits

0xc6aa,	// (0x0001b492) field_cale_ev2_pane_g4

0x541c,	// (0x00014204) cell_video_dialer_keypad_pane_g2_ParamLimits

0x541c,	// (0x00014204) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0001e67d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0001e67d) cell_video_dialer_keypad_pane_g

0x5434,	// (0x0001421c) cell_video_dialer_keypad_pane_t1

0x94d6,	// (0x000182be) bg_popup_window_pane_cp012

0xa677,	// (0x0001945f) heading_pane_cp06

0xddeb,	// (0x0001cbd3) ncim_query_content_pane

0x94d6,	// (0x000182be) bg_popup_heading_pane_cp01

0xddf3,	// (0x0001cbdb) ncim_heading_pane_t1

0xde01,	// (0x0001cbe9) ncim_indicator_popup_pane

0xde13,	// (0x0001cbfb) ncim_query_button_pane

0xde27,	// (0x0001cc0f) ncim_query_content_pane_t1

0xde39,	// (0x0001cc21) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0001e9e3) ncim_query_content_pane_t

0xde73,	// (0x0001cc5b) ncim_query_list_pane

0xde85,	// (0x0001cc6d) ncim_query_popup_pane

0xde01,	// (0x0001cbe9) ncim_indicator_popup_pane_ParamLimits

0x762e,	// (0x00016416) ncim_query_content_pane_g1_ParamLimits

0x762e,	// (0x00016416) ncim_query_content_pane_g1

0xde27,	// (0x0001cc0f) ncim_query_content_pane_t1_ParamLimits

0xde39,	// (0x0001cc21) ncim_query_content_pane_t2_ParamLimits

0x763a,	// (0x00016422) ncim_query_content_pane_t3_ParamLimits

0x763a,	// (0x00016422) ncim_query_content_pane_t3

0x7662,	// (0x0001644a) ncim_query_content_pane_t4_ParamLimits

0x7662,	// (0x0001644a) ncim_query_content_pane_t4

0x768a,	// (0x00016472) ncim_query_content_pane_t5_ParamLimits

0x768a,	// (0x00016472) ncim_query_content_pane_t5

0xde4b,	// (0x0001cc33) ncim_query_content_pane_t6_ParamLimits

0xde4b,	// (0x0001cc33) ncim_query_content_pane_t6

0xfbfb,	// (0x0001e9e3) ncim_query_content_pane_t_ParamLimits

0xde73,	// (0x0001cc5b) ncim_query_list_pane_ParamLimits

0xde85,	// (0x0001cc6d) ncim_query_popup_pane_ParamLimits

0xde99,	// (0x0001cc81) wait_bar_pane_cp04

0x94d6,	// (0x000182be) input_focus_pane_cp011

0xdea1,	// (0x0001cc89) ncim_query_popup_pane_t1

0xdeaf,	// (0x0001cc97) ncim_list_query_list_pane_ParamLimits

0xdeaf,	// (0x0001cc97) ncim_list_query_list_pane

0x94d6,	// (0x000182be) bg_button_pane_cp027

0xdebc,	// (0x0001cca4) ncim_query_button_pane_g1

0x94d6,	// (0x000182be) list_highlight_pane_cp012

0xdec6,	// (0x0001ccae) ncim_list_query_list_pane_g1

0xdece,	// (0x0001ccb6) ncim_list_query_list_pane_t1

0xd0e8,	// (0x0001bed0) cam4_indicators_pane_g3_ParamLimits

0xd0e8,	// (0x0001bed0) cam4_indicators_pane_g3

0xd168,	// (0x0001bf50) vid4_indicators_pane_g5_ParamLimits

0xd168,	// (0x0001bf50) vid4_indicators_pane_g5

0xd864,	// (0x0001c64c) vid4_progress_pane_g5_ParamLimits

0xd864,	// (0x0001c64c) vid4_progress_pane_g5

0x7519,	// (0x00016301) main_ncimui_pane_g1

0x7582,	// (0x0001636a) ncimui_group_query_pane_ParamLimits

0x7582,	// (0x0001636a) ncimui_group_query_pane

0x75ca,	// (0x000163b2) ncimui_list_pane_ParamLimits

0x75ca,	// (0x000163b2) ncimui_list_pane

0x75f1,	// (0x000163d9) ncimui_text_pane_ParamLimits

0x75f1,	// (0x000163d9) ncimui_text_pane

0x76b2,	// (0x0001649a) ncimui_text_pane_t1_ParamLimits

0x76b2,	// (0x0001649a) ncimui_text_pane_t1

0xdedc,	// (0x0001ccc4) ncimui_list_single_graphic_pane_ParamLimits

0xdedc,	// (0x0001ccc4) ncimui_list_single_graphic_pane

0x76d0,	// (0x000164b8) ncimui_query_pane_ParamLimits

0x76d0,	// (0x000164b8) ncimui_query_pane

0x94d6,	// (0x000182be) list_highlight_pane_cp013

0xdeec,	// (0x0001ccd4) ncim_list_query_list_pane_t1_copy1

0xdec6,	// (0x0001ccae) ncim_list_single_graphic_pane_g1

0x76e3,	// (0x000164cb) ncim_query_button_pane_cp01

0x76ef,	// (0x000164d7) ncim_query_entry_pane_ParamLimits

0x76ef,	// (0x000164d7) ncim_query_entry_pane

0x7702,	// (0x000164ea) ncimui_query_pane_g1

0x770e,	// (0x000164f6) ncimui_query_pane_t1_ParamLimits

0x770e,	// (0x000164f6) ncimui_query_pane_t1

0x9546,	// (0x0001832e) input_focus_pane_cp012

0xdefa,	// (0x0001cce2) ncim_query_entry_pane_t1

0x9ca9,	// (0x00018a91) main_im_pane_ParamLimits

0x9546,	// (0x0001832e) main_mobtv_pane_ParamLimits

0x9546,	// (0x0001832e) main_mobtv_pane

0x72d9,	// (0x000160c1) main_cset6_slider_pane_g18_ParamLimits

0x72d9,	// (0x000160c1) main_cset6_slider_pane_g18

0x72e5,	// (0x000160cd) main_cset6_slider_pane_g19_ParamLimits

0x72e5,	// (0x000160cd) main_cset6_slider_pane_g19

0xd2e7,	// (0x0001c0cf) bg_main_mobtv_pane_ParamLimits

0xd2e7,	// (0x0001c0cf) bg_main_mobtv_pane

0x7727,	// (0x0001650f) main_mobtv_info_pane

0x7730,	// (0x00016518) main_mobtv_loading_pane_ParamLimits

0x7730,	// (0x00016518) main_mobtv_loading_pane

0xdf0c,	// (0x0001ccf4) main_mobtv_pg_channel_list_pane

0xdf16,	// (0x0001ccfe) main_mobtv_pg_hdr_pane

0x773d,	// (0x00016525) main_mobtv_programe_curr_pane_ParamLimits

0x773d,	// (0x00016525) main_mobtv_programe_curr_pane

0x774a,	// (0x00016532) main_mobtv_programe_next_pane_ParamLimits

0x774a,	// (0x00016532) main_mobtv_programe_next_pane

0xdf1f,	// (0x0001cd07) popup_mobtv_noti_window

0xc3d9,	// (0x0001b1c1) main_tv_pg_hdr_pane_g1

0xdf27,	// (0x0001cd0f) main_tv_pg_hdr_pane_g2

0xdf2f,	// (0x0001cd17) main_tv_pg_hdr_pane_g3

0xdf37,	// (0x0001cd1f) main_tv_pg_hdr_pane_g4

0xdf3f,	// (0x0001cd27) main_tv_pg_hdr_pane_g5

0xdf49,	// (0x0001cd31) main_tv_pg_hdr_pane_g6

0xdf53,	// (0x0001cd3b) main_tv_pg_hdr_pane_g7

0xdf5d,	// (0x0001cd45) main_tv_pg_hdr_pane_g8

0xdf67,	// (0x0001cd4f) main_tv_pg_hdr_pane_g9

0xdf71,	// (0x0001cd59) main_tv_pg_hdr_pane_g10

0xdf7b,	// (0x0001cd63) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0001e9f0) main_tv_pg_hdr_pane_g

0xdf85,	// (0x0001cd6d) main_tv_pg_hdr_pane_t1

0xdf93,	// (0x0001cd7b) main_tv_pg_hdr_pane_t2

0xdfa1,	// (0x0001cd89) main_tv_pg_hdr_pane_t3

0xdfb1,	// (0x0001cd99) main_tv_pg_hdr_pane_t4

0xdfc1,	// (0x0001cda9) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0001ea07) main_tv_pg_hdr_pane_t

0xdfd1,	// (0x0001cdb9) single_mobtv_pg_channel_pane_ParamLimits

0xdfd1,	// (0x0001cdb9) single_mobtv_pg_channel_pane

0xdfe3,	// (0x0001cdcb) single_mobtv_pg_channel_table_pane

0xdfec,	// (0x0001cdd4) single_mobtv_pg_channel_thumb_pane

0xdff5,	// (0x0001cddd) single_tv_pg_channel_pane_g1

0xdffe,	// (0x0001cde6) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0001ea12) single_tv_pg_channel_pane_g

0xc645,	// (0x0001b42d) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc645,	// (0x0001b42d) bg_single_mobtv_pg_channel_thumb_pane

0xe007,	// (0x0001cdef) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe007,	// (0x0001cdef) single_mobtv_pg_channel_thumb_pane_g1

0xe015,	// (0x0001cdfd) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe015,	// (0x0001cdfd) single_mobtv_pg_channel_thumb_pane_g2

0xe021,	// (0x0001ce09) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe021,	// (0x0001ce09) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0001ea17) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0001ea17) single_mobtv_pg_channel_thumb_pane_g

0xe02d,	// (0x0001ce15) single_mobtv_pg_channel_thumb_pane_t1

0xe03b,	// (0x0001ce23) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0001ea1e) single_mobtv_pg_channel_thumb_pane_t

0xc3d9,	// (0x0001b1c1) bg_single_mobtv_pg_channel_table_pane_g1

0xc3d9,	// (0x0001b1c1) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0001e4c4) bg_single_mobtv_pg_channel_table_pane_g

0xe049,	// (0x0001ce31) single_mobtv_pg_channel_table_pane_t1

0xe057,	// (0x0001ce3f) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0001ea23) single_mobtv_pg_channel_table_pane_t

0x775f,	// (0x00016547) main_mobtv_info_pane_g1_ParamLimits

0x775f,	// (0x00016547) main_mobtv_info_pane_g1

0x777d,	// (0x00016565) main_mobtv_info_pane_t1_ParamLimits

0x777d,	// (0x00016565) main_mobtv_info_pane_t1

0x77f5,	// (0x000165dd) main_mobtv_info_pane_t2_ParamLimits

0x77f5,	// (0x000165dd) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0001ea2d) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0001ea2d) main_mobtv_info_pane_t

0x7884,	// (0x0001666c) wait_bar_pane_cp05

0x7896,	// (0x0001667e) main_mobtv_loading_pane_g1_ParamLimits

0x7896,	// (0x0001667e) main_mobtv_loading_pane_g1

0x78a9,	// (0x00016691) main_mobtv_loading_pane_g2_ParamLimits

0x78a9,	// (0x00016691) main_mobtv_loading_pane_g2

0x78b5,	// (0x0001669d) main_mobtv_loading_pane_g3_ParamLimits

0x78b5,	// (0x0001669d) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0001ea34) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0001ea34) main_mobtv_loading_pane_g

0xe065,	// (0x0001ce4d) main_mobtv_loading_pane_t1_ParamLimits

0xe065,	// (0x0001ce4d) main_mobtv_loading_pane_t1

0xe07d,	// (0x0001ce65) main_mobtv_loading_pane_t2_ParamLimits

0xe07d,	// (0x0001ce65) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0001ea3b) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0001ea3b) main_mobtv_loading_pane_t

0x78c8,	// (0x000166b0) wait_bar_pane_cp06_ParamLimits

0x78c8,	// (0x000166b0) wait_bar_pane_cp06

0xe0a1,	// (0x0001ce89) main_mobtv_programe_curr_pane_t1

0xe0af,	// (0x0001ce97) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0001ea40) main_mobtv_programe_curr_pane_t

0xe0bd,	// (0x0001cea5) main_mobtv_programe_next_pane_t1

0xe0cb,	// (0x0001ceb3) main_mobtv_programe_next_pane_t2

0xe0d9,	// (0x0001cec1) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0001ea45) main_mobtv_programe_next_pane_t

0x94d6,	// (0x000182be) bg_popup_mobtv_noti_window_pane

0xe0e7,	// (0x0001cecf) popup_mobtv_noti_window_g1

0xe0ef,	// (0x0001ced7) popup_mobtv_noti_window_t1

0xe0fd,	// (0x0001cee5) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0001ea4c) popup_mobtv_noti_window_t

0xc3d9,	// (0x0001b1c1) bg_popup_mobtv_noti_window_pane_g1

0x94d6,	// (0x000182be) sc_clock_pane

0x94d6,	// (0x000182be) main_fs_bigclock_pane

0x6f00,	// (0x00015ce8) blid2_tripm_pane_t4_ParamLimits

0x6f00,	// (0x00015ce8) blid2_tripm_pane_t4

0x78d7,	// (0x000166bf) sc_clock_pane_g1_ParamLimits

0x78d7,	// (0x000166bf) sc_clock_pane_g1

0x78e9,	// (0x000166d1) sc_clock_pane_t1_ParamLimits

0x78e9,	// (0x000166d1) sc_clock_pane_t1

0x790b,	// (0x000166f3) sc_clock_pane_t2_ParamLimits

0x790b,	// (0x000166f3) sc_clock_pane_t2

0x7923,	// (0x0001670b) sc_clock_pane_t3_ParamLimits

0x7923,	// (0x0001670b) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0001ea51) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0001ea51) sc_clock_pane_t

0x897e,	// (0x00017766) main_fs_bigclock_indicator_pane_ParamLimits

0x897e,	// (0x00017766) main_fs_bigclock_indicator_pane

0x79c9,	// (0x000167b1) main_fs_bigclock_pane_g1_ParamLimits

0x79c9,	// (0x000167b1) main_fs_bigclock_pane_g1

0x898a,	// (0x00017772) main_fs_bigclock_pane_t1_ParamLimits

0x898a,	// (0x00017772) main_fs_bigclock_pane_t1

0x899c,	// (0x00017784) main_fs_bigclock_pane_t2_ParamLimits

0x899c,	// (0x00017784) main_fs_bigclock_pane_t2

0x89b0,	// (0x00017798) main_fs_bigclock_pane_t3_ParamLimits

0x89b0,	// (0x00017798) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0001ec56) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0001ec56) main_fs_bigclock_pane_t

0xec90,	// (0x0001da78) main_fs_bigclock_indicator_pane_g1

0xde1b,	// (0x0001cc03) ncim_query_content_pane_g2_ParamLimits

0xde1b,	// (0x0001cc03) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0001e9de) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0001e9de) ncim_query_content_pane_g

0x793c,	// (0x00016724) sc_clock_pane_t4_ParamLimits

0x793c,	// (0x00016724) sc_clock_pane_t4

0x9546,	// (0x0001832e) main_radioblah_pane

0xd02e,	// (0x0001be16) cell_call4_button_pane_t1_copy1_ParamLimits

0xd02e,	// (0x0001be16) cell_call4_button_pane_t1_copy1

0x7531,	// (0x00016319) main_ncimui_pane_t1_ParamLimits

0x7531,	// (0x00016319) main_ncimui_pane_t1

0x754b,	// (0x00016333) main_ncimui_pane_t2_ParamLimits

0x754b,	// (0x00016333) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0001e9d7) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0001e9d7) main_ncimui_pane_t

0xe242,	// (0x0001d02a) main_radioblah_anim_pane_ParamLimits

0xe242,	// (0x0001d02a) main_radioblah_anim_pane

0xe253,	// (0x0001d03b) main_radioblah_info_pane_ParamLimits

0xe253,	// (0x0001d03b) main_radioblah_info_pane

0xe267,	// (0x0001d04f) main_radioblah_pane_t1_ParamLimits

0xe267,	// (0x0001d04f) main_radioblah_pane_t1

0xe283,	// (0x0001d06b) main_radioblah_pane_t2_ParamLimits

0xe283,	// (0x0001d06b) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0001ea72) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0001ea72) main_radioblah_pane_t

0x7a28,	// (0x00016810) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7a28,	// (0x00016810) main_radioblah_rocker_ctrl_pane

0xe2cb,	// (0x0001d0b3) main_radioblah_info_pane_t1_ParamLimits

0xe2cb,	// (0x0001d0b3) main_radioblah_info_pane_t1

0x7a80,	// (0x00016868) main_radioblah_info_pane_t2_ParamLimits

0x7a80,	// (0x00016868) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0001ea7b) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0001ea7b) main_radioblah_info_pane_t

0xc3d9,	// (0x0001b1c1) main_radioblah_rocker_ctrl_pane_g1

0x7b30,	// (0x00016918) main_radioblah_rocker_ctrl_pane_g2

0x7b38,	// (0x00016920) main_radioblah_rocker_ctrl_pane_g3

0x7b40,	// (0x00016928) main_radioblah_rocker_ctrl_pane_g4

0x7b48,	// (0x00016930) main_radioblah_rocker_ctrl_pane_g5

0x7b50,	// (0x00016938) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0001ea84) main_radioblah_rocker_ctrl_pane_g

0x71af,	// (0x00015f97) main_cset_text2_pane_t1_copy1_ParamLimits

0xd0b8,	// (0x0001bea0) cam4_image_uncrop_qvga_pane

0xd111,	// (0x0001bef9) vid4_image_uncrop_qcif_pane

0xda5a,	// (0x0001c842) cam6_image_uncrop_qvga_pane_ParamLimits

0xda5a,	// (0x0001c842) cam6_image_uncrop_qvga_pane

0xdb22,	// (0x0001c90a) vid6_image_uncrop_qcif_pane_ParamLimits

0xdb22,	// (0x0001c90a) vid6_image_uncrop_qcif_pane

0x94d6,	// (0x000182be) bg_popup_preview_window_pane_cp03

0xddcd,	// (0x0001cbb5) list_cset_text2_pane

0xddd5,	// (0x0001cbbd) main_cset6_text2_pane_g1

0xdddd,	// (0x0001cbc5) main_cset6_text2_pane_t1

0x7b58,	// (0x00016940) list_cset_text2_pane_t1_ParamLimits

0x7b58,	// (0x00016940) list_cset_text2_pane_t1

0x9546,	// (0x0001832e) main_radioblah_pane_ParamLimits

0x7870,	// (0x00016658) main_mobtv_info_pane_t3_ParamLimits

0x7870,	// (0x00016658) main_mobtv_info_pane_t3

0x7a16,	// (0x000167fe) main_radioblah_pane_g1

0x7a50,	// (0x00016838) main_radioblah_info_pane_g1

0x7ad5,	// (0x000168bd) main_radioblah_info_pane_t3_ParamLimits

0x7ad5,	// (0x000168bd) main_radioblah_info_pane_t3

0x2278,	// (0x00011060) highlight_cell_cale_month_pane_ParamLimits

0x2278,	// (0x00011060) highlight_cell_cale_month_pane

0x94d6,	// (0x000182be) main_phob_fisheye_pane

0xc74d,	// (0x0001b535) scroll_pane_cp0031_ParamLimits

0xc74d,	// (0x0001b535) scroll_pane_cp0031

0xdc30,	// (0x0001ca18) wait_bar_pane_cp08_ParamLimits

0x7234,	// (0x0001601c) cset_list_set_pane_copy1_ParamLimits

0xe305,	// (0x0001d0ed) highlight_cell_cale_month_pane_g1

0x7b71,	// (0x00016959) highlight_cell_cale_month_pane_t1

0xd827,	// (0x0001c60f) list_gen_pane_cp01

0xd35f,	// (0x0001c147) scroll_pane_01

0xe30d,	// (0x0001d0f5) list_single_double_fisheye_pane

0x7b7f,	// (0x00016967) list_double_fisheye_pane_g1_ParamLimits

0x7b7f,	// (0x00016967) list_double_fisheye_pane_g1

0x7b8b,	// (0x00016973) list_double_fisheye_pane_g2_ParamLimits

0x7b8b,	// (0x00016973) list_double_fisheye_pane_g2

0x7b9f,	// (0x00016987) list_double_fisheye_pane_g3_ParamLimits

0x7b9f,	// (0x00016987) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0001ea91) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0001ea91) list_double_fisheye_pane_g

0x7bc8,	// (0x000169b0) list_double_fisheye_pane_t1_ParamLimits

0x7bc8,	// (0x000169b0) list_double_fisheye_pane_t1

0x7be3,	// (0x000169cb) list_double_fisheye_pane_t2_ParamLimits

0x7be3,	// (0x000169cb) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0001ea9c) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0001ea9c) list_double_fisheye_pane_t

0x94d6,	// (0x000182be) main_call5_pane

0x7967,	// (0x0001674f) sc_swipe_pane_ParamLimits

0x7967,	// (0x0001674f) sc_swipe_pane

0x7c18,	// (0x00016a00) call5_image_pane_ParamLimits

0x7c18,	// (0x00016a00) call5_image_pane

0x7c35,	// (0x00016a1d) call5_swipe_1_pane_ParamLimits

0x7c35,	// (0x00016a1d) call5_swipe_1_pane

0x7c48,	// (0x00016a30) call5_swipe_2_pane_ParamLimits

0x7c48,	// (0x00016a30) call5_swipe_2_pane

0x7c73,	// (0x00016a5b) popup_call5_audio_first_window_ParamLimits

0x7c73,	// (0x00016a5b) popup_call5_audio_first_window

0xc645,	// (0x0001b42d) call5_swipe_1_pane_g1_ParamLimits

0xc645,	// (0x0001b42d) call5_swipe_1_pane_g1

0xe316,	// (0x0001d0fe) call5_swipe_1_pane_g2_ParamLimits

0xe316,	// (0x0001d0fe) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0001eaa1) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0001eaa1) call5_swipe_1_pane_g

0xe322,	// (0x0001d10a) call5_swipe_1_pane_t1_ParamLimits

0xe322,	// (0x0001d10a) call5_swipe_1_pane_t1

0xc645,	// (0x0001b42d) call5_swipe_2_pane_g1_ParamLimits

0xc645,	// (0x0001b42d) call5_swipe_2_pane_g1

0xe337,	// (0x0001d11f) call5_swipe_2_pane_g2_ParamLimits

0xe337,	// (0x0001d11f) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0001eaa6) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0001eaa6) call5_swipe_2_pane_g

0xe343,	// (0x0001d12b) call5_swipe_2_pane_t1_ParamLimits

0xe343,	// (0x0001d12b) call5_swipe_2_pane_t1

0xe358,	// (0x0001d140) sc_swipe_pane_g1_ParamLimits

0xe358,	// (0x0001d140) sc_swipe_pane_g1

0xe365,	// (0x0001d14d) sc_swipe_pane_g2_ParamLimits

0xe365,	// (0x0001d14d) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0001eaab) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0001eaab) sc_swipe_pane_g

0xe371,	// (0x0001d159) sc_swipe_pane_t1_ParamLimits

0xe371,	// (0x0001d159) sc_swipe_pane_t1

0x94d6,	// (0x000182be) main_cmail_launcher_pane

0x7c84,	// (0x00016a6c) aid_size_cell_cmail_l_ParamLimits

0x7c84,	// (0x00016a6c) aid_size_cell_cmail_l

0x7c92,	// (0x00016a7a) grid_cmail_l_pane_ParamLimits

0x7c92,	// (0x00016a7a) grid_cmail_l_pane

0x7cac,	// (0x00016a94) cell_cmail_l_pane_ParamLimits

0x7cac,	// (0x00016a94) cell_cmail_l_pane

0xe386,	// (0x0001d16e) cell_cmail_l_pane_g1_ParamLimits

0xe386,	// (0x0001d16e) cell_cmail_l_pane_g1

0xe392,	// (0x0001d17a) cell_cmail_l_pane_t1_ParamLimits

0xe392,	// (0x0001d17a) cell_cmail_l_pane_t1

0xe3a8,	// (0x0001d190) cell_cmail_l_pane_t2_ParamLimits

0xe3a8,	// (0x0001d190) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0001eab0) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0001eab0) cell_cmail_l_pane_t

0x9546,	// (0x0001832e) grid_highlight_pane_cp018_ParamLimits

0x9546,	// (0x0001832e) grid_highlight_pane_cp018

0x030f,	// (0x0000f0f7) main2_pane_ParamLimits

0x030f,	// (0x0000f0f7) main2_pane

0x9d66,	// (0x00018b4e) popup_sp_fs_action_menu_bg_pane_g1

0x9d6e,	// (0x00018b56) popup_sp_fs_action_menu_bg_pane_g2

0x9d76,	// (0x00018b5e) popup_sp_fs_action_menu_bg_pane_g3

0x9d7e,	// (0x00018b66) popup_sp_fs_action_menu_bg_pane_g4

0x9d86,	// (0x00018b6e) popup_sp_fs_action_menu_bg_pane_g5

0x9d8e,	// (0x00018b76) popup_sp_fs_action_menu_bg_pane_g6

0x9d96,	// (0x00018b7e) popup_sp_fs_action_menu_bg_pane_g7

0x9d9e,	// (0x00018b86) popup_sp_fs_action_menu_bg_pane_g8

0x9da6,	// (0x00018b8e) popup_sp_fs_action_menu_bg_pane_g9

0x9dae,	// (0x00018b96) popup_sp_fs_action_menu_bg_pane_g10

0x9dae,	// (0x00018b96) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0001df72) popup_sp_fs_action_menu_bg_pane_g

0x123e,	// (0x00010026) list_medium_line_x2_t3_g3_g1_ParamLimits

0x123e,	// (0x00010026) list_medium_line_x2_t3_g3_g1

0x124a,	// (0x00010032) list_medium_line_x2_t3_g3_g2_ParamLimits

0x124a,	// (0x00010032) list_medium_line_x2_t3_g3_g2

0x1256,	// (0x0001003e) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1256,	// (0x0001003e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0001e020) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0001e020) list_medium_line_x2_t3_g3_g

0x1262,	// (0x0001004a) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1262,	// (0x0001004a) list_medium_line_x2_t3_g3_t1

0x1277,	// (0x0001005f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1277,	// (0x0001005f) list_medium_line_x2_t3_g3_t2

0x128b,	// (0x00010073) list_medium_line_x2_t3_g3_t3_ParamLimits

0x128b,	// (0x00010073) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0001e027) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0001e027) list_medium_line_x2_t3_g3_t

0x123e,	// (0x00010026) list_medium_line_x2_t3_g2_g1_ParamLimits

0x123e,	// (0x00010026) list_medium_line_x2_t3_g2_g1

0x1256,	// (0x0001003e) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1256,	// (0x0001003e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0001e02e) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0001e02e) list_medium_line_x2_t3_g2_g

0x12a0,	// (0x00010088) list_medium_line_x2_t3_g2_t1_ParamLimits

0x12a0,	// (0x00010088) list_medium_line_x2_t3_g2_t1

0x12b6,	// (0x0001009e) list_medium_line_x2_t3_g2_t2_ParamLimits

0x12b6,	// (0x0001009e) list_medium_line_x2_t3_g2_t2

0x12c8,	// (0x000100b0) list_medium_line_x2_t3_g2_t3_ParamLimits

0x12c8,	// (0x000100b0) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0001e033) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0001e033) list_medium_line_x2_t3_g2_t

0x123e,	// (0x00010026) list_medium_line_x2_t4_g4_g1_ParamLimits

0x123e,	// (0x00010026) list_medium_line_x2_t4_g4_g1

0x12e5,	// (0x000100cd) list_medium_line_x2_t4_g4_g2_ParamLimits

0x12e5,	// (0x000100cd) list_medium_line_x2_t4_g4_g2

0x124a,	// (0x00010032) list_medium_line_x2_t4_g4_g3_ParamLimits

0x124a,	// (0x00010032) list_medium_line_x2_t4_g4_g3

0x12f1,	// (0x000100d9) list_medium_line_x2_t4_g4_g4_ParamLimits

0x12f1,	// (0x000100d9) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0001e03a) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0001e03a) list_medium_line_x2_t4_g4_g

0x12fd,	// (0x000100e5) list_medium_line_x2_t4_g4_t1_ParamLimits

0x12fd,	// (0x000100e5) list_medium_line_x2_t4_g4_t1

0x1317,	// (0x000100ff) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1317,	// (0x000100ff) list_medium_line_x2_t4_g4_t2

0x132d,	// (0x00010115) list_medium_line_x2_t4_g4_t3_ParamLimits

0x132d,	// (0x00010115) list_medium_line_x2_t4_g4_t3

0x1342,	// (0x0001012a) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1342,	// (0x0001012a) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0001e043) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0001e043) list_medium_line_x2_t4_g4_t

0x123e,	// (0x00010026) list_medium_line_x2_t2_g4_g1_ParamLimits

0x123e,	// (0x00010026) list_medium_line_x2_t2_g4_g1

0x12e5,	// (0x000100cd) list_medium_line_x2_t2_g4_g2_ParamLimits

0x12e5,	// (0x000100cd) list_medium_line_x2_t2_g4_g2

0x124a,	// (0x00010032) list_medium_line_x2_t2_g4_g3_ParamLimits

0x124a,	// (0x00010032) list_medium_line_x2_t2_g4_g3

0x1256,	// (0x0001003e) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1256,	// (0x0001003e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0001e0aa) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0001e0aa) list_medium_line_x2_t2_g4_g

0x229e,	// (0x00011086) list_medium_line_x2_t2_g4_t1_ParamLimits

0x229e,	// (0x00011086) list_medium_line_x2_t2_g4_t1

0x128b,	// (0x00010073) list_medium_line_x2_t2_g4_t2_ParamLimits

0x128b,	// (0x00010073) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0001e0b3) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0001e0b3) list_medium_line_x2_t2_g4_t

0x123e,	// (0x00010026) list_medium_line_x2_t2_g3_g1_ParamLimits

0x123e,	// (0x00010026) list_medium_line_x2_t2_g3_g1

0x124a,	// (0x00010032) list_medium_line_x2_t2_g3_g2_ParamLimits

0x124a,	// (0x00010032) list_medium_line_x2_t2_g3_g2

0x1256,	// (0x0001003e) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1256,	// (0x0001003e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0001e020) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0001e020) list_medium_line_x2_t2_g3_g

0x22b3,	// (0x0001109b) list_medium_line_x2_t2_g3_t1_ParamLimits

0x22b3,	// (0x0001109b) list_medium_line_x2_t2_g3_t1

0x128b,	// (0x00010073) list_medium_line_x2_t2_g3_t2_ParamLimits

0x128b,	// (0x00010073) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0001e0b8) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0001e0b8) list_medium_line_x2_t2_g3_t

0x23fc,	// (0x000111e4) main_sp_fs_list_pane_ParamLimits

0x23fc,	// (0x000111e4) main_sp_fs_list_pane

0xd303,	// (0x0001c0eb) sp_fs_scroll_pane_ParamLimits

0xd303,	// (0x0001c0eb) sp_fs_scroll_pane

0x2408,	// (0x000111f0) list_medium_line_x2_t3_t1

0x2418,	// (0x00011200) list_medium_line_x2_t3_t2

0x2426,	// (0x0001120e) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0001e103) list_medium_line_x2_t3_t

0x2434,	// (0x0001121c) list_medium_line_x3_t4_t1

0x2444,	// (0x0001122c) list_medium_line_x3_t4_t2

0x2452,	// (0x0001123a) list_medium_line_x3_t4_t3

0x2426,	// (0x0001120e) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0001e10a) list_medium_line_x3_t4_t

0x2460,	// (0x00011248) list_medium_line_x4_t5_t1

0x2470,	// (0x00011258) list_medium_line_x4_t5_t2

0x2452,	// (0x0001123a) list_medium_line_x4_t5_t3

0x247e,	// (0x00011266) list_medium_line_x4_t5_t4

0x2426,	// (0x0001120e) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0001e113) list_medium_line_x4_t5_t

0x123e,	// (0x00010026) list_medium_line_t4_g4_g1_ParamLimits

0x123e,	// (0x00010026) list_medium_line_t4_g4_g1

0x248c,	// (0x00011274) list_medium_line_t4_g4_g2_ParamLimits

0x248c,	// (0x00011274) list_medium_line_t4_g4_g2

0x2498,	// (0x00011280) list_medium_line_t4_g4_g3_ParamLimits

0x2498,	// (0x00011280) list_medium_line_t4_g4_g3

0x1256,	// (0x0001003e) list_medium_line_t4_g4_g4_ParamLimits

0x1256,	// (0x0001003e) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0001e11e) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0001e11e) list_medium_line_t4_g4_g

0x24a4,	// (0x0001128c) list_medium_line_t4_g4_t1_ParamLimits

0x24a4,	// (0x0001128c) list_medium_line_t4_g4_t1

0x24b9,	// (0x000112a1) list_medium_line_t4_g4_t2_ParamLimits

0x24b9,	// (0x000112a1) list_medium_line_t4_g4_t2

0x24ce,	// (0x000112b6) list_medium_line_t4_g4_t3_ParamLimits

0x24ce,	// (0x000112b6) list_medium_line_t4_g4_t3

0x128b,	// (0x00010073) list_medium_line_t4_g4_t4_ParamLimits

0x128b,	// (0x00010073) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0001e127) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0001e127) list_medium_line_t4_g4_t

0x2596,	// (0x0001137e) chi_dic_find_pane_g1

0x35ad,	// (0x00012395) main_tport_pane

0x6560,	// (0x00015348) list_medium_line_plain_t1

0x6608,	// (0x000153f0) list_medium_line_t2_g2_g1_ParamLimits

0x6608,	// (0x000153f0) list_medium_line_t2_g2_g1

0x6614,	// (0x000153fc) list_medium_line_t2_g2_g2_ParamLimits

0x6614,	// (0x000153fc) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0001e7e8) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0001e7e8) list_medium_line_t2_g2_g

0x6620,	// (0x00015408) list_medium_line_t2_g2_t1_ParamLimits

0x6620,	// (0x00015408) list_medium_line_t2_g2_t1

0x663a,	// (0x00015422) list_medium_line_t2_g2_t2_ParamLimits

0x663a,	// (0x00015422) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0001e7ed) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0001e7ed) list_medium_line_t2_g2_t

0xd89a,	// (0x0001c682) aid_sp_fs_list_icon_a_sm

0xd8a2,	// (0x0001c68a) aid_sp_fs_list_icon_d

0xd8aa,	// (0x0001c692) aid_sp_fs_text_primary

0xd8b3,	// (0x0001c69b) aid_sp_fs_text_secondary

0x6cad,	// (0x00015a95) list_medium_line

0x6cad,	// (0x00015a95) list_medium_line_g2

0x6cad,	// (0x00015a95) list_medium_line_g3

0x6cad,	// (0x00015a95) list_medium_line_plain

0x6cad,	// (0x00015a95) list_medium_line_plain_t2

0x6cad,	// (0x00015a95) list_medium_line_plain_t3

0x6cad,	// (0x00015a95) list_medium_line_right_icon

0x6cad,	// (0x00015a95) list_medium_line_right_iconx2

0x6cad,	// (0x00015a95) list_medium_line_t2

0x6cad,	// (0x00015a95) list_medium_line_t2_g2

0x6cad,	// (0x00015a95) list_medium_line_t2_g3

0x6cad,	// (0x00015a95) list_medium_line_t2_right_icon

0x6cad,	// (0x00015a95) list_medium_line_t2_right_iconx2

0x6cad,	// (0x00015a95) list_medium_line_t3

0x6cad,	// (0x00015a95) list_medium_line_t3_g2

0x6cad,	// (0x00015a95) list_medium_line_t3_g3

0x6cad,	// (0x00015a95) list_medium_line_t3_right_iconx2

0x6cb6,	// (0x00015a9e) list_medium_line_t4_g4

0x6cbf,	// (0x00015aa7) list_medium_line_x2

0x6cbf,	// (0x00015aa7) list_medium_line_x2_t2_g2

0x6cbf,	// (0x00015aa7) list_medium_line_x2_t2_g3

0x6cbf,	// (0x00015aa7) list_medium_line_x2_t2_g4

0x6cbf,	// (0x00015aa7) list_medium_line_x2_t3

0x6cbf,	// (0x00015aa7) list_medium_line_x2_t3_g2

0x6cbf,	// (0x00015aa7) list_medium_line_x2_t3_g3

0x6cbf,	// (0x00015aa7) list_medium_line_x2_t3_g4

0x6cbf,	// (0x00015aa7) list_medium_line_x2_t4_g2

0x6cbf,	// (0x00015aa7) list_medium_line_x2_t4_g4

0x6cc8,	// (0x00015ab0) list_medium_line_x3

0x6cc8,	// (0x00015ab0) list_medium_line_x3_t4

0x6cc8,	// (0x00015ab0) list_medium_line_x3_t4_g4

0x6cb6,	// (0x00015a9e) list_medium_line_x4_t4

0x6cb6,	// (0x00015a9e) list_medium_line_x4_t4_g7

0x6cb6,	// (0x00015a9e) list_medium_line_x4_t5

0x6cd1,	// (0x00015ab9) list_single_fs_dyc_pane_ParamLimits

0x6cd1,	// (0x00015ab9) list_single_fs_dyc_pane

0x123e,	// (0x00010026) list_medium_line_x4_t4_g7_g1_ParamLimits

0x123e,	// (0x00010026) list_medium_line_x4_t4_g7_g1

0x742d,	// (0x00016215) list_medium_line_x4_t4_g7_g2_ParamLimits

0x742d,	// (0x00016215) list_medium_line_x4_t4_g7_g2

0x7439,	// (0x00016221) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7439,	// (0x00016221) list_medium_line_x4_t4_g7_g3

0x7448,	// (0x00016230) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7448,	// (0x00016230) list_medium_line_x4_t4_g7_g4

0x7454,	// (0x0001623c) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7454,	// (0x0001623c) list_medium_line_x4_t4_g7_g5

0x7463,	// (0x0001624b) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7463,	// (0x0001624b) list_medium_line_x4_t4_g7_g6

0x7472,	// (0x0001625a) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7472,	// (0x0001625a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0001e9b8) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0001e9b8) list_medium_line_x4_t4_g7_g

0x747e,	// (0x00016266) list_medium_line_x4_t4_g7_t1_ParamLimits

0x747e,	// (0x00016266) list_medium_line_x4_t4_g7_t1

0x7493,	// (0x0001627b) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7493,	// (0x0001627b) list_medium_line_x4_t4_g7_t2

0x74a8,	// (0x00016290) list_medium_line_x4_t4_g7_t3_ParamLimits

0x74a8,	// (0x00016290) list_medium_line_x4_t4_g7_t3

0x74bd,	// (0x000162a5) list_medium_line_x4_t4_g7_t4_ParamLimits

0x74bd,	// (0x000162a5) list_medium_line_x4_t4_g7_t4

0x74cf,	// (0x000162b7) list_medium_line_x4_t4_g7_t5_ParamLimits

0x74cf,	// (0x000162b7) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0001e9c7) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0001e9c7) list_medium_line_x4_t4_g7_t

0x74e1,	// (0x000162c9) list_single_dyc_row_pane_ParamLimits

0x74e1,	// (0x000162c9) list_single_dyc_row_pane

0x7c05,	// (0x000169ed) call5_gesture_pane_ParamLimits

0x7c05,	// (0x000169ed) call5_gesture_pane

0x7c5b,	// (0x00016a43) call5_windows_pane_ParamLimits

0x7c5b,	// (0x00016a43) call5_windows_pane

0x7cc6,	// (0x00016aae) call5_swipe_1_pane_cp_ParamLimits

0x7cc6,	// (0x00016aae) call5_swipe_1_pane_cp

0x7cd2,	// (0x00016aba) call5_swipe_2_pane_cp_ParamLimits

0x7cd2,	// (0x00016aba) call5_swipe_2_pane_cp

0x9eda,	// (0x00018cc2) call5_image_pane_cp

0x7cde,	// (0x00016ac6) popup_call5_audio_first_window_cp_ParamLimits

0x7cde,	// (0x00016ac6) popup_call5_audio_first_window_cp

0xe358,	// (0x0001d140) call5_swipe_1_pane_g1_cp_ParamLimits

0xe358,	// (0x0001d140) call5_swipe_1_pane_g1_cp

0xe3c5,	// (0x0001d1ad) call5_swipe_1_pane_g2_cp

0xe371,	// (0x0001d159) call5_swipe_1_pane_t1_cp_ParamLimits

0xe371,	// (0x0001d159) call5_swipe_1_pane_t1_cp

0xe358,	// (0x0001d140) call5_swipe_2_pane_g1_cp_ParamLimits

0xe358,	// (0x0001d140) call5_swipe_2_pane_g1_cp

0xe3cd,	// (0x0001d1b5) call5_swipe_2_pane_g2_cp

0xe3d5,	// (0x0001d1bd) call5_swipe_2_pane_t1_cp_ParamLimits

0xe3d5,	// (0x0001d1bd) call5_swipe_2_pane_t1_cp

0x9546,	// (0x0001832e) main_sp_fs_email_pane

0xe3ea,	// (0x0001d1d2) main_sp_fs_listscroll_pane_te

0x7cec,	// (0x00016ad4) popup_sp_fs_action_menu_pane_ParamLimits

0x7cec,	// (0x00016ad4) popup_sp_fs_action_menu_pane

0xc3d9,	// (0x0001b1c1) bg_sp_fs_ctrlbar_pane_g1

0xe3f3,	// (0x0001d1db) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3fc,	// (0x0001d1e4) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe405,	// (0x0001d1ed) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc3d9,	// (0x0001b1c1) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0001eab5) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc1be,	// (0x0001afa6) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc1be,	// (0x0001afa6) bg_sp_fs_ctrlbar_ddmenu_pane

0xe40e,	// (0x0001d1f6) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe40e,	// (0x0001d1f6) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe41a,	// (0x0001d202) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe41a,	// (0x0001d202) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0001eabe) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0001eabe) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe426,	// (0x0001d20e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe426,	// (0x0001d20e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7d30,	// (0x00016b18) list_medium_line_t2_right_icon_g1

0x7d38,	// (0x00016b20) list_medium_line_t2_right_icon_t1

0x7d48,	// (0x00016b30) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0001eac3) list_medium_line_t2_right_icon_t

0xbebe,	// (0x0001aca6) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbebe,	// (0x0001aca6) bg_sp_fs_ctrlbar_pane

0x7da2,	// (0x00016b8a) main_sp_fs_ctrlbar_button_pane_cp01

0x7dac,	// (0x00016b94) main_sp_fs_ctrlbar_ddmenu_pane

0xe478,	// (0x0001d260) main_sp_fs_ctrlbar_pane_g1

0xe484,	// (0x0001d26c) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0001eac8) main_sp_fs_ctrlbar_pane_g

0xe490,	// (0x0001d278) main_sp_fs_ctrlbar_pane_t1

0x7db6,	// (0x00016b9e) main_sp_fs_ctrlbar_pane

0x7dda,	// (0x00016bc2) main_sp_fs_listscroll_pane_te_cp01

0x7dfa,	// (0x00016be2) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7dfa,	// (0x00016be2) popup_sp_fs_action_menu_pane_cp01

0x9546,	// (0x0001832e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9546,	// (0x0001832e) bg_sp_fs_highlight_list_pane_cp01

0xe4c0,	// (0x0001d2a8) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe4c0,	// (0x0001d2a8) sp_fs_action_menu_list_gene_pane_g1

0xe4cf,	// (0x0001d2b7) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe4cf,	// (0x0001d2b7) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0001ead2) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0001ead2) sp_fs_action_menu_list_gene_pane_g

0xe4dc,	// (0x0001d2c4) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe4dc,	// (0x0001d2c4) sp_fs_action_menu_list_gene_pane_t1

0xe4f4,	// (0x0001d2dc) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4f4,	// (0x0001d2dc) sp_fs_action_menu_list_gene_pane

0xe515,	// (0x0001d2fd) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe515,	// (0x0001d2fd) popup_sp_fs_action_menu_bg_pane

0xe523,	// (0x0001d30b) sp_fs_action_menu_list_pane_ParamLimits

0xe523,	// (0x0001d30b) sp_fs_action_menu_list_pane

0x7e2a,	// (0x00016c12) sp_fs_scroll_pane_cp01_ParamLimits

0x7e2a,	// (0x00016c12) sp_fs_scroll_pane_cp01

0x7e50,	// (0x00016c38) list_medium_line_plain_t2_t1

0x7e60,	// (0x00016c48) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0001ead7) list_medium_line_plain_t2_t

0x7e70,	// (0x00016c58) list_medium_line_plain_t3_t1

0x7e80,	// (0x00016c68) list_medium_line_plain_t3_t2

0x7e8e,	// (0x00016c76) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0001eadc) list_medium_line_plain_t3_t

0x123e,	// (0x00010026) list_medium_line_x2_t2_g2_g1_ParamLimits

0x123e,	// (0x00010026) list_medium_line_x2_t2_g2_g1

0x1256,	// (0x0001003e) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1256,	// (0x0001003e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0001e02e) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0001e02e) list_medium_line_x2_t2_g2_g

0x24a4,	// (0x0001128c) list_medium_line_x2_t2_g2_t1_ParamLimits

0x24a4,	// (0x0001128c) list_medium_line_x2_t2_g2_t1

0x128b,	// (0x00010073) list_medium_line_x2_t2_g2_t2_ParamLimits

0x128b,	// (0x00010073) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0001eae3) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0001eae3) list_medium_line_x2_t2_g2_t

0x123e,	// (0x00010026) list_medium_line_x2_t4_g2_g1_ParamLimits

0x123e,	// (0x00010026) list_medium_line_x2_t4_g2_g1

0x1256,	// (0x0001003e) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1256,	// (0x0001003e) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0001e02e) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0001e02e) list_medium_line_x2_t4_g2_g

0x7e9c,	// (0x00016c84) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7e9c,	// (0x00016c84) list_medium_line_x2_t4_g2_t1

0x7eb6,	// (0x00016c9e) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7eb6,	// (0x00016c9e) list_medium_line_x2_t4_g2_t2

0x7ecc,	// (0x00016cb4) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7ecc,	// (0x00016cb4) list_medium_line_x2_t4_g2_t3

0x128b,	// (0x00010073) list_medium_line_x2_t4_g2_t4_ParamLimits

0x128b,	// (0x00010073) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0001eae8) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0001eae8) list_medium_line_x2_t4_g2_t

0x7ee1,	// (0x00016cc9) list_medium_line_t3_right_iconx2_g1

0x7d30,	// (0x00016b18) list_medium_line_t3_right_iconx2_g2

0x7ee9,	// (0x00016cd1) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0001eaf1) list_medium_line_t3_right_iconx2_g

0x7ef3,	// (0x00016cdb) list_medium_line_t3_right_iconx2_t1

0x7f03,	// (0x00016ceb) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0001eaf8) list_medium_line_t3_right_iconx2_t

0x123e,	// (0x00010026) list_medium_line_x3_t4_g4_g1_ParamLimits

0x123e,	// (0x00010026) list_medium_line_x3_t4_g4_g1

0x124a,	// (0x00010032) list_medium_line_x3_t4_g4_g2_ParamLimits

0x124a,	// (0x00010032) list_medium_line_x3_t4_g4_g2

0x248c,	// (0x00011274) list_medium_line_x3_t4_g4_g3_ParamLimits

0x248c,	// (0x00011274) list_medium_line_x3_t4_g4_g3

0x7f11,	// (0x00016cf9) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7f11,	// (0x00016cf9) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0001eafd) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0001eafd) list_medium_line_x3_t4_g4_g

0x7f1d,	// (0x00016d05) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7f1d,	// (0x00016d05) list_medium_line_x3_t4_g4_t1

0x7f34,	// (0x00016d1c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7f34,	// (0x00016d1c) list_medium_line_x3_t4_g4_t2

0x24b9,	// (0x000112a1) list_medium_line_x3_t4_g4_t3_ParamLimits

0x24b9,	// (0x000112a1) list_medium_line_x3_t4_g4_t3

0x7f4f,	// (0x00016d37) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7f4f,	// (0x00016d37) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0001eb06) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0001eb06) list_medium_line_x3_t4_g4_t

0x7f6c,	// (0x00016d54) list_single_dyc_row_text_pane_t1_ParamLimits

0x7f6c,	// (0x00016d54) list_single_dyc_row_text_pane_t1

0x7fb5,	// (0x00016d9d) list_single_dyc_row_text_pane_t2_ParamLimits

0x7fb5,	// (0x00016d9d) list_single_dyc_row_text_pane_t2

0xe545,	// (0x0001d32d) list_single_dyc_row_text_pane_t3_ParamLimits

0xe545,	// (0x0001d32d) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0001eb0f) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0001eb0f) list_single_dyc_row_text_pane_t

0xe569,	// (0x0001d351) list_single_dyc_row_pane_g1_ParamLimits

0xe569,	// (0x0001d351) list_single_dyc_row_pane_g1

0xe575,	// (0x0001d35d) list_single_dyc_row_pane_g2_ParamLimits

0xe575,	// (0x0001d35d) list_single_dyc_row_pane_g2

0xe581,	// (0x0001d369) list_single_dyc_row_pane_g3_ParamLimits

0xe581,	// (0x0001d369) list_single_dyc_row_pane_g3

0xe58d,	// (0x0001d375) list_single_dyc_row_pane_g4_ParamLimits

0xe58d,	// (0x0001d375) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0001eb1c) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0001eb1c) list_single_dyc_row_pane_g

0xe599,	// (0x0001d381) list_single_dyc_row_text_pane_ParamLimits

0xe599,	// (0x0001d381) list_single_dyc_row_text_pane

0x94d6,	// (0x000182be) bg_sp_fs_scroll_pane

0xe5b8,	// (0x0001d3a0) thumb_sp_fs_scroll_pane

0x6608,	// (0x000153f0) list_medium_line_g1_ParamLimits

0x6608,	// (0x000153f0) list_medium_line_g1

0x80ea,	// (0x00016ed2) list_medium_line_t1_ParamLimits

0x80ea,	// (0x00016ed2) list_medium_line_t1

0x123e,	// (0x00010026) list_medium_line_x2_g1_ParamLimits

0x123e,	// (0x00010026) list_medium_line_x2_g1

0x124a,	// (0x00010032) list_medium_line_x2_g2_ParamLimits

0x124a,	// (0x00010032) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0001eb25) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0001eb25) list_medium_line_x2_g

0xe5c1,	// (0x0001d3a9) list_medium_line_x2_t1_ParamLimits

0xe5c1,	// (0x0001d3a9) list_medium_line_x2_t1

0x123e,	// (0x00010026) list_medium_line_x3_g1_ParamLimits

0x123e,	// (0x00010026) list_medium_line_x3_g1

0x124a,	// (0x00010032) list_medium_line_x3_g2_ParamLimits

0x124a,	// (0x00010032) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0001eb25) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0001eb25) list_medium_line_x3_g

0xe5c1,	// (0x0001d3a9) list_medium_line_x3_t1_ParamLimits

0xe5c1,	// (0x0001d3a9) list_medium_line_x3_t1

0xe5d7,	// (0x0001d3bf) thumb_sp_fs_scroll_pane_g1

0xe5e0,	// (0x0001d3c8) thumb_sp_fs_scroll_pane_g2

0xe5e9,	// (0x0001d3d1) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001eb2a) thumb_sp_fs_scroll_pane_g

0xe5d7,	// (0x0001d3bf) bg_sp_fs_scroll_pane_g1

0xe5e0,	// (0x0001d3c8) bg_sp_fs_scroll_pane_g2

0xe5e9,	// (0x0001d3d1) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001eb2a) bg_sp_fs_scroll_pane_g

0x123e,	// (0x00010026) list_medium_line_x2_t3_g4_g1_ParamLimits

0x123e,	// (0x00010026) list_medium_line_x2_t3_g4_g1

0x12e5,	// (0x000100cd) list_medium_line_x2_t3_g4_g2_ParamLimits

0x12e5,	// (0x000100cd) list_medium_line_x2_t3_g4_g2

0x124a,	// (0x00010032) list_medium_line_x2_t3_g4_g3_ParamLimits

0x124a,	// (0x00010032) list_medium_line_x2_t3_g4_g3

0x1256,	// (0x0001003e) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1256,	// (0x0001003e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0001e0aa) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0001e0aa) list_medium_line_x2_t3_g4_g

0x80ff,	// (0x00016ee7) list_medium_line_x2_t3_g4_t1_ParamLimits

0x80ff,	// (0x00016ee7) list_medium_line_x2_t3_g4_t1

0x8119,	// (0x00016f01) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8119,	// (0x00016f01) list_medium_line_x2_t3_g4_t2

0x128b,	// (0x00010073) list_medium_line_x2_t3_g4_t3_ParamLimits

0x128b,	// (0x00010073) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0001eb31) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0001eb31) list_medium_line_x2_t3_g4_t

0x6608,	// (0x000153f0) list_medium_line_g2_g1_ParamLimits

0x6608,	// (0x000153f0) list_medium_line_g2_g1

0x6614,	// (0x000153fc) list_medium_line_g2_g2_ParamLimits

0x6614,	// (0x000153fc) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0001e7e8) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0001e7e8) list_medium_line_g2_g

0x8133,	// (0x00016f1b) list_medium_line_g2_t1_ParamLimits

0x8133,	// (0x00016f1b) list_medium_line_g2_t1

0x6608,	// (0x000153f0) list_medium_line_t3_g2_g1_ParamLimits

0x6608,	// (0x000153f0) list_medium_line_t3_g2_g1

0x6614,	// (0x000153fc) list_medium_line_t3_g2_g2_ParamLimits

0x6614,	// (0x000153fc) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0001e7e8) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0001e7e8) list_medium_line_t3_g2_g

0x8148,	// (0x00016f30) list_medium_line_t3_g2_t1_ParamLimits

0x8148,	// (0x00016f30) list_medium_line_t3_g2_t1

0x8162,	// (0x00016f4a) list_medium_line_t3_g2_t2_ParamLimits

0x8162,	// (0x00016f4a) list_medium_line_t3_g2_t2

0x8178,	// (0x00016f60) list_medium_line_t3_g2_t3_ParamLimits

0x8178,	// (0x00016f60) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0001eb38) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0001eb38) list_medium_line_t3_g2_t

0x7d30,	// (0x00016b18) list_medium_line_right_icon_g1

0x8192,	// (0x00016f7a) list_medium_line_right_icon_t1

0x6608,	// (0x000153f0) list_medium_line_t2_g1_ParamLimits

0x6608,	// (0x000153f0) list_medium_line_t2_g1

0x81a0,	// (0x00016f88) list_medium_line_t2_t1_ParamLimits

0x81a0,	// (0x00016f88) list_medium_line_t2_t1

0x81ba,	// (0x00016fa2) list_medium_line_t2_t2_ParamLimits

0x81ba,	// (0x00016fa2) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0001eb3f) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0001eb3f) list_medium_line_t2_t

0x6608,	// (0x000153f0) list_medium_line_t3_g1_ParamLimits

0x6608,	// (0x000153f0) list_medium_line_t3_g1

0x81d3,	// (0x00016fbb) list_medium_line_t3_t1_ParamLimits

0x81d3,	// (0x00016fbb) list_medium_line_t3_t1

0x81ed,	// (0x00016fd5) list_medium_line_t3_t2_ParamLimits

0x81ed,	// (0x00016fd5) list_medium_line_t3_t2

0x8203,	// (0x00016feb) list_medium_line_t3_t3_ParamLimits

0x8203,	// (0x00016feb) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0001eb44) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0001eb44) list_medium_line_t3_t

0x6608,	// (0x000153f0) list_medium_line_g3_g1_ParamLimits

0x6608,	// (0x000153f0) list_medium_line_g3_g1

0x8218,	// (0x00017000) list_medium_line_g3_g2_ParamLimits

0x8218,	// (0x00017000) list_medium_line_g3_g2

0x6614,	// (0x000153fc) list_medium_line_g3_g3_ParamLimits

0x6614,	// (0x000153fc) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0001eb4b) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0001eb4b) list_medium_line_g3_g

0x8224,	// (0x0001700c) list_medium_line_g3_t1_ParamLimits

0x8224,	// (0x0001700c) list_medium_line_g3_t1

0x6608,	// (0x000153f0) list_medium_line_t2_g3_g1_ParamLimits

0x6608,	// (0x000153f0) list_medium_line_t2_g3_g1

0x8218,	// (0x00017000) list_medium_line_t2_g3_g2_ParamLimits

0x8218,	// (0x00017000) list_medium_line_t2_g3_g2

0x6614,	// (0x000153fc) list_medium_line_t2_g3_g3_ParamLimits

0x6614,	// (0x000153fc) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0001eb4b) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0001eb4b) list_medium_line_t2_g3_g

0x8239,	// (0x00017021) list_medium_line_t2_g3_t1_ParamLimits

0x8239,	// (0x00017021) list_medium_line_t2_g3_t1

0x8253,	// (0x0001703b) list_medium_line_t2_g3_t2_ParamLimits

0x8253,	// (0x0001703b) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0001eb52) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0001eb52) list_medium_line_t2_g3_t

0x6608,	// (0x000153f0) list_medium_line_t3_g3_g1_ParamLimits

0x6608,	// (0x000153f0) list_medium_line_t3_g3_g1

0x8218,	// (0x00017000) list_medium_line_t3_g3_g2_ParamLimits

0x8218,	// (0x00017000) list_medium_line_t3_g3_g2

0x6614,	// (0x000153fc) list_medium_line_t3_g3_g3_ParamLimits

0x6614,	// (0x000153fc) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0001eb4b) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0001eb4b) list_medium_line_t3_g3_g

0x8271,	// (0x00017059) list_medium_line_t3_g3_t1_ParamLimits

0x8271,	// (0x00017059) list_medium_line_t3_g3_t1

0x828a,	// (0x00017072) list_medium_line_t3_g3_t2_ParamLimits

0x828a,	// (0x00017072) list_medium_line_t3_g3_t2

0x82a0,	// (0x00017088) list_medium_line_t3_g3_t3_ParamLimits

0x82a0,	// (0x00017088) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0001eb57) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0001eb57) list_medium_line_t3_g3_t

0x7ee1,	// (0x00016cc9) list_medium_line_right_iconx2_g1

0x7d30,	// (0x00016b18) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001eb5e) list_medium_line_right_iconx2_g

0x82ba,	// (0x000170a2) list_medium_line_right_iconx2_t1

0x7ee1,	// (0x00016cc9) list_medium_line_t2_right_iconx2_g1

0x7d30,	// (0x00016b18) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001eb5e) list_medium_line_t2_right_iconx2_g

0x82c8,	// (0x000170b0) list_medium_line_t2_right_iconx2_t1

0x82d8,	// (0x000170c0) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0001eb63) list_medium_line_t2_right_iconx2_t

0x82ea,	// (0x000170d2) list_medium_line_x4_t4_t1

0x82f8,	// (0x000170e0) list_medium_line_x4_t4_t2

0x8308,	// (0x000170f0) list_medium_line_x4_t4_t3

0x8318,	// (0x00017100) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0001eb68) list_medium_line_x4_t4_t

0x836b,	// (0x00017153) tport_appsw_pane_ParamLimits

0x836b,	// (0x00017153) tport_appsw_pane

0x8383,	// (0x0001716b) tport_contact_pane_ParamLimits

0x8383,	// (0x0001716b) tport_contact_pane

0x839b,	// (0x00017183) tport_listscroll_pane_ParamLimits

0x839b,	// (0x00017183) tport_listscroll_pane

0x83b5,	// (0x0001719d) cell_tport_appsw_pane_ParamLimits

0x83b5,	// (0x0001719d) cell_tport_appsw_pane

0xd1c0,	// (0x0001bfa8) tport_appsw_pane_g1_ParamLimits

0xd1c0,	// (0x0001bfa8) tport_appsw_pane_g1

0xe5f2,	// (0x0001d3da) tport_contact_pane_g1

0xdea1,	// (0x0001cc89) tport_contact_pane_t1

0xe5fb,	// (0x0001d3e3) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0001eb71) tport_contact_pane_t

0xe609,	// (0x0001d3f1) list_tport_pane

0xe612,	// (0x0001d3fa) scroll_pane_cp_030

0x83fd,	// (0x000171e5) cell_tport_appsw_pane_g1

0x840d,	// (0x000171f5) cell_tport_appsw_pane_t1

0x841b,	// (0x00017203) grid_highlight_pane_cp019

0x8423,	// (0x0001720b) list_tport_double_graphic_pane_ParamLimits

0x8423,	// (0x0001720b) list_tport_double_graphic_pane

0x9546,	// (0x0001832e) list_highlight_pane_cp023_ParamLimits

0x9546,	// (0x0001832e) list_highlight_pane_cp023

0x8430,	// (0x00017218) list_tport_double_graphic_pane_g1_ParamLimits

0x8430,	// (0x00017218) list_tport_double_graphic_pane_g1

0x843d,	// (0x00017225) list_tport_double_graphic_pane_t1_ParamLimits

0x843d,	// (0x00017225) list_tport_double_graphic_pane_t1

0x8452,	// (0x0001723a) list_tport_double_graphic_pane_t2_ParamLimits

0x8452,	// (0x0001723a) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0001eb7d) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0001eb7d) list_tport_double_graphic_pane_t

0x94d6,	// (0x000182be) main_cale_note_pane

0x5ce1,	// (0x00014ac9) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5ce1,	// (0x00014ac9) cell_vitu2_function_top_wide_pane_cp01

0x7884,	// (0x0001666c) wait_bar_pane_cp05_ParamLimits

0x9546,	// (0x0001832e) listscroll_cmail_pane

0xe61b,	// (0x0001d403) list_cmail_pane

0x8464,	// (0x0001724c) list_cmail_body_pane

0x8479,	// (0x00017261) list_single_cmail_header_caption_pane

0x848f,	// (0x00017277) list_single_cmail_header_detail_pane_ParamLimits

0x848f,	// (0x00017277) list_single_cmail_header_detail_pane

0xe62b,	// (0x0001d413) list_single_cmail_header_caption_pane_t1

0x84b8,	// (0x000172a0) list_single_cmail_header_detail_pane_g1_ParamLimits

0x84b8,	// (0x000172a0) list_single_cmail_header_detail_pane_g1

0xe642,	// (0x0001d42a) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe642,	// (0x0001d42a) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0001eb82) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0001eb82) list_single_cmail_header_detail_pane_g

0xe65b,	// (0x0001d443) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe65b,	// (0x0001d443) list_single_cmail_header_detail_pane_t1

0xe6bb,	// (0x0001d4a3) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe6bb,	// (0x0001d4a3) list_single_cmail_header_editor_pane_bg

0xdffe,	// (0x0001cde6) list_cmail_body_pane_g1

0xe6d2,	// (0x0001d4ba) list_cmail_body_pane_t1

0xd20f,	// (0x0001bff7) list_single_cmail_header_editor_pane_bg_g1

0xa13d,	// (0x00018f25) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd21f,	// (0x0001c007) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd217,	// (0x0001bfff) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd4f0,	// (0x0001c2d8) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd23f,	// (0x0001c027) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd22f,	// (0x0001c017) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd237,	// (0x0001c01f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa11d,	// (0x00018f05) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x84d0,	// (0x000172b8) calenote_gesture_pane_ParamLimits

0x84d0,	// (0x000172b8) calenote_gesture_pane

0x84f0,	// (0x000172d8) calenote_window_pane_ParamLimits

0x84f0,	// (0x000172d8) calenote_window_pane

0xe6e0,	// (0x0001d4c8) popup_note_window_cp01

0x850c,	// (0x000172f4) calenote_swipe_1_pane_ParamLimits

0x850c,	// (0x000172f4) calenote_swipe_1_pane

0x7cd2,	// (0x00016aba) calenote_swipe_2_pane_ParamLimits

0x7cd2,	// (0x00016aba) calenote_swipe_2_pane

0xe358,	// (0x0001d140) calenote_swipe_1_pane_g1_ParamLimits

0xe358,	// (0x0001d140) calenote_swipe_1_pane_g1

0xe365,	// (0x0001d14d) calenote_swipe_1_pane_g2_ParamLimits

0xe365,	// (0x0001d14d) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0001eaab) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0001eaab) calenote_swipe_1_pane_g

0xe6f2,	// (0x0001d4da) calenote_swipe_1_pane_t1_ParamLimits

0xe6f2,	// (0x0001d4da) calenote_swipe_1_pane_t1

0xe358,	// (0x0001d140) calenote_swipe_2_pane_g1_ParamLimits

0xe358,	// (0x0001d140) calenote_swipe_2_pane_g1

0xe711,	// (0x0001d4f9) calenote_swipe_2_pane_g2_ParamLimits

0xe711,	// (0x0001d4f9) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0001eb8e) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0001eb8e) calenote_swipe_2_pane_g

0xe71d,	// (0x0001d505) calenote_swipe_2_pane_t1_ParamLimits

0xe71d,	// (0x0001d505) calenote_swipe_2_pane_t1

0x94d6,	// (0x000182be) main_mup_navstr_pane

0x49ae,	// (0x00013796) main_mup3_pane_t7_ParamLimits

0x49ae,	// (0x00013796) main_mup3_pane_t7

0xcd6e,	// (0x0001bb56) main_mp4_pane_g6_ParamLimits

0xcd6e,	// (0x0001bb56) main_mp4_pane_g6

0xcf96,	// (0x0001bd7e) main_image3_pane_t4_ParamLimits

0xcf96,	// (0x0001bd7e) main_image3_pane_t4

0x8521,	// (0x00017309) popup_navstr_preview_pane_ParamLimits

0x8521,	// (0x00017309) popup_navstr_preview_pane

0x8535,	// (0x0001731d) scroll_navstr_pane_ParamLimits

0x8535,	// (0x0001731d) scroll_navstr_pane

0x94d6,	// (0x000182be) bg_popup_preview_window_pane_cp04

0xe744,	// (0x0001d52c) popup_navstr_preview_pane_t1

0x8549,	// (0x00017331) scroll_navstr_pane_g1_ParamLimits

0x8549,	// (0x00017331) scroll_navstr_pane_g1

0x855d,	// (0x00017345) scroll_navstr_pane_t1_ParamLimits

0x855d,	// (0x00017345) scroll_navstr_pane_t1

0xe6e9,	// (0x0001d4d1) bg_button_pane_cp014

0xe6e9,	// (0x0001d4d1) bg_button_pane_cp030

0x7bab,	// (0x00016993) list_double_fisheye_pane_g4_ParamLimits

0x7bab,	// (0x00016993) list_double_fisheye_pane_g4

0x7bb7,	// (0x0001699f) list_double_fisheye_pane_g5_ParamLimits

0x7bb7,	// (0x0001699f) list_double_fisheye_pane_g5

0xd303,	// (0x0001c0eb) sp_fs_scroll_pane_cp03

0xe478,	// (0x0001d260) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe484,	// (0x0001d26c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0001eac8) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe490,	// (0x0001d278) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe623,	// (0x0001d40b) sp_fs_scroll_pane_cp02

0x9e19,	// (0x00018c01) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9e19,	// (0x00018c01) popup_sp_fs_calendar_preview_list_single_pane

0x94d6,	// (0x000182be) main_cam6_pano_pane

0x9546,	// (0x0001832e) main_mup3_pane_ParamLimits

0x94d6,	// (0x000182be) main_phacti_pane

0x7757,	// (0x0001653f) bg_button_pane_cp11

0x7771,	// (0x00016559) main_mobtv_info_pane_g2_ParamLimits

0x7771,	// (0x00016559) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0001ea28) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0001ea28) main_mobtv_info_pane_g

0x794e,	// (0x00016736) sc_clock_pane_t5_ParamLimits

0x794e,	// (0x00016736) sc_clock_pane_t5

0x7a16,	// (0x000167fe) main_radioblah_pane_g1_ParamLimits

0xe29b,	// (0x0001d083) main_radioblah_pane_t3_ParamLimits

0xe29b,	// (0x0001d083) main_radioblah_pane_t3

0xe2b3,	// (0x0001d09b) main_radioblah_pane_t4_ParamLimits

0xe2b3,	// (0x0001d09b) main_radioblah_pane_t4

0x7a3e,	// (0x00016826) main_radioblah_text_pane_ParamLimits

0x7a3e,	// (0x00016826) main_radioblah_text_pane

0x7a50,	// (0x00016838) main_radioblah_info_pane_g1_ParamLimits

0x7ae9,	// (0x000168d1) main_radioblah_info_pane_t4_ParamLimits

0x7ae9,	// (0x000168d1) main_radioblah_info_pane_t4

0x9546,	// (0x0001832e) main_sp_fs_calendar_pane

0x8574,	// (0x0001735c) main_phacti_pane_g1

0x857c,	// (0x00017364) phacti_note_pane_ParamLimits

0x857c,	// (0x00017364) phacti_note_pane

0xe75b,	// (0x0001d543) phacti_term_pane_ParamLimits

0xe75b,	// (0x0001d543) phacti_term_pane

0xe770,	// (0x0001d558) phacti_note_pane_t1_ParamLimits

0xe770,	// (0x0001d558) phacti_note_pane_t1

0xe787,	// (0x0001d56f) phacti_term_pane_g1

0xe78f,	// (0x0001d577) phacti_term_pane_t1_ParamLimits

0xe78f,	// (0x0001d577) phacti_term_pane_t1

0xe7b9,	// (0x0001d5a1) popup_sp_fs_calendar_preview_list_single_pane_g1

0x9eb8,	// (0x00018ca0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0001eb98) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7c1,	// (0x0001d5a9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7c1,	// (0x0001d5a9) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7d7,	// (0x0001d5bf) aid_popup_sp_fs_bg_corner_pane

0xc3d9,	// (0x0001b1c1) popup_sp_fs_calendar_preview_bg_pane_g1

0x94d6,	// (0x000182be) popup_sp_fs_calendar_preview_bg_pane

0xe7df,	// (0x0001d5c7) popup_sp_fs_calendar_preview_list_pane

0xbebe,	// (0x0001aca6) bg_main_sp_fs_cale_pane_ParamLimits

0xbebe,	// (0x0001aca6) bg_main_sp_fs_cale_pane

0xe7f0,	// (0x0001d5d8) listscroll_cale_mrui_pane_ParamLimits

0xe7f0,	// (0x0001d5d8) listscroll_cale_mrui_pane

0xd293,	// (0x0001c07b) listscroll_sp_fs_schedule_track_pane

0xe805,	// (0x0001d5ed) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe805,	// (0x0001d5ed) main_sp_fs_ctrlbar_pane_cp01

0xe818,	// (0x0001d600) main_sp_fs_ribbon_pane

0xe820,	// (0x0001d608) popup_sp_fs_cale_preview_window

0x85f1,	// (0x000173d9) list_single_sp_fs_schedule_track_pane_ParamLimits

0x85f1,	// (0x000173d9) list_single_sp_fs_schedule_track_pane

0x9546,	// (0x0001832e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9546,	// (0x0001832e) bg_sp_fs_highlight_list_pane_cp03

0x8604,	// (0x000173ec) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8604,	// (0x000173ec) list_single_sp_fs_schedule_track_pane_g1

0x8610,	// (0x000173f8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8610,	// (0x000173f8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0001eb9d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0001eb9d) list_single_sp_fs_schedule_track_pane_g

0x861c,	// (0x00017404) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x861c,	// (0x00017404) list_single_sp_fs_schedule_track_pane_t1

0x8636,	// (0x0001741e) sp_fs_schedule_track_pane_ParamLimits

0x8636,	// (0x0001741e) sp_fs_schedule_track_pane

0xe832,	// (0x0001d61a) sp_fs_schedule_track_pane_g1

0xe83a,	// (0x0001d622) sp_fs_schedule_track_pane_g2

0xe842,	// (0x0001d62a) sp_fs_schedule_track_pane_g3

0xe84a,	// (0x0001d632) sp_fs_schedule_track_pane_g4

0xe852,	// (0x0001d63a) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0001eba2) sp_fs_schedule_track_pane_g

0xd20f,	// (0x0001bff7) bg_sp_fs_schedule_viewer_highlight_g1

0xa13d,	// (0x00018f25) bg_sp_fs_schedule_viewer_highlight_g2

0xd217,	// (0x0001bfff) bg_sp_fs_schedule_viewer_highlight_g3

0xd21f,	// (0x0001c007) bg_sp_fs_schedule_viewer_highlight_g4

0xd4f0,	// (0x0001c2d8) bg_sp_fs_schedule_viewer_highlight_g5

0xd22f,	// (0x0001c017) bg_sp_fs_schedule_viewer_highlight_g6

0xd237,	// (0x0001c01f) bg_sp_fs_schedule_viewer_highlight_g7

0xd23f,	// (0x0001c027) bg_sp_fs_schedule_viewer_highlight_g8

0xa11d,	// (0x00018f05) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0001ebad) bg_sp_fs_schedule_viewer_highlight_g

0x94d6,	// (0x000182be) bg_main_sp_fs_ribbon_pane

0x8647,	// (0x0001742f) main_sp_fs_ribbon_pane_g1

0xe85a,	// (0x0001d642) main_sp_fs_ribbon_pane_t1

0x8650,	// (0x00017438) main_sp_fs_ribbon_pane_t2

0xe869,	// (0x0001d651) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0001ebc0) main_sp_fs_ribbon_pane_t

0xe878,	// (0x0001d660) main_sp_fs_ribbon_scheduler_pane

0xe880,	// (0x0001d668) bg_main_sp_fs_ribbon_pane_g1

0xe889,	// (0x0001d671) bg_main_sp_fs_ribbon_pane_g2

0xe892,	// (0x0001d67a) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0001ebc7) bg_main_sp_fs_ribbon_pane_g

0xe89a,	// (0x0001d682) main_sp_fs_ribbon_scheduler_pane_g1

0xe8a3,	// (0x0001d68b) main_sp_fs_ribbon_scheduler_pane_g2

0xe8ac,	// (0x0001d694) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0001ebce) main_sp_fs_ribbon_scheduler_pane_g

0xe8b5,	// (0x0001d69d) list_cale_mrui_pane

0x865f,	// (0x00017447) sp_fs_scroll_pane_cp07_ParamLimits

0x865f,	// (0x00017447) sp_fs_scroll_pane_cp07

0x867b,	// (0x00017463) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x867b,	// (0x00017463) bg_sp_fs_schedule_viewer_highlight

0xe8c2,	// (0x0001d6aa) list_single_sp_fs_schedule_track_pane_cp01

0xe8ca,	// (0x0001d6b2) list_sp_fs_schedule_track_pane

0xe8d2,	// (0x0001d6ba) sp_fs_scroll_pane_cp06_ParamLimits

0xe8d2,	// (0x0001d6ba) sp_fs_scroll_pane_cp06

0xc3d9,	// (0x0001b1c1) bgmain_sp_fs_calendar_pane_g1

0x868b,	// (0x00017473) list_single_cale_mrui_pane_ParamLimits

0x868b,	// (0x00017473) list_single_cale_mrui_pane

0xe8e4,	// (0x0001d6cc) list_single_cale_mrui_row_pane_ParamLimits

0xe8e4,	// (0x0001d6cc) list_single_cale_mrui_row_pane

0xe8f1,	// (0x0001d6d9) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8f1,	// (0x0001d6d9) list_single_cale_mrui_row_pane_g1

0xe936,	// (0x0001d71e) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe936,	// (0x0001d71e) list_single_cale_mrui_row_pane_t1

0x86ac,	// (0x00017494) list_single_cale_mrui_row_pane_t2_ParamLimits

0x86ac,	// (0x00017494) list_single_cale_mrui_row_pane_t2

0xe948,	// (0x0001d730) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe948,	// (0x0001d730) list_single_cale_mrui_row_pane_t3

0xe977,	// (0x0001d75f) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe977,	// (0x0001d75f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0001ebdc) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0001ebdc) list_single_cale_mrui_row_pane_t

0x8714,	// (0x000174fc) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8714,	// (0x000174fc) list_single_cmail_header_editor_pane_bg_cp01

0x873a,	// (0x00017522) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x873a,	// (0x00017522) list_single_cmail_header_editor_pane_bg_cp02

0x875a,	// (0x00017542) main_radioblah_text_pane_t1_ParamLimits

0x875a,	// (0x00017542) main_radioblah_text_pane_t1

0xe9a6,	// (0x0001d78e) cam6_indi_pane_cp01

0xe9ae,	// (0x0001d796) cam6_mode_pane_cp01

0xe9b6,	// (0x0001d79e) cam6_pano_pane

0xe9bf,	// (0x0001d7a7) cam6_zoom_pane_cp01

0xe9c7,	// (0x0001d7af) cam6_pano_image_pane

0xe9d2,	// (0x0001d7ba) cam6_pano_pane_g1

0xdffe,	// (0x0001cde6) cam6_pano_pane_g2

0xe9db,	// (0x0001d7c3) cam6_pano_pane_g3

0xe9e4,	// (0x0001d7cc) cam6_pano_pane_g4

0xc9d1,	// (0x0001b7b9) cam6_pano_pane_g5

0xe9ed,	// (0x0001d7d5) cam6_pano_pane_g6

0xe9f7,	// (0x0001d7df) cam6_pano_pane_g7

0xe9ff,	// (0x0001d7e7) cam6_pano_pane_g8

0xea08,	// (0x0001d7f0) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0001ebe5) cam6_pano_pane_g

0x94d6,	// (0x000182be) main_browser_tag_pane

0xe73c,	// (0x0001d524) grid_navstr_albumart_pane

0xea13,	// (0x0001d7fb) cell_navstr_albumart_pane_ParamLimits

0xea13,	// (0x0001d7fb) cell_navstr_albumart_pane

0xea33,	// (0x0001d81b) cell_navstr_albumart_pane_g1

0xbccf,	// (0x0001aab7) cell_navstr_albumart_pane_g2

0xbcdf,	// (0x0001aac7) cell_navstr_albumart_pane_g3

0xbcd7,	// (0x0001aabf) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0001ebf8) cell_navstr_albumart_pane_g

0x8774,	// (0x0001755c) bt_list_pane_ParamLimits

0x8774,	// (0x0001755c) bt_list_pane

0x8788,	// (0x00017570) bt_list_pane_t1

0x8797,	// (0x0001757f) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0001ec01) bt_list_pane_t

0x94d6,	// (0x000182be) main_cale_prevew_pane

0x87a6,	// (0x0001758e) popup_cale_preview_window_ParamLimits

0x87a6,	// (0x0001758e) popup_cale_preview_window

0x9546,	// (0x0001832e) bg_popup_preview_window_pane_cp05_ParamLimits

0x9546,	// (0x0001832e) bg_popup_preview_window_pane_cp05

0xea3b,	// (0x0001d823) list_cale_preview_pane_ParamLimits

0xea3b,	// (0x0001d823) list_cale_preview_pane

0x87c1,	// (0x000175a9) list_double_cale_preview_pane_ParamLimits

0x87c1,	// (0x000175a9) list_double_cale_preview_pane

0x87d3,	// (0x000175bb) list_single_cale_preview_pane_ParamLimits

0x87d3,	// (0x000175bb) list_single_cale_preview_pane

0x87e9,	// (0x000175d1) list_single_cale_preview_pane_g1

0x87f1,	// (0x000175d9) list_single_cale_preview_pane_t1_ParamLimits

0x87f1,	// (0x000175d9) list_single_cale_preview_pane_t1

0x8806,	// (0x000175ee) list_double_cale_preview_pane_g1

0x880e,	// (0x000175f6) list_double_cale_preview_pane_t1_ParamLimits

0x880e,	// (0x000175f6) list_double_cale_preview_pane_t1

0x8823,	// (0x0001760b) list_double_cale_preview_pane_t2_ParamLimits

0x8823,	// (0x0001760b) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0001ec06) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0001ec06) list_double_cale_preview_pane_t

0x94d6,	// (0x000182be) main_ezdial_pane

0x9546,	// (0x0001832e) main_sp_fs_email_pane_ParamLimits

0x7d5a,	// (0x00016b42) cmail_ddmenu_btn01_pane_ParamLimits

0x7d5a,	// (0x00016b42) cmail_ddmenu_btn01_pane

0x7d6d,	// (0x00016b55) cmail_ddmenu_btn02_pane_ParamLimits

0x7d6d,	// (0x00016b55) cmail_ddmenu_btn02_pane

0x7d90,	// (0x00016b78) cmail_ddmenu_btn03_pane_ParamLimits

0x7d90,	// (0x00016b78) cmail_ddmenu_btn03_pane

0x7db6,	// (0x00016b9e) main_sp_fs_ctrlbar_pane_ParamLimits

0x7dda,	// (0x00016bc2) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8464,	// (0x0001724c) list_cmail_body_pane_ParamLimits

0xe639,	// (0x0001d421) bg_button_pane_cp12

0xe64e,	// (0x0001d436) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe64e,	// (0x0001d436) list_single_cmail_header_detail_pane_g3

0xe697,	// (0x0001d47f) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe697,	// (0x0001d47f) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0001eb89) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0001eb89) list_single_cmail_header_detail_pane_t

0xe7a4,	// (0x0001d58c) phacti_term_pane_t2_ParamLimits

0xe7a4,	// (0x0001d58c) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0001eb93) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0001eb93) phacti_term_pane_t

0xea47,	// (0x0001d82f) aid_size_list_single_double

0x883b,	// (0x00017623) popup_ezdial_listscroll_window

0x8857,	// (0x0001763f) popup_number_entry_window_cp01

0x9eda,	// (0x00018cc2) bg_popup_call_pane_cp09

0xea53,	// (0x0001d83b) ezdial_list_pane

0xea5b,	// (0x0001d843) scroll_pane_cp23

0xbebe,	// (0x0001aca6) bg_button_pane_cp028_ParamLimits

0xbebe,	// (0x0001aca6) bg_button_pane_cp028

0x8865,	// (0x0001764d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8865,	// (0x0001764d) cmail_ddmenu_btn01_pane_g1

0x8871,	// (0x00017659) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8871,	// (0x00017659) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0001ec0b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0001ec0b) cmail_ddmenu_btn01_pane_g

0xea63,	// (0x0001d84b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea63,	// (0x0001d84b) cmail_ddmenu_btn01_pane_t1

0xbebe,	// (0x0001aca6) bg_button_pane_cp029_ParamLimits

0xbebe,	// (0x0001aca6) bg_button_pane_cp029

0x887d,	// (0x00017665) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x887d,	// (0x00017665) cmail_ddmenu_btn02_pane_g1

0x8896,	// (0x0001767e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8896,	// (0x0001767e) cmail_ddmenu_btn02_pane_t1

0x9546,	// (0x0001832e) bg_button_pane_cp031_ParamLimits

0x9546,	// (0x0001832e) bg_button_pane_cp031

0x887d,	// (0x00017665) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x887d,	// (0x00017665) cmail_ddmenu_btn03_pane_g1

0x8896,	// (0x0001767e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8896,	// (0x0001767e) cmail_ddmenu_btn03_pane_t1

0x5558,	// (0x00014340) cell_dialer2_keypad_pane_t1_ParamLimits

0x5572,	// (0x0001435a) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5572,	// (0x0001435a) cell_dialer2_keypad_pane_t1_copy1

0x757a,	// (0x00016362) ncimui_group_button_pane

0x9546,	// (0x0001832e) main_sp_fs_calendar_pane_ParamLimits

0x8479,	// (0x00017261) list_single_cmail_header_caption_pane_ParamLimits

0xe7e7,	// (0x0001d5cf) aid_recal_txt_sm_pane

0x94d6,	// (0x000182be) mian_recal_day_pane

0xe820,	// (0x0001d608) popup_sp_fs_cale_preview_window_ParamLimits

0xea78,	// (0x0001d860) list_recal_day_pane

0xeacc,	// (0x0001d8b4) list_single_recal_day_pane_ParamLimits

0xeacc,	// (0x0001d8b4) list_single_recal_day_pane

0xeade,	// (0x0001d8c6) list_single_recal_day_pane_g1_ParamLimits

0xeade,	// (0x0001d8c6) list_single_recal_day_pane_g1

0xeaea,	// (0x0001d8d2) list_single_recal_day_pane_g2_ParamLimits

0xeaea,	// (0x0001d8d2) list_single_recal_day_pane_g2

0xeaf6,	// (0x0001d8de) list_single_recal_day_pane_g3_ParamLimits

0xeaf6,	// (0x0001d8de) list_single_recal_day_pane_g3

0x88ba,	// (0x000176a2) list_single_recal_day_pane_g4_ParamLimits

0x88ba,	// (0x000176a2) list_single_recal_day_pane_g4

0xeb02,	// (0x0001d8ea) list_single_recal_day_pane_g5_ParamLimits

0xeb02,	// (0x0001d8ea) list_single_recal_day_pane_g5

0xeb0e,	// (0x0001d8f6) list_single_recal_day_pane_g6_ParamLimits

0xeb0e,	// (0x0001d8f6) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0001ec1a) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0001ec1a) list_single_recal_day_pane_g

0xeb22,	// (0x0001d90a) list_single_recal_day_pane_t1

0xeb34,	// (0x0001d91c) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0001ec25) list_single_recal_day_pane_t

0x88d2,	// (0x000176ba) ncimui_query_button_pane_ParamLimits

0x88d2,	// (0x000176ba) ncimui_query_button_pane

0x88e2,	// (0x000176ca) ncimui_query_button_pane_t1_ParamLimits

0x88e2,	// (0x000176ca) ncimui_query_button_pane_t1

0xeb46,	// (0x0001d92e) ncimui_query_button_pane_t2_ParamLimits

0xeb46,	// (0x0001d92e) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0001ec2a) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0001ec2a) ncimui_query_button_pane_t

0x88f5,	// (0x000176dd) query_button_pane_ParamLimits

0x88f5,	// (0x000176dd) query_button_pane

0x94d6,	// (0x000182be) bg_button_pane_cp0028

0xeb59,	// (0x0001d941) query_button_pane_t1

0x35ad,	// (0x00012395) main_tport_pane_ParamLimits

0x8328,	// (0x00017110) bg_popup_window_pane_cp01_ParamLimits

0x8328,	// (0x00017110) bg_popup_window_pane_cp01

0x8343,	// (0x0001712b) heading_pane_cp08_ParamLimits

0x8343,	// (0x0001712b) heading_pane_cp08

0x8356,	// (0x0001713e) heading_pane_cp07_ParamLimits

0x8356,	// (0x0001713e) heading_pane_cp07

0x83fd,	// (0x000171e5) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0001eb76) cell_tport_appsw_pane_g

0xab64,	// (0x0001994c) input_candi_list_open_g1

0xa32e,	// (0x00019116) list_cale_time_pane_g6_ParamLimits

0xa32e,	// (0x00019116) list_cale_time_pane_g6

0x4376,	// (0x0001315e) aid_size_touch_calib_1_ParamLimits

0x4376,	// (0x0001315e) aid_size_touch_calib_1

0x4388,	// (0x00013170) aid_size_touch_calib_2_ParamLimits

0x4388,	// (0x00013170) aid_size_touch_calib_2

0x43a0,	// (0x00013188) aid_size_touch_calib_3_ParamLimits

0x43a0,	// (0x00013188) aid_size_touch_calib_3

0x43be,	// (0x000131a6) aid_size_touch_calib_4_ParamLimits

0x43be,	// (0x000131a6) aid_size_touch_calib_4

0x43d6,	// (0x000131be) main_touch_calib_button_group_pane_ParamLimits

0x43d6,	// (0x000131be) main_touch_calib_button_group_pane

0x43ee,	// (0x000131d6) main_touch_calib_pane_g1_ParamLimits

0x4400,	// (0x000131e8) main_touch_calib_pane_g2_ParamLimits

0x4412,	// (0x000131fa) main_touch_calib_pane_g3_ParamLimits

0x4424,	// (0x0001320c) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0001e539) main_touch_calib_pane_g_ParamLimits

0x4436,	// (0x0001321e) main_touch_calib_pane_t1_ParamLimits

0x4450,	// (0x00013238) main_touch_calib_pane_t2_ParamLimits

0x446a,	// (0x00013252) main_touch_calib_pane_t3_ParamLimits

0x447e,	// (0x00013266) main_touch_calib_pane_t4_ParamLimits

0x4492,	// (0x0001327a) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0001e542) main_touch_calib_pane_t_ParamLimits

0xc771,	// (0x0001b559) list_single_fp_cale_pane_g3_ParamLimits

0xc771,	// (0x0001b559) list_single_fp_cale_pane_g3

0x9546,	// (0x0001832e) bg_button_pane_cp012_ParamLimits

0x9546,	// (0x0001832e) bg_vkb2_func_pane_cp03_ParamLimits

0x65be,	// (0x000153a6) cell_vitu2_function_top_pane_g1_ParamLimits

0x9546,	// (0x0001832e) bg_vkb2_func_pane_cp04_ParamLimits

0x7505,	// (0x000162ed) main_ncimui_button_group_pane_ParamLimits

0x7505,	// (0x000162ed) main_ncimui_button_group_pane

0x7565,	// (0x0001634d) main_ncimui_pane_t3_ParamLimits

0x7565,	// (0x0001634d) main_ncimui_pane_t3

0xe752,	// (0x0001d53a) phacti_button_group_pane

0xea47,	// (0x0001d82f) aid_size_list_single_double_ParamLimits

0x883b,	// (0x00017623) popup_ezdial_listscroll_window_ParamLimits

0x8857,	// (0x0001763f) popup_number_entry_window_cp01_ParamLimits

0x8908,	// (0x000176f0) phacti_button_pane_ParamLimits

0x8908,	// (0x000176f0) phacti_button_pane

0x94d6,	// (0x000182be) bg_button_pane_cp14

0xeb67,	// (0x0001d94f) phacti_button_pane_t1

0x8919,	// (0x00017701) main_touch_calib_button_pane_ParamLimits

0x8919,	// (0x00017701) main_touch_calib_button_pane

0x9ca9,	// (0x00018a91) bg_button_pane_cp18_ParamLimits

0x9ca9,	// (0x00018a91) bg_button_pane_cp18

0xeb75,	// (0x0001d95d) main_touch_calib_button_pane_t1_ParamLimits

0xeb75,	// (0x0001d95d) main_touch_calib_button_pane_t1

0xeb8b,	// (0x0001d973) main_touch_calib_button_pane_t2_ParamLimits

0xeb8b,	// (0x0001d973) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0001ec2f) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0001ec2f) main_touch_calib_button_pane_t

0x94d6,	// (0x000182be) cell_ncimui_button_pane

0x94d6,	// (0x000182be) bg_button_pane_cp032

0xeba9,	// (0x0001d991) cell_ncimui_button_pane_t1

0xcf76,	// (0x0001bd5e) image3_infobar_pane_ParamLimits

0xcf76,	// (0x0001bd5e) image3_infobar_pane

0x797a,	// (0x00016762) fs_bigclock_status_pane_ParamLimits

0x797a,	// (0x00016762) fs_bigclock_status_pane

0x7987,	// (0x0001676f) main_fs_bigclock_clock_pane_ParamLimits

0x7987,	// (0x0001676f) main_fs_bigclock_clock_pane

0x79a5,	// (0x0001678d) main_fs_bigclock_indi_pane_ParamLimits

0x79a5,	// (0x0001678d) main_fs_bigclock_indi_pane

0x79d7,	// (0x000167bf) main_fs_bigclock_swipe_pane_ParamLimits

0x79d7,	// (0x000167bf) main_fs_bigclock_swipe_pane

0x94d6,	// (0x000182be) main_fs_clock_dumped_data

0xe10b,	// (0x0001cef3) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe10b,	// (0x0001cef3) list_single_fs_bigclock_indicator_pane_g1

0xe126,	// (0x0001cf0e) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe126,	// (0x0001cf0e) list_single_fs_bigclock_indicator_pane_g2

0xe140,	// (0x0001cf28) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe140,	// (0x0001cf28) list_single_fs_bigclock_indicator_pane_g3

0xe15a,	// (0x0001cf42) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe15a,	// (0x0001cf42) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0001ea5c) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0001ea5c) list_single_fs_bigclock_indicator_pane_g

0xe185,	// (0x0001cf6d) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe185,	// (0x0001cf6d) list_single_fs_bigclock_indicator_pane_t1

0xe1ad,	// (0x0001cf95) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe1ad,	// (0x0001cf95) list_single_fs_bigclock_indicator_pane_t2

0xe1d5,	// (0x0001cfbd) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe1d5,	// (0x0001cfbd) list_single_fs_bigclock_indicator_pane_t3

0xe1fd,	// (0x0001cfe5) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe1fd,	// (0x0001cfe5) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0001ea67) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0001ea67) list_single_fs_bigclock_indicator_pane_t

0xebb7,	// (0x0001d99f) image3_infobar_fav_pane_ParamLimits

0xebb7,	// (0x0001d99f) image3_infobar_fav_pane

0xebc7,	// (0x0001d9af) image3_infobar_loc_pane_ParamLimits

0xebc7,	// (0x0001d9af) image3_infobar_loc_pane

0xebdb,	// (0x0001d9c3) image3_infobar_time_pane_ParamLimits

0xebdb,	// (0x0001d9c3) image3_infobar_time_pane

0xc3d9,	// (0x0001b1c1) image3_infobar_time_pane_g1

0xebeb,	// (0x0001d9d3) image3_infobar_time_pane_t1

0xc3d9,	// (0x0001b1c1) image3_infobar_loc_pane_g1

0xebf9,	// (0x0001d9e1) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0001ec34) image3_infobar_loc_pane_g

0xec01,	// (0x0001d9e9) image3_infobar_loc_pane_t1

0xc3d9,	// (0x0001b1c1) image3_infobar_fav_pane_g1

0xec0f,	// (0x0001d9f7) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0001ec39) image3_infobar_fav_pane_g

0xec17,	// (0x0001d9ff) fs_bigclock_status_battery_pane

0xec20,	// (0x0001da08) fs_bigclock_status_signal_pane

0xec29,	// (0x0001da11) fs_bigclock_status_title_pane

0xec32,	// (0x0001da1a) fs_bigclock_status_signal_pane_g1

0xec3b,	// (0x0001da23) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0001ec3e) fs_bigclock_status_signal_pane_g

0xec43,	// (0x0001da2b) fs_bigclock_status_battery_pane_g1

0xec4c,	// (0x0001da34) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0001ec43) fs_bigclock_status_battery_pane_g

0xec54,	// (0x0001da3c) fs_bigclock_status_title_pane_t1

0x892e,	// (0x00017716) main_fs_bigclock_clock_pane_g1

0x892e,	// (0x00017716) main_fs_bigclock_clock_pane_g2

0x893f,	// (0x00017727) main_fs_bigclock_clock_pane_g3

0x893f,	// (0x00017727) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0001ec48) main_fs_bigclock_clock_pane_g

0x8952,	// (0x0001773a) main_fs_bigclock_clock_pane_t1

0x8968,	// (0x00017750) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0001ec51) main_fs_bigclock_clock_pane_t

0xec62,	// (0x0001da4a) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec62,	// (0x0001da4a) list_single_fs_bigclock_indicator_pane

0xec73,	// (0x0001da5b) list_single_fs_bigclock_pane_ParamLimits

0xec73,	// (0x0001da5b) list_single_fs_bigclock_pane

0xec99,	// (0x0001da81) main_fs_bigclock_indicator_pane_t1

0xeca8,	// (0x0001da90) list_single_fs_bigclock_pane_g1

0xecb0,	// (0x0001da98) list_single_fs_bigclock_pane_t1

0xc3d9,	// (0x0001b1c1) main_fs_bigclock_swipe_pane_g1

0xecf3,	// (0x0001dadb) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0001ec62) main_fs_bigclock_swipe_pane_g

0xecfb,	// (0x0001dae3) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecfb,	// (0x0001dae3) main_fs_bigclock_swipe_pane_t1

0x24e3,	// (0x000112cb) call_type_pane_ParamLimits

0x94d6,	// (0x000182be) main_btmg_pane

0xe91d,	// (0x0001d705) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe91d,	// (0x0001d705) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0001ebd5) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0001ebd5) list_single_cale_mrui_row_pane_g

0xeab3,	// (0x0001d89b) list_recal_vselct_arw_lo_pane

0xeabb,	// (0x0001d8a3) list_recal_vselct_arw_up_pane

0xeac3,	// (0x0001d8ab) list_recal_vselct_pane

0x89c2,	// (0x000177aa) btmg_button_pane

0x89cc,	// (0x000177b4) main_btmg_pane_g1

0x94d6,	// (0x000182be) bg_button_pane_cp044

0xed18,	// (0x0001db00) btmg_button_pane_t1

0xbeaa,	// (0x0001ac92) aid_listscroll_gen

0x9546,	// (0x0001832e) main_cntbar_detail_pane

0xe61b,	// (0x0001d403) list_cmail_folder_pane

0xd303,	// (0x0001c0eb) sp_fs_scroll_pane_cp03_ParamLimits

0x8479,	// (0x00017261) list_single_fs_dyc_pane_cp01_ParamLimits

0x8479,	// (0x00017261) list_single_fs_dyc_pane_cp01

0xed26,	// (0x0001db0e) aid_size_cmail_indent

0xed2f,	// (0x0001db17) list_single_dyc_row_pane_cp01

0x8a08,	// (0x000177f0) cntbar_detail_list_pane_ParamLimits

0x8a08,	// (0x000177f0) cntbar_detail_list_pane

0x8a54,	// (0x0001783c) main_cntbar_detail_cont_pane_ParamLimits

0x8a54,	// (0x0001783c) main_cntbar_detail_cont_pane

0xd303,	// (0x0001c0eb) scroll_pane_cp032_ParamLimits

0xd303,	// (0x0001c0eb) scroll_pane_cp032

0x8a68,	// (0x00017850) cntbar_detail_list_event_pane_ParamLimits

0x8a68,	// (0x00017850) cntbar_detail_list_event_pane

0x8a18,	// (0x00017800) cntbar_detail_list_shct_pane

0xa18b,	// (0x00018f73) aid_list_gen

0xed38,	// (0x0001db20) aid_scroll

0xed41,	// (0x0001db29) aid_size_touch_scroll_bar

0x6cbf,	// (0x00015aa7) aid_list_double

0x6cad,	// (0x00015a95) aid_list_single

0x6cad,	// (0x00015a95) aid_list_single_lg

0x8a78,	// (0x00017860) aid_list_z_g_a_sm

0x8a80,	// (0x00017868) aid_list_z_g_d

0x8a88,	// (0x00017870) aid_txt_z_prm

0x8a96,	// (0x0001787e) aid_txt_z_prm_cp01

0x8aa4,	// (0x0001788c) aid_txt_z_sec

0x8ab2,	// (0x0001789a) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8ab2,	// (0x0001789a) main_cntbar_detail_cont_pane_g1

0x8ac6,	// (0x000178ae) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8ac6,	// (0x000178ae) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0001ec67) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0001ec67) main_cntbar_detail_cont_pane_g

0xed4a,	// (0x0001db32) main_cntbar_detail_cont_pane_t1

0xed58,	// (0x0001db40) main_cntbar_detail_cont_pane_t2

0xed66,	// (0x0001db4e) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0001ec6c) main_cntbar_detail_cont_pane_t

0x8ad6,	// (0x000178be) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8ad6,	// (0x000178be) cell_cntbar_detail_list_shct_pane

0xed74,	// (0x0001db5c) cntbar_detail_list_shct_pane_g1

0xed7d,	// (0x0001db65) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0001ec73) cntbar_detail_list_shct_pane_g

0x8aea,	// (0x000178d2) cntbar_detail_list_event_pane_g1_ParamLimits

0x8aea,	// (0x000178d2) cntbar_detail_list_event_pane_g1

0x8af6,	// (0x000178de) cntbar_detail_list_event_pane_g2_ParamLimits

0x8af6,	// (0x000178de) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0001ec78) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0001ec78) cntbar_detail_list_event_pane_g

0x8b62,	// (0x0001794a) cntbar_detail_list_event_pane_t1_ParamLimits

0x8b62,	// (0x0001794a) cntbar_detail_list_event_pane_t1

0x8b77,	// (0x0001795f) cntbar_detail_list_event_pane_t2_ParamLimits

0x8b77,	// (0x0001795f) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0001ec85) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0001ec85) cntbar_detail_list_event_pane_t

0xc3d9,	// (0x0001b1c1) cell_cntbar_detail_list_shct_pane_g1

0xa9a3,	// (0x0001978b) navi_pane_mv_g3

0x9546,	// (0x0001832e) main_cntbar_detail_pane_ParamLimits

0x94d6,	// (0x000182be) main_notif_wgt_pane

0xcd08,	// (0x0001baf0) aid_tch_main_mp4_pane_g4

0xcf0a,	// (0x0001bcf2) popup_slider_window_cp02

0xeaa9,	// (0x0001d891) list_recal_day_event_pane

0x89d6,	// (0x000177be) cntbar_detail_btn_pane_ParamLimits

0x89d6,	// (0x000177be) cntbar_detail_btn_pane

0x89ef,	// (0x000177d7) cntbar_detail_btn_pane_cp01_ParamLimits

0x89ef,	// (0x000177d7) cntbar_detail_btn_pane_cp01

0x8a18,	// (0x00017800) cntbar_detail_list_shct_pane_ParamLimits

0x8a28,	// (0x00017810) cntbar_detail_pane_g1_ParamLimits

0x8a28,	// (0x00017810) cntbar_detail_pane_g1

0x8a38,	// (0x00017820) cntbar_detail_pane_t1_ParamLimits

0x8a38,	// (0x00017820) cntbar_detail_pane_t1

0x8b02,	// (0x000178ea) cntbar_detail_list_event_pane_g3_ParamLimits

0x8b02,	// (0x000178ea) cntbar_detail_list_event_pane_g3

0x8b1a,	// (0x00017902) cntbar_detail_list_event_pane_g4_ParamLimits

0x8b1a,	// (0x00017902) cntbar_detail_list_event_pane_g4

0x8b32,	// (0x0001791a) cntbar_detail_list_event_pane_g5_ParamLimits

0x8b32,	// (0x0001791a) cntbar_detail_list_event_pane_g5

0x8b4a,	// (0x00017932) cntbar_detail_list_event_pane_g6_ParamLimits

0x8b4a,	// (0x00017932) cntbar_detail_list_event_pane_g6

0x8b8c,	// (0x00017974) cntbar_detail_list_event_pane_t3_ParamLimits

0x8b8c,	// (0x00017974) cntbar_detail_list_event_pane_t3

0x8b9e,	// (0x00017986) popup_notif_wgt_window_ParamLimits

0x8b9e,	// (0x00017986) popup_notif_wgt_window

0x8bb7,	// (0x0001799f) popup_submenu_window_cp01_ParamLimits

0x8bb7,	// (0x0001799f) popup_submenu_window_cp01

0x9eda,	// (0x00018cc2) bg_popup_window_pane_cp10

0xed86,	// (0x0001db6e) listscroll_notif_wgt_pane

0xed98,	// (0x0001db80) list_notif_wgt_window

0xeda1,	// (0x0001db89) scroll_pane_cp033

0x8bcd,	// (0x000179b5) list_notif_wgt_row_pane_ParamLimits

0x8bcd,	// (0x000179b5) list_notif_wgt_row_pane

0xedaa,	// (0x0001db92) aid_size_list_notif_wgt_del

0xedb7,	// (0x0001db9f) list_notif_wgt_row_pane_g1

0xedc3,	// (0x0001dbab) list_notif_wgt_row_pane_g2

0xedd2,	// (0x0001dbba) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0001ec8c) list_notif_wgt_row_pane_g

0xeddf,	// (0x0001dbc7) list_notif_wgt_row_pane_t1

0xedf5,	// (0x0001dbdd) list_notif_wgt_row_pane_t2

0xee07,	// (0x0001dbef) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0001ec93) list_notif_wgt_row_pane_t

0xd518,	// (0x0001c300) list_recal_day_event_pane_g1

0xee19,	// (0x0001dc01) list_recal_day_event_pane_t1

0x94d6,	// (0x000182be) bg_button_pane_cp045

0x8bdd,	// (0x000179c5) cntbar_detail_btn_pane_t1

0xbebe,	// (0x0001aca6) main_callh_pane_ParamLimits

0xbebe,	// (0x0001aca6) main_callh_pane

0x94d6,	// (0x000182be) main_coverflow0_pane

0x94d6,	// (0x000182be) main_wgtman_pane

0x79ef,	// (0x000167d7) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x79ef,	// (0x000167d7) main_fs_bigclock_unlock_btn_pane

0x83f5,	// (0x000171dd) bg_button_pane_cp16

0x8405,	// (0x000171ed) cell_tport_appsw_pane_g3

0x8beb,	// (0x000179d3) cf0_flow_pane_ParamLimits

0x8beb,	// (0x000179d3) cf0_flow_pane

0xee28,	// (0x0001dc10) listscroll_cf0_pane

0xee33,	// (0x0001dc1b) main_cf0_pane_g1

0x8c00,	// (0x000179e8) main_cf0_pane_t1_ParamLimits

0x8c00,	// (0x000179e8) main_cf0_pane_t1

0x8c17,	// (0x000179ff) main_cf0_pane_t2_ParamLimits

0x8c17,	// (0x000179ff) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0001ec9f) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0001ec9f) main_cf0_pane_t

0xee45,	// (0x0001dc2d) scroll_pane_cp11

0x8c2e,	// (0x00017a16) cf0_flow_pane_g1

0x8c36,	// (0x00017a1e) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0001eca4) cf0_flow_pane_g

0x8c3e,	// (0x00017a26) cf0_flow_pane_t1

0x94d6,	// (0x000182be) main_call6_pane

0x94d6,	// (0x000182be) main_calllock_pane

0x8c4c,	// (0x00017a34) call6_btn_grp_pane_ParamLimits

0x8c4c,	// (0x00017a34) call6_btn_grp_pane

0x8c66,	// (0x00017a4e) call6_pane_g1_ParamLimits

0x8c66,	// (0x00017a4e) call6_pane_g1

0x8c7c,	// (0x00017a64) popup_call6_1st_window_ParamLimits

0x8c7c,	// (0x00017a64) popup_call6_1st_window

0x8c8d,	// (0x00017a75) popup_call6_2nd_window_ParamLimits

0x8c8d,	// (0x00017a75) popup_call6_2nd_window

0x8c9e,	// (0x00017a86) cell_call6_btn_pane_ParamLimits

0x8c9e,	// (0x00017a86) cell_call6_btn_pane

0x9eda,	// (0x00018cc2) bg_popup_call2_in_pane_cp03

0xee50,	// (0x0001dc38) popup_call6_1st_window_g1

0xee58,	// (0x0001dc40) popup_call6_1st_window_g2

0xee60,	// (0x0001dc48) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0001eca9) popup_call6_1st_window_g

0xee68,	// (0x0001dc50) popup_call6_1st_window_t1

0xee77,	// (0x0001dc5f) popup_call6_1st_window_t2

0xee85,	// (0x0001dc6d) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0001ecb0) popup_call6_1st_window_t

0x9eda,	// (0x00018cc2) bg_popup_call2_in_pane_cp04

0xee50,	// (0x0001dc38) popup_call6_2nd_window_g1

0xee58,	// (0x0001dc40) popup_call6_2nd_window_g2

0xee60,	// (0x0001dc48) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0001eca9) popup_call6_2nd_window_g

0xee68,	// (0x0001dc50) popup_call6_2nd_window_t1

0x94d6,	// (0x000182be) bg_button_pane_cp15

0xee93,	// (0x0001dc7b) cell_call6_btn_pane_g1

0xee9c,	// (0x0001dc84) cell_call6_btn_pane_t1

0x8cb1,	// (0x00017a99) listscroll_wgtman_pane_ParamLimits

0x8cb1,	// (0x00017a99) listscroll_wgtman_pane

0x8cd2,	// (0x00017aba) wgtman_btn_pane_ParamLimits

0x8cd2,	// (0x00017aba) wgtman_btn_pane

0xa7aa,	// (0x00019592) aid_scroll_copy1

0xeeab,	// (0x0001dc93) list_wgtman_pane

0x8d15,	// (0x00017afd) wgtman_btn_pane_g1_ParamLimits

0x8d15,	// (0x00017afd) wgtman_btn_pane_g1

0x8d41,	// (0x00017b29) wgtman_btn_pane_t1_ParamLimits

0x8d41,	// (0x00017b29) wgtman_btn_pane_t1

0xeeb5,	// (0x0001dc9d) wgtman_btn_pane_t2_ParamLimits

0xeeb5,	// (0x0001dc9d) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0001ecb7) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0001ecb7) wgtman_btn_pane_t

0x8d7e,	// (0x00017b66) listrow_wgtman_pane_ParamLimits

0x8d7e,	// (0x00017b66) listrow_wgtman_pane

0x8d90,	// (0x00017b78) listrow_wgtman_pane_g1

0x8d9d,	// (0x00017b85) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0001ecbc) listrow_wgtman_pane_g

0x8dbb,	// (0x00017ba3) listrow_wgtman_pane_t1

0x8dd3,	// (0x00017bbb) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0001ecc1) listrow_wgtman_pane_t

0x8df9,	// (0x00017be1) wait_bar_pane_cp09

0xeecc,	// (0x0001dcb4) main_calllock_btn_pane

0xeed6,	// (0x0001dcbe) main_calllock_pane_g1

0x94d6,	// (0x000182be) bg_button_pane_cp17

0xee93,	// (0x0001dc7b) main_calllock_btn_pane_g1

0xeee2,	// (0x0001dcca) main_calllock_btn_pane_t1

0x94d6,	// (0x000182be) main_dialer3_pane

0x94d6,	// (0x000182be) main_fmrd2_pane

0xc3d9,	// (0x0001b1c1) main_fs_bigclock_unlock_btn_pane_g1

0x8e13,	// (0x00017bfb) main_fs_bigclock_unlock_btn_pane_t1

0x8e21,	// (0x00017c09) area_fmrd2_info_pane_ParamLimits

0x8e21,	// (0x00017c09) area_fmrd2_info_pane

0x8e32,	// (0x00017c1a) area_fmrd2_visual_pane_ParamLimits

0x8e32,	// (0x00017c1a) area_fmrd2_visual_pane

0x8e40,	// (0x00017c28) fmrd2_indi_pane_ParamLimits

0x8e40,	// (0x00017c28) fmrd2_indi_pane

0x8e4d,	// (0x00017c35) area_fmrd2_visual_pane_g1

0x8e55,	// (0x00017c3d) area_fmrd2_visual_pane_t1

0x8e65,	// (0x00017c4d) area_fmrd2_visual_pane_t2

0x8e75,	// (0x00017c5d) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0001eccb) area_fmrd2_visual_pane_t

0x8e85,	// (0x00017c6d) area_fmrd2_info_pane_g1

0x8e8d,	// (0x00017c75) area_fmrd2_info_pane_t1

0x8e9d,	// (0x00017c85) area_fmrd2_info_pane_t2

0x8ead,	// (0x00017c95) area_fmrd2_info_pane_t3

0x8ebd,	// (0x00017ca5) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0001ecd2) area_fmrd2_info_pane_t

0x8ecb,	// (0x00017cb3) fmrd2_indi_pane_t1

0x8edb,	// (0x00017cc3) fmrd2_indi_pane_t2

0x8eeb,	// (0x00017cd3) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0001ecdb) fmrd2_indi_pane_t

0xe169,	// (0x0001cf51) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe169,	// (0x0001cf51) list_single_fs_bigclock_indicator_pane_g5

0xe21a,	// (0x0001d002) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe21a,	// (0x0001d002) list_single_fs_bigclock_indicator_pane_t5

0x8590,	// (0x00017378) aid_cell_bcale_month_pane_ParamLimits

0x8590,	// (0x00017378) aid_cell_bcale_month_pane

0x85ae,	// (0x00017396) bcale_month_pane_ParamLimits

0x85ae,	// (0x00017396) bcale_month_pane

0x85d2,	// (0x000173ba) bcale_preview_pane_ParamLimits

0x85d2,	// (0x000173ba) bcale_preview_pane

0xecb0,	// (0x0001da98) list_single_fs_bigclock_pane_t1_ParamLimits

0xeccf,	// (0x0001dab7) list_single_fs_bigclock_pane_t2_ParamLimits

0xeccf,	// (0x0001dab7) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0001ec5d) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0001ec5d) list_single_fs_bigclock_pane_t

0x8e0b,	// (0x00017bf3) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0001ecc6) main_fs_bigclock_unlock_btn_pane_g

0x8efb,	// (0x00017ce3) aid_dia3_key_size_ParamLimits

0x8efb,	// (0x00017ce3) aid_dia3_key_size

0x8f0a,	// (0x00017cf2) aid_dia3_listrow_size_ParamLimits

0x8f0a,	// (0x00017cf2) aid_dia3_listrow_size

0x8f1f,	// (0x00017d07) dia3_keypad_fun_pane_ParamLimits

0x8f1f,	// (0x00017d07) dia3_keypad_fun_pane

0x8f3b,	// (0x00017d23) dia3_keypad_num_pane_ParamLimits

0x8f3b,	// (0x00017d23) dia3_keypad_num_pane

0x8f56,	// (0x00017d3e) dia3_listscroll_pane_ParamLimits

0x8f56,	// (0x00017d3e) dia3_listscroll_pane

0x8f69,	// (0x00017d51) dia3_numentry_pane_ParamLimits

0x8f69,	// (0x00017d51) dia3_numentry_pane

0xeef1,	// (0x0001dcd9) dia3_list_pane

0xeefc,	// (0x0001dce4) scroll_pane_cp12

0x94d6,	// (0x000182be) bg_dia3_numentry_pane

0x8f7d,	// (0x00017d65) dia3_numentry_pane_t1

0x8f8c,	// (0x00017d74) cell_dia3_key_num_pane

0x8f94,	// (0x00017d7c) cell_dia3_key0_fun_pane_ParamLimits

0x8f94,	// (0x00017d7c) cell_dia3_key0_fun_pane

0x8fa8,	// (0x00017d90) cell_dia3_key1_fun_pane_ParamLimits

0x8fa8,	// (0x00017d90) cell_dia3_key1_fun_pane

0x8fc0,	// (0x00017da8) dia3_listrow_pane

0xdebc,	// (0x0001cca4) bg_dia3_numentry_pane_g1

0x94d6,	// (0x000182be) bg_button_pane_cp21

0xef07,	// (0x0001dcef) cell_dia3_key_num_pane_t1

0xef15,	// (0x0001dcfd) cell_dia3_key_num_pane_t2

0xef24,	// (0x0001dd0c) cell_dia3_key_num_pane_t3

0xef33,	// (0x0001dd1b) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0001ece2) cell_dia3_key_num_pane_t

0x94d6,	// (0x000182be) bg_button_pane_cp19

0x8fd2,	// (0x00017dba) cell_dia3_key0_fun_pane_g1

0x94d6,	// (0x000182be) bg_button_pane_cp20

0x8fda,	// (0x00017dc2) cell_dia3_key1_fun_pane_g1

0x8fe2,	// (0x00017dca) area_left_week_number_pane

0x8fee,	// (0x00017dd6) area_top_day_name_pane

0x9001,	// (0x00017de9) frame_month_view_pane

0xef42,	// (0x0001dd2a) grid_month_view_pane

0x9014,	// (0x00017dfc) cell_top_day_name_pane_ParamLimits

0x9014,	// (0x00017dfc) cell_top_day_name_pane

0x9041,	// (0x00017e29) cell_area_left_week_number_pane_ParamLimits

0x9041,	// (0x00017e29) cell_area_left_week_number_pane

0x9055,	// (0x00017e3d) cell_month_view_pane_ParamLimits

0x9055,	// (0x00017e3d) cell_month_view_pane

0xef50,	// (0x0001dd38) frm_month_g1

0x9082,	// (0x00017e6a) frm_month_g2

0x9095,	// (0x00017e7d) frm_month_g3

0x90a8,	// (0x00017e90) frm_month_g4

0x90bb,	// (0x00017ea3) frm_month_g5

0x90ce,	// (0x00017eb6) frm_month_g6

0x90e1,	// (0x00017ec9) frm_month_g7

0xef5d,	// (0x0001dd45) frm_month_g8

0x90f4,	// (0x00017edc) frm_month_g9

0x9104,	// (0x00017eec) frm_month_g10

0x9114,	// (0x00017efc) frm_month_g11

0x9124,	// (0x00017f0c) frm_month_g12

0x9136,	// (0x00017f1e) frm_month_g13

0x9148,	// (0x00017f30) frm_month_g14

0x915c,	// (0x00017f44) frm_month_g15

0x9170,	// (0x00017f58) frm_month_g16

0x000f,

0xff03,	// (0x0001eceb) frm_month_g

0xef6a,	// (0x0001dd52) cell_top_day_name_pane_t1

0x9184,	// (0x00017f6c) cell_area_left_week_number_pane_g1

0x9190,	// (0x00017f78) cell_area_left_week_number_pane_t1

0xc645,	// (0x0001b42d) cell_month_view_pane_g1

0x91a3,	// (0x00017f8b) cell_month_view_pane_t1

0x94d6,	// (0x000182be) main_fps_pane

0xe440,	// (0x0001d228) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe440,	// (0x0001d228) cmail_ddmenu_btn02_pane_cp1

0xe45c,	// (0x0001d244) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe45c,	// (0x0001d244) cmail_ddmenu_btn02_pane_cp2

0x8889,	// (0x00017671) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8889,	// (0x00017671) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0001ec10) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0001ec10) cmail_ddmenu_btn02_pane_g

0x88a8,	// (0x00017690) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x88a8,	// (0x00017690) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0001ec15) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0001ec15) cmail_ddmenu_btn02_pane_t

0x91b6,	// (0x00017f9e) fps_text_pane_ParamLimits

0x91b6,	// (0x00017f9e) fps_text_pane

0x91cd,	// (0x00017fb5) main_fps_pane_g1_ParamLimits

0x91cd,	// (0x00017fb5) main_fps_pane_g1

0x91e7,	// (0x00017fcf) wait_bar_pane_cp010_ParamLimits

0x91e7,	// (0x00017fcf) wait_bar_pane_cp010

0x91f8,	// (0x00017fe0) fps_text_pane_t1_ParamLimits

0x91f8,	// (0x00017fe0) fps_text_pane_t1

0xea97,	// (0x0001d87f) cam4_image_uncrop_pane_g1

0xeaa0,	// (0x0001d888) cam4_image_uncrop_pane_g2

0x59fe,	// (0x000147e6) cam4_image_uncrop_pane_g3

0x5a07,	// (0x000147ef) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0001e6d6) cam4_image_uncrop_pane_g

0x8fc0,	// (0x00017da8) dia3_listrow_pane_ParamLimits

0x94d6,	// (0x000182be) main_phob2_pane

0x83c6,	// (0x000171ae) cell_tport_appsw_pane_cp02_ParamLimits

0x83c6,	// (0x000171ae) cell_tport_appsw_pane_cp02

0x83da,	// (0x000171c2) cell_tport_appsw_pane_cp03_ParamLimits

0x83da,	// (0x000171c2) cell_tport_appsw_pane_cp03

0x94d6,	// (0x000182be) phob2_contact_card_pane

0x94d6,	// (0x000182be) phob2_listscroll_pane

0xef7d,	// (0x0001dd65) phob2_list_pane

0xef85,	// (0x0001dd6d) scroll_pane_cp034

0x9210,	// (0x00017ff8) phob2_cc_data_pane_ParamLimits

0x9210,	// (0x00017ff8) phob2_cc_data_pane

0x922f,	// (0x00018017) phob2_cc_listscroll_pane_ParamLimits

0x922f,	// (0x00018017) phob2_cc_listscroll_pane

0x8d7e,	// (0x00017b66) list_double_large_graphic_phob2_pane_ParamLimits

0x8d7e,	// (0x00017b66) list_double_large_graphic_phob2_pane

0x924d,	// (0x00018035) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x924d,	// (0x00018035) list_double_large_graphic_phob2_pane_g1

0x9263,	// (0x0001804b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9263,	// (0x0001804b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0001ed0c) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0001ed0c) list_double_large_graphic_phob2_pane_g

0x926f,	// (0x00018057) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x926f,	// (0x00018057) list_double_large_graphic_phob2_pane_t1

0x9284,	// (0x0001806c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9284,	// (0x0001806c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0001ed11) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0001ed11) list_double_large_graphic_phob2_pane_t

0x94d6,	// (0x000182be) list_highlight_pane_cp024

0x9296,	// (0x0001807e) phob2_cc_button_pane

0x929e,	// (0x00018086) phob2_cc_data_pane_g1_ParamLimits

0x929e,	// (0x00018086) phob2_cc_data_pane_g1

0x92b3,	// (0x0001809b) phob2_cc_data_pane_g2_ParamLimits

0x92b3,	// (0x0001809b) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0001ed16) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0001ed16) phob2_cc_data_pane_g

0x92c3,	// (0x000180ab) phob2_cc_data_pane_t1_ParamLimits

0x92c3,	// (0x000180ab) phob2_cc_data_pane_t1

0x92db,	// (0x000180c3) phob2_cc_data_pane_t2_ParamLimits

0x92db,	// (0x000180c3) phob2_cc_data_pane_t2

0x92f3,	// (0x000180db) phob2_cc_data_pane_t3_ParamLimits

0x92f3,	// (0x000180db) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0001ed1b) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0001ed1b) phob2_cc_data_pane_t

0xef8d,	// (0x0001dd75) phob2_cc_list_pane_ParamLimits

0xef8d,	// (0x0001dd75) phob2_cc_list_pane

0xd5c1,	// (0x0001c3a9) scroll_pane_cp035_ParamLimits

0xd5c1,	// (0x0001c3a9) scroll_pane_cp035

0x9546,	// (0x0001832e) bg_button_pane_cp033

0xef99,	// (0x0001dd81) phob2_cc_button_pane_g1

0xefa5,	// (0x0001dd8d) phob2_cc_button_pane_t1

0xefba,	// (0x0001dda2) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0001ed22) phob2_cc_button_pane_t

0x930b,	// (0x000180f3) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x930b,	// (0x000180f3) list_double_large_graphic_phob2_cc_pane

0x931d,	// (0x00018105) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x931d,	// (0x00018105) list_double_large_graphic_phob2_cc_pane_g1

0x9329,	// (0x00018111) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9329,	// (0x00018111) list_double_large_graphic_phob2_cc_pane_g2

0x9335,	// (0x0001811d) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9335,	// (0x0001811d) list_double_large_graphic_phob2_cc_pane_g3

0x9341,	// (0x00018129) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9341,	// (0x00018129) list_double_large_graphic_phob2_cc_pane_g4

0x934d,	// (0x00018135) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x934d,	// (0x00018135) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0001ed27) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0001ed27) list_double_large_graphic_phob2_cc_pane_g

0x9359,	// (0x00018141) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9359,	// (0x00018141) list_double_large_graphic_phob2_cc_pane_t1

0x9382,	// (0x0001816a) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9382,	// (0x0001816a) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0001ed32) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0001ed32) list_double_large_graphic_phob2_cc_pane_t

0xefcc,	// (0x0001ddb4) list_highlight_pane_cp025_ParamLimits

0xefcc,	// (0x0001ddb4) list_highlight_pane_cp025

0x9546,	// (0x0001832e) bg_button_pane_cp033_ParamLimits

0xef99,	// (0x0001dd81) phob2_cc_button_pane_g1_ParamLimits

0xefa5,	// (0x0001dd8d) phob2_cc_button_pane_t1_ParamLimits

0xefba,	// (0x0001dda2) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0001ed22) phob2_cc_button_pane_t_ParamLimits

0x046a,	// (0x0000f252) popup_wgtman_window

0xd35f,	// (0x0001c147) scroll_pane_cp038

0x8cf7,	// (0x00017adf) wgtman_btn_pane_cp_01_ParamLimits

0x8cf7,	// (0x00017adf) wgtman_btn_pane_cp_01

0xefda,	// (0x0001ddc2) wgtman_content_pane

0xefe3,	// (0x0001ddcb) wgtman_heading_pane

0x94d6,	// (0x000182be) bg_heading_pane_cp02

0xefec,	// (0x0001ddd4) wgtman_heading_pane_g1

0xeff4,	// (0x0001dddc) wgtman_heading_pane_t1

0xf002,	// (0x0001ddea) scroll_pane_cp036

0xf00a,	// (0x0001ddf2) wgtman_list_pane

0xf012,	// (0x0001ddfa) wgtman_list_pane_t1_ParamLimits

0xf012,	// (0x0001ddfa) wgtman_list_pane_t1

0xd0ac,	// (0x0001be94) cam4_grid_pane

0x67a6,	// (0x0001558e) bg_button_pane_cp015_ParamLimits

0x67b8,	// (0x000155a0) bg_button_pane_cp016_ParamLimits

0x67cb,	// (0x000155b3) bg_button_pane_cp017_ParamLimits

0x6823,	// (0x0001560b) popup_vitu2_query_window_g3_ParamLimits

0x6823,	// (0x0001560b) popup_vitu2_query_window_g3

0x68e0,	// (0x000156c8) popup_vitu2_query_window_t6_ParamLimits

0x68e0,	// (0x000156c8) popup_vitu2_query_window_t6

0x690b,	// (0x000156f3) popup_vitu2_query_window_t7_ParamLimits

0x690b,	// (0x000156f3) popup_vitu2_query_window_t7

0xea97,	// (0x0001d87f) cam4_grid_pane_g1

0xeaa0,	// (0x0001d888) cam4_grid_pane_g2

0xf02c,	// (0x0001de14) cam4_grid_pane_g3

0xf035,	// (0x0001de1d) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0001ed37) cam4_grid_pane_g

0x13c5,	// (0x000101ad) aid_placing_vt_slider_lsc_ParamLimits

0x16d0,	// (0x000104b8) vidtel_button_pane_ParamLimits

0x16d0,	// (0x000104b8) vidtel_button_pane

0x94d6,	// (0x000182be) bg_button_pane_cp034

0xf040,	// (0x0001de28) vidtel_button_pane_g1

0xf048,	// (0x0001de30) vidtel_button_pane_t1

0xd4cc,	// (0x0001c2b4) aid_size_vtel_slider_touch

0xd5c1,	// (0x0001c3a9) scroll_pane_cp039

0x76e3,	// (0x000164cb) ncim_query_button_pane_cp01_ParamLimits

0x7702,	// (0x000164ea) ncimui_query_pane_g1_ParamLimits

0x9546,	// (0x0001832e) input_focus_pane_cp012_ParamLimits

0xdefa,	// (0x0001cce2) ncim_query_entry_pane_t1_ParamLimits

0xd5c1,	// (0x0001c3a9) scroll_pane_cp039_ParamLimits

0xa88e,	// (0x00019676) navi_pane_bcale_mc_g1

0xa896,	// (0x0001967e) navi_pane_bcale_mc_t1

0xe4a5,	// (0x0001d28d) main_sp_fs_email_pane_g1

0xe4b1,	// (0x0001d299) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0001eacd) main_sp_fs_email_pane_g

0xe929,	// (0x0001d711) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe929,	// (0x0001d711) list_single_cale_mrui_row_pane_g3

0x88c8,	// (0x000176b0) list_single_recal_day_pane_g5_event_pane

0xeb1a,	// (0x0001d902) list_single_recal_day_pane_g7

0xf05e,	// (0x0001de46) list_recal_day_event_pane_cp01

0xf067,	// (0x0001de4f) list_recal_vselct_arw_lo_pane_cp01

0xf06f,	// (0x0001de57) list_recal_vselct_arw_up_pane_cp01

0xf077,	// (0x0001de5f) list_recal_vselct_pane_cp01

0xd518,	// (0x0001c300) list_recal_day_event_pane_cp01_g1

0xf081,	// (0x0001de69) list_recal_day_event_pane_cp01_t1

0xeb22,	// (0x0001d90a) list_single_recal_day_pane_t1_ParamLimits

0xeb34,	// (0x0001d91c) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0001ec25) list_single_recal_day_pane_t_ParamLimits

0x9bc2,	// (0x000189aa) bg_notes_pane_ParamLimits

0x9c6d,	// (0x00018a55) list_notes_pane_ParamLimits

0x07b3,	// (0x0000f59b) scroll_pane_cp06_ParamLimits

0x9ca9,	// (0x00018a91) main_notes_pane_ParamLimits

0x94d6,	// (0x000182be) main_welc_pane

0x93ab,	// (0x00018193) main_welc_body_pane_ParamLimits

0x93ab,	// (0x00018193) main_welc_body_pane

0x93c9,	// (0x000181b1) main_welc_opti_pane_ParamLimits

0x93c9,	// (0x000181b1) main_welc_opti_pane

0x940e,	// (0x000181f6) main_welc_pane_t1_ParamLimits

0x940e,	// (0x000181f6) main_welc_pane_t1

0x942c,	// (0x00018214) main_welc_body_row_pane_ParamLimits

0x942c,	// (0x00018214) main_welc_body_row_pane

0xd2f5,	// (0x0001c0dd) main_welc_opti_row_pane_ParamLimits

0xd2f5,	// (0x0001c0dd) main_welc_opti_row_pane

0xf08f,	// (0x0001de77) main_welc_opti_row_pane_g1

0x9440,	// (0x00018228) main_welc_opti_row_pane_t1

0xf097,	// (0x0001de7f) main_welc_body_row_pane_t1

0xed90,	// (0x0001db78) popup_notif_wgt_heading_pane

0xedaa,	// (0x0001db92) aid_size_list_notif_wgt_del_ParamLimits

0xedb7,	// (0x0001db9f) list_notif_wgt_row_pane_g1_ParamLimits

0xedc3,	// (0x0001dbab) list_notif_wgt_row_pane_g2_ParamLimits

0xedd2,	// (0x0001dbba) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0001ec8c) list_notif_wgt_row_pane_g_ParamLimits

0xeddf,	// (0x0001dbc7) list_notif_wgt_row_pane_t1_ParamLimits

0xedf5,	// (0x0001dbdd) list_notif_wgt_row_pane_t2_ParamLimits

0xee07,	// (0x0001dbef) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0001ec93) list_notif_wgt_row_pane_t_ParamLimits

0x8d90,	// (0x00017b78) listrow_wgtman_pane_g1_ParamLimits

0x8d9d,	// (0x00017b85) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0001ecbc) listrow_wgtman_pane_g_ParamLimits

0x8dbb,	// (0x00017ba3) listrow_wgtman_pane_t1_ParamLimits

0x8dd3,	// (0x00017bbb) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0001ecc1) listrow_wgtman_pane_t_ParamLimits

0x8df9,	// (0x00017be1) wait_bar_pane_cp09_ParamLimits

0x94d6,	// (0x000182be) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0001de8e) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0001de96) popup_notif_wgt_heading_pane_t1

0x94d6,	// (0x000182be) main_vids_pane

0x94d6,	// (0x000182be) vids_listscroll_pane

0x944f,	// (0x00018237) scroll_pane_cp040

0x94d6,	// (0x000182be) vids_list_pane

0x945a,	// (0x00018242) vids_list_double_pane_ParamLimits

0x945a,	// (0x00018242) vids_list_double_pane

0x946b,	// (0x00018253) vids_list_double_pane_g1

0x9474,	// (0x0001825c) vids_list_double_pane_t1

0x9484,	// (0x0001826c) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0001ed45) vids_list_double_pane_t

0x9546,	// (0x0001832e) main_ncimui_pane_ParamLimits

0x7519,	// (0x00016301) main_ncimui_pane_g1_ParamLimits

0x7525,	// (0x0001630d) main_ncimui_pane_g2_ParamLimits

0x7525,	// (0x0001630d) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0001e9d2) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0001e9d2) main_ncimui_pane_g

0x93e4,	// (0x000181cc) main_welc_pane_g1_ParamLimits

0x93e4,	// (0x000181cc) main_welc_pane_g1

0x93f9,	// (0x000181e1) main_welc_pane_g2_ParamLimits

0x93f9,	// (0x000181e1) main_welc_pane_g2

0x0001,

0xff58,	// (0x0001ed40) main_welc_pane_g_ParamLimits

0xff58,	// (0x0001ed40) main_welc_pane_g

0x9bc2,	// (0x000189aa) listscroll_mce_pane_ParamLimits

0xa9e3,	// (0x000197cb) wait_bar_pane_cp10

0xbeb2,	// (0x0001ac9a) main_cale_day_pane_ParamLimits

0xbeb2,	// (0x0001ac9a) main_cale_week_pane_ParamLimits

0x9bc2,	// (0x000189aa) main_messa_pane_ParamLimits

0x4d3a,	// (0x00013b22) main_clock2_btn_pane_ParamLimits

0x4d3a,	// (0x00013b22) main_clock2_btn_pane

0xc7f9,	// (0x0001b5e1) main_clock2_btn_pane_cp01_ParamLimits

0xc7f9,	// (0x0001b5e1) main_clock2_btn_pane_cp01

0xe8b5,	// (0x0001d69d) list_cale_mrui_pane_ParamLimits

0xee3d,	// (0x0001dc25) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0001ec9a) main_cf0_pane_g

0x8fe2,	// (0x00017dca) area_left_week_number_pane_ParamLimits

0x8fee,	// (0x00017dd6) area_top_day_name_pane_ParamLimits

0x9001,	// (0x00017de9) frame_month_view_pane_ParamLimits

0xef42,	// (0x0001dd2a) grid_month_view_pane_ParamLimits

0xef50,	// (0x0001dd38) frm_month_g1_ParamLimits

0x9082,	// (0x00017e6a) frm_month_g2_ParamLimits

0x9095,	// (0x00017e7d) frm_month_g3_ParamLimits

0x90a8,	// (0x00017e90) frm_month_g4_ParamLimits

0x90bb,	// (0x00017ea3) frm_month_g5_ParamLimits

0x90ce,	// (0x00017eb6) frm_month_g6_ParamLimits

0x90e1,	// (0x00017ec9) frm_month_g7_ParamLimits

0xef5d,	// (0x0001dd45) frm_month_g8_ParamLimits

0x90f4,	// (0x00017edc) frm_month_g9_ParamLimits

0x9104,	// (0x00017eec) frm_month_g10_ParamLimits

0x9114,	// (0x00017efc) frm_month_g11_ParamLimits

0x9124,	// (0x00017f0c) frm_month_g12_ParamLimits

0x9136,	// (0x00017f1e) frm_month_g13_ParamLimits

0x9148,	// (0x00017f30) frm_month_g14_ParamLimits

0x915c,	// (0x00017f44) frm_month_g15_ParamLimits

0x9170,	// (0x00017f58) frm_month_g16_ParamLimits

0xff03,	// (0x0001eceb) frm_month_g_ParamLimits

0xef6a,	// (0x0001dd52) cell_top_day_name_pane_t1_ParamLimits

0x9184,	// (0x00017f6c) cell_area_left_week_number_pane_g1_ParamLimits

0x9190,	// (0x00017f78) cell_area_left_week_number_pane_t1_ParamLimits

0xc645,	// (0x0001b42d) cell_month_view_pane_g1_ParamLimits

0x91a3,	// (0x00017f8b) cell_month_view_pane_t1_ParamLimits

0x9bba,	// (0x000189a2) main_clock2_btn_pane_g1

0xf0bc,	// (0x0001dea4) main_clock2_btn_pane_t1

0x9546,	// (0x0001832e) listscroll_cmail_pane_ParamLimits

0xe4a5,	// (0x0001d28d) main_sp_fs_email_pane_g1_ParamLimits

0xe4b1,	// (0x0001d299) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0001eacd) main_sp_fs_email_pane_g_ParamLimits

0xea78,	// (0x0001d860) list_recal_day_pane_ParamLimits

0xea89,	// (0x0001d871) mian_recal_day_pane_t1

0x802b,	// (0x00016e13) list_single_dyc_row_text_pane_t4_ParamLimits

0x802b,	// (0x00016e13) list_single_dyc_row_text_pane_t4

0x8074,	// (0x00016e5c) list_single_dyc_row_text_pane_t5_ParamLimits

0x8074,	// (0x00016e5c) list_single_dyc_row_text_pane_t5

0xe557,	// (0x0001d33f) list_single_dyc_row_text_pane_t6_ParamLimits

0xe557,	// (0x0001d33f) list_single_dyc_row_text_pane_t6

0x234e,	// (0x00011136) aid_mgn_list_cale_time_pane

0x9546,	// (0x0001832e) main_gallery2_pane_ParamLimits

0xc80f,	// (0x0001b5f7) main_clock2_pane_cp01_t1

0xc81f,	// (0x0001b607) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0001e5ac) main_clock2_pane_cp01_t

0x0b6d,	// (0x0000f955) cale_week_scroll_pane_g16_ParamLimits

0x0b6d,	// (0x0000f955) cale_week_scroll_pane_g16

0x9eda,	// (0x00018cc2) vorec_slider_pane

0xf048,	// (0x0001de30) vidtel_button_pane_t1_ParamLimits

0x892e,	// (0x00017716) main_fs_bigclock_clock_pane_g1_ParamLimits

0x892e,	// (0x00017716) main_fs_bigclock_clock_pane_g2_ParamLimits

0x893f,	// (0x00017727) main_fs_bigclock_clock_pane_g3_ParamLimits

0x893f,	// (0x00017727) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe60,	// (0x0001ec48) main_fs_bigclock_clock_pane_g_ParamLimits

0x8952,	// (0x0001773a) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8968,	// (0x00017750) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe69,	// (0x0001ec51) main_fs_bigclock_clock_pane_t_ParamLimits

0x452e,	// (0x00013316) main_mup3_lyrics_pane_ParamLimits

0x452e,	// (0x00013316) main_mup3_lyrics_pane

0x94ba,	// (0x000182a2) main_mup3_lyrics_pane_t1_ParamLimits

0x94ba,	// (0x000182a2) main_mup3_lyrics_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
