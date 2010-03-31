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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0000ee1e };

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
0x0232,	// (0x0000f050) Screen

0x023e,	// (0x0000f05c) application_window

0x027a,	// (0x0000f098) area_bottom_pane_ParamLimits

0x027a,	// (0x0000f098) area_bottom_pane

0x02b3,	// (0x0000f0d1) area_top_pane_ParamLimits

0x02b3,	// (0x0000f0d1) area_top_pane

0x959c,	// (0x000183ba) call_video_uplink_pane_ParamLimits

0x959c,	// (0x000183ba) call_video_uplink_pane

0x0341,	// (0x0000f15f) main_pane_ParamLimits

0x0341,	// (0x0000f15f) main_pane

0xbf9a,	// (0x0001adb8) context_pane

0x3930,	// (0x0001274e) navi_pane

0x3962,	// (0x00012780) popup_cale_events_window_ParamLimits

0x3962,	// (0x00012780) popup_cale_events_window

0xbfad,	// (0x0001adcb) popup_mup_playback_window

0x397a,	// (0x00012798) signal_pane

0x9d1d,	// (0x00018b3b) main_browser_pane

0xaa66,	// (0x00019884) main_burst_pane

0x3690,	// (0x000124ae) main_calc_pane

0xbf2c,	// (0x0001ad4a) main_cale_day_pane

0x0997,	// (0x0000f7b5) main_cale_month_pane

0xbf2c,	// (0x0001ad4a) main_cale_week_pane

0xaa66,	// (0x00019884) main_call_pane

0x99db,	// (0x000187f9) main_call_poc_pane

0xaa66,	// (0x00019884) main_camera_pane

0xaa66,	// (0x00019884) main_chi_dic_pane

0xa7e3,	// (0x00019601) main_clock_pane

0x99db,	// (0x000187f9) main_fmradio_pane

0xaa66,	// (0x00019884) main_graph_messa_pane

0x99db,	// (0x000187f9) main_help_pane

0x9d1d,	// (0x00018b3b) main_im_pane

0x9c36,	// (0x00018a54) main_image_pane_ParamLimits

0x9c36,	// (0x00018a54) main_image_pane

0x99db,	// (0x000187f9) main_location2_pane

0xaa66,	// (0x00019884) main_location_pane

0x9c36,	// (0x00018a54) main_messa_pane

0x99db,	// (0x000187f9) main_mp2_pane

0xaa66,	// (0x00019884) main_mp_pane

0x99db,	// (0x000187f9) main_msg_pane

0x99db,	// (0x000187f9) main_mup_eq_pane

0x99db,	// (0x000187f9) main_mup_pane

0x9d1d,	// (0x00018b3b) main_notes_pane

0x99db,	// (0x000187f9) main_pec_pane

0x99db,	// (0x000187f9) main_phob_pane

0x99db,	// (0x000187f9) main_pinb_pane

0x99db,	// (0x000187f9) main_postcard_pane

0x99db,	// (0x000187f9) main_qdial_pane

0xaa66,	// (0x00019884) main_skin_pane

0x99db,	// (0x000187f9) main_smil2_pane

0xaa66,	// (0x00019884) main_smil_pane

0xaa66,	// (0x00019884) main_video_pane

0xaa66,	// (0x00019884) main_video_tele_pane

0x9c36,	// (0x00018a54) main_viewer_pane_ParamLimits

0x9c36,	// (0x00018a54) main_viewer_pane

0xaa66,	// (0x00019884) main_vorec_pane

0x36e4,	// (0x00012502) popup_blid_sat_info_window_ParamLimits

0x36e4,	// (0x00012502) popup_blid_sat_info_window

0x373c,	// (0x0001255a) popup_dyc_status_message_window_ParamLimits

0x373c,	// (0x0001255a) popup_dyc_status_message_window

0x3756,	// (0x00012574) popup_grid_large_graphic_window_ParamLimits

0x3756,	// (0x00012574) popup_grid_large_graphic_window

0x3812,	// (0x00012630) popup_loc_request_window_ParamLimits

0x3812,	// (0x00012630) popup_loc_request_window

0x3908,	// (0x00012726) popup_wml_address_window_ParamLimits

0x3908,	// (0x00012726) popup_wml_address_window

0x34ca,	// (0x000122e8) call_muted_g1

0x317f,	// (0x00011f9d) popup_call_audio_conf_window_ParamLimits

0x317f,	// (0x00011f9d) popup_call_audio_conf_window

0x34de,	// (0x000122fc) popup_call_audio_first_window_ParamLimits

0x34de,	// (0x000122fc) popup_call_audio_first_window

0x3554,	// (0x00012372) popup_call_audio_in_window_ParamLimits

0x3554,	// (0x00012372) popup_call_audio_in_window

0x3590,	// (0x000123ae) popup_call_audio_out_window_ParamLimits

0x3590,	// (0x000123ae) popup_call_audio_out_window

0x35ca,	// (0x000123e8) popup_call_audio_second_window_ParamLimits

0x35ca,	// (0x000123e8) popup_call_audio_second_window

0x3620,	// (0x0001243e) popup_call_audio_wait_window_ParamLimits

0x3620,	// (0x0001243e) popup_call_audio_wait_window

0x3655,	// (0x00012473) popup_number_entry_window_ParamLimits

0x3655,	// (0x00012473) popup_number_entry_window

0x95c8,	// (0x000183e6) bg_popup_call_pane_cp05_ParamLimits

0x95c8,	// (0x000183e6) bg_popup_call_pane_cp05

0x95e8,	// (0x00018406) popup_number_entry_window_t1

0x95fb,	// (0x00018419) popup_number_entry_window_t2

0x960d,	// (0x0001842b) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x0001deeb) popup_number_entry_window_t

0x961f,	// (0x0001843d) text_title_cp2

0x9632,	// (0x00018450) bg_popup_call_pane_cp_ParamLimits

0x9632,	// (0x00018450) bg_popup_call_pane_cp

0x9640,	// (0x0001845e) call_thumbnail_pane

0x9648,	// (0x00018466) popup_call_audio_in_window_g1_ParamLimits

0x9648,	// (0x00018466) popup_call_audio_in_window_g1

0x9654,	// (0x00018472) popup_call_audio_in_window_g2_ParamLimits

0x9654,	// (0x00018472) popup_call_audio_in_window_g2

0x9660,	// (0x0001847e) popup_call_audio_in_window_g3_ParamLimits

0x9660,	// (0x0001847e) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x0001def4) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x0001def4) popup_call_audio_in_window_g

0x966c,	// (0x0001848a) popup_call_audio_in_window_t1_ParamLimits

0x966c,	// (0x0001848a) popup_call_audio_in_window_t1

0x9688,	// (0x000184a6) popup_call_audio_in_window_t2_ParamLimits

0x9688,	// (0x000184a6) popup_call_audio_in_window_t2

0x96a4,	// (0x000184c2) popup_call_audio_in_window_t3_ParamLimits

0x96a4,	// (0x000184c2) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x0001defb) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x0001defb) popup_call_audio_in_window_t

0x9632,	// (0x00018450) bg_popup_call_pane_cp01_ParamLimits

0x9632,	// (0x00018450) bg_popup_call_pane_cp01

0x9640,	// (0x0001845e) call_thumbnail_pane_cp02

0x96b7,	// (0x000184d5) call_type_pane_cp022

0x96bf,	// (0x000184dd) popup_call_audio_out_window_g1_ParamLimits

0x96bf,	// (0x000184dd) popup_call_audio_out_window_g1

0x96d1,	// (0x000184ef) popup_call_audio_out_window_g2_ParamLimits

0x96d1,	// (0x000184ef) popup_call_audio_out_window_g2

0x96dd,	// (0x000184fb) popup_call_audio_out_window_g3_ParamLimits

0x96dd,	// (0x000184fb) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x0001df02) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x0001df02) popup_call_audio_out_window_g

0x96ef,	// (0x0001850d) popup_call_audio_out_window_t1_ParamLimits

0x96ef,	// (0x0001850d) popup_call_audio_out_window_t1

0x9707,	// (0x00018525) popup_call_audio_out_window_t2_ParamLimits

0x9707,	// (0x00018525) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x0001df09) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x0001df09) popup_call_audio_out_window_t

0x971c,	// (0x0001853a) bg_popup_call_pane_ParamLimits

0x971c,	// (0x0001853a) bg_popup_call_pane

0x04fd,	// (0x0000f31b) call_thumbnail_pane_cp_ParamLimits

0x04fd,	// (0x0000f31b) call_thumbnail_pane_cp

0x97a0,	// (0x000185be) call_type_pane_cp01_ParamLimits

0x97a0,	// (0x000185be) call_type_pane_cp01

0x97e4,	// (0x00018602) popup_call_audio_first_window_g1_ParamLimits

0x97e4,	// (0x00018602) popup_call_audio_first_window_g1

0x9830,	// (0x0001864e) popup_call_audio_first_window_g2_ParamLimits

0x9830,	// (0x0001864e) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x0001df0e) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x0001df0e) popup_call_audio_first_window_g

0x9874,	// (0x00018692) popup_call_audio_first_window_t1_ParamLimits

0x9874,	// (0x00018692) popup_call_audio_first_window_t1

0x9920,	// (0x0001873e) popup_call_audio_first_window_t4_ParamLimits

0x9920,	// (0x0001873e) popup_call_audio_first_window_t4

0x99ac,	// (0x000187ca) popup_call_audio_first_window_t5_ParamLimits

0x99ac,	// (0x000187ca) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x0001df13) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x0001df13) popup_call_audio_first_window_t

0x99db,	// (0x000187f9) bg_popup_call_pane_cp02

0x99e5,	// (0x00018803) call_type_pane_cp023

0x99ed,	// (0x0001880b) popup_call_audio_wait_window_g1

0x99f5,	// (0x00018813) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0001df1a) popup_call_audio_wait_window_g

0x99fd,	// (0x0001881b) popup_call_audio_wait_window_t3

0x9a0b,	// (0x00018829) bg_popup_call_pane_cp03_ParamLimits

0x9a0b,	// (0x00018829) bg_popup_call_pane_cp03

0x9a6b,	// (0x00018889) call_thumbnail_pane_cp011_ParamLimits

0x9a6b,	// (0x00018889) call_thumbnail_pane_cp011

0x9a77,	// (0x00018895) call_type_pane_cp034_ParamLimits

0x9a77,	// (0x00018895) call_type_pane_cp034

0x9ab3,	// (0x000188d1) popup_call_audio_second_window_g1_ParamLimits

0x9ab3,	// (0x000188d1) popup_call_audio_second_window_g1

0x9aef,	// (0x0001890d) popup_call_audio_second_window_g2_ParamLimits

0x9aef,	// (0x0001890d) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x0001df1f) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x0001df1f) popup_call_audio_second_window_g

0x9b2b,	// (0x00018949) popup_call_audio_second_window_t1_ParamLimits

0x9b2b,	// (0x00018949) popup_call_audio_second_window_t1

0x9bac,	// (0x000189ca) popup_call_audio_second_window_t2_ParamLimits

0x9bac,	// (0x000189ca) popup_call_audio_second_window_t2

0x9be2,	// (0x00018a00) popup_call_audio_second_window_t3_ParamLimits

0x9be2,	// (0x00018a00) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x0001df24) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x0001df24) popup_call_audio_second_window_t

0x99db,	// (0x000187f9) bg_popup_call_pane_cp04

0x9c18,	// (0x00018a36) list_conf_pane

0x9c20,	// (0x00018a3e) popup_call_audio_conf_window_t1

0x9c2e,	// (0x00018a4c) call_thumbnail_pane_g1

0x9c36,	// (0x00018a54) bg_pinb_pane_ParamLimits

0x9c36,	// (0x00018a54) bg_pinb_pane

0x9c44,	// (0x00018a62) find_pinb_pane

0x9c4d,	// (0x00018a6b) listscroll_pinb_pane_ParamLimits

0x9c4d,	// (0x00018a6b) listscroll_pinb_pane

0x9c5c,	// (0x00018a7a) pinb_bg_pane_g1

0x0521,	// (0x0000f33f) pinb_bg_pane_g2

0x052d,	// (0x0000f34b) pinb_bg_pane_g3

0x0539,	// (0x0000f357) pinb_bg_pane_g4

0x0545,	// (0x0000f363) pinb_bg_pane_g5

0x0551,	// (0x0000f36f) pinb_bg_pane_g6

0x055c,	// (0x0000f37a) pinb_bg_pane_g7

0x0567,	// (0x0000f385) pinb_bg_pane_g8

0x0572,	// (0x0000f390) pinb_bg_pane_g9

0x057c,	// (0x0000f39a) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x0001df2b) pinb_bg_pane_g

0x0599,	// (0x0000f3b7) grid_pinb_pane

0x05a2,	// (0x0000f3c0) list_pinb_pane

0x05ab,	// (0x0000f3c9) scroll_pane_cp01_ParamLimits

0x05ab,	// (0x0000f3c9) scroll_pane_cp01

0x9c66,	// (0x00018a84) find_pinb_pane_g1_ParamLimits

0x9c66,	// (0x00018a84) find_pinb_pane_g1

0x9c7e,	// (0x00018a9c) find_pinb_pane_t1

0x9c90,	// (0x00018aae) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0001df45) find_pinb_pane_t

0x9ca5,	// (0x00018ac3) input_focus_pane_cp01_ParamLimits

0x9ca5,	// (0x00018ac3) input_focus_pane_cp01

0x05bd,	// (0x0000f3db) cell_pinb_pane_ParamLimits

0x05bd,	// (0x0000f3db) cell_pinb_pane

0x05e6,	// (0x0000f404) cell_pinb_pane_g1_ParamLimits

0x05e6,	// (0x0000f404) cell_pinb_pane_g1

0x05f6,	// (0x0000f414) cell_pinb_pane_g2_ParamLimits

0x05f6,	// (0x0000f414) cell_pinb_pane_g2

0x9cb1,	// (0x00018acf) cell_pinb_pane_g3_ParamLimits

0x9cb1,	// (0x00018acf) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x0001df4a) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x0001df4a) cell_pinb_pane_g

0x99db,	// (0x000187f9) grid_highlight_pane_cp01

0x0602,	// (0x0000f420) list_pinb_item_pane_ParamLimits

0x0602,	// (0x0000f420) list_pinb_item_pane

0x99db,	// (0x000187f9) list_highlight_pane_cp02

0x0614,	// (0x0000f432) list_pinb_item_pane_g1_ParamLimits

0x0614,	// (0x0000f432) list_pinb_item_pane_g1

0x0621,	// (0x0000f43f) list_pinb_item_pane_g2_ParamLimits

0x0621,	// (0x0000f43f) list_pinb_item_pane_g2

0x062d,	// (0x0000f44b) list_pinb_item_pane_g3_ParamLimits

0x062d,	// (0x0000f44b) list_pinb_item_pane_g3

0x063e,	// (0x0000f45c) list_pinb_item_pane_g4_ParamLimits

0x063e,	// (0x0000f45c) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x0001df51) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x0001df51) list_pinb_item_pane_g

0x064a,	// (0x0000f468) list_pinb_item_pane_t1_ParamLimits

0x064a,	// (0x0000f468) list_pinb_item_pane_t1

0x067f,	// (0x0000f49d) calc_display_pane

0x06a7,	// (0x0000f4c5) calc_paper_pane

0x06ca,	// (0x0000f4e8) grid_calc_pane

0x99db,	// (0x000187f9) bg_list_pane_cp01

0x06f8,	// (0x0000f516) clock_g1

0x0700,	// (0x0000f51e) clock_g2

0x0001,

0xf13c,	// (0x0001df5a) clock_g

0x0708,	// (0x0000f526) clock_t1_ParamLimits

0x0708,	// (0x0000f526) clock_t1

0x071d,	// (0x0000f53b) clock_t2_ParamLimits

0x071d,	// (0x0000f53b) clock_t2

0x072f,	// (0x0000f54d) clock_t3_ParamLimits

0x072f,	// (0x0000f54d) clock_t3

0x0741,	// (0x0000f55f) clock_t4_ParamLimits

0x0741,	// (0x0000f55f) clock_t4

0x0753,	// (0x0000f571) clock_t5_ParamLimits

0x0753,	// (0x0000f571) clock_t5

0x0768,	// (0x0000f586) clock_t6_ParamLimits

0x0768,	// (0x0000f586) clock_t6

0x077a,	// (0x0000f598) clock_t7_ParamLimits

0x077a,	// (0x0000f598) clock_t7

0x078c,	// (0x0000f5aa) clock_t8_ParamLimits

0x078c,	// (0x0000f5aa) clock_t8

0x07a0,	// (0x0000f5be) clock_t9_ParamLimits

0x07a0,	// (0x0000f5be) clock_t9

0x0008,

0xf141,	// (0x0001df5f) clock_t_ParamLimits

0xf141,	// (0x0001df5f) clock_t

0x9cc5,	// (0x00018ae3) popup_clock_analogue_window_cp02

0x9cc5,	// (0x00018ae3) popup_clock_digital_window_cp01

0x9ccd,	// (0x00018aeb) listscroll_help_pane

0x99db,	// (0x000187f9) phob_pre_status_pane

0x9cd7,	// (0x00018af5) grid_qdial_pane

0x9c36,	// (0x00018a54) listscroll_mce_pane

0x9c36,	// (0x00018a54) bg_notes_pane

0x9ce1,	// (0x00018aff) list_notes_pane

0x07b4,	// (0x0000f5d2) scroll_pane_cp06

0x9cef,	// (0x00018b0d) bg_calc_paper_pane

0x9d03,	// (0x00018b21) list_calc_pane

0x9d1d,	// (0x00018b3b) bg_calc_display_pane

0x07c8,	// (0x0000f5e6) calc_display_pane_t1

0x07da,	// (0x0000f5f8) calc_display_pane_t2

0x9d29,	// (0x00018b47) calc_display_pane_t3

0x0002,

0xf154,	// (0x0001df72) calc_display_pane_t

0x07ec,	// (0x0000f60a) cell_calc_pane_ParamLimits

0x07ec,	// (0x0000f60a) cell_calc_pane

0x9d3b,	// (0x00018b59) bg_calc_paper_pane_g1

0x9d47,	// (0x00018b65) bg_calc_paper_pane_g2

0x9d53,	// (0x00018b71) bg_calc_paper_pane_g3

0x9d5f,	// (0x00018b7d) bg_calc_paper_pane_g4

0x9d6b,	// (0x00018b89) bg_calc_paper_pane_g5

0x0821,	// (0x0000f63f) bg_calc_paper_pane_g6

0x0830,	// (0x0000f64e) bg_calc_paper_pane_g7

0x083f,	// (0x0000f65d) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x0001df79) bg_calc_paper_pane_g

0x0852,	// (0x0000f670) calc_bg_paper_pane_g9

0x0865,	// (0x0000f683) list_calc_item_pane_ParamLimits

0x0865,	// (0x0000f683) list_calc_item_pane

0x9d77,	// (0x00018b95) list_calc_item_pane_g1

0x9d84,	// (0x00018ba2) list_calc_item_pane_t1_ParamLimits

0x9d84,	// (0x00018ba2) list_calc_item_pane_t1

0x087a,	// (0x0000f698) list_calc_item_pane_t2_ParamLimits

0x087a,	// (0x0000f698) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x0001df8a) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x0001df8a) list_calc_item_pane_t

0x9d96,	// (0x00018bb4) cell_calc_pane_g1

0x9da0,	// (0x00018bbe) grid_highlight_pane_cp02

0x08ac,	// (0x0000f6ca) bg_calc_display_pane_g1

0x08b5,	// (0x0000f6d3) bg_calc_display_pane_g2

0x08bf,	// (0x0000f6dd) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x0001df94) bg_calc_display_pane_g

0x08c8,	// (0x0000f6e6) cell_qdial_pane_ParamLimits

0x08c8,	// (0x0000f6e6) cell_qdial_pane

0x08dc,	// (0x0000f6fa) cell_qdial_pane_g1_ParamLimits

0x08dc,	// (0x0000f6fa) cell_qdial_pane_g1

0x08f2,	// (0x0000f710) cell_qdial_pane_g2_ParamLimits

0x08f2,	// (0x0000f710) cell_qdial_pane_g2

0x9dc2,	// (0x00018be0) cell_qdial_pane_g3_ParamLimits

0x9dc2,	// (0x00018be0) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x0001df9b) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x0001df9b) cell_qdial_pane_g

0x0919,	// (0x0000f737) cell_qdial_pane_t1_ParamLimits

0x0919,	// (0x0000f737) cell_qdial_pane_t1

0x0931,	// (0x0000f74f) cell_qdial_pane_t2_ParamLimits

0x0931,	// (0x0000f74f) cell_qdial_pane_t2

0x0944,	// (0x0000f762) cell_qdial_pane_t3_ParamLimits

0x0944,	// (0x0000f762) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x0001dfa4) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x0001dfa4) cell_qdial_pane_t

0x99db,	// (0x000187f9) grid_highlight_pane_cp04

0x9dce,	// (0x00018bec) thumbnail_qdial_pane_ParamLimits

0x9dce,	// (0x00018bec) thumbnail_qdial_pane

0x9e2a,	// (0x00018c48) list_help_pane

0x9e33,	// (0x00018c51) scroll_pane_cp02

0x0957,	// (0x0000f775) help_list_pane_t1_ParamLimits

0x0957,	// (0x0000f775) help_list_pane_t1

0x9e3c,	// (0x00018c5a) bg_notes_pane_g2

0x9e44,	// (0x00018c62) bg_notes_pane_g3

0x9e4c,	// (0x00018c6a) notes_bg_pane_g1

0x9e54,	// (0x00018c72) notes_bg_pane_g4

0x9e5c,	// (0x00018c7a) notes_bg_pane_g5

0x9e64,	// (0x00018c82) notes_bg_pane_g6

0x9e6c,	// (0x00018c8a) notes_bg_pane_g7

0x9e74,	// (0x00018c92) notes_bg_pane_g8

0x9e7c,	// (0x00018c9a) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x0001dfc2) notes_bg_pane_g

0x0974,	// (0x0000f792) list_notes_text_pane_ParamLimits

0x0974,	// (0x0000f792) list_notes_text_pane

0x9e84,	// (0x00018ca2) list_notes_text_pane_g1

0x0989,	// (0x0000f7a7) list_notes_text_pane_t1

0x0997,	// (0x0000f7b5) listscroll_cale_week_pane

0x09c3,	// (0x0000f7e1) bg_cale_heading_pane

0x9ea7,	// (0x00018cc5) bg_cale_pane_cp01

0x09db,	// (0x0000f7f9) cale_week_corner_pane

0x09fa,	// (0x0000f818) cale_week_day_heading_pane

0x0a17,	// (0x0000f835) cale_week_scroll_pane_g1

0x0a2a,	// (0x0000f848) cale_week_scroll_pane_g2

0x0a42,	// (0x0000f860) cale_week_scroll_pane_g3

0x0a5a,	// (0x0000f878) cale_week_scroll_pane_g4

0x0a72,	// (0x0000f890) cale_week_scroll_pane_g5

0x0a92,	// (0x0000f8b0) cale_week_scroll_pane_g6

0x0ab2,	// (0x0000f8d0) cale_week_scroll_pane_g7

0x0ad2,	// (0x0000f8f0) cale_week_scroll_pane_g8

0x0af6,	// (0x0000f914) cale_week_scroll_pane_g9

0x0b0e,	// (0x0000f92c) cale_week_scroll_pane_g10

0x0b26,	// (0x0000f944) cale_week_scroll_pane_g11

0x0b3e,	// (0x0000f95c) cale_week_scroll_pane_g12

0x0b56,	// (0x0000f974) cale_week_scroll_pane_g13

0x0b56,	// (0x0000f974) cale_week_scroll_pane_g14

0x0b56,	// (0x0000f974) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x0001dfd1) cale_week_scroll_pane_g

0x0b6e,	// (0x0000f98c) cale_week_time_pane

0x0b92,	// (0x0000f9b0) grid_cale_week_pane

0x9ed7,	// (0x00018cf5) scroll_pane_cp08

0x0bb8,	// (0x0000f9d6) cell_cale_week_pane_ParamLimits

0x0bb8,	// (0x0000f9d6) cell_cale_week_pane

0x0c46,	// (0x0000fa64) cale_week_day_heading_pane_t1

0x0c8b,	// (0x0000faa9) cale_week_day_heading_pane_t2

0x0cd5,	// (0x0000faf3) cale_week_day_heading_pane_t3

0x0d1f,	// (0x0000fb3d) cale_week_day_heading_pane_t4

0x0d69,	// (0x0000fb87) cale_week_day_heading_pane_t5

0x0dbb,	// (0x0000fbd9) cale_week_day_heading_pane_t6

0x0e0d,	// (0x0000fc2b) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x0001dff0) cale_week_day_heading_pane_t

0x9ef4,	// (0x00018d12) bg_cale_side_pane

0x0e52,	// (0x0000fc70) cale_week_time_pane_t1

0x0e6c,	// (0x0000fc8a) cale_week_time_pane_t2

0x0e86,	// (0x0000fca4) cale_week_time_pane_t3

0x0ea0,	// (0x0000fcbe) cale_week_time_pane_t4

0x0eba,	// (0x0000fcd8) cale_week_time_pane_t5

0x0ed4,	// (0x0000fcf2) cale_week_time_pane_t6

0x0eee,	// (0x0000fd0c) cale_week_time_pane_t7

0x0f08,	// (0x0000fd26) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x0001dfff) cale_week_time_pane_t

0x0f28,	// (0x0000fd46) cell_cale_week_pane_g2

0x0f47,	// (0x0000fd65) cell_cale_week_pane_g3_ParamLimits

0x0f47,	// (0x0000fd65) cell_cale_week_pane_g3

0x9f02,	// (0x00018d20) grid_highlight_pane_cp07

0x9f0a,	// (0x00018d28) listscroll_gms_pane

0x9f14,	// (0x00018d32) grid_gms_pane

0x9f1d,	// (0x00018d3b) listscroll_gms_pane_g1

0x9f25,	// (0x00018d43) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x0001e010) listscroll_gms_pane_g

0x0f5f,	// (0x0000fd7d) scroll_pane_cp010

0x0f6a,	// (0x0000fd88) cell_gms_pane_ParamLimits

0x0f6a,	// (0x0000fd88) cell_gms_pane

0x0f7d,	// (0x0000fd9b) cell_gms_pane_g1

0x9f2d,	// (0x00018d4b) cell_gms_pane_g2

0x9f35,	// (0x00018d53) cell_gms_pane_g3

0x9f3e,	// (0x00018d5c) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0001e015) cell_gms_pane_g

0x9f47,	// (0x00018d65) grid_highlight_pane_cp09

0x3474,	// (0x00012292) phob_pre_status_pane_g1

0x347c,	// (0x0001229a) phob_pre_status_pane_g2

0x3484,	// (0x000122a2) phob_pre_status_pane_g3

0x348c,	// (0x000122aa) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x0001e404) phob_pre_status_pane_g

0x349c,	// (0x000122ba) phob_pre_status_pane_t1

0x34aa,	// (0x000122c8) phob_pre_status_pane_t2

0x34ba,	// (0x000122d8) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x0001e40f) phob_pre_status_pane_t

0x99db,	// (0x000187f9) bg_list_pane_cp05

0x0f8d,	// (0x0000fdab) grid_vorec_pane

0x0f95,	// (0x0000fdb3) vorec_t1

0x0fa3,	// (0x0000fdc1) vorec_t2

0x0fb1,	// (0x0000fdcf) vorec_t3

0x0fbf,	// (0x0000fddd) vorec_t4

0x9f4f,	// (0x00018d6d) vorec_t5

0x0fcd,	// (0x0000fdeb) vorec_t6

0x0006,

0xf200,	// (0x0001e01e) vorec_t

0x0fe9,	// (0x0000fe07) wait_bar_pane_cp01

0x0ff1,	// (0x0000fe0f) cell_vorec_pane_ParamLimits

0x0ff1,	// (0x0000fe0f) cell_vorec_pane

0x9f5d,	// (0x00018d7b) cell_vorec_pane_g1

0x99db,	// (0x000187f9) grid_highlight_pane_cp05

0x1019,	// (0x0000fe37) cams_zoom_pane

0x1028,	// (0x0000fe46) image_vga_pane

0x1042,	// (0x0000fe60) main_camera_pane_g1

0x1054,	// (0x0000fe72) main_camera_pane_g2

0x1064,	// (0x0000fe82) main_camera_pane_g3

0x1074,	// (0x0000fe92) main_camera_pane_g4

0x1084,	// (0x0000fea2) main_camera_pane_g5

0x1094,	// (0x0000feb2) main_camera_pane_g6

0x10a6,	// (0x0000fec4) main_camera_pane_g7

0x0007,

0xf20f,	// (0x0001e02d) main_camera_pane_g

0x10b6,	// (0x0000fed4) main_camera_pane_t1

0x10cc,	// (0x0000feea) main_camera_pane_t2

0x0001,

0xf220,	// (0x0001e03e) main_camera_pane_t

0x1106,	// (0x0000ff24) cams_zoom_pane_cp_ParamLimits

0x1106,	// (0x0000ff24) cams_zoom_pane_cp

0x112e,	// (0x0000ff4c) image_cif_pane_ParamLimits

0x112e,	// (0x0000ff4c) image_cif_pane

0x1164,	// (0x0000ff82) image_subqcif_pane

0x116c,	// (0x0000ff8a) main_video_pane_g1_ParamLimits

0x116c,	// (0x0000ff8a) main_video_pane_g1

0x1190,	// (0x0000ffae) main_video_pane_g2_ParamLimits

0x1190,	// (0x0000ffae) main_video_pane_g2

0x11c4,	// (0x0000ffe2) main_video_pane_g3_ParamLimits

0x11c4,	// (0x0000ffe2) main_video_pane_g3

0x11f2,	// (0x00010010) main_video_pane_g4_ParamLimits

0x11f2,	// (0x00010010) main_video_pane_g4

0x1220,	// (0x0001003e) main_video_pane_g5_ParamLimits

0x1220,	// (0x0001003e) main_video_pane_g5

0x9f73,	// (0x00018d91) main_video_pane_g6_ParamLimits

0x9f73,	// (0x00018d91) main_video_pane_g6

0x0006,

0xf225,	// (0x0001e043) main_video_pane_g_ParamLimits

0xf225,	// (0x0001e043) main_video_pane_g

0x1249,	// (0x00010067) main_video_pane_t1_ParamLimits

0x1249,	// (0x00010067) main_video_pane_t1

0x9f8d,	// (0x00018dab) cams_zoom_pane_g1

0x9f96,	// (0x00018db4) cams_zoom_pane_g2

0x9f9f,	// (0x00018dbd) cams_zoom_pane_g3

0x9fa8,	// (0x00018dc6) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x0001e052) cams_zoom_pane_g

0x12a6,	// (0x000100c4) grid_cams_pane

0x12c0,	// (0x000100de) linegrid_cams_pane

0x12d4,	// (0x000100f2) cell_cams_pane_ParamLimits

0x12d4,	// (0x000100f2) cell_cams_pane

0x9fb1,	// (0x00018dcf) cams_burst_image_pane

0x9fb9,	// (0x00018dd7) cell_cams_pane_g1

0x99db,	// (0x000187f9) grid_highlight_pane_cp03

0x9d96,	// (0x00018bb4) mp_bg_pane_g1

0x99db,	// (0x000187f9) bg_list_pane_cp03

0xbe51,	// (0x0001ac6f) bg_mp_pane

0xbe59,	// (0x0001ac77) grid_mp_pane

0xbe61,	// (0x0001ac7f) media_player_g1

0xbe69,	// (0x0001ac87) media_player_t1

0xbe77,	// (0x0001ac95) media_player_t2

0xbe85,	// (0x0001aca3) media_player_t3

0xbe93,	// (0x0001acb1) media_player_t4

0xbea1,	// (0x0001acbf) media_player_t5

0xbeaf,	// (0x0001accd) media_player_t6

0xbebd,	// (0x0001acdb) media_player_t7

0x0006,

0xf5d0,	// (0x0001e3ee) media_player_t

0xbecb,	// (0x0001ace9) wait_bar_pane_cp02

0xf5b5,	// (0x0001e3d3) main_usb_pane_t

0x346b,	// (0x00012289) cell_mp_pane

0x9d96,	// (0x00018bb4) cell_mp_pane_g1

0x99db,	// (0x000187f9) grid_highlight_pane_cp06

0x9fc1,	// (0x00018ddf) grid_skin_colour_pane

0x9fc9,	// (0x00018de7) list_highlight_pane_cp03

0x140b,	// (0x00010229) skin_g1

0x9fd1,	// (0x00018def) skin_t1

0x9fe0,	// (0x00018dfe) skin_t2

0x0001,

0xf269,	// (0x0001e087) skin_t

0x1413,	// (0x00010231) cell_skin_colour_pane_ParamLimits

0x1413,	// (0x00010231) cell_skin_colour_pane

0x9fee,	// (0x00018e0c) cell_skin_colour_pane_g1

0x148c,	// (0x000102aa) call_video_g1_ParamLimits

0x148c,	// (0x000102aa) call_video_g1

0x14a8,	// (0x000102c6) call_video_g2_ParamLimits

0x14a8,	// (0x000102c6) call_video_g2

0x0001,

0xf26e,	// (0x0001e08c) call_video_g_ParamLimits

0xf26e,	// (0x0001e08c) call_video_g

0x14fa,	// (0x00010318) call_video_uplink_pane_cp1_ParamLimits

0x14fa,	// (0x00010318) call_video_uplink_pane_cp1

0xa000,	// (0x00018e1e) call_video_uplink_pane_cp2

0x1599,	// (0x000103b7) video_down_crop_pane_ParamLimits

0x1599,	// (0x000103b7) video_down_crop_pane

0x1690,	// (0x000104ae) video_down_pane_ParamLimits

0x1690,	// (0x000104ae) video_down_pane

0xa008,	// (0x00018e26) video_down_subqcif_pane_ParamLimits

0xa008,	// (0x00018e26) video_down_subqcif_pane

0xa020,	// (0x00018e3e) video_down_subqcif_pane_cp_ParamLimits

0xa020,	// (0x00018e3e) video_down_subqcif_pane_cp

0xa046,	// (0x00018e64) im_reading_pane_ParamLimits

0xa046,	// (0x00018e64) im_reading_pane

0x179e,	// (0x000105bc) im_writing_pane_ParamLimits

0x179e,	// (0x000105bc) im_writing_pane

0x17b4,	// (0x000105d2) im_reading_pane_t1

0xa060,	// (0x00018e7e) list_im_pane

0xa071,	// (0x00018e8f) scroll_pane_cp07

0x17ed,	// (0x0001060b) im_writing_pane_t1_ParamLimits

0x17ed,	// (0x0001060b) im_writing_pane_t1

0xa08a,	// (0x00018ea8) im_writing_pane_t2_ParamLimits

0xa08a,	// (0x00018ea8) im_writing_pane_t2

0x0001,

0xf278,	// (0x0001e096) im_writing_pane_t_ParamLimits

0xf278,	// (0x0001e096) im_writing_pane_t

0x99db,	// (0x000187f9) input_focus_pane_cp04

0x99db,	// (0x000187f9) input_focus_pane_cp05

0x1802,	// (0x00010620) list_im_single_pane_ParamLimits

0x1802,	// (0x00010620) list_im_single_pane

0x1816,	// (0x00010634) list_single_im_pane_t1

0x342b,	// (0x00012249) blid_accuracy_pane

0x3433,	// (0x00012251) blid_compass_pane

0x343d,	// (0x0001225b) main_location_t1

0x344d,	// (0x0001226b) main_location_t2

0x345d,	// (0x0001227b) main_location_t3

0x0002,

0xf5df,	// (0x0001e3fd) main_location_t

0x99db,	// (0x000187f9) aid_levels_location

0x9d96,	// (0x00018bb4) blid_accuracy_pane_g1

0x9d96,	// (0x00018bb4) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x0001e0f8) blid_accuracy_pane_g

0xa0d2,	// (0x00018ef0) wml_content_pane

0xa110,	// (0x00018f2e) wml_button_pane_ParamLimits

0xa110,	// (0x00018f2e) wml_button_pane

0x1825,	// (0x00010643) wml_list_single_large_pane_ParamLimits

0x1825,	// (0x00010643) wml_list_single_large_pane

0x183a,	// (0x00010658) wml_list_single_medium_pane_ParamLimits

0x183a,	// (0x00010658) wml_list_single_medium_pane

0x1850,	// (0x0001066e) wml_list_single_small_pane_ParamLimits

0x1850,	// (0x0001066e) wml_list_single_small_pane

0xa124,	// (0x00018f42) wml_selection_box_pane_ParamLimits

0xa124,	// (0x00018f42) wml_selection_box_pane

0xa137,	// (0x00018f55) wml_list_single_pane_t1

0xa146,	// (0x00018f64) wml_list_single_medium_pane_t1

0xa155,	// (0x00018f73) wml_list_single_large_pane_t1

0xa164,	// (0x00018f82) input_focus_pane_cp02_ParamLimits

0xa164,	// (0x00018f82) input_focus_pane_cp02

0xa177,	// (0x00018f95) wml_selection_box_pane_g1

0xa180,	// (0x00018f9e) wml_selection_box_pane_t1_ParamLimits

0xa180,	// (0x00018f9e) wml_selection_box_pane_t1

0x9c36,	// (0x00018a54) bg_wml_button_pane_ParamLimits

0x9c36,	// (0x00018a54) bg_wml_button_pane

0xa198,	// (0x00018fb6) wml_button_pane_g1

0xa1a0,	// (0x00018fbe) wml_button_pane_t1

0xa198,	// (0x00018fb6) wml_button_bg_pane_g1

0xa1b0,	// (0x00018fce) wml_button_bg_pane_g2

0xa1b8,	// (0x00018fd6) wml_button_bg_pane_g3

0xa1c0,	// (0x00018fde) wml_button_bg_pane_g4

0xa1c8,	// (0x00018fe6) wml_button_bg_pane_g5

0xa1d0,	// (0x00018fee) wml_button_bg_pane_g6

0xa1d8,	// (0x00018ff6) wml_button_bg_pane_g7

0xa1e0,	// (0x00018ffe) wml_button_bg_pane_g8

0xa1e8,	// (0x00019006) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x0001e09b) wml_button_bg_pane_g

0x1868,	// (0x00010686) bg_list_pane_cp02

0xa1f0,	// (0x0001900e) mce_header_pane_ParamLimits

0xa1f0,	// (0x0001900e) mce_header_pane

0xa206,	// (0x00019024) mce_icon_pane

0xa206,	// (0x00019024) mce_image_pane

0xa20f,	// (0x0001902d) mce_text_pane_ParamLimits

0xa20f,	// (0x0001902d) mce_text_pane

0x1870,	// (0x0001068e) scroll_pane_cp03

0xa108,	// (0x00018f26) scroll_pane_cp04

0xa222,	// (0x00019040) scroll_pane_cp05_ParamLimits

0xa222,	// (0x00019040) scroll_pane_cp05

0x187a,	// (0x00010698) mce_header_field_pane_ParamLimits

0x187a,	// (0x00010698) mce_header_field_pane

0x1891,	// (0x000106af) mce_header_field_pane_2_ParamLimits

0x1891,	// (0x000106af) mce_header_field_pane_2

0x18a7,	// (0x000106c5) mce_header_field_pane_3

0x18af,	// (0x000106cd) list_single_mce_message_pane_ParamLimits

0x18af,	// (0x000106cd) list_single_mce_message_pane

0x18c4,	// (0x000106e2) list_single_mce_smart_pane_ParamLimits

0x18c4,	// (0x000106e2) list_single_mce_smart_pane

0xa22e,	// (0x0001904c) input_focus_pane_cp03

0xa237,	// (0x00019055) list_header_data_pane

0x18e4,	// (0x00010702) mce_header_field_pane_t1

0x18f4,	// (0x00010712) list_single_mce_header_pane_ParamLimits

0x18f4,	// (0x00010712) list_single_mce_header_pane

0xa23f,	// (0x0001905d) list_single_mce_header_pane_t1

0xa24e,	// (0x0001906c) list_single_mce_message_pane_g1

0xa256,	// (0x00019074) list_single_mce_message_pane_t1

0x192e,	// (0x0001074c) bg_cale_heading_pane_cp01_ParamLimits

0x192e,	// (0x0001074c) bg_cale_heading_pane_cp01

0xa264,	// (0x00019082) bg_cale_pane_cp02_ParamLimits

0xa264,	// (0x00019082) bg_cale_pane_cp02

0x195d,	// (0x0001077b) cale_month_corner_pane

0x197c,	// (0x0001079a) cale_month_day_heading_pane_ParamLimits

0x197c,	// (0x0001079a) cale_month_day_heading_pane

0x19c3,	// (0x000107e1) cale_month_pane_g1_ParamLimits

0x19c3,	// (0x000107e1) cale_month_pane_g1

0x19e7,	// (0x00010805) cale_month_pane_g2_ParamLimits

0x19e7,	// (0x00010805) cale_month_pane_g2

0x1a17,	// (0x00010835) cale_month_pane_g3_ParamLimits

0x1a17,	// (0x00010835) cale_month_pane_g3

0x1a53,	// (0x00010871) cale_month_pane_g4_ParamLimits

0x1a53,	// (0x00010871) cale_month_pane_g4

0x1a8f,	// (0x000108ad) cale_month_pane_g5_ParamLimits

0x1a8f,	// (0x000108ad) cale_month_pane_g5

0x1ad7,	// (0x000108f5) cale_month_pane_g6_ParamLimits

0x1ad7,	// (0x000108f5) cale_month_pane_g6

0x1b23,	// (0x00010941) cale_month_pane_g7_ParamLimits

0x1b23,	// (0x00010941) cale_month_pane_g7

0x1b77,	// (0x00010995) cale_month_pane_g8_ParamLimits

0x1b77,	// (0x00010995) cale_month_pane_g8

0x1bcb,	// (0x000109e9) cale_month_pane_g9_ParamLimits

0x1bcb,	// (0x000109e9) cale_month_pane_g9

0x1c1d,	// (0x00010a3b) cale_month_pane_g10_ParamLimits

0x1c1d,	// (0x00010a3b) cale_month_pane_g10

0x1c6f,	// (0x00010a8d) cale_month_pane_g11_ParamLimits

0x1c6f,	// (0x00010a8d) cale_month_pane_g11

0x1cc1,	// (0x00010adf) cale_month_pane_g12_ParamLimits

0x1cc1,	// (0x00010adf) cale_month_pane_g12

0x1d13,	// (0x00010b31) cale_month_pane_g13_ParamLimits

0x1d13,	// (0x00010b31) cale_month_pane_g13

0x000c,

0xf290,	// (0x0001e0ae) cale_month_pane_g_ParamLimits

0xf290,	// (0x0001e0ae) cale_month_pane_g

0x1d65,	// (0x00010b83) cale_month_week_pane

0x1d89,	// (0x00010ba7) grid_cale_month_pane_ParamLimits

0x1d89,	// (0x00010ba7) grid_cale_month_pane

0x1dc7,	// (0x00010be5) cale_month_day_heading_pane_t1

0x1e4d,	// (0x00010c6b) cale_month_day_heading_pane_t2

0x1ede,	// (0x00010cfc) cale_month_day_heading_pane_t3

0x1f6f,	// (0x00010d8d) cale_month_day_heading_pane_t4

0x2004,	// (0x00010e22) cale_month_day_heading_pane_t5

0x20a5,	// (0x00010ec3) cale_month_day_heading_pane_t6

0x2146,	// (0x00010f64) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x0001e0c9) cale_month_day_heading_pane_t

0x9ef4,	// (0x00018d12) bg_cale_side_pane_cp01

0x21ef,	// (0x0001100d) cale_month_week_pane_t1

0x2208,	// (0x00011026) cale_month_week_pane_t2

0x2221,	// (0x0001103f) cale_month_week_pane_t3

0x223a,	// (0x00011058) cale_month_week_pane_t4

0x2253,	// (0x00011071) cale_month_week_pane_t5

0x226c,	// (0x0001108a) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x0001e0d8) cale_month_week_pane_t

0x2285,	// (0x000110a3) cell_cale_month_pane_ParamLimits

0x2285,	// (0x000110a3) cell_cale_month_pane

0xa2a3,	// (0x000190c1) cell_cale_month_pane_g1

0x23d9,	// (0x000111f7) cell_cale_month_pane_t1_ParamLimits

0x23d9,	// (0x000111f7) cell_cale_month_pane_t1

0x9f02,	// (0x00018d20) grid_highlight_pane_cp08

0x9d96,	// (0x00018bb4) main_smil_g1

0x23f9,	// (0x00011217) smil_status_pane

0xa2af,	// (0x000190cd) smil_text_pane

0xbd71,	// (0x0001ab8f) bg_popup_call3_rect_pane_g8

0xbd79,	// (0x0001ab97) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x0001e391) bg_popup_call3_rect_pane_g

0xc014,	// (0x0001ae32) smil_status_volume_pane_g1

0xa2b9,	// (0x000190d7) smil_status_pane_t1

0xc047,	// (0x0001ae65) volume_smil_pane

0xa2d0,	// (0x000190ee) list_smil_text_pane

0x240c,	// (0x0001122a) scroll_pane_cp011

0x2417,	// (0x00011235) smil_text_list_pane_t1_ParamLimits

0x2417,	// (0x00011235) smil_text_list_pane_t1

0xa2da,	// (0x000190f8) aid_volume_smil_ParamLimits

0xa2da,	// (0x000190f8) aid_volume_smil

0x9d96,	// (0x00018bb4) smil_volume_pane_g1

0x9d96,	// (0x00018bb4) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x0001e0f8) smil_volume_pane_g

0x0997,	// (0x0000f7b5) listscroll_cale_day_pane

0xa2fc,	// (0x0001911a) bg_cale_pane

0xa314,	// (0x00019132) list_cale_pane

0xa337,	// (0x00019155) scroll_pane_cp09

0xa348,	// (0x00019166) cale_bg_pane_g1

0xa350,	// (0x0001916e) cale_bg_pane_g2

0xa358,	// (0x00019176) cale_bg_pane_g3

0xa360,	// (0x0001917e) cale_bg_pane_g4

0xa368,	// (0x00019186) cale_bg_pane_g5

0xa370,	// (0x0001918e) cale_bg_pane_g6

0xa378,	// (0x00019196) cale_bg_pane_g7

0xa380,	// (0x0001919e) cale_bg_pane_g8

0xa388,	// (0x000191a6) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x0001e0fd) cale_bg_pane_g

0x245b,	// (0x00011279) list_cale_time_pane_ParamLimits

0x245b,	// (0x00011279) list_cale_time_pane

0xa390,	// (0x000191ae) list_cale_time_pane_g1_ParamLimits

0xa390,	// (0x000191ae) list_cale_time_pane_g1

0xa39c,	// (0x000191ba) list_cale_time_pane_g2_ParamLimits

0xa39c,	// (0x000191ba) list_cale_time_pane_g2

0x2470,	// (0x0001128e) list_cale_time_pane_g3_ParamLimits

0x2470,	// (0x0001128e) list_cale_time_pane_g3

0x247e,	// (0x0001129c) list_cale_time_pane_g4_ParamLimits

0x247e,	// (0x0001129c) list_cale_time_pane_g4

0x248c,	// (0x000112aa) list_cale_time_pane_g5_ParamLimits

0x248c,	// (0x000112aa) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x0001e110) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x0001e110) list_cale_time_pane_g

0xa3b6,	// (0x000191d4) list_cale_time_pane_t1_ParamLimits

0xa3b6,	// (0x000191d4) list_cale_time_pane_t1

0xa3de,	// (0x000191fc) list_cale_time_pane_t2_ParamLimits

0xa3de,	// (0x000191fc) list_cale_time_pane_t2

0x27ef,	// (0x0001160d) aid_blid_cardinal_pane

0x282d,	// (0x0001164b) compass_pane_t4

0xa406,	// (0x00019224) list_cale_time_pane_t4_ParamLimits

0xa406,	// (0x00019224) list_cale_time_pane_t4

0x283b,	// (0x00011659) compass_pane_t5

0x2849,	// (0x00011667) compass_pane_t6

0x2857,	// (0x00011675) compass_pane_t7

0xa928,	// (0x00019746) navi_pane_cc_t1

0xab1f,	// (0x0001993d) aid_phob_thumbnail_center_pane

0x2e43,	// (0x00011c61) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x0001e11d) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x0001e11d) list_cale_time_pane_t

0x9632,	// (0x00018450) bg_popup_window_pane_cp02_ParamLimits

0x9632,	// (0x00018450) bg_popup_window_pane_cp02

0xa42e,	// (0x0001924c) heading_pane_cp01_ParamLimits

0xa42e,	// (0x0001924c) heading_pane_cp01

0xa43a,	// (0x00019258) loc_req_pane_ParamLimits

0xa43a,	// (0x00019258) loc_req_pane

0xa44a,	// (0x00019268) loc_type_pane_ParamLimits

0xa44a,	// (0x00019268) loc_type_pane

0xa45c,	// (0x0001927a) loc_type_pane_t1_ParamLimits

0xa45c,	// (0x0001927a) loc_type_pane_t1

0xa46e,	// (0x0001928c) loc_type_pane_t2_ParamLimits

0xa46e,	// (0x0001928c) loc_type_pane_t2

0xa480,	// (0x0001929e) loc_type_pane_t3_ParamLimits

0xa480,	// (0x0001929e) loc_type_pane_t3

0x0002,

0xf306,	// (0x0001e124) loc_type_pane_t_ParamLimits

0xf306,	// (0x0001e124) loc_type_pane_t

0xa492,	// (0x000192b0) list_loc_req_pane

0xa49c,	// (0x000192ba) scroll_pane_cp012

0x249a,	// (0x000112b8) list_single_loc_request_popup_menu_pane_ParamLimits

0x249a,	// (0x000112b8) list_single_loc_request_popup_menu_pane

0xa4a7,	// (0x000192c5) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa4a7,	// (0x000192c5) list_single_loc_request_popup_menu_pane_g1

0xa4b3,	// (0x000192d1) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa4b3,	// (0x000192d1) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x0001e12b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x0001e12b) list_single_loc_request_popup_menu_pane_g

0xa4bf,	// (0x000192dd) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa4bf,	// (0x000192dd) list_single_loc_request_popup_menu_pane_t1

0x9c36,	// (0x00018a54) bg_popup_window_pane_cp03_ParamLimits

0x9c36,	// (0x00018a54) bg_popup_window_pane_cp03

0xa4d5,	// (0x000192f3) heading_loc_req_pane_ParamLimits

0xa4d5,	// (0x000192f3) heading_loc_req_pane

0x24a7,	// (0x000112c5) popup_dyc_status_message_window_g1_ParamLimits

0x24a7,	// (0x000112c5) popup_dyc_status_message_window_g1

0x24bb,	// (0x000112d9) popup_dyc_status_message_window_t1_ParamLimits

0x24bb,	// (0x000112d9) popup_dyc_status_message_window_t1

0x24d0,	// (0x000112ee) popup_dyc_status_message_window_t2_ParamLimits

0x24d0,	// (0x000112ee) popup_dyc_status_message_window_t2

0x24e5,	// (0x00011303) popup_dyc_status_message_window_t3_ParamLimits

0x24e5,	// (0x00011303) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x0001e130) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x0001e130) popup_dyc_status_message_window_t

0x99db,	// (0x000187f9) bg_heading_pane_cp01

0xa4e1,	// (0x000192ff) heading_loc_req_pane_g1

0xa4e9,	// (0x00019307) heading_loc_req_pane_g2

0xa4f1,	// (0x0001930f) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x0001e137) heading_loc_req_pane_g

0xa4f9,	// (0x00019317) heading_loc_req_pane_t1

0xa508,	// (0x00019326) bg_popup_sub_pane_cp01_ParamLimits

0xa508,	// (0x00019326) bg_popup_sub_pane_cp01

0xa516,	// (0x00019334) popup_cale_events_window_g1_ParamLimits

0xa516,	// (0x00019334) popup_cale_events_window_g1

0xa536,	// (0x00019354) popup_cale_events_window_g2_ParamLimits

0xa536,	// (0x00019354) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x0001e16b) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x0001e16b) popup_cale_events_window_g

0xa556,	// (0x00019374) popup_cale_events_window_t1_ParamLimits

0xa556,	// (0x00019374) popup_cale_events_window_t1

0xa568,	// (0x00019386) popup_cale_events_window_t2_ParamLimits

0xa568,	// (0x00019386) popup_cale_events_window_t2

0xa5a6,	// (0x000193c4) popup_cale_events_window_t3_ParamLimits

0xa5a6,	// (0x000193c4) popup_cale_events_window_t3

0xa5e0,	// (0x000193fe) popup_cale_events_window_t4_ParamLimits

0xa5e0,	// (0x000193fe) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x0001e170) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x0001e170) popup_cale_events_window_t

0x25ea,	// (0x00011408) call_type_pane

0x25fa,	// (0x00011418) popup_call_status_window_g1

0x260e,	// (0x0001142c) popup_call_status_window_g2

0x2622,	// (0x00011440) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x0001e179) popup_call_status_window_g

0xa616,	// (0x00019434) call_type_pane_g1

0xa61f,	// (0x0001943d) call_type_pane_g2

0x0001,

0xf362,	// (0x0001e180) call_type_pane_g

0x99db,	// (0x000187f9) bg_popup_sub_pane_cp02

0xa628,	// (0x00019446) listscroll_popup_wml_pane

0xa630,	// (0x0001944e) list_wml_pane

0xa63a,	// (0x00019458) scroll_pane_cp013

0xa645,	// (0x00019463) list_single_graphic_popup_wml_pane_ParamLimits

0xa645,	// (0x00019463) list_single_graphic_popup_wml_pane

0x9d96,	// (0x00018bb4) list_single_graphic_popup_wml_pane_g1

0xa659,	// (0x00019477) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x0001e185) list_single_graphic_popup_wml_pane_g

0xa661,	// (0x0001947f) list_single_graphic_popup_wml_pane_t1

0xa677,	// (0x00019495) aid_call_pane

0x9c2e,	// (0x00018a4c) popup_clock_analogue_window_g1

0x9c2e,	// (0x00018a4c) popup_clock_analogue_window_g2

0xa67f,	// (0x0001949d) popup_clock_analogue_window_g3

0xa67f,	// (0x0001949d) popup_clock_analogue_window_g4

0x9d96,	// (0x00018bb4) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x0001e18a) popup_clock_analogue_window_g

0xa687,	// (0x000194a5) popup_clock_analogue_window_t1

0xa695,	// (0x000194b3) clock_digital_number_pane_ParamLimits

0xa695,	// (0x000194b3) clock_digital_number_pane

0xa6a1,	// (0x000194bf) clock_digital_number_pane_cp02_ParamLimits

0xa6a1,	// (0x000194bf) clock_digital_number_pane_cp02

0xa6ad,	// (0x000194cb) clock_digital_number_pane_cp03_ParamLimits

0xa6ad,	// (0x000194cb) clock_digital_number_pane_cp03

0xa6b9,	// (0x000194d7) clock_digital_number_pane_cp04_ParamLimits

0xa6b9,	// (0x000194d7) clock_digital_number_pane_cp04

0xa6c9,	// (0x000194e7) clock_digital_separator_pane_ParamLimits

0xa6c9,	// (0x000194e7) clock_digital_separator_pane

0xa6d5,	// (0x000194f3) popup_clock_digital_window_t1

0x9d96,	// (0x00018bb4) clock_digital_number_pane_g1

0x9d96,	// (0x00018bb4) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x0001e0f8) clock_digital_number_pane_g

0x9d96,	// (0x00018bb4) clock_digital_separator_pane_g1

0x9d96,	// (0x00018bb4) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x0001e0f8) clock_digital_separator_pane_g

0x99db,	// (0x000187f9) bg_popup_window_pane_cp04

0xa6f2,	// (0x00019510) heading_pane_cp03

0xa6fa,	// (0x00019518) listscroll_popup_gms_pane

0xa702,	// (0x00019520) grid_large_graphic_popup_pane

0xa70c,	// (0x0001952a) listscroll_popup_gms_pane_g1

0xa714,	// (0x00019532) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x0001e195) listscroll_popup_gms_pane_g

0xa108,	// (0x00018f26) scroll_pane_cp014

0x2631,	// (0x0001144f) cell_large_graphic_popup_pane_ParamLimits

0x2631,	// (0x0001144f) cell_large_graphic_popup_pane

0x2649,	// (0x00011467) cell_large_graphic_popup_pane_g1_ParamLimits

0x2649,	// (0x00011467) cell_large_graphic_popup_pane_g1

0xa71c,	// (0x0001953a) cell_large_graphic_popup_pane_g2_ParamLimits

0xa71c,	// (0x0001953a) cell_large_graphic_popup_pane_g2

0xa728,	// (0x00019546) cell_large_graphic_popup_pane_g3_ParamLimits

0xa728,	// (0x00019546) cell_large_graphic_popup_pane_g3

0xa735,	// (0x00019553) cell_large_graphic_popup_pane_g4_ParamLimits

0xa735,	// (0x00019553) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x0001e19a) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x0001e19a) cell_large_graphic_popup_pane_g

0xa745,	// (0x00019563) grid_highlight_pane_cp010

0x9d96,	// (0x00018bb4) bg_popup_call_pane_g1

0xa74f,	// (0x0001956d) list_single_graphic_popup_conf_pane_ParamLimits

0xa74f,	// (0x0001956d) list_single_graphic_popup_conf_pane

0xa762,	// (0x00019580) list_highlight_pane_cp01

0xa76b,	// (0x00019589) list_single_graphic_popup_conf_pane_g1

0xa773,	// (0x00019591) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x0001e1a3) list_single_graphic_popup_conf_pane_g

0xa77b,	// (0x00019599) list_single_graphic_popup_conf_pane_t1

0xa789,	// (0x000195a7) linegrid_cams_pane_g1

0x2655,	// (0x00011473) linegrid_cams_pane_g2

0x9f35,	// (0x00018d53) linegrid_cams_pane_g3

0xa792,	// (0x000195b0) linegrid_cams_pane_g4

0x265e,	// (0x0001147c) linegrid_cams_pane_g5

0x2667,	// (0x00011485) linegrid_cams_pane_g6

0x9f3e,	// (0x00018d5c) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x0001e1a8) linegrid_cams_pane_g

0xa79b,	// (0x000195b9) popup_clock_analogue_window

0xa79b,	// (0x000195b9) popup_clock_digital_window

0x99db,	// (0x000187f9) popup_phob_thumbnail_window

0x9d96,	// (0x00018bb4) call_video_uplink_pane_g1

0xa7a4,	// (0x000195c2) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x0001e1b7) call_video_uplink_pane_g

0xa7ac,	// (0x000195ca) video_uplink_pane

0xa7b4,	// (0x000195d2) mce_image_pane_g1

0x2672,	// (0x00011490) mce_image_pane_g2

0x267c,	// (0x0001149a) mce_image_pane_g3

0x2684,	// (0x000114a2) mce_image_pane_g4

0x268c,	// (0x000114aa) mce_image_pane_g5

0x0004,

0xf39e,	// (0x0001e1bc) mce_image_pane_g

0xa7be,	// (0x000195dc) control_top_pane_stacon_cp01_ParamLimits

0xa7be,	// (0x000195dc) control_top_pane_stacon_cp01

0xa7d2,	// (0x000195f0) uni_indicator_pane_stacon_cp01_ParamLimits

0xa7d2,	// (0x000195f0) uni_indicator_pane_stacon_cp01

0xa7e3,	// (0x00019601) bg_popup_sub_pane_cp03

0xa7ed,	// (0x0001960b) chi_dic_find_pane

0x2694,	// (0x000114b2) listscroll_chi_dic_pane

0xa7f5,	// (0x00019613) main_pane_chidic_g1

0xa7fd,	// (0x0001961b) chi_dic_find_pane_t1

0xa80b,	// (0x00019629) find_chidic_pane

0xa814,	// (0x00019632) chi_dic_list_pane_ParamLimits

0xa814,	// (0x00019632) chi_dic_list_pane

0xa825,	// (0x00019643) scroll_pane_cp020

0xa82d,	// (0x0001964b) find_chidic_pane_t1

0x99db,	// (0x000187f9) input_focus_pane_cp06

0x26a8,	// (0x000114c6) list_chi_dic_pane_ParamLimits

0x26a8,	// (0x000114c6) list_chi_dic_pane

0x26ba,	// (0x000114d8) list_chi_dic_pane_t1_ParamLimits

0x26ba,	// (0x000114d8) list_chi_dic_pane_t1

0x99db,	// (0x000187f9) list_highlight_pane_cp020

0xa83c,	// (0x0001965a) bg_cale_heading_pane_g1

0x26cd,	// (0x000114eb) bg_cale_heading_pane_g2

0x26d5,	// (0x000114f3) bg_cale_heading_pane_g3

0x26dd,	// (0x000114fb) bg_cale_heading_pane_g4

0x26e7,	// (0x00011505) bg_cale_heading_pane_g5

0x26f1,	// (0x0001150f) bg_cale_heading_pane_g6

0x26f9,	// (0x00011517) bg_cale_heading_pane_g7

0x2701,	// (0x0001151f) bg_cale_heading_pane_g8

0x270b,	// (0x00011529) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x0001e1c7) bg_cale_heading_pane_g

0xa83c,	// (0x0001965a) bg_cale_side_pane_g1

0x2715,	// (0x00011533) bg_cale_side_pane_g2

0x271d,	// (0x0001153b) bg_cale_side_pane_g3

0x2725,	// (0x00011543) bg_cale_side_pane_g4

0x272d,	// (0x0001154b) bg_cale_side_pane_g5

0x2735,	// (0x00011553) bg_cale_side_pane_g6

0x273d,	// (0x0001155b) bg_cale_side_pane_g7

0x2745,	// (0x00011563) bg_cale_side_pane_g8

0x274d,	// (0x0001156b) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x0001e1da) bg_cale_side_pane_g

0x2755,	// (0x00011573) popup_call_status_window_ParamLimits

0x2755,	// (0x00011573) popup_call_status_window

0xa844,	// (0x00019662) stacon_top_pane

0xa84c,	// (0x0001966a) status_pane_ParamLimits

0xa84c,	// (0x0001966a) status_pane

0xa861,	// (0x0001967f) status_small_pane

0xa869,	// (0x00019687) control_pane

0x99db,	// (0x000187f9) stacon_bottom_pane

0xa871,	// (0x0001968f) list_single_mce_smart_pane_t1_ParamLimits

0xa871,	// (0x0001968f) list_single_mce_smart_pane_t1

0xa884,	// (0x000196a2) list_single_mce_smart_pane_t2_ParamLimits

0xa884,	// (0x000196a2) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x0001e1ed) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x0001e1ed) list_single_mce_smart_pane_t

0x279e,	// (0x000115bc) compass_pane

0x27a7,	// (0x000115c5) main_location2_pane_t1

0x27b9,	// (0x000115d7) main_location2_pane_t2

0x27cb,	// (0x000115e9) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x0001e1f2) main_location2_pane_t

0xa8a3,	// (0x000196c1) compass_pane_g1_ParamLimits

0xa8a3,	// (0x000196c1) compass_pane_g1

0x280f,	// (0x0001162d) compass_pane_t1

0x281e,	// (0x0001163c) compass_pane_t2

0x0005,

0xf3dd,	// (0x0001e1fb) compass_pane_t

0x2865,	// (0x00011683) text_secondary_cp61

0xa91f,	// (0x0001973d) navi_pane_cams_g5

0xa99b,	// (0x000197b9) navi_pane_im_t1

0xa9a9,	// (0x000197c7) navi_pane_mp_g1_ParamLimits

0xa9a9,	// (0x000197c7) navi_pane_mp_g1

0xa9bd,	// (0x000197db) navi_pane_mp_g2_ParamLimits

0xa9bd,	// (0x000197db) navi_pane_mp_g2

0xa9c9,	// (0x000197e7) navi_pane_mp_g3_ParamLimits

0xa9c9,	// (0x000197e7) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x0001e20f) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x0001e20f) navi_pane_mp_g

0xa9d5,	// (0x000197f3) navi_pane_mp_t1

0xa9e3,	// (0x00019801) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x0001e216) navi_pane_mp_t

0xaa4e,	// (0x0001986c) navi_pane_vt_g1

0xa9d5,	// (0x000197f3) navi_pane_vt_t1

0xaa56,	// (0x00019874) navi_slider_pane

0xaa66,	// (0x00019884) zooming_pane

0xaa6e,	// (0x0001988c) navi_slider_pane_g1

0xaa77,	// (0x00019895) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x0001e21d) navi_slider_pane_g

0xaaa4,	// (0x000198c2) aid_levels_zoom

0xaaac,	// (0x000198ca) zooming_pane_g1

0xaab4,	// (0x000198d2) zooming_pane_g2

0xaab4,	// (0x000198d2) zooming_pane_g3

0x0002,

0xf40e,	// (0x0001e22c) zooming_pane_g

0xaabc,	// (0x000198da) level_10_zoom

0xaac5,	// (0x000198e3) level_11_zoom

0xaace,	// (0x000198ec) level_1_zoom

0xaad7,	// (0x000198f5) level_2_zoom

0xaae0,	// (0x000198fe) level_3_zoom

0xaae9,	// (0x00019907) level_4_zoom

0xaaf2,	// (0x00019910) level_5_zoom

0xaafb,	// (0x00019919) level_6_zoom

0xab04,	// (0x00019922) level_7_zoom

0xab0d,	// (0x0001992b) level_8_zoom

0xab16,	// (0x00019934) level_9_zoom

0xab27,	// (0x00019945) popup_phob_thumbnail_window_g1

0xab2f,	// (0x0001994d) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x0001e233) popup_phob_thumbnail_window_g

0xbed3,	// (0x0001acf1) level_1_location

0xbedb,	// (0x0001acf9) level_2_location

0xbee3,	// (0x0001ad01) level_3_location

0xbeeb,	// (0x0001ad09) level_4_location

0xaa66,	// (0x00019884) level_5_location

0x28b6,	// (0x000116d4) mce_icon_pane_g1

0x28c0,	// (0x000116de) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x0001e238) mce_icon_pane_g

0x28c8,	// (0x000116e6) main_mup_pane_g1_ParamLimits

0x28c8,	// (0x000116e6) main_mup_pane_g1

0x28de,	// (0x000116fc) main_mup_pane_g2_ParamLimits

0x28de,	// (0x000116fc) main_mup_pane_g2

0x28f6,	// (0x00011714) main_mup_pane_g3_ParamLimits

0x28f6,	// (0x00011714) main_mup_pane_g3

0x290e,	// (0x0001172c) main_mup_pane_g4_ParamLimits

0x290e,	// (0x0001172c) main_mup_pane_g4

0x2926,	// (0x00011744) main_mup_pane_g5_ParamLimits

0x2926,	// (0x00011744) main_mup_pane_g5

0x2942,	// (0x00011760) main_mup_pane_g6_ParamLimits

0x2942,	// (0x00011760) main_mup_pane_g6

0x295a,	// (0x00011778) main_mup_pane_g7_ParamLimits

0x295a,	// (0x00011778) main_mup_pane_g7

0x2972,	// (0x00011790) main_mup_pane_g8_ParamLimits

0x2972,	// (0x00011790) main_mup_pane_g8

0x298c,	// (0x000117aa) main_mup_pane_g9_ParamLimits

0x298c,	// (0x000117aa) main_mup_pane_g9

0x29a6,	// (0x000117c4) main_mup_pane_g10_ParamLimits

0x29a6,	// (0x000117c4) main_mup_pane_g10

0x29c0,	// (0x000117de) main_mup_pane_g11_ParamLimits

0x29c0,	// (0x000117de) main_mup_pane_g11

0x29d4,	// (0x000117f2) main_mup_pane_g12_ParamLimits

0x29d4,	// (0x000117f2) main_mup_pane_g12

0x29ea,	// (0x00011808) main_mup_pane_g13_ParamLimits

0x29ea,	// (0x00011808) main_mup_pane_g13

0x000c,

0xf41f,	// (0x0001e23d) main_mup_pane_g_ParamLimits

0xf41f,	// (0x0001e23d) main_mup_pane_g

0x29fe,	// (0x0001181c) main_mup_pane_t1_ParamLimits

0x29fe,	// (0x0001181c) main_mup_pane_t1

0x2a18,	// (0x00011836) main_mup_pane_t2_ParamLimits

0x2a18,	// (0x00011836) main_mup_pane_t2

0x2a30,	// (0x0001184e) main_mup_pane_t3_ParamLimits

0x2a30,	// (0x0001184e) main_mup_pane_t3

0x2a48,	// (0x00011866) main_mup_pane_t4_ParamLimits

0x2a48,	// (0x00011866) main_mup_pane_t4

0x2a66,	// (0x00011884) main_mup_pane_t5_ParamLimits

0x2a66,	// (0x00011884) main_mup_pane_t5

0x2a7b,	// (0x00011899) main_mup_pane_t6_ParamLimits

0x2a7b,	// (0x00011899) main_mup_pane_t6

0x0005,

0xf43a,	// (0x0001e258) main_mup_pane_t_ParamLimits

0xf43a,	// (0x0001e258) main_mup_pane_t

0x2a8d,	// (0x000118ab) mup_progress_pane_ParamLimits

0x2a8d,	// (0x000118ab) mup_progress_pane

0x2a99,	// (0x000118b7) mup_visualizer_pane_ParamLimits

0x2a99,	// (0x000118b7) mup_visualizer_pane

0x2ac9,	// (0x000118e7) mup_volume_pane_ParamLimits

0x2ac9,	// (0x000118e7) mup_volume_pane

0xab37,	// (0x00019955) mup_visualizer_pane_g1_ParamLimits

0xab37,	// (0x00019955) mup_visualizer_pane_g1

0xab37,	// (0x00019955) mup_visualizer_pane_g2_ParamLimits

0xab37,	// (0x00019955) mup_visualizer_pane_g2

0xa8a3,	// (0x000196c1) mup_visualizer_pane_g3_ParamLimits

0xa8a3,	// (0x000196c1) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x0001e265) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x0001e265) mup_visualizer_pane_g

0x9d96,	// (0x00018bb4) mup_volume_pane_g1

0xab4d,	// (0x0001996b) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x0001e26c) mup_volume_pane_g

0x9d96,	// (0x00018bb4) mup_progress_pane_g1

0xab56,	// (0x00019974) mup_progress_pane_g2

0xab5f,	// (0x0001997d) mup_progress_pane_g3

0x0002,

0xf453,	// (0x0001e271) mup_progress_pane_g

0x99db,	// (0x000187f9) bg_popup_window_pane_cp05

0xab68,	// (0x00019986) heading_pane_cp02_ParamLimits

0xab68,	// (0x00019986) heading_pane_cp02

0xab82,	// (0x000199a0) list_popup_blid_pane

0xab8a,	// (0x000199a8) list_blid_sat_info_pane_ParamLimits

0xab8a,	// (0x000199a8) list_blid_sat_info_pane

0xab9d,	// (0x000199bb) list_blid_sat_info_pane_g1

0xaba5,	// (0x000199c3) list_blid_sat_info_pane_t1

0x2bdf,	// (0x000119fd) mup_equalizer_pane_ParamLimits

0x2bdf,	// (0x000119fd) mup_equalizer_pane

0x2bf8,	// (0x00011a16) mup_equalizer_pane_cp1_ParamLimits

0x2bf8,	// (0x00011a16) mup_equalizer_pane_cp1

0x2c15,	// (0x00011a33) mup_equalizer_pane_cp2_ParamLimits

0x2c15,	// (0x00011a33) mup_equalizer_pane_cp2

0x2c32,	// (0x00011a50) mup_equalizer_pane_cp3_ParamLimits

0x2c32,	// (0x00011a50) mup_equalizer_pane_cp3

0x2c53,	// (0x00011a71) mup_equalizer_pane_cp4_ParamLimits

0x2c53,	// (0x00011a71) mup_equalizer_pane_cp4

0x2c74,	// (0x00011a92) mup_equalizer_pane_cp5

0x2c88,	// (0x00011aa6) mup_equalizer_pane_cp6

0x2c9c,	// (0x00011aba) mup_equalizer_pane_cp7

0xbdf1,	// (0x0001ac0f) bg_popup_call_poc_act_pane_g9

0xbdf9,	// (0x0001ac17) bg_popup_call_poc_act_pane_g10

0xbe01,	// (0x0001ac1f) bg_popup_call_poc_act_pane_g11

0x000a,

0x9c36,	// (0x00018a54) mup_scale_pane

0x9d96,	// (0x00018bb4) mup_scale_pane_g1

0xabb3,	// (0x000199d1) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x0001e28d) mup_scale_pane_g

0xabd7,	// (0x000199f5) msg_data_pane

0xabdf,	// (0x000199fd) scroll_pane_cp017

0x2cc2,	// (0x00011ae0) bg_list_pane_cp04_ParamLimits

0x2cc2,	// (0x00011ae0) bg_list_pane_cp04

0xabef,	// (0x00019a0d) msg_data_pane_g1

0x2cda,	// (0x00011af8) msg_data_pane_g2

0x2ce4,	// (0x00011b02) msg_data_pane_g3

0x2cec,	// (0x00011b0a) msg_data_pane_g4

0x2cf4,	// (0x00011b12) msg_data_pane_g5

0x2cfc,	// (0x00011b1a) msg_data_pane_g6

0x2d04,	// (0x00011b22) msg_data_pane_g7

0x0006,

0xf47e,	// (0x0001e29c) msg_data_pane_g

0x2d0c,	// (0x00011b2a) msg_text_pane_ParamLimits

0x2d0c,	// (0x00011b2a) msg_text_pane

0x2d30,	// (0x00011b4e) qrid_highlight_pane_cp011_ParamLimits

0x2d30,	// (0x00011b4e) qrid_highlight_pane_cp011

0x99db,	// (0x000187f9) msg_body_pane

0x99db,	// (0x000187f9) msg_header_pane

0xabf7,	// (0x00019a15) input_focus_pane_cp07

0xac0c,	// (0x00019a2a) msg_header_pane_t1_ParamLimits

0xac0c,	// (0x00019a2a) msg_header_pane_t1

0xac1e,	// (0x00019a3c) msg_header_pane_t2_ParamLimits

0xac1e,	// (0x00019a3c) msg_header_pane_t2

0x0001,

0xf492,	// (0x0001e2b0) msg_header_pane_t_ParamLimits

0xf492,	// (0x0001e2b0) msg_header_pane_t

0xac30,	// (0x00019a4e) msg_body_pane_g1

0xac38,	// (0x00019a56) msg_body_pane_t1_ParamLimits

0xac38,	// (0x00019a56) msg_body_pane_t1

0xac69,	// (0x00019a87) msg_body_pane_t2_ParamLimits

0xac69,	// (0x00019a87) msg_body_pane_t2

0xac7b,	// (0x00019a99) msg_body_pane_t3_ParamLimits

0xac7b,	// (0x00019a99) msg_body_pane_t3

0x0002,

0xf497,	// (0x0001e2b5) msg_body_pane_t_ParamLimits

0xf497,	// (0x0001e2b5) msg_body_pane_t

0x2d99,	// (0x00011bb7) main_viewer_pane_g1_ParamLimits

0x2d99,	// (0x00011bb7) main_viewer_pane_g1

0x2da7,	// (0x00011bc5) main_viewer_pane_g2_ParamLimits

0x2da7,	// (0x00011bc5) main_viewer_pane_g2

0x2db5,	// (0x00011bd3) main_viewer_pane_g3_ParamLimits

0x2db5,	// (0x00011bd3) main_viewer_pane_g3

0x2dc4,	// (0x00011be2) main_viewer_pane_g4_ParamLimits

0x2dc4,	// (0x00011be2) main_viewer_pane_g4

0xaca5,	// (0x00019ac3) main_viewer_pane_g5_ParamLimits

0xaca5,	// (0x00019ac3) main_viewer_pane_g5

0xaca5,	// (0x00019ac3) main_viewer_pane_g7_ParamLimits

0xaca5,	// (0x00019ac3) main_viewer_pane_g7

0xacb7,	// (0x00019ad5) main_viewer_pane_g8_ParamLimits

0xacb7,	// (0x00019ad5) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x0001e2c5) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x0001e2c5) main_viewer_pane_g

0xaccf,	// (0x00019aed) viewer_content_pane_ParamLimits

0xaccf,	// (0x00019aed) viewer_content_pane

0x2e00,	// (0x00011c1e) main_postcard_pane_g1_ParamLimits

0x2e00,	// (0x00011c1e) main_postcard_pane_g1

0x2e16,	// (0x00011c34) main_postcard_pane_g2_ParamLimits

0x2e16,	// (0x00011c34) main_postcard_pane_g2

0x2e2c,	// (0x00011c4a) main_postcard_pane_g3_ParamLimits

0x2e2c,	// (0x00011c4a) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x0001e2d6) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x0001e2d6) main_postcard_pane_g

0x2e43,	// (0x00011c61) main_postcard_pane_g4

0xc027,	// (0x0001ae45) smil_status_volume_pane_g2

0x2e86,	// (0x00011ca4) postcard_pane_ParamLimits

0x2e86,	// (0x00011ca4) postcard_pane

0xacdd,	// (0x00019afb) postcard_pane_g1_ParamLimits

0xacdd,	// (0x00019afb) postcard_pane_g1

0x2ec8,	// (0x00011ce6) postcard_pane_g2_ParamLimits

0x2ec8,	// (0x00011ce6) postcard_pane_g2

0x2ed4,	// (0x00011cf2) postcard_pane_g3_ParamLimits

0x2ed4,	// (0x00011cf2) postcard_pane_g3

0xaceb,	// (0x00019b09) postcard_pane_g4_ParamLimits

0xaceb,	// (0x00019b09) postcard_pane_g4

0x2ee0,	// (0x00011cfe) postcard_pane_g5_ParamLimits

0x2ee0,	// (0x00011cfe) postcard_pane_g5

0x2ef5,	// (0x00011d13) postcard_pane_g6_ParamLimits

0x2ef5,	// (0x00011d13) postcard_pane_g6

0xacdd,	// (0x00019afb) postcard_pane_g7_ParamLimits

0xacdd,	// (0x00019afb) postcard_pane_g7

0x0006,

0xf4c5,	// (0x0001e2e3) postcard_pane_g_ParamLimits

0xf4c5,	// (0x0001e2e3) postcard_pane_g

0x2f09,	// (0x00011d27) main_mp2_pane_g1_ParamLimits

0x2f09,	// (0x00011d27) main_mp2_pane_g1

0x2f15,	// (0x00011d33) main_mp2_pane_g2_ParamLimits

0x2f15,	// (0x00011d33) main_mp2_pane_g2

0x2f21,	// (0x00011d3f) main_mp2_pane_g3_ParamLimits

0x2f21,	// (0x00011d3f) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x0001e2f2) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x0001e2f2) main_mp2_pane_g

0x2f2d,	// (0x00011d4b) main_mp2_pane_t1_ParamLimits

0x2f2d,	// (0x00011d4b) main_mp2_pane_t1

0x2f42,	// (0x00011d60) main_mp2_pane_t2_ParamLimits

0x2f42,	// (0x00011d60) main_mp2_pane_t2

0x2f54,	// (0x00011d72) main_mp2_pane_t3_ParamLimits

0x2f54,	// (0x00011d72) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x0001e2f9) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x0001e2f9) main_mp2_pane_t

0xacf9,	// (0x00019b17) pec_content_pane_ParamLimits

0xacf9,	// (0x00019b17) pec_content_pane

0xa108,	// (0x00018f26) scroll_pane_cp015

0xad0b,	// (0x00019b29) pec_attribute_pane_ParamLimits

0xad0b,	// (0x00019b29) pec_attribute_pane

0x2f66,	// (0x00011d84) pec_content_pane_g1_ParamLimits

0x2f66,	// (0x00011d84) pec_content_pane_g1

0xad1b,	// (0x00019b39) pec_content_pane_t1_ParamLimits

0xad1b,	// (0x00019b39) pec_content_pane_t1

0xad2d,	// (0x00019b4b) pec_content_pane_t2_ParamLimits

0xad2d,	// (0x00019b4b) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x0001e300) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x0001e300) pec_content_pane_t

0x2f72,	// (0x00011d90) list_single_graphic_pane_cp01_ParamLimits

0x2f72,	// (0x00011d90) list_single_graphic_pane_cp01

0x9c36,	// (0x00018a54) bg_popup_sub_pane_cp04

0xad3f,	// (0x00019b5d) popup_mup_playback_window_g1

0xad4b,	// (0x00019b69) popup_mup_playback_window_t1

0xad60,	// (0x00019b7e) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x0001e305) popup_mup_playback_window_t

0xad97,	// (0x00019bb5) main_image_pane_g1_ParamLimits

0xad97,	// (0x00019bb5) main_image_pane_g1

0xadda,	// (0x00019bf8) scroll_pane_cp018_ParamLimits

0xadda,	// (0x00019bf8) scroll_pane_cp018

0xadf2,	// (0x00019c10) scroll_pane_cp016_ParamLimits

0xadf2,	// (0x00019c10) scroll_pane_cp016

0x303f,	// (0x00011e5d) smil2_image_pane_ParamLimits

0x303f,	// (0x00011e5d) smil2_image_pane

0x306f,	// (0x00011e8d) smil2_root_pane_ParamLimits

0x306f,	// (0x00011e8d) smil2_root_pane

0x30a7,	// (0x00011ec5) smil2_text_pane_ParamLimits

0x30a7,	// (0x00011ec5) smil2_text_pane

0x99db,	// (0x000187f9) bg_list_pane_cp06

0xae2e,	// (0x00019c4c) grid_radio_pane

0x99db,	// (0x000187f9) bg_popup_window_pane_cp06

0xae36,	// (0x00019c54) main_fmradio_pane_t1

0xa6f2,	// (0x00019510) heading_pane_cp04

0xae44,	// (0x00019c62) main_fmradio_pane_t2

0xbe09,	// (0x0001ac27) popup_cale_lunar_info_window_g1

0xae52,	// (0x00019c70) main_fmradio_pane_t3

0xbe11,	// (0x0001ac2f) popup_cale_lunar_info_window_g2

0xae60,	// (0x00019c7e) main_fmradio_pane_t4

0x0001,

0xae6e,	// (0x00019c8c) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x0001e3e0) popup_cale_lunar_info_window_g

0xf4fc,	// (0x0001e31a) main_fmradio_pane_t

0xae7c,	// (0x00019c9a) wait_bar_pane_cp03

0xae84,	// (0x00019ca2) cell_fmradio_pane_ParamLimits

0xae84,	// (0x00019ca2) cell_fmradio_pane

0xacdd,	// (0x00019afb) cell_fmradio_pane_g1_ParamLimits

0xacdd,	// (0x00019afb) cell_fmradio_pane_g1

0x99db,	// (0x000187f9) grid_highlight_pane_cp011

0xae97,	// (0x00019cb5) poc_content_pane_ParamLimits

0xae97,	// (0x00019cb5) poc_content_pane

0xaea9,	// (0x00019cc7) scroll_pane_cp019

0x3127,	// (0x00011f45) popup_call_poc_act_window_ParamLimits

0x3127,	// (0x00011f45) popup_call_poc_act_window

0x314b,	// (0x00011f69) popup_call_poc_inact_window_ParamLimits

0x314b,	// (0x00011f69) popup_call_poc_inact_window

0xf599,	// (0x0001e3b7) bg_popup_call_poc_act_pane_g

0xbd81,	// (0x0001ab9f) bg_popup_call_poc_inact_pane_g1

0xbd89,	// (0x0001aba7) bg_popup_call_poc_inact_pane_g2

0xaeb1,	// (0x00019ccf) popup_call_poc_act_window_g2

0xbd91,	// (0x0001abaf) bg_popup_call_poc_inact_pane_g3

0xbd99,	// (0x0001abb7) bg_popup_call_poc_inact_pane_g4

0xbda1,	// (0x0001abbf) bg_popup_call_poc_inact_pane_g5

0xaeb9,	// (0x00019cd7) popup_call_poc_act_window_t1_ParamLimits

0xaeb9,	// (0x00019cd7) popup_call_poc_act_window_t1

0xaee1,	// (0x00019cff) popup_call_poc_act_window_t2_ParamLimits

0xaee1,	// (0x00019cff) popup_call_poc_act_window_t2

0xaf09,	// (0x00019d27) popup_call_poc_act_window_t3_ParamLimits

0xaf09,	// (0x00019d27) popup_call_poc_act_window_t3

0xaf31,	// (0x00019d4f) popup_call_poc_act_window_t4_ParamLimits

0xaf31,	// (0x00019d4f) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x0001e325) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x0001e325) popup_call_poc_act_window_t

0xbda9,	// (0x0001abc7) bg_popup_call_poc_inact_pane_g6

0xbdb1,	// (0x0001abcf) bg_popup_call_poc_inact_pane_g7

0xbdb9,	// (0x0001abd7) bg_popup_call_poc_inact_pane_g8

0xaf43,	// (0x00019d61) popup_call_poc_inact_window_g2

0xbdc1,	// (0x0001abdf) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x0001e3a4) bg_popup_call_poc_inact_pane_g

0xaf4b,	// (0x00019d69) popup_call_poc_inact_window_t1_ParamLimits

0xaf4b,	// (0x00019d69) popup_call_poc_inact_window_t1

0xaf60,	// (0x00019d7e) popup_call_poc_inact_window_t2_ParamLimits

0xaf60,	// (0x00019d7e) popup_call_poc_inact_window_t2

0xaf75,	// (0x00019d93) popup_call_poc_inact_window_t3_ParamLimits

0xaf75,	// (0x00019d93) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x0001e32e) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x0001e32e) popup_call_poc_inact_window_t

0xbf9a,	// (0x0001adb8) context_pane_ParamLimits

0x397a,	// (0x00012798) signal_pane_ParamLimits

0xaa66,	// (0x00019884) main_call2_pane

0xbf73,	// (0x0001ad91) popup_phob_thumbnail2_window_ParamLimits

0xbf73,	// (0x0001ad91) popup_phob_thumbnail2_window

0xac8d,	// (0x00019aab) aid_hotspot_pointer_arrow_pane

0xac95,	// (0x00019ab3) aid_hotspot_pointer_hand_pane

0x3494,	// (0x000122b2) phob_pre_status_pane_g5

0x1019,	// (0x0000fe37) cams_zoom_pane_ParamLimits

0x1028,	// (0x0000fe46) image_vga_pane_ParamLimits

0x1042,	// (0x0000fe60) main_camera_pane_g1_ParamLimits

0x1054,	// (0x0000fe72) main_camera_pane_g2_ParamLimits

0x1064,	// (0x0000fe82) main_camera_pane_g3_ParamLimits

0x1074,	// (0x0000fe92) main_camera_pane_g4_ParamLimits

0x1084,	// (0x0000fea2) main_camera_pane_g5_ParamLimits

0x1094,	// (0x0000feb2) main_camera_pane_g6_ParamLimits

0x10a6,	// (0x0000fec4) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x0001e02d) main_camera_pane_g_ParamLimits

0x10b6,	// (0x0000fed4) main_camera_pane_t1_ParamLimits

0x10cc,	// (0x0000feea) main_camera_pane_t2_ParamLimits

0xf220,	// (0x0001e03e) main_camera_pane_t_ParamLimits

0x9c36,	// (0x00018a54) bg_popup_preview_window_pane_cp01_ParamLimits

0x9c36,	// (0x00018a54) bg_popup_preview_window_pane_cp01

0xaf8a,	// (0x00019da8) popup_phob_thumbnail2_window_g1_ParamLimits

0xaf8a,	// (0x00019da8) popup_phob_thumbnail2_window_g1

0x99db,	// (0x000187f9) call2_cli_visual_pane

0x317f,	// (0x00011f9d) popup_call2_audio_conf_window_ParamLimits

0x317f,	// (0x00011f9d) popup_call2_audio_conf_window

0x319f,	// (0x00011fbd) popup_call2_audio_first_window_ParamLimits

0x319f,	// (0x00011fbd) popup_call2_audio_first_window

0x3235,	// (0x00012053) popup_call2_audio_in_window_ParamLimits

0x3235,	// (0x00012053) popup_call2_audio_in_window

0x327d,	// (0x0001209b) popup_call2_audio_out_window_ParamLimits

0x327d,	// (0x0001209b) popup_call2_audio_out_window

0x32e7,	// (0x00012105) popup_call2_audio_second_window_ParamLimits

0x32e7,	// (0x00012105) popup_call2_audio_second_window

0x334d,	// (0x0001216b) popup_call2_audio_wait_window_ParamLimits

0x334d,	// (0x0001216b) popup_call2_audio_wait_window

0x99db,	// (0x000187f9) bg_popup_call2_act_pane_cp03

0x9c18,	// (0x00018a36) list_conf_pane_cp

0xaf96,	// (0x00019db4) popup_call2_audio_conf_window_t1

0xa74f,	// (0x0001956d) list_single_graphic_popup_conf2_pane_ParamLimits

0xa74f,	// (0x0001956d) list_single_graphic_popup_conf2_pane

0xa762,	// (0x00019580) list_highlight_pane_cp04

0xafa4,	// (0x00019dc2) list_single_graphic_popup_conf2_pane_g1

0xa773,	// (0x00019591) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x0001e335) list_single_graphic_popup_conf2_pane_g

0xafae,	// (0x00019dcc) list_single_graphic_popup_conf2_pane_t1

0xafbc,	// (0x00019dda) bg_popup_call2_act_pane_cp01_ParamLimits

0xafbc,	// (0x00019dda) bg_popup_call2_act_pane_cp01

0xb046,	// (0x00019e64) call_type_pane_cp05_ParamLimits

0xb046,	// (0x00019e64) call_type_pane_cp05

0xb09a,	// (0x00019eb8) popup_call2_audio_second_window_g1_ParamLimits

0xb09a,	// (0x00019eb8) popup_call2_audio_second_window_g1

0xb0ee,	// (0x00019f0c) popup_call2_audio_second_window_g2_ParamLimits

0xb0ee,	// (0x00019f0c) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x0001e33a) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x0001e33a) popup_call2_audio_second_window_g

0xb153,	// (0x00019f71) popup_call2_audio_second_window_t1_ParamLimits

0xb153,	// (0x00019f71) popup_call2_audio_second_window_t1

0xb20e,	// (0x0001a02c) popup_call2_audio_second_window_t2_ParamLimits

0xb20e,	// (0x0001a02c) popup_call2_audio_second_window_t2

0xb261,	// (0x0001a07f) popup_call2_audio_second_window_t3_ParamLimits

0xb261,	// (0x0001a07f) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x0001e341) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x0001e341) popup_call2_audio_second_window_t

0x99db,	// (0x000187f9) bg_popup_call2_in_pane_cp02

0x99e5,	// (0x00018803) call_type_pane_cp04

0x99ed,	// (0x0001880b) popup_call2_audio_wait_window_g1

0x99f5,	// (0x00018813) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0001df1a) popup_call2_audio_wait_window_g

0x99fd,	// (0x0001881b) popup_call2_audio_wait_window_t3

0xb354,	// (0x0001a172) bg_popup_call2_act_pane_ParamLimits

0xb354,	// (0x0001a172) bg_popup_call2_act_pane

0xb414,	// (0x0001a232) call_type_pane_cp03_ParamLimits

0xb414,	// (0x0001a232) call_type_pane_cp03

0xb478,	// (0x0001a296) popup_call2_audio_first_window_g1_ParamLimits

0xb478,	// (0x0001a296) popup_call2_audio_first_window_g1

0xb4e8,	// (0x0001a306) popup_call2_audio_first_window_g2_ParamLimits

0xb4e8,	// (0x0001a306) popup_call2_audio_first_window_g2

0xab37,	// (0x00019955) popup_call2_audio_first_window_g3_ParamLimits

0xab37,	// (0x00019955) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x0001e34a) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x0001e34a) popup_call2_audio_first_window_g

0xb5c6,	// (0x0001a3e4) popup_call2_audio_first_window_t1_ParamLimits

0xb5c6,	// (0x0001a3e4) popup_call2_audio_first_window_t1

0xb6c9,	// (0x0001a4e7) popup_call2_audio_first_window_t4_ParamLimits

0xb6c9,	// (0x0001a4e7) popup_call2_audio_first_window_t4

0xb7ac,	// (0x0001a5ca) popup_call2_audio_first_window_t5_ParamLimits

0xb7ac,	// (0x0001a5ca) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x0001e355) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x0001e355) popup_call2_audio_first_window_t

0x9c2e,	// (0x00018a4c) bg_popup_call2_act_pane_g1

0xbe19,	// (0x0001ac37) popup_cale_lunar_info_window_t1

0xbe27,	// (0x0001ac45) popup_cale_lunar_info_window_t2

0xbe35,	// (0x0001ac53) popup_cale_lunar_info_window_t3

0x99db,	// (0x000187f9) bg_popup_call2_bubble_pane

0xb8ad,	// (0x0001a6cb) bg_popup_call2_in_pane_cp01_ParamLimits

0xb8ad,	// (0x0001a6cb) bg_popup_call2_in_pane_cp01

0x96b7,	// (0x000184d5) call_type_pane_cp02

0xb8f5,	// (0x0001a713) popup_call2_audio_out_window_g1_ParamLimits

0xb8f5,	// (0x0001a713) popup_call2_audio_out_window_g1

0xb921,	// (0x0001a73f) popup_call2_audio_out_window_g2_ParamLimits

0xb921,	// (0x0001a73f) popup_call2_audio_out_window_g2

0xb949,	// (0x0001a767) popup_call2_audio_out_window_g3_ParamLimits

0xb949,	// (0x0001a767) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x0001e35e) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x0001e35e) popup_call2_audio_out_window_g

0xb984,	// (0x0001a7a2) popup_call2_audio_out_window_t1_ParamLimits

0xb984,	// (0x0001a7a2) popup_call2_audio_out_window_t1

0xb9e3,	// (0x0001a801) popup_call2_audio_out_window_t2_ParamLimits

0xb9e3,	// (0x0001a801) popup_call2_audio_out_window_t2

0xba37,	// (0x0001a855) popup_call2_audio_out_window_t3_ParamLimits

0xba37,	// (0x0001a855) popup_call2_audio_out_window_t3

0xba4d,	// (0x0001a86b) popup_call2_audio_out_window_t4_ParamLimits

0xba4d,	// (0x0001a86b) popup_call2_audio_out_window_t4

0xba63,	// (0x0001a881) popup_call2_audio_out_window_t5_ParamLimits

0xba63,	// (0x0001a881) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x0001e367) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x0001e367) popup_call2_audio_out_window_t

0xbac7,	// (0x0001a8e5) bg_popup_call2_in_pane_ParamLimits

0xbac7,	// (0x0001a8e5) bg_popup_call2_in_pane

0xbb23,	// (0x0001a941) popup_call2_audio_in_window_g1_ParamLimits

0xbb23,	// (0x0001a941) popup_call2_audio_in_window_g1

0xbb5b,	// (0x0001a979) popup_call2_audio_in_window_g2_ParamLimits

0xbb5b,	// (0x0001a979) popup_call2_audio_in_window_g2

0xbb93,	// (0x0001a9b1) popup_call2_audio_in_window_g3_ParamLimits

0xbb93,	// (0x0001a9b1) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x0001e374) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x0001e374) popup_call2_audio_in_window_g

0xbbeb,	// (0x0001aa09) popup_call2_audio_in_window_t1_ParamLimits

0xbbeb,	// (0x0001aa09) popup_call2_audio_in_window_t1

0xbc6b,	// (0x0001aa89) popup_call2_audio_in_window_t2_ParamLimits

0xbc6b,	// (0x0001aa89) popup_call2_audio_in_window_t2

0xbceb,	// (0x0001ab09) popup_call2_audio_in_window_t3_ParamLimits

0xbceb,	// (0x0001ab09) popup_call2_audio_in_window_t3

0xbd05,	// (0x0001ab23) popup_call2_audio_in_window_t4_ParamLimits

0xbd05,	// (0x0001ab23) popup_call2_audio_in_window_t4

0xbd17,	// (0x0001ab35) popup_call2_audio_in_window_t5_ParamLimits

0xbd17,	// (0x0001ab35) popup_call2_audio_in_window_t5

0xbd2c,	// (0x0001ab4a) popup_call2_audio_in_window_t6_ParamLimits

0xbd2c,	// (0x0001ab4a) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x0001e37d) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x0001e37d) popup_call2_audio_in_window_t

0x9c2e,	// (0x00018a4c) bg_popup_call2_in_pane_g1

0xbe43,	// (0x0001ac61) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x0001e3e5) popup_cale_lunar_info_window_t

0x9c36,	// (0x00018a54) bg_popup_call2_rect_pane_ParamLimits

0x9c36,	// (0x00018a54) bg_popup_call2_rect_pane

0x99db,	// (0x000187f9) call2_cli_visual_graphic_pane

0x99db,	// (0x000187f9) call2_cli_visual_text_pane

0xc03a,	// (0x0001ae58) smil_status_volume_pane_g3

0x0002,

0x9d96,	// (0x00018bb4) call2_cli_visual_graphic_pane_g1

0x9d96,	// (0x00018bb4) call2_cli_visual_graphic_pane_g2

0x9d96,	// (0x00018bb4) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x0001e38a) call2_cli_visual_graphic_pane_g

0xbd41,	// (0x0001ab5f) bg_popup_call2_rect_pane_g1

0x9e22,	// (0x00018c40) bg_popup_call2_rect_pane_g2

0xbd49,	// (0x0001ab67) bg_popup_call2_rect_pane_g3

0xbd51,	// (0x0001ab6f) bg_popup_call2_rect_pane_g4

0xbd59,	// (0x0001ab77) bg_popup_call2_rect_pane_g5

0xbd61,	// (0x0001ab7f) bg_popup_call2_rect_pane_g6

0xbd69,	// (0x0001ab87) bg_popup_call2_rect_pane_g7

0xbd71,	// (0x0001ab8f) bg_popup_call2_rect_pane_g8

0xbd79,	// (0x0001ab97) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x0001e391) bg_popup_call2_rect_pane_g

0xbd81,	// (0x0001ab9f) bg_popup_call2_bubble_pane_g1

0xbd89,	// (0x0001aba7) bg_popup_call2_bubble_pane_g2

0xbd91,	// (0x0001abaf) bg_popup_call2_bubble_pane_g3

0xbd99,	// (0x0001abb7) bg_popup_call2_bubble_pane_g4

0xbda1,	// (0x0001abbf) bg_popup_call2_bubble_pane_g5

0xbda9,	// (0x0001abc7) bg_popup_call2_bubble_pane_g6

0xbdb1,	// (0x0001abcf) bg_popup_call2_bubble_pane_g7

0xbdb9,	// (0x0001abd7) bg_popup_call2_bubble_pane_g8

0xbdc1,	// (0x0001abdf) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x0001e3a4) bg_popup_call2_bubble_pane_g

0x09a9,	// (0x0000f7c7) aid_cale_week_size_cell_pane

0x10e2,	// (0x0000ff00) aid_cams_cif_uncrop_pane_ParamLimits

0x10e2,	// (0x0000ff00) aid_cams_cif_uncrop_pane

0x1292,	// (0x000100b0) aid_cams_size_cell_ParamLimits

0x1292,	// (0x000100b0) aid_cams_size_cell

0x12a6,	// (0x000100c4) grid_cams_pane_ParamLimits

0x12c0,	// (0x000100de) linegrid_cams_pane_ParamLimits

0x14be,	// (0x000102dc) call_video_pane_t1

0x14dc,	// (0x000102fa) call_video_pane_t2

0x0001,

0xf273,	// (0x0001e091) call_video_pane_t

0x1908,	// (0x00010726) aid_cale_month_size_cell_pane_ParamLimits

0x1908,	// (0x00010726) aid_cale_month_size_cell_pane

0xf610,	// (0x0001e42e) smil_status_volume_pane_g

0xc047,	// (0x0001ae65) volume_smil_pane_ParamLimits

0x955c,	// (0x0001837a) aid_popup2_width_pane

0x0903,	// (0x0000f721) cell_qdial_pane_g4_ParamLimits

0x0903,	// (0x0000f721) cell_qdial_pane_g4

0x27ef,	// (0x0001160d) aid_blid_cardinal_pane_ParamLimits

0x27fb,	// (0x00011619) aid_blid_destination_pane_ParamLimits

0x27fb,	// (0x00011619) aid_blid_destination_pane

0x9c36,	// (0x00018a54) bg_popup_call_poc_act_pane_ParamLimits

0x9c36,	// (0x00018a54) bg_popup_call_poc_act_pane

0x9c36,	// (0x00018a54) bg_popup_call_poc_inact_pane_ParamLimits

0x9c36,	// (0x00018a54) bg_popup_call_poc_inact_pane

0xbdc9,	// (0x0001abe7) bg_popup_call_poc_act_pane_g1

0xbdd1,	// (0x0001abef) bg_popup_call_poc_act_pane_g2

0xbdd9,	// (0x0001abf7) bg_popup_call_poc_act_pane_g3

0xbd99,	// (0x0001abb7) bg_popup_call_poc_act_pane_g4

0xbda1,	// (0x0001abbf) bg_popup_call_poc_act_pane_g5

0xbde1,	// (0x0001abff) bg_popup_call_poc_act_pane_g6

0xbdb1,	// (0x0001abcf) bg_popup_call_poc_act_pane_g7

0xbde9,	// (0x0001ac07) bg_popup_call_poc_act_pane_g8

0x99db,	// (0x000187f9) main_usb_pane

0xbf4e,	// (0x0001ad6c) popup_cale_lunar_info_window

0x17b4,	// (0x000105d2) im_reading_pane_t1_ParamLimits

0xa060,	// (0x00018e7e) list_im_pane_ParamLimits

0xa071,	// (0x00018e8f) scroll_pane_cp07_ParamLimits

0x99db,	// (0x000187f9) grid_highlight_pane_cp012

0x9c36,	// (0x00018a54) mup_scale_pane_ParamLimits

0xacdd,	// (0x00019afb) main_usb_pane_g1_ParamLimits

0xacdd,	// (0x00019afb) main_usb_pane_g1

0x33a9,	// (0x000121c7) main_usb_pane_g2_ParamLimits

0x33a9,	// (0x000121c7) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x0001e3ce) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x0001e3ce) main_usb_pane_g

0x33bf,	// (0x000121dd) main_usb_pane_t1_ParamLimits

0x33bf,	// (0x000121dd) main_usb_pane_t1

0x33d1,	// (0x000121ef) main_usb_pane_t2_ParamLimits

0x33d1,	// (0x000121ef) main_usb_pane_t2

0x33e3,	// (0x00012201) main_usb_pane_t3_ParamLimits

0x33e3,	// (0x00012201) main_usb_pane_t3

0x33f5,	// (0x00012213) main_usb_pane_t4_ParamLimits

0x33f5,	// (0x00012213) main_usb_pane_t4

0x3407,	// (0x00012225) main_usb_pane_t5_ParamLimits

0x3407,	// (0x00012225) main_usb_pane_t5

0x3419,	// (0x00012237) main_usb_pane_t6_ParamLimits

0x3419,	// (0x00012237) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x0001e3d3) main_usb_pane_t_ParamLimits

0x279e,	// (0x000115bc) aid_text_placing

0x27a7,	// (0x000115c5) main_location2_pane_t1_ParamLimits

0x27b9,	// (0x000115d7) main_location2_pane_t2_ParamLimits

0x27cb,	// (0x000115e9) main_location2_pane_t3_ParamLimits

0x27dd,	// (0x000115fb) main_location2_pane_t4_ParamLimits

0x27dd,	// (0x000115fb) main_location2_pane_t4

0xf3d4,	// (0x0001e1f2) main_location2_pane_t_ParamLimits

0x9c72,	// (0x00018a90) find_pinb_pane_g2_ParamLimits

0x9c72,	// (0x00018a90) find_pinb_pane_g2

0x0001,

0xf122,	// (0x0001df40) find_pinb_pane_g_ParamLimits

0xf122,	// (0x0001df40) find_pinb_pane_g

0x9c7e,	// (0x00018a9c) find_pinb_pane_t1_ParamLimits

0x9c90,	// (0x00018aae) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0001df45) find_pinb_pane_t_ParamLimits

0x99db,	// (0x000187f9) main_call3_pane

0x1dc7,	// (0x00010be5) cale_month_day_heading_pane_t1_ParamLimits

0x1e4d,	// (0x00010c6b) cale_month_day_heading_pane_t2_ParamLimits

0x1ede,	// (0x00010cfc) cale_month_day_heading_pane_t3_ParamLimits

0x1f6f,	// (0x00010d8d) cale_month_day_heading_pane_t4_ParamLimits

0x2004,	// (0x00010e22) cale_month_day_heading_pane_t5_ParamLimits

0x20a5,	// (0x00010ec3) cale_month_day_heading_pane_t6_ParamLimits

0x2146,	// (0x00010f64) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x0001e0c9) cale_month_day_heading_pane_t_ParamLimits

0xa2c7,	// (0x000190e5) smil_status_volume_pane

0x2ea4,	// (0x00011cc2) postcard_address_pane_ParamLimits

0x2ea4,	// (0x00011cc2) postcard_address_pane

0x2eb6,	// (0x00011cd4) postcard_message_pane_ParamLimits

0x2eb6,	// (0x00011cd4) postcard_message_pane

0x3387,	// (0x000121a5) call2_cli_visual_pane_t1_ParamLimits

0x3387,	// (0x000121a5) call2_cli_visual_pane_t1

0x3ba7,	// (0x000129c5) postcard_message_pane_t1_ParamLimits

0x3ba7,	// (0x000129c5) postcard_message_pane_t1

0x3b90,	// (0x000129ae) postcard_address_pane_t1_ParamLimits

0x3b90,	// (0x000129ae) postcard_address_pane_t1

0x3b7c,	// (0x0001299a) popup_call3_audio_in_window_ParamLimits

0x3b7c,	// (0x0001299a) popup_call3_audio_in_window

0x3a07,	// (0x00012825) bg_popup_call3_in_pane_ParamLimits

0x3a07,	// (0x00012825) bg_popup_call3_in_pane

0x3a7d,	// (0x0001289b) popup_call3_audio_in_window_g1_ParamLimits

0x3a7d,	// (0x0001289b) popup_call3_audio_in_window_g1

0x3a9d,	// (0x000128bb) popup_call3_audio_in_window_g2_ParamLimits

0x3a9d,	// (0x000128bb) popup_call3_audio_in_window_g2

0x3abd,	// (0x000128db) popup_call3_audio_in_window_g3_ParamLimits

0x3abd,	// (0x000128db) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x0001e435) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x0001e435) popup_call3_audio_in_window_g

0x3aee,	// (0x0001290c) popup_call3_audio_in_window_t1_ParamLimits

0x3aee,	// (0x0001290c) popup_call3_audio_in_window_t1

0x3b2c,	// (0x0001294a) popup_call3_audio_in_window_t2_ParamLimits

0x3b2c,	// (0x0001294a) popup_call3_audio_in_window_t2

0x3b6a,	// (0x00012988) popup_call3_audio_in_window_t3_ParamLimits

0x3b6a,	// (0x00012988) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x0001e43e) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x0001e43e) popup_call3_audio_in_window_t

0xaa66,	// (0x00019884) bg_popup_call3_rect_pane

0xbd41,	// (0x0001ab5f) bg_popup_call3_rect_pane_g1

0x9e22,	// (0x00018c40) bg_popup_call3_rect_pane_g2

0xbd49,	// (0x0001ab67) bg_popup_call3_rect_pane_g3

0xbd51,	// (0x0001ab6f) bg_popup_call3_rect_pane_g4

0xbd59,	// (0x0001ab77) bg_popup_call3_rect_pane_g5

0xbd61,	// (0x0001ab7f) bg_popup_call3_rect_pane_g6

0xbd69,	// (0x0001ab87) bg_popup_call3_rect_pane_g7

0x2adf,	// (0x000118fd) mup_visualizer_osc_pane

0xab45,	// (0x00019963) mup_visualizer_spec_pane

0x3a37,	// (0x00012855) call3_video_qcif_pane_ParamLimits

0x3a37,	// (0x00012855) call3_video_qcif_pane

0x3a4a,	// (0x00012868) call3_video_qcif_uncrop_pane_ParamLimits

0x3a4a,	// (0x00012868) call3_video_qcif_uncrop_pane

0x3a58,	// (0x00012876) call3_video_subqcif_pane_ParamLimits

0x3a58,	// (0x00012876) call3_video_subqcif_pane

0x3a6c,	// (0x0001288a) call3_video_subqcif_uncrop_pane_ParamLimits

0x3a6c,	// (0x0001288a) call3_video_subqcif_uncrop_pane

0x3add,	// (0x000128fb) popup_call3_audio_in_window_g4_ParamLimits

0x3add,	// (0x000128fb) popup_call3_audio_in_window_g4

0x39f6,	// (0x00012814) mup_spec_half_pane

0x39ff,	// (0x0001281d) mup_spec_half_pane_cp

0xbffa,	// (0x0001ae18) mup_osc_middle_pane

0xc003,	// (0x0001ae21) mup_visualizer_osc_pane_g1

0x39d6,	// (0x000127f4) mup_spec_bar_pane_ParamLimits

0x39d6,	// (0x000127f4) mup_spec_bar_pane

0xbfe7,	// (0x0001ae05) mup_spec_bar_pane_g1

0xbff1,	// (0x0001ae0f) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0001e429) mup_spec_bar_pane_g

0x09a9,	// (0x0000f7c7) aid_cale_week_size_cell_pane_ParamLimits

0x09c3,	// (0x0000f7e1) bg_cale_heading_pane_ParamLimits

0x9ea7,	// (0x00018cc5) bg_cale_pane_cp01_ParamLimits

0x09db,	// (0x0000f7f9) cale_week_corner_pane_ParamLimits

0x09fa,	// (0x0000f818) cale_week_day_heading_pane_ParamLimits

0x0a17,	// (0x0000f835) cale_week_scroll_pane_g1_ParamLimits

0x0a2a,	// (0x0000f848) cale_week_scroll_pane_g2_ParamLimits

0x0a42,	// (0x0000f860) cale_week_scroll_pane_g3_ParamLimits

0x0a5a,	// (0x0000f878) cale_week_scroll_pane_g4_ParamLimits

0x0a72,	// (0x0000f890) cale_week_scroll_pane_g5_ParamLimits

0x0a92,	// (0x0000f8b0) cale_week_scroll_pane_g6_ParamLimits

0x0ab2,	// (0x0000f8d0) cale_week_scroll_pane_g7_ParamLimits

0x0ad2,	// (0x0000f8f0) cale_week_scroll_pane_g8_ParamLimits

0x0af6,	// (0x0000f914) cale_week_scroll_pane_g9_ParamLimits

0x0b0e,	// (0x0000f92c) cale_week_scroll_pane_g10_ParamLimits

0x0b26,	// (0x0000f944) cale_week_scroll_pane_g11_ParamLimits

0x0b3e,	// (0x0000f95c) cale_week_scroll_pane_g12_ParamLimits

0x0b56,	// (0x0000f974) cale_week_scroll_pane_g13_ParamLimits

0x0b56,	// (0x0000f974) cale_week_scroll_pane_g14_ParamLimits

0x0b56,	// (0x0000f974) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x0001dfd1) cale_week_scroll_pane_g_ParamLimits

0x0b6e,	// (0x0000f98c) cale_week_time_pane_ParamLimits

0x0b92,	// (0x0000f9b0) grid_cale_week_pane_ParamLimits

0x9ec5,	// (0x00018ce3) listscroll_cale_week_pane_t1

0x9ed7,	// (0x00018cf5) scroll_pane_cp08_ParamLimits

0x195d,	// (0x0001077b) cale_month_corner_pane_ParamLimits

0xa291,	// (0x000190af) cale_month_pane_t1

0x1d65,	// (0x00010b83) cale_month_week_pane_ParamLimits

0x25fa,	// (0x00011418) popup_call_status_window_g1_ParamLimits

0x260e,	// (0x0001142c) popup_call_status_window_g2_ParamLimits

0x2622,	// (0x00011440) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x0001e179) popup_call_status_window_g_ParamLimits

0xa66f,	// (0x0001948d) aid_call2_pane

0x2d51,	// (0x00011b6f) msg_header_pane_g1

0x2ea4,	// (0x00011cc2) postcard_address2_pane_ParamLimits

0x2ea4,	// (0x00011cc2) postcard_address2_pane

0x2eb6,	// (0x00011cd4) postcard_message2_pane_ParamLimits

0x2eb6,	// (0x00011cd4) postcard_message2_pane

0x3988,	// (0x000127a6) message2_row_pane_ParamLimits

0x3988,	// (0x000127a6) message2_row_pane

0x39a4,	// (0x000127c2) address2_row_pane_ParamLimits

0x39a4,	// (0x000127c2) address2_row_pane

0xbfb5,	// (0x0001add3) postcard_message2_row_pane_g1

0xbfbd,	// (0x0001addb) postcard_message2_row_pane_t1

0xbfb5,	// (0x0001add3) address2_row_pane_g1

0xbfbd,	// (0x0001addb) address2_row_pane_t1

0x0f85,	// (0x0000fda3) aid_size_cell_vorec

0x99db,	// (0x000187f9) main_rss_pane

0x39b7,	// (0x000127d5) rss_list_single_pane_ParamLimits

0x39b7,	// (0x000127d5) rss_list_single_pane

0xbfcb,	// (0x0001ade9) rss_list_single_pane_t1

0xbfd9,	// (0x0001adf7) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x0001e424) rss_list_single_pane_t

0x99db,	// (0x000187f9) main_camera2_pane

0x99db,	// (0x000187f9) main_video2_pane

0x3c20,	// (0x00012a3e) cams_zoom_pane_cp2_ParamLimits

0x3c20,	// (0x00012a3e) cams_zoom_pane_cp2

0x3c40,	// (0x00012a5e) image2_vga_pane_ParamLimits

0x3c40,	// (0x00012a5e) image2_vga_pane

0x3c91,	// (0x00012aaf) main_camera2_pane_g1_ParamLimits

0x3c91,	// (0x00012aaf) main_camera2_pane_g1

0x3cb1,	// (0x00012acf) main_camera2_pane_g2_ParamLimits

0x3cb1,	// (0x00012acf) main_camera2_pane_g2

0x3cd1,	// (0x00012aef) main_camera2_pane_g3_ParamLimits

0x3cd1,	// (0x00012aef) main_camera2_pane_g3

0x3cf1,	// (0x00012b0f) main_camera2_pane_g4_ParamLimits

0x3cf1,	// (0x00012b0f) main_camera2_pane_g4

0x3d11,	// (0x00012b2f) main_camera2_pane_g5_ParamLimits

0x3d11,	// (0x00012b2f) main_camera2_pane_g5

0x3d31,	// (0x00012b4f) main_camera2_pane_g6_ParamLimits

0x3d31,	// (0x00012b4f) main_camera2_pane_g6

0x3d51,	// (0x00012b6f) main_camera2_pane_g7_ParamLimits

0x3d51,	// (0x00012b6f) main_camera2_pane_g7

0x3d71,	// (0x00012b8f) main_camera2_pane_g8_ParamLimits

0x3d71,	// (0x00012b8f) main_camera2_pane_g8

0x0008,

0xf627,	// (0x0001e445) main_camera2_pane_g_ParamLimits

0xf627,	// (0x0001e445) main_camera2_pane_g

0x3db1,	// (0x00012bcf) main_camera2_pane_t1_ParamLimits

0x3db1,	// (0x00012bcf) main_camera2_pane_t1

0x3de6,	// (0x00012c04) main_camera2_pane_t2_ParamLimits

0x3de6,	// (0x00012c04) main_camera2_pane_t2

0x3e0c,	// (0x00012c2a) main_camera2_pane_t3_ParamLimits

0x3e0c,	// (0x00012c2a) main_camera2_pane_t3

0x3e6a,	// (0x00012c88) main_camera2_pane_t4_ParamLimits

0x3e6a,	// (0x00012c88) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x0001e458) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x0001e458) main_camera2_pane_t

0x3efc,	// (0x00012d1a) cams_zoom_pane_cp4_ParamLimits

0x3efc,	// (0x00012d1a) cams_zoom_pane_cp4

0x3f12,	// (0x00012d30) image2_cif_pane_ParamLimits

0x3f12,	// (0x00012d30) image2_cif_pane

0x3f3d,	// (0x00012d5b) image2_subqcif_pane_ParamLimits

0x3f3d,	// (0x00012d5b) image2_subqcif_pane

0x3f57,	// (0x00012d75) main_video2_pane_g1_ParamLimits

0x3f57,	// (0x00012d75) main_video2_pane_g1

0x3f71,	// (0x00012d8f) main_video2_pane_g2_ParamLimits

0x3f71,	// (0x00012d8f) main_video2_pane_g2

0x3f87,	// (0x00012da5) main_video2_pane_g3_ParamLimits

0x3f87,	// (0x00012da5) main_video2_pane_g3

0x3f9d,	// (0x00012dbb) main_video2_pane_g4_ParamLimits

0x3f9d,	// (0x00012dbb) main_video2_pane_g4

0x3fb3,	// (0x00012dd1) main_video2_pane_g5_ParamLimits

0x3fb3,	// (0x00012dd1) main_video2_pane_g5

0x3fc9,	// (0x00012de7) main_video2_pane_g6_ParamLimits

0x3fc9,	// (0x00012de7) main_video2_pane_g6

0x0005,

0xf649,	// (0x0001e467) main_video2_pane_g_ParamLimits

0xf649,	// (0x0001e467) main_video2_pane_g

0x3fe3,	// (0x00012e01) main_video2_pane_t1_ParamLimits

0x3fe3,	// (0x00012e01) main_video2_pane_t1

0x4007,	// (0x00012e25) main_video2_pane_t2_ParamLimits

0x4007,	// (0x00012e25) main_video2_pane_t2

0x4055,	// (0x00012e73) main_video2_pane_t3_ParamLimits

0x4055,	// (0x00012e73) main_video2_pane_t3

0x0002,

0xf656,	// (0x0001e474) main_video2_pane_t_ParamLimits

0xf656,	// (0x0001e474) main_video2_pane_t

0x34d4,	// (0x000122f2) call_muted_g2

0x0001,

0xf5f8,	// (0x0001e416) call_muted_g

0x99db,	// (0x000187f9) main_mup2_pane

0x4099,	// (0x00012eb7) main_mup2_pane_g1_ParamLimits

0x4099,	// (0x00012eb7) main_mup2_pane_g1

0x40a5,	// (0x00012ec3) main_mup2_pane_g2_ParamLimits

0x40a5,	// (0x00012ec3) main_mup2_pane_g2

0xc16b,	// (0x0001af89) main_mup_pane_g13_cp1

0xc173,	// (0x0001af91) mup_volume_pane_cp1

0x40c1,	// (0x00012edf) main_mup2_pane_g4_ParamLimits

0x40c1,	// (0x00012edf) main_mup2_pane_g4

0x40d3,	// (0x00012ef1) main_mup2_pane_g5_ParamLimits

0x40d3,	// (0x00012ef1) main_mup2_pane_g5

0x40e5,	// (0x00012f03) main_mup2_pane_g6_ParamLimits

0x40e5,	// (0x00012f03) main_mup2_pane_g6

0x40f7,	// (0x00012f15) main_mup2_pane_g7_ParamLimits

0x40f7,	// (0x00012f15) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x0001e47b) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x0001e47b) main_mup2_pane_g

0x410f,	// (0x00012f2d) main_mup2_pane_t1_ParamLimits

0x410f,	// (0x00012f2d) main_mup2_pane_t1

0x4125,	// (0x00012f43) main_mup2_pane_t2_ParamLimits

0x4125,	// (0x00012f43) main_mup2_pane_t2

0x413b,	// (0x00012f59) main_mup2_pane_t3_ParamLimits

0x413b,	// (0x00012f59) main_mup2_pane_t3

0x4151,	// (0x00012f6f) main_mup2_pane_t4_ParamLimits

0x4151,	// (0x00012f6f) main_mup2_pane_t4

0x4169,	// (0x00012f87) main_mup2_pane_t5_ParamLimits

0x4169,	// (0x00012f87) main_mup2_pane_t5

0x4181,	// (0x00012f9f) main_mup2_pane_t6_ParamLimits

0x4181,	// (0x00012f9f) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x0001e48a) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x0001e48a) main_mup2_pane_t

0x41b1,	// (0x00012fcf) mup2_visualizer_pane_ParamLimits

0x41b1,	// (0x00012fcf) mup2_visualizer_pane

0x41df,	// (0x00012ffd) mup_progress_pane_cp_ParamLimits

0x41df,	// (0x00012ffd) mup_progress_pane_cp

0xc14d,	// (0x0001af6b) mup_volume_pane_cp_ParamLimits

0xc14d,	// (0x0001af6b) mup_volume_pane_cp

0x41f3,	// (0x00013011) mup2_visualizer_pane_g1_ParamLimits

0x41f3,	// (0x00013011) mup2_visualizer_pane_g1

0xc08c,	// (0x0001aeaa) mup2_visualizer_pane_g2_ParamLimits

0xc08c,	// (0x0001aeaa) mup2_visualizer_pane_g2

0x420a,	// (0x00013028) mup2_visualizer_pane_g3_ParamLimits

0x420a,	// (0x00013028) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x0001e497) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x0001e497) mup2_visualizer_pane_g

0xae26,	// (0x00019c44) aid_size_cell_fmradio

0x3686,	// (0x000124a4) aid_height_parent_landcape

0xa0ef,	// (0x00018f0d) wml_content_pane_cp

0xa0f7,	// (0x00018f15) wml_tabs_pane

0xa100,	// (0x00018f1e) popup_wml_miniature_window

0xa108,	// (0x00018f26) scroll_pane_cp021

0xa11c,	// (0x00018f3a) wml_content_pane_comp8

0x99db,	// (0x000187f9) bg_popup_sub_pane_cp05

0xc0aa,	// (0x0001aec8) popup_wml_miniature_window_g1

0xc0b2,	// (0x0001aed0) wml_miniature_view_pane

0x4216,	// (0x00013034) aid_size_wml_view

0x421e,	// (0x0001303c) wml_miniature_view_pane_g1

0x4227,	// (0x00013045) wml_miniature_view_pane_g2

0x4230,	// (0x0001304e) wml_miniature_view_pane_g3

0x4238,	// (0x00013056) wml_miniature_view_pane_g4

0x4240,	// (0x0001305e) wml_miniature_view_pane_g5

0x4248,	// (0x00013066) wml_miniature_view_pane_g6

0x4250,	// (0x0001306e) wml_miniature_view_pane_g7

0x4258,	// (0x00013076) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x0001e49e) wml_miniature_view_pane_g

0xc0ba,	// (0x0001aed8) background_graphic_ParamLimits

0xc0ba,	// (0x0001aed8) background_graphic

0xc0c6,	// (0x0001aee4) wml_tabs_2_pane

0xc0cf,	// (0x0001aeed) wml_tabs_3_pane_ParamLimits

0xc0cf,	// (0x0001aeed) wml_tabs_3_pane

0xc0e1,	// (0x0001aeff) wml_tabs_4_pane_ParamLimits

0xc0e1,	// (0x0001aeff) wml_tabs_4_pane

0xc0f7,	// (0x0001af15) wml_tabs_5_pane_ParamLimits

0xc0f7,	// (0x0001af15) wml_tabs_5_pane

0xc111,	// (0x0001af2f) wml_tabs_pane_g2_ParamLimits

0xc111,	// (0x0001af2f) wml_tabs_pane_g2

0xc125,	// (0x0001af43) wml_tabs_pane_g3_ParamLimits

0xc125,	// (0x0001af43) wml_tabs_pane_g3

0x4260,	// (0x0001307e) wml_tabs_2_active_pane_ParamLimits

0x4260,	// (0x0001307e) wml_tabs_2_active_pane

0x4274,	// (0x00013092) wml_tabs_2_passive_pane_ParamLimits

0x4274,	// (0x00013092) wml_tabs_2_passive_pane

0x4288,	// (0x000130a6) wml_tabs_3_active_pane_cp_ParamLimits

0x4288,	// (0x000130a6) wml_tabs_3_active_pane_cp

0x429d,	// (0x000130bb) wml_tabs_3_passive_pane_ParamLimits

0x429d,	// (0x000130bb) wml_tabs_3_passive_pane

0x42b0,	// (0x000130ce) wml_tabs_3_passive_pane_cp_ParamLimits

0x42b0,	// (0x000130ce) wml_tabs_3_passive_pane_cp

0x42c7,	// (0x000130e5) tabs_4_active_pane

0x42cf,	// (0x000130ed) tabs_4_passive_pane

0x42d9,	// (0x000130f7) tabs_4_passive_pane_cp

0x42e1,	// (0x000130ff) tabs_4_passive_pane_cp2

0x33a1,	// (0x000121bf) aid_height_text

0x2ab5,	// (0x000118d3) mup_volume_cont_pane_ParamLimits

0x2ab5,	// (0x000118d3) mup_volume_cont_pane

0x0587,	// (0x0000f3a5) aid_size_cell_pinb

0x0591,	// (0x0000f3af) aid_size_list_pinb

0x41cb,	// (0x00012fe9) mup2_volume_cont_pane_ParamLimits

0x41cb,	// (0x00012fe9) mup2_volume_cont_pane

0xc139,	// (0x0001af57) mup2_volume_cont_pane_g1_ParamLimits

0xc139,	// (0x0001af57) mup2_volume_cont_pane_g1

0x024a,	// (0x0000f068) aid_size_cell_touch_ParamLimits

0x024a,	// (0x0000f068) aid_size_cell_touch

0x0477,	// (0x0000f295) touch_pane_ParamLimits

0x0477,	// (0x0000f295) touch_pane

0x954a,	// (0x00018368) main_rss2_pane

0xc17b,	// (0x0001af99) listscroll_rss2_pane

0xc184,	// (0x0001afa2) rss2_navigation_pane

0xc18c,	// (0x0001afaa) list_rss2_pane

0xa825,	// (0x00019643) scroll_pane_cp22

0xc194,	// (0x0001afb2) rss2_navigation_pane_g1

0xc19d,	// (0x0001afbb) rss2_navigation_pane_g2

0xc1a5,	// (0x0001afc3) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x0001e4af) rss2_navigation_pane_g

0xc1ad,	// (0x0001afcb) rss2_navigation_pane_t1

0x42eb,	// (0x00013109) rss2_list_single_pane_ParamLimits

0x42eb,	// (0x00013109) rss2_list_single_pane

0xc1bb,	// (0x0001afd9) rss2_list_single_pane_t2

0xc1c9,	// (0x0001afe7) rss2_list_single_pane_t3_ParamLimits

0xc1c9,	// (0x0001afe7) rss2_list_single_pane_t3

0xc1e6,	// (0x0001b004) rss2_list_single_pane_t4

0x2402,	// (0x00011220) smil_status_pane_g1

0x95ba,	// (0x000183d8) main_image2_pane_ParamLimits

0x95ba,	// (0x000183d8) main_image2_pane

0x3d91,	// (0x00012baf) main_camera2_pane_g9_ParamLimits

0x3d91,	// (0x00012baf) main_camera2_pane_g9

0x3ebf,	// (0x00012cdd) main_camera2_pane_t5_ParamLimits

0x3ebf,	// (0x00012cdd) main_camera2_pane_t5

0xc05c,	// (0x0001ae7a) main_camera2_pane_t6_ParamLimits

0xc05c,	// (0x0001ae7a) main_camera2_pane_t6

0x4300,	// (0x0001311e) main_image2_pane_g1_ParamLimits

0x4300,	// (0x0001311e) main_image2_pane_g1

0x30dd,	// (0x00011efb) smil2_video_pane_ParamLimits

0x30dd,	// (0x00011efb) smil2_video_pane

0x9568,	// (0x00018386) aid_zoom_text_primary_cp

0x95b0,	// (0x000183ce) popup_preview_fixed_window

0xa058,	// (0x00018e76) im_reading_pane_g1

0x3c08,	// (0x00012a26) cams2_bc_adjust_pane_cp_ParamLimits

0x3c08,	// (0x00012a26) cams2_bc_adjust_pane_cp

0x3eee,	// (0x00012d0c) cams2_bc_adjust_pane_ParamLimits

0x3eee,	// (0x00012d0c) cams2_bc_adjust_pane

0xc1f4,	// (0x0001b012) cams2_bc_adjust_pane_g1

0xc1fc,	// (0x0001b01a) cams2_slider_pane

0xc205,	// (0x0001b023) cams2_slider_pane_g1

0xc20e,	// (0x0001b02c) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x0001e4b6) cams2_slider_pane_g

0x067f,	// (0x0000f49d) calc_display_pane_ParamLimits

0x06a7,	// (0x0000f4c5) calc_paper_pane_ParamLimits

0x06ca,	// (0x0000f4e8) grid_calc_pane_ParamLimits

0xa6d5,	// (0x000194f3) popup_clock_digital_window_t1_ParamLimits

0xadc3,	// (0x00019be1) main_image_pane_t1

0x0661,	// (0x0000f47f) aid_size_cell_calc_ParamLimits

0x0661,	// (0x0000f47f) aid_size_cell_calc

0x36cc,	// (0x000124ea) popup_blid_sat_info2_window_ParamLimits

0x36cc,	// (0x000124ea) popup_blid_sat_info2_window

0xc230,	// (0x0001b04e) aid_size_cell_blid

0xc238,	// (0x0001b056) bg_popup_window_pane_cp07

0xc25b,	// (0x0001b079) grid_popup_blid_pane

0xc265,	// (0x0001b083) heading_pane_cp05_ParamLimits

0xc265,	// (0x0001b083) heading_pane_cp05

0xc32f,	// (0x0001b14d) cell_popup_blid_pane_ParamLimits

0xc32f,	// (0x0001b14d) cell_popup_blid_pane

0xc353,	// (0x0001b171) cell_popup_blid_pane_g1

0xc35b,	// (0x0001b179) cell_popup_blid_pane_t1

0x419b,	// (0x00012fb9) mup2_indicator_pane_ParamLimits

0x419b,	// (0x00012fb9) mup2_indicator_pane

0xaa66,	// (0x00019884) mup2_visualizer_osc_pane

0xc098,	// (0x0001aeb6) mup2_visualizer_spec_pane_ParamLimits

0xc098,	// (0x0001aeb6) mup2_visualizer_spec_pane

0x4316,	// (0x00013134) mup2_spec_half_pane

0x431f,	// (0x0001313d) mup2_spec_half_pane_cp

0x4327,	// (0x00013145) mup2_spec_bar_pane_ParamLimits

0x4327,	// (0x00013145) mup2_spec_bar_pane

0xbfe7,	// (0x0001ae05) mup2_spec_bar_pane_g1

0xbff1,	// (0x0001ae0f) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0001e429) mup2_spec_bar_pane_g

0x4347,	// (0x00013165) mup2_osc_middle_pane

0xc003,	// (0x0001ae21) mup2_visualizer_osc_pane_g1

0x95e8,	// (0x00018406) popup_number_entry_window_t1_ParamLimits

0x95fb,	// (0x00018419) popup_number_entry_window_t2_ParamLimits

0x960d,	// (0x0001842b) popup_number_entry_window_t3_ParamLimits

0x04c9,	// (0x0000f2e7) popup_number_entry_window_t5_ParamLimits

0x04c9,	// (0x0000f2e7) popup_number_entry_window_t5

0xf0cd,	// (0x0001deeb) popup_number_entry_window_t_ParamLimits

0x961f,	// (0x0001843d) text_title_cp2_ParamLimits

0xac9d,	// (0x00019abb) aid_hotspot_pointer_text2_pane

0xacc3,	// (0x00019ae1) main_viewer_pane_g9_ParamLimits

0xacc3,	// (0x00019ae1) main_viewer_pane_g9

0xa291,	// (0x000190af) cale_month_pane_t1_ParamLimits

0xa2fc,	// (0x0001911a) bg_cale_pane_ParamLimits

0xa314,	// (0x00019132) list_cale_pane_ParamLimits

0xa325,	// (0x00019143) listscroll_cale_day_pane_t1

0xa337,	// (0x00019155) scroll_pane_cp09_ParamLimits

0x2ae7,	// (0x00011905) main_mup_eq_pane_t1_ParamLimits

0x2ae7,	// (0x00011905) main_mup_eq_pane_t1

0x2b01,	// (0x0001191f) main_mup_eq_pane_t2_ParamLimits

0x2b01,	// (0x0001191f) main_mup_eq_pane_t2

0x2b1b,	// (0x00011939) main_mup_eq_pane_t3_ParamLimits

0x2b1b,	// (0x00011939) main_mup_eq_pane_t3

0x2b37,	// (0x00011955) main_mup_eq_pane_t4_ParamLimits

0x2b37,	// (0x00011955) main_mup_eq_pane_t4

0x2b53,	// (0x00011971) main_mup_eq_pane_t5_ParamLimits

0x2b53,	// (0x00011971) main_mup_eq_pane_t5

0x2b6f,	// (0x0001198d) main_mup_eq_pane_t6_ParamLimits

0x2b6f,	// (0x0001198d) main_mup_eq_pane_t6

0x2b83,	// (0x000119a1) main_mup_eq_pane_t7_ParamLimits

0x2b83,	// (0x000119a1) main_mup_eq_pane_t7

0x2b97,	// (0x000119b5) main_mup_eq_pane_t8_ParamLimits

0x2b97,	// (0x000119b5) main_mup_eq_pane_t8

0x2bab,	// (0x000119c9) main_mup_eq_pane_t9_ParamLimits

0x2bab,	// (0x000119c9) main_mup_eq_pane_t9

0x2bc5,	// (0x000119e3) main_mup_eq_pane_t10_ParamLimits

0x2bc5,	// (0x000119e3) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x0001e278) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x0001e278) main_mup_eq_pane_t

0x2c74,	// (0x00011a92) mup_equalizer_pane_cp5_ParamLimits

0x2c88,	// (0x00011aa6) mup_equalizer_pane_cp6_ParamLimits

0x2c9c,	// (0x00011aba) mup_equalizer_pane_cp7_ParamLimits

0x954a,	// (0x00018368) main_gallery_pane

0xc00c,	// (0x0001ae2a) smil2_volume_pane

0xc014,	// (0x0001ae32) smil_status_volume_pane_g1_ParamLimits

0xc027,	// (0x0001ae45) smil_status_volume_pane_g2_ParamLimits

0xc03a,	// (0x0001ae58) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x0001e42e) smil_status_volume_pane_g_ParamLimits

0xc238,	// (0x0001b056) bg_popup_window_pane_cp07_ParamLimits

0xc246,	// (0x0001b064) blid_firmament_pane

0x4350,	// (0x0001316e) aid_size_cell_gallery_ParamLimits

0x4350,	// (0x0001316e) aid_size_cell_gallery

0x4366,	// (0x00013184) grid_gallery_pane_ParamLimits

0x4366,	// (0x00013184) grid_gallery_pane

0x437f,	// (0x0001319d) cell_gallery_pane_ParamLimits

0x437f,	// (0x0001319d) cell_gallery_pane

0xc369,	// (0x0001b187) bg_cell_gallery_focus_pane_ParamLimits

0xc369,	// (0x0001b187) bg_cell_gallery_focus_pane

0xc37b,	// (0x0001b199) cell_gallery_pane_g1_ParamLimits

0xc37b,	// (0x0001b199) cell_gallery_pane_g1

0x43c8,	// (0x000131e6) cell_gallery_pane_g2_ParamLimits

0x43c8,	// (0x000131e6) cell_gallery_pane_g2

0x43d5,	// (0x000131f3) cell_gallery_pane_g3_ParamLimits

0x43d5,	// (0x000131f3) cell_gallery_pane_g3

0xc387,	// (0x0001b1a5) cell_gallery_pane_g4_ParamLimits

0xc387,	// (0x0001b1a5) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x0001e4dc) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x0001e4dc) cell_gallery_pane_g

0xc393,	// (0x0001b1b1) bg_cell_gallery_focus_pane_g1

0xc39b,	// (0x0001b1b9) bg_cell_gallery_focus_pane_g2

0xc3a3,	// (0x0001b1c1) bg_cell_gallery_focus_pane_g3

0xc3ab,	// (0x0001b1c9) bg_cell_gallery_focus_pane_g4

0xc3b3,	// (0x0001b1d1) bg_cell_gallery_focus_pane_g5

0xc3bb,	// (0x0001b1d9) bg_cell_gallery_focus_pane_g6

0xc3c3,	// (0x0001b1e1) bg_cell_gallery_focus_pane_g7

0xc3cb,	// (0x0001b1e9) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x0001e4e5) bg_cell_gallery_focus_pane_g

0xc3d3,	// (0x0001b1f1) aid_firma_cardinal

0xc3e7,	// (0x0001b205) blid_firmament_pane_t1

0xc3fe,	// (0x0001b21c) blid_firmament_pane_t2

0xc415,	// (0x0001b233) blid_firmament_pane_t3

0xc42c,	// (0x0001b24a) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x0001e4f6) blid_firmament_pane_t

0xc443,	// (0x0001b261) blid_sat_info_pane

0xc453,	// (0x0001b271) blid_sat_info_pane_g1

0xc453,	// (0x0001b271) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x0001e4ff) blid_sat_info_pane_g

0xc45d,	// (0x0001b27b) blid_sat_info_pane_t1

0xc46b,	// (0x0001b289) smil2_volume_content_pane

0xc474,	// (0x0001b292) smil2_volume_pane_g1

0xc47c,	// (0x0001b29a) smil2_volume_content_pane_g1

0xc485,	// (0x0001b2a3) smil2_volume_content_pane_g2

0xc48e,	// (0x0001b2ac) smil2_volume_content_pane_g3

0xc497,	// (0x0001b2b5) smil2_volume_content_pane_g4

0xc4a0,	// (0x0001b2be) smil2_volume_content_pane_g5

0xc4a9,	// (0x0001b2c7) smil2_volume_content_pane_g6

0xc4b2,	// (0x0001b2d0) smil2_volume_content_pane_g7

0xc4bb,	// (0x0001b2d9) smil2_volume_content_pane_g8

0xc4c4,	// (0x0001b2e2) smil2_volume_content_pane_g9

0xc4cd,	// (0x0001b2eb) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x0001e504) smil2_volume_content_pane_g

0x0c46,	// (0x0000fa64) cale_week_day_heading_pane_t1_ParamLimits

0x0c8b,	// (0x0000faa9) cale_week_day_heading_pane_t2_ParamLimits

0x0cd5,	// (0x0000faf3) cale_week_day_heading_pane_t3_ParamLimits

0x0d1f,	// (0x0000fb3d) cale_week_day_heading_pane_t4_ParamLimits

0x0d69,	// (0x0000fb87) cale_week_day_heading_pane_t5_ParamLimits

0x0dbb,	// (0x0000fbd9) cale_week_day_heading_pane_t6_ParamLimits

0x0e0d,	// (0x0000fc2b) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x0001dff0) cale_week_day_heading_pane_t_ParamLimits

0x9ef4,	// (0x00018d12) bg_cale_side_pane_ParamLimits

0x0e52,	// (0x0000fc70) cale_week_time_pane_t1_ParamLimits

0x0e6c,	// (0x0000fc8a) cale_week_time_pane_t2_ParamLimits

0x0e86,	// (0x0000fca4) cale_week_time_pane_t3_ParamLimits

0x0ea0,	// (0x0000fcbe) cale_week_time_pane_t4_ParamLimits

0x0eba,	// (0x0000fcd8) cale_week_time_pane_t5_ParamLimits

0x0ed4,	// (0x0000fcf2) cale_week_time_pane_t6_ParamLimits

0x0eee,	// (0x0000fd0c) cale_week_time_pane_t7_ParamLimits

0x0f08,	// (0x0000fd26) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x0001dfff) cale_week_time_pane_t_ParamLimits

0x0f28,	// (0x0000fd46) cell_cale_week_pane_g2_ParamLimits

0x9ef4,	// (0x00018d12) bg_cale_side_pane_cp01_ParamLimits

0x21ef,	// (0x0001100d) cale_month_week_pane_t1_ParamLimits

0x2208,	// (0x00011026) cale_month_week_pane_t2_ParamLimits

0x2221,	// (0x0001103f) cale_month_week_pane_t3_ParamLimits

0x223a,	// (0x00011058) cale_month_week_pane_t4_ParamLimits

0x2253,	// (0x00011071) cale_month_week_pane_t5_ParamLimits

0x226c,	// (0x0001108a) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x0001e0d8) cale_month_week_pane_t_ParamLimits

0xa2a3,	// (0x000190c1) cell_cale_month_pane_g1_ParamLimits

0x954a,	// (0x00018368) main_cale_event_viewer_pane

0x954a,	// (0x00018368) listscroll_cale_event_viewer_pane

0xc4d6,	// (0x0001b2f4) list_cale_ev_pane

0xc4de,	// (0x0001b2fc) scroll_pane_cp023

0xc4ea,	// (0x0001b308) field_cale_ev_pane_ParamLimits

0xc4ea,	// (0x0001b308) field_cale_ev_pane

0xc508,	// (0x0001b326) field_cale_ev_content_pane_ParamLimits

0xc508,	// (0x0001b326) field_cale_ev_content_pane

0xc514,	// (0x0001b332) field_cale_ev_pane_g1_ParamLimits

0xc514,	// (0x0001b332) field_cale_ev_pane_g1

0xc520,	// (0x0001b33e) field_cale_ev_pane_g2_ParamLimits

0xc520,	// (0x0001b33e) field_cale_ev_pane_g2

0xc538,	// (0x0001b356) field_cale_ev_pane_g3_ParamLimits

0xc538,	// (0x0001b356) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x0001e519) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x0001e519) field_cale_ev_pane_g

0xc550,	// (0x0001b36e) field_cale_ev_pane_t1_ParamLimits

0xc550,	// (0x0001b36e) field_cale_ev_pane_t1

0xc567,	// (0x0001b385) field_cale_ev_content_pane_t1_ParamLimits

0xc567,	// (0x0001b385) field_cale_ev_content_pane_t1

0x2d46,	// (0x00011b64) bg_button_pane_cp01

0x0997,	// (0x0000f7b5) listscroll_cale_week_pane_ParamLimits

0x9e9e,	// (0x00018cbc) popup_toolbar_window_cp01

0x9ec5,	// (0x00018ce3) listscroll_cale_week_pane_t1_ParamLimits

0x0997,	// (0x0000f7b5) listscroll_cale_day_pane_ParamLimits

0x9e9e,	// (0x00018cbc) popup_toolbar_window_cp02

0xa325,	// (0x00019143) listscroll_cale_day_pane_t1_ParamLimits

0x0997,	// (0x0000f7b5) main_cale_month_pane_ParamLimits

0xbf85,	// (0x0001ada3) popup_toolbar_window_cp03_ParamLimits

0xbf85,	// (0x0001ada3) popup_toolbar_window_cp03

0x2fa5,	// (0x00011dc3) main_image_pane_g2_ParamLimits

0x2fa5,	// (0x00011dc3) main_image_pane_g2

0x2fb6,	// (0x00011dd4) main_image_pane_g3_ParamLimits

0x2fb6,	// (0x00011dd4) main_image_pane_g3

0x0002,

0xf4ec,	// (0x0001e30a) main_image_pane_g_ParamLimits

0xf4ec,	// (0x0001e30a) main_image_pane_g

0xadc3,	// (0x00019be1) main_image_pane_t1_ParamLimits

0x2fc7,	// (0x00011de5) main_image_pane_t2_ParamLimits

0x2fc7,	// (0x00011de5) main_image_pane_t2

0x2fd9,	// (0x00011df7) main_image_pane_t3_ParamLimits

0x2fd9,	// (0x00011df7) main_image_pane_t3

0x3001,	// (0x00011e1f) main_image_pane_t4_ParamLimits

0x3001,	// (0x00011e1f) main_image_pane_t4

0x0003,

0xf4f3,	// (0x0001e311) main_image_pane_t_ParamLimits

0xf4f3,	// (0x0001e311) main_image_pane_t

0x3021,	// (0x00011e3f) popup_image_details_window_cp01

0x302b,	// (0x00011e49) popup_toobar_trans_pane_cp01_ParamLimits

0x302b,	// (0x00011e49) popup_toobar_trans_pane_cp01

0x37ab,	// (0x000125c9) popup_image_details_window_ParamLimits

0x37ab,	// (0x000125c9) popup_image_details_window

0xbf58,	// (0x0001ad76) popup_image_focus_window

0x3bc2,	// (0x000129e0) camera2_autofocus_pane_ParamLimits

0x3bc2,	// (0x000129e0) camera2_autofocus_pane

0x954a,	// (0x00018368) bg_popup_sub_pane_cp06

0xc585,	// (0x0001b3a3) popup_image_focus_window_g1

0xc58d,	// (0x0001b3ab) popup_image_focus_window_g2

0xc595,	// (0x0001b3b3) popup_image_focus_window_g3

0xc59d,	// (0x0001b3bb) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x0001e520) popup_image_focus_window_g

0xc5a5,	// (0x0001b3c3) popup_image_focus_window_t1

0xc5b3,	// (0x0001b3d1) popup_image_focus_window_t2

0xc5c3,	// (0x0001b3e1) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x0001e529) popup_image_focus_window_t

0xc5d1,	// (0x0001b3ef) camera2_autofocus_pane_g1

0x95ba,	// (0x000183d8) bg_tb_trans_pane_cp01

0xc5df,	// (0x0001b3fd) popup_image_details_window_g1

0xc5f2,	// (0x0001b410) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x0001e53b) popup_image_details_window_g

0xc61b,	// (0x0001b439) popup_image_details_window_t1

0xc62d,	// (0x0001b44b) popup_image_details_window_t2

0xc646,	// (0x0001b464) popup_image_details_window_t3

0xc65a,	// (0x0001b478) popup_image_details_window_t4

0xc675,	// (0x0001b493) popup_image_details_window_t5

0x0004,

0xf724,	// (0x0001e542) popup_image_details_window_t

0x9cef,	// (0x00018b0d) bg_calc_paper_pane_ParamLimits

0x954a,	// (0x00018368) grid_highlight_pane_cp013

0x9d03,	// (0x00018b21) list_calc_pane_ParamLimits

0x9d15,	// (0x00018b33) scroll_pane_cp024

0x9d1d,	// (0x00018b3b) bg_calc_display_pane_ParamLimits

0x07c8,	// (0x0000f5e6) calc_display_pane_t1_ParamLimits

0x07da,	// (0x0000f5f8) calc_display_pane_t2_ParamLimits

0x9d29,	// (0x00018b47) calc_display_pane_t3_ParamLimits

0xf154,	// (0x0001df72) calc_display_pane_t_ParamLimits

0x0894,	// (0x0000f6b2) cell_calc_pane_g2

0x0001,

0xf171,	// (0x0001df8f) cell_calc_pane_g

0x089d,	// (0x0000f6bb) cell_calc_pane_t1

0x9da0,	// (0x00018bbe) grid_highlight_pane_cp02_ParamLimits

0x9db6,	// (0x00018bd4) toolbar_button_pane_cp01_ParamLimits

0x9db6,	// (0x00018bd4) toolbar_button_pane_cp01

0xae08,	// (0x00019c26) temp_image_control_pane_ParamLimits

0xae08,	// (0x00019c26) temp_image_control_pane

0x95ba,	// (0x000183d8) main_mp3_pane

0xc68f,	// (0x0001b4ad) temp_image_control_pane_g1_ParamLimits

0xc68f,	// (0x0001b4ad) temp_image_control_pane_g1

0xc69d,	// (0x0001b4bb) temp_image_control_pane_g2_ParamLimits

0xc69d,	// (0x0001b4bb) temp_image_control_pane_g2

0xc6af,	// (0x0001b4cd) temp_image_control_pane_g3_ParamLimits

0xc6af,	// (0x0001b4cd) temp_image_control_pane_g3

0x4412,	// (0x00013230) temp_image_control_pane_g4_ParamLimits

0x4412,	// (0x00013230) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x0001e54d) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x0001e54d) temp_image_control_pane_g

0xc68f,	// (0x0001b4ad) main_mp3_pane_g1

0x4425,	// (0x00013243) main_mp3_pane_g2

0x0007,

0xf738,	// (0x0001e556) main_mp3_pane_g

0xc6f2,	// (0x0001b510) main_mp3_pane_t1

0x9f67,	// (0x00018d85) main_camera_pane_g8_ParamLimits

0x9f67,	// (0x00018d85) main_camera_pane_g8

0x1238,	// (0x00010056) main_video_pane_g7_ParamLimits

0x1238,	// (0x00010056) main_video_pane_g7

0xc07a,	// (0x0001ae98) main_camera2_pane_t7_ParamLimits

0xc07a,	// (0x0001ae98) main_camera2_pane_t7

0xa0af,	// (0x00018ecd) scroll_pane_cp025_ParamLimits

0xa0af,	// (0x00018ecd) scroll_pane_cp025

0xa0c3,	// (0x00018ee1) scroll_pane_cp026_ParamLimits

0xa0c3,	// (0x00018ee1) scroll_pane_cp026

0xa0d2,	// (0x00018ef0) wml_content_pane_ParamLimits

0x954a,	// (0x00018368) main_touch_calib_pane

0x44f9,	// (0x00013317) main_touch_calib_pane_g1

0x450b,	// (0x00013329) main_touch_calib_pane_g2

0x451d,	// (0x0001333b) main_touch_calib_pane_g3

0x452f,	// (0x0001334d) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x0001e574) main_touch_calib_pane_g

0x4541,	// (0x0001335f) main_touch_calib_pane_t1

0x455b,	// (0x00013379) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x0001e57d) main_touch_calib_pane_t

0xa901,	// (0x0001971f) mup_progress_pane_cp02

0xa936,	// (0x00019754) navi_pane_g1

0xa9f1,	// (0x0001980f) navi_pane_mp_t3

0x95ba,	// (0x000183d8) main_mp3_pane_ParamLimits

0x3930,	// (0x0001274e) navi_pane_ParamLimits

0xc68f,	// (0x0001b4ad) main_mp3_pane_g1_ParamLimits

0x4425,	// (0x00013243) main_mp3_pane_g2_ParamLimits

0x4433,	// (0x00013251) main_mp3_pane_g3_ParamLimits

0x4433,	// (0x00013251) main_mp3_pane_g3

0x4441,	// (0x0001325f) main_mp3_pane_g4_ParamLimits

0x4441,	// (0x0001325f) main_mp3_pane_g4

0xc6bf,	// (0x0001b4dd) main_mp3_pane_g5_ParamLimits

0xc6bf,	// (0x0001b4dd) main_mp3_pane_g5

0xc6cd,	// (0x0001b4eb) main_mp3_pane_g6_ParamLimits

0xc6cd,	// (0x0001b4eb) main_mp3_pane_g6

0xc6da,	// (0x0001b4f8) main_mp3_pane_g7_ParamLimits

0xc6da,	// (0x0001b4f8) main_mp3_pane_g7

0xc6e6,	// (0x0001b504) main_mp3_pane_g8_ParamLimits

0xc6e6,	// (0x0001b504) main_mp3_pane_g8

0xf738,	// (0x0001e556) main_mp3_pane_g_ParamLimits

0x444d,	// (0x0001326b) main_mp3_pane_t2

0x445b,	// (0x00013279) main_mp3_pane_t3

0xc700,	// (0x0001b51e) main_mp3_pane_t4

0xc70e,	// (0x0001b52c) main_mp3_pane_t5

0x0005,

0xf749,	// (0x0001e567) main_mp3_pane_t

0xc71c,	// (0x0001b53a) mup_progress_pane_cp01

0x9568,	// (0x00018386) aid_zoom_text_secondary2

0xc4d6,	// (0x0001b2f4) list_cale_ev2_pane

0xc4de,	// (0x0001b2fc) scroll_pane_cp023_ParamLimits

0x45b1,	// (0x000133cf) field_cale_ev2_pane_ParamLimits

0x45b1,	// (0x000133cf) field_cale_ev2_pane

0x45d1,	// (0x000133ef) field_cale_ev2_pane_g1_ParamLimits

0x45d1,	// (0x000133ef) field_cale_ev2_pane_g1

0x45dd,	// (0x000133fb) field_cale_ev2_pane_g2_ParamLimits

0x45dd,	// (0x000133fb) field_cale_ev2_pane_g2

0x45f5,	// (0x00013413) field_cale_ev2_pane_g3_ParamLimits

0x45f5,	// (0x00013413) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x0001e588) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x0001e588) field_cale_ev2_pane_g

0x460d,	// (0x0001342b) field_cale_ev2_pane_t1_ParamLimits

0x460d,	// (0x0001342b) field_cale_ev2_pane_t1

0x4624,	// (0x00013442) field_cale_ev2_pane_t2_ParamLimits

0x4624,	// (0x00013442) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x0001e591) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x0001e591) field_cale_ev2_pane_t

0x2e5a,	// (0x00011c78) main_postcard_pane_g5_ParamLimits

0x2e5a,	// (0x00011c78) main_postcard_pane_g5

0x2e70,	// (0x00011c8e) main_postcard_pane_g6_ParamLimits

0x2e70,	// (0x00011c8e) main_postcard_pane_g6

0x1004,	// (0x0000fe22) camera2_autofocus_pane_cp_ParamLimits

0x1004,	// (0x0000fe22) camera2_autofocus_pane_cp

0x95ba,	// (0x000183d8) main_mup3_pane

0x4639,	// (0x00013457) main_mup3_pane_g1_ParamLimits

0x4639,	// (0x00013457) main_mup3_pane_g1

0x465b,	// (0x00013479) main_mup3_pane_g2_ParamLimits

0x465b,	// (0x00013479) main_mup3_pane_g2

0x46d9,	// (0x000134f7) main_mup3_pane_g3_ParamLimits

0x46d9,	// (0x000134f7) main_mup3_pane_g3

0x471f,	// (0x0001353d) main_mup3_pane_g4_ParamLimits

0x471f,	// (0x0001353d) main_mup3_pane_g4

0x4765,	// (0x00013583) main_mup3_pane_g5_ParamLimits

0x4765,	// (0x00013583) main_mup3_pane_g5

0x47ab,	// (0x000135c9) main_mup3_pane_g6_ParamLimits

0x47ab,	// (0x000135c9) main_mup3_pane_g6

0xc750,	// (0x0001b56e) main_mup3_pane_g7_ParamLimits

0xc750,	// (0x0001b56e) main_mup3_pane_g7

0x0007,

0xf783,	// (0x0001e5a1) main_mup3_pane_g_ParamLimits

0xf783,	// (0x0001e5a1) main_mup3_pane_g

0x4829,	// (0x00013647) main_mup3_pane_t1_ParamLimits

0x4829,	// (0x00013647) main_mup3_pane_t1

0x489d,	// (0x000136bb) main_mup3_pane_t2_ParamLimits

0x489d,	// (0x000136bb) main_mup3_pane_t2

0x4971,	// (0x0001378f) main_mup3_pane_t4_ParamLimits

0x4971,	// (0x0001378f) main_mup3_pane_t4

0x49c7,	// (0x000137e5) main_mup3_pane_t5_ParamLimits

0x49c7,	// (0x000137e5) main_mup3_pane_t5

0x4a83,	// (0x000138a1) main_mup3_pane_t6_ParamLimits

0x4a83,	// (0x000138a1) main_mup3_pane_t6

0x0005,

0xf794,	// (0x0001e5b2) main_mup3_pane_t_ParamLimits

0xf794,	// (0x0001e5b2) main_mup3_pane_t

0x4b3b,	// (0x00013959) mup3_progress_pane_ParamLimits

0x4b3b,	// (0x00013959) mup3_progress_pane

0x4bd1,	// (0x000139ef) popup_mup3_control_window_ParamLimits

0x4bd1,	// (0x000139ef) popup_mup3_control_window

0xc75e,	// (0x0001b57c) popup_mup3_text_window

0x4c03,	// (0x00013a21) mup3_progress_pane_t1

0x4c22,	// (0x00013a40) mup3_progress_pane_t2

0xc766,	// (0x0001b584) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x0001e5bf) mup3_progress_pane_t

0xc783,	// (0x0001b5a1) mup_progress_pane_cp03

0x954a,	// (0x00018368) bg_tb_trans_pane_cp04

0x4c41,	// (0x00013a5f) mup3_volume_pane

0x4c49,	// (0x00013a67) popup_mup3_control_window_g1

0x4c52,	// (0x00013a70) mup3_volume_pane_g1

0x4c5b,	// (0x00013a79) mup3_volume_pane_g2

0x4c64,	// (0x00013a82) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x0001e5c6) mup3_volume_pane_g

0x954a,	// (0x00018368) bg_tb_trans_pane_cp03

0xc793,	// (0x0001b5b1) popup_mup3_text_window_g1

0xc79b,	// (0x0001b5b9) popup_mup3_text_window_t1

0x9d77,	// (0x00018b95) list_calc_item_pane_g1_ParamLimits

0xc162,	// (0x0001af80) mup_volume_pane_cp_g1

0x4575,	// (0x00013393) main_touch_calib_pane_t3

0x4589,	// (0x000133a7) main_touch_calib_pane_t4

0x459d,	// (0x000133bb) main_touch_calib_pane_t5

0x9554,	// (0x00018372) aid_cell_size_toolbar2

0x955c,	// (0x0001837a) aid_popup3_width_pane

0x9568,	// (0x00018386) aid_zoom_text_msg_primary

0x0fdb,	// (0x0000fdf9) vorec_t7

0x9d3b,	// (0x00018b59) bg_calc_paper_pane_g1_ParamLimits

0x9d47,	// (0x00018b65) bg_calc_paper_pane_g2_ParamLimits

0x9d53,	// (0x00018b71) bg_calc_paper_pane_g3_ParamLimits

0x9d5f,	// (0x00018b7d) bg_calc_paper_pane_g4_ParamLimits

0x9d6b,	// (0x00018b89) bg_calc_paper_pane_g5_ParamLimits

0x0821,	// (0x0000f63f) bg_calc_paper_pane_g6_ParamLimits

0x0830,	// (0x0000f64e) bg_calc_paper_pane_g7_ParamLimits

0x083f,	// (0x0000f65d) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x0001df79) bg_calc_paper_pane_g_ParamLimits

0x0852,	// (0x0000f670) calc_bg_paper_pane_g9_ParamLimits

0x114f,	// (0x0000ff6d) image_qvga_pane_ParamLimits

0x114f,	// (0x0000ff6d) image_qvga_pane

0x9c36,	// (0x00018a54) bg_popup_sub_pane_cp04_ParamLimits

0xad3f,	// (0x00019b5d) popup_mup_playback_window_g1_ParamLimits

0xad4b,	// (0x00019b69) popup_mup_playback_window_t1_ParamLimits

0xad60,	// (0x00019b7e) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x0001e305) popup_mup_playback_window_t_ParamLimits

0x40b5,	// (0x00012ed3) main_mup2_pane_g3_ParamLimits

0x40b5,	// (0x00012ed3) main_mup2_pane_g3

0x155f,	// (0x0001037d) popup_toolbar_window_cp04

0xb142,	// (0x00019f60) popup_call2_audio_second_window_g3_ParamLimits

0xb142,	// (0x00019f60) popup_call2_audio_second_window_g3

0xb54c,	// (0x0001a36a) popup_call2_audio_first_window_g4_ParamLimits

0xb54c,	// (0x0001a36a) popup_call2_audio_first_window_g4

0xbbcb,	// (0x0001a9e9) popup_call2_audio_in_window_g4_ParamLimits

0xbbcb,	// (0x0001a9e9) popup_call2_audio_in_window_g4

0x2f87,	// (0x00011da5) aid_area_sk_bg_cut_ParamLimits

0x2f87,	// (0x00011da5) aid_area_sk_bg_cut

0xad75,	// (0x00019b93) aid_area_sk_bg_cut_2_ParamLimits

0xad75,	// (0x00019b93) aid_area_sk_bg_cut_2

0x43b8,	// (0x000131d6) aid_placing_details_win

0x43c0,	// (0x000131de) aid_placing_details_win_2

0xc5d1,	// (0x0001b3ef) camera2_autofocus_pane_g1_ParamLimits

0x0410,	// (0x0000f22e) popup_fixed_preview_cale_window_ParamLimits

0x0410,	// (0x0000f22e) popup_fixed_preview_cale_window

0xaa80,	// (0x0001989e) navi_slider_pane_g3

0xaa89,	// (0x000198a7) navi_slider_pane_g4

0xaa92,	// (0x000198b0) navi_slider_pane_g5

0xaa80,	// (0x0001989e) navi_slider_pane_g6

0xaa9b,	// (0x000198b9) navi_slider_pane_g7

0xabbc,	// (0x000199da) mup_scale_pane_g3

0xabc5,	// (0x000199e3) mup_scale_pane_g4

0xabce,	// (0x000199ec) mup_scale_pane_g5

0x2cb0,	// (0x00011ace) mup_scale_pane_g6

0x2cb9,	// (0x00011ad7) mup_scale_pane_g7

0xaa80,	// (0x0001989e) cams2_slider_pane_g3

0xc217,	// (0x0001b035) cams2_slider_pane_g4

0xc21f,	// (0x0001b03d) cams2_slider_pane_g5

0xaa80,	// (0x0001989e) cams2_slider_pane_g6

0xc227,	// (0x0001b045) cams2_slider_pane_g7

0xc453,	// (0x0001b271) camera2_autofocus_pane_cp_g1

0xbf2c,	// (0x0001ad4a) bg_popup_preview_window_pane_cp02_ParamLimits

0xbf2c,	// (0x0001ad4a) bg_popup_preview_window_pane_cp02

0xc7a9,	// (0x0001b5c7) list_fp_cale_pane_ParamLimits

0xc7a9,	// (0x0001b5c7) list_fp_cale_pane

0xc7b5,	// (0x0001b5d3) popup_fixed_preview_cale_window_t1_ParamLimits

0xc7b5,	// (0x0001b5d3) popup_fixed_preview_cale_window_t1

0x4c6d,	// (0x00013a8b) popup_fixed_preview_cale_window_t2_ParamLimits

0x4c6d,	// (0x00013a8b) popup_fixed_preview_cale_window_t2

0x4c82,	// (0x00013aa0) popup_fixed_preview_cale_window_t3_ParamLimits

0x4c82,	// (0x00013aa0) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x0001e5cd) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x0001e5cd) popup_fixed_preview_cale_window_t

0x4c97,	// (0x00013ab5) list_single_fp_cale_pane_ParamLimits

0x4c97,	// (0x00013ab5) list_single_fp_cale_pane

0xc7d3,	// (0x0001b5f1) list_single_fp_cale_pane_g1_ParamLimits

0xc7d3,	// (0x0001b5f1) list_single_fp_cale_pane_g1

0xc7df,	// (0x0001b5fd) list_single_fp_cale_pane_g2_ParamLimits

0xc7df,	// (0x0001b5fd) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x0001e5d4) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x0001e5d4) list_single_fp_cale_pane_g

0xc7f8,	// (0x0001b616) list_single_fp_cale_pane_t1_ParamLimits

0xc7f8,	// (0x0001b616) list_single_fp_cale_pane_t1

0xc80a,	// (0x0001b628) list_single_fp_cale_pane_t2_ParamLimits

0xc80a,	// (0x0001b628) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x0001e5db) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x0001e5db) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x954a,	// (0x00018368) main_dialer_pane

0x4cac,	// (0x00013aca) aid_cell_size_keypad

0x4cb6,	// (0x00013ad4) dialer_ne_pane

0x4cbe,	// (0x00013adc) grid_dialer_command_1_pane

0x4cc6,	// (0x00013ae4) grid_dialer_command_2_pane

0x4cce,	// (0x00013aec) grid_dialer_keypad_pane

0x4ce0,	// (0x00013afe) bg_popup_call_pane_cp06_ParamLimits

0x4ce0,	// (0x00013afe) bg_popup_call_pane_cp06

0x4cec,	// (0x00013b0a) dialer_ne_clear_pane_ParamLimits

0x4cec,	// (0x00013b0a) dialer_ne_clear_pane

0xc83d,	// (0x0001b65b) dialer_ne_pane_g1

0xc845,	// (0x0001b663) dialer_ne_pane_t1_ParamLimits

0xc845,	// (0x0001b663) dialer_ne_pane_t1

0x4cf8,	// (0x00013b16) dialer_ne_pane_t2_ParamLimits

0x4cf8,	// (0x00013b16) dialer_ne_pane_t2

0x4d22,	// (0x00013b40) dialer_ne_pane_t3_ParamLimits

0x4d22,	// (0x00013b40) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x0001e5e0) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x0001e5e0) dialer_ne_pane_t

0x4d52,	// (0x00013b70) dialer_ne_pane_t3_copy1_ParamLimits

0x4d52,	// (0x00013b70) dialer_ne_pane_t3_copy1

0x4d81,	// (0x00013b9f) cell_dialer_keypad_pane_ParamLimits

0x4d81,	// (0x00013b9f) cell_dialer_keypad_pane

0x4d98,	// (0x00013bb6) cell_dialer_command_1_pane_ParamLimits

0x4d98,	// (0x00013bb6) cell_dialer_command_1_pane

0x4dae,	// (0x00013bcc) cell_dialer_command_2_pane_ParamLimits

0x4dae,	// (0x00013bcc) cell_dialer_command_2_pane

0xc857,	// (0x0001b675) bg_button_pane_cp02_ParamLimits

0xc857,	// (0x0001b675) bg_button_pane_cp02

0x4dbd,	// (0x00013bdb) cell_dialer_keypad_pane_g1_ParamLimits

0x4dbd,	// (0x00013bdb) cell_dialer_keypad_pane_g1

0xc857,	// (0x0001b675) bg_button_pane_cp03_ParamLimits

0xc857,	// (0x0001b675) bg_button_pane_cp03

0x4dd1,	// (0x00013bef) cell_dialer_command_1_pane_g1_ParamLimits

0x4dd1,	// (0x00013bef) cell_dialer_command_1_pane_g1

0xc863,	// (0x0001b681) bg_button_pane_cp04

0x4de5,	// (0x00013c03) cell_dialer_command_2_pane_g1

0xaa66,	// (0x00019884) bg_button_pane_cp06

0xc86b,	// (0x0001b689) dialer_ne_clear_pane_g1

0xa942,	// (0x00019760) navi_pane_g2

0xa970,	// (0x0001978e) navi_pane_g3

0x0002,

0xf3ea,	// (0x0001e208) navi_pane_g

0xa9ff,	// (0x0001981d) navi_pane_mv_g2

0xaa26,	// (0x00019844) navi_pane_mv_g5

0x2874,	// (0x00011692) navi_pane_mv_t1

0x9d1d,	// (0x00018b3b) main_clock2_pane

0x4e30,	// (0x00013c4e) main_clock2_list_pane_ParamLimits

0x4e30,	// (0x00013c4e) main_clock2_list_pane

0x4e68,	// (0x00013c86) main_clock2_pane_t1_ParamLimits

0x4e68,	// (0x00013c86) main_clock2_pane_t1

0x4ea4,	// (0x00013cc2) main_clock2_pane_t2_ParamLimits

0x4ea4,	// (0x00013cc2) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0001e5e7) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0001e5e7) main_clock2_pane_t

0x4f42,	// (0x00013d60) popup_clock_analogue_window_cp03_ParamLimits

0x4f42,	// (0x00013d60) popup_clock_analogue_window_cp03

0x4f67,	// (0x00013d85) popup_clock_digital_window_cp02_ParamLimits

0x4f67,	// (0x00013d85) popup_clock_digital_window_cp02

0x4fd8,	// (0x00013df6) main_clock2_list_single_pane_ParamLimits

0x4fd8,	// (0x00013df6) main_clock2_list_single_pane

0xaa66,	// (0x00019884) list_highlight_pane_cp05

0xc889,	// (0x0001b6a7) main_clock2_list_single_pane_t1

0x155f,	// (0x0001037d) popup_toolbar_window_cp04_ParamLimits

0x43e2,	// (0x00013200) camera2_autofocus_pane_g2_ParamLimits

0x43e2,	// (0x00013200) camera2_autofocus_pane_g2

0x43ee,	// (0x0001320c) camera2_autofocus_pane_g3_ParamLimits

0x43ee,	// (0x0001320c) camera2_autofocus_pane_g3

0x43fa,	// (0x00013218) camera2_autofocus_pane_g4_ParamLimits

0x43fa,	// (0x00013218) camera2_autofocus_pane_g4

0x4406,	// (0x00013224) camera2_autofocus_pane_g5_ParamLimits

0x4406,	// (0x00013224) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x0001e530) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x0001e530) camera2_autofocus_pane_g

0xc730,	// (0x0001b54e) camera2_autofocus_pane_cp_g2

0xc738,	// (0x0001b556) camera2_autofocus_pane_cp_g3

0xc740,	// (0x0001b55e) camera2_autofocus_pane_cp_g4

0xc748,	// (0x0001b566) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x0001e596) camera2_autofocus_pane_cp_g

0x4cd8,	// (0x00013af6) popup_dialer_spcha_window

0x954a,	// (0x00018368) bg_popup_sub_pane_cp07

0xc897,	// (0x0001b6b5) list_spcha_pane

0xc89f,	// (0x0001b6bd) list_single_spcha_pane_ParamLimits

0xc89f,	// (0x0001b6bd) list_single_spcha_pane

0x954a,	// (0x00018368) list_highlight_pane_cp06

0xc8b0,	// (0x0001b6ce) list_single_spcha_pane_t1

0xb975,	// (0x0001a793) popup_call2_audio_out_window_g4_ParamLimits

0xb975,	// (0x0001a793) popup_call2_audio_out_window_g4

0x954a,	// (0x00018368) main_imed2_pane

0xbf60,	// (0x0001ad7e) popup_imed_adjust2_window

0x37c3,	// (0x000125e1) popup_imed_trans_window_ParamLimits

0x37c3,	// (0x000125e1) popup_imed_trans_window

0xc291,	// (0x0001b0af) popup_blid_sat_info2_window_t1

0xc29f,	// (0x0001b0bd) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x0001e4c5) popup_blid_sat_info2_window_t

0x5082,	// (0x00013ea0) aid_size_cell_colour_35

0x50a2,	// (0x00013ec0) aid_size_cell_colour_112

0x50c2,	// (0x00013ee0) aid_size_cell_effect

0xbf38,	// (0x0001ad56) bg_tb_trans_pane_cp02

0xa42e,	// (0x0001924c) heading_imed_pane

0x50e2,	// (0x00013f00) listscroll_imed_pane

0xc8be,	// (0x0001b6dc) heading_imed_pane_g1

0xc8c6,	// (0x0001b6e4) heading_imed_pane_t1

0xc8d4,	// (0x0001b6f2) grid_imed_colour_35_pane_ParamLimits

0xc8d4,	// (0x0001b6f2) grid_imed_colour_35_pane

0x50ee,	// (0x00013f0c) grid_imed_effect_pane

0xc8eb,	// (0x0001b709) list_imed_aspect_pane

0x5104,	// (0x00013f22) scroll_pane_cp027_ParamLimits

0x5104,	// (0x00013f22) scroll_pane_cp027

0x5115,	// (0x00013f33) cell_imed_effect_pane_ParamLimits

0x5115,	// (0x00013f33) cell_imed_effect_pane

0xc8f3,	// (0x0001b711) cell_imed_colour_pane_ParamLimits

0xc8f3,	// (0x0001b711) cell_imed_colour_pane

0xc935,	// (0x0001b753) cell_imed_colour_pane_g1_ParamLimits

0xc935,	// (0x0001b753) cell_imed_colour_pane_g1

0xc946,	// (0x0001b764) hgihlgiht_grid_pane_cp016_ParamLimits

0xc946,	// (0x0001b764) hgihlgiht_grid_pane_cp016

0x513c,	// (0x00013f5a) cell_imed_effect_pane_g1

0x5144,	// (0x00013f62) grid_highlight_pane_cp017

0xc957,	// (0x0001b775) list_imed_single_pane_ParamLimits

0xc957,	// (0x0001b775) list_imed_single_pane

0x954a,	// (0x00018368) list_highlight_pane_cp07

0xc96c,	// (0x0001b78a) list_imed_aspect_pane_comp1_t1

0xbf38,	// (0x0001ad56) bg_tb_trans_pane_cp05

0xc98e,	// (0x0001b7ac) popup_imed_adjust2_window_g1

0xc9b5,	// (0x0001b7d3) popup_imed_adjust2_window_t1

0xc9cd,	// (0x0001b7eb) slider_imed_adjust_pane

0xc9e1,	// (0x0001b7ff) slider_imed_adjust_pane_g1

0xc9f1,	// (0x0001b80f) slider_imed_adjust_pane_g2

0xca01,	// (0x0001b81f) slider_imed_adjust_pane_g3

0xca12,	// (0x0001b830) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0001e604) slider_imed_adjust_pane_g

0x514d,	// (0x00013f6b) aid_size_cell_clipart2

0x5159,	// (0x00013f77) grid_imed_clipart_pane

0xca23,	// (0x0001b841) scroll_pane_cp031

0x5163,	// (0x00013f81) cell_imed_clipart_pane_ParamLimits

0x5163,	// (0x00013f81) cell_imed_clipart_pane

0x5185,	// (0x00013fa3) cell_imed_clipart_pane_g1

0x954a,	// (0x00018368) grid_highlight_pane_cp014

0x4e45,	// (0x00013c63) main_clock2_pane_g1_ParamLimits

0x4e45,	// (0x00013c63) main_clock2_pane_g1

0x4f83,	// (0x00013da1) aid_call2_pane_cp10

0x4f95,	// (0x00013db3) aid_call_pane_cp10

0xa8a3,	// (0x000196c1) popup_clock_analogue_window_cp10_g1

0xa8a3,	// (0x000196c1) popup_clock_analogue_window_cp10_g2

0x4fa7,	// (0x00013dc5) popup_clock_analogue_window_cp10_g3

0x4fa7,	// (0x00013dc5) popup_clock_analogue_window_cp10_g4

0xa8a3,	// (0x000196c1) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0001e5f2) popup_clock_analogue_window_cp10_g

0x4fb9,	// (0x00013dd7) popup_clock_analogue_window_cp10_t1

0x4fea,	// (0x00013e08) clock_digital_number_pane_cp10_ParamLimits

0x4fea,	// (0x00013e08) clock_digital_number_pane_cp10

0x5002,	// (0x00013e20) clock_digital_number_pane_cp11_ParamLimits

0x5002,	// (0x00013e20) clock_digital_number_pane_cp11

0x501a,	// (0x00013e38) clock_digital_number_pane_cp12_ParamLimits

0x501a,	// (0x00013e38) clock_digital_number_pane_cp12

0x5032,	// (0x00013e50) clock_digital_number_pane_cp13_ParamLimits

0x5032,	// (0x00013e50) clock_digital_number_pane_cp13

0x504a,	// (0x00013e68) clock_digital_separator_pane_cp10_ParamLimits

0x504a,	// (0x00013e68) clock_digital_separator_pane_cp10

0x5062,	// (0x00013e80) popup_clock_digital_window_cp02_t1_ParamLimits

0x5062,	// (0x00013e80) popup_clock_digital_window_cp02_t1

0x9c2e,	// (0x00018a4c) clock_digital_number_pane_cp10_g1

0x9c2e,	// (0x00018a4c) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0001e60d) clock_digital_number_pane_cp10_g

0x9c2e,	// (0x00018a4c) clock_digital_separator_pane_cp10_g1

0x9c2e,	// (0x00018a4c) clock_digital_separator_pane_g2_cp10

0xaa2e,	// (0x0001984c) navi_pane_vded_g4

0xaa37,	// (0x00019855) navi_pane_vded_g5

0xaa40,	// (0x0001985e) navi_pane_vded_t1

0x954a,	// (0x00018368) main_vded_pane

0x518e,	// (0x00013fac) main_vded_pane_g1

0x5198,	// (0x00013fb6) main_vded_pane_g2

0x51a2,	// (0x00013fc0) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0001e612) main_vded_pane_g

0x51ac,	// (0x00013fca) main_vded_pane_t1

0x51ba,	// (0x00013fd8) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0001e619) main_vded_pane_t

0x51c8,	// (0x00013fe6) vded_slider_pane

0x51d0,	// (0x00013fee) vded_video_pane

0xca2b,	// (0x0001b849) vded_video_pane_g1

0x51d8,	// (0x00013ff6) vded_video_pane_g2

0xc453,	// (0x0001b271) vded_video_pane_g3

0x0002,

0xf800,	// (0x0001e61e) vded_video_pane_g

0xca35,	// (0x0001b853) vded_slider_pane_g1

0xc162,	// (0x0001af80) vded_slider_pane_g2

0xca3e,	// (0x0001b85c) vded_slider_pane_g3

0xca47,	// (0x0001b865) vded_slider_pane_g4

0xca50,	// (0x0001b86e) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0001e625) vded_slider_pane_g

0x4bb9,	// (0x000139d7) mup3_rocker_pane_ParamLimits

0x4bb9,	// (0x000139d7) mup3_rocker_pane

0x51e1,	// (0x00013fff) mup3_control_keys_pane_g1

0x51e9,	// (0x00014007) mup3_control_keys_pane_g2

0x51f1,	// (0x0001400f) mup3_control_keys_pane_g3

0x51f9,	// (0x00014017) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0001e630) mup3_control_keys_pane_g

0x0447,	// (0x0000f265) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0447,	// (0x0000f265) popup_toolbar2_fixed_window_cp01

0x4bed,	// (0x00013a0b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4bed,	// (0x00013a0b) popup_toolbar2_fixed_window_cp02

0xb2b4,	// (0x0001a0d2) popup_call2_audio_second_window_t4_ParamLimits

0xb2b4,	// (0x0001a0d2) popup_call2_audio_second_window_t4

0xb7e2,	// (0x0001a600) popup_call2_audio_first_window_t6_ParamLimits

0xb7e2,	// (0x0001a600) popup_call2_audio_first_window_t6

0xba78,	// (0x0001a896) popup_call2_audio_out_window_t6_ParamLimits

0xba78,	// (0x0001a896) popup_call2_audio_out_window_t6

0x954a,	// (0x00018368) main_vitu_pane

0x5209,	// (0x00014027) aid_size_cell_itu_ParamLimits

0x5209,	// (0x00014027) aid_size_cell_itu

0x95ba,	// (0x000183d8) bg_popup_window_pane_cp08_ParamLimits

0x95ba,	// (0x000183d8) bg_popup_window_pane_cp08

0x521f,	// (0x0001403d) field_vitu_entry_pane_ParamLimits

0x521f,	// (0x0001403d) field_vitu_entry_pane

0x5236,	// (0x00014054) grid_vitu_function_pane_ParamLimits

0x5236,	// (0x00014054) grid_vitu_function_pane

0x5251,	// (0x0001406f) grid_vitu_itu_pane_ParamLimits

0x5251,	// (0x0001406f) grid_vitu_itu_pane

0x526f,	// (0x0001408d) cell_vitu_itu_pane_ParamLimits

0x526f,	// (0x0001408d) cell_vitu_itu_pane

0x5291,	// (0x000140af) cell_vitu_function_pane_ParamLimits

0x5291,	// (0x000140af) cell_vitu_function_pane

0x95ba,	// (0x000183d8) bg_popup_sub_pane_cp08_ParamLimits

0x95ba,	// (0x000183d8) bg_popup_sub_pane_cp08

0x52aa,	// (0x000140c8) field_vitu_entry_pane_t1_ParamLimits

0x52aa,	// (0x000140c8) field_vitu_entry_pane_t1

0xca71,	// (0x0001b88f) field_vitu_entry_pane_t2_ParamLimits

0xca71,	// (0x0001b88f) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0001e63e) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0001e63e) field_vitu_entry_pane_t

0xca8e,	// (0x0001b8ac) bg_button_pane_cp05_ParamLimits

0xca8e,	// (0x0001b8ac) bg_button_pane_cp05

0x52c8,	// (0x000140e6) cell_vitu_itu_pane_g1

0x52e0,	// (0x000140fe) cell_vitu_itu_pane_t1_ParamLimits

0x52e0,	// (0x000140fe) cell_vitu_itu_pane_t1

0x52f2,	// (0x00014110) cell_vitu_itu_pane_t2_ParamLimits

0x52f2,	// (0x00014110) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0001e643) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0001e643) cell_vitu_itu_pane_t

0xca9c,	// (0x0001b8ba) bg_button_pane_cp07

0x5327,	// (0x00014145) cell_vitu_function_pane_g1

0x9cbd,	// (0x00018adb) main_calc_pane_g1

0x026e,	// (0x0000f08c) aid_visual_content_pane

0x954a,	// (0x00018368) main_vradio_pane

0x5330,	// (0x0001414e) main_vradio_pane_g1_ParamLimits

0x5330,	// (0x0001414e) main_vradio_pane_g1

0xcaa6,	// (0x0001b8c4) main_vradio_pane_g2_ParamLimits

0xcaa6,	// (0x0001b8c4) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0001e64a) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0001e64a) main_vradio_pane_g

0x5349,	// (0x00014167) main_vradio_pane_t1_ParamLimits

0x5349,	// (0x00014167) main_vradio_pane_t1

0x535e,	// (0x0001417c) main_vradio_pane_t2_ParamLimits

0x535e,	// (0x0001417c) main_vradio_pane_t2

0xcab3,	// (0x0001b8d1) main_vradio_pane_t3_ParamLimits

0xcab3,	// (0x0001b8d1) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0001e64f) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0001e64f) main_vradio_pane_t

0x5373,	// (0x00014191) vradio_rocker_control_pane_ParamLimits

0x5373,	// (0x00014191) vradio_rocker_control_pane

0x5385,	// (0x000141a3) vradio_station_info_pane_ParamLimits

0x5385,	// (0x000141a3) vradio_station_info_pane

0xcac7,	// (0x0001b8e5) vradio_frequency_info_pane_ParamLimits

0xcac7,	// (0x0001b8e5) vradio_frequency_info_pane

0xc453,	// (0x0001b271) vradio_station_info_pane_g1

0xcad6,	// (0x0001b8f4) vradio_station_info_pane_t1_ParamLimits

0xcad6,	// (0x0001b8f4) vradio_station_info_pane_t1

0xcaf8,	// (0x0001b916) vradio_station_info_pane_t2_ParamLimits

0xcaf8,	// (0x0001b916) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0001e656) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0001e656) vradio_station_info_pane_t

0xcb0a,	// (0x0001b928) vradio_tuning_pane

0xcb12,	// (0x0001b930) vradio_rocker_control_pane_g1

0xcb1a,	// (0x0001b938) vradio_rocker_control_pane_g2

0xcb22,	// (0x0001b940) vradio_rocker_control_pane_g3

0xcb2a,	// (0x0001b948) vradio_rocker_control_pane_g4

0xcb32,	// (0x0001b950) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0001e65b) vradio_rocker_control_pane_g

0x5397,	// (0x000141b5) vradio_frequency_info_pane_g1

0xcb3a,	// (0x0001b958) vradio_frequency_info_pane_t1_ParamLimits

0xcb3a,	// (0x0001b958) vradio_frequency_info_pane_t1

0x53a1,	// (0x000141bf) vradio_tuning_pane_g1

0x53ac,	// (0x000141ca) vradio_tuning_pane_t1

0x9578,	// (0x00018396) area_side_right_pane_ParamLimits

0x9578,	// (0x00018396) area_side_right_pane

0xbef3,	// (0x0001ad11) status_small_pane_g1

0xbefb,	// (0x0001ad19) status_small_pane_g2

0xbf04,	// (0x0001ad22) status_small_pane_g3

0xbf0d,	// (0x0001ad2b) status_small_pane_g4

0x0003,

0xf5fd,	// (0x0001e41b) status_small_pane_g

0xbf16,	// (0x0001ad34) status_small_pane_t1

0x954a,	// (0x00018368) main_video3_pane

0xcb4e,	// (0x0001b96c) cams_zoom_vslider_pane

0xcb56,	// (0x0001b974) image3_wide_pane_ParamLimits

0xcb56,	// (0x0001b974) image3_wide_pane

0xcb70,	// (0x0001b98e) image3_wide_small_pane

0xcb7c,	// (0x0001b99a) main_video3_pane_g1_ParamLimits

0xcb7c,	// (0x0001b99a) main_video3_pane_g1

0xcb98,	// (0x0001b9b6) main_video3_pane_g2_ParamLimits

0xcb98,	// (0x0001b9b6) main_video3_pane_g2

0x0001,

0xf848,	// (0x0001e666) main_video3_pane_g_ParamLimits

0xf848,	// (0x0001e666) main_video3_pane_g

0xcbb4,	// (0x0001b9d2) main_video3_pane_t1_ParamLimits

0xcbb4,	// (0x0001b9d2) main_video3_pane_t1

0xcbdf,	// (0x0001b9fd) main_video3_pane_t2_ParamLimits

0xcbdf,	// (0x0001b9fd) main_video3_pane_t2

0xcc0a,	// (0x0001ba28) main_video3_pane_t3_ParamLimits

0xcc0a,	// (0x0001ba28) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0001e66b) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0001e66b) main_video3_pane_t

0xcc37,	// (0x0001ba55) cams_zoom_vslider_pane_g1

0xcc40,	// (0x0001ba5e) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0001e672) cams_zoom_vslider_pane_g

0xcc48,	// (0x0001ba66) small_slider_vertical_pane

0xc453,	// (0x0001b271) small_slider_vertical_pane_g1

0xc453,	// (0x0001b271) small_slider_vertical_pane_g2

0xcc50,	// (0x0001ba6e) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0001e677) small_slider_vertical_pane_g

0x954a,	// (0x00018368) main_hwr_training_pane

0xcc59,	// (0x0001ba77) hwr_training_instruct_pane_ParamLimits

0xcc59,	// (0x0001ba77) hwr_training_instruct_pane

0x53bb,	// (0x000141d9) hwr_training_navi_pane_ParamLimits

0x53bb,	// (0x000141d9) hwr_training_navi_pane

0x53da,	// (0x000141f8) hwr_training_write_pane_ParamLimits

0x53da,	// (0x000141f8) hwr_training_write_pane

0x954a,	// (0x00018368) bg_frame_shadow_pane

0xcc90,	// (0x0001baae) hwr_training_write_pane_g1

0xcc98,	// (0x0001bab6) hwr_training_write_pane_g2

0xcca0,	// (0x0001babe) hwr_training_write_pane_g3

0xcca8,	// (0x0001bac6) hwr_training_write_pane_g4

0xccb0,	// (0x0001bace) hwr_training_write_pane_g5

0xccb8,	// (0x0001bad6) hwr_training_write_pane_g6

0xccc0,	// (0x0001bade) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0001e67e) hwr_training_write_pane_g

0xccc8,	// (0x0001bae6) hwr_training_navi_pane_g1_ParamLimits

0xccc8,	// (0x0001bae6) hwr_training_navi_pane_g1

0xccda,	// (0x0001baf8) hwr_training_navi_pane_g2_ParamLimits

0xccda,	// (0x0001baf8) hwr_training_navi_pane_g2

0xccec,	// (0x0001bb0a) hwr_training_navi_pane_g3_ParamLimits

0xccec,	// (0x0001bb0a) hwr_training_navi_pane_g3

0xccfc,	// (0x0001bb1a) hwr_training_navi_pane_g4_ParamLimits

0xccfc,	// (0x0001bb1a) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0001e68d) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0001e68d) hwr_training_navi_pane_g

0xcd09,	// (0x0001bb27) hwr_training_navi_pane_t1

0x5422,	// (0x00014240) list_single_hwr_training_instruct_pane_ParamLimits

0x5422,	// (0x00014240) list_single_hwr_training_instruct_pane

0xcd17,	// (0x0001bb35) list_single_hwr_training_instruct_pane_t1

0xc393,	// (0x0001b1b1) bg_frame_shadow_pane_g1

0xcd26,	// (0x0001bb44) bg_frame_shadow_pane_g2

0xcd2e,	// (0x0001bb4c) bg_frame_shadow_pane_g3

0xcd36,	// (0x0001bb54) bg_frame_shadow_pane_g4

0xcd3e,	// (0x0001bb5c) bg_frame_shadow_pane_g5

0xcd46,	// (0x0001bb64) bg_frame_shadow_pane_g6

0xcd4e,	// (0x0001bb6c) bg_frame_shadow_pane_g7

0x9dfa,	// (0x00018c18) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0001e698) bg_frame_shadow_pane_g

0x954a,	// (0x00018368) main_video_tele_dialer_pane

0x5437,	// (0x00014255) aid_size_cell_video_keypad_ParamLimits

0x5437,	// (0x00014255) aid_size_cell_video_keypad

0x5451,	// (0x0001426f) grid_video_dialer_keypad_pane_ParamLimits

0x5451,	// (0x0001426f) grid_video_dialer_keypad_pane

0x549d,	// (0x000142bb) video_down_pane_cp_ParamLimits

0x549d,	// (0x000142bb) video_down_pane_cp

0x54cf,	// (0x000142ed) cell_video_dialer_keypad_pane_ParamLimits

0x54cf,	// (0x000142ed) cell_video_dialer_keypad_pane

0xcd56,	// (0x0001bb74) bg_button_pane_cp08_ParamLimits

0xcd56,	// (0x0001bb74) bg_button_pane_cp08

0x54f1,	// (0x0001430f) cell_video_dialer_keypad_pane_g1_ParamLimits

0x54f1,	// (0x0001430f) cell_video_dialer_keypad_pane_g1

0x4ba3,	// (0x000139c1) mup3_rocker2_pane_ParamLimits

0x4ba3,	// (0x000139c1) mup3_rocker2_pane

0xc453,	// (0x0001b271) mup3_rocker2_pane_g1

0x36a4,	// (0x000124c2) main_dialer2_pane

0x954a,	// (0x00018368) main_mp4_pane

0xcd6a,	// (0x0001bb88) main_mp4_pane_g1_ParamLimits

0xcd6a,	// (0x0001bb88) main_mp4_pane_g1

0xcd6a,	// (0x0001bb88) main_mp4_pane_g2_ParamLimits

0xcd6a,	// (0x0001bb88) main_mp4_pane_g2

0x5528,	// (0x00014346) main_mp4_pane_g3_ParamLimits

0x5528,	// (0x00014346) main_mp4_pane_g3

0xcd78,	// (0x0001bb96) main_mp4_pane_g4_ParamLimits

0xcd78,	// (0x0001bb96) main_mp4_pane_g4

0xcda0,	// (0x0001bbbe) main_mp4_pane_g5_ParamLimits

0xcda0,	// (0x0001bbbe) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0001e6b8) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0001e6b8) main_mp4_pane_g

0xcdf0,	// (0x0001bc0e) main_mp4_pane_t1_ParamLimits

0xcdf0,	// (0x0001bc0e) main_mp4_pane_t1

0xce4c,	// (0x0001bc6a) main_mp4_pane_t2_ParamLimits

0xce4c,	// (0x0001bc6a) main_mp4_pane_t2

0xce9e,	// (0x0001bcbc) main_mp4_pane_t3_ParamLimits

0xce9e,	// (0x0001bcbc) main_mp4_pane_t3

0xcebe,	// (0x0001bcdc) main_mp4_pane_t4_ParamLimits

0xcebe,	// (0x0001bcdc) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0001e6c5) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0001e6c5) main_mp4_pane_t

0xcf02,	// (0x0001bd20) mp4_progress_pane_ParamLimits

0xcf02,	// (0x0001bd20) mp4_progress_pane

0xcf4c,	// (0x0001bd6a) mp4_rocker_pane_ParamLimits

0xcf4c,	// (0x0001bd6a) mp4_rocker_pane

0xcf74,	// (0x0001bd92) mp4_progress_pane_t1

0xcf8d,	// (0x0001bdab) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0001e6ce) mp4_progress_pane_t

0xcfa6,	// (0x0001bdc4) mup_progress_pane_cp04

0xc453,	// (0x0001b271) mp4_rocker_pane_g1

0x5564,	// (0x00014382) aid_cell_size_keypad2_ParamLimits

0x5564,	// (0x00014382) aid_cell_size_keypad2

0x557a,	// (0x00014398) dialer2_ne_pane_ParamLimits

0x557a,	// (0x00014398) dialer2_ne_pane

0x5594,	// (0x000143b2) grid_dialer2_keypad_pane_ParamLimits

0x5594,	// (0x000143b2) grid_dialer2_keypad_pane

0xc238,	// (0x0001b056) bg_popup_call_pane_cp07_ParamLimits

0xc238,	// (0x0001b056) bg_popup_call_pane_cp07

0x55b0,	// (0x000143ce) dialer2_ne_pane_t1_ParamLimits

0x55b0,	// (0x000143ce) dialer2_ne_pane_t1

0x55eb,	// (0x00014409) cell_dialer2_keypad_pane_ParamLimits

0x55eb,	// (0x00014409) cell_dialer2_keypad_pane

0xcfc4,	// (0x0001bde2) bg_button_pane_pane_cp04_ParamLimits

0xcfc4,	// (0x0001bde2) bg_button_pane_pane_cp04

0x560d,	// (0x0001442b) cell_dialer2_keypad_pane_g1_ParamLimits

0x560d,	// (0x0001442b) cell_dialer2_keypad_pane_g1

0x1433,	// (0x00010251) aid_placing_vt_set_content_ParamLimits

0x1433,	// (0x00010251) aid_placing_vt_set_content

0x145b,	// (0x00010279) aid_placing_vt_set_title_ParamLimits

0x145b,	// (0x00010279) aid_placing_vt_set_title

0x954a,	// (0x00018368) main_image3_pane

0x56d3,	// (0x000144f1) area_side_right_pane_cp01_ParamLimits

0x56d3,	// (0x000144f1) area_side_right_pane_cp01

0xcd6a,	// (0x0001bb88) main_image3_pane_g1_ParamLimits

0xcd6a,	// (0x0001bb88) main_image3_pane_g1

0x56ea,	// (0x00014508) main_image3_pane_g2_ParamLimits

0x56ea,	// (0x00014508) main_image3_pane_g2

0x5712,	// (0x00014530) main_image3_pane_g3_ParamLimits

0x5712,	// (0x00014530) main_image3_pane_g3

0x573c,	// (0x0001455a) main_image3_pane_g4_ParamLimits

0x573c,	// (0x0001455a) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0001e6dd) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0001e6dd) main_image3_pane_g

0x5766,	// (0x00014584) main_image3_pane_t1_ParamLimits

0x5766,	// (0x00014584) main_image3_pane_t1

0x57be,	// (0x000145dc) main_image3_pane_t2_ParamLimits

0x57be,	// (0x000145dc) main_image3_pane_t2

0x5810,	// (0x0001462e) main_image3_pane_t3_ParamLimits

0x5810,	// (0x0001462e) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0001e6e6) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0001e6e6) main_image3_pane_t

0x95ba,	// (0x000183d8) grid_sctrl_middle_pane_cp01_ParamLimits

0x95ba,	// (0x000183d8) grid_sctrl_middle_pane_cp01

0x5898,	// (0x000146b6) cell_sctrl_middle_pane_cp01_ParamLimits

0x5898,	// (0x000146b6) cell_sctrl_middle_pane_cp01

0x58b5,	// (0x000146d3) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x58b5,	// (0x000146d3) cell_sctrl_middle_pane_cp01_g1

0x954a,	// (0x00018368) main_call4_pane

0x58cb,	// (0x000146e9) aid_size_button_call4_ParamLimits

0x58cb,	// (0x000146e9) aid_size_button_call4

0x58fc,	// (0x0001471a) call4_windows_pane_ParamLimits

0x58fc,	// (0x0001471a) call4_windows_pane

0x591c,	// (0x0001473a) grid_call4_button_pane_ParamLimits

0x591c,	// (0x0001473a) grid_call4_button_pane

0xd002,	// (0x0001be20) call4_windows_conf_pane

0xd019,	// (0x0001be37) popup_call4_audio_first_window_ParamLimits

0xd019,	// (0x0001be37) popup_call4_audio_first_window

0xd065,	// (0x0001be83) popup_call4_audio_second_window_ParamLimits

0xd065,	// (0x0001be83) popup_call4_audio_second_window

0xd079,	// (0x0001be97) popup_call4_audio_wait_window_ParamLimits

0xd079,	// (0x0001be97) popup_call4_audio_wait_window

0x5949,	// (0x00014767) cell_call4_button_pane_ParamLimits

0x5949,	// (0x00014767) cell_call4_button_pane

0x5972,	// (0x00014790) bg_button_pane_cp09_ParamLimits

0x5972,	// (0x00014790) bg_button_pane_cp09

0x597e,	// (0x0001479c) cell_call4_button_pane_g1_ParamLimits

0x597e,	// (0x0001479c) cell_call4_button_pane_g1

0x59a4,	// (0x000147c2) cell_call4_button_pane_t1_ParamLimits

0x59a4,	// (0x000147c2) cell_call4_button_pane_t1

0xd0c1,	// (0x0001bedf) popup_call4_audio_conf_window_ParamLimits

0xd0c1,	// (0x0001bedf) popup_call4_audio_conf_window

0x4c03,	// (0x00013a21) mup3_progress_pane_t1_ParamLimits

0x4c22,	// (0x00013a40) mup3_progress_pane_t2_ParamLimits

0xc766,	// (0x0001b584) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x0001e5bf) mup3_progress_pane_t_ParamLimits

0xc783,	// (0x0001b5a1) mup_progress_pane_cp03_ParamLimits

0x5201,	// (0x0001401f) mup3_control_keys_pane_g4_copy1

0xcf30,	// (0x0001bd4e) mp4_rocker2_pane_ParamLimits

0xcf30,	// (0x0001bd4e) mp4_rocker2_pane

0xd0d5,	// (0x0001bef3) mp4_rocker2_pane_g1

0xd0dd,	// (0x0001befb) mp4_rocker2_pane_g2

0xd0e5,	// (0x0001bf03) mp4_rocker2_pane_g3

0xd0ed,	// (0x0001bf0b) mp4_rocker2_pane_g4

0xd0f5,	// (0x0001bf13) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0001e6ef) mp4_rocker2_pane_g

0x954a,	// (0x00018368) main_camera4_pane

0x954a,	// (0x00018368) main_video4_pane

0x546b,	// (0x00014289) main_video_tele_dialer_pane_t1_ParamLimits

0x546b,	// (0x00014289) main_video_tele_dialer_pane_t1

0x5484,	// (0x000142a2) main_video_tele_dialer_pane_t2_ParamLimits

0x5484,	// (0x000142a2) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0001e6a9) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0001e6a9) main_video_tele_dialer_pane_t

0x59e2,	// (0x00014800) cam4_autofocus_pane_ParamLimits

0x59e2,	// (0x00014800) cam4_autofocus_pane

0x59f8,	// (0x00014816) cam4_image_uncrop_pane_ParamLimits

0x59f8,	// (0x00014816) cam4_image_uncrop_pane

0x5a12,	// (0x00014830) cam4_indicators_pane_ParamLimits

0x5a12,	// (0x00014830) cam4_indicators_pane

0x5a3d,	// (0x0001485b) main_camera4_pane_g1_ParamLimits

0x5a3d,	// (0x0001485b) main_camera4_pane_g1

0x5a4f,	// (0x0001486d) main_camera4_pane_g2_ParamLimits

0x5a4f,	// (0x0001486d) main_camera4_pane_g2

0x5a62,	// (0x00014880) main_camera4_pane_g3_ParamLimits

0x5a62,	// (0x00014880) main_camera4_pane_g3

0x5a75,	// (0x00014893) main_camera4_pane_g4_ParamLimits

0x5a75,	// (0x00014893) main_camera4_pane_g4

0x5a88,	// (0x000148a6) main_camera4_pane_g5_ParamLimits

0x5a88,	// (0x000148a6) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0001e6fa) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0001e6fa) main_camera4_pane_g

0x5aac,	// (0x000148ca) main_camera4_pane_t1_ParamLimits

0x5aac,	// (0x000148ca) main_camera4_pane_t1

0xc6bf,	// (0x0001b4dd) bg_tb_trans_pane_cp06

0xd121,	// (0x0001bf3f) cam4_indicators_pane_g1

0xd132,	// (0x0001bf50) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0001e715) cam4_indicators_pane_g

0xd150,	// (0x0001bf6e) cam4_indicators_pane_t1

0x5b10,	// (0x0001492e) main_video4_pane_g1_ParamLimits

0x5b10,	// (0x0001492e) main_video4_pane_g1

0x5b1f,	// (0x0001493d) main_video4_pane_g2_ParamLimits

0x5b1f,	// (0x0001493d) main_video4_pane_g2

0x5b2e,	// (0x0001494c) main_video4_pane_g3_ParamLimits

0x5b2e,	// (0x0001494c) main_video4_pane_g3

0x5b3d,	// (0x0001495b) main_video4_pane_g4_ParamLimits

0x5b3d,	// (0x0001495b) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0001e71c) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0001e71c) main_video4_pane_g

0x5b5b,	// (0x00014979) vid4_indicators_pane_ParamLimits

0x5b5b,	// (0x00014979) vid4_indicators_pane

0x5b89,	// (0x000149a7) video4_image_uncrop_cif_pane_ParamLimits

0x5b89,	// (0x000149a7) video4_image_uncrop_cif_pane

0x5ba3,	// (0x000149c1) video4_image_uncrop_nhd_pane_ParamLimits

0x5ba3,	// (0x000149c1) video4_image_uncrop_nhd_pane

0x59f8,	// (0x00014816) video4_image_uncrop_vga_pane_ParamLimits

0x59f8,	// (0x00014816) video4_image_uncrop_vga_pane

0x95ba,	// (0x000183d8) bg_tb_trans_pane_cp07

0xd17c,	// (0x0001bf9a) vid4_indicators_pane_g1

0xd190,	// (0x0001bfae) vid4_indicators_pane_g2

0xd1a4,	// (0x0001bfc2) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0001e727) vid4_indicators_pane_g

0xd1d3,	// (0x0001bff1) vid4_indicators_pane_t1

0x5bb7,	// (0x000149d5) cam4_autofocus_pane_g1

0x5bbf,	// (0x000149dd) cam4_autofocus_pane_g2

0x5bc7,	// (0x000149e5) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0001e732) cam4_autofocus_pane_g

0x5bcf,	// (0x000149ed) cam4_autofocus_pane_g3_copy1

0x54b3,	// (0x000142d1) video_down_pane_cp_t1

0x54c1,	// (0x000142df) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0001e6ae) video_down_pane_cp_t

0x95ba,	// (0x000183d8) popup_vitu2_window_ParamLimits

0x95ba,	// (0x000183d8) popup_vitu2_window

0x5bd7,	// (0x000149f5) aid_size_cell2_itu2_ParamLimits

0x5bd7,	// (0x000149f5) aid_size_cell2_itu2

0x5bfd,	// (0x00014a1b) aid_size_cell_itu2_ParamLimits

0x5bfd,	// (0x00014a1b) aid_size_cell_itu2

0x5c59,	// (0x00014a77) bg_popup_window_pane_cp09_ParamLimits

0x5c59,	// (0x00014a77) bg_popup_window_pane_cp09

0x5c67,	// (0x00014a85) field_vitu2_entry_pane_ParamLimits

0x5c67,	// (0x00014a85) field_vitu2_entry_pane

0x5c8d,	// (0x00014aab) grid_vitu2_function_pane_ParamLimits

0x5c8d,	// (0x00014aab) grid_vitu2_function_pane

0x5cde,	// (0x00014afc) grid_vitu2_itu_pane_ParamLimits

0x5cde,	// (0x00014afc) grid_vitu2_itu_pane

0x5d71,	// (0x00014b8f) cell_vitu2_itu_pane_ParamLimits

0x5d71,	// (0x00014b8f) cell_vitu2_itu_pane

0x5d95,	// (0x00014bb3) cell_vitu2_function_pane_ParamLimits

0x5d95,	// (0x00014bb3) cell_vitu2_function_pane

0xd1ea,	// (0x0001c008) bg_popup_call_pane_cp08_ParamLimits

0xd1ea,	// (0x0001c008) bg_popup_call_pane_cp08

0xd203,	// (0x0001c021) field_vitu2_entry_pane_g1

0xd20f,	// (0x0001c02d) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0001e739) field_vitu2_entry_pane_g

0x5dd4,	// (0x00014bf2) field_vitu2_entry_pane_t1_ParamLimits

0x5dd4,	// (0x00014bf2) field_vitu2_entry_pane_t1

0xd229,	// (0x0001c047) field_vitu2_entry_pane_t2_ParamLimits

0xd229,	// (0x0001c047) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0001e740) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0001e740) field_vitu2_entry_pane_t

0x5e03,	// (0x00014c21) bg_button_pane_cp010_ParamLimits

0x5e03,	// (0x00014c21) bg_button_pane_cp010

0x5e11,	// (0x00014c2f) cell_vitu2_itu_pane_g1

0x5e3c,	// (0x00014c5a) cell_vitu2_itu_pane_t1_ParamLimits

0x5e3c,	// (0x00014c5a) cell_vitu2_itu_pane_t1

0x5e9a,	// (0x00014cb8) cell_vitu2_itu_pane_t2_ParamLimits

0x5e9a,	// (0x00014cb8) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0001e74a) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0001e74a) cell_vitu2_itu_pane_t

0x95ba,	// (0x000183d8) bg_button_pane_cp011

0x5f86,	// (0x00014da4) cell_vitu2_function_pane_g1

0x954a,	// (0x00018368) main_myfav_hc_pane

0x5860,	// (0x0001467e) popup_image3_note_pane_ParamLimits

0x5860,	// (0x0001467e) popup_image3_note_pane

0x587c,	// (0x0001469a) popup_image3_tool_bar_pane_ParamLimits

0x587c,	// (0x0001469a) popup_image3_tool_bar_pane

0x5f28,	// (0x00014d46) cell_vitu2_itu_pane_t3_ParamLimits

0x5f28,	// (0x00014d46) cell_vitu2_itu_pane_t3

0x954a,	// (0x00018368) bg_popup_trans_pane

0xd24e,	// (0x0001c06c) grid_image3_tool_bar_pane

0xd258,	// (0x0001c076) bg_popup_trans_pane_g1

0xa1b8,	// (0x00018fd6) bg_popup_trans_pane_g2

0xd260,	// (0x0001c07e) bg_popup_trans_pane_g3

0xd268,	// (0x0001c086) bg_popup_trans_pane_g4

0xd270,	// (0x0001c08e) bg_popup_trans_pane_g5

0xd278,	// (0x0001c096) bg_popup_trans_pane_g6

0xd280,	// (0x0001c09e) bg_popup_trans_pane_g7

0xd288,	// (0x0001c0a6) bg_popup_trans_pane_g8

0xa198,	// (0x00018fb6) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0001e751) bg_popup_trans_pane_g

0xd290,	// (0x0001c0ae) cell_image3_tool_bar_pane_ParamLimits

0xd290,	// (0x0001c0ae) cell_image3_tool_bar_pane

0xc453,	// (0x0001b271) cell_image3_tool_bar_pane_g1

0x954a,	// (0x00018368) bg_popup_trans_pane_cp1

0xd2a4,	// (0x0001c0c2) popup_image3_note_pane_t1

0xd2b2,	// (0x0001c0d0) popup_image3_note_pane_t2

0xd2c0,	// (0x0001c0de) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0001e764) popup_image3_note_pane_t

0xd2ce,	// (0x0001c0ec) popup_image3_note_pane_t3_copy1

0x5f9a,	// (0x00014db8) bg_myfav_hc_instruction_pane_ParamLimits

0x5f9a,	// (0x00014db8) bg_myfav_hc_instruction_pane

0x5fae,	// (0x00014dcc) cell_myfav_contact_pane_ParamLimits

0x5fae,	// (0x00014dcc) cell_myfav_contact_pane

0x5fcc,	// (0x00014dea) cell_myfav_contact_pane_cp1_ParamLimits

0x5fcc,	// (0x00014dea) cell_myfav_contact_pane_cp1

0x5fe4,	// (0x00014e02) cell_myfav_contact_pane_cp2_ParamLimits

0x5fe4,	// (0x00014e02) cell_myfav_contact_pane_cp2

0x5ffc,	// (0x00014e1a) cell_myfav_contact_pane_cp3_ParamLimits

0x5ffc,	// (0x00014e1a) cell_myfav_contact_pane_cp3

0x6013,	// (0x00014e31) cell_myfav_contact_pane_cp4_ParamLimits

0x6013,	// (0x00014e31) cell_myfav_contact_pane_cp4

0x602b,	// (0x00014e49) cell_myfav_contact_pane_cp5_ParamLimits

0x602b,	// (0x00014e49) cell_myfav_contact_pane_cp5

0x603f,	// (0x00014e5d) cell_myfav_contact_pane_cp6_ParamLimits

0x603f,	// (0x00014e5d) cell_myfav_contact_pane_cp6

0x6055,	// (0x00014e73) cell_myfav_contact_pane_cp7_ParamLimits

0x6055,	// (0x00014e73) cell_myfav_contact_pane_cp7

0xd2dc,	// (0x0001c0fa) listscroll_gen_pane_cp05

0x606f,	// (0x00014e8d) main_myfav_hc_pane_g1_ParamLimits

0x606f,	// (0x00014e8d) main_myfav_hc_pane_g1

0x6089,	// (0x00014ea7) main_myfav_hc_pane_g2_ParamLimits

0x6089,	// (0x00014ea7) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0001e76b) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0001e76b) main_myfav_hc_pane_g

0x60bb,	// (0x00014ed9) main_myfav_hc_pane_t1_ParamLimits

0x60bb,	// (0x00014ed9) main_myfav_hc_pane_t1

0xd2e5,	// (0x0001c103) main_myfav_hc_pane_t2_ParamLimits

0xd2e5,	// (0x0001c103) main_myfav_hc_pane_t2

0xd2f7,	// (0x0001c115) main_myfav_hc_pane_t3_ParamLimits

0xd2f7,	// (0x0001c115) main_myfav_hc_pane_t3

0x60d2,	// (0x00014ef0) main_myfav_hc_pane_t4_ParamLimits

0x60d2,	// (0x00014ef0) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0001e772) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0001e772) main_myfav_hc_pane_t

0xc453,	// (0x0001b271) bg_myfav_hc_instruction_pane_g1

0xd33f,	// (0x0001c15d) cell_myfav_contact_pane_g1_ParamLimits

0xd33f,	// (0x0001c15d) cell_myfav_contact_pane_g1

0xd33f,	// (0x0001c15d) cell_myfav_contact_pane_g2_ParamLimits

0xd33f,	// (0x0001c15d) cell_myfav_contact_pane_g2

0xd34b,	// (0x0001c169) cell_myfav_contact_pane_g3_ParamLimits

0xd34b,	// (0x0001c169) cell_myfav_contact_pane_g3

0xc750,	// (0x0001b56e) cell_myfav_contact_pane_g4_ParamLimits

0xc750,	// (0x0001b56e) cell_myfav_contact_pane_g4

0xd358,	// (0x0001c176) cell_myfav_contact_pane_g5_ParamLimits

0xd358,	// (0x0001c176) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0001e77d) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0001e77d) cell_myfav_contact_pane_g

0x60a3,	// (0x00014ec1) main_myfav_hc_pane_g3_ParamLimits

0x60a3,	// (0x00014ec1) main_myfav_hc_pane_g3

0x03a9,	// (0x0000f1c7) popup_adpt_find_window

0x60fa,	// (0x00014f18) afind_page_pane_ParamLimits

0x60fa,	// (0x00014f18) afind_page_pane

0x610f,	// (0x00014f2d) aid_size_cell_afind_ParamLimits

0x610f,	// (0x00014f2d) aid_size_cell_afind

0x612d,	// (0x00014f4b) bg_popup_sub_pane_cp09_ParamLimits

0x612d,	// (0x00014f4b) bg_popup_sub_pane_cp09

0x613a,	// (0x00014f58) find_pane_cp01_ParamLimits

0x613a,	// (0x00014f58) find_pane_cp01

0xd364,	// (0x0001c182) grid_afind_control_pane_ParamLimits

0xd364,	// (0x0001c182) grid_afind_control_pane

0x6147,	// (0x00014f65) grid_afind_pane_ParamLimits

0x6147,	// (0x00014f65) grid_afind_pane

0x6169,	// (0x00014f87) cell_afind_pane_ParamLimits

0x6169,	// (0x00014f87) cell_afind_pane

0xc453,	// (0x0001b271) afind_page_pane_g1

0x61ca,	// (0x00014fe8) afind_page_pane_g2

0x61d3,	// (0x00014ff1) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0001e788) afind_page_pane_g

0x61dc,	// (0x00014ffa) afind_page_pane_t1

0xd378,	// (0x0001c196) cell_afind_grid_control_pane_ParamLimits

0xd378,	// (0x0001c196) cell_afind_grid_control_pane

0xcfc4,	// (0x0001bde2) bg_button_pane_cp69_ParamLimits

0xcfc4,	// (0x0001bde2) bg_button_pane_cp69

0x61fc,	// (0x0001501a) cell_afind_pane_g1_ParamLimits

0x61fc,	// (0x0001501a) cell_afind_pane_g1

0x6209,	// (0x00015027) cell_afind_pane_t1_ParamLimits

0x6209,	// (0x00015027) cell_afind_pane_t1

0x9fb1,	// (0x00018dcf) bg_button_pane_cp72

0xd387,	// (0x0001c1a5) cell_afind_grid_control_pane_g1

0x3164,	// (0x00011f82) aid_image_placing_area_ParamLimits

0x3164,	// (0x00011f82) aid_image_placing_area

0xca59,	// (0x0001b877) field_vitu_entry_pane_g1_ParamLimits

0xca59,	// (0x0001b877) field_vitu_entry_pane_g1

0xca65,	// (0x0001b883) field_vitu_entry_pane_g2_ParamLimits

0xca65,	// (0x0001b883) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0001e639) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0001e639) field_vitu_entry_pane_g

0x52c8,	// (0x000140e6) cell_vitu_itu_pane_g1_ParamLimits

0x530a,	// (0x00014128) cell_vitu_itu_pane_t3_ParamLimits

0x530a,	// (0x00014128) cell_vitu_itu_pane_t3

0xcf74,	// (0x0001bd92) mp4_progress_pane_t1_ParamLimits

0xcf8d,	// (0x0001bdab) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0001e6ce) mp4_progress_pane_t_ParamLimits

0xcfa6,	// (0x0001bdc4) mup_progress_pane_cp04_ParamLimits

0x60e6,	// (0x00014f04) main_myfav_hc_pane_t5_ParamLimits

0x60e6,	// (0x00014f04) main_myfav_hc_pane_t5

0x9570,	// (0x0001838e) aid_zoom_text_primary

0x03a9,	// (0x0000f1c7) popup_adpt_find_window_ParamLimits

0x95ba,	// (0x000183d8) main_cam_set_pane

0x5a29,	// (0x00014847) cam4_zoom_pane_ParamLimits

0x5a29,	// (0x00014847) cam4_zoom_pane

0x621b,	// (0x00015039) main_cam_set_pane_g1_ParamLimits

0x621b,	// (0x00015039) main_cam_set_pane_g1

0x6229,	// (0x00015047) main_cam_set_pane_g2_ParamLimits

0x6229,	// (0x00015047) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0001e78f) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0001e78f) main_cam_set_pane_g

0x624a,	// (0x00015068) main_cam_set_pane_t1_ParamLimits

0x624a,	// (0x00015068) main_cam_set_pane_t1

0x6265,	// (0x00015083) main_cset_listscroll_pane_ParamLimits

0x6265,	// (0x00015083) main_cset_listscroll_pane

0x6285,	// (0x000150a3) main_cset_slider_pane_ParamLimits

0x6285,	// (0x000150a3) main_cset_slider_pane

0xd398,	// (0x0001c1b6) main_cset_list_pane_ParamLimits

0xd398,	// (0x0001c1b6) main_cset_list_pane

0xd3a8,	// (0x0001c1c6) scroll_pane_cp028

0x62ab,	// (0x000150c9) aid_area_touch_slider

0x62c7,	// (0x000150e5) cset_slider_pane

0x62f1,	// (0x0001510f) main_cset_slider_pane_g1

0x6306,	// (0x00015124) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0001e794) main_cset_slider_pane_g

0xd3e1,	// (0x0001c1ff) main_cset_slider_pane_t1

0x63c2,	// (0x000151e0) main_cset_slider_pane_t2

0x63dc,	// (0x000151fa) main_cset_slider_pane_t3

0x63f6,	// (0x00015214) main_cset_slider_pane_t4

0x6410,	// (0x0001522e) main_cset_slider_pane_t5

0x642a,	// (0x00015248) main_cset_slider_pane_t6

0x643f,	// (0x0001525d) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0001e7b9) main_cset_slider_pane_t

0x6543,	// (0x00015361) cset_list_set_pane_ParamLimits

0x6543,	// (0x00015361) cset_list_set_pane

0x6555,	// (0x00015373) aid_position_infowindow_above

0x655d,	// (0x0001537b) aid_position_infowindow_below

0xd481,	// (0x0001c29f) cset_list_set_pane_g1_ParamLimits

0xd481,	// (0x0001c29f) cset_list_set_pane_g1

0xd48d,	// (0x0001c2ab) cset_list_set_pane_g3_ParamLimits

0xd48d,	// (0x0001c2ab) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0001e7d8) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0001e7d8) cset_list_set_pane_g

0xd49c,	// (0x0001c2ba) cset_list_set_pane_t1_ParamLimits

0xd49c,	// (0x0001c2ba) cset_list_set_pane_t1

0x95ba,	// (0x000183d8) list_highlight_pane_cp021_ParamLimits

0x95ba,	// (0x000183d8) list_highlight_pane_cp021

0xabbc,	// (0x000199da) cset_slider_pane_g1

0xabce,	// (0x000199ec) cset_slider_pane_g2

0xabc5,	// (0x000199e3) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0001e7dd) cset_slider_pane_g

0xd4b1,	// (0x0001c2cf) aid_area_touch_cam4_zoom

0xd4b9,	// (0x0001c2d7) cam4_zoom_cont_pane

0xd4c1,	// (0x0001c2df) cam4_zoom_pane_g1

0xd4c9,	// (0x0001c2e7) cam4_zoom_pane_g2

0x6565,	// (0x00015383) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0001e7e4) cam4_zoom_pane_g

0xd4d1,	// (0x0001c2ef) cam4_zoom_cont_pane_g1

0xd4da,	// (0x0001c2f8) cam4_zoom_cont_pane_g2

0xd4e3,	// (0x0001c301) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0001e7eb) cam4_zoom_cont_pane_g

0x58e9,	// (0x00014707) call4_image_pane_ParamLimits

0x58e9,	// (0x00014707) call4_image_pane

0xd002,	// (0x0001be20) call4_windows_conf_pane_ParamLimits

0xd043,	// (0x0001be61) popup_call4_audio_in_window_ParamLimits

0xd043,	// (0x0001be61) popup_call4_audio_in_window

0x954a,	// (0x00018368) bg_popup_call2_act_pane_cp02

0xd0b9,	// (0x0001bed7) call4_list_conf_pane

0xc453,	// (0x0001b271) call4_image_pane_g1

0xc453,	// (0x0001b271) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x0001e4ff) call4_image_pane_g

0xd4ec,	// (0x0001c30a) list_single_graphic_popup_conf4_pane_ParamLimits

0xd4ec,	// (0x0001c30a) list_single_graphic_popup_conf4_pane

0x954a,	// (0x00018368) list_highlight_pane_cp022

0xd4ff,	// (0x0001c31d) list_single_graphic_popup_conf4_pane_g1

0xa773,	// (0x00019591) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0001e7f2) list_single_graphic_popup_conf4_pane_g

0xd507,	// (0x0001c325) list_single_graphic_popup_conf4_pane_t1

0x157f,	// (0x0001039d) popup_vtel_slider_window_ParamLimits

0x157f,	// (0x0001039d) popup_vtel_slider_window

0xcfb2,	// (0x0001bdd0) dialer2_ne_pane_t2_ParamLimits

0xcfb2,	// (0x0001bdd0) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0001e6d3) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0001e6d3) dialer2_ne_pane_t

0xc238,	// (0x0001b056) bg_popup_sub_pane_cp010_ParamLimits

0xc238,	// (0x0001b056) bg_popup_sub_pane_cp010

0x656d,	// (0x0001538b) popup_vtel_slider_window_g1_ParamLimits

0x656d,	// (0x0001538b) popup_vtel_slider_window_g1

0x6580,	// (0x0001539e) popup_vtel_slider_window_g2_ParamLimits

0x6580,	// (0x0001539e) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0001e7f7) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0001e7f7) popup_vtel_slider_window_g

0x65d6,	// (0x000153f4) vtel_slider_pane_ParamLimits

0x65d6,	// (0x000153f4) vtel_slider_pane

0x65f8,	// (0x00015416) vtel_slider_pane_g1_ParamLimits

0x65f8,	// (0x00015416) vtel_slider_pane_g1

0x660c,	// (0x0001542a) vtel_slider_pane_g2_ParamLimits

0x660c,	// (0x0001542a) vtel_slider_pane_g2

0x6624,	// (0x00015442) vtel_slider_pane_g3_ParamLimits

0x6624,	// (0x00015442) vtel_slider_pane_g3

0x65f8,	// (0x00015416) vtel_slider_pane_g4_ParamLimits

0x65f8,	// (0x00015416) vtel_slider_pane_g4

0x663a,	// (0x00015458) vtel_slider_pane_g5_ParamLimits

0x663a,	// (0x00015458) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0001e800) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0001e800) vtel_slider_pane_g

0x95ba,	// (0x000183d8) main_gallery2_pane

0x5c29,	// (0x00014a47) aid_size_row_itut2_dropdow_list_ParamLimits

0x5c29,	// (0x00014a47) aid_size_row_itut2_dropdow_list

0x5cb5,	// (0x00014ad3) grid_vitu2_function_top_pane_ParamLimits

0x5cb5,	// (0x00014ad3) grid_vitu2_function_top_pane

0x5d1a,	// (0x00014b38) popup_vitu2_dropdown_list_window_ParamLimits

0x5d1a,	// (0x00014b38) popup_vitu2_dropdown_list_window

0x5d43,	// (0x00014b61) popup_vitu2_match_list_window

0x665e,	// (0x0001547c) cell_vitu2_function_top_pane_ParamLimits

0x665e,	// (0x0001547c) cell_vitu2_function_top_pane

0x667c,	// (0x0001549a) cell_vitu2_function_top_pane_cp01_ParamLimits

0x667c,	// (0x0001549a) cell_vitu2_function_top_pane_cp01

0x669a,	// (0x000154b8) cell_vitu2_function_top_wide_pane_ParamLimits

0x669a,	// (0x000154b8) cell_vitu2_function_top_wide_pane

0x95ba,	// (0x000183d8) bg_button_pane_cp012

0x66b8,	// (0x000154d6) cell_vitu2_function_top_pane_g1

0xd51d,	// (0x0001c33b) bg_button_pane_cp013_ParamLimits

0xd51d,	// (0x0001c33b) bg_button_pane_cp013

0x66cc,	// (0x000154ea) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x66cc,	// (0x000154ea) cell_vitu2_function_top_wide_pane_g1

0x95ba,	// (0x000183d8) bg_popup_sub_pane_cp20

0x66e4,	// (0x00015502) list_vitu2_match_list_pane

0xd258,	// (0x0001c076) bg_popup_sub_pane_cp20_g1

0xd260,	// (0x0001c07e) bg_popup_sub_pane_cp20_g2

0xa1b8,	// (0x00018fd6) bg_popup_sub_pane_cp20_g3

0xd268,	// (0x0001c086) bg_popup_sub_pane_cp20_g4

0xa198,	// (0x00018fb6) bg_popup_sub_pane_cp20_g5

0xd539,	// (0x0001c357) bg_popup_sub_pane_cp20_g6

0xd278,	// (0x0001c096) bg_popup_sub_pane_cp20_g7

0xd280,	// (0x0001c09e) bg_popup_sub_pane_cp20_g8

0xd288,	// (0x0001c0a6) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0001e80b) bg_popup_sub_pane_cp20_g

0xd541,	// (0x0001c35f) list_vitu2_match_list_item_pane_ParamLimits

0xd541,	// (0x0001c35f) list_vitu2_match_list_item_pane

0xd553,	// (0x0001c371) list_vitu2_match_list_item_pane_t1

0x954a,	// (0x00018368) bg_popup_sub_pane_cp21

0xa628,	// (0x00019446) grid_vitu2_dropdown_list_pane

0x674c,	// (0x0001556a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x674c,	// (0x0001556a) cell_vitu2_dropdown_list_char_pane

0x676d,	// (0x0001558b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x676d,	// (0x0001558b) cell_vitu2_dropdown_list_ctrl_pane

0xd561,	// (0x0001c37f) cell_vitu2_dropdown_list_char_pane_g1

0xd56a,	// (0x0001c388) cell_vitu2_dropdown_list_char_pane_g2

0xd573,	// (0x0001c391) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0001e828) cell_vitu2_dropdown_list_char_pane_g

0x6799,	// (0x000155b7) cell_vitu2_dropdown_list_char_pane_t1

0x67a7,	// (0x000155c5) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x67a7,	// (0x000155c5) cell_vitu2_dropdown_list_ctrl_pane_g1

0x67b4,	// (0x000155d2) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x67b4,	// (0x000155d2) cell_vitu2_dropdown_list_ctrl_pane_g2

0x67c1,	// (0x000155df) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x67c1,	// (0x000155df) cell_vitu2_dropdown_list_ctrl_pane_g3

0x67ce,	// (0x000155ec) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x67ce,	// (0x000155ec) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc6bf,	// (0x0001b4dd) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc6bf,	// (0x0001b4dd) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0001e82f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0001e82f) cell_vitu2_dropdown_list_ctrl_pane_g

0x67ea,	// (0x00015608) aid_size_cell_gallery2_ParamLimits

0x67ea,	// (0x00015608) aid_size_cell_gallery2

0x6808,	// (0x00015626) grid_gallery2_pane_ParamLimits

0x6808,	// (0x00015626) grid_gallery2_pane

0x6822,	// (0x00015640) scroll_pane_cp029_ParamLimits

0x6822,	// (0x00015640) scroll_pane_cp029

0x682e,	// (0x0001564c) cell_gallery2_pane_ParamLimits

0x682e,	// (0x0001564c) cell_gallery2_pane

0xd57c,	// (0x0001c39a) cell_gallery2_pane_g2

0x6889,	// (0x000156a7) cell_gallery2_pane_g3

0xd584,	// (0x0001c3a2) cell_gallery2_pane_g4

0xd58c,	// (0x0001c3aa) cell_gallery2_pane_g5

0xaa66,	// (0x00019884) grid_highlight_pane_cp10

0x5d43,	// (0x00014b61) popup_vitu2_match_list_window_ParamLimits

0x5d5a,	// (0x00014b78) popup_vitu2_query_window_ParamLimits

0x5d5a,	// (0x00014b78) popup_vitu2_query_window

0x954a,	// (0x00018368) bg_vitu2_candi_button_pane

0xd561,	// (0x0001c37f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd56a,	// (0x0001c388) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd573,	// (0x0001c391) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6891,	// (0x000156af) bg_button_pane_cp015

0x68a3,	// (0x000156c1) bg_button_pane_cp016

0x68b6,	// (0x000156d4) bg_button_pane_cp017

0xbf38,	// (0x0001ad56) bg_popup_sub_pane_cp22

0xd594,	// (0x0001c3b2) popup_vitu2_query_window_g1

0x68fb,	// (0x00015719) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0001e83a) popup_vitu2_query_window_g

0x691a,	// (0x00015738) popup_vitu2_query_window_t1_ParamLimits

0x691a,	// (0x00015738) popup_vitu2_query_window_t1

0x694f,	// (0x0001576d) popup_vitu2_query_window_t2_ParamLimits

0x694f,	// (0x0001576d) popup_vitu2_query_window_t2

0x6961,	// (0x0001577f) popup_vitu2_query_window_t3_ParamLimits

0x6961,	// (0x0001577f) popup_vitu2_query_window_t3

0x6989,	// (0x000157a7) popup_vitu2_query_window_t4_ParamLimits

0x6989,	// (0x000157a7) popup_vitu2_query_window_t4

0x69aa,	// (0x000157c8) popup_vitu2_query_window_t5_ParamLimits

0x69aa,	// (0x000157c8) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0001e841) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0001e841) popup_vitu2_query_window_t

0xd390,	// (0x0001c1ae) main_cset_text_pane

0x62ab,	// (0x000150c9) aid_area_touch_slider_ParamLimits

0x62c7,	// (0x000150e5) cset_slider_pane_ParamLimits

0x62f1,	// (0x0001510f) main_cset_slider_pane_g1_ParamLimits

0x6306,	// (0x00015124) main_cset_slider_pane_g2_ParamLimits

0xd3b1,	// (0x0001c1cf) main_cset_slider_pane_g3_ParamLimits

0xd3b1,	// (0x0001c1cf) main_cset_slider_pane_g3

0x631b,	// (0x00015139) main_cset_slider_pane_g4_ParamLimits

0x631b,	// (0x00015139) main_cset_slider_pane_g4

0x632a,	// (0x00015148) main_cset_slider_pane_g5_ParamLimits

0x632a,	// (0x00015148) main_cset_slider_pane_g5

0x6336,	// (0x00015154) main_cset_slider_pane_g6_ParamLimits

0x6336,	// (0x00015154) main_cset_slider_pane_g6

0xf976,	// (0x0001e794) main_cset_slider_pane_g_ParamLimits

0xd3e1,	// (0x0001c1ff) main_cset_slider_pane_t1_ParamLimits

0x63c2,	// (0x000151e0) main_cset_slider_pane_t2_ParamLimits

0x63dc,	// (0x000151fa) main_cset_slider_pane_t3_ParamLimits

0x63f6,	// (0x00015214) main_cset_slider_pane_t4_ParamLimits

0x6410,	// (0x0001522e) main_cset_slider_pane_t5_ParamLimits

0x642a,	// (0x00015248) main_cset_slider_pane_t6_ParamLimits

0x643f,	// (0x0001525d) main_cset_slider_pane_t7_ParamLimits

0x6469,	// (0x00015287) main_cset_slider_pane_t8_ParamLimits

0x6469,	// (0x00015287) main_cset_slider_pane_t8

0x6491,	// (0x000152af) main_cset_slider_pane_t9_ParamLimits

0x6491,	// (0x000152af) main_cset_slider_pane_t9

0x64b9,	// (0x000152d7) main_cset_slider_pane_t10_ParamLimits

0x64b9,	// (0x000152d7) main_cset_slider_pane_t10

0x64e1,	// (0x000152ff) main_cset_slider_pane_t11_ParamLimits

0x64e1,	// (0x000152ff) main_cset_slider_pane_t11

0x6509,	// (0x00015327) main_cset_slider_pane_t12_ParamLimits

0x6509,	// (0x00015327) main_cset_slider_pane_t12

0x6526,	// (0x00015344) main_cset_slider_pane_t13_ParamLimits

0x6526,	// (0x00015344) main_cset_slider_pane_t13

0xf99b,	// (0x0001e7b9) main_cset_slider_pane_t_ParamLimits

0x954a,	// (0x00018368) bg_popup_sub_pane_cp011

0xd5a0,	// (0x0001c3be) main_cset_text_pane_g1

0xd5a8,	// (0x0001c3c6) main_cset_text_pane_t1

0xd5b6,	// (0x0001c3d4) main_cset_text_pane_t2

0xd5c4,	// (0x0001c3e2) main_cset_text_pane_t3

0xd5d2,	// (0x0001c3f0) main_cset_text_pane_t4

0xd5e0,	// (0x0001c3fe) main_cset_text_pane_t5

0xd5ee,	// (0x0001c40c) main_cset_text_pane_t6

0xd5fc,	// (0x0001c41a) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0001e850) main_cset_text_pane_t

0x954a,	// (0x00018368) main_cam4_burst_pane

0x954a,	// (0x00018368) main_cam5_pane

0x61ea,	// (0x00015008) bg_button_pane_cp019

0x61f3,	// (0x00015011) bg_button_pane_cp020

0xd3bd,	// (0x0001c1db) main_cset_slider_pane_g7_ParamLimits

0xd3bd,	// (0x0001c1db) main_cset_slider_pane_g7

0xd3c9,	// (0x0001c1e7) main_cset_slider_pane_g8_ParamLimits

0xd3c9,	// (0x0001c1e7) main_cset_slider_pane_g8

0x634a,	// (0x00015168) main_cset_slider_pane_g9_ParamLimits

0x634a,	// (0x00015168) main_cset_slider_pane_g9

0x6356,	// (0x00015174) main_cset_slider_pane_g10_ParamLimits

0x6356,	// (0x00015174) main_cset_slider_pane_g10

0x6362,	// (0x00015180) main_cset_slider_pane_g11_ParamLimits

0x6362,	// (0x00015180) main_cset_slider_pane_g11

0x636e,	// (0x0001518c) main_cset_slider_pane_g12_ParamLimits

0x636e,	// (0x0001518c) main_cset_slider_pane_g12

0x637a,	// (0x00015198) main_cset_slider_pane_g13_ParamLimits

0x637a,	// (0x00015198) main_cset_slider_pane_g13

0x6386,	// (0x000151a4) main_cset_slider_pane_g14_ParamLimits

0x6386,	// (0x000151a4) main_cset_slider_pane_g14

0x6392,	// (0x000151b0) main_cset_slider_pane_g15_ParamLimits

0x6392,	// (0x000151b0) main_cset_slider_pane_g15

0xd40f,	// (0x0001c22d) main_cset_slider_pane_t14_ParamLimits

0xd40f,	// (0x0001c22d) main_cset_slider_pane_t14

0xd448,	// (0x0001c266) main_cset_slider_pane_t15_ParamLimits

0xd448,	// (0x0001c266) main_cset_slider_pane_t15

0x6a21,	// (0x0001583f) aid_cam4_burst_size_cell_ParamLimits

0x6a21,	// (0x0001583f) aid_cam4_burst_size_cell

0x6a41,	// (0x0001585f) grid_cam4_burst_pane_ParamLimits

0x6a41,	// (0x0001585f) grid_cam4_burst_pane

0x6a79,	// (0x00015897) linegrid_cam4_burst_pane_ParamLimits

0x6a79,	// (0x00015897) linegrid_cam4_burst_pane

0xd60a,	// (0x0001c428) scroll_pane_cp30_ParamLimits

0xd60a,	// (0x0001c428) scroll_pane_cp30

0x6a9d,	// (0x000158bb) cell_cam4_burst_pane_ParamLimits

0x6a9d,	// (0x000158bb) cell_cam4_burst_pane

0xd616,	// (0x0001c434) linegrid_cam4_burst_pane_g1_ParamLimits

0xd616,	// (0x0001c434) linegrid_cam4_burst_pane_g1

0x6aea,	// (0x00015908) linegrid_cam4_burst_pane_g2_ParamLimits

0x6aea,	// (0x00015908) linegrid_cam4_burst_pane_g2

0xd623,	// (0x0001c441) linegrid_cam4_burst_pane_g3_ParamLimits

0xd623,	// (0x0001c441) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0001e85f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0001e85f) linegrid_cam4_burst_pane_g

0x6afb,	// (0x00015919) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6afb,	// (0x00015919) linegrid_cam4_burst_pane_g3_copy1

0xd630,	// (0x0001c44e) linegrid_cam4_burst_pane_g4_ParamLimits

0xd630,	// (0x0001c44e) linegrid_cam4_burst_pane_g4

0x6b15,	// (0x00015933) linegrid_cam4_burst_pane_g5_ParamLimits

0x6b15,	// (0x00015933) linegrid_cam4_burst_pane_g5

0x6b26,	// (0x00015944) linegrid_cam4_burst_pane_g6_ParamLimits

0x6b26,	// (0x00015944) linegrid_cam4_burst_pane_g6

0xd63d,	// (0x0001c45b) linegrid_cam4_burst_pane_g7_ParamLimits

0xd63d,	// (0x0001c45b) linegrid_cam4_burst_pane_g7

0x6b3d,	// (0x0001595b) cell_cam4_burst_pane_g1

0xd656,	// (0x0001c474) main_cam5_pane_t1_ParamLimits

0xd656,	// (0x0001c474) main_cam5_pane_t1

0xd668,	// (0x0001c486) main_cam5_pane_t2_ParamLimits

0xd668,	// (0x0001c486) main_cam5_pane_t2

0xd67a,	// (0x0001c498) main_cam5_pane_t3_ParamLimits

0xd67a,	// (0x0001c498) main_cam5_pane_t3

0xd68c,	// (0x0001c4aa) main_cam5_pane_t4_ParamLimits

0xd68c,	// (0x0001c4aa) main_cam5_pane_t4

0xd6a4,	// (0x0001c4c2) main_cam5_pane_t5_ParamLimits

0xd6a4,	// (0x0001c4c2) main_cam5_pane_t5

0xd6b8,	// (0x0001c4d6) main_cam5_pane_t6_ParamLimits

0xd6b8,	// (0x0001c4d6) main_cam5_pane_t6

0xd6cc,	// (0x0001c4ea) main_cam5_pane_t7_ParamLimits

0xd6cc,	// (0x0001c4ea) main_cam5_pane_t7

0xd6de,	// (0x0001c4fc) main_cam5_pane_t8_ParamLimits

0xd6de,	// (0x0001c4fc) main_cam5_pane_t8

0xd6fa,	// (0x0001c518) main_cam5_pane_t9_ParamLimits

0xd6fa,	// (0x0001c518) main_cam5_pane_t9

0xd70c,	// (0x0001c52a) main_cam5_pane_t10_ParamLimits

0xd70c,	// (0x0001c52a) main_cam5_pane_t10

0xd71e,	// (0x0001c53c) main_cam5_pane_t11_ParamLimits

0xd71e,	// (0x0001c53c) main_cam5_pane_t11

0xd730,	// (0x0001c54e) main_cam5_pane_t12_ParamLimits

0xd730,	// (0x0001c54e) main_cam5_pane_t12

0xd745,	// (0x0001c563) main_cam5_pane_t13_ParamLimits

0xd745,	// (0x0001c563) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0001e86b) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0001e86b) main_cam5_pane_t

0x042b,	// (0x0000f249) popup_scut_keymap_window_ParamLimits

0x042b,	// (0x0000f249) popup_scut_keymap_window

0x6b50,	// (0x0001596e) aid_size_cell_brow_shortcut

0xaa66,	// (0x00019884) bg_popup_window_pane_cp010

0x6b5c,	// (0x0001597a) grid_scut_pane

0x6b68,	// (0x00015986) cell_scut_pane_ParamLimits

0x6b68,	// (0x00015986) cell_scut_pane

0x6b7f,	// (0x0001599d) cell_scut_pane_g1

0xd762,	// (0x0001c580) cell_scut_pane_t1

0xd771,	// (0x0001c58f) cell_scut_pane_t2

0x6b88,	// (0x000159a6) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0001e886) cell_scut_pane_t

0x47bc,	// (0x000135da) main_mup3_pane_g8_ParamLimits

0x47bc,	// (0x000135da) main_mup3_pane_g8

0x5c41,	// (0x00014a5f) area_vitu2_query_pane_ParamLimits

0x5c41,	// (0x00014a5f) area_vitu2_query_pane

0x68c9,	// (0x000156e7) input_focus_pane_cp08

0xd780,	// (0x0001c59e) area_vitu2_query_pane_g1

0x6b96,	// (0x000159b4) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0001e88d) area_vitu2_query_pane_g

0x6ba7,	// (0x000159c5) area_vitu2_query_pane_t1_ParamLimits

0x6ba7,	// (0x000159c5) area_vitu2_query_pane_t1

0x6bbb,	// (0x000159d9) area_vitu2_query_pane_t2_ParamLimits

0x6bbb,	// (0x000159d9) area_vitu2_query_pane_t2

0x6bcf,	// (0x000159ed) area_vitu2_query_pane_t3_ParamLimits

0x6bcf,	// (0x000159ed) area_vitu2_query_pane_t3

0xd78c,	// (0x0001c5aa) area_vitu2_query_pane_t4_ParamLimits

0xd78c,	// (0x0001c5aa) area_vitu2_query_pane_t4

0xd7b4,	// (0x0001c5d2) area_vitu2_query_pane_t5_ParamLimits

0xd7b4,	// (0x0001c5d2) area_vitu2_query_pane_t5

0xd7dc,	// (0x0001c5fa) area_vitu2_query_pane_t6_ParamLimits

0xd7dc,	// (0x0001c5fa) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0001e892) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0001e892) area_vitu2_query_pane_t

0x6bf7,	// (0x00015a15) bg_button_pane_cp018

0x6c05,	// (0x00015a23) bg_button_pane_cp021

0x6c11,	// (0x00015a2f) bg_button_pane_cp022

0x6c20,	// (0x00015a3e) input_focus_pane_cp09

0xa8af,	// (0x000196cd) aid_size_touch_mv_arrow_left

0xa8d8,	// (0x000196f6) aid_size_touch_mv_arrow_right

0x63aa,	// (0x000151c8) main_cset_slider_pane_g16_ParamLimits

0x63aa,	// (0x000151c8) main_cset_slider_pane_g16

0x63b6,	// (0x000151d4) main_cset_slider_pane_g17_ParamLimits

0x63b6,	// (0x000151d4) main_cset_slider_pane_g17

0x6b3d,	// (0x0001595b) cell_cam4_burst_pane_g1_ParamLimits

0x954a,	// (0x00018368) compa_mode_pane

0x6590,	// (0x000153ae) popup_vtel_slider_window_g3_ParamLimits

0x6590,	// (0x000153ae) popup_vtel_slider_window_g3

0x65a7,	// (0x000153c5) popup_vtel_slider_window_g4_ParamLimits

0x65a7,	// (0x000153c5) popup_vtel_slider_window_g4

0x65be,	// (0x000153dc) popup_vtel_slider_window_t1_ParamLimits

0x65be,	// (0x000153dc) popup_vtel_slider_window_t1

0x954a,	// (0x00018368) main_cl_pane

0xbf60,	// (0x0001ad7e) popup_imed_adjust2_window_ParamLimits

0xbf38,	// (0x0001ad56) bg_tb_trans_pane_cp05_ParamLimits

0xc98e,	// (0x0001b7ac) popup_imed_adjust2_window_g1_ParamLimits

0xc99d,	// (0x0001b7bb) popup_imed_adjust2_window_g2_ParamLimits

0xc99d,	// (0x0001b7bb) popup_imed_adjust2_window_g2

0xc9a9,	// (0x0001b7c7) popup_imed_adjust2_window_g3_ParamLimits

0xc9a9,	// (0x0001b7c7) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0001e5fd) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0001e5fd) popup_imed_adjust2_window_g

0xc9b5,	// (0x0001b7d3) popup_imed_adjust2_window_t1_ParamLimits

0xc9cd,	// (0x0001b7eb) slider_imed_adjust_pane_ParamLimits

0xc9e1,	// (0x0001b7ff) slider_imed_adjust_pane_g1_ParamLimits

0xc9f1,	// (0x0001b80f) slider_imed_adjust_pane_g2_ParamLimits

0xca01,	// (0x0001b81f) slider_imed_adjust_pane_g3_ParamLimits

0xca12,	// (0x0001b830) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0001e604) slider_imed_adjust_pane_g_ParamLimits

0x59ca,	// (0x000147e8) aid_touch_area_cam4_ParamLimits

0x59ca,	// (0x000147e8) aid_touch_area_cam4

0xd0fd,	// (0x0001bf1b) battery_pane_cp01

0x5a99,	// (0x000148b7) main_camera4_pane_g6_ParamLimits

0x5a99,	// (0x000148b7) main_camera4_pane_g6

0x5ac3,	// (0x000148e1) main_camera4_pane_t2_ParamLimits

0x5ac3,	// (0x000148e1) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0001e707) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0001e707) main_camera4_pane_t

0x5af8,	// (0x00014916) aid_touch_area_vid4_ParamLimits

0x5af8,	// (0x00014916) aid_touch_area_vid4

0x5b4c,	// (0x0001496a) main_video4_pane_g5_ParamLimits

0x5b4c,	// (0x0001496a) main_video4_pane_g5

0x5b71,	// (0x0001498f) vid4_progress_pane_ParamLimits

0x5b71,	// (0x0001498f) vid4_progress_pane

0xd3d5,	// (0x0001c1f3) main_cset_slider_pane_g18_ParamLimits

0xd3d5,	// (0x0001c1f3) main_cset_slider_pane_g18

0xd64a,	// (0x0001c468) cell_cam4_burst_pane_g2_ParamLimits

0xd64a,	// (0x0001c468) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0001e866) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0001e866) cell_cam4_burst_pane_g

0x9d1d,	// (0x00018b3b) bg_cl_pane_ParamLimits

0x9d1d,	// (0x00018b3b) bg_cl_pane

0x6c2f,	// (0x00015a4d) cl_header_pane_ParamLimits

0x6c2f,	// (0x00015a4d) cl_header_pane

0x6c43,	// (0x00015a61) cl_listscroll_pane_ParamLimits

0x6c43,	// (0x00015a61) cl_listscroll_pane

0xd828,	// (0x0001c646) bg_cl_pane_g1

0xd830,	// (0x0001c64e) bg_cl_pane_g2

0xd838,	// (0x0001c656) bg_cl_pane_g3

0xd840,	// (0x0001c65e) bg_cl_pane_g4

0xd848,	// (0x0001c666) bg_cl_pane_g5

0xd850,	// (0x0001c66e) bg_cl_pane_g6

0xd858,	// (0x0001c676) bg_cl_pane_g7

0xd860,	// (0x0001c67e) bg_cl_pane_g8

0xd868,	// (0x0001c686) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0001e8a1) bg_cl_pane_g

0x6c53,	// (0x00015a71) aid_height_cl_leading_ParamLimits

0x6c53,	// (0x00015a71) aid_height_cl_leading

0x6c5f,	// (0x00015a7d) aid_height_cl_text_ParamLimits

0x6c5f,	// (0x00015a7d) aid_height_cl_text

0x95ba,	// (0x000183d8) bg_cl_header_pane_ParamLimits

0x95ba,	// (0x000183d8) bg_cl_header_pane

0x6c7e,	// (0x00015a9c) cl_header_pane_g1_ParamLimits

0x6c7e,	// (0x00015a9c) cl_header_pane_g1

0x6c94,	// (0x00015ab2) cl_header_pane_t1_ParamLimits

0x6c94,	// (0x00015ab2) cl_header_pane_t1

0xd870,	// (0x0001c68e) cl_list_pane

0xd3a8,	// (0x0001c1c6) hc_scroll_pane_cp01

0xa198,	// (0x00018fb6) bg_cl_header_pane_g1

0xd258,	// (0x0001c076) bg_cl_header_pane_g2

0xa1b8,	// (0x00018fd6) bg_cl_header_pane_g3

0xd268,	// (0x0001c086) bg_cl_header_pane_g4

0xd260,	// (0x0001c07e) bg_cl_header_pane_g5

0xd539,	// (0x0001c357) bg_cl_header_pane_g6

0xd280,	// (0x0001c09e) bg_cl_header_pane_g7

0xd288,	// (0x0001c0a6) bg_cl_header_pane_g8

0xd278,	// (0x0001c096) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0001e8b4) bg_cl_header_pane_g

0x6cad,	// (0x00015acb) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6cad,	// (0x00015acb) hc_cl_list_double_graphic_heading_pane

0x6cbe,	// (0x00015adc) hc_cl_list_single_graphic_pane_ParamLimits

0x6cbe,	// (0x00015adc) hc_cl_list_single_graphic_pane

0x6cd4,	// (0x00015af2) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6cd4,	// (0x00015af2) hc_cl_list_single_graphic_pane_g1

0x6ce0,	// (0x00015afe) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6ce0,	// (0x00015afe) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0001e8c7) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0001e8c7) hc_cl_list_single_graphic_pane_g

0x6cf4,	// (0x00015b12) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6cf4,	// (0x00015b12) hc_cl_list_single_graphic_pane_t1

0x6cd4,	// (0x00015af2) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6cd4,	// (0x00015af2) hc_cl_list_double_graphic_heading_pane_g1

0x6d09,	// (0x00015b27) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6d09,	// (0x00015b27) hc_cl_list_double_graphic_heading_pane_g2

0x6d1d,	// (0x00015b3b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6d1d,	// (0x00015b3b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0001e8cc) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0001e8cc) hc_cl_list_double_graphic_heading_pane_g

0x6d31,	// (0x00015b4f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6d31,	// (0x00015b4f) hc_cl_list_double_graphic_heading_pane_t1

0x6d46,	// (0x00015b64) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6d46,	// (0x00015b64) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0001e8d3) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0001e8d3) hc_cl_list_double_graphic_heading_pane_t

0x6d5b,	// (0x00015b79) vid4_progress_pane_g1

0x6d6d,	// (0x00015b8b) vid4_progress_pane_g2

0xacb7,	// (0x00019ad5) vid4_progress_pane_g3

0xd881,	// (0x0001c69f) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0001e8d8) vid4_progress_pane_g

0xd89f,	// (0x0001c6bd) vid4_progress_pane_t1

0xd8b4,	// (0x0001c6d2) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0001e8e3) vid4_progress_pane_t

0xd8df,	// (0x0001c6fd) wait_bar_pane_cp07

0xc246,	// (0x0001b064) blid_firmament_pane_ParamLimits

0xc289,	// (0x0001b0a7) popup_blid_sat_info2_window_g1

0xc2ad,	// (0x0001b0cb) popup_blid_sat_info2_window_t3

0xc2bb,	// (0x0001b0d9) popup_blid_sat_info2_window_t4

0xc2c9,	// (0x0001b0e7) popup_blid_sat_info2_window_t5

0xc2d7,	// (0x0001b0f5) popup_blid_sat_info2_window_t6

0xc2e7,	// (0x0001b105) popup_blid_sat_info2_window_t7

0xc2f5,	// (0x0001b113) popup_blid_sat_info2_window_t8

0xc303,	// (0x0001b121) popup_blid_sat_info2_window_t9

0xc311,	// (0x0001b12f) popup_blid_sat_info2_window_t10

0xc3d3,	// (0x0001b1f1) aid_firma_cardinal_ParamLimits

0xc3e7,	// (0x0001b205) blid_firmament_pane_t1_ParamLimits

0xc3fe,	// (0x0001b21c) blid_firmament_pane_t2_ParamLimits

0xc415,	// (0x0001b233) blid_firmament_pane_t3_ParamLimits

0xc42c,	// (0x0001b24a) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x0001e4f6) blid_firmament_pane_t_ParamLimits

0xc443,	// (0x0001b261) blid_sat_info_pane_ParamLimits

0x95ba,	// (0x000183d8) main_cam_set_pane_ParamLimits

0x5082,	// (0x00013ea0) aid_size_cell_colour_35_ParamLimits

0x50a2,	// (0x00013ec0) aid_size_cell_colour_112_ParamLimits

0x50c2,	// (0x00013ee0) aid_size_cell_effect_ParamLimits

0xbf38,	// (0x0001ad56) bg_tb_trans_pane_cp02_ParamLimits

0xa42e,	// (0x0001924c) heading_imed_pane_ParamLimits

0x50e2,	// (0x00013f00) listscroll_imed_pane_ParamLimits

0xb55e,	// (0x0001a37c) popup_call2_audio_first_window_g5_ParamLimits

0xb55e,	// (0x0001a37c) popup_call2_audio_first_window_g5

0x5675,	// (0x00014493) aid_size_touch_image3_arrow_left_ParamLimits

0x5675,	// (0x00014493) aid_size_touch_image3_arrow_left

0x56a1,	// (0x000144bf) aid_size_touch_image3_arrow_right_ParamLimits

0x56a1,	// (0x000144bf) aid_size_touch_image3_arrow_right

0xd8ca,	// (0x0001c6e8) vid4_progress_pane_t3

0x53f5,	// (0x00014213) main_hwr_training_symbol_option_pane_ParamLimits

0x53f5,	// (0x00014213) main_hwr_training_symbol_option_pane

0xcc7b,	// (0x0001ba99) popup_hwr_training_preview_window_ParamLimits

0xcc7b,	// (0x0001ba99) popup_hwr_training_preview_window

0x5415,	// (0x00014233) hwr_training_navi_pane_g5_ParamLimits

0x5415,	// (0x00014233) hwr_training_navi_pane_g5

0xd246,	// (0x0001c064) popup_char_count_window

0x95ba,	// (0x000183d8) bg_popup_sub_pane_cp20_ParamLimits

0x66e4,	// (0x00015502) list_vitu2_match_list_pane_ParamLimits

0x66f3,	// (0x00015511) vitu2_page_scroll_pane_ParamLimits

0x66f3,	// (0x00015511) vitu2_page_scroll_pane

0xd913,	// (0x0001c731) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd913,	// (0x0001c731) list_single_hwr_training_symbol_option_pane

0xd926,	// (0x0001c744) list_single_hwr_training_symbol_option_pane_g1

0xd92e,	// (0x0001c74c) list_single_hwr_training_symbol_option_pane_t1

0xd93c,	// (0x0001c75a) bg_button_pane_cp023

0xd945,	// (0x0001c763) bg_button_pane_cp024

0x6db7,	// (0x00015bd5) vitu2_page_scroll_pane_g1

0x6dbf,	// (0x00015bdd) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0001e8ea) vitu2_page_scroll_pane_g

0x6dc7,	// (0x00015be5) vitu2_page_scroll_pane_t1

0xd978,	// (0x0001c796) popup_char_count_window_g1

0xd981,	// (0x0001c79f) popup_char_count_window_g2

0xd98a,	// (0x0001c7a8) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0001e8ef) popup_char_count_window_g

0xd993,	// (0x0001c7b1) popup_char_count_window_t1

0x954a,	// (0x00018368) main_vded2_pane

0xc97a,	// (0x0001b798) aid_size_cell_imed_line

0xc984,	// (0x0001b7a2) grid_imed_line_width_pane

0xd1b5,	// (0x0001bfd3) vid4_indicators_pane_g4

0xd9a1,	// (0x0001c7bf) cell_imed_line_width_pane_ParamLimits

0xd9a1,	// (0x0001c7bf) cell_imed_line_width_pane

0xd9b5,	// (0x0001c7d3) cell_imed_line_width_pane_g1

0xd9be,	// (0x0001c7dc) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0001e8f6) cell_imed_line_width_pane_g

0x6dd6,	// (0x00015bf4) main_vded2_pane_g1_ParamLimits

0x6dd6,	// (0x00015bf4) main_vded2_pane_g1

0x6dec,	// (0x00015c0a) main_vded2_pane_g2_ParamLimits

0x6dec,	// (0x00015c0a) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0001e8fb) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0001e8fb) main_vded2_pane_g

0x6dfe,	// (0x00015c1c) vded2_slider_pane_ParamLimits

0x6dfe,	// (0x00015c1c) vded2_slider_pane

0x6e0e,	// (0x00015c2c) aid_size_touch_vded2_end

0x6e18,	// (0x00015c36) aid_size_touch_vded2_playhead

0xd9c6,	// (0x0001c7e4) aid_size_touch_vded2_start

0xd9ce,	// (0x0001c7ec) vded2_slider_bg_pane

0xd9d7,	// (0x0001c7f5) vded2_slider_pane_g1

0xd9e0,	// (0x0001c7fe) vded2_slider_pane_g2

0x6e22,	// (0x00015c40) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0001e900) vded2_slider_pane_g

0xd9e8,	// (0x0001c806) vded2_slider_bg_pane_g1

0xd9f1,	// (0x0001c80f) vded2_slider_bg_pane_g2

0xd9fa,	// (0x0001c818) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0001e907) vded2_slider_bg_pane_g

0x2dd3,	// (0x00011bf1) aid_postcard_touch_down_pane_ParamLimits

0x2dd3,	// (0x00011bf1) aid_postcard_touch_down_pane

0x2de9,	// (0x00011c07) aid_postcard_touch_up_pane_ParamLimits

0x2de9,	// (0x00011c07) aid_postcard_touch_up_pane

0x954a,	// (0x00018368) main_blid2_pane

0xbf46,	// (0x0001ad64) popup_blid2_search_window

0x954a,	// (0x00018368) blid2_gps_pane

0x954a,	// (0x00018368) blid2_navig_pane

0x954a,	// (0x00018368) blid2_search_pane

0x954a,	// (0x00018368) blid2_tripm_pane

0x6e2d,	// (0x00015c4b) blid2_search_pane_g1_ParamLimits

0x6e2d,	// (0x00015c4b) blid2_search_pane_g1

0x6e47,	// (0x00015c65) blid2_search_pane_t1_ParamLimits

0x6e47,	// (0x00015c65) blid2_search_pane_t1

0x6e59,	// (0x00015c77) aid_size_cell_blid2_gps_ParamLimits

0x6e59,	// (0x00015c77) aid_size_cell_blid2_gps

0x6e71,	// (0x00015c8f) blid2_gps_pane_g1_ParamLimits

0x6e71,	// (0x00015c8f) blid2_gps_pane_g1

0x6e85,	// (0x00015ca3) grid_blid2_satellite_pane_ParamLimits

0x6e85,	// (0x00015ca3) grid_blid2_satellite_pane

0x6e9f,	// (0x00015cbd) blid2_navig_pane_g1_ParamLimits

0x6e9f,	// (0x00015cbd) blid2_navig_pane_g1

0x6eab,	// (0x00015cc9) blid2_navig_pane_t1_ParamLimits

0x6eab,	// (0x00015cc9) blid2_navig_pane_t1

0x6ec6,	// (0x00015ce4) blid2_navig_pane_t2_ParamLimits

0x6ec6,	// (0x00015ce4) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0001e90e) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0001e90e) blid2_navig_pane_t

0x6ee1,	// (0x00015cff) blid2_navig_ring_pane_ParamLimits

0x6ee1,	// (0x00015cff) blid2_navig_ring_pane

0x6efa,	// (0x00015d18) blid2_speed_pane_ParamLimits

0x6efa,	// (0x00015d18) blid2_speed_pane

0x6f06,	// (0x00015d24) blid2_tripm_pane_g1_ParamLimits

0x6f06,	// (0x00015d24) blid2_tripm_pane_g1

0x6f1f,	// (0x00015d3d) blid2_tripm_pane_g2_ParamLimits

0x6f1f,	// (0x00015d3d) blid2_tripm_pane_g2

0x6f33,	// (0x00015d51) blid2_tripm_pane_g3_ParamLimits

0x6f33,	// (0x00015d51) blid2_tripm_pane_g3

0x6f47,	// (0x00015d65) blid2_tripm_pane_g4_ParamLimits

0x6f47,	// (0x00015d65) blid2_tripm_pane_g4

0x6f5b,	// (0x00015d79) blid2_tripm_pane_g5_ParamLimits

0x6f5b,	// (0x00015d79) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0001e913) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0001e913) blid2_tripm_pane_g

0x6f81,	// (0x00015d9f) blid2_tripm_pane_t1_ParamLimits

0x6f81,	// (0x00015d9f) blid2_tripm_pane_t1

0x6f9c,	// (0x00015dba) blid2_tripm_pane_t2_ParamLimits

0x6f9c,	// (0x00015dba) blid2_tripm_pane_t2

0x6fb5,	// (0x00015dd3) blid2_tripm_pane_t3_ParamLimits

0x6fb5,	// (0x00015dd3) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0001e920) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0001e920) blid2_tripm_pane_t

0x6ffc,	// (0x00015e1a) cell_blid2_satellite_pane_ParamLimits

0x6ffc,	// (0x00015e1a) cell_blid2_satellite_pane

0x701a,	// (0x00015e38) cell_blid2_satellite_pane_g1

0xda03,	// (0x0001c821) cell_blid2_satellite_pane_t1

0xc453,	// (0x0001b271) blid2_speed_pane_g1

0xda11,	// (0x0001c82f) blid2_speed_pane_t1

0xda1f,	// (0x0001c83d) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0001e929) blid2_speed_pane_t

0xc453,	// (0x0001b271) blid2_navig_ring_pane_g1

0x7023,	// (0x00015e41) blid2_navig_ring_pane_g2

0x702b,	// (0x00015e49) blid2_navig_ring_pane_g3

0x7033,	// (0x00015e51) blid2_navig_ring_pane_g4

0x703b,	// (0x00015e59) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0001e92e) blid2_navig_ring_pane_g

0x954a,	// (0x00018368) bg_popup_window_pane_cp011

0xda2d,	// (0x0001c84b) popup_blid2_search_window_g1

0xda35,	// (0x0001c853) popup_blid2_search_window_t1

0xda43,	// (0x0001c861) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0001e939) popup_blid2_search_window_t

0xa0a7,	// (0x00018ec5) main_browser_pane_g1

0x9d1d,	// (0x00018b3b) main_browser_pane_ParamLimits

0x95ba,	// (0x000183d8) bg_button_pane_cp011_ParamLimits

0x5f86,	// (0x00014da4) cell_vitu2_function_pane_g1_ParamLimits

0xbf38,	// (0x0001ad56) bg_popup_sub_pane_cp22_ParamLimits

0x68c9,	// (0x000156e7) input_focus_pane_cp08_ParamLimits

0x68e0,	// (0x000156fe) popup_vitu2_query_button_pane_ParamLimits

0x68e0,	// (0x000156fe) popup_vitu2_query_button_pane

0x68f1,	// (0x0001570f) popup_vitu2_query_input_button_pane

0xd594,	// (0x0001c3b2) popup_vitu2_query_window_g1_ParamLimits

0x68fb,	// (0x00015719) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0001e83a) popup_vitu2_query_window_g_ParamLimits

0x954a,	// (0x00018368) bg_button_pane_cp026

0x7043,	// (0x00015e61) popup_vitu2_query_input_button_pane_g1

0x954a,	// (0x00018368) bg_button_pane_cp025

0xda51,	// (0x0001c86f) popup_vitu2_query_button_pane_t1

0x4469,	// (0x00013287) main_mp3_pane_t6

0x4477,	// (0x00013295) popup_slider_window_cp01

0xd119,	// (0x0001bf37) cam4_battery_pane

0xd172,	// (0x0001bf90) cam4_battery_pane_cp02

0xd879,	// (0x0001c697) cam4_battery_pane_cp01

0xd879,	// (0x0001c697) cam4_battery_pane_cp03

0xc453,	// (0x0001b271) cam4_battery_pane_g1

0xda5f,	// (0x0001c87d) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0001e93e) cam4_battery_pane_g

0xc31f,	// (0x0001b13d) popup_blid_sat_info2_window_t11

0xa8af,	// (0x000196cd) aid_size_touch_mv_arrow_left_ParamLimits

0xa8d8,	// (0x000196f6) aid_size_touch_mv_arrow_right_ParamLimits

0xa936,	// (0x00019754) navi_pane_g1_ParamLimits

0xa942,	// (0x00019760) navi_pane_g2_ParamLimits

0xa970,	// (0x0001978e) navi_pane_g3_ParamLimits

0xf3ea,	// (0x0001e208) navi_pane_g_ParamLimits

0x2874,	// (0x00011692) navi_pane_mv_t1_ParamLimits

0x50ee,	// (0x00013f0c) grid_imed_effect_pane_ParamLimits

0x147c,	// (0x0001029a) aid_placing_vt_slider_lsc

0x9ff6,	// (0x00018e14) aid_placing_vt_slider_prt

0x95ba,	// (0x000183d8) bg_tb_trans_pane_cp01_ParamLimits

0xc5df,	// (0x0001b3fd) popup_image_details_window_g1_ParamLimits

0xc5f2,	// (0x0001b410) popup_image_details_window_g2_ParamLimits

0xc607,	// (0x0001b425) popup_image_details_window_g3_ParamLimits

0xc607,	// (0x0001b425) popup_image_details_window_g3

0xf71d,	// (0x0001e53b) popup_image_details_window_g_ParamLimits

0xc61b,	// (0x0001b439) popup_image_details_window_t1_ParamLimits

0xc62d,	// (0x0001b44b) popup_image_details_window_t2_ParamLimits

0xc646,	// (0x0001b464) popup_image_details_window_t3_ParamLimits

0xc65a,	// (0x0001b478) popup_image_details_window_t4_ParamLimits

0xc675,	// (0x0001b493) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x0001e542) popup_image_details_window_t_ParamLimits

0x6c6b,	// (0x00015a89) cl_header_name_pane_ParamLimits

0x6c6b,	// (0x00015a89) cl_header_name_pane

0x704b,	// (0x00015e69) cl_header_name_pane_t1_ParamLimits

0x704b,	// (0x00015e69) cl_header_name_pane_t1

0x706c,	// (0x00015e8a) cl_header_name_pane_t2_ParamLimits

0x706c,	// (0x00015e8a) cl_header_name_pane_t2

0x70ae,	// (0x00015ecc) cl_header_name_pane_t3_ParamLimits

0x70ae,	// (0x00015ecc) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0001e943) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0001e943) cl_header_name_pane_t

0xa9ff,	// (0x0001981d) navi_pane_mv_g2_ParamLimits

0xd203,	// (0x0001c021) field_vitu2_entry_pane_g1_ParamLimits

0xd20f,	// (0x0001c02d) field_vitu2_entry_pane_g2_ParamLimits

0xd21b,	// (0x0001c039) field_vitu2_entry_pane_g3_ParamLimits

0xd21b,	// (0x0001c039) field_vitu2_entry_pane_g3

0xf91b,	// (0x0001e739) field_vitu2_entry_pane_g_ParamLimits

0x5e11,	// (0x00014c2f) cell_vitu2_itu_pane_g1_ParamLimits

0x5e21,	// (0x00014c3f) cell_vitu2_itu_pane_g2_ParamLimits

0x5e21,	// (0x00014c3f) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0001e745) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0001e745) cell_vitu2_itu_pane_g

0x95ba,	// (0x000183d8) bg_vkb2_func_pane_cp05_ParamLimits

0x95ba,	// (0x000183d8) bg_vkb2_func_pane_cp05

0x95ba,	// (0x000183d8) bg_vkb2_func_pane_cp03

0x95ba,	// (0x000183d8) bg_vkb2_func_pane_cp04

0x95ba,	// (0x000183d8) bg_vkb2_func_pane_cp10_ParamLimits

0x95ba,	// (0x000183d8) bg_vkb2_func_pane_cp10

0x6c11,	// (0x00015a2f) bg_vkb2_func_pane_cp08

0x6bf7,	// (0x00015a15) bg_vkb2_func_pane_cp06

0x6c05,	// (0x00015a23) bg_vkb2_func_pane_cp07

0xd94e,	// (0x0001c76c) bg_vkb2_func_pane_cp11_ParamLimits

0xd94e,	// (0x0001c76c) bg_vkb2_func_pane_cp11

0xd963,	// (0x0001c781) bg_vkb2_func_pane_cp12_ParamLimits

0xd963,	// (0x0001c781) bg_vkb2_func_pane_cp12

0x954a,	// (0x00018368) bg_vkb2_func_pane_cp09

0xd258,	// (0x0001c076) bg_vkb2_func_pane_g1

0xa1b8,	// (0x00018fd6) bg_vkb2_func_pane_g2

0xd260,	// (0x0001c07e) bg_vkb2_func_pane_g3

0xd268,	// (0x0001c086) bg_vkb2_func_pane_g4

0xd539,	// (0x0001c357) bg_vkb2_func_pane_g5

0xd280,	// (0x0001c09e) bg_vkb2_func_pane_g6

0xd288,	// (0x0001c0a6) bg_vkb2_func_pane_g7

0xd278,	// (0x0001c096) bg_vkb2_func_pane_g8

0xa198,	// (0x00018fb6) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0001e94a) bg_vkb2_func_pane_g

0x6f6f,	// (0x00015d8d) blid2_tripm_pane_g6_ParamLimits

0x6f6f,	// (0x00015d8d) blid2_tripm_pane_g6

0xcf6c,	// (0x0001bd8a) mp4_progress_pane_g1

0x6fe8,	// (0x00015e06) blid2_tripm_values_pane_ParamLimits

0x6fe8,	// (0x00015e06) blid2_tripm_values_pane

0x70df,	// (0x00015efd) blid2_tripm_values_pane_t1

0x70ed,	// (0x00015f0b) blid2_tripm_values_pane_t2

0x70fb,	// (0x00015f19) blid2_tripm_values_pane_t3

0x7109,	// (0x00015f27) blid2_tripm_values_pane_t4

0x7117,	// (0x00015f35) blid2_tripm_values_pane_t5

0x7125,	// (0x00015f43) blid2_tripm_values_pane_t6

0x7133,	// (0x00015f51) blid2_tripm_values_pane_t7

0x7141,	// (0x00015f5f) blid2_tripm_values_pane_t8

0x714f,	// (0x00015f6d) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0001e95d) blid2_tripm_values_pane_t

0x14be,	// (0x000102dc) call_video_pane_t1_ParamLimits

0x14dc,	// (0x000102fa) call_video_pane_t2_ParamLimits

0xf273,	// (0x0001e091) call_video_pane_t_ParamLimits

0x2d51,	// (0x00011b6f) msg_header_pane_g1_ParamLimits

0xac00,	// (0x00019a1e) msg_header_pane_g2_ParamLimits

0xac00,	// (0x00019a1e) msg_header_pane_g2

0x0001,

0xf48d,	// (0x0001e2ab) msg_header_pane_g_ParamLimits

0xf48d,	// (0x0001e2ab) msg_header_pane_g

0x9d1d,	// (0x00018b3b) main_clock2_pane_ParamLimits

0x4ded,	// (0x00013c0b) grid_clock2_toolbar_pane_ParamLimits

0x4ded,	// (0x00013c0b) grid_clock2_toolbar_pane

0x4ded,	// (0x00013c0b) listscroll_clock2_pane_ParamLimits

0x4ded,	// (0x00013c0b) listscroll_clock2_pane

0x4ee2,	// (0x00013d00) main_clock2_pane_t3_ParamLimits

0x4ee2,	// (0x00013d00) main_clock2_pane_t3

0x4f06,	// (0x00013d24) main_clock2_pane_t4_ParamLimits

0x4f06,	// (0x00013d24) main_clock2_pane_t4

0xda69,	// (0x0001c887) cell_clock2_toolbar_pane

0xda71,	// (0x0001c88f) cell_clock2_toolbar_pane_cp01

0xda71,	// (0x0001c88f) cell_clock2_toolbar_pane_cp02

0xda79,	// (0x0001c897) cell_clock2_toolbar_pane_cp03

0xda81,	// (0x0001c89f) list_clock2_pane

0xa825,	// (0x00019643) scroll_pane_cp10

0xda89,	// (0x0001c8a7) list_single_clock2_pane_ParamLimits

0xda89,	// (0x0001c8a7) list_single_clock2_pane

0xaa66,	// (0x00019884) list_highlight_pane_cp08

0xda96,	// (0x0001c8b4) list_single_clock2_pane_t1

0xdaa4,	// (0x0001c8c2) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0001e970) list_single_clock2_pane_t

0x954a,	// (0x00018368) bg_button_pane_cp10

0xdab2,	// (0x0001c8d0) cell_clock2_toolbar_pane_g1

0x2d5f,	// (0x00011b7d) aid_main_viewer_pane_g1_ParamLimits

0x2d5f,	// (0x00011b7d) aid_main_viewer_pane_g1

0x2d6d,	// (0x00011b8b) aid_main_viewer_pane_g2_ParamLimits

0x2d6d,	// (0x00011b8b) aid_main_viewer_pane_g2

0x2d7b,	// (0x00011b99) aid_main_viewer_pane_g3_ParamLimits

0x2d7b,	// (0x00011b99) aid_main_viewer_pane_g3

0x2d8a,	// (0x00011ba8) aid_main_viewer_pane_g4_ParamLimits

0x2d8a,	// (0x00011ba8) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x0001e2bc) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0001e2bc) aid_main_viewer_pane_g

0x3690,	// (0x000124ae) main_calc_pane_ParamLimits

0x36a4,	// (0x000124c2) main_dialer2_pane_ParamLimits

0x954a,	// (0x00018368) main_cam6_pane

0x954a,	// (0x00018368) main_vid6_pane

0x4df9,	// (0x00013c17) listscroll_gen_pane_cp06_ParamLimits

0x4df9,	// (0x00013c17) listscroll_gen_pane_cp06

0x4f29,	// (0x00013d47) main_clock2_pane_t5_ParamLimits

0x4f29,	// (0x00013d47) main_clock2_pane_t5

0x4f83,	// (0x00013da1) aid_call2_pane_cp10_ParamLimits

0x4f95,	// (0x00013db3) aid_call_pane_cp10_ParamLimits

0xa8a3,	// (0x000196c1) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa8a3,	// (0x000196c1) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4fa7,	// (0x00013dc5) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4fa7,	// (0x00013dc5) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa8a3,	// (0x000196c1) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0001e5f2) popup_clock_analogue_window_cp10_g_ParamLimits

0x4fb9,	// (0x00013dd7) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5622,	// (0x00014440) cell_dialer2_keypad_pane_g2_ParamLimits

0x5622,	// (0x00014440) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0001e6d8) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0001e6d8) cell_dialer2_keypad_pane_g

0x563e,	// (0x0001445c) cell_dialer2_keypad_pane_t1

0x629d,	// (0x000150bb) main_cset_text2_pane_ParamLimits

0x629d,	// (0x000150bb) main_cset_text2_pane

0xd780,	// (0x0001c59e) area_vitu2_query_pane_g1_ParamLimits

0x6b96,	// (0x000159b4) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0001e88d) area_vitu2_query_pane_g_ParamLimits

0xd804,	// (0x0001c622) area_vitu2_query_pane_t7_ParamLimits

0xd804,	// (0x0001c622) area_vitu2_query_pane_t7

0x6bf7,	// (0x00015a15) bg_button_pane_cp018_ParamLimits

0x6c05,	// (0x00015a23) bg_button_pane_cp021_ParamLimits

0x6c11,	// (0x00015a2f) bg_button_pane_cp022_ParamLimits

0x6c11,	// (0x00015a2f) bg_vkb2_func_pane_cp08_ParamLimits

0x6bf7,	// (0x00015a15) bg_vkb2_func_pane_cp06_ParamLimits

0x6c05,	// (0x00015a23) bg_vkb2_func_pane_cp07_ParamLimits

0x6c20,	// (0x00015a3e) input_focus_pane_cp09_ParamLimits

0xdaba,	// (0x0001c8d8) cam6_autofocus_pane_ParamLimits

0xdaba,	// (0x0001c8d8) cam6_autofocus_pane

0x715d,	// (0x00015f7b) cam6_image_uncrop_pane_ParamLimits

0x715d,	// (0x00015f7b) cam6_image_uncrop_pane

0x716c,	// (0x00015f8a) cam6_indi_pane_ParamLimits

0x716c,	// (0x00015f8a) cam6_indi_pane

0x7182,	// (0x00015fa0) cam6_mode_pane_ParamLimits

0x7182,	// (0x00015fa0) cam6_mode_pane

0x7194,	// (0x00015fb2) cam6_timer_pane_ParamLimits

0x7194,	// (0x00015fb2) cam6_timer_pane

0x71a0,	// (0x00015fbe) cam6_zoom_pane_ParamLimits

0x71a0,	// (0x00015fbe) cam6_zoom_pane

0x71ac,	// (0x00015fca) cam6_mode_pane_g1_ParamLimits

0x71ac,	// (0x00015fca) cam6_mode_pane_g1

0x71bc,	// (0x00015fda) cam6_mode_pane_g2_ParamLimits

0x71bc,	// (0x00015fda) cam6_mode_pane_g2

0x71cc,	// (0x00015fea) cam6_mode_pane_g3_ParamLimits

0x71cc,	// (0x00015fea) cam6_mode_pane_g3

0x71dc,	// (0x00015ffa) cam6_mode_pane_g4_ParamLimits

0x71dc,	// (0x00015ffa) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0001e975) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0001e975) cam6_mode_pane_g

0xd309,	// (0x0001c127) bg_tb_trans_pane_cp08_ParamLimits

0xd309,	// (0x0001c127) bg_tb_trans_pane_cp08

0xdac8,	// (0x0001c8e6) cam6_battery_pane_ParamLimits

0xdac8,	// (0x0001c8e6) cam6_battery_pane

0xdade,	// (0x0001c8fc) cam6_indi_pane_g1_ParamLimits

0xdade,	// (0x0001c8fc) cam6_indi_pane_g1

0xdaf0,	// (0x0001c90e) cam6_indi_pane_g2_ParamLimits

0xdaf0,	// (0x0001c90e) cam6_indi_pane_g2

0xdb02,	// (0x0001c920) cam6_indi_pane_g3_ParamLimits

0xdb02,	// (0x0001c920) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0001e97e) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0001e97e) cam6_indi_pane_g

0xdb14,	// (0x0001c932) cam6_indi_pane_t1_ParamLimits

0xdb14,	// (0x0001c932) cam6_indi_pane_t1

0x71ec,	// (0x0001600a) cam6_autofocus_pane_g1

0x71f4,	// (0x00016012) cam6_autofocus_pane_g2

0x71fc,	// (0x0001601a) cam6_autofocus_pane_g3

0x7204,	// (0x00016022) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0001e985) cam6_autofocus_pane_g

0xdb3a,	// (0x0001c958) cam6_timer_pane_g1

0xdb42,	// (0x0001c960) cam6_timer_pane_t1

0xdb50,	// (0x0001c96e) cam6_zoom_cont_pane

0xdb58,	// (0x0001c976) cam6_zoom_pane_g1

0xdb60,	// (0x0001c97e) cam6_zoom_pane_g2

0x720c,	// (0x0001602a) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0001e98e) cam6_zoom_pane_g

0xc453,	// (0x0001b271) cam6_battery_pane_g1

0xc453,	// (0x0001b271) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x0001e4ff) cam6_battery_pane_g

0xdb68,	// (0x0001c986) cam6_zoom_cont_pane_g1

0xdb71,	// (0x0001c98f) cam6_zoom_cont_pane_g2

0xdb7a,	// (0x0001c998) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0001e995) cam6_zoom_cont_pane_g

0x7229,	// (0x00016047) cam6_mode_pane_cp_ParamLimits

0x7229,	// (0x00016047) cam6_mode_pane_cp

0x71a0,	// (0x00015fbe) cam6_zoom_pane_cp_ParamLimits

0x71a0,	// (0x00015fbe) cam6_zoom_pane_cp

0x723b,	// (0x00016059) vid6_image_uncrop_cif_pane_ParamLimits

0x723b,	// (0x00016059) vid6_image_uncrop_cif_pane

0x724b,	// (0x00016069) vid6_image_uncrop_nhd_pane_ParamLimits

0x724b,	// (0x00016069) vid6_image_uncrop_nhd_pane

0x715d,	// (0x00015f7b) vid6_image_uncrop_vga_pane_ParamLimits

0x715d,	// (0x00015f7b) vid6_image_uncrop_vga_pane

0x725a,	// (0x00016078) vid6_image_uncrop_wvga_pane_ParamLimits

0x725a,	// (0x00016078) vid6_image_uncrop_wvga_pane

0x7269,	// (0x00016087) vid6_indi_pane_ParamLimits

0x7269,	// (0x00016087) vid6_indi_pane

0xd309,	// (0x0001c127) bg_tb_trans_pane_cp09_ParamLimits

0xd309,	// (0x0001c127) bg_tb_trans_pane_cp09

0xdb92,	// (0x0001c9b0) cam6_battery_pane_cp_ParamLimits

0xdb92,	// (0x0001c9b0) cam6_battery_pane_cp

0xdb9e,	// (0x0001c9bc) vid6_indi_pane_g1_ParamLimits

0xdb9e,	// (0x0001c9bc) vid6_indi_pane_g1

0xdbb0,	// (0x0001c9ce) vid6_indi_pane_g2_ParamLimits

0xdbb0,	// (0x0001c9ce) vid6_indi_pane_g2

0xdbc2,	// (0x0001c9e0) vid6_indi_pane_g3_ParamLimits

0xdbc2,	// (0x0001c9e0) vid6_indi_pane_g3

0xdbd7,	// (0x0001c9f5) vid6_indi_pane_g4_ParamLimits

0xdbd7,	// (0x0001c9f5) vid6_indi_pane_g4

0xdbec,	// (0x0001ca0a) vid6_indi_pane_g5_ParamLimits

0xdbec,	// (0x0001ca0a) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0001e99c) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0001e99c) vid6_indi_pane_g

0xdc06,	// (0x0001ca24) vid6_indi_pane_t1_ParamLimits

0xdc06,	// (0x0001ca24) vid6_indi_pane_t1

0xdc1c,	// (0x0001ca3a) vid6_indi_pane_t2_ParamLimits

0xdc1c,	// (0x0001ca3a) vid6_indi_pane_t2

0xdc44,	// (0x0001ca62) vid6_indi_pane_t3_ParamLimits

0xdc44,	// (0x0001ca62) vid6_indi_pane_t3

0xdc6c,	// (0x0001ca8a) vid6_indi_pane_t4_ParamLimits

0xdc6c,	// (0x0001ca8a) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0001e9a7) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0001e9a7) vid6_indi_pane_t

0xdc90,	// (0x0001caae) wait_bar_pane_cp08

0x7281,	// (0x0001609f) main_cset_text2_pane_t1_ParamLimits

0x7281,	// (0x0001609f) main_cset_text2_pane_t1

0x7214,	// (0x00016032) listscroll_gen_pane_cp06_t1_ParamLimits

0x7214,	// (0x00016032) listscroll_gen_pane_cp06_t1

0x954a,	// (0x00018368) main_cam6_set_pane

0xc6bf,	// (0x0001b4dd) bg_tb_trans_pane_cp06_ParamLimits

0xd121,	// (0x0001bf3f) cam4_indicators_pane_g1_ParamLimits

0xd132,	// (0x0001bf50) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0001e715) cam4_indicators_pane_g_ParamLimits

0xd150,	// (0x0001bf6e) cam4_indicators_pane_t1_ParamLimits

0x95ba,	// (0x000183d8) bg_tb_trans_pane_cp07_ParamLimits

0xd17c,	// (0x0001bf9a) vid4_indicators_pane_g1_ParamLimits

0xd190,	// (0x0001bfae) vid4_indicators_pane_g2_ParamLimits

0xd1a4,	// (0x0001bfc2) vid4_indicators_pane_g3_ParamLimits

0xd1b5,	// (0x0001bfd3) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0001e727) vid4_indicators_pane_g_ParamLimits

0xd1d3,	// (0x0001bff1) vid4_indicators_pane_t1_ParamLimits

0x6d5b,	// (0x00015b79) vid4_progress_pane_g1_ParamLimits

0x6d6d,	// (0x00015b8b) vid4_progress_pane_g2_ParamLimits

0xacb7,	// (0x00019ad5) vid4_progress_pane_g3_ParamLimits

0xd881,	// (0x0001c69f) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0001e8d8) vid4_progress_pane_g_ParamLimits

0xd89f,	// (0x0001c6bd) vid4_progress_pane_t1_ParamLimits

0xd8b4,	// (0x0001c6d2) vid4_progress_pane_t2_ParamLimits

0xd8ca,	// (0x0001c6e8) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0001e8e3) vid4_progress_pane_t_ParamLimits

0xd8df,	// (0x0001c6fd) wait_bar_pane_cp07_ParamLimits

0x729e,	// (0x000160bc) main_cam6_set_pane_g2_ParamLimits

0x729e,	// (0x000160bc) main_cam6_set_pane_g2

0x72c2,	// (0x000160e0) main_cset6_listscroll_pane_ParamLimits

0x72c2,	// (0x000160e0) main_cset6_listscroll_pane

0x72e2,	// (0x00016100) main_cset6_slider_pane_ParamLimits

0x72e2,	// (0x00016100) main_cset6_slider_pane

0x72f8,	// (0x00016116) main_cset6_text2_pane_ParamLimits

0x72f8,	// (0x00016116) main_cset6_text2_pane

0xdc9f,	// (0x0001cabd) main_cset6_text_pane

0xdca7,	// (0x0001cac5) main_cset_list_pane_copy1_ParamLimits

0xdca7,	// (0x0001cac5) main_cset_list_pane_copy1

0xdcb7,	// (0x0001cad5) scroll_pane_cp028_copy1

0x7306,	// (0x00016124) cset_list_set_pane_copy1

0x7317,	// (0x00016135) aid_position_infowindow_above_copy1

0x731f,	// (0x0001613d) aid_position_infowindow_below_copy1

0x7327,	// (0x00016145) cset_list_set_pane_g1_copy1

0x732f,	// (0x0001614d) cset_list_set_pane_g3_copy1_ParamLimits

0x732f,	// (0x0001614d) cset_list_set_pane_g3_copy1

0x733e,	// (0x0001615c) cset_list_set_pane_t1_copy1_ParamLimits

0x733e,	// (0x0001615c) cset_list_set_pane_t1_copy1

0x95ba,	// (0x000183d8) list_highlight_pane_cp021_copy1_ParamLimits

0x95ba,	// (0x000183d8) list_highlight_pane_cp021_copy1

0xdcc0,	// (0x0001cade) cset6_slider_pane_ParamLimits

0xdcc0,	// (0x0001cade) cset6_slider_pane

0xdcec,	// (0x0001cb0a) main_cset6_slider_pane_g1_ParamLimits

0xdcec,	// (0x0001cb0a) main_cset6_slider_pane_g1

0x7353,	// (0x00016171) main_cset6_slider_pane_g2_ParamLimits

0x7353,	// (0x00016171) main_cset6_slider_pane_g2

0xdd14,	// (0x0001cb32) main_cset6_slider_pane_g3_ParamLimits

0xdd14,	// (0x0001cb32) main_cset6_slider_pane_g3

0x737b,	// (0x00016199) main_cset6_slider_pane_g4_ParamLimits

0x737b,	// (0x00016199) main_cset6_slider_pane_g4

0x7387,	// (0x000161a5) main_cset6_slider_pane_g5_ParamLimits

0x7387,	// (0x000161a5) main_cset6_slider_pane_g5

0xd3bd,	// (0x0001c1db) main_cset6_slider_pane_g7_ParamLimits

0xd3bd,	// (0x0001c1db) main_cset6_slider_pane_g7

0xd3c9,	// (0x0001c1e7) main_cset6_slider_pane_g8_ParamLimits

0xd3c9,	// (0x0001c1e7) main_cset6_slider_pane_g8

0x634a,	// (0x00015168) main_cset6_slider_pane_g9_ParamLimits

0x634a,	// (0x00015168) main_cset6_slider_pane_g9

0x6356,	// (0x00015174) main_cset6_slider_pane_g10_ParamLimits

0x6356,	// (0x00015174) main_cset6_slider_pane_g10

0x6362,	// (0x00015180) main_cset6_slider_pane_g11_ParamLimits

0x6362,	// (0x00015180) main_cset6_slider_pane_g11

0x636e,	// (0x0001518c) main_cset6_slider_pane_g12_ParamLimits

0x636e,	// (0x0001518c) main_cset6_slider_pane_g12

0x637a,	// (0x00015198) main_cset6_slider_pane_g13_ParamLimits

0x637a,	// (0x00015198) main_cset6_slider_pane_g13

0x6386,	// (0x000151a4) main_cset6_slider_pane_g14_ParamLimits

0x6386,	// (0x000151a4) main_cset6_slider_pane_g14

0x7393,	// (0x000161b1) main_cset6_slider_pane_g15_ParamLimits

0x7393,	// (0x000161b1) main_cset6_slider_pane_g15

0x63aa,	// (0x000151c8) main_cset6_slider_pane_g16_ParamLimits

0x63aa,	// (0x000151c8) main_cset6_slider_pane_g16

0x63b6,	// (0x000151d4) main_cset6_slider_pane_g17_ParamLimits

0x63b6,	// (0x000151d4) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0001e9b0) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0001e9b0) main_cset6_slider_pane_g

0xdd20,	// (0x0001cb3e) main_cset6_slider_pane_t1_ParamLimits

0xdd20,	// (0x0001cb3e) main_cset6_slider_pane_t1

0x73c3,	// (0x000161e1) main_cset6_slider_pane_t2_ParamLimits

0x73c3,	// (0x000161e1) main_cset6_slider_pane_t2

0x73ee,	// (0x0001620c) main_cset6_slider_pane_t3_ParamLimits

0x73ee,	// (0x0001620c) main_cset6_slider_pane_t3

0x7419,	// (0x00016237) main_cset6_slider_pane_t4_ParamLimits

0x7419,	// (0x00016237) main_cset6_slider_pane_t4

0x7444,	// (0x00016262) main_cset6_slider_pane_t5_ParamLimits

0x7444,	// (0x00016262) main_cset6_slider_pane_t5

0xdd61,	// (0x0001cb7f) main_cset6_slider_pane_t7_ParamLimits

0xdd61,	// (0x0001cb7f) main_cset6_slider_pane_t7

0x746f,	// (0x0001628d) main_cset6_slider_pane_t8_ParamLimits

0x746f,	// (0x0001628d) main_cset6_slider_pane_t8

0x7493,	// (0x000162b1) main_cset6_slider_pane_t9_ParamLimits

0x7493,	// (0x000162b1) main_cset6_slider_pane_t9

0x74b7,	// (0x000162d5) main_cset6_slider_pane_t10_ParamLimits

0x74b7,	// (0x000162d5) main_cset6_slider_pane_t10

0x74db,	// (0x000162f9) main_cset6_slider_pane_t11_ParamLimits

0x74db,	// (0x000162f9) main_cset6_slider_pane_t11

0xdd97,	// (0x0001cbb5) main_cset6_slider_pane_t14_ParamLimits

0xdd97,	// (0x0001cbb5) main_cset6_slider_pane_t14

0xddd0,	// (0x0001cbee) main_cset6_slider_pane_t15_ParamLimits

0xddd0,	// (0x0001cbee) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0001e9d5) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0001e9d5) main_cset6_slider_pane_t

0xd4d1,	// (0x0001c2ef) cset_slider_pane_g1_copy1

0xd4da,	// (0x0001c2f8) cset_slider_pane_g2_copy1

0xd4e3,	// (0x0001c301) cset_slider_pane_g3_copy1

0x954a,	// (0x00018368) bg_popup_sub_pane_cp011_copy1

0xde09,	// (0x0001cc27) main_cset_text_pane_g1_copy1

0xd5a8,	// (0x0001c3c6) main_cset_text_pane_t1_copy1

0xd5b6,	// (0x0001c3d4) main_cset_text_pane_t2_copy1

0xd5c4,	// (0x0001c3e2) main_cset_text_pane_t3_copy1

0xd5d2,	// (0x0001c3f0) main_cset_text_pane_t4_copy1

0xd5e0,	// (0x0001c3fe) main_cset_text_pane_t5_copy1

0xde11,	// (0x0001cc2f) main_cset_text_pane_t6_copy1

0xd5fc,	// (0x0001c41a) main_cset_text_pane_t7_copy1

0x7281,	// (0x0001609f) main_cset_text2_pane_t1_copy1

0x95ba,	// (0x000183d8) main_ncimui_pane

0x38ee,	// (0x0001270c) popup_query_ncimui_window_ParamLimits

0x38ee,	// (0x0001270c) popup_query_ncimui_window

0xc724,	// (0x0001b542) field_cale_ev2_pane_g4_ParamLimits

0xc724,	// (0x0001b542) field_cale_ev2_pane_g4

0x5502,	// (0x00014320) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5502,	// (0x00014320) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0001e6b3) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0001e6b3) cell_video_dialer_keypad_pane_g

0x551a,	// (0x00014338) cell_video_dialer_keypad_pane_t1

0x954a,	// (0x00018368) bg_popup_window_pane_cp012

0xa6f2,	// (0x00019510) heading_pane_cp06

0xde3d,	// (0x0001cc5b) ncim_query_content_pane

0x954a,	// (0x00018368) bg_popup_heading_pane_cp01

0xde45,	// (0x0001cc63) ncim_heading_pane_t1

0xde53,	// (0x0001cc71) ncim_indicator_popup_pane

0xde65,	// (0x0001cc83) ncim_query_button_pane

0xde79,	// (0x0001cc97) ncim_query_content_pane_t1

0xde8b,	// (0x0001cca9) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0001ea19) ncim_query_content_pane_t

0xdec5,	// (0x0001cce3) ncim_query_list_pane

0xded7,	// (0x0001ccf5) ncim_query_popup_pane

0xde53,	// (0x0001cc71) ncim_indicator_popup_pane_ParamLimits

0x76f6,	// (0x00016514) ncim_query_content_pane_g1_ParamLimits

0x76f6,	// (0x00016514) ncim_query_content_pane_g1

0xde79,	// (0x0001cc97) ncim_query_content_pane_t1_ParamLimits

0xde8b,	// (0x0001cca9) ncim_query_content_pane_t2_ParamLimits

0x7702,	// (0x00016520) ncim_query_content_pane_t3_ParamLimits

0x7702,	// (0x00016520) ncim_query_content_pane_t3

0x772a,	// (0x00016548) ncim_query_content_pane_t4_ParamLimits

0x772a,	// (0x00016548) ncim_query_content_pane_t4

0x7752,	// (0x00016570) ncim_query_content_pane_t5_ParamLimits

0x7752,	// (0x00016570) ncim_query_content_pane_t5

0xde9d,	// (0x0001ccbb) ncim_query_content_pane_t6_ParamLimits

0xde9d,	// (0x0001ccbb) ncim_query_content_pane_t6

0xfbfb,	// (0x0001ea19) ncim_query_content_pane_t_ParamLimits

0xdec5,	// (0x0001cce3) ncim_query_list_pane_ParamLimits

0xded7,	// (0x0001ccf5) ncim_query_popup_pane_ParamLimits

0xdeeb,	// (0x0001cd09) wait_bar_pane_cp04

0x954a,	// (0x00018368) input_focus_pane_cp011

0xdef3,	// (0x0001cd11) ncim_query_popup_pane_t1

0xdf01,	// (0x0001cd1f) ncim_list_query_list_pane_ParamLimits

0xdf01,	// (0x0001cd1f) ncim_list_query_list_pane

0x954a,	// (0x00018368) bg_button_pane_cp027

0xdf0e,	// (0x0001cd2c) ncim_query_button_pane_g1

0x954a,	// (0x00018368) list_highlight_pane_cp012

0xdf18,	// (0x0001cd36) ncim_list_query_list_pane_g1

0xdf20,	// (0x0001cd3e) ncim_list_query_list_pane_t1

0xd141,	// (0x0001bf5f) cam4_indicators_pane_g3_ParamLimits

0xd141,	// (0x0001bf5f) cam4_indicators_pane_g3

0xd1c1,	// (0x0001bfdf) vid4_indicators_pane_g5_ParamLimits

0xd1c1,	// (0x0001bfdf) vid4_indicators_pane_g5

0xd890,	// (0x0001c6ae) vid4_progress_pane_g5_ParamLimits

0xd890,	// (0x0001c6ae) vid4_progress_pane_g5

0x75e4,	// (0x00016402) main_ncimui_pane_g1

0x764a,	// (0x00016468) ncimui_group_query_pane_ParamLimits

0x764a,	// (0x00016468) ncimui_group_query_pane

0x7692,	// (0x000164b0) ncimui_list_pane_ParamLimits

0x7692,	// (0x000164b0) ncimui_list_pane

0x76b9,	// (0x000164d7) ncimui_text_pane_ParamLimits

0x76b9,	// (0x000164d7) ncimui_text_pane

0x777a,	// (0x00016598) ncimui_text_pane_t1_ParamLimits

0x777a,	// (0x00016598) ncimui_text_pane_t1

0xdf2e,	// (0x0001cd4c) ncimui_list_single_graphic_pane_ParamLimits

0xdf2e,	// (0x0001cd4c) ncimui_list_single_graphic_pane

0x7798,	// (0x000165b6) ncimui_query_pane_ParamLimits

0x7798,	// (0x000165b6) ncimui_query_pane

0x954a,	// (0x00018368) list_highlight_pane_cp013

0xdf3e,	// (0x0001cd5c) ncim_list_query_list_pane_t1_copy1

0xdf18,	// (0x0001cd36) ncim_list_single_graphic_pane_g1

0xdf4c,	// (0x0001cd6a) ncim_query_button_pane_cp01

0xdf58,	// (0x0001cd76) ncim_query_entry_pane_ParamLimits

0xdf58,	// (0x0001cd76) ncim_query_entry_pane

0xdf6b,	// (0x0001cd89) ncimui_query_pane_g1

0xdf77,	// (0x0001cd95) ncimui_query_pane_t1_ParamLimits

0xdf77,	// (0x0001cd95) ncimui_query_pane_t1

0x95ba,	// (0x000183d8) input_focus_pane_cp012

0xdf90,	// (0x0001cdae) ncim_query_entry_pane_t1

0x9d1d,	// (0x00018b3b) main_im_pane_ParamLimits

0x95ba,	// (0x000183d8) main_mobtv_pane_ParamLimits

0x95ba,	// (0x000183d8) main_mobtv_pane

0x73ab,	// (0x000161c9) main_cset6_slider_pane_g18_ParamLimits

0x73ab,	// (0x000161c9) main_cset6_slider_pane_g18

0x73b7,	// (0x000161d5) main_cset6_slider_pane_g19_ParamLimits

0x73b7,	// (0x000161d5) main_cset6_slider_pane_g19

0xd317,	// (0x0001c135) bg_main_mobtv_pane_ParamLimits

0xd317,	// (0x0001c135) bg_main_mobtv_pane

0x77ab,	// (0x000165c9) main_mobtv_info_pane

0x77b4,	// (0x000165d2) main_mobtv_loading_pane_ParamLimits

0x77b4,	// (0x000165d2) main_mobtv_loading_pane

0xdfa2,	// (0x0001cdc0) main_mobtv_pg_channel_list_pane

0xdfac,	// (0x0001cdca) main_mobtv_pg_hdr_pane

0x77c1,	// (0x000165df) main_mobtv_programe_curr_pane_ParamLimits

0x77c1,	// (0x000165df) main_mobtv_programe_curr_pane

0x77ce,	// (0x000165ec) main_mobtv_programe_next_pane_ParamLimits

0x77ce,	// (0x000165ec) main_mobtv_programe_next_pane

0xdfb5,	// (0x0001cdd3) popup_mobtv_noti_window

0xc453,	// (0x0001b271) main_tv_pg_hdr_pane_g1

0xdfbd,	// (0x0001cddb) main_tv_pg_hdr_pane_g2

0xdfc5,	// (0x0001cde3) main_tv_pg_hdr_pane_g3

0xdfcd,	// (0x0001cdeb) main_tv_pg_hdr_pane_g4

0xdfd5,	// (0x0001cdf3) main_tv_pg_hdr_pane_g5

0xdfdf,	// (0x0001cdfd) main_tv_pg_hdr_pane_g6

0xdfe9,	// (0x0001ce07) main_tv_pg_hdr_pane_g7

0xdff3,	// (0x0001ce11) main_tv_pg_hdr_pane_g8

0xdffd,	// (0x0001ce1b) main_tv_pg_hdr_pane_g9

0xe007,	// (0x0001ce25) main_tv_pg_hdr_pane_g10

0xe011,	// (0x0001ce2f) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0001ea26) main_tv_pg_hdr_pane_g

0xe01b,	// (0x0001ce39) main_tv_pg_hdr_pane_t1

0xe029,	// (0x0001ce47) main_tv_pg_hdr_pane_t2

0xe037,	// (0x0001ce55) main_tv_pg_hdr_pane_t3

0xe047,	// (0x0001ce65) main_tv_pg_hdr_pane_t4

0xe057,	// (0x0001ce75) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0001ea3d) main_tv_pg_hdr_pane_t

0xe067,	// (0x0001ce85) single_mobtv_pg_channel_pane_ParamLimits

0xe067,	// (0x0001ce85) single_mobtv_pg_channel_pane

0xe079,	// (0x0001ce97) single_mobtv_pg_channel_table_pane

0xe082,	// (0x0001cea0) single_mobtv_pg_channel_thumb_pane

0xe08b,	// (0x0001cea9) single_tv_pg_channel_pane_g1

0xe094,	// (0x0001ceb2) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0001ea48) single_tv_pg_channel_pane_g

0xc6bf,	// (0x0001b4dd) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc6bf,	// (0x0001b4dd) bg_single_mobtv_pg_channel_thumb_pane

0xe09d,	// (0x0001cebb) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe09d,	// (0x0001cebb) single_mobtv_pg_channel_thumb_pane_g1

0xe0ab,	// (0x0001cec9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe0ab,	// (0x0001cec9) single_mobtv_pg_channel_thumb_pane_g2

0xe0b7,	// (0x0001ced5) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe0b7,	// (0x0001ced5) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0001ea4d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0001ea4d) single_mobtv_pg_channel_thumb_pane_g

0xe0c3,	// (0x0001cee1) single_mobtv_pg_channel_thumb_pane_t1

0xe0d1,	// (0x0001ceef) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0001ea54) single_mobtv_pg_channel_thumb_pane_t

0xc453,	// (0x0001b271) bg_single_mobtv_pg_channel_table_pane_g1

0xc453,	// (0x0001b271) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x0001e4ff) bg_single_mobtv_pg_channel_table_pane_g

0xe0df,	// (0x0001cefd) single_mobtv_pg_channel_table_pane_t1

0xe0ed,	// (0x0001cf0b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0001ea59) single_mobtv_pg_channel_table_pane_t

0x77e3,	// (0x00016601) main_mobtv_info_pane_g1_ParamLimits

0x77e3,	// (0x00016601) main_mobtv_info_pane_g1

0x7801,	// (0x0001661f) main_mobtv_info_pane_t1_ParamLimits

0x7801,	// (0x0001661f) main_mobtv_info_pane_t1

0x7879,	// (0x00016697) main_mobtv_info_pane_t2_ParamLimits

0x7879,	// (0x00016697) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0001ea63) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0001ea63) main_mobtv_info_pane_t

0x7908,	// (0x00016726) wait_bar_pane_cp05

0x791a,	// (0x00016738) main_mobtv_loading_pane_g1_ParamLimits

0x791a,	// (0x00016738) main_mobtv_loading_pane_g1

0x792d,	// (0x0001674b) main_mobtv_loading_pane_g2_ParamLimits

0x792d,	// (0x0001674b) main_mobtv_loading_pane_g2

0x7939,	// (0x00016757) main_mobtv_loading_pane_g3_ParamLimits

0x7939,	// (0x00016757) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0001ea6a) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0001ea6a) main_mobtv_loading_pane_g

0xe0fb,	// (0x0001cf19) main_mobtv_loading_pane_t1_ParamLimits

0xe0fb,	// (0x0001cf19) main_mobtv_loading_pane_t1

0xe113,	// (0x0001cf31) main_mobtv_loading_pane_t2_ParamLimits

0xe113,	// (0x0001cf31) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0001ea71) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0001ea71) main_mobtv_loading_pane_t

0x794c,	// (0x0001676a) wait_bar_pane_cp06_ParamLimits

0x794c,	// (0x0001676a) wait_bar_pane_cp06

0xe137,	// (0x0001cf55) main_mobtv_programe_curr_pane_t1

0xe145,	// (0x0001cf63) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0001ea76) main_mobtv_programe_curr_pane_t

0xe153,	// (0x0001cf71) main_mobtv_programe_next_pane_t1

0xe161,	// (0x0001cf7f) main_mobtv_programe_next_pane_t2

0xe16f,	// (0x0001cf8d) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0001ea7b) main_mobtv_programe_next_pane_t

0x954a,	// (0x00018368) bg_popup_mobtv_noti_window_pane

0xe17d,	// (0x0001cf9b) popup_mobtv_noti_window_g1

0xe185,	// (0x0001cfa3) popup_mobtv_noti_window_t1

0xe193,	// (0x0001cfb1) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0001ea82) popup_mobtv_noti_window_t

0xc453,	// (0x0001b271) bg_popup_mobtv_noti_window_pane_g1

0x954a,	// (0x00018368) sc_clock_pane

0x954a,	// (0x00018368) main_fs_bigclock_pane

0x6fd2,	// (0x00015df0) blid2_tripm_pane_t4_ParamLimits

0x6fd2,	// (0x00015df0) blid2_tripm_pane_t4

0x795b,	// (0x00016779) sc_clock_pane_g1_ParamLimits

0x795b,	// (0x00016779) sc_clock_pane_g1

0x796d,	// (0x0001678b) sc_clock_pane_t1_ParamLimits

0x796d,	// (0x0001678b) sc_clock_pane_t1

0x798f,	// (0x000167ad) sc_clock_pane_t2_ParamLimits

0x798f,	// (0x000167ad) sc_clock_pane_t2

0x79a7,	// (0x000167c5) sc_clock_pane_t3_ParamLimits

0x79a7,	// (0x000167c5) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0001ea87) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0001ea87) sc_clock_pane_t

0x8a4b,	// (0x00017869) main_fs_bigclock_indicator_pane_ParamLimits

0x8a4b,	// (0x00017869) main_fs_bigclock_indicator_pane

0xc68f,	// (0x0001b4ad) main_fs_bigclock_pane_g1_ParamLimits

0xc68f,	// (0x0001b4ad) main_fs_bigclock_pane_g1

0x8a57,	// (0x00017875) main_fs_bigclock_pane_t1_ParamLimits

0x8a57,	// (0x00017875) main_fs_bigclock_pane_t1

0x8a69,	// (0x00017887) main_fs_bigclock_pane_t2_ParamLimits

0x8a69,	// (0x00017887) main_fs_bigclock_pane_t2

0x8a7d,	// (0x0001789b) main_fs_bigclock_pane_t3_ParamLimits

0x8a7d,	// (0x0001789b) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0001ec8c) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0001ec8c) main_fs_bigclock_pane_t

0xec5e,	// (0x0001da7c) main_fs_bigclock_indicator_pane_g1

0xde6d,	// (0x0001cc8b) ncim_query_content_pane_g2_ParamLimits

0xde6d,	// (0x0001cc8b) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0001ea14) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0001ea14) ncim_query_content_pane_g

0x79c0,	// (0x000167de) sc_clock_pane_t4_ParamLimits

0x79c0,	// (0x000167de) sc_clock_pane_t4

0x95ba,	// (0x000183d8) main_radioblah_pane

0xd087,	// (0x0001bea5) cell_call4_button_pane_t1_copy1_ParamLimits

0xd087,	// (0x0001bea5) cell_call4_button_pane_t1_copy1

0x75fc,	// (0x0001641a) main_ncimui_pane_t1_ParamLimits

0x75fc,	// (0x0001641a) main_ncimui_pane_t1

0x7616,	// (0x00016434) main_ncimui_pane_t2_ParamLimits

0x7616,	// (0x00016434) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0001ea0d) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0001ea0d) main_ncimui_pane_t

0xe2cd,	// (0x0001d0eb) main_radioblah_anim_pane_ParamLimits

0xe2cd,	// (0x0001d0eb) main_radioblah_anim_pane

0xe2de,	// (0x0001d0fc) main_radioblah_info_pane_ParamLimits

0xe2de,	// (0x0001d0fc) main_radioblah_info_pane

0xe2f2,	// (0x0001d110) main_radioblah_pane_t1_ParamLimits

0xe2f2,	// (0x0001d110) main_radioblah_pane_t1

0xe30e,	// (0x0001d12c) main_radioblah_pane_t2_ParamLimits

0xe30e,	// (0x0001d12c) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0001eaa8) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0001eaa8) main_radioblah_pane_t

0x7a76,	// (0x00016894) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7a76,	// (0x00016894) main_radioblah_rocker_ctrl_pane

0xe356,	// (0x0001d174) main_radioblah_info_pane_t1_ParamLimits

0xe356,	// (0x0001d174) main_radioblah_info_pane_t1

0x7ace,	// (0x000168ec) main_radioblah_info_pane_t2_ParamLimits

0x7ace,	// (0x000168ec) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0001eab1) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0001eab1) main_radioblah_info_pane_t

0xc453,	// (0x0001b271) main_radioblah_rocker_ctrl_pane_g1

0x7b7e,	// (0x0001699c) main_radioblah_rocker_ctrl_pane_g2

0x7b86,	// (0x000169a4) main_radioblah_rocker_ctrl_pane_g3

0x7b8e,	// (0x000169ac) main_radioblah_rocker_ctrl_pane_g4

0x7b96,	// (0x000169b4) main_radioblah_rocker_ctrl_pane_g5

0x7b9e,	// (0x000169bc) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0001eaba) main_radioblah_rocker_ctrl_pane_g

0x7281,	// (0x0001609f) main_cset_text2_pane_t1_copy1_ParamLimits

0xd111,	// (0x0001bf2f) cam4_image_uncrop_qvga_pane

0xd16a,	// (0x0001bf88) vid4_image_uncrop_qcif_pane

0xdaba,	// (0x0001c8d8) cam6_image_uncrop_qvga_pane_ParamLimits

0xdaba,	// (0x0001c8d8) cam6_image_uncrop_qvga_pane

0xdb82,	// (0x0001c9a0) vid6_image_uncrop_qcif_pane_ParamLimits

0xdb82,	// (0x0001c9a0) vid6_image_uncrop_qcif_pane

0x954a,	// (0x00018368) bg_popup_preview_window_pane_cp03

0xde1f,	// (0x0001cc3d) list_cset_text2_pane

0xde27,	// (0x0001cc45) main_cset6_text2_pane_g1

0xde2f,	// (0x0001cc4d) main_cset6_text2_pane_t1

0x7ba6,	// (0x000169c4) list_cset_text2_pane_t1_ParamLimits

0x7ba6,	// (0x000169c4) list_cset_text2_pane_t1

0x95ba,	// (0x000183d8) main_radioblah_pane_ParamLimits

0x78f4,	// (0x00016712) main_mobtv_info_pane_t3_ParamLimits

0x78f4,	// (0x00016712) main_mobtv_info_pane_t3

0x7a64,	// (0x00016882) main_radioblah_pane_g1

0x7a9e,	// (0x000168bc) main_radioblah_info_pane_g1

0x7b23,	// (0x00016941) main_radioblah_info_pane_t3_ParamLimits

0x7b23,	// (0x00016941) main_radioblah_info_pane_t3

0x2389,	// (0x000111a7) highlight_cell_cale_month_pane_ParamLimits

0x2389,	// (0x000111a7) highlight_cell_cale_month_pane

0x954a,	// (0x00018368) main_phob_fisheye_pane

0xc7c7,	// (0x0001b5e5) scroll_pane_cp0031_ParamLimits

0xc7c7,	// (0x0001b5e5) scroll_pane_cp0031

0xdc90,	// (0x0001caae) wait_bar_pane_cp08_ParamLimits

0x7306,	// (0x00016124) cset_list_set_pane_copy1_ParamLimits

0xe390,	// (0x0001d1ae) highlight_cell_cale_month_pane_g1

0x7bbf,	// (0x000169dd) highlight_cell_cale_month_pane_t1

0xd870,	// (0x0001c68e) list_gen_pane_cp01

0xd3a8,	// (0x0001c1c6) scroll_pane_01

0xe398,	// (0x0001d1b6) list_single_double_fisheye_pane

0x7bcd,	// (0x000169eb) list_double_fisheye_pane_g1_ParamLimits

0x7bcd,	// (0x000169eb) list_double_fisheye_pane_g1

0x7bd9,	// (0x000169f7) list_double_fisheye_pane_g2_ParamLimits

0x7bd9,	// (0x000169f7) list_double_fisheye_pane_g2

0x7bed,	// (0x00016a0b) list_double_fisheye_pane_g3_ParamLimits

0x7bed,	// (0x00016a0b) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0001eac7) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0001eac7) list_double_fisheye_pane_g

0x7c16,	// (0x00016a34) list_double_fisheye_pane_t1_ParamLimits

0x7c16,	// (0x00016a34) list_double_fisheye_pane_t1

0x7c31,	// (0x00016a4f) list_double_fisheye_pane_t2_ParamLimits

0x7c31,	// (0x00016a4f) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0001ead2) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0001ead2) list_double_fisheye_pane_t

0x954a,	// (0x00018368) main_call5_pane

0x79eb,	// (0x00016809) sc_swipe_pane_ParamLimits

0x79eb,	// (0x00016809) sc_swipe_pane

0x7c66,	// (0x00016a84) call5_image_pane_ParamLimits

0x7c66,	// (0x00016a84) call5_image_pane

0x7c83,	// (0x00016aa1) call5_swipe_1_pane_ParamLimits

0x7c83,	// (0x00016aa1) call5_swipe_1_pane

0x7c96,	// (0x00016ab4) call5_swipe_2_pane_ParamLimits

0x7c96,	// (0x00016ab4) call5_swipe_2_pane

0x7cc1,	// (0x00016adf) popup_call5_audio_first_window_ParamLimits

0x7cc1,	// (0x00016adf) popup_call5_audio_first_window

0xc6bf,	// (0x0001b4dd) call5_swipe_1_pane_g1_ParamLimits

0xc6bf,	// (0x0001b4dd) call5_swipe_1_pane_g1

0xe3a1,	// (0x0001d1bf) call5_swipe_1_pane_g2_ParamLimits

0xe3a1,	// (0x0001d1bf) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0001ead7) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0001ead7) call5_swipe_1_pane_g

0xe3ad,	// (0x0001d1cb) call5_swipe_1_pane_t1_ParamLimits

0xe3ad,	// (0x0001d1cb) call5_swipe_1_pane_t1

0xc6bf,	// (0x0001b4dd) call5_swipe_2_pane_g1_ParamLimits

0xc6bf,	// (0x0001b4dd) call5_swipe_2_pane_g1

0xe3c2,	// (0x0001d1e0) call5_swipe_2_pane_g2_ParamLimits

0xe3c2,	// (0x0001d1e0) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0001eadc) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0001eadc) call5_swipe_2_pane_g

0xe3ce,	// (0x0001d1ec) call5_swipe_2_pane_t1_ParamLimits

0xe3ce,	// (0x0001d1ec) call5_swipe_2_pane_t1

0xe3e3,	// (0x0001d201) sc_swipe_pane_g1_ParamLimits

0xe3e3,	// (0x0001d201) sc_swipe_pane_g1

0xe3f0,	// (0x0001d20e) sc_swipe_pane_g2_ParamLimits

0xe3f0,	// (0x0001d20e) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0001eae1) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0001eae1) sc_swipe_pane_g

0xe3fc,	// (0x0001d21a) sc_swipe_pane_t1_ParamLimits

0xe3fc,	// (0x0001d21a) sc_swipe_pane_t1

0x954a,	// (0x00018368) main_cmail_launcher_pane

0x7cd2,	// (0x00016af0) aid_size_cell_cmail_l_ParamLimits

0x7cd2,	// (0x00016af0) aid_size_cell_cmail_l

0x7cec,	// (0x00016b0a) grid_cmail_l_pane_ParamLimits

0x7cec,	// (0x00016b0a) grid_cmail_l_pane

0x7d07,	// (0x00016b25) cell_cmail_l_pane_ParamLimits

0x7d07,	// (0x00016b25) cell_cmail_l_pane

0x7d2d,	// (0x00016b4b) cell_cmail_l_pane_g1_ParamLimits

0x7d2d,	// (0x00016b4b) cell_cmail_l_pane_g1

0x7d39,	// (0x00016b57) cell_cmail_l_pane_t1_ParamLimits

0x7d39,	// (0x00016b57) cell_cmail_l_pane_t1

0xe411,	// (0x0001d22f) cell_cmail_l_pane_t2_ParamLimits

0xe411,	// (0x0001d22f) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0001eae6) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0001eae6) cell_cmail_l_pane_t

0x95ba,	// (0x000183d8) grid_highlight_pane_cp018_ParamLimits

0x95ba,	// (0x000183d8) grid_highlight_pane_cp018

0x0310,	// (0x0000f12e) main2_pane_ParamLimits

0x0310,	// (0x0000f12e) main2_pane

0x9dda,	// (0x00018bf8) popup_sp_fs_action_menu_bg_pane_g1

0x9de2,	// (0x00018c00) popup_sp_fs_action_menu_bg_pane_g2

0x9dea,	// (0x00018c08) popup_sp_fs_action_menu_bg_pane_g3

0x9df2,	// (0x00018c10) popup_sp_fs_action_menu_bg_pane_g4

0x9dfa,	// (0x00018c18) popup_sp_fs_action_menu_bg_pane_g5

0x9e02,	// (0x00018c20) popup_sp_fs_action_menu_bg_pane_g6

0x9e0a,	// (0x00018c28) popup_sp_fs_action_menu_bg_pane_g7

0x9e12,	// (0x00018c30) popup_sp_fs_action_menu_bg_pane_g8

0x9e1a,	// (0x00018c38) popup_sp_fs_action_menu_bg_pane_g9

0x9e22,	// (0x00018c40) popup_sp_fs_action_menu_bg_pane_g10

0x9e22,	// (0x00018c40) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x0001dfab) popup_sp_fs_action_menu_bg_pane_g

0x12f4,	// (0x00010112) list_medium_line_x2_t3_g3_g1_ParamLimits

0x12f4,	// (0x00010112) list_medium_line_x2_t3_g3_g1

0x1300,	// (0x0001011e) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1300,	// (0x0001011e) list_medium_line_x2_t3_g3_g2

0x130c,	// (0x0001012a) list_medium_line_x2_t3_g3_g3_ParamLimits

0x130c,	// (0x0001012a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x0001e05b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x0001e05b) list_medium_line_x2_t3_g3_g

0x1318,	// (0x00010136) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1318,	// (0x00010136) list_medium_line_x2_t3_g3_t1

0x132d,	// (0x0001014b) list_medium_line_x2_t3_g3_t2_ParamLimits

0x132d,	// (0x0001014b) list_medium_line_x2_t3_g3_t2

0x1341,	// (0x0001015f) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1341,	// (0x0001015f) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x0001e062) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x0001e062) list_medium_line_x2_t3_g3_t

0x12f4,	// (0x00010112) list_medium_line_x2_t3_g2_g1_ParamLimits

0x12f4,	// (0x00010112) list_medium_line_x2_t3_g2_g1

0x130c,	// (0x0001012a) list_medium_line_x2_t3_g2_g2_ParamLimits

0x130c,	// (0x0001012a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x0001e069) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x0001e069) list_medium_line_x2_t3_g2_g

0x1356,	// (0x00010174) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1356,	// (0x00010174) list_medium_line_x2_t3_g2_t1

0x136c,	// (0x0001018a) list_medium_line_x2_t3_g2_t2_ParamLimits

0x136c,	// (0x0001018a) list_medium_line_x2_t3_g2_t2

0x137e,	// (0x0001019c) list_medium_line_x2_t3_g2_t3_ParamLimits

0x137e,	// (0x0001019c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x0001e06e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x0001e06e) list_medium_line_x2_t3_g2_t

0x12f4,	// (0x00010112) list_medium_line_x2_t4_g4_g1_ParamLimits

0x12f4,	// (0x00010112) list_medium_line_x2_t4_g4_g1

0x139c,	// (0x000101ba) list_medium_line_x2_t4_g4_g2_ParamLimits

0x139c,	// (0x000101ba) list_medium_line_x2_t4_g4_g2

0x1300,	// (0x0001011e) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1300,	// (0x0001011e) list_medium_line_x2_t4_g4_g3

0x13a8,	// (0x000101c6) list_medium_line_x2_t4_g4_g4_ParamLimits

0x13a8,	// (0x000101c6) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x0001e075) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x0001e075) list_medium_line_x2_t4_g4_g

0x13b4,	// (0x000101d2) list_medium_line_x2_t4_g4_t1_ParamLimits

0x13b4,	// (0x000101d2) list_medium_line_x2_t4_g4_t1

0x13ce,	// (0x000101ec) list_medium_line_x2_t4_g4_t2_ParamLimits

0x13ce,	// (0x000101ec) list_medium_line_x2_t4_g4_t2

0x13e4,	// (0x00010202) list_medium_line_x2_t4_g4_t3_ParamLimits

0x13e4,	// (0x00010202) list_medium_line_x2_t4_g4_t3

0x13f9,	// (0x00010217) list_medium_line_x2_t4_g4_t4_ParamLimits

0x13f9,	// (0x00010217) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x0001e07e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x0001e07e) list_medium_line_x2_t4_g4_t

0x12f4,	// (0x00010112) list_medium_line_x2_t2_g4_g1_ParamLimits

0x12f4,	// (0x00010112) list_medium_line_x2_t2_g4_g1

0x139c,	// (0x000101ba) list_medium_line_x2_t2_g4_g2_ParamLimits

0x139c,	// (0x000101ba) list_medium_line_x2_t2_g4_g2

0x1300,	// (0x0001011e) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1300,	// (0x0001011e) list_medium_line_x2_t2_g4_g3

0x130c,	// (0x0001012a) list_medium_line_x2_t2_g4_g4_ParamLimits

0x130c,	// (0x0001012a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x0001e0e5) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x0001e0e5) list_medium_line_x2_t2_g4_g

0x23af,	// (0x000111cd) list_medium_line_x2_t2_g4_t1_ParamLimits

0x23af,	// (0x000111cd) list_medium_line_x2_t2_g4_t1

0x1341,	// (0x0001015f) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1341,	// (0x0001015f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x0001e0ee) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x0001e0ee) list_medium_line_x2_t2_g4_t

0x12f4,	// (0x00010112) list_medium_line_x2_t2_g3_g1_ParamLimits

0x12f4,	// (0x00010112) list_medium_line_x2_t2_g3_g1

0x1300,	// (0x0001011e) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1300,	// (0x0001011e) list_medium_line_x2_t2_g3_g2

0x130c,	// (0x0001012a) list_medium_line_x2_t2_g3_g3_ParamLimits

0x130c,	// (0x0001012a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x0001e05b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x0001e05b) list_medium_line_x2_t2_g3_g

0x23c4,	// (0x000111e2) list_medium_line_x2_t2_g3_t1_ParamLimits

0x23c4,	// (0x000111e2) list_medium_line_x2_t2_g3_t1

0x1341,	// (0x0001015f) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1341,	// (0x0001015f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x0001e0f3) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x0001e0f3) list_medium_line_x2_t2_g3_t

0x2501,	// (0x0001131f) main_sp_fs_list_pane_ParamLimits

0x2501,	// (0x0001131f) main_sp_fs_list_pane

0xd333,	// (0x0001c151) sp_fs_scroll_pane_ParamLimits

0xd333,	// (0x0001c151) sp_fs_scroll_pane

0x250d,	// (0x0001132b) list_medium_line_x2_t3_t1

0x251d,	// (0x0001133b) list_medium_line_x2_t3_t2

0x252b,	// (0x00011349) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x0001e13e) list_medium_line_x2_t3_t

0x2539,	// (0x00011357) list_medium_line_x3_t4_t1

0x2549,	// (0x00011367) list_medium_line_x3_t4_t2

0x2557,	// (0x00011375) list_medium_line_x3_t4_t3

0x252b,	// (0x00011349) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x0001e145) list_medium_line_x3_t4_t

0x2565,	// (0x00011383) list_medium_line_x4_t5_t1

0x2575,	// (0x00011393) list_medium_line_x4_t5_t2

0x2557,	// (0x00011375) list_medium_line_x4_t5_t3

0x2583,	// (0x000113a1) list_medium_line_x4_t5_t4

0x252b,	// (0x00011349) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x0001e14e) list_medium_line_x4_t5_t

0x12f4,	// (0x00010112) list_medium_line_t4_g4_g1_ParamLimits

0x12f4,	// (0x00010112) list_medium_line_t4_g4_g1

0x2591,	// (0x000113af) list_medium_line_t4_g4_g2_ParamLimits

0x2591,	// (0x000113af) list_medium_line_t4_g4_g2

0x259d,	// (0x000113bb) list_medium_line_t4_g4_g3_ParamLimits

0x259d,	// (0x000113bb) list_medium_line_t4_g4_g3

0x130c,	// (0x0001012a) list_medium_line_t4_g4_g4_ParamLimits

0x130c,	// (0x0001012a) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x0001e159) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x0001e159) list_medium_line_t4_g4_g

0x25a9,	// (0x000113c7) list_medium_line_t4_g4_t1_ParamLimits

0x25a9,	// (0x000113c7) list_medium_line_t4_g4_t1

0x25be,	// (0x000113dc) list_medium_line_t4_g4_t2_ParamLimits

0x25be,	// (0x000113dc) list_medium_line_t4_g4_t2

0x25d4,	// (0x000113f2) list_medium_line_t4_g4_t3_ParamLimits

0x25d4,	// (0x000113f2) list_medium_line_t4_g4_t3

0x1341,	// (0x0001015f) list_medium_line_t4_g4_t4_ParamLimits

0x1341,	// (0x0001015f) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x0001e162) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x0001e162) list_medium_line_t4_g4_t

0x269d,	// (0x000114bb) chi_dic_find_pane_g1

0x36b8,	// (0x000124d6) main_tport_pane

0x6650,	// (0x0001546e) list_medium_line_plain_t1

0x6702,	// (0x00015520) list_medium_line_t2_g2_g1_ParamLimits

0x6702,	// (0x00015520) list_medium_line_t2_g2_g1

0x670e,	// (0x0001552c) list_medium_line_t2_g2_g2_ParamLimits

0x670e,	// (0x0001552c) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0001e81e) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0001e81e) list_medium_line_t2_g2_g

0x671a,	// (0x00015538) list_medium_line_t2_g2_t1_ParamLimits

0x671a,	// (0x00015538) list_medium_line_t2_g2_t1

0x6731,	// (0x0001554f) list_medium_line_t2_g2_t2_ParamLimits

0x6731,	// (0x0001554f) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0001e823) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0001e823) list_medium_line_t2_g2_t

0xd8f1,	// (0x0001c70f) aid_sp_fs_list_icon_a_sm

0xd8f9,	// (0x0001c717) aid_sp_fs_list_icon_d

0xd901,	// (0x0001c71f) aid_sp_fs_text_primary

0xd90a,	// (0x0001c728) aid_sp_fs_text_secondary

0x6d7f,	// (0x00015b9d) list_medium_line

0x6d7f,	// (0x00015b9d) list_medium_line_g2

0x6d7f,	// (0x00015b9d) list_medium_line_g3

0x6d7f,	// (0x00015b9d) list_medium_line_plain

0x6d7f,	// (0x00015b9d) list_medium_line_plain_t2

0x6d7f,	// (0x00015b9d) list_medium_line_plain_t3

0x6d7f,	// (0x00015b9d) list_medium_line_right_icon

0x6d7f,	// (0x00015b9d) list_medium_line_right_iconx2

0x6d7f,	// (0x00015b9d) list_medium_line_t2

0x6d7f,	// (0x00015b9d) list_medium_line_t2_g2

0x6d7f,	// (0x00015b9d) list_medium_line_t2_g3

0x6d7f,	// (0x00015b9d) list_medium_line_t2_right_icon

0x6d7f,	// (0x00015b9d) list_medium_line_t2_right_iconx2

0x6d7f,	// (0x00015b9d) list_medium_line_t3

0x6d7f,	// (0x00015b9d) list_medium_line_t3_g2

0x6d7f,	// (0x00015b9d) list_medium_line_t3_g3

0x6d7f,	// (0x00015b9d) list_medium_line_t3_right_iconx2

0x6d88,	// (0x00015ba6) list_medium_line_t4_g4

0x6d91,	// (0x00015baf) list_medium_line_x2

0x6d91,	// (0x00015baf) list_medium_line_x2_t2_g2

0x6d91,	// (0x00015baf) list_medium_line_x2_t2_g3

0x6d91,	// (0x00015baf) list_medium_line_x2_t2_g4

0x6d91,	// (0x00015baf) list_medium_line_x2_t3

0x6d91,	// (0x00015baf) list_medium_line_x2_t3_g2

0x6d91,	// (0x00015baf) list_medium_line_x2_t3_g3

0x6d91,	// (0x00015baf) list_medium_line_x2_t3_g4

0x6d91,	// (0x00015baf) list_medium_line_x2_t4_g2

0x6d91,	// (0x00015baf) list_medium_line_x2_t4_g4

0x6d9a,	// (0x00015bb8) list_medium_line_x3

0x6d9a,	// (0x00015bb8) list_medium_line_x3_t4

0x6d9a,	// (0x00015bb8) list_medium_line_x3_t4_g4

0x6d88,	// (0x00015ba6) list_medium_line_x4_t4

0x6d88,	// (0x00015ba6) list_medium_line_x4_t4_g7

0x6d88,	// (0x00015ba6) list_medium_line_x4_t5

0x6da3,	// (0x00015bc1) list_single_fs_dyc_pane_ParamLimits

0x6da3,	// (0x00015bc1) list_single_fs_dyc_pane

0x12f4,	// (0x00010112) list_medium_line_x4_t4_g7_g1_ParamLimits

0x12f4,	// (0x00010112) list_medium_line_x4_t4_g7_g1

0x74ff,	// (0x0001631d) list_medium_line_x4_t4_g7_g2_ParamLimits

0x74ff,	// (0x0001631d) list_medium_line_x4_t4_g7_g2

0x750b,	// (0x00016329) list_medium_line_x4_t4_g7_g3_ParamLimits

0x750b,	// (0x00016329) list_medium_line_x4_t4_g7_g3

0x751a,	// (0x00016338) list_medium_line_x4_t4_g7_g4_ParamLimits

0x751a,	// (0x00016338) list_medium_line_x4_t4_g7_g4

0x7526,	// (0x00016344) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7526,	// (0x00016344) list_medium_line_x4_t4_g7_g5

0x7535,	// (0x00016353) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7535,	// (0x00016353) list_medium_line_x4_t4_g7_g6

0x7544,	// (0x00016362) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7544,	// (0x00016362) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0001e9ee) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0001e9ee) list_medium_line_x4_t4_g7_g

0x7550,	// (0x0001636e) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7550,	// (0x0001636e) list_medium_line_x4_t4_g7_t1

0x7565,	// (0x00016383) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7565,	// (0x00016383) list_medium_line_x4_t4_g7_t2

0x757a,	// (0x00016398) list_medium_line_x4_t4_g7_t3_ParamLimits

0x757a,	// (0x00016398) list_medium_line_x4_t4_g7_t3

0x758f,	// (0x000163ad) list_medium_line_x4_t4_g7_t4_ParamLimits

0x758f,	// (0x000163ad) list_medium_line_x4_t4_g7_t4

0x75a1,	// (0x000163bf) list_medium_line_x4_t4_g7_t5_ParamLimits

0x75a1,	// (0x000163bf) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0001e9fd) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0001e9fd) list_medium_line_x4_t4_g7_t

0x75b3,	// (0x000163d1) list_single_dyc_row_pane_ParamLimits

0x75b3,	// (0x000163d1) list_single_dyc_row_pane

0x7c53,	// (0x00016a71) call5_gesture_pane_ParamLimits

0x7c53,	// (0x00016a71) call5_gesture_pane

0x7ca9,	// (0x00016ac7) call5_windows_pane_ParamLimits

0x7ca9,	// (0x00016ac7) call5_windows_pane

0x7d4f,	// (0x00016b6d) call5_swipe_1_pane_cp_ParamLimits

0x7d4f,	// (0x00016b6d) call5_swipe_1_pane_cp

0x7d5b,	// (0x00016b79) call5_swipe_2_pane_cp_ParamLimits

0x7d5b,	// (0x00016b79) call5_swipe_2_pane_cp

0xaa66,	// (0x00019884) call5_image_pane_cp

0x7d67,	// (0x00016b85) popup_call5_audio_first_window_cp_ParamLimits

0x7d67,	// (0x00016b85) popup_call5_audio_first_window_cp

0xe3e3,	// (0x0001d201) call5_swipe_1_pane_g1_cp_ParamLimits

0xe3e3,	// (0x0001d201) call5_swipe_1_pane_g1_cp

0xe423,	// (0x0001d241) call5_swipe_1_pane_g2_cp

0xe3fc,	// (0x0001d21a) call5_swipe_1_pane_t1_cp_ParamLimits

0xe3fc,	// (0x0001d21a) call5_swipe_1_pane_t1_cp

0xe3e3,	// (0x0001d201) call5_swipe_2_pane_g1_cp_ParamLimits

0xe3e3,	// (0x0001d201) call5_swipe_2_pane_g1_cp

0xe42b,	// (0x0001d249) call5_swipe_2_pane_g2_cp

0xe433,	// (0x0001d251) call5_swipe_2_pane_t1_cp_ParamLimits

0xe433,	// (0x0001d251) call5_swipe_2_pane_t1_cp

0x95ba,	// (0x000183d8) main_sp_fs_email_pane

0xe448,	// (0x0001d266) main_sp_fs_listscroll_pane_te

0x7d75,	// (0x00016b93) popup_sp_fs_action_menu_pane_ParamLimits

0x7d75,	// (0x00016b93) popup_sp_fs_action_menu_pane

0xc453,	// (0x0001b271) bg_sp_fs_ctrlbar_pane_g1

0xca3e,	// (0x0001b85c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xca50,	// (0x0001b86e) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xca47,	// (0x0001b865) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc453,	// (0x0001b271) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0001eaeb) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc238,	// (0x0001b056) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc238,	// (0x0001b056) bg_sp_fs_ctrlbar_ddmenu_pane

0xe451,	// (0x0001d26f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe451,	// (0x0001d26f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe45d,	// (0x0001d27b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe45d,	// (0x0001d27b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0001eaf4) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0001eaf4) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe469,	// (0x0001d287) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe469,	// (0x0001d287) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7db9,	// (0x00016bd7) list_medium_line_t2_right_icon_g1

0x7dc1,	// (0x00016bdf) list_medium_line_t2_right_icon_t1

0x7dd1,	// (0x00016bef) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0001eaf9) list_medium_line_t2_right_icon_t

0xbf38,	// (0x0001ad56) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbf38,	// (0x0001ad56) bg_sp_fs_ctrlbar_pane

0x7e2b,	// (0x00016c49) main_sp_fs_ctrlbar_button_pane_cp01

0x7e35,	// (0x00016c53) main_sp_fs_ctrlbar_ddmenu_pane

0xe4bb,	// (0x0001d2d9) main_sp_fs_ctrlbar_pane_g1

0xe4c7,	// (0x0001d2e5) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0001eafe) main_sp_fs_ctrlbar_pane_g

0xe4d3,	// (0x0001d2f1) main_sp_fs_ctrlbar_pane_t1

0x7e3f,	// (0x00016c5d) main_sp_fs_ctrlbar_pane

0x7e63,	// (0x00016c81) main_sp_fs_listscroll_pane_te_cp01

0x7e83,	// (0x00016ca1) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7e83,	// (0x00016ca1) popup_sp_fs_action_menu_pane_cp01

0x95ba,	// (0x000183d8) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x95ba,	// (0x000183d8) bg_sp_fs_highlight_list_pane_cp01

0xe503,	// (0x0001d321) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe503,	// (0x0001d321) sp_fs_action_menu_list_gene_pane_g1

0xe512,	// (0x0001d330) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe512,	// (0x0001d330) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0001eb08) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0001eb08) sp_fs_action_menu_list_gene_pane_g

0xe51f,	// (0x0001d33d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe51f,	// (0x0001d33d) sp_fs_action_menu_list_gene_pane_t1

0xe537,	// (0x0001d355) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe537,	// (0x0001d355) sp_fs_action_menu_list_gene_pane

0xe556,	// (0x0001d374) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe556,	// (0x0001d374) popup_sp_fs_action_menu_bg_pane

0xe564,	// (0x0001d382) sp_fs_action_menu_list_pane_ParamLimits

0xe564,	// (0x0001d382) sp_fs_action_menu_list_pane

0x7eb3,	// (0x00016cd1) sp_fs_scroll_pane_cp01_ParamLimits

0x7eb3,	// (0x00016cd1) sp_fs_scroll_pane_cp01

0x7ed9,	// (0x00016cf7) list_medium_line_plain_t2_t1

0x7ee9,	// (0x00016d07) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0001eb0d) list_medium_line_plain_t2_t

0x7ef9,	// (0x00016d17) list_medium_line_plain_t3_t1

0x7f09,	// (0x00016d27) list_medium_line_plain_t3_t2

0x7f17,	// (0x00016d35) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0001eb12) list_medium_line_plain_t3_t

0x12f4,	// (0x00010112) list_medium_line_x2_t2_g2_g1_ParamLimits

0x12f4,	// (0x00010112) list_medium_line_x2_t2_g2_g1

0x130c,	// (0x0001012a) list_medium_line_x2_t2_g2_g2_ParamLimits

0x130c,	// (0x0001012a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x0001e069) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x0001e069) list_medium_line_x2_t2_g2_g

0x25a9,	// (0x000113c7) list_medium_line_x2_t2_g2_t1_ParamLimits

0x25a9,	// (0x000113c7) list_medium_line_x2_t2_g2_t1

0x1341,	// (0x0001015f) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1341,	// (0x0001015f) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0001eb19) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0001eb19) list_medium_line_x2_t2_g2_t

0x12f4,	// (0x00010112) list_medium_line_x2_t4_g2_g1_ParamLimits

0x12f4,	// (0x00010112) list_medium_line_x2_t4_g2_g1

0x130c,	// (0x0001012a) list_medium_line_x2_t4_g2_g2_ParamLimits

0x130c,	// (0x0001012a) list_medium_line_x2_t4_g2_g2

0x0001,

0xf24b,	// (0x0001e069) list_medium_line_x2_t4_g2_g_ParamLimits

0xf24b,	// (0x0001e069) list_medium_line_x2_t4_g2_g

0x7f25,	// (0x00016d43) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7f25,	// (0x00016d43) list_medium_line_x2_t4_g2_t1

0x7f3c,	// (0x00016d5a) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7f3c,	// (0x00016d5a) list_medium_line_x2_t4_g2_t2

0x7f51,	// (0x00016d6f) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7f51,	// (0x00016d6f) list_medium_line_x2_t4_g2_t3

0x1341,	// (0x0001015f) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1341,	// (0x0001015f) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0001eb1e) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0001eb1e) list_medium_line_x2_t4_g2_t

0x7f63,	// (0x00016d81) list_medium_line_t3_right_iconx2_g1

0x7db9,	// (0x00016bd7) list_medium_line_t3_right_iconx2_g2

0x7f6b,	// (0x00016d89) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0001eb27) list_medium_line_t3_right_iconx2_g

0x7f75,	// (0x00016d93) list_medium_line_t3_right_iconx2_t1

0x7f85,	// (0x00016da3) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0001eb2e) list_medium_line_t3_right_iconx2_t

0x12f4,	// (0x00010112) list_medium_line_x3_t4_g4_g1_ParamLimits

0x12f4,	// (0x00010112) list_medium_line_x3_t4_g4_g1

0x1300,	// (0x0001011e) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1300,	// (0x0001011e) list_medium_line_x3_t4_g4_g2

0x2591,	// (0x000113af) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2591,	// (0x000113af) list_medium_line_x3_t4_g4_g3

0x7f93,	// (0x00016db1) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7f93,	// (0x00016db1) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0001eb33) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0001eb33) list_medium_line_x3_t4_g4_g

0x7f9f,	// (0x00016dbd) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7f9f,	// (0x00016dbd) list_medium_line_x3_t4_g4_t1

0x7fb6,	// (0x00016dd4) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7fb6,	// (0x00016dd4) list_medium_line_x3_t4_g4_t2

0x7fd1,	// (0x00016def) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7fd1,	// (0x00016def) list_medium_line_x3_t4_g4_t3

0x7fe6,	// (0x00016e04) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7fe6,	// (0x00016e04) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0001eb3c) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0001eb3c) list_medium_line_x3_t4_g4_t

0x8003,	// (0x00016e21) list_single_dyc_row_text_pane_t1_ParamLimits

0x8003,	// (0x00016e21) list_single_dyc_row_text_pane_t1

0x804c,	// (0x00016e6a) list_single_dyc_row_text_pane_t2_ParamLimits

0x804c,	// (0x00016e6a) list_single_dyc_row_text_pane_t2

0xe584,	// (0x0001d3a2) list_single_dyc_row_text_pane_t3_ParamLimits

0xe584,	// (0x0001d3a2) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0001eb45) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0001eb45) list_single_dyc_row_text_pane_t

0xe5a8,	// (0x0001d3c6) list_single_dyc_row_pane_g1_ParamLimits

0xe5a8,	// (0x0001d3c6) list_single_dyc_row_pane_g1

0xe5b4,	// (0x0001d3d2) list_single_dyc_row_pane_g2_ParamLimits

0xe5b4,	// (0x0001d3d2) list_single_dyc_row_pane_g2

0xe5c0,	// (0x0001d3de) list_single_dyc_row_pane_g3_ParamLimits

0xe5c0,	// (0x0001d3de) list_single_dyc_row_pane_g3

0xe5cc,	// (0x0001d3ea) list_single_dyc_row_pane_g4_ParamLimits

0xe5cc,	// (0x0001d3ea) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0001eb52) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0001eb52) list_single_dyc_row_pane_g

0xe5d8,	// (0x0001d3f6) list_single_dyc_row_text_pane_ParamLimits

0xe5d8,	// (0x0001d3f6) list_single_dyc_row_text_pane

0x954a,	// (0x00018368) bg_sp_fs_scroll_pane

0xe5f7,	// (0x0001d415) thumb_sp_fs_scroll_pane

0x6702,	// (0x00015520) list_medium_line_g1_ParamLimits

0x6702,	// (0x00015520) list_medium_line_g1

0x8181,	// (0x00016f9f) list_medium_line_t1_ParamLimits

0x8181,	// (0x00016f9f) list_medium_line_t1

0x12f4,	// (0x00010112) list_medium_line_x2_g1_ParamLimits

0x12f4,	// (0x00010112) list_medium_line_x2_g1

0x1300,	// (0x0001011e) list_medium_line_x2_g2_ParamLimits

0x1300,	// (0x0001011e) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0001eb5b) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0001eb5b) list_medium_line_x2_g

0xe600,	// (0x0001d41e) list_medium_line_x2_t1_ParamLimits

0xe600,	// (0x0001d41e) list_medium_line_x2_t1

0x12f4,	// (0x00010112) list_medium_line_x3_g1_ParamLimits

0x12f4,	// (0x00010112) list_medium_line_x3_g1

0x1300,	// (0x0001011e) list_medium_line_x3_g2_ParamLimits

0x1300,	// (0x0001011e) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0001eb5b) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0001eb5b) list_medium_line_x3_g

0xe600,	// (0x0001d41e) list_medium_line_x3_t1_ParamLimits

0xe600,	// (0x0001d41e) list_medium_line_x3_t1

0xe616,	// (0x0001d434) thumb_sp_fs_scroll_pane_g1

0xe61f,	// (0x0001d43d) thumb_sp_fs_scroll_pane_g2

0xe628,	// (0x0001d446) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001eb60) thumb_sp_fs_scroll_pane_g

0xe616,	// (0x0001d434) bg_sp_fs_scroll_pane_g1

0xe61f,	// (0x0001d43d) bg_sp_fs_scroll_pane_g2

0xe628,	// (0x0001d446) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001eb60) bg_sp_fs_scroll_pane_g

0x12f4,	// (0x00010112) list_medium_line_x2_t3_g4_g1_ParamLimits

0x12f4,	// (0x00010112) list_medium_line_x2_t3_g4_g1

0x139c,	// (0x000101ba) list_medium_line_x2_t3_g4_g2_ParamLimits

0x139c,	// (0x000101ba) list_medium_line_x2_t3_g4_g2

0x1300,	// (0x0001011e) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1300,	// (0x0001011e) list_medium_line_x2_t3_g4_g3

0x130c,	// (0x0001012a) list_medium_line_x2_t3_g4_g4_ParamLimits

0x130c,	// (0x0001012a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x0001e0e5) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x0001e0e5) list_medium_line_x2_t3_g4_g

0x8196,	// (0x00016fb4) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8196,	// (0x00016fb4) list_medium_line_x2_t3_g4_t1

0x81b0,	// (0x00016fce) list_medium_line_x2_t3_g4_t2_ParamLimits

0x81b0,	// (0x00016fce) list_medium_line_x2_t3_g4_t2

0x1341,	// (0x0001015f) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1341,	// (0x0001015f) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0001eb67) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0001eb67) list_medium_line_x2_t3_g4_t

0x6702,	// (0x00015520) list_medium_line_g2_g1_ParamLimits

0x6702,	// (0x00015520) list_medium_line_g2_g1

0x670e,	// (0x0001552c) list_medium_line_g2_g2_ParamLimits

0x670e,	// (0x0001552c) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0001e81e) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0001e81e) list_medium_line_g2_g

0x81ca,	// (0x00016fe8) list_medium_line_g2_t1_ParamLimits

0x81ca,	// (0x00016fe8) list_medium_line_g2_t1

0x6702,	// (0x00015520) list_medium_line_t3_g2_g1_ParamLimits

0x6702,	// (0x00015520) list_medium_line_t3_g2_g1

0x670e,	// (0x0001552c) list_medium_line_t3_g2_g2_ParamLimits

0x670e,	// (0x0001552c) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0001e81e) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0001e81e) list_medium_line_t3_g2_g

0x81df,	// (0x00016ffd) list_medium_line_t3_g2_t1_ParamLimits

0x81df,	// (0x00016ffd) list_medium_line_t3_g2_t1

0x81f9,	// (0x00017017) list_medium_line_t3_g2_t2_ParamLimits

0x81f9,	// (0x00017017) list_medium_line_t3_g2_t2

0x820e,	// (0x0001702c) list_medium_line_t3_g2_t3_ParamLimits

0x820e,	// (0x0001702c) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0001eb6e) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0001eb6e) list_medium_line_t3_g2_t

0x7db9,	// (0x00016bd7) list_medium_line_right_icon_g1

0x8228,	// (0x00017046) list_medium_line_right_icon_t1

0x6702,	// (0x00015520) list_medium_line_t2_g1_ParamLimits

0x6702,	// (0x00015520) list_medium_line_t2_g1

0x8236,	// (0x00017054) list_medium_line_t2_t1_ParamLimits

0x8236,	// (0x00017054) list_medium_line_t2_t1

0x8250,	// (0x0001706e) list_medium_line_t2_t2_ParamLimits

0x8250,	// (0x0001706e) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0001eb75) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0001eb75) list_medium_line_t2_t

0x6702,	// (0x00015520) list_medium_line_t3_g1_ParamLimits

0x6702,	// (0x00015520) list_medium_line_t3_g1

0x8269,	// (0x00017087) list_medium_line_t3_t1_ParamLimits

0x8269,	// (0x00017087) list_medium_line_t3_t1

0x8280,	// (0x0001709e) list_medium_line_t3_t2_ParamLimits

0x8280,	// (0x0001709e) list_medium_line_t3_t2

0x8295,	// (0x000170b3) list_medium_line_t3_t3_ParamLimits

0x8295,	// (0x000170b3) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0001eb7a) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0001eb7a) list_medium_line_t3_t

0x6702,	// (0x00015520) list_medium_line_g3_g1_ParamLimits

0x6702,	// (0x00015520) list_medium_line_g3_g1

0x82a7,	// (0x000170c5) list_medium_line_g3_g2_ParamLimits

0x82a7,	// (0x000170c5) list_medium_line_g3_g2

0x670e,	// (0x0001552c) list_medium_line_g3_g3_ParamLimits

0x670e,	// (0x0001552c) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0001eb81) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0001eb81) list_medium_line_g3_g

0x82b3,	// (0x000170d1) list_medium_line_g3_t1_ParamLimits

0x82b3,	// (0x000170d1) list_medium_line_g3_t1

0x6702,	// (0x00015520) list_medium_line_t2_g3_g1_ParamLimits

0x6702,	// (0x00015520) list_medium_line_t2_g3_g1

0x82a7,	// (0x000170c5) list_medium_line_t2_g3_g2_ParamLimits

0x82a7,	// (0x000170c5) list_medium_line_t2_g3_g2

0x670e,	// (0x0001552c) list_medium_line_t2_g3_g3_ParamLimits

0x670e,	// (0x0001552c) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0001eb81) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0001eb81) list_medium_line_t2_g3_g

0x82c8,	// (0x000170e6) list_medium_line_t2_g3_t1_ParamLimits

0x82c8,	// (0x000170e6) list_medium_line_t2_g3_t1

0x82df,	// (0x000170fd) list_medium_line_t2_g3_t2_ParamLimits

0x82df,	// (0x000170fd) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0001eb88) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0001eb88) list_medium_line_t2_g3_t

0x6702,	// (0x00015520) list_medium_line_t3_g3_g1_ParamLimits

0x6702,	// (0x00015520) list_medium_line_t3_g3_g1

0x82a7,	// (0x000170c5) list_medium_line_t3_g3_g2_ParamLimits

0x82a7,	// (0x000170c5) list_medium_line_t3_g3_g2

0x670e,	// (0x0001552c) list_medium_line_t3_g3_g3_ParamLimits

0x670e,	// (0x0001552c) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0001eb81) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0001eb81) list_medium_line_t3_g3_g

0x82fa,	// (0x00017118) list_medium_line_t3_g3_t1_ParamLimits

0x82fa,	// (0x00017118) list_medium_line_t3_g3_t1

0x830e,	// (0x0001712c) list_medium_line_t3_g3_t2_ParamLimits

0x830e,	// (0x0001712c) list_medium_line_t3_g3_t2

0x8320,	// (0x0001713e) list_medium_line_t3_g3_t3_ParamLimits

0x8320,	// (0x0001713e) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0001eb8d) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0001eb8d) list_medium_line_t3_g3_t

0x7f63,	// (0x00016d81) list_medium_line_right_iconx2_g1

0x7db9,	// (0x00016bd7) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001eb94) list_medium_line_right_iconx2_g

0x8334,	// (0x00017152) list_medium_line_right_iconx2_t1

0x7f63,	// (0x00016d81) list_medium_line_t2_right_iconx2_g1

0x7db9,	// (0x00016bd7) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001eb94) list_medium_line_t2_right_iconx2_g

0x8342,	// (0x00017160) list_medium_line_t2_right_iconx2_t1

0x8352,	// (0x00017170) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0001eb99) list_medium_line_t2_right_iconx2_t

0x8364,	// (0x00017182) list_medium_line_x4_t4_t1

0x8372,	// (0x00017190) list_medium_line_x4_t4_t2

0x8382,	// (0x000171a0) list_medium_line_x4_t4_t3

0x8392,	// (0x000171b0) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0001eb9e) list_medium_line_x4_t4_t

0x83e5,	// (0x00017203) tport_appsw_pane_ParamLimits

0x83e5,	// (0x00017203) tport_appsw_pane

0x83fd,	// (0x0001721b) tport_contact_pane_ParamLimits

0x83fd,	// (0x0001721b) tport_contact_pane

0x8415,	// (0x00017233) tport_listscroll_pane_ParamLimits

0x8415,	// (0x00017233) tport_listscroll_pane

0x842f,	// (0x0001724d) cell_tport_appsw_pane_ParamLimits

0x842f,	// (0x0001724d) cell_tport_appsw_pane

0xd21b,	// (0x0001c039) tport_appsw_pane_g1_ParamLimits

0xd21b,	// (0x0001c039) tport_appsw_pane_g1

0xe631,	// (0x0001d44f) tport_contact_pane_g1

0xdef3,	// (0x0001cd11) tport_contact_pane_t1

0xe63a,	// (0x0001d458) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0001eba7) tport_contact_pane_t

0xe648,	// (0x0001d466) list_tport_pane

0xe651,	// (0x0001d46f) scroll_pane_cp_030

0x8477,	// (0x00017295) cell_tport_appsw_pane_g1

0x8487,	// (0x000172a5) cell_tport_appsw_pane_t1

0x8495,	// (0x000172b3) grid_highlight_pane_cp019

0x849d,	// (0x000172bb) list_tport_double_graphic_pane_ParamLimits

0x849d,	// (0x000172bb) list_tport_double_graphic_pane

0x95ba,	// (0x000183d8) list_highlight_pane_cp023_ParamLimits

0x95ba,	// (0x000183d8) list_highlight_pane_cp023

0x84aa,	// (0x000172c8) list_tport_double_graphic_pane_g1_ParamLimits

0x84aa,	// (0x000172c8) list_tport_double_graphic_pane_g1

0x84b7,	// (0x000172d5) list_tport_double_graphic_pane_t1_ParamLimits

0x84b7,	// (0x000172d5) list_tport_double_graphic_pane_t1

0x84cc,	// (0x000172ea) list_tport_double_graphic_pane_t2_ParamLimits

0x84cc,	// (0x000172ea) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0001ebb3) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0001ebb3) list_tport_double_graphic_pane_t

0x954a,	// (0x00018368) main_cale_note_pane

0x5dba,	// (0x00014bd8) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5dba,	// (0x00014bd8) cell_vitu2_function_top_wide_pane_cp01

0x7908,	// (0x00016726) wait_bar_pane_cp05_ParamLimits

0x95ba,	// (0x000183d8) listscroll_cmail_pane

0xe65a,	// (0x0001d478) list_cmail_pane

0xd290,	// (0x0001c0ae) list_cmail_body_pane

0x84de,	// (0x000172fc) list_single_cmail_header_caption_pane

0x84f5,	// (0x00017313) list_single_cmail_header_detail_pane_ParamLimits

0x84f5,	// (0x00017313) list_single_cmail_header_detail_pane

0xe66a,	// (0x0001d488) list_single_cmail_header_caption_pane_t1

0x852a,	// (0x00017348) list_single_cmail_header_detail_pane_g1_ParamLimits

0x852a,	// (0x00017348) list_single_cmail_header_detail_pane_g1

0xe678,	// (0x0001d496) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe678,	// (0x0001d496) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0001ebb8) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0001ebb8) list_single_cmail_header_detail_pane_g

0x8542,	// (0x00017360) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8542,	// (0x00017360) list_single_cmail_header_detail_pane_t1

0x8580,	// (0x0001739e) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8580,	// (0x0001739e) list_single_cmail_header_editor_pane_bg

0xe094,	// (0x0001ceb2) list_cmail_body_pane_g1

0xe6b5,	// (0x0001d4d3) list_cmail_body_pane_t1

0xd258,	// (0x0001c076) list_single_cmail_header_editor_pane_bg_g1

0xa1b8,	// (0x00018fd6) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd268,	// (0x0001c086) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd260,	// (0x0001c07e) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd539,	// (0x0001c357) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd288,	// (0x0001c0a6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd278,	// (0x0001c096) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd280,	// (0x0001c09e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa198,	// (0x00018fb6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8599,	// (0x000173b7) calenote_gesture_pane_ParamLimits

0x8599,	// (0x000173b7) calenote_gesture_pane

0x85b9,	// (0x000173d7) calenote_window_pane_ParamLimits

0x85b9,	// (0x000173d7) calenote_window_pane

0xe6c3,	// (0x0001d4e1) popup_note_window_cp01

0x85d5,	// (0x000173f3) calenote_swipe_1_pane_ParamLimits

0x85d5,	// (0x000173f3) calenote_swipe_1_pane

0x7d5b,	// (0x00016b79) calenote_swipe_2_pane_ParamLimits

0x7d5b,	// (0x00016b79) calenote_swipe_2_pane

0xe3e3,	// (0x0001d201) calenote_swipe_1_pane_g1_ParamLimits

0xe3e3,	// (0x0001d201) calenote_swipe_1_pane_g1

0xe3f0,	// (0x0001d20e) calenote_swipe_1_pane_g2_ParamLimits

0xe3f0,	// (0x0001d20e) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0001eae1) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0001eae1) calenote_swipe_1_pane_g

0xe6d5,	// (0x0001d4f3) calenote_swipe_1_pane_t1_ParamLimits

0xe6d5,	// (0x0001d4f3) calenote_swipe_1_pane_t1

0xe3e3,	// (0x0001d201) calenote_swipe_2_pane_g1_ParamLimits

0xe3e3,	// (0x0001d201) calenote_swipe_2_pane_g1

0xe6f4,	// (0x0001d512) calenote_swipe_2_pane_g2_ParamLimits

0xe6f4,	// (0x0001d512) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0001ebc4) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0001ebc4) calenote_swipe_2_pane_g

0xe700,	// (0x0001d51e) calenote_swipe_2_pane_t1_ParamLimits

0xe700,	// (0x0001d51e) calenote_swipe_2_pane_t1

0x954a,	// (0x00018368) main_mup_navstr_pane

0x4a95,	// (0x000138b3) main_mup3_pane_t7_ParamLimits

0x4a95,	// (0x000138b3) main_mup3_pane_t7

0xcdc8,	// (0x0001bbe6) main_mp4_pane_g6_ParamLimits

0xcdc8,	// (0x0001bbe6) main_mp4_pane_g6

0xcff0,	// (0x0001be0e) main_image3_pane_t4_ParamLimits

0xcff0,	// (0x0001be0e) main_image3_pane_t4

0x85ea,	// (0x00017408) popup_navstr_preview_pane_ParamLimits

0x85ea,	// (0x00017408) popup_navstr_preview_pane

0x85fe,	// (0x0001741c) scroll_navstr_pane_ParamLimits

0x85fe,	// (0x0001741c) scroll_navstr_pane

0x954a,	// (0x00018368) bg_popup_preview_window_pane_cp04

0xe727,	// (0x0001d545) popup_navstr_preview_pane_t1

0x8612,	// (0x00017430) scroll_navstr_pane_g1_ParamLimits

0x8612,	// (0x00017430) scroll_navstr_pane_g1

0x8626,	// (0x00017444) scroll_navstr_pane_t1_ParamLimits

0x8626,	// (0x00017444) scroll_navstr_pane_t1

0xe6cc,	// (0x0001d4ea) bg_button_pane_cp014

0xe6cc,	// (0x0001d4ea) bg_button_pane_cp030

0x7bf9,	// (0x00016a17) list_double_fisheye_pane_g4_ParamLimits

0x7bf9,	// (0x00016a17) list_double_fisheye_pane_g4

0x7c05,	// (0x00016a23) list_double_fisheye_pane_g5_ParamLimits

0x7c05,	// (0x00016a23) list_double_fisheye_pane_g5

0xd333,	// (0x0001c151) sp_fs_scroll_pane_cp03

0xe4bb,	// (0x0001d2d9) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe4c7,	// (0x0001d2e5) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0001eafe) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe4d3,	// (0x0001d2f1) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe662,	// (0x0001d480) sp_fs_scroll_pane_cp02

0x9e8d,	// (0x00018cab) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9e8d,	// (0x00018cab) popup_sp_fs_calendar_preview_list_single_pane

0x954a,	// (0x00018368) main_cam6_pano_pane

0x95ba,	// (0x000183d8) main_mup3_pane_ParamLimits

0x954a,	// (0x00018368) main_phacti_pane

0x77db,	// (0x000165f9) bg_button_pane_cp11

0x77f5,	// (0x00016613) main_mobtv_info_pane_g2_ParamLimits

0x77f5,	// (0x00016613) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0001ea5e) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0001ea5e) main_mobtv_info_pane_g

0x79d2,	// (0x000167f0) sc_clock_pane_t5_ParamLimits

0x79d2,	// (0x000167f0) sc_clock_pane_t5

0x7a64,	// (0x00016882) main_radioblah_pane_g1_ParamLimits

0xe326,	// (0x0001d144) main_radioblah_pane_t3_ParamLimits

0xe326,	// (0x0001d144) main_radioblah_pane_t3

0xe33e,	// (0x0001d15c) main_radioblah_pane_t4_ParamLimits

0xe33e,	// (0x0001d15c) main_radioblah_pane_t4

0x7a8c,	// (0x000168aa) main_radioblah_text_pane_ParamLimits

0x7a8c,	// (0x000168aa) main_radioblah_text_pane

0x7a9e,	// (0x000168bc) main_radioblah_info_pane_g1_ParamLimits

0x7b37,	// (0x00016955) main_radioblah_info_pane_t4_ParamLimits

0x7b37,	// (0x00016955) main_radioblah_info_pane_t4

0x95ba,	// (0x000183d8) main_sp_fs_calendar_pane

0x863d,	// (0x0001745b) main_phacti_pane_g1

0x8645,	// (0x00017463) phacti_note_pane_ParamLimits

0x8645,	// (0x00017463) phacti_note_pane

0xe73e,	// (0x0001d55c) phacti_term_pane_ParamLimits

0xe73e,	// (0x0001d55c) phacti_term_pane

0xe753,	// (0x0001d571) phacti_note_pane_t1_ParamLimits

0xe753,	// (0x0001d571) phacti_note_pane_t1

0xe76a,	// (0x0001d588) phacti_term_pane_g1

0xe772,	// (0x0001d590) phacti_term_pane_t1_ParamLimits

0xe772,	// (0x0001d590) phacti_term_pane_t1

0xe79c,	// (0x0001d5ba) popup_sp_fs_calendar_preview_list_single_pane_g1

0x9fb9,	// (0x00018dd7) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0001ebce) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7a4,	// (0x0001d5c2) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7a4,	// (0x0001d5c2) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7b9,	// (0x0001d5d7) aid_popup_sp_fs_bg_corner_pane

0xc453,	// (0x0001b271) popup_sp_fs_calendar_preview_bg_pane_g1

0x954a,	// (0x00018368) popup_sp_fs_calendar_preview_bg_pane

0xe7c1,	// (0x0001d5df) popup_sp_fs_calendar_preview_list_pane

0xbf38,	// (0x0001ad56) bg_main_sp_fs_cale_pane_ParamLimits

0xbf38,	// (0x0001ad56) bg_main_sp_fs_cale_pane

0xe7c9,	// (0x0001d5e7) listscroll_cale_mrui_pane_ParamLimits

0xe7c9,	// (0x0001d5e7) listscroll_cale_mrui_pane

0xe7de,	// (0x0001d5fc) listscroll_sp_fs_schedule_track_pane

0xe7e7,	// (0x0001d605) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7e7,	// (0x0001d605) main_sp_fs_ctrlbar_pane_cp01

0xe7fa,	// (0x0001d618) main_sp_fs_ribbon_pane

0xe802,	// (0x0001d620) popup_sp_fs_cale_preview_window

0x86ba,	// (0x000174d8) list_single_sp_fs_schedule_track_pane_ParamLimits

0x86ba,	// (0x000174d8) list_single_sp_fs_schedule_track_pane

0x95ba,	// (0x000183d8) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x95ba,	// (0x000183d8) bg_sp_fs_highlight_list_pane_cp03

0x86ce,	// (0x000174ec) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x86ce,	// (0x000174ec) list_single_sp_fs_schedule_track_pane_g1

0x86da,	// (0x000174f8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x86da,	// (0x000174f8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0001ebd3) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0001ebd3) list_single_sp_fs_schedule_track_pane_g

0x86e6,	// (0x00017504) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x86e6,	// (0x00017504) list_single_sp_fs_schedule_track_pane_t1

0x8700,	// (0x0001751e) sp_fs_schedule_track_pane_ParamLimits

0x8700,	// (0x0001751e) sp_fs_schedule_track_pane

0xe814,	// (0x0001d632) sp_fs_schedule_track_pane_g1

0xe81c,	// (0x0001d63a) sp_fs_schedule_track_pane_g2

0xe824,	// (0x0001d642) sp_fs_schedule_track_pane_g3

0xe82c,	// (0x0001d64a) sp_fs_schedule_track_pane_g4

0xe834,	// (0x0001d652) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0001ebd8) sp_fs_schedule_track_pane_g

0xd258,	// (0x0001c076) bg_sp_fs_schedule_viewer_highlight_g1

0xa1b8,	// (0x00018fd6) bg_sp_fs_schedule_viewer_highlight_g2

0xd260,	// (0x0001c07e) bg_sp_fs_schedule_viewer_highlight_g3

0xd268,	// (0x0001c086) bg_sp_fs_schedule_viewer_highlight_g4

0xd539,	// (0x0001c357) bg_sp_fs_schedule_viewer_highlight_g5

0xd278,	// (0x0001c096) bg_sp_fs_schedule_viewer_highlight_g6

0xd280,	// (0x0001c09e) bg_sp_fs_schedule_viewer_highlight_g7

0xd288,	// (0x0001c0a6) bg_sp_fs_schedule_viewer_highlight_g8

0xa198,	// (0x00018fb6) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0001ebe3) bg_sp_fs_schedule_viewer_highlight_g

0x954a,	// (0x00018368) bg_main_sp_fs_ribbon_pane

0x8711,	// (0x0001752f) main_sp_fs_ribbon_pane_g1

0xe83c,	// (0x0001d65a) main_sp_fs_ribbon_pane_t1

0x871a,	// (0x00017538) main_sp_fs_ribbon_pane_t2

0xe84b,	// (0x0001d669) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0001ebf6) main_sp_fs_ribbon_pane_t

0xe85a,	// (0x0001d678) main_sp_fs_ribbon_scheduler_pane

0xe862,	// (0x0001d680) bg_main_sp_fs_ribbon_pane_g1

0xe86b,	// (0x0001d689) bg_main_sp_fs_ribbon_pane_g2

0xe874,	// (0x0001d692) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0001ebfd) bg_main_sp_fs_ribbon_pane_g

0xe87c,	// (0x0001d69a) main_sp_fs_ribbon_scheduler_pane_g1

0xe885,	// (0x0001d6a3) main_sp_fs_ribbon_scheduler_pane_g2

0xe88e,	// (0x0001d6ac) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0001ec04) main_sp_fs_ribbon_scheduler_pane_g

0xe897,	// (0x0001d6b5) list_cale_mrui_pane

0x8729,	// (0x00017547) sp_fs_scroll_pane_cp07_ParamLimits

0x8729,	// (0x00017547) sp_fs_scroll_pane_cp07

0x8745,	// (0x00017563) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8745,	// (0x00017563) bg_sp_fs_schedule_viewer_highlight

0xe8a4,	// (0x0001d6c2) list_single_sp_fs_schedule_track_pane_cp01

0xe8ac,	// (0x0001d6ca) list_sp_fs_schedule_track_pane

0xe8b4,	// (0x0001d6d2) sp_fs_scroll_pane_cp06_ParamLimits

0xe8b4,	// (0x0001d6d2) sp_fs_scroll_pane_cp06

0xc453,	// (0x0001b271) bgmain_sp_fs_calendar_pane_g1

0x8755,	// (0x00017573) list_single_cale_mrui_pane_ParamLimits

0x8755,	// (0x00017573) list_single_cale_mrui_pane

0xe8c6,	// (0x0001d6e4) list_single_cale_mrui_row_pane_ParamLimits

0xe8c6,	// (0x0001d6e4) list_single_cale_mrui_row_pane

0xe8d3,	// (0x0001d6f1) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8d3,	// (0x0001d6f1) list_single_cale_mrui_row_pane_g1

0xe918,	// (0x0001d736) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe918,	// (0x0001d736) list_single_cale_mrui_row_pane_t1

0x8776,	// (0x00017594) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8776,	// (0x00017594) list_single_cale_mrui_row_pane_t2

0xe92a,	// (0x0001d748) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe92a,	// (0x0001d748) list_single_cale_mrui_row_pane_t3

0xe959,	// (0x0001d777) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe959,	// (0x0001d777) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0001ec12) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0001ec12) list_single_cale_mrui_row_pane_t

0x87de,	// (0x000175fc) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x87de,	// (0x000175fc) list_single_cmail_header_editor_pane_bg_cp01

0x8804,	// (0x00017622) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8804,	// (0x00017622) list_single_cmail_header_editor_pane_bg_cp02

0x8824,	// (0x00017642) main_radioblah_text_pane_t1_ParamLimits

0x8824,	// (0x00017642) main_radioblah_text_pane_t1

0xe988,	// (0x0001d7a6) cam6_indi_pane_cp01

0xe990,	// (0x0001d7ae) cam6_mode_pane_cp01

0xe998,	// (0x0001d7b6) cam6_pano_pane

0xe9a1,	// (0x0001d7bf) cam6_zoom_pane_cp01

0xe9a9,	// (0x0001d7c7) cam6_pano_image_pane

0xe9b4,	// (0x0001d7d2) cam6_pano_pane_g1

0xe094,	// (0x0001ceb2) cam6_pano_pane_g2

0xe9bd,	// (0x0001d7db) cam6_pano_pane_g3

0xe9c6,	// (0x0001d7e4) cam6_pano_pane_g4

0xca2b,	// (0x0001b849) cam6_pano_pane_g5

0xe9cf,	// (0x0001d7ed) cam6_pano_pane_g6

0xe9d9,	// (0x0001d7f7) cam6_pano_pane_g7

0xe9e1,	// (0x0001d7ff) cam6_pano_pane_g8

0xe9ea,	// (0x0001d808) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0001ec1b) cam6_pano_pane_g

0x954a,	// (0x00018368) main_browser_tag_pane

0xe71f,	// (0x0001d53d) grid_navstr_albumart_pane

0xe9f5,	// (0x0001d813) cell_navstr_albumart_pane_ParamLimits

0xe9f5,	// (0x0001d813) cell_navstr_albumart_pane

0xea15,	// (0x0001d833) cell_navstr_albumart_pane_g1

0xbd49,	// (0x0001ab67) cell_navstr_albumart_pane_g2

0xbd59,	// (0x0001ab77) cell_navstr_albumart_pane_g3

0xbd51,	// (0x0001ab6f) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0001ec2e) cell_navstr_albumart_pane_g

0x883e,	// (0x0001765c) bt_list_pane_ParamLimits

0x883e,	// (0x0001765c) bt_list_pane

0x8852,	// (0x00017670) bt_list_pane_t1

0x8861,	// (0x0001767f) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0001ec37) bt_list_pane_t

0x954a,	// (0x00018368) main_cale_prevew_pane

0x8870,	// (0x0001768e) popup_cale_preview_window_ParamLimits

0x8870,	// (0x0001768e) popup_cale_preview_window

0x95ba,	// (0x000183d8) bg_popup_preview_window_pane_cp05_ParamLimits

0x95ba,	// (0x000183d8) bg_popup_preview_window_pane_cp05

0xea1d,	// (0x0001d83b) list_cale_preview_pane_ParamLimits

0xea1d,	// (0x0001d83b) list_cale_preview_pane

0x888b,	// (0x000176a9) list_double_cale_preview_pane_ParamLimits

0x888b,	// (0x000176a9) list_double_cale_preview_pane

0x889d,	// (0x000176bb) list_single_cale_preview_pane_ParamLimits

0x889d,	// (0x000176bb) list_single_cale_preview_pane

0x88b3,	// (0x000176d1) list_single_cale_preview_pane_g1

0x88bb,	// (0x000176d9) list_single_cale_preview_pane_t1_ParamLimits

0x88bb,	// (0x000176d9) list_single_cale_preview_pane_t1

0x88d0,	// (0x000176ee) list_double_cale_preview_pane_g1

0x88d8,	// (0x000176f6) list_double_cale_preview_pane_t1_ParamLimits

0x88d8,	// (0x000176f6) list_double_cale_preview_pane_t1

0x88ed,	// (0x0001770b) list_double_cale_preview_pane_t2_ParamLimits

0x88ed,	// (0x0001770b) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0001ec3c) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0001ec3c) list_double_cale_preview_pane_t

0x954a,	// (0x00018368) main_ezdial_pane

0x95ba,	// (0x000183d8) main_sp_fs_email_pane_ParamLimits

0x7de3,	// (0x00016c01) cmail_ddmenu_btn01_pane_ParamLimits

0x7de3,	// (0x00016c01) cmail_ddmenu_btn01_pane

0x7df6,	// (0x00016c14) cmail_ddmenu_btn02_pane_ParamLimits

0x7df6,	// (0x00016c14) cmail_ddmenu_btn02_pane

0x7e19,	// (0x00016c37) cmail_ddmenu_btn03_pane_ParamLimits

0x7e19,	// (0x00016c37) cmail_ddmenu_btn03_pane

0x7e3f,	// (0x00016c5d) main_sp_fs_ctrlbar_pane_ParamLimits

0x7e63,	// (0x00016c81) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd290,	// (0x0001c0ae) list_cmail_body_pane_ParamLimits

0x851f,	// (0x0001733d) bg_button_pane_cp12

0xe684,	// (0x0001d4a2) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe684,	// (0x0001d4a2) list_single_cmail_header_detail_pane_g3

0xe691,	// (0x0001d4af) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe691,	// (0x0001d4af) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0001ebbf) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0001ebbf) list_single_cmail_header_detail_pane_t

0xe787,	// (0x0001d5a5) phacti_term_pane_t2_ParamLimits

0xe787,	// (0x0001d5a5) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0001ebc9) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0001ebc9) phacti_term_pane_t

0xea29,	// (0x0001d847) aid_size_list_single_double

0x8905,	// (0x00017723) popup_ezdial_listscroll_window

0x8921,	// (0x0001773f) popup_number_entry_window_cp01

0xaa66,	// (0x00019884) bg_popup_call_pane_cp09

0xea35,	// (0x0001d853) ezdial_list_pane

0xea3d,	// (0x0001d85b) scroll_pane_cp23

0xbf38,	// (0x0001ad56) bg_button_pane_cp028_ParamLimits

0xbf38,	// (0x0001ad56) bg_button_pane_cp028

0x892f,	// (0x0001774d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x892f,	// (0x0001774d) cmail_ddmenu_btn01_pane_g1

0x893b,	// (0x00017759) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x893b,	// (0x00017759) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0001ec41) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0001ec41) cmail_ddmenu_btn01_pane_g

0xea45,	// (0x0001d863) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea45,	// (0x0001d863) cmail_ddmenu_btn01_pane_t1

0xbf38,	// (0x0001ad56) bg_button_pane_cp029_ParamLimits

0xbf38,	// (0x0001ad56) bg_button_pane_cp029

0x894f,	// (0x0001776d) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x894f,	// (0x0001776d) cmail_ddmenu_btn02_pane_g1

0x8967,	// (0x00017785) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8967,	// (0x00017785) cmail_ddmenu_btn02_pane_t1

0x95ba,	// (0x000183d8) bg_button_pane_cp031_ParamLimits

0x95ba,	// (0x000183d8) bg_button_pane_cp031

0x894f,	// (0x0001776d) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x894f,	// (0x0001776d) cmail_ddmenu_btn03_pane_g1

0x8967,	// (0x00017785) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8967,	// (0x00017785) cmail_ddmenu_btn03_pane_t1

0x563e,	// (0x0001445c) cell_dialer2_keypad_pane_t1_ParamLimits

0x5658,	// (0x00014476) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5658,	// (0x00014476) cell_dialer2_keypad_pane_t1_copy1

0x7642,	// (0x00016460) ncimui_group_button_pane

0x95ba,	// (0x000183d8) main_sp_fs_calendar_pane_ParamLimits

0x84de,	// (0x000172fc) list_single_cmail_header_caption_pane_ParamLimits

0xd90a,	// (0x0001c728) aid_recal_txt_sm_pane

0x954a,	// (0x00018368) mian_recal_day_pane

0xe802,	// (0x0001d620) popup_sp_fs_cale_preview_window_ParamLimits

0xea5b,	// (0x0001d879) list_recal_day_pane

0xeaaf,	// (0x0001d8cd) list_single_recal_day_pane_ParamLimits

0xeaaf,	// (0x0001d8cd) list_single_recal_day_pane

0xeac1,	// (0x0001d8df) list_single_recal_day_pane_g1_ParamLimits

0xeac1,	// (0x0001d8df) list_single_recal_day_pane_g1

0xeacd,	// (0x0001d8eb) list_single_recal_day_pane_g2_ParamLimits

0xeacd,	// (0x0001d8eb) list_single_recal_day_pane_g2

0xeadd,	// (0x0001d8fb) list_single_recal_day_pane_g3_ParamLimits

0xeadd,	// (0x0001d8fb) list_single_recal_day_pane_g3

0x898b,	// (0x000177a9) list_single_recal_day_pane_g4_ParamLimits

0x898b,	// (0x000177a9) list_single_recal_day_pane_g4

0xeae9,	// (0x0001d907) list_single_recal_day_pane_g5_ParamLimits

0xeae9,	// (0x0001d907) list_single_recal_day_pane_g5

0xeaf9,	// (0x0001d917) list_single_recal_day_pane_g6_ParamLimits

0xeaf9,	// (0x0001d917) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0001ec50) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0001ec50) list_single_recal_day_pane_g

0xeb0d,	// (0x0001d92b) list_single_recal_day_pane_t1

0xeb1f,	// (0x0001d93d) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0001ec5b) list_single_recal_day_pane_t

0x89ab,	// (0x000177c9) ncimui_query_button_pane_ParamLimits

0x89ab,	// (0x000177c9) ncimui_query_button_pane

0x89bb,	// (0x000177d9) ncimui_query_button_pane_t1_ParamLimits

0x89bb,	// (0x000177d9) ncimui_query_button_pane_t1

0xeb31,	// (0x0001d94f) ncimui_query_button_pane_t2_ParamLimits

0xeb31,	// (0x0001d94f) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0001ec60) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0001ec60) ncimui_query_button_pane_t

0x89ce,	// (0x000177ec) query_button_pane_ParamLimits

0x89ce,	// (0x000177ec) query_button_pane

0x954a,	// (0x00018368) bg_button_pane_cp0028

0xeb44,	// (0x0001d962) query_button_pane_t1

0x36b8,	// (0x000124d6) main_tport_pane_ParamLimits

0x83a2,	// (0x000171c0) bg_popup_window_pane_cp01_ParamLimits

0x83a2,	// (0x000171c0) bg_popup_window_pane_cp01

0x83bd,	// (0x000171db) heading_pane_cp08_ParamLimits

0x83bd,	// (0x000171db) heading_pane_cp08

0x83d0,	// (0x000171ee) heading_pane_cp07_ParamLimits

0x83d0,	// (0x000171ee) heading_pane_cp07

0x8477,	// (0x00017295) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0001ebac) cell_tport_appsw_pane_g

0xabe7,	// (0x00019a05) input_candi_list_open_g1

0xa3a9,	// (0x000191c7) list_cale_time_pane_g6_ParamLimits

0xa3a9,	// (0x000191c7) list_cale_time_pane_g6

0x4481,	// (0x0001329f) aid_size_touch_calib_1_ParamLimits

0x4481,	// (0x0001329f) aid_size_touch_calib_1

0x4493,	// (0x000132b1) aid_size_touch_calib_2_ParamLimits

0x4493,	// (0x000132b1) aid_size_touch_calib_2

0x44ab,	// (0x000132c9) aid_size_touch_calib_3_ParamLimits

0x44ab,	// (0x000132c9) aid_size_touch_calib_3

0x44c9,	// (0x000132e7) aid_size_touch_calib_4_ParamLimits

0x44c9,	// (0x000132e7) aid_size_touch_calib_4

0x44e1,	// (0x000132ff) main_touch_calib_button_group_pane_ParamLimits

0x44e1,	// (0x000132ff) main_touch_calib_button_group_pane

0x44f9,	// (0x00013317) main_touch_calib_pane_g1_ParamLimits

0x450b,	// (0x00013329) main_touch_calib_pane_g2_ParamLimits

0x451d,	// (0x0001333b) main_touch_calib_pane_g3_ParamLimits

0x452f,	// (0x0001334d) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x0001e574) main_touch_calib_pane_g_ParamLimits

0x4541,	// (0x0001335f) main_touch_calib_pane_t1_ParamLimits

0x455b,	// (0x00013379) main_touch_calib_pane_t2_ParamLimits

0x4575,	// (0x00013393) main_touch_calib_pane_t3_ParamLimits

0x4589,	// (0x000133a7) main_touch_calib_pane_t4_ParamLimits

0x459d,	// (0x000133bb) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x0001e57d) main_touch_calib_pane_t_ParamLimits

0xc7eb,	// (0x0001b609) list_single_fp_cale_pane_g3_ParamLimits

0xc7eb,	// (0x0001b609) list_single_fp_cale_pane_g3

0x95ba,	// (0x000183d8) bg_button_pane_cp012_ParamLimits

0x95ba,	// (0x000183d8) bg_vkb2_func_pane_cp03_ParamLimits

0x66b8,	// (0x000154d6) cell_vitu2_function_top_pane_g1_ParamLimits

0x95ba,	// (0x000183d8) bg_vkb2_func_pane_cp04_ParamLimits

0x75d0,	// (0x000163ee) main_ncimui_button_group_pane_ParamLimits

0x75d0,	// (0x000163ee) main_ncimui_button_group_pane

0x7630,	// (0x0001644e) main_ncimui_pane_t3_ParamLimits

0x7630,	// (0x0001644e) main_ncimui_pane_t3

0xe735,	// (0x0001d553) phacti_button_group_pane

0xea29,	// (0x0001d847) aid_size_list_single_double_ParamLimits

0x8905,	// (0x00017723) popup_ezdial_listscroll_window_ParamLimits

0x8921,	// (0x0001773f) popup_number_entry_window_cp01_ParamLimits

0x89e1,	// (0x000177ff) phacti_button_pane_ParamLimits

0x89e1,	// (0x000177ff) phacti_button_pane

0x954a,	// (0x00018368) bg_button_pane_cp14

0xeb52,	// (0x0001d970) phacti_button_pane_t1

0x89f2,	// (0x00017810) main_touch_calib_button_pane_ParamLimits

0x89f2,	// (0x00017810) main_touch_calib_button_pane

0x9d1d,	// (0x00018b3b) bg_button_pane_cp18_ParamLimits

0x9d1d,	// (0x00018b3b) bg_button_pane_cp18

0xeb60,	// (0x0001d97e) main_touch_calib_button_pane_t1_ParamLimits

0xeb60,	// (0x0001d97e) main_touch_calib_button_pane_t1

0xeb76,	// (0x0001d994) main_touch_calib_button_pane_t2_ParamLimits

0xeb76,	// (0x0001d994) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0001ec65) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0001ec65) main_touch_calib_button_pane_t

0x954a,	// (0x00018368) cell_ncimui_button_pane

0x954a,	// (0x00018368) bg_button_pane_cp032

0xeb94,	// (0x0001d9b2) cell_ncimui_button_pane_t1

0xcfd0,	// (0x0001bdee) image3_infobar_pane_ParamLimits

0xcfd0,	// (0x0001bdee) image3_infobar_pane

0x79fe,	// (0x0001681c) fs_bigclock_status_pane_ParamLimits

0x79fe,	// (0x0001681c) fs_bigclock_status_pane

0x7a0b,	// (0x00016829) main_fs_bigclock_clock_pane_ParamLimits

0x7a0b,	// (0x00016829) main_fs_bigclock_clock_pane

0x7a27,	// (0x00016845) main_fs_bigclock_indi_pane_ParamLimits

0x7a27,	// (0x00016845) main_fs_bigclock_indi_pane

0x7a40,	// (0x0001685e) main_fs_bigclock_swipe_pane_ParamLimits

0x7a40,	// (0x0001685e) main_fs_bigclock_swipe_pane

0x954a,	// (0x00018368) main_fs_clock_dumped_data

0xe1a1,	// (0x0001cfbf) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe1a1,	// (0x0001cfbf) list_single_fs_bigclock_indicator_pane_g1

0xe1bb,	// (0x0001cfd9) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe1bb,	// (0x0001cfd9) list_single_fs_bigclock_indicator_pane_g2

0xe1d5,	// (0x0001cff3) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe1d5,	// (0x0001cff3) list_single_fs_bigclock_indicator_pane_g3

0xe1ef,	// (0x0001d00d) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe1ef,	// (0x0001d00d) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0001ea92) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0001ea92) list_single_fs_bigclock_indicator_pane_g

0xe218,	// (0x0001d036) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe218,	// (0x0001d036) list_single_fs_bigclock_indicator_pane_t1

0xe240,	// (0x0001d05e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe240,	// (0x0001d05e) list_single_fs_bigclock_indicator_pane_t2

0xe268,	// (0x0001d086) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe268,	// (0x0001d086) list_single_fs_bigclock_indicator_pane_t3

0xe290,	// (0x0001d0ae) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe290,	// (0x0001d0ae) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0001ea9d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0001ea9d) list_single_fs_bigclock_indicator_pane_t

0xeba2,	// (0x0001d9c0) image3_infobar_fav_pane_ParamLimits

0xeba2,	// (0x0001d9c0) image3_infobar_fav_pane

0xebb2,	// (0x0001d9d0) image3_infobar_loc_pane_ParamLimits

0xebb2,	// (0x0001d9d0) image3_infobar_loc_pane

0xebc6,	// (0x0001d9e4) image3_infobar_time_pane_ParamLimits

0xebc6,	// (0x0001d9e4) image3_infobar_time_pane

0xc453,	// (0x0001b271) image3_infobar_time_pane_g1

0xebd6,	// (0x0001d9f4) image3_infobar_time_pane_t1

0xc453,	// (0x0001b271) image3_infobar_loc_pane_g1

0xebe4,	// (0x0001da02) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0001ec6a) image3_infobar_loc_pane_g

0xebec,	// (0x0001da0a) image3_infobar_loc_pane_t1

0xc453,	// (0x0001b271) image3_infobar_fav_pane_g1

0xebfa,	// (0x0001da18) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0001ec6f) image3_infobar_fav_pane_g

0xec02,	// (0x0001da20) fs_bigclock_status_battery_pane

0xec0b,	// (0x0001da29) fs_bigclock_status_signal_pane

0xec14,	// (0x0001da32) fs_bigclock_status_title_pane

0xec1d,	// (0x0001da3b) fs_bigclock_status_signal_pane_g1

0xec26,	// (0x0001da44) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0001ec74) fs_bigclock_status_signal_pane_g

0xec2e,	// (0x0001da4c) fs_bigclock_status_battery_pane_g1

0xec37,	// (0x0001da55) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0001ec79) fs_bigclock_status_battery_pane_g

0xec3f,	// (0x0001da5d) fs_bigclock_status_title_pane_t1

0xc453,	// (0x0001b271) main_fs_bigclock_clock_pane_g1

0x8a07,	// (0x00017825) main_fs_bigclock_clock_pane_g2

0x8a07,	// (0x00017825) main_fs_bigclock_clock_pane_g3

0x8a07,	// (0x00017825) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0001ec7e) main_fs_bigclock_clock_pane_g

0x8a0f,	// (0x0001782d) main_fs_bigclock_clock_pane_t1

0x8a1d,	// (0x0001783b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0001ec87) main_fs_bigclock_clock_pane_t

0xec4d,	// (0x0001da6b) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec4d,	// (0x0001da6b) list_single_fs_bigclock_indicator_pane

0x8a2c,	// (0x0001784a) list_single_fs_bigclock_pane_ParamLimits

0x8a2c,	// (0x0001784a) list_single_fs_bigclock_pane

0xec67,	// (0x0001da85) main_fs_bigclock_indicator_pane_t1

0xec76,	// (0x0001da94) list_single_fs_bigclock_pane_g1

0xec7e,	// (0x0001da9c) list_single_fs_bigclock_pane_t1

0xc453,	// (0x0001b271) main_fs_bigclock_swipe_pane_g1

0xecc1,	// (0x0001dadf) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0001ec98) main_fs_bigclock_swipe_pane_g

0xecc9,	// (0x0001dae7) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecc9,	// (0x0001dae7) main_fs_bigclock_swipe_pane_t1

0x25ea,	// (0x00011408) call_type_pane_ParamLimits

0x954a,	// (0x00018368) main_btmg_pane

0xe8ff,	// (0x0001d71d) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8ff,	// (0x0001d71d) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0001ec0b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0001ec0b) list_single_cale_mrui_row_pane_g

0xea96,	// (0x0001d8b4) list_recal_vselct_arw_lo_pane

0xea9e,	// (0x0001d8bc) list_recal_vselct_arw_up_pane

0xeaa6,	// (0x0001d8c4) list_recal_vselct_pane

0x8a8f,	// (0x000178ad) btmg_button_pane

0x8a99,	// (0x000178b7) main_btmg_pane_g1

0x954a,	// (0x00018368) bg_button_pane_cp044

0xece6,	// (0x0001db04) btmg_button_pane_t1

0xbf24,	// (0x0001ad42) aid_listscroll_gen

0x95ba,	// (0x000183d8) main_cntbar_detail_pane

0xe65a,	// (0x0001d478) list_cmail_folder_pane

0xd333,	// (0x0001c151) sp_fs_scroll_pane_cp03_ParamLimits

0x84de,	// (0x000172fc) list_single_fs_dyc_pane_cp01_ParamLimits

0x84de,	// (0x000172fc) list_single_fs_dyc_pane_cp01

0xecf4,	// (0x0001db12) aid_size_cmail_indent

0xecfd,	// (0x0001db1b) list_single_dyc_row_pane_cp01

0x8ad5,	// (0x000178f3) cntbar_detail_list_pane_ParamLimits

0x8ad5,	// (0x000178f3) cntbar_detail_list_pane

0x8b21,	// (0x0001793f) main_cntbar_detail_cont_pane_ParamLimits

0x8b21,	// (0x0001793f) main_cntbar_detail_cont_pane

0xd333,	// (0x0001c151) scroll_pane_cp032_ParamLimits

0xd333,	// (0x0001c151) scroll_pane_cp032

0x8b35,	// (0x00017953) cntbar_detail_list_event_pane_ParamLimits

0x8b35,	// (0x00017953) cntbar_detail_list_event_pane

0x8ae5,	// (0x00017903) cntbar_detail_list_shct_pane

0xa206,	// (0x00019024) aid_list_gen

0xed06,	// (0x0001db24) aid_scroll

0xed0f,	// (0x0001db2d) aid_size_touch_scroll_bar

0x6d91,	// (0x00015baf) aid_list_double

0x6d7f,	// (0x00015b9d) aid_list_single

0x6d7f,	// (0x00015b9d) aid_list_single_lg

0x8b45,	// (0x00017963) aid_list_z_g_a_sm

0x8b4d,	// (0x0001796b) aid_list_z_g_d

0x8b55,	// (0x00017973) aid_txt_z_prm

0x8b63,	// (0x00017981) aid_txt_z_prm_cp01

0x8b71,	// (0x0001798f) aid_txt_z_sec

0x8b7f,	// (0x0001799d) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8b7f,	// (0x0001799d) main_cntbar_detail_cont_pane_g1

0x8b93,	// (0x000179b1) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8b93,	// (0x000179b1) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0001ec9d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0001ec9d) main_cntbar_detail_cont_pane_g

0xed18,	// (0x0001db36) main_cntbar_detail_cont_pane_t1

0xed26,	// (0x0001db44) main_cntbar_detail_cont_pane_t2

0xed34,	// (0x0001db52) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0001eca2) main_cntbar_detail_cont_pane_t

0x8ba3,	// (0x000179c1) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8ba3,	// (0x000179c1) cell_cntbar_detail_list_shct_pane

0xed42,	// (0x0001db60) cntbar_detail_list_shct_pane_g1

0xed4b,	// (0x0001db69) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0001eca9) cntbar_detail_list_shct_pane_g

0x8bb7,	// (0x000179d5) cntbar_detail_list_event_pane_g1_ParamLimits

0x8bb7,	// (0x000179d5) cntbar_detail_list_event_pane_g1

0x8bc3,	// (0x000179e1) cntbar_detail_list_event_pane_g2_ParamLimits

0x8bc3,	// (0x000179e1) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0001ecae) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0001ecae) cntbar_detail_list_event_pane_g

0x8c2f,	// (0x00017a4d) cntbar_detail_list_event_pane_t1_ParamLimits

0x8c2f,	// (0x00017a4d) cntbar_detail_list_event_pane_t1

0x8c44,	// (0x00017a62) cntbar_detail_list_event_pane_t2_ParamLimits

0x8c44,	// (0x00017a62) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0001ecbb) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0001ecbb) cntbar_detail_list_event_pane_t

0xc453,	// (0x0001b271) cell_cntbar_detail_list_shct_pane_g1

0xaa1e,	// (0x0001983c) navi_pane_mv_g3

0x95ba,	// (0x000183d8) main_cntbar_detail_pane_ParamLimits

0x954a,	// (0x00018368) main_notif_wgt_pane

0xcd62,	// (0x0001bb80) aid_tch_main_mp4_pane_g4

0xcf64,	// (0x0001bd82) popup_slider_window_cp02

0xea8c,	// (0x0001d8aa) list_recal_day_event_pane

0x8aa3,	// (0x000178c1) cntbar_detail_btn_pane_ParamLimits

0x8aa3,	// (0x000178c1) cntbar_detail_btn_pane

0x8abc,	// (0x000178da) cntbar_detail_btn_pane_cp01_ParamLimits

0x8abc,	// (0x000178da) cntbar_detail_btn_pane_cp01

0x8ae5,	// (0x00017903) cntbar_detail_list_shct_pane_ParamLimits

0x8af5,	// (0x00017913) cntbar_detail_pane_g1_ParamLimits

0x8af5,	// (0x00017913) cntbar_detail_pane_g1

0x8b05,	// (0x00017923) cntbar_detail_pane_t1_ParamLimits

0x8b05,	// (0x00017923) cntbar_detail_pane_t1

0x8bcf,	// (0x000179ed) cntbar_detail_list_event_pane_g3_ParamLimits

0x8bcf,	// (0x000179ed) cntbar_detail_list_event_pane_g3

0x8be7,	// (0x00017a05) cntbar_detail_list_event_pane_g4_ParamLimits

0x8be7,	// (0x00017a05) cntbar_detail_list_event_pane_g4

0x8bff,	// (0x00017a1d) cntbar_detail_list_event_pane_g5_ParamLimits

0x8bff,	// (0x00017a1d) cntbar_detail_list_event_pane_g5

0x8c17,	// (0x00017a35) cntbar_detail_list_event_pane_g6_ParamLimits

0x8c17,	// (0x00017a35) cntbar_detail_list_event_pane_g6

0x8c59,	// (0x00017a77) cntbar_detail_list_event_pane_t3_ParamLimits

0x8c59,	// (0x00017a77) cntbar_detail_list_event_pane_t3

0x8c6b,	// (0x00017a89) popup_notif_wgt_window_ParamLimits

0x8c6b,	// (0x00017a89) popup_notif_wgt_window

0x8c84,	// (0x00017aa2) popup_submenu_window_cp01_ParamLimits

0x8c84,	// (0x00017aa2) popup_submenu_window_cp01

0xaa66,	// (0x00019884) bg_popup_window_pane_cp10

0xed54,	// (0x0001db72) listscroll_notif_wgt_pane

0xed66,	// (0x0001db84) list_notif_wgt_window

0xed6f,	// (0x0001db8d) scroll_pane_cp033

0x8c9a,	// (0x00017ab8) list_notif_wgt_row_pane_ParamLimits

0x8c9a,	// (0x00017ab8) list_notif_wgt_row_pane

0xed78,	// (0x0001db96) aid_size_list_notif_wgt_del

0xed85,	// (0x0001dba3) list_notif_wgt_row_pane_g1

0xed91,	// (0x0001dbaf) list_notif_wgt_row_pane_g2

0xed9d,	// (0x0001dbbb) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0001ecc2) list_notif_wgt_row_pane_g

0xedaa,	// (0x0001dbc8) list_notif_wgt_row_pane_t1

0xedbf,	// (0x0001dbdd) list_notif_wgt_row_pane_t2

0xedd1,	// (0x0001dbef) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0001ecc9) list_notif_wgt_row_pane_t

0xd561,	// (0x0001c37f) list_recal_day_event_pane_g1

0xede3,	// (0x0001dc01) list_recal_day_event_pane_t1

0x954a,	// (0x00018368) bg_button_pane_cp045

0x8caa,	// (0x00017ac8) cntbar_detail_btn_pane_t1

0xbf38,	// (0x0001ad56) main_callh_pane_ParamLimits

0xbf38,	// (0x0001ad56) main_callh_pane

0x954a,	// (0x00018368) main_coverflow0_pane

0x954a,	// (0x00018368) main_wgtman_pane

0x7a4e,	// (0x0001686c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7a4e,	// (0x0001686c) main_fs_bigclock_unlock_btn_pane

0x846f,	// (0x0001728d) bg_button_pane_cp16

0x847f,	// (0x0001729d) cell_tport_appsw_pane_g3

0x8cb8,	// (0x00017ad6) cf0_flow_pane_ParamLimits

0x8cb8,	// (0x00017ad6) cf0_flow_pane

0xedf2,	// (0x0001dc10) listscroll_cf0_pane

0xedfd,	// (0x0001dc1b) main_cf0_pane_g1

0x8ccd,	// (0x00017aeb) main_cf0_pane_t1_ParamLimits

0x8ccd,	// (0x00017aeb) main_cf0_pane_t1

0x8ce4,	// (0x00017b02) main_cf0_pane_t2_ParamLimits

0x8ce4,	// (0x00017b02) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0001ecd5) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0001ecd5) main_cf0_pane_t

0xee0f,	// (0x0001dc2d) scroll_pane_cp11

0x8cfb,	// (0x00017b19) cf0_flow_pane_g1

0x8d03,	// (0x00017b21) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0001ecda) cf0_flow_pane_g

0x8d0b,	// (0x00017b29) cf0_flow_pane_t1

0x954a,	// (0x00018368) main_call6_pane

0x954a,	// (0x00018368) main_calllock_pane

0x8d19,	// (0x00017b37) call6_btn_grp_pane_ParamLimits

0x8d19,	// (0x00017b37) call6_btn_grp_pane

0x8d33,	// (0x00017b51) call6_pane_g1_ParamLimits

0x8d33,	// (0x00017b51) call6_pane_g1

0x8d48,	// (0x00017b66) popup_call6_1st_window_ParamLimits

0x8d48,	// (0x00017b66) popup_call6_1st_window

0x8d59,	// (0x00017b77) popup_call6_2nd_window_ParamLimits

0x8d59,	// (0x00017b77) popup_call6_2nd_window

0x8d6a,	// (0x00017b88) cell_call6_btn_pane_ParamLimits

0x8d6a,	// (0x00017b88) cell_call6_btn_pane

0xaa66,	// (0x00019884) bg_popup_call2_in_pane_cp03

0xee1a,	// (0x0001dc38) popup_call6_1st_window_g1

0xee22,	// (0x0001dc40) popup_call6_1st_window_g2

0xee2a,	// (0x0001dc48) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0001ecdf) popup_call6_1st_window_g

0xee32,	// (0x0001dc50) popup_call6_1st_window_t1

0xee41,	// (0x0001dc5f) popup_call6_1st_window_t2

0xee51,	// (0x0001dc6f) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0001ece6) popup_call6_1st_window_t

0xaa66,	// (0x00019884) bg_popup_call2_in_pane_cp04

0xee1a,	// (0x0001dc38) popup_call6_2nd_window_g1

0xee22,	// (0x0001dc40) popup_call6_2nd_window_g2

0xee2a,	// (0x0001dc48) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0001ecdf) popup_call6_2nd_window_g

0xee32,	// (0x0001dc50) popup_call6_2nd_window_t1

0x954a,	// (0x00018368) bg_button_pane_cp15

0xee61,	// (0x0001dc7f) cell_call6_btn_pane_g1

0xee6a,	// (0x0001dc88) cell_call6_btn_pane_t1

0x8d7e,	// (0x00017b9c) listscroll_wgtman_pane_ParamLimits

0x8d7e,	// (0x00017b9c) listscroll_wgtman_pane

0x8d9f,	// (0x00017bbd) wgtman_btn_pane_ParamLimits

0x8d9f,	// (0x00017bbd) wgtman_btn_pane

0xa825,	// (0x00019643) aid_scroll_copy1

0xee79,	// (0x0001dc97) list_wgtman_pane

0x8de2,	// (0x00017c00) wgtman_btn_pane_g1_ParamLimits

0x8de2,	// (0x00017c00) wgtman_btn_pane_g1

0x8e0e,	// (0x00017c2c) wgtman_btn_pane_t1_ParamLimits

0x8e0e,	// (0x00017c2c) wgtman_btn_pane_t1

0xee83,	// (0x0001dca1) wgtman_btn_pane_t2_ParamLimits

0xee83,	// (0x0001dca1) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0001eced) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0001eced) wgtman_btn_pane_t

0x8e4b,	// (0x00017c69) listrow_wgtman_pane_ParamLimits

0x8e4b,	// (0x00017c69) listrow_wgtman_pane

0x8e5d,	// (0x00017c7b) listrow_wgtman_pane_g1

0x8e6a,	// (0x00017c88) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0001ecf2) listrow_wgtman_pane_g

0x8e88,	// (0x00017ca6) listrow_wgtman_pane_t1

0x8ea0,	// (0x00017cbe) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0001ecf7) listrow_wgtman_pane_t

0x8ec6,	// (0x00017ce4) wait_bar_pane_cp09

0xee9a,	// (0x0001dcb8) main_calllock_btn_pane

0xeea4,	// (0x0001dcc2) main_calllock_pane_g1

0x954a,	// (0x00018368) bg_button_pane_cp17

0xeeb0,	// (0x0001dcce) main_calllock_btn_pane_g1

0xeeb9,	// (0x0001dcd7) main_calllock_btn_pane_t1

0x954a,	// (0x00018368) main_dialer3_pane

0x954a,	// (0x00018368) main_fmrd2_pane

0xc453,	// (0x0001b271) main_fs_bigclock_unlock_btn_pane_g1

0xeed0,	// (0x0001dcee) main_fs_bigclock_unlock_btn_pane_t1

0x8ed8,	// (0x00017cf6) area_fmrd2_info_pane_ParamLimits

0x8ed8,	// (0x00017cf6) area_fmrd2_info_pane

0x8ee9,	// (0x00017d07) area_fmrd2_visual_pane_ParamLimits

0x8ee9,	// (0x00017d07) area_fmrd2_visual_pane

0x8ef7,	// (0x00017d15) fmrd2_indi_pane_ParamLimits

0x8ef7,	// (0x00017d15) fmrd2_indi_pane

0x8f04,	// (0x00017d22) area_fmrd2_visual_pane_g1

0x8f0c,	// (0x00017d2a) area_fmrd2_visual_pane_t1

0x8f1c,	// (0x00017d3a) area_fmrd2_visual_pane_t2

0x8f2c,	// (0x00017d4a) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0001ed01) area_fmrd2_visual_pane_t

0x8f3c,	// (0x00017d5a) area_fmrd2_info_pane_g1

0x8f44,	// (0x00017d62) area_fmrd2_info_pane_t1

0x8f54,	// (0x00017d72) area_fmrd2_info_pane_t2

0x8f64,	// (0x00017d82) area_fmrd2_info_pane_t3

0x8f74,	// (0x00017d92) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0001ed08) area_fmrd2_info_pane_t

0x8f82,	// (0x00017da0) fmrd2_indi_pane_t1

0x8f92,	// (0x00017db0) fmrd2_indi_pane_t2

0x8fa2,	// (0x00017dc0) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0001ed11) fmrd2_indi_pane_t

0xe1fe,	// (0x0001d01c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe1fe,	// (0x0001d01c) list_single_fs_bigclock_indicator_pane_g5

0xe2a5,	// (0x0001d0c3) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe2a5,	// (0x0001d0c3) list_single_fs_bigclock_indicator_pane_t5

0x8659,	// (0x00017477) aid_cell_bcale_month_pane_ParamLimits

0x8659,	// (0x00017477) aid_cell_bcale_month_pane

0x8677,	// (0x00017495) bcale_month_pane_ParamLimits

0x8677,	// (0x00017495) bcale_month_pane

0x869b,	// (0x000174b9) bcale_preview_pane_ParamLimits

0x869b,	// (0x000174b9) bcale_preview_pane

0xec7e,	// (0x0001da9c) list_single_fs_bigclock_pane_t1_ParamLimits

0xec9d,	// (0x0001dabb) list_single_fs_bigclock_pane_t2_ParamLimits

0xec9d,	// (0x0001dabb) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0001ec93) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0001ec93) list_single_fs_bigclock_pane_t

0xeec8,	// (0x0001dce6) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0001ecfc) main_fs_bigclock_unlock_btn_pane_g

0x8fb2,	// (0x00017dd0) aid_dia3_key_size_ParamLimits

0x8fb2,	// (0x00017dd0) aid_dia3_key_size

0x8fc1,	// (0x00017ddf) aid_dia3_listrow_size_ParamLimits

0x8fc1,	// (0x00017ddf) aid_dia3_listrow_size

0x8fd6,	// (0x00017df4) dia3_keypad_fun_pane_ParamLimits

0x8fd6,	// (0x00017df4) dia3_keypad_fun_pane

0x8ff2,	// (0x00017e10) dia3_keypad_num_pane_ParamLimits

0x8ff2,	// (0x00017e10) dia3_keypad_num_pane

0x900d,	// (0x00017e2b) dia3_listscroll_pane_ParamLimits

0x900d,	// (0x00017e2b) dia3_listscroll_pane

0x9020,	// (0x00017e3e) dia3_numentry_pane_ParamLimits

0x9020,	// (0x00017e3e) dia3_numentry_pane

0xeede,	// (0x0001dcfc) dia3_list_pane

0xeee9,	// (0x0001dd07) scroll_pane_cp12

0x954a,	// (0x00018368) bg_dia3_numentry_pane

0x9034,	// (0x00017e52) dia3_numentry_pane_t1

0x9043,	// (0x00017e61) cell_dia3_key_num_pane

0x904b,	// (0x00017e69) cell_dia3_key0_fun_pane_ParamLimits

0x904b,	// (0x00017e69) cell_dia3_key0_fun_pane

0x905f,	// (0x00017e7d) cell_dia3_key1_fun_pane_ParamLimits

0x905f,	// (0x00017e7d) cell_dia3_key1_fun_pane

0x9077,	// (0x00017e95) dia3_listrow_pane

0xdf0e,	// (0x0001cd2c) bg_dia3_numentry_pane_g1

0x954a,	// (0x00018368) bg_button_pane_cp21

0xeef4,	// (0x0001dd12) cell_dia3_key_num_pane_t1

0xef02,	// (0x0001dd20) cell_dia3_key_num_pane_t2

0xef11,	// (0x0001dd2f) cell_dia3_key_num_pane_t3

0xef20,	// (0x0001dd3e) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0001ed18) cell_dia3_key_num_pane_t

0x954a,	// (0x00018368) bg_button_pane_cp19

0x9089,	// (0x00017ea7) cell_dia3_key0_fun_pane_g1

0x954a,	// (0x00018368) bg_button_pane_cp20

0x9091,	// (0x00017eaf) cell_dia3_key1_fun_pane_g1

0x9099,	// (0x00017eb7) area_left_week_number_pane

0x90a5,	// (0x00017ec3) area_top_day_name_pane

0x90b8,	// (0x00017ed6) frame_month_view_pane

0xef2f,	// (0x0001dd4d) grid_month_view_pane

0x90cb,	// (0x00017ee9) cell_top_day_name_pane_ParamLimits

0x90cb,	// (0x00017ee9) cell_top_day_name_pane

0x90f8,	// (0x00017f16) cell_area_left_week_number_pane_ParamLimits

0x90f8,	// (0x00017f16) cell_area_left_week_number_pane

0x910c,	// (0x00017f2a) cell_month_view_pane_ParamLimits

0x910c,	// (0x00017f2a) cell_month_view_pane

0xef3d,	// (0x0001dd5b) frm_month_g1

0x9139,	// (0x00017f57) frm_month_g2

0x914c,	// (0x00017f6a) frm_month_g3

0x915f,	// (0x00017f7d) frm_month_g4

0x9172,	// (0x00017f90) frm_month_g5

0x9185,	// (0x00017fa3) frm_month_g6

0x9198,	// (0x00017fb6) frm_month_g7

0xef4a,	// (0x0001dd68) frm_month_g8

0x91ab,	// (0x00017fc9) frm_month_g9

0x91bb,	// (0x00017fd9) frm_month_g10

0x91cb,	// (0x00017fe9) frm_month_g11

0x91db,	// (0x00017ff9) frm_month_g12

0x91ed,	// (0x0001800b) frm_month_g13

0x91ff,	// (0x0001801d) frm_month_g14

0x9213,	// (0x00018031) frm_month_g15

0x9227,	// (0x00018045) frm_month_g16

0x000f,

0xff03,	// (0x0001ed21) frm_month_g

0xef57,	// (0x0001dd75) cell_top_day_name_pane_t1

0x923b,	// (0x00018059) cell_area_left_week_number_pane_g1

0x9247,	// (0x00018065) cell_area_left_week_number_pane_t1

0xc6bf,	// (0x0001b4dd) cell_month_view_pane_g1

0x925a,	// (0x00018078) cell_month_view_pane_t1

0x954a,	// (0x00018368) main_fps_pane

0xe483,	// (0x0001d2a1) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe483,	// (0x0001d2a1) cmail_ddmenu_btn02_pane_cp1

0xe49f,	// (0x0001d2bd) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe49f,	// (0x0001d2bd) cmail_ddmenu_btn02_pane_cp2

0x895b,	// (0x00017779) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x895b,	// (0x00017779) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0001ec46) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0001ec46) cmail_ddmenu_btn02_pane_g

0x8979,	// (0x00017797) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8979,	// (0x00017797) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0001ec4b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0001ec4b) cmail_ddmenu_btn02_pane_t

0x926d,	// (0x0001808b) fps_text_pane_ParamLimits

0x926d,	// (0x0001808b) fps_text_pane

0x9284,	// (0x000180a2) main_fps_pane_g1_ParamLimits

0x9284,	// (0x000180a2) main_fps_pane_g1

0x929e,	// (0x000180bc) wait_bar_pane_cp010_ParamLimits

0x929e,	// (0x000180bc) wait_bar_pane_cp010

0x92af,	// (0x000180cd) fps_text_pane_t1_ParamLimits

0x92af,	// (0x000180cd) fps_text_pane_t1

0xea6c,	// (0x0001d88a) cam4_image_uncrop_pane_g1

0xea75,	// (0x0001d893) cam4_image_uncrop_pane_g2

0x5ae4,	// (0x00014902) cam4_image_uncrop_pane_g3

0x5aed,	// (0x0001490b) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0001e70c) cam4_image_uncrop_pane_g

0x9077,	// (0x00017e95) dia3_listrow_pane_ParamLimits

0x954a,	// (0x00018368) main_phob2_pane

0x8440,	// (0x0001725e) cell_tport_appsw_pane_cp02_ParamLimits

0x8440,	// (0x0001725e) cell_tport_appsw_pane_cp02

0x8454,	// (0x00017272) cell_tport_appsw_pane_cp03_ParamLimits

0x8454,	// (0x00017272) cell_tport_appsw_pane_cp03

0x954a,	// (0x00018368) phob2_contact_card_pane

0x954a,	// (0x00018368) phob2_listscroll_pane

0xef6a,	// (0x0001dd88) phob2_list_pane

0xef72,	// (0x0001dd90) scroll_pane_cp034

0x92c7,	// (0x000180e5) phob2_cc_data_pane_ParamLimits

0x92c7,	// (0x000180e5) phob2_cc_data_pane

0x92e6,	// (0x00018104) phob2_cc_listscroll_pane_ParamLimits

0x92e6,	// (0x00018104) phob2_cc_listscroll_pane

0x9304,	// (0x00018122) list_double_large_graphic_phob2_pane_ParamLimits

0x9304,	// (0x00018122) list_double_large_graphic_phob2_pane

0x9316,	// (0x00018134) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9316,	// (0x00018134) list_double_large_graphic_phob2_pane_g1

0xef7a,	// (0x0001dd98) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xef7a,	// (0x0001dd98) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0001ed42) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0001ed42) list_double_large_graphic_phob2_pane_g

0x932c,	// (0x0001814a) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x932c,	// (0x0001814a) list_double_large_graphic_phob2_pane_t1

0x9341,	// (0x0001815f) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9341,	// (0x0001815f) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0001ed47) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0001ed47) list_double_large_graphic_phob2_pane_t

0x954a,	// (0x00018368) list_highlight_pane_cp024

0x9353,	// (0x00018171) phob2_cc_button_pane

0x935b,	// (0x00018179) phob2_cc_data_pane_g1_ParamLimits

0x935b,	// (0x00018179) phob2_cc_data_pane_g1

0x9370,	// (0x0001818e) phob2_cc_data_pane_g2_ParamLimits

0x9370,	// (0x0001818e) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0001ed4c) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0001ed4c) phob2_cc_data_pane_g

0x9380,	// (0x0001819e) phob2_cc_data_pane_t1_ParamLimits

0x9380,	// (0x0001819e) phob2_cc_data_pane_t1

0x9398,	// (0x000181b6) phob2_cc_data_pane_t2_ParamLimits

0x9398,	// (0x000181b6) phob2_cc_data_pane_t2

0x93b0,	// (0x000181ce) phob2_cc_data_pane_t3_ParamLimits

0x93b0,	// (0x000181ce) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0001ed51) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0001ed51) phob2_cc_data_pane_t

0xef86,	// (0x0001dda4) phob2_cc_list_pane_ParamLimits

0xef86,	// (0x0001dda4) phob2_cc_list_pane

0xd60a,	// (0x0001c428) scroll_pane_cp035_ParamLimits

0xd60a,	// (0x0001c428) scroll_pane_cp035

0x95ba,	// (0x000183d8) bg_button_pane_cp033

0xef92,	// (0x0001ddb0) phob2_cc_button_pane_g1

0xef9e,	// (0x0001ddbc) phob2_cc_button_pane_t1

0xefb3,	// (0x0001ddd1) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0001ed58) phob2_cc_button_pane_t

0x93c8,	// (0x000181e6) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x93c8,	// (0x000181e6) list_double_large_graphic_phob2_cc_pane

0x93da,	// (0x000181f8) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x93da,	// (0x000181f8) list_double_large_graphic_phob2_cc_pane_g1

0x93e6,	// (0x00018204) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x93e6,	// (0x00018204) list_double_large_graphic_phob2_cc_pane_g2

0x93f2,	// (0x00018210) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x93f2,	// (0x00018210) list_double_large_graphic_phob2_cc_pane_g3

0x93fe,	// (0x0001821c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x93fe,	// (0x0001821c) list_double_large_graphic_phob2_cc_pane_g4

0x940a,	// (0x00018228) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x940a,	// (0x00018228) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0001ed5d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0001ed5d) list_double_large_graphic_phob2_cc_pane_g

0x9416,	// (0x00018234) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9416,	// (0x00018234) list_double_large_graphic_phob2_cc_pane_t1

0x943f,	// (0x0001825d) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x943f,	// (0x0001825d) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0001ed68) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0001ed68) list_double_large_graphic_phob2_cc_pane_t

0xefc5,	// (0x0001dde3) list_highlight_pane_cp025_ParamLimits

0xefc5,	// (0x0001dde3) list_highlight_pane_cp025

0x95ba,	// (0x000183d8) bg_button_pane_cp033_ParamLimits

0xef92,	// (0x0001ddb0) phob2_cc_button_pane_g1_ParamLimits

0xef9e,	// (0x0001ddbc) phob2_cc_button_pane_t1_ParamLimits

0xefb3,	// (0x0001ddd1) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0001ed58) phob2_cc_button_pane_t_ParamLimits

0x046b,	// (0x0000f289) popup_wgtman_window

0xd3a8,	// (0x0001c1c6) scroll_pane_cp038

0x8dc4,	// (0x00017be2) wgtman_btn_pane_cp_01_ParamLimits

0x8dc4,	// (0x00017be2) wgtman_btn_pane_cp_01

0xefd3,	// (0x0001ddf1) wgtman_content_pane

0xefdc,	// (0x0001ddfa) wgtman_heading_pane

0x954a,	// (0x00018368) bg_heading_pane_cp02

0xefe5,	// (0x0001de03) wgtman_heading_pane_g1

0xefed,	// (0x0001de0b) wgtman_heading_pane_t1

0xeffb,	// (0x0001de19) scroll_pane_cp036

0xf003,	// (0x0001de21) wgtman_list_pane

0xf00b,	// (0x0001de29) wgtman_list_pane_t1_ParamLimits

0xf00b,	// (0x0001de29) wgtman_list_pane_t1

0xd105,	// (0x0001bf23) cam4_grid_pane

0x6891,	// (0x000156af) bg_button_pane_cp015_ParamLimits

0x68a3,	// (0x000156c1) bg_button_pane_cp016_ParamLimits

0x68b6,	// (0x000156d4) bg_button_pane_cp017_ParamLimits

0x690e,	// (0x0001572c) popup_vitu2_query_window_g3_ParamLimits

0x690e,	// (0x0001572c) popup_vitu2_query_window_g3

0x69cb,	// (0x000157e9) popup_vitu2_query_window_t6_ParamLimits

0x69cb,	// (0x000157e9) popup_vitu2_query_window_t6

0x69f6,	// (0x00015814) popup_vitu2_query_window_t7_ParamLimits

0x69f6,	// (0x00015814) popup_vitu2_query_window_t7

0xea6c,	// (0x0001d88a) cam4_grid_pane_g1

0xea75,	// (0x0001d893) cam4_grid_pane_g2

0xf025,	// (0x0001de43) cam4_grid_pane_g3

0xf02e,	// (0x0001de4c) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0001ed6d) cam4_grid_pane_g

0x147c,	// (0x0001029a) aid_placing_vt_slider_lsc_ParamLimits

0x1787,	// (0x000105a5) vidtel_button_pane_ParamLimits

0x1787,	// (0x000105a5) vidtel_button_pane

0xf039,	// (0x0001de57) bg_button_pane_cp034

0x9468,	// (0x00018286) vidtel_button_pane_g1

0xf043,	// (0x0001de61) vidtel_button_pane_t1

0xd515,	// (0x0001c333) aid_size_vtel_slider_touch

0xd60a,	// (0x0001c428) scroll_pane_cp039

0xdf4c,	// (0x0001cd6a) ncim_query_button_pane_cp01_ParamLimits

0xdf6b,	// (0x0001cd89) ncimui_query_pane_g1_ParamLimits

0x95ba,	// (0x000183d8) input_focus_pane_cp012_ParamLimits

0xdf90,	// (0x0001cdae) ncim_query_entry_pane_t1_ParamLimits

0xd60a,	// (0x0001c428) scroll_pane_cp039_ParamLimits

0xa909,	// (0x00019727) navi_pane_bcale_mc_g1

0xa911,	// (0x0001972f) navi_pane_bcale_mc_t1

0xe4e8,	// (0x0001d306) main_sp_fs_email_pane_g1

0xe4f4,	// (0x0001d312) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0001eb03) main_sp_fs_email_pane_g

0xe90b,	// (0x0001d729) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe90b,	// (0x0001d729) list_single_cale_mrui_row_pane_g3

0x89a1,	// (0x000177bf) list_single_recal_day_pane_g5_event_pane

0xeb05,	// (0x0001d923) list_single_recal_day_pane_g7

0xf051,	// (0x0001de6f) list_recal_day_event_pane_cp01

0xf05a,	// (0x0001de78) list_recal_vselct_arw_lo_pane_cp01

0xf062,	// (0x0001de80) list_recal_vselct_arw_up_pane_cp01

0xf06a,	// (0x0001de88) list_recal_vselct_pane_cp01

0xd561,	// (0x0001c37f) list_recal_day_event_pane_cp01_g1

0xf074,	// (0x0001de92) list_recal_day_event_pane_cp01_t1

0xeb0d,	// (0x0001d92b) list_single_recal_day_pane_t1_ParamLimits

0xeb1f,	// (0x0001d93d) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0001ec5b) list_single_recal_day_pane_t_ParamLimits

0x9c36,	// (0x00018a54) bg_notes_pane_ParamLimits

0x9ce1,	// (0x00018aff) list_notes_pane_ParamLimits

0x07b4,	// (0x0000f5d2) scroll_pane_cp06_ParamLimits

0x9d1d,	// (0x00018b3b) main_notes_pane_ParamLimits

0x954a,	// (0x00018368) main_welc_pane

0x9470,	// (0x0001828e) main_welc_body_pane_ParamLimits

0x9470,	// (0x0001828e) main_welc_body_pane

0x948e,	// (0x000182ac) main_welc_opti_pane_ParamLimits

0x948e,	// (0x000182ac) main_welc_opti_pane

0x94d3,	// (0x000182f1) main_welc_pane_t1_ParamLimits

0x94d3,	// (0x000182f1) main_welc_pane_t1

0x94f1,	// (0x0001830f) main_welc_body_row_pane_ParamLimits

0x94f1,	// (0x0001830f) main_welc_body_row_pane

0xd325,	// (0x0001c143) main_welc_opti_row_pane_ParamLimits

0xd325,	// (0x0001c143) main_welc_opti_row_pane

0xf082,	// (0x0001dea0) main_welc_opti_row_pane_g1

0xf08a,	// (0x0001dea8) main_welc_opti_row_pane_t1

0xf09a,	// (0x0001deb8) main_welc_body_row_pane_t1

0xed5e,	// (0x0001db7c) popup_notif_wgt_heading_pane

0xed78,	// (0x0001db96) aid_size_list_notif_wgt_del_ParamLimits

0xed85,	// (0x0001dba3) list_notif_wgt_row_pane_g1_ParamLimits

0xed91,	// (0x0001dbaf) list_notif_wgt_row_pane_g2_ParamLimits

0xed9d,	// (0x0001dbbb) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0001ecc2) list_notif_wgt_row_pane_g_ParamLimits

0xedaa,	// (0x0001dbc8) list_notif_wgt_row_pane_t1_ParamLimits

0xedbf,	// (0x0001dbdd) list_notif_wgt_row_pane_t2_ParamLimits

0xedd1,	// (0x0001dbef) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0001ecc9) list_notif_wgt_row_pane_t_ParamLimits

0x8e5d,	// (0x00017c7b) listrow_wgtman_pane_g1_ParamLimits

0x8e6a,	// (0x00017c88) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0001ecf2) listrow_wgtman_pane_g_ParamLimits

0x8e88,	// (0x00017ca6) listrow_wgtman_pane_t1_ParamLimits

0x8ea0,	// (0x00017cbe) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0001ecf7) listrow_wgtman_pane_t_ParamLimits

0x8ec6,	// (0x00017ce4) wait_bar_pane_cp09_ParamLimits

0x954a,	// (0x00018368) bg_popup_heading_pane_cp02

0xf0a9,	// (0x0001dec7) popup_notif_wgt_heading_pane_g1

0xf0b1,	// (0x0001decf) popup_notif_wgt_heading_pane_t1

0x954a,	// (0x00018368) main_vids_pane

0x954a,	// (0x00018368) vids_listscroll_pane

0x9505,	// (0x00018323) scroll_pane_cp040

0x954a,	// (0x00018368) vids_list_pane

0x9510,	// (0x0001832e) vids_list_double_pane_ParamLimits

0x9510,	// (0x0001832e) vids_list_double_pane

0x9521,	// (0x0001833f) vids_list_double_pane_g1

0x952a,	// (0x00018348) vids_list_double_pane_t1

0x953a,	// (0x00018358) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0001ed7b) vids_list_double_pane_t

0x95ba,	// (0x000183d8) main_ncimui_pane_ParamLimits

0x75e4,	// (0x00016402) main_ncimui_pane_g1_ParamLimits

0x75f0,	// (0x0001640e) main_ncimui_pane_g2_ParamLimits

0x75f0,	// (0x0001640e) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0001ea08) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0001ea08) main_ncimui_pane_g

0x94a9,	// (0x000182c7) main_welc_pane_g1_ParamLimits

0x94a9,	// (0x000182c7) main_welc_pane_g1

0x94be,	// (0x000182dc) main_welc_pane_g2_ParamLimits

0x94be,	// (0x000182dc) main_welc_pane_g2

0x0001,

0xff58,	// (0x0001ed76) main_welc_pane_g_ParamLimits

0xff58,	// (0x0001ed76) main_welc_pane_g

0x9c36,	// (0x00018a54) listscroll_mce_pane_ParamLimits

0xaa5e,	// (0x0001987c) wait_bar_pane_cp10

0xbf2c,	// (0x0001ad4a) main_cale_day_pane_ParamLimits

0xbf2c,	// (0x0001ad4a) main_cale_week_pane_ParamLimits

0x9c36,	// (0x00018a54) main_messa_pane_ParamLimits

0x4e1e,	// (0x00013c3c) main_clock2_btn_pane_ParamLimits

0x4e1e,	// (0x00013c3c) main_clock2_btn_pane

0xc873,	// (0x0001b691) main_clock2_btn_pane_cp01_ParamLimits

0xc873,	// (0x0001b691) main_clock2_btn_pane_cp01

0xe897,	// (0x0001d6b5) list_cale_mrui_pane_ParamLimits

0xee07,	// (0x0001dc25) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0001ecd0) main_cf0_pane_g

0x9099,	// (0x00017eb7) area_left_week_number_pane_ParamLimits

0x90a5,	// (0x00017ec3) area_top_day_name_pane_ParamLimits

0x90b8,	// (0x00017ed6) frame_month_view_pane_ParamLimits

0xef2f,	// (0x0001dd4d) grid_month_view_pane_ParamLimits

0xef3d,	// (0x0001dd5b) frm_month_g1_ParamLimits

0x9139,	// (0x00017f57) frm_month_g2_ParamLimits

0x914c,	// (0x00017f6a) frm_month_g3_ParamLimits

0x915f,	// (0x00017f7d) frm_month_g4_ParamLimits

0x9172,	// (0x00017f90) frm_month_g5_ParamLimits

0x9185,	// (0x00017fa3) frm_month_g6_ParamLimits

0x9198,	// (0x00017fb6) frm_month_g7_ParamLimits

0xef4a,	// (0x0001dd68) frm_month_g8_ParamLimits

0x91ab,	// (0x00017fc9) frm_month_g9_ParamLimits

0x91bb,	// (0x00017fd9) frm_month_g10_ParamLimits

0x91cb,	// (0x00017fe9) frm_month_g11_ParamLimits

0x91db,	// (0x00017ff9) frm_month_g12_ParamLimits

0x91ed,	// (0x0001800b) frm_month_g13_ParamLimits

0x91ff,	// (0x0001801d) frm_month_g14_ParamLimits

0x9213,	// (0x00018031) frm_month_g15_ParamLimits

0x9227,	// (0x00018045) frm_month_g16_ParamLimits

0xff03,	// (0x0001ed21) frm_month_g_ParamLimits

0xef57,	// (0x0001dd75) cell_top_day_name_pane_t1_ParamLimits

0x923b,	// (0x00018059) cell_area_left_week_number_pane_g1_ParamLimits

0x9247,	// (0x00018065) cell_area_left_week_number_pane_t1_ParamLimits

0xc6bf,	// (0x0001b4dd) cell_month_view_pane_g1_ParamLimits

0x925a,	// (0x00018078) cell_month_view_pane_t1_ParamLimits

0x9c2e,	// (0x00018a4c) main_clock2_btn_pane_g1

0xf0bf,	// (0x0001dedd) main_clock2_btn_pane_t1

0x95ba,	// (0x000183d8) listscroll_cmail_pane_ParamLimits

0xe4e8,	// (0x0001d306) main_sp_fs_email_pane_g1_ParamLimits

0xe4f4,	// (0x0001d312) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0001eb03) main_sp_fs_email_pane_g_ParamLimits

0xea5b,	// (0x0001d879) list_recal_day_pane_ParamLimits

0xea7e,	// (0x0001d89c) mian_recal_day_pane_t1

0x80c2,	// (0x00016ee0) list_single_dyc_row_text_pane_t4_ParamLimits

0x80c2,	// (0x00016ee0) list_single_dyc_row_text_pane_t4

0x810b,	// (0x00016f29) list_single_dyc_row_text_pane_t5_ParamLimits

0x810b,	// (0x00016f29) list_single_dyc_row_text_pane_t5

0xe596,	// (0x0001d3b4) list_single_dyc_row_text_pane_t6_ParamLimits

0xe596,	// (0x0001d3b4) list_single_dyc_row_text_pane_t6

0x2453,	// (0x00011271) aid_mgn_list_cale_time_pane

0x95ba,	// (0x000183d8) main_gallery2_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
