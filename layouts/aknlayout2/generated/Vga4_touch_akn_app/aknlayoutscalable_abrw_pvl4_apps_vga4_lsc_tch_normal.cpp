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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0002ea43 };

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
0x11e6,	// (0x0002fc29) Screen

0x11f2,	// (0x0002fc35) application_window

0x1222,	// (0x0002fc65) area_bottom_pane_ParamLimits

0x1222,	// (0x0002fc65) area_bottom_pane

0xfce5,	// (0x0002e728) area_top_pane_ParamLimits

0xfce5,	// (0x0002e728) area_top_pane

0x1284,	// (0x0002fcc7) call_video_uplink_pane_ParamLimits

0x1284,	// (0x0002fcc7) call_video_uplink_pane

0xfd73,	// (0x0002e7b6) main_pane_ParamLimits

0xfd73,	// (0x0002e7b6) main_pane

0xc1f4,	// (0x0003ac37) context_pane

0x404f,	// (0x00032a92) navi_pane

0x4086,	// (0x00032ac9) popup_cale_events_window_ParamLimits

0x4086,	// (0x00032ac9) popup_cale_events_window

0xc207,	// (0x0003ac4a) popup_mup_playback_window

0x409e,	// (0x00032ae1) signal_pane

0xa355,	// (0x00038d98) main_browser_pane

0xa50a,	// (0x00038f4d) main_burst_pane

0x0193,	// (0x0002ebd6) main_calc_pane

0xc1e8,	// (0x0003ac2b) main_cale_day_pane

0x01a7,	// (0x0002ebea) main_cale_month_pane

0xc1e8,	// (0x0003ac2b) main_cale_week_pane

0xa50a,	// (0x00038f4d) main_call_pane

0x9fff,	// (0x00038a42) main_call_poc_pane

0xa50a,	// (0x00038f4d) main_camera_pane

0xa50a,	// (0x00038f4d) main_chi_dic_pane

0xacfd,	// (0x00039740) main_clock_pane

0x9fff,	// (0x00038a42) main_fmradio_pane

0xa50a,	// (0x00038f4d) main_graph_messa_pane

0x9fff,	// (0x00038a42) main_help_pane

0xa355,	// (0x00038d98) main_im_pane

0xa25a,	// (0x00038c9d) main_image_pane_ParamLimits

0xa25a,	// (0x00038c9d) main_image_pane

0x9fff,	// (0x00038a42) main_location2_pane

0xa50a,	// (0x00038f4d) main_location_pane

0xa25a,	// (0x00038c9d) main_messa_pane

0x9fff,	// (0x00038a42) main_mp2_pane

0xa50a,	// (0x00038f4d) main_mp_pane

0x9fff,	// (0x00038a42) main_msg_pane

0x9fff,	// (0x00038a42) main_mup_eq_pane

0x9fff,	// (0x00038a42) main_mup_pane

0xa355,	// (0x00038d98) main_notes_pane

0x9fff,	// (0x00038a42) main_pec_pane

0x9fff,	// (0x00038a42) main_phob_pane

0x9fff,	// (0x00038a42) main_pinb_pane

0x9fff,	// (0x00038a42) main_postcard_pane

0x9fff,	// (0x00038a42) main_qdial_pane

0xa50a,	// (0x00038f4d) main_skin_pane

0x9fff,	// (0x00038a42) main_smil2_pane

0xa50a,	// (0x00038f4d) main_smil_pane

0xa50a,	// (0x00038f4d) main_video_pane

0xa50a,	// (0x00038f4d) main_video_tele_pane

0xa25a,	// (0x00038c9d) main_viewer_pane_ParamLimits

0xa25a,	// (0x00038c9d) main_viewer_pane

0xa50a,	// (0x00038f4d) main_vorec_pane

0x01f9,	// (0x0002ec3c) popup_blid_sat_info_window_ParamLimits

0x01f9,	// (0x0002ec3c) popup_blid_sat_info_window

0x025d,	// (0x0002eca0) popup_dyc_status_message_window_ParamLimits

0x025d,	// (0x0002eca0) popup_dyc_status_message_window

0x0277,	// (0x0002ecba) popup_grid_large_graphic_window_ParamLimits

0x0277,	// (0x0002ecba) popup_grid_large_graphic_window

0x0339,	// (0x0002ed7c) popup_loc_request_window_ParamLimits

0x0339,	// (0x0002ed7c) popup_loc_request_window

0x045f,	// (0x0002eea2) popup_wml_address_window_ParamLimits

0x045f,	// (0x0002eea2) popup_wml_address_window

0x3e3f,	// (0x00032882) call_muted_g1

0x3a8d,	// (0x000324d0) popup_call_audio_conf_window_ParamLimits

0x3a8d,	// (0x000324d0) popup_call_audio_conf_window

0x3e4f,	// (0x00032892) popup_call_audio_first_window_ParamLimits

0x3e4f,	// (0x00032892) popup_call_audio_first_window

0x3ec5,	// (0x00032908) popup_call_audio_in_window_ParamLimits

0x3ec5,	// (0x00032908) popup_call_audio_in_window

0x3f01,	// (0x00032944) popup_call_audio_out_window_ParamLimits

0x3f01,	// (0x00032944) popup_call_audio_out_window

0x3f3b,	// (0x0003297e) popup_call_audio_second_window_ParamLimits

0x3f3b,	// (0x0003297e) popup_call_audio_second_window

0x3f91,	// (0x000329d4) popup_call_audio_wait_window_ParamLimits

0x3f91,	// (0x000329d4) popup_call_audio_wait_window

0x3fc6,	// (0x00032a09) popup_number_entry_window_ParamLimits

0x3fc6,	// (0x00032a09) popup_number_entry_window

0x9bb7,	// (0x000385fa) bg_popup_call_pane_cp05_ParamLimits

0x9bb7,	// (0x000385fa) bg_popup_call_pane_cp05

0x9bd7,	// (0x0003861a) popup_number_entry_window_t1

0x9bea,	// (0x0003862d) popup_number_entry_window_t2

0x9bfc,	// (0x0003863f) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x0003da88) popup_number_entry_window_t

0x9c43,	// (0x00038686) text_title_cp2

0x9c56,	// (0x00038699) bg_popup_call_pane_cp_ParamLimits

0x9c56,	// (0x00038699) bg_popup_call_pane_cp

0x9c64,	// (0x000386a7) call_thumbnail_pane

0x9c6c,	// (0x000386af) popup_call_audio_in_window_g1_ParamLimits

0x9c6c,	// (0x000386af) popup_call_audio_in_window_g1

0x9c78,	// (0x000386bb) popup_call_audio_in_window_g2_ParamLimits

0x9c78,	// (0x000386bb) popup_call_audio_in_window_g2

0x9c84,	// (0x000386c7) popup_call_audio_in_window_g3_ParamLimits

0x9c84,	// (0x000386c7) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x0003da91) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x0003da91) popup_call_audio_in_window_g

0x9c90,	// (0x000386d3) popup_call_audio_in_window_t1_ParamLimits

0x9c90,	// (0x000386d3) popup_call_audio_in_window_t1

0x9cac,	// (0x000386ef) popup_call_audio_in_window_t2_ParamLimits

0x9cac,	// (0x000386ef) popup_call_audio_in_window_t2

0x9cc8,	// (0x0003870b) popup_call_audio_in_window_t3_ParamLimits

0x9cc8,	// (0x0003870b) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x0003da98) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x0003da98) popup_call_audio_in_window_t

0x9c56,	// (0x00038699) bg_popup_call_pane_cp01_ParamLimits

0x9c56,	// (0x00038699) bg_popup_call_pane_cp01

0x9c64,	// (0x000386a7) call_thumbnail_pane_cp02

0x9cdb,	// (0x0003871e) call_type_pane_cp022

0x9ce3,	// (0x00038726) popup_call_audio_out_window_g1_ParamLimits

0x9ce3,	// (0x00038726) popup_call_audio_out_window_g1

0x9cf5,	// (0x00038738) popup_call_audio_out_window_g2_ParamLimits

0x9cf5,	// (0x00038738) popup_call_audio_out_window_g2

0x9d01,	// (0x00038744) popup_call_audio_out_window_g3_ParamLimits

0x9d01,	// (0x00038744) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x0003da9f) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x0003da9f) popup_call_audio_out_window_g

0x9d13,	// (0x00038756) popup_call_audio_out_window_t1_ParamLimits

0x9d13,	// (0x00038756) popup_call_audio_out_window_t1

0x9d2b,	// (0x0003876e) popup_call_audio_out_window_t2_ParamLimits

0x9d2b,	// (0x0003876e) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x0003daa6) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x0003daa6) popup_call_audio_out_window_t

0x9d40,	// (0x00038783) bg_popup_call_pane_ParamLimits

0x9d40,	// (0x00038783) bg_popup_call_pane

0x12c6,	// (0x0002fd09) call_thumbnail_pane_cp_ParamLimits

0x12c6,	// (0x0002fd09) call_thumbnail_pane_cp

0x9dc4,	// (0x00038807) call_type_pane_cp01_ParamLimits

0x9dc4,	// (0x00038807) call_type_pane_cp01

0x9e08,	// (0x0003884b) popup_call_audio_first_window_g1_ParamLimits

0x9e08,	// (0x0003884b) popup_call_audio_first_window_g1

0x9e54,	// (0x00038897) popup_call_audio_first_window_g2_ParamLimits

0x9e54,	// (0x00038897) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x0003daab) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x0003daab) popup_call_audio_first_window_g

0x9e98,	// (0x000388db) popup_call_audio_first_window_t1_ParamLimits

0x9e98,	// (0x000388db) popup_call_audio_first_window_t1

0x9f44,	// (0x00038987) popup_call_audio_first_window_t4_ParamLimits

0x9f44,	// (0x00038987) popup_call_audio_first_window_t4

0x9fd0,	// (0x00038a13) popup_call_audio_first_window_t5_ParamLimits

0x9fd0,	// (0x00038a13) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x0003dab0) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x0003dab0) popup_call_audio_first_window_t

0x9fff,	// (0x00038a42) bg_popup_call_pane_cp02

0xa009,	// (0x00038a4c) call_type_pane_cp023

0xa011,	// (0x00038a54) popup_call_audio_wait_window_g1

0xa019,	// (0x00038a5c) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x0003dab7) popup_call_audio_wait_window_g

0xa021,	// (0x00038a64) popup_call_audio_wait_window_t3

0xa02f,	// (0x00038a72) bg_popup_call_pane_cp03_ParamLimits

0xa02f,	// (0x00038a72) bg_popup_call_pane_cp03

0xa08f,	// (0x00038ad2) call_thumbnail_pane_cp011_ParamLimits

0xa08f,	// (0x00038ad2) call_thumbnail_pane_cp011

0xa09b,	// (0x00038ade) call_type_pane_cp034_ParamLimits

0xa09b,	// (0x00038ade) call_type_pane_cp034

0xa0d7,	// (0x00038b1a) popup_call_audio_second_window_g1_ParamLimits

0xa0d7,	// (0x00038b1a) popup_call_audio_second_window_g1

0xa113,	// (0x00038b56) popup_call_audio_second_window_g2_ParamLimits

0xa113,	// (0x00038b56) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x0003dabc) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x0003dabc) popup_call_audio_second_window_g

0xa14f,	// (0x00038b92) popup_call_audio_second_window_t1_ParamLimits

0xa14f,	// (0x00038b92) popup_call_audio_second_window_t1

0xa1d0,	// (0x00038c13) popup_call_audio_second_window_t2_ParamLimits

0xa1d0,	// (0x00038c13) popup_call_audio_second_window_t2

0xa206,	// (0x00038c49) popup_call_audio_second_window_t3_ParamLimits

0xa206,	// (0x00038c49) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x0003dac1) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x0003dac1) popup_call_audio_second_window_t

0x9fff,	// (0x00038a42) bg_popup_call_pane_cp04

0xa23c,	// (0x00038c7f) list_conf_pane

0xa244,	// (0x00038c87) popup_call_audio_conf_window_t1

0xa252,	// (0x00038c95) call_thumbnail_pane_g1

0xa25a,	// (0x00038c9d) bg_pinb_pane_ParamLimits

0xa25a,	// (0x00038c9d) bg_pinb_pane

0xa268,	// (0x00038cab) find_pinb_pane

0xa25a,	// (0x00038c9d) listscroll_pinb_pane_ParamLimits

0xa25a,	// (0x00038c9d) listscroll_pinb_pane

0xa272,	// (0x00038cb5) pinb_bg_pane_g1

0xa272,	// (0x00038cb5) pinb_bg_pane_g2

0xa272,	// (0x00038cb5) pinb_bg_pane_g3

0xa272,	// (0x00038cb5) pinb_bg_pane_g4

0xa272,	// (0x00038cb5) pinb_bg_pane_g5

0xa272,	// (0x00038cb5) pinb_bg_pane_g6

0xa272,	// (0x00038cb5) pinb_bg_pane_g7

0xa272,	// (0x00038cb5) pinb_bg_pane_g8

0xa272,	// (0x00038cb5) pinb_bg_pane_g9

0xa272,	// (0x00038cb5) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x0003dac8) pinb_bg_pane_g

0x9bad,	// (0x000385f0) grid_pinb_pane

0x9bad,	// (0x000385f0) list_pinb_pane

0xa27c,	// (0x00038cbf) scroll_pane_cp01_ParamLimits

0xa27c,	// (0x00038cbf) scroll_pane_cp01

0xa28a,	// (0x00038ccd) find_pinb_pane_g1_ParamLimits

0xa28a,	// (0x00038ccd) find_pinb_pane_g1

0xa2a2,	// (0x00038ce5) find_pinb_pane_t1

0xa2b4,	// (0x00038cf7) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x0003dae2) find_pinb_pane_t

0xa2c9,	// (0x00038d0c) input_focus_pane_cp01_ParamLimits

0xa2c9,	// (0x00038d0c) input_focus_pane_cp01

0xa2d5,	// (0x00038d18) cell_pinb_pane_ParamLimits

0xa2d5,	// (0x00038d18) cell_pinb_pane

0xa2e3,	// (0x00038d26) cell_pinb_pane_g1_ParamLimits

0xa2e3,	// (0x00038d26) cell_pinb_pane_g1

0xa2f1,	// (0x00038d34) cell_pinb_pane_g2_ParamLimits

0xa2f1,	// (0x00038d34) cell_pinb_pane_g2

0xa2f1,	// (0x00038d34) cell_pinb_pane_g3_ParamLimits

0xa2f1,	// (0x00038d34) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x0003dae7) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x0003dae7) cell_pinb_pane_g

0x9fff,	// (0x00038a42) grid_highlight_pane_cp01

0xa2d5,	// (0x00038d18) list_pinb_item_pane_ParamLimits

0xa2d5,	// (0x00038d18) list_pinb_item_pane

0x9bad,	// (0x000385f0) list_highlight_pane_cp02

0xa2ff,	// (0x00038d42) list_pinb_item_pane_g1_ParamLimits

0xa2ff,	// (0x00038d42) list_pinb_item_pane_g1

0xa2f1,	// (0x00038d34) list_pinb_item_pane_g2_ParamLimits

0xa2f1,	// (0x00038d34) list_pinb_item_pane_g2

0xa2e3,	// (0x00038d26) list_pinb_item_pane_g3_ParamLimits

0xa2e3,	// (0x00038d26) list_pinb_item_pane_g3

0xa2f1,	// (0x00038d34) list_pinb_item_pane_g4_ParamLimits

0xa2f1,	// (0x00038d34) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x0003daee) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x0003daee) list_pinb_item_pane_g

0xa30d,	// (0x00038d50) list_pinb_item_pane_t1_ParamLimits

0xa30d,	// (0x00038d50) list_pinb_item_pane_t1

0xff0c,	// (0x0002e94f) calc_display_pane

0xff31,	// (0x0002e974) calc_paper_pane

0xff54,	// (0x0002e997) grid_calc_pane

0x9fff,	// (0x00038a42) bg_list_pane_cp01

0x12f2,	// (0x0002fd35) clock_g1

0x12fa,	// (0x0002fd3d) clock_g2

0x0001,

0xf0b4,	// (0x0003daf7) clock_g

0x1302,	// (0x0002fd45) clock_t1_ParamLimits

0x1302,	// (0x0002fd45) clock_t1

0x1317,	// (0x0002fd5a) clock_t2_ParamLimits

0x1317,	// (0x0002fd5a) clock_t2

0x1329,	// (0x0002fd6c) clock_t3_ParamLimits

0x1329,	// (0x0002fd6c) clock_t3

0x133b,	// (0x0002fd7e) clock_t4_ParamLimits

0x133b,	// (0x0002fd7e) clock_t4

0x134d,	// (0x0002fd90) clock_t5_ParamLimits

0x134d,	// (0x0002fd90) clock_t5

0x1362,	// (0x0002fda5) clock_t6_ParamLimits

0x1362,	// (0x0002fda5) clock_t6

0x1374,	// (0x0002fdb7) clock_t7_ParamLimits

0x1374,	// (0x0002fdb7) clock_t7

0x1386,	// (0x0002fdc9) clock_t8_ParamLimits

0x1386,	// (0x0002fdc9) clock_t8

0x139a,	// (0x0002fddd) clock_t9_ParamLimits

0x139a,	// (0x0002fddd) clock_t9

0x0008,

0xf0b9,	// (0x0003dafc) clock_t_ParamLimits

0xf0b9,	// (0x0003dafc) clock_t

0xa321,	// (0x00038d64) popup_clock_analogue_window_cp02

0xa321,	// (0x00038d64) popup_clock_digital_window_cp01

0x9fff,	// (0x00038a42) listscroll_help_pane

0x9fff,	// (0x00038a42) phob_pre_status_pane

0xa329,	// (0x00038d6c) grid_qdial_pane

0xa25a,	// (0x00038c9d) listscroll_mce_pane

0xa25a,	// (0x00038c9d) bg_notes_pane

0xa333,	// (0x00038d76) list_notes_pane

0x13b0,	// (0x0002fdf3) scroll_pane_cp06

0xa341,	// (0x00038d84) bg_calc_paper_pane

0x13c4,	// (0x0002fe07) list_calc_pane

0xa355,	// (0x00038d98) bg_calc_display_pane

0xff82,	// (0x0002e9c5) calc_display_pane_t1

0xff97,	// (0x0002e9da) calc_display_pane_t2

0x13de,	// (0x0002fe21) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x0003db0f) calc_display_pane_t

0xffac,	// (0x0002e9ef) cell_calc_pane_ParamLimits

0xffac,	// (0x0002e9ef) cell_calc_pane

0xa361,	// (0x00038da4) bg_calc_paper_pane_g1

0xa36d,	// (0x00038db0) bg_calc_paper_pane_g2

0xa379,	// (0x00038dbc) bg_calc_paper_pane_g3

0xa385,	// (0x00038dc8) bg_calc_paper_pane_g4

0xa391,	// (0x00038dd4) bg_calc_paper_pane_g5

0x13f0,	// (0x0002fe33) bg_calc_paper_pane_g6

0x1403,	// (0x0002fe46) bg_calc_paper_pane_g7

0x1416,	// (0x0002fe59) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x0003db16) bg_calc_paper_pane_g

0x1429,	// (0x0002fe6c) calc_bg_paper_pane_g9

0x143c,	// (0x0002fe7f) list_calc_item_pane_ParamLimits

0x143c,	// (0x0002fe7f) list_calc_item_pane

0xa39d,	// (0x00038de0) list_calc_item_pane_g1

0x1454,	// (0x0002fe97) list_calc_item_pane_t1_ParamLimits

0x1454,	// (0x0002fe97) list_calc_item_pane_t1

0xffe7,	// (0x0002ea2a) list_calc_item_pane_t2_ParamLimits

0xffe7,	// (0x0002ea2a) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x0003db27) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x0003db27) list_calc_item_pane_t

0xa272,	// (0x00038cb5) cell_calc_pane_g1

0xa3aa,	// (0x00038ded) grid_highlight_pane_cp02

0x1466,	// (0x0002fea9) bg_calc_display_pane_g1

0x0019,	// (0x0002ea5c) bg_calc_display_pane_g2

0xa3cc,	// (0x00038e0f) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x0003db31) bg_calc_display_pane_g

0x0023,	// (0x0002ea66) cell_qdial_pane_ParamLimits

0x0023,	// (0x0002ea66) cell_qdial_pane

0x146f,	// (0x0002feb2) cell_qdial_pane_g1_ParamLimits

0x146f,	// (0x0002feb2) cell_qdial_pane_g1

0x1485,	// (0x0002fec8) cell_qdial_pane_g2_ParamLimits

0x1485,	// (0x0002fec8) cell_qdial_pane_g2

0xa3d5,	// (0x00038e18) cell_qdial_pane_g3_ParamLimits

0xa3d5,	// (0x00038e18) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x0003db38) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x0003db38) cell_qdial_pane_g

0x14ac,	// (0x0002feef) cell_qdial_pane_t1_ParamLimits

0x14ac,	// (0x0002feef) cell_qdial_pane_t1

0x14c4,	// (0x0002ff07) cell_qdial_pane_t2_ParamLimits

0x14c4,	// (0x0002ff07) cell_qdial_pane_t2

0x14d7,	// (0x0002ff1a) cell_qdial_pane_t3_ParamLimits

0x14d7,	// (0x0002ff1a) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x0003db41) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x0003db41) cell_qdial_pane_t

0x9fff,	// (0x00038a42) grid_highlight_pane_cp04

0xa3e1,	// (0x00038e24) thumbnail_qdial_pane_ParamLimits

0xa3e1,	// (0x00038e24) thumbnail_qdial_pane

0xa43d,	// (0x00038e80) list_help_pane

0xa446,	// (0x00038e89) scroll_pane_cp02

0x14ea,	// (0x0002ff2d) help_list_pane_t1_ParamLimits

0x14ea,	// (0x0002ff2d) help_list_pane_t1

0x150e,	// (0x0002ff51) bg_notes_pane_g2

0x1516,	// (0x0002ff59) bg_notes_pane_g3

0x151e,	// (0x0002ff61) notes_bg_pane_g1

0x1526,	// (0x0002ff69) notes_bg_pane_g4

0x152e,	// (0x0002ff71) notes_bg_pane_g5

0x1536,	// (0x0002ff79) notes_bg_pane_g6

0x153e,	// (0x0002ff81) notes_bg_pane_g7

0x1546,	// (0x0002ff89) notes_bg_pane_g8

0x154e,	// (0x0002ff91) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x0003db5f) notes_bg_pane_g

0x1556,	// (0x0002ff99) list_notes_text_pane_ParamLimits

0x1556,	// (0x0002ff99) list_notes_text_pane

0xa44f,	// (0x00038e92) list_notes_text_pane_g1

0xa458,	// (0x00038e9b) list_notes_text_pane_t1

0x156d,	// (0x0002ffb0) listscroll_cale_week_pane

0x1597,	// (0x0002ffda) bg_cale_heading_pane

0x15bb,	// (0x0002fffe) bg_cale_pane_cp01

0x15d8,	// (0x0003001b) cale_week_corner_pane

0x15f7,	// (0x0003003a) cale_week_day_heading_pane

0x1620,	// (0x00030063) cale_week_scroll_pane_g1

0x163f,	// (0x00030082) cale_week_scroll_pane_g2

0x1657,	// (0x0003009a) cale_week_scroll_pane_g3

0x166f,	// (0x000300b2) cale_week_scroll_pane_g4

0x1687,	// (0x000300ca) cale_week_scroll_pane_g5

0x16a7,	// (0x000300ea) cale_week_scroll_pane_g6

0x16c7,	// (0x0003010a) cale_week_scroll_pane_g7

0x16eb,	// (0x0003012e) cale_week_scroll_pane_g8

0x170f,	// (0x00030152) cale_week_scroll_pane_g9

0x1727,	// (0x0003016a) cale_week_scroll_pane_g10

0x173f,	// (0x00030182) cale_week_scroll_pane_g11

0x1757,	// (0x0003019a) cale_week_scroll_pane_g12

0x177b,	// (0x000301be) cale_week_scroll_pane_g13

0x177b,	// (0x000301be) cale_week_scroll_pane_g14

0x177b,	// (0x000301be) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x0003db6e) cale_week_scroll_pane_g

0x17c3,	// (0x00030206) cale_week_time_pane

0x17e7,	// (0x0003022a) grid_cale_week_pane

0xa492,	// (0x00038ed5) scroll_pane_cp08

0x1819,	// (0x0003025c) cell_cale_week_pane_ParamLimits

0x1819,	// (0x0003025c) cell_cale_week_pane

0x18b5,	// (0x000302f8) cale_week_day_heading_pane_t1

0x18df,	// (0x00030322) cale_week_day_heading_pane_t2

0x190e,	// (0x00030351) cale_week_day_heading_pane_t3

0x193d,	// (0x00030380) cale_week_day_heading_pane_t4

0x196c,	// (0x000303af) cale_week_day_heading_pane_t5

0x199f,	// (0x000303e2) cale_week_day_heading_pane_t6

0x19d6,	// (0x00030419) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x0003db8f) cale_week_day_heading_pane_t

0xa4af,	// (0x00038ef2) bg_cale_side_pane

0x0037,	// (0x0002ea7a) cale_week_time_pane_t1

0x0051,	// (0x0002ea94) cale_week_time_pane_t2

0x006b,	// (0x0002eaae) cale_week_time_pane_t3

0x0085,	// (0x0002eac8) cale_week_time_pane_t4

0x009f,	// (0x0002eae2) cale_week_time_pane_t5

0x00b9,	// (0x0002eafc) cale_week_time_pane_t6

0x00d9,	// (0x0002eb1c) cale_week_time_pane_t7

0x00ff,	// (0x0002eb42) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x0003db9e) cale_week_time_pane_t

0x1a00,	// (0x00030443) cell_cale_week_pane_g2

0x1a24,	// (0x00030467) cell_cale_week_pane_g3_ParamLimits

0x1a24,	// (0x00030467) cell_cale_week_pane_g3

0xa4bd,	// (0x00038f00) grid_highlight_pane_cp07

0xa4c5,	// (0x00038f08) listscroll_gms_pane

0xa4cf,	// (0x00038f12) grid_gms_pane

0xa4d8,	// (0x00038f1b) listscroll_gms_pane_g1

0xa4e0,	// (0x00038f23) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x0003dbaf) listscroll_gms_pane_g

0x1a3c,	// (0x0003047f) scroll_pane_cp010

0x1a47,	// (0x0003048a) cell_gms_pane_ParamLimits

0x1a47,	// (0x0003048a) cell_gms_pane

0x1a5e,	// (0x000304a1) cell_gms_pane_g1

0xa4e8,	// (0x00038f2b) cell_gms_pane_g2

0xa4f0,	// (0x00038f33) cell_gms_pane_g3

0xa4f9,	// (0x00038f3c) cell_gms_pane_g4

0x0003,

0xf171,	// (0x0003dbb4) cell_gms_pane_g

0xa502,	// (0x00038f45) grid_highlight_pane_cp09

0x3dc3,	// (0x00032806) phob_pre_status_pane_g1

0x3dcb,	// (0x0003280e) phob_pre_status_pane_g2

0x3dd3,	// (0x00032816) phob_pre_status_pane_g3

0x3ddb,	// (0x0003281e) phob_pre_status_pane_g4

0x0004,

0xf535,	// (0x0003df78) phob_pre_status_pane_g

0x3deb,	// (0x0003282e) phob_pre_status_pane_t1

0x3dfb,	// (0x0003283e) phob_pre_status_pane_t2

0x3e0b,	// (0x0003284e) phob_pre_status_pane_t3

0x0002,

0xf540,	// (0x0003df83) phob_pre_status_pane_t

0xa50a,	// (0x00038f4d) bg_list_pane_cp05

0x1a6e,	// (0x000304b1) grid_vorec_pane

0x1a78,	// (0x000304bb) vorec_t1

0x1a86,	// (0x000304c9) vorec_t2

0x1a94,	// (0x000304d7) vorec_t3

0x1aa2,	// (0x000304e5) vorec_t4

0xad39,	// (0x0003977c) vorec_t5

0x11ce,	// (0x0002fc11) vorec_t6

0x0004,

0xf17a,	// (0x0003dbbd) vorec_t

0x11dc,	// (0x0002fc1f) wait_bar_pane_cp01

0x1abe,	// (0x00030501) cell_vorec_pane_ParamLimits

0x1abe,	// (0x00030501) cell_vorec_pane

0x1ad3,	// (0x00030516) cell_vorec_pane_g1

0x9fff,	// (0x00038a42) grid_highlight_pane_cp05

0xa27c,	// (0x00038cbf) cams_zoom_pane

0xa27c,	// (0x00038cbf) image_vga_pane

0xa2e3,	// (0x00038d26) main_camera_pane_g1

0xa2e3,	// (0x00038d26) main_camera_pane_g2

0xa2e3,	// (0x00038d26) main_camera_pane_g3

0xa2e3,	// (0x00038d26) main_camera_pane_g4

0xa2e3,	// (0x00038d26) main_camera_pane_g5

0xa2e3,	// (0x00038d26) main_camera_pane_g6

0xa2e3,	// (0x00038d26) main_camera_pane_g7

0x0007,

0xf185,	// (0x0003dbc8) main_camera_pane_g

0xa512,	// (0x00038f55) main_camera_pane_t1

0xa512,	// (0x00038f55) main_camera_pane_t2

0x0001,

0xf196,	// (0x0003dbd9) main_camera_pane_t

0x1af1,	// (0x00030534) cams_zoom_pane_cp_ParamLimits

0x1af1,	// (0x00030534) cams_zoom_pane_cp

0x1b25,	// (0x00030568) image_cif_pane_ParamLimits

0x1b25,	// (0x00030568) image_cif_pane

0x9bad,	// (0x000385f0) image_subqcif_pane

0x1b37,	// (0x0003057a) main_video_pane_g1_ParamLimits

0x1b37,	// (0x0003057a) main_video_pane_g1

0x1b65,	// (0x000305a8) main_video_pane_g2_ParamLimits

0x1b65,	// (0x000305a8) main_video_pane_g2

0x1b9f,	// (0x000305e2) main_video_pane_g3_ParamLimits

0x1b9f,	// (0x000305e2) main_video_pane_g3

0x1b9f,	// (0x000305e2) main_video_pane_g4_ParamLimits

0x1b9f,	// (0x000305e2) main_video_pane_g4

0x1bd3,	// (0x00030616) main_video_pane_g5_ParamLimits

0x1bd3,	// (0x00030616) main_video_pane_g5

0xa526,	// (0x00038f69) main_video_pane_g6_ParamLimits

0xa526,	// (0x00038f69) main_video_pane_g6

0x0006,

0xf19b,	// (0x0003dbde) main_video_pane_g_ParamLimits

0xf19b,	// (0x0003dbde) main_video_pane_g

0x1bef,	// (0x00030632) main_video_pane_t1_ParamLimits

0x1bef,	// (0x00030632) main_video_pane_t1

0xa540,	// (0x00038f83) cams_zoom_pane_g1

0xa540,	// (0x00038f83) cams_zoom_pane_g2

0xa540,	// (0x00038f83) cams_zoom_pane_g3

0xa540,	// (0x00038f83) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x0003dbed) cams_zoom_pane_g

0x1c47,	// (0x0003068a) grid_cams_pane

0x1c61,	// (0x000306a4) linegrid_cams_pane

0x1c73,	// (0x000306b6) cell_cams_pane_ParamLimits

0x1c73,	// (0x000306b6) cell_cams_pane

0xa54a,	// (0x00038f8d) cams_burst_image_pane

0xa552,	// (0x00038f95) cell_cams_pane_g1

0x9fff,	// (0x00038a42) grid_highlight_pane_cp03

0xa272,	// (0x00038cb5) mp_bg_pane_g1

0x9bad,	// (0x000385f0) bg_list_pane_cp03

0x9bad,	// (0x000385f0) bg_mp_pane

0x9bad,	// (0x000385f0) grid_mp_pane

0xa540,	// (0x00038f83) media_player_g1

0xaa92,	// (0x000394d5) media_player_t1

0xaa92,	// (0x000394d5) media_player_t2

0xaa92,	// (0x000394d5) media_player_t3

0xaa92,	// (0x000394d5) media_player_t4

0xaa92,	// (0x000394d5) media_player_t5

0xaa92,	// (0x000394d5) media_player_t6

0xaa92,	// (0x000394d5) media_player_t7

0x0006,

0xf51f,	// (0x0003df62) media_player_t

0x9bad,	// (0x000385f0) wait_bar_pane_cp02

0xf504,	// (0x0003df47) main_usb_pane_t

0xacfd,	// (0x00039740) cell_mp_pane

0xa272,	// (0x00038cb5) cell_mp_pane_g1

0x9fff,	// (0x00038a42) grid_highlight_pane_cp06

0xa55a,	// (0x00038f9d) grid_skin_colour_pane

0xa562,	// (0x00038fa5) list_highlight_pane_cp03

0x1c95,	// (0x000306d8) skin_g1

0xa56a,	// (0x00038fad) skin_t1

0xa579,	// (0x00038fbc) skin_t2

0x0001,

0xf1d8,	// (0x0003dc1b) skin_t

0x1c9d,	// (0x000306e0) cell_skin_colour_pane_ParamLimits

0x1c9d,	// (0x000306e0) cell_skin_colour_pane

0xa587,	// (0x00038fca) cell_skin_colour_pane_g1

0x1d10,	// (0x00030753) call_video_g1_ParamLimits

0x1d10,	// (0x00030753) call_video_g1

0x1d2c,	// (0x0003076f) call_video_g2_ParamLimits

0x1d2c,	// (0x0003076f) call_video_g2

0x0001,

0xf1dd,	// (0x0003dc20) call_video_g_ParamLimits

0xf1dd,	// (0x0003dc20) call_video_g

0x1d71,	// (0x000307b4) call_video_uplink_pane_cp1_ParamLimits

0x1d71,	// (0x000307b4) call_video_uplink_pane_cp1

0xa599,	// (0x00038fdc) call_video_uplink_pane_cp2

0x1e12,	// (0x00030855) video_down_crop_pane_ParamLimits

0x1e12,	// (0x00030855) video_down_crop_pane

0x1efb,	// (0x0003093e) video_down_pane_ParamLimits

0x1efb,	// (0x0003093e) video_down_pane

0xa5a1,	// (0x00038fe4) video_down_subqcif_pane_ParamLimits

0xa5a1,	// (0x00038fe4) video_down_subqcif_pane

0xa5bb,	// (0x00038ffe) video_down_subqcif_pane_cp_ParamLimits

0xa5bb,	// (0x00038ffe) video_down_subqcif_pane_cp

0xa5e3,	// (0x00039026) im_reading_pane_ParamLimits

0xa5e3,	// (0x00039026) im_reading_pane

0x2006,	// (0x00030a49) im_writing_pane_ParamLimits

0x2006,	// (0x00030a49) im_writing_pane

0x2024,	// (0x00030a67) im_reading_pane_t1

0xa5fd,	// (0x00039040) list_im_pane

0xa60e,	// (0x00039051) scroll_pane_cp07

0x2063,	// (0x00030aa6) im_writing_pane_t1_ParamLimits

0x2063,	// (0x00030aa6) im_writing_pane_t1

0xa627,	// (0x0003906a) im_writing_pane_t2_ParamLimits

0xa627,	// (0x0003906a) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x0003dc2a) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x0003dc2a) im_writing_pane_t

0x9fff,	// (0x00038a42) input_focus_pane_cp04

0x9fff,	// (0x00038a42) input_focus_pane_cp05

0x2078,	// (0x00030abb) list_im_single_pane_ParamLimits

0x2078,	// (0x00030abb) list_im_single_pane

0xa644,	// (0x00039087) list_single_im_pane_t1

0xa50a,	// (0x00038f4d) blid_accuracy_pane

0xa50a,	// (0x00038f4d) blid_compass_pane

0xc1a0,	// (0x0003abe3) main_location_t1

0xc1a0,	// (0x0003abe3) main_location_t2

0xc1a0,	// (0x0003abe3) main_location_t3

0x0002,

0xf52e,	// (0x0003df71) main_location_t

0x9fff,	// (0x00038a42) aid_levels_location

0xa272,	// (0x00038cb5) blid_accuracy_pane_g1

0xa272,	// (0x00038cb5) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x0003dc79) blid_accuracy_pane_g

0xa67e,	// (0x000390c1) wml_content_pane

0xa6bc,	// (0x000390ff) wml_button_pane_ParamLimits

0xa6bc,	// (0x000390ff) wml_button_pane

0x208e,	// (0x00030ad1) wml_list_single_large_pane_ParamLimits

0x208e,	// (0x00030ad1) wml_list_single_large_pane

0x20a7,	// (0x00030aea) wml_list_single_medium_pane_ParamLimits

0x20a7,	// (0x00030aea) wml_list_single_medium_pane

0x20c1,	// (0x00030b04) wml_list_single_small_pane_ParamLimits

0x20c1,	// (0x00030b04) wml_list_single_small_pane

0xa6d0,	// (0x00039113) wml_selection_box_pane_ParamLimits

0xa6d0,	// (0x00039113) wml_selection_box_pane

0xa6e3,	// (0x00039126) wml_list_single_pane_t1

0xa6f2,	// (0x00039135) wml_list_single_medium_pane_t1

0xa701,	// (0x00039144) wml_list_single_large_pane_t1

0xa710,	// (0x00039153) input_focus_pane_cp02_ParamLimits

0xa710,	// (0x00039153) input_focus_pane_cp02

0xa723,	// (0x00039166) wml_selection_box_pane_g1

0xa72c,	// (0x0003916f) wml_selection_box_pane_t1_ParamLimits

0xa72c,	// (0x0003916f) wml_selection_box_pane_t1

0xa25a,	// (0x00038c9d) bg_wml_button_pane_ParamLimits

0xa25a,	// (0x00038c9d) bg_wml_button_pane

0xa744,	// (0x00039187) wml_button_pane_g1

0xa74c,	// (0x0003918f) wml_button_pane_t1

0xa744,	// (0x00039187) wml_button_bg_pane_g1

0xa75c,	// (0x0003919f) wml_button_bg_pane_g2

0xa764,	// (0x000391a7) wml_button_bg_pane_g3

0xa76c,	// (0x000391af) wml_button_bg_pane_g4

0xa774,	// (0x000391b7) wml_button_bg_pane_g5

0xa77c,	// (0x000391bf) wml_button_bg_pane_g6

0xa784,	// (0x000391c7) wml_button_bg_pane_g7

0xa78c,	// (0x000391cf) wml_button_bg_pane_g8

0xa794,	// (0x000391d7) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x0003dc2f) wml_button_bg_pane_g

0x20dd,	// (0x00030b20) bg_list_pane_cp02

0xa79c,	// (0x000391df) mce_header_pane_ParamLimits

0xa79c,	// (0x000391df) mce_header_pane

0xa7b2,	// (0x000391f5) mce_icon_pane

0xa7b2,	// (0x000391f5) mce_image_pane

0xa7bb,	// (0x000391fe) mce_text_pane_ParamLimits

0xa7bb,	// (0x000391fe) mce_text_pane

0x20e7,	// (0x00030b2a) scroll_pane_cp03

0xa6b4,	// (0x000390f7) scroll_pane_cp04

0xa7ce,	// (0x00039211) scroll_pane_cp05_ParamLimits

0xa7ce,	// (0x00039211) scroll_pane_cp05

0x20f1,	// (0x00030b34) mce_header_field_pane_ParamLimits

0x20f1,	// (0x00030b34) mce_header_field_pane

0x210a,	// (0x00030b4d) mce_header_field_pane_2_ParamLimits

0x210a,	// (0x00030b4d) mce_header_field_pane_2

0x2120,	// (0x00030b63) mce_header_field_pane_3

0x2128,	// (0x00030b6b) list_single_mce_message_pane_ParamLimits

0x2128,	// (0x00030b6b) list_single_mce_message_pane

0x2144,	// (0x00030b87) list_single_mce_smart_pane_ParamLimits

0x2144,	// (0x00030b87) list_single_mce_smart_pane

0xa7da,	// (0x0003921d) input_focus_pane_cp03

0xa7e3,	// (0x00039226) list_header_data_pane

0x216b,	// (0x00030bae) mce_header_field_pane_t1

0x217b,	// (0x00030bbe) list_single_mce_header_pane_ParamLimits

0x217b,	// (0x00030bbe) list_single_mce_header_pane

0xa7eb,	// (0x0003922e) list_single_mce_header_pane_t1

0xa7fa,	// (0x0003923d) list_single_mce_message_pane_g1

0xa802,	// (0x00039245) list_single_mce_message_pane_t1

0x21b5,	// (0x00030bf8) bg_cale_heading_pane_cp01_ParamLimits

0x21b5,	// (0x00030bf8) bg_cale_heading_pane_cp01

0xa810,	// (0x00039253) bg_cale_pane_cp02_ParamLimits

0xa810,	// (0x00039253) bg_cale_pane_cp02

0x2207,	// (0x00030c4a) cale_month_corner_pane

0x2226,	// (0x00030c69) cale_month_day_heading_pane_ParamLimits

0x2226,	// (0x00030c69) cale_month_day_heading_pane

0x2290,	// (0x00030cd3) cale_month_pane_g1_ParamLimits

0x2290,	// (0x00030cd3) cale_month_pane_g1

0x22d7,	// (0x00030d1a) cale_month_pane_g2_ParamLimits

0x22d7,	// (0x00030d1a) cale_month_pane_g2

0x2313,	// (0x00030d56) cale_month_pane_g3_ParamLimits

0x2313,	// (0x00030d56) cale_month_pane_g3

0x2367,	// (0x00030daa) cale_month_pane_g4_ParamLimits

0x2367,	// (0x00030daa) cale_month_pane_g4

0x23bb,	// (0x00030dfe) cale_month_pane_g5_ParamLimits

0x23bb,	// (0x00030dfe) cale_month_pane_g5

0x2417,	// (0x00030e5a) cale_month_pane_g6_ParamLimits

0x2417,	// (0x00030e5a) cale_month_pane_g6

0x247f,	// (0x00030ec2) cale_month_pane_g7_ParamLimits

0x247f,	// (0x00030ec2) cale_month_pane_g7

0x24eb,	// (0x00030f2e) cale_month_pane_g8_ParamLimits

0x24eb,	// (0x00030f2e) cale_month_pane_g8

0x2557,	// (0x00030f9a) cale_month_pane_g9_ParamLimits

0x2557,	// (0x00030f9a) cale_month_pane_g9

0x25bb,	// (0x00030ffe) cale_month_pane_g10_ParamLimits

0x25bb,	// (0x00030ffe) cale_month_pane_g10

0x260d,	// (0x00031050) cale_month_pane_g11_ParamLimits

0x260d,	// (0x00031050) cale_month_pane_g11

0x265f,	// (0x000310a2) cale_month_pane_g12_ParamLimits

0x265f,	// (0x000310a2) cale_month_pane_g12

0x26b7,	// (0x000310fa) cale_month_pane_g13_ParamLimits

0x26b7,	// (0x000310fa) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x0003dc42) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x0003dc42) cale_month_pane_g

0x270f,	// (0x00031152) cale_month_week_pane

0x2733,	// (0x00031176) grid_cale_month_pane_ParamLimits

0x2733,	// (0x00031176) grid_cale_month_pane

0x2794,	// (0x000311d7) cale_month_day_heading_pane_t1

0x281a,	// (0x0003125d) cale_month_day_heading_pane_t2

0x2893,	// (0x000312d6) cale_month_day_heading_pane_t3

0x290c,	// (0x0003134f) cale_month_day_heading_pane_t4

0x298d,	// (0x000313d0) cale_month_day_heading_pane_t5

0x2a16,	// (0x00031459) cale_month_day_heading_pane_t6

0x2aa7,	// (0x000314ea) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x0003dc5d) cale_month_day_heading_pane_t

0xa4af,	// (0x00038ef2) bg_cale_side_pane_cp01

0x2b38,	// (0x0003157b) cale_month_week_pane_t1

0x2b51,	// (0x00031594) cale_month_week_pane_t2

0x2b6a,	// (0x000315ad) cale_month_week_pane_t3

0x2b83,	// (0x000315c6) cale_month_week_pane_t4

0x2b9c,	// (0x000315df) cale_month_week_pane_t5

0x2bb5,	// (0x000315f8) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x0003dc6c) cale_month_week_pane_t

0x2bda,	// (0x0003161d) cell_cale_month_pane_ParamLimits

0x2bda,	// (0x0003161d) cell_cale_month_pane

0x2d18,	// (0x0003175b) cell_cale_month_pane_g1

0x0125,	// (0x0002eb68) cell_cale_month_pane_t1_ParamLimits

0x0125,	// (0x0002eb68) cell_cale_month_pane_t1

0xa4bd,	// (0x00038f00) grid_highlight_pane_cp08

0xa272,	// (0x00038cb5) main_smil_g1

0x2d24,	// (0x00031767) smil_status_pane

0xa84f,	// (0x00039292) smil_text_pane

0xc0b6,	// (0x0003aaf9) bg_popup_call3_rect_pane_g8

0xc0be,	// (0x0003ab01) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c2,	// (0x0003df05) bg_popup_call3_rect_pane_g

0xc269,	// (0x0003acac) smil_status_volume_pane_g1

0xa859,	// (0x0003929c) smil_status_pane_t1

0x40ec,	// (0x00032b2f) volume_smil_pane

0xa870,	// (0x000392b3) list_smil_text_pane

0x2d39,	// (0x0003177c) scroll_pane_cp011

0x2d44,	// (0x00031787) smil_text_list_pane_t1_ParamLimits

0x2d44,	// (0x00031787) smil_text_list_pane_t1

0x2d90,	// (0x000317d3) aid_volume_smil_ParamLimits

0x2d90,	// (0x000317d3) aid_volume_smil

0xa272,	// (0x00038cb5) smil_volume_pane_g1

0xa272,	// (0x00038cb5) smil_volume_pane_g2

0x0001,

0xf236,	// (0x0003dc79) smil_volume_pane_g

0x156d,	// (0x0002ffb0) listscroll_cale_day_pane

0xa87a,	// (0x000392bd) bg_cale_pane

0xa892,	// (0x000392d5) list_cale_pane

0xa8b5,	// (0x000392f8) scroll_pane_cp09

0xa8c6,	// (0x00039309) cale_bg_pane_g1

0xa8ce,	// (0x00039311) cale_bg_pane_g2

0xa8d6,	// (0x00039319) cale_bg_pane_g3

0xa8de,	// (0x00039321) cale_bg_pane_g4

0xa8e6,	// (0x00039329) cale_bg_pane_g5

0xa8ee,	// (0x00039331) cale_bg_pane_g6

0xa8f6,	// (0x00039339) cale_bg_pane_g7

0xa8fe,	// (0x00039341) cale_bg_pane_g8

0xa906,	// (0x00039349) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x0003dc7e) cale_bg_pane_g

0xa90e,	// (0x00039351) list_cale_time_pane_ParamLimits

0xa90e,	// (0x00039351) list_cale_time_pane

0xa925,	// (0x00039368) list_cale_time_pane_g1_ParamLimits

0xa925,	// (0x00039368) list_cale_time_pane_g1

0xa931,	// (0x00039374) list_cale_time_pane_g2_ParamLimits

0xa931,	// (0x00039374) list_cale_time_pane_g2

0x2dba,	// (0x000317fd) list_cale_time_pane_g3_ParamLimits

0x2dba,	// (0x000317fd) list_cale_time_pane_g3

0x2dc8,	// (0x0003180b) list_cale_time_pane_g4_ParamLimits

0x2dc8,	// (0x0003180b) list_cale_time_pane_g4

0x2dd6,	// (0x00031819) list_cale_time_pane_g5_ParamLimits

0x2dd6,	// (0x00031819) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x0003dc91) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x0003dc91) list_cale_time_pane_g

0xa94b,	// (0x0003938e) list_cale_time_pane_t1_ParamLimits

0xa94b,	// (0x0003938e) list_cale_time_pane_t1

0xa973,	// (0x000393b6) list_cale_time_pane_t2_ParamLimits

0xa973,	// (0x000393b6) list_cale_time_pane_t2

0x30f7,	// (0x00031b3a) aid_blid_cardinal_pane

0x3135,	// (0x00031b78) compass_pane_t4

0xa99b,	// (0x000393de) list_cale_time_pane_t4_ParamLimits

0xa99b,	// (0x000393de) list_cale_time_pane_t4

0x3143,	// (0x00031b86) compass_pane_t5

0x3153,	// (0x00031b96) compass_pane_t6

0x3161,	// (0x00031ba4) compass_pane_t7

0xaddf,	// (0x00039822) navi_pane_cc_t1

0xaf2c,	// (0x0003996f) aid_phob_thumbnail_center_pane

0x3720,	// (0x00032163) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x0003dc9e) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x0003dc9e) list_cale_time_pane_t

0x9c56,	// (0x00038699) bg_popup_window_pane_cp02_ParamLimits

0x9c56,	// (0x00038699) bg_popup_window_pane_cp02

0xa9c3,	// (0x00039406) heading_pane_cp01_ParamLimits

0xa9c3,	// (0x00039406) heading_pane_cp01

0xa9cf,	// (0x00039412) loc_req_pane_ParamLimits

0xa9cf,	// (0x00039412) loc_req_pane

0xa9df,	// (0x00039422) loc_type_pane_ParamLimits

0xa9df,	// (0x00039422) loc_type_pane

0xa9f1,	// (0x00039434) loc_type_pane_t1_ParamLimits

0xa9f1,	// (0x00039434) loc_type_pane_t1

0xaa03,	// (0x00039446) loc_type_pane_t2_ParamLimits

0xaa03,	// (0x00039446) loc_type_pane_t2

0xaa15,	// (0x00039458) loc_type_pane_t3_ParamLimits

0xaa15,	// (0x00039458) loc_type_pane_t3

0x0002,

0xf262,	// (0x0003dca5) loc_type_pane_t_ParamLimits

0xf262,	// (0x0003dca5) loc_type_pane_t

0xaa27,	// (0x0003946a) list_loc_req_pane

0xaa31,	// (0x00039474) scroll_pane_cp012

0x2de4,	// (0x00031827) list_single_loc_request_popup_menu_pane_ParamLimits

0x2de4,	// (0x00031827) list_single_loc_request_popup_menu_pane

0xaa3c,	// (0x0003947f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaa3c,	// (0x0003947f) list_single_loc_request_popup_menu_pane_g1

0xaa48,	// (0x0003948b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaa48,	// (0x0003948b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x0003dcac) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x0003dcac) list_single_loc_request_popup_menu_pane_g

0xaa54,	// (0x00039497) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaa54,	// (0x00039497) list_single_loc_request_popup_menu_pane_t1

0xa25a,	// (0x00038c9d) bg_popup_window_pane_cp03_ParamLimits

0xa25a,	// (0x00038c9d) bg_popup_window_pane_cp03

0xad47,	// (0x0003978a) heading_loc_req_pane_ParamLimits

0xad47,	// (0x0003978a) heading_loc_req_pane

0x2df1,	// (0x00031834) popup_dyc_status_message_window_g1_ParamLimits

0x2df1,	// (0x00031834) popup_dyc_status_message_window_g1

0x2e05,	// (0x00031848) popup_dyc_status_message_window_t1_ParamLimits

0x2e05,	// (0x00031848) popup_dyc_status_message_window_t1

0x2e1a,	// (0x0003185d) popup_dyc_status_message_window_t2_ParamLimits

0x2e1a,	// (0x0003185d) popup_dyc_status_message_window_t2

0x2e2f,	// (0x00031872) popup_dyc_status_message_window_t3_ParamLimits

0x2e2f,	// (0x00031872) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x0003dcb1) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x0003dcb1) popup_dyc_status_message_window_t

0x9fff,	// (0x00038a42) bg_heading_pane_cp01

0xaa6a,	// (0x000394ad) heading_loc_req_pane_g1

0xaa72,	// (0x000394b5) heading_loc_req_pane_g2

0xaa7a,	// (0x000394bd) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x0003dcb8) heading_loc_req_pane_g

0xaa82,	// (0x000394c5) heading_loc_req_pane_t1

0xaaa2,	// (0x000394e5) bg_popup_sub_pane_cp01_ParamLimits

0xaaa2,	// (0x000394e5) bg_popup_sub_pane_cp01

0xaab0,	// (0x000394f3) popup_cale_events_window_g1_ParamLimits

0xaab0,	// (0x000394f3) popup_cale_events_window_g1

0xaad0,	// (0x00039513) popup_cale_events_window_g2_ParamLimits

0xaad0,	// (0x00039513) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x0003dcda) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x0003dcda) popup_cale_events_window_g

0xaaf0,	// (0x00039533) popup_cale_events_window_t1_ParamLimits

0xaaf0,	// (0x00039533) popup_cale_events_window_t1

0xab02,	// (0x00039545) popup_cale_events_window_t2_ParamLimits

0xab02,	// (0x00039545) popup_cale_events_window_t2

0xab40,	// (0x00039583) popup_cale_events_window_t3_ParamLimits

0xab40,	// (0x00039583) popup_cale_events_window_t3

0xab7a,	// (0x000395bd) popup_cale_events_window_t4_ParamLimits

0xab7a,	// (0x000395bd) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x0003dcdf) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x0003dcdf) popup_cale_events_window_t

0x2e57,	// (0x0003189a) call_type_pane

0x2e67,	// (0x000318aa) popup_call_status_window_g1

0x2e7b,	// (0x000318be) popup_call_status_window_g2

0x2e8f,	// (0x000318d2) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x0003dce8) popup_call_status_window_g

0xabb0,	// (0x000395f3) call_type_pane_g1

0xabb9,	// (0x000395fc) call_type_pane_g2

0x0001,

0xf2ac,	// (0x0003dcef) call_type_pane_g

0x9fff,	// (0x00038a42) bg_popup_sub_pane_cp02

0xabc2,	// (0x00039605) listscroll_popup_wml_pane

0xabca,	// (0x0003960d) list_wml_pane

0xabd4,	// (0x00039617) scroll_pane_cp013

0xabdf,	// (0x00039622) list_single_graphic_popup_wml_pane_ParamLimits

0xabdf,	// (0x00039622) list_single_graphic_popup_wml_pane

0xa272,	// (0x00038cb5) list_single_graphic_popup_wml_pane_g1

0xabf3,	// (0x00039636) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x0003dcf4) list_single_graphic_popup_wml_pane_g

0xabfb,	// (0x0003963e) list_single_graphic_popup_wml_pane_t1

0xac11,	// (0x00039654) aid_call_pane

0xa252,	// (0x00038c95) popup_clock_analogue_window_g1

0xa252,	// (0x00038c95) popup_clock_analogue_window_g2

0x2e9f,	// (0x000318e2) popup_clock_analogue_window_g3

0x2e9f,	// (0x000318e2) popup_clock_analogue_window_g4

0xa272,	// (0x00038cb5) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x0003dcf9) popup_clock_analogue_window_g

0x2ea7,	// (0x000318ea) popup_clock_analogue_window_t1

0x2eb5,	// (0x000318f8) clock_digital_number_pane_ParamLimits

0x2eb5,	// (0x000318f8) clock_digital_number_pane

0x2ec1,	// (0x00031904) clock_digital_number_pane_cp02_ParamLimits

0x2ec1,	// (0x00031904) clock_digital_number_pane_cp02

0x2ecd,	// (0x00031910) clock_digital_number_pane_cp03_ParamLimits

0x2ecd,	// (0x00031910) clock_digital_number_pane_cp03

0x2ed9,	// (0x0003191c) clock_digital_number_pane_cp04_ParamLimits

0x2ed9,	// (0x0003191c) clock_digital_number_pane_cp04

0x2ee5,	// (0x00031928) clock_digital_separator_pane_ParamLimits

0x2ee5,	// (0x00031928) clock_digital_separator_pane

0x2ef1,	// (0x00031934) popup_clock_digital_window_t1

0xa272,	// (0x00038cb5) clock_digital_number_pane_g1

0xa272,	// (0x00038cb5) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x0003dc79) clock_digital_number_pane_g

0xa272,	// (0x00038cb5) clock_digital_separator_pane_g1

0xa272,	// (0x00038cb5) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x0003dc79) clock_digital_separator_pane_g

0x9fff,	// (0x00038a42) bg_popup_window_pane_cp04

0xac19,	// (0x0003965c) heading_pane_cp03

0xa50a,	// (0x00038f4d) listscroll_popup_gms_pane

0x9fff,	// (0x00038a42) grid_large_graphic_popup_pane

0xac22,	// (0x00039665) listscroll_popup_gms_pane_g1

0xac2b,	// (0x0003966e) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x0003dd04) listscroll_popup_gms_pane_g

0xac34,	// (0x00039677) scroll_pane_cp014

0xa2d5,	// (0x00038d18) cell_large_graphic_popup_pane_ParamLimits

0xa2d5,	// (0x00038d18) cell_large_graphic_popup_pane

0xa2e3,	// (0x00038d26) cell_large_graphic_popup_pane_g1_ParamLimits

0xa2e3,	// (0x00038d26) cell_large_graphic_popup_pane_g1

0xac3d,	// (0x00039680) cell_large_graphic_popup_pane_g2_ParamLimits

0xac3d,	// (0x00039680) cell_large_graphic_popup_pane_g2

0xac4b,	// (0x0003968e) cell_large_graphic_popup_pane_g3_ParamLimits

0xac4b,	// (0x0003968e) cell_large_graphic_popup_pane_g3

0xac59,	// (0x0003969c) cell_large_graphic_popup_pane_g4_ParamLimits

0xac59,	// (0x0003969c) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x0003dd09) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x0003dd09) cell_large_graphic_popup_pane_g

0x9fff,	// (0x00038a42) grid_highlight_pane_cp010

0xa272,	// (0x00038cb5) bg_popup_call_pane_g1

0xac6a,	// (0x000396ad) list_single_graphic_popup_conf_pane_ParamLimits

0xac6a,	// (0x000396ad) list_single_graphic_popup_conf_pane

0xac7c,	// (0x000396bf) list_highlight_pane_cp01

0xac85,	// (0x000396c8) list_single_graphic_popup_conf_pane_g1

0xac8d,	// (0x000396d0) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x0003dd12) list_single_graphic_popup_conf_pane_g

0xac95,	// (0x000396d8) list_single_graphic_popup_conf_pane_t1

0xaca3,	// (0x000396e6) linegrid_cams_pane_g1

0x2f0e,	// (0x00031951) linegrid_cams_pane_g2

0xa4f0,	// (0x00038f33) linegrid_cams_pane_g3

0xacac,	// (0x000396ef) linegrid_cams_pane_g4

0x2f17,	// (0x0003195a) linegrid_cams_pane_g5

0x2f20,	// (0x00031963) linegrid_cams_pane_g6

0xa4f9,	// (0x00038f3c) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x0003dd17) linegrid_cams_pane_g

0xacb5,	// (0x000396f8) popup_clock_analogue_window

0xacb5,	// (0x000396f8) popup_clock_digital_window

0x9fff,	// (0x00038a42) popup_phob_thumbnail_window

0xa272,	// (0x00038cb5) call_video_uplink_pane_g1

0xacbe,	// (0x00039701) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x0003dd26) call_video_uplink_pane_g

0xacc6,	// (0x00039709) video_uplink_pane

0xacce,	// (0x00039711) mce_image_pane_g1

0x2f2b,	// (0x0003196e) mce_image_pane_g2

0x2f35,	// (0x00031978) mce_image_pane_g3

0x2f3f,	// (0x00031982) mce_image_pane_g4

0x2f47,	// (0x0003198a) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x0003dd2b) mce_image_pane_g

0xacd8,	// (0x0003971b) control_top_pane_stacon_cp01_ParamLimits

0xacd8,	// (0x0003971b) control_top_pane_stacon_cp01

0xacec,	// (0x0003972f) uni_indicator_pane_stacon_cp01_ParamLimits

0xacec,	// (0x0003972f) uni_indicator_pane_stacon_cp01

0xacfd,	// (0x00039740) bg_popup_sub_pane_cp03

0x2f4f,	// (0x00031992) chi_dic_find_pane

0x2f57,	// (0x0003199a) listscroll_chi_dic_pane

0x2f60,	// (0x000319a3) main_pane_chidic_g1

0x2f73,	// (0x000319b6) chi_dic_find_pane_t1

0xad07,	// (0x0003974a) find_chidic_pane

0xad10,	// (0x00039753) chi_dic_list_pane_ParamLimits

0xad10,	// (0x00039753) chi_dic_list_pane

0xad53,	// (0x00039796) scroll_pane_cp020

0x2f81,	// (0x000319c4) find_chidic_pane_t1

0x9fff,	// (0x00038a42) input_focus_pane_cp06

0x2f90,	// (0x000319d3) list_chi_dic_pane_ParamLimits

0x2f90,	// (0x000319d3) list_chi_dic_pane

0x2fa2,	// (0x000319e5) list_chi_dic_pane_t1_ParamLimits

0x2fa2,	// (0x000319e5) list_chi_dic_pane_t1

0x9fff,	// (0x00038a42) list_highlight_pane_cp020

0xad5b,	// (0x0003979e) bg_cale_heading_pane_g1

0x2fb5,	// (0x000319f8) bg_cale_heading_pane_g2

0x2fbd,	// (0x00031a00) bg_cale_heading_pane_g3

0x2fc5,	// (0x00031a08) bg_cale_heading_pane_g4

0x2fcf,	// (0x00031a12) bg_cale_heading_pane_g5

0x2fd9,	// (0x00031a1c) bg_cale_heading_pane_g6

0x2fe1,	// (0x00031a24) bg_cale_heading_pane_g7

0x2fe9,	// (0x00031a2c) bg_cale_heading_pane_g8

0x2ff3,	// (0x00031a36) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x0003dd36) bg_cale_heading_pane_g

0xad5b,	// (0x0003979e) bg_cale_side_pane_g1

0x2ffd,	// (0x00031a40) bg_cale_side_pane_g2

0x3007,	// (0x00031a4a) bg_cale_side_pane_g3

0x3011,	// (0x00031a54) bg_cale_side_pane_g4

0x301b,	// (0x00031a5e) bg_cale_side_pane_g5

0x3025,	// (0x00031a68) bg_cale_side_pane_g6

0x302f,	// (0x00031a72) bg_cale_side_pane_g7

0x3039,	// (0x00031a7c) bg_cale_side_pane_g8

0x3041,	// (0x00031a84) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x0003dd49) bg_cale_side_pane_g

0x3049,	// (0x00031a8c) popup_call_status_window_ParamLimits

0x3049,	// (0x00031a8c) popup_call_status_window

0xad63,	// (0x000397a6) stacon_top_pane

0xad6b,	// (0x000397ae) status_pane_ParamLimits

0xad6b,	// (0x000397ae) status_pane

0xad80,	// (0x000397c3) status_small_pane

0xad88,	// (0x000397cb) control_pane

0x9fff,	// (0x00038a42) stacon_bottom_pane

0xad90,	// (0x000397d3) list_single_mce_smart_pane_t1_ParamLimits

0xad90,	// (0x000397d3) list_single_mce_smart_pane_t1

0xada3,	// (0x000397e6) list_single_mce_smart_pane_t2_ParamLimits

0xada3,	// (0x000397e6) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x0003dd5c) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x0003dd5c) list_single_mce_smart_pane_t

0x3096,	// (0x00031ad9) compass_pane

0x30a1,	// (0x00031ae4) main_location2_pane_t1

0x30b7,	// (0x00031afa) main_location2_pane_t2

0x30cd,	// (0x00031b10) main_location2_pane_t3

0x0003,

0xf31e,	// (0x0003dd61) main_location2_pane_t

0xadc2,	// (0x00039805) compass_pane_g1_ParamLimits

0xadc2,	// (0x00039805) compass_pane_g1

0x3117,	// (0x00031b5a) compass_pane_t1

0x3126,	// (0x00031b69) compass_pane_t2

0x0005,

0xf327,	// (0x0003dd6a) compass_pane_t

0x3171,	// (0x00031bb4) text_secondary_cp61

0xadd6,	// (0x00039819) navi_pane_cams_g5

0xadf9,	// (0x0003983c) navi_pane_im_t1

0xae07,	// (0x0003984a) navi_pane_mp_g1_ParamLimits

0xae07,	// (0x0003984a) navi_pane_mp_g1

0xae1b,	// (0x0003985e) navi_pane_mp_g2_ParamLimits

0xae1b,	// (0x0003985e) navi_pane_mp_g2

0xae27,	// (0x0003986a) navi_pane_mp_g3_ParamLimits

0xae27,	// (0x0003986a) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x0003dd7e) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x0003dd7e) navi_pane_mp_g

0xae33,	// (0x00039876) navi_pane_mp_t1

0xae41,	// (0x00039884) navi_pane_mp_t2

0x0002,

0xf342,	// (0x0003dd85) navi_pane_mp_t

0xae7d,	// (0x000398c0) navi_pane_vt_g1

0xae33,	// (0x00039876) navi_pane_vt_t1

0xae85,	// (0x000398c8) navi_slider_pane

0xa50a,	// (0x00038f4d) zooming_pane

0xae8d,	// (0x000398d0) navi_slider_pane_g1

0x32ba,	// (0x00031cfd) navi_slider_pane_g2

0x0006,

0xf349,	// (0x0003dd8c) navi_slider_pane_g

0xaeb1,	// (0x000398f4) aid_levels_zoom

0xaeb9,	// (0x000398fc) zooming_pane_g1

0xaec1,	// (0x00039904) zooming_pane_g2

0xaec1,	// (0x00039904) zooming_pane_g3

0x0002,

0xf358,	// (0x0003dd9b) zooming_pane_g

0xaec9,	// (0x0003990c) level_10_zoom

0xaed2,	// (0x00039915) level_11_zoom

0xaedb,	// (0x0003991e) level_1_zoom

0xaee4,	// (0x00039927) level_2_zoom

0xaeed,	// (0x00039930) level_3_zoom

0xaef6,	// (0x00039939) level_4_zoom

0xaeff,	// (0x00039942) level_5_zoom

0xaf08,	// (0x0003994b) level_6_zoom

0xaf11,	// (0x00039954) level_7_zoom

0xaf1a,	// (0x0003995d) level_8_zoom

0xaf23,	// (0x00039966) level_9_zoom

0xaf34,	// (0x00039977) popup_phob_thumbnail_window_g1

0xaf3c,	// (0x0003997f) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x0003dda2) popup_phob_thumbnail_window_g

0x3e1b,	// (0x0003285e) level_1_location

0x3e23,	// (0x00032866) level_2_location

0x3e2b,	// (0x0003286e) level_3_location

0x3e35,	// (0x00032878) level_4_location

0xa50a,	// (0x00038f4d) level_5_location

0x32cc,	// (0x00031d0f) mce_icon_pane_g1

0x32d6,	// (0x00031d19) mce_icon_pane_g2

0x0001,

0xf364,	// (0x0003dda7) mce_icon_pane_g

0xaf44,	// (0x00039987) main_mup_pane_g1_ParamLimits

0xaf44,	// (0x00039987) main_mup_pane_g1

0xaf44,	// (0x00039987) main_mup_pane_g2_ParamLimits

0xaf44,	// (0x00039987) main_mup_pane_g2

0xaf44,	// (0x00039987) main_mup_pane_g3_ParamLimits

0xaf44,	// (0x00039987) main_mup_pane_g3

0xaf44,	// (0x00039987) main_mup_pane_g4_ParamLimits

0xaf44,	// (0x00039987) main_mup_pane_g4

0xaf44,	// (0x00039987) main_mup_pane_g5_ParamLimits

0xaf44,	// (0x00039987) main_mup_pane_g5

0xaf44,	// (0x00039987) main_mup_pane_g6_ParamLimits

0xaf44,	// (0x00039987) main_mup_pane_g6

0xaf44,	// (0x00039987) main_mup_pane_g7_ParamLimits

0xaf44,	// (0x00039987) main_mup_pane_g7

0xaf44,	// (0x00039987) main_mup_pane_g8_ParamLimits

0xaf44,	// (0x00039987) main_mup_pane_g8

0xaf44,	// (0x00039987) main_mup_pane_g9_ParamLimits

0xaf44,	// (0x00039987) main_mup_pane_g9

0xaf44,	// (0x00039987) main_mup_pane_g10_ParamLimits

0xaf44,	// (0x00039987) main_mup_pane_g10

0xaf44,	// (0x00039987) main_mup_pane_g11_ParamLimits

0xaf44,	// (0x00039987) main_mup_pane_g11

0xa2e3,	// (0x00038d26) main_mup_pane_g12_ParamLimits

0xa2e3,	// (0x00038d26) main_mup_pane_g12

0xaf44,	// (0x00039987) main_mup_pane_g13_ParamLimits

0xaf44,	// (0x00039987) main_mup_pane_g13

0x000c,

0xf369,	// (0x0003ddac) main_mup_pane_g_ParamLimits

0xf369,	// (0x0003ddac) main_mup_pane_g

0xaf52,	// (0x00039995) main_mup_pane_t1_ParamLimits

0xaf52,	// (0x00039995) main_mup_pane_t1

0xaf52,	// (0x00039995) main_mup_pane_t2_ParamLimits

0xaf52,	// (0x00039995) main_mup_pane_t2

0xaf52,	// (0x00039995) main_mup_pane_t3_ParamLimits

0xaf52,	// (0x00039995) main_mup_pane_t3

0xa512,	// (0x00038f55) main_mup_pane_t4_ParamLimits

0xa512,	// (0x00038f55) main_mup_pane_t4

0xa512,	// (0x00038f55) main_mup_pane_t5_ParamLimits

0xa512,	// (0x00038f55) main_mup_pane_t5

0xaf66,	// (0x000399a9) main_mup_pane_t6_ParamLimits

0xaf66,	// (0x000399a9) main_mup_pane_t6

0x0005,

0xf384,	// (0x0003ddc7) main_mup_pane_t_ParamLimits

0xf384,	// (0x0003ddc7) main_mup_pane_t

0xa2d5,	// (0x00038d18) mup_progress_pane_ParamLimits

0xa2d5,	// (0x00038d18) mup_progress_pane

0xaf7a,	// (0x000399bd) mup_visualizer_pane_ParamLimits

0xaf7a,	// (0x000399bd) mup_visualizer_pane

0xaf7a,	// (0x000399bd) mup_volume_pane_ParamLimits

0xaf7a,	// (0x000399bd) mup_volume_pane

0xa2f1,	// (0x00038d34) mup_visualizer_pane_g1_ParamLimits

0xa2f1,	// (0x00038d34) mup_visualizer_pane_g1

0xaf88,	// (0x000399cb) mup_visualizer_pane_g2_ParamLimits

0xaf88,	// (0x000399cb) mup_visualizer_pane_g2

0xa2e3,	// (0x00038d26) mup_visualizer_pane_g3_ParamLimits

0xa2e3,	// (0x00038d26) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x0003ddd4) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x0003ddd4) mup_visualizer_pane_g

0xa540,	// (0x00038f83) mup_volume_pane_g1

0xa540,	// (0x00038f83) mup_volume_pane_g2

0x0001,

0xf398,	// (0x0003dddb) mup_volume_pane_g

0xa540,	// (0x00038f83) mup_progress_pane_g1

0xa540,	// (0x00038f83) mup_progress_pane_g2

0xa540,	// (0x00038f83) mup_progress_pane_g3

0x0002,

0xf39d,	// (0x0003dde0) mup_progress_pane_g

0x9fff,	// (0x00038a42) bg_popup_window_pane_cp05

0xaf96,	// (0x000399d9) heading_pane_cp02_ParamLimits

0xaf96,	// (0x000399d9) heading_pane_cp02

0xafb2,	// (0x000399f5) list_popup_blid_pane

0xafba,	// (0x000399fd) list_blid_sat_info_pane_ParamLimits

0xafba,	// (0x000399fd) list_blid_sat_info_pane

0xafcd,	// (0x00039a10) list_blid_sat_info_pane_g1

0xafd5,	// (0x00039a18) list_blid_sat_info_pane_t1

0x33ea,	// (0x00031e2d) mup_equalizer_pane_ParamLimits

0x33ea,	// (0x00031e2d) mup_equalizer_pane

0x340b,	// (0x00031e4e) mup_equalizer_pane_cp1_ParamLimits

0x340b,	// (0x00031e4e) mup_equalizer_pane_cp1

0x342c,	// (0x00031e6f) mup_equalizer_pane_cp2_ParamLimits

0x342c,	// (0x00031e6f) mup_equalizer_pane_cp2

0x3451,	// (0x00031e94) mup_equalizer_pane_cp3_ParamLimits

0x3451,	// (0x00031e94) mup_equalizer_pane_cp3

0x347a,	// (0x00031ebd) mup_equalizer_pane_cp4_ParamLimits

0x347a,	// (0x00031ebd) mup_equalizer_pane_cp4

0x34a3,	// (0x00031ee6) mup_equalizer_pane_cp5

0x34bb,	// (0x00031efe) mup_equalizer_pane_cp6

0x34d3,	// (0x00031f16) mup_equalizer_pane_cp7

0xc136,	// (0x0003ab79) bg_popup_call_poc_act_pane_g9

0xc13e,	// (0x0003ab81) bg_popup_call_poc_act_pane_g10

0xc146,	// (0x0003ab89) bg_popup_call_poc_act_pane_g11

0x000a,

0xa25a,	// (0x00038c9d) mup_scale_pane

0xa272,	// (0x00038cb5) mup_scale_pane_g1

0xafe3,	// (0x00039a26) mup_scale_pane_g2

0x0006,

0xf3b9,	// (0x0003ddfc) mup_scale_pane_g

0xb007,	// (0x00039a4a) msg_data_pane

0xb00f,	// (0x00039a52) scroll_pane_cp017

0x34fd,	// (0x00031f40) bg_list_pane_cp04_ParamLimits

0x34fd,	// (0x00031f40) bg_list_pane_cp04

0xb017,	// (0x00039a5a) msg_data_pane_g1

0x3523,	// (0x00031f66) msg_data_pane_g2

0x352d,	// (0x00031f70) msg_data_pane_g3

0x3537,	// (0x00031f7a) msg_data_pane_g4

0x353f,	// (0x00031f82) msg_data_pane_g5

0x3547,	// (0x00031f8a) msg_data_pane_g6

0x354f,	// (0x00031f92) msg_data_pane_g7

0x0006,

0xf3c8,	// (0x0003de0b) msg_data_pane_g

0x3557,	// (0x00031f9a) msg_text_pane_ParamLimits

0x3557,	// (0x00031f9a) msg_text_pane

0x358a,	// (0x00031fcd) qrid_highlight_pane_cp011_ParamLimits

0x358a,	// (0x00031fcd) qrid_highlight_pane_cp011

0x9fff,	// (0x00038a42) msg_body_pane

0x9fff,	// (0x00038a42) msg_header_pane

0xb028,	// (0x00039a6b) input_focus_pane_cp07

0x35ae,	// (0x00031ff1) msg_header_pane_t1_ParamLimits

0x35ae,	// (0x00031ff1) msg_header_pane_t1

0x35c4,	// (0x00032007) msg_header_pane_t2_ParamLimits

0x35c4,	// (0x00032007) msg_header_pane_t2

0x0001,

0xf3dc,	// (0x0003de1f) msg_header_pane_t_ParamLimits

0xf3dc,	// (0x0003de1f) msg_header_pane_t

0xb03d,	// (0x00039a80) msg_body_pane_g1

0x35db,	// (0x0003201e) msg_body_pane_t1_ParamLimits

0x35db,	// (0x0003201e) msg_body_pane_t1

0x360c,	// (0x0003204f) msg_body_pane_t2_ParamLimits

0x360c,	// (0x0003204f) msg_body_pane_t2

0x361e,	// (0x00032061) msg_body_pane_t3_ParamLimits

0x361e,	// (0x00032061) msg_body_pane_t3

0x0002,

0xf3e1,	// (0x0003de24) msg_body_pane_t_ParamLimits

0xf3e1,	// (0x0003de24) msg_body_pane_t

0x016d,	// (0x0002ebb0) main_viewer_pane_g1_ParamLimits

0x016d,	// (0x0002ebb0) main_viewer_pane_g1

0x017b,	// (0x0002ebbe) main_viewer_pane_g2_ParamLimits

0x017b,	// (0x0002ebbe) main_viewer_pane_g2

0x3666,	// (0x000320a9) main_viewer_pane_g3_ParamLimits

0x3666,	// (0x000320a9) main_viewer_pane_g3

0x3675,	// (0x000320b8) main_viewer_pane_g4_ParamLimits

0x3675,	// (0x000320b8) main_viewer_pane_g4

0x3684,	// (0x000320c7) main_viewer_pane_g5_ParamLimits

0x3684,	// (0x000320c7) main_viewer_pane_g5

0x3684,	// (0x000320c7) main_viewer_pane_g7_ParamLimits

0x3684,	// (0x000320c7) main_viewer_pane_g7

0x3696,	// (0x000320d9) main_viewer_pane_g8_ParamLimits

0x3696,	// (0x000320d9) main_viewer_pane_g8

0x0007,

0xf3f1,	// (0x0003de34) main_viewer_pane_g_ParamLimits

0xf3f1,	// (0x0003de34) main_viewer_pane_g

0xb045,	// (0x00039a88) viewer_content_pane_ParamLimits

0xb045,	// (0x00039a88) viewer_content_pane

0x36dd,	// (0x00032120) main_postcard_pane_g1_ParamLimits

0x36dd,	// (0x00032120) main_postcard_pane_g1

0x36f3,	// (0x00032136) main_postcard_pane_g2_ParamLimits

0x36f3,	// (0x00032136) main_postcard_pane_g2

0x3709,	// (0x0003214c) main_postcard_pane_g3_ParamLimits

0x3709,	// (0x0003214c) main_postcard_pane_g3

0x0005,

0xf402,	// (0x0003de45) main_postcard_pane_g_ParamLimits

0xf402,	// (0x0003de45) main_postcard_pane_g

0x3720,	// (0x00032163) main_postcard_pane_g4

0xc27c,	// (0x0003acbf) smil_status_volume_pane_g2

0x3763,	// (0x000321a6) postcard_pane_ParamLimits

0x3763,	// (0x000321a6) postcard_pane

0xb053,	// (0x00039a96) postcard_pane_g1_ParamLimits

0xb053,	// (0x00039a96) postcard_pane_g1

0x37b3,	// (0x000321f6) postcard_pane_g2_ParamLimits

0x37b3,	// (0x000321f6) postcard_pane_g2

0x37bf,	// (0x00032202) postcard_pane_g3_ParamLimits

0x37bf,	// (0x00032202) postcard_pane_g3

0xb061,	// (0x00039aa4) postcard_pane_g4_ParamLimits

0xb061,	// (0x00039aa4) postcard_pane_g4

0x37cb,	// (0x0003220e) postcard_pane_g5_ParamLimits

0x37cb,	// (0x0003220e) postcard_pane_g5

0x37e0,	// (0x00032223) postcard_pane_g6_ParamLimits

0x37e0,	// (0x00032223) postcard_pane_g6

0xb053,	// (0x00039a96) postcard_pane_g7_ParamLimits

0xb053,	// (0x00039a96) postcard_pane_g7

0x0006,

0xf40f,	// (0x0003de52) postcard_pane_g_ParamLimits

0xf40f,	// (0x0003de52) postcard_pane_g

0x37f8,	// (0x0003223b) main_mp2_pane_g1_ParamLimits

0x37f8,	// (0x0003223b) main_mp2_pane_g1

0x3806,	// (0x00032249) main_mp2_pane_g2_ParamLimits

0x3806,	// (0x00032249) main_mp2_pane_g2

0x3812,	// (0x00032255) main_mp2_pane_g3_ParamLimits

0x3812,	// (0x00032255) main_mp2_pane_g3

0x0002,

0xf41e,	// (0x0003de61) main_mp2_pane_g_ParamLimits

0xf41e,	// (0x0003de61) main_mp2_pane_g

0x381e,	// (0x00032261) main_mp2_pane_t1_ParamLimits

0x381e,	// (0x00032261) main_mp2_pane_t1

0x3835,	// (0x00032278) main_mp2_pane_t2_ParamLimits

0x3835,	// (0x00032278) main_mp2_pane_t2

0x3847,	// (0x0003228a) main_mp2_pane_t3_ParamLimits

0x3847,	// (0x0003228a) main_mp2_pane_t3

0x0002,

0xf425,	// (0x0003de68) main_mp2_pane_t_ParamLimits

0xf425,	// (0x0003de68) main_mp2_pane_t

0xb06f,	// (0x00039ab2) pec_content_pane_ParamLimits

0xb06f,	// (0x00039ab2) pec_content_pane

0xa6b4,	// (0x000390f7) scroll_pane_cp015

0xb081,	// (0x00039ac4) pec_attribute_pane_ParamLimits

0xb081,	// (0x00039ac4) pec_attribute_pane

0x3859,	// (0x0003229c) pec_content_pane_g1_ParamLimits

0x3859,	// (0x0003229c) pec_content_pane_g1

0xb091,	// (0x00039ad4) pec_content_pane_t1_ParamLimits

0xb091,	// (0x00039ad4) pec_content_pane_t1

0xb0a3,	// (0x00039ae6) pec_content_pane_t2_ParamLimits

0xb0a3,	// (0x00039ae6) pec_content_pane_t2

0x0001,

0xf42c,	// (0x0003de6f) pec_content_pane_t_ParamLimits

0xf42c,	// (0x0003de6f) pec_content_pane_t

0x3865,	// (0x000322a8) list_single_graphic_pane_cp01_ParamLimits

0x3865,	// (0x000322a8) list_single_graphic_pane_cp01

0xa25a,	// (0x00038c9d) bg_popup_sub_pane_cp04

0xb0b5,	// (0x00039af8) popup_mup_playback_window_g1

0xb0c1,	// (0x00039b04) popup_mup_playback_window_t1

0xb0d6,	// (0x00039b19) popup_mup_playback_window_t2

0x0001,

0xf431,	// (0x0003de74) popup_mup_playback_window_t

0xb10d,	// (0x00039b50) main_image_pane_g1_ParamLimits

0xb10d,	// (0x00039b50) main_image_pane_g1

0xb150,	// (0x00039b93) scroll_pane_cp018_ParamLimits

0xb150,	// (0x00039b93) scroll_pane_cp018

0xb168,	// (0x00039bab) scroll_pane_cp016_ParamLimits

0xb168,	// (0x00039bab) scroll_pane_cp016

0x3937,	// (0x0003237a) smil2_image_pane_ParamLimits

0x3937,	// (0x0003237a) smil2_image_pane

0x396d,	// (0x000323b0) smil2_root_pane_ParamLimits

0x396d,	// (0x000323b0) smil2_root_pane

0x39a5,	// (0x000323e8) smil2_text_pane_ParamLimits

0x39a5,	// (0x000323e8) smil2_text_pane

0x9fff,	// (0x00038a42) bg_list_pane_cp06

0xb1a4,	// (0x00039be7) grid_radio_pane

0x9fff,	// (0x00038a42) bg_popup_window_pane_cp06

0xb1ae,	// (0x00039bf1) main_fmradio_pane_t1

0xc14e,	// (0x0003ab91) heading_pane_cp04

0xb1bc,	// (0x00039bff) main_fmradio_pane_t2

0xc156,	// (0x0003ab99) popup_cale_lunar_info_window_g1

0xb1ca,	// (0x00039c0d) main_fmradio_pane_t3

0xc15e,	// (0x0003aba1) popup_cale_lunar_info_window_g2

0xb1da,	// (0x00039c1d) main_fmradio_pane_t4

0x0001,

0xb1e8,	// (0x00039c2b) main_fmradio_pane_t5

0x0004,

0xf511,	// (0x0003df54) popup_cale_lunar_info_window_g

0xf446,	// (0x0003de89) main_fmradio_pane_t

0xb1f6,	// (0x00039c39) wait_bar_pane_cp03

0xb1fe,	// (0x00039c41) cell_fmradio_pane_ParamLimits

0xb1fe,	// (0x00039c41) cell_fmradio_pane

0xb053,	// (0x00039a96) cell_fmradio_pane_g1_ParamLimits

0xb053,	// (0x00039a96) cell_fmradio_pane_g1

0x9fff,	// (0x00038a42) grid_highlight_pane_cp011

0xb213,	// (0x00039c56) poc_content_pane_ParamLimits

0xb213,	// (0x00039c56) poc_content_pane

0xb225,	// (0x00039c68) scroll_pane_cp019

0x3a35,	// (0x00032478) popup_call_poc_act_window_ParamLimits

0x3a35,	// (0x00032478) popup_call_poc_act_window

0x3a59,	// (0x0003249c) popup_call_poc_inact_window_ParamLimits

0x3a59,	// (0x0003249c) popup_call_poc_inact_window

0xf4e8,	// (0x0003df2b) bg_popup_call_poc_act_pane_g

0xc0c6,	// (0x0003ab09) bg_popup_call_poc_inact_pane_g1

0xc0ce,	// (0x0003ab11) bg_popup_call_poc_inact_pane_g2

0xb22d,	// (0x00039c70) popup_call_poc_act_window_g2

0xc0d6,	// (0x0003ab19) bg_popup_call_poc_inact_pane_g3

0xc0de,	// (0x0003ab21) bg_popup_call_poc_inact_pane_g4

0xc0e6,	// (0x0003ab29) bg_popup_call_poc_inact_pane_g5

0xb235,	// (0x00039c78) popup_call_poc_act_window_t1_ParamLimits

0xb235,	// (0x00039c78) popup_call_poc_act_window_t1

0xb25d,	// (0x00039ca0) popup_call_poc_act_window_t2_ParamLimits

0xb25d,	// (0x00039ca0) popup_call_poc_act_window_t2

0xb285,	// (0x00039cc8) popup_call_poc_act_window_t3_ParamLimits

0xb285,	// (0x00039cc8) popup_call_poc_act_window_t3

0xb2ad,	// (0x00039cf0) popup_call_poc_act_window_t4_ParamLimits

0xb2ad,	// (0x00039cf0) popup_call_poc_act_window_t4

0x0003,

0xf451,	// (0x0003de94) popup_call_poc_act_window_t_ParamLimits

0xf451,	// (0x0003de94) popup_call_poc_act_window_t

0xc0ee,	// (0x0003ab31) bg_popup_call_poc_inact_pane_g6

0xc0f6,	// (0x0003ab39) bg_popup_call_poc_inact_pane_g7

0xc0fe,	// (0x0003ab41) bg_popup_call_poc_inact_pane_g8

0xb2bf,	// (0x00039d02) popup_call_poc_inact_window_g2

0xc106,	// (0x0003ab49) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4d5,	// (0x0003df18) bg_popup_call_poc_inact_pane_g

0xb2c7,	// (0x00039d0a) popup_call_poc_inact_window_t1_ParamLimits

0xb2c7,	// (0x00039d0a) popup_call_poc_inact_window_t1

0xb2dc,	// (0x00039d1f) popup_call_poc_inact_window_t2_ParamLimits

0xb2dc,	// (0x00039d1f) popup_call_poc_inact_window_t2

0xb2f1,	// (0x00039d34) popup_call_poc_inact_window_t3_ParamLimits

0xb2f1,	// (0x00039d34) popup_call_poc_inact_window_t3

0x0002,

0xf45a,	// (0x0003de9d) popup_call_poc_inact_window_t_ParamLimits

0xf45a,	// (0x0003de9d) popup_call_poc_inact_window_t

0xc1f4,	// (0x0003ac37) context_pane_ParamLimits

0x409e,	// (0x00032ae1) signal_pane_ParamLimits

0xa50a,	// (0x00038f4d) main_call2_pane

0x4028,	// (0x00032a6b) popup_phob_thumbnail2_window_ParamLimits

0x4028,	// (0x00032a6b) popup_phob_thumbnail2_window

0x3630,	// (0x00032073) aid_hotspot_pointer_arrow_pane

0x3638,	// (0x0003207b) aid_hotspot_pointer_hand_pane

0x3de3,	// (0x00032826) phob_pre_status_pane_g5

0xa27c,	// (0x00038cbf) cams_zoom_pane_ParamLimits

0xa27c,	// (0x00038cbf) image_vga_pane_ParamLimits

0xa2e3,	// (0x00038d26) main_camera_pane_g1_ParamLimits

0xa2e3,	// (0x00038d26) main_camera_pane_g2_ParamLimits

0xa2e3,	// (0x00038d26) main_camera_pane_g3_ParamLimits

0xa2e3,	// (0x00038d26) main_camera_pane_g4_ParamLimits

0xa2e3,	// (0x00038d26) main_camera_pane_g5_ParamLimits

0xa2e3,	// (0x00038d26) main_camera_pane_g6_ParamLimits

0xa2e3,	// (0x00038d26) main_camera_pane_g7_ParamLimits

0xf185,	// (0x0003dbc8) main_camera_pane_g_ParamLimits

0xa512,	// (0x00038f55) main_camera_pane_t1_ParamLimits

0xa512,	// (0x00038f55) main_camera_pane_t2_ParamLimits

0xf196,	// (0x0003dbd9) main_camera_pane_t_ParamLimits

0xa25a,	// (0x00038c9d) bg_popup_preview_window_pane_cp01_ParamLimits

0xa25a,	// (0x00038c9d) bg_popup_preview_window_pane_cp01

0xb306,	// (0x00039d49) popup_phob_thumbnail2_window_g1_ParamLimits

0xb306,	// (0x00039d49) popup_phob_thumbnail2_window_g1

0x9fff,	// (0x00038a42) call2_cli_visual_pane

0x3a8d,	// (0x000324d0) popup_call2_audio_conf_window_ParamLimits

0x3a8d,	// (0x000324d0) popup_call2_audio_conf_window

0x3ab5,	// (0x000324f8) popup_call2_audio_first_window_ParamLimits

0x3ab5,	// (0x000324f8) popup_call2_audio_first_window

0x3b4b,	// (0x0003258e) popup_call2_audio_in_window_ParamLimits

0x3b4b,	// (0x0003258e) popup_call2_audio_in_window

0x3b97,	// (0x000325da) popup_call2_audio_out_window_ParamLimits

0x3b97,	// (0x000325da) popup_call2_audio_out_window

0x3c09,	// (0x0003264c) popup_call2_audio_second_window_ParamLimits

0x3c09,	// (0x0003264c) popup_call2_audio_second_window

0x3c6f,	// (0x000326b2) popup_call2_audio_wait_window_ParamLimits

0x3c6f,	// (0x000326b2) popup_call2_audio_wait_window

0x9fff,	// (0x00038a42) bg_popup_call2_act_pane_cp03

0xa23c,	// (0x00038c7f) list_conf_pane_cp

0xb312,	// (0x00039d55) popup_call2_audio_conf_window_t1

0xb320,	// (0x00039d63) list_single_graphic_popup_conf2_pane_ParamLimits

0xb320,	// (0x00039d63) list_single_graphic_popup_conf2_pane

0xac7c,	// (0x000396bf) list_highlight_pane_cp04

0xb333,	// (0x00039d76) list_single_graphic_popup_conf2_pane_g1

0xac8d,	// (0x000396d0) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf461,	// (0x0003dea4) list_single_graphic_popup_conf2_pane_g

0xb33d,	// (0x00039d80) list_single_graphic_popup_conf2_pane_t1

0xb34b,	// (0x00039d8e) bg_popup_call2_act_pane_cp01_ParamLimits

0xb34b,	// (0x00039d8e) bg_popup_call2_act_pane_cp01

0xb3d5,	// (0x00039e18) call_type_pane_cp05_ParamLimits

0xb3d5,	// (0x00039e18) call_type_pane_cp05

0xb429,	// (0x00039e6c) popup_call2_audio_second_window_g1_ParamLimits

0xb429,	// (0x00039e6c) popup_call2_audio_second_window_g1

0xb47d,	// (0x00039ec0) popup_call2_audio_second_window_g2_ParamLimits

0xb47d,	// (0x00039ec0) popup_call2_audio_second_window_g2

0x0002,

0xf466,	// (0x0003dea9) popup_call2_audio_second_window_g_ParamLimits

0xf466,	// (0x0003dea9) popup_call2_audio_second_window_g

0xb4e2,	// (0x00039f25) popup_call2_audio_second_window_t1_ParamLimits

0xb4e2,	// (0x00039f25) popup_call2_audio_second_window_t1

0xb59d,	// (0x00039fe0) popup_call2_audio_second_window_t2_ParamLimits

0xb59d,	// (0x00039fe0) popup_call2_audio_second_window_t2

0xb5f0,	// (0x0003a033) popup_call2_audio_second_window_t3_ParamLimits

0xb5f0,	// (0x0003a033) popup_call2_audio_second_window_t3

0x0003,

0xf46d,	// (0x0003deb0) popup_call2_audio_second_window_t_ParamLimits

0xf46d,	// (0x0003deb0) popup_call2_audio_second_window_t

0x9fff,	// (0x00038a42) bg_popup_call2_in_pane_cp02

0xa009,	// (0x00038a4c) call_type_pane_cp04

0x3ca9,	// (0x000326ec) popup_call2_audio_wait_window_g1

0x3cb1,	// (0x000326f4) popup_call2_audio_wait_window_g2

0x0001,

0xf476,	// (0x0003deb9) popup_call2_audio_wait_window_g

0xa021,	// (0x00038a64) popup_call2_audio_wait_window_t3

0xb6e3,	// (0x0003a126) bg_popup_call2_act_pane_ParamLimits

0xb6e3,	// (0x0003a126) bg_popup_call2_act_pane

0xb7a3,	// (0x0003a1e6) call_type_pane_cp03_ParamLimits

0xb7a3,	// (0x0003a1e6) call_type_pane_cp03

0xb807,	// (0x0003a24a) popup_call2_audio_first_window_g1_ParamLimits

0xb807,	// (0x0003a24a) popup_call2_audio_first_window_g1

0xb877,	// (0x0003a2ba) popup_call2_audio_first_window_g2_ParamLimits

0xb877,	// (0x0003a2ba) popup_call2_audio_first_window_g2

0xb8db,	// (0x0003a31e) popup_call2_audio_first_window_g3_ParamLimits

0xb8db,	// (0x0003a31e) popup_call2_audio_first_window_g3

0x0004,

0xf47b,	// (0x0003debe) popup_call2_audio_first_window_g_ParamLimits

0xf47b,	// (0x0003debe) popup_call2_audio_first_window_g

0xb963,	// (0x0003a3a6) popup_call2_audio_first_window_t1_ParamLimits

0xb963,	// (0x0003a3a6) popup_call2_audio_first_window_t1

0xba66,	// (0x0003a4a9) popup_call2_audio_first_window_t4_ParamLimits

0xba66,	// (0x0003a4a9) popup_call2_audio_first_window_t4

0xbb49,	// (0x0003a58c) popup_call2_audio_first_window_t5_ParamLimits

0xbb49,	// (0x0003a58c) popup_call2_audio_first_window_t5

0x0003,

0xf486,	// (0x0003dec9) popup_call2_audio_first_window_t_ParamLimits

0xf486,	// (0x0003dec9) popup_call2_audio_first_window_t

0xa252,	// (0x00038c95) bg_popup_call2_act_pane_g1

0xc168,	// (0x0003abab) popup_cale_lunar_info_window_t1

0xc176,	// (0x0003abb9) popup_cale_lunar_info_window_t2

0xc184,	// (0x0003abc7) popup_cale_lunar_info_window_t3

0x9fff,	// (0x00038a42) bg_popup_call2_bubble_pane

0xbc4a,	// (0x0003a68d) bg_popup_call2_in_pane_cp01_ParamLimits

0xbc4a,	// (0x0003a68d) bg_popup_call2_in_pane_cp01

0x9cdb,	// (0x0003871e) call_type_pane_cp02

0x3cb9,	// (0x000326fc) popup_call2_audio_out_window_g1_ParamLimits

0x3cb9,	// (0x000326fc) popup_call2_audio_out_window_g1

0xbc92,	// (0x0003a6d5) popup_call2_audio_out_window_g2_ParamLimits

0xbc92,	// (0x0003a6d5) popup_call2_audio_out_window_g2

0x3ce5,	// (0x00032728) popup_call2_audio_out_window_g3_ParamLimits

0x3ce5,	// (0x00032728) popup_call2_audio_out_window_g3

0x0003,

0xf48f,	// (0x0003ded2) popup_call2_audio_out_window_g_ParamLimits

0xf48f,	// (0x0003ded2) popup_call2_audio_out_window_g

0xbcc9,	// (0x0003a70c) popup_call2_audio_out_window_t1_ParamLimits

0xbcc9,	// (0x0003a70c) popup_call2_audio_out_window_t1

0xbd28,	// (0x0003a76b) popup_call2_audio_out_window_t2_ParamLimits

0xbd28,	// (0x0003a76b) popup_call2_audio_out_window_t2

0xbd7c,	// (0x0003a7bf) popup_call2_audio_out_window_t3_ParamLimits

0xbd7c,	// (0x0003a7bf) popup_call2_audio_out_window_t3

0xbd92,	// (0x0003a7d5) popup_call2_audio_out_window_t4_ParamLimits

0xbd92,	// (0x0003a7d5) popup_call2_audio_out_window_t4

0xbda8,	// (0x0003a7eb) popup_call2_audio_out_window_t5_ParamLimits

0xbda8,	// (0x0003a7eb) popup_call2_audio_out_window_t5

0x0005,

0xf498,	// (0x0003dedb) popup_call2_audio_out_window_t_ParamLimits

0xf498,	// (0x0003dedb) popup_call2_audio_out_window_t

0xbe0c,	// (0x0003a84f) bg_popup_call2_in_pane_ParamLimits

0xbe0c,	// (0x0003a84f) bg_popup_call2_in_pane

0xbe68,	// (0x0003a8ab) popup_call2_audio_in_window_g1_ParamLimits

0xbe68,	// (0x0003a8ab) popup_call2_audio_in_window_g1

0xbea0,	// (0x0003a8e3) popup_call2_audio_in_window_g2_ParamLimits

0xbea0,	// (0x0003a8e3) popup_call2_audio_in_window_g2

0xbed8,	// (0x0003a91b) popup_call2_audio_in_window_g3_ParamLimits

0xbed8,	// (0x0003a91b) popup_call2_audio_in_window_g3

0x0003,

0xf4a5,	// (0x0003dee8) popup_call2_audio_in_window_g_ParamLimits

0xf4a5,	// (0x0003dee8) popup_call2_audio_in_window_g

0xbf30,	// (0x0003a973) popup_call2_audio_in_window_t1_ParamLimits

0xbf30,	// (0x0003a973) popup_call2_audio_in_window_t1

0xbfb0,	// (0x0003a9f3) popup_call2_audio_in_window_t2_ParamLimits

0xbfb0,	// (0x0003a9f3) popup_call2_audio_in_window_t2

0xc030,	// (0x0003aa73) popup_call2_audio_in_window_t3_ParamLimits

0xc030,	// (0x0003aa73) popup_call2_audio_in_window_t3

0xc04a,	// (0x0003aa8d) popup_call2_audio_in_window_t4_ParamLimits

0xc04a,	// (0x0003aa8d) popup_call2_audio_in_window_t4

0xc05c,	// (0x0003aa9f) popup_call2_audio_in_window_t5_ParamLimits

0xc05c,	// (0x0003aa9f) popup_call2_audio_in_window_t5

0xc071,	// (0x0003aab4) popup_call2_audio_in_window_t6_ParamLimits

0xc071,	// (0x0003aab4) popup_call2_audio_in_window_t6

0x0005,

0xf4ae,	// (0x0003def1) popup_call2_audio_in_window_t_ParamLimits

0xf4ae,	// (0x0003def1) popup_call2_audio_in_window_t

0xa252,	// (0x00038c95) bg_popup_call2_in_pane_g1

0xc192,	// (0x0003abd5) popup_cale_lunar_info_window_t4

0x0003,

0xf516,	// (0x0003df59) popup_cale_lunar_info_window_t

0xa25a,	// (0x00038c9d) bg_popup_call2_rect_pane_ParamLimits

0xa25a,	// (0x00038c9d) bg_popup_call2_rect_pane

0x9fff,	// (0x00038a42) call2_cli_visual_graphic_pane

0x9fff,	// (0x00038a42) call2_cli_visual_text_pane

0x40df,	// (0x00032b22) smil_status_volume_pane_g3

0x0002,

0xa272,	// (0x00038cb5) call2_cli_visual_graphic_pane_g1

0xa272,	// (0x00038cb5) call2_cli_visual_graphic_pane_g2

0xa272,	// (0x00038cb5) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4bb,	// (0x0003defe) call2_cli_visual_graphic_pane_g

0xc086,	// (0x0003aac9) bg_popup_call2_rect_pane_g1

0xa435,	// (0x00038e78) bg_popup_call2_rect_pane_g2

0xc08e,	// (0x0003aad1) bg_popup_call2_rect_pane_g3

0xc096,	// (0x0003aad9) bg_popup_call2_rect_pane_g4

0xc09e,	// (0x0003aae1) bg_popup_call2_rect_pane_g5

0xc0a6,	// (0x0003aae9) bg_popup_call2_rect_pane_g6

0xc0ae,	// (0x0003aaf1) bg_popup_call2_rect_pane_g7

0xc0b6,	// (0x0003aaf9) bg_popup_call2_rect_pane_g8

0xc0be,	// (0x0003ab01) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c2,	// (0x0003df05) bg_popup_call2_rect_pane_g

0xc0c6,	// (0x0003ab09) bg_popup_call2_bubble_pane_g1

0xc0ce,	// (0x0003ab11) bg_popup_call2_bubble_pane_g2

0xc0d6,	// (0x0003ab19) bg_popup_call2_bubble_pane_g3

0xc0de,	// (0x0003ab21) bg_popup_call2_bubble_pane_g4

0xc0e6,	// (0x0003ab29) bg_popup_call2_bubble_pane_g5

0xc0ee,	// (0x0003ab31) bg_popup_call2_bubble_pane_g6

0xc0f6,	// (0x0003ab39) bg_popup_call2_bubble_pane_g7

0xc0fe,	// (0x0003ab41) bg_popup_call2_bubble_pane_g8

0xc106,	// (0x0003ab49) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4d5,	// (0x0003df18) bg_popup_call2_bubble_pane_g

0x157d,	// (0x0002ffc0) aid_cale_week_size_cell_pane

0x1add,	// (0x00030520) aid_cams_cif_uncrop_pane_ParamLimits

0x1add,	// (0x00030520) aid_cams_cif_uncrop_pane

0x1c33,	// (0x00030676) aid_cams_size_cell_ParamLimits

0x1c33,	// (0x00030676) aid_cams_size_cell

0x1c47,	// (0x0003068a) grid_cams_pane_ParamLimits

0x1c61,	// (0x000306a4) linegrid_cams_pane_ParamLimits

0x1d3d,	// (0x00030780) call_video_pane_t1

0x1d57,	// (0x0003079a) call_video_pane_t2

0x0001,

0xf1e2,	// (0x0003dc25) call_video_pane_t

0x218f,	// (0x00030bd2) aid_cale_month_size_cell_pane_ParamLimits

0x218f,	// (0x00030bd2) aid_cale_month_size_cell_pane

0xf55a,	// (0x0003df9d) smil_status_volume_pane_g

0x40ec,	// (0x00032b2f) volume_smil_pane_ParamLimits

0x1206,	// (0x0002fc49) aid_popup2_width_pane

0x1496,	// (0x0002fed9) cell_qdial_pane_g4_ParamLimits

0x1496,	// (0x0002fed9) cell_qdial_pane_g4

0x30f7,	// (0x00031b3a) aid_blid_cardinal_pane_ParamLimits

0x3103,	// (0x00031b46) aid_blid_destination_pane_ParamLimits

0x3103,	// (0x00031b46) aid_blid_destination_pane

0xa25a,	// (0x00038c9d) bg_popup_call_poc_act_pane_ParamLimits

0xa25a,	// (0x00038c9d) bg_popup_call_poc_act_pane

0xa25a,	// (0x00038c9d) bg_popup_call_poc_inact_pane_ParamLimits

0xa25a,	// (0x00038c9d) bg_popup_call_poc_inact_pane

0xc10e,	// (0x0003ab51) bg_popup_call_poc_act_pane_g1

0xc116,	// (0x0003ab59) bg_popup_call_poc_act_pane_g2

0xc11e,	// (0x0003ab61) bg_popup_call_poc_act_pane_g3

0xc0de,	// (0x0003ab21) bg_popup_call_poc_act_pane_g4

0xc0e6,	// (0x0003ab29) bg_popup_call_poc_act_pane_g5

0xc126,	// (0x0003ab69) bg_popup_call_poc_act_pane_g6

0xc0f6,	// (0x0003ab39) bg_popup_call_poc_act_pane_g7

0xc12e,	// (0x0003ab71) bg_popup_call_poc_act_pane_g8

0x9fff,	// (0x00038a42) main_usb_pane

0x3fff,	// (0x00032a42) popup_cale_lunar_info_window

0x2024,	// (0x00030a67) im_reading_pane_t1_ParamLimits

0xa5fd,	// (0x00039040) list_im_pane_ParamLimits

0xa60e,	// (0x00039051) scroll_pane_cp07_ParamLimits

0x9fff,	// (0x00038a42) grid_highlight_pane_cp012

0xa25a,	// (0x00038c9d) mup_scale_pane_ParamLimits

0xb053,	// (0x00039a96) main_usb_pane_g1_ParamLimits

0xb053,	// (0x00039a96) main_usb_pane_g1

0x3d38,	// (0x0003277b) main_usb_pane_g2_ParamLimits

0x3d38,	// (0x0003277b) main_usb_pane_g2

0x0001,

0xf4ff,	// (0x0003df42) main_usb_pane_g_ParamLimits

0xf4ff,	// (0x0003df42) main_usb_pane_g

0x3d4e,	// (0x00032791) main_usb_pane_t1_ParamLimits

0x3d4e,	// (0x00032791) main_usb_pane_t1

0x3d60,	// (0x000327a3) main_usb_pane_t2_ParamLimits

0x3d60,	// (0x000327a3) main_usb_pane_t2

0x3d72,	// (0x000327b5) main_usb_pane_t3_ParamLimits

0x3d72,	// (0x000327b5) main_usb_pane_t3

0x3d84,	// (0x000327c7) main_usb_pane_t4_ParamLimits

0x3d84,	// (0x000327c7) main_usb_pane_t4

0x3d99,	// (0x000327dc) main_usb_pane_t5_ParamLimits

0x3d99,	// (0x000327dc) main_usb_pane_t5

0x3dae,	// (0x000327f1) main_usb_pane_t6_ParamLimits

0x3dae,	// (0x000327f1) main_usb_pane_t6

0x0005,

0xf504,	// (0x0003df47) main_usb_pane_t_ParamLimits

0x3096,	// (0x00031ad9) aid_text_placing

0x30a1,	// (0x00031ae4) main_location2_pane_t1_ParamLimits

0x30b7,	// (0x00031afa) main_location2_pane_t2_ParamLimits

0x30cd,	// (0x00031b10) main_location2_pane_t3_ParamLimits

0x30e3,	// (0x00031b26) main_location2_pane_t4_ParamLimits

0x30e3,	// (0x00031b26) main_location2_pane_t4

0xf31e,	// (0x0003dd61) main_location2_pane_t_ParamLimits

0xa296,	// (0x00038cd9) find_pinb_pane_g2_ParamLimits

0xa296,	// (0x00038cd9) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x0003dadd) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x0003dadd) find_pinb_pane_g

0xa2a2,	// (0x00038ce5) find_pinb_pane_t1_ParamLimits

0xa2b4,	// (0x00038cf7) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x0003dae2) find_pinb_pane_t_ParamLimits

0x9fff,	// (0x00038a42) main_call3_pane

0x2794,	// (0x000311d7) cale_month_day_heading_pane_t1_ParamLimits

0x281a,	// (0x0003125d) cale_month_day_heading_pane_t2_ParamLimits

0x2893,	// (0x000312d6) cale_month_day_heading_pane_t3_ParamLimits

0x290c,	// (0x0003134f) cale_month_day_heading_pane_t4_ParamLimits

0x298d,	// (0x000313d0) cale_month_day_heading_pane_t5_ParamLimits

0x2a16,	// (0x00031459) cale_month_day_heading_pane_t6_ParamLimits

0x2aa7,	// (0x000314ea) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x0003dc5d) cale_month_day_heading_pane_t_ParamLimits

0xa867,	// (0x000392aa) smil_status_volume_pane

0x3787,	// (0x000321ca) postcard_address_pane_ParamLimits

0x3787,	// (0x000321ca) postcard_address_pane

0x379d,	// (0x000321e0) postcard_message_pane_ParamLimits

0x379d,	// (0x000321e0) postcard_message_pane

0x3d11,	// (0x00032754) call2_cli_visual_pane_t1_ParamLimits

0x3d11,	// (0x00032754) call2_cli_visual_pane_t1

0xc2a7,	// (0x0003acea) postcard_message_pane_t1_ParamLimits

0xc2a7,	// (0x0003acea) postcard_message_pane_t1

0xc28f,	// (0x0003acd2) postcard_address_pane_t1_ParamLimits

0xc28f,	// (0x0003acd2) postcard_address_pane_t1

0x427c,	// (0x00032cbf) popup_call3_audio_in_window_ParamLimits

0x427c,	// (0x00032cbf) popup_call3_audio_in_window

0x4101,	// (0x00032b44) bg_popup_call3_in_pane_ParamLimits

0x4101,	// (0x00032b44) bg_popup_call3_in_pane

0x417d,	// (0x00032bc0) popup_call3_audio_in_window_g1_ParamLimits

0x417d,	// (0x00032bc0) popup_call3_audio_in_window_g1

0x419d,	// (0x00032be0) popup_call3_audio_in_window_g2_ParamLimits

0x419d,	// (0x00032be0) popup_call3_audio_in_window_g2

0x41bd,	// (0x00032c00) popup_call3_audio_in_window_g3_ParamLimits

0x41bd,	// (0x00032c00) popup_call3_audio_in_window_g3

0x0003,

0xf561,	// (0x0003dfa4) popup_call3_audio_in_window_g_ParamLimits

0xf561,	// (0x0003dfa4) popup_call3_audio_in_window_g

0x41ee,	// (0x00032c31) popup_call3_audio_in_window_t1_ParamLimits

0x41ee,	// (0x00032c31) popup_call3_audio_in_window_t1

0x422c,	// (0x00032c6f) popup_call3_audio_in_window_t2_ParamLimits

0x422c,	// (0x00032c6f) popup_call3_audio_in_window_t2

0x426a,	// (0x00032cad) popup_call3_audio_in_window_t3_ParamLimits

0x426a,	// (0x00032cad) popup_call3_audio_in_window_t3

0x0002,

0xf56a,	// (0x0003dfad) popup_call3_audio_in_window_t_ParamLimits

0xf56a,	// (0x0003dfad) popup_call3_audio_in_window_t

0xa50a,	// (0x00038f4d) bg_popup_call3_rect_pane

0xc086,	// (0x0003aac9) bg_popup_call3_rect_pane_g1

0xa435,	// (0x00038e78) bg_popup_call3_rect_pane_g2

0xc08e,	// (0x0003aad1) bg_popup_call3_rect_pane_g3

0xc096,	// (0x0003aad9) bg_popup_call3_rect_pane_g4

0xc09e,	// (0x0003aae1) bg_popup_call3_rect_pane_g5

0xc0a6,	// (0x0003aae9) bg_popup_call3_rect_pane_g6

0xc0ae,	// (0x0003aaf1) bg_popup_call3_rect_pane_g7

0x9bad,	// (0x000385f0) mup_visualizer_osc_pane

0x9bad,	// (0x000385f0) mup_visualizer_spec_pane

0x4131,	// (0x00032b74) call3_video_qcif_pane_ParamLimits

0x4131,	// (0x00032b74) call3_video_qcif_pane

0x4144,	// (0x00032b87) call3_video_qcif_uncrop_pane_ParamLimits

0x4144,	// (0x00032b87) call3_video_qcif_uncrop_pane

0x4154,	// (0x00032b97) call3_video_subqcif_pane_ParamLimits

0x4154,	// (0x00032b97) call3_video_subqcif_pane

0x416a,	// (0x00032bad) call3_video_subqcif_uncrop_pane_ParamLimits

0x416a,	// (0x00032bad) call3_video_subqcif_uncrop_pane

0x41dd,	// (0x00032c20) popup_call3_audio_in_window_g4_ParamLimits

0x41dd,	// (0x00032c20) popup_call3_audio_in_window_g4

0x9bad,	// (0x000385f0) mup_spec_half_pane

0x9bad,	// (0x000385f0) mup_spec_half_pane_cp

0x9bad,	// (0x000385f0) mup_osc_middle_pane

0xa540,	// (0x00038f83) mup_visualizer_osc_pane_g1

0xc242,	// (0x0003ac85) mup_spec_bar_pane_ParamLimits

0xc242,	// (0x0003ac85) mup_spec_bar_pane

0xa540,	// (0x00038f83) mup_spec_bar_pane_g1

0xa540,	// (0x00038f83) mup_spec_bar_pane_g2

0x0001,

0xf398,	// (0x0003dddb) mup_spec_bar_pane_g

0x157d,	// (0x0002ffc0) aid_cale_week_size_cell_pane_ParamLimits

0x1597,	// (0x0002ffda) bg_cale_heading_pane_ParamLimits

0x15bb,	// (0x0002fffe) bg_cale_pane_cp01_ParamLimits

0x15d8,	// (0x0003001b) cale_week_corner_pane_ParamLimits

0x15f7,	// (0x0003003a) cale_week_day_heading_pane_ParamLimits

0x1620,	// (0x00030063) cale_week_scroll_pane_g1_ParamLimits

0x163f,	// (0x00030082) cale_week_scroll_pane_g2_ParamLimits

0x1657,	// (0x0003009a) cale_week_scroll_pane_g3_ParamLimits

0x166f,	// (0x000300b2) cale_week_scroll_pane_g4_ParamLimits

0x1687,	// (0x000300ca) cale_week_scroll_pane_g5_ParamLimits

0x16a7,	// (0x000300ea) cale_week_scroll_pane_g6_ParamLimits

0x16c7,	// (0x0003010a) cale_week_scroll_pane_g7_ParamLimits

0x16eb,	// (0x0003012e) cale_week_scroll_pane_g8_ParamLimits

0x170f,	// (0x00030152) cale_week_scroll_pane_g9_ParamLimits

0x1727,	// (0x0003016a) cale_week_scroll_pane_g10_ParamLimits

0x173f,	// (0x00030182) cale_week_scroll_pane_g11_ParamLimits

0x1757,	// (0x0003019a) cale_week_scroll_pane_g12_ParamLimits

0x177b,	// (0x000301be) cale_week_scroll_pane_g13_ParamLimits

0x177b,	// (0x000301be) cale_week_scroll_pane_g14_ParamLimits

0x177b,	// (0x000301be) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x0003db6e) cale_week_scroll_pane_g_ParamLimits

0x17c3,	// (0x00030206) cale_week_time_pane_ParamLimits

0x17e7,	// (0x0003022a) grid_cale_week_pane_ParamLimits

0xa480,	// (0x00038ec3) listscroll_cale_week_pane_t1

0xa492,	// (0x00038ed5) scroll_pane_cp08_ParamLimits

0x2207,	// (0x00030c4a) cale_month_corner_pane_ParamLimits

0xa83d,	// (0x00039280) cale_month_pane_t1

0x270f,	// (0x00031152) cale_month_week_pane_ParamLimits

0x2e67,	// (0x000318aa) popup_call_status_window_g1_ParamLimits

0x2e7b,	// (0x000318be) popup_call_status_window_g2_ParamLimits

0x2e8f,	// (0x000318d2) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x0003dce8) popup_call_status_window_g_ParamLimits

0xac09,	// (0x0003964c) aid_call2_pane

0x35a0,	// (0x00031fe3) msg_header_pane_g1

0x3787,	// (0x000321ca) postcard_address2_pane_ParamLimits

0x3787,	// (0x000321ca) postcard_address2_pane

0x379d,	// (0x000321e0) postcard_message2_pane_ParamLimits

0x379d,	// (0x000321e0) postcard_message2_pane

0x40ac,	// (0x00032aef) message2_row_pane_ParamLimits

0x40ac,	// (0x00032aef) message2_row_pane

0x40cc,	// (0x00032b0f) address2_row_pane_ParamLimits

0x40cc,	// (0x00032b0f) address2_row_pane

0xc20f,	// (0x0003ac52) postcard_message2_row_pane_g1

0xc217,	// (0x0003ac5a) postcard_message2_row_pane_t1

0xc20f,	// (0x0003ac52) address2_row_pane_g1

0xc217,	// (0x0003ac5a) address2_row_pane_t1

0x1a66,	// (0x000304a9) aid_size_cell_vorec

0x9fff,	// (0x00038a42) main_rss_pane

0xc225,	// (0x0003ac68) rss_list_single_pane_ParamLimits

0xc225,	// (0x0003ac68) rss_list_single_pane

0xc233,	// (0x0003ac76) rss_list_single_pane_t1

0xc233,	// (0x0003ac76) rss_list_single_pane_t2

0x0001,

0xf555,	// (0x0003df98) rss_list_single_pane_t

0x9fff,	// (0x00038a42) main_camera2_pane

0x9fff,	// (0x00038a42) main_video2_pane

0x4290,	// (0x00032cd3) cams_zoom_pane_cp2_ParamLimits

0x4290,	// (0x00032cd3) cams_zoom_pane_cp2

0x4290,	// (0x00032cd3) image2_vga_pane_ParamLimits

0x4290,	// (0x00032cd3) image2_vga_pane

0x429e,	// (0x00032ce1) main_camera2_pane_g1_ParamLimits

0x429e,	// (0x00032ce1) main_camera2_pane_g1

0x429e,	// (0x00032ce1) main_camera2_pane_g2_ParamLimits

0x429e,	// (0x00032ce1) main_camera2_pane_g2

0x429e,	// (0x00032ce1) main_camera2_pane_g3_ParamLimits

0x429e,	// (0x00032ce1) main_camera2_pane_g3

0x429e,	// (0x00032ce1) main_camera2_pane_g4_ParamLimits

0x429e,	// (0x00032ce1) main_camera2_pane_g4

0x429e,	// (0x00032ce1) main_camera2_pane_g5_ParamLimits

0x429e,	// (0x00032ce1) main_camera2_pane_g5

0x429e,	// (0x00032ce1) main_camera2_pane_g6_ParamLimits

0x429e,	// (0x00032ce1) main_camera2_pane_g6

0x429e,	// (0x00032ce1) main_camera2_pane_g7_ParamLimits

0x429e,	// (0x00032ce1) main_camera2_pane_g7

0x429e,	// (0x00032ce1) main_camera2_pane_g8_ParamLimits

0x429e,	// (0x00032ce1) main_camera2_pane_g8

0x0008,

0xf571,	// (0x0003dfb4) main_camera2_pane_g_ParamLimits

0xf571,	// (0x0003dfb4) main_camera2_pane_g

0x0499,	// (0x0002eedc) main_camera2_pane_t1_ParamLimits

0x0499,	// (0x0002eedc) main_camera2_pane_t1

0x0499,	// (0x0002eedc) main_camera2_pane_t2_ParamLimits

0x0499,	// (0x0002eedc) main_camera2_pane_t2

0x0499,	// (0x0002eedc) main_camera2_pane_t3_ParamLimits

0x0499,	// (0x0002eedc) main_camera2_pane_t3

0x0499,	// (0x0002eedc) main_camera2_pane_t4_ParamLimits

0x0499,	// (0x0002eedc) main_camera2_pane_t4

0x0006,

0xf584,	// (0x0003dfc7) main_camera2_pane_t_ParamLimits

0xf584,	// (0x0003dfc7) main_camera2_pane_t

0x42e2,	// (0x00032d25) cams_zoom_pane_cp4_ParamLimits

0x42e2,	// (0x00032d25) cams_zoom_pane_cp4

0x04ad,	// (0x0002eef0) image2_cif_pane_ParamLimits

0x04ad,	// (0x0002eef0) image2_cif_pane

0x12a2,	// (0x0002fce5) image2_subqcif_pane_ParamLimits

0x12a2,	// (0x0002fce5) image2_subqcif_pane

0x04bb,	// (0x0002eefe) main_video2_pane_g1_ParamLimits

0x04bb,	// (0x0002eefe) main_video2_pane_g1

0x04bb,	// (0x0002eefe) main_video2_pane_g2_ParamLimits

0x04bb,	// (0x0002eefe) main_video2_pane_g2

0x04bb,	// (0x0002eefe) main_video2_pane_g3_ParamLimits

0x04bb,	// (0x0002eefe) main_video2_pane_g3

0x04bb,	// (0x0002eefe) main_video2_pane_g4_ParamLimits

0x04bb,	// (0x0002eefe) main_video2_pane_g4

0x04bb,	// (0x0002eefe) main_video2_pane_g5_ParamLimits

0x04bb,	// (0x0002eefe) main_video2_pane_g5

0x04bb,	// (0x0002eefe) main_video2_pane_g6_ParamLimits

0x04bb,	// (0x0002eefe) main_video2_pane_g6

0x0005,

0xf593,	// (0x0003dfd6) main_video2_pane_g_ParamLimits

0xf593,	// (0x0003dfd6) main_video2_pane_g

0x04c9,	// (0x0002ef0c) main_video2_pane_t1_ParamLimits

0x04c9,	// (0x0002ef0c) main_video2_pane_t1

0x04c9,	// (0x0002ef0c) main_video2_pane_t2_ParamLimits

0x04c9,	// (0x0002ef0c) main_video2_pane_t2

0x04c9,	// (0x0002ef0c) main_video2_pane_t3_ParamLimits

0x04c9,	// (0x0002ef0c) main_video2_pane_t3

0x0002,

0xf5a0,	// (0x0003dfe3) main_video2_pane_t_ParamLimits

0xf5a0,	// (0x0003dfe3) main_video2_pane_t

0x3e47,	// (0x0003288a) call_muted_g2

0x0001,

0xf547,	// (0x0003df8a) call_muted_g

0x9fff,	// (0x00038a42) main_mup2_pane

0xaf44,	// (0x00039987) main_mup2_pane_g1_ParamLimits

0xaf44,	// (0x00039987) main_mup2_pane_g1

0xaf44,	// (0x00039987) main_mup2_pane_g2_ParamLimits

0xaf44,	// (0x00039987) main_mup2_pane_g2

0xd077,	// (0x0003baba) main_mup_pane_g13_cp1

0x12bc,	// (0x0002fcff) mup_volume_pane_cp1

0xaf44,	// (0x00039987) main_mup2_pane_g4_ParamLimits

0xaf44,	// (0x00039987) main_mup2_pane_g4

0xaf44,	// (0x00039987) main_mup2_pane_g5_ParamLimits

0xaf44,	// (0x00039987) main_mup2_pane_g5

0xaf44,	// (0x00039987) main_mup2_pane_g6_ParamLimits

0xaf44,	// (0x00039987) main_mup2_pane_g6

0xaf44,	// (0x00039987) main_mup2_pane_g7_ParamLimits

0xaf44,	// (0x00039987) main_mup2_pane_g7

0x0006,

0xf5a7,	// (0x0003dfea) main_mup2_pane_g_ParamLimits

0xf5a7,	// (0x0003dfea) main_mup2_pane_g

0xaf52,	// (0x00039995) main_mup2_pane_t1_ParamLimits

0xaf52,	// (0x00039995) main_mup2_pane_t1

0xaf52,	// (0x00039995) main_mup2_pane_t2_ParamLimits

0xaf52,	// (0x00039995) main_mup2_pane_t2

0xaf52,	// (0x00039995) main_mup2_pane_t3_ParamLimits

0xaf52,	// (0x00039995) main_mup2_pane_t3

0xaf52,	// (0x00039995) main_mup2_pane_t4_ParamLimits

0xaf52,	// (0x00039995) main_mup2_pane_t4

0xaf52,	// (0x00039995) main_mup2_pane_t5_ParamLimits

0xaf52,	// (0x00039995) main_mup2_pane_t5

0xaf52,	// (0x00039995) main_mup2_pane_t6_ParamLimits

0xaf52,	// (0x00039995) main_mup2_pane_t6

0x0005,

0xf5b6,	// (0x0003dff9) main_mup2_pane_t_ParamLimits

0xf5b6,	// (0x0003dff9) main_mup2_pane_t

0xaf7a,	// (0x000399bd) mup2_visualizer_pane_ParamLimits

0xaf7a,	// (0x000399bd) mup2_visualizer_pane

0xaf7a,	// (0x000399bd) mup_progress_pane_cp_ParamLimits

0xaf7a,	// (0x000399bd) mup_progress_pane_cp

0x43b3,	// (0x00032df6) mup_volume_pane_cp_ParamLimits

0x43b3,	// (0x00032df6) mup_volume_pane_cp

0xa2e3,	// (0x00038d26) mup2_visualizer_pane_g1_ParamLimits

0xa2e3,	// (0x00038d26) mup2_visualizer_pane_g1

0xa2f1,	// (0x00038d34) mup2_visualizer_pane_g2_ParamLimits

0xa2f1,	// (0x00038d34) mup2_visualizer_pane_g2

0xa2f1,	// (0x00038d34) mup2_visualizer_pane_g3_ParamLimits

0xa2f1,	// (0x00038d34) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x0003dae7) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x0003dae7) mup2_visualizer_pane_g

0xb19c,	// (0x00039bdf) aid_size_cell_fmradio

0x0189,	// (0x0002ebcc) aid_height_parent_landcape

0xa69b,	// (0x000390de) wml_content_pane_cp

0xa6a3,	// (0x000390e6) wml_tabs_pane

0xa6ac,	// (0x000390ef) popup_wml_miniature_window

0xa6b4,	// (0x000390f7) scroll_pane_cp021

0xa6c8,	// (0x0003910b) wml_content_pane_comp8

0x9fff,	// (0x00038a42) bg_popup_sub_pane_cp05

0xc2d9,	// (0x0003ad1c) popup_wml_miniature_window_g1

0xc2e1,	// (0x0003ad24) wml_miniature_view_pane

0x42f0,	// (0x00032d33) aid_size_wml_view

0x42f8,	// (0x00032d3b) wml_miniature_view_pane_g1

0x4301,	// (0x00032d44) wml_miniature_view_pane_g2

0x430a,	// (0x00032d4d) wml_miniature_view_pane_g3

0x4312,	// (0x00032d55) wml_miniature_view_pane_g4

0x431a,	// (0x00032d5d) wml_miniature_view_pane_g5

0x4322,	// (0x00032d65) wml_miniature_view_pane_g6

0x432a,	// (0x00032d6d) wml_miniature_view_pane_g7

0x4332,	// (0x00032d75) wml_miniature_view_pane_g8

0x0007,

0xf5c3,	// (0x0003e006) wml_miniature_view_pane_g

0xc2e9,	// (0x0003ad2c) background_graphic_ParamLimits

0xc2e9,	// (0x0003ad2c) background_graphic

0xc2f5,	// (0x0003ad38) wml_tabs_2_pane

0xc2fe,	// (0x0003ad41) wml_tabs_3_pane_ParamLimits

0xc2fe,	// (0x0003ad41) wml_tabs_3_pane

0xc310,	// (0x0003ad53) wml_tabs_4_pane_ParamLimits

0xc310,	// (0x0003ad53) wml_tabs_4_pane

0xc326,	// (0x0003ad69) wml_tabs_5_pane_ParamLimits

0xc326,	// (0x0003ad69) wml_tabs_5_pane

0xc340,	// (0x0003ad83) wml_tabs_pane_g2_ParamLimits

0xc340,	// (0x0003ad83) wml_tabs_pane_g2

0xc355,	// (0x0003ad98) wml_tabs_pane_g3_ParamLimits

0xc355,	// (0x0003ad98) wml_tabs_pane_g3

0xc36a,	// (0x0003adad) wml_tabs_2_active_pane_ParamLimits

0xc36a,	// (0x0003adad) wml_tabs_2_active_pane

0xc36a,	// (0x0003adad) wml_tabs_2_passive_pane_ParamLimits

0xc36a,	// (0x0003adad) wml_tabs_2_passive_pane

0x433a,	// (0x00032d7d) wml_tabs_3_active_pane_cp_ParamLimits

0x433a,	// (0x00032d7d) wml_tabs_3_active_pane_cp

0x434f,	// (0x00032d92) wml_tabs_3_passive_pane_ParamLimits

0x434f,	// (0x00032d92) wml_tabs_3_passive_pane

0x4362,	// (0x00032da5) wml_tabs_3_passive_pane_cp_ParamLimits

0x4362,	// (0x00032da5) wml_tabs_3_passive_pane_cp

0x4379,	// (0x00032dbc) tabs_4_active_pane

0x4381,	// (0x00032dc4) tabs_4_passive_pane

0x438b,	// (0x00032dce) tabs_4_passive_pane_cp

0x4393,	// (0x00032dd6) tabs_4_passive_pane_cp2

0x3d30,	// (0x00032773) aid_height_text

0xaf7a,	// (0x000399bd) mup_volume_cont_pane_ParamLimits

0xaf7a,	// (0x000399bd) mup_volume_cont_pane

0x9bad,	// (0x000385f0) aid_size_cell_pinb

0x9bad,	// (0x000385f0) aid_size_list_pinb

0xaf7a,	// (0x000399bd) mup2_volume_cont_pane_ParamLimits

0xaf7a,	// (0x000399bd) mup2_volume_cont_pane

0x439d,	// (0x00032de0) mup2_volume_cont_pane_g1_ParamLimits

0x439d,	// (0x00032de0) mup2_volume_cont_pane_g1

0xfcb5,	// (0x0002e6f8) aid_size_cell_touch_ParamLimits

0xfcb5,	// (0x0002e6f8) aid_size_cell_touch

0xfe9a,	// (0x0002e8dd) touch_pane_ParamLimits

0xfe9a,	// (0x0002e8dd) touch_pane

0x12bc,	// (0x0002fcff) main_rss2_pane

0xc381,	// (0x0003adc4) listscroll_rss2_pane

0xc38a,	// (0x0003adcd) rss2_navigation_pane

0xc392,	// (0x0003add5) list_rss2_pane

0xad53,	// (0x00039796) scroll_pane_cp22

0xc39a,	// (0x0003addd) rss2_navigation_pane_g1

0xc3a3,	// (0x0003ade6) rss2_navigation_pane_g2

0xc3ab,	// (0x0003adee) rss2_navigation_pane_g3

0x0002,

0xf5d4,	// (0x0003e017) rss2_navigation_pane_g

0xc3b3,	// (0x0003adf6) rss2_navigation_pane_t1

0x43c9,	// (0x00032e0c) rss2_list_single_pane_ParamLimits

0x43c9,	// (0x00032e0c) rss2_list_single_pane

0xc3c1,	// (0x0003ae04) rss2_list_single_pane_t2

0xc3cf,	// (0x0003ae12) rss2_list_single_pane_t3_ParamLimits

0xc3cf,	// (0x0003ae12) rss2_list_single_pane_t3

0xc3ec,	// (0x0003ae2f) rss2_list_single_pane_t4

0x2d2f,	// (0x00031772) smil_status_pane_g1

0x12a2,	// (0x0002fce5) main_image2_pane_ParamLimits

0x12a2,	// (0x0002fce5) main_image2_pane

0x429e,	// (0x00032ce1) main_camera2_pane_g9_ParamLimits

0x429e,	// (0x00032ce1) main_camera2_pane_g9

0x0499,	// (0x0002eedc) main_camera2_pane_t5_ParamLimits

0x0499,	// (0x0002eedc) main_camera2_pane_t5

0x42ac,	// (0x00032cef) main_camera2_pane_t6_ParamLimits

0x42ac,	// (0x00032cef) main_camera2_pane_t6

0x43e0,	// (0x00032e23) main_image2_pane_g1_ParamLimits

0x43e0,	// (0x00032e23) main_image2_pane_g1

0x39df,	// (0x00032422) smil2_video_pane_ParamLimits

0x39df,	// (0x00032422) smil2_video_pane

0x1212,	// (0x0002fc55) aid_zoom_text_primary_cp

0x1298,	// (0x0002fcdb) popup_preview_fixed_window

0xa5f5,	// (0x00039038) im_reading_pane_g1

0x048b,	// (0x0002eece) cams2_bc_adjust_pane_cp_ParamLimits

0x048b,	// (0x0002eece) cams2_bc_adjust_pane_cp

0x42d4,	// (0x00032d17) cams2_bc_adjust_pane_ParamLimits

0x42d4,	// (0x00032d17) cams2_bc_adjust_pane

0xd077,	// (0x0003baba) cams2_bc_adjust_pane_g1

0x12bc,	// (0x0002fcff) cams2_slider_pane

0xd077,	// (0x0003baba) cams2_slider_pane_g1

0xd077,	// (0x0003baba) cams2_slider_pane_g2

0x0006,

0xf5db,	// (0x0003e01e) cams2_slider_pane_g

0xff0c,	// (0x0002e94f) calc_display_pane_ParamLimits

0xff31,	// (0x0002e974) calc_paper_pane_ParamLimits

0xff54,	// (0x0002e997) grid_calc_pane_ParamLimits

0x2ef1,	// (0x00031934) popup_clock_digital_window_t1_ParamLimits

0xb139,	// (0x00039b7c) main_image_pane_t1

0xfeec,	// (0x0002e92f) aid_size_cell_calc_ParamLimits

0xfeec,	// (0x0002e92f) aid_size_cell_calc

0x01df,	// (0x0002ec22) popup_blid_sat_info2_window_ParamLimits

0x01df,	// (0x0002ec22) popup_blid_sat_info2_window

0xc3fa,	// (0x0003ae3d) aid_size_cell_blid

0xc402,	// (0x0003ae45) bg_popup_window_pane_cp07

0xc425,	// (0x0003ae68) grid_popup_blid_pane

0xc42f,	// (0x0003ae72) heading_pane_cp05_ParamLimits

0xc42f,	// (0x0003ae72) heading_pane_cp05

0xc4f9,	// (0x0003af3c) cell_popup_blid_pane_ParamLimits

0xc4f9,	// (0x0003af3c) cell_popup_blid_pane

0xc523,	// (0x0003af66) cell_popup_blid_pane_g1

0xc52b,	// (0x0003af6e) cell_popup_blid_pane_t1

0xaf7a,	// (0x000399bd) mup2_indicator_pane_ParamLimits

0xaf7a,	// (0x000399bd) mup2_indicator_pane

0x9bad,	// (0x000385f0) mup2_visualizer_osc_pane

0xc2c3,	// (0x0003ad06) mup2_visualizer_spec_pane_ParamLimits

0xc2c3,	// (0x0003ad06) mup2_visualizer_spec_pane

0x9bad,	// (0x000385f0) mup2_spec_half_pane

0x9bad,	// (0x000385f0) mup2_spec_half_pane_cp

0xc539,	// (0x0003af7c) mup2_spec_bar_pane_ParamLimits

0xc539,	// (0x0003af7c) mup2_spec_bar_pane

0xa540,	// (0x00038f83) mup2_spec_bar_pane_g1

0xc558,	// (0x0003af9b) mup2_spec_bar_pane_g2

0x0001,

0xf601,	// (0x0003e044) mup2_spec_bar_pane_g

0x9bad,	// (0x000385f0) mup2_osc_middle_pane

0xa540,	// (0x00038f83) mup2_visualizer_osc_pane_g1

0x9bd7,	// (0x0003861a) popup_number_entry_window_t1_ParamLimits

0x9bea,	// (0x0003862d) popup_number_entry_window_t2_ParamLimits

0x9bfc,	// (0x0003863f) popup_number_entry_window_t3_ParamLimits

0x9c0e,	// (0x00038651) popup_number_entry_window_t5_ParamLimits

0x9c0e,	// (0x00038651) popup_number_entry_window_t5

0xf045,	// (0x0003da88) popup_number_entry_window_t_ParamLimits

0x9c43,	// (0x00038686) text_title_cp2_ParamLimits

0x3640,	// (0x00032083) aid_hotspot_pointer_text2_pane

0x36a2,	// (0x000320e5) main_viewer_pane_g9_ParamLimits

0x36a2,	// (0x000320e5) main_viewer_pane_g9

0xa83d,	// (0x00039280) cale_month_pane_t1_ParamLimits

0xa87a,	// (0x000392bd) bg_cale_pane_ParamLimits

0xa892,	// (0x000392d5) list_cale_pane_ParamLimits

0xa8a3,	// (0x000392e6) listscroll_cale_day_pane_t1

0xa8b5,	// (0x000392f8) scroll_pane_cp09_ParamLimits

0x32de,	// (0x00031d21) main_mup_eq_pane_t1_ParamLimits

0x32de,	// (0x00031d21) main_mup_eq_pane_t1

0x32fa,	// (0x00031d3d) main_mup_eq_pane_t2_ParamLimits

0x32fa,	// (0x00031d3d) main_mup_eq_pane_t2

0x3316,	// (0x00031d59) main_mup_eq_pane_t3_ParamLimits

0x3316,	// (0x00031d59) main_mup_eq_pane_t3

0x3334,	// (0x00031d77) main_mup_eq_pane_t4_ParamLimits

0x3334,	// (0x00031d77) main_mup_eq_pane_t4

0x3352,	// (0x00031d95) main_mup_eq_pane_t5_ParamLimits

0x3352,	// (0x00031d95) main_mup_eq_pane_t5

0x3370,	// (0x00031db3) main_mup_eq_pane_t6_ParamLimits

0x3370,	// (0x00031db3) main_mup_eq_pane_t6

0x3386,	// (0x00031dc9) main_mup_eq_pane_t7_ParamLimits

0x3386,	// (0x00031dc9) main_mup_eq_pane_t7

0x339c,	// (0x00031ddf) main_mup_eq_pane_t8_ParamLimits

0x339c,	// (0x00031ddf) main_mup_eq_pane_t8

0x33b2,	// (0x00031df5) main_mup_eq_pane_t9_ParamLimits

0x33b2,	// (0x00031df5) main_mup_eq_pane_t9

0x33ce,	// (0x00031e11) main_mup_eq_pane_t10_ParamLimits

0x33ce,	// (0x00031e11) main_mup_eq_pane_t10

0x0009,

0xf3a4,	// (0x0003dde7) main_mup_eq_pane_t_ParamLimits

0xf3a4,	// (0x0003dde7) main_mup_eq_pane_t

0x34a3,	// (0x00031ee6) mup_equalizer_pane_cp5_ParamLimits

0x34bb,	// (0x00031efe) mup_equalizer_pane_cp6_ParamLimits

0x34d3,	// (0x00031f16) mup_equalizer_pane_cp7_ParamLimits

0x12bc,	// (0x0002fcff) main_gallery_pane

0xc261,	// (0x0003aca4) smil2_volume_pane

0xc269,	// (0x0003acac) smil_status_volume_pane_g1_ParamLimits

0xc27c,	// (0x0003acbf) smil_status_volume_pane_g2_ParamLimits

0x40df,	// (0x00032b22) smil_status_volume_pane_g3_ParamLimits

0xf55a,	// (0x0003df9d) smil_status_volume_pane_g_ParamLimits

0xc402,	// (0x0003ae45) bg_popup_window_pane_cp07_ParamLimits

0xc410,	// (0x0003ae53) blid_firmament_pane

0xa27c,	// (0x00038cbf) aid_size_cell_gallery_ParamLimits

0xa27c,	// (0x00038cbf) aid_size_cell_gallery

0xa27c,	// (0x00038cbf) grid_gallery_pane_ParamLimits

0xa27c,	// (0x00038cbf) grid_gallery_pane

0xc402,	// (0x0003ae45) cell_gallery_pane_ParamLimits

0xc402,	// (0x0003ae45) cell_gallery_pane

0xa27c,	// (0x00038cbf) bg_cell_gallery_focus_pane_ParamLimits

0xa27c,	// (0x00038cbf) bg_cell_gallery_focus_pane

0xa2e3,	// (0x00038d26) cell_gallery_pane_g1_ParamLimits

0xa2e3,	// (0x00038d26) cell_gallery_pane_g1

0xa2e3,	// (0x00038d26) cell_gallery_pane_g2_ParamLimits

0xa2e3,	// (0x00038d26) cell_gallery_pane_g2

0xa2e3,	// (0x00038d26) cell_gallery_pane_g3_ParamLimits

0xa2e3,	// (0x00038d26) cell_gallery_pane_g3

0xa2f1,	// (0x00038d34) cell_gallery_pane_g4_ParamLimits

0xa2f1,	// (0x00038d34) cell_gallery_pane_g4

0x0003,

0xf606,	// (0x0003e049) cell_gallery_pane_g_ParamLimits

0xf606,	// (0x0003e049) cell_gallery_pane_g

0xc562,	// (0x0003afa5) bg_cell_gallery_focus_pane_g1

0xc56a,	// (0x0003afad) bg_cell_gallery_focus_pane_g2

0xc572,	// (0x0003afb5) bg_cell_gallery_focus_pane_g3

0xc57a,	// (0x0003afbd) bg_cell_gallery_focus_pane_g4

0xc582,	// (0x0003afc5) bg_cell_gallery_focus_pane_g5

0xc58a,	// (0x0003afcd) bg_cell_gallery_focus_pane_g6

0xc592,	// (0x0003afd5) bg_cell_gallery_focus_pane_g7

0xc59a,	// (0x0003afdd) bg_cell_gallery_focus_pane_g8

0x0007,

0xf60f,	// (0x0003e052) bg_cell_gallery_focus_pane_g

0xc5a2,	// (0x0003afe5) aid_firma_cardinal

0xc5b6,	// (0x0003aff9) blid_firmament_pane_t1

0xc5cd,	// (0x0003b010) blid_firmament_pane_t2

0xc5e4,	// (0x0003b027) blid_firmament_pane_t3

0xc5fb,	// (0x0003b03e) blid_firmament_pane_t4

0x0003,

0xf620,	// (0x0003e063) blid_firmament_pane_t

0xc612,	// (0x0003b055) blid_sat_info_pane

0xa540,	// (0x00038f83) blid_sat_info_pane_g1

0xa540,	// (0x00038f83) blid_sat_info_pane_g2

0x0001,

0xf398,	// (0x0003dddb) blid_sat_info_pane_g

0xc622,	// (0x0003b065) blid_sat_info_pane_t1

0xc630,	// (0x0003b073) smil2_volume_content_pane

0xc639,	// (0x0003b07c) smil2_volume_pane_g1

0xa3cc,	// (0x00038e0f) smil2_volume_content_pane_g1

0xc641,	// (0x0003b084) smil2_volume_content_pane_g2

0xc64a,	// (0x0003b08d) smil2_volume_content_pane_g3

0xc653,	// (0x0003b096) smil2_volume_content_pane_g4

0xc65c,	// (0x0003b09f) smil2_volume_content_pane_g5

0xc665,	// (0x0003b0a8) smil2_volume_content_pane_g6

0xc66e,	// (0x0003b0b1) smil2_volume_content_pane_g7

0xc677,	// (0x0003b0ba) smil2_volume_content_pane_g8

0xc680,	// (0x0003b0c3) smil2_volume_content_pane_g9

0xc689,	// (0x0003b0cc) smil2_volume_content_pane_g10

0x0009,

0xf629,	// (0x0003e06c) smil2_volume_content_pane_g

0x18b5,	// (0x000302f8) cale_week_day_heading_pane_t1_ParamLimits

0x18df,	// (0x00030322) cale_week_day_heading_pane_t2_ParamLimits

0x190e,	// (0x00030351) cale_week_day_heading_pane_t3_ParamLimits

0x193d,	// (0x00030380) cale_week_day_heading_pane_t4_ParamLimits

0x196c,	// (0x000303af) cale_week_day_heading_pane_t5_ParamLimits

0x199f,	// (0x000303e2) cale_week_day_heading_pane_t6_ParamLimits

0x19d6,	// (0x00030419) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x0003db8f) cale_week_day_heading_pane_t_ParamLimits

0xa4af,	// (0x00038ef2) bg_cale_side_pane_ParamLimits

0x0037,	// (0x0002ea7a) cale_week_time_pane_t1_ParamLimits

0x0051,	// (0x0002ea94) cale_week_time_pane_t2_ParamLimits

0x006b,	// (0x0002eaae) cale_week_time_pane_t3_ParamLimits

0x0085,	// (0x0002eac8) cale_week_time_pane_t4_ParamLimits

0x009f,	// (0x0002eae2) cale_week_time_pane_t5_ParamLimits

0x00b9,	// (0x0002eafc) cale_week_time_pane_t6_ParamLimits

0x00d9,	// (0x0002eb1c) cale_week_time_pane_t7_ParamLimits

0x00ff,	// (0x0002eb42) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x0003db9e) cale_week_time_pane_t_ParamLimits

0x1a00,	// (0x00030443) cell_cale_week_pane_g2_ParamLimits

0xa4af,	// (0x00038ef2) bg_cale_side_pane_cp01_ParamLimits

0x2b38,	// (0x0003157b) cale_month_week_pane_t1_ParamLimits

0x2b51,	// (0x00031594) cale_month_week_pane_t2_ParamLimits

0x2b6a,	// (0x000315ad) cale_month_week_pane_t3_ParamLimits

0x2b83,	// (0x000315c6) cale_month_week_pane_t4_ParamLimits

0x2b9c,	// (0x000315df) cale_month_week_pane_t5_ParamLimits

0x2bb5,	// (0x000315f8) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x0003dc6c) cale_month_week_pane_t_ParamLimits

0x2d18,	// (0x0003175b) cell_cale_month_pane_g1_ParamLimits

0x12bc,	// (0x0002fcff) main_cale_event_viewer_pane

0x9bad,	// (0x000385f0) listscroll_cale_event_viewer_pane

0xc692,	// (0x0003b0d5) list_cale_ev_pane

0xc69a,	// (0x0003b0dd) scroll_pane_cp023

0x43f6,	// (0x00032e39) field_cale_ev_pane_ParamLimits

0x43f6,	// (0x00032e39) field_cale_ev_pane

0xc6a6,	// (0x0003b0e9) field_cale_ev_content_pane_ParamLimits

0xc6a6,	// (0x0003b0e9) field_cale_ev_content_pane

0xc6b2,	// (0x0003b0f5) field_cale_ev_pane_g1_ParamLimits

0xc6b2,	// (0x0003b0f5) field_cale_ev_pane_g1

0xc6be,	// (0x0003b101) field_cale_ev_pane_g2_ParamLimits

0xc6be,	// (0x0003b101) field_cale_ev_pane_g2

0xc6d6,	// (0x0003b119) field_cale_ev_pane_g3_ParamLimits

0xc6d6,	// (0x0003b119) field_cale_ev_pane_g3

0x0002,

0xf63e,	// (0x0003e081) field_cale_ev_pane_g_ParamLimits

0xf63e,	// (0x0003e081) field_cale_ev_pane_g

0xc6ee,	// (0x0003b131) field_cale_ev_pane_t1_ParamLimits

0xc6ee,	// (0x0003b131) field_cale_ev_pane_t1

0x441a,	// (0x00032e5d) field_cale_ev_content_pane_t1_ParamLimits

0x441a,	// (0x00032e5d) field_cale_ev_content_pane_t1

0xb01f,	// (0x00039a62) bg_button_pane_cp01

0x156d,	// (0x0002ffb0) listscroll_cale_week_pane_ParamLimits

0xa477,	// (0x00038eba) popup_toolbar_window_cp01

0xa480,	// (0x00038ec3) listscroll_cale_week_pane_t1_ParamLimits

0x156d,	// (0x0002ffb0) listscroll_cale_day_pane_ParamLimits

0xa477,	// (0x00038eba) popup_toolbar_window_cp02

0xa8a3,	// (0x000392e6) listscroll_cale_day_pane_t1_ParamLimits

0x01a7,	// (0x0002ebea) main_cale_month_pane_ParamLimits

0x403a,	// (0x00032a7d) popup_toolbar_window_cp03_ParamLimits

0x403a,	// (0x00032a7d) popup_toolbar_window_cp03

0x389d,	// (0x000322e0) main_image_pane_g2_ParamLimits

0x389d,	// (0x000322e0) main_image_pane_g2

0x38ae,	// (0x000322f1) main_image_pane_g3_ParamLimits

0x38ae,	// (0x000322f1) main_image_pane_g3

0x0002,

0xf436,	// (0x0003de79) main_image_pane_g_ParamLimits

0xf436,	// (0x0003de79) main_image_pane_g

0xb139,	// (0x00039b7c) main_image_pane_t1_ParamLimits

0x38bf,	// (0x00032302) main_image_pane_t2_ParamLimits

0x38bf,	// (0x00032302) main_image_pane_t2

0x38d1,	// (0x00032314) main_image_pane_t3_ParamLimits

0x38d1,	// (0x00032314) main_image_pane_t3

0x38f9,	// (0x0003233c) main_image_pane_t4_ParamLimits

0x38f9,	// (0x0003233c) main_image_pane_t4

0x0003,

0xf43d,	// (0x0003de80) main_image_pane_t_ParamLimits

0xf43d,	// (0x0003de80) main_image_pane_t

0x3919,	// (0x0003235c) popup_image_details_window_cp01

0x3923,	// (0x00032366) popup_toobar_trans_pane_cp01_ParamLimits

0x3923,	// (0x00032366) popup_toobar_trans_pane_cp01

0x02d2,	// (0x0002ed15) popup_image_details_window_ParamLimits

0x02d2,	// (0x0002ed15) popup_image_details_window

0x400b,	// (0x00032a4e) popup_image_focus_window

0x4290,	// (0x00032cd3) camera2_autofocus_pane_ParamLimits

0x4290,	// (0x00032cd3) camera2_autofocus_pane

0x9bad,	// (0x000385f0) bg_popup_sub_pane_cp06

0xc705,	// (0x0003b148) popup_image_focus_window_g1

0xc70d,	// (0x0003b150) popup_image_focus_window_g2

0xc715,	// (0x0003b158) popup_image_focus_window_g3

0xc71d,	// (0x0003b160) popup_image_focus_window_g4

0x0003,

0xf645,	// (0x0003e088) popup_image_focus_window_g

0xc725,	// (0x0003b168) popup_image_focus_window_t1

0xc733,	// (0x0003b176) popup_image_focus_window_t2

0xc743,	// (0x0003b186) popup_image_focus_window_t3

0x0002,

0xf64e,	// (0x0003e091) popup_image_focus_window_t

0xa2e3,	// (0x00038d26) camera2_autofocus_pane_g1

0xa27c,	// (0x00038cbf) bg_tb_trans_pane_cp01

0xc751,	// (0x0003b194) popup_image_details_window_g1

0xc764,	// (0x0003b1a7) popup_image_details_window_g2

0x0002,

0xf660,	// (0x0003e0a3) popup_image_details_window_g

0xc78d,	// (0x0003b1d0) popup_image_details_window_t1

0xc79f,	// (0x0003b1e2) popup_image_details_window_t2

0xc7b8,	// (0x0003b1fb) popup_image_details_window_t3

0xc7cc,	// (0x0003b20f) popup_image_details_window_t4

0xc7e7,	// (0x0003b22a) popup_image_details_window_t5

0x0004,

0xf667,	// (0x0003e0aa) popup_image_details_window_t

0xa341,	// (0x00038d84) bg_calc_paper_pane_ParamLimits

0x12bc,	// (0x0002fcff) grid_highlight_pane_cp013

0x13c4,	// (0x0002fe07) list_calc_pane_ParamLimits

0x13d6,	// (0x0002fe19) scroll_pane_cp024

0xa355,	// (0x00038d98) bg_calc_display_pane_ParamLimits

0xff82,	// (0x0002e9c5) calc_display_pane_t1_ParamLimits

0xff97,	// (0x0002e9da) calc_display_pane_t2_ParamLimits

0x13de,	// (0x0002fe21) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x0003db0f) calc_display_pane_t_ParamLimits

0x0001,	// (0x0002ea44) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x0003db2c) cell_calc_pane_g

0x000a,	// (0x0002ea4d) cell_calc_pane_t1

0xa3aa,	// (0x00038ded) grid_highlight_pane_cp02_ParamLimits

0xa3c0,	// (0x00038e03) toolbar_button_pane_cp01_ParamLimits

0xa3c0,	// (0x00038e03) toolbar_button_pane_cp01

0xb17e,	// (0x00039bc1) temp_image_control_pane_ParamLimits

0xb17e,	// (0x00039bc1) temp_image_control_pane

0x12a2,	// (0x0002fce5) main_mp3_pane

0xc801,	// (0x0003b244) temp_image_control_pane_g1_ParamLimits

0xc801,	// (0x0003b244) temp_image_control_pane_g1

0xc80f,	// (0x0003b252) temp_image_control_pane_g2_ParamLimits

0xc80f,	// (0x0003b252) temp_image_control_pane_g2

0xc821,	// (0x0003b264) temp_image_control_pane_g3_ParamLimits

0xc821,	// (0x0003b264) temp_image_control_pane_g3

0x443b,	// (0x00032e7e) temp_image_control_pane_g4_ParamLimits

0x443b,	// (0x00032e7e) temp_image_control_pane_g4

0x0003,

0xf672,	// (0x0003e0b5) temp_image_control_pane_g_ParamLimits

0xf672,	// (0x0003e0b5) temp_image_control_pane_g

0xc801,	// (0x0003b244) main_mp3_pane_g1

0x444e,	// (0x00032e91) main_mp3_pane_g2

0x0007,

0xf67b,	// (0x0003e0be) main_mp3_pane_g

0xc856,	// (0x0003b299) main_mp3_pane_t1

0xa2f1,	// (0x00038d34) main_camera_pane_g8_ParamLimits

0xa2f1,	// (0x00038d34) main_camera_pane_g8

0x1be1,	// (0x00030624) main_video_pane_g7_ParamLimits

0x1be1,	// (0x00030624) main_video_pane_g7

0x42c0,	// (0x00032d03) main_camera2_pane_t7_ParamLimits

0x42c0,	// (0x00032d03) main_camera2_pane_t7

0xa65b,	// (0x0003909e) scroll_pane_cp025_ParamLimits

0xa65b,	// (0x0003909e) scroll_pane_cp025

0xa66f,	// (0x000390b2) scroll_pane_cp026_ParamLimits

0xa66f,	// (0x000390b2) scroll_pane_cp026

0xa67e,	// (0x000390c1) wml_content_pane_ParamLimits

0x12bc,	// (0x0002fcff) main_touch_calib_pane

0x4520,	// (0x00032f63) main_touch_calib_pane_g1

0x4532,	// (0x00032f75) main_touch_calib_pane_g2

0x4544,	// (0x00032f87) main_touch_calib_pane_g3

0x4556,	// (0x00032f99) main_touch_calib_pane_g4

0x0003,

0xf699,	// (0x0003e0dc) main_touch_calib_pane_g

0x4568,	// (0x00032fab) main_touch_calib_pane_t1

0x4582,	// (0x00032fc5) main_touch_calib_pane_t2

0x0004,

0xf6a2,	// (0x0003e0e5) main_touch_calib_pane_t

0xadce,	// (0x00039811) mup_progress_pane_cp02

0xaded,	// (0x00039830) navi_pane_g1

0xae4f,	// (0x00039892) navi_pane_mp_t3

0x12a2,	// (0x0002fce5) main_mp3_pane_ParamLimits

0x404f,	// (0x00032a92) navi_pane_ParamLimits

0xc801,	// (0x0003b244) main_mp3_pane_g1_ParamLimits

0x444e,	// (0x00032e91) main_mp3_pane_g2_ParamLimits

0x445a,	// (0x00032e9d) main_mp3_pane_g3_ParamLimits

0x445a,	// (0x00032e9d) main_mp3_pane_g3

0x4468,	// (0x00032eab) main_mp3_pane_g4_ParamLimits

0x4468,	// (0x00032eab) main_mp3_pane_g4

0xa2e3,	// (0x00038d26) main_mp3_pane_g5_ParamLimits

0xa2e3,	// (0x00038d26) main_mp3_pane_g5

0xc831,	// (0x0003b274) main_mp3_pane_g6_ParamLimits

0xc831,	// (0x0003b274) main_mp3_pane_g6

0xc83e,	// (0x0003b281) main_mp3_pane_g7_ParamLimits

0xc83e,	// (0x0003b281) main_mp3_pane_g7

0xc84a,	// (0x0003b28d) main_mp3_pane_g8_ParamLimits

0xc84a,	// (0x0003b28d) main_mp3_pane_g8

0xf67b,	// (0x0003e0be) main_mp3_pane_g_ParamLimits

0x4474,	// (0x00032eb7) main_mp3_pane_t2

0x4482,	// (0x00032ec5) main_mp3_pane_t3

0xc864,	// (0x0003b2a7) main_mp3_pane_t4

0xc872,	// (0x0003b2b5) main_mp3_pane_t5

0x0005,

0xf68c,	// (0x0003e0cf) main_mp3_pane_t

0xc880,	// (0x0003b2c3) mup_progress_pane_cp01

0x1212,	// (0x0002fc55) aid_zoom_text_secondary2

0xc692,	// (0x0003b0d5) list_cale_ev2_pane

0xc69a,	// (0x0003b0dd) scroll_pane_cp023_ParamLimits

0x45dc,	// (0x0003301f) field_cale_ev2_pane_ParamLimits

0x45dc,	// (0x0003301f) field_cale_ev2_pane

0x4600,	// (0x00033043) field_cale_ev2_pane_g1_ParamLimits

0x4600,	// (0x00033043) field_cale_ev2_pane_g1

0x460c,	// (0x0003304f) field_cale_ev2_pane_g2_ParamLimits

0x460c,	// (0x0003304f) field_cale_ev2_pane_g2

0x4624,	// (0x00033067) field_cale_ev2_pane_g3_ParamLimits

0x4624,	// (0x00033067) field_cale_ev2_pane_g3

0x0003,

0xf6ad,	// (0x0003e0f0) field_cale_ev2_pane_g_ParamLimits

0xf6ad,	// (0x0003e0f0) field_cale_ev2_pane_g

0x463c,	// (0x0003307f) field_cale_ev2_pane_t1_ParamLimits

0x463c,	// (0x0003307f) field_cale_ev2_pane_t1

0x4653,	// (0x00033096) field_cale_ev2_pane_t2_ParamLimits

0x4653,	// (0x00033096) field_cale_ev2_pane_t2

0x0001,

0xf6b6,	// (0x0003e0f9) field_cale_ev2_pane_t_ParamLimits

0xf6b6,	// (0x0003e0f9) field_cale_ev2_pane_t

0x3737,	// (0x0003217a) main_postcard_pane_g5_ParamLimits

0x3737,	// (0x0003217a) main_postcard_pane_g5

0x374d,	// (0x00032190) main_postcard_pane_g6_ParamLimits

0x374d,	// (0x00032190) main_postcard_pane_g6

0xa27c,	// (0x00038cbf) camera2_autofocus_pane_cp_ParamLimits

0xa27c,	// (0x00038cbf) camera2_autofocus_pane_cp

0x12a2,	// (0x0002fce5) main_mup3_pane

0x46b2,	// (0x000330f5) main_mup3_pane_g1_ParamLimits

0x46b2,	// (0x000330f5) main_mup3_pane_g1

0x46d4,	// (0x00033117) main_mup3_pane_g2_ParamLimits

0x46d4,	// (0x00033117) main_mup3_pane_g2

0x474f,	// (0x00033192) main_mup3_pane_g3_ParamLimits

0x474f,	// (0x00033192) main_mup3_pane_g3

0x47b9,	// (0x000331fc) main_mup3_pane_g4_ParamLimits

0x47b9,	// (0x000331fc) main_mup3_pane_g4

0x4823,	// (0x00033266) main_mup3_pane_g5_ParamLimits

0x4823,	// (0x00033266) main_mup3_pane_g5

0x488d,	// (0x000332d0) main_mup3_pane_g6_ParamLimits

0x488d,	// (0x000332d0) main_mup3_pane_g6

0xa2f1,	// (0x00038d34) main_mup3_pane_g7_ParamLimits

0xa2f1,	// (0x00038d34) main_mup3_pane_g7

0x0007,

0xf6c6,	// (0x0003e109) main_mup3_pane_g_ParamLimits

0xf6c6,	// (0x0003e109) main_mup3_pane_g

0x4911,	// (0x00033354) main_mup3_pane_t1_ParamLimits

0x4911,	// (0x00033354) main_mup3_pane_t1

0x497b,	// (0x000333be) main_mup3_pane_t2_ParamLimits

0x497b,	// (0x000333be) main_mup3_pane_t2

0x4a51,	// (0x00033494) main_mup3_pane_t4_ParamLimits

0x4a51,	// (0x00033494) main_mup3_pane_t4

0x4aaf,	// (0x000334f2) main_mup3_pane_t5_ParamLimits

0x4aaf,	// (0x000334f2) main_mup3_pane_t5

0x4b77,	// (0x000335ba) main_mup3_pane_t6_ParamLimits

0x4b77,	// (0x000335ba) main_mup3_pane_t6

0x0005,

0xf6d7,	// (0x0003e11a) main_mup3_pane_t_ParamLimits

0xf6d7,	// (0x0003e11a) main_mup3_pane_t

0x4c2f,	// (0x00033672) mup3_progress_pane_ParamLimits

0x4c2f,	// (0x00033672) mup3_progress_pane

0x4cc7,	// (0x0003370a) popup_mup3_control_window_ParamLimits

0x4cc7,	// (0x0003370a) popup_mup3_control_window

0xc894,	// (0x0003b2d7) popup_mup3_text_window

0x4cfd,	// (0x00033740) mup3_progress_pane_t1

0x4d1c,	// (0x0003375f) mup3_progress_pane_t2

0xc89c,	// (0x0003b2df) mup3_progress_pane_t3

0x0002,

0xf6e4,	// (0x0003e127) mup3_progress_pane_t

0xc8b9,	// (0x0003b2fc) mup_progress_pane_cp03

0x9bad,	// (0x000385f0) bg_tb_trans_pane_cp04

0x4d3b,	// (0x0003377e) mup3_volume_pane

0x4d43,	// (0x00033786) popup_mup3_control_window_g1

0x4d4c,	// (0x0003378f) mup3_volume_pane_g1

0x4d55,	// (0x00033798) mup3_volume_pane_g2

0x4d5e,	// (0x000337a1) mup3_volume_pane_g3

0x0002,

0xf6eb,	// (0x0003e12e) mup3_volume_pane_g

0x9bad,	// (0x000385f0) bg_tb_trans_pane_cp03

0xc8c9,	// (0x0003b30c) popup_mup3_text_window_g1

0xc8d1,	// (0x0003b314) popup_mup3_text_window_t1

0xa39d,	// (0x00038de0) list_calc_item_pane_g1_ParamLimits

0xc378,	// (0x0003adbb) mup_volume_pane_cp_g1

0x459c,	// (0x00032fdf) main_touch_calib_pane_t3

0x45b0,	// (0x00032ff3) main_touch_calib_pane_t4

0x45c6,	// (0x00033009) main_touch_calib_pane_t5

0x11fe,	// (0x0002fc41) aid_cell_size_toolbar2

0x1206,	// (0x0002fc49) aid_popup3_width_pane

0x1212,	// (0x0002fc55) aid_zoom_text_msg_primary

0x1ab0,	// (0x000304f3) vorec_t7

0xa361,	// (0x00038da4) bg_calc_paper_pane_g1_ParamLimits

0xa36d,	// (0x00038db0) bg_calc_paper_pane_g2_ParamLimits

0xa379,	// (0x00038dbc) bg_calc_paper_pane_g3_ParamLimits

0xa385,	// (0x00038dc8) bg_calc_paper_pane_g4_ParamLimits

0xa391,	// (0x00038dd4) bg_calc_paper_pane_g5_ParamLimits

0x13f0,	// (0x0002fe33) bg_calc_paper_pane_g6_ParamLimits

0x1403,	// (0x0002fe46) bg_calc_paper_pane_g7_ParamLimits

0x1416,	// (0x0002fe59) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x0003db16) bg_calc_paper_pane_g_ParamLimits

0x1429,	// (0x0002fe6c) calc_bg_paper_pane_g9_ParamLimits

0xa27c,	// (0x00038cbf) image_qvga_pane_ParamLimits

0xa27c,	// (0x00038cbf) image_qvga_pane

0xa25a,	// (0x00038c9d) bg_popup_sub_pane_cp04_ParamLimits

0xb0b5,	// (0x00039af8) popup_mup_playback_window_g1_ParamLimits

0xb0c1,	// (0x00039b04) popup_mup_playback_window_t1_ParamLimits

0xb0d6,	// (0x00039b19) popup_mup_playback_window_t2_ParamLimits

0xf431,	// (0x0003de74) popup_mup_playback_window_t_ParamLimits

0xa2f1,	// (0x00038d34) main_mup2_pane_g3_ParamLimits

0xa2f1,	// (0x00038d34) main_mup2_pane_g3

0x1dd6,	// (0x00030819) popup_toolbar_window_cp04

0xb4d1,	// (0x00039f14) popup_call2_audio_second_window_g3_ParamLimits

0xb4d1,	// (0x00039f14) popup_call2_audio_second_window_g3

0xb8e9,	// (0x0003a32c) popup_call2_audio_first_window_g4_ParamLimits

0xb8e9,	// (0x0003a32c) popup_call2_audio_first_window_g4

0xbf10,	// (0x0003a953) popup_call2_audio_in_window_g4_ParamLimits

0xbf10,	// (0x0003a953) popup_call2_audio_in_window_g4

0x387f,	// (0x000322c2) aid_area_sk_bg_cut_ParamLimits

0x387f,	// (0x000322c2) aid_area_sk_bg_cut

0xb0eb,	// (0x00039b2e) aid_area_sk_bg_cut_2_ParamLimits

0xb0eb,	// (0x00039b2e) aid_area_sk_bg_cut_2

0x9bad,	// (0x000385f0) aid_placing_details_win

0x9bad,	// (0x000385f0) aid_placing_details_win_2

0xa2e3,	// (0x00038d26) camera2_autofocus_pane_g1_ParamLimits

0xfe41,	// (0x0002e884) popup_fixed_preview_cale_window_ParamLimits

0xfe41,	// (0x0002e884) popup_fixed_preview_cale_window

0xae96,	// (0x000398d9) navi_slider_pane_g3

0xae9f,	// (0x000398e2) navi_slider_pane_g4

0xaea8,	// (0x000398eb) navi_slider_pane_g5

0xae96,	// (0x000398d9) navi_slider_pane_g6

0x32c3,	// (0x00031d06) navi_slider_pane_g7

0xafec,	// (0x00039a2f) mup_scale_pane_g3

0xaff5,	// (0x00039a38) mup_scale_pane_g4

0xaffe,	// (0x00039a41) mup_scale_pane_g5

0x34eb,	// (0x00031f2e) mup_scale_pane_g6

0x34f4,	// (0x00031f37) mup_scale_pane_g7

0xd077,	// (0x0003baba) cams2_slider_pane_g3

0xd077,	// (0x0003baba) cams2_slider_pane_g4

0xd077,	// (0x0003baba) cams2_slider_pane_g5

0xd077,	// (0x0003baba) cams2_slider_pane_g6

0xd077,	// (0x0003baba) cams2_slider_pane_g7

0xa540,	// (0x00038f83) camera2_autofocus_pane_cp_g1

0xc1e8,	// (0x0003ac2b) bg_popup_preview_window_pane_cp02_ParamLimits

0xc1e8,	// (0x0003ac2b) bg_popup_preview_window_pane_cp02

0xc8df,	// (0x0003b322) list_fp_cale_pane_ParamLimits

0xc8df,	// (0x0003b322) list_fp_cale_pane

0xc8eb,	// (0x0003b32e) popup_fixed_preview_cale_window_t1_ParamLimits

0xc8eb,	// (0x0003b32e) popup_fixed_preview_cale_window_t1

0x4d67,	// (0x000337aa) popup_fixed_preview_cale_window_t2_ParamLimits

0x4d67,	// (0x000337aa) popup_fixed_preview_cale_window_t2

0x4d7c,	// (0x000337bf) popup_fixed_preview_cale_window_t3_ParamLimits

0x4d7c,	// (0x000337bf) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f2,	// (0x0003e135) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f2,	// (0x0003e135) popup_fixed_preview_cale_window_t

0x4d93,	// (0x000337d6) list_single_fp_cale_pane_ParamLimits

0x4d93,	// (0x000337d6) list_single_fp_cale_pane

0xc909,	// (0x0003b34c) list_single_fp_cale_pane_g1_ParamLimits

0xc909,	// (0x0003b34c) list_single_fp_cale_pane_g1

0xc915,	// (0x0003b358) list_single_fp_cale_pane_g2_ParamLimits

0xc915,	// (0x0003b358) list_single_fp_cale_pane_g2

0x0002,

0xf6f9,	// (0x0003e13c) list_single_fp_cale_pane_g_ParamLimits

0xf6f9,	// (0x0003e13c) list_single_fp_cale_pane_g

0xc92e,	// (0x0003b371) list_single_fp_cale_pane_t1_ParamLimits

0xc92e,	// (0x0003b371) list_single_fp_cale_pane_t1

0xc940,	// (0x0003b383) list_single_fp_cale_pane_t2_ParamLimits

0xc940,	// (0x0003b383) list_single_fp_cale_pane_t2

0x0001,

0xf700,	// (0x0003e143) list_single_fp_cale_pane_t_ParamLimits

0xf700,	// (0x0003e143) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x12bc,	// (0x0002fcff) main_dialer_pane

0x9bad,	// (0x000385f0) aid_cell_size_keypad

0x9bad,	// (0x000385f0) dialer_ne_pane

0x9bad,	// (0x000385f0) grid_dialer_command_1_pane

0x9bad,	// (0x000385f0) grid_dialer_command_2_pane

0x9bad,	// (0x000385f0) grid_dialer_keypad_pane

0x4da8,	// (0x000337eb) bg_popup_call_pane_cp06_ParamLimits

0x4da8,	// (0x000337eb) bg_popup_call_pane_cp06

0x4da8,	// (0x000337eb) dialer_ne_clear_pane_ParamLimits

0x4da8,	// (0x000337eb) dialer_ne_clear_pane

0xa540,	// (0x00038f83) dialer_ne_pane_g1

0xaf66,	// (0x000399a9) dialer_ne_pane_t1_ParamLimits

0xaf66,	// (0x000399a9) dialer_ne_pane_t1

0x4db6,	// (0x000337f9) dialer_ne_pane_t2_ParamLimits

0x4db6,	// (0x000337f9) dialer_ne_pane_t2

0x4dde,	// (0x00033821) dialer_ne_pane_t3_ParamLimits

0x4dde,	// (0x00033821) dialer_ne_pane_t3

0x0002,

0xf705,	// (0x0003e148) dialer_ne_pane_t_ParamLimits

0xf705,	// (0x0003e148) dialer_ne_pane_t

0x4dde,	// (0x00033821) dialer_ne_pane_t3_copy1_ParamLimits

0x4dde,	// (0x00033821) dialer_ne_pane_t3_copy1

0xc973,	// (0x0003b3b6) cell_dialer_keypad_pane_ParamLimits

0xc973,	// (0x0003b3b6) cell_dialer_keypad_pane

0xa27c,	// (0x00038cbf) cell_dialer_command_1_pane_ParamLimits

0xa27c,	// (0x00038cbf) cell_dialer_command_1_pane

0xc98a,	// (0x0003b3cd) cell_dialer_command_2_pane_ParamLimits

0xc98a,	// (0x0003b3cd) cell_dialer_command_2_pane

0xa27c,	// (0x00038cbf) bg_button_pane_cp02_ParamLimits

0xa27c,	// (0x00038cbf) bg_button_pane_cp02

0xa2e3,	// (0x00038d26) cell_dialer_keypad_pane_g1_ParamLimits

0xa2e3,	// (0x00038d26) cell_dialer_keypad_pane_g1

0xa27c,	// (0x00038cbf) bg_button_pane_cp03_ParamLimits

0xa27c,	// (0x00038cbf) bg_button_pane_cp03

0xa2e3,	// (0x00038d26) cell_dialer_command_1_pane_g1_ParamLimits

0xa2e3,	// (0x00038d26) cell_dialer_command_1_pane_g1

0x9bad,	// (0x000385f0) bg_button_pane_cp04

0xa540,	// (0x00038f83) cell_dialer_command_2_pane_g1

0x9bad,	// (0x000385f0) bg_button_pane_cp06

0xa540,	// (0x00038f83) dialer_ne_clear_pane_g1

0x31e8,	// (0x00031c2b) navi_pane_g2

0x3216,	// (0x00031c59) navi_pane_g3

0x0002,

0xf334,	// (0x0003dd77) navi_pane_g

0x3241,	// (0x00031c84) navi_pane_mv_g2

0x3268,	// (0x00031cab) navi_pane_mv_g5

0x3270,	// (0x00031cb3) navi_pane_mv_t1

0xa355,	// (0x00038d98) main_clock2_pane

0xa27c,	// (0x00038cbf) main_clock2_list_pane_ParamLimits

0xa27c,	// (0x00038cbf) main_clock2_list_pane

0x4e6f,	// (0x000338b2) main_clock2_pane_t1_ParamLimits

0x4e6f,	// (0x000338b2) main_clock2_pane_t1

0x4eaa,	// (0x000338ed) main_clock2_pane_t2_ParamLimits

0x4eaa,	// (0x000338ed) main_clock2_pane_t2

0x0004,

0xf711,	// (0x0003e154) main_clock2_pane_t_ParamLimits

0xf711,	// (0x0003e154) main_clock2_pane_t

0x4f49,	// (0x0003398c) popup_clock_analogue_window_cp03_ParamLimits

0x4f49,	// (0x0003398c) popup_clock_analogue_window_cp03

0x4f6e,	// (0x000339b1) popup_clock_digital_window_cp02_ParamLimits

0x4f6e,	// (0x000339b1) popup_clock_digital_window_cp02

0x4fb2,	// (0x000339f5) main_clock2_list_single_pane_ParamLimits

0x4fb2,	// (0x000339f5) main_clock2_list_single_pane

0xa50a,	// (0x00038f4d) list_highlight_pane_cp05

0xc9cb,	// (0x0003b40e) main_clock2_list_single_pane_t1

0x1dd6,	// (0x00030819) popup_toolbar_window_cp04_ParamLimits

0xa2f1,	// (0x00038d34) camera2_autofocus_pane_g2_ParamLimits

0xa2f1,	// (0x00038d34) camera2_autofocus_pane_g2

0xa2f1,	// (0x00038d34) camera2_autofocus_pane_g3_ParamLimits

0xa2f1,	// (0x00038d34) camera2_autofocus_pane_g3

0xa2f1,	// (0x00038d34) camera2_autofocus_pane_g4_ParamLimits

0xa2f1,	// (0x00038d34) camera2_autofocus_pane_g4

0xa2f1,	// (0x00038d34) camera2_autofocus_pane_g5_ParamLimits

0xa2f1,	// (0x00038d34) camera2_autofocus_pane_g5

0x0004,

0xf655,	// (0x0003e098) camera2_autofocus_pane_g_ParamLimits

0xf655,	// (0x0003e098) camera2_autofocus_pane_g

0x4668,	// (0x000330ab) camera2_autofocus_pane_cp_g2

0x4670,	// (0x000330b3) camera2_autofocus_pane_cp_g3

0x4678,	// (0x000330bb) camera2_autofocus_pane_cp_g4

0x4680,	// (0x000330c3) camera2_autofocus_pane_cp_g5

0x0004,

0xf6bb,	// (0x0003e0fe) camera2_autofocus_pane_cp_g

0x9bad,	// (0x000385f0) popup_dialer_spcha_window

0x9bad,	// (0x000385f0) bg_popup_sub_pane_cp07

0x9bad,	// (0x000385f0) list_spcha_pane

0xc9d9,	// (0x0003b41c) list_single_spcha_pane_ParamLimits

0xc9d9,	// (0x0003b41c) list_single_spcha_pane

0x9bad,	// (0x000385f0) list_highlight_pane_cp06

0xaa92,	// (0x000394d5) list_single_spcha_pane_t1

0xbcba,	// (0x0003a6fd) popup_call2_audio_out_window_g4_ParamLimits

0xbcba,	// (0x0003a6fd) popup_call2_audio_out_window_g4

0x12bc,	// (0x0002fcff) main_imed2_pane

0x4015,	// (0x00032a58) popup_imed_adjust2_window

0x02ea,	// (0x0002ed2d) popup_imed_trans_window_ParamLimits

0x02ea,	// (0x0002ed2d) popup_imed_trans_window

0xc45b,	// (0x0003ae9e) popup_blid_sat_info2_window_t1

0xc469,	// (0x0003aeac) popup_blid_sat_info2_window_t2

0x000a,

0xf5ea,	// (0x0003e02d) popup_blid_sat_info2_window_t

0x4fc4,	// (0x00033a07) aid_size_cell_colour_35

0x4fe4,	// (0x00033a27) aid_size_cell_colour_112

0x5004,	// (0x00033a47) aid_size_cell_effect

0xaf7a,	// (0x000399bd) bg_tb_trans_pane_cp02

0xa9c3,	// (0x00039406) heading_imed_pane

0x5024,	// (0x00033a67) listscroll_imed_pane

0xc9eb,	// (0x0003b42e) heading_imed_pane_g1

0xc9f3,	// (0x0003b436) heading_imed_pane_t1

0xca01,	// (0x0003b444) grid_imed_colour_35_pane_ParamLimits

0xca01,	// (0x0003b444) grid_imed_colour_35_pane

0x5030,	// (0x00033a73) grid_imed_effect_pane

0xca1d,	// (0x0003b460) list_imed_aspect_pane

0x5047,	// (0x00033a8a) scroll_pane_cp027_ParamLimits

0x5047,	// (0x00033a8a) scroll_pane_cp027

0x5058,	// (0x00033a9b) cell_imed_effect_pane_ParamLimits

0x5058,	// (0x00033a9b) cell_imed_effect_pane

0xca25,	// (0x0003b468) cell_imed_colour_pane_ParamLimits

0xca25,	// (0x0003b468) cell_imed_colour_pane

0xca6f,	// (0x0003b4b2) cell_imed_colour_pane_g1_ParamLimits

0xca6f,	// (0x0003b4b2) cell_imed_colour_pane_g1

0xca80,	// (0x0003b4c3) hgihlgiht_grid_pane_cp016_ParamLimits

0xca80,	// (0x0003b4c3) hgihlgiht_grid_pane_cp016

0x5083,	// (0x00033ac6) cell_imed_effect_pane_g1

0x508b,	// (0x00033ace) grid_highlight_pane_cp017

0xca91,	// (0x0003b4d4) list_imed_single_pane_ParamLimits

0xca91,	// (0x0003b4d4) list_imed_single_pane

0x9bad,	// (0x000385f0) list_highlight_pane_cp07

0xcaa5,	// (0x0003b4e8) list_imed_aspect_pane_comp1_t1

0xaf7a,	// (0x000399bd) bg_tb_trans_pane_cp05

0xcac7,	// (0x0003b50a) popup_imed_adjust2_window_g1

0xcaee,	// (0x0003b531) popup_imed_adjust2_window_t1

0xcb06,	// (0x0003b549) slider_imed_adjust_pane

0xcb1a,	// (0x0003b55d) slider_imed_adjust_pane_g1

0xcb2a,	// (0x0003b56d) slider_imed_adjust_pane_g2

0xcb3a,	// (0x0003b57d) slider_imed_adjust_pane_g3

0xcb4b,	// (0x0003b58e) slider_imed_adjust_pane_g4

0x0003,

0xf72e,	// (0x0003e171) slider_imed_adjust_pane_g

0x5094,	// (0x00033ad7) aid_size_cell_clipart2

0xcb5c,	// (0x0003b59f) grid_imed_clipart_pane

0xcb66,	// (0x0003b5a9) scroll_pane_cp031

0x50a0,	// (0x00033ae3) cell_imed_clipart_pane_ParamLimits

0x50a0,	// (0x00033ae3) cell_imed_clipart_pane

0x50bd,	// (0x00033b00) cell_imed_clipart_pane_g1

0x9bad,	// (0x000385f0) grid_highlight_pane_cp014

0x4e4d,	// (0x00033890) main_clock2_pane_g1_ParamLimits

0x4e4d,	// (0x00033890) main_clock2_pane_g1

0x4f8e,	// (0x000339d1) aid_call2_pane_cp10

0x4fa0,	// (0x000339e3) aid_call_pane_cp10

0xadc2,	// (0x00039805) popup_clock_analogue_window_cp10_g1

0xadc2,	// (0x00039805) popup_clock_analogue_window_cp10_g2

0x04dd,	// (0x0002ef20) popup_clock_analogue_window_cp10_g3

0x04dd,	// (0x0002ef20) popup_clock_analogue_window_cp10_g4

0xadc2,	// (0x00039805) popup_clock_analogue_window_cp10_g5

0x0004,

0xf71c,	// (0x0003e15f) popup_clock_analogue_window_cp10_g

0x04f3,	// (0x0002ef36) popup_clock_analogue_window_cp10_t1

0x0512,	// (0x0002ef55) clock_digital_number_pane_cp10_ParamLimits

0x0512,	// (0x0002ef55) clock_digital_number_pane_cp10

0x052c,	// (0x0002ef6f) clock_digital_number_pane_cp11_ParamLimits

0x052c,	// (0x0002ef6f) clock_digital_number_pane_cp11

0x0546,	// (0x0002ef89) clock_digital_number_pane_cp12_ParamLimits

0x0546,	// (0x0002ef89) clock_digital_number_pane_cp12

0x0562,	// (0x0002efa5) clock_digital_number_pane_cp13_ParamLimits

0x0562,	// (0x0002efa5) clock_digital_number_pane_cp13

0x057e,	// (0x0002efc1) clock_digital_separator_pane_cp10_ParamLimits

0x057e,	// (0x0002efc1) clock_digital_separator_pane_cp10

0x059a,	// (0x0002efdd) popup_clock_digital_window_cp02_t1_ParamLimits

0x059a,	// (0x0002efdd) popup_clock_digital_window_cp02_t1

0xa252,	// (0x00038c95) clock_digital_number_pane_cp10_g1

0xa252,	// (0x00038c95) clock_digital_number_pane_cp10_g2

0x0001,

0xf737,	// (0x0003e17a) clock_digital_number_pane_cp10_g

0xa252,	// (0x00038c95) clock_digital_separator_pane_cp10_g1

0xa252,	// (0x00038c95) clock_digital_separator_pane_g2_cp10

0xae5d,	// (0x000398a0) navi_pane_vded_g4

0xae66,	// (0x000398a9) navi_pane_vded_g5

0xae6f,	// (0x000398b2) navi_pane_vded_t1

0x12bc,	// (0x0002fcff) main_vded_pane

0x50c6,	// (0x00033b09) main_vded_pane_g1

0x50d2,	// (0x00033b15) main_vded_pane_g2

0x50de,	// (0x00033b21) main_vded_pane_g3

0x0002,

0xf73c,	// (0x0003e17f) main_vded_pane_g

0x50ea,	// (0x00033b2d) main_vded_pane_t1

0x50f8,	// (0x00033b3b) main_vded_pane_t2

0x0001,

0xf743,	// (0x0003e186) main_vded_pane_t

0x5106,	// (0x00033b49) vded_slider_pane

0x5110,	// (0x00033b53) vded_video_pane

0xcb6e,	// (0x0003b5b1) vded_video_pane_g1

0x511c,	// (0x00033b5f) vded_video_pane_g2

0xa540,	// (0x00038f83) vded_video_pane_g3

0x0002,

0xf748,	// (0x0003e18b) vded_video_pane_g

0xcb78,	// (0x0003b5bb) vded_slider_pane_g1

0xc378,	// (0x0003adbb) vded_slider_pane_g2

0xcb81,	// (0x0003b5c4) vded_slider_pane_g3

0xcb8a,	// (0x0003b5cd) vded_slider_pane_g4

0xcb93,	// (0x0003b5d6) vded_slider_pane_g5

0x0004,

0xf74f,	// (0x0003e192) vded_slider_pane_g

0x4cb1,	// (0x000336f4) mup3_rocker_pane_ParamLimits

0x4cb1,	// (0x000336f4) mup3_rocker_pane

0x5125,	// (0x00033b68) mup3_control_keys_pane_g1

0x512d,	// (0x00033b70) mup3_control_keys_pane_g2

0x5135,	// (0x00033b78) mup3_control_keys_pane_g3

0x513d,	// (0x00033b80) mup3_control_keys_pane_g4

0x0003,

0xf75a,	// (0x0003e19d) mup3_control_keys_pane_g

0xfe76,	// (0x0002e8b9) popup_toolbar2_fixed_window_cp01_ParamLimits

0xfe76,	// (0x0002e8b9) popup_toolbar2_fixed_window_cp01

0x4ce7,	// (0x0003372a) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4ce7,	// (0x0003372a) popup_toolbar2_fixed_window_cp02

0xb643,	// (0x0003a086) popup_call2_audio_second_window_t4_ParamLimits

0xb643,	// (0x0003a086) popup_call2_audio_second_window_t4

0xbb7f,	// (0x0003a5c2) popup_call2_audio_first_window_t6_ParamLimits

0xbb7f,	// (0x0003a5c2) popup_call2_audio_first_window_t6

0xbdbd,	// (0x0003a800) popup_call2_audio_out_window_t6_ParamLimits

0xbdbd,	// (0x0003a800) popup_call2_audio_out_window_t6

0x12bc,	// (0x0002fcff) main_vitu_pane

0xa27c,	// (0x00038cbf) aid_size_cell_itu_ParamLimits

0xa27c,	// (0x00038cbf) aid_size_cell_itu

0xa27c,	// (0x00038cbf) bg_popup_window_pane_cp08_ParamLimits

0xa27c,	// (0x00038cbf) bg_popup_window_pane_cp08

0xa27c,	// (0x00038cbf) field_vitu_entry_pane_ParamLimits

0xa27c,	// (0x00038cbf) field_vitu_entry_pane

0xa27c,	// (0x00038cbf) grid_vitu_function_pane_ParamLimits

0xa27c,	// (0x00038cbf) grid_vitu_function_pane

0xa27c,	// (0x00038cbf) grid_vitu_itu_pane_ParamLimits

0xa27c,	// (0x00038cbf) grid_vitu_itu_pane

0xa27c,	// (0x00038cbf) cell_vitu_itu_pane_ParamLimits

0xa27c,	// (0x00038cbf) cell_vitu_itu_pane

0xa27c,	// (0x00038cbf) cell_vitu_function_pane_ParamLimits

0xa27c,	// (0x00038cbf) cell_vitu_function_pane

0xa27c,	// (0x00038cbf) bg_popup_sub_pane_cp08_ParamLimits

0xa27c,	// (0x00038cbf) bg_popup_sub_pane_cp08

0xa512,	// (0x00038f55) field_vitu_entry_pane_t1_ParamLimits

0xa512,	// (0x00038f55) field_vitu_entry_pane_t1

0xcb9c,	// (0x0003b5df) field_vitu_entry_pane_t2_ParamLimits

0xcb9c,	// (0x0003b5df) field_vitu_entry_pane_t2

0x0001,

0xf763,	// (0x0003e1a6) field_vitu_entry_pane_t_ParamLimits

0xf763,	// (0x0003e1a6) field_vitu_entry_pane_t

0xc402,	// (0x0003ae45) bg_button_pane_cp05_ParamLimits

0xc402,	// (0x0003ae45) bg_button_pane_cp05

0xcbb9,	// (0x0003b5fc) cell_vitu_itu_pane_g1

0xaf52,	// (0x00039995) cell_vitu_itu_pane_t1_ParamLimits

0xaf52,	// (0x00039995) cell_vitu_itu_pane_t1

0xaf52,	// (0x00039995) cell_vitu_itu_pane_t2_ParamLimits

0xaf52,	// (0x00039995) cell_vitu_itu_pane_t2

0x0002,

0xf768,	// (0x0003e1ab) cell_vitu_itu_pane_t_ParamLimits

0xf768,	// (0x0003e1ab) cell_vitu_itu_pane_t

0x9bad,	// (0x000385f0) bg_button_pane_cp07

0xa540,	// (0x00038f83) cell_vitu_function_pane_g1

0x12ea,	// (0x0002fd2d) main_calc_pane_g1

0xfcd9,	// (0x0002e71c) aid_visual_content_pane

0x12bc,	// (0x0002fcff) main_vradio_pane

0xa2e3,	// (0x00038d26) main_vradio_pane_g1_ParamLimits

0xa2e3,	// (0x00038d26) main_vradio_pane_g1

0xa2f1,	// (0x00038d34) main_vradio_pane_g2_ParamLimits

0xa2f1,	// (0x00038d34) main_vradio_pane_g2

0x0001,

0xf76f,	// (0x0003e1b2) main_vradio_pane_g_ParamLimits

0xf76f,	// (0x0003e1b2) main_vradio_pane_g

0xa512,	// (0x00038f55) main_vradio_pane_t1_ParamLimits

0xa512,	// (0x00038f55) main_vradio_pane_t1

0xa512,	// (0x00038f55) main_vradio_pane_t2_ParamLimits

0xa512,	// (0x00038f55) main_vradio_pane_t2

0xaf66,	// (0x000399a9) main_vradio_pane_t3_ParamLimits

0xaf66,	// (0x000399a9) main_vradio_pane_t3

0x0002,

0xf774,	// (0x0003e1b7) main_vradio_pane_t_ParamLimits

0xf774,	// (0x0003e1b7) main_vradio_pane_t

0xa27c,	// (0x00038cbf) vradio_rocker_control_pane_ParamLimits

0xa27c,	// (0x00038cbf) vradio_rocker_control_pane

0xa27c,	// (0x00038cbf) vradio_station_info_pane_ParamLimits

0xa27c,	// (0x00038cbf) vradio_station_info_pane

0xa27c,	// (0x00038cbf) vradio_frequency_info_pane_ParamLimits

0xa27c,	// (0x00038cbf) vradio_frequency_info_pane

0xa540,	// (0x00038f83) vradio_station_info_pane_g1

0xaf52,	// (0x00039995) vradio_station_info_pane_t1_ParamLimits

0xaf52,	// (0x00039995) vradio_station_info_pane_t1

0xaf66,	// (0x000399a9) vradio_station_info_pane_t2_ParamLimits

0xaf66,	// (0x000399a9) vradio_station_info_pane_t2

0x0001,

0xf77b,	// (0x0003e1be) vradio_station_info_pane_t_ParamLimits

0xf77b,	// (0x0003e1be) vradio_station_info_pane_t

0x9bad,	// (0x000385f0) vradio_tuning_pane

0x514d,	// (0x00033b90) vradio_rocker_control_pane_g1

0xcbd5,	// (0x0003b618) vradio_rocker_control_pane_g2

0x5157,	// (0x00033b9a) vradio_rocker_control_pane_g3

0x5161,	// (0x00033ba4) vradio_rocker_control_pane_g4

0x516b,	// (0x00033bae) vradio_rocker_control_pane_g5

0x0004,

0xf780,	// (0x0003e1c3) vradio_rocker_control_pane_g

0xa540,	// (0x00038f83) vradio_frequency_info_pane_g1

0xa512,	// (0x00038f55) vradio_frequency_info_pane_t1_ParamLimits

0xa512,	// (0x00038f55) vradio_frequency_info_pane_t1

0x5175,	// (0x00033bb8) vradio_tuning_pane_g1

0x5180,	// (0x00033bc3) vradio_tuning_pane_t1

0x125b,	// (0x0002fc9e) area_side_right_pane_ParamLimits

0x125b,	// (0x0002fc9e) area_side_right_pane

0xc1af,	// (0x0003abf2) status_small_pane_g1

0xc1b7,	// (0x0003abfa) status_small_pane_g2

0xc1c0,	// (0x0003ac03) status_small_pane_g3

0xc1c9,	// (0x0003ac0c) status_small_pane_g4

0x0003,

0xf54c,	// (0x0003df8f) status_small_pane_g

0xc1d2,	// (0x0003ac15) status_small_pane_t1

0x12bc,	// (0x0002fcff) main_video3_pane

0xcbdd,	// (0x0003b620) cams_zoom_vslider_pane

0xcbe5,	// (0x0003b628) image3_wide_pane_ParamLimits

0xcbe5,	// (0x0003b628) image3_wide_pane

0xcbff,	// (0x0003b642) image3_wide_small_pane

0xcc0b,	// (0x0003b64e) main_video3_pane_g1_ParamLimits

0xcc0b,	// (0x0003b64e) main_video3_pane_g1

0xcc27,	// (0x0003b66a) main_video3_pane_g2_ParamLimits

0xcc27,	// (0x0003b66a) main_video3_pane_g2

0x0001,

0xf78b,	// (0x0003e1ce) main_video3_pane_g_ParamLimits

0xf78b,	// (0x0003e1ce) main_video3_pane_g

0xcc43,	// (0x0003b686) main_video3_pane_t1_ParamLimits

0xcc43,	// (0x0003b686) main_video3_pane_t1

0xcc6e,	// (0x0003b6b1) main_video3_pane_t2_ParamLimits

0xcc6e,	// (0x0003b6b1) main_video3_pane_t2

0xcc9b,	// (0x0003b6de) main_video3_pane_t3_ParamLimits

0xcc9b,	// (0x0003b6de) main_video3_pane_t3

0x0002,

0xf790,	// (0x0003e1d3) main_video3_pane_t_ParamLimits

0xf790,	// (0x0003e1d3) main_video3_pane_t

0xccc8,	// (0x0003b70b) cams_zoom_vslider_pane_g1

0xccd1,	// (0x0003b714) cams_zoom_vslider_pane_g2

0x0001,

0xf797,	// (0x0003e1da) cams_zoom_vslider_pane_g

0xccd9,	// (0x0003b71c) small_slider_vertical_pane

0xa540,	// (0x00038f83) small_slider_vertical_pane_g1

0xa540,	// (0x00038f83) small_slider_vertical_pane_g2

0xcce1,	// (0x0003b724) small_slider_vertical_pane_g3

0x0002,

0xf79c,	// (0x0003e1df) small_slider_vertical_pane_g

0x12bc,	// (0x0002fcff) main_hwr_training_pane

0xccea,	// (0x0003b72d) hwr_training_instruct_pane_ParamLimits

0xccea,	// (0x0003b72d) hwr_training_instruct_pane

0x518f,	// (0x00033bd2) hwr_training_navi_pane_ParamLimits

0x518f,	// (0x00033bd2) hwr_training_navi_pane

0x51ae,	// (0x00033bf1) hwr_training_write_pane_ParamLimits

0x51ae,	// (0x00033bf1) hwr_training_write_pane

0x9bad,	// (0x000385f0) bg_frame_shadow_pane

0xcd21,	// (0x0003b764) hwr_training_write_pane_g1

0xcd29,	// (0x0003b76c) hwr_training_write_pane_g2

0xcd31,	// (0x0003b774) hwr_training_write_pane_g3

0xcd39,	// (0x0003b77c) hwr_training_write_pane_g4

0xcd41,	// (0x0003b784) hwr_training_write_pane_g5

0xcd49,	// (0x0003b78c) hwr_training_write_pane_g6

0xcd51,	// (0x0003b794) hwr_training_write_pane_g7

0x0006,

0xf7a3,	// (0x0003e1e6) hwr_training_write_pane_g

0x51e9,	// (0x00033c2c) hwr_training_navi_pane_g1_ParamLimits

0x51e9,	// (0x00033c2c) hwr_training_navi_pane_g1

0x51fb,	// (0x00033c3e) hwr_training_navi_pane_g2_ParamLimits

0x51fb,	// (0x00033c3e) hwr_training_navi_pane_g2

0x520d,	// (0x00033c50) hwr_training_navi_pane_g3_ParamLimits

0x520d,	// (0x00033c50) hwr_training_navi_pane_g3

0x521d,	// (0x00033c60) hwr_training_navi_pane_g4_ParamLimits

0x521d,	// (0x00033c60) hwr_training_navi_pane_g4

0x0004,

0xf7b2,	// (0x0003e1f5) hwr_training_navi_pane_g_ParamLimits

0xf7b2,	// (0x0003e1f5) hwr_training_navi_pane_g

0x522a,	// (0x00033c6d) hwr_training_navi_pane_t1

0x5238,	// (0x00033c7b) list_single_hwr_training_instruct_pane_ParamLimits

0x5238,	// (0x00033c7b) list_single_hwr_training_instruct_pane

0xcd59,	// (0x0003b79c) list_single_hwr_training_instruct_pane_t1

0xc562,	// (0x0003afa5) bg_frame_shadow_pane_g1

0xcd68,	// (0x0003b7ab) bg_frame_shadow_pane_g2

0xcd70,	// (0x0003b7b3) bg_frame_shadow_pane_g3

0xcd78,	// (0x0003b7bb) bg_frame_shadow_pane_g4

0xcd80,	// (0x0003b7c3) bg_frame_shadow_pane_g5

0xcd88,	// (0x0003b7cb) bg_frame_shadow_pane_g6

0xcd90,	// (0x0003b7d3) bg_frame_shadow_pane_g7

0xa40d,	// (0x00038e50) bg_frame_shadow_pane_g8

0x0007,

0xf7bd,	// (0x0003e200) bg_frame_shadow_pane_g

0x12bc,	// (0x0002fcff) main_video_tele_dialer_pane

0x05c8,	// (0x0002f00b) aid_size_cell_video_keypad_ParamLimits

0x05c8,	// (0x0002f00b) aid_size_cell_video_keypad

0x05e2,	// (0x0002f025) grid_video_dialer_keypad_pane_ParamLimits

0x05e2,	// (0x0002f025) grid_video_dialer_keypad_pane

0x062e,	// (0x0002f071) video_down_pane_cp_ParamLimits

0x062e,	// (0x0002f071) video_down_pane_cp

0x0644,	// (0x0002f087) cell_video_dialer_keypad_pane_ParamLimits

0x0644,	// (0x0002f087) cell_video_dialer_keypad_pane

0xcd98,	// (0x0003b7db) bg_button_pane_cp08_ParamLimits

0xcd98,	// (0x0003b7db) bg_button_pane_cp08

0x5270,	// (0x00033cb3) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5270,	// (0x00033cb3) cell_video_dialer_keypad_pane_g1

0x4c9b,	// (0x000336de) mup3_rocker2_pane_ParamLimits

0x4c9b,	// (0x000336de) mup3_rocker2_pane

0xa540,	// (0x00038f83) mup3_rocker2_pane_g1

0x01b7,	// (0x0002ebfa) main_dialer2_pane

0x12bc,	// (0x0002fcff) main_mp4_pane

0x52c9,	// (0x00033d0c) main_mp4_pane_g1_ParamLimits

0x52c9,	// (0x00033d0c) main_mp4_pane_g1

0x52c9,	// (0x00033d0c) main_mp4_pane_g2_ParamLimits

0x52c9,	// (0x00033d0c) main_mp4_pane_g2

0x066a,	// (0x0002f0ad) main_mp4_pane_g3_ParamLimits

0x066a,	// (0x0002f0ad) main_mp4_pane_g3

0x52d7,	// (0x00033d1a) main_mp4_pane_g4_ParamLimits

0x52d7,	// (0x00033d1a) main_mp4_pane_g4

0x5305,	// (0x00033d48) main_mp4_pane_g5_ParamLimits

0x5305,	// (0x00033d48) main_mp4_pane_g5

0x0007,

0xf7dd,	// (0x0003e220) main_mp4_pane_g_ParamLimits

0xf7dd,	// (0x0003e220) main_mp4_pane_g

0x5379,	// (0x00033dbc) main_mp4_pane_t1_ParamLimits

0x5379,	// (0x00033dbc) main_mp4_pane_t1

0x53d5,	// (0x00033e18) main_mp4_pane_t2_ParamLimits

0x53d5,	// (0x00033e18) main_mp4_pane_t2

0xcda4,	// (0x0003b7e7) main_mp4_pane_t3_ParamLimits

0xcda4,	// (0x0003b7e7) main_mp4_pane_t3

0x5427,	// (0x00033e6a) main_mp4_pane_t4_ParamLimits

0x5427,	// (0x00033e6a) main_mp4_pane_t4

0x0003,

0xf7ee,	// (0x0003e231) main_mp4_pane_t_ParamLimits

0xf7ee,	// (0x0003e231) main_mp4_pane_t

0x5467,	// (0x00033eaa) mp4_progress_pane_ParamLimits

0x5467,	// (0x00033eaa) mp4_progress_pane

0x54b1,	// (0x00033ef4) mp4_rocker_pane_ParamLimits

0x54b1,	// (0x00033ef4) mp4_rocker_pane

0xcdd2,	// (0x0003b815) mp4_progress_pane_t1

0xcdeb,	// (0x0003b82e) mp4_progress_pane_t2

0x0001,

0xf7f7,	// (0x0003e23a) mp4_progress_pane_t

0xce04,	// (0x0003b847) mup_progress_pane_cp04

0xd077,	// (0x0003baba) mp4_rocker_pane_g1

0x06b4,	// (0x0002f0f7) aid_cell_size_keypad2_ParamLimits

0x06b4,	// (0x0002f0f7) aid_cell_size_keypad2

0x06ca,	// (0x0002f10d) dialer2_ne_pane_ParamLimits

0x06ca,	// (0x0002f10d) dialer2_ne_pane

0x06e2,	// (0x0002f125) grid_dialer2_keypad_pane_ParamLimits

0x06e2,	// (0x0002f125) grid_dialer2_keypad_pane

0xc402,	// (0x0003ae45) bg_popup_call_pane_cp07_ParamLimits

0xc402,	// (0x0003ae45) bg_popup_call_pane_cp07

0x54d3,	// (0x00033f16) dialer2_ne_pane_t1_ParamLimits

0x54d3,	// (0x00033f16) dialer2_ne_pane_t1

0x06fe,	// (0x0002f141) cell_dialer2_keypad_pane_ParamLimits

0x06fe,	// (0x0002f141) cell_dialer2_keypad_pane

0xce29,	// (0x0003b86c) bg_button_pane_pane_cp04_ParamLimits

0xce29,	// (0x0003b86c) bg_button_pane_pane_cp04

0x5513,	// (0x00033f56) cell_dialer2_keypad_pane_g1_ParamLimits

0x5513,	// (0x00033f56) cell_dialer2_keypad_pane_g1

0x1cbd,	// (0x00030700) aid_placing_vt_set_content_ParamLimits

0x1cbd,	// (0x00030700) aid_placing_vt_set_content

0x1ce1,	// (0x00030724) aid_placing_vt_set_title_ParamLimits

0x1ce1,	// (0x00030724) aid_placing_vt_set_title

0x12bc,	// (0x0002fcff) main_image3_pane

0x0782,	// (0x0002f1c5) area_side_right_pane_cp01_ParamLimits

0x0782,	// (0x0002f1c5) area_side_right_pane_cp01

0x52c9,	// (0x00033d0c) main_image3_pane_g1_ParamLimits

0x52c9,	// (0x00033d0c) main_image3_pane_g1

0x079b,	// (0x0002f1de) main_image3_pane_g2_ParamLimits

0x079b,	// (0x0002f1de) main_image3_pane_g2

0x07c3,	// (0x0002f206) main_image3_pane_g3_ParamLimits

0x07c3,	// (0x0002f206) main_image3_pane_g3

0x07ed,	// (0x0002f230) main_image3_pane_g4_ParamLimits

0x07ed,	// (0x0002f230) main_image3_pane_g4

0x0003,

0xf806,	// (0x0003e249) main_image3_pane_g_ParamLimits

0xf806,	// (0x0003e249) main_image3_pane_g

0x0817,	// (0x0002f25a) main_image3_pane_t1_ParamLimits

0x0817,	// (0x0002f25a) main_image3_pane_t1

0x086f,	// (0x0002f2b2) main_image3_pane_t2_ParamLimits

0x086f,	// (0x0002f2b2) main_image3_pane_t2

0x08c1,	// (0x0002f304) main_image3_pane_t3_ParamLimits

0x08c1,	// (0x0002f304) main_image3_pane_t3

0x0003,

0xf80f,	// (0x0003e252) main_image3_pane_t_ParamLimits

0xf80f,	// (0x0003e252) main_image3_pane_t

0xa27c,	// (0x00038cbf) grid_sctrl_middle_pane_cp01_ParamLimits

0xa27c,	// (0x00038cbf) grid_sctrl_middle_pane_cp01

0x55af,	// (0x00033ff2) cell_sctrl_middle_pane_cp01_ParamLimits

0x55af,	// (0x00033ff2) cell_sctrl_middle_pane_cp01

0x55cc,	// (0x0003400f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x55cc,	// (0x0003400f) cell_sctrl_middle_pane_cp01_g1

0x12bc,	// (0x0002fcff) main_call4_pane

0x0949,	// (0x0002f38c) aid_size_button_call4_ParamLimits

0x0949,	// (0x0002f38c) aid_size_button_call4

0x097c,	// (0x0002f3bf) call4_windows_pane_ParamLimits

0x097c,	// (0x0002f3bf) call4_windows_pane

0x099b,	// (0x0002f3de) grid_call4_button_pane_ParamLimits

0x099b,	// (0x0002f3de) grid_call4_button_pane

0x55ed,	// (0x00034030) call4_windows_conf_pane

0x5606,	// (0x00034049) popup_call4_audio_first_window_ParamLimits

0x5606,	// (0x00034049) popup_call4_audio_first_window

0x5656,	// (0x00034099) popup_call4_audio_second_window_ParamLimits

0x5656,	// (0x00034099) popup_call4_audio_second_window

0x566f,	// (0x000340b2) popup_call4_audio_wait_window_ParamLimits

0x566f,	// (0x000340b2) popup_call4_audio_wait_window

0x09c6,	// (0x0002f409) cell_call4_button_pane_ParamLimits

0x09c6,	// (0x0002f409) cell_call4_button_pane

0x567d,	// (0x000340c0) bg_button_pane_cp09_ParamLimits

0x567d,	// (0x000340c0) bg_button_pane_cp09

0x09ed,	// (0x0002f430) cell_call4_button_pane_g1_ParamLimits

0x09ed,	// (0x0002f430) cell_call4_button_pane_g1

0x0a13,	// (0x0002f456) cell_call4_button_pane_t1_ParamLimits

0x0a13,	// (0x0002f456) cell_call4_button_pane_t1

0xce3d,	// (0x0003b880) popup_call4_audio_conf_window_ParamLimits

0xce3d,	// (0x0003b880) popup_call4_audio_conf_window

0x4cfd,	// (0x00033740) mup3_progress_pane_t1_ParamLimits

0x4d1c,	// (0x0003375f) mup3_progress_pane_t2_ParamLimits

0xc89c,	// (0x0003b2df) mup3_progress_pane_t3_ParamLimits

0xf6e4,	// (0x0003e127) mup3_progress_pane_t_ParamLimits

0xc8b9,	// (0x0003b2fc) mup_progress_pane_cp03_ParamLimits

0x5145,	// (0x00033b88) mup3_control_keys_pane_g4_copy1

0x5495,	// (0x00033ed8) mp4_rocker2_pane_ParamLimits

0x5495,	// (0x00033ed8) mp4_rocker2_pane

0xce57,	// (0x0003b89a) mp4_rocker2_pane_g1

0xce5f,	// (0x0003b8a2) mp4_rocker2_pane_g2

0x56bb,	// (0x000340fe) mp4_rocker2_pane_g3

0x56c3,	// (0x00034106) mp4_rocker2_pane_g4

0x56cb,	// (0x0003410e) mp4_rocker2_pane_g5

0x0004,

0xf818,	// (0x0003e25b) mp4_rocker2_pane_g

0x12bc,	// (0x0002fcff) main_camera4_pane

0x12bc,	// (0x0002fcff) main_video4_pane

0x05fc,	// (0x0002f03f) main_video_tele_dialer_pane_t1_ParamLimits

0x05fc,	// (0x0002f03f) main_video_tele_dialer_pane_t1

0x0615,	// (0x0002f058) main_video_tele_dialer_pane_t2_ParamLimits

0x0615,	// (0x0002f058) main_video_tele_dialer_pane_t2

0x0001,

0xf7ce,	// (0x0003e211) main_video_tele_dialer_pane_t_ParamLimits

0xf7ce,	// (0x0003e211) main_video_tele_dialer_pane_t

0x0a51,	// (0x0002f494) cam4_autofocus_pane_ParamLimits

0x0a51,	// (0x0002f494) cam4_autofocus_pane

0x0a67,	// (0x0002f4aa) cam4_image_uncrop_pane_ParamLimits

0x0a67,	// (0x0002f4aa) cam4_image_uncrop_pane

0x0a80,	// (0x0002f4c3) cam4_indicators_pane_ParamLimits

0x0a80,	// (0x0002f4c3) cam4_indicators_pane

0x0ab0,	// (0x0002f4f3) main_camera4_pane_g1_ParamLimits

0x0ab0,	// (0x0002f4f3) main_camera4_pane_g1

0x0ac2,	// (0x0002f505) main_camera4_pane_g2_ParamLimits

0x0ac2,	// (0x0002f505) main_camera4_pane_g2

0x0ad5,	// (0x0002f518) main_camera4_pane_g3_ParamLimits

0x0ad5,	// (0x0002f518) main_camera4_pane_g3

0x0ae8,	// (0x0002f52b) main_camera4_pane_g4_ParamLimits

0x0ae8,	// (0x0002f52b) main_camera4_pane_g4

0x0afb,	// (0x0002f53e) main_camera4_pane_g5_ParamLimits

0x0afb,	// (0x0002f53e) main_camera4_pane_g5

0x0005,

0xf823,	// (0x0003e266) main_camera4_pane_g_ParamLimits

0xf823,	// (0x0003e266) main_camera4_pane_g

0x0b1f,	// (0x0002f562) main_camera4_pane_t1_ParamLimits

0x0b1f,	// (0x0002f562) main_camera4_pane_t1

0xd095,	// (0x0003bad8) bg_tb_trans_pane_cp06

0x570d,	// (0x00034150) cam4_indicators_pane_g1

0x571e,	// (0x00034161) cam4_indicators_pane_g2

0x0002,

0xf83e,	// (0x0003e281) cam4_indicators_pane_g

0x5736,	// (0x00034179) cam4_indicators_pane_t1

0x0b6f,	// (0x0002f5b2) main_video4_pane_g1_ParamLimits

0x0b6f,	// (0x0002f5b2) main_video4_pane_g1

0x0b7e,	// (0x0002f5c1) main_video4_pane_g2_ParamLimits

0x0b7e,	// (0x0002f5c1) main_video4_pane_g2

0x0b8e,	// (0x0002f5d1) main_video4_pane_g3_ParamLimits

0x0b8e,	// (0x0002f5d1) main_video4_pane_g3

0x0b9e,	// (0x0002f5e1) main_video4_pane_g4_ParamLimits

0x0b9e,	// (0x0002f5e1) main_video4_pane_g4

0x0004,

0xf845,	// (0x0003e288) main_video4_pane_g_ParamLimits

0xf845,	// (0x0003e288) main_video4_pane_g

0x0bbe,	// (0x0002f601) vid4_indicators_pane_ParamLimits

0x0bbe,	// (0x0002f601) vid4_indicators_pane

0x0be8,	// (0x0002f62b) video4_image_uncrop_cif_pane_ParamLimits

0x0be8,	// (0x0002f62b) video4_image_uncrop_cif_pane

0x0c02,	// (0x0002f645) video4_image_uncrop_nhd_pane_ParamLimits

0x0c02,	// (0x0002f645) video4_image_uncrop_nhd_pane

0x0a67,	// (0x0002f4aa) video4_image_uncrop_vga_pane_ParamLimits

0x0a67,	// (0x0002f4aa) video4_image_uncrop_vga_pane

0x12a2,	// (0x0002fce5) bg_tb_trans_pane_cp07

0x5764,	// (0x000341a7) vid4_indicators_pane_g1

0x577a,	// (0x000341bd) vid4_indicators_pane_g2

0x578e,	// (0x000341d1) vid4_indicators_pane_g3

0x0004,

0xf850,	// (0x0003e293) vid4_indicators_pane_g

0x57bf,	// (0x00034202) vid4_indicators_pane_t1

0x57d6,	// (0x00034219) cam4_autofocus_pane_g1

0x57de,	// (0x00034221) cam4_autofocus_pane_g2

0x57e6,	// (0x00034229) cam4_autofocus_pane_g3

0x0002,

0xf85b,	// (0x0003e29e) cam4_autofocus_pane_g

0x57ee,	// (0x00034231) cam4_autofocus_pane_g3_copy1

0x5254,	// (0x00033c97) video_down_pane_cp_t1

0x5262,	// (0x00033ca5) video_down_pane_cp_t2

0x0001,

0xf7d3,	// (0x0003e216) video_down_pane_cp_t

0x12a2,	// (0x0002fce5) popup_vitu2_window_ParamLimits

0x12a2,	// (0x0002fce5) popup_vitu2_window

0x0c19,	// (0x0002f65c) aid_size_cell2_itu2_ParamLimits

0x0c19,	// (0x0002f65c) aid_size_cell2_itu2

0x0c3f,	// (0x0002f682) aid_size_cell_itu2_ParamLimits

0x0c3f,	// (0x0002f682) aid_size_cell_itu2

0x0c9d,	// (0x0002f6e0) bg_popup_window_pane_cp09_ParamLimits

0x0c9d,	// (0x0002f6e0) bg_popup_window_pane_cp09

0x0cab,	// (0x0002f6ee) field_vitu2_entry_pane_ParamLimits

0x0cab,	// (0x0002f6ee) field_vitu2_entry_pane

0x0cd3,	// (0x0002f716) grid_vitu2_function_pane_ParamLimits

0x0cd3,	// (0x0002f716) grid_vitu2_function_pane

0x0d24,	// (0x0002f767) grid_vitu2_itu_pane_ParamLimits

0x0d24,	// (0x0002f767) grid_vitu2_itu_pane

0x0db4,	// (0x0002f7f7) cell_vitu2_itu_pane_ParamLimits

0x0db4,	// (0x0002f7f7) cell_vitu2_itu_pane

0x0de2,	// (0x0002f825) cell_vitu2_function_pane_ParamLimits

0x0de2,	// (0x0002f825) cell_vitu2_function_pane

0xce67,	// (0x0003b8aa) bg_popup_call_pane_cp08_ParamLimits

0xce67,	// (0x0003b8aa) bg_popup_call_pane_cp08

0xce7e,	// (0x0003b8c1) field_vitu2_entry_pane_g1

0xce8a,	// (0x0003b8cd) field_vitu2_entry_pane_g2

0x0002,

0xf862,	// (0x0003e2a5) field_vitu2_entry_pane_g

0xce96,	// (0x0003b8d9) field_vitu2_entry_pane_t1_ParamLimits

0xce96,	// (0x0003b8d9) field_vitu2_entry_pane_t1

0xcec5,	// (0x0003b908) field_vitu2_entry_pane_t2_ParamLimits

0xcec5,	// (0x0003b908) field_vitu2_entry_pane_t2

0x0001,

0xf869,	// (0x0003e2ac) field_vitu2_entry_pane_t_ParamLimits

0xf869,	// (0x0003e2ac) field_vitu2_entry_pane_t

0x0e26,	// (0x0002f869) bg_button_pane_cp010_ParamLimits

0x0e26,	// (0x0002f869) bg_button_pane_cp010

0x0e34,	// (0x0002f877) cell_vitu2_itu_pane_g1

0x0e5a,	// (0x0002f89d) cell_vitu2_itu_pane_t1_ParamLimits

0x0e5a,	// (0x0002f89d) cell_vitu2_itu_pane_t1

0x0eb8,	// (0x0002f8fb) cell_vitu2_itu_pane_t2_ParamLimits

0x0eb8,	// (0x0002f8fb) cell_vitu2_itu_pane_t2

0x0002,

0xf873,	// (0x0003e2b6) cell_vitu2_itu_pane_t_ParamLimits

0xf873,	// (0x0003e2b6) cell_vitu2_itu_pane_t

0x12a2,	// (0x0002fce5) bg_button_pane_cp011

0x0fa4,	// (0x0002f9e7) cell_vitu2_function_pane_g1

0x12bc,	// (0x0002fcff) main_myfav_hc_pane

0x0911,	// (0x0002f354) popup_image3_note_pane_ParamLimits

0x0911,	// (0x0002f354) popup_image3_note_pane

0x092d,	// (0x0002f370) popup_image3_tool_bar_pane_ParamLimits

0x092d,	// (0x0002f370) popup_image3_tool_bar_pane

0x0f46,	// (0x0002f989) cell_vitu2_itu_pane_t3_ParamLimits

0x0f46,	// (0x0002f989) cell_vitu2_itu_pane_t3

0x9bad,	// (0x000385f0) bg_popup_trans_pane

0xceea,	// (0x0003b92d) grid_image3_tool_bar_pane

0xcef4,	// (0x0003b937) bg_popup_trans_pane_g1

0xa764,	// (0x000391a7) bg_popup_trans_pane_g2

0xcefc,	// (0x0003b93f) bg_popup_trans_pane_g3

0xcf04,	// (0x0003b947) bg_popup_trans_pane_g4

0xcf0c,	// (0x0003b94f) bg_popup_trans_pane_g5

0xcf14,	// (0x0003b957) bg_popup_trans_pane_g6

0xcf1c,	// (0x0003b95f) bg_popup_trans_pane_g7

0xcf24,	// (0x0003b967) bg_popup_trans_pane_g8

0xa744,	// (0x00039187) bg_popup_trans_pane_g9

0x0008,

0xf87a,	// (0x0003e2bd) bg_popup_trans_pane_g

0xcf2c,	// (0x0003b96f) cell_image3_tool_bar_pane_ParamLimits

0xcf2c,	// (0x0003b96f) cell_image3_tool_bar_pane

0xa540,	// (0x00038f83) cell_image3_tool_bar_pane_g1

0x9bad,	// (0x000385f0) bg_popup_trans_pane_cp1

0xcf42,	// (0x0003b985) popup_image3_note_pane_t1

0xcf50,	// (0x0003b993) popup_image3_note_pane_t2

0xcf5e,	// (0x0003b9a1) popup_image3_note_pane_t3

0x0002,

0xf88d,	// (0x0003e2d0) popup_image3_note_pane_t

0xcf6e,	// (0x0003b9b1) popup_image3_note_pane_t3_copy1

0x57f6,	// (0x00034239) bg_myfav_hc_instruction_pane_ParamLimits

0x57f6,	// (0x00034239) bg_myfav_hc_instruction_pane

0x580e,	// (0x00034251) cell_myfav_contact_pane_ParamLimits

0x580e,	// (0x00034251) cell_myfav_contact_pane

0x582a,	// (0x0003426d) cell_myfav_contact_pane_cp1_ParamLimits

0x582a,	// (0x0003426d) cell_myfav_contact_pane_cp1

0x5842,	// (0x00034285) cell_myfav_contact_pane_cp2_ParamLimits

0x5842,	// (0x00034285) cell_myfav_contact_pane_cp2

0x585a,	// (0x0003429d) cell_myfav_contact_pane_cp3_ParamLimits

0x585a,	// (0x0003429d) cell_myfav_contact_pane_cp3

0x5871,	// (0x000342b4) cell_myfav_contact_pane_cp4_ParamLimits

0x5871,	// (0x000342b4) cell_myfav_contact_pane_cp4

0x5889,	// (0x000342cc) cell_myfav_contact_pane_cp5_ParamLimits

0x5889,	// (0x000342cc) cell_myfav_contact_pane_cp5

0x589d,	// (0x000342e0) cell_myfav_contact_pane_cp6_ParamLimits

0x589d,	// (0x000342e0) cell_myfav_contact_pane_cp6

0x58b3,	// (0x000342f6) cell_myfav_contact_pane_cp7_ParamLimits

0x58b3,	// (0x000342f6) cell_myfav_contact_pane_cp7

0xcf7c,	// (0x0003b9bf) listscroll_gen_pane_cp05

0x58cb,	// (0x0003430e) main_myfav_hc_pane_g1_ParamLimits

0x58cb,	// (0x0003430e) main_myfav_hc_pane_g1

0x58e5,	// (0x00034328) main_myfav_hc_pane_g2_ParamLimits

0x58e5,	// (0x00034328) main_myfav_hc_pane_g2

0x0002,

0xf894,	// (0x0003e2d7) main_myfav_hc_pane_g_ParamLimits

0xf894,	// (0x0003e2d7) main_myfav_hc_pane_g

0x5919,	// (0x0003435c) main_myfav_hc_pane_t1_ParamLimits

0x5919,	// (0x0003435c) main_myfav_hc_pane_t1

0xcf85,	// (0x0003b9c8) main_myfav_hc_pane_t2_ParamLimits

0xcf85,	// (0x0003b9c8) main_myfav_hc_pane_t2

0xcf97,	// (0x0003b9da) main_myfav_hc_pane_t3_ParamLimits

0xcf97,	// (0x0003b9da) main_myfav_hc_pane_t3

0x5930,	// (0x00034373) main_myfav_hc_pane_t4_ParamLimits

0x5930,	// (0x00034373) main_myfav_hc_pane_t4

0x0004,

0xf89b,	// (0x0003e2de) main_myfav_hc_pane_t_ParamLimits

0xf89b,	// (0x0003e2de) main_myfav_hc_pane_t

0xa540,	// (0x00038f83) bg_myfav_hc_instruction_pane_g1

0xcfa9,	// (0x0003b9ec) cell_myfav_contact_pane_g1_ParamLimits

0xcfa9,	// (0x0003b9ec) cell_myfav_contact_pane_g1

0xcfa9,	// (0x0003b9ec) cell_myfav_contact_pane_g2_ParamLimits

0xcfa9,	// (0x0003b9ec) cell_myfav_contact_pane_g2

0xcfb5,	// (0x0003b9f8) cell_myfav_contact_pane_g3_ParamLimits

0xcfb5,	// (0x0003b9f8) cell_myfav_contact_pane_g3

0xa2f1,	// (0x00038d34) cell_myfav_contact_pane_g4_ParamLimits

0xa2f1,	// (0x00038d34) cell_myfav_contact_pane_g4

0xcfc2,	// (0x0003ba05) cell_myfav_contact_pane_g5_ParamLimits

0xcfc2,	// (0x0003ba05) cell_myfav_contact_pane_g5

0x0004,

0xf8a6,	// (0x0003e2e9) cell_myfav_contact_pane_g_ParamLimits

0xf8a6,	// (0x0003e2e9) cell_myfav_contact_pane_g

0x58ff,	// (0x00034342) main_myfav_hc_pane_g3_ParamLimits

0x58ff,	// (0x00034342) main_myfav_hc_pane_g3

0xfddb,	// (0x0002e81e) popup_adpt_find_window

0x595a,	// (0x0003439d) afind_page_pane_ParamLimits

0x595a,	// (0x0003439d) afind_page_pane

0x5970,	// (0x000343b3) aid_size_cell_afind_ParamLimits

0x5970,	// (0x000343b3) aid_size_cell_afind

0x598e,	// (0x000343d1) bg_popup_sub_pane_cp09_ParamLimits

0x598e,	// (0x000343d1) bg_popup_sub_pane_cp09

0x59a0,	// (0x000343e3) find_pane_cp01_ParamLimits

0x59a0,	// (0x000343e3) find_pane_cp01

0xcfce,	// (0x0003ba11) grid_afind_control_pane_ParamLimits

0xcfce,	// (0x0003ba11) grid_afind_control_pane

0x59b4,	// (0x000343f7) grid_afind_pane_ParamLimits

0x59b4,	// (0x000343f7) grid_afind_pane

0x59d6,	// (0x00034419) cell_afind_pane_ParamLimits

0x59d6,	// (0x00034419) cell_afind_pane

0xa540,	// (0x00038f83) afind_page_pane_g1

0x5a3f,	// (0x00034482) afind_page_pane_g2

0x5a47,	// (0x0003448a) afind_page_pane_g3

0x0002,

0xf8b1,	// (0x0003e2f4) afind_page_pane_g

0x5a4f,	// (0x00034492) afind_page_pane_t1

0xcff4,	// (0x0003ba37) cell_afind_grid_control_pane_ParamLimits

0xcff4,	// (0x0003ba37) cell_afind_grid_control_pane

0xce29,	// (0x0003b86c) bg_button_pane_cp69_ParamLimits

0xce29,	// (0x0003b86c) bg_button_pane_cp69

0x5a5d,	// (0x000344a0) cell_afind_pane_g1_ParamLimits

0x5a5d,	// (0x000344a0) cell_afind_pane_g1

0x5a6a,	// (0x000344ad) cell_afind_pane_t1_ParamLimits

0x5a6a,	// (0x000344ad) cell_afind_pane_t1

0xa54a,	// (0x00038f8d) bg_button_pane_cp72

0xd003,	// (0x0003ba46) cell_afind_grid_control_pane_g1

0x3a72,	// (0x000324b5) aid_image_placing_area_ParamLimits

0x3a72,	// (0x000324b5) aid_image_placing_area

0xa2e3,	// (0x00038d26) field_vitu_entry_pane_g1_ParamLimits

0xa2e3,	// (0x00038d26) field_vitu_entry_pane_g1

0xa2e3,	// (0x00038d26) field_vitu_entry_pane_g2_ParamLimits

0xa2e3,	// (0x00038d26) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x0003dc04) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x0003dc04) field_vitu_entry_pane_g

0xcbb9,	// (0x0003b5fc) cell_vitu_itu_pane_g1_ParamLimits

0xcb9c,	// (0x0003b5df) cell_vitu_itu_pane_t3_ParamLimits

0xcb9c,	// (0x0003b5df) cell_vitu_itu_pane_t3

0xcdd2,	// (0x0003b815) mp4_progress_pane_t1_ParamLimits

0xcdeb,	// (0x0003b82e) mp4_progress_pane_t2_ParamLimits

0xf7f7,	// (0x0003e23a) mp4_progress_pane_t_ParamLimits

0xce04,	// (0x0003b847) mup_progress_pane_cp04_ParamLimits

0x5944,	// (0x00034387) main_myfav_hc_pane_t5_ParamLimits

0x5944,	// (0x00034387) main_myfav_hc_pane_t5

0x121a,	// (0x0002fc5d) aid_zoom_text_primary

0xfddb,	// (0x0002e81e) popup_adpt_find_window_ParamLimits

0x12a2,	// (0x0002fce5) main_cam_set_pane

0x0a99,	// (0x0002f4dc) cam4_zoom_pane_ParamLimits

0x0a99,	// (0x0002f4dc) cam4_zoom_pane

0x5a7c,	// (0x000344bf) main_cam_set_pane_g1_ParamLimits

0x5a7c,	// (0x000344bf) main_cam_set_pane_g1

0x5a8a,	// (0x000344cd) main_cam_set_pane_g2_ParamLimits

0x5a8a,	// (0x000344cd) main_cam_set_pane_g2

0x0001,

0xf8b8,	// (0x0003e2fb) main_cam_set_pane_g_ParamLimits

0xf8b8,	// (0x0003e2fb) main_cam_set_pane_g

0x5aab,	// (0x000344ee) main_cam_set_pane_t1_ParamLimits

0x5aab,	// (0x000344ee) main_cam_set_pane_t1

0x5ac6,	// (0x00034509) main_cset_listscroll_pane_ParamLimits

0x5ac6,	// (0x00034509) main_cset_listscroll_pane

0x5aee,	// (0x00034531) main_cset_slider_pane_ParamLimits

0x5aee,	// (0x00034531) main_cset_slider_pane

0xd014,	// (0x0003ba57) main_cset_list_pane_ParamLimits

0xd014,	// (0x0003ba57) main_cset_list_pane

0xd024,	// (0x0003ba67) scroll_pane_cp028

0x5b18,	// (0x0003455b) aid_area_touch_slider

0x5b34,	// (0x00034577) cset_slider_pane

0x5b57,	// (0x0003459a) main_cset_slider_pane_g1

0x5b6c,	// (0x000345af) main_cset_slider_pane_g2

0x0011,

0xf8bd,	// (0x0003e300) main_cset_slider_pane_g

0xd0a3,	// (0x0003bae6) main_cset_slider_pane_t1

0x5c2e,	// (0x00034671) main_cset_slider_pane_t2

0x5c48,	// (0x0003468b) main_cset_slider_pane_t3

0x5c62,	// (0x000346a5) main_cset_slider_pane_t4

0x5c7c,	// (0x000346bf) main_cset_slider_pane_t5

0x5c9a,	// (0x000346dd) main_cset_slider_pane_t6

0x5caf,	// (0x000346f2) main_cset_slider_pane_t7

0x000e,

0xf8e2,	// (0x0003e325) main_cset_slider_pane_t

0x5dbb,	// (0x000347fe) cset_list_set_pane_ParamLimits

0x5dbb,	// (0x000347fe) cset_list_set_pane

0xd13d,	// (0x0003bb80) aid_position_infowindow_above

0xd145,	// (0x0003bb88) aid_position_infowindow_below

0x5dcf,	// (0x00034812) cset_list_set_pane_g1_ParamLimits

0x5dcf,	// (0x00034812) cset_list_set_pane_g1

0x5ddb,	// (0x0003481e) cset_list_set_pane_g3_ParamLimits

0x5ddb,	// (0x0003481e) cset_list_set_pane_g3

0x0001,

0xf901,	// (0x0003e344) cset_list_set_pane_g_ParamLimits

0xf901,	// (0x0003e344) cset_list_set_pane_g

0x5dea,	// (0x0003482d) cset_list_set_pane_t1_ParamLimits

0x5dea,	// (0x0003482d) cset_list_set_pane_t1

0xa27c,	// (0x00038cbf) list_highlight_pane_cp021_ParamLimits

0xa27c,	// (0x00038cbf) list_highlight_pane_cp021

0xafec,	// (0x00039a2f) cset_slider_pane_g1

0xaffe,	// (0x00039a41) cset_slider_pane_g2

0xaff5,	// (0x00039a38) cset_slider_pane_g3

0x0002,

0xf906,	// (0x0003e349) cset_slider_pane_g

0xac34,	// (0x00039677) aid_area_touch_cam4_zoom

0x0fb8,	// (0x0002f9fb) cam4_zoom_cont_pane

0x0fc0,	// (0x0002fa03) cam4_zoom_pane_g1

0x0fc8,	// (0x0002fa0b) cam4_zoom_pane_g2

0x0fd0,	// (0x0002fa13) cam4_zoom_pane_g3

0x0002,

0xf90d,	// (0x0003e350) cam4_zoom_pane_g

0x5dff,	// (0x00034842) cam4_zoom_cont_pane_g1

0x5e08,	// (0x0003484b) cam4_zoom_cont_pane_g2

0x5e11,	// (0x00034854) cam4_zoom_cont_pane_g3

0x0002,

0xf914,	// (0x0003e357) cam4_zoom_cont_pane_g

0x0967,	// (0x0002f3aa) call4_image_pane_ParamLimits

0x0967,	// (0x0002f3aa) call4_image_pane

0x55ed,	// (0x00034030) call4_windows_conf_pane_ParamLimits

0x5634,	// (0x00034077) popup_call4_audio_in_window_ParamLimits

0x5634,	// (0x00034077) popup_call4_audio_in_window

0x9bad,	// (0x000385f0) bg_popup_call2_act_pane_cp02

0xce35,	// (0x0003b878) call4_list_conf_pane

0xa540,	// (0x00038f83) call4_image_pane_g1

0xa540,	// (0x00038f83) call4_image_pane_g2

0x0001,

0xf398,	// (0x0003dddb) call4_image_pane_g

0xd14d,	// (0x0003bb90) list_single_graphic_popup_conf4_pane_ParamLimits

0xd14d,	// (0x0003bb90) list_single_graphic_popup_conf4_pane

0x9bad,	// (0x000385f0) list_highlight_pane_cp022

0xd162,	// (0x0003bba5) list_single_graphic_popup_conf4_pane_g1

0xac8d,	// (0x000396d0) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf91b,	// (0x0003e35e) list_single_graphic_popup_conf4_pane_g

0xd16a,	// (0x0003bbad) list_single_graphic_popup_conf4_pane_t1

0x1df8,	// (0x0003083b) popup_vtel_slider_window_ParamLimits

0x1df8,	// (0x0003083b) popup_vtel_slider_window

0xce17,	// (0x0003b85a) dialer2_ne_pane_t2_ParamLimits

0xce17,	// (0x0003b85a) dialer2_ne_pane_t2

0x0001,

0xf7fc,	// (0x0003e23f) dialer2_ne_pane_t_ParamLimits

0xf7fc,	// (0x0003e23f) dialer2_ne_pane_t

0xc402,	// (0x0003ae45) bg_popup_sub_pane_cp010_ParamLimits

0xc402,	// (0x0003ae45) bg_popup_sub_pane_cp010

0x5e1a,	// (0x0003485d) popup_vtel_slider_window_g1_ParamLimits

0x5e1a,	// (0x0003485d) popup_vtel_slider_window_g1

0x5e2d,	// (0x00034870) popup_vtel_slider_window_g2_ParamLimits

0x5e2d,	// (0x00034870) popup_vtel_slider_window_g2

0x0003,

0xf920,	// (0x0003e363) popup_vtel_slider_window_g_ParamLimits

0xf920,	// (0x0003e363) popup_vtel_slider_window_g

0x5e83,	// (0x000348c6) vtel_slider_pane_ParamLimits

0x5e83,	// (0x000348c6) vtel_slider_pane

0x5ea5,	// (0x000348e8) vtel_slider_pane_g1_ParamLimits

0x5ea5,	// (0x000348e8) vtel_slider_pane_g1

0x5eb9,	// (0x000348fc) vtel_slider_pane_g2_ParamLimits

0x5eb9,	// (0x000348fc) vtel_slider_pane_g2

0x5ed1,	// (0x00034914) vtel_slider_pane_g3_ParamLimits

0x5ed1,	// (0x00034914) vtel_slider_pane_g3

0x5ea5,	// (0x000348e8) vtel_slider_pane_g4_ParamLimits

0x5ea5,	// (0x000348e8) vtel_slider_pane_g4

0x5ee7,	// (0x0003492a) vtel_slider_pane_g5_ParamLimits

0x5ee7,	// (0x0003492a) vtel_slider_pane_g5

0x0004,

0xf929,	// (0x0003e36c) vtel_slider_pane_g_ParamLimits

0xf929,	// (0x0003e36c) vtel_slider_pane_g

0x12a2,	// (0x0002fce5) main_gallery2_pane

0x0c6b,	// (0x0002f6ae) aid_size_row_itut2_dropdow_list_ParamLimits

0x0c6b,	// (0x0002f6ae) aid_size_row_itut2_dropdow_list

0x0cfb,	// (0x0002f73e) grid_vitu2_function_top_pane_ParamLimits

0x0cfb,	// (0x0002f73e) grid_vitu2_function_top_pane

0x0d5f,	// (0x0002f7a2) popup_vitu2_dropdown_list_window_ParamLimits

0x0d5f,	// (0x0002f7a2) popup_vitu2_dropdown_list_window

0x0d86,	// (0x0002f7c9) popup_vitu2_match_list_window

0x0fd8,	// (0x0002fa1b) cell_vitu2_function_top_pane_ParamLimits

0x0fd8,	// (0x0002fa1b) cell_vitu2_function_top_pane

0x0ff2,	// (0x0002fa35) cell_vitu2_function_top_pane_cp01_ParamLimits

0x0ff2,	// (0x0002fa35) cell_vitu2_function_top_pane_cp01

0x100e,	// (0x0002fa51) cell_vitu2_function_top_wide_pane_ParamLimits

0x100e,	// (0x0002fa51) cell_vitu2_function_top_wide_pane

0x12a2,	// (0x0002fce5) bg_button_pane_cp012

0x102c,	// (0x0002fa6f) cell_vitu2_function_top_pane_g1

0x5efd,	// (0x00034940) bg_button_pane_cp013_ParamLimits

0x5efd,	// (0x00034940) bg_button_pane_cp013

0x5f19,	// (0x0003495c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5f19,	// (0x0003495c) cell_vitu2_function_top_wide_pane_g1

0x12a2,	// (0x0002fce5) bg_popup_sub_pane_cp20

0x1040,	// (0x0002fa83) list_vitu2_match_list_pane

0xcef4,	// (0x0003b937) bg_popup_sub_pane_cp20_g1

0xcefc,	// (0x0003b93f) bg_popup_sub_pane_cp20_g2

0xa764,	// (0x000391a7) bg_popup_sub_pane_cp20_g3

0xcf04,	// (0x0003b947) bg_popup_sub_pane_cp20_g4

0xa744,	// (0x00039187) bg_popup_sub_pane_cp20_g5

0xd180,	// (0x0003bbc3) bg_popup_sub_pane_cp20_g6

0xcf14,	// (0x0003b957) bg_popup_sub_pane_cp20_g7

0xcf1c,	// (0x0003b95f) bg_popup_sub_pane_cp20_g8

0xcf24,	// (0x0003b967) bg_popup_sub_pane_cp20_g9

0x0008,

0xf934,	// (0x0003e377) bg_popup_sub_pane_cp20_g

0x5f31,	// (0x00034974) list_vitu2_match_list_item_pane_ParamLimits

0x5f31,	// (0x00034974) list_vitu2_match_list_item_pane

0x5f43,	// (0x00034986) list_vitu2_match_list_item_pane_t1

0x12bc,	// (0x0002fcff) bg_popup_sub_pane_cp21

0xa50a,	// (0x00038f4d) grid_vitu2_dropdown_list_pane

0x1058,	// (0x0002fa9b) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1058,	// (0x0002fa9b) cell_vitu2_dropdown_list_char_pane

0x107a,	// (0x0002fabd) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x107a,	// (0x0002fabd) cell_vitu2_dropdown_list_ctrl_pane

0xd188,	// (0x0003bbcb) cell_vitu2_dropdown_list_char_pane_g1

0xd191,	// (0x0003bbd4) cell_vitu2_dropdown_list_char_pane_g2

0xd19a,	// (0x0003bbdd) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf947,	// (0x0003e38a) cell_vitu2_dropdown_list_char_pane_g

0x10a4,	// (0x0002fae7) cell_vitu2_dropdown_list_char_pane_t1

0x5f51,	// (0x00034994) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x5f51,	// (0x00034994) cell_vitu2_dropdown_list_ctrl_pane_g1

0x5f61,	// (0x000349a4) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x5f61,	// (0x000349a4) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5f72,	// (0x000349b5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5f72,	// (0x000349b5) cell_vitu2_dropdown_list_ctrl_pane_g3

0x10b2,	// (0x0002faf5) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x10b2,	// (0x0002faf5) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd095,	// (0x0003bad8) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd095,	// (0x0003bad8) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf94e,	// (0x0003e391) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf94e,	// (0x0003e391) cell_vitu2_dropdown_list_ctrl_pane_g

0x5f82,	// (0x000349c5) aid_size_cell_gallery2_ParamLimits

0x5f82,	// (0x000349c5) aid_size_cell_gallery2

0x5fa0,	// (0x000349e3) grid_gallery2_pane_ParamLimits

0x5fa0,	// (0x000349e3) grid_gallery2_pane

0x5fba,	// (0x000349fd) scroll_pane_cp029_ParamLimits

0x5fba,	// (0x000349fd) scroll_pane_cp029

0x5fcb,	// (0x00034a0e) cell_gallery2_pane_ParamLimits

0x5fcb,	// (0x00034a0e) cell_gallery2_pane

0xd1a3,	// (0x0003bbe6) cell_gallery2_pane_g2

0x602f,	// (0x00034a72) cell_gallery2_pane_g3

0xd1ab,	// (0x0003bbee) cell_gallery2_pane_g4

0xd1b3,	// (0x0003bbf6) cell_gallery2_pane_g5

0xa50a,	// (0x00038f4d) grid_highlight_pane_cp10

0x0d86,	// (0x0002f7c9) popup_vitu2_match_list_window_ParamLimits

0x0d9d,	// (0x0002f7e0) popup_vitu2_query_window_ParamLimits

0x0d9d,	// (0x0002f7e0) popup_vitu2_query_window

0x12bc,	// (0x0002fcff) bg_vitu2_candi_button_pane

0xd188,	// (0x0003bbcb) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd191,	// (0x0003bbd4) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd19a,	// (0x0003bbdd) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6037,	// (0x00034a7a) bg_button_pane_cp015

0x604e,	// (0x00034a91) bg_button_pane_cp016

0x605a,	// (0x00034a9d) bg_button_pane_cp017

0xaf7a,	// (0x000399bd) bg_popup_sub_pane_cp22

0xd1bb,	// (0x0003bbfe) popup_vitu2_query_window_g1

0x609b,	// (0x00034ade) popup_vitu2_query_window_g2

0x0002,

0xf959,	// (0x0003e39c) popup_vitu2_query_window_g

0x60c1,	// (0x00034b04) popup_vitu2_query_window_t1_ParamLimits

0x60c1,	// (0x00034b04) popup_vitu2_query_window_t1

0x60f6,	// (0x00034b39) popup_vitu2_query_window_t2_ParamLimits

0x60f6,	// (0x00034b39) popup_vitu2_query_window_t2

0x6108,	// (0x00034b4b) popup_vitu2_query_window_t3_ParamLimits

0x6108,	// (0x00034b4b) popup_vitu2_query_window_t3

0x6130,	// (0x00034b73) popup_vitu2_query_window_t4_ParamLimits

0x6130,	// (0x00034b73) popup_vitu2_query_window_t4

0x6144,	// (0x00034b87) popup_vitu2_query_window_t5_ParamLimits

0x6144,	// (0x00034b87) popup_vitu2_query_window_t5

0x0006,

0xf960,	// (0x0003e3a3) popup_vitu2_query_window_t_ParamLimits

0xf960,	// (0x0003e3a3) popup_vitu2_query_window_t

0xd00c,	// (0x0003ba4f) main_cset_text_pane

0x5b18,	// (0x0003455b) aid_area_touch_slider_ParamLimits

0x5b34,	// (0x00034577) cset_slider_pane_ParamLimits

0x5b57,	// (0x0003459a) main_cset_slider_pane_g1_ParamLimits

0x5b6c,	// (0x000345af) main_cset_slider_pane_g2_ParamLimits

0xd02d,	// (0x0003ba70) main_cset_slider_pane_g3_ParamLimits

0xd02d,	// (0x0003ba70) main_cset_slider_pane_g3

0x5b81,	// (0x000345c4) main_cset_slider_pane_g4_ParamLimits

0x5b81,	// (0x000345c4) main_cset_slider_pane_g4

0x5b90,	// (0x000345d3) main_cset_slider_pane_g5_ParamLimits

0x5b90,	// (0x000345d3) main_cset_slider_pane_g5

0x5b9e,	// (0x000345e1) main_cset_slider_pane_g6_ParamLimits

0x5b9e,	// (0x000345e1) main_cset_slider_pane_g6

0xf8bd,	// (0x0003e300) main_cset_slider_pane_g_ParamLimits

0xd0a3,	// (0x0003bae6) main_cset_slider_pane_t1_ParamLimits

0x5c2e,	// (0x00034671) main_cset_slider_pane_t2_ParamLimits

0x5c48,	// (0x0003468b) main_cset_slider_pane_t3_ParamLimits

0x5c62,	// (0x000346a5) main_cset_slider_pane_t4_ParamLimits

0x5c7c,	// (0x000346bf) main_cset_slider_pane_t5_ParamLimits

0x5c9a,	// (0x000346dd) main_cset_slider_pane_t6_ParamLimits

0x5caf,	// (0x000346f2) main_cset_slider_pane_t7_ParamLimits

0x5cdd,	// (0x00034720) main_cset_slider_pane_t8_ParamLimits

0x5cdd,	// (0x00034720) main_cset_slider_pane_t8

0x5d05,	// (0x00034748) main_cset_slider_pane_t9_ParamLimits

0x5d05,	// (0x00034748) main_cset_slider_pane_t9

0x5d2d,	// (0x00034770) main_cset_slider_pane_t10_ParamLimits

0x5d2d,	// (0x00034770) main_cset_slider_pane_t10

0x5d55,	// (0x00034798) main_cset_slider_pane_t11_ParamLimits

0x5d55,	// (0x00034798) main_cset_slider_pane_t11

0x5d7f,	// (0x000347c2) main_cset_slider_pane_t12_ParamLimits

0x5d7f,	// (0x000347c2) main_cset_slider_pane_t12

0x5d9c,	// (0x000347df) main_cset_slider_pane_t13_ParamLimits

0x5d9c,	// (0x000347df) main_cset_slider_pane_t13

0xf8e2,	// (0x0003e325) main_cset_slider_pane_t_ParamLimits

0x9bad,	// (0x000385f0) bg_popup_sub_pane_cp011

0xd1c7,	// (0x0003bc0a) main_cset_text_pane_g1

0xd1cf,	// (0x0003bc12) main_cset_text_pane_t1

0xd1dd,	// (0x0003bc20) main_cset_text_pane_t2

0xd1eb,	// (0x0003bc2e) main_cset_text_pane_t3

0xd1f9,	// (0x0003bc3c) main_cset_text_pane_t4

0xd207,	// (0x0003bc4a) main_cset_text_pane_t5

0xd215,	// (0x0003bc58) main_cset_text_pane_t6

0xd223,	// (0x0003bc66) main_cset_text_pane_t7

0x0006,

0xf96f,	// (0x0003e3b2) main_cset_text_pane_t

0x12bc,	// (0x0002fcff) main_cam4_burst_pane

0x12bc,	// (0x0002fcff) main_cam5_pane

0xcfe2,	// (0x0003ba25) bg_button_pane_cp019

0xcfeb,	// (0x0003ba2e) bg_button_pane_cp020

0xd039,	// (0x0003ba7c) main_cset_slider_pane_g7_ParamLimits

0xd039,	// (0x0003ba7c) main_cset_slider_pane_g7

0xd045,	// (0x0003ba88) main_cset_slider_pane_g8_ParamLimits

0xd045,	// (0x0003ba88) main_cset_slider_pane_g8

0x5bb2,	// (0x000345f5) main_cset_slider_pane_g9_ParamLimits

0x5bb2,	// (0x000345f5) main_cset_slider_pane_g9

0x5bbe,	// (0x00034601) main_cset_slider_pane_g10_ParamLimits

0x5bbe,	// (0x00034601) main_cset_slider_pane_g10

0x5bca,	// (0x0003460d) main_cset_slider_pane_g11_ParamLimits

0x5bca,	// (0x0003460d) main_cset_slider_pane_g11

0x5bd6,	// (0x00034619) main_cset_slider_pane_g12_ParamLimits

0x5bd6,	// (0x00034619) main_cset_slider_pane_g12

0x5be2,	// (0x00034625) main_cset_slider_pane_g13_ParamLimits

0x5be2,	// (0x00034625) main_cset_slider_pane_g13

0x5bee,	// (0x00034631) main_cset_slider_pane_g14_ParamLimits

0x5bee,	// (0x00034631) main_cset_slider_pane_g14

0x5bfa,	// (0x0003463d) main_cset_slider_pane_g15_ParamLimits

0x5bfa,	// (0x0003463d) main_cset_slider_pane_g15

0xd0cb,	// (0x0003bb0e) main_cset_slider_pane_t14_ParamLimits

0xd0cb,	// (0x0003bb0e) main_cset_slider_pane_t14

0xd104,	// (0x0003bb47) main_cset_slider_pane_t15_ParamLimits

0xd104,	// (0x0003bb47) main_cset_slider_pane_t15

0x61ae,	// (0x00034bf1) aid_cam4_burst_size_cell_ParamLimits

0x61ae,	// (0x00034bf1) aid_cam4_burst_size_cell

0x61ce,	// (0x00034c11) grid_cam4_burst_pane_ParamLimits

0x61ce,	// (0x00034c11) grid_cam4_burst_pane

0x6208,	// (0x00034c4b) linegrid_cam4_burst_pane_ParamLimits

0x6208,	// (0x00034c4b) linegrid_cam4_burst_pane

0xd231,	// (0x0003bc74) scroll_pane_cp30_ParamLimits

0xd231,	// (0x0003bc74) scroll_pane_cp30

0x622a,	// (0x00034c6d) cell_cam4_burst_pane_ParamLimits

0x622a,	// (0x00034c6d) cell_cam4_burst_pane

0xd23d,	// (0x0003bc80) linegrid_cam4_burst_pane_g1_ParamLimits

0xd23d,	// (0x0003bc80) linegrid_cam4_burst_pane_g1

0x627f,	// (0x00034cc2) linegrid_cam4_burst_pane_g2_ParamLimits

0x627f,	// (0x00034cc2) linegrid_cam4_burst_pane_g2

0xd24a,	// (0x0003bc8d) linegrid_cam4_burst_pane_g3_ParamLimits

0xd24a,	// (0x0003bc8d) linegrid_cam4_burst_pane_g3

0x0002,

0xf97e,	// (0x0003e3c1) linegrid_cam4_burst_pane_g_ParamLimits

0xf97e,	// (0x0003e3c1) linegrid_cam4_burst_pane_g

0x6290,	// (0x00034cd3) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6290,	// (0x00034cd3) linegrid_cam4_burst_pane_g3_copy1

0xd257,	// (0x0003bc9a) linegrid_cam4_burst_pane_g4_ParamLimits

0xd257,	// (0x0003bc9a) linegrid_cam4_burst_pane_g4

0x62ae,	// (0x00034cf1) linegrid_cam4_burst_pane_g5_ParamLimits

0x62ae,	// (0x00034cf1) linegrid_cam4_burst_pane_g5

0x62bf,	// (0x00034d02) linegrid_cam4_burst_pane_g6_ParamLimits

0x62bf,	// (0x00034d02) linegrid_cam4_burst_pane_g6

0xd264,	// (0x0003bca7) linegrid_cam4_burst_pane_g7_ParamLimits

0xd264,	// (0x0003bca7) linegrid_cam4_burst_pane_g7

0x62d6,	// (0x00034d19) cell_cam4_burst_pane_g1

0xd27d,	// (0x0003bcc0) main_cam5_pane_t1_ParamLimits

0xd27d,	// (0x0003bcc0) main_cam5_pane_t1

0xd28f,	// (0x0003bcd2) main_cam5_pane_t2_ParamLimits

0xd28f,	// (0x0003bcd2) main_cam5_pane_t2

0xd2a1,	// (0x0003bce4) main_cam5_pane_t3_ParamLimits

0xd2a1,	// (0x0003bce4) main_cam5_pane_t3

0xd2b3,	// (0x0003bcf6) main_cam5_pane_t4_ParamLimits

0xd2b3,	// (0x0003bcf6) main_cam5_pane_t4

0xd2cb,	// (0x0003bd0e) main_cam5_pane_t5_ParamLimits

0xd2cb,	// (0x0003bd0e) main_cam5_pane_t5

0xd2df,	// (0x0003bd22) main_cam5_pane_t6_ParamLimits

0xd2df,	// (0x0003bd22) main_cam5_pane_t6

0xd2f3,	// (0x0003bd36) main_cam5_pane_t7_ParamLimits

0xd2f3,	// (0x0003bd36) main_cam5_pane_t7

0xd305,	// (0x0003bd48) main_cam5_pane_t8_ParamLimits

0xd305,	// (0x0003bd48) main_cam5_pane_t8

0xd323,	// (0x0003bd66) main_cam5_pane_t9_ParamLimits

0xd323,	// (0x0003bd66) main_cam5_pane_t9

0xd335,	// (0x0003bd78) main_cam5_pane_t10_ParamLimits

0xd335,	// (0x0003bd78) main_cam5_pane_t10

0xd347,	// (0x0003bd8a) main_cam5_pane_t11_ParamLimits

0xd347,	// (0x0003bd8a) main_cam5_pane_t11

0xd35b,	// (0x0003bd9e) main_cam5_pane_t12_ParamLimits

0xd35b,	// (0x0003bd9e) main_cam5_pane_t12

0xd372,	// (0x0003bdb5) main_cam5_pane_t13_ParamLimits

0xd372,	// (0x0003bdb5) main_cam5_pane_t13

0x000c,

0xf98a,	// (0x0003e3cd) main_cam5_pane_t_ParamLimits

0xf98a,	// (0x0003e3cd) main_cam5_pane_t

0xfe5a,	// (0x0002e89d) popup_scut_keymap_window_ParamLimits

0xfe5a,	// (0x0002e89d) popup_scut_keymap_window

0x62e9,	// (0x00034d2c) aid_size_cell_brow_shortcut

0xa50a,	// (0x00038f4d) bg_popup_window_pane_cp010

0x62f5,	// (0x00034d38) grid_scut_pane

0x6301,	// (0x00034d44) cell_scut_pane_ParamLimits

0x6301,	// (0x00034d44) cell_scut_pane

0x631a,	// (0x00034d5d) cell_scut_pane_g1

0xd395,	// (0x0003bdd8) cell_scut_pane_t1

0xd3a4,	// (0x0003bde7) cell_scut_pane_t2

0x6323,	// (0x00034d66) cell_scut_pane_t3

0x0002,

0xf9a5,	// (0x0003e3e8) cell_scut_pane_t

0x48a0,	// (0x000332e3) main_mup3_pane_g8_ParamLimits

0x48a0,	// (0x000332e3) main_mup3_pane_g8

0x0c85,	// (0x0002f6c8) area_vitu2_query_pane_ParamLimits

0x0c85,	// (0x0002f6c8) area_vitu2_query_pane

0x6066,	// (0x00034aa9) input_focus_pane_cp08

0xd3b3,	// (0x0003bdf6) area_vitu2_query_pane_g1

0x6331,	// (0x00034d74) area_vitu2_query_pane_g2

0x0001,

0xf9ac,	// (0x0003e3ef) area_vitu2_query_pane_g

0x6346,	// (0x00034d89) area_vitu2_query_pane_t1_ParamLimits

0x6346,	// (0x00034d89) area_vitu2_query_pane_t1

0x635a,	// (0x00034d9d) area_vitu2_query_pane_t2_ParamLimits

0x635a,	// (0x00034d9d) area_vitu2_query_pane_t2

0x636e,	// (0x00034db1) area_vitu2_query_pane_t3_ParamLimits

0x636e,	// (0x00034db1) area_vitu2_query_pane_t3

0xd3bf,	// (0x0003be02) area_vitu2_query_pane_t4_ParamLimits

0xd3bf,	// (0x0003be02) area_vitu2_query_pane_t4

0xd3e7,	// (0x0003be2a) area_vitu2_query_pane_t5_ParamLimits

0xd3e7,	// (0x0003be2a) area_vitu2_query_pane_t5

0xd40f,	// (0x0003be52) area_vitu2_query_pane_t6_ParamLimits

0xd40f,	// (0x0003be52) area_vitu2_query_pane_t6

0x0006,

0xf9b1,	// (0x0003e3f4) area_vitu2_query_pane_t_ParamLimits

0xf9b1,	// (0x0003e3f4) area_vitu2_query_pane_t

0x639a,	// (0x00034ddd) bg_button_pane_cp018

0x63a6,	// (0x00034de9) bg_button_pane_cp021

0x63b2,	// (0x00034df5) bg_button_pane_cp022

0x63dd,	// (0x00034e20) input_focus_pane_cp09

0x3180,	// (0x00031bc3) aid_size_touch_mv_arrow_left

0x31a9,	// (0x00031bec) aid_size_touch_mv_arrow_right

0x5c12,	// (0x00034655) main_cset_slider_pane_g16_ParamLimits

0x5c12,	// (0x00034655) main_cset_slider_pane_g16

0x5c20,	// (0x00034663) main_cset_slider_pane_g17_ParamLimits

0x5c20,	// (0x00034663) main_cset_slider_pane_g17

0x62d6,	// (0x00034d19) cell_cam4_burst_pane_g1_ParamLimits

0x9bad,	// (0x000385f0) compa_mode_pane

0x5e3d,	// (0x00034880) popup_vtel_slider_window_g3_ParamLimits

0x5e3d,	// (0x00034880) popup_vtel_slider_window_g3

0x5e54,	// (0x00034897) popup_vtel_slider_window_g4_ParamLimits

0x5e54,	// (0x00034897) popup_vtel_slider_window_g4

0x5e6b,	// (0x000348ae) popup_vtel_slider_window_t1_ParamLimits

0x5e6b,	// (0x000348ae) popup_vtel_slider_window_t1

0x12bc,	// (0x0002fcff) main_cl_pane

0x4015,	// (0x00032a58) popup_imed_adjust2_window_ParamLimits

0xaf7a,	// (0x000399bd) bg_tb_trans_pane_cp05_ParamLimits

0xcac7,	// (0x0003b50a) popup_imed_adjust2_window_g1_ParamLimits

0xcad6,	// (0x0003b519) popup_imed_adjust2_window_g2_ParamLimits

0xcad6,	// (0x0003b519) popup_imed_adjust2_window_g2

0xcae2,	// (0x0003b525) popup_imed_adjust2_window_g3_ParamLimits

0xcae2,	// (0x0003b525) popup_imed_adjust2_window_g3

0x0002,

0xf727,	// (0x0003e16a) popup_imed_adjust2_window_g_ParamLimits

0xf727,	// (0x0003e16a) popup_imed_adjust2_window_g

0xcaee,	// (0x0003b531) popup_imed_adjust2_window_t1_ParamLimits

0xcb06,	// (0x0003b549) slider_imed_adjust_pane_ParamLimits

0xcb1a,	// (0x0003b55d) slider_imed_adjust_pane_g1_ParamLimits

0xcb2a,	// (0x0003b56d) slider_imed_adjust_pane_g2_ParamLimits

0xcb3a,	// (0x0003b57d) slider_imed_adjust_pane_g3_ParamLimits

0xcb4b,	// (0x0003b58e) slider_imed_adjust_pane_g4_ParamLimits

0xf72e,	// (0x0003e171) slider_imed_adjust_pane_g_ParamLimits

0x0a39,	// (0x0002f47c) aid_touch_area_cam4_ParamLimits

0x0a39,	// (0x0002f47c) aid_touch_area_cam4

0x56d3,	// (0x00034116) battery_pane_cp01

0x0b0c,	// (0x0002f54f) main_camera4_pane_g6_ParamLimits

0x0b0c,	// (0x0002f54f) main_camera4_pane_g6

0x0b36,	// (0x0002f579) main_camera4_pane_t2_ParamLimits

0x0b36,	// (0x0002f579) main_camera4_pane_t2

0x0001,

0xf830,	// (0x0003e273) main_camera4_pane_t_ParamLimits

0xf830,	// (0x0003e273) main_camera4_pane_t

0x0b57,	// (0x0002f59a) aid_touch_area_vid4_ParamLimits

0x0b57,	// (0x0002f59a) aid_touch_area_vid4

0x0bae,	// (0x0002f5f1) main_video4_pane_g5_ParamLimits

0x0bae,	// (0x0002f5f1) main_video4_pane_g5

0x0bd4,	// (0x0002f617) vid4_progress_pane_ParamLimits

0x0bd4,	// (0x0002f617) vid4_progress_pane

0xd051,	// (0x0003ba94) main_cset_slider_pane_g18_ParamLimits

0xd051,	// (0x0003ba94) main_cset_slider_pane_g18

0xd271,	// (0x0003bcb4) cell_cam4_burst_pane_g2_ParamLimits

0xd271,	// (0x0003bcb4) cell_cam4_burst_pane_g2

0x0001,

0xf985,	// (0x0003e3c8) cell_cam4_burst_pane_g_ParamLimits

0xf985,	// (0x0003e3c8) cell_cam4_burst_pane_g

0xa355,	// (0x00038d98) bg_cl_pane_ParamLimits

0xa355,	// (0x00038d98) bg_cl_pane

0x63ee,	// (0x00034e31) cl_header_pane_ParamLimits

0x63ee,	// (0x00034e31) cl_header_pane

0x6402,	// (0x00034e45) cl_listscroll_pane_ParamLimits

0x6402,	// (0x00034e45) cl_listscroll_pane

0xd45b,	// (0x0003be9e) bg_cl_pane_g1

0xd463,	// (0x0003bea6) bg_cl_pane_g2

0xd46b,	// (0x0003beae) bg_cl_pane_g3

0xd473,	// (0x0003beb6) bg_cl_pane_g4

0xd47b,	// (0x0003bebe) bg_cl_pane_g5

0xd483,	// (0x0003bec6) bg_cl_pane_g6

0xd48b,	// (0x0003bece) bg_cl_pane_g7

0xd493,	// (0x0003bed6) bg_cl_pane_g8

0xd49b,	// (0x0003bede) bg_cl_pane_g9

0x0008,

0xf9c0,	// (0x0003e403) bg_cl_pane_g

0x6412,	// (0x00034e55) aid_height_cl_leading_ParamLimits

0x6412,	// (0x00034e55) aid_height_cl_leading

0x641e,	// (0x00034e61) aid_height_cl_text_ParamLimits

0x641e,	// (0x00034e61) aid_height_cl_text

0xa27c,	// (0x00038cbf) bg_cl_header_pane_ParamLimits

0xa27c,	// (0x00038cbf) bg_cl_header_pane

0x643d,	// (0x00034e80) cl_header_pane_g1_ParamLimits

0x643d,	// (0x00034e80) cl_header_pane_g1

0x6453,	// (0x00034e96) cl_header_pane_t1_ParamLimits

0x6453,	// (0x00034e96) cl_header_pane_t1

0xd4a3,	// (0x0003bee6) cl_list_pane

0xd024,	// (0x0003ba67) hc_scroll_pane_cp01

0xa744,	// (0x00039187) bg_cl_header_pane_g1

0xcef4,	// (0x0003b937) bg_cl_header_pane_g2

0xa764,	// (0x000391a7) bg_cl_header_pane_g3

0xcf04,	// (0x0003b947) bg_cl_header_pane_g4

0xcefc,	// (0x0003b93f) bg_cl_header_pane_g5

0xd180,	// (0x0003bbc3) bg_cl_header_pane_g6

0xcf1c,	// (0x0003b95f) bg_cl_header_pane_g7

0xcf24,	// (0x0003b967) bg_cl_header_pane_g8

0xcf14,	// (0x0003b957) bg_cl_header_pane_g9

0x0008,

0xf9d3,	// (0x0003e416) bg_cl_header_pane_g

0x646c,	// (0x00034eaf) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x646c,	// (0x00034eaf) hc_cl_list_double_graphic_heading_pane

0x647f,	// (0x00034ec2) hc_cl_list_single_graphic_pane_ParamLimits

0x647f,	// (0x00034ec2) hc_cl_list_single_graphic_pane

0x6497,	// (0x00034eda) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6497,	// (0x00034eda) hc_cl_list_single_graphic_pane_g1

0x64a3,	// (0x00034ee6) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x64a3,	// (0x00034ee6) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9e6,	// (0x0003e429) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9e6,	// (0x0003e429) hc_cl_list_single_graphic_pane_g

0x64b7,	// (0x00034efa) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x64b7,	// (0x00034efa) hc_cl_list_single_graphic_pane_t1

0x6497,	// (0x00034eda) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6497,	// (0x00034eda) hc_cl_list_double_graphic_heading_pane_g1

0x64cc,	// (0x00034f0f) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x64cc,	// (0x00034f0f) hc_cl_list_double_graphic_heading_pane_g2

0x64e0,	// (0x00034f23) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x64e0,	// (0x00034f23) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9eb,	// (0x0003e42e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9eb,	// (0x0003e42e) hc_cl_list_double_graphic_heading_pane_g

0x64f4,	// (0x00034f37) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x64f4,	// (0x00034f37) hc_cl_list_double_graphic_heading_pane_t1

0x6509,	// (0x00034f4c) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6509,	// (0x00034f4c) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9f2,	// (0x0003e435) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9f2,	// (0x0003e435) hc_cl_list_double_graphic_heading_pane_t

0x6526,	// (0x00034f69) vid4_progress_pane_g1

0x6536,	// (0x00034f79) vid4_progress_pane_g2

0x10ce,	// (0x0002fb11) vid4_progress_pane_g3

0x6546,	// (0x00034f89) vid4_progress_pane_g4

0x0004,

0xf9f7,	// (0x0003e43a) vid4_progress_pane_g

0x10e0,	// (0x0002fb23) vid4_progress_pane_t1

0x6564,	// (0x00034fa7) vid4_progress_pane_t2

0x0002,

0xfa02,	// (0x0003e445) vid4_progress_pane_t

0x10fa,	// (0x0002fb3d) wait_bar_pane_cp07

0xc410,	// (0x0003ae53) blid_firmament_pane_ParamLimits

0xc453,	// (0x0003ae96) popup_blid_sat_info2_window_g1

0xc477,	// (0x0003aeba) popup_blid_sat_info2_window_t3

0xc485,	// (0x0003aec8) popup_blid_sat_info2_window_t4

0xc493,	// (0x0003aed6) popup_blid_sat_info2_window_t5

0xc4a1,	// (0x0003aee4) popup_blid_sat_info2_window_t6

0xc4b1,	// (0x0003aef4) popup_blid_sat_info2_window_t7

0xc4bf,	// (0x0003af02) popup_blid_sat_info2_window_t8

0xc4cd,	// (0x0003af10) popup_blid_sat_info2_window_t9

0xc4db,	// (0x0003af1e) popup_blid_sat_info2_window_t10

0xc5a2,	// (0x0003afe5) aid_firma_cardinal_ParamLimits

0xc5b6,	// (0x0003aff9) blid_firmament_pane_t1_ParamLimits

0xc5cd,	// (0x0003b010) blid_firmament_pane_t2_ParamLimits

0xc5e4,	// (0x0003b027) blid_firmament_pane_t3_ParamLimits

0xc5fb,	// (0x0003b03e) blid_firmament_pane_t4_ParamLimits

0xf620,	// (0x0003e063) blid_firmament_pane_t_ParamLimits

0xc612,	// (0x0003b055) blid_sat_info_pane_ParamLimits

0x12a2,	// (0x0002fce5) main_cam_set_pane_ParamLimits

0x4fc4,	// (0x00033a07) aid_size_cell_colour_35_ParamLimits

0x4fe4,	// (0x00033a27) aid_size_cell_colour_112_ParamLimits

0x5004,	// (0x00033a47) aid_size_cell_effect_ParamLimits

0xaf7a,	// (0x000399bd) bg_tb_trans_pane_cp02_ParamLimits

0xa9c3,	// (0x00039406) heading_imed_pane_ParamLimits

0x5024,	// (0x00033a67) listscroll_imed_pane_ParamLimits

0xb8fb,	// (0x0003a33e) popup_call2_audio_first_window_g5_ParamLimits

0xb8fb,	// (0x0003a33e) popup_call2_audio_first_window_g5

0x0724,	// (0x0002f167) aid_size_touch_image3_arrow_left_ParamLimits

0x0724,	// (0x0002f167) aid_size_touch_image3_arrow_left

0x0750,	// (0x0002f193) aid_size_touch_image3_arrow_right_ParamLimits

0x0750,	// (0x0002f193) aid_size_touch_image3_arrow_right

0x657d,	// (0x00034fc0) vid4_progress_pane_t3

0x51c9,	// (0x00033c0c) main_hwr_training_symbol_option_pane_ParamLimits

0x51c9,	// (0x00033c0c) main_hwr_training_symbol_option_pane

0xcd0c,	// (0x0003b74f) popup_hwr_training_preview_window_ParamLimits

0xcd0c,	// (0x0003b74f) popup_hwr_training_preview_window

0x05bb,	// (0x0002effe) hwr_training_navi_pane_g5_ParamLimits

0x05bb,	// (0x0002effe) hwr_training_navi_pane_g5

0xcee2,	// (0x0003b925) popup_char_count_window

0x12a2,	// (0x0002fce5) bg_popup_sub_pane_cp20_ParamLimits

0x1040,	// (0x0002fa83) list_vitu2_match_list_pane_ParamLimits

0x104c,	// (0x0002fa8f) vitu2_page_scroll_pane_ParamLimits

0x104c,	// (0x0002fa8f) vitu2_page_scroll_pane

0xd4ce,	// (0x0003bf11) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd4ce,	// (0x0003bf11) list_single_hwr_training_symbol_option_pane

0xd4e1,	// (0x0003bf24) list_single_hwr_training_symbol_option_pane_g1

0xd4e9,	// (0x0003bf2c) list_single_hwr_training_symbol_option_pane_t1

0xd4f7,	// (0x0003bf3a) bg_button_pane_cp023

0xd500,	// (0x0003bf43) bg_button_pane_cp024

0xd533,	// (0x0003bf76) vitu2_page_scroll_pane_g1

0xd53b,	// (0x0003bf7e) vitu2_page_scroll_pane_g2

0x0001,

0xfa09,	// (0x0003e44c) vitu2_page_scroll_pane_g

0xd543,	// (0x0003bf86) vitu2_page_scroll_pane_t1

0xd552,	// (0x0003bf95) popup_char_count_window_g1

0xd55b,	// (0x0003bf9e) popup_char_count_window_g2

0xd564,	// (0x0003bfa7) popup_char_count_window_g3

0x0002,

0xfa0e,	// (0x0003e451) popup_char_count_window_g

0xd56d,	// (0x0003bfb0) popup_char_count_window_t1

0x12bc,	// (0x0002fcff) main_vded2_pane

0xcab3,	// (0x0003b4f6) aid_size_cell_imed_line

0xcabd,	// (0x0003b500) grid_imed_line_width_pane

0x57a1,	// (0x000341e4) vid4_indicators_pane_g4

0xd57b,	// (0x0003bfbe) cell_imed_line_width_pane_ParamLimits

0xd57b,	// (0x0003bfbe) cell_imed_line_width_pane

0xd591,	// (0x0003bfd4) cell_imed_line_width_pane_g1

0xd59a,	// (0x0003bfdd) cell_imed_line_width_pane_g2

0x0001,

0xfa15,	// (0x0003e458) cell_imed_line_width_pane_g

0x65a6,	// (0x00034fe9) main_vded2_pane_g1_ParamLimits

0x65a6,	// (0x00034fe9) main_vded2_pane_g1

0x65c1,	// (0x00035004) main_vded2_pane_g2_ParamLimits

0x65c1,	// (0x00035004) main_vded2_pane_g2

0x0001,

0xfa1a,	// (0x0003e45d) main_vded2_pane_g_ParamLimits

0xfa1a,	// (0x0003e45d) main_vded2_pane_g

0x65d3,	// (0x00035016) vded2_slider_pane_ParamLimits

0x65d3,	// (0x00035016) vded2_slider_pane

0x65e3,	// (0x00035026) aid_size_touch_vded2_end

0x65ed,	// (0x00035030) aid_size_touch_vded2_playhead

0xd5a2,	// (0x0003bfe5) aid_size_touch_vded2_start

0xd5aa,	// (0x0003bfed) vded2_slider_bg_pane

0xd5b3,	// (0x0003bff6) vded2_slider_pane_g1

0xd5bc,	// (0x0003bfff) vded2_slider_pane_g2

0x65f7,	// (0x0003503a) vded2_slider_pane_g3

0x0002,

0xfa1f,	// (0x0003e462) vded2_slider_pane_g

0xd5c4,	// (0x0003c007) vded2_slider_bg_pane_g1

0xd5cd,	// (0x0003c010) vded2_slider_bg_pane_g2

0xd5d6,	// (0x0003c019) vded2_slider_bg_pane_g3

0x0002,

0xfa26,	// (0x0003e469) vded2_slider_bg_pane_g

0x36ae,	// (0x000320f1) aid_postcard_touch_down_pane_ParamLimits

0x36ae,	// (0x000320f1) aid_postcard_touch_down_pane

0x36c6,	// (0x00032109) aid_postcard_touch_up_pane_ParamLimits

0x36c6,	// (0x00032109) aid_postcard_touch_up_pane

0x12bc,	// (0x0002fcff) main_blid2_pane

0x3ff7,	// (0x00032a3a) popup_blid2_search_window

0x9bad,	// (0x000385f0) blid2_gps_pane

0x9bad,	// (0x000385f0) blid2_navig_pane

0x9bad,	// (0x000385f0) blid2_search_pane

0x9bad,	// (0x000385f0) blid2_tripm_pane

0x6602,	// (0x00035045) blid2_search_pane_g1_ParamLimits

0x6602,	// (0x00035045) blid2_search_pane_g1

0x6615,	// (0x00035058) blid2_search_pane_t1_ParamLimits

0x6615,	// (0x00035058) blid2_search_pane_t1

0x6627,	// (0x0003506a) aid_size_cell_blid2_gps_ParamLimits

0x6627,	// (0x0003506a) aid_size_cell_blid2_gps

0x663f,	// (0x00035082) blid2_gps_pane_g1_ParamLimits

0x663f,	// (0x00035082) blid2_gps_pane_g1

0x6653,	// (0x00035096) grid_blid2_satellite_pane_ParamLimits

0x6653,	// (0x00035096) grid_blid2_satellite_pane

0x666b,	// (0x000350ae) blid2_navig_pane_g1_ParamLimits

0x666b,	// (0x000350ae) blid2_navig_pane_g1

0x6677,	// (0x000350ba) blid2_navig_pane_t1_ParamLimits

0x6677,	// (0x000350ba) blid2_navig_pane_t1

0x6692,	// (0x000350d5) blid2_navig_pane_t2_ParamLimits

0x6692,	// (0x000350d5) blid2_navig_pane_t2

0x0001,

0xfa2d,	// (0x0003e470) blid2_navig_pane_t_ParamLimits

0xfa2d,	// (0x0003e470) blid2_navig_pane_t

0x66ad,	// (0x000350f0) blid2_navig_ring_pane_ParamLimits

0x66ad,	// (0x000350f0) blid2_navig_ring_pane

0x66c8,	// (0x0003510b) blid2_speed_pane_ParamLimits

0x66c8,	// (0x0003510b) blid2_speed_pane

0x66d4,	// (0x00035117) blid2_tripm_pane_g1_ParamLimits

0x66d4,	// (0x00035117) blid2_tripm_pane_g1

0x66ef,	// (0x00035132) blid2_tripm_pane_g2_ParamLimits

0x66ef,	// (0x00035132) blid2_tripm_pane_g2

0x6702,	// (0x00035145) blid2_tripm_pane_g3_ParamLimits

0x6702,	// (0x00035145) blid2_tripm_pane_g3

0x6713,	// (0x00035156) blid2_tripm_pane_g4_ParamLimits

0x6713,	// (0x00035156) blid2_tripm_pane_g4

0x6724,	// (0x00035167) blid2_tripm_pane_g5_ParamLimits

0x6724,	// (0x00035167) blid2_tripm_pane_g5

0x0005,

0xfa32,	// (0x0003e475) blid2_tripm_pane_g_ParamLimits

0xfa32,	// (0x0003e475) blid2_tripm_pane_g

0x674a,	// (0x0003518d) blid2_tripm_pane_t1_ParamLimits

0x674a,	// (0x0003518d) blid2_tripm_pane_t1

0x6763,	// (0x000351a6) blid2_tripm_pane_t2_ParamLimits

0x6763,	// (0x000351a6) blid2_tripm_pane_t2

0x677c,	// (0x000351bf) blid2_tripm_pane_t3_ParamLimits

0x677c,	// (0x000351bf) blid2_tripm_pane_t3

0x0003,

0xfa3f,	// (0x0003e482) blid2_tripm_pane_t_ParamLimits

0xfa3f,	// (0x0003e482) blid2_tripm_pane_t

0x67c3,	// (0x00035206) cell_blid2_satellite_pane_ParamLimits

0x67c3,	// (0x00035206) cell_blid2_satellite_pane

0x67df,	// (0x00035222) cell_blid2_satellite_pane_g1

0xd5df,	// (0x0003c022) cell_blid2_satellite_pane_t1

0xa540,	// (0x00038f83) blid2_speed_pane_g1

0xd5ed,	// (0x0003c030) blid2_speed_pane_t1

0xd5fb,	// (0x0003c03e) blid2_speed_pane_t2

0x0001,

0xfa48,	// (0x0003e48b) blid2_speed_pane_t

0xa540,	// (0x00038f83) blid2_navig_ring_pane_g1

0x67e8,	// (0x0003522b) blid2_navig_ring_pane_g2

0x67f0,	// (0x00035233) blid2_navig_ring_pane_g3

0x67f8,	// (0x0003523b) blid2_navig_ring_pane_g4

0x6800,	// (0x00035243) blid2_navig_ring_pane_g5

0x0004,

0xfa4d,	// (0x0003e490) blid2_navig_ring_pane_g

0x9bad,	// (0x000385f0) bg_popup_window_pane_cp011

0xd609,	// (0x0003c04c) popup_blid2_search_window_g1

0xd611,	// (0x0003c054) popup_blid2_search_window_t1

0xd61f,	// (0x0003c062) popup_blid2_search_window_t2

0x0001,

0xfa58,	// (0x0003e49b) popup_blid2_search_window_t

0xa653,	// (0x00039096) main_browser_pane_g1

0xa355,	// (0x00038d98) main_browser_pane_ParamLimits

0x12a2,	// (0x0002fce5) bg_button_pane_cp011_ParamLimits

0x0fa4,	// (0x0002f9e7) cell_vitu2_function_pane_g1_ParamLimits

0xaf7a,	// (0x000399bd) bg_popup_sub_pane_cp22_ParamLimits

0x6066,	// (0x00034aa9) input_focus_pane_cp08_ParamLimits

0x6082,	// (0x00034ac5) popup_vitu2_query_button_pane_ParamLimits

0x6082,	// (0x00034ac5) popup_vitu2_query_button_pane

0x6091,	// (0x00034ad4) popup_vitu2_query_input_button_pane

0xd1bb,	// (0x0003bbfe) popup_vitu2_query_window_g1_ParamLimits

0x609b,	// (0x00034ade) popup_vitu2_query_window_g2_ParamLimits

0xf959,	// (0x0003e39c) popup_vitu2_query_window_g_ParamLimits

0x9bad,	// (0x000385f0) bg_button_pane_cp026

0x6808,	// (0x0003524b) popup_vitu2_query_input_button_pane_g1

0x9bad,	// (0x000385f0) bg_button_pane_cp025

0xd62d,	// (0x0003c070) popup_vitu2_query_button_pane_t1

0x4490,	// (0x00032ed3) main_mp3_pane_t6

0x449e,	// (0x00032ee1) popup_slider_window_cp01

0x5705,	// (0x00034148) cam4_battery_pane

0x575a,	// (0x0003419d) cam4_battery_pane_cp02

0x651e,	// (0x00034f61) cam4_battery_pane_cp01

0x651e,	// (0x00034f61) cam4_battery_pane_cp03

0xd077,	// (0x0003baba) cam4_battery_pane_g1

0xa540,	// (0x00038f83) cam4_battery_pane_g2

0x0001,

0xfa5d,	// (0x0003e4a0) cam4_battery_pane_g

0xc4e9,	// (0x0003af2c) popup_blid_sat_info2_window_t11

0x3180,	// (0x00031bc3) aid_size_touch_mv_arrow_left_ParamLimits

0x31a9,	// (0x00031bec) aid_size_touch_mv_arrow_right_ParamLimits

0xaded,	// (0x00039830) navi_pane_g1_ParamLimits

0x31e8,	// (0x00031c2b) navi_pane_g2_ParamLimits

0x3216,	// (0x00031c59) navi_pane_g3_ParamLimits

0xf334,	// (0x0003dd77) navi_pane_g_ParamLimits

0x3270,	// (0x00031cb3) navi_pane_mv_t1_ParamLimits

0x5030,	// (0x00033a73) grid_imed_effect_pane_ParamLimits

0x1d00,	// (0x00030743) aid_placing_vt_slider_lsc

0xa58f,	// (0x00038fd2) aid_placing_vt_slider_prt

0xa27c,	// (0x00038cbf) bg_tb_trans_pane_cp01_ParamLimits

0xc751,	// (0x0003b194) popup_image_details_window_g1_ParamLimits

0xc764,	// (0x0003b1a7) popup_image_details_window_g2_ParamLimits

0xc779,	// (0x0003b1bc) popup_image_details_window_g3_ParamLimits

0xc779,	// (0x0003b1bc) popup_image_details_window_g3

0xf660,	// (0x0003e0a3) popup_image_details_window_g_ParamLimits

0xc78d,	// (0x0003b1d0) popup_image_details_window_t1_ParamLimits

0xc79f,	// (0x0003b1e2) popup_image_details_window_t2_ParamLimits

0xc7b8,	// (0x0003b1fb) popup_image_details_window_t3_ParamLimits

0xc7cc,	// (0x0003b20f) popup_image_details_window_t4_ParamLimits

0xc7e7,	// (0x0003b22a) popup_image_details_window_t5_ParamLimits

0xf667,	// (0x0003e0aa) popup_image_details_window_t_ParamLimits

0x642a,	// (0x00034e6d) cl_header_name_pane_ParamLimits

0x642a,	// (0x00034e6d) cl_header_name_pane

0x6810,	// (0x00035253) cl_header_name_pane_t1_ParamLimits

0x6810,	// (0x00035253) cl_header_name_pane_t1

0x6831,	// (0x00035274) cl_header_name_pane_t2_ParamLimits

0x6831,	// (0x00035274) cl_header_name_pane_t2

0x6873,	// (0x000352b6) cl_header_name_pane_t3_ParamLimits

0x6873,	// (0x000352b6) cl_header_name_pane_t3

0x0002,

0xfa62,	// (0x0003e4a5) cl_header_name_pane_t_ParamLimits

0xfa62,	// (0x0003e4a5) cl_header_name_pane_t

0x3241,	// (0x00031c84) navi_pane_mv_g2_ParamLimits

0xce7e,	// (0x0003b8c1) field_vitu2_entry_pane_g1_ParamLimits

0xce8a,	// (0x0003b8cd) field_vitu2_entry_pane_g2_ParamLimits

0xaf44,	// (0x00039987) field_vitu2_entry_pane_g3_ParamLimits

0xaf44,	// (0x00039987) field_vitu2_entry_pane_g3

0xf862,	// (0x0003e2a5) field_vitu2_entry_pane_g_ParamLimits

0x0e34,	// (0x0002f877) cell_vitu2_itu_pane_g1_ParamLimits

0x0e4c,	// (0x0002f88f) cell_vitu2_itu_pane_g2_ParamLimits

0x0e4c,	// (0x0002f88f) cell_vitu2_itu_pane_g2

0x0001,

0xf86e,	// (0x0003e2b1) cell_vitu2_itu_pane_g_ParamLimits

0xf86e,	// (0x0003e2b1) cell_vitu2_itu_pane_g

0x12a2,	// (0x0002fce5) bg_vkb2_func_pane_cp05_ParamLimits

0x12a2,	// (0x0002fce5) bg_vkb2_func_pane_cp05

0x12a2,	// (0x0002fce5) bg_vkb2_func_pane_cp03

0x12a2,	// (0x0002fce5) bg_vkb2_func_pane_cp04

0x12a2,	// (0x0002fce5) bg_vkb2_func_pane_cp10_ParamLimits

0x12a2,	// (0x0002fce5) bg_vkb2_func_pane_cp10

0x63c7,	// (0x00034e0a) bg_vkb2_func_pane_cp08

0x639a,	// (0x00034ddd) bg_vkb2_func_pane_cp06

0x63a6,	// (0x00034de9) bg_vkb2_func_pane_cp07

0xd509,	// (0x0003bf4c) bg_vkb2_func_pane_cp11_ParamLimits

0xd509,	// (0x0003bf4c) bg_vkb2_func_pane_cp11

0xd51e,	// (0x0003bf61) bg_vkb2_func_pane_cp12_ParamLimits

0xd51e,	// (0x0003bf61) bg_vkb2_func_pane_cp12

0x9bad,	// (0x000385f0) bg_vkb2_func_pane_cp09

0xcef4,	// (0x0003b937) bg_vkb2_func_pane_g1

0xa764,	// (0x000391a7) bg_vkb2_func_pane_g2

0xcefc,	// (0x0003b93f) bg_vkb2_func_pane_g3

0xcf04,	// (0x0003b947) bg_vkb2_func_pane_g4

0xd180,	// (0x0003bbc3) bg_vkb2_func_pane_g5

0xcf1c,	// (0x0003b95f) bg_vkb2_func_pane_g6

0xcf24,	// (0x0003b967) bg_vkb2_func_pane_g7

0xcf14,	// (0x0003b957) bg_vkb2_func_pane_g8

0xa744,	// (0x00039187) bg_vkb2_func_pane_g9

0x0008,

0xfa69,	// (0x0003e4ac) bg_vkb2_func_pane_g

0x6738,	// (0x0003517b) blid2_tripm_pane_g6_ParamLimits

0x6738,	// (0x0003517b) blid2_tripm_pane_g6

0xcdca,	// (0x0003b80d) mp4_progress_pane_g1

0x67af,	// (0x000351f2) blid2_tripm_values_pane_ParamLimits

0x67af,	// (0x000351f2) blid2_tripm_values_pane

0x68a4,	// (0x000352e7) blid2_tripm_values_pane_t1

0x68b2,	// (0x000352f5) blid2_tripm_values_pane_t2

0xd63b,	// (0x0003c07e) blid2_tripm_values_pane_t3

0x68c0,	// (0x00035303) blid2_tripm_values_pane_t4

0x68ce,	// (0x00035311) blid2_tripm_values_pane_t5

0x68dc,	// (0x0003531f) blid2_tripm_values_pane_t6

0xd649,	// (0x0003c08c) blid2_tripm_values_pane_t7

0x68ea,	// (0x0003532d) blid2_tripm_values_pane_t8

0x68f8,	// (0x0003533b) blid2_tripm_values_pane_t9

0x0008,

0xfa7c,	// (0x0003e4bf) blid2_tripm_values_pane_t

0x1d3d,	// (0x00030780) call_video_pane_t1_ParamLimits

0x1d57,	// (0x0003079a) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x0003dc25) call_video_pane_t_ParamLimits

0x35a0,	// (0x00031fe3) msg_header_pane_g1_ParamLimits

0xb031,	// (0x00039a74) msg_header_pane_g2_ParamLimits

0xb031,	// (0x00039a74) msg_header_pane_g2

0x0001,

0xf3d7,	// (0x0003de1a) msg_header_pane_g_ParamLimits

0xf3d7,	// (0x0003de1a) msg_header_pane_g

0xa355,	// (0x00038d98) main_clock2_pane_ParamLimits

0x4e0b,	// (0x0003384e) grid_clock2_toolbar_pane_ParamLimits

0x4e0b,	// (0x0003384e) grid_clock2_toolbar_pane

0x4e0b,	// (0x0003384e) listscroll_clock2_pane_ParamLimits

0x4e0b,	// (0x0003384e) listscroll_clock2_pane

0x4eea,	// (0x0003392d) main_clock2_pane_t3_ParamLimits

0x4eea,	// (0x0003392d) main_clock2_pane_t3

0x4f0d,	// (0x00033950) main_clock2_pane_t4_ParamLimits

0x4f0d,	// (0x00033950) main_clock2_pane_t4

0xd657,	// (0x0003c09a) cell_clock2_toolbar_pane

0xd65f,	// (0x0003c0a2) cell_clock2_toolbar_pane_cp01

0xd65f,	// (0x0003c0a2) cell_clock2_toolbar_pane_cp02

0xd667,	// (0x0003c0aa) cell_clock2_toolbar_pane_cp03

0xd66f,	// (0x0003c0b2) list_clock2_pane

0xad53,	// (0x00039796) scroll_pane_cp10

0xd677,	// (0x0003c0ba) list_single_clock2_pane_ParamLimits

0xd677,	// (0x0003c0ba) list_single_clock2_pane

0xa50a,	// (0x00038f4d) list_highlight_pane_cp08

0xd684,	// (0x0003c0c7) list_single_clock2_pane_t1

0xd692,	// (0x0003c0d5) list_single_clock2_pane_t2

0x0001,

0xfa8f,	// (0x0003e4d2) list_single_clock2_pane_t

0x9bad,	// (0x000385f0) bg_button_pane_cp10

0xd6a0,	// (0x0003c0e3) cell_clock2_toolbar_pane_g1

0x0151,	// (0x0002eb94) aid_main_viewer_pane_g1_ParamLimits

0x0151,	// (0x0002eb94) aid_main_viewer_pane_g1

0x015f,	// (0x0002eba2) aid_main_viewer_pane_g2_ParamLimits

0x015f,	// (0x0002eba2) aid_main_viewer_pane_g2

0x3648,	// (0x0003208b) aid_main_viewer_pane_g3_ParamLimits

0x3648,	// (0x0003208b) aid_main_viewer_pane_g3

0x3657,	// (0x0003209a) aid_main_viewer_pane_g4_ParamLimits

0x3657,	// (0x0003209a) aid_main_viewer_pane_g4

0x0003,

0xf3e8,	// (0x0003de2b) aid_main_viewer_pane_g_ParamLimits

0xf3e8,	// (0x0003de2b) aid_main_viewer_pane_g

0x0193,	// (0x0002ebd6) main_calc_pane_ParamLimits

0x01b7,	// (0x0002ebfa) main_dialer2_pane_ParamLimits

0x12bc,	// (0x0002fcff) main_cam6_pane

0x12bc,	// (0x0002fcff) main_vid6_pane

0x4e17,	// (0x0003385a) listscroll_gen_pane_cp06_ParamLimits

0x4e17,	// (0x0003385a) listscroll_gen_pane_cp06

0x4f30,	// (0x00033973) main_clock2_pane_t5_ParamLimits

0x4f30,	// (0x00033973) main_clock2_pane_t5

0x4f8e,	// (0x000339d1) aid_call2_pane_cp10_ParamLimits

0x4fa0,	// (0x000339e3) aid_call_pane_cp10_ParamLimits

0xadc2,	// (0x00039805) popup_clock_analogue_window_cp10_g1_ParamLimits

0xadc2,	// (0x00039805) popup_clock_analogue_window_cp10_g2_ParamLimits

0x04dd,	// (0x0002ef20) popup_clock_analogue_window_cp10_g3_ParamLimits

0x04dd,	// (0x0002ef20) popup_clock_analogue_window_cp10_g4_ParamLimits

0xadc2,	// (0x00039805) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf71c,	// (0x0003e15f) popup_clock_analogue_window_cp10_g_ParamLimits

0x04f3,	// (0x0002ef36) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5528,	// (0x00033f6b) cell_dialer2_keypad_pane_g2_ParamLimits

0x5528,	// (0x00033f6b) cell_dialer2_keypad_pane_g2

0x0001,

0xf801,	// (0x0003e244) cell_dialer2_keypad_pane_g_ParamLimits

0xf801,	// (0x0003e244) cell_dialer2_keypad_pane_g

0x5544,	// (0x00033f87) cell_dialer2_keypad_pane_t1

0x5b0a,	// (0x0003454d) main_cset_text2_pane_ParamLimits

0x5b0a,	// (0x0003454d) main_cset_text2_pane

0xd3b3,	// (0x0003bdf6) area_vitu2_query_pane_g1_ParamLimits

0x6331,	// (0x00034d74) area_vitu2_query_pane_g2_ParamLimits

0xf9ac,	// (0x0003e3ef) area_vitu2_query_pane_g_ParamLimits

0xd437,	// (0x0003be7a) area_vitu2_query_pane_t7_ParamLimits

0xd437,	// (0x0003be7a) area_vitu2_query_pane_t7

0x639a,	// (0x00034ddd) bg_button_pane_cp018_ParamLimits

0x63a6,	// (0x00034de9) bg_button_pane_cp021_ParamLimits

0x63b2,	// (0x00034df5) bg_button_pane_cp022_ParamLimits

0x63c7,	// (0x00034e0a) bg_vkb2_func_pane_cp08_ParamLimits

0x639a,	// (0x00034ddd) bg_vkb2_func_pane_cp06_ParamLimits

0x63a6,	// (0x00034de9) bg_vkb2_func_pane_cp07_ParamLimits

0x63dd,	// (0x00034e20) input_focus_pane_cp09_ParamLimits

0x6906,	// (0x00035349) cam6_autofocus_pane_ParamLimits

0x6906,	// (0x00035349) cam6_autofocus_pane

0x110d,	// (0x0002fb50) cam6_image_uncrop_pane_ParamLimits

0x110d,	// (0x0002fb50) cam6_image_uncrop_pane

0x111d,	// (0x0002fb60) cam6_indi_pane_ParamLimits

0x111d,	// (0x0002fb60) cam6_indi_pane

0x1133,	// (0x0002fb76) cam6_mode_pane_ParamLimits

0x1133,	// (0x0002fb76) cam6_mode_pane

0x1145,	// (0x0002fb88) cam6_timer_pane_ParamLimits

0x1145,	// (0x0002fb88) cam6_timer_pane

0x1151,	// (0x0002fb94) cam6_zoom_pane_ParamLimits

0x1151,	// (0x0002fb94) cam6_zoom_pane

0x6914,	// (0x00035357) cam6_mode_pane_g1_ParamLimits

0x6914,	// (0x00035357) cam6_mode_pane_g1

0x6924,	// (0x00035367) cam6_mode_pane_g2_ParamLimits

0x6924,	// (0x00035367) cam6_mode_pane_g2

0x6934,	// (0x00035377) cam6_mode_pane_g3_ParamLimits

0x6934,	// (0x00035377) cam6_mode_pane_g3

0x6944,	// (0x00035387) cam6_mode_pane_g4_ParamLimits

0x6944,	// (0x00035387) cam6_mode_pane_g4

0x0003,

0xfa94,	// (0x0003e4d7) cam6_mode_pane_g_ParamLimits

0xfa94,	// (0x0003e4d7) cam6_mode_pane_g

0xd05d,	// (0x0003baa0) bg_tb_trans_pane_cp08_ParamLimits

0xd05d,	// (0x0003baa0) bg_tb_trans_pane_cp08

0xd6a8,	// (0x0003c0eb) cam6_battery_pane_ParamLimits

0xd6a8,	// (0x0003c0eb) cam6_battery_pane

0xd6be,	// (0x0003c101) cam6_indi_pane_g1_ParamLimits

0xd6be,	// (0x0003c101) cam6_indi_pane_g1

0xd6d0,	// (0x0003c113) cam6_indi_pane_g2_ParamLimits

0xd6d0,	// (0x0003c113) cam6_indi_pane_g2

0xd6e2,	// (0x0003c125) cam6_indi_pane_g3_ParamLimits

0xd6e2,	// (0x0003c125) cam6_indi_pane_g3

0x0002,

0xfa9d,	// (0x0003e4e0) cam6_indi_pane_g_ParamLimits

0xfa9d,	// (0x0003e4e0) cam6_indi_pane_g

0xd6f4,	// (0x0003c137) cam6_indi_pane_t1_ParamLimits

0xd6f4,	// (0x0003c137) cam6_indi_pane_t1

0x57de,	// (0x00034221) cam6_autofocus_pane_g1

0x57d6,	// (0x00034219) cam6_autofocus_pane_g2

0x57ee,	// (0x00034231) cam6_autofocus_pane_g3

0x57e6,	// (0x00034229) cam6_autofocus_pane_g4

0x0003,

0xfaa4,	// (0x0003e4e7) cam6_autofocus_pane_g

0xd71a,	// (0x0003c15d) cam6_timer_pane_g1

0xd722,	// (0x0003c165) cam6_timer_pane_t1

0xd730,	// (0x0003c173) cam6_zoom_cont_pane

0xd738,	// (0x0003c17b) cam6_zoom_pane_g1

0xd741,	// (0x0003c184) cam6_zoom_pane_g2

0x6954,	// (0x00035397) cam6_zoom_pane_g3

0x0002,

0xfaad,	// (0x0003e4f0) cam6_zoom_pane_g

0xa540,	// (0x00038f83) cam6_battery_pane_g1

0xa540,	// (0x00038f83) cam6_battery_pane_g2

0x0001,

0xf398,	// (0x0003dddb) cam6_battery_pane_g

0xd738,	// (0x0003c17b) cam6_zoom_cont_pane_g1

0xd741,	// (0x0003c184) cam6_zoom_cont_pane_g2

0xd74a,	// (0x0003c18d) cam6_zoom_cont_pane_g3

0x0002,

0xfab4,	// (0x0003e4f7) cam6_zoom_cont_pane_g

0x6972,	// (0x000353b5) cam6_mode_pane_cp_ParamLimits

0x6972,	// (0x000353b5) cam6_mode_pane_cp

0x6984,	// (0x000353c7) cam6_zoom_pane_cp_ParamLimits

0x6984,	// (0x000353c7) cam6_zoom_pane_cp

0x6992,	// (0x000353d5) vid6_image_uncrop_cif_pane_ParamLimits

0x6992,	// (0x000353d5) vid6_image_uncrop_cif_pane

0x69a2,	// (0x000353e5) vid6_image_uncrop_nhd_pane_ParamLimits

0x69a2,	// (0x000353e5) vid6_image_uncrop_nhd_pane

0x69b1,	// (0x000353f4) vid6_image_uncrop_vga_pane_ParamLimits

0x69b1,	// (0x000353f4) vid6_image_uncrop_vga_pane

0x69c0,	// (0x00035403) vid6_image_uncrop_wvga_pane_ParamLimits

0x69c0,	// (0x00035403) vid6_image_uncrop_wvga_pane

0x69cf,	// (0x00035412) vid6_indi_pane_ParamLimits

0x69cf,	// (0x00035412) vid6_indi_pane

0xd05d,	// (0x0003baa0) bg_tb_trans_pane_cp09_ParamLimits

0xd05d,	// (0x0003baa0) bg_tb_trans_pane_cp09

0xd762,	// (0x0003c1a5) cam6_battery_pane_cp_ParamLimits

0xd762,	// (0x0003c1a5) cam6_battery_pane_cp

0xd76e,	// (0x0003c1b1) vid6_indi_pane_g1_ParamLimits

0xd76e,	// (0x0003c1b1) vid6_indi_pane_g1

0xd780,	// (0x0003c1c3) vid6_indi_pane_g2_ParamLimits

0xd780,	// (0x0003c1c3) vid6_indi_pane_g2

0xd792,	// (0x0003c1d5) vid6_indi_pane_g3_ParamLimits

0xd792,	// (0x0003c1d5) vid6_indi_pane_g3

0xd7a9,	// (0x0003c1ec) vid6_indi_pane_g4_ParamLimits

0xd7a9,	// (0x0003c1ec) vid6_indi_pane_g4

0xd7c0,	// (0x0003c203) vid6_indi_pane_g5_ParamLimits

0xd7c0,	// (0x0003c203) vid6_indi_pane_g5

0x0004,

0xfabb,	// (0x0003e4fe) vid6_indi_pane_g_ParamLimits

0xfabb,	// (0x0003e4fe) vid6_indi_pane_g

0xd7da,	// (0x0003c21d) vid6_indi_pane_t1_ParamLimits

0xd7da,	// (0x0003c21d) vid6_indi_pane_t1

0xd7f0,	// (0x0003c233) vid6_indi_pane_t2_ParamLimits

0xd7f0,	// (0x0003c233) vid6_indi_pane_t2

0xd818,	// (0x0003c25b) vid6_indi_pane_t3_ParamLimits

0xd818,	// (0x0003c25b) vid6_indi_pane_t3

0xd840,	// (0x0003c283) vid6_indi_pane_t4_ParamLimits

0xd840,	// (0x0003c283) vid6_indi_pane_t4

0x0003,

0xfac6,	// (0x0003e509) vid6_indi_pane_t_ParamLimits

0xfac6,	// (0x0003e509) vid6_indi_pane_t

0xd864,	// (0x0003c2a7) wait_bar_pane_cp08

0x69e7,	// (0x0003542a) main_cset_text2_pane_t1_ParamLimits

0x69e7,	// (0x0003542a) main_cset_text2_pane_t1

0x695d,	// (0x000353a0) listscroll_gen_pane_cp06_t1_ParamLimits

0x695d,	// (0x000353a0) listscroll_gen_pane_cp06_t1

0x12bc,	// (0x0002fcff) main_cam6_set_pane

0xd095,	// (0x0003bad8) bg_tb_trans_pane_cp06_ParamLimits

0x570d,	// (0x00034150) cam4_indicators_pane_g1_ParamLimits

0x571e,	// (0x00034161) cam4_indicators_pane_g2_ParamLimits

0xf83e,	// (0x0003e281) cam4_indicators_pane_g_ParamLimits

0x5736,	// (0x00034179) cam4_indicators_pane_t1_ParamLimits

0x12a2,	// (0x0002fce5) bg_tb_trans_pane_cp07_ParamLimits

0x5764,	// (0x000341a7) vid4_indicators_pane_g1_ParamLimits

0x577a,	// (0x000341bd) vid4_indicators_pane_g2_ParamLimits

0x578e,	// (0x000341d1) vid4_indicators_pane_g3_ParamLimits

0x57a1,	// (0x000341e4) vid4_indicators_pane_g4_ParamLimits

0xf850,	// (0x0003e293) vid4_indicators_pane_g_ParamLimits

0x57bf,	// (0x00034202) vid4_indicators_pane_t1_ParamLimits

0x6526,	// (0x00034f69) vid4_progress_pane_g1_ParamLimits

0x6536,	// (0x00034f79) vid4_progress_pane_g2_ParamLimits

0x10ce,	// (0x0002fb11) vid4_progress_pane_g3_ParamLimits

0x6546,	// (0x00034f89) vid4_progress_pane_g4_ParamLimits

0xf9f7,	// (0x0003e43a) vid4_progress_pane_g_ParamLimits

0x10e0,	// (0x0002fb23) vid4_progress_pane_t1_ParamLimits

0x6564,	// (0x00034fa7) vid4_progress_pane_t2_ParamLimits

0x657d,	// (0x00034fc0) vid4_progress_pane_t3_ParamLimits

0xfa02,	// (0x0003e445) vid4_progress_pane_t_ParamLimits

0x10fa,	// (0x0002fb3d) wait_bar_pane_cp07_ParamLimits

0x6a08,	// (0x0003544b) main_cam6_set_pane_g2_ParamLimits

0x6a08,	// (0x0003544b) main_cam6_set_pane_g2

0x6a2e,	// (0x00035471) main_cset6_listscroll_pane_ParamLimits

0x6a2e,	// (0x00035471) main_cset6_listscroll_pane

0x6a4c,	// (0x0003548f) main_cset6_slider_pane_ParamLimits

0x6a4c,	// (0x0003548f) main_cset6_slider_pane

0x6a62,	// (0x000354a5) main_cset6_text2_pane_ParamLimits

0x6a62,	// (0x000354a5) main_cset6_text2_pane

0xd873,	// (0x0003c2b6) main_cset6_text_pane

0xd87b,	// (0x0003c2be) main_cset_list_pane_copy1_ParamLimits

0xd87b,	// (0x0003c2be) main_cset_list_pane_copy1

0xd88b,	// (0x0003c2ce) scroll_pane_cp028_copy1

0x6a70,	// (0x000354b3) cset_list_set_pane_copy1

0x6a84,	// (0x000354c7) aid_position_infowindow_above_copy1

0x6a8c,	// (0x000354cf) aid_position_infowindow_below_copy1

0x6a94,	// (0x000354d7) cset_list_set_pane_g1_copy1

0x6a9c,	// (0x000354df) cset_list_set_pane_g3_copy1_ParamLimits

0x6a9c,	// (0x000354df) cset_list_set_pane_g3_copy1

0x6aab,	// (0x000354ee) cset_list_set_pane_t1_copy1_ParamLimits

0x6aab,	// (0x000354ee) cset_list_set_pane_t1_copy1

0xa27c,	// (0x00038cbf) list_highlight_pane_cp021_copy1_ParamLimits

0xa27c,	// (0x00038cbf) list_highlight_pane_cp021_copy1

0xd894,	// (0x0003c2d7) cset6_slider_pane_ParamLimits

0xd894,	// (0x0003c2d7) cset6_slider_pane

0xd8c0,	// (0x0003c303) main_cset6_slider_pane_g1_ParamLimits

0xd8c0,	// (0x0003c303) main_cset6_slider_pane_g1

0x6ac0,	// (0x00035503) main_cset6_slider_pane_g2_ParamLimits

0x6ac0,	// (0x00035503) main_cset6_slider_pane_g2

0xd8e8,	// (0x0003c32b) main_cset6_slider_pane_g3_ParamLimits

0xd8e8,	// (0x0003c32b) main_cset6_slider_pane_g3

0x6ae8,	// (0x0003552b) main_cset6_slider_pane_g4_ParamLimits

0x6ae8,	// (0x0003552b) main_cset6_slider_pane_g4

0x6af4,	// (0x00035537) main_cset6_slider_pane_g5_ParamLimits

0x6af4,	// (0x00035537) main_cset6_slider_pane_g5

0xd039,	// (0x0003ba7c) main_cset6_slider_pane_g7_ParamLimits

0xd039,	// (0x0003ba7c) main_cset6_slider_pane_g7

0xd045,	// (0x0003ba88) main_cset6_slider_pane_g8_ParamLimits

0xd045,	// (0x0003ba88) main_cset6_slider_pane_g8

0x5bb2,	// (0x000345f5) main_cset6_slider_pane_g9_ParamLimits

0x5bb2,	// (0x000345f5) main_cset6_slider_pane_g9

0x5bbe,	// (0x00034601) main_cset6_slider_pane_g10_ParamLimits

0x5bbe,	// (0x00034601) main_cset6_slider_pane_g10

0x5bca,	// (0x0003460d) main_cset6_slider_pane_g11_ParamLimits

0x5bca,	// (0x0003460d) main_cset6_slider_pane_g11

0x5bd6,	// (0x00034619) main_cset6_slider_pane_g12_ParamLimits

0x5bd6,	// (0x00034619) main_cset6_slider_pane_g12

0x5be2,	// (0x00034625) main_cset6_slider_pane_g13_ParamLimits

0x5be2,	// (0x00034625) main_cset6_slider_pane_g13

0x5bee,	// (0x00034631) main_cset6_slider_pane_g14_ParamLimits

0x5bee,	// (0x00034631) main_cset6_slider_pane_g14

0x6b02,	// (0x00035545) main_cset6_slider_pane_g15_ParamLimits

0x6b02,	// (0x00035545) main_cset6_slider_pane_g15

0x5c12,	// (0x00034655) main_cset6_slider_pane_g16_ParamLimits

0x5c12,	// (0x00034655) main_cset6_slider_pane_g16

0x5c20,	// (0x00034663) main_cset6_slider_pane_g17_ParamLimits

0x5c20,	// (0x00034663) main_cset6_slider_pane_g17

0x0011,

0xfacf,	// (0x0003e512) main_cset6_slider_pane_g_ParamLimits

0xfacf,	// (0x0003e512) main_cset6_slider_pane_g

0xd8f4,	// (0x0003c337) main_cset6_slider_pane_t1_ParamLimits

0xd8f4,	// (0x0003c337) main_cset6_slider_pane_t1

0x6b32,	// (0x00035575) main_cset6_slider_pane_t2_ParamLimits

0x6b32,	// (0x00035575) main_cset6_slider_pane_t2

0x6b5d,	// (0x000355a0) main_cset6_slider_pane_t3_ParamLimits

0x6b5d,	// (0x000355a0) main_cset6_slider_pane_t3

0x6b88,	// (0x000355cb) main_cset6_slider_pane_t4_ParamLimits

0x6b88,	// (0x000355cb) main_cset6_slider_pane_t4

0x6bb3,	// (0x000355f6) main_cset6_slider_pane_t5_ParamLimits

0x6bb3,	// (0x000355f6) main_cset6_slider_pane_t5

0xd935,	// (0x0003c378) main_cset6_slider_pane_t7_ParamLimits

0xd935,	// (0x0003c378) main_cset6_slider_pane_t7

0x6be0,	// (0x00035623) main_cset6_slider_pane_t8_ParamLimits

0x6be0,	// (0x00035623) main_cset6_slider_pane_t8

0x6c04,	// (0x00035647) main_cset6_slider_pane_t9_ParamLimits

0x6c04,	// (0x00035647) main_cset6_slider_pane_t9

0x6c28,	// (0x0003566b) main_cset6_slider_pane_t10_ParamLimits

0x6c28,	// (0x0003566b) main_cset6_slider_pane_t10

0x6c4c,	// (0x0003568f) main_cset6_slider_pane_t11_ParamLimits

0x6c4c,	// (0x0003568f) main_cset6_slider_pane_t11

0xd96b,	// (0x0003c3ae) main_cset6_slider_pane_t14_ParamLimits

0xd96b,	// (0x0003c3ae) main_cset6_slider_pane_t14

0xd9a4,	// (0x0003c3e7) main_cset6_slider_pane_t15_ParamLimits

0xd9a4,	// (0x0003c3e7) main_cset6_slider_pane_t15

0x000b,

0xfaf4,	// (0x0003e537) main_cset6_slider_pane_t_ParamLimits

0xfaf4,	// (0x0003e537) main_cset6_slider_pane_t

0xd9dd,	// (0x0003c420) cset_slider_pane_g1_copy1

0xd9e6,	// (0x0003c429) cset_slider_pane_g2_copy1

0xd9ef,	// (0x0003c432) cset_slider_pane_g3_copy1

0x9bad,	// (0x000385f0) bg_popup_sub_pane_cp011_copy1

0xda01,	// (0x0003c444) main_cset_text_pane_g1_copy1

0xd1cf,	// (0x0003bc12) main_cset_text_pane_t1_copy1

0xd1dd,	// (0x0003bc20) main_cset_text_pane_t2_copy1

0xd1eb,	// (0x0003bc2e) main_cset_text_pane_t3_copy1

0xd1f9,	// (0x0003bc3c) main_cset_text_pane_t4_copy1

0xd207,	// (0x0003bc4a) main_cset_text_pane_t5_copy1

0xda09,	// (0x0003c44c) main_cset_text_pane_t6_copy1

0xda17,	// (0x0003c45a) main_cset_text_pane_t7_copy1

0x69e7,	// (0x0003542a) main_cset_text2_pane_t1_copy1

0x12a2,	// (0x0002fce5) main_ncimui_pane

0x0445,	// (0x0002ee88) popup_query_ncimui_window_ParamLimits

0x0445,	// (0x0002ee88) popup_query_ncimui_window

0xc888,	// (0x0003b2cb) field_cale_ev2_pane_g4_ParamLimits

0xc888,	// (0x0003b2cb) field_cale_ev2_pane_g4

0x5285,	// (0x00033cc8) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5285,	// (0x00033cc8) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7d8,	// (0x0003e21b) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7d8,	// (0x0003e21b) cell_video_dialer_keypad_pane_g

0x529d,	// (0x00033ce0) cell_video_dialer_keypad_pane_t1

0x9bad,	// (0x000385f0) bg_popup_window_pane_cp012

0xc14e,	// (0x0003ab91) heading_pane_cp06

0xda43,	// (0x0003c486) ncim_query_content_pane

0x9bad,	// (0x000385f0) bg_popup_heading_pane_cp01

0xda4b,	// (0x0003c48e) ncim_heading_pane_t1

0xda59,	// (0x0003c49c) ncim_indicator_popup_pane

0xda6b,	// (0x0003c4ae) ncim_query_button_pane

0xda81,	// (0x0003c4c4) ncim_query_content_pane_t1

0xda93,	// (0x0003c4d6) ncim_query_content_pane_t2

0x0005,

0xfb38,	// (0x0003e57b) ncim_query_content_pane_t

0xdacd,	// (0x0003c510) ncim_query_list_pane

0xdadf,	// (0x0003c522) ncim_query_popup_pane

0xda59,	// (0x0003c49c) ncim_indicator_popup_pane_ParamLimits

0x6db8,	// (0x000357fb) ncim_query_content_pane_g1_ParamLimits

0x6db8,	// (0x000357fb) ncim_query_content_pane_g1

0xda81,	// (0x0003c4c4) ncim_query_content_pane_t1_ParamLimits

0xda93,	// (0x0003c4d6) ncim_query_content_pane_t2_ParamLimits

0x6dc4,	// (0x00035807) ncim_query_content_pane_t3_ParamLimits

0x6dc4,	// (0x00035807) ncim_query_content_pane_t3

0x6dec,	// (0x0003582f) ncim_query_content_pane_t4_ParamLimits

0x6dec,	// (0x0003582f) ncim_query_content_pane_t4

0x6e14,	// (0x00035857) ncim_query_content_pane_t5_ParamLimits

0x6e14,	// (0x00035857) ncim_query_content_pane_t5

0xdaa5,	// (0x0003c4e8) ncim_query_content_pane_t6_ParamLimits

0xdaa5,	// (0x0003c4e8) ncim_query_content_pane_t6

0xfb38,	// (0x0003e57b) ncim_query_content_pane_t_ParamLimits

0xdacd,	// (0x0003c510) ncim_query_list_pane_ParamLimits

0xdadf,	// (0x0003c522) ncim_query_popup_pane_ParamLimits

0xdaf3,	// (0x0003c536) wait_bar_pane_cp04

0x9bad,	// (0x000385f0) input_focus_pane_cp011

0xdafb,	// (0x0003c53e) ncim_query_popup_pane_t1

0xdb09,	// (0x0003c54c) ncim_list_query_list_pane_ParamLimits

0xdb09,	// (0x0003c54c) ncim_list_query_list_pane

0x9bad,	// (0x000385f0) bg_button_pane_cp027

0xdb1c,	// (0x0003c55f) ncim_query_button_pane_g1

0x9bad,	// (0x000385f0) list_highlight_pane_cp012

0xdb26,	// (0x0003c569) ncim_list_query_list_pane_g1

0xdb2e,	// (0x0003c571) ncim_list_query_list_pane_t1

0x572a,	// (0x0003416d) cam4_indicators_pane_g3_ParamLimits

0x572a,	// (0x0003416d) cam4_indicators_pane_g3

0x57ad,	// (0x000341f0) vid4_indicators_pane_g5_ParamLimits

0x57ad,	// (0x000341f0) vid4_indicators_pane_g5

0x6555,	// (0x00034f98) vid4_progress_pane_g5_ParamLimits

0x6555,	// (0x00034f98) vid4_progress_pane_g5

0x6ca3,	// (0x000356e6) main_ncimui_pane_g1

0x6d0c,	// (0x0003574f) ncimui_group_query_pane_ParamLimits

0x6d0c,	// (0x0003574f) ncimui_group_query_pane

0x6d54,	// (0x00035797) ncimui_list_pane_ParamLimits

0x6d54,	// (0x00035797) ncimui_list_pane

0x6d7b,	// (0x000357be) ncimui_text_pane_ParamLimits

0x6d7b,	// (0x000357be) ncimui_text_pane

0x6e3c,	// (0x0003587f) ncimui_text_pane_t1_ParamLimits

0x6e3c,	// (0x0003587f) ncimui_text_pane_t1

0xdb3c,	// (0x0003c57f) ncimui_list_single_graphic_pane_ParamLimits

0xdb3c,	// (0x0003c57f) ncimui_list_single_graphic_pane

0x6e5a,	// (0x0003589d) ncimui_query_pane_ParamLimits

0x6e5a,	// (0x0003589d) ncimui_query_pane

0x9bad,	// (0x000385f0) list_highlight_pane_cp013

0xdb4c,	// (0x0003c58f) ncim_list_query_list_pane_t1_copy1

0xdb26,	// (0x0003c569) ncim_list_single_graphic_pane_g1

0x6e6d,	// (0x000358b0) ncim_query_button_pane_cp01

0x6e79,	// (0x000358bc) ncim_query_entry_pane_ParamLimits

0x6e79,	// (0x000358bc) ncim_query_entry_pane

0x6e8c,	// (0x000358cf) ncimui_query_pane_g1

0x6e98,	// (0x000358db) ncimui_query_pane_t1_ParamLimits

0x6e98,	// (0x000358db) ncimui_query_pane_t1

0xa27c,	// (0x00038cbf) input_focus_pane_cp012

0xdb5a,	// (0x0003c59d) ncim_query_entry_pane_t1

0xa355,	// (0x00038d98) main_im_pane_ParamLimits

0x12a2,	// (0x0002fce5) main_mobtv_pane_ParamLimits

0x12a2,	// (0x0002fce5) main_mobtv_pane

0x6b1a,	// (0x0003555d) main_cset6_slider_pane_g18_ParamLimits

0x6b1a,	// (0x0003555d) main_cset6_slider_pane_g18

0x6b26,	// (0x00035569) main_cset6_slider_pane_g19_ParamLimits

0x6b26,	// (0x00035569) main_cset6_slider_pane_g19

0xa2ff,	// (0x00038d42) bg_main_mobtv_pane_ParamLimits

0xa2ff,	// (0x00038d42) bg_main_mobtv_pane

0x6eb1,	// (0x000358f4) main_mobtv_info_pane

0x6ebc,	// (0x000358ff) main_mobtv_loading_pane_ParamLimits

0x6ebc,	// (0x000358ff) main_mobtv_loading_pane

0xdb6c,	// (0x0003c5af) main_mobtv_pg_channel_list_pane

0xdb76,	// (0x0003c5b9) main_mobtv_pg_hdr_pane

0x6ec9,	// (0x0003590c) main_mobtv_programe_curr_pane_ParamLimits

0x6ec9,	// (0x0003590c) main_mobtv_programe_curr_pane

0x6ed6,	// (0x00035919) main_mobtv_programe_next_pane_ParamLimits

0x6ed6,	// (0x00035919) main_mobtv_programe_next_pane

0xdb7f,	// (0x0003c5c2) popup_mobtv_noti_window

0xa540,	// (0x00038f83) main_tv_pg_hdr_pane_g1

0xdb89,	// (0x0003c5cc) main_tv_pg_hdr_pane_g2

0xdb91,	// (0x0003c5d4) main_tv_pg_hdr_pane_g3

0xdb99,	// (0x0003c5dc) main_tv_pg_hdr_pane_g4

0xdba1,	// (0x0003c5e4) main_tv_pg_hdr_pane_g5

0xdbab,	// (0x0003c5ee) main_tv_pg_hdr_pane_g6

0xdbb5,	// (0x0003c5f8) main_tv_pg_hdr_pane_g7

0xdbbf,	// (0x0003c602) main_tv_pg_hdr_pane_g8

0xdbc9,	// (0x0003c60c) main_tv_pg_hdr_pane_g9

0xdbd3,	// (0x0003c616) main_tv_pg_hdr_pane_g10

0xdbdd,	// (0x0003c620) main_tv_pg_hdr_pane_g11

0x000a,

0xfb45,	// (0x0003e588) main_tv_pg_hdr_pane_g

0xdbe7,	// (0x0003c62a) main_tv_pg_hdr_pane_t1

0xdbf5,	// (0x0003c638) main_tv_pg_hdr_pane_t2

0xdc03,	// (0x0003c646) main_tv_pg_hdr_pane_t3

0xdc13,	// (0x0003c656) main_tv_pg_hdr_pane_t4

0xdc23,	// (0x0003c666) main_tv_pg_hdr_pane_t5

0x0004,

0xfb5c,	// (0x0003e59f) main_tv_pg_hdr_pane_t

0xdc33,	// (0x0003c676) single_mobtv_pg_channel_pane_ParamLimits

0xdc33,	// (0x0003c676) single_mobtv_pg_channel_pane

0xdc45,	// (0x0003c688) single_mobtv_pg_channel_table_pane

0xdc4e,	// (0x0003c691) single_mobtv_pg_channel_thumb_pane

0xdc57,	// (0x0003c69a) single_tv_pg_channel_pane_g1

0xdc60,	// (0x0003c6a3) single_tv_pg_channel_pane_g2

0x0001,

0xfb67,	// (0x0003e5aa) single_tv_pg_channel_pane_g

0xa2e3,	// (0x00038d26) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xa2e3,	// (0x00038d26) bg_single_mobtv_pg_channel_thumb_pane

0xdc69,	// (0x0003c6ac) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdc69,	// (0x0003c6ac) single_mobtv_pg_channel_thumb_pane_g1

0xdc77,	// (0x0003c6ba) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdc77,	// (0x0003c6ba) single_mobtv_pg_channel_thumb_pane_g2

0xdc83,	// (0x0003c6c6) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdc83,	// (0x0003c6c6) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb6c,	// (0x0003e5af) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb6c,	// (0x0003e5af) single_mobtv_pg_channel_thumb_pane_g

0xdc8f,	// (0x0003c6d2) single_mobtv_pg_channel_thumb_pane_t1

0xdc9d,	// (0x0003c6e0) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb73,	// (0x0003e5b6) single_mobtv_pg_channel_thumb_pane_t

0xa540,	// (0x00038f83) bg_single_mobtv_pg_channel_table_pane_g1

0xa540,	// (0x00038f83) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf398,	// (0x0003dddb) bg_single_mobtv_pg_channel_table_pane_g

0xdcab,	// (0x0003c6ee) single_mobtv_pg_channel_table_pane_t1

0xdcb9,	// (0x0003c6fc) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb78,	// (0x0003e5bb) single_mobtv_pg_channel_table_pane_t

0x6eeb,	// (0x0003592e) main_mobtv_info_pane_g1_ParamLimits

0x6eeb,	// (0x0003592e) main_mobtv_info_pane_g1

0x6f09,	// (0x0003594c) main_mobtv_info_pane_t1_ParamLimits

0x6f09,	// (0x0003594c) main_mobtv_info_pane_t1

0x6f81,	// (0x000359c4) main_mobtv_info_pane_t2_ParamLimits

0x6f81,	// (0x000359c4) main_mobtv_info_pane_t2

0x0002,

0xfb82,	// (0x0003e5c5) main_mobtv_info_pane_t_ParamLimits

0xfb82,	// (0x0003e5c5) main_mobtv_info_pane_t

0x7012,	// (0x00035a55) wait_bar_pane_cp05

0x7024,	// (0x00035a67) main_mobtv_loading_pane_g1_ParamLimits

0x7024,	// (0x00035a67) main_mobtv_loading_pane_g1

0x7035,	// (0x00035a78) main_mobtv_loading_pane_g2_ParamLimits

0x7035,	// (0x00035a78) main_mobtv_loading_pane_g2

0x7041,	// (0x00035a84) main_mobtv_loading_pane_g3_ParamLimits

0x7041,	// (0x00035a84) main_mobtv_loading_pane_g3

0x0002,

0xfb89,	// (0x0003e5cc) main_mobtv_loading_pane_g_ParamLimits

0xfb89,	// (0x0003e5cc) main_mobtv_loading_pane_g

0xdcc7,	// (0x0003c70a) main_mobtv_loading_pane_t1_ParamLimits

0xdcc7,	// (0x0003c70a) main_mobtv_loading_pane_t1

0xdcdf,	// (0x0003c722) main_mobtv_loading_pane_t2_ParamLimits

0xdcdf,	// (0x0003c722) main_mobtv_loading_pane_t2

0x0001,

0xfb90,	// (0x0003e5d3) main_mobtv_loading_pane_t_ParamLimits

0xfb90,	// (0x0003e5d3) main_mobtv_loading_pane_t

0x7054,	// (0x00035a97) wait_bar_pane_cp06_ParamLimits

0x7054,	// (0x00035a97) wait_bar_pane_cp06

0xdd03,	// (0x0003c746) main_mobtv_programe_curr_pane_t1

0xdd11,	// (0x0003c754) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb95,	// (0x0003e5d8) main_mobtv_programe_curr_pane_t

0xdd1f,	// (0x0003c762) main_mobtv_programe_next_pane_t1

0xdd2d,	// (0x0003c770) main_mobtv_programe_next_pane_t2

0xdd3b,	// (0x0003c77e) main_mobtv_programe_next_pane_t3

0x0002,

0xfb9a,	// (0x0003e5dd) main_mobtv_programe_next_pane_t

0x9bad,	// (0x000385f0) bg_popup_mobtv_noti_window_pane

0xdd49,	// (0x0003c78c) popup_mobtv_noti_window_g1

0xdd51,	// (0x0003c794) popup_mobtv_noti_window_t1

0xdd5f,	// (0x0003c7a2) popup_mobtv_noti_window_t2

0x0001,

0xfba1,	// (0x0003e5e4) popup_mobtv_noti_window_t

0xa540,	// (0x00038f83) bg_popup_mobtv_noti_window_pane_g1

0x12bc,	// (0x0002fcff) sc_clock_pane

0x12bc,	// (0x0002fcff) main_fs_bigclock_pane

0x6799,	// (0x000351dc) blid2_tripm_pane_t4_ParamLimits

0x6799,	// (0x000351dc) blid2_tripm_pane_t4

0x7063,	// (0x00035aa6) sc_clock_pane_g1_ParamLimits

0x7063,	// (0x00035aa6) sc_clock_pane_g1

0x7075,	// (0x00035ab8) sc_clock_pane_t1_ParamLimits

0x7075,	// (0x00035ab8) sc_clock_pane_t1

0x7099,	// (0x00035adc) sc_clock_pane_t2_ParamLimits

0x7099,	// (0x00035adc) sc_clock_pane_t2

0x70b1,	// (0x00035af4) sc_clock_pane_t3_ParamLimits

0x70b1,	// (0x00035af4) sc_clock_pane_t3

0x0004,

0xfba6,	// (0x0003e5e9) sc_clock_pane_t_ParamLimits

0xfba6,	// (0x0003e5e9) sc_clock_pane_t

0x806a,	// (0x00036aad) main_fs_bigclock_indicator_pane_ParamLimits

0x806a,	// (0x00036aad) main_fs_bigclock_indicator_pane

0x7177,	// (0x00035bba) main_fs_bigclock_pane_g1_ParamLimits

0x7177,	// (0x00035bba) main_fs_bigclock_pane_g1

0x8076,	// (0x00036ab9) main_fs_bigclock_pane_t1_ParamLimits

0x8076,	// (0x00036ab9) main_fs_bigclock_pane_t1

0x8088,	// (0x00036acb) main_fs_bigclock_pane_t2_ParamLimits

0x8088,	// (0x00036acb) main_fs_bigclock_pane_t2

0x809c,	// (0x00036adf) main_fs_bigclock_pane_t3_ParamLimits

0x809c,	// (0x00036adf) main_fs_bigclock_pane_t3

0x0002,

0xfd37,	// (0x0003e77a) main_fs_bigclock_pane_t_ParamLimits

0xfd37,	// (0x0003e77a) main_fs_bigclock_pane_t

0xe720,	// (0x0003d163) main_fs_bigclock_indicator_pane_g1

0xda73,	// (0x0003c4b6) ncim_query_content_pane_g2_ParamLimits

0xda73,	// (0x0003c4b6) ncim_query_content_pane_g2

0x0001,

0xfb33,	// (0x0003e576) ncim_query_content_pane_g_ParamLimits

0xfb33,	// (0x0003e576) ncim_query_content_pane_g

0x70c8,	// (0x00035b0b) sc_clock_pane_t4_ParamLimits

0x70c8,	// (0x00035b0b) sc_clock_pane_t4

0x12a2,	// (0x0002fce5) main_radioblah_pane

0x5689,	// (0x000340cc) cell_call4_button_pane_t1_copy1_ParamLimits

0x5689,	// (0x000340cc) cell_call4_button_pane_t1_copy1

0x6cbb,	// (0x000356fe) main_ncimui_pane_t1_ParamLimits

0x6cbb,	// (0x000356fe) main_ncimui_pane_t1

0x6cd5,	// (0x00035718) main_ncimui_pane_t2_ParamLimits

0x6cd5,	// (0x00035718) main_ncimui_pane_t2

0x0002,

0xfb2c,	// (0x0003e56f) main_ncimui_pane_t_ParamLimits

0xfb2c,	// (0x0003e56f) main_ncimui_pane_t

0xdd6d,	// (0x0003c7b0) main_radioblah_anim_pane_ParamLimits

0xdd6d,	// (0x0003c7b0) main_radioblah_anim_pane

0xdd7e,	// (0x0003c7c1) main_radioblah_info_pane_ParamLimits

0xdd7e,	// (0x0003c7c1) main_radioblah_info_pane

0xdd92,	// (0x0003c7d5) main_radioblah_pane_t1_ParamLimits

0xdd92,	// (0x0003c7d5) main_radioblah_pane_t1

0xddae,	// (0x0003c7f1) main_radioblah_pane_t2_ParamLimits

0xddae,	// (0x0003c7f1) main_radioblah_pane_t2

0x0003,

0xfbc7,	// (0x0003e60a) main_radioblah_pane_t_ParamLimits

0xfbc7,	// (0x0003e60a) main_radioblah_pane_t

0x7320,	// (0x00035d63) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7320,	// (0x00035d63) main_radioblah_rocker_ctrl_pane

0xddf6,	// (0x0003c839) main_radioblah_info_pane_t1_ParamLimits

0xddf6,	// (0x0003c839) main_radioblah_info_pane_t1

0x7378,	// (0x00035dbb) main_radioblah_info_pane_t2_ParamLimits

0x7378,	// (0x00035dbb) main_radioblah_info_pane_t2

0x0003,

0xfbd0,	// (0x0003e613) main_radioblah_info_pane_t_ParamLimits

0xfbd0,	// (0x0003e613) main_radioblah_info_pane_t

0xa540,	// (0x00038f83) main_radioblah_rocker_ctrl_pane_g1

0x7428,	// (0x00035e6b) main_radioblah_rocker_ctrl_pane_g2

0x7430,	// (0x00035e73) main_radioblah_rocker_ctrl_pane_g3

0x7438,	// (0x00035e7b) main_radioblah_rocker_ctrl_pane_g4

0x7440,	// (0x00035e83) main_radioblah_rocker_ctrl_pane_g5

0x7448,	// (0x00035e8b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbd9,	// (0x0003e61c) main_radioblah_rocker_ctrl_pane_g

0x69e7,	// (0x0003542a) main_cset_text2_pane_t1_copy1_ParamLimits

0x56e7,	// (0x0003412a) cam4_image_uncrop_qvga_pane

0x5750,	// (0x00034193) vid4_image_uncrop_qcif_pane

0x6906,	// (0x00035349) cam6_image_uncrop_qvga_pane_ParamLimits

0x6906,	// (0x00035349) cam6_image_uncrop_qvga_pane

0xd752,	// (0x0003c195) vid6_image_uncrop_qcif_pane_ParamLimits

0xd752,	// (0x0003c195) vid6_image_uncrop_qcif_pane

0x9bad,	// (0x000385f0) bg_popup_preview_window_pane_cp03

0xda25,	// (0x0003c468) list_cset_text2_pane

0xda2d,	// (0x0003c470) main_cset6_text2_pane_g1

0xda35,	// (0x0003c478) main_cset6_text2_pane_t1

0xde30,	// (0x0003c873) list_cset_text2_pane_t1_ParamLimits

0xde30,	// (0x0003c873) list_cset_text2_pane_t1

0x12a2,	// (0x0002fce5) main_radioblah_pane_ParamLimits

0x6ffe,	// (0x00035a41) main_mobtv_info_pane_t3_ParamLimits

0x6ffe,	// (0x00035a41) main_mobtv_info_pane_t3

0x730e,	// (0x00035d51) main_radioblah_pane_g1

0x7348,	// (0x00035d8b) main_radioblah_info_pane_g1

0x73cd,	// (0x00035e10) main_radioblah_info_pane_t3_ParamLimits

0x73cd,	// (0x00035e10) main_radioblah_info_pane_t3

0x2cf2,	// (0x00031735) highlight_cell_cale_month_pane_ParamLimits

0x2cf2,	// (0x00031735) highlight_cell_cale_month_pane

0x12bc,	// (0x0002fcff) main_phob_fisheye_pane

0xc8fd,	// (0x0003b340) scroll_pane_cp0031_ParamLimits

0xc8fd,	// (0x0003b340) scroll_pane_cp0031

0xd864,	// (0x0003c2a7) wait_bar_pane_cp08_ParamLimits

0x6a70,	// (0x000354b3) cset_list_set_pane_copy1_ParamLimits

0xde4a,	// (0x0003c88d) highlight_cell_cale_month_pane_g1

0x7450,	// (0x00035e93) highlight_cell_cale_month_pane_t1

0xd4a3,	// (0x0003bee6) list_gen_pane_cp01

0xd024,	// (0x0003ba67) scroll_pane_01

0x745e,	// (0x00035ea1) list_single_double_fisheye_pane

0x7467,	// (0x00035eaa) list_double_fisheye_pane_g1_ParamLimits

0x7467,	// (0x00035eaa) list_double_fisheye_pane_g1

0x7473,	// (0x00035eb6) list_double_fisheye_pane_g2_ParamLimits

0x7473,	// (0x00035eb6) list_double_fisheye_pane_g2

0x7487,	// (0x00035eca) list_double_fisheye_pane_g3_ParamLimits

0x7487,	// (0x00035eca) list_double_fisheye_pane_g3

0x0004,

0xfbe6,	// (0x0003e629) list_double_fisheye_pane_g_ParamLimits

0xfbe6,	// (0x0003e629) list_double_fisheye_pane_g

0x74b0,	// (0x00035ef3) list_double_fisheye_pane_t1_ParamLimits

0x74b0,	// (0x00035ef3) list_double_fisheye_pane_t1

0x74cb,	// (0x00035f0e) list_double_fisheye_pane_t2_ParamLimits

0x74cb,	// (0x00035f0e) list_double_fisheye_pane_t2

0x0001,

0xfbf1,	// (0x0003e634) list_double_fisheye_pane_t_ParamLimits

0xfbf1,	// (0x0003e634) list_double_fisheye_pane_t

0x12bc,	// (0x0002fcff) main_call5_pane

0x70f3,	// (0x00035b36) sc_swipe_pane_ParamLimits

0x70f3,	// (0x00035b36) sc_swipe_pane

0x7500,	// (0x00035f43) call5_image_pane_ParamLimits

0x7500,	// (0x00035f43) call5_image_pane

0x751d,	// (0x00035f60) call5_swipe_1_pane_ParamLimits

0x751d,	// (0x00035f60) call5_swipe_1_pane

0x7530,	// (0x00035f73) call5_swipe_2_pane_ParamLimits

0x7530,	// (0x00035f73) call5_swipe_2_pane

0x755b,	// (0x00035f9e) popup_call5_audio_first_window_ParamLimits

0x755b,	// (0x00035f9e) popup_call5_audio_first_window

0xa2e3,	// (0x00038d26) call5_swipe_1_pane_g1_ParamLimits

0xa2e3,	// (0x00038d26) call5_swipe_1_pane_g1

0xde52,	// (0x0003c895) call5_swipe_1_pane_g2_ParamLimits

0xde52,	// (0x0003c895) call5_swipe_1_pane_g2

0x0001,

0xfbf6,	// (0x0003e639) call5_swipe_1_pane_g_ParamLimits

0xfbf6,	// (0x0003e639) call5_swipe_1_pane_g

0xde5e,	// (0x0003c8a1) call5_swipe_1_pane_t1_ParamLimits

0xde5e,	// (0x0003c8a1) call5_swipe_1_pane_t1

0xa2e3,	// (0x00038d26) call5_swipe_2_pane_g1_ParamLimits

0xa2e3,	// (0x00038d26) call5_swipe_2_pane_g1

0xde73,	// (0x0003c8b6) call5_swipe_2_pane_g2_ParamLimits

0xde73,	// (0x0003c8b6) call5_swipe_2_pane_g2

0x0001,

0xfbfb,	// (0x0003e63e) call5_swipe_2_pane_g_ParamLimits

0xfbfb,	// (0x0003e63e) call5_swipe_2_pane_g

0xde7f,	// (0x0003c8c2) call5_swipe_2_pane_t1_ParamLimits

0xde7f,	// (0x0003c8c2) call5_swipe_2_pane_t1

0xde94,	// (0x0003c8d7) sc_swipe_pane_g1_ParamLimits

0xde94,	// (0x0003c8d7) sc_swipe_pane_g1

0xdea1,	// (0x0003c8e4) sc_swipe_pane_g2_ParamLimits

0xdea1,	// (0x0003c8e4) sc_swipe_pane_g2

0x0001,

0xfc00,	// (0x0003e643) sc_swipe_pane_g_ParamLimits

0xfc00,	// (0x0003e643) sc_swipe_pane_g

0xdead,	// (0x0003c8f0) sc_swipe_pane_t1_ParamLimits

0xdead,	// (0x0003c8f0) sc_swipe_pane_t1

0x12bc,	// (0x0002fcff) main_cmail_launcher_pane

0x7570,	// (0x00035fb3) aid_size_cell_cmail_l_ParamLimits

0x7570,	// (0x00035fb3) aid_size_cell_cmail_l

0x7585,	// (0x00035fc8) grid_cmail_l_pane_ParamLimits

0x7585,	// (0x00035fc8) grid_cmail_l_pane

0x759f,	// (0x00035fe2) cell_cmail_l_pane_ParamLimits

0x759f,	// (0x00035fe2) cell_cmail_l_pane

0x75c0,	// (0x00036003) cell_cmail_l_pane_g1_ParamLimits

0x75c0,	// (0x00036003) cell_cmail_l_pane_g1

0x75cc,	// (0x0003600f) cell_cmail_l_pane_t1_ParamLimits

0x75cc,	// (0x0003600f) cell_cmail_l_pane_t1

0x75e2,	// (0x00036025) cell_cmail_l_pane_t2_ParamLimits

0x75e2,	// (0x00036025) cell_cmail_l_pane_t2

0x0001,

0xfc05,	// (0x0003e648) cell_cmail_l_pane_t_ParamLimits

0xfc05,	// (0x0003e648) cell_cmail_l_pane_t

0xa27c,	// (0x00038cbf) grid_highlight_pane_cp018_ParamLimits

0xa27c,	// (0x00038cbf) grid_highlight_pane_cp018

0xfd42,	// (0x0002e785) main2_pane_ParamLimits

0xfd42,	// (0x0002e785) main2_pane

0xa3ed,	// (0x00038e30) popup_sp_fs_action_menu_bg_pane_g1

0xa3f5,	// (0x00038e38) popup_sp_fs_action_menu_bg_pane_g2

0xa3fd,	// (0x00038e40) popup_sp_fs_action_menu_bg_pane_g3

0xa405,	// (0x00038e48) popup_sp_fs_action_menu_bg_pane_g4

0xa40d,	// (0x00038e50) popup_sp_fs_action_menu_bg_pane_g5

0xa415,	// (0x00038e58) popup_sp_fs_action_menu_bg_pane_g6

0xa41d,	// (0x00038e60) popup_sp_fs_action_menu_bg_pane_g7

0xa425,	// (0x00038e68) popup_sp_fs_action_menu_bg_pane_g8

0xa42d,	// (0x00038e70) popup_sp_fs_action_menu_bg_pane_g9

0xa435,	// (0x00038e78) popup_sp_fs_action_menu_bg_pane_g10

0xa435,	// (0x00038e78) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x0003db48) popup_sp_fs_action_menu_bg_pane_g

0xa2e3,	// (0x00038d26) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x2_t3_g3_g1

0xa2e3,	// (0x00038d26) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x2_t3_g3_g2

0xa2e3,	// (0x00038d26) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x0003dbf6) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x0003dbf6) list_medium_line_x2_t3_g3_g

0xa512,	// (0x00038f55) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x2_t3_g3_t1

0xa512,	// (0x00038f55) list_medium_line_x2_t3_g3_t2_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x2_t3_g3_t2

0xa512,	// (0x00038f55) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x0003dbfd) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x0003dbfd) list_medium_line_x2_t3_g3_t

0xa2e3,	// (0x00038d26) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x2_t3_g2_g1

0xa2e3,	// (0x00038d26) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x0003dc04) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x0003dc04) list_medium_line_x2_t3_g2_g

0xa512,	// (0x00038f55) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x2_t3_g2_t1

0xa512,	// (0x00038f55) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x2_t3_g2_t2

0xa512,	// (0x00038f55) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x0003dbfd) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x0003dbfd) list_medium_line_x2_t3_g2_t

0xa2e3,	// (0x00038d26) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x2_t4_g4_g1

0xa2e3,	// (0x00038d26) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x2_t4_g4_g2

0xa2e3,	// (0x00038d26) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x2_t4_g4_g3

0xa2e3,	// (0x00038d26) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x0003dc09) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x0003dc09) list_medium_line_x2_t4_g4_g

0xa512,	// (0x00038f55) list_medium_line_x2_t4_g4_t1_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x2_t4_g4_t1

0xa512,	// (0x00038f55) list_medium_line_x2_t4_g4_t2_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x2_t4_g4_t2

0xa512,	// (0x00038f55) list_medium_line_x2_t4_g4_t3_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x2_t4_g4_t3

0xa512,	// (0x00038f55) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x0003dc12) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x0003dc12) list_medium_line_x2_t4_g4_t

0xa2e3,	// (0x00038d26) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x2_t2_g4_g1

0xa2e3,	// (0x00038d26) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x2_t2_g4_g2

0xa2e3,	// (0x00038d26) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x2_t2_g4_g3

0xa2e3,	// (0x00038d26) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x0003dc09) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x0003dc09) list_medium_line_x2_t2_g4_g

0xa512,	// (0x00038f55) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x2_t2_g4_t1

0xa512,	// (0x00038f55) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x2_t2_g4_t2

0x0001,

0xf196,	// (0x0003dbd9) list_medium_line_x2_t2_g4_t_ParamLimits

0xf196,	// (0x0003dbd9) list_medium_line_x2_t2_g4_t

0xa2e3,	// (0x00038d26) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x2_t2_g3_g1

0xa2e3,	// (0x00038d26) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x2_t2_g3_g2

0xa2e3,	// (0x00038d26) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x0003dbf6) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x0003dbf6) list_medium_line_x2_t2_g3_g

0xa512,	// (0x00038f55) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x2_t2_g3_t1

0xa512,	// (0x00038f55) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x2_t2_g3_t2

0x0001,

0xf196,	// (0x0003dbd9) list_medium_line_x2_t2_g3_t_ParamLimits

0xf196,	// (0x0003dbd9) list_medium_line_x2_t2_g3_t

0x2e4b,	// (0x0003188e) main_sp_fs_list_pane_ParamLimits

0x2e4b,	// (0x0003188e) main_sp_fs_list_pane

0xd06b,	// (0x0003baae) sp_fs_scroll_pane_ParamLimits

0xd06b,	// (0x0003baae) sp_fs_scroll_pane

0xaa92,	// (0x000394d5) list_medium_line_x2_t3_t1

0xaa92,	// (0x000394d5) list_medium_line_x2_t3_t2

0xaa92,	// (0x000394d5) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x0003dcbf) list_medium_line_x2_t3_t

0xaa92,	// (0x000394d5) list_medium_line_x3_t4_t1

0xaa92,	// (0x000394d5) list_medium_line_x3_t4_t2

0xaa92,	// (0x000394d5) list_medium_line_x3_t4_t3

0xaa92,	// (0x000394d5) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x0003dcc6) list_medium_line_x3_t4_t

0xaa92,	// (0x000394d5) list_medium_line_x4_t5_t1

0xaa92,	// (0x000394d5) list_medium_line_x4_t5_t2

0xaa92,	// (0x000394d5) list_medium_line_x4_t5_t3

0xaa92,	// (0x000394d5) list_medium_line_x4_t5_t4

0xaa92,	// (0x000394d5) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x0003dccf) list_medium_line_x4_t5_t

0xa2e3,	// (0x00038d26) list_medium_line_t4_g4_g1_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_t4_g4_g1

0xa2e3,	// (0x00038d26) list_medium_line_t4_g4_g2_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_t4_g4_g2

0xa2e3,	// (0x00038d26) list_medium_line_t4_g4_g3_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_t4_g4_g3

0xa2e3,	// (0x00038d26) list_medium_line_t4_g4_g4_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x0003dc09) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x0003dc09) list_medium_line_t4_g4_g

0xa512,	// (0x00038f55) list_medium_line_t4_g4_t1_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_t4_g4_t1

0xa512,	// (0x00038f55) list_medium_line_t4_g4_t2_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_t4_g4_t2

0xa512,	// (0x00038f55) list_medium_line_t4_g4_t3_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_t4_g4_t3

0xa512,	// (0x00038f55) list_medium_line_t4_g4_t4_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x0003dc12) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x0003dc12) list_medium_line_t4_g4_t

0x2f68,	// (0x000319ab) chi_dic_find_pane_g1

0x01cb,	// (0x0002ec0e) main_tport_pane

0xaa92,	// (0x000394d5) list_medium_line_plain_t1

0xa2e3,	// (0x00038d26) list_medium_line_t2_g2_g1_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_t2_g2_g1

0xa2e3,	// (0x00038d26) list_medium_line_t2_g2_g2_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x0003dc04) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x0003dc04) list_medium_line_t2_g2_g

0xa512,	// (0x00038f55) list_medium_line_t2_g2_t1_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_t2_g2_t1

0xa512,	// (0x00038f55) list_medium_line_t2_g2_t2_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_t2_g2_t2

0x0001,

0xf196,	// (0x0003dbd9) list_medium_line_t2_g2_t_ParamLimits

0xf196,	// (0x0003dbd9) list_medium_line_t2_g2_t

0xd4ac,	// (0x0003beef) aid_sp_fs_list_icon_a_sm

0xd4b4,	// (0x0003bef7) aid_sp_fs_list_icon_d

0xd4bc,	// (0x0003beff) aid_sp_fs_text_primary

0xd4c5,	// (0x0003bf08) aid_sp_fs_text_secondary

0x9bad,	// (0x000385f0) list_medium_line

0x9bad,	// (0x000385f0) list_medium_line_g2

0x9bad,	// (0x000385f0) list_medium_line_g3

0x9bad,	// (0x000385f0) list_medium_line_plain

0x9bad,	// (0x000385f0) list_medium_line_plain_t2

0x9bad,	// (0x000385f0) list_medium_line_plain_t3

0x9bad,	// (0x000385f0) list_medium_line_right_icon

0x9bad,	// (0x000385f0) list_medium_line_right_iconx2

0x9bad,	// (0x000385f0) list_medium_line_t2

0x9bad,	// (0x000385f0) list_medium_line_t2_g2

0x9bad,	// (0x000385f0) list_medium_line_t2_g3

0x9bad,	// (0x000385f0) list_medium_line_t2_right_icon

0x9bad,	// (0x000385f0) list_medium_line_t2_right_iconx2

0x9bad,	// (0x000385f0) list_medium_line_t3

0x9bad,	// (0x000385f0) list_medium_line_t3_g2

0x9bad,	// (0x000385f0) list_medium_line_t3_g3

0x9bad,	// (0x000385f0) list_medium_line_t3_right_iconx2

0x9bad,	// (0x000385f0) list_medium_line_t4_g4

0x9bad,	// (0x000385f0) list_medium_line_x2

0x9bad,	// (0x000385f0) list_medium_line_x2_t2_g2

0x9bad,	// (0x000385f0) list_medium_line_x2_t2_g3

0x9bad,	// (0x000385f0) list_medium_line_x2_t2_g4

0x9bad,	// (0x000385f0) list_medium_line_x2_t3

0x9bad,	// (0x000385f0) list_medium_line_x2_t3_g2

0x9bad,	// (0x000385f0) list_medium_line_x2_t3_g3

0x9bad,	// (0x000385f0) list_medium_line_x2_t3_g4

0x9bad,	// (0x000385f0) list_medium_line_x2_t4_g2

0x9bad,	// (0x000385f0) list_medium_line_x2_t4_g4

0x9bad,	// (0x000385f0) list_medium_line_x3

0x9bad,	// (0x000385f0) list_medium_line_x3_t4

0x9bad,	// (0x000385f0) list_medium_line_x3_t4_g4

0x9bad,	// (0x000385f0) list_medium_line_x4_t4

0x9bad,	// (0x000385f0) list_medium_line_x4_t4_g7

0x9bad,	// (0x000385f0) list_medium_line_x4_t5

0x6592,	// (0x00034fd5) list_single_fs_dyc_pane_ParamLimits

0x6592,	// (0x00034fd5) list_single_fs_dyc_pane

0xa2e3,	// (0x00038d26) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x4_t4_g7_g1

0xa2e3,	// (0x00038d26) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x4_t4_g7_g2

0xa2e3,	// (0x00038d26) list_medium_line_x4_t4_g7_g3_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x4_t4_g7_g3

0xa2e3,	// (0x00038d26) list_medium_line_x4_t4_g7_g4_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x4_t4_g7_g4

0xa2e3,	// (0x00038d26) list_medium_line_x4_t4_g7_g5_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x4_t4_g7_g5

0xa2e3,	// (0x00038d26) list_medium_line_x4_t4_g7_g6_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x4_t4_g7_g6

0xa2f1,	// (0x00038d34) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa2f1,	// (0x00038d34) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb0d,	// (0x0003e550) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb0d,	// (0x0003e550) list_medium_line_x4_t4_g7_g

0xa512,	// (0x00038f55) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x4_t4_g7_t1

0xa512,	// (0x00038f55) list_medium_line_x4_t4_g7_t2_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x4_t4_g7_t2

0xa512,	// (0x00038f55) list_medium_line_x4_t4_g7_t3_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x4_t4_g7_t3

0xaf66,	// (0x000399a9) list_medium_line_x4_t4_g7_t4_ParamLimits

0xaf66,	// (0x000399a9) list_medium_line_x4_t4_g7_t4

0xaf66,	// (0x000399a9) list_medium_line_x4_t4_g7_t5_ParamLimits

0xaf66,	// (0x000399a9) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb1c,	// (0x0003e55f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb1c,	// (0x0003e55f) list_medium_line_x4_t4_g7_t

0x6c72,	// (0x000356b5) list_single_dyc_row_pane_ParamLimits

0x6c72,	// (0x000356b5) list_single_dyc_row_pane

0x74ed,	// (0x00035f30) call5_gesture_pane_ParamLimits

0x74ed,	// (0x00035f30) call5_gesture_pane

0x7543,	// (0x00035f86) call5_windows_pane_ParamLimits

0x7543,	// (0x00035f86) call5_windows_pane

0x75ff,	// (0x00036042) call5_swipe_1_pane_cp_ParamLimits

0x75ff,	// (0x00036042) call5_swipe_1_pane_cp

0x760b,	// (0x0003604e) call5_swipe_2_pane_cp_ParamLimits

0x760b,	// (0x0003604e) call5_swipe_2_pane_cp

0xa50a,	// (0x00038f4d) call5_image_pane_cp

0x7617,	// (0x0003605a) popup_call5_audio_first_window_cp_ParamLimits

0x7617,	// (0x0003605a) popup_call5_audio_first_window_cp

0xde94,	// (0x0003c8d7) call5_swipe_1_pane_g1_cp_ParamLimits

0xde94,	// (0x0003c8d7) call5_swipe_1_pane_g1_cp

0xdec2,	// (0x0003c905) call5_swipe_1_pane_g2_cp

0xdead,	// (0x0003c8f0) call5_swipe_1_pane_t1_cp_ParamLimits

0xdead,	// (0x0003c8f0) call5_swipe_1_pane_t1_cp

0xde94,	// (0x0003c8d7) call5_swipe_2_pane_g1_cp_ParamLimits

0xde94,	// (0x0003c8d7) call5_swipe_2_pane_g1_cp

0xdeca,	// (0x0003c90d) call5_swipe_2_pane_g2_cp

0xded2,	// (0x0003c915) call5_swipe_2_pane_t1_cp_ParamLimits

0xded2,	// (0x0003c915) call5_swipe_2_pane_t1_cp

0xa27c,	// (0x00038cbf) main_sp_fs_email_pane

0xdee7,	// (0x0003c92a) main_sp_fs_listscroll_pane_te

0x7625,	// (0x00036068) popup_sp_fs_action_menu_pane_ParamLimits

0x7625,	// (0x00036068) popup_sp_fs_action_menu_pane

0xa540,	// (0x00038f83) bg_sp_fs_ctrlbar_pane_g1

0xdef0,	// (0x0003c933) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xdef9,	// (0x0003c93c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xdf02,	// (0x0003c945) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa540,	// (0x00038f83) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc0a,	// (0x0003e64d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc402,	// (0x0003ae45) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc402,	// (0x0003ae45) bg_sp_fs_ctrlbar_ddmenu_pane

0xdf0b,	// (0x0003c94e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdf0b,	// (0x0003c94e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdf17,	// (0x0003c95a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdf17,	// (0x0003c95a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc13,	// (0x0003e656) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc13,	// (0x0003e656) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdf23,	// (0x0003c966) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdf23,	// (0x0003c966) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa540,	// (0x00038f83) list_medium_line_t2_right_icon_g1

0xaa92,	// (0x000394d5) list_medium_line_t2_right_icon_t1

0xaa92,	// (0x000394d5) list_medium_line_t2_right_icon_t2

0x0001,

0xfc18,	// (0x0003e65b) list_medium_line_t2_right_icon_t

0xaf7a,	// (0x000399bd) bg_sp_fs_ctrlbar_pane_ParamLimits

0xaf7a,	// (0x000399bd) bg_sp_fs_ctrlbar_pane

0x76b8,	// (0x000360fb) main_sp_fs_ctrlbar_button_pane_cp01

0x76c2,	// (0x00036105) main_sp_fs_ctrlbar_ddmenu_pane

0xdf77,	// (0x0003c9ba) main_sp_fs_ctrlbar_pane_g1

0xdf83,	// (0x0003c9c6) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc1d,	// (0x0003e660) main_sp_fs_ctrlbar_pane_g

0x7700,	// (0x00036143) main_sp_fs_ctrlbar_pane_t1

0x773f,	// (0x00036182) main_sp_fs_ctrlbar_pane

0x7763,	// (0x000361a6) main_sp_fs_listscroll_pane_te_cp01

0x7783,	// (0x000361c6) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7783,	// (0x000361c6) popup_sp_fs_action_menu_pane_cp01

0xa27c,	// (0x00038cbf) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa27c,	// (0x00038cbf) bg_sp_fs_highlight_list_pane_cp01

0xdfaa,	// (0x0003c9ed) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdfaa,	// (0x0003c9ed) sp_fs_action_menu_list_gene_pane_g1

0xdfb9,	// (0x0003c9fc) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdfb9,	// (0x0003c9fc) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc2b,	// (0x0003e66e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc2b,	// (0x0003e66e) sp_fs_action_menu_list_gene_pane_g

0xdfc6,	// (0x0003ca09) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdfc6,	// (0x0003ca09) sp_fs_action_menu_list_gene_pane_t1

0xdfde,	// (0x0003ca21) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdfde,	// (0x0003ca21) sp_fs_action_menu_list_gene_pane

0xe001,	// (0x0003ca44) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe001,	// (0x0003ca44) popup_sp_fs_action_menu_bg_pane

0xe00f,	// (0x0003ca52) sp_fs_action_menu_list_pane_ParamLimits

0xe00f,	// (0x0003ca52) sp_fs_action_menu_list_pane

0x77a8,	// (0x000361eb) sp_fs_scroll_pane_cp01_ParamLimits

0x77a8,	// (0x000361eb) sp_fs_scroll_pane_cp01

0xaa92,	// (0x000394d5) list_medium_line_plain_t2_t1

0xaa92,	// (0x000394d5) list_medium_line_plain_t2_t2

0x0001,

0xfc18,	// (0x0003e65b) list_medium_line_plain_t2_t

0xaa92,	// (0x000394d5) list_medium_line_plain_t3_t1

0xaa92,	// (0x000394d5) list_medium_line_plain_t3_t2

0xaa92,	// (0x000394d5) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x0003dcbf) list_medium_line_plain_t3_t

0xa2e3,	// (0x00038d26) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x2_t2_g2_g1

0xa2e3,	// (0x00038d26) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x0003dc04) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x0003dc04) list_medium_line_x2_t2_g2_g

0xa512,	// (0x00038f55) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x2_t2_g2_t1

0xa512,	// (0x00038f55) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x2_t2_g2_t2

0x0001,

0xf196,	// (0x0003dbd9) list_medium_line_x2_t2_g2_t_ParamLimits

0xf196,	// (0x0003dbd9) list_medium_line_x2_t2_g2_t

0xa2e3,	// (0x00038d26) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x2_t4_g2_g1

0xa2e3,	// (0x00038d26) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x0003dc04) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x0003dc04) list_medium_line_x2_t4_g2_g

0xa512,	// (0x00038f55) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x2_t4_g2_t1

0xa512,	// (0x00038f55) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x2_t4_g2_t2

0xa512,	// (0x00038f55) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x2_t4_g2_t3

0xa512,	// (0x00038f55) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x0003dc12) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x0003dc12) list_medium_line_x2_t4_g2_t

0xa540,	// (0x00038f83) list_medium_line_t3_right_iconx2_g1

0xa540,	// (0x00038f83) list_medium_line_t3_right_iconx2_g2

0xa540,	// (0x00038f83) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf39d,	// (0x0003dde0) list_medium_line_t3_right_iconx2_g

0xaa92,	// (0x000394d5) list_medium_line_t3_right_iconx2_t1

0xaa92,	// (0x000394d5) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc18,	// (0x0003e65b) list_medium_line_t3_right_iconx2_t

0xa2e3,	// (0x00038d26) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x3_t4_g4_g1

0xa2e3,	// (0x00038d26) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x3_t4_g4_g2

0xa2e3,	// (0x00038d26) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x3_t4_g4_g3

0xa2e3,	// (0x00038d26) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x0003dc09) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x0003dc09) list_medium_line_x3_t4_g4_g

0xa512,	// (0x00038f55) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x3_t4_g4_t1

0xa512,	// (0x00038f55) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x3_t4_g4_t2

0xa512,	// (0x00038f55) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x3_t4_g4_t3

0xa512,	// (0x00038f55) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x0003dc12) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x0003dc12) list_medium_line_x3_t4_g4_t

0x77ce,	// (0x00036211) list_single_dyc_row_text_pane_t1_ParamLimits

0x77ce,	// (0x00036211) list_single_dyc_row_text_pane_t1

0x7817,	// (0x0003625a) list_single_dyc_row_text_pane_t2_ParamLimits

0x7817,	// (0x0003625a) list_single_dyc_row_text_pane_t2

0xe033,	// (0x0003ca76) list_single_dyc_row_text_pane_t3_ParamLimits

0xe033,	// (0x0003ca76) list_single_dyc_row_text_pane_t3

0x0005,

0xfc30,	// (0x0003e673) list_single_dyc_row_text_pane_t_ParamLimits

0xfc30,	// (0x0003e673) list_single_dyc_row_text_pane_t

0xe057,	// (0x0003ca9a) list_single_dyc_row_pane_g1_ParamLimits

0xe057,	// (0x0003ca9a) list_single_dyc_row_pane_g1

0xe063,	// (0x0003caa6) list_single_dyc_row_pane_g2_ParamLimits

0xe063,	// (0x0003caa6) list_single_dyc_row_pane_g2

0xe06f,	// (0x0003cab2) list_single_dyc_row_pane_g3_ParamLimits

0xe06f,	// (0x0003cab2) list_single_dyc_row_pane_g3

0xe07b,	// (0x0003cabe) list_single_dyc_row_pane_g4_ParamLimits

0xe07b,	// (0x0003cabe) list_single_dyc_row_pane_g4

0x0003,

0xfc3d,	// (0x0003e680) list_single_dyc_row_pane_g_ParamLimits

0xfc3d,	// (0x0003e680) list_single_dyc_row_pane_g

0xe087,	// (0x0003caca) list_single_dyc_row_text_pane_ParamLimits

0xe087,	// (0x0003caca) list_single_dyc_row_text_pane

0x9bad,	// (0x000385f0) bg_sp_fs_scroll_pane

0xe0a6,	// (0x0003cae9) thumb_sp_fs_scroll_pane

0xa2e3,	// (0x00038d26) list_medium_line_g1_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_g1

0xa512,	// (0x00038f55) list_medium_line_t1_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_t1

0xa2e3,	// (0x00038d26) list_medium_line_x2_g1_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x2_g1

0xa2e3,	// (0x00038d26) list_medium_line_x2_g2_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x0003dc04) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x0003dc04) list_medium_line_x2_g

0xa512,	// (0x00038f55) list_medium_line_x2_t1_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x2_t1

0xa2e3,	// (0x00038d26) list_medium_line_x3_g1_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x3_g1

0xd095,	// (0x0003bad8) list_medium_line_x3_g2_ParamLimits

0xd095,	// (0x0003bad8) list_medium_line_x3_g2

0x0001,

0xfc46,	// (0x0003e689) list_medium_line_x3_g_ParamLimits

0xfc46,	// (0x0003e689) list_medium_line_x3_g

0xe0af,	// (0x0003caf2) list_medium_line_x3_t1_ParamLimits

0xe0af,	// (0x0003caf2) list_medium_line_x3_t1

0xe0c3,	// (0x0003cb06) thumb_sp_fs_scroll_pane_g1

0xe0cc,	// (0x0003cb0f) thumb_sp_fs_scroll_pane_g2

0xe0d5,	// (0x0003cb18) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc4b,	// (0x0003e68e) thumb_sp_fs_scroll_pane_g

0xe0c3,	// (0x0003cb06) bg_sp_fs_scroll_pane_g1

0xe0cc,	// (0x0003cb0f) bg_sp_fs_scroll_pane_g2

0xe0d5,	// (0x0003cb18) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc4b,	// (0x0003e68e) bg_sp_fs_scroll_pane_g

0xa2e3,	// (0x00038d26) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x2_t3_g4_g1

0xa2e3,	// (0x00038d26) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x2_t3_g4_g2

0xa2e3,	// (0x00038d26) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x2_t3_g4_g3

0xa2e3,	// (0x00038d26) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x0003dc09) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x0003dc09) list_medium_line_x2_t3_g4_g

0xa512,	// (0x00038f55) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x2_t3_g4_t1

0xa512,	// (0x00038f55) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x2_t3_g4_t2

0xa512,	// (0x00038f55) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x0003dbfd) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x0003dbfd) list_medium_line_x2_t3_g4_t

0xa2e3,	// (0x00038d26) list_medium_line_g2_g1_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_g2_g1

0xa2e3,	// (0x00038d26) list_medium_line_g2_g2_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x0003dc04) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x0003dc04) list_medium_line_g2_g

0xa512,	// (0x00038f55) list_medium_line_g2_t1_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_g2_t1

0xa2e3,	// (0x00038d26) list_medium_line_t3_g2_g1_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_t3_g2_g1

0xa2e3,	// (0x00038d26) list_medium_line_t3_g2_g2_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x0003dc04) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x0003dc04) list_medium_line_t3_g2_g

0xa512,	// (0x00038f55) list_medium_line_t3_g2_t1_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_t3_g2_t1

0xa512,	// (0x00038f55) list_medium_line_t3_g2_t2_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_t3_g2_t2

0xa512,	// (0x00038f55) list_medium_line_t3_g2_t3_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x0003dbfd) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x0003dbfd) list_medium_line_t3_g2_t

0xa540,	// (0x00038f83) list_medium_line_right_icon_g1

0xaa92,	// (0x000394d5) list_medium_line_right_icon_t1

0xa2e3,	// (0x00038d26) list_medium_line_t2_g1_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_t2_g1

0xa512,	// (0x00038f55) list_medium_line_t2_t1_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_t2_t1

0xa512,	// (0x00038f55) list_medium_line_t2_t2_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_t2_t2

0x0001,

0xf196,	// (0x0003dbd9) list_medium_line_t2_t_ParamLimits

0xf196,	// (0x0003dbd9) list_medium_line_t2_t

0xa2e3,	// (0x00038d26) list_medium_line_t3_g1_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_t3_g1

0xa512,	// (0x00038f55) list_medium_line_t3_t1_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_t3_t1

0xa512,	// (0x00038f55) list_medium_line_t3_t2_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_t3_t2

0xa512,	// (0x00038f55) list_medium_line_t3_t3_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x0003dbfd) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x0003dbfd) list_medium_line_t3_t

0xa2e3,	// (0x00038d26) list_medium_line_g3_g1_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_g3_g1

0xa2e3,	// (0x00038d26) list_medium_line_g3_g2_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_g3_g2

0xa2e3,	// (0x00038d26) list_medium_line_g3_g3_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x0003dbf6) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x0003dbf6) list_medium_line_g3_g

0xa512,	// (0x00038f55) list_medium_line_g3_t1_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_g3_t1

0xa2e3,	// (0x00038d26) list_medium_line_t2_g3_g1_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_t2_g3_g1

0xa2e3,	// (0x00038d26) list_medium_line_t2_g3_g2_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_t2_g3_g2

0xa2e3,	// (0x00038d26) list_medium_line_t2_g3_g3_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x0003dbf6) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x0003dbf6) list_medium_line_t2_g3_g

0xa512,	// (0x00038f55) list_medium_line_t2_g3_t1_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_t2_g3_t1

0xa512,	// (0x00038f55) list_medium_line_t2_g3_t2_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_t2_g3_t2

0x0001,

0xf196,	// (0x0003dbd9) list_medium_line_t2_g3_t_ParamLimits

0xf196,	// (0x0003dbd9) list_medium_line_t2_g3_t

0xa2e3,	// (0x00038d26) list_medium_line_t3_g3_g1_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_t3_g3_g1

0xa2e3,	// (0x00038d26) list_medium_line_t3_g3_g2_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_t3_g3_g2

0xa2e3,	// (0x00038d26) list_medium_line_t3_g3_g3_ParamLimits

0xa2e3,	// (0x00038d26) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x0003dbf6) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x0003dbf6) list_medium_line_t3_g3_g

0xa512,	// (0x00038f55) list_medium_line_t3_g3_t1_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_t3_g3_t1

0xa512,	// (0x00038f55) list_medium_line_t3_g3_t2_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_t3_g3_t2

0xa512,	// (0x00038f55) list_medium_line_t3_g3_t3_ParamLimits

0xa512,	// (0x00038f55) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x0003dbfd) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x0003dbfd) list_medium_line_t3_g3_t

0xa540,	// (0x00038f83) list_medium_line_right_iconx2_g1

0xa540,	// (0x00038f83) list_medium_line_right_iconx2_g2

0x0001,

0xf398,	// (0x0003dddb) list_medium_line_right_iconx2_g

0xaa92,	// (0x000394d5) list_medium_line_right_iconx2_t1

0xa540,	// (0x00038f83) list_medium_line_t2_right_iconx2_g1

0xa540,	// (0x00038f83) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf398,	// (0x0003dddb) list_medium_line_t2_right_iconx2_g

0xaa92,	// (0x000394d5) list_medium_line_t2_right_iconx2_t1

0xaa92,	// (0x000394d5) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc18,	// (0x0003e65b) list_medium_line_t2_right_iconx2_t

0xaa92,	// (0x000394d5) list_medium_line_x4_t4_t1

0xaa92,	// (0x000394d5) list_medium_line_x4_t4_t2

0xaa92,	// (0x000394d5) list_medium_line_x4_t4_t3

0xaa92,	// (0x000394d5) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x0003dcc6) list_medium_line_x4_t4_t

0x7990,	// (0x000363d3) tport_appsw_pane_ParamLimits

0x7990,	// (0x000363d3) tport_appsw_pane

0x79a8,	// (0x000363eb) tport_contact_pane_ParamLimits

0x79a8,	// (0x000363eb) tport_contact_pane

0x79c3,	// (0x00036406) tport_listscroll_pane_ParamLimits

0x79c3,	// (0x00036406) tport_listscroll_pane

0x79db,	// (0x0003641e) cell_tport_appsw_pane_ParamLimits

0x79db,	// (0x0003641e) cell_tport_appsw_pane

0xaf44,	// (0x00039987) tport_appsw_pane_g1_ParamLimits

0xaf44,	// (0x00039987) tport_appsw_pane_g1

0x7a25,	// (0x00036468) tport_contact_pane_g1

0x7a2e,	// (0x00036471) tport_contact_pane_t1

0x7a3c,	// (0x0003647f) tport_contact_pane_t2

0x0001,

0xfc52,	// (0x0003e695) tport_contact_pane_t

0xe0de,	// (0x0003cb21) list_tport_pane

0xe0e7,	// (0x0003cb2a) scroll_pane_cp_030

0x7a52,	// (0x00036495) cell_tport_appsw_pane_g1

0x7a62,	// (0x000364a5) cell_tport_appsw_pane_t1

0x7a70,	// (0x000364b3) grid_highlight_pane_cp019

0x7a78,	// (0x000364bb) list_tport_double_graphic_pane_ParamLimits

0x7a78,	// (0x000364bb) list_tport_double_graphic_pane

0xa27c,	// (0x00038cbf) list_highlight_pane_cp023_ParamLimits

0xa27c,	// (0x00038cbf) list_highlight_pane_cp023

0x7a85,	// (0x000364c8) list_tport_double_graphic_pane_g1_ParamLimits

0x7a85,	// (0x000364c8) list_tport_double_graphic_pane_g1

0x7a92,	// (0x000364d5) list_tport_double_graphic_pane_t1_ParamLimits

0x7a92,	// (0x000364d5) list_tport_double_graphic_pane_t1

0x7aa7,	// (0x000364ea) list_tport_double_graphic_pane_t2_ParamLimits

0x7aa7,	// (0x000364ea) list_tport_double_graphic_pane_t2

0x0001,

0xfc5e,	// (0x0003e6a1) list_tport_double_graphic_pane_t_ParamLimits

0xfc5e,	// (0x0003e6a1) list_tport_double_graphic_pane_t

0x9bad,	// (0x000385f0) main_cale_note_pane

0x0e0b,	// (0x0002f84e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x0e0b,	// (0x0002f84e) cell_vitu2_function_top_wide_pane_cp01

0x7012,	// (0x00035a55) wait_bar_pane_cp05_ParamLimits

0xa27c,	// (0x00038cbf) listscroll_cmail_pane

0xe0f8,	// (0x0003cb3b) list_cmail_pane

0x7ab9,	// (0x000364fc) list_cmail_body_pane

0x7ad0,	// (0x00036513) list_single_cmail_header_caption_pane

0x7aea,	// (0x0003652d) list_single_cmail_header_detail_pane_ParamLimits

0x7aea,	// (0x0003652d) list_single_cmail_header_detail_pane

0xe10f,	// (0x0003cb52) list_single_cmail_header_caption_pane_t1

0x7b1d,	// (0x00036560) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7b1d,	// (0x00036560) list_single_cmail_header_detail_pane_g1

0xe126,	// (0x0003cb69) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe126,	// (0x0003cb69) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc63,	// (0x0003e6a6) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc63,	// (0x0003e6a6) list_single_cmail_header_detail_pane_g

0x7b35,	// (0x00036578) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7b35,	// (0x00036578) list_single_cmail_header_detail_pane_t1

0x7b71,	// (0x000365b4) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7b71,	// (0x000365b4) list_single_cmail_header_editor_pane_bg

0xdc60,	// (0x0003c6a3) list_cmail_body_pane_g1

0xe163,	// (0x0003cba6) list_cmail_body_pane_t1

0xcef4,	// (0x0003b937) list_single_cmail_header_editor_pane_bg_g1

0xa764,	// (0x000391a7) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcf04,	// (0x0003b947) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcefc,	// (0x0003b93f) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd180,	// (0x0003bbc3) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcf24,	// (0x0003b967) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcf14,	// (0x0003b957) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcf1c,	// (0x0003b95f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa744,	// (0x00039187) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7b88,	// (0x000365cb) calenote_gesture_pane_ParamLimits

0x7b88,	// (0x000365cb) calenote_gesture_pane

0x7ba8,	// (0x000365eb) calenote_window_pane_ParamLimits

0x7ba8,	// (0x000365eb) calenote_window_pane

0xe171,	// (0x0003cbb4) popup_note_window_cp01

0x7bc4,	// (0x00036607) calenote_swipe_1_pane_ParamLimits

0x7bc4,	// (0x00036607) calenote_swipe_1_pane

0x760b,	// (0x0003604e) calenote_swipe_2_pane_ParamLimits

0x760b,	// (0x0003604e) calenote_swipe_2_pane

0xde94,	// (0x0003c8d7) calenote_swipe_1_pane_g1_ParamLimits

0xde94,	// (0x0003c8d7) calenote_swipe_1_pane_g1

0xdea1,	// (0x0003c8e4) calenote_swipe_1_pane_g2_ParamLimits

0xdea1,	// (0x0003c8e4) calenote_swipe_1_pane_g2

0x0001,

0xfc00,	// (0x0003e643) calenote_swipe_1_pane_g_ParamLimits

0xfc00,	// (0x0003e643) calenote_swipe_1_pane_g

0xe183,	// (0x0003cbc6) calenote_swipe_1_pane_t1_ParamLimits

0xe183,	// (0x0003cbc6) calenote_swipe_1_pane_t1

0xde94,	// (0x0003c8d7) calenote_swipe_2_pane_g1_ParamLimits

0xde94,	// (0x0003c8d7) calenote_swipe_2_pane_g1

0xe1a2,	// (0x0003cbe5) calenote_swipe_2_pane_g2_ParamLimits

0xe1a2,	// (0x0003cbe5) calenote_swipe_2_pane_g2

0x0001,

0xfc6f,	// (0x0003e6b2) calenote_swipe_2_pane_g_ParamLimits

0xfc6f,	// (0x0003e6b2) calenote_swipe_2_pane_g

0xe1ae,	// (0x0003cbf1) calenote_swipe_2_pane_t1_ParamLimits

0xe1ae,	// (0x0003cbf1) calenote_swipe_2_pane_t1

0x9bad,	// (0x000385f0) main_mup_navstr_pane

0x4b89,	// (0x000335cc) main_mup3_pane_t7_ParamLimits

0x4b89,	// (0x000335cc) main_mup3_pane_t7

0x5333,	// (0x00033d76) main_mp4_pane_g6_ParamLimits

0x5333,	// (0x00033d76) main_mp4_pane_g6

0x559d,	// (0x00033fe0) main_image3_pane_t4_ParamLimits

0x559d,	// (0x00033fe0) main_image3_pane_t4

0x7bd9,	// (0x0003661c) popup_navstr_preview_pane_ParamLimits

0x7bd9,	// (0x0003661c) popup_navstr_preview_pane

0x7be9,	// (0x0003662c) scroll_navstr_pane_ParamLimits

0x7be9,	// (0x0003662c) scroll_navstr_pane

0x9bad,	// (0x000385f0) bg_popup_preview_window_pane_cp04

0xe1d5,	// (0x0003cc18) popup_navstr_preview_pane_t1

0x7bfd,	// (0x00036640) scroll_navstr_pane_g1_ParamLimits

0x7bfd,	// (0x00036640) scroll_navstr_pane_g1

0x7c11,	// (0x00036654) scroll_navstr_pane_t1_ParamLimits

0x7c11,	// (0x00036654) scroll_navstr_pane_t1

0xe17a,	// (0x0003cbbd) bg_button_pane_cp014

0xe17a,	// (0x0003cbbd) bg_button_pane_cp030

0x7493,	// (0x00035ed6) list_double_fisheye_pane_g4_ParamLimits

0x7493,	// (0x00035ed6) list_double_fisheye_pane_g4

0x749f,	// (0x00035ee2) list_double_fisheye_pane_g5_ParamLimits

0x749f,	// (0x00035ee2) list_double_fisheye_pane_g5

0xd06b,	// (0x0003baae) sp_fs_scroll_pane_cp03

0xdf77,	// (0x0003c9ba) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdf83,	// (0x0003c9c6) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc1d,	// (0x0003e660) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7700,	// (0x00036143) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe107,	// (0x0003cb4a) sp_fs_scroll_pane_cp02

0xa466,	// (0x00038ea9) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa466,	// (0x00038ea9) popup_sp_fs_calendar_preview_list_single_pane

0x9bad,	// (0x000385f0) main_cam6_pano_pane

0x12a2,	// (0x0002fce5) main_mup3_pane_ParamLimits

0x9bad,	// (0x000385f0) main_phacti_pane

0x6ee3,	// (0x00035926) bg_button_pane_cp11

0x6efd,	// (0x00035940) main_mobtv_info_pane_g2_ParamLimits

0x6efd,	// (0x00035940) main_mobtv_info_pane_g2

0x0001,

0xfb7d,	// (0x0003e5c0) main_mobtv_info_pane_g_ParamLimits

0xfb7d,	// (0x0003e5c0) main_mobtv_info_pane_g

0x70da,	// (0x00035b1d) sc_clock_pane_t5_ParamLimits

0x70da,	// (0x00035b1d) sc_clock_pane_t5

0x730e,	// (0x00035d51) main_radioblah_pane_g1_ParamLimits

0xddc6,	// (0x0003c809) main_radioblah_pane_t3_ParamLimits

0xddc6,	// (0x0003c809) main_radioblah_pane_t3

0xddde,	// (0x0003c821) main_radioblah_pane_t4_ParamLimits

0xddde,	// (0x0003c821) main_radioblah_pane_t4

0x7336,	// (0x00035d79) main_radioblah_text_pane_ParamLimits

0x7336,	// (0x00035d79) main_radioblah_text_pane

0x7348,	// (0x00035d8b) main_radioblah_info_pane_g1_ParamLimits

0x73e1,	// (0x00035e24) main_radioblah_info_pane_t4_ParamLimits

0x73e1,	// (0x00035e24) main_radioblah_info_pane_t4

0xa27c,	// (0x00038cbf) main_sp_fs_calendar_pane

0x7c28,	// (0x0003666b) main_phacti_pane_g1

0x7c30,	// (0x00036673) phacti_note_pane_ParamLimits

0x7c30,	// (0x00036673) phacti_note_pane

0xe1ec,	// (0x0003cc2f) phacti_term_pane_ParamLimits

0xe1ec,	// (0x0003cc2f) phacti_term_pane

0xe201,	// (0x0003cc44) phacti_note_pane_t1_ParamLimits

0xe201,	// (0x0003cc44) phacti_note_pane_t1

0xe218,	// (0x0003cc5b) phacti_term_pane_g1

0xe220,	// (0x0003cc63) phacti_term_pane_t1_ParamLimits

0xe220,	// (0x0003cc63) phacti_term_pane_t1

0xe24a,	// (0x0003cc8d) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe252,	// (0x0003cc95) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc79,	// (0x0003e6bc) popup_sp_fs_calendar_preview_list_single_pane_g

0xe25a,	// (0x0003cc9d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe25a,	// (0x0003cc9d) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe270,	// (0x0003ccb3) aid_popup_sp_fs_bg_corner_pane

0xa540,	// (0x00038f83) popup_sp_fs_calendar_preview_bg_pane_g1

0x9bad,	// (0x000385f0) popup_sp_fs_calendar_preview_bg_pane

0xe278,	// (0x0003ccbb) popup_sp_fs_calendar_preview_list_pane

0xaf7a,	// (0x000399bd) bg_main_sp_fs_cale_pane_ParamLimits

0xaf7a,	// (0x000399bd) bg_main_sp_fs_cale_pane

0xe289,	// (0x0003cccc) listscroll_cale_mrui_pane_ParamLimits

0xe289,	// (0x0003cccc) listscroll_cale_mrui_pane

0xe29e,	// (0x0003cce1) listscroll_sp_fs_schedule_track_pane

0xe2a7,	// (0x0003ccea) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe2a7,	// (0x0003ccea) main_sp_fs_ctrlbar_pane_cp01

0xe2ba,	// (0x0003ccfd) main_sp_fs_ribbon_pane

0xe2c2,	// (0x0003cd05) popup_sp_fs_cale_preview_window

0x7ca5,	// (0x000366e8) list_single_sp_fs_schedule_track_pane_ParamLimits

0x7ca5,	// (0x000366e8) list_single_sp_fs_schedule_track_pane

0xa27c,	// (0x00038cbf) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa27c,	// (0x00038cbf) bg_sp_fs_highlight_list_pane_cp03

0x7cb8,	// (0x000366fb) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x7cb8,	// (0x000366fb) list_single_sp_fs_schedule_track_pane_g1

0x7cc4,	// (0x00036707) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x7cc4,	// (0x00036707) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc7e,	// (0x0003e6c1) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc7e,	// (0x0003e6c1) list_single_sp_fs_schedule_track_pane_g

0x7cd0,	// (0x00036713) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x7cd0,	// (0x00036713) list_single_sp_fs_schedule_track_pane_t1

0x7cf2,	// (0x00036735) sp_fs_schedule_track_pane_ParamLimits

0x7cf2,	// (0x00036735) sp_fs_schedule_track_pane

0xe2d4,	// (0x0003cd17) sp_fs_schedule_track_pane_g1

0xe2dc,	// (0x0003cd1f) sp_fs_schedule_track_pane_g2

0xe2e4,	// (0x0003cd27) sp_fs_schedule_track_pane_g3

0xe2ec,	// (0x0003cd2f) sp_fs_schedule_track_pane_g4

0xe2f4,	// (0x0003cd37) sp_fs_schedule_track_pane_g5

0x0004,

0xfc83,	// (0x0003e6c6) sp_fs_schedule_track_pane_g

0xcef4,	// (0x0003b937) bg_sp_fs_schedule_viewer_highlight_g1

0xa764,	// (0x000391a7) bg_sp_fs_schedule_viewer_highlight_g2

0xcefc,	// (0x0003b93f) bg_sp_fs_schedule_viewer_highlight_g3

0xcf04,	// (0x0003b947) bg_sp_fs_schedule_viewer_highlight_g4

0xd180,	// (0x0003bbc3) bg_sp_fs_schedule_viewer_highlight_g5

0xcf14,	// (0x0003b957) bg_sp_fs_schedule_viewer_highlight_g6

0xcf1c,	// (0x0003b95f) bg_sp_fs_schedule_viewer_highlight_g7

0xcf24,	// (0x0003b967) bg_sp_fs_schedule_viewer_highlight_g8

0xa744,	// (0x00039187) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc8e,	// (0x0003e6d1) bg_sp_fs_schedule_viewer_highlight_g

0x9bad,	// (0x000385f0) bg_main_sp_fs_ribbon_pane

0x7d07,	// (0x0003674a) main_sp_fs_ribbon_pane_g1

0xe2fc,	// (0x0003cd3f) main_sp_fs_ribbon_pane_t1

0x7d10,	// (0x00036753) main_sp_fs_ribbon_pane_t2

0xe30b,	// (0x0003cd4e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfca1,	// (0x0003e6e4) main_sp_fs_ribbon_pane_t

0xe31a,	// (0x0003cd5d) main_sp_fs_ribbon_scheduler_pane

0xe322,	// (0x0003cd65) bg_main_sp_fs_ribbon_pane_g1

0xe32b,	// (0x0003cd6e) bg_main_sp_fs_ribbon_pane_g2

0xe334,	// (0x0003cd77) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfca8,	// (0x0003e6eb) bg_main_sp_fs_ribbon_pane_g

0xe33c,	// (0x0003cd7f) main_sp_fs_ribbon_scheduler_pane_g1

0xe345,	// (0x0003cd88) main_sp_fs_ribbon_scheduler_pane_g2

0xe34e,	// (0x0003cd91) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcaf,	// (0x0003e6f2) main_sp_fs_ribbon_scheduler_pane_g

0xe357,	// (0x0003cd9a) list_cale_mrui_pane

0x7d1f,	// (0x00036762) sp_fs_scroll_pane_cp07_ParamLimits

0x7d1f,	// (0x00036762) sp_fs_scroll_pane_cp07

0x7d3b,	// (0x0003677e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x7d3b,	// (0x0003677e) bg_sp_fs_schedule_viewer_highlight

0xe364,	// (0x0003cda7) list_single_sp_fs_schedule_track_pane_cp01

0xe36c,	// (0x0003cdaf) list_sp_fs_schedule_track_pane

0xe374,	// (0x0003cdb7) sp_fs_scroll_pane_cp06_ParamLimits

0xe374,	// (0x0003cdb7) sp_fs_scroll_pane_cp06

0xa540,	// (0x00038f83) bgmain_sp_fs_calendar_pane_g1

0x7d4d,	// (0x00036790) list_single_cale_mrui_pane_ParamLimits

0x7d4d,	// (0x00036790) list_single_cale_mrui_pane

0xe386,	// (0x0003cdc9) list_single_cale_mrui_row_pane_ParamLimits

0xe386,	// (0x0003cdc9) list_single_cale_mrui_row_pane

0xe393,	// (0x0003cdd6) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe393,	// (0x0003cdd6) list_single_cale_mrui_row_pane_g1

0xe3d8,	// (0x0003ce1b) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe3d8,	// (0x0003ce1b) list_single_cale_mrui_row_pane_t1

0x7d6d,	// (0x000367b0) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7d6d,	// (0x000367b0) list_single_cale_mrui_row_pane_t2

0xe3ea,	// (0x0003ce2d) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe3ea,	// (0x0003ce2d) list_single_cale_mrui_row_pane_t3

0xe419,	// (0x0003ce5c) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe419,	// (0x0003ce5c) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcbd,	// (0x0003e700) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcbd,	// (0x0003e700) list_single_cale_mrui_row_pane_t

0x7dd3,	// (0x00036816) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x7dd3,	// (0x00036816) list_single_cmail_header_editor_pane_bg_cp01

0x7dff,	// (0x00036842) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7dff,	// (0x00036842) list_single_cmail_header_editor_pane_bg_cp02

0x7e1d,	// (0x00036860) main_radioblah_text_pane_t1_ParamLimits

0x7e1d,	// (0x00036860) main_radioblah_text_pane_t1

0xe44a,	// (0x0003ce8d) cam6_indi_pane_cp01

0xe452,	// (0x0003ce95) cam6_mode_pane_cp01

0xe45a,	// (0x0003ce9d) cam6_pano_pane

0xe463,	// (0x0003cea6) cam6_zoom_pane_cp01

0xe46d,	// (0x0003ceb0) cam6_pano_image_pane

0xe476,	// (0x0003ceb9) cam6_pano_pane_g1

0xdc60,	// (0x0003c6a3) cam6_pano_pane_g2

0xe47f,	// (0x0003cec2) cam6_pano_pane_g3

0xe488,	// (0x0003cecb) cam6_pano_pane_g4

0xcb6e,	// (0x0003b5b1) cam6_pano_pane_g5

0xe491,	// (0x0003ced4) cam6_pano_pane_g6

0xe499,	// (0x0003cedc) cam6_pano_pane_g7

0xe4a1,	// (0x0003cee4) cam6_pano_pane_g8

0xe4aa,	// (0x0003ceed) cam6_pano_pane_g9

0x0008,

0xfcc6,	// (0x0003e709) cam6_pano_pane_g

0x9bad,	// (0x000385f0) main_browser_tag_pane

0xe1cd,	// (0x0003cc10) grid_navstr_albumart_pane

0xe4b5,	// (0x0003cef8) cell_navstr_albumart_pane_ParamLimits

0xe4b5,	// (0x0003cef8) cell_navstr_albumart_pane

0xe4d1,	// (0x0003cf14) cell_navstr_albumart_pane_g1

0xc08e,	// (0x0003aad1) cell_navstr_albumart_pane_g2

0xc09e,	// (0x0003aae1) cell_navstr_albumart_pane_g3

0xc096,	// (0x0003aad9) cell_navstr_albumart_pane_g4

0x0003,

0xfcd9,	// (0x0003e71c) cell_navstr_albumart_pane_g

0x7e38,	// (0x0003687b) bt_list_pane_ParamLimits

0x7e38,	// (0x0003687b) bt_list_pane

0x7e4e,	// (0x00036891) bt_list_pane_t1

0x7e5d,	// (0x000368a0) bt_list_pane_t2

0x0001,

0xfce2,	// (0x0003e725) bt_list_pane_t

0x9bad,	// (0x000385f0) main_cale_prevew_pane

0x7e6c,	// (0x000368af) popup_cale_preview_window_ParamLimits

0x7e6c,	// (0x000368af) popup_cale_preview_window

0xa27c,	// (0x00038cbf) bg_popup_preview_window_pane_cp05_ParamLimits

0xa27c,	// (0x00038cbf) bg_popup_preview_window_pane_cp05

0xe4d9,	// (0x0003cf1c) list_cale_preview_pane_ParamLimits

0xe4d9,	// (0x0003cf1c) list_cale_preview_pane

0x7e89,	// (0x000368cc) list_double_cale_preview_pane_ParamLimits

0x7e89,	// (0x000368cc) list_double_cale_preview_pane

0x7e9d,	// (0x000368e0) list_single_cale_preview_pane_ParamLimits

0x7e9d,	// (0x000368e0) list_single_cale_preview_pane

0x7eb5,	// (0x000368f8) list_single_cale_preview_pane_g1

0x7ebd,	// (0x00036900) list_single_cale_preview_pane_t1_ParamLimits

0x7ebd,	// (0x00036900) list_single_cale_preview_pane_t1

0x7ed2,	// (0x00036915) list_double_cale_preview_pane_g1

0x7eda,	// (0x0003691d) list_double_cale_preview_pane_t1_ParamLimits

0x7eda,	// (0x0003691d) list_double_cale_preview_pane_t1

0x7eef,	// (0x00036932) list_double_cale_preview_pane_t2_ParamLimits

0x7eef,	// (0x00036932) list_double_cale_preview_pane_t2

0x0001,

0xfce7,	// (0x0003e72a) list_double_cale_preview_pane_t_ParamLimits

0xfce7,	// (0x0003e72a) list_double_cale_preview_pane_t

0x9bad,	// (0x000385f0) main_ezdial_pane

0xa27c,	// (0x00038cbf) main_sp_fs_email_pane_ParamLimits

0x766b,	// (0x000360ae) cmail_ddmenu_btn01_pane_ParamLimits

0x766b,	// (0x000360ae) cmail_ddmenu_btn01_pane

0x767e,	// (0x000360c1) cmail_ddmenu_btn02_pane_ParamLimits

0x767e,	// (0x000360c1) cmail_ddmenu_btn02_pane

0x76a1,	// (0x000360e4) cmail_ddmenu_btn03_pane_ParamLimits

0x76a1,	// (0x000360e4) cmail_ddmenu_btn03_pane

0x773f,	// (0x00036182) main_sp_fs_ctrlbar_pane_ParamLimits

0x7763,	// (0x000361a6) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7ab9,	// (0x000364fc) list_cmail_body_pane_ParamLimits

0xe11d,	// (0x0003cb60) bg_button_pane_cp12

0xe132,	// (0x0003cb75) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe132,	// (0x0003cb75) list_single_cmail_header_detail_pane_g3

0xe13f,	// (0x0003cb82) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe13f,	// (0x0003cb82) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc6a,	// (0x0003e6ad) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc6a,	// (0x0003e6ad) list_single_cmail_header_detail_pane_t

0xe235,	// (0x0003cc78) phacti_term_pane_t2_ParamLimits

0xe235,	// (0x0003cc78) phacti_term_pane_t2

0x0001,

0xfc74,	// (0x0003e6b7) phacti_term_pane_t_ParamLimits

0xfc74,	// (0x0003e6b7) phacti_term_pane_t

0xe4e5,	// (0x0003cf28) aid_size_list_single_double

0x7f07,	// (0x0003694a) popup_ezdial_listscroll_window

0x7f23,	// (0x00036966) popup_number_entry_window_cp01

0xa50a,	// (0x00038f4d) bg_popup_call_pane_cp09

0xe4f1,	// (0x0003cf34) ezdial_list_pane

0xe4f9,	// (0x0003cf3c) scroll_pane_cp23

0xaf7a,	// (0x000399bd) bg_button_pane_cp028_ParamLimits

0xaf7a,	// (0x000399bd) bg_button_pane_cp028

0x7f31,	// (0x00036974) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x7f31,	// (0x00036974) cmail_ddmenu_btn01_pane_g1

0x7f40,	// (0x00036983) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x7f40,	// (0x00036983) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcec,	// (0x0003e72f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcec,	// (0x0003e72f) cmail_ddmenu_btn01_pane_g

0xe501,	// (0x0003cf44) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe501,	// (0x0003cf44) cmail_ddmenu_btn01_pane_t1

0xaf7a,	// (0x000399bd) bg_button_pane_cp029_ParamLimits

0xaf7a,	// (0x000399bd) bg_button_pane_cp029

0x7f56,	// (0x00036999) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x7f56,	// (0x00036999) cmail_ddmenu_btn02_pane_g1

0x7f71,	// (0x000369b4) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x7f71,	// (0x000369b4) cmail_ddmenu_btn02_pane_t1

0xa27c,	// (0x00038cbf) bg_button_pane_cp031_ParamLimits

0xa27c,	// (0x00038cbf) bg_button_pane_cp031

0x7f56,	// (0x00036999) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x7f56,	// (0x00036999) cmail_ddmenu_btn03_pane_g1

0x7f71,	// (0x000369b4) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x7f71,	// (0x000369b4) cmail_ddmenu_btn03_pane_t1

0x5544,	// (0x00033f87) cell_dialer2_keypad_pane_t1_ParamLimits

0x555e,	// (0x00033fa1) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x555e,	// (0x00033fa1) cell_dialer2_keypad_pane_t1_copy1

0x6d04,	// (0x00035747) ncimui_group_button_pane

0xa27c,	// (0x00038cbf) main_sp_fs_calendar_pane_ParamLimits

0x7ad0,	// (0x00036513) list_single_cmail_header_caption_pane_ParamLimits

0xe280,	// (0x0003ccc3) aid_recal_txt_sm_pane

0x9bad,	// (0x000385f0) mian_recal_day_pane

0xe2c2,	// (0x0003cd05) popup_sp_fs_cale_preview_window_ParamLimits

0xe517,	// (0x0003cf5a) list_recal_day_pane

0xe55a,	// (0x0003cf9d) list_single_recal_day_pane_ParamLimits

0xe55a,	// (0x0003cf9d) list_single_recal_day_pane

0xe56c,	// (0x0003cfaf) list_single_recal_day_pane_g1_ParamLimits

0xe56c,	// (0x0003cfaf) list_single_recal_day_pane_g1

0xe578,	// (0x0003cfbb) list_single_recal_day_pane_g2_ParamLimits

0xe578,	// (0x0003cfbb) list_single_recal_day_pane_g2

0xe584,	// (0x0003cfc7) list_single_recal_day_pane_g3_ParamLimits

0xe584,	// (0x0003cfc7) list_single_recal_day_pane_g3

0x7f98,	// (0x000369db) list_single_recal_day_pane_g4_ParamLimits

0x7f98,	// (0x000369db) list_single_recal_day_pane_g4

0xe590,	// (0x0003cfd3) list_single_recal_day_pane_g5_ParamLimits

0xe590,	// (0x0003cfd3) list_single_recal_day_pane_g5

0xe59c,	// (0x0003cfdf) list_single_recal_day_pane_g6_ParamLimits

0xe59c,	// (0x0003cfdf) list_single_recal_day_pane_g6

0x0004,

0xfcfb,	// (0x0003e73e) list_single_recal_day_pane_g_ParamLimits

0xfcfb,	// (0x0003e73e) list_single_recal_day_pane_g

0xe5b0,	// (0x0003cff3) list_single_recal_day_pane_t1

0xe5c2,	// (0x0003d005) list_single_recal_day_pane_t2

0x0001,

0xfd06,	// (0x0003e749) list_single_recal_day_pane_t

0x7fb0,	// (0x000369f3) ncimui_query_button_pane_ParamLimits

0x7fb0,	// (0x000369f3) ncimui_query_button_pane

0x7fc0,	// (0x00036a03) ncimui_query_button_pane_t1_ParamLimits

0x7fc0,	// (0x00036a03) ncimui_query_button_pane_t1

0xe5d4,	// (0x0003d017) ncimui_query_button_pane_t2_ParamLimits

0xe5d4,	// (0x0003d017) ncimui_query_button_pane_t2

0x0001,

0xfd0b,	// (0x0003e74e) ncimui_query_button_pane_t_ParamLimits

0xfd0b,	// (0x0003e74e) ncimui_query_button_pane_t

0x7fd3,	// (0x00036a16) query_button_pane_ParamLimits

0x7fd3,	// (0x00036a16) query_button_pane

0x9bad,	// (0x000385f0) bg_button_pane_cp0028

0xe5e7,	// (0x0003d02a) query_button_pane_t1

0x01cb,	// (0x0002ec0e) main_tport_pane_ParamLimits

0x794c,	// (0x0003638f) bg_popup_window_pane_cp01_ParamLimits

0x794c,	// (0x0003638f) bg_popup_window_pane_cp01

0x7965,	// (0x000363a8) heading_pane_cp08_ParamLimits

0x7965,	// (0x000363a8) heading_pane_cp08

0x797b,	// (0x000363be) heading_pane_cp07_ParamLimits

0x797b,	// (0x000363be) heading_pane_cp07

0x7a52,	// (0x00036495) cell_tport_appsw_pane_g2

0x0002,

0xfc57,	// (0x0003e69a) cell_tport_appsw_pane_g

0x351b,	// (0x00031f5e) input_candi_list_open_g1

0xa93e,	// (0x00039381) list_cale_time_pane_g6_ParamLimits

0xa93e,	// (0x00039381) list_cale_time_pane_g6

0x44a8,	// (0x00032eeb) aid_size_touch_calib_1_ParamLimits

0x44a8,	// (0x00032eeb) aid_size_touch_calib_1

0x44ba,	// (0x00032efd) aid_size_touch_calib_2_ParamLimits

0x44ba,	// (0x00032efd) aid_size_touch_calib_2

0x44d2,	// (0x00032f15) aid_size_touch_calib_3_ParamLimits

0x44d2,	// (0x00032f15) aid_size_touch_calib_3

0x44f0,	// (0x00032f33) aid_size_touch_calib_4_ParamLimits

0x44f0,	// (0x00032f33) aid_size_touch_calib_4

0x4508,	// (0x00032f4b) main_touch_calib_button_group_pane_ParamLimits

0x4508,	// (0x00032f4b) main_touch_calib_button_group_pane

0x4520,	// (0x00032f63) main_touch_calib_pane_g1_ParamLimits

0x4532,	// (0x00032f75) main_touch_calib_pane_g2_ParamLimits

0x4544,	// (0x00032f87) main_touch_calib_pane_g3_ParamLimits

0x4556,	// (0x00032f99) main_touch_calib_pane_g4_ParamLimits

0xf699,	// (0x0003e0dc) main_touch_calib_pane_g_ParamLimits

0x4568,	// (0x00032fab) main_touch_calib_pane_t1_ParamLimits

0x4582,	// (0x00032fc5) main_touch_calib_pane_t2_ParamLimits

0x459c,	// (0x00032fdf) main_touch_calib_pane_t3_ParamLimits

0x45b0,	// (0x00032ff3) main_touch_calib_pane_t4_ParamLimits

0x45c6,	// (0x00033009) main_touch_calib_pane_t5_ParamLimits

0xf6a2,	// (0x0003e0e5) main_touch_calib_pane_t_ParamLimits

0xc921,	// (0x0003b364) list_single_fp_cale_pane_g3_ParamLimits

0xc921,	// (0x0003b364) list_single_fp_cale_pane_g3

0x12a2,	// (0x0002fce5) bg_button_pane_cp012_ParamLimits

0x12a2,	// (0x0002fce5) bg_vkb2_func_pane_cp03_ParamLimits

0x102c,	// (0x0002fa6f) cell_vitu2_function_top_pane_g1_ParamLimits

0x12a2,	// (0x0002fce5) bg_vkb2_func_pane_cp04_ParamLimits

0x6c8f,	// (0x000356d2) main_ncimui_button_group_pane_ParamLimits

0x6c8f,	// (0x000356d2) main_ncimui_button_group_pane

0x6cef,	// (0x00035732) main_ncimui_pane_t3_ParamLimits

0x6cef,	// (0x00035732) main_ncimui_pane_t3

0xe1e3,	// (0x0003cc26) phacti_button_group_pane

0xe4e5,	// (0x0003cf28) aid_size_list_single_double_ParamLimits

0x7f07,	// (0x0003694a) popup_ezdial_listscroll_window_ParamLimits

0x7f23,	// (0x00036966) popup_number_entry_window_cp01_ParamLimits

0x7fe6,	// (0x00036a29) phacti_button_pane_ParamLimits

0x7fe6,	// (0x00036a29) phacti_button_pane

0x9bad,	// (0x000385f0) bg_button_pane_cp14

0xe5f5,	// (0x0003d038) phacti_button_pane_t1

0x7ff7,	// (0x00036a3a) main_touch_calib_button_pane_ParamLimits

0x7ff7,	// (0x00036a3a) main_touch_calib_button_pane

0xa355,	// (0x00038d98) bg_button_pane_cp18_ParamLimits

0xa355,	// (0x00038d98) bg_button_pane_cp18

0xe603,	// (0x0003d046) main_touch_calib_button_pane_t1_ParamLimits

0xe603,	// (0x0003d046) main_touch_calib_button_pane_t1

0xe619,	// (0x0003d05c) main_touch_calib_button_pane_t2_ParamLimits

0xe619,	// (0x0003d05c) main_touch_calib_button_pane_t2

0x0001,

0xfd10,	// (0x0003e753) main_touch_calib_button_pane_t_ParamLimits

0xfd10,	// (0x0003e753) main_touch_calib_button_pane_t

0x9bad,	// (0x000385f0) cell_ncimui_button_pane

0x9bad,	// (0x000385f0) bg_button_pane_cp032

0xe637,	// (0x0003d07a) cell_ncimui_button_pane_t1

0x557b,	// (0x00033fbe) image3_infobar_pane_ParamLimits

0x557b,	// (0x00033fbe) image3_infobar_pane

0x7106,	// (0x00035b49) fs_bigclock_status_pane_ParamLimits

0x7106,	// (0x00035b49) fs_bigclock_status_pane

0x7113,	// (0x00035b56) main_fs_bigclock_clock_pane_ParamLimits

0x7113,	// (0x00035b56) main_fs_bigclock_clock_pane

0x7145,	// (0x00035b88) main_fs_bigclock_indi_pane_ParamLimits

0x7145,	// (0x00035b88) main_fs_bigclock_indi_pane

0x7185,	// (0x00035bc8) main_fs_bigclock_swipe_pane_ParamLimits

0x7185,	// (0x00035bc8) main_fs_bigclock_swipe_pane

0x9bad,	// (0x000385f0) main_fs_clock_dumped_data

0x71d1,	// (0x00035c14) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x71d1,	// (0x00035c14) list_single_fs_bigclock_indicator_pane_g1

0x71ea,	// (0x00035c2d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x71ea,	// (0x00035c2d) list_single_fs_bigclock_indicator_pane_g2

0x7204,	// (0x00035c47) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7204,	// (0x00035c47) list_single_fs_bigclock_indicator_pane_g3

0x721e,	// (0x00035c61) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x721e,	// (0x00035c61) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbb1,	// (0x0003e5f4) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbb1,	// (0x0003e5f4) list_single_fs_bigclock_indicator_pane_g

0x724d,	// (0x00035c90) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x724d,	// (0x00035c90) list_single_fs_bigclock_indicator_pane_t1

0x7275,	// (0x00035cb8) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x7275,	// (0x00035cb8) list_single_fs_bigclock_indicator_pane_t2

0x729d,	// (0x00035ce0) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x729d,	// (0x00035ce0) list_single_fs_bigclock_indicator_pane_t3

0x72c5,	// (0x00035d08) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x72c5,	// (0x00035d08) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbbc,	// (0x0003e5ff) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbbc,	// (0x0003e5ff) list_single_fs_bigclock_indicator_pane_t

0xe645,	// (0x0003d088) image3_infobar_fav_pane_ParamLimits

0xe645,	// (0x0003d088) image3_infobar_fav_pane

0xe655,	// (0x0003d098) image3_infobar_loc_pane_ParamLimits

0xe655,	// (0x0003d098) image3_infobar_loc_pane

0xe66b,	// (0x0003d0ae) image3_infobar_time_pane_ParamLimits

0xe66b,	// (0x0003d0ae) image3_infobar_time_pane

0xa540,	// (0x00038f83) image3_infobar_time_pane_g1

0xe67b,	// (0x0003d0be) image3_infobar_time_pane_t1

0xa540,	// (0x00038f83) image3_infobar_loc_pane_g1

0xe689,	// (0x0003d0cc) image3_infobar_loc_pane_g2

0x0001,

0xfd15,	// (0x0003e758) image3_infobar_loc_pane_g

0xe691,	// (0x0003d0d4) image3_infobar_loc_pane_t1

0xa540,	// (0x00038f83) image3_infobar_fav_pane_g1

0xe69f,	// (0x0003d0e2) image3_infobar_fav_pane_g2

0x0001,

0xfd1a,	// (0x0003e75d) image3_infobar_fav_pane_g

0xe6a7,	// (0x0003d0ea) fs_bigclock_status_battery_pane

0xe6b0,	// (0x0003d0f3) fs_bigclock_status_signal_pane

0xe6b9,	// (0x0003d0fc) fs_bigclock_status_title_pane

0xe6c2,	// (0x0003d105) fs_bigclock_status_signal_pane_g1

0xe6cb,	// (0x0003d10e) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd1f,	// (0x0003e762) fs_bigclock_status_signal_pane_g

0xe6d3,	// (0x0003d116) fs_bigclock_status_battery_pane_g1

0xe6dc,	// (0x0003d11f) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd24,	// (0x0003e767) fs_bigclock_status_battery_pane_g

0xe6e4,	// (0x0003d127) fs_bigclock_status_title_pane_t1

0x800c,	// (0x00036a4f) main_fs_bigclock_clock_pane_g1

0x800c,	// (0x00036a4f) main_fs_bigclock_clock_pane_g2

0x801f,	// (0x00036a62) main_fs_bigclock_clock_pane_g3

0x801f,	// (0x00036a62) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd29,	// (0x0003e76c) main_fs_bigclock_clock_pane_g

0x8036,	// (0x00036a79) main_fs_bigclock_clock_pane_t1

0x804c,	// (0x00036a8f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd32,	// (0x0003e775) main_fs_bigclock_clock_pane_t

0xe6f2,	// (0x0003d135) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe6f2,	// (0x0003d135) list_single_fs_bigclock_indicator_pane

0xe703,	// (0x0003d146) list_single_fs_bigclock_pane_ParamLimits

0xe703,	// (0x0003d146) list_single_fs_bigclock_pane

0xe729,	// (0x0003d16c) main_fs_bigclock_indicator_pane_t1

0xe738,	// (0x0003d17b) list_single_fs_bigclock_pane_g1

0xe740,	// (0x0003d183) list_single_fs_bigclock_pane_t1

0xa540,	// (0x00038f83) main_fs_bigclock_swipe_pane_g1

0xe783,	// (0x0003d1c6) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd43,	// (0x0003e786) main_fs_bigclock_swipe_pane_g

0xe78b,	// (0x0003d1ce) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe78b,	// (0x0003d1ce) main_fs_bigclock_swipe_pane_t1

0x2e57,	// (0x0003189a) call_type_pane_ParamLimits

0x9bad,	// (0x000385f0) main_btmg_pane

0xe3bf,	// (0x0003ce02) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe3bf,	// (0x0003ce02) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcb6,	// (0x0003e6f9) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcb6,	// (0x0003e6f9) list_single_cale_mrui_row_pane_g

0xe540,	// (0x0003cf83) list_recal_vselct_arw_lo_pane

0xe548,	// (0x0003cf8b) list_recal_vselct_arw_up_pane

0xe550,	// (0x0003cf93) list_recal_vselct_pane

0x80ae,	// (0x00036af1) btmg_button_pane

0x80b8,	// (0x00036afb) main_btmg_pane_g1

0x9bad,	// (0x000385f0) bg_button_pane_cp044

0xe7a8,	// (0x0003d1eb) btmg_button_pane_t1

0xc1e0,	// (0x0003ac23) aid_listscroll_gen

0xa27c,	// (0x00038cbf) main_cntbar_detail_pane

0xe0f0,	// (0x0003cb33) list_cmail_folder_pane

0xd06b,	// (0x0003baae) sp_fs_scroll_pane_cp03_ParamLimits

0xe7b6,	// (0x0003d1f9) list_single_fs_dyc_pane_cp01_ParamLimits

0xe7b6,	// (0x0003d1f9) list_single_fs_dyc_pane_cp01

0xe7d0,	// (0x0003d213) aid_size_cmail_indent

0xe7d9,	// (0x0003d21c) list_single_dyc_row_pane_cp01

0x80f6,	// (0x00036b39) cntbar_detail_list_pane_ParamLimits

0x80f6,	// (0x00036b39) cntbar_detail_list_pane

0x8148,	// (0x00036b8b) main_cntbar_detail_cont_pane_ParamLimits

0x8148,	// (0x00036b8b) main_cntbar_detail_cont_pane

0xd06b,	// (0x0003baae) scroll_pane_cp032_ParamLimits

0xd06b,	// (0x0003baae) scroll_pane_cp032

0x815c,	// (0x00036b9f) cntbar_detail_list_event_pane_ParamLimits

0x815c,	// (0x00036b9f) cntbar_detail_list_event_pane

0x8108,	// (0x00036b4b) cntbar_detail_list_shct_pane

0xa7b2,	// (0x000391f5) aid_list_gen

0xe7e2,	// (0x0003d225) aid_scroll

0xe7eb,	// (0x0003d22e) aid_size_touch_scroll_bar

0x745e,	// (0x00035ea1) aid_list_double

0x816c,	// (0x00036baf) aid_list_single

0x816c,	// (0x00036baf) aid_list_single_lg

0x8175,	// (0x00036bb8) aid_list_z_g_a_sm

0x817d,	// (0x00036bc0) aid_list_z_g_d

0x8185,	// (0x00036bc8) aid_txt_z_prm

0x8193,	// (0x00036bd6) aid_txt_z_prm_cp01

0x81a1,	// (0x00036be4) aid_txt_z_sec

0x81af,	// (0x00036bf2) main_cntbar_detail_cont_pane_g1_ParamLimits

0x81af,	// (0x00036bf2) main_cntbar_detail_cont_pane_g1

0x81c3,	// (0x00036c06) main_cntbar_detail_cont_pane_g2_ParamLimits

0x81c3,	// (0x00036c06) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd48,	// (0x0003e78b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd48,	// (0x0003e78b) main_cntbar_detail_cont_pane_g

0xe7f4,	// (0x0003d237) main_cntbar_detail_cont_pane_t1

0xe802,	// (0x0003d245) main_cntbar_detail_cont_pane_t2

0xe810,	// (0x0003d253) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd4d,	// (0x0003e790) main_cntbar_detail_cont_pane_t

0x81d3,	// (0x00036c16) cell_cntbar_detail_list_shct_pane_ParamLimits

0x81d3,	// (0x00036c16) cell_cntbar_detail_list_shct_pane

0xe81e,	// (0x0003d261) cntbar_detail_list_shct_pane_g1

0xe827,	// (0x0003d26a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd54,	// (0x0003e797) cntbar_detail_list_shct_pane_g

0x81e5,	// (0x00036c28) cntbar_detail_list_event_pane_g1_ParamLimits

0x81e5,	// (0x00036c28) cntbar_detail_list_event_pane_g1

0x81f1,	// (0x00036c34) cntbar_detail_list_event_pane_g2_ParamLimits

0x81f1,	// (0x00036c34) cntbar_detail_list_event_pane_g2

0x0005,

0xfd59,	// (0x0003e79c) cntbar_detail_list_event_pane_g_ParamLimits

0xfd59,	// (0x0003e79c) cntbar_detail_list_event_pane_g

0x825f,	// (0x00036ca2) cntbar_detail_list_event_pane_t1_ParamLimits

0x825f,	// (0x00036ca2) cntbar_detail_list_event_pane_t1

0x8274,	// (0x00036cb7) cntbar_detail_list_event_pane_t2_ParamLimits

0x8274,	// (0x00036cb7) cntbar_detail_list_event_pane_t2

0x0002,

0xfd66,	// (0x0003e7a9) cntbar_detail_list_event_pane_t_ParamLimits

0xfd66,	// (0x0003e7a9) cntbar_detail_list_event_pane_t

0xa540,	// (0x00038f83) cell_cntbar_detail_list_shct_pane_g1

0x3260,	// (0x00031ca3) navi_pane_mv_g3

0xa27c,	// (0x00038cbf) main_cntbar_detail_pane_ParamLimits

0x9bad,	// (0x000385f0) main_notif_wgt_pane

0x52c1,	// (0x00033d04) aid_tch_main_mp4_pane_g4

0x54c9,	// (0x00033f0c) popup_slider_window_cp02

0xe536,	// (0x0003cf79) list_recal_day_event_pane

0x80c2,	// (0x00036b05) cntbar_detail_btn_pane_ParamLimits

0x80c2,	// (0x00036b05) cntbar_detail_btn_pane

0x80db,	// (0x00036b1e) cntbar_detail_btn_pane_cp01_ParamLimits

0x80db,	// (0x00036b1e) cntbar_detail_btn_pane_cp01

0x8108,	// (0x00036b4b) cntbar_detail_list_shct_pane_ParamLimits

0x8118,	// (0x00036b5b) cntbar_detail_pane_g1_ParamLimits

0x8118,	// (0x00036b5b) cntbar_detail_pane_g1

0x812c,	// (0x00036b6f) cntbar_detail_pane_t1_ParamLimits

0x812c,	// (0x00036b6f) cntbar_detail_pane_t1

0x81fd,	// (0x00036c40) cntbar_detail_list_event_pane_g3_ParamLimits

0x81fd,	// (0x00036c40) cntbar_detail_list_event_pane_g3

0x8215,	// (0x00036c58) cntbar_detail_list_event_pane_g4_ParamLimits

0x8215,	// (0x00036c58) cntbar_detail_list_event_pane_g4

0x822d,	// (0x00036c70) cntbar_detail_list_event_pane_g5_ParamLimits

0x822d,	// (0x00036c70) cntbar_detail_list_event_pane_g5

0x8245,	// (0x00036c88) cntbar_detail_list_event_pane_g6_ParamLimits

0x8245,	// (0x00036c88) cntbar_detail_list_event_pane_g6

0x8289,	// (0x00036ccc) cntbar_detail_list_event_pane_t3_ParamLimits

0x8289,	// (0x00036ccc) cntbar_detail_list_event_pane_t3

0x829b,	// (0x00036cde) popup_notif_wgt_window_ParamLimits

0x829b,	// (0x00036cde) popup_notif_wgt_window

0x82b4,	// (0x00036cf7) popup_submenu_window_cp01_ParamLimits

0x82b4,	// (0x00036cf7) popup_submenu_window_cp01

0xa50a,	// (0x00038f4d) bg_popup_window_pane_cp10

0xe830,	// (0x0003d273) listscroll_notif_wgt_pane

0xe842,	// (0x0003d285) list_notif_wgt_window

0xe84b,	// (0x0003d28e) scroll_pane_cp033

0x82c8,	// (0x00036d0b) list_notif_wgt_row_pane_ParamLimits

0x82c8,	// (0x00036d0b) list_notif_wgt_row_pane

0xe854,	// (0x0003d297) aid_size_list_notif_wgt_del

0xe861,	// (0x0003d2a4) list_notif_wgt_row_pane_g1

0xe86d,	// (0x0003d2b0) list_notif_wgt_row_pane_g2

0xe87c,	// (0x0003d2bf) list_notif_wgt_row_pane_g3

0x0002,

0xfd6d,	// (0x0003e7b0) list_notif_wgt_row_pane_g

0xe889,	// (0x0003d2cc) list_notif_wgt_row_pane_t1

0xe89f,	// (0x0003d2e2) list_notif_wgt_row_pane_t2

0xe8b1,	// (0x0003d2f4) list_notif_wgt_row_pane_t3

0x0002,

0xfd74,	// (0x0003e7b7) list_notif_wgt_row_pane_t

0xd19a,	// (0x0003bbdd) list_recal_day_event_pane_g1

0xe8c3,	// (0x0003d306) list_recal_day_event_pane_t1

0x9bad,	// (0x000385f0) bg_button_pane_cp045

0x82d8,	// (0x00036d1b) cntbar_detail_btn_pane_t1

0xaf7a,	// (0x000399bd) main_callh_pane_ParamLimits

0xaf7a,	// (0x000399bd) main_callh_pane

0x9bad,	// (0x000385f0) main_coverflow0_pane

0x9bad,	// (0x000385f0) main_wgtman_pane

0x71a6,	// (0x00035be9) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x71a6,	// (0x00035be9) main_fs_bigclock_unlock_btn_pane

0x7a4a,	// (0x0003648d) bg_button_pane_cp16

0x7a5a,	// (0x0003649d) cell_tport_appsw_pane_g3

0x82e6,	// (0x00036d29) cf0_flow_pane_ParamLimits

0x82e6,	// (0x00036d29) cf0_flow_pane

0xe8d2,	// (0x0003d315) listscroll_cf0_pane

0xe8dd,	// (0x0003d320) main_cf0_pane_g1

0x82fb,	// (0x00036d3e) main_cf0_pane_t1_ParamLimits

0x82fb,	// (0x00036d3e) main_cf0_pane_t1

0x8312,	// (0x00036d55) main_cf0_pane_t2_ParamLimits

0x8312,	// (0x00036d55) main_cf0_pane_t2

0x0001,

0xfd80,	// (0x0003e7c3) main_cf0_pane_t_ParamLimits

0xfd80,	// (0x0003e7c3) main_cf0_pane_t

0xe8ef,	// (0x0003d332) scroll_pane_cp11

0x8329,	// (0x00036d6c) cf0_flow_pane_g1

0x8335,	// (0x00036d78) cf0_flow_pane_g2

0x0001,

0xfd85,	// (0x0003e7c8) cf0_flow_pane_g

0x8341,	// (0x00036d84) cf0_flow_pane_t1

0x9bad,	// (0x000385f0) main_call6_pane

0x9bad,	// (0x000385f0) main_calllock_pane

0x115f,	// (0x0002fba2) call6_btn_grp_pane_ParamLimits

0x115f,	// (0x0002fba2) call6_btn_grp_pane

0x1179,	// (0x0002fbbc) call6_pane_g1_ParamLimits

0x1179,	// (0x0002fbbc) call6_pane_g1

0x1192,	// (0x0002fbd5) popup_call6_1st_window_ParamLimits

0x1192,	// (0x0002fbd5) popup_call6_1st_window

0x11a6,	// (0x0002fbe9) popup_call6_2nd_window_ParamLimits

0x11a6,	// (0x0002fbe9) popup_call6_2nd_window

0x11ba,	// (0x0002fbfd) cell_call6_btn_pane_ParamLimits

0x11ba,	// (0x0002fbfd) cell_call6_btn_pane

0xa50a,	// (0x00038f4d) bg_popup_call2_in_pane_cp03

0xe8fa,	// (0x0003d33d) popup_call6_1st_window_g1

0xe902,	// (0x0003d345) popup_call6_1st_window_g2

0xe90a,	// (0x0003d34d) popup_call6_1st_window_g3

0x0002,

0xfd8a,	// (0x0003e7cd) popup_call6_1st_window_g

0xe912,	// (0x0003d355) popup_call6_1st_window_t1

0xe921,	// (0x0003d364) popup_call6_1st_window_t2

0xe931,	// (0x0003d374) popup_call6_1st_window_t3

0x0002,

0xfd91,	// (0x0003e7d4) popup_call6_1st_window_t

0xa50a,	// (0x00038f4d) bg_popup_call2_in_pane_cp04

0xe941,	// (0x0003d384) popup_call6_2nd_window_g1

0xe949,	// (0x0003d38c) popup_call6_2nd_window_g2

0xe951,	// (0x0003d394) popup_call6_2nd_window_g3

0x0002,

0xfd98,	// (0x0003e7db) popup_call6_2nd_window_g

0xe959,	// (0x0003d39c) popup_call6_2nd_window_t1

0x12bc,	// (0x0002fcff) bg_button_pane_cp15

0xad21,	// (0x00039764) cell_call6_btn_pane_g1

0xad2a,	// (0x0003976d) cell_call6_btn_pane_t1

0x8353,	// (0x00036d96) listscroll_wgtman_pane_ParamLimits

0x8353,	// (0x00036d96) listscroll_wgtman_pane

0x8374,	// (0x00036db7) wgtman_btn_pane_ParamLimits

0x8374,	// (0x00036db7) wgtman_btn_pane

0xad53,	// (0x00039796) aid_scroll_copy1

0xe968,	// (0x0003d3ab) list_wgtman_pane

0x83b7,	// (0x00036dfa) wgtman_btn_pane_g1_ParamLimits

0x83b7,	// (0x00036dfa) wgtman_btn_pane_g1

0x83e3,	// (0x00036e26) wgtman_btn_pane_t1_ParamLimits

0x83e3,	// (0x00036e26) wgtman_btn_pane_t1

0xe972,	// (0x0003d3b5) wgtman_btn_pane_t2_ParamLimits

0xe972,	// (0x0003d3b5) wgtman_btn_pane_t2

0x0001,

0xfd9f,	// (0x0003e7e2) wgtman_btn_pane_t_ParamLimits

0xfd9f,	// (0x0003e7e2) wgtman_btn_pane_t

0x8420,	// (0x00036e63) listrow_wgtman_pane_ParamLimits

0x8420,	// (0x00036e63) listrow_wgtman_pane

0x8434,	// (0x00036e77) listrow_wgtman_pane_g1

0x8441,	// (0x00036e84) listrow_wgtman_pane_g2

0x0001,

0xfda4,	// (0x0003e7e7) listrow_wgtman_pane_g

0x845f,	// (0x00036ea2) listrow_wgtman_pane_t1

0x8477,	// (0x00036eba) listrow_wgtman_pane_t2

0x0001,

0xfda9,	// (0x0003e7ec) listrow_wgtman_pane_t

0x849d,	// (0x00036ee0) wait_bar_pane_cp09

0xe989,	// (0x0003d3cc) main_calllock_btn_pane

0xe993,	// (0x0003d3d6) main_calllock_pane_g1

0x9bad,	// (0x000385f0) bg_button_pane_cp17

0xe99f,	// (0x0003d3e2) main_calllock_btn_pane_g1

0xe9a8,	// (0x0003d3eb) main_calllock_btn_pane_t1

0x9bad,	// (0x000385f0) main_dialer3_pane

0x9bad,	// (0x000385f0) main_fmrd2_pane

0xa540,	// (0x00038f83) main_fs_bigclock_unlock_btn_pane_g1

0x84b7,	// (0x00036efa) main_fs_bigclock_unlock_btn_pane_t1

0x84c5,	// (0x00036f08) area_fmrd2_info_pane_ParamLimits

0x84c5,	// (0x00036f08) area_fmrd2_info_pane

0x84d6,	// (0x00036f19) area_fmrd2_visual_pane_ParamLimits

0x84d6,	// (0x00036f19) area_fmrd2_visual_pane

0x84e4,	// (0x00036f27) fmrd2_indi_pane_ParamLimits

0x84e4,	// (0x00036f27) fmrd2_indi_pane

0x84f1,	// (0x00036f34) area_fmrd2_visual_pane_g1

0x84f9,	// (0x00036f3c) area_fmrd2_visual_pane_t1

0x8509,	// (0x00036f4c) area_fmrd2_visual_pane_t2

0x8519,	// (0x00036f5c) area_fmrd2_visual_pane_t3

0x0002,

0xfdb3,	// (0x0003e7f6) area_fmrd2_visual_pane_t

0x8529,	// (0x00036f6c) area_fmrd2_info_pane_g1

0x8531,	// (0x00036f74) area_fmrd2_info_pane_t1

0x8541,	// (0x00036f84) area_fmrd2_info_pane_t2

0x8551,	// (0x00036f94) area_fmrd2_info_pane_t3

0x8561,	// (0x00036fa4) area_fmrd2_info_pane_t4

0x0003,

0xfdba,	// (0x0003e7fd) area_fmrd2_info_pane_t

0x8571,	// (0x00036fb4) fmrd2_indi_pane_t1

0x8581,	// (0x00036fc4) fmrd2_indi_pane_t2

0x8591,	// (0x00036fd4) fmrd2_indi_pane_t3

0x0002,

0xfdc3,	// (0x0003e806) fmrd2_indi_pane_t

0x722f,	// (0x00035c72) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x722f,	// (0x00035c72) list_single_fs_bigclock_indicator_pane_g5

0x72e4,	// (0x00035d27) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x72e4,	// (0x00035d27) list_single_fs_bigclock_indicator_pane_t5

0x7c44,	// (0x00036687) aid_cell_bcale_month_pane_ParamLimits

0x7c44,	// (0x00036687) aid_cell_bcale_month_pane

0x7c62,	// (0x000366a5) bcale_month_pane_ParamLimits

0x7c62,	// (0x000366a5) bcale_month_pane

0x7c86,	// (0x000366c9) bcale_preview_pane_ParamLimits

0x7c86,	// (0x000366c9) bcale_preview_pane

0xe740,	// (0x0003d183) list_single_fs_bigclock_pane_t1_ParamLimits

0xe75f,	// (0x0003d1a2) list_single_fs_bigclock_pane_t2_ParamLimits

0xe75f,	// (0x0003d1a2) list_single_fs_bigclock_pane_t2

0x0001,

0xfd3e,	// (0x0003e781) list_single_fs_bigclock_pane_t_ParamLimits

0xfd3e,	// (0x0003e781) list_single_fs_bigclock_pane_t

0x84af,	// (0x00036ef2) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdae,	// (0x0003e7f1) main_fs_bigclock_unlock_btn_pane_g

0x85a1,	// (0x00036fe4) aid_dia3_key_size_ParamLimits

0x85a1,	// (0x00036fe4) aid_dia3_key_size

0x85b5,	// (0x00036ff8) aid_dia3_listrow_size_ParamLimits

0x85b5,	// (0x00036ff8) aid_dia3_listrow_size

0x85cf,	// (0x00037012) dia3_keypad_fun_pane_ParamLimits

0x85cf,	// (0x00037012) dia3_keypad_fun_pane

0x85e9,	// (0x0003702c) dia3_keypad_num_pane_ParamLimits

0x85e9,	// (0x0003702c) dia3_keypad_num_pane

0x8603,	// (0x00037046) dia3_listscroll_pane_ParamLimits

0x8603,	// (0x00037046) dia3_listscroll_pane

0x8619,	// (0x0003705c) dia3_numentry_pane_ParamLimits

0x8619,	// (0x0003705c) dia3_numentry_pane

0xe9b7,	// (0x0003d3fa) dia3_list_pane

0x8633,	// (0x00037076) scroll_pane_cp12

0x9bad,	// (0x000385f0) bg_dia3_numentry_pane

0x863e,	// (0x00037081) dia3_numentry_pane_t1

0x864d,	// (0x00037090) cell_dia3_key_num_pane

0x8655,	// (0x00037098) cell_dia3_key0_fun_pane_ParamLimits

0x8655,	// (0x00037098) cell_dia3_key0_fun_pane

0x8669,	// (0x000370ac) cell_dia3_key1_fun_pane_ParamLimits

0x8669,	// (0x000370ac) cell_dia3_key1_fun_pane

0x867e,	// (0x000370c1) dia3_listrow_pane

0xdb1c,	// (0x0003c55f) bg_dia3_numentry_pane_g1

0x9bad,	// (0x000385f0) bg_button_pane_cp21

0x8690,	// (0x000370d3) cell_dia3_key_num_pane_t1

0x869e,	// (0x000370e1) cell_dia3_key_num_pane_t2

0x869e,	// (0x000370e1) cell_dia3_key_num_pane_t3

0x869e,	// (0x000370e1) cell_dia3_key_num_pane_t4

0x0003,

0xfdca,	// (0x0003e80d) cell_dia3_key_num_pane_t

0x9bad,	// (0x000385f0) bg_button_pane_cp19

0x86ad,	// (0x000370f0) cell_dia3_key0_fun_pane_g1

0x9bad,	// (0x000385f0) bg_button_pane_cp20

0x86b5,	// (0x000370f8) cell_dia3_key1_fun_pane_g1

0x86bd,	// (0x00037100) area_left_week_number_pane

0x86cb,	// (0x0003710e) area_top_day_name_pane

0x86de,	// (0x00037121) frame_month_view_pane

0xe9c2,	// (0x0003d405) grid_month_view_pane

0x86f3,	// (0x00037136) cell_top_day_name_pane_ParamLimits

0x86f3,	// (0x00037136) cell_top_day_name_pane

0x8722,	// (0x00037165) cell_area_left_week_number_pane_ParamLimits

0x8722,	// (0x00037165) cell_area_left_week_number_pane

0x8738,	// (0x0003717b) cell_month_view_pane_ParamLimits

0x8738,	// (0x0003717b) cell_month_view_pane

0xe9d0,	// (0x0003d413) frm_month_g1

0x8769,	// (0x000371ac) frm_month_g2

0x877c,	// (0x000371bf) frm_month_g3

0x878f,	// (0x000371d2) frm_month_g4

0x87a2,	// (0x000371e5) frm_month_g5

0x87b5,	// (0x000371f8) frm_month_g6

0x87ca,	// (0x0003720d) frm_month_g7

0xe9dd,	// (0x0003d420) frm_month_g8

0x87df,	// (0x00037222) frm_month_g9

0x87ef,	// (0x00037232) frm_month_g10

0x87ff,	// (0x00037242) frm_month_g11

0x880f,	// (0x00037252) frm_month_g12

0x8821,	// (0x00037264) frm_month_g13

0x8835,	// (0x00037278) frm_month_g14

0x8849,	// (0x0003728c) frm_month_g15

0x885d,	// (0x000372a0) frm_month_g16

0x000f,

0xfdd3,	// (0x0003e816) frm_month_g

0xe9ea,	// (0x0003d42d) cell_top_day_name_pane_t1

0x8871,	// (0x000372b4) cell_area_left_week_number_pane_g1

0x887d,	// (0x000372c0) cell_area_left_week_number_pane_t1

0xa2e3,	// (0x00038d26) cell_month_view_pane_g1

0x8890,	// (0x000372d3) cell_month_view_pane_t1

0x9bad,	// (0x000385f0) main_fps_pane

0xdf3d,	// (0x0003c980) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdf3d,	// (0x0003c980) cmail_ddmenu_btn02_pane_cp1

0xdf59,	// (0x0003c99c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdf59,	// (0x0003c99c) cmail_ddmenu_btn02_pane_cp2

0x7f65,	// (0x000369a8) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x7f65,	// (0x000369a8) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcf1,	// (0x0003e734) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcf1,	// (0x0003e734) cmail_ddmenu_btn02_pane_g

0x7f86,	// (0x000369c9) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x7f86,	// (0x000369c9) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcf6,	// (0x0003e739) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcf6,	// (0x0003e739) cmail_ddmenu_btn02_pane_t

0x88a3,	// (0x000372e6) fps_text_pane_ParamLimits

0x88a3,	// (0x000372e6) fps_text_pane

0x88ba,	// (0x000372fd) main_fps_pane_g1_ParamLimits

0x88ba,	// (0x000372fd) main_fps_pane_g1

0x88d2,	// (0x00037315) wait_bar_pane_cp010_ParamLimits

0x88d2,	// (0x00037315) wait_bar_pane_cp010

0x88e5,	// (0x00037328) fps_text_pane_t1_ParamLimits

0x88e5,	// (0x00037328) fps_text_pane_t1

0xd081,	// (0x0003bac4) cam4_image_uncrop_pane_g1

0xd08a,	// (0x0003bacd) cam4_image_uncrop_pane_g2

0x56f1,	// (0x00034134) cam4_image_uncrop_pane_g3

0x56fa,	// (0x0003413d) cam4_image_uncrop_pane_g4

0x0003,

0xf835,	// (0x0003e278) cam4_image_uncrop_pane_g

0x867e,	// (0x000370c1) dia3_listrow_pane_ParamLimits

0x9bad,	// (0x000385f0) main_phob2_pane

0x79f4,	// (0x00036437) cell_tport_appsw_pane_cp02_ParamLimits

0x79f4,	// (0x00036437) cell_tport_appsw_pane_cp02

0x7a08,	// (0x0003644b) cell_tport_appsw_pane_cp03_ParamLimits

0x7a08,	// (0x0003644b) cell_tport_appsw_pane_cp03

0x9bad,	// (0x000385f0) phob2_contact_card_pane

0x9bad,	// (0x000385f0) phob2_listscroll_pane

0xe9fd,	// (0x0003d440) phob2_list_pane

0xea05,	// (0x0003d448) scroll_pane_cp034

0x88fd,	// (0x00037340) phob2_cc_data_pane_ParamLimits

0x88fd,	// (0x00037340) phob2_cc_data_pane

0x8916,	// (0x00037359) phob2_cc_listscroll_pane_ParamLimits

0x8916,	// (0x00037359) phob2_cc_listscroll_pane

0x8937,	// (0x0003737a) list_double_large_graphic_phob2_pane_ParamLimits

0x8937,	// (0x0003737a) list_double_large_graphic_phob2_pane

0x894b,	// (0x0003738e) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x894b,	// (0x0003738e) list_double_large_graphic_phob2_pane_g1

0x8958,	// (0x0003739b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8958,	// (0x0003739b) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdf4,	// (0x0003e837) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdf4,	// (0x0003e837) list_double_large_graphic_phob2_pane_g

0x897e,	// (0x000373c1) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x897e,	// (0x000373c1) list_double_large_graphic_phob2_pane_t1

0x8993,	// (0x000373d6) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8993,	// (0x000373d6) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdfd,	// (0x0003e840) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdfd,	// (0x0003e840) list_double_large_graphic_phob2_pane_t

0x9bad,	// (0x000385f0) list_highlight_pane_cp024

0x89a8,	// (0x000373eb) phob2_cc_button_pane

0x89b4,	// (0x000373f7) phob2_cc_data_pane_g1_ParamLimits

0x89b4,	// (0x000373f7) phob2_cc_data_pane_g1

0x89ca,	// (0x0003740d) phob2_cc_data_pane_g2_ParamLimits

0x89ca,	// (0x0003740d) phob2_cc_data_pane_g2

0x0001,

0xfe02,	// (0x0003e845) phob2_cc_data_pane_g_ParamLimits

0xfe02,	// (0x0003e845) phob2_cc_data_pane_g

0x89e2,	// (0x00037425) phob2_cc_data_pane_t1_ParamLimits

0x89e2,	// (0x00037425) phob2_cc_data_pane_t1

0x8a12,	// (0x00037455) phob2_cc_data_pane_t2_ParamLimits

0x8a12,	// (0x00037455) phob2_cc_data_pane_t2

0x8a42,	// (0x00037485) phob2_cc_data_pane_t3_ParamLimits

0x8a42,	// (0x00037485) phob2_cc_data_pane_t3

0x0002,

0xfe07,	// (0x0003e84a) phob2_cc_data_pane_t_ParamLimits

0xfe07,	// (0x0003e84a) phob2_cc_data_pane_t

0xea0d,	// (0x0003d450) phob2_cc_list_pane_ParamLimits

0xea0d,	// (0x0003d450) phob2_cc_list_pane

0xd231,	// (0x0003bc74) scroll_pane_cp035_ParamLimits

0xd231,	// (0x0003bc74) scroll_pane_cp035

0xa27c,	// (0x00038cbf) bg_button_pane_cp033

0x8a72,	// (0x000374b5) phob2_cc_button_pane_g1

0x8a7e,	// (0x000374c1) phob2_cc_button_pane_t1

0x8a93,	// (0x000374d6) phob2_cc_button_pane_t2

0x0001,

0xfe0e,	// (0x0003e851) phob2_cc_button_pane_t

0x8aa5,	// (0x000374e8) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8aa5,	// (0x000374e8) list_double_large_graphic_phob2_cc_pane

0x8adc,	// (0x0003751f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8adc,	// (0x0003751f) list_double_large_graphic_phob2_cc_pane_g1

0x8ae8,	// (0x0003752b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x8ae8,	// (0x0003752b) list_double_large_graphic_phob2_cc_pane_g2

0x8af4,	// (0x00037537) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x8af4,	// (0x00037537) list_double_large_graphic_phob2_cc_pane_g3

0x8b00,	// (0x00037543) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x8b00,	// (0x00037543) list_double_large_graphic_phob2_cc_pane_g4

0x8b0c,	// (0x0003754f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x8b0c,	// (0x0003754f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe13,	// (0x0003e856) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe13,	// (0x0003e856) list_double_large_graphic_phob2_cc_pane_g

0x8b18,	// (0x0003755b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x8b18,	// (0x0003755b) list_double_large_graphic_phob2_cc_pane_t1

0x8b41,	// (0x00037584) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8b41,	// (0x00037584) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe1e,	// (0x0003e861) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe1e,	// (0x0003e861) list_double_large_graphic_phob2_cc_pane_t

0xea19,	// (0x0003d45c) list_highlight_pane_cp025_ParamLimits

0xea19,	// (0x0003d45c) list_highlight_pane_cp025

0xa27c,	// (0x00038cbf) bg_button_pane_cp033_ParamLimits

0x8a72,	// (0x000374b5) phob2_cc_button_pane_g1_ParamLimits

0x8a7e,	// (0x000374c1) phob2_cc_button_pane_t1_ParamLimits

0x8a93,	// (0x000374d6) phob2_cc_button_pane_t2_ParamLimits

0xfe0e,	// (0x0003e851) phob2_cc_button_pane_t_ParamLimits

0x12b0,	// (0x0002fcf3) popup_wgtman_window

0xd024,	// (0x0003ba67) scroll_pane_cp038

0x8399,	// (0x00036ddc) wgtman_btn_pane_cp_01_ParamLimits

0x8399,	// (0x00036ddc) wgtman_btn_pane_cp_01

0xea27,	// (0x0003d46a) wgtman_content_pane

0xea30,	// (0x0003d473) wgtman_heading_pane

0x9bad,	// (0x000385f0) bg_heading_pane_cp02

0xea39,	// (0x0003d47c) wgtman_heading_pane_g1

0xea41,	// (0x0003d484) wgtman_heading_pane_t1

0xea4f,	// (0x0003d492) scroll_pane_cp036

0xea57,	// (0x0003d49a) wgtman_list_pane

0xde30,	// (0x0003c873) wgtman_list_pane_t1_ParamLimits

0xde30,	// (0x0003c873) wgtman_list_pane_t1

0x56db,	// (0x0003411e) cam4_grid_pane

0x6037,	// (0x00034a7a) bg_button_pane_cp015_ParamLimits

0x604e,	// (0x00034a91) bg_button_pane_cp016_ParamLimits

0x605a,	// (0x00034a9d) bg_button_pane_cp017_ParamLimits

0x60b5,	// (0x00034af8) popup_vitu2_query_window_g3_ParamLimits

0x60b5,	// (0x00034af8) popup_vitu2_query_window_g3

0x6158,	// (0x00034b9b) popup_vitu2_query_window_t6_ParamLimits

0x6158,	// (0x00034b9b) popup_vitu2_query_window_t6

0x6183,	// (0x00034bc6) popup_vitu2_query_window_t7_ParamLimits

0x6183,	// (0x00034bc6) popup_vitu2_query_window_t7

0xd081,	// (0x0003bac4) cam4_grid_pane_g1

0xd08a,	// (0x0003bacd) cam4_grid_pane_g2

0xea5f,	// (0x0003d4a2) cam4_grid_pane_g3

0xea68,	// (0x0003d4ab) cam4_grid_pane_g4

0x0003,

0xfe23,	// (0x0003e866) cam4_grid_pane_g

0x1d00,	// (0x00030743) aid_placing_vt_slider_lsc_ParamLimits

0x1fed,	// (0x00030a30) vidtel_button_pane_ParamLimits

0x1fed,	// (0x00030a30) vidtel_button_pane

0x9bad,	// (0x000385f0) bg_button_pane_cp034

0xea73,	// (0x0003d4b6) vidtel_button_pane_g1

0xea7b,	// (0x0003d4be) vidtel_button_pane_t1

0xd178,	// (0x0003bbbb) aid_size_vtel_slider_touch

0xd231,	// (0x0003bc74) scroll_pane_cp039

0x6e6d,	// (0x000358b0) ncim_query_button_pane_cp01_ParamLimits

0x6e8c,	// (0x000358cf) ncimui_query_pane_g1_ParamLimits

0xa27c,	// (0x00038cbf) input_focus_pane_cp012_ParamLimits

0xdb5a,	// (0x0003c59d) ncim_query_entry_pane_t1_ParamLimits

0xd231,	// (0x0003bc74) scroll_pane_cp039_ParamLimits

0x31d2,	// (0x00031c15) navi_pane_bcale_mc_g1

0x31da,	// (0x00031c1d) navi_pane_bcale_mc_t1

0xdf8f,	// (0x0003c9d2) main_sp_fs_email_pane_g1

0xdf9b,	// (0x0003c9de) main_sp_fs_email_pane_g2

0x0001,

0xfc26,	// (0x0003e669) main_sp_fs_email_pane_g

0xe3cb,	// (0x0003ce0e) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe3cb,	// (0x0003ce0e) list_single_cale_mrui_row_pane_g3

0x7fa6,	// (0x000369e9) list_single_recal_day_pane_g5_event_pane

0xe5a8,	// (0x0003cfeb) list_single_recal_day_pane_g7

0xea91,	// (0x0003d4d4) list_recal_day_event_pane_cp01

0xea9a,	// (0x0003d4dd) list_recal_vselct_arw_lo_pane_cp01

0xeaa2,	// (0x0003d4e5) list_recal_vselct_arw_up_pane_cp01

0xeaaa,	// (0x0003d4ed) list_recal_vselct_pane_cp01

0xd19a,	// (0x0003bbdd) list_recal_day_event_pane_cp01_g1

0xeab4,	// (0x0003d4f7) list_recal_day_event_pane_cp01_t1

0xe5b0,	// (0x0003cff3) list_single_recal_day_pane_t1_ParamLimits

0xe5c2,	// (0x0003d005) list_single_recal_day_pane_t2_ParamLimits

0xfd06,	// (0x0003e749) list_single_recal_day_pane_t_ParamLimits

0xa25a,	// (0x00038c9d) bg_notes_pane_ParamLimits

0xa333,	// (0x00038d76) list_notes_pane_ParamLimits

0x13b0,	// (0x0002fdf3) scroll_pane_cp06_ParamLimits

0xa355,	// (0x00038d98) main_notes_pane_ParamLimits

0xa27c,	// (0x00038cbf) main_welc_pane

0x8b97,	// (0x000375da) main_welc_body_pane_ParamLimits

0x8b97,	// (0x000375da) main_welc_body_pane

0x8bb6,	// (0x000375f9) main_welc_opti_pane_ParamLimits

0x8bb6,	// (0x000375f9) main_welc_opti_pane

0x8c36,	// (0x00037679) main_welc_pane_t1_ParamLimits

0x8c36,	// (0x00037679) main_welc_pane_t1

0x8e3e,	// (0x00037881) main_welc_body_row_pane_ParamLimits

0x8e3e,	// (0x00037881) main_welc_body_row_pane

0xa2d5,	// (0x00038d18) main_welc_opti_row_pane_ParamLimits

0xa2d5,	// (0x00038d18) main_welc_opti_row_pane

0xead2,	// (0x0003d515) main_welc_opti_row_pane_g1

0x8e52,	// (0x00037895) main_welc_opti_row_pane_t1

0xeada,	// (0x0003d51d) main_welc_body_row_pane_t1

0xe83a,	// (0x0003d27d) popup_notif_wgt_heading_pane

0xe854,	// (0x0003d297) aid_size_list_notif_wgt_del_ParamLimits

0xe861,	// (0x0003d2a4) list_notif_wgt_row_pane_g1_ParamLimits

0xe86d,	// (0x0003d2b0) list_notif_wgt_row_pane_g2_ParamLimits

0xe87c,	// (0x0003d2bf) list_notif_wgt_row_pane_g3_ParamLimits

0xfd6d,	// (0x0003e7b0) list_notif_wgt_row_pane_g_ParamLimits

0xe889,	// (0x0003d2cc) list_notif_wgt_row_pane_t1_ParamLimits

0xe89f,	// (0x0003d2e2) list_notif_wgt_row_pane_t2_ParamLimits

0xe8b1,	// (0x0003d2f4) list_notif_wgt_row_pane_t3_ParamLimits

0xfd74,	// (0x0003e7b7) list_notif_wgt_row_pane_t_ParamLimits

0x8434,	// (0x00036e77) listrow_wgtman_pane_g1_ParamLimits

0x8441,	// (0x00036e84) listrow_wgtman_pane_g2_ParamLimits

0xfda4,	// (0x0003e7e7) listrow_wgtman_pane_g_ParamLimits

0x845f,	// (0x00036ea2) listrow_wgtman_pane_t1_ParamLimits

0x8477,	// (0x00036eba) listrow_wgtman_pane_t2_ParamLimits

0xfda9,	// (0x0003e7ec) listrow_wgtman_pane_t_ParamLimits

0x849d,	// (0x00036ee0) wait_bar_pane_cp09_ParamLimits

0x9bad,	// (0x000385f0) bg_popup_heading_pane_cp02

0xeae9,	// (0x0003d52c) popup_notif_wgt_heading_pane_g1

0xeaf1,	// (0x0003d534) popup_notif_wgt_heading_pane_t1

0x9bad,	// (0x000385f0) main_vids_pane

0x9bad,	// (0x000385f0) vids_listscroll_pane

0x8e61,	// (0x000378a4) scroll_pane_cp040

0x9bad,	// (0x000385f0) vids_list_pane

0x8e6c,	// (0x000378af) vids_list_double_pane_ParamLimits

0x8e6c,	// (0x000378af) vids_list_double_pane

0x8e7f,	// (0x000378c2) vids_list_double_pane_g1

0x8e88,	// (0x000378cb) vids_list_double_pane_t1

0x8e98,	// (0x000378db) vids_list_double_pane_t2

0x0001,

0xfe42,	// (0x0003e885) vids_list_double_pane_t

0x12a2,	// (0x0002fce5) main_ncimui_pane_ParamLimits

0x6ca3,	// (0x000356e6) main_ncimui_pane_g1_ParamLimits

0x6caf,	// (0x000356f2) main_ncimui_pane_g2_ParamLimits

0x6caf,	// (0x000356f2) main_ncimui_pane_g2

0x0001,

0xfb27,	// (0x0003e56a) main_ncimui_pane_g_ParamLimits

0xfb27,	// (0x0003e56a) main_ncimui_pane_g

0x8bd5,	// (0x00037618) main_welc_pane_g1_ParamLimits

0x8bd5,	// (0x00037618) main_welc_pane_g1

0x8bea,	// (0x0003762d) main_welc_pane_g2_ParamLimits

0x8bea,	// (0x0003762d) main_welc_pane_g2

0x0003,

0xfe2c,	// (0x0003e86f) main_welc_pane_g_ParamLimits

0xfe2c,	// (0x0003e86f) main_welc_pane_g

0xa25a,	// (0x00038c9d) listscroll_mce_pane_ParamLimits

0x32b2,	// (0x00031cf5) wait_bar_pane_cp10

0xc1e8,	// (0x0003ac2b) main_cale_day_pane_ParamLimits

0xc1e8,	// (0x0003ac2b) main_cale_week_pane_ParamLimits

0xa25a,	// (0x00038c9d) main_messa_pane_ParamLimits

0x4e3b,	// (0x0003387e) main_clock2_btn_pane_ParamLimits

0x4e3b,	// (0x0003387e) main_clock2_btn_pane

0xc99b,	// (0x0003b3de) main_clock2_btn_pane_cp01_ParamLimits

0xc99b,	// (0x0003b3de) main_clock2_btn_pane_cp01

0xe357,	// (0x0003cd9a) list_cale_mrui_pane_ParamLimits

0xe8e7,	// (0x0003d32a) main_cf0_pane_g2

0x0001,

0xfd7b,	// (0x0003e7be) main_cf0_pane_g

0x86bd,	// (0x00037100) area_left_week_number_pane_ParamLimits

0x86cb,	// (0x0003710e) area_top_day_name_pane_ParamLimits

0x86de,	// (0x00037121) frame_month_view_pane_ParamLimits

0xe9c2,	// (0x0003d405) grid_month_view_pane_ParamLimits

0xe9d0,	// (0x0003d413) frm_month_g1_ParamLimits

0x8769,	// (0x000371ac) frm_month_g2_ParamLimits

0x877c,	// (0x000371bf) frm_month_g3_ParamLimits

0x878f,	// (0x000371d2) frm_month_g4_ParamLimits

0x87a2,	// (0x000371e5) frm_month_g5_ParamLimits

0x87b5,	// (0x000371f8) frm_month_g6_ParamLimits

0x87ca,	// (0x0003720d) frm_month_g7_ParamLimits

0xe9dd,	// (0x0003d420) frm_month_g8_ParamLimits

0x87df,	// (0x00037222) frm_month_g9_ParamLimits

0x87ef,	// (0x00037232) frm_month_g10_ParamLimits

0x87ff,	// (0x00037242) frm_month_g11_ParamLimits

0x880f,	// (0x00037252) frm_month_g12_ParamLimits

0x8821,	// (0x00037264) frm_month_g13_ParamLimits

0x8835,	// (0x00037278) frm_month_g14_ParamLimits

0x8849,	// (0x0003728c) frm_month_g15_ParamLimits

0x885d,	// (0x000372a0) frm_month_g16_ParamLimits

0xfdd3,	// (0x0003e816) frm_month_g_ParamLimits

0xe9ea,	// (0x0003d42d) cell_top_day_name_pane_t1_ParamLimits

0x8871,	// (0x000372b4) cell_area_left_week_number_pane_g1_ParamLimits

0x887d,	// (0x000372c0) cell_area_left_week_number_pane_t1_ParamLimits

0xa2e3,	// (0x00038d26) cell_month_view_pane_g1_ParamLimits

0x8890,	// (0x000372d3) cell_month_view_pane_t1_ParamLimits

0xa252,	// (0x00038c95) main_clock2_btn_pane_g1

0xeaff,	// (0x0003d542) main_clock2_btn_pane_t1

0xa27c,	// (0x00038cbf) listscroll_cmail_pane_ParamLimits

0xdf8f,	// (0x0003c9d2) main_sp_fs_email_pane_g1_ParamLimits

0xdf9b,	// (0x0003c9de) main_sp_fs_email_pane_g2_ParamLimits

0xfc26,	// (0x0003e669) main_sp_fs_email_pane_g_ParamLimits

0xe517,	// (0x0003cf5a) list_recal_day_pane_ParamLimits

0xe528,	// (0x0003cf6b) mian_recal_day_pane_t1

0x788d,	// (0x000362d0) list_single_dyc_row_text_pane_t4_ParamLimits

0x788d,	// (0x000362d0) list_single_dyc_row_text_pane_t4

0x78d6,	// (0x00036319) list_single_dyc_row_text_pane_t5_ParamLimits

0x78d6,	// (0x00036319) list_single_dyc_row_text_pane_t5

0xe045,	// (0x0003ca88) list_single_dyc_row_text_pane_t6_ParamLimits

0xe045,	// (0x0003ca88) list_single_dyc_row_text_pane_t6

0x2db2,	// (0x000317f5) aid_mgn_list_cale_time_pane

0x12a2,	// (0x0002fce5) main_gallery2_pane_ParamLimits

0xc9af,	// (0x0003b3f2) main_clock2_pane_cp01_t1

0xc9bd,	// (0x0003b400) main_clock2_pane_cp01_t3

0x0001,

0xf70c,	// (0x0003e14f) main_clock2_pane_cp01_t

0x179f,	// (0x000301e2) cale_week_scroll_pane_g16_ParamLimits

0x179f,	// (0x000301e2) cale_week_scroll_pane_g16

0xa50a,	// (0x00038f4d) vorec_slider_pane

0xea7b,	// (0x0003d4be) vidtel_button_pane_t1_ParamLimits

0x800c,	// (0x00036a4f) main_fs_bigclock_clock_pane_g1_ParamLimits

0x800c,	// (0x00036a4f) main_fs_bigclock_clock_pane_g2_ParamLimits

0x801f,	// (0x00036a62) main_fs_bigclock_clock_pane_g3_ParamLimits

0x801f,	// (0x00036a62) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd29,	// (0x0003e76c) main_fs_bigclock_clock_pane_g_ParamLimits

0x8036,	// (0x00036a79) main_fs_bigclock_clock_pane_t1_ParamLimits

0x804c,	// (0x00036a8f) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd32,	// (0x0003e775) main_fs_bigclock_clock_pane_t_ParamLimits

0x4688,	// (0x000330cb) main_mup3_lyrics_pane_ParamLimits

0x4688,	// (0x000330cb) main_mup3_lyrics_pane

0x8ea8,	// (0x000378eb) main_mup3_lyrics_pane_t1_ParamLimits

0x8ea8,	// (0x000378eb) main_mup3_lyrics_pane_t1

0x52ab,	// (0x00033cee) aid_main_mp4_pane_t1_area

0x52b5,	// (0x00033cf8) aid_main_mp4_pane_t2_area

0x5361,	// (0x00033da4) main_mp4_pane_g7_ParamLimits

0x5361,	// (0x00033da4) main_mp4_pane_g7

0x536d,	// (0x00033db0) main_mp4_pane_g8_ParamLimits

0x536d,	// (0x00033db0) main_mp4_pane_g8

0x55e1,	// (0x00034024) aid_call6_pane_g1_size

0x8ac4,	// (0x00037507) list_double_large_graphic_phob2_other_pane_ParamLimits

0x8ac4,	// (0x00037507) list_double_large_graphic_phob2_other_pane

0xa8c6,	// (0x00039309) list_double_large_graphic_phob2_other_pane_g1

0x9bad,	// (0x000385f0) list_highlight_pane_cp026

0xa27c,	// (0x00038cbf) main_welc_pane_ParamLimits

0x76cc,	// (0x0003610f) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x76cc,	// (0x0003610f) main_sp_fs_ctrlbar_pane_g3

0x76e6,	// (0x00036129) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x76e6,	// (0x00036129) main_sp_fs_ctrlbar_pane_g4

0x771a,	// (0x0003615d) toolbar2_fixed_button_pane_cp01

0x7725,	// (0x00036168) toolbar2_fixed_button_pane_cp02

0x7732,	// (0x00036175) toolbar2_fixed_button_pane_cp03

0x8b7d,	// (0x000375c0) list_welc_entry_pane_ParamLimits

0x8b7d,	// (0x000375c0) list_welc_entry_pane

0x8bff,	// (0x00037642) main_welc_pane_g3_ParamLimits

0x8bff,	// (0x00037642) main_welc_pane_g3

0x8c58,	// (0x0003769b) main_welc_pane_t2_ParamLimits

0x8c58,	// (0x0003769b) main_welc_pane_t2

0x8c73,	// (0x000376b6) main_welc_pane_t3_ParamLimits

0x8c73,	// (0x000376b6) main_welc_pane_t3

0x0005,

0xfe35,	// (0x0003e878) main_welc_pane_t_ParamLimits

0xfe35,	// (0x0003e878) main_welc_pane_t

0x8dad,	// (0x000377f0) welc_button_pane_ParamLimits

0x8dad,	// (0x000377f0) welc_button_pane

0x8e2b,	// (0x0003786e) welc_service_logo_pane_ParamLimits

0x8e2b,	// (0x0003786e) welc_service_logo_pane

0x8ec3,	// (0x00037906) list_single_welc_entry_pane_ParamLimits

0x8ec3,	// (0x00037906) list_single_welc_entry_pane

0x8ed6,	// (0x00037919) list_single_welc_entry_pane_g1

0x8ee0,	// (0x00037923) list_single_welc_entry_pane_t1

0x8eee,	// (0x00037931) list_single_welc_entry_pane_t2

0x0001,

0xfe47,	// (0x0003e88a) list_single_welc_entry_pane_t

0x9bad,	// (0x000385f0) bg_button_pane_cp035

0x8efc,	// (0x0003793f) welc_button_pane_t1

0xeb0d,	// (0x0003d550) welc_service_logo_pane_g1

0xeb16,	// (0x0003d559) welc_service_logo_pane_g2

0x0001,

0xfe4c,	// (0x0003e88f) welc_service_logo_pane_g

0x12bc,	// (0x0002fcff) main_int_radio_pane

0xd9f8,	// (0x0003c43b) list_single_fs_dyc_pane_g1

0x8964,	// (0x000373a7) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x8964,	// (0x000373a7) list_double_large_graphic_phob2_pane_g3

0x8970,	// (0x000373b3) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x8970,	// (0x000373b3) list_double_large_graphic_phob2_pane_g4

0x8f0a,	// (0x0003794d) main_int_radio1_pane_ParamLimits

0x8f0a,	// (0x0003794d) main_int_radio1_pane

0xeb1f,	// (0x0003d562) find_pane_cp02

0x8f27,	// (0x0003796a) input_focus_pane_cp12_ParamLimits

0x8f27,	// (0x0003796a) input_focus_pane_cp12

0x8f37,	// (0x0003797a) input_focus_pane_cp13_ParamLimits

0x8f37,	// (0x0003797a) input_focus_pane_cp13

0x8f4b,	// (0x0003798e) input_focus_pane_cp14_ParamLimits

0x8f4b,	// (0x0003798e) input_focus_pane_cp14

0xeb28,	// (0x0003d56b) int_radio1_listscroll_pane

0x8f5f,	// (0x000379a2) main_int_radio1_pane_g1_ParamLimits

0x8f5f,	// (0x000379a2) main_int_radio1_pane_g1

0x8f75,	// (0x000379b8) main_int_radio1_pane_t1_ParamLimits

0x8f75,	// (0x000379b8) main_int_radio1_pane_t1

0x8f8e,	// (0x000379d1) main_int_radio1_pane_t2_ParamLimits

0x8f8e,	// (0x000379d1) main_int_radio1_pane_t2

0x8fa9,	// (0x000379ec) main_int_radio1_pane_t3_ParamLimits

0x8fa9,	// (0x000379ec) main_int_radio1_pane_t3

0x8fc4,	// (0x00037a07) main_int_radio1_pane_t4_ParamLimits

0x8fc4,	// (0x00037a07) main_int_radio1_pane_t4

0xeb32,	// (0x0003d575) main_int_radio1_pane_t5_ParamLimits

0xeb32,	// (0x0003d575) main_int_radio1_pane_t5

0x8fd6,	// (0x00037a19) main_int_radio1_pane_t6_ParamLimits

0x8fd6,	// (0x00037a19) main_int_radio1_pane_t6

0x8feb,	// (0x00037a2e) main_int_radio1_pane_t7_ParamLimits

0x8feb,	// (0x00037a2e) main_int_radio1_pane_t7

0x9000,	// (0x00037a43) main_int_radio1_pane_t8_ParamLimits

0x9000,	// (0x00037a43) main_int_radio1_pane_t8

0x901d,	// (0x00037a60) main_int_radio1_pane_t9_ParamLimits

0x901d,	// (0x00037a60) main_int_radio1_pane_t9

0x902f,	// (0x00037a72) main_int_radio1_pane_t10_ParamLimits

0x902f,	// (0x00037a72) main_int_radio1_pane_t10

0x9055,	// (0x00037a98) main_int_radio1_pane_t11_ParamLimits

0x9055,	// (0x00037a98) main_int_radio1_pane_t11

0x907b,	// (0x00037abe) main_int_radio1_pane_t12_ParamLimits

0x907b,	// (0x00037abe) main_int_radio1_pane_t12

0x000b,

0xfe51,	// (0x0003e894) main_int_radio1_pane_t_ParamLimits

0xfe51,	// (0x0003e894) main_int_radio1_pane_t

0xe9fd,	// (0x0003d440) int_radio_list_pane

0xea05,	// (0x0003d448) scroll_pane_cp037

0xeb44,	// (0x0003d587) list_double_large_graphic_int_radio_pane_ParamLimits

0xeb44,	// (0x0003d587) list_double_large_graphic_int_radio_pane

0xeb58,	// (0x0003d59b) list_double_large_graphic_int_radio_pane_g1

0xeb61,	// (0x0003d5a4) list_double_large_graphic_int_radio_pane_t1

0xeb6f,	// (0x0003d5b2) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe6a,	// (0x0003e8ad) list_double_large_graphic_int_radio_pane_t

0x9bad,	// (0x000385f0) list_highlight_pane_cp027

0xeac2,	// (0x0003d505) main_button_pane_4

0x8c12,	// (0x00037655) main_welc_pane_g4_ParamLimits

0x8c12,	// (0x00037655) main_welc_pane_g4

0x8c8e,	// (0x000376d1) main_welc_pane_t4_ParamLimits

0x8c8e,	// (0x000376d1) main_welc_pane_t4

0x8ca5,	// (0x000376e8) main_welc_pane_t5_ParamLimits

0x8ca5,	// (0x000376e8) main_welc_pane_t5

0x8ce6,	// (0x00037729) main_welc_pane_t6_ParamLimits

0x8ce6,	// (0x00037729) main_welc_pane_t6

0x8dc2,	// (0x00037805) welc_button_pane_2_ParamLimits

0x8dc2,	// (0x00037805) welc_button_pane_2

0x8de0,	// (0x00037823) welc_button_pane_3_ParamLimits

0x8de0,	// (0x00037823) welc_button_pane_3

0xeaca,	// (0x0003d50d) welc_button_pane_4

0x8e01,	// (0x00037844) welc_button_pane_5_ParamLimits

0x8e01,	// (0x00037844) welc_button_pane_5

0xf039,	// (0x0003da7c) main_popup_welc_pane

0xeb8c,	// (0x0003d5cf) main_welc_sk_g3

0xeb96,	// (0x0003d5d9) main_welc_sk_g4

0xeba0,	// (0x0003d5e3) main_welc_sk_t3

0xebb0,	// (0x0003d5f3) main_welc_sk_t4

0xebc0,	// (0x0003d603) popup_welc_pane_t4

0xebce,	// (0x0003d611) popup_welc_pane_t5

0xebdc,	// (0x0003d61f) popup_welc_pane_t6

0x12bc,	// (0x0002fcff) main_acti_pane

0x9bad,	// (0x000385f0) main_sso_pane

0x908d,	// (0x00037ad0) sso_body_pane_ParamLimits

0x908d,	// (0x00037ad0) sso_body_pane

0x90a2,	// (0x00037ae5) sso_logo_pane_ParamLimits

0x90a2,	// (0x00037ae5) sso_logo_pane

0x90d2,	// (0x00037b15) sso_sk_pane_ParamLimits

0x90d2,	// (0x00037b15) sso_sk_pane

0xa540,	// (0x00038f83) main_sso_logo_pane_g1

0x90e4,	// (0x00037b27) sso_sk_pane_t1_ParamLimits

0x90e4,	// (0x00037b27) sso_sk_pane_t1

0x90fe,	// (0x00037b41) sso_sk_pane_t2_ParamLimits

0x90fe,	// (0x00037b41) sso_sk_pane_t2

0x0001,

0xfe6f,	// (0x0003e8b2) sso_sk_pane_t_ParamLimits

0xfe6f,	// (0x0003e8b2) sso_sk_pane_t

0xec1e,	// (0x0003d661) aid_sso_gap

0xec27,	// (0x0003d66a) aid_sso_txt1

0xec31,	// (0x0003d674) aid_sso_txt2

0xec3b,	// (0x0003d67e) aid_sso_txt3

0x0002,

0xfe74,	// (0x0003e8b7) aid_sso_txt

0xec45,	// (0x0003d688) aid_sso_widget

0x9168,	// (0x00037bab) sso_btn_pane_ParamLimits

0x9168,	// (0x00037bab) sso_btn_pane

0x91f0,	// (0x00037c33) sso_option_pane_ParamLimits

0x91f0,	// (0x00037c33) sso_option_pane

0x9272,	// (0x00037cb5) sso_query_pane_ParamLimits

0x9272,	// (0x00037cb5) sso_query_pane

0x92c8,	// (0x00037d0b) sso_query_pane_cp01_ParamLimits

0x92c8,	// (0x00037d0b) sso_query_pane_cp01

0x9328,	// (0x00037d6b) sso_t_hdr_pane_ParamLimits

0x9328,	// (0x00037d6b) sso_t_hdr_pane

0x9352,	// (0x00037d95) sso_t_nml_pane_ParamLimits

0x9352,	// (0x00037d95) sso_t_nml_pane

0xec4f,	// (0x0003d692) sso_t_sub_pane

0x90af,	// (0x00037af2) sso_popup_window_ParamLimits

0x90af,	// (0x00037af2) sso_popup_window

0x9114,	// (0x00037b57) sso_apps_pane_ParamLimits

0x9114,	// (0x00037b57) sso_apps_pane

0x913e,	// (0x00037b81) sso_body_pane_g1

0x9148,	// (0x00037b8b) sso_body_pane_t1

0x9158,	// (0x00037b9b) sso_body_pane_t2

0x0001,

0xfe7b,	// (0x0003e8be) sso_body_pane_t

0x91ba,	// (0x00037bfd) sso_btn_pane_cp01_ParamLimits

0x91ba,	// (0x00037bfd) sso_btn_pane_cp01

0x9246,	// (0x00037c89) sso_prog_pane_ParamLimits

0x9246,	// (0x00037c89) sso_prog_pane

0x93a8,	// (0x00037deb) sso_t_hdr_pane_t1_ParamLimits

0x93a8,	// (0x00037deb) sso_t_hdr_pane_t1

0xec64,	// (0x0003d6a7) input_focus_pane_cp10_ParamLimits

0xec64,	// (0x0003d6a7) input_focus_pane_cp10

0xec7e,	// (0x0003d6c1) sso_query_pane_t1_ParamLimits

0xec7e,	// (0x0003d6c1) sso_query_pane_t1

0xec91,	// (0x0003d6d4) sso_query_pane_t2_ParamLimits

0xec91,	// (0x0003d6d4) sso_query_pane_t2

0xecab,	// (0x0003d6ee) sso_query_pane_t3_ParamLimits

0xecab,	// (0x0003d6ee) sso_query_pane_t3

0xecd5,	// (0x0003d718) sso_query_pane_t4_ParamLimits

0xecd5,	// (0x0003d718) sso_query_pane_t4

0x0003,

0xfe80,	// (0x0003e8c3) sso_query_pane_t_ParamLimits

0xfe80,	// (0x0003e8c3) sso_query_pane_t

0x9bad,	// (0x000385f0) bg_button_pane_cp22

0xeb7d,	// (0x0003d5c0) sso_btn_pane_t1

0x93bb,	// (0x00037dfe) sso_t_nml_pane_t1_ParamLimits

0x93bb,	// (0x00037dfe) sso_t_nml_pane_t1

0x93d6,	// (0x00037e19) sso_option_row_pane_ParamLimits

0x93d6,	// (0x00037e19) sso_option_row_pane

0xecf9,	// (0x0003d73c) sso_t_sub_pane_t1_ParamLimits

0xecf9,	// (0x0003d73c) sso_t_sub_pane_t1

0xa27c,	// (0x00038cbf) bg_popup_window_pane_cp11_ParamLimits

0xa27c,	// (0x00038cbf) bg_popup_window_pane_cp11

0xed16,	// (0x0003d759) popup_sk_window_cp01_ParamLimits

0xed16,	// (0x0003d759) popup_sk_window_cp01

0xed23,	// (0x0003d766) sso_popup_body_pane_ParamLimits

0xed23,	// (0x0003d766) sso_popup_body_pane

0xed30,	// (0x0003d773) scroll_pane_cp21_ParamLimits

0xed30,	// (0x0003d773) scroll_pane_cp21

0xed3d,	// (0x0003d780) sso_popup_body_t_pane_ParamLimits

0xed3d,	// (0x0003d780) sso_popup_body_t_pane

0xed4a,	// (0x0003d78d) sso_popup_body_t_hdr_pane_ParamLimits

0xed4a,	// (0x0003d78d) sso_popup_body_t_hdr_pane

0xed5d,	// (0x0003d7a0) sso_popup_body_t_nml_pane_ParamLimits

0xed5d,	// (0x0003d7a0) sso_popup_body_t_nml_pane

0xed7b,	// (0x0003d7be) sso_popup_body_t_sub_pane_ParamLimits

0xed7b,	// (0x0003d7be) sso_popup_body_t_sub_pane

0xed9e,	// (0x0003d7e1) sso_popup_body_t_hdr_pane_t1

0x93e9,	// (0x00037e2c) sso_popup_body_t_nml_pane_t1_ParamLimits

0x93e9,	// (0x00037e2c) sso_popup_body_t_nml_pane_t1

0xedae,	// (0x0003d7f1) sso_popup_body_t_sub_pane_t1_ParamLimits

0xedae,	// (0x0003d7f1) sso_popup_body_t_sub_pane_t1

0xa540,	// (0x00038f83) sso_prog_pane_g1

0x9424,	// (0x00037e67) sso_apps_pane_comp1_ParamLimits

0x9424,	// (0x00037e67) sso_apps_pane_comp1

0xedd3,	// (0x0003d816) sso_apps_pane_comp1_g1

0xeddb,	// (0x0003d81e) sso_apps_pane_comp1_t1

0xedf7,	// (0x0003d83a) sso_option_row_pane_g1

0xedff,	// (0x0003d842) sso_option_row_pane_t1

0x8b6a,	// (0x000375ad) bg_welc_area_ParamLimits

0x8b6a,	// (0x000375ad) bg_welc_area

0x8d24,	// (0x00037767) sso_t_hdr_pane_a_t1_ParamLimits

0x8d24,	// (0x00037767) sso_t_hdr_pane_a_t1

0x8d3f,	// (0x00037782) sso_t_nml_pane_a_t1_ParamLimits

0x8d3f,	// (0x00037782) sso_t_nml_pane_a_t1

0x8d72,	// (0x000377b5) sso_t_sub_pane_a_t1_ParamLimits

0x8d72,	// (0x000377b5) sso_t_sub_pane_a_t1

0xeb7d,	// (0x0003d5c0) sso_btn_pane_t1_copy1

0x9bad,	// (0x000385f0) welc_button_pane_2_comp1

0xebec,	// (0x0003d62f) sso_t_hdr_pane_p_t1

0xebfc,	// (0x0003d63f) sso_t_nml_pane_p_t1

0xec0c,	// (0x0003d64f) sso_t_sub_pane_p_t1

0xe0f8,	// (0x0003cb3b) list_cmail_pane_ParamLimits

0x8e19,	// (0x0003785c) welc_button_pane_cp01_ParamLimits

0x8e19,	// (0x0003785c) welc_button_pane_cp01

0x9bad,	// (0x000385f0) main_att_pane

0xede9,	// (0x0003d82c) input_focus_pane_cp10_t1

0xedff,	// (0x0003d842) sso_option_row_pane_t1_ParamLimits

0x943e,	// (0x00037e81) main_att_body_pane_ParamLimits

0x943e,	// (0x00037e81) main_att_body_pane

0x9473,	// (0x00037eb6) att_btn_pane_ParamLimits

0x9473,	// (0x00037eb6) att_btn_pane

0x949a,	// (0x00037edd) att_btn_pane_cp01_ParamLimits

0x949a,	// (0x00037edd) att_btn_pane_cp01

0x94ba,	// (0x00037efd) att_li_srv_pane_ParamLimits

0x94ba,	// (0x00037efd) att_li_srv_pane

0x94d7,	// (0x00037f1a) att_opt_pane_ParamLimits

0x94d7,	// (0x00037f1a) att_opt_pane

0x9525,	// (0x00037f68) att_query_pane_ParamLimits

0x9525,	// (0x00037f68) att_query_pane

0x9571,	// (0x00037fb4) att_query_pane_cp01_ParamLimits

0x9571,	// (0x00037fb4) att_query_pane_cp01

0x95bd,	// (0x00038000) att_t_hdr_pane_ParamLimits

0x95bd,	// (0x00038000) att_t_hdr_pane

0x9621,	// (0x00038064) att_t_nml_pane_ParamLimits

0x9621,	// (0x00038064) att_t_nml_pane

0x966e,	// (0x000380b1) att_t_nml_pane_cp01_ParamLimits

0x966e,	// (0x000380b1) att_t_nml_pane_cp01

0x969c,	// (0x000380df) att_t_nmlb_pane_ParamLimits

0x969c,	// (0x000380df) att_t_nmlb_pane

0x96b9,	// (0x000380fc) att_term_pane_ParamLimits

0x96b9,	// (0x000380fc) att_term_pane

0x9709,	// (0x0003814c) main_att_body_pane_g1_ParamLimits

0x9709,	// (0x0003814c) main_att_body_pane_g1

0xee15,	// (0x0003d858) att_t_hdr_pane_t1_ParamLimits

0xee15,	// (0x0003d858) att_t_hdr_pane_t1

0xee2e,	// (0x0003d871) att_t_nml_pane_t1_ParamLimits

0xee2e,	// (0x0003d871) att_t_nml_pane_t1

0xee53,	// (0x0003d896) att_btn_pane_t1

0x9bad,	// (0x000385f0) bg_button_pane_cp23

0x9740,	// (0x00038183) att_li_srv_row_pane_ParamLimits

0x9740,	// (0x00038183) att_li_srv_row_pane

0xee63,	// (0x0003d8a6) att_t_nmlb_pane_t1_ParamLimits

0xee63,	// (0x0003d8a6) att_t_nmlb_pane_t1

0xee7c,	// (0x0003d8bf) att_query_pane_t1

0xee8b,	// (0x0003d8ce) att_query_pane_t2

0xee9a,	// (0x0003d8dd) att_query_pane_t3

0x0002,

0xfe89,	// (0x0003e8cc) att_query_pane_t

0xeea9,	// (0x0003d8ec) input_focus_pane_cp11

0xeeb2,	// (0x0003d8f5) att_term_pane_t1_ParamLimits

0xeeb2,	// (0x0003d8f5) att_term_pane_t1

0x9bad,	// (0x000385f0) att_opt_row_pane

0xeecf,	// (0x0003d912) att_opt_row_pane_g1

0xeed7,	// (0x0003d91a) att_opt_row_pane_t1_ParamLimits

0xeed7,	// (0x0003d91a) att_opt_row_pane_t1

0x9750,	// (0x00038193) att_li_srv_row_pane_g1

0x9758,	// (0x0003819b) att_li_srv_row_pane_t1

0x976d,	// (0x000381b0) att_li_srv_row_pane_t2

0x0001,

0xfe90,	// (0x0003e8d3) att_li_srv_row_pane_t

0x9bad,	// (0x000385f0) main_call7_pane

0x9bad,	// (0x000385f0) main_vod_pane

0xec4f,	// (0x0003d692) sso_t_sub_pane_ParamLimits

0x9454,	// (0x00037e97) att_btn_emg_pane_ParamLimits

0x9454,	// (0x00037e97) att_btn_emg_pane

0x9758,	// (0x0003819b) att_li_srv_row_pane_t1_ParamLimits

0x976d,	// (0x000381b0) att_li_srv_row_pane_t2_ParamLimits

0xfe90,	// (0x0003e8d3) att_li_srv_row_pane_t_ParamLimits

0xeef0,	// (0x0003d933) att_btn_close_pane_g1

0x9bad,	// (0x000385f0) bg_button_pane_cp24

0x9782,	// (0x000381c5) main_vod_body_pane_ParamLimits

0x9782,	// (0x000381c5) main_vod_body_pane

0x9796,	// (0x000381d9) main_vod_body_pane_g1_ParamLimits

0x9796,	// (0x000381d9) main_vod_body_pane_g1

0x97ca,	// (0x0003820d) scroll_pane_cp24_ParamLimits

0x97ca,	// (0x0003820d) scroll_pane_cp24

0x9818,	// (0x0003825b) vod_btn_pane_ParamLimits

0x9818,	// (0x0003825b) vod_btn_pane

0x985c,	// (0x0003829f) vod_det_pane_ParamLimits

0x985c,	// (0x0003829f) vod_det_pane

0x988e,	// (0x000382d1) vod_logo_g1_ParamLimits

0x988e,	// (0x000382d1) vod_logo_g1

0x98cc,	// (0x0003830f) vod_opt_pane_ParamLimits

0x98cc,	// (0x0003830f) vod_opt_pane

0x98ff,	// (0x00038342) vod_opt_pane_cp01_ParamLimits

0x98ff,	// (0x00038342) vod_opt_pane_cp01

0x992b,	// (0x0003836e) vod_query_pane_ParamLimits

0x992b,	// (0x0003836e) vod_query_pane

0x9958,	// (0x0003839b) vod_query_pane_cp01_ParamLimits

0x9958,	// (0x0003839b) vod_query_pane_cp01

0x9964,	// (0x000383a7) vod_t_nml_pane_ParamLimits

0x9964,	// (0x000383a7) vod_t_nml_pane

0x9a19,	// (0x0003845c) vod_t_nml_pane_cp01_ParamLimits

0x9a19,	// (0x0003845c) vod_t_nml_pane_cp01

0x9a55,	// (0x00038498) vod_t_sub_pane_ParamLimits

0x9a55,	// (0x00038498) vod_t_sub_pane

0x9a8a,	// (0x000384cd) vod_t_sub_pane_cp01_ParamLimits

0x9a8a,	// (0x000384cd) vod_t_sub_pane_cp01

0xeea9,	// (0x0003d8ec) vod_query_field_pane

0xee7c,	// (0x0003d8bf) vod_query_pane_t1

0x9bad,	// (0x000385f0) bg_button_pane_cp25

0xeef8,	// (0x0003d93b) sso_btn_pane_t1_copy2

0x9ab6,	// (0x000384f9) vod_t_nml_pane_t1_ParamLimits

0x9ab6,	// (0x000384f9) vod_t_nml_pane_t1

0xef08,	// (0x0003d94b) vod_opt_row_pane_ParamLimits

0xef08,	// (0x0003d94b) vod_opt_row_pane

0xef1a,	// (0x0003d95d) vod_t_sub_pane_t1_ParamLimits

0xef1a,	// (0x0003d95d) vod_t_sub_pane_t1

0x9aed,	// (0x00038530) vod_det_cell_pane_ParamLimits

0x9aed,	// (0x00038530) vod_det_cell_pane

0x9bad,	// (0x000385f0) input_focus_pane_cp15

0xef33,	// (0x0003d976) vod_query_field_pane_t1

0xef41,	// (0x0003d984) vod_opt_row_pane_g1_ParamLimits

0xef41,	// (0x0003d984) vod_opt_row_pane_g1

0xef4d,	// (0x0003d990) vod_opt_row_pane_t1_ParamLimits

0xef4d,	// (0x0003d990) vod_opt_row_pane_t1

0xef72,	// (0x0003d9b5) vod_det_cell_field_pane

0xef7b,	// (0x0003d9be) vod_det_cell_pane_g1

0xee7c,	// (0x0003d8bf) vod_det_cell_pane_t1

0x9bad,	// (0x000385f0) input_focus_pane_cp16

0xef33,	// (0x0003d976) vod_det_cell_field_pane_t1

0x9b01,	// (0x00038544) call7_btn_grp_pane_ParamLimits

0x9b01,	// (0x00038544) call7_btn_grp_pane

0x9b1b,	// (0x0003855e) call7_bubble_pane_ParamLimits

0x9b1b,	// (0x0003855e) call7_bubble_pane

0x9b33,	// (0x00038576) cell_call7_btn_pane_ParamLimits

0x9b33,	// (0x00038576) cell_call7_btn_pane

0x9b47,	// (0x0003858a) call7_pane_g1_ParamLimits

0x9b47,	// (0x0003858a) call7_pane_g1

0x9b59,	// (0x0003859c) call7_windows_conf_pane_ParamLimits

0x9b59,	// (0x0003859c) call7_windows_conf_pane

0x9b77,	// (0x000385ba) popup_call7_1st_window_ParamLimits

0x9b77,	// (0x000385ba) popup_call7_1st_window

0x9b89,	// (0x000385cc) popup_call7_2nd_window_ParamLimits

0x9b89,	// (0x000385cc) popup_call7_2nd_window

0x9b9b,	// (0x000385de) popup_call7_3rd_window_ParamLimits

0x9b9b,	// (0x000385de) popup_call7_3rd_window

0x9bad,	// (0x000385f0) bg_button_pane_cp26

0xe99f,	// (0x0003d3e2) cell_call7_btn_pane_g1

0xef83,	// (0x0003d9c6) cell_call7_btn_pane_t1

0x9bad,	// (0x000385f0) bg_popup_window_pane_cp12

0xef92,	// (0x0003d9d5) popup_call7_1st_window_g1

0xef9a,	// (0x0003d9dd) popup_call7_1st_window_g2

0xefa2,	// (0x0003d9e5) popup_call7_1st_window_g3

0x0002,

0xfe95,	// (0x0003e8d8) popup_call7_1st_window_g

0xefaa,	// (0x0003d9ed) popup_call7_1st_window_t1

0xefb9,	// (0x0003d9fc) popup_call7_1st_window_t2

0xefc9,	// (0x0003da0c) popup_call7_1st_window_t3

0x0002,

0xfe9c,	// (0x0003e8df) popup_call7_1st_window_t

0x9bad,	// (0x000385f0) bg_popup_window_pane_cp13

0xefd9,	// (0x0003da1c) popup_call7_2nd_window_g1

0xefe1,	// (0x0003da24) popup_call7_2nd_window_g2

0xefe9,	// (0x0003da2c) popup_call7_2nd_window_g3

0x0002,

0xfea3,	// (0x0003e8e6) popup_call7_2nd_window_g

0xeff1,	// (0x0003da34) popup_call7_2nd_window_t1

0x9bad,	// (0x000385f0) bg_popup_window_pane_cp14

0xf000,	// (0x0003da43) call7_list_conf_pane

0xf008,	// (0x0003da4b) call7_list_conf_row_pane_ParamLimits

0xf008,	// (0x0003da4b) call7_list_conf_row_pane

0xf01b,	// (0x0003da5e) call7_list_conf_row_pane_g1

0xf023,	// (0x0003da66) call7_list_conf_row_pane_g2

0x0001,

0xfeaa,	// (0x0003e8ed) call7_list_conf_row_pane_g

0xf02b,	// (0x0003da6e) call7_list_conf_row_pane_t1

0x9bad,	// (0x000385f0) list_highlight_pane_cp22
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal
