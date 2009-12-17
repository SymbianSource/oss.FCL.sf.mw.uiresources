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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00084ca0 };

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
0x261f,	// (0x000872bf) Screen

0x262b,	// (0x000872cb) application_window

0x267f,	// (0x0008731f) area_bottom_pane_ParamLimits

0x267f,	// (0x0008731f) area_bottom_pane

0x26b8,	// (0x00087358) area_top_pane_ParamLimits

0x26b8,	// (0x00087358) area_top_pane

0x07b3,	// (0x00085453) call_video_uplink_pane_ParamLimits

0x07b3,	// (0x00085453) call_video_uplink_pane

0x2732,	// (0x000873d2) main_pane_ParamLimits

0x2732,	// (0x000873d2) main_pane

0x10d6,	// (0x00085d76) context_pane

0x59e3,	// (0x0008a683) navi_pane

0x5a0b,	// (0x0008a6ab) popup_cale_events_window_ParamLimits

0x5a0b,	// (0x0008a6ab) popup_cale_events_window

0x10e9,	// (0x00085d89) popup_mup_playback_window

0x5a23,	// (0x0008a6c3) signal_pane

0x2c64,	// (0x00087904) main_browser_pane

0xb636,	// (0x000902d6) main_burst_pane

0x5735,	// (0x0008a3d5) main_calc_pane

0xb636,	// (0x000902d6) main_cale_day_pane

0x2c64,	// (0x00087904) main_cale_month_pane

0xb636,	// (0x000902d6) main_cale_week_pane

0xb636,	// (0x000902d6) main_call_pane

0x0be4,	// (0x00085884) main_call_poc_pane

0xb636,	// (0x000902d6) main_camera_pane

0xb636,	// (0x000902d6) main_chi_dic_pane

0xb4bb,	// (0x0009015b) main_clock_pane

0x0be4,	// (0x00085884) main_fmradio_pane

0xb636,	// (0x000902d6) main_graph_messa_pane

0x0be4,	// (0x00085884) main_help_pane

0x2c64,	// (0x00087904) main_im_pane

0x2905,	// (0x000875a5) main_image_pane_ParamLimits

0x2905,	// (0x000875a5) main_image_pane

0x0be4,	// (0x00085884) main_location2_pane

0xb636,	// (0x000902d6) main_location_pane

0x0be4,	// (0x00085884) main_messa_pane

0x0be4,	// (0x00085884) main_mp2_pane

0xb636,	// (0x000902d6) main_mp_pane

0x0be4,	// (0x00085884) main_msg_pane

0x0be4,	// (0x00085884) main_mup_eq_pane

0x0be4,	// (0x00085884) main_mup_pane

0xb636,	// (0x000902d6) main_notes_pane

0x0be4,	// (0x00085884) main_pec_pane

0x0be4,	// (0x00085884) main_phob_pane

0x0be4,	// (0x00085884) main_pinb_pane

0x0be4,	// (0x00085884) main_postcard_pane

0x0be4,	// (0x00085884) main_qdial_pane

0xb636,	// (0x000902d6) main_skin_pane

0x0be4,	// (0x00085884) main_smil2_pane

0xb636,	// (0x000902d6) main_smil_pane

0xb636,	// (0x000902d6) main_video_pane

0xb636,	// (0x000902d6) main_video_tele_pane

0x2905,	// (0x000875a5) main_viewer_pane_ParamLimits

0x2905,	// (0x000875a5) main_viewer_pane

0xb636,	// (0x000902d6) main_vorec_pane

0x5789,	// (0x0008a429) popup_blid_sat_info_window_ParamLimits

0x5789,	// (0x0008a429) popup_blid_sat_info_window

0x57e1,	// (0x0008a481) popup_dyc_status_message_window_ParamLimits

0x57e1,	// (0x0008a481) popup_dyc_status_message_window

0x57fb,	// (0x0008a49b) popup_grid_large_graphic_window_ParamLimits

0x57fb,	// (0x0008a49b) popup_grid_large_graphic_window

0x58b7,	// (0x0008a557) popup_loc_request_window_ParamLimits

0x58b7,	// (0x0008a557) popup_loc_request_window

0x59bb,	// (0x0008a65b) popup_wml_address_window_ParamLimits

0x59bb,	// (0x0008a65b) popup_wml_address_window

0x556f,	// (0x0008a20f) call_muted_g1

0x5224,	// (0x00089ec4) popup_call_audio_conf_window_ParamLimits

0x5224,	// (0x00089ec4) popup_call_audio_conf_window

0x5583,	// (0x0008a223) popup_call_audio_first_window_ParamLimits

0x5583,	// (0x0008a223) popup_call_audio_first_window

0x55f9,	// (0x0008a299) popup_call_audio_in_window_ParamLimits

0x55f9,	// (0x0008a299) popup_call_audio_in_window

0x5635,	// (0x0008a2d5) popup_call_audio_out_window_ParamLimits

0x5635,	// (0x0008a2d5) popup_call_audio_out_window

0x566f,	// (0x0008a30f) popup_call_audio_second_window_ParamLimits

0x566f,	// (0x0008a30f) popup_call_audio_second_window

0x56c5,	// (0x0008a365) popup_call_audio_wait_window_ParamLimits

0x56c5,	// (0x0008a365) popup_call_audio_wait_window

0x56fa,	// (0x0008a39a) popup_number_entry_window_ParamLimits

0x56fa,	// (0x0008a39a) popup_number_entry_window

0x07d1,	// (0x00085471) bg_popup_call_pane_cp05_ParamLimits

0x07d1,	// (0x00085471) bg_popup_call_pane_cp05

0x07f1,	// (0x00085491) popup_number_entry_window_t1

0x0804,	// (0x000854a4) popup_number_entry_window_t2

0x0816,	// (0x000854b6) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x00093dcf) popup_number_entry_window_t

0x0828,	// (0x000854c8) text_title_cp2

0x083b,	// (0x000854db) bg_popup_call_pane_cp_ParamLimits

0x083b,	// (0x000854db) bg_popup_call_pane_cp

0x0849,	// (0x000854e9) call_thumbnail_pane

0x0851,	// (0x000854f1) popup_call_audio_in_window_g1_ParamLimits

0x0851,	// (0x000854f1) popup_call_audio_in_window_g1

0x085d,	// (0x000854fd) popup_call_audio_in_window_g2_ParamLimits

0x085d,	// (0x000854fd) popup_call_audio_in_window_g2

0x0869,	// (0x00085509) popup_call_audio_in_window_g3_ParamLimits

0x0869,	// (0x00085509) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x00093dd8) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x00093dd8) popup_call_audio_in_window_g

0x0875,	// (0x00085515) popup_call_audio_in_window_t1_ParamLimits

0x0875,	// (0x00085515) popup_call_audio_in_window_t1

0x0891,	// (0x00085531) popup_call_audio_in_window_t2_ParamLimits

0x0891,	// (0x00085531) popup_call_audio_in_window_t2

0x08ad,	// (0x0008554d) popup_call_audio_in_window_t3_ParamLimits

0x08ad,	// (0x0008554d) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x00093ddf) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x00093ddf) popup_call_audio_in_window_t

0x083b,	// (0x000854db) bg_popup_call_pane_cp01_ParamLimits

0x083b,	// (0x000854db) bg_popup_call_pane_cp01

0x0849,	// (0x000854e9) call_thumbnail_pane_cp02

0x08c0,	// (0x00085560) call_type_pane_cp022

0x08c8,	// (0x00085568) popup_call_audio_out_window_g1_ParamLimits

0x08c8,	// (0x00085568) popup_call_audio_out_window_g1

0x08da,	// (0x0008557a) popup_call_audio_out_window_g2_ParamLimits

0x08da,	// (0x0008557a) popup_call_audio_out_window_g2

0x08e6,	// (0x00085586) popup_call_audio_out_window_g3_ParamLimits

0x08e6,	// (0x00085586) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x00093de6) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x00093de6) popup_call_audio_out_window_g

0x08f8,	// (0x00085598) popup_call_audio_out_window_t1_ParamLimits

0x08f8,	// (0x00085598) popup_call_audio_out_window_t1

0x0910,	// (0x000855b0) popup_call_audio_out_window_t2_ParamLimits

0x0910,	// (0x000855b0) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x00093ded) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x00093ded) popup_call_audio_out_window_t

0x0925,	// (0x000855c5) bg_popup_call_pane_ParamLimits

0x0925,	// (0x000855c5) bg_popup_call_pane

0x28e1,	// (0x00087581) call_thumbnail_pane_cp_ParamLimits

0x28e1,	// (0x00087581) call_thumbnail_pane_cp

0x09a9,	// (0x00085649) call_type_pane_cp01_ParamLimits

0x09a9,	// (0x00085649) call_type_pane_cp01

0x09ed,	// (0x0008568d) popup_call_audio_first_window_g1_ParamLimits

0x09ed,	// (0x0008568d) popup_call_audio_first_window_g1

0x0a39,	// (0x000856d9) popup_call_audio_first_window_g2_ParamLimits

0x0a39,	// (0x000856d9) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x00093df2) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x00093df2) popup_call_audio_first_window_g

0x0a7d,	// (0x0008571d) popup_call_audio_first_window_t1_ParamLimits

0x0a7d,	// (0x0008571d) popup_call_audio_first_window_t1

0x0b29,	// (0x000857c9) popup_call_audio_first_window_t4_ParamLimits

0x0b29,	// (0x000857c9) popup_call_audio_first_window_t4

0x0bb5,	// (0x00085855) popup_call_audio_first_window_t5_ParamLimits

0x0bb5,	// (0x00085855) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x00093df7) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x00093df7) popup_call_audio_first_window_t

0x0be4,	// (0x00085884) bg_popup_call_pane_cp02

0x0bee,	// (0x0008588e) call_type_pane_cp023

0x0bf6,	// (0x00085896) popup_call_audio_wait_window_g1

0x0bfe,	// (0x0008589e) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x00093dfe) popup_call_audio_wait_window_g

0x0c06,	// (0x000858a6) popup_call_audio_wait_window_t3

0x0c14,	// (0x000858b4) bg_popup_call_pane_cp03_ParamLimits

0x0c14,	// (0x000858b4) bg_popup_call_pane_cp03

0x0c74,	// (0x00085914) call_thumbnail_pane_cp011_ParamLimits

0x0c74,	// (0x00085914) call_thumbnail_pane_cp011

0x0c80,	// (0x00085920) call_type_pane_cp034_ParamLimits

0x0c80,	// (0x00085920) call_type_pane_cp034

0x0cbc,	// (0x0008595c) popup_call_audio_second_window_g1_ParamLimits

0x0cbc,	// (0x0008595c) popup_call_audio_second_window_g1

0x0cf8,	// (0x00085998) popup_call_audio_second_window_g2_ParamLimits

0x0cf8,	// (0x00085998) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x00093e03) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x00093e03) popup_call_audio_second_window_g

0x0d34,	// (0x000859d4) popup_call_audio_second_window_t1_ParamLimits

0x0d34,	// (0x000859d4) popup_call_audio_second_window_t1

0x0db5,	// (0x00085a55) popup_call_audio_second_window_t2_ParamLimits

0x0db5,	// (0x00085a55) popup_call_audio_second_window_t2

0x0deb,	// (0x00085a8b) popup_call_audio_second_window_t3_ParamLimits

0x0deb,	// (0x00085a8b) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x00093e08) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x00093e08) popup_call_audio_second_window_t

0x0be4,	// (0x00085884) bg_popup_call_pane_cp04

0x0e21,	// (0x00085ac1) list_conf_pane

0x0e29,	// (0x00085ac9) popup_call_audio_conf_window_t1

0x0e37,	// (0x00085ad7) call_thumbnail_pane_g1

0x2905,	// (0x000875a5) bg_pinb_pane_ParamLimits

0x2905,	// (0x000875a5) bg_pinb_pane

0x2913,	// (0x000875b3) find_pinb_pane

0x291c,	// (0x000875bc) listscroll_pinb_pane_ParamLimits

0x291c,	// (0x000875bc) listscroll_pinb_pane

0x292b,	// (0x000875cb) pinb_bg_pane_g1

0x2935,	// (0x000875d5) pinb_bg_pane_g2

0x2941,	// (0x000875e1) pinb_bg_pane_g3

0x294d,	// (0x000875ed) pinb_bg_pane_g4

0x2959,	// (0x000875f9) pinb_bg_pane_g5

0x2965,	// (0x00087605) pinb_bg_pane_g6

0x2970,	// (0x00087610) pinb_bg_pane_g7

0x297b,	// (0x0008761b) pinb_bg_pane_g8

0x2986,	// (0x00087626) pinb_bg_pane_g9

0x2990,	// (0x00087630) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x00093e0f) pinb_bg_pane_g

0x29ad,	// (0x0008764d) grid_pinb_pane

0x29b6,	// (0x00087656) list_pinb_pane

0x29bf,	// (0x0008765f) scroll_pane_cp01_ParamLimits

0x29bf,	// (0x0008765f) scroll_pane_cp01

0x29d1,	// (0x00087671) find_pinb_pane_g1_ParamLimits

0x29d1,	// (0x00087671) find_pinb_pane_g1

0x29e9,	// (0x00087689) find_pinb_pane_t1

0x29fb,	// (0x0008769b) find_pinb_pane_t2

0x0001,

0xf189,	// (0x00093e29) find_pinb_pane_t

0x2a10,	// (0x000876b0) input_focus_pane_cp01_ParamLimits

0x2a10,	// (0x000876b0) input_focus_pane_cp01

0x2a1c,	// (0x000876bc) cell_pinb_pane_ParamLimits

0x2a1c,	// (0x000876bc) cell_pinb_pane

0x2a45,	// (0x000876e5) cell_pinb_pane_g1_ParamLimits

0x2a45,	// (0x000876e5) cell_pinb_pane_g1

0x2a55,	// (0x000876f5) cell_pinb_pane_g2_ParamLimits

0x2a55,	// (0x000876f5) cell_pinb_pane_g2

0x2a61,	// (0x00087701) cell_pinb_pane_g3_ParamLimits

0x2a61,	// (0x00087701) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x00093e2e) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x00093e2e) cell_pinb_pane_g

0x0be4,	// (0x00085884) grid_highlight_pane_cp01

0x2a6d,	// (0x0008770d) list_pinb_item_pane_ParamLimits

0x2a6d,	// (0x0008770d) list_pinb_item_pane

0x0be4,	// (0x00085884) list_highlight_pane_cp02

0x2a7f,	// (0x0008771f) list_pinb_item_pane_g1_ParamLimits

0x2a7f,	// (0x0008771f) list_pinb_item_pane_g1

0x2a8c,	// (0x0008772c) list_pinb_item_pane_g2_ParamLimits

0x2a8c,	// (0x0008772c) list_pinb_item_pane_g2

0x2a98,	// (0x00087738) list_pinb_item_pane_g3_ParamLimits

0x2a98,	// (0x00087738) list_pinb_item_pane_g3

0x2aa9,	// (0x00087749) list_pinb_item_pane_g4_ParamLimits

0x2aa9,	// (0x00087749) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x00093e35) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x00093e35) list_pinb_item_pane_g

0x2ab5,	// (0x00087755) list_pinb_item_pane_t1_ParamLimits

0x2ab5,	// (0x00087755) list_pinb_item_pane_t1

0x2aea,	// (0x0008778a) calc_display_pane

0x2b10,	// (0x000877b0) calc_paper_pane

0x2b31,	// (0x000877d1) grid_calc_pane

0x0be4,	// (0x00085884) bg_list_pane_cp01

0x2b59,	// (0x000877f9) clock_g1

0x2b61,	// (0x00087801) clock_g2

0x0001,

0xf19e,	// (0x00093e3e) clock_g

0x2b69,	// (0x00087809) clock_t1_ParamLimits

0x2b69,	// (0x00087809) clock_t1

0x2b7e,	// (0x0008781e) clock_t2_ParamLimits

0x2b7e,	// (0x0008781e) clock_t2

0x2b90,	// (0x00087830) clock_t3_ParamLimits

0x2b90,	// (0x00087830) clock_t3

0x2ba2,	// (0x00087842) clock_t4_ParamLimits

0x2ba2,	// (0x00087842) clock_t4

0x2bb4,	// (0x00087854) clock_t5_ParamLimits

0x2bb4,	// (0x00087854) clock_t5

0x2bc9,	// (0x00087869) clock_t6_ParamLimits

0x2bc9,	// (0x00087869) clock_t6

0x2bdb,	// (0x0008787b) clock_t7_ParamLimits

0x2bdb,	// (0x0008787b) clock_t7

0x2bed,	// (0x0008788d) clock_t8_ParamLimits

0x2bed,	// (0x0008788d) clock_t8

0x2c01,	// (0x000878a1) clock_t9_ParamLimits

0x2c01,	// (0x000878a1) clock_t9

0x0008,

0xf1a3,	// (0x00093e43) clock_t_ParamLimits

0xf1a3,	// (0x00093e43) clock_t

0x2c15,	// (0x000878b5) popup_clock_analogue_window_cp02

0x2c15,	// (0x000878b5) popup_clock_digital_window_cp01

0x2c1d,	// (0x000878bd) listscroll_help_pane

0x0be4,	// (0x00085884) phob_pre_status_pane

0x2c27,	// (0x000878c7) grid_qdial_pane

0x0be4,	// (0x00085884) listscroll_mce_pane

0x2c31,	// (0x000878d1) bg_notes_pane

0x2c3b,	// (0x000878db) list_notes_pane

0x2c45,	// (0x000878e5) scroll_pane_cp06

0x2c50,	// (0x000878f0) bg_calc_paper_pane

0xab1a,	// (0x0008f7ba) list_calc_pane

0x2c64,	// (0x00087904) bg_calc_display_pane

0x2c70,	// (0x00087910) calc_display_pane_t1

0x2c82,	// (0x00087922) calc_display_pane_t2

0xab34,	// (0x0008f7d4) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x00093e56) calc_display_pane_t

0x2c94,	// (0x00087934) cell_calc_pane_ParamLimits

0x2c94,	// (0x00087934) cell_calc_pane

0x2cc9,	// (0x00087969) bg_calc_paper_pane_g1

0x2cd5,	// (0x00087975) bg_calc_paper_pane_g2

0x2ce1,	// (0x00087981) bg_calc_paper_pane_g3

0x2ced,	// (0x0008798d) bg_calc_paper_pane_g4

0x2cf9,	// (0x00087999) bg_calc_paper_pane_g5

0x2d05,	// (0x000879a5) bg_calc_paper_pane_g6

0x2d14,	// (0x000879b4) bg_calc_paper_pane_g7

0x2d23,	// (0x000879c3) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x00093e5d) bg_calc_paper_pane_g

0x2d36,	// (0x000879d6) calc_bg_paper_pane_g9

0x2d49,	// (0x000879e9) list_calc_item_pane_ParamLimits

0x2d49,	// (0x000879e9) list_calc_item_pane

0x2d5c,	// (0x000879fc) list_calc_item_pane_g1

0xab46,	// (0x0008f7e6) list_calc_item_pane_t1_ParamLimits

0xab46,	// (0x0008f7e6) list_calc_item_pane_t1

0x2d69,	// (0x00087a09) list_calc_item_pane_t2_ParamLimits

0x2d69,	// (0x00087a09) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x00093e6e) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x00093e6e) list_calc_item_pane_t

0x2d85,	// (0x00087a25) cell_calc_pane_g1

0x2da7,	// (0x00087a47) grid_highlight_pane_cp02

0x2dc9,	// (0x00087a69) bg_calc_display_pane_g1

0x2dd2,	// (0x00087a72) bg_calc_display_pane_g2

0x2ddc,	// (0x00087a7c) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x00093e78) bg_calc_display_pane_g

0x2de5,	// (0x00087a85) cell_qdial_pane_ParamLimits

0x2de5,	// (0x00087a85) cell_qdial_pane

0x2df9,	// (0x00087a99) cell_qdial_pane_g1_ParamLimits

0x2df9,	// (0x00087a99) cell_qdial_pane_g1

0x2e0f,	// (0x00087aaf) cell_qdial_pane_g2_ParamLimits

0x2e0f,	// (0x00087aaf) cell_qdial_pane_g2

0x2e20,	// (0x00087ac0) cell_qdial_pane_g3_ParamLimits

0x2e20,	// (0x00087ac0) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x00093e7f) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x00093e7f) cell_qdial_pane_g

0x2e42,	// (0x00087ae2) cell_qdial_pane_t1_ParamLimits

0x2e42,	// (0x00087ae2) cell_qdial_pane_t1

0x2e5a,	// (0x00087afa) cell_qdial_pane_t2_ParamLimits

0x2e5a,	// (0x00087afa) cell_qdial_pane_t2

0x2e6d,	// (0x00087b0d) cell_qdial_pane_t3_ParamLimits

0x2e6d,	// (0x00087b0d) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x00093e88) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x00093e88) cell_qdial_pane_t

0x0be4,	// (0x00085884) grid_highlight_pane_cp04

0x2e80,	// (0x00087b20) thumbnail_qdial_pane_ParamLimits

0x2e80,	// (0x00087b20) thumbnail_qdial_pane

0x2edc,	// (0x00087b7c) list_help_pane

0x2ee5,	// (0x00087b85) scroll_pane_cp02

0x2eee,	// (0x00087b8e) help_list_pane_t1_ParamLimits

0x2eee,	// (0x00087b8e) help_list_pane_t1

0xab58,	// (0x0008f7f8) bg_notes_pane_g2

0xab60,	// (0x0008f800) bg_notes_pane_g3

0xab68,	// (0x0008f808) notes_bg_pane_g1

0xab70,	// (0x0008f810) notes_bg_pane_g4

0xab78,	// (0x0008f818) notes_bg_pane_g5

0xab80,	// (0x0008f820) notes_bg_pane_g6

0xab88,	// (0x0008f828) notes_bg_pane_g7

0xab90,	// (0x0008f830) notes_bg_pane_g8

0xab98,	// (0x0008f838) notes_bg_pane_g9

0x0006,

0xf206,	// (0x00093ea6) notes_bg_pane_g

0x2f0b,	// (0x00087bab) list_notes_text_pane_ParamLimits

0x2f0b,	// (0x00087bab) list_notes_text_pane

0x2f20,	// (0x00087bc0) list_notes_text_pane_g1

0x2f29,	// (0x00087bc9) list_notes_text_pane_t1

0x2c64,	// (0x00087904) listscroll_cale_week_pane

0x2f65,	// (0x00087c05) bg_cale_heading_pane

0x2f79,	// (0x00087c19) bg_cale_pane_cp01

0x2f92,	// (0x00087c32) cale_week_corner_pane

0x2fa8,	// (0x00087c48) cale_week_day_heading_pane

0x2fbc,	// (0x00087c5c) cale_week_scroll_pane_g1

0x2fcd,	// (0x00087c6d) cale_week_scroll_pane_g2

0x2fde,	// (0x00087c7e) cale_week_scroll_pane_g3

0x2fef,	// (0x00087c8f) cale_week_scroll_pane_g4

0x3000,	// (0x00087ca0) cale_week_scroll_pane_g5

0x3011,	// (0x00087cb1) cale_week_scroll_pane_g6

0x3022,	// (0x00087cc2) cale_week_scroll_pane_g7

0x3033,	// (0x00087cd3) cale_week_scroll_pane_g8

0x3044,	// (0x00087ce4) cale_week_scroll_pane_g9

0x3055,	// (0x00087cf5) cale_week_scroll_pane_g10

0x3066,	// (0x00087d06) cale_week_scroll_pane_g11

0x3077,	// (0x00087d17) cale_week_scroll_pane_g12

0x3088,	// (0x00087d28) cale_week_scroll_pane_g13

0x3099,	// (0x00087d39) cale_week_scroll_pane_g14

0x30aa,	// (0x00087d4a) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x00093eb5) cale_week_scroll_pane_g

0x30bb,	// (0x00087d5b) cale_week_time_pane

0x30cc,	// (0x00087d6c) grid_cale_week_pane

0x30f1,	// (0x00087d91) scroll_pane_cp08

0x310b,	// (0x00087dab) cell_cale_week_pane_ParamLimits

0x310b,	// (0x00087dab) cell_cale_week_pane

0x3147,	// (0x00087de7) cale_week_day_heading_pane_t1

0x3174,	// (0x00087e14) cale_week_day_heading_pane_t2

0x31a1,	// (0x00087e41) cale_week_day_heading_pane_t3

0x31ce,	// (0x00087e6e) cale_week_day_heading_pane_t4

0x31fb,	// (0x00087e9b) cale_week_day_heading_pane_t5

0x3228,	// (0x00087ec8) cale_week_day_heading_pane_t6

0x3255,	// (0x00087ef5) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x00093ed4) cale_week_day_heading_pane_t

0x3282,	// (0x00087f22) bg_cale_side_pane

0x3290,	// (0x00087f30) cale_week_time_pane_t1

0x32a8,	// (0x00087f48) cale_week_time_pane_t2

0x32c0,	// (0x00087f60) cale_week_time_pane_t3

0x32d8,	// (0x00087f78) cale_week_time_pane_t4

0x32f0,	// (0x00087f90) cale_week_time_pane_t5

0x3308,	// (0x00087fa8) cale_week_time_pane_t6

0x3320,	// (0x00087fc0) cale_week_time_pane_t7

0x3338,	// (0x00087fd8) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x00093ee3) cale_week_time_pane_t

0x3350,	// (0x00087ff0) cell_cale_week_pane_g2

0x3369,	// (0x00088009) cell_cale_week_pane_g3_ParamLimits

0x3369,	// (0x00088009) cell_cale_week_pane_g3

0x3381,	// (0x00088021) grid_highlight_pane_cp07

0x3389,	// (0x00088029) listscroll_gms_pane

0x3393,	// (0x00088033) grid_gms_pane

0x339c,	// (0x0008803c) listscroll_gms_pane_g1

0x33a4,	// (0x00088044) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x00093ef4) listscroll_gms_pane_g

0x33ac,	// (0x0008804c) scroll_pane_cp010

0x33b7,	// (0x00088057) cell_gms_pane_ParamLimits

0x33b7,	// (0x00088057) cell_gms_pane

0x33ca,	// (0x0008806a) cell_gms_pane_g1

0x33d2,	// (0x00088072) cell_gms_pane_g2

0x33da,	// (0x0008807a) cell_gms_pane_g3

0x33e3,	// (0x00088083) cell_gms_pane_g4

0x0003,

0xf259,	// (0x00093ef9) cell_gms_pane_g

0x33ec,	// (0x0008808c) grid_highlight_pane_cp09

0x5519,	// (0x0008a1b9) phob_pre_status_pane_g1

0x5521,	// (0x0008a1c1) phob_pre_status_pane_g2

0x5529,	// (0x0008a1c9) phob_pre_status_pane_g3

0x5531,	// (0x0008a1d1) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x000942e8) phob_pre_status_pane_g

0x5541,	// (0x0008a1e1) phob_pre_status_pane_t1

0x554f,	// (0x0008a1ef) phob_pre_status_pane_t2

0x555f,	// (0x0008a1ff) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x000942f3) phob_pre_status_pane_t

0x0be4,	// (0x00085884) bg_list_pane_cp05

0x33fc,	// (0x0008809c) grid_vorec_pane

0xaba0,	// (0x0008f840) vorec_t1

0xabae,	// (0x0008f84e) vorec_t2

0xabbc,	// (0x0008f85c) vorec_t3

0xabca,	// (0x0008f86a) vorec_t4

0xabd8,	// (0x0008f878) vorec_t5

0xabe6,	// (0x0008f886) vorec_t6

0x0006,

0xf262,	// (0x00093f02) vorec_t

0xac02,	// (0x0008f8a2) wait_bar_pane_cp01

0x3404,	// (0x000880a4) cell_vorec_pane_ParamLimits

0x3404,	// (0x000880a4) cell_vorec_pane

0x3417,	// (0x000880b7) cell_vorec_pane_g1

0x0be4,	// (0x00085884) grid_highlight_pane_cp05

0x3439,	// (0x000880d9) cams_zoom_pane

0x3448,	// (0x000880e8) image_vga_pane

0x3462,	// (0x00088102) main_camera_pane_g1

0x3474,	// (0x00088114) main_camera_pane_g2

0x3484,	// (0x00088124) main_camera_pane_g3

0x3494,	// (0x00088134) main_camera_pane_g4

0x34a4,	// (0x00088144) main_camera_pane_g5

0x34b4,	// (0x00088154) main_camera_pane_g6

0x34c6,	// (0x00088166) main_camera_pane_g7

0x0007,

0xf271,	// (0x00093f11) main_camera_pane_g

0x34e2,	// (0x00088182) main_camera_pane_t1

0x34f8,	// (0x00088198) main_camera_pane_t2

0x0001,

0xf282,	// (0x00093f22) main_camera_pane_t

0x3532,	// (0x000881d2) cams_zoom_pane_cp_ParamLimits

0x3532,	// (0x000881d2) cams_zoom_pane_cp

0x355a,	// (0x000881fa) image_cif_pane_ParamLimits

0x355a,	// (0x000881fa) image_cif_pane

0x3595,	// (0x00088235) image_subqcif_pane

0x359d,	// (0x0008823d) main_video_pane_g1_ParamLimits

0x359d,	// (0x0008823d) main_video_pane_g1

0x35c1,	// (0x00088261) main_video_pane_g2_ParamLimits

0x35c1,	// (0x00088261) main_video_pane_g2

0x35f5,	// (0x00088295) main_video_pane_g3_ParamLimits

0x35f5,	// (0x00088295) main_video_pane_g3

0x3623,	// (0x000882c3) main_video_pane_g4_ParamLimits

0x3623,	// (0x000882c3) main_video_pane_g4

0x3651,	// (0x000882f1) main_video_pane_g5_ParamLimits

0x3651,	// (0x000882f1) main_video_pane_g5

0x366d,	// (0x0008830d) main_video_pane_g6_ParamLimits

0x366d,	// (0x0008830d) main_video_pane_g6

0x0006,

0xf287,	// (0x00093f27) main_video_pane_g_ParamLimits

0xf287,	// (0x00093f27) main_video_pane_g

0x3698,	// (0x00088338) main_video_pane_t1_ParamLimits

0x3698,	// (0x00088338) main_video_pane_t1

0x36e1,	// (0x00088381) cams_zoom_pane_g1

0x36ea,	// (0x0008838a) cams_zoom_pane_g2

0x36f3,	// (0x00088393) cams_zoom_pane_g3

0x36fc,	// (0x0008839c) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x00093f36) cams_zoom_pane_g

0x3719,	// (0x000883b9) grid_cams_pane

0x3733,	// (0x000883d3) linegrid_cams_pane

0x3747,	// (0x000883e7) cell_cams_pane_ParamLimits

0x3747,	// (0x000883e7) cell_cams_pane

0x3767,	// (0x00088407) cams_burst_image_pane

0x376f,	// (0x0008840f) cell_cams_pane_g1

0x0be4,	// (0x00085884) grid_highlight_pane_cp03

0x2d85,	// (0x00087a25) mp_bg_pane_g1

0x0be4,	// (0x00085884) bg_list_pane_cp03

0x0fae,	// (0x00085c4e) bg_mp_pane

0x0fb6,	// (0x00085c56) grid_mp_pane

0x0fbe,	// (0x00085c5e) media_player_g1

0x0fc6,	// (0x00085c66) media_player_t1

0x0fd4,	// (0x00085c74) media_player_t2

0x0fe2,	// (0x00085c82) media_player_t3

0x0ff0,	// (0x00085c90) media_player_t4

0x0ffe,	// (0x00085c9e) media_player_t5

0x100c,	// (0x00085cac) media_player_t6

0x101a,	// (0x00085cba) media_player_t7

0x0006,

0xf632,	// (0x000942d2) media_player_t

0x1028,	// (0x00085cc8) wait_bar_pane_cp02

0xf617,	// (0x000942b7) main_usb_pane_t

0x5510,	// (0x0008a1b0) cell_mp_pane

0x2d85,	// (0x00087a25) cell_mp_pane_g1

0x0be4,	// (0x00085884) grid_highlight_pane_cp06

0xac1c,	// (0x0008f8bc) grid_skin_colour_pane

0xac24,	// (0x0008f8c4) list_highlight_pane_cp03

0x387b,	// (0x0008851b) skin_g1

0xac2c,	// (0x0008f8cc) skin_t1

0xac3b,	// (0x0008f8db) skin_t2

0x0001,

0xf2cb,	// (0x00093f6b) skin_t

0x3883,	// (0x00088523) cell_skin_colour_pane_ParamLimits

0x3883,	// (0x00088523) cell_skin_colour_pane

0xac49,	// (0x0008f8e9) cell_skin_colour_pane_g1

0x38e7,	// (0x00088587) call_video_g1_ParamLimits

0x38e7,	// (0x00088587) call_video_g1

0x3903,	// (0x000885a3) call_video_g2_ParamLimits

0x3903,	// (0x000885a3) call_video_g2

0x0001,

0xf2d0,	// (0x00093f70) call_video_g_ParamLimits

0xf2d0,	// (0x00093f70) call_video_g

0x393d,	// (0x000885dd) call_video_uplink_pane_cp1_ParamLimits

0x393d,	// (0x000885dd) call_video_uplink_pane_cp1

0xac63,	// (0x0008f903) call_video_uplink_pane_cp2

0x39bb,	// (0x0008865b) video_down_crop_pane_ParamLimits

0x39bb,	// (0x0008865b) video_down_crop_pane

0x3a91,	// (0x00088731) video_down_pane_ParamLimits

0x3a91,	// (0x00088731) video_down_pane

0xac6b,	// (0x0008f90b) video_down_subqcif_pane_ParamLimits

0xac6b,	// (0x0008f90b) video_down_subqcif_pane

0xac83,	// (0x0008f923) video_down_subqcif_pane_cp_ParamLimits

0xac83,	// (0x0008f923) video_down_subqcif_pane_cp

0xaca7,	// (0x0008f947) im_reading_pane_ParamLimits

0xaca7,	// (0x0008f947) im_reading_pane

0x3b62,	// (0x00088802) im_writing_pane_ParamLimits

0x3b62,	// (0x00088802) im_writing_pane

0x3b78,	// (0x00088818) im_reading_pane_t1

0xacc1,	// (0x0008f961) list_im_pane

0xacd2,	// (0x0008f972) scroll_pane_cp07

0x3bb1,	// (0x00088851) im_writing_pane_t1_ParamLimits

0x3bb1,	// (0x00088851) im_writing_pane_t1

0xaceb,	// (0x0008f98b) im_writing_pane_t2_ParamLimits

0xaceb,	// (0x0008f98b) im_writing_pane_t2

0x0001,

0xf2da,	// (0x00093f7a) im_writing_pane_t_ParamLimits

0xf2da,	// (0x00093f7a) im_writing_pane_t

0x0be4,	// (0x00085884) input_focus_pane_cp04

0x0be4,	// (0x00085884) input_focus_pane_cp05

0x3bc6,	// (0x00088866) list_im_single_pane_ParamLimits

0x3bc6,	// (0x00088866) list_im_single_pane

0x3bda,	// (0x0008887a) list_single_im_pane_t1

0x54d0,	// (0x0008a170) blid_accuracy_pane

0x54d8,	// (0x0008a178) blid_compass_pane

0x54e2,	// (0x0008a182) main_location_t1

0x54f2,	// (0x0008a192) main_location_t2

0x5502,	// (0x0008a1a2) main_location_t3

0x0002,

0xf641,	// (0x000942e1) main_location_t

0x0be4,	// (0x00085884) aid_levels_location

0x2d85,	// (0x00087a25) blid_accuracy_pane_g1

0x2d85,	// (0x00087a25) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x00093fdc) blid_accuracy_pane_g

0xad33,	// (0x0008f9d3) wml_content_pane

0xad71,	// (0x0008fa11) wml_button_pane_ParamLimits

0xad71,	// (0x0008fa11) wml_button_pane

0x3be9,	// (0x00088889) wml_list_single_large_pane_ParamLimits

0x3be9,	// (0x00088889) wml_list_single_large_pane

0x3bfe,	// (0x0008889e) wml_list_single_medium_pane_ParamLimits

0x3bfe,	// (0x0008889e) wml_list_single_medium_pane

0x3c14,	// (0x000888b4) wml_list_single_small_pane_ParamLimits

0x3c14,	// (0x000888b4) wml_list_single_small_pane

0xad85,	// (0x0008fa25) wml_selection_box_pane_ParamLimits

0xad85,	// (0x0008fa25) wml_selection_box_pane

0xad98,	// (0x0008fa38) wml_list_single_pane_t1

0xada7,	// (0x0008fa47) wml_list_single_medium_pane_t1

0xadb6,	// (0x0008fa56) wml_list_single_large_pane_t1

0xadc5,	// (0x0008fa65) input_focus_pane_cp02_ParamLimits

0xadc5,	// (0x0008fa65) input_focus_pane_cp02

0xadd8,	// (0x0008fa78) wml_selection_box_pane_g1

0xade1,	// (0x0008fa81) wml_selection_box_pane_t1_ParamLimits

0xade1,	// (0x0008fa81) wml_selection_box_pane_t1

0x2905,	// (0x000875a5) bg_wml_button_pane_ParamLimits

0x2905,	// (0x000875a5) bg_wml_button_pane

0xadf9,	// (0x0008fa99) wml_button_pane_g1

0xae01,	// (0x0008faa1) wml_button_pane_t1

0xadf9,	// (0x0008fa99) wml_button_bg_pane_g1

0xae11,	// (0x0008fab1) wml_button_bg_pane_g2

0xae19,	// (0x0008fab9) wml_button_bg_pane_g3

0xae21,	// (0x0008fac1) wml_button_bg_pane_g4

0xae29,	// (0x0008fac9) wml_button_bg_pane_g5

0xae31,	// (0x0008fad1) wml_button_bg_pane_g6

0xae39,	// (0x0008fad9) wml_button_bg_pane_g7

0xae41,	// (0x0008fae1) wml_button_bg_pane_g8

0xae49,	// (0x0008fae9) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x00093f7f) wml_button_bg_pane_g

0x3c2c,	// (0x000888cc) bg_list_pane_cp02

0xae51,	// (0x0008faf1) mce_header_pane_ParamLimits

0xae51,	// (0x0008faf1) mce_header_pane

0xae67,	// (0x0008fb07) mce_icon_pane

0xae67,	// (0x0008fb07) mce_image_pane

0xae70,	// (0x0008fb10) mce_text_pane_ParamLimits

0xae70,	// (0x0008fb10) mce_text_pane

0x3c34,	// (0x000888d4) scroll_pane_cp03

0xad69,	// (0x0008fa09) scroll_pane_cp04

0xae83,	// (0x0008fb23) scroll_pane_cp05_ParamLimits

0xae83,	// (0x0008fb23) scroll_pane_cp05

0x3c3e,	// (0x000888de) mce_header_field_pane_ParamLimits

0x3c3e,	// (0x000888de) mce_header_field_pane

0x3c55,	// (0x000888f5) mce_header_field_pane_2_ParamLimits

0x3c55,	// (0x000888f5) mce_header_field_pane_2

0x3c6b,	// (0x0008890b) mce_header_field_pane_3

0x3c73,	// (0x00088913) list_single_mce_message_pane_ParamLimits

0x3c73,	// (0x00088913) list_single_mce_message_pane

0x3c88,	// (0x00088928) list_single_mce_smart_pane_ParamLimits

0x3c88,	// (0x00088928) list_single_mce_smart_pane

0xae8f,	// (0x0008fb2f) input_focus_pane_cp03

0xae98,	// (0x0008fb38) list_header_data_pane

0x3ca8,	// (0x00088948) mce_header_field_pane_t1

0x3cb8,	// (0x00088958) list_single_mce_header_pane_ParamLimits

0x3cb8,	// (0x00088958) list_single_mce_header_pane

0xaea0,	// (0x0008fb40) list_single_mce_header_pane_t1

0xaeaf,	// (0x0008fb4f) list_single_mce_message_pane_g1

0xaeb7,	// (0x0008fb57) list_single_mce_message_pane_t1

0x3cea,	// (0x0008898a) bg_cale_heading_pane_cp01_ParamLimits

0x3cea,	// (0x0008898a) bg_cale_heading_pane_cp01

0xaec5,	// (0x0008fb65) bg_cale_pane_cp02_ParamLimits

0xaec5,	// (0x0008fb65) bg_cale_pane_cp02

0x3d0d,	// (0x000889ad) cale_month_corner_pane

0x3d23,	// (0x000889c3) cale_month_day_heading_pane_ParamLimits

0x3d23,	// (0x000889c3) cale_month_day_heading_pane

0x3d4e,	// (0x000889ee) cale_month_pane_g1_ParamLimits

0x3d4e,	// (0x000889ee) cale_month_pane_g1

0x3d6a,	// (0x00088a0a) cale_month_pane_g2_ParamLimits

0x3d6a,	// (0x00088a0a) cale_month_pane_g2

0x3d85,	// (0x00088a25) cale_month_pane_g3_ParamLimits

0x3d85,	// (0x00088a25) cale_month_pane_g3

0x3db1,	// (0x00088a51) cale_month_pane_g4_ParamLimits

0x3db1,	// (0x00088a51) cale_month_pane_g4

0x3ddd,	// (0x00088a7d) cale_month_pane_g5_ParamLimits

0x3ddd,	// (0x00088a7d) cale_month_pane_g5

0x3e09,	// (0x00088aa9) cale_month_pane_g6_ParamLimits

0x3e09,	// (0x00088aa9) cale_month_pane_g6

0x3e35,	// (0x00088ad5) cale_month_pane_g7_ParamLimits

0x3e35,	// (0x00088ad5) cale_month_pane_g7

0x3e61,	// (0x00088b01) cale_month_pane_g8_ParamLimits

0x3e61,	// (0x00088b01) cale_month_pane_g8

0x3e95,	// (0x00088b35) cale_month_pane_g9_ParamLimits

0x3e95,	// (0x00088b35) cale_month_pane_g9

0x3ec7,	// (0x00088b67) cale_month_pane_g10_ParamLimits

0x3ec7,	// (0x00088b67) cale_month_pane_g10

0x3ef9,	// (0x00088b99) cale_month_pane_g11_ParamLimits

0x3ef9,	// (0x00088b99) cale_month_pane_g11

0x3f2b,	// (0x00088bcb) cale_month_pane_g12_ParamLimits

0x3f2b,	// (0x00088bcb) cale_month_pane_g12

0x3f5d,	// (0x00088bfd) cale_month_pane_g13_ParamLimits

0x3f5d,	// (0x00088bfd) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x00093f92) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x00093f92) cale_month_pane_g

0x3f8f,	// (0x00088c2f) cale_month_week_pane

0x3fa2,	// (0x00088c42) grid_cale_month_pane_ParamLimits

0x3fa2,	// (0x00088c42) grid_cale_month_pane

0x3fc8,	// (0x00088c68) cale_month_day_heading_pane_t1

0x4026,	// (0x00088cc6) cale_month_day_heading_pane_t2

0x408b,	// (0x00088d2b) cale_month_day_heading_pane_t3

0x40f0,	// (0x00088d90) cale_month_day_heading_pane_t4

0x4155,	// (0x00088df5) cale_month_day_heading_pane_t5

0x41ba,	// (0x00088e5a) cale_month_day_heading_pane_t6

0x421f,	// (0x00088ebf) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x00093fad) cale_month_day_heading_pane_t

0x3282,	// (0x00087f22) bg_cale_side_pane_cp01

0x4284,	// (0x00088f24) cale_month_week_pane_t1

0x429b,	// (0x00088f3b) cale_month_week_pane_t2

0x42b2,	// (0x00088f52) cale_month_week_pane_t3

0x42c9,	// (0x00088f69) cale_month_week_pane_t4

0x42e0,	// (0x00088f80) cale_month_week_pane_t5

0x42f7,	// (0x00088f97) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x00093fbc) cale_month_week_pane_t

0x430e,	// (0x00088fae) cell_cale_month_pane_ParamLimits

0x430e,	// (0x00088fae) cell_cale_month_pane

0xaf24,	// (0x0008fbc4) cell_cale_month_pane_g1

0x43b4,	// (0x00089054) cell_cale_month_pane_t1_ParamLimits

0x43b4,	// (0x00089054) cell_cale_month_pane_t1

0x3381,	// (0x00088021) grid_highlight_pane_cp08

0x2d85,	// (0x00087a25) main_smil_g1

0x43d0,	// (0x00089070) smil_status_pane

0xaf30,	// (0x0008fbd0) smil_text_pane

0x0ece,	// (0x00085b6e) bg_popup_call3_rect_pane_g8

0x0ed6,	// (0x00085b76) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x00094275) bg_popup_call3_rect_pane_g

0x1150,	// (0x00085df0) smil_status_volume_pane_g1

0xaf3a,	// (0x0008fbda) smil_status_pane_t1

0xeca4,	// (0x00093944) volume_smil_pane

0xaf51,	// (0x0008fbf1) list_smil_text_pane

0x43e3,	// (0x00089083) scroll_pane_cp011

0x43ee,	// (0x0008908e) smil_text_list_pane_t1_ParamLimits

0x43ee,	// (0x0008908e) smil_text_list_pane_t1

0xaf5b,	// (0x0008fbfb) aid_volume_smil_ParamLimits

0xaf5b,	// (0x0008fbfb) aid_volume_smil

0x2d85,	// (0x00087a25) smil_volume_pane_g1

0x2d85,	// (0x00087a25) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x00093fdc) smil_volume_pane_g

0x2c64,	// (0x00087904) listscroll_cale_day_pane

0xaf7d,	// (0x0008fc1d) bg_cale_pane

0xaf95,	// (0x0008fc35) list_cale_pane

0xafa6,	// (0x0008fc46) scroll_pane_cp09

0xafb7,	// (0x0008fc57) cale_bg_pane_g1

0xafbf,	// (0x0008fc5f) cale_bg_pane_g2

0xafc7,	// (0x0008fc67) cale_bg_pane_g3

0xafcf,	// (0x0008fc6f) cale_bg_pane_g4

0xafd7,	// (0x0008fc77) cale_bg_pane_g5

0xafdf,	// (0x0008fc7f) cale_bg_pane_g6

0xafe7,	// (0x0008fc87) cale_bg_pane_g7

0xafef,	// (0x0008fc8f) cale_bg_pane_g8

0xaff7,	// (0x0008fc97) cale_bg_pane_g9

0x0008,

0xf341,	// (0x00093fe1) cale_bg_pane_g

0x3404,	// (0x000880a4) list_cale_time_pane_ParamLimits

0x3404,	// (0x000880a4) list_cale_time_pane

0xafff,	// (0x0008fc9f) list_cale_time_pane_g1_ParamLimits

0xafff,	// (0x0008fc9f) list_cale_time_pane_g1

0xb00b,	// (0x0008fcab) list_cale_time_pane_g2_ParamLimits

0xb00b,	// (0x0008fcab) list_cale_time_pane_g2

0x4434,	// (0x000890d4) list_cale_time_pane_g3_ParamLimits

0x4434,	// (0x000890d4) list_cale_time_pane_g3

0x4442,	// (0x000890e2) list_cale_time_pane_g4_ParamLimits

0x4442,	// (0x000890e2) list_cale_time_pane_g4

0x4450,	// (0x000890f0) list_cale_time_pane_g5_ParamLimits

0x4450,	// (0x000890f0) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x00093ff4) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x00093ff4) list_cale_time_pane_g

0xb025,	// (0x0008fcc5) list_cale_time_pane_t1_ParamLimits

0xb025,	// (0x0008fcc5) list_cale_time_pane_t1

0xb04d,	// (0x0008fced) list_cale_time_pane_t2_ParamLimits

0xb04d,	// (0x0008fced) list_cale_time_pane_t2

0x474c,	// (0x000893ec) aid_blid_cardinal_pane

0x478a,	// (0x0008942a) compass_pane_t4

0xb075,	// (0x0008fd15) list_cale_time_pane_t4_ParamLimits

0xb075,	// (0x0008fd15) list_cale_time_pane_t4

0x4798,	// (0x00089438) compass_pane_t5

0x47a6,	// (0x00089446) compass_pane_t6

0x47b4,	// (0x00089454) compass_pane_t7

0xb588,	// (0x00090228) navi_pane_cc_t1

0xb6ef,	// (0x0009038f) aid_phob_thumbnail_center_pane

0x4ee8,	// (0x00089b88) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x00094001) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x00094001) list_cale_time_pane_t

0x083b,	// (0x000854db) bg_popup_window_pane_cp02_ParamLimits

0x083b,	// (0x000854db) bg_popup_window_pane_cp02

0xb09d,	// (0x0008fd3d) heading_pane_cp01_ParamLimits

0xb09d,	// (0x0008fd3d) heading_pane_cp01

0xb0a9,	// (0x0008fd49) loc_req_pane_ParamLimits

0xb0a9,	// (0x0008fd49) loc_req_pane

0xb0b9,	// (0x0008fd59) loc_type_pane_ParamLimits

0xb0b9,	// (0x0008fd59) loc_type_pane

0xb0cb,	// (0x0008fd6b) loc_type_pane_t1_ParamLimits

0xb0cb,	// (0x0008fd6b) loc_type_pane_t1

0xb0dd,	// (0x0008fd7d) loc_type_pane_t2_ParamLimits

0xb0dd,	// (0x0008fd7d) loc_type_pane_t2

0xb0ef,	// (0x0008fd8f) loc_type_pane_t3_ParamLimits

0xb0ef,	// (0x0008fd8f) loc_type_pane_t3

0x0002,

0xf368,	// (0x00094008) loc_type_pane_t_ParamLimits

0xf368,	// (0x00094008) loc_type_pane_t

0xb101,	// (0x0008fda1) list_loc_req_pane

0xb10b,	// (0x0008fdab) scroll_pane_cp012

0x445e,	// (0x000890fe) list_single_loc_request_popup_menu_pane_ParamLimits

0x445e,	// (0x000890fe) list_single_loc_request_popup_menu_pane

0xb116,	// (0x0008fdb6) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb116,	// (0x0008fdb6) list_single_loc_request_popup_menu_pane_g1

0xb122,	// (0x0008fdc2) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb122,	// (0x0008fdc2) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x0009400f) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x0009400f) list_single_loc_request_popup_menu_pane_g

0xb12e,	// (0x0008fdce) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb12e,	// (0x0008fdce) list_single_loc_request_popup_menu_pane_t1

0x2905,	// (0x000875a5) bg_popup_window_pane_cp03_ParamLimits

0x2905,	// (0x000875a5) bg_popup_window_pane_cp03

0xec8b,	// (0x0009392b) heading_loc_req_pane_ParamLimits

0xec8b,	// (0x0009392b) heading_loc_req_pane

0x446b,	// (0x0008910b) popup_dyc_status_message_window_g1_ParamLimits

0x446b,	// (0x0008910b) popup_dyc_status_message_window_g1

0x447f,	// (0x0008911f) popup_dyc_status_message_window_t1_ParamLimits

0x447f,	// (0x0008911f) popup_dyc_status_message_window_t1

0x4494,	// (0x00089134) popup_dyc_status_message_window_t2_ParamLimits

0x4494,	// (0x00089134) popup_dyc_status_message_window_t2

0x44a9,	// (0x00089149) popup_dyc_status_message_window_t3_ParamLimits

0x44a9,	// (0x00089149) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x00094014) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x00094014) popup_dyc_status_message_window_t

0x0be4,	// (0x00085884) bg_heading_pane_cp01

0xb144,	// (0x0008fde4) heading_loc_req_pane_g1

0xb14c,	// (0x0008fdec) heading_loc_req_pane_g2

0xb154,	// (0x0008fdf4) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x0009401b) heading_loc_req_pane_g

0xb15c,	// (0x0008fdfc) heading_loc_req_pane_t1

0xb1e0,	// (0x0008fe80) bg_popup_sub_pane_cp01_ParamLimits

0xb1e0,	// (0x0008fe80) bg_popup_sub_pane_cp01

0xb1ee,	// (0x0008fe8e) popup_cale_events_window_g1_ParamLimits

0xb1ee,	// (0x0008fe8e) popup_cale_events_window_g1

0xb20e,	// (0x0008feae) popup_cale_events_window_g2_ParamLimits

0xb20e,	// (0x0008feae) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x0009404f) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x0009404f) popup_cale_events_window_g

0xb22e,	// (0x0008fece) popup_cale_events_window_t1_ParamLimits

0xb22e,	// (0x0008fece) popup_cale_events_window_t1

0xb240,	// (0x0008fee0) popup_cale_events_window_t2_ParamLimits

0xb240,	// (0x0008fee0) popup_cale_events_window_t2

0xb27e,	// (0x0008ff1e) popup_cale_events_window_t3_ParamLimits

0xb27e,	// (0x0008ff1e) popup_cale_events_window_t3

0xb2b8,	// (0x0008ff58) popup_cale_events_window_t4_ParamLimits

0xb2b8,	// (0x0008ff58) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x00094054) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x00094054) popup_cale_events_window_t

0x4537,	// (0x000891d7) call_type_pane

0x4547,	// (0x000891e7) popup_call_status_window_g1

0x455b,	// (0x000891fb) popup_call_status_window_g2

0x456f,	// (0x0008920f) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x0009405d) popup_call_status_window_g

0xb2ee,	// (0x0008ff8e) call_type_pane_g1

0xb2f7,	// (0x0008ff97) call_type_pane_g2

0x0001,

0xf3c4,	// (0x00094064) call_type_pane_g

0x0be4,	// (0x00085884) bg_popup_sub_pane_cp02

0xb300,	// (0x0008ffa0) listscroll_popup_wml_pane

0xb308,	// (0x0008ffa8) list_wml_pane

0xb312,	// (0x0008ffb2) scroll_pane_cp013

0xb31d,	// (0x0008ffbd) list_single_graphic_popup_wml_pane_ParamLimits

0xb31d,	// (0x0008ffbd) list_single_graphic_popup_wml_pane

0x2d85,	// (0x00087a25) list_single_graphic_popup_wml_pane_g1

0xb331,	// (0x0008ffd1) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x00094069) list_single_graphic_popup_wml_pane_g

0xb339,	// (0x0008ffd9) list_single_graphic_popup_wml_pane_t1

0xb34f,	// (0x0008ffef) aid_call_pane

0x0e37,	// (0x00085ad7) popup_clock_analogue_window_g1

0x0e37,	// (0x00085ad7) popup_clock_analogue_window_g2

0xb357,	// (0x0008fff7) popup_clock_analogue_window_g3

0xb357,	// (0x0008fff7) popup_clock_analogue_window_g4

0x2d85,	// (0x00087a25) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x0009406e) popup_clock_analogue_window_g

0xb35f,	// (0x0008ffff) popup_clock_analogue_window_t1

0xb36d,	// (0x0009000d) clock_digital_number_pane_ParamLimits

0xb36d,	// (0x0009000d) clock_digital_number_pane

0xb379,	// (0x00090019) clock_digital_number_pane_cp02_ParamLimits

0xb379,	// (0x00090019) clock_digital_number_pane_cp02

0xb385,	// (0x00090025) clock_digital_number_pane_cp03_ParamLimits

0xb385,	// (0x00090025) clock_digital_number_pane_cp03

0xb391,	// (0x00090031) clock_digital_number_pane_cp04_ParamLimits

0xb391,	// (0x00090031) clock_digital_number_pane_cp04

0xb3a1,	// (0x00090041) clock_digital_separator_pane_ParamLimits

0xb3a1,	// (0x00090041) clock_digital_separator_pane

0xb3ad,	// (0x0009004d) popup_clock_digital_window_t1

0x2d85,	// (0x00087a25) clock_digital_number_pane_g1

0x2d85,	// (0x00087a25) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x00093fdc) clock_digital_number_pane_g

0x2d85,	// (0x00087a25) clock_digital_separator_pane_g1

0x2d85,	// (0x00087a25) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x00093fdc) clock_digital_separator_pane_g

0x0be4,	// (0x00085884) bg_popup_window_pane_cp04

0xb3ca,	// (0x0009006a) heading_pane_cp03

0xb3d2,	// (0x00090072) listscroll_popup_gms_pane

0xb3da,	// (0x0009007a) grid_large_graphic_popup_pane

0xb3e4,	// (0x00090084) listscroll_popup_gms_pane_g1

0xb3ec,	// (0x0009008c) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x00094079) listscroll_popup_gms_pane_g

0xad69,	// (0x0008fa09) scroll_pane_cp014

0x457e,	// (0x0008921e) cell_large_graphic_popup_pane_ParamLimits

0x457e,	// (0x0008921e) cell_large_graphic_popup_pane

0x4596,	// (0x00089236) cell_large_graphic_popup_pane_g1_ParamLimits

0x4596,	// (0x00089236) cell_large_graphic_popup_pane_g1

0xb3f4,	// (0x00090094) cell_large_graphic_popup_pane_g2_ParamLimits

0xb3f4,	// (0x00090094) cell_large_graphic_popup_pane_g2

0xb400,	// (0x000900a0) cell_large_graphic_popup_pane_g3_ParamLimits

0xb400,	// (0x000900a0) cell_large_graphic_popup_pane_g3

0xb40d,	// (0x000900ad) cell_large_graphic_popup_pane_g4_ParamLimits

0xb40d,	// (0x000900ad) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x0009407e) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x0009407e) cell_large_graphic_popup_pane_g

0xb41d,	// (0x000900bd) grid_highlight_pane_cp010

0x2d85,	// (0x00087a25) bg_popup_call_pane_g1

0xb427,	// (0x000900c7) list_single_graphic_popup_conf_pane_ParamLimits

0xb427,	// (0x000900c7) list_single_graphic_popup_conf_pane

0xb43a,	// (0x000900da) list_highlight_pane_cp01

0xb443,	// (0x000900e3) list_single_graphic_popup_conf_pane_g1

0xb44b,	// (0x000900eb) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x00094087) list_single_graphic_popup_conf_pane_g

0xb453,	// (0x000900f3) list_single_graphic_popup_conf_pane_t1

0xb461,	// (0x00090101) linegrid_cams_pane_g1

0x45a2,	// (0x00089242) linegrid_cams_pane_g2

0x33da,	// (0x0008807a) linegrid_cams_pane_g3

0xb46a,	// (0x0009010a) linegrid_cams_pane_g4

0x45ab,	// (0x0008924b) linegrid_cams_pane_g5

0x45b4,	// (0x00089254) linegrid_cams_pane_g6

0x33e3,	// (0x00088083) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x0009408c) linegrid_cams_pane_g

0xb473,	// (0x00090113) popup_clock_analogue_window

0xb473,	// (0x00090113) popup_clock_digital_window

0x0be4,	// (0x00085884) popup_phob_thumbnail_window

0x2d85,	// (0x00087a25) call_video_uplink_pane_g1

0xb47c,	// (0x0009011c) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x0009409b) call_video_uplink_pane_g

0xb484,	// (0x00090124) video_uplink_pane

0xb48c,	// (0x0009012c) mce_image_pane_g1

0x45bf,	// (0x0008925f) mce_image_pane_g2

0x45c9,	// (0x00089269) mce_image_pane_g3

0x45d1,	// (0x00089271) mce_image_pane_g4

0x45d9,	// (0x00089279) mce_image_pane_g5

0x0004,

0xf400,	// (0x000940a0) mce_image_pane_g

0xb496,	// (0x00090136) control_top_pane_stacon_cp01_ParamLimits

0xb496,	// (0x00090136) control_top_pane_stacon_cp01

0xb4aa,	// (0x0009014a) uni_indicator_pane_stacon_cp01_ParamLimits

0xb4aa,	// (0x0009014a) uni_indicator_pane_stacon_cp01

0xb4bb,	// (0x0009015b) bg_popup_sub_pane_cp03

0x45e1,	// (0x00089281) chi_dic_find_pane

0x45e9,	// (0x00089289) listscroll_chi_dic_pane

0x45f2,	// (0x00089292) main_pane_chidic_g1

0xb4c5,	// (0x00090165) chi_dic_find_pane_t1

0xb4d3,	// (0x00090173) find_chidic_pane

0xb4dc,	// (0x0009017c) chi_dic_list_pane_ParamLimits

0xb4dc,	// (0x0009017c) chi_dic_list_pane

0xb4ed,	// (0x0009018d) scroll_pane_cp020

0xb4f5,	// (0x00090195) find_chidic_pane_t1

0x0be4,	// (0x00085884) input_focus_pane_cp06

0x4605,	// (0x000892a5) list_chi_dic_pane_ParamLimits

0x4605,	// (0x000892a5) list_chi_dic_pane

0x4617,	// (0x000892b7) list_chi_dic_pane_t1_ParamLimits

0x4617,	// (0x000892b7) list_chi_dic_pane_t1

0x0be4,	// (0x00085884) list_highlight_pane_cp020

0xb504,	// (0x000901a4) bg_cale_heading_pane_g1

0x462a,	// (0x000892ca) bg_cale_heading_pane_g2

0x4632,	// (0x000892d2) bg_cale_heading_pane_g3

0x463a,	// (0x000892da) bg_cale_heading_pane_g4

0x4644,	// (0x000892e4) bg_cale_heading_pane_g5

0x464e,	// (0x000892ee) bg_cale_heading_pane_g6

0x4656,	// (0x000892f6) bg_cale_heading_pane_g7

0x465e,	// (0x000892fe) bg_cale_heading_pane_g8

0x4668,	// (0x00089308) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x000940ab) bg_cale_heading_pane_g

0xb504,	// (0x000901a4) bg_cale_side_pane_g1

0x4672,	// (0x00089312) bg_cale_side_pane_g2

0x467a,	// (0x0008931a) bg_cale_side_pane_g3

0x4682,	// (0x00089322) bg_cale_side_pane_g4

0x468a,	// (0x0008932a) bg_cale_side_pane_g5

0x4692,	// (0x00089332) bg_cale_side_pane_g6

0x469a,	// (0x0008933a) bg_cale_side_pane_g7

0x46a2,	// (0x00089342) bg_cale_side_pane_g8

0x46aa,	// (0x0008934a) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x000940be) bg_cale_side_pane_g

0x46b2,	// (0x00089352) popup_call_status_window_ParamLimits

0x46b2,	// (0x00089352) popup_call_status_window

0xb50c,	// (0x000901ac) stacon_top_pane

0xb514,	// (0x000901b4) status_pane_ParamLimits

0xb514,	// (0x000901b4) status_pane

0xb529,	// (0x000901c9) status_small_pane

0xb531,	// (0x000901d1) control_pane

0x0be4,	// (0x00085884) stacon_bottom_pane

0xb539,	// (0x000901d9) list_single_mce_smart_pane_t1_ParamLimits

0xb539,	// (0x000901d9) list_single_mce_smart_pane_t1

0xb54c,	// (0x000901ec) list_single_mce_smart_pane_t2_ParamLimits

0xb54c,	// (0x000901ec) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x000940d1) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x000940d1) list_single_mce_smart_pane_t

0x46fb,	// (0x0008939b) compass_pane

0x4704,	// (0x000893a4) main_location2_pane_t1

0x4716,	// (0x000893b6) main_location2_pane_t2

0x4728,	// (0x000893c8) main_location2_pane_t3

0x0003,

0xf436,	// (0x000940d6) main_location2_pane_t

0xb56b,	// (0x0009020b) compass_pane_g1_ParamLimits

0xb56b,	// (0x0009020b) compass_pane_g1

0x476c,	// (0x0008940c) compass_pane_t1

0x477b,	// (0x0008941b) compass_pane_t2

0x0005,

0xf43f,	// (0x000940df) compass_pane_t

0x47c2,	// (0x00089462) text_secondary_cp61

0xb57f,	// (0x0009021f) navi_pane_cams_g5

0xb5a2,	// (0x00090242) navi_pane_im_t1

0xb5b0,	// (0x00090250) navi_pane_mp_g1_ParamLimits

0xb5b0,	// (0x00090250) navi_pane_mp_g1

0xb5c4,	// (0x00090264) navi_pane_mp_g2_ParamLimits

0xb5c4,	// (0x00090264) navi_pane_mp_g2

0xb5d0,	// (0x00090270) navi_pane_mp_g3_ParamLimits

0xb5d0,	// (0x00090270) navi_pane_mp_g3

0x0002,

0xf453,	// (0x000940f3) navi_pane_mp_g_ParamLimits

0xf453,	// (0x000940f3) navi_pane_mp_g

0xb5dc,	// (0x0009027c) navi_pane_mp_t1

0xb5ea,	// (0x0009028a) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x000940fa) navi_pane_mp_t

0xb626,	// (0x000902c6) navi_pane_vt_g1

0xb5dc,	// (0x0009027c) navi_pane_vt_t1

0xb62e,	// (0x000902ce) navi_slider_pane

0xb636,	// (0x000902d6) zooming_pane

0xb63e,	// (0x000902de) navi_slider_pane_g1

0xb647,	// (0x000902e7) navi_slider_pane_g2

0x0006,

0xf461,	// (0x00094101) navi_slider_pane_g

0xb674,	// (0x00090314) aid_levels_zoom

0xb67c,	// (0x0009031c) zooming_pane_g1

0xb684,	// (0x00090324) zooming_pane_g2

0xb684,	// (0x00090324) zooming_pane_g3

0x0002,

0xf470,	// (0x00094110) zooming_pane_g

0xb68c,	// (0x0009032c) level_10_zoom

0xb695,	// (0x00090335) level_11_zoom

0xb69e,	// (0x0009033e) level_1_zoom

0xb6a7,	// (0x00090347) level_2_zoom

0xb6b0,	// (0x00090350) level_3_zoom

0xb6b9,	// (0x00090359) level_4_zoom

0xb6c2,	// (0x00090362) level_5_zoom

0xb6cb,	// (0x0009036b) level_6_zoom

0xb6d4,	// (0x00090374) level_7_zoom

0xb6dd,	// (0x0009037d) level_8_zoom

0xb6e6,	// (0x00090386) level_9_zoom

0xb6f7,	// (0x00090397) popup_phob_thumbnail_window_g1

0xb6ff,	// (0x0009039f) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x00094117) popup_phob_thumbnail_window_g

0x1030,	// (0x00085cd0) level_1_location

0x1038,	// (0x00085cd8) level_2_location

0x1040,	// (0x00085ce0) level_3_location

0x1048,	// (0x00085ce8) level_4_location

0xb636,	// (0x000902d6) level_5_location

0x48e7,	// (0x00089587) mce_icon_pane_g1

0x48ef,	// (0x0008958f) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x0009411c) mce_icon_pane_g

0x48f7,	// (0x00089597) main_mup_pane_g1_ParamLimits

0x48f7,	// (0x00089597) main_mup_pane_g1

0x490d,	// (0x000895ad) main_mup_pane_g2_ParamLimits

0x490d,	// (0x000895ad) main_mup_pane_g2

0x4925,	// (0x000895c5) main_mup_pane_g3_ParamLimits

0x4925,	// (0x000895c5) main_mup_pane_g3

0x493d,	// (0x000895dd) main_mup_pane_g4_ParamLimits

0x493d,	// (0x000895dd) main_mup_pane_g4

0x4955,	// (0x000895f5) main_mup_pane_g5_ParamLimits

0x4955,	// (0x000895f5) main_mup_pane_g5

0x4971,	// (0x00089611) main_mup_pane_g6_ParamLimits

0x4971,	// (0x00089611) main_mup_pane_g6

0x4989,	// (0x00089629) main_mup_pane_g7_ParamLimits

0x4989,	// (0x00089629) main_mup_pane_g7

0x49a1,	// (0x00089641) main_mup_pane_g8_ParamLimits

0x49a1,	// (0x00089641) main_mup_pane_g8

0x49bb,	// (0x0008965b) main_mup_pane_g9_ParamLimits

0x49bb,	// (0x0008965b) main_mup_pane_g9

0x49d5,	// (0x00089675) main_mup_pane_g10_ParamLimits

0x49d5,	// (0x00089675) main_mup_pane_g10

0x49ef,	// (0x0008968f) main_mup_pane_g11_ParamLimits

0x49ef,	// (0x0008968f) main_mup_pane_g11

0x4a03,	// (0x000896a3) main_mup_pane_g12_ParamLimits

0x4a03,	// (0x000896a3) main_mup_pane_g12

0x4a19,	// (0x000896b9) main_mup_pane_g13_ParamLimits

0x4a19,	// (0x000896b9) main_mup_pane_g13

0x000c,

0xf481,	// (0x00094121) main_mup_pane_g_ParamLimits

0xf481,	// (0x00094121) main_mup_pane_g

0x4a2d,	// (0x000896cd) main_mup_pane_t1_ParamLimits

0x4a2d,	// (0x000896cd) main_mup_pane_t1

0x4a47,	// (0x000896e7) main_mup_pane_t2_ParamLimits

0x4a47,	// (0x000896e7) main_mup_pane_t2

0x4a5f,	// (0x000896ff) main_mup_pane_t3_ParamLimits

0x4a5f,	// (0x000896ff) main_mup_pane_t3

0x4a77,	// (0x00089717) main_mup_pane_t4_ParamLimits

0x4a77,	// (0x00089717) main_mup_pane_t4

0x4a95,	// (0x00089735) main_mup_pane_t5_ParamLimits

0x4a95,	// (0x00089735) main_mup_pane_t5

0x4aaa,	// (0x0008974a) main_mup_pane_t6_ParamLimits

0x4aaa,	// (0x0008974a) main_mup_pane_t6

0x0005,

0xf49c,	// (0x0009413c) main_mup_pane_t_ParamLimits

0xf49c,	// (0x0009413c) main_mup_pane_t

0x4abc,	// (0x0008975c) mup_progress_pane_ParamLimits

0x4abc,	// (0x0008975c) mup_progress_pane

0x4ac8,	// (0x00089768) mup_visualizer_pane_ParamLimits

0x4ac8,	// (0x00089768) mup_visualizer_pane

0x4af8,	// (0x00089798) mup_volume_pane_ParamLimits

0x4af8,	// (0x00089798) mup_volume_pane

0xb707,	// (0x000903a7) mup_visualizer_pane_g1_ParamLimits

0xb707,	// (0x000903a7) mup_visualizer_pane_g1

0xb707,	// (0x000903a7) mup_visualizer_pane_g2_ParamLimits

0xb707,	// (0x000903a7) mup_visualizer_pane_g2

0xb56b,	// (0x0009020b) mup_visualizer_pane_g3_ParamLimits

0xb56b,	// (0x0009020b) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x00094149) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x00094149) mup_visualizer_pane_g

0x2d85,	// (0x00087a25) mup_volume_pane_g1

0xb71d,	// (0x000903bd) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x00094150) mup_volume_pane_g

0x2d85,	// (0x00087a25) mup_progress_pane_g1

0xb726,	// (0x000903c6) mup_progress_pane_g2

0xb72f,	// (0x000903cf) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x00094155) mup_progress_pane_g

0x0be4,	// (0x00085884) bg_popup_window_pane_cp05

0xb738,	// (0x000903d8) heading_pane_cp02_ParamLimits

0xb738,	// (0x000903d8) heading_pane_cp02

0xb752,	// (0x000903f2) list_popup_blid_pane

0xb75a,	// (0x000903fa) list_blid_sat_info_pane_ParamLimits

0xb75a,	// (0x000903fa) list_blid_sat_info_pane

0xb76d,	// (0x0009040d) list_blid_sat_info_pane_g1

0xb775,	// (0x00090415) list_blid_sat_info_pane_t1

0x4c0e,	// (0x000898ae) mup_equalizer_pane_ParamLimits

0x4c0e,	// (0x000898ae) mup_equalizer_pane

0x4c27,	// (0x000898c7) mup_equalizer_pane_cp1_ParamLimits

0x4c27,	// (0x000898c7) mup_equalizer_pane_cp1

0x4c44,	// (0x000898e4) mup_equalizer_pane_cp2_ParamLimits

0x4c44,	// (0x000898e4) mup_equalizer_pane_cp2

0x4c61,	// (0x00089901) mup_equalizer_pane_cp3_ParamLimits

0x4c61,	// (0x00089901) mup_equalizer_pane_cp3

0x4c82,	// (0x00089922) mup_equalizer_pane_cp4_ParamLimits

0x4c82,	// (0x00089922) mup_equalizer_pane_cp4

0x4ca3,	// (0x00089943) mup_equalizer_pane_cp5

0x4cb7,	// (0x00089957) mup_equalizer_pane_cp6

0x4ccb,	// (0x0008996b) mup_equalizer_pane_cp7

0x0f4e,	// (0x00085bee) bg_popup_call_poc_act_pane_g9

0x0f56,	// (0x00085bf6) bg_popup_call_poc_act_pane_g10

0x0f5e,	// (0x00085bfe) bg_popup_call_poc_act_pane_g11

0x000a,

0x2905,	// (0x000875a5) mup_scale_pane

0x2d85,	// (0x00087a25) mup_scale_pane_g1

0xb783,	// (0x00090423) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x00094171) mup_scale_pane_g

0xb7a7,	// (0x00090447) msg_data_pane

0xb7af,	// (0x0009044f) scroll_pane_cp017

0x4cf1,	// (0x00089991) bg_list_pane_cp04_ParamLimits

0x4cf1,	// (0x00089991) bg_list_pane_cp04

0xb7b7,	// (0x00090457) msg_data_pane_g1

0x4d11,	// (0x000899b1) msg_data_pane_g2

0x4d1b,	// (0x000899bb) msg_data_pane_g3

0x4d23,	// (0x000899c3) msg_data_pane_g4

0x4d2b,	// (0x000899cb) msg_data_pane_g5

0x4d33,	// (0x000899d3) msg_data_pane_g6

0x4d3b,	// (0x000899db) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x00094180) msg_data_pane_g

0x4d43,	// (0x000899e3) msg_text_pane_ParamLimits

0x4d43,	// (0x000899e3) msg_text_pane

0x4d65,	// (0x00089a05) qrid_highlight_pane_cp011_ParamLimits

0x4d65,	// (0x00089a05) qrid_highlight_pane_cp011

0x0be4,	// (0x00085884) msg_body_pane

0x0be4,	// (0x00085884) msg_header_pane

0xb7c8,	// (0x00090468) input_focus_pane_cp07

0x4d89,	// (0x00089a29) msg_header_pane_t1_ParamLimits

0x4d89,	// (0x00089a29) msg_header_pane_t1

0x4d9d,	// (0x00089a3d) msg_header_pane_t2_ParamLimits

0x4d9d,	// (0x00089a3d) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x00094194) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x00094194) msg_header_pane_t

0xb7dd,	// (0x0009047d) msg_body_pane_g1

0x4daf,	// (0x00089a4f) msg_body_pane_t1_ParamLimits

0x4daf,	// (0x00089a4f) msg_body_pane_t1

0x4de0,	// (0x00089a80) msg_body_pane_t2_ParamLimits

0x4de0,	// (0x00089a80) msg_body_pane_t2

0x4df2,	// (0x00089a92) msg_body_pane_t3_ParamLimits

0x4df2,	// (0x00089a92) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x00094199) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x00094199) msg_body_pane_t

0x4e3e,	// (0x00089ade) main_viewer_pane_g1_ParamLimits

0x4e3e,	// (0x00089ade) main_viewer_pane_g1

0x4e4c,	// (0x00089aec) main_viewer_pane_g2_ParamLimits

0x4e4c,	// (0x00089aec) main_viewer_pane_g2

0x4e5a,	// (0x00089afa) main_viewer_pane_g3_ParamLimits

0x4e5a,	// (0x00089afa) main_viewer_pane_g3

0x4e69,	// (0x00089b09) main_viewer_pane_g4_ParamLimits

0x4e69,	// (0x00089b09) main_viewer_pane_g4

0xb7fd,	// (0x0009049d) main_viewer_pane_g5_ParamLimits

0xb7fd,	// (0x0009049d) main_viewer_pane_g5

0xb7fd,	// (0x0009049d) main_viewer_pane_g7_ParamLimits

0xb7fd,	// (0x0009049d) main_viewer_pane_g7

0xb116,	// (0x0008fdb6) main_viewer_pane_g8_ParamLimits

0xb116,	// (0x0008fdb6) main_viewer_pane_g8

0x0007,

0xf509,	// (0x000941a9) main_viewer_pane_g_ParamLimits

0xf509,	// (0x000941a9) main_viewer_pane_g

0xb81b,	// (0x000904bb) viewer_content_pane_ParamLimits

0xb81b,	// (0x000904bb) viewer_content_pane

0x4ea5,	// (0x00089b45) main_postcard_pane_g1_ParamLimits

0x4ea5,	// (0x00089b45) main_postcard_pane_g1

0x4ebb,	// (0x00089b5b) main_postcard_pane_g2_ParamLimits

0x4ebb,	// (0x00089b5b) main_postcard_pane_g2

0x4ed1,	// (0x00089b71) main_postcard_pane_g3_ParamLimits

0x4ed1,	// (0x00089b71) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x000941ba) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x000941ba) main_postcard_pane_g

0x4ee8,	// (0x00089b88) main_postcard_pane_g4

0x1163,	// (0x00085e03) smil_status_volume_pane_g2

0x4f2b,	// (0x00089bcb) postcard_pane_ParamLimits

0x4f2b,	// (0x00089bcb) postcard_pane

0xb829,	// (0x000904c9) postcard_pane_g1_ParamLimits

0xb829,	// (0x000904c9) postcard_pane_g1

0x4f6d,	// (0x00089c0d) postcard_pane_g2_ParamLimits

0x4f6d,	// (0x00089c0d) postcard_pane_g2

0x4f79,	// (0x00089c19) postcard_pane_g3_ParamLimits

0x4f79,	// (0x00089c19) postcard_pane_g3

0xb837,	// (0x000904d7) postcard_pane_g4_ParamLimits

0xb837,	// (0x000904d7) postcard_pane_g4

0x4f85,	// (0x00089c25) postcard_pane_g5_ParamLimits

0x4f85,	// (0x00089c25) postcard_pane_g5

0x4f9a,	// (0x00089c3a) postcard_pane_g6_ParamLimits

0x4f9a,	// (0x00089c3a) postcard_pane_g6

0xb829,	// (0x000904c9) postcard_pane_g7_ParamLimits

0xb829,	// (0x000904c9) postcard_pane_g7

0x0006,

0xf527,	// (0x000941c7) postcard_pane_g_ParamLimits

0xf527,	// (0x000941c7) postcard_pane_g

0x4fae,	// (0x00089c4e) main_mp2_pane_g1_ParamLimits

0x4fae,	// (0x00089c4e) main_mp2_pane_g1

0x4fba,	// (0x00089c5a) main_mp2_pane_g2_ParamLimits

0x4fba,	// (0x00089c5a) main_mp2_pane_g2

0x4fc6,	// (0x00089c66) main_mp2_pane_g3_ParamLimits

0x4fc6,	// (0x00089c66) main_mp2_pane_g3

0x0002,

0xf536,	// (0x000941d6) main_mp2_pane_g_ParamLimits

0xf536,	// (0x000941d6) main_mp2_pane_g

0x4fd2,	// (0x00089c72) main_mp2_pane_t1_ParamLimits

0x4fd2,	// (0x00089c72) main_mp2_pane_t1

0x4fe7,	// (0x00089c87) main_mp2_pane_t2_ParamLimits

0x4fe7,	// (0x00089c87) main_mp2_pane_t2

0x4ff9,	// (0x00089c99) main_mp2_pane_t3_ParamLimits

0x4ff9,	// (0x00089c99) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x000941dd) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x000941dd) main_mp2_pane_t

0xb845,	// (0x000904e5) pec_content_pane_ParamLimits

0xb845,	// (0x000904e5) pec_content_pane

0xad69,	// (0x0008fa09) scroll_pane_cp015

0xb857,	// (0x000904f7) pec_attribute_pane_ParamLimits

0xb857,	// (0x000904f7) pec_attribute_pane

0x500b,	// (0x00089cab) pec_content_pane_g1_ParamLimits

0x500b,	// (0x00089cab) pec_content_pane_g1

0xb867,	// (0x00090507) pec_content_pane_t1_ParamLimits

0xb867,	// (0x00090507) pec_content_pane_t1

0xb879,	// (0x00090519) pec_content_pane_t2_ParamLimits

0xb879,	// (0x00090519) pec_content_pane_t2

0x0001,

0xf544,	// (0x000941e4) pec_content_pane_t_ParamLimits

0xf544,	// (0x000941e4) pec_content_pane_t

0x5017,	// (0x00089cb7) list_single_graphic_pane_cp01_ParamLimits

0x5017,	// (0x00089cb7) list_single_graphic_pane_cp01

0x2905,	// (0x000875a5) bg_popup_sub_pane_cp04

0xb88b,	// (0x0009052b) popup_mup_playback_window_g1

0xb897,	// (0x00090537) popup_mup_playback_window_t1

0xb8ac,	// (0x0009054c) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x000941e9) popup_mup_playback_window_t

0xb8e3,	// (0x00090583) main_image_pane_g1_ParamLimits

0xb8e3,	// (0x00090583) main_image_pane_g1

0xb926,	// (0x000905c6) scroll_pane_cp018_ParamLimits

0xb926,	// (0x000905c6) scroll_pane_cp018

0xb93e,	// (0x000905de) scroll_pane_cp016_ParamLimits

0xb93e,	// (0x000905de) scroll_pane_cp016

0x50e4,	// (0x00089d84) smil2_image_pane_ParamLimits

0x50e4,	// (0x00089d84) smil2_image_pane

0x5114,	// (0x00089db4) smil2_root_pane_ParamLimits

0x5114,	// (0x00089db4) smil2_root_pane

0x514c,	// (0x00089dec) smil2_text_pane_ParamLimits

0x514c,	// (0x00089dec) smil2_text_pane

0x0be4,	// (0x00085884) bg_list_pane_cp06

0xb97a,	// (0x0009061a) grid_radio_pane

0x0be4,	// (0x00085884) bg_popup_window_pane_cp06

0xb982,	// (0x00090622) main_fmradio_pane_t1

0xb3ca,	// (0x0009006a) heading_pane_cp04

0xb990,	// (0x00090630) main_fmradio_pane_t2

0x0f66,	// (0x00085c06) popup_cale_lunar_info_window_g1

0xb99e,	// (0x0009063e) main_fmradio_pane_t3

0x0f6e,	// (0x00085c0e) popup_cale_lunar_info_window_g2

0xb9ac,	// (0x0009064c) main_fmradio_pane_t4

0x0001,

0xb9ba,	// (0x0009065a) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x000942c4) popup_cale_lunar_info_window_g

0xf55e,	// (0x000941fe) main_fmradio_pane_t

0xb9c8,	// (0x00090668) wait_bar_pane_cp03

0xb9d0,	// (0x00090670) cell_fmradio_pane_ParamLimits

0xb9d0,	// (0x00090670) cell_fmradio_pane

0xb829,	// (0x000904c9) cell_fmradio_pane_g1_ParamLimits

0xb829,	// (0x000904c9) cell_fmradio_pane_g1

0x0be4,	// (0x00085884) grid_highlight_pane_cp011

0xb9e3,	// (0x00090683) poc_content_pane_ParamLimits

0xb9e3,	// (0x00090683) poc_content_pane

0xb9f5,	// (0x00090695) scroll_pane_cp019

0x51cc,	// (0x00089e6c) popup_call_poc_act_window_ParamLimits

0x51cc,	// (0x00089e6c) popup_call_poc_act_window

0x51f0,	// (0x00089e90) popup_call_poc_inact_window_ParamLimits

0x51f0,	// (0x00089e90) popup_call_poc_inact_window

0xf5fb,	// (0x0009429b) bg_popup_call_poc_act_pane_g

0x0ede,	// (0x00085b7e) bg_popup_call_poc_inact_pane_g1

0x0ee6,	// (0x00085b86) bg_popup_call_poc_inact_pane_g2

0xb9fd,	// (0x0009069d) popup_call_poc_act_window_g2

0x0eee,	// (0x00085b8e) bg_popup_call_poc_inact_pane_g3

0x0ef6,	// (0x00085b96) bg_popup_call_poc_inact_pane_g4

0x0efe,	// (0x00085b9e) bg_popup_call_poc_inact_pane_g5

0xba05,	// (0x000906a5) popup_call_poc_act_window_t1_ParamLimits

0xba05,	// (0x000906a5) popup_call_poc_act_window_t1

0xba2d,	// (0x000906cd) popup_call_poc_act_window_t2_ParamLimits

0xba2d,	// (0x000906cd) popup_call_poc_act_window_t2

0xba55,	// (0x000906f5) popup_call_poc_act_window_t3_ParamLimits

0xba55,	// (0x000906f5) popup_call_poc_act_window_t3

0xba7d,	// (0x0009071d) popup_call_poc_act_window_t4_ParamLimits

0xba7d,	// (0x0009071d) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x00094209) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x00094209) popup_call_poc_act_window_t

0x0f06,	// (0x00085ba6) bg_popup_call_poc_inact_pane_g6

0x0f0e,	// (0x00085bae) bg_popup_call_poc_inact_pane_g7

0x0f16,	// (0x00085bb6) bg_popup_call_poc_inact_pane_g8

0xba8f,	// (0x0009072f) popup_call_poc_inact_window_g2

0x0f1e,	// (0x00085bbe) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x00094288) bg_popup_call_poc_inact_pane_g

0xba97,	// (0x00090737) popup_call_poc_inact_window_t1_ParamLimits

0xba97,	// (0x00090737) popup_call_poc_inact_window_t1

0xbaac,	// (0x0009074c) popup_call_poc_inact_window_t2_ParamLimits

0xbaac,	// (0x0009074c) popup_call_poc_inact_window_t2

0xbac1,	// (0x00090761) popup_call_poc_inact_window_t3_ParamLimits

0xbac1,	// (0x00090761) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x00094212) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x00094212) popup_call_poc_inact_window_t

0x10d6,	// (0x00085d76) context_pane_ParamLimits

0x5a23,	// (0x0008a6c3) signal_pane_ParamLimits

0xb636,	// (0x000902d6) main_call2_pane

0x10c4,	// (0x00085d64) popup_phob_thumbnail2_window_ParamLimits

0x10c4,	// (0x00085d64) popup_phob_thumbnail2_window

0xb7e5,	// (0x00090485) aid_hotspot_pointer_arrow_pane

0xb7ed,	// (0x0009048d) aid_hotspot_pointer_hand_pane

0x5539,	// (0x0008a1d9) phob_pre_status_pane_g5

0x3439,	// (0x000880d9) cams_zoom_pane_ParamLimits

0x3448,	// (0x000880e8) image_vga_pane_ParamLimits

0x3462,	// (0x00088102) main_camera_pane_g1_ParamLimits

0x3474,	// (0x00088114) main_camera_pane_g2_ParamLimits

0x3484,	// (0x00088124) main_camera_pane_g3_ParamLimits

0x3494,	// (0x00088134) main_camera_pane_g4_ParamLimits

0x34a4,	// (0x00088144) main_camera_pane_g5_ParamLimits

0x34b4,	// (0x00088154) main_camera_pane_g6_ParamLimits

0x34c6,	// (0x00088166) main_camera_pane_g7_ParamLimits

0xf271,	// (0x00093f11) main_camera_pane_g_ParamLimits

0x34e2,	// (0x00088182) main_camera_pane_t1_ParamLimits

0x34f8,	// (0x00088198) main_camera_pane_t2_ParamLimits

0xf282,	// (0x00093f22) main_camera_pane_t_ParamLimits

0x2905,	// (0x000875a5) bg_popup_preview_window_pane_cp01_ParamLimits

0x2905,	// (0x000875a5) bg_popup_preview_window_pane_cp01

0xbad6,	// (0x00090776) popup_phob_thumbnail2_window_g1_ParamLimits

0xbad6,	// (0x00090776) popup_phob_thumbnail2_window_g1

0x0be4,	// (0x00085884) call2_cli_visual_pane

0x5224,	// (0x00089ec4) popup_call2_audio_conf_window_ParamLimits

0x5224,	// (0x00089ec4) popup_call2_audio_conf_window

0x5244,	// (0x00089ee4) popup_call2_audio_first_window_ParamLimits

0x5244,	// (0x00089ee4) popup_call2_audio_first_window

0x52da,	// (0x00089f7a) popup_call2_audio_in_window_ParamLimits

0x52da,	// (0x00089f7a) popup_call2_audio_in_window

0x5322,	// (0x00089fc2) popup_call2_audio_out_window_ParamLimits

0x5322,	// (0x00089fc2) popup_call2_audio_out_window

0x538c,	// (0x0008a02c) popup_call2_audio_second_window_ParamLimits

0x538c,	// (0x0008a02c) popup_call2_audio_second_window

0x53f2,	// (0x0008a092) popup_call2_audio_wait_window_ParamLimits

0x53f2,	// (0x0008a092) popup_call2_audio_wait_window

0x0be4,	// (0x00085884) bg_popup_call2_act_pane_cp03

0x0e21,	// (0x00085ac1) list_conf_pane_cp

0xbae2,	// (0x00090782) popup_call2_audio_conf_window_t1

0xb427,	// (0x000900c7) list_single_graphic_popup_conf2_pane_ParamLimits

0xb427,	// (0x000900c7) list_single_graphic_popup_conf2_pane

0xb43a,	// (0x000900da) list_highlight_pane_cp04

0xbaf0,	// (0x00090790) list_single_graphic_popup_conf2_pane_g1

0xb44b,	// (0x000900eb) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x00094219) list_single_graphic_popup_conf2_pane_g

0xbafa,	// (0x0009079a) list_single_graphic_popup_conf2_pane_t1

0xbb08,	// (0x000907a8) bg_popup_call2_act_pane_cp01_ParamLimits

0xbb08,	// (0x000907a8) bg_popup_call2_act_pane_cp01

0xbb92,	// (0x00090832) call_type_pane_cp05_ParamLimits

0xbb92,	// (0x00090832) call_type_pane_cp05

0xbbe6,	// (0x00090886) popup_call2_audio_second_window_g1_ParamLimits

0xbbe6,	// (0x00090886) popup_call2_audio_second_window_g1

0xbc3a,	// (0x000908da) popup_call2_audio_second_window_g2_ParamLimits

0xbc3a,	// (0x000908da) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x0009421e) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x0009421e) popup_call2_audio_second_window_g

0xbc9f,	// (0x0009093f) popup_call2_audio_second_window_t1_ParamLimits

0xbc9f,	// (0x0009093f) popup_call2_audio_second_window_t1

0xbd5a,	// (0x000909fa) popup_call2_audio_second_window_t2_ParamLimits

0xbd5a,	// (0x000909fa) popup_call2_audio_second_window_t2

0xbdad,	// (0x00090a4d) popup_call2_audio_second_window_t3_ParamLimits

0xbdad,	// (0x00090a4d) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x00094225) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x00094225) popup_call2_audio_second_window_t

0x0be4,	// (0x00085884) bg_popup_call2_in_pane_cp02

0x0bee,	// (0x0008588e) call_type_pane_cp04

0x0bf6,	// (0x00085896) popup_call2_audio_wait_window_g1

0x0bfe,	// (0x0008589e) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x00093dfe) popup_call2_audio_wait_window_g

0x0c06,	// (0x000858a6) popup_call2_audio_wait_window_t3

0xbea0,	// (0x00090b40) bg_popup_call2_act_pane_ParamLimits

0xbea0,	// (0x00090b40) bg_popup_call2_act_pane

0xbf60,	// (0x00090c00) call_type_pane_cp03_ParamLimits

0xbf60,	// (0x00090c00) call_type_pane_cp03

0xbfc4,	// (0x00090c64) popup_call2_audio_first_window_g1_ParamLimits

0xbfc4,	// (0x00090c64) popup_call2_audio_first_window_g1

0xc034,	// (0x00090cd4) popup_call2_audio_first_window_g2_ParamLimits

0xc034,	// (0x00090cd4) popup_call2_audio_first_window_g2

0xb707,	// (0x000903a7) popup_call2_audio_first_window_g3_ParamLimits

0xb707,	// (0x000903a7) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x0009422e) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x0009422e) popup_call2_audio_first_window_g

0xc112,	// (0x00090db2) popup_call2_audio_first_window_t1_ParamLimits

0xc112,	// (0x00090db2) popup_call2_audio_first_window_t1

0xc215,	// (0x00090eb5) popup_call2_audio_first_window_t4_ParamLimits

0xc215,	// (0x00090eb5) popup_call2_audio_first_window_t4

0xc2f8,	// (0x00090f98) popup_call2_audio_first_window_t5_ParamLimits

0xc2f8,	// (0x00090f98) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x00094239) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x00094239) popup_call2_audio_first_window_t

0x0e37,	// (0x00085ad7) bg_popup_call2_act_pane_g1

0x0f76,	// (0x00085c16) popup_cale_lunar_info_window_t1

0x0f84,	// (0x00085c24) popup_cale_lunar_info_window_t2

0x0f92,	// (0x00085c32) popup_cale_lunar_info_window_t3

0x0be4,	// (0x00085884) bg_popup_call2_bubble_pane

0xc3f9,	// (0x00091099) bg_popup_call2_in_pane_cp01_ParamLimits

0xc3f9,	// (0x00091099) bg_popup_call2_in_pane_cp01

0x08c0,	// (0x00085560) call_type_pane_cp02

0xc441,	// (0x000910e1) popup_call2_audio_out_window_g1_ParamLimits

0xc441,	// (0x000910e1) popup_call2_audio_out_window_g1

0xc46d,	// (0x0009110d) popup_call2_audio_out_window_g2_ParamLimits

0xc46d,	// (0x0009110d) popup_call2_audio_out_window_g2

0xc495,	// (0x00091135) popup_call2_audio_out_window_g3_ParamLimits

0xc495,	// (0x00091135) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x00094242) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x00094242) popup_call2_audio_out_window_g

0xc4d0,	// (0x00091170) popup_call2_audio_out_window_t1_ParamLimits

0xc4d0,	// (0x00091170) popup_call2_audio_out_window_t1

0xc52f,	// (0x000911cf) popup_call2_audio_out_window_t2_ParamLimits

0xc52f,	// (0x000911cf) popup_call2_audio_out_window_t2

0xc583,	// (0x00091223) popup_call2_audio_out_window_t3_ParamLimits

0xc583,	// (0x00091223) popup_call2_audio_out_window_t3

0xc599,	// (0x00091239) popup_call2_audio_out_window_t4_ParamLimits

0xc599,	// (0x00091239) popup_call2_audio_out_window_t4

0xc5af,	// (0x0009124f) popup_call2_audio_out_window_t5_ParamLimits

0xc5af,	// (0x0009124f) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x0009424b) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x0009424b) popup_call2_audio_out_window_t

0xc613,	// (0x000912b3) bg_popup_call2_in_pane_ParamLimits

0xc613,	// (0x000912b3) bg_popup_call2_in_pane

0xc66f,	// (0x0009130f) popup_call2_audio_in_window_g1_ParamLimits

0xc66f,	// (0x0009130f) popup_call2_audio_in_window_g1

0xc6a7,	// (0x00091347) popup_call2_audio_in_window_g2_ParamLimits

0xc6a7,	// (0x00091347) popup_call2_audio_in_window_g2

0xc6df,	// (0x0009137f) popup_call2_audio_in_window_g3_ParamLimits

0xc6df,	// (0x0009137f) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x00094258) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x00094258) popup_call2_audio_in_window_g

0xc737,	// (0x000913d7) popup_call2_audio_in_window_t1_ParamLimits

0xc737,	// (0x000913d7) popup_call2_audio_in_window_t1

0xc7b7,	// (0x00091457) popup_call2_audio_in_window_t2_ParamLimits

0xc7b7,	// (0x00091457) popup_call2_audio_in_window_t2

0x0e48,	// (0x00085ae8) popup_call2_audio_in_window_t3_ParamLimits

0x0e48,	// (0x00085ae8) popup_call2_audio_in_window_t3

0x0e62,	// (0x00085b02) popup_call2_audio_in_window_t4_ParamLimits

0x0e62,	// (0x00085b02) popup_call2_audio_in_window_t4

0x0e74,	// (0x00085b14) popup_call2_audio_in_window_t5_ParamLimits

0x0e74,	// (0x00085b14) popup_call2_audio_in_window_t5

0x0e89,	// (0x00085b29) popup_call2_audio_in_window_t6_ParamLimits

0x0e89,	// (0x00085b29) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x00094261) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x00094261) popup_call2_audio_in_window_t

0x0e37,	// (0x00085ad7) bg_popup_call2_in_pane_g1

0x0fa0,	// (0x00085c40) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x000942c9) popup_cale_lunar_info_window_t

0x2905,	// (0x000875a5) bg_popup_call2_rect_pane_ParamLimits

0x2905,	// (0x000875a5) bg_popup_call2_rect_pane

0x0be4,	// (0x00085884) call2_cli_visual_graphic_pane

0x0be4,	// (0x00085884) call2_cli_visual_text_pane

0xec97,	// (0x00093937) smil_status_volume_pane_g3

0x0002,

0x2d85,	// (0x00087a25) call2_cli_visual_graphic_pane_g1

0x2d85,	// (0x00087a25) call2_cli_visual_graphic_pane_g2

0x2d85,	// (0x00087a25) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x0009426e) call2_cli_visual_graphic_pane_g

0x0e9e,	// (0x00085b3e) bg_popup_call2_rect_pane_g1

0x2ed4,	// (0x00087b74) bg_popup_call2_rect_pane_g2

0x0ea6,	// (0x00085b46) bg_popup_call2_rect_pane_g3

0x0eae,	// (0x00085b4e) bg_popup_call2_rect_pane_g4

0x0eb6,	// (0x00085b56) bg_popup_call2_rect_pane_g5

0x0ebe,	// (0x00085b5e) bg_popup_call2_rect_pane_g6

0x0ec6,	// (0x00085b66) bg_popup_call2_rect_pane_g7

0x0ece,	// (0x00085b6e) bg_popup_call2_rect_pane_g8

0x0ed6,	// (0x00085b76) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x00094275) bg_popup_call2_rect_pane_g

0x0ede,	// (0x00085b7e) bg_popup_call2_bubble_pane_g1

0x0ee6,	// (0x00085b86) bg_popup_call2_bubble_pane_g2

0x0eee,	// (0x00085b8e) bg_popup_call2_bubble_pane_g3

0x0ef6,	// (0x00085b96) bg_popup_call2_bubble_pane_g4

0x0efe,	// (0x00085b9e) bg_popup_call2_bubble_pane_g5

0x0f06,	// (0x00085ba6) bg_popup_call2_bubble_pane_g6

0x0f0e,	// (0x00085bae) bg_popup_call2_bubble_pane_g7

0x0f16,	// (0x00085bb6) bg_popup_call2_bubble_pane_g8

0x0f1e,	// (0x00085bbe) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x00094288) bg_popup_call2_bubble_pane_g

0x2f52,	// (0x00087bf2) aid_cale_week_size_cell_pane

0x350e,	// (0x000881ae) aid_cams_cif_uncrop_pane_ParamLimits

0x350e,	// (0x000881ae) aid_cams_cif_uncrop_pane

0x3705,	// (0x000883a5) aid_cams_size_cell_ParamLimits

0x3705,	// (0x000883a5) aid_cams_size_cell

0x3719,	// (0x000883b9) grid_cams_pane_ParamLimits

0x3733,	// (0x000883d3) linegrid_cams_pane_ParamLimits

0x3915,	// (0x000885b5) call_video_pane_t1

0x3929,	// (0x000885c9) call_video_pane_t2

0x0001,

0xf2d5,	// (0x00093f75) call_video_pane_t

0x3ccc,	// (0x0008896c) aid_cale_month_size_cell_pane_ParamLimits

0x3ccc,	// (0x0008896c) aid_cale_month_size_cell_pane

0xf672,	// (0x00094312) smil_status_volume_pane_g

0xeca4,	// (0x00093944) volume_smil_pane_ParamLimits

0x0783,	// (0x00085423) aid_popup2_width_pane

0x2e2c,	// (0x00087acc) cell_qdial_pane_g4_ParamLimits

0x2e2c,	// (0x00087acc) cell_qdial_pane_g4

0x474c,	// (0x000893ec) aid_blid_cardinal_pane_ParamLimits

0x4758,	// (0x000893f8) aid_blid_destination_pane_ParamLimits

0x4758,	// (0x000893f8) aid_blid_destination_pane

0x2905,	// (0x000875a5) bg_popup_call_poc_act_pane_ParamLimits

0x2905,	// (0x000875a5) bg_popup_call_poc_act_pane

0x2905,	// (0x000875a5) bg_popup_call_poc_inact_pane_ParamLimits

0x2905,	// (0x000875a5) bg_popup_call_poc_inact_pane

0x0f26,	// (0x00085bc6) bg_popup_call_poc_act_pane_g1

0x0f2e,	// (0x00085bce) bg_popup_call_poc_act_pane_g2

0x0f36,	// (0x00085bd6) bg_popup_call_poc_act_pane_g3

0x0ef6,	// (0x00085b96) bg_popup_call_poc_act_pane_g4

0x0efe,	// (0x00085b9e) bg_popup_call_poc_act_pane_g5

0x0f3e,	// (0x00085bde) bg_popup_call_poc_act_pane_g6

0x0f0e,	// (0x00085bae) bg_popup_call_poc_act_pane_g7

0x0f46,	// (0x00085be6) bg_popup_call_poc_act_pane_g8

0x0be4,	// (0x00085884) main_usb_pane

0x109f,	// (0x00085d3f) popup_cale_lunar_info_window

0x3b78,	// (0x00088818) im_reading_pane_t1_ParamLimits

0xacc1,	// (0x0008f961) list_im_pane_ParamLimits

0xacd2,	// (0x0008f972) scroll_pane_cp07_ParamLimits

0x0be4,	// (0x00085884) grid_highlight_pane_cp012

0x2905,	// (0x000875a5) mup_scale_pane_ParamLimits

0xb829,	// (0x000904c9) main_usb_pane_g1_ParamLimits

0xb829,	// (0x000904c9) main_usb_pane_g1

0x544e,	// (0x0008a0ee) main_usb_pane_g2_ParamLimits

0x544e,	// (0x0008a0ee) main_usb_pane_g2

0x0001,

0xf612,	// (0x000942b2) main_usb_pane_g_ParamLimits

0xf612,	// (0x000942b2) main_usb_pane_g

0x5464,	// (0x0008a104) main_usb_pane_t1_ParamLimits

0x5464,	// (0x0008a104) main_usb_pane_t1

0x5476,	// (0x0008a116) main_usb_pane_t2_ParamLimits

0x5476,	// (0x0008a116) main_usb_pane_t2

0x5488,	// (0x0008a128) main_usb_pane_t3_ParamLimits

0x5488,	// (0x0008a128) main_usb_pane_t3

0x549a,	// (0x0008a13a) main_usb_pane_t4_ParamLimits

0x549a,	// (0x0008a13a) main_usb_pane_t4

0x54ac,	// (0x0008a14c) main_usb_pane_t5_ParamLimits

0x54ac,	// (0x0008a14c) main_usb_pane_t5

0x54be,	// (0x0008a15e) main_usb_pane_t6_ParamLimits

0x54be,	// (0x0008a15e) main_usb_pane_t6

0x0005,

0xf617,	// (0x000942b7) main_usb_pane_t_ParamLimits

0x46fb,	// (0x0008939b) aid_text_placing

0x4704,	// (0x000893a4) main_location2_pane_t1_ParamLimits

0x4716,	// (0x000893b6) main_location2_pane_t2_ParamLimits

0x4728,	// (0x000893c8) main_location2_pane_t3_ParamLimits

0x473a,	// (0x000893da) main_location2_pane_t4_ParamLimits

0x473a,	// (0x000893da) main_location2_pane_t4

0xf436,	// (0x000940d6) main_location2_pane_t_ParamLimits

0x29dd,	// (0x0008767d) find_pinb_pane_g2_ParamLimits

0x29dd,	// (0x0008767d) find_pinb_pane_g2

0x0001,

0xf184,	// (0x00093e24) find_pinb_pane_g_ParamLimits

0xf184,	// (0x00093e24) find_pinb_pane_g

0x29e9,	// (0x00087689) find_pinb_pane_t1_ParamLimits

0x29fb,	// (0x0008769b) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x00093e29) find_pinb_pane_t_ParamLimits

0x0be4,	// (0x00085884) main_call3_pane

0x3fc8,	// (0x00088c68) cale_month_day_heading_pane_t1_ParamLimits

0x4026,	// (0x00088cc6) cale_month_day_heading_pane_t2_ParamLimits

0x408b,	// (0x00088d2b) cale_month_day_heading_pane_t3_ParamLimits

0x40f0,	// (0x00088d90) cale_month_day_heading_pane_t4_ParamLimits

0x4155,	// (0x00088df5) cale_month_day_heading_pane_t5_ParamLimits

0x41ba,	// (0x00088e5a) cale_month_day_heading_pane_t6_ParamLimits

0x421f,	// (0x00088ebf) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x00093fad) cale_month_day_heading_pane_t_ParamLimits

0xaf48,	// (0x0008fbe8) smil_status_volume_pane

0x4f49,	// (0x00089be9) postcard_address_pane_ParamLimits

0x4f49,	// (0x00089be9) postcard_address_pane

0x4f5b,	// (0x00089bfb) postcard_message_pane_ParamLimits

0x4f5b,	// (0x00089bfb) postcard_message_pane

0x542c,	// (0x0008a0cc) call2_cli_visual_pane_t1_ParamLimits

0x542c,	// (0x0008a0cc) call2_cli_visual_pane_t1

0x5c50,	// (0x0008a8f0) postcard_message_pane_t1_ParamLimits

0x5c50,	// (0x0008a8f0) postcard_message_pane_t1

0x5c39,	// (0x0008a8d9) postcard_address_pane_t1_ParamLimits

0x5c39,	// (0x0008a8d9) postcard_address_pane_t1

0x5c25,	// (0x0008a8c5) popup_call3_audio_in_window_ParamLimits

0x5c25,	// (0x0008a8c5) popup_call3_audio_in_window

0x5ab0,	// (0x0008a750) bg_popup_call3_in_pane_ParamLimits

0x5ab0,	// (0x0008a750) bg_popup_call3_in_pane

0x5b26,	// (0x0008a7c6) popup_call3_audio_in_window_g1_ParamLimits

0x5b26,	// (0x0008a7c6) popup_call3_audio_in_window_g1

0x5b46,	// (0x0008a7e6) popup_call3_audio_in_window_g2_ParamLimits

0x5b46,	// (0x0008a7e6) popup_call3_audio_in_window_g2

0x5b66,	// (0x0008a806) popup_call3_audio_in_window_g3_ParamLimits

0x5b66,	// (0x0008a806) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x00094319) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x00094319) popup_call3_audio_in_window_g

0x5b97,	// (0x0008a837) popup_call3_audio_in_window_t1_ParamLimits

0x5b97,	// (0x0008a837) popup_call3_audio_in_window_t1

0x5bd5,	// (0x0008a875) popup_call3_audio_in_window_t2_ParamLimits

0x5bd5,	// (0x0008a875) popup_call3_audio_in_window_t2

0x5c13,	// (0x0008a8b3) popup_call3_audio_in_window_t3_ParamLimits

0x5c13,	// (0x0008a8b3) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x00094322) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x00094322) popup_call3_audio_in_window_t

0xb636,	// (0x000902d6) bg_popup_call3_rect_pane

0x0e9e,	// (0x00085b3e) bg_popup_call3_rect_pane_g1

0x2ed4,	// (0x00087b74) bg_popup_call3_rect_pane_g2

0x0ea6,	// (0x00085b46) bg_popup_call3_rect_pane_g3

0x0eae,	// (0x00085b4e) bg_popup_call3_rect_pane_g4

0x0eb6,	// (0x00085b56) bg_popup_call3_rect_pane_g5

0x0ebe,	// (0x00085b5e) bg_popup_call3_rect_pane_g6

0x0ec6,	// (0x00085b66) bg_popup_call3_rect_pane_g7

0x4b0e,	// (0x000897ae) mup_visualizer_osc_pane

0xb715,	// (0x000903b5) mup_visualizer_spec_pane

0x5ae0,	// (0x0008a780) call3_video_qcif_pane_ParamLimits

0x5ae0,	// (0x0008a780) call3_video_qcif_pane

0x5af3,	// (0x0008a793) call3_video_qcif_uncrop_pane_ParamLimits

0x5af3,	// (0x0008a793) call3_video_qcif_uncrop_pane

0x5b01,	// (0x0008a7a1) call3_video_subqcif_pane_ParamLimits

0x5b01,	// (0x0008a7a1) call3_video_subqcif_pane

0x5b15,	// (0x0008a7b5) call3_video_subqcif_uncrop_pane_ParamLimits

0x5b15,	// (0x0008a7b5) call3_video_subqcif_uncrop_pane

0x5b86,	// (0x0008a826) popup_call3_audio_in_window_g4_ParamLimits

0x5b86,	// (0x0008a826) popup_call3_audio_in_window_g4

0x5a9f,	// (0x0008a73f) mup_spec_half_pane

0x5aa8,	// (0x0008a748) mup_spec_half_pane_cp

0x1136,	// (0x00085dd6) mup_osc_middle_pane

0x113f,	// (0x00085ddf) mup_visualizer_osc_pane_g1

0x5a7f,	// (0x0008a71f) mup_spec_bar_pane_ParamLimits

0x5a7f,	// (0x0008a71f) mup_spec_bar_pane

0x1123,	// (0x00085dc3) mup_spec_bar_pane_g1

0x112d,	// (0x00085dcd) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0009430d) mup_spec_bar_pane_g

0x2f52,	// (0x00087bf2) aid_cale_week_size_cell_pane_ParamLimits

0x2f65,	// (0x00087c05) bg_cale_heading_pane_ParamLimits

0x2f79,	// (0x00087c19) bg_cale_pane_cp01_ParamLimits

0x2f92,	// (0x00087c32) cale_week_corner_pane_ParamLimits

0x2fa8,	// (0x00087c48) cale_week_day_heading_pane_ParamLimits

0x2fbc,	// (0x00087c5c) cale_week_scroll_pane_g1_ParamLimits

0x2fcd,	// (0x00087c6d) cale_week_scroll_pane_g2_ParamLimits

0x2fde,	// (0x00087c7e) cale_week_scroll_pane_g3_ParamLimits

0x2fef,	// (0x00087c8f) cale_week_scroll_pane_g4_ParamLimits

0x3000,	// (0x00087ca0) cale_week_scroll_pane_g5_ParamLimits

0x3011,	// (0x00087cb1) cale_week_scroll_pane_g6_ParamLimits

0x3022,	// (0x00087cc2) cale_week_scroll_pane_g7_ParamLimits

0x3033,	// (0x00087cd3) cale_week_scroll_pane_g8_ParamLimits

0x3044,	// (0x00087ce4) cale_week_scroll_pane_g9_ParamLimits

0x3055,	// (0x00087cf5) cale_week_scroll_pane_g10_ParamLimits

0x3066,	// (0x00087d06) cale_week_scroll_pane_g11_ParamLimits

0x3077,	// (0x00087d17) cale_week_scroll_pane_g12_ParamLimits

0x3088,	// (0x00087d28) cale_week_scroll_pane_g13_ParamLimits

0x3099,	// (0x00087d39) cale_week_scroll_pane_g14_ParamLimits

0x30aa,	// (0x00087d4a) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x00093eb5) cale_week_scroll_pane_g_ParamLimits

0x30bb,	// (0x00087d5b) cale_week_time_pane_ParamLimits

0x30cc,	// (0x00087d6c) grid_cale_week_pane_ParamLimits

0x30df,	// (0x00087d7f) listscroll_cale_week_pane_t1

0x30f1,	// (0x00087d91) scroll_pane_cp08_ParamLimits

0x3d0d,	// (0x000889ad) cale_month_corner_pane_ParamLimits

0xaee8,	// (0x0008fb88) cale_month_pane_t1

0x3f8f,	// (0x00088c2f) cale_month_week_pane_ParamLimits

0x4547,	// (0x000891e7) popup_call_status_window_g1_ParamLimits

0x455b,	// (0x000891fb) popup_call_status_window_g2_ParamLimits

0x456f,	// (0x0008920f) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x0009405d) popup_call_status_window_g_ParamLimits

0xb347,	// (0x0008ffe7) aid_call2_pane

0x4d7b,	// (0x00089a1b) msg_header_pane_g1

0x4f49,	// (0x00089be9) postcard_address2_pane_ParamLimits

0x4f49,	// (0x00089be9) postcard_address2_pane

0x4f5b,	// (0x00089bfb) postcard_message2_pane_ParamLimits

0x4f5b,	// (0x00089bfb) postcard_message2_pane

0x5a31,	// (0x0008a6d1) message2_row_pane_ParamLimits

0x5a31,	// (0x0008a6d1) message2_row_pane

0x5a4d,	// (0x0008a6ed) address2_row_pane_ParamLimits

0x5a4d,	// (0x0008a6ed) address2_row_pane

0x10f1,	// (0x00085d91) postcard_message2_row_pane_g1

0x10f9,	// (0x00085d99) postcard_message2_row_pane_t1

0x10f1,	// (0x00085d91) address2_row_pane_g1

0x10f9,	// (0x00085d99) address2_row_pane_t1

0x33f4,	// (0x00088094) aid_size_cell_vorec

0x0be4,	// (0x00085884) main_rss_pane

0x5a60,	// (0x0008a700) rss_list_single_pane_ParamLimits

0x5a60,	// (0x0008a700) rss_list_single_pane

0x1107,	// (0x00085da7) rss_list_single_pane_t1

0x1115,	// (0x00085db5) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x00094308) rss_list_single_pane_t

0x0be4,	// (0x00085884) main_camera2_pane

0x0be4,	// (0x00085884) main_video2_pane

0x5cc9,	// (0x0008a969) cams_zoom_pane_cp2_ParamLimits

0x5cc9,	// (0x0008a969) cams_zoom_pane_cp2

0x5ce9,	// (0x0008a989) image2_vga_pane_ParamLimits

0x5ce9,	// (0x0008a989) image2_vga_pane

0x5d3a,	// (0x0008a9da) main_camera2_pane_g1_ParamLimits

0x5d3a,	// (0x0008a9da) main_camera2_pane_g1

0x5d5a,	// (0x0008a9fa) main_camera2_pane_g2_ParamLimits

0x5d5a,	// (0x0008a9fa) main_camera2_pane_g2

0x5d7a,	// (0x0008aa1a) main_camera2_pane_g3_ParamLimits

0x5d7a,	// (0x0008aa1a) main_camera2_pane_g3

0x5d9a,	// (0x0008aa3a) main_camera2_pane_g4_ParamLimits

0x5d9a,	// (0x0008aa3a) main_camera2_pane_g4

0x5dba,	// (0x0008aa5a) main_camera2_pane_g5_ParamLimits

0x5dba,	// (0x0008aa5a) main_camera2_pane_g5

0x5dda,	// (0x0008aa7a) main_camera2_pane_g6_ParamLimits

0x5dda,	// (0x0008aa7a) main_camera2_pane_g6

0x5dfa,	// (0x0008aa9a) main_camera2_pane_g7_ParamLimits

0x5dfa,	// (0x0008aa9a) main_camera2_pane_g7

0x5e1a,	// (0x0008aaba) main_camera2_pane_g8_ParamLimits

0x5e1a,	// (0x0008aaba) main_camera2_pane_g8

0x0008,

0xf689,	// (0x00094329) main_camera2_pane_g_ParamLimits

0xf689,	// (0x00094329) main_camera2_pane_g

0x5e5a,	// (0x0008aafa) main_camera2_pane_t1_ParamLimits

0x5e5a,	// (0x0008aafa) main_camera2_pane_t1

0x5e8f,	// (0x0008ab2f) main_camera2_pane_t2_ParamLimits

0x5e8f,	// (0x0008ab2f) main_camera2_pane_t2

0x5eb5,	// (0x0008ab55) main_camera2_pane_t3_ParamLimits

0x5eb5,	// (0x0008ab55) main_camera2_pane_t3

0x5f13,	// (0x0008abb3) main_camera2_pane_t4_ParamLimits

0x5f13,	// (0x0008abb3) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x0009433c) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x0009433c) main_camera2_pane_t

0x5fa5,	// (0x0008ac45) cams_zoom_pane_cp4_ParamLimits

0x5fa5,	// (0x0008ac45) cams_zoom_pane_cp4

0x5fbb,	// (0x0008ac5b) image2_cif_pane_ParamLimits

0x5fbb,	// (0x0008ac5b) image2_cif_pane

0x5fe6,	// (0x0008ac86) image2_subqcif_pane_ParamLimits

0x5fe6,	// (0x0008ac86) image2_subqcif_pane

0x6000,	// (0x0008aca0) main_video2_pane_g1_ParamLimits

0x6000,	// (0x0008aca0) main_video2_pane_g1

0x601a,	// (0x0008acba) main_video2_pane_g2_ParamLimits

0x601a,	// (0x0008acba) main_video2_pane_g2

0x6030,	// (0x0008acd0) main_video2_pane_g3_ParamLimits

0x6030,	// (0x0008acd0) main_video2_pane_g3

0x6046,	// (0x0008ace6) main_video2_pane_g4_ParamLimits

0x6046,	// (0x0008ace6) main_video2_pane_g4

0x605c,	// (0x0008acfc) main_video2_pane_g5_ParamLimits

0x605c,	// (0x0008acfc) main_video2_pane_g5

0x6072,	// (0x0008ad12) main_video2_pane_g6_ParamLimits

0x6072,	// (0x0008ad12) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x0009434b) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x0009434b) main_video2_pane_g

0x608c,	// (0x0008ad2c) main_video2_pane_t1_ParamLimits

0x608c,	// (0x0008ad2c) main_video2_pane_t1

0x60b0,	// (0x0008ad50) main_video2_pane_t2_ParamLimits

0x60b0,	// (0x0008ad50) main_video2_pane_t2

0x60fe,	// (0x0008ad9e) main_video2_pane_t3_ParamLimits

0x60fe,	// (0x0008ad9e) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x00094358) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x00094358) main_video2_pane_t

0x5579,	// (0x0008a219) call_muted_g2

0x0001,

0xf65a,	// (0x000942fa) call_muted_g

0x0be4,	// (0x00085884) main_mup2_pane

0x6142,	// (0x0008ade2) main_mup2_pane_g1_ParamLimits

0x6142,	// (0x0008ade2) main_mup2_pane_g1

0x614e,	// (0x0008adee) main_mup2_pane_g2_ParamLimits

0x614e,	// (0x0008adee) main_mup2_pane_g2

0xed12,	// (0x000939b2) main_mup_pane_g13_cp1

0xed1a,	// (0x000939ba) mup_volume_pane_cp1

0x616a,	// (0x0008ae0a) main_mup2_pane_g4_ParamLimits

0x616a,	// (0x0008ae0a) main_mup2_pane_g4

0x617c,	// (0x0008ae1c) main_mup2_pane_g5_ParamLimits

0x617c,	// (0x0008ae1c) main_mup2_pane_g5

0x618e,	// (0x0008ae2e) main_mup2_pane_g6_ParamLimits

0x618e,	// (0x0008ae2e) main_mup2_pane_g6

0x61a0,	// (0x0008ae40) main_mup2_pane_g7_ParamLimits

0x61a0,	// (0x0008ae40) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x0009435f) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x0009435f) main_mup2_pane_g

0x61b8,	// (0x0008ae58) main_mup2_pane_t1_ParamLimits

0x61b8,	// (0x0008ae58) main_mup2_pane_t1

0x61ce,	// (0x0008ae6e) main_mup2_pane_t2_ParamLimits

0x61ce,	// (0x0008ae6e) main_mup2_pane_t2

0x61e4,	// (0x0008ae84) main_mup2_pane_t3_ParamLimits

0x61e4,	// (0x0008ae84) main_mup2_pane_t3

0x61fa,	// (0x0008ae9a) main_mup2_pane_t4_ParamLimits

0x61fa,	// (0x0008ae9a) main_mup2_pane_t4

0x6212,	// (0x0008aeb2) main_mup2_pane_t5_ParamLimits

0x6212,	// (0x0008aeb2) main_mup2_pane_t5

0x622a,	// (0x0008aeca) main_mup2_pane_t6_ParamLimits

0x622a,	// (0x0008aeca) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x0009436e) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x0009436e) main_mup2_pane_t

0x625a,	// (0x0008aefa) mup2_visualizer_pane_ParamLimits

0x625a,	// (0x0008aefa) mup2_visualizer_pane

0x6288,	// (0x0008af28) mup_progress_pane_cp_ParamLimits

0x6288,	// (0x0008af28) mup_progress_pane_cp

0xecfd,	// (0x0009399d) mup_volume_pane_cp_ParamLimits

0xecfd,	// (0x0009399d) mup_volume_pane_cp

0x629c,	// (0x0008af3c) mup2_visualizer_pane_g1_ParamLimits

0x629c,	// (0x0008af3c) mup2_visualizer_pane_g1

0x1182,	// (0x00085e22) mup2_visualizer_pane_g2_ParamLimits

0x1182,	// (0x00085e22) mup2_visualizer_pane_g2

0x62b3,	// (0x0008af53) mup2_visualizer_pane_g3_ParamLimits

0x62b3,	// (0x0008af53) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x0009437b) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x0009437b) mup2_visualizer_pane_g

0xb972,	// (0x00090612) aid_size_cell_fmradio

0x572b,	// (0x0008a3cb) aid_height_parent_landcape

0xad50,	// (0x0008f9f0) wml_content_pane_cp

0xad58,	// (0x0008f9f8) wml_tabs_pane

0xad61,	// (0x0008fa01) popup_wml_miniature_window

0xad69,	// (0x0008fa09) scroll_pane_cp021

0xad7d,	// (0x0008fa1d) wml_content_pane_comp8

0x0be4,	// (0x00085884) bg_popup_sub_pane_cp05

0x11a0,	// (0x00085e40) popup_wml_miniature_window_g1

0x11a8,	// (0x00085e48) wml_miniature_view_pane

0x62bf,	// (0x0008af5f) aid_size_wml_view

0x62c7,	// (0x0008af67) wml_miniature_view_pane_g1

0x62d0,	// (0x0008af70) wml_miniature_view_pane_g2

0x62d9,	// (0x0008af79) wml_miniature_view_pane_g3

0x62e1,	// (0x0008af81) wml_miniature_view_pane_g4

0x62e9,	// (0x0008af89) wml_miniature_view_pane_g5

0x62f1,	// (0x0008af91) wml_miniature_view_pane_g6

0x62f9,	// (0x0008af99) wml_miniature_view_pane_g7

0x6301,	// (0x0008afa1) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x00094382) wml_miniature_view_pane_g

0x1176,	// (0x00085e16) background_graphic_ParamLimits

0x1176,	// (0x00085e16) background_graphic

0x11b0,	// (0x00085e50) wml_tabs_2_pane

0x11b9,	// (0x00085e59) wml_tabs_3_pane_ParamLimits

0x11b9,	// (0x00085e59) wml_tabs_3_pane

0x11cb,	// (0x00085e6b) wml_tabs_4_pane_ParamLimits

0x11cb,	// (0x00085e6b) wml_tabs_4_pane

0x11e1,	// (0x00085e81) wml_tabs_5_pane_ParamLimits

0x11e1,	// (0x00085e81) wml_tabs_5_pane

0x11fb,	// (0x00085e9b) wml_tabs_pane_g2_ParamLimits

0x11fb,	// (0x00085e9b) wml_tabs_pane_g2

0x120f,	// (0x00085eaf) wml_tabs_pane_g3_ParamLimits

0x120f,	// (0x00085eaf) wml_tabs_pane_g3

0x6309,	// (0x0008afa9) wml_tabs_2_active_pane_ParamLimits

0x6309,	// (0x0008afa9) wml_tabs_2_active_pane

0x631d,	// (0x0008afbd) wml_tabs_2_passive_pane_ParamLimits

0x631d,	// (0x0008afbd) wml_tabs_2_passive_pane

0x6331,	// (0x0008afd1) wml_tabs_3_active_pane_cp_ParamLimits

0x6331,	// (0x0008afd1) wml_tabs_3_active_pane_cp

0x6346,	// (0x0008afe6) wml_tabs_3_passive_pane_ParamLimits

0x6346,	// (0x0008afe6) wml_tabs_3_passive_pane

0x6359,	// (0x0008aff9) wml_tabs_3_passive_pane_cp_ParamLimits

0x6359,	// (0x0008aff9) wml_tabs_3_passive_pane_cp

0x6370,	// (0x0008b010) tabs_4_active_pane

0x6378,	// (0x0008b018) tabs_4_passive_pane

0x6382,	// (0x0008b022) tabs_4_passive_pane_cp

0x638a,	// (0x0008b02a) tabs_4_passive_pane_cp2

0x5446,	// (0x0008a0e6) aid_height_text

0x4ae4,	// (0x00089784) mup_volume_cont_pane_ParamLimits

0x4ae4,	// (0x00089784) mup_volume_cont_pane

0x299b,	// (0x0008763b) aid_size_cell_pinb

0x29a5,	// (0x00087645) aid_size_list_pinb

0x6274,	// (0x0008af14) mup2_volume_cont_pane_ParamLimits

0x6274,	// (0x0008af14) mup2_volume_cont_pane

0xece9,	// (0x00093989) mup2_volume_cont_pane_g1_ParamLimits

0xece9,	// (0x00093989) mup2_volume_cont_pane_g1

0x2637,	// (0x000872d7) aid_size_cell_touch_ParamLimits

0x2637,	// (0x000872d7) aid_size_cell_touch

0x285b,	// (0x000874fb) touch_pane_ParamLimits

0x285b,	// (0x000874fb) touch_pane

0x0771,	// (0x00085411) main_rss2_pane

0x122c,	// (0x00085ecc) listscroll_rss2_pane

0x1235,	// (0x00085ed5) rss2_navigation_pane

0x123d,	// (0x00085edd) list_rss2_pane

0xb4ed,	// (0x0009018d) scroll_pane_cp22

0x1245,	// (0x00085ee5) rss2_navigation_pane_g1

0x124e,	// (0x00085eee) rss2_navigation_pane_g2

0x1256,	// (0x00085ef6) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x00094393) rss2_navigation_pane_g

0x125e,	// (0x00085efe) rss2_navigation_pane_t1

0x6394,	// (0x0008b034) rss2_list_single_pane_ParamLimits

0x6394,	// (0x0008b034) rss2_list_single_pane

0x126c,	// (0x00085f0c) rss2_list_single_pane_t2

0x127a,	// (0x00085f1a) rss2_list_single_pane_t3_ParamLimits

0x127a,	// (0x00085f1a) rss2_list_single_pane_t3

0x1297,	// (0x00085f37) rss2_list_single_pane_t4

0x43d9,	// (0x00089079) smil_status_pane_g1

0xaafa,	// (0x0008f79a) main_image2_pane_ParamLimits

0xaafa,	// (0x0008f79a) main_image2_pane

0x5e3a,	// (0x0008aada) main_camera2_pane_g9_ParamLimits

0x5e3a,	// (0x0008aada) main_camera2_pane_g9

0x5f68,	// (0x0008ac08) main_camera2_pane_t5_ParamLimits

0x5f68,	// (0x0008ac08) main_camera2_pane_t5

0xecb9,	// (0x00093959) main_camera2_pane_t6_ParamLimits

0xecb9,	// (0x00093959) main_camera2_pane_t6

0x63a9,	// (0x0008b049) main_image2_pane_g1_ParamLimits

0x63a9,	// (0x0008b049) main_image2_pane_g1

0x5182,	// (0x00089e22) smil2_video_pane_ParamLimits

0x5182,	// (0x00089e22) smil2_video_pane

0x2677,	// (0x00087317) aid_zoom_text_primary_cp

0x07c7,	// (0x00085467) popup_preview_fixed_window

0xacb9,	// (0x0008f959) im_reading_pane_g1

0x5cb1,	// (0x0008a951) cams2_bc_adjust_pane_cp_ParamLimits

0x5cb1,	// (0x0008a951) cams2_bc_adjust_pane_cp

0x5f97,	// (0x0008ac37) cams2_bc_adjust_pane_ParamLimits

0x5f97,	// (0x0008ac37) cams2_bc_adjust_pane

0x1703,	// (0x000863a3) cams2_bc_adjust_pane_g1

0xed22,	// (0x000939c2) cams2_slider_pane

0xed2b,	// (0x000939cb) cams2_slider_pane_g1

0xed34,	// (0x000939d4) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x0009439a) cams2_slider_pane_g

0x2aea,	// (0x0008778a) calc_display_pane_ParamLimits

0x2b10,	// (0x000877b0) calc_paper_pane_ParamLimits

0x2b31,	// (0x000877d1) grid_calc_pane_ParamLimits

0xb3ad,	// (0x0009004d) popup_clock_digital_window_t1_ParamLimits

0xb90f,	// (0x000905af) main_image_pane_t1

0x2acc,	// (0x0008776c) aid_size_cell_calc_ParamLimits

0x2acc,	// (0x0008776c) aid_size_cell_calc

0x5771,	// (0x0008a411) popup_blid_sat_info2_window_ParamLimits

0x5771,	// (0x0008a411) popup_blid_sat_info2_window

0x12ad,	// (0x00085f4d) aid_size_cell_blid

0x12b5,	// (0x00085f55) bg_popup_window_pane_cp07

0x12d8,	// (0x00085f78) grid_popup_blid_pane

0x12e2,	// (0x00085f82) heading_pane_cp05_ParamLimits

0x12e2,	// (0x00085f82) heading_pane_cp05

0x13ac,	// (0x0008604c) cell_popup_blid_pane_ParamLimits

0x13ac,	// (0x0008604c) cell_popup_blid_pane

0x13d0,	// (0x00086070) cell_popup_blid_pane_g1

0x13d8,	// (0x00086078) cell_popup_blid_pane_t1

0x6244,	// (0x0008aee4) mup2_indicator_pane_ParamLimits

0x6244,	// (0x0008aee4) mup2_indicator_pane

0xb636,	// (0x000902d6) mup2_visualizer_osc_pane

0x118e,	// (0x00085e2e) mup2_visualizer_spec_pane_ParamLimits

0x118e,	// (0x00085e2e) mup2_visualizer_spec_pane

0x63bf,	// (0x0008b05f) mup2_spec_half_pane

0x63c8,	// (0x0008b068) mup2_spec_half_pane_cp

0x63d0,	// (0x0008b070) mup2_spec_bar_pane_ParamLimits

0x63d0,	// (0x0008b070) mup2_spec_bar_pane

0x1123,	// (0x00085dc3) mup2_spec_bar_pane_g1

0x112d,	// (0x00085dcd) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0009430d) mup2_spec_bar_pane_g

0x63f0,	// (0x0008b090) mup2_osc_middle_pane

0x113f,	// (0x00085ddf) mup2_visualizer_osc_pane_g1

0x07f1,	// (0x00085491) popup_number_entry_window_t1_ParamLimits

0x0804,	// (0x000854a4) popup_number_entry_window_t2_ParamLimits

0x0816,	// (0x000854b6) popup_number_entry_window_t3_ParamLimits

0x28ad,	// (0x0008754d) popup_number_entry_window_t5_ParamLimits

0x28ad,	// (0x0008754d) popup_number_entry_window_t5

0xf12f,	// (0x00093dcf) popup_number_entry_window_t_ParamLimits

0x0828,	// (0x000854c8) text_title_cp2_ParamLimits

0xb7f5,	// (0x00090495) aid_hotspot_pointer_text2_pane

0xb80f,	// (0x000904af) main_viewer_pane_g9_ParamLimits

0xb80f,	// (0x000904af) main_viewer_pane_g9

0xaee8,	// (0x0008fb88) cale_month_pane_t1_ParamLimits

0xaf7d,	// (0x0008fc1d) bg_cale_pane_ParamLimits

0xaf95,	// (0x0008fc35) list_cale_pane_ParamLimits

0x30df,	// (0x00087d7f) listscroll_cale_day_pane_t1

0xafa6,	// (0x0008fc46) scroll_pane_cp09_ParamLimits

0x4b16,	// (0x000897b6) main_mup_eq_pane_t1_ParamLimits

0x4b16,	// (0x000897b6) main_mup_eq_pane_t1

0x4b30,	// (0x000897d0) main_mup_eq_pane_t2_ParamLimits

0x4b30,	// (0x000897d0) main_mup_eq_pane_t2

0x4b4a,	// (0x000897ea) main_mup_eq_pane_t3_ParamLimits

0x4b4a,	// (0x000897ea) main_mup_eq_pane_t3

0x4b66,	// (0x00089806) main_mup_eq_pane_t4_ParamLimits

0x4b66,	// (0x00089806) main_mup_eq_pane_t4

0x4b82,	// (0x00089822) main_mup_eq_pane_t5_ParamLimits

0x4b82,	// (0x00089822) main_mup_eq_pane_t5

0x4b9e,	// (0x0008983e) main_mup_eq_pane_t6_ParamLimits

0x4b9e,	// (0x0008983e) main_mup_eq_pane_t6

0x4bb2,	// (0x00089852) main_mup_eq_pane_t7_ParamLimits

0x4bb2,	// (0x00089852) main_mup_eq_pane_t7

0x4bc6,	// (0x00089866) main_mup_eq_pane_t8_ParamLimits

0x4bc6,	// (0x00089866) main_mup_eq_pane_t8

0x4bda,	// (0x0008987a) main_mup_eq_pane_t9_ParamLimits

0x4bda,	// (0x0008987a) main_mup_eq_pane_t9

0x4bf4,	// (0x00089894) main_mup_eq_pane_t10_ParamLimits

0x4bf4,	// (0x00089894) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x0009415c) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x0009415c) main_mup_eq_pane_t

0x4ca3,	// (0x00089943) mup_equalizer_pane_cp5_ParamLimits

0x4cb7,	// (0x00089957) mup_equalizer_pane_cp6_ParamLimits

0x4ccb,	// (0x0008996b) mup_equalizer_pane_cp7_ParamLimits

0x0771,	// (0x00085411) main_gallery_pane

0x1148,	// (0x00085de8) smil2_volume_pane

0x1150,	// (0x00085df0) smil_status_volume_pane_g1_ParamLimits

0x1163,	// (0x00085e03) smil_status_volume_pane_g2_ParamLimits

0xec97,	// (0x00093937) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x00094312) smil_status_volume_pane_g_ParamLimits

0x12b5,	// (0x00085f55) bg_popup_window_pane_cp07_ParamLimits

0x12c3,	// (0x00085f63) blid_firmament_pane

0x63f9,	// (0x0008b099) aid_size_cell_gallery_ParamLimits

0x63f9,	// (0x0008b099) aid_size_cell_gallery

0x640f,	// (0x0008b0af) grid_gallery_pane_ParamLimits

0x640f,	// (0x0008b0af) grid_gallery_pane

0x6428,	// (0x0008b0c8) cell_gallery_pane_ParamLimits

0x6428,	// (0x0008b0c8) cell_gallery_pane

0x13e6,	// (0x00086086) bg_cell_gallery_focus_pane_ParamLimits

0x13e6,	// (0x00086086) bg_cell_gallery_focus_pane

0x13f8,	// (0x00086098) cell_gallery_pane_g1_ParamLimits

0x13f8,	// (0x00086098) cell_gallery_pane_g1

0x6471,	// (0x0008b111) cell_gallery_pane_g2_ParamLimits

0x6471,	// (0x0008b111) cell_gallery_pane_g2

0x647e,	// (0x0008b11e) cell_gallery_pane_g3_ParamLimits

0x647e,	// (0x0008b11e) cell_gallery_pane_g3

0x1404,	// (0x000860a4) cell_gallery_pane_g4_ParamLimits

0x1404,	// (0x000860a4) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x000943c0) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x000943c0) cell_gallery_pane_g

0x1410,	// (0x000860b0) bg_cell_gallery_focus_pane_g1

0x1418,	// (0x000860b8) bg_cell_gallery_focus_pane_g2

0x1420,	// (0x000860c0) bg_cell_gallery_focus_pane_g3

0x1428,	// (0x000860c8) bg_cell_gallery_focus_pane_g4

0x1430,	// (0x000860d0) bg_cell_gallery_focus_pane_g5

0x1438,	// (0x000860d8) bg_cell_gallery_focus_pane_g6

0x1440,	// (0x000860e0) bg_cell_gallery_focus_pane_g7

0x1448,	// (0x000860e8) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x000943c9) bg_cell_gallery_focus_pane_g

0x1450,	// (0x000860f0) aid_firma_cardinal

0x1464,	// (0x00086104) blid_firmament_pane_t1

0x147b,	// (0x0008611b) blid_firmament_pane_t2

0x1492,	// (0x00086132) blid_firmament_pane_t3

0x14a9,	// (0x00086149) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x000943da) blid_firmament_pane_t

0x14c0,	// (0x00086160) blid_sat_info_pane

0x14d0,	// (0x00086170) blid_sat_info_pane_g1

0x14d0,	// (0x00086170) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x000943e3) blid_sat_info_pane_g

0x14da,	// (0x0008617a) blid_sat_info_pane_t1

0x14e8,	// (0x00086188) smil2_volume_content_pane

0x14f1,	// (0x00086191) smil2_volume_pane_g1

0x0e3f,	// (0x00085adf) smil2_volume_content_pane_g1

0x14f9,	// (0x00086199) smil2_volume_content_pane_g2

0x1502,	// (0x000861a2) smil2_volume_content_pane_g3

0x150b,	// (0x000861ab) smil2_volume_content_pane_g4

0x1514,	// (0x000861b4) smil2_volume_content_pane_g5

0x151d,	// (0x000861bd) smil2_volume_content_pane_g6

0x1526,	// (0x000861c6) smil2_volume_content_pane_g7

0x152f,	// (0x000861cf) smil2_volume_content_pane_g8

0x1538,	// (0x000861d8) smil2_volume_content_pane_g9

0x1541,	// (0x000861e1) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x000943e8) smil2_volume_content_pane_g

0x3147,	// (0x00087de7) cale_week_day_heading_pane_t1_ParamLimits

0x3174,	// (0x00087e14) cale_week_day_heading_pane_t2_ParamLimits

0x31a1,	// (0x00087e41) cale_week_day_heading_pane_t3_ParamLimits

0x31ce,	// (0x00087e6e) cale_week_day_heading_pane_t4_ParamLimits

0x31fb,	// (0x00087e9b) cale_week_day_heading_pane_t5_ParamLimits

0x3228,	// (0x00087ec8) cale_week_day_heading_pane_t6_ParamLimits

0x3255,	// (0x00087ef5) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x00093ed4) cale_week_day_heading_pane_t_ParamLimits

0x3282,	// (0x00087f22) bg_cale_side_pane_ParamLimits

0x3290,	// (0x00087f30) cale_week_time_pane_t1_ParamLimits

0x32a8,	// (0x00087f48) cale_week_time_pane_t2_ParamLimits

0x32c0,	// (0x00087f60) cale_week_time_pane_t3_ParamLimits

0x32d8,	// (0x00087f78) cale_week_time_pane_t4_ParamLimits

0x32f0,	// (0x00087f90) cale_week_time_pane_t5_ParamLimits

0x3308,	// (0x00087fa8) cale_week_time_pane_t6_ParamLimits

0x3320,	// (0x00087fc0) cale_week_time_pane_t7_ParamLimits

0x3338,	// (0x00087fd8) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x00093ee3) cale_week_time_pane_t_ParamLimits

0x3350,	// (0x00087ff0) cell_cale_week_pane_g2_ParamLimits

0x3282,	// (0x00087f22) bg_cale_side_pane_cp01_ParamLimits

0x4284,	// (0x00088f24) cale_month_week_pane_t1_ParamLimits

0x429b,	// (0x00088f3b) cale_month_week_pane_t2_ParamLimits

0x42b2,	// (0x00088f52) cale_month_week_pane_t3_ParamLimits

0x42c9,	// (0x00088f69) cale_month_week_pane_t4_ParamLimits

0x42e0,	// (0x00088f80) cale_month_week_pane_t5_ParamLimits

0x42f7,	// (0x00088f97) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x00093fbc) cale_month_week_pane_t_ParamLimits

0xaf24,	// (0x0008fbc4) cell_cale_month_pane_g1_ParamLimits

0x0771,	// (0x00085411) main_cale_event_viewer_pane

0x0771,	// (0x00085411) listscroll_cale_event_viewer_pane

0x154a,	// (0x000861ea) list_cale_ev_pane

0x1552,	// (0x000861f2) scroll_pane_cp023

0x155e,	// (0x000861fe) field_cale_ev_pane_ParamLimits

0x155e,	// (0x000861fe) field_cale_ev_pane

0x157c,	// (0x0008621c) field_cale_ev_content_pane_ParamLimits

0x157c,	// (0x0008621c) field_cale_ev_content_pane

0x1588,	// (0x00086228) field_cale_ev_pane_g1_ParamLimits

0x1588,	// (0x00086228) field_cale_ev_pane_g1

0x1594,	// (0x00086234) field_cale_ev_pane_g2_ParamLimits

0x1594,	// (0x00086234) field_cale_ev_pane_g2

0x15ac,	// (0x0008624c) field_cale_ev_pane_g3_ParamLimits

0x15ac,	// (0x0008624c) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x000943fd) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x000943fd) field_cale_ev_pane_g

0x15c4,	// (0x00086264) field_cale_ev_pane_t1_ParamLimits

0x15c4,	// (0x00086264) field_cale_ev_pane_t1

0x15db,	// (0x0008627b) field_cale_ev_content_pane_t1_ParamLimits

0x15db,	// (0x0008627b) field_cale_ev_content_pane_t1

0xb7bf,	// (0x0009045f) bg_button_pane_cp01

0x2c64,	// (0x00087904) listscroll_cale_week_pane_ParamLimits

0x2f48,	// (0x00087be8) popup_toolbar_window_cp01

0x30df,	// (0x00087d7f) listscroll_cale_week_pane_t1_ParamLimits

0x2c64,	// (0x00087904) listscroll_cale_day_pane_ParamLimits

0x442a,	// (0x000890ca) popup_toolbar_window_cp02

0x30df,	// (0x00087d7f) listscroll_cale_day_pane_t1_ParamLimits

0x2c64,	// (0x00087904) main_cale_month_pane_ParamLimits

0x59a5,	// (0x0008a645) popup_toolbar_window_cp03_ParamLimits

0x59a5,	// (0x0008a645) popup_toolbar_window_cp03

0x504a,	// (0x00089cea) main_image_pane_g2_ParamLimits

0x504a,	// (0x00089cea) main_image_pane_g2

0x505b,	// (0x00089cfb) main_image_pane_g3_ParamLimits

0x505b,	// (0x00089cfb) main_image_pane_g3

0x0002,

0xf54e,	// (0x000941ee) main_image_pane_g_ParamLimits

0xf54e,	// (0x000941ee) main_image_pane_g

0xb90f,	// (0x000905af) main_image_pane_t1_ParamLimits

0x506c,	// (0x00089d0c) main_image_pane_t2_ParamLimits

0x506c,	// (0x00089d0c) main_image_pane_t2

0x507e,	// (0x00089d1e) main_image_pane_t3_ParamLimits

0x507e,	// (0x00089d1e) main_image_pane_t3

0x50a6,	// (0x00089d46) main_image_pane_t4_ParamLimits

0x50a6,	// (0x00089d46) main_image_pane_t4

0x0003,

0xf555,	// (0x000941f5) main_image_pane_t_ParamLimits

0xf555,	// (0x000941f5) main_image_pane_t

0x50c6,	// (0x00089d66) popup_image_details_window_cp01

0x50d0,	// (0x00089d70) popup_toobar_trans_pane_cp01_ParamLimits

0x50d0,	// (0x00089d70) popup_toobar_trans_pane_cp01

0x5850,	// (0x0008a4f0) popup_image_details_window_ParamLimits

0x5850,	// (0x0008a4f0) popup_image_details_window

0x10a9,	// (0x00085d49) popup_image_focus_window

0x5c6b,	// (0x0008a90b) camera2_autofocus_pane_ParamLimits

0x5c6b,	// (0x0008a90b) camera2_autofocus_pane

0x0771,	// (0x00085411) bg_popup_sub_pane_cp06

0x15f9,	// (0x00086299) popup_image_focus_window_g1

0x1601,	// (0x000862a1) popup_image_focus_window_g2

0x1609,	// (0x000862a9) popup_image_focus_window_g3

0x1611,	// (0x000862b1) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x00094404) popup_image_focus_window_g

0x1619,	// (0x000862b9) popup_image_focus_window_t1

0x1627,	// (0x000862c7) popup_image_focus_window_t2

0x1637,	// (0x000862d7) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x0009440d) popup_image_focus_window_t

0x1645,	// (0x000862e5) camera2_autofocus_pane_g1

0xaafa,	// (0x0008f79a) bg_tb_trans_pane_cp01

0x1653,	// (0x000862f3) popup_image_details_window_g1

0x1666,	// (0x00086306) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x0009441f) popup_image_details_window_g

0x168f,	// (0x0008632f) popup_image_details_window_t1

0x16a1,	// (0x00086341) popup_image_details_window_t2

0x16ba,	// (0x0008635a) popup_image_details_window_t3

0x16ce,	// (0x0008636e) popup_image_details_window_t4

0x16e9,	// (0x00086389) popup_image_details_window_t5

0x0004,

0xf786,	// (0x00094426) popup_image_details_window_t

0x2c50,	// (0x000878f0) bg_calc_paper_pane_ParamLimits

0xab10,	// (0x0008f7b0) grid_highlight_pane_cp013

0xab1a,	// (0x0008f7ba) list_calc_pane_ParamLimits

0xab2c,	// (0x0008f7cc) scroll_pane_cp024

0x2c64,	// (0x00087904) bg_calc_display_pane_ParamLimits

0x2c70,	// (0x00087910) calc_display_pane_t1_ParamLimits

0x2c82,	// (0x00087922) calc_display_pane_t2_ParamLimits

0xab34,	// (0x0008f7d4) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x00093e56) calc_display_pane_t_ParamLimits

0x2d8f,	// (0x00087a2f) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x00093e73) cell_calc_pane_g

0x2d98,	// (0x00087a38) cell_calc_pane_t1

0x2da7,	// (0x00087a47) grid_highlight_pane_cp02_ParamLimits

0x2dbd,	// (0x00087a5d) toolbar_button_pane_cp01_ParamLimits

0x2dbd,	// (0x00087a5d) toolbar_button_pane_cp01

0xb954,	// (0x000905f4) temp_image_control_pane_ParamLimits

0xb954,	// (0x000905f4) temp_image_control_pane

0xaafa,	// (0x0008f79a) main_mp3_pane

0xc837,	// (0x000914d7) temp_image_control_pane_g1_ParamLimits

0xc837,	// (0x000914d7) temp_image_control_pane_g1

0xc845,	// (0x000914e5) temp_image_control_pane_g2_ParamLimits

0xc845,	// (0x000914e5) temp_image_control_pane_g2

0xc857,	// (0x000914f7) temp_image_control_pane_g3_ParamLimits

0xc857,	// (0x000914f7) temp_image_control_pane_g3

0x64bb,	// (0x0008b15b) temp_image_control_pane_g4_ParamLimits

0x64bb,	// (0x0008b15b) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x00094431) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x00094431) temp_image_control_pane_g

0xc837,	// (0x000914d7) main_mp3_pane_g1

0x64ce,	// (0x0008b16e) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x0009443a) main_mp3_pane_g

0xc89a,	// (0x0009153a) main_mp3_pane_t1

0x34d6,	// (0x00088176) main_camera_pane_g8_ParamLimits

0x34d6,	// (0x00088176) main_camera_pane_g8

0x3687,	// (0x00088327) main_video_pane_g7_ParamLimits

0x3687,	// (0x00088327) main_video_pane_g7

0xecd7,	// (0x00093977) main_camera2_pane_t7_ParamLimits

0xecd7,	// (0x00093977) main_camera2_pane_t7

0xad10,	// (0x0008f9b0) scroll_pane_cp025_ParamLimits

0xad10,	// (0x0008f9b0) scroll_pane_cp025

0xad24,	// (0x0008f9c4) scroll_pane_cp026_ParamLimits

0xad24,	// (0x0008f9c4) scroll_pane_cp026

0xad33,	// (0x0008f9d3) wml_content_pane_ParamLimits

0x0771,	// (0x00085411) main_touch_calib_pane

0x6597,	// (0x0008b237) main_touch_calib_pane_g1

0x65a3,	// (0x0008b243) main_touch_calib_pane_g2

0x65af,	// (0x0008b24f) main_touch_calib_pane_g3

0x65bb,	// (0x0008b25b) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x00094458) main_touch_calib_pane_g

0x65c7,	// (0x0008b267) main_touch_calib_pane_t1

0x65e1,	// (0x0008b281) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x00094461) main_touch_calib_pane_t

0xb577,	// (0x00090217) mup_progress_pane_cp02

0xb596,	// (0x00090236) navi_pane_g1

0xb5f8,	// (0x00090298) navi_pane_mp_t3

0xaafa,	// (0x0008f79a) main_mp3_pane_ParamLimits

0x59e3,	// (0x0008a683) navi_pane_ParamLimits

0xc837,	// (0x000914d7) main_mp3_pane_g1_ParamLimits

0x64ce,	// (0x0008b16e) main_mp3_pane_g2_ParamLimits

0x64dc,	// (0x0008b17c) main_mp3_pane_g3_ParamLimits

0x64dc,	// (0x0008b17c) main_mp3_pane_g3

0x64ea,	// (0x0008b18a) main_mp3_pane_g4_ParamLimits

0x64ea,	// (0x0008b18a) main_mp3_pane_g4

0xc867,	// (0x00091507) main_mp3_pane_g5_ParamLimits

0xc867,	// (0x00091507) main_mp3_pane_g5

0xc875,	// (0x00091515) main_mp3_pane_g6_ParamLimits

0xc875,	// (0x00091515) main_mp3_pane_g6

0xc882,	// (0x00091522) main_mp3_pane_g7_ParamLimits

0xc882,	// (0x00091522) main_mp3_pane_g7

0xc88e,	// (0x0009152e) main_mp3_pane_g8_ParamLimits

0xc88e,	// (0x0009152e) main_mp3_pane_g8

0xf79a,	// (0x0009443a) main_mp3_pane_g_ParamLimits

0x64f6,	// (0x0008b196) main_mp3_pane_t2

0x6504,	// (0x0008b1a4) main_mp3_pane_t3

0xc8a8,	// (0x00091548) main_mp3_pane_t4

0xc8b6,	// (0x00091556) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x0009444b) main_mp3_pane_t

0xc8c4,	// (0x00091564) mup_progress_pane_cp01

0x2677,	// (0x00087317) aid_zoom_text_secondary2

0x154a,	// (0x000861ea) list_cale_ev2_pane

0x1552,	// (0x000861f2) scroll_pane_cp023_ParamLimits

0x6637,	// (0x0008b2d7) field_cale_ev2_pane_ParamLimits

0x6637,	// (0x0008b2d7) field_cale_ev2_pane

0x6657,	// (0x0008b2f7) field_cale_ev2_pane_g1_ParamLimits

0x6657,	// (0x0008b2f7) field_cale_ev2_pane_g1

0x6663,	// (0x0008b303) field_cale_ev2_pane_g2_ParamLimits

0x6663,	// (0x0008b303) field_cale_ev2_pane_g2

0x667b,	// (0x0008b31b) field_cale_ev2_pane_g3_ParamLimits

0x667b,	// (0x0008b31b) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x0009446c) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x0009446c) field_cale_ev2_pane_g

0xc8d8,	// (0x00091578) field_cale_ev2_pane_t1_ParamLimits

0xc8d8,	// (0x00091578) field_cale_ev2_pane_t1

0xc8ef,	// (0x0009158f) field_cale_ev2_pane_t2_ParamLimits

0xc8ef,	// (0x0009158f) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x00094475) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x00094475) field_cale_ev2_pane_t

0x4eff,	// (0x00089b9f) main_postcard_pane_g5_ParamLimits

0x4eff,	// (0x00089b9f) main_postcard_pane_g5

0x4f15,	// (0x00089bb5) main_postcard_pane_g6_ParamLimits

0x4f15,	// (0x00089bb5) main_postcard_pane_g6

0x3421,	// (0x000880c1) camera2_autofocus_pane_cp_ParamLimits

0x3421,	// (0x000880c1) camera2_autofocus_pane_cp

0xaafa,	// (0x0008f79a) main_mup3_pane

0x66b3,	// (0x0008b353) main_mup3_pane_g1_ParamLimits

0x66b3,	// (0x0008b353) main_mup3_pane_g1

0x66d5,	// (0x0008b375) main_mup3_pane_g2_ParamLimits

0x66d5,	// (0x0008b375) main_mup3_pane_g2

0x6753,	// (0x0008b3f3) main_mup3_pane_g3_ParamLimits

0x6753,	// (0x0008b3f3) main_mup3_pane_g3

0x6795,	// (0x0008b435) main_mup3_pane_g4_ParamLimits

0x6795,	// (0x0008b435) main_mup3_pane_g4

0x67d7,	// (0x0008b477) main_mup3_pane_g5_ParamLimits

0x67d7,	// (0x0008b477) main_mup3_pane_g5

0x6819,	// (0x0008b4b9) main_mup3_pane_g6_ParamLimits

0x6819,	// (0x0008b4b9) main_mup3_pane_g6

0xc904,	// (0x000915a4) main_mup3_pane_g7_ParamLimits

0xc904,	// (0x000915a4) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x00094485) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x00094485) main_mup3_pane_g

0x6893,	// (0x0008b533) main_mup3_pane_t1_ParamLimits

0x6893,	// (0x0008b533) main_mup3_pane_t1

0x6903,	// (0x0008b5a3) main_mup3_pane_t2_ParamLimits

0x6903,	// (0x0008b5a3) main_mup3_pane_t2

0x69d3,	// (0x0008b673) main_mup3_pane_t4_ParamLimits

0x69d3,	// (0x0008b673) main_mup3_pane_t4

0x6a29,	// (0x0008b6c9) main_mup3_pane_t5_ParamLimits

0x6a29,	// (0x0008b6c9) main_mup3_pane_t5

0x6add,	// (0x0008b77d) main_mup3_pane_t6_ParamLimits

0x6add,	// (0x0008b77d) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x00094496) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x00094496) main_mup3_pane_t

0x6b91,	// (0x0008b831) mup3_progress_pane_ParamLimits

0x6b91,	// (0x0008b831) mup3_progress_pane

0x6c13,	// (0x0008b8b3) popup_mup3_control_window_ParamLimits

0x6c13,	// (0x0008b8b3) popup_mup3_control_window

0xc912,	// (0x000915b2) popup_mup3_text_window

0x6c45,	// (0x0008b8e5) mup3_progress_pane_t1

0x6c5c,	// (0x0008b8fc) mup3_progress_pane_t2

0xc91a,	// (0x000915ba) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x000944a3) mup3_progress_pane_t

0xc931,	// (0x000915d1) mup_progress_pane_cp03

0x0771,	// (0x00085411) bg_tb_trans_pane_cp04

0x6c73,	// (0x0008b913) mup3_volume_pane

0x6c7b,	// (0x0008b91b) popup_mup3_control_window_g1

0x6c84,	// (0x0008b924) mup3_volume_pane_g1

0x6c8d,	// (0x0008b92d) mup3_volume_pane_g2

0x6c96,	// (0x0008b936) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x000944aa) mup3_volume_pane_g

0x0771,	// (0x00085411) bg_tb_trans_pane_cp03

0xc941,	// (0x000915e1) popup_mup3_text_window_g1

0xc949,	// (0x000915e9) popup_mup3_text_window_t1

0x2d5c,	// (0x000879fc) list_calc_item_pane_g1_ParamLimits

0x1223,	// (0x00085ec3) mup_volume_pane_cp_g1

0x65fb,	// (0x0008b29b) main_touch_calib_pane_t3

0x660f,	// (0x0008b2af) main_touch_calib_pane_t4

0x6623,	// (0x0008b2c3) main_touch_calib_pane_t5

0x077b,	// (0x0008541b) aid_cell_size_toolbar2

0x0783,	// (0x00085423) aid_popup3_width_pane

0x2667,	// (0x00087307) aid_zoom_text_msg_primary

0xabf4,	// (0x0008f894) vorec_t7

0x2cc9,	// (0x00087969) bg_calc_paper_pane_g1_ParamLimits

0x2cd5,	// (0x00087975) bg_calc_paper_pane_g2_ParamLimits

0x2ce1,	// (0x00087981) bg_calc_paper_pane_g3_ParamLimits

0x2ced,	// (0x0008798d) bg_calc_paper_pane_g4_ParamLimits

0x2cf9,	// (0x00087999) bg_calc_paper_pane_g5_ParamLimits

0x2d05,	// (0x000879a5) bg_calc_paper_pane_g6_ParamLimits

0x2d14,	// (0x000879b4) bg_calc_paper_pane_g7_ParamLimits

0x2d23,	// (0x000879c3) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x00093e5d) bg_calc_paper_pane_g_ParamLimits

0x2d36,	// (0x000879d6) calc_bg_paper_pane_g9_ParamLimits

0x357b,	// (0x0008821b) image_qvga_pane_ParamLimits

0x357b,	// (0x0008821b) image_qvga_pane

0x2905,	// (0x000875a5) bg_popup_sub_pane_cp04_ParamLimits

0xb88b,	// (0x0009052b) popup_mup_playback_window_g1_ParamLimits

0xb897,	// (0x00090537) popup_mup_playback_window_t1_ParamLimits

0xb8ac,	// (0x0009054c) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x000941e9) popup_mup_playback_window_t_ParamLimits

0x615e,	// (0x0008adfe) main_mup2_pane_g3_ParamLimits

0x615e,	// (0x0008adfe) main_mup2_pane_g3

0x3981,	// (0x00088621) popup_toolbar_window_cp04

0xbc8e,	// (0x0009092e) popup_call2_audio_second_window_g3_ParamLimits

0xbc8e,	// (0x0009092e) popup_call2_audio_second_window_g3

0xc098,	// (0x00090d38) popup_call2_audio_first_window_g4_ParamLimits

0xc098,	// (0x00090d38) popup_call2_audio_first_window_g4

0xc717,	// (0x000913b7) popup_call2_audio_in_window_g4_ParamLimits

0xc717,	// (0x000913b7) popup_call2_audio_in_window_g4

0x502c,	// (0x00089ccc) aid_area_sk_bg_cut_ParamLimits

0x502c,	// (0x00089ccc) aid_area_sk_bg_cut

0xb8c1,	// (0x00090561) aid_area_sk_bg_cut_2_ParamLimits

0xb8c1,	// (0x00090561) aid_area_sk_bg_cut_2

0x6461,	// (0x0008b101) aid_placing_details_win

0x6469,	// (0x0008b109) aid_placing_details_win_2

0x1645,	// (0x000862e5) camera2_autofocus_pane_g1_ParamLimits

0x2806,	// (0x000874a6) popup_fixed_preview_cale_window_ParamLimits

0x2806,	// (0x000874a6) popup_fixed_preview_cale_window

0xb650,	// (0x000902f0) navi_slider_pane_g3

0xb659,	// (0x000902f9) navi_slider_pane_g4

0xb662,	// (0x00090302) navi_slider_pane_g5

0xb650,	// (0x000902f0) navi_slider_pane_g6

0xb66b,	// (0x0009030b) navi_slider_pane_g7

0xb78c,	// (0x0009042c) mup_scale_pane_g3

0xb795,	// (0x00090435) mup_scale_pane_g4

0xb79e,	// (0x0009043e) mup_scale_pane_g5

0x4cdf,	// (0x0008997f) mup_scale_pane_g6

0x4ce8,	// (0x00089988) mup_scale_pane_g7

0xb650,	// (0x000902f0) cams2_slider_pane_g3

0x12a5,	// (0x00085f45) cams2_slider_pane_g4

0xed3d,	// (0x000939dd) cams2_slider_pane_g5

0xb650,	// (0x000902f0) cams2_slider_pane_g6

0xed45,	// (0x000939e5) cams2_slider_pane_g7

0x14d0,	// (0x00086170) camera2_autofocus_pane_cp_g1

0xc957,	// (0x000915f7) bg_popup_preview_window_pane_cp02_ParamLimits

0xc957,	// (0x000915f7) bg_popup_preview_window_pane_cp02

0xc963,	// (0x00091603) list_fp_cale_pane_ParamLimits

0xc963,	// (0x00091603) list_fp_cale_pane

0xc96f,	// (0x0009160f) popup_fixed_preview_cale_window_t1_ParamLimits

0xc96f,	// (0x0009160f) popup_fixed_preview_cale_window_t1

0x6c9f,	// (0x0008b93f) popup_fixed_preview_cale_window_t2_ParamLimits

0x6c9f,	// (0x0008b93f) popup_fixed_preview_cale_window_t2

0x6cb4,	// (0x0008b954) popup_fixed_preview_cale_window_t3_ParamLimits

0x6cb4,	// (0x0008b954) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x000944b1) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x000944b1) popup_fixed_preview_cale_window_t

0x6cc9,	// (0x0008b969) list_single_fp_cale_pane_ParamLimits

0x6cc9,	// (0x0008b969) list_single_fp_cale_pane

0xc98d,	// (0x0009162d) list_single_fp_cale_pane_g1_ParamLimits

0xc98d,	// (0x0009162d) list_single_fp_cale_pane_g1

0xc999,	// (0x00091639) list_single_fp_cale_pane_g2_ParamLimits

0xc999,	// (0x00091639) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x000944b8) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x000944b8) list_single_fp_cale_pane_g

0xc9b2,	// (0x00091652) list_single_fp_cale_pane_t1_ParamLimits

0xc9b2,	// (0x00091652) list_single_fp_cale_pane_t1

0xc9c4,	// (0x00091664) list_single_fp_cale_pane_t2_ParamLimits

0xc9c4,	// (0x00091664) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x000944bf) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x000944bf) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0771,	// (0x00085411) main_dialer_pane

0x6cde,	// (0x0008b97e) aid_cell_size_keypad

0x6ce8,	// (0x0008b988) dialer_ne_pane

0x6cf0,	// (0x0008b990) grid_dialer_command_1_pane

0x6cf8,	// (0x0008b998) grid_dialer_command_2_pane

0x6d00,	// (0x0008b9a0) grid_dialer_keypad_pane

0x6d12,	// (0x0008b9b2) bg_popup_call_pane_cp06_ParamLimits

0x6d12,	// (0x0008b9b2) bg_popup_call_pane_cp06

0x6d1e,	// (0x0008b9be) dialer_ne_clear_pane_ParamLimits

0x6d1e,	// (0x0008b9be) dialer_ne_clear_pane

0xc9f7,	// (0x00091697) dialer_ne_pane_g1

0xc9ff,	// (0x0009169f) dialer_ne_pane_t1_ParamLimits

0xc9ff,	// (0x0009169f) dialer_ne_pane_t1

0x6d2a,	// (0x0008b9ca) dialer_ne_pane_t2_ParamLimits

0x6d2a,	// (0x0008b9ca) dialer_ne_pane_t2

0x6d54,	// (0x0008b9f4) dialer_ne_pane_t3_ParamLimits

0x6d54,	// (0x0008b9f4) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x000944c4) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x000944c4) dialer_ne_pane_t

0x6d84,	// (0x0008ba24) dialer_ne_pane_t3_copy1_ParamLimits

0x6d84,	// (0x0008ba24) dialer_ne_pane_t3_copy1

0x6db3,	// (0x0008ba53) cell_dialer_keypad_pane_ParamLimits

0x6db3,	// (0x0008ba53) cell_dialer_keypad_pane

0x6dca,	// (0x0008ba6a) cell_dialer_command_1_pane_ParamLimits

0x6dca,	// (0x0008ba6a) cell_dialer_command_1_pane

0x6de0,	// (0x0008ba80) cell_dialer_command_2_pane_ParamLimits

0x6de0,	// (0x0008ba80) cell_dialer_command_2_pane

0xca11,	// (0x000916b1) bg_button_pane_cp02_ParamLimits

0xca11,	// (0x000916b1) bg_button_pane_cp02

0x6def,	// (0x0008ba8f) cell_dialer_keypad_pane_g1_ParamLimits

0x6def,	// (0x0008ba8f) cell_dialer_keypad_pane_g1

0xca11,	// (0x000916b1) bg_button_pane_cp03_ParamLimits

0xca11,	// (0x000916b1) bg_button_pane_cp03

0x6e03,	// (0x0008baa3) cell_dialer_command_1_pane_g1_ParamLimits

0x6e03,	// (0x0008baa3) cell_dialer_command_1_pane_g1

0xca1d,	// (0x000916bd) bg_button_pane_cp04

0x6e17,	// (0x0008bab7) cell_dialer_command_2_pane_g1

0xb636,	// (0x000902d6) bg_button_pane_cp06

0xca25,	// (0x000916c5) dialer_ne_clear_pane_g1

0x4823,	// (0x000894c3) navi_pane_g2

0x4851,	// (0x000894f1) navi_pane_g3

0x0002,

0xf44c,	// (0x000940ec) navi_pane_g

0x487a,	// (0x0008951a) navi_pane_mv_g2

0x48a1,	// (0x00089541) navi_pane_mv_g5

0x48a9,	// (0x00089549) navi_pane_mv_t1

0x2c64,	// (0x00087904) main_clock2_pane

0x6e4b,	// (0x0008baeb) main_clock2_list_pane_ParamLimits

0x6e4b,	// (0x0008baeb) main_clock2_list_pane

0x6e81,	// (0x0008bb21) main_clock2_pane_t1_ParamLimits

0x6e81,	// (0x0008bb21) main_clock2_pane_t1

0x6ebd,	// (0x0008bb5d) main_clock2_pane_t2_ParamLimits

0x6ebd,	// (0x0008bb5d) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x000944cb) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x000944cb) main_clock2_pane_t

0x6f47,	// (0x0008bbe7) popup_clock_analogue_window_cp03_ParamLimits

0x6f47,	// (0x0008bbe7) popup_clock_analogue_window_cp03

0x6f6c,	// (0x0008bc0c) popup_clock_digital_window_cp02_ParamLimits

0x6f6c,	// (0x0008bc0c) popup_clock_digital_window_cp02

0x6fdd,	// (0x0008bc7d) main_clock2_list_single_pane_ParamLimits

0x6fdd,	// (0x0008bc7d) main_clock2_list_single_pane

0xb636,	// (0x000902d6) list_highlight_pane_cp05

0xca2d,	// (0x000916cd) main_clock2_list_single_pane_t1

0x3981,	// (0x00088621) popup_toolbar_window_cp04_ParamLimits

0x648b,	// (0x0008b12b) camera2_autofocus_pane_g2_ParamLimits

0x648b,	// (0x0008b12b) camera2_autofocus_pane_g2

0x6497,	// (0x0008b137) camera2_autofocus_pane_g3_ParamLimits

0x6497,	// (0x0008b137) camera2_autofocus_pane_g3

0x64a3,	// (0x0008b143) camera2_autofocus_pane_g4_ParamLimits

0x64a3,	// (0x0008b143) camera2_autofocus_pane_g4

0x64af,	// (0x0008b14f) camera2_autofocus_pane_g5_ParamLimits

0x64af,	// (0x0008b14f) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x00094414) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x00094414) camera2_autofocus_pane_g

0x6693,	// (0x0008b333) camera2_autofocus_pane_cp_g2

0x669b,	// (0x0008b33b) camera2_autofocus_pane_cp_g3

0x66a3,	// (0x0008b343) camera2_autofocus_pane_cp_g4

0x66ab,	// (0x0008b34b) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x0009447a) camera2_autofocus_pane_cp_g

0x6d0a,	// (0x0008b9aa) popup_dialer_spcha_window

0x0771,	// (0x00085411) bg_popup_sub_pane_cp07

0xca3b,	// (0x000916db) list_spcha_pane

0xca43,	// (0x000916e3) list_single_spcha_pane_ParamLimits

0xca43,	// (0x000916e3) list_single_spcha_pane

0x0771,	// (0x00085411) list_highlight_pane_cp06

0xca54,	// (0x000916f4) list_single_spcha_pane_t1

0xc4c1,	// (0x00091161) popup_call2_audio_out_window_g4_ParamLimits

0xc4c1,	// (0x00091161) popup_call2_audio_out_window_g4

0x0771,	// (0x00085411) main_imed2_pane

0x10b1,	// (0x00085d51) popup_imed_adjust2_window

0x5868,	// (0x0008a508) popup_imed_trans_window_ParamLimits

0x5868,	// (0x0008a508) popup_imed_trans_window

0x130e,	// (0x00085fae) popup_blid_sat_info2_window_t1

0x131c,	// (0x00085fbc) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x000943a9) popup_blid_sat_info2_window_t

0x7087,	// (0x0008bd27) aid_size_cell_colour_35

0x70a7,	// (0x0008bd47) aid_size_cell_colour_112

0x70c7,	// (0x0008bd67) aid_size_cell_effect

0x1089,	// (0x00085d29) bg_tb_trans_pane_cp02

0xb09d,	// (0x0008fd3d) heading_imed_pane

0x70e7,	// (0x0008bd87) listscroll_imed_pane

0xca62,	// (0x00091702) heading_imed_pane_g1

0xca6a,	// (0x0009170a) heading_imed_pane_t1

0xca78,	// (0x00091718) grid_imed_colour_35_pane_ParamLimits

0xca78,	// (0x00091718) grid_imed_colour_35_pane

0x70f3,	// (0x0008bd93) grid_imed_effect_pane

0xca8f,	// (0x0009172f) list_imed_aspect_pane

0x7109,	// (0x0008bda9) scroll_pane_cp027_ParamLimits

0x7109,	// (0x0008bda9) scroll_pane_cp027

0x711a,	// (0x0008bdba) cell_imed_effect_pane_ParamLimits

0x711a,	// (0x0008bdba) cell_imed_effect_pane

0xca97,	// (0x00091737) cell_imed_colour_pane_ParamLimits

0xca97,	// (0x00091737) cell_imed_colour_pane

0xcad9,	// (0x00091779) cell_imed_colour_pane_g1_ParamLimits

0xcad9,	// (0x00091779) cell_imed_colour_pane_g1

0xcaea,	// (0x0009178a) hgihlgiht_grid_pane_cp016_ParamLimits

0xcaea,	// (0x0009178a) hgihlgiht_grid_pane_cp016

0x7141,	// (0x0008bde1) cell_imed_effect_pane_g1

0x7149,	// (0x0008bde9) grid_highlight_pane_cp017

0xcafb,	// (0x0009179b) list_imed_single_pane_ParamLimits

0xcafb,	// (0x0009179b) list_imed_single_pane

0x0771,	// (0x00085411) list_highlight_pane_cp07

0xcb10,	// (0x000917b0) list_imed_aspect_pane_comp1_t1

0x1089,	// (0x00085d29) bg_tb_trans_pane_cp05

0xcb32,	// (0x000917d2) popup_imed_adjust2_window_g1

0xcb59,	// (0x000917f9) popup_imed_adjust2_window_t1

0xcb71,	// (0x00091811) slider_imed_adjust_pane

0xcb85,	// (0x00091825) slider_imed_adjust_pane_g1

0xcb95,	// (0x00091835) slider_imed_adjust_pane_g2

0xcba5,	// (0x00091845) slider_imed_adjust_pane_g3

0xcbb6,	// (0x00091856) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x000944e8) slider_imed_adjust_pane_g

0x7152,	// (0x0008bdf2) aid_size_cell_clipart2

0x715e,	// (0x0008bdfe) grid_imed_clipart_pane

0xcbc7,	// (0x00091867) scroll_pane_cp031

0x7168,	// (0x0008be08) cell_imed_clipart_pane_ParamLimits

0x7168,	// (0x0008be08) cell_imed_clipart_pane

0x718a,	// (0x0008be2a) cell_imed_clipart_pane_g1

0x0771,	// (0x00085411) grid_highlight_pane_cp014

0x6e60,	// (0x0008bb00) main_clock2_pane_g1_ParamLimits

0x6e60,	// (0x0008bb00) main_clock2_pane_g1

0x6f88,	// (0x0008bc28) aid_call2_pane_cp10

0x6f9a,	// (0x0008bc3a) aid_call_pane_cp10

0xb56b,	// (0x0009020b) popup_clock_analogue_window_cp10_g1

0xb56b,	// (0x0009020b) popup_clock_analogue_window_cp10_g2

0x6fac,	// (0x0008bc4c) popup_clock_analogue_window_cp10_g3

0x6fac,	// (0x0008bc4c) popup_clock_analogue_window_cp10_g4

0xb56b,	// (0x0009020b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x000944d6) popup_clock_analogue_window_cp10_g

0x6fbe,	// (0x0008bc5e) popup_clock_analogue_window_cp10_t1

0x6fef,	// (0x0008bc8f) clock_digital_number_pane_cp10_ParamLimits

0x6fef,	// (0x0008bc8f) clock_digital_number_pane_cp10

0x7007,	// (0x0008bca7) clock_digital_number_pane_cp11_ParamLimits

0x7007,	// (0x0008bca7) clock_digital_number_pane_cp11

0x701f,	// (0x0008bcbf) clock_digital_number_pane_cp12_ParamLimits

0x701f,	// (0x0008bcbf) clock_digital_number_pane_cp12

0x7037,	// (0x0008bcd7) clock_digital_number_pane_cp13_ParamLimits

0x7037,	// (0x0008bcd7) clock_digital_number_pane_cp13

0x704f,	// (0x0008bcef) clock_digital_separator_pane_cp10_ParamLimits

0x704f,	// (0x0008bcef) clock_digital_separator_pane_cp10

0x7067,	// (0x0008bd07) popup_clock_digital_window_cp02_t1_ParamLimits

0x7067,	// (0x0008bd07) popup_clock_digital_window_cp02_t1

0x0e37,	// (0x00085ad7) clock_digital_number_pane_cp10_g1

0x0e37,	// (0x00085ad7) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x000944f1) clock_digital_number_pane_cp10_g

0x0e37,	// (0x00085ad7) clock_digital_separator_pane_cp10_g1

0x0e37,	// (0x00085ad7) clock_digital_separator_pane_g2_cp10

0xb606,	// (0x000902a6) navi_pane_vded_g4

0xb60f,	// (0x000902af) navi_pane_vded_g5

0xb618,	// (0x000902b8) navi_pane_vded_t1

0x0771,	// (0x00085411) main_vded_pane

0x7193,	// (0x0008be33) main_vded_pane_g1

0x719d,	// (0x0008be3d) main_vded_pane_g2

0x71a7,	// (0x0008be47) main_vded_pane_g3

0x0002,

0xf856,	// (0x000944f6) main_vded_pane_g

0x71b1,	// (0x0008be51) main_vded_pane_t1

0x71bf,	// (0x0008be5f) main_vded_pane_t2

0x0001,

0xf85d,	// (0x000944fd) main_vded_pane_t

0x71cd,	// (0x0008be6d) vded_slider_pane

0x71d5,	// (0x0008be75) vded_video_pane

0xcbcf,	// (0x0009186f) vded_video_pane_g1

0x71dd,	// (0x0008be7d) vded_video_pane_g2

0x14d0,	// (0x00086170) vded_video_pane_g3

0x0002,

0xf862,	// (0x00094502) vded_video_pane_g

0xcbd9,	// (0x00091879) vded_slider_pane_g1

0x1223,	// (0x00085ec3) vded_slider_pane_g2

0xcbe2,	// (0x00091882) vded_slider_pane_g3

0xcbeb,	// (0x0009188b) vded_slider_pane_g4

0xcbf4,	// (0x00091894) vded_slider_pane_g5

0x0004,

0xf869,	// (0x00094509) vded_slider_pane_g

0x6bfb,	// (0x0008b89b) mup3_rocker_pane_ParamLimits

0x6bfb,	// (0x0008b89b) mup3_rocker_pane

0x71e6,	// (0x0008be86) mup3_control_keys_pane_g1

0x71ee,	// (0x0008be8e) mup3_control_keys_pane_g2

0x71f6,	// (0x0008be96) mup3_control_keys_pane_g3

0x71fe,	// (0x0008be9e) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x00094514) mup3_control_keys_pane_g

0x283d,	// (0x000874dd) popup_toolbar2_fixed_window_cp01_ParamLimits

0x283d,	// (0x000874dd) popup_toolbar2_fixed_window_cp01

0x6c2f,	// (0x0008b8cf) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6c2f,	// (0x0008b8cf) popup_toolbar2_fixed_window_cp02

0xbe00,	// (0x00090aa0) popup_call2_audio_second_window_t4_ParamLimits

0xbe00,	// (0x00090aa0) popup_call2_audio_second_window_t4

0xc32e,	// (0x00090fce) popup_call2_audio_first_window_t6_ParamLimits

0xc32e,	// (0x00090fce) popup_call2_audio_first_window_t6

0xc5c4,	// (0x00091264) popup_call2_audio_out_window_t6_ParamLimits

0xc5c4,	// (0x00091264) popup_call2_audio_out_window_t6

0x0771,	// (0x00085411) main_vitu_pane

0x720e,	// (0x0008beae) aid_size_cell_itu_ParamLimits

0x720e,	// (0x0008beae) aid_size_cell_itu

0xaafa,	// (0x0008f79a) bg_popup_window_pane_cp08_ParamLimits

0xaafa,	// (0x0008f79a) bg_popup_window_pane_cp08

0x7224,	// (0x0008bec4) field_vitu_entry_pane_ParamLimits

0x7224,	// (0x0008bec4) field_vitu_entry_pane

0x723b,	// (0x0008bedb) grid_vitu_function_pane_ParamLimits

0x723b,	// (0x0008bedb) grid_vitu_function_pane

0x7256,	// (0x0008bef6) grid_vitu_itu_pane_ParamLimits

0x7256,	// (0x0008bef6) grid_vitu_itu_pane

0x7274,	// (0x0008bf14) cell_vitu_itu_pane_ParamLimits

0x7274,	// (0x0008bf14) cell_vitu_itu_pane

0x7296,	// (0x0008bf36) cell_vitu_function_pane_ParamLimits

0x7296,	// (0x0008bf36) cell_vitu_function_pane

0xaafa,	// (0x0008f79a) bg_popup_sub_pane_cp08_ParamLimits

0xaafa,	// (0x0008f79a) bg_popup_sub_pane_cp08

0x72af,	// (0x0008bf4f) field_vitu_entry_pane_t1_ParamLimits

0x72af,	// (0x0008bf4f) field_vitu_entry_pane_t1

0xcc15,	// (0x000918b5) field_vitu_entry_pane_t2_ParamLimits

0xcc15,	// (0x000918b5) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x00094522) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x00094522) field_vitu_entry_pane_t

0xcc32,	// (0x000918d2) bg_button_pane_cp05_ParamLimits

0xcc32,	// (0x000918d2) bg_button_pane_cp05

0x72cd,	// (0x0008bf6d) cell_vitu_itu_pane_g1

0x72e5,	// (0x0008bf85) cell_vitu_itu_pane_t1_ParamLimits

0x72e5,	// (0x0008bf85) cell_vitu_itu_pane_t1

0x72f7,	// (0x0008bf97) cell_vitu_itu_pane_t2_ParamLimits

0x72f7,	// (0x0008bf97) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x00094527) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x00094527) cell_vitu_itu_pane_t

0xcc40,	// (0x000918e0) bg_button_pane_cp07

0x732c,	// (0x0008bfcc) cell_vitu_function_pane_g1

0xab08,	// (0x0008f7a8) main_calc_pane_g1

0x265b,	// (0x000872fb) aid_visual_content_pane

0x0771,	// (0x00085411) main_vradio_pane

0x7335,	// (0x0008bfd5) main_vradio_pane_g1_ParamLimits

0x7335,	// (0x0008bfd5) main_vradio_pane_g1

0xcc4a,	// (0x000918ea) main_vradio_pane_g2_ParamLimits

0xcc4a,	// (0x000918ea) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x0009452e) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x0009452e) main_vradio_pane_g

0x734e,	// (0x0008bfee) main_vradio_pane_t1_ParamLimits

0x734e,	// (0x0008bfee) main_vradio_pane_t1

0x7363,	// (0x0008c003) main_vradio_pane_t2_ParamLimits

0x7363,	// (0x0008c003) main_vradio_pane_t2

0xcc57,	// (0x000918f7) main_vradio_pane_t3_ParamLimits

0xcc57,	// (0x000918f7) main_vradio_pane_t3

0x0002,

0xf893,	// (0x00094533) main_vradio_pane_t_ParamLimits

0xf893,	// (0x00094533) main_vradio_pane_t

0x7378,	// (0x0008c018) vradio_rocker_control_pane_ParamLimits

0x7378,	// (0x0008c018) vradio_rocker_control_pane

0x738a,	// (0x0008c02a) vradio_station_info_pane_ParamLimits

0x738a,	// (0x0008c02a) vradio_station_info_pane

0xcc6b,	// (0x0009190b) vradio_frequency_info_pane_ParamLimits

0xcc6b,	// (0x0009190b) vradio_frequency_info_pane

0x14d0,	// (0x00086170) vradio_station_info_pane_g1

0xcc7a,	// (0x0009191a) vradio_station_info_pane_t1_ParamLimits

0xcc7a,	// (0x0009191a) vradio_station_info_pane_t1

0xcc9c,	// (0x0009193c) vradio_station_info_pane_t2_ParamLimits

0xcc9c,	// (0x0009193c) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x0009453a) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x0009453a) vradio_station_info_pane_t

0xccae,	// (0x0009194e) vradio_tuning_pane

0xccb6,	// (0x00091956) vradio_rocker_control_pane_g1

0xccbe,	// (0x0009195e) vradio_rocker_control_pane_g2

0xccc6,	// (0x00091966) vradio_rocker_control_pane_g3

0xccce,	// (0x0009196e) vradio_rocker_control_pane_g4

0xccd6,	// (0x00091976) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x0009453f) vradio_rocker_control_pane_g

0x739c,	// (0x0008c03c) vradio_frequency_info_pane_g1

0xccde,	// (0x0009197e) vradio_frequency_info_pane_t1_ParamLimits

0xccde,	// (0x0009197e) vradio_frequency_info_pane_t1

0x73a6,	// (0x0008c046) vradio_tuning_pane_g1

0x73b1,	// (0x0008c051) vradio_tuning_pane_t1

0x078f,	// (0x0008542f) area_side_right_pane_ParamLimits

0x078f,	// (0x0008542f) area_side_right_pane

0x1050,	// (0x00085cf0) status_small_pane_g1

0x1058,	// (0x00085cf8) status_small_pane_g2

0x1061,	// (0x00085d01) status_small_pane_g3

0x106a,	// (0x00085d0a) status_small_pane_g4

0x0003,

0xf65f,	// (0x000942ff) status_small_pane_g

0x1073,	// (0x00085d13) status_small_pane_t1

0x0771,	// (0x00085411) main_video3_pane

0xccf2,	// (0x00091992) cams_zoom_vslider_pane

0xccfa,	// (0x0009199a) image3_wide_pane_ParamLimits

0xccfa,	// (0x0009199a) image3_wide_pane

0xcd14,	// (0x000919b4) image3_wide_small_pane

0xcd20,	// (0x000919c0) main_video3_pane_g1_ParamLimits

0xcd20,	// (0x000919c0) main_video3_pane_g1

0xcd3c,	// (0x000919dc) main_video3_pane_g2_ParamLimits

0xcd3c,	// (0x000919dc) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x0009454a) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x0009454a) main_video3_pane_g

0xcd58,	// (0x000919f8) main_video3_pane_t1_ParamLimits

0xcd58,	// (0x000919f8) main_video3_pane_t1

0xcd83,	// (0x00091a23) main_video3_pane_t2_ParamLimits

0xcd83,	// (0x00091a23) main_video3_pane_t2

0xcdae,	// (0x00091a4e) main_video3_pane_t3_ParamLimits

0xcdae,	// (0x00091a4e) main_video3_pane_t3

0x0002,

0xf8af,	// (0x0009454f) main_video3_pane_t_ParamLimits

0xf8af,	// (0x0009454f) main_video3_pane_t

0xcddb,	// (0x00091a7b) cams_zoom_vslider_pane_g1

0xcde4,	// (0x00091a84) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x00094556) cams_zoom_vslider_pane_g

0xcdec,	// (0x00091a8c) small_slider_vertical_pane

0x14d0,	// (0x00086170) small_slider_vertical_pane_g1

0x14d0,	// (0x00086170) small_slider_vertical_pane_g2

0xcdf4,	// (0x00091a94) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x0009455b) small_slider_vertical_pane_g

0x0771,	// (0x00085411) main_hwr_training_pane

0xcdfd,	// (0x00091a9d) hwr_training_instruct_pane_ParamLimits

0xcdfd,	// (0x00091a9d) hwr_training_instruct_pane

0x73c0,	// (0x0008c060) hwr_training_navi_pane_ParamLimits

0x73c0,	// (0x0008c060) hwr_training_navi_pane

0x73df,	// (0x0008c07f) hwr_training_write_pane_ParamLimits

0x73df,	// (0x0008c07f) hwr_training_write_pane

0x0771,	// (0x00085411) bg_frame_shadow_pane

0xce34,	// (0x00091ad4) hwr_training_write_pane_g1

0xce3c,	// (0x00091adc) hwr_training_write_pane_g2

0xce44,	// (0x00091ae4) hwr_training_write_pane_g3

0xce4c,	// (0x00091aec) hwr_training_write_pane_g4

0xce54,	// (0x00091af4) hwr_training_write_pane_g5

0xce5c,	// (0x00091afc) hwr_training_write_pane_g6

0xce64,	// (0x00091b04) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x00094562) hwr_training_write_pane_g

0xed4e,	// (0x000939ee) hwr_training_navi_pane_g1_ParamLimits

0xed4e,	// (0x000939ee) hwr_training_navi_pane_g1

0xed60,	// (0x00093a00) hwr_training_navi_pane_g2_ParamLimits

0xed60,	// (0x00093a00) hwr_training_navi_pane_g2

0xed72,	// (0x00093a12) hwr_training_navi_pane_g3_ParamLimits

0xed72,	// (0x00093a12) hwr_training_navi_pane_g3

0xed82,	// (0x00093a22) hwr_training_navi_pane_g4_ParamLimits

0xed82,	// (0x00093a22) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x00094571) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x00094571) hwr_training_navi_pane_g

0xed8f,	// (0x00093a2f) hwr_training_navi_pane_t1

0x7427,	// (0x0008c0c7) list_single_hwr_training_instruct_pane_ParamLimits

0x7427,	// (0x0008c0c7) list_single_hwr_training_instruct_pane

0xce6c,	// (0x00091b0c) list_single_hwr_training_instruct_pane_t1

0x1410,	// (0x000860b0) bg_frame_shadow_pane_g1

0xce7b,	// (0x00091b1b) bg_frame_shadow_pane_g2

0xce83,	// (0x00091b23) bg_frame_shadow_pane_g3

0xce8b,	// (0x00091b2b) bg_frame_shadow_pane_g4

0xce93,	// (0x00091b33) bg_frame_shadow_pane_g5

0xce9b,	// (0x00091b3b) bg_frame_shadow_pane_g6

0xcea3,	// (0x00091b43) bg_frame_shadow_pane_g7

0x2eac,	// (0x00087b4c) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x0009457c) bg_frame_shadow_pane_g

0x0771,	// (0x00085411) main_video_tele_dialer_pane

0x743c,	// (0x0008c0dc) aid_size_cell_video_keypad_ParamLimits

0x743c,	// (0x0008c0dc) aid_size_cell_video_keypad

0x7456,	// (0x0008c0f6) grid_video_dialer_keypad_pane_ParamLimits

0x7456,	// (0x0008c0f6) grid_video_dialer_keypad_pane

0x74a2,	// (0x0008c142) video_down_pane_cp_ParamLimits

0x74a2,	// (0x0008c142) video_down_pane_cp

0x74d6,	// (0x0008c176) cell_video_dialer_keypad_pane_ParamLimits

0x74d6,	// (0x0008c176) cell_video_dialer_keypad_pane

0xceab,	// (0x00091b4b) bg_button_pane_cp08_ParamLimits

0xceab,	// (0x00091b4b) bg_button_pane_cp08

0x74f8,	// (0x0008c198) cell_video_dialer_keypad_pane_g1_ParamLimits

0x74f8,	// (0x0008c198) cell_video_dialer_keypad_pane_g1

0x6be5,	// (0x0008b885) mup3_rocker2_pane_ParamLimits

0x6be5,	// (0x0008b885) mup3_rocker2_pane

0x14d0,	// (0x00086170) mup3_rocker2_pane_g1

0x5749,	// (0x0008a3e9) main_dialer2_pane

0x0771,	// (0x00085411) main_mp4_pane

0xeda5,	// (0x00093a45) main_mp4_pane_g1_ParamLimits

0xeda5,	// (0x00093a45) main_mp4_pane_g1

0xeda5,	// (0x00093a45) main_mp4_pane_g2_ParamLimits

0xeda5,	// (0x00093a45) main_mp4_pane_g2

0x7532,	// (0x0008c1d2) main_mp4_pane_g3_ParamLimits

0x7532,	// (0x0008c1d2) main_mp4_pane_g3

0xedb3,	// (0x00093a53) main_mp4_pane_g4_ParamLimits

0xedb3,	// (0x00093a53) main_mp4_pane_g4

0xedcd,	// (0x00093a6d) main_mp4_pane_g5_ParamLimits

0xedcd,	// (0x00093a6d) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x0009459c) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x0009459c) main_mp4_pane_g

0xee01,	// (0x00093aa1) main_mp4_pane_t1_ParamLimits

0xee01,	// (0x00093aa1) main_mp4_pane_t1

0xee5d,	// (0x00093afd) main_mp4_pane_t2_ParamLimits

0xee5d,	// (0x00093afd) main_mp4_pane_t2

0xceb7,	// (0x00091b57) main_mp4_pane_t3_ParamLimits

0xceb7,	// (0x00091b57) main_mp4_pane_t3

0xeeaf,	// (0x00093b4f) main_mp4_pane_t4_ParamLimits

0xeeaf,	// (0x00093b4f) main_mp4_pane_t4

0x0003,

0xf909,	// (0x000945a9) main_mp4_pane_t_ParamLimits

0xf909,	// (0x000945a9) main_mp4_pane_t

0xeef3,	// (0x00093b93) mp4_progress_pane_ParamLimits

0xeef3,	// (0x00093b93) mp4_progress_pane

0xef3d,	// (0x00093bdd) mp4_rocker_pane_ParamLimits

0xef3d,	// (0x00093bdd) mp4_rocker_pane

0xcedf,	// (0x00091b7f) mp4_progress_pane_t1

0xcef8,	// (0x00091b98) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x000945b2) mp4_progress_pane_t

0xcf11,	// (0x00091bb1) mup_progress_pane_cp04

0xcf1d,	// (0x00091bbd) mp4_rocker_pane_g1

0x756e,	// (0x0008c20e) aid_cell_size_keypad2_ParamLimits

0x756e,	// (0x0008c20e) aid_cell_size_keypad2

0x7584,	// (0x0008c224) dialer2_ne_pane_ParamLimits

0x7584,	// (0x0008c224) dialer2_ne_pane

0x759e,	// (0x0008c23e) grid_dialer2_keypad_pane_ParamLimits

0x759e,	// (0x0008c23e) grid_dialer2_keypad_pane

0x12b5,	// (0x00085f55) bg_popup_call_pane_cp07_ParamLimits

0x12b5,	// (0x00085f55) bg_popup_call_pane_cp07

0x75ba,	// (0x0008c25a) dialer2_ne_pane_t1_ParamLimits

0x75ba,	// (0x0008c25a) dialer2_ne_pane_t1

0x75f5,	// (0x0008c295) cell_dialer2_keypad_pane_ParamLimits

0x75f5,	// (0x0008c295) cell_dialer2_keypad_pane

0xcf39,	// (0x00091bd9) bg_button_pane_pane_cp04_ParamLimits

0xcf39,	// (0x00091bd9) bg_button_pane_pane_cp04

0x7617,	// (0x0008c2b7) cell_dialer2_keypad_pane_g1_ParamLimits

0x7617,	// (0x0008c2b7) cell_dialer2_keypad_pane_g1

0x38a3,	// (0x00088543) aid_placing_vt_set_content_ParamLimits

0x38a3,	// (0x00088543) aid_placing_vt_set_content

0x38c7,	// (0x00088567) aid_placing_vt_set_title_ParamLimits

0x38c7,	// (0x00088567) aid_placing_vt_set_title

0x0771,	// (0x00085411) main_image3_pane

0x76dd,	// (0x0008c37d) area_side_right_pane_cp01_ParamLimits

0x76dd,	// (0x0008c37d) area_side_right_pane_cp01

0xeda5,	// (0x00093a45) main_image3_pane_g1_ParamLimits

0xeda5,	// (0x00093a45) main_image3_pane_g1

0x76f4,	// (0x0008c394) main_image3_pane_g2_ParamLimits

0x76f4,	// (0x0008c394) main_image3_pane_g2

0x771c,	// (0x0008c3bc) main_image3_pane_g3_ParamLimits

0x771c,	// (0x0008c3bc) main_image3_pane_g3

0x7746,	// (0x0008c3e6) main_image3_pane_g4_ParamLimits

0x7746,	// (0x0008c3e6) main_image3_pane_g4

0x0003,

0xf921,	// (0x000945c1) main_image3_pane_g_ParamLimits

0xf921,	// (0x000945c1) main_image3_pane_g

0x7770,	// (0x0008c410) main_image3_pane_t1_ParamLimits

0x7770,	// (0x0008c410) main_image3_pane_t1

0x77c8,	// (0x0008c468) main_image3_pane_t2_ParamLimits

0x77c8,	// (0x0008c468) main_image3_pane_t2

0x781a,	// (0x0008c4ba) main_image3_pane_t3_ParamLimits

0x781a,	// (0x0008c4ba) main_image3_pane_t3

0x0003,

0xf92a,	// (0x000945ca) main_image3_pane_t_ParamLimits

0xf92a,	// (0x000945ca) main_image3_pane_t

0xaafa,	// (0x0008f79a) grid_sctrl_middle_pane_cp01_ParamLimits

0xaafa,	// (0x0008f79a) grid_sctrl_middle_pane_cp01

0x78a2,	// (0x0008c542) cell_sctrl_middle_pane_cp01_ParamLimits

0x78a2,	// (0x0008c542) cell_sctrl_middle_pane_cp01

0x78bf,	// (0x0008c55f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x78bf,	// (0x0008c55f) cell_sctrl_middle_pane_cp01_g1

0x0771,	// (0x00085411) main_call4_pane

0x78d5,	// (0x0008c575) aid_size_button_call4_ParamLimits

0x78d5,	// (0x0008c575) aid_size_button_call4

0x7906,	// (0x0008c5a6) call4_windows_pane_ParamLimits

0x7906,	// (0x0008c5a6) call4_windows_pane

0x7926,	// (0x0008c5c6) grid_call4_button_pane_ParamLimits

0x7926,	// (0x0008c5c6) grid_call4_button_pane

0xcf45,	// (0x00091be5) call4_windows_conf_pane

0xcf5c,	// (0x00091bfc) popup_call4_audio_first_window_ParamLimits

0xcf5c,	// (0x00091bfc) popup_call4_audio_first_window

0xcfa8,	// (0x00091c48) popup_call4_audio_second_window_ParamLimits

0xcfa8,	// (0x00091c48) popup_call4_audio_second_window

0xcfbc,	// (0x00091c5c) popup_call4_audio_wait_window_ParamLimits

0xcfbc,	// (0x00091c5c) popup_call4_audio_wait_window

0x7953,	// (0x0008c5f3) cell_call4_button_pane_ParamLimits

0x7953,	// (0x0008c5f3) cell_call4_button_pane

0x797c,	// (0x0008c61c) bg_button_pane_cp09_ParamLimits

0x797c,	// (0x0008c61c) bg_button_pane_cp09

0x7988,	// (0x0008c628) cell_call4_button_pane_g1_ParamLimits

0x7988,	// (0x0008c628) cell_call4_button_pane_g1

0x79ae,	// (0x0008c64e) cell_call4_button_pane_t1_ParamLimits

0x79ae,	// (0x0008c64e) cell_call4_button_pane_t1

0xd004,	// (0x00091ca4) popup_call4_audio_conf_window_ParamLimits

0xd004,	// (0x00091ca4) popup_call4_audio_conf_window

0x6c45,	// (0x0008b8e5) mup3_progress_pane_t1_ParamLimits

0x6c5c,	// (0x0008b8fc) mup3_progress_pane_t2_ParamLimits

0xc91a,	// (0x000915ba) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x000944a3) mup3_progress_pane_t_ParamLimits

0xc931,	// (0x000915d1) mup_progress_pane_cp03_ParamLimits

0x7206,	// (0x0008bea6) mup3_control_keys_pane_g4_copy1

0xef21,	// (0x00093bc1) mp4_rocker2_pane_ParamLimits

0xef21,	// (0x00093bc1) mp4_rocker2_pane

0xd018,	// (0x00091cb8) mp4_rocker2_pane_g1

0xd020,	// (0x00091cc0) mp4_rocker2_pane_g2

0xef8f,	// (0x00093c2f) mp4_rocker2_pane_g3

0xef97,	// (0x00093c37) mp4_rocker2_pane_g4

0xef9f,	// (0x00093c3f) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x000945d3) mp4_rocker2_pane_g

0x0771,	// (0x00085411) main_camera4_pane

0x0771,	// (0x00085411) main_video4_pane

0x7470,	// (0x0008c110) main_video_tele_dialer_pane_t1_ParamLimits

0x7470,	// (0x0008c110) main_video_tele_dialer_pane_t1

0x7489,	// (0x0008c129) main_video_tele_dialer_pane_t2_ParamLimits

0x7489,	// (0x0008c129) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x0009458d) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x0009458d) main_video_tele_dialer_pane_t

0x79ec,	// (0x0008c68c) cam4_autofocus_pane_ParamLimits

0x79ec,	// (0x0008c68c) cam4_autofocus_pane

0x7a02,	// (0x0008c6a2) cam4_image_uncrop_pane_ParamLimits

0x7a02,	// (0x0008c6a2) cam4_image_uncrop_pane

0x7a1c,	// (0x0008c6bc) cam4_indicators_pane_ParamLimits

0x7a1c,	// (0x0008c6bc) cam4_indicators_pane

0x7a47,	// (0x0008c6e7) main_camera4_pane_g1_ParamLimits

0x7a47,	// (0x0008c6e7) main_camera4_pane_g1

0x7a53,	// (0x0008c6f3) main_camera4_pane_g2_ParamLimits

0x7a53,	// (0x0008c6f3) main_camera4_pane_g2

0x7a5f,	// (0x0008c6ff) main_camera4_pane_g3_ParamLimits

0x7a5f,	// (0x0008c6ff) main_camera4_pane_g3

0x7a6b,	// (0x0008c70b) main_camera4_pane_g4_ParamLimits

0x7a6b,	// (0x0008c70b) main_camera4_pane_g4

0x7a77,	// (0x0008c717) main_camera4_pane_g5_ParamLimits

0x7a77,	// (0x0008c717) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x000945de) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x000945de) main_camera4_pane_g

0x7a94,	// (0x0008c734) main_camera4_pane_t1_ParamLimits

0x7a94,	// (0x0008c734) main_camera4_pane_t1

0x7acc,	// (0x0008c76c) bg_tb_trans_pane_cp06

0x7ada,	// (0x0008c77a) cam4_indicators_pane_g1

0x7ae7,	// (0x0008c787) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x000945f0) cam4_indicators_pane_g

0x7aff,	// (0x0008c79f) cam4_indicators_pane_t1

0x7b29,	// (0x0008c7c9) main_video4_pane_g1_ParamLimits

0x7b29,	// (0x0008c7c9) main_video4_pane_g1

0x7b3b,	// (0x0008c7db) main_video4_pane_g2_ParamLimits

0x7b3b,	// (0x0008c7db) main_video4_pane_g2

0x7b4f,	// (0x0008c7ef) main_video4_pane_g3_ParamLimits

0x7b4f,	// (0x0008c7ef) main_video4_pane_g3

0x7b5f,	// (0x0008c7ff) main_video4_pane_g4_ParamLimits

0x7b5f,	// (0x0008c7ff) main_video4_pane_g4

0x0004,

0xf957,	// (0x000945f7) main_video4_pane_g_ParamLimits

0xf957,	// (0x000945f7) main_video4_pane_g

0x7b7f,	// (0x0008c81f) vid4_indicators_pane_ParamLimits

0x7b7f,	// (0x0008c81f) vid4_indicators_pane

0x7baf,	// (0x0008c84f) video4_image_uncrop_cif_pane_ParamLimits

0x7baf,	// (0x0008c84f) video4_image_uncrop_cif_pane

0x7bc9,	// (0x0008c869) video4_image_uncrop_nhd_pane_ParamLimits

0x7bc9,	// (0x0008c869) video4_image_uncrop_nhd_pane

0x7a02,	// (0x0008c6a2) video4_image_uncrop_vga_pane_ParamLimits

0x7a02,	// (0x0008c6a2) video4_image_uncrop_vga_pane

0xefc7,	// (0x00093c67) bg_tb_trans_pane_cp07

0x7ada,	// (0x0008c77a) vid4_indicators_pane_g1

0x7bdd,	// (0x0008c87d) vid4_indicators_pane_g2

0x7bea,	// (0x0008c88a) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x00094602) vid4_indicators_pane_g

0x7c0f,	// (0x0008c8af) vid4_indicators_pane_t1

0x7c21,	// (0x0008c8c1) cam4_autofocus_pane_g1

0x7c29,	// (0x0008c8c9) cam4_autofocus_pane_g2

0x7c31,	// (0x0008c8d1) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x0009460d) cam4_autofocus_pane_g

0x7c39,	// (0x0008c8d9) cam4_autofocus_pane_g3_copy1

0x74ba,	// (0x0008c15a) video_down_pane_cp_t1

0x74c8,	// (0x0008c168) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x00094592) video_down_pane_cp_t

0xaafa,	// (0x0008f79a) popup_vitu2_window_ParamLimits

0xaafa,	// (0x0008f79a) popup_vitu2_window

0x7c41,	// (0x0008c8e1) aid_size_cell2_itu2_ParamLimits

0x7c41,	// (0x0008c8e1) aid_size_cell2_itu2

0x7c67,	// (0x0008c907) aid_size_cell_itu2_ParamLimits

0x7c67,	// (0x0008c907) aid_size_cell_itu2

0x7cc3,	// (0x0008c963) bg_popup_window_pane_cp09_ParamLimits

0x7cc3,	// (0x0008c963) bg_popup_window_pane_cp09

0x7cd1,	// (0x0008c971) field_vitu2_entry_pane_ParamLimits

0x7cd1,	// (0x0008c971) field_vitu2_entry_pane

0x7cf7,	// (0x0008c997) grid_vitu2_function_pane_ParamLimits

0x7cf7,	// (0x0008c997) grid_vitu2_function_pane

0x7d48,	// (0x0008c9e8) grid_vitu2_itu_pane_ParamLimits

0x7d48,	// (0x0008c9e8) grid_vitu2_itu_pane

0x7ddb,	// (0x0008ca7b) cell_vitu2_itu_pane_ParamLimits

0x7ddb,	// (0x0008ca7b) cell_vitu2_itu_pane

0x7dff,	// (0x0008ca9f) cell_vitu2_function_pane_ParamLimits

0x7dff,	// (0x0008ca9f) cell_vitu2_function_pane

0xd028,	// (0x00091cc8) bg_popup_call_pane_cp08_ParamLimits

0xd028,	// (0x00091cc8) bg_popup_call_pane_cp08

0xd041,	// (0x00091ce1) field_vitu2_entry_pane_g1

0xd04d,	// (0x00091ced) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x00094614) field_vitu2_entry_pane_g

0xd067,	// (0x00091d07) field_vitu2_entry_pane_t1_ParamLimits

0xd067,	// (0x00091d07) field_vitu2_entry_pane_t1

0xd084,	// (0x00091d24) field_vitu2_entry_pane_t2_ParamLimits

0xd084,	// (0x00091d24) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x0009461b) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x0009461b) field_vitu2_entry_pane_t

0x7e3e,	// (0x0008cade) bg_button_pane_cp010_ParamLimits

0x7e3e,	// (0x0008cade) bg_button_pane_cp010

0x7e4c,	// (0x0008caec) cell_vitu2_itu_pane_g1

0x7e6a,	// (0x0008cb0a) cell_vitu2_itu_pane_t1_ParamLimits

0x7e6a,	// (0x0008cb0a) cell_vitu2_itu_pane_t1

0x2543,	// (0x000871e3) cell_vitu2_itu_pane_t2_ParamLimits

0x2543,	// (0x000871e3) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x00094625) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x00094625) cell_vitu2_itu_pane_t

0xefdf,	// (0x00093c7f) bg_button_pane_cp011

0x7ed0,	// (0x0008cb70) cell_vitu2_function_pane_g1

0x0771,	// (0x00085411) main_myfav_hc_pane

0x786a,	// (0x0008c50a) popup_image3_note_pane_ParamLimits

0x786a,	// (0x0008c50a) popup_image3_note_pane

0x7886,	// (0x0008c526) popup_image3_tool_bar_pane_ParamLimits

0x7886,	// (0x0008c526) popup_image3_tool_bar_pane

0x25c7,	// (0x00087267) cell_vitu2_itu_pane_t3_ParamLimits

0x25c7,	// (0x00087267) cell_vitu2_itu_pane_t3

0x0771,	// (0x00085411) bg_popup_trans_pane

0xd0a9,	// (0x00091d49) grid_image3_tool_bar_pane

0xd0b3,	// (0x00091d53) bg_popup_trans_pane_g1

0xae19,	// (0x0008fab9) bg_popup_trans_pane_g2

0xd0bb,	// (0x00091d5b) bg_popup_trans_pane_g3

0xd0c3,	// (0x00091d63) bg_popup_trans_pane_g4

0xd0cb,	// (0x00091d6b) bg_popup_trans_pane_g5

0xd0d3,	// (0x00091d73) bg_popup_trans_pane_g6

0xd0db,	// (0x00091d7b) bg_popup_trans_pane_g7

0xd0e3,	// (0x00091d83) bg_popup_trans_pane_g8

0xadf9,	// (0x0008fa99) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x0009462c) bg_popup_trans_pane_g

0xd0eb,	// (0x00091d8b) cell_image3_tool_bar_pane_ParamLimits

0xd0eb,	// (0x00091d8b) cell_image3_tool_bar_pane

0x14d0,	// (0x00086170) cell_image3_tool_bar_pane_g1

0x0771,	// (0x00085411) bg_popup_trans_pane_cp1

0xd0ff,	// (0x00091d9f) popup_image3_note_pane_t1

0xd10d,	// (0x00091dad) popup_image3_note_pane_t2

0xd11b,	// (0x00091dbb) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x0009463f) popup_image3_note_pane_t

0xd129,	// (0x00091dc9) popup_image3_note_pane_t3_copy1

0x7ee4,	// (0x0008cb84) bg_myfav_hc_instruction_pane_ParamLimits

0x7ee4,	// (0x0008cb84) bg_myfav_hc_instruction_pane

0x7ef8,	// (0x0008cb98) cell_myfav_contact_pane_ParamLimits

0x7ef8,	// (0x0008cb98) cell_myfav_contact_pane

0x7f16,	// (0x0008cbb6) cell_myfav_contact_pane_cp1_ParamLimits

0x7f16,	// (0x0008cbb6) cell_myfav_contact_pane_cp1

0x7f2e,	// (0x0008cbce) cell_myfav_contact_pane_cp2_ParamLimits

0x7f2e,	// (0x0008cbce) cell_myfav_contact_pane_cp2

0x7f46,	// (0x0008cbe6) cell_myfav_contact_pane_cp3_ParamLimits

0x7f46,	// (0x0008cbe6) cell_myfav_contact_pane_cp3

0x7f5d,	// (0x0008cbfd) cell_myfav_contact_pane_cp4_ParamLimits

0x7f5d,	// (0x0008cbfd) cell_myfav_contact_pane_cp4

0x7f75,	// (0x0008cc15) cell_myfav_contact_pane_cp5_ParamLimits

0x7f75,	// (0x0008cc15) cell_myfav_contact_pane_cp5

0x7f89,	// (0x0008cc29) cell_myfav_contact_pane_cp6_ParamLimits

0x7f89,	// (0x0008cc29) cell_myfav_contact_pane_cp6

0x7f9f,	// (0x0008cc3f) cell_myfav_contact_pane_cp7_ParamLimits

0x7f9f,	// (0x0008cc3f) cell_myfav_contact_pane_cp7

0xd137,	// (0x00091dd7) listscroll_gen_pane_cp05

0x7fb9,	// (0x0008cc59) main_myfav_hc_pane_g1_ParamLimits

0x7fb9,	// (0x0008cc59) main_myfav_hc_pane_g1

0x7fd3,	// (0x0008cc73) main_myfav_hc_pane_g2_ParamLimits

0x7fd3,	// (0x0008cc73) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x00094646) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x00094646) main_myfav_hc_pane_g

0x8005,	// (0x0008cca5) main_myfav_hc_pane_t1_ParamLimits

0x8005,	// (0x0008cca5) main_myfav_hc_pane_t1

0xd140,	// (0x00091de0) main_myfav_hc_pane_t2_ParamLimits

0xd140,	// (0x00091de0) main_myfav_hc_pane_t2

0xd152,	// (0x00091df2) main_myfav_hc_pane_t3_ParamLimits

0xd152,	// (0x00091df2) main_myfav_hc_pane_t3

0x801c,	// (0x0008ccbc) main_myfav_hc_pane_t4_ParamLimits

0x801c,	// (0x0008ccbc) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x0009464d) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x0009464d) main_myfav_hc_pane_t

0x14d0,	// (0x00086170) bg_myfav_hc_instruction_pane_g1

0xd164,	// (0x00091e04) cell_myfav_contact_pane_g1_ParamLimits

0xd164,	// (0x00091e04) cell_myfav_contact_pane_g1

0xd164,	// (0x00091e04) cell_myfav_contact_pane_g2_ParamLimits

0xd164,	// (0x00091e04) cell_myfav_contact_pane_g2

0xd170,	// (0x00091e10) cell_myfav_contact_pane_g3_ParamLimits

0xd170,	// (0x00091e10) cell_myfav_contact_pane_g3

0xc904,	// (0x000915a4) cell_myfav_contact_pane_g4_ParamLimits

0xc904,	// (0x000915a4) cell_myfav_contact_pane_g4

0xd17d,	// (0x00091e1d) cell_myfav_contact_pane_g5_ParamLimits

0xd17d,	// (0x00091e1d) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x00094658) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x00094658) cell_myfav_contact_pane_g

0x7fed,	// (0x0008cc8d) main_myfav_hc_pane_g3_ParamLimits

0x7fed,	// (0x0008cc8d) main_myfav_hc_pane_g3

0x279e,	// (0x0008743e) popup_adpt_find_window

0x8044,	// (0x0008cce4) afind_page_pane_ParamLimits

0x8044,	// (0x0008cce4) afind_page_pane

0x8059,	// (0x0008ccf9) aid_size_cell_afind_ParamLimits

0x8059,	// (0x0008ccf9) aid_size_cell_afind

0x8077,	// (0x0008cd17) bg_popup_sub_pane_cp09_ParamLimits

0x8077,	// (0x0008cd17) bg_popup_sub_pane_cp09

0x8084,	// (0x0008cd24) find_pane_cp01_ParamLimits

0x8084,	// (0x0008cd24) find_pane_cp01

0xd189,	// (0x00091e29) grid_afind_control_pane_ParamLimits

0xd189,	// (0x00091e29) grid_afind_control_pane

0x8091,	// (0x0008cd31) grid_afind_pane_ParamLimits

0x8091,	// (0x0008cd31) grid_afind_pane

0x80b3,	// (0x0008cd53) cell_afind_pane_ParamLimits

0x80b3,	// (0x0008cd53) cell_afind_pane

0x14d0,	// (0x00086170) afind_page_pane_g1

0x8110,	// (0x0008cdb0) afind_page_pane_g2

0x8119,	// (0x0008cdb9) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x00094663) afind_page_pane_g

0x8122,	// (0x0008cdc2) afind_page_pane_t1

0xd19d,	// (0x00091e3d) cell_afind_grid_control_pane_ParamLimits

0xd19d,	// (0x00091e3d) cell_afind_grid_control_pane

0xcf39,	// (0x00091bd9) bg_button_pane_cp69_ParamLimits

0xcf39,	// (0x00091bd9) bg_button_pane_cp69

0x8142,	// (0x0008cde2) cell_afind_pane_g1_ParamLimits

0x8142,	// (0x0008cde2) cell_afind_pane_g1

0x814f,	// (0x0008cdef) cell_afind_pane_t1_ParamLimits

0x814f,	// (0x0008cdef) cell_afind_pane_t1

0x3767,	// (0x00088407) bg_button_pane_cp72

0xd1ac,	// (0x00091e4c) cell_afind_grid_control_pane_g1

0x5209,	// (0x00089ea9) aid_image_placing_area_ParamLimits

0x5209,	// (0x00089ea9) aid_image_placing_area

0xcbfd,	// (0x0009189d) field_vitu_entry_pane_g1_ParamLimits

0xcbfd,	// (0x0009189d) field_vitu_entry_pane_g1

0xcc09,	// (0x000918a9) field_vitu_entry_pane_g2_ParamLimits

0xcc09,	// (0x000918a9) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x0009451d) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x0009451d) field_vitu_entry_pane_g

0x72cd,	// (0x0008bf6d) cell_vitu_itu_pane_g1_ParamLimits

0x730f,	// (0x0008bfaf) cell_vitu_itu_pane_t3_ParamLimits

0x730f,	// (0x0008bfaf) cell_vitu_itu_pane_t3

0xcedf,	// (0x00091b7f) mp4_progress_pane_t1_ParamLimits

0xcef8,	// (0x00091b98) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x000945b2) mp4_progress_pane_t_ParamLimits

0xcf11,	// (0x00091bb1) mup_progress_pane_cp04_ParamLimits

0x8030,	// (0x0008ccd0) main_myfav_hc_pane_t5_ParamLimits

0x8030,	// (0x0008ccd0) main_myfav_hc_pane_t5

0x266f,	// (0x0008730f) aid_zoom_text_primary

0x279e,	// (0x0008743e) popup_adpt_find_window_ParamLimits

0xaafa,	// (0x0008f79a) main_cam_set_pane

0x7a33,	// (0x0008c6d3) cam4_zoom_pane_ParamLimits

0x7a33,	// (0x0008c6d3) cam4_zoom_pane

0x8161,	// (0x0008ce01) main_cam_set_pane_g1_ParamLimits

0x8161,	// (0x0008ce01) main_cam_set_pane_g1

0x816f,	// (0x0008ce0f) main_cam_set_pane_g2_ParamLimits

0x816f,	// (0x0008ce0f) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x0009466a) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x0009466a) main_cam_set_pane_g

0x8192,	// (0x0008ce32) main_cam_set_pane_t1_ParamLimits

0x8192,	// (0x0008ce32) main_cam_set_pane_t1

0x81ad,	// (0x0008ce4d) main_cset_listscroll_pane_ParamLimits

0x81ad,	// (0x0008ce4d) main_cset_listscroll_pane

0x81cf,	// (0x0008ce6f) main_cset_slider_pane_ParamLimits

0x81cf,	// (0x0008ce6f) main_cset_slider_pane

0xd1bd,	// (0x00091e5d) main_cset_list_pane_ParamLimits

0xd1bd,	// (0x00091e5d) main_cset_list_pane

0xd1cd,	// (0x00091e6d) scroll_pane_cp028

0x81f5,	// (0x0008ce95) aid_area_touch_slider

0x8211,	// (0x0008ceb1) cset_slider_pane

0x823b,	// (0x0008cedb) main_cset_slider_pane_g1

0x8250,	// (0x0008cef0) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x0009466f) main_cset_slider_pane_g

0xd206,	// (0x00091ea6) main_cset_slider_pane_t1

0x830c,	// (0x0008cfac) main_cset_slider_pane_t2

0x8326,	// (0x0008cfc6) main_cset_slider_pane_t3

0x8340,	// (0x0008cfe0) main_cset_slider_pane_t4

0x835a,	// (0x0008cffa) main_cset_slider_pane_t5

0x8374,	// (0x0008d014) main_cset_slider_pane_t6

0x8389,	// (0x0008d029) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x00094694) main_cset_slider_pane_t

0x848d,	// (0x0008d12d) cset_list_set_pane_ParamLimits

0x848d,	// (0x0008d12d) cset_list_set_pane

0x849f,	// (0x0008d13f) aid_position_infowindow_above

0x84a7,	// (0x0008d147) aid_position_infowindow_below

0x84af,	// (0x0008d14f) cset_list_set_pane_g1_ParamLimits

0x84af,	// (0x0008d14f) cset_list_set_pane_g1

0xd2a6,	// (0x00091f46) cset_list_set_pane_g3_ParamLimits

0xd2a6,	// (0x00091f46) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x000946b3) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x000946b3) cset_list_set_pane_g

0xd2b5,	// (0x00091f55) cset_list_set_pane_t1_ParamLimits

0xd2b5,	// (0x00091f55) cset_list_set_pane_t1

0xaafa,	// (0x0008f79a) list_highlight_pane_cp021_ParamLimits

0xaafa,	// (0x0008f79a) list_highlight_pane_cp021

0xb78c,	// (0x0009042c) cset_slider_pane_g1

0xb79e,	// (0x0009043e) cset_slider_pane_g2

0xb795,	// (0x00090435) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x000946b8) cset_slider_pane_g

0xefed,	// (0x00093c8d) aid_area_touch_cam4_zoom

0xeff5,	// (0x00093c95) cam4_zoom_cont_pane

0xeffd,	// (0x00093c9d) cam4_zoom_pane_g1

0xf005,	// (0x00093ca5) cam4_zoom_pane_g2

0x84bb,	// (0x0008d15b) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x000946bf) cam4_zoom_pane_g

0xf00d,	// (0x00093cad) cam4_zoom_cont_pane_g1

0xf016,	// (0x00093cb6) cam4_zoom_cont_pane_g2

0xf01f,	// (0x00093cbf) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x000946c6) cam4_zoom_cont_pane_g

0x78f3,	// (0x0008c593) call4_image_pane_ParamLimits

0x78f3,	// (0x0008c593) call4_image_pane

0xcf45,	// (0x00091be5) call4_windows_conf_pane_ParamLimits

0xcf86,	// (0x00091c26) popup_call4_audio_in_window_ParamLimits

0xcf86,	// (0x00091c26) popup_call4_audio_in_window

0x0771,	// (0x00085411) bg_popup_call2_act_pane_cp02

0xcffc,	// (0x00091c9c) call4_list_conf_pane

0x14d0,	// (0x00086170) call4_image_pane_g1

0x14d0,	// (0x00086170) call4_image_pane_g2

0x0001,

0xf743,	// (0x000943e3) call4_image_pane_g

0xd2ca,	// (0x00091f6a) list_single_graphic_popup_conf4_pane_ParamLimits

0xd2ca,	// (0x00091f6a) list_single_graphic_popup_conf4_pane

0x0771,	// (0x00085411) list_highlight_pane_cp022

0xd2dd,	// (0x00091f7d) list_single_graphic_popup_conf4_pane_g1

0xb44b,	// (0x000900eb) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x000946cd) list_single_graphic_popup_conf4_pane_g

0xd2e5,	// (0x00091f85) list_single_graphic_popup_conf4_pane_t1

0x39a1,	// (0x00088641) popup_vtel_slider_window_ParamLimits

0x39a1,	// (0x00088641) popup_vtel_slider_window

0xcf27,	// (0x00091bc7) dialer2_ne_pane_t2_ParamLimits

0xcf27,	// (0x00091bc7) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x000945b7) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x000945b7) dialer2_ne_pane_t

0x12b5,	// (0x00085f55) bg_popup_sub_pane_cp010_ParamLimits

0x12b5,	// (0x00085f55) bg_popup_sub_pane_cp010

0x84c3,	// (0x0008d163) popup_vtel_slider_window_g1_ParamLimits

0x84c3,	// (0x0008d163) popup_vtel_slider_window_g1

0x84d6,	// (0x0008d176) popup_vtel_slider_window_g2_ParamLimits

0x84d6,	// (0x0008d176) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x000946d2) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x000946d2) popup_vtel_slider_window_g

0x852c,	// (0x0008d1cc) vtel_slider_pane_ParamLimits

0x852c,	// (0x0008d1cc) vtel_slider_pane

0x854e,	// (0x0008d1ee) vtel_slider_pane_g1_ParamLimits

0x854e,	// (0x0008d1ee) vtel_slider_pane_g1

0x8562,	// (0x0008d202) vtel_slider_pane_g2_ParamLimits

0x8562,	// (0x0008d202) vtel_slider_pane_g2

0x857a,	// (0x0008d21a) vtel_slider_pane_g3_ParamLimits

0x857a,	// (0x0008d21a) vtel_slider_pane_g3

0x854e,	// (0x0008d1ee) vtel_slider_pane_g4_ParamLimits

0x854e,	// (0x0008d1ee) vtel_slider_pane_g4

0x8590,	// (0x0008d230) vtel_slider_pane_g5_ParamLimits

0x8590,	// (0x0008d230) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x000946db) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x000946db) vtel_slider_pane_g

0x0771,	// (0x00085411) main_gallery2_pane

0x7c93,	// (0x0008c933) aid_size_row_itut2_dropdow_list_ParamLimits

0x7c93,	// (0x0008c933) aid_size_row_itut2_dropdow_list

0x7d1f,	// (0x0008c9bf) grid_vitu2_function_top_pane_ParamLimits

0x7d1f,	// (0x0008c9bf) grid_vitu2_function_top_pane

0x7d84,	// (0x0008ca24) popup_vitu2_dropdown_list_window_ParamLimits

0x7d84,	// (0x0008ca24) popup_vitu2_dropdown_list_window

0x7dad,	// (0x0008ca4d) popup_vitu2_match_list_window

0x85a6,	// (0x0008d246) cell_vitu2_function_top_pane_ParamLimits

0x85a6,	// (0x0008d246) cell_vitu2_function_top_pane

0x85c4,	// (0x0008d264) cell_vitu2_function_top_pane_cp01_ParamLimits

0x85c4,	// (0x0008d264) cell_vitu2_function_top_pane_cp01

0x85e2,	// (0x0008d282) cell_vitu2_function_top_wide_pane_ParamLimits

0x85e2,	// (0x0008d282) cell_vitu2_function_top_wide_pane

0xefdf,	// (0x00093c7f) bg_button_pane_cp012

0x8600,	// (0x0008d2a0) cell_vitu2_function_top_pane_g1

0xf028,	// (0x00093cc8) bg_button_pane_cp013_ParamLimits

0xf028,	// (0x00093cc8) bg_button_pane_cp013

0x8614,	// (0x0008d2b4) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8614,	// (0x0008d2b4) cell_vitu2_function_top_wide_pane_g1

0xefdf,	// (0x00093c7f) bg_popup_sub_pane_cp20

0x862c,	// (0x0008d2cc) list_vitu2_match_list_pane

0xd0b3,	// (0x00091d53) bg_popup_sub_pane_cp20_g1

0xd0bb,	// (0x00091d5b) bg_popup_sub_pane_cp20_g2

0xae19,	// (0x0008fab9) bg_popup_sub_pane_cp20_g3

0xd0c3,	// (0x00091d63) bg_popup_sub_pane_cp20_g4

0xadf9,	// (0x0008fa99) bg_popup_sub_pane_cp20_g5

0xd301,	// (0x00091fa1) bg_popup_sub_pane_cp20_g6

0xd0d3,	// (0x00091d73) bg_popup_sub_pane_cp20_g7

0xd0db,	// (0x00091d7b) bg_popup_sub_pane_cp20_g8

0xd0e3,	// (0x00091d83) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x000946e6) bg_popup_sub_pane_cp20_g

0xf044,	// (0x00093ce4) list_vitu2_match_list_item_pane_ParamLimits

0xf044,	// (0x00093ce4) list_vitu2_match_list_item_pane

0xf056,	// (0x00093cf6) list_vitu2_match_list_item_pane_t1

0xab10,	// (0x0008f7b0) bg_popup_sub_pane_cp21

0xf064,	// (0x00093d04) grid_vitu2_dropdown_list_pane

0x867b,	// (0x0008d31b) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x867b,	// (0x0008d31b) cell_vitu2_dropdown_list_char_pane

0x869c,	// (0x0008d33c) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x869c,	// (0x0008d33c) cell_vitu2_dropdown_list_ctrl_pane

0xd321,	// (0x00091fc1) cell_vitu2_dropdown_list_char_pane_g1

0xd32a,	// (0x00091fca) cell_vitu2_dropdown_list_char_pane_g2

0xd333,	// (0x00091fd3) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x00094703) cell_vitu2_dropdown_list_char_pane_g

0x86c8,	// (0x0008d368) cell_vitu2_dropdown_list_char_pane_t1

0x86d6,	// (0x0008d376) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x86d6,	// (0x0008d376) cell_vitu2_dropdown_list_ctrl_pane_g1

0x86e3,	// (0x0008d383) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x86e3,	// (0x0008d383) cell_vitu2_dropdown_list_ctrl_pane_g2

0x86f0,	// (0x0008d390) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x86f0,	// (0x0008d390) cell_vitu2_dropdown_list_ctrl_pane_g3

0x86fd,	// (0x0008d39d) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x86fd,	// (0x0008d39d) cell_vitu2_dropdown_list_ctrl_pane_g4

0xf06c,	// (0x00093d0c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xf06c,	// (0x00093d0c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x0009470a) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x0009470a) cell_vitu2_dropdown_list_ctrl_pane_g

0x8719,	// (0x0008d3b9) aid_size_cell_gallery2_ParamLimits

0x8719,	// (0x0008d3b9) aid_size_cell_gallery2

0x872f,	// (0x0008d3cf) grid_gallery2_pane_ParamLimits

0x872f,	// (0x0008d3cf) grid_gallery2_pane

0x8743,	// (0x0008d3e3) scroll_pane_cp029_ParamLimits

0x8743,	// (0x0008d3e3) scroll_pane_cp029

0x874f,	// (0x0008d3ef) cell_gallery2_pane_ParamLimits

0x874f,	// (0x0008d3ef) cell_gallery2_pane

0xd33c,	// (0x00091fdc) cell_gallery2_pane_g2

0x8785,	// (0x0008d425) cell_gallery2_pane_g3

0xd346,	// (0x00091fe6) cell_gallery2_pane_g4

0xd34e,	// (0x00091fee) cell_gallery2_pane_g5

0xb636,	// (0x000902d6) grid_highlight_pane_cp10

0x7dad,	// (0x0008ca4d) popup_vitu2_match_list_window_ParamLimits

0x7dc4,	// (0x0008ca64) popup_vitu2_query_window_ParamLimits

0x7dc4,	// (0x0008ca64) popup_vitu2_query_window

0xab10,	// (0x0008f7b0) bg_vitu2_candi_button_pane

0xd321,	// (0x00091fc1) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd32a,	// (0x00091fca) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd333,	// (0x00091fd3) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x878d,	// (0x0008d42d) bg_button_pane_cp015

0x8797,	// (0x0008d437) bg_button_pane_cp016

0x87a1,	// (0x0008d441) bg_button_pane_cp017

0xaafa,	// (0x0008f79a) bg_popup_sub_pane_cp22

0xd356,	// (0x00091ff6) popup_vitu2_query_window_g1

0x87c9,	// (0x0008d469) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x00094715) popup_vitu2_query_window_g

0x87d7,	// (0x0008d477) popup_vitu2_query_window_t1_ParamLimits

0x87d7,	// (0x0008d477) popup_vitu2_query_window_t1

0x87ff,	// (0x0008d49f) popup_vitu2_query_window_t2_ParamLimits

0x87ff,	// (0x0008d49f) popup_vitu2_query_window_t2

0x8811,	// (0x0008d4b1) popup_vitu2_query_window_t3_ParamLimits

0x8811,	// (0x0008d4b1) popup_vitu2_query_window_t3

0x8839,	// (0x0008d4d9) popup_vitu2_query_window_t4_ParamLimits

0x8839,	// (0x0008d4d9) popup_vitu2_query_window_t4

0x884d,	// (0x0008d4ed) popup_vitu2_query_window_t5_ParamLimits

0x884d,	// (0x0008d4ed) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x0009471a) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x0009471a) popup_vitu2_query_window_t

0xd1b5,	// (0x00091e55) main_cset_text_pane

0x81f5,	// (0x0008ce95) aid_area_touch_slider_ParamLimits

0x8211,	// (0x0008ceb1) cset_slider_pane_ParamLimits

0x823b,	// (0x0008cedb) main_cset_slider_pane_g1_ParamLimits

0x8250,	// (0x0008cef0) main_cset_slider_pane_g2_ParamLimits

0xd1d6,	// (0x00091e76) main_cset_slider_pane_g3_ParamLimits

0xd1d6,	// (0x00091e76) main_cset_slider_pane_g3

0x8265,	// (0x0008cf05) main_cset_slider_pane_g4_ParamLimits

0x8265,	// (0x0008cf05) main_cset_slider_pane_g4

0x8274,	// (0x0008cf14) main_cset_slider_pane_g5_ParamLimits

0x8274,	// (0x0008cf14) main_cset_slider_pane_g5

0x8280,	// (0x0008cf20) main_cset_slider_pane_g6_ParamLimits

0x8280,	// (0x0008cf20) main_cset_slider_pane_g6

0xf9cf,	// (0x0009466f) main_cset_slider_pane_g_ParamLimits

0xd206,	// (0x00091ea6) main_cset_slider_pane_t1_ParamLimits

0x830c,	// (0x0008cfac) main_cset_slider_pane_t2_ParamLimits

0x8326,	// (0x0008cfc6) main_cset_slider_pane_t3_ParamLimits

0x8340,	// (0x0008cfe0) main_cset_slider_pane_t4_ParamLimits

0x835a,	// (0x0008cffa) main_cset_slider_pane_t5_ParamLimits

0x8374,	// (0x0008d014) main_cset_slider_pane_t6_ParamLimits

0x8389,	// (0x0008d029) main_cset_slider_pane_t7_ParamLimits

0x83b3,	// (0x0008d053) main_cset_slider_pane_t8_ParamLimits

0x83b3,	// (0x0008d053) main_cset_slider_pane_t8

0x83db,	// (0x0008d07b) main_cset_slider_pane_t9_ParamLimits

0x83db,	// (0x0008d07b) main_cset_slider_pane_t9

0x8403,	// (0x0008d0a3) main_cset_slider_pane_t10_ParamLimits

0x8403,	// (0x0008d0a3) main_cset_slider_pane_t10

0x842b,	// (0x0008d0cb) main_cset_slider_pane_t11_ParamLimits

0x842b,	// (0x0008d0cb) main_cset_slider_pane_t11

0x8453,	// (0x0008d0f3) main_cset_slider_pane_t12_ParamLimits

0x8453,	// (0x0008d0f3) main_cset_slider_pane_t12

0x8470,	// (0x0008d110) main_cset_slider_pane_t13_ParamLimits

0x8470,	// (0x0008d110) main_cset_slider_pane_t13

0xf9f4,	// (0x00094694) main_cset_slider_pane_t_ParamLimits

0x0771,	// (0x00085411) bg_popup_sub_pane_cp011

0xd362,	// (0x00092002) main_cset_text_pane_g1

0xd36a,	// (0x0009200a) main_cset_text_pane_t1

0xd378,	// (0x00092018) main_cset_text_pane_t2

0xd386,	// (0x00092026) main_cset_text_pane_t3

0xd394,	// (0x00092034) main_cset_text_pane_t4

0xd3a2,	// (0x00092042) main_cset_text_pane_t5

0xd3b0,	// (0x00092050) main_cset_text_pane_t6

0xd3be,	// (0x0009205e) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x00094725) main_cset_text_pane_t

0x0771,	// (0x00085411) main_cam4_burst_pane

0x0771,	// (0x00085411) main_cam5_pane

0x8130,	// (0x0008cdd0) bg_button_pane_cp019

0x8139,	// (0x0008cdd9) bg_button_pane_cp020

0xd1e2,	// (0x00091e82) main_cset_slider_pane_g7_ParamLimits

0xd1e2,	// (0x00091e82) main_cset_slider_pane_g7

0xd1ee,	// (0x00091e8e) main_cset_slider_pane_g8_ParamLimits

0xd1ee,	// (0x00091e8e) main_cset_slider_pane_g8

0x8294,	// (0x0008cf34) main_cset_slider_pane_g9_ParamLimits

0x8294,	// (0x0008cf34) main_cset_slider_pane_g9

0x82a0,	// (0x0008cf40) main_cset_slider_pane_g10_ParamLimits

0x82a0,	// (0x0008cf40) main_cset_slider_pane_g10

0x82ac,	// (0x0008cf4c) main_cset_slider_pane_g11_ParamLimits

0x82ac,	// (0x0008cf4c) main_cset_slider_pane_g11

0x82b8,	// (0x0008cf58) main_cset_slider_pane_g12_ParamLimits

0x82b8,	// (0x0008cf58) main_cset_slider_pane_g12

0x82c4,	// (0x0008cf64) main_cset_slider_pane_g13_ParamLimits

0x82c4,	// (0x0008cf64) main_cset_slider_pane_g13

0x82d0,	// (0x0008cf70) main_cset_slider_pane_g14_ParamLimits

0x82d0,	// (0x0008cf70) main_cset_slider_pane_g14

0x82dc,	// (0x0008cf7c) main_cset_slider_pane_g15_ParamLimits

0x82dc,	// (0x0008cf7c) main_cset_slider_pane_g15

0xd234,	// (0x00091ed4) main_cset_slider_pane_t14_ParamLimits

0xd234,	// (0x00091ed4) main_cset_slider_pane_t14

0xd26d,	// (0x00091f0d) main_cset_slider_pane_t15_ParamLimits

0xd26d,	// (0x00091f0d) main_cset_slider_pane_t15

0x8861,	// (0x0008d501) aid_cam4_burst_size_cell_ParamLimits

0x8861,	// (0x0008d501) aid_cam4_burst_size_cell

0x8881,	// (0x0008d521) grid_cam4_burst_pane_ParamLimits

0x8881,	// (0x0008d521) grid_cam4_burst_pane

0x88b9,	// (0x0008d559) linegrid_cam4_burst_pane_ParamLimits

0x88b9,	// (0x0008d559) linegrid_cam4_burst_pane

0x88dd,	// (0x0008d57d) scroll_pane_cp30_ParamLimits

0x88dd,	// (0x0008d57d) scroll_pane_cp30

0x88e9,	// (0x0008d589) cell_cam4_burst_pane_ParamLimits

0x88e9,	// (0x0008d589) cell_cam4_burst_pane

0xd3cc,	// (0x0009206c) linegrid_cam4_burst_pane_g1_ParamLimits

0xd3cc,	// (0x0009206c) linegrid_cam4_burst_pane_g1

0x8936,	// (0x0008d5d6) linegrid_cam4_burst_pane_g2_ParamLimits

0x8936,	// (0x0008d5d6) linegrid_cam4_burst_pane_g2

0xd3d9,	// (0x00092079) linegrid_cam4_burst_pane_g3_ParamLimits

0xd3d9,	// (0x00092079) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x00094734) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x00094734) linegrid_cam4_burst_pane_g

0x8947,	// (0x0008d5e7) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8947,	// (0x0008d5e7) linegrid_cam4_burst_pane_g3_copy1

0xd3e6,	// (0x00092086) linegrid_cam4_burst_pane_g4_ParamLimits

0xd3e6,	// (0x00092086) linegrid_cam4_burst_pane_g4

0x8961,	// (0x0008d601) linegrid_cam4_burst_pane_g5_ParamLimits

0x8961,	// (0x0008d601) linegrid_cam4_burst_pane_g5

0x8972,	// (0x0008d612) linegrid_cam4_burst_pane_g6_ParamLimits

0x8972,	// (0x0008d612) linegrid_cam4_burst_pane_g6

0xd3f3,	// (0x00092093) linegrid_cam4_burst_pane_g7_ParamLimits

0xd3f3,	// (0x00092093) linegrid_cam4_burst_pane_g7

0x8989,	// (0x0008d629) cell_cam4_burst_pane_g1

0xd40c,	// (0x000920ac) main_cam5_pane_t1_ParamLimits

0xd40c,	// (0x000920ac) main_cam5_pane_t1

0xd41e,	// (0x000920be) main_cam5_pane_t2_ParamLimits

0xd41e,	// (0x000920be) main_cam5_pane_t2

0xd430,	// (0x000920d0) main_cam5_pane_t3_ParamLimits

0xd430,	// (0x000920d0) main_cam5_pane_t3

0xd442,	// (0x000920e2) main_cam5_pane_t4_ParamLimits

0xd442,	// (0x000920e2) main_cam5_pane_t4

0xd45a,	// (0x000920fa) main_cam5_pane_t5_ParamLimits

0xd45a,	// (0x000920fa) main_cam5_pane_t5

0xd46e,	// (0x0009210e) main_cam5_pane_t6_ParamLimits

0xd46e,	// (0x0009210e) main_cam5_pane_t6

0xd482,	// (0x00092122) main_cam5_pane_t7_ParamLimits

0xd482,	// (0x00092122) main_cam5_pane_t7

0xd494,	// (0x00092134) main_cam5_pane_t8_ParamLimits

0xd494,	// (0x00092134) main_cam5_pane_t8

0xd4b0,	// (0x00092150) main_cam5_pane_t9_ParamLimits

0xd4b0,	// (0x00092150) main_cam5_pane_t9

0xd4c2,	// (0x00092162) main_cam5_pane_t10_ParamLimits

0xd4c2,	// (0x00092162) main_cam5_pane_t10

0xd4d4,	// (0x00092174) main_cam5_pane_t11_ParamLimits

0xd4d4,	// (0x00092174) main_cam5_pane_t11

0xd4e6,	// (0x00092186) main_cam5_pane_t12_ParamLimits

0xd4e6,	// (0x00092186) main_cam5_pane_t12

0xd4fb,	// (0x0009219b) main_cam5_pane_t13_ParamLimits

0xd4fb,	// (0x0009219b) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x00094740) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x00094740) main_cam5_pane_t

0x2821,	// (0x000874c1) popup_scut_keymap_window_ParamLimits

0x2821,	// (0x000874c1) popup_scut_keymap_window

0x899c,	// (0x0008d63c) aid_size_cell_brow_shortcut

0xb636,	// (0x000902d6) bg_popup_window_pane_cp010

0x89a8,	// (0x0008d648) grid_scut_pane

0x89b4,	// (0x0008d654) cell_scut_pane_ParamLimits

0x89b4,	// (0x0008d654) cell_scut_pane

0x89cb,	// (0x0008d66b) cell_scut_pane_g1

0xd518,	// (0x000921b8) cell_scut_pane_t1

0xd527,	// (0x000921c7) cell_scut_pane_t2

0x89d4,	// (0x0008d674) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x0009475b) cell_scut_pane_t

0x682a,	// (0x0008b4ca) main_mup3_pane_g8_ParamLimits

0x682a,	// (0x0008b4ca) main_mup3_pane_g8

0x7cab,	// (0x0008c94b) area_vitu2_query_pane_ParamLimits

0x7cab,	// (0x0008c94b) area_vitu2_query_pane

0x87ab,	// (0x0008d44b) input_focus_pane_cp08

0xd536,	// (0x000921d6) area_vitu2_query_pane_g1

0x89e2,	// (0x0008d682) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x00094762) area_vitu2_query_pane_g

0x89f3,	// (0x0008d693) area_vitu2_query_pane_t1_ParamLimits

0x89f3,	// (0x0008d693) area_vitu2_query_pane_t1

0x8a07,	// (0x0008d6a7) area_vitu2_query_pane_t2_ParamLimits

0x8a07,	// (0x0008d6a7) area_vitu2_query_pane_t2

0x8a1b,	// (0x0008d6bb) area_vitu2_query_pane_t3_ParamLimits

0x8a1b,	// (0x0008d6bb) area_vitu2_query_pane_t3

0xd542,	// (0x000921e2) area_vitu2_query_pane_t4_ParamLimits

0xd542,	// (0x000921e2) area_vitu2_query_pane_t4

0xd56a,	// (0x0009220a) area_vitu2_query_pane_t5_ParamLimits

0xd56a,	// (0x0009220a) area_vitu2_query_pane_t5

0xd592,	// (0x00092232) area_vitu2_query_pane_t6_ParamLimits

0xd592,	// (0x00092232) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x00094767) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x00094767) area_vitu2_query_pane_t

0x8a43,	// (0x0008d6e3) bg_button_pane_cp018

0x8a51,	// (0x0008d6f1) bg_button_pane_cp021

0x8a5d,	// (0x0008d6fd) bg_button_pane_cp022

0x8a6c,	// (0x0008d70c) input_focus_pane_cp09

0x47d1,	// (0x00089471) aid_size_touch_mv_arrow_left

0x47fa,	// (0x0008949a) aid_size_touch_mv_arrow_right

0x82f4,	// (0x0008cf94) main_cset_slider_pane_g16_ParamLimits

0x82f4,	// (0x0008cf94) main_cset_slider_pane_g16

0x8300,	// (0x0008cfa0) main_cset_slider_pane_g17_ParamLimits

0x8300,	// (0x0008cfa0) main_cset_slider_pane_g17

0x8989,	// (0x0008d629) cell_cam4_burst_pane_g1_ParamLimits

0x0771,	// (0x00085411) compa_mode_pane

0x84e6,	// (0x0008d186) popup_vtel_slider_window_g3_ParamLimits

0x84e6,	// (0x0008d186) popup_vtel_slider_window_g3

0x84fd,	// (0x0008d19d) popup_vtel_slider_window_g4_ParamLimits

0x84fd,	// (0x0008d19d) popup_vtel_slider_window_g4

0x8514,	// (0x0008d1b4) popup_vtel_slider_window_t1_ParamLimits

0x8514,	// (0x0008d1b4) popup_vtel_slider_window_t1

0x0771,	// (0x00085411) main_cl_pane

0x10b1,	// (0x00085d51) popup_imed_adjust2_window_ParamLimits

0x1089,	// (0x00085d29) bg_tb_trans_pane_cp05_ParamLimits

0xcb32,	// (0x000917d2) popup_imed_adjust2_window_g1_ParamLimits

0xcb41,	// (0x000917e1) popup_imed_adjust2_window_g2_ParamLimits

0xcb41,	// (0x000917e1) popup_imed_adjust2_window_g2

0xcb4d,	// (0x000917ed) popup_imed_adjust2_window_g3_ParamLimits

0xcb4d,	// (0x000917ed) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x000944e1) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x000944e1) popup_imed_adjust2_window_g

0xcb59,	// (0x000917f9) popup_imed_adjust2_window_t1_ParamLimits

0xcb71,	// (0x00091811) slider_imed_adjust_pane_ParamLimits

0xcb85,	// (0x00091825) slider_imed_adjust_pane_g1_ParamLimits

0xcb95,	// (0x00091835) slider_imed_adjust_pane_g2_ParamLimits

0xcba5,	// (0x00091845) slider_imed_adjust_pane_g3_ParamLimits

0xcbb6,	// (0x00091856) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x000944e8) slider_imed_adjust_pane_g_ParamLimits

0x79d4,	// (0x0008c674) aid_touch_area_cam4_ParamLimits

0x79d4,	// (0x0008c674) aid_touch_area_cam4

0xefa7,	// (0x00093c47) battery_pane_cp01

0x7a88,	// (0x0008c728) main_camera4_pane_g6_ParamLimits

0x7a88,	// (0x0008c728) main_camera4_pane_g6

0x7aab,	// (0x0008c74b) main_camera4_pane_t2_ParamLimits

0x7aab,	// (0x0008c74b) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x000945eb) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x000945eb) main_camera4_pane_t

0x7b11,	// (0x0008c7b1) aid_touch_area_vid4_ParamLimits

0x7b11,	// (0x0008c7b1) aid_touch_area_vid4

0x7b6f,	// (0x0008c80f) main_video4_pane_g5_ParamLimits

0x7b6f,	// (0x0008c80f) main_video4_pane_g5

0x7b96,	// (0x0008c836) vid4_progress_pane_ParamLimits

0x7b96,	// (0x0008c836) vid4_progress_pane

0xd1fa,	// (0x00091e9a) main_cset_slider_pane_g18_ParamLimits

0xd1fa,	// (0x00091e9a) main_cset_slider_pane_g18

0xd400,	// (0x000920a0) cell_cam4_burst_pane_g2_ParamLimits

0xd400,	// (0x000920a0) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x0009473b) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x0009473b) cell_cam4_burst_pane_g

0x2c64,	// (0x00087904) bg_cl_pane_ParamLimits

0x2c64,	// (0x00087904) bg_cl_pane

0x8a7b,	// (0x0008d71b) cl_header_pane_ParamLimits

0x8a7b,	// (0x0008d71b) cl_header_pane

0x8a8f,	// (0x0008d72f) cl_listscroll_pane_ParamLimits

0x8a8f,	// (0x0008d72f) cl_listscroll_pane

0xd5de,	// (0x0009227e) bg_cl_pane_g1

0xd5e6,	// (0x00092286) bg_cl_pane_g2

0xd5ee,	// (0x0009228e) bg_cl_pane_g3

0xd5f6,	// (0x00092296) bg_cl_pane_g4

0xd5fe,	// (0x0009229e) bg_cl_pane_g5

0xd606,	// (0x000922a6) bg_cl_pane_g6

0xd60e,	// (0x000922ae) bg_cl_pane_g7

0xd616,	// (0x000922b6) bg_cl_pane_g8

0xd61e,	// (0x000922be) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x00094776) bg_cl_pane_g

0x8a9f,	// (0x0008d73f) aid_height_cl_leading_ParamLimits

0x8a9f,	// (0x0008d73f) aid_height_cl_leading

0x8aab,	// (0x0008d74b) aid_height_cl_text_ParamLimits

0x8aab,	// (0x0008d74b) aid_height_cl_text

0xaafa,	// (0x0008f79a) bg_cl_header_pane_ParamLimits

0xaafa,	// (0x0008f79a) bg_cl_header_pane

0x8aca,	// (0x0008d76a) cl_header_pane_g1_ParamLimits

0x8aca,	// (0x0008d76a) cl_header_pane_g1

0x8ae0,	// (0x0008d780) cl_header_pane_t1_ParamLimits

0x8ae0,	// (0x0008d780) cl_header_pane_t1

0xd626,	// (0x000922c6) cl_list_pane

0xd1cd,	// (0x00091e6d) hc_scroll_pane_cp01

0xadf9,	// (0x0008fa99) bg_cl_header_pane_g1

0xd0b3,	// (0x00091d53) bg_cl_header_pane_g2

0xae19,	// (0x0008fab9) bg_cl_header_pane_g3

0xd0c3,	// (0x00091d63) bg_cl_header_pane_g4

0xd0bb,	// (0x00091d5b) bg_cl_header_pane_g5

0xd301,	// (0x00091fa1) bg_cl_header_pane_g6

0xd0db,	// (0x00091d7b) bg_cl_header_pane_g7

0xd0e3,	// (0x00091d83) bg_cl_header_pane_g8

0xd0d3,	// (0x00091d73) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x00094789) bg_cl_header_pane_g

0x8af9,	// (0x0008d799) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8af9,	// (0x0008d799) hc_cl_list_double_graphic_heading_pane

0x8b0a,	// (0x0008d7aa) hc_cl_list_single_graphic_pane_ParamLimits

0x8b0a,	// (0x0008d7aa) hc_cl_list_single_graphic_pane

0x8b20,	// (0x0008d7c0) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8b20,	// (0x0008d7c0) hc_cl_list_single_graphic_pane_g1

0x8b2c,	// (0x0008d7cc) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8b2c,	// (0x0008d7cc) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x0009479c) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x0009479c) hc_cl_list_single_graphic_pane_g

0x8b40,	// (0x0008d7e0) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8b40,	// (0x0008d7e0) hc_cl_list_single_graphic_pane_t1

0x8b20,	// (0x0008d7c0) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8b20,	// (0x0008d7c0) hc_cl_list_double_graphic_heading_pane_g1

0x8b55,	// (0x0008d7f5) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8b55,	// (0x0008d7f5) hc_cl_list_double_graphic_heading_pane_g2

0x8b69,	// (0x0008d809) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8b69,	// (0x0008d809) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x000947a1) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x000947a1) hc_cl_list_double_graphic_heading_pane_g

0x8b7d,	// (0x0008d81d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8b7d,	// (0x0008d81d) hc_cl_list_double_graphic_heading_pane_t1

0x8b92,	// (0x0008d832) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8b92,	// (0x0008d832) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x000947a8) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x000947a8) hc_cl_list_double_graphic_heading_pane_t

0xf082,	// (0x00093d22) vid4_progress_pane_g1

0xf08e,	// (0x00093d2e) vid4_progress_pane_g2

0xf09a,	// (0x00093d3a) vid4_progress_pane_g3

0xf0a9,	// (0x00093d49) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x000947ad) vid4_progress_pane_g

0xf0c7,	// (0x00093d67) vid4_progress_pane_t1

0xf0dd,	// (0x00093d7d) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x000947b8) vid4_progress_pane_t

0xf108,	// (0x00093da8) wait_bar_pane_cp07

0x12c3,	// (0x00085f63) blid_firmament_pane_ParamLimits

0x1306,	// (0x00085fa6) popup_blid_sat_info2_window_g1

0x132a,	// (0x00085fca) popup_blid_sat_info2_window_t3

0x1338,	// (0x00085fd8) popup_blid_sat_info2_window_t4

0x1346,	// (0x00085fe6) popup_blid_sat_info2_window_t5

0x1354,	// (0x00085ff4) popup_blid_sat_info2_window_t6

0x1364,	// (0x00086004) popup_blid_sat_info2_window_t7

0x1372,	// (0x00086012) popup_blid_sat_info2_window_t8

0x1380,	// (0x00086020) popup_blid_sat_info2_window_t9

0x138e,	// (0x0008602e) popup_blid_sat_info2_window_t10

0x1450,	// (0x000860f0) aid_firma_cardinal_ParamLimits

0x1464,	// (0x00086104) blid_firmament_pane_t1_ParamLimits

0x147b,	// (0x0008611b) blid_firmament_pane_t2_ParamLimits

0x1492,	// (0x00086132) blid_firmament_pane_t3_ParamLimits

0x14a9,	// (0x00086149) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x000943da) blid_firmament_pane_t_ParamLimits

0x14c0,	// (0x00086160) blid_sat_info_pane_ParamLimits

0xaafa,	// (0x0008f79a) main_cam_set_pane_ParamLimits

0x7087,	// (0x0008bd27) aid_size_cell_colour_35_ParamLimits

0x70a7,	// (0x0008bd47) aid_size_cell_colour_112_ParamLimits

0x70c7,	// (0x0008bd67) aid_size_cell_effect_ParamLimits

0x1089,	// (0x00085d29) bg_tb_trans_pane_cp02_ParamLimits

0xb09d,	// (0x0008fd3d) heading_imed_pane_ParamLimits

0x70e7,	// (0x0008bd87) listscroll_imed_pane_ParamLimits

0xc0aa,	// (0x00090d4a) popup_call2_audio_first_window_g5_ParamLimits

0xc0aa,	// (0x00090d4a) popup_call2_audio_first_window_g5

0x767f,	// (0x0008c31f) aid_size_touch_image3_arrow_left_ParamLimits

0x767f,	// (0x0008c31f) aid_size_touch_image3_arrow_left

0x76ab,	// (0x0008c34b) aid_size_touch_image3_arrow_right_ParamLimits

0x76ab,	// (0x0008c34b) aid_size_touch_image3_arrow_right

0xf0f3,	// (0x00093d93) vid4_progress_pane_t3

0x73fa,	// (0x0008c09a) main_hwr_training_symbol_option_pane_ParamLimits

0x73fa,	// (0x0008c09a) main_hwr_training_symbol_option_pane

0xce1f,	// (0x00091abf) popup_hwr_training_preview_window_ParamLimits

0xce1f,	// (0x00091abf) popup_hwr_training_preview_window

0x741a,	// (0x0008c0ba) hwr_training_navi_pane_g5_ParamLimits

0x741a,	// (0x0008c0ba) hwr_training_navi_pane_g5

0xd0a1,	// (0x00091d41) popup_char_count_window

0xefdf,	// (0x00093c7f) bg_popup_sub_pane_cp20_ParamLimits

0x862c,	// (0x0008d2cc) list_vitu2_match_list_pane_ParamLimits

0x863b,	// (0x0008d2db) vitu2_page_scroll_pane_ParamLimits

0x863b,	// (0x0008d2db) vitu2_page_scroll_pane

0xd689,	// (0x00092329) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd689,	// (0x00092329) list_single_hwr_training_symbol_option_pane

0xd69c,	// (0x0009233c) list_single_hwr_training_symbol_option_pane_g1

0xd6a4,	// (0x00092344) list_single_hwr_training_symbol_option_pane_t1

0xd6b2,	// (0x00092352) bg_button_pane_cp023

0xd6bb,	// (0x0009235b) bg_button_pane_cp024

0x8bb1,	// (0x0008d851) vitu2_page_scroll_pane_g1

0x8bb9,	// (0x0008d859) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x000947bf) vitu2_page_scroll_pane_g

0x8bc1,	// (0x0008d861) vitu2_page_scroll_pane_t1

0xd6ee,	// (0x0009238e) popup_char_count_window_g1

0xd6f7,	// (0x00092397) popup_char_count_window_g2

0xd700,	// (0x000923a0) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x000947c4) popup_char_count_window_g

0xd709,	// (0x000923a9) popup_char_count_window_t1

0x0771,	// (0x00085411) main_vded2_pane

0xcb1e,	// (0x000917be) aid_size_cell_imed_line

0xcb28,	// (0x000917c8) grid_imed_line_width_pane

0x7bf7,	// (0x0008c897) vid4_indicators_pane_g4

0xd717,	// (0x000923b7) cell_imed_line_width_pane_ParamLimits

0xd717,	// (0x000923b7) cell_imed_line_width_pane

0xd72b,	// (0x000923cb) cell_imed_line_width_pane_g1

0x1703,	// (0x000863a3) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x000947cb) cell_imed_line_width_pane_g

0x8bd0,	// (0x0008d870) main_vded2_pane_g1_ParamLimits

0x8bd0,	// (0x0008d870) main_vded2_pane_g1

0x8be6,	// (0x0008d886) main_vded2_pane_g2_ParamLimits

0x8be6,	// (0x0008d886) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x000947d0) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x000947d0) main_vded2_pane_g

0x8bf8,	// (0x0008d898) vded2_slider_pane_ParamLimits

0x8bf8,	// (0x0008d898) vded2_slider_pane

0x8c08,	// (0x0008d8a8) aid_size_touch_vded2_end

0x8c12,	// (0x0008d8b2) aid_size_touch_vded2_playhead

0xd734,	// (0x000923d4) aid_size_touch_vded2_start

0xd73c,	// (0x000923dc) vded2_slider_bg_pane

0xd745,	// (0x000923e5) vded2_slider_pane_g1

0xd74e,	// (0x000923ee) vded2_slider_pane_g2

0x8c1c,	// (0x0008d8bc) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x000947d5) vded2_slider_pane_g

0xd756,	// (0x000923f6) vded2_slider_bg_pane_g1

0xd75f,	// (0x000923ff) vded2_slider_bg_pane_g2

0xd768,	// (0x00092408) vded2_slider_bg_pane_g3

0x0002,

0xfb3c,	// (0x000947dc) vded2_slider_bg_pane_g

0x4e78,	// (0x00089b18) aid_postcard_touch_down_pane_ParamLimits

0x4e78,	// (0x00089b18) aid_postcard_touch_down_pane

0x4e8e,	// (0x00089b2e) aid_postcard_touch_up_pane_ParamLimits

0x4e8e,	// (0x00089b2e) aid_postcard_touch_up_pane

0x0771,	// (0x00085411) main_blid2_pane

0x1097,	// (0x00085d37) popup_blid2_search_window

0x0771,	// (0x00085411) blid2_gps_pane

0x0771,	// (0x00085411) blid2_navig_pane

0x0771,	// (0x00085411) blid2_search_pane

0x0771,	// (0x00085411) blid2_tripm_pane

0x8c27,	// (0x0008d8c7) blid2_search_pane_g1_ParamLimits

0x8c27,	// (0x0008d8c7) blid2_search_pane_g1

0x8c41,	// (0x0008d8e1) blid2_search_pane_t1_ParamLimits

0x8c41,	// (0x0008d8e1) blid2_search_pane_t1

0x8c53,	// (0x0008d8f3) aid_size_cell_blid2_gps_ParamLimits

0x8c53,	// (0x0008d8f3) aid_size_cell_blid2_gps

0x8c6b,	// (0x0008d90b) blid2_gps_pane_g1_ParamLimits

0x8c6b,	// (0x0008d90b) blid2_gps_pane_g1

0x8c7f,	// (0x0008d91f) grid_blid2_satellite_pane_ParamLimits

0x8c7f,	// (0x0008d91f) grid_blid2_satellite_pane

0x8c99,	// (0x0008d939) blid2_navig_pane_g1_ParamLimits

0x8c99,	// (0x0008d939) blid2_navig_pane_g1

0x8ca5,	// (0x0008d945) blid2_navig_pane_t1_ParamLimits

0x8ca5,	// (0x0008d945) blid2_navig_pane_t1

0x8cc0,	// (0x0008d960) blid2_navig_pane_t2_ParamLimits

0x8cc0,	// (0x0008d960) blid2_navig_pane_t2

0x0001,

0xfb43,	// (0x000947e3) blid2_navig_pane_t_ParamLimits

0xfb43,	// (0x000947e3) blid2_navig_pane_t

0x8cdb,	// (0x0008d97b) blid2_navig_ring_pane_ParamLimits

0x8cdb,	// (0x0008d97b) blid2_navig_ring_pane

0x8cf4,	// (0x0008d994) blid2_speed_pane_ParamLimits

0x8cf4,	// (0x0008d994) blid2_speed_pane

0x8d00,	// (0x0008d9a0) blid2_tripm_pane_g1_ParamLimits

0x8d00,	// (0x0008d9a0) blid2_tripm_pane_g1

0x8d19,	// (0x0008d9b9) blid2_tripm_pane_g2_ParamLimits

0x8d19,	// (0x0008d9b9) blid2_tripm_pane_g2

0x8d2d,	// (0x0008d9cd) blid2_tripm_pane_g3_ParamLimits

0x8d2d,	// (0x0008d9cd) blid2_tripm_pane_g3

0x8d41,	// (0x0008d9e1) blid2_tripm_pane_g4_ParamLimits

0x8d41,	// (0x0008d9e1) blid2_tripm_pane_g4

0x8d55,	// (0x0008d9f5) blid2_tripm_pane_g5_ParamLimits

0x8d55,	// (0x0008d9f5) blid2_tripm_pane_g5

0x0005,

0xfb48,	// (0x000947e8) blid2_tripm_pane_g_ParamLimits

0xfb48,	// (0x000947e8) blid2_tripm_pane_g

0x8d7b,	// (0x0008da1b) blid2_tripm_pane_t1_ParamLimits

0x8d7b,	// (0x0008da1b) blid2_tripm_pane_t1

0x8d96,	// (0x0008da36) blid2_tripm_pane_t2_ParamLimits

0x8d96,	// (0x0008da36) blid2_tripm_pane_t2

0x8daf,	// (0x0008da4f) blid2_tripm_pane_t3_ParamLimits

0x8daf,	// (0x0008da4f) blid2_tripm_pane_t3

0x0003,

0xfb55,	// (0x000947f5) blid2_tripm_pane_t_ParamLimits

0xfb55,	// (0x000947f5) blid2_tripm_pane_t

0x8df6,	// (0x0008da96) cell_blid2_satellite_pane_ParamLimits

0x8df6,	// (0x0008da96) cell_blid2_satellite_pane

0x8e14,	// (0x0008dab4) cell_blid2_satellite_pane_g1

0xd771,	// (0x00092411) cell_blid2_satellite_pane_t1

0x14d0,	// (0x00086170) blid2_speed_pane_g1

0xd77f,	// (0x0009241f) blid2_speed_pane_t1

0xd78d,	// (0x0009242d) blid2_speed_pane_t2

0x0001,

0xfb5e,	// (0x000947fe) blid2_speed_pane_t

0x14d0,	// (0x00086170) blid2_navig_ring_pane_g1

0x8e1d,	// (0x0008dabd) blid2_navig_ring_pane_g2

0x8e25,	// (0x0008dac5) blid2_navig_ring_pane_g3

0x8e2d,	// (0x0008dacd) blid2_navig_ring_pane_g4

0x8e35,	// (0x0008dad5) blid2_navig_ring_pane_g5

0x0004,

0xfb63,	// (0x00094803) blid2_navig_ring_pane_g

0x0771,	// (0x00085411) bg_popup_window_pane_cp011

0xd79b,	// (0x0009243b) popup_blid2_search_window_g1

0xd7a3,	// (0x00092443) popup_blid2_search_window_t1

0xd7b1,	// (0x00092451) popup_blid2_search_window_t2

0x0001,

0xfb6e,	// (0x0009480e) popup_blid2_search_window_t

0xad08,	// (0x0008f9a8) main_browser_pane_g1

0x2c64,	// (0x00087904) main_browser_pane_ParamLimits

0xefdf,	// (0x00093c7f) bg_button_pane_cp011_ParamLimits

0x7ed0,	// (0x0008cb70) cell_vitu2_function_pane_g1_ParamLimits

0xaafa,	// (0x0008f79a) bg_popup_sub_pane_cp22_ParamLimits

0x87ab,	// (0x0008d44b) input_focus_pane_cp08_ParamLimits

0x87b8,	// (0x0008d458) popup_vitu2_query_button_pane_ParamLimits

0x87b8,	// (0x0008d458) popup_vitu2_query_button_pane

0x878d,	// (0x0008d42d) popup_vitu2_query_input_button_pane

0xd356,	// (0x00091ff6) popup_vitu2_query_window_g1_ParamLimits

0x87c9,	// (0x0008d469) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x00094715) popup_vitu2_query_window_g_ParamLimits

0x0771,	// (0x00085411) bg_button_pane_cp026

0x8e3d,	// (0x0008dadd) popup_vitu2_query_input_button_pane_g1

0x0771,	// (0x00085411) bg_button_pane_cp025

0xd7bf,	// (0x0009245f) popup_vitu2_query_button_pane_t1

0x6512,	// (0x0008b1b2) main_mp3_pane_t6

0x6520,	// (0x0008b1c0) popup_slider_window_cp01

0xefb7,	// (0x00093c57) cam4_battery_pane

0xefd5,	// (0x00093c75) cam4_battery_pane_cp02

0x8ba7,	// (0x0008d847) cam4_battery_pane_cp01

0xf07a,	// (0x00093d1a) cam4_battery_pane_cp03

0xcf1d,	// (0x00091bbd) cam4_battery_pane_g1

0x14d0,	// (0x00086170) cam4_battery_pane_g2

0x0001,

0xfb73,	// (0x00094813) cam4_battery_pane_g

0x139c,	// (0x0008603c) popup_blid_sat_info2_window_t11

0x47d1,	// (0x00089471) aid_size_touch_mv_arrow_left_ParamLimits

0x47fa,	// (0x0008949a) aid_size_touch_mv_arrow_right_ParamLimits

0xb596,	// (0x00090236) navi_pane_g1_ParamLimits

0x4823,	// (0x000894c3) navi_pane_g2_ParamLimits

0x4851,	// (0x000894f1) navi_pane_g3_ParamLimits

0xf44c,	// (0x000940ec) navi_pane_g_ParamLimits

0x48a9,	// (0x00089549) navi_pane_mv_t1_ParamLimits

0x70f3,	// (0x0008bd93) grid_imed_effect_pane_ParamLimits

0xac51,	// (0x0008f8f1) aid_placing_vt_slider_lsc

0xac59,	// (0x0008f8f9) aid_placing_vt_slider_prt

0xaafa,	// (0x0008f79a) bg_tb_trans_pane_cp01_ParamLimits

0x1653,	// (0x000862f3) popup_image_details_window_g1_ParamLimits

0x1666,	// (0x00086306) popup_image_details_window_g2_ParamLimits

0x167b,	// (0x0008631b) popup_image_details_window_g3_ParamLimits

0x167b,	// (0x0008631b) popup_image_details_window_g3

0xf77f,	// (0x0009441f) popup_image_details_window_g_ParamLimits

0x168f,	// (0x0008632f) popup_image_details_window_t1_ParamLimits

0x16a1,	// (0x00086341) popup_image_details_window_t2_ParamLimits

0x16ba,	// (0x0008635a) popup_image_details_window_t3_ParamLimits

0x16ce,	// (0x0008636e) popup_image_details_window_t4_ParamLimits

0x16e9,	// (0x00086389) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x00094426) popup_image_details_window_t_ParamLimits

0x8ab7,	// (0x0008d757) cl_header_name_pane_ParamLimits

0x8ab7,	// (0x0008d757) cl_header_name_pane

0x8e45,	// (0x0008dae5) cl_header_name_pane_t1_ParamLimits

0x8e45,	// (0x0008dae5) cl_header_name_pane_t1

0x8e66,	// (0x0008db06) cl_header_name_pane_t2_ParamLimits

0x8e66,	// (0x0008db06) cl_header_name_pane_t2

0x8ea8,	// (0x0008db48) cl_header_name_pane_t3_ParamLimits

0x8ea8,	// (0x0008db48) cl_header_name_pane_t3

0x0002,

0xfb78,	// (0x00094818) cl_header_name_pane_t_ParamLimits

0xfb78,	// (0x00094818) cl_header_name_pane_t

0x487a,	// (0x0008951a) navi_pane_mv_g2_ParamLimits

0xd041,	// (0x00091ce1) field_vitu2_entry_pane_g1_ParamLimits

0xd04d,	// (0x00091ced) field_vitu2_entry_pane_g2_ParamLimits

0xd059,	// (0x00091cf9) field_vitu2_entry_pane_g3_ParamLimits

0xd059,	// (0x00091cf9) field_vitu2_entry_pane_g3

0xf974,	// (0x00094614) field_vitu2_entry_pane_g_ParamLimits

0x7e4c,	// (0x0008caec) cell_vitu2_itu_pane_g1_ParamLimits

0x7e5c,	// (0x0008cafc) cell_vitu2_itu_pane_g2_ParamLimits

0x7e5c,	// (0x0008cafc) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x00094620) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x00094620) cell_vitu2_itu_pane_g

0xefdf,	// (0x00093c7f) bg_vkb2_func_pane_cp05_ParamLimits

0xefdf,	// (0x00093c7f) bg_vkb2_func_pane_cp05

0xefdf,	// (0x00093c7f) bg_vkb2_func_pane_cp03

0xefdf,	// (0x00093c7f) bg_vkb2_func_pane_cp04

0xefdf,	// (0x00093c7f) bg_vkb2_func_pane_cp10_ParamLimits

0xefdf,	// (0x00093c7f) bg_vkb2_func_pane_cp10

0x8a5d,	// (0x0008d6fd) bg_vkb2_func_pane_cp08

0x8a43,	// (0x0008d6e3) bg_vkb2_func_pane_cp06

0x8a51,	// (0x0008d6f1) bg_vkb2_func_pane_cp07

0xd6c4,	// (0x00092364) bg_vkb2_func_pane_cp11_ParamLimits

0xd6c4,	// (0x00092364) bg_vkb2_func_pane_cp11

0xd6d9,	// (0x00092379) bg_vkb2_func_pane_cp12_ParamLimits

0xd6d9,	// (0x00092379) bg_vkb2_func_pane_cp12

0x0771,	// (0x00085411) bg_vkb2_func_pane_cp09

0xd0b3,	// (0x00091d53) bg_vkb2_func_pane_g1

0xae19,	// (0x0008fab9) bg_vkb2_func_pane_g2

0xd0bb,	// (0x00091d5b) bg_vkb2_func_pane_g3

0xd0c3,	// (0x00091d63) bg_vkb2_func_pane_g4

0xd301,	// (0x00091fa1) bg_vkb2_func_pane_g5

0xd0db,	// (0x00091d7b) bg_vkb2_func_pane_g6

0xd0e3,	// (0x00091d83) bg_vkb2_func_pane_g7

0xd0d3,	// (0x00091d73) bg_vkb2_func_pane_g8

0xadf9,	// (0x0008fa99) bg_vkb2_func_pane_g9

0x0008,

0xfb7f,	// (0x0009481f) bg_vkb2_func_pane_g

0x8d69,	// (0x0008da09) blid2_tripm_pane_g6_ParamLimits

0x8d69,	// (0x0008da09) blid2_tripm_pane_g6

0xced7,	// (0x00091b77) mp4_progress_pane_g1

0x8de2,	// (0x0008da82) blid2_tripm_values_pane_ParamLimits

0x8de2,	// (0x0008da82) blid2_tripm_values_pane

0x8ed9,	// (0x0008db79) blid2_tripm_values_pane_t1

0x8ee7,	// (0x0008db87) blid2_tripm_values_pane_t2

0x8ef5,	// (0x0008db95) blid2_tripm_values_pane_t3

0x8f03,	// (0x0008dba3) blid2_tripm_values_pane_t4

0x8f11,	// (0x0008dbb1) blid2_tripm_values_pane_t5

0x8f1f,	// (0x0008dbbf) blid2_tripm_values_pane_t6

0x8f2d,	// (0x0008dbcd) blid2_tripm_values_pane_t7

0x8f3b,	// (0x0008dbdb) blid2_tripm_values_pane_t8

0x8f49,	// (0x0008dbe9) blid2_tripm_values_pane_t9

0x0008,

0xfb92,	// (0x00094832) blid2_tripm_values_pane_t

0x3915,	// (0x000885b5) call_video_pane_t1_ParamLimits

0x3929,	// (0x000885c9) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x00093f75) call_video_pane_t_ParamLimits

0x4d7b,	// (0x00089a1b) msg_header_pane_g1_ParamLimits

0xb7d1,	// (0x00090471) msg_header_pane_g2_ParamLimits

0xb7d1,	// (0x00090471) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x0009418f) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x0009418f) msg_header_pane_g

0x2c64,	// (0x00087904) main_clock2_pane_ParamLimits

0x6e1f,	// (0x0008babf) grid_clock2_toolbar_pane_ParamLimits

0x6e1f,	// (0x0008babf) grid_clock2_toolbar_pane

0x6e1f,	// (0x0008babf) listscroll_clock2_pane_ParamLimits

0x6e1f,	// (0x0008babf) listscroll_clock2_pane

0x6efb,	// (0x0008bb9b) main_clock2_pane_t3_ParamLimits

0x6efb,	// (0x0008bb9b) main_clock2_pane_t3

0x6f16,	// (0x0008bbb6) main_clock2_pane_t4_ParamLimits

0x6f16,	// (0x0008bbb6) main_clock2_pane_t4

0xd7cd,	// (0x0009246d) cell_clock2_toolbar_pane

0xd7d5,	// (0x00092475) cell_clock2_toolbar_pane_cp01

0xd7d5,	// (0x00092475) cell_clock2_toolbar_pane_cp02

0xd7dd,	// (0x0009247d) cell_clock2_toolbar_pane_cp03

0xd7e5,	// (0x00092485) list_clock2_pane

0xb4ed,	// (0x0009018d) scroll_pane_cp10

0xd7ed,	// (0x0009248d) list_single_clock2_pane_ParamLimits

0xd7ed,	// (0x0009248d) list_single_clock2_pane

0xb636,	// (0x000902d6) list_highlight_pane_cp08

0xd7fa,	// (0x0009249a) list_single_clock2_pane_t1

0xd808,	// (0x000924a8) list_single_clock2_pane_t2

0x0001,

0xfba5,	// (0x00094845) list_single_clock2_pane_t

0x0771,	// (0x00085411) bg_button_pane_cp10

0xd816,	// (0x000924b6) cell_clock2_toolbar_pane_g1

0x4e04,	// (0x00089aa4) aid_main_viewer_pane_g1_ParamLimits

0x4e04,	// (0x00089aa4) aid_main_viewer_pane_g1

0x4e12,	// (0x00089ab2) aid_main_viewer_pane_g2_ParamLimits

0x4e12,	// (0x00089ab2) aid_main_viewer_pane_g2

0x4e20,	// (0x00089ac0) aid_main_viewer_pane_g3_ParamLimits

0x4e20,	// (0x00089ac0) aid_main_viewer_pane_g3

0x4e2f,	// (0x00089acf) aid_main_viewer_pane_g4_ParamLimits

0x4e2f,	// (0x00089acf) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x000941a0) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x000941a0) aid_main_viewer_pane_g

0x5735,	// (0x0008a3d5) main_calc_pane_ParamLimits

0x5749,	// (0x0008a3e9) main_dialer2_pane_ParamLimits

0x0771,	// (0x00085411) main_cam6_pane

0x0771,	// (0x00085411) main_vid6_pane

0x6e2b,	// (0x0008bacb) listscroll_gen_pane_cp06_ParamLimits

0x6e2b,	// (0x0008bacb) listscroll_gen_pane_cp06

0x6f31,	// (0x0008bbd1) main_clock2_pane_t5_ParamLimits

0x6f31,	// (0x0008bbd1) main_clock2_pane_t5

0x6f88,	// (0x0008bc28) aid_call2_pane_cp10_ParamLimits

0x6f9a,	// (0x0008bc3a) aid_call_pane_cp10_ParamLimits

0xb56b,	// (0x0009020b) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb56b,	// (0x0009020b) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6fac,	// (0x0008bc4c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6fac,	// (0x0008bc4c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb56b,	// (0x0009020b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x000944d6) popup_clock_analogue_window_cp10_g_ParamLimits

0x6fbe,	// (0x0008bc5e) popup_clock_analogue_window_cp10_t1_ParamLimits

0x762c,	// (0x0008c2cc) cell_dialer2_keypad_pane_g2_ParamLimits

0x762c,	// (0x0008c2cc) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x000945bc) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x000945bc) cell_dialer2_keypad_pane_g

0x7648,	// (0x0008c2e8) cell_dialer2_keypad_pane_t1

0x81e7,	// (0x0008ce87) main_cset_text2_pane_ParamLimits

0x81e7,	// (0x0008ce87) main_cset_text2_pane

0xd536,	// (0x000921d6) area_vitu2_query_pane_g1_ParamLimits

0x89e2,	// (0x0008d682) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x00094762) area_vitu2_query_pane_g_ParamLimits

0xd5ba,	// (0x0009225a) area_vitu2_query_pane_t7_ParamLimits

0xd5ba,	// (0x0009225a) area_vitu2_query_pane_t7

0x8a43,	// (0x0008d6e3) bg_button_pane_cp018_ParamLimits

0x8a51,	// (0x0008d6f1) bg_button_pane_cp021_ParamLimits

0x8a5d,	// (0x0008d6fd) bg_button_pane_cp022_ParamLimits

0x8a5d,	// (0x0008d6fd) bg_vkb2_func_pane_cp08_ParamLimits

0x8a43,	// (0x0008d6e3) bg_vkb2_func_pane_cp06_ParamLimits

0x8a51,	// (0x0008d6f1) bg_vkb2_func_pane_cp07_ParamLimits

0x8a6c,	// (0x0008d70c) input_focus_pane_cp09_ParamLimits

0xf118,	// (0x00093db8) cam6_autofocus_pane_ParamLimits

0xf118,	// (0x00093db8) cam6_autofocus_pane

0x8f57,	// (0x0008dbf7) cam6_image_uncrop_pane_ParamLimits

0x8f57,	// (0x0008dbf7) cam6_image_uncrop_pane

0x8f66,	// (0x0008dc06) cam6_indi_pane_ParamLimits

0x8f66,	// (0x0008dc06) cam6_indi_pane

0x8f7c,	// (0x0008dc1c) cam6_mode_pane_ParamLimits

0x8f7c,	// (0x0008dc1c) cam6_mode_pane

0x8f8e,	// (0x0008dc2e) cam6_timer_pane_ParamLimits

0x8f8e,	// (0x0008dc2e) cam6_timer_pane

0x8f9a,	// (0x0008dc3a) cam6_zoom_pane_ParamLimits

0x8f9a,	// (0x0008dc3a) cam6_zoom_pane

0x8fa6,	// (0x0008dc46) cam6_mode_pane_g1_ParamLimits

0x8fa6,	// (0x0008dc46) cam6_mode_pane_g1

0x8fb6,	// (0x0008dc56) cam6_mode_pane_g2_ParamLimits

0x8fb6,	// (0x0008dc56) cam6_mode_pane_g2

0x8fc6,	// (0x0008dc66) cam6_mode_pane_g3_ParamLimits

0x8fc6,	// (0x0008dc66) cam6_mode_pane_g3

0x8fd6,	// (0x0008dc76) cam6_mode_pane_g4_ParamLimits

0x8fd6,	// (0x0008dc76) cam6_mode_pane_g4

0x0003,

0xfbaa,	// (0x0009484a) cam6_mode_pane_g_ParamLimits

0xfbaa,	// (0x0009484a) cam6_mode_pane_g

0xd81e,	// (0x000924be) bg_tb_trans_pane_cp08_ParamLimits

0xd81e,	// (0x000924be) bg_tb_trans_pane_cp08

0xd82c,	// (0x000924cc) cam6_battery_pane_ParamLimits

0xd82c,	// (0x000924cc) cam6_battery_pane

0xd842,	// (0x000924e2) cam6_indi_pane_g1_ParamLimits

0xd842,	// (0x000924e2) cam6_indi_pane_g1

0xd854,	// (0x000924f4) cam6_indi_pane_g2_ParamLimits

0xd854,	// (0x000924f4) cam6_indi_pane_g2

0xd866,	// (0x00092506) cam6_indi_pane_g3_ParamLimits

0xd866,	// (0x00092506) cam6_indi_pane_g3

0x0002,

0xfbb3,	// (0x00094853) cam6_indi_pane_g_ParamLimits

0xfbb3,	// (0x00094853) cam6_indi_pane_g

0xd878,	// (0x00092518) cam6_indi_pane_t1_ParamLimits

0xd878,	// (0x00092518) cam6_indi_pane_t1

0x8fe6,	// (0x0008dc86) cam6_autofocus_pane_g1

0x8fee,	// (0x0008dc8e) cam6_autofocus_pane_g2

0x8ff6,	// (0x0008dc96) cam6_autofocus_pane_g3

0x8ffe,	// (0x0008dc9e) cam6_autofocus_pane_g4

0x0003,

0xfbba,	// (0x0009485a) cam6_autofocus_pane_g

0xd89e,	// (0x0009253e) cam6_timer_pane_g1

0xd8a6,	// (0x00092546) cam6_timer_pane_t1

0xd8b4,	// (0x00092554) cam6_zoom_cont_pane

0xd8bc,	// (0x0009255c) cam6_zoom_pane_g1

0xd8c4,	// (0x00092564) cam6_zoom_pane_g2

0x9006,	// (0x0008dca6) cam6_zoom_pane_g3

0x0002,

0xfbc3,	// (0x00094863) cam6_zoom_pane_g

0x14d0,	// (0x00086170) cam6_battery_pane_g1

0x14d0,	// (0x00086170) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x000943e3) cam6_battery_pane_g

0xd8cc,	// (0x0009256c) cam6_zoom_cont_pane_g1

0xd8d5,	// (0x00092575) cam6_zoom_cont_pane_g2

0xd8de,	// (0x0009257e) cam6_zoom_cont_pane_g3

0x0002,

0xfbca,	// (0x0009486a) cam6_zoom_cont_pane_g

0x9023,	// (0x0008dcc3) cam6_mode_pane_cp_ParamLimits

0x9023,	// (0x0008dcc3) cam6_mode_pane_cp

0x9035,	// (0x0008dcd5) cam6_zoom_pane_cp_ParamLimits

0x9035,	// (0x0008dcd5) cam6_zoom_pane_cp

0x9041,	// (0x0008dce1) vid6_image_uncrop_cif_pane_ParamLimits

0x9041,	// (0x0008dce1) vid6_image_uncrop_cif_pane

0x9051,	// (0x0008dcf1) vid6_image_uncrop_nhd_pane_ParamLimits

0x9051,	// (0x0008dcf1) vid6_image_uncrop_nhd_pane

0x9060,	// (0x0008dd00) vid6_image_uncrop_vga_pane_ParamLimits

0x9060,	// (0x0008dd00) vid6_image_uncrop_vga_pane

0x906f,	// (0x0008dd0f) vid6_image_uncrop_wvga_pane_ParamLimits

0x906f,	// (0x0008dd0f) vid6_image_uncrop_wvga_pane

0x907e,	// (0x0008dd1e) vid6_indi_pane_ParamLimits

0x907e,	// (0x0008dd1e) vid6_indi_pane

0xd81e,	// (0x000924be) bg_tb_trans_pane_cp09_ParamLimits

0xd81e,	// (0x000924be) bg_tb_trans_pane_cp09

0xd8f6,	// (0x00092596) cam6_battery_pane_cp_ParamLimits

0xd8f6,	// (0x00092596) cam6_battery_pane_cp

0xd902,	// (0x000925a2) vid6_indi_pane_g1_ParamLimits

0xd902,	// (0x000925a2) vid6_indi_pane_g1

0xd914,	// (0x000925b4) vid6_indi_pane_g2_ParamLimits

0xd914,	// (0x000925b4) vid6_indi_pane_g2

0xd926,	// (0x000925c6) vid6_indi_pane_g3_ParamLimits

0xd926,	// (0x000925c6) vid6_indi_pane_g3

0xd93b,	// (0x000925db) vid6_indi_pane_g4_ParamLimits

0xd93b,	// (0x000925db) vid6_indi_pane_g4

0xd950,	// (0x000925f0) vid6_indi_pane_g5_ParamLimits

0xd950,	// (0x000925f0) vid6_indi_pane_g5

0x0004,

0xfbd1,	// (0x00094871) vid6_indi_pane_g_ParamLimits

0xfbd1,	// (0x00094871) vid6_indi_pane_g

0xd96a,	// (0x0009260a) vid6_indi_pane_t1_ParamLimits

0xd96a,	// (0x0009260a) vid6_indi_pane_t1

0xd980,	// (0x00092620) vid6_indi_pane_t2_ParamLimits

0xd980,	// (0x00092620) vid6_indi_pane_t2

0xd9a8,	// (0x00092648) vid6_indi_pane_t3_ParamLimits

0xd9a8,	// (0x00092648) vid6_indi_pane_t3

0xd9d0,	// (0x00092670) vid6_indi_pane_t4_ParamLimits

0xd9d0,	// (0x00092670) vid6_indi_pane_t4

0x0003,

0xfbdc,	// (0x0009487c) vid6_indi_pane_t_ParamLimits

0xfbdc,	// (0x0009487c) vid6_indi_pane_t

0xd9f4,	// (0x00092694) wait_bar_pane_cp08

0x9096,	// (0x0008dd36) main_cset_text2_pane_t1_ParamLimits

0x9096,	// (0x0008dd36) main_cset_text2_pane_t1

0x900e,	// (0x0008dcae) listscroll_gen_pane_cp06_t1_ParamLimits

0x900e,	// (0x0008dcae) listscroll_gen_pane_cp06_t1

0x0771,	// (0x00085411) main_cam6_set_pane

0x7acc,	// (0x0008c76c) bg_tb_trans_pane_cp06_ParamLimits

0x7ada,	// (0x0008c77a) cam4_indicators_pane_g1_ParamLimits

0x7ae7,	// (0x0008c787) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x000945f0) cam4_indicators_pane_g_ParamLimits

0x7aff,	// (0x0008c79f) cam4_indicators_pane_t1_ParamLimits

0xefc7,	// (0x00093c67) bg_tb_trans_pane_cp07_ParamLimits

0x7ada,	// (0x0008c77a) vid4_indicators_pane_g1_ParamLimits

0x7bdd,	// (0x0008c87d) vid4_indicators_pane_g2_ParamLimits

0x7bea,	// (0x0008c88a) vid4_indicators_pane_g3_ParamLimits

0x7bf7,	// (0x0008c897) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x00094602) vid4_indicators_pane_g_ParamLimits

0x7c0f,	// (0x0008c8af) vid4_indicators_pane_t1_ParamLimits

0xf082,	// (0x00093d22) vid4_progress_pane_g1_ParamLimits

0xf08e,	// (0x00093d2e) vid4_progress_pane_g2_ParamLimits

0xf09a,	// (0x00093d3a) vid4_progress_pane_g3_ParamLimits

0xf0a9,	// (0x00093d49) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x000947ad) vid4_progress_pane_g_ParamLimits

0xf0c7,	// (0x00093d67) vid4_progress_pane_t1_ParamLimits

0xf0dd,	// (0x00093d7d) vid4_progress_pane_t2_ParamLimits

0xf0f3,	// (0x00093d93) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x000947b8) vid4_progress_pane_t_ParamLimits

0xf108,	// (0x00093da8) wait_bar_pane_cp07_ParamLimits

0x90b3,	// (0x0008dd53) main_cam6_set_pane_g2_ParamLimits

0x90b3,	// (0x0008dd53) main_cam6_set_pane_g2

0x90d7,	// (0x0008dd77) main_cset6_listscroll_pane_ParamLimits

0x90d7,	// (0x0008dd77) main_cset6_listscroll_pane

0x90f7,	// (0x0008dd97) main_cset6_slider_pane_ParamLimits

0x90f7,	// (0x0008dd97) main_cset6_slider_pane

0x910d,	// (0x0008ddad) main_cset6_text2_pane_ParamLimits

0x910d,	// (0x0008ddad) main_cset6_text2_pane

0xda03,	// (0x000926a3) main_cset6_text_pane

0xda0b,	// (0x000926ab) main_cset_list_pane_copy1_ParamLimits

0xda0b,	// (0x000926ab) main_cset_list_pane_copy1

0xda1b,	// (0x000926bb) scroll_pane_cp028_copy1

0x911b,	// (0x0008ddbb) cset_list_set_pane_copy1

0x912c,	// (0x0008ddcc) aid_position_infowindow_above_copy1

0x9134,	// (0x0008ddd4) aid_position_infowindow_below_copy1

0x913c,	// (0x0008dddc) cset_list_set_pane_g1_copy1

0x9144,	// (0x0008dde4) cset_list_set_pane_g3_copy1_ParamLimits

0x9144,	// (0x0008dde4) cset_list_set_pane_g3_copy1

0x9153,	// (0x0008ddf3) cset_list_set_pane_t1_copy1_ParamLimits

0x9153,	// (0x0008ddf3) cset_list_set_pane_t1_copy1

0xaafa,	// (0x0008f79a) list_highlight_pane_cp021_copy1_ParamLimits

0xaafa,	// (0x0008f79a) list_highlight_pane_cp021_copy1

0xda24,	// (0x000926c4) cset6_slider_pane_ParamLimits

0xda24,	// (0x000926c4) cset6_slider_pane

0xda50,	// (0x000926f0) main_cset6_slider_pane_g1_ParamLimits

0xda50,	// (0x000926f0) main_cset6_slider_pane_g1

0x9168,	// (0x0008de08) main_cset6_slider_pane_g2_ParamLimits

0x9168,	// (0x0008de08) main_cset6_slider_pane_g2

0xda78,	// (0x00092718) main_cset6_slider_pane_g3_ParamLimits

0xda78,	// (0x00092718) main_cset6_slider_pane_g3

0x9190,	// (0x0008de30) main_cset6_slider_pane_g4_ParamLimits

0x9190,	// (0x0008de30) main_cset6_slider_pane_g4

0x919c,	// (0x0008de3c) main_cset6_slider_pane_g5_ParamLimits

0x919c,	// (0x0008de3c) main_cset6_slider_pane_g5

0xd1e2,	// (0x00091e82) main_cset6_slider_pane_g7_ParamLimits

0xd1e2,	// (0x00091e82) main_cset6_slider_pane_g7

0xd1ee,	// (0x00091e8e) main_cset6_slider_pane_g8_ParamLimits

0xd1ee,	// (0x00091e8e) main_cset6_slider_pane_g8

0x8294,	// (0x0008cf34) main_cset6_slider_pane_g9_ParamLimits

0x8294,	// (0x0008cf34) main_cset6_slider_pane_g9

0x82a0,	// (0x0008cf40) main_cset6_slider_pane_g10_ParamLimits

0x82a0,	// (0x0008cf40) main_cset6_slider_pane_g10

0x82ac,	// (0x0008cf4c) main_cset6_slider_pane_g11_ParamLimits

0x82ac,	// (0x0008cf4c) main_cset6_slider_pane_g11

0x82b8,	// (0x0008cf58) main_cset6_slider_pane_g12_ParamLimits

0x82b8,	// (0x0008cf58) main_cset6_slider_pane_g12

0x82c4,	// (0x0008cf64) main_cset6_slider_pane_g13_ParamLimits

0x82c4,	// (0x0008cf64) main_cset6_slider_pane_g13

0x82d0,	// (0x0008cf70) main_cset6_slider_pane_g14_ParamLimits

0x82d0,	// (0x0008cf70) main_cset6_slider_pane_g14

0x91a8,	// (0x0008de48) main_cset6_slider_pane_g15_ParamLimits

0x91a8,	// (0x0008de48) main_cset6_slider_pane_g15

0x82f4,	// (0x0008cf94) main_cset6_slider_pane_g16_ParamLimits

0x82f4,	// (0x0008cf94) main_cset6_slider_pane_g16

0x8300,	// (0x0008cfa0) main_cset6_slider_pane_g17_ParamLimits

0x8300,	// (0x0008cfa0) main_cset6_slider_pane_g17

0x0011,

0xfbe5,	// (0x00094885) main_cset6_slider_pane_g_ParamLimits

0xfbe5,	// (0x00094885) main_cset6_slider_pane_g

0xda84,	// (0x00092724) main_cset6_slider_pane_t1_ParamLimits

0xda84,	// (0x00092724) main_cset6_slider_pane_t1

0x91d8,	// (0x0008de78) main_cset6_slider_pane_t2_ParamLimits

0x91d8,	// (0x0008de78) main_cset6_slider_pane_t2

0x9203,	// (0x0008dea3) main_cset6_slider_pane_t3_ParamLimits

0x9203,	// (0x0008dea3) main_cset6_slider_pane_t3

0x922e,	// (0x0008dece) main_cset6_slider_pane_t4_ParamLimits

0x922e,	// (0x0008dece) main_cset6_slider_pane_t4

0x9259,	// (0x0008def9) main_cset6_slider_pane_t5_ParamLimits

0x9259,	// (0x0008def9) main_cset6_slider_pane_t5

0xdac5,	// (0x00092765) main_cset6_slider_pane_t7_ParamLimits

0xdac5,	// (0x00092765) main_cset6_slider_pane_t7

0x9284,	// (0x0008df24) main_cset6_slider_pane_t8_ParamLimits

0x9284,	// (0x0008df24) main_cset6_slider_pane_t8

0x92a8,	// (0x0008df48) main_cset6_slider_pane_t9_ParamLimits

0x92a8,	// (0x0008df48) main_cset6_slider_pane_t9

0x92cc,	// (0x0008df6c) main_cset6_slider_pane_t10_ParamLimits

0x92cc,	// (0x0008df6c) main_cset6_slider_pane_t10

0x92f0,	// (0x0008df90) main_cset6_slider_pane_t11_ParamLimits

0x92f0,	// (0x0008df90) main_cset6_slider_pane_t11

0xdafb,	// (0x0009279b) main_cset6_slider_pane_t14_ParamLimits

0xdafb,	// (0x0009279b) main_cset6_slider_pane_t14

0xdb34,	// (0x000927d4) main_cset6_slider_pane_t15_ParamLimits

0xdb34,	// (0x000927d4) main_cset6_slider_pane_t15

0x000b,

0xfc0a,	// (0x000948aa) main_cset6_slider_pane_t_ParamLimits

0xfc0a,	// (0x000948aa) main_cset6_slider_pane_t

0xdb6d,	// (0x0009280d) cset_slider_pane_g1_copy1

0xdb76,	// (0x00092816) cset_slider_pane_g2_copy1

0xdb7f,	// (0x0009281f) cset_slider_pane_g3_copy1

0x0771,	// (0x00085411) bg_popup_sub_pane_cp011_copy1

0xd362,	// (0x00092002) main_cset_text_pane_g1_copy1

0xd36a,	// (0x0009200a) main_cset_text_pane_t1_copy1

0xd378,	// (0x00092018) main_cset_text_pane_t2_copy1

0xd386,	// (0x00092026) main_cset_text_pane_t3_copy1

0xd394,	// (0x00092034) main_cset_text_pane_t4_copy1

0xd3a2,	// (0x00092042) main_cset_text_pane_t5_copy1

0xd3b0,	// (0x00092050) main_cset_text_pane_t6_copy1

0xd3be,	// (0x0009205e) main_cset_text_pane_t7_copy1

0x9314,	// (0x0008dfb4) main_cset_text2_pane_t1_copy1

0x0771,	// (0x00085411) main_ncimui_pane

0x598b,	// (0x0008a62b) popup_query_ncimui_window_ParamLimits

0x598b,	// (0x0008a62b) popup_query_ncimui_window

0xc8cc,	// (0x0009156c) field_cale_ev2_pane_g4_ParamLimits

0xc8cc,	// (0x0009156c) field_cale_ev2_pane_g4

0x750c,	// (0x0008c1ac) cell_video_dialer_keypad_pane_g2_ParamLimits

0x750c,	// (0x0008c1ac) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x00094597) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x00094597) cell_video_dialer_keypad_pane_g

0x7524,	// (0x0008c1c4) cell_video_dialer_keypad_pane_t1

0x0771,	// (0x00085411) bg_popup_window_pane_cp012

0xb3ca,	// (0x0009006a) heading_pane_cp06

0xdc77,	// (0x00092917) ncim_query_content_pane

0x0771,	// (0x00085411) bg_popup_heading_pane_cp01

0xdc7f,	// (0x0009291f) ncim_heading_pane_t1

0xdc8d,	// (0x0009292d) ncim_indicator_popup_pane

0xdc9f,	// (0x0009293f) ncim_query_button_pane

0xdcb3,	// (0x00092953) ncim_query_content_pane_t1

0xdcc5,	// (0x00092965) ncim_query_content_pane_t2

0x0005,

0xfc49,	// (0x000948e9) ncim_query_content_pane_t

0xdcff,	// (0x0009299f) ncim_query_list_pane

0xdd11,	// (0x000929b1) ncim_query_popup_pane

0xdc8d,	// (0x0009292d) ncim_indicator_popup_pane_ParamLimits

0x93f6,	// (0x0008e096) ncim_query_content_pane_g1_ParamLimits

0x93f6,	// (0x0008e096) ncim_query_content_pane_g1

0xdcb3,	// (0x00092953) ncim_query_content_pane_t1_ParamLimits

0xdcc5,	// (0x00092965) ncim_query_content_pane_t2_ParamLimits

0x9402,	// (0x0008e0a2) ncim_query_content_pane_t3_ParamLimits

0x9402,	// (0x0008e0a2) ncim_query_content_pane_t3

0x942a,	// (0x0008e0ca) ncim_query_content_pane_t4_ParamLimits

0x942a,	// (0x0008e0ca) ncim_query_content_pane_t4

0x9452,	// (0x0008e0f2) ncim_query_content_pane_t5_ParamLimits

0x9452,	// (0x0008e0f2) ncim_query_content_pane_t5

0xdcd7,	// (0x00092977) ncim_query_content_pane_t6_ParamLimits

0xdcd7,	// (0x00092977) ncim_query_content_pane_t6

0xfc49,	// (0x000948e9) ncim_query_content_pane_t_ParamLimits

0xdcff,	// (0x0009299f) ncim_query_list_pane_ParamLimits

0xdd11,	// (0x000929b1) ncim_query_popup_pane_ParamLimits

0xdd25,	// (0x000929c5) wait_bar_pane_cp04

0x0771,	// (0x00085411) input_focus_pane_cp011

0xdd2d,	// (0x000929cd) ncim_query_popup_pane_t1

0xdd3b,	// (0x000929db) ncim_list_query_list_pane_ParamLimits

0xdd3b,	// (0x000929db) ncim_list_query_list_pane

0x0771,	// (0x00085411) bg_button_pane_cp027

0xdd48,	// (0x000929e8) ncim_query_button_pane_g1

0x0771,	// (0x00085411) list_highlight_pane_cp012

0xdd52,	// (0x000929f2) ncim_list_query_list_pane_g1

0xdd5a,	// (0x000929fa) ncim_list_query_list_pane_t1

0x7af3,	// (0x0008c793) cam4_indicators_pane_g3_ParamLimits

0x7af3,	// (0x0008c793) cam4_indicators_pane_g3

0x7c03,	// (0x0008c8a3) vid4_indicators_pane_g5_ParamLimits

0x7c03,	// (0x0008c8a3) vid4_indicators_pane_g5

0xf0b8,	// (0x00093d58) vid4_progress_pane_g5_ParamLimits

0xf0b8,	// (0x00093d58) vid4_progress_pane_g5

0x933e,	// (0x0008dfde) main_ncimui_pane_g1

0x9384,	// (0x0008e024) ncimui_group_query_pane_ParamLimits

0x9384,	// (0x0008e024) ncimui_group_query_pane

0x93b8,	// (0x0008e058) ncimui_list_pane_ParamLimits

0x93b8,	// (0x0008e058) ncimui_list_pane

0x93d2,	// (0x0008e072) ncimui_text_pane_ParamLimits

0x93d2,	// (0x0008e072) ncimui_text_pane

0x947a,	// (0x0008e11a) ncimui_text_pane_t1_ParamLimits

0x947a,	// (0x0008e11a) ncimui_text_pane_t1

0xdd68,	// (0x00092a08) ncimui_list_single_graphic_pane_ParamLimits

0xdd68,	// (0x00092a08) ncimui_list_single_graphic_pane

0x9497,	// (0x0008e137) ncimui_query_pane_ParamLimits

0x9497,	// (0x0008e137) ncimui_query_pane

0x0771,	// (0x00085411) list_highlight_pane_cp013

0xdd78,	// (0x00092a18) ncim_list_query_list_pane_t1_copy1

0xdd52,	// (0x000929f2) ncim_list_single_graphic_pane_g1

0xdd86,	// (0x00092a26) ncim_query_button_pane_cp01

0xdd8e,	// (0x00092a2e) ncim_query_entry_pane_ParamLimits

0xdd8e,	// (0x00092a2e) ncim_query_entry_pane

0xdd9e,	// (0x00092a3e) ncimui_query_pane_g1

0xdda6,	// (0x00092a46) ncimui_query_pane_t1_ParamLimits

0xdda6,	// (0x00092a46) ncimui_query_pane_t1

0x0771,	// (0x00085411) input_focus_pane_cp012

0xdd2d,	// (0x000929cd) ncim_query_entry_pane_t1

0x2c64,	// (0x00087904) main_im_pane_ParamLimits

0xaafa,	// (0x0008f79a) main_mobtv_pane_ParamLimits

0xaafa,	// (0x0008f79a) main_mobtv_pane

0x91c0,	// (0x0008de60) main_cset6_slider_pane_g18_ParamLimits

0x91c0,	// (0x0008de60) main_cset6_slider_pane_g18

0x91cc,	// (0x0008de6c) main_cset6_slider_pane_g19_ParamLimits

0x91cc,	// (0x0008de6c) main_cset6_slider_pane_g19

0xddbc,	// (0x00092a5c) bg_main_mobtv_pane_ParamLimits

0xddbc,	// (0x00092a5c) bg_main_mobtv_pane

0x94a7,	// (0x0008e147) main_mobtv_info_pane

0x94b0,	// (0x0008e150) main_mobtv_loading_pane_ParamLimits

0x94b0,	// (0x0008e150) main_mobtv_loading_pane

0xddca,	// (0x00092a6a) main_mobtv_pg_channel_list_pane

0xddd4,	// (0x00092a74) main_mobtv_pg_hdr_pane

0x94bd,	// (0x0008e15d) main_mobtv_programe_curr_pane_ParamLimits

0x94bd,	// (0x0008e15d) main_mobtv_programe_curr_pane

0x94ca,	// (0x0008e16a) main_mobtv_programe_next_pane_ParamLimits

0x94ca,	// (0x0008e16a) main_mobtv_programe_next_pane

0xdddd,	// (0x00092a7d) popup_mobtv_noti_window

0x14d0,	// (0x00086170) main_tv_pg_hdr_pane_g1

0xdde5,	// (0x00092a85) main_tv_pg_hdr_pane_g2

0xdded,	// (0x00092a8d) main_tv_pg_hdr_pane_g3

0xddf5,	// (0x00092a95) main_tv_pg_hdr_pane_g4

0xddfd,	// (0x00092a9d) main_tv_pg_hdr_pane_g5

0xde07,	// (0x00092aa7) main_tv_pg_hdr_pane_g6

0xde11,	// (0x00092ab1) main_tv_pg_hdr_pane_g7

0xde1b,	// (0x00092abb) main_tv_pg_hdr_pane_g8

0xde25,	// (0x00092ac5) main_tv_pg_hdr_pane_g9

0xde2f,	// (0x00092acf) main_tv_pg_hdr_pane_g10

0xde39,	// (0x00092ad9) main_tv_pg_hdr_pane_g11

0x000a,

0xfc56,	// (0x000948f6) main_tv_pg_hdr_pane_g

0xde43,	// (0x00092ae3) main_tv_pg_hdr_pane_t1

0xde51,	// (0x00092af1) main_tv_pg_hdr_pane_t2

0xde5f,	// (0x00092aff) main_tv_pg_hdr_pane_t3

0xde6f,	// (0x00092b0f) main_tv_pg_hdr_pane_t4

0xde7f,	// (0x00092b1f) main_tv_pg_hdr_pane_t5

0x0004,

0xfc6d,	// (0x0009490d) main_tv_pg_hdr_pane_t

0xde8f,	// (0x00092b2f) single_mobtv_pg_channel_pane_ParamLimits

0xde8f,	// (0x00092b2f) single_mobtv_pg_channel_pane

0xdea1,	// (0x00092b41) single_mobtv_pg_channel_table_pane

0xdeaa,	// (0x00092b4a) single_mobtv_pg_channel_thumb_pane

0xdeb3,	// (0x00092b53) single_tv_pg_channel_pane_g1

0xdebc,	// (0x00092b5c) single_tv_pg_channel_pane_g2

0x0001,

0xfc78,	// (0x00094918) single_tv_pg_channel_pane_g

0xc867,	// (0x00091507) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc867,	// (0x00091507) bg_single_mobtv_pg_channel_thumb_pane

0xdec5,	// (0x00092b65) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdec5,	// (0x00092b65) single_mobtv_pg_channel_thumb_pane_g1

0xded3,	// (0x00092b73) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xded3,	// (0x00092b73) single_mobtv_pg_channel_thumb_pane_g2

0xdedf,	// (0x00092b7f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdedf,	// (0x00092b7f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc7d,	// (0x0009491d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc7d,	// (0x0009491d) single_mobtv_pg_channel_thumb_pane_g

0xdeeb,	// (0x00092b8b) single_mobtv_pg_channel_thumb_pane_t1

0xdef9,	// (0x00092b99) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc84,	// (0x00094924) single_mobtv_pg_channel_thumb_pane_t

0x14d0,	// (0x00086170) bg_single_mobtv_pg_channel_table_pane_g1

0x14d0,	// (0x00086170) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x000943e3) bg_single_mobtv_pg_channel_table_pane_g

0xdf07,	// (0x00092ba7) single_mobtv_pg_channel_table_pane_t1

0xdf15,	// (0x00092bb5) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc89,	// (0x00094929) single_mobtv_pg_channel_table_pane_t

0x94df,	// (0x0008e17f) main_mobtv_info_pane_g1_ParamLimits

0x94df,	// (0x0008e17f) main_mobtv_info_pane_g1

0x94fd,	// (0x0008e19d) main_mobtv_info_pane_t1_ParamLimits

0x94fd,	// (0x0008e19d) main_mobtv_info_pane_t1

0x9575,	// (0x0008e215) main_mobtv_info_pane_t2_ParamLimits

0x9575,	// (0x0008e215) main_mobtv_info_pane_t2

0x0002,

0xfc93,	// (0x00094933) main_mobtv_info_pane_t_ParamLimits

0xfc93,	// (0x00094933) main_mobtv_info_pane_t

0x9604,	// (0x0008e2a4) wait_bar_pane_cp05

0x9616,	// (0x0008e2b6) main_mobtv_loading_pane_g1_ParamLimits

0x9616,	// (0x0008e2b6) main_mobtv_loading_pane_g1

0x9629,	// (0x0008e2c9) main_mobtv_loading_pane_g2_ParamLimits

0x9629,	// (0x0008e2c9) main_mobtv_loading_pane_g2

0x9635,	// (0x0008e2d5) main_mobtv_loading_pane_g3_ParamLimits

0x9635,	// (0x0008e2d5) main_mobtv_loading_pane_g3

0x0002,

0xfc9a,	// (0x0009493a) main_mobtv_loading_pane_g_ParamLimits

0xfc9a,	// (0x0009493a) main_mobtv_loading_pane_g

0xdf23,	// (0x00092bc3) main_mobtv_loading_pane_t1_ParamLimits

0xdf23,	// (0x00092bc3) main_mobtv_loading_pane_t1

0xdf3b,	// (0x00092bdb) main_mobtv_loading_pane_t2_ParamLimits

0xdf3b,	// (0x00092bdb) main_mobtv_loading_pane_t2

0x0001,

0xfca1,	// (0x00094941) main_mobtv_loading_pane_t_ParamLimits

0xfca1,	// (0x00094941) main_mobtv_loading_pane_t

0x9648,	// (0x0008e2e8) wait_bar_pane_cp06_ParamLimits

0x9648,	// (0x0008e2e8) wait_bar_pane_cp06

0xdf5f,	// (0x00092bff) main_mobtv_programe_curr_pane_t1

0xdf6d,	// (0x00092c0d) main_mobtv_programe_curr_pane_t2

0x0001,

0xfca6,	// (0x00094946) main_mobtv_programe_curr_pane_t

0xdf7b,	// (0x00092c1b) main_mobtv_programe_next_pane_t1

0xdf89,	// (0x00092c29) main_mobtv_programe_next_pane_t2

0xdf97,	// (0x00092c37) main_mobtv_programe_next_pane_t3

0x0002,

0xfcab,	// (0x0009494b) main_mobtv_programe_next_pane_t

0x0771,	// (0x00085411) bg_popup_mobtv_noti_window_pane

0xdfa5,	// (0x00092c45) popup_mobtv_noti_window_g1

0xdfad,	// (0x00092c4d) popup_mobtv_noti_window_t1

0xdfbb,	// (0x00092c5b) popup_mobtv_noti_window_t2

0x0001,

0xfcb2,	// (0x00094952) popup_mobtv_noti_window_t

0x14d0,	// (0x00086170) bg_popup_mobtv_noti_window_pane_g1

0x0771,	// (0x00085411) sc_clock_pane

0x0771,	// (0x00085411) main_fs_bigclock_pane

0x8dcc,	// (0x0008da6c) blid2_tripm_pane_t4_ParamLimits

0x8dcc,	// (0x0008da6c) blid2_tripm_pane_t4

0x9657,	// (0x0008e2f7) sc_clock_pane_g1_ParamLimits

0x9657,	// (0x0008e2f7) sc_clock_pane_g1

0x9669,	// (0x0008e309) sc_clock_pane_t1_ParamLimits

0x9669,	// (0x0008e309) sc_clock_pane_t1

0x968b,	// (0x0008e32b) sc_clock_pane_t2_ParamLimits

0x968b,	// (0x0008e32b) sc_clock_pane_t2

0x96a3,	// (0x0008e343) sc_clock_pane_t3_ParamLimits

0x96a3,	// (0x0008e343) sc_clock_pane_t3

0x0004,

0xfcb7,	// (0x00094957) sc_clock_pane_t_ParamLimits

0xfcb7,	// (0x00094957) sc_clock_pane_t

0xa44e,	// (0x0008f0ee) main_fs_bigclock_indicator_pane_ParamLimits

0xa44e,	// (0x0008f0ee) main_fs_bigclock_indicator_pane

0xc837,	// (0x000914d7) main_fs_bigclock_pane_g1_ParamLimits

0xc837,	// (0x000914d7) main_fs_bigclock_pane_g1

0xa45a,	// (0x0008f0fa) main_fs_bigclock_pane_t1_ParamLimits

0xa45a,	// (0x0008f0fa) main_fs_bigclock_pane_t1

0xa46c,	// (0x0008f10c) main_fs_bigclock_pane_t2_ParamLimits

0xa46c,	// (0x0008f10c) main_fs_bigclock_pane_t2

0xa480,	// (0x0008f120) main_fs_bigclock_pane_t3_ParamLimits

0xa480,	// (0x0008f120) main_fs_bigclock_pane_t3

0x0002,

0xfeb6,	// (0x00094b56) main_fs_bigclock_pane_t_ParamLimits

0xfeb6,	// (0x00094b56) main_fs_bigclock_pane_t

0xebbf,	// (0x0009385f) main_fs_bigclock_indicator_pane_g1

0xdca7,	// (0x00092947) ncim_query_content_pane_g2_ParamLimits

0xdca7,	// (0x00092947) ncim_query_content_pane_g2

0x0001,

0xfc44,	// (0x000948e4) ncim_query_content_pane_g_ParamLimits

0xfc44,	// (0x000948e4) ncim_query_content_pane_g

0x96ba,	// (0x0008e35a) sc_clock_pane_t4_ParamLimits

0x96ba,	// (0x0008e35a) sc_clock_pane_t4

0xaafa,	// (0x0008f79a) main_radioblah_pane

0xcfca,	// (0x00091c6a) cell_call4_button_pane_t1_copy1_ParamLimits

0xcfca,	// (0x00091c6a) cell_call4_button_pane_t1_copy1

0x9346,	// (0x0008dfe6) main_ncimui_pane_t1_ParamLimits

0x9346,	// (0x0008dfe6) main_ncimui_pane_t1

0x9358,	// (0x0008dff8) main_ncimui_pane_t2_ParamLimits

0x9358,	// (0x0008dff8) main_ncimui_pane_t2

0x0002,

0xfc3d,	// (0x000948dd) main_ncimui_pane_t_ParamLimits

0xfc3d,	// (0x000948dd) main_ncimui_pane_t

0xe0e9,	// (0x00092d89) main_radioblah_anim_pane_ParamLimits

0xe0e9,	// (0x00092d89) main_radioblah_anim_pane

0xe0fa,	// (0x00092d9a) main_radioblah_info_pane_ParamLimits

0xe0fa,	// (0x00092d9a) main_radioblah_info_pane

0xe10e,	// (0x00092dae) main_radioblah_pane_t1_ParamLimits

0xe10e,	// (0x00092dae) main_radioblah_pane_t1

0xe12a,	// (0x00092dca) main_radioblah_pane_t2_ParamLimits

0xe12a,	// (0x00092dca) main_radioblah_pane_t2

0x0003,

0xfcd8,	// (0x00094978) main_radioblah_pane_t_ParamLimits

0xfcd8,	// (0x00094978) main_radioblah_pane_t

0x9763,	// (0x0008e403) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9763,	// (0x0008e403) main_radioblah_rocker_ctrl_pane

0xe172,	// (0x00092e12) main_radioblah_info_pane_t1_ParamLimits

0xe172,	// (0x00092e12) main_radioblah_info_pane_t1

0x97bb,	// (0x0008e45b) main_radioblah_info_pane_t2_ParamLimits

0x97bb,	// (0x0008e45b) main_radioblah_info_pane_t2

0x0003,

0xfce1,	// (0x00094981) main_radioblah_info_pane_t_ParamLimits

0xfce1,	// (0x00094981) main_radioblah_info_pane_t

0x14d0,	// (0x00086170) main_radioblah_rocker_ctrl_pane_g1

0x986b,	// (0x0008e50b) main_radioblah_rocker_ctrl_pane_g2

0x9873,	// (0x0008e513) main_radioblah_rocker_ctrl_pane_g3

0x987b,	// (0x0008e51b) main_radioblah_rocker_ctrl_pane_g4

0x9883,	// (0x0008e523) main_radioblah_rocker_ctrl_pane_g5

0x988b,	// (0x0008e52b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcea,	// (0x0009498a) main_radioblah_rocker_ctrl_pane_g

0x9314,	// (0x0008dfb4) main_cset_text2_pane_t1_copy1_ParamLimits

0xefaf,	// (0x00093c4f) cam4_image_uncrop_qvga_pane

0xefbf,	// (0x00093c5f) vid4_image_uncrop_qcif_pane

0xf118,	// (0x00093db8) cam6_image_uncrop_qvga_pane_ParamLimits

0xf118,	// (0x00093db8) cam6_image_uncrop_qvga_pane

0xd8e6,	// (0x00092586) vid6_image_uncrop_qcif_pane_ParamLimits

0xd8e6,	// (0x00092586) vid6_image_uncrop_qcif_pane

0x0771,	// (0x00085411) bg_popup_preview_window_pane_cp03

0xdc59,	// (0x000928f9) list_cset_text2_pane

0xdc61,	// (0x00092901) main_cset6_text2_pane_g1

0xdc69,	// (0x00092909) main_cset6_text2_pane_t1

0x9893,	// (0x0008e533) list_cset_text2_pane_t1_ParamLimits

0x9893,	// (0x0008e533) list_cset_text2_pane_t1

0xaafa,	// (0x0008f79a) main_radioblah_pane_ParamLimits

0x95f0,	// (0x0008e290) main_mobtv_info_pane_t3_ParamLimits

0x95f0,	// (0x0008e290) main_mobtv_info_pane_t3

0x9751,	// (0x0008e3f1) main_radioblah_pane_g1

0x978b,	// (0x0008e42b) main_radioblah_info_pane_g1

0x9810,	// (0x0008e4b0) main_radioblah_info_pane_t3_ParamLimits

0x9810,	// (0x0008e4b0) main_radioblah_info_pane_t3

0x4396,	// (0x00089036) highlight_cell_cale_month_pane_ParamLimits

0x4396,	// (0x00089036) highlight_cell_cale_month_pane

0x0771,	// (0x00085411) main_phob_fisheye_pane

0xc981,	// (0x00091621) scroll_pane_cp0031_ParamLimits

0xc981,	// (0x00091621) scroll_pane_cp0031

0xd9f4,	// (0x00092694) wait_bar_pane_cp08_ParamLimits

0x911b,	// (0x0008ddbb) cset_list_set_pane_copy1_ParamLimits

0xe1ac,	// (0x00092e4c) highlight_cell_cale_month_pane_g1

0x98ac,	// (0x0008e54c) highlight_cell_cale_month_pane_t1

0xd626,	// (0x000922c6) list_gen_pane_cp01

0xd1cd,	// (0x00091e6d) scroll_pane_01

0x98ba,	// (0x0008e55a) list_single_double_fisheye_pane

0x98c3,	// (0x0008e563) list_double_fisheye_pane_g1_ParamLimits

0x98c3,	// (0x0008e563) list_double_fisheye_pane_g1

0x98cf,	// (0x0008e56f) list_double_fisheye_pane_g2_ParamLimits

0x98cf,	// (0x0008e56f) list_double_fisheye_pane_g2

0x98e3,	// (0x0008e583) list_double_fisheye_pane_g3_ParamLimits

0x98e3,	// (0x0008e583) list_double_fisheye_pane_g3

0x0004,

0xfcf7,	// (0x00094997) list_double_fisheye_pane_g_ParamLimits

0xfcf7,	// (0x00094997) list_double_fisheye_pane_g

0x990c,	// (0x0008e5ac) list_double_fisheye_pane_t1_ParamLimits

0x990c,	// (0x0008e5ac) list_double_fisheye_pane_t1

0x9927,	// (0x0008e5c7) list_double_fisheye_pane_t2_ParamLimits

0x9927,	// (0x0008e5c7) list_double_fisheye_pane_t2

0x0001,

0xfd02,	// (0x000949a2) list_double_fisheye_pane_t_ParamLimits

0xfd02,	// (0x000949a2) list_double_fisheye_pane_t

0x0771,	// (0x00085411) main_call5_pane

0x96e5,	// (0x0008e385) sc_swipe_pane_ParamLimits

0x96e5,	// (0x0008e385) sc_swipe_pane

0x995c,	// (0x0008e5fc) call5_image_pane_ParamLimits

0x995c,	// (0x0008e5fc) call5_image_pane

0x9979,	// (0x0008e619) call5_swipe_1_pane_ParamLimits

0x9979,	// (0x0008e619) call5_swipe_1_pane

0x998c,	// (0x0008e62c) call5_swipe_2_pane_ParamLimits

0x998c,	// (0x0008e62c) call5_swipe_2_pane

0x99b7,	// (0x0008e657) popup_call5_audio_first_window_ParamLimits

0x99b7,	// (0x0008e657) popup_call5_audio_first_window

0xc867,	// (0x00091507) call5_swipe_1_pane_g1_ParamLimits

0xc867,	// (0x00091507) call5_swipe_1_pane_g1

0xe1b4,	// (0x00092e54) call5_swipe_1_pane_g2_ParamLimits

0xe1b4,	// (0x00092e54) call5_swipe_1_pane_g2

0x0001,

0xfd07,	// (0x000949a7) call5_swipe_1_pane_g_ParamLimits

0xfd07,	// (0x000949a7) call5_swipe_1_pane_g

0xe1c0,	// (0x00092e60) call5_swipe_1_pane_t1_ParamLimits

0xe1c0,	// (0x00092e60) call5_swipe_1_pane_t1

0xc867,	// (0x00091507) call5_swipe_2_pane_g1_ParamLimits

0xc867,	// (0x00091507) call5_swipe_2_pane_g1

0xe1d5,	// (0x00092e75) call5_swipe_2_pane_g2_ParamLimits

0xe1d5,	// (0x00092e75) call5_swipe_2_pane_g2

0x0001,

0xfd0c,	// (0x000949ac) call5_swipe_2_pane_g_ParamLimits

0xfd0c,	// (0x000949ac) call5_swipe_2_pane_g

0xe1e1,	// (0x00092e81) call5_swipe_2_pane_t1_ParamLimits

0xe1e1,	// (0x00092e81) call5_swipe_2_pane_t1

0xe1f6,	// (0x00092e96) sc_swipe_pane_g1_ParamLimits

0xe1f6,	// (0x00092e96) sc_swipe_pane_g1

0xe203,	// (0x00092ea3) sc_swipe_pane_g2_ParamLimits

0xe203,	// (0x00092ea3) sc_swipe_pane_g2

0x0001,

0xfd11,	// (0x000949b1) sc_swipe_pane_g_ParamLimits

0xfd11,	// (0x000949b1) sc_swipe_pane_g

0xe20f,	// (0x00092eaf) sc_swipe_pane_t1_ParamLimits

0xe20f,	// (0x00092eaf) sc_swipe_pane_t1

0x0771,	// (0x00085411) main_cmail_launcher_pane

0x99c8,	// (0x0008e668) aid_size_cell_cmail_l_ParamLimits

0x99c8,	// (0x0008e668) aid_size_cell_cmail_l

0x99e2,	// (0x0008e682) grid_cmail_l_pane_ParamLimits

0x99e2,	// (0x0008e682) grid_cmail_l_pane

0x99fd,	// (0x0008e69d) cell_cmail_l_pane_ParamLimits

0x99fd,	// (0x0008e69d) cell_cmail_l_pane

0x9a23,	// (0x0008e6c3) cell_cmail_l_pane_g1_ParamLimits

0x9a23,	// (0x0008e6c3) cell_cmail_l_pane_g1

0x9a2f,	// (0x0008e6cf) cell_cmail_l_pane_t1_ParamLimits

0x9a2f,	// (0x0008e6cf) cell_cmail_l_pane_t1

0xe224,	// (0x00092ec4) cell_cmail_l_pane_t2_ParamLimits

0xe224,	// (0x00092ec4) cell_cmail_l_pane_t2

0x0001,

0xfd16,	// (0x000949b6) cell_cmail_l_pane_t_ParamLimits

0xfd16,	// (0x000949b6) cell_cmail_l_pane_t

0xaafa,	// (0x0008f79a) grid_highlight_pane_cp018_ParamLimits

0xaafa,	// (0x0008f79a) grid_highlight_pane_cp018

0x2715,	// (0x000873b5) main2_pane_ParamLimits

0x2715,	// (0x000873b5) main2_pane

0x2e8c,	// (0x00087b2c) popup_sp_fs_action_menu_bg_pane_g1

0x2e94,	// (0x00087b34) popup_sp_fs_action_menu_bg_pane_g2

0x2e9c,	// (0x00087b3c) popup_sp_fs_action_menu_bg_pane_g3

0x2ea4,	// (0x00087b44) popup_sp_fs_action_menu_bg_pane_g4

0x2eac,	// (0x00087b4c) popup_sp_fs_action_menu_bg_pane_g5

0x2eb4,	// (0x00087b54) popup_sp_fs_action_menu_bg_pane_g6

0x2ebc,	// (0x00087b5c) popup_sp_fs_action_menu_bg_pane_g7

0x2ec4,	// (0x00087b64) popup_sp_fs_action_menu_bg_pane_g8

0x2ecc,	// (0x00087b6c) popup_sp_fs_action_menu_bg_pane_g9

0x2ed4,	// (0x00087b74) popup_sp_fs_action_menu_bg_pane_g10

0x2ed4,	// (0x00087b74) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x00093e8f) popup_sp_fs_action_menu_bg_pane_g

0x3777,	// (0x00088417) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3777,	// (0x00088417) list_medium_line_x2_t3_g3_g1

0x3783,	// (0x00088423) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3783,	// (0x00088423) list_medium_line_x2_t3_g3_g2

0x378f,	// (0x0008842f) list_medium_line_x2_t3_g3_g3_ParamLimits

0x378f,	// (0x0008842f) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x00093f3f) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x00093f3f) list_medium_line_x2_t3_g3_g

0x379b,	// (0x0008843b) list_medium_line_x2_t3_g3_t1_ParamLimits

0x379b,	// (0x0008843b) list_medium_line_x2_t3_g3_t1

0x37b0,	// (0x00088450) list_medium_line_x2_t3_g3_t2_ParamLimits

0x37b0,	// (0x00088450) list_medium_line_x2_t3_g3_t2

0x37c4,	// (0x00088464) list_medium_line_x2_t3_g3_t3_ParamLimits

0x37c4,	// (0x00088464) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x00093f46) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x00093f46) list_medium_line_x2_t3_g3_t

0x3777,	// (0x00088417) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3777,	// (0x00088417) list_medium_line_x2_t3_g2_g1

0x378f,	// (0x0008842f) list_medium_line_x2_t3_g2_g2_ParamLimits

0x378f,	// (0x0008842f) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x00093f4d) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x00093f4d) list_medium_line_x2_t3_g2_g

0x37d9,	// (0x00088479) list_medium_line_x2_t3_g2_t1_ParamLimits

0x37d9,	// (0x00088479) list_medium_line_x2_t3_g2_t1

0x37ef,	// (0x0008848f) list_medium_line_x2_t3_g2_t2_ParamLimits

0x37ef,	// (0x0008848f) list_medium_line_x2_t3_g2_t2

0x3801,	// (0x000884a1) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3801,	// (0x000884a1) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x00093f52) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x00093f52) list_medium_line_x2_t3_g2_t

0x3777,	// (0x00088417) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3777,	// (0x00088417) list_medium_line_x2_t4_g4_g1

0x381e,	// (0x000884be) list_medium_line_x2_t4_g4_g2_ParamLimits

0x381e,	// (0x000884be) list_medium_line_x2_t4_g4_g2

0x3783,	// (0x00088423) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3783,	// (0x00088423) list_medium_line_x2_t4_g4_g3

0x382a,	// (0x000884ca) list_medium_line_x2_t4_g4_g4_ParamLimits

0x382a,	// (0x000884ca) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x00093f59) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x00093f59) list_medium_line_x2_t4_g4_g

0x3836,	// (0x000884d6) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3836,	// (0x000884d6) list_medium_line_x2_t4_g4_t1

0x3850,	// (0x000884f0) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3850,	// (0x000884f0) list_medium_line_x2_t4_g4_t2

0x3866,	// (0x00088506) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3866,	// (0x00088506) list_medium_line_x2_t4_g4_t3

0xac0a,	// (0x0008f8aa) list_medium_line_x2_t4_g4_t4_ParamLimits

0xac0a,	// (0x0008f8aa) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x00093f62) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x00093f62) list_medium_line_x2_t4_g4_t

0x3777,	// (0x00088417) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3777,	// (0x00088417) list_medium_line_x2_t2_g4_g1

0x381e,	// (0x000884be) list_medium_line_x2_t2_g4_g2_ParamLimits

0x381e,	// (0x000884be) list_medium_line_x2_t2_g4_g2

0x3783,	// (0x00088423) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3783,	// (0x00088423) list_medium_line_x2_t2_g4_g3

0x378f,	// (0x0008842f) list_medium_line_x2_t2_g4_g4_ParamLimits

0x378f,	// (0x0008842f) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x00093fc9) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x00093fc9) list_medium_line_x2_t2_g4_g

0xaefa,	// (0x0008fb9a) list_medium_line_x2_t2_g4_t1_ParamLimits

0xaefa,	// (0x0008fb9a) list_medium_line_x2_t2_g4_t1

0x37c4,	// (0x00088464) list_medium_line_x2_t2_g4_t2_ParamLimits

0x37c4,	// (0x00088464) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x00093fd2) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x00093fd2) list_medium_line_x2_t2_g4_t

0x3777,	// (0x00088417) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3777,	// (0x00088417) list_medium_line_x2_t2_g3_g1

0x3783,	// (0x00088423) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3783,	// (0x00088423) list_medium_line_x2_t2_g3_g2

0x378f,	// (0x0008842f) list_medium_line_x2_t2_g3_g3_ParamLimits

0x378f,	// (0x0008842f) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x00093f3f) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x00093f3f) list_medium_line_x2_t2_g3_g

0xaf0f,	// (0x0008fbaf) list_medium_line_x2_t2_g3_t1_ParamLimits

0xaf0f,	// (0x0008fbaf) list_medium_line_x2_t2_g3_t1

0x37c4,	// (0x00088464) list_medium_line_x2_t2_g3_t2_ParamLimits

0x37c4,	// (0x00088464) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x00093fd7) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x00093fd7) list_medium_line_x2_t2_g3_t

0x44c5,	// (0x00089165) main_sp_fs_list_pane_ParamLimits

0x44c5,	// (0x00089165) main_sp_fs_list_pane

0x44d1,	// (0x00089171) sp_fs_scroll_pane_ParamLimits

0x44d1,	// (0x00089171) sp_fs_scroll_pane

0x44dd,	// (0x0008917d) list_medium_line_x2_t3_t1

0x44ed,	// (0x0008918d) list_medium_line_x2_t3_t2

0xb16b,	// (0x0008fe0b) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x00094022) list_medium_line_x2_t3_t

0x44fb,	// (0x0008919b) list_medium_line_x3_t4_t1

0x450b,	// (0x000891ab) list_medium_line_x3_t4_t2

0xb179,	// (0x0008fe19) list_medium_line_x3_t4_t3

0xb16b,	// (0x0008fe0b) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x00094029) list_medium_line_x3_t4_t

0x4519,	// (0x000891b9) list_medium_line_x4_t5_t1

0x4529,	// (0x000891c9) list_medium_line_x4_t5_t2

0xb179,	// (0x0008fe19) list_medium_line_x4_t5_t3

0xb187,	// (0x0008fe27) list_medium_line_x4_t5_t4

0xb16b,	// (0x0008fe0b) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x00094032) list_medium_line_x4_t5_t

0x3777,	// (0x00088417) list_medium_line_t4_g4_g1_ParamLimits

0x3777,	// (0x00088417) list_medium_line_t4_g4_g1

0x382a,	// (0x000884ca) list_medium_line_t4_g4_g2_ParamLimits

0x382a,	// (0x000884ca) list_medium_line_t4_g4_g2

0xb195,	// (0x0008fe35) list_medium_line_t4_g4_g3_ParamLimits

0xb195,	// (0x0008fe35) list_medium_line_t4_g4_g3

0x378f,	// (0x0008842f) list_medium_line_t4_g4_g4_ParamLimits

0x378f,	// (0x0008842f) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x0009403d) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x0009403d) list_medium_line_t4_g4_g

0xb1a1,	// (0x0008fe41) list_medium_line_t4_g4_t1_ParamLimits

0xb1a1,	// (0x0008fe41) list_medium_line_t4_g4_t1

0xb1b6,	// (0x0008fe56) list_medium_line_t4_g4_t2_ParamLimits

0xb1b6,	// (0x0008fe56) list_medium_line_t4_g4_t2

0xb1cb,	// (0x0008fe6b) list_medium_line_t4_g4_t3_ParamLimits

0xb1cb,	// (0x0008fe6b) list_medium_line_t4_g4_t3

0x37c4,	// (0x00088464) list_medium_line_t4_g4_t4_ParamLimits

0x37c4,	// (0x00088464) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x00094046) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x00094046) list_medium_line_t4_g4_t

0x45fa,	// (0x0008929a) chi_dic_find_pane_g1

0x575d,	// (0x0008a3fd) main_tport_pane

0xd2f3,	// (0x00091f93) list_medium_line_plain_t1

0xd309,	// (0x00091fa9) list_medium_line_t2_g2_g1_ParamLimits

0xd309,	// (0x00091fa9) list_medium_line_t2_g2_g1

0xd315,	// (0x00091fb5) list_medium_line_t2_g2_g2_ParamLimits

0xd315,	// (0x00091fb5) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x000946f9) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x000946f9) list_medium_line_t2_g2_g

0x864a,	// (0x0008d2ea) list_medium_line_t2_g2_t1_ParamLimits

0x864a,	// (0x0008d2ea) list_medium_line_t2_g2_t1

0x8664,	// (0x0008d304) list_medium_line_t2_g2_t2_ParamLimits

0x8664,	// (0x0008d304) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x000946fe) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x000946fe) list_medium_line_t2_g2_t

0xd62f,	// (0x000922cf) aid_sp_fs_list_icon_a_sm

0xd637,	// (0x000922d7) aid_sp_fs_list_icon_d

0xd63f,	// (0x000922df) aid_sp_fs_text_primary

0xd648,	// (0x000922e8) aid_sp_fs_text_secondary

0xd651,	// (0x000922f1) list_medium_line

0xd651,	// (0x000922f1) list_medium_line_g2

0xd651,	// (0x000922f1) list_medium_line_g3

0xd651,	// (0x000922f1) list_medium_line_plain

0xd651,	// (0x000922f1) list_medium_line_plain_t2

0xd651,	// (0x000922f1) list_medium_line_plain_t3

0xd651,	// (0x000922f1) list_medium_line_right_icon

0xd651,	// (0x000922f1) list_medium_line_right_iconx2

0xd651,	// (0x000922f1) list_medium_line_t2

0xd651,	// (0x000922f1) list_medium_line_t2_g2

0xd651,	// (0x000922f1) list_medium_line_t2_g3

0xd651,	// (0x000922f1) list_medium_line_t2_right_icon

0xd651,	// (0x000922f1) list_medium_line_t2_right_iconx2

0xd651,	// (0x000922f1) list_medium_line_t3

0xd651,	// (0x000922f1) list_medium_line_t3_g2

0xd651,	// (0x000922f1) list_medium_line_t3_g3

0xd651,	// (0x000922f1) list_medium_line_t3_right_iconx2

0xd65a,	// (0x000922fa) list_medium_line_t4_g4

0xd663,	// (0x00092303) list_medium_line_x2

0xd663,	// (0x00092303) list_medium_line_x2_t2_g2

0xd663,	// (0x00092303) list_medium_line_x2_t2_g3

0xd663,	// (0x00092303) list_medium_line_x2_t2_g4

0xd663,	// (0x00092303) list_medium_line_x2_t3

0xd663,	// (0x00092303) list_medium_line_x2_t3_g2

0xd663,	// (0x00092303) list_medium_line_x2_t3_g3

0xd663,	// (0x00092303) list_medium_line_x2_t3_g4

0xd663,	// (0x00092303) list_medium_line_x2_t4_g2

0xd663,	// (0x00092303) list_medium_line_x2_t4_g4

0xd66c,	// (0x0009230c) list_medium_line_x3

0xd66c,	// (0x0009230c) list_medium_line_x3_t4

0xd66c,	// (0x0009230c) list_medium_line_x3_t4_g4

0xd65a,	// (0x000922fa) list_medium_line_x4_t4

0xd65a,	// (0x000922fa) list_medium_line_x4_t4_g7

0xd65a,	// (0x000922fa) list_medium_line_x4_t5

0xd675,	// (0x00092315) list_single_fs_dyc_pane_ParamLimits

0xd675,	// (0x00092315) list_single_fs_dyc_pane

0x3777,	// (0x00088417) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3777,	// (0x00088417) list_medium_line_x4_t4_g7_g1

0xdb88,	// (0x00092828) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdb88,	// (0x00092828) list_medium_line_x4_t4_g7_g2

0xdb94,	// (0x00092834) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdb94,	// (0x00092834) list_medium_line_x4_t4_g7_g3

0xdba3,	// (0x00092843) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdba3,	// (0x00092843) list_medium_line_x4_t4_g7_g4

0xdbaf,	// (0x0009284f) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdbaf,	// (0x0009284f) list_medium_line_x4_t4_g7_g5

0xdbbe,	// (0x0009285e) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdbbe,	// (0x0009285e) list_medium_line_x4_t4_g7_g6

0xdbcd,	// (0x0009286d) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdbcd,	// (0x0009286d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc23,	// (0x000948c3) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc23,	// (0x000948c3) list_medium_line_x4_t4_g7_g

0xdbd9,	// (0x00092879) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdbd9,	// (0x00092879) list_medium_line_x4_t4_g7_t1

0xdbee,	// (0x0009288e) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdbee,	// (0x0009288e) list_medium_line_x4_t4_g7_t2

0xdc03,	// (0x000928a3) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdc03,	// (0x000928a3) list_medium_line_x4_t4_g7_t3

0xdc18,	// (0x000928b8) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdc18,	// (0x000928b8) list_medium_line_x4_t4_g7_t4

0xdc2a,	// (0x000928ca) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdc2a,	// (0x000928ca) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc32,	// (0x000948d2) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc32,	// (0x000948d2) list_medium_line_x4_t4_g7_t

0xdc3c,	// (0x000928dc) list_single_dyc_row_pane_ParamLimits

0xdc3c,	// (0x000928dc) list_single_dyc_row_pane

0x9949,	// (0x0008e5e9) call5_gesture_pane_ParamLimits

0x9949,	// (0x0008e5e9) call5_gesture_pane

0x999f,	// (0x0008e63f) call5_windows_pane_ParamLimits

0x999f,	// (0x0008e63f) call5_windows_pane

0x9a45,	// (0x0008e6e5) call5_swipe_1_pane_cp_ParamLimits

0x9a45,	// (0x0008e6e5) call5_swipe_1_pane_cp

0x9a51,	// (0x0008e6f1) call5_swipe_2_pane_cp_ParamLimits

0x9a51,	// (0x0008e6f1) call5_swipe_2_pane_cp

0xb636,	// (0x000902d6) call5_image_pane_cp

0x9a5d,	// (0x0008e6fd) popup_call5_audio_first_window_cp_ParamLimits

0x9a5d,	// (0x0008e6fd) popup_call5_audio_first_window_cp

0xe1f6,	// (0x00092e96) call5_swipe_1_pane_g1_cp_ParamLimits

0xe1f6,	// (0x00092e96) call5_swipe_1_pane_g1_cp

0xe236,	// (0x00092ed6) call5_swipe_1_pane_g2_cp

0xe20f,	// (0x00092eaf) call5_swipe_1_pane_t1_cp_ParamLimits

0xe20f,	// (0x00092eaf) call5_swipe_1_pane_t1_cp

0xe1f6,	// (0x00092e96) call5_swipe_2_pane_g1_cp_ParamLimits

0xe1f6,	// (0x00092e96) call5_swipe_2_pane_g1_cp

0xe23e,	// (0x00092ede) call5_swipe_2_pane_g2_cp

0xe246,	// (0x00092ee6) call5_swipe_2_pane_t1_cp_ParamLimits

0xe246,	// (0x00092ee6) call5_swipe_2_pane_t1_cp

0xaafa,	// (0x0008f79a) main_sp_fs_email_pane

0xe25b,	// (0x00092efb) main_sp_fs_listscroll_pane_te

0xe264,	// (0x00092f04) popup_sp_fs_action_menu_pane_ParamLimits

0xe264,	// (0x00092f04) popup_sp_fs_action_menu_pane

0x14d0,	// (0x00086170) bg_sp_fs_ctrlbar_pane_g1

0xe2a8,	// (0x00092f48) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2b1,	// (0x00092f51) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe2ba,	// (0x00092f5a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x14d0,	// (0x00086170) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd1b,	// (0x000949bb) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x12b5,	// (0x00085f55) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x12b5,	// (0x00085f55) bg_sp_fs_ctrlbar_ddmenu_pane

0xe2c3,	// (0x00092f63) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe2c3,	// (0x00092f63) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2cf,	// (0x00092f6f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe2cf,	// (0x00092f6f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd24,	// (0x000949c4) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd24,	// (0x000949c4) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe2db,	// (0x00092f7b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe2db,	// (0x00092f7b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe2f5,	// (0x00092f95) list_medium_line_t2_right_icon_g1

0x9a6b,	// (0x0008e70b) list_medium_line_t2_right_icon_t1

0x9a7b,	// (0x0008e71b) list_medium_line_t2_right_icon_t2

0x0001,

0xfd29,	// (0x000949c9) list_medium_line_t2_right_icon_t

0x1089,	// (0x00085d29) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1089,	// (0x00085d29) bg_sp_fs_ctrlbar_pane

0x9ad1,	// (0x0008e771) main_sp_fs_ctrlbar_button_pane_cp01

0x9ad9,	// (0x0008e779) main_sp_fs_ctrlbar_ddmenu_pane

0xe335,	// (0x00092fd5) main_sp_fs_ctrlbar_pane_g1

0xe341,	// (0x00092fe1) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd2e,	// (0x000949ce) main_sp_fs_ctrlbar_pane_g

0xe34d,	// (0x00092fed) main_sp_fs_ctrlbar_pane_t1

0x9ae3,	// (0x0008e783) main_sp_fs_ctrlbar_pane

0x9b07,	// (0x0008e7a7) main_sp_fs_listscroll_pane_te_cp01

0x9b27,	// (0x0008e7c7) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9b27,	// (0x0008e7c7) popup_sp_fs_action_menu_pane_cp01

0xaafa,	// (0x0008f79a) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xaafa,	// (0x0008f79a) bg_sp_fs_highlight_list_pane_cp01

0xe362,	// (0x00093002) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe362,	// (0x00093002) sp_fs_action_menu_list_gene_pane_g1

0xe371,	// (0x00093011) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe371,	// (0x00093011) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd33,	// (0x000949d3) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd33,	// (0x000949d3) sp_fs_action_menu_list_gene_pane_g

0xe37e,	// (0x0009301e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe37e,	// (0x0009301e) sp_fs_action_menu_list_gene_pane_t1

0xe396,	// (0x00093036) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe396,	// (0x00093036) sp_fs_action_menu_list_gene_pane

0xe3b7,	// (0x00093057) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe3b7,	// (0x00093057) popup_sp_fs_action_menu_bg_pane

0xe3c5,	// (0x00093065) sp_fs_action_menu_list_pane_ParamLimits

0xe3c5,	// (0x00093065) sp_fs_action_menu_list_pane

0xe3e7,	// (0x00093087) sp_fs_scroll_pane_cp01_ParamLimits

0xe3e7,	// (0x00093087) sp_fs_scroll_pane_cp01

0x9b43,	// (0x0008e7e3) list_medium_line_plain_t2_t1

0x9b53,	// (0x0008e7f3) list_medium_line_plain_t2_t2

0x0001,

0xfd38,	// (0x000949d8) list_medium_line_plain_t2_t

0x9b63,	// (0x0008e803) list_medium_line_plain_t3_t1

0x9b73,	// (0x0008e813) list_medium_line_plain_t3_t2

0x9b81,	// (0x0008e821) list_medium_line_plain_t3_t3

0x0002,

0xfd3d,	// (0x000949dd) list_medium_line_plain_t3_t

0x3777,	// (0x00088417) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3777,	// (0x00088417) list_medium_line_x2_t2_g2_g1

0x378f,	// (0x0008842f) list_medium_line_x2_t2_g2_g2_ParamLimits

0x378f,	// (0x0008842f) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x00093f4d) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x00093f4d) list_medium_line_x2_t2_g2_g

0xb1a1,	// (0x0008fe41) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb1a1,	// (0x0008fe41) list_medium_line_x2_t2_g2_t1

0x37c4,	// (0x00088464) list_medium_line_x2_t2_g2_t2_ParamLimits

0x37c4,	// (0x00088464) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd44,	// (0x000949e4) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd44,	// (0x000949e4) list_medium_line_x2_t2_g2_t

0x3777,	// (0x00088417) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3777,	// (0x00088417) list_medium_line_x2_t4_g2_g1

0xe40d,	// (0x000930ad) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe40d,	// (0x000930ad) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd49,	// (0x000949e9) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd49,	// (0x000949e9) list_medium_line_x2_t4_g2_g

0x9b8f,	// (0x0008e82f) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9b8f,	// (0x0008e82f) list_medium_line_x2_t4_g2_t1

0x9ba9,	// (0x0008e849) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9ba9,	// (0x0008e849) list_medium_line_x2_t4_g2_t2

0x9bbe,	// (0x0008e85e) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9bbe,	// (0x0008e85e) list_medium_line_x2_t4_g2_t3

0x37c4,	// (0x00088464) list_medium_line_x2_t4_g2_t4_ParamLimits

0x37c4,	// (0x00088464) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd4e,	// (0x000949ee) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd4e,	// (0x000949ee) list_medium_line_x2_t4_g2_t

0xe41f,	// (0x000930bf) list_medium_line_t3_right_iconx2_g1

0xe2f5,	// (0x00092f95) list_medium_line_t3_right_iconx2_g2

0x9bd3,	// (0x0008e873) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd57,	// (0x000949f7) list_medium_line_t3_right_iconx2_g

0x9bdd,	// (0x0008e87d) list_medium_line_t3_right_iconx2_t1

0x9bed,	// (0x0008e88d) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd5e,	// (0x000949fe) list_medium_line_t3_right_iconx2_t

0x3777,	// (0x00088417) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3777,	// (0x00088417) list_medium_line_x3_t4_g4_g1

0x3783,	// (0x00088423) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3783,	// (0x00088423) list_medium_line_x3_t4_g4_g2

0x382a,	// (0x000884ca) list_medium_line_x3_t4_g4_g3_ParamLimits

0x382a,	// (0x000884ca) list_medium_line_x3_t4_g4_g3

0xe427,	// (0x000930c7) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe427,	// (0x000930c7) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd63,	// (0x00094a03) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd63,	// (0x00094a03) list_medium_line_x3_t4_g4_g

0x9bfb,	// (0x0008e89b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9bfb,	// (0x0008e89b) list_medium_line_x3_t4_g4_t1

0x9c12,	// (0x0008e8b2) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9c12,	// (0x0008e8b2) list_medium_line_x3_t4_g4_t2

0xb1b6,	// (0x0008fe56) list_medium_line_x3_t4_g4_t3_ParamLimits

0xb1b6,	// (0x0008fe56) list_medium_line_x3_t4_g4_t3

0xe433,	// (0x000930d3) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe433,	// (0x000930d3) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd6c,	// (0x00094a0c) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd6c,	// (0x00094a0c) list_medium_line_x3_t4_g4_t

0x9c2b,	// (0x0008e8cb) list_single_dyc_row_text_pane_t1_ParamLimits

0x9c2b,	// (0x0008e8cb) list_single_dyc_row_text_pane_t1

0x9c74,	// (0x0008e914) list_single_dyc_row_text_pane_t2_ParamLimits

0x9c74,	// (0x0008e914) list_single_dyc_row_text_pane_t2

0xe450,	// (0x000930f0) list_single_dyc_row_text_pane_t3_ParamLimits

0xe450,	// (0x000930f0) list_single_dyc_row_text_pane_t3

0x0002,

0xfd75,	// (0x00094a15) list_single_dyc_row_text_pane_t_ParamLimits

0xfd75,	// (0x00094a15) list_single_dyc_row_text_pane_t

0xe462,	// (0x00093102) list_single_dyc_row_pane_g1_ParamLimits

0xe462,	// (0x00093102) list_single_dyc_row_pane_g1

0xe46e,	// (0x0009310e) list_single_dyc_row_pane_g2_ParamLimits

0xe46e,	// (0x0009310e) list_single_dyc_row_pane_g2

0xe47a,	// (0x0009311a) list_single_dyc_row_pane_g3_ParamLimits

0xe47a,	// (0x0009311a) list_single_dyc_row_pane_g3

0xe486,	// (0x00093126) list_single_dyc_row_pane_g4_ParamLimits

0xe486,	// (0x00093126) list_single_dyc_row_pane_g4

0x0003,

0xfd7c,	// (0x00094a1c) list_single_dyc_row_pane_g_ParamLimits

0xfd7c,	// (0x00094a1c) list_single_dyc_row_pane_g

0xe492,	// (0x00093132) list_single_dyc_row_text_pane_ParamLimits

0xe492,	// (0x00093132) list_single_dyc_row_text_pane

0x0771,	// (0x00085411) bg_sp_fs_scroll_pane

0xe4b1,	// (0x00093151) thumb_sp_fs_scroll_pane

0xd309,	// (0x00091fa9) list_medium_line_g1_ParamLimits

0xd309,	// (0x00091fa9) list_medium_line_g1

0xe4ba,	// (0x0009315a) list_medium_line_t1_ParamLimits

0xe4ba,	// (0x0009315a) list_medium_line_t1

0x3777,	// (0x00088417) list_medium_line_x2_g1_ParamLimits

0x3777,	// (0x00088417) list_medium_line_x2_g1

0x3783,	// (0x00088423) list_medium_line_x2_g2_ParamLimits

0x3783,	// (0x00088423) list_medium_line_x2_g2

0x0001,

0xfd85,	// (0x00094a25) list_medium_line_x2_g_ParamLimits

0xfd85,	// (0x00094a25) list_medium_line_x2_g

0xe4cf,	// (0x0009316f) list_medium_line_x2_t1_ParamLimits

0xe4cf,	// (0x0009316f) list_medium_line_x2_t1

0x3777,	// (0x00088417) list_medium_line_x3_g1_ParamLimits

0x3777,	// (0x00088417) list_medium_line_x3_g1

0x3783,	// (0x00088423) list_medium_line_x3_g2_ParamLimits

0x3783,	// (0x00088423) list_medium_line_x3_g2

0x0001,

0xfd85,	// (0x00094a25) list_medium_line_x3_g_ParamLimits

0xfd85,	// (0x00094a25) list_medium_line_x3_g

0xe4cf,	// (0x0009316f) list_medium_line_x3_t1_ParamLimits

0xe4cf,	// (0x0009316f) list_medium_line_x3_t1

0xe4e5,	// (0x00093185) thumb_sp_fs_scroll_pane_g1

0xe4ee,	// (0x0009318e) thumb_sp_fs_scroll_pane_g2

0xe4f7,	// (0x00093197) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x00094a2a) thumb_sp_fs_scroll_pane_g

0xe4e5,	// (0x00093185) bg_sp_fs_scroll_pane_g1

0xe4ee,	// (0x0009318e) bg_sp_fs_scroll_pane_g2

0xe4f7,	// (0x00093197) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x00094a2a) bg_sp_fs_scroll_pane_g

0x3777,	// (0x00088417) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3777,	// (0x00088417) list_medium_line_x2_t3_g4_g1

0x381e,	// (0x000884be) list_medium_line_x2_t3_g4_g2_ParamLimits

0x381e,	// (0x000884be) list_medium_line_x2_t3_g4_g2

0x3783,	// (0x00088423) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3783,	// (0x00088423) list_medium_line_x2_t3_g4_g3

0x378f,	// (0x0008842f) list_medium_line_x2_t3_g4_g4_ParamLimits

0x378f,	// (0x0008842f) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x00093fc9) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x00093fc9) list_medium_line_x2_t3_g4_g

0x9cce,	// (0x0008e96e) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9cce,	// (0x0008e96e) list_medium_line_x2_t3_g4_t1

0x9ce4,	// (0x0008e984) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9ce4,	// (0x0008e984) list_medium_line_x2_t3_g4_t2

0x37c4,	// (0x00088464) list_medium_line_x2_t3_g4_t3_ParamLimits

0x37c4,	// (0x00088464) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd91,	// (0x00094a31) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd91,	// (0x00094a31) list_medium_line_x2_t3_g4_t

0xd309,	// (0x00091fa9) list_medium_line_g2_g1_ParamLimits

0xd309,	// (0x00091fa9) list_medium_line_g2_g1

0xd315,	// (0x00091fb5) list_medium_line_g2_g2_ParamLimits

0xd315,	// (0x00091fb5) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x000946f9) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x000946f9) list_medium_line_g2_g

0xe500,	// (0x000931a0) list_medium_line_g2_t1_ParamLimits

0xe500,	// (0x000931a0) list_medium_line_g2_t1

0xd309,	// (0x00091fa9) list_medium_line_t3_g2_g1_ParamLimits

0xd309,	// (0x00091fa9) list_medium_line_t3_g2_g1

0xd315,	// (0x00091fb5) list_medium_line_t3_g2_g2_ParamLimits

0xd315,	// (0x00091fb5) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x000946f9) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x000946f9) list_medium_line_t3_g2_g

0x9cfe,	// (0x0008e99e) list_medium_line_t3_g2_t1_ParamLimits

0x9cfe,	// (0x0008e99e) list_medium_line_t3_g2_t1

0x9d15,	// (0x0008e9b5) list_medium_line_t3_g2_t2_ParamLimits

0x9d15,	// (0x0008e9b5) list_medium_line_t3_g2_t2

0x9d2a,	// (0x0008e9ca) list_medium_line_t3_g2_t3_ParamLimits

0x9d2a,	// (0x0008e9ca) list_medium_line_t3_g2_t3

0x0002,

0xfd98,	// (0x00094a38) list_medium_line_t3_g2_t_ParamLimits

0xfd98,	// (0x00094a38) list_medium_line_t3_g2_t

0xe2f5,	// (0x00092f95) list_medium_line_right_icon_g1

0xe515,	// (0x000931b5) list_medium_line_right_icon_t1

0xd309,	// (0x00091fa9) list_medium_line_t2_g1_ParamLimits

0xd309,	// (0x00091fa9) list_medium_line_t2_g1

0x9d43,	// (0x0008e9e3) list_medium_line_t2_t1_ParamLimits

0x9d43,	// (0x0008e9e3) list_medium_line_t2_t1

0x9d5d,	// (0x0008e9fd) list_medium_line_t2_t2_ParamLimits

0x9d5d,	// (0x0008e9fd) list_medium_line_t2_t2

0x0001,

0xfd9f,	// (0x00094a3f) list_medium_line_t2_t_ParamLimits

0xfd9f,	// (0x00094a3f) list_medium_line_t2_t

0xd309,	// (0x00091fa9) list_medium_line_t3_g1_ParamLimits

0xd309,	// (0x00091fa9) list_medium_line_t3_g1

0x9d72,	// (0x0008ea12) list_medium_line_t3_t1_ParamLimits

0x9d72,	// (0x0008ea12) list_medium_line_t3_t1

0x9d8c,	// (0x0008ea2c) list_medium_line_t3_t2_ParamLimits

0x9d8c,	// (0x0008ea2c) list_medium_line_t3_t2

0x9da1,	// (0x0008ea41) list_medium_line_t3_t3_ParamLimits

0x9da1,	// (0x0008ea41) list_medium_line_t3_t3

0x0002,

0xfda4,	// (0x00094a44) list_medium_line_t3_t_ParamLimits

0xfda4,	// (0x00094a44) list_medium_line_t3_t

0xd309,	// (0x00091fa9) list_medium_line_g3_g1_ParamLimits

0xd309,	// (0x00091fa9) list_medium_line_g3_g1

0xe523,	// (0x000931c3) list_medium_line_g3_g2_ParamLimits

0xe523,	// (0x000931c3) list_medium_line_g3_g2

0xd315,	// (0x00091fb5) list_medium_line_g3_g3_ParamLimits

0xd315,	// (0x00091fb5) list_medium_line_g3_g3

0x0002,

0xfdab,	// (0x00094a4b) list_medium_line_g3_g_ParamLimits

0xfdab,	// (0x00094a4b) list_medium_line_g3_g

0xe52f,	// (0x000931cf) list_medium_line_g3_t1_ParamLimits

0xe52f,	// (0x000931cf) list_medium_line_g3_t1

0xd309,	// (0x00091fa9) list_medium_line_t2_g3_g1_ParamLimits

0xd309,	// (0x00091fa9) list_medium_line_t2_g3_g1

0xe523,	// (0x000931c3) list_medium_line_t2_g3_g2_ParamLimits

0xe523,	// (0x000931c3) list_medium_line_t2_g3_g2

0xd315,	// (0x00091fb5) list_medium_line_t2_g3_g3_ParamLimits

0xd315,	// (0x00091fb5) list_medium_line_t2_g3_g3

0x0002,

0xfdab,	// (0x00094a4b) list_medium_line_t2_g3_g_ParamLimits

0xfdab,	// (0x00094a4b) list_medium_line_t2_g3_g

0x9db6,	// (0x0008ea56) list_medium_line_t2_g3_t1_ParamLimits

0x9db6,	// (0x0008ea56) list_medium_line_t2_g3_t1

0x9dd0,	// (0x0008ea70) list_medium_line_t2_g3_t2_ParamLimits

0x9dd0,	// (0x0008ea70) list_medium_line_t2_g3_t2

0x0001,

0xfdb2,	// (0x00094a52) list_medium_line_t2_g3_t_ParamLimits

0xfdb2,	// (0x00094a52) list_medium_line_t2_g3_t

0xd309,	// (0x00091fa9) list_medium_line_t3_g3_g1_ParamLimits

0xd309,	// (0x00091fa9) list_medium_line_t3_g3_g1

0xe523,	// (0x000931c3) list_medium_line_t3_g3_g2_ParamLimits

0xe523,	// (0x000931c3) list_medium_line_t3_g3_g2

0xd315,	// (0x00091fb5) list_medium_line_t3_g3_g3_ParamLimits

0xd315,	// (0x00091fb5) list_medium_line_t3_g3_g3

0x0002,

0xfdab,	// (0x00094a4b) list_medium_line_t3_g3_g_ParamLimits

0xfdab,	// (0x00094a4b) list_medium_line_t3_g3_g

0x9de7,	// (0x0008ea87) list_medium_line_t3_g3_t1_ParamLimits

0x9de7,	// (0x0008ea87) list_medium_line_t3_g3_t1

0x9dfb,	// (0x0008ea9b) list_medium_line_t3_g3_t2_ParamLimits

0x9dfb,	// (0x0008ea9b) list_medium_line_t3_g3_t2

0x9e0d,	// (0x0008eaad) list_medium_line_t3_g3_t3_ParamLimits

0x9e0d,	// (0x0008eaad) list_medium_line_t3_g3_t3

0x0002,

0xfdb7,	// (0x00094a57) list_medium_line_t3_g3_t_ParamLimits

0xfdb7,	// (0x00094a57) list_medium_line_t3_g3_t

0xe41f,	// (0x000930bf) list_medium_line_right_iconx2_g1

0xe2f5,	// (0x00092f95) list_medium_line_right_iconx2_g2

0x0001,

0xfdbe,	// (0x00094a5e) list_medium_line_right_iconx2_g

0xe544,	// (0x000931e4) list_medium_line_right_iconx2_t1

0xe41f,	// (0x000930bf) list_medium_line_t2_right_iconx2_g1

0xe2f5,	// (0x00092f95) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdbe,	// (0x00094a5e) list_medium_line_t2_right_iconx2_g

0x9e21,	// (0x0008eac1) list_medium_line_t2_right_iconx2_t1

0x9e31,	// (0x0008ead1) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdc3,	// (0x00094a63) list_medium_line_t2_right_iconx2_t

0xe552,	// (0x000931f2) list_medium_line_x4_t4_t1

0x9e3f,	// (0x0008eadf) list_medium_line_x4_t4_t2

0x9e4f,	// (0x0008eaef) list_medium_line_x4_t4_t3

0x9e5f,	// (0x0008eaff) list_medium_line_x4_t4_t4

0x0003,

0xfdc8,	// (0x00094a68) list_medium_line_x4_t4_t

0x9eb2,	// (0x0008eb52) tport_appsw_pane_ParamLimits

0x9eb2,	// (0x0008eb52) tport_appsw_pane

0x9ec3,	// (0x0008eb63) tport_contact_pane_ParamLimits

0x9ec3,	// (0x0008eb63) tport_contact_pane

0x9edc,	// (0x0008eb7c) tport_listscroll_pane_ParamLimits

0x9edc,	// (0x0008eb7c) tport_listscroll_pane

0x9ef7,	// (0x0008eb97) cell_tport_appsw_pane_ParamLimits

0x9ef7,	// (0x0008eb97) cell_tport_appsw_pane

0xd059,	// (0x00091cf9) tport_appsw_pane_g1_ParamLimits

0xd059,	// (0x00091cf9) tport_appsw_pane_g1

0xe560,	// (0x00093200) tport_contact_pane_g1

0xdd2d,	// (0x000929cd) tport_contact_pane_t1

0xe569,	// (0x00093209) tport_contact_pane_t2

0x0001,

0xfdd1,	// (0x00094a71) tport_contact_pane_t

0xe577,	// (0x00093217) list_tport_pane

0xe580,	// (0x00093220) scroll_pane_cp_030

0x9f12,	// (0x0008ebb2) cell_tport_appsw_pane_g1

0xe589,	// (0x00093229) cell_tport_appsw_pane_t1

0x0771,	// (0x00085411) grid_highlight_pane_cp019

0x9f2a,	// (0x0008ebca) list_tport_double_graphic_pane_ParamLimits

0x9f2a,	// (0x0008ebca) list_tport_double_graphic_pane

0xaafa,	// (0x0008f79a) list_highlight_pane_cp023_ParamLimits

0xaafa,	// (0x0008f79a) list_highlight_pane_cp023

0x9f37,	// (0x0008ebd7) list_tport_double_graphic_pane_g1_ParamLimits

0x9f37,	// (0x0008ebd7) list_tport_double_graphic_pane_g1

0x9f44,	// (0x0008ebe4) list_tport_double_graphic_pane_t1_ParamLimits

0x9f44,	// (0x0008ebe4) list_tport_double_graphic_pane_t1

0x9f59,	// (0x0008ebf9) list_tport_double_graphic_pane_t2_ParamLimits

0x9f59,	// (0x0008ebf9) list_tport_double_graphic_pane_t2

0x0001,

0xfddd,	// (0x00094a7d) list_tport_double_graphic_pane_t_ParamLimits

0xfddd,	// (0x00094a7d) list_tport_double_graphic_pane_t

0x0771,	// (0x00085411) main_cale_note_pane

0x7e24,	// (0x0008cac4) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7e24,	// (0x0008cac4) cell_vitu2_function_top_wide_pane_cp01

0x9604,	// (0x0008e2a4) wait_bar_pane_cp05_ParamLimits

0x0771,	// (0x00085411) listscroll_cmail_pane

0xe59f,	// (0x0009323f) list_cmail_pane

0x9f75,	// (0x0008ec15) list_cmail_body_pane

0xe5b7,	// (0x00093257) list_single_cmail_header_caption_pane

0x9f89,	// (0x0008ec29) list_single_cmail_header_detail_pane_ParamLimits

0x9f89,	// (0x0008ec29) list_single_cmail_header_detail_pane

0x9fb3,	// (0x0008ec53) list_single_cmail_header_caption_pane_t1

0x9fc3,	// (0x0008ec63) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9fc3,	// (0x0008ec63) list_single_cmail_header_detail_pane_g1

0xe5d9,	// (0x00093279) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5d9,	// (0x00093279) list_single_cmail_header_detail_pane_g2

0x0002,

0xfde2,	// (0x00094a82) list_single_cmail_header_detail_pane_g_ParamLimits

0xfde2,	// (0x00094a82) list_single_cmail_header_detail_pane_g

0xe5f2,	// (0x00093292) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe5f2,	// (0x00093292) list_single_cmail_header_detail_pane_t1

0xe62c,	// (0x000932cc) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe62c,	// (0x000932cc) list_single_cmail_header_editor_pane_bg

0xdebc,	// (0x00092b5c) list_cmail_body_pane_g1

0xe63e,	// (0x000932de) list_cmail_body_pane_t1

0xd0b3,	// (0x00091d53) list_single_cmail_header_editor_pane_bg_g1

0xae19,	// (0x0008fab9) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd0c3,	// (0x00091d63) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd0bb,	// (0x00091d5b) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd301,	// (0x00091fa1) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd0e3,	// (0x00091d83) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd0d3,	// (0x00091d73) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd0db,	// (0x00091d7b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xadf9,	// (0x0008fa99) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa001,	// (0x0008eca1) calenote_gesture_pane_ParamLimits

0xa001,	// (0x0008eca1) calenote_gesture_pane

0xa021,	// (0x0008ecc1) calenote_window_pane_ParamLimits

0xa021,	// (0x0008ecc1) calenote_window_pane

0xe64c,	// (0x000932ec) popup_note_window_cp01

0xa03d,	// (0x0008ecdd) calenote_swipe_1_pane_ParamLimits

0xa03d,	// (0x0008ecdd) calenote_swipe_1_pane

0x9a51,	// (0x0008e6f1) calenote_swipe_2_pane_ParamLimits

0x9a51,	// (0x0008e6f1) calenote_swipe_2_pane

0xe1f6,	// (0x00092e96) calenote_swipe_1_pane_g1_ParamLimits

0xe1f6,	// (0x00092e96) calenote_swipe_1_pane_g1

0xe203,	// (0x00092ea3) calenote_swipe_1_pane_g2_ParamLimits

0xe203,	// (0x00092ea3) calenote_swipe_1_pane_g2

0x0001,

0xfd11,	// (0x000949b1) calenote_swipe_1_pane_g_ParamLimits

0xfd11,	// (0x000949b1) calenote_swipe_1_pane_g

0xe65e,	// (0x000932fe) calenote_swipe_1_pane_t1_ParamLimits

0xe65e,	// (0x000932fe) calenote_swipe_1_pane_t1

0xe1f6,	// (0x00092e96) calenote_swipe_2_pane_g1_ParamLimits

0xe1f6,	// (0x00092e96) calenote_swipe_2_pane_g1

0xe67d,	// (0x0009331d) calenote_swipe_2_pane_g2_ParamLimits

0xe67d,	// (0x0009331d) calenote_swipe_2_pane_g2

0x0001,

0xfdee,	// (0x00094a8e) calenote_swipe_2_pane_g_ParamLimits

0xfdee,	// (0x00094a8e) calenote_swipe_2_pane_g

0xe689,	// (0x00093329) calenote_swipe_2_pane_t1_ParamLimits

0xe689,	// (0x00093329) calenote_swipe_2_pane_t1

0x0771,	// (0x00085411) main_mup_navstr_pane

0x6aef,	// (0x0008b78f) main_mup3_pane_t7_ParamLimits

0x6aef,	// (0x0008b78f) main_mup3_pane_t7

0xede7,	// (0x00093a87) main_mp4_pane_g6_ParamLimits

0xede7,	// (0x00093a87) main_mp4_pane_g6

0xef7d,	// (0x00093c1d) main_image3_pane_t4_ParamLimits

0xef7d,	// (0x00093c1d) main_image3_pane_t4

0xa052,	// (0x0008ecf2) popup_navstr_preview_pane_ParamLimits

0xa052,	// (0x0008ecf2) popup_navstr_preview_pane

0xa066,	// (0x0008ed06) scroll_navstr_pane_ParamLimits

0xa066,	// (0x0008ed06) scroll_navstr_pane

0x0771,	// (0x00085411) bg_popup_preview_window_pane_cp04

0xe6b0,	// (0x00093350) popup_navstr_preview_pane_t1

0xa07a,	// (0x0008ed1a) scroll_navstr_pane_g1_ParamLimits

0xa07a,	// (0x0008ed1a) scroll_navstr_pane_g1

0xa08e,	// (0x0008ed2e) scroll_navstr_pane_t1_ParamLimits

0xa08e,	// (0x0008ed2e) scroll_navstr_pane_t1

0xe655,	// (0x000932f5) bg_button_pane_cp014

0xe655,	// (0x000932f5) bg_button_pane_cp030

0x98ef,	// (0x0008e58f) list_double_fisheye_pane_g4_ParamLimits

0x98ef,	// (0x0008e58f) list_double_fisheye_pane_g4

0x98fb,	// (0x0008e59b) list_double_fisheye_pane_g5_ParamLimits

0x98fb,	// (0x0008e59b) list_double_fisheye_pane_g5

0xe5a7,	// (0x00093247) sp_fs_scroll_pane_cp03

0xe335,	// (0x00092fd5) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe341,	// (0x00092fe1) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd2e,	// (0x000949ce) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe34d,	// (0x00092fed) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9f6b,	// (0x0008ec0b) sp_fs_scroll_pane_cp02

0x2f37,	// (0x00087bd7) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2f37,	// (0x00087bd7) popup_sp_fs_calendar_preview_list_single_pane

0x0771,	// (0x00085411) main_cam6_pano_pane

0xaafa,	// (0x0008f79a) main_mup3_pane_ParamLimits

0x0771,	// (0x00085411) main_phacti_pane

0x94d7,	// (0x0008e177) bg_button_pane_cp11

0x94f1,	// (0x0008e191) main_mobtv_info_pane_g2_ParamLimits

0x94f1,	// (0x0008e191) main_mobtv_info_pane_g2

0x0001,

0xfc8e,	// (0x0009492e) main_mobtv_info_pane_g_ParamLimits

0xfc8e,	// (0x0009492e) main_mobtv_info_pane_g

0x96cc,	// (0x0008e36c) sc_clock_pane_t5_ParamLimits

0x96cc,	// (0x0008e36c) sc_clock_pane_t5

0x9751,	// (0x0008e3f1) main_radioblah_pane_g1_ParamLimits

0xe142,	// (0x00092de2) main_radioblah_pane_t3_ParamLimits

0xe142,	// (0x00092de2) main_radioblah_pane_t3

0xe15a,	// (0x00092dfa) main_radioblah_pane_t4_ParamLimits

0xe15a,	// (0x00092dfa) main_radioblah_pane_t4

0x9779,	// (0x0008e419) main_radioblah_text_pane_ParamLimits

0x9779,	// (0x0008e419) main_radioblah_text_pane

0x978b,	// (0x0008e42b) main_radioblah_info_pane_g1_ParamLimits

0x9824,	// (0x0008e4c4) main_radioblah_info_pane_t4_ParamLimits

0x9824,	// (0x0008e4c4) main_radioblah_info_pane_t4

0xaafa,	// (0x0008f79a) main_sp_fs_calendar_pane

0xa0a5,	// (0x0008ed45) main_phacti_pane_g1

0xa0ad,	// (0x0008ed4d) phacti_note_pane_ParamLimits

0xa0ad,	// (0x0008ed4d) phacti_note_pane

0xe6c7,	// (0x00093367) phacti_term_pane_ParamLimits

0xe6c7,	// (0x00093367) phacti_term_pane

0xe6dc,	// (0x0009337c) phacti_note_pane_t1_ParamLimits

0xe6dc,	// (0x0009337c) phacti_note_pane_t1

0xe6f3,	// (0x00093393) phacti_term_pane_g1

0xe6fb,	// (0x0009339b) phacti_term_pane_t1_ParamLimits

0xe6fb,	// (0x0009339b) phacti_term_pane_t1

0xe725,	// (0x000933c5) popup_sp_fs_calendar_preview_list_single_pane_g1

0x376f,	// (0x0008840f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf8,	// (0x00094a98) popup_sp_fs_calendar_preview_list_single_pane_g

0xe72d,	// (0x000933cd) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe72d,	// (0x000933cd) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe742,	// (0x000933e2) aid_popup_sp_fs_bg_corner_pane

0x14d0,	// (0x00086170) popup_sp_fs_calendar_preview_bg_pane_g1

0x0771,	// (0x00085411) popup_sp_fs_calendar_preview_bg_pane

0xe74a,	// (0x000933ea) popup_sp_fs_calendar_preview_list_pane

0xaafa,	// (0x0008f79a) bg_main_sp_fs_cale_pane_ParamLimits

0xaafa,	// (0x0008f79a) bg_main_sp_fs_cale_pane

0xe75b,	// (0x000933fb) listscroll_cale_mrui_pane_ParamLimits

0xe75b,	// (0x000933fb) listscroll_cale_mrui_pane

0xe76f,	// (0x0009340f) listscroll_sp_fs_schedule_track_pane

0xe778,	// (0x00093418) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe778,	// (0x00093418) main_sp_fs_ctrlbar_pane_cp01

0xe789,	// (0x00093429) main_sp_fs_ribbon_pane

0xe791,	// (0x00093431) popup_sp_fs_cale_preview_window

0xa104,	// (0x0008eda4) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa104,	// (0x0008eda4) list_single_sp_fs_schedule_track_pane

0xaafa,	// (0x0008f79a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xaafa,	// (0x0008f79a) bg_sp_fs_highlight_list_pane_cp03

0xa117,	// (0x0008edb7) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa117,	// (0x0008edb7) list_single_sp_fs_schedule_track_pane_g1

0xa123,	// (0x0008edc3) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa123,	// (0x0008edc3) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdfd,	// (0x00094a9d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdfd,	// (0x00094a9d) list_single_sp_fs_schedule_track_pane_g

0xa12f,	// (0x0008edcf) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa12f,	// (0x0008edcf) list_single_sp_fs_schedule_track_pane_t1

0xa149,	// (0x0008ede9) sp_fs_schedule_track_pane_ParamLimits

0xa149,	// (0x0008ede9) sp_fs_schedule_track_pane

0xe7a3,	// (0x00093443) sp_fs_schedule_track_pane_g1

0xe7ab,	// (0x0009344b) sp_fs_schedule_track_pane_g2

0xe7b3,	// (0x00093453) sp_fs_schedule_track_pane_g3

0xe7bb,	// (0x0009345b) sp_fs_schedule_track_pane_g4

0xe7c3,	// (0x00093463) sp_fs_schedule_track_pane_g5

0x0004,

0xfe02,	// (0x00094aa2) sp_fs_schedule_track_pane_g

0xd0b3,	// (0x00091d53) bg_sp_fs_schedule_viewer_highlight_g1

0xae19,	// (0x0008fab9) bg_sp_fs_schedule_viewer_highlight_g2

0xd0bb,	// (0x00091d5b) bg_sp_fs_schedule_viewer_highlight_g3

0xd0c3,	// (0x00091d63) bg_sp_fs_schedule_viewer_highlight_g4

0xd301,	// (0x00091fa1) bg_sp_fs_schedule_viewer_highlight_g5

0xd0d3,	// (0x00091d73) bg_sp_fs_schedule_viewer_highlight_g6

0xd0db,	// (0x00091d7b) bg_sp_fs_schedule_viewer_highlight_g7

0xd0e3,	// (0x00091d83) bg_sp_fs_schedule_viewer_highlight_g8

0xadf9,	// (0x0008fa99) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe0d,	// (0x00094aad) bg_sp_fs_schedule_viewer_highlight_g

0x0771,	// (0x00085411) bg_main_sp_fs_ribbon_pane

0xa15a,	// (0x0008edfa) main_sp_fs_ribbon_pane_g1

0xe7cb,	// (0x0009346b) main_sp_fs_ribbon_pane_t1

0xa163,	// (0x0008ee03) main_sp_fs_ribbon_pane_t2

0xe7da,	// (0x0009347a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe20,	// (0x00094ac0) main_sp_fs_ribbon_pane_t

0xe7e9,	// (0x00093489) main_sp_fs_ribbon_scheduler_pane

0xe7f1,	// (0x00093491) bg_main_sp_fs_ribbon_pane_g1

0xe7fa,	// (0x0009349a) bg_main_sp_fs_ribbon_pane_g2

0xe803,	// (0x000934a3) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe27,	// (0x00094ac7) bg_main_sp_fs_ribbon_pane_g

0xe80b,	// (0x000934ab) main_sp_fs_ribbon_scheduler_pane_g1

0xe814,	// (0x000934b4) main_sp_fs_ribbon_scheduler_pane_g2

0xe81d,	// (0x000934bd) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe2e,	// (0x00094ace) main_sp_fs_ribbon_scheduler_pane_g

0xe826,	// (0x000934c6) list_cale_mrui_pane

0xa172,	// (0x0008ee12) sp_fs_scroll_pane_cp07_ParamLimits

0xa172,	// (0x0008ee12) sp_fs_scroll_pane_cp07

0xa188,	// (0x0008ee28) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa188,	// (0x0008ee28) bg_sp_fs_schedule_viewer_highlight

0xe82f,	// (0x000934cf) list_single_sp_fs_schedule_track_pane_cp01

0xe837,	// (0x000934d7) list_sp_fs_schedule_track_pane

0xe83f,	// (0x000934df) sp_fs_scroll_pane_cp06_ParamLimits

0xe83f,	// (0x000934df) sp_fs_scroll_pane_cp06

0x14d0,	// (0x00086170) bgmain_sp_fs_calendar_pane_g1

0xa198,	// (0x0008ee38) list_single_cale_mrui_pane_ParamLimits

0xa198,	// (0x0008ee38) list_single_cale_mrui_pane

0xe851,	// (0x000934f1) list_single_cale_mrui_row_pane_ParamLimits

0xe851,	// (0x000934f1) list_single_cale_mrui_row_pane

0xe85e,	// (0x000934fe) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe85e,	// (0x000934fe) list_single_cale_mrui_row_pane_g1

0xe896,	// (0x00093536) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe896,	// (0x00093536) list_single_cale_mrui_row_pane_t1

0xa1b9,	// (0x0008ee59) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa1b9,	// (0x0008ee59) list_single_cale_mrui_row_pane_t2

0xe8a8,	// (0x00093548) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8a8,	// (0x00093548) list_single_cale_mrui_row_pane_t3

0xe8d7,	// (0x00093577) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe8d7,	// (0x00093577) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe3a,	// (0x00094ada) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe3a,	// (0x00094ada) list_single_cale_mrui_row_pane_t

0xa21f,	// (0x0008eebf) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa21f,	// (0x0008eebf) list_single_cmail_header_editor_pane_bg_cp01

0xa243,	// (0x0008eee3) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa243,	// (0x0008eee3) list_single_cmail_header_editor_pane_bg_cp02

0xa261,	// (0x0008ef01) main_radioblah_text_pane_t1_ParamLimits

0xa261,	// (0x0008ef01) main_radioblah_text_pane_t1

0xe906,	// (0x000935a6) cam6_indi_pane_cp01

0xe90e,	// (0x000935ae) cam6_mode_pane_cp01

0xe916,	// (0x000935b6) cam6_pano_pane

0xe91f,	// (0x000935bf) cam6_zoom_pane_cp01

0xe927,	// (0x000935c7) cam6_pano_image_pane

0xe932,	// (0x000935d2) cam6_pano_pane_g1

0xdebc,	// (0x00092b5c) cam6_pano_pane_g2

0xe93b,	// (0x000935db) cam6_pano_pane_g3

0xe944,	// (0x000935e4) cam6_pano_pane_g4

0xcbcf,	// (0x0009186f) cam6_pano_pane_g5

0xe94d,	// (0x000935ed) cam6_pano_pane_g6

0xe957,	// (0x000935f7) cam6_pano_pane_g7

0xe95f,	// (0x000935ff) cam6_pano_pane_g8

0xe968,	// (0x00093608) cam6_pano_pane_g9

0x0008,

0xfe43,	// (0x00094ae3) cam6_pano_pane_g

0x0771,	// (0x00085411) main_browser_tag_pane

0xe6a8,	// (0x00093348) grid_navstr_albumart_pane

0xe973,	// (0x00093613) cell_navstr_albumart_pane_ParamLimits

0xe973,	// (0x00093613) cell_navstr_albumart_pane

0xe996,	// (0x00093636) cell_navstr_albumart_pane_g1

0x0ea6,	// (0x00085b46) cell_navstr_albumart_pane_g2

0x0eb6,	// (0x00085b56) cell_navstr_albumart_pane_g3

0x0eae,	// (0x00085b4e) cell_navstr_albumart_pane_g4

0x0003,

0xfe56,	// (0x00094af6) cell_navstr_albumart_pane_g

0xa27b,	// (0x0008ef1b) bt_list_pane_ParamLimits

0xa27b,	// (0x0008ef1b) bt_list_pane

0xa28f,	// (0x0008ef2f) bt_list_pane_t1

0xa29e,	// (0x0008ef3e) bt_list_pane_t2

0x0001,

0xfe5f,	// (0x00094aff) bt_list_pane_t

0x0771,	// (0x00085411) main_cale_prevew_pane

0xa2ad,	// (0x0008ef4d) popup_cale_preview_window_ParamLimits

0xa2ad,	// (0x0008ef4d) popup_cale_preview_window

0xaafa,	// (0x0008f79a) bg_popup_preview_window_pane_cp05_ParamLimits

0xaafa,	// (0x0008f79a) bg_popup_preview_window_pane_cp05

0xe99e,	// (0x0009363e) list_cale_preview_pane_ParamLimits

0xe99e,	// (0x0009363e) list_cale_preview_pane

0xa2c6,	// (0x0008ef66) list_double_cale_preview_pane_ParamLimits

0xa2c6,	// (0x0008ef66) list_double_cale_preview_pane

0xa2d8,	// (0x0008ef78) list_single_cale_preview_pane_ParamLimits

0xa2d8,	// (0x0008ef78) list_single_cale_preview_pane

0xa2ee,	// (0x0008ef8e) list_single_cale_preview_pane_g1

0xa2f6,	// (0x0008ef96) list_single_cale_preview_pane_t1_ParamLimits

0xa2f6,	// (0x0008ef96) list_single_cale_preview_pane_t1

0xa30b,	// (0x0008efab) list_double_cale_preview_pane_g1

0xa313,	// (0x0008efb3) list_double_cale_preview_pane_t1_ParamLimits

0xa313,	// (0x0008efb3) list_double_cale_preview_pane_t1

0xa328,	// (0x0008efc8) list_double_cale_preview_pane_t2_ParamLimits

0xa328,	// (0x0008efc8) list_double_cale_preview_pane_t2

0x0001,

0xfe64,	// (0x00094b04) list_double_cale_preview_pane_t_ParamLimits

0xfe64,	// (0x00094b04) list_double_cale_preview_pane_t

0x0771,	// (0x00085411) main_ezdial_pane

0xaafa,	// (0x0008f79a) main_sp_fs_email_pane_ParamLimits

0x9a89,	// (0x0008e729) cmail_ddmenu_btn01_pane_ParamLimits

0x9a89,	// (0x0008e729) cmail_ddmenu_btn01_pane

0x9a9c,	// (0x0008e73c) cmail_ddmenu_btn02_pane_ParamLimits

0x9a9c,	// (0x0008e73c) cmail_ddmenu_btn02_pane

0x9abf,	// (0x0008e75f) cmail_ddmenu_btn03_pane_ParamLimits

0x9abf,	// (0x0008e75f) cmail_ddmenu_btn03_pane

0x9ae3,	// (0x0008e783) main_sp_fs_ctrlbar_pane_ParamLimits

0x9b07,	// (0x0008e7a7) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9f75,	// (0x0008ec15) list_cmail_body_pane_ParamLimits

0xe5d0,	// (0x00093270) bg_button_pane_cp12

0xe5e5,	// (0x00093285) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5e5,	// (0x00093285) list_single_cmail_header_detail_pane_g3

0x9fdb,	// (0x0008ec7b) list_single_cmail_header_detail_pane_t2_ParamLimits

0x9fdb,	// (0x0008ec7b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde9,	// (0x00094a89) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde9,	// (0x00094a89) list_single_cmail_header_detail_pane_t

0xe710,	// (0x000933b0) phacti_term_pane_t2_ParamLimits

0xe710,	// (0x000933b0) phacti_term_pane_t2

0x0001,

0xfdf3,	// (0x00094a93) phacti_term_pane_t_ParamLimits

0xfdf3,	// (0x00094a93) phacti_term_pane_t

0xe9aa,	// (0x0009364a) aid_size_list_single_double

0xa340,	// (0x0008efe0) popup_ezdial_listscroll_window

0xa35c,	// (0x0008effc) popup_number_entry_window_cp01

0xb636,	// (0x000902d6) bg_popup_call_pane_cp09

0xe9b6,	// (0x00093656) ezdial_list_pane

0xe9be,	// (0x0009365e) scroll_pane_cp23

0x1089,	// (0x00085d29) bg_button_pane_cp028_ParamLimits

0x1089,	// (0x00085d29) bg_button_pane_cp028

0xa36a,	// (0x0008f00a) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa36a,	// (0x0008f00a) cmail_ddmenu_btn01_pane_g1

0xa376,	// (0x0008f016) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa376,	// (0x0008f016) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe69,	// (0x00094b09) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe69,	// (0x00094b09) cmail_ddmenu_btn01_pane_g

0xe9c6,	// (0x00093666) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe9c6,	// (0x00093666) cmail_ddmenu_btn01_pane_t1

0x1089,	// (0x00085d29) bg_button_pane_cp029_ParamLimits

0x1089,	// (0x00085d29) bg_button_pane_cp029

0xa382,	// (0x0008f022) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa382,	// (0x0008f022) cmail_ddmenu_btn02_pane_g1

0xa39a,	// (0x0008f03a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa39a,	// (0x0008f03a) cmail_ddmenu_btn02_pane_t1

0xaafa,	// (0x0008f79a) bg_button_pane_cp031_ParamLimits

0xaafa,	// (0x0008f79a) bg_button_pane_cp031

0xa382,	// (0x0008f022) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa382,	// (0x0008f022) cmail_ddmenu_btn03_pane_g1

0xa39a,	// (0x0008f03a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa39a,	// (0x0008f03a) cmail_ddmenu_btn03_pane_t1

0x7648,	// (0x0008c2e8) cell_dialer2_keypad_pane_t1_ParamLimits

0x7662,	// (0x0008c302) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7662,	// (0x0008c302) cell_dialer2_keypad_pane_t1_copy1

0x937c,	// (0x0008e01c) ncimui_group_button_pane

0xaafa,	// (0x0008f79a) main_sp_fs_calendar_pane_ParamLimits

0xe5b7,	// (0x00093257) list_single_cmail_header_caption_pane_ParamLimits

0xe752,	// (0x000933f2) aid_recal_txt_sm_pane

0x0771,	// (0x00085411) mian_recal_day_pane

0xe791,	// (0x00093431) popup_sp_fs_cale_preview_window_ParamLimits

0x0771,	// (0x00085411) list_recal_day_pane

0xe9fd,	// (0x0009369d) list_single_recal_day_pane_ParamLimits

0xe9fd,	// (0x0009369d) list_single_recal_day_pane

0xea0f,	// (0x000936af) list_single_recal_day_pane_g1_ParamLimits

0xea0f,	// (0x000936af) list_single_recal_day_pane_g1

0xea1b,	// (0x000936bb) list_single_recal_day_pane_g2_ParamLimits

0xea1b,	// (0x000936bb) list_single_recal_day_pane_g2

0xea2a,	// (0x000936ca) list_single_recal_day_pane_g3_ParamLimits

0xea2a,	// (0x000936ca) list_single_recal_day_pane_g3

0xa3be,	// (0x0008f05e) list_single_recal_day_pane_g4_ParamLimits

0xa3be,	// (0x0008f05e) list_single_recal_day_pane_g4

0xea36,	// (0x000936d6) list_single_recal_day_pane_g5_ParamLimits

0xea36,	// (0x000936d6) list_single_recal_day_pane_g5

0xea45,	// (0x000936e5) list_single_recal_day_pane_g6_ParamLimits

0xea45,	// (0x000936e5) list_single_recal_day_pane_g6

0x0005,

0xfe78,	// (0x00094b18) list_single_recal_day_pane_g_ParamLimits

0xfe78,	// (0x00094b18) list_single_recal_day_pane_g

0xea51,	// (0x000936f1) list_single_recal_day_pane_t1

0xea5f,	// (0x000936ff) list_single_recal_day_pane_t2

0x0001,

0xfe85,	// (0x00094b25) list_single_recal_day_pane_t

0xa3d1,	// (0x0008f071) ncimui_query_button_pane_ParamLimits

0xa3d1,	// (0x0008f071) ncimui_query_button_pane

0xa3e1,	// (0x0008f081) ncimui_query_button_pane_t1_ParamLimits

0xa3e1,	// (0x0008f081) ncimui_query_button_pane_t1

0xea6d,	// (0x0009370d) ncimui_query_button_pane_t2_ParamLimits

0xea6d,	// (0x0009370d) ncimui_query_button_pane_t2

0x0001,

0xfe8a,	// (0x00094b2a) ncimui_query_button_pane_t_ParamLimits

0xfe8a,	// (0x00094b2a) ncimui_query_button_pane_t

0xa3f4,	// (0x0008f094) query_button_pane_ParamLimits

0xa3f4,	// (0x0008f094) query_button_pane

0x0771,	// (0x00085411) bg_button_pane_cp0028

0xea80,	// (0x00093720) query_button_pane_t1

0x575d,	// (0x0008a3fd) main_tport_pane_ParamLimits

0x9e6f,	// (0x0008eb0f) bg_popup_window_pane_cp01_ParamLimits

0x9e6f,	// (0x0008eb0f) bg_popup_window_pane_cp01

0x9e89,	// (0x0008eb29) heading_pane_cp08_ParamLimits

0x9e89,	// (0x0008eb29) heading_pane_cp08

0x9e9d,	// (0x0008eb3d) heading_pane_cp07_ParamLimits

0x9e9d,	// (0x0008eb3d) heading_pane_cp07

0x9f1a,	// (0x0008ebba) cell_tport_appsw_pane_g2

0x0002,

0xfdd6,	// (0x00094a76) cell_tport_appsw_pane_g

0x4d09,	// (0x000899a9) input_candi_list_open_g1

0xb018,	// (0x0008fcb8) list_cale_time_pane_g6_ParamLimits

0xb018,	// (0x0008fcb8) list_cale_time_pane_g6

0x652a,	// (0x0008b1ca) aid_size_touch_calib_1_ParamLimits

0x652a,	// (0x0008b1ca) aid_size_touch_calib_1

0x6536,	// (0x0008b1d6) aid_size_touch_calib_2_ParamLimits

0x6536,	// (0x0008b1d6) aid_size_touch_calib_2

0x654c,	// (0x0008b1ec) aid_size_touch_calib_3_ParamLimits

0x654c,	// (0x0008b1ec) aid_size_touch_calib_3

0x656a,	// (0x0008b20a) aid_size_touch_calib_4_ParamLimits

0x656a,	// (0x0008b20a) aid_size_touch_calib_4

0x6580,	// (0x0008b220) main_touch_calib_button_group_pane_ParamLimits

0x6580,	// (0x0008b220) main_touch_calib_button_group_pane

0x6597,	// (0x0008b237) main_touch_calib_pane_g1_ParamLimits

0x65a3,	// (0x0008b243) main_touch_calib_pane_g2_ParamLimits

0x65af,	// (0x0008b24f) main_touch_calib_pane_g3_ParamLimits

0x65bb,	// (0x0008b25b) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x00094458) main_touch_calib_pane_g_ParamLimits

0x65c7,	// (0x0008b267) main_touch_calib_pane_t1_ParamLimits

0x65e1,	// (0x0008b281) main_touch_calib_pane_t2_ParamLimits

0x65fb,	// (0x0008b29b) main_touch_calib_pane_t3_ParamLimits

0x660f,	// (0x0008b2af) main_touch_calib_pane_t4_ParamLimits

0x6623,	// (0x0008b2c3) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x00094461) main_touch_calib_pane_t_ParamLimits

0xc9a5,	// (0x00091645) list_single_fp_cale_pane_g3_ParamLimits

0xc9a5,	// (0x00091645) list_single_fp_cale_pane_g3

0xefdf,	// (0x00093c7f) bg_button_pane_cp012_ParamLimits

0xefdf,	// (0x00093c7f) bg_vkb2_func_pane_cp03_ParamLimits

0x8600,	// (0x0008d2a0) cell_vitu2_function_top_pane_g1_ParamLimits

0xefdf,	// (0x00093c7f) bg_vkb2_func_pane_cp04_ParamLimits

0x9330,	// (0x0008dfd0) main_ncimui_button_group_pane_ParamLimits

0x9330,	// (0x0008dfd0) main_ncimui_button_group_pane

0x936a,	// (0x0008e00a) main_ncimui_pane_t3_ParamLimits

0x936a,	// (0x0008e00a) main_ncimui_pane_t3

0xe6be,	// (0x0009335e) phacti_button_group_pane

0xe9aa,	// (0x0009364a) aid_size_list_single_double_ParamLimits

0xa340,	// (0x0008efe0) popup_ezdial_listscroll_window_ParamLimits

0xa35c,	// (0x0008effc) popup_number_entry_window_cp01_ParamLimits

0xa407,	// (0x0008f0a7) phacti_button_pane_ParamLimits

0xa407,	// (0x0008f0a7) phacti_button_pane

0x0771,	// (0x00085411) bg_button_pane_cp14

0xea8e,	// (0x0009372e) phacti_button_pane_t1

0xa418,	// (0x0008f0b8) main_touch_calib_button_pane_ParamLimits

0xa418,	// (0x0008f0b8) main_touch_calib_button_pane

0x2c64,	// (0x00087904) bg_button_pane_cp18_ParamLimits

0x2c64,	// (0x00087904) bg_button_pane_cp18

0xea9c,	// (0x0009373c) main_touch_calib_button_pane_t1_ParamLimits

0xea9c,	// (0x0009373c) main_touch_calib_button_pane_t1

0xeab2,	// (0x00093752) main_touch_calib_button_pane_t2_ParamLimits

0xeab2,	// (0x00093752) main_touch_calib_button_pane_t2

0x0001,

0xfe8f,	// (0x00094b2f) main_touch_calib_button_pane_t_ParamLimits

0xfe8f,	// (0x00094b2f) main_touch_calib_button_pane_t

0x0771,	// (0x00085411) cell_ncimui_button_pane

0x0771,	// (0x00085411) bg_button_pane_cp032

0xead0,	// (0x00093770) cell_ncimui_button_pane_t1

0xef5d,	// (0x00093bfd) image3_infobar_pane_ParamLimits

0xef5d,	// (0x00093bfd) image3_infobar_pane

0x96f8,	// (0x0008e398) fs_bigclock_status_pane_ParamLimits

0x96f8,	// (0x0008e398) fs_bigclock_status_pane

0x9705,	// (0x0008e3a5) main_fs_bigclock_clock_pane_ParamLimits

0x9705,	// (0x0008e3a5) main_fs_bigclock_clock_pane

0x9718,	// (0x0008e3b8) main_fs_bigclock_indi_pane_ParamLimits

0x9718,	// (0x0008e3b8) main_fs_bigclock_indi_pane

0x9730,	// (0x0008e3d0) main_fs_bigclock_swipe_pane_ParamLimits

0x9730,	// (0x0008e3d0) main_fs_bigclock_swipe_pane

0x0771,	// (0x00085411) main_fs_clock_dumped_data

0xdfc9,	// (0x00092c69) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdfc9,	// (0x00092c69) list_single_fs_bigclock_indicator_pane_g1

0xdfe5,	// (0x00092c85) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdfe5,	// (0x00092c85) list_single_fs_bigclock_indicator_pane_g2

0xdfff,	// (0x00092c9f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdfff,	// (0x00092c9f) list_single_fs_bigclock_indicator_pane_g3

0xe019,	// (0x00092cb9) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe019,	// (0x00092cb9) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcc2,	// (0x00094962) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcc2,	// (0x00094962) list_single_fs_bigclock_indicator_pane_g

0xe03f,	// (0x00092cdf) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe03f,	// (0x00092cdf) list_single_fs_bigclock_indicator_pane_t1

0xe067,	// (0x00092d07) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe067,	// (0x00092d07) list_single_fs_bigclock_indicator_pane_t2

0xe08f,	// (0x00092d2f) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe08f,	// (0x00092d2f) list_single_fs_bigclock_indicator_pane_t3

0xe0b7,	// (0x00092d57) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe0b7,	// (0x00092d57) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfccd,	// (0x0009496d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfccd,	// (0x0009496d) list_single_fs_bigclock_indicator_pane_t

0xeade,	// (0x0009377e) image3_infobar_fav_pane_ParamLimits

0xeade,	// (0x0009377e) image3_infobar_fav_pane

0xeaee,	// (0x0009378e) image3_infobar_loc_pane_ParamLimits

0xeaee,	// (0x0009378e) image3_infobar_loc_pane

0xeb02,	// (0x000937a2) image3_infobar_time_pane_ParamLimits

0xeb02,	// (0x000937a2) image3_infobar_time_pane

0x14d0,	// (0x00086170) image3_infobar_time_pane_g1

0xeb12,	// (0x000937b2) image3_infobar_time_pane_t1

0x14d0,	// (0x00086170) image3_infobar_loc_pane_g1

0xeb20,	// (0x000937c0) image3_infobar_loc_pane_g2

0x0001,

0xfe94,	// (0x00094b34) image3_infobar_loc_pane_g

0xeb28,	// (0x000937c8) image3_infobar_loc_pane_t1

0x14d0,	// (0x00086170) image3_infobar_fav_pane_g1

0xeb36,	// (0x000937d6) image3_infobar_fav_pane_g2

0x0001,

0xfe99,	// (0x00094b39) image3_infobar_fav_pane_g

0xeb3e,	// (0x000937de) fs_bigclock_status_battery_pane

0xeb47,	// (0x000937e7) fs_bigclock_status_signal_pane

0xeb50,	// (0x000937f0) fs_bigclock_status_title_pane

0xeb59,	// (0x000937f9) fs_bigclock_status_signal_pane_g1

0xeb62,	// (0x00093802) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe9e,	// (0x00094b3e) fs_bigclock_status_signal_pane_g

0xeb6a,	// (0x0009380a) fs_bigclock_status_battery_pane_g1

0xeb73,	// (0x00093813) fs_bigclock_status_battery_pane_g2

0x0001,

0xfea3,	// (0x00094b43) fs_bigclock_status_battery_pane_g

0xeb7b,	// (0x0009381b) fs_bigclock_status_title_pane_t1

0x14d0,	// (0x00086170) main_fs_bigclock_clock_pane_g1

0xeb89,	// (0x00093829) main_fs_bigclock_clock_pane_g2

0xeb89,	// (0x00093829) main_fs_bigclock_clock_pane_g3

0xeb89,	// (0x00093829) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea8,	// (0x00094b48) main_fs_bigclock_clock_pane_g

0xeb91,	// (0x00093831) main_fs_bigclock_clock_pane_t1

0xeb9f,	// (0x0009383f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeb1,	// (0x00094b51) main_fs_bigclock_clock_pane_t

0xebae,	// (0x0009384e) list_single_fs_bigclock_indicator_pane_ParamLimits

0xebae,	// (0x0009384e) list_single_fs_bigclock_indicator_pane

0xa42d,	// (0x0008f0cd) list_single_fs_bigclock_pane_ParamLimits

0xa42d,	// (0x0008f0cd) list_single_fs_bigclock_pane

0xebc8,	// (0x00093868) main_fs_bigclock_indicator_pane_t1

0xebd7,	// (0x00093877) list_single_fs_bigclock_pane_g1

0xebdf,	// (0x0009387f) list_single_fs_bigclock_pane_t1

0x14d0,	// (0x00086170) main_fs_bigclock_swipe_pane_g1

0xec1d,	// (0x000938bd) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfec2,	// (0x00094b62) main_fs_bigclock_swipe_pane_g

0xec25,	// (0x000938c5) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec25,	// (0x000938c5) main_fs_bigclock_swipe_pane_t1

0x4537,	// (0x000891d7) call_type_pane_ParamLimits

0x0771,	// (0x00085411) main_btmg_pane

0xe88a,	// (0x0009352a) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe88a,	// (0x0009352a) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe35,	// (0x00094ad5) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe35,	// (0x00094ad5) list_single_cale_mrui_row_pane_g

0xe9e4,	// (0x00093684) list_recal_vselct_arw_lo_pane

0xe9ec,	// (0x0009368c) list_recal_vselct_arw_up_pane

0xe9f4,	// (0x00093694) list_recal_vselct_pane

0xec42,	// (0x000938e2) btmg_button_pane

0xa492,	// (0x0008f132) main_btmg_pane_g1

0x0771,	// (0x00085411) bg_button_pane_cp044

0xec4c,	// (0x000938ec) btmg_button_pane_t1

0x1081,	// (0x00085d21) aid_listscroll_gen

0xaafa,	// (0x0008f79a) main_cntbar_detail_pane

0xe597,	// (0x00093237) list_cmail_folder_pane

0xe5a7,	// (0x00093247) sp_fs_scroll_pane_cp03_ParamLimits

0xa49c,	// (0x0008f13c) list_single_fs_dyc_pane_cp01_ParamLimits

0xa49c,	// (0x0008f13c) list_single_fs_dyc_pane_cp01

0xec5a,	// (0x000938fa) aid_size_cmail_indent

0xf126,	// (0x00093dc6) list_single_dyc_row_pane_cp01

0xa4de,	// (0x0008f17e) cntbar_detail_list_pane_ParamLimits

0xa4de,	// (0x0008f17e) cntbar_detail_list_pane

0xa52a,	// (0x0008f1ca) main_cntbar_detail_cont_pane_ParamLimits

0xa52a,	// (0x0008f1ca) main_cntbar_detail_cont_pane

0x44d1,	// (0x00089171) scroll_pane_cp032_ParamLimits

0x44d1,	// (0x00089171) scroll_pane_cp032

0xa53e,	// (0x0008f1de) cntbar_detail_list_event_pane_ParamLimits

0xa53e,	// (0x0008f1de) cntbar_detail_list_event_pane

0xa4ee,	// (0x0008f18e) cntbar_detail_list_shct_pane

0xae67,	// (0x0008fb07) aid_list_gen

0x0029,	// (0x00084cc9) aid_scroll

0x0032,	// (0x00084cd2) aid_size_touch_scroll_bar

0xa54e,	// (0x0008f1ee) aid_list_double

0x0044,	// (0x00084ce4) aid_list_single

0xa557,	// (0x0008f1f7) aid_list_single_lg

0xec63,	// (0x00093903) aid_list_z_g_a_sm

0x0056,	// (0x00084cf6) aid_list_z_g_d

0xec6b,	// (0x0009390b) aid_txt_z_prm

0xa560,	// (0x0008f200) aid_txt_z_prm_cp01

0xa56e,	// (0x0008f20e) aid_txt_z_sec

0xa57c,	// (0x0008f21c) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa57c,	// (0x0008f21c) main_cntbar_detail_cont_pane_g1

0xa590,	// (0x0008f230) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa590,	// (0x0008f230) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec7,	// (0x00094b67) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec7,	// (0x00094b67) main_cntbar_detail_cont_pane_g

0x0093,	// (0x00084d33) main_cntbar_detail_cont_pane_t1

0x00a1,	// (0x00084d41) main_cntbar_detail_cont_pane_t2

0x00af,	// (0x00084d4f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfecc,	// (0x00094b6c) main_cntbar_detail_cont_pane_t

0xa5a0,	// (0x0008f240) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa5a0,	// (0x0008f240) cell_cntbar_detail_list_shct_pane

0x00d1,	// (0x00084d71) cntbar_detail_list_shct_pane_g1

0x00da,	// (0x00084d7a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfed3,	// (0x00094b73) cntbar_detail_list_shct_pane_g

0xa5b4,	// (0x0008f254) cntbar_detail_list_event_pane_g1_ParamLimits

0xa5b4,	// (0x0008f254) cntbar_detail_list_event_pane_g1

0xa5c0,	// (0x0008f260) cntbar_detail_list_event_pane_g2_ParamLimits

0xa5c0,	// (0x0008f260) cntbar_detail_list_event_pane_g2

0x0005,

0xfed8,	// (0x00094b78) cntbar_detail_list_event_pane_g_ParamLimits

0xfed8,	// (0x00094b78) cntbar_detail_list_event_pane_g

0xa62c,	// (0x0008f2cc) cntbar_detail_list_event_pane_t1_ParamLimits

0xa62c,	// (0x0008f2cc) cntbar_detail_list_event_pane_t1

0xa641,	// (0x0008f2e1) cntbar_detail_list_event_pane_t2_ParamLimits

0xa641,	// (0x0008f2e1) cntbar_detail_list_event_pane_t2

0x0002,

0xfee5,	// (0x00094b85) cntbar_detail_list_event_pane_t_ParamLimits

0xfee5,	// (0x00094b85) cntbar_detail_list_event_pane_t

0x14d0,	// (0x00086170) cell_cntbar_detail_list_shct_pane_g1

0x4899,	// (0x00089539) navi_pane_mv_g3

0xaafa,	// (0x0008f79a) main_cntbar_detail_pane_ParamLimits

0x0771,	// (0x00085411) main_notif_wgt_pane

0xed9d,	// (0x00093a3d) aid_tch_main_mp4_pane_g4

0xef55,	// (0x00093bf5) popup_slider_window_cp02

0xe9db,	// (0x0009367b) list_recal_day_event_pane

0xa4b2,	// (0x0008f152) cntbar_detail_btn_pane_ParamLimits

0xa4b2,	// (0x0008f152) cntbar_detail_btn_pane

0xa4c8,	// (0x0008f168) cntbar_detail_btn_pane_cp01_ParamLimits

0xa4c8,	// (0x0008f168) cntbar_detail_btn_pane_cp01

0xa4ee,	// (0x0008f18e) cntbar_detail_list_shct_pane_ParamLimits

0xa4fe,	// (0x0008f19e) cntbar_detail_pane_g1_ParamLimits

0xa4fe,	// (0x0008f19e) cntbar_detail_pane_g1

0xa50e,	// (0x0008f1ae) cntbar_detail_pane_t1_ParamLimits

0xa50e,	// (0x0008f1ae) cntbar_detail_pane_t1

0xa5cc,	// (0x0008f26c) cntbar_detail_list_event_pane_g3_ParamLimits

0xa5cc,	// (0x0008f26c) cntbar_detail_list_event_pane_g3

0xa5e4,	// (0x0008f284) cntbar_detail_list_event_pane_g4_ParamLimits

0xa5e4,	// (0x0008f284) cntbar_detail_list_event_pane_g4

0xa5fc,	// (0x0008f29c) cntbar_detail_list_event_pane_g5_ParamLimits

0xa5fc,	// (0x0008f29c) cntbar_detail_list_event_pane_g5

0xa614,	// (0x0008f2b4) cntbar_detail_list_event_pane_g6_ParamLimits

0xa614,	// (0x0008f2b4) cntbar_detail_list_event_pane_g6

0xa656,	// (0x0008f2f6) cntbar_detail_list_event_pane_t3_ParamLimits

0xa656,	// (0x0008f2f6) cntbar_detail_list_event_pane_t3

0xa668,	// (0x0008f308) popup_notif_wgt_window_ParamLimits

0xa668,	// (0x0008f308) popup_notif_wgt_window

0xa681,	// (0x0008f321) popup_submenu_window_cp01_ParamLimits

0xa681,	// (0x0008f321) popup_submenu_window_cp01

0xb636,	// (0x000902d6) bg_popup_window_pane_cp10

0x01b5,	// (0x00084e55) listscroll_notif_wgt_pane

0x01bf,	// (0x00084e5f) list_notif_wgt_window

0x01c8,	// (0x00084e68) scroll_pane_cp033

0xec79,	// (0x00093919) list_notif_wgt_row_pane_ParamLimits

0xec79,	// (0x00093919) list_notif_wgt_row_pane

0x01d1,	// (0x00084e71) aid_size_list_notif_wgt_del

0x01da,	// (0x00084e7a) list_notif_wgt_row_pane_g1

0x01e2,	// (0x00084e82) list_notif_wgt_row_pane_g2

0x01ea,	// (0x00084e8a) list_notif_wgt_row_pane_g3

0x0002,

0xfeec,	// (0x00094b8c) list_notif_wgt_row_pane_g

0x01f3,	// (0x00084e93) list_notif_wgt_row_pane_t1

0x0201,	// (0x00084ea1) list_notif_wgt_row_pane_t2

0x020f,	// (0x00084eaf) list_notif_wgt_row_pane_t3

0x0002,

0xfef3,	// (0x00094b93) list_notif_wgt_row_pane_t

0xd333,	// (0x00091fd3) list_recal_day_event_pane_g1

0x021d,	// (0x00084ebd) list_recal_day_event_pane_t1

0x0771,	// (0x00085411) bg_button_pane_cp045

0x022c,	// (0x00084ecc) cntbar_detail_btn_pane_t1

0x1089,	// (0x00085d29) main_callh_pane_ParamLimits

0x1089,	// (0x00085d29) main_callh_pane

0x0771,	// (0x00085411) main_coverflow0_pane

0x0771,	// (0x00085411) main_wgtman_pane

0x973e,	// (0x0008e3de) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x973e,	// (0x0008e3de) main_fs_bigclock_unlock_btn_pane

0x9f0a,	// (0x0008ebaa) bg_button_pane_cp16

0x9f22,	// (0x0008ebc2) cell_tport_appsw_pane_g3

0xa693,	// (0x0008f333) cf0_flow_pane_ParamLimits

0xa693,	// (0x0008f333) cf0_flow_pane

0x0249,	// (0x00084ee9) listscroll_cf0_pane

0x0252,	// (0x00084ef2) main_cf0_pane_g1

0xa6a8,	// (0x0008f348) main_cf0_pane_t1_ParamLimits

0xa6a8,	// (0x0008f348) main_cf0_pane_t1

0xa6c0,	// (0x0008f360) main_cf0_pane_t2_ParamLimits

0xa6c0,	// (0x0008f360) main_cf0_pane_t2

0x0001,

0xfefa,	// (0x00094b9a) main_cf0_pane_t_ParamLimits

0xfefa,	// (0x00094b9a) main_cf0_pane_t

0x0284,	// (0x00084f24) scroll_pane_cp11

0xa6d8,	// (0x0008f378) cf0_flow_pane_g1

0xa6e0,	// (0x0008f380) cf0_flow_pane_g2

0x0001,

0xfeff,	// (0x00094b9f) cf0_flow_pane_g

0xa6e8,	// (0x0008f388) cf0_flow_pane_t1

0x0771,	// (0x00085411) main_call6_pane

0x0771,	// (0x00085411) main_calllock_pane

0xa6f6,	// (0x0008f396) call6_btn_grp_pane_ParamLimits

0xa6f6,	// (0x0008f396) call6_btn_grp_pane

0xa710,	// (0x0008f3b0) call6_pane_g1_ParamLimits

0xa710,	// (0x0008f3b0) call6_pane_g1

0xa725,	// (0x0008f3c5) popup_call6_1st_window_ParamLimits

0xa725,	// (0x0008f3c5) popup_call6_1st_window

0xa736,	// (0x0008f3d6) popup_call6_2nd_window_ParamLimits

0xa736,	// (0x0008f3d6) popup_call6_2nd_window

0xa747,	// (0x0008f3e7) cell_call6_btn_pane_ParamLimits

0xa747,	// (0x0008f3e7) cell_call6_btn_pane

0xb636,	// (0x000902d6) bg_popup_call2_in_pane_cp03

0x02f6,	// (0x00084f96) popup_call6_1st_window_g1

0x02fe,	// (0x00084f9e) popup_call6_1st_window_g2

0x0306,	// (0x00084fa6) popup_call6_1st_window_g3

0x0002,

0xff04,	// (0x00094ba4) popup_call6_1st_window_g

0x030e,	// (0x00084fae) popup_call6_1st_window_t1

0x031d,	// (0x00084fbd) popup_call6_1st_window_t2

0x032d,	// (0x00084fcd) popup_call6_1st_window_t3

0x0002,

0xff0b,	// (0x00094bab) popup_call6_1st_window_t

0xb636,	// (0x000902d6) bg_popup_call2_in_pane_cp04

0x02f6,	// (0x00084f96) popup_call6_2nd_window_g1

0x02fe,	// (0x00084f9e) popup_call6_2nd_window_g2

0x0306,	// (0x00084fa6) popup_call6_2nd_window_g3

0x0002,

0xff04,	// (0x00094ba4) popup_call6_2nd_window_g

0x030e,	// (0x00084fae) popup_call6_2nd_window_t1

0x0771,	// (0x00085411) bg_button_pane_cp15

0x033d,	// (0x00084fdd) cell_call6_btn_pane_g1

0x0346,	// (0x00084fe6) cell_call6_btn_pane_t1

0xa75b,	// (0x0008f3fb) listscroll_wgtman_pane_ParamLimits

0xa75b,	// (0x0008f3fb) listscroll_wgtman_pane

0xa773,	// (0x0008f413) wgtman_btn_pane_ParamLimits

0xa773,	// (0x0008f413) wgtman_btn_pane

0xb4ed,	// (0x0009018d) aid_scroll_copy1

0x0372,	// (0x00085012) list_wgtman_pane

0xa78c,	// (0x0008f42c) wgtman_btn_pane_g1_ParamLimits

0xa78c,	// (0x0008f42c) wgtman_btn_pane_g1

0xa7a0,	// (0x0008f440) wgtman_btn_pane_t1_ParamLimits

0xa7a0,	// (0x0008f440) wgtman_btn_pane_t1

0x039a,	// (0x0008503a) wgtman_btn_pane_t2_ParamLimits

0x039a,	// (0x0008503a) wgtman_btn_pane_t2

0x0001,

0xff12,	// (0x00094bb2) wgtman_btn_pane_t_ParamLimits

0xff12,	// (0x00094bb2) wgtman_btn_pane_t

0xa7bb,	// (0x0008f45b) listrow_wgtman_pane_ParamLimits

0xa7bb,	// (0x0008f45b) listrow_wgtman_pane

0xa7cd,	// (0x0008f46d) listrow_wgtman_pane_g1

0xa7d6,	// (0x0008f476) listrow_wgtman_pane_g2

0x0001,

0xff17,	// (0x00094bb7) listrow_wgtman_pane_g

0xa7e0,	// (0x0008f480) listrow_wgtman_pane_t1

0xa7ee,	// (0x0008f48e) listrow_wgtman_pane_t2

0x0001,

0xff1c,	// (0x00094bbc) listrow_wgtman_pane_t

0xa7fc,	// (0x0008f49c) wait_bar_pane_cp09

0x03fe,	// (0x0008509e) main_calllock_btn_pane

0x0408,	// (0x000850a8) main_calllock_pane_g1

0x0771,	// (0x00085411) bg_button_pane_cp17

0x0414,	// (0x000850b4) main_calllock_btn_pane_g1

0x041d,	// (0x000850bd) main_calllock_btn_pane_t1

0x0771,	// (0x00085411) main_dialer3_pane

0x0771,	// (0x00085411) main_fmrd2_pane

0x14d0,	// (0x00086170) main_fs_bigclock_unlock_btn_pane_g1

0x0434,	// (0x000850d4) main_fs_bigclock_unlock_btn_pane_t1

0xa804,	// (0x0008f4a4) area_fmrd2_info_pane_ParamLimits

0xa804,	// (0x0008f4a4) area_fmrd2_info_pane

0xa816,	// (0x0008f4b6) area_fmrd2_visual_pane_ParamLimits

0xa816,	// (0x0008f4b6) area_fmrd2_visual_pane

0xa824,	// (0x0008f4c4) fmrd2_indi_pane_ParamLimits

0xa824,	// (0x0008f4c4) fmrd2_indi_pane

0xa831,	// (0x0008f4d1) area_fmrd2_visual_pane_g1

0xa839,	// (0x0008f4d9) area_fmrd2_visual_pane_t1

0xa849,	// (0x0008f4e9) area_fmrd2_visual_pane_t2

0xa859,	// (0x0008f4f9) area_fmrd2_visual_pane_t3

0x0002,

0xff26,	// (0x00094bc6) area_fmrd2_visual_pane_t

0xa869,	// (0x0008f509) area_fmrd2_info_pane_g1

0xa871,	// (0x0008f511) area_fmrd2_info_pane_t1

0xa881,	// (0x0008f521) area_fmrd2_info_pane_t2

0xa891,	// (0x0008f531) area_fmrd2_info_pane_t3

0xa8a1,	// (0x0008f541) area_fmrd2_info_pane_t4

0x0003,

0xff2d,	// (0x00094bcd) area_fmrd2_info_pane_t

0xa8af,	// (0x0008f54f) fmrd2_indi_pane_t1

0xa8bf,	// (0x0008f55f) fmrd2_indi_pane_t2

0xa8cf,	// (0x0008f56f) fmrd2_indi_pane_t3

0x0002,

0xff36,	// (0x00094bd6) fmrd2_indi_pane_t

0xe028,	// (0x00092cc8) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe028,	// (0x00092cc8) list_single_fs_bigclock_indicator_pane_g5

0xe0cc,	// (0x00092d6c) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe0cc,	// (0x00092d6c) list_single_fs_bigclock_indicator_pane_t5

0xa0c1,	// (0x0008ed61) aid_cell_bcale_month_pane_ParamLimits

0xa0c1,	// (0x0008ed61) aid_cell_bcale_month_pane

0xa0d3,	// (0x0008ed73) bcale_month_pane_ParamLimits

0xa0d3,	// (0x0008ed73) bcale_month_pane

0xa0eb,	// (0x0008ed8b) bcale_preview_pane_ParamLimits

0xa0eb,	// (0x0008ed8b) bcale_preview_pane

0xebdf,	// (0x0009387f) list_single_fs_bigclock_pane_t1_ParamLimits

0xebf9,	// (0x00093899) list_single_fs_bigclock_pane_t2_ParamLimits

0xebf9,	// (0x00093899) list_single_fs_bigclock_pane_t2

0x0001,

0xfebd,	// (0x00094b5d) list_single_fs_bigclock_pane_t_ParamLimits

0xfebd,	// (0x00094b5d) list_single_fs_bigclock_pane_t

0x042c,	// (0x000850cc) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff21,	// (0x00094bc1) main_fs_bigclock_unlock_btn_pane_g

0xa8df,	// (0x0008f57f) aid_dia3_key_size_ParamLimits

0xa8df,	// (0x0008f57f) aid_dia3_key_size

0xa8ee,	// (0x0008f58e) aid_dia3_listrow_size_ParamLimits

0xa8ee,	// (0x0008f58e) aid_dia3_listrow_size

0xa8fc,	// (0x0008f59c) dia3_keypad_fun_pane_ParamLimits

0xa8fc,	// (0x0008f59c) dia3_keypad_fun_pane

0xa916,	// (0x0008f5b6) dia3_keypad_num_pane_ParamLimits

0xa916,	// (0x0008f5b6) dia3_keypad_num_pane

0xa92f,	// (0x0008f5cf) dia3_listscroll_pane_ParamLimits

0xa92f,	// (0x0008f5cf) dia3_listscroll_pane

0xa942,	// (0x0008f5e2) dia3_numentry_pane_ParamLimits

0xa942,	// (0x0008f5e2) dia3_numentry_pane

0x056e,	// (0x0008520e) dia3_list_pane

0x0579,	// (0x00085219) scroll_pane_cp12

0x0771,	// (0x00085411) bg_dia3_numentry_pane

0x0584,	// (0x00085224) dia3_numentry_pane_t1

0xa953,	// (0x0008f5f3) cell_dia3_key_num_pane

0xa95b,	// (0x0008f5fb) cell_dia3_key0_fun_pane_ParamLimits

0xa95b,	// (0x0008f5fb) cell_dia3_key0_fun_pane

0xa96f,	// (0x0008f60f) cell_dia3_key1_fun_pane_ParamLimits

0xa96f,	// (0x0008f60f) cell_dia3_key1_fun_pane

0xf126,	// (0x00093dc6) dia3_listrow_pane

0xdd48,	// (0x000929e8) bg_dia3_numentry_pane_g1

0x0771,	// (0x00085411) bg_button_pane_cp21

0x05be,	// (0x0008525e) cell_dia3_key_num_pane_t1

0x05cc,	// (0x0008526c) cell_dia3_key_num_pane_t2

0x05db,	// (0x0008527b) cell_dia3_key_num_pane_t3

0x05ea,	// (0x0008528a) cell_dia3_key_num_pane_t4

0x0003,

0xff3d,	// (0x00094bdd) cell_dia3_key_num_pane_t

0x0771,	// (0x00085411) bg_button_pane_cp19

0xa987,	// (0x0008f627) cell_dia3_key0_fun_pane_g1

0x0771,	// (0x00085411) bg_button_pane_cp20

0xa98f,	// (0x0008f62f) cell_dia3_key1_fun_pane_g1

0xa997,	// (0x0008f637) area_left_week_number_pane

0xa9a0,	// (0x0008f640) area_top_day_name_pane

0xa9a9,	// (0x0008f649) frame_month_view_pane

0xa9b5,	// (0x0008f655) grid_month_view_pane

0xa9bf,	// (0x0008f65f) cell_top_day_name_pane_ParamLimits

0xa9bf,	// (0x0008f65f) cell_top_day_name_pane

0xd0eb,	// (0x00091d8b) cell_area_left_week_number_pane_ParamLimits

0xd0eb,	// (0x00091d8b) cell_area_left_week_number_pane

0xa9d7,	// (0x0008f677) cell_month_view_pane_ParamLimits

0xa9d7,	// (0x0008f677) cell_month_view_pane

0x0671,	// (0x00085311) frm_month_g1

0xa9f2,	// (0x0008f692) frm_month_g2

0xa9fc,	// (0x0008f69c) frm_month_g3

0xaa06,	// (0x0008f6a6) frm_month_g4

0xaa10,	// (0x0008f6b0) frm_month_g5

0xaa1a,	// (0x0008f6ba) frm_month_g6

0xaa24,	// (0x0008f6c4) frm_month_g7

0x06b6,	// (0x00085356) frm_month_g8

0xaa30,	// (0x0008f6d0) frm_month_g9

0xaa39,	// (0x0008f6d9) frm_month_g10

0xaa42,	// (0x0008f6e2) frm_month_g11

0xaa4b,	// (0x0008f6eb) frm_month_g12

0xaa54,	// (0x0008f6f4) frm_month_g13

0xaa5d,	// (0x0008f6fd) frm_month_g14

0xaa66,	// (0x0008f706) frm_month_g15

0xaa6f,	// (0x0008f70f) frm_month_g16

0x000f,

0xff46,	// (0x00094be6) frm_month_g

0xaa7a,	// (0x0008f71a) cell_top_day_name_pane_t1

0xaa89,	// (0x0008f729) cell_area_left_week_number_pane_g1

0xaa7a,	// (0x0008f71a) cell_area_left_week_number_pane_t1

0x14d0,	// (0x00086170) cell_month_view_pane_g1

0xaa91,	// (0x0008f731) cell_month_view_pane_t1

0x0771,	// (0x00085411) main_fps_pane

0xe2fd,	// (0x00092f9d) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe2fd,	// (0x00092f9d) cmail_ddmenu_btn02_pane_cp1

0xe319,	// (0x00092fb9) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe319,	// (0x00092fb9) cmail_ddmenu_btn02_pane_cp2

0xa38e,	// (0x0008f02e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa38e,	// (0x0008f02e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe6e,	// (0x00094b0e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe6e,	// (0x00094b0e) cmail_ddmenu_btn02_pane_g

0xa3ac,	// (0x0008f04c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa3ac,	// (0x0008f04c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe73,	// (0x00094b13) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe73,	// (0x00094b13) cmail_ddmenu_btn02_pane_t

0xaaa0,	// (0x0008f740) fps_text_pane_ParamLimits

0xaaa0,	// (0x0008f740) fps_text_pane

0xaab7,	// (0x0008f757) main_fps_pane_g1_ParamLimits

0xaab7,	// (0x0008f757) main_fps_pane_g1

0xaad1,	// (0x0008f771) wait_bar_pane_cp010_ParamLimits

0xaad1,	// (0x0008f771) wait_bar_pane_cp010

0xaae2,	// (0x0008f782) fps_text_pane_t1_ParamLimits

0xaae2,	// (0x0008f782) fps_text_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
