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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0001c196 };

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
0x4349,	// (0x000204df) Screen

0x4355,	// (0x000204eb) application_window

0x4361,	// (0x000204f7) area_bottom_pane_ParamLimits

0x4361,	// (0x000204f7) area_bottom_pane

0x2aec,	// (0x0001ec82) area_top_pane_ParamLimits

0x2aec,	// (0x0001ec82) area_top_pane

0x2b50,	// (0x0001ece6) call_video_uplink_pane_ParamLimits

0x2b50,	// (0x0001ece6) call_video_uplink_pane

0x2b8f,	// (0x0001ed25) main_pane_ParamLimits

0x2b8f,	// (0x0001ed25) main_pane

0xde6a,	// (0x0002a000) context_pane

0x6b67,	// (0x00022cfd) navi_pane

0x6b90,	// (0x00022d26) popup_cale_events_window_ParamLimits

0x6b90,	// (0x00022d26) popup_cale_events_window

0xde7d,	// (0x0002a013) popup_mup_playback_window

0x6ba8,	// (0x00022d3e) signal_pane

0xc0a3,	// (0x00028239) main_browser_pane

0xc24f,	// (0x000283e5) main_burst_pane

0x31ac,	// (0x0001f342) main_calc_pane

0xde5e,	// (0x00029ff4) main_cale_day_pane

0x31b9,	// (0x0001f34f) main_cale_month_pane

0xde5e,	// (0x00029ff4) main_cale_week_pane

0xc24f,	// (0x000283e5) main_call_pane

0xbd23,	// (0x00027eb9) main_call_poc_pane

0xc24f,	// (0x000283e5) main_camera_pane

0xc24f,	// (0x000283e5) main_chi_dic_pane

0xca1d,	// (0x00028bb3) main_clock_pane

0xbd23,	// (0x00027eb9) main_fmradio_pane

0xc24f,	// (0x000283e5) main_graph_messa_pane

0xbd23,	// (0x00027eb9) main_help_pane

0xc0a3,	// (0x00028239) main_im_pane

0xbf7e,	// (0x00028114) main_image_pane_ParamLimits

0xbf7e,	// (0x00028114) main_image_pane

0xbd23,	// (0x00027eb9) main_location2_pane

0xc24f,	// (0x000283e5) main_location_pane

0xbf7e,	// (0x00028114) main_messa_pane

0xbd23,	// (0x00027eb9) main_mp2_pane

0xc24f,	// (0x000283e5) main_mp_pane

0xbd23,	// (0x00027eb9) main_msg_pane

0xbd23,	// (0x00027eb9) main_mup_eq_pane

0xbd23,	// (0x00027eb9) main_mup_pane

0xc0a3,	// (0x00028239) main_notes_pane

0xbd23,	// (0x00027eb9) main_pec_pane

0xbd23,	// (0x00027eb9) main_phob_pane

0xbd23,	// (0x00027eb9) main_pinb_pane

0xbd23,	// (0x00027eb9) main_postcard_pane

0xbd23,	// (0x00027eb9) main_qdial_pane

0xc24f,	// (0x000283e5) main_skin_pane

0xbd23,	// (0x00027eb9) main_smil2_pane

0xc24f,	// (0x000283e5) main_smil_pane

0xc24f,	// (0x000283e5) main_video_pane

0xc24f,	// (0x000283e5) main_video_tele_pane

0xbf7e,	// (0x00028114) main_viewer_pane_ParamLimits

0xbf7e,	// (0x00028114) main_viewer_pane

0xc24f,	// (0x000283e5) main_vorec_pane

0x320c,	// (0x0001f3a2) popup_blid_sat_info_window_ParamLimits

0x320c,	// (0x0001f3a2) popup_blid_sat_info_window

0x3232,	// (0x0001f3c8) popup_dyc_status_message_window_ParamLimits

0x3232,	// (0x0001f3c8) popup_dyc_status_message_window

0x3242,	// (0x0001f3d8) popup_grid_large_graphic_window_ParamLimits

0x3242,	// (0x0001f3d8) popup_grid_large_graphic_window

0x32d7,	// (0x0001f46d) popup_loc_request_window_ParamLimits

0x32d7,	// (0x0001f46d) popup_loc_request_window

0x3330,	// (0x0001f4c6) popup_wml_address_window_ParamLimits

0x3330,	// (0x0001f4c6) popup_wml_address_window

0x6a49,	// (0x00022bdf) call_muted_g1

0x6739,	// (0x000228cf) popup_call_audio_conf_window_ParamLimits

0x6739,	// (0x000228cf) popup_call_audio_conf_window

0x6a59,	// (0x00022bef) popup_call_audio_first_window_ParamLimits

0x6a59,	// (0x00022bef) popup_call_audio_first_window

0x6a99,	// (0x00022c2f) popup_call_audio_in_window_ParamLimits

0x6a99,	// (0x00022c2f) popup_call_audio_in_window

0x6abd,	// (0x00022c53) popup_call_audio_out_window_ParamLimits

0x6abd,	// (0x00022c53) popup_call_audio_out_window

0x6adf,	// (0x00022c75) popup_call_audio_second_window_ParamLimits

0x6adf,	// (0x00022c75) popup_call_audio_second_window

0x6b0f,	// (0x00022ca5) popup_call_audio_wait_window_ParamLimits

0x6b0f,	// (0x00022ca5) popup_call_audio_wait_window

0x6b30,	// (0x00022cc6) popup_number_entry_window_ParamLimits

0x6b30,	// (0x00022cc6) popup_number_entry_window

0xb8db,	// (0x00027a71) bg_popup_call_pane_cp05_ParamLimits

0xb8db,	// (0x00027a71) bg_popup_call_pane_cp05

0xb8fb,	// (0x00027a91) popup_number_entry_window_t1

0xb90e,	// (0x00027aa4) popup_number_entry_window_t2

0xb920,	// (0x00027ab6) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x0002b1d6) popup_number_entry_window_t

0xb967,	// (0x00027afd) text_title_cp2

0xb97a,	// (0x00027b10) bg_popup_call_pane_cp_ParamLimits

0xb97a,	// (0x00027b10) bg_popup_call_pane_cp

0xb988,	// (0x00027b1e) call_thumbnail_pane

0xb990,	// (0x00027b26) popup_call_audio_in_window_g1_ParamLimits

0xb990,	// (0x00027b26) popup_call_audio_in_window_g1

0xb99c,	// (0x00027b32) popup_call_audio_in_window_g2_ParamLimits

0xb99c,	// (0x00027b32) popup_call_audio_in_window_g2

0xb9a8,	// (0x00027b3e) popup_call_audio_in_window_g3_ParamLimits

0xb9a8,	// (0x00027b3e) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x0002b1df) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x0002b1df) popup_call_audio_in_window_g

0xb9b4,	// (0x00027b4a) popup_call_audio_in_window_t1_ParamLimits

0xb9b4,	// (0x00027b4a) popup_call_audio_in_window_t1

0xb9d0,	// (0x00027b66) popup_call_audio_in_window_t2_ParamLimits

0xb9d0,	// (0x00027b66) popup_call_audio_in_window_t2

0xb9ec,	// (0x00027b82) popup_call_audio_in_window_t3_ParamLimits

0xb9ec,	// (0x00027b82) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x0002b1e6) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x0002b1e6) popup_call_audio_in_window_t

0xb97a,	// (0x00027b10) bg_popup_call_pane_cp01_ParamLimits

0xb97a,	// (0x00027b10) bg_popup_call_pane_cp01

0xb988,	// (0x00027b1e) call_thumbnail_pane_cp02

0xb9ff,	// (0x00027b95) call_type_pane_cp022

0xba07,	// (0x00027b9d) popup_call_audio_out_window_g1_ParamLimits

0xba07,	// (0x00027b9d) popup_call_audio_out_window_g1

0xba19,	// (0x00027baf) popup_call_audio_out_window_g2_ParamLimits

0xba19,	// (0x00027baf) popup_call_audio_out_window_g2

0xba25,	// (0x00027bbb) popup_call_audio_out_window_g3_ParamLimits

0xba25,	// (0x00027bbb) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x0002b1ed) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x0002b1ed) popup_call_audio_out_window_g

0xba37,	// (0x00027bcd) popup_call_audio_out_window_t1_ParamLimits

0xba37,	// (0x00027bcd) popup_call_audio_out_window_t1

0xba4f,	// (0x00027be5) popup_call_audio_out_window_t2_ParamLimits

0xba4f,	// (0x00027be5) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x0002b1f4) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x0002b1f4) popup_call_audio_out_window_t

0xba64,	// (0x00027bfa) bg_popup_call_pane_ParamLimits

0xba64,	// (0x00027bfa) bg_popup_call_pane

0x43a2,	// (0x00020538) call_thumbnail_pane_cp_ParamLimits

0x43a2,	// (0x00020538) call_thumbnail_pane_cp

0xbae8,	// (0x00027c7e) call_type_pane_cp01_ParamLimits

0xbae8,	// (0x00027c7e) call_type_pane_cp01

0xbb2c,	// (0x00027cc2) popup_call_audio_first_window_g1_ParamLimits

0xbb2c,	// (0x00027cc2) popup_call_audio_first_window_g1

0xbb78,	// (0x00027d0e) popup_call_audio_first_window_g2_ParamLimits

0xbb78,	// (0x00027d0e) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x0002b1f9) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x0002b1f9) popup_call_audio_first_window_g

0xbbbc,	// (0x00027d52) popup_call_audio_first_window_t1_ParamLimits

0xbbbc,	// (0x00027d52) popup_call_audio_first_window_t1

0xbc68,	// (0x00027dfe) popup_call_audio_first_window_t4_ParamLimits

0xbc68,	// (0x00027dfe) popup_call_audio_first_window_t4

0xbcf4,	// (0x00027e8a) popup_call_audio_first_window_t5_ParamLimits

0xbcf4,	// (0x00027e8a) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x0002b1fe) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x0002b1fe) popup_call_audio_first_window_t

0xbd23,	// (0x00027eb9) bg_popup_call_pane_cp02

0xbd2d,	// (0x00027ec3) call_type_pane_cp023

0xbd35,	// (0x00027ecb) popup_call_audio_wait_window_g1

0xbd3d,	// (0x00027ed3) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x0002b205) popup_call_audio_wait_window_g

0xbd45,	// (0x00027edb) popup_call_audio_wait_window_t3

0xbd53,	// (0x00027ee9) bg_popup_call_pane_cp03_ParamLimits

0xbd53,	// (0x00027ee9) bg_popup_call_pane_cp03

0xbdb3,	// (0x00027f49) call_thumbnail_pane_cp011_ParamLimits

0xbdb3,	// (0x00027f49) call_thumbnail_pane_cp011

0xbdbf,	// (0x00027f55) call_type_pane_cp034_ParamLimits

0xbdbf,	// (0x00027f55) call_type_pane_cp034

0xbdfb,	// (0x00027f91) popup_call_audio_second_window_g1_ParamLimits

0xbdfb,	// (0x00027f91) popup_call_audio_second_window_g1

0xbe37,	// (0x00027fcd) popup_call_audio_second_window_g2_ParamLimits

0xbe37,	// (0x00027fcd) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x0002b20a) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x0002b20a) popup_call_audio_second_window_g

0xbe73,	// (0x00028009) popup_call_audio_second_window_t1_ParamLimits

0xbe73,	// (0x00028009) popup_call_audio_second_window_t1

0xbef4,	// (0x0002808a) popup_call_audio_second_window_t2_ParamLimits

0xbef4,	// (0x0002808a) popup_call_audio_second_window_t2

0xbf2a,	// (0x000280c0) popup_call_audio_second_window_t3_ParamLimits

0xbf2a,	// (0x000280c0) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x0002b20f) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x0002b20f) popup_call_audio_second_window_t

0xbd23,	// (0x00027eb9) bg_popup_call_pane_cp04

0xbf60,	// (0x000280f6) list_conf_pane

0xbf68,	// (0x000280fe) popup_call_audio_conf_window_t1

0xbf76,	// (0x0002810c) call_thumbnail_pane_g1

0xbf7e,	// (0x00028114) bg_pinb_pane_ParamLimits

0xbf7e,	// (0x00028114) bg_pinb_pane

0xbf8c,	// (0x00028122) find_pinb_pane

0xbf7e,	// (0x00028114) listscroll_pinb_pane_ParamLimits

0xbf7e,	// (0x00028114) listscroll_pinb_pane

0xbf96,	// (0x0002812c) pinb_bg_pane_g1

0xbf96,	// (0x0002812c) pinb_bg_pane_g2

0xbf96,	// (0x0002812c) pinb_bg_pane_g3

0xbf96,	// (0x0002812c) pinb_bg_pane_g4

0xbf96,	// (0x0002812c) pinb_bg_pane_g5

0xbf96,	// (0x0002812c) pinb_bg_pane_g6

0xbf96,	// (0x0002812c) pinb_bg_pane_g7

0xbf96,	// (0x0002812c) pinb_bg_pane_g8

0xbf96,	// (0x0002812c) pinb_bg_pane_g9

0xbf96,	// (0x0002812c) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x0002b216) pinb_bg_pane_g

0xb8d1,	// (0x00027a67) grid_pinb_pane

0xb8d1,	// (0x00027a67) list_pinb_pane

0xbfa0,	// (0x00028136) scroll_pane_cp01_ParamLimits

0xbfa0,	// (0x00028136) scroll_pane_cp01

0xbfae,	// (0x00028144) find_pinb_pane_g1_ParamLimits

0xbfae,	// (0x00028144) find_pinb_pane_g1

0xbfc6,	// (0x0002815c) find_pinb_pane_t1

0xbfd8,	// (0x0002816e) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x0002b230) find_pinb_pane_t

0xbfed,	// (0x00028183) input_focus_pane_cp01_ParamLimits

0xbfed,	// (0x00028183) input_focus_pane_cp01

0xbff9,	// (0x0002818f) cell_pinb_pane_ParamLimits

0xbff9,	// (0x0002818f) cell_pinb_pane

0xc007,	// (0x0002819d) cell_pinb_pane_g1_ParamLimits

0xc007,	// (0x0002819d) cell_pinb_pane_g1

0xc015,	// (0x000281ab) cell_pinb_pane_g2_ParamLimits

0xc015,	// (0x000281ab) cell_pinb_pane_g2

0xc015,	// (0x000281ab) cell_pinb_pane_g3_ParamLimits

0xc015,	// (0x000281ab) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x0002b235) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x0002b235) cell_pinb_pane_g

0xbd23,	// (0x00027eb9) grid_highlight_pane_cp01

0xbff9,	// (0x0002818f) list_pinb_item_pane_ParamLimits

0xbff9,	// (0x0002818f) list_pinb_item_pane

0xb8d1,	// (0x00027a67) list_highlight_pane_cp02

0xc023,	// (0x000281b9) list_pinb_item_pane_g1_ParamLimits

0xc023,	// (0x000281b9) list_pinb_item_pane_g1

0xc015,	// (0x000281ab) list_pinb_item_pane_g2_ParamLimits

0xc015,	// (0x000281ab) list_pinb_item_pane_g2

0xc007,	// (0x0002819d) list_pinb_item_pane_g3_ParamLimits

0xc007,	// (0x0002819d) list_pinb_item_pane_g3

0xc015,	// (0x000281ab) list_pinb_item_pane_g4_ParamLimits

0xc015,	// (0x000281ab) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x0002b23c) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x0002b23c) list_pinb_item_pane_g

0xc031,	// (0x000281c7) list_pinb_item_pane_t1_ParamLimits

0xc031,	// (0x000281c7) list_pinb_item_pane_t1

0x2d7c,	// (0x0001ef12) calc_display_pane

0x2d9a,	// (0x0001ef30) calc_paper_pane

0x2db6,	// (0x0001ef4c) grid_calc_pane

0xb8d1,	// (0x00027a67) bg_list_pane_cp01

0xc045,	// (0x000281db) clock_g1

0xc045,	// (0x000281db) clock_g2

0x0001,

0xf0af,	// (0x0002b245) clock_g

0xc04f,	// (0x000281e5) clock_t1_ParamLimits

0xc04f,	// (0x000281e5) clock_t1

0xc063,	// (0x000281f9) clock_t2_ParamLimits

0xc063,	// (0x000281f9) clock_t2

0xc063,	// (0x000281f9) clock_t3_ParamLimits

0xc063,	// (0x000281f9) clock_t3

0xc063,	// (0x000281f9) clock_t4_ParamLimits

0xc063,	// (0x000281f9) clock_t4

0xc04f,	// (0x000281e5) clock_t5_ParamLimits

0xc04f,	// (0x000281e5) clock_t5

0xc063,	// (0x000281f9) clock_t6_ParamLimits

0xc063,	// (0x000281f9) clock_t6

0xc063,	// (0x000281f9) clock_t7_ParamLimits

0xc063,	// (0x000281f9) clock_t7

0xc063,	// (0x000281f9) clock_t8_ParamLimits

0xc063,	// (0x000281f9) clock_t8

0xc063,	// (0x000281f9) clock_t9_ParamLimits

0xc063,	// (0x000281f9) clock_t9

0x0008,

0xf0b4,	// (0x0002b24a) clock_t_ParamLimits

0xf0b4,	// (0x0002b24a) clock_t

0xb8d1,	// (0x00027a67) popup_clock_analogue_window_cp02

0xb8d1,	// (0x00027a67) popup_clock_digital_window_cp01

0xbd23,	// (0x00027eb9) listscroll_help_pane

0xbd23,	// (0x00027eb9) phob_pre_status_pane

0xc077,	// (0x0002820d) grid_qdial_pane

0xbf7e,	// (0x00028114) listscroll_mce_pane

0xbf7e,	// (0x00028114) bg_notes_pane

0xc081,	// (0x00028217) list_notes_pane

0x43c6,	// (0x0002055c) scroll_pane_cp06

0xc08f,	// (0x00028225) bg_calc_paper_pane

0x2de2,	// (0x0001ef78) list_calc_pane

0xc0a3,	// (0x00028239) bg_calc_display_pane

0x2dfc,	// (0x0001ef92) calc_display_pane_t1

0x2e11,	// (0x0001efa7) calc_display_pane_t2

0x2e26,	// (0x0001efbc) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x0002b25d) calc_display_pane_t

0x2e38,	// (0x0001efce) cell_calc_pane_ParamLimits

0x2e38,	// (0x0001efce) cell_calc_pane

0xc0af,	// (0x00028245) bg_calc_paper_pane_g1

0xc0bb,	// (0x00028251) bg_calc_paper_pane_g2

0xc0c7,	// (0x0002825d) bg_calc_paper_pane_g3

0xc0d3,	// (0x00028269) bg_calc_paper_pane_g4

0xc0df,	// (0x00028275) bg_calc_paper_pane_g5

0x43d5,	// (0x0002056b) bg_calc_paper_pane_g6

0x43e6,	// (0x0002057c) bg_calc_paper_pane_g7

0x43f7,	// (0x0002058d) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x0002b264) bg_calc_paper_pane_g

0x4408,	// (0x0002059e) calc_bg_paper_pane_g9

0x4419,	// (0x000205af) list_calc_item_pane_ParamLimits

0x4419,	// (0x000205af) list_calc_item_pane

0xc0eb,	// (0x00028281) list_calc_item_pane_g1

0x2e67,	// (0x0001effd) list_calc_item_pane_t1_ParamLimits

0x2e67,	// (0x0001effd) list_calc_item_pane_t1

0x2e79,	// (0x0001f00f) list_calc_item_pane_t2_ParamLimits

0x2e79,	// (0x0001f00f) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x0002b275) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x0002b275) list_calc_item_pane_t

0xbf96,	// (0x0002812c) cell_calc_pane_g1

0xc0f8,	// (0x0002828e) grid_highlight_pane_cp02

0x0046,	// (0x0001c1dc) bg_calc_display_pane_g1

0x2ea9,	// (0x0001f03f) bg_calc_display_pane_g2

0x003d,	// (0x0001c1d3) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x0002b27f) bg_calc_display_pane_g

0x2eb3,	// (0x0001f049) cell_qdial_pane_ParamLimits

0x2eb3,	// (0x0001f049) cell_qdial_pane

0x443a,	// (0x000205d0) cell_qdial_pane_g1_ParamLimits

0x443a,	// (0x000205d0) cell_qdial_pane_g1

0x4447,	// (0x000205dd) cell_qdial_pane_g2_ParamLimits

0x4447,	// (0x000205dd) cell_qdial_pane_g2

0xc11a,	// (0x000282b0) cell_qdial_pane_g3_ParamLimits

0xc11a,	// (0x000282b0) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x0002b286) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x0002b286) cell_qdial_pane_g

0x4465,	// (0x000205fb) cell_qdial_pane_t1_ParamLimits

0x4465,	// (0x000205fb) cell_qdial_pane_t1

0x447d,	// (0x00020613) cell_qdial_pane_t2_ParamLimits

0x447d,	// (0x00020613) cell_qdial_pane_t2

0x4490,	// (0x00020626) cell_qdial_pane_t3_ParamLimits

0x4490,	// (0x00020626) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x0002b28f) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x0002b28f) cell_qdial_pane_t

0xbd23,	// (0x00027eb9) grid_highlight_pane_cp04

0xc126,	// (0x000282bc) thumbnail_qdial_pane_ParamLimits

0xc126,	// (0x000282bc) thumbnail_qdial_pane

0xc182,	// (0x00028318) list_help_pane

0xc18b,	// (0x00028321) scroll_pane_cp02

0x44a3,	// (0x00020639) help_list_pane_t1_ParamLimits

0x44a3,	// (0x00020639) help_list_pane_t1

0x2ec9,	// (0x0001f05f) bg_notes_pane_g2

0x2ed1,	// (0x0001f067) bg_notes_pane_g3

0x2ed9,	// (0x0001f06f) notes_bg_pane_g1

0x2ee1,	// (0x0001f077) notes_bg_pane_g4

0x2ee9,	// (0x0001f07f) notes_bg_pane_g5

0x2ef1,	// (0x0001f087) notes_bg_pane_g6

0x2ef9,	// (0x0001f08f) notes_bg_pane_g7

0x2f01,	// (0x0001f097) notes_bg_pane_g8

0x2f09,	// (0x0001f09f) notes_bg_pane_g9

0x0006,

0xf117,	// (0x0002b2ad) notes_bg_pane_g

0x44ca,	// (0x00020660) list_notes_text_pane_ParamLimits

0x44ca,	// (0x00020660) list_notes_text_pane

0xc194,	// (0x0002832a) list_notes_text_pane_g1

0xc19d,	// (0x00028333) list_notes_text_pane_t1

0x44f2,	// (0x00020688) listscroll_cale_week_pane

0x451e,	// (0x000206b4) bg_cale_heading_pane

0x4547,	// (0x000206dd) bg_cale_pane_cp01

0x4569,	// (0x000206ff) cale_week_corner_pane

0x4588,	// (0x0002071e) cale_week_day_heading_pane

0x45b6,	// (0x0002074c) cale_week_scroll_pane_g1

0x45da,	// (0x00020770) cale_week_scroll_pane_g2

0x45f2,	// (0x00020788) cale_week_scroll_pane_g3

0x460a,	// (0x000207a0) cale_week_scroll_pane_g4

0x4622,	// (0x000207b8) cale_week_scroll_pane_g5

0x463a,	// (0x000207d0) cale_week_scroll_pane_g6

0x465a,	// (0x000207f0) cale_week_scroll_pane_g7

0x467a,	// (0x00020810) cale_week_scroll_pane_g8

0x469a,	// (0x00020830) cale_week_scroll_pane_g9

0x46b7,	// (0x0002084d) cale_week_scroll_pane_g10

0x46d4,	// (0x0002086a) cale_week_scroll_pane_g11

0x46f3,	// (0x00020889) cale_week_scroll_pane_g12

0x4718,	// (0x000208ae) cale_week_scroll_pane_g13

0x4741,	// (0x000208d7) cale_week_scroll_pane_g14

0x476a,	// (0x00020900) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x0002b2bc) cale_week_scroll_pane_g

0x47b3,	// (0x00020949) cale_week_time_pane

0x47d3,	// (0x00020969) grid_cale_week_pane

0xc1d7,	// (0x0002836d) scroll_pane_cp08

0x4804,	// (0x0002099a) cell_cale_week_pane_ParamLimits

0x4804,	// (0x0002099a) cell_cale_week_pane

0x4894,	// (0x00020a2a) cale_week_day_heading_pane_t1

0x48bc,	// (0x00020a52) cale_week_day_heading_pane_t2

0x48e9,	// (0x00020a7f) cale_week_day_heading_pane_t3

0x4916,	// (0x00020aac) cale_week_day_heading_pane_t4

0x4943,	// (0x00020ad9) cale_week_day_heading_pane_t5

0x4970,	// (0x00020b06) cale_week_day_heading_pane_t6

0x499d,	// (0x00020b33) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x0002b2dd) cale_week_day_heading_pane_t

0xc1f4,	// (0x0002838a) bg_cale_side_pane

0x2f11,	// (0x0001f0a7) cale_week_time_pane_t1

0x2f35,	// (0x0001f0cb) cale_week_time_pane_t2

0x2f59,	// (0x0001f0ef) cale_week_time_pane_t3

0x2f7d,	// (0x0001f113) cale_week_time_pane_t4

0x2fa1,	// (0x0001f137) cale_week_time_pane_t5

0x2fc7,	// (0x0001f15d) cale_week_time_pane_t6

0x2fef,	// (0x0001f185) cale_week_time_pane_t7

0x301b,	// (0x0001f1b1) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x0002b2ec) cale_week_time_pane_t

0x49c5,	// (0x00020b5b) cell_cale_week_pane_g2

0x49e9,	// (0x00020b7f) cell_cale_week_pane_g3_ParamLimits

0x49e9,	// (0x00020b7f) cell_cale_week_pane_g3

0xc202,	// (0x00028398) grid_highlight_pane_cp07

0xc20a,	// (0x000283a0) listscroll_gms_pane

0xc214,	// (0x000283aa) grid_gms_pane

0xc21d,	// (0x000283b3) listscroll_gms_pane_g1

0xc225,	// (0x000283bb) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x0002b2fd) listscroll_gms_pane_g

0x4a01,	// (0x00020b97) scroll_pane_cp010

0x4a0c,	// (0x00020ba2) cell_gms_pane_ParamLimits

0x4a0c,	// (0x00020ba2) cell_gms_pane

0x4a1f,	// (0x00020bb5) cell_gms_pane_g1

0xc22d,	// (0x000283c3) cell_gms_pane_g2

0xc235,	// (0x000283cb) cell_gms_pane_g3

0xc23e,	// (0x000283d4) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x0002b302) cell_gms_pane_g

0xc247,	// (0x000283dd) grid_highlight_pane_cp09

0x69cd,	// (0x00022b63) phob_pre_status_pane_g1

0x69d5,	// (0x00022b6b) phob_pre_status_pane_g2

0x69dd,	// (0x00022b73) phob_pre_status_pane_g3

0x69e5,	// (0x00022b7b) phob_pre_status_pane_g4

0x0004,

0xf525,	// (0x0002b6bb) phob_pre_status_pane_g

0x69f5,	// (0x00022b8b) phob_pre_status_pane_t1

0x6a05,	// (0x00022b9b) phob_pre_status_pane_t2

0x6a15,	// (0x00022bab) phob_pre_status_pane_t3

0x0002,

0xf530,	// (0x0002b6c6) phob_pre_status_pane_t

0xc24f,	// (0x000283e5) bg_list_pane_cp05

0x4a2f,	// (0x00020bc5) grid_vorec_pane

0x4a39,	// (0x00020bcf) vorec_t1

0x4a47,	// (0x00020bdd) vorec_t2

0x4a55,	// (0x00020beb) vorec_t3

0x4a63,	// (0x00020bf9) vorec_t4

0x4324,	// (0x000204ba) vorec_t5

0x4332,	// (0x000204c8) vorec_t6

0x0004,

0xf175,	// (0x0002b30b) vorec_t

0x4340,	// (0x000204d6) wait_bar_pane_cp01

0x4a7f,	// (0x00020c15) cell_vorec_pane_ParamLimits

0x4a7f,	// (0x00020c15) cell_vorec_pane

0x304b,	// (0x0001f1e1) cell_vorec_pane_g1

0xbd23,	// (0x00027eb9) grid_highlight_pane_cp05

0xbff9,	// (0x0002818f) cams_zoom_pane

0xbff9,	// (0x0002818f) image_vga_pane

0xc015,	// (0x000281ab) main_camera_pane_g1

0xc015,	// (0x000281ab) main_camera_pane_g2

0xc015,	// (0x000281ab) main_camera_pane_g3

0xc015,	// (0x000281ab) main_camera_pane_g4

0xc015,	// (0x000281ab) main_camera_pane_g5

0xc015,	// (0x000281ab) main_camera_pane_g6

0xc015,	// (0x000281ab) main_camera_pane_g7

0x0007,

0xf180,	// (0x0002b316) main_camera_pane_g

0xc063,	// (0x000281f9) main_camera_pane_t1

0xc063,	// (0x000281f9) main_camera_pane_t2

0x0001,

0xf191,	// (0x0002b327) main_camera_pane_t

0x4a94,	// (0x00020c2a) cams_zoom_pane_cp_ParamLimits

0x4a94,	// (0x00020c2a) cams_zoom_pane_cp

0x4ac2,	// (0x00020c58) image_cif_pane_ParamLimits

0x4ac2,	// (0x00020c58) image_cif_pane

0xb8d1,	// (0x00027a67) image_subqcif_pane

0x4ad0,	// (0x00020c66) main_video_pane_g1_ParamLimits

0x4ad0,	// (0x00020c66) main_video_pane_g1

0x4af8,	// (0x00020c8e) main_video_pane_g2_ParamLimits

0x4af8,	// (0x00020c8e) main_video_pane_g2

0x4b2b,	// (0x00020cc1) main_video_pane_g3_ParamLimits

0x4b2b,	// (0x00020cc1) main_video_pane_g3

0x4b2b,	// (0x00020cc1) main_video_pane_g4_ParamLimits

0x4b2b,	// (0x00020cc1) main_video_pane_g4

0x4b59,	// (0x00020cef) main_video_pane_g5_ParamLimits

0x4b59,	// (0x00020cef) main_video_pane_g5

0xc257,	// (0x000283ed) main_video_pane_g6_ParamLimits

0xc257,	// (0x000283ed) main_video_pane_g6

0x0006,

0xf196,	// (0x0002b32c) main_video_pane_g_ParamLimits

0xf196,	// (0x0002b32c) main_video_pane_g

0x4b75,	// (0x00020d0b) main_video_pane_t1_ParamLimits

0x4b75,	// (0x00020d0b) main_video_pane_t1

0xc045,	// (0x000281db) cams_zoom_pane_g1

0xc045,	// (0x000281db) cams_zoom_pane_g2

0xc045,	// (0x000281db) cams_zoom_pane_g3

0xc045,	// (0x000281db) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x0002b33b) cams_zoom_pane_g

0xbff9,	// (0x0002818f) grid_cams_pane

0xbff9,	// (0x0002818f) linegrid_cams_pane

0x4baf,	// (0x00020d45) cell_cams_pane_ParamLimits

0x4baf,	// (0x00020d45) cell_cams_pane

0xb8d1,	// (0x00027a67) cams_burst_image_pane

0xc045,	// (0x000281db) cell_cams_pane_g1

0xb8d1,	// (0x00027a67) grid_highlight_pane_cp03

0xbf96,	// (0x0002812c) mp_bg_pane_g1

0xb8d1,	// (0x00027a67) bg_list_pane_cp03

0xb8d1,	// (0x00027a67) bg_mp_pane

0xb8d1,	// (0x00027a67) grid_mp_pane

0xc045,	// (0x000281db) media_player_g1

0xc7b2,	// (0x00028948) media_player_t1

0xc7b2,	// (0x00028948) media_player_t2

0xc7b2,	// (0x00028948) media_player_t3

0xc7b2,	// (0x00028948) media_player_t4

0xc7b2,	// (0x00028948) media_player_t5

0xc7b2,	// (0x00028948) media_player_t6

0xc7b2,	// (0x00028948) media_player_t7

0x0006,

0xf50f,	// (0x0002b6a5) media_player_t

0xb8d1,	// (0x00027a67) wait_bar_pane_cp02

0xf4f4,	// (0x0002b68a) main_usb_pane_t

0xca1d,	// (0x00028bb3) cell_mp_pane

0xbf96,	// (0x0002812c) cell_mp_pane_g1

0xbd23,	// (0x00027eb9) grid_highlight_pane_cp06

0xc271,	// (0x00028407) grid_skin_colour_pane

0xc279,	// (0x0002840f) list_highlight_pane_cp03

0x4bc4,	// (0x00020d5a) skin_g1

0xc281,	// (0x00028417) skin_t1

0xc290,	// (0x00028426) skin_t2

0x0001,

0xf1d3,	// (0x0002b369) skin_t

0x4bce,	// (0x00020d64) cell_skin_colour_pane_ParamLimits

0x4bce,	// (0x00020d64) cell_skin_colour_pane

0xc29e,	// (0x00028434) cell_skin_colour_pane_g1

0x4c4e,	// (0x00020de4) call_video_g1_ParamLimits

0x4c4e,	// (0x00020de4) call_video_g1

0x4c5e,	// (0x00020df4) call_video_g2_ParamLimits

0x4c5e,	// (0x00020df4) call_video_g2

0x0001,

0xf1d8,	// (0x0002b36e) call_video_g_ParamLimits

0xf1d8,	// (0x0002b36e) call_video_g

0x4cae,	// (0x00020e44) call_video_uplink_pane_cp1_ParamLimits

0x4cae,	// (0x00020e44) call_video_uplink_pane_cp1

0xc2b0,	// (0x00028446) call_video_uplink_pane_cp2

0x4d7c,	// (0x00020f12) video_down_crop_pane_ParamLimits

0x4d7c,	// (0x00020f12) video_down_crop_pane

0x4e6e,	// (0x00021004) video_down_pane_ParamLimits

0x4e6e,	// (0x00021004) video_down_pane

0xc2b8,	// (0x0002844e) video_down_subqcif_pane_ParamLimits

0xc2b8,	// (0x0002844e) video_down_subqcif_pane

0xc2d2,	// (0x00028468) video_down_subqcif_pane_cp_ParamLimits

0xc2d2,	// (0x00028468) video_down_subqcif_pane_cp

0xc2fa,	// (0x00028490) im_reading_pane_ParamLimits

0xc2fa,	// (0x00028490) im_reading_pane

0x4f8b,	// (0x00021121) im_writing_pane_ParamLimits

0x4f8b,	// (0x00021121) im_writing_pane

0x4fa9,	// (0x0002113f) im_reading_pane_t1

0xc314,	// (0x000284aa) list_im_pane

0xc325,	// (0x000284bb) scroll_pane_cp07

0x4feb,	// (0x00021181) im_writing_pane_t1_ParamLimits

0x4feb,	// (0x00021181) im_writing_pane_t1

0xc33e,	// (0x000284d4) im_writing_pane_t2_ParamLimits

0xc33e,	// (0x000284d4) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x0002b378) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x0002b378) im_writing_pane_t

0xbd23,	// (0x00027eb9) input_focus_pane_cp04

0xbd23,	// (0x00027eb9) input_focus_pane_cp05

0x4ffd,	// (0x00021193) list_im_single_pane_ParamLimits

0x4ffd,	// (0x00021193) list_im_single_pane

0xc35b,	// (0x000284f1) list_single_im_pane_t1

0xc24f,	// (0x000283e5) blid_accuracy_pane

0xc24f,	// (0x000283e5) blid_compass_pane

0xde16,	// (0x00029fac) main_location_t1

0xde16,	// (0x00029fac) main_location_t2

0xde16,	// (0x00029fac) main_location_t3

0x0002,

0xf51e,	// (0x0002b6b4) main_location_t

0xbd23,	// (0x00027eb9) aid_levels_location

0xbf96,	// (0x0002812c) blid_accuracy_pane_g1

0xbf96,	// (0x0002812c) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x0002b3cc) blid_accuracy_pane_g

0xc395,	// (0x0002852b) wml_content_pane

0xc3d3,	// (0x00028569) wml_button_pane_ParamLimits

0xc3d3,	// (0x00028569) wml_button_pane

0x5016,	// (0x000211ac) wml_list_single_large_pane_ParamLimits

0x5016,	// (0x000211ac) wml_list_single_large_pane

0x5038,	// (0x000211ce) wml_list_single_medium_pane_ParamLimits

0x5038,	// (0x000211ce) wml_list_single_medium_pane

0x505b,	// (0x000211f1) wml_list_single_small_pane_ParamLimits

0x505b,	// (0x000211f1) wml_list_single_small_pane

0xc3e7,	// (0x0002857d) wml_selection_box_pane_ParamLimits

0xc3e7,	// (0x0002857d) wml_selection_box_pane

0xc3fa,	// (0x00028590) wml_list_single_pane_t1

0xc409,	// (0x0002859f) wml_list_single_medium_pane_t1

0xc418,	// (0x000285ae) wml_list_single_large_pane_t1

0xc427,	// (0x000285bd) input_focus_pane_cp02_ParamLimits

0xc427,	// (0x000285bd) input_focus_pane_cp02

0xc43a,	// (0x000285d0) wml_selection_box_pane_g1

0xc443,	// (0x000285d9) wml_selection_box_pane_t1_ParamLimits

0xc443,	// (0x000285d9) wml_selection_box_pane_t1

0xbf7e,	// (0x00028114) bg_wml_button_pane_ParamLimits

0xbf7e,	// (0x00028114) bg_wml_button_pane

0xc45b,	// (0x000285f1) wml_button_pane_g1

0xc463,	// (0x000285f9) wml_button_pane_t1

0xc45b,	// (0x000285f1) wml_button_bg_pane_g1

0xc473,	// (0x00028609) wml_button_bg_pane_g2

0xc47b,	// (0x00028611) wml_button_bg_pane_g3

0xc483,	// (0x00028619) wml_button_bg_pane_g4

0xc48b,	// (0x00028621) wml_button_bg_pane_g5

0xc493,	// (0x00028629) wml_button_bg_pane_g6

0xc49b,	// (0x00028631) wml_button_bg_pane_g7

0xc4a3,	// (0x00028639) wml_button_bg_pane_g8

0xc4ab,	// (0x00028641) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x0002b37d) wml_button_bg_pane_g

0x5083,	// (0x00021219) bg_list_pane_cp02

0xc4b3,	// (0x00028649) mce_header_pane_ParamLimits

0xc4b3,	// (0x00028649) mce_header_pane

0xc4c9,	// (0x0002865f) mce_icon_pane

0xc4c9,	// (0x0002865f) mce_image_pane

0xc4d2,	// (0x00028668) mce_text_pane_ParamLimits

0xc4d2,	// (0x00028668) mce_text_pane

0x508d,	// (0x00021223) scroll_pane_cp03

0xc3cb,	// (0x00028561) scroll_pane_cp04

0xc4e5,	// (0x0002867b) scroll_pane_cp05_ParamLimits

0xc4e5,	// (0x0002867b) scroll_pane_cp05

0x5097,	// (0x0002122d) mce_header_field_pane_ParamLimits

0x5097,	// (0x0002122d) mce_header_field_pane

0x50b9,	// (0x0002124f) mce_header_field_pane_2_ParamLimits

0x50b9,	// (0x0002124f) mce_header_field_pane_2

0x50cf,	// (0x00021265) mce_header_field_pane_3

0x50d7,	// (0x0002126d) list_single_mce_message_pane_ParamLimits

0x50d7,	// (0x0002126d) list_single_mce_message_pane

0x50f6,	// (0x0002128c) list_single_mce_smart_pane_ParamLimits

0x50f6,	// (0x0002128c) list_single_mce_smart_pane

0xc4f1,	// (0x00028687) input_focus_pane_cp03

0xc4fa,	// (0x00028690) list_header_data_pane

0x5120,	// (0x000212b6) mce_header_field_pane_t1

0x5130,	// (0x000212c6) list_single_mce_header_pane_ParamLimits

0x5130,	// (0x000212c6) list_single_mce_header_pane

0xc502,	// (0x00028698) list_single_mce_header_pane_t1

0xc511,	// (0x000286a7) list_single_mce_message_pane_g1

0xc519,	// (0x000286af) list_single_mce_message_pane_t1

0x5174,	// (0x0002130a) bg_cale_heading_pane_cp01_ParamLimits

0x5174,	// (0x0002130a) bg_cale_heading_pane_cp01

0xc527,	// (0x000286bd) bg_cale_pane_cp02_ParamLimits

0xc527,	// (0x000286bd) bg_cale_pane_cp02

0x51c6,	// (0x0002135c) cale_month_corner_pane

0x51e5,	// (0x0002137b) cale_month_day_heading_pane_ParamLimits

0x51e5,	// (0x0002137b) cale_month_day_heading_pane

0x5247,	// (0x000213dd) cale_month_pane_g1_ParamLimits

0x5247,	// (0x000213dd) cale_month_pane_g1

0x528e,	// (0x00021424) cale_month_pane_g2_ParamLimits

0x528e,	// (0x00021424) cale_month_pane_g2

0x52c6,	// (0x0002145c) cale_month_pane_g3_ParamLimits

0x52c6,	// (0x0002145c) cale_month_pane_g3

0x531a,	// (0x000214b0) cale_month_pane_g4_ParamLimits

0x531a,	// (0x000214b0) cale_month_pane_g4

0x536e,	// (0x00021504) cale_month_pane_g5_ParamLimits

0x536e,	// (0x00021504) cale_month_pane_g5

0x53c2,	// (0x00021558) cale_month_pane_g6_ParamLimits

0x53c2,	// (0x00021558) cale_month_pane_g6

0x5426,	// (0x000215bc) cale_month_pane_g7_ParamLimits

0x5426,	// (0x000215bc) cale_month_pane_g7

0x548a,	// (0x00021620) cale_month_pane_g8_ParamLimits

0x548a,	// (0x00021620) cale_month_pane_g8

0x54ee,	// (0x00021684) cale_month_pane_g9_ParamLimits

0x54ee,	// (0x00021684) cale_month_pane_g9

0x5548,	// (0x000216de) cale_month_pane_g10_ParamLimits

0x5548,	// (0x000216de) cale_month_pane_g10

0x559a,	// (0x00021730) cale_month_pane_g11_ParamLimits

0x559a,	// (0x00021730) cale_month_pane_g11

0x55e8,	// (0x0002177e) cale_month_pane_g12_ParamLimits

0x55e8,	// (0x0002177e) cale_month_pane_g12

0x5638,	// (0x000217ce) cale_month_pane_g13_ParamLimits

0x5638,	// (0x000217ce) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x0002b390) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x0002b390) cale_month_pane_g

0x5688,	// (0x0002181e) cale_month_week_pane

0x56a8,	// (0x0002183e) grid_cale_month_pane_ParamLimits

0x56a8,	// (0x0002183e) grid_cale_month_pane

0x5701,	// (0x00021897) cale_month_day_heading_pane_t1

0x5783,	// (0x00021919) cale_month_day_heading_pane_t2

0x57fc,	// (0x00021992) cale_month_day_heading_pane_t3

0x5875,	// (0x00021a0b) cale_month_day_heading_pane_t4

0x58ee,	// (0x00021a84) cale_month_day_heading_pane_t5

0x596f,	// (0x00021b05) cale_month_day_heading_pane_t6

0x59f8,	// (0x00021b8e) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x0002b3ab) cale_month_day_heading_pane_t

0xc1f4,	// (0x0002838a) bg_cale_side_pane_cp01

0x5a81,	// (0x00021c17) cale_month_week_pane_t1

0x5a9a,	// (0x00021c30) cale_month_week_pane_t2

0x5ab3,	// (0x00021c49) cale_month_week_pane_t3

0x5acc,	// (0x00021c62) cale_month_week_pane_t4

0x5ae5,	// (0x00021c7b) cale_month_week_pane_t5

0x5b02,	// (0x00021c98) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x0002b3ba) cale_month_week_pane_t

0x5b25,	// (0x00021cbb) cell_cale_month_pane_ParamLimits

0x5b25,	// (0x00021cbb) cell_cale_month_pane

0x3055,	// (0x0001f1eb) cell_cale_month_pane_g1

0x3061,	// (0x0001f1f7) cell_cale_month_pane_t1_ParamLimits

0x3061,	// (0x0001f1f7) cell_cale_month_pane_t1

0xc202,	// (0x00028398) grid_highlight_pane_cp08

0xbf96,	// (0x0002812c) main_smil_g1

0x5c53,	// (0x00021de9) smil_status_pane

0xc566,	// (0x000286fc) smil_text_pane

0xdd1e,	// (0x00029eb4) bg_popup_call3_rect_pane_g8

0xdd26,	// (0x00029ebc) bg_popup_call3_rect_pane_g9

0x0008,

0xf4b2,	// (0x0002b648) bg_popup_call3_rect_pane_g

0xdedf,	// (0x0002a075) smil_status_volume_pane_g1

0xc570,	// (0x00028706) smil_status_pane_t1

0x3369,	// (0x0001f4ff) volume_smil_pane

0xc587,	// (0x0002871d) list_smil_text_pane

0x5c66,	// (0x00021dfc) scroll_pane_cp011

0x5c71,	// (0x00021e07) smil_text_list_pane_t1_ParamLimits

0x5c71,	// (0x00021e07) smil_text_list_pane_t1

0x308d,	// (0x0001f223) aid_volume_smil_ParamLimits

0x308d,	// (0x0001f223) aid_volume_smil

0xbf96,	// (0x0002812c) smil_volume_pane_g1

0xbf96,	// (0x0002812c) smil_volume_pane_g2

0x0001,

0xf236,	// (0x0002b3cc) smil_volume_pane_g

0x44f2,	// (0x00020688) listscroll_cale_day_pane

0xc591,	// (0x00028727) bg_cale_pane

0xc5a9,	// (0x0002873f) list_cale_pane

0xc5cc,	// (0x00028762) scroll_pane_cp09

0xc5dd,	// (0x00028773) cale_bg_pane_g1

0xc5e5,	// (0x0002877b) cale_bg_pane_g2

0xc5ed,	// (0x00028783) cale_bg_pane_g3

0xc5f5,	// (0x0002878b) cale_bg_pane_g4

0xc5fd,	// (0x00028793) cale_bg_pane_g5

0xc605,	// (0x0002879b) cale_bg_pane_g6

0xc60d,	// (0x000287a3) cale_bg_pane_g7

0xc61e,	// (0x000287b4) cale_bg_pane_g8

0xc626,	// (0x000287bc) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x0002b3d1) cale_bg_pane_g

0xc62e,	// (0x000287c4) list_cale_time_pane_ParamLimits

0xc62e,	// (0x000287c4) list_cale_time_pane

0xc645,	// (0x000287db) list_cale_time_pane_g1_ParamLimits

0xc645,	// (0x000287db) list_cale_time_pane_g1

0xc651,	// (0x000287e7) list_cale_time_pane_g2_ParamLimits

0xc651,	// (0x000287e7) list_cale_time_pane_g2

0x5ccd,	// (0x00021e63) list_cale_time_pane_g3_ParamLimits

0x5ccd,	// (0x00021e63) list_cale_time_pane_g3

0x5cdb,	// (0x00021e71) list_cale_time_pane_g4_ParamLimits

0x5cdb,	// (0x00021e71) list_cale_time_pane_g4

0x5ce9,	// (0x00021e7f) list_cale_time_pane_g5_ParamLimits

0x5ce9,	// (0x00021e7f) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x0002b3e4) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x0002b3e4) list_cale_time_pane_g

0xc66b,	// (0x00028801) list_cale_time_pane_t1_ParamLimits

0xc66b,	// (0x00028801) list_cale_time_pane_t1

0xc693,	// (0x00028829) list_cale_time_pane_t2_ParamLimits

0xc693,	// (0x00028829) list_cale_time_pane_t2

0x5f4c,	// (0x000220e2) aid_blid_cardinal_pane

0x5f8e,	// (0x00022124) compass_pane_t4

0xc6bb,	// (0x00028851) list_cale_time_pane_t4_ParamLimits

0xc6bb,	// (0x00028851) list_cale_time_pane_t4

0x5f9c,	// (0x00022132) compass_pane_t5

0x5fac,	// (0x00022142) compass_pane_t6

0x5fba,	// (0x00022150) compass_pane_t7

0xcacd,	// (0x00028c63) navi_pane_cc_t1

0xcc26,	// (0x00028dbc) aid_phob_thumbnail_center_pane

0x6502,	// (0x00022698) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x0002b3f1) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x0002b3f1) list_cale_time_pane_t

0xb97a,	// (0x00027b10) bg_popup_window_pane_cp02_ParamLimits

0xb97a,	// (0x00027b10) bg_popup_window_pane_cp02

0xc6e3,	// (0x00028879) heading_pane_cp01_ParamLimits

0xc6e3,	// (0x00028879) heading_pane_cp01

0xc6ef,	// (0x00028885) loc_req_pane_ParamLimits

0xc6ef,	// (0x00028885) loc_req_pane

0xc6ff,	// (0x00028895) loc_type_pane_ParamLimits

0xc6ff,	// (0x00028895) loc_type_pane

0xc711,	// (0x000288a7) loc_type_pane_t1_ParamLimits

0xc711,	// (0x000288a7) loc_type_pane_t1

0xc723,	// (0x000288b9) loc_type_pane_t2_ParamLimits

0xc723,	// (0x000288b9) loc_type_pane_t2

0xc735,	// (0x000288cb) loc_type_pane_t3_ParamLimits

0xc735,	// (0x000288cb) loc_type_pane_t3

0x0002,

0xf262,	// (0x0002b3f8) loc_type_pane_t_ParamLimits

0xf262,	// (0x0002b3f8) loc_type_pane_t

0xc747,	// (0x000288dd) list_loc_req_pane

0xc751,	// (0x000288e7) scroll_pane_cp012

0x5cf7,	// (0x00021e8d) list_single_loc_request_popup_menu_pane_ParamLimits

0x5cf7,	// (0x00021e8d) list_single_loc_request_popup_menu_pane

0xc75c,	// (0x000288f2) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc75c,	// (0x000288f2) list_single_loc_request_popup_menu_pane_g1

0xc768,	// (0x000288fe) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc768,	// (0x000288fe) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x0002b3ff) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x0002b3ff) list_single_loc_request_popup_menu_pane_g

0xc774,	// (0x0002890a) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc774,	// (0x0002890a) list_single_loc_request_popup_menu_pane_t1

0x5d09,	// (0x00021e9f) bg_popup_window_pane_cp03_ParamLimits

0x5d09,	// (0x00021e9f) bg_popup_window_pane_cp03

0x5d17,	// (0x00021ead) heading_loc_req_pane_ParamLimits

0x5d17,	// (0x00021ead) heading_loc_req_pane

0x5d23,	// (0x00021eb9) popup_dyc_status_message_window_g1_ParamLimits

0x5d23,	// (0x00021eb9) popup_dyc_status_message_window_g1

0x5d2f,	// (0x00021ec5) popup_dyc_status_message_window_t1_ParamLimits

0x5d2f,	// (0x00021ec5) popup_dyc_status_message_window_t1

0x5d41,	// (0x00021ed7) popup_dyc_status_message_window_t2_ParamLimits

0x5d41,	// (0x00021ed7) popup_dyc_status_message_window_t2

0x5d53,	// (0x00021ee9) popup_dyc_status_message_window_t3_ParamLimits

0x5d53,	// (0x00021ee9) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x0002b404) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x0002b404) popup_dyc_status_message_window_t

0xbd23,	// (0x00027eb9) bg_heading_pane_cp01

0xc78a,	// (0x00028920) heading_loc_req_pane_g1

0xc792,	// (0x00028928) heading_loc_req_pane_g2

0xc79a,	// (0x00028930) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x0002b40b) heading_loc_req_pane_g

0xc7a2,	// (0x00028938) heading_loc_req_pane_t1

0xc7c2,	// (0x00028958) bg_popup_sub_pane_cp01_ParamLimits

0xc7c2,	// (0x00028958) bg_popup_sub_pane_cp01

0xc7d0,	// (0x00028966) popup_cale_events_window_g1_ParamLimits

0xc7d0,	// (0x00028966) popup_cale_events_window_g1

0xc7f0,	// (0x00028986) popup_cale_events_window_g2_ParamLimits

0xc7f0,	// (0x00028986) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x0002b42d) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x0002b42d) popup_cale_events_window_g

0xc810,	// (0x000289a6) popup_cale_events_window_t1_ParamLimits

0xc810,	// (0x000289a6) popup_cale_events_window_t1

0xc822,	// (0x000289b8) popup_cale_events_window_t2_ParamLimits

0xc822,	// (0x000289b8) popup_cale_events_window_t2

0xc860,	// (0x000289f6) popup_cale_events_window_t3_ParamLimits

0xc860,	// (0x000289f6) popup_cale_events_window_t3

0xc89a,	// (0x00028a30) popup_cale_events_window_t4_ParamLimits

0xc89a,	// (0x00028a30) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x0002b432) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x0002b432) popup_cale_events_window_t

0x5d7d,	// (0x00021f13) call_type_pane

0xd205,	// (0x0002939b) popup_call_status_window_g1

0x5d89,	// (0x00021f1f) popup_call_status_window_g2

0x5d95,	// (0x00021f2b) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x0002b43b) popup_call_status_window_g

0xc8d0,	// (0x00028a66) call_type_pane_g1

0xc8d9,	// (0x00028a6f) call_type_pane_g2

0x0001,

0xf2ac,	// (0x0002b442) call_type_pane_g

0xbd23,	// (0x00027eb9) bg_popup_sub_pane_cp02

0xc8e2,	// (0x00028a78) listscroll_popup_wml_pane

0xc8ea,	// (0x00028a80) list_wml_pane

0xc8f4,	// (0x00028a8a) scroll_pane_cp013

0xc8ff,	// (0x00028a95) list_single_graphic_popup_wml_pane_ParamLimits

0xc8ff,	// (0x00028a95) list_single_graphic_popup_wml_pane

0xbf96,	// (0x0002812c) list_single_graphic_popup_wml_pane_g1

0xc913,	// (0x00028aa9) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x0002b447) list_single_graphic_popup_wml_pane_g

0xc91b,	// (0x00028ab1) list_single_graphic_popup_wml_pane_t1

0xc931,	// (0x00028ac7) aid_call_pane

0xbf76,	// (0x0002810c) popup_clock_analogue_window_g1

0xbf76,	// (0x0002810c) popup_clock_analogue_window_g2

0x30af,	// (0x0001f245) popup_clock_analogue_window_g3

0x30af,	// (0x0001f245) popup_clock_analogue_window_g4

0xbf96,	// (0x0002812c) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x0002b44c) popup_clock_analogue_window_g

0x30b7,	// (0x0001f24d) popup_clock_analogue_window_t1

0x30c5,	// (0x0001f25b) clock_digital_number_pane_ParamLimits

0x30c5,	// (0x0001f25b) clock_digital_number_pane

0x30d1,	// (0x0001f267) clock_digital_number_pane_cp02_ParamLimits

0x30d1,	// (0x0001f267) clock_digital_number_pane_cp02

0x30dd,	// (0x0001f273) clock_digital_number_pane_cp03_ParamLimits

0x30dd,	// (0x0001f273) clock_digital_number_pane_cp03

0x30e9,	// (0x0001f27f) clock_digital_number_pane_cp04_ParamLimits

0x30e9,	// (0x0001f27f) clock_digital_number_pane_cp04

0x30f5,	// (0x0001f28b) clock_digital_separator_pane_ParamLimits

0x30f5,	// (0x0001f28b) clock_digital_separator_pane

0x3101,	// (0x0001f297) popup_clock_digital_window_t1

0xbf96,	// (0x0002812c) clock_digital_number_pane_g1

0xbf96,	// (0x0002812c) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x0002b3cc) clock_digital_number_pane_g

0xbf96,	// (0x0002812c) clock_digital_separator_pane_g1

0xbf96,	// (0x0002812c) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x0002b3cc) clock_digital_separator_pane_g

0xbd23,	// (0x00027eb9) bg_popup_window_pane_cp04

0xc939,	// (0x00028acf) heading_pane_cp03

0xc24f,	// (0x000283e5) listscroll_popup_gms_pane

0xbd23,	// (0x00027eb9) grid_large_graphic_popup_pane

0xc942,	// (0x00028ad8) listscroll_popup_gms_pane_g1

0xc94b,	// (0x00028ae1) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x0002b457) listscroll_popup_gms_pane_g

0xc954,	// (0x00028aea) scroll_pane_cp014

0xbff9,	// (0x0002818f) cell_large_graphic_popup_pane_ParamLimits

0xbff9,	// (0x0002818f) cell_large_graphic_popup_pane

0xc007,	// (0x0002819d) cell_large_graphic_popup_pane_g1_ParamLimits

0xc007,	// (0x0002819d) cell_large_graphic_popup_pane_g1

0xc95d,	// (0x00028af3) cell_large_graphic_popup_pane_g2_ParamLimits

0xc95d,	// (0x00028af3) cell_large_graphic_popup_pane_g2

0xc96b,	// (0x00028b01) cell_large_graphic_popup_pane_g3_ParamLimits

0xc96b,	// (0x00028b01) cell_large_graphic_popup_pane_g3

0xc979,	// (0x00028b0f) cell_large_graphic_popup_pane_g4_ParamLimits

0xc979,	// (0x00028b0f) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x0002b45c) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x0002b45c) cell_large_graphic_popup_pane_g

0xbd23,	// (0x00027eb9) grid_highlight_pane_cp010

0xbf96,	// (0x0002812c) bg_popup_call_pane_g1

0xc98a,	// (0x00028b20) list_single_graphic_popup_conf_pane_ParamLimits

0xc98a,	// (0x00028b20) list_single_graphic_popup_conf_pane

0xc99c,	// (0x00028b32) list_highlight_pane_cp01

0xc9a5,	// (0x00028b3b) list_single_graphic_popup_conf_pane_g1

0xc9ad,	// (0x00028b43) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x0002b465) list_single_graphic_popup_conf_pane_g

0xc9b5,	// (0x00028b4b) list_single_graphic_popup_conf_pane_t1

0xc9c3,	// (0x00028b59) linegrid_cams_pane_g1

0x5da1,	// (0x00021f37) linegrid_cams_pane_g2

0xc235,	// (0x000283cb) linegrid_cams_pane_g3

0xc9cc,	// (0x00028b62) linegrid_cams_pane_g4

0x5daa,	// (0x00021f40) linegrid_cams_pane_g5

0x5db3,	// (0x00021f49) linegrid_cams_pane_g6

0xc23e,	// (0x000283d4) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x0002b46a) linegrid_cams_pane_g

0xc9d5,	// (0x00028b6b) popup_clock_analogue_window

0xc9d5,	// (0x00028b6b) popup_clock_digital_window

0xbd23,	// (0x00027eb9) popup_phob_thumbnail_window

0xbf96,	// (0x0002812c) call_video_uplink_pane_g1

0xc9de,	// (0x00028b74) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x0002b479) call_video_uplink_pane_g

0xc9e6,	// (0x00028b7c) video_uplink_pane

0xc9ee,	// (0x00028b84) mce_image_pane_g1

0x5dbe,	// (0x00021f54) mce_image_pane_g2

0x5dc8,	// (0x00021f5e) mce_image_pane_g3

0x5dd2,	// (0x00021f68) mce_image_pane_g4

0x5dda,	// (0x00021f70) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x0002b47e) mce_image_pane_g

0xc9f8,	// (0x00028b8e) control_top_pane_stacon_cp01_ParamLimits

0xc9f8,	// (0x00028b8e) control_top_pane_stacon_cp01

0xca0c,	// (0x00028ba2) uni_indicator_pane_stacon_cp01_ParamLimits

0xca0c,	// (0x00028ba2) uni_indicator_pane_stacon_cp01

0xca1d,	// (0x00028bb3) bg_popup_sub_pane_cp03

0x5de2,	// (0x00021f78) chi_dic_find_pane

0x5dea,	// (0x00021f80) listscroll_chi_dic_pane

0x5df3,	// (0x00021f89) main_pane_chidic_g1

0x5e06,	// (0x00021f9c) chi_dic_find_pane_t1

0xca27,	// (0x00028bbd) find_chidic_pane

0xca30,	// (0x00028bc6) chi_dic_list_pane_ParamLimits

0xca30,	// (0x00028bc6) chi_dic_list_pane

0xca41,	// (0x00028bd7) scroll_pane_cp020

0x5e14,	// (0x00021faa) find_chidic_pane_t1

0xbd23,	// (0x00027eb9) input_focus_pane_cp06

0x5e23,	// (0x00021fb9) list_chi_dic_pane_ParamLimits

0x5e23,	// (0x00021fb9) list_chi_dic_pane

0x5e38,	// (0x00021fce) list_chi_dic_pane_t1_ParamLimits

0x5e38,	// (0x00021fce) list_chi_dic_pane_t1

0xbd23,	// (0x00027eb9) list_highlight_pane_cp020

0xca49,	// (0x00028bdf) bg_cale_heading_pane_g1

0x5e4b,	// (0x00021fe1) bg_cale_heading_pane_g2

0x5e53,	// (0x00021fe9) bg_cale_heading_pane_g3

0x5e5b,	// (0x00021ff1) bg_cale_heading_pane_g4

0x5e65,	// (0x00021ffb) bg_cale_heading_pane_g5

0x5e6f,	// (0x00022005) bg_cale_heading_pane_g6

0x5e77,	// (0x0002200d) bg_cale_heading_pane_g7

0x5e7f,	// (0x00022015) bg_cale_heading_pane_g8

0x5e89,	// (0x0002201f) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x0002b489) bg_cale_heading_pane_g

0xca49,	// (0x00028bdf) bg_cale_side_pane_g1

0x5e93,	// (0x00022029) bg_cale_side_pane_g2

0x5e9d,	// (0x00022033) bg_cale_side_pane_g3

0x5ea7,	// (0x0002203d) bg_cale_side_pane_g4

0x5eb1,	// (0x00022047) bg_cale_side_pane_g5

0x5ebb,	// (0x00022051) bg_cale_side_pane_g6

0x5ec5,	// (0x0002205b) bg_cale_side_pane_g7

0x5ecf,	// (0x00022065) bg_cale_side_pane_g8

0x5ed7,	// (0x0002206d) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x0002b49c) bg_cale_side_pane_g

0x5edf,	// (0x00022075) popup_call_status_window_ParamLimits

0x5edf,	// (0x00022075) popup_call_status_window

0xca51,	// (0x00028be7) stacon_top_pane

0xca59,	// (0x00028bef) status_pane_ParamLimits

0xca59,	// (0x00028bef) status_pane

0xca6e,	// (0x00028c04) status_small_pane

0xca76,	// (0x00028c0c) control_pane

0xbd23,	// (0x00027eb9) stacon_bottom_pane

0xca7e,	// (0x00028c14) list_single_mce_smart_pane_t1_ParamLimits

0xca7e,	// (0x00028c14) list_single_mce_smart_pane_t1

0xca91,	// (0x00028c27) list_single_mce_smart_pane_t2_ParamLimits

0xca91,	// (0x00028c27) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x0002b4af) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x0002b4af) list_single_mce_smart_pane_t

0x5eeb,	// (0x00022081) compass_pane

0x5ef6,	// (0x0002208c) main_location2_pane_t1

0x5f0c,	// (0x000220a2) main_location2_pane_t2

0x5f22,	// (0x000220b8) main_location2_pane_t3

0x0003,

0xf31e,	// (0x0002b4b4) main_location2_pane_t

0xcab0,	// (0x00028c46) compass_pane_g1_ParamLimits

0xcab0,	// (0x00028c46) compass_pane_g1

0x5f70,	// (0x00022106) compass_pane_t1

0x5f7f,	// (0x00022115) compass_pane_t2

0x0005,

0xf327,	// (0x0002b4bd) compass_pane_t

0x5fca,	// (0x00022160) text_secondary_cp61

0xcac4,	// (0x00028c5a) navi_pane_cams_g5

0xcae7,	// (0x00028c7d) navi_pane_im_t1

0xcaf5,	// (0x00028c8b) navi_pane_mp_g1_ParamLimits

0xcaf5,	// (0x00028c8b) navi_pane_mp_g1

0xcb09,	// (0x00028c9f) navi_pane_mp_g2_ParamLimits

0xcb09,	// (0x00028c9f) navi_pane_mp_g2

0xcb15,	// (0x00028cab) navi_pane_mp_g3_ParamLimits

0xcb15,	// (0x00028cab) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x0002b4d1) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x0002b4d1) navi_pane_mp_g

0xcb21,	// (0x00028cb7) navi_pane_mp_t1

0xcb2f,	// (0x00028cc5) navi_pane_mp_t2

0x0002,

0xf342,	// (0x0002b4d8) navi_pane_mp_t

0xcb6b,	// (0x00028d01) navi_pane_vt_g1

0xcb21,	// (0x00028cb7) navi_pane_vt_t1

0xcb73,	// (0x00028d09) navi_slider_pane

0xc24f,	// (0x000283e5) zooming_pane

0xcb7b,	// (0x00028d11) navi_slider_pane_g1

0x311e,	// (0x0001f2b4) navi_slider_pane_g2

0x0006,

0xf349,	// (0x0002b4df) navi_slider_pane_g

0xcb9f,	// (0x00028d35) aid_levels_zoom

0xcba7,	// (0x00028d3d) zooming_pane_g1

0xcbaf,	// (0x00028d45) zooming_pane_g2

0xcbaf,	// (0x00028d45) zooming_pane_g3

0x0002,

0xf358,	// (0x0002b4ee) zooming_pane_g

0xcbb7,	// (0x00028d4d) level_10_zoom

0xcbc0,	// (0x00028d56) level_11_zoom

0xcbc9,	// (0x00028d5f) level_1_zoom

0xcbde,	// (0x00028d74) level_2_zoom

0xcbe7,	// (0x00028d7d) level_3_zoom

0xcbf0,	// (0x00028d86) level_4_zoom

0xcbf9,	// (0x00028d8f) level_5_zoom

0xcc02,	// (0x00028d98) level_6_zoom

0xcc0b,	// (0x00028da1) level_7_zoom

0xcc14,	// (0x00028daa) level_8_zoom

0xcc1d,	// (0x00028db3) level_9_zoom

0xcc2e,	// (0x00028dc4) popup_phob_thumbnail_window_g1

0xcc36,	// (0x00028dcc) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x0002b4f5) popup_phob_thumbnail_window_g

0x6a25,	// (0x00022bbb) level_1_location

0x6a2d,	// (0x00022bc3) level_2_location

0x6a35,	// (0x00022bcb) level_3_location

0x6a3f,	// (0x00022bd5) level_4_location

0xc24f,	// (0x000283e5) level_5_location

0x60ff,	// (0x00022295) mce_icon_pane_g1

0x6107,	// (0x0002229d) mce_icon_pane_g2

0x0001,

0xf364,	// (0x0002b4fa) mce_icon_pane_g

0x610f,	// (0x000222a5) main_mup_pane_g1_ParamLimits

0x610f,	// (0x000222a5) main_mup_pane_g1

0xc023,	// (0x000281b9) main_mup_pane_g2_ParamLimits

0xc023,	// (0x000281b9) main_mup_pane_g2

0xc023,	// (0x000281b9) main_mup_pane_g3_ParamLimits

0xc023,	// (0x000281b9) main_mup_pane_g3

0xc023,	// (0x000281b9) main_mup_pane_g4_ParamLimits

0xc023,	// (0x000281b9) main_mup_pane_g4

0xc023,	// (0x000281b9) main_mup_pane_g5_ParamLimits

0xc023,	// (0x000281b9) main_mup_pane_g5

0xc023,	// (0x000281b9) main_mup_pane_g6_ParamLimits

0xc023,	// (0x000281b9) main_mup_pane_g6

0xc023,	// (0x000281b9) main_mup_pane_g7_ParamLimits

0xc023,	// (0x000281b9) main_mup_pane_g7

0xc023,	// (0x000281b9) main_mup_pane_g8_ParamLimits

0xc023,	// (0x000281b9) main_mup_pane_g8

0xc023,	// (0x000281b9) main_mup_pane_g9_ParamLimits

0xc023,	// (0x000281b9) main_mup_pane_g9

0xc023,	// (0x000281b9) main_mup_pane_g10_ParamLimits

0xc023,	// (0x000281b9) main_mup_pane_g10

0xc023,	// (0x000281b9) main_mup_pane_g11_ParamLimits

0xc023,	// (0x000281b9) main_mup_pane_g11

0xc015,	// (0x000281ab) main_mup_pane_g12_ParamLimits

0xc015,	// (0x000281ab) main_mup_pane_g12

0xc023,	// (0x000281b9) main_mup_pane_g13_ParamLimits

0xc023,	// (0x000281b9) main_mup_pane_g13

0x000c,

0xf369,	// (0x0002b4ff) main_mup_pane_g_ParamLimits

0xf369,	// (0x0002b4ff) main_mup_pane_g

0xc031,	// (0x000281c7) main_mup_pane_t1_ParamLimits

0xc031,	// (0x000281c7) main_mup_pane_t1

0xc031,	// (0x000281c7) main_mup_pane_t2_ParamLimits

0xc031,	// (0x000281c7) main_mup_pane_t2

0xc031,	// (0x000281c7) main_mup_pane_t3_ParamLimits

0xc031,	// (0x000281c7) main_mup_pane_t3

0xc063,	// (0x000281f9) main_mup_pane_t4_ParamLimits

0xc063,	// (0x000281f9) main_mup_pane_t4

0xc063,	// (0x000281f9) main_mup_pane_t5_ParamLimits

0xc063,	// (0x000281f9) main_mup_pane_t5

0xc04f,	// (0x000281e5) main_mup_pane_t6_ParamLimits

0xc04f,	// (0x000281e5) main_mup_pane_t6

0x0005,

0xf384,	// (0x0002b51a) main_mup_pane_t_ParamLimits

0xf384,	// (0x0002b51a) main_mup_pane_t

0xbfa0,	// (0x00028136) mup_progress_pane_ParamLimits

0xbfa0,	// (0x00028136) mup_progress_pane

0xdd36,	// (0x00029ecc) mup_visualizer_pane_ParamLimits

0xdd36,	// (0x00029ecc) mup_visualizer_pane

0xdd36,	// (0x00029ecc) mup_volume_pane_ParamLimits

0xdd36,	// (0x00029ecc) mup_volume_pane

0xc015,	// (0x000281ab) mup_visualizer_pane_g1_ParamLimits

0xc015,	// (0x000281ab) mup_visualizer_pane_g1

0xcc3e,	// (0x00028dd4) mup_visualizer_pane_g2_ParamLimits

0xcc3e,	// (0x00028dd4) mup_visualizer_pane_g2

0xc007,	// (0x0002819d) mup_visualizer_pane_g3_ParamLimits

0xc007,	// (0x0002819d) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x0002b527) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x0002b527) mup_visualizer_pane_g

0xc045,	// (0x000281db) mup_volume_pane_g1

0xc045,	// (0x000281db) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x0002b245) mup_volume_pane_g

0xc045,	// (0x000281db) mup_progress_pane_g1

0xc045,	// (0x000281db) mup_progress_pane_g2

0xc045,	// (0x000281db) mup_progress_pane_g3

0x0002,

0xf398,	// (0x0002b52e) mup_progress_pane_g

0xbd23,	// (0x00027eb9) bg_popup_window_pane_cp05

0xcc4c,	// (0x00028de2) heading_pane_cp02_ParamLimits

0xcc4c,	// (0x00028de2) heading_pane_cp02

0xcc68,	// (0x00028dfe) list_popup_blid_pane

0xcc70,	// (0x00028e06) list_blid_sat_info_pane_ParamLimits

0xcc70,	// (0x00028e06) list_blid_sat_info_pane

0xcc83,	// (0x00028e19) list_blid_sat_info_pane_g1

0xcc8b,	// (0x00028e21) list_blid_sat_info_pane_t1

0x621e,	// (0x000223b4) mup_equalizer_pane_ParamLimits

0x621e,	// (0x000223b4) mup_equalizer_pane

0x623f,	// (0x000223d5) mup_equalizer_pane_cp1_ParamLimits

0x623f,	// (0x000223d5) mup_equalizer_pane_cp1

0x6260,	// (0x000223f6) mup_equalizer_pane_cp2_ParamLimits

0x6260,	// (0x000223f6) mup_equalizer_pane_cp2

0x6281,	// (0x00022417) mup_equalizer_pane_cp3_ParamLimits

0x6281,	// (0x00022417) mup_equalizer_pane_cp3

0x62a6,	// (0x0002243c) mup_equalizer_pane_cp4_ParamLimits

0x62a6,	// (0x0002243c) mup_equalizer_pane_cp4

0x62cb,	// (0x00022461) mup_equalizer_pane_cp5

0x62e3,	// (0x00022479) mup_equalizer_pane_cp6

0x62fb,	// (0x00022491) mup_equalizer_pane_cp7

0xddac,	// (0x00029f42) bg_popup_call_poc_act_pane_g9

0xddb4,	// (0x00029f4a) bg_popup_call_poc_act_pane_g10

0xddbc,	// (0x00029f52) bg_popup_call_poc_act_pane_g11

0x000a,

0xbf7e,	// (0x00028114) mup_scale_pane

0xbf96,	// (0x0002812c) mup_scale_pane_g1

0xcc99,	// (0x00028e2f) mup_scale_pane_g2

0x0006,

0xf3b4,	// (0x0002b54a) mup_scale_pane_g

0xccbd,	// (0x00028e53) msg_data_pane

0xccc5,	// (0x00028e5b) scroll_pane_cp017

0x6325,	// (0x000224bb) bg_list_pane_cp04_ParamLimits

0x6325,	// (0x000224bb) bg_list_pane_cp04

0xcccd,	// (0x00028e63) msg_data_pane_g1

0x634d,	// (0x000224e3) msg_data_pane_g2

0x6357,	// (0x000224ed) msg_data_pane_g3

0x6361,	// (0x000224f7) msg_data_pane_g4

0x6369,	// (0x000224ff) msg_data_pane_g5

0x6371,	// (0x00022507) msg_data_pane_g6

0x6379,	// (0x0002250f) msg_data_pane_g7

0x0006,

0xf3c3,	// (0x0002b559) msg_data_pane_g

0x6381,	// (0x00022517) msg_text_pane_ParamLimits

0x6381,	// (0x00022517) msg_text_pane

0x63bd,	// (0x00022553) qrid_highlight_pane_cp011_ParamLimits

0x63bd,	// (0x00022553) qrid_highlight_pane_cp011

0xbd23,	// (0x00027eb9) msg_body_pane

0xbf7e,	// (0x00028114) msg_header_pane

0xcce9,	// (0x00028e7f) input_focus_pane_cp07

0x63e1,	// (0x00022577) msg_header_pane_t1_ParamLimits

0x63e1,	// (0x00022577) msg_header_pane_t1

0x63fd,	// (0x00022593) msg_header_pane_t2_ParamLimits

0x63fd,	// (0x00022593) msg_header_pane_t2

0x0001,

0xf3d7,	// (0x0002b56d) msg_header_pane_t_ParamLimits

0xf3d7,	// (0x0002b56d) msg_header_pane_t

0xcd0a,	// (0x00028ea0) msg_body_pane_g1

0x641d,	// (0x000225b3) msg_body_pane_t1_ParamLimits

0x641d,	// (0x000225b3) msg_body_pane_t1

0x644e,	// (0x000225e4) msg_body_pane_t2_ParamLimits

0x644e,	// (0x000225e4) msg_body_pane_t2

0x6460,	// (0x000225f6) msg_body_pane_t3_ParamLimits

0x6460,	// (0x000225f6) msg_body_pane_t3

0x0002,

0xf3dc,	// (0x0002b572) msg_body_pane_t_ParamLimits

0xf3dc,	// (0x0002b572) msg_body_pane_t

0x3160,	// (0x0001f2f6) main_viewer_pane_g1_ParamLimits

0x3160,	// (0x0001f2f6) main_viewer_pane_g1

0x316c,	// (0x0001f302) main_viewer_pane_g2_ParamLimits

0x316c,	// (0x0001f302) main_viewer_pane_g2

0x6494,	// (0x0002262a) main_viewer_pane_g3_ParamLimits

0x6494,	// (0x0002262a) main_viewer_pane_g3

0x64a5,	// (0x0002263b) main_viewer_pane_g4_ParamLimits

0x64a5,	// (0x0002263b) main_viewer_pane_g4

0x3178,	// (0x0001f30e) main_viewer_pane_g5_ParamLimits

0x3178,	// (0x0001f30e) main_viewer_pane_g5

0x3178,	// (0x0001f30e) main_viewer_pane_g7_ParamLimits

0x3178,	// (0x0001f30e) main_viewer_pane_g7

0x318a,	// (0x0001f320) main_viewer_pane_g8_ParamLimits

0x318a,	// (0x0001f320) main_viewer_pane_g8

0x0007,

0xf3ec,	// (0x0002b582) main_viewer_pane_g_ParamLimits

0xf3ec,	// (0x0002b582) main_viewer_pane_g

0xcd12,	// (0x00028ea8) viewer_content_pane_ParamLimits

0xcd12,	// (0x00028ea8) viewer_content_pane

0x64d6,	// (0x0002266c) main_postcard_pane_g1_ParamLimits

0x64d6,	// (0x0002266c) main_postcard_pane_g1

0x64e4,	// (0x0002267a) main_postcard_pane_g2_ParamLimits

0x64e4,	// (0x0002267a) main_postcard_pane_g2

0x64f2,	// (0x00022688) main_postcard_pane_g3_ParamLimits

0x64f2,	// (0x00022688) main_postcard_pane_g3

0x0005,

0xf3fd,	// (0x0002b593) main_postcard_pane_g_ParamLimits

0xf3fd,	// (0x0002b593) main_postcard_pane_g

0x6502,	// (0x00022698) main_postcard_pane_g4

0xdef2,	// (0x0002a088) smil_status_volume_pane_g2

0x652e,	// (0x000226c4) postcard_pane_ParamLimits

0x652e,	// (0x000226c4) postcard_pane

0xd205,	// (0x0002939b) postcard_pane_g1_ParamLimits

0xd205,	// (0x0002939b) postcard_pane_g1

0x6568,	// (0x000226fe) postcard_pane_g2_ParamLimits

0x6568,	// (0x000226fe) postcard_pane_g2

0x6574,	// (0x0002270a) postcard_pane_g3_ParamLimits

0x6574,	// (0x0002270a) postcard_pane_g3

0xcd20,	// (0x00028eb6) postcard_pane_g4_ParamLimits

0xcd20,	// (0x00028eb6) postcard_pane_g4

0x6580,	// (0x00022716) postcard_pane_g5_ParamLimits

0x6580,	// (0x00022716) postcard_pane_g5

0x658c,	// (0x00022722) postcard_pane_g6_ParamLimits

0x658c,	// (0x00022722) postcard_pane_g6

0xcd2e,	// (0x00028ec4) postcard_pane_g7_ParamLimits

0xcd2e,	// (0x00028ec4) postcard_pane_g7

0x0006,

0xf40a,	// (0x0002b5a0) postcard_pane_g_ParamLimits

0xf40a,	// (0x0002b5a0) postcard_pane_g

0x659a,	// (0x00022730) main_mp2_pane_g1_ParamLimits

0x659a,	// (0x00022730) main_mp2_pane_g1

0x65a8,	// (0x0002273e) main_mp2_pane_g2_ParamLimits

0x65a8,	// (0x0002273e) main_mp2_pane_g2

0x65b4,	// (0x0002274a) main_mp2_pane_g3_ParamLimits

0x65b4,	// (0x0002274a) main_mp2_pane_g3

0x0002,

0xf419,	// (0x0002b5af) main_mp2_pane_g_ParamLimits

0xf419,	// (0x0002b5af) main_mp2_pane_g

0x65c0,	// (0x00022756) main_mp2_pane_t1_ParamLimits

0x65c0,	// (0x00022756) main_mp2_pane_t1

0x65d7,	// (0x0002276d) main_mp2_pane_t2_ParamLimits

0x65d7,	// (0x0002276d) main_mp2_pane_t2

0x65eb,	// (0x00022781) main_mp2_pane_t3_ParamLimits

0x65eb,	// (0x00022781) main_mp2_pane_t3

0x0002,

0xf420,	// (0x0002b5b6) main_mp2_pane_t_ParamLimits

0xf420,	// (0x0002b5b6) main_mp2_pane_t

0xbfa0,	// (0x00028136) pec_content_pane_ParamLimits

0xbfa0,	// (0x00028136) pec_content_pane

0xb8d1,	// (0x00027a67) scroll_pane_cp015

0xcd3c,	// (0x00028ed2) pec_attribute_pane_ParamLimits

0xcd3c,	// (0x00028ed2) pec_attribute_pane

0xc007,	// (0x0002819d) pec_content_pane_g1_ParamLimits

0xc007,	// (0x0002819d) pec_content_pane_g1

0xcd4a,	// (0x00028ee0) pec_content_pane_t1_ParamLimits

0xcd4a,	// (0x00028ee0) pec_content_pane_t1

0xcd5e,	// (0x00028ef4) pec_content_pane_t2_ParamLimits

0xcd5e,	// (0x00028ef4) pec_content_pane_t2

0x0001,

0xf427,	// (0x0002b5bd) pec_content_pane_t_ParamLimits

0xf427,	// (0x0002b5bd) pec_content_pane_t

0xbff9,	// (0x0002818f) list_single_graphic_pane_cp01_ParamLimits

0xbff9,	// (0x0002818f) list_single_graphic_pane_cp01

0xbf7e,	// (0x00028114) bg_popup_sub_pane_cp04

0xcd72,	// (0x00028f08) popup_mup_playback_window_g1

0xcd7e,	// (0x00028f14) popup_mup_playback_window_t1

0xcd93,	// (0x00028f29) popup_mup_playback_window_t2

0x0001,

0xf42c,	// (0x0002b5c2) popup_mup_playback_window_t

0xcdca,	// (0x00028f60) main_image_pane_g1_ParamLimits

0xcdca,	// (0x00028f60) main_image_pane_g1

0xce0d,	// (0x00028fa3) scroll_pane_cp018_ParamLimits

0xce0d,	// (0x00028fa3) scroll_pane_cp018

0xce25,	// (0x00028fbb) scroll_pane_cp016_ParamLimits

0xce25,	// (0x00028fbb) scroll_pane_cp016

0x666e,	// (0x00022804) smil2_image_pane_ParamLimits

0x666e,	// (0x00022804) smil2_image_pane

0x66a4,	// (0x0002283a) smil2_root_pane_ParamLimits

0x66a4,	// (0x0002283a) smil2_root_pane

0x66d0,	// (0x00022866) smil2_text_pane_ParamLimits

0x66d0,	// (0x00022866) smil2_text_pane

0xb8d1,	// (0x00027a67) bg_list_pane_cp06

0xb8d1,	// (0x00027a67) grid_radio_pane

0xbd23,	// (0x00027eb9) bg_popup_window_pane_cp06

0xc7b2,	// (0x00028948) main_fmradio_pane_t1

0xddc4,	// (0x00029f5a) heading_pane_cp04

0xc7b2,	// (0x00028948) main_fmradio_pane_t2

0xddcc,	// (0x00029f62) popup_cale_lunar_info_window_g1

0xc7b2,	// (0x00028948) main_fmradio_pane_t3

0xddd4,	// (0x00029f6a) popup_cale_lunar_info_window_g2

0xc7b2,	// (0x00028948) main_fmradio_pane_t4

0x0001,

0xc7b2,	// (0x00028948) main_fmradio_pane_t5

0x0004,

0xf501,	// (0x0002b697) popup_cale_lunar_info_window_g

0xf28c,	// (0x0002b422) main_fmradio_pane_t

0xb8d1,	// (0x00027a67) wait_bar_pane_cp03

0xbff9,	// (0x0002818f) cell_fmradio_pane_ParamLimits

0xbff9,	// (0x0002818f) cell_fmradio_pane

0xc007,	// (0x0002819d) cell_fmradio_pane_g1_ParamLimits

0xc007,	// (0x0002819d) cell_fmradio_pane_g1

0xb8d1,	// (0x00027a67) grid_highlight_pane_cp011

0xce59,	// (0x00028fef) poc_content_pane_ParamLimits

0xce59,	// (0x00028fef) poc_content_pane

0xce6b,	// (0x00029001) scroll_pane_cp019

0x6710,	// (0x000228a6) popup_call_poc_act_window_ParamLimits

0x6710,	// (0x000228a6) popup_call_poc_act_window

0x671d,	// (0x000228b3) popup_call_poc_inact_window_ParamLimits

0x671d,	// (0x000228b3) popup_call_poc_inact_window

0xf4d8,	// (0x0002b66e) bg_popup_call_poc_act_pane_g

0xdd2e,	// (0x00029ec4) bg_popup_call_poc_inact_pane_g1

0xdd44,	// (0x00029eda) bg_popup_call_poc_inact_pane_g2

0xce73,	// (0x00029009) popup_call_poc_act_window_g2

0xdd4c,	// (0x00029ee2) bg_popup_call_poc_inact_pane_g3

0xdd54,	// (0x00029eea) bg_popup_call_poc_inact_pane_g4

0xdd5c,	// (0x00029ef2) bg_popup_call_poc_inact_pane_g5

0xce7b,	// (0x00029011) popup_call_poc_act_window_t1_ParamLimits

0xce7b,	// (0x00029011) popup_call_poc_act_window_t1

0xcea3,	// (0x00029039) popup_call_poc_act_window_t2_ParamLimits

0xcea3,	// (0x00029039) popup_call_poc_act_window_t2

0xcecb,	// (0x00029061) popup_call_poc_act_window_t3_ParamLimits

0xcecb,	// (0x00029061) popup_call_poc_act_window_t3

0xcef3,	// (0x00029089) popup_call_poc_act_window_t4_ParamLimits

0xcef3,	// (0x00029089) popup_call_poc_act_window_t4

0x0003,

0xf441,	// (0x0002b5d7) popup_call_poc_act_window_t_ParamLimits

0xf441,	// (0x0002b5d7) popup_call_poc_act_window_t

0xdd64,	// (0x00029efa) bg_popup_call_poc_inact_pane_g6

0xdd6c,	// (0x00029f02) bg_popup_call_poc_inact_pane_g7

0xdd74,	// (0x00029f0a) bg_popup_call_poc_inact_pane_g8

0xcf05,	// (0x0002909b) popup_call_poc_inact_window_g2

0xdd7c,	// (0x00029f12) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4c5,	// (0x0002b65b) bg_popup_call_poc_inact_pane_g

0xcf0d,	// (0x000290a3) popup_call_poc_inact_window_t1_ParamLimits

0xcf0d,	// (0x000290a3) popup_call_poc_inact_window_t1

0xcf22,	// (0x000290b8) popup_call_poc_inact_window_t2_ParamLimits

0xcf22,	// (0x000290b8) popup_call_poc_inact_window_t2

0xcf37,	// (0x000290cd) popup_call_poc_inact_window_t3_ParamLimits

0xcf37,	// (0x000290cd) popup_call_poc_inact_window_t3

0x0002,

0xf44a,	// (0x0002b5e0) popup_call_poc_inact_window_t_ParamLimits

0xf44a,	// (0x0002b5e0) popup_call_poc_inact_window_t

0xde6a,	// (0x0002a000) context_pane_ParamLimits

0x6ba8,	// (0x00022d3e) signal_pane_ParamLimits

0xc24f,	// (0x000283e5) main_call2_pane

0x3309,	// (0x0001f49f) popup_phob_thumbnail2_window_ParamLimits

0x3309,	// (0x0001f49f) popup_phob_thumbnail2_window

0x3130,	// (0x0001f2c6) aid_hotspot_pointer_arrow_pane

0x3138,	// (0x0001f2ce) aid_hotspot_pointer_hand_pane

0x69ed,	// (0x00022b83) phob_pre_status_pane_g5

0xbff9,	// (0x0002818f) cams_zoom_pane_ParamLimits

0xbff9,	// (0x0002818f) image_vga_pane_ParamLimits

0xc015,	// (0x000281ab) main_camera_pane_g1_ParamLimits

0xc015,	// (0x000281ab) main_camera_pane_g2_ParamLimits

0xc015,	// (0x000281ab) main_camera_pane_g3_ParamLimits

0xc015,	// (0x000281ab) main_camera_pane_g4_ParamLimits

0xc015,	// (0x000281ab) main_camera_pane_g5_ParamLimits

0xc015,	// (0x000281ab) main_camera_pane_g6_ParamLimits

0xc015,	// (0x000281ab) main_camera_pane_g7_ParamLimits

0xf180,	// (0x0002b316) main_camera_pane_g_ParamLimits

0xc063,	// (0x000281f9) main_camera_pane_t1_ParamLimits

0xc063,	// (0x000281f9) main_camera_pane_t2_ParamLimits

0xf191,	// (0x0002b327) main_camera_pane_t_ParamLimits

0xbf7e,	// (0x00028114) bg_popup_preview_window_pane_cp01_ParamLimits

0xbf7e,	// (0x00028114) bg_popup_preview_window_pane_cp01

0xcf4c,	// (0x000290e2) popup_phob_thumbnail2_window_g1_ParamLimits

0xcf4c,	// (0x000290e2) popup_phob_thumbnail2_window_g1

0xbd23,	// (0x00027eb9) call2_cli_visual_pane

0x6739,	// (0x000228cf) popup_call2_audio_conf_window_ParamLimits

0x6739,	// (0x000228cf) popup_call2_audio_conf_window

0x6752,	// (0x000228e8) popup_call2_audio_first_window_ParamLimits

0x6752,	// (0x000228e8) popup_call2_audio_first_window

0x67f0,	// (0x00022986) popup_call2_audio_in_window_ParamLimits

0x67f0,	// (0x00022986) popup_call2_audio_in_window

0x6834,	// (0x000229ca) popup_call2_audio_out_window_ParamLimits

0x6834,	// (0x000229ca) popup_call2_audio_out_window

0x689e,	// (0x00022a34) popup_call2_audio_second_window_ParamLimits

0x689e,	// (0x00022a34) popup_call2_audio_second_window

0x68fc,	// (0x00022a92) popup_call2_audio_wait_window_ParamLimits

0x68fc,	// (0x00022a92) popup_call2_audio_wait_window

0xbd23,	// (0x00027eb9) bg_popup_call2_act_pane_cp03

0xbf60,	// (0x000280f6) list_conf_pane_cp

0xcf58,	// (0x000290ee) popup_call2_audio_conf_window_t1

0xcf66,	// (0x000290fc) list_single_graphic_popup_conf2_pane_ParamLimits

0xcf66,	// (0x000290fc) list_single_graphic_popup_conf2_pane

0xc99c,	// (0x00028b32) list_highlight_pane_cp04

0xcf79,	// (0x0002910f) list_single_graphic_popup_conf2_pane_g1

0xc9ad,	// (0x00028b43) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf451,	// (0x0002b5e7) list_single_graphic_popup_conf2_pane_g

0xcf83,	// (0x00029119) list_single_graphic_popup_conf2_pane_t1

0xcf91,	// (0x00029127) bg_popup_call2_act_pane_cp01_ParamLimits

0xcf91,	// (0x00029127) bg_popup_call2_act_pane_cp01

0xd01b,	// (0x000291b1) call_type_pane_cp05_ParamLimits

0xd01b,	// (0x000291b1) call_type_pane_cp05

0xd06f,	// (0x00029205) popup_call2_audio_second_window_g1_ParamLimits

0xd06f,	// (0x00029205) popup_call2_audio_second_window_g1

0xd0c3,	// (0x00029259) popup_call2_audio_second_window_g2_ParamLimits

0xd0c3,	// (0x00029259) popup_call2_audio_second_window_g2

0x0002,

0xf456,	// (0x0002b5ec) popup_call2_audio_second_window_g_ParamLimits

0xf456,	// (0x0002b5ec) popup_call2_audio_second_window_g

0xd128,	// (0x000292be) popup_call2_audio_second_window_t1_ParamLimits

0xd128,	// (0x000292be) popup_call2_audio_second_window_t1

0xd213,	// (0x000293a9) popup_call2_audio_second_window_t2_ParamLimits

0xd213,	// (0x000293a9) popup_call2_audio_second_window_t2

0xd266,	// (0x000293fc) popup_call2_audio_second_window_t3_ParamLimits

0xd266,	// (0x000293fc) popup_call2_audio_second_window_t3

0x0003,

0xf45d,	// (0x0002b5f3) popup_call2_audio_second_window_t_ParamLimits

0xf45d,	// (0x0002b5f3) popup_call2_audio_second_window_t

0xbd23,	// (0x00027eb9) bg_popup_call2_in_pane_cp02

0xbd2d,	// (0x00027ec3) call_type_pane_cp04

0x693b,	// (0x00022ad1) popup_call2_audio_wait_window_g1

0x6943,	// (0x00022ad9) popup_call2_audio_wait_window_g2

0x0001,

0xf466,	// (0x0002b5fc) popup_call2_audio_wait_window_g

0xbd45,	// (0x00027edb) popup_call2_audio_wait_window_t3

0xd359,	// (0x000294ef) bg_popup_call2_act_pane_ParamLimits

0xd359,	// (0x000294ef) bg_popup_call2_act_pane

0xd419,	// (0x000295af) call_type_pane_cp03_ParamLimits

0xd419,	// (0x000295af) call_type_pane_cp03

0xd47d,	// (0x00029613) popup_call2_audio_first_window_g1_ParamLimits

0xd47d,	// (0x00029613) popup_call2_audio_first_window_g1

0xd4ed,	// (0x00029683) popup_call2_audio_first_window_g2_ParamLimits

0xd4ed,	// (0x00029683) popup_call2_audio_first_window_g2

0xd205,	// (0x0002939b) popup_call2_audio_first_window_g3_ParamLimits

0xd205,	// (0x0002939b) popup_call2_audio_first_window_g3

0x0004,

0xf46b,	// (0x0002b601) popup_call2_audio_first_window_g_ParamLimits

0xf46b,	// (0x0002b601) popup_call2_audio_first_window_g

0xd5cb,	// (0x00029761) popup_call2_audio_first_window_t1_ParamLimits

0xd5cb,	// (0x00029761) popup_call2_audio_first_window_t1

0xd6ce,	// (0x00029864) popup_call2_audio_first_window_t4_ParamLimits

0xd6ce,	// (0x00029864) popup_call2_audio_first_window_t4

0xd7b1,	// (0x00029947) popup_call2_audio_first_window_t5_ParamLimits

0xd7b1,	// (0x00029947) popup_call2_audio_first_window_t5

0x0003,

0xf476,	// (0x0002b60c) popup_call2_audio_first_window_t_ParamLimits

0xf476,	// (0x0002b60c) popup_call2_audio_first_window_t

0xbf76,	// (0x0002810c) bg_popup_call2_act_pane_g1

0xddde,	// (0x00029f74) popup_cale_lunar_info_window_t1

0xddec,	// (0x00029f82) popup_cale_lunar_info_window_t2

0xddfa,	// (0x00029f90) popup_cale_lunar_info_window_t3

0xbd23,	// (0x00027eb9) bg_popup_call2_bubble_pane

0xd8b2,	// (0x00029a48) bg_popup_call2_in_pane_cp01_ParamLimits

0xd8b2,	// (0x00029a48) bg_popup_call2_in_pane_cp01

0xb9ff,	// (0x00027b95) call_type_pane_cp02

0x694b,	// (0x00022ae1) popup_call2_audio_out_window_g1_ParamLimits

0x694b,	// (0x00022ae1) popup_call2_audio_out_window_g1

0xd8fa,	// (0x00029a90) popup_call2_audio_out_window_g2_ParamLimits

0xd8fa,	// (0x00029a90) popup_call2_audio_out_window_g2

0x6977,	// (0x00022b0d) popup_call2_audio_out_window_g3_ParamLimits

0x6977,	// (0x00022b0d) popup_call2_audio_out_window_g3

0x0003,

0xf47f,	// (0x0002b615) popup_call2_audio_out_window_g_ParamLimits

0xf47f,	// (0x0002b615) popup_call2_audio_out_window_g

0xd931,	// (0x00029ac7) popup_call2_audio_out_window_t1_ParamLimits

0xd931,	// (0x00029ac7) popup_call2_audio_out_window_t1

0xd990,	// (0x00029b26) popup_call2_audio_out_window_t2_ParamLimits

0xd990,	// (0x00029b26) popup_call2_audio_out_window_t2

0xd9e4,	// (0x00029b7a) popup_call2_audio_out_window_t3_ParamLimits

0xd9e4,	// (0x00029b7a) popup_call2_audio_out_window_t3

0xd9fa,	// (0x00029b90) popup_call2_audio_out_window_t4_ParamLimits

0xd9fa,	// (0x00029b90) popup_call2_audio_out_window_t4

0xda10,	// (0x00029ba6) popup_call2_audio_out_window_t5_ParamLimits

0xda10,	// (0x00029ba6) popup_call2_audio_out_window_t5

0x0005,

0xf488,	// (0x0002b61e) popup_call2_audio_out_window_t_ParamLimits

0xf488,	// (0x0002b61e) popup_call2_audio_out_window_t

0xda74,	// (0x00029c0a) bg_popup_call2_in_pane_ParamLimits

0xda74,	// (0x00029c0a) bg_popup_call2_in_pane

0xdad0,	// (0x00029c66) popup_call2_audio_in_window_g1_ParamLimits

0xdad0,	// (0x00029c66) popup_call2_audio_in_window_g1

0xdb08,	// (0x00029c9e) popup_call2_audio_in_window_g2_ParamLimits

0xdb08,	// (0x00029c9e) popup_call2_audio_in_window_g2

0xdb40,	// (0x00029cd6) popup_call2_audio_in_window_g3_ParamLimits

0xdb40,	// (0x00029cd6) popup_call2_audio_in_window_g3

0x0003,

0xf495,	// (0x0002b62b) popup_call2_audio_in_window_g_ParamLimits

0xf495,	// (0x0002b62b) popup_call2_audio_in_window_g

0xdb98,	// (0x00029d2e) popup_call2_audio_in_window_t1_ParamLimits

0xdb98,	// (0x00029d2e) popup_call2_audio_in_window_t1

0xdc18,	// (0x00029dae) popup_call2_audio_in_window_t2_ParamLimits

0xdc18,	// (0x00029dae) popup_call2_audio_in_window_t2

0xdc98,	// (0x00029e2e) popup_call2_audio_in_window_t3_ParamLimits

0xdc98,	// (0x00029e2e) popup_call2_audio_in_window_t3

0xdcb2,	// (0x00029e48) popup_call2_audio_in_window_t4_ParamLimits

0xdcb2,	// (0x00029e48) popup_call2_audio_in_window_t4

0xdcc4,	// (0x00029e5a) popup_call2_audio_in_window_t5_ParamLimits

0xdcc4,	// (0x00029e5a) popup_call2_audio_in_window_t5

0xdcd9,	// (0x00029e6f) popup_call2_audio_in_window_t6_ParamLimits

0xdcd9,	// (0x00029e6f) popup_call2_audio_in_window_t6

0x0005,

0xf49e,	// (0x0002b634) popup_call2_audio_in_window_t_ParamLimits

0xf49e,	// (0x0002b634) popup_call2_audio_in_window_t

0xbf76,	// (0x0002810c) bg_popup_call2_in_pane_g1

0xde08,	// (0x00029f9e) popup_cale_lunar_info_window_t4

0x0003,

0xf506,	// (0x0002b69c) popup_cale_lunar_info_window_t

0xbf7e,	// (0x00028114) bg_popup_call2_rect_pane_ParamLimits

0xbf7e,	// (0x00028114) bg_popup_call2_rect_pane

0xbd23,	// (0x00027eb9) call2_cli_visual_graphic_pane

0xbd23,	// (0x00027eb9) call2_cli_visual_text_pane

0x335c,	// (0x0001f4f2) smil_status_volume_pane_g3

0x0002,

0xbf96,	// (0x0002812c) call2_cli_visual_graphic_pane_g1

0xbf96,	// (0x0002812c) call2_cli_visual_graphic_pane_g2

0xbf96,	// (0x0002812c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4ab,	// (0x0002b641) call2_cli_visual_graphic_pane_g

0xdcee,	// (0x00029e84) bg_popup_call2_rect_pane_g1

0xc17a,	// (0x00028310) bg_popup_call2_rect_pane_g2

0xdcf6,	// (0x00029e8c) bg_popup_call2_rect_pane_g3

0xdcfe,	// (0x00029e94) bg_popup_call2_rect_pane_g4

0xdd06,	// (0x00029e9c) bg_popup_call2_rect_pane_g5

0xdd0e,	// (0x00029ea4) bg_popup_call2_rect_pane_g6

0xdd16,	// (0x00029eac) bg_popup_call2_rect_pane_g7

0xdd1e,	// (0x00029eb4) bg_popup_call2_rect_pane_g8

0xdd26,	// (0x00029ebc) bg_popup_call2_rect_pane_g9

0x0008,

0xf4b2,	// (0x0002b648) bg_popup_call2_rect_pane_g

0xdd2e,	// (0x00029ec4) bg_popup_call2_bubble_pane_g1

0xdd44,	// (0x00029eda) bg_popup_call2_bubble_pane_g2

0xdd4c,	// (0x00029ee2) bg_popup_call2_bubble_pane_g3

0xdd54,	// (0x00029eea) bg_popup_call2_bubble_pane_g4

0xdd5c,	// (0x00029ef2) bg_popup_call2_bubble_pane_g5

0xdd64,	// (0x00029efa) bg_popup_call2_bubble_pane_g6

0xdd6c,	// (0x00029f02) bg_popup_call2_bubble_pane_g7

0xdd74,	// (0x00029f0a) bg_popup_call2_bubble_pane_g8

0xdd7c,	// (0x00029f12) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c5,	// (0x0002b65b) bg_popup_call2_bubble_pane_g

0x4504,	// (0x0002069a) aid_cale_week_size_cell_pane

0xbf7e,	// (0x00028114) aid_cams_cif_uncrop_pane_ParamLimits

0xbf7e,	// (0x00028114) aid_cams_cif_uncrop_pane

0xbff9,	// (0x0002818f) aid_cams_size_cell_ParamLimits

0xbff9,	// (0x0002818f) aid_cams_size_cell

0xbff9,	// (0x0002818f) grid_cams_pane_ParamLimits

0xbff9,	// (0x0002818f) linegrid_cams_pane_ParamLimits

0x4c74,	// (0x00020e0a) call_video_pane_t1

0x4c91,	// (0x00020e27) call_video_pane_t2

0x0001,

0xf1dd,	// (0x0002b373) call_video_pane_t

0x514e,	// (0x000212e4) aid_cale_month_size_cell_pane_ParamLimits

0x514e,	// (0x000212e4) aid_cale_month_size_cell_pane

0xf54a,	// (0x0002b6e0) smil_status_volume_pane_g

0x3369,	// (0x0001f4ff) volume_smil_pane_ParamLimits

0x2a73,	// (0x0001ec09) aid_popup2_width_pane

0x4458,	// (0x000205ee) cell_qdial_pane_g4_ParamLimits

0x4458,	// (0x000205ee) cell_qdial_pane_g4

0x5f4c,	// (0x000220e2) aid_blid_cardinal_pane_ParamLimits

0x5f5c,	// (0x000220f2) aid_blid_destination_pane_ParamLimits

0x5f5c,	// (0x000220f2) aid_blid_destination_pane

0xbf7e,	// (0x00028114) bg_popup_call_poc_act_pane_ParamLimits

0xbf7e,	// (0x00028114) bg_popup_call_poc_act_pane

0xbf7e,	// (0x00028114) bg_popup_call_poc_inact_pane_ParamLimits

0xbf7e,	// (0x00028114) bg_popup_call_poc_inact_pane

0xdd84,	// (0x00029f1a) bg_popup_call_poc_act_pane_g1

0xdd8c,	// (0x00029f22) bg_popup_call_poc_act_pane_g2

0xdd94,	// (0x00029f2a) bg_popup_call_poc_act_pane_g3

0xdd54,	// (0x00029eea) bg_popup_call_poc_act_pane_g4

0xdd5c,	// (0x00029ef2) bg_popup_call_poc_act_pane_g5

0xdd9c,	// (0x00029f32) bg_popup_call_poc_act_pane_g6

0xdd6c,	// (0x00029f02) bg_popup_call_poc_act_pane_g7

0xdda4,	// (0x00029f3a) bg_popup_call_poc_act_pane_g8

0xbd23,	// (0x00027eb9) main_usb_pane

0x3226,	// (0x0001f3bc) popup_cale_lunar_info_window

0x4fa9,	// (0x0002113f) im_reading_pane_t1_ParamLimits

0xc314,	// (0x000284aa) list_im_pane_ParamLimits

0xc325,	// (0x000284bb) scroll_pane_cp07_ParamLimits

0xbd23,	// (0x00027eb9) grid_highlight_pane_cp012

0xbf7e,	// (0x00028114) mup_scale_pane_ParamLimits

0xc015,	// (0x000281ab) main_usb_pane_g1_ParamLimits

0xc015,	// (0x000281ab) main_usb_pane_g1

0xc015,	// (0x000281ab) main_usb_pane_g2_ParamLimits

0xc015,	// (0x000281ab) main_usb_pane_g2

0x0001,

0xf4ef,	// (0x0002b685) main_usb_pane_g_ParamLimits

0xf4ef,	// (0x0002b685) main_usb_pane_g

0xc063,	// (0x000281f9) main_usb_pane_t1_ParamLimits

0xc063,	// (0x000281f9) main_usb_pane_t1

0xc063,	// (0x000281f9) main_usb_pane_t2_ParamLimits

0xc063,	// (0x000281f9) main_usb_pane_t2

0xc063,	// (0x000281f9) main_usb_pane_t3_ParamLimits

0xc063,	// (0x000281f9) main_usb_pane_t3

0xc063,	// (0x000281f9) main_usb_pane_t4_ParamLimits

0xc063,	// (0x000281f9) main_usb_pane_t4

0xc063,	// (0x000281f9) main_usb_pane_t5_ParamLimits

0xc063,	// (0x000281f9) main_usb_pane_t5

0xc063,	// (0x000281f9) main_usb_pane_t6_ParamLimits

0xc063,	// (0x000281f9) main_usb_pane_t6

0x0005,

0xf4f4,	// (0x0002b68a) main_usb_pane_t_ParamLimits

0x5eeb,	// (0x00022081) aid_text_placing

0x5ef6,	// (0x0002208c) main_location2_pane_t1_ParamLimits

0x5f0c,	// (0x000220a2) main_location2_pane_t2_ParamLimits

0x5f22,	// (0x000220b8) main_location2_pane_t3_ParamLimits

0x5f38,	// (0x000220ce) main_location2_pane_t4_ParamLimits

0x5f38,	// (0x000220ce) main_location2_pane_t4

0xf31e,	// (0x0002b4b4) main_location2_pane_t_ParamLimits

0xbfba,	// (0x00028150) find_pinb_pane_g2_ParamLimits

0xbfba,	// (0x00028150) find_pinb_pane_g2

0x0001,

0xf095,	// (0x0002b22b) find_pinb_pane_g_ParamLimits

0xf095,	// (0x0002b22b) find_pinb_pane_g

0xbfc6,	// (0x0002815c) find_pinb_pane_t1_ParamLimits

0xbfd8,	// (0x0002816e) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x0002b230) find_pinb_pane_t_ParamLimits

0xbd23,	// (0x00027eb9) main_call3_pane

0x5701,	// (0x00021897) cale_month_day_heading_pane_t1_ParamLimits

0x5783,	// (0x00021919) cale_month_day_heading_pane_t2_ParamLimits

0x57fc,	// (0x00021992) cale_month_day_heading_pane_t3_ParamLimits

0x5875,	// (0x00021a0b) cale_month_day_heading_pane_t4_ParamLimits

0x58ee,	// (0x00021a84) cale_month_day_heading_pane_t5_ParamLimits

0x596f,	// (0x00021b05) cale_month_day_heading_pane_t6_ParamLimits

0x59f8,	// (0x00021b8e) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x0002b3ab) cale_month_day_heading_pane_t_ParamLimits

0xc57e,	// (0x00028714) smil_status_volume_pane

0x654c,	// (0x000226e2) postcard_address_pane_ParamLimits

0x654c,	// (0x000226e2) postcard_address_pane

0x655a,	// (0x000226f0) postcard_message_pane_ParamLimits

0x655a,	// (0x000226f0) postcard_message_pane

0x69a3,	// (0x00022b39) call2_cli_visual_pane_t1_ParamLimits

0x69a3,	// (0x00022b39) call2_cli_visual_pane_t1

0xdf1d,	// (0x0002a0b3) postcard_message_pane_t1_ParamLimits

0xdf1d,	// (0x0002a0b3) postcard_message_pane_t1

0xdf05,	// (0x0002a09b) postcard_address_pane_t1_ParamLimits

0xdf05,	// (0x0002a09b) postcard_address_pane_t1

0x6d05,	// (0x00022e9b) popup_call3_audio_in_window_ParamLimits

0x6d05,	// (0x00022e9b) popup_call3_audio_in_window

0x6be3,	// (0x00022d79) bg_popup_call3_in_pane_ParamLimits

0x6be3,	// (0x00022d79) bg_popup_call3_in_pane

0x6c4b,	// (0x00022de1) popup_call3_audio_in_window_g1_ParamLimits

0x6c4b,	// (0x00022de1) popup_call3_audio_in_window_g1

0x6c63,	// (0x00022df9) popup_call3_audio_in_window_g2_ParamLimits

0x6c63,	// (0x00022df9) popup_call3_audio_in_window_g2

0x6c7b,	// (0x00022e11) popup_call3_audio_in_window_g3_ParamLimits

0x6c7b,	// (0x00022e11) popup_call3_audio_in_window_g3

0x0003,

0xf551,	// (0x0002b6e7) popup_call3_audio_in_window_g_ParamLimits

0xf551,	// (0x0002b6e7) popup_call3_audio_in_window_g

0x6ca3,	// (0x00022e39) popup_call3_audio_in_window_t1_ParamLimits

0x6ca3,	// (0x00022e39) popup_call3_audio_in_window_t1

0x6ccb,	// (0x00022e61) popup_call3_audio_in_window_t2_ParamLimits

0x6ccb,	// (0x00022e61) popup_call3_audio_in_window_t2

0x6cf3,	// (0x00022e89) popup_call3_audio_in_window_t3_ParamLimits

0x6cf3,	// (0x00022e89) popup_call3_audio_in_window_t3

0x0002,

0xf55a,	// (0x0002b6f0) popup_call3_audio_in_window_t_ParamLimits

0xf55a,	// (0x0002b6f0) popup_call3_audio_in_window_t

0xc24f,	// (0x000283e5) bg_popup_call3_rect_pane

0xdcee,	// (0x00029e84) bg_popup_call3_rect_pane_g1

0xc17a,	// (0x00028310) bg_popup_call3_rect_pane_g2

0xdcf6,	// (0x00029e8c) bg_popup_call3_rect_pane_g3

0xdcfe,	// (0x00029e94) bg_popup_call3_rect_pane_g4

0xdd06,	// (0x00029e9c) bg_popup_call3_rect_pane_g5

0xdd0e,	// (0x00029ea4) bg_popup_call3_rect_pane_g6

0xdd16,	// (0x00029eac) bg_popup_call3_rect_pane_g7

0xb8d1,	// (0x00027a67) mup_visualizer_osc_pane

0xb8d1,	// (0x00027a67) mup_visualizer_spec_pane

0x6c03,	// (0x00022d99) call3_video_qcif_pane_ParamLimits

0x6c03,	// (0x00022d99) call3_video_qcif_pane

0x6c15,	// (0x00022dab) call3_video_qcif_uncrop_pane_ParamLimits

0x6c15,	// (0x00022dab) call3_video_qcif_uncrop_pane

0x6c25,	// (0x00022dbb) call3_video_subqcif_pane_ParamLimits

0x6c25,	// (0x00022dbb) call3_video_subqcif_pane

0x6c39,	// (0x00022dcf) call3_video_subqcif_uncrop_pane_ParamLimits

0x6c39,	// (0x00022dcf) call3_video_subqcif_uncrop_pane

0x6c93,	// (0x00022e29) popup_call3_audio_in_window_g4_ParamLimits

0x6c93,	// (0x00022e29) popup_call3_audio_in_window_g4

0xb8d1,	// (0x00027a67) mup_spec_half_pane

0xb8d1,	// (0x00027a67) mup_spec_half_pane_cp

0xb8d1,	// (0x00027a67) mup_osc_middle_pane

0xc045,	// (0x000281db) mup_visualizer_osc_pane_g1

0xdeb8,	// (0x0002a04e) mup_spec_bar_pane_ParamLimits

0xdeb8,	// (0x0002a04e) mup_spec_bar_pane

0xc045,	// (0x000281db) mup_spec_bar_pane_g1

0xc045,	// (0x000281db) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x0002b245) mup_spec_bar_pane_g

0x4504,	// (0x0002069a) aid_cale_week_size_cell_pane_ParamLimits

0x451e,	// (0x000206b4) bg_cale_heading_pane_ParamLimits

0x4547,	// (0x000206dd) bg_cale_pane_cp01_ParamLimits

0x4569,	// (0x000206ff) cale_week_corner_pane_ParamLimits

0x4588,	// (0x0002071e) cale_week_day_heading_pane_ParamLimits

0x45b6,	// (0x0002074c) cale_week_scroll_pane_g1_ParamLimits

0x45da,	// (0x00020770) cale_week_scroll_pane_g2_ParamLimits

0x45f2,	// (0x00020788) cale_week_scroll_pane_g3_ParamLimits

0x460a,	// (0x000207a0) cale_week_scroll_pane_g4_ParamLimits

0x4622,	// (0x000207b8) cale_week_scroll_pane_g5_ParamLimits

0x463a,	// (0x000207d0) cale_week_scroll_pane_g6_ParamLimits

0x465a,	// (0x000207f0) cale_week_scroll_pane_g7_ParamLimits

0x467a,	// (0x00020810) cale_week_scroll_pane_g8_ParamLimits

0x469a,	// (0x00020830) cale_week_scroll_pane_g9_ParamLimits

0x46b7,	// (0x0002084d) cale_week_scroll_pane_g10_ParamLimits

0x46d4,	// (0x0002086a) cale_week_scroll_pane_g11_ParamLimits

0x46f3,	// (0x00020889) cale_week_scroll_pane_g12_ParamLimits

0x4718,	// (0x000208ae) cale_week_scroll_pane_g13_ParamLimits

0x4741,	// (0x000208d7) cale_week_scroll_pane_g14_ParamLimits

0x476a,	// (0x00020900) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x0002b2bc) cale_week_scroll_pane_g_ParamLimits

0x47b3,	// (0x00020949) cale_week_time_pane_ParamLimits

0x47d3,	// (0x00020969) grid_cale_week_pane_ParamLimits

0xc1c5,	// (0x0002835b) listscroll_cale_week_pane_t1

0xc1d7,	// (0x0002836d) scroll_pane_cp08_ParamLimits

0x51c6,	// (0x0002135c) cale_month_corner_pane_ParamLimits

0xc554,	// (0x000286ea) cale_month_pane_t1

0x5688,	// (0x0002181e) cale_month_week_pane_ParamLimits

0xd205,	// (0x0002939b) popup_call_status_window_g1_ParamLimits

0x5d89,	// (0x00021f1f) popup_call_status_window_g2_ParamLimits

0x5d95,	// (0x00021f2b) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x0002b43b) popup_call_status_window_g_ParamLimits

0xc929,	// (0x00028abf) aid_call2_pane

0x63d3,	// (0x00022569) msg_header_pane_g1

0x654c,	// (0x000226e2) postcard_address2_pane_ParamLimits

0x654c,	// (0x000226e2) postcard_address2_pane

0x655a,	// (0x000226f0) postcard_message2_pane_ParamLimits

0x655a,	// (0x000226f0) postcard_message2_pane

0x6bb6,	// (0x00022d4c) message2_row_pane_ParamLimits

0x6bb6,	// (0x00022d4c) message2_row_pane

0x6bd0,	// (0x00022d66) address2_row_pane_ParamLimits

0x6bd0,	// (0x00022d66) address2_row_pane

0xde85,	// (0x0002a01b) postcard_message2_row_pane_g1

0xde8d,	// (0x0002a023) postcard_message2_row_pane_t1

0xde85,	// (0x0002a01b) address2_row_pane_g1

0xde8d,	// (0x0002a023) address2_row_pane_t1

0x4a27,	// (0x00020bbd) aid_size_cell_vorec

0xbd23,	// (0x00027eb9) main_rss_pane

0xde9b,	// (0x0002a031) rss_list_single_pane_ParamLimits

0xde9b,	// (0x0002a031) rss_list_single_pane

0xdea9,	// (0x0002a03f) rss_list_single_pane_t1

0xdea9,	// (0x0002a03f) rss_list_single_pane_t2

0x0001,

0xf545,	// (0x0002b6db) rss_list_single_pane_t

0xbd23,	// (0x00027eb9) main_camera2_pane

0xbd23,	// (0x00027eb9) main_video2_pane

0x2cf3,	// (0x0001ee89) cams_zoom_pane_cp2_ParamLimits

0x2cf3,	// (0x0001ee89) cams_zoom_pane_cp2

0x2cf3,	// (0x0001ee89) image2_vga_pane_ParamLimits

0x2cf3,	// (0x0001ee89) image2_vga_pane

0xc95d,	// (0x00028af3) main_camera2_pane_g1_ParamLimits

0xc95d,	// (0x00028af3) main_camera2_pane_g1

0xc95d,	// (0x00028af3) main_camera2_pane_g2_ParamLimits

0xc95d,	// (0x00028af3) main_camera2_pane_g2

0xc95d,	// (0x00028af3) main_camera2_pane_g3_ParamLimits

0xc95d,	// (0x00028af3) main_camera2_pane_g3

0xc95d,	// (0x00028af3) main_camera2_pane_g4_ParamLimits

0xc95d,	// (0x00028af3) main_camera2_pane_g4

0xc95d,	// (0x00028af3) main_camera2_pane_g5_ParamLimits

0xc95d,	// (0x00028af3) main_camera2_pane_g5

0xc95d,	// (0x00028af3) main_camera2_pane_g6_ParamLimits

0xc95d,	// (0x00028af3) main_camera2_pane_g6

0xc95d,	// (0x00028af3) main_camera2_pane_g7_ParamLimits

0xc95d,	// (0x00028af3) main_camera2_pane_g7

0xc95d,	// (0x00028af3) main_camera2_pane_g8_ParamLimits

0xc95d,	// (0x00028af3) main_camera2_pane_g8

0x0008,

0xf561,	// (0x0002b6f7) main_camera2_pane_g_ParamLimits

0xf561,	// (0x0002b6f7) main_camera2_pane_g

0x338c,	// (0x0001f522) main_camera2_pane_t1_ParamLimits

0x338c,	// (0x0001f522) main_camera2_pane_t1

0x338c,	// (0x0001f522) main_camera2_pane_t2_ParamLimits

0x338c,	// (0x0001f522) main_camera2_pane_t2

0x338c,	// (0x0001f522) main_camera2_pane_t3_ParamLimits

0x338c,	// (0x0001f522) main_camera2_pane_t3

0x338c,	// (0x0001f522) main_camera2_pane_t4_ParamLimits

0x338c,	// (0x0001f522) main_camera2_pane_t4

0x0006,

0xf574,	// (0x0002b70a) main_camera2_pane_t_ParamLimits

0xf574,	// (0x0002b70a) main_camera2_pane_t

0x33b4,	// (0x0001f54a) cams_zoom_pane_cp4_ParamLimits

0x33b4,	// (0x0001f54a) cams_zoom_pane_cp4

0x31cb,	// (0x0001f361) image2_cif_pane_ParamLimits

0x31cb,	// (0x0001f361) image2_cif_pane

0x2cf3,	// (0x0001ee89) image2_subqcif_pane_ParamLimits

0x2cf3,	// (0x0001ee89) image2_subqcif_pane

0x33c2,	// (0x0001f558) main_video2_pane_g1_ParamLimits

0x33c2,	// (0x0001f558) main_video2_pane_g1

0x33c2,	// (0x0001f558) main_video2_pane_g2_ParamLimits

0x33c2,	// (0x0001f558) main_video2_pane_g2

0x33c2,	// (0x0001f558) main_video2_pane_g3_ParamLimits

0x33c2,	// (0x0001f558) main_video2_pane_g3

0x33c2,	// (0x0001f558) main_video2_pane_g4_ParamLimits

0x33c2,	// (0x0001f558) main_video2_pane_g4

0x33c2,	// (0x0001f558) main_video2_pane_g5_ParamLimits

0x33c2,	// (0x0001f558) main_video2_pane_g5

0x33c2,	// (0x0001f558) main_video2_pane_g6_ParamLimits

0x33c2,	// (0x0001f558) main_video2_pane_g6

0x0005,

0xf583,	// (0x0002b719) main_video2_pane_g_ParamLimits

0xf583,	// (0x0002b719) main_video2_pane_g

0x33d0,	// (0x0001f566) main_video2_pane_t1_ParamLimits

0x33d0,	// (0x0001f566) main_video2_pane_t1

0x33d0,	// (0x0001f566) main_video2_pane_t2_ParamLimits

0x33d0,	// (0x0001f566) main_video2_pane_t2

0x33d0,	// (0x0001f566) main_video2_pane_t3_ParamLimits

0x33d0,	// (0x0001f566) main_video2_pane_t3

0x0002,

0xf590,	// (0x0002b726) main_video2_pane_t_ParamLimits

0xf590,	// (0x0002b726) main_video2_pane_t

0x6a51,	// (0x00022be7) call_muted_g2

0x0001,

0xf537,	// (0x0002b6cd) call_muted_g

0xbd23,	// (0x00027eb9) main_mup2_pane

0xc023,	// (0x000281b9) main_mup2_pane_g1_ParamLimits

0xc023,	// (0x000281b9) main_mup2_pane_g1

0xc023,	// (0x000281b9) main_mup2_pane_g2_ParamLimits

0xc023,	// (0x000281b9) main_mup2_pane_g2

0x01f8,	// (0x0001c38e) main_mup_pane_g13_cp1

0x2d01,	// (0x0001ee97) mup_volume_pane_cp1

0xc023,	// (0x000281b9) main_mup2_pane_g4_ParamLimits

0xc023,	// (0x000281b9) main_mup2_pane_g4

0xc023,	// (0x000281b9) main_mup2_pane_g5_ParamLimits

0xc023,	// (0x000281b9) main_mup2_pane_g5

0xc023,	// (0x000281b9) main_mup2_pane_g6_ParamLimits

0xc023,	// (0x000281b9) main_mup2_pane_g6

0xc023,	// (0x000281b9) main_mup2_pane_g7_ParamLimits

0xc023,	// (0x000281b9) main_mup2_pane_g7

0x0006,

0xf597,	// (0x0002b72d) main_mup2_pane_g_ParamLimits

0xf597,	// (0x0002b72d) main_mup2_pane_g

0xc031,	// (0x000281c7) main_mup2_pane_t1_ParamLimits

0xc031,	// (0x000281c7) main_mup2_pane_t1

0xc031,	// (0x000281c7) main_mup2_pane_t2_ParamLimits

0xc031,	// (0x000281c7) main_mup2_pane_t2

0xc031,	// (0x000281c7) main_mup2_pane_t3_ParamLimits

0xc031,	// (0x000281c7) main_mup2_pane_t3

0xc031,	// (0x000281c7) main_mup2_pane_t4_ParamLimits

0xc031,	// (0x000281c7) main_mup2_pane_t4

0xc031,	// (0x000281c7) main_mup2_pane_t5_ParamLimits

0xc031,	// (0x000281c7) main_mup2_pane_t5

0xc031,	// (0x000281c7) main_mup2_pane_t6_ParamLimits

0xc031,	// (0x000281c7) main_mup2_pane_t6

0x0005,

0xf5a6,	// (0x0002b73c) main_mup2_pane_t_ParamLimits

0xf5a6,	// (0x0002b73c) main_mup2_pane_t

0xdd36,	// (0x00029ecc) mup2_visualizer_pane_ParamLimits

0xdd36,	// (0x00029ecc) mup2_visualizer_pane

0xdd36,	// (0x00029ecc) mup_progress_pane_cp_ParamLimits

0xdd36,	// (0x00029ecc) mup_progress_pane_cp

0x33fa,	// (0x0001f590) mup_volume_pane_cp_ParamLimits

0x33fa,	// (0x0001f590) mup_volume_pane_cp

0xc007,	// (0x0002819d) mup2_visualizer_pane_g1_ParamLimits

0xc007,	// (0x0002819d) mup2_visualizer_pane_g1

0xc015,	// (0x000281ab) mup2_visualizer_pane_g2_ParamLimits

0xc015,	// (0x000281ab) mup2_visualizer_pane_g2

0xc015,	// (0x000281ab) mup2_visualizer_pane_g3_ParamLimits

0xc015,	// (0x000281ab) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x0002b235) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x0002b235) mup2_visualizer_pane_g

0xb8d1,	// (0x00027a67) aid_size_cell_fmradio

0x31a2,	// (0x0001f338) aid_height_parent_landcape

0xc3b2,	// (0x00028548) wml_content_pane_cp

0xc3ba,	// (0x00028550) wml_tabs_pane

0xc3c3,	// (0x00028559) popup_wml_miniature_window

0xc3cb,	// (0x00028561) scroll_pane_cp021

0xc3df,	// (0x00028575) wml_content_pane_comp8

0xbd23,	// (0x00027eb9) bg_popup_sub_pane_cp05

0xdf4f,	// (0x0002a0e5) popup_wml_miniature_window_g1

0xdf57,	// (0x0002a0ed) wml_miniature_view_pane

0x6d14,	// (0x00022eaa) aid_size_wml_view

0x6d1c,	// (0x00022eb2) wml_miniature_view_pane_g1

0x6d25,	// (0x00022ebb) wml_miniature_view_pane_g2

0x6d2e,	// (0x00022ec4) wml_miniature_view_pane_g3

0x6d36,	// (0x00022ecc) wml_miniature_view_pane_g4

0x6d3e,	// (0x00022ed4) wml_miniature_view_pane_g5

0x6d46,	// (0x00022edc) wml_miniature_view_pane_g6

0x6d4e,	// (0x00022ee4) wml_miniature_view_pane_g7

0x6d56,	// (0x00022eec) wml_miniature_view_pane_g8

0x0007,

0xf5b3,	// (0x0002b749) wml_miniature_view_pane_g

0xdf5f,	// (0x0002a0f5) background_graphic_ParamLimits

0xdf5f,	// (0x0002a0f5) background_graphic

0xdf6b,	// (0x0002a101) wml_tabs_2_pane

0xdf74,	// (0x0002a10a) wml_tabs_3_pane_ParamLimits

0xdf74,	// (0x0002a10a) wml_tabs_3_pane

0xdf86,	// (0x0002a11c) wml_tabs_4_pane_ParamLimits

0xdf86,	// (0x0002a11c) wml_tabs_4_pane

0xdf9c,	// (0x0002a132) wml_tabs_5_pane_ParamLimits

0xdf9c,	// (0x0002a132) wml_tabs_5_pane

0xdfb6,	// (0x0002a14c) wml_tabs_pane_g2_ParamLimits

0xdfb6,	// (0x0002a14c) wml_tabs_pane_g2

0xdfcb,	// (0x0002a161) wml_tabs_pane_g3_ParamLimits

0xdfcb,	// (0x0002a161) wml_tabs_pane_g3

0xdfe0,	// (0x0002a176) wml_tabs_2_active_pane_ParamLimits

0xdfe0,	// (0x0002a176) wml_tabs_2_active_pane

0xdfe0,	// (0x0002a176) wml_tabs_2_passive_pane_ParamLimits

0xdfe0,	// (0x0002a176) wml_tabs_2_passive_pane

0x6d5e,	// (0x00022ef4) wml_tabs_3_active_pane_cp_ParamLimits

0x6d5e,	// (0x00022ef4) wml_tabs_3_active_pane_cp

0x6d71,	// (0x00022f07) wml_tabs_3_passive_pane_ParamLimits

0x6d71,	// (0x00022f07) wml_tabs_3_passive_pane

0x6d82,	// (0x00022f18) wml_tabs_3_passive_pane_cp_ParamLimits

0x6d82,	// (0x00022f18) wml_tabs_3_passive_pane_cp

0x6d97,	// (0x00022f2d) tabs_4_active_pane

0x6d9f,	// (0x00022f35) tabs_4_passive_pane

0x6da7,	// (0x00022f3d) tabs_4_passive_pane_cp

0x6daf,	// (0x00022f45) tabs_4_passive_pane_cp2

0x69c5,	// (0x00022b5b) aid_height_text

0xdd36,	// (0x00029ecc) mup_volume_cont_pane_ParamLimits

0xdd36,	// (0x00029ecc) mup_volume_cont_pane

0xb8d1,	// (0x00027a67) aid_size_cell_pinb

0xb8d1,	// (0x00027a67) aid_size_list_pinb

0xdd36,	// (0x00029ecc) mup2_volume_cont_pane_ParamLimits

0xdd36,	// (0x00029ecc) mup2_volume_cont_pane

0x33e4,	// (0x0001f57a) mup2_volume_cont_pane_g1_ParamLimits

0x33e4,	// (0x0001f57a) mup2_volume_cont_pane_g1

0x2a7f,	// (0x0001ec15) aid_size_cell_touch_ParamLimits

0x2a7f,	// (0x0001ec15) aid_size_cell_touch

0x2d0b,	// (0x0001eea1) touch_pane_ParamLimits

0x2d0b,	// (0x0001eea1) touch_pane

0x2d01,	// (0x0001ee97) main_rss2_pane

0xdff7,	// (0x0002a18d) listscroll_rss2_pane

0xe000,	// (0x0002a196) rss2_navigation_pane

0xe008,	// (0x0002a19e) list_rss2_pane

0xca41,	// (0x00028bd7) scroll_pane_cp22

0xe010,	// (0x0002a1a6) rss2_navigation_pane_g1

0xe019,	// (0x0002a1af) rss2_navigation_pane_g2

0xe021,	// (0x0002a1b7) rss2_navigation_pane_g3

0x0002,

0xf5c4,	// (0x0002b75a) rss2_navigation_pane_g

0xe029,	// (0x0002a1bf) rss2_navigation_pane_t1

0x6db9,	// (0x00022f4f) rss2_list_single_pane_ParamLimits

0x6db9,	// (0x00022f4f) rss2_list_single_pane

0xe037,	// (0x0002a1cd) rss2_list_single_pane_t2

0xe045,	// (0x0002a1db) rss2_list_single_pane_t3_ParamLimits

0xe045,	// (0x0002a1db) rss2_list_single_pane_t3

0xe062,	// (0x0002a1f8) rss2_list_single_pane_t4

0x5c5e,	// (0x00021df4) smil_status_pane_g1

0x31cb,	// (0x0001f361) main_image2_pane_ParamLimits

0x31cb,	// (0x0001f361) main_image2_pane

0xc95d,	// (0x00028af3) main_camera2_pane_g9_ParamLimits

0xc95d,	// (0x00028af3) main_camera2_pane_g9

0x338c,	// (0x0001f522) main_camera2_pane_t5_ParamLimits

0x338c,	// (0x0001f522) main_camera2_pane_t5

0x33a0,	// (0x0001f536) main_camera2_pane_t6_ParamLimits

0x33a0,	// (0x0001f536) main_camera2_pane_t6

0x6ddc,	// (0x00022f72) main_image2_pane_g1_ParamLimits

0x6ddc,	// (0x00022f72) main_image2_pane_g1

0x66fa,	// (0x00022890) smil2_video_pane_ParamLimits

0x66fa,	// (0x00022890) smil2_video_pane

0x2ab3,	// (0x0001ec49) aid_zoom_text_primary_cp

0x2ca8,	// (0x0001ee3e) popup_preview_fixed_window

0xc30c,	// (0x000284a2) im_reading_pane_g1

0x337e,	// (0x0001f514) cams2_bc_adjust_pane_cp_ParamLimits

0x337e,	// (0x0001f514) cams2_bc_adjust_pane_cp

0x2cf3,	// (0x0001ee89) cams2_bc_adjust_pane_ParamLimits

0x2cf3,	// (0x0001ee89) cams2_bc_adjust_pane

0x01f8,	// (0x0001c38e) cams2_bc_adjust_pane_g1

0x2d01,	// (0x0001ee97) cams2_slider_pane

0x01f8,	// (0x0001c38e) cams2_slider_pane_g1

0x01f8,	// (0x0001c38e) cams2_slider_pane_g2

0x0006,

0xf5cb,	// (0x0002b761) cams2_slider_pane_g

0x2d7c,	// (0x0001ef12) calc_display_pane_ParamLimits

0x2d9a,	// (0x0001ef30) calc_paper_pane_ParamLimits

0x2db6,	// (0x0001ef4c) grid_calc_pane_ParamLimits

0x3101,	// (0x0001f297) popup_clock_digital_window_t1_ParamLimits

0xcdf6,	// (0x00028f8c) main_image_pane_t1

0x2d62,	// (0x0001eef8) aid_size_cell_calc_ParamLimits

0x2d62,	// (0x0001eef8) aid_size_cell_calc

0x31fc,	// (0x0001f392) popup_blid_sat_info2_window_ParamLimits

0x31fc,	// (0x0001f392) popup_blid_sat_info2_window

0xe070,	// (0x0002a206) aid_size_cell_blid

0xdd36,	// (0x00029ecc) bg_popup_window_pane_cp07

0xe08d,	// (0x0002a223) grid_popup_blid_pane

0xe097,	// (0x0002a22d) heading_pane_cp05_ParamLimits

0xe097,	// (0x0002a22d) heading_pane_cp05

0xe161,	// (0x0002a2f7) cell_popup_blid_pane_ParamLimits

0xe161,	// (0x0002a2f7) cell_popup_blid_pane

0xe18b,	// (0x0002a321) cell_popup_blid_pane_g1

0xe193,	// (0x0002a329) cell_popup_blid_pane_t1

0xdd36,	// (0x00029ecc) mup2_indicator_pane_ParamLimits

0xdd36,	// (0x00029ecc) mup2_indicator_pane

0xb8d1,	// (0x00027a67) mup2_visualizer_osc_pane

0xdf39,	// (0x0002a0cf) mup2_visualizer_spec_pane_ParamLimits

0xdf39,	// (0x0002a0cf) mup2_visualizer_spec_pane

0xb8d1,	// (0x00027a67) mup2_spec_half_pane

0xb8d1,	// (0x00027a67) mup2_spec_half_pane_cp

0xe1a1,	// (0x0002a337) mup2_spec_bar_pane_ParamLimits

0xe1a1,	// (0x0002a337) mup2_spec_bar_pane

0xc045,	// (0x000281db) mup2_spec_bar_pane_g1

0xe1c0,	// (0x0002a356) mup2_spec_bar_pane_g2

0x0001,

0xf5f1,	// (0x0002b787) mup2_spec_bar_pane_g

0xb8d1,	// (0x00027a67) mup2_osc_middle_pane

0xc045,	// (0x000281db) mup2_visualizer_osc_pane_g1

0xb8fb,	// (0x00027a91) popup_number_entry_window_t1_ParamLimits

0xb90e,	// (0x00027aa4) popup_number_entry_window_t2_ParamLimits

0xb920,	// (0x00027ab6) popup_number_entry_window_t3_ParamLimits

0xb932,	// (0x00027ac8) popup_number_entry_window_t5_ParamLimits

0xb932,	// (0x00027ac8) popup_number_entry_window_t5

0xf040,	// (0x0002b1d6) popup_number_entry_window_t_ParamLimits

0xb967,	// (0x00027afd) text_title_cp2_ParamLimits

0x3140,	// (0x0001f2d6) aid_hotspot_pointer_text2_pane

0x3196,	// (0x0001f32c) main_viewer_pane_g9_ParamLimits

0x3196,	// (0x0001f32c) main_viewer_pane_g9

0xc554,	// (0x000286ea) cale_month_pane_t1_ParamLimits

0xc591,	// (0x00028727) bg_cale_pane_ParamLimits

0xc5a9,	// (0x0002873f) list_cale_pane_ParamLimits

0xc5ba,	// (0x00028750) listscroll_cale_day_pane_t1

0xc5cc,	// (0x00028762) scroll_pane_cp09_ParamLimits

0x6122,	// (0x000222b8) main_mup_eq_pane_t1_ParamLimits

0x6122,	// (0x000222b8) main_mup_eq_pane_t1

0x613e,	// (0x000222d4) main_mup_eq_pane_t2_ParamLimits

0x613e,	// (0x000222d4) main_mup_eq_pane_t2

0x615a,	// (0x000222f0) main_mup_eq_pane_t3_ParamLimits

0x615a,	// (0x000222f0) main_mup_eq_pane_t3

0x6174,	// (0x0002230a) main_mup_eq_pane_t4_ParamLimits

0x6174,	// (0x0002230a) main_mup_eq_pane_t4

0x618e,	// (0x00022324) main_mup_eq_pane_t5_ParamLimits

0x618e,	// (0x00022324) main_mup_eq_pane_t5

0x61a8,	// (0x0002233e) main_mup_eq_pane_t6_ParamLimits

0x61a8,	// (0x0002233e) main_mup_eq_pane_t6

0x61be,	// (0x00022354) main_mup_eq_pane_t7_ParamLimits

0x61be,	// (0x00022354) main_mup_eq_pane_t7

0x61d4,	// (0x0002236a) main_mup_eq_pane_t8_ParamLimits

0x61d4,	// (0x0002236a) main_mup_eq_pane_t8

0x61ea,	// (0x00022380) main_mup_eq_pane_t9_ParamLimits

0x61ea,	// (0x00022380) main_mup_eq_pane_t9

0x6206,	// (0x0002239c) main_mup_eq_pane_t10_ParamLimits

0x6206,	// (0x0002239c) main_mup_eq_pane_t10

0x0009,

0xf39f,	// (0x0002b535) main_mup_eq_pane_t_ParamLimits

0xf39f,	// (0x0002b535) main_mup_eq_pane_t

0x62cb,	// (0x00022461) mup_equalizer_pane_cp5_ParamLimits

0x62e3,	// (0x00022479) mup_equalizer_pane_cp6_ParamLimits

0x62fb,	// (0x00022491) mup_equalizer_pane_cp7_ParamLimits

0x2d01,	// (0x0001ee97) main_gallery_pane

0xded7,	// (0x0002a06d) smil2_volume_pane

0xdedf,	// (0x0002a075) smil_status_volume_pane_g1_ParamLimits

0xdef2,	// (0x0002a088) smil_status_volume_pane_g2_ParamLimits

0x335c,	// (0x0001f4f2) smil_status_volume_pane_g3_ParamLimits

0xf54a,	// (0x0002b6e0) smil_status_volume_pane_g_ParamLimits

0xdd36,	// (0x00029ecc) bg_popup_window_pane_cp07_ParamLimits

0xe078,	// (0x0002a20e) blid_firmament_pane

0xbff9,	// (0x0002818f) aid_size_cell_gallery_ParamLimits

0xbff9,	// (0x0002818f) aid_size_cell_gallery

0xbff9,	// (0x0002818f) grid_gallery_pane_ParamLimits

0xbff9,	// (0x0002818f) grid_gallery_pane

0xcd3c,	// (0x00028ed2) cell_gallery_pane_ParamLimits

0xcd3c,	// (0x00028ed2) cell_gallery_pane

0xbfa0,	// (0x00028136) bg_cell_gallery_focus_pane_ParamLimits

0xbfa0,	// (0x00028136) bg_cell_gallery_focus_pane

0xc007,	// (0x0002819d) cell_gallery_pane_g1_ParamLimits

0xc007,	// (0x0002819d) cell_gallery_pane_g1

0xc007,	// (0x0002819d) cell_gallery_pane_g2_ParamLimits

0xc007,	// (0x0002819d) cell_gallery_pane_g2

0xc007,	// (0x0002819d) cell_gallery_pane_g3_ParamLimits

0xc007,	// (0x0002819d) cell_gallery_pane_g3

0xc015,	// (0x000281ab) cell_gallery_pane_g4_ParamLimits

0xc015,	// (0x000281ab) cell_gallery_pane_g4

0x0003,

0xf5f6,	// (0x0002b78c) cell_gallery_pane_g_ParamLimits

0xf5f6,	// (0x0002b78c) cell_gallery_pane_g

0xe1ca,	// (0x0002a360) bg_cell_gallery_focus_pane_g1

0xe1d2,	// (0x0002a368) bg_cell_gallery_focus_pane_g2

0xe1da,	// (0x0002a370) bg_cell_gallery_focus_pane_g3

0xe1e2,	// (0x0002a378) bg_cell_gallery_focus_pane_g4

0xe20c,	// (0x0002a3a2) bg_cell_gallery_focus_pane_g5

0xe214,	// (0x0002a3aa) bg_cell_gallery_focus_pane_g6

0xe21c,	// (0x0002a3b2) bg_cell_gallery_focus_pane_g7

0xe224,	// (0x0002a3ba) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5ff,	// (0x0002b795) bg_cell_gallery_focus_pane_g

0xe22c,	// (0x0002a3c2) aid_firma_cardinal

0xe240,	// (0x0002a3d6) blid_firmament_pane_t1

0xe257,	// (0x0002a3ed) blid_firmament_pane_t2

0xe26e,	// (0x0002a404) blid_firmament_pane_t3

0xe285,	// (0x0002a41b) blid_firmament_pane_t4

0x0003,

0xf610,	// (0x0002b7a6) blid_firmament_pane_t

0xe29c,	// (0x0002a432) blid_sat_info_pane

0xc045,	// (0x000281db) blid_sat_info_pane_g1

0xc045,	// (0x000281db) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x0002b245) blid_sat_info_pane_g

0xe2ac,	// (0x0002a442) blid_sat_info_pane_t1

0xe2ba,	// (0x0002a450) smil2_volume_content_pane

0xe2c3,	// (0x0002a459) smil2_volume_pane_g1

0xc615,	// (0x000287ab) smil2_volume_content_pane_g1

0xe2cb,	// (0x0002a461) smil2_volume_content_pane_g2

0xe2d4,	// (0x0002a46a) smil2_volume_content_pane_g3

0xe2dd,	// (0x0002a473) smil2_volume_content_pane_g4

0xe2e6,	// (0x0002a47c) smil2_volume_content_pane_g5

0xe2ef,	// (0x0002a485) smil2_volume_content_pane_g6

0xe2f8,	// (0x0002a48e) smil2_volume_content_pane_g7

0xe301,	// (0x0002a497) smil2_volume_content_pane_g8

0xe30a,	// (0x0002a4a0) smil2_volume_content_pane_g9

0xe313,	// (0x0002a4a9) smil2_volume_content_pane_g10

0x0009,

0xf619,	// (0x0002b7af) smil2_volume_content_pane_g

0x4894,	// (0x00020a2a) cale_week_day_heading_pane_t1_ParamLimits

0x48bc,	// (0x00020a52) cale_week_day_heading_pane_t2_ParamLimits

0x48e9,	// (0x00020a7f) cale_week_day_heading_pane_t3_ParamLimits

0x4916,	// (0x00020aac) cale_week_day_heading_pane_t4_ParamLimits

0x4943,	// (0x00020ad9) cale_week_day_heading_pane_t5_ParamLimits

0x4970,	// (0x00020b06) cale_week_day_heading_pane_t6_ParamLimits

0x499d,	// (0x00020b33) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x0002b2dd) cale_week_day_heading_pane_t_ParamLimits

0xc1f4,	// (0x0002838a) bg_cale_side_pane_ParamLimits

0x2f11,	// (0x0001f0a7) cale_week_time_pane_t1_ParamLimits

0x2f35,	// (0x0001f0cb) cale_week_time_pane_t2_ParamLimits

0x2f59,	// (0x0001f0ef) cale_week_time_pane_t3_ParamLimits

0x2f7d,	// (0x0001f113) cale_week_time_pane_t4_ParamLimits

0x2fa1,	// (0x0001f137) cale_week_time_pane_t5_ParamLimits

0x2fc7,	// (0x0001f15d) cale_week_time_pane_t6_ParamLimits

0x2fef,	// (0x0001f185) cale_week_time_pane_t7_ParamLimits

0x301b,	// (0x0001f1b1) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x0002b2ec) cale_week_time_pane_t_ParamLimits

0x49c5,	// (0x00020b5b) cell_cale_week_pane_g2_ParamLimits

0xc1f4,	// (0x0002838a) bg_cale_side_pane_cp01_ParamLimits

0x5a81,	// (0x00021c17) cale_month_week_pane_t1_ParamLimits

0x5a9a,	// (0x00021c30) cale_month_week_pane_t2_ParamLimits

0x5ab3,	// (0x00021c49) cale_month_week_pane_t3_ParamLimits

0x5acc,	// (0x00021c62) cale_month_week_pane_t4_ParamLimits

0x5ae5,	// (0x00021c7b) cale_month_week_pane_t5_ParamLimits

0x5b02,	// (0x00021c98) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x0002b3ba) cale_month_week_pane_t_ParamLimits

0x3055,	// (0x0001f1eb) cell_cale_month_pane_g1_ParamLimits

0x2d01,	// (0x0001ee97) main_cale_event_viewer_pane

0xb8d1,	// (0x00027a67) listscroll_cale_event_viewer_pane

0xe31c,	// (0x0002a4b2) list_cale_ev_pane

0xe324,	// (0x0002a4ba) scroll_pane_cp023

0x6de8,	// (0x00022f7e) field_cale_ev_pane_ParamLimits

0x6de8,	// (0x00022f7e) field_cale_ev_pane

0xe330,	// (0x0002a4c6) field_cale_ev_content_pane_ParamLimits

0xe330,	// (0x0002a4c6) field_cale_ev_content_pane

0xe33c,	// (0x0002a4d2) field_cale_ev_pane_g1_ParamLimits

0xe33c,	// (0x0002a4d2) field_cale_ev_pane_g1

0xe348,	// (0x0002a4de) field_cale_ev_pane_g2_ParamLimits

0xe348,	// (0x0002a4de) field_cale_ev_pane_g2

0xe360,	// (0x0002a4f6) field_cale_ev_pane_g3_ParamLimits

0xe360,	// (0x0002a4f6) field_cale_ev_pane_g3

0x0002,

0xf62e,	// (0x0002b7c4) field_cale_ev_pane_g_ParamLimits

0xf62e,	// (0x0002b7c4) field_cale_ev_pane_g

0xe378,	// (0x0002a50e) field_cale_ev_pane_t1_ParamLimits

0xe378,	// (0x0002a50e) field_cale_ev_pane_t1

0x6e0c,	// (0x00022fa2) field_cale_ev_content_pane_t1_ParamLimits

0x6e0c,	// (0x00022fa2) field_cale_ev_content_pane_t1

0xccd5,	// (0x00028e6b) bg_button_pane_cp01

0x44f2,	// (0x00020688) listscroll_cale_week_pane_ParamLimits

0xc1bc,	// (0x00028352) popup_toolbar_window_cp01

0xc1c5,	// (0x0002835b) listscroll_cale_week_pane_t1_ParamLimits

0x44f2,	// (0x00020688) listscroll_cale_day_pane_ParamLimits

0xc1bc,	// (0x00028352) popup_toolbar_window_cp02

0xc5ba,	// (0x00028750) listscroll_cale_day_pane_t1_ParamLimits

0x31b9,	// (0x0001f34f) main_cale_month_pane_ParamLimits

0x331b,	// (0x0001f4b1) popup_toolbar_window_cp03_ParamLimits

0x331b,	// (0x0001f4b1) popup_toolbar_window_cp03

0x660a,	// (0x000227a0) main_image_pane_g2_ParamLimits

0x660a,	// (0x000227a0) main_image_pane_g2

0x6616,	// (0x000227ac) main_image_pane_g3_ParamLimits

0x6616,	// (0x000227ac) main_image_pane_g3

0x0002,

0xf431,	// (0x0002b5c7) main_image_pane_g_ParamLimits

0xf431,	// (0x0002b5c7) main_image_pane_g

0xcdf6,	// (0x00028f8c) main_image_pane_t1_ParamLimits

0x6622,	// (0x000227b8) main_image_pane_t2_ParamLimits

0x6622,	// (0x000227b8) main_image_pane_t2

0x6634,	// (0x000227ca) main_image_pane_t3_ParamLimits

0x6634,	// (0x000227ca) main_image_pane_t3

0x6646,	// (0x000227dc) main_image_pane_t4_ParamLimits

0x6646,	// (0x000227dc) main_image_pane_t4

0x0003,

0xf438,	// (0x0002b5ce) main_image_pane_t_ParamLimits

0xf438,	// (0x0002b5ce) main_image_pane_t

0x6658,	// (0x000227ee) popup_image_details_window_cp01

0x6662,	// (0x000227f8) popup_toobar_trans_pane_cp01_ParamLimits

0x6662,	// (0x000227f8) popup_toobar_trans_pane_cp01

0x325d,	// (0x0001f3f3) popup_image_details_window_ParamLimits

0x325d,	// (0x0001f3f3) popup_image_details_window

0x326b,	// (0x0001f401) popup_image_focus_window

0x2cf3,	// (0x0001ee89) camera2_autofocus_pane_ParamLimits

0x2cf3,	// (0x0001ee89) camera2_autofocus_pane

0xb8d1,	// (0x00027a67) bg_popup_sub_pane_cp06

0xe38f,	// (0x0002a525) popup_image_focus_window_g1

0xe397,	// (0x0002a52d) popup_image_focus_window_g2

0xe39f,	// (0x0002a535) popup_image_focus_window_g3

0xe3a7,	// (0x0002a53d) popup_image_focus_window_g4

0x0003,

0xf635,	// (0x0002b7cb) popup_image_focus_window_g

0xe3af,	// (0x0002a545) popup_image_focus_window_t1

0xe3bd,	// (0x0002a553) popup_image_focus_window_t2

0xe3cd,	// (0x0002a563) popup_image_focus_window_t3

0x0002,

0xf63e,	// (0x0002b7d4) popup_image_focus_window_t

0xc007,	// (0x0002819d) camera2_autofocus_pane_g1

0xbfa0,	// (0x00028136) bg_tb_trans_pane_cp01

0xe3db,	// (0x0002a571) popup_image_details_window_g1

0xe3ee,	// (0x0002a584) popup_image_details_window_g2

0x0002,

0xf650,	// (0x0002b7e6) popup_image_details_window_g

0xe417,	// (0x0002a5ad) popup_image_details_window_t1

0xe429,	// (0x0002a5bf) popup_image_details_window_t2

0xe442,	// (0x0002a5d8) popup_image_details_window_t3

0xe456,	// (0x0002a5ec) popup_image_details_window_t4

0xe471,	// (0x0002a607) popup_image_details_window_t5

0x0004,

0xf657,	// (0x0002b7ed) popup_image_details_window_t

0xc08f,	// (0x00028225) bg_calc_paper_pane_ParamLimits

0x2d01,	// (0x0001ee97) grid_highlight_pane_cp013

0x2de2,	// (0x0001ef78) list_calc_pane_ParamLimits

0x2df4,	// (0x0001ef8a) scroll_pane_cp024

0xc0a3,	// (0x00028239) bg_calc_display_pane_ParamLimits

0x2dfc,	// (0x0001ef92) calc_display_pane_t1_ParamLimits

0x2e11,	// (0x0001efa7) calc_display_pane_t2_ParamLimits

0x2e26,	// (0x0001efbc) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x0002b25d) calc_display_pane_t_ParamLimits

0x2e91,	// (0x0001f027) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x0002b27a) cell_calc_pane_g

0x2e9a,	// (0x0001f030) cell_calc_pane_t1

0xc0f8,	// (0x0002828e) grid_highlight_pane_cp02_ParamLimits

0xc10e,	// (0x000282a4) toolbar_button_pane_cp01_ParamLimits

0xc10e,	// (0x000282a4) toolbar_button_pane_cp01

0xce3b,	// (0x00028fd1) temp_image_control_pane_ParamLimits

0xce3b,	// (0x00028fd1) temp_image_control_pane

0x31cb,	// (0x0001f361) main_mp3_pane

0xe48b,	// (0x0002a621) temp_image_control_pane_g1_ParamLimits

0xe48b,	// (0x0002a621) temp_image_control_pane_g1

0xe499,	// (0x0002a62f) temp_image_control_pane_g2_ParamLimits

0xe499,	// (0x0002a62f) temp_image_control_pane_g2

0xe4ab,	// (0x0002a641) temp_image_control_pane_g3_ParamLimits

0xe4ab,	// (0x0002a641) temp_image_control_pane_g3

0x6e27,	// (0x00022fbd) temp_image_control_pane_g4_ParamLimits

0x6e27,	// (0x00022fbd) temp_image_control_pane_g4

0x0003,

0xf662,	// (0x0002b7f8) temp_image_control_pane_g_ParamLimits

0xf662,	// (0x0002b7f8) temp_image_control_pane_g

0xe48b,	// (0x0002a621) main_mp3_pane_g1

0x6e38,	// (0x00022fce) main_mp3_pane_g2

0x0007,

0xf66b,	// (0x0002b801) main_mp3_pane_g

0xe4e0,	// (0x0002a676) main_mp3_pane_t1

0xc015,	// (0x000281ab) main_camera_pane_g8_ParamLimits

0xc015,	// (0x000281ab) main_camera_pane_g8

0x4b67,	// (0x00020cfd) main_video_pane_g7_ParamLimits

0x4b67,	// (0x00020cfd) main_video_pane_g7

0x338c,	// (0x0001f522) main_camera2_pane_t7_ParamLimits

0x338c,	// (0x0001f522) main_camera2_pane_t7

0xc372,	// (0x00028508) scroll_pane_cp025_ParamLimits

0xc372,	// (0x00028508) scroll_pane_cp025

0xc386,	// (0x0002851c) scroll_pane_cp026_ParamLimits

0xc386,	// (0x0002851c) scroll_pane_cp026

0xc395,	// (0x0002852b) wml_content_pane_ParamLimits

0x2d01,	// (0x0001ee97) main_touch_calib_pane

0x6edc,	// (0x00023072) main_touch_calib_pane_g1

0x6ee8,	// (0x0002307e) main_touch_calib_pane_g2

0x6ef4,	// (0x0002308a) main_touch_calib_pane_g3

0x6f00,	// (0x00023096) main_touch_calib_pane_g4

0x0003,

0xf689,	// (0x0002b81f) main_touch_calib_pane_g

0x6f0c,	// (0x000230a2) main_touch_calib_pane_t1

0x6f23,	// (0x000230b9) main_touch_calib_pane_t2

0x0004,

0xf692,	// (0x0002b828) main_touch_calib_pane_t

0xcabc,	// (0x00028c52) mup_progress_pane_cp02

0xcadb,	// (0x00028c71) navi_pane_g1

0xcb3d,	// (0x00028cd3) navi_pane_mp_t3

0x31cb,	// (0x0001f361) main_mp3_pane_ParamLimits

0x6b67,	// (0x00022cfd) navi_pane_ParamLimits

0xe48b,	// (0x0002a621) main_mp3_pane_g1_ParamLimits

0x6e38,	// (0x00022fce) main_mp3_pane_g2_ParamLimits

0x6e44,	// (0x00022fda) main_mp3_pane_g3_ParamLimits

0x6e44,	// (0x00022fda) main_mp3_pane_g3

0x6e50,	// (0x00022fe6) main_mp3_pane_g4_ParamLimits

0x6e50,	// (0x00022fe6) main_mp3_pane_g4

0xc007,	// (0x0002819d) main_mp3_pane_g5_ParamLimits

0xc007,	// (0x0002819d) main_mp3_pane_g5

0xe4bb,	// (0x0002a651) main_mp3_pane_g6_ParamLimits

0xe4bb,	// (0x0002a651) main_mp3_pane_g6

0xe4c8,	// (0x0002a65e) main_mp3_pane_g7_ParamLimits

0xe4c8,	// (0x0002a65e) main_mp3_pane_g7

0xe4d4,	// (0x0002a66a) main_mp3_pane_g8_ParamLimits

0xe4d4,	// (0x0002a66a) main_mp3_pane_g8

0xf66b,	// (0x0002b801) main_mp3_pane_g_ParamLimits

0x6e5c,	// (0x00022ff2) main_mp3_pane_t2

0x6e6c,	// (0x00023002) main_mp3_pane_t3

0xe4ee,	// (0x0002a684) main_mp3_pane_t4

0xe4fc,	// (0x0002a692) main_mp3_pane_t5

0x0005,

0xf67c,	// (0x0002b812) main_mp3_pane_t

0xe50a,	// (0x0002a6a0) mup_progress_pane_cp01

0x2ab3,	// (0x0001ec49) aid_zoom_text_secondary2

0xe31c,	// (0x0002a4b2) list_cale_ev2_pane

0xe324,	// (0x0002a4ba) scroll_pane_cp023_ParamLimits

0x6f7e,	// (0x00023114) field_cale_ev2_pane_ParamLimits

0x6f7e,	// (0x00023114) field_cale_ev2_pane

0x6f99,	// (0x0002312f) field_cale_ev2_pane_g1_ParamLimits

0x6f99,	// (0x0002312f) field_cale_ev2_pane_g1

0x6fa5,	// (0x0002313b) field_cale_ev2_pane_g2_ParamLimits

0x6fa5,	// (0x0002313b) field_cale_ev2_pane_g2

0x6fbd,	// (0x00023153) field_cale_ev2_pane_g3_ParamLimits

0x6fbd,	// (0x00023153) field_cale_ev2_pane_g3

0x0003,

0xf69d,	// (0x0002b833) field_cale_ev2_pane_g_ParamLimits

0xf69d,	// (0x0002b833) field_cale_ev2_pane_g

0x6fd5,	// (0x0002316b) field_cale_ev2_pane_t1_ParamLimits

0x6fd5,	// (0x0002316b) field_cale_ev2_pane_t1

0x6fec,	// (0x00023182) field_cale_ev2_pane_t2_ParamLimits

0x6fec,	// (0x00023182) field_cale_ev2_pane_t2

0x0001,

0xf6a6,	// (0x0002b83c) field_cale_ev2_pane_t_ParamLimits

0xf6a6,	// (0x0002b83c) field_cale_ev2_pane_t

0x6512,	// (0x000226a8) main_postcard_pane_g5_ParamLimits

0x6512,	// (0x000226a8) main_postcard_pane_g5

0x6520,	// (0x000226b6) main_postcard_pane_g6_ParamLimits

0x6520,	// (0x000226b6) main_postcard_pane_g6

0xbff9,	// (0x0002818f) camera2_autofocus_pane_cp_ParamLimits

0xbff9,	// (0x0002818f) camera2_autofocus_pane_cp

0x31cb,	// (0x0001f361) main_mup3_pane

0x7044,	// (0x000231da) main_mup3_pane_g1_ParamLimits

0x7044,	// (0x000231da) main_mup3_pane_g1

0x7065,	// (0x000231fb) main_mup3_pane_g2_ParamLimits

0x7065,	// (0x000231fb) main_mup3_pane_g2

0x70d9,	// (0x0002326f) main_mup3_pane_g3_ParamLimits

0x70d9,	// (0x0002326f) main_mup3_pane_g3

0x713e,	// (0x000232d4) main_mup3_pane_g4_ParamLimits

0x713e,	// (0x000232d4) main_mup3_pane_g4

0x71a3,	// (0x00023339) main_mup3_pane_g5_ParamLimits

0x71a3,	// (0x00023339) main_mup3_pane_g5

0x7208,	// (0x0002339e) main_mup3_pane_g6_ParamLimits

0x7208,	// (0x0002339e) main_mup3_pane_g6

0xc015,	// (0x000281ab) main_mup3_pane_g7_ParamLimits

0xc015,	// (0x000281ab) main_mup3_pane_g7

0x0007,

0xf6b6,	// (0x0002b84c) main_mup3_pane_g_ParamLimits

0xf6b6,	// (0x0002b84c) main_mup3_pane_g

0x7282,	// (0x00023418) main_mup3_pane_t1_ParamLimits

0x7282,	// (0x00023418) main_mup3_pane_t1

0x72e7,	// (0x0002347d) main_mup3_pane_t2_ParamLimits

0x72e7,	// (0x0002347d) main_mup3_pane_t2

0x73b0,	// (0x00023546) main_mup3_pane_t4_ParamLimits

0x73b0,	// (0x00023546) main_mup3_pane_t4

0x7404,	// (0x0002359a) main_mup3_pane_t5_ParamLimits

0x7404,	// (0x0002359a) main_mup3_pane_t5

0x74c0,	// (0x00023656) main_mup3_pane_t6_ParamLimits

0x74c0,	// (0x00023656) main_mup3_pane_t6

0x0005,

0xf6c7,	// (0x0002b85d) main_mup3_pane_t_ParamLimits

0xf6c7,	// (0x0002b85d) main_mup3_pane_t

0x756a,	// (0x00023700) mup3_progress_pane_ParamLimits

0x756a,	// (0x00023700) mup3_progress_pane

0x75e8,	// (0x0002377e) popup_mup3_control_window_ParamLimits

0x75e8,	// (0x0002377e) popup_mup3_control_window

0xe51e,	// (0x0002a6b4) popup_mup3_text_window

0x7605,	// (0x0002379b) mup3_progress_pane_t1

0x7623,	// (0x000237b9) mup3_progress_pane_t2

0xe526,	// (0x0002a6bc) mup3_progress_pane_t3

0x0002,

0xf6d4,	// (0x0002b86a) mup3_progress_pane_t

0xe543,	// (0x0002a6d9) mup_progress_pane_cp03

0xb8d1,	// (0x00027a67) bg_tb_trans_pane_cp04

0x7641,	// (0x000237d7) mup3_volume_pane

0x7649,	// (0x000237df) popup_mup3_control_window_g1

0x004f,	// (0x0001c1e5) mup3_volume_pane_g1

0x0058,	// (0x0001c1ee) mup3_volume_pane_g2

0x0061,	// (0x0001c1f7) mup3_volume_pane_g3

0x0002,

0xf6db,	// (0x0002b871) mup3_volume_pane_g

0xb8d1,	// (0x00027a67) bg_tb_trans_pane_cp03

0xe553,	// (0x0002a6e9) popup_mup3_text_window_g1

0xe55b,	// (0x0002a6f1) popup_mup3_text_window_t1

0xc0eb,	// (0x00028281) list_calc_item_pane_g1_ParamLimits

0xdfee,	// (0x0002a184) mup_volume_pane_cp_g1

0x6f3c,	// (0x000230d2) main_touch_calib_pane_t3

0x6f52,	// (0x000230e8) main_touch_calib_pane_t4

0x6f68,	// (0x000230fe) main_touch_calib_pane_t5

0x2a6b,	// (0x0001ec01) aid_cell_size_toolbar2

0x2a73,	// (0x0001ec09) aid_popup3_width_pane

0x2ab3,	// (0x0001ec49) aid_zoom_text_msg_primary

0x4a71,	// (0x00020c07) vorec_t7

0xc0af,	// (0x00028245) bg_calc_paper_pane_g1_ParamLimits

0xc0bb,	// (0x00028251) bg_calc_paper_pane_g2_ParamLimits

0xc0c7,	// (0x0002825d) bg_calc_paper_pane_g3_ParamLimits

0xc0d3,	// (0x00028269) bg_calc_paper_pane_g4_ParamLimits

0xc0df,	// (0x00028275) bg_calc_paper_pane_g5_ParamLimits

0x43d5,	// (0x0002056b) bg_calc_paper_pane_g6_ParamLimits

0x43e6,	// (0x0002057c) bg_calc_paper_pane_g7_ParamLimits

0x43f7,	// (0x0002058d) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x0002b264) bg_calc_paper_pane_g_ParamLimits

0x4408,	// (0x0002059e) calc_bg_paper_pane_g9_ParamLimits

0xbff9,	// (0x0002818f) image_qvga_pane_ParamLimits

0xbff9,	// (0x0002818f) image_qvga_pane

0xbf7e,	// (0x00028114) bg_popup_sub_pane_cp04_ParamLimits

0xcd72,	// (0x00028f08) popup_mup_playback_window_g1_ParamLimits

0xcd7e,	// (0x00028f14) popup_mup_playback_window_t1_ParamLimits

0xcd93,	// (0x00028f29) popup_mup_playback_window_t2_ParamLimits

0xf42c,	// (0x0002b5c2) popup_mup_playback_window_t_ParamLimits

0xc007,	// (0x0002819d) main_mup2_pane_g3_ParamLimits

0xc007,	// (0x0002819d) main_mup2_pane_g3

0x4d1a,	// (0x00020eb0) popup_toolbar_window_cp04

0xd117,	// (0x000292ad) popup_call2_audio_second_window_g3_ParamLimits

0xd117,	// (0x000292ad) popup_call2_audio_second_window_g3

0xd551,	// (0x000296e7) popup_call2_audio_first_window_g4_ParamLimits

0xd551,	// (0x000296e7) popup_call2_audio_first_window_g4

0xdb78,	// (0x00029d0e) popup_call2_audio_in_window_g4_ParamLimits

0xdb78,	// (0x00029d0e) popup_call2_audio_in_window_g4

0x65fd,	// (0x00022793) aid_area_sk_bg_cut_ParamLimits

0x65fd,	// (0x00022793) aid_area_sk_bg_cut

0xcda8,	// (0x00028f3e) aid_area_sk_bg_cut_2_ParamLimits

0xcda8,	// (0x00028f3e) aid_area_sk_bg_cut_2

0xb8d1,	// (0x00027a67) aid_placing_details_win

0xb8d1,	// (0x00027a67) aid_placing_details_win_2

0xc007,	// (0x0002819d) camera2_autofocus_pane_g1_ParamLimits

0x2c99,	// (0x0001ee2f) popup_fixed_preview_cale_window_ParamLimits

0x2c99,	// (0x0001ee2f) popup_fixed_preview_cale_window

0xcb84,	// (0x00028d1a) navi_slider_pane_g3

0xcb8d,	// (0x00028d23) navi_slider_pane_g4

0xcb96,	// (0x00028d2c) navi_slider_pane_g5

0xcb84,	// (0x00028d1a) navi_slider_pane_g6

0x3127,	// (0x0001f2bd) navi_slider_pane_g7

0xcca2,	// (0x00028e38) mup_scale_pane_g3

0xccab,	// (0x00028e41) mup_scale_pane_g4

0xccb4,	// (0x00028e4a) mup_scale_pane_g5

0x6313,	// (0x000224a9) mup_scale_pane_g6

0x631c,	// (0x000224b2) mup_scale_pane_g7

0x01f8,	// (0x0001c38e) cams2_slider_pane_g3

0x01f8,	// (0x0001c38e) cams2_slider_pane_g4

0x01f8,	// (0x0001c38e) cams2_slider_pane_g5

0x01f8,	// (0x0001c38e) cams2_slider_pane_g6

0x01f8,	// (0x0001c38e) cams2_slider_pane_g7

0xc045,	// (0x000281db) camera2_autofocus_pane_cp_g1

0xde5e,	// (0x00029ff4) bg_popup_preview_window_pane_cp02_ParamLimits

0xde5e,	// (0x00029ff4) bg_popup_preview_window_pane_cp02

0xe569,	// (0x0002a6ff) list_fp_cale_pane_ParamLimits

0xe569,	// (0x0002a6ff) list_fp_cale_pane

0xe575,	// (0x0002a70b) popup_fixed_preview_cale_window_t1_ParamLimits

0xe575,	// (0x0002a70b) popup_fixed_preview_cale_window_t1

0x7652,	// (0x000237e8) popup_fixed_preview_cale_window_t2_ParamLimits

0x7652,	// (0x000237e8) popup_fixed_preview_cale_window_t2

0x7667,	// (0x000237fd) popup_fixed_preview_cale_window_t3_ParamLimits

0x7667,	// (0x000237fd) popup_fixed_preview_cale_window_t3

0x0002,

0xf6e2,	// (0x0002b878) popup_fixed_preview_cale_window_t_ParamLimits

0xf6e2,	// (0x0002b878) popup_fixed_preview_cale_window_t

0x767c,	// (0x00023812) list_single_fp_cale_pane_ParamLimits

0x767c,	// (0x00023812) list_single_fp_cale_pane

0xe593,	// (0x0002a729) list_single_fp_cale_pane_g1_ParamLimits

0xe593,	// (0x0002a729) list_single_fp_cale_pane_g1

0xe59f,	// (0x0002a735) list_single_fp_cale_pane_g2_ParamLimits

0xe59f,	// (0x0002a735) list_single_fp_cale_pane_g2

0x0002,

0xf6e9,	// (0x0002b87f) list_single_fp_cale_pane_g_ParamLimits

0xf6e9,	// (0x0002b87f) list_single_fp_cale_pane_g

0xe5b8,	// (0x0002a74e) list_single_fp_cale_pane_t1_ParamLimits

0xe5b8,	// (0x0002a74e) list_single_fp_cale_pane_t1

0xe5ca,	// (0x0002a760) list_single_fp_cale_pane_t2_ParamLimits

0xe5ca,	// (0x0002a760) list_single_fp_cale_pane_t2

0x0001,

0xf6f0,	// (0x0002b886) list_single_fp_cale_pane_t_ParamLimits

0xf6f0,	// (0x0002b886) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x2d01,	// (0x0001ee97) main_dialer_pane

0xb8d1,	// (0x00027a67) aid_cell_size_keypad

0xb8d1,	// (0x00027a67) dialer_ne_pane

0xb8d1,	// (0x00027a67) grid_dialer_command_1_pane

0xb8d1,	// (0x00027a67) grid_dialer_command_2_pane

0xb8d1,	// (0x00027a67) grid_dialer_keypad_pane

0xdd36,	// (0x00029ecc) bg_popup_call_pane_cp06_ParamLimits

0xdd36,	// (0x00029ecc) bg_popup_call_pane_cp06

0xdd36,	// (0x00029ecc) dialer_ne_clear_pane_ParamLimits

0xdd36,	// (0x00029ecc) dialer_ne_clear_pane

0xc045,	// (0x000281db) dialer_ne_pane_g1

0xc063,	// (0x000281f9) dialer_ne_pane_t1_ParamLimits

0xc063,	// (0x000281f9) dialer_ne_pane_t1

0xe6f9,	// (0x0002a88f) dialer_ne_pane_t2_ParamLimits

0xe6f9,	// (0x0002a88f) dialer_ne_pane_t2

0x768c,	// (0x00023822) dialer_ne_pane_t3_ParamLimits

0x768c,	// (0x00023822) dialer_ne_pane_t3

0x0002,

0xf6f5,	// (0x0002b88b) dialer_ne_pane_t_ParamLimits

0xf6f5,	// (0x0002b88b) dialer_ne_pane_t

0x768c,	// (0x00023822) dialer_ne_pane_t3_copy1_ParamLimits

0x768c,	// (0x00023822) dialer_ne_pane_t3_copy1

0xe5fd,	// (0x0002a793) cell_dialer_keypad_pane_ParamLimits

0xe5fd,	// (0x0002a793) cell_dialer_keypad_pane

0xbfa0,	// (0x00028136) cell_dialer_command_1_pane_ParamLimits

0xbfa0,	// (0x00028136) cell_dialer_command_1_pane

0xe614,	// (0x0002a7aa) cell_dialer_command_2_pane_ParamLimits

0xe614,	// (0x0002a7aa) cell_dialer_command_2_pane

0xbfa0,	// (0x00028136) bg_button_pane_cp02_ParamLimits

0xbfa0,	// (0x00028136) bg_button_pane_cp02

0xc007,	// (0x0002819d) cell_dialer_keypad_pane_g1_ParamLimits

0xc007,	// (0x0002819d) cell_dialer_keypad_pane_g1

0xbfa0,	// (0x00028136) bg_button_pane_cp03_ParamLimits

0xbfa0,	// (0x00028136) bg_button_pane_cp03

0xc007,	// (0x0002819d) cell_dialer_command_1_pane_g1_ParamLimits

0xc007,	// (0x0002819d) cell_dialer_command_1_pane_g1

0xb8d1,	// (0x00027a67) bg_button_pane_cp04

0xc045,	// (0x000281db) cell_dialer_command_2_pane_g1

0xb8d1,	// (0x00027a67) bg_button_pane_cp06

0xc045,	// (0x000281db) dialer_ne_clear_pane_g1

0x6043,	// (0x000221d9) navi_pane_g2

0x6071,	// (0x00022207) navi_pane_g3

0x0002,

0xf334,	// (0x0002b4ca) navi_pane_g

0x609c,	// (0x00022232) navi_pane_mv_g2

0x60c3,	// (0x00022259) navi_pane_mv_g5

0x60cb,	// (0x00022261) navi_pane_mv_t1

0xc0a3,	// (0x00028239) main_clock2_pane

0xbff9,	// (0x0002818f) main_clock2_list_pane_ParamLimits

0xbff9,	// (0x0002818f) main_clock2_list_pane

0x7701,	// (0x00023897) main_clock2_pane_t1_ParamLimits

0x7701,	// (0x00023897) main_clock2_pane_t1

0x772f,	// (0x000238c5) main_clock2_pane_t2_ParamLimits

0x772f,	// (0x000238c5) main_clock2_pane_t2

0x0004,

0xf701,	// (0x0002b897) main_clock2_pane_t_ParamLimits

0xf701,	// (0x0002b897) main_clock2_pane_t

0x7794,	// (0x0002392a) popup_clock_analogue_window_cp03_ParamLimits

0x7794,	// (0x0002392a) popup_clock_analogue_window_cp03

0x77b2,	// (0x00023948) popup_clock_digital_window_cp02_ParamLimits

0x77b2,	// (0x00023948) popup_clock_digital_window_cp02

0x77f2,	// (0x00023988) main_clock2_list_single_pane_ParamLimits

0x77f2,	// (0x00023988) main_clock2_list_single_pane

0xc24f,	// (0x000283e5) list_highlight_pane_cp05

0xe655,	// (0x0002a7eb) main_clock2_list_single_pane_t1

0x4d1a,	// (0x00020eb0) popup_toolbar_window_cp04_ParamLimits

0xc015,	// (0x000281ab) camera2_autofocus_pane_g2_ParamLimits

0xc015,	// (0x000281ab) camera2_autofocus_pane_g2

0xc015,	// (0x000281ab) camera2_autofocus_pane_g3_ParamLimits

0xc015,	// (0x000281ab) camera2_autofocus_pane_g3

0xc015,	// (0x000281ab) camera2_autofocus_pane_g4_ParamLimits

0xc015,	// (0x000281ab) camera2_autofocus_pane_g4

0xc015,	// (0x000281ab) camera2_autofocus_pane_g5_ParamLimits

0xc015,	// (0x000281ab) camera2_autofocus_pane_g5

0x0004,

0xf645,	// (0x0002b7db) camera2_autofocus_pane_g_ParamLimits

0xf645,	// (0x0002b7db) camera2_autofocus_pane_g

0x7001,	// (0x00023197) camera2_autofocus_pane_cp_g2

0x7009,	// (0x0002319f) camera2_autofocus_pane_cp_g3

0x7011,	// (0x000231a7) camera2_autofocus_pane_cp_g4

0x7019,	// (0x000231af) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ab,	// (0x0002b841) camera2_autofocus_pane_cp_g

0xb8d1,	// (0x00027a67) popup_dialer_spcha_window

0xb8d1,	// (0x00027a67) bg_popup_sub_pane_cp07

0xb8d1,	// (0x00027a67) list_spcha_pane

0xe663,	// (0x0002a7f9) list_single_spcha_pane_ParamLimits

0xe663,	// (0x0002a7f9) list_single_spcha_pane

0xb8d1,	// (0x00027a67) list_highlight_pane_cp06

0xc7b2,	// (0x00028948) list_single_spcha_pane_t1

0xd922,	// (0x00029ab8) popup_call2_audio_out_window_g4_ParamLimits

0xd922,	// (0x00029ab8) popup_call2_audio_out_window_g4

0x2d01,	// (0x0001ee97) main_imed2_pane

0x3275,	// (0x0001f40b) popup_imed_adjust2_window

0x3288,	// (0x0001f41e) popup_imed_trans_window_ParamLimits

0x3288,	// (0x0001f41e) popup_imed_trans_window

0xe0c3,	// (0x0002a259) popup_blid_sat_info2_window_t1

0xe0d1,	// (0x0002a267) popup_blid_sat_info2_window_t2

0x000a,

0xf5da,	// (0x0002b770) popup_blid_sat_info2_window_t

0x7804,	// (0x0002399a) aid_size_cell_colour_35

0x781e,	// (0x000239b4) aid_size_cell_colour_112

0x7835,	// (0x000239cb) aid_size_cell_effect

0xbfa0,	// (0x00028136) bg_tb_trans_pane_cp02

0xcbd2,	// (0x00028d68) heading_imed_pane

0x784f,	// (0x000239e5) listscroll_imed_pane

0xe675,	// (0x0002a80b) heading_imed_pane_g1

0xe67d,	// (0x0002a813) heading_imed_pane_t1

0xe68b,	// (0x0002a821) grid_imed_colour_35_pane_ParamLimits

0xe68b,	// (0x0002a821) grid_imed_colour_35_pane

0x785b,	// (0x000239f1) grid_imed_effect_pane

0xe6a7,	// (0x0002a83d) list_imed_aspect_pane

0x786b,	// (0x00023a01) scroll_pane_cp027_ParamLimits

0x786b,	// (0x00023a01) scroll_pane_cp027

0x7877,	// (0x00023a0d) cell_imed_effect_pane_ParamLimits

0x7877,	// (0x00023a0d) cell_imed_effect_pane

0xe6af,	// (0x0002a845) cell_imed_colour_pane_ParamLimits

0xe6af,	// (0x0002a845) cell_imed_colour_pane

0xe716,	// (0x0002a8ac) cell_imed_colour_pane_g1_ParamLimits

0xe716,	// (0x0002a8ac) cell_imed_colour_pane_g1

0xe727,	// (0x0002a8bd) hgihlgiht_grid_pane_cp016_ParamLimits

0xe727,	// (0x0002a8bd) hgihlgiht_grid_pane_cp016

0x7893,	// (0x00023a29) cell_imed_effect_pane_g1

0x789b,	// (0x00023a31) grid_highlight_pane_cp017

0xe738,	// (0x0002a8ce) list_imed_single_pane_ParamLimits

0xe738,	// (0x0002a8ce) list_imed_single_pane

0xb8d1,	// (0x00027a67) list_highlight_pane_cp07

0xe74c,	// (0x0002a8e2) list_imed_aspect_pane_comp1_t1

0xcd3c,	// (0x00028ed2) bg_tb_trans_pane_cp05

0xe76e,	// (0x0002a904) popup_imed_adjust2_window_g1

0xe795,	// (0x0002a92b) popup_imed_adjust2_window_t1

0xe7ad,	// (0x0002a943) slider_imed_adjust_pane

0xe7c1,	// (0x0002a957) slider_imed_adjust_pane_g1

0xe7d1,	// (0x0002a967) slider_imed_adjust_pane_g2

0xe7e1,	// (0x0002a977) slider_imed_adjust_pane_g3

0xe7f2,	// (0x0002a988) slider_imed_adjust_pane_g4

0x0003,

0xf71e,	// (0x0002b8b4) slider_imed_adjust_pane_g

0x78a4,	// (0x00023a3a) aid_size_cell_clipart2

0xe803,	// (0x0002a999) grid_imed_clipart_pane

0xccc5,	// (0x00028e5b) scroll_pane_cp031

0x78b0,	// (0x00023a46) cell_imed_clipart_pane_ParamLimits

0x78b0,	// (0x00023a46) cell_imed_clipart_pane

0x78ce,	// (0x00023a64) cell_imed_clipart_pane_g1

0xb8d1,	// (0x00027a67) grid_highlight_pane_cp014

0x76e3,	// (0x00023879) main_clock2_pane_g1_ParamLimits

0x76e3,	// (0x00023879) main_clock2_pane_g1

0x77ce,	// (0x00023964) aid_call2_pane_cp10

0x77e0,	// (0x00023976) aid_call_pane_cp10

0xcab0,	// (0x00028c46) popup_clock_analogue_window_cp10_g1

0xcab0,	// (0x00028c46) popup_clock_analogue_window_cp10_g2

0x3410,	// (0x0001f5a6) popup_clock_analogue_window_cp10_g3

0x3410,	// (0x0001f5a6) popup_clock_analogue_window_cp10_g4

0xcab0,	// (0x00028c46) popup_clock_analogue_window_cp10_g5

0x0004,

0xf70c,	// (0x0002b8a2) popup_clock_analogue_window_cp10_g

0x3426,	// (0x0001f5bc) popup_clock_analogue_window_cp10_t1

0x3445,	// (0x0001f5db) clock_digital_number_pane_cp10_ParamLimits

0x3445,	// (0x0001f5db) clock_digital_number_pane_cp10

0x345f,	// (0x0001f5f5) clock_digital_number_pane_cp11_ParamLimits

0x345f,	// (0x0001f5f5) clock_digital_number_pane_cp11

0x3479,	// (0x0001f60f) clock_digital_number_pane_cp12_ParamLimits

0x3479,	// (0x0001f60f) clock_digital_number_pane_cp12

0x3493,	// (0x0001f629) clock_digital_number_pane_cp13_ParamLimits

0x3493,	// (0x0001f629) clock_digital_number_pane_cp13

0x34af,	// (0x0001f645) clock_digital_separator_pane_cp10_ParamLimits

0x34af,	// (0x0001f645) clock_digital_separator_pane_cp10

0x34c9,	// (0x0001f65f) popup_clock_digital_window_cp02_t1_ParamLimits

0x34c9,	// (0x0001f65f) popup_clock_digital_window_cp02_t1

0xbf76,	// (0x0002810c) clock_digital_number_pane_cp10_g1

0xbf76,	// (0x0002810c) clock_digital_number_pane_cp10_g2

0x0001,

0xf727,	// (0x0002b8bd) clock_digital_number_pane_cp10_g

0xbf76,	// (0x0002810c) clock_digital_separator_pane_cp10_g1

0xbf76,	// (0x0002810c) clock_digital_separator_pane_g2_cp10

0xcb4b,	// (0x00028ce1) navi_pane_vded_g4

0xcb54,	// (0x00028cea) navi_pane_vded_g5

0xcb5d,	// (0x00028cf3) navi_pane_vded_t1

0x2d01,	// (0x0001ee97) main_vded_pane

0x78d7,	// (0x00023a6d) main_vded_pane_g1

0x78e3,	// (0x00023a79) main_vded_pane_g2

0x78ed,	// (0x00023a83) main_vded_pane_g3

0x0002,

0xf72c,	// (0x0002b8c2) main_vded_pane_g

0x78f7,	// (0x00023a8d) main_vded_pane_t1

0x7905,	// (0x00023a9b) main_vded_pane_t2

0x0001,

0xf733,	// (0x0002b8c9) main_vded_pane_t

0x7913,	// (0x00023aa9) vded_slider_pane

0x791d,	// (0x00023ab3) vded_video_pane

0xe80d,	// (0x0002a9a3) vded_video_pane_g1

0x7929,	// (0x00023abf) vded_video_pane_g2

0xc045,	// (0x000281db) vded_video_pane_g3

0x0002,

0xf738,	// (0x0002b8ce) vded_video_pane_g

0xe817,	// (0x0002a9ad) vded_slider_pane_g1

0xdfee,	// (0x0002a184) vded_slider_pane_g2

0xe820,	// (0x0002a9b6) vded_slider_pane_g3

0xe829,	// (0x0002a9bf) vded_slider_pane_g4

0xe832,	// (0x0002a9c8) vded_slider_pane_g5

0x0004,

0xf73f,	// (0x0002b8d5) vded_slider_pane_g

0x75dc,	// (0x00023772) mup3_rocker_pane_ParamLimits

0x75dc,	// (0x00023772) mup3_rocker_pane

0x7932,	// (0x00023ac8) mup3_control_keys_pane_g1

0x793a,	// (0x00023ad0) mup3_control_keys_pane_g2

0x7942,	// (0x00023ad8) mup3_control_keys_pane_g3

0x794a,	// (0x00023ae0) mup3_control_keys_pane_g4

0x0003,

0xf74a,	// (0x0002b8e0) mup3_control_keys_pane_g

0x2cc1,	// (0x0001ee57) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2cc1,	// (0x0001ee57) popup_toolbar2_fixed_window_cp01

0x75f8,	// (0x0002378e) popup_toolbar2_fixed_window_cp02_ParamLimits

0x75f8,	// (0x0002378e) popup_toolbar2_fixed_window_cp02

0xd2b9,	// (0x0002944f) popup_call2_audio_second_window_t4_ParamLimits

0xd2b9,	// (0x0002944f) popup_call2_audio_second_window_t4

0xd7e7,	// (0x0002997d) popup_call2_audio_first_window_t6_ParamLimits

0xd7e7,	// (0x0002997d) popup_call2_audio_first_window_t6

0xda25,	// (0x00029bbb) popup_call2_audio_out_window_t6_ParamLimits

0xda25,	// (0x00029bbb) popup_call2_audio_out_window_t6

0x2d01,	// (0x0001ee97) main_vitu_pane

0xbff9,	// (0x0002818f) aid_size_cell_itu_ParamLimits

0xbff9,	// (0x0002818f) aid_size_cell_itu

0xbff9,	// (0x0002818f) bg_popup_window_pane_cp08_ParamLimits

0xbff9,	// (0x0002818f) bg_popup_window_pane_cp08

0xbff9,	// (0x0002818f) field_vitu_entry_pane_ParamLimits

0xbff9,	// (0x0002818f) field_vitu_entry_pane

0xbff9,	// (0x0002818f) grid_vitu_function_pane_ParamLimits

0xbff9,	// (0x0002818f) grid_vitu_function_pane

0xbff9,	// (0x0002818f) grid_vitu_itu_pane_ParamLimits

0xbff9,	// (0x0002818f) grid_vitu_itu_pane

0xbff9,	// (0x0002818f) cell_vitu_itu_pane_ParamLimits

0xbff9,	// (0x0002818f) cell_vitu_itu_pane

0xbff9,	// (0x0002818f) cell_vitu_function_pane_ParamLimits

0xbff9,	// (0x0002818f) cell_vitu_function_pane

0xbfa0,	// (0x00028136) bg_popup_sub_pane_cp08_ParamLimits

0xbfa0,	// (0x00028136) bg_popup_sub_pane_cp08

0xc04f,	// (0x000281e5) field_vitu_entry_pane_t1_ParamLimits

0xc04f,	// (0x000281e5) field_vitu_entry_pane_t1

0xe6f9,	// (0x0002a88f) field_vitu_entry_pane_t2_ParamLimits

0xe6f9,	// (0x0002a88f) field_vitu_entry_pane_t2

0x0001,

0xf753,	// (0x0002b8e9) field_vitu_entry_pane_t_ParamLimits

0xf753,	// (0x0002b8e9) field_vitu_entry_pane_t

0xdd36,	// (0x00029ecc) bg_button_pane_cp05_ParamLimits

0xdd36,	// (0x00029ecc) bg_button_pane_cp05

0xe83b,	// (0x0002a9d1) cell_vitu_itu_pane_g1

0xd1e3,	// (0x00029379) cell_vitu_itu_pane_t1_ParamLimits

0xd1e3,	// (0x00029379) cell_vitu_itu_pane_t1

0xd1e3,	// (0x00029379) cell_vitu_itu_pane_t2_ParamLimits

0xd1e3,	// (0x00029379) cell_vitu_itu_pane_t2

0x0002,

0xf758,	// (0x0002b8ee) cell_vitu_itu_pane_t_ParamLimits

0xf758,	// (0x0002b8ee) cell_vitu_itu_pane_t

0xb8d1,	// (0x00027a67) bg_button_pane_cp07

0xc045,	// (0x000281db) cell_vitu_function_pane_g1

0x2dda,	// (0x0001ef70) main_calc_pane_g1

0x2aa7,	// (0x0001ec3d) aid_visual_content_pane

0x2d01,	// (0x0001ee97) main_vradio_pane

0xc015,	// (0x000281ab) main_vradio_pane_g1_ParamLimits

0xc015,	// (0x000281ab) main_vradio_pane_g1

0xc015,	// (0x000281ab) main_vradio_pane_g2_ParamLimits

0xc015,	// (0x000281ab) main_vradio_pane_g2

0x0001,

0xf4ef,	// (0x0002b685) main_vradio_pane_g_ParamLimits

0xf4ef,	// (0x0002b685) main_vradio_pane_g

0xc063,	// (0x000281f9) main_vradio_pane_t1_ParamLimits

0xc063,	// (0x000281f9) main_vradio_pane_t1

0xc063,	// (0x000281f9) main_vradio_pane_t2_ParamLimits

0xc063,	// (0x000281f9) main_vradio_pane_t2

0xc063,	// (0x000281f9) main_vradio_pane_t3_ParamLimits

0xc063,	// (0x000281f9) main_vradio_pane_t3

0x0002,

0xf75f,	// (0x0002b8f5) main_vradio_pane_t_ParamLimits

0xf75f,	// (0x0002b8f5) main_vradio_pane_t

0xbff9,	// (0x0002818f) vradio_rocker_control_pane_ParamLimits

0xbff9,	// (0x0002818f) vradio_rocker_control_pane

0xbff9,	// (0x0002818f) vradio_station_info_pane_ParamLimits

0xbff9,	// (0x0002818f) vradio_station_info_pane

0xbfa0,	// (0x00028136) vradio_frequency_info_pane_ParamLimits

0xbfa0,	// (0x00028136) vradio_frequency_info_pane

0xc045,	// (0x000281db) vradio_station_info_pane_g1

0xd1e3,	// (0x00029379) vradio_station_info_pane_t1_ParamLimits

0xd1e3,	// (0x00029379) vradio_station_info_pane_t1

0xc063,	// (0x000281f9) vradio_station_info_pane_t2_ParamLimits

0xc063,	// (0x000281f9) vradio_station_info_pane_t2

0x0001,

0xf766,	// (0x0002b8fc) vradio_station_info_pane_t_ParamLimits

0xf766,	// (0x0002b8fc) vradio_station_info_pane_t

0xb8d1,	// (0x00027a67) vradio_tuning_pane

0x795a,	// (0x00023af0) vradio_rocker_control_pane_g1

0xe857,	// (0x0002a9ed) vradio_rocker_control_pane_g2

0x7962,	// (0x00023af8) vradio_rocker_control_pane_g3

0x796a,	// (0x00023b00) vradio_rocker_control_pane_g4

0x7974,	// (0x00023b0a) vradio_rocker_control_pane_g5

0x0004,

0xf76b,	// (0x0002b901) vradio_rocker_control_pane_g

0xc045,	// (0x000281db) vradio_frequency_info_pane_g1

0xc04f,	// (0x000281e5) vradio_frequency_info_pane_t1_ParamLimits

0xc04f,	// (0x000281e5) vradio_frequency_info_pane_t1

0x797c,	// (0x00023b12) vradio_tuning_pane_g1

0x7989,	// (0x00023b1f) vradio_tuning_pane_t1

0x2ac3,	// (0x0001ec59) area_side_right_pane_ParamLimits

0x2ac3,	// (0x0001ec59) area_side_right_pane

0xde25,	// (0x00029fbb) status_small_pane_g1

0xde2d,	// (0x00029fc3) status_small_pane_g2

0xde36,	// (0x00029fcc) status_small_pane_g3

0xde3f,	// (0x00029fd5) status_small_pane_g4

0x0003,

0xf53c,	// (0x0002b6d2) status_small_pane_g

0xde48,	// (0x00029fde) status_small_pane_t1

0x2d01,	// (0x0001ee97) main_video3_pane

0xb8d1,	// (0x00027a67) cams_zoom_vslider_pane

0xe85f,	// (0x0002a9f5) image3_wide_pane_ParamLimits

0xe85f,	// (0x0002a9f5) image3_wide_pane

0xb8d1,	// (0x00027a67) image3_wide_small_pane

0xe879,	// (0x0002aa0f) main_video3_pane_g1_ParamLimits

0xe879,	// (0x0002aa0f) main_video3_pane_g1

0xe879,	// (0x0002aa0f) main_video3_pane_g2_ParamLimits

0xe879,	// (0x0002aa0f) main_video3_pane_g2

0x0001,

0xf776,	// (0x0002b90c) main_video3_pane_g_ParamLimits

0xf776,	// (0x0002b90c) main_video3_pane_g

0xe897,	// (0x0002aa2d) main_video3_pane_t1_ParamLimits

0xe897,	// (0x0002aa2d) main_video3_pane_t1

0xe897,	// (0x0002aa2d) main_video3_pane_t2_ParamLimits

0xe897,	// (0x0002aa2d) main_video3_pane_t2

0xe897,	// (0x0002aa2d) main_video3_pane_t3_ParamLimits

0xe897,	// (0x0002aa2d) main_video3_pane_t3

0x0002,

0xf77b,	// (0x0002b911) main_video3_pane_t_ParamLimits

0xf77b,	// (0x0002b911) main_video3_pane_t

0xc045,	// (0x000281db) cams_zoom_vslider_pane_g1

0xc045,	// (0x000281db) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x0002b245) cams_zoom_vslider_pane_g

0xb8d1,	// (0x00027a67) small_slider_vertical_pane

0xc045,	// (0x000281db) small_slider_vertical_pane_g1

0xc045,	// (0x000281db) small_slider_vertical_pane_g2

0xe8be,	// (0x0002aa54) small_slider_vertical_pane_g3

0x0002,

0xf782,	// (0x0002b918) small_slider_vertical_pane_g

0x2d01,	// (0x0001ee97) main_hwr_training_pane

0xe8c7,	// (0x0002aa5d) hwr_training_instruct_pane_ParamLimits

0xe8c7,	// (0x0002aa5d) hwr_training_instruct_pane

0x7998,	// (0x00023b2e) hwr_training_navi_pane_ParamLimits

0x7998,	// (0x00023b2e) hwr_training_navi_pane

0x79b2,	// (0x00023b48) hwr_training_write_pane_ParamLimits

0x79b2,	// (0x00023b48) hwr_training_write_pane

0xb8d1,	// (0x00027a67) bg_frame_shadow_pane

0xe8fe,	// (0x0002aa94) hwr_training_write_pane_g1

0xe906,	// (0x0002aa9c) hwr_training_write_pane_g2

0xe90e,	// (0x0002aaa4) hwr_training_write_pane_g3

0xe916,	// (0x0002aaac) hwr_training_write_pane_g4

0xe91e,	// (0x0002aab4) hwr_training_write_pane_g5

0xe926,	// (0x0002aabc) hwr_training_write_pane_g6

0xe92e,	// (0x0002aac4) hwr_training_write_pane_g7

0x0006,

0xf789,	// (0x0002b91f) hwr_training_write_pane_g

0x34ea,	// (0x0001f680) hwr_training_navi_pane_g1_ParamLimits

0x34ea,	// (0x0001f680) hwr_training_navi_pane_g1

0x34fc,	// (0x0001f692) hwr_training_navi_pane_g2_ParamLimits

0x34fc,	// (0x0001f692) hwr_training_navi_pane_g2

0x350e,	// (0x0001f6a4) hwr_training_navi_pane_g3_ParamLimits

0x350e,	// (0x0001f6a4) hwr_training_navi_pane_g3

0x351e,	// (0x0001f6b4) hwr_training_navi_pane_g4_ParamLimits

0x351e,	// (0x0001f6b4) hwr_training_navi_pane_g4

0x0004,

0xf798,	// (0x0002b92e) hwr_training_navi_pane_g_ParamLimits

0xf798,	// (0x0002b92e) hwr_training_navi_pane_g

0x3538,	// (0x0001f6ce) hwr_training_navi_pane_t1

0x79ea,	// (0x00023b80) list_single_hwr_training_instruct_pane_ParamLimits

0x79ea,	// (0x00023b80) list_single_hwr_training_instruct_pane

0xe936,	// (0x0002aacc) list_single_hwr_training_instruct_pane_t1

0xe1ca,	// (0x0002a360) bg_frame_shadow_pane_g1

0xe945,	// (0x0002aadb) bg_frame_shadow_pane_g2

0xe94d,	// (0x0002aae3) bg_frame_shadow_pane_g3

0xe955,	// (0x0002aaeb) bg_frame_shadow_pane_g4

0xe95d,	// (0x0002aaf3) bg_frame_shadow_pane_g5

0xe965,	// (0x0002aafb) bg_frame_shadow_pane_g6

0xe96d,	// (0x0002ab03) bg_frame_shadow_pane_g7

0xc152,	// (0x000282e8) bg_frame_shadow_pane_g8

0x0007,

0xf7a3,	// (0x0002b939) bg_frame_shadow_pane_g

0x2d01,	// (0x0001ee97) main_video_tele_dialer_pane

0x3546,	// (0x0001f6dc) aid_size_cell_video_keypad_ParamLimits

0x3546,	// (0x0001f6dc) aid_size_cell_video_keypad

0x3556,	// (0x0001f6ec) grid_video_dialer_keypad_pane_ParamLimits

0x3556,	// (0x0001f6ec) grid_video_dialer_keypad_pane

0x3564,	// (0x0001f6fa) video_down_pane_cp_ParamLimits

0x3564,	// (0x0001f6fa) video_down_pane_cp

0x3572,	// (0x0001f708) cell_video_dialer_keypad_pane_ParamLimits

0x3572,	// (0x0001f708) cell_video_dialer_keypad_pane

0xe975,	// (0x0002ab0b) bg_button_pane_cp08_ParamLimits

0xe975,	// (0x0002ab0b) bg_button_pane_cp08

0x7a43,	// (0x00023bd9) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7a43,	// (0x00023bd9) cell_video_dialer_keypad_pane_g1

0x75d0,	// (0x00023766) mup3_rocker2_pane_ParamLimits

0x75d0,	// (0x00023766) mup3_rocker2_pane

0xc045,	// (0x000281db) mup3_rocker2_pane_g1

0x31d9,	// (0x0001f36f) main_dialer2_pane

0x2d01,	// (0x0001ee97) main_mp4_pane

0x35a7,	// (0x0001f73d) main_mp4_pane_g1_ParamLimits

0x35a7,	// (0x0001f73d) main_mp4_pane_g1

0x35c9,	// (0x0001f75f) main_mp4_pane_g2_ParamLimits

0x35c9,	// (0x0001f75f) main_mp4_pane_g2

0x35e7,	// (0x0001f77d) main_mp4_pane_g3_ParamLimits

0x35e7,	// (0x0001f77d) main_mp4_pane_g3

0x3622,	// (0x0001f7b8) main_mp4_pane_g4_ParamLimits

0x3622,	// (0x0001f7b8) main_mp4_pane_g4

0x364a,	// (0x0001f7e0) main_mp4_pane_g5_ParamLimits

0x364a,	// (0x0001f7e0) main_mp4_pane_g5

0x0007,

0xf7c3,	// (0x0002b959) main_mp4_pane_g_ParamLimits

0xf7c3,	// (0x0002b959) main_mp4_pane_g

0x36b2,	// (0x0001f848) main_mp4_pane_t1_ParamLimits

0x36b2,	// (0x0001f848) main_mp4_pane_t1

0x3714,	// (0x0001f8aa) main_mp4_pane_t2_ParamLimits

0x3714,	// (0x0001f8aa) main_mp4_pane_t2

0x3778,	// (0x0001f90e) main_mp4_pane_t3_ParamLimits

0x3778,	// (0x0001f90e) main_mp4_pane_t3

0x37d6,	// (0x0001f96c) main_mp4_pane_t4_ParamLimits

0x37d6,	// (0x0001f96c) main_mp4_pane_t4

0x0003,

0xf7d4,	// (0x0002b96a) main_mp4_pane_t_ParamLimits

0xf7d4,	// (0x0002b96a) main_mp4_pane_t

0x3834,	// (0x0001f9ca) mp4_progress_pane_ParamLimits

0x3834,	// (0x0001f9ca) mp4_progress_pane

0x3868,	// (0x0001f9fe) mp4_rocker_pane_ParamLimits

0x3868,	// (0x0001f9fe) mp4_rocker_pane

0xe989,	// (0x0002ab1f) mp4_progress_pane_t1

0xe9ab,	// (0x0002ab41) mp4_progress_pane_t2

0x0001,

0xf7dd,	// (0x0002b973) mp4_progress_pane_t

0xe9cd,	// (0x0002ab63) mup_progress_pane_cp04

0x01f8,	// (0x0001c38e) mp4_rocker_pane_g1

0x2cf3,	// (0x0001ee89) aid_cell_size_keypad2_ParamLimits

0x2cf3,	// (0x0001ee89) aid_cell_size_keypad2

0x2cf3,	// (0x0001ee89) dialer2_ne_pane_ParamLimits

0x2cf3,	// (0x0001ee89) dialer2_ne_pane

0x2cf3,	// (0x0001ee89) grid_dialer2_keypad_pane_ParamLimits

0x2cf3,	// (0x0001ee89) grid_dialer2_keypad_pane

0xe1ea,	// (0x0002a380) bg_popup_call_pane_cp07_ParamLimits

0xe1ea,	// (0x0002a380) bg_popup_call_pane_cp07

0x7a7e,	// (0x00023c14) dialer2_ne_pane_t1_ParamLimits

0x7a7e,	// (0x00023c14) dialer2_ne_pane_t1

0x387e,	// (0x0001fa14) cell_dialer2_keypad_pane_ParamLimits

0x387e,	// (0x0001fa14) cell_dialer2_keypad_pane

0xdd36,	// (0x00029ecc) bg_button_pane_pane_cp04_ParamLimits

0xdd36,	// (0x00029ecc) bg_button_pane_pane_cp04

0xc007,	// (0x0002819d) cell_dialer2_keypad_pane_g1_ParamLimits

0xc007,	// (0x0002819d) cell_dialer2_keypad_pane_g1

0x4bec,	// (0x00020d82) aid_placing_vt_set_content_ParamLimits

0x4bec,	// (0x00020d82) aid_placing_vt_set_content

0x4c14,	// (0x00020daa) aid_placing_vt_set_title_ParamLimits

0x4c14,	// (0x00020daa) aid_placing_vt_set_title

0x2d01,	// (0x0001ee97) main_image3_pane

0x38c7,	// (0x0001fa5d) area_side_right_pane_cp01_ParamLimits

0x38c7,	// (0x0001fa5d) area_side_right_pane_cp01

0x38f6,	// (0x0001fa8c) main_image3_pane_g1_ParamLimits

0x38f6,	// (0x0001fa8c) main_image3_pane_g1

0x3904,	// (0x0001fa9a) main_image3_pane_g2_ParamLimits

0x3904,	// (0x0001fa9a) main_image3_pane_g2

0x391d,	// (0x0001fab3) main_image3_pane_g3_ParamLimits

0x391d,	// (0x0001fab3) main_image3_pane_g3

0x3936,	// (0x0001facc) main_image3_pane_g4_ParamLimits

0x3936,	// (0x0001facc) main_image3_pane_g4

0x0003,

0xf7ec,	// (0x0002b982) main_image3_pane_g_ParamLimits

0xf7ec,	// (0x0002b982) main_image3_pane_g

0x394f,	// (0x0001fae5) main_image3_pane_t1_ParamLimits

0x394f,	// (0x0001fae5) main_image3_pane_t1

0x3974,	// (0x0001fb0a) main_image3_pane_t2_ParamLimits

0x3974,	// (0x0001fb0a) main_image3_pane_t2

0x3993,	// (0x0001fb29) main_image3_pane_t3_ParamLimits

0x3993,	// (0x0001fb29) main_image3_pane_t3

0x0003,

0xf7f5,	// (0x0002b98b) main_image3_pane_t_ParamLimits

0xf7f5,	// (0x0002b98b) main_image3_pane_t

0xbff9,	// (0x0002818f) grid_sctrl_middle_pane_cp01_ParamLimits

0xbff9,	// (0x0002818f) grid_sctrl_middle_pane_cp01

0x7aa3,	// (0x00023c39) cell_sctrl_middle_pane_cp01_ParamLimits

0x7aa3,	// (0x00023c39) cell_sctrl_middle_pane_cp01

0x7ab4,	// (0x00023c4a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7ab4,	// (0x00023c4a) cell_sctrl_middle_pane_cp01_g1

0x2d01,	// (0x0001ee97) main_call4_pane

0x39f4,	// (0x0001fb8a) aid_size_button_call4_ParamLimits

0x39f4,	// (0x0001fb8a) aid_size_button_call4

0x3a2a,	// (0x0001fbc0) call4_windows_pane_ParamLimits

0x3a2a,	// (0x0001fbc0) call4_windows_pane

0x3a3f,	// (0x0001fbd5) grid_call4_button_pane_ParamLimits

0x3a3f,	// (0x0001fbd5) grid_call4_button_pane

0x7acd,	// (0x00023c63) call4_windows_conf_pane

0x7ae6,	// (0x00023c7c) popup_call4_audio_first_window_ParamLimits

0x7ae6,	// (0x00023c7c) popup_call4_audio_first_window

0x7b36,	// (0x00023ccc) popup_call4_audio_second_window_ParamLimits

0x7b36,	// (0x00023ccc) popup_call4_audio_second_window

0x7b4f,	// (0x00023ce5) popup_call4_audio_wait_window_ParamLimits

0x7b4f,	// (0x00023ce5) popup_call4_audio_wait_window

0x3a63,	// (0x0001fbf9) cell_call4_button_pane_ParamLimits

0x3a63,	// (0x0001fbf9) cell_call4_button_pane

0x7b5d,	// (0x00023cf3) bg_button_pane_cp09_ParamLimits

0x7b5d,	// (0x00023cf3) bg_button_pane_cp09

0x3a86,	// (0x0001fc1c) cell_call4_button_pane_g1_ParamLimits

0x3a86,	// (0x0001fc1c) cell_call4_button_pane_g1

0x7b69,	// (0x00023cff) cell_call4_button_pane_t1_ParamLimits

0x7b69,	// (0x00023cff) cell_call4_button_pane_t1

0xea16,	// (0x0002abac) popup_call4_audio_conf_window_ParamLimits

0xea16,	// (0x0002abac) popup_call4_audio_conf_window

0x7605,	// (0x0002379b) mup3_progress_pane_t1_ParamLimits

0x7623,	// (0x000237b9) mup3_progress_pane_t2_ParamLimits

0xe526,	// (0x0002a6bc) mup3_progress_pane_t3_ParamLimits

0xf6d4,	// (0x0002b86a) mup3_progress_pane_t_ParamLimits

0xe543,	// (0x0002a6d9) mup_progress_pane_cp03_ParamLimits

0x7952,	// (0x00023ae8) mup3_control_keys_pane_g4_copy1

0x3868,	// (0x0001f9fe) mp4_rocker2_pane_ParamLimits

0x3868,	// (0x0001f9fe) mp4_rocker2_pane

0x3ac5,	// (0x0001fc5b) mp4_rocker2_pane_g1

0x3ac5,	// (0x0001fc5b) mp4_rocker2_pane_g2

0x3ac5,	// (0x0001fc5b) mp4_rocker2_pane_g3

0x3ac5,	// (0x0001fc5b) mp4_rocker2_pane_g4

0x3ac5,	// (0x0001fc5b) mp4_rocker2_pane_g5

0x0004,

0xf7fe,	// (0x0002b994) mp4_rocker2_pane_g

0x2d01,	// (0x0001ee97) main_camera4_pane

0x2d01,	// (0x0001ee97) main_video4_pane

0x7a03,	// (0x00023b99) main_video_tele_dialer_pane_t1_ParamLimits

0x7a03,	// (0x00023b99) main_video_tele_dialer_pane_t1

0x7a15,	// (0x00023bab) main_video_tele_dialer_pane_t2_ParamLimits

0x7a15,	// (0x00023bab) main_video_tele_dialer_pane_t2

0x0001,

0xf7b4,	// (0x0002b94a) main_video_tele_dialer_pane_t_ParamLimits

0xf7b4,	// (0x0002b94a) main_video_tele_dialer_pane_t

0x3ae5,	// (0x0001fc7b) cam4_autofocus_pane_ParamLimits

0x3ae5,	// (0x0001fc7b) cam4_autofocus_pane

0x3afd,	// (0x0001fc93) cam4_image_uncrop_pane_ParamLimits

0x3afd,	// (0x0001fc93) cam4_image_uncrop_pane

0x3b16,	// (0x0001fcac) cam4_indicators_pane_ParamLimits

0x3b16,	// (0x0001fcac) cam4_indicators_pane

0x3b32,	// (0x0001fcc8) main_camera4_pane_g1_ParamLimits

0x3b32,	// (0x0001fcc8) main_camera4_pane_g1

0x3b3e,	// (0x0001fcd4) main_camera4_pane_g2_ParamLimits

0x3b3e,	// (0x0001fcd4) main_camera4_pane_g2

0x3b3e,	// (0x0001fcd4) main_camera4_pane_g3_ParamLimits

0x3b3e,	// (0x0001fcd4) main_camera4_pane_g3

0x3b4a,	// (0x0001fce0) main_camera4_pane_g4_ParamLimits

0x3b4a,	// (0x0001fce0) main_camera4_pane_g4

0x3b56,	// (0x0001fcec) main_camera4_pane_g5_ParamLimits

0x3b56,	// (0x0001fcec) main_camera4_pane_g5

0x0005,

0xf809,	// (0x0002b99f) main_camera4_pane_g_ParamLimits

0xf809,	// (0x0002b99f) main_camera4_pane_g

0x3b70,	// (0x0001fd06) main_camera4_pane_t1_ParamLimits

0x3b70,	// (0x0001fd06) main_camera4_pane_t1

0x0c2b,	// (0x0001cdc1) bg_tb_trans_pane_cp06

0x3b9c,	// (0x0001fd32) cam4_indicators_pane_g1

0x3bad,	// (0x0001fd43) cam4_indicators_pane_g2

0x0002,

0xf824,	// (0x0002b9ba) cam4_indicators_pane_g

0x3bc5,	// (0x0001fd5b) cam4_indicators_pane_t1

0x3bef,	// (0x0001fd85) main_video4_pane_g1_ParamLimits

0x3bef,	// (0x0001fd85) main_video4_pane_g1

0x3bfb,	// (0x0001fd91) main_video4_pane_g2_ParamLimits

0x3bfb,	// (0x0001fd91) main_video4_pane_g2

0x3c07,	// (0x0001fd9d) main_video4_pane_g3_ParamLimits

0x3c07,	// (0x0001fd9d) main_video4_pane_g3

0x3c13,	// (0x0001fda9) main_video4_pane_g4_ParamLimits

0x3c13,	// (0x0001fda9) main_video4_pane_g4

0x0004,

0xf82b,	// (0x0002b9c1) main_video4_pane_g_ParamLimits

0xf82b,	// (0x0002b9c1) main_video4_pane_g

0x3c35,	// (0x0001fdcb) vid4_indicators_pane_ParamLimits

0x3c35,	// (0x0001fdcb) vid4_indicators_pane

0x3c54,	// (0x0001fdea) video4_image_uncrop_cif_pane_ParamLimits

0x3c54,	// (0x0001fdea) video4_image_uncrop_cif_pane

0x3c63,	// (0x0001fdf9) video4_image_uncrop_nhd_pane_ParamLimits

0x3c63,	// (0x0001fdf9) video4_image_uncrop_nhd_pane

0x3afd,	// (0x0001fc93) video4_image_uncrop_vga_pane_ParamLimits

0x3afd,	// (0x0001fc93) video4_image_uncrop_vga_pane

0x31cb,	// (0x0001f361) bg_tb_trans_pane_cp07

0x3c7c,	// (0x0001fe12) vid4_indicators_pane_g1

0x3c92,	// (0x0001fe28) vid4_indicators_pane_g2

0x3ca6,	// (0x0001fe3c) vid4_indicators_pane_g3

0x0004,

0xf836,	// (0x0002b9cc) vid4_indicators_pane_g

0x3cd7,	// (0x0001fe6d) vid4_indicators_pane_t1

0x7ba1,	// (0x00023d37) cam4_autofocus_pane_g1

0x7ba9,	// (0x00023d3f) cam4_autofocus_pane_g2

0x7bb1,	// (0x00023d47) cam4_autofocus_pane_g3

0x0002,

0xf841,	// (0x0002b9d7) cam4_autofocus_pane_g

0x7bb9,	// (0x00023d4f) cam4_autofocus_pane_g3_copy1

0x7a27,	// (0x00023bbd) video_down_pane_cp_t1

0x7a35,	// (0x00023bcb) video_down_pane_cp_t2

0x0001,

0xf7b9,	// (0x0002b94f) video_down_pane_cp_t

0x2cf3,	// (0x0001ee89) popup_vitu2_window_ParamLimits

0x2cf3,	// (0x0001ee89) popup_vitu2_window

0x3cee,	// (0x0001fe84) aid_size_cell2_itu2_ParamLimits

0x3cee,	// (0x0001fe84) aid_size_cell2_itu2

0x3d10,	// (0x0001fea6) aid_size_cell_itu2_ParamLimits

0x3d10,	// (0x0001fea6) aid_size_cell_itu2

0x3d54,	// (0x0001feea) bg_popup_window_pane_cp09_ParamLimits

0x3d54,	// (0x0001feea) bg_popup_window_pane_cp09

0x3d62,	// (0x0001fef8) field_vitu2_entry_pane_ParamLimits

0x3d62,	// (0x0001fef8) field_vitu2_entry_pane

0x3d82,	// (0x0001ff18) grid_vitu2_function_pane_ParamLimits

0x3d82,	// (0x0001ff18) grid_vitu2_function_pane

0x3dc6,	// (0x0001ff5c) grid_vitu2_itu_pane_ParamLimits

0x3dc6,	// (0x0001ff5c) grid_vitu2_itu_pane

0x3e3c,	// (0x0001ffd2) cell_vitu2_itu_pane_ParamLimits

0x3e3c,	// (0x0001ffd2) cell_vitu2_itu_pane

0x3e57,	// (0x0001ffed) cell_vitu2_function_pane_ParamLimits

0x3e57,	// (0x0001ffed) cell_vitu2_function_pane

0xea30,	// (0x0002abc6) bg_popup_call_pane_cp08_ParamLimits

0xea30,	// (0x0002abc6) bg_popup_call_pane_cp08

0xea47,	// (0x0002abdd) field_vitu2_entry_pane_g1

0xea53,	// (0x0002abe9) field_vitu2_entry_pane_g2

0x0002,

0xf848,	// (0x0002b9de) field_vitu2_entry_pane_g

0xea5f,	// (0x0002abf5) field_vitu2_entry_pane_t1_ParamLimits

0xea5f,	// (0x0002abf5) field_vitu2_entry_pane_t1

0xea8e,	// (0x0002ac24) field_vitu2_entry_pane_t2_ParamLimits

0xea8e,	// (0x0002ac24) field_vitu2_entry_pane_t2

0x0001,

0xf84f,	// (0x0002b9e5) field_vitu2_entry_pane_t_ParamLimits

0xf84f,	// (0x0002b9e5) field_vitu2_entry_pane_t

0x337e,	// (0x0001f514) bg_button_pane_cp010_ParamLimits

0x337e,	// (0x0001f514) bg_button_pane_cp010

0x3e9b,	// (0x00020031) cell_vitu2_itu_pane_g1

0x3ec1,	// (0x00020057) cell_vitu2_itu_pane_t1_ParamLimits

0x3ec1,	// (0x00020057) cell_vitu2_itu_pane_t1

0x3f0d,	// (0x000200a3) cell_vitu2_itu_pane_t2_ParamLimits

0x3f0d,	// (0x000200a3) cell_vitu2_itu_pane_t2

0x0002,

0xf859,	// (0x0002b9ef) cell_vitu2_itu_pane_t_ParamLimits

0xf859,	// (0x0002b9ef) cell_vitu2_itu_pane_t

0x31cb,	// (0x0001f361) bg_button_pane_cp011

0x3fd5,	// (0x0002016b) cell_vitu2_function_pane_g1

0x2d01,	// (0x0001ee97) main_myfav_hc_pane

0x39d5,	// (0x0001fb6b) popup_image3_note_pane_ParamLimits

0x39d5,	// (0x0001fb6b) popup_image3_note_pane

0x39e3,	// (0x0001fb79) popup_image3_tool_bar_pane_ParamLimits

0x39e3,	// (0x0001fb79) popup_image3_tool_bar_pane

0x3f83,	// (0x00020119) cell_vitu2_itu_pane_t3_ParamLimits

0x3f83,	// (0x00020119) cell_vitu2_itu_pane_t3

0xb8d1,	// (0x00027a67) bg_popup_trans_pane

0xeab3,	// (0x0002ac49) grid_image3_tool_bar_pane

0xeabd,	// (0x0002ac53) bg_popup_trans_pane_g1

0xc47b,	// (0x00028611) bg_popup_trans_pane_g2

0xeac5,	// (0x0002ac5b) bg_popup_trans_pane_g3

0xeacd,	// (0x0002ac63) bg_popup_trans_pane_g4

0xead5,	// (0x0002ac6b) bg_popup_trans_pane_g5

0xeadd,	// (0x0002ac73) bg_popup_trans_pane_g6

0xeae5,	// (0x0002ac7b) bg_popup_trans_pane_g7

0xeaed,	// (0x0002ac83) bg_popup_trans_pane_g8

0xc45b,	// (0x000285f1) bg_popup_trans_pane_g9

0x0008,

0xf860,	// (0x0002b9f6) bg_popup_trans_pane_g

0xeaf5,	// (0x0002ac8b) cell_image3_tool_bar_pane_ParamLimits

0xeaf5,	// (0x0002ac8b) cell_image3_tool_bar_pane

0xc045,	// (0x000281db) cell_image3_tool_bar_pane_g1

0xb8d1,	// (0x00027a67) bg_popup_trans_pane_cp1

0xeb0b,	// (0x0002aca1) popup_image3_note_pane_t1

0xeb19,	// (0x0002acaf) popup_image3_note_pane_t2

0xeb27,	// (0x0002acbd) popup_image3_note_pane_t3

0x0002,

0xf873,	// (0x0002ba09) popup_image3_note_pane_t

0xeb37,	// (0x0002accd) popup_image3_note_pane_t3_copy1

0x7bc1,	// (0x00023d57) bg_myfav_hc_instruction_pane_ParamLimits

0x7bc1,	// (0x00023d57) bg_myfav_hc_instruction_pane

0x7bd9,	// (0x00023d6f) cell_myfav_contact_pane_ParamLimits

0x7bd9,	// (0x00023d6f) cell_myfav_contact_pane

0x7bf3,	// (0x00023d89) cell_myfav_contact_pane_cp1_ParamLimits

0x7bf3,	// (0x00023d89) cell_myfav_contact_pane_cp1

0x7c0b,	// (0x00023da1) cell_myfav_contact_pane_cp2_ParamLimits

0x7c0b,	// (0x00023da1) cell_myfav_contact_pane_cp2

0x7c23,	// (0x00023db9) cell_myfav_contact_pane_cp3_ParamLimits

0x7c23,	// (0x00023db9) cell_myfav_contact_pane_cp3

0x7c3a,	// (0x00023dd0) cell_myfav_contact_pane_cp4_ParamLimits

0x7c3a,	// (0x00023dd0) cell_myfav_contact_pane_cp4

0x7c50,	// (0x00023de6) cell_myfav_contact_pane_cp5_ParamLimits

0x7c50,	// (0x00023de6) cell_myfav_contact_pane_cp5

0x7c64,	// (0x00023dfa) cell_myfav_contact_pane_cp6_ParamLimits

0x7c64,	// (0x00023dfa) cell_myfav_contact_pane_cp6

0x7c78,	// (0x00023e0e) cell_myfav_contact_pane_cp7_ParamLimits

0x7c78,	// (0x00023e0e) cell_myfav_contact_pane_cp7

0xeb45,	// (0x0002acdb) listscroll_gen_pane_cp05

0x7c90,	// (0x00023e26) main_myfav_hc_pane_g1_ParamLimits

0x7c90,	// (0x00023e26) main_myfav_hc_pane_g1

0x7caa,	// (0x00023e40) main_myfav_hc_pane_g2_ParamLimits

0x7caa,	// (0x00023e40) main_myfav_hc_pane_g2

0x0002,

0xf87a,	// (0x0002ba10) main_myfav_hc_pane_g_ParamLimits

0xf87a,	// (0x0002ba10) main_myfav_hc_pane_g

0x7cdc,	// (0x00023e72) main_myfav_hc_pane_t1_ParamLimits

0x7cdc,	// (0x00023e72) main_myfav_hc_pane_t1

0xeb4e,	// (0x0002ace4) main_myfav_hc_pane_t2_ParamLimits

0xeb4e,	// (0x0002ace4) main_myfav_hc_pane_t2

0xeb60,	// (0x0002acf6) main_myfav_hc_pane_t3_ParamLimits

0xeb60,	// (0x0002acf6) main_myfav_hc_pane_t3

0x7cf3,	// (0x00023e89) main_myfav_hc_pane_t4_ParamLimits

0x7cf3,	// (0x00023e89) main_myfav_hc_pane_t4

0x0004,

0xf881,	// (0x0002ba17) main_myfav_hc_pane_t_ParamLimits

0xf881,	// (0x0002ba17) main_myfav_hc_pane_t

0xc045,	// (0x000281db) bg_myfav_hc_instruction_pane_g1

0xeb72,	// (0x0002ad08) cell_myfav_contact_pane_g1_ParamLimits

0xeb72,	// (0x0002ad08) cell_myfav_contact_pane_g1

0xeb72,	// (0x0002ad08) cell_myfav_contact_pane_g2_ParamLimits

0xeb72,	// (0x0002ad08) cell_myfav_contact_pane_g2

0xeb7e,	// (0x0002ad14) cell_myfav_contact_pane_g3_ParamLimits

0xeb7e,	// (0x0002ad14) cell_myfav_contact_pane_g3

0xc015,	// (0x000281ab) cell_myfav_contact_pane_g4_ParamLimits

0xc015,	// (0x000281ab) cell_myfav_contact_pane_g4

0xeb8b,	// (0x0002ad21) cell_myfav_contact_pane_g5_ParamLimits

0xeb8b,	// (0x0002ad21) cell_myfav_contact_pane_g5

0x0004,

0xf88c,	// (0x0002ba22) cell_myfav_contact_pane_g_ParamLimits

0xf88c,	// (0x0002ba22) cell_myfav_contact_pane_g

0x7cc4,	// (0x00023e5a) main_myfav_hc_pane_g3_ParamLimits

0x7cc4,	// (0x00023e5a) main_myfav_hc_pane_g3

0x2bfd,	// (0x0001ed93) popup_adpt_find_window

0x7d1d,	// (0x00023eb3) afind_page_pane_ParamLimits

0x7d1d,	// (0x00023eb3) afind_page_pane

0x7d2a,	// (0x00023ec0) aid_size_cell_afind_ParamLimits

0x7d2a,	// (0x00023ec0) aid_size_cell_afind

0x7d44,	// (0x00023eda) bg_popup_sub_pane_cp09_ParamLimits

0x7d44,	// (0x00023eda) bg_popup_sub_pane_cp09

0x7d55,	// (0x00023eeb) find_pane_cp01_ParamLimits

0x7d55,	// (0x00023eeb) find_pane_cp01

0xeb97,	// (0x0002ad2d) grid_afind_control_pane_ParamLimits

0xeb97,	// (0x0002ad2d) grid_afind_control_pane

0x7d68,	// (0x00023efe) grid_afind_pane_ParamLimits

0x7d68,	// (0x00023efe) grid_afind_pane

0x7d84,	// (0x00023f1a) cell_afind_pane_ParamLimits

0x7d84,	// (0x00023f1a) cell_afind_pane

0xc045,	// (0x000281db) afind_page_pane_g1

0x7dcc,	// (0x00023f62) afind_page_pane_g2

0x7dd4,	// (0x00023f6a) afind_page_pane_g3

0x0002,

0xf897,	// (0x0002ba2d) afind_page_pane_g

0x7ddc,	// (0x00023f72) afind_page_pane_t1

0xebbd,	// (0x0002ad53) cell_afind_grid_control_pane_ParamLimits

0xebbd,	// (0x0002ad53) cell_afind_grid_control_pane

0xebcc,	// (0x0002ad62) bg_button_pane_cp69_ParamLimits

0xebcc,	// (0x0002ad62) bg_button_pane_cp69

0x7dea,	// (0x00023f80) cell_afind_pane_g1_ParamLimits

0x7dea,	// (0x00023f80) cell_afind_pane_g1

0x7df7,	// (0x00023f8d) cell_afind_pane_t1_ParamLimits

0x7df7,	// (0x00023f8d) cell_afind_pane_t1

0xebd8,	// (0x0002ad6e) bg_button_pane_cp72

0xebe0,	// (0x0002ad76) cell_afind_grid_control_pane_g1

0x672a,	// (0x000228c0) aid_image_placing_area_ParamLimits

0x672a,	// (0x000228c0) aid_image_placing_area

0xc007,	// (0x0002819d) field_vitu_entry_pane_g1_ParamLimits

0xc007,	// (0x0002819d) field_vitu_entry_pane_g1

0xc007,	// (0x0002819d) field_vitu_entry_pane_g2_ParamLimits

0xc007,	// (0x0002819d) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x0002b352) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x0002b352) field_vitu_entry_pane_g

0xe83b,	// (0x0002a9d1) cell_vitu_itu_pane_g1_ParamLimits

0xe6f9,	// (0x0002a88f) cell_vitu_itu_pane_t3_ParamLimits

0xe6f9,	// (0x0002a88f) cell_vitu_itu_pane_t3

0xe989,	// (0x0002ab1f) mp4_progress_pane_t1_ParamLimits

0xe9ab,	// (0x0002ab41) mp4_progress_pane_t2_ParamLimits

0xf7dd,	// (0x0002b973) mp4_progress_pane_t_ParamLimits

0xe9cd,	// (0x0002ab63) mup_progress_pane_cp04_ParamLimits

0x7d07,	// (0x00023e9d) main_myfav_hc_pane_t5_ParamLimits

0x7d07,	// (0x00023e9d) main_myfav_hc_pane_t5

0x2abb,	// (0x0001ec51) aid_zoom_text_primary

0x2bfd,	// (0x0001ed93) popup_adpt_find_window_ParamLimits

0x31cb,	// (0x0001f361) main_cam_set_pane

0x3b24,	// (0x0001fcba) cam4_zoom_pane_ParamLimits

0x3b24,	// (0x0001fcba) cam4_zoom_pane

0x7e09,	// (0x00023f9f) main_cam_set_pane_g1_ParamLimits

0x7e09,	// (0x00023f9f) main_cam_set_pane_g1

0x7e17,	// (0x00023fad) main_cam_set_pane_g2_ParamLimits

0x7e17,	// (0x00023fad) main_cam_set_pane_g2

0x0001,

0xf89e,	// (0x0002ba34) main_cam_set_pane_g_ParamLimits

0xf89e,	// (0x0002ba34) main_cam_set_pane_g

0x7e23,	// (0x00023fb9) main_cam_set_pane_t1_ParamLimits

0x7e23,	// (0x00023fb9) main_cam_set_pane_t1

0x7e3f,	// (0x00023fd5) main_cset_listscroll_pane_ParamLimits

0x7e3f,	// (0x00023fd5) main_cset_listscroll_pane

0x7e73,	// (0x00024009) main_cset_slider_pane_ParamLimits

0x7e73,	// (0x00024009) main_cset_slider_pane

0xebf1,	// (0x0002ad87) main_cset_list_pane_ParamLimits

0xebf1,	// (0x0002ad87) main_cset_list_pane

0xec01,	// (0x0002ad97) scroll_pane_cp028

0x7e94,	// (0x0002402a) aid_area_touch_slider

0x7eb0,	// (0x00024046) cset_slider_pane

0x7ed3,	// (0x00024069) main_cset_slider_pane_g1

0x7ee8,	// (0x0002407e) main_cset_slider_pane_g2

0x0011,

0xf8a3,	// (0x0002ba39) main_cset_slider_pane_g

0xec3a,	// (0x0002add0) main_cset_slider_pane_t1

0x7fa4,	// (0x0002413a) main_cset_slider_pane_t2

0x7fbe,	// (0x00024154) main_cset_slider_pane_t3

0x7fd8,	// (0x0002416e) main_cset_slider_pane_t4

0x7ff2,	// (0x00024188) main_cset_slider_pane_t5

0x800c,	// (0x000241a2) main_cset_slider_pane_t6

0x8021,	// (0x000241b7) main_cset_slider_pane_t7

0x000e,

0xf8c8,	// (0x0002ba5e) main_cset_slider_pane_t

0x8125,	// (0x000242bb) cset_list_set_pane_ParamLimits

0x8125,	// (0x000242bb) cset_list_set_pane

0xecd4,	// (0x0002ae6a) aid_position_infowindow_above

0xecdc,	// (0x0002ae72) aid_position_infowindow_below

0x8136,	// (0x000242cc) cset_list_set_pane_g1_ParamLimits

0x8136,	// (0x000242cc) cset_list_set_pane_g1

0x8142,	// (0x000242d8) cset_list_set_pane_g3_ParamLimits

0x8142,	// (0x000242d8) cset_list_set_pane_g3

0x0001,

0xf8e7,	// (0x0002ba7d) cset_list_set_pane_g_ParamLimits

0xf8e7,	// (0x0002ba7d) cset_list_set_pane_g

0x8151,	// (0x000242e7) cset_list_set_pane_t1_ParamLimits

0x8151,	// (0x000242e7) cset_list_set_pane_t1

0xbfa0,	// (0x00028136) list_highlight_pane_cp021_ParamLimits

0xbfa0,	// (0x00028136) list_highlight_pane_cp021

0xcca2,	// (0x00028e38) cset_slider_pane_g1

0xccb4,	// (0x00028e4a) cset_slider_pane_g2

0xccab,	// (0x00028e41) cset_slider_pane_g3

0x0002,

0xf8ec,	// (0x0002ba82) cset_slider_pane_g

0xc954,	// (0x00028aea) aid_area_touch_cam4_zoom

0x3fe9,	// (0x0002017f) cam4_zoom_cont_pane

0x3ff1,	// (0x00020187) cam4_zoom_pane_g1

0x3ff9,	// (0x0002018f) cam4_zoom_pane_g2

0x4001,	// (0x00020197) cam4_zoom_pane_g3

0x0002,

0xf8f3,	// (0x0002ba89) cam4_zoom_pane_g

0x4009,	// (0x0002019f) cam4_zoom_cont_pane_g1

0x4012,	// (0x000201a8) cam4_zoom_cont_pane_g2

0x401b,	// (0x000201b1) cam4_zoom_cont_pane_g3

0x0002,

0xf8fa,	// (0x0002ba90) cam4_zoom_cont_pane_g

0x3a0e,	// (0x0001fba4) call4_image_pane_ParamLimits

0x3a0e,	// (0x0001fba4) call4_image_pane

0x7acd,	// (0x00023c63) call4_windows_conf_pane_ParamLimits

0x7b14,	// (0x00023caa) popup_call4_audio_in_window_ParamLimits

0x7b14,	// (0x00023caa) popup_call4_audio_in_window

0xb8d1,	// (0x00027a67) bg_popup_call2_act_pane_cp02

0xea0e,	// (0x0002aba4) call4_list_conf_pane

0xc045,	// (0x000281db) call4_image_pane_g1

0xc045,	// (0x000281db) call4_image_pane_g2

0x0001,

0xf0af,	// (0x0002b245) call4_image_pane_g

0xece4,	// (0x0002ae7a) list_single_graphic_popup_conf4_pane_ParamLimits

0xece4,	// (0x0002ae7a) list_single_graphic_popup_conf4_pane

0xb8d1,	// (0x00027a67) list_highlight_pane_cp022

0xecf9,	// (0x0002ae8f) list_single_graphic_popup_conf4_pane_g1

0xc9ad,	// (0x00028b43) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf901,	// (0x0002ba97) list_single_graphic_popup_conf4_pane_g

0xed01,	// (0x0002ae97) list_single_graphic_popup_conf4_pane_t1

0x4d6e,	// (0x00020f04) popup_vtel_slider_window_ParamLimits

0x4d6e,	// (0x00020f04) popup_vtel_slider_window

0xe9e0,	// (0x0002ab76) dialer2_ne_pane_t2_ParamLimits

0xe9e0,	// (0x0002ab76) dialer2_ne_pane_t2

0x0001,

0xf7e2,	// (0x0002b978) dialer2_ne_pane_t_ParamLimits

0xf7e2,	// (0x0002b978) dialer2_ne_pane_t

0xbfa0,	// (0x00028136) bg_popup_sub_pane_cp010_ParamLimits

0xbfa0,	// (0x00028136) bg_popup_sub_pane_cp010

0x8166,	// (0x000242fc) popup_vtel_slider_window_g1_ParamLimits

0x8166,	// (0x000242fc) popup_vtel_slider_window_g1

0x8172,	// (0x00024308) popup_vtel_slider_window_g2_ParamLimits

0x8172,	// (0x00024308) popup_vtel_slider_window_g2

0x0003,

0xf906,	// (0x0002ba9c) popup_vtel_slider_window_g_ParamLimits

0xf906,	// (0x0002ba9c) popup_vtel_slider_window_g

0x81ba,	// (0x00024350) vtel_slider_pane_ParamLimits

0x81ba,	// (0x00024350) vtel_slider_pane

0x81c9,	// (0x0002435f) vtel_slider_pane_g1_ParamLimits

0x81c9,	// (0x0002435f) vtel_slider_pane_g1

0x81d6,	// (0x0002436c) vtel_slider_pane_g2_ParamLimits

0x81d6,	// (0x0002436c) vtel_slider_pane_g2

0x81e3,	// (0x00024379) vtel_slider_pane_g3_ParamLimits

0x81e3,	// (0x00024379) vtel_slider_pane_g3

0x81c9,	// (0x0002435f) vtel_slider_pane_g4_ParamLimits

0x81c9,	// (0x0002435f) vtel_slider_pane_g4

0x81f0,	// (0x00024386) vtel_slider_pane_g5_ParamLimits

0x81f0,	// (0x00024386) vtel_slider_pane_g5

0x0004,

0xf90f,	// (0x0002baa5) vtel_slider_pane_g_ParamLimits

0xf90f,	// (0x0002baa5) vtel_slider_pane_g

0x31cb,	// (0x0001f361) main_gallery2_pane

0x3d36,	// (0x0001fecc) aid_size_row_itut2_dropdow_list_ParamLimits

0x3d36,	// (0x0001fecc) aid_size_row_itut2_dropdow_list

0x3da4,	// (0x0001ff3a) grid_vitu2_function_top_pane_ParamLimits

0x3da4,	// (0x0001ff3a) grid_vitu2_function_top_pane

0x3dfa,	// (0x0001ff90) popup_vitu2_dropdown_list_window_ParamLimits

0x3dfa,	// (0x0001ff90) popup_vitu2_dropdown_list_window

0x3e18,	// (0x0001ffae) popup_vitu2_match_list_window

0x4024,	// (0x000201ba) cell_vitu2_function_top_pane_ParamLimits

0x4024,	// (0x000201ba) cell_vitu2_function_top_pane

0x403e,	// (0x000201d4) cell_vitu2_function_top_pane_cp01_ParamLimits

0x403e,	// (0x000201d4) cell_vitu2_function_top_pane_cp01

0x405a,	// (0x000201f0) cell_vitu2_function_top_wide_pane_ParamLimits

0x405a,	// (0x000201f0) cell_vitu2_function_top_wide_pane

0x31cb,	// (0x0001f361) bg_button_pane_cp012

0x4078,	// (0x0002020e) cell_vitu2_function_top_pane_g1

0x408c,	// (0x00020222) bg_button_pane_cp013_ParamLimits

0x408c,	// (0x00020222) bg_button_pane_cp013

0x81fd,	// (0x00024393) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x81fd,	// (0x00024393) cell_vitu2_function_top_wide_pane_g1

0x2cf3,	// (0x0001ee89) bg_popup_sub_pane_cp20

0x40a8,	// (0x0002023e) list_vitu2_match_list_pane

0xeabd,	// (0x0002ac53) bg_popup_sub_pane_cp20_g1

0xeac5,	// (0x0002ac5b) bg_popup_sub_pane_cp20_g2

0xc47b,	// (0x00028611) bg_popup_sub_pane_cp20_g3

0xeacd,	// (0x0002ac63) bg_popup_sub_pane_cp20_g4

0xc45b,	// (0x000285f1) bg_popup_sub_pane_cp20_g5

0xed20,	// (0x0002aeb6) bg_popup_sub_pane_cp20_g6

0xeadd,	// (0x0002ac73) bg_popup_sub_pane_cp20_g7

0xeae5,	// (0x0002ac7b) bg_popup_sub_pane_cp20_g8

0xeaed,	// (0x0002ac83) bg_popup_sub_pane_cp20_g9

0x0008,

0xf91a,	// (0x0002bab0) bg_popup_sub_pane_cp20_g

0x40c0,	// (0x00020256) list_vitu2_match_list_item_pane_ParamLimits

0x40c0,	// (0x00020256) list_vitu2_match_list_item_pane

0x40d2,	// (0x00020268) list_vitu2_match_list_item_pane_t1

0x2d01,	// (0x0001ee97) bg_popup_sub_pane_cp21

0xc24f,	// (0x000283e5) grid_vitu2_dropdown_list_pane

0x40e0,	// (0x00020276) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x40e0,	// (0x00020276) cell_vitu2_dropdown_list_char_pane

0x4104,	// (0x0002029a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x4104,	// (0x0002029a) cell_vitu2_dropdown_list_ctrl_pane

0xed28,	// (0x0002aebe) cell_vitu2_dropdown_list_char_pane_g1

0xed31,	// (0x0002aec7) cell_vitu2_dropdown_list_char_pane_g2

0xed3a,	// (0x0002aed0) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf92d,	// (0x0002bac3) cell_vitu2_dropdown_list_char_pane_g

0x412e,	// (0x000202c4) cell_vitu2_dropdown_list_char_pane_t1

0x8215,	// (0x000243ab) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8215,	// (0x000243ab) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8225,	// (0x000243bb) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8225,	// (0x000243bb) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8236,	// (0x000243cc) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8236,	// (0x000243cc) cell_vitu2_dropdown_list_ctrl_pane_g3

0x413c,	// (0x000202d2) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x413c,	// (0x000202d2) cell_vitu2_dropdown_list_ctrl_pane_g4

0x0c2b,	// (0x0001cdc1) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x0c2b,	// (0x0001cdc1) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf934,	// (0x0002baca) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf934,	// (0x0002baca) cell_vitu2_dropdown_list_ctrl_pane_g

0x8246,	// (0x000243dc) aid_size_cell_gallery2_ParamLimits

0x8246,	// (0x000243dc) aid_size_cell_gallery2

0x8260,	// (0x000243f6) grid_gallery2_pane_ParamLimits

0x8260,	// (0x000243f6) grid_gallery2_pane

0x8277,	// (0x0002440d) scroll_pane_cp029_ParamLimits

0x8277,	// (0x0002440d) scroll_pane_cp029

0x8287,	// (0x0002441d) cell_gallery2_pane_ParamLimits

0x8287,	// (0x0002441d) cell_gallery2_pane

0xed43,	// (0x0002aed9) cell_gallery2_pane_g2

0x82de,	// (0x00024474) cell_gallery2_pane_g3

0xed4b,	// (0x0002aee1) cell_gallery2_pane_g4

0xed53,	// (0x0002aee9) cell_gallery2_pane_g5

0xc24f,	// (0x000283e5) grid_highlight_pane_cp10

0x3e18,	// (0x0001ffae) popup_vitu2_match_list_window_ParamLimits

0x3e2c,	// (0x0001ffc2) popup_vitu2_query_window_ParamLimits

0x3e2c,	// (0x0001ffc2) popup_vitu2_query_window

0x2d01,	// (0x0001ee97) bg_vitu2_candi_button_pane

0xed28,	// (0x0002aebe) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xed31,	// (0x0002aec7) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xed3a,	// (0x0002aed0) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x82e6,	// (0x0002447c) bg_button_pane_cp015

0x82fb,	// (0x00024491) bg_button_pane_cp016

0x8307,	// (0x0002449d) bg_button_pane_cp017

0xcd3c,	// (0x00028ed2) bg_popup_sub_pane_cp22

0xed5b,	// (0x0002aef1) popup_vitu2_query_window_g1

0x8348,	// (0x000244de) popup_vitu2_query_window_g2

0x0002,

0xf93f,	// (0x0002bad5) popup_vitu2_query_window_g

0x836c,	// (0x00024502) popup_vitu2_query_window_t1_ParamLimits

0x836c,	// (0x00024502) popup_vitu2_query_window_t1

0x839f,	// (0x00024535) popup_vitu2_query_window_t2_ParamLimits

0x839f,	// (0x00024535) popup_vitu2_query_window_t2

0x83b1,	// (0x00024547) popup_vitu2_query_window_t3_ParamLimits

0x83b1,	// (0x00024547) popup_vitu2_query_window_t3

0x83d9,	// (0x0002456f) popup_vitu2_query_window_t4_ParamLimits

0x83d9,	// (0x0002456f) popup_vitu2_query_window_t4

0x83ed,	// (0x00024583) popup_vitu2_query_window_t5_ParamLimits

0x83ed,	// (0x00024583) popup_vitu2_query_window_t5

0x0006,

0xf946,	// (0x0002badc) popup_vitu2_query_window_t_ParamLimits

0xf946,	// (0x0002badc) popup_vitu2_query_window_t

0xebe9,	// (0x0002ad7f) main_cset_text_pane

0x7e94,	// (0x0002402a) aid_area_touch_slider_ParamLimits

0x7eb0,	// (0x00024046) cset_slider_pane_ParamLimits

0x7ed3,	// (0x00024069) main_cset_slider_pane_g1_ParamLimits

0x7ee8,	// (0x0002407e) main_cset_slider_pane_g2_ParamLimits

0xec0a,	// (0x0002ada0) main_cset_slider_pane_g3_ParamLimits

0xec0a,	// (0x0002ada0) main_cset_slider_pane_g3

0x7efd,	// (0x00024093) main_cset_slider_pane_g4_ParamLimits

0x7efd,	// (0x00024093) main_cset_slider_pane_g4

0x7f0c,	// (0x000240a2) main_cset_slider_pane_g5_ParamLimits

0x7f0c,	// (0x000240a2) main_cset_slider_pane_g5

0x7f18,	// (0x000240ae) main_cset_slider_pane_g6_ParamLimits

0x7f18,	// (0x000240ae) main_cset_slider_pane_g6

0xf8a3,	// (0x0002ba39) main_cset_slider_pane_g_ParamLimits

0xec3a,	// (0x0002add0) main_cset_slider_pane_t1_ParamLimits

0x7fa4,	// (0x0002413a) main_cset_slider_pane_t2_ParamLimits

0x7fbe,	// (0x00024154) main_cset_slider_pane_t3_ParamLimits

0x7fd8,	// (0x0002416e) main_cset_slider_pane_t4_ParamLimits

0x7ff2,	// (0x00024188) main_cset_slider_pane_t5_ParamLimits

0x800c,	// (0x000241a2) main_cset_slider_pane_t6_ParamLimits

0x8021,	// (0x000241b7) main_cset_slider_pane_t7_ParamLimits

0x804b,	// (0x000241e1) main_cset_slider_pane_t8_ParamLimits

0x804b,	// (0x000241e1) main_cset_slider_pane_t8

0x8073,	// (0x00024209) main_cset_slider_pane_t9_ParamLimits

0x8073,	// (0x00024209) main_cset_slider_pane_t9

0x809b,	// (0x00024231) main_cset_slider_pane_t10_ParamLimits

0x809b,	// (0x00024231) main_cset_slider_pane_t10

0x80c3,	// (0x00024259) main_cset_slider_pane_t11_ParamLimits

0x80c3,	// (0x00024259) main_cset_slider_pane_t11

0x80eb,	// (0x00024281) main_cset_slider_pane_t12_ParamLimits

0x80eb,	// (0x00024281) main_cset_slider_pane_t12

0x8108,	// (0x0002429e) main_cset_slider_pane_t13_ParamLimits

0x8108,	// (0x0002429e) main_cset_slider_pane_t13

0xf8c8,	// (0x0002ba5e) main_cset_slider_pane_t_ParamLimits

0xb8d1,	// (0x00027a67) bg_popup_sub_pane_cp011

0xed67,	// (0x0002aefd) main_cset_text_pane_g1

0xed6f,	// (0x0002af05) main_cset_text_pane_t1

0xed7d,	// (0x0002af13) main_cset_text_pane_t2

0xed8b,	// (0x0002af21) main_cset_text_pane_t3

0xed99,	// (0x0002af2f) main_cset_text_pane_t4

0xeda7,	// (0x0002af3d) main_cset_text_pane_t5

0xedb5,	// (0x0002af4b) main_cset_text_pane_t6

0xedc3,	// (0x0002af59) main_cset_text_pane_t7

0x0006,

0xf955,	// (0x0002baeb) main_cset_text_pane_t

0x2d01,	// (0x0001ee97) main_cam4_burst_pane

0x2d01,	// (0x0001ee97) main_cam5_pane

0xebab,	// (0x0002ad41) bg_button_pane_cp019

0xebb4,	// (0x0002ad4a) bg_button_pane_cp020

0xec16,	// (0x0002adac) main_cset_slider_pane_g7_ParamLimits

0xec16,	// (0x0002adac) main_cset_slider_pane_g7

0xec22,	// (0x0002adb8) main_cset_slider_pane_g8_ParamLimits

0xec22,	// (0x0002adb8) main_cset_slider_pane_g8

0x7f2c,	// (0x000240c2) main_cset_slider_pane_g9_ParamLimits

0x7f2c,	// (0x000240c2) main_cset_slider_pane_g9

0x7f38,	// (0x000240ce) main_cset_slider_pane_g10_ParamLimits

0x7f38,	// (0x000240ce) main_cset_slider_pane_g10

0x7f44,	// (0x000240da) main_cset_slider_pane_g11_ParamLimits

0x7f44,	// (0x000240da) main_cset_slider_pane_g11

0x7f50,	// (0x000240e6) main_cset_slider_pane_g12_ParamLimits

0x7f50,	// (0x000240e6) main_cset_slider_pane_g12

0x7f5c,	// (0x000240f2) main_cset_slider_pane_g13_ParamLimits

0x7f5c,	// (0x000240f2) main_cset_slider_pane_g13

0x7f68,	// (0x000240fe) main_cset_slider_pane_g14_ParamLimits

0x7f68,	// (0x000240fe) main_cset_slider_pane_g14

0x7f74,	// (0x0002410a) main_cset_slider_pane_g15_ParamLimits

0x7f74,	// (0x0002410a) main_cset_slider_pane_g15

0xec62,	// (0x0002adf8) main_cset_slider_pane_t14_ParamLimits

0xec62,	// (0x0002adf8) main_cset_slider_pane_t14

0xec9b,	// (0x0002ae31) main_cset_slider_pane_t15_ParamLimits

0xec9b,	// (0x0002ae31) main_cset_slider_pane_t15

0x8457,	// (0x000245ed) aid_cam4_burst_size_cell_ParamLimits

0x8457,	// (0x000245ed) aid_cam4_burst_size_cell

0x8473,	// (0x00024609) grid_cam4_burst_pane_ParamLimits

0x8473,	// (0x00024609) grid_cam4_burst_pane

0x84a5,	// (0x0002463b) linegrid_cam4_burst_pane_ParamLimits

0x84a5,	// (0x0002463b) linegrid_cam4_burst_pane

0x84c3,	// (0x00024659) scroll_pane_cp30_ParamLimits

0x84c3,	// (0x00024659) scroll_pane_cp30

0x84cf,	// (0x00024665) cell_cam4_burst_pane_ParamLimits

0x84cf,	// (0x00024665) cell_cam4_burst_pane

0xedd1,	// (0x0002af67) linegrid_cam4_burst_pane_g1_ParamLimits

0xedd1,	// (0x0002af67) linegrid_cam4_burst_pane_g1

0x850f,	// (0x000246a5) linegrid_cam4_burst_pane_g2_ParamLimits

0x850f,	// (0x000246a5) linegrid_cam4_burst_pane_g2

0xedde,	// (0x0002af74) linegrid_cam4_burst_pane_g3_ParamLimits

0xedde,	// (0x0002af74) linegrid_cam4_burst_pane_g3

0x0002,

0xf964,	// (0x0002bafa) linegrid_cam4_burst_pane_g_ParamLimits

0xf964,	// (0x0002bafa) linegrid_cam4_burst_pane_g

0x8520,	// (0x000246b6) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8520,	// (0x000246b6) linegrid_cam4_burst_pane_g3_copy1

0xedeb,	// (0x0002af81) linegrid_cam4_burst_pane_g4_ParamLimits

0xedeb,	// (0x0002af81) linegrid_cam4_burst_pane_g4

0x853a,	// (0x000246d0) linegrid_cam4_burst_pane_g5_ParamLimits

0x853a,	// (0x000246d0) linegrid_cam4_burst_pane_g5

0x854b,	// (0x000246e1) linegrid_cam4_burst_pane_g6_ParamLimits

0x854b,	// (0x000246e1) linegrid_cam4_burst_pane_g6

0xedf8,	// (0x0002af8e) linegrid_cam4_burst_pane_g7_ParamLimits

0xedf8,	// (0x0002af8e) linegrid_cam4_burst_pane_g7

0x8562,	// (0x000246f8) cell_cam4_burst_pane_g1

0xee11,	// (0x0002afa7) main_cam5_pane_t1_ParamLimits

0xee11,	// (0x0002afa7) main_cam5_pane_t1

0xee23,	// (0x0002afb9) main_cam5_pane_t2_ParamLimits

0xee23,	// (0x0002afb9) main_cam5_pane_t2

0xee35,	// (0x0002afcb) main_cam5_pane_t3_ParamLimits

0xee35,	// (0x0002afcb) main_cam5_pane_t3

0xee47,	// (0x0002afdd) main_cam5_pane_t4_ParamLimits

0xee47,	// (0x0002afdd) main_cam5_pane_t4

0xee5f,	// (0x0002aff5) main_cam5_pane_t5_ParamLimits

0xee5f,	// (0x0002aff5) main_cam5_pane_t5

0xee73,	// (0x0002b009) main_cam5_pane_t6_ParamLimits

0xee73,	// (0x0002b009) main_cam5_pane_t6

0xee87,	// (0x0002b01d) main_cam5_pane_t7_ParamLimits

0xee87,	// (0x0002b01d) main_cam5_pane_t7

0xee99,	// (0x0002b02f) main_cam5_pane_t8_ParamLimits

0xee99,	// (0x0002b02f) main_cam5_pane_t8

0xeeb7,	// (0x0002b04d) main_cam5_pane_t9_ParamLimits

0xeeb7,	// (0x0002b04d) main_cam5_pane_t9

0xeec9,	// (0x0002b05f) main_cam5_pane_t10_ParamLimits

0xeec9,	// (0x0002b05f) main_cam5_pane_t10

0xeedb,	// (0x0002b071) main_cam5_pane_t11_ParamLimits

0xeedb,	// (0x0002b071) main_cam5_pane_t11

0xeeef,	// (0x0002b085) main_cam5_pane_t12_ParamLimits

0xeeef,	// (0x0002b085) main_cam5_pane_t12

0xef06,	// (0x0002b09c) main_cam5_pane_t13_ParamLimits

0xef06,	// (0x0002b09c) main_cam5_pane_t13

0x000c,

0xf970,	// (0x0002bb06) main_cam5_pane_t_ParamLimits

0xf970,	// (0x0002bb06) main_cam5_pane_t

0x2cb2,	// (0x0001ee48) popup_scut_keymap_window_ParamLimits

0x2cb2,	// (0x0001ee48) popup_scut_keymap_window

0x8575,	// (0x0002470b) aid_size_cell_brow_shortcut

0xc24f,	// (0x000283e5) bg_popup_window_pane_cp010

0x8581,	// (0x00024717) grid_scut_pane

0x858d,	// (0x00024723) cell_scut_pane_ParamLimits

0x858d,	// (0x00024723) cell_scut_pane

0x85a8,	// (0x0002473e) cell_scut_pane_g1

0xef29,	// (0x0002b0bf) cell_scut_pane_t1

0xef38,	// (0x0002b0ce) cell_scut_pane_t2

0x85b1,	// (0x00024747) cell_scut_pane_t3

0x0002,

0xf98b,	// (0x0002bb21) cell_scut_pane_t

0x7216,	// (0x000233ac) main_mup3_pane_g8_ParamLimits

0x7216,	// (0x000233ac) main_mup3_pane_g8

0x3d44,	// (0x0001feda) area_vitu2_query_pane_ParamLimits

0x3d44,	// (0x0001feda) area_vitu2_query_pane

0x8313,	// (0x000244a9) input_focus_pane_cp08

0xef47,	// (0x0002b0dd) area_vitu2_query_pane_g1

0x85bf,	// (0x00024755) area_vitu2_query_pane_g2

0x0001,

0xf992,	// (0x0002bb28) area_vitu2_query_pane_g

0x85d0,	// (0x00024766) area_vitu2_query_pane_t1_ParamLimits

0x85d0,	// (0x00024766) area_vitu2_query_pane_t1

0x85e4,	// (0x0002477a) area_vitu2_query_pane_t2_ParamLimits

0x85e4,	// (0x0002477a) area_vitu2_query_pane_t2

0x85f8,	// (0x0002478e) area_vitu2_query_pane_t3_ParamLimits

0x85f8,	// (0x0002478e) area_vitu2_query_pane_t3

0xef53,	// (0x0002b0e9) area_vitu2_query_pane_t4_ParamLimits

0xef53,	// (0x0002b0e9) area_vitu2_query_pane_t4

0xef7b,	// (0x0002b111) area_vitu2_query_pane_t5_ParamLimits

0xef7b,	// (0x0002b111) area_vitu2_query_pane_t5

0xefa3,	// (0x0002b139) area_vitu2_query_pane_t6_ParamLimits

0xefa3,	// (0x0002b139) area_vitu2_query_pane_t6

0x0006,

0xf997,	// (0x0002bb2d) area_vitu2_query_pane_t_ParamLimits

0xf997,	// (0x0002bb2d) area_vitu2_query_pane_t

0x82fb,	// (0x00024491) bg_button_pane_cp018

0x8620,	// (0x000247b6) bg_button_pane_cp021

0x862c,	// (0x000247c2) bg_button_pane_cp022

0x864f,	// (0x000247e5) input_focus_pane_cp09

0x5fd9,	// (0x0002216f) aid_size_touch_mv_arrow_left

0x6004,	// (0x0002219a) aid_size_touch_mv_arrow_right

0x7f8c,	// (0x00024122) main_cset_slider_pane_g16_ParamLimits

0x7f8c,	// (0x00024122) main_cset_slider_pane_g16

0x7f98,	// (0x0002412e) main_cset_slider_pane_g17_ParamLimits

0x7f98,	// (0x0002412e) main_cset_slider_pane_g17

0x8562,	// (0x000246f8) cell_cam4_burst_pane_g1_ParamLimits

0xb8d1,	// (0x00027a67) compa_mode_pane

0x817e,	// (0x00024314) popup_vtel_slider_window_g3_ParamLimits

0x817e,	// (0x00024314) popup_vtel_slider_window_g3

0x8192,	// (0x00024328) popup_vtel_slider_window_g4_ParamLimits

0x8192,	// (0x00024328) popup_vtel_slider_window_g4

0x81a6,	// (0x0002433c) popup_vtel_slider_window_t1_ParamLimits

0x81a6,	// (0x0002433c) popup_vtel_slider_window_t1

0x2d01,	// (0x0001ee97) main_cl_pane

0x3275,	// (0x0001f40b) popup_imed_adjust2_window_ParamLimits

0xcd3c,	// (0x00028ed2) bg_tb_trans_pane_cp05_ParamLimits

0xe76e,	// (0x0002a904) popup_imed_adjust2_window_g1_ParamLimits

0xe77d,	// (0x0002a913) popup_imed_adjust2_window_g2_ParamLimits

0xe77d,	// (0x0002a913) popup_imed_adjust2_window_g2

0xe789,	// (0x0002a91f) popup_imed_adjust2_window_g3_ParamLimits

0xe789,	// (0x0002a91f) popup_imed_adjust2_window_g3

0x0002,

0xf717,	// (0x0002b8ad) popup_imed_adjust2_window_g_ParamLimits

0xf717,	// (0x0002b8ad) popup_imed_adjust2_window_g

0xe795,	// (0x0002a92b) popup_imed_adjust2_window_t1_ParamLimits

0xe7ad,	// (0x0002a943) slider_imed_adjust_pane_ParamLimits

0xe7c1,	// (0x0002a957) slider_imed_adjust_pane_g1_ParamLimits

0xe7d1,	// (0x0002a967) slider_imed_adjust_pane_g2_ParamLimits

0xe7e1,	// (0x0002a977) slider_imed_adjust_pane_g3_ParamLimits

0xe7f2,	// (0x0002a988) slider_imed_adjust_pane_g4_ParamLimits

0xf71e,	// (0x0002b8b4) slider_imed_adjust_pane_g_ParamLimits

0x3acd,	// (0x0001fc63) aid_touch_area_cam4_ParamLimits

0x3acd,	// (0x0001fc63) aid_touch_area_cam4

0x3add,	// (0x0001fc73) battery_pane_cp01

0x3b64,	// (0x0001fcfa) main_camera4_pane_g6_ParamLimits

0x3b64,	// (0x0001fcfa) main_camera4_pane_g6

0x3b82,	// (0x0001fd18) main_camera4_pane_t2_ParamLimits

0x3b82,	// (0x0001fd18) main_camera4_pane_t2

0x0001,

0xf816,	// (0x0002b9ac) main_camera4_pane_t_ParamLimits

0xf816,	// (0x0002b9ac) main_camera4_pane_t

0x3bdf,	// (0x0001fd75) aid_touch_area_vid4_ParamLimits

0x3bdf,	// (0x0001fd75) aid_touch_area_vid4

0x3c1f,	// (0x0001fdb5) main_video4_pane_g5_ParamLimits

0x3c1f,	// (0x0001fdb5) main_video4_pane_g5

0x3c45,	// (0x0001fddb) vid4_progress_pane_ParamLimits

0x3c45,	// (0x0001fddb) vid4_progress_pane

0xec2e,	// (0x0002adc4) main_cset_slider_pane_g18_ParamLimits

0xec2e,	// (0x0002adc4) main_cset_slider_pane_g18

0xee05,	// (0x0002af9b) cell_cam4_burst_pane_g2_ParamLimits

0xee05,	// (0x0002af9b) cell_cam4_burst_pane_g2

0x0001,

0xf96b,	// (0x0002bb01) cell_cam4_burst_pane_g_ParamLimits

0xf96b,	// (0x0002bb01) cell_cam4_burst_pane_g

0x8660,	// (0x000247f6) bg_cl_pane_ParamLimits

0x8660,	// (0x000247f6) bg_cl_pane

0x866c,	// (0x00024802) cl_header_pane_ParamLimits

0x866c,	// (0x00024802) cl_header_pane

0x8678,	// (0x0002480e) cl_listscroll_pane_ParamLimits

0x8678,	// (0x0002480e) cl_listscroll_pane

0xefef,	// (0x0002b185) bg_cl_pane_g1

0xeff7,	// (0x0002b18d) bg_cl_pane_g2

0xefff,	// (0x0002b195) bg_cl_pane_g3

0xf007,	// (0x0002b19d) bg_cl_pane_g4

0xf00f,	// (0x0002b1a5) bg_cl_pane_g5

0xf017,	// (0x0002b1ad) bg_cl_pane_g6

0xf01f,	// (0x0002b1b5) bg_cl_pane_g7

0xf027,	// (0x0002b1bd) bg_cl_pane_g8

0xf02f,	// (0x0002b1c5) bg_cl_pane_g9

0x0008,

0xf9a6,	// (0x0002bb3c) bg_cl_pane_g

0x8684,	// (0x0002481a) aid_height_cl_leading_ParamLimits

0x8684,	// (0x0002481a) aid_height_cl_leading

0x8690,	// (0x00024826) aid_height_cl_text_ParamLimits

0x8690,	// (0x00024826) aid_height_cl_text

0xbff9,	// (0x0002818f) bg_cl_header_pane_ParamLimits

0xbff9,	// (0x0002818f) bg_cl_header_pane

0x86a8,	// (0x0002483e) cl_header_pane_g1_ParamLimits

0x86a8,	// (0x0002483e) cl_header_pane_g1

0x86b5,	// (0x0002484b) cl_header_pane_t1_ParamLimits

0x86b5,	// (0x0002484b) cl_header_pane_t1

0xf037,	// (0x0002b1cd) cl_list_pane

0xec01,	// (0x0002ad97) hc_scroll_pane_cp01

0xc45b,	// (0x000285f1) bg_cl_header_pane_g1

0xeabd,	// (0x0002ac53) bg_cl_header_pane_g2

0xc47b,	// (0x00028611) bg_cl_header_pane_g3

0xeacd,	// (0x0002ac63) bg_cl_header_pane_g4

0xeac5,	// (0x0002ac5b) bg_cl_header_pane_g5

0xed20,	// (0x0002aeb6) bg_cl_header_pane_g6

0xeae5,	// (0x0002ac7b) bg_cl_header_pane_g7

0xeaed,	// (0x0002ac83) bg_cl_header_pane_g8

0xeadd,	// (0x0002ac73) bg_cl_header_pane_g9

0x0008,

0xf9b9,	// (0x0002bb4f) bg_cl_header_pane_g

0x86c7,	// (0x0002485d) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x86c7,	// (0x0002485d) hc_cl_list_double_graphic_heading_pane

0x86d7,	// (0x0002486d) hc_cl_list_single_graphic_pane_ParamLimits

0x86d7,	// (0x0002486d) hc_cl_list_single_graphic_pane

0x86e9,	// (0x0002487f) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x86e9,	// (0x0002487f) hc_cl_list_single_graphic_pane_g1

0x86f5,	// (0x0002488b) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x86f5,	// (0x0002488b) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9cc,	// (0x0002bb62) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9cc,	// (0x0002bb62) hc_cl_list_single_graphic_pane_g

0x8709,	// (0x0002489f) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8709,	// (0x0002489f) hc_cl_list_single_graphic_pane_t1

0x86e9,	// (0x0002487f) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x86e9,	// (0x0002487f) hc_cl_list_double_graphic_heading_pane_g1

0x871e,	// (0x000248b4) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x871e,	// (0x000248b4) hc_cl_list_double_graphic_heading_pane_g2

0x8732,	// (0x000248c8) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8732,	// (0x000248c8) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9d1,	// (0x0002bb67) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9d1,	// (0x0002bb67) hc_cl_list_double_graphic_heading_pane_g

0x8746,	// (0x000248dc) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8746,	// (0x000248dc) hc_cl_list_double_graphic_heading_pane_t1

0x875b,	// (0x000248f1) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x875b,	// (0x000248f1) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9d8,	// (0x0002bb6e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9d8,	// (0x0002bb6e) hc_cl_list_double_graphic_heading_pane_t

0x415d,	// (0x000202f3) vid4_progress_pane_g1

0x416d,	// (0x00020303) vid4_progress_pane_g2

0x417d,	// (0x00020313) vid4_progress_pane_g3

0x418f,	// (0x00020325) vid4_progress_pane_g4

0x0004,

0xf9dd,	// (0x0002bb73) vid4_progress_pane_g

0x41ad,	// (0x00020343) vid4_progress_pane_t1

0x41c7,	// (0x0002035d) vid4_progress_pane_t2

0x0002,

0xf9e8,	// (0x0002bb7e) vid4_progress_pane_t

0x41f5,	// (0x0002038b) wait_bar_pane_cp07

0xe078,	// (0x0002a20e) blid_firmament_pane_ParamLimits

0xe0bb,	// (0x0002a251) popup_blid_sat_info2_window_g1

0xe0df,	// (0x0002a275) popup_blid_sat_info2_window_t3

0xe0ed,	// (0x0002a283) popup_blid_sat_info2_window_t4

0xe0fb,	// (0x0002a291) popup_blid_sat_info2_window_t5

0xe109,	// (0x0002a29f) popup_blid_sat_info2_window_t6

0xe119,	// (0x0002a2af) popup_blid_sat_info2_window_t7

0xe127,	// (0x0002a2bd) popup_blid_sat_info2_window_t8

0xe135,	// (0x0002a2cb) popup_blid_sat_info2_window_t9

0xe143,	// (0x0002a2d9) popup_blid_sat_info2_window_t10

0xe22c,	// (0x0002a3c2) aid_firma_cardinal_ParamLimits

0xe240,	// (0x0002a3d6) blid_firmament_pane_t1_ParamLimits

0xe257,	// (0x0002a3ed) blid_firmament_pane_t2_ParamLimits

0xe26e,	// (0x0002a404) blid_firmament_pane_t3_ParamLimits

0xe285,	// (0x0002a41b) blid_firmament_pane_t4_ParamLimits

0xf610,	// (0x0002b7a6) blid_firmament_pane_t_ParamLimits

0xe29c,	// (0x0002a432) blid_sat_info_pane_ParamLimits

0x31cb,	// (0x0001f361) main_cam_set_pane_ParamLimits

0x7804,	// (0x0002399a) aid_size_cell_colour_35_ParamLimits

0x781e,	// (0x000239b4) aid_size_cell_colour_112_ParamLimits

0x7835,	// (0x000239cb) aid_size_cell_effect_ParamLimits

0xbfa0,	// (0x00028136) bg_tb_trans_pane_cp02_ParamLimits

0xcbd2,	// (0x00028d68) heading_imed_pane_ParamLimits

0x784f,	// (0x000239e5) listscroll_imed_pane_ParamLimits

0xd563,	// (0x000296f9) popup_call2_audio_first_window_g5_ParamLimits

0xd563,	// (0x000296f9) popup_call2_audio_first_window_g5

0x3895,	// (0x0001fa2b) aid_size_touch_image3_arrow_left_ParamLimits

0x3895,	// (0x0001fa2b) aid_size_touch_image3_arrow_left

0x38ab,	// (0x0001fa41) aid_size_touch_image3_arrow_right_ParamLimits

0x38ab,	// (0x0001fa41) aid_size_touch_image3_arrow_right

0x41e0,	// (0x00020376) vid4_progress_pane_t3

0x79ca,	// (0x00023b60) main_hwr_training_symbol_option_pane_ParamLimits

0x79ca,	// (0x00023b60) main_hwr_training_symbol_option_pane

0xe8e9,	// (0x0002aa7f) popup_hwr_training_preview_window_ParamLimits

0xe8e9,	// (0x0002aa7f) popup_hwr_training_preview_window

0x352b,	// (0x0001f6c1) hwr_training_navi_pane_g5_ParamLimits

0x352b,	// (0x0001f6c1) hwr_training_navi_pane_g5

0xeaab,	// (0x0002ac41) popup_char_count_window

0x2cf3,	// (0x0001ee89) bg_popup_sub_pane_cp20_ParamLimits

0x40a8,	// (0x0002023e) list_vitu2_match_list_pane_ParamLimits

0x40b4,	// (0x0002024a) vitu2_page_scroll_pane_ParamLimits

0x40b4,	// (0x0002024a) vitu2_page_scroll_pane

0x00b8,	// (0x0001c24e) list_single_hwr_training_symbol_option_pane_ParamLimits

0x00b8,	// (0x0001c24e) list_single_hwr_training_symbol_option_pane

0x00cb,	// (0x0001c261) list_single_hwr_training_symbol_option_pane_g1

0x00d3,	// (0x0001c269) list_single_hwr_training_symbol_option_pane_t1

0x00e1,	// (0x0001c277) bg_button_pane_cp023

0x00ea,	// (0x0001c280) bg_button_pane_cp024

0x011d,	// (0x0001c2b3) vitu2_page_scroll_pane_g1

0x0125,	// (0x0001c2bb) vitu2_page_scroll_pane_g2

0x0001,

0xf9ef,	// (0x0002bb85) vitu2_page_scroll_pane_g

0x012d,	// (0x0001c2c3) vitu2_page_scroll_pane_t1

0x003d,	// (0x0001c1d3) popup_char_count_window_g1

0x013c,	// (0x0001c2d2) popup_char_count_window_g2

0x0046,	// (0x0001c1dc) popup_char_count_window_g3

0x0002,

0xf9f4,	// (0x0002bb8a) popup_char_count_window_g

0x0145,	// (0x0001c2db) popup_char_count_window_t1

0x2d01,	// (0x0001ee97) main_vded2_pane

0xe75a,	// (0x0002a8f0) aid_size_cell_imed_line

0xe764,	// (0x0002a8fa) grid_imed_line_width_pane

0x3cb9,	// (0x0001fe4f) vid4_indicators_pane_g4

0x0153,	// (0x0001c2e9) cell_imed_line_width_pane_ParamLimits

0x0153,	// (0x0001c2e9) cell_imed_line_width_pane

0x0169,	// (0x0001c2ff) cell_imed_line_width_pane_g1

0x0172,	// (0x0001c308) cell_imed_line_width_pane_g2

0x0001,

0xf9fb,	// (0x0002bb91) cell_imed_line_width_pane_g

0x8784,	// (0x0002491a) main_vded2_pane_g1_ParamLimits

0x8784,	// (0x0002491a) main_vded2_pane_g1

0x8793,	// (0x00024929) main_vded2_pane_g2_ParamLimits

0x8793,	// (0x00024929) main_vded2_pane_g2

0x0001,

0xfa00,	// (0x0002bb96) main_vded2_pane_g_ParamLimits

0xfa00,	// (0x0002bb96) main_vded2_pane_g

0x87a1,	// (0x00024937) vded2_slider_pane_ParamLimits

0x87a1,	// (0x00024937) vded2_slider_pane

0x87ae,	// (0x00024944) aid_size_touch_vded2_end

0x87b8,	// (0x0002494e) aid_size_touch_vded2_playhead

0x017a,	// (0x0001c310) aid_size_touch_vded2_start

0x0182,	// (0x0001c318) vded2_slider_bg_pane

0x018b,	// (0x0001c321) vded2_slider_pane_g1

0x0194,	// (0x0001c32a) vded2_slider_pane_g2

0x87c0,	// (0x00024956) vded2_slider_pane_g3

0x0002,

0xfa05,	// (0x0002bb9b) vded2_slider_pane_g

0x004f,	// (0x0001c1e5) vded2_slider_bg_pane_g1

0x0058,	// (0x0001c1ee) vded2_slider_bg_pane_g2

0x0061,	// (0x0001c1f7) vded2_slider_bg_pane_g3

0x0002,

0xf6db,	// (0x0002b871) vded2_slider_bg_pane_g

0x64b6,	// (0x0002264c) aid_postcard_touch_down_pane_ParamLimits

0x64b6,	// (0x0002264c) aid_postcard_touch_down_pane

0x64c6,	// (0x0002265c) aid_postcard_touch_up_pane_ParamLimits

0x64c6,	// (0x0002265c) aid_postcard_touch_up_pane

0x2d01,	// (0x0001ee97) main_blid2_pane

0x31f4,	// (0x0001f38a) popup_blid2_search_window

0xb8d1,	// (0x00027a67) blid2_gps_pane

0xb8d1,	// (0x00027a67) blid2_navig_pane

0xb8d1,	// (0x00027a67) blid2_search_pane

0xb8d1,	// (0x00027a67) blid2_tripm_pane

0x87c9,	// (0x0002495f) blid2_search_pane_g1_ParamLimits

0x87c9,	// (0x0002495f) blid2_search_pane_g1

0x87d5,	// (0x0002496b) blid2_search_pane_t1_ParamLimits

0x87d5,	// (0x0002496b) blid2_search_pane_t1

0x87e7,	// (0x0002497d) aid_size_cell_blid2_gps_ParamLimits

0x87e7,	// (0x0002497d) aid_size_cell_blid2_gps

0x87f7,	// (0x0002498d) blid2_gps_pane_g1_ParamLimits

0x87f7,	// (0x0002498d) blid2_gps_pane_g1

0x8803,	// (0x00024999) grid_blid2_satellite_pane_ParamLimits

0x8803,	// (0x00024999) grid_blid2_satellite_pane

0x8811,	// (0x000249a7) blid2_navig_pane_g1_ParamLimits

0x8811,	// (0x000249a7) blid2_navig_pane_g1

0x881d,	// (0x000249b3) blid2_navig_pane_t1_ParamLimits

0x881d,	// (0x000249b3) blid2_navig_pane_t1

0x882f,	// (0x000249c5) blid2_navig_pane_t2_ParamLimits

0x882f,	// (0x000249c5) blid2_navig_pane_t2

0x0001,

0xfa0c,	// (0x0002bba2) blid2_navig_pane_t_ParamLimits

0xfa0c,	// (0x0002bba2) blid2_navig_pane_t

0x8841,	// (0x000249d7) blid2_navig_ring_pane_ParamLimits

0x8841,	// (0x000249d7) blid2_navig_ring_pane

0x8851,	// (0x000249e7) blid2_speed_pane_ParamLimits

0x8851,	// (0x000249e7) blid2_speed_pane

0x885d,	// (0x000249f3) blid2_tripm_pane_g1_ParamLimits

0x885d,	// (0x000249f3) blid2_tripm_pane_g1

0x886d,	// (0x00024a03) blid2_tripm_pane_g2_ParamLimits

0x886d,	// (0x00024a03) blid2_tripm_pane_g2

0x8879,	// (0x00024a0f) blid2_tripm_pane_g3_ParamLimits

0x8879,	// (0x00024a0f) blid2_tripm_pane_g3

0x8885,	// (0x00024a1b) blid2_tripm_pane_g4_ParamLimits

0x8885,	// (0x00024a1b) blid2_tripm_pane_g4

0x8891,	// (0x00024a27) blid2_tripm_pane_g5_ParamLimits

0x8891,	// (0x00024a27) blid2_tripm_pane_g5

0x0005,

0xfa11,	// (0x0002bba7) blid2_tripm_pane_g_ParamLimits

0xfa11,	// (0x0002bba7) blid2_tripm_pane_g

0x88ad,	// (0x00024a43) blid2_tripm_pane_t1_ParamLimits

0x88ad,	// (0x00024a43) blid2_tripm_pane_t1

0x88bf,	// (0x00024a55) blid2_tripm_pane_t2_ParamLimits

0x88bf,	// (0x00024a55) blid2_tripm_pane_t2

0x88d1,	// (0x00024a67) blid2_tripm_pane_t3_ParamLimits

0x88d1,	// (0x00024a67) blid2_tripm_pane_t3

0x0003,

0xfa1e,	// (0x0002bbb4) blid2_tripm_pane_t_ParamLimits

0xfa1e,	// (0x0002bbb4) blid2_tripm_pane_t

0x8903,	// (0x00024a99) cell_blid2_satellite_pane_ParamLimits

0x8903,	// (0x00024a99) cell_blid2_satellite_pane

0x8921,	// (0x00024ab7) cell_blid2_satellite_pane_g1

0x019c,	// (0x0001c332) cell_blid2_satellite_pane_t1

0xc045,	// (0x000281db) blid2_speed_pane_g1

0x01aa,	// (0x0001c340) blid2_speed_pane_t1

0x01b8,	// (0x0001c34e) blid2_speed_pane_t2

0x0001,

0xfa27,	// (0x0002bbbd) blid2_speed_pane_t

0xc045,	// (0x000281db) blid2_navig_ring_pane_g1

0x892a,	// (0x00024ac0) blid2_navig_ring_pane_g2

0x8932,	// (0x00024ac8) blid2_navig_ring_pane_g3

0x893a,	// (0x00024ad0) blid2_navig_ring_pane_g4

0x8942,	// (0x00024ad8) blid2_navig_ring_pane_g5

0x0004,

0xfa2c,	// (0x0002bbc2) blid2_navig_ring_pane_g

0xb8d1,	// (0x00027a67) bg_popup_window_pane_cp011

0x01c6,	// (0x0001c35c) popup_blid2_search_window_g1

0x01ce,	// (0x0001c364) popup_blid2_search_window_t1

0x01dc,	// (0x0001c372) popup_blid2_search_window_t2

0x0001,

0xfa37,	// (0x0002bbcd) popup_blid2_search_window_t

0xc36a,	// (0x00028500) main_browser_pane_g1

0xc0a3,	// (0x00028239) main_browser_pane_ParamLimits

0x31cb,	// (0x0001f361) bg_button_pane_cp011_ParamLimits

0x3fd5,	// (0x0002016b) cell_vitu2_function_pane_g1_ParamLimits

0xcd3c,	// (0x00028ed2) bg_popup_sub_pane_cp22_ParamLimits

0x8313,	// (0x000244a9) input_focus_pane_cp08_ParamLimits

0x832f,	// (0x000244c5) popup_vitu2_query_button_pane_ParamLimits

0x832f,	// (0x000244c5) popup_vitu2_query_button_pane

0x833e,	// (0x000244d4) popup_vitu2_query_input_button_pane

0xed5b,	// (0x0002aef1) popup_vitu2_query_window_g1_ParamLimits

0x8348,	// (0x000244de) popup_vitu2_query_window_g2_ParamLimits

0xf93f,	// (0x0002bad5) popup_vitu2_query_window_g_ParamLimits

0xb8d1,	// (0x00027a67) bg_button_pane_cp026

0x894a,	// (0x00024ae0) popup_vitu2_query_input_button_pane_g1

0xb8d1,	// (0x00027a67) bg_button_pane_cp025

0x01ea,	// (0x0001c380) popup_vitu2_query_button_pane_t1

0x6e7c,	// (0x00023012) main_mp3_pane_t6

0x6e8c,	// (0x00023022) popup_slider_window_cp01

0x3b94,	// (0x0001fd2a) cam4_battery_pane

0x3c72,	// (0x0001fe08) cam4_battery_pane_cp02

0x4155,	// (0x000202eb) cam4_battery_pane_cp01

0x4155,	// (0x000202eb) cam4_battery_pane_cp03

0x01f8,	// (0x0001c38e) cam4_battery_pane_g1

0xc045,	// (0x000281db) cam4_battery_pane_g2

0x0001,

0xfa3c,	// (0x0002bbd2) cam4_battery_pane_g

0xe151,	// (0x0002a2e7) popup_blid_sat_info2_window_t11

0x5fd9,	// (0x0002216f) aid_size_touch_mv_arrow_left_ParamLimits

0x6004,	// (0x0002219a) aid_size_touch_mv_arrow_right_ParamLimits

0xcadb,	// (0x00028c71) navi_pane_g1_ParamLimits

0x6043,	// (0x000221d9) navi_pane_g2_ParamLimits

0x6071,	// (0x00022207) navi_pane_g3_ParamLimits

0xf334,	// (0x0002b4ca) navi_pane_g_ParamLimits

0x60cb,	// (0x00022261) navi_pane_mv_t1_ParamLimits

0x785b,	// (0x000239f1) grid_imed_effect_pane_ParamLimits

0x4c36,	// (0x00020dcc) aid_placing_vt_slider_lsc

0xc2a6,	// (0x0002843c) aid_placing_vt_slider_prt

0xbfa0,	// (0x00028136) bg_tb_trans_pane_cp01_ParamLimits

0xe3db,	// (0x0002a571) popup_image_details_window_g1_ParamLimits

0xe3ee,	// (0x0002a584) popup_image_details_window_g2_ParamLimits

0xe403,	// (0x0002a599) popup_image_details_window_g3_ParamLimits

0xe403,	// (0x0002a599) popup_image_details_window_g3

0xf650,	// (0x0002b7e6) popup_image_details_window_g_ParamLimits

0xe417,	// (0x0002a5ad) popup_image_details_window_t1_ParamLimits

0xe429,	// (0x0002a5bf) popup_image_details_window_t2_ParamLimits

0xe442,	// (0x0002a5d8) popup_image_details_window_t3_ParamLimits

0xe456,	// (0x0002a5ec) popup_image_details_window_t4_ParamLimits

0xe471,	// (0x0002a607) popup_image_details_window_t5_ParamLimits

0xf657,	// (0x0002b7ed) popup_image_details_window_t_ParamLimits

0x869c,	// (0x00024832) cl_header_name_pane_ParamLimits

0x869c,	// (0x00024832) cl_header_name_pane

0x8952,	// (0x00024ae8) cl_header_name_pane_t1_ParamLimits

0x8952,	// (0x00024ae8) cl_header_name_pane_t1

0x8969,	// (0x00024aff) cl_header_name_pane_t2_ParamLimits

0x8969,	// (0x00024aff) cl_header_name_pane_t2

0x8993,	// (0x00024b29) cl_header_name_pane_t3_ParamLimits

0x8993,	// (0x00024b29) cl_header_name_pane_t3

0x0002,

0xfa41,	// (0x0002bbd7) cl_header_name_pane_t_ParamLimits

0xfa41,	// (0x0002bbd7) cl_header_name_pane_t

0x609c,	// (0x00022232) navi_pane_mv_g2_ParamLimits

0xea47,	// (0x0002abdd) field_vitu2_entry_pane_g1_ParamLimits

0xea53,	// (0x0002abe9) field_vitu2_entry_pane_g2_ParamLimits

0xd1f7,	// (0x0002938d) field_vitu2_entry_pane_g3_ParamLimits

0xd1f7,	// (0x0002938d) field_vitu2_entry_pane_g3

0xf848,	// (0x0002b9de) field_vitu2_entry_pane_g_ParamLimits

0x3e9b,	// (0x00020031) cell_vitu2_itu_pane_g1_ParamLimits

0x3eb3,	// (0x00020049) cell_vitu2_itu_pane_g2_ParamLimits

0x3eb3,	// (0x00020049) cell_vitu2_itu_pane_g2

0x0001,

0xf854,	// (0x0002b9ea) cell_vitu2_itu_pane_g_ParamLimits

0xf854,	// (0x0002b9ea) cell_vitu2_itu_pane_g

0x31cb,	// (0x0001f361) bg_vkb2_func_pane_cp05_ParamLimits

0x31cb,	// (0x0001f361) bg_vkb2_func_pane_cp05

0x31cb,	// (0x0001f361) bg_vkb2_func_pane_cp03

0x31cb,	// (0x0001f361) bg_vkb2_func_pane_cp04

0x31cb,	// (0x0001f361) bg_vkb2_func_pane_cp10_ParamLimits

0x31cb,	// (0x0001f361) bg_vkb2_func_pane_cp10

0x863d,	// (0x000247d3) bg_vkb2_func_pane_cp08

0x82fb,	// (0x00024491) bg_vkb2_func_pane_cp06

0x8620,	// (0x000247b6) bg_vkb2_func_pane_cp07

0x00f3,	// (0x0001c289) bg_vkb2_func_pane_cp11_ParamLimits

0x00f3,	// (0x0001c289) bg_vkb2_func_pane_cp11

0x0108,	// (0x0001c29e) bg_vkb2_func_pane_cp12_ParamLimits

0x0108,	// (0x0001c29e) bg_vkb2_func_pane_cp12

0xb8d1,	// (0x00027a67) bg_vkb2_func_pane_cp09

0xeabd,	// (0x0002ac53) bg_vkb2_func_pane_g1

0xc47b,	// (0x00028611) bg_vkb2_func_pane_g2

0xeac5,	// (0x0002ac5b) bg_vkb2_func_pane_g3

0xeacd,	// (0x0002ac63) bg_vkb2_func_pane_g4

0xed20,	// (0x0002aeb6) bg_vkb2_func_pane_g5

0xeae5,	// (0x0002ac7b) bg_vkb2_func_pane_g6

0xeaed,	// (0x0002ac83) bg_vkb2_func_pane_g7

0xeadd,	// (0x0002ac73) bg_vkb2_func_pane_g8

0xc45b,	// (0x000285f1) bg_vkb2_func_pane_g9

0x0008,

0xfa48,	// (0x0002bbde) bg_vkb2_func_pane_g

0x889f,	// (0x00024a35) blid2_tripm_pane_g6_ParamLimits

0x889f,	// (0x00024a35) blid2_tripm_pane_g6

0xe981,	// (0x0002ab17) mp4_progress_pane_g1

0x88f7,	// (0x00024a8d) blid2_tripm_values_pane_ParamLimits

0x88f7,	// (0x00024a8d) blid2_tripm_values_pane

0x89b8,	// (0x00024b4e) blid2_tripm_values_pane_t1

0x89c6,	// (0x00024b5c) blid2_tripm_values_pane_t2

0x0202,	// (0x0001c398) blid2_tripm_values_pane_t3

0x89d4,	// (0x00024b6a) blid2_tripm_values_pane_t4

0x89e2,	// (0x00024b78) blid2_tripm_values_pane_t5

0x89f0,	// (0x00024b86) blid2_tripm_values_pane_t6

0x0210,	// (0x0001c3a6) blid2_tripm_values_pane_t7

0x89fe,	// (0x00024b94) blid2_tripm_values_pane_t8

0x8a0c,	// (0x00024ba2) blid2_tripm_values_pane_t9

0x0008,

0xfa5b,	// (0x0002bbf1) blid2_tripm_values_pane_t

0x4c74,	// (0x00020e0a) call_video_pane_t1_ParamLimits

0x4c91,	// (0x00020e27) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x0002b373) call_video_pane_t_ParamLimits

0x63d3,	// (0x00022569) msg_header_pane_g1_ParamLimits

0xccfe,	// (0x00028e94) msg_header_pane_g2_ParamLimits

0xccfe,	// (0x00028e94) msg_header_pane_g2

0x0001,

0xf3d2,	// (0x0002b568) msg_header_pane_g_ParamLimits

0xf3d2,	// (0x0002b568) msg_header_pane_g

0xc0a3,	// (0x00028239) main_clock2_pane_ParamLimits

0x76ae,	// (0x00023844) grid_clock2_toolbar_pane_ParamLimits

0x76ae,	// (0x00023844) grid_clock2_toolbar_pane

0x76ae,	// (0x00023844) listscroll_clock2_pane_ParamLimits

0x76ae,	// (0x00023844) listscroll_clock2_pane

0x775d,	// (0x000238f3) main_clock2_pane_t3_ParamLimits

0x775d,	// (0x000238f3) main_clock2_pane_t3

0x776f,	// (0x00023905) main_clock2_pane_t4_ParamLimits

0x776f,	// (0x00023905) main_clock2_pane_t4

0x021e,	// (0x0001c3b4) cell_clock2_toolbar_pane

0x0226,	// (0x0001c3bc) cell_clock2_toolbar_pane_cp01

0x0226,	// (0x0001c3bc) cell_clock2_toolbar_pane_cp02

0x022e,	// (0x0001c3c4) cell_clock2_toolbar_pane_cp03

0x0236,	// (0x0001c3cc) list_clock2_pane

0xca41,	// (0x00028bd7) scroll_pane_cp10

0x023e,	// (0x0001c3d4) list_single_clock2_pane_ParamLimits

0x023e,	// (0x0001c3d4) list_single_clock2_pane

0xc24f,	// (0x000283e5) list_highlight_pane_cp08

0x024b,	// (0x0001c3e1) list_single_clock2_pane_t1

0x0259,	// (0x0001c3ef) list_single_clock2_pane_t2

0x0001,

0xfa6e,	// (0x0002bc04) list_single_clock2_pane_t

0xb8d1,	// (0x00027a67) bg_button_pane_cp10

0x0267,	// (0x0001c3fd) cell_clock2_toolbar_pane_g1

0x3148,	// (0x0001f2de) aid_main_viewer_pane_g1_ParamLimits

0x3148,	// (0x0001f2de) aid_main_viewer_pane_g1

0x3154,	// (0x0001f2ea) aid_main_viewer_pane_g2_ParamLimits

0x3154,	// (0x0001f2ea) aid_main_viewer_pane_g2

0x6472,	// (0x00022608) aid_main_viewer_pane_g3_ParamLimits

0x6472,	// (0x00022608) aid_main_viewer_pane_g3

0x6483,	// (0x00022619) aid_main_viewer_pane_g4_ParamLimits

0x6483,	// (0x00022619) aid_main_viewer_pane_g4

0x0003,

0xf3e3,	// (0x0002b579) aid_main_viewer_pane_g_ParamLimits

0xf3e3,	// (0x0002b579) aid_main_viewer_pane_g

0x31ac,	// (0x0001f342) main_calc_pane_ParamLimits

0x31d9,	// (0x0001f36f) main_dialer2_pane_ParamLimits

0x2d01,	// (0x0001ee97) main_cam6_pane

0x2d01,	// (0x0001ee97) main_vid6_pane

0x76ba,	// (0x00023850) listscroll_gen_pane_cp06_ParamLimits

0x76ba,	// (0x00023850) listscroll_gen_pane_cp06

0x7781,	// (0x00023917) main_clock2_pane_t5_ParamLimits

0x7781,	// (0x00023917) main_clock2_pane_t5

0x77ce,	// (0x00023964) aid_call2_pane_cp10_ParamLimits

0x77e0,	// (0x00023976) aid_call_pane_cp10_ParamLimits

0xcab0,	// (0x00028c46) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcab0,	// (0x00028c46) popup_clock_analogue_window_cp10_g2_ParamLimits

0x3410,	// (0x0001f5a6) popup_clock_analogue_window_cp10_g3_ParamLimits

0x3410,	// (0x0001f5a6) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcab0,	// (0x00028c46) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf70c,	// (0x0002b8a2) popup_clock_analogue_window_cp10_g_ParamLimits

0x3426,	// (0x0001f5bc) popup_clock_analogue_window_cp10_t1_ParamLimits

0xe9f2,	// (0x0002ab88) cell_dialer2_keypad_pane_g2_ParamLimits

0xe9f2,	// (0x0002ab88) cell_dialer2_keypad_pane_g2

0x0001,

0xf7e7,	// (0x0002b97d) cell_dialer2_keypad_pane_g_ParamLimits

0xf7e7,	// (0x0002b97d) cell_dialer2_keypad_pane_g

0xc04f,	// (0x000281e5) cell_dialer2_keypad_pane_t1

0x7e81,	// (0x00024017) main_cset_text2_pane_ParamLimits

0x7e81,	// (0x00024017) main_cset_text2_pane

0xef47,	// (0x0002b0dd) area_vitu2_query_pane_g1_ParamLimits

0x85bf,	// (0x00024755) area_vitu2_query_pane_g2_ParamLimits

0xf992,	// (0x0002bb28) area_vitu2_query_pane_g_ParamLimits

0xefcb,	// (0x0002b161) area_vitu2_query_pane_t7_ParamLimits

0xefcb,	// (0x0002b161) area_vitu2_query_pane_t7

0x82fb,	// (0x00024491) bg_button_pane_cp018_ParamLimits

0x8620,	// (0x000247b6) bg_button_pane_cp021_ParamLimits

0x862c,	// (0x000247c2) bg_button_pane_cp022_ParamLimits

0x863d,	// (0x000247d3) bg_vkb2_func_pane_cp08_ParamLimits

0x82fb,	// (0x00024491) bg_vkb2_func_pane_cp06_ParamLimits

0x8620,	// (0x000247b6) bg_vkb2_func_pane_cp07_ParamLimits

0x864f,	// (0x000247e5) input_focus_pane_cp09_ParamLimits

0x4208,	// (0x0002039e) cam6_autofocus_pane_ParamLimits

0x4208,	// (0x0002039e) cam6_autofocus_pane

0x422a,	// (0x000203c0) cam6_image_uncrop_pane_ParamLimits

0x422a,	// (0x000203c0) cam6_image_uncrop_pane

0x4260,	// (0x000203f6) cam6_indi_pane_ParamLimits

0x4260,	// (0x000203f6) cam6_indi_pane

0x427a,	// (0x00020410) cam6_mode_pane_ParamLimits

0x427a,	// (0x00020410) cam6_mode_pane

0x428e,	// (0x00020424) cam6_timer_pane_ParamLimits

0x428e,	// (0x00020424) cam6_timer_pane

0x42a2,	// (0x00020438) cam6_zoom_pane_ParamLimits

0x42a2,	// (0x00020438) cam6_zoom_pane

0x8a1a,	// (0x00024bb0) cam6_mode_pane_g1_ParamLimits

0x8a1a,	// (0x00024bb0) cam6_mode_pane_g1

0x8a26,	// (0x00024bbc) cam6_mode_pane_g2_ParamLimits

0x8a26,	// (0x00024bbc) cam6_mode_pane_g2

0x8a32,	// (0x00024bc8) cam6_mode_pane_g3_ParamLimits

0x8a32,	// (0x00024bc8) cam6_mode_pane_g3

0x8a3e,	// (0x00024bd4) cam6_mode_pane_g4_ParamLimits

0x8a3e,	// (0x00024bd4) cam6_mode_pane_g4

0x0003,

0xfa73,	// (0x0002bc09) cam6_mode_pane_g_ParamLimits

0xfa73,	// (0x0002bc09) cam6_mode_pane_g

0xe1ea,	// (0x0002a380) bg_tb_trans_pane_cp08_ParamLimits

0xe1ea,	// (0x0002a380) bg_tb_trans_pane_cp08

0x027d,	// (0x0001c413) cam6_battery_pane_ParamLimits

0x027d,	// (0x0001c413) cam6_battery_pane

0x0293,	// (0x0001c429) cam6_indi_pane_g1_ParamLimits

0x0293,	// (0x0001c429) cam6_indi_pane_g1

0x02a5,	// (0x0001c43b) cam6_indi_pane_g2_ParamLimits

0x02a5,	// (0x0001c43b) cam6_indi_pane_g2

0x02b7,	// (0x0001c44d) cam6_indi_pane_g3_ParamLimits

0x02b7,	// (0x0001c44d) cam6_indi_pane_g3

0x0002,

0xfa7c,	// (0x0002bc12) cam6_indi_pane_g_ParamLimits

0xfa7c,	// (0x0002bc12) cam6_indi_pane_g

0x02c9,	// (0x0001c45f) cam6_indi_pane_t1_ParamLimits

0x02c9,	// (0x0001c45f) cam6_indi_pane_t1

0x7ba9,	// (0x00023d3f) cam6_autofocus_pane_g1

0x7ba1,	// (0x00023d37) cam6_autofocus_pane_g2

0x7bb9,	// (0x00023d4f) cam6_autofocus_pane_g3

0x7bb1,	// (0x00023d47) cam6_autofocus_pane_g4

0x0003,

0xfa83,	// (0x0002bc19) cam6_autofocus_pane_g

0x02ef,	// (0x0001c485) cam6_timer_pane_g1

0x02f7,	// (0x0001c48d) cam6_timer_pane_t1

0x0305,	// (0x0001c49b) cam6_zoom_cont_pane

0x030d,	// (0x0001c4a3) cam6_zoom_pane_g1

0x0316,	// (0x0001c4ac) cam6_zoom_pane_g2

0x8a4a,	// (0x00024be0) cam6_zoom_pane_g3

0x0002,

0xfa8c,	// (0x0002bc22) cam6_zoom_pane_g

0xc045,	// (0x000281db) cam6_battery_pane_g1

0xc045,	// (0x000281db) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x0002b245) cam6_battery_pane_g

0x030d,	// (0x0001c4a3) cam6_zoom_cont_pane_g1

0x0316,	// (0x0001c4ac) cam6_zoom_cont_pane_g2

0x031f,	// (0x0001c4b5) cam6_zoom_cont_pane_g3

0x0002,

0xfa93,	// (0x0002bc29) cam6_zoom_cont_pane_g

0x8a68,	// (0x00024bfe) cam6_mode_pane_cp_ParamLimits

0x8a68,	// (0x00024bfe) cam6_mode_pane_cp

0x8a7c,	// (0x00024c12) cam6_zoom_pane_cp_ParamLimits

0x8a7c,	// (0x00024c12) cam6_zoom_pane_cp

0x8a98,	// (0x00024c2e) vid6_image_uncrop_cif_pane_ParamLimits

0x8a98,	// (0x00024c2e) vid6_image_uncrop_cif_pane

0x8ac4,	// (0x00024c5a) vid6_image_uncrop_nhd_pane_ParamLimits

0x8ac4,	// (0x00024c5a) vid6_image_uncrop_nhd_pane

0x8ae3,	// (0x00024c79) vid6_image_uncrop_vga_pane_ParamLimits

0x8ae3,	// (0x00024c79) vid6_image_uncrop_vga_pane

0x8b02,	// (0x00024c98) vid6_image_uncrop_wvga_pane_ParamLimits

0x8b02,	// (0x00024c98) vid6_image_uncrop_wvga_pane

0x8b21,	// (0x00024cb7) vid6_indi_pane_ParamLimits

0x8b21,	// (0x00024cb7) vid6_indi_pane

0xe1ea,	// (0x0002a380) bg_tb_trans_pane_cp09_ParamLimits

0xe1ea,	// (0x0002a380) bg_tb_trans_pane_cp09

0x0337,	// (0x0001c4cd) cam6_battery_pane_cp_ParamLimits

0x0337,	// (0x0001c4cd) cam6_battery_pane_cp

0x0343,	// (0x0001c4d9) vid6_indi_pane_g1_ParamLimits

0x0343,	// (0x0001c4d9) vid6_indi_pane_g1

0x0355,	// (0x0001c4eb) vid6_indi_pane_g2_ParamLimits

0x0355,	// (0x0001c4eb) vid6_indi_pane_g2

0x0367,	// (0x0001c4fd) vid6_indi_pane_g3_ParamLimits

0x0367,	// (0x0001c4fd) vid6_indi_pane_g3

0x037e,	// (0x0001c514) vid6_indi_pane_g4_ParamLimits

0x037e,	// (0x0001c514) vid6_indi_pane_g4

0x0395,	// (0x0001c52b) vid6_indi_pane_g5_ParamLimits

0x0395,	// (0x0001c52b) vid6_indi_pane_g5

0x0004,

0xfa9a,	// (0x0002bc30) vid6_indi_pane_g_ParamLimits

0xfa9a,	// (0x0002bc30) vid6_indi_pane_g

0x03af,	// (0x0001c545) vid6_indi_pane_t1_ParamLimits

0x03af,	// (0x0001c545) vid6_indi_pane_t1

0x03c5,	// (0x0001c55b) vid6_indi_pane_t2_ParamLimits

0x03c5,	// (0x0001c55b) vid6_indi_pane_t2

0x03ed,	// (0x0001c583) vid6_indi_pane_t3_ParamLimits

0x03ed,	// (0x0001c583) vid6_indi_pane_t3

0x0415,	// (0x0001c5ab) vid6_indi_pane_t4_ParamLimits

0x0415,	// (0x0001c5ab) vid6_indi_pane_t4

0x0003,

0xfaa5,	// (0x0002bc3b) vid6_indi_pane_t_ParamLimits

0xfaa5,	// (0x0002bc3b) vid6_indi_pane_t

0x0439,	// (0x0001c5cf) wait_bar_pane_cp08

0x8b46,	// (0x00024cdc) main_cset_text2_pane_t1_ParamLimits

0x8b46,	// (0x00024cdc) main_cset_text2_pane_t1

0x8a53,	// (0x00024be9) listscroll_gen_pane_cp06_t1_ParamLimits

0x8a53,	// (0x00024be9) listscroll_gen_pane_cp06_t1

0x2d01,	// (0x0001ee97) main_cam6_set_pane

0x0c2b,	// (0x0001cdc1) bg_tb_trans_pane_cp06_ParamLimits

0x3b9c,	// (0x0001fd32) cam4_indicators_pane_g1_ParamLimits

0x3bad,	// (0x0001fd43) cam4_indicators_pane_g2_ParamLimits

0xf824,	// (0x0002b9ba) cam4_indicators_pane_g_ParamLimits

0x3bc5,	// (0x0001fd5b) cam4_indicators_pane_t1_ParamLimits

0x31cb,	// (0x0001f361) bg_tb_trans_pane_cp07_ParamLimits

0x3c7c,	// (0x0001fe12) vid4_indicators_pane_g1_ParamLimits

0x3c92,	// (0x0001fe28) vid4_indicators_pane_g2_ParamLimits

0x3ca6,	// (0x0001fe3c) vid4_indicators_pane_g3_ParamLimits

0x3cb9,	// (0x0001fe4f) vid4_indicators_pane_g4_ParamLimits

0xf836,	// (0x0002b9cc) vid4_indicators_pane_g_ParamLimits

0x3cd7,	// (0x0001fe6d) vid4_indicators_pane_t1_ParamLimits

0x415d,	// (0x000202f3) vid4_progress_pane_g1_ParamLimits

0x416d,	// (0x00020303) vid4_progress_pane_g2_ParamLimits

0x417d,	// (0x00020313) vid4_progress_pane_g3_ParamLimits

0x418f,	// (0x00020325) vid4_progress_pane_g4_ParamLimits

0xf9dd,	// (0x0002bb73) vid4_progress_pane_g_ParamLimits

0x41ad,	// (0x00020343) vid4_progress_pane_t1_ParamLimits

0x41c7,	// (0x0002035d) vid4_progress_pane_t2_ParamLimits

0x41e0,	// (0x00020376) vid4_progress_pane_t3_ParamLimits

0xf9e8,	// (0x0002bb7e) vid4_progress_pane_t_ParamLimits

0x41f5,	// (0x0002038b) wait_bar_pane_cp07_ParamLimits

0x8b6d,	// (0x00024d03) main_cam6_set_pane_g2_ParamLimits

0x8b6d,	// (0x00024d03) main_cam6_set_pane_g2

0x8b79,	// (0x00024d0f) main_cset6_listscroll_pane_ParamLimits

0x8b79,	// (0x00024d0f) main_cset6_listscroll_pane

0x8ba6,	// (0x00024d3c) main_cset6_slider_pane_ParamLimits

0x8ba6,	// (0x00024d3c) main_cset6_slider_pane

0x8bb2,	// (0x00024d48) main_cset6_text2_pane_ParamLimits

0x8bb2,	// (0x00024d48) main_cset6_text2_pane

0x0448,	// (0x0001c5de) main_cset6_text_pane

0x0450,	// (0x0001c5e6) main_cset_list_pane_copy1_ParamLimits

0x0450,	// (0x0001c5e6) main_cset_list_pane_copy1

0x0460,	// (0x0001c5f6) scroll_pane_cp028_copy1

0x8bc5,	// (0x00024d5b) cset_list_set_pane_copy1

0x8bd5,	// (0x00024d6b) aid_position_infowindow_above_copy1

0x8bdd,	// (0x00024d73) aid_position_infowindow_below_copy1

0x8be5,	// (0x00024d7b) cset_list_set_pane_g1_copy1

0x8bed,	// (0x00024d83) cset_list_set_pane_g3_copy1_ParamLimits

0x8bed,	// (0x00024d83) cset_list_set_pane_g3_copy1

0x8bfc,	// (0x00024d92) cset_list_set_pane_t1_copy1_ParamLimits

0x8bfc,	// (0x00024d92) cset_list_set_pane_t1_copy1

0xbfa0,	// (0x00028136) list_highlight_pane_cp021_copy1_ParamLimits

0xbfa0,	// (0x00028136) list_highlight_pane_cp021_copy1

0x0469,	// (0x0001c5ff) cset6_slider_pane_ParamLimits

0x0469,	// (0x0001c5ff) cset6_slider_pane

0x0495,	// (0x0001c62b) main_cset6_slider_pane_g1_ParamLimits

0x0495,	// (0x0001c62b) main_cset6_slider_pane_g1

0x8c11,	// (0x00024da7) main_cset6_slider_pane_g2_ParamLimits

0x8c11,	// (0x00024da7) main_cset6_slider_pane_g2

0x04bd,	// (0x0001c653) main_cset6_slider_pane_g3_ParamLimits

0x04bd,	// (0x0001c653) main_cset6_slider_pane_g3

0x8c39,	// (0x00024dcf) main_cset6_slider_pane_g4_ParamLimits

0x8c39,	// (0x00024dcf) main_cset6_slider_pane_g4

0x8c45,	// (0x00024ddb) main_cset6_slider_pane_g5_ParamLimits

0x8c45,	// (0x00024ddb) main_cset6_slider_pane_g5

0xec16,	// (0x0002adac) main_cset6_slider_pane_g7_ParamLimits

0xec16,	// (0x0002adac) main_cset6_slider_pane_g7

0xec22,	// (0x0002adb8) main_cset6_slider_pane_g8_ParamLimits

0xec22,	// (0x0002adb8) main_cset6_slider_pane_g8

0x8c51,	// (0x00024de7) main_cset6_slider_pane_g9_ParamLimits

0x8c51,	// (0x00024de7) main_cset6_slider_pane_g9

0x8c5d,	// (0x00024df3) main_cset6_slider_pane_g10_ParamLimits

0x8c5d,	// (0x00024df3) main_cset6_slider_pane_g10

0x8c69,	// (0x00024dff) main_cset6_slider_pane_g11_ParamLimits

0x8c69,	// (0x00024dff) main_cset6_slider_pane_g11

0x8c75,	// (0x00024e0b) main_cset6_slider_pane_g12_ParamLimits

0x8c75,	// (0x00024e0b) main_cset6_slider_pane_g12

0x8c81,	// (0x00024e17) main_cset6_slider_pane_g13_ParamLimits

0x8c81,	// (0x00024e17) main_cset6_slider_pane_g13

0x8c8d,	// (0x00024e23) main_cset6_slider_pane_g14_ParamLimits

0x8c8d,	// (0x00024e23) main_cset6_slider_pane_g14

0x8c99,	// (0x00024e2f) main_cset6_slider_pane_g15_ParamLimits

0x8c99,	// (0x00024e2f) main_cset6_slider_pane_g15

0x8cb1,	// (0x00024e47) main_cset6_slider_pane_g16_ParamLimits

0x8cb1,	// (0x00024e47) main_cset6_slider_pane_g16

0x8cbd,	// (0x00024e53) main_cset6_slider_pane_g17_ParamLimits

0x8cbd,	// (0x00024e53) main_cset6_slider_pane_g17

0x0011,

0xfaae,	// (0x0002bc44) main_cset6_slider_pane_g_ParamLimits

0xfaae,	// (0x0002bc44) main_cset6_slider_pane_g

0x04c9,	// (0x0001c65f) main_cset6_slider_pane_t1_ParamLimits

0x04c9,	// (0x0001c65f) main_cset6_slider_pane_t1

0x8ce1,	// (0x00024e77) main_cset6_slider_pane_t2_ParamLimits

0x8ce1,	// (0x00024e77) main_cset6_slider_pane_t2

0x8d0c,	// (0x00024ea2) main_cset6_slider_pane_t3_ParamLimits

0x8d0c,	// (0x00024ea2) main_cset6_slider_pane_t3

0x8d37,	// (0x00024ecd) main_cset6_slider_pane_t4_ParamLimits

0x8d37,	// (0x00024ecd) main_cset6_slider_pane_t4

0x8d62,	// (0x00024ef8) main_cset6_slider_pane_t5_ParamLimits

0x8d62,	// (0x00024ef8) main_cset6_slider_pane_t5

0x050a,	// (0x0001c6a0) main_cset6_slider_pane_t7_ParamLimits

0x050a,	// (0x0001c6a0) main_cset6_slider_pane_t7

0x8d8d,	// (0x00024f23) main_cset6_slider_pane_t8_ParamLimits

0x8d8d,	// (0x00024f23) main_cset6_slider_pane_t8

0x8db1,	// (0x00024f47) main_cset6_slider_pane_t9_ParamLimits

0x8db1,	// (0x00024f47) main_cset6_slider_pane_t9

0x8dd5,	// (0x00024f6b) main_cset6_slider_pane_t10_ParamLimits

0x8dd5,	// (0x00024f6b) main_cset6_slider_pane_t10

0x8df9,	// (0x00024f8f) main_cset6_slider_pane_t11_ParamLimits

0x8df9,	// (0x00024f8f) main_cset6_slider_pane_t11

0x0540,	// (0x0001c6d6) main_cset6_slider_pane_t14_ParamLimits

0x0540,	// (0x0001c6d6) main_cset6_slider_pane_t14

0x0579,	// (0x0001c70f) main_cset6_slider_pane_t15_ParamLimits

0x0579,	// (0x0001c70f) main_cset6_slider_pane_t15

0x000b,

0xfad3,	// (0x0002bc69) main_cset6_slider_pane_t_ParamLimits

0xfad3,	// (0x0002bc69) main_cset6_slider_pane_t

0x05b2,	// (0x0001c748) cset_slider_pane_g1_copy1

0x05bb,	// (0x0001c751) cset_slider_pane_g2_copy1

0x05c4,	// (0x0001c75a) cset_slider_pane_g3_copy1

0xb8d1,	// (0x00027a67) bg_popup_sub_pane_cp011_copy1

0x05d6,	// (0x0001c76c) main_cset_text_pane_g1_copy1

0xed6f,	// (0x0002af05) main_cset_text_pane_t1_copy1

0xed7d,	// (0x0002af13) main_cset_text_pane_t2_copy1

0xed8b,	// (0x0002af21) main_cset_text_pane_t3_copy1

0xed99,	// (0x0002af2f) main_cset_text_pane_t4_copy1

0xeda7,	// (0x0002af3d) main_cset_text_pane_t5_copy1

0x05de,	// (0x0001c774) main_cset_text_pane_t6_copy1

0x05ec,	// (0x0001c782) main_cset_text_pane_t7_copy1

0x8e3a,	// (0x00024fd0) main_cset_text2_pane_t1_copy1

0x31cb,	// (0x0001f361) main_ncimui_pane

0x3232,	// (0x0001f3c8) popup_query_ncimui_window_ParamLimits

0x3232,	// (0x0001f3c8) popup_query_ncimui_window

0xe512,	// (0x0002a6a8) field_cale_ev2_pane_g4_ParamLimits

0xe512,	// (0x0002a6a8) field_cale_ev2_pane_g4

0x7a58,	// (0x00023bee) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7a58,	// (0x00023bee) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7be,	// (0x0002b954) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7be,	// (0x0002b954) cell_video_dialer_keypad_pane_g

0x7a70,	// (0x00023c06) cell_video_dialer_keypad_pane_t1

0xb8d1,	// (0x00027a67) bg_popup_window_pane_cp012

0xddc4,	// (0x00029f5a) heading_pane_cp06

0x0618,	// (0x0001c7ae) ncim_query_content_pane

0xb8d1,	// (0x00027a67) bg_popup_heading_pane_cp01

0x0620,	// (0x0001c7b6) ncim_heading_pane_t1

0x062e,	// (0x0001c7c4) ncim_indicator_popup_pane

0x0640,	// (0x0001c7d6) ncim_query_button_pane

0x0656,	// (0x0001c7ec) ncim_query_content_pane_t1

0x0668,	// (0x0001c7fe) ncim_query_content_pane_t2

0x0005,

0xfb17,	// (0x0002bcad) ncim_query_content_pane_t

0x06a2,	// (0x0001c838) ncim_query_list_pane

0x06b4,	// (0x0001c84a) ncim_query_popup_pane

0x062e,	// (0x0001c7c4) ncim_indicator_popup_pane_ParamLimits

0x8f96,	// (0x0002512c) ncim_query_content_pane_g1_ParamLimits

0x8f96,	// (0x0002512c) ncim_query_content_pane_g1

0x0656,	// (0x0001c7ec) ncim_query_content_pane_t1_ParamLimits

0x0668,	// (0x0001c7fe) ncim_query_content_pane_t2_ParamLimits

0x8fa2,	// (0x00025138) ncim_query_content_pane_t3_ParamLimits

0x8fa2,	// (0x00025138) ncim_query_content_pane_t3

0x8fbf,	// (0x00025155) ncim_query_content_pane_t4_ParamLimits

0x8fbf,	// (0x00025155) ncim_query_content_pane_t4

0x8fdc,	// (0x00025172) ncim_query_content_pane_t5_ParamLimits

0x8fdc,	// (0x00025172) ncim_query_content_pane_t5

0x067a,	// (0x0001c810) ncim_query_content_pane_t6_ParamLimits

0x067a,	// (0x0001c810) ncim_query_content_pane_t6

0xfb17,	// (0x0002bcad) ncim_query_content_pane_t_ParamLimits

0x06a2,	// (0x0001c838) ncim_query_list_pane_ParamLimits

0x06b4,	// (0x0001c84a) ncim_query_popup_pane_ParamLimits

0x06c8,	// (0x0001c85e) wait_bar_pane_cp04

0xb8d1,	// (0x00027a67) input_focus_pane_cp011

0x06d0,	// (0x0001c866) ncim_query_popup_pane_t1

0x06de,	// (0x0001c874) ncim_list_query_list_pane_ParamLimits

0x06de,	// (0x0001c874) ncim_list_query_list_pane

0xb8d1,	// (0x00027a67) bg_button_pane_cp027

0x06f1,	// (0x0001c887) ncim_query_button_pane_g1

0xb8d1,	// (0x00027a67) list_highlight_pane_cp012

0x06fb,	// (0x0001c891) ncim_list_query_list_pane_g1

0x0703,	// (0x0001c899) ncim_list_query_list_pane_t1

0x3bb9,	// (0x0001fd4f) cam4_indicators_pane_g3_ParamLimits

0x3bb9,	// (0x0001fd4f) cam4_indicators_pane_g3

0x3cc5,	// (0x0001fe5b) vid4_indicators_pane_g5_ParamLimits

0x3cc5,	// (0x0001fe5b) vid4_indicators_pane_g5

0x419e,	// (0x00020334) vid4_progress_pane_g5_ParamLimits

0x419e,	// (0x00020334) vid4_progress_pane_g5

0x8e6c,	// (0x00025002) main_ncimui_pane_g1

0x8ed8,	// (0x0002506e) ncimui_group_query_pane_ParamLimits

0x8ed8,	// (0x0002506e) ncimui_group_query_pane

0x8f32,	// (0x000250c8) ncimui_list_pane_ParamLimits

0x8f32,	// (0x000250c8) ncimui_list_pane

0x8f59,	// (0x000250ef) ncimui_text_pane_ParamLimits

0x8f59,	// (0x000250ef) ncimui_text_pane

0x8ff9,	// (0x0002518f) ncimui_text_pane_t1_ParamLimits

0x8ff9,	// (0x0002518f) ncimui_text_pane_t1

0x0711,	// (0x0001c8a7) ncimui_list_single_graphic_pane_ParamLimits

0x0711,	// (0x0001c8a7) ncimui_list_single_graphic_pane

0x9018,	// (0x000251ae) ncimui_query_pane_ParamLimits

0x9018,	// (0x000251ae) ncimui_query_pane

0xb8d1,	// (0x00027a67) list_highlight_pane_cp013

0x0721,	// (0x0001c8b7) ncim_list_query_list_pane_t1_copy1

0x06fb,	// (0x0001c891) ncim_list_single_graphic_pane_g1

0x902b,	// (0x000251c1) ncim_query_button_pane_cp01

0x9037,	// (0x000251cd) ncim_query_entry_pane_ParamLimits

0x9037,	// (0x000251cd) ncim_query_entry_pane

0x904a,	// (0x000251e0) ncimui_query_pane_g1

0x9056,	// (0x000251ec) ncimui_query_pane_t1_ParamLimits

0x9056,	// (0x000251ec) ncimui_query_pane_t1

0xbfa0,	// (0x00028136) input_focus_pane_cp012

0x072f,	// (0x0001c8c5) ncim_query_entry_pane_t1

0xc0a3,	// (0x00028239) main_im_pane_ParamLimits

0x31cb,	// (0x0001f361) main_mobtv_pane_ParamLimits

0x31cb,	// (0x0001f361) main_mobtv_pane

0x8cc9,	// (0x00024e5f) main_cset6_slider_pane_g18_ParamLimits

0x8cc9,	// (0x00024e5f) main_cset6_slider_pane_g18

0x8cd5,	// (0x00024e6b) main_cset6_slider_pane_g19_ParamLimits

0x8cd5,	// (0x00024e6b) main_cset6_slider_pane_g19

0xd1f7,	// (0x0002938d) bg_main_mobtv_pane_ParamLimits

0xd1f7,	// (0x0002938d) bg_main_mobtv_pane

0x906f,	// (0x00025205) main_mobtv_info_pane

0x907a,	// (0x00025210) main_mobtv_loading_pane_ParamLimits

0x907a,	// (0x00025210) main_mobtv_loading_pane

0x0741,	// (0x0001c8d7) main_mobtv_pg_channel_list_pane

0x074b,	// (0x0001c8e1) main_mobtv_pg_hdr_pane

0x9087,	// (0x0002521d) main_mobtv_programe_curr_pane_ParamLimits

0x9087,	// (0x0002521d) main_mobtv_programe_curr_pane

0x9094,	// (0x0002522a) main_mobtv_programe_next_pane_ParamLimits

0x9094,	// (0x0002522a) main_mobtv_programe_next_pane

0x0754,	// (0x0001c8ea) popup_mobtv_noti_window

0xc045,	// (0x000281db) main_tv_pg_hdr_pane_g1

0x075e,	// (0x0001c8f4) main_tv_pg_hdr_pane_g2

0x0766,	// (0x0001c8fc) main_tv_pg_hdr_pane_g3

0x076e,	// (0x0001c904) main_tv_pg_hdr_pane_g4

0x0776,	// (0x0001c90c) main_tv_pg_hdr_pane_g5

0x0780,	// (0x0001c916) main_tv_pg_hdr_pane_g6

0x078a,	// (0x0001c920) main_tv_pg_hdr_pane_g7

0x0794,	// (0x0001c92a) main_tv_pg_hdr_pane_g8

0x079e,	// (0x0001c934) main_tv_pg_hdr_pane_g9

0x07a8,	// (0x0001c93e) main_tv_pg_hdr_pane_g10

0x07b2,	// (0x0001c948) main_tv_pg_hdr_pane_g11

0x000a,

0xfb24,	// (0x0002bcba) main_tv_pg_hdr_pane_g

0x07bc,	// (0x0001c952) main_tv_pg_hdr_pane_t1

0x07ca,	// (0x0001c960) main_tv_pg_hdr_pane_t2

0x07d8,	// (0x0001c96e) main_tv_pg_hdr_pane_t3

0x07e8,	// (0x0001c97e) main_tv_pg_hdr_pane_t4

0x07f8,	// (0x0001c98e) main_tv_pg_hdr_pane_t5

0x0004,

0xfb3b,	// (0x0002bcd1) main_tv_pg_hdr_pane_t

0x0808,	// (0x0001c99e) single_mobtv_pg_channel_pane_ParamLimits

0x0808,	// (0x0001c99e) single_mobtv_pg_channel_pane

0x081a,	// (0x0001c9b0) single_mobtv_pg_channel_table_pane

0x0823,	// (0x0001c9b9) single_mobtv_pg_channel_thumb_pane

0x082c,	// (0x0001c9c2) single_tv_pg_channel_pane_g1

0x0835,	// (0x0001c9cb) single_tv_pg_channel_pane_g2

0x0001,

0xfb46,	// (0x0002bcdc) single_tv_pg_channel_pane_g

0xc007,	// (0x0002819d) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc007,	// (0x0002819d) bg_single_mobtv_pg_channel_thumb_pane

0x083e,	// (0x0001c9d4) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x083e,	// (0x0001c9d4) single_mobtv_pg_channel_thumb_pane_g1

0x084c,	// (0x0001c9e2) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x084c,	// (0x0001c9e2) single_mobtv_pg_channel_thumb_pane_g2

0x0858,	// (0x0001c9ee) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x0858,	// (0x0001c9ee) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb4b,	// (0x0002bce1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb4b,	// (0x0002bce1) single_mobtv_pg_channel_thumb_pane_g

0x0864,	// (0x0001c9fa) single_mobtv_pg_channel_thumb_pane_t1

0x0872,	// (0x0001ca08) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb52,	// (0x0002bce8) single_mobtv_pg_channel_thumb_pane_t

0xc045,	// (0x000281db) bg_single_mobtv_pg_channel_table_pane_g1

0xc045,	// (0x000281db) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x0002b245) bg_single_mobtv_pg_channel_table_pane_g

0x0880,	// (0x0001ca16) single_mobtv_pg_channel_table_pane_t1

0x088e,	// (0x0001ca24) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb57,	// (0x0002bced) single_mobtv_pg_channel_table_pane_t

0x90a9,	// (0x0002523f) main_mobtv_info_pane_g1_ParamLimits

0x90a9,	// (0x0002523f) main_mobtv_info_pane_g1

0x90c5,	// (0x0002525b) main_mobtv_info_pane_t1_ParamLimits

0x90c5,	// (0x0002525b) main_mobtv_info_pane_t1

0x913d,	// (0x000252d3) main_mobtv_info_pane_t2_ParamLimits

0x913d,	// (0x000252d3) main_mobtv_info_pane_t2

0x0002,

0xfb61,	// (0x0002bcf7) main_mobtv_info_pane_t_ParamLimits

0xfb61,	// (0x0002bcf7) main_mobtv_info_pane_t

0x91ce,	// (0x00025364) wait_bar_pane_cp05

0x91e0,	// (0x00025376) main_mobtv_loading_pane_g1_ParamLimits

0x91e0,	// (0x00025376) main_mobtv_loading_pane_g1

0x91ec,	// (0x00025382) main_mobtv_loading_pane_g2_ParamLimits

0x91ec,	// (0x00025382) main_mobtv_loading_pane_g2

0x91f8,	// (0x0002538e) main_mobtv_loading_pane_g3_ParamLimits

0x91f8,	// (0x0002538e) main_mobtv_loading_pane_g3

0x0002,

0xfb68,	// (0x0002bcfe) main_mobtv_loading_pane_g_ParamLimits

0xfb68,	// (0x0002bcfe) main_mobtv_loading_pane_g

0x089c,	// (0x0001ca32) main_mobtv_loading_pane_t1_ParamLimits

0x089c,	// (0x0001ca32) main_mobtv_loading_pane_t1

0x08b4,	// (0x0001ca4a) main_mobtv_loading_pane_t2_ParamLimits

0x08b4,	// (0x0001ca4a) main_mobtv_loading_pane_t2

0x0001,

0xfb6f,	// (0x0002bd05) main_mobtv_loading_pane_t_ParamLimits

0xfb6f,	// (0x0002bd05) main_mobtv_loading_pane_t

0x9206,	// (0x0002539c) wait_bar_pane_cp06_ParamLimits

0x9206,	// (0x0002539c) wait_bar_pane_cp06

0x08d8,	// (0x0001ca6e) main_mobtv_programe_curr_pane_t1

0x08e6,	// (0x0001ca7c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb74,	// (0x0002bd0a) main_mobtv_programe_curr_pane_t

0x08f4,	// (0x0001ca8a) main_mobtv_programe_next_pane_t1

0x0902,	// (0x0001ca98) main_mobtv_programe_next_pane_t2

0x0910,	// (0x0001caa6) main_mobtv_programe_next_pane_t3

0x0002,

0xfb79,	// (0x0002bd0f) main_mobtv_programe_next_pane_t

0xb8d1,	// (0x00027a67) bg_popup_mobtv_noti_window_pane

0x091e,	// (0x0001cab4) popup_mobtv_noti_window_g1

0x0926,	// (0x0001cabc) popup_mobtv_noti_window_t1

0x0934,	// (0x0001caca) popup_mobtv_noti_window_t2

0x0001,

0xfb80,	// (0x0002bd16) popup_mobtv_noti_window_t

0xc045,	// (0x000281db) bg_popup_mobtv_noti_window_pane_g1

0x2d01,	// (0x0001ee97) sc_clock_pane

0x2d01,	// (0x0001ee97) main_fs_bigclock_pane

0x88e5,	// (0x00024a7b) blid2_tripm_pane_t4_ParamLimits

0x88e5,	// (0x00024a7b) blid2_tripm_pane_t4

0xc015,	// (0x000281ab) sc_clock_pane_g1_ParamLimits

0xc015,	// (0x000281ab) sc_clock_pane_g1

0xc063,	// (0x000281f9) sc_clock_pane_t1_ParamLimits

0xc063,	// (0x000281f9) sc_clock_pane_t1

0xc063,	// (0x000281f9) sc_clock_pane_t2_ParamLimits

0xc063,	// (0x000281f9) sc_clock_pane_t2

0xc063,	// (0x000281f9) sc_clock_pane_t3_ParamLimits

0xc063,	// (0x000281f9) sc_clock_pane_t3

0x0004,

0xfb85,	// (0x0002bd1b) sc_clock_pane_t_ParamLimits

0xfb85,	// (0x0002bd1b) sc_clock_pane_t

0x9ed5,	// (0x0002606b) main_fs_bigclock_indicator_pane_ParamLimits

0x9ed5,	// (0x0002606b) main_fs_bigclock_indicator_pane

0x925b,	// (0x000253f1) main_fs_bigclock_pane_g1_ParamLimits

0x925b,	// (0x000253f1) main_fs_bigclock_pane_g1

0x9ee1,	// (0x00026077) main_fs_bigclock_pane_t1_ParamLimits

0x9ee1,	// (0x00026077) main_fs_bigclock_pane_t1

0x9ef3,	// (0x00026089) main_fs_bigclock_pane_t2_ParamLimits

0x9ef3,	// (0x00026089) main_fs_bigclock_pane_t2

0x9f07,	// (0x0002609d) main_fs_bigclock_pane_t3_ParamLimits

0x9f07,	// (0x0002609d) main_fs_bigclock_pane_t3

0x0002,

0xfd1b,	// (0x0002beb1) main_fs_bigclock_pane_t_ParamLimits

0xfd1b,	// (0x0002beb1) main_fs_bigclock_pane_t

0x12dd,	// (0x0001d473) main_fs_bigclock_indicator_pane_g1

0x0648,	// (0x0001c7de) ncim_query_content_pane_g2_ParamLimits

0x0648,	// (0x0001c7de) ncim_query_content_pane_g2

0x0001,

0xfb12,	// (0x0002bca8) ncim_query_content_pane_g_ParamLimits

0xfb12,	// (0x0002bca8) ncim_query_content_pane_g

0xc063,	// (0x000281f9) sc_clock_pane_t4_ParamLimits

0xc063,	// (0x000281f9) sc_clock_pane_t4

0x31cb,	// (0x0001f361) main_radioblah_pane

0x3a93,	// (0x0001fc29) cell_call4_button_pane_t1_copy1_ParamLimits

0x3a93,	// (0x0001fc29) cell_call4_button_pane_t1_copy1

0x8e88,	// (0x0002501e) main_ncimui_pane_t1_ParamLimits

0x8e88,	// (0x0002501e) main_ncimui_pane_t1

0x8ea2,	// (0x00025038) main_ncimui_pane_t2_ParamLimits

0x8ea2,	// (0x00025038) main_ncimui_pane_t2

0x0002,

0xfb0b,	// (0x0002bca1) main_ncimui_pane_t_ParamLimits

0xfb0b,	// (0x0002bca1) main_ncimui_pane_t

0xcd3c,	// (0x00028ed2) main_radioblah_anim_pane_ParamLimits

0xcd3c,	// (0x00028ed2) main_radioblah_anim_pane

0xcd3c,	// (0x00028ed2) main_radioblah_info_pane_ParamLimits

0xcd3c,	// (0x00028ed2) main_radioblah_info_pane

0xd1e3,	// (0x00029379) main_radioblah_pane_t1_ParamLimits

0xd1e3,	// (0x00029379) main_radioblah_pane_t1

0xd1e3,	// (0x00029379) main_radioblah_pane_t2_ParamLimits

0xd1e3,	// (0x00029379) main_radioblah_pane_t2

0x0003,

0xfba6,	// (0x0002bd3c) main_radioblah_pane_t_ParamLimits

0xfba6,	// (0x0002bd3c) main_radioblah_pane_t

0xbff9,	// (0x0002818f) main_radioblah_rocker_ctrl_pane_ParamLimits

0xbff9,	// (0x0002818f) main_radioblah_rocker_ctrl_pane

0xe1f8,	// (0x0002a38e) main_radioblah_info_pane_t1_ParamLimits

0xe1f8,	// (0x0002a38e) main_radioblah_info_pane_t1

0x0972,	// (0x0001cb08) main_radioblah_info_pane_t2_ParamLimits

0x0972,	// (0x0001cb08) main_radioblah_info_pane_t2

0x0003,

0xfbaf,	// (0x0002bd45) main_radioblah_info_pane_t_ParamLimits

0xfbaf,	// (0x0002bd45) main_radioblah_info_pane_t

0xc045,	// (0x000281db) main_radioblah_rocker_ctrl_pane_g1

0xc045,	// (0x000281db) main_radioblah_rocker_ctrl_pane_g2

0xc045,	// (0x000281db) main_radioblah_rocker_ctrl_pane_g3

0xc045,	// (0x000281db) main_radioblah_rocker_ctrl_pane_g4

0xc045,	// (0x000281db) main_radioblah_rocker_ctrl_pane_g5

0xc045,	// (0x000281db) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbb8,	// (0x0002bd4e) main_radioblah_rocker_ctrl_pane_g

0x8e3a,	// (0x00024fd0) main_cset_text2_pane_t1_copy1_ParamLimits

0x3b0c,	// (0x0001fca2) cam4_image_uncrop_qvga_pane

0x3c2b,	// (0x0001fdc1) vid4_image_uncrop_qcif_pane

0x4252,	// (0x000203e8) cam6_image_uncrop_qvga_pane_ParamLimits

0x4252,	// (0x000203e8) cam6_image_uncrop_qvga_pane

0x0327,	// (0x0001c4bd) vid6_image_uncrop_qcif_pane_ParamLimits

0x0327,	// (0x0001c4bd) vid6_image_uncrop_qcif_pane

0xb8d1,	// (0x00027a67) bg_popup_preview_window_pane_cp03

0x05fa,	// (0x0001c790) list_cset_text2_pane

0x0602,	// (0x0001c798) main_cset6_text2_pane_g1

0x060a,	// (0x0001c7a0) main_cset6_text2_pane_t1

0x93e8,	// (0x0002557e) list_cset_text2_pane_t1_ParamLimits

0x93e8,	// (0x0002557e) list_cset_text2_pane_t1

0x31cb,	// (0x0001f361) main_radioblah_pane_ParamLimits

0x91ba,	// (0x00025350) main_mobtv_info_pane_t3_ParamLimits

0x91ba,	// (0x00025350) main_mobtv_info_pane_t3

0xd1f7,	// (0x0002938d) main_radioblah_pane_g1

0x0942,	// (0x0001cad8) main_radioblah_info_pane_g1

0xc063,	// (0x000281f9) main_radioblah_info_pane_t3_ParamLimits

0xc063,	// (0x000281f9) main_radioblah_info_pane_t3

0x5c2d,	// (0x00021dc3) highlight_cell_cale_month_pane_ParamLimits

0x5c2d,	// (0x00021dc3) highlight_cell_cale_month_pane

0x2d01,	// (0x0001ee97) main_phob_fisheye_pane

0xe587,	// (0x0002a71d) scroll_pane_cp0031_ParamLimits

0xe587,	// (0x0002a71d) scroll_pane_cp0031

0x0439,	// (0x0001c5cf) wait_bar_pane_cp08_ParamLimits

0x8bc5,	// (0x00024d5b) cset_list_set_pane_copy1_ParamLimits

0x09db,	// (0x0001cb71) highlight_cell_cale_month_pane_g1

0x93ff,	// (0x00025595) highlight_cell_cale_month_pane_t1

0xf037,	// (0x0002b1cd) list_gen_pane_cp01

0xec01,	// (0x0002ad97) scroll_pane_01

0x940d,	// (0x000255a3) list_single_double_fisheye_pane

0x9416,	// (0x000255ac) list_double_fisheye_pane_g1_ParamLimits

0x9416,	// (0x000255ac) list_double_fisheye_pane_g1

0x9422,	// (0x000255b8) list_double_fisheye_pane_g2_ParamLimits

0x9422,	// (0x000255b8) list_double_fisheye_pane_g2

0x9436,	// (0x000255cc) list_double_fisheye_pane_g3_ParamLimits

0x9436,	// (0x000255cc) list_double_fisheye_pane_g3

0x0004,

0xfbc5,	// (0x0002bd5b) list_double_fisheye_pane_g_ParamLimits

0xfbc5,	// (0x0002bd5b) list_double_fisheye_pane_g

0x945f,	// (0x000255f5) list_double_fisheye_pane_t1_ParamLimits

0x945f,	// (0x000255f5) list_double_fisheye_pane_t1

0x947a,	// (0x00025610) list_double_fisheye_pane_t2_ParamLimits

0x947a,	// (0x00025610) list_double_fisheye_pane_t2

0x0001,

0xfbd0,	// (0x0002bd66) list_double_fisheye_pane_t_ParamLimits

0xfbd0,	// (0x0002bd66) list_double_fisheye_pane_t

0x2d01,	// (0x0001ee97) main_call5_pane

0xbff9,	// (0x0002818f) sc_swipe_pane_ParamLimits

0xbff9,	// (0x0002818f) sc_swipe_pane

0x94a8,	// (0x0002563e) call5_image_pane_ParamLimits

0x94a8,	// (0x0002563e) call5_image_pane

0x94ba,	// (0x00025650) call5_swipe_1_pane_ParamLimits

0x94ba,	// (0x00025650) call5_swipe_1_pane

0x94c6,	// (0x0002565c) call5_swipe_2_pane_ParamLimits

0x94c6,	// (0x0002565c) call5_swipe_2_pane

0x94e0,	// (0x00025676) popup_call5_audio_first_window_ParamLimits

0x94e0,	// (0x00025676) popup_call5_audio_first_window

0xc007,	// (0x0002819d) call5_swipe_1_pane_g1_ParamLimits

0xc007,	// (0x0002819d) call5_swipe_1_pane_g1

0x09e3,	// (0x0001cb79) call5_swipe_1_pane_g2_ParamLimits

0x09e3,	// (0x0001cb79) call5_swipe_1_pane_g2

0x0001,

0xfbd5,	// (0x0002bd6b) call5_swipe_1_pane_g_ParamLimits

0xfbd5,	// (0x0002bd6b) call5_swipe_1_pane_g

0x09ef,	// (0x0001cb85) call5_swipe_1_pane_t1_ParamLimits

0x09ef,	// (0x0001cb85) call5_swipe_1_pane_t1

0xc007,	// (0x0002819d) call5_swipe_2_pane_g1_ParamLimits

0xc007,	// (0x0002819d) call5_swipe_2_pane_g1

0x0a04,	// (0x0001cb9a) call5_swipe_2_pane_g2_ParamLimits

0x0a04,	// (0x0001cb9a) call5_swipe_2_pane_g2

0x0001,

0xfbda,	// (0x0002bd70) call5_swipe_2_pane_g_ParamLimits

0xfbda,	// (0x0002bd70) call5_swipe_2_pane_g

0x0a10,	// (0x0001cba6) call5_swipe_2_pane_t1_ParamLimits

0x0a10,	// (0x0001cba6) call5_swipe_2_pane_t1

0xc007,	// (0x0002819d) sc_swipe_pane_g1_ParamLimits

0xc007,	// (0x0002819d) sc_swipe_pane_g1

0xc015,	// (0x000281ab) sc_swipe_pane_g2_ParamLimits

0xc015,	// (0x000281ab) sc_swipe_pane_g2

0x0001,

0xfbdf,	// (0x0002bd75) sc_swipe_pane_g_ParamLimits

0xfbdf,	// (0x0002bd75) sc_swipe_pane_g

0xc04f,	// (0x000281e5) sc_swipe_pane_t1_ParamLimits

0xc04f,	// (0x000281e5) sc_swipe_pane_t1

0x2d01,	// (0x0001ee97) main_cmail_launcher_pane

0x94f0,	// (0x00025686) aid_size_cell_cmail_l_ParamLimits

0x94f0,	// (0x00025686) aid_size_cell_cmail_l

0x94fe,	// (0x00025694) grid_cmail_l_pane_ParamLimits

0x94fe,	// (0x00025694) grid_cmail_l_pane

0x950c,	// (0x000256a2) cell_cmail_l_pane_ParamLimits

0x950c,	// (0x000256a2) cell_cmail_l_pane

0x9527,	// (0x000256bd) cell_cmail_l_pane_g1_ParamLimits

0x9527,	// (0x000256bd) cell_cmail_l_pane_g1

0x9533,	// (0x000256c9) cell_cmail_l_pane_t1_ParamLimits

0x9533,	// (0x000256c9) cell_cmail_l_pane_t1

0x9549,	// (0x000256df) cell_cmail_l_pane_t2_ParamLimits

0x9549,	// (0x000256df) cell_cmail_l_pane_t2

0x0001,

0xfbe4,	// (0x0002bd7a) cell_cmail_l_pane_t_ParamLimits

0xfbe4,	// (0x0002bd7a) cell_cmail_l_pane_t

0xbfa0,	// (0x00028136) grid_highlight_pane_cp018_ParamLimits

0xbfa0,	// (0x00028136) grid_highlight_pane_cp018

0x2b64,	// (0x0001ecfa) main2_pane_ParamLimits

0x2b64,	// (0x0001ecfa) main2_pane

0xc132,	// (0x000282c8) popup_sp_fs_action_menu_bg_pane_g1

0xc13a,	// (0x000282d0) popup_sp_fs_action_menu_bg_pane_g2

0xc142,	// (0x000282d8) popup_sp_fs_action_menu_bg_pane_g3

0xc14a,	// (0x000282e0) popup_sp_fs_action_menu_bg_pane_g4

0xc152,	// (0x000282e8) popup_sp_fs_action_menu_bg_pane_g5

0xc15a,	// (0x000282f0) popup_sp_fs_action_menu_bg_pane_g6

0xc162,	// (0x000282f8) popup_sp_fs_action_menu_bg_pane_g7

0xc16a,	// (0x00028300) popup_sp_fs_action_menu_bg_pane_g8

0xc172,	// (0x00028308) popup_sp_fs_action_menu_bg_pane_g9

0xc17a,	// (0x00028310) popup_sp_fs_action_menu_bg_pane_g10

0xc17a,	// (0x00028310) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x0002b296) popup_sp_fs_action_menu_bg_pane_g

0xc007,	// (0x0002819d) list_medium_line_x2_t3_g3_g1_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x2_t3_g3_g1

0xc007,	// (0x0002819d) list_medium_line_x2_t3_g3_g2_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x2_t3_g3_g2

0xc007,	// (0x0002819d) list_medium_line_x2_t3_g3_g3_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x0002b344) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x0002b344) list_medium_line_x2_t3_g3_g

0xc04f,	// (0x000281e5) list_medium_line_x2_t3_g3_t1_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x2_t3_g3_t1

0xc04f,	// (0x000281e5) list_medium_line_x2_t3_g3_t2_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x2_t3_g3_t2

0xc04f,	// (0x000281e5) list_medium_line_x2_t3_g3_t3_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x0002b34b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x0002b34b) list_medium_line_x2_t3_g3_t

0xc007,	// (0x0002819d) list_medium_line_x2_t3_g2_g1_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x2_t3_g2_g1

0xc007,	// (0x0002819d) list_medium_line_x2_t3_g2_g2_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x0002b352) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x0002b352) list_medium_line_x2_t3_g2_g

0xc04f,	// (0x000281e5) list_medium_line_x2_t3_g2_t1_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x2_t3_g2_t1

0xc04f,	// (0x000281e5) list_medium_line_x2_t3_g2_t2_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x2_t3_g2_t2

0xc04f,	// (0x000281e5) list_medium_line_x2_t3_g2_t3_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x0002b34b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x0002b34b) list_medium_line_x2_t3_g2_t

0xc007,	// (0x0002819d) list_medium_line_x2_t4_g4_g1_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x2_t4_g4_g1

0xc007,	// (0x0002819d) list_medium_line_x2_t4_g4_g2_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x2_t4_g4_g2

0xc007,	// (0x0002819d) list_medium_line_x2_t4_g4_g3_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x2_t4_g4_g3

0xc007,	// (0x0002819d) list_medium_line_x2_t4_g4_g4_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x0002b357) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x0002b357) list_medium_line_x2_t4_g4_g

0xc04f,	// (0x000281e5) list_medium_line_x2_t4_g4_t1_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x2_t4_g4_t1

0xc04f,	// (0x000281e5) list_medium_line_x2_t4_g4_t2_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x2_t4_g4_t2

0xc04f,	// (0x000281e5) list_medium_line_x2_t4_g4_t3_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x2_t4_g4_t3

0xc04f,	// (0x000281e5) list_medium_line_x2_t4_g4_t4_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x0002b360) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x0002b360) list_medium_line_x2_t4_g4_t

0xc007,	// (0x0002819d) list_medium_line_x2_t2_g4_g1_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x2_t2_g4_g1

0xc007,	// (0x0002819d) list_medium_line_x2_t2_g4_g2_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x2_t2_g4_g2

0xc007,	// (0x0002819d) list_medium_line_x2_t2_g4_g3_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x2_t2_g4_g3

0xc007,	// (0x0002819d) list_medium_line_x2_t2_g4_g4_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x0002b357) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x0002b357) list_medium_line_x2_t2_g4_g

0xc04f,	// (0x000281e5) list_medium_line_x2_t2_g4_t1_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x2_t2_g4_t1

0xc04f,	// (0x000281e5) list_medium_line_x2_t2_g4_t2_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x2_t2_g4_t2

0x0001,

0xf231,	// (0x0002b3c7) list_medium_line_x2_t2_g4_t_ParamLimits

0xf231,	// (0x0002b3c7) list_medium_line_x2_t2_g4_t

0xc007,	// (0x0002819d) list_medium_line_x2_t2_g3_g1_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x2_t2_g3_g1

0xc007,	// (0x0002819d) list_medium_line_x2_t2_g3_g2_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x2_t2_g3_g2

0xc007,	// (0x0002819d) list_medium_line_x2_t2_g3_g3_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x0002b344) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x0002b344) list_medium_line_x2_t2_g3_g

0xc04f,	// (0x000281e5) list_medium_line_x2_t2_g3_t1_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x2_t2_g3_t1

0xc04f,	// (0x000281e5) list_medium_line_x2_t2_g3_t2_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x2_t2_g3_t2

0x0001,

0xf231,	// (0x0002b3c7) list_medium_line_x2_t2_g3_t_ParamLimits

0xf231,	// (0x0002b3c7) list_medium_line_x2_t2_g3_t

0x5d65,	// (0x00021efb) main_sp_fs_list_pane_ParamLimits

0x5d65,	// (0x00021efb) main_sp_fs_list_pane

0x5d71,	// (0x00021f07) sp_fs_scroll_pane_ParamLimits

0x5d71,	// (0x00021f07) sp_fs_scroll_pane

0xc7b2,	// (0x00028948) list_medium_line_x2_t3_t1

0xc7b2,	// (0x00028948) list_medium_line_x2_t3_t2

0xc7b2,	// (0x00028948) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x0002b412) list_medium_line_x2_t3_t

0xc7b2,	// (0x00028948) list_medium_line_x3_t4_t1

0xc7b2,	// (0x00028948) list_medium_line_x3_t4_t2

0xc7b2,	// (0x00028948) list_medium_line_x3_t4_t3

0xc7b2,	// (0x00028948) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x0002b419) list_medium_line_x3_t4_t

0xc7b2,	// (0x00028948) list_medium_line_x4_t5_t1

0xc7b2,	// (0x00028948) list_medium_line_x4_t5_t2

0xc7b2,	// (0x00028948) list_medium_line_x4_t5_t3

0xc7b2,	// (0x00028948) list_medium_line_x4_t5_t4

0xc7b2,	// (0x00028948) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x0002b422) list_medium_line_x4_t5_t

0xc007,	// (0x0002819d) list_medium_line_t4_g4_g1_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_t4_g4_g1

0xc007,	// (0x0002819d) list_medium_line_t4_g4_g2_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_t4_g4_g2

0xc007,	// (0x0002819d) list_medium_line_t4_g4_g3_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_t4_g4_g3

0xc007,	// (0x0002819d) list_medium_line_t4_g4_g4_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x0002b357) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x0002b357) list_medium_line_t4_g4_g

0xc04f,	// (0x000281e5) list_medium_line_t4_g4_t1_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_t4_g4_t1

0xc04f,	// (0x000281e5) list_medium_line_t4_g4_t2_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_t4_g4_t2

0xc04f,	// (0x000281e5) list_medium_line_t4_g4_t3_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_t4_g4_t3

0xc04f,	// (0x000281e5) list_medium_line_t4_g4_t4_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x0002b360) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x0002b360) list_medium_line_t4_g4_t

0x5dfb,	// (0x00021f91) chi_dic_find_pane_g1

0x31e7,	// (0x0001f37d) main_tport_pane

0xc7b2,	// (0x00028948) list_medium_line_plain_t1

0xc007,	// (0x0002819d) list_medium_line_t2_g2_g1_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_t2_g2_g1

0xc007,	// (0x0002819d) list_medium_line_t2_g2_g2_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x0002b352) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x0002b352) list_medium_line_t2_g2_g

0xc04f,	// (0x000281e5) list_medium_line_t2_g2_t1_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_t2_g2_t1

0xc04f,	// (0x000281e5) list_medium_line_t2_g2_t2_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_t2_g2_t2

0x0001,

0xf231,	// (0x0002b3c7) list_medium_line_t2_g2_t_ParamLimits

0xf231,	// (0x0002b3c7) list_medium_line_t2_g2_t

0x0096,	// (0x0001c22c) aid_sp_fs_list_icon_a_sm

0x009e,	// (0x0001c234) aid_sp_fs_list_icon_d

0x00a6,	// (0x0001c23c) aid_sp_fs_text_primary

0x00af,	// (0x0001c245) aid_sp_fs_text_secondary

0xb8d1,	// (0x00027a67) list_medium_line

0xb8d1,	// (0x00027a67) list_medium_line_g2

0xb8d1,	// (0x00027a67) list_medium_line_g3

0xb8d1,	// (0x00027a67) list_medium_line_plain

0xb8d1,	// (0x00027a67) list_medium_line_plain_t2

0xb8d1,	// (0x00027a67) list_medium_line_plain_t3

0xb8d1,	// (0x00027a67) list_medium_line_right_icon

0xb8d1,	// (0x00027a67) list_medium_line_right_iconx2

0xb8d1,	// (0x00027a67) list_medium_line_t2

0xb8d1,	// (0x00027a67) list_medium_line_t2_g2

0xb8d1,	// (0x00027a67) list_medium_line_t2_g3

0xb8d1,	// (0x00027a67) list_medium_line_t2_right_icon

0xb8d1,	// (0x00027a67) list_medium_line_t2_right_iconx2

0xb8d1,	// (0x00027a67) list_medium_line_t3

0xb8d1,	// (0x00027a67) list_medium_line_t3_g2

0xb8d1,	// (0x00027a67) list_medium_line_t3_g3

0xb8d1,	// (0x00027a67) list_medium_line_t3_right_iconx2

0xb8d1,	// (0x00027a67) list_medium_line_t4_g4

0xb8d1,	// (0x00027a67) list_medium_line_x2

0xb8d1,	// (0x00027a67) list_medium_line_x2_t2_g2

0xb8d1,	// (0x00027a67) list_medium_line_x2_t2_g3

0xb8d1,	// (0x00027a67) list_medium_line_x2_t2_g4

0xb8d1,	// (0x00027a67) list_medium_line_x2_t3

0xb8d1,	// (0x00027a67) list_medium_line_x2_t3_g2

0xb8d1,	// (0x00027a67) list_medium_line_x2_t3_g3

0xb8d1,	// (0x00027a67) list_medium_line_x2_t3_g4

0xb8d1,	// (0x00027a67) list_medium_line_x2_t4_g2

0xb8d1,	// (0x00027a67) list_medium_line_x2_t4_g4

0xb8d1,	// (0x00027a67) list_medium_line_x3

0xb8d1,	// (0x00027a67) list_medium_line_x3_t4

0xb8d1,	// (0x00027a67) list_medium_line_x3_t4_g4

0xb8d1,	// (0x00027a67) list_medium_line_x4_t4

0xb8d1,	// (0x00027a67) list_medium_line_x4_t4_g7

0xb8d1,	// (0x00027a67) list_medium_line_x4_t5

0x8770,	// (0x00024906) list_single_fs_dyc_pane_ParamLimits

0x8770,	// (0x00024906) list_single_fs_dyc_pane

0xc007,	// (0x0002819d) list_medium_line_x4_t4_g7_g1_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x4_t4_g7_g1

0xc007,	// (0x0002819d) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x4_t4_g7_g2

0xc007,	// (0x0002819d) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x4_t4_g7_g3

0xc007,	// (0x0002819d) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x4_t4_g7_g4

0xc007,	// (0x0002819d) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x4_t4_g7_g5

0xc007,	// (0x0002819d) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x4_t4_g7_g6

0xc015,	// (0x000281ab) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc015,	// (0x000281ab) list_medium_line_x4_t4_g7_g7

0x0006,

0xfaec,	// (0x0002bc82) list_medium_line_x4_t4_g7_g_ParamLimits

0xfaec,	// (0x0002bc82) list_medium_line_x4_t4_g7_g

0xc04f,	// (0x000281e5) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x4_t4_g7_t1

0xc04f,	// (0x000281e5) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x4_t4_g7_t2

0xc04f,	// (0x000281e5) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x4_t4_g7_t3

0xc063,	// (0x000281f9) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc063,	// (0x000281f9) list_medium_line_x4_t4_g7_t4

0xc063,	// (0x000281f9) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc063,	// (0x000281f9) list_medium_line_x4_t4_g7_t5

0x0004,

0xfafb,	// (0x0002bc91) list_medium_line_x4_t4_g7_t_ParamLimits

0xfafb,	// (0x0002bc91) list_medium_line_x4_t4_g7_t

0x8e1d,	// (0x00024fb3) list_single_dyc_row_pane_ParamLimits

0x8e1d,	// (0x00024fb3) list_single_dyc_row_pane

0x949c,	// (0x00025632) call5_gesture_pane_ParamLimits

0x949c,	// (0x00025632) call5_gesture_pane

0x94d2,	// (0x00025668) call5_windows_pane_ParamLimits

0x94d2,	// (0x00025668) call5_windows_pane

0x9566,	// (0x000256fc) call5_swipe_1_pane_cp_ParamLimits

0x9566,	// (0x000256fc) call5_swipe_1_pane_cp

0x9572,	// (0x00025708) call5_swipe_2_pane_cp_ParamLimits

0x9572,	// (0x00025708) call5_swipe_2_pane_cp

0xc24f,	// (0x000283e5) call5_image_pane_cp

0x957e,	// (0x00025714) popup_call5_audio_first_window_cp_ParamLimits

0x957e,	// (0x00025714) popup_call5_audio_first_window_cp

0x0a25,	// (0x0001cbbb) call5_swipe_1_pane_g1_cp_ParamLimits

0x0a25,	// (0x0001cbbb) call5_swipe_1_pane_g1_cp

0x0a32,	// (0x0001cbc8) call5_swipe_1_pane_g2_cp

0x0a3a,	// (0x0001cbd0) call5_swipe_1_pane_t1_cp_ParamLimits

0x0a3a,	// (0x0001cbd0) call5_swipe_1_pane_t1_cp

0x0a25,	// (0x0001cbbb) call5_swipe_2_pane_g1_cp_ParamLimits

0x0a25,	// (0x0001cbbb) call5_swipe_2_pane_g1_cp

0x0a4f,	// (0x0001cbe5) call5_swipe_2_pane_g2_cp

0x0a57,	// (0x0001cbed) call5_swipe_2_pane_t1_cp_ParamLimits

0x0a57,	// (0x0001cbed) call5_swipe_2_pane_t1_cp

0xbfa0,	// (0x00028136) main_sp_fs_email_pane

0xed0f,	// (0x0002aea5) main_sp_fs_listscroll_pane_te

0x958c,	// (0x00025722) popup_sp_fs_action_menu_pane_ParamLimits

0x958c,	// (0x00025722) popup_sp_fs_action_menu_pane

0xc045,	// (0x000281db) bg_sp_fs_ctrlbar_pane_g1

0x0a6c,	// (0x0001cc02) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x0a75,	// (0x0001cc0b) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x0a7e,	// (0x0001cc14) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc045,	// (0x000281db) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbe9,	// (0x0002bd7f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xdd36,	// (0x00029ecc) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xdd36,	// (0x00029ecc) bg_sp_fs_ctrlbar_ddmenu_pane

0x0a87,	// (0x0001cc1d) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x0a87,	// (0x0001cc1d) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x0a93,	// (0x0001cc29) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x0a93,	// (0x0001cc29) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbf2,	// (0x0002bd88) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbf2,	// (0x0002bd88) main_sp_fs_ctrlbar_ddmenu_pane_g

0x0a9f,	// (0x0001cc35) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x0a9f,	// (0x0001cc35) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc045,	// (0x000281db) list_medium_line_t2_right_icon_g1

0xc7b2,	// (0x00028948) list_medium_line_t2_right_icon_t1

0xc7b2,	// (0x00028948) list_medium_line_t2_right_icon_t2

0x0001,

0xfbf7,	// (0x0002bd8d) list_medium_line_t2_right_icon_t

0xcd3c,	// (0x00028ed2) bg_sp_fs_ctrlbar_pane_ParamLimits

0xcd3c,	// (0x00028ed2) bg_sp_fs_ctrlbar_pane

0x962b,	// (0x000257c1) main_sp_fs_ctrlbar_button_pane_cp01

0x9633,	// (0x000257c9) main_sp_fs_ctrlbar_ddmenu_pane

0x0af3,	// (0x0001cc89) main_sp_fs_ctrlbar_pane_g1

0x0aff,	// (0x0001cc95) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbfc,	// (0x0002bd92) main_sp_fs_ctrlbar_pane_g

0x9671,	// (0x00025807) main_sp_fs_ctrlbar_pane_t1

0x96ae,	// (0x00025844) main_sp_fs_ctrlbar_pane

0x96c8,	// (0x0002585e) main_sp_fs_listscroll_pane_te_cp01

0x96e3,	// (0x00025879) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x96e3,	// (0x00025879) popup_sp_fs_action_menu_pane_cp01

0xbfa0,	// (0x00028136) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xbfa0,	// (0x00028136) bg_sp_fs_highlight_list_pane_cp01

0x0b26,	// (0x0001ccbc) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x0b26,	// (0x0001ccbc) sp_fs_action_menu_list_gene_pane_g1

0x0b35,	// (0x0001cccb) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x0b35,	// (0x0001cccb) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc0a,	// (0x0002bda0) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc0a,	// (0x0002bda0) sp_fs_action_menu_list_gene_pane_g

0x0b42,	// (0x0001ccd8) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x0b42,	// (0x0001ccd8) sp_fs_action_menu_list_gene_pane_t1

0x0b5a,	// (0x0001ccf0) sp_fs_action_menu_list_gene_pane_ParamLimits

0x0b5a,	// (0x0001ccf0) sp_fs_action_menu_list_gene_pane

0x0b7d,	// (0x0001cd13) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x0b7d,	// (0x0001cd13) popup_sp_fs_action_menu_bg_pane

0x0b8b,	// (0x0001cd21) sp_fs_action_menu_list_pane_ParamLimits

0x0b8b,	// (0x0001cd21) sp_fs_action_menu_list_pane

0x9703,	// (0x00025899) sp_fs_scroll_pane_cp01_ParamLimits

0x9703,	// (0x00025899) sp_fs_scroll_pane_cp01

0xc7b2,	// (0x00028948) list_medium_line_plain_t2_t1

0xc7b2,	// (0x00028948) list_medium_line_plain_t2_t2

0x0001,

0xfbf7,	// (0x0002bd8d) list_medium_line_plain_t2_t

0xc7b2,	// (0x00028948) list_medium_line_plain_t3_t1

0xc7b2,	// (0x00028948) list_medium_line_plain_t3_t2

0xc7b2,	// (0x00028948) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x0002b412) list_medium_line_plain_t3_t

0xc007,	// (0x0002819d) list_medium_line_x2_t2_g2_g1_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x2_t2_g2_g1

0xc007,	// (0x0002819d) list_medium_line_x2_t2_g2_g2_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x0002b352) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x0002b352) list_medium_line_x2_t2_g2_g

0xc04f,	// (0x000281e5) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x2_t2_g2_t1

0xc04f,	// (0x000281e5) list_medium_line_x2_t2_g2_t2_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x2_t2_g2_t2

0x0001,

0xf231,	// (0x0002b3c7) list_medium_line_x2_t2_g2_t_ParamLimits

0xf231,	// (0x0002b3c7) list_medium_line_x2_t2_g2_t

0xc007,	// (0x0002819d) list_medium_line_x2_t4_g2_g1_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x2_t4_g2_g1

0xc007,	// (0x0002819d) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x0002b352) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x0002b352) list_medium_line_x2_t4_g2_g

0xc04f,	// (0x000281e5) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x2_t4_g2_t1

0xc04f,	// (0x000281e5) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x2_t4_g2_t2

0xc04f,	// (0x000281e5) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x2_t4_g2_t3

0xc04f,	// (0x000281e5) list_medium_line_x2_t4_g2_t4_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x0002b360) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x0002b360) list_medium_line_x2_t4_g2_t

0xc045,	// (0x000281db) list_medium_line_t3_right_iconx2_g1

0xc045,	// (0x000281db) list_medium_line_t3_right_iconx2_g2

0xc045,	// (0x000281db) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf398,	// (0x0002b52e) list_medium_line_t3_right_iconx2_g

0xc7b2,	// (0x00028948) list_medium_line_t3_right_iconx2_t1

0xc7b2,	// (0x00028948) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbf7,	// (0x0002bd8d) list_medium_line_t3_right_iconx2_t

0xc007,	// (0x0002819d) list_medium_line_x3_t4_g4_g1_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x3_t4_g4_g1

0xc007,	// (0x0002819d) list_medium_line_x3_t4_g4_g2_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x3_t4_g4_g2

0xc007,	// (0x0002819d) list_medium_line_x3_t4_g4_g3_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x3_t4_g4_g3

0xc007,	// (0x0002819d) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x0002b357) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x0002b357) list_medium_line_x3_t4_g4_g

0xc04f,	// (0x000281e5) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x3_t4_g4_t1

0xc04f,	// (0x000281e5) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x3_t4_g4_t2

0xc04f,	// (0x000281e5) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x3_t4_g4_t3

0xc04f,	// (0x000281e5) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x0002b360) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x0002b360) list_medium_line_x3_t4_g4_t

0x9729,	// (0x000258bf) list_single_dyc_row_text_pane_t1_ParamLimits

0x9729,	// (0x000258bf) list_single_dyc_row_text_pane_t1

0x9768,	// (0x000258fe) list_single_dyc_row_text_pane_t2_ParamLimits

0x9768,	// (0x000258fe) list_single_dyc_row_text_pane_t2

0x0baf,	// (0x0001cd45) list_single_dyc_row_text_pane_t3_ParamLimits

0x0baf,	// (0x0001cd45) list_single_dyc_row_text_pane_t3

0x0005,

0xfc0f,	// (0x0002bda5) list_single_dyc_row_text_pane_t_ParamLimits

0xfc0f,	// (0x0002bda5) list_single_dyc_row_text_pane_t

0x0bd3,	// (0x0001cd69) list_single_dyc_row_pane_g1_ParamLimits

0x0bd3,	// (0x0001cd69) list_single_dyc_row_pane_g1

0x0bdf,	// (0x0001cd75) list_single_dyc_row_pane_g2_ParamLimits

0x0bdf,	// (0x0001cd75) list_single_dyc_row_pane_g2

0x0beb,	// (0x0001cd81) list_single_dyc_row_pane_g3_ParamLimits

0x0beb,	// (0x0001cd81) list_single_dyc_row_pane_g3

0x0bf7,	// (0x0001cd8d) list_single_dyc_row_pane_g4_ParamLimits

0x0bf7,	// (0x0001cd8d) list_single_dyc_row_pane_g4

0x0003,

0xfc1c,	// (0x0002bdb2) list_single_dyc_row_pane_g_ParamLimits

0xfc1c,	// (0x0002bdb2) list_single_dyc_row_pane_g

0x0c03,	// (0x0001cd99) list_single_dyc_row_text_pane_ParamLimits

0x0c03,	// (0x0001cd99) list_single_dyc_row_text_pane

0xb8d1,	// (0x00027a67) bg_sp_fs_scroll_pane

0x0c22,	// (0x0001cdb8) thumb_sp_fs_scroll_pane

0xc007,	// (0x0002819d) list_medium_line_g1_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_g1

0xc04f,	// (0x000281e5) list_medium_line_t1_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_t1

0xc007,	// (0x0002819d) list_medium_line_x2_g1_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x2_g1

0xc007,	// (0x0002819d) list_medium_line_x2_g2_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x0002b352) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x0002b352) list_medium_line_x2_g

0xc04f,	// (0x000281e5) list_medium_line_x2_t1_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x2_t1

0xc007,	// (0x0002819d) list_medium_line_x3_g1_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x3_g1

0x0c2b,	// (0x0001cdc1) list_medium_line_x3_g2_ParamLimits

0x0c2b,	// (0x0001cdc1) list_medium_line_x3_g2

0x0001,

0xfc25,	// (0x0002bdbb) list_medium_line_x3_g_ParamLimits

0xfc25,	// (0x0002bdbb) list_medium_line_x3_g

0x0c39,	// (0x0001cdcf) list_medium_line_x3_t1_ParamLimits

0x0c39,	// (0x0001cdcf) list_medium_line_x3_t1

0x0c4d,	// (0x0001cde3) thumb_sp_fs_scroll_pane_g1

0x0c56,	// (0x0001cdec) thumb_sp_fs_scroll_pane_g2

0x0c5f,	// (0x0001cdf5) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc2a,	// (0x0002bdc0) thumb_sp_fs_scroll_pane_g

0x0c4d,	// (0x0001cde3) bg_sp_fs_scroll_pane_g1

0x0c56,	// (0x0001cdec) bg_sp_fs_scroll_pane_g2

0x0c5f,	// (0x0001cdf5) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc2a,	// (0x0002bdc0) bg_sp_fs_scroll_pane_g

0xc007,	// (0x0002819d) list_medium_line_x2_t3_g4_g1_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x2_t3_g4_g1

0xc007,	// (0x0002819d) list_medium_line_x2_t3_g4_g2_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x2_t3_g4_g2

0xc007,	// (0x0002819d) list_medium_line_x2_t3_g4_g3_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x2_t3_g4_g3

0xc007,	// (0x0002819d) list_medium_line_x2_t3_g4_g4_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x0002b357) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x0002b357) list_medium_line_x2_t3_g4_g

0xc04f,	// (0x000281e5) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x2_t3_g4_t1

0xc04f,	// (0x000281e5) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x2_t3_g4_t2

0xc04f,	// (0x000281e5) list_medium_line_x2_t3_g4_t3_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x0002b34b) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x0002b34b) list_medium_line_x2_t3_g4_t

0xc007,	// (0x0002819d) list_medium_line_g2_g1_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_g2_g1

0xc007,	// (0x0002819d) list_medium_line_g2_g2_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x0002b352) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x0002b352) list_medium_line_g2_g

0xc04f,	// (0x000281e5) list_medium_line_g2_t1_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_g2_t1

0xc007,	// (0x0002819d) list_medium_line_t3_g2_g1_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_t3_g2_g1

0xc007,	// (0x0002819d) list_medium_line_t3_g2_g2_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x0002b352) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x0002b352) list_medium_line_t3_g2_g

0xc04f,	// (0x000281e5) list_medium_line_t3_g2_t1_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_t3_g2_t1

0xc04f,	// (0x000281e5) list_medium_line_t3_g2_t2_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_t3_g2_t2

0xc04f,	// (0x000281e5) list_medium_line_t3_g2_t3_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x0002b34b) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x0002b34b) list_medium_line_t3_g2_t

0xc045,	// (0x000281db) list_medium_line_right_icon_g1

0xc7b2,	// (0x00028948) list_medium_line_right_icon_t1

0xc007,	// (0x0002819d) list_medium_line_t2_g1_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_t2_g1

0xc04f,	// (0x000281e5) list_medium_line_t2_t1_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_t2_t1

0xc04f,	// (0x000281e5) list_medium_line_t2_t2_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_t2_t2

0x0001,

0xf231,	// (0x0002b3c7) list_medium_line_t2_t_ParamLimits

0xf231,	// (0x0002b3c7) list_medium_line_t2_t

0xc007,	// (0x0002819d) list_medium_line_t3_g1_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_t3_g1

0xc04f,	// (0x000281e5) list_medium_line_t3_t1_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_t3_t1

0xc04f,	// (0x000281e5) list_medium_line_t3_t2_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_t3_t2

0xc04f,	// (0x000281e5) list_medium_line_t3_t3_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x0002b34b) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x0002b34b) list_medium_line_t3_t

0xc007,	// (0x0002819d) list_medium_line_g3_g1_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_g3_g1

0xc007,	// (0x0002819d) list_medium_line_g3_g2_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_g3_g2

0xc007,	// (0x0002819d) list_medium_line_g3_g3_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x0002b344) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x0002b344) list_medium_line_g3_g

0xc04f,	// (0x000281e5) list_medium_line_g3_t1_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_g3_t1

0xc007,	// (0x0002819d) list_medium_line_t2_g3_g1_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_t2_g3_g1

0xc007,	// (0x0002819d) list_medium_line_t2_g3_g2_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_t2_g3_g2

0xc007,	// (0x0002819d) list_medium_line_t2_g3_g3_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x0002b344) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x0002b344) list_medium_line_t2_g3_g

0xc04f,	// (0x000281e5) list_medium_line_t2_g3_t1_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_t2_g3_t1

0xc04f,	// (0x000281e5) list_medium_line_t2_g3_t2_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_t2_g3_t2

0x0001,

0xf231,	// (0x0002b3c7) list_medium_line_t2_g3_t_ParamLimits

0xf231,	// (0x0002b3c7) list_medium_line_t2_g3_t

0xc007,	// (0x0002819d) list_medium_line_t3_g3_g1_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_t3_g3_g1

0xc007,	// (0x0002819d) list_medium_line_t3_g3_g2_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_t3_g3_g2

0xc007,	// (0x0002819d) list_medium_line_t3_g3_g3_ParamLimits

0xc007,	// (0x0002819d) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x0002b344) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x0002b344) list_medium_line_t3_g3_g

0xc04f,	// (0x000281e5) list_medium_line_t3_g3_t1_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_t3_g3_t1

0xc04f,	// (0x000281e5) list_medium_line_t3_g3_t2_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_t3_g3_t2

0xc04f,	// (0x000281e5) list_medium_line_t3_g3_t3_ParamLimits

0xc04f,	// (0x000281e5) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x0002b34b) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x0002b34b) list_medium_line_t3_g3_t

0xc045,	// (0x000281db) list_medium_line_right_iconx2_g1

0xc045,	// (0x000281db) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x0002b245) list_medium_line_right_iconx2_g

0xc7b2,	// (0x00028948) list_medium_line_right_iconx2_t1

0xc045,	// (0x000281db) list_medium_line_t2_right_iconx2_g1

0xc045,	// (0x000281db) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x0002b245) list_medium_line_t2_right_iconx2_g

0xc7b2,	// (0x00028948) list_medium_line_t2_right_iconx2_t1

0xc7b2,	// (0x00028948) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbf7,	// (0x0002bd8d) list_medium_line_t2_right_iconx2_t

0xc7b2,	// (0x00028948) list_medium_line_x4_t4_t1

0xc7b2,	// (0x00028948) list_medium_line_x4_t4_t2

0xc7b2,	// (0x00028948) list_medium_line_x4_t4_t3

0xc7b2,	// (0x00028948) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x0002b419) list_medium_line_x4_t4_t

0x98bd,	// (0x00025a53) tport_appsw_pane_ParamLimits

0x98bd,	// (0x00025a53) tport_appsw_pane

0x98cb,	// (0x00025a61) tport_contact_pane_ParamLimits

0x98cb,	// (0x00025a61) tport_contact_pane

0x98db,	// (0x00025a71) tport_listscroll_pane_ParamLimits

0x98db,	// (0x00025a71) tport_listscroll_pane

0x98eb,	// (0x00025a81) cell_tport_appsw_pane_ParamLimits

0x98eb,	// (0x00025a81) cell_tport_appsw_pane

0xc015,	// (0x000281ab) tport_appsw_pane_g1_ParamLimits

0xc015,	// (0x000281ab) tport_appsw_pane_g1

0x9918,	// (0x00025aae) tport_contact_pane_g1

0x9921,	// (0x00025ab7) tport_contact_pane_t1

0x992f,	// (0x00025ac5) tport_contact_pane_t2

0x0001,

0xfc31,	// (0x0002bdc7) tport_contact_pane_t

0x0c68,	// (0x0001cdfe) list_tport_pane

0x0c71,	// (0x0001ce07) scroll_pane_cp_030

0x9945,	// (0x00025adb) cell_tport_appsw_pane_g1

0x9955,	// (0x00025aeb) cell_tport_appsw_pane_t1

0x9963,	// (0x00025af9) grid_highlight_pane_cp019

0x996b,	// (0x00025b01) list_tport_double_graphic_pane_ParamLimits

0x996b,	// (0x00025b01) list_tport_double_graphic_pane

0xbfa0,	// (0x00028136) list_highlight_pane_cp023_ParamLimits

0xbfa0,	// (0x00028136) list_highlight_pane_cp023

0x9978,	// (0x00025b0e) list_tport_double_graphic_pane_g1_ParamLimits

0x9978,	// (0x00025b0e) list_tport_double_graphic_pane_g1

0x9985,	// (0x00025b1b) list_tport_double_graphic_pane_t1_ParamLimits

0x9985,	// (0x00025b1b) list_tport_double_graphic_pane_t1

0x999a,	// (0x00025b30) list_tport_double_graphic_pane_t2_ParamLimits

0x999a,	// (0x00025b30) list_tport_double_graphic_pane_t2

0x0001,

0xfc3d,	// (0x0002bdd3) list_tport_double_graphic_pane_t_ParamLimits

0xfc3d,	// (0x0002bdd3) list_tport_double_graphic_pane_t

0xb8d1,	// (0x00027a67) main_cale_note_pane

0x3e80,	// (0x00020016) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x3e80,	// (0x00020016) cell_vitu2_function_top_wide_pane_cp01

0x91ce,	// (0x00025364) wait_bar_pane_cp05_ParamLimits

0xbfa0,	// (0x00028136) listscroll_cmail_pane

0x0c82,	// (0x0001ce18) list_cmail_pane

0x99ac,	// (0x00025b42) list_cmail_body_pane

0x99c6,	// (0x00025b5c) list_single_cmail_header_caption_pane

0x99e6,	// (0x00025b7c) list_single_cmail_header_detail_pane_ParamLimits

0x99e6,	// (0x00025b7c) list_single_cmail_header_detail_pane

0x0c99,	// (0x0001ce2f) list_single_cmail_header_caption_pane_t1

0x9a1c,	// (0x00025bb2) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9a1c,	// (0x00025bb2) list_single_cmail_header_detail_pane_g1

0x0cb0,	// (0x0001ce46) list_single_cmail_header_detail_pane_g2_ParamLimits

0x0cb0,	// (0x0001ce46) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc42,	// (0x0002bdd8) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc42,	// (0x0002bdd8) list_single_cmail_header_detail_pane_g

0x9a34,	// (0x00025bca) list_single_cmail_header_detail_pane_t1_ParamLimits

0x9a34,	// (0x00025bca) list_single_cmail_header_detail_pane_t1

0x9a70,	// (0x00025c06) list_single_cmail_header_editor_pane_bg_ParamLimits

0x9a70,	// (0x00025c06) list_single_cmail_header_editor_pane_bg

0x0835,	// (0x0001c9cb) list_cmail_body_pane_g1

0x0ced,	// (0x0001ce83) list_cmail_body_pane_t1

0xeabd,	// (0x0002ac53) list_single_cmail_header_editor_pane_bg_g1

0xc47b,	// (0x00028611) list_single_cmail_header_editor_pane_bg_g1_copy1

0xeacd,	// (0x0002ac63) list_single_cmail_header_editor_pane_bg_g1_copy2

0xeac5,	// (0x0002ac5b) list_single_cmail_header_editor_pane_bg_g1_copy3

0xed20,	// (0x0002aeb6) list_single_cmail_header_editor_pane_bg_g1_copy4

0xeaed,	// (0x0002ac83) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xeadd,	// (0x0002ac73) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xeae5,	// (0x0002ac7b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc45b,	// (0x000285f1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9a87,	// (0x00025c1d) calenote_gesture_pane_ParamLimits

0x9a87,	// (0x00025c1d) calenote_gesture_pane

0x9aa1,	// (0x00025c37) calenote_window_pane_ParamLimits

0x9aa1,	// (0x00025c37) calenote_window_pane

0x0cfb,	// (0x0001ce91) popup_note_window_cp01

0x9ab9,	// (0x00025c4f) calenote_swipe_1_pane_ParamLimits

0x9ab9,	// (0x00025c4f) calenote_swipe_1_pane

0x9572,	// (0x00025708) calenote_swipe_2_pane_ParamLimits

0x9572,	// (0x00025708) calenote_swipe_2_pane

0x0a25,	// (0x0001cbbb) calenote_swipe_1_pane_g1_ParamLimits

0x0a25,	// (0x0001cbbb) calenote_swipe_1_pane_g1

0x0d0d,	// (0x0001cea3) calenote_swipe_1_pane_g2_ParamLimits

0x0d0d,	// (0x0001cea3) calenote_swipe_1_pane_g2

0x0001,

0xfc4e,	// (0x0002bde4) calenote_swipe_1_pane_g_ParamLimits

0xfc4e,	// (0x0002bde4) calenote_swipe_1_pane_g

0x0d19,	// (0x0001ceaf) calenote_swipe_1_pane_t1_ParamLimits

0x0d19,	// (0x0001ceaf) calenote_swipe_1_pane_t1

0x0a25,	// (0x0001cbbb) calenote_swipe_2_pane_g1_ParamLimits

0x0a25,	// (0x0001cbbb) calenote_swipe_2_pane_g1

0x0d38,	// (0x0001cece) calenote_swipe_2_pane_g2_ParamLimits

0x0d38,	// (0x0001cece) calenote_swipe_2_pane_g2

0x0001,

0xfc53,	// (0x0002bde9) calenote_swipe_2_pane_g_ParamLimits

0xfc53,	// (0x0002bde9) calenote_swipe_2_pane_g

0x0d44,	// (0x0001ceda) calenote_swipe_2_pane_t1_ParamLimits

0x0d44,	// (0x0001ceda) calenote_swipe_2_pane_t1

0xb8d1,	// (0x00027a67) main_mup_navstr_pane

0x74d2,	// (0x00023668) main_mup3_pane_t7_ParamLimits

0x74d2,	// (0x00023668) main_mup3_pane_t7

0x3672,	// (0x0001f808) main_mp4_pane_g6_ParamLimits

0x3672,	// (0x0001f808) main_mp4_pane_g6

0x39c3,	// (0x0001fb59) main_image3_pane_t4_ParamLimits

0x39c3,	// (0x0001fb59) main_image3_pane_t4

0x9acc,	// (0x00025c62) popup_navstr_preview_pane_ParamLimits

0x9acc,	// (0x00025c62) popup_navstr_preview_pane

0x9ad8,	// (0x00025c6e) scroll_navstr_pane_ParamLimits

0x9ad8,	// (0x00025c6e) scroll_navstr_pane

0xb8d1,	// (0x00027a67) bg_popup_preview_window_pane_cp04

0x0d6b,	// (0x0001cf01) popup_navstr_preview_pane_t1

0x9ae4,	// (0x00025c7a) scroll_navstr_pane_g1_ParamLimits

0x9ae4,	// (0x00025c7a) scroll_navstr_pane_g1

0x9af1,	// (0x00025c87) scroll_navstr_pane_t1_ParamLimits

0x9af1,	// (0x00025c87) scroll_navstr_pane_t1

0x0d04,	// (0x0001ce9a) bg_button_pane_cp014

0x0d04,	// (0x0001ce9a) bg_button_pane_cp030

0x9442,	// (0x000255d8) list_double_fisheye_pane_g4_ParamLimits

0x9442,	// (0x000255d8) list_double_fisheye_pane_g4

0x944e,	// (0x000255e4) list_double_fisheye_pane_g5_ParamLimits

0x944e,	// (0x000255e4) list_double_fisheye_pane_g5

0x006a,	// (0x0001c200) sp_fs_scroll_pane_cp03

0x0af3,	// (0x0001cc89) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x0aff,	// (0x0001cc95) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbfc,	// (0x0002bd92) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9671,	// (0x00025807) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x0c91,	// (0x0001ce27) sp_fs_scroll_pane_cp02

0xc1ab,	// (0x00028341) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc1ab,	// (0x00028341) popup_sp_fs_calendar_preview_list_single_pane

0xb8d1,	// (0x00027a67) main_cam6_pano_pane

0x31cb,	// (0x0001f361) main_mup3_pane_ParamLimits

0xb8d1,	// (0x00027a67) main_phacti_pane

0x90a1,	// (0x00025237) bg_button_pane_cp11

0x90b9,	// (0x0002524f) main_mobtv_info_pane_g2_ParamLimits

0x90b9,	// (0x0002524f) main_mobtv_info_pane_g2

0x0001,

0xfb5c,	// (0x0002bcf2) main_mobtv_info_pane_g_ParamLimits

0xfb5c,	// (0x0002bcf2) main_mobtv_info_pane_g

0xc063,	// (0x000281f9) sc_clock_pane_t5_ParamLimits

0xc063,	// (0x000281f9) sc_clock_pane_t5

0xd1f7,	// (0x0002938d) main_radioblah_pane_g1_ParamLimits

0xd1e3,	// (0x00029379) main_radioblah_pane_t3_ParamLimits

0xd1e3,	// (0x00029379) main_radioblah_pane_t3

0xd1e3,	// (0x00029379) main_radioblah_pane_t4_ParamLimits

0xd1e3,	// (0x00029379) main_radioblah_pane_t4

0xbff9,	// (0x0002818f) main_radioblah_text_pane_ParamLimits

0xbff9,	// (0x0002818f) main_radioblah_text_pane

0x0942,	// (0x0001cad8) main_radioblah_info_pane_g1_ParamLimits

0x0986,	// (0x0001cb1c) main_radioblah_info_pane_t4_ParamLimits

0x0986,	// (0x0001cb1c) main_radioblah_info_pane_t4

0xbfa0,	// (0x00028136) main_sp_fs_calendar_pane

0x9b03,	// (0x00025c99) main_phacti_pane_g1

0x9b0b,	// (0x00025ca1) phacti_note_pane_ParamLimits

0x9b0b,	// (0x00025ca1) phacti_note_pane

0x0d82,	// (0x0001cf18) phacti_term_pane_ParamLimits

0x0d82,	// (0x0001cf18) phacti_term_pane

0x0d97,	// (0x0001cf2d) phacti_note_pane_t1_ParamLimits

0x0d97,	// (0x0001cf2d) phacti_note_pane_t1

0x0dae,	// (0x0001cf44) phacti_term_pane_g1

0x0db6,	// (0x0001cf4c) phacti_term_pane_t1_ParamLimits

0x0db6,	// (0x0001cf4c) phacti_term_pane_t1

0x0de0,	// (0x0001cf76) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0de8,	// (0x0001cf7e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc5d,	// (0x0002bdf3) popup_sp_fs_calendar_preview_list_single_pane_g

0x0df0,	// (0x0001cf86) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x0df0,	// (0x0001cf86) popup_sp_fs_calendar_preview_list_single_pane_t1

0x0e06,	// (0x0001cf9c) aid_popup_sp_fs_bg_corner_pane

0xc045,	// (0x000281db) popup_sp_fs_calendar_preview_bg_pane_g1

0xb8d1,	// (0x00027a67) popup_sp_fs_calendar_preview_bg_pane

0x0e0e,	// (0x0001cfa4) popup_sp_fs_calendar_preview_list_pane

0xcd3c,	// (0x00028ed2) bg_main_sp_fs_cale_pane_ParamLimits

0xcd3c,	// (0x00028ed2) bg_main_sp_fs_cale_pane

0x0e1f,	// (0x0001cfb5) listscroll_cale_mrui_pane_ParamLimits

0x0e1f,	// (0x0001cfb5) listscroll_cale_mrui_pane

0x0e34,	// (0x0001cfca) listscroll_sp_fs_schedule_track_pane

0x0e3d,	// (0x0001cfd3) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x0e3d,	// (0x0001cfd3) main_sp_fs_ctrlbar_pane_cp01

0x0e50,	// (0x0001cfe6) main_sp_fs_ribbon_pane

0x0e58,	// (0x0001cfee) popup_sp_fs_cale_preview_window

0x9b6e,	// (0x00025d04) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9b6e,	// (0x00025d04) list_single_sp_fs_schedule_track_pane

0xbff9,	// (0x0002818f) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xbff9,	// (0x0002818f) bg_sp_fs_highlight_list_pane_cp03

0x9b85,	// (0x00025d1b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9b85,	// (0x00025d1b) list_single_sp_fs_schedule_track_pane_g1

0x9b91,	// (0x00025d27) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9b91,	// (0x00025d27) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc62,	// (0x0002bdf8) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc62,	// (0x0002bdf8) list_single_sp_fs_schedule_track_pane_g

0x9b9d,	// (0x00025d33) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9b9d,	// (0x00025d33) list_single_sp_fs_schedule_track_pane_t1

0x9bbb,	// (0x00025d51) sp_fs_schedule_track_pane_ParamLimits

0x9bbb,	// (0x00025d51) sp_fs_schedule_track_pane

0x0e6a,	// (0x0001d000) sp_fs_schedule_track_pane_g1

0x0e72,	// (0x0001d008) sp_fs_schedule_track_pane_g2

0x0e7a,	// (0x0001d010) sp_fs_schedule_track_pane_g3

0x0e82,	// (0x0001d018) sp_fs_schedule_track_pane_g4

0x0e8a,	// (0x0001d020) sp_fs_schedule_track_pane_g5

0x0004,

0xfc67,	// (0x0002bdfd) sp_fs_schedule_track_pane_g

0xeabd,	// (0x0002ac53) bg_sp_fs_schedule_viewer_highlight_g1

0xc47b,	// (0x00028611) bg_sp_fs_schedule_viewer_highlight_g2

0xeac5,	// (0x0002ac5b) bg_sp_fs_schedule_viewer_highlight_g3

0xeacd,	// (0x0002ac63) bg_sp_fs_schedule_viewer_highlight_g4

0xed20,	// (0x0002aeb6) bg_sp_fs_schedule_viewer_highlight_g5

0xeadd,	// (0x0002ac73) bg_sp_fs_schedule_viewer_highlight_g6

0xeae5,	// (0x0002ac7b) bg_sp_fs_schedule_viewer_highlight_g7

0xeaed,	// (0x0002ac83) bg_sp_fs_schedule_viewer_highlight_g8

0xc45b,	// (0x000285f1) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc72,	// (0x0002be08) bg_sp_fs_schedule_viewer_highlight_g

0xb8d1,	// (0x00027a67) bg_main_sp_fs_ribbon_pane

0x9bcd,	// (0x00025d63) main_sp_fs_ribbon_pane_g1

0x0e92,	// (0x0001d028) main_sp_fs_ribbon_pane_t1

0x9bd6,	// (0x00025d6c) main_sp_fs_ribbon_pane_t2

0x0ea1,	// (0x0001d037) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc85,	// (0x0002be1b) main_sp_fs_ribbon_pane_t

0x0eb0,	// (0x0001d046) main_sp_fs_ribbon_scheduler_pane

0x0eb8,	// (0x0001d04e) bg_main_sp_fs_ribbon_pane_g1

0x0ec1,	// (0x0001d057) bg_main_sp_fs_ribbon_pane_g2

0x0eca,	// (0x0001d060) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc8c,	// (0x0002be22) bg_main_sp_fs_ribbon_pane_g

0x0ed2,	// (0x0001d068) main_sp_fs_ribbon_scheduler_pane_g1

0x0edb,	// (0x0001d071) main_sp_fs_ribbon_scheduler_pane_g2

0x0ee4,	// (0x0001d07a) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc93,	// (0x0002be29) main_sp_fs_ribbon_scheduler_pane_g

0x0eed,	// (0x0001d083) list_cale_mrui_pane

0x9be5,	// (0x00025d7b) sp_fs_scroll_pane_cp07_ParamLimits

0x9be5,	// (0x00025d7b) sp_fs_scroll_pane_cp07

0x9c01,	// (0x00025d97) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9c01,	// (0x00025d97) bg_sp_fs_schedule_viewer_highlight

0x0efa,	// (0x0001d090) list_single_sp_fs_schedule_track_pane_cp01

0x0f02,	// (0x0001d098) list_sp_fs_schedule_track_pane

0x0f0a,	// (0x0001d0a0) sp_fs_scroll_pane_cp06_ParamLimits

0x0f0a,	// (0x0001d0a0) sp_fs_scroll_pane_cp06

0xc045,	// (0x000281db) bgmain_sp_fs_calendar_pane_g1

0x9c0e,	// (0x00025da4) list_single_cale_mrui_pane_ParamLimits

0x9c0e,	// (0x00025da4) list_single_cale_mrui_pane

0x0f1c,	// (0x0001d0b2) list_single_cale_mrui_row_pane_ParamLimits

0x0f1c,	// (0x0001d0b2) list_single_cale_mrui_row_pane

0x0f29,	// (0x0001d0bf) list_single_cale_mrui_row_pane_g1_ParamLimits

0x0f29,	// (0x0001d0bf) list_single_cale_mrui_row_pane_g1

0x0f6e,	// (0x0001d104) list_single_cale_mrui_row_pane_t1_ParamLimits

0x0f6e,	// (0x0001d104) list_single_cale_mrui_row_pane_t1

0x9c31,	// (0x00025dc7) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9c31,	// (0x00025dc7) list_single_cale_mrui_row_pane_t2

0x0f80,	// (0x0001d116) list_single_cale_mrui_row_pane_t3_ParamLimits

0x0f80,	// (0x0001d116) list_single_cale_mrui_row_pane_t3

0x0faf,	// (0x0001d145) list_single_cale_mrui_row_pane_t4_ParamLimits

0x0faf,	// (0x0001d145) list_single_cale_mrui_row_pane_t4

0x0003,

0xfca1,	// (0x0002be37) list_single_cale_mrui_row_pane_t_ParamLimits

0xfca1,	// (0x0002be37) list_single_cale_mrui_row_pane_t

0x9c97,	// (0x00025e2d) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9c97,	// (0x00025e2d) list_single_cmail_header_editor_pane_bg_cp01

0x9cc1,	// (0x00025e57) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9cc1,	// (0x00025e57) list_single_cmail_header_editor_pane_bg_cp02

0x0fe0,	// (0x0001d176) main_radioblah_text_pane_t1_ParamLimits

0x0fe0,	// (0x0001d176) main_radioblah_text_pane_t1

0x0ffa,	// (0x0001d190) cam6_indi_pane_cp01

0x1002,	// (0x0001d198) cam6_mode_pane_cp01

0x100a,	// (0x0001d1a0) cam6_pano_pane

0x1013,	// (0x0001d1a9) cam6_zoom_pane_cp01

0x101d,	// (0x0001d1b3) cam6_pano_image_pane

0x1026,	// (0x0001d1bc) cam6_pano_pane_g1

0x0835,	// (0x0001c9cb) cam6_pano_pane_g2

0x102f,	// (0x0001d1c5) cam6_pano_pane_g3

0x1038,	// (0x0001d1ce) cam6_pano_pane_g4

0xe80d,	// (0x0002a9a3) cam6_pano_pane_g5

0x1041,	// (0x0001d1d7) cam6_pano_pane_g6

0x1049,	// (0x0001d1df) cam6_pano_pane_g7

0x1051,	// (0x0001d1e7) cam6_pano_pane_g8

0x105a,	// (0x0001d1f0) cam6_pano_pane_g9

0x0008,

0xfcaa,	// (0x0002be40) cam6_pano_pane_g

0xb8d1,	// (0x00027a67) main_browser_tag_pane

0x0d63,	// (0x0001cef9) grid_navstr_albumart_pane

0x1065,	// (0x0001d1fb) cell_navstr_albumart_pane_ParamLimits

0x1065,	// (0x0001d1fb) cell_navstr_albumart_pane

0x1081,	// (0x0001d217) cell_navstr_albumart_pane_g1

0xdcf6,	// (0x00029e8c) cell_navstr_albumart_pane_g2

0xdd06,	// (0x00029e9c) cell_navstr_albumart_pane_g3

0xdcfe,	// (0x00029e94) cell_navstr_albumart_pane_g4

0x0003,

0xfcbd,	// (0x0002be53) cell_navstr_albumart_pane_g

0x9cdd,	// (0x00025e73) bt_list_pane_ParamLimits

0x9cdd,	// (0x00025e73) bt_list_pane

0x9cf6,	// (0x00025e8c) bt_list_pane_t1

0x9d05,	// (0x00025e9b) bt_list_pane_t2

0x0001,

0xfcc6,	// (0x0002be5c) bt_list_pane_t

0xb8d1,	// (0x00027a67) main_cale_prevew_pane

0x9d14,	// (0x00025eaa) popup_cale_preview_window_ParamLimits

0x9d14,	// (0x00025eaa) popup_cale_preview_window

0xbfa0,	// (0x00028136) bg_popup_preview_window_pane_cp05_ParamLimits

0xbfa0,	// (0x00028136) bg_popup_preview_window_pane_cp05

0x1089,	// (0x0001d21f) list_cale_preview_pane_ParamLimits

0x1089,	// (0x0001d21f) list_cale_preview_pane

0x9d31,	// (0x00025ec7) list_double_cale_preview_pane_ParamLimits

0x9d31,	// (0x00025ec7) list_double_cale_preview_pane

0x9d45,	// (0x00025edb) list_single_cale_preview_pane_ParamLimits

0x9d45,	// (0x00025edb) list_single_cale_preview_pane

0x9d5d,	// (0x00025ef3) list_single_cale_preview_pane_g1

0x9d65,	// (0x00025efb) list_single_cale_preview_pane_t1_ParamLimits

0x9d65,	// (0x00025efb) list_single_cale_preview_pane_t1

0x9d7a,	// (0x00025f10) list_double_cale_preview_pane_g1

0x9d82,	// (0x00025f18) list_double_cale_preview_pane_t1_ParamLimits

0x9d82,	// (0x00025f18) list_double_cale_preview_pane_t1

0x9d97,	// (0x00025f2d) list_double_cale_preview_pane_t2_ParamLimits

0x9d97,	// (0x00025f2d) list_double_cale_preview_pane_t2

0x0001,

0xfccb,	// (0x0002be61) list_double_cale_preview_pane_t_ParamLimits

0xfccb,	// (0x0002be61) list_double_cale_preview_pane_t

0xb8d1,	// (0x00027a67) main_ezdial_pane

0xbfa0,	// (0x00028136) main_sp_fs_email_pane_ParamLimits

0x95d2,	// (0x00025768) cmail_ddmenu_btn01_pane_ParamLimits

0x95d2,	// (0x00025768) cmail_ddmenu_btn01_pane

0x95ef,	// (0x00025785) cmail_ddmenu_btn02_pane_ParamLimits

0x95ef,	// (0x00025785) cmail_ddmenu_btn02_pane

0x960d,	// (0x000257a3) cmail_ddmenu_btn03_pane_ParamLimits

0x960d,	// (0x000257a3) cmail_ddmenu_btn03_pane

0x96ae,	// (0x00025844) main_sp_fs_ctrlbar_pane_ParamLimits

0x96c8,	// (0x0002585e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x99ac,	// (0x00025b42) list_cmail_body_pane_ParamLimits

0x0ca7,	// (0x0001ce3d) bg_button_pane_cp12

0x0cbc,	// (0x0001ce52) list_single_cmail_header_detail_pane_g3_ParamLimits

0x0cbc,	// (0x0001ce52) list_single_cmail_header_detail_pane_g3

0x0cc9,	// (0x0001ce5f) list_single_cmail_header_detail_pane_t2_ParamLimits

0x0cc9,	// (0x0001ce5f) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc49,	// (0x0002bddf) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc49,	// (0x0002bddf) list_single_cmail_header_detail_pane_t

0x0dcb,	// (0x0001cf61) phacti_term_pane_t2_ParamLimits

0x0dcb,	// (0x0001cf61) phacti_term_pane_t2

0x0001,

0xfc58,	// (0x0002bdee) phacti_term_pane_t_ParamLimits

0xfc58,	// (0x0002bdee) phacti_term_pane_t

0x1095,	// (0x0001d22b) aid_size_list_single_double

0x9daf,	// (0x00025f45) popup_ezdial_listscroll_window

0x10a1,	// (0x0001d237) popup_number_entry_window_cp01

0xc24f,	// (0x000283e5) bg_popup_call_pane_cp09

0x10ae,	// (0x0001d244) ezdial_list_pane

0x10b6,	// (0x0001d24c) scroll_pane_cp23

0xdd36,	// (0x00029ecc) bg_button_pane_cp028_ParamLimits

0xdd36,	// (0x00029ecc) bg_button_pane_cp028

0x9dcb,	// (0x00025f61) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9dcb,	// (0x00025f61) cmail_ddmenu_btn01_pane_g1

0x9ddd,	// (0x00025f73) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9ddd,	// (0x00025f73) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcd0,	// (0x0002be66) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcd0,	// (0x0002be66) cmail_ddmenu_btn01_pane_g

0x10be,	// (0x0001d254) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x10be,	// (0x0001d254) cmail_ddmenu_btn01_pane_t1

0xcd3c,	// (0x00028ed2) bg_button_pane_cp029_ParamLimits

0xcd3c,	// (0x00028ed2) bg_button_pane_cp029

0x9de9,	// (0x00025f7f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9de9,	// (0x00025f7f) cmail_ddmenu_btn02_pane_g1

0x9e01,	// (0x00025f97) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9e01,	// (0x00025f97) cmail_ddmenu_btn02_pane_t1

0xbff9,	// (0x0002818f) bg_button_pane_cp031_ParamLimits

0xbff9,	// (0x0002818f) bg_button_pane_cp031

0x9de9,	// (0x00025f7f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9de9,	// (0x00025f7f) cmail_ddmenu_btn03_pane_g1

0x9e01,	// (0x00025f97) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9e01,	// (0x00025f97) cmail_ddmenu_btn03_pane_t1

0xc04f,	// (0x000281e5) cell_dialer2_keypad_pane_t1_ParamLimits

0xe6f9,	// (0x0002a88f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xe6f9,	// (0x0002a88f) cell_dialer2_keypad_pane_t1_copy1

0x8ece,	// (0x00025064) ncimui_group_button_pane

0xbfa0,	// (0x00028136) main_sp_fs_calendar_pane_ParamLimits

0x99c6,	// (0x00025b5c) list_single_cmail_header_caption_pane_ParamLimits

0x0e16,	// (0x0001cfac) aid_recal_txt_sm_pane

0xb8d1,	// (0x00027a67) mian_recal_day_pane

0x0e58,	// (0x0001cfee) popup_sp_fs_cale_preview_window_ParamLimits

0x10d4,	// (0x0001d26a) list_recal_day_pane

0x1117,	// (0x0001d2ad) list_single_recal_day_pane_ParamLimits

0x1117,	// (0x0001d2ad) list_single_recal_day_pane

0x1129,	// (0x0001d2bf) list_single_recal_day_pane_g1_ParamLimits

0x1129,	// (0x0001d2bf) list_single_recal_day_pane_g1

0x1135,	// (0x0001d2cb) list_single_recal_day_pane_g2_ParamLimits

0x1135,	// (0x0001d2cb) list_single_recal_day_pane_g2

0x1141,	// (0x0001d2d7) list_single_recal_day_pane_g3_ParamLimits

0x1141,	// (0x0001d2d7) list_single_recal_day_pane_g3

0x9e25,	// (0x00025fbb) list_single_recal_day_pane_g4_ParamLimits

0x9e25,	// (0x00025fbb) list_single_recal_day_pane_g4

0x114d,	// (0x0001d2e3) list_single_recal_day_pane_g5_ParamLimits

0x114d,	// (0x0001d2e3) list_single_recal_day_pane_g5

0x1159,	// (0x0001d2ef) list_single_recal_day_pane_g6_ParamLimits

0x1159,	// (0x0001d2ef) list_single_recal_day_pane_g6

0x0004,

0xfcdf,	// (0x0002be75) list_single_recal_day_pane_g_ParamLimits

0xfcdf,	// (0x0002be75) list_single_recal_day_pane_g

0x116d,	// (0x0001d303) list_single_recal_day_pane_t1

0x117f,	// (0x0001d315) list_single_recal_day_pane_t2

0x0001,

0xfcea,	// (0x0002be80) list_single_recal_day_pane_t

0x9e3d,	// (0x00025fd3) ncimui_query_button_pane_ParamLimits

0x9e3d,	// (0x00025fd3) ncimui_query_button_pane

0x9e4d,	// (0x00025fe3) ncimui_query_button_pane_t1_ParamLimits

0x9e4d,	// (0x00025fe3) ncimui_query_button_pane_t1

0x1191,	// (0x0001d327) ncimui_query_button_pane_t2_ParamLimits

0x1191,	// (0x0001d327) ncimui_query_button_pane_t2

0x0001,

0xfcef,	// (0x0002be85) ncimui_query_button_pane_t_ParamLimits

0xfcef,	// (0x0002be85) ncimui_query_button_pane_t

0x9e60,	// (0x00025ff6) query_button_pane_ParamLimits

0x9e60,	// (0x00025ff6) query_button_pane

0xb8d1,	// (0x00027a67) bg_button_pane_cp0028

0x11a4,	// (0x0001d33a) query_button_pane_t1

0x31e7,	// (0x0001f37d) main_tport_pane_ParamLimits

0x9893,	// (0x00025a29) bg_popup_window_pane_cp01_ParamLimits

0x9893,	// (0x00025a29) bg_popup_window_pane_cp01

0x98a1,	// (0x00025a37) heading_pane_cp08_ParamLimits

0x98a1,	// (0x00025a37) heading_pane_cp08

0x98af,	// (0x00025a45) heading_pane_cp07_ParamLimits

0x98af,	// (0x00025a45) heading_pane_cp07

0x9945,	// (0x00025adb) cell_tport_appsw_pane_g2

0x0002,

0xfc36,	// (0x0002bdcc) cell_tport_appsw_pane_g

0x6345,	// (0x000224db) input_candi_list_open_g1

0xc65e,	// (0x000287f4) list_cale_time_pane_g6_ParamLimits

0xc65e,	// (0x000287f4) list_cale_time_pane_g6

0x6e96,	// (0x0002302c) aid_size_touch_calib_1_ParamLimits

0x6e96,	// (0x0002302c) aid_size_touch_calib_1

0x6ea2,	// (0x00023038) aid_size_touch_calib_2_ParamLimits

0x6ea2,	// (0x00023038) aid_size_touch_calib_2

0x6eb0,	// (0x00023046) aid_size_touch_calib_3_ParamLimits

0x6eb0,	// (0x00023046) aid_size_touch_calib_3

0x6ec0,	// (0x00023056) aid_size_touch_calib_4_ParamLimits

0x6ec0,	// (0x00023056) aid_size_touch_calib_4

0x6ece,	// (0x00023064) main_touch_calib_button_group_pane_ParamLimits

0x6ece,	// (0x00023064) main_touch_calib_button_group_pane

0x6edc,	// (0x00023072) main_touch_calib_pane_g1_ParamLimits

0x6ee8,	// (0x0002307e) main_touch_calib_pane_g2_ParamLimits

0x6ef4,	// (0x0002308a) main_touch_calib_pane_g3_ParamLimits

0x6f00,	// (0x00023096) main_touch_calib_pane_g4_ParamLimits

0xf689,	// (0x0002b81f) main_touch_calib_pane_g_ParamLimits

0x6f0c,	// (0x000230a2) main_touch_calib_pane_t1_ParamLimits

0x6f23,	// (0x000230b9) main_touch_calib_pane_t2_ParamLimits

0x6f3c,	// (0x000230d2) main_touch_calib_pane_t3_ParamLimits

0x6f52,	// (0x000230e8) main_touch_calib_pane_t4_ParamLimits

0x6f68,	// (0x000230fe) main_touch_calib_pane_t5_ParamLimits

0xf692,	// (0x0002b828) main_touch_calib_pane_t_ParamLimits

0xe5ab,	// (0x0002a741) list_single_fp_cale_pane_g3_ParamLimits

0xe5ab,	// (0x0002a741) list_single_fp_cale_pane_g3

0x31cb,	// (0x0001f361) bg_button_pane_cp012_ParamLimits

0x31cb,	// (0x0001f361) bg_vkb2_func_pane_cp03_ParamLimits

0x4078,	// (0x0002020e) cell_vitu2_function_top_pane_g1_ParamLimits

0x31cb,	// (0x0001f361) bg_vkb2_func_pane_cp04_ParamLimits

0x8e54,	// (0x00024fea) main_ncimui_button_group_pane_ParamLimits

0x8e54,	// (0x00024fea) main_ncimui_button_group_pane

0x8ebc,	// (0x00025052) main_ncimui_pane_t3_ParamLimits

0x8ebc,	// (0x00025052) main_ncimui_pane_t3

0x0d79,	// (0x0001cf0f) phacti_button_group_pane

0x1095,	// (0x0001d22b) aid_size_list_single_double_ParamLimits

0x9daf,	// (0x00025f45) popup_ezdial_listscroll_window_ParamLimits

0x10a1,	// (0x0001d237) popup_number_entry_window_cp01_ParamLimits

0x9e6d,	// (0x00026003) phacti_button_pane_ParamLimits

0x9e6d,	// (0x00026003) phacti_button_pane

0xb8d1,	// (0x00027a67) bg_button_pane_cp14

0x11b2,	// (0x0001d348) phacti_button_pane_t1

0x9e7e,	// (0x00026014) main_touch_calib_button_pane_ParamLimits

0x9e7e,	// (0x00026014) main_touch_calib_button_pane

0xc0a3,	// (0x00028239) bg_button_pane_cp18_ParamLimits

0xc0a3,	// (0x00028239) bg_button_pane_cp18

0x11c0,	// (0x0001d356) main_touch_calib_button_pane_t1_ParamLimits

0x11c0,	// (0x0001d356) main_touch_calib_button_pane_t1

0x11d6,	// (0x0001d36c) main_touch_calib_button_pane_t2_ParamLimits

0x11d6,	// (0x0001d36c) main_touch_calib_button_pane_t2

0x0001,

0xfcf4,	// (0x0002be8a) main_touch_calib_button_pane_t_ParamLimits

0xfcf4,	// (0x0002be8a) main_touch_calib_button_pane_t

0xb8d1,	// (0x00027a67) cell_ncimui_button_pane

0xb8d1,	// (0x00027a67) bg_button_pane_cp032

0x11f4,	// (0x0001d38a) cell_ncimui_button_pane_t1

0x38d4,	// (0x0001fa6a) image3_infobar_pane_ParamLimits

0x38d4,	// (0x0001fa6a) image3_infobar_pane

0x9212,	// (0x000253a8) fs_bigclock_status_pane_ParamLimits

0x9212,	// (0x000253a8) fs_bigclock_status_pane

0x921f,	// (0x000253b5) main_fs_bigclock_clock_pane_ParamLimits

0x921f,	// (0x000253b5) main_fs_bigclock_clock_pane

0x923b,	// (0x000253d1) main_fs_bigclock_indi_pane_ParamLimits

0x923b,	// (0x000253d1) main_fs_bigclock_indi_pane

0x9269,	// (0x000253ff) main_fs_bigclock_swipe_pane_ParamLimits

0x9269,	// (0x000253ff) main_fs_bigclock_swipe_pane

0xb8d1,	// (0x00027a67) main_fs_clock_dumped_data

0x92a3,	// (0x00025439) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x92a3,	// (0x00025439) list_single_fs_bigclock_indicator_pane_g1

0x92c2,	// (0x00025458) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x92c2,	// (0x00025458) list_single_fs_bigclock_indicator_pane_g2

0x92dc,	// (0x00025472) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x92dc,	// (0x00025472) list_single_fs_bigclock_indicator_pane_g3

0x92f8,	// (0x0002548e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x92f8,	// (0x0002548e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb90,	// (0x0002bd26) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb90,	// (0x0002bd26) list_single_fs_bigclock_indicator_pane_g

0x9327,	// (0x000254bd) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x9327,	// (0x000254bd) list_single_fs_bigclock_indicator_pane_t1

0x934f,	// (0x000254e5) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x934f,	// (0x000254e5) list_single_fs_bigclock_indicator_pane_t2

0x9377,	// (0x0002550d) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x9377,	// (0x0002550d) list_single_fs_bigclock_indicator_pane_t3

0x939f,	// (0x00025535) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x939f,	// (0x00025535) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb9b,	// (0x0002bd31) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb9b,	// (0x0002bd31) list_single_fs_bigclock_indicator_pane_t

0x1202,	// (0x0001d398) image3_infobar_fav_pane_ParamLimits

0x1202,	// (0x0001d398) image3_infobar_fav_pane

0x1212,	// (0x0001d3a8) image3_infobar_loc_pane_ParamLimits

0x1212,	// (0x0001d3a8) image3_infobar_loc_pane

0x1228,	// (0x0001d3be) image3_infobar_time_pane_ParamLimits

0x1228,	// (0x0001d3be) image3_infobar_time_pane

0xc045,	// (0x000281db) image3_infobar_time_pane_g1

0x1238,	// (0x0001d3ce) image3_infobar_time_pane_t1

0xc045,	// (0x000281db) image3_infobar_loc_pane_g1

0x1246,	// (0x0001d3dc) image3_infobar_loc_pane_g2

0x0001,

0xfcf9,	// (0x0002be8f) image3_infobar_loc_pane_g

0x124e,	// (0x0001d3e4) image3_infobar_loc_pane_t1

0xc045,	// (0x000281db) image3_infobar_fav_pane_g1

0x125c,	// (0x0001d3f2) image3_infobar_fav_pane_g2

0x0001,

0xfcfe,	// (0x0002be94) image3_infobar_fav_pane_g

0x1264,	// (0x0001d3fa) fs_bigclock_status_battery_pane

0x126d,	// (0x0001d403) fs_bigclock_status_signal_pane

0x1276,	// (0x0001d40c) fs_bigclock_status_title_pane

0x127f,	// (0x0001d415) fs_bigclock_status_signal_pane_g1

0x1288,	// (0x0001d41e) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd03,	// (0x0002be99) fs_bigclock_status_signal_pane_g

0x1290,	// (0x0001d426) fs_bigclock_status_battery_pane_g1

0x1299,	// (0x0001d42f) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd08,	// (0x0002be9e) fs_bigclock_status_battery_pane_g

0x12a1,	// (0x0001d437) fs_bigclock_status_title_pane_t1

0x9e8e,	// (0x00026024) main_fs_bigclock_clock_pane_g1

0x9e8e,	// (0x00026024) main_fs_bigclock_clock_pane_g2

0x9e9d,	// (0x00026033) main_fs_bigclock_clock_pane_g3

0x9e9d,	// (0x00026033) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd0d,	// (0x0002bea3) main_fs_bigclock_clock_pane_g

0x9ead,	// (0x00026043) main_fs_bigclock_clock_pane_t1

0x9ec2,	// (0x00026058) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd16,	// (0x0002beac) main_fs_bigclock_clock_pane_t

0x12af,	// (0x0001d445) list_single_fs_bigclock_indicator_pane_ParamLimits

0x12af,	// (0x0001d445) list_single_fs_bigclock_indicator_pane

0x12c0,	// (0x0001d456) list_single_fs_bigclock_pane_ParamLimits

0x12c0,	// (0x0001d456) list_single_fs_bigclock_pane

0x12e6,	// (0x0001d47c) main_fs_bigclock_indicator_pane_t1

0x12f5,	// (0x0001d48b) list_single_fs_bigclock_pane_g1

0x12fd,	// (0x0001d493) list_single_fs_bigclock_pane_t1

0xc045,	// (0x000281db) main_fs_bigclock_swipe_pane_g1

0x1340,	// (0x0001d4d6) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd27,	// (0x0002bebd) main_fs_bigclock_swipe_pane_g

0x1348,	// (0x0001d4de) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1348,	// (0x0001d4de) main_fs_bigclock_swipe_pane_t1

0x5d7d,	// (0x00021f13) call_type_pane_ParamLimits

0xb8d1,	// (0x00027a67) main_btmg_pane

0x0f55,	// (0x0001d0eb) list_single_cale_mrui_row_pane_g2_ParamLimits

0x0f55,	// (0x0001d0eb) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc9a,	// (0x0002be30) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc9a,	// (0x0002be30) list_single_cale_mrui_row_pane_g

0x10fd,	// (0x0001d293) list_recal_vselct_arw_lo_pane

0x1105,	// (0x0001d29b) list_recal_vselct_arw_up_pane

0x110d,	// (0x0001d2a3) list_recal_vselct_pane

0x9f19,	// (0x000260af) btmg_button_pane

0x9f25,	// (0x000260bb) main_btmg_pane_g1

0xb8d1,	// (0x00027a67) bg_button_pane_cp044

0x1365,	// (0x0001d4fb) btmg_button_pane_t1

0xde56,	// (0x00029fec) aid_listscroll_gen

0xbfa0,	// (0x00028136) main_cntbar_detail_pane

0x0c7a,	// (0x0001ce10) list_cmail_folder_pane

0x006a,	// (0x0001c200) sp_fs_scroll_pane_cp03_ParamLimits

0x9f2d,	// (0x000260c3) list_single_fs_dyc_pane_cp01_ParamLimits

0x9f2d,	// (0x000260c3) list_single_fs_dyc_pane_cp01

0x138d,	// (0x0001d523) aid_size_cmail_indent

0x1396,	// (0x0001d52c) list_single_dyc_row_pane_cp01

0x9f6a,	// (0x00026100) cntbar_detail_list_pane_ParamLimits

0x9f6a,	// (0x00026100) cntbar_detail_list_pane

0x9faa,	// (0x00026140) main_cntbar_detail_cont_pane_ParamLimits

0x9faa,	// (0x00026140) main_cntbar_detail_cont_pane

0x5d71,	// (0x00021f07) scroll_pane_cp032_ParamLimits

0x5d71,	// (0x00021f07) scroll_pane_cp032

0x9fb6,	// (0x0002614c) cntbar_detail_list_event_pane_ParamLimits

0x9fb6,	// (0x0002614c) cntbar_detail_list_event_pane

0x9f78,	// (0x0002610e) cntbar_detail_list_shct_pane

0xc4c9,	// (0x0002865f) aid_list_gen

0x139f,	// (0x0001d535) aid_scroll

0x13a8,	// (0x0001d53e) aid_size_touch_scroll_bar

0x9fc6,	// (0x0002615c) aid_list_double

0x9fcf,	// (0x00026165) aid_list_single

0x9fcf,	// (0x00026165) aid_list_single_lg

0x9fd8,	// (0x0002616e) aid_list_z_g_a_sm

0x9fe0,	// (0x00026176) aid_list_z_g_d

0x9fe8,	// (0x0002617e) aid_txt_z_prm

0x9ff6,	// (0x0002618c) aid_txt_z_prm_cp01

0xa004,	// (0x0002619a) aid_txt_z_sec

0xa012,	// (0x000261a8) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa012,	// (0x000261a8) main_cntbar_detail_cont_pane_g1

0xa01f,	// (0x000261b5) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa01f,	// (0x000261b5) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd2c,	// (0x0002bec2) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd2c,	// (0x0002bec2) main_cntbar_detail_cont_pane_g

0x13b1,	// (0x0001d547) main_cntbar_detail_cont_pane_t1

0x13bf,	// (0x0001d555) main_cntbar_detail_cont_pane_t2

0x13cd,	// (0x0001d563) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd31,	// (0x0002bec7) main_cntbar_detail_cont_pane_t

0xa02b,	// (0x000261c1) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa02b,	// (0x000261c1) cell_cntbar_detail_list_shct_pane

0x13db,	// (0x0001d571) cntbar_detail_list_shct_pane_g1

0x13e4,	// (0x0001d57a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd38,	// (0x0002bece) cntbar_detail_list_shct_pane_g

0xa03f,	// (0x000261d5) cntbar_detail_list_event_pane_g1_ParamLimits

0xa03f,	// (0x000261d5) cntbar_detail_list_event_pane_g1

0xa04b,	// (0x000261e1) cntbar_detail_list_event_pane_g2_ParamLimits

0xa04b,	// (0x000261e1) cntbar_detail_list_event_pane_g2

0x0005,

0xfd3d,	// (0x0002bed3) cntbar_detail_list_event_pane_g_ParamLimits

0xfd3d,	// (0x0002bed3) cntbar_detail_list_event_pane_g

0xa0b9,	// (0x0002624f) cntbar_detail_list_event_pane_t1_ParamLimits

0xa0b9,	// (0x0002624f) cntbar_detail_list_event_pane_t1

0xa0ce,	// (0x00026264) cntbar_detail_list_event_pane_t2_ParamLimits

0xa0ce,	// (0x00026264) cntbar_detail_list_event_pane_t2

0x0002,

0xfd4a,	// (0x0002bee0) cntbar_detail_list_event_pane_t_ParamLimits

0xfd4a,	// (0x0002bee0) cntbar_detail_list_event_pane_t

0xc045,	// (0x000281db) cell_cntbar_detail_list_shct_pane_g1

0x60bb,	// (0x00022251) navi_pane_mv_g3

0xbfa0,	// (0x00028136) main_cntbar_detail_pane_ParamLimits

0xb8d1,	// (0x00027a67) main_notif_wgt_pane

0x359f,	// (0x0001f735) aid_tch_main_mp4_pane_g4

0x3874,	// (0x0001fa0a) popup_slider_window_cp02

0x10f3,	// (0x0001d289) list_recal_day_event_pane

0x9f4a,	// (0x000260e0) cntbar_detail_btn_pane_ParamLimits

0x9f4a,	// (0x000260e0) cntbar_detail_btn_pane

0x9f5a,	// (0x000260f0) cntbar_detail_btn_pane_cp01_ParamLimits

0x9f5a,	// (0x000260f0) cntbar_detail_btn_pane_cp01

0x9f78,	// (0x0002610e) cntbar_detail_list_shct_pane_ParamLimits

0x9f84,	// (0x0002611a) cntbar_detail_pane_g1_ParamLimits

0x9f84,	// (0x0002611a) cntbar_detail_pane_g1

0x9f94,	// (0x0002612a) cntbar_detail_pane_t1_ParamLimits

0x9f94,	// (0x0002612a) cntbar_detail_pane_t1

0xa057,	// (0x000261ed) cntbar_detail_list_event_pane_g3_ParamLimits

0xa057,	// (0x000261ed) cntbar_detail_list_event_pane_g3

0xa06f,	// (0x00026205) cntbar_detail_list_event_pane_g4_ParamLimits

0xa06f,	// (0x00026205) cntbar_detail_list_event_pane_g4

0xa087,	// (0x0002621d) cntbar_detail_list_event_pane_g5_ParamLimits

0xa087,	// (0x0002621d) cntbar_detail_list_event_pane_g5

0xa09f,	// (0x00026235) cntbar_detail_list_event_pane_g6_ParamLimits

0xa09f,	// (0x00026235) cntbar_detail_list_event_pane_g6

0xa0e3,	// (0x00026279) cntbar_detail_list_event_pane_t3_ParamLimits

0xa0e3,	// (0x00026279) cntbar_detail_list_event_pane_t3

0xa0f5,	// (0x0002628b) popup_notif_wgt_window_ParamLimits

0xa0f5,	// (0x0002628b) popup_notif_wgt_window

0xa105,	// (0x0002629b) popup_submenu_window_cp01_ParamLimits

0xa105,	// (0x0002629b) popup_submenu_window_cp01

0xc24f,	// (0x000283e5) bg_popup_window_pane_cp10

0x13ed,	// (0x0001d583) listscroll_notif_wgt_pane

0x13ff,	// (0x0001d595) list_notif_wgt_window

0x1408,	// (0x0001d59e) scroll_pane_cp033

0xa115,	// (0x000262ab) list_notif_wgt_row_pane_ParamLimits

0xa115,	// (0x000262ab) list_notif_wgt_row_pane

0x1411,	// (0x0001d5a7) aid_size_list_notif_wgt_del

0x141e,	// (0x0001d5b4) list_notif_wgt_row_pane_g1

0x142a,	// (0x0001d5c0) list_notif_wgt_row_pane_g2

0x1439,	// (0x0001d5cf) list_notif_wgt_row_pane_g3

0x0002,

0xfd51,	// (0x0002bee7) list_notif_wgt_row_pane_g

0x1446,	// (0x0001d5dc) list_notif_wgt_row_pane_t1

0x145c,	// (0x0001d5f2) list_notif_wgt_row_pane_t2

0x146e,	// (0x0001d604) list_notif_wgt_row_pane_t3

0x0002,

0xfd58,	// (0x0002beee) list_notif_wgt_row_pane_t

0xed3a,	// (0x0002aed0) list_recal_day_event_pane_g1

0x1480,	// (0x0001d616) list_recal_day_event_pane_t1

0xb8d1,	// (0x00027a67) bg_button_pane_cp045

0xa129,	// (0x000262bf) cntbar_detail_btn_pane_t1

0xcd3c,	// (0x00028ed2) main_callh_pane_ParamLimits

0xcd3c,	// (0x00028ed2) main_callh_pane

0xb8d1,	// (0x00027a67) main_coverflow0_pane

0xb8d1,	// (0x00027a67) main_wgtman_pane

0x9281,	// (0x00025417) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9281,	// (0x00025417) main_fs_bigclock_unlock_btn_pane

0x993d,	// (0x00025ad3) bg_button_pane_cp16

0x994d,	// (0x00025ae3) cell_tport_appsw_pane_g3

0xa137,	// (0x000262cd) cf0_flow_pane_ParamLimits

0xa137,	// (0x000262cd) cf0_flow_pane

0x148f,	// (0x0001d625) listscroll_cf0_pane

0x149a,	// (0x0001d630) main_cf0_pane_g1

0xa146,	// (0x000262dc) main_cf0_pane_t1_ParamLimits

0xa146,	// (0x000262dc) main_cf0_pane_t1

0xa15a,	// (0x000262f0) main_cf0_pane_t2_ParamLimits

0xa15a,	// (0x000262f0) main_cf0_pane_t2

0x0001,

0xfd64,	// (0x0002befa) main_cf0_pane_t_ParamLimits

0xfd64,	// (0x0002befa) main_cf0_pane_t

0x14ac,	// (0x0001d642) scroll_pane_cp11

0xa16e,	// (0x00026304) cf0_flow_pane_g1

0xa176,	// (0x0002630c) cf0_flow_pane_g2

0x0001,

0xfd69,	// (0x0002beff) cf0_flow_pane_g

0xa17e,	// (0x00026314) cf0_flow_pane_t1

0xb8d1,	// (0x00027a67) main_call6_pane

0xb8d1,	// (0x00027a67) main_calllock_pane

0x42be,	// (0x00020454) call6_btn_grp_pane_ParamLimits

0x42be,	// (0x00020454) call6_btn_grp_pane

0x42cb,	// (0x00020461) call6_pane_g1_ParamLimits

0x42cb,	// (0x00020461) call6_pane_g1

0x42db,	// (0x00020471) popup_call6_1st_window_ParamLimits

0x42db,	// (0x00020471) popup_call6_1st_window

0x42eb,	// (0x00020481) popup_call6_2nd_window_ParamLimits

0x42eb,	// (0x00020481) popup_call6_2nd_window

0x42fb,	// (0x00020491) cell_call6_btn_pane_ParamLimits

0x42fb,	// (0x00020491) cell_call6_btn_pane

0xc24f,	// (0x000283e5) bg_popup_call2_in_pane_cp03

0x14b7,	// (0x0001d64d) popup_call6_1st_window_g1

0x14bf,	// (0x0001d655) popup_call6_1st_window_g2

0x14c7,	// (0x0001d65d) popup_call6_1st_window_g3

0x0002,

0xfd6e,	// (0x0002bf04) popup_call6_1st_window_g

0x14cf,	// (0x0001d665) popup_call6_1st_window_t1

0x14de,	// (0x0001d674) popup_call6_1st_window_t2

0x14ee,	// (0x0001d684) popup_call6_1st_window_t3

0x0002,

0xfd75,	// (0x0002bf0b) popup_call6_1st_window_t

0xc24f,	// (0x000283e5) bg_popup_call2_in_pane_cp04

0x14fe,	// (0x0001d694) popup_call6_2nd_window_g1

0x1506,	// (0x0001d69c) popup_call6_2nd_window_g2

0x150e,	// (0x0001d6a4) popup_call6_2nd_window_g3

0x0002,

0xfd7c,	// (0x0002bf12) popup_call6_2nd_window_g

0x1516,	// (0x0001d6ac) popup_call6_2nd_window_t1

0x2d01,	// (0x0001ee97) bg_button_pane_cp15

0x430c,	// (0x000204a2) cell_call6_btn_pane_g1

0x4315,	// (0x000204ab) cell_call6_btn_pane_t1

0xa18c,	// (0x00026322) listscroll_wgtman_pane_ParamLimits

0xa18c,	// (0x00026322) listscroll_wgtman_pane

0xa1a8,	// (0x0002633e) wgtman_btn_pane_ParamLimits

0xa1a8,	// (0x0002633e) wgtman_btn_pane

0xca41,	// (0x00028bd7) aid_scroll_copy1

0x153d,	// (0x0001d6d3) list_wgtman_pane

0xa1dd,	// (0x00026373) wgtman_btn_pane_g1_ParamLimits

0xa1dd,	// (0x00026373) wgtman_btn_pane_g1

0xa205,	// (0x0002639b) wgtman_btn_pane_t1_ParamLimits

0xa205,	// (0x0002639b) wgtman_btn_pane_t1

0x1547,	// (0x0001d6dd) wgtman_btn_pane_t2_ParamLimits

0x1547,	// (0x0001d6dd) wgtman_btn_pane_t2

0x0001,

0xfd83,	// (0x0002bf19) wgtman_btn_pane_t_ParamLimits

0xfd83,	// (0x0002bf19) wgtman_btn_pane_t

0xa23c,	// (0x000263d2) listrow_wgtman_pane_ParamLimits

0xa23c,	// (0x000263d2) listrow_wgtman_pane

0xa253,	// (0x000263e9) listrow_wgtman_pane_g1

0xa260,	// (0x000263f6) listrow_wgtman_pane_g2

0x0001,

0xfd88,	// (0x0002bf1e) listrow_wgtman_pane_g

0xa27e,	// (0x00026414) listrow_wgtman_pane_t1

0xa296,	// (0x0002642c) listrow_wgtman_pane_t2

0x0001,

0xfd8d,	// (0x0002bf23) listrow_wgtman_pane_t

0xa2bc,	// (0x00026452) wait_bar_pane_cp09

0x155e,	// (0x0001d6f4) main_calllock_btn_pane

0x1568,	// (0x0001d6fe) main_calllock_pane_g1

0xb8d1,	// (0x00027a67) bg_button_pane_cp17

0x1525,	// (0x0001d6bb) main_calllock_btn_pane_g1

0x1574,	// (0x0001d70a) main_calllock_btn_pane_t1

0xb8d1,	// (0x00027a67) main_dialer3_pane

0xb8d1,	// (0x00027a67) main_fmrd2_pane

0xc045,	// (0x000281db) main_fs_bigclock_unlock_btn_pane_g1

0xa2d6,	// (0x0002646c) main_fs_bigclock_unlock_btn_pane_t1

0xa2e4,	// (0x0002647a) area_fmrd2_info_pane_ParamLimits

0xa2e4,	// (0x0002647a) area_fmrd2_info_pane

0xa2f0,	// (0x00026486) area_fmrd2_visual_pane_ParamLimits

0xa2f0,	// (0x00026486) area_fmrd2_visual_pane

0xa2fe,	// (0x00026494) fmrd2_indi_pane_ParamLimits

0xa2fe,	// (0x00026494) fmrd2_indi_pane

0xa30b,	// (0x000264a1) area_fmrd2_visual_pane_g1

0xa313,	// (0x000264a9) area_fmrd2_visual_pane_t1

0xa323,	// (0x000264b9) area_fmrd2_visual_pane_t2

0xa333,	// (0x000264c9) area_fmrd2_visual_pane_t3

0x0002,

0xfd97,	// (0x0002bf2d) area_fmrd2_visual_pane_t

0xa343,	// (0x000264d9) area_fmrd2_info_pane_g1

0xa34b,	// (0x000264e1) area_fmrd2_info_pane_t1

0xa35b,	// (0x000264f1) area_fmrd2_info_pane_t2

0xa36b,	// (0x00026501) area_fmrd2_info_pane_t3

0xa37b,	// (0x00026511) area_fmrd2_info_pane_t4

0x0003,

0xfd9e,	// (0x0002bf34) area_fmrd2_info_pane_t

0xa38b,	// (0x00026521) fmrd2_indi_pane_t1

0xa39b,	// (0x00026531) fmrd2_indi_pane_t2

0xa3ab,	// (0x00026541) fmrd2_indi_pane_t3

0x0002,

0xfda7,	// (0x0002bf3d) fmrd2_indi_pane_t

0x9309,	// (0x0002549f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x9309,	// (0x0002549f) list_single_fs_bigclock_indicator_pane_g5

0x93be,	// (0x00025554) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x93be,	// (0x00025554) list_single_fs_bigclock_indicator_pane_t5

0x9b21,	// (0x00025cb7) aid_cell_bcale_month_pane_ParamLimits

0x9b21,	// (0x00025cb7) aid_cell_bcale_month_pane

0x9b3f,	// (0x00025cd5) bcale_month_pane_ParamLimits

0x9b3f,	// (0x00025cd5) bcale_month_pane

0x9b5d,	// (0x00025cf3) bcale_preview_pane_ParamLimits

0x9b5d,	// (0x00025cf3) bcale_preview_pane

0x12fd,	// (0x0001d493) list_single_fs_bigclock_pane_t1_ParamLimits

0x131c,	// (0x0001d4b2) list_single_fs_bigclock_pane_t2_ParamLimits

0x131c,	// (0x0001d4b2) list_single_fs_bigclock_pane_t2

0x0001,

0xfd22,	// (0x0002beb8) list_single_fs_bigclock_pane_t_ParamLimits

0xfd22,	// (0x0002beb8) list_single_fs_bigclock_pane_t

0xa2ce,	// (0x00026464) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd92,	// (0x0002bf28) main_fs_bigclock_unlock_btn_pane_g

0xa3bb,	// (0x00026551) aid_dia3_key_size_ParamLimits

0xa3bb,	// (0x00026551) aid_dia3_key_size

0xa3c7,	// (0x0002655d) aid_dia3_listrow_size_ParamLimits

0xa3c7,	// (0x0002655d) aid_dia3_listrow_size

0xa3d7,	// (0x0002656d) dia3_keypad_fun_pane_ParamLimits

0xa3d7,	// (0x0002656d) dia3_keypad_fun_pane

0xa3e7,	// (0x0002657d) dia3_keypad_num_pane_ParamLimits

0xa3e7,	// (0x0002657d) dia3_keypad_num_pane

0xa3f7,	// (0x0002658d) dia3_listscroll_pane_ParamLimits

0xa3f7,	// (0x0002658d) dia3_listscroll_pane

0xa405,	// (0x0002659b) dia3_numentry_pane_ParamLimits

0xa405,	// (0x0002659b) dia3_numentry_pane

0x1583,	// (0x0001d719) dia3_list_pane

0xa413,	// (0x000265a9) scroll_pane_cp12

0xb8d1,	// (0x00027a67) bg_dia3_numentry_pane

0xa41e,	// (0x000265b4) dia3_numentry_pane_t1

0xa42d,	// (0x000265c3) cell_dia3_key_num_pane

0xa435,	// (0x000265cb) cell_dia3_key0_fun_pane_ParamLimits

0xa435,	// (0x000265cb) cell_dia3_key0_fun_pane

0xa442,	// (0x000265d8) cell_dia3_key1_fun_pane_ParamLimits

0xa442,	// (0x000265d8) cell_dia3_key1_fun_pane

0xa44f,	// (0x000265e5) dia3_listrow_pane

0x06f1,	// (0x0001c887) bg_dia3_numentry_pane_g1

0xb8d1,	// (0x00027a67) bg_button_pane_cp21

0xa45c,	// (0x000265f2) cell_dia3_key_num_pane_t1

0xa46a,	// (0x00026600) cell_dia3_key_num_pane_t2

0xa479,	// (0x0002660f) cell_dia3_key_num_pane_t3

0xa488,	// (0x0002661e) cell_dia3_key_num_pane_t4

0x0003,

0xfdae,	// (0x0002bf44) cell_dia3_key_num_pane_t

0xb8d1,	// (0x00027a67) bg_button_pane_cp19

0xa497,	// (0x0002662d) cell_dia3_key0_fun_pane_g1

0xb8d1,	// (0x00027a67) bg_button_pane_cp20

0xa49f,	// (0x00026635) cell_dia3_key1_fun_pane_g1

0xa4a7,	// (0x0002663d) area_left_week_number_pane

0xa4ba,	// (0x00026650) area_top_day_name_pane

0xa4c8,	// (0x0002665e) frame_month_view_pane

0x158e,	// (0x0001d724) grid_month_view_pane

0xa4dd,	// (0x00026673) cell_top_day_name_pane_ParamLimits

0xa4dd,	// (0x00026673) cell_top_day_name_pane

0xa4f9,	// (0x0002668f) cell_area_left_week_number_pane_ParamLimits

0xa4f9,	// (0x0002668f) cell_area_left_week_number_pane

0xa51a,	// (0x000266b0) cell_month_view_pane_ParamLimits

0xa51a,	// (0x000266b0) cell_month_view_pane

0x159c,	// (0x0001d732) frm_month_g1

0xa546,	// (0x000266dc) frm_month_g2

0xa557,	// (0x000266ed) frm_month_g3

0xa568,	// (0x000266fe) frm_month_g4

0xa579,	// (0x0002670f) frm_month_g5

0xa58a,	// (0x00026720) frm_month_g6

0xa59d,	// (0x00026733) frm_month_g7

0x15a9,	// (0x0001d73f) frm_month_g8

0xa5b0,	// (0x00026746) frm_month_g9

0xa5bd,	// (0x00026753) frm_month_g10

0xa5ca,	// (0x00026760) frm_month_g11

0xa5d7,	// (0x0002676d) frm_month_g12

0xa5e4,	// (0x0002677a) frm_month_g13

0xa5f3,	// (0x00026789) frm_month_g14

0xa602,	// (0x00026798) frm_month_g15

0xa611,	// (0x000267a7) frm_month_g16

0x000f,

0xfdb7,	// (0x0002bf4d) frm_month_g

0x15b6,	// (0x0001d74c) cell_top_day_name_pane_t1

0xa620,	// (0x000267b6) cell_area_left_week_number_pane_g1

0xa62f,	// (0x000267c5) cell_area_left_week_number_pane_t1

0xc007,	// (0x0002819d) cell_month_view_pane_g1

0xa645,	// (0x000267db) cell_month_view_pane_t1

0xb8d1,	// (0x00027a67) main_fps_pane

0x0ab9,	// (0x0001cc4f) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x0ab9,	// (0x0001cc4f) cmail_ddmenu_btn02_pane_cp1

0x0ad5,	// (0x0001cc6b) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x0ad5,	// (0x0001cc6b) cmail_ddmenu_btn02_pane_cp2

0x9df5,	// (0x00025f8b) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9df5,	// (0x00025f8b) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcd5,	// (0x0002be6b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcd5,	// (0x0002be6b) cmail_ddmenu_btn02_pane_g

0x9e13,	// (0x00025fa9) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9e13,	// (0x00025fa9) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcda,	// (0x0002be70) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcda,	// (0x0002be70) cmail_ddmenu_btn02_pane_t

0xa65b,	// (0x000267f1) fps_text_pane_ParamLimits

0xa65b,	// (0x000267f1) fps_text_pane

0xa668,	// (0x000267fe) main_fps_pane_g1_ParamLimits

0xa668,	// (0x000267fe) main_fps_pane_g1

0xa674,	// (0x0002680a) wait_bar_pane_cp010_ParamLimits

0xa674,	// (0x0002680a) wait_bar_pane_cp010

0xa680,	// (0x00026816) fps_text_pane_t1_ParamLimits

0xa680,	// (0x00026816) fps_text_pane_t1

0x7b7b,	// (0x00023d11) cam4_image_uncrop_pane_g1

0x7b84,	// (0x00023d1a) cam4_image_uncrop_pane_g2

0x7b8d,	// (0x00023d23) cam4_image_uncrop_pane_g3

0x7b96,	// (0x00023d2c) cam4_image_uncrop_pane_g4

0x0003,

0xf81b,	// (0x0002b9b1) cam4_image_uncrop_pane_g

0xa44f,	// (0x000265e5) dia3_listrow_pane_ParamLimits

0xb8d1,	// (0x00027a67) main_phob2_pane

0x98fa,	// (0x00025a90) cell_tport_appsw_pane_cp02_ParamLimits

0x98fa,	// (0x00025a90) cell_tport_appsw_pane_cp02

0x9909,	// (0x00025a9f) cell_tport_appsw_pane_cp03_ParamLimits

0x9909,	// (0x00025a9f) cell_tport_appsw_pane_cp03

0xb8d1,	// (0x00027a67) phob2_contact_card_pane

0xb8d1,	// (0x00027a67) phob2_listscroll_pane

0x15c9,	// (0x0001d75f) phob2_list_pane

0x15d1,	// (0x0001d767) scroll_pane_cp034

0xa699,	// (0x0002682f) phob2_cc_data_pane_ParamLimits

0xa699,	// (0x0002682f) phob2_cc_data_pane

0xa6b0,	// (0x00026846) phob2_cc_listscroll_pane_ParamLimits

0xa6b0,	// (0x00026846) phob2_cc_listscroll_pane

0xa6cc,	// (0x00026862) list_double_large_graphic_phob2_pane_ParamLimits

0xa6cc,	// (0x00026862) list_double_large_graphic_phob2_pane

0xa6e0,	// (0x00026876) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa6e0,	// (0x00026876) list_double_large_graphic_phob2_pane_g1

0xa6ed,	// (0x00026883) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xa6ed,	// (0x00026883) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdd8,	// (0x0002bf6e) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdd8,	// (0x0002bf6e) list_double_large_graphic_phob2_pane_g

0xa713,	// (0x000268a9) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xa713,	// (0x000268a9) list_double_large_graphic_phob2_pane_t1

0xa728,	// (0x000268be) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xa728,	// (0x000268be) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfde1,	// (0x0002bf77) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfde1,	// (0x0002bf77) list_double_large_graphic_phob2_pane_t

0xb8d1,	// (0x00027a67) list_highlight_pane_cp024

0xa73d,	// (0x000268d3) phob2_cc_button_pane

0xa747,	// (0x000268dd) phob2_cc_data_pane_g1_ParamLimits

0xa747,	// (0x000268dd) phob2_cc_data_pane_g1

0xa75a,	// (0x000268f0) phob2_cc_data_pane_g2_ParamLimits

0xa75a,	// (0x000268f0) phob2_cc_data_pane_g2

0x0001,

0xfde6,	// (0x0002bf7c) phob2_cc_data_pane_g_ParamLimits

0xfde6,	// (0x0002bf7c) phob2_cc_data_pane_g

0xa76e,	// (0x00026904) phob2_cc_data_pane_t1_ParamLimits

0xa76e,	// (0x00026904) phob2_cc_data_pane_t1

0xa78f,	// (0x00026925) phob2_cc_data_pane_t2_ParamLimits

0xa78f,	// (0x00026925) phob2_cc_data_pane_t2

0xa7b0,	// (0x00026946) phob2_cc_data_pane_t3_ParamLimits

0xa7b0,	// (0x00026946) phob2_cc_data_pane_t3

0x0002,

0xfdeb,	// (0x0002bf81) phob2_cc_data_pane_t_ParamLimits

0xfdeb,	// (0x0002bf81) phob2_cc_data_pane_t

0x15d9,	// (0x0001d76f) phob2_cc_list_pane_ParamLimits

0x15d9,	// (0x0001d76f) phob2_cc_list_pane

0x008a,	// (0x0001c220) scroll_pane_cp035_ParamLimits

0x008a,	// (0x0001c220) scroll_pane_cp035

0xbfa0,	// (0x00028136) bg_button_pane_cp033

0xa7d1,	// (0x00026967) phob2_cc_button_pane_g1

0xa7dd,	// (0x00026973) phob2_cc_button_pane_t1

0xa7f2,	// (0x00026988) phob2_cc_button_pane_t2

0x0001,

0xfdf2,	// (0x0002bf88) phob2_cc_button_pane_t

0xa804,	// (0x0002699a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa804,	// (0x0002699a) list_double_large_graphic_phob2_cc_pane

0xa851,	// (0x000269e7) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa851,	// (0x000269e7) list_double_large_graphic_phob2_cc_pane_g1

0xa862,	// (0x000269f8) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa862,	// (0x000269f8) list_double_large_graphic_phob2_cc_pane_g2

0xa871,	// (0x00026a07) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xa871,	// (0x00026a07) list_double_large_graphic_phob2_cc_pane_g3

0xa880,	// (0x00026a16) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xa880,	// (0x00026a16) list_double_large_graphic_phob2_cc_pane_g4

0xa891,	// (0x00026a27) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa891,	// (0x00026a27) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdf7,	// (0x0002bf8d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdf7,	// (0x0002bf8d) list_double_large_graphic_phob2_cc_pane_g

0xa8a0,	// (0x00026a36) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xa8a0,	// (0x00026a36) list_double_large_graphic_phob2_cc_pane_t1

0xa8c9,	// (0x00026a5f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xa8c9,	// (0x00026a5f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe02,	// (0x0002bf98) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe02,	// (0x0002bf98) list_double_large_graphic_phob2_cc_pane_t

0x15e5,	// (0x0001d77b) list_highlight_pane_cp025_ParamLimits

0x15e5,	// (0x0001d77b) list_highlight_pane_cp025

0xbfa0,	// (0x00028136) bg_button_pane_cp033_ParamLimits

0xa7d1,	// (0x00026967) phob2_cc_button_pane_g1_ParamLimits

0xa7dd,	// (0x00026973) phob2_cc_button_pane_t1_ParamLimits

0xa7f2,	// (0x00026988) phob2_cc_button_pane_t2_ParamLimits

0xfdf2,	// (0x0002bf88) phob2_cc_button_pane_t_ParamLimits

0x4396,	// (0x0002052c) popup_wgtman_window

0xec01,	// (0x0002ad97) scroll_pane_cp038

0xa1c5,	// (0x0002635b) wgtman_btn_pane_cp_01_ParamLimits

0xa1c5,	// (0x0002635b) wgtman_btn_pane_cp_01

0x15f3,	// (0x0001d789) wgtman_content_pane

0x15fc,	// (0x0001d792) wgtman_heading_pane

0xb8d1,	// (0x00027a67) bg_heading_pane_cp02

0x1605,	// (0x0001d79b) wgtman_heading_pane_g1

0x160d,	// (0x0001d7a3) wgtman_heading_pane_t1

0x161b,	// (0x0001d7b1) scroll_pane_cp036

0x1623,	// (0x0001d7b9) wgtman_list_pane

0x09c1,	// (0x0001cb57) wgtman_list_pane_t1_ParamLimits

0x09c1,	// (0x0001cb57) wgtman_list_pane_t1

0x3af1,	// (0x0001fc87) cam4_grid_pane

0x82e6,	// (0x0002447c) bg_button_pane_cp015_ParamLimits

0x82fb,	// (0x00024491) bg_button_pane_cp016_ParamLimits

0x8307,	// (0x0002449d) bg_button_pane_cp017_ParamLimits

0x8360,	// (0x000244f6) popup_vitu2_query_window_g3_ParamLimits

0x8360,	// (0x000244f6) popup_vitu2_query_window_g3

0x8401,	// (0x00024597) popup_vitu2_query_window_t6_ParamLimits

0x8401,	// (0x00024597) popup_vitu2_query_window_t6

0x842c,	// (0x000245c2) popup_vitu2_query_window_t7_ParamLimits

0x842c,	// (0x000245c2) popup_vitu2_query_window_t7

0x0076,	// (0x0001c20c) cam4_grid_pane_g1

0x007f,	// (0x0001c215) cam4_grid_pane_g2

0x162b,	// (0x0001d7c1) cam4_grid_pane_g3

0x1634,	// (0x0001d7ca) cam4_grid_pane_g4

0x0003,

0xfe07,	// (0x0002bf9d) cam4_grid_pane_g

0x4c36,	// (0x00020dcc) aid_placing_vt_slider_lsc_ParamLimits

0x4f69,	// (0x000210ff) vidtel_button_pane_ParamLimits

0x4f69,	// (0x000210ff) vidtel_button_pane

0xb8d1,	// (0x00027a67) bg_button_pane_cp034

0x163f,	// (0x0001d7d5) vidtel_button_pane_g1

0x1647,	// (0x0001d7dd) vidtel_button_pane_t1

0xed18,	// (0x0002aeae) aid_size_vtel_slider_touch

0x008a,	// (0x0001c220) scroll_pane_cp039

0x902b,	// (0x000251c1) ncim_query_button_pane_cp01_ParamLimits

0x904a,	// (0x000251e0) ncimui_query_pane_g1_ParamLimits

0xbfa0,	// (0x00028136) input_focus_pane_cp012_ParamLimits

0x072f,	// (0x0001c8c5) ncim_query_entry_pane_t1_ParamLimits

0x008a,	// (0x0001c220) scroll_pane_cp039_ParamLimits

0x602d,	// (0x000221c3) navi_pane_bcale_mc_g1

0x6035,	// (0x000221cb) navi_pane_bcale_mc_t1

0x0b0b,	// (0x0001cca1) main_sp_fs_email_pane_g1

0x0b17,	// (0x0001ccad) main_sp_fs_email_pane_g2

0x0001,

0xfc05,	// (0x0002bd9b) main_sp_fs_email_pane_g

0x0f61,	// (0x0001d0f7) list_single_cale_mrui_row_pane_g3_ParamLimits

0x0f61,	// (0x0001d0f7) list_single_cale_mrui_row_pane_g3

0x9e33,	// (0x00025fc9) list_single_recal_day_pane_g5_event_pane

0x1165,	// (0x0001d2fb) list_single_recal_day_pane_g7

0x165d,	// (0x0001d7f3) list_recal_day_event_pane_cp01

0x1666,	// (0x0001d7fc) list_recal_vselct_arw_lo_pane_cp01

0x166e,	// (0x0001d804) list_recal_vselct_arw_up_pane_cp01

0x1676,	// (0x0001d80c) list_recal_vselct_pane_cp01

0xed3a,	// (0x0002aed0) list_recal_day_event_pane_cp01_g1

0x1680,	// (0x0001d816) list_recal_day_event_pane_cp01_t1

0x116d,	// (0x0001d303) list_single_recal_day_pane_t1_ParamLimits

0x117f,	// (0x0001d315) list_single_recal_day_pane_t2_ParamLimits

0xfcea,	// (0x0002be80) list_single_recal_day_pane_t_ParamLimits

0xbf7e,	// (0x00028114) bg_notes_pane_ParamLimits

0xc081,	// (0x00028217) list_notes_pane_ParamLimits

0x43c6,	// (0x0002055c) scroll_pane_cp06_ParamLimits

0xc0a3,	// (0x00028239) main_notes_pane_ParamLimits

0xbfa0,	// (0x00028136) main_welc_pane

0xa914,	// (0x00026aaa) main_welc_body_pane_ParamLimits

0xa914,	// (0x00026aaa) main_welc_body_pane

0xa92f,	// (0x00026ac5) main_welc_opti_pane_ParamLimits

0xa92f,	// (0x00026ac5) main_welc_opti_pane

0xa996,	// (0x00026b2c) main_welc_pane_t1_ParamLimits

0xa996,	// (0x00026b2c) main_welc_pane_t1

0x1373,	// (0x0001d509) main_welc_body_row_pane_ParamLimits

0x1373,	// (0x0001d509) main_welc_body_row_pane

0xbff9,	// (0x0002818f) main_welc_opti_row_pane_ParamLimits

0xbff9,	// (0x0002818f) main_welc_opti_row_pane

0x169e,	// (0x0001d834) main_welc_opti_row_pane_g1

0xab3c,	// (0x00026cd2) main_welc_opti_row_pane_t1

0x16a6,	// (0x0001d83c) main_welc_body_row_pane_t1

0x13f7,	// (0x0001d58d) popup_notif_wgt_heading_pane

0x1411,	// (0x0001d5a7) aid_size_list_notif_wgt_del_ParamLimits

0x141e,	// (0x0001d5b4) list_notif_wgt_row_pane_g1_ParamLimits

0x142a,	// (0x0001d5c0) list_notif_wgt_row_pane_g2_ParamLimits

0x1439,	// (0x0001d5cf) list_notif_wgt_row_pane_g3_ParamLimits

0xfd51,	// (0x0002bee7) list_notif_wgt_row_pane_g_ParamLimits

0x1446,	// (0x0001d5dc) list_notif_wgt_row_pane_t1_ParamLimits

0x145c,	// (0x0001d5f2) list_notif_wgt_row_pane_t2_ParamLimits

0x146e,	// (0x0001d604) list_notif_wgt_row_pane_t3_ParamLimits

0xfd58,	// (0x0002beee) list_notif_wgt_row_pane_t_ParamLimits

0xa253,	// (0x000263e9) listrow_wgtman_pane_g1_ParamLimits

0xa260,	// (0x000263f6) listrow_wgtman_pane_g2_ParamLimits

0xfd88,	// (0x0002bf1e) listrow_wgtman_pane_g_ParamLimits

0xa27e,	// (0x00026414) listrow_wgtman_pane_t1_ParamLimits

0xa296,	// (0x0002642c) listrow_wgtman_pane_t2_ParamLimits

0xfd8d,	// (0x0002bf23) listrow_wgtman_pane_t_ParamLimits

0xa2bc,	// (0x00026452) wait_bar_pane_cp09_ParamLimits

0xb8d1,	// (0x00027a67) bg_popup_heading_pane_cp02

0x16b5,	// (0x0001d84b) popup_notif_wgt_heading_pane_g1

0x16bd,	// (0x0001d853) popup_notif_wgt_heading_pane_t1

0xb8d1,	// (0x00027a67) main_vids_pane

0xb8d1,	// (0x00027a67) vids_listscroll_pane

0xab4b,	// (0x00026ce1) scroll_pane_cp040

0xb8d1,	// (0x00027a67) vids_list_pane

0xab56,	// (0x00026cec) vids_list_double_pane_ParamLimits

0xab56,	// (0x00026cec) vids_list_double_pane

0xab6a,	// (0x00026d00) vids_list_double_pane_g1

0xab73,	// (0x00026d09) vids_list_double_pane_t1

0xab83,	// (0x00026d19) vids_list_double_pane_t2

0x0001,

0xfe26,	// (0x0002bfbc) vids_list_double_pane_t

0x31cb,	// (0x0001f361) main_ncimui_pane_ParamLimits

0x8e6c,	// (0x00025002) main_ncimui_pane_g1_ParamLimits

0x8e7a,	// (0x00025010) main_ncimui_pane_g2_ParamLimits

0x8e7a,	// (0x00025010) main_ncimui_pane_g2

0x0001,

0xfb06,	// (0x0002bc9c) main_ncimui_pane_g_ParamLimits

0xfb06,	// (0x0002bc9c) main_ncimui_pane_g

0xa94a,	// (0x00026ae0) main_welc_pane_g1_ParamLimits

0xa94a,	// (0x00026ae0) main_welc_pane_g1

0xa956,	// (0x00026aec) main_welc_pane_g2_ParamLimits

0xa956,	// (0x00026aec) main_welc_pane_g2

0x0003,

0xfe10,	// (0x0002bfa6) main_welc_pane_g_ParamLimits

0xfe10,	// (0x0002bfa6) main_welc_pane_g

0xbf7e,	// (0x00028114) listscroll_mce_pane_ParamLimits

0x60f7,	// (0x0002228d) wait_bar_pane_cp10

0xde5e,	// (0x00029ff4) main_cale_day_pane_ParamLimits

0xde5e,	// (0x00029ff4) main_cale_week_pane_ParamLimits

0xbf7e,	// (0x00028114) main_messa_pane_ParamLimits

0x76d7,	// (0x0002386d) main_clock2_btn_pane_ParamLimits

0x76d7,	// (0x0002386d) main_clock2_btn_pane

0xe625,	// (0x0002a7bb) main_clock2_btn_pane_cp01_ParamLimits

0xe625,	// (0x0002a7bb) main_clock2_btn_pane_cp01

0x0eed,	// (0x0001d083) list_cale_mrui_pane_ParamLimits

0x14a4,	// (0x0001d63a) main_cf0_pane_g2

0x0001,

0xfd5f,	// (0x0002bef5) main_cf0_pane_g

0xa4a7,	// (0x0002663d) area_left_week_number_pane_ParamLimits

0xa4ba,	// (0x00026650) area_top_day_name_pane_ParamLimits

0xa4c8,	// (0x0002665e) frame_month_view_pane_ParamLimits

0x158e,	// (0x0001d724) grid_month_view_pane_ParamLimits

0x159c,	// (0x0001d732) frm_month_g1_ParamLimits

0xa546,	// (0x000266dc) frm_month_g2_ParamLimits

0xa557,	// (0x000266ed) frm_month_g3_ParamLimits

0xa568,	// (0x000266fe) frm_month_g4_ParamLimits

0xa579,	// (0x0002670f) frm_month_g5_ParamLimits

0xa58a,	// (0x00026720) frm_month_g6_ParamLimits

0xa59d,	// (0x00026733) frm_month_g7_ParamLimits

0x15a9,	// (0x0001d73f) frm_month_g8_ParamLimits

0xa5b0,	// (0x00026746) frm_month_g9_ParamLimits

0xa5bd,	// (0x00026753) frm_month_g10_ParamLimits

0xa5ca,	// (0x00026760) frm_month_g11_ParamLimits

0xa5d7,	// (0x0002676d) frm_month_g12_ParamLimits

0xa5e4,	// (0x0002677a) frm_month_g13_ParamLimits

0xa5f3,	// (0x00026789) frm_month_g14_ParamLimits

0xa602,	// (0x00026798) frm_month_g15_ParamLimits

0xa611,	// (0x000267a7) frm_month_g16_ParamLimits

0xfdb7,	// (0x0002bf4d) frm_month_g_ParamLimits

0x15b6,	// (0x0001d74c) cell_top_day_name_pane_t1_ParamLimits

0xa620,	// (0x000267b6) cell_area_left_week_number_pane_g1_ParamLimits

0xa62f,	// (0x000267c5) cell_area_left_week_number_pane_t1_ParamLimits

0xc007,	// (0x0002819d) cell_month_view_pane_g1_ParamLimits

0xa645,	// (0x000267db) cell_month_view_pane_t1_ParamLimits

0xbf76,	// (0x0002810c) main_clock2_btn_pane_g1

0x16cb,	// (0x0001d861) main_clock2_btn_pane_t1

0xbfa0,	// (0x00028136) listscroll_cmail_pane_ParamLimits

0x0b0b,	// (0x0001cca1) main_sp_fs_email_pane_g1_ParamLimits

0x0b17,	// (0x0001ccad) main_sp_fs_email_pane_g2_ParamLimits

0xfc05,	// (0x0002bd9b) main_sp_fs_email_pane_g_ParamLimits

0x10d4,	// (0x0001d26a) list_recal_day_pane_ParamLimits

0x10e5,	// (0x0001d27b) mian_recal_day_pane_t1

0x97de,	// (0x00025974) list_single_dyc_row_text_pane_t4_ParamLimits

0x97de,	// (0x00025974) list_single_dyc_row_text_pane_t4

0x981d,	// (0x000259b3) list_single_dyc_row_text_pane_t5_ParamLimits

0x981d,	// (0x000259b3) list_single_dyc_row_text_pane_t5

0x0bc1,	// (0x0001cd57) list_single_dyc_row_text_pane_t6_ParamLimits

0x0bc1,	// (0x0001cd57) list_single_dyc_row_text_pane_t6

0x5cc5,	// (0x00021e5b) aid_mgn_list_cale_time_pane

0x31cb,	// (0x0001f361) main_gallery2_pane_ParamLimits

0xe639,	// (0x0002a7cf) main_clock2_pane_cp01_t1

0xe647,	// (0x0002a7dd) main_clock2_pane_cp01_t3

0x0001,

0xf6fc,	// (0x0002b892) main_clock2_pane_cp01_t

0x4793,	// (0x00020929) cale_week_scroll_pane_g16_ParamLimits

0x4793,	// (0x00020929) cale_week_scroll_pane_g16

0xc24f,	// (0x000283e5) vorec_slider_pane

0x1647,	// (0x0001d7dd) vidtel_button_pane_t1_ParamLimits

0x9e8e,	// (0x00026024) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9e8e,	// (0x00026024) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9e9d,	// (0x00026033) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9e9d,	// (0x00026033) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd0d,	// (0x0002bea3) main_fs_bigclock_clock_pane_g_ParamLimits

0x9ead,	// (0x00026043) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9ec2,	// (0x00026058) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd16,	// (0x0002beac) main_fs_bigclock_clock_pane_t_ParamLimits

0x7021,	// (0x000231b7) main_mup3_lyrics_pane_ParamLimits

0x7021,	// (0x000231b7) main_mup3_lyrics_pane

0xab93,	// (0x00026d29) main_mup3_lyrics_pane_t1_ParamLimits

0xab93,	// (0x00026d29) main_mup3_lyrics_pane_t1

0x3589,	// (0x0001f71f) aid_main_mp4_pane_t1_area

0x3593,	// (0x0001f729) aid_main_mp4_pane_t2_area

0x369a,	// (0x0001f830) main_mp4_pane_g7_ParamLimits

0x369a,	// (0x0001f830) main_mp4_pane_g7

0x36a6,	// (0x0001f83c) main_mp4_pane_g8_ParamLimits

0x36a6,	// (0x0001f83c) main_mp4_pane_g8

0x7ac1,	// (0x00023c57) aid_call6_pane_g1_size

0xa830,	// (0x000269c6) list_double_large_graphic_phob2_other_pane_ParamLimits

0xa830,	// (0x000269c6) list_double_large_graphic_phob2_other_pane

0xabba,	// (0x00026d50) list_double_large_graphic_phob2_other_pane_g1

0xb8d1,	// (0x00027a67) list_highlight_pane_cp026

0xbfa0,	// (0x00028136) main_welc_pane_ParamLimits

0x963d,	// (0x000257d3) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x963d,	// (0x000257d3) main_sp_fs_ctrlbar_pane_g3

0x9657,	// (0x000257ed) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x9657,	// (0x000257ed) main_sp_fs_ctrlbar_pane_g4

0x9689,	// (0x0002581f) toolbar2_fixed_button_pane_cp01

0x9694,	// (0x0002582a) toolbar2_fixed_button_pane_cp02

0x96a1,	// (0x00025837) toolbar2_fixed_button_pane_cp03

0xa904,	// (0x00026a9a) list_welc_entry_pane_ParamLimits

0xa904,	// (0x00026a9a) list_welc_entry_pane

0xa964,	// (0x00026afa) main_welc_pane_g3_ParamLimits

0xa964,	// (0x00026afa) main_welc_pane_g3

0xa9b4,	// (0x00026b4a) main_welc_pane_t2_ParamLimits

0xa9b4,	// (0x00026b4a) main_welc_pane_t2

0xa9c8,	// (0x00026b5e) main_welc_pane_t3_ParamLimits

0xa9c8,	// (0x00026b5e) main_welc_pane_t3

0x0005,

0xfe19,	// (0x0002bfaf) main_welc_pane_t_ParamLimits

0xfe19,	// (0x0002bfaf) main_welc_pane_t

0xaac4,	// (0x00026c5a) welc_button_pane_ParamLimits

0xaac4,	// (0x00026c5a) welc_button_pane

0xab2e,	// (0x00026cc4) welc_service_logo_pane_ParamLimits

0xab2e,	// (0x00026cc4) welc_service_logo_pane

0xabc2,	// (0x00026d58) list_single_welc_entry_pane_ParamLimits

0xabc2,	// (0x00026d58) list_single_welc_entry_pane

0xabd3,	// (0x00026d69) list_single_welc_entry_pane_g1

0xabdb,	// (0x00026d71) list_single_welc_entry_pane_t1

0xabe9,	// (0x00026d7f) list_single_welc_entry_pane_t2

0x0001,

0xfe2b,	// (0x0002bfc1) list_single_welc_entry_pane_t

0xb8d1,	// (0x00027a67) bg_button_pane_cp035

0x16e7,	// (0x0001d87d) welc_button_pane_t1

0xabf7,	// (0x00026d8d) welc_service_logo_pane_g1

0xac00,	// (0x00026d96) welc_service_logo_pane_g2

0x0001,

0xfe30,	// (0x0002bfc6) welc_service_logo_pane_g

0x2d01,	// (0x0001ee97) main_int_radio_pane

0x05cd,	// (0x0001c763) list_single_fs_dyc_pane_g1

0xa6f9,	// (0x0002688f) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xa6f9,	// (0x0002688f) list_double_large_graphic_phob2_pane_g3

0xa705,	// (0x0002689b) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xa705,	// (0x0002689b) list_double_large_graphic_phob2_pane_g4

0xac09,	// (0x00026d9f) main_int_radio1_pane_ParamLimits

0xac09,	// (0x00026d9f) main_int_radio1_pane

0x16f5,	// (0x0001d88b) find_pane_cp02

0xac1f,	// (0x00026db5) input_focus_pane_cp12_ParamLimits

0xac1f,	// (0x00026db5) input_focus_pane_cp12

0xac2b,	// (0x00026dc1) input_focus_pane_cp13_ParamLimits

0xac2b,	// (0x00026dc1) input_focus_pane_cp13

0xac43,	// (0x00026dd9) input_focus_pane_cp14_ParamLimits

0xac43,	// (0x00026dd9) input_focus_pane_cp14

0x16fe,	// (0x0001d894) int_radio1_listscroll_pane

0xac5b,	// (0x00026df1) main_int_radio1_pane_g1_ParamLimits

0xac5b,	// (0x00026df1) main_int_radio1_pane_g1

0xac67,	// (0x00026dfd) main_int_radio1_pane_t1_ParamLimits

0xac67,	// (0x00026dfd) main_int_radio1_pane_t1

0xac79,	// (0x00026e0f) main_int_radio1_pane_t2_ParamLimits

0xac79,	// (0x00026e0f) main_int_radio1_pane_t2

0xac8d,	// (0x00026e23) main_int_radio1_pane_t3_ParamLimits

0xac8d,	// (0x00026e23) main_int_radio1_pane_t3

0xaca1,	// (0x00026e37) main_int_radio1_pane_t4_ParamLimits

0xaca1,	// (0x00026e37) main_int_radio1_pane_t4

0x1708,	// (0x0001d89e) main_int_radio1_pane_t5_ParamLimits

0x1708,	// (0x0001d89e) main_int_radio1_pane_t5

0xacb8,	// (0x00026e4e) main_int_radio1_pane_t6_ParamLimits

0xacb8,	// (0x00026e4e) main_int_radio1_pane_t6

0xacca,	// (0x00026e60) main_int_radio1_pane_t7_ParamLimits

0xacca,	// (0x00026e60) main_int_radio1_pane_t7

0xacdc,	// (0x00026e72) main_int_radio1_pane_t8_ParamLimits

0xacdc,	// (0x00026e72) main_int_radio1_pane_t8

0xacee,	// (0x00026e84) main_int_radio1_pane_t9_ParamLimits

0xacee,	// (0x00026e84) main_int_radio1_pane_t9

0xad00,	// (0x00026e96) main_int_radio1_pane_t10_ParamLimits

0xad00,	// (0x00026e96) main_int_radio1_pane_t10

0xad31,	// (0x00026ec7) main_int_radio1_pane_t11_ParamLimits

0xad31,	// (0x00026ec7) main_int_radio1_pane_t11

0xad62,	// (0x00026ef8) main_int_radio1_pane_t12_ParamLimits

0xad62,	// (0x00026ef8) main_int_radio1_pane_t12

0x000b,

0xfe35,	// (0x0002bfcb) main_int_radio1_pane_t_ParamLimits

0xfe35,	// (0x0002bfcb) main_int_radio1_pane_t

0x15c9,	// (0x0001d75f) int_radio_list_pane

0x15d1,	// (0x0001d767) scroll_pane_cp037

0x171a,	// (0x0001d8b0) list_double_large_graphic_int_radio_pane_ParamLimits

0x171a,	// (0x0001d8b0) list_double_large_graphic_int_radio_pane

0x172e,	// (0x0001d8c4) list_double_large_graphic_int_radio_pane_g1

0x1737,	// (0x0001d8cd) list_double_large_graphic_int_radio_pane_t1

0x1745,	// (0x0001d8db) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe4e,	// (0x0002bfe4) list_double_large_graphic_int_radio_pane_t

0xb8d1,	// (0x00027a67) list_highlight_pane_cp027

0x168e,	// (0x0001d824) main_button_pane_4

0xa970,	// (0x00026b06) main_welc_pane_g4_ParamLimits

0xa970,	// (0x00026b06) main_welc_pane_g4

0xa9da,	// (0x00026b70) main_welc_pane_t4_ParamLimits

0xa9da,	// (0x00026b70) main_welc_pane_t4

0xa9ec,	// (0x00026b82) main_welc_pane_t5_ParamLimits

0xa9ec,	// (0x00026b82) main_welc_pane_t5

0xaa1e,	// (0x00026bb4) main_welc_pane_t6_ParamLimits

0xaa1e,	// (0x00026bb4) main_welc_pane_t6

0xaad2,	// (0x00026c68) welc_button_pane_2_ParamLimits

0xaad2,	// (0x00026c68) welc_button_pane_2

0xaaf0,	// (0x00026c86) welc_button_pane_3_ParamLimits

0xaaf0,	// (0x00026c86) welc_button_pane_3

0x1696,	// (0x0001d82c) welc_button_pane_4

0xab10,	// (0x00026ca6) welc_button_pane_5_ParamLimits

0xab10,	// (0x00026ca6) welc_button_pane_5

0x2aa7,	// (0x0001ec3d) main_popup_welc_pane

0x176b,	// (0x0001d901) main_welc_sk_g3

0x1775,	// (0x0001d90b) main_welc_sk_g4

0x177f,	// (0x0001d915) main_welc_sk_t3

0x178f,	// (0x0001d925) main_welc_sk_t4

0x179f,	// (0x0001d935) popup_welc_pane_t4

0x17ad,	// (0x0001d943) popup_welc_pane_t5

0x17bb,	// (0x0001d951) popup_welc_pane_t6

0x2d01,	// (0x0001ee97) main_acti_pane

0xb8d1,	// (0x00027a67) main_sso_pane

0xad79,	// (0x00026f0f) sso_body_pane_ParamLimits

0xad79,	// (0x00026f0f) sso_body_pane

0xad88,	// (0x00026f1e) sso_logo_pane_ParamLimits

0xad88,	// (0x00026f1e) sso_logo_pane

0xadb7,	// (0x00026f4d) sso_sk_pane_ParamLimits

0xadb7,	// (0x00026f4d) sso_sk_pane

0x17fd,	// (0x0001d993) main_sso_logo_pane_g1

0xadc4,	// (0x00026f5a) sso_sk_pane_t1_ParamLimits

0xadc4,	// (0x00026f5a) sso_sk_pane_t1

0xadd8,	// (0x00026f6e) sso_sk_pane_t2_ParamLimits

0xadd8,	// (0x00026f6e) sso_sk_pane_t2

0x0001,

0xfe53,	// (0x0002bfe9) sso_sk_pane_t_ParamLimits

0xfe53,	// (0x0002bfe9) sso_sk_pane_t

0x1808,	// (0x0001d99e) aid_sso_gap

0x1811,	// (0x0001d9a7) aid_sso_txt1

0x181b,	// (0x0001d9b1) aid_sso_txt2

0x1825,	// (0x0001d9bb) aid_sso_txt3

0x0002,

0xfe58,	// (0x0002bfee) aid_sso_txt

0x182f,	// (0x0001d9c5) aid_sso_widget

0xae35,	// (0x00026fcb) sso_btn_pane_ParamLimits

0xae35,	// (0x00026fcb) sso_btn_pane

0xaea9,	// (0x0002703f) sso_option_pane_ParamLimits

0xaea9,	// (0x0002703f) sso_option_pane

0xaf5b,	// (0x000270f1) sso_query_pane_ParamLimits

0xaf5b,	// (0x000270f1) sso_query_pane

0xafab,	// (0x00027141) sso_query_pane_cp01_ParamLimits

0xafab,	// (0x00027141) sso_query_pane_cp01

0xb003,	// (0x00027199) sso_t_hdr_pane_ParamLimits

0xb003,	// (0x00027199) sso_t_hdr_pane

0xb027,	// (0x000271bd) sso_t_nml_pane_ParamLimits

0xb027,	// (0x000271bd) sso_t_nml_pane

0x1839,	// (0x0001d9cf) sso_t_sub_pane

0xad95,	// (0x00026f2b) sso_popup_window_ParamLimits

0xad95,	// (0x00026f2b) sso_popup_window

0xadea,	// (0x00026f80) sso_apps_pane_ParamLimits

0xadea,	// (0x00026f80) sso_apps_pane

0xae0d,	// (0x00026fa3) sso_body_pane_g1

0xae15,	// (0x00026fab) sso_body_pane_t1

0xae25,	// (0x00026fbb) sso_body_pane_t2

0x0001,

0xfe5f,	// (0x0002bff5) sso_body_pane_t

0xae79,	// (0x0002700f) sso_btn_pane_cp01_ParamLimits

0xae79,	// (0x0002700f) sso_btn_pane_cp01

0xaf2d,	// (0x000270c3) sso_prog_pane_ParamLimits

0xaf2d,	// (0x000270c3) sso_prog_pane

0xb077,	// (0x0002720d) sso_t_hdr_pane_t1_ParamLimits

0xb077,	// (0x0002720d) sso_t_hdr_pane_t1

0x184e,	// (0x0001d9e4) input_focus_pane_cp10_ParamLimits

0x184e,	// (0x0001d9e4) input_focus_pane_cp10

0x1862,	// (0x0001d9f8) sso_query_pane_t1_ParamLimits

0x1862,	// (0x0001d9f8) sso_query_pane_t1

0x1875,	// (0x0001da0b) sso_query_pane_t2_ParamLimits

0x1875,	// (0x0001da0b) sso_query_pane_t2

0x188f,	// (0x0001da25) sso_query_pane_t3_ParamLimits

0x188f,	// (0x0001da25) sso_query_pane_t3

0x18b9,	// (0x0001da4f) sso_query_pane_t4_ParamLimits

0x18b9,	// (0x0001da4f) sso_query_pane_t4

0x0003,

0xfe64,	// (0x0002bffa) sso_query_pane_t_ParamLimits

0xfe64,	// (0x0002bffa) sso_query_pane_t

0x1762,	// (0x0001d8f8) bg_button_pane_cp22

0x1753,	// (0x0001d8e9) sso_btn_pane_t1

0xb090,	// (0x00027226) sso_t_nml_pane_t1_ParamLimits

0xb090,	// (0x00027226) sso_t_nml_pane_t1

0x18dd,	// (0x0001da73) sso_option_row_pane_ParamLimits

0x18dd,	// (0x0001da73) sso_option_row_pane

0x18ea,	// (0x0001da80) sso_t_sub_pane_t1_ParamLimits

0x18ea,	// (0x0001da80) sso_t_sub_pane_t1

0xbfa0,	// (0x00028136) bg_popup_window_pane_cp11_ParamLimits

0xbfa0,	// (0x00028136) bg_popup_window_pane_cp11

0x1907,	// (0x0001da9d) popup_sk_window_cp01_ParamLimits

0x1907,	// (0x0001da9d) popup_sk_window_cp01

0x1914,	// (0x0001daaa) sso_popup_body_pane_ParamLimits

0x1914,	// (0x0001daaa) sso_popup_body_pane

0x1921,	// (0x0001dab7) scroll_pane_cp21_ParamLimits

0x1921,	// (0x0001dab7) scroll_pane_cp21

0x192e,	// (0x0001dac4) sso_popup_body_t_pane_ParamLimits

0x192e,	// (0x0001dac4) sso_popup_body_t_pane

0x193b,	// (0x0001dad1) sso_popup_body_t_hdr_pane_ParamLimits

0x193b,	// (0x0001dad1) sso_popup_body_t_hdr_pane

0xb0ad,	// (0x00027243) sso_popup_body_t_nml_pane_ParamLimits

0xb0ad,	// (0x00027243) sso_popup_body_t_nml_pane

0xb0cb,	// (0x00027261) sso_popup_body_t_sub_pane_ParamLimits

0xb0cb,	// (0x00027261) sso_popup_body_t_sub_pane

0x194d,	// (0x0001dae3) sso_popup_body_t_hdr_pane_t1

0xb0ee,	// (0x00027284) sso_popup_body_t_nml_pane_t1_ParamLimits

0xb0ee,	// (0x00027284) sso_popup_body_t_nml_pane_t1

0x195d,	// (0x0001daf3) sso_popup_body_t_sub_pane_t1_ParamLimits

0x195d,	// (0x0001daf3) sso_popup_body_t_sub_pane_t1

0xc045,	// (0x000281db) sso_prog_pane_g1

0xb138,	// (0x000272ce) sso_apps_pane_comp1_ParamLimits

0xb138,	// (0x000272ce) sso_apps_pane_comp1

0x1982,	// (0x0001db18) sso_apps_pane_comp1_g1

0x198a,	// (0x0001db20) sso_apps_pane_comp1_t1

0x19a6,	// (0x0001db3c) sso_option_row_pane_g1

0x19ae,	// (0x0001db44) sso_option_row_pane_t1

0x0c82,	// (0x0001ce18) list_cmail_pane_ParamLimits

0xb8d1,	// (0x00027a67) main_call7_pane

0xa8f2,	// (0x00026a88) bg_welc_area_ParamLimits

0xa8f2,	// (0x00026a88) bg_welc_area

0xaa54,	// (0x00026bea) sso_t_hdr_pane_a_t1_ParamLimits

0xaa54,	// (0x00026bea) sso_t_hdr_pane_a_t1

0xaa68,	// (0x00026bfe) sso_t_nml_pane_a_t1_ParamLimits

0xaa68,	// (0x00026bfe) sso_t_nml_pane_a_t1

0xaa92,	// (0x00026c28) sso_t_sub_pane_a_t1_ParamLimits

0xaa92,	// (0x00026c28) sso_t_sub_pane_a_t1

0xab20,	// (0x00026cb6) welc_button_pane_cp01_ParamLimits

0xab20,	// (0x00026cb6) welc_button_pane_cp01

0x1753,	// (0x0001d8e9) sso_btn_pane_t1_copy1

0x1762,	// (0x0001d8f8) welc_button_pane_2_comp1

0x17cb,	// (0x0001d961) sso_t_hdr_pane_p_t1

0x17db,	// (0x0001d971) sso_t_nml_pane_p_t1

0x17eb,	// (0x0001d981) sso_t_sub_pane_p_t1

0xb8d1,	// (0x00027a67) main_att_pane

0xb8d1,	// (0x00027a67) main_vod_pane

0x1839,	// (0x0001d9cf) sso_t_sub_pane_ParamLimits

0x1998,	// (0x0001db2e) input_focus_pane_cp10_t1

0x19ae,	// (0x0001db44) sso_option_row_pane_t1_ParamLimits

0xb14d,	// (0x000272e3) main_att_body_pane_ParamLimits

0xb14d,	// (0x000272e3) main_att_body_pane

0xb161,	// (0x000272f7) att_btn_emg_pane_ParamLimits

0xb161,	// (0x000272f7) att_btn_emg_pane

0xb179,	// (0x0002730f) att_btn_pane_ParamLimits

0xb179,	// (0x0002730f) att_btn_pane

0xb1e5,	// (0x0002737b) att_btn_pane_cp01_ParamLimits

0xb1e5,	// (0x0002737b) att_btn_pane_cp01

0xb1ff,	// (0x00027395) att_li_srv_pane_ParamLimits

0xb1ff,	// (0x00027395) att_li_srv_pane

0xb211,	// (0x000273a7) att_opt_pane_ParamLimits

0xb211,	// (0x000273a7) att_opt_pane

0xb255,	// (0x000273eb) att_query_pane_ParamLimits

0xb255,	// (0x000273eb) att_query_pane

0xb2c5,	// (0x0002745b) att_query_pane_cp01_ParamLimits

0xb2c5,	// (0x0002745b) att_query_pane_cp01

0xb309,	// (0x0002749f) att_t_hdr_pane_ParamLimits

0xb309,	// (0x0002749f) att_t_hdr_pane

0xb371,	// (0x00027507) att_t_nml_pane_ParamLimits

0xb371,	// (0x00027507) att_t_nml_pane

0xb3e3,	// (0x00027579) att_t_nml_pane_cp01_ParamLimits

0xb3e3,	// (0x00027579) att_t_nml_pane_cp01

0xb407,	// (0x0002759d) att_t_nmlb_pane_ParamLimits

0xb407,	// (0x0002759d) att_t_nmlb_pane

0xb46b,	// (0x00027601) att_term_pane_ParamLimits

0xb46b,	// (0x00027601) att_term_pane

0xb4af,	// (0x00027645) main_att_body_pane_g1_ParamLimits

0xb4af,	// (0x00027645) main_att_body_pane_g1

0x19c7,	// (0x0001db5d) att_t_hdr_pane_t1_ParamLimits

0x19c7,	// (0x0001db5d) att_t_hdr_pane_t1

0x19e0,	// (0x0001db76) att_t_nml_pane_t1_ParamLimits

0x19e0,	// (0x0001db76) att_t_nml_pane_t1

0x1a05,	// (0x0001db9b) att_btn_pane_t1

0x1762,	// (0x0001d8f8) bg_button_pane_cp23

0xb4db,	// (0x00027671) att_li_srv_row_pane_ParamLimits

0xb4db,	// (0x00027671) att_li_srv_row_pane

0x1a15,	// (0x0001dbab) att_t_nmlb_pane_t1_ParamLimits

0x1a15,	// (0x0001dbab) att_t_nmlb_pane_t1

0x1a33,	// (0x0001dbc9) att_query_pane_t1

0x1a42,	// (0x0001dbd8) att_query_pane_t2

0x1a51,	// (0x0001dbe7) att_query_pane_t3

0x0002,

0xfe6d,	// (0x0002c003) att_query_pane_t

0x1a60,	// (0x0001dbf6) input_focus_pane_cp11

0x1a69,	// (0x0001dbff) att_term_pane_t1_ParamLimits

0x1a69,	// (0x0001dbff) att_term_pane_t1

0xb8d1,	// (0x00027a67) att_opt_row_pane

0x19a6,	// (0x0001db3c) att_opt_row_pane_g1

0x1a86,	// (0x0001dc1c) att_opt_row_pane_t1_ParamLimits

0x1a86,	// (0x0001dc1c) att_opt_row_pane_t1

0xb4eb,	// (0x00027681) att_li_srv_row_pane_g1

0xb4f3,	// (0x00027689) att_li_srv_row_pane_t1_ParamLimits

0xb4f3,	// (0x00027689) att_li_srv_row_pane_t1

0xb508,	// (0x0002769e) att_li_srv_row_pane_t2_ParamLimits

0xb508,	// (0x0002769e) att_li_srv_row_pane_t2

0x0001,

0xfe74,	// (0x0002c00a) att_li_srv_row_pane_t_ParamLimits

0xfe74,	// (0x0002c00a) att_li_srv_row_pane_t

0x1a9f,	// (0x0001dc35) att_btn_close_pane_g1

0xb8d1,	// (0x00027a67) bg_button_pane_cp24

0xb51d,	// (0x000276b3) main_vod_body_pane_ParamLimits

0xb51d,	// (0x000276b3) main_vod_body_pane

0xb52b,	// (0x000276c1) main_vod_body_pane_g1_ParamLimits

0xb52b,	// (0x000276c1) main_vod_body_pane_g1

0xb55b,	// (0x000276f1) scroll_pane_cp24_ParamLimits

0xb55b,	// (0x000276f1) scroll_pane_cp24

0xb5a3,	// (0x00027739) vod_btn_pane_ParamLimits

0xb5a3,	// (0x00027739) vod_btn_pane

0xb5e1,	// (0x00027777) vod_det_pane_ParamLimits

0xb5e1,	// (0x00027777) vod_det_pane

0xb60d,	// (0x000277a3) vod_logo_g1_ParamLimits

0xb60d,	// (0x000277a3) vod_logo_g1

0xb657,	// (0x000277ed) vod_opt_pane_ParamLimits

0xb657,	// (0x000277ed) vod_opt_pane

0xb687,	// (0x0002781d) vod_opt_pane_cp01_ParamLimits

0xb687,	// (0x0002781d) vod_opt_pane_cp01

0xb6af,	// (0x00027845) vod_query_pane_ParamLimits

0xb6af,	// (0x00027845) vod_query_pane

0xb6d7,	// (0x0002786d) vod_query_pane_cp01_ParamLimits

0xb6d7,	// (0x0002786d) vod_query_pane_cp01

0xb6e3,	// (0x00027879) vod_t_nml_pane_ParamLimits

0xb6e3,	// (0x00027879) vod_t_nml_pane

0xb791,	// (0x00027927) vod_t_nml_pane_cp01_ParamLimits

0xb791,	// (0x00027927) vod_t_nml_pane_cp01

0xb7c9,	// (0x0002795f) vod_t_sub_pane_ParamLimits

0xb7c9,	// (0x0002795f) vod_t_sub_pane

0xb7f5,	// (0x0002798b) vod_t_sub_pane_cp01_ParamLimits

0xb7f5,	// (0x0002798b) vod_t_sub_pane_cp01

0x1a60,	// (0x0001dbf6) vod_query_field_pane

0x1aa7,	// (0x0001dc3d) vod_query_pane_t1

0x1762,	// (0x0001d8f8) bg_button_pane_cp25

0x1ab6,	// (0x0001dc4c) sso_btn_pane_t1_copy2

0xb81d,	// (0x000279b3) vod_t_nml_pane_t1_ParamLimits

0xb81d,	// (0x000279b3) vod_t_nml_pane_t1

0x1ac5,	// (0x0001dc5b) vod_opt_row_pane_ParamLimits

0x1ac5,	// (0x0001dc5b) vod_opt_row_pane

0x1ad7,	// (0x0001dc6d) vod_t_sub_pane_t1_ParamLimits

0x1ad7,	// (0x0001dc6d) vod_t_sub_pane_t1

0x1af0,	// (0x0001dc86) vod_det_cell_pane_ParamLimits

0x1af0,	// (0x0001dc86) vod_det_cell_pane

0xb8d1,	// (0x00027a67) input_focus_pane_cp15

0x1b01,	// (0x0001dc97) vod_query_field_pane_t1

0x1b0f,	// (0x0001dca5) vod_opt_row_pane_g1_ParamLimits

0x1b0f,	// (0x0001dca5) vod_opt_row_pane_g1

0x1b1b,	// (0x0001dcb1) vod_opt_row_pane_t1_ParamLimits

0x1b1b,	// (0x0001dcb1) vod_opt_row_pane_t1

0x1b3a,	// (0x0001dcd0) vod_det_cell_field_pane

0x1b43,	// (0x0001dcd9) vod_det_cell_pane_g1

0x1b4b,	// (0x0001dce1) vod_det_cell_pane_t1

0xb8d1,	// (0x00027a67) input_focus_pane_cp16

0x1b5a,	// (0x0001dcf0) vod_det_cell_field_pane_t1

0xb858,	// (0x000279ee) call7_btn_grp_pane_ParamLimits

0xb858,	// (0x000279ee) call7_btn_grp_pane

0xbff9,	// (0x0002818f) call7_bubble_pane_ParamLimits

0xbff9,	// (0x0002818f) call7_bubble_pane

0xb865,	// (0x000279fb) cell_call7_btn_pane_ParamLimits

0xb865,	// (0x000279fb) cell_call7_btn_pane

0xb876,	// (0x00027a0c) call7_pane_g1_ParamLimits

0xb876,	// (0x00027a0c) call7_pane_g1

0xb885,	// (0x00027a1b) call7_windows_conf_pane_ParamLimits

0xb885,	// (0x00027a1b) call7_windows_conf_pane

0xb8a7,	// (0x00027a3d) popup_call7_1st_window_ParamLimits

0xb8a7,	// (0x00027a3d) popup_call7_1st_window

0xb8b5,	// (0x00027a4b) popup_call7_2nd_window_ParamLimits

0xb8b5,	// (0x00027a4b) popup_call7_2nd_window

0xb8c3,	// (0x00027a59) popup_call7_3rd_window_ParamLimits

0xb8c3,	// (0x00027a59) popup_call7_3rd_window

0xb8d1,	// (0x00027a67) bg_button_pane_cp26

0x1525,	// (0x0001d6bb) cell_call7_btn_pane_g1

0x152e,	// (0x0001d6c4) cell_call7_btn_pane_t1

0xb8d1,	// (0x00027a67) bg_popup_window_pane_cp12

0x1b68,	// (0x0001dcfe) popup_call7_1st_window_g1

0x1b70,	// (0x0001dd06) popup_call7_1st_window_g2

0x1b78,	// (0x0001dd0e) popup_call7_1st_window_g3

0x0002,

0xfe79,	// (0x0002c00f) popup_call7_1st_window_g

0x1b80,	// (0x0001dd16) popup_call7_1st_window_t1

0x1b8f,	// (0x0001dd25) popup_call7_1st_window_t2

0x1b9f,	// (0x0001dd35) popup_call7_1st_window_t3

0x0002,

0xfe80,	// (0x0002c016) popup_call7_1st_window_t

0xb8d1,	// (0x00027a67) bg_popup_window_pane_cp13

0x1baf,	// (0x0001dd45) popup_call7_2nd_window_g1

0x1bb7,	// (0x0001dd4d) popup_call7_2nd_window_g2

0x1bbf,	// (0x0001dd55) popup_call7_2nd_window_g3

0x0002,

0xfe87,	// (0x0002c01d) popup_call7_2nd_window_g

0x1b80,	// (0x0001dd16) popup_call7_2nd_window_t1

0xb8d1,	// (0x00027a67) bg_popup_window_pane_cp14

0x1bc7,	// (0x0001dd5d) call7_list_conf_pane

0x1bcf,	// (0x0001dd65) call7_list_conf_row_pane_ParamLimits

0x1bcf,	// (0x0001dd65) call7_list_conf_row_pane

0x1be2,	// (0x0001dd78) call7_list_conf_row_pane_g1

0x1bea,	// (0x0001dd80) call7_list_conf_row_pane_g2

0x0001,

0xfe8e,	// (0x0002c024) call7_list_conf_row_pane_g

0x1bf2,	// (0x0001dd88) call7_list_conf_row_pane_t1

0xb8d1,	// (0x00027a67) list_highlight_pane_cp22

0xaefd,	// (0x00027093) sso_option_pane_cp01_ParamLimits

0xaefd,	// (0x00027093) sso_option_pane_cp01

0xbf7e,	// (0x00028114) msg_header_pane_ParamLimits

0xccd5,	// (0x00028e6b) bg_button_pane_cp01_ParamLimits

0xcce9,	// (0x00028e7f) input_focus_pane_cp07_ParamLimits

0x96d9,	// (0x0002586f) popup_email_progress_window

0xc045,	// (0x000281db) popup_email_progress_window_g1

0x1c00,	// (0x0001dd96) popup_email_progress_window_g2

0x0001,

0xfe93,	// (0x0002c029) popup_email_progress_window_g

0x1c08,	// (0x0001dd9e) popup_email_progress_window_t1
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal
