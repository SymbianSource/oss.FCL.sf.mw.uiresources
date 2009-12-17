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

#include "aknlayoutscalable_elaf_pql_apps_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00064cd2 };

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
0x2f1b,	// (0x00067bed) Screen

0x2f25,	// (0x00067bf7) application_window

0x2f54,	// (0x00067c26) area_bottom_pane_ParamLimits

0x2f54,	// (0x00067c26) area_bottom_pane

0x2f87,	// (0x00067c59) area_top_pane_ParamLimits

0x2f87,	// (0x00067c59) area_top_pane

0xa5b9,	// (0x0006f28b) call_video_uplink_pane_ParamLimits

0xa5b9,	// (0x0006f28b) call_video_uplink_pane

0x2ff8,	// (0x00067cca) main_pane_ParamLimits

0x2ff8,	// (0x00067cca) main_pane

0xc22c,	// (0x00070efe) context_pane

0x66e7,	// (0x0006b3b9) navi_pane

0x6710,	// (0x0006b3e2) popup_cale_events_window_ParamLimits

0x6710,	// (0x0006b3e2) popup_cale_events_window

0xc23f,	// (0x00070f11) popup_mup_playback_window

0x6728,	// (0x0006b3fa) signal_pane

0xad32,	// (0x0006fa04) main_browser_pane

0x5439,	// (0x0006a10b) main_burst_pane

0xea7f,	// (0x00073751) main_calc_pane

0x5439,	// (0x0006a10b) main_cale_day_pane

0xaefa,	// (0x0006fbcc) main_cale_month_pane

0x5439,	// (0x0006a10b) main_cale_week_pane

0x5439,	// (0x0006a10b) main_call_pane

0xa9e6,	// (0x0006f6b8) main_call_poc_pane

0x5439,	// (0x0006a10b) main_camera_pane

0x5439,	// (0x0006a10b) main_chi_dic_pane

0x4fd2,	// (0x00069ca4) main_clock_pane

0xa9e6,	// (0x0006f6b8) main_fmradio_pane

0x5439,	// (0x0006a10b) main_graph_messa_pane

0xa9e6,	// (0x0006f6b8) main_help_pane

0xad32,	// (0x0006fa04) main_im_pane

0xac41,	// (0x0006f913) main_image_pane_ParamLimits

0xac41,	// (0x0006f913) main_image_pane

0xa9e6,	// (0x0006f6b8) main_location2_pane

0x5439,	// (0x0006a10b) main_location_pane

0xa9e6,	// (0x0006f6b8) main_messa_pane

0xa9e6,	// (0x0006f6b8) main_mp2_pane

0x5439,	// (0x0006a10b) main_mp_pane

0xa9e6,	// (0x0006f6b8) main_msg_pane

0xa9e6,	// (0x0006f6b8) main_mup_eq_pane

0xa9e6,	// (0x0006f6b8) main_mup_pane

0x5439,	// (0x0006a10b) main_notes_pane

0xa9e6,	// (0x0006f6b8) main_pec_pane

0xa9e6,	// (0x0006f6b8) main_phob_pane

0xa9e6,	// (0x0006f6b8) main_pinb_pane

0xa9e6,	// (0x0006f6b8) main_postcard_pane

0xa9e6,	// (0x0006f6b8) main_qdial_pane

0x5439,	// (0x0006a10b) main_skin_pane

0xa9e6,	// (0x0006f6b8) main_smil2_pane

0x5439,	// (0x0006a10b) main_smil_pane

0x5439,	// (0x0006a10b) main_video_pane

0x5439,	// (0x0006a10b) main_video_tele_pane

0xac41,	// (0x0006f913) main_viewer_pane_ParamLimits

0xac41,	// (0x0006f913) main_viewer_pane

0x5439,	// (0x0006a10b) main_vorec_pane

0x64c7,	// (0x0006b199) popup_blid_sat_info_window_ParamLimits

0x64c7,	// (0x0006b199) popup_blid_sat_info_window

0x651d,	// (0x0006b1ef) popup_dyc_status_message_window_ParamLimits

0x651d,	// (0x0006b1ef) popup_dyc_status_message_window

0x6533,	// (0x0006b205) popup_grid_large_graphic_window_ParamLimits

0x6533,	// (0x0006b205) popup_grid_large_graphic_window

0x65c9,	// (0x0006b29b) popup_loc_request_window_ParamLimits

0x65c9,	// (0x0006b29b) popup_loc_request_window

0x66c1,	// (0x0006b393) popup_wml_address_window_ParamLimits

0x66c1,	// (0x0006b393) popup_wml_address_window

0x631d,	// (0x0006afef) call_muted_g1

0x6042,	// (0x0006ad14) popup_call_audio_conf_window_ParamLimits

0x6042,	// (0x0006ad14) popup_call_audio_conf_window

0x632d,	// (0x0006afff) popup_call_audio_first_window_ParamLimits

0x632d,	// (0x0006afff) popup_call_audio_first_window

0x638b,	// (0x0006b05d) popup_call_audio_in_window_ParamLimits

0x638b,	// (0x0006b05d) popup_call_audio_in_window

0x63b7,	// (0x0006b089) popup_call_audio_out_window_ParamLimits

0x63b7,	// (0x0006b089) popup_call_audio_out_window

0x63e5,	// (0x0006b0b7) popup_call_audio_second_window_ParamLimits

0x63e5,	// (0x0006b0b7) popup_call_audio_second_window

0x642b,	// (0x0006b0fd) popup_call_audio_wait_window_ParamLimits

0x642b,	// (0x0006b0fd) popup_call_audio_wait_window

0x645e,	// (0x0006b130) popup_number_entry_window_ParamLimits

0x645e,	// (0x0006b130) popup_number_entry_window

0xa5d5,	// (0x0006f2a7) bg_popup_call_pane_cp05_ParamLimits

0xa5d5,	// (0x0006f2a7) bg_popup_call_pane_cp05

0xa5f5,	// (0x0006f2c7) popup_number_entry_window_t1

0xa608,	// (0x0006f2da) popup_number_entry_window_t2

0xa61a,	// (0x0006f2ec) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x00073e01) popup_number_entry_window_t

0xa62c,	// (0x0006f2fe) text_title_cp2

0xa63f,	// (0x0006f311) bg_popup_call_pane_cp_ParamLimits

0xa63f,	// (0x0006f311) bg_popup_call_pane_cp

0xa64d,	// (0x0006f31f) call_thumbnail_pane

0xa655,	// (0x0006f327) popup_call_audio_in_window_g1_ParamLimits

0xa655,	// (0x0006f327) popup_call_audio_in_window_g1

0xa661,	// (0x0006f333) popup_call_audio_in_window_g2_ParamLimits

0xa661,	// (0x0006f333) popup_call_audio_in_window_g2

0xa66d,	// (0x0006f33f) popup_call_audio_in_window_g3_ParamLimits

0xa66d,	// (0x0006f33f) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x00073e0a) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x00073e0a) popup_call_audio_in_window_g

0xa679,	// (0x0006f34b) popup_call_audio_in_window_t1_ParamLimits

0xa679,	// (0x0006f34b) popup_call_audio_in_window_t1

0xa694,	// (0x0006f366) popup_call_audio_in_window_t2_ParamLimits

0xa694,	// (0x0006f366) popup_call_audio_in_window_t2

0xa6af,	// (0x0006f381) popup_call_audio_in_window_t3_ParamLimits

0xa6af,	// (0x0006f381) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x00073e11) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x00073e11) popup_call_audio_in_window_t

0xa63f,	// (0x0006f311) bg_popup_call_pane_cp01_ParamLimits

0xa63f,	// (0x0006f311) bg_popup_call_pane_cp01

0xa64d,	// (0x0006f31f) call_thumbnail_pane_cp02

0xa6c2,	// (0x0006f394) call_type_pane_cp022

0xa6ca,	// (0x0006f39c) popup_call_audio_out_window_g1_ParamLimits

0xa6ca,	// (0x0006f39c) popup_call_audio_out_window_g1

0xa6dc,	// (0x0006f3ae) popup_call_audio_out_window_g2_ParamLimits

0xa6dc,	// (0x0006f3ae) popup_call_audio_out_window_g2

0xa6e8,	// (0x0006f3ba) popup_call_audio_out_window_g3_ParamLimits

0xa6e8,	// (0x0006f3ba) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x00073e18) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x00073e18) popup_call_audio_out_window_g

0xa6fa,	// (0x0006f3cc) popup_call_audio_out_window_t1_ParamLimits

0xa6fa,	// (0x0006f3cc) popup_call_audio_out_window_t1

0xa712,	// (0x0006f3e4) popup_call_audio_out_window_t2_ParamLimits

0xa712,	// (0x0006f3e4) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x00073e1f) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x00073e1f) popup_call_audio_out_window_t

0xa727,	// (0x0006f3f9) bg_popup_call_pane_ParamLimits

0xa727,	// (0x0006f3f9) bg_popup_call_pane

0x3182,	// (0x00067e54) call_thumbnail_pane_cp_ParamLimits

0x3182,	// (0x00067e54) call_thumbnail_pane_cp

0xa7ab,	// (0x0006f47d) call_type_pane_cp01_ParamLimits

0xa7ab,	// (0x0006f47d) call_type_pane_cp01

0xa7ef,	// (0x0006f4c1) popup_call_audio_first_window_g1_ParamLimits

0xa7ef,	// (0x0006f4c1) popup_call_audio_first_window_g1

0xa83b,	// (0x0006f50d) popup_call_audio_first_window_g2_ParamLimits

0xa83b,	// (0x0006f50d) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x00073e24) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x00073e24) popup_call_audio_first_window_g

0xa87f,	// (0x0006f551) popup_call_audio_first_window_t1_ParamLimits

0xa87f,	// (0x0006f551) popup_call_audio_first_window_t1

0xa92b,	// (0x0006f5fd) popup_call_audio_first_window_t4_ParamLimits

0xa92b,	// (0x0006f5fd) popup_call_audio_first_window_t4

0xa9b7,	// (0x0006f689) popup_call_audio_first_window_t5_ParamLimits

0xa9b7,	// (0x0006f689) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x00073e29) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x00073e29) popup_call_audio_first_window_t

0xa9e6,	// (0x0006f6b8) bg_popup_call_pane_cp02

0xa9f0,	// (0x0006f6c2) call_type_pane_cp023

0xa9f8,	// (0x0006f6ca) popup_call_audio_wait_window_g1

0xaa00,	// (0x0006f6d2) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x00073e30) popup_call_audio_wait_window_g

0xaa08,	// (0x0006f6da) popup_call_audio_wait_window_t3

0xaa16,	// (0x0006f6e8) bg_popup_call_pane_cp03_ParamLimits

0xaa16,	// (0x0006f6e8) bg_popup_call_pane_cp03

0xaa76,	// (0x0006f748) call_thumbnail_pane_cp011_ParamLimits

0xaa76,	// (0x0006f748) call_thumbnail_pane_cp011

0xaa82,	// (0x0006f754) call_type_pane_cp034_ParamLimits

0xaa82,	// (0x0006f754) call_type_pane_cp034

0xaabe,	// (0x0006f790) popup_call_audio_second_window_g1_ParamLimits

0xaabe,	// (0x0006f790) popup_call_audio_second_window_g1

0xaafa,	// (0x0006f7cc) popup_call_audio_second_window_g2_ParamLimits

0xaafa,	// (0x0006f7cc) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x00073e35) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x00073e35) popup_call_audio_second_window_g

0xab36,	// (0x0006f808) popup_call_audio_second_window_t1_ParamLimits

0xab36,	// (0x0006f808) popup_call_audio_second_window_t1

0xabb7,	// (0x0006f889) popup_call_audio_second_window_t2_ParamLimits

0xabb7,	// (0x0006f889) popup_call_audio_second_window_t2

0xabed,	// (0x0006f8bf) popup_call_audio_second_window_t3_ParamLimits

0xabed,	// (0x0006f8bf) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x00073e3a) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x00073e3a) popup_call_audio_second_window_t

0xa9e6,	// (0x0006f6b8) bg_popup_call_pane_cp04

0xac23,	// (0x0006f8f5) list_conf_pane

0xac2b,	// (0x0006f8fd) popup_call_audio_conf_window_t1

0xac39,	// (0x0006f90b) call_thumbnail_pane_g1

0xac41,	// (0x0006f913) bg_pinb_pane_ParamLimits

0xac41,	// (0x0006f913) bg_pinb_pane

0xac4f,	// (0x0006f921) find_pinb_pane

0xac58,	// (0x0006f92a) listscroll_pinb_pane_ParamLimits

0xac58,	// (0x0006f92a) listscroll_pinb_pane

0xac67,	// (0x0006f939) pinb_bg_pane_g1

0x31a6,	// (0x00067e78) pinb_bg_pane_g2

0x31b0,	// (0x00067e82) pinb_bg_pane_g3

0x31ba,	// (0x00067e8c) pinb_bg_pane_g4

0x31c4,	// (0x00067e96) pinb_bg_pane_g5

0x31ce,	// (0x00067ea0) pinb_bg_pane_g6

0x31d7,	// (0x00067ea9) pinb_bg_pane_g7

0x31e0,	// (0x00067eb2) pinb_bg_pane_g8

0x31eb,	// (0x00067ebd) pinb_bg_pane_g9

0x31f5,	// (0x00067ec7) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x00073e41) pinb_bg_pane_g

0x3210,	// (0x00067ee2) grid_pinb_pane

0x3219,	// (0x00067eeb) list_pinb_pane

0x3222,	// (0x00067ef4) scroll_pane_cp01_ParamLimits

0x3222,	// (0x00067ef4) scroll_pane_cp01

0xac71,	// (0x0006f943) find_pinb_pane_g1_ParamLimits

0xac71,	// (0x0006f943) find_pinb_pane_g1

0xac89,	// (0x0006f95b) find_pinb_pane_t1

0xac9b,	// (0x0006f96d) find_pinb_pane_t2

0x0001,

0xf189,	// (0x00073e5b) find_pinb_pane_t

0xacb0,	// (0x0006f982) input_focus_pane_cp01_ParamLimits

0xacb0,	// (0x0006f982) input_focus_pane_cp01

0x3234,	// (0x00067f06) cell_pinb_pane_ParamLimits

0x3234,	// (0x00067f06) cell_pinb_pane

0x324f,	// (0x00067f21) cell_pinb_pane_g1_ParamLimits

0x324f,	// (0x00067f21) cell_pinb_pane_g1

0x325f,	// (0x00067f31) cell_pinb_pane_g2_ParamLimits

0x325f,	// (0x00067f31) cell_pinb_pane_g2

0xacbc,	// (0x0006f98e) cell_pinb_pane_g3_ParamLimits

0xacbc,	// (0x0006f98e) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x00073e60) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x00073e60) cell_pinb_pane_g

0xa9e6,	// (0x0006f6b8) grid_highlight_pane_cp01

0x326b,	// (0x00067f3d) list_pinb_item_pane_ParamLimits

0x326b,	// (0x00067f3d) list_pinb_item_pane

0xa9e6,	// (0x0006f6b8) list_highlight_pane_cp02

0x327d,	// (0x00067f4f) list_pinb_item_pane_g1_ParamLimits

0x327d,	// (0x00067f4f) list_pinb_item_pane_g1

0x328a,	// (0x00067f5c) list_pinb_item_pane_g2_ParamLimits

0x328a,	// (0x00067f5c) list_pinb_item_pane_g2

0x3296,	// (0x00067f68) list_pinb_item_pane_g3_ParamLimits

0x3296,	// (0x00067f68) list_pinb_item_pane_g3

0x32a7,	// (0x00067f79) list_pinb_item_pane_g4_ParamLimits

0x32a7,	// (0x00067f79) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x00073e67) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x00073e67) list_pinb_item_pane_g

0x32b3,	// (0x00067f85) list_pinb_item_pane_t1_ParamLimits

0x32b3,	// (0x00067f85) list_pinb_item_pane_t1

0x32e8,	// (0x00067fba) calc_display_pane

0x3304,	// (0x00067fd6) calc_paper_pane

0x3325,	// (0x00067ff7) grid_calc_pane

0xa9e6,	// (0x0006f6b8) bg_list_pane_cp01

0x3341,	// (0x00068013) clock_g1

0x3349,	// (0x0006801b) clock_g2

0x0001,

0xf19e,	// (0x00073e70) clock_g

0x3351,	// (0x00068023) clock_t1_ParamLimits

0x3351,	// (0x00068023) clock_t1

0x3366,	// (0x00068038) clock_t2_ParamLimits

0x3366,	// (0x00068038) clock_t2

0x3378,	// (0x0006804a) clock_t3_ParamLimits

0x3378,	// (0x0006804a) clock_t3

0x338a,	// (0x0006805c) clock_t4_ParamLimits

0x338a,	// (0x0006805c) clock_t4

0x339c,	// (0x0006806e) clock_t5_ParamLimits

0x339c,	// (0x0006806e) clock_t5

0x33b1,	// (0x00068083) clock_t6_ParamLimits

0x33b1,	// (0x00068083) clock_t6

0x33c3,	// (0x00068095) clock_t7_ParamLimits

0x33c3,	// (0x00068095) clock_t7

0x33d5,	// (0x000680a7) clock_t8_ParamLimits

0x33d5,	// (0x000680a7) clock_t8

0x33e7,	// (0x000680b9) clock_t9_ParamLimits

0x33e7,	// (0x000680b9) clock_t9

0x0008,

0xf1a3,	// (0x00073e75) clock_t_ParamLimits

0xf1a3,	// (0x00073e75) clock_t

0xacd0,	// (0x0006f9a2) popup_clock_analogue_window_cp02

0xacd0,	// (0x0006f9a2) popup_clock_digital_window_cp01

0xacd8,	// (0x0006f9aa) listscroll_help_pane

0xa9e6,	// (0x0006f6b8) phob_pre_status_pane

0xace2,	// (0x0006f9b4) grid_qdial_pane

0xa9e6,	// (0x0006f6b8) listscroll_mce_pane

0xacec,	// (0x0006f9be) bg_notes_pane

0xacf6,	// (0x0006f9c8) list_notes_pane

0x33f9,	// (0x000680cb) scroll_pane_cp06

0xad00,	// (0x0006f9d2) bg_calc_paper_pane

0xad18,	// (0x0006f9ea) list_calc_pane

0xad32,	// (0x0006fa04) bg_calc_display_pane

0xad3e,	// (0x0006fa10) calc_display_pane_t1

0xad53,	// (0x0006fa25) calc_display_pane_t2

0xad68,	// (0x0006fa3a) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x00073e88) calc_display_pane_t

0x3404,	// (0x000680d6) cell_calc_pane_ParamLimits

0x3404,	// (0x000680d6) cell_calc_pane

0xad7a,	// (0x0006fa4c) bg_calc_paper_pane_g1

0xad86,	// (0x0006fa58) bg_calc_paper_pane_g2

0xad92,	// (0x0006fa64) bg_calc_paper_pane_g3

0xad9e,	// (0x0006fa70) bg_calc_paper_pane_g4

0xadaa,	// (0x0006fa7c) bg_calc_paper_pane_g5

0x3437,	// (0x00068109) bg_calc_paper_pane_g6

0x3446,	// (0x00068118) bg_calc_paper_pane_g7

0x3455,	// (0x00068127) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x00073e8f) bg_calc_paper_pane_g

0x3464,	// (0x00068136) calc_bg_paper_pane_g9

0x3473,	// (0x00068145) list_calc_item_pane_ParamLimits

0x3473,	// (0x00068145) list_calc_item_pane

0xadb6,	// (0x0006fa88) list_calc_item_pane_g1

0xadc3,	// (0x0006fa95) list_calc_item_pane_t1_ParamLimits

0xadc3,	// (0x0006fa95) list_calc_item_pane_t1

0x3487,	// (0x00068159) list_calc_item_pane_t2_ParamLimits

0x3487,	// (0x00068159) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x00073ea0) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x00073ea0) list_calc_item_pane_t

0xadd5,	// (0x0006faa7) cell_calc_pane_g1

0xaddf,	// (0x0006fab1) grid_highlight_pane_cp02

0xae01,	// (0x0006fad3) bg_calc_display_pane_g1

0xae0a,	// (0x0006fadc) bg_calc_display_pane_g2

0xae14,	// (0x0006fae6) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x00073eaa) bg_calc_display_pane_g

0x34b5,	// (0x00068187) cell_qdial_pane_ParamLimits

0x34b5,	// (0x00068187) cell_qdial_pane

0x34c7,	// (0x00068199) cell_qdial_pane_g1_ParamLimits

0x34c7,	// (0x00068199) cell_qdial_pane_g1

0x34dd,	// (0x000681af) cell_qdial_pane_g2_ParamLimits

0x34dd,	// (0x000681af) cell_qdial_pane_g2

0xae1d,	// (0x0006faef) cell_qdial_pane_g3_ParamLimits

0xae1d,	// (0x0006faef) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x00073eb1) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x00073eb1) cell_qdial_pane_g

0x3504,	// (0x000681d6) cell_qdial_pane_t1_ParamLimits

0x3504,	// (0x000681d6) cell_qdial_pane_t1

0x351c,	// (0x000681ee) cell_qdial_pane_t2_ParamLimits

0x351c,	// (0x000681ee) cell_qdial_pane_t2

0x352f,	// (0x00068201) cell_qdial_pane_t3_ParamLimits

0x352f,	// (0x00068201) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x00073eba) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x00073eba) cell_qdial_pane_t

0xa9e6,	// (0x0006f6b8) grid_highlight_pane_cp04

0xae29,	// (0x0006fafb) thumbnail_qdial_pane_ParamLimits

0xae29,	// (0x0006fafb) thumbnail_qdial_pane

0xae85,	// (0x0006fb57) list_help_pane

0xae8f,	// (0x0006fb61) scroll_pane_cp02

0x3542,	// (0x00068214) help_list_pane_t1_ParamLimits

0x3542,	// (0x00068214) help_list_pane_t1

0xae98,	// (0x0006fb6a) bg_notes_pane_g2

0xaea0,	// (0x0006fb72) bg_notes_pane_g3

0xaea8,	// (0x0006fb7a) notes_bg_pane_g1

0xaeb0,	// (0x0006fb82) notes_bg_pane_g4

0xaeb8,	// (0x0006fb8a) notes_bg_pane_g5

0xaec0,	// (0x0006fb92) notes_bg_pane_g6

0xaec8,	// (0x0006fb9a) notes_bg_pane_g7

0xaed0,	// (0x0006fba2) notes_bg_pane_g8

0xaed8,	// (0x0006fbaa) notes_bg_pane_g9

0x0006,

0xf206,	// (0x00073ed8) notes_bg_pane_g

0xea8d,	// (0x0007375f) list_notes_text_pane_ParamLimits

0xea8d,	// (0x0007375f) list_notes_text_pane

0xaee0,	// (0x0006fbb2) list_notes_text_pane_g1

0x2647,	// (0x00067319) list_notes_text_pane_t1

0xaefa,	// (0x0006fbcc) listscroll_cale_week_pane

0x3579,	// (0x0006824b) bg_cale_heading_pane

0xaf09,	// (0x0006fbdb) bg_cale_pane_cp01

0x358d,	// (0x0006825f) cale_week_corner_pane

0x35a3,	// (0x00068275) cale_week_day_heading_pane

0x35b7,	// (0x00068289) cale_week_scroll_pane_g1

0x35c8,	// (0x0006829a) cale_week_scroll_pane_g2

0x35d9,	// (0x000682ab) cale_week_scroll_pane_g3

0x35ea,	// (0x000682bc) cale_week_scroll_pane_g4

0x35fb,	// (0x000682cd) cale_week_scroll_pane_g5

0x360c,	// (0x000682de) cale_week_scroll_pane_g6

0x361d,	// (0x000682ef) cale_week_scroll_pane_g7

0x362e,	// (0x00068300) cale_week_scroll_pane_g8

0x3641,	// (0x00068313) cale_week_scroll_pane_g9

0x3652,	// (0x00068324) cale_week_scroll_pane_g10

0x3663,	// (0x00068335) cale_week_scroll_pane_g11

0x3674,	// (0x00068346) cale_week_scroll_pane_g12

0x3685,	// (0x00068357) cale_week_scroll_pane_g13

0x3696,	// (0x00068368) cale_week_scroll_pane_g14

0x36a7,	// (0x00068379) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x00073ee7) cale_week_scroll_pane_g

0x36b8,	// (0x0006838a) cale_week_time_pane

0x36cb,	// (0x0006839d) grid_cale_week_pane

0x36de,	// (0x000683b0) scroll_pane_cp08

0x36f8,	// (0x000683ca) cell_cale_week_pane_ParamLimits

0x36f8,	// (0x000683ca) cell_cale_week_pane

0x3734,	// (0x00068406) cale_week_day_heading_pane_t1

0x375e,	// (0x00068430) cale_week_day_heading_pane_t2

0x3788,	// (0x0006845a) cale_week_day_heading_pane_t3

0x37b2,	// (0x00068484) cale_week_day_heading_pane_t4

0x37dc,	// (0x000684ae) cale_week_day_heading_pane_t5

0x3806,	// (0x000684d8) cale_week_day_heading_pane_t6

0x3830,	// (0x00068502) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x00073f06) cale_week_day_heading_pane_t

0xaf34,	// (0x0006fc06) bg_cale_side_pane

0x385a,	// (0x0006852c) cale_week_time_pane_t1

0x3886,	// (0x00068558) cale_week_time_pane_t2

0x38b2,	// (0x00068584) cale_week_time_pane_t3

0x38de,	// (0x000685b0) cale_week_time_pane_t4

0x390a,	// (0x000685dc) cale_week_time_pane_t5

0x3936,	// (0x00068608) cale_week_time_pane_t6

0x3962,	// (0x00068634) cale_week_time_pane_t7

0x398e,	// (0x00068660) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x00073f15) cale_week_time_pane_t

0x39ba,	// (0x0006868c) cell_cale_week_pane_g2

0x39d3,	// (0x000686a5) cell_cale_week_pane_g3_ParamLimits

0x39d3,	// (0x000686a5) cell_cale_week_pane_g3

0xaf42,	// (0x0006fc14) grid_highlight_pane_cp07

0xaf4a,	// (0x0006fc1c) listscroll_gms_pane

0xaf54,	// (0x0006fc26) grid_gms_pane

0xaf5d,	// (0x0006fc2f) listscroll_gms_pane_g1

0xaf65,	// (0x0006fc37) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x00073f26) listscroll_gms_pane_g

0x39eb,	// (0x000686bd) scroll_pane_cp010

0x39f6,	// (0x000686c8) cell_gms_pane_ParamLimits

0x39f6,	// (0x000686c8) cell_gms_pane

0x3a06,	// (0x000686d8) cell_gms_pane_g1

0xaf6d,	// (0x0006fc3f) cell_gms_pane_g2

0xaee0,	// (0x0006fbb2) cell_gms_pane_g3

0xaf75,	// (0x0006fc47) cell_gms_pane_g4

0x0003,

0xf259,	// (0x00073f2b) cell_gms_pane_g

0xaf7e,	// (0x0006fc50) grid_highlight_pane_cp09

0x62cb,	// (0x0006af9d) phob_pre_status_pane_g1

0x62d3,	// (0x0006afa5) phob_pre_status_pane_g2

0x62db,	// (0x0006afad) phob_pre_status_pane_g3

0x62e3,	// (0x0006afb5) phob_pre_status_pane_g4

0x0004,

0xf65b,	// (0x0007432d) phob_pre_status_pane_g

0x62f3,	// (0x0006afc5) phob_pre_status_pane_t1

0x6301,	// (0x0006afd3) phob_pre_status_pane_t2

0x630f,	// (0x0006afe1) phob_pre_status_pane_t3

0x0002,

0xf666,	// (0x00074338) phob_pre_status_pane_t

0xa9e6,	// (0x0006f6b8) bg_list_pane_cp05

0x3a16,	// (0x000686e8) grid_vorec_pane

0xaf86,	// (0x0006fc58) vorec_t1

0xaf94,	// (0x0006fc66) vorec_t2

0xafa2,	// (0x0006fc74) vorec_t3

0xafb0,	// (0x0006fc82) vorec_t4

0xafbe,	// (0x0006fc90) vorec_t5

0xafcc,	// (0x0006fc9e) vorec_t6

0x0006,

0xf262,	// (0x00073f34) vorec_t

0xafe8,	// (0x0006fcba) wait_bar_pane_cp01

0x3a1e,	// (0x000686f0) cell_vorec_pane_ParamLimits

0x3a1e,	// (0x000686f0) cell_vorec_pane

0xaff0,	// (0x0006fcc2) cell_vorec_pane_g1

0xa9e6,	// (0x0006f6b8) grid_highlight_pane_cp05

0x3a43,	// (0x00068715) cams_zoom_pane

0x3a52,	// (0x00068724) image_vga_pane

0x3a6a,	// (0x0006873c) main_camera_pane_g1

0x3a7a,	// (0x0006874c) main_camera_pane_g2

0x3a8a,	// (0x0006875c) main_camera_pane_g3

0x3a9a,	// (0x0006876c) main_camera_pane_g4

0x3aaa,	// (0x0006877c) main_camera_pane_g5

0x3aba,	// (0x0006878c) main_camera_pane_g6

0x3aca,	// (0x0006879c) main_camera_pane_g7

0x0007,

0xf271,	// (0x00073f43) main_camera_pane_g

0x3ada,	// (0x000687ac) main_camera_pane_t1

0x3af0,	// (0x000687c2) main_camera_pane_t2

0x0001,

0xf282,	// (0x00073f54) main_camera_pane_t

0x3b22,	// (0x000687f4) cams_zoom_pane_cp_ParamLimits

0x3b22,	// (0x000687f4) cams_zoom_pane_cp

0x3b4a,	// (0x0006881c) image_cif_pane_ParamLimits

0x3b4a,	// (0x0006881c) image_cif_pane

0x3b7b,	// (0x0006884d) image_subqcif_pane

0x3b83,	// (0x00068855) main_video_pane_g1_ParamLimits

0x3b83,	// (0x00068855) main_video_pane_g1

0x3ba7,	// (0x00068879) main_video_pane_g2_ParamLimits

0x3ba7,	// (0x00068879) main_video_pane_g2

0x3bdb,	// (0x000688ad) main_video_pane_g3_ParamLimits

0x3bdb,	// (0x000688ad) main_video_pane_g3

0x3c09,	// (0x000688db) main_video_pane_g4_ParamLimits

0x3c09,	// (0x000688db) main_video_pane_g4

0x3c37,	// (0x00068909) main_video_pane_g5_ParamLimits

0x3c37,	// (0x00068909) main_video_pane_g5

0xb006,	// (0x0006fcd8) main_video_pane_g6_ParamLimits

0xb006,	// (0x0006fcd8) main_video_pane_g6

0x0006,

0xf287,	// (0x00073f59) main_video_pane_g_ParamLimits

0xf287,	// (0x00073f59) main_video_pane_g

0x3c5e,	// (0x00068930) main_video_pane_t1_ParamLimits

0x3c5e,	// (0x00068930) main_video_pane_t1

0xb020,	// (0x0006fcf2) cams_zoom_pane_g1

0xb029,	// (0x0006fcfb) cams_zoom_pane_g2

0xb032,	// (0x0006fd04) cams_zoom_pane_g3

0xb03b,	// (0x0006fd0d) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x00073f68) cams_zoom_pane_g

0x3cbb,	// (0x0006898d) grid_cams_pane

0x3cd0,	// (0x000689a2) linegrid_cams_pane

0x3ce1,	// (0x000689b3) cell_cams_pane_ParamLimits

0x3ce1,	// (0x000689b3) cell_cams_pane

0xb044,	// (0x0006fd16) cams_burst_image_pane

0xb04c,	// (0x0006fd1e) cell_cams_pane_g1

0xa9e6,	// (0x0006f6b8) grid_highlight_pane_cp03

0xadd5,	// (0x0006faa7) mp_bg_pane_g1

0xa9e6,	// (0x0006f6b8) bg_list_pane_cp03

0xc108,	// (0x00070dda) bg_mp_pane

0xc110,	// (0x00070de2) grid_mp_pane

0xc118,	// (0x00070dea) media_player_g1

0xc120,	// (0x00070df2) media_player_t1

0xc12e,	// (0x00070e00) media_player_t2

0xc13c,	// (0x00070e0e) media_player_t3

0xc14a,	// (0x00070e1c) media_player_t4

0xc158,	// (0x00070e2a) media_player_t5

0xc166,	// (0x00070e38) media_player_t6

0xc174,	// (0x00070e46) media_player_t7

0x0006,

0xf645,	// (0x00074317) media_player_t

0xc182,	// (0x00070e54) wait_bar_pane_cp02

0xf62a,	// (0x000742fc) main_usb_pane_t

0x62c2,	// (0x0006af94) cell_mp_pane

0xadd5,	// (0x0006faa7) cell_mp_pane_g1

0xa9e6,	// (0x0006f6b8) grid_highlight_pane_cp06

0xb0f4,	// (0x0006fdc6) grid_skin_colour_pane

0xb0fc,	// (0x0006fdce) list_highlight_pane_cp03

0x3cff,	// (0x000689d1) skin_g1

0xb104,	// (0x0006fdd6) skin_t1

0xb113,	// (0x0006fde5) skin_t2

0x0001,

0xf2cb,	// (0x00073f9d) skin_t

0x3d07,	// (0x000689d9) cell_skin_colour_pane_ParamLimits

0x3d07,	// (0x000689d9) cell_skin_colour_pane

0xb121,	// (0x0006fdf3) cell_skin_colour_pane_g1

0x3d59,	// (0x00068a2b) call_video_g1_ParamLimits

0x3d59,	// (0x00068a2b) call_video_g1

0x3d6f,	// (0x00068a41) call_video_g2_ParamLimits

0x3d6f,	// (0x00068a41) call_video_g2

0x0001,

0xf2d0,	// (0x00073fa2) call_video_g_ParamLimits

0xf2d0,	// (0x00073fa2) call_video_g

0x3da5,	// (0x00068a77) call_video_uplink_pane_cp1_ParamLimits

0x3da5,	// (0x00068a77) call_video_uplink_pane_cp1

0xb13b,	// (0x0006fe0d) call_video_uplink_pane_cp2

0x3e0c,	// (0x00068ade) video_down_crop_pane_ParamLimits

0x3e0c,	// (0x00068ade) video_down_crop_pane

0x3eb4,	// (0x00068b86) video_down_pane_ParamLimits

0x3eb4,	// (0x00068b86) video_down_pane

0xeaa1,	// (0x00073773) video_down_subqcif_pane_ParamLimits

0xeaa1,	// (0x00073773) video_down_subqcif_pane

0xeab9,	// (0x0007378b) video_down_subqcif_pane_cp_ParamLimits

0xeab9,	// (0x0007378b) video_down_subqcif_pane_cp

0xeadd,	// (0x000737af) im_reading_pane_ParamLimits

0xeadd,	// (0x000737af) im_reading_pane

0x3f44,	// (0x00068c16) im_writing_pane_ParamLimits

0x3f44,	// (0x00068c16) im_writing_pane

0x3f5a,	// (0x00068c2c) im_reading_pane_t1

0xeaf7,	// (0x000737c9) list_im_pane

0xeb08,	// (0x000737da) scroll_pane_cp07

0x3f90,	// (0x00068c62) im_writing_pane_t1_ParamLimits

0x3f90,	// (0x00068c62) im_writing_pane_t1

0xeb21,	// (0x000737f3) im_writing_pane_t2_ParamLimits

0xeb21,	// (0x000737f3) im_writing_pane_t2

0x0001,

0xf2da,	// (0x00073fac) im_writing_pane_t_ParamLimits

0xf2da,	// (0x00073fac) im_writing_pane_t

0xa9e6,	// (0x0006f6b8) input_focus_pane_cp04

0xa9e6,	// (0x0006f6b8) input_focus_pane_cp05

0x3fa5,	// (0x00068c77) list_im_single_pane_ParamLimits

0x3fa5,	// (0x00068c77) list_im_single_pane

0xeb3e,	// (0x00073810) list_single_im_pane_t1

0x6288,	// (0x0006af5a) blid_accuracy_pane

0x6290,	// (0x0006af62) blid_compass_pane

0x6298,	// (0x0006af6a) main_location_t1

0x62a6,	// (0x0006af78) main_location_t2

0x62b4,	// (0x0006af86) main_location_t3

0x0002,

0xf654,	// (0x00074326) main_location_t

0xa9e6,	// (0x0006f6b8) aid_levels_location

0xadd5,	// (0x0006faa7) blid_accuracy_pane_g1

0xadd5,	// (0x0006faa7) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x0007400e) blid_accuracy_pane_g

0xeb78,	// (0x0007384a) wml_content_pane

0x3fdc,	// (0x00068cae) wml_button_pane_ParamLimits

0x3fdc,	// (0x00068cae) wml_button_pane

0x3ff0,	// (0x00068cc2) wml_list_single_large_pane_ParamLimits

0x3ff0,	// (0x00068cc2) wml_list_single_large_pane

0x4004,	// (0x00068cd6) wml_list_single_medium_pane_ParamLimits

0x4004,	// (0x00068cd6) wml_list_single_medium_pane

0x4019,	// (0x00068ceb) wml_list_single_small_pane_ParamLimits

0x4019,	// (0x00068ceb) wml_list_single_small_pane

0x4030,	// (0x00068d02) wml_selection_box_pane_ParamLimits

0x4030,	// (0x00068d02) wml_selection_box_pane

0x4043,	// (0x00068d15) wml_list_single_pane_t1

0x4052,	// (0x00068d24) wml_list_single_medium_pane_t1

0x4061,	// (0x00068d33) wml_list_single_large_pane_t1

0x4070,	// (0x00068d42) input_focus_pane_cp02_ParamLimits

0x4070,	// (0x00068d42) input_focus_pane_cp02

0x4083,	// (0x00068d55) wml_selection_box_pane_g1

0x408c,	// (0x00068d5e) wml_selection_box_pane_t1_ParamLimits

0x408c,	// (0x00068d5e) wml_selection_box_pane_t1

0xac41,	// (0x0006f913) bg_wml_button_pane_ParamLimits

0xac41,	// (0x0006f913) bg_wml_button_pane

0x40a4,	// (0x00068d76) wml_button_pane_g1

0x40ac,	// (0x00068d7e) wml_button_pane_t1

0x40a4,	// (0x00068d76) wml_button_bg_pane_g1

0x40bc,	// (0x00068d8e) wml_button_bg_pane_g2

0x40c4,	// (0x00068d96) wml_button_bg_pane_g3

0x40cc,	// (0x00068d9e) wml_button_bg_pane_g4

0x40d4,	// (0x00068da6) wml_button_bg_pane_g5

0x40dc,	// (0x00068dae) wml_button_bg_pane_g6

0x40e4,	// (0x00068db6) wml_button_bg_pane_g7

0x40ec,	// (0x00068dbe) wml_button_bg_pane_g8

0x40f4,	// (0x00068dc6) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x00073fb1) wml_button_bg_pane_g

0x40fc,	// (0x00068dce) bg_list_pane_cp02

0x4105,	// (0x00068dd7) mce_header_pane_ParamLimits

0x4105,	// (0x00068dd7) mce_header_pane

0x4119,	// (0x00068deb) mce_icon_pane

0x4119,	// (0x00068deb) mce_image_pane

0x4122,	// (0x00068df4) mce_text_pane_ParamLimits

0x4122,	// (0x00068df4) mce_text_pane

0x4136,	// (0x00068e08) scroll_pane_cp03

0x4136,	// (0x00068e08) scroll_pane_cp04

0x4140,	// (0x00068e12) scroll_pane_cp05_ParamLimits

0x4140,	// (0x00068e12) scroll_pane_cp05

0x414c,	// (0x00068e1e) mce_header_field_pane_ParamLimits

0x414c,	// (0x00068e1e) mce_header_field_pane

0x4163,	// (0x00068e35) mce_header_field_pane_2_ParamLimits

0x4163,	// (0x00068e35) mce_header_field_pane_2

0x4179,	// (0x00068e4b) mce_header_field_pane_3

0x4181,	// (0x00068e53) list_single_mce_message_pane_ParamLimits

0x4181,	// (0x00068e53) list_single_mce_message_pane

0x4196,	// (0x00068e68) list_single_mce_smart_pane_ParamLimits

0x4196,	// (0x00068e68) list_single_mce_smart_pane

0x41b6,	// (0x00068e88) input_focus_pane_cp03

0x41bf,	// (0x00068e91) list_header_data_pane

0x41c7,	// (0x00068e99) mce_header_field_pane_t1

0x41d5,	// (0x00068ea7) list_single_mce_header_pane_ParamLimits

0x41d5,	// (0x00068ea7) list_single_mce_header_pane

0x41e9,	// (0x00068ebb) list_single_mce_header_pane_t1

0x41f8,	// (0x00068eca) list_single_mce_message_pane_g1

0x4201,	// (0x00068ed3) list_single_mce_message_pane_t1

0x422e,	// (0x00068f00) bg_cale_heading_pane_cp01_ParamLimits

0x422e,	// (0x00068f00) bg_cale_heading_pane_cp01

0x4251,	// (0x00068f23) bg_cale_pane_cp02_ParamLimits

0x4251,	// (0x00068f23) bg_cale_pane_cp02

0x4274,	// (0x00068f46) cale_month_corner_pane

0x428a,	// (0x00068f5c) cale_month_day_heading_pane_ParamLimits

0x428a,	// (0x00068f5c) cale_month_day_heading_pane

0x42bd,	// (0x00068f8f) cale_month_pane_g1_ParamLimits

0x42bd,	// (0x00068f8f) cale_month_pane_g1

0x42d9,	// (0x00068fab) cale_month_pane_g2_ParamLimits

0x42d9,	// (0x00068fab) cale_month_pane_g2

0x42f4,	// (0x00068fc6) cale_month_pane_g3_ParamLimits

0x42f4,	// (0x00068fc6) cale_month_pane_g3

0x4320,	// (0x00068ff2) cale_month_pane_g4_ParamLimits

0x4320,	// (0x00068ff2) cale_month_pane_g4

0x434c,	// (0x0006901e) cale_month_pane_g5_ParamLimits

0x434c,	// (0x0006901e) cale_month_pane_g5

0x4378,	// (0x0006904a) cale_month_pane_g6_ParamLimits

0x4378,	// (0x0006904a) cale_month_pane_g6

0x43a4,	// (0x00069076) cale_month_pane_g7_ParamLimits

0x43a4,	// (0x00069076) cale_month_pane_g7

0x43d0,	// (0x000690a2) cale_month_pane_g8_ParamLimits

0x43d0,	// (0x000690a2) cale_month_pane_g8

0x440c,	// (0x000690de) cale_month_pane_g9_ParamLimits

0x440c,	// (0x000690de) cale_month_pane_g9

0x4446,	// (0x00069118) cale_month_pane_g10_ParamLimits

0x4446,	// (0x00069118) cale_month_pane_g10

0x4480,	// (0x00069152) cale_month_pane_g11_ParamLimits

0x4480,	// (0x00069152) cale_month_pane_g11

0x44ba,	// (0x0006918c) cale_month_pane_g12_ParamLimits

0x44ba,	// (0x0006918c) cale_month_pane_g12

0x44f4,	// (0x000691c6) cale_month_pane_g13_ParamLimits

0x44f4,	// (0x000691c6) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x00073fc4) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x00073fc4) cale_month_pane_g

0x4540,	// (0x00069212) cale_month_week_pane

0x4553,	// (0x00069225) grid_cale_month_pane_ParamLimits

0x4553,	// (0x00069225) grid_cale_month_pane

0x4581,	// (0x00069253) cale_month_day_heading_pane_t1

0x45df,	// (0x000692b1) cale_month_day_heading_pane_t2

0x4644,	// (0x00069316) cale_month_day_heading_pane_t3

0x46a9,	// (0x0006937b) cale_month_day_heading_pane_t4

0x470e,	// (0x000693e0) cale_month_day_heading_pane_t5

0x4773,	// (0x00069445) cale_month_day_heading_pane_t6

0x47d8,	// (0x000694aa) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x00073fdf) cale_month_day_heading_pane_t

0xaf34,	// (0x0006fc06) bg_cale_side_pane_cp01

0x4845,	// (0x00069517) cale_month_week_pane_t1

0x485c,	// (0x0006952e) cale_month_week_pane_t2

0x4873,	// (0x00069545) cale_month_week_pane_t3

0x488a,	// (0x0006955c) cale_month_week_pane_t4

0x48a1,	// (0x00069573) cale_month_week_pane_t5

0x48b8,	// (0x0006958a) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x00073fee) cale_month_week_pane_t

0x48cf,	// (0x000695a1) cell_cale_month_pane_ParamLimits

0x48cf,	// (0x000695a1) cell_cale_month_pane

0xeb95,	// (0x00073867) cell_cale_month_pane_g1

0x497d,	// (0x0006964f) cell_cale_month_pane_t1_ParamLimits

0x497d,	// (0x0006964f) cell_cale_month_pane_t1

0xaf42,	// (0x0006fc14) grid_highlight_pane_cp08

0xadd5,	// (0x0006faa7) main_smil_g1

0x4999,	// (0x0006966b) smil_status_pane

0x49a2,	// (0x00069674) smil_text_pane

0xbfe8,	// (0x00070cba) bg_popup_call3_rect_pane_g8

0xbff0,	// (0x00070cc2) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x000742a7) bg_popup_call3_rect_pane_g

0xc2a6,	// (0x00070f78) smil_status_volume_pane_g1

0x49b4,	// (0x00069686) smil_status_pane_t1

0xec93,	// (0x00073965) volume_smil_pane

0x49cb,	// (0x0006969d) list_smil_text_pane

0x49d5,	// (0x000696a7) scroll_pane_cp011

0x49e0,	// (0x000696b2) smil_text_list_pane_t1_ParamLimits

0x49e0,	// (0x000696b2) smil_text_list_pane_t1

0xeba1,	// (0x00073873) aid_volume_smil_ParamLimits

0xeba1,	// (0x00073873) aid_volume_smil

0xadd5,	// (0x0006faa7) smil_volume_pane_g1

0xadd5,	// (0x0006faa7) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x0007400e) smil_volume_pane_g

0xad32,	// (0x0006fa04) listscroll_cale_day_pane

0x4a1e,	// (0x000696f0) bg_cale_pane

0x4a36,	// (0x00069708) list_cale_pane

0x4a47,	// (0x00069719) scroll_pane_cp09

0x4a58,	// (0x0006972a) cale_bg_pane_g1

0x4a60,	// (0x00069732) cale_bg_pane_g2

0x4a68,	// (0x0006973a) cale_bg_pane_g3

0x4a70,	// (0x00069742) cale_bg_pane_g4

0x4a78,	// (0x0006974a) cale_bg_pane_g5

0x4a80,	// (0x00069752) cale_bg_pane_g6

0x4a88,	// (0x0006975a) cale_bg_pane_g7

0x4a90,	// (0x00069762) cale_bg_pane_g8

0x4a98,	// (0x0006976a) cale_bg_pane_g9

0x0008,

0xf341,	// (0x00074013) cale_bg_pane_g

0x4aa0,	// (0x00069772) list_cale_time_pane_ParamLimits

0x4aa0,	// (0x00069772) list_cale_time_pane

0x4ab5,	// (0x00069787) list_cale_time_pane_g1_ParamLimits

0x4ab5,	// (0x00069787) list_cale_time_pane_g1

0x4ac1,	// (0x00069793) list_cale_time_pane_g2_ParamLimits

0x4ac1,	// (0x00069793) list_cale_time_pane_g2

0x4ace,	// (0x000697a0) list_cale_time_pane_g3_ParamLimits

0x4ace,	// (0x000697a0) list_cale_time_pane_g3

0x4adc,	// (0x000697ae) list_cale_time_pane_g4_ParamLimits

0x4adc,	// (0x000697ae) list_cale_time_pane_g4

0x4aea,	// (0x000697bc) list_cale_time_pane_g5_ParamLimits

0x4aea,	// (0x000697bc) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x00074026) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x00074026) list_cale_time_pane_g

0x4b03,	// (0x000697d5) list_cale_time_pane_t1_ParamLimits

0x4b03,	// (0x000697d5) list_cale_time_pane_t1

0x4b2b,	// (0x000697fd) list_cale_time_pane_t2_ParamLimits

0x4b2b,	// (0x000697fd) list_cale_time_pane_t2

0x5205,	// (0x00069ed7) aid_blid_cardinal_pane

0x524f,	// (0x00069f21) compass_pane_t4

0x4b53,	// (0x00069825) list_cale_time_pane_t4_ParamLimits

0x4b53,	// (0x00069825) list_cale_time_pane_t4

0x525d,	// (0x00069f2f) compass_pane_t5

0x526b,	// (0x00069f3d) compass_pane_t6

0x5279,	// (0x00069f4b) compass_pane_t7

0x52d9,	// (0x00069fab) navi_pane_cc_t1

0x54e0,	// (0x0006a1b2) aid_phob_thumbnail_center_pane

0x5a80,	// (0x0006a752) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x00074033) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x00074033) list_cale_time_pane_t

0xa63f,	// (0x0006f311) bg_popup_window_pane_cp02_ParamLimits

0xa63f,	// (0x0006f311) bg_popup_window_pane_cp02

0x4b7b,	// (0x0006984d) heading_pane_cp01_ParamLimits

0x4b7b,	// (0x0006984d) heading_pane_cp01

0x4b87,	// (0x00069859) loc_req_pane_ParamLimits

0x4b87,	// (0x00069859) loc_req_pane

0x4b97,	// (0x00069869) loc_type_pane_ParamLimits

0x4b97,	// (0x00069869) loc_type_pane

0x4ba9,	// (0x0006987b) loc_type_pane_t1_ParamLimits

0x4ba9,	// (0x0006987b) loc_type_pane_t1

0x4bbb,	// (0x0006988d) loc_type_pane_t2_ParamLimits

0x4bbb,	// (0x0006988d) loc_type_pane_t2

0x4bcd,	// (0x0006989f) loc_type_pane_t3_ParamLimits

0x4bcd,	// (0x0006989f) loc_type_pane_t3

0x0002,

0xf368,	// (0x0007403a) loc_type_pane_t_ParamLimits

0xf368,	// (0x0007403a) loc_type_pane_t

0x4bdf,	// (0x000698b1) list_loc_req_pane

0x4be9,	// (0x000698bb) scroll_pane_cp012

0x4bf2,	// (0x000698c4) list_single_loc_request_popup_menu_pane_ParamLimits

0x4bf2,	// (0x000698c4) list_single_loc_request_popup_menu_pane

0x4bff,	// (0x000698d1) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x4bff,	// (0x000698d1) list_single_loc_request_popup_menu_pane_g1

0x4c0b,	// (0x000698dd) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x4c0b,	// (0x000698dd) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x00074041) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x00074041) list_single_loc_request_popup_menu_pane_g

0x4c17,	// (0x000698e9) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x4c17,	// (0x000698e9) list_single_loc_request_popup_menu_pane_t1

0xac41,	// (0x0006f913) bg_popup_window_pane_cp03_ParamLimits

0xac41,	// (0x0006f913) bg_popup_window_pane_cp03

0x4c2d,	// (0x000698ff) heading_loc_req_pane_ParamLimits

0x4c2d,	// (0x000698ff) heading_loc_req_pane

0x4c39,	// (0x0006990b) popup_dyc_status_message_window_g1_ParamLimits

0x4c39,	// (0x0006990b) popup_dyc_status_message_window_g1

0x4c4d,	// (0x0006991f) popup_dyc_status_message_window_t1_ParamLimits

0x4c4d,	// (0x0006991f) popup_dyc_status_message_window_t1

0x4c62,	// (0x00069934) popup_dyc_status_message_window_t2_ParamLimits

0x4c62,	// (0x00069934) popup_dyc_status_message_window_t2

0x4c77,	// (0x00069949) popup_dyc_status_message_window_t3_ParamLimits

0x4c77,	// (0x00069949) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x00074046) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x00074046) popup_dyc_status_message_window_t

0xa9e6,	// (0x0006f6b8) bg_heading_pane_cp01

0x4c93,	// (0x00069965) heading_loc_req_pane_g1

0x4c9b,	// (0x0006996d) heading_loc_req_pane_g2

0x4ca3,	// (0x00069975) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x0007404d) heading_loc_req_pane_g

0x4cab,	// (0x0006997d) heading_loc_req_pane_t1

0x4cd4,	// (0x000699a6) bg_popup_sub_pane_cp01_ParamLimits

0x4cd4,	// (0x000699a6) bg_popup_sub_pane_cp01

0x4ce2,	// (0x000699b4) popup_cale_events_window_g1_ParamLimits

0x4ce2,	// (0x000699b4) popup_cale_events_window_g1

0x4d02,	// (0x000699d4) popup_cale_events_window_g2_ParamLimits

0x4d02,	// (0x000699d4) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x00074081) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x00074081) popup_cale_events_window_g

0x4d22,	// (0x000699f4) popup_cale_events_window_t1_ParamLimits

0x4d22,	// (0x000699f4) popup_cale_events_window_t1

0x4d34,	// (0x00069a06) popup_cale_events_window_t2_ParamLimits

0x4d34,	// (0x00069a06) popup_cale_events_window_t2

0x4d72,	// (0x00069a44) popup_cale_events_window_t3_ParamLimits

0x4d72,	// (0x00069a44) popup_cale_events_window_t3

0x4dac,	// (0x00069a7e) popup_cale_events_window_t4_ParamLimits

0x4dac,	// (0x00069a7e) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x00074086) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x00074086) popup_cale_events_window_t

0x4de2,	// (0x00069ab4) call_type_pane

0x4df2,	// (0x00069ac4) popup_call_status_window_g1

0x4e06,	// (0x00069ad8) popup_call_status_window_g2

0x4e1a,	// (0x00069aec) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x0007408f) popup_call_status_window_g

0x4e2a,	// (0x00069afc) call_type_pane_g1

0x4e33,	// (0x00069b05) call_type_pane_g2

0x0001,

0xf3c4,	// (0x00074096) call_type_pane_g

0xa9e6,	// (0x0006f6b8) bg_popup_sub_pane_cp02

0x4e3c,	// (0x00069b0e) listscroll_popup_wml_pane

0x4e44,	// (0x00069b16) list_wml_pane

0x4e4e,	// (0x00069b20) scroll_pane_cp013

0x4e57,	// (0x00069b29) list_single_graphic_popup_wml_pane_ParamLimits

0x4e57,	// (0x00069b29) list_single_graphic_popup_wml_pane

0xadd5,	// (0x0006faa7) list_single_graphic_popup_wml_pane_g1

0x4e6a,	// (0x00069b3c) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x0007409b) list_single_graphic_popup_wml_pane_g

0x4e72,	// (0x00069b44) list_single_graphic_popup_wml_pane_t1

0x4e88,	// (0x00069b5a) aid_call_pane

0xac39,	// (0x0006f90b) popup_clock_analogue_window_g1

0xac39,	// (0x0006f90b) popup_clock_analogue_window_g2

0xebc3,	// (0x00073895) popup_clock_analogue_window_g3

0xebc3,	// (0x00073895) popup_clock_analogue_window_g4

0xadd5,	// (0x0006faa7) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x000740a0) popup_clock_analogue_window_g

0xebcb,	// (0x0007389d) popup_clock_analogue_window_t1

0xebd9,	// (0x000738ab) clock_digital_number_pane_ParamLimits

0xebd9,	// (0x000738ab) clock_digital_number_pane

0xebe5,	// (0x000738b7) clock_digital_number_pane_cp02_ParamLimits

0xebe5,	// (0x000738b7) clock_digital_number_pane_cp02

0xebf1,	// (0x000738c3) clock_digital_number_pane_cp03_ParamLimits

0xebf1,	// (0x000738c3) clock_digital_number_pane_cp03

0xebfd,	// (0x000738cf) clock_digital_number_pane_cp04_ParamLimits

0xebfd,	// (0x000738cf) clock_digital_number_pane_cp04

0xec09,	// (0x000738db) clock_digital_separator_pane_ParamLimits

0xec09,	// (0x000738db) clock_digital_separator_pane

0xec15,	// (0x000738e7) popup_clock_digital_window_t1

0xadd5,	// (0x0006faa7) clock_digital_number_pane_g1

0xadd5,	// (0x0006faa7) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x0007400e) clock_digital_number_pane_g

0xadd5,	// (0x0006faa7) clock_digital_separator_pane_g1

0xadd5,	// (0x0006faa7) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x0007400e) clock_digital_separator_pane_g

0xa9e6,	// (0x0006f6b8) bg_popup_window_pane_cp04

0x4e90,	// (0x00069b62) heading_pane_cp03

0x4e98,	// (0x00069b6a) listscroll_popup_gms_pane

0x4ea0,	// (0x00069b72) grid_large_graphic_popup_pane

0x4eaa,	// (0x00069b7c) listscroll_popup_gms_pane_g1

0x4eb2,	// (0x00069b84) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x000740ab) listscroll_popup_gms_pane_g

0x3fd4,	// (0x00068ca6) scroll_pane_cp014

0x4eba,	// (0x00069b8c) cell_large_graphic_popup_pane_ParamLimits

0x4eba,	// (0x00069b8c) cell_large_graphic_popup_pane

0x4ed0,	// (0x00069ba2) cell_large_graphic_popup_pane_g1_ParamLimits

0x4ed0,	// (0x00069ba2) cell_large_graphic_popup_pane_g1

0x4edc,	// (0x00069bae) cell_large_graphic_popup_pane_g2_ParamLimits

0x4edc,	// (0x00069bae) cell_large_graphic_popup_pane_g2

0x4ee8,	// (0x00069bba) cell_large_graphic_popup_pane_g3_ParamLimits

0x4ee8,	// (0x00069bba) cell_large_graphic_popup_pane_g3

0x4ef5,	// (0x00069bc7) cell_large_graphic_popup_pane_g4_ParamLimits

0x4ef5,	// (0x00069bc7) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x000740b0) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x000740b0) cell_large_graphic_popup_pane_g

0x4f05,	// (0x00069bd7) grid_highlight_pane_cp010

0xadd5,	// (0x0006faa7) bg_popup_call_pane_g1

0x4f0f,	// (0x00069be1) list_single_graphic_popup_conf_pane_ParamLimits

0x4f0f,	// (0x00069be1) list_single_graphic_popup_conf_pane

0x4f22,	// (0x00069bf4) list_highlight_pane_cp01

0x4f2b,	// (0x00069bfd) list_single_graphic_popup_conf_pane_g1

0x4f33,	// (0x00069c05) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x000740b9) list_single_graphic_popup_conf_pane_g

0x4f3b,	// (0x00069c0d) list_single_graphic_popup_conf_pane_t1

0x4f49,	// (0x00069c1b) linegrid_cams_pane_g1

0x4f52,	// (0x00069c24) linegrid_cams_pane_g2

0xaee0,	// (0x0006fbb2) linegrid_cams_pane_g3

0x4f5b,	// (0x00069c2d) linegrid_cams_pane_g4

0x4f64,	// (0x00069c36) linegrid_cams_pane_g5

0x4f6d,	// (0x00069c3f) linegrid_cams_pane_g6

0xaf75,	// (0x0006fc47) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x000740be) linegrid_cams_pane_g

0x4f76,	// (0x00069c48) popup_clock_analogue_window

0x4f76,	// (0x00069c48) popup_clock_digital_window

0xa9e6,	// (0x0006f6b8) popup_phob_thumbnail_window

0xadd5,	// (0x0006faa7) call_video_uplink_pane_g1

0x4f7f,	// (0x00069c51) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x000740cd) call_video_uplink_pane_g

0xaf42,	// (0x0006fc14) video_uplink_pane

0x4f87,	// (0x00069c59) mce_image_pane_g1

0x4f91,	// (0x00069c63) mce_image_pane_g2

0x4f99,	// (0x00069c6b) mce_image_pane_g3

0x4fa1,	// (0x00069c73) mce_image_pane_g4

0x4fa9,	// (0x00069c7b) mce_image_pane_g5

0x0004,

0xf400,	// (0x000740d2) mce_image_pane_g

0x4fb1,	// (0x00069c83) control_top_pane_stacon_cp01_ParamLimits

0x4fb1,	// (0x00069c83) control_top_pane_stacon_cp01

0x4fc1,	// (0x00069c93) uni_indicator_pane_stacon_cp01_ParamLimits

0x4fc1,	// (0x00069c93) uni_indicator_pane_stacon_cp01

0x4fd2,	// (0x00069ca4) bg_popup_sub_pane_cp03

0x4fdc,	// (0x00069cae) chi_dic_find_pane

0x4fe4,	// (0x00069cb6) listscroll_chi_dic_pane

0x4fed,	// (0x00069cbf) main_pane_chidic_g1

0x5000,	// (0x00069cd2) chi_dic_find_pane_t1

0x500e,	// (0x00069ce0) find_chidic_pane

0x5017,	// (0x00069ce9) chi_dic_list_pane_ParamLimits

0x5017,	// (0x00069ce9) chi_dic_list_pane

0x5028,	// (0x00069cfa) scroll_pane_cp020

0x5030,	// (0x00069d02) find_chidic_pane_t1

0xa9e6,	// (0x0006f6b8) input_focus_pane_cp06

0x503f,	// (0x00069d11) list_chi_dic_pane_ParamLimits

0x503f,	// (0x00069d11) list_chi_dic_pane

0x5051,	// (0x00069d23) list_chi_dic_pane_t1_ParamLimits

0x5051,	// (0x00069d23) list_chi_dic_pane_t1

0xa9e6,	// (0x0006f6b8) list_highlight_pane_cp020

0x5064,	// (0x00069d36) bg_cale_heading_pane_g1

0x506c,	// (0x00069d3e) bg_cale_heading_pane_g2

0x5074,	// (0x00069d46) bg_cale_heading_pane_g3

0x507c,	// (0x00069d4e) bg_cale_heading_pane_g4

0x5086,	// (0x00069d58) bg_cale_heading_pane_g5

0x5090,	// (0x00069d62) bg_cale_heading_pane_g6

0x5098,	// (0x00069d6a) bg_cale_heading_pane_g7

0x50a0,	// (0x00069d72) bg_cale_heading_pane_g8

0x50aa,	// (0x00069d7c) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x000740dd) bg_cale_heading_pane_g

0x5064,	// (0x00069d36) bg_cale_side_pane_g1

0x50b4,	// (0x00069d86) bg_cale_side_pane_g2

0x50bc,	// (0x00069d8e) bg_cale_side_pane_g3

0x50c4,	// (0x00069d96) bg_cale_side_pane_g4

0x50cc,	// (0x00069d9e) bg_cale_side_pane_g5

0x50d4,	// (0x00069da6) bg_cale_side_pane_g6

0x50dc,	// (0x00069dae) bg_cale_side_pane_g7

0x50e4,	// (0x00069db6) bg_cale_side_pane_g8

0x50ec,	// (0x00069dbe) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x000740f0) bg_cale_side_pane_g

0x50f4,	// (0x00069dc6) popup_call_status_window_ParamLimits

0x50f4,	// (0x00069dc6) popup_call_status_window

0x513b,	// (0x00069e0d) stacon_top_pane

0x5143,	// (0x00069e15) status_pane_ParamLimits

0x5143,	// (0x00069e15) status_pane

0x515d,	// (0x00069e2f) status_small_pane

0x5165,	// (0x00069e37) control_pane

0xa9e6,	// (0x0006f6b8) stacon_bottom_pane

0x516d,	// (0x00069e3f) list_single_mce_smart_pane_t1_ParamLimits

0x516d,	// (0x00069e3f) list_single_mce_smart_pane_t1

0x5180,	// (0x00069e52) list_single_mce_smart_pane_t2_ParamLimits

0x5180,	// (0x00069e52) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x00074103) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x00074103) list_single_mce_smart_pane_t

0x51a8,	// (0x00069e7a) compass_pane

0x51b1,	// (0x00069e83) main_location2_pane_t1

0x51c7,	// (0x00069e99) main_location2_pane_t2

0x51dd,	// (0x00069eaf) main_location2_pane_t3

0x0003,

0xf436,	// (0x00074108) main_location2_pane_t

0x5225,	// (0x00069ef7) compass_pane_g1_ParamLimits

0x5225,	// (0x00069ef7) compass_pane_g1

0x5231,	// (0x00069f03) compass_pane_t1

0x5240,	// (0x00069f12) compass_pane_t2

0x0005,

0xf43f,	// (0x00074111) compass_pane_t

0x5287,	// (0x00069f59) text_secondary_cp61

0x52d0,	// (0x00069fa2) navi_pane_cams_g5

0x5336,	// (0x0006a008) navi_pane_im_t1

0x5344,	// (0x0006a016) navi_pane_mp_g1_ParamLimits

0x5344,	// (0x0006a016) navi_pane_mp_g1

0x5358,	// (0x0006a02a) navi_pane_mp_g2_ParamLimits

0x5358,	// (0x0006a02a) navi_pane_mp_g2

0x5364,	// (0x0006a036) navi_pane_mp_g3_ParamLimits

0x5364,	// (0x0006a036) navi_pane_mp_g3

0x0002,

0xf453,	// (0x00074125) navi_pane_mp_g_ParamLimits

0xf453,	// (0x00074125) navi_pane_mp_g

0x5370,	// (0x0006a042) navi_pane_mp_t1

0x537e,	// (0x0006a050) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x0007412c) navi_pane_mp_t

0x5429,	// (0x0006a0fb) navi_pane_vt_g1

0x5370,	// (0x0006a042) navi_pane_vt_t1

0x5431,	// (0x0006a103) navi_slider_pane

0x5439,	// (0x0006a10b) zooming_pane

0x5441,	// (0x0006a113) navi_slider_pane_g1

0xec32,	// (0x00073904) navi_slider_pane_g2

0x0006,

0xf461,	// (0x00074133) navi_slider_pane_g

0x5465,	// (0x0006a137) aid_levels_zoom

0x546d,	// (0x0006a13f) zooming_pane_g1

0x5475,	// (0x0006a147) zooming_pane_g2

0x5475,	// (0x0006a147) zooming_pane_g3

0x0002,

0xf470,	// (0x00074142) zooming_pane_g

0x547d,	// (0x0006a14f) level_10_zoom

0x5486,	// (0x0006a158) level_11_zoom

0x548f,	// (0x0006a161) level_1_zoom

0x5498,	// (0x0006a16a) level_2_zoom

0x54a1,	// (0x0006a173) level_3_zoom

0x54aa,	// (0x0006a17c) level_4_zoom

0x54b3,	// (0x0006a185) level_5_zoom

0x54bc,	// (0x0006a18e) level_6_zoom

0x54c5,	// (0x0006a197) level_7_zoom

0x54ce,	// (0x0006a1a0) level_8_zoom

0x54d7,	// (0x0006a1a9) level_9_zoom

0x54e8,	// (0x0006a1ba) popup_phob_thumbnail_window_g1

0x54f0,	// (0x0006a1c2) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x00074149) popup_phob_thumbnail_window_g

0xc18a,	// (0x00070e5c) level_1_location

0xc192,	// (0x00070e64) level_2_location

0xc19a,	// (0x00070e6c) level_3_location

0xc1a2,	// (0x00070e74) level_4_location

0x5439,	// (0x0006a10b) level_5_location

0x54f8,	// (0x0006a1ca) mce_icon_pane_g1

0x5500,	// (0x0006a1d2) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x0007414e) mce_icon_pane_g

0x5508,	// (0x0006a1da) main_mup_pane_g1_ParamLimits

0x5508,	// (0x0006a1da) main_mup_pane_g1

0x551e,	// (0x0006a1f0) main_mup_pane_g2_ParamLimits

0x551e,	// (0x0006a1f0) main_mup_pane_g2

0x5536,	// (0x0006a208) main_mup_pane_g3_ParamLimits

0x5536,	// (0x0006a208) main_mup_pane_g3

0x554e,	// (0x0006a220) main_mup_pane_g4_ParamLimits

0x554e,	// (0x0006a220) main_mup_pane_g4

0x5566,	// (0x0006a238) main_mup_pane_g5_ParamLimits

0x5566,	// (0x0006a238) main_mup_pane_g5

0x5580,	// (0x0006a252) main_mup_pane_g6_ParamLimits

0x5580,	// (0x0006a252) main_mup_pane_g6

0x5598,	// (0x0006a26a) main_mup_pane_g7_ParamLimits

0x5598,	// (0x0006a26a) main_mup_pane_g7

0x55b0,	// (0x0006a282) main_mup_pane_g8_ParamLimits

0x55b0,	// (0x0006a282) main_mup_pane_g8

0x55c8,	// (0x0006a29a) main_mup_pane_g9_ParamLimits

0x55c8,	// (0x0006a29a) main_mup_pane_g9

0x55dc,	// (0x0006a2ae) main_mup_pane_g10_ParamLimits

0x55dc,	// (0x0006a2ae) main_mup_pane_g10

0x55f0,	// (0x0006a2c2) main_mup_pane_g11_ParamLimits

0x55f0,	// (0x0006a2c2) main_mup_pane_g11

0x5602,	// (0x0006a2d4) main_mup_pane_g12_ParamLimits

0x5602,	// (0x0006a2d4) main_mup_pane_g12

0x5616,	// (0x0006a2e8) main_mup_pane_g13_ParamLimits

0x5616,	// (0x0006a2e8) main_mup_pane_g13

0x000c,

0xf481,	// (0x00074153) main_mup_pane_g_ParamLimits

0xf481,	// (0x00074153) main_mup_pane_g

0x5628,	// (0x0006a2fa) main_mup_pane_t1_ParamLimits

0x5628,	// (0x0006a2fa) main_mup_pane_t1

0x5642,	// (0x0006a314) main_mup_pane_t2_ParamLimits

0x5642,	// (0x0006a314) main_mup_pane_t2

0x565a,	// (0x0006a32c) main_mup_pane_t3_ParamLimits

0x565a,	// (0x0006a32c) main_mup_pane_t3

0x5672,	// (0x0006a344) main_mup_pane_t4_ParamLimits

0x5672,	// (0x0006a344) main_mup_pane_t4

0x5690,	// (0x0006a362) main_mup_pane_t5_ParamLimits

0x5690,	// (0x0006a362) main_mup_pane_t5

0x56a5,	// (0x0006a377) main_mup_pane_t6_ParamLimits

0x56a5,	// (0x0006a377) main_mup_pane_t6

0x0005,

0xf49c,	// (0x0007416e) main_mup_pane_t_ParamLimits

0xf49c,	// (0x0007416e) main_mup_pane_t

0x56b7,	// (0x0006a389) mup_progress_pane_ParamLimits

0x56b7,	// (0x0006a389) mup_progress_pane

0x56c3,	// (0x0006a395) mup_visualizer_pane_ParamLimits

0x56c3,	// (0x0006a395) mup_visualizer_pane

0x56eb,	// (0x0006a3bd) mup_volume_pane_ParamLimits

0x56eb,	// (0x0006a3bd) mup_volume_pane

0x5709,	// (0x0006a3db) mup_visualizer_pane_g1_ParamLimits

0x5709,	// (0x0006a3db) mup_visualizer_pane_g1

0x5709,	// (0x0006a3db) mup_visualizer_pane_g2_ParamLimits

0x5709,	// (0x0006a3db) mup_visualizer_pane_g2

0x5225,	// (0x00069ef7) mup_visualizer_pane_g3_ParamLimits

0x5225,	// (0x00069ef7) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x0007417b) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x0007417b) mup_visualizer_pane_g

0xadd5,	// (0x0006faa7) mup_volume_pane_g1

0x571f,	// (0x0006a3f1) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x00074182) mup_volume_pane_g

0xadd5,	// (0x0006faa7) mup_progress_pane_g1

0x5728,	// (0x0006a3fa) mup_progress_pane_g2

0x5731,	// (0x0006a403) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x00074187) mup_progress_pane_g

0xa9e6,	// (0x0006f6b8) bg_popup_window_pane_cp05

0x573a,	// (0x0006a40c) heading_pane_cp02_ParamLimits

0x573a,	// (0x0006a40c) heading_pane_cp02

0x5754,	// (0x0006a426) list_popup_blid_pane

0x575c,	// (0x0006a42e) list_blid_sat_info_pane_ParamLimits

0x575c,	// (0x0006a42e) list_blid_sat_info_pane

0x576f,	// (0x0006a441) list_blid_sat_info_pane_g1

0x5777,	// (0x0006a449) list_blid_sat_info_pane_t1

0x5857,	// (0x0006a529) mup_equalizer_pane_ParamLimits

0x5857,	// (0x0006a529) mup_equalizer_pane

0x5870,	// (0x0006a542) mup_equalizer_pane_cp1_ParamLimits

0x5870,	// (0x0006a542) mup_equalizer_pane_cp1

0x5889,	// (0x0006a55b) mup_equalizer_pane_cp2_ParamLimits

0x5889,	// (0x0006a55b) mup_equalizer_pane_cp2

0x58a2,	// (0x0006a574) mup_equalizer_pane_cp3_ParamLimits

0x58a2,	// (0x0006a574) mup_equalizer_pane_cp3

0x58bb,	// (0x0006a58d) mup_equalizer_pane_cp4_ParamLimits

0x58bb,	// (0x0006a58d) mup_equalizer_pane_cp4

0x58d4,	// (0x0006a5a6) mup_equalizer_pane_cp5

0x58e6,	// (0x0006a5b8) mup_equalizer_pane_cp6

0x58f8,	// (0x0006a5ca) mup_equalizer_pane_cp7

0xc068,	// (0x00070d3a) bg_popup_call_poc_act_pane_g9

0xc070,	// (0x00070d42) bg_popup_call_poc_act_pane_g10

0xc078,	// (0x00070d4a) bg_popup_call_poc_act_pane_g11

0x000a,

0xac41,	// (0x0006f913) mup_scale_pane

0xadd5,	// (0x0006faa7) mup_scale_pane_g1

0x590c,	// (0x0006a5de) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x000741a3) mup_scale_pane_g

0x5942,	// (0x0006a614) msg_data_pane

0x594a,	// (0x0006a61c) scroll_pane_cp017

0x2705,	// (0x000673d7) bg_list_pane_cp04_ParamLimits

0x2705,	// (0x000673d7) bg_list_pane_cp04

0x5952,	// (0x0006a624) msg_data_pane_g1

0x4f91,	// (0x00069c63) msg_data_pane_g2

0x4f99,	// (0x00069c6b) msg_data_pane_g3

0x595a,	// (0x0006a62c) msg_data_pane_g4

0x4fa9,	// (0x00069c7b) msg_data_pane_g5

0x54f8,	// (0x0006a1ca) msg_data_pane_g6

0x5962,	// (0x0006a634) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x000741b2) msg_data_pane_g

0x271d,	// (0x000673ef) msg_text_pane_ParamLimits

0x271d,	// (0x000673ef) msg_text_pane

0x596a,	// (0x0006a63c) qrid_highlight_pane_cp011_ParamLimits

0x596a,	// (0x0006a63c) qrid_highlight_pane_cp011

0xa9e6,	// (0x0006f6b8) msg_body_pane

0xa9e6,	// (0x0006f6b8) msg_header_pane

0x5989,	// (0x0006a65b) input_focus_pane_cp07

0x274b,	// (0x0006741d) msg_header_pane_t1_ParamLimits

0x274b,	// (0x0006741d) msg_header_pane_t1

0x275d,	// (0x0006742f) msg_header_pane_t2_ParamLimits

0x275d,	// (0x0006742f) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x000741c6) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x000741c6) msg_header_pane_t

0x599e,	// (0x0006a670) msg_body_pane_g1

0x276f,	// (0x00067441) msg_body_pane_t1_ParamLimits

0x276f,	// (0x00067441) msg_body_pane_t1

0x279a,	// (0x0006746c) msg_body_pane_t2_ParamLimits

0x279a,	// (0x0006746c) msg_body_pane_t2

0x27ac,	// (0x0006747e) msg_body_pane_t3_ParamLimits

0x27ac,	// (0x0006747e) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x000741cb) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x000741cb) msg_body_pane_t

0x59dc,	// (0x0006a6ae) main_viewer_pane_g1_ParamLimits

0x59dc,	// (0x0006a6ae) main_viewer_pane_g1

0x59e8,	// (0x0006a6ba) main_viewer_pane_g2_ParamLimits

0x59e8,	// (0x0006a6ba) main_viewer_pane_g2

0x59f4,	// (0x0006a6c6) main_viewer_pane_g3_ParamLimits

0x59f4,	// (0x0006a6c6) main_viewer_pane_g3

0x5a03,	// (0x0006a6d5) main_viewer_pane_g4_ParamLimits

0x5a03,	// (0x0006a6d5) main_viewer_pane_g4

0xec5c,	// (0x0007392e) main_viewer_pane_g5_ParamLimits

0xec5c,	// (0x0007392e) main_viewer_pane_g5

0xec5c,	// (0x0007392e) main_viewer_pane_g7_ParamLimits

0xec5c,	// (0x0007392e) main_viewer_pane_g7

0xec6e,	// (0x00073940) main_viewer_pane_g8_ParamLimits

0xec6e,	// (0x00073940) main_viewer_pane_g8

0x0007,

0xf509,	// (0x000741db) main_viewer_pane_g_ParamLimits

0xf509,	// (0x000741db) main_viewer_pane_g

0x5a12,	// (0x0006a6e4) viewer_content_pane_ParamLimits

0x5a12,	// (0x0006a6e4) viewer_content_pane

0x5a45,	// (0x0006a717) main_postcard_pane_g1_ParamLimits

0x5a45,	// (0x0006a717) main_postcard_pane_g1

0x5a59,	// (0x0006a72b) main_postcard_pane_g2_ParamLimits

0x5a59,	// (0x0006a72b) main_postcard_pane_g2

0x5a6d,	// (0x0006a73f) main_postcard_pane_g3_ParamLimits

0x5a6d,	// (0x0006a73f) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x000741ec) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x000741ec) main_postcard_pane_g

0x5a80,	// (0x0006a752) main_postcard_pane_g4

0xc2b9,	// (0x00070f8b) smil_status_volume_pane_g2

0x5abb,	// (0x0006a78d) postcard_pane_ParamLimits

0x5abb,	// (0x0006a78d) postcard_pane

0x5afb,	// (0x0006a7cd) postcard_pane_g1_ParamLimits

0x5afb,	// (0x0006a7cd) postcard_pane_g1

0x5b09,	// (0x0006a7db) postcard_pane_g2_ParamLimits

0x5b09,	// (0x0006a7db) postcard_pane_g2

0x5b15,	// (0x0006a7e7) postcard_pane_g3_ParamLimits

0x5b15,	// (0x0006a7e7) postcard_pane_g3

0x5b21,	// (0x0006a7f3) postcard_pane_g4_ParamLimits

0x5b21,	// (0x0006a7f3) postcard_pane_g4

0x5b2f,	// (0x0006a801) postcard_pane_g5_ParamLimits

0x5b2f,	// (0x0006a801) postcard_pane_g5

0x5b44,	// (0x0006a816) postcard_pane_g6_ParamLimits

0x5b44,	// (0x0006a816) postcard_pane_g6

0x5afb,	// (0x0006a7cd) postcard_pane_g7_ParamLimits

0x5afb,	// (0x0006a7cd) postcard_pane_g7

0x0006,

0xf527,	// (0x000741f9) postcard_pane_g_ParamLimits

0xf527,	// (0x000741f9) postcard_pane_g

0x5b58,	// (0x0006a82a) main_mp2_pane_g1_ParamLimits

0x5b58,	// (0x0006a82a) main_mp2_pane_g1

0x5b64,	// (0x0006a836) main_mp2_pane_g2_ParamLimits

0x5b64,	// (0x0006a836) main_mp2_pane_g2

0x5b70,	// (0x0006a842) main_mp2_pane_g3_ParamLimits

0x5b70,	// (0x0006a842) main_mp2_pane_g3

0x0002,

0xf536,	// (0x00074208) main_mp2_pane_g_ParamLimits

0xf536,	// (0x00074208) main_mp2_pane_g

0x5b7c,	// (0x0006a84e) main_mp2_pane_t1_ParamLimits

0x5b7c,	// (0x0006a84e) main_mp2_pane_t1

0x5b91,	// (0x0006a863) main_mp2_pane_t2_ParamLimits

0x5b91,	// (0x0006a863) main_mp2_pane_t2

0x5ba3,	// (0x0006a875) main_mp2_pane_t3_ParamLimits

0x5ba3,	// (0x0006a875) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x0007420f) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x0007420f) main_mp2_pane_t

0x5bb5,	// (0x0006a887) pec_content_pane_ParamLimits

0x5bb5,	// (0x0006a887) pec_content_pane

0x3fd4,	// (0x00068ca6) scroll_pane_cp015

0x5bc7,	// (0x0006a899) pec_attribute_pane_ParamLimits

0x5bc7,	// (0x0006a899) pec_attribute_pane

0x5bd7,	// (0x0006a8a9) pec_content_pane_g1_ParamLimits

0x5bd7,	// (0x0006a8a9) pec_content_pane_g1

0x5be3,	// (0x0006a8b5) pec_content_pane_t1_ParamLimits

0x5be3,	// (0x0006a8b5) pec_content_pane_t1

0x5bf5,	// (0x0006a8c7) pec_content_pane_t2_ParamLimits

0x5bf5,	// (0x0006a8c7) pec_content_pane_t2

0x0001,

0xf544,	// (0x00074216) pec_content_pane_t_ParamLimits

0xf544,	// (0x00074216) pec_content_pane_t

0x5c07,	// (0x0006a8d9) list_single_graphic_pane_cp01_ParamLimits

0x5c07,	// (0x0006a8d9) list_single_graphic_pane_cp01

0xac41,	// (0x0006f913) bg_popup_sub_pane_cp04

0x5c1c,	// (0x0006a8ee) popup_mup_playback_window_g1

0x5c28,	// (0x0006a8fa) popup_mup_playback_window_t1

0x5c3d,	// (0x0006a90f) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x0007421b) popup_mup_playback_window_t

0x5c92,	// (0x0006a964) main_image_pane_g1_ParamLimits

0x5c92,	// (0x0006a964) main_image_pane_g1

0x5d6d,	// (0x0006aa3f) scroll_pane_cp018_ParamLimits

0x5d6d,	// (0x0006aa3f) scroll_pane_cp018

0x5d85,	// (0x0006aa57) scroll_pane_cp016_ParamLimits

0x5d85,	// (0x0006aa57) scroll_pane_cp016

0x5db9,	// (0x0006aa8b) smil2_image_pane_ParamLimits

0x5db9,	// (0x0006aa8b) smil2_image_pane

0x5de1,	// (0x0006aab3) smil2_root_pane_ParamLimits

0x5de1,	// (0x0006aab3) smil2_root_pane

0x5e19,	// (0x0006aaeb) smil2_text_pane_ParamLimits

0x5e19,	// (0x0006aaeb) smil2_text_pane

0xa9e6,	// (0x0006f6b8) bg_list_pane_cp06

0x5e8d,	// (0x0006ab5f) grid_radio_pane

0xa9e6,	// (0x0006f6b8) bg_popup_window_pane_cp06

0x5e95,	// (0x0006ab67) main_fmradio_pane_t1

0x4e90,	// (0x00069b62) heading_pane_cp04

0x5ea3,	// (0x0006ab75) main_fmradio_pane_t2

0xc0c0,	// (0x00070d92) popup_cale_lunar_info_window_g1

0x5eb1,	// (0x0006ab83) main_fmradio_pane_t3

0xc0c8,	// (0x00070d9a) popup_cale_lunar_info_window_g2

0x5ebf,	// (0x0006ab91) main_fmradio_pane_t4

0x0001,

0x5ecd,	// (0x0006ab9f) main_fmradio_pane_t5

0x0004,

0xf637,	// (0x00074309) popup_cale_lunar_info_window_g

0xf55e,	// (0x00074230) main_fmradio_pane_t

0x5edb,	// (0x0006abad) wait_bar_pane_cp03

0x5ee3,	// (0x0006abb5) cell_fmradio_pane_ParamLimits

0x5ee3,	// (0x0006abb5) cell_fmradio_pane

0x5afb,	// (0x0006a7cd) cell_fmradio_pane_g1_ParamLimits

0x5afb,	// (0x0006a7cd) cell_fmradio_pane_g1

0xa9e6,	// (0x0006f6b8) grid_highlight_pane_cp011

0x5ef6,	// (0x0006abc8) poc_content_pane_ParamLimits

0x5ef6,	// (0x0006abc8) poc_content_pane

0x5f09,	// (0x0006abdb) scroll_pane_cp019

0x5f11,	// (0x0006abe3) popup_call_poc_act_window_ParamLimits

0x5f11,	// (0x0006abe3) popup_call_poc_act_window

0x5f31,	// (0x0006ac03) popup_call_poc_inact_window_ParamLimits

0x5f31,	// (0x0006ac03) popup_call_poc_inact_window

0xf5fb,	// (0x000742cd) bg_popup_call_poc_act_pane_g

0xc080,	// (0x00070d52) bg_popup_call_poc_inact_pane_g1

0xc088,	// (0x00070d5a) bg_popup_call_poc_inact_pane_g2

0x5f46,	// (0x0006ac18) popup_call_poc_act_window_g2

0xc090,	// (0x00070d62) bg_popup_call_poc_inact_pane_g3

0xc010,	// (0x00070ce2) bg_popup_call_poc_inact_pane_g4

0xc098,	// (0x00070d6a) bg_popup_call_poc_inact_pane_g5

0x5f4e,	// (0x0006ac20) popup_call_poc_act_window_t1_ParamLimits

0x5f4e,	// (0x0006ac20) popup_call_poc_act_window_t1

0x5f76,	// (0x0006ac48) popup_call_poc_act_window_t2_ParamLimits

0x5f76,	// (0x0006ac48) popup_call_poc_act_window_t2

0x5f9e,	// (0x0006ac70) popup_call_poc_act_window_t3_ParamLimits

0x5f9e,	// (0x0006ac70) popup_call_poc_act_window_t3

0x5fc6,	// (0x0006ac98) popup_call_poc_act_window_t4_ParamLimits

0x5fc6,	// (0x0006ac98) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x0007423b) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x0007423b) popup_call_poc_act_window_t

0xc0a0,	// (0x00070d72) bg_popup_call_poc_inact_pane_g6

0xc0a8,	// (0x00070d7a) bg_popup_call_poc_inact_pane_g7

0xc0b0,	// (0x00070d82) bg_popup_call_poc_inact_pane_g8

0x5fd8,	// (0x0006acaa) popup_call_poc_inact_window_g2

0xc0b8,	// (0x00070d8a) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf612,	// (0x000742e4) bg_popup_call_poc_inact_pane_g

0x5fe0,	// (0x0006acb2) popup_call_poc_inact_window_t1_ParamLimits

0x5fe0,	// (0x0006acb2) popup_call_poc_inact_window_t1

0x5ff5,	// (0x0006acc7) popup_call_poc_inact_window_t2_ParamLimits

0x5ff5,	// (0x0006acc7) popup_call_poc_inact_window_t2

0x600a,	// (0x0006acdc) popup_call_poc_inact_window_t3_ParamLimits

0x600a,	// (0x0006acdc) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x00074244) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x00074244) popup_call_poc_inact_window_t

0xc22c,	// (0x00070efe) context_pane_ParamLimits

0x6728,	// (0x0006b3fa) signal_pane_ParamLimits

0x5439,	// (0x0006a10b) main_call2_pane

0xc21a,	// (0x00070eec) popup_phob_thumbnail2_window_ParamLimits

0xc21a,	// (0x00070eec) popup_phob_thumbnail2_window

0xec44,	// (0x00073916) aid_hotspot_pointer_arrow_pane

0xec4c,	// (0x0007391e) aid_hotspot_pointer_hand_pane

0x62eb,	// (0x0006afbd) phob_pre_status_pane_g5

0x3a43,	// (0x00068715) cams_zoom_pane_ParamLimits

0x3a52,	// (0x00068724) image_vga_pane_ParamLimits

0x3a6a,	// (0x0006873c) main_camera_pane_g1_ParamLimits

0x3a7a,	// (0x0006874c) main_camera_pane_g2_ParamLimits

0x3a8a,	// (0x0006875c) main_camera_pane_g3_ParamLimits

0x3a9a,	// (0x0006876c) main_camera_pane_g4_ParamLimits

0x3aaa,	// (0x0006877c) main_camera_pane_g5_ParamLimits

0x3aba,	// (0x0006878c) main_camera_pane_g6_ParamLimits

0x3aca,	// (0x0006879c) main_camera_pane_g7_ParamLimits

0xf271,	// (0x00073f43) main_camera_pane_g_ParamLimits

0x3ada,	// (0x000687ac) main_camera_pane_t1_ParamLimits

0x3af0,	// (0x000687c2) main_camera_pane_t2_ParamLimits

0xf282,	// (0x00073f54) main_camera_pane_t_ParamLimits

0xac41,	// (0x0006f913) bg_popup_preview_window_pane_cp01_ParamLimits

0xac41,	// (0x0006f913) bg_popup_preview_window_pane_cp01

0x601f,	// (0x0006acf1) popup_phob_thumbnail2_window_g1_ParamLimits

0x601f,	// (0x0006acf1) popup_phob_thumbnail2_window_g1

0xa9e6,	// (0x0006f6b8) call2_cli_visual_pane

0x6042,	// (0x0006ad14) popup_call2_audio_conf_window_ParamLimits

0x6042,	// (0x0006ad14) popup_call2_audio_conf_window

0x6060,	// (0x0006ad32) popup_call2_audio_first_window_ParamLimits

0x6060,	// (0x0006ad32) popup_call2_audio_first_window

0x60d6,	// (0x0006ada8) popup_call2_audio_in_window_ParamLimits

0x60d6,	// (0x0006ada8) popup_call2_audio_in_window

0x610a,	// (0x0006addc) popup_call2_audio_out_window_ParamLimits

0x610a,	// (0x0006addc) popup_call2_audio_out_window

0x615c,	// (0x0006ae2e) popup_call2_audio_second_window_ParamLimits

0x615c,	// (0x0006ae2e) popup_call2_audio_second_window

0x61ae,	// (0x0006ae80) popup_call2_audio_wait_window_ParamLimits

0x61ae,	// (0x0006ae80) popup_call2_audio_wait_window

0xa9e6,	// (0x0006f6b8) bg_popup_call2_act_pane_cp03

0xac23,	// (0x0006f8f5) list_conf_pane_cp

0xb20f,	// (0x0006fee1) popup_call2_audio_conf_window_t1

0x4f0f,	// (0x00069be1) list_single_graphic_popup_conf2_pane_ParamLimits

0x4f0f,	// (0x00069be1) list_single_graphic_popup_conf2_pane

0x4f22,	// (0x00069bf4) list_highlight_pane_cp04

0xb21d,	// (0x0006feef) list_single_graphic_popup_conf2_pane_g1

0x4f33,	// (0x00069c05) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x0007424b) list_single_graphic_popup_conf2_pane_g

0xb225,	// (0x0006fef7) list_single_graphic_popup_conf2_pane_t1

0xb233,	// (0x0006ff05) bg_popup_call2_act_pane_cp01_ParamLimits

0xb233,	// (0x0006ff05) bg_popup_call2_act_pane_cp01

0xb2bd,	// (0x0006ff8f) call_type_pane_cp05_ParamLimits

0xb2bd,	// (0x0006ff8f) call_type_pane_cp05

0xb311,	// (0x0006ffe3) popup_call2_audio_second_window_g1_ParamLimits

0xb311,	// (0x0006ffe3) popup_call2_audio_second_window_g1

0xb365,	// (0x00070037) popup_call2_audio_second_window_g2_ParamLimits

0xb365,	// (0x00070037) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x00074250) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x00074250) popup_call2_audio_second_window_g

0xb3ca,	// (0x0007009c) popup_call2_audio_second_window_t1_ParamLimits

0xb3ca,	// (0x0007009c) popup_call2_audio_second_window_t1

0xb485,	// (0x00070157) popup_call2_audio_second_window_t2_ParamLimits

0xb485,	// (0x00070157) popup_call2_audio_second_window_t2

0xb4d8,	// (0x000701aa) popup_call2_audio_second_window_t3_ParamLimits

0xb4d8,	// (0x000701aa) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x00074257) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x00074257) popup_call2_audio_second_window_t

0xa9e6,	// (0x0006f6b8) bg_popup_call2_in_pane_cp02

0xa9f0,	// (0x0006f6c2) call_type_pane_cp04

0xa9f8,	// (0x0006f6ca) popup_call2_audio_wait_window_g1

0xaa00,	// (0x0006f6d2) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x00073e30) popup_call2_audio_wait_window_g

0xaa08,	// (0x0006f6da) popup_call2_audio_wait_window_t3

0xb5cb,	// (0x0007029d) bg_popup_call2_act_pane_ParamLimits

0xb5cb,	// (0x0007029d) bg_popup_call2_act_pane

0xb68b,	// (0x0007035d) call_type_pane_cp03_ParamLimits

0xb68b,	// (0x0007035d) call_type_pane_cp03

0xb6ef,	// (0x000703c1) popup_call2_audio_first_window_g1_ParamLimits

0xb6ef,	// (0x000703c1) popup_call2_audio_first_window_g1

0xb75f,	// (0x00070431) popup_call2_audio_first_window_g2_ParamLimits

0xb75f,	// (0x00070431) popup_call2_audio_first_window_g2

0x5709,	// (0x0006a3db) popup_call2_audio_first_window_g3_ParamLimits

0x5709,	// (0x0006a3db) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x00074260) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x00074260) popup_call2_audio_first_window_g

0xb83d,	// (0x0007050f) popup_call2_audio_first_window_t1_ParamLimits

0xb83d,	// (0x0007050f) popup_call2_audio_first_window_t1

0xb940,	// (0x00070612) popup_call2_audio_first_window_t4_ParamLimits

0xb940,	// (0x00070612) popup_call2_audio_first_window_t4

0xba23,	// (0x000706f5) popup_call2_audio_first_window_t5_ParamLimits

0xba23,	// (0x000706f5) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x0007426b) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x0007426b) popup_call2_audio_first_window_t

0xac39,	// (0x0006f90b) bg_popup_call2_act_pane_g1

0xc0d0,	// (0x00070da2) popup_cale_lunar_info_window_t1

0xc0de,	// (0x00070db0) popup_cale_lunar_info_window_t2

0xc0ec,	// (0x00070dbe) popup_cale_lunar_info_window_t3

0xa9e6,	// (0x0006f6b8) bg_popup_call2_bubble_pane

0xbb24,	// (0x000707f6) bg_popup_call2_in_pane_cp01_ParamLimits

0xbb24,	// (0x000707f6) bg_popup_call2_in_pane_cp01

0xa6c2,	// (0x0006f394) call_type_pane_cp02

0xbb6c,	// (0x0007083e) popup_call2_audio_out_window_g1_ParamLimits

0xbb6c,	// (0x0007083e) popup_call2_audio_out_window_g1

0xbb98,	// (0x0007086a) popup_call2_audio_out_window_g2_ParamLimits

0xbb98,	// (0x0007086a) popup_call2_audio_out_window_g2

0xbbc0,	// (0x00070892) popup_call2_audio_out_window_g3_ParamLimits

0xbbc0,	// (0x00070892) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x00074274) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x00074274) popup_call2_audio_out_window_g

0xbbfb,	// (0x000708cd) popup_call2_audio_out_window_t1_ParamLimits

0xbbfb,	// (0x000708cd) popup_call2_audio_out_window_t1

0xbc5a,	// (0x0007092c) popup_call2_audio_out_window_t2_ParamLimits

0xbc5a,	// (0x0007092c) popup_call2_audio_out_window_t2

0xbcae,	// (0x00070980) popup_call2_audio_out_window_t3_ParamLimits

0xbcae,	// (0x00070980) popup_call2_audio_out_window_t3

0xbcc4,	// (0x00070996) popup_call2_audio_out_window_t4_ParamLimits

0xbcc4,	// (0x00070996) popup_call2_audio_out_window_t4

0xbcda,	// (0x000709ac) popup_call2_audio_out_window_t5_ParamLimits

0xbcda,	// (0x000709ac) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x0007427d) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x0007427d) popup_call2_audio_out_window_t

0xbd3e,	// (0x00070a10) bg_popup_call2_in_pane_ParamLimits

0xbd3e,	// (0x00070a10) bg_popup_call2_in_pane

0xbd9a,	// (0x00070a6c) popup_call2_audio_in_window_g1_ParamLimits

0xbd9a,	// (0x00070a6c) popup_call2_audio_in_window_g1

0xbdd2,	// (0x00070aa4) popup_call2_audio_in_window_g2_ParamLimits

0xbdd2,	// (0x00070aa4) popup_call2_audio_in_window_g2

0xbe0a,	// (0x00070adc) popup_call2_audio_in_window_g3_ParamLimits

0xbe0a,	// (0x00070adc) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x0007428a) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x0007428a) popup_call2_audio_in_window_g

0xbe62,	// (0x00070b34) popup_call2_audio_in_window_t1_ParamLimits

0xbe62,	// (0x00070b34) popup_call2_audio_in_window_t1

0xbee2,	// (0x00070bb4) popup_call2_audio_in_window_t2_ParamLimits

0xbee2,	// (0x00070bb4) popup_call2_audio_in_window_t2

0xbf62,	// (0x00070c34) popup_call2_audio_in_window_t3_ParamLimits

0xbf62,	// (0x00070c34) popup_call2_audio_in_window_t3

0xbf7c,	// (0x00070c4e) popup_call2_audio_in_window_t4_ParamLimits

0xbf7c,	// (0x00070c4e) popup_call2_audio_in_window_t4

0xbf8e,	// (0x00070c60) popup_call2_audio_in_window_t5_ParamLimits

0xbf8e,	// (0x00070c60) popup_call2_audio_in_window_t5

0xbfa3,	// (0x00070c75) popup_call2_audio_in_window_t6_ParamLimits

0xbfa3,	// (0x00070c75) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x00074293) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x00074293) popup_call2_audio_in_window_t

0xac39,	// (0x0006f90b) bg_popup_call2_in_pane_g1

0xc0fa,	// (0x00070dcc) popup_cale_lunar_info_window_t4

0x0003,

0xf63c,	// (0x0007430e) popup_cale_lunar_info_window_t

0xac41,	// (0x0006f913) bg_popup_call2_rect_pane_ParamLimits

0xac41,	// (0x0006f913) bg_popup_call2_rect_pane

0xa9e6,	// (0x0006f6b8) call2_cli_visual_graphic_pane

0xa9e6,	// (0x0006f6b8) call2_cli_visual_text_pane

0xec86,	// (0x00073958) smil_status_volume_pane_g3

0x0002,

0xadd5,	// (0x0006faa7) call2_cli_visual_graphic_pane_g1

0xadd5,	// (0x0006faa7) call2_cli_visual_graphic_pane_g2

0xadd5,	// (0x0006faa7) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x000742a0) call2_cli_visual_graphic_pane_g

0xbfb8,	// (0x00070c8a) bg_popup_call2_rect_pane_g1

0xae7d,	// (0x0006fb4f) bg_popup_call2_rect_pane_g2

0xbfc0,	// (0x00070c92) bg_popup_call2_rect_pane_g3

0xbfc8,	// (0x00070c9a) bg_popup_call2_rect_pane_g4

0xbfd0,	// (0x00070ca2) bg_popup_call2_rect_pane_g5

0xbfd8,	// (0x00070caa) bg_popup_call2_rect_pane_g6

0xbfe0,	// (0x00070cb2) bg_popup_call2_rect_pane_g7

0xbfe8,	// (0x00070cba) bg_popup_call2_rect_pane_g8

0xbff0,	// (0x00070cc2) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x000742a7) bg_popup_call2_rect_pane_g

0xbff8,	// (0x00070cca) bg_popup_call2_bubble_pane_g1

0xc000,	// (0x00070cd2) bg_popup_call2_bubble_pane_g2

0xc008,	// (0x00070cda) bg_popup_call2_bubble_pane_g3

0xc010,	// (0x00070ce2) bg_popup_call2_bubble_pane_g4

0xc018,	// (0x00070cea) bg_popup_call2_bubble_pane_g5

0xc020,	// (0x00070cf2) bg_popup_call2_bubble_pane_g6

0xc028,	// (0x00070cfa) bg_popup_call2_bubble_pane_g7

0xc030,	// (0x00070d02) bg_popup_call2_bubble_pane_g8

0xc038,	// (0x00070d0a) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x000742ba) bg_popup_call2_bubble_pane_g

0x3566,	// (0x00068238) aid_cale_week_size_cell_pane

0x3b06,	// (0x000687d8) aid_cams_cif_uncrop_pane_ParamLimits

0x3b06,	// (0x000687d8) aid_cams_cif_uncrop_pane

0x3ca7,	// (0x00068979) aid_cams_size_cell_ParamLimits

0x3ca7,	// (0x00068979) aid_cams_size_cell

0x3cbb,	// (0x0006898d) grid_cams_pane_ParamLimits

0x3cd0,	// (0x000689a2) linegrid_cams_pane_ParamLimits

0x3d81,	// (0x00068a53) call_video_pane_t1

0x3d93,	// (0x00068a65) call_video_pane_t2

0x0001,

0xf2d5,	// (0x00073fa7) call_video_pane_t

0x4210,	// (0x00068ee2) aid_cale_month_size_cell_pane_ParamLimits

0x4210,	// (0x00068ee2) aid_cale_month_size_cell_pane

0xf685,	// (0x00074357) smil_status_volume_pane_g

0xec93,	// (0x00073965) volume_smil_pane_ParamLimits

0xa58c,	// (0x0006f25e) aid_popup2_width_pane

0x34ee,	// (0x000681c0) cell_qdial_pane_g4_ParamLimits

0x34ee,	// (0x000681c0) cell_qdial_pane_g4

0x5205,	// (0x00069ed7) aid_blid_cardinal_pane_ParamLimits

0x5211,	// (0x00069ee3) aid_blid_destination_pane_ParamLimits

0x5211,	// (0x00069ee3) aid_blid_destination_pane

0xac41,	// (0x0006f913) bg_popup_call_poc_act_pane_ParamLimits

0xac41,	// (0x0006f913) bg_popup_call_poc_act_pane

0xac41,	// (0x0006f913) bg_popup_call_poc_inact_pane_ParamLimits

0xac41,	// (0x0006f913) bg_popup_call_poc_inact_pane

0xc040,	// (0x00070d12) bg_popup_call_poc_act_pane_g1

0xc048,	// (0x00070d1a) bg_popup_call_poc_act_pane_g2

0xc050,	// (0x00070d22) bg_popup_call_poc_act_pane_g3

0xc010,	// (0x00070ce2) bg_popup_call_poc_act_pane_g4

0xc018,	// (0x00070cea) bg_popup_call_poc_act_pane_g5

0xc058,	// (0x00070d2a) bg_popup_call_poc_act_pane_g6

0xc028,	// (0x00070cfa) bg_popup_call_poc_act_pane_g7

0xc060,	// (0x00070d32) bg_popup_call_poc_act_pane_g8

0xa9e6,	// (0x0006f6b8) main_usb_pane

0xc1f9,	// (0x00070ecb) popup_cale_lunar_info_window

0x3f5a,	// (0x00068c2c) im_reading_pane_t1_ParamLimits

0xeaf7,	// (0x000737c9) list_im_pane_ParamLimits

0xeb08,	// (0x000737da) scroll_pane_cp07_ParamLimits

0xa9e6,	// (0x0006f6b8) grid_highlight_pane_cp012

0xac41,	// (0x0006f913) mup_scale_pane_ParamLimits

0x5afb,	// (0x0006a7cd) main_usb_pane_g1_ParamLimits

0x5afb,	// (0x0006a7cd) main_usb_pane_g1

0x6208,	// (0x0006aeda) main_usb_pane_g2_ParamLimits

0x6208,	// (0x0006aeda) main_usb_pane_g2

0x0001,

0xf625,	// (0x000742f7) main_usb_pane_g_ParamLimits

0xf625,	// (0x000742f7) main_usb_pane_g

0x621c,	// (0x0006aeee) main_usb_pane_t1_ParamLimits

0x621c,	// (0x0006aeee) main_usb_pane_t1

0x622e,	// (0x0006af00) main_usb_pane_t2_ParamLimits

0x622e,	// (0x0006af00) main_usb_pane_t2

0x6240,	// (0x0006af12) main_usb_pane_t3_ParamLimits

0x6240,	// (0x0006af12) main_usb_pane_t3

0x6252,	// (0x0006af24) main_usb_pane_t4_ParamLimits

0x6252,	// (0x0006af24) main_usb_pane_t4

0x6264,	// (0x0006af36) main_usb_pane_t5_ParamLimits

0x6264,	// (0x0006af36) main_usb_pane_t5

0x6276,	// (0x0006af48) main_usb_pane_t6_ParamLimits

0x6276,	// (0x0006af48) main_usb_pane_t6

0x0005,

0xf62a,	// (0x000742fc) main_usb_pane_t_ParamLimits

0x519f,	// (0x00069e71) aid_text_placing

0x51b1,	// (0x00069e83) main_location2_pane_t1_ParamLimits

0x51c7,	// (0x00069e99) main_location2_pane_t2_ParamLimits

0x51dd,	// (0x00069eaf) main_location2_pane_t3_ParamLimits

0x51f3,	// (0x00069ec5) main_location2_pane_t4_ParamLimits

0x51f3,	// (0x00069ec5) main_location2_pane_t4

0xf436,	// (0x00074108) main_location2_pane_t_ParamLimits

0xac7d,	// (0x0006f94f) find_pinb_pane_g2_ParamLimits

0xac7d,	// (0x0006f94f) find_pinb_pane_g2

0x0001,

0xf184,	// (0x00073e56) find_pinb_pane_g_ParamLimits

0xf184,	// (0x00073e56) find_pinb_pane_g

0xac89,	// (0x0006f95b) find_pinb_pane_t1_ParamLimits

0xac9b,	// (0x0006f96d) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x00073e5b) find_pinb_pane_t_ParamLimits

0xa9e6,	// (0x0006f6b8) main_call3_pane

0x4581,	// (0x00069253) cale_month_day_heading_pane_t1_ParamLimits

0x45df,	// (0x000692b1) cale_month_day_heading_pane_t2_ParamLimits

0x4644,	// (0x00069316) cale_month_day_heading_pane_t3_ParamLimits

0x46a9,	// (0x0006937b) cale_month_day_heading_pane_t4_ParamLimits

0x470e,	// (0x000693e0) cale_month_day_heading_pane_t5_ParamLimits

0x4773,	// (0x00069445) cale_month_day_heading_pane_t6_ParamLimits

0x47d8,	// (0x000694aa) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x00073fdf) cale_month_day_heading_pane_t_ParamLimits

0x49c2,	// (0x00069694) smil_status_volume_pane

0x5ad7,	// (0x0006a7a9) postcard_address_pane_ParamLimits

0x5ad7,	// (0x0006a7a9) postcard_address_pane

0x5ae9,	// (0x0006a7bb) postcard_message_pane_ParamLimits

0x5ae9,	// (0x0006a7bb) postcard_message_pane

0x61e6,	// (0x0006aeb8) call2_cli_visual_pane_t1_ParamLimits

0x61e6,	// (0x0006aeb8) call2_cli_visual_pane_t1

0x6944,	// (0x0006b616) postcard_message_pane_t1_ParamLimits

0x6944,	// (0x0006b616) postcard_message_pane_t1

0x692d,	// (0x0006b5ff) postcard_address_pane_t1_ParamLimits

0x692d,	// (0x0006b5ff) postcard_address_pane_t1

0x691b,	// (0x0006b5ed) popup_call3_audio_in_window_ParamLimits

0x691b,	// (0x0006b5ed) popup_call3_audio_in_window

0x67aa,	// (0x0006b47c) bg_popup_call3_in_pane_ParamLimits

0x67aa,	// (0x0006b47c) bg_popup_call3_in_pane

0x681c,	// (0x0006b4ee) popup_call3_audio_in_window_g1_ParamLimits

0x681c,	// (0x0006b4ee) popup_call3_audio_in_window_g1

0x683c,	// (0x0006b50e) popup_call3_audio_in_window_g2_ParamLimits

0x683c,	// (0x0006b50e) popup_call3_audio_in_window_g2

0x685c,	// (0x0006b52e) popup_call3_audio_in_window_g3_ParamLimits

0x685c,	// (0x0006b52e) popup_call3_audio_in_window_g3

0x0003,

0xf68c,	// (0x0007435e) popup_call3_audio_in_window_g_ParamLimits

0xf68c,	// (0x0007435e) popup_call3_audio_in_window_g

0x688d,	// (0x0006b55f) popup_call3_audio_in_window_t1_ParamLimits

0x688d,	// (0x0006b55f) popup_call3_audio_in_window_t1

0x68cb,	// (0x0006b59d) popup_call3_audio_in_window_t2_ParamLimits

0x68cb,	// (0x0006b59d) popup_call3_audio_in_window_t2

0x6909,	// (0x0006b5db) popup_call3_audio_in_window_t3_ParamLimits

0x6909,	// (0x0006b5db) popup_call3_audio_in_window_t3

0x0002,

0xf695,	// (0x00074367) popup_call3_audio_in_window_t_ParamLimits

0xf695,	// (0x00074367) popup_call3_audio_in_window_t

0x5439,	// (0x0006a10b) bg_popup_call3_rect_pane

0xbfb8,	// (0x00070c8a) bg_popup_call3_rect_pane_g1

0xae7d,	// (0x0006fb4f) bg_popup_call3_rect_pane_g2

0xbfc0,	// (0x00070c92) bg_popup_call3_rect_pane_g3

0xbfc8,	// (0x00070c9a) bg_popup_call3_rect_pane_g4

0xbfd0,	// (0x00070ca2) bg_popup_call3_rect_pane_g5

0xbfd8,	// (0x00070caa) bg_popup_call3_rect_pane_g6

0xbfe0,	// (0x00070cb2) bg_popup_call3_rect_pane_g7

0x5701,	// (0x0006a3d3) mup_visualizer_osc_pane

0x5717,	// (0x0006a3e9) mup_visualizer_spec_pane

0x67da,	// (0x0006b4ac) call3_video_qcif_pane_ParamLimits

0x67da,	// (0x0006b4ac) call3_video_qcif_pane

0x67eb,	// (0x0006b4bd) call3_video_qcif_uncrop_pane_ParamLimits

0x67eb,	// (0x0006b4bd) call3_video_qcif_uncrop_pane

0x67f7,	// (0x0006b4c9) call3_video_subqcif_pane_ParamLimits

0x67f7,	// (0x0006b4c9) call3_video_subqcif_pane

0x680b,	// (0x0006b4dd) call3_video_subqcif_uncrop_pane_ParamLimits

0x680b,	// (0x0006b4dd) call3_video_subqcif_uncrop_pane

0x687c,	// (0x0006b54e) popup_call3_audio_in_window_g4_ParamLimits

0x687c,	// (0x0006b54e) popup_call3_audio_in_window_g4

0x6799,	// (0x0006b46b) mup_spec_half_pane

0x67a2,	// (0x0006b474) mup_spec_half_pane_cp

0xc28c,	// (0x00070f5e) mup_osc_middle_pane

0xc295,	// (0x00070f67) mup_visualizer_osc_pane_g1

0x677a,	// (0x0006b44c) mup_spec_bar_pane_ParamLimits

0x677a,	// (0x0006b44c) mup_spec_bar_pane

0xc279,	// (0x00070f4b) mup_spec_bar_pane_g1

0xc283,	// (0x00070f55) mup_spec_bar_pane_g2

0x0001,

0xf680,	// (0x00074352) mup_spec_bar_pane_g

0x3566,	// (0x00068238) aid_cale_week_size_cell_pane_ParamLimits

0x3579,	// (0x0006824b) bg_cale_heading_pane_ParamLimits

0xaf09,	// (0x0006fbdb) bg_cale_pane_cp01_ParamLimits

0x358d,	// (0x0006825f) cale_week_corner_pane_ParamLimits

0x35a3,	// (0x00068275) cale_week_day_heading_pane_ParamLimits

0x35b7,	// (0x00068289) cale_week_scroll_pane_g1_ParamLimits

0x35c8,	// (0x0006829a) cale_week_scroll_pane_g2_ParamLimits

0x35d9,	// (0x000682ab) cale_week_scroll_pane_g3_ParamLimits

0x35ea,	// (0x000682bc) cale_week_scroll_pane_g4_ParamLimits

0x35fb,	// (0x000682cd) cale_week_scroll_pane_g5_ParamLimits

0x360c,	// (0x000682de) cale_week_scroll_pane_g6_ParamLimits

0x361d,	// (0x000682ef) cale_week_scroll_pane_g7_ParamLimits

0x362e,	// (0x00068300) cale_week_scroll_pane_g8_ParamLimits

0x3641,	// (0x00068313) cale_week_scroll_pane_g9_ParamLimits

0x3652,	// (0x00068324) cale_week_scroll_pane_g10_ParamLimits

0x3663,	// (0x00068335) cale_week_scroll_pane_g11_ParamLimits

0x3674,	// (0x00068346) cale_week_scroll_pane_g12_ParamLimits

0x3685,	// (0x00068357) cale_week_scroll_pane_g13_ParamLimits

0x3696,	// (0x00068368) cale_week_scroll_pane_g14_ParamLimits

0x36a7,	// (0x00068379) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x00073ee7) cale_week_scroll_pane_g_ParamLimits

0x36b8,	// (0x0006838a) cale_week_time_pane_ParamLimits

0x36cb,	// (0x0006839d) grid_cale_week_pane_ParamLimits

0xaf22,	// (0x0006fbf4) listscroll_cale_week_pane_t1

0x36de,	// (0x000683b0) scroll_pane_cp08_ParamLimits

0x4274,	// (0x00068f46) cale_month_corner_pane_ParamLimits

0x452e,	// (0x00069200) cale_month_pane_t1

0x4540,	// (0x00069212) cale_month_week_pane_ParamLimits

0x4df2,	// (0x00069ac4) popup_call_status_window_g1_ParamLimits

0x4e06,	// (0x00069ad8) popup_call_status_window_g2_ParamLimits

0x4e1a,	// (0x00069aec) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x0007408f) popup_call_status_window_g_ParamLimits

0x4e80,	// (0x00069b52) aid_call2_pane

0x273f,	// (0x00067411) msg_header_pane_g1

0x5ad7,	// (0x0006a7a9) postcard_address2_pane_ParamLimits

0x5ad7,	// (0x0006a7a9) postcard_address2_pane

0x5ae9,	// (0x0006a7bb) postcard_message2_pane_ParamLimits

0x5ae9,	// (0x0006a7bb) postcard_message2_pane

0x6736,	// (0x0006b408) message2_row_pane_ParamLimits

0x6736,	// (0x0006b408) message2_row_pane

0x6750,	// (0x0006b422) address2_row_pane_ParamLimits

0x6750,	// (0x0006b422) address2_row_pane

0xc247,	// (0x00070f19) postcard_message2_row_pane_g1

0xc24f,	// (0x00070f21) postcard_message2_row_pane_t1

0xc247,	// (0x00070f19) address2_row_pane_g1

0xc24f,	// (0x00070f21) address2_row_pane_t1

0x3a0e,	// (0x000686e0) aid_size_cell_vorec

0xa9e6,	// (0x0006f6b8) main_rss_pane

0x6763,	// (0x0006b435) rss_list_single_pane_ParamLimits

0x6763,	// (0x0006b435) rss_list_single_pane

0xc25d,	// (0x00070f2f) rss_list_single_pane_t1

0xc26b,	// (0x00070f3d) rss_list_single_pane_t2

0x0001,

0xf67b,	// (0x0007434d) rss_list_single_pane_t

0xa9e6,	// (0x0006f6b8) main_camera2_pane

0xa9e6,	// (0x0006f6b8) main_video2_pane

0x699d,	// (0x0006b66f) cams_zoom_pane_cp2_ParamLimits

0x699d,	// (0x0006b66f) cams_zoom_pane_cp2

0x69b4,	// (0x0006b686) image2_vga_pane_ParamLimits

0x69b4,	// (0x0006b686) image2_vga_pane

0x69ea,	// (0x0006b6bc) main_camera2_pane_g1_ParamLimits

0x69ea,	// (0x0006b6bc) main_camera2_pane_g1

0x6a0a,	// (0x0006b6dc) main_camera2_pane_g2_ParamLimits

0x6a0a,	// (0x0006b6dc) main_camera2_pane_g2

0x6a21,	// (0x0006b6f3) main_camera2_pane_g3_ParamLimits

0x6a21,	// (0x0006b6f3) main_camera2_pane_g3

0x6a38,	// (0x0006b70a) main_camera2_pane_g4_ParamLimits

0x6a38,	// (0x0006b70a) main_camera2_pane_g4

0x6a4f,	// (0x0006b721) main_camera2_pane_g5_ParamLimits

0x6a4f,	// (0x0006b721) main_camera2_pane_g5

0x6a66,	// (0x0006b738) main_camera2_pane_g6_ParamLimits

0x6a66,	// (0x0006b738) main_camera2_pane_g6

0x6a7d,	// (0x0006b74f) main_camera2_pane_g7_ParamLimits

0x6a7d,	// (0x0006b74f) main_camera2_pane_g7

0x6a94,	// (0x0006b766) main_camera2_pane_g8_ParamLimits

0x6a94,	// (0x0006b766) main_camera2_pane_g8

0x0008,

0xf69c,	// (0x0007436e) main_camera2_pane_g_ParamLimits

0xf69c,	// (0x0007436e) main_camera2_pane_g

0x6ac2,	// (0x0006b794) main_camera2_pane_t1_ParamLimits

0x6ac2,	// (0x0006b794) main_camera2_pane_t1

0x6af1,	// (0x0006b7c3) main_camera2_pane_t2_ParamLimits

0x6af1,	// (0x0006b7c3) main_camera2_pane_t2

0x6b0e,	// (0x0006b7e0) main_camera2_pane_t3_ParamLimits

0x6b0e,	// (0x0006b7e0) main_camera2_pane_t3

0x6b5a,	// (0x0006b82c) main_camera2_pane_t4_ParamLimits

0x6b5a,	// (0x0006b82c) main_camera2_pane_t4

0x0006,

0xf6af,	// (0x00074381) main_camera2_pane_t_ParamLimits

0xf6af,	// (0x00074381) main_camera2_pane_t

0x6bcf,	// (0x0006b8a1) cams_zoom_pane_cp4_ParamLimits

0x6bcf,	// (0x0006b8a1) cams_zoom_pane_cp4

0x6be5,	// (0x0006b8b7) image2_cif_pane_ParamLimits

0x6be5,	// (0x0006b8b7) image2_cif_pane

0x6c08,	// (0x0006b8da) image2_subqcif_pane_ParamLimits

0x6c08,	// (0x0006b8da) image2_subqcif_pane

0x6c1e,	// (0x0006b8f0) main_video2_pane_g1_ParamLimits

0x6c1e,	// (0x0006b8f0) main_video2_pane_g1

0x6c38,	// (0x0006b90a) main_video2_pane_g2_ParamLimits

0x6c38,	// (0x0006b90a) main_video2_pane_g2

0x6c4e,	// (0x0006b920) main_video2_pane_g3_ParamLimits

0x6c4e,	// (0x0006b920) main_video2_pane_g3

0x6c64,	// (0x0006b936) main_video2_pane_g4_ParamLimits

0x6c64,	// (0x0006b936) main_video2_pane_g4

0x6c7a,	// (0x0006b94c) main_video2_pane_g5_ParamLimits

0x6c7a,	// (0x0006b94c) main_video2_pane_g5

0x6c90,	// (0x0006b962) main_video2_pane_g6_ParamLimits

0x6c90,	// (0x0006b962) main_video2_pane_g6

0x0005,

0xf6be,	// (0x00074390) main_video2_pane_g_ParamLimits

0xf6be,	// (0x00074390) main_video2_pane_g

0x6caa,	// (0x0006b97c) main_video2_pane_t1_ParamLimits

0x6caa,	// (0x0006b97c) main_video2_pane_t1

0x6cce,	// (0x0006b9a0) main_video2_pane_t2_ParamLimits

0x6cce,	// (0x0006b9a0) main_video2_pane_t2

0x6d18,	// (0x0006b9ea) main_video2_pane_t3_ParamLimits

0x6d18,	// (0x0006b9ea) main_video2_pane_t3

0x0002,

0xf6cb,	// (0x0007439d) main_video2_pane_t_ParamLimits

0xf6cb,	// (0x0007439d) main_video2_pane_t

0x6325,	// (0x0006aff7) call_muted_g2

0x0001,

0xf66d,	// (0x0007433f) call_muted_g

0xa9e6,	// (0x0006f6b8) main_mup2_pane

0x6d5a,	// (0x0006ba2c) main_mup2_pane_g1_ParamLimits

0x6d5a,	// (0x0006ba2c) main_mup2_pane_g1

0x6d66,	// (0x0006ba38) main_mup2_pane_g2_ParamLimits

0x6d66,	// (0x0006ba38) main_mup2_pane_g2

0xecfc,	// (0x000739ce) main_mup_pane_g13_cp1

0xed04,	// (0x000739d6) mup_volume_pane_cp1

0x6d82,	// (0x0006ba54) main_mup2_pane_g4_ParamLimits

0x6d82,	// (0x0006ba54) main_mup2_pane_g4

0x6d92,	// (0x0006ba64) main_mup2_pane_g5_ParamLimits

0x6d92,	// (0x0006ba64) main_mup2_pane_g5

0x6da2,	// (0x0006ba74) main_mup2_pane_g6_ParamLimits

0x6da2,	// (0x0006ba74) main_mup2_pane_g6

0x6db2,	// (0x0006ba84) main_mup2_pane_g7_ParamLimits

0x6db2,	// (0x0006ba84) main_mup2_pane_g7

0x0006,

0xf6d2,	// (0x000743a4) main_mup2_pane_g_ParamLimits

0xf6d2,	// (0x000743a4) main_mup2_pane_g

0x6dca,	// (0x0006ba9c) main_mup2_pane_t1_ParamLimits

0x6dca,	// (0x0006ba9c) main_mup2_pane_t1

0x6de0,	// (0x0006bab2) main_mup2_pane_t2_ParamLimits

0x6de0,	// (0x0006bab2) main_mup2_pane_t2

0x6df6,	// (0x0006bac8) main_mup2_pane_t3_ParamLimits

0x6df6,	// (0x0006bac8) main_mup2_pane_t3

0x6e0c,	// (0x0006bade) main_mup2_pane_t4_ParamLimits

0x6e0c,	// (0x0006bade) main_mup2_pane_t4

0x6e24,	// (0x0006baf6) main_mup2_pane_t5_ParamLimits

0x6e24,	// (0x0006baf6) main_mup2_pane_t5

0x6e3c,	// (0x0006bb0e) main_mup2_pane_t6_ParamLimits

0x6e3c,	// (0x0006bb0e) main_mup2_pane_t6

0x0005,

0xf6e1,	// (0x000743b3) main_mup2_pane_t_ParamLimits

0xf6e1,	// (0x000743b3) main_mup2_pane_t

0x6e6c,	// (0x0006bb3e) mup2_visualizer_pane_ParamLimits

0x6e6c,	// (0x0006bb3e) mup2_visualizer_pane

0x6e97,	// (0x0006bb69) mup_progress_pane_cp_ParamLimits

0x6e97,	// (0x0006bb69) mup_progress_pane_cp

0xece7,	// (0x000739b9) mup_volume_pane_cp_ParamLimits

0xece7,	// (0x000739b9) mup_volume_pane_cp

0x6eab,	// (0x0006bb7d) mup2_visualizer_pane_g1_ParamLimits

0x6eab,	// (0x0006bb7d) mup2_visualizer_pane_g1

0xc2cc,	// (0x00070f9e) mup2_visualizer_pane_g2_ParamLimits

0xc2cc,	// (0x00070f9e) mup2_visualizer_pane_g2

0x6ec0,	// (0x0006bb92) mup2_visualizer_pane_g3_ParamLimits

0x6ec0,	// (0x0006bb92) mup2_visualizer_pane_g3

0x0002,

0xf6ee,	// (0x000743c0) mup2_visualizer_pane_g_ParamLimits

0xf6ee,	// (0x000743c0) mup2_visualizer_pane_g

0x5e85,	// (0x0006ab57) aid_size_cell_fmradio

0x6481,	// (0x0006b153) aid_height_parent_landcape

0x3fbb,	// (0x00068c8d) wml_content_pane_cp

0x3fc3,	// (0x00068c95) wml_tabs_pane

0x3fcc,	// (0x00068c9e) popup_wml_miniature_window

0x3fd4,	// (0x00068ca6) scroll_pane_cp021

0x3fe8,	// (0x00068cba) wml_content_pane_comp8

0xa9e6,	// (0x0006f6b8) bg_popup_sub_pane_cp05

0xc2ea,	// (0x00070fbc) popup_wml_miniature_window_g1

0xc2f2,	// (0x00070fc4) wml_miniature_view_pane

0x6ecc,	// (0x0006bb9e) aid_size_wml_view

0x6ed4,	// (0x0006bba6) wml_miniature_view_pane_g1

0x6edd,	// (0x0006bbaf) wml_miniature_view_pane_g2

0x6ee6,	// (0x0006bbb8) wml_miniature_view_pane_g3

0x6eee,	// (0x0006bbc0) wml_miniature_view_pane_g4

0x6ef6,	// (0x0006bbc8) wml_miniature_view_pane_g5

0x6efe,	// (0x0006bbd0) wml_miniature_view_pane_g6

0x6f06,	// (0x0006bbd8) wml_miniature_view_pane_g7

0x6f0e,	// (0x0006bbe0) wml_miniature_view_pane_g8

0x0007,

0xf6f5,	// (0x000743c7) wml_miniature_view_pane_g

0xc2fa,	// (0x00070fcc) background_graphic_ParamLimits

0xc2fa,	// (0x00070fcc) background_graphic

0xc306,	// (0x00070fd8) wml_tabs_2_pane

0xc30f,	// (0x00070fe1) wml_tabs_3_pane_ParamLimits

0xc30f,	// (0x00070fe1) wml_tabs_3_pane

0xc321,	// (0x00070ff3) wml_tabs_4_pane_ParamLimits

0xc321,	// (0x00070ff3) wml_tabs_4_pane

0xc337,	// (0x00071009) wml_tabs_5_pane_ParamLimits

0xc337,	// (0x00071009) wml_tabs_5_pane

0xc351,	// (0x00071023) wml_tabs_pane_g2_ParamLimits

0xc351,	// (0x00071023) wml_tabs_pane_g2

0xc365,	// (0x00071037) wml_tabs_pane_g3_ParamLimits

0xc365,	// (0x00071037) wml_tabs_pane_g3

0x6f16,	// (0x0006bbe8) wml_tabs_2_active_pane_ParamLimits

0x6f16,	// (0x0006bbe8) wml_tabs_2_active_pane

0x6f26,	// (0x0006bbf8) wml_tabs_2_passive_pane_ParamLimits

0x6f26,	// (0x0006bbf8) wml_tabs_2_passive_pane

0x6f36,	// (0x0006bc08) wml_tabs_3_active_pane_cp_ParamLimits

0x6f36,	// (0x0006bc08) wml_tabs_3_active_pane_cp

0x6f47,	// (0x0006bc19) wml_tabs_3_passive_pane_ParamLimits

0x6f47,	// (0x0006bc19) wml_tabs_3_passive_pane

0x6f58,	// (0x0006bc2a) wml_tabs_3_passive_pane_cp_ParamLimits

0x6f58,	// (0x0006bc2a) wml_tabs_3_passive_pane_cp

0x6f69,	// (0x0006bc3b) tabs_4_active_pane

0x6f71,	// (0x0006bc43) tabs_4_passive_pane

0x6f79,	// (0x0006bc4b) tabs_4_passive_pane_cp

0x6f81,	// (0x0006bc53) tabs_4_passive_pane_cp2

0x6200,	// (0x0006aed2) aid_height_text

0x56d7,	// (0x0006a3a9) mup_volume_cont_pane_ParamLimits

0x56d7,	// (0x0006a3a9) mup_volume_cont_pane

0x31fe,	// (0x00067ed0) aid_size_cell_pinb

0x3208,	// (0x00067eda) aid_size_list_pinb

0x6e83,	// (0x0006bb55) mup2_volume_cont_pane_ParamLimits

0x6e83,	// (0x0006bb55) mup2_volume_cont_pane

0xecd3,	// (0x000739a5) mup2_volume_cont_pane_g1_ParamLimits

0xecd3,	// (0x000739a5) mup2_volume_cont_pane_g1

0x2f2f,	// (0x00067c01) aid_size_cell_touch_ParamLimits

0x2f2f,	// (0x00067c01) aid_size_cell_touch

0x3106,	// (0x00067dd8) touch_pane_ParamLimits

0x3106,	// (0x00067dd8) touch_pane

0xa57a,	// (0x0006f24c) main_rss2_pane

0xc382,	// (0x00071054) listscroll_rss2_pane

0xc38b,	// (0x0007105d) rss2_navigation_pane

0xc393,	// (0x00071065) list_rss2_pane

0x5028,	// (0x00069cfa) scroll_pane_cp22

0xc39b,	// (0x0007106d) rss2_navigation_pane_g1

0xc3a4,	// (0x00071076) rss2_navigation_pane_g2

0xc3ac,	// (0x0007107e) rss2_navigation_pane_g3

0x0002,

0xf706,	// (0x000743d8) rss2_navigation_pane_g

0xc3b4,	// (0x00071086) rss2_navigation_pane_t1

0x6f89,	// (0x0006bc5b) rss2_list_single_pane_ParamLimits

0x6f89,	// (0x0006bc5b) rss2_list_single_pane

0xc3c2,	// (0x00071094) rss2_list_single_pane_t2

0xc3d0,	// (0x000710a2) rss2_list_single_pane_t3_ParamLimits

0xc3d0,	// (0x000710a2) rss2_list_single_pane_t3

0xc3ed,	// (0x000710bf) rss2_list_single_pane_t4

0x49ac,	// (0x0006967e) smil_status_pane_g1

0xea7f,	// (0x00073751) main_image2_pane_ParamLimits

0xea7f,	// (0x00073751) main_image2_pane

0x6aab,	// (0x0006b77d) main_camera2_pane_g9_ParamLimits

0x6aab,	// (0x0006b77d) main_camera2_pane_g9

0x6b9d,	// (0x0006b86f) main_camera2_pane_t5_ParamLimits

0x6b9d,	// (0x0006b86f) main_camera2_pane_t5

0xeca8,	// (0x0007397a) main_camera2_pane_t6_ParamLimits

0xeca8,	// (0x0007397a) main_camera2_pane_t6

0x6f9d,	// (0x0006bc6f) main_image2_pane_g1_ParamLimits

0x6f9d,	// (0x0006bc6f) main_image2_pane_g1

0x5e47,	// (0x0006ab19) smil2_video_pane_ParamLimits

0x5e47,	// (0x0006ab19) smil2_video_pane

0xa5a4,	// (0x0006f276) aid_zoom_text_primary_cp

0xa5cd,	// (0x0006f29f) popup_preview_fixed_window

0xeaef,	// (0x000737c1) im_reading_pane_g1

0x6991,	// (0x0006b663) cams2_bc_adjust_pane_cp_ParamLimits

0x6991,	// (0x0006b663) cams2_bc_adjust_pane_cp

0x6bc3,	// (0x0006b895) cams2_bc_adjust_pane_ParamLimits

0x6bc3,	// (0x0006b895) cams2_bc_adjust_pane

0xed0c,	// (0x000739de) cams2_bc_adjust_pane_g1

0xed14,	// (0x000739e6) cams2_slider_pane

0xed1d,	// (0x000739ef) cams2_slider_pane_g1

0xed26,	// (0x000739f8) cams2_slider_pane_g2

0x0006,

0xf70d,	// (0x000743df) cams2_slider_pane_g

0x32e8,	// (0x00067fba) calc_display_pane_ParamLimits

0x3304,	// (0x00067fd6) calc_paper_pane_ParamLimits

0x3325,	// (0x00067ff7) grid_calc_pane_ParamLimits

0xec15,	// (0x000738e7) popup_clock_digital_window_t1_ParamLimits

0x5ce0,	// (0x0006a9b2) main_image_pane_t1

0x32ca,	// (0x00067f9c) aid_size_cell_calc_ParamLimits

0x32ca,	// (0x00067f9c) aid_size_cell_calc

0x64b1,	// (0x0006b183) popup_blid_sat_info2_window_ParamLimits

0x64b1,	// (0x0006b183) popup_blid_sat_info2_window

0xc403,	// (0x000710d5) aid_size_cell_blid

0xc40b,	// (0x000710dd) bg_popup_window_pane_cp07

0xc42e,	// (0x00071100) grid_popup_blid_pane

0xc436,	// (0x00071108) heading_pane_cp05_ParamLimits

0xc436,	// (0x00071108) heading_pane_cp05

0xc4fe,	// (0x000711d0) cell_popup_blid_pane_ParamLimits

0xc4fe,	// (0x000711d0) cell_popup_blid_pane

0xc51e,	// (0x000711f0) cell_popup_blid_pane_g1

0xc526,	// (0x000711f8) cell_popup_blid_pane_t1

0x6e56,	// (0x0006bb28) mup2_indicator_pane_ParamLimits

0x6e56,	// (0x0006bb28) mup2_indicator_pane

0x5439,	// (0x0006a10b) mup2_visualizer_osc_pane

0xc2d8,	// (0x00070faa) mup2_visualizer_spec_pane_ParamLimits

0xc2d8,	// (0x00070faa) mup2_visualizer_spec_pane

0x6fb1,	// (0x0006bc83) mup2_spec_half_pane

0x6fba,	// (0x0006bc8c) mup2_spec_half_pane_cp

0x6fc2,	// (0x0006bc94) mup2_spec_bar_pane_ParamLimits

0x6fc2,	// (0x0006bc94) mup2_spec_bar_pane

0xc279,	// (0x00070f4b) mup2_spec_bar_pane_g1

0xc283,	// (0x00070f55) mup2_spec_bar_pane_g2

0x0001,

0xf680,	// (0x00074352) mup2_spec_bar_pane_g

0x6fe1,	// (0x0006bcb3) mup2_osc_middle_pane

0xc295,	// (0x00070f67) mup2_visualizer_osc_pane_g1

0xa5f5,	// (0x0006f2c7) popup_number_entry_window_t1_ParamLimits

0xa608,	// (0x0006f2da) popup_number_entry_window_t2_ParamLimits

0xa61a,	// (0x0006f2ec) popup_number_entry_window_t3_ParamLimits

0x314e,	// (0x00067e20) popup_number_entry_window_t5_ParamLimits

0x314e,	// (0x00067e20) popup_number_entry_window_t5

0xf12f,	// (0x00073e01) popup_number_entry_window_t_ParamLimits

0xa62c,	// (0x0006f2fe) text_title_cp2_ParamLimits

0xec54,	// (0x00073926) aid_hotspot_pointer_text2_pane

0xec7a,	// (0x0007394c) main_viewer_pane_g9_ParamLimits

0xec7a,	// (0x0007394c) main_viewer_pane_g9

0x452e,	// (0x00069200) cale_month_pane_t1_ParamLimits

0x4a1e,	// (0x000696f0) bg_cale_pane_ParamLimits

0x4a36,	// (0x00069708) list_cale_pane_ParamLimits

0xaf22,	// (0x0006fbf4) listscroll_cale_day_pane_t1

0x4a47,	// (0x00069719) scroll_pane_cp09_ParamLimits

0x5785,	// (0x0006a457) main_mup_eq_pane_t1_ParamLimits

0x5785,	// (0x0006a457) main_mup_eq_pane_t1

0x579d,	// (0x0006a46f) main_mup_eq_pane_t2_ParamLimits

0x579d,	// (0x0006a46f) main_mup_eq_pane_t2

0x57b3,	// (0x0006a485) main_mup_eq_pane_t3_ParamLimits

0x57b3,	// (0x0006a485) main_mup_eq_pane_t3

0x57c9,	// (0x0006a49b) main_mup_eq_pane_t4_ParamLimits

0x57c9,	// (0x0006a49b) main_mup_eq_pane_t4

0x57df,	// (0x0006a4b1) main_mup_eq_pane_t5_ParamLimits

0x57df,	// (0x0006a4b1) main_mup_eq_pane_t5

0x57f5,	// (0x0006a4c7) main_mup_eq_pane_t6_ParamLimits

0x57f5,	// (0x0006a4c7) main_mup_eq_pane_t6

0x5807,	// (0x0006a4d9) main_mup_eq_pane_t7_ParamLimits

0x5807,	// (0x0006a4d9) main_mup_eq_pane_t7

0x5819,	// (0x0006a4eb) main_mup_eq_pane_t8_ParamLimits

0x5819,	// (0x0006a4eb) main_mup_eq_pane_t8

0x582b,	// (0x0006a4fd) main_mup_eq_pane_t9_ParamLimits

0x582b,	// (0x0006a4fd) main_mup_eq_pane_t9

0x5841,	// (0x0006a513) main_mup_eq_pane_t10_ParamLimits

0x5841,	// (0x0006a513) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x0007418e) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x0007418e) main_mup_eq_pane_t

0x58d4,	// (0x0006a5a6) mup_equalizer_pane_cp5_ParamLimits

0x58e6,	// (0x0006a5b8) mup_equalizer_pane_cp6_ParamLimits

0x58f8,	// (0x0006a5ca) mup_equalizer_pane_cp7_ParamLimits

0xa57a,	// (0x0006f24c) main_gallery_pane

0xc29e,	// (0x00070f70) smil2_volume_pane

0xc2a6,	// (0x00070f78) smil_status_volume_pane_g1_ParamLimits

0xc2b9,	// (0x00070f8b) smil_status_volume_pane_g2_ParamLimits

0xec86,	// (0x00073958) smil_status_volume_pane_g3_ParamLimits

0xf685,	// (0x00074357) smil_status_volume_pane_g_ParamLimits

0xc40b,	// (0x000710dd) bg_popup_window_pane_cp07_ParamLimits

0xc419,	// (0x000710eb) blid_firmament_pane

0x6fea,	// (0x0006bcbc) aid_size_cell_gallery_ParamLimits

0x6fea,	// (0x0006bcbc) aid_size_cell_gallery

0x7000,	// (0x0006bcd2) grid_gallery_pane_ParamLimits

0x7000,	// (0x0006bcd2) grid_gallery_pane

0x7014,	// (0x0006bce6) cell_gallery_pane_ParamLimits

0x7014,	// (0x0006bce6) cell_gallery_pane

0xc534,	// (0x00071206) bg_cell_gallery_focus_pane_ParamLimits

0xc534,	// (0x00071206) bg_cell_gallery_focus_pane

0xc546,	// (0x00071218) cell_gallery_pane_g1_ParamLimits

0xc546,	// (0x00071218) cell_gallery_pane_g1

0x705b,	// (0x0006bd2d) cell_gallery_pane_g2_ParamLimits

0x705b,	// (0x0006bd2d) cell_gallery_pane_g2

0x7068,	// (0x0006bd3a) cell_gallery_pane_g3_ParamLimits

0x7068,	// (0x0006bd3a) cell_gallery_pane_g3

0xc552,	// (0x00071224) cell_gallery_pane_g4_ParamLimits

0xc552,	// (0x00071224) cell_gallery_pane_g4

0x0003,

0xf733,	// (0x00074405) cell_gallery_pane_g_ParamLimits

0xf733,	// (0x00074405) cell_gallery_pane_g

0xc55e,	// (0x00071230) bg_cell_gallery_focus_pane_g1

0xc566,	// (0x00071238) bg_cell_gallery_focus_pane_g2

0xc56e,	// (0x00071240) bg_cell_gallery_focus_pane_g3

0xc576,	// (0x00071248) bg_cell_gallery_focus_pane_g4

0xc57e,	// (0x00071250) bg_cell_gallery_focus_pane_g5

0xc586,	// (0x00071258) bg_cell_gallery_focus_pane_g6

0xc58e,	// (0x00071260) bg_cell_gallery_focus_pane_g7

0xc596,	// (0x00071268) bg_cell_gallery_focus_pane_g8

0x0007,

0xf73c,	// (0x0007440e) bg_cell_gallery_focus_pane_g

0xc59e,	// (0x00071270) aid_firma_cardinal

0xc5b2,	// (0x00071284) blid_firmament_pane_t1

0xc5c9,	// (0x0007129b) blid_firmament_pane_t2

0xc5e0,	// (0x000712b2) blid_firmament_pane_t3

0xc5f7,	// (0x000712c9) blid_firmament_pane_t4

0x0003,

0xf74d,	// (0x0007441f) blid_firmament_pane_t

0xc60e,	// (0x000712e0) blid_sat_info_pane

0xc61e,	// (0x000712f0) blid_sat_info_pane_g1

0xc61e,	// (0x000712f0) blid_sat_info_pane_g2

0x0001,

0xf756,	// (0x00074428) blid_sat_info_pane_g

0xc628,	// (0x000712fa) blid_sat_info_pane_t1

0xc636,	// (0x00071308) smil2_volume_content_pane

0xc63f,	// (0x00071311) smil2_volume_pane_g1

0xc647,	// (0x00071319) smil2_volume_content_pane_g1

0xc650,	// (0x00071322) smil2_volume_content_pane_g2

0xc659,	// (0x0007132b) smil2_volume_content_pane_g3

0xc662,	// (0x00071334) smil2_volume_content_pane_g4

0xc66b,	// (0x0007133d) smil2_volume_content_pane_g5

0xc674,	// (0x00071346) smil2_volume_content_pane_g6

0xc67d,	// (0x0007134f) smil2_volume_content_pane_g7

0xc686,	// (0x00071358) smil2_volume_content_pane_g8

0xc68f,	// (0x00071361) smil2_volume_content_pane_g9

0xc698,	// (0x0007136a) smil2_volume_content_pane_g10

0x0009,

0xf75b,	// (0x0007442d) smil2_volume_content_pane_g

0x3734,	// (0x00068406) cale_week_day_heading_pane_t1_ParamLimits

0x375e,	// (0x00068430) cale_week_day_heading_pane_t2_ParamLimits

0x3788,	// (0x0006845a) cale_week_day_heading_pane_t3_ParamLimits

0x37b2,	// (0x00068484) cale_week_day_heading_pane_t4_ParamLimits

0x37dc,	// (0x000684ae) cale_week_day_heading_pane_t5_ParamLimits

0x3806,	// (0x000684d8) cale_week_day_heading_pane_t6_ParamLimits

0x3830,	// (0x00068502) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x00073f06) cale_week_day_heading_pane_t_ParamLimits

0xaf34,	// (0x0006fc06) bg_cale_side_pane_ParamLimits

0x385a,	// (0x0006852c) cale_week_time_pane_t1_ParamLimits

0x3886,	// (0x00068558) cale_week_time_pane_t2_ParamLimits

0x38b2,	// (0x00068584) cale_week_time_pane_t3_ParamLimits

0x38de,	// (0x000685b0) cale_week_time_pane_t4_ParamLimits

0x390a,	// (0x000685dc) cale_week_time_pane_t5_ParamLimits

0x3936,	// (0x00068608) cale_week_time_pane_t6_ParamLimits

0x3962,	// (0x00068634) cale_week_time_pane_t7_ParamLimits

0x398e,	// (0x00068660) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x00073f15) cale_week_time_pane_t_ParamLimits

0x39ba,	// (0x0006868c) cell_cale_week_pane_g2_ParamLimits

0xaf34,	// (0x0006fc06) bg_cale_side_pane_cp01_ParamLimits

0x4845,	// (0x00069517) cale_month_week_pane_t1_ParamLimits

0x485c,	// (0x0006952e) cale_month_week_pane_t2_ParamLimits

0x4873,	// (0x00069545) cale_month_week_pane_t3_ParamLimits

0x488a,	// (0x0006955c) cale_month_week_pane_t4_ParamLimits

0x48a1,	// (0x00069573) cale_month_week_pane_t5_ParamLimits

0x48b8,	// (0x0006958a) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x00073fee) cale_month_week_pane_t_ParamLimits

0xeb95,	// (0x00073867) cell_cale_month_pane_g1_ParamLimits

0xa57a,	// (0x0006f24c) main_cale_event_viewer_pane

0xa57a,	// (0x0006f24c) listscroll_cale_event_viewer_pane

0xc6a1,	// (0x00071373) list_cale_ev_pane

0xc6a9,	// (0x0007137b) scroll_pane_cp023

0x7075,	// (0x0006bd47) field_cale_ev_pane_ParamLimits

0x7075,	// (0x0006bd47) field_cale_ev_pane

0xc6b5,	// (0x00071387) field_cale_ev_content_pane_ParamLimits

0xc6b5,	// (0x00071387) field_cale_ev_content_pane

0xc6c1,	// (0x00071393) field_cale_ev_pane_g1_ParamLimits

0xc6c1,	// (0x00071393) field_cale_ev_pane_g1

0xc6cd,	// (0x0007139f) field_cale_ev_pane_g2_ParamLimits

0xc6cd,	// (0x0007139f) field_cale_ev_pane_g2

0xc6e5,	// (0x000713b7) field_cale_ev_pane_g3_ParamLimits

0xc6e5,	// (0x000713b7) field_cale_ev_pane_g3

0x0002,

0xf770,	// (0x00074442) field_cale_ev_pane_g_ParamLimits

0xf770,	// (0x00074442) field_cale_ev_pane_g

0xc6fd,	// (0x000713cf) field_cale_ev_pane_t1_ParamLimits

0xc6fd,	// (0x000713cf) field_cale_ev_pane_t1

0x708f,	// (0x0006bd61) field_cale_ev_content_pane_t1_ParamLimits

0x708f,	// (0x0006bd61) field_cale_ev_content_pane_t1

0x5980,	// (0x0006a652) bg_button_pane_cp01

0xaefa,	// (0x0006fbcc) listscroll_cale_week_pane_ParamLimits

0x355e,	// (0x00068230) popup_toolbar_window_cp01

0xaf22,	// (0x0006fbf4) listscroll_cale_week_pane_t1_ParamLimits

0xad32,	// (0x0006fa04) listscroll_cale_day_pane_ParamLimits

0x355e,	// (0x00068230) popup_toolbar_window_cp02

0xaf22,	// (0x0006fbf4) listscroll_cale_day_pane_t1_ParamLimits

0xaefa,	// (0x0006fbcc) main_cale_month_pane_ParamLimits

0x66ad,	// (0x0006b37f) popup_toolbar_window_cp03_ParamLimits

0x66ad,	// (0x0006b37f) popup_toolbar_window_cp03

0x5cbe,	// (0x0006a990) main_image_pane_g2_ParamLimits

0x5cbe,	// (0x0006a990) main_image_pane_g2

0x5ccf,	// (0x0006a9a1) main_image_pane_g3_ParamLimits

0x5ccf,	// (0x0006a9a1) main_image_pane_g3

0x0002,

0xf54e,	// (0x00074220) main_image_pane_g_ParamLimits

0xf54e,	// (0x00074220) main_image_pane_g

0x5ce0,	// (0x0006a9b2) main_image_pane_t1_ParamLimits

0x5cf7,	// (0x0006a9c9) main_image_pane_t2_ParamLimits

0x5cf7,	// (0x0006a9c9) main_image_pane_t2

0x5d09,	// (0x0006a9db) main_image_pane_t3_ParamLimits

0x5d09,	// (0x0006a9db) main_image_pane_t3

0x5d31,	// (0x0006aa03) main_image_pane_t4_ParamLimits

0x5d31,	// (0x0006aa03) main_image_pane_t4

0x0003,

0xf555,	// (0x00074227) main_image_pane_t_ParamLimits

0xf555,	// (0x00074227) main_image_pane_t

0x5d51,	// (0x0006aa23) popup_image_details_window_cp01

0x5d59,	// (0x0006aa2b) popup_toobar_trans_pane_cp01_ParamLimits

0x5d59,	// (0x0006aa2b) popup_toobar_trans_pane_cp01

0x657a,	// (0x0006b24c) popup_image_details_window_ParamLimits

0x657a,	// (0x0006b24c) popup_image_details_window

0xc201,	// (0x00070ed3) popup_image_focus_window

0x695f,	// (0x0006b631) camera2_autofocus_pane_ParamLimits

0x695f,	// (0x0006b631) camera2_autofocus_pane

0xa57a,	// (0x0006f24c) bg_popup_sub_pane_cp06

0xc714,	// (0x000713e6) popup_image_focus_window_g1

0xc71c,	// (0x000713ee) popup_image_focus_window_g2

0xc724,	// (0x000713f6) popup_image_focus_window_g3

0xc72c,	// (0x000713fe) popup_image_focus_window_g4

0x0003,

0xf777,	// (0x00074449) popup_image_focus_window_g

0xc734,	// (0x00071406) popup_image_focus_window_t1

0xc742,	// (0x00071414) popup_image_focus_window_t2

0xc751,	// (0x00071423) popup_image_focus_window_t3

0x0002,

0xf780,	// (0x00074452) popup_image_focus_window_t

0xc75f,	// (0x00071431) camera2_autofocus_pane_g1

0xea7f,	// (0x00073751) bg_tb_trans_pane_cp01

0xc76d,	// (0x0007143f) popup_image_details_window_g1

0xc780,	// (0x00071452) popup_image_details_window_g2

0x0002,

0xf792,	// (0x00074464) popup_image_details_window_g

0xc7a9,	// (0x0007147b) popup_image_details_window_t1

0xc7bb,	// (0x0007148d) popup_image_details_window_t2

0xc7d4,	// (0x000714a6) popup_image_details_window_t3

0xc7e8,	// (0x000714ba) popup_image_details_window_t4

0xc803,	// (0x000714d5) popup_image_details_window_t5

0x0004,

0xf799,	// (0x0007446b) popup_image_details_window_t

0xad00,	// (0x0006f9d2) bg_calc_paper_pane_ParamLimits

0xa57a,	// (0x0006f24c) grid_highlight_pane_cp013

0xad18,	// (0x0006f9ea) list_calc_pane_ParamLimits

0xad2a,	// (0x0006f9fc) scroll_pane_cp024

0xad32,	// (0x0006fa04) bg_calc_display_pane_ParamLimits

0xad3e,	// (0x0006fa10) calc_display_pane_t1_ParamLimits

0xad53,	// (0x0006fa25) calc_display_pane_t2_ParamLimits

0xad68,	// (0x0006fa3a) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x00073e88) calc_display_pane_t_ParamLimits

0x349d,	// (0x0006816f) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x00073ea5) cell_calc_pane_g

0x34a6,	// (0x00068178) cell_calc_pane_t1

0xaddf,	// (0x0006fab1) grid_highlight_pane_cp02_ParamLimits

0xadf5,	// (0x0006fac7) toolbar_button_pane_cp01_ParamLimits

0xadf5,	// (0x0006fac7) toolbar_button_pane_cp01

0x5d9b,	// (0x0006aa6d) temp_image_control_pane_ParamLimits

0x5d9b,	// (0x0006aa6d) temp_image_control_pane

0xea7f,	// (0x00073751) main_mp3_pane

0xc81d,	// (0x000714ef) temp_image_control_pane_g1_ParamLimits

0xc81d,	// (0x000714ef) temp_image_control_pane_g1

0xc82b,	// (0x000714fd) temp_image_control_pane_g2_ParamLimits

0xc82b,	// (0x000714fd) temp_image_control_pane_g2

0xc83d,	// (0x0007150f) temp_image_control_pane_g3_ParamLimits

0xc83d,	// (0x0007150f) temp_image_control_pane_g3

0x70dc,	// (0x0006bdae) temp_image_control_pane_g4_ParamLimits

0x70dc,	// (0x0006bdae) temp_image_control_pane_g4

0x0003,

0xf7a4,	// (0x00074476) temp_image_control_pane_g_ParamLimits

0xf7a4,	// (0x00074476) temp_image_control_pane_g

0xc81d,	// (0x000714ef) main_mp3_pane_g1

0x70ed,	// (0x0006bdbf) main_mp3_pane_g2

0x0007,

0xf7ad,	// (0x0007447f) main_mp3_pane_g

0xc880,	// (0x00071552) main_mp3_pane_t1

0xaffa,	// (0x0006fccc) main_camera_pane_g8_ParamLimits

0xaffa,	// (0x0006fccc) main_camera_pane_g8

0x3c4f,	// (0x00068921) main_video_pane_g7_ParamLimits

0x3c4f,	// (0x00068921) main_video_pane_g7

0xecc1,	// (0x00073993) main_camera2_pane_t7_ParamLimits

0xecc1,	// (0x00073993) main_camera2_pane_t7

0xeb55,	// (0x00073827) scroll_pane_cp025_ParamLimits

0xeb55,	// (0x00073827) scroll_pane_cp025

0xeb69,	// (0x0007383b) scroll_pane_cp026_ParamLimits

0xeb69,	// (0x0007383b) scroll_pane_cp026

0xeb78,	// (0x0007384a) wml_content_pane_ParamLimits

0xa57a,	// (0x0006f24c) main_touch_calib_pane

0x71a3,	// (0x0006be75) main_touch_calib_pane_g1

0x71af,	// (0x0006be81) main_touch_calib_pane_g2

0x71bb,	// (0x0006be8d) main_touch_calib_pane_g3

0x71c7,	// (0x0006be99) main_touch_calib_pane_g4

0x0003,

0xf7cb,	// (0x0007449d) main_touch_calib_pane_g

0x71d3,	// (0x0006bea5) main_touch_calib_pane_t1

0x71eb,	// (0x0006bebd) main_touch_calib_pane_t2

0x0004,

0xf7d4,	// (0x000744a6) main_touch_calib_pane_t

0x52c8,	// (0x00069f9a) mup_progress_pane_cp02

0x52e7,	// (0x00069fb9) navi_pane_g1

0x538c,	// (0x0006a05e) navi_pane_mp_t3

0xea7f,	// (0x00073751) main_mp3_pane_ParamLimits

0x66e7,	// (0x0006b3b9) navi_pane_ParamLimits

0xc81d,	// (0x000714ef) main_mp3_pane_g1_ParamLimits

0x70ed,	// (0x0006bdbf) main_mp3_pane_g2_ParamLimits

0x70f9,	// (0x0006bdcb) main_mp3_pane_g3_ParamLimits

0x70f9,	// (0x0006bdcb) main_mp3_pane_g3

0x7105,	// (0x0006bdd7) main_mp3_pane_g4_ParamLimits

0x7105,	// (0x0006bdd7) main_mp3_pane_g4

0xc84d,	// (0x0007151f) main_mp3_pane_g5_ParamLimits

0xc84d,	// (0x0007151f) main_mp3_pane_g5

0xc85b,	// (0x0007152d) main_mp3_pane_g6_ParamLimits

0xc85b,	// (0x0007152d) main_mp3_pane_g6

0xc868,	// (0x0007153a) main_mp3_pane_g7_ParamLimits

0xc868,	// (0x0007153a) main_mp3_pane_g7

0xc874,	// (0x00071546) main_mp3_pane_g8_ParamLimits

0xc874,	// (0x00071546) main_mp3_pane_g8

0xf7ad,	// (0x0007447f) main_mp3_pane_g_ParamLimits

0x7111,	// (0x0006bde3) main_mp3_pane_t2

0x711f,	// (0x0006bdf1) main_mp3_pane_t3

0xc88e,	// (0x00071560) main_mp3_pane_t4

0xc89c,	// (0x0007156e) main_mp3_pane_t5

0x0005,

0xf7be,	// (0x00074490) main_mp3_pane_t

0xc8aa,	// (0x0007157c) mup_progress_pane_cp01

0xa5a4,	// (0x0006f276) aid_zoom_text_secondary2

0xc6a1,	// (0x00071373) list_cale_ev2_pane

0xc6a9,	// (0x0007137b) scroll_pane_cp023_ParamLimits

0x7239,	// (0x0006bf0b) field_cale_ev2_pane_ParamLimits

0x7239,	// (0x0006bf0b) field_cale_ev2_pane

0xed40,	// (0x00073a12) field_cale_ev2_pane_g1_ParamLimits

0xed40,	// (0x00073a12) field_cale_ev2_pane_g1

0xed4c,	// (0x00073a1e) field_cale_ev2_pane_g2_ParamLimits

0xed4c,	// (0x00073a1e) field_cale_ev2_pane_g2

0xed64,	// (0x00073a36) field_cale_ev2_pane_g3_ParamLimits

0xed64,	// (0x00073a36) field_cale_ev2_pane_g3

0x0003,

0xf7df,	// (0x000744b1) field_cale_ev2_pane_g_ParamLimits

0xf7df,	// (0x000744b1) field_cale_ev2_pane_g

0xc8b2,	// (0x00071584) field_cale_ev2_pane_t1_ParamLimits

0xc8b2,	// (0x00071584) field_cale_ev2_pane_t1

0xc8c9,	// (0x0007159b) field_cale_ev2_pane_t2_ParamLimits

0xc8c9,	// (0x0007159b) field_cale_ev2_pane_t2

0x0001,

0xf7e8,	// (0x000744ba) field_cale_ev2_pane_t_ParamLimits

0xf7e8,	// (0x000744ba) field_cale_ev2_pane_t

0x5a93,	// (0x0006a765) main_postcard_pane_g5_ParamLimits

0x5a93,	// (0x0006a765) main_postcard_pane_g5

0x5aa7,	// (0x0006a779) main_postcard_pane_g6_ParamLimits

0x5aa7,	// (0x0006a779) main_postcard_pane_g6

0x3a31,	// (0x00068703) camera2_autofocus_pane_cp_ParamLimits

0x3a31,	// (0x00068703) camera2_autofocus_pane_cp

0xea7f,	// (0x00073751) main_mup3_pane

0x7271,	// (0x0006bf43) main_mup3_pane_g1_ParamLimits

0x7271,	// (0x0006bf43) main_mup3_pane_g1

0x7293,	// (0x0006bf65) main_mup3_pane_g2_ParamLimits

0x7293,	// (0x0006bf65) main_mup3_pane_g2

0x72fb,	// (0x0006bfcd) main_mup3_pane_g3_ParamLimits

0x72fb,	// (0x0006bfcd) main_mup3_pane_g3

0x7339,	// (0x0006c00b) main_mup3_pane_g4_ParamLimits

0x7339,	// (0x0006c00b) main_mup3_pane_g4

0x7377,	// (0x0006c049) main_mup3_pane_g5_ParamLimits

0x7377,	// (0x0006c049) main_mup3_pane_g5

0x73b5,	// (0x0006c087) main_mup3_pane_g6_ParamLimits

0x73b5,	// (0x0006c087) main_mup3_pane_g6

0xc8de,	// (0x000715b0) main_mup3_pane_g7_ParamLimits

0xc8de,	// (0x000715b0) main_mup3_pane_g7

0x0007,

0xf7f8,	// (0x000744ca) main_mup3_pane_g_ParamLimits

0xf7f8,	// (0x000744ca) main_mup3_pane_g

0x742b,	// (0x0006c0fd) main_mup3_pane_t1_ParamLimits

0x742b,	// (0x0006c0fd) main_mup3_pane_t1

0x7493,	// (0x0006c165) main_mup3_pane_t2_ParamLimits

0x7493,	// (0x0006c165) main_mup3_pane_t2

0x755b,	// (0x0006c22d) main_mup3_pane_t4_ParamLimits

0x755b,	// (0x0006c22d) main_mup3_pane_t4

0x75a9,	// (0x0006c27b) main_mup3_pane_t5_ParamLimits

0x75a9,	// (0x0006c27b) main_mup3_pane_t5

0x7657,	// (0x0006c329) main_mup3_pane_t6_ParamLimits

0x7657,	// (0x0006c329) main_mup3_pane_t6

0x0005,

0xf809,	// (0x000744db) main_mup3_pane_t_ParamLimits

0xf809,	// (0x000744db) main_mup3_pane_t

0x770b,	// (0x0006c3dd) mup3_progress_pane_ParamLimits

0x770b,	// (0x0006c3dd) mup3_progress_pane

0x7767,	// (0x0006c439) popup_mup3_control_window_ParamLimits

0x7767,	// (0x0006c439) popup_mup3_control_window

0xc8ec,	// (0x000715be) popup_mup3_text_window

0x7795,	// (0x0006c467) mup3_progress_pane_t1

0x77ab,	// (0x0006c47d) mup3_progress_pane_t2

0xc8f4,	// (0x000715c6) mup3_progress_pane_t3

0x0002,

0xf816,	// (0x000744e8) mup3_progress_pane_t

0xc90b,	// (0x000715dd) mup_progress_pane_cp03

0xa57a,	// (0x0006f24c) bg_tb_trans_pane_cp04

0x77c1,	// (0x0006c493) mup3_volume_pane

0x77c9,	// (0x0006c49b) popup_mup3_control_window_g1

0x77d2,	// (0x0006c4a4) mup3_volume_pane_g1

0x77db,	// (0x0006c4ad) mup3_volume_pane_g2

0x77e4,	// (0x0006c4b6) mup3_volume_pane_g3

0x0002,

0xf81d,	// (0x000744ef) mup3_volume_pane_g

0xa57a,	// (0x0006f24c) bg_tb_trans_pane_cp03

0xc91b,	// (0x000715ed) popup_mup3_text_window_g1

0xc923,	// (0x000715f5) popup_mup3_text_window_t1

0xadb6,	// (0x0006fa88) list_calc_item_pane_g1_ParamLimits

0xc379,	// (0x0007104b) mup_volume_pane_cp_g1

0x7203,	// (0x0006bed5) main_touch_calib_pane_t3

0x7215,	// (0x0006bee7) main_touch_calib_pane_t4

0x7227,	// (0x0006bef9) main_touch_calib_pane_t5

0xa584,	// (0x0006f256) aid_cell_size_toolbar2

0xa58c,	// (0x0006f25e) aid_popup3_width_pane

0xa594,	// (0x0006f266) aid_zoom_text_msg_primary

0xafda,	// (0x0006fcac) vorec_t7

0xad7a,	// (0x0006fa4c) bg_calc_paper_pane_g1_ParamLimits

0xad86,	// (0x0006fa58) bg_calc_paper_pane_g2_ParamLimits

0xad92,	// (0x0006fa64) bg_calc_paper_pane_g3_ParamLimits

0xad9e,	// (0x0006fa70) bg_calc_paper_pane_g4_ParamLimits

0xadaa,	// (0x0006fa7c) bg_calc_paper_pane_g5_ParamLimits

0x3437,	// (0x00068109) bg_calc_paper_pane_g6_ParamLimits

0x3446,	// (0x00068118) bg_calc_paper_pane_g7_ParamLimits

0x3455,	// (0x00068127) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x00073e8f) bg_calc_paper_pane_g_ParamLimits

0x3464,	// (0x00068136) calc_bg_paper_pane_g9_ParamLimits

0x3b65,	// (0x00068837) image_qvga_pane_ParamLimits

0x3b65,	// (0x00068837) image_qvga_pane

0xac41,	// (0x0006f913) bg_popup_sub_pane_cp04_ParamLimits

0x5c1c,	// (0x0006a8ee) popup_mup_playback_window_g1_ParamLimits

0x5c28,	// (0x0006a8fa) popup_mup_playback_window_t1_ParamLimits

0x5c3d,	// (0x0006a90f) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x0007421b) popup_mup_playback_window_t_ParamLimits

0x6d76,	// (0x0006ba48) main_mup2_pane_g3_ParamLimits

0x6d76,	// (0x0006ba48) main_mup2_pane_g3

0x3ddc,	// (0x00068aae) popup_toolbar_window_cp04

0xb3b9,	// (0x0007008b) popup_call2_audio_second_window_g3_ParamLimits

0xb3b9,	// (0x0007008b) popup_call2_audio_second_window_g3

0xb7c3,	// (0x00070495) popup_call2_audio_first_window_g4_ParamLimits

0xb7c3,	// (0x00070495) popup_call2_audio_first_window_g4

0xbe42,	// (0x00070b14) popup_call2_audio_in_window_g4_ParamLimits

0xbe42,	// (0x00070b14) popup_call2_audio_in_window_g4

0x5c52,	// (0x0006a924) aid_area_sk_bg_cut_ParamLimits

0x5c52,	// (0x0006a924) aid_area_sk_bg_cut

0x5c70,	// (0x0006a942) aid_area_sk_bg_cut_2_ParamLimits

0x5c70,	// (0x0006a942) aid_area_sk_bg_cut_2

0x704b,	// (0x0006bd1d) aid_placing_details_win

0x7053,	// (0x0006bd25) aid_placing_details_win_2

0xc75f,	// (0x00071431) camera2_autofocus_pane_g1_ParamLimits

0x30b5,	// (0x00067d87) popup_fixed_preview_cale_window_ParamLimits

0x30b5,	// (0x00067d87) popup_fixed_preview_cale_window

0x544a,	// (0x0006a11c) navi_slider_pane_g3

0x5453,	// (0x0006a125) navi_slider_pane_g4

0x545c,	// (0x0006a12e) navi_slider_pane_g5

0x544a,	// (0x0006a11c) navi_slider_pane_g6

0xec3b,	// (0x0007390d) navi_slider_pane_g7

0x5915,	// (0x0006a5e7) mup_scale_pane_g3

0x591e,	// (0x0006a5f0) mup_scale_pane_g4

0x5927,	// (0x0006a5f9) mup_scale_pane_g5

0x5930,	// (0x0006a602) mup_scale_pane_g6

0x5939,	// (0x0006a60b) mup_scale_pane_g7

0x544a,	// (0x0006a11c) cams2_slider_pane_g3

0xc3fb,	// (0x000710cd) cams2_slider_pane_g4

0xed2f,	// (0x00073a01) cams2_slider_pane_g5

0x544a,	// (0x0006a11c) cams2_slider_pane_g6

0xed37,	// (0x00073a09) cams2_slider_pane_g7

0xc61e,	// (0x000712f0) camera2_autofocus_pane_cp_g1

0xc931,	// (0x00071603) bg_popup_preview_window_pane_cp02_ParamLimits

0xc931,	// (0x00071603) bg_popup_preview_window_pane_cp02

0x77ed,	// (0x0006c4bf) list_fp_cale_pane_ParamLimits

0x77ed,	// (0x0006c4bf) list_fp_cale_pane

0xc93d,	// (0x0007160f) popup_fixed_preview_cale_window_t1_ParamLimits

0xc93d,	// (0x0007160f) popup_fixed_preview_cale_window_t1

0x77f9,	// (0x0006c4cb) popup_fixed_preview_cale_window_t2_ParamLimits

0x77f9,	// (0x0006c4cb) popup_fixed_preview_cale_window_t2

0x780e,	// (0x0006c4e0) popup_fixed_preview_cale_window_t3_ParamLimits

0x780e,	// (0x0006c4e0) popup_fixed_preview_cale_window_t3

0x0002,

0xf824,	// (0x000744f6) popup_fixed_preview_cale_window_t_ParamLimits

0xf824,	// (0x000744f6) popup_fixed_preview_cale_window_t

0x7823,	// (0x0006c4f5) list_single_fp_cale_pane_ParamLimits

0x7823,	// (0x0006c4f5) list_single_fp_cale_pane

0x7837,	// (0x0006c509) list_single_fp_cale_pane_g1_ParamLimits

0x7837,	// (0x0006c509) list_single_fp_cale_pane_g1

0xc95b,	// (0x0007162d) list_single_fp_cale_pane_g2_ParamLimits

0xc95b,	// (0x0007162d) list_single_fp_cale_pane_g2

0x0002,

0xf82b,	// (0x000744fd) list_single_fp_cale_pane_g_ParamLimits

0xf82b,	// (0x000744fd) list_single_fp_cale_pane_g

0x7843,	// (0x0006c515) list_single_fp_cale_pane_t1_ParamLimits

0x7843,	// (0x0006c515) list_single_fp_cale_pane_t1

0x7855,	// (0x0006c527) list_single_fp_cale_pane_t2_ParamLimits

0x7855,	// (0x0006c527) list_single_fp_cale_pane_t2

0x0001,

0xf832,	// (0x00074504) list_single_fp_cale_pane_t_ParamLimits

0xf832,	// (0x00074504) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa57a,	// (0x0006f24c) main_dialer_pane

0x7888,	// (0x0006c55a) aid_cell_size_keypad

0x7892,	// (0x0006c564) dialer_ne_pane

0x789a,	// (0x0006c56c) grid_dialer_command_1_pane

0x78a2,	// (0x0006c574) grid_dialer_command_2_pane

0x78aa,	// (0x0006c57c) grid_dialer_keypad_pane

0x78ba,	// (0x0006c58c) bg_popup_call_pane_cp06_ParamLimits

0x78ba,	// (0x0006c58c) bg_popup_call_pane_cp06

0x78c6,	// (0x0006c598) dialer_ne_clear_pane_ParamLimits

0x78c6,	// (0x0006c598) dialer_ne_clear_pane

0xc974,	// (0x00071646) dialer_ne_pane_g1

0xc97c,	// (0x0007164e) dialer_ne_pane_t1_ParamLimits

0xc97c,	// (0x0007164e) dialer_ne_pane_t1

0x78d2,	// (0x0006c5a4) dialer_ne_pane_t2_ParamLimits

0x78d2,	// (0x0006c5a4) dialer_ne_pane_t2

0x78fc,	// (0x0006c5ce) dialer_ne_pane_t3_ParamLimits

0x78fc,	// (0x0006c5ce) dialer_ne_pane_t3

0x0002,

0xf837,	// (0x00074509) dialer_ne_pane_t_ParamLimits

0xf837,	// (0x00074509) dialer_ne_pane_t

0x792c,	// (0x0006c5fe) dialer_ne_pane_t3_copy1_ParamLimits

0x792c,	// (0x0006c5fe) dialer_ne_pane_t3_copy1

0x795b,	// (0x0006c62d) cell_dialer_keypad_pane_ParamLimits

0x795b,	// (0x0006c62d) cell_dialer_keypad_pane

0x7970,	// (0x0006c642) cell_dialer_command_1_pane_ParamLimits

0x7970,	// (0x0006c642) cell_dialer_command_1_pane

0x7986,	// (0x0006c658) cell_dialer_command_2_pane_ParamLimits

0x7986,	// (0x0006c658) cell_dialer_command_2_pane

0xc98e,	// (0x00071660) bg_button_pane_cp02_ParamLimits

0xc98e,	// (0x00071660) bg_button_pane_cp02

0x7995,	// (0x0006c667) cell_dialer_keypad_pane_g1_ParamLimits

0x7995,	// (0x0006c667) cell_dialer_keypad_pane_g1

0xc98e,	// (0x00071660) bg_button_pane_cp03_ParamLimits

0xc98e,	// (0x00071660) bg_button_pane_cp03

0x79aa,	// (0x0006c67c) cell_dialer_command_1_pane_g1_ParamLimits

0x79aa,	// (0x0006c67c) cell_dialer_command_1_pane_g1

0xc99a,	// (0x0007166c) bg_button_pane_cp04

0x79be,	// (0x0006c690) cell_dialer_command_2_pane_g1

0x5439,	// (0x0006a10b) bg_button_pane_cp06

0xc9a2,	// (0x00071674) dialer_ne_clear_pane_g1

0x52f3,	// (0x00069fc5) navi_pane_g2

0x5311,	// (0x00069fe3) navi_pane_g3

0x0002,

0xf44c,	// (0x0007411e) navi_pane_g

0x539a,	// (0x0006a06c) navi_pane_mv_g2

0x53c2,	// (0x0006a094) navi_pane_mv_g5

0x53cb,	// (0x0006a09d) navi_pane_mv_t1

0xad32,	// (0x0006fa04) main_clock2_pane

0x79f2,	// (0x0006c6c4) main_clock2_list_pane_ParamLimits

0x79f2,	// (0x0006c6c4) main_clock2_list_pane

0x7a24,	// (0x0006c6f6) main_clock2_pane_t1_ParamLimits

0x7a24,	// (0x0006c6f6) main_clock2_pane_t1

0x7a5b,	// (0x0006c72d) main_clock2_pane_t2_ParamLimits

0x7a5b,	// (0x0006c72d) main_clock2_pane_t2

0x0004,

0xf83e,	// (0x00074510) main_clock2_pane_t_ParamLimits

0xf83e,	// (0x00074510) main_clock2_pane_t

0x7add,	// (0x0006c7af) popup_clock_analogue_window_cp03_ParamLimits

0x7add,	// (0x0006c7af) popup_clock_analogue_window_cp03

0x7b00,	// (0x0006c7d2) popup_clock_digital_window_cp02_ParamLimits

0x7b00,	// (0x0006c7d2) popup_clock_digital_window_cp02

0x7b71,	// (0x0006c843) main_clock2_list_single_pane_ParamLimits

0x7b71,	// (0x0006c843) main_clock2_list_single_pane

0x5439,	// (0x0006a10b) list_highlight_pane_cp05

0xc9aa,	// (0x0007167c) main_clock2_list_single_pane_t1

0x3ddc,	// (0x00068aae) popup_toolbar_window_cp04_ParamLimits

0x70ac,	// (0x0006bd7e) camera2_autofocus_pane_g2_ParamLimits

0x70ac,	// (0x0006bd7e) camera2_autofocus_pane_g2

0x70b8,	// (0x0006bd8a) camera2_autofocus_pane_g3_ParamLimits

0x70b8,	// (0x0006bd8a) camera2_autofocus_pane_g3

0x70c4,	// (0x0006bd96) camera2_autofocus_pane_g4_ParamLimits

0x70c4,	// (0x0006bd96) camera2_autofocus_pane_g4

0x70d0,	// (0x0006bda2) camera2_autofocus_pane_g5_ParamLimits

0x70d0,	// (0x0006bda2) camera2_autofocus_pane_g5

0x0004,

0xf787,	// (0x00074459) camera2_autofocus_pane_g_ParamLimits

0xf787,	// (0x00074459) camera2_autofocus_pane_g

0x7251,	// (0x0006bf23) camera2_autofocus_pane_cp_g2

0x7259,	// (0x0006bf2b) camera2_autofocus_pane_cp_g3

0x7261,	// (0x0006bf33) camera2_autofocus_pane_cp_g4

0x7269,	// (0x0006bf3b) camera2_autofocus_pane_cp_g5

0x0004,

0xf7ed,	// (0x000744bf) camera2_autofocus_pane_cp_g

0x78b2,	// (0x0006c584) popup_dialer_spcha_window

0xa57a,	// (0x0006f24c) bg_popup_sub_pane_cp07

0xc9b8,	// (0x0007168a) list_spcha_pane

0xc9c0,	// (0x00071692) list_single_spcha_pane_ParamLimits

0xc9c0,	// (0x00071692) list_single_spcha_pane

0xa57a,	// (0x0006f24c) list_highlight_pane_cp06

0xc9d1,	// (0x000716a3) list_single_spcha_pane_t1

0xbbec,	// (0x000708be) popup_call2_audio_out_window_g4_ParamLimits

0xbbec,	// (0x000708be) popup_call2_audio_out_window_g4

0xa57a,	// (0x0006f24c) main_imed2_pane

0xc209,	// (0x00070edb) popup_imed_adjust2_window

0x6590,	// (0x0006b262) popup_imed_trans_window_ParamLimits

0x6590,	// (0x0006b262) popup_imed_trans_window

0xc462,	// (0x00071134) popup_blid_sat_info2_window_t1

0xc470,	// (0x00071142) popup_blid_sat_info2_window_t2

0x000a,

0xf71c,	// (0x000743ee) popup_blid_sat_info2_window_t

0x7c1b,	// (0x0006c8ed) aid_size_cell_colour_35

0x7c3b,	// (0x0006c90d) aid_size_cell_colour_112

0x7c5b,	// (0x0006c92d) aid_size_cell_effect

0xc1e3,	// (0x00070eb5) bg_tb_trans_pane_cp02

0x4b7b,	// (0x0006984d) heading_imed_pane

0x7c7b,	// (0x0006c94d) listscroll_imed_pane

0xc9df,	// (0x000716b1) heading_imed_pane_g1

0xc9e7,	// (0x000716b9) heading_imed_pane_t1

0xc9f5,	// (0x000716c7) grid_imed_colour_35_pane_ParamLimits

0xc9f5,	// (0x000716c7) grid_imed_colour_35_pane

0x7c87,	// (0x0006c959) grid_imed_effect_pane

0xca08,	// (0x000716da) list_imed_aspect_pane

0x7c9a,	// (0x0006c96c) scroll_pane_cp027_ParamLimits

0x7c9a,	// (0x0006c96c) scroll_pane_cp027

0x7ca6,	// (0x0006c978) cell_imed_effect_pane_ParamLimits

0x7ca6,	// (0x0006c978) cell_imed_effect_pane

0xca10,	// (0x000716e2) cell_imed_colour_pane_ParamLimits

0xca10,	// (0x000716e2) cell_imed_colour_pane

0xca4a,	// (0x0007171c) cell_imed_colour_pane_g1_ParamLimits

0xca4a,	// (0x0007171c) cell_imed_colour_pane_g1

0xca5b,	// (0x0007172d) hgihlgiht_grid_pane_cp016_ParamLimits

0xca5b,	// (0x0007172d) hgihlgiht_grid_pane_cp016

0x7ccb,	// (0x0006c99d) cell_imed_effect_pane_g1

0x7cd3,	// (0x0006c9a5) grid_highlight_pane_cp017

0xca6c,	// (0x0007173e) list_imed_single_pane_ParamLimits

0xca6c,	// (0x0007173e) list_imed_single_pane

0xa57a,	// (0x0006f24c) list_highlight_pane_cp07

0xca7f,	// (0x00071751) list_imed_aspect_pane_comp1_t1

0xc1e3,	// (0x00070eb5) bg_tb_trans_pane_cp05

0xca9f,	// (0x00071771) popup_imed_adjust2_window_g1

0xcac6,	// (0x00071798) popup_imed_adjust2_window_t1

0xcade,	// (0x000717b0) slider_imed_adjust_pane

0xcaf2,	// (0x000717c4) slider_imed_adjust_pane_g1

0xcb02,	// (0x000717d4) slider_imed_adjust_pane_g2

0xcb12,	// (0x000717e4) slider_imed_adjust_pane_g3

0xcb23,	// (0x000717f5) slider_imed_adjust_pane_g4

0x0003,

0xf85b,	// (0x0007452d) slider_imed_adjust_pane_g

0x7cdc,	// (0x0006c9ae) aid_size_cell_clipart2

0x7ce8,	// (0x0006c9ba) grid_imed_clipart_pane

0xcb34,	// (0x00071806) scroll_pane_cp031

0x7cf2,	// (0x0006c9c4) cell_imed_clipart_pane_ParamLimits

0x7cf2,	// (0x0006c9c4) cell_imed_clipart_pane

0x7d0a,	// (0x0006c9dc) cell_imed_clipart_pane_g1

0xa57a,	// (0x0006f24c) grid_highlight_pane_cp014

0x7a05,	// (0x0006c6d7) main_clock2_pane_g1_ParamLimits

0x7a05,	// (0x0006c6d7) main_clock2_pane_g1

0x7b1c,	// (0x0006c7ee) aid_call2_pane_cp10

0x7b2e,	// (0x0006c800) aid_call_pane_cp10

0x5225,	// (0x00069ef7) popup_clock_analogue_window_cp10_g1

0x5225,	// (0x00069ef7) popup_clock_analogue_window_cp10_g2

0x7b40,	// (0x0006c812) popup_clock_analogue_window_cp10_g3

0x7b40,	// (0x0006c812) popup_clock_analogue_window_cp10_g4

0x5225,	// (0x00069ef7) popup_clock_analogue_window_cp10_g5

0x0004,

0xf849,	// (0x0007451b) popup_clock_analogue_window_cp10_g

0x7b52,	// (0x0006c824) popup_clock_analogue_window_cp10_t1

0x7b83,	// (0x0006c855) clock_digital_number_pane_cp10_ParamLimits

0x7b83,	// (0x0006c855) clock_digital_number_pane_cp10

0x7b9b,	// (0x0006c86d) clock_digital_number_pane_cp11_ParamLimits

0x7b9b,	// (0x0006c86d) clock_digital_number_pane_cp11

0x7bb3,	// (0x0006c885) clock_digital_number_pane_cp12_ParamLimits

0x7bb3,	// (0x0006c885) clock_digital_number_pane_cp12

0x7bcb,	// (0x0006c89d) clock_digital_number_pane_cp13_ParamLimits

0x7bcb,	// (0x0006c89d) clock_digital_number_pane_cp13

0x7be3,	// (0x0006c8b5) clock_digital_separator_pane_cp10_ParamLimits

0x7be3,	// (0x0006c8b5) clock_digital_separator_pane_cp10

0x7bfb,	// (0x0006c8cd) popup_clock_digital_window_cp02_t1_ParamLimits

0x7bfb,	// (0x0006c8cd) popup_clock_digital_window_cp02_t1

0xac39,	// (0x0006f90b) clock_digital_number_pane_cp10_g1

0xac39,	// (0x0006f90b) clock_digital_number_pane_cp10_g2

0x0001,

0xf864,	// (0x00074536) clock_digital_number_pane_cp10_g

0xac39,	// (0x0006f90b) clock_digital_separator_pane_cp10_g1

0xac39,	// (0x0006f90b) clock_digital_separator_pane_g2_cp10

0x5409,	// (0x0006a0db) navi_pane_vded_g4

0x5412,	// (0x0006a0e4) navi_pane_vded_g5

0x541b,	// (0x0006a0ed) navi_pane_vded_t1

0xa57a,	// (0x0006f24c) main_vded_pane

0x7d13,	// (0x0006c9e5) main_vded_pane_g1

0x7d1d,	// (0x0006c9ef) main_vded_pane_g2

0x7d25,	// (0x0006c9f7) main_vded_pane_g3

0x0002,

0xf869,	// (0x0007453b) main_vded_pane_g

0x7d2d,	// (0x0006c9ff) main_vded_pane_t1

0x7d3b,	// (0x0006ca0d) main_vded_pane_t2

0x0001,

0xf870,	// (0x00074542) main_vded_pane_t

0x7d49,	// (0x0006ca1b) vded_slider_pane

0x7d51,	// (0x0006ca23) vded_video_pane

0xcb3c,	// (0x0007180e) vded_video_pane_g1

0x7d59,	// (0x0006ca2b) vded_video_pane_g2

0xc61e,	// (0x000712f0) vded_video_pane_g3

0x0002,

0xf875,	// (0x00074547) vded_video_pane_g

0xcb46,	// (0x00071818) vded_slider_pane_g1

0xc379,	// (0x0007104b) vded_slider_pane_g2

0xcb4f,	// (0x00071821) vded_slider_pane_g3

0xcb58,	// (0x0007182a) vded_slider_pane_g4

0xcb61,	// (0x00071833) vded_slider_pane_g5

0x0004,

0xf87c,	// (0x0007454e) vded_slider_pane_g

0x7751,	// (0x0006c423) mup3_rocker_pane_ParamLimits

0x7751,	// (0x0006c423) mup3_rocker_pane

0x7d62,	// (0x0006ca34) mup3_control_keys_pane_g1

0x7d6a,	// (0x0006ca3c) mup3_control_keys_pane_g2

0x7d72,	// (0x0006ca44) mup3_control_keys_pane_g3

0x7d7a,	// (0x0006ca4c) mup3_control_keys_pane_g4

0x0003,

0xf887,	// (0x00074559) mup3_control_keys_pane_g

0x30e8,	// (0x00067dba) popup_toolbar2_fixed_window_cp01_ParamLimits

0x30e8,	// (0x00067dba) popup_toolbar2_fixed_window_cp01

0x777f,	// (0x0006c451) popup_toolbar2_fixed_window_cp02_ParamLimits

0x777f,	// (0x0006c451) popup_toolbar2_fixed_window_cp02

0xb52b,	// (0x000701fd) popup_call2_audio_second_window_t4_ParamLimits

0xb52b,	// (0x000701fd) popup_call2_audio_second_window_t4

0xba59,	// (0x0007072b) popup_call2_audio_first_window_t6_ParamLimits

0xba59,	// (0x0007072b) popup_call2_audio_first_window_t6

0xbcef,	// (0x000709c1) popup_call2_audio_out_window_t6_ParamLimits

0xbcef,	// (0x000709c1) popup_call2_audio_out_window_t6

0xa57a,	// (0x0006f24c) main_vitu_pane

0x7d8a,	// (0x0006ca5c) aid_size_cell_itu_ParamLimits

0x7d8a,	// (0x0006ca5c) aid_size_cell_itu

0xea7f,	// (0x00073751) bg_popup_window_pane_cp08_ParamLimits

0xea7f,	// (0x00073751) bg_popup_window_pane_cp08

0x7da0,	// (0x0006ca72) field_vitu_entry_pane_ParamLimits

0x7da0,	// (0x0006ca72) field_vitu_entry_pane

0x7db3,	// (0x0006ca85) grid_vitu_function_pane_ParamLimits

0x7db3,	// (0x0006ca85) grid_vitu_function_pane

0x7dc8,	// (0x0006ca9a) grid_vitu_itu_pane_ParamLimits

0x7dc8,	// (0x0006ca9a) grid_vitu_itu_pane

0x7dde,	// (0x0006cab0) cell_vitu_itu_pane_ParamLimits

0x7dde,	// (0x0006cab0) cell_vitu_itu_pane

0x7e00,	// (0x0006cad2) cell_vitu_function_pane_ParamLimits

0x7e00,	// (0x0006cad2) cell_vitu_function_pane

0xea7f,	// (0x00073751) bg_popup_sub_pane_cp08_ParamLimits

0xea7f,	// (0x00073751) bg_popup_sub_pane_cp08

0x7e19,	// (0x0006caeb) field_vitu_entry_pane_t1_ParamLimits

0x7e19,	// (0x0006caeb) field_vitu_entry_pane_t1

0xcb82,	// (0x00071854) field_vitu_entry_pane_t2_ParamLimits

0xcb82,	// (0x00071854) field_vitu_entry_pane_t2

0x0001,

0xf895,	// (0x00074567) field_vitu_entry_pane_t_ParamLimits

0xf895,	// (0x00074567) field_vitu_entry_pane_t

0xcb9f,	// (0x00071871) bg_button_pane_cp05_ParamLimits

0xcb9f,	// (0x00071871) bg_button_pane_cp05

0x7e35,	// (0x0006cb07) cell_vitu_itu_pane_g1

0x7e4d,	// (0x0006cb1f) cell_vitu_itu_pane_t1_ParamLimits

0x7e4d,	// (0x0006cb1f) cell_vitu_itu_pane_t1

0x7e5f,	// (0x0006cb31) cell_vitu_itu_pane_t2_ParamLimits

0x7e5f,	// (0x0006cb31) cell_vitu_itu_pane_t2

0x0002,

0xf89a,	// (0x0007456c) cell_vitu_itu_pane_t_ParamLimits

0xf89a,	// (0x0007456c) cell_vitu_itu_pane_t

0xcbad,	// (0x0007187f) bg_button_pane_cp07

0x7e94,	// (0x0006cb66) cell_vitu_function_pane_g1

0xacc8,	// (0x0006f99a) main_calc_pane_g1

0x2f4c,	// (0x00067c1e) aid_visual_content_pane

0xa57a,	// (0x0006f24c) main_vradio_pane

0x7e9d,	// (0x0006cb6f) main_vradio_pane_g1_ParamLimits

0x7e9d,	// (0x0006cb6f) main_vradio_pane_g1

0xcbb7,	// (0x00071889) main_vradio_pane_g2_ParamLimits

0xcbb7,	// (0x00071889) main_vradio_pane_g2

0x0001,

0xf8a1,	// (0x00074573) main_vradio_pane_g_ParamLimits

0xf8a1,	// (0x00074573) main_vradio_pane_g

0x7eb3,	// (0x0006cb85) main_vradio_pane_t1_ParamLimits

0x7eb3,	// (0x0006cb85) main_vradio_pane_t1

0x7ec8,	// (0x0006cb9a) main_vradio_pane_t2_ParamLimits

0x7ec8,	// (0x0006cb9a) main_vradio_pane_t2

0xcbc4,	// (0x00071896) main_vradio_pane_t3_ParamLimits

0xcbc4,	// (0x00071896) main_vradio_pane_t3

0x0002,

0xf8a6,	// (0x00074578) main_vradio_pane_t_ParamLimits

0xf8a6,	// (0x00074578) main_vradio_pane_t

0x7edd,	// (0x0006cbaf) vradio_rocker_control_pane_ParamLimits

0x7edd,	// (0x0006cbaf) vradio_rocker_control_pane

0x7eef,	// (0x0006cbc1) vradio_station_info_pane_ParamLimits

0x7eef,	// (0x0006cbc1) vradio_station_info_pane

0xcbd6,	// (0x000718a8) vradio_frequency_info_pane_ParamLimits

0xcbd6,	// (0x000718a8) vradio_frequency_info_pane

0xc61e,	// (0x000712f0) vradio_station_info_pane_g1

0xcbe5,	// (0x000718b7) vradio_station_info_pane_t1_ParamLimits

0xcbe5,	// (0x000718b7) vradio_station_info_pane_t1

0xcc07,	// (0x000718d9) vradio_station_info_pane_t2_ParamLimits

0xcc07,	// (0x000718d9) vradio_station_info_pane_t2

0x0001,

0xf8ad,	// (0x0007457f) vradio_station_info_pane_t_ParamLimits

0xf8ad,	// (0x0007457f) vradio_station_info_pane_t

0xcc19,	// (0x000718eb) vradio_tuning_pane

0xcc21,	// (0x000718f3) vradio_rocker_control_pane_g1

0xcc29,	// (0x000718fb) vradio_rocker_control_pane_g2

0xcc31,	// (0x00071903) vradio_rocker_control_pane_g3

0xcc39,	// (0x0007190b) vradio_rocker_control_pane_g4

0xcc41,	// (0x00071913) vradio_rocker_control_pane_g5

0x0004,

0xf8b2,	// (0x00074584) vradio_rocker_control_pane_g

0x7eff,	// (0x0006cbd1) vradio_frequency_info_pane_g1

0xcc49,	// (0x0007191b) vradio_frequency_info_pane_t1_ParamLimits

0xcc49,	// (0x0007191b) vradio_frequency_info_pane_t1

0x7f09,	// (0x0006cbdb) vradio_tuning_pane_g1

0x7f12,	// (0x0006cbe4) vradio_tuning_pane_t1

0xa5ac,	// (0x0006f27e) area_side_right_pane_ParamLimits

0xa5ac,	// (0x0006f27e) area_side_right_pane

0xc1aa,	// (0x00070e7c) status_small_pane_g1

0xc1b2,	// (0x00070e84) status_small_pane_g2

0xc1bb,	// (0x00070e8d) status_small_pane_g3

0xc1c4,	// (0x00070e96) status_small_pane_g4

0x0003,

0xf672,	// (0x00074344) status_small_pane_g

0xc1cd,	// (0x00070e9f) status_small_pane_t1

0xa57a,	// (0x0006f24c) main_video3_pane

0xcc5d,	// (0x0007192f) cams_zoom_vslider_pane

0xcc65,	// (0x00071937) image3_wide_pane_ParamLimits

0xcc65,	// (0x00071937) image3_wide_pane

0xcc7f,	// (0x00071951) image3_wide_small_pane

0xcc89,	// (0x0007195b) main_video3_pane_g1_ParamLimits

0xcc89,	// (0x0007195b) main_video3_pane_g1

0xcca5,	// (0x00071977) main_video3_pane_g2_ParamLimits

0xcca5,	// (0x00071977) main_video3_pane_g2

0x0001,

0xf8bd,	// (0x0007458f) main_video3_pane_g_ParamLimits

0xf8bd,	// (0x0007458f) main_video3_pane_g

0xccc1,	// (0x00071993) main_video3_pane_t1_ParamLimits

0xccc1,	// (0x00071993) main_video3_pane_t1

0xccec,	// (0x000719be) main_video3_pane_t2_ParamLimits

0xccec,	// (0x000719be) main_video3_pane_t2

0xcd17,	// (0x000719e9) main_video3_pane_t3_ParamLimits

0xcd17,	// (0x000719e9) main_video3_pane_t3

0x0002,

0xf8c2,	// (0x00074594) main_video3_pane_t_ParamLimits

0xf8c2,	// (0x00074594) main_video3_pane_t

0xcd42,	// (0x00071a14) cams_zoom_vslider_pane_g1

0xcd4b,	// (0x00071a1d) cams_zoom_vslider_pane_g2

0x0001,

0xf8c9,	// (0x0007459b) cams_zoom_vslider_pane_g

0xcd53,	// (0x00071a25) small_slider_vertical_pane

0xc61e,	// (0x000712f0) small_slider_vertical_pane_g1

0xc61e,	// (0x000712f0) small_slider_vertical_pane_g2

0xcd5b,	// (0x00071a2d) small_slider_vertical_pane_g3

0x0002,

0xf8ce,	// (0x000745a0) small_slider_vertical_pane_g

0xa57a,	// (0x0006f24c) main_hwr_training_pane

0xcd64,	// (0x00071a36) hwr_training_instruct_pane_ParamLimits

0xcd64,	// (0x00071a36) hwr_training_instruct_pane

0x7f21,	// (0x0006cbf3) hwr_training_navi_pane_ParamLimits

0x7f21,	// (0x0006cbf3) hwr_training_navi_pane

0x7f38,	// (0x0006cc0a) hwr_training_write_pane_ParamLimits

0x7f38,	// (0x0006cc0a) hwr_training_write_pane

0xa57a,	// (0x0006f24c) bg_frame_shadow_pane

0xcd93,	// (0x00071a65) hwr_training_write_pane_g1

0xcd9b,	// (0x00071a6d) hwr_training_write_pane_g2

0xcda3,	// (0x00071a75) hwr_training_write_pane_g3

0xcdab,	// (0x00071a7d) hwr_training_write_pane_g4

0xcdb3,	// (0x00071a85) hwr_training_write_pane_g5

0xcdbb,	// (0x00071a8d) hwr_training_write_pane_g6

0xcdc3,	// (0x00071a95) hwr_training_write_pane_g7

0x0006,

0xf8d5,	// (0x000745a7) hwr_training_write_pane_g

0xed88,	// (0x00073a5a) hwr_training_navi_pane_g1_ParamLimits

0xed88,	// (0x00073a5a) hwr_training_navi_pane_g1

0xed9a,	// (0x00073a6c) hwr_training_navi_pane_g2_ParamLimits

0xed9a,	// (0x00073a6c) hwr_training_navi_pane_g2

0xedac,	// (0x00073a7e) hwr_training_navi_pane_g3_ParamLimits

0xedac,	// (0x00073a7e) hwr_training_navi_pane_g3

0xedbc,	// (0x00073a8e) hwr_training_navi_pane_g4_ParamLimits

0xedbc,	// (0x00073a8e) hwr_training_navi_pane_g4

0x0004,

0xf8e4,	// (0x000745b6) hwr_training_navi_pane_g_ParamLimits

0xf8e4,	// (0x000745b6) hwr_training_navi_pane_g

0xedc9,	// (0x00073a9b) hwr_training_navi_pane_t1

0x7f78,	// (0x0006cc4a) list_single_hwr_training_instruct_pane_ParamLimits

0x7f78,	// (0x0006cc4a) list_single_hwr_training_instruct_pane

0xcdcb,	// (0x00071a9d) list_single_hwr_training_instruct_pane_t1

0xc55e,	// (0x00071230) bg_frame_shadow_pane_g1

0xcdda,	// (0x00071aac) bg_frame_shadow_pane_g2

0xcde2,	// (0x00071ab4) bg_frame_shadow_pane_g3

0xcdea,	// (0x00071abc) bg_frame_shadow_pane_g4

0xcdf2,	// (0x00071ac4) bg_frame_shadow_pane_g5

0xcdfa,	// (0x00071acc) bg_frame_shadow_pane_g6

0xce02,	// (0x00071ad4) bg_frame_shadow_pane_g7

0xae55,	// (0x0006fb27) bg_frame_shadow_pane_g8

0x0007,

0xf8ef,	// (0x000745c1) bg_frame_shadow_pane_g

0xa57a,	// (0x0006f24c) main_video_tele_dialer_pane

0x7f90,	// (0x0006cc62) aid_size_cell_video_keypad_ParamLimits

0x7f90,	// (0x0006cc62) aid_size_cell_video_keypad

0x7faa,	// (0x0006cc7c) grid_video_dialer_keypad_pane_ParamLimits

0x7faa,	// (0x0006cc7c) grid_video_dialer_keypad_pane

0x7fec,	// (0x0006ccbe) video_down_pane_cp_ParamLimits

0x7fec,	// (0x0006ccbe) video_down_pane_cp

0x801c,	// (0x0006ccee) cell_video_dialer_keypad_pane_ParamLimits

0x801c,	// (0x0006ccee) cell_video_dialer_keypad_pane

0xce0a,	// (0x00071adc) bg_button_pane_cp08_ParamLimits

0xce0a,	// (0x00071adc) bg_button_pane_cp08

0x803e,	// (0x0006cd10) cell_video_dialer_keypad_pane_g1_ParamLimits

0x803e,	// (0x0006cd10) cell_video_dialer_keypad_pane_g1

0x773b,	// (0x0006c40d) mup3_rocker2_pane_ParamLimits

0x773b,	// (0x0006c40d) mup3_rocker2_pane

0xc61e,	// (0x000712f0) mup3_rocker2_pane_g1

0x6489,	// (0x0006b15b) main_dialer2_pane

0xa57a,	// (0x0006f24c) main_mp4_pane

0xeddf,	// (0x00073ab1) main_mp4_pane_g1_ParamLimits

0xeddf,	// (0x00073ab1) main_mp4_pane_g1

0xeddf,	// (0x00073ab1) main_mp4_pane_g2_ParamLimits

0xeddf,	// (0x00073ab1) main_mp4_pane_g2

0x8079,	// (0x0006cd4b) main_mp4_pane_g3_ParamLimits

0x8079,	// (0x0006cd4b) main_mp4_pane_g3

0xeded,	// (0x00073abf) main_mp4_pane_g4_ParamLimits

0xeded,	// (0x00073abf) main_mp4_pane_g4

0xee1b,	// (0x00073aed) main_mp4_pane_g5_ParamLimits

0xee1b,	// (0x00073aed) main_mp4_pane_g5

0x0005,

0xf90f,	// (0x000745e1) main_mp4_pane_g_ParamLimits

0xf90f,	// (0x000745e1) main_mp4_pane_g

0xee77,	// (0x00073b49) main_mp4_pane_t1_ParamLimits

0xee77,	// (0x00073b49) main_mp4_pane_t1

0xeecf,	// (0x00073ba1) main_mp4_pane_t2_ParamLimits

0xeecf,	// (0x00073ba1) main_mp4_pane_t2

0xce16,	// (0x00071ae8) main_mp4_pane_t3_ParamLimits

0xce16,	// (0x00071ae8) main_mp4_pane_t3

0xef21,	// (0x00073bf3) main_mp4_pane_t4_ParamLimits

0xef21,	// (0x00073bf3) main_mp4_pane_t4

0x0003,

0xf91c,	// (0x000745ee) main_mp4_pane_t_ParamLimits

0xf91c,	// (0x000745ee) main_mp4_pane_t

0xef61,	// (0x00073c33) mp4_progress_pane_ParamLimits

0xef61,	// (0x00073c33) mp4_progress_pane

0xefa5,	// (0x00073c77) mp4_rocker_pane_ParamLimits

0xefa5,	// (0x00073c77) mp4_rocker_pane

0xce44,	// (0x00071b16) mp4_progress_pane_t1

0xce5b,	// (0x00071b2d) mp4_progress_pane_t2

0x0001,

0xf925,	// (0x000745f7) mp4_progress_pane_t

0xce72,	// (0x00071b44) mup_progress_pane_cp04

0xc61e,	// (0x000712f0) mp4_rocker_pane_g1

0x80a9,	// (0x0006cd7b) aid_cell_size_keypad2_ParamLimits

0x80a9,	// (0x0006cd7b) aid_cell_size_keypad2

0x80c3,	// (0x0006cd95) dialer2_ne_pane_ParamLimits

0x80c3,	// (0x0006cd95) dialer2_ne_pane

0x80d8,	// (0x0006cdaa) grid_dialer2_keypad_pane_ParamLimits

0x80d8,	// (0x0006cdaa) grid_dialer2_keypad_pane

0xc40b,	// (0x000710dd) bg_popup_call_pane_cp07_ParamLimits

0xc40b,	// (0x000710dd) bg_popup_call_pane_cp07

0x80ee,	// (0x0006cdc0) dialer2_ne_pane_t1_ParamLimits

0x80ee,	// (0x0006cdc0) dialer2_ne_pane_t1

0x812b,	// (0x0006cdfd) cell_dialer2_keypad_pane_ParamLimits

0x812b,	// (0x0006cdfd) cell_dialer2_keypad_pane

0xce90,	// (0x00071b62) bg_button_pane_pane_cp04_ParamLimits

0xce90,	// (0x00071b62) bg_button_pane_pane_cp04

0x814d,	// (0x0006ce1f) cell_dialer2_keypad_pane_g1_ParamLimits

0x814d,	// (0x0006ce1f) cell_dialer2_keypad_pane_g1

0x3d21,	// (0x000689f3) aid_placing_vt_set_content_ParamLimits

0x3d21,	// (0x000689f3) aid_placing_vt_set_content

0x3d3f,	// (0x00068a11) aid_placing_vt_set_title_ParamLimits

0x3d3f,	// (0x00068a11) aid_placing_vt_set_title

0xa57a,	// (0x0006f24c) main_image3_pane

0x81dc,	// (0x0006ceae) area_side_right_pane_cp01_ParamLimits

0x81dc,	// (0x0006ceae) area_side_right_pane_cp01

0xeddf,	// (0x00073ab1) main_image3_pane_g1_ParamLimits

0xeddf,	// (0x00073ab1) main_image3_pane_g1

0x81f3,	// (0x0006cec5) main_image3_pane_g2_ParamLimits

0x81f3,	// (0x0006cec5) main_image3_pane_g2

0x8219,	// (0x0006ceeb) main_image3_pane_g3_ParamLimits

0x8219,	// (0x0006ceeb) main_image3_pane_g3

0x823f,	// (0x0006cf11) main_image3_pane_g4_ParamLimits

0x823f,	// (0x0006cf11) main_image3_pane_g4

0x0003,

0xf934,	// (0x00074606) main_image3_pane_g_ParamLimits

0xf934,	// (0x00074606) main_image3_pane_g

0x8265,	// (0x0006cf37) main_image3_pane_t1_ParamLimits

0x8265,	// (0x0006cf37) main_image3_pane_t1

0x82bd,	// (0x0006cf8f) main_image3_pane_t2_ParamLimits

0x82bd,	// (0x0006cf8f) main_image3_pane_t2

0x830f,	// (0x0006cfe1) main_image3_pane_t3_ParamLimits

0x830f,	// (0x0006cfe1) main_image3_pane_t3

0x0003,

0xf93d,	// (0x0007460f) main_image3_pane_t_ParamLimits

0xf93d,	// (0x0007460f) main_image3_pane_t

0xea7f,	// (0x00073751) grid_sctrl_middle_pane_cp01_ParamLimits

0xea7f,	// (0x00073751) grid_sctrl_middle_pane_cp01

0x838f,	// (0x0006d061) cell_sctrl_middle_pane_cp01_ParamLimits

0x838f,	// (0x0006d061) cell_sctrl_middle_pane_cp01

0x83ac,	// (0x0006d07e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x83ac,	// (0x0006d07e) cell_sctrl_middle_pane_cp01_g1

0xa57a,	// (0x0006f24c) main_call4_pane

0x83c2,	// (0x0006d094) aid_size_button_call4_ParamLimits

0x83c2,	// (0x0006d094) aid_size_button_call4

0x83ef,	// (0x0006d0c1) call4_windows_pane_ParamLimits

0x83ef,	// (0x0006d0c1) call4_windows_pane

0x8405,	// (0x0006d0d7) grid_call4_button_pane_ParamLimits

0x8405,	// (0x0006d0d7) grid_call4_button_pane

0xceb4,	// (0x00071b86) call4_windows_conf_pane

0x8424,	// (0x0006d0f6) popup_call4_audio_first_window_ParamLimits

0x8424,	// (0x0006d0f6) popup_call4_audio_first_window

0x8444,	// (0x0006d116) popup_call4_audio_second_window_ParamLimits

0x8444,	// (0x0006d116) popup_call4_audio_second_window

0xcee7,	// (0x00071bb9) popup_call4_audio_wait_window_ParamLimits

0xcee7,	// (0x00071bb9) popup_call4_audio_wait_window

0x8456,	// (0x0006d128) cell_call4_button_pane_ParamLimits

0x8456,	// (0x0006d128) cell_call4_button_pane

0x847b,	// (0x0006d14d) bg_button_pane_cp09_ParamLimits

0x847b,	// (0x0006d14d) bg_button_pane_cp09

0x8487,	// (0x0006d159) cell_call4_button_pane_g1_ParamLimits

0x8487,	// (0x0006d159) cell_call4_button_pane_g1

0x84ad,	// (0x0006d17f) cell_call4_button_pane_t1_ParamLimits

0x84ad,	// (0x0006d17f) cell_call4_button_pane_t1

0xcf2d,	// (0x00071bff) popup_call4_audio_conf_window_ParamLimits

0xcf2d,	// (0x00071bff) popup_call4_audio_conf_window

0x7795,	// (0x0006c467) mup3_progress_pane_t1_ParamLimits

0x77ab,	// (0x0006c47d) mup3_progress_pane_t2_ParamLimits

0xc8f4,	// (0x000715c6) mup3_progress_pane_t3_ParamLimits

0xf816,	// (0x000744e8) mup3_progress_pane_t_ParamLimits

0xc90b,	// (0x000715dd) mup_progress_pane_cp03_ParamLimits

0x7d82,	// (0x0006ca54) mup3_control_keys_pane_g4_copy1

0xef8f,	// (0x00073c61) mp4_rocker2_pane_ParamLimits

0xef8f,	// (0x00073c61) mp4_rocker2_pane

0xcf41,	// (0x00071c13) mp4_rocker2_pane_g1

0xcf49,	// (0x00071c1b) mp4_rocker2_pane_g2

0xeff5,	// (0x00073cc7) mp4_rocker2_pane_g3

0xeffd,	// (0x00073ccf) mp4_rocker2_pane_g4

0xf005,	// (0x00073cd7) mp4_rocker2_pane_g5

0x0004,

0xf946,	// (0x00074618) mp4_rocker2_pane_g

0xa57a,	// (0x0006f24c) main_camera4_pane

0xa57a,	// (0x0006f24c) main_video4_pane

0x7fbe,	// (0x0006cc90) main_video_tele_dialer_pane_t1_ParamLimits

0x7fbe,	// (0x0006cc90) main_video_tele_dialer_pane_t1

0x7fd5,	// (0x0006cca7) main_video_tele_dialer_pane_t2_ParamLimits

0x7fd5,	// (0x0006cca7) main_video_tele_dialer_pane_t2

0x0001,

0xf900,	// (0x000745d2) main_video_tele_dialer_pane_t_ParamLimits

0xf900,	// (0x000745d2) main_video_tele_dialer_pane_t

0x84e9,	// (0x0006d1bb) cam4_autofocus_pane_ParamLimits

0x84e9,	// (0x0006d1bb) cam4_autofocus_pane

0x84fd,	// (0x0006d1cf) cam4_image_uncrop_pane_ParamLimits

0x84fd,	// (0x0006d1cf) cam4_image_uncrop_pane

0x8514,	// (0x0006d1e6) cam4_indicators_pane_ParamLimits

0x8514,	// (0x0006d1e6) cam4_indicators_pane

0x8538,	// (0x0006d20a) main_camera4_pane_g1_ParamLimits

0x8538,	// (0x0006d20a) main_camera4_pane_g1

0x8544,	// (0x0006d216) main_camera4_pane_g2_ParamLimits

0x8544,	// (0x0006d216) main_camera4_pane_g2

0x8550,	// (0x0006d222) main_camera4_pane_g3_ParamLimits

0x8550,	// (0x0006d222) main_camera4_pane_g3

0x855c,	// (0x0006d22e) main_camera4_pane_g4_ParamLimits

0x855c,	// (0x0006d22e) main_camera4_pane_g4

0x8568,	// (0x0006d23a) main_camera4_pane_g5_ParamLimits

0x8568,	// (0x0006d23a) main_camera4_pane_g5

0x0005,

0xf951,	// (0x00074623) main_camera4_pane_g_ParamLimits

0xf951,	// (0x00074623) main_camera4_pane_g

0x8585,	// (0x0006d257) main_camera4_pane_t1_ParamLimits

0x8585,	// (0x0006d257) main_camera4_pane_t1

0xc8de,	// (0x000715b0) bg_tb_trans_pane_cp06

0x85b6,	// (0x0006d288) cam4_indicators_pane_g1

0x85c3,	// (0x0006d295) cam4_indicators_pane_g2

0x0002,

0xf963,	// (0x00074635) cam4_indicators_pane_g

0x85db,	// (0x0006d2ad) cam4_indicators_pane_t1

0x85ff,	// (0x0006d2d1) main_video4_pane_g1_ParamLimits

0x85ff,	// (0x0006d2d1) main_video4_pane_g1

0x8611,	// (0x0006d2e3) main_video4_pane_g2_ParamLimits

0x8611,	// (0x0006d2e3) main_video4_pane_g2

0x8611,	// (0x0006d2e3) main_video4_pane_g3_ParamLimits

0x8611,	// (0x0006d2e3) main_video4_pane_g3

0x8620,	// (0x0006d2f2) main_video4_pane_g4_ParamLimits

0x8620,	// (0x0006d2f2) main_video4_pane_g4

0x0004,

0xf96a,	// (0x0007463c) main_video4_pane_g_ParamLimits

0xf96a,	// (0x0007463c) main_video4_pane_g

0x863e,	// (0x0006d310) vid4_indicators_pane_ParamLimits

0x863e,	// (0x0006d310) vid4_indicators_pane

0x8666,	// (0x0006d338) video4_image_uncrop_cif_pane_ParamLimits

0x8666,	// (0x0006d338) video4_image_uncrop_cif_pane

0x867e,	// (0x0006d350) video4_image_uncrop_nhd_pane_ParamLimits

0x867e,	// (0x0006d350) video4_image_uncrop_nhd_pane

0x8692,	// (0x0006d364) video4_image_uncrop_vga_pane_ParamLimits

0x8692,	// (0x0006d364) video4_image_uncrop_vga_pane

0xcf51,	// (0x00071c23) bg_tb_trans_pane_cp07

0x85b6,	// (0x0006d288) vid4_indicators_pane_g1

0x86aa,	// (0x0006d37c) vid4_indicators_pane_g2

0x86b7,	// (0x0006d389) vid4_indicators_pane_g3

0x0004,

0xf975,	// (0x00074647) vid4_indicators_pane_g

0x86d0,	// (0x0006d3a2) vid4_indicators_pane_t1

0x86e2,	// (0x0006d3b4) cam4_autofocus_pane_g1

0x86ea,	// (0x0006d3bc) cam4_autofocus_pane_g2

0x86f2,	// (0x0006d3c4) cam4_autofocus_pane_g3

0x0002,

0xf980,	// (0x00074652) cam4_autofocus_pane_g

0x86fa,	// (0x0006d3cc) cam4_autofocus_pane_g3_copy1

0x8000,	// (0x0006ccd2) video_down_pane_cp_t1

0x800e,	// (0x0006cce0) video_down_pane_cp_t2

0x0001,

0xf905,	// (0x000745d7) video_down_pane_cp_t

0xea7f,	// (0x00073751) popup_vitu2_window_ParamLimits

0xea7f,	// (0x00073751) popup_vitu2_window

0x8702,	// (0x0006d3d4) aid_size_cell2_itu2_ParamLimits

0x8702,	// (0x0006d3d4) aid_size_cell2_itu2

0x8728,	// (0x0006d3fa) aid_size_cell_itu2_ParamLimits

0x8728,	// (0x0006d3fa) aid_size_cell_itu2

0x877a,	// (0x0006d44c) bg_popup_window_pane_cp09_ParamLimits

0x877a,	// (0x0006d44c) bg_popup_window_pane_cp09

0x8788,	// (0x0006d45a) field_vitu2_entry_pane_ParamLimits

0x8788,	// (0x0006d45a) field_vitu2_entry_pane

0x87a2,	// (0x0006d474) grid_vitu2_function_pane_ParamLimits

0x87a2,	// (0x0006d474) grid_vitu2_function_pane

0x87dd,	// (0x0006d4af) grid_vitu2_itu_pane_ParamLimits

0x87dd,	// (0x0006d4af) grid_vitu2_itu_pane

0x8842,	// (0x0006d514) cell_vitu2_itu_pane_ParamLimits

0x8842,	// (0x0006d514) cell_vitu2_itu_pane

0x8864,	// (0x0006d536) cell_vitu2_function_pane_ParamLimits

0x8864,	// (0x0006d536) cell_vitu2_function_pane

0xcf5f,	// (0x00071c31) bg_popup_call_pane_cp08_ParamLimits

0xcf5f,	// (0x00071c31) bg_popup_call_pane_cp08

0xcf78,	// (0x00071c4a) field_vitu2_entry_pane_g1

0xcf84,	// (0x00071c56) field_vitu2_entry_pane_g2

0x0002,

0xf987,	// (0x00074659) field_vitu2_entry_pane_g

0xcf9e,	// (0x00071c70) field_vitu2_entry_pane_t1_ParamLimits

0xcf9e,	// (0x00071c70) field_vitu2_entry_pane_t1

0xcfb9,	// (0x00071c8b) field_vitu2_entry_pane_t2_ParamLimits

0xcfb9,	// (0x00071c8b) field_vitu2_entry_pane_t2

0x0001,

0xf98e,	// (0x00074660) field_vitu2_entry_pane_t_ParamLimits

0xf98e,	// (0x00074660) field_vitu2_entry_pane_t

0x88a3,	// (0x0006d575) bg_button_pane_cp010_ParamLimits

0x88a3,	// (0x0006d575) bg_button_pane_cp010

0x88b1,	// (0x0006d583) cell_vitu2_itu_pane_g1

0x88cf,	// (0x0006d5a1) cell_vitu2_itu_pane_t1_ParamLimits

0x88cf,	// (0x0006d5a1) cell_vitu2_itu_pane_t1

0x27be,	// (0x00067490) cell_vitu2_itu_pane_t2_ParamLimits

0x27be,	// (0x00067490) cell_vitu2_itu_pane_t2

0x0002,

0xf998,	// (0x0007466a) cell_vitu2_itu_pane_t_ParamLimits

0xf998,	// (0x0007466a) cell_vitu2_itu_pane_t

0xea7f,	// (0x00073751) bg_button_pane_cp011

0x8935,	// (0x0006d607) cell_vitu2_function_pane_g1

0xa57a,	// (0x0006f24c) main_myfav_hc_pane

0x835b,	// (0x0006d02d) popup_image3_note_pane_ParamLimits

0x835b,	// (0x0006d02d) popup_image3_note_pane

0x8375,	// (0x0006d047) popup_image3_tool_bar_pane_ParamLimits

0x8375,	// (0x0006d047) popup_image3_tool_bar_pane

0x2842,	// (0x00067514) cell_vitu2_itu_pane_t3_ParamLimits

0x2842,	// (0x00067514) cell_vitu2_itu_pane_t3

0xa57a,	// (0x0006f24c) bg_popup_trans_pane

0xcfde,	// (0x00071cb0) grid_image3_tool_bar_pane

0xcfe8,	// (0x00071cba) bg_popup_trans_pane_g1

0x40c4,	// (0x00068d96) bg_popup_trans_pane_g2

0xcff0,	// (0x00071cc2) bg_popup_trans_pane_g3

0xcff8,	// (0x00071cca) bg_popup_trans_pane_g4

0xd000,	// (0x00071cd2) bg_popup_trans_pane_g5

0xd008,	// (0x00071cda) bg_popup_trans_pane_g6

0xd010,	// (0x00071ce2) bg_popup_trans_pane_g7

0xd018,	// (0x00071cea) bg_popup_trans_pane_g8

0x40a4,	// (0x00068d76) bg_popup_trans_pane_g9

0x0008,

0xf99f,	// (0x00074671) bg_popup_trans_pane_g

0xea8d,	// (0x0007375f) cell_image3_tool_bar_pane_ParamLimits

0xea8d,	// (0x0007375f) cell_image3_tool_bar_pane

0xc61e,	// (0x000712f0) cell_image3_tool_bar_pane_g1

0xa57a,	// (0x0006f24c) bg_popup_trans_pane_cp1

0xd020,	// (0x00071cf2) popup_image3_note_pane_t1

0xd02e,	// (0x00071d00) popup_image3_note_pane_t2

0xd03c,	// (0x00071d0e) popup_image3_note_pane_t3

0x0002,

0xf9b2,	// (0x00074684) popup_image3_note_pane_t

0xd04a,	// (0x00071d1c) popup_image3_note_pane_t3_copy1

0x8949,	// (0x0006d61b) bg_myfav_hc_instruction_pane_ParamLimits

0x8949,	// (0x0006d61b) bg_myfav_hc_instruction_pane

0x895b,	// (0x0006d62d) cell_myfav_contact_pane_ParamLimits

0x895b,	// (0x0006d62d) cell_myfav_contact_pane

0x8975,	// (0x0006d647) cell_myfav_contact_pane_cp1_ParamLimits

0x8975,	// (0x0006d647) cell_myfav_contact_pane_cp1

0x898b,	// (0x0006d65d) cell_myfav_contact_pane_cp2_ParamLimits

0x898b,	// (0x0006d65d) cell_myfav_contact_pane_cp2

0x89a1,	// (0x0006d673) cell_myfav_contact_pane_cp3_ParamLimits

0x89a1,	// (0x0006d673) cell_myfav_contact_pane_cp3

0x89b6,	// (0x0006d688) cell_myfav_contact_pane_cp4_ParamLimits

0x89b6,	// (0x0006d688) cell_myfav_contact_pane_cp4

0x89ca,	// (0x0006d69c) cell_myfav_contact_pane_cp5_ParamLimits

0x89ca,	// (0x0006d69c) cell_myfav_contact_pane_cp5

0x89de,	// (0x0006d6b0) cell_myfav_contact_pane_cp6_ParamLimits

0x89de,	// (0x0006d6b0) cell_myfav_contact_pane_cp6

0x89f2,	// (0x0006d6c4) cell_myfav_contact_pane_cp7_ParamLimits

0x89f2,	// (0x0006d6c4) cell_myfav_contact_pane_cp7

0xd058,	// (0x00071d2a) listscroll_gen_pane_cp05

0x8a0a,	// (0x0006d6dc) main_myfav_hc_pane_g1_ParamLimits

0x8a0a,	// (0x0006d6dc) main_myfav_hc_pane_g1

0x8a20,	// (0x0006d6f2) main_myfav_hc_pane_g2_ParamLimits

0x8a20,	// (0x0006d6f2) main_myfav_hc_pane_g2

0x0002,

0xf9b9,	// (0x0007468b) main_myfav_hc_pane_g_ParamLimits

0xf9b9,	// (0x0007468b) main_myfav_hc_pane_g

0x8a4a,	// (0x0006d71c) main_myfav_hc_pane_t1_ParamLimits

0x8a4a,	// (0x0006d71c) main_myfav_hc_pane_t1

0xd061,	// (0x00071d33) main_myfav_hc_pane_t2_ParamLimits

0xd061,	// (0x00071d33) main_myfav_hc_pane_t2

0xd073,	// (0x00071d45) main_myfav_hc_pane_t3_ParamLimits

0xd073,	// (0x00071d45) main_myfav_hc_pane_t3

0x8a5f,	// (0x0006d731) main_myfav_hc_pane_t4_ParamLimits

0x8a5f,	// (0x0006d731) main_myfav_hc_pane_t4

0x0004,

0xf9c0,	// (0x00074692) main_myfav_hc_pane_t_ParamLimits

0xf9c0,	// (0x00074692) main_myfav_hc_pane_t

0xc61e,	// (0x000712f0) bg_myfav_hc_instruction_pane_g1

0xd085,	// (0x00071d57) cell_myfav_contact_pane_g1_ParamLimits

0xd085,	// (0x00071d57) cell_myfav_contact_pane_g1

0xd085,	// (0x00071d57) cell_myfav_contact_pane_g2_ParamLimits

0xd085,	// (0x00071d57) cell_myfav_contact_pane_g2

0xd091,	// (0x00071d63) cell_myfav_contact_pane_g3_ParamLimits

0xd091,	// (0x00071d63) cell_myfav_contact_pane_g3

0xc8de,	// (0x000715b0) cell_myfav_contact_pane_g4_ParamLimits

0xc8de,	// (0x000715b0) cell_myfav_contact_pane_g4

0xd09e,	// (0x00071d70) cell_myfav_contact_pane_g5_ParamLimits

0xd09e,	// (0x00071d70) cell_myfav_contact_pane_g5

0x0004,

0xf9cb,	// (0x0007469d) cell_myfav_contact_pane_g_ParamLimits

0xf9cb,	// (0x0007469d) cell_myfav_contact_pane_g

0x8a36,	// (0x0006d708) main_myfav_hc_pane_g3_ParamLimits

0x8a36,	// (0x0006d708) main_myfav_hc_pane_g3

0x306e,	// (0x00067d40) popup_adpt_find_window

0x8a83,	// (0x0006d755) afind_page_pane_ParamLimits

0x8a83,	// (0x0006d755) afind_page_pane

0x8a98,	// (0x0006d76a) aid_size_cell_afind_ParamLimits

0x8a98,	// (0x0006d76a) aid_size_cell_afind

0x8ab6,	// (0x0006d788) bg_popup_sub_pane_cp09_ParamLimits

0x8ab6,	// (0x0006d788) bg_popup_sub_pane_cp09

0x8ac3,	// (0x0006d795) find_pane_cp01_ParamLimits

0x8ac3,	// (0x0006d795) find_pane_cp01

0xd0aa,	// (0x00071d7c) grid_afind_control_pane_ParamLimits

0xd0aa,	// (0x00071d7c) grid_afind_control_pane

0x8ad0,	// (0x0006d7a2) grid_afind_pane_ParamLimits

0x8ad0,	// (0x0006d7a2) grid_afind_pane

0x8aee,	// (0x0006d7c0) cell_afind_pane_ParamLimits

0x8aee,	// (0x0006d7c0) cell_afind_pane

0xc61e,	// (0x000712f0) afind_page_pane_g1

0x8b3b,	// (0x0006d80d) afind_page_pane_g2

0x8b44,	// (0x0006d816) afind_page_pane_g3

0x0002,

0xf9d6,	// (0x000746a8) afind_page_pane_g

0x8b4d,	// (0x0006d81f) afind_page_pane_t1

0xd0be,	// (0x00071d90) cell_afind_grid_control_pane_ParamLimits

0xd0be,	// (0x00071d90) cell_afind_grid_control_pane

0xce90,	// (0x00071b62) bg_button_pane_cp69_ParamLimits

0xce90,	// (0x00071b62) bg_button_pane_cp69

0x8b6d,	// (0x0006d83f) cell_afind_pane_g1_ParamLimits

0x8b6d,	// (0x0006d83f) cell_afind_pane_g1

0x8b7a,	// (0x0006d84c) cell_afind_pane_t1_ParamLimits

0x8b7a,	// (0x0006d84c) cell_afind_pane_t1

0xb044,	// (0x0006fd16) bg_button_pane_cp72

0xd0cd,	// (0x00071d9f) cell_afind_grid_control_pane_g1

0x602b,	// (0x0006acfd) aid_image_placing_area_ParamLimits

0x602b,	// (0x0006acfd) aid_image_placing_area

0xcb6a,	// (0x0007183c) field_vitu_entry_pane_g1_ParamLimits

0xcb6a,	// (0x0007183c) field_vitu_entry_pane_g1

0xcb76,	// (0x00071848) field_vitu_entry_pane_g2_ParamLimits

0xcb76,	// (0x00071848) field_vitu_entry_pane_g2

0x0001,

0xf890,	// (0x00074562) field_vitu_entry_pane_g_ParamLimits

0xf890,	// (0x00074562) field_vitu_entry_pane_g

0x7e35,	// (0x0006cb07) cell_vitu_itu_pane_g1_ParamLimits

0x7e77,	// (0x0006cb49) cell_vitu_itu_pane_t3_ParamLimits

0x7e77,	// (0x0006cb49) cell_vitu_itu_pane_t3

0xce44,	// (0x00071b16) mp4_progress_pane_t1_ParamLimits

0xce5b,	// (0x00071b2d) mp4_progress_pane_t2_ParamLimits

0xf925,	// (0x000745f7) mp4_progress_pane_t_ParamLimits

0xce72,	// (0x00071b44) mup_progress_pane_cp04_ParamLimits

0x8a71,	// (0x0006d743) main_myfav_hc_pane_t5_ParamLimits

0x8a71,	// (0x0006d743) main_myfav_hc_pane_t5

0xa59c,	// (0x0006f26e) aid_zoom_text_primary

0x306e,	// (0x00067d40) popup_adpt_find_window_ParamLimits

0xea7f,	// (0x00073751) main_cam_set_pane

0x8526,	// (0x0006d1f8) cam4_zoom_pane_ParamLimits

0x8526,	// (0x0006d1f8) cam4_zoom_pane

0x8b8c,	// (0x0006d85e) main_cam_set_pane_g1_ParamLimits

0x8b8c,	// (0x0006d85e) main_cam_set_pane_g1

0x8b9a,	// (0x0006d86c) main_cam_set_pane_g2_ParamLimits

0x8b9a,	// (0x0006d86c) main_cam_set_pane_g2

0x0001,

0xf9dd,	// (0x000746af) main_cam_set_pane_g_ParamLimits

0xf9dd,	// (0x000746af) main_cam_set_pane_g

0x8bb9,	// (0x0006d88b) main_cam_set_pane_t1_ParamLimits

0x8bb9,	// (0x0006d88b) main_cam_set_pane_t1

0x8bcb,	// (0x0006d89d) main_cset_listscroll_pane_ParamLimits

0x8bcb,	// (0x0006d89d) main_cset_listscroll_pane

0x8be9,	// (0x0006d8bb) main_cset_slider_pane_ParamLimits

0x8be9,	// (0x0006d8bb) main_cset_slider_pane

0xd0de,	// (0x00071db0) main_cset_list_pane_ParamLimits

0xd0de,	// (0x00071db0) main_cset_list_pane

0xd0ee,	// (0x00071dc0) scroll_pane_cp028

0x8c0d,	// (0x0006d8df) aid_area_touch_slider

0x8c29,	// (0x0006d8fb) cset_slider_pane

0x8c53,	// (0x0006d925) main_cset_slider_pane_g1

0x8c68,	// (0x0006d93a) main_cset_slider_pane_g2

0x0011,

0xf9e2,	// (0x000746b4) main_cset_slider_pane_g

0xd127,	// (0x00071df9) main_cset_slider_pane_t1

0x8d24,	// (0x0006d9f6) main_cset_slider_pane_t2

0x8d3e,	// (0x0006da10) main_cset_slider_pane_t3

0x8d58,	// (0x0006da2a) main_cset_slider_pane_t4

0x8d72,	// (0x0006da44) main_cset_slider_pane_t5

0x8d8c,	// (0x0006da5e) main_cset_slider_pane_t6

0x8da1,	// (0x0006da73) main_cset_slider_pane_t7

0x000e,

0xfa07,	// (0x000746d9) main_cset_slider_pane_t

0x8ea5,	// (0x0006db77) cset_list_set_pane_ParamLimits

0x8ea5,	// (0x0006db77) cset_list_set_pane

0x8eb6,	// (0x0006db88) aid_position_infowindow_above

0x8ebe,	// (0x0006db90) aid_position_infowindow_below

0x8ec6,	// (0x0006db98) cset_list_set_pane_g1_ParamLimits

0x8ec6,	// (0x0006db98) cset_list_set_pane_g1

0xd1c7,	// (0x00071e99) cset_list_set_pane_g3_ParamLimits

0xd1c7,	// (0x00071e99) cset_list_set_pane_g3

0x0001,

0xfa26,	// (0x000746f8) cset_list_set_pane_g_ParamLimits

0xfa26,	// (0x000746f8) cset_list_set_pane_g

0xd1d6,	// (0x00071ea8) cset_list_set_pane_t1_ParamLimits

0xd1d6,	// (0x00071ea8) cset_list_set_pane_t1

0xea7f,	// (0x00073751) list_highlight_pane_cp021_ParamLimits

0xea7f,	// (0x00073751) list_highlight_pane_cp021

0x5915,	// (0x0006a5e7) cset_slider_pane_g1

0x5927,	// (0x0006a5f9) cset_slider_pane_g2

0x591e,	// (0x0006a5f0) cset_slider_pane_g3

0x0002,

0xfa2b,	// (0x000746fd) cset_slider_pane_g

0xf02d,	// (0x00073cff) aid_area_touch_cam4_zoom

0xf035,	// (0x00073d07) cam4_zoom_cont_pane

0xf03d,	// (0x00073d0f) cam4_zoom_pane_g1

0xf045,	// (0x00073d17) cam4_zoom_pane_g2

0x8ed2,	// (0x0006dba4) cam4_zoom_pane_g3

0x0002,

0xfa32,	// (0x00074704) cam4_zoom_pane_g

0xd1eb,	// (0x00071ebd) cam4_zoom_cont_pane_g1

0xd1f4,	// (0x00071ec6) cam4_zoom_cont_pane_g2

0xd1fd,	// (0x00071ecf) cam4_zoom_cont_pane_g3

0x0002,

0xfa39,	// (0x0007470b) cam4_zoom_cont_pane_g

0x83e0,	// (0x0006d0b2) call4_image_pane_ParamLimits

0x83e0,	// (0x0006d0b2) call4_image_pane

0xceb4,	// (0x00071b86) call4_windows_conf_pane_ParamLimits

0xcec7,	// (0x00071b99) popup_call4_audio_in_window_ParamLimits

0xcec7,	// (0x00071b99) popup_call4_audio_in_window

0xa57a,	// (0x0006f24c) bg_popup_call2_act_pane_cp02

0xcf25,	// (0x00071bf7) call4_list_conf_pane

0xc61e,	// (0x000712f0) call4_image_pane_g1

0xc61e,	// (0x000712f0) call4_image_pane_g2

0x0001,

0xf756,	// (0x00074428) call4_image_pane_g

0xd206,	// (0x00071ed8) list_single_graphic_popup_conf4_pane_ParamLimits

0xd206,	// (0x00071ed8) list_single_graphic_popup_conf4_pane

0xa57a,	// (0x0006f24c) list_highlight_pane_cp022

0xd219,	// (0x00071eeb) list_single_graphic_popup_conf4_pane_g1

0x4f33,	// (0x00069c05) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa40,	// (0x00074712) list_single_graphic_popup_conf4_pane_g

0xd221,	// (0x00071ef3) list_single_graphic_popup_conf4_pane_t1

0x3df6,	// (0x00068ac8) popup_vtel_slider_window_ParamLimits

0x3df6,	// (0x00068ac8) popup_vtel_slider_window

0xce7e,	// (0x00071b50) dialer2_ne_pane_t2_ParamLimits

0xce7e,	// (0x00071b50) dialer2_ne_pane_t2

0x0001,

0xf92a,	// (0x000745fc) dialer2_ne_pane_t_ParamLimits

0xf92a,	// (0x000745fc) dialer2_ne_pane_t

0xc40b,	// (0x000710dd) bg_popup_sub_pane_cp010_ParamLimits

0xc40b,	// (0x000710dd) bg_popup_sub_pane_cp010

0x8eda,	// (0x0006dbac) popup_vtel_slider_window_g1_ParamLimits

0x8eda,	// (0x0006dbac) popup_vtel_slider_window_g1

0x8eed,	// (0x0006dbbf) popup_vtel_slider_window_g2_ParamLimits

0x8eed,	// (0x0006dbbf) popup_vtel_slider_window_g2

0x0003,

0xfa45,	// (0x00074717) popup_vtel_slider_window_g_ParamLimits

0xfa45,	// (0x00074717) popup_vtel_slider_window_g

0x8f41,	// (0x0006dc13) vtel_slider_pane_ParamLimits

0x8f41,	// (0x0006dc13) vtel_slider_pane

0x8f63,	// (0x0006dc35) vtel_slider_pane_g1_ParamLimits

0x8f63,	// (0x0006dc35) vtel_slider_pane_g1

0x8f77,	// (0x0006dc49) vtel_slider_pane_g2_ParamLimits

0x8f77,	// (0x0006dc49) vtel_slider_pane_g2

0x8f8f,	// (0x0006dc61) vtel_slider_pane_g3_ParamLimits

0x8f8f,	// (0x0006dc61) vtel_slider_pane_g3

0x8f63,	// (0x0006dc35) vtel_slider_pane_g4_ParamLimits

0x8f63,	// (0x0006dc35) vtel_slider_pane_g4

0x8fa5,	// (0x0006dc77) vtel_slider_pane_g5_ParamLimits

0x8fa5,	// (0x0006dc77) vtel_slider_pane_g5

0x0004,

0xfa4e,	// (0x00074720) vtel_slider_pane_g_ParamLimits

0xfa4e,	// (0x00074720) vtel_slider_pane_g

0xa57a,	// (0x0006f24c) main_gallery2_pane

0x8754,	// (0x0006d426) aid_size_row_itut2_dropdow_list_ParamLimits

0x8754,	// (0x0006d426) aid_size_row_itut2_dropdow_list

0x87be,	// (0x0006d490) grid_vitu2_function_top_pane_ParamLimits

0x87be,	// (0x0006d490) grid_vitu2_function_top_pane

0x8801,	// (0x0006d4d3) popup_vitu2_dropdown_list_window_ParamLimits

0x8801,	// (0x0006d4d3) popup_vitu2_dropdown_list_window

0x8820,	// (0x0006d4f2) popup_vitu2_match_list_window

0x8fbb,	// (0x0006dc8d) cell_vitu2_function_top_pane_ParamLimits

0x8fbb,	// (0x0006dc8d) cell_vitu2_function_top_pane

0x8fdb,	// (0x0006dcad) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8fdb,	// (0x0006dcad) cell_vitu2_function_top_pane_cp01

0x8ffb,	// (0x0006dccd) cell_vitu2_function_top_wide_pane_ParamLimits

0x8ffb,	// (0x0006dccd) cell_vitu2_function_top_wide_pane

0xea7f,	// (0x00073751) bg_button_pane_cp012

0x9019,	// (0x0006dceb) cell_vitu2_function_top_pane_g1

0xf04d,	// (0x00073d1f) bg_button_pane_cp013_ParamLimits

0xf04d,	// (0x00073d1f) bg_button_pane_cp013

0x902d,	// (0x0006dcff) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x902d,	// (0x0006dcff) cell_vitu2_function_top_wide_pane_g1

0xea7f,	// (0x00073751) bg_popup_sub_pane_cp20

0x9045,	// (0x0006dd17) list_vitu2_match_list_pane

0xcfe8,	// (0x00071cba) bg_popup_sub_pane_cp20_g1

0xcff0,	// (0x00071cc2) bg_popup_sub_pane_cp20_g2

0x40c4,	// (0x00068d96) bg_popup_sub_pane_cp20_g3

0xcff8,	// (0x00071cca) bg_popup_sub_pane_cp20_g4

0x40a4,	// (0x00068d76) bg_popup_sub_pane_cp20_g5

0xd23d,	// (0x00071f0f) bg_popup_sub_pane_cp20_g6

0xd008,	// (0x00071cda) bg_popup_sub_pane_cp20_g7

0xd010,	// (0x00071ce2) bg_popup_sub_pane_cp20_g8

0xd018,	// (0x00071cea) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa59,	// (0x0007472b) bg_popup_sub_pane_cp20_g

0xf069,	// (0x00073d3b) list_vitu2_match_list_item_pane_ParamLimits

0xf069,	// (0x00073d3b) list_vitu2_match_list_item_pane

0xf07b,	// (0x00073d4d) list_vitu2_match_list_item_pane_t1

0xa57a,	// (0x0006f24c) bg_popup_sub_pane_cp21

0x4e3c,	// (0x00069b0e) grid_vitu2_dropdown_list_pane

0x9063,	// (0x0006dd35) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x9063,	// (0x0006dd35) cell_vitu2_dropdown_list_char_pane

0x9084,	// (0x0006dd56) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9084,	// (0x0006dd56) cell_vitu2_dropdown_list_ctrl_pane

0xd245,	// (0x00071f17) cell_vitu2_dropdown_list_char_pane_g1

0xd24e,	// (0x00071f20) cell_vitu2_dropdown_list_char_pane_g2

0xd257,	// (0x00071f29) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa76,	// (0x00074748) cell_vitu2_dropdown_list_char_pane_g

0x90b0,	// (0x0006dd82) cell_vitu2_dropdown_list_char_pane_t1

0x90be,	// (0x0006dd90) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x90be,	// (0x0006dd90) cell_vitu2_dropdown_list_ctrl_pane_g1

0x90cb,	// (0x0006dd9d) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x90cb,	// (0x0006dd9d) cell_vitu2_dropdown_list_ctrl_pane_g2

0x90d8,	// (0x0006ddaa) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x90d8,	// (0x0006ddaa) cell_vitu2_dropdown_list_ctrl_pane_g3

0x90e5,	// (0x0006ddb7) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x90e5,	// (0x0006ddb7) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc84d,	// (0x0007151f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc84d,	// (0x0007151f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa7d,	// (0x0007474f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa7d,	// (0x0007474f) cell_vitu2_dropdown_list_ctrl_pane_g

0x9101,	// (0x0006ddd3) aid_size_cell_gallery2_ParamLimits

0x9101,	// (0x0006ddd3) aid_size_cell_gallery2

0x9117,	// (0x0006dde9) grid_gallery2_pane_ParamLimits

0x9117,	// (0x0006dde9) grid_gallery2_pane

0x9129,	// (0x0006ddfb) scroll_pane_cp029_ParamLimits

0x9129,	// (0x0006ddfb) scroll_pane_cp029

0x9135,	// (0x0006de07) cell_gallery2_pane_ParamLimits

0x9135,	// (0x0006de07) cell_gallery2_pane

0xd260,	// (0x00071f32) cell_gallery2_pane_g2

0x9167,	// (0x0006de39) cell_gallery2_pane_g3

0xd26a,	// (0x00071f3c) cell_gallery2_pane_g4

0xd272,	// (0x00071f44) cell_gallery2_pane_g5

0x5439,	// (0x0006a10b) grid_highlight_pane_cp10

0x8820,	// (0x0006d4f2) popup_vitu2_match_list_window_ParamLimits

0x8831,	// (0x0006d503) popup_vitu2_query_window_ParamLimits

0x8831,	// (0x0006d503) popup_vitu2_query_window

0xa57a,	// (0x0006f24c) bg_vitu2_candi_button_pane

0xd245,	// (0x00071f17) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd24e,	// (0x00071f20) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd257,	// (0x00071f29) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x28c6,	// (0x00067598) bg_button_pane_cp015

0x916f,	// (0x0006de41) bg_button_pane_cp016

0x9178,	// (0x0006de4a) bg_button_pane_cp017

0xea7f,	// (0x00073751) bg_popup_sub_pane_cp22

0xd27a,	// (0x00071f4c) popup_vitu2_query_window_g1

0x28db,	// (0x000675ad) popup_vitu2_query_window_g2

0x0001,

0xfa88,	// (0x0007475a) popup_vitu2_query_window_g

0x28e7,	// (0x000675b9) popup_vitu2_query_window_t1_ParamLimits

0x28e7,	// (0x000675b9) popup_vitu2_query_window_t1

0x290f,	// (0x000675e1) popup_vitu2_query_window_t2_ParamLimits

0x290f,	// (0x000675e1) popup_vitu2_query_window_t2

0x2921,	// (0x000675f3) popup_vitu2_query_window_t3_ParamLimits

0x2921,	// (0x000675f3) popup_vitu2_query_window_t3

0x9191,	// (0x0006de63) popup_vitu2_query_window_t4_ParamLimits

0x9191,	// (0x0006de63) popup_vitu2_query_window_t4

0x91a3,	// (0x0006de75) popup_vitu2_query_window_t5_ParamLimits

0x91a3,	// (0x0006de75) popup_vitu2_query_window_t5

0x0004,

0xfa8d,	// (0x0007475f) popup_vitu2_query_window_t_ParamLimits

0xfa8d,	// (0x0007475f) popup_vitu2_query_window_t

0xd0d6,	// (0x00071da8) main_cset_text_pane

0x8c0d,	// (0x0006d8df) aid_area_touch_slider_ParamLimits

0x8c29,	// (0x0006d8fb) cset_slider_pane_ParamLimits

0x8c53,	// (0x0006d925) main_cset_slider_pane_g1_ParamLimits

0x8c68,	// (0x0006d93a) main_cset_slider_pane_g2_ParamLimits

0xd0f7,	// (0x00071dc9) main_cset_slider_pane_g3_ParamLimits

0xd0f7,	// (0x00071dc9) main_cset_slider_pane_g3

0x8c7d,	// (0x0006d94f) main_cset_slider_pane_g4_ParamLimits

0x8c7d,	// (0x0006d94f) main_cset_slider_pane_g4

0x8c8c,	// (0x0006d95e) main_cset_slider_pane_g5_ParamLimits

0x8c8c,	// (0x0006d95e) main_cset_slider_pane_g5

0x8c98,	// (0x0006d96a) main_cset_slider_pane_g6_ParamLimits

0x8c98,	// (0x0006d96a) main_cset_slider_pane_g6

0xf9e2,	// (0x000746b4) main_cset_slider_pane_g_ParamLimits

0xd127,	// (0x00071df9) main_cset_slider_pane_t1_ParamLimits

0x8d24,	// (0x0006d9f6) main_cset_slider_pane_t2_ParamLimits

0x8d3e,	// (0x0006da10) main_cset_slider_pane_t3_ParamLimits

0x8d58,	// (0x0006da2a) main_cset_slider_pane_t4_ParamLimits

0x8d72,	// (0x0006da44) main_cset_slider_pane_t5_ParamLimits

0x8d8c,	// (0x0006da5e) main_cset_slider_pane_t6_ParamLimits

0x8da1,	// (0x0006da73) main_cset_slider_pane_t7_ParamLimits

0x8dcb,	// (0x0006da9d) main_cset_slider_pane_t8_ParamLimits

0x8dcb,	// (0x0006da9d) main_cset_slider_pane_t8

0x8df3,	// (0x0006dac5) main_cset_slider_pane_t9_ParamLimits

0x8df3,	// (0x0006dac5) main_cset_slider_pane_t9

0x8e1b,	// (0x0006daed) main_cset_slider_pane_t10_ParamLimits

0x8e1b,	// (0x0006daed) main_cset_slider_pane_t10

0x8e43,	// (0x0006db15) main_cset_slider_pane_t11_ParamLimits

0x8e43,	// (0x0006db15) main_cset_slider_pane_t11

0x8e6b,	// (0x0006db3d) main_cset_slider_pane_t12_ParamLimits

0x8e6b,	// (0x0006db3d) main_cset_slider_pane_t12

0x8e88,	// (0x0006db5a) main_cset_slider_pane_t13_ParamLimits

0x8e88,	// (0x0006db5a) main_cset_slider_pane_t13

0xfa07,	// (0x000746d9) main_cset_slider_pane_t_ParamLimits

0xa57a,	// (0x0006f24c) bg_popup_sub_pane_cp011

0xd286,	// (0x00071f58) main_cset_text_pane_g1

0xd28e,	// (0x00071f60) main_cset_text_pane_t1

0xd29c,	// (0x00071f6e) main_cset_text_pane_t2

0xd2aa,	// (0x00071f7c) main_cset_text_pane_t3

0xd2b8,	// (0x00071f8a) main_cset_text_pane_t4

0xd2c6,	// (0x00071f98) main_cset_text_pane_t5

0xd2d4,	// (0x00071fa6) main_cset_text_pane_t6

0xd2e2,	// (0x00071fb4) main_cset_text_pane_t7

0x0006,

0xfa98,	// (0x0007476a) main_cset_text_pane_t

0xa57a,	// (0x0006f24c) main_cam4_burst_pane

0xa57a,	// (0x0006f24c) main_cam5_pane

0x8b5b,	// (0x0006d82d) bg_button_pane_cp019

0x8b64,	// (0x0006d836) bg_button_pane_cp020

0xd103,	// (0x00071dd5) main_cset_slider_pane_g7_ParamLimits

0xd103,	// (0x00071dd5) main_cset_slider_pane_g7

0xd10f,	// (0x00071de1) main_cset_slider_pane_g8_ParamLimits

0xd10f,	// (0x00071de1) main_cset_slider_pane_g8

0x8cac,	// (0x0006d97e) main_cset_slider_pane_g9_ParamLimits

0x8cac,	// (0x0006d97e) main_cset_slider_pane_g9

0x8cb8,	// (0x0006d98a) main_cset_slider_pane_g10_ParamLimits

0x8cb8,	// (0x0006d98a) main_cset_slider_pane_g10

0x8cc4,	// (0x0006d996) main_cset_slider_pane_g11_ParamLimits

0x8cc4,	// (0x0006d996) main_cset_slider_pane_g11

0x8cd0,	// (0x0006d9a2) main_cset_slider_pane_g12_ParamLimits

0x8cd0,	// (0x0006d9a2) main_cset_slider_pane_g12

0x8cdc,	// (0x0006d9ae) main_cset_slider_pane_g13_ParamLimits

0x8cdc,	// (0x0006d9ae) main_cset_slider_pane_g13

0x8ce8,	// (0x0006d9ba) main_cset_slider_pane_g14_ParamLimits

0x8ce8,	// (0x0006d9ba) main_cset_slider_pane_g14

0x8cf4,	// (0x0006d9c6) main_cset_slider_pane_g15_ParamLimits

0x8cf4,	// (0x0006d9c6) main_cset_slider_pane_g15

0xd155,	// (0x00071e27) main_cset_slider_pane_t14_ParamLimits

0xd155,	// (0x00071e27) main_cset_slider_pane_t14

0xd18e,	// (0x00071e60) main_cset_slider_pane_t15_ParamLimits

0xd18e,	// (0x00071e60) main_cset_slider_pane_t15

0x91b5,	// (0x0006de87) aid_cam4_burst_size_cell_ParamLimits

0x91b5,	// (0x0006de87) aid_cam4_burst_size_cell

0x91d5,	// (0x0006dea7) grid_cam4_burst_pane_ParamLimits

0x91d5,	// (0x0006dea7) grid_cam4_burst_pane

0x91fb,	// (0x0006decd) linegrid_cam4_burst_pane_ParamLimits

0x91fb,	// (0x0006decd) linegrid_cam4_burst_pane

0x921d,	// (0x0006deef) scroll_pane_cp30_ParamLimits

0x921d,	// (0x0006deef) scroll_pane_cp30

0x9229,	// (0x0006defb) cell_cam4_burst_pane_ParamLimits

0x9229,	// (0x0006defb) cell_cam4_burst_pane

0xd2f0,	// (0x00071fc2) linegrid_cam4_burst_pane_g1_ParamLimits

0xd2f0,	// (0x00071fc2) linegrid_cam4_burst_pane_g1

0x9270,	// (0x0006df42) linegrid_cam4_burst_pane_g2_ParamLimits

0x9270,	// (0x0006df42) linegrid_cam4_burst_pane_g2

0xd2fd,	// (0x00071fcf) linegrid_cam4_burst_pane_g3_ParamLimits

0xd2fd,	// (0x00071fcf) linegrid_cam4_burst_pane_g3

0x0002,

0xfaa7,	// (0x00074779) linegrid_cam4_burst_pane_g_ParamLimits

0xfaa7,	// (0x00074779) linegrid_cam4_burst_pane_g

0x9281,	// (0x0006df53) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x9281,	// (0x0006df53) linegrid_cam4_burst_pane_g3_copy1

0xd30a,	// (0x00071fdc) linegrid_cam4_burst_pane_g4_ParamLimits

0xd30a,	// (0x00071fdc) linegrid_cam4_burst_pane_g4

0x929b,	// (0x0006df6d) linegrid_cam4_burst_pane_g5_ParamLimits

0x929b,	// (0x0006df6d) linegrid_cam4_burst_pane_g5

0x92ac,	// (0x0006df7e) linegrid_cam4_burst_pane_g6_ParamLimits

0x92ac,	// (0x0006df7e) linegrid_cam4_burst_pane_g6

0xd317,	// (0x00071fe9) linegrid_cam4_burst_pane_g7_ParamLimits

0xd317,	// (0x00071fe9) linegrid_cam4_burst_pane_g7

0x92bd,	// (0x0006df8f) cell_cam4_burst_pane_g1

0xd330,	// (0x00072002) main_cam5_pane_t1_ParamLimits

0xd330,	// (0x00072002) main_cam5_pane_t1

0xd342,	// (0x00072014) main_cam5_pane_t2_ParamLimits

0xd342,	// (0x00072014) main_cam5_pane_t2

0xd354,	// (0x00072026) main_cam5_pane_t3_ParamLimits

0xd354,	// (0x00072026) main_cam5_pane_t3

0xd366,	// (0x00072038) main_cam5_pane_t4_ParamLimits

0xd366,	// (0x00072038) main_cam5_pane_t4

0xd37c,	// (0x0007204e) main_cam5_pane_t5_ParamLimits

0xd37c,	// (0x0007204e) main_cam5_pane_t5

0xd38e,	// (0x00072060) main_cam5_pane_t6_ParamLimits

0xd38e,	// (0x00072060) main_cam5_pane_t6

0xd3a0,	// (0x00072072) main_cam5_pane_t7_ParamLimits

0xd3a0,	// (0x00072072) main_cam5_pane_t7

0xd3b2,	// (0x00072084) main_cam5_pane_t8_ParamLimits

0xd3b2,	// (0x00072084) main_cam5_pane_t8

0xd3ce,	// (0x000720a0) main_cam5_pane_t9_ParamLimits

0xd3ce,	// (0x000720a0) main_cam5_pane_t9

0xd3e0,	// (0x000720b2) main_cam5_pane_t10_ParamLimits

0xd3e0,	// (0x000720b2) main_cam5_pane_t10

0xd3f2,	// (0x000720c4) main_cam5_pane_t11_ParamLimits

0xd3f2,	// (0x000720c4) main_cam5_pane_t11

0xd404,	// (0x000720d6) main_cam5_pane_t12_ParamLimits

0xd404,	// (0x000720d6) main_cam5_pane_t12

0xd419,	// (0x000720eb) main_cam5_pane_t13_ParamLimits

0xd419,	// (0x000720eb) main_cam5_pane_t13

0x000c,

0xfab3,	// (0x00074785) main_cam5_pane_t_ParamLimits

0xfab3,	// (0x00074785) main_cam5_pane_t

0x30cc,	// (0x00067d9e) popup_scut_keymap_window_ParamLimits

0x30cc,	// (0x00067d9e) popup_scut_keymap_window

0x92d2,	// (0x0006dfa4) aid_size_cell_brow_shortcut

0x5439,	// (0x0006a10b) bg_popup_window_pane_cp010

0x92de,	// (0x0006dfb0) grid_scut_pane

0x92e8,	// (0x0006dfba) cell_scut_pane_ParamLimits

0x92e8,	// (0x0006dfba) cell_scut_pane

0x92fd,	// (0x0006dfcf) cell_scut_pane_g1

0xd436,	// (0x00072108) cell_scut_pane_t1

0xd445,	// (0x00072117) cell_scut_pane_t2

0x9306,	// (0x0006dfd8) cell_scut_pane_t3

0x0002,

0xface,	// (0x000747a0) cell_scut_pane_t

0x73c4,	// (0x0006c096) main_mup3_pane_g8_ParamLimits

0x73c4,	// (0x0006c096) main_mup3_pane_g8

0x8768,	// (0x0006d43a) area_vitu2_query_pane_ParamLimits

0x8768,	// (0x0006d43a) area_vitu2_query_pane

0x28ce,	// (0x000675a0) input_focus_pane_cp08

0xd454,	// (0x00072126) area_vitu2_query_pane_g1

0x2949,	// (0x0006761b) area_vitu2_query_pane_g2

0x0001,

0xfad5,	// (0x000747a7) area_vitu2_query_pane_g

0x9314,	// (0x0006dfe6) area_vitu2_query_pane_t1_ParamLimits

0x9314,	// (0x0006dfe6) area_vitu2_query_pane_t1

0x9326,	// (0x0006dff8) area_vitu2_query_pane_t2_ParamLimits

0x9326,	// (0x0006dff8) area_vitu2_query_pane_t2

0x2958,	// (0x0006762a) area_vitu2_query_pane_t3_ParamLimits

0x2958,	// (0x0006762a) area_vitu2_query_pane_t3

0xd460,	// (0x00072132) area_vitu2_query_pane_t4_ParamLimits

0xd460,	// (0x00072132) area_vitu2_query_pane_t4

0xd488,	// (0x0007215a) area_vitu2_query_pane_t5_ParamLimits

0xd488,	// (0x0007215a) area_vitu2_query_pane_t5

0xd4b0,	// (0x00072182) area_vitu2_query_pane_t6_ParamLimits

0xd4b0,	// (0x00072182) area_vitu2_query_pane_t6

0x0006,

0xfada,	// (0x000747ac) area_vitu2_query_pane_t_ParamLimits

0xfada,	// (0x000747ac) area_vitu2_query_pane_t

0x9338,	// (0x0006e00a) bg_button_pane_cp018

0x9345,	// (0x0006e017) bg_button_pane_cp021

0x2980,	// (0x00067652) bg_button_pane_cp022

0x298f,	// (0x00067661) input_focus_pane_cp09

0x5296,	// (0x00069f68) aid_size_touch_mv_arrow_left

0x52af,	// (0x00069f81) aid_size_touch_mv_arrow_right

0x8d0c,	// (0x0006d9de) main_cset_slider_pane_g16_ParamLimits

0x8d0c,	// (0x0006d9de) main_cset_slider_pane_g16

0x8d18,	// (0x0006d9ea) main_cset_slider_pane_g17_ParamLimits

0x8d18,	// (0x0006d9ea) main_cset_slider_pane_g17

0x92bd,	// (0x0006df8f) cell_cam4_burst_pane_g1_ParamLimits

0xa57a,	// (0x0006f24c) compa_mode_pane

0x8efd,	// (0x0006dbcf) popup_vtel_slider_window_g3_ParamLimits

0x8efd,	// (0x0006dbcf) popup_vtel_slider_window_g3

0x8f14,	// (0x0006dbe6) popup_vtel_slider_window_g4_ParamLimits

0x8f14,	// (0x0006dbe6) popup_vtel_slider_window_g4

0x8f2b,	// (0x0006dbfd) popup_vtel_slider_window_t1_ParamLimits

0x8f2b,	// (0x0006dbfd) popup_vtel_slider_window_t1

0xa57a,	// (0x0006f24c) main_cl_pane

0xc209,	// (0x00070edb) popup_imed_adjust2_window_ParamLimits

0xc1e3,	// (0x00070eb5) bg_tb_trans_pane_cp05_ParamLimits

0xca9f,	// (0x00071771) popup_imed_adjust2_window_g1_ParamLimits

0xcaae,	// (0x00071780) popup_imed_adjust2_window_g2_ParamLimits

0xcaae,	// (0x00071780) popup_imed_adjust2_window_g2

0xcaba,	// (0x0007178c) popup_imed_adjust2_window_g3_ParamLimits

0xcaba,	// (0x0007178c) popup_imed_adjust2_window_g3

0x0002,

0xf854,	// (0x00074526) popup_imed_adjust2_window_g_ParamLimits

0xf854,	// (0x00074526) popup_imed_adjust2_window_g

0xcac6,	// (0x00071798) popup_imed_adjust2_window_t1_ParamLimits

0xcade,	// (0x000717b0) slider_imed_adjust_pane_ParamLimits

0xcaf2,	// (0x000717c4) slider_imed_adjust_pane_g1_ParamLimits

0xcb02,	// (0x000717d4) slider_imed_adjust_pane_g2_ParamLimits

0xcb12,	// (0x000717e4) slider_imed_adjust_pane_g3_ParamLimits

0xcb23,	// (0x000717f5) slider_imed_adjust_pane_g4_ParamLimits

0xf85b,	// (0x0007452d) slider_imed_adjust_pane_g_ParamLimits

0x84d7,	// (0x0006d1a9) aid_touch_area_cam4_ParamLimits

0x84d7,	// (0x0006d1a9) aid_touch_area_cam4

0xf00d,	// (0x00073cdf) battery_pane_cp01

0x8579,	// (0x0006d24b) main_camera4_pane_g6_ParamLimits

0x8579,	// (0x0006d24b) main_camera4_pane_g6

0x859a,	// (0x0006d26c) main_camera4_pane_t2_ParamLimits

0x859a,	// (0x0006d26c) main_camera4_pane_t2

0x0001,

0xf95e,	// (0x00074630) main_camera4_pane_t_ParamLimits

0xf95e,	// (0x00074630) main_camera4_pane_t

0x85ed,	// (0x0006d2bf) aid_touch_area_vid4_ParamLimits

0x85ed,	// (0x0006d2bf) aid_touch_area_vid4

0x862f,	// (0x0006d301) main_video4_pane_g5_ParamLimits

0x862f,	// (0x0006d301) main_video4_pane_g5

0x8650,	// (0x0006d322) vid4_progress_pane_ParamLimits

0x8650,	// (0x0006d322) vid4_progress_pane

0xd11b,	// (0x00071ded) main_cset_slider_pane_g18_ParamLimits

0xd11b,	// (0x00071ded) main_cset_slider_pane_g18

0xd324,	// (0x00071ff6) cell_cam4_burst_pane_g2_ParamLimits

0xd324,	// (0x00071ff6) cell_cam4_burst_pane_g2

0x0001,

0xfaae,	// (0x00074780) cell_cam4_burst_pane_g_ParamLimits

0xfaae,	// (0x00074780) cell_cam4_burst_pane_g

0xad32,	// (0x0006fa04) bg_cl_pane_ParamLimits

0xad32,	// (0x0006fa04) bg_cl_pane

0x9351,	// (0x0006e023) cl_header_pane_ParamLimits

0x9351,	// (0x0006e023) cl_header_pane

0x9365,	// (0x0006e037) cl_listscroll_pane_ParamLimits

0x9365,	// (0x0006e037) cl_listscroll_pane

0xd4fc,	// (0x000721ce) bg_cl_pane_g1

0xd504,	// (0x000721d6) bg_cl_pane_g2

0xd50c,	// (0x000721de) bg_cl_pane_g3

0xd514,	// (0x000721e6) bg_cl_pane_g4

0xd51c,	// (0x000721ee) bg_cl_pane_g5

0xd524,	// (0x000721f6) bg_cl_pane_g6

0xd52c,	// (0x000721fe) bg_cl_pane_g7

0xd534,	// (0x00072206) bg_cl_pane_g8

0xd53c,	// (0x0007220e) bg_cl_pane_g9

0x0008,

0xfae9,	// (0x000747bb) bg_cl_pane_g

0x9375,	// (0x0006e047) aid_height_cl_leading_ParamLimits

0x9375,	// (0x0006e047) aid_height_cl_leading

0x9381,	// (0x0006e053) aid_height_cl_text_ParamLimits

0x9381,	// (0x0006e053) aid_height_cl_text

0xea7f,	// (0x00073751) bg_cl_header_pane_ParamLimits

0xea7f,	// (0x00073751) bg_cl_header_pane

0x93a0,	// (0x0006e072) cl_header_pane_g1_ParamLimits

0x93a0,	// (0x0006e072) cl_header_pane_g1

0x93b6,	// (0x0006e088) cl_header_pane_t1_ParamLimits

0x93b6,	// (0x0006e088) cl_header_pane_t1

0xd544,	// (0x00072216) cl_list_pane

0xd54d,	// (0x0007221f) hc_scroll_pane_cp01

0x40a4,	// (0x00068d76) bg_cl_header_pane_g1

0xcfe8,	// (0x00071cba) bg_cl_header_pane_g2

0x40c4,	// (0x00068d96) bg_cl_header_pane_g3

0xcff8,	// (0x00071cca) bg_cl_header_pane_g4

0xcff0,	// (0x00071cc2) bg_cl_header_pane_g5

0xd23d,	// (0x00071f0f) bg_cl_header_pane_g6

0xd010,	// (0x00071ce2) bg_cl_header_pane_g7

0xd018,	// (0x00071cea) bg_cl_header_pane_g8

0xd008,	// (0x00071cda) bg_cl_header_pane_g9

0x0008,

0xfafc,	// (0x000747ce) bg_cl_header_pane_g

0x93cf,	// (0x0006e0a1) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x93cf,	// (0x0006e0a1) hc_cl_list_double_graphic_heading_pane

0x93df,	// (0x0006e0b1) hc_cl_list_single_graphic_pane_ParamLimits

0x93df,	// (0x0006e0b1) hc_cl_list_single_graphic_pane

0x93f2,	// (0x0006e0c4) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x93f2,	// (0x0006e0c4) hc_cl_list_single_graphic_pane_g1

0x93fe,	// (0x0006e0d0) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x93fe,	// (0x0006e0d0) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfb0f,	// (0x000747e1) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfb0f,	// (0x000747e1) hc_cl_list_single_graphic_pane_g

0x9412,	// (0x0006e0e4) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9412,	// (0x0006e0e4) hc_cl_list_single_graphic_pane_t1

0x93f2,	// (0x0006e0c4) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x93f2,	// (0x0006e0c4) hc_cl_list_double_graphic_heading_pane_g1

0x9427,	// (0x0006e0f9) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x9427,	// (0x0006e0f9) hc_cl_list_double_graphic_heading_pane_g2

0x943b,	// (0x0006e10d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x943b,	// (0x0006e10d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb14,	// (0x000747e6) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb14,	// (0x000747e6) hc_cl_list_double_graphic_heading_pane_g

0x944f,	// (0x0006e121) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x944f,	// (0x0006e121) hc_cl_list_double_graphic_heading_pane_t1

0x9464,	// (0x0006e136) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x9464,	// (0x0006e136) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb1b,	// (0x000747ed) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb1b,	// (0x000747ed) hc_cl_list_double_graphic_heading_pane_t

0xf089,	// (0x00073d5b) vid4_progress_pane_g1

0xf098,	// (0x00073d6a) vid4_progress_pane_g2

0xf0a7,	// (0x00073d79) vid4_progress_pane_g3

0xf0b6,	// (0x00073d88) vid4_progress_pane_g4

0x0004,

0xfb20,	// (0x000747f2) vid4_progress_pane_g

0xf0c2,	// (0x00073d94) vid4_progress_pane_t1

0xf0d8,	// (0x00073daa) vid4_progress_pane_t2

0x0002,

0xfb2b,	// (0x000747fd) vid4_progress_pane_t

0xf102,	// (0x00073dd4) wait_bar_pane_cp07

0xc419,	// (0x000710eb) blid_firmament_pane_ParamLimits

0xc45a,	// (0x0007112c) popup_blid_sat_info2_window_g1

0xc47e,	// (0x00071150) popup_blid_sat_info2_window_t3

0xc48c,	// (0x0007115e) popup_blid_sat_info2_window_t4

0xc49a,	// (0x0007116c) popup_blid_sat_info2_window_t5

0xc4a8,	// (0x0007117a) popup_blid_sat_info2_window_t6

0xc4b8,	// (0x0007118a) popup_blid_sat_info2_window_t7

0xc4c6,	// (0x00071198) popup_blid_sat_info2_window_t8

0xc4d4,	// (0x000711a6) popup_blid_sat_info2_window_t9

0xc4e2,	// (0x000711b4) popup_blid_sat_info2_window_t10

0xc59e,	// (0x00071270) aid_firma_cardinal_ParamLimits

0xc5b2,	// (0x00071284) blid_firmament_pane_t1_ParamLimits

0xc5c9,	// (0x0007129b) blid_firmament_pane_t2_ParamLimits

0xc5e0,	// (0x000712b2) blid_firmament_pane_t3_ParamLimits

0xc5f7,	// (0x000712c9) blid_firmament_pane_t4_ParamLimits

0xf74d,	// (0x0007441f) blid_firmament_pane_t_ParamLimits

0xc60e,	// (0x000712e0) blid_sat_info_pane_ParamLimits

0xea7f,	// (0x00073751) main_cam_set_pane_ParamLimits

0x7c1b,	// (0x0006c8ed) aid_size_cell_colour_35_ParamLimits

0x7c3b,	// (0x0006c90d) aid_size_cell_colour_112_ParamLimits

0x7c5b,	// (0x0006c92d) aid_size_cell_effect_ParamLimits

0xc1e3,	// (0x00070eb5) bg_tb_trans_pane_cp02_ParamLimits

0x4b7b,	// (0x0006984d) heading_imed_pane_ParamLimits

0x7c7b,	// (0x0006c94d) listscroll_imed_pane_ParamLimits

0xb7d5,	// (0x000704a7) popup_call2_audio_first_window_g5_ParamLimits

0xb7d5,	// (0x000704a7) popup_call2_audio_first_window_g5

0x8198,	// (0x0006ce6a) aid_size_touch_image3_arrow_left_ParamLimits

0x8198,	// (0x0006ce6a) aid_size_touch_image3_arrow_left

0x81b8,	// (0x0006ce8a) aid_size_touch_image3_arrow_right_ParamLimits

0x81b8,	// (0x0006ce8a) aid_size_touch_image3_arrow_right

0xf0ed,	// (0x00073dbf) vid4_progress_pane_t3

0x7f4f,	// (0x0006cc21) main_hwr_training_symbol_option_pane_ParamLimits

0x7f4f,	// (0x0006cc21) main_hwr_training_symbol_option_pane

0xcd7e,	// (0x00071a50) popup_hwr_training_preview_window_ParamLimits

0xcd7e,	// (0x00071a50) popup_hwr_training_preview_window

0x7f6b,	// (0x0006cc3d) hwr_training_navi_pane_g5_ParamLimits

0x7f6b,	// (0x0006cc3d) hwr_training_navi_pane_g5

0xcfd6,	// (0x00071ca8) popup_char_count_window

0xea7f,	// (0x00073751) bg_popup_sub_pane_cp20_ParamLimits

0x9045,	// (0x0006dd17) list_vitu2_match_list_pane_ParamLimits

0x9054,	// (0x0006dd26) vitu2_page_scroll_pane_ParamLimits

0x9054,	// (0x0006dd26) vitu2_page_scroll_pane

0xd59f,	// (0x00072271) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd59f,	// (0x00072271) list_single_hwr_training_symbol_option_pane

0xd5b2,	// (0x00072284) list_single_hwr_training_symbol_option_pane_g1

0xd5ba,	// (0x0007228c) list_single_hwr_training_symbol_option_pane_t1

0xd5c8,	// (0x0007229a) bg_button_pane_cp023

0xd5d1,	// (0x000722a3) bg_button_pane_cp024

0x9479,	// (0x0006e14b) vitu2_page_scroll_pane_g1

0x9481,	// (0x0006e153) vitu2_page_scroll_pane_g2

0x0001,

0xfb32,	// (0x00074804) vitu2_page_scroll_pane_g

0x9489,	// (0x0006e15b) vitu2_page_scroll_pane_t1

0xc379,	// (0x0007104b) popup_char_count_window_g1

0xd604,	// (0x000722d6) popup_char_count_window_g2

0xd60d,	// (0x000722df) popup_char_count_window_g3

0x0002,

0xfb37,	// (0x00074809) popup_char_count_window_g

0xd616,	// (0x000722e8) popup_char_count_window_t1

0xa57a,	// (0x0006f24c) main_vded2_pane

0xca8d,	// (0x0007175f) aid_size_cell_imed_line

0xca97,	// (0x00071769) grid_imed_line_width_pane

0x86c4,	// (0x0006d396) vid4_indicators_pane_g4

0xd624,	// (0x000722f6) cell_imed_line_width_pane_ParamLimits

0xd624,	// (0x000722f6) cell_imed_line_width_pane

0xd636,	// (0x00072308) cell_imed_line_width_pane_g1

0xd63f,	// (0x00072311) cell_imed_line_width_pane_g2

0x0001,

0xfb3e,	// (0x00074810) cell_imed_line_width_pane_g

0x9498,	// (0x0006e16a) main_vded2_pane_g1_ParamLimits

0x9498,	// (0x0006e16a) main_vded2_pane_g1

0x94ae,	// (0x0006e180) main_vded2_pane_g2_ParamLimits

0x94ae,	// (0x0006e180) main_vded2_pane_g2

0x0001,

0xfb43,	// (0x00074815) main_vded2_pane_g_ParamLimits

0xfb43,	// (0x00074815) main_vded2_pane_g

0x94be,	// (0x0006e190) vded2_slider_pane_ParamLimits

0x94be,	// (0x0006e190) vded2_slider_pane

0x94d1,	// (0x0006e1a3) aid_size_touch_vded2_end

0x94d9,	// (0x0006e1ab) aid_size_touch_vded2_playhead

0x94e1,	// (0x0006e1b3) aid_size_touch_vded2_start

0x94e9,	// (0x0006e1bb) vded2_slider_bg_pane

0x94f2,	// (0x0006e1c4) vded2_slider_pane_g1

0x94fb,	// (0x0006e1cd) vded2_slider_pane_g2

0x9503,	// (0x0006e1d5) vded2_slider_pane_g3

0x0002,

0xfb48,	// (0x0007481a) vded2_slider_pane_g

0x950c,	// (0x0006e1de) vded2_slider_bg_pane_g1

0x9515,	// (0x0006e1e7) vded2_slider_bg_pane_g2

0x951e,	// (0x0006e1f0) vded2_slider_bg_pane_g3

0x0002,

0xfb4f,	// (0x00074821) vded2_slider_bg_pane_g

0x5a20,	// (0x0006a6f2) aid_postcard_touch_down_pane_ParamLimits

0x5a20,	// (0x0006a6f2) aid_postcard_touch_down_pane

0x5a32,	// (0x0006a704) aid_postcard_touch_up_pane_ParamLimits

0x5a32,	// (0x0006a704) aid_postcard_touch_up_pane

0xa57a,	// (0x0006f24c) main_blid2_pane

0xc1f1,	// (0x00070ec3) popup_blid2_search_window

0xa57a,	// (0x0006f24c) blid2_gps_pane

0xa57a,	// (0x0006f24c) blid2_navig_pane

0xa57a,	// (0x0006f24c) blid2_search_pane

0xa57a,	// (0x0006f24c) blid2_tripm_pane

0x9527,	// (0x0006e1f9) blid2_search_pane_g1_ParamLimits

0x9527,	// (0x0006e1f9) blid2_search_pane_g1

0x953b,	// (0x0006e20d) blid2_search_pane_t1_ParamLimits

0x953b,	// (0x0006e20d) blid2_search_pane_t1

0x954d,	// (0x0006e21f) aid_size_cell_blid2_gps_ParamLimits

0x954d,	// (0x0006e21f) aid_size_cell_blid2_gps

0x9565,	// (0x0006e237) blid2_gps_pane_g1_ParamLimits

0x9565,	// (0x0006e237) blid2_gps_pane_g1

0x9579,	// (0x0006e24b) grid_blid2_satellite_pane_ParamLimits

0x9579,	// (0x0006e24b) grid_blid2_satellite_pane

0x958d,	// (0x0006e25f) blid2_navig_pane_g1_ParamLimits

0x958d,	// (0x0006e25f) blid2_navig_pane_g1

0x9599,	// (0x0006e26b) blid2_navig_pane_t1_ParamLimits

0x9599,	// (0x0006e26b) blid2_navig_pane_t1

0x95b2,	// (0x0006e284) blid2_navig_pane_t2_ParamLimits

0x95b2,	// (0x0006e284) blid2_navig_pane_t2

0x0001,

0xfb56,	// (0x00074828) blid2_navig_pane_t_ParamLimits

0xfb56,	// (0x00074828) blid2_navig_pane_t

0x95cb,	// (0x0006e29d) blid2_navig_ring_pane_ParamLimits

0x95cb,	// (0x0006e29d) blid2_navig_ring_pane

0x95e0,	// (0x0006e2b2) blid2_speed_pane_ParamLimits

0x95e0,	// (0x0006e2b2) blid2_speed_pane

0x95ec,	// (0x0006e2be) blid2_tripm_pane_g1_ParamLimits

0x95ec,	// (0x0006e2be) blid2_tripm_pane_g1

0x9601,	// (0x0006e2d3) blid2_tripm_pane_g2_ParamLimits

0x9601,	// (0x0006e2d3) blid2_tripm_pane_g2

0x9615,	// (0x0006e2e7) blid2_tripm_pane_g3_ParamLimits

0x9615,	// (0x0006e2e7) blid2_tripm_pane_g3

0x9629,	// (0x0006e2fb) blid2_tripm_pane_g4_ParamLimits

0x9629,	// (0x0006e2fb) blid2_tripm_pane_g4

0x963d,	// (0x0006e30f) blid2_tripm_pane_g5_ParamLimits

0x963d,	// (0x0006e30f) blid2_tripm_pane_g5

0x0005,

0xfb5b,	// (0x0007482d) blid2_tripm_pane_g_ParamLimits

0xfb5b,	// (0x0007482d) blid2_tripm_pane_g

0x965f,	// (0x0006e331) blid2_tripm_pane_t1_ParamLimits

0x965f,	// (0x0006e331) blid2_tripm_pane_t1

0x9676,	// (0x0006e348) blid2_tripm_pane_t2_ParamLimits

0x9676,	// (0x0006e348) blid2_tripm_pane_t2

0x968d,	// (0x0006e35f) blid2_tripm_pane_t3_ParamLimits

0x968d,	// (0x0006e35f) blid2_tripm_pane_t3

0x0003,

0xfb68,	// (0x0007483a) blid2_tripm_pane_t_ParamLimits

0xfb68,	// (0x0007483a) blid2_tripm_pane_t

0x96d0,	// (0x0006e3a2) cell_blid2_satellite_pane_ParamLimits

0x96d0,	// (0x0006e3a2) cell_blid2_satellite_pane

0x96e8,	// (0x0006e3ba) cell_blid2_satellite_pane_g1

0xd647,	// (0x00072319) cell_blid2_satellite_pane_t1

0xc61e,	// (0x000712f0) blid2_speed_pane_g1

0xd655,	// (0x00072327) blid2_speed_pane_t1

0xd663,	// (0x00072335) blid2_speed_pane_t2

0x0001,

0xfb71,	// (0x00074843) blid2_speed_pane_t

0xc61e,	// (0x000712f0) blid2_navig_ring_pane_g1

0x96f1,	// (0x0006e3c3) blid2_navig_ring_pane_g2

0x96f9,	// (0x0006e3cb) blid2_navig_ring_pane_g3

0x9701,	// (0x0006e3d3) blid2_navig_ring_pane_g4

0x9709,	// (0x0006e3db) blid2_navig_ring_pane_g5

0x0004,

0xfb76,	// (0x00074848) blid2_navig_ring_pane_g

0xa57a,	// (0x0006f24c) bg_popup_window_pane_cp011

0xd671,	// (0x00072343) popup_blid2_search_window_g1

0xd679,	// (0x0007234b) popup_blid2_search_window_t1

0xd687,	// (0x00072359) popup_blid2_search_window_t2

0x0001,

0xfb81,	// (0x00074853) popup_blid2_search_window_t

0xeb4d,	// (0x0007381f) main_browser_pane_g1

0xad32,	// (0x0006fa04) main_browser_pane_ParamLimits

0xea7f,	// (0x00073751) bg_button_pane_cp011_ParamLimits

0x8935,	// (0x0006d607) cell_vitu2_function_pane_g1_ParamLimits

0xea7f,	// (0x00073751) bg_popup_sub_pane_cp22_ParamLimits

0x28ce,	// (0x000675a0) input_focus_pane_cp08_ParamLimits

0x9181,	// (0x0006de53) popup_vitu2_query_button_pane_ParamLimits

0x9181,	// (0x0006de53) popup_vitu2_query_button_pane

0x28c6,	// (0x00067598) popup_vitu2_query_input_button_pane

0xd27a,	// (0x00071f4c) popup_vitu2_query_window_g1_ParamLimits

0x28db,	// (0x000675ad) popup_vitu2_query_window_g2_ParamLimits

0xfa88,	// (0x0007475a) popup_vitu2_query_window_g_ParamLimits

0xa57a,	// (0x0006f24c) bg_button_pane_cp026

0x9711,	// (0x0006e3e3) popup_vitu2_query_input_button_pane_g1

0xa57a,	// (0x0006f24c) bg_button_pane_cp025

0xd695,	// (0x00072367) popup_vitu2_query_button_pane_t1

0x712d,	// (0x0006bdff) main_mp3_pane_t6

0x713b,	// (0x0006be0d) popup_slider_window_cp01

0xf01d,	// (0x00073cef) cam4_battery_pane

0xf01d,	// (0x00073cef) cam4_battery_pane_cp02

0xf01d,	// (0x00073cef) cam4_battery_pane_cp01

0xf01d,	// (0x00073cef) cam4_battery_pane_cp03

0xc61e,	// (0x000712f0) cam4_battery_pane_g1

0xd6a3,	// (0x00072375) cam4_battery_pane_g2

0x0001,

0xfb86,	// (0x00074858) cam4_battery_pane_g

0xc4f0,	// (0x000711c2) popup_blid_sat_info2_window_t11

0x5296,	// (0x00069f68) aid_size_touch_mv_arrow_left_ParamLimits

0x52af,	// (0x00069f81) aid_size_touch_mv_arrow_right_ParamLimits

0x52e7,	// (0x00069fb9) navi_pane_g1_ParamLimits

0x52f3,	// (0x00069fc5) navi_pane_g2_ParamLimits

0x5311,	// (0x00069fe3) navi_pane_g3_ParamLimits

0xf44c,	// (0x0007411e) navi_pane_g_ParamLimits

0x53cb,	// (0x0006a09d) navi_pane_mv_t1_ParamLimits

0x7c87,	// (0x0006c959) grid_imed_effect_pane_ParamLimits

0xb129,	// (0x0006fdfb) aid_placing_vt_slider_lsc

0xb131,	// (0x0006fe03) aid_placing_vt_slider_prt

0xea7f,	// (0x00073751) bg_tb_trans_pane_cp01_ParamLimits

0xc76d,	// (0x0007143f) popup_image_details_window_g1_ParamLimits

0xc780,	// (0x00071452) popup_image_details_window_g2_ParamLimits

0xc795,	// (0x00071467) popup_image_details_window_g3_ParamLimits

0xc795,	// (0x00071467) popup_image_details_window_g3

0xf792,	// (0x00074464) popup_image_details_window_g_ParamLimits

0xc7a9,	// (0x0007147b) popup_image_details_window_t1_ParamLimits

0xc7bb,	// (0x0007148d) popup_image_details_window_t2_ParamLimits

0xc7d4,	// (0x000714a6) popup_image_details_window_t3_ParamLimits

0xc7e8,	// (0x000714ba) popup_image_details_window_t4_ParamLimits

0xc803,	// (0x000714d5) popup_image_details_window_t5_ParamLimits

0xf799,	// (0x0007446b) popup_image_details_window_t_ParamLimits

0x938d,	// (0x0006e05f) cl_header_name_pane_ParamLimits

0x938d,	// (0x0006e05f) cl_header_name_pane

0x9719,	// (0x0006e3eb) cl_header_name_pane_t1_ParamLimits

0x9719,	// (0x0006e3eb) cl_header_name_pane_t1

0x973a,	// (0x0006e40c) cl_header_name_pane_t2_ParamLimits

0x973a,	// (0x0006e40c) cl_header_name_pane_t2

0x977c,	// (0x0006e44e) cl_header_name_pane_t3_ParamLimits

0x977c,	// (0x0006e44e) cl_header_name_pane_t3

0x0002,

0xfb8b,	// (0x0007485d) cl_header_name_pane_t_ParamLimits

0xfb8b,	// (0x0007485d) cl_header_name_pane_t

0x539a,	// (0x0006a06c) navi_pane_mv_g2_ParamLimits

0xcf78,	// (0x00071c4a) field_vitu2_entry_pane_g1_ParamLimits

0xcf84,	// (0x00071c56) field_vitu2_entry_pane_g2_ParamLimits

0xcf90,	// (0x00071c62) field_vitu2_entry_pane_g3_ParamLimits

0xcf90,	// (0x00071c62) field_vitu2_entry_pane_g3

0xf987,	// (0x00074659) field_vitu2_entry_pane_g_ParamLimits

0x88b1,	// (0x0006d583) cell_vitu2_itu_pane_g1_ParamLimits

0x88c1,	// (0x0006d593) cell_vitu2_itu_pane_g2_ParamLimits

0x88c1,	// (0x0006d593) cell_vitu2_itu_pane_g2

0x0001,

0xf993,	// (0x00074665) cell_vitu2_itu_pane_g_ParamLimits

0xf993,	// (0x00074665) cell_vitu2_itu_pane_g

0xea7f,	// (0x00073751) bg_vkb2_func_pane_cp05_ParamLimits

0xea7f,	// (0x00073751) bg_vkb2_func_pane_cp05

0xea7f,	// (0x00073751) bg_vkb2_func_pane_cp03

0xea7f,	// (0x00073751) bg_vkb2_func_pane_cp04

0xea7f,	// (0x00073751) bg_vkb2_func_pane_cp10_ParamLimits

0xea7f,	// (0x00073751) bg_vkb2_func_pane_cp10

0x2980,	// (0x00067652) bg_vkb2_func_pane_cp08

0x9338,	// (0x0006e00a) bg_vkb2_func_pane_cp06

0x9345,	// (0x0006e017) bg_vkb2_func_pane_cp07

0xd5da,	// (0x000722ac) bg_vkb2_func_pane_cp11_ParamLimits

0xd5da,	// (0x000722ac) bg_vkb2_func_pane_cp11

0xd5ef,	// (0x000722c1) bg_vkb2_func_pane_cp12_ParamLimits

0xd5ef,	// (0x000722c1) bg_vkb2_func_pane_cp12

0xa57a,	// (0x0006f24c) bg_vkb2_func_pane_cp09

0xcfe8,	// (0x00071cba) bg_vkb2_func_pane_g1

0x40c4,	// (0x00068d96) bg_vkb2_func_pane_g2

0xcff0,	// (0x00071cc2) bg_vkb2_func_pane_g3

0xcff8,	// (0x00071cca) bg_vkb2_func_pane_g4

0xd23d,	// (0x00071f0f) bg_vkb2_func_pane_g5

0xd010,	// (0x00071ce2) bg_vkb2_func_pane_g6

0xd018,	// (0x00071cea) bg_vkb2_func_pane_g7

0xd008,	// (0x00071cda) bg_vkb2_func_pane_g8

0x40a4,	// (0x00068d76) bg_vkb2_func_pane_g9

0x0008,

0xfb92,	// (0x00074864) bg_vkb2_func_pane_g

0x964f,	// (0x0006e321) blid2_tripm_pane_g6_ParamLimits

0x964f,	// (0x0006e321) blid2_tripm_pane_g6

0xce3c,	// (0x00071b0e) mp4_progress_pane_g1

0x96be,	// (0x0006e390) blid2_tripm_values_pane_ParamLimits

0x96be,	// (0x0006e390) blid2_tripm_values_pane

0x97ad,	// (0x0006e47f) blid2_tripm_values_pane_t1

0x97bb,	// (0x0006e48d) blid2_tripm_values_pane_t2

0x97c9,	// (0x0006e49b) blid2_tripm_values_pane_t3

0x97d7,	// (0x0006e4a9) blid2_tripm_values_pane_t4

0x97e5,	// (0x0006e4b7) blid2_tripm_values_pane_t5

0x97f3,	// (0x0006e4c5) blid2_tripm_values_pane_t6

0x9801,	// (0x0006e4d3) blid2_tripm_values_pane_t7

0x980f,	// (0x0006e4e1) blid2_tripm_values_pane_t8

0x981d,	// (0x0006e4ef) blid2_tripm_values_pane_t9

0x0008,

0xfba5,	// (0x00074877) blid2_tripm_values_pane_t

0x3d81,	// (0x00068a53) call_video_pane_t1_ParamLimits

0x3d93,	// (0x00068a65) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x00073fa7) call_video_pane_t_ParamLimits

0x273f,	// (0x00067411) msg_header_pane_g1_ParamLimits

0x5992,	// (0x0006a664) msg_header_pane_g2_ParamLimits

0x5992,	// (0x0006a664) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x000741c1) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x000741c1) msg_header_pane_g

0xad32,	// (0x0006fa04) main_clock2_pane_ParamLimits

0x79c6,	// (0x0006c698) grid_clock2_toolbar_pane_ParamLimits

0x79c6,	// (0x0006c698) grid_clock2_toolbar_pane

0x79c6,	// (0x0006c698) listscroll_clock2_pane_ParamLimits

0x79c6,	// (0x0006c698) listscroll_clock2_pane

0x7a95,	// (0x0006c767) main_clock2_pane_t3_ParamLimits

0x7a95,	// (0x0006c767) main_clock2_pane_t3

0x7aae,	// (0x0006c780) main_clock2_pane_t4_ParamLimits

0x7aae,	// (0x0006c780) main_clock2_pane_t4

0xd6ad,	// (0x0007237f) cell_clock2_toolbar_pane

0xd6b5,	// (0x00072387) cell_clock2_toolbar_pane_cp01

0xd6b5,	// (0x00072387) cell_clock2_toolbar_pane_cp02

0xd6bd,	// (0x0007238f) cell_clock2_toolbar_pane_cp03

0xd6c5,	// (0x00072397) list_clock2_pane

0x5028,	// (0x00069cfa) scroll_pane_cp10

0xd6cd,	// (0x0007239f) list_single_clock2_pane_ParamLimits

0xd6cd,	// (0x0007239f) list_single_clock2_pane

0x5439,	// (0x0006a10b) list_highlight_pane_cp08

0xd6da,	// (0x000723ac) list_single_clock2_pane_t1

0xd6e8,	// (0x000723ba) list_single_clock2_pane_t2

0x0001,

0xfbb8,	// (0x0007488a) list_single_clock2_pane_t

0xa57a,	// (0x0006f24c) bg_button_pane_cp10

0xd6f6,	// (0x000723c8) cell_clock2_toolbar_pane_g1

0x59a6,	// (0x0006a678) aid_main_viewer_pane_g1_ParamLimits

0x59a6,	// (0x0006a678) aid_main_viewer_pane_g1

0x59b2,	// (0x0006a684) aid_main_viewer_pane_g2_ParamLimits

0x59b2,	// (0x0006a684) aid_main_viewer_pane_g2

0x59be,	// (0x0006a690) aid_main_viewer_pane_g3_ParamLimits

0x59be,	// (0x0006a690) aid_main_viewer_pane_g3

0x59cd,	// (0x0006a69f) aid_main_viewer_pane_g4_ParamLimits

0x59cd,	// (0x0006a69f) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x000741d2) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x000741d2) aid_main_viewer_pane_g

0xea7f,	// (0x00073751) main_calc_pane_ParamLimits

0x6489,	// (0x0006b15b) main_dialer2_pane_ParamLimits

0xa57a,	// (0x0006f24c) main_cam6_pane

0xa57a,	// (0x0006f24c) main_vid6_pane

0x79d2,	// (0x0006c6a4) listscroll_gen_pane_cp06_ParamLimits

0x79d2,	// (0x0006c6a4) listscroll_gen_pane_cp06

0x7ac7,	// (0x0006c799) main_clock2_pane_t5_ParamLimits

0x7ac7,	// (0x0006c799) main_clock2_pane_t5

0x7b1c,	// (0x0006c7ee) aid_call2_pane_cp10_ParamLimits

0x7b2e,	// (0x0006c800) aid_call_pane_cp10_ParamLimits

0x5225,	// (0x00069ef7) popup_clock_analogue_window_cp10_g1_ParamLimits

0x5225,	// (0x00069ef7) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7b40,	// (0x0006c812) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7b40,	// (0x0006c812) popup_clock_analogue_window_cp10_g4_ParamLimits

0x5225,	// (0x00069ef7) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf849,	// (0x0007451b) popup_clock_analogue_window_cp10_g_ParamLimits

0x7b52,	// (0x0006c824) popup_clock_analogue_window_cp10_t1_ParamLimits

0xce9c,	// (0x00071b6e) cell_dialer2_keypad_pane_g2_ParamLimits

0xce9c,	// (0x00071b6e) cell_dialer2_keypad_pane_g2

0x0001,

0xf92f,	// (0x00074601) cell_dialer2_keypad_pane_g_ParamLimits

0xf92f,	// (0x00074601) cell_dialer2_keypad_pane_g

0x8161,	// (0x0006ce33) cell_dialer2_keypad_pane_t1

0x8bff,	// (0x0006d8d1) main_cset_text2_pane_ParamLimits

0x8bff,	// (0x0006d8d1) main_cset_text2_pane

0xd454,	// (0x00072126) area_vitu2_query_pane_g1_ParamLimits

0x2949,	// (0x0006761b) area_vitu2_query_pane_g2_ParamLimits

0xfad5,	// (0x000747a7) area_vitu2_query_pane_g_ParamLimits

0xd4d8,	// (0x000721aa) area_vitu2_query_pane_t7_ParamLimits

0xd4d8,	// (0x000721aa) area_vitu2_query_pane_t7

0x9338,	// (0x0006e00a) bg_button_pane_cp018_ParamLimits

0x9345,	// (0x0006e017) bg_button_pane_cp021_ParamLimits

0x2980,	// (0x00067652) bg_button_pane_cp022_ParamLimits

0x2980,	// (0x00067652) bg_vkb2_func_pane_cp08_ParamLimits

0x9338,	// (0x0006e00a) bg_vkb2_func_pane_cp06_ParamLimits

0x9345,	// (0x0006e017) bg_vkb2_func_pane_cp07_ParamLimits

0x298f,	// (0x00067661) input_focus_pane_cp09_ParamLimits

0xf123,	// (0x00073df5) cam6_autofocus_pane_ParamLimits

0xf123,	// (0x00073df5) cam6_autofocus_pane

0x982b,	// (0x0006e4fd) cam6_image_uncrop_pane_ParamLimits

0x982b,	// (0x0006e4fd) cam6_image_uncrop_pane

0x9838,	// (0x0006e50a) cam6_indi_pane_ParamLimits

0x9838,	// (0x0006e50a) cam6_indi_pane

0x984e,	// (0x0006e520) cam6_mode_pane_ParamLimits

0x984e,	// (0x0006e520) cam6_mode_pane

0x9860,	// (0x0006e532) cam6_timer_pane_ParamLimits

0x9860,	// (0x0006e532) cam6_timer_pane

0x986c,	// (0x0006e53e) cam6_zoom_pane_ParamLimits

0x986c,	// (0x0006e53e) cam6_zoom_pane

0x9878,	// (0x0006e54a) cam6_mode_pane_g1_ParamLimits

0x9878,	// (0x0006e54a) cam6_mode_pane_g1

0x9888,	// (0x0006e55a) cam6_mode_pane_g2_ParamLimits

0x9888,	// (0x0006e55a) cam6_mode_pane_g2

0x9898,	// (0x0006e56a) cam6_mode_pane_g3_ParamLimits

0x9898,	// (0x0006e56a) cam6_mode_pane_g3

0x98a8,	// (0x0006e57a) cam6_mode_pane_g4_ParamLimits

0x98a8,	// (0x0006e57a) cam6_mode_pane_g4

0x0003,

0xfbbd,	// (0x0007488f) cam6_mode_pane_g_ParamLimits

0xfbbd,	// (0x0007488f) cam6_mode_pane_g

0xd6fe,	// (0x000723d0) bg_tb_trans_pane_cp08_ParamLimits

0xd6fe,	// (0x000723d0) bg_tb_trans_pane_cp08

0xd70c,	// (0x000723de) cam6_battery_pane_ParamLimits

0xd70c,	// (0x000723de) cam6_battery_pane

0xd722,	// (0x000723f4) cam6_indi_pane_g1_ParamLimits

0xd722,	// (0x000723f4) cam6_indi_pane_g1

0xd734,	// (0x00072406) cam6_indi_pane_g2_ParamLimits

0xd734,	// (0x00072406) cam6_indi_pane_g2

0xd746,	// (0x00072418) cam6_indi_pane_g3_ParamLimits

0xd746,	// (0x00072418) cam6_indi_pane_g3

0x0002,

0xfbc6,	// (0x00074898) cam6_indi_pane_g_ParamLimits

0xfbc6,	// (0x00074898) cam6_indi_pane_g

0xd758,	// (0x0007242a) cam6_indi_pane_t1_ParamLimits

0xd758,	// (0x0007242a) cam6_indi_pane_t1

0x86e2,	// (0x0006d3b4) cam6_autofocus_pane_g1

0x86ea,	// (0x0006d3bc) cam6_autofocus_pane_g2

0x86f2,	// (0x0006d3c4) cam6_autofocus_pane_g3

0x86fa,	// (0x0006d3cc) cam6_autofocus_pane_g4

0x0003,

0xfbcd,	// (0x0007489f) cam6_autofocus_pane_g

0xd77e,	// (0x00072450) cam6_timer_pane_g1

0xd786,	// (0x00072458) cam6_timer_pane_t1

0xd794,	// (0x00072466) cam6_zoom_cont_pane

0xd79c,	// (0x0007246e) cam6_zoom_pane_g1

0xd7a4,	// (0x00072476) cam6_zoom_pane_g2

0x98b8,	// (0x0006e58a) cam6_zoom_pane_g3

0x0002,

0xfbd6,	// (0x000748a8) cam6_zoom_pane_g

0xc61e,	// (0x000712f0) cam6_battery_pane_g1

0xc61e,	// (0x000712f0) cam6_battery_pane_g2

0x0001,

0xf756,	// (0x00074428) cam6_battery_pane_g

0xd7ac,	// (0x0007247e) cam6_zoom_cont_pane_g1

0xd7b5,	// (0x00072487) cam6_zoom_cont_pane_g2

0xd7be,	// (0x00072490) cam6_zoom_cont_pane_g3

0x0002,

0xfbdd,	// (0x000748af) cam6_zoom_cont_pane_g

0x98d5,	// (0x0006e5a7) cam6_mode_pane_cp_ParamLimits

0x98d5,	// (0x0006e5a7) cam6_mode_pane_cp

0x986c,	// (0x0006e53e) cam6_zoom_pane_cp_ParamLimits

0x986c,	// (0x0006e53e) cam6_zoom_pane_cp

0x98e7,	// (0x0006e5b9) vid6_image_uncrop_cif_pane_ParamLimits

0x98e7,	// (0x0006e5b9) vid6_image_uncrop_cif_pane

0x98f5,	// (0x0006e5c7) vid6_image_uncrop_nhd_pane_ParamLimits

0x98f5,	// (0x0006e5c7) vid6_image_uncrop_nhd_pane

0x982b,	// (0x0006e4fd) vid6_image_uncrop_vga_pane_ParamLimits

0x982b,	// (0x0006e4fd) vid6_image_uncrop_vga_pane

0x9902,	// (0x0006e5d4) vid6_image_uncrop_wvga_pane_ParamLimits

0x9902,	// (0x0006e5d4) vid6_image_uncrop_wvga_pane

0x990f,	// (0x0006e5e1) vid6_indi_pane_ParamLimits

0x990f,	// (0x0006e5e1) vid6_indi_pane

0xd6fe,	// (0x000723d0) bg_tb_trans_pane_cp09_ParamLimits

0xd6fe,	// (0x000723d0) bg_tb_trans_pane_cp09

0xd7d2,	// (0x000724a4) cam6_battery_pane_cp_ParamLimits

0xd7d2,	// (0x000724a4) cam6_battery_pane_cp

0xd7de,	// (0x000724b0) vid6_indi_pane_g1_ParamLimits

0xd7de,	// (0x000724b0) vid6_indi_pane_g1

0xd7f0,	// (0x000724c2) vid6_indi_pane_g2_ParamLimits

0xd7f0,	// (0x000724c2) vid6_indi_pane_g2

0xd802,	// (0x000724d4) vid6_indi_pane_g3_ParamLimits

0xd802,	// (0x000724d4) vid6_indi_pane_g3

0xd817,	// (0x000724e9) vid6_indi_pane_g4_ParamLimits

0xd817,	// (0x000724e9) vid6_indi_pane_g4

0xd82c,	// (0x000724fe) vid6_indi_pane_g5_ParamLimits

0xd82c,	// (0x000724fe) vid6_indi_pane_g5

0x0004,

0xfbe4,	// (0x000748b6) vid6_indi_pane_g_ParamLimits

0xfbe4,	// (0x000748b6) vid6_indi_pane_g

0xd846,	// (0x00072518) vid6_indi_pane_t1_ParamLimits

0xd846,	// (0x00072518) vid6_indi_pane_t1

0xd85c,	// (0x0007252e) vid6_indi_pane_t2_ParamLimits

0xd85c,	// (0x0007252e) vid6_indi_pane_t2

0xd884,	// (0x00072556) vid6_indi_pane_t3_ParamLimits

0xd884,	// (0x00072556) vid6_indi_pane_t3

0xd8ac,	// (0x0007257e) vid6_indi_pane_t4_ParamLimits

0xd8ac,	// (0x0007257e) vid6_indi_pane_t4

0x0003,

0xfbef,	// (0x000748c1) vid6_indi_pane_t_ParamLimits

0xfbef,	// (0x000748c1) vid6_indi_pane_t

0xd8d0,	// (0x000725a2) wait_bar_pane_cp08

0x9926,	// (0x0006e5f8) main_cset_text2_pane_t1_ParamLimits

0x9926,	// (0x0006e5f8) main_cset_text2_pane_t1

0x98c0,	// (0x0006e592) listscroll_gen_pane_cp06_t1_ParamLimits

0x98c0,	// (0x0006e592) listscroll_gen_pane_cp06_t1

0xa57a,	// (0x0006f24c) main_cam6_set_pane

0xc8de,	// (0x000715b0) bg_tb_trans_pane_cp06_ParamLimits

0x85b6,	// (0x0006d288) cam4_indicators_pane_g1_ParamLimits

0x85c3,	// (0x0006d295) cam4_indicators_pane_g2_ParamLimits

0xf963,	// (0x00074635) cam4_indicators_pane_g_ParamLimits

0x85db,	// (0x0006d2ad) cam4_indicators_pane_t1_ParamLimits

0xcf51,	// (0x00071c23) bg_tb_trans_pane_cp07_ParamLimits

0x85b6,	// (0x0006d288) vid4_indicators_pane_g1_ParamLimits

0x86aa,	// (0x0006d37c) vid4_indicators_pane_g2_ParamLimits

0x86b7,	// (0x0006d389) vid4_indicators_pane_g3_ParamLimits

0x86c4,	// (0x0006d396) vid4_indicators_pane_g4_ParamLimits

0xf975,	// (0x00074647) vid4_indicators_pane_g_ParamLimits

0x86d0,	// (0x0006d3a2) vid4_indicators_pane_t1_ParamLimits

0xf089,	// (0x00073d5b) vid4_progress_pane_g1_ParamLimits

0xf098,	// (0x00073d6a) vid4_progress_pane_g2_ParamLimits

0xf0a7,	// (0x00073d79) vid4_progress_pane_g3_ParamLimits

0xf0b6,	// (0x00073d88) vid4_progress_pane_g4_ParamLimits

0xfb20,	// (0x000747f2) vid4_progress_pane_g_ParamLimits

0xf0c2,	// (0x00073d94) vid4_progress_pane_t1_ParamLimits

0xf0d8,	// (0x00073daa) vid4_progress_pane_t2_ParamLimits

0xf0ed,	// (0x00073dbf) vid4_progress_pane_t3_ParamLimits

0xfb2b,	// (0x000747fd) vid4_progress_pane_t_ParamLimits

0xf102,	// (0x00073dd4) wait_bar_pane_cp07_ParamLimits

0x9940,	// (0x0006e612) main_cam6_set_pane_g2_ParamLimits

0x9940,	// (0x0006e612) main_cam6_set_pane_g2

0x9962,	// (0x0006e634) main_cset6_listscroll_pane_ParamLimits

0x9962,	// (0x0006e634) main_cset6_listscroll_pane

0x997c,	// (0x0006e64e) main_cset6_slider_pane_ParamLimits

0x997c,	// (0x0006e64e) main_cset6_slider_pane

0x9992,	// (0x0006e664) main_cset6_text2_pane_ParamLimits

0x9992,	// (0x0006e664) main_cset6_text2_pane

0xd8e0,	// (0x000725b2) main_cset6_text_pane

0xd0de,	// (0x00071db0) main_cset_list_pane_copy1_ParamLimits

0xd0de,	// (0x00071db0) main_cset_list_pane_copy1

0xd0ee,	// (0x00071dc0) scroll_pane_cp028_copy1

0x99a0,	// (0x0006e672) cset_list_set_pane_copy1

0x99b2,	// (0x0006e684) aid_position_infowindow_above_copy1

0x99ba,	// (0x0006e68c) aid_position_infowindow_below_copy1

0x99c2,	// (0x0006e694) cset_list_set_pane_g1_copy1

0x299e,	// (0x00067670) cset_list_set_pane_g3_copy1_ParamLimits

0x299e,	// (0x00067670) cset_list_set_pane_g3_copy1

0x29ad,	// (0x0006767f) cset_list_set_pane_t1_copy1_ParamLimits

0x29ad,	// (0x0006767f) cset_list_set_pane_t1_copy1

0xea7f,	// (0x00073751) list_highlight_pane_cp021_copy1_ParamLimits

0xea7f,	// (0x00073751) list_highlight_pane_cp021_copy1

0xd8e8,	// (0x000725ba) cset6_slider_pane_ParamLimits

0xd8e8,	// (0x000725ba) cset6_slider_pane

0xd914,	// (0x000725e6) main_cset6_slider_pane_g1_ParamLimits

0xd914,	// (0x000725e6) main_cset6_slider_pane_g1

0x99ca,	// (0x0006e69c) main_cset6_slider_pane_g2_ParamLimits

0x99ca,	// (0x0006e69c) main_cset6_slider_pane_g2

0xd103,	// (0x00071dd5) main_cset6_slider_pane_g3_ParamLimits

0xd103,	// (0x00071dd5) main_cset6_slider_pane_g3

0x8cc4,	// (0x0006d996) main_cset6_slider_pane_g4_ParamLimits

0x8cc4,	// (0x0006d996) main_cset6_slider_pane_g4

0x8d0c,	// (0x0006d9de) main_cset6_slider_pane_g5_ParamLimits

0x8d0c,	// (0x0006d9de) main_cset6_slider_pane_g5

0xd103,	// (0x00071dd5) main_cset6_slider_pane_g7_ParamLimits

0xd103,	// (0x00071dd5) main_cset6_slider_pane_g7

0xd10f,	// (0x00071de1) main_cset6_slider_pane_g8_ParamLimits

0xd10f,	// (0x00071de1) main_cset6_slider_pane_g8

0x8cac,	// (0x0006d97e) main_cset6_slider_pane_g9_ParamLimits

0x8cac,	// (0x0006d97e) main_cset6_slider_pane_g9

0x8cb8,	// (0x0006d98a) main_cset6_slider_pane_g10_ParamLimits

0x8cb8,	// (0x0006d98a) main_cset6_slider_pane_g10

0x8cc4,	// (0x0006d996) main_cset6_slider_pane_g11_ParamLimits

0x8cc4,	// (0x0006d996) main_cset6_slider_pane_g11

0x8cd0,	// (0x0006d9a2) main_cset6_slider_pane_g12_ParamLimits

0x8cd0,	// (0x0006d9a2) main_cset6_slider_pane_g12

0x8cdc,	// (0x0006d9ae) main_cset6_slider_pane_g13_ParamLimits

0x8cdc,	// (0x0006d9ae) main_cset6_slider_pane_g13

0x8ce8,	// (0x0006d9ba) main_cset6_slider_pane_g14_ParamLimits

0x8ce8,	// (0x0006d9ba) main_cset6_slider_pane_g14

0x99f2,	// (0x0006e6c4) main_cset6_slider_pane_g15_ParamLimits

0x99f2,	// (0x0006e6c4) main_cset6_slider_pane_g15

0x8d0c,	// (0x0006d9de) main_cset6_slider_pane_g16_ParamLimits

0x8d0c,	// (0x0006d9de) main_cset6_slider_pane_g16

0x8d18,	// (0x0006d9ea) main_cset6_slider_pane_g17_ParamLimits

0x8d18,	// (0x0006d9ea) main_cset6_slider_pane_g17

0x0011,

0xfbf8,	// (0x000748ca) main_cset6_slider_pane_g_ParamLimits

0xfbf8,	// (0x000748ca) main_cset6_slider_pane_g

0xd93c,	// (0x0007260e) main_cset6_slider_pane_t1_ParamLimits

0xd93c,	// (0x0007260e) main_cset6_slider_pane_t1

0xd97d,	// (0x0007264f) main_cset6_slider_pane_t2_ParamLimits

0xd97d,	// (0x0007264f) main_cset6_slider_pane_t2

0xd9a8,	// (0x0007267a) main_cset6_slider_pane_t3_ParamLimits

0xd9a8,	// (0x0007267a) main_cset6_slider_pane_t3

0x9a0a,	// (0x0006e6dc) main_cset6_slider_pane_t4_ParamLimits

0x9a0a,	// (0x0006e6dc) main_cset6_slider_pane_t4

0x9a35,	// (0x0006e707) main_cset6_slider_pane_t5_ParamLimits

0x9a35,	// (0x0006e707) main_cset6_slider_pane_t5

0xd9d3,	// (0x000726a5) main_cset6_slider_pane_t7_ParamLimits

0xd9d3,	// (0x000726a5) main_cset6_slider_pane_t7

0x9a60,	// (0x0006e732) main_cset6_slider_pane_t8_ParamLimits

0x9a60,	// (0x0006e732) main_cset6_slider_pane_t8

0x9a84,	// (0x0006e756) main_cset6_slider_pane_t9_ParamLimits

0x9a84,	// (0x0006e756) main_cset6_slider_pane_t9

0x9aa8,	// (0x0006e77a) main_cset6_slider_pane_t10_ParamLimits

0x9aa8,	// (0x0006e77a) main_cset6_slider_pane_t10

0x9acc,	// (0x0006e79e) main_cset6_slider_pane_t11_ParamLimits

0x9acc,	// (0x0006e79e) main_cset6_slider_pane_t11

0xda09,	// (0x000726db) main_cset6_slider_pane_t14_ParamLimits

0xda09,	// (0x000726db) main_cset6_slider_pane_t14

0xda42,	// (0x00072714) main_cset6_slider_pane_t15_ParamLimits

0xda42,	// (0x00072714) main_cset6_slider_pane_t15

0x000b,

0xfc1d,	// (0x000748ef) main_cset6_slider_pane_t_ParamLimits

0xfc1d,	// (0x000748ef) main_cset6_slider_pane_t

0xd1eb,	// (0x00071ebd) cset_slider_pane_g1_copy1

0xd1f4,	// (0x00071ec6) cset_slider_pane_g2_copy1

0xd1fd,	// (0x00071ecf) cset_slider_pane_g3_copy1

0xa57a,	// (0x0006f24c) bg_popup_sub_pane_cp011_copy1

0xd286,	// (0x00071f58) main_cset_text_pane_g1_copy1

0xd28e,	// (0x00071f60) main_cset_text_pane_t1_copy1

0xd29c,	// (0x00071f6e) main_cset_text_pane_t2_copy1

0xd2aa,	// (0x00071f7c) main_cset_text_pane_t3_copy1

0xd2b8,	// (0x00071f8a) main_cset_text_pane_t4_copy1

0xd2c6,	// (0x00071f98) main_cset_text_pane_t5_copy1

0xd2d4,	// (0x00071fa6) main_cset_text_pane_t6_copy1

0xd2e2,	// (0x00071fb4) main_cset_text_pane_t7_copy1

0x9af0,	// (0x0006e7c2) main_cset_text2_pane_t1_copy1

0xa57a,	// (0x0006f24c) main_ncimui_pane

0x6697,	// (0x0006b369) popup_query_ncimui_window_ParamLimits

0x6697,	// (0x0006b369) popup_query_ncimui_window

0xed7c,	// (0x00073a4e) field_cale_ev2_pane_g4_ParamLimits

0xed7c,	// (0x00073a4e) field_cale_ev2_pane_g4

0x8053,	// (0x0006cd25) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8053,	// (0x0006cd25) cell_video_dialer_keypad_pane_g2

0x0001,

0xf90a,	// (0x000745dc) cell_video_dialer_keypad_pane_g_ParamLimits

0xf90a,	// (0x000745dc) cell_video_dialer_keypad_pane_g

0x806b,	// (0x0006cd3d) cell_video_dialer_keypad_pane_t1

0xa57a,	// (0x0006f24c) bg_popup_window_pane_cp012

0x4e90,	// (0x00069b62) heading_pane_cp06

0xdb64,	// (0x00072836) ncim_query_content_pane

0xa57a,	// (0x0006f24c) bg_popup_heading_pane_cp01

0xdb6c,	// (0x0007283e) ncim_heading_pane_t1

0xdb7a,	// (0x0007284c) ncim_indicator_popup_pane

0xdb8c,	// (0x0007285e) ncim_query_button_pane

0xdba0,	// (0x00072872) ncim_query_content_pane_t1

0xdbb2,	// (0x00072884) ncim_query_content_pane_t2

0x0005,

0xfc5c,	// (0x0007492e) ncim_query_content_pane_t

0xdbec,	// (0x000728be) ncim_query_list_pane

0xdbfe,	// (0x000728d0) ncim_query_popup_pane

0xdb7a,	// (0x0007284c) ncim_indicator_popup_pane_ParamLimits

0x9bd0,	// (0x0006e8a2) ncim_query_content_pane_g1_ParamLimits

0x9bd0,	// (0x0006e8a2) ncim_query_content_pane_g1

0xdba0,	// (0x00072872) ncim_query_content_pane_t1_ParamLimits

0xdbb2,	// (0x00072884) ncim_query_content_pane_t2_ParamLimits

0x9bdc,	// (0x0006e8ae) ncim_query_content_pane_t3_ParamLimits

0x9bdc,	// (0x0006e8ae) ncim_query_content_pane_t3

0x9c04,	// (0x0006e8d6) ncim_query_content_pane_t4_ParamLimits

0x9c04,	// (0x0006e8d6) ncim_query_content_pane_t4

0x9c2c,	// (0x0006e8fe) ncim_query_content_pane_t5_ParamLimits

0x9c2c,	// (0x0006e8fe) ncim_query_content_pane_t5

0xdbc4,	// (0x00072896) ncim_query_content_pane_t6_ParamLimits

0xdbc4,	// (0x00072896) ncim_query_content_pane_t6

0xfc5c,	// (0x0007492e) ncim_query_content_pane_t_ParamLimits

0xdbec,	// (0x000728be) ncim_query_list_pane_ParamLimits

0xdbfe,	// (0x000728d0) ncim_query_popup_pane_ParamLimits

0xdc12,	// (0x000728e4) wait_bar_pane_cp04

0xa57a,	// (0x0006f24c) input_focus_pane_cp011

0xdc1a,	// (0x000728ec) ncim_query_popup_pane_t1

0xdc28,	// (0x000728fa) ncim_list_query_list_pane_ParamLimits

0xdc28,	// (0x000728fa) ncim_list_query_list_pane

0xa57a,	// (0x0006f24c) bg_button_pane_cp027

0xdc3b,	// (0x0007290d) ncim_query_button_pane_g1

0xa57a,	// (0x0006f24c) list_highlight_pane_cp012

0xdc45,	// (0x00072917) ncim_list_query_list_pane_g1

0xdc4d,	// (0x0007291f) ncim_list_query_list_pane_t1

0x85cf,	// (0x0006d2a1) cam4_indicators_pane_g3_ParamLimits

0x85cf,	// (0x0006d2a1) cam4_indicators_pane_g3

0x85cf,	// (0x0006d2a1) vid4_indicators_pane_g5_ParamLimits

0x85cf,	// (0x0006d2a1) vid4_indicators_pane_g5

0x4bff,	// (0x000698d1) vid4_progress_pane_g5_ParamLimits

0x4bff,	// (0x000698d1) vid4_progress_pane_g5

0x9b1a,	// (0x0006e7ec) main_ncimui_pane_g1

0x9b60,	// (0x0006e832) ncimui_group_query_pane_ParamLimits

0x9b60,	// (0x0006e832) ncimui_group_query_pane

0x9b94,	// (0x0006e866) ncimui_list_pane_ParamLimits

0x9b94,	// (0x0006e866) ncimui_list_pane

0x9bac,	// (0x0006e87e) ncimui_text_pane_ParamLimits

0x9bac,	// (0x0006e87e) ncimui_text_pane

0x9c54,	// (0x0006e926) ncimui_text_pane_t1_ParamLimits

0x9c54,	// (0x0006e926) ncimui_text_pane_t1

0xdc5b,	// (0x0007292d) ncimui_list_single_graphic_pane_ParamLimits

0xdc5b,	// (0x0007292d) ncimui_list_single_graphic_pane

0x9c71,	// (0x0006e943) ncimui_query_pane_ParamLimits

0x9c71,	// (0x0006e943) ncimui_query_pane

0xa57a,	// (0x0006f24c) list_highlight_pane_cp013

0xdc68,	// (0x0007293a) ncim_list_query_list_pane_t1_copy1

0xdc76,	// (0x00072948) ncim_list_single_graphic_pane_g1

0xdc7e,	// (0x00072950) ncim_query_button_pane_cp01

0xdc86,	// (0x00072958) ncim_query_entry_pane_ParamLimits

0xdc86,	// (0x00072958) ncim_query_entry_pane

0xdc96,	// (0x00072968) ncimui_query_pane_g1

0xdc9e,	// (0x00072970) ncimui_query_pane_t1_ParamLimits

0xdc9e,	// (0x00072970) ncimui_query_pane_t1

0xa57a,	// (0x0006f24c) input_focus_pane_cp012

0xdc1a,	// (0x000728ec) ncim_query_entry_pane_t1

0xad32,	// (0x0006fa04) main_im_pane_ParamLimits

0xea7f,	// (0x00073751) main_mobtv_pane_ParamLimits

0xea7f,	// (0x00073751) main_mobtv_pane

0x8cac,	// (0x0006d97e) main_cset6_slider_pane_g18_ParamLimits

0x8cac,	// (0x0006d97e) main_cset6_slider_pane_g18

0x8cdc,	// (0x0006d9ae) main_cset6_slider_pane_g19_ParamLimits

0x8cdc,	// (0x0006d9ae) main_cset6_slider_pane_g19

0xdcb4,	// (0x00072986) bg_main_mobtv_pane_ParamLimits

0xdcb4,	// (0x00072986) bg_main_mobtv_pane

0x9c81,	// (0x0006e953) main_mobtv_info_pane

0x9c8a,	// (0x0006e95c) main_mobtv_loading_pane_ParamLimits

0x9c8a,	// (0x0006e95c) main_mobtv_loading_pane

0xdcc2,	// (0x00072994) main_mobtv_pg_channel_list_pane

0xdccc,	// (0x0007299e) main_mobtv_pg_hdr_pane

0x9c97,	// (0x0006e969) main_mobtv_programe_curr_pane_ParamLimits

0x9c97,	// (0x0006e969) main_mobtv_programe_curr_pane

0x9ca4,	// (0x0006e976) main_mobtv_programe_next_pane_ParamLimits

0x9ca4,	// (0x0006e976) main_mobtv_programe_next_pane

0xdcd5,	// (0x000729a7) popup_mobtv_noti_window

0xc61e,	// (0x000712f0) main_tv_pg_hdr_pane_g1

0xdcdd,	// (0x000729af) main_tv_pg_hdr_pane_g2

0xdce5,	// (0x000729b7) main_tv_pg_hdr_pane_g3

0xdced,	// (0x000729bf) main_tv_pg_hdr_pane_g4

0xdcf5,	// (0x000729c7) main_tv_pg_hdr_pane_g5

0xdcfd,	// (0x000729cf) main_tv_pg_hdr_pane_g6

0xdd05,	// (0x000729d7) main_tv_pg_hdr_pane_g7

0xdd0d,	// (0x000729df) main_tv_pg_hdr_pane_g8

0xdd15,	// (0x000729e7) main_tv_pg_hdr_pane_g9

0xdd1d,	// (0x000729ef) main_tv_pg_hdr_pane_g10

0xdd27,	// (0x000729f9) main_tv_pg_hdr_pane_g11

0x000a,

0xfc69,	// (0x0007493b) main_tv_pg_hdr_pane_g

0xdd31,	// (0x00072a03) main_tv_pg_hdr_pane_t1

0xdd3f,	// (0x00072a11) main_tv_pg_hdr_pane_t2

0xdd4d,	// (0x00072a1f) main_tv_pg_hdr_pane_t3

0xdd5b,	// (0x00072a2d) main_tv_pg_hdr_pane_t4

0xdd69,	// (0x00072a3b) main_tv_pg_hdr_pane_t5

0x0004,

0xfc80,	// (0x00074952) main_tv_pg_hdr_pane_t

0xdd77,	// (0x00072a49) single_mobtv_pg_channel_pane_ParamLimits

0xdd77,	// (0x00072a49) single_mobtv_pg_channel_pane

0xdd89,	// (0x00072a5b) single_mobtv_pg_channel_table_pane

0xdd92,	// (0x00072a64) single_mobtv_pg_channel_thumb_pane

0xdd9b,	// (0x00072a6d) single_tv_pg_channel_pane_g1

0xdda4,	// (0x00072a76) single_tv_pg_channel_pane_g2

0x0001,

0xfc8b,	// (0x0007495d) single_tv_pg_channel_pane_g

0xc84d,	// (0x0007151f) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc84d,	// (0x0007151f) bg_single_mobtv_pg_channel_thumb_pane

0xddad,	// (0x00072a7f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xddad,	// (0x00072a7f) single_mobtv_pg_channel_thumb_pane_g1

0xddbb,	// (0x00072a8d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xddbb,	// (0x00072a8d) single_mobtv_pg_channel_thumb_pane_g2

0xddc7,	// (0x00072a99) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xddc7,	// (0x00072a99) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc90,	// (0x00074962) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc90,	// (0x00074962) single_mobtv_pg_channel_thumb_pane_g

0xddd3,	// (0x00072aa5) single_mobtv_pg_channel_thumb_pane_t1

0xdde1,	// (0x00072ab3) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc97,	// (0x00074969) single_mobtv_pg_channel_thumb_pane_t

0xc61e,	// (0x000712f0) bg_single_mobtv_pg_channel_table_pane_g1

0xc61e,	// (0x000712f0) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf756,	// (0x00074428) bg_single_mobtv_pg_channel_table_pane_g

0xddef,	// (0x00072ac1) single_mobtv_pg_channel_table_pane_t1

0xddfd,	// (0x00072acf) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc9c,	// (0x0007496e) single_mobtv_pg_channel_table_pane_t

0x9cb9,	// (0x0006e98b) main_mobtv_info_pane_g1_ParamLimits

0x9cb9,	// (0x0006e98b) main_mobtv_info_pane_g1

0x9cd5,	// (0x0006e9a7) main_mobtv_info_pane_t1_ParamLimits

0x9cd5,	// (0x0006e9a7) main_mobtv_info_pane_t1

0x9d3b,	// (0x0006ea0d) main_mobtv_info_pane_t2_ParamLimits

0x9d3b,	// (0x0006ea0d) main_mobtv_info_pane_t2

0x0002,

0xfca6,	// (0x00074978) main_mobtv_info_pane_t_ParamLimits

0xfca6,	// (0x00074978) main_mobtv_info_pane_t

0x9dbe,	// (0x0006ea90) wait_bar_pane_cp05

0x9dce,	// (0x0006eaa0) main_mobtv_loading_pane_g1_ParamLimits

0x9dce,	// (0x0006eaa0) main_mobtv_loading_pane_g1

0x9ddf,	// (0x0006eab1) main_mobtv_loading_pane_g2_ParamLimits

0x9ddf,	// (0x0006eab1) main_mobtv_loading_pane_g2

0x9deb,	// (0x0006eabd) main_mobtv_loading_pane_g3_ParamLimits

0x9deb,	// (0x0006eabd) main_mobtv_loading_pane_g3

0x0002,

0xfcad,	// (0x0007497f) main_mobtv_loading_pane_g_ParamLimits

0xfcad,	// (0x0007497f) main_mobtv_loading_pane_g

0xde0b,	// (0x00072add) main_mobtv_loading_pane_t1_ParamLimits

0xde0b,	// (0x00072add) main_mobtv_loading_pane_t1

0xde23,	// (0x00072af5) main_mobtv_loading_pane_t2_ParamLimits

0xde23,	// (0x00072af5) main_mobtv_loading_pane_t2

0x0001,

0xfcb4,	// (0x00074986) main_mobtv_loading_pane_t_ParamLimits

0xfcb4,	// (0x00074986) main_mobtv_loading_pane_t

0x9dfc,	// (0x0006eace) wait_bar_pane_cp06_ParamLimits

0x9dfc,	// (0x0006eace) wait_bar_pane_cp06

0xde47,	// (0x00072b19) main_mobtv_programe_curr_pane_t1

0xde55,	// (0x00072b27) main_mobtv_programe_curr_pane_t2

0x0001,

0xfcb9,	// (0x0007498b) main_mobtv_programe_curr_pane_t

0xde63,	// (0x00072b35) main_mobtv_programe_next_pane_t1

0xde71,	// (0x00072b43) main_mobtv_programe_next_pane_t2

0xde7f,	// (0x00072b51) main_mobtv_programe_next_pane_t3

0x0002,

0xfcbe,	// (0x00074990) main_mobtv_programe_next_pane_t

0xa57a,	// (0x0006f24c) bg_popup_mobtv_noti_window_pane

0xde8d,	// (0x00072b5f) popup_mobtv_noti_window_g1

0xde95,	// (0x00072b67) popup_mobtv_noti_window_t1

0xdea3,	// (0x00072b75) popup_mobtv_noti_window_t2

0x0001,

0xfcc5,	// (0x00074997) popup_mobtv_noti_window_t

0xc61e,	// (0x000712f0) bg_popup_mobtv_noti_window_pane_g1

0xa57a,	// (0x0006f24c) sc_clock_pane

0xa57a,	// (0x0006f24c) main_fs_bigclock_pane

0x96a8,	// (0x0006e37a) blid2_tripm_pane_t4_ParamLimits

0x96a8,	// (0x0006e37a) blid2_tripm_pane_t4

0x9e0b,	// (0x0006eadd) sc_clock_pane_g1_ParamLimits

0x9e0b,	// (0x0006eadd) sc_clock_pane_g1

0x9e1d,	// (0x0006eaef) sc_clock_pane_t1_ParamLimits

0x9e1d,	// (0x0006eaef) sc_clock_pane_t1

0x9e3f,	// (0x0006eb11) sc_clock_pane_t2_ParamLimits

0x9e3f,	// (0x0006eb11) sc_clock_pane_t2

0x9e55,	// (0x0006eb27) sc_clock_pane_t3_ParamLimits

0x9e55,	// (0x0006eb27) sc_clock_pane_t3

0x0004,

0xfcca,	// (0x0007499c) sc_clock_pane_t_ParamLimits

0xfcca,	// (0x0007499c) sc_clock_pane_t

0xe47a,	// (0x0007314c) main_fs_bigclock_indicator_pane_ParamLimits

0xe47a,	// (0x0007314c) main_fs_bigclock_indicator_pane

0xc81d,	// (0x000714ef) main_fs_bigclock_pane_g1_ParamLimits

0xc81d,	// (0x000714ef) main_fs_bigclock_pane_g1

0xe486,	// (0x00073158) main_fs_bigclock_pane_t1_ParamLimits

0xe486,	// (0x00073158) main_fs_bigclock_pane_t1

0xe498,	// (0x0007316a) main_fs_bigclock_pane_t2_ParamLimits

0xe498,	// (0x0007316a) main_fs_bigclock_pane_t2

0xe4aa,	// (0x0007317c) main_fs_bigclock_pane_t3_ParamLimits

0xe4aa,	// (0x0007317c) main_fs_bigclock_pane_t3

0x0002,

0xfec4,	// (0x00074b96) main_fs_bigclock_pane_t_ParamLimits

0xfec4,	// (0x00074b96) main_fs_bigclock_pane_t

0x1040,	// (0x00065d12) main_fs_bigclock_indicator_pane_g1

0xdb94,	// (0x00072866) ncim_query_content_pane_g2_ParamLimits

0xdb94,	// (0x00072866) ncim_query_content_pane_g2

0x0001,

0xfc57,	// (0x00074929) ncim_query_content_pane_g_ParamLimits

0xfc57,	// (0x00074929) ncim_query_content_pane_g

0x9e6a,	// (0x0006eb3c) sc_clock_pane_t4_ParamLimits

0x9e6a,	// (0x0006eb3c) sc_clock_pane_t4

0xea7f,	// (0x00073751) main_radioblah_pane

0xcef3,	// (0x00071bc5) cell_call4_button_pane_t1_copy1_ParamLimits

0xcef3,	// (0x00071bc5) cell_call4_button_pane_t1_copy1

0x9b22,	// (0x0006e7f4) main_ncimui_pane_t1_ParamLimits

0x9b22,	// (0x0006e7f4) main_ncimui_pane_t1

0x9b34,	// (0x0006e806) main_ncimui_pane_t2_ParamLimits

0x9b34,	// (0x0006e806) main_ncimui_pane_t2

0x0002,

0xfc50,	// (0x00074922) main_ncimui_pane_t_ParamLimits

0xfc50,	// (0x00074922) main_ncimui_pane_t

0xdfcd,	// (0x00072c9f) main_radioblah_anim_pane_ParamLimits

0xdfcd,	// (0x00072c9f) main_radioblah_anim_pane

0xdfde,	// (0x00072cb0) main_radioblah_info_pane_ParamLimits

0xdfde,	// (0x00072cb0) main_radioblah_info_pane

0xdff2,	// (0x00072cc4) main_radioblah_pane_t1_ParamLimits

0xdff2,	// (0x00072cc4) main_radioblah_pane_t1

0xe00e,	// (0x00072ce0) main_radioblah_pane_t2_ParamLimits

0xe00e,	// (0x00072ce0) main_radioblah_pane_t2

0x0003,

0xfceb,	// (0x000749bd) main_radioblah_pane_t_ParamLimits

0xfceb,	// (0x000749bd) main_radioblah_pane_t

0x9f01,	// (0x0006ebd3) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9f01,	// (0x0006ebd3) main_radioblah_rocker_ctrl_pane

0xe056,	// (0x00072d28) main_radioblah_info_pane_t1_ParamLimits

0xe056,	// (0x00072d28) main_radioblah_info_pane_t1

0x9f55,	// (0x0006ec27) main_radioblah_info_pane_t2_ParamLimits

0x9f55,	// (0x0006ec27) main_radioblah_info_pane_t2

0x0003,

0xfcf4,	// (0x000749c6) main_radioblah_info_pane_t_ParamLimits

0xfcf4,	// (0x000749c6) main_radioblah_info_pane_t

0xc61e,	// (0x000712f0) main_radioblah_rocker_ctrl_pane_g1

0xa003,	// (0x0006ecd5) main_radioblah_rocker_ctrl_pane_g2

0xa00b,	// (0x0006ecdd) main_radioblah_rocker_ctrl_pane_g3

0xa013,	// (0x0006ece5) main_radioblah_rocker_ctrl_pane_g4

0xa01b,	// (0x0006eced) main_radioblah_rocker_ctrl_pane_g5

0xa023,	// (0x0006ecf5) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcfd,	// (0x000749cf) main_radioblah_rocker_ctrl_pane_g

0x9af0,	// (0x0006e7c2) main_cset_text2_pane_t1_copy1_ParamLimits

0xf015,	// (0x00073ce7) cam4_image_uncrop_qvga_pane

0xf025,	// (0x00073cf7) vid4_image_uncrop_qcif_pane

0xf123,	// (0x00073df5) cam6_image_uncrop_qvga_pane_ParamLimits

0xf123,	// (0x00073df5) cam6_image_uncrop_qvga_pane

0xd7c6,	// (0x00072498) vid6_image_uncrop_qcif_pane_ParamLimits

0xd7c6,	// (0x00072498) vid6_image_uncrop_qcif_pane

0xa57a,	// (0x0006f24c) bg_popup_preview_window_pane_cp03

0xdb46,	// (0x00072818) list_cset_text2_pane

0xdb4e,	// (0x00072820) main_cset6_text2_pane_g1

0xdb56,	// (0x00072828) main_cset6_text2_pane_t1

0xa02b,	// (0x0006ecfd) list_cset_text2_pane_t1_ParamLimits

0xa02b,	// (0x0006ecfd) list_cset_text2_pane_t1

0xea7f,	// (0x00073751) main_radioblah_pane_ParamLimits

0x9dac,	// (0x0006ea7e) main_mobtv_info_pane_t3_ParamLimits

0x9dac,	// (0x0006ea7e) main_mobtv_info_pane_t3

0x9eef,	// (0x0006ebc1) main_radioblah_pane_g1

0x9f29,	// (0x0006ebfb) main_radioblah_info_pane_g1

0x9fa8,	// (0x0006ec7a) main_radioblah_info_pane_t3_ParamLimits

0x9fa8,	// (0x0006ec7a) main_radioblah_info_pane_t3

0x495f,	// (0x00069631) highlight_cell_cale_month_pane_ParamLimits

0x495f,	// (0x00069631) highlight_cell_cale_month_pane

0xa57a,	// (0x0006f24c) main_phob_fisheye_pane

0xc94f,	// (0x00071621) scroll_pane_cp0031_ParamLimits

0xc94f,	// (0x00071621) scroll_pane_cp0031

0xd8d0,	// (0x000725a2) wait_bar_pane_cp08_ParamLimits

0x99a0,	// (0x0006e672) cset_list_set_pane_copy1_ParamLimits

0xe090,	// (0x00072d62) highlight_cell_cale_month_pane_g1

0xa044,	// (0x0006ed16) highlight_cell_cale_month_pane_t1

0xe098,	// (0x00072d6a) list_gen_pane_cp01

0xd0ee,	// (0x00071dc0) scroll_pane_01

0xe0a1,	// (0x00072d73) list_single_double_fisheye_pane

0x29c2,	// (0x00067694) list_double_fisheye_pane_g1_ParamLimits

0x29c2,	// (0x00067694) list_double_fisheye_pane_g1

0x29ce,	// (0x000676a0) list_double_fisheye_pane_g2_ParamLimits

0x29ce,	// (0x000676a0) list_double_fisheye_pane_g2

0x29e2,	// (0x000676b4) list_double_fisheye_pane_g3_ParamLimits

0x29e2,	// (0x000676b4) list_double_fisheye_pane_g3

0x0004,

0xfd0a,	// (0x000749dc) list_double_fisheye_pane_g_ParamLimits

0xfd0a,	// (0x000749dc) list_double_fisheye_pane_g

0x2a0b,	// (0x000676dd) list_double_fisheye_pane_t1_ParamLimits

0x2a0b,	// (0x000676dd) list_double_fisheye_pane_t1

0x2a26,	// (0x000676f8) list_double_fisheye_pane_t2_ParamLimits

0x2a26,	// (0x000676f8) list_double_fisheye_pane_t2

0x0001,

0xfd15,	// (0x000749e7) list_double_fisheye_pane_t_ParamLimits

0xfd15,	// (0x000749e7) list_double_fisheye_pane_t

0xa57a,	// (0x0006f24c) main_call5_pane

0x9e93,	// (0x0006eb65) sc_swipe_pane_ParamLimits

0x9e93,	// (0x0006eb65) sc_swipe_pane

0xa063,	// (0x0006ed35) call5_image_pane_ParamLimits

0xa063,	// (0x0006ed35) call5_image_pane

0xa078,	// (0x0006ed4a) call5_swipe_1_pane_ParamLimits

0xa078,	// (0x0006ed4a) call5_swipe_1_pane

0xa089,	// (0x0006ed5b) call5_swipe_2_pane_ParamLimits

0xa089,	// (0x0006ed5b) call5_swipe_2_pane

0xa0ae,	// (0x0006ed80) popup_call5_audio_first_window_ParamLimits

0xa0ae,	// (0x0006ed80) popup_call5_audio_first_window

0xc84d,	// (0x0007151f) call5_swipe_1_pane_g1_ParamLimits

0xc84d,	// (0x0007151f) call5_swipe_1_pane_g1

0x051b,	// (0x000651ed) call5_swipe_1_pane_g2_ParamLimits

0x051b,	// (0x000651ed) call5_swipe_1_pane_g2

0x0001,

0xfd1a,	// (0x000749ec) call5_swipe_1_pane_g_ParamLimits

0xfd1a,	// (0x000749ec) call5_swipe_1_pane_g

0x0527,	// (0x000651f9) call5_swipe_1_pane_t1_ParamLimits

0x0527,	// (0x000651f9) call5_swipe_1_pane_t1

0xc84d,	// (0x0007151f) call5_swipe_2_pane_g1_ParamLimits

0xc84d,	// (0x0007151f) call5_swipe_2_pane_g1

0x053c,	// (0x0006520e) call5_swipe_2_pane_g2_ParamLimits

0x053c,	// (0x0006520e) call5_swipe_2_pane_g2

0x0001,

0xfd1f,	// (0x000749f1) call5_swipe_2_pane_g_ParamLimits

0xfd1f,	// (0x000749f1) call5_swipe_2_pane_g

0x0548,	// (0x0006521a) call5_swipe_2_pane_t1_ParamLimits

0x0548,	// (0x0006521a) call5_swipe_2_pane_t1

0x055d,	// (0x0006522f) sc_swipe_pane_g1_ParamLimits

0x055d,	// (0x0006522f) sc_swipe_pane_g1

0x056a,	// (0x0006523c) sc_swipe_pane_g2_ParamLimits

0x056a,	// (0x0006523c) sc_swipe_pane_g2

0x0001,

0xfd24,	// (0x000749f6) sc_swipe_pane_g_ParamLimits

0xfd24,	// (0x000749f6) sc_swipe_pane_g

0x0576,	// (0x00065248) sc_swipe_pane_t1_ParamLimits

0x0576,	// (0x00065248) sc_swipe_pane_t1

0xa57a,	// (0x0006f24c) main_cmail_launcher_pane

0xa0bd,	// (0x0006ed8f) aid_size_cell_cmail_l_ParamLimits

0xa0bd,	// (0x0006ed8f) aid_size_cell_cmail_l

0xa0d6,	// (0x0006eda8) grid_cmail_l_pane_ParamLimits

0xa0d6,	// (0x0006eda8) grid_cmail_l_pane

0xa0eb,	// (0x0006edbd) cell_cmail_l_pane_ParamLimits

0xa0eb,	// (0x0006edbd) cell_cmail_l_pane

0xa10d,	// (0x0006eddf) cell_cmail_l_pane_g1_ParamLimits

0xa10d,	// (0x0006eddf) cell_cmail_l_pane_g1

0xa11d,	// (0x0006edef) cell_cmail_l_pane_t1_ParamLimits

0xa11d,	// (0x0006edef) cell_cmail_l_pane_t1

0x05df,	// (0x000652b1) cell_cmail_l_pane_t2_ParamLimits

0x05df,	// (0x000652b1) cell_cmail_l_pane_t2

0x0001,

0xfd29,	// (0x000749fb) cell_cmail_l_pane_t_ParamLimits

0xfd29,	// (0x000749fb) cell_cmail_l_pane_t

0xea7f,	// (0x00073751) grid_highlight_pane_cp018_ParamLimits

0xea7f,	// (0x00073751) grid_highlight_pane_cp018

0x2fdc,	// (0x00067cae) main2_pane_ParamLimits

0x2fdc,	// (0x00067cae) main2_pane

0xae35,	// (0x0006fb07) popup_sp_fs_action_menu_bg_pane_g1

0xae3d,	// (0x0006fb0f) popup_sp_fs_action_menu_bg_pane_g2

0xae45,	// (0x0006fb17) popup_sp_fs_action_menu_bg_pane_g3

0xae4d,	// (0x0006fb1f) popup_sp_fs_action_menu_bg_pane_g4

0xae55,	// (0x0006fb27) popup_sp_fs_action_menu_bg_pane_g5

0xae5d,	// (0x0006fb2f) popup_sp_fs_action_menu_bg_pane_g6

0xae65,	// (0x0006fb37) popup_sp_fs_action_menu_bg_pane_g7

0xae6d,	// (0x0006fb3f) popup_sp_fs_action_menu_bg_pane_g8

0xae75,	// (0x0006fb47) popup_sp_fs_action_menu_bg_pane_g9

0xae7d,	// (0x0006fb4f) popup_sp_fs_action_menu_bg_pane_g10

0xae7d,	// (0x0006fb4f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x00073ec1) popup_sp_fs_action_menu_bg_pane_g

0xb054,	// (0x0006fd26) list_medium_line_x2_t3_g3_g1_ParamLimits

0xb054,	// (0x0006fd26) list_medium_line_x2_t3_g3_g1

0xb060,	// (0x0006fd32) list_medium_line_x2_t3_g3_g2_ParamLimits

0xb060,	// (0x0006fd32) list_medium_line_x2_t3_g3_g2

0xb06c,	// (0x0006fd3e) list_medium_line_x2_t3_g3_g3_ParamLimits

0xb06c,	// (0x0006fd3e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x00073f71) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x00073f71) list_medium_line_x2_t3_g3_g

0xb078,	// (0x0006fd4a) list_medium_line_x2_t3_g3_t1_ParamLimits

0xb078,	// (0x0006fd4a) list_medium_line_x2_t3_g3_t1

0x2655,	// (0x00067327) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2655,	// (0x00067327) list_medium_line_x2_t3_g3_t2

0xb08d,	// (0x0006fd5f) list_medium_line_x2_t3_g3_t3_ParamLimits

0xb08d,	// (0x0006fd5f) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x00073f78) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x00073f78) list_medium_line_x2_t3_g3_t

0xb054,	// (0x0006fd26) list_medium_line_x2_t3_g2_g1_ParamLimits

0xb054,	// (0x0006fd26) list_medium_line_x2_t3_g2_g1

0xb06c,	// (0x0006fd3e) list_medium_line_x2_t3_g2_g2_ParamLimits

0xb06c,	// (0x0006fd3e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x00073f7f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x00073f7f) list_medium_line_x2_t3_g2_g

0xb0a2,	// (0x0006fd74) list_medium_line_x2_t3_g2_t1_ParamLimits

0xb0a2,	// (0x0006fd74) list_medium_line_x2_t3_g2_t1

0xb0b8,	// (0x0006fd8a) list_medium_line_x2_t3_g2_t2_ParamLimits

0xb0b8,	// (0x0006fd8a) list_medium_line_x2_t3_g2_t2

0xb08d,	// (0x0006fd5f) list_medium_line_x2_t3_g2_t3_ParamLimits

0xb08d,	// (0x0006fd5f) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x00073f84) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x00073f84) list_medium_line_x2_t3_g2_t

0xb054,	// (0x0006fd26) list_medium_line_x2_t4_g4_g1_ParamLimits

0xb054,	// (0x0006fd26) list_medium_line_x2_t4_g4_g1

0xb0ca,	// (0x0006fd9c) list_medium_line_x2_t4_g4_g2_ParamLimits

0xb0ca,	// (0x0006fd9c) list_medium_line_x2_t4_g4_g2

0xb060,	// (0x0006fd32) list_medium_line_x2_t4_g4_g3_ParamLimits

0xb060,	// (0x0006fd32) list_medium_line_x2_t4_g4_g3

0xb0d6,	// (0x0006fda8) list_medium_line_x2_t4_g4_g4_ParamLimits

0xb0d6,	// (0x0006fda8) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x00073f8b) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x00073f8b) list_medium_line_x2_t4_g4_g

0x2667,	// (0x00067339) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2667,	// (0x00067339) list_medium_line_x2_t4_g4_t1

0x2681,	// (0x00067353) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2681,	// (0x00067353) list_medium_line_x2_t4_g4_t2

0x2696,	// (0x00067368) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2696,	// (0x00067368) list_medium_line_x2_t4_g4_t3

0xb0e2,	// (0x0006fdb4) list_medium_line_x2_t4_g4_t4_ParamLimits

0xb0e2,	// (0x0006fdb4) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x00073f94) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x00073f94) list_medium_line_x2_t4_g4_t

0xb054,	// (0x0006fd26) list_medium_line_x2_t2_g4_g1_ParamLimits

0xb054,	// (0x0006fd26) list_medium_line_x2_t2_g4_g1

0xb0ca,	// (0x0006fd9c) list_medium_line_x2_t2_g4_g2_ParamLimits

0xb0ca,	// (0x0006fd9c) list_medium_line_x2_t2_g4_g2

0xb060,	// (0x0006fd32) list_medium_line_x2_t2_g4_g3_ParamLimits

0xb060,	// (0x0006fd32) list_medium_line_x2_t2_g4_g3

0xb06c,	// (0x0006fd3e) list_medium_line_x2_t2_g4_g4_ParamLimits

0xb06c,	// (0x0006fd3e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x00073ffb) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x00073ffb) list_medium_line_x2_t2_g4_g

0xb143,	// (0x0006fe15) list_medium_line_x2_t2_g4_t1_ParamLimits

0xb143,	// (0x0006fe15) list_medium_line_x2_t2_g4_t1

0xb08d,	// (0x0006fd5f) list_medium_line_x2_t2_g4_t2_ParamLimits

0xb08d,	// (0x0006fd5f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x00074004) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x00074004) list_medium_line_x2_t2_g4_t

0xb054,	// (0x0006fd26) list_medium_line_x2_t2_g3_g1_ParamLimits

0xb054,	// (0x0006fd26) list_medium_line_x2_t2_g3_g1

0xb060,	// (0x0006fd32) list_medium_line_x2_t2_g3_g2_ParamLimits

0xb060,	// (0x0006fd32) list_medium_line_x2_t2_g3_g2

0xb06c,	// (0x0006fd3e) list_medium_line_x2_t2_g3_g3_ParamLimits

0xb06c,	// (0x0006fd3e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x00073f71) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x00073f71) list_medium_line_x2_t2_g3_g

0xb158,	// (0x0006fe2a) list_medium_line_x2_t2_g3_t1_ParamLimits

0xb158,	// (0x0006fe2a) list_medium_line_x2_t2_g3_t1

0xb08d,	// (0x0006fd5f) list_medium_line_x2_t2_g3_t2_ParamLimits

0xb08d,	// (0x0006fd5f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x00074009) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x00074009) list_medium_line_x2_t2_g3_t

0x4cba,	// (0x0006998c) main_sp_fs_list_pane_ParamLimits

0x4cba,	// (0x0006998c) main_sp_fs_list_pane

0x4cc7,	// (0x00069999) sp_fs_scroll_pane_ParamLimits

0x4cc7,	// (0x00069999) sp_fs_scroll_pane

0x26ab,	// (0x0006737d) list_medium_line_x2_t3_t1

0x26bb,	// (0x0006738d) list_medium_line_x2_t3_t2

0xb16d,	// (0x0006fe3f) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x00074054) list_medium_line_x2_t3_t

0x26c9,	// (0x0006739b) list_medium_line_x3_t4_t1

0x26d9,	// (0x000673ab) list_medium_line_x3_t4_t2

0xb17b,	// (0x0006fe4d) list_medium_line_x3_t4_t3

0xb189,	// (0x0006fe5b) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x0007405b) list_medium_line_x3_t4_t

0x26e7,	// (0x000673b9) list_medium_line_x4_t5_t1

0x26f7,	// (0x000673c9) list_medium_line_x4_t5_t2

0xb17b,	// (0x0006fe4d) list_medium_line_x4_t5_t3

0xb197,	// (0x0006fe69) list_medium_line_x4_t5_t4

0xb189,	// (0x0006fe5b) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x00074064) list_medium_line_x4_t5_t

0xb054,	// (0x0006fd26) list_medium_line_t4_g4_g1_ParamLimits

0xb054,	// (0x0006fd26) list_medium_line_t4_g4_g1

0xb0d6,	// (0x0006fda8) list_medium_line_t4_g4_g2_ParamLimits

0xb0d6,	// (0x0006fda8) list_medium_line_t4_g4_g2

0xb1a5,	// (0x0006fe77) list_medium_line_t4_g4_g3_ParamLimits

0xb1a5,	// (0x0006fe77) list_medium_line_t4_g4_g3

0xb06c,	// (0x0006fd3e) list_medium_line_t4_g4_g4_ParamLimits

0xb06c,	// (0x0006fd3e) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x0007406f) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x0007406f) list_medium_line_t4_g4_g

0xb1b1,	// (0x0006fe83) list_medium_line_t4_g4_t1_ParamLimits

0xb1b1,	// (0x0006fe83) list_medium_line_t4_g4_t1

0xb1c6,	// (0x0006fe98) list_medium_line_t4_g4_t2_ParamLimits

0xb1c6,	// (0x0006fe98) list_medium_line_t4_g4_t2

0xb1dc,	// (0x0006feae) list_medium_line_t4_g4_t3_ParamLimits

0xb1dc,	// (0x0006feae) list_medium_line_t4_g4_t3

0xb1f2,	// (0x0006fec4) list_medium_line_t4_g4_t4_ParamLimits

0xb1f2,	// (0x0006fec4) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x00074078) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x00074078) list_medium_line_t4_g4_t

0x4ff5,	// (0x00069cc7) chi_dic_find_pane_g1

0x649d,	// (0x0006b16f) main_tport_pane

0xd22f,	// (0x00071f01) list_medium_line_plain_t1

0xb054,	// (0x0006fd26) list_medium_line_t2_g2_g1_ParamLimits

0xb054,	// (0x0006fd26) list_medium_line_t2_g2_g1

0xb060,	// (0x0006fd32) list_medium_line_t2_g2_g2_ParamLimits

0xb060,	// (0x0006fd32) list_medium_line_t2_g2_g2

0x0001,

0xfa6c,	// (0x0007473e) list_medium_line_t2_g2_g_ParamLimits

0xfa6c,	// (0x0007473e) list_medium_line_t2_g2_g

0x289a,	// (0x0006756c) list_medium_line_t2_g2_t1_ParamLimits

0x289a,	// (0x0006756c) list_medium_line_t2_g2_t1

0x28b1,	// (0x00067583) list_medium_line_t2_g2_t2_ParamLimits

0x28b1,	// (0x00067583) list_medium_line_t2_g2_t2

0x0001,

0xfa71,	// (0x00074743) list_medium_line_t2_g2_t_ParamLimits

0xfa71,	// (0x00074743) list_medium_line_t2_g2_t

0xd556,	// (0x00072228) aid_sp_fs_list_icon_a_sm

0xf112,	// (0x00073de4) aid_sp_fs_list_icon_d

0xd55e,	// (0x00072230) aid_sp_fs_text_primary

0xd567,	// (0x00072239) aid_sp_fs_text_secondary

0xf11a,	// (0x00073dec) list_medium_line

0xf11a,	// (0x00073dec) list_medium_line_g2

0xf11a,	// (0x00073dec) list_medium_line_g3

0xf11a,	// (0x00073dec) list_medium_line_plain

0xf11a,	// (0x00073dec) list_medium_line_plain_t2

0xf11a,	// (0x00073dec) list_medium_line_plain_t3

0xf11a,	// (0x00073dec) list_medium_line_right_icon

0xf11a,	// (0x00073dec) list_medium_line_right_iconx2

0xf11a,	// (0x00073dec) list_medium_line_t2

0xf11a,	// (0x00073dec) list_medium_line_t2_g2

0xf11a,	// (0x00073dec) list_medium_line_t2_g3

0xf11a,	// (0x00073dec) list_medium_line_t2_right_icon

0xf11a,	// (0x00073dec) list_medium_line_t2_right_iconx2

0xf11a,	// (0x00073dec) list_medium_line_t3

0xf11a,	// (0x00073dec) list_medium_line_t3_g2

0xf11a,	// (0x00073dec) list_medium_line_t3_g3

0xf11a,	// (0x00073dec) list_medium_line_t3_right_iconx2

0xd570,	// (0x00072242) list_medium_line_t4_g4

0xd579,	// (0x0007224b) list_medium_line_x2

0xd579,	// (0x0007224b) list_medium_line_x2_t2_g2

0xd579,	// (0x0007224b) list_medium_line_x2_t2_g3

0xd579,	// (0x0007224b) list_medium_line_x2_t2_g4

0xd579,	// (0x0007224b) list_medium_line_x2_t3

0xd579,	// (0x0007224b) list_medium_line_x2_t3_g2

0xd579,	// (0x0007224b) list_medium_line_x2_t3_g3

0xd579,	// (0x0007224b) list_medium_line_x2_t3_g4

0xd579,	// (0x0007224b) list_medium_line_x2_t4_g2

0xd579,	// (0x0007224b) list_medium_line_x2_t4_g4

0xd582,	// (0x00072254) list_medium_line_x3

0xd582,	// (0x00072254) list_medium_line_x3_t4

0xd582,	// (0x00072254) list_medium_line_x3_t4_g4

0xd570,	// (0x00072242) list_medium_line_x4_t4

0xd570,	// (0x00072242) list_medium_line_x4_t4_g7

0xd570,	// (0x00072242) list_medium_line_x4_t5

0xd58b,	// (0x0007225d) list_single_fs_dyc_pane_ParamLimits

0xd58b,	// (0x0007225d) list_single_fs_dyc_pane

0xb054,	// (0x0006fd26) list_medium_line_x4_t4_g7_g1_ParamLimits

0xb054,	// (0x0006fd26) list_medium_line_x4_t4_g7_g1

0xda7b,	// (0x0007274d) list_medium_line_x4_t4_g7_g2_ParamLimits

0xda7b,	// (0x0007274d) list_medium_line_x4_t4_g7_g2

0xda87,	// (0x00072759) list_medium_line_x4_t4_g7_g3_ParamLimits

0xda87,	// (0x00072759) list_medium_line_x4_t4_g7_g3

0xda96,	// (0x00072768) list_medium_line_x4_t4_g7_g4_ParamLimits

0xda96,	// (0x00072768) list_medium_line_x4_t4_g7_g4

0xdaa2,	// (0x00072774) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdaa2,	// (0x00072774) list_medium_line_x4_t4_g7_g5

0xdab1,	// (0x00072783) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdab1,	// (0x00072783) list_medium_line_x4_t4_g7_g6

0xdac0,	// (0x00072792) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdac0,	// (0x00072792) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc36,	// (0x00074908) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc36,	// (0x00074908) list_medium_line_x4_t4_g7_g

0xdacc,	// (0x0007279e) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdacc,	// (0x0007279e) list_medium_line_x4_t4_g7_t1

0xdae1,	// (0x000727b3) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdae1,	// (0x000727b3) list_medium_line_x4_t4_g7_t2

0xdaf6,	// (0x000727c8) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdaf6,	// (0x000727c8) list_medium_line_x4_t4_g7_t3

0xdb0b,	// (0x000727dd) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdb0b,	// (0x000727dd) list_medium_line_x4_t4_g7_t4

0xdb1d,	// (0x000727ef) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdb1d,	// (0x000727ef) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc45,	// (0x00074917) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc45,	// (0x00074917) list_medium_line_x4_t4_g7_t

0xdb2f,	// (0x00072801) list_single_dyc_row_pane_ParamLimits

0xdb2f,	// (0x00072801) list_single_dyc_row_pane

0xa052,	// (0x0006ed24) call5_gesture_pane_ParamLimits

0xa052,	// (0x0006ed24) call5_gesture_pane

0xa09a,	// (0x0006ed6c) call5_windows_pane_ParamLimits

0xa09a,	// (0x0006ed6c) call5_windows_pane

0xa133,	// (0x0006ee05) call5_swipe_1_pane_cp_ParamLimits

0xa133,	// (0x0006ee05) call5_swipe_1_pane_cp

0xa13f,	// (0x0006ee11) call5_swipe_2_pane_cp_ParamLimits

0xa13f,	// (0x0006ee11) call5_swipe_2_pane_cp

0x5439,	// (0x0006a10b) call5_image_pane_cp

0xa14b,	// (0x0006ee1d) popup_call5_audio_first_window_cp_ParamLimits

0xa14b,	// (0x0006ee1d) popup_call5_audio_first_window_cp

0x055d,	// (0x0006522f) call5_swipe_1_pane_g1_cp_ParamLimits

0x055d,	// (0x0006522f) call5_swipe_1_pane_g1_cp

0x0615,	// (0x000652e7) call5_swipe_1_pane_g2_cp

0x0576,	// (0x00065248) call5_swipe_1_pane_t1_cp_ParamLimits

0x0576,	// (0x00065248) call5_swipe_1_pane_t1_cp

0x055d,	// (0x0006522f) call5_swipe_2_pane_g1_cp_ParamLimits

0x055d,	// (0x0006522f) call5_swipe_2_pane_g1_cp

0x061d,	// (0x000652ef) call5_swipe_2_pane_g2_cp

0x0625,	// (0x000652f7) call5_swipe_2_pane_t1_cp_ParamLimits

0x0625,	// (0x000652f7) call5_swipe_2_pane_t1_cp

0xea7f,	// (0x00073751) main_sp_fs_email_pane

0x063a,	// (0x0006530c) main_sp_fs_listscroll_pane_te

0xa157,	// (0x0006ee29) popup_sp_fs_action_menu_pane_ParamLimits

0xa157,	// (0x0006ee29) popup_sp_fs_action_menu_pane

0xc61e,	// (0x000712f0) bg_sp_fs_ctrlbar_pane_g1

0x0643,	// (0x00065315) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x064c,	// (0x0006531e) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x0655,	// (0x00065327) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc61e,	// (0x000712f0) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd2e,	// (0x00074a00) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc40b,	// (0x000710dd) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc40b,	// (0x000710dd) bg_sp_fs_ctrlbar_ddmenu_pane

0x065e,	// (0x00065330) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x065e,	// (0x00065330) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x17f5,	// (0x000664c7) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x17f5,	// (0x000664c7) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd37,	// (0x00074a09) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd37,	// (0x00074a09) main_sp_fs_ctrlbar_ddmenu_pane_g

0x066a,	// (0x0006533c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x066a,	// (0x0006533c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe0aa,	// (0x00072d7c) list_medium_line_t2_right_icon_g1

0xe0b2,	// (0x00072d84) list_medium_line_t2_right_icon_t1

0x2a48,	// (0x0006771a) list_medium_line_t2_right_icon_t2

0x0001,

0xfd3c,	// (0x00074a0e) list_medium_line_t2_right_icon_t

0xc1e3,	// (0x00070eb5) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc1e3,	// (0x00070eb5) bg_sp_fs_ctrlbar_pane

0xa1d0,	// (0x0006eea2) main_sp_fs_ctrlbar_button_pane_cp01

0xa1d8,	// (0x0006eeaa) main_sp_fs_ctrlbar_ddmenu_pane

0x0723,	// (0x000653f5) main_sp_fs_ctrlbar_pane_g1

0x072f,	// (0x00065401) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd41,	// (0x00074a13) main_sp_fs_ctrlbar_pane_g

0x073b,	// (0x0006540d) main_sp_fs_ctrlbar_pane_t1

0x2a56,	// (0x00067728) main_sp_fs_ctrlbar_pane

0x2a77,	// (0x00067749) main_sp_fs_listscroll_pane_te_cp01

0x2a97,	// (0x00067769) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x2a97,	// (0x00067769) popup_sp_fs_action_menu_pane_cp01

0xea7f,	// (0x00073751) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xea7f,	// (0x00073751) bg_sp_fs_highlight_list_pane_cp01

0x2abc,	// (0x0006778e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x2abc,	// (0x0006778e) sp_fs_action_menu_list_gene_pane_g1

0x0750,	// (0x00065422) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x0750,	// (0x00065422) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd46,	// (0x00074a18) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd46,	// (0x00074a18) sp_fs_action_menu_list_gene_pane_g

0x2acb,	// (0x0006779d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x2acb,	// (0x0006779d) sp_fs_action_menu_list_gene_pane_t1

0xa1e2,	// (0x0006eeb4) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa1e2,	// (0x0006eeb4) sp_fs_action_menu_list_gene_pane

0x075d,	// (0x0006542f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x075d,	// (0x0006542f) popup_sp_fs_action_menu_bg_pane

0xa1ff,	// (0x0006eed1) sp_fs_action_menu_list_pane_ParamLimits

0xa1ff,	// (0x0006eed1) sp_fs_action_menu_list_pane

0x076b,	// (0x0006543d) sp_fs_scroll_pane_cp01_ParamLimits

0x076b,	// (0x0006543d) sp_fs_scroll_pane_cp01

0x2ae3,	// (0x000677b5) list_medium_line_plain_t2_t1

0x2af3,	// (0x000677c5) list_medium_line_plain_t2_t2

0x0001,

0xfd4b,	// (0x00074a1d) list_medium_line_plain_t2_t

0x2b01,	// (0x000677d3) list_medium_line_plain_t3_t1

0x2b11,	// (0x000677e3) list_medium_line_plain_t3_t2

0x2b1f,	// (0x000677f1) list_medium_line_plain_t3_t3

0x0002,

0xfd50,	// (0x00074a22) list_medium_line_plain_t3_t

0xb054,	// (0x0006fd26) list_medium_line_x2_t2_g2_g1_ParamLimits

0xb054,	// (0x0006fd26) list_medium_line_x2_t2_g2_g1

0xb06c,	// (0x0006fd3e) list_medium_line_x2_t2_g2_g2_ParamLimits

0xb06c,	// (0x0006fd3e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x00073f7f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x00073f7f) list_medium_line_x2_t2_g2_g

0xb1b1,	// (0x0006fe83) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb1b1,	// (0x0006fe83) list_medium_line_x2_t2_g2_t1

0xb08d,	// (0x0006fd5f) list_medium_line_x2_t2_g2_t2_ParamLimits

0xb08d,	// (0x0006fd5f) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd57,	// (0x00074a29) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd57,	// (0x00074a29) list_medium_line_x2_t2_g2_t

0xb054,	// (0x0006fd26) list_medium_line_x2_t4_g2_g1_ParamLimits

0xb054,	// (0x0006fd26) list_medium_line_x2_t4_g2_g1

0xe0c2,	// (0x00072d94) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe0c2,	// (0x00072d94) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd5c,	// (0x00074a2e) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd5c,	// (0x00074a2e) list_medium_line_x2_t4_g2_g

0x2b2d,	// (0x000677ff) list_medium_line_x2_t4_g2_t1_ParamLimits

0x2b2d,	// (0x000677ff) list_medium_line_x2_t4_g2_t1

0x2b47,	// (0x00067819) list_medium_line_x2_t4_g2_t2_ParamLimits

0x2b47,	// (0x00067819) list_medium_line_x2_t4_g2_t2

0x2b5c,	// (0x0006782e) list_medium_line_x2_t4_g2_t3_ParamLimits

0x2b5c,	// (0x0006782e) list_medium_line_x2_t4_g2_t3

0xb08d,	// (0x0006fd5f) list_medium_line_x2_t4_g2_t4_ParamLimits

0xb08d,	// (0x0006fd5f) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd61,	// (0x00074a33) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd61,	// (0x00074a33) list_medium_line_x2_t4_g2_t

0xe0d4,	// (0x00072da6) list_medium_line_t3_right_iconx2_g1

0xe0aa,	// (0x00072d7c) list_medium_line_t3_right_iconx2_g2

0x2b71,	// (0x00067843) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd6a,	// (0x00074a3c) list_medium_line_t3_right_iconx2_g

0x2b79,	// (0x0006784b) list_medium_line_t3_right_iconx2_t1

0x2b89,	// (0x0006785b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd71,	// (0x00074a43) list_medium_line_t3_right_iconx2_t

0xb054,	// (0x0006fd26) list_medium_line_x3_t4_g4_g1_ParamLimits

0xb054,	// (0x0006fd26) list_medium_line_x3_t4_g4_g1

0xb060,	// (0x0006fd32) list_medium_line_x3_t4_g4_g2_ParamLimits

0xb060,	// (0x0006fd32) list_medium_line_x3_t4_g4_g2

0xb0d6,	// (0x0006fda8) list_medium_line_x3_t4_g4_g3_ParamLimits

0xb0d6,	// (0x0006fda8) list_medium_line_x3_t4_g4_g3

0xe0dc,	// (0x00072dae) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe0dc,	// (0x00072dae) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd76,	// (0x00074a48) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd76,	// (0x00074a48) list_medium_line_x3_t4_g4_g

0x289a,	// (0x0006756c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x289a,	// (0x0006756c) list_medium_line_x3_t4_g4_t1

0x28b1,	// (0x00067583) list_medium_line_x3_t4_g4_t2_ParamLimits

0x28b1,	// (0x00067583) list_medium_line_x3_t4_g4_t2

0xe0e8,	// (0x00072dba) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe0e8,	// (0x00072dba) list_medium_line_x3_t4_g4_t3

0xe0fd,	// (0x00072dcf) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe0fd,	// (0x00072dcf) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd7f,	// (0x00074a51) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd7f,	// (0x00074a51) list_medium_line_x3_t4_g4_t

0x2b97,	// (0x00067869) list_single_dyc_row_text_pane_t1_ParamLimits

0x2b97,	// (0x00067869) list_single_dyc_row_text_pane_t1

0x2bce,	// (0x000678a0) list_single_dyc_row_text_pane_t2_ParamLimits

0x2bce,	// (0x000678a0) list_single_dyc_row_text_pane_t2

0xe11a,	// (0x00072dec) list_single_dyc_row_text_pane_t3_ParamLimits

0xe11a,	// (0x00072dec) list_single_dyc_row_text_pane_t3

0x0002,

0xfd88,	// (0x00074a5a) list_single_dyc_row_text_pane_t_ParamLimits

0xfd88,	// (0x00074a5a) list_single_dyc_row_text_pane_t

0xe12c,	// (0x00072dfe) list_single_dyc_row_pane_g1_ParamLimits

0xe12c,	// (0x00072dfe) list_single_dyc_row_pane_g1

0xe138,	// (0x00072e0a) list_single_dyc_row_pane_g2_ParamLimits

0xe138,	// (0x00072e0a) list_single_dyc_row_pane_g2

0xe144,	// (0x00072e16) list_single_dyc_row_pane_g3_ParamLimits

0xe144,	// (0x00072e16) list_single_dyc_row_pane_g3

0xe150,	// (0x00072e22) list_single_dyc_row_pane_g4_ParamLimits

0xe150,	// (0x00072e22) list_single_dyc_row_pane_g4

0x0003,

0xfd8f,	// (0x00074a61) list_single_dyc_row_pane_g_ParamLimits

0xfd8f,	// (0x00074a61) list_single_dyc_row_pane_g

0xe15c,	// (0x00072e2e) list_single_dyc_row_text_pane_ParamLimits

0xe15c,	// (0x00072e2e) list_single_dyc_row_text_pane

0xa57a,	// (0x0006f24c) bg_sp_fs_scroll_pane

0x0791,	// (0x00065463) thumb_sp_fs_scroll_pane

0xb054,	// (0x0006fd26) list_medium_line_g1_ParamLimits

0xb054,	// (0x0006fd26) list_medium_line_g1

0xb1b1,	// (0x0006fe83) list_medium_line_t1_ParamLimits

0xb1b1,	// (0x0006fe83) list_medium_line_t1

0xb054,	// (0x0006fd26) list_medium_line_x2_g1_ParamLimits

0xb054,	// (0x0006fd26) list_medium_line_x2_g1

0xb060,	// (0x0006fd32) list_medium_line_x2_g2_ParamLimits

0xb060,	// (0x0006fd32) list_medium_line_x2_g2

0x0001,

0xfa6c,	// (0x0007473e) list_medium_line_x2_g_ParamLimits

0xfa6c,	// (0x0007473e) list_medium_line_x2_g

0xe17b,	// (0x00072e4d) list_medium_line_x2_t1_ParamLimits

0xe17b,	// (0x00072e4d) list_medium_line_x2_t1

0xb054,	// (0x0006fd26) list_medium_line_x3_g1_ParamLimits

0xb054,	// (0x0006fd26) list_medium_line_x3_g1

0xb060,	// (0x0006fd32) list_medium_line_x3_g2_ParamLimits

0xb060,	// (0x0006fd32) list_medium_line_x3_g2

0x0001,

0xfa6c,	// (0x0007473e) list_medium_line_x3_g_ParamLimits

0xfa6c,	// (0x0007473e) list_medium_line_x3_g

0xe17b,	// (0x00072e4d) list_medium_line_x3_t1_ParamLimits

0xe17b,	// (0x00072e4d) list_medium_line_x3_t1

0x079a,	// (0x0006546c) thumb_sp_fs_scroll_pane_g1

0x07a3,	// (0x00065475) thumb_sp_fs_scroll_pane_g2

0x07ac,	// (0x0006547e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd98,	// (0x00074a6a) thumb_sp_fs_scroll_pane_g

0x079a,	// (0x0006546c) bg_sp_fs_scroll_pane_g1

0x07a3,	// (0x00065475) bg_sp_fs_scroll_pane_g2

0x07ac,	// (0x0006547e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd98,	// (0x00074a6a) bg_sp_fs_scroll_pane_g

0xb054,	// (0x0006fd26) list_medium_line_x2_t3_g4_g1_ParamLimits

0xb054,	// (0x0006fd26) list_medium_line_x2_t3_g4_g1

0xb0ca,	// (0x0006fd9c) list_medium_line_x2_t3_g4_g2_ParamLimits

0xb0ca,	// (0x0006fd9c) list_medium_line_x2_t3_g4_g2

0xb060,	// (0x0006fd32) list_medium_line_x2_t3_g4_g3_ParamLimits

0xb060,	// (0x0006fd32) list_medium_line_x2_t3_g4_g3

0xb06c,	// (0x0006fd3e) list_medium_line_x2_t3_g4_g4_ParamLimits

0xb06c,	// (0x0006fd3e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x00073ffb) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x00073ffb) list_medium_line_x2_t3_g4_g

0x2c28,	// (0x000678fa) list_medium_line_x2_t3_g4_t1_ParamLimits

0x2c28,	// (0x000678fa) list_medium_line_x2_t3_g4_t1

0x2c3e,	// (0x00067910) list_medium_line_x2_t3_g4_t2_ParamLimits

0x2c3e,	// (0x00067910) list_medium_line_x2_t3_g4_t2

0xb08d,	// (0x0006fd5f) list_medium_line_x2_t3_g4_t3_ParamLimits

0xb08d,	// (0x0006fd5f) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd9f,	// (0x00074a71) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd9f,	// (0x00074a71) list_medium_line_x2_t3_g4_t

0xb054,	// (0x0006fd26) list_medium_line_g2_g1_ParamLimits

0xb054,	// (0x0006fd26) list_medium_line_g2_g1

0xb060,	// (0x0006fd32) list_medium_line_g2_g2_ParamLimits

0xb060,	// (0x0006fd32) list_medium_line_g2_g2

0x0001,

0xfa6c,	// (0x0007473e) list_medium_line_g2_g_ParamLimits

0xfa6c,	// (0x0007473e) list_medium_line_g2_g

0xb158,	// (0x0006fe2a) list_medium_line_g2_t1_ParamLimits

0xb158,	// (0x0006fe2a) list_medium_line_g2_t1

0xb054,	// (0x0006fd26) list_medium_line_t3_g2_g1_ParamLimits

0xb054,	// (0x0006fd26) list_medium_line_t3_g2_g1

0xb060,	// (0x0006fd32) list_medium_line_t3_g2_g2_ParamLimits

0xb060,	// (0x0006fd32) list_medium_line_t3_g2_g2

0x0001,

0xfa6c,	// (0x0007473e) list_medium_line_t3_g2_g_ParamLimits

0xfa6c,	// (0x0007473e) list_medium_line_t3_g2_g

0x2c57,	// (0x00067929) list_medium_line_t3_g2_t1_ParamLimits

0x2c57,	// (0x00067929) list_medium_line_t3_g2_t1

0x2c6e,	// (0x00067940) list_medium_line_t3_g2_t2_ParamLimits

0x2c6e,	// (0x00067940) list_medium_line_t3_g2_t2

0x2c83,	// (0x00067955) list_medium_line_t3_g2_t3_ParamLimits

0x2c83,	// (0x00067955) list_medium_line_t3_g2_t3

0x0002,

0xfda6,	// (0x00074a78) list_medium_line_t3_g2_t_ParamLimits

0xfda6,	// (0x00074a78) list_medium_line_t3_g2_t

0xe0aa,	// (0x00072d7c) list_medium_line_right_icon_g1

0xe191,	// (0x00072e63) list_medium_line_right_icon_t1

0xb054,	// (0x0006fd26) list_medium_line_t2_g1_ParamLimits

0xb054,	// (0x0006fd26) list_medium_line_t2_g1

0xe19f,	// (0x00072e71) list_medium_line_t2_t1_ParamLimits

0xe19f,	// (0x00072e71) list_medium_line_t2_t1

0x2c98,	// (0x0006796a) list_medium_line_t2_t2_ParamLimits

0x2c98,	// (0x0006796a) list_medium_line_t2_t2

0x0001,

0xfdad,	// (0x00074a7f) list_medium_line_t2_t_ParamLimits

0xfdad,	// (0x00074a7f) list_medium_line_t2_t

0xb054,	// (0x0006fd26) list_medium_line_t3_g1_ParamLimits

0xb054,	// (0x0006fd26) list_medium_line_t3_g1

0x2cad,	// (0x0006797f) list_medium_line_t3_t1_ParamLimits

0x2cad,	// (0x0006797f) list_medium_line_t3_t1

0x2cc4,	// (0x00067996) list_medium_line_t3_t2_ParamLimits

0x2cc4,	// (0x00067996) list_medium_line_t3_t2

0x2cd9,	// (0x000679ab) list_medium_line_t3_t3_ParamLimits

0x2cd9,	// (0x000679ab) list_medium_line_t3_t3

0x0002,

0xfdb2,	// (0x00074a84) list_medium_line_t3_t_ParamLimits

0xfdb2,	// (0x00074a84) list_medium_line_t3_t

0xb054,	// (0x0006fd26) list_medium_line_g3_g1_ParamLimits

0xb054,	// (0x0006fd26) list_medium_line_g3_g1

0xb0ca,	// (0x0006fd9c) list_medium_line_g3_g2_ParamLimits

0xb0ca,	// (0x0006fd9c) list_medium_line_g3_g2

0xb060,	// (0x0006fd32) list_medium_line_g3_g3_ParamLimits

0xb060,	// (0x0006fd32) list_medium_line_g3_g3

0x0002,

0xfdb9,	// (0x00074a8b) list_medium_line_g3_g_ParamLimits

0xfdb9,	// (0x00074a8b) list_medium_line_g3_g

0xb143,	// (0x0006fe15) list_medium_line_g3_t1_ParamLimits

0xb143,	// (0x0006fe15) list_medium_line_g3_t1

0xb054,	// (0x0006fd26) list_medium_line_t2_g3_g1_ParamLimits

0xb054,	// (0x0006fd26) list_medium_line_t2_g3_g1

0xb0ca,	// (0x0006fd9c) list_medium_line_t2_g3_g2_ParamLimits

0xb0ca,	// (0x0006fd9c) list_medium_line_t2_g3_g2

0xb060,	// (0x0006fd32) list_medium_line_t2_g3_g3_ParamLimits

0xb060,	// (0x0006fd32) list_medium_line_t2_g3_g3

0x0002,

0xfdb9,	// (0x00074a8b) list_medium_line_t2_g3_g_ParamLimits

0xfdb9,	// (0x00074a8b) list_medium_line_t2_g3_g

0x2ceb,	// (0x000679bd) list_medium_line_t2_g3_t1_ParamLimits

0x2ceb,	// (0x000679bd) list_medium_line_t2_g3_t1

0x2d02,	// (0x000679d4) list_medium_line_t2_g3_t2_ParamLimits

0x2d02,	// (0x000679d4) list_medium_line_t2_g3_t2

0x0001,

0xfdc0,	// (0x00074a92) list_medium_line_t2_g3_t_ParamLimits

0xfdc0,	// (0x00074a92) list_medium_line_t2_g3_t

0xb054,	// (0x0006fd26) list_medium_line_t3_g3_g1_ParamLimits

0xb054,	// (0x0006fd26) list_medium_line_t3_g3_g1

0xb0ca,	// (0x0006fd9c) list_medium_line_t3_g3_g2_ParamLimits

0xb0ca,	// (0x0006fd9c) list_medium_line_t3_g3_g2

0xb060,	// (0x0006fd32) list_medium_line_t3_g3_g3_ParamLimits

0xb060,	// (0x0006fd32) list_medium_line_t3_g3_g3

0x0002,

0xfdb9,	// (0x00074a8b) list_medium_line_t3_g3_g_ParamLimits

0xfdb9,	// (0x00074a8b) list_medium_line_t3_g3_g

0x2d17,	// (0x000679e9) list_medium_line_t3_g3_t1_ParamLimits

0x2d17,	// (0x000679e9) list_medium_line_t3_g3_t1

0x2d2b,	// (0x000679fd) list_medium_line_t3_g3_t2_ParamLimits

0x2d2b,	// (0x000679fd) list_medium_line_t3_g3_t2

0x2d3d,	// (0x00067a0f) list_medium_line_t3_g3_t3_ParamLimits

0x2d3d,	// (0x00067a0f) list_medium_line_t3_g3_t3

0x0002,

0xfdc5,	// (0x00074a97) list_medium_line_t3_g3_t_ParamLimits

0xfdc5,	// (0x00074a97) list_medium_line_t3_g3_t

0xe0d4,	// (0x00072da6) list_medium_line_right_iconx2_g1

0xe0aa,	// (0x00072d7c) list_medium_line_right_iconx2_g2

0x0001,

0xfdcc,	// (0x00074a9e) list_medium_line_right_iconx2_g

0xe1b9,	// (0x00072e8b) list_medium_line_right_iconx2_t1

0xe0d4,	// (0x00072da6) list_medium_line_t2_right_iconx2_g1

0xe0aa,	// (0x00072d7c) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdcc,	// (0x00074a9e) list_medium_line_t2_right_iconx2_g

0x2d4f,	// (0x00067a21) list_medium_line_t2_right_iconx2_t1

0x2d5f,	// (0x00067a31) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdd1,	// (0x00074aa3) list_medium_line_t2_right_iconx2_t

0xd22f,	// (0x00071f01) list_medium_line_x4_t4_t1

0x2d6d,	// (0x00067a3f) list_medium_line_x4_t4_t2

0x2d7d,	// (0x00067a4f) list_medium_line_x4_t4_t3

0x2d8d,	// (0x00067a5f) list_medium_line_x4_t4_t4

0x0003,

0xfdd6,	// (0x00074aa8) list_medium_line_x4_t4_t

0xa256,	// (0x0006ef28) tport_appsw_pane_ParamLimits

0xa256,	// (0x0006ef28) tport_appsw_pane

0xa267,	// (0x0006ef39) tport_contact_pane_ParamLimits

0xa267,	// (0x0006ef39) tport_contact_pane

0xa27c,	// (0x0006ef4e) tport_listscroll_pane_ParamLimits

0xa27c,	// (0x0006ef4e) tport_listscroll_pane

0xa295,	// (0x0006ef67) cell_tport_appsw_pane_ParamLimits

0xa295,	// (0x0006ef67) cell_tport_appsw_pane

0xcf90,	// (0x00071c62) tport_appsw_pane_g1_ParamLimits

0xcf90,	// (0x00071c62) tport_appsw_pane_g1

0x080f,	// (0x000654e1) tport_contact_pane_g1

0x0818,	// (0x000654ea) tport_contact_pane_t1

0x0826,	// (0x000654f8) tport_contact_pane_t2

0x0001,

0xfddf,	// (0x00074ab1) tport_contact_pane_t

0x0834,	// (0x00065506) list_tport_pane

0xae8f,	// (0x0006fb61) scroll_pane_cp_030

0x0845,	// (0x00065517) cell_tport_appsw_pane_g1

0x085e,	// (0x00065530) cell_tport_appsw_pane_t1

0xa57a,	// (0x0006f24c) grid_highlight_pane_cp019

0xa2ab,	// (0x0006ef7d) list_tport_double_graphic_pane_ParamLimits

0xa2ab,	// (0x0006ef7d) list_tport_double_graphic_pane

0xea7f,	// (0x00073751) list_highlight_pane_cp023_ParamLimits

0xea7f,	// (0x00073751) list_highlight_pane_cp023

0xa2b8,	// (0x0006ef8a) list_tport_double_graphic_pane_g1_ParamLimits

0xa2b8,	// (0x0006ef8a) list_tport_double_graphic_pane_g1

0xa2c5,	// (0x0006ef97) list_tport_double_graphic_pane_t1_ParamLimits

0xa2c5,	// (0x0006ef97) list_tport_double_graphic_pane_t1

0xa2da,	// (0x0006efac) list_tport_double_graphic_pane_t2_ParamLimits

0xa2da,	// (0x0006efac) list_tport_double_graphic_pane_t2

0x0001,

0xfdeb,	// (0x00074abd) list_tport_double_graphic_pane_t_ParamLimits

0xfdeb,	// (0x00074abd) list_tport_double_graphic_pane_t

0xa57a,	// (0x0006f24c) main_cale_note_pane

0x8889,	// (0x0006d55b) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8889,	// (0x0006d55b) cell_vitu2_function_top_wide_pane_cp01

0x9dbe,	// (0x0006ea90) wait_bar_pane_cp05_ParamLimits

0xa57a,	// (0x0006f24c) listscroll_cmail_pane

0x08ad,	// (0x0006557f) list_cmail_pane

0xa2ec,	// (0x0006efbe) list_cmail_body_pane

0xa2ec,	// (0x0006efbe) list_single_cmail_header_caption_pane

0xa302,	// (0x0006efd4) list_single_cmail_header_detail_pane_ParamLimits

0xa302,	// (0x0006efd4) list_single_cmail_header_detail_pane

0x090b,	// (0x000655dd) list_single_cmail_header_caption_pane_t1

0x2d9d,	// (0x00067a6f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x2d9d,	// (0x00067a6f) list_single_cmail_header_detail_pane_g1

0x0919,	// (0x000655eb) list_single_cmail_header_detail_pane_g2_ParamLimits

0x0919,	// (0x000655eb) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdf0,	// (0x00074ac2) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdf0,	// (0x00074ac2) list_single_cmail_header_detail_pane_g

0xe1cf,	// (0x00072ea1) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe1cf,	// (0x00072ea1) list_single_cmail_header_detail_pane_t1

0xe201,	// (0x00072ed3) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe201,	// (0x00072ed3) list_single_cmail_header_editor_pane_bg

0x0932,	// (0x00065604) list_cmail_body_pane_g1

0x093b,	// (0x0006560d) list_cmail_body_pane_t1

0xcfe8,	// (0x00071cba) list_single_cmail_header_editor_pane_bg_g1

0x40c4,	// (0x00068d96) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcff8,	// (0x00071cca) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcff0,	// (0x00071cc2) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd23d,	// (0x00071f0f) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd018,	// (0x00071cea) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd008,	// (0x00071cda) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd010,	// (0x00071ce2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x40a4,	// (0x00068d76) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa32a,	// (0x0006effc) calenote_gesture_pane_ParamLimits

0xa32a,	// (0x0006effc) calenote_gesture_pane

0xa346,	// (0x0006f018) calenote_window_pane_ParamLimits

0xa346,	// (0x0006f018) calenote_window_pane

0x0979,	// (0x0006564b) popup_note_window_cp01

0xa362,	// (0x0006f034) calenote_swipe_1_pane_ParamLimits

0xa362,	// (0x0006f034) calenote_swipe_1_pane

0xa13f,	// (0x0006ee11) calenote_swipe_2_pane_ParamLimits

0xa13f,	// (0x0006ee11) calenote_swipe_2_pane

0x055d,	// (0x0006522f) calenote_swipe_1_pane_g1_ParamLimits

0x055d,	// (0x0006522f) calenote_swipe_1_pane_g1

0x056a,	// (0x0006523c) calenote_swipe_1_pane_g2_ParamLimits

0x056a,	// (0x0006523c) calenote_swipe_1_pane_g2

0x0001,

0xfd24,	// (0x000749f6) calenote_swipe_1_pane_g_ParamLimits

0xfd24,	// (0x000749f6) calenote_swipe_1_pane_g

0x099e,	// (0x00065670) calenote_swipe_1_pane_t1_ParamLimits

0x099e,	// (0x00065670) calenote_swipe_1_pane_t1

0x055d,	// (0x0006522f) calenote_swipe_2_pane_g1_ParamLimits

0x055d,	// (0x0006522f) calenote_swipe_2_pane_g1

0x09bd,	// (0x0006568f) calenote_swipe_2_pane_g2_ParamLimits

0x09bd,	// (0x0006568f) calenote_swipe_2_pane_g2

0x0001,

0xfdfc,	// (0x00074ace) calenote_swipe_2_pane_g_ParamLimits

0xfdfc,	// (0x00074ace) calenote_swipe_2_pane_g

0x09c9,	// (0x0006569b) calenote_swipe_2_pane_t1_ParamLimits

0x09c9,	// (0x0006569b) calenote_swipe_2_pane_t1

0xa57a,	// (0x0006f24c) main_mup_navstr_pane

0x7669,	// (0x0006c33b) main_mup3_pane_t7_ParamLimits

0x7669,	// (0x0006c33b) main_mup3_pane_t7

0xee49,	// (0x00073b1b) main_mp4_pane_g6_ParamLimits

0xee49,	// (0x00073b1b) main_mp4_pane_g6

0xefe3,	// (0x00073cb5) main_image3_pane_t4_ParamLimits

0xefe3,	// (0x00073cb5) main_image3_pane_t4

0xa377,	// (0x0006f049) popup_navstr_preview_pane_ParamLimits

0xa377,	// (0x0006f049) popup_navstr_preview_pane

0xa387,	// (0x0006f059) scroll_navstr_pane_ParamLimits

0xa387,	// (0x0006f059) scroll_navstr_pane

0xa57a,	// (0x0006f24c) bg_popup_preview_window_pane_cp04

0x0a08,	// (0x000656da) popup_navstr_preview_pane_t1

0xa39b,	// (0x0006f06d) scroll_navstr_pane_g1_ParamLimits

0xa39b,	// (0x0006f06d) scroll_navstr_pane_g1

0xa3af,	// (0x0006f081) scroll_navstr_pane_t1_ParamLimits

0xa3af,	// (0x0006f081) scroll_navstr_pane_t1

0x0995,	// (0x00065667) bg_button_pane_cp014

0x0995,	// (0x00065667) bg_button_pane_cp030

0x29ee,	// (0x000676c0) list_double_fisheye_pane_g4_ParamLimits

0x29ee,	// (0x000676c0) list_double_fisheye_pane_g4

0x29fa,	// (0x000676cc) list_double_fisheye_pane_g5_ParamLimits

0x29fa,	// (0x000676cc) list_double_fisheye_pane_g5

0x08bd,	// (0x0006558f) sp_fs_scroll_pane_cp03

0x0723,	// (0x000653f5) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x072f,	// (0x00065401) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd41,	// (0x00074a13) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x073b,	// (0x0006540d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x08b5,	// (0x00065587) sp_fs_scroll_pane_cp02

0xaee9,	// (0x0006fbbb) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaee9,	// (0x0006fbbb) popup_sp_fs_calendar_preview_list_single_pane

0xa57a,	// (0x0006f24c) main_cam6_pano_pane

0xea7f,	// (0x00073751) main_mup3_pane_ParamLimits

0xa57a,	// (0x0006f24c) main_phacti_pane

0x9cb1,	// (0x0006e983) bg_button_pane_cp11

0x9cc9,	// (0x0006e99b) main_mobtv_info_pane_g2_ParamLimits

0x9cc9,	// (0x0006e99b) main_mobtv_info_pane_g2

0x0001,

0xfca1,	// (0x00074973) main_mobtv_info_pane_g_ParamLimits

0xfca1,	// (0x00074973) main_mobtv_info_pane_g

0x9e7c,	// (0x0006eb4e) sc_clock_pane_t5_ParamLimits

0x9e7c,	// (0x0006eb4e) sc_clock_pane_t5

0x9eef,	// (0x0006ebc1) main_radioblah_pane_g1_ParamLimits

0xe026,	// (0x00072cf8) main_radioblah_pane_t3_ParamLimits

0xe026,	// (0x00072cf8) main_radioblah_pane_t3

0xe03e,	// (0x00072d10) main_radioblah_pane_t4_ParamLimits

0xe03e,	// (0x00072d10) main_radioblah_pane_t4

0x9f17,	// (0x0006ebe9) main_radioblah_text_pane_ParamLimits

0x9f17,	// (0x0006ebe9) main_radioblah_text_pane

0x9f29,	// (0x0006ebfb) main_radioblah_info_pane_g1_ParamLimits

0x9fbc,	// (0x0006ec8e) main_radioblah_info_pane_t4_ParamLimits

0x9fbc,	// (0x0006ec8e) main_radioblah_info_pane_t4

0xea7f,	// (0x00073751) main_sp_fs_calendar_pane

0xa3c5,	// (0x0006f097) main_phacti_pane_g1

0xa3cd,	// (0x0006f09f) phacti_note_pane_ParamLimits

0xa3cd,	// (0x0006f09f) phacti_note_pane

0x0a5a,	// (0x0006572c) phacti_term_pane_ParamLimits

0x0a5a,	// (0x0006572c) phacti_term_pane

0x0a6f,	// (0x00065741) phacti_note_pane_t1_ParamLimits

0x0a6f,	// (0x00065741) phacti_note_pane_t1

0xe213,	// (0x00072ee5) phacti_term_pane_g1

0xe21b,	// (0x00072eed) phacti_term_pane_t1_ParamLimits

0xe21b,	// (0x00072eed) phacti_term_pane_t1

0x0a86,	// (0x00065758) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0a8e,	// (0x00065760) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfe06,	// (0x00074ad8) popup_sp_fs_calendar_preview_list_single_pane_g

0x0a96,	// (0x00065768) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x0a96,	// (0x00065768) popup_sp_fs_calendar_preview_list_single_pane_t1

0x0aac,	// (0x0006577e) aid_popup_sp_fs_bg_corner_pane

0xc61e,	// (0x000712f0) popup_sp_fs_calendar_preview_bg_pane_g1

0xa57a,	// (0x0006f24c) popup_sp_fs_calendar_preview_bg_pane

0x0ab4,	// (0x00065786) popup_sp_fs_calendar_preview_list_pane

0xea7f,	// (0x00073751) bg_main_sp_fs_cale_pane_ParamLimits

0xea7f,	// (0x00073751) bg_main_sp_fs_cale_pane

0xe245,	// (0x00072f17) listscroll_cale_mrui_pane_ParamLimits

0xe245,	// (0x00072f17) listscroll_cale_mrui_pane

0xd058,	// (0x00071d2a) listscroll_sp_fs_schedule_track_pane

0xe259,	// (0x00072f2b) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe259,	// (0x00072f2b) main_sp_fs_ctrlbar_pane_cp01

0x0ae3,	// (0x000657b5) main_sp_fs_ribbon_pane

0xe26a,	// (0x00072f3c) popup_sp_fs_cale_preview_window

0xa41c,	// (0x0006f0ee) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa41c,	// (0x0006f0ee) list_single_sp_fs_schedule_track_pane

0xea7f,	// (0x00073751) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xea7f,	// (0x00073751) bg_sp_fs_highlight_list_pane_cp03

0xa42f,	// (0x0006f101) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa42f,	// (0x0006f101) list_single_sp_fs_schedule_track_pane_g1

0xa43b,	// (0x0006f10d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa43b,	// (0x0006f10d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfe0b,	// (0x00074add) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfe0b,	// (0x00074add) list_single_sp_fs_schedule_track_pane_g

0xa447,	// (0x0006f119) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa447,	// (0x0006f119) list_single_sp_fs_schedule_track_pane_t1

0xa461,	// (0x0006f133) sp_fs_schedule_track_pane_ParamLimits

0xa461,	// (0x0006f133) sp_fs_schedule_track_pane

0x0b40,	// (0x00065812) sp_fs_schedule_track_pane_g1

0x0b48,	// (0x0006581a) sp_fs_schedule_track_pane_g2

0x0b50,	// (0x00065822) sp_fs_schedule_track_pane_g3

0x0b58,	// (0x0006582a) sp_fs_schedule_track_pane_g4

0x0b60,	// (0x00065832) sp_fs_schedule_track_pane_g5

0x0004,

0xfe10,	// (0x00074ae2) sp_fs_schedule_track_pane_g

0xcfe8,	// (0x00071cba) bg_sp_fs_schedule_viewer_highlight_g1

0x40c4,	// (0x00068d96) bg_sp_fs_schedule_viewer_highlight_g2

0xcff0,	// (0x00071cc2) bg_sp_fs_schedule_viewer_highlight_g3

0xcff8,	// (0x00071cca) bg_sp_fs_schedule_viewer_highlight_g4

0xd23d,	// (0x00071f0f) bg_sp_fs_schedule_viewer_highlight_g5

0xd008,	// (0x00071cda) bg_sp_fs_schedule_viewer_highlight_g6

0xd010,	// (0x00071ce2) bg_sp_fs_schedule_viewer_highlight_g7

0xd018,	// (0x00071cea) bg_sp_fs_schedule_viewer_highlight_g8

0x40a4,	// (0x00068d76) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe1b,	// (0x00074aed) bg_sp_fs_schedule_viewer_highlight_g

0xa57a,	// (0x0006f24c) bg_main_sp_fs_ribbon_pane

0xa472,	// (0x0006f144) main_sp_fs_ribbon_pane_g1

0x0b71,	// (0x00065843) main_sp_fs_ribbon_pane_t1

0xa47b,	// (0x0006f14d) main_sp_fs_ribbon_pane_t2

0x0b8f,	// (0x00065861) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe2e,	// (0x00074b00) main_sp_fs_ribbon_pane_t

0x0b9e,	// (0x00065870) main_sp_fs_ribbon_scheduler_pane

0x0ba6,	// (0x00065878) bg_main_sp_fs_ribbon_pane_g1

0x0baf,	// (0x00065881) bg_main_sp_fs_ribbon_pane_g2

0x0bb8,	// (0x0006588a) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe35,	// (0x00074b07) bg_main_sp_fs_ribbon_pane_g

0x0bc0,	// (0x00065892) main_sp_fs_ribbon_scheduler_pane_g1

0x0bc9,	// (0x0006589b) main_sp_fs_ribbon_scheduler_pane_g2

0x0bd2,	// (0x000658a4) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe3c,	// (0x00074b0e) main_sp_fs_ribbon_scheduler_pane_g

0xe098,	// (0x00072d6a) list_cale_mrui_pane

0x0bdb,	// (0x000658ad) sp_fs_scroll_pane_cp07_ParamLimits

0x0bdb,	// (0x000658ad) sp_fs_scroll_pane_cp07

0xa48a,	// (0x0006f15c) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa48a,	// (0x0006f15c) bg_sp_fs_schedule_viewer_highlight

0x0bfd,	// (0x000658cf) list_single_sp_fs_schedule_track_pane_cp01

0x0c05,	// (0x000658d7) list_sp_fs_schedule_track_pane

0x0c0d,	// (0x000658df) sp_fs_scroll_pane_cp06_ParamLimits

0x0c0d,	// (0x000658df) sp_fs_scroll_pane_cp06

0xc61e,	// (0x000712f0) bgmain_sp_fs_calendar_pane_g1

0x2dd7,	// (0x00067aa9) list_single_cale_mrui_pane_ParamLimits

0x2dd7,	// (0x00067aa9) list_single_cale_mrui_pane

0xe27c,	// (0x00072f4e) list_single_cale_mrui_row_pane_ParamLimits

0xe27c,	// (0x00072f4e) list_single_cale_mrui_row_pane

0xe289,	// (0x00072f5b) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe289,	// (0x00072f5b) list_single_cale_mrui_row_pane_g1

0xe2c1,	// (0x00072f93) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe2c1,	// (0x00072f93) list_single_cale_mrui_row_pane_t1

0x2dfa,	// (0x00067acc) list_single_cale_mrui_row_pane_t2_ParamLimits

0x2dfa,	// (0x00067acc) list_single_cale_mrui_row_pane_t2

0xe2d3,	// (0x00072fa5) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe2d3,	// (0x00072fa5) list_single_cale_mrui_row_pane_t3

0xe302,	// (0x00072fd4) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe302,	// (0x00072fd4) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe48,	// (0x00074b1a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe48,	// (0x00074b1a) list_single_cale_mrui_row_pane_t

0x2e60,	// (0x00067b32) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x2e60,	// (0x00067b32) list_single_cmail_header_editor_pane_bg_cp01

0x2e84,	// (0x00067b56) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x2e84,	// (0x00067b56) list_single_cmail_header_editor_pane_bg_cp02

0xa49a,	// (0x0006f16c) main_radioblah_text_pane_t1_ParamLimits

0xa49a,	// (0x0006f16c) main_radioblah_text_pane_t1

0x0c38,	// (0x0006590a) cam6_indi_pane_cp01

0x0c40,	// (0x00065912) cam6_mode_pane_cp01

0x0c48,	// (0x0006591a) cam6_pano_pane

0x0c51,	// (0x00065923) cam6_zoom_pane_cp01

0x0c59,	// (0x0006592b) cam6_pano_image_pane

0x0c62,	// (0x00065934) cam6_pano_pane_g1

0xdda4,	// (0x00072a76) cam6_pano_pane_g2

0x0c6b,	// (0x0006593d) cam6_pano_pane_g3

0x0c74,	// (0x00065946) cam6_pano_pane_g4

0xcb3c,	// (0x0007180e) cam6_pano_pane_g5

0x0c7d,	// (0x0006594f) cam6_pano_pane_g6

0x0c85,	// (0x00065957) cam6_pano_pane_g7

0x0c8d,	// (0x0006595f) cam6_pano_pane_g8

0x0c96,	// (0x00065968) cam6_pano_pane_g9

0x0008,

0xfe51,	// (0x00074b23) cam6_pano_pane_g

0xa57a,	// (0x0006f24c) main_browser_tag_pane

0x09e8,	// (0x000656ba) grid_navstr_albumart_pane

0x0c9f,	// (0x00065971) cell_navstr_albumart_pane_ParamLimits

0x0c9f,	// (0x00065971) cell_navstr_albumart_pane

0x5952,	// (0x0006a624) cell_navstr_albumart_pane_g1

0xbfc0,	// (0x00070c92) cell_navstr_albumart_pane_g2

0xbfd0,	// (0x00070ca2) cell_navstr_albumart_pane_g3

0xbfc8,	// (0x00070c9a) cell_navstr_albumart_pane_g4

0x0003,

0xfe64,	// (0x00074b36) cell_navstr_albumart_pane_g

0xa4b3,	// (0x0006f185) bt_list_pane_ParamLimits

0xa4b3,	// (0x0006f185) bt_list_pane

0xa4c6,	// (0x0006f198) bt_list_pane_t1

0xa4d5,	// (0x0006f1a7) bt_list_pane_t2

0x0001,

0xfe6d,	// (0x00074b3f) bt_list_pane_t

0xa57a,	// (0x0006f24c) main_cale_prevew_pane

0xa4e4,	// (0x0006f1b6) popup_cale_preview_window_ParamLimits

0xa4e4,	// (0x0006f1b6) popup_cale_preview_window

0xea7f,	// (0x00073751) bg_popup_preview_window_pane_cp05_ParamLimits

0xea7f,	// (0x00073751) bg_popup_preview_window_pane_cp05

0x0cfe,	// (0x000659d0) list_cale_preview_pane_ParamLimits

0x0cfe,	// (0x000659d0) list_cale_preview_pane

0xa4f9,	// (0x0006f1cb) list_double_cale_preview_pane_ParamLimits

0xa4f9,	// (0x0006f1cb) list_double_cale_preview_pane

0xa50a,	// (0x0006f1dc) list_single_cale_preview_pane_ParamLimits

0xa50a,	// (0x0006f1dc) list_single_cale_preview_pane

0x0d4c,	// (0x00065a1e) list_single_cale_preview_pane_g1

0x0d54,	// (0x00065a26) list_single_cale_preview_pane_t1_ParamLimits

0x0d54,	// (0x00065a26) list_single_cale_preview_pane_t1

0xa51e,	// (0x0006f1f0) list_double_cale_preview_pane_g1

0xa526,	// (0x0006f1f8) list_double_cale_preview_pane_t1_ParamLimits

0xa526,	// (0x0006f1f8) list_double_cale_preview_pane_t1

0xa53b,	// (0x0006f20d) list_double_cale_preview_pane_t2_ParamLimits

0xa53b,	// (0x0006f20d) list_double_cale_preview_pane_t2

0x0001,

0xfe72,	// (0x00074b44) list_double_cale_preview_pane_t_ParamLimits

0xfe72,	// (0x00074b44) list_double_cale_preview_pane_t

0xa57a,	// (0x0006f24c) main_ezdial_pane

0xea7f,	// (0x00073751) main_sp_fs_email_pane_ParamLimits

0xa187,	// (0x0006ee59) cmail_ddmenu_btn01_pane_ParamLimits

0xa187,	// (0x0006ee59) cmail_ddmenu_btn01_pane

0xa19a,	// (0x0006ee6c) cmail_ddmenu_btn02_pane_ParamLimits

0xa19a,	// (0x0006ee6c) cmail_ddmenu_btn02_pane

0xa1bd,	// (0x0006ee8f) cmail_ddmenu_btn03_pane_ParamLimits

0xa1bd,	// (0x0006ee8f) cmail_ddmenu_btn03_pane

0x2a56,	// (0x00067728) main_sp_fs_ctrlbar_pane_ParamLimits

0x2a77,	// (0x00067749) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa2ec,	// (0x0006efbe) list_cmail_body_pane_ParamLimits

0xe1c7,	// (0x00072e99) bg_button_pane_cp12

0x0925,	// (0x000655f7) list_single_cmail_header_detail_pane_g3_ParamLimits

0x0925,	// (0x000655f7) list_single_cmail_header_detail_pane_g3

0x2db3,	// (0x00067a85) list_single_cmail_header_detail_pane_t2_ParamLimits

0x2db3,	// (0x00067a85) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdf7,	// (0x00074ac9) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdf7,	// (0x00074ac9) list_single_cmail_header_detail_pane_t

0xe230,	// (0x00072f02) phacti_term_pane_t2_ParamLimits

0xe230,	// (0x00072f02) phacti_term_pane_t2

0x0001,

0xfe01,	// (0x00074ad3) phacti_term_pane_t_ParamLimits

0xfe01,	// (0x00074ad3) phacti_term_pane_t

0x0d81,	// (0x00065a53) aid_size_list_single_double

0xa553,	// (0x0006f225) popup_ezdial_listscroll_window

0xe331,	// (0x00073003) popup_number_entry_window_cp01

0x5439,	// (0x0006a10b) bg_popup_call_pane_cp09

0x0db2,	// (0x00065a84) ezdial_list_pane

0x0dba,	// (0x00065a8c) scroll_pane_cp23

0xc1e3,	// (0x00070eb5) bg_button_pane_cp028_ParamLimits

0xc1e3,	// (0x00070eb5) bg_button_pane_cp028

0xe33d,	// (0x0007300f) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe33d,	// (0x0007300f) cmail_ddmenu_btn01_pane_g1

0xe34c,	// (0x0007301e) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe34c,	// (0x0007301e) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe77,	// (0x00074b49) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe77,	// (0x00074b49) cmail_ddmenu_btn01_pane_g

0x0de0,	// (0x00065ab2) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x0de0,	// (0x00065ab2) cmail_ddmenu_btn01_pane_t1

0xc1e3,	// (0x00070eb5) bg_button_pane_cp029_ParamLimits

0xc1e3,	// (0x00070eb5) bg_button_pane_cp029

0xe35c,	// (0x0007302e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe35c,	// (0x0007302e) cmail_ddmenu_btn02_pane_g1

0xe377,	// (0x00073049) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe377,	// (0x00073049) cmail_ddmenu_btn02_pane_t1

0xea7f,	// (0x00073751) bg_button_pane_cp031_ParamLimits

0xea7f,	// (0x00073751) bg_button_pane_cp031

0xe35c,	// (0x0007302e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe35c,	// (0x0007302e) cmail_ddmenu_btn03_pane_g1

0xe377,	// (0x00073049) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe377,	// (0x00073049) cmail_ddmenu_btn03_pane_t1

0x8161,	// (0x0006ce33) cell_dialer2_keypad_pane_t1_ParamLimits

0x817b,	// (0x0006ce4d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x817b,	// (0x0006ce4d) cell_dialer2_keypad_pane_t1_copy1

0x9b58,	// (0x0006e82a) ncimui_group_button_pane

0xea7f,	// (0x00073751) main_sp_fs_calendar_pane_ParamLimits

0xa2ec,	// (0x0006efbe) list_single_cmail_header_caption_pane_ParamLimits

0xd567,	// (0x00072239) aid_recal_txt_sm_pane

0xa57a,	// (0x0006f24c) mian_recal_day_pane

0xe26a,	// (0x00072f3c) popup_sp_fs_cale_preview_window_ParamLimits

0xa57a,	// (0x0006f24c) list_recal_day_pane

0xe3a7,	// (0x00073079) list_single_recal_day_pane_ParamLimits

0xe3a7,	// (0x00073079) list_single_recal_day_pane

0x0e35,	// (0x00065b07) list_single_recal_day_pane_g1_ParamLimits

0x0e35,	// (0x00065b07) list_single_recal_day_pane_g1

0xe3b9,	// (0x0007308b) list_single_recal_day_pane_g2_ParamLimits

0xe3b9,	// (0x0007308b) list_single_recal_day_pane_g2

0xe3c5,	// (0x00073097) list_single_recal_day_pane_g3_ParamLimits

0xe3c5,	// (0x00073097) list_single_recal_day_pane_g3

0x2ea2,	// (0x00067b74) list_single_recal_day_pane_g4_ParamLimits

0x2ea2,	// (0x00067b74) list_single_recal_day_pane_g4

0xe3d1,	// (0x000730a3) list_single_recal_day_pane_g5_ParamLimits

0xe3d1,	// (0x000730a3) list_single_recal_day_pane_g5

0xe3dd,	// (0x000730af) list_single_recal_day_pane_g6_ParamLimits

0xe3dd,	// (0x000730af) list_single_recal_day_pane_g6

0x0005,

0xfe86,	// (0x00074b58) list_single_recal_day_pane_g_ParamLimits

0xfe86,	// (0x00074b58) list_single_recal_day_pane_g

0xe3e9,	// (0x000730bb) list_single_recal_day_pane_t1

0xe3f7,	// (0x000730c9) list_single_recal_day_pane_t2

0x0001,

0xfe93,	// (0x00074b65) list_single_recal_day_pane_t

0xe405,	// (0x000730d7) ncimui_query_button_pane_ParamLimits

0xe405,	// (0x000730d7) ncimui_query_button_pane

0xe415,	// (0x000730e7) ncimui_query_button_pane_t1_ParamLimits

0xe415,	// (0x000730e7) ncimui_query_button_pane_t1

0x0e64,	// (0x00065b36) ncimui_query_button_pane_t2_ParamLimits

0x0e64,	// (0x00065b36) ncimui_query_button_pane_t2

0x0001,

0xfe98,	// (0x00074b6a) ncimui_query_button_pane_t_ParamLimits

0xfe98,	// (0x00074b6a) ncimui_query_button_pane_t

0xe428,	// (0x000730fa) query_button_pane_ParamLimits

0xe428,	// (0x000730fa) query_button_pane

0xa57a,	// (0x0006f24c) bg_button_pane_cp0028

0x0e84,	// (0x00065b56) query_button_pane_t1

0x649d,	// (0x0006b16f) main_tport_pane_ParamLimits

0xa21b,	// (0x0006eeed) bg_popup_window_pane_cp01_ParamLimits

0xa21b,	// (0x0006eeed) bg_popup_window_pane_cp01

0xa233,	// (0x0006ef05) heading_pane_cp08_ParamLimits

0xa233,	// (0x0006ef05) heading_pane_cp08

0xa245,	// (0x0006ef17) heading_pane_cp07_ParamLimits

0xa245,	// (0x0006ef17) heading_pane_cp07

0x084e,	// (0x00065520) cell_tport_appsw_pane_g2

0x0002,

0xfde4,	// (0x00074ab6) cell_tport_appsw_pane_g

0xb207,	// (0x0006fed9) input_candi_list_open_g1

0x4af6,	// (0x000697c8) list_cale_time_pane_g6_ParamLimits

0x4af6,	// (0x000697c8) list_cale_time_pane_g6

0x7143,	// (0x0006be15) aid_size_touch_calib_1_ParamLimits

0x7143,	// (0x0006be15) aid_size_touch_calib_1

0x714f,	// (0x0006be21) aid_size_touch_calib_2_ParamLimits

0x714f,	// (0x0006be21) aid_size_touch_calib_2

0x7163,	// (0x0006be35) aid_size_touch_calib_3_ParamLimits

0x7163,	// (0x0006be35) aid_size_touch_calib_3

0x717b,	// (0x0006be4d) aid_size_touch_calib_4_ParamLimits

0x717b,	// (0x0006be4d) aid_size_touch_calib_4

0x718d,	// (0x0006be5f) main_touch_calib_button_group_pane_ParamLimits

0x718d,	// (0x0006be5f) main_touch_calib_button_group_pane

0x71a3,	// (0x0006be75) main_touch_calib_pane_g1_ParamLimits

0x71af,	// (0x0006be81) main_touch_calib_pane_g2_ParamLimits

0x71bb,	// (0x0006be8d) main_touch_calib_pane_g3_ParamLimits

0x71c7,	// (0x0006be99) main_touch_calib_pane_g4_ParamLimits

0xf7cb,	// (0x0007449d) main_touch_calib_pane_g_ParamLimits

0x71d3,	// (0x0006bea5) main_touch_calib_pane_t1_ParamLimits

0x71eb,	// (0x0006bebd) main_touch_calib_pane_t2_ParamLimits

0x7203,	// (0x0006bed5) main_touch_calib_pane_t3_ParamLimits

0x7215,	// (0x0006bee7) main_touch_calib_pane_t4_ParamLimits

0x7227,	// (0x0006bef9) main_touch_calib_pane_t5_ParamLimits

0xf7d4,	// (0x000744a6) main_touch_calib_pane_t_ParamLimits

0xc967,	// (0x00071639) list_single_fp_cale_pane_g3_ParamLimits

0xc967,	// (0x00071639) list_single_fp_cale_pane_g3

0xea7f,	// (0x00073751) bg_button_pane_cp012_ParamLimits

0xea7f,	// (0x00073751) bg_vkb2_func_pane_cp03_ParamLimits

0x9019,	// (0x0006dceb) cell_vitu2_function_top_pane_g1_ParamLimits

0xea7f,	// (0x00073751) bg_vkb2_func_pane_cp04_ParamLimits

0x9b0e,	// (0x0006e7e0) main_ncimui_button_group_pane_ParamLimits

0x9b0e,	// (0x0006e7e0) main_ncimui_button_group_pane

0x9b46,	// (0x0006e818) main_ncimui_pane_t3_ParamLimits

0x9b46,	// (0x0006e818) main_ncimui_pane_t3

0x0a3d,	// (0x0006570f) phacti_button_group_pane

0x0d81,	// (0x00065a53) aid_size_list_single_double_ParamLimits

0xa553,	// (0x0006f225) popup_ezdial_listscroll_window_ParamLimits

0xe331,	// (0x00073003) popup_number_entry_window_cp01_ParamLimits

0xe43a,	// (0x0007310c) phacti_button_pane_ParamLimits

0xe43a,	// (0x0007310c) phacti_button_pane

0xa57a,	// (0x0006f24c) bg_button_pane_cp14

0x0ea1,	// (0x00065b73) phacti_button_pane_t1

0xe449,	// (0x0007311b) main_touch_calib_button_pane_ParamLimits

0xe449,	// (0x0007311b) main_touch_calib_button_pane

0xad32,	// (0x0006fa04) bg_button_pane_cp18_ParamLimits

0xad32,	// (0x0006fa04) bg_button_pane_cp18

0x0ebf,	// (0x00065b91) main_touch_calib_button_pane_t1_ParamLimits

0x0ebf,	// (0x00065b91) main_touch_calib_button_pane_t1

0x0ed5,	// (0x00065ba7) main_touch_calib_button_pane_t2_ParamLimits

0x0ed5,	// (0x00065ba7) main_touch_calib_button_pane_t2

0x0001,

0xfe9d,	// (0x00074b6f) main_touch_calib_button_pane_t_ParamLimits

0xfe9d,	// (0x00074b6f) main_touch_calib_button_pane_t

0xa57a,	// (0x0006f24c) cell_ncimui_button_pane

0xa57a,	// (0x0006f24c) bg_button_pane_cp032

0x0ef3,	// (0x00065bc5) cell_ncimui_button_pane_t1

0xefc3,	// (0x00073c95) image3_infobar_pane_ParamLimits

0xefc3,	// (0x00073c95) image3_infobar_pane

0x9ea4,	// (0x0006eb76) fs_bigclock_status_pane_ParamLimits

0x9ea4,	// (0x0006eb76) fs_bigclock_status_pane

0x9eb1,	// (0x0006eb83) main_fs_bigclock_clock_pane_ParamLimits

0x9eb1,	// (0x0006eb83) main_fs_bigclock_clock_pane

0x9ec0,	// (0x0006eb92) main_fs_bigclock_indi_pane_ParamLimits

0x9ec0,	// (0x0006eb92) main_fs_bigclock_indi_pane

0x9ed4,	// (0x0006eba6) main_fs_bigclock_swipe_pane_ParamLimits

0x9ed4,	// (0x0006eba6) main_fs_bigclock_swipe_pane

0xa57a,	// (0x0006f24c) main_fs_clock_dumped_data

0xdeb1,	// (0x00072b83) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdeb1,	// (0x00072b83) list_single_fs_bigclock_indicator_pane_g1

0xdecb,	// (0x00072b9d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdecb,	// (0x00072b9d) list_single_fs_bigclock_indicator_pane_g2

0xdee5,	// (0x00072bb7) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdee5,	// (0x00072bb7) list_single_fs_bigclock_indicator_pane_g3

0xdeff,	// (0x00072bd1) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdeff,	// (0x00072bd1) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcd5,	// (0x000749a7) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcd5,	// (0x000749a7) list_single_fs_bigclock_indicator_pane_g

0xdf23,	// (0x00072bf5) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdf23,	// (0x00072bf5) list_single_fs_bigclock_indicator_pane_t1

0xdf4b,	// (0x00072c1d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdf4b,	// (0x00072c1d) list_single_fs_bigclock_indicator_pane_t2

0xdf73,	// (0x00072c45) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdf73,	// (0x00072c45) list_single_fs_bigclock_indicator_pane_t3

0xdf9b,	// (0x00072c6d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdf9b,	// (0x00072c6d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfce0,	// (0x000749b2) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfce0,	// (0x000749b2) list_single_fs_bigclock_indicator_pane_t

0x0f01,	// (0x00065bd3) image3_infobar_fav_pane_ParamLimits

0x0f01,	// (0x00065bd3) image3_infobar_fav_pane

0x0f11,	// (0x00065be3) image3_infobar_loc_pane_ParamLimits

0x0f11,	// (0x00065be3) image3_infobar_loc_pane

0x0f25,	// (0x00065bf7) image3_infobar_time_pane_ParamLimits

0x0f25,	// (0x00065bf7) image3_infobar_time_pane

0xc61e,	// (0x000712f0) image3_infobar_time_pane_g1

0x0f35,	// (0x00065c07) image3_infobar_time_pane_t1

0xc61e,	// (0x000712f0) image3_infobar_loc_pane_g1

0x0f43,	// (0x00065c15) image3_infobar_loc_pane_g2

0x0001,

0xfea2,	// (0x00074b74) image3_infobar_loc_pane_g

0x0f4b,	// (0x00065c1d) image3_infobar_loc_pane_t1

0xc61e,	// (0x000712f0) image3_infobar_fav_pane_g1

0x0f59,	// (0x00065c2b) image3_infobar_fav_pane_g2

0x0001,

0xfea7,	// (0x00074b79) image3_infobar_fav_pane_g

0x0f61,	// (0x00065c33) fs_bigclock_status_battery_pane

0x0f6a,	// (0x00065c3c) fs_bigclock_status_signal_pane

0x0f73,	// (0x00065c45) fs_bigclock_status_title_pane

0x0f7c,	// (0x00065c4e) fs_bigclock_status_signal_pane_g1

0x0f85,	// (0x00065c57) fs_bigclock_status_signal_pane_g2

0x0001,

0xfeac,	// (0x00074b7e) fs_bigclock_status_signal_pane_g

0x0f8d,	// (0x00065c5f) fs_bigclock_status_battery_pane_g1

0x0f96,	// (0x00065c68) fs_bigclock_status_battery_pane_g2

0x0001,

0xfeb1,	// (0x00074b83) fs_bigclock_status_battery_pane_g

0x0f9e,	// (0x00065c70) fs_bigclock_status_title_pane_t1

0xc61e,	// (0x000712f0) main_fs_bigclock_clock_pane_g1

0x0fac,	// (0x00065c7e) main_fs_bigclock_clock_pane_g2

0x0fac,	// (0x00065c7e) main_fs_bigclock_clock_pane_g3

0x0fac,	// (0x00065c7e) main_fs_bigclock_clock_pane_g4

0x0003,

0xfeb6,	// (0x00074b88) main_fs_bigclock_clock_pane_g

0x0fb4,	// (0x00065c86) main_fs_bigclock_clock_pane_t1

0x0fc2,	// (0x00065c94) main_fs_bigclock_clock_pane_t2

0x0001,

0xfebf,	// (0x00074b91) main_fs_bigclock_clock_pane_t

0x0fd1,	// (0x00065ca3) list_single_fs_bigclock_indicator_pane_ParamLimits

0x0fd1,	// (0x00065ca3) list_single_fs_bigclock_indicator_pane

0xe45c,	// (0x0007312e) list_single_fs_bigclock_pane_ParamLimits

0xe45c,	// (0x0007312e) list_single_fs_bigclock_pane

0x1049,	// (0x00065d1b) main_fs_bigclock_indicator_pane_t1

0x1058,	// (0x00065d2a) list_single_fs_bigclock_pane_g1

0x1060,	// (0x00065d32) list_single_fs_bigclock_pane_t1

0xc61e,	// (0x000712f0) main_fs_bigclock_swipe_pane_g1

0x109e,	// (0x00065d70) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfed0,	// (0x00074ba2) main_fs_bigclock_swipe_pane_g

0x10a6,	// (0x00065d78) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x10a6,	// (0x00065d78) main_fs_bigclock_swipe_pane_t1

0x4de2,	// (0x00069ab4) call_type_pane_ParamLimits

0xa57a,	// (0x0006f24c) main_btmg_pane

0xe2b5,	// (0x00072f87) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe2b5,	// (0x00072f87) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe43,	// (0x00074b15) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe43,	// (0x00074b15) list_single_cale_mrui_row_pane_g

0x0e25,	// (0x00065af7) list_recal_vselct_arw_lo_pane

0x0e2d,	// (0x00065aff) list_recal_vselct_arw_up_pane

0xe39e,	// (0x00073070) list_recal_vselct_pane

0x10c3,	// (0x00065d95) btmg_button_pane

0xe4bc,	// (0x0007318e) main_btmg_pane_g1

0xa57a,	// (0x0006f24c) bg_button_pane_cp044

0x10d3,	// (0x00065da5) btmg_button_pane_t1

0xc1db,	// (0x00070ead) aid_listscroll_gen

0xea7f,	// (0x00073751) main_cntbar_detail_pane

0x08ad,	// (0x0006557f) list_cmail_folder_pane

0x08bd,	// (0x0006558f) sp_fs_scroll_pane_cp03_ParamLimits

0x2eb0,	// (0x00067b82) list_single_fs_dyc_pane_cp01_ParamLimits

0x2eb0,	// (0x00067b82) list_single_fs_dyc_pane_cp01

0x10e1,	// (0x00065db3) aid_size_cmail_indent

0xf11a,	// (0x00073dec) list_single_dyc_row_pane_cp01

0xe4ec,	// (0x000731be) cntbar_detail_list_pane_ParamLimits

0xe4ec,	// (0x000731be) cntbar_detail_list_pane

0xe532,	// (0x00073204) main_cntbar_detail_cont_pane_ParamLimits

0xe532,	// (0x00073204) main_cntbar_detail_cont_pane

0xe546,	// (0x00073218) scroll_pane_cp032_ParamLimits

0xe546,	// (0x00073218) scroll_pane_cp032

0xe552,	// (0x00073224) cntbar_detail_list_event_pane_ParamLimits

0xe552,	// (0x00073224) cntbar_detail_list_event_pane

0xe4fc,	// (0x000731ce) cntbar_detail_list_shct_pane

0x1162,	// (0x00065e34) aid_list_gen

0xae8f,	// (0x0006fb61) aid_scroll

0xd54d,	// (0x0007221f) aid_size_touch_scroll_bar

0x0499,	// (0x0006516b) aid_list_double

0xa569,	// (0x0006f23b) aid_list_single

0xe563,	// (0x00073235) aid_list_single_lg

0x2ec5,	// (0x00067b97) aid_list_z_g_a_sm

0xa572,	// (0x0006f244) aid_list_z_g_d

0x2ecd,	// (0x00067b9f) aid_txt_z_prm

0x2edb,	// (0x00067bad) aid_txt_z_prm_cp01

0x2ee9,	// (0x00067bbb) aid_txt_z_sec

0xe56c,	// (0x0007323e) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe56c,	// (0x0007323e) main_cntbar_detail_cont_pane_g1

0xe580,	// (0x00073252) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe580,	// (0x00073252) main_cntbar_detail_cont_pane_g2

0x0001,

0xfed5,	// (0x00074ba7) main_cntbar_detail_cont_pane_g_ParamLimits

0xfed5,	// (0x00074ba7) main_cntbar_detail_cont_pane_g

0x118d,	// (0x00065e5f) main_cntbar_detail_cont_pane_t1

0x119b,	// (0x00065e6d) main_cntbar_detail_cont_pane_t2

0x11a9,	// (0x00065e7b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfeda,	// (0x00074bac) main_cntbar_detail_cont_pane_t

0xe590,	// (0x00073262) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe590,	// (0x00073262) cell_cntbar_detail_list_shct_pane

0x11c9,	// (0x00065e9b) cntbar_detail_list_shct_pane_g1

0x11d2,	// (0x00065ea4) cntbar_detail_list_shct_pane_g2

0x0001,

0xfee1,	// (0x00074bb3) cntbar_detail_list_shct_pane_g

0xe5a2,	// (0x00073274) cntbar_detail_list_event_pane_g1_ParamLimits

0xe5a2,	// (0x00073274) cntbar_detail_list_event_pane_g1

0xe5ae,	// (0x00073280) cntbar_detail_list_event_pane_g2_ParamLimits

0xe5ae,	// (0x00073280) cntbar_detail_list_event_pane_g2

0x0005,

0xfee6,	// (0x00074bb8) cntbar_detail_list_event_pane_g_ParamLimits

0xfee6,	// (0x00074bb8) cntbar_detail_list_event_pane_g

0xe61a,	// (0x000732ec) cntbar_detail_list_event_pane_t1_ParamLimits

0xe61a,	// (0x000732ec) cntbar_detail_list_event_pane_t1

0xe62f,	// (0x00073301) cntbar_detail_list_event_pane_t2_ParamLimits

0xe62f,	// (0x00073301) cntbar_detail_list_event_pane_t2

0x0002,

0xfef3,	// (0x00074bc5) cntbar_detail_list_event_pane_t_ParamLimits

0xfef3,	// (0x00074bc5) cntbar_detail_list_event_pane_t

0xc61e,	// (0x000712f0) cell_cntbar_detail_list_shct_pane_g1

0x53ba,	// (0x0006a08c) navi_pane_mv_g3

0xea7f,	// (0x00073751) main_cntbar_detail_pane_ParamLimits

0xa57a,	// (0x0006f24c) main_notif_wgt_pane

0xedd7,	// (0x00073aa9) aid_tch_main_mp4_pane_g4

0xefbb,	// (0x00073c8d) popup_slider_window_cp02

0xe39e,	// (0x00073070) list_recal_day_event_pane

0xe4c4,	// (0x00073196) cntbar_detail_btn_pane_ParamLimits

0xe4c4,	// (0x00073196) cntbar_detail_btn_pane

0xe4d7,	// (0x000731a9) cntbar_detail_btn_pane_cp01_ParamLimits

0xe4d7,	// (0x000731a9) cntbar_detail_btn_pane_cp01

0xe4fc,	// (0x000731ce) cntbar_detail_list_shct_pane_ParamLimits

0xe50c,	// (0x000731de) cntbar_detail_pane_g1_ParamLimits

0xe50c,	// (0x000731de) cntbar_detail_pane_g1

0xe51c,	// (0x000731ee) cntbar_detail_pane_t1_ParamLimits

0xe51c,	// (0x000731ee) cntbar_detail_pane_t1

0xe5ba,	// (0x0007328c) cntbar_detail_list_event_pane_g3_ParamLimits

0xe5ba,	// (0x0007328c) cntbar_detail_list_event_pane_g3

0xe5d2,	// (0x000732a4) cntbar_detail_list_event_pane_g4_ParamLimits

0xe5d2,	// (0x000732a4) cntbar_detail_list_event_pane_g4

0xe5ea,	// (0x000732bc) cntbar_detail_list_event_pane_g5_ParamLimits

0xe5ea,	// (0x000732bc) cntbar_detail_list_event_pane_g5

0xe602,	// (0x000732d4) cntbar_detail_list_event_pane_g6_ParamLimits

0xe602,	// (0x000732d4) cntbar_detail_list_event_pane_g6

0xe644,	// (0x00073316) cntbar_detail_list_event_pane_t3_ParamLimits

0xe644,	// (0x00073316) cntbar_detail_list_event_pane_t3

0xe656,	// (0x00073328) popup_notif_wgt_window_ParamLimits

0xe656,	// (0x00073328) popup_notif_wgt_window

0xe66b,	// (0x0007333d) popup_submenu_window_cp01_ParamLimits

0xe66b,	// (0x0007333d) popup_submenu_window_cp01

0x5439,	// (0x0006a10b) bg_popup_window_pane_cp10

0x12a9,	// (0x00065f7b) listscroll_notif_wgt_pane

0x12b1,	// (0x00065f83) list_notif_wgt_window

0x12ba,	// (0x00065f8c) scroll_pane_cp033

0x12c3,	// (0x00065f95) list_notif_wgt_row_pane_ParamLimits

0x12c3,	// (0x00065f95) list_notif_wgt_row_pane

0x12d5,	// (0x00065fa7) aid_size_list_notif_wgt_del

0x12de,	// (0x00065fb0) list_notif_wgt_row_pane_g1

0x12e6,	// (0x00065fb8) list_notif_wgt_row_pane_g2

0x12ee,	// (0x00065fc0) list_notif_wgt_row_pane_g3

0x0002,

0xfefa,	// (0x00074bcc) list_notif_wgt_row_pane_g

0x12f7,	// (0x00065fc9) list_notif_wgt_row_pane_t1

0x1305,	// (0x00065fd7) list_notif_wgt_row_pane_t2

0x1313,	// (0x00065fe5) list_notif_wgt_row_pane_t3

0x0002,

0xff01,	// (0x00074bd3) list_notif_wgt_row_pane_t

0xd245,	// (0x00071f17) list_recal_day_event_pane_g1

0x1321,	// (0x00065ff3) list_recal_day_event_pane_t1

0xa57a,	// (0x0006f24c) bg_button_pane_cp045

0xe67b,	// (0x0007334d) cntbar_detail_btn_pane_t1

0xc1e3,	// (0x00070eb5) main_callh_pane_ParamLimits

0xc1e3,	// (0x00070eb5) main_callh_pane

0xa57a,	// (0x0006f24c) main_coverflow0_pane

0xa57a,	// (0x0006f24c) main_wgtman_pane

0x9ee0,	// (0x0006ebb2) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9ee0,	// (0x0006ebb2) main_fs_bigclock_unlock_btn_pane

0x083d,	// (0x0006550f) bg_button_pane_cp16

0x0856,	// (0x00065528) cell_tport_appsw_pane_g3

0xe689,	// (0x0007335b) cf0_flow_pane_ParamLimits

0xe689,	// (0x0007335b) cf0_flow_pane

0x134d,	// (0x0006601f) listscroll_cf0_pane

0x1356,	// (0x00066028) main_cf0_pane_g1

0xe69e,	// (0x00073370) main_cf0_pane_t1_ParamLimits

0xe69e,	// (0x00073370) main_cf0_pane_t1

0xe6b4,	// (0x00073386) main_cf0_pane_t2_ParamLimits

0xe6b4,	// (0x00073386) main_cf0_pane_t2

0x0001,

0xff08,	// (0x00074bda) main_cf0_pane_t_ParamLimits

0xff08,	// (0x00074bda) main_cf0_pane_t

0x1384,	// (0x00066056) scroll_pane_cp11

0xe6ca,	// (0x0007339c) cf0_flow_pane_g1

0xe6d2,	// (0x000733a4) cf0_flow_pane_g2

0x0001,

0xff0d,	// (0x00074bdf) cf0_flow_pane_g

0xe6da,	// (0x000733ac) cf0_flow_pane_t1

0xa57a,	// (0x0006f24c) main_call6_pane

0xa57a,	// (0x0006f24c) main_calllock_pane

0xe6e8,	// (0x000733ba) call6_btn_grp_pane_ParamLimits

0xe6e8,	// (0x000733ba) call6_btn_grp_pane

0xe6fe,	// (0x000733d0) call6_pane_g1_ParamLimits

0xe6fe,	// (0x000733d0) call6_pane_g1

0xe711,	// (0x000733e3) popup_call6_1st_window_ParamLimits

0xe711,	// (0x000733e3) popup_call6_1st_window

0xe720,	// (0x000733f2) popup_call6_2nd_window_ParamLimits

0xe720,	// (0x000733f2) popup_call6_2nd_window

0xe72f,	// (0x00073401) cell_call6_btn_pane_ParamLimits

0xe72f,	// (0x00073401) cell_call6_btn_pane

0x5439,	// (0x0006a10b) bg_popup_call2_in_pane_cp03

0x13ec,	// (0x000660be) popup_call6_1st_window_g1

0x13f4,	// (0x000660c6) popup_call6_1st_window_g2

0x13fc,	// (0x000660ce) popup_call6_1st_window_g3

0x0002,

0xff12,	// (0x00074be4) popup_call6_1st_window_g

0x1404,	// (0x000660d6) popup_call6_1st_window_t1

0x1413,	// (0x000660e5) popup_call6_1st_window_t2

0x1421,	// (0x000660f3) popup_call6_1st_window_t3

0x0002,

0xff19,	// (0x00074beb) popup_call6_1st_window_t

0x5439,	// (0x0006a10b) bg_popup_call2_in_pane_cp04

0x13ec,	// (0x000660be) popup_call6_2nd_window_g1

0x13f4,	// (0x000660c6) popup_call6_2nd_window_g2

0x13fc,	// (0x000660ce) popup_call6_2nd_window_g3

0x0002,

0xff12,	// (0x00074be4) popup_call6_2nd_window_g

0x1404,	// (0x000660d6) popup_call6_2nd_window_t1

0xa57a,	// (0x0006f24c) bg_button_pane_cp15

0x142f,	// (0x00066101) cell_call6_btn_pane_g1

0x1438,	// (0x0006610a) cell_call6_btn_pane_t1

0xe743,	// (0x00073415) listscroll_wgtman_pane_ParamLimits

0xe743,	// (0x00073415) listscroll_wgtman_pane

0xe759,	// (0x0007342b) wgtman_btn_pane_ParamLimits

0xe759,	// (0x0007342b) wgtman_btn_pane

0x5028,	// (0x00069cfa) aid_scroll_copy1

0x1460,	// (0x00066132) list_wgtman_pane

0xe770,	// (0x00073442) wgtman_btn_pane_g1_ParamLimits

0xe770,	// (0x00073442) wgtman_btn_pane_g1

0xe784,	// (0x00073456) wgtman_btn_pane_t1_ParamLimits

0xe784,	// (0x00073456) wgtman_btn_pane_t1

0x1488,	// (0x0006615a) wgtman_btn_pane_t2_ParamLimits

0x1488,	// (0x0006615a) wgtman_btn_pane_t2

0x0001,

0xff20,	// (0x00074bf2) wgtman_btn_pane_t_ParamLimits

0xff20,	// (0x00074bf2) wgtman_btn_pane_t

0xe79f,	// (0x00073471) listrow_wgtman_pane_ParamLimits

0xe79f,	// (0x00073471) listrow_wgtman_pane

0xe7b0,	// (0x00073482) listrow_wgtman_pane_g1

0xe7b9,	// (0x0007348b) listrow_wgtman_pane_g2

0x0001,

0xff25,	// (0x00074bf7) listrow_wgtman_pane_g

0x2ef7,	// (0x00067bc9) listrow_wgtman_pane_t1

0x2f05,	// (0x00067bd7) listrow_wgtman_pane_t2

0x0001,

0xff2a,	// (0x00074bfc) listrow_wgtman_pane_t

0x2f13,	// (0x00067be5) wait_bar_pane_cp09

0x14bc,	// (0x0006618e) main_calllock_btn_pane

0x14c4,	// (0x00066196) main_calllock_pane_g1

0xa57a,	// (0x0006f24c) bg_button_pane_cp17

0x14cd,	// (0x0006619f) main_calllock_btn_pane_g1

0x14d6,	// (0x000661a8) main_calllock_btn_pane_t1

0xa57a,	// (0x0006f24c) main_dialer3_pane

0xa57a,	// (0x0006f24c) main_fmrd2_pane

0xc61e,	// (0x000712f0) main_fs_bigclock_unlock_btn_pane_g1

0x14ed,	// (0x000661bf) main_fs_bigclock_unlock_btn_pane_t1

0xe7c1,	// (0x00073493) area_fmrd2_info_pane_ParamLimits

0xe7c1,	// (0x00073493) area_fmrd2_info_pane

0xe7d1,	// (0x000734a3) area_fmrd2_visual_pane_ParamLimits

0xe7d1,	// (0x000734a3) area_fmrd2_visual_pane

0xe7df,	// (0x000734b1) fmrd2_indi_pane_ParamLimits

0xe7df,	// (0x000734b1) fmrd2_indi_pane

0xe7ec,	// (0x000734be) area_fmrd2_visual_pane_g1

0xe7f4,	// (0x000734c6) area_fmrd2_visual_pane_t1

0xe802,	// (0x000734d4) area_fmrd2_visual_pane_t2

0xe810,	// (0x000734e2) area_fmrd2_visual_pane_t3

0x0002,

0xff34,	// (0x00074c06) area_fmrd2_visual_pane_t

0xe81e,	// (0x000734f0) area_fmrd2_info_pane_g1

0xe826,	// (0x000734f8) area_fmrd2_info_pane_t1

0xe834,	// (0x00073506) area_fmrd2_info_pane_t2

0xe842,	// (0x00073514) area_fmrd2_info_pane_t3

0xe850,	// (0x00073522) area_fmrd2_info_pane_t4

0x0003,

0xff3b,	// (0x00074c0d) area_fmrd2_info_pane_t

0xe85e,	// (0x00073530) fmrd2_indi_pane_t1

0xe86c,	// (0x0007353e) fmrd2_indi_pane_t2

0xe87a,	// (0x0007354c) fmrd2_indi_pane_t3

0x0002,

0xff44,	// (0x00074c16) fmrd2_indi_pane_t

0xdf0e,	// (0x00072be0) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdf0e,	// (0x00072be0) list_single_fs_bigclock_indicator_pane_g5

0xdfb0,	// (0x00072c82) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdfb0,	// (0x00072c82) list_single_fs_bigclock_indicator_pane_t5

0xa3e1,	// (0x0006f0b3) aid_cell_bcale_month_pane_ParamLimits

0xa3e1,	// (0x0006f0b3) aid_cell_bcale_month_pane

0xa3f3,	// (0x0006f0c5) bcale_month_pane_ParamLimits

0xa3f3,	// (0x0006f0c5) bcale_month_pane

0xa405,	// (0x0006f0d7) bcale_preview_pane_ParamLimits

0xa405,	// (0x0006f0d7) bcale_preview_pane

0x1060,	// (0x00065d32) list_single_fs_bigclock_pane_t1_ParamLimits

0x107a,	// (0x00065d4c) list_single_fs_bigclock_pane_t2_ParamLimits

0x107a,	// (0x00065d4c) list_single_fs_bigclock_pane_t2

0x0001,

0xfecb,	// (0x00074b9d) list_single_fs_bigclock_pane_t_ParamLimits

0xfecb,	// (0x00074b9d) list_single_fs_bigclock_pane_t

0x14e5,	// (0x000661b7) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff2f,	// (0x00074c01) main_fs_bigclock_unlock_btn_pane_g

0xe888,	// (0x0007355a) aid_dia3_key_size_ParamLimits

0xe888,	// (0x0007355a) aid_dia3_key_size

0xe897,	// (0x00073569) aid_dia3_listrow_size_ParamLimits

0xe897,	// (0x00073569) aid_dia3_listrow_size

0xe8a3,	// (0x00073575) dia3_keypad_fun_pane_ParamLimits

0xe8a3,	// (0x00073575) dia3_keypad_fun_pane

0xe8b7,	// (0x00073589) dia3_keypad_num_pane_ParamLimits

0xe8b7,	// (0x00073589) dia3_keypad_num_pane

0xe8c8,	// (0x0007359a) dia3_listscroll_pane_ParamLimits

0xe8c8,	// (0x0007359a) dia3_listscroll_pane

0xe8d9,	// (0x000735ab) dia3_numentry_pane_ParamLimits

0xe8d9,	// (0x000735ab) dia3_numentry_pane

0x1607,	// (0x000662d9) dia3_list_pane

0x1610,	// (0x000662e2) scroll_pane_cp12

0xa57a,	// (0x0006f24c) bg_dia3_numentry_pane

0x1619,	// (0x000662eb) dia3_numentry_pane_t1

0xe8e8,	// (0x000735ba) cell_dia3_key_num_pane

0xe8f0,	// (0x000735c2) cell_dia3_key0_fun_pane_ParamLimits

0xe8f0,	// (0x000735c2) cell_dia3_key0_fun_pane

0xe904,	// (0x000735d6) cell_dia3_key1_fun_pane_ParamLimits

0xe904,	// (0x000735d6) cell_dia3_key1_fun_pane

0xd55e,	// (0x00072230) dia3_listrow_pane

0xdc3b,	// (0x0007290d) bg_dia3_numentry_pane_g1

0xa57a,	// (0x0006f24c) bg_button_pane_cp21

0x1653,	// (0x00066325) cell_dia3_key_num_pane_t1

0x1661,	// (0x00066333) cell_dia3_key_num_pane_t2

0x1670,	// (0x00066342) cell_dia3_key_num_pane_t3

0x167f,	// (0x00066351) cell_dia3_key_num_pane_t4

0x0003,

0xff4b,	// (0x00074c1d) cell_dia3_key_num_pane_t

0xa57a,	// (0x0006f24c) bg_button_pane_cp19

0x168e,	// (0x00066360) cell_dia3_key0_fun_pane_g1

0xa57a,	// (0x0006f24c) bg_button_pane_cp20

0xe91b,	// (0x000735ed) cell_dia3_key1_fun_pane_g1

0xe923,	// (0x000735f5) area_left_week_number_pane

0xe92c,	// (0x000735fe) area_top_day_name_pane

0xe935,	// (0x00073607) frame_month_view_pane

0xe93d,	// (0x0007360f) grid_month_view_pane

0xe947,	// (0x00073619) cell_top_day_name_pane_ParamLimits

0xe947,	// (0x00073619) cell_top_day_name_pane

0xe95d,	// (0x0007362f) cell_area_left_week_number_pane_ParamLimits

0xe95d,	// (0x0007362f) cell_area_left_week_number_pane

0xe971,	// (0x00073643) cell_month_view_pane_ParamLimits

0xe971,	// (0x00073643) cell_month_view_pane

0x1707,	// (0x000663d9) frm_month_g1

0xe98c,	// (0x0007365e) frm_month_g2

0xe994,	// (0x00073666) frm_month_g3

0xe99c,	// (0x0007366e) frm_month_g4

0xe9a4,	// (0x00073676) frm_month_g5

0xe9ac,	// (0x0007367e) frm_month_g6

0xe9b4,	// (0x00073686) frm_month_g7

0x1740,	// (0x00066412) frm_month_g8

0xe9bc,	// (0x0007368e) frm_month_g9

0xe9c5,	// (0x00073697) frm_month_g10

0xe9ce,	// (0x000736a0) frm_month_g11

0xe9d7,	// (0x000736a9) frm_month_g12

0xe9e0,	// (0x000736b2) frm_month_g13

0xe9e9,	// (0x000736bb) frm_month_g14

0xe9f2,	// (0x000736c4) frm_month_g15

0xe9fb,	// (0x000736cd) frm_month_g16

0x000f,

0xff54,	// (0x00074c26) frm_month_g

0xea04,	// (0x000736d6) cell_top_day_name_pane_t1

0xea13,	// (0x000736e5) cell_area_left_week_number_pane_g1

0xea04,	// (0x000736d6) cell_area_left_week_number_pane_t1

0xc61e,	// (0x000712f0) cell_month_view_pane_g1

0xea1b,	// (0x000736ed) cell_month_view_pane_t1

0xa57a,	// (0x0006f24c) main_fps_pane

0x06bf,	// (0x00065391) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x06bf,	// (0x00065391) cmail_ddmenu_btn02_pane_cp1

0x06db,	// (0x000653ad) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x06db,	// (0x000653ad) cmail_ddmenu_btn02_pane_cp2

0xe36b,	// (0x0007303d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe36b,	// (0x0007303d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe7c,	// (0x00074b4e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe7c,	// (0x00074b4e) cmail_ddmenu_btn02_pane_g

0xe38c,	// (0x0007305e) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe38c,	// (0x0007305e) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe81,	// (0x00074b53) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe81,	// (0x00074b53) cmail_ddmenu_btn02_pane_t

0xea2a,	// (0x000736fc) fps_text_pane_ParamLimits

0xea2a,	// (0x000736fc) fps_text_pane

0xea40,	// (0x00073712) main_fps_pane_g1_ParamLimits

0xea40,	// (0x00073712) main_fps_pane_g1

0xea56,	// (0x00073728) wait_bar_pane_cp010_ParamLimits

0xea56,	// (0x00073728) wait_bar_pane_cp010

0xea67,	// (0x00073739) fps_text_pane_t1_ParamLimits

0xea67,	// (0x00073739) fps_text_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Large
