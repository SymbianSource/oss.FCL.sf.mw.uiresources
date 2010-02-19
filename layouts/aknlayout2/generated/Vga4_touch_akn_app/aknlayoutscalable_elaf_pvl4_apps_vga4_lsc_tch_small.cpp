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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00042ab3 };

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
0x1417,	// (0x00043eca) Screen

0x1423,	// (0x00043ed6) application_window

0x145f,	// (0x00043f12) area_bottom_pane_ParamLimits

0x145f,	// (0x00043f12) area_bottom_pane

0x1498,	// (0x00043f4b) area_top_pane_ParamLimits

0x1498,	// (0x00043f4b) area_top_pane

0xa704,	// (0x0004d1b7) call_video_uplink_pane_ParamLimits

0xa704,	// (0x0004d1b7) call_video_uplink_pane

0x150d,	// (0x00043fc0) main_pane_ParamLimits

0x150d,	// (0x00043fc0) main_pane

0xe45f,	// (0x00050f12) context_pane

0x45a4,	// (0x00047057) navi_pane

0x45d4,	// (0x00047087) popup_cale_events_window_ParamLimits

0x45d4,	// (0x00047087) popup_cale_events_window

0xe472,	// (0x00050f25) popup_mup_playback_window

0x45ec,	// (0x0004709f) signal_pane

0xc589,	// (0x0004f03c) main_browser_pane

0xcfd1,	// (0x0004fa84) main_burst_pane

0x42a6,	// (0x00046d59) main_calc_pane

0xcfd1,	// (0x0004fa84) main_cale_day_pane

0xc589,	// (0x0004f03c) main_cale_month_pane

0xcfd1,	// (0x0004fa84) main_cale_week_pane

0xcfd1,	// (0x0004fa84) main_call_pane

0xc25b,	// (0x0004ed0e) main_call_poc_pane

0xcfd1,	// (0x0004fa84) main_camera_pane

0xcfd1,	// (0x0004fa84) main_chi_dic_pane

0xce73,	// (0x0004f926) main_clock_pane

0xc25b,	// (0x0004ed0e) main_fmradio_pane

0xcfd1,	// (0x0004fa84) main_graph_messa_pane

0xc25b,	// (0x0004ed0e) main_help_pane

0xc589,	// (0x0004f03c) main_im_pane

0xc4b6,	// (0x0004ef69) main_image_pane_ParamLimits

0xc4b6,	// (0x0004ef69) main_image_pane

0xc25b,	// (0x0004ed0e) main_location2_pane

0xcfd1,	// (0x0004fa84) main_location_pane

0xc25b,	// (0x0004ed0e) main_messa_pane

0xc25b,	// (0x0004ed0e) main_mp2_pane

0xcfd1,	// (0x0004fa84) main_mp_pane

0xc25b,	// (0x0004ed0e) main_msg_pane

0xc25b,	// (0x0004ed0e) main_mup_eq_pane

0xc25b,	// (0x0004ed0e) main_mup_pane

0xc589,	// (0x0004f03c) main_notes_pane

0xc25b,	// (0x0004ed0e) main_pec_pane

0xc25b,	// (0x0004ed0e) main_phob_pane

0xc25b,	// (0x0004ed0e) main_pinb_pane

0xc25b,	// (0x0004ed0e) main_postcard_pane

0xc25b,	// (0x0004ed0e) main_qdial_pane

0xcfd1,	// (0x0004fa84) main_skin_pane

0xc25b,	// (0x0004ed0e) main_smil2_pane

0xcfd1,	// (0x0004fa84) main_smil_pane

0xcfd1,	// (0x0004fa84) main_video_pane

0xcfd1,	// (0x0004fa84) main_video_tele_pane

0xc4b6,	// (0x0004ef69) main_viewer_pane_ParamLimits

0xc4b6,	// (0x0004ef69) main_viewer_pane

0xcfd1,	// (0x0004fa84) main_vorec_pane

0x42fc,	// (0x00046daf) popup_blid_sat_info_window_ParamLimits

0x42fc,	// (0x00046daf) popup_blid_sat_info_window

0x4360,	// (0x00046e13) popup_dyc_status_message_window_ParamLimits

0x4360,	// (0x00046e13) popup_dyc_status_message_window

0x437a,	// (0x00046e2d) popup_grid_large_graphic_window_ParamLimits

0x437a,	// (0x00046e2d) popup_grid_large_graphic_window

0x443c,	// (0x00046eef) popup_loc_request_window_ParamLimits

0x443c,	// (0x00046eef) popup_loc_request_window

0x4578,	// (0x0004702b) popup_wml_address_window_ParamLimits

0x4578,	// (0x0004702b) popup_wml_address_window

0x40e4,	// (0x00046b97) call_muted_g1

0x3d75,	// (0x00046828) popup_call_audio_conf_window_ParamLimits

0x3d75,	// (0x00046828) popup_call_audio_conf_window

0x40f4,	// (0x00046ba7) popup_call_audio_first_window_ParamLimits

0x40f4,	// (0x00046ba7) popup_call_audio_first_window

0x416a,	// (0x00046c1d) popup_call_audio_in_window_ParamLimits

0x416a,	// (0x00046c1d) popup_call_audio_in_window

0x41a6,	// (0x00046c59) popup_call_audio_out_window_ParamLimits

0x41a6,	// (0x00046c59) popup_call_audio_out_window

0x41e0,	// (0x00046c93) popup_call_audio_second_window_ParamLimits

0x41e0,	// (0x00046c93) popup_call_audio_second_window

0x4236,	// (0x00046ce9) popup_call_audio_wait_window_ParamLimits

0x4236,	// (0x00046ce9) popup_call_audio_wait_window

0x426b,	// (0x00046d1e) popup_number_entry_window_ParamLimits

0x426b,	// (0x00046d1e) popup_number_entry_window

0xa730,	// (0x0004d1e3) bg_popup_call_pane_cp05_ParamLimits

0xa730,	// (0x0004d1e3) bg_popup_call_pane_cp05

0xa750,	// (0x0004d203) popup_number_entry_window_t1

0xa763,	// (0x0004d216) popup_number_entry_window_t2

0xa775,	// (0x0004d228) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x00051b9a) popup_number_entry_window_t

0xa7bc,	// (0x0004d26f) text_title_cp2

0xa7cf,	// (0x0004d282) bg_popup_call_pane_cp_ParamLimits

0xa7cf,	// (0x0004d282) bg_popup_call_pane_cp

0xa7dd,	// (0x0004d290) call_thumbnail_pane

0xa7e5,	// (0x0004d298) popup_call_audio_in_window_g1_ParamLimits

0xa7e5,	// (0x0004d298) popup_call_audio_in_window_g1

0xa7f1,	// (0x0004d2a4) popup_call_audio_in_window_g2_ParamLimits

0xa7f1,	// (0x0004d2a4) popup_call_audio_in_window_g2

0xa7fd,	// (0x0004d2b0) popup_call_audio_in_window_g3_ParamLimits

0xa7fd,	// (0x0004d2b0) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x00051ba3) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x00051ba3) popup_call_audio_in_window_g

0xa809,	// (0x0004d2bc) popup_call_audio_in_window_t1_ParamLimits

0xa809,	// (0x0004d2bc) popup_call_audio_in_window_t1

0xa825,	// (0x0004d2d8) popup_call_audio_in_window_t2_ParamLimits

0xa825,	// (0x0004d2d8) popup_call_audio_in_window_t2

0xa841,	// (0x0004d2f4) popup_call_audio_in_window_t3_ParamLimits

0xa841,	// (0x0004d2f4) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x00051baa) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x00051baa) popup_call_audio_in_window_t

0xa7cf,	// (0x0004d282) bg_popup_call_pane_cp01_ParamLimits

0xa7cf,	// (0x0004d282) bg_popup_call_pane_cp01

0xa7dd,	// (0x0004d290) call_thumbnail_pane_cp02

0xa854,	// (0x0004d307) call_type_pane_cp022

0xa85c,	// (0x0004d30f) popup_call_audio_out_window_g1_ParamLimits

0xa85c,	// (0x0004d30f) popup_call_audio_out_window_g1

0xa86e,	// (0x0004d321) popup_call_audio_out_window_g2_ParamLimits

0xa86e,	// (0x0004d321) popup_call_audio_out_window_g2

0xa87a,	// (0x0004d32d) popup_call_audio_out_window_g3_ParamLimits

0xa87a,	// (0x0004d32d) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x00051bb1) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x00051bb1) popup_call_audio_out_window_g

0xa88c,	// (0x0004d33f) popup_call_audio_out_window_t1_ParamLimits

0xa88c,	// (0x0004d33f) popup_call_audio_out_window_t1

0xa8a4,	// (0x0004d357) popup_call_audio_out_window_t2_ParamLimits

0xa8a4,	// (0x0004d357) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x00051bb8) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x00051bb8) popup_call_audio_out_window_t

0xa8b9,	// (0x0004d36c) bg_popup_call_pane_ParamLimits

0xa8b9,	// (0x0004d36c) bg_popup_call_pane

0x1694,	// (0x00044147) call_thumbnail_pane_cp_ParamLimits

0x1694,	// (0x00044147) call_thumbnail_pane_cp

0xc020,	// (0x0004ead3) call_type_pane_cp01_ParamLimits

0xc020,	// (0x0004ead3) call_type_pane_cp01

0xc064,	// (0x0004eb17) popup_call_audio_first_window_g1_ParamLimits

0xc064,	// (0x0004eb17) popup_call_audio_first_window_g1

0xc0b0,	// (0x0004eb63) popup_call_audio_first_window_g2_ParamLimits

0xc0b0,	// (0x0004eb63) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x00051bbd) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x00051bbd) popup_call_audio_first_window_g

0xc0f4,	// (0x0004eba7) popup_call_audio_first_window_t1_ParamLimits

0xc0f4,	// (0x0004eba7) popup_call_audio_first_window_t1

0xc1a0,	// (0x0004ec53) popup_call_audio_first_window_t4_ParamLimits

0xc1a0,	// (0x0004ec53) popup_call_audio_first_window_t4

0xc22c,	// (0x0004ecdf) popup_call_audio_first_window_t5_ParamLimits

0xc22c,	// (0x0004ecdf) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x00051bc2) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x00051bc2) popup_call_audio_first_window_t

0xc25b,	// (0x0004ed0e) bg_popup_call_pane_cp02

0xc265,	// (0x0004ed18) call_type_pane_cp023

0xc26d,	// (0x0004ed20) popup_call_audio_wait_window_g1

0xc275,	// (0x0004ed28) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x00051bc9) popup_call_audio_wait_window_g

0xc27d,	// (0x0004ed30) popup_call_audio_wait_window_t3

0xc28b,	// (0x0004ed3e) bg_popup_call_pane_cp03_ParamLimits

0xc28b,	// (0x0004ed3e) bg_popup_call_pane_cp03

0xc2eb,	// (0x0004ed9e) call_thumbnail_pane_cp011_ParamLimits

0xc2eb,	// (0x0004ed9e) call_thumbnail_pane_cp011

0xc2f7,	// (0x0004edaa) call_type_pane_cp034_ParamLimits

0xc2f7,	// (0x0004edaa) call_type_pane_cp034

0xc333,	// (0x0004ede6) popup_call_audio_second_window_g1_ParamLimits

0xc333,	// (0x0004ede6) popup_call_audio_second_window_g1

0xc36f,	// (0x0004ee22) popup_call_audio_second_window_g2_ParamLimits

0xc36f,	// (0x0004ee22) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x00051bce) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x00051bce) popup_call_audio_second_window_g

0xc3ab,	// (0x0004ee5e) popup_call_audio_second_window_t1_ParamLimits

0xc3ab,	// (0x0004ee5e) popup_call_audio_second_window_t1

0xc42c,	// (0x0004eedf) popup_call_audio_second_window_t2_ParamLimits

0xc42c,	// (0x0004eedf) popup_call_audio_second_window_t2

0xc462,	// (0x0004ef15) popup_call_audio_second_window_t3_ParamLimits

0xc462,	// (0x0004ef15) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x00051bd3) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x00051bd3) popup_call_audio_second_window_t

0xc25b,	// (0x0004ed0e) bg_popup_call_pane_cp04

0xc498,	// (0x0004ef4b) list_conf_pane

0xc4a0,	// (0x0004ef53) popup_call_audio_conf_window_t1

0xc4ae,	// (0x0004ef61) call_thumbnail_pane_g1

0xc4b6,	// (0x0004ef69) bg_pinb_pane_ParamLimits

0xc4b6,	// (0x0004ef69) bg_pinb_pane

0xc4c4,	// (0x0004ef77) find_pinb_pane

0xc4cd,	// (0x0004ef80) listscroll_pinb_pane_ParamLimits

0xc4cd,	// (0x0004ef80) listscroll_pinb_pane

0xc4dc,	// (0x0004ef8f) pinb_bg_pane_g1

0x16b8,	// (0x0004416b) pinb_bg_pane_g2

0x16c4,	// (0x00044177) pinb_bg_pane_g3

0x16d0,	// (0x00044183) pinb_bg_pane_g4

0x16dc,	// (0x0004418f) pinb_bg_pane_g5

0x16e8,	// (0x0004419b) pinb_bg_pane_g6

0x16f3,	// (0x000441a6) pinb_bg_pane_g7

0x16fe,	// (0x000441b1) pinb_bg_pane_g8

0x1709,	// (0x000441bc) pinb_bg_pane_g9

0x1713,	// (0x000441c6) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x00051bda) pinb_bg_pane_g

0x1730,	// (0x000441e3) grid_pinb_pane

0x173b,	// (0x000441ee) list_pinb_pane

0x1746,	// (0x000441f9) scroll_pane_cp01_ParamLimits

0x1746,	// (0x000441f9) scroll_pane_cp01

0xc4e6,	// (0x0004ef99) find_pinb_pane_g1_ParamLimits

0xc4e6,	// (0x0004ef99) find_pinb_pane_g1

0xc4fe,	// (0x0004efb1) find_pinb_pane_t1

0xc510,	// (0x0004efc3) find_pinb_pane_t2

0x0001,

0xf141,	// (0x00051bf4) find_pinb_pane_t

0xc525,	// (0x0004efd8) input_focus_pane_cp01_ParamLimits

0xc525,	// (0x0004efd8) input_focus_pane_cp01

0x1758,	// (0x0004420b) cell_pinb_pane_ParamLimits

0x1758,	// (0x0004420b) cell_pinb_pane

0x177a,	// (0x0004422d) cell_pinb_pane_g1_ParamLimits

0x177a,	// (0x0004422d) cell_pinb_pane_g1

0x178e,	// (0x00044241) cell_pinb_pane_g2_ParamLimits

0x178e,	// (0x00044241) cell_pinb_pane_g2

0xc531,	// (0x0004efe4) cell_pinb_pane_g3_ParamLimits

0xc531,	// (0x0004efe4) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x00051bf9) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x00051bf9) cell_pinb_pane_g

0xc25b,	// (0x0004ed0e) grid_highlight_pane_cp01

0x179a,	// (0x0004424d) list_pinb_item_pane_ParamLimits

0x179a,	// (0x0004424d) list_pinb_item_pane

0xc25b,	// (0x0004ed0e) list_highlight_pane_cp02

0x17ad,	// (0x00044260) list_pinb_item_pane_g1_ParamLimits

0x17ad,	// (0x00044260) list_pinb_item_pane_g1

0x17ba,	// (0x0004426d) list_pinb_item_pane_g2_ParamLimits

0x17ba,	// (0x0004426d) list_pinb_item_pane_g2

0x17c6,	// (0x00044279) list_pinb_item_pane_g3_ParamLimits

0x17c6,	// (0x00044279) list_pinb_item_pane_g3

0x17d7,	// (0x0004428a) list_pinb_item_pane_g4_ParamLimits

0x17d7,	// (0x0004428a) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x00051c00) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x00051c00) list_pinb_item_pane_g

0x17e3,	// (0x00044296) list_pinb_item_pane_t1_ParamLimits

0x17e3,	// (0x00044296) list_pinb_item_pane_t1

0x1818,	// (0x000442cb) calc_display_pane

0x183e,	// (0x000442f1) calc_paper_pane

0x1861,	// (0x00044314) grid_calc_pane

0xc25b,	// (0x0004ed0e) bg_list_pane_cp01

0x188f,	// (0x00044342) clock_g1

0x1897,	// (0x0004434a) clock_g2

0x0001,

0xf156,	// (0x00051c09) clock_g

0x189f,	// (0x00044352) clock_t1_ParamLimits

0x189f,	// (0x00044352) clock_t1

0x18b4,	// (0x00044367) clock_t2_ParamLimits

0x18b4,	// (0x00044367) clock_t2

0x18c6,	// (0x00044379) clock_t3_ParamLimits

0x18c6,	// (0x00044379) clock_t3

0x18d8,	// (0x0004438b) clock_t4_ParamLimits

0x18d8,	// (0x0004438b) clock_t4

0x18ea,	// (0x0004439d) clock_t5_ParamLimits

0x18ea,	// (0x0004439d) clock_t5

0x18ff,	// (0x000443b2) clock_t6_ParamLimits

0x18ff,	// (0x000443b2) clock_t6

0x1911,	// (0x000443c4) clock_t7_ParamLimits

0x1911,	// (0x000443c4) clock_t7

0x1923,	// (0x000443d6) clock_t8_ParamLimits

0x1923,	// (0x000443d6) clock_t8

0x1937,	// (0x000443ea) clock_t9_ParamLimits

0x1937,	// (0x000443ea) clock_t9

0x0008,

0xf15b,	// (0x00051c0e) clock_t_ParamLimits

0xf15b,	// (0x00051c0e) clock_t

0xc53d,	// (0x0004eff0) popup_clock_analogue_window_cp02

0xc53d,	// (0x0004eff0) popup_clock_digital_window_cp01

0xc545,	// (0x0004eff8) listscroll_help_pane

0xc25b,	// (0x0004ed0e) phob_pre_status_pane

0xc54f,	// (0x0004f002) grid_qdial_pane

0xc25b,	// (0x0004ed0e) listscroll_mce_pane

0xc559,	// (0x0004f00c) bg_notes_pane

0xc567,	// (0x0004f01a) list_notes_pane

0x194d,	// (0x00044400) scroll_pane_cp06

0xc575,	// (0x0004f028) bg_calc_paper_pane

0xa945,	// (0x0004d3f8) list_calc_pane

0xc589,	// (0x0004f03c) bg_calc_display_pane

0x1961,	// (0x00044414) calc_display_pane_t1

0x1973,	// (0x00044426) calc_display_pane_t2

0xa95f,	// (0x0004d412) calc_display_pane_t3

0x0002,

0xf16e,	// (0x00051c21) calc_display_pane_t

0x1985,	// (0x00044438) cell_calc_pane_ParamLimits

0x1985,	// (0x00044438) cell_calc_pane

0xc595,	// (0x0004f048) bg_calc_paper_pane_g1

0xc5a1,	// (0x0004f054) bg_calc_paper_pane_g2

0xc5ad,	// (0x0004f060) bg_calc_paper_pane_g3

0xc5b9,	// (0x0004f06c) bg_calc_paper_pane_g4

0xc5c5,	// (0x0004f078) bg_calc_paper_pane_g5

0x19c0,	// (0x00044473) bg_calc_paper_pane_g6

0x19d3,	// (0x00044486) bg_calc_paper_pane_g7

0x19e6,	// (0x00044499) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x00051c28) bg_calc_paper_pane_g

0x19f7,	// (0x000444aa) calc_bg_paper_pane_g9

0x1a08,	// (0x000444bb) list_calc_item_pane_ParamLimits

0x1a08,	// (0x000444bb) list_calc_item_pane

0xc5d1,	// (0x0004f084) list_calc_item_pane_g1

0xa971,	// (0x0004d424) list_calc_item_pane_t1_ParamLimits

0xa971,	// (0x0004d424) list_calc_item_pane_t1

0x1a1c,	// (0x000444cf) list_calc_item_pane_t2_ParamLimits

0x1a1c,	// (0x000444cf) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x00051c39) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x00051c39) list_calc_item_pane_t

0xc5de,	// (0x0004f091) cell_calc_pane_g1

0xc5e8,	// (0x0004f09b) grid_highlight_pane_cp02

0xc60a,	// (0x0004f0bd) bg_calc_display_pane_g1

0xa983,	// (0x0004d436) bg_calc_display_pane_g2

0xc613,	// (0x0004f0c6) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x00051c43) bg_calc_display_pane_g

0x1a4e,	// (0x00044501) cell_qdial_pane_ParamLimits

0x1a4e,	// (0x00044501) cell_qdial_pane

0x1a64,	// (0x00044517) cell_qdial_pane_g1_ParamLimits

0x1a64,	// (0x00044517) cell_qdial_pane_g1

0x1a7a,	// (0x0004452d) cell_qdial_pane_g2_ParamLimits

0x1a7a,	// (0x0004452d) cell_qdial_pane_g2

0xc61c,	// (0x0004f0cf) cell_qdial_pane_g3_ParamLimits

0xc61c,	// (0x0004f0cf) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x00051c4a) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x00051c4a) cell_qdial_pane_g

0x1aa0,	// (0x00044553) cell_qdial_pane_t1_ParamLimits

0x1aa0,	// (0x00044553) cell_qdial_pane_t1

0x1ab8,	// (0x0004456b) cell_qdial_pane_t2_ParamLimits

0x1ab8,	// (0x0004456b) cell_qdial_pane_t2

0x1acb,	// (0x0004457e) cell_qdial_pane_t3_ParamLimits

0x1acb,	// (0x0004457e) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x00051c53) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x00051c53) cell_qdial_pane_t

0xc25b,	// (0x0004ed0e) grid_highlight_pane_cp04

0xc628,	// (0x0004f0db) thumbnail_qdial_pane_ParamLimits

0xc628,	// (0x0004f0db) thumbnail_qdial_pane

0xc684,	// (0x0004f137) list_help_pane

0xc68d,	// (0x0004f140) scroll_pane_cp02

0x1ade,	// (0x00044591) help_list_pane_t1_ParamLimits

0x1ade,	// (0x00044591) help_list_pane_t1

0xa98d,	// (0x0004d440) bg_notes_pane_g2

0xa995,	// (0x0004d448) bg_notes_pane_g3

0xa99d,	// (0x0004d450) notes_bg_pane_g1

0xa9a5,	// (0x0004d458) notes_bg_pane_g4

0xa9ad,	// (0x0004d460) notes_bg_pane_g5

0xa9b5,	// (0x0004d468) notes_bg_pane_g6

0xa9bd,	// (0x0004d470) notes_bg_pane_g7

0xa9c5,	// (0x0004d478) notes_bg_pane_g8

0xa9cd,	// (0x0004d480) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x00051c71) notes_bg_pane_g

0x1b02,	// (0x000445b5) list_notes_text_pane_ParamLimits

0x1b02,	// (0x000445b5) list_notes_text_pane

0xc696,	// (0x0004f149) list_notes_text_pane_g1

0x08fb,	// (0x000433ae) list_notes_text_pane_t1

0xc589,	// (0x0004f03c) listscroll_cale_week_pane

0x1b39,	// (0x000445ec) bg_cale_heading_pane

0xc6b0,	// (0x0004f163) bg_cale_pane_cp01

0x1b55,	// (0x00044608) cale_week_corner_pane

0x1b6b,	// (0x0004461e) cale_week_day_heading_pane

0x1b87,	// (0x0004463a) cale_week_scroll_pane_g1

0x1ba0,	// (0x00044653) cale_week_scroll_pane_g2

0x1bb1,	// (0x00044664) cale_week_scroll_pane_g3

0x1bc2,	// (0x00044675) cale_week_scroll_pane_g4

0x1bd3,	// (0x00044686) cale_week_scroll_pane_g5

0x1be4,	// (0x00044697) cale_week_scroll_pane_g6

0x1bf5,	// (0x000446a8) cale_week_scroll_pane_g7

0x1c06,	// (0x000446b9) cale_week_scroll_pane_g8

0x1c17,	// (0x000446ca) cale_week_scroll_pane_g9

0x1c28,	// (0x000446db) cale_week_scroll_pane_g10

0x1c39,	// (0x000446ec) cale_week_scroll_pane_g11

0x1c4a,	// (0x000446fd) cale_week_scroll_pane_g12

0x1c5b,	// (0x0004470e) cale_week_scroll_pane_g13

0x1c74,	// (0x00044727) cale_week_scroll_pane_g14

0x1c8d,	// (0x00044740) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x00051c80) cale_week_scroll_pane_g

0x1ca6,	// (0x00044759) cale_week_time_pane

0x1cb7,	// (0x0004476a) grid_cale_week_pane

0x1cd2,	// (0x00044785) scroll_pane_cp08

0x1cea,	// (0x0004479d) cell_cale_week_pane_ParamLimits

0x1cea,	// (0x0004479d) cell_cale_week_pane

0x1d32,	// (0x000447e5) cale_week_day_heading_pane_t1

0x1d46,	// (0x000447f9) cale_week_day_heading_pane_t2

0x1d5a,	// (0x0004480d) cale_week_day_heading_pane_t3

0x1d6e,	// (0x00044821) cale_week_day_heading_pane_t4

0x1d82,	// (0x00044835) cale_week_day_heading_pane_t5

0x1d96,	// (0x00044849) cale_week_day_heading_pane_t6

0x1daa,	// (0x0004485d) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x00051c9f) cale_week_day_heading_pane_t

0xc6db,	// (0x0004f18e) bg_cale_side_pane

0x1dbe,	// (0x00044871) cale_week_time_pane_t1

0x1dd6,	// (0x00044889) cale_week_time_pane_t2

0x1dee,	// (0x000448a1) cale_week_time_pane_t3

0x1e06,	// (0x000448b9) cale_week_time_pane_t4

0x1e1e,	// (0x000448d1) cale_week_time_pane_t5

0x1e36,	// (0x000448e9) cale_week_time_pane_t6

0x1e4e,	// (0x00044901) cale_week_time_pane_t7

0x1e6a,	// (0x0004491d) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x00051cae) cale_week_time_pane_t

0x1e8a,	// (0x0004493d) cell_cale_week_pane_g2

0x1e9b,	// (0x0004494e) cell_cale_week_pane_g3_ParamLimits

0x1e9b,	// (0x0004494e) cell_cale_week_pane_g3

0xc6e9,	// (0x0004f19c) grid_highlight_pane_cp07

0xc6f1,	// (0x0004f1a4) listscroll_gms_pane

0xc6fb,	// (0x0004f1ae) grid_gms_pane

0xc704,	// (0x0004f1b7) listscroll_gms_pane_g1

0xc70c,	// (0x0004f1bf) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x00051cbf) listscroll_gms_pane_g

0x1eb3,	// (0x00044966) scroll_pane_cp010

0x1ebe,	// (0x00044971) cell_gms_pane_ParamLimits

0x1ebe,	// (0x00044971) cell_gms_pane

0x1ed8,	// (0x0004498b) cell_gms_pane_g1

0xc714,	// (0x0004f1c7) cell_gms_pane_g2

0xc71c,	// (0x0004f1cf) cell_gms_pane_g3

0xc725,	// (0x0004f1d8) cell_gms_pane_g4

0x0003,

0xf211,	// (0x00051cc4) cell_gms_pane_g

0xc72e,	// (0x0004f1e1) grid_highlight_pane_cp09

0x408c,	// (0x00046b3f) phob_pre_status_pane_g1

0x4094,	// (0x00046b47) phob_pre_status_pane_g2

0x409c,	// (0x00046b4f) phob_pre_status_pane_g3

0x40a4,	// (0x00046b57) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x000520b3) phob_pre_status_pane_g

0x40b4,	// (0x00046b67) phob_pre_status_pane_t1

0x40c4,	// (0x00046b77) phob_pre_status_pane_t2

0x40d4,	// (0x00046b87) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x000520be) phob_pre_status_pane_t

0xc25b,	// (0x0004ed0e) bg_list_pane_cp05

0x1ee8,	// (0x0004499b) grid_vorec_pane

0xa9d5,	// (0x0004d488) vorec_t1

0xa9e3,	// (0x0004d496) vorec_t2

0xa9f1,	// (0x0004d4a4) vorec_t3

0xa9ff,	// (0x0004d4b2) vorec_t4

0xaa0d,	// (0x0004d4c0) vorec_t5

0xaa1b,	// (0x0004d4ce) vorec_t6

0x0006,

0xf21a,	// (0x00051ccd) vorec_t

0xaa37,	// (0x0004d4ea) wait_bar_pane_cp01

0x1ef2,	// (0x000449a5) cell_vorec_pane_ParamLimits

0x1ef2,	// (0x000449a5) cell_vorec_pane

0xc736,	// (0x0004f1e9) cell_vorec_pane_g1

0xc25b,	// (0x0004ed0e) grid_highlight_pane_cp05

0x1f1d,	// (0x000449d0) cams_zoom_pane

0x1f2c,	// (0x000449df) image_vga_pane

0x1f46,	// (0x000449f9) main_camera_pane_g1

0x1f58,	// (0x00044a0b) main_camera_pane_g2

0x1f68,	// (0x00044a1b) main_camera_pane_g3

0x1f7c,	// (0x00044a2f) main_camera_pane_g4

0x1f90,	// (0x00044a43) main_camera_pane_g5

0x1fa4,	// (0x00044a57) main_camera_pane_g6

0x1fb8,	// (0x00044a6b) main_camera_pane_g7

0x0007,

0xf229,	// (0x00051cdc) main_camera_pane_g

0x1fcc,	// (0x00044a7f) main_camera_pane_t1

0x1fe2,	// (0x00044a95) main_camera_pane_t2

0x0001,

0xf23a,	// (0x00051ced) main_camera_pane_t

0x2020,	// (0x00044ad3) cams_zoom_pane_cp_ParamLimits

0x2020,	// (0x00044ad3) cams_zoom_pane_cp

0x2048,	// (0x00044afb) image_cif_pane_ParamLimits

0x2048,	// (0x00044afb) image_cif_pane

0x2083,	// (0x00044b36) image_subqcif_pane

0x208d,	// (0x00044b40) main_video_pane_g1_ParamLimits

0x208d,	// (0x00044b40) main_video_pane_g1

0x20b1,	// (0x00044b64) main_video_pane_g2_ParamLimits

0x20b1,	// (0x00044b64) main_video_pane_g2

0x20e7,	// (0x00044b9a) main_video_pane_g3_ParamLimits

0x20e7,	// (0x00044b9a) main_video_pane_g3

0x2115,	// (0x00044bc8) main_video_pane_g4_ParamLimits

0x2115,	// (0x00044bc8) main_video_pane_g4

0x2143,	// (0x00044bf6) main_video_pane_g5_ParamLimits

0x2143,	// (0x00044bf6) main_video_pane_g5

0xc74c,	// (0x0004f1ff) main_video_pane_g6_ParamLimits

0xc74c,	// (0x0004f1ff) main_video_pane_g6

0x0006,

0xf23f,	// (0x00051cf2) main_video_pane_g_ParamLimits

0xf23f,	// (0x00051cf2) main_video_pane_g

0x216c,	// (0x00044c1f) main_video_pane_t1_ParamLimits

0x216c,	// (0x00044c1f) main_video_pane_t1

0xc766,	// (0x0004f219) cams_zoom_pane_g1

0xc76f,	// (0x0004f222) cams_zoom_pane_g2

0xc778,	// (0x0004f22b) cams_zoom_pane_g3

0xc781,	// (0x0004f234) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x00051d01) cams_zoom_pane_g

0x21c9,	// (0x00044c7c) grid_cams_pane

0x21e3,	// (0x00044c96) linegrid_cams_pane

0x21f5,	// (0x00044ca8) cell_cams_pane_ParamLimits

0x21f5,	// (0x00044ca8) cell_cams_pane

0xc78a,	// (0x0004f23d) cams_burst_image_pane

0xc792,	// (0x0004f245) cell_cams_pane_g1

0xc25b,	// (0x0004ed0e) grid_highlight_pane_cp03

0xc5de,	// (0x0004f091) mp_bg_pane_g1

0xc25b,	// (0x0004ed0e) bg_list_pane_cp03

0xe331,	// (0x00050de4) bg_mp_pane

0xe339,	// (0x00050dec) grid_mp_pane

0xe341,	// (0x00050df4) media_player_g1

0xe34b,	// (0x00050dfe) media_player_t1

0xe359,	// (0x00050e0c) media_player_t2

0xe367,	// (0x00050e1a) media_player_t3

0xe375,	// (0x00050e28) media_player_t4

0xe383,	// (0x00050e36) media_player_t5

0xe391,	// (0x00050e44) media_player_t6

0xe39f,	// (0x00050e52) media_player_t7

0x0006,

0xf5ea,	// (0x0005209d) media_player_t

0xe3ad,	// (0x00050e60) wait_bar_pane_cp02

0xf5cf,	// (0x00052082) main_usb_pane_t

0x4083,	// (0x00046b36) cell_mp_pane

0xc5de,	// (0x0004f091) cell_mp_pane_g1

0xc25b,	// (0x0004ed0e) grid_highlight_pane_cp06

0xc79a,	// (0x0004f24d) grid_skin_colour_pane

0xc7a2,	// (0x0004f255) list_highlight_pane_cp03

0x2217,	// (0x00044cca) skin_g1

0xc7aa,	// (0x0004f25d) skin_t1

0xc7b9,	// (0x0004f26c) skin_t2

0x0001,

0xf283,	// (0x00051d36) skin_t

0x2221,	// (0x00044cd4) cell_skin_colour_pane_ParamLimits

0x2221,	// (0x00044cd4) cell_skin_colour_pane

0xc7c7,	// (0x0004f27a) cell_skin_colour_pane_g1

0x2294,	// (0x00044d47) call_video_g1_ParamLimits

0x2294,	// (0x00044d47) call_video_g1

0x22b0,	// (0x00044d63) call_video_g2_ParamLimits

0x22b0,	// (0x00044d63) call_video_g2

0x0001,

0xf288,	// (0x00051d3b) call_video_g_ParamLimits

0xf288,	// (0x00051d3b) call_video_g

0x22f5,	// (0x00044da8) call_video_uplink_pane_cp1_ParamLimits

0x22f5,	// (0x00044da8) call_video_uplink_pane_cp1

0xc7d9,	// (0x0004f28c) call_video_uplink_pane_cp2

0x2396,	// (0x00044e49) video_down_crop_pane_ParamLimits

0x2396,	// (0x00044e49) video_down_crop_pane

0x247f,	// (0x00044f32) video_down_pane_ParamLimits

0x247f,	// (0x00044f32) video_down_pane

0xc7e1,	// (0x0004f294) video_down_subqcif_pane_ParamLimits

0xc7e1,	// (0x0004f294) video_down_subqcif_pane

0xc7fb,	// (0x0004f2ae) video_down_subqcif_pane_cp_ParamLimits

0xc7fb,	// (0x0004f2ae) video_down_subqcif_pane_cp

0xc823,	// (0x0004f2d6) im_reading_pane_ParamLimits

0xc823,	// (0x0004f2d6) im_reading_pane

0x2588,	// (0x0004503b) im_writing_pane_ParamLimits

0x2588,	// (0x0004503b) im_writing_pane

0x25a6,	// (0x00045059) im_reading_pane_t1

0xc83d,	// (0x0004f2f0) list_im_pane

0xc84e,	// (0x0004f301) scroll_pane_cp07

0x25e5,	// (0x00045098) im_writing_pane_t1_ParamLimits

0x25e5,	// (0x00045098) im_writing_pane_t1

0xc867,	// (0x0004f31a) im_writing_pane_t2_ParamLimits

0xc867,	// (0x0004f31a) im_writing_pane_t2

0x0001,

0xf292,	// (0x00051d45) im_writing_pane_t_ParamLimits

0xf292,	// (0x00051d45) im_writing_pane_t

0xc25b,	// (0x0004ed0e) input_focus_pane_cp04

0xc25b,	// (0x0004ed0e) input_focus_pane_cp05

0x25fa,	// (0x000450ad) list_im_single_pane_ParamLimits

0x25fa,	// (0x000450ad) list_im_single_pane

0x2613,	// (0x000450c6) list_single_im_pane_t1

0x4043,	// (0x00046af6) blid_accuracy_pane

0x404b,	// (0x00046afe) blid_compass_pane

0x4055,	// (0x00046b08) main_location_t1

0x4065,	// (0x00046b18) main_location_t2

0x4075,	// (0x00046b28) main_location_t3

0x0002,

0xf5f9,	// (0x000520ac) main_location_t

0xc25b,	// (0x0004ed0e) aid_levels_location

0xc5de,	// (0x0004f091) blid_accuracy_pane_g1

0xc5de,	// (0x0004f091) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x00051da7) blid_accuracy_pane_g

0xc8af,	// (0x0004f362) wml_content_pane

0xc8ed,	// (0x0004f3a0) wml_button_pane_ParamLimits

0xc8ed,	// (0x0004f3a0) wml_button_pane

0x2622,	// (0x000450d5) wml_list_single_large_pane_ParamLimits

0x2622,	// (0x000450d5) wml_list_single_large_pane

0x263b,	// (0x000450ee) wml_list_single_medium_pane_ParamLimits

0x263b,	// (0x000450ee) wml_list_single_medium_pane

0x2655,	// (0x00045108) wml_list_single_small_pane_ParamLimits

0x2655,	// (0x00045108) wml_list_single_small_pane

0xc901,	// (0x0004f3b4) wml_selection_box_pane_ParamLimits

0xc901,	// (0x0004f3b4) wml_selection_box_pane

0xc914,	// (0x0004f3c7) wml_list_single_pane_t1

0xc923,	// (0x0004f3d6) wml_list_single_medium_pane_t1

0xc932,	// (0x0004f3e5) wml_list_single_large_pane_t1

0xc941,	// (0x0004f3f4) input_focus_pane_cp02_ParamLimits

0xc941,	// (0x0004f3f4) input_focus_pane_cp02

0xc954,	// (0x0004f407) wml_selection_box_pane_g1

0xc95d,	// (0x0004f410) wml_selection_box_pane_t1_ParamLimits

0xc95d,	// (0x0004f410) wml_selection_box_pane_t1

0xc4b6,	// (0x0004ef69) bg_wml_button_pane_ParamLimits

0xc4b6,	// (0x0004ef69) bg_wml_button_pane

0xc975,	// (0x0004f428) wml_button_pane_g1

0xc97d,	// (0x0004f430) wml_button_pane_t1

0xc975,	// (0x0004f428) wml_button_bg_pane_g1

0xc98d,	// (0x0004f440) wml_button_bg_pane_g2

0xc995,	// (0x0004f448) wml_button_bg_pane_g3

0xc99d,	// (0x0004f450) wml_button_bg_pane_g4

0xc9a5,	// (0x0004f458) wml_button_bg_pane_g5

0xc9ad,	// (0x0004f460) wml_button_bg_pane_g6

0xc9b5,	// (0x0004f468) wml_button_bg_pane_g7

0xc9bd,	// (0x0004f470) wml_button_bg_pane_g8

0xc9c5,	// (0x0004f478) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x00051d4a) wml_button_bg_pane_g

0x2674,	// (0x00045127) bg_list_pane_cp02

0xc9cd,	// (0x0004f480) mce_header_pane_ParamLimits

0xc9cd,	// (0x0004f480) mce_header_pane

0xc9e3,	// (0x0004f496) mce_icon_pane

0xc9e3,	// (0x0004f496) mce_image_pane

0xc9ec,	// (0x0004f49f) mce_text_pane_ParamLimits

0xc9ec,	// (0x0004f49f) mce_text_pane

0x267e,	// (0x00045131) scroll_pane_cp03

0xc8e5,	// (0x0004f398) scroll_pane_cp04

0xc9ff,	// (0x0004f4b2) scroll_pane_cp05_ParamLimits

0xc9ff,	// (0x0004f4b2) scroll_pane_cp05

0x2688,	// (0x0004513b) mce_header_field_pane_ParamLimits

0x2688,	// (0x0004513b) mce_header_field_pane

0x26a1,	// (0x00045154) mce_header_field_pane_2_ParamLimits

0x26a1,	// (0x00045154) mce_header_field_pane_2

0x26b7,	// (0x0004516a) mce_header_field_pane_3

0x26bf,	// (0x00045172) list_single_mce_message_pane_ParamLimits

0x26bf,	// (0x00045172) list_single_mce_message_pane

0x26db,	// (0x0004518e) list_single_mce_smart_pane_ParamLimits

0x26db,	// (0x0004518e) list_single_mce_smart_pane

0xca0b,	// (0x0004f4be) input_focus_pane_cp03

0xca14,	// (0x0004f4c7) list_header_data_pane

0x2702,	// (0x000451b5) mce_header_field_pane_t1

0x2712,	// (0x000451c5) list_single_mce_header_pane_ParamLimits

0x2712,	// (0x000451c5) list_single_mce_header_pane

0xca1c,	// (0x0004f4cf) list_single_mce_header_pane_t1

0xca2b,	// (0x0004f4de) list_single_mce_message_pane_g1

0xca33,	// (0x0004f4e6) list_single_mce_message_pane_t1

0x2744,	// (0x000451f7) bg_cale_heading_pane_cp01_ParamLimits

0x2744,	// (0x000451f7) bg_cale_heading_pane_cp01

0xca41,	// (0x0004f4f4) bg_cale_pane_cp02_ParamLimits

0xca41,	// (0x0004f4f4) bg_cale_pane_cp02

0x2777,	// (0x0004522a) cale_month_corner_pane

0x278d,	// (0x00045240) cale_month_day_heading_pane_ParamLimits

0x278d,	// (0x00045240) cale_month_day_heading_pane

0x27c0,	// (0x00045273) cale_month_pane_g1_ParamLimits

0x27c0,	// (0x00045273) cale_month_pane_g1

0x27ec,	// (0x0004529f) cale_month_pane_g2_ParamLimits

0x27ec,	// (0x0004529f) cale_month_pane_g2

0x280d,	// (0x000452c0) cale_month_pane_g3_ParamLimits

0x280d,	// (0x000452c0) cale_month_pane_g3

0x2849,	// (0x000452fc) cale_month_pane_g4_ParamLimits

0x2849,	// (0x000452fc) cale_month_pane_g4

0x2885,	// (0x00045338) cale_month_pane_g5_ParamLimits

0x2885,	// (0x00045338) cale_month_pane_g5

0x28c1,	// (0x00045374) cale_month_pane_g6_ParamLimits

0x28c1,	// (0x00045374) cale_month_pane_g6

0x28fd,	// (0x000453b0) cale_month_pane_g7_ParamLimits

0x28fd,	// (0x000453b0) cale_month_pane_g7

0x2939,	// (0x000453ec) cale_month_pane_g8_ParamLimits

0x2939,	// (0x000453ec) cale_month_pane_g8

0x2975,	// (0x00045428) cale_month_pane_g9_ParamLimits

0x2975,	// (0x00045428) cale_month_pane_g9

0x29ab,	// (0x0004545e) cale_month_pane_g10_ParamLimits

0x29ab,	// (0x0004545e) cale_month_pane_g10

0x29d5,	// (0x00045488) cale_month_pane_g11_ParamLimits

0x29d5,	// (0x00045488) cale_month_pane_g11

0x29ff,	// (0x000454b2) cale_month_pane_g12_ParamLimits

0x29ff,	// (0x000454b2) cale_month_pane_g12

0x2a2d,	// (0x000454e0) cale_month_pane_g13_ParamLimits

0x2a2d,	// (0x000454e0) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x00051d5d) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x00051d5d) cale_month_pane_g

0x2a5b,	// (0x0004550e) cale_month_week_pane

0x2a6c,	// (0x0004551f) grid_cale_month_pane_ParamLimits

0x2a6c,	// (0x0004551f) grid_cale_month_pane

0x2a9a,	// (0x0004554d) cale_month_day_heading_pane_t1

0x2af8,	// (0x000455ab) cale_month_day_heading_pane_t2

0x2b5d,	// (0x00045610) cale_month_day_heading_pane_t3

0x2bc2,	// (0x00045675) cale_month_day_heading_pane_t4

0x2c27,	// (0x000456da) cale_month_day_heading_pane_t5

0x2c8c,	// (0x0004573f) cale_month_day_heading_pane_t6

0x2cf1,	// (0x000457a4) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x00051d78) cale_month_day_heading_pane_t

0xc6db,	// (0x0004f18e) bg_cale_side_pane_cp01

0x2d56,	// (0x00045809) cale_month_week_pane_t1

0x2d6d,	// (0x00045820) cale_month_week_pane_t2

0x2d84,	// (0x00045837) cale_month_week_pane_t3

0x2d9b,	// (0x0004584e) cale_month_week_pane_t4

0x2db2,	// (0x00045865) cale_month_week_pane_t5

0x2dc9,	// (0x0004587c) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x00051d87) cale_month_week_pane_t

0x2de8,	// (0x0004589b) cell_cale_month_pane_ParamLimits

0x2de8,	// (0x0004589b) cell_cale_month_pane

0xab27,	// (0x0004d5da) cell_cale_month_pane_g1

0x2e96,	// (0x00045949) cell_cale_month_pane_t1_ParamLimits

0x2e96,	// (0x00045949) cell_cale_month_pane_t1

0xc6e9,	// (0x0004f19c) grid_highlight_pane_cp08

0xc5de,	// (0x0004f091) main_smil_g1

0x2eb2,	// (0x00045965) smil_status_pane

0xca76,	// (0x0004f529) smil_text_pane

0xe24f,	// (0x00050d02) bg_popup_call3_rect_pane_g8

0xe257,	// (0x00050d0a) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x00052040) bg_popup_call3_rect_pane_g

0xe4ec,	// (0x00050f9f) smil_status_volume_pane_g1

0xca80,	// (0x0004f533) smil_status_pane_t1

0xac9c,	// (0x0004d74f) volume_smil_pane

0xca97,	// (0x0004f54a) list_smil_text_pane

0x2ec7,	// (0x0004597a) scroll_pane_cp011

0x2ed2,	// (0x00045985) smil_text_list_pane_t1_ParamLimits

0x2ed2,	// (0x00045985) smil_text_list_pane_t1

0xab33,	// (0x0004d5e6) aid_volume_smil_ParamLimits

0xab33,	// (0x0004d5e6) aid_volume_smil

0xc5de,	// (0x0004f091) smil_volume_pane_g1

0xc5de,	// (0x0004f091) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x00051da7) smil_volume_pane_g

0xc589,	// (0x0004f03c) listscroll_cale_day_pane

0xcaa1,	// (0x0004f554) bg_cale_pane

0xcab9,	// (0x0004f56c) list_cale_pane

0xcaca,	// (0x0004f57d) scroll_pane_cp09

0xcadb,	// (0x0004f58e) cale_bg_pane_g1

0xcae3,	// (0x0004f596) cale_bg_pane_g2

0xcaeb,	// (0x0004f59e) cale_bg_pane_g3

0xcaf3,	// (0x0004f5a6) cale_bg_pane_g4

0xcafb,	// (0x0004f5ae) cale_bg_pane_g5

0xcb03,	// (0x0004f5b6) cale_bg_pane_g6

0xcb0b,	// (0x0004f5be) cale_bg_pane_g7

0xcb13,	// (0x0004f5c6) cale_bg_pane_g8

0xcb1b,	// (0x0004f5ce) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x00051dac) cale_bg_pane_g

0x2f27,	// (0x000459da) list_cale_time_pane_ParamLimits

0x2f27,	// (0x000459da) list_cale_time_pane

0x2f3c,	// (0x000459ef) list_cale_time_pane_g1_ParamLimits

0x2f3c,	// (0x000459ef) list_cale_time_pane_g1

0xcb23,	// (0x0004f5d6) list_cale_time_pane_g2_ParamLimits

0xcb23,	// (0x0004f5d6) list_cale_time_pane_g2

0x2f48,	// (0x000459fb) list_cale_time_pane_g3_ParamLimits

0x2f48,	// (0x000459fb) list_cale_time_pane_g3

0x2f56,	// (0x00045a09) list_cale_time_pane_g4_ParamLimits

0x2f56,	// (0x00045a09) list_cale_time_pane_g4

0x2f64,	// (0x00045a17) list_cale_time_pane_g5_ParamLimits

0x2f64,	// (0x00045a17) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x00051dbf) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x00051dbf) list_cale_time_pane_g

0x2f72,	// (0x00045a25) list_cale_time_pane_t1_ParamLimits

0x2f72,	// (0x00045a25) list_cale_time_pane_t1

0x2f9a,	// (0x00045a4d) list_cale_time_pane_t2_ParamLimits

0x2f9a,	// (0x00045a4d) list_cale_time_pane_t2

0x32b6,	// (0x00045d69) aid_blid_cardinal_pane

0x32f8,	// (0x00045dab) compass_pane_t4

0x2fc2,	// (0x00045a75) list_cale_time_pane_t4_ParamLimits

0x2fc2,	// (0x00045a75) list_cale_time_pane_t4

0x3306,	// (0x00045db9) compass_pane_t5

0x3316,	// (0x00045dc9) compass_pane_t6

0x3324,	// (0x00045dd7) compass_pane_t7

0xcf23,	// (0x0004f9d6) navi_pane_cc_t1

0xd078,	// (0x0004fb2b) aid_phob_thumbnail_center_pane

0x3a09,	// (0x000464bc) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x00051dcc) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x00051dcc) list_cale_time_pane_t

0xa7cf,	// (0x0004d282) bg_popup_window_pane_cp02_ParamLimits

0xa7cf,	// (0x0004d282) bg_popup_window_pane_cp02

0xcb3d,	// (0x0004f5f0) heading_pane_cp01_ParamLimits

0xcb3d,	// (0x0004f5f0) heading_pane_cp01

0xcb49,	// (0x0004f5fc) loc_req_pane_ParamLimits

0xcb49,	// (0x0004f5fc) loc_req_pane

0xcb59,	// (0x0004f60c) loc_type_pane_ParamLimits

0xcb59,	// (0x0004f60c) loc_type_pane

0xcb6b,	// (0x0004f61e) loc_type_pane_t1_ParamLimits

0xcb6b,	// (0x0004f61e) loc_type_pane_t1

0xcb7d,	// (0x0004f630) loc_type_pane_t2_ParamLimits

0xcb7d,	// (0x0004f630) loc_type_pane_t2

0xcb8f,	// (0x0004f642) loc_type_pane_t3_ParamLimits

0xcb8f,	// (0x0004f642) loc_type_pane_t3

0x0002,

0xf320,	// (0x00051dd3) loc_type_pane_t_ParamLimits

0xf320,	// (0x00051dd3) loc_type_pane_t

0xcba1,	// (0x0004f654) list_loc_req_pane

0xcbab,	// (0x0004f65e) scroll_pane_cp012

0x2fea,	// (0x00045a9d) list_single_loc_request_popup_menu_pane_ParamLimits

0x2fea,	// (0x00045a9d) list_single_loc_request_popup_menu_pane

0xcbb6,	// (0x0004f669) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xcbb6,	// (0x0004f669) list_single_loc_request_popup_menu_pane_g1

0xcbc2,	// (0x0004f675) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcbc2,	// (0x0004f675) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x00051dda) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x00051dda) list_single_loc_request_popup_menu_pane_g

0xcbce,	// (0x0004f681) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xcbce,	// (0x0004f681) list_single_loc_request_popup_menu_pane_t1

0xc4b6,	// (0x0004ef69) bg_popup_window_pane_cp03_ParamLimits

0xc4b6,	// (0x0004ef69) bg_popup_window_pane_cp03

0xd6c8,	// (0x0005017b) heading_loc_req_pane_ParamLimits

0xd6c8,	// (0x0005017b) heading_loc_req_pane

0x2ff7,	// (0x00045aaa) popup_dyc_status_message_window_g1_ParamLimits

0x2ff7,	// (0x00045aaa) popup_dyc_status_message_window_g1

0x300b,	// (0x00045abe) popup_dyc_status_message_window_t1_ParamLimits

0x300b,	// (0x00045abe) popup_dyc_status_message_window_t1

0x3020,	// (0x00045ad3) popup_dyc_status_message_window_t2_ParamLimits

0x3020,	// (0x00045ad3) popup_dyc_status_message_window_t2

0x3035,	// (0x00045ae8) popup_dyc_status_message_window_t3_ParamLimits

0x3035,	// (0x00045ae8) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x00051ddf) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x00051ddf) popup_dyc_status_message_window_t

0xc25b,	// (0x0004ed0e) bg_heading_pane_cp01

0xcbe4,	// (0x0004f697) heading_loc_req_pane_g1

0xcbec,	// (0x0004f69f) heading_loc_req_pane_g2

0xcbf4,	// (0x0004f6a7) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x00051de6) heading_loc_req_pane_g

0xcbfc,	// (0x0004f6af) heading_loc_req_pane_t1

0xcc0c,	// (0x0004f6bf) bg_popup_sub_pane_cp01_ParamLimits

0xcc0c,	// (0x0004f6bf) bg_popup_sub_pane_cp01

0xcc1a,	// (0x0004f6cd) popup_cale_events_window_g1_ParamLimits

0xcc1a,	// (0x0004f6cd) popup_cale_events_window_g1

0xcc3a,	// (0x0004f6ed) popup_cale_events_window_g2_ParamLimits

0xcc3a,	// (0x0004f6ed) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x00051e1a) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x00051e1a) popup_cale_events_window_g

0xcc5a,	// (0x0004f70d) popup_cale_events_window_t1_ParamLimits

0xcc5a,	// (0x0004f70d) popup_cale_events_window_t1

0xcc6c,	// (0x0004f71f) popup_cale_events_window_t2_ParamLimits

0xcc6c,	// (0x0004f71f) popup_cale_events_window_t2

0xccaa,	// (0x0004f75d) popup_cale_events_window_t3_ParamLimits

0xccaa,	// (0x0004f75d) popup_cale_events_window_t3

0xcce4,	// (0x0004f797) popup_cale_events_window_t4_ParamLimits

0xcce4,	// (0x0004f797) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x00051e1f) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x00051e1f) popup_cale_events_window_t

0x3069,	// (0x00045b1c) call_type_pane

0x3079,	// (0x00045b2c) popup_call_status_window_g1

0x308d,	// (0x00045b40) popup_call_status_window_g2

0x30a1,	// (0x00045b54) popup_call_status_window_g3

0x0002,

0xf375,	// (0x00051e28) popup_call_status_window_g

0xcd1a,	// (0x0004f7cd) call_type_pane_g1

0xcd23,	// (0x0004f7d6) call_type_pane_g2

0x0001,

0xf37c,	// (0x00051e2f) call_type_pane_g

0xc25b,	// (0x0004ed0e) bg_popup_sub_pane_cp02

0xcd2c,	// (0x0004f7df) listscroll_popup_wml_pane

0xcd34,	// (0x0004f7e7) list_wml_pane

0xcd3e,	// (0x0004f7f1) scroll_pane_cp013

0xcd49,	// (0x0004f7fc) list_single_graphic_popup_wml_pane_ParamLimits

0xcd49,	// (0x0004f7fc) list_single_graphic_popup_wml_pane

0xc5de,	// (0x0004f091) list_single_graphic_popup_wml_pane_g1

0xcd5d,	// (0x0004f810) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x00051e34) list_single_graphic_popup_wml_pane_g

0xcd65,	// (0x0004f818) list_single_graphic_popup_wml_pane_t1

0xcd7b,	// (0x0004f82e) aid_call_pane

0xc4ae,	// (0x0004ef61) popup_clock_analogue_window_g1

0xc4ae,	// (0x0004ef61) popup_clock_analogue_window_g2

0xabcc,	// (0x0004d67f) popup_clock_analogue_window_g3

0xabcc,	// (0x0004d67f) popup_clock_analogue_window_g4

0xc5de,	// (0x0004f091) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x00051e39) popup_clock_analogue_window_g

0xabd4,	// (0x0004d687) popup_clock_analogue_window_t1

0xabe2,	// (0x0004d695) clock_digital_number_pane_ParamLimits

0xabe2,	// (0x0004d695) clock_digital_number_pane

0xabee,	// (0x0004d6a1) clock_digital_number_pane_cp02_ParamLimits

0xabee,	// (0x0004d6a1) clock_digital_number_pane_cp02

0xabfa,	// (0x0004d6ad) clock_digital_number_pane_cp03_ParamLimits

0xabfa,	// (0x0004d6ad) clock_digital_number_pane_cp03

0xac06,	// (0x0004d6b9) clock_digital_number_pane_cp04_ParamLimits

0xac06,	// (0x0004d6b9) clock_digital_number_pane_cp04

0xac12,	// (0x0004d6c5) clock_digital_separator_pane_ParamLimits

0xac12,	// (0x0004d6c5) clock_digital_separator_pane

0xac1e,	// (0x0004d6d1) popup_clock_digital_window_t1

0xc5de,	// (0x0004f091) clock_digital_number_pane_g1

0xc5de,	// (0x0004f091) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x00051da7) clock_digital_number_pane_g

0xc5de,	// (0x0004f091) clock_digital_separator_pane_g1

0xc5de,	// (0x0004f091) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x00051da7) clock_digital_separator_pane_g

0xc25b,	// (0x0004ed0e) bg_popup_window_pane_cp04

0xcd83,	// (0x0004f836) heading_pane_cp03

0xcd8b,	// (0x0004f83e) listscroll_popup_gms_pane

0xcd93,	// (0x0004f846) grid_large_graphic_popup_pane

0xcd9d,	// (0x0004f850) listscroll_popup_gms_pane_g1

0xcda5,	// (0x0004f858) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x00051e44) listscroll_popup_gms_pane_g

0xc8e5,	// (0x0004f398) scroll_pane_cp014

0x30b1,	// (0x00045b64) cell_large_graphic_popup_pane_ParamLimits

0x30b1,	// (0x00045b64) cell_large_graphic_popup_pane

0x30c9,	// (0x00045b7c) cell_large_graphic_popup_pane_g1_ParamLimits

0x30c9,	// (0x00045b7c) cell_large_graphic_popup_pane_g1

0xcdad,	// (0x0004f860) cell_large_graphic_popup_pane_g2_ParamLimits

0xcdad,	// (0x0004f860) cell_large_graphic_popup_pane_g2

0xcdb9,	// (0x0004f86c) cell_large_graphic_popup_pane_g3_ParamLimits

0xcdb9,	// (0x0004f86c) cell_large_graphic_popup_pane_g3

0xcdc6,	// (0x0004f879) cell_large_graphic_popup_pane_g4_ParamLimits

0xcdc6,	// (0x0004f879) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x00051e49) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x00051e49) cell_large_graphic_popup_pane_g

0xcdd6,	// (0x0004f889) grid_highlight_pane_cp010

0xc5de,	// (0x0004f091) bg_popup_call_pane_g1

0xcde0,	// (0x0004f893) list_single_graphic_popup_conf_pane_ParamLimits

0xcde0,	// (0x0004f893) list_single_graphic_popup_conf_pane

0xcdf2,	// (0x0004f8a5) list_highlight_pane_cp01

0xcdfb,	// (0x0004f8ae) list_single_graphic_popup_conf_pane_g1

0xce03,	// (0x0004f8b6) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x00051e52) list_single_graphic_popup_conf_pane_g

0xce0b,	// (0x0004f8be) list_single_graphic_popup_conf_pane_t1

0xce19,	// (0x0004f8cc) linegrid_cams_pane_g1

0x30d5,	// (0x00045b88) linegrid_cams_pane_g2

0xc71c,	// (0x0004f1cf) linegrid_cams_pane_g3

0xce22,	// (0x0004f8d5) linegrid_cams_pane_g4

0x30de,	// (0x00045b91) linegrid_cams_pane_g5

0x30e7,	// (0x00045b9a) linegrid_cams_pane_g6

0xc725,	// (0x0004f1d8) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x00051e57) linegrid_cams_pane_g

0xce2b,	// (0x0004f8de) popup_clock_analogue_window

0xce2b,	// (0x0004f8de) popup_clock_digital_window

0xc25b,	// (0x0004ed0e) popup_phob_thumbnail_window

0xc5de,	// (0x0004f091) call_video_uplink_pane_g1

0xce34,	// (0x0004f8e7) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x00051e66) call_video_uplink_pane_g

0xce3c,	// (0x0004f8ef) video_uplink_pane

0xce44,	// (0x0004f8f7) mce_image_pane_g1

0x30f2,	// (0x00045ba5) mce_image_pane_g2

0x30fc,	// (0x00045baf) mce_image_pane_g3

0x3106,	// (0x00045bb9) mce_image_pane_g4

0x310e,	// (0x00045bc1) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x00051e6b) mce_image_pane_g

0xce4e,	// (0x0004f901) control_top_pane_stacon_cp01_ParamLimits

0xce4e,	// (0x0004f901) control_top_pane_stacon_cp01

0xce62,	// (0x0004f915) uni_indicator_pane_stacon_cp01_ParamLimits

0xce62,	// (0x0004f915) uni_indicator_pane_stacon_cp01

0xce73,	// (0x0004f926) bg_popup_sub_pane_cp03

0x3116,	// (0x00045bc9) chi_dic_find_pane

0x311e,	// (0x00045bd1) listscroll_chi_dic_pane

0x3127,	// (0x00045bda) main_pane_chidic_g1

0x313a,	// (0x00045bed) chi_dic_find_pane_t1

0xce7d,	// (0x0004f930) find_chidic_pane

0xce86,	// (0x0004f939) chi_dic_list_pane_ParamLimits

0xce86,	// (0x0004f939) chi_dic_list_pane

0xce97,	// (0x0004f94a) scroll_pane_cp020

0x3148,	// (0x00045bfb) find_chidic_pane_t1

0xc25b,	// (0x0004ed0e) input_focus_pane_cp06

0x3157,	// (0x00045c0a) list_chi_dic_pane_ParamLimits

0x3157,	// (0x00045c0a) list_chi_dic_pane

0x3169,	// (0x00045c1c) list_chi_dic_pane_t1_ParamLimits

0x3169,	// (0x00045c1c) list_chi_dic_pane_t1

0xc25b,	// (0x0004ed0e) list_highlight_pane_cp020

0xce9f,	// (0x0004f952) bg_cale_heading_pane_g1

0x317c,	// (0x00045c2f) bg_cale_heading_pane_g2

0x3184,	// (0x00045c37) bg_cale_heading_pane_g3

0x318c,	// (0x00045c3f) bg_cale_heading_pane_g4

0x3194,	// (0x00045c47) bg_cale_heading_pane_g5

0x319c,	// (0x00045c4f) bg_cale_heading_pane_g6

0x31a4,	// (0x00045c57) bg_cale_heading_pane_g7

0x31ac,	// (0x00045c5f) bg_cale_heading_pane_g8

0x31b4,	// (0x00045c67) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x00051e76) bg_cale_heading_pane_g

0xce9f,	// (0x0004f952) bg_cale_side_pane_g1

0x31bc,	// (0x00045c6f) bg_cale_side_pane_g2

0x31c6,	// (0x00045c79) bg_cale_side_pane_g3

0x31d0,	// (0x00045c83) bg_cale_side_pane_g4

0x31da,	// (0x00045c8d) bg_cale_side_pane_g5

0x31e4,	// (0x00045c97) bg_cale_side_pane_g6

0x31ee,	// (0x00045ca1) bg_cale_side_pane_g7

0x31f8,	// (0x00045cab) bg_cale_side_pane_g8

0x3200,	// (0x00045cb3) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x00051e89) bg_cale_side_pane_g

0x3208,	// (0x00045cbb) popup_call_status_window_ParamLimits

0x3208,	// (0x00045cbb) popup_call_status_window

0xcea7,	// (0x0004f95a) stacon_top_pane

0xceaf,	// (0x0004f962) status_pane_ParamLimits

0xceaf,	// (0x0004f962) status_pane

0xcec4,	// (0x0004f977) status_small_pane

0xcecc,	// (0x0004f97f) control_pane

0xc25b,	// (0x0004ed0e) stacon_bottom_pane

0xced4,	// (0x0004f987) list_single_mce_smart_pane_t1_ParamLimits

0xced4,	// (0x0004f987) list_single_mce_smart_pane_t1

0xcee7,	// (0x0004f99a) list_single_mce_smart_pane_t2_ParamLimits

0xcee7,	// (0x0004f99a) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x00051e9c) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x00051e9c) list_single_mce_smart_pane_t

0x3255,	// (0x00045d08) compass_pane

0x3260,	// (0x00045d13) main_location2_pane_t1

0x3276,	// (0x00045d29) main_location2_pane_t2

0x328c,	// (0x00045d3f) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x00051ea1) main_location2_pane_t

0xcf06,	// (0x0004f9b9) compass_pane_g1_ParamLimits

0xcf06,	// (0x0004f9b9) compass_pane_g1

0x32da,	// (0x00045d8d) compass_pane_t1

0x32e9,	// (0x00045d9c) compass_pane_t2

0x0005,

0xf3f7,	// (0x00051eaa) compass_pane_t

0x3334,	// (0x00045de7) text_secondary_cp61

0xcf1a,	// (0x0004f9cd) navi_pane_cams_g5

0xcf3d,	// (0x0004f9f0) navi_pane_im_t1

0xcf4b,	// (0x0004f9fe) navi_pane_mp_g1_ParamLimits

0xcf4b,	// (0x0004f9fe) navi_pane_mp_g1

0xcf5f,	// (0x0004fa12) navi_pane_mp_g2_ParamLimits

0xcf5f,	// (0x0004fa12) navi_pane_mp_g2

0xcf6b,	// (0x0004fa1e) navi_pane_mp_g3_ParamLimits

0xcf6b,	// (0x0004fa1e) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x00051ebe) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x00051ebe) navi_pane_mp_g

0xcf77,	// (0x0004fa2a) navi_pane_mp_t1

0xcf85,	// (0x0004fa38) navi_pane_mp_t2

0x0002,

0xf412,	// (0x00051ec5) navi_pane_mp_t

0xcfc1,	// (0x0004fa74) navi_pane_vt_g1

0xcf77,	// (0x0004fa2a) navi_pane_vt_t1

0xcfc9,	// (0x0004fa7c) navi_slider_pane

0xcfd1,	// (0x0004fa84) zooming_pane

0xcfd9,	// (0x0004fa8c) navi_slider_pane_g1

0xac3b,	// (0x0004d6ee) navi_slider_pane_g2

0x0006,

0xf419,	// (0x00051ecc) navi_slider_pane_g

0xcffd,	// (0x0004fab0) aid_levels_zoom

0xd005,	// (0x0004fab8) zooming_pane_g1

0xd00d,	// (0x0004fac0) zooming_pane_g2

0xd00d,	// (0x0004fac0) zooming_pane_g3

0x0002,

0xf428,	// (0x00051edb) zooming_pane_g

0xd015,	// (0x0004fac8) level_10_zoom

0xd01e,	// (0x0004fad1) level_11_zoom

0xd027,	// (0x0004fada) level_1_zoom

0xd030,	// (0x0004fae3) level_2_zoom

0xd039,	// (0x0004faec) level_3_zoom

0xd042,	// (0x0004faf5) level_4_zoom

0xd04b,	// (0x0004fafe) level_5_zoom

0xd054,	// (0x0004fb07) level_6_zoom

0xd05d,	// (0x0004fb10) level_7_zoom

0xd066,	// (0x0004fb19) level_8_zoom

0xd06f,	// (0x0004fb22) level_9_zoom

0xd080,	// (0x0004fb33) popup_phob_thumbnail_window_g1

0xd088,	// (0x0004fb3b) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x00051ee2) popup_phob_thumbnail_window_g

0xe3b5,	// (0x00050e68) level_1_location

0xe3bd,	// (0x00050e70) level_2_location

0xe3c5,	// (0x00050e78) level_3_location

0xe3cd,	// (0x00050e80) level_4_location

0xcfd1,	// (0x0004fa84) level_5_location

0x3475,	// (0x00045f28) mce_icon_pane_g1

0x347d,	// (0x00045f30) mce_icon_pane_g2

0x0001,

0xf434,	// (0x00051ee7) mce_icon_pane_g

0x3485,	// (0x00045f38) main_mup_pane_g1_ParamLimits

0x3485,	// (0x00045f38) main_mup_pane_g1

0x349b,	// (0x00045f4e) main_mup_pane_g2_ParamLimits

0x349b,	// (0x00045f4e) main_mup_pane_g2

0x34b3,	// (0x00045f66) main_mup_pane_g3_ParamLimits

0x34b3,	// (0x00045f66) main_mup_pane_g3

0x34cb,	// (0x00045f7e) main_mup_pane_g4_ParamLimits

0x34cb,	// (0x00045f7e) main_mup_pane_g4

0x34dd,	// (0x00045f90) main_mup_pane_g5_ParamLimits

0x34dd,	// (0x00045f90) main_mup_pane_g5

0x34f9,	// (0x00045fac) main_mup_pane_g6_ParamLimits

0x34f9,	// (0x00045fac) main_mup_pane_g6

0x3513,	// (0x00045fc6) main_mup_pane_g7_ParamLimits

0x3513,	// (0x00045fc6) main_mup_pane_g7

0x3531,	// (0x00045fe4) main_mup_pane_g8_ParamLimits

0x3531,	// (0x00045fe4) main_mup_pane_g8

0x354f,	// (0x00046002) main_mup_pane_g9_ParamLimits

0x354f,	// (0x00046002) main_mup_pane_g9

0x356b,	// (0x0004601e) main_mup_pane_g10_ParamLimits

0x356b,	// (0x0004601e) main_mup_pane_g10

0x3589,	// (0x0004603c) main_mup_pane_g11_ParamLimits

0x3589,	// (0x0004603c) main_mup_pane_g11

0x35a3,	// (0x00046056) main_mup_pane_g12_ParamLimits

0x35a3,	// (0x00046056) main_mup_pane_g12

0x35b9,	// (0x0004606c) main_mup_pane_g13_ParamLimits

0x35b9,	// (0x0004606c) main_mup_pane_g13

0x000c,

0xf439,	// (0x00051eec) main_mup_pane_g_ParamLimits

0xf439,	// (0x00051eec) main_mup_pane_g

0x35cd,	// (0x00046080) main_mup_pane_t1_ParamLimits

0x35cd,	// (0x00046080) main_mup_pane_t1

0x35e9,	// (0x0004609c) main_mup_pane_t2_ParamLimits

0x35e9,	// (0x0004609c) main_mup_pane_t2

0x3601,	// (0x000460b4) main_mup_pane_t3_ParamLimits

0x3601,	// (0x000460b4) main_mup_pane_t3

0x3619,	// (0x000460cc) main_mup_pane_t4_ParamLimits

0x3619,	// (0x000460cc) main_mup_pane_t4

0x3637,	// (0x000460ea) main_mup_pane_t5_ParamLimits

0x3637,	// (0x000460ea) main_mup_pane_t5

0x364c,	// (0x000460ff) main_mup_pane_t6_ParamLimits

0x364c,	// (0x000460ff) main_mup_pane_t6

0x0005,

0xf454,	// (0x00051f07) main_mup_pane_t_ParamLimits

0xf454,	// (0x00051f07) main_mup_pane_t

0x365e,	// (0x00046111) mup_progress_pane_ParamLimits

0x365e,	// (0x00046111) mup_progress_pane

0x366a,	// (0x0004611d) mup_visualizer_pane_ParamLimits

0x366a,	// (0x0004611d) mup_visualizer_pane

0x369c,	// (0x0004614f) mup_volume_pane_ParamLimits

0x369c,	// (0x0004614f) mup_volume_pane

0xd090,	// (0x0004fb43) mup_visualizer_pane_g1_ParamLimits

0xd090,	// (0x0004fb43) mup_visualizer_pane_g1

0xd090,	// (0x0004fb43) mup_visualizer_pane_g2_ParamLimits

0xd090,	// (0x0004fb43) mup_visualizer_pane_g2

0xcf06,	// (0x0004f9b9) mup_visualizer_pane_g3_ParamLimits

0xcf06,	// (0x0004f9b9) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x00051f14) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x00051f14) mup_visualizer_pane_g

0xc5de,	// (0x0004f091) mup_volume_pane_g1

0xd0a6,	// (0x0004fb59) mup_volume_pane_g2

0x0001,

0xf468,	// (0x00051f1b) mup_volume_pane_g

0xc5de,	// (0x0004f091) mup_progress_pane_g1

0xd0af,	// (0x0004fb62) mup_progress_pane_g2

0xd0b8,	// (0x0004fb6b) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x00051f20) mup_progress_pane_g

0xc25b,	// (0x0004ed0e) bg_popup_window_pane_cp05

0xd0c1,	// (0x0004fb74) heading_pane_cp02_ParamLimits

0xd0c1,	// (0x0004fb74) heading_pane_cp02

0xd0dd,	// (0x0004fb90) list_popup_blid_pane

0xd0e5,	// (0x0004fb98) list_blid_sat_info_pane_ParamLimits

0xd0e5,	// (0x0004fb98) list_blid_sat_info_pane

0xd0f8,	// (0x0004fbab) list_blid_sat_info_pane_g1

0xd100,	// (0x0004fbb3) list_blid_sat_info_pane_t1

0x37c6,	// (0x00046279) mup_equalizer_pane_ParamLimits

0x37c6,	// (0x00046279) mup_equalizer_pane

0x37e7,	// (0x0004629a) mup_equalizer_pane_cp1_ParamLimits

0x37e7,	// (0x0004629a) mup_equalizer_pane_cp1

0x3808,	// (0x000462bb) mup_equalizer_pane_cp2_ParamLimits

0x3808,	// (0x000462bb) mup_equalizer_pane_cp2

0x382d,	// (0x000462e0) mup_equalizer_pane_cp3_ParamLimits

0x382d,	// (0x000462e0) mup_equalizer_pane_cp3

0x3856,	// (0x00046309) mup_equalizer_pane_cp4_ParamLimits

0x3856,	// (0x00046309) mup_equalizer_pane_cp4

0x387f,	// (0x00046332) mup_equalizer_pane_cp5

0x3897,	// (0x0004634a) mup_equalizer_pane_cp6

0x38af,	// (0x00046362) mup_equalizer_pane_cp7

0xe2cf,	// (0x00050d82) bg_popup_call_poc_act_pane_g9

0xe2d7,	// (0x00050d8a) bg_popup_call_poc_act_pane_g10

0xe2df,	// (0x00050d92) bg_popup_call_poc_act_pane_g11

0x000a,

0xc4b6,	// (0x0004ef69) mup_scale_pane

0xc5de,	// (0x0004f091) mup_scale_pane_g1

0xd10e,	// (0x0004fbc1) mup_scale_pane_g2

0x0006,

0xf489,	// (0x00051f3c) mup_scale_pane_g

0xd132,	// (0x0004fbe5) msg_data_pane

0xd13a,	// (0x0004fbed) scroll_pane_cp017

0x09bc,	// (0x0004346f) bg_list_pane_cp04_ParamLimits

0x09bc,	// (0x0004346f) bg_list_pane_cp04

0xd142,	// (0x0004fbf5) msg_data_pane_g1

0x38d9,	// (0x0004638c) msg_data_pane_g2

0x38e3,	// (0x00046396) msg_data_pane_g3

0x38ed,	// (0x000463a0) msg_data_pane_g4

0x38f5,	// (0x000463a8) msg_data_pane_g5

0x38fd,	// (0x000463b0) msg_data_pane_g6

0x3905,	// (0x000463b8) msg_data_pane_g7

0x0006,

0xf498,	// (0x00051f4b) msg_data_pane_g

0x09e2,	// (0x00043495) msg_text_pane_ParamLimits

0x09e2,	// (0x00043495) msg_text_pane

0x390d,	// (0x000463c0) qrid_highlight_pane_cp011_ParamLimits

0x390d,	// (0x000463c0) qrid_highlight_pane_cp011

0xc25b,	// (0x0004ed0e) msg_body_pane

0xc25b,	// (0x0004ed0e) msg_header_pane

0xd153,	// (0x0004fc06) input_focus_pane_cp07

0x0a21,	// (0x000434d4) msg_header_pane_t1_ParamLimits

0x0a21,	// (0x000434d4) msg_header_pane_t1

0x0a35,	// (0x000434e8) msg_header_pane_t2_ParamLimits

0x0a35,	// (0x000434e8) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x00051f5f) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x00051f5f) msg_header_pane_t

0xd168,	// (0x0004fc1b) msg_body_pane_g1

0x0a47,	// (0x000434fa) msg_body_pane_t1_ParamLimits

0x0a47,	// (0x000434fa) msg_body_pane_t1

0x0a78,	// (0x0004352b) msg_body_pane_t2_ParamLimits

0x0a78,	// (0x0004352b) msg_body_pane_t2

0x0a8a,	// (0x0004353d) msg_body_pane_t3_ParamLimits

0x0a8a,	// (0x0004353d) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x00051f64) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x00051f64) msg_body_pane_t

0x395d,	// (0x00046410) main_viewer_pane_g1_ParamLimits

0x395d,	// (0x00046410) main_viewer_pane_g1

0x396b,	// (0x0004641e) main_viewer_pane_g2_ParamLimits

0x396b,	// (0x0004641e) main_viewer_pane_g2

0x3979,	// (0x0004642c) main_viewer_pane_g3_ParamLimits

0x3979,	// (0x0004642c) main_viewer_pane_g3

0x3988,	// (0x0004643b) main_viewer_pane_g4_ParamLimits

0x3988,	// (0x0004643b) main_viewer_pane_g4

0xac65,	// (0x0004d718) main_viewer_pane_g5_ParamLimits

0xac65,	// (0x0004d718) main_viewer_pane_g5

0xac65,	// (0x0004d718) main_viewer_pane_g7_ParamLimits

0xac65,	// (0x0004d718) main_viewer_pane_g7

0xac77,	// (0x0004d72a) main_viewer_pane_g8_ParamLimits

0xac77,	// (0x0004d72a) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x00051f74) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x00051f74) main_viewer_pane_g

0xd170,	// (0x0004fc23) viewer_content_pane_ParamLimits

0xd170,	// (0x0004fc23) viewer_content_pane

0x39c6,	// (0x00046479) main_postcard_pane_g1_ParamLimits

0x39c6,	// (0x00046479) main_postcard_pane_g1

0x39dc,	// (0x0004648f) main_postcard_pane_g2_ParamLimits

0x39dc,	// (0x0004648f) main_postcard_pane_g2

0x39f2,	// (0x000464a5) main_postcard_pane_g3_ParamLimits

0x39f2,	// (0x000464a5) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x00051f85) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x00051f85) main_postcard_pane_g

0x3a09,	// (0x000464bc) main_postcard_pane_g4

0xe4ff,	// (0x00050fb2) smil_status_volume_pane_g2

0x3a4c,	// (0x000464ff) postcard_pane_ParamLimits

0x3a4c,	// (0x000464ff) postcard_pane

0xd17e,	// (0x0004fc31) postcard_pane_g1_ParamLimits

0xd17e,	// (0x0004fc31) postcard_pane_g1

0x3a9c,	// (0x0004654f) postcard_pane_g2_ParamLimits

0x3a9c,	// (0x0004654f) postcard_pane_g2

0x3aa8,	// (0x0004655b) postcard_pane_g3_ParamLimits

0x3aa8,	// (0x0004655b) postcard_pane_g3

0xd18c,	// (0x0004fc3f) postcard_pane_g4_ParamLimits

0xd18c,	// (0x0004fc3f) postcard_pane_g4

0x3ab4,	// (0x00046567) postcard_pane_g5_ParamLimits

0x3ab4,	// (0x00046567) postcard_pane_g5

0x3ac6,	// (0x00046579) postcard_pane_g6_ParamLimits

0x3ac6,	// (0x00046579) postcard_pane_g6

0xd17e,	// (0x0004fc31) postcard_pane_g7_ParamLimits

0xd17e,	// (0x0004fc31) postcard_pane_g7

0x0006,

0xf4df,	// (0x00051f92) postcard_pane_g_ParamLimits

0xf4df,	// (0x00051f92) postcard_pane_g

0x3ade,	// (0x00046591) main_mp2_pane_g1_ParamLimits

0x3ade,	// (0x00046591) main_mp2_pane_g1

0x3aec,	// (0x0004659f) main_mp2_pane_g2_ParamLimits

0x3aec,	// (0x0004659f) main_mp2_pane_g2

0x3af8,	// (0x000465ab) main_mp2_pane_g3_ParamLimits

0x3af8,	// (0x000465ab) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x00051fa1) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x00051fa1) main_mp2_pane_g

0x3b04,	// (0x000465b7) main_mp2_pane_t1_ParamLimits

0x3b04,	// (0x000465b7) main_mp2_pane_t1

0x3b1b,	// (0x000465ce) main_mp2_pane_t2_ParamLimits

0x3b1b,	// (0x000465ce) main_mp2_pane_t2

0x3b2f,	// (0x000465e2) main_mp2_pane_t3_ParamLimits

0x3b2f,	// (0x000465e2) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x00051fa8) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x00051fa8) main_mp2_pane_t

0xd19a,	// (0x0004fc4d) pec_content_pane_ParamLimits

0xd19a,	// (0x0004fc4d) pec_content_pane

0xc8e5,	// (0x0004f398) scroll_pane_cp015

0xd1ac,	// (0x0004fc5f) pec_attribute_pane_ParamLimits

0xd1ac,	// (0x0004fc5f) pec_attribute_pane

0x3b41,	// (0x000465f4) pec_content_pane_g1_ParamLimits

0x3b41,	// (0x000465f4) pec_content_pane_g1

0xd1bc,	// (0x0004fc6f) pec_content_pane_t1_ParamLimits

0xd1bc,	// (0x0004fc6f) pec_content_pane_t1

0xd1ce,	// (0x0004fc81) pec_content_pane_t2_ParamLimits

0xd1ce,	// (0x0004fc81) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x00051faf) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x00051faf) pec_content_pane_t

0x3b4d,	// (0x00046600) list_single_graphic_pane_cp01_ParamLimits

0x3b4d,	// (0x00046600) list_single_graphic_pane_cp01

0xc4b6,	// (0x0004ef69) bg_popup_sub_pane_cp04

0xd1e0,	// (0x0004fc93) popup_mup_playback_window_g1

0xd1ec,	// (0x0004fc9f) popup_mup_playback_window_t1

0xd201,	// (0x0004fcb4) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x00051fb4) popup_mup_playback_window_t

0xd238,	// (0x0004fceb) main_image_pane_g1_ParamLimits

0xd238,	// (0x0004fceb) main_image_pane_g1

0xd27b,	// (0x0004fd2e) scroll_pane_cp018_ParamLimits

0xd27b,	// (0x0004fd2e) scroll_pane_cp018

0xd293,	// (0x0004fd46) scroll_pane_cp016_ParamLimits

0xd293,	// (0x0004fd46) scroll_pane_cp016

0x3c1f,	// (0x000466d2) smil2_image_pane_ParamLimits

0x3c1f,	// (0x000466d2) smil2_image_pane

0x3c55,	// (0x00046708) smil2_root_pane_ParamLimits

0x3c55,	// (0x00046708) smil2_root_pane

0x3c8d,	// (0x00046740) smil2_text_pane_ParamLimits

0x3c8d,	// (0x00046740) smil2_text_pane

0xc25b,	// (0x0004ed0e) bg_list_pane_cp06

0xd2cf,	// (0x0004fd82) grid_radio_pane

0xc25b,	// (0x0004ed0e) bg_popup_window_pane_cp06

0xd2d9,	// (0x0004fd8c) main_fmradio_pane_t1

0xcd83,	// (0x0004f836) heading_pane_cp04

0xd2e7,	// (0x0004fd9a) main_fmradio_pane_t2

0xe2e7,	// (0x00050d9a) popup_cale_lunar_info_window_g1

0xd2f5,	// (0x0004fda8) main_fmradio_pane_t3

0xe2ef,	// (0x00050da2) popup_cale_lunar_info_window_g2

0xd305,	// (0x0004fdb8) main_fmradio_pane_t4

0x0001,

0xd313,	// (0x0004fdc6) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x0005208f) popup_cale_lunar_info_window_g

0xf516,	// (0x00051fc9) main_fmradio_pane_t

0xd321,	// (0x0004fdd4) wait_bar_pane_cp03

0xd329,	// (0x0004fddc) cell_fmradio_pane_ParamLimits

0xd329,	// (0x0004fddc) cell_fmradio_pane

0xd17e,	// (0x0004fc31) cell_fmradio_pane_g1_ParamLimits

0xd17e,	// (0x0004fc31) cell_fmradio_pane_g1

0xc25b,	// (0x0004ed0e) grid_highlight_pane_cp011

0xd33e,	// (0x0004fdf1) poc_content_pane_ParamLimits

0xd33e,	// (0x0004fdf1) poc_content_pane

0xd350,	// (0x0004fe03) scroll_pane_cp019

0x3d1d,	// (0x000467d0) popup_call_poc_act_window_ParamLimits

0x3d1d,	// (0x000467d0) popup_call_poc_act_window

0x3d41,	// (0x000467f4) popup_call_poc_inact_window_ParamLimits

0x3d41,	// (0x000467f4) popup_call_poc_inact_window

0xf5b3,	// (0x00052066) bg_popup_call_poc_act_pane_g

0xe25f,	// (0x00050d12) bg_popup_call_poc_inact_pane_g1

0xe267,	// (0x00050d1a) bg_popup_call_poc_inact_pane_g2

0xd358,	// (0x0004fe0b) popup_call_poc_act_window_g2

0xe26f,	// (0x00050d22) bg_popup_call_poc_inact_pane_g3

0xe277,	// (0x00050d2a) bg_popup_call_poc_inact_pane_g4

0xe27f,	// (0x00050d32) bg_popup_call_poc_inact_pane_g5

0xd360,	// (0x0004fe13) popup_call_poc_act_window_t1_ParamLimits

0xd360,	// (0x0004fe13) popup_call_poc_act_window_t1

0xd388,	// (0x0004fe3b) popup_call_poc_act_window_t2_ParamLimits

0xd388,	// (0x0004fe3b) popup_call_poc_act_window_t2

0xd3b0,	// (0x0004fe63) popup_call_poc_act_window_t3_ParamLimits

0xd3b0,	// (0x0004fe63) popup_call_poc_act_window_t3

0xd3d8,	// (0x0004fe8b) popup_call_poc_act_window_t4_ParamLimits

0xd3d8,	// (0x0004fe8b) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x00051fd4) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x00051fd4) popup_call_poc_act_window_t

0xe287,	// (0x00050d3a) bg_popup_call_poc_inact_pane_g6

0xe28f,	// (0x00050d42) bg_popup_call_poc_inact_pane_g7

0xe297,	// (0x00050d4a) bg_popup_call_poc_inact_pane_g8

0xd3ea,	// (0x0004fe9d) popup_call_poc_inact_window_g2

0xe29f,	// (0x00050d52) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x00052053) bg_popup_call_poc_inact_pane_g

0xd3f2,	// (0x0004fea5) popup_call_poc_inact_window_t1_ParamLimits

0xd3f2,	// (0x0004fea5) popup_call_poc_inact_window_t1

0xd407,	// (0x0004feba) popup_call_poc_inact_window_t2_ParamLimits

0xd407,	// (0x0004feba) popup_call_poc_inact_window_t2

0xd41c,	// (0x0004fecf) popup_call_poc_inact_window_t3_ParamLimits

0xd41c,	// (0x0004fecf) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x00051fdd) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x00051fdd) popup_call_poc_inact_window_t

0xe45f,	// (0x00050f12) context_pane_ParamLimits

0x45ec,	// (0x0004709f) signal_pane_ParamLimits

0xcfd1,	// (0x0004fa84) main_call2_pane

0xe44d,	// (0x00050f00) popup_phob_thumbnail2_window_ParamLimits

0xe44d,	// (0x00050f00) popup_phob_thumbnail2_window

0xac4d,	// (0x0004d700) aid_hotspot_pointer_arrow_pane

0xac55,	// (0x0004d708) aid_hotspot_pointer_hand_pane

0x40ac,	// (0x00046b5f) phob_pre_status_pane_g5

0x1f1d,	// (0x000449d0) cams_zoom_pane_ParamLimits

0x1f2c,	// (0x000449df) image_vga_pane_ParamLimits

0x1f46,	// (0x000449f9) main_camera_pane_g1_ParamLimits

0x1f58,	// (0x00044a0b) main_camera_pane_g2_ParamLimits

0x1f68,	// (0x00044a1b) main_camera_pane_g3_ParamLimits

0x1f7c,	// (0x00044a2f) main_camera_pane_g4_ParamLimits

0x1f90,	// (0x00044a43) main_camera_pane_g5_ParamLimits

0x1fa4,	// (0x00044a57) main_camera_pane_g6_ParamLimits

0x1fb8,	// (0x00044a6b) main_camera_pane_g7_ParamLimits

0xf229,	// (0x00051cdc) main_camera_pane_g_ParamLimits

0x1fcc,	// (0x00044a7f) main_camera_pane_t1_ParamLimits

0x1fe2,	// (0x00044a95) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x00051ced) main_camera_pane_t_ParamLimits

0xc4b6,	// (0x0004ef69) bg_popup_preview_window_pane_cp01_ParamLimits

0xc4b6,	// (0x0004ef69) bg_popup_preview_window_pane_cp01

0xd431,	// (0x0004fee4) popup_phob_thumbnail2_window_g1_ParamLimits

0xd431,	// (0x0004fee4) popup_phob_thumbnail2_window_g1

0xc25b,	// (0x0004ed0e) call2_cli_visual_pane

0x3d75,	// (0x00046828) popup_call2_audio_conf_window_ParamLimits

0x3d75,	// (0x00046828) popup_call2_audio_conf_window

0x3d9d,	// (0x00046850) popup_call2_audio_first_window_ParamLimits

0x3d9d,	// (0x00046850) popup_call2_audio_first_window

0x3e33,	// (0x000468e6) popup_call2_audio_in_window_ParamLimits

0x3e33,	// (0x000468e6) popup_call2_audio_in_window

0x3e7f,	// (0x00046932) popup_call2_audio_out_window_ParamLimits

0x3e7f,	// (0x00046932) popup_call2_audio_out_window

0x3ef1,	// (0x000469a4) popup_call2_audio_second_window_ParamLimits

0x3ef1,	// (0x000469a4) popup_call2_audio_second_window

0x3f57,	// (0x00046a0a) popup_call2_audio_wait_window_ParamLimits

0x3f57,	// (0x00046a0a) popup_call2_audio_wait_window

0xc25b,	// (0x0004ed0e) bg_popup_call2_act_pane_cp03

0xc498,	// (0x0004ef4b) list_conf_pane_cp

0xd43d,	// (0x0004fef0) popup_call2_audio_conf_window_t1

0xd44b,	// (0x0004fefe) list_single_graphic_popup_conf2_pane_ParamLimits

0xd44b,	// (0x0004fefe) list_single_graphic_popup_conf2_pane

0xcdf2,	// (0x0004f8a5) list_highlight_pane_cp04

0xd45e,	// (0x0004ff11) list_single_graphic_popup_conf2_pane_g1

0xce03,	// (0x0004f8b6) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x00051fe4) list_single_graphic_popup_conf2_pane_g

0xd468,	// (0x0004ff1b) list_single_graphic_popup_conf2_pane_t1

0xd476,	// (0x0004ff29) bg_popup_call2_act_pane_cp01_ParamLimits

0xd476,	// (0x0004ff29) bg_popup_call2_act_pane_cp01

0xd500,	// (0x0004ffb3) call_type_pane_cp05_ParamLimits

0xd500,	// (0x0004ffb3) call_type_pane_cp05

0xd554,	// (0x00050007) popup_call2_audio_second_window_g1_ParamLimits

0xd554,	// (0x00050007) popup_call2_audio_second_window_g1

0xd5a8,	// (0x0005005b) popup_call2_audio_second_window_g2_ParamLimits

0xd5a8,	// (0x0005005b) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x00051fe9) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x00051fe9) popup_call2_audio_second_window_g

0xd60d,	// (0x000500c0) popup_call2_audio_second_window_t1_ParamLimits

0xd60d,	// (0x000500c0) popup_call2_audio_second_window_t1

0xd6d4,	// (0x00050187) popup_call2_audio_second_window_t2_ParamLimits

0xd6d4,	// (0x00050187) popup_call2_audio_second_window_t2

0xd727,	// (0x000501da) popup_call2_audio_second_window_t3_ParamLimits

0xd727,	// (0x000501da) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x00051ff0) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x00051ff0) popup_call2_audio_second_window_t

0xc25b,	// (0x0004ed0e) bg_popup_call2_in_pane_cp02

0xc265,	// (0x0004ed18) call_type_pane_cp04

0xc26d,	// (0x0004ed20) popup_call2_audio_wait_window_g1

0xc275,	// (0x0004ed28) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x00051bc9) popup_call2_audio_wait_window_g

0xc27d,	// (0x0004ed30) popup_call2_audio_wait_window_t3

0xd81a,	// (0x000502cd) bg_popup_call2_act_pane_ParamLimits

0xd81a,	// (0x000502cd) bg_popup_call2_act_pane

0xd8da,	// (0x0005038d) call_type_pane_cp03_ParamLimits

0xd8da,	// (0x0005038d) call_type_pane_cp03

0xd93e,	// (0x000503f1) popup_call2_audio_first_window_g1_ParamLimits

0xd93e,	// (0x000503f1) popup_call2_audio_first_window_g1

0xd9ae,	// (0x00050461) popup_call2_audio_first_window_g2_ParamLimits

0xd9ae,	// (0x00050461) popup_call2_audio_first_window_g2

0xd090,	// (0x0004fb43) popup_call2_audio_first_window_g3_ParamLimits

0xd090,	// (0x0004fb43) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x00051ff9) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x00051ff9) popup_call2_audio_first_window_g

0xda8c,	// (0x0005053f) popup_call2_audio_first_window_t1_ParamLimits

0xda8c,	// (0x0005053f) popup_call2_audio_first_window_t1

0xdb8f,	// (0x00050642) popup_call2_audio_first_window_t4_ParamLimits

0xdb8f,	// (0x00050642) popup_call2_audio_first_window_t4

0xdc8a,	// (0x0005073d) popup_call2_audio_first_window_t5_ParamLimits

0xdc8a,	// (0x0005073d) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x00052004) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x00052004) popup_call2_audio_first_window_t

0xc4ae,	// (0x0004ef61) bg_popup_call2_act_pane_g1

0xe2f9,	// (0x00050dac) popup_cale_lunar_info_window_t1

0xe307,	// (0x00050dba) popup_cale_lunar_info_window_t2

0xe315,	// (0x00050dc8) popup_cale_lunar_info_window_t3

0xc25b,	// (0x0004ed0e) bg_popup_call2_bubble_pane

0xdd8b,	// (0x0005083e) bg_popup_call2_in_pane_cp01_ParamLimits

0xdd8b,	// (0x0005083e) bg_popup_call2_in_pane_cp01

0xa854,	// (0x0004d307) call_type_pane_cp02

0xddd3,	// (0x00050886) popup_call2_audio_out_window_g1_ParamLimits

0xddd3,	// (0x00050886) popup_call2_audio_out_window_g1

0xddff,	// (0x000508b2) popup_call2_audio_out_window_g2_ParamLimits

0xddff,	// (0x000508b2) popup_call2_audio_out_window_g2

0xde27,	// (0x000508da) popup_call2_audio_out_window_g3_ParamLimits

0xde27,	// (0x000508da) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x0005200d) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x0005200d) popup_call2_audio_out_window_g

0xde62,	// (0x00050915) popup_call2_audio_out_window_t1_ParamLimits

0xde62,	// (0x00050915) popup_call2_audio_out_window_t1

0xdec1,	// (0x00050974) popup_call2_audio_out_window_t2_ParamLimits

0xdec1,	// (0x00050974) popup_call2_audio_out_window_t2

0xdf15,	// (0x000509c8) popup_call2_audio_out_window_t3_ParamLimits

0xdf15,	// (0x000509c8) popup_call2_audio_out_window_t3

0xdf2b,	// (0x000509de) popup_call2_audio_out_window_t4_ParamLimits

0xdf2b,	// (0x000509de) popup_call2_audio_out_window_t4

0xdf41,	// (0x000509f4) popup_call2_audio_out_window_t5_ParamLimits

0xdf41,	// (0x000509f4) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x00052016) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x00052016) popup_call2_audio_out_window_t

0xdfa5,	// (0x00050a58) bg_popup_call2_in_pane_ParamLimits

0xdfa5,	// (0x00050a58) bg_popup_call2_in_pane

0xe001,	// (0x00050ab4) popup_call2_audio_in_window_g1_ParamLimits

0xe001,	// (0x00050ab4) popup_call2_audio_in_window_g1

0xe039,	// (0x00050aec) popup_call2_audio_in_window_g2_ParamLimits

0xe039,	// (0x00050aec) popup_call2_audio_in_window_g2

0xe071,	// (0x00050b24) popup_call2_audio_in_window_g3_ParamLimits

0xe071,	// (0x00050b24) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x00052023) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x00052023) popup_call2_audio_in_window_g

0xe0c9,	// (0x00050b7c) popup_call2_audio_in_window_t1_ParamLimits

0xe0c9,	// (0x00050b7c) popup_call2_audio_in_window_t1

0xe149,	// (0x00050bfc) popup_call2_audio_in_window_t2_ParamLimits

0xe149,	// (0x00050bfc) popup_call2_audio_in_window_t2

0xe1c9,	// (0x00050c7c) popup_call2_audio_in_window_t3_ParamLimits

0xe1c9,	// (0x00050c7c) popup_call2_audio_in_window_t3

0xe1e3,	// (0x00050c96) popup_call2_audio_in_window_t4_ParamLimits

0xe1e3,	// (0x00050c96) popup_call2_audio_in_window_t4

0xe1f5,	// (0x00050ca8) popup_call2_audio_in_window_t5_ParamLimits

0xe1f5,	// (0x00050ca8) popup_call2_audio_in_window_t5

0xe20a,	// (0x00050cbd) popup_call2_audio_in_window_t6_ParamLimits

0xe20a,	// (0x00050cbd) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x0005202c) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x0005202c) popup_call2_audio_in_window_t

0xc4ae,	// (0x0004ef61) bg_popup_call2_in_pane_g1

0xe323,	// (0x00050dd6) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x00052094) popup_cale_lunar_info_window_t

0xc4b6,	// (0x0004ef69) bg_popup_call2_rect_pane_ParamLimits

0xc4b6,	// (0x0004ef69) bg_popup_call2_rect_pane

0xc25b,	// (0x0004ed0e) call2_cli_visual_graphic_pane

0xc25b,	// (0x0004ed0e) call2_cli_visual_text_pane

0xac8f,	// (0x0004d742) smil_status_volume_pane_g3

0x0002,

0xc5de,	// (0x0004f091) call2_cli_visual_graphic_pane_g1

0xc5de,	// (0x0004f091) call2_cli_visual_graphic_pane_g2

0xc5de,	// (0x0004f091) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x00052039) call2_cli_visual_graphic_pane_g

0xe21f,	// (0x00050cd2) bg_popup_call2_rect_pane_g1

0xc67c,	// (0x0004f12f) bg_popup_call2_rect_pane_g2

0xe227,	// (0x00050cda) bg_popup_call2_rect_pane_g3

0xe22f,	// (0x00050ce2) bg_popup_call2_rect_pane_g4

0xe237,	// (0x00050cea) bg_popup_call2_rect_pane_g5

0xe23f,	// (0x00050cf2) bg_popup_call2_rect_pane_g6

0xe247,	// (0x00050cfa) bg_popup_call2_rect_pane_g7

0xe24f,	// (0x00050d02) bg_popup_call2_rect_pane_g8

0xe257,	// (0x00050d0a) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x00052040) bg_popup_call2_rect_pane_g

0xe25f,	// (0x00050d12) bg_popup_call2_bubble_pane_g1

0xe267,	// (0x00050d1a) bg_popup_call2_bubble_pane_g2

0xe26f,	// (0x00050d22) bg_popup_call2_bubble_pane_g3

0xe277,	// (0x00050d2a) bg_popup_call2_bubble_pane_g4

0xe27f,	// (0x00050d32) bg_popup_call2_bubble_pane_g5

0xe287,	// (0x00050d3a) bg_popup_call2_bubble_pane_g6

0xe28f,	// (0x00050d42) bg_popup_call2_bubble_pane_g7

0xe297,	// (0x00050d4a) bg_popup_call2_bubble_pane_g8

0xe29f,	// (0x00050d52) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x00052053) bg_popup_call2_bubble_pane_g

0x1b26,	// (0x000445d9) aid_cale_week_size_cell_pane

0x1ffc,	// (0x00044aaf) aid_cams_cif_uncrop_pane_ParamLimits

0x1ffc,	// (0x00044aaf) aid_cams_cif_uncrop_pane

0x21b5,	// (0x00044c68) aid_cams_size_cell_ParamLimits

0x21b5,	// (0x00044c68) aid_cams_size_cell

0x21c9,	// (0x00044c7c) grid_cams_pane_ParamLimits

0x21e3,	// (0x00044c96) linegrid_cams_pane_ParamLimits

0x22c1,	// (0x00044d74) call_video_pane_t1

0x22db,	// (0x00044d8e) call_video_pane_t2

0x0001,

0xf28d,	// (0x00051d40) call_video_pane_t

0x2726,	// (0x000451d9) aid_cale_month_size_cell_pane_ParamLimits

0x2726,	// (0x000451d9) aid_cale_month_size_cell_pane

0xf62a,	// (0x000520dd) smil_status_volume_pane_g

0xac9c,	// (0x0004d74f) volume_smil_pane_ParamLimits

0xa6bb,	// (0x0004d16e) aid_popup2_width_pane

0x1a8b,	// (0x0004453e) cell_qdial_pane_g4_ParamLimits

0x1a8b,	// (0x0004453e) cell_qdial_pane_g4

0x32b6,	// (0x00045d69) aid_blid_cardinal_pane_ParamLimits

0x32c6,	// (0x00045d79) aid_blid_destination_pane_ParamLimits

0x32c6,	// (0x00045d79) aid_blid_destination_pane

0xc4b6,	// (0x0004ef69) bg_popup_call_poc_act_pane_ParamLimits

0xc4b6,	// (0x0004ef69) bg_popup_call_poc_act_pane

0xc4b6,	// (0x0004ef69) bg_popup_call_poc_inact_pane_ParamLimits

0xc4b6,	// (0x0004ef69) bg_popup_call_poc_inact_pane

0xe2a7,	// (0x00050d5a) bg_popup_call_poc_act_pane_g1

0xe2af,	// (0x00050d62) bg_popup_call_poc_act_pane_g2

0xe2b7,	// (0x00050d6a) bg_popup_call_poc_act_pane_g3

0xe277,	// (0x00050d2a) bg_popup_call_poc_act_pane_g4

0xe27f,	// (0x00050d32) bg_popup_call_poc_act_pane_g5

0xe2bf,	// (0x00050d72) bg_popup_call_poc_act_pane_g6

0xe28f,	// (0x00050d42) bg_popup_call_poc_act_pane_g7

0xe2c7,	// (0x00050d7a) bg_popup_call_poc_act_pane_g8

0xc25b,	// (0x0004ed0e) main_usb_pane

0xe424,	// (0x00050ed7) popup_cale_lunar_info_window

0x25a6,	// (0x00045059) im_reading_pane_t1_ParamLimits

0xc83d,	// (0x0004f2f0) list_im_pane_ParamLimits

0xc84e,	// (0x0004f301) scroll_pane_cp07_ParamLimits

0xc25b,	// (0x0004ed0e) grid_highlight_pane_cp012

0xc4b6,	// (0x0004ef69) mup_scale_pane_ParamLimits

0xd17e,	// (0x0004fc31) main_usb_pane_g1_ParamLimits

0xd17e,	// (0x0004fc31) main_usb_pane_g1

0x3fb8,	// (0x00046a6b) main_usb_pane_g2_ParamLimits

0x3fb8,	// (0x00046a6b) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x0005207d) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x0005207d) main_usb_pane_g

0x3fce,	// (0x00046a81) main_usb_pane_t1_ParamLimits

0x3fce,	// (0x00046a81) main_usb_pane_t1

0x3fe0,	// (0x00046a93) main_usb_pane_t2_ParamLimits

0x3fe0,	// (0x00046a93) main_usb_pane_t2

0x3ff2,	// (0x00046aa5) main_usb_pane_t3_ParamLimits

0x3ff2,	// (0x00046aa5) main_usb_pane_t3

0x4004,	// (0x00046ab7) main_usb_pane_t4_ParamLimits

0x4004,	// (0x00046ab7) main_usb_pane_t4

0x4019,	// (0x00046acc) main_usb_pane_t5_ParamLimits

0x4019,	// (0x00046acc) main_usb_pane_t5

0x402e,	// (0x00046ae1) main_usb_pane_t6_ParamLimits

0x402e,	// (0x00046ae1) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x00052082) main_usb_pane_t_ParamLimits

0x3255,	// (0x00045d08) aid_text_placing

0x3260,	// (0x00045d13) main_location2_pane_t1_ParamLimits

0x3276,	// (0x00045d29) main_location2_pane_t2_ParamLimits

0x328c,	// (0x00045d3f) main_location2_pane_t3_ParamLimits

0x32a2,	// (0x00045d55) main_location2_pane_t4_ParamLimits

0x32a2,	// (0x00045d55) main_location2_pane_t4

0xf3ee,	// (0x00051ea1) main_location2_pane_t_ParamLimits

0xc4f2,	// (0x0004efa5) find_pinb_pane_g2_ParamLimits

0xc4f2,	// (0x0004efa5) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x00051bef) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x00051bef) find_pinb_pane_g

0xc4fe,	// (0x0004efb1) find_pinb_pane_t1_ParamLimits

0xc510,	// (0x0004efc3) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x00051bf4) find_pinb_pane_t_ParamLimits

0xc25b,	// (0x0004ed0e) main_call3_pane

0x2a9a,	// (0x0004554d) cale_month_day_heading_pane_t1_ParamLimits

0x2af8,	// (0x000455ab) cale_month_day_heading_pane_t2_ParamLimits

0x2b5d,	// (0x00045610) cale_month_day_heading_pane_t3_ParamLimits

0x2bc2,	// (0x00045675) cale_month_day_heading_pane_t4_ParamLimits

0x2c27,	// (0x000456da) cale_month_day_heading_pane_t5_ParamLimits

0x2c8c,	// (0x0004573f) cale_month_day_heading_pane_t6_ParamLimits

0x2cf1,	// (0x000457a4) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x00051d78) cale_month_day_heading_pane_t_ParamLimits

0xca8e,	// (0x0004f541) smil_status_volume_pane

0x3a70,	// (0x00046523) postcard_address_pane_ParamLimits

0x3a70,	// (0x00046523) postcard_address_pane

0x3a86,	// (0x00046539) postcard_message_pane_ParamLimits

0x3a86,	// (0x00046539) postcard_message_pane

0x3f91,	// (0x00046a44) call2_cli_visual_pane_t1_ParamLimits

0x3f91,	// (0x00046a44) call2_cli_visual_pane_t1

0x47fd,	// (0x000472b0) postcard_message_pane_t1_ParamLimits

0x47fd,	// (0x000472b0) postcard_message_pane_t1

0xe512,	// (0x00050fc5) postcard_address_pane_t1_ParamLimits

0xe512,	// (0x00050fc5) postcard_address_pane_t1

0x47e9,	// (0x0004729c) popup_call3_audio_in_window_ParamLimits

0x47e9,	// (0x0004729c) popup_call3_audio_in_window

0x466e,	// (0x00047121) bg_popup_call3_in_pane_ParamLimits

0x466e,	// (0x00047121) bg_popup_call3_in_pane

0x46ea,	// (0x0004719d) popup_call3_audio_in_window_g1_ParamLimits

0x46ea,	// (0x0004719d) popup_call3_audio_in_window_g1

0x470a,	// (0x000471bd) popup_call3_audio_in_window_g2_ParamLimits

0x470a,	// (0x000471bd) popup_call3_audio_in_window_g2

0x472a,	// (0x000471dd) popup_call3_audio_in_window_g3_ParamLimits

0x472a,	// (0x000471dd) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x000520e4) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x000520e4) popup_call3_audio_in_window_g

0x475b,	// (0x0004720e) popup_call3_audio_in_window_t1_ParamLimits

0x475b,	// (0x0004720e) popup_call3_audio_in_window_t1

0x4799,	// (0x0004724c) popup_call3_audio_in_window_t2_ParamLimits

0x4799,	// (0x0004724c) popup_call3_audio_in_window_t2

0x47d7,	// (0x0004728a) popup_call3_audio_in_window_t3_ParamLimits

0x47d7,	// (0x0004728a) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x000520ed) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x000520ed) popup_call3_audio_in_window_t

0xcfd1,	// (0x0004fa84) bg_popup_call3_rect_pane

0xe21f,	// (0x00050cd2) bg_popup_call3_rect_pane_g1

0xc67c,	// (0x0004f12f) bg_popup_call3_rect_pane_g2

0xe227,	// (0x00050cda) bg_popup_call3_rect_pane_g3

0xe22f,	// (0x00050ce2) bg_popup_call3_rect_pane_g4

0xe237,	// (0x00050cea) bg_popup_call3_rect_pane_g5

0xe23f,	// (0x00050cf2) bg_popup_call3_rect_pane_g6

0xe247,	// (0x00050cfa) bg_popup_call3_rect_pane_g7

0x36b2,	// (0x00046165) mup_visualizer_osc_pane

0xd09e,	// (0x0004fb51) mup_visualizer_spec_pane

0x469e,	// (0x00047151) call3_video_qcif_pane_ParamLimits

0x469e,	// (0x00047151) call3_video_qcif_pane

0x46b1,	// (0x00047164) call3_video_qcif_uncrop_pane_ParamLimits

0x46b1,	// (0x00047164) call3_video_qcif_uncrop_pane

0x46c1,	// (0x00047174) call3_video_subqcif_pane_ParamLimits

0x46c1,	// (0x00047174) call3_video_subqcif_pane

0x46d7,	// (0x0004718a) call3_video_subqcif_uncrop_pane_ParamLimits

0x46d7,	// (0x0004718a) call3_video_subqcif_uncrop_pane

0x474a,	// (0x000471fd) popup_call3_audio_in_window_g4_ParamLimits

0x474a,	// (0x000471fd) popup_call3_audio_in_window_g4

0x465d,	// (0x00047110) mup_spec_half_pane

0x4666,	// (0x00047119) mup_spec_half_pane_cp

0xe4d2,	// (0x00050f85) mup_osc_middle_pane

0xe4db,	// (0x00050f8e) mup_visualizer_osc_pane_g1

0x463d,	// (0x000470f0) mup_spec_bar_pane_ParamLimits

0x463d,	// (0x000470f0) mup_spec_bar_pane

0xe4bf,	// (0x00050f72) mup_spec_bar_pane_g1

0xe4c9,	// (0x00050f7c) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x000520d8) mup_spec_bar_pane_g

0x1b26,	// (0x000445d9) aid_cale_week_size_cell_pane_ParamLimits

0x1b39,	// (0x000445ec) bg_cale_heading_pane_ParamLimits

0xc6b0,	// (0x0004f163) bg_cale_pane_cp01_ParamLimits

0x1b55,	// (0x00044608) cale_week_corner_pane_ParamLimits

0x1b6b,	// (0x0004461e) cale_week_day_heading_pane_ParamLimits

0x1b87,	// (0x0004463a) cale_week_scroll_pane_g1_ParamLimits

0x1ba0,	// (0x00044653) cale_week_scroll_pane_g2_ParamLimits

0x1bb1,	// (0x00044664) cale_week_scroll_pane_g3_ParamLimits

0x1bc2,	// (0x00044675) cale_week_scroll_pane_g4_ParamLimits

0x1bd3,	// (0x00044686) cale_week_scroll_pane_g5_ParamLimits

0x1be4,	// (0x00044697) cale_week_scroll_pane_g6_ParamLimits

0x1bf5,	// (0x000446a8) cale_week_scroll_pane_g7_ParamLimits

0x1c06,	// (0x000446b9) cale_week_scroll_pane_g8_ParamLimits

0x1c17,	// (0x000446ca) cale_week_scroll_pane_g9_ParamLimits

0x1c28,	// (0x000446db) cale_week_scroll_pane_g10_ParamLimits

0x1c39,	// (0x000446ec) cale_week_scroll_pane_g11_ParamLimits

0x1c4a,	// (0x000446fd) cale_week_scroll_pane_g12_ParamLimits

0x1c5b,	// (0x0004470e) cale_week_scroll_pane_g13_ParamLimits

0x1c74,	// (0x00044727) cale_week_scroll_pane_g14_ParamLimits

0x1c8d,	// (0x00044740) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x00051c80) cale_week_scroll_pane_g_ParamLimits

0x1ca6,	// (0x00044759) cale_week_time_pane_ParamLimits

0x1cb7,	// (0x0004476a) grid_cale_week_pane_ParamLimits

0xc6c9,	// (0x0004f17c) listscroll_cale_week_pane_t1

0x1cd2,	// (0x00044785) scroll_pane_cp08_ParamLimits

0x2777,	// (0x0004522a) cale_month_corner_pane_ParamLimits

0xca64,	// (0x0004f517) cale_month_pane_t1

0x2a5b,	// (0x0004550e) cale_month_week_pane_ParamLimits

0x3079,	// (0x00045b2c) popup_call_status_window_g1_ParamLimits

0x308d,	// (0x00045b40) popup_call_status_window_g2_ParamLimits

0x30a1,	// (0x00045b54) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x00051e28) popup_call_status_window_g_ParamLimits

0xcd73,	// (0x0004f826) aid_call2_pane

0x0a13,	// (0x000434c6) msg_header_pane_g1

0x3a70,	// (0x00046523) postcard_address2_pane_ParamLimits

0x3a70,	// (0x00046523) postcard_address2_pane

0x3a86,	// (0x00046539) postcard_message2_pane_ParamLimits

0x3a86,	// (0x00046539) postcard_message2_pane

0x45fa,	// (0x000470ad) message2_row_pane_ParamLimits

0x45fa,	// (0x000470ad) message2_row_pane

0xe47a,	// (0x00050f2d) address2_row_pane_ParamLimits

0xe47a,	// (0x00050f2d) address2_row_pane

0xe48d,	// (0x00050f40) postcard_message2_row_pane_g1

0xe495,	// (0x00050f48) postcard_message2_row_pane_t1

0xe48d,	// (0x00050f40) address2_row_pane_g1

0xe495,	// (0x00050f48) address2_row_pane_t1

0x1ee0,	// (0x00044993) aid_size_cell_vorec

0xc25b,	// (0x0004ed0e) main_rss_pane

0x461d,	// (0x000470d0) rss_list_single_pane_ParamLimits

0x461d,	// (0x000470d0) rss_list_single_pane

0xe4a3,	// (0x00050f56) rss_list_single_pane_t1

0xe4b1,	// (0x00050f64) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x000520d3) rss_list_single_pane_t

0xc25b,	// (0x0004ed0e) main_camera2_pane

0xc25b,	// (0x0004ed0e) main_video2_pane

0x486c,	// (0x0004731f) cams_zoom_pane_cp2_ParamLimits

0x486c,	// (0x0004731f) cams_zoom_pane_cp2

0x4883,	// (0x00047336) image2_vga_pane_ParamLimits

0x4883,	// (0x00047336) image2_vga_pane

0x48cb,	// (0x0004737e) main_camera2_pane_g1_ParamLimits

0x48cb,	// (0x0004737e) main_camera2_pane_g1

0x48eb,	// (0x0004739e) main_camera2_pane_g2_ParamLimits

0x48eb,	// (0x0004739e) main_camera2_pane_g2

0x4902,	// (0x000473b5) main_camera2_pane_g3_ParamLimits

0x4902,	// (0x000473b5) main_camera2_pane_g3

0x4919,	// (0x000473cc) main_camera2_pane_g4_ParamLimits

0x4919,	// (0x000473cc) main_camera2_pane_g4

0x4930,	// (0x000473e3) main_camera2_pane_g5_ParamLimits

0x4930,	// (0x000473e3) main_camera2_pane_g5

0x4947,	// (0x000473fa) main_camera2_pane_g6_ParamLimits

0x4947,	// (0x000473fa) main_camera2_pane_g6

0x495e,	// (0x00047411) main_camera2_pane_g7_ParamLimits

0x495e,	// (0x00047411) main_camera2_pane_g7

0x4975,	// (0x00047428) main_camera2_pane_g8_ParamLimits

0x4975,	// (0x00047428) main_camera2_pane_g8

0x0008,

0xf641,	// (0x000520f4) main_camera2_pane_g_ParamLimits

0xf641,	// (0x000520f4) main_camera2_pane_g

0x49a3,	// (0x00047456) main_camera2_pane_t1_ParamLimits

0x49a3,	// (0x00047456) main_camera2_pane_t1

0x49d8,	// (0x0004748b) main_camera2_pane_t2_ParamLimits

0x49d8,	// (0x0004748b) main_camera2_pane_t2

0x49f5,	// (0x000474a8) main_camera2_pane_t3_ParamLimits

0x49f5,	// (0x000474a8) main_camera2_pane_t3

0x4a53,	// (0x00047506) main_camera2_pane_t4_ParamLimits

0x4a53,	// (0x00047506) main_camera2_pane_t4

0x0006,

0xf654,	// (0x00052107) main_camera2_pane_t_ParamLimits

0xf654,	// (0x00052107) main_camera2_pane_t

0x4adc,	// (0x0004758f) cams_zoom_pane_cp4_ParamLimits

0x4adc,	// (0x0004758f) cams_zoom_pane_cp4

0x4af2,	// (0x000475a5) image2_cif_pane_ParamLimits

0x4af2,	// (0x000475a5) image2_cif_pane

0x4b1d,	// (0x000475d0) image2_subqcif_pane_ParamLimits

0x4b1d,	// (0x000475d0) image2_subqcif_pane

0x4b38,	// (0x000475eb) main_video2_pane_g1_ParamLimits

0x4b38,	// (0x000475eb) main_video2_pane_g1

0x4b52,	// (0x00047605) main_video2_pane_g2_ParamLimits

0x4b52,	// (0x00047605) main_video2_pane_g2

0x4b68,	// (0x0004761b) main_video2_pane_g3_ParamLimits

0x4b68,	// (0x0004761b) main_video2_pane_g3

0x4b7e,	// (0x00047631) main_video2_pane_g4_ParamLimits

0x4b7e,	// (0x00047631) main_video2_pane_g4

0x4b94,	// (0x00047647) main_video2_pane_g5_ParamLimits

0x4b94,	// (0x00047647) main_video2_pane_g5

0x4baa,	// (0x0004765d) main_video2_pane_g6_ParamLimits

0x4baa,	// (0x0004765d) main_video2_pane_g6

0x0005,

0xf663,	// (0x00052116) main_video2_pane_g_ParamLimits

0xf663,	// (0x00052116) main_video2_pane_g

0x4bc4,	// (0x00047677) main_video2_pane_t1_ParamLimits

0x4bc4,	// (0x00047677) main_video2_pane_t1

0x4be8,	// (0x0004769b) main_video2_pane_t2_ParamLimits

0x4be8,	// (0x0004769b) main_video2_pane_t2

0x4c38,	// (0x000476eb) main_video2_pane_t3_ParamLimits

0x4c38,	// (0x000476eb) main_video2_pane_t3

0x0002,

0xf670,	// (0x00052123) main_video2_pane_t_ParamLimits

0xf670,	// (0x00052123) main_video2_pane_t

0x40ec,	// (0x00046b9f) call_muted_g2

0x0001,

0xf612,	// (0x000520c5) call_muted_g

0xc25b,	// (0x0004ed0e) main_mup2_pane

0x4c80,	// (0x00047733) main_mup2_pane_g1_ParamLimits

0x4c80,	// (0x00047733) main_mup2_pane_g1

0x4c8c,	// (0x0004773f) main_mup2_pane_g2_ParamLimits

0x4c8c,	// (0x0004773f) main_mup2_pane_g2

0xad05,	// (0x0004d7b8) main_mup_pane_g13_cp1

0xad0d,	// (0x0004d7c0) mup_volume_pane_cp1

0x4caa,	// (0x0004775d) main_mup2_pane_g4_ParamLimits

0x4caa,	// (0x0004775d) main_mup2_pane_g4

0x4cba,	// (0x0004776d) main_mup2_pane_g5_ParamLimits

0x4cba,	// (0x0004776d) main_mup2_pane_g5

0x4cca,	// (0x0004777d) main_mup2_pane_g6_ParamLimits

0x4cca,	// (0x0004777d) main_mup2_pane_g6

0x4cda,	// (0x0004778d) main_mup2_pane_g7_ParamLimits

0x4cda,	// (0x0004778d) main_mup2_pane_g7

0x0006,

0xf677,	// (0x0005212a) main_mup2_pane_g_ParamLimits

0xf677,	// (0x0005212a) main_mup2_pane_g

0x4cf2,	// (0x000477a5) main_mup2_pane_t1_ParamLimits

0x4cf2,	// (0x000477a5) main_mup2_pane_t1

0x4d08,	// (0x000477bb) main_mup2_pane_t2_ParamLimits

0x4d08,	// (0x000477bb) main_mup2_pane_t2

0x4d1e,	// (0x000477d1) main_mup2_pane_t3_ParamLimits

0x4d1e,	// (0x000477d1) main_mup2_pane_t3

0x4d34,	// (0x000477e7) main_mup2_pane_t4_ParamLimits

0x4d34,	// (0x000477e7) main_mup2_pane_t4

0x4d4c,	// (0x000477ff) main_mup2_pane_t5_ParamLimits

0x4d4c,	// (0x000477ff) main_mup2_pane_t5

0x4d64,	// (0x00047817) main_mup2_pane_t6_ParamLimits

0x4d64,	// (0x00047817) main_mup2_pane_t6

0x0005,

0xf686,	// (0x00052139) main_mup2_pane_t_ParamLimits

0xf686,	// (0x00052139) main_mup2_pane_t

0x4d94,	// (0x00047847) mup2_visualizer_pane_ParamLimits

0x4d94,	// (0x00047847) mup2_visualizer_pane

0x4dc2,	// (0x00047875) mup_progress_pane_cp_ParamLimits

0x4dc2,	// (0x00047875) mup_progress_pane_cp

0xacf0,	// (0x0004d7a3) mup_volume_pane_cp_ParamLimits

0xacf0,	// (0x0004d7a3) mup_volume_pane_cp

0x4dd8,	// (0x0004788b) mup2_visualizer_pane_g1_ParamLimits

0x4dd8,	// (0x0004788b) mup2_visualizer_pane_g1

0xe529,	// (0x00050fdc) mup2_visualizer_pane_g2_ParamLimits

0xe529,	// (0x00050fdc) mup2_visualizer_pane_g2

0x4ded,	// (0x000478a0) mup2_visualizer_pane_g3_ParamLimits

0x4ded,	// (0x000478a0) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x00052146) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x00052146) mup2_visualizer_pane_g

0xd2c7,	// (0x0004fd7a) aid_size_cell_fmradio

0x429c,	// (0x00046d4f) aid_height_parent_landcape

0xc8cc,	// (0x0004f37f) wml_content_pane_cp

0xc8d4,	// (0x0004f387) wml_tabs_pane

0xc8dd,	// (0x0004f390) popup_wml_miniature_window

0xc8e5,	// (0x0004f398) scroll_pane_cp021

0xc8f9,	// (0x0004f3ac) wml_content_pane_comp8

0xc25b,	// (0x0004ed0e) bg_popup_sub_pane_cp05

0xe547,	// (0x00050ffa) popup_wml_miniature_window_g1

0xe54f,	// (0x00051002) wml_miniature_view_pane

0x4df9,	// (0x000478ac) aid_size_wml_view

0x4e01,	// (0x000478b4) wml_miniature_view_pane_g1

0x4e0a,	// (0x000478bd) wml_miniature_view_pane_g2

0x4e13,	// (0x000478c6) wml_miniature_view_pane_g3

0x4e1b,	// (0x000478ce) wml_miniature_view_pane_g4

0x4e23,	// (0x000478d6) wml_miniature_view_pane_g5

0x4e2b,	// (0x000478de) wml_miniature_view_pane_g6

0x4e33,	// (0x000478e6) wml_miniature_view_pane_g7

0x4e3b,	// (0x000478ee) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x0005214d) wml_miniature_view_pane_g

0xe557,	// (0x0005100a) background_graphic_ParamLimits

0xe557,	// (0x0005100a) background_graphic

0xe563,	// (0x00051016) wml_tabs_2_pane

0xe56c,	// (0x0005101f) wml_tabs_3_pane_ParamLimits

0xe56c,	// (0x0005101f) wml_tabs_3_pane

0xe57e,	// (0x00051031) wml_tabs_4_pane_ParamLimits

0xe57e,	// (0x00051031) wml_tabs_4_pane

0xe594,	// (0x00051047) wml_tabs_5_pane_ParamLimits

0xe594,	// (0x00051047) wml_tabs_5_pane

0xe5ae,	// (0x00051061) wml_tabs_pane_g2_ParamLimits

0xe5ae,	// (0x00051061) wml_tabs_pane_g2

0xe5c2,	// (0x00051075) wml_tabs_pane_g3_ParamLimits

0xe5c2,	// (0x00051075) wml_tabs_pane_g3

0x4e43,	// (0x000478f6) wml_tabs_2_active_pane_ParamLimits

0x4e43,	// (0x000478f6) wml_tabs_2_active_pane

0x4e57,	// (0x0004790a) wml_tabs_2_passive_pane_ParamLimits

0x4e57,	// (0x0004790a) wml_tabs_2_passive_pane

0x4e6b,	// (0x0004791e) wml_tabs_3_active_pane_cp_ParamLimits

0x4e6b,	// (0x0004791e) wml_tabs_3_active_pane_cp

0x4e80,	// (0x00047933) wml_tabs_3_passive_pane_ParamLimits

0x4e80,	// (0x00047933) wml_tabs_3_passive_pane

0x4e93,	// (0x00047946) wml_tabs_3_passive_pane_cp_ParamLimits

0x4e93,	// (0x00047946) wml_tabs_3_passive_pane_cp

0x4eaa,	// (0x0004795d) tabs_4_active_pane

0x4eb2,	// (0x00047965) tabs_4_passive_pane

0x4ebc,	// (0x0004796f) tabs_4_passive_pane_cp

0x4ec4,	// (0x00047977) tabs_4_passive_pane_cp2

0x3fb0,	// (0x00046a63) aid_height_text

0x3684,	// (0x00046137) mup_volume_cont_pane_ParamLimits

0x3684,	// (0x00046137) mup_volume_cont_pane

0x171e,	// (0x000441d1) aid_size_cell_pinb

0x1728,	// (0x000441db) aid_size_list_pinb

0x4dae,	// (0x00047861) mup2_volume_cont_pane_ParamLimits

0x4dae,	// (0x00047861) mup2_volume_cont_pane

0xacdc,	// (0x0004d78f) mup2_volume_cont_pane_g1_ParamLimits

0xacdc,	// (0x0004d78f) mup2_volume_cont_pane_g1

0x142f,	// (0x00043ee2) aid_size_cell_touch_ParamLimits

0x142f,	// (0x00043ee2) aid_size_cell_touch

0x1642,	// (0x000440f5) touch_pane_ParamLimits

0x1642,	// (0x000440f5) touch_pane

0xa6a9,	// (0x0004d15c) main_rss2_pane

0xe5df,	// (0x00051092) listscroll_rss2_pane

0xe5e8,	// (0x0005109b) rss2_navigation_pane

0xe5f0,	// (0x000510a3) list_rss2_pane

0xce97,	// (0x0004f94a) scroll_pane_cp22

0xe5f8,	// (0x000510ab) rss2_navigation_pane_g1

0xe601,	// (0x000510b4) rss2_navigation_pane_g2

0xe609,	// (0x000510bc) rss2_navigation_pane_g3

0x0002,

0x0046,	// (0x00042af9) rss2_navigation_pane_g

0xe611,	// (0x000510c4) rss2_navigation_pane_t1

0x4ece,	// (0x00047981) rss2_list_single_pane_ParamLimits

0x4ece,	// (0x00047981) rss2_list_single_pane

0xe61f,	// (0x000510d2) rss2_list_single_pane_t2

0xe62d,	// (0x000510e0) rss2_list_single_pane_t3_ParamLimits

0xe62d,	// (0x000510e0) rss2_list_single_pane_t3

0xe64a,	// (0x000510fd) rss2_list_single_pane_t4

0x2ebd,	// (0x00045970) smil_status_pane_g1

0xa722,	// (0x0004d1d5) main_image2_pane_ParamLimits

0xa722,	// (0x0004d1d5) main_image2_pane

0x498c,	// (0x0004743f) main_camera2_pane_g9_ParamLimits

0x498c,	// (0x0004743f) main_camera2_pane_g9

0x4aa8,	// (0x0004755b) main_camera2_pane_t5_ParamLimits

0x4aa8,	// (0x0004755b) main_camera2_pane_t5

0xacb1,	// (0x0004d764) main_camera2_pane_t6_ParamLimits

0xacb1,	// (0x0004d764) main_camera2_pane_t6

0x4ee8,	// (0x0004799b) main_image2_pane_g1_ParamLimits

0x4ee8,	// (0x0004799b) main_image2_pane_g1

0x3cc7,	// (0x0004677a) smil2_video_pane_ParamLimits

0x3cc7,	// (0x0004677a) smil2_video_pane

0xa6d7,	// (0x0004d18a) aid_zoom_text_primary_cp

0xa718,	// (0x0004d1cb) popup_preview_fixed_window

0xc835,	// (0x0004f2e8) im_reading_pane_g1

0x485e,	// (0x00047311) cams2_bc_adjust_pane_cp_ParamLimits

0x485e,	// (0x00047311) cams2_bc_adjust_pane_cp

0x4ace,	// (0x00047581) cams2_bc_adjust_pane_ParamLimits

0x4ace,	// (0x00047581) cams2_bc_adjust_pane

0xad15,	// (0x0004d7c8) cams2_bc_adjust_pane_g1

0xad1d,	// (0x0004d7d0) cams2_slider_pane

0xad26,	// (0x0004d7d9) cams2_slider_pane_g1

0xad2f,	// (0x0004d7e2) cams2_slider_pane_g2

0x0006,

0xf6ab,	// (0x0005215e) cams2_slider_pane_g

0x1818,	// (0x000442cb) calc_display_pane_ParamLimits

0x183e,	// (0x000442f1) calc_paper_pane_ParamLimits

0x1861,	// (0x00044314) grid_calc_pane_ParamLimits

0xac1e,	// (0x0004d6d1) popup_clock_digital_window_t1_ParamLimits

0xd264,	// (0x0004fd17) main_image_pane_t1

0x17fa,	// (0x000442ad) aid_size_cell_calc_ParamLimits

0x17fa,	// (0x000442ad) aid_size_cell_calc

0x42e2,	// (0x00046d95) popup_blid_sat_info2_window_ParamLimits

0x42e2,	// (0x00046d95) popup_blid_sat_info2_window

0xe660,	// (0x00051113) aid_size_cell_blid

0xe668,	// (0x0005111b) bg_popup_window_pane_cp07

0xe68b,	// (0x0005113e) grid_popup_blid_pane

0xe695,	// (0x00051148) heading_pane_cp05_ParamLimits

0xe695,	// (0x00051148) heading_pane_cp05

0xe75f,	// (0x00051212) cell_popup_blid_pane_ParamLimits

0xe75f,	// (0x00051212) cell_popup_blid_pane

0xe791,	// (0x00051244) cell_popup_blid_pane_g1

0xe799,	// (0x0005124c) cell_popup_blid_pane_t1

0x4d7e,	// (0x00047831) mup2_indicator_pane_ParamLimits

0x4d7e,	// (0x00047831) mup2_indicator_pane

0xcfd1,	// (0x0004fa84) mup2_visualizer_osc_pane

0xe535,	// (0x00050fe8) mup2_visualizer_spec_pane_ParamLimits

0xe535,	// (0x00050fe8) mup2_visualizer_spec_pane

0x4efe,	// (0x000479b1) mup2_spec_half_pane

0x4f07,	// (0x000479ba) mup2_spec_half_pane_cp

0x4f0f,	// (0x000479c2) mup2_spec_bar_pane_ParamLimits

0x4f0f,	// (0x000479c2) mup2_spec_bar_pane

0xe4bf,	// (0x00050f72) mup2_spec_bar_pane_g1

0xe4c9,	// (0x00050f7c) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x000520d8) mup2_spec_bar_pane_g

0x4f2f,	// (0x000479e2) mup2_osc_middle_pane

0xe4db,	// (0x00050f8e) mup2_visualizer_osc_pane_g1

0xa750,	// (0x0004d203) popup_number_entry_window_t1_ParamLimits

0xa763,	// (0x0004d216) popup_number_entry_window_t2_ParamLimits

0xa775,	// (0x0004d228) popup_number_entry_window_t3_ParamLimits

0xa787,	// (0x0004d23a) popup_number_entry_window_t5_ParamLimits

0xa787,	// (0x0004d23a) popup_number_entry_window_t5

0xf0e7,	// (0x00051b9a) popup_number_entry_window_t_ParamLimits

0xa7bc,	// (0x0004d26f) text_title_cp2_ParamLimits

0xac5d,	// (0x0004d710) aid_hotspot_pointer_text2_pane

0xac83,	// (0x0004d736) main_viewer_pane_g9_ParamLimits

0xac83,	// (0x0004d736) main_viewer_pane_g9

0xca64,	// (0x0004f517) cale_month_pane_t1_ParamLimits

0xcaa1,	// (0x0004f554) bg_cale_pane_ParamLimits

0xcab9,	// (0x0004f56c) list_cale_pane_ParamLimits

0xc6c9,	// (0x0004f17c) listscroll_cale_day_pane_t1

0xcaca,	// (0x0004f57d) scroll_pane_cp09_ParamLimits

0x36ba,	// (0x0004616d) main_mup_eq_pane_t1_ParamLimits

0x36ba,	// (0x0004616d) main_mup_eq_pane_t1

0x36d6,	// (0x00046189) main_mup_eq_pane_t2_ParamLimits

0x36d6,	// (0x00046189) main_mup_eq_pane_t2

0x36f2,	// (0x000461a5) main_mup_eq_pane_t3_ParamLimits

0x36f2,	// (0x000461a5) main_mup_eq_pane_t3

0x3710,	// (0x000461c3) main_mup_eq_pane_t4_ParamLimits

0x3710,	// (0x000461c3) main_mup_eq_pane_t4

0x372e,	// (0x000461e1) main_mup_eq_pane_t5_ParamLimits

0x372e,	// (0x000461e1) main_mup_eq_pane_t5

0x374c,	// (0x000461ff) main_mup_eq_pane_t6_ParamLimits

0x374c,	// (0x000461ff) main_mup_eq_pane_t6

0x3762,	// (0x00046215) main_mup_eq_pane_t7_ParamLimits

0x3762,	// (0x00046215) main_mup_eq_pane_t7

0x3778,	// (0x0004622b) main_mup_eq_pane_t8_ParamLimits

0x3778,	// (0x0004622b) main_mup_eq_pane_t8

0x378e,	// (0x00046241) main_mup_eq_pane_t9_ParamLimits

0x378e,	// (0x00046241) main_mup_eq_pane_t9

0x37aa,	// (0x0004625d) main_mup_eq_pane_t10_ParamLimits

0x37aa,	// (0x0004625d) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x00051f27) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x00051f27) main_mup_eq_pane_t

0x387f,	// (0x00046332) mup_equalizer_pane_cp5_ParamLimits

0x3897,	// (0x0004634a) mup_equalizer_pane_cp6_ParamLimits

0x38af,	// (0x00046362) mup_equalizer_pane_cp7_ParamLimits

0xa6a9,	// (0x0004d15c) main_gallery_pane

0xe4e4,	// (0x00050f97) smil2_volume_pane

0xe4ec,	// (0x00050f9f) smil_status_volume_pane_g1_ParamLimits

0xe4ff,	// (0x00050fb2) smil_status_volume_pane_g2_ParamLimits

0xac8f,	// (0x0004d742) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x000520dd) smil_status_volume_pane_g_ParamLimits

0xe668,	// (0x0005111b) bg_popup_window_pane_cp07_ParamLimits

0xe676,	// (0x00051129) blid_firmament_pane

0x4f38,	// (0x000479eb) aid_size_cell_gallery_ParamLimits

0x4f38,	// (0x000479eb) aid_size_cell_gallery

0x4f4e,	// (0x00047a01) grid_gallery_pane_ParamLimits

0x4f4e,	// (0x00047a01) grid_gallery_pane

0x4f69,	// (0x00047a1c) cell_gallery_pane_ParamLimits

0x4f69,	// (0x00047a1c) cell_gallery_pane

0xe7a7,	// (0x0005125a) bg_cell_gallery_focus_pane_ParamLimits

0xe7a7,	// (0x0005125a) bg_cell_gallery_focus_pane

0xe7b9,	// (0x0005126c) cell_gallery_pane_g1_ParamLimits

0xe7b9,	// (0x0005126c) cell_gallery_pane_g1

0x4fba,	// (0x00047a6d) cell_gallery_pane_g2_ParamLimits

0x4fba,	// (0x00047a6d) cell_gallery_pane_g2

0x4fc7,	// (0x00047a7a) cell_gallery_pane_g3_ParamLimits

0x4fc7,	// (0x00047a7a) cell_gallery_pane_g3

0xe7c5,	// (0x00051278) cell_gallery_pane_g4_ParamLimits

0xe7c5,	// (0x00051278) cell_gallery_pane_g4

0x0003,

0xf6d1,	// (0x00052184) cell_gallery_pane_g_ParamLimits

0xf6d1,	// (0x00052184) cell_gallery_pane_g

0xe7d1,	// (0x00051284) bg_cell_gallery_focus_pane_g1

0xe7d9,	// (0x0005128c) bg_cell_gallery_focus_pane_g2

0xe7e1,	// (0x00051294) bg_cell_gallery_focus_pane_g3

0xe7e9,	// (0x0005129c) bg_cell_gallery_focus_pane_g4

0xe7f1,	// (0x000512a4) bg_cell_gallery_focus_pane_g5

0xe7f9,	// (0x000512ac) bg_cell_gallery_focus_pane_g6

0xe801,	// (0x000512b4) bg_cell_gallery_focus_pane_g7

0xe809,	// (0x000512bc) bg_cell_gallery_focus_pane_g8

0x0007,

0x007c,	// (0x00042b2f) bg_cell_gallery_focus_pane_g

0xe811,	// (0x000512c4) aid_firma_cardinal

0xe825,	// (0x000512d8) blid_firmament_pane_t1

0xe83c,	// (0x000512ef) blid_firmament_pane_t2

0xe853,	// (0x00051306) blid_firmament_pane_t3

0xe86a,	// (0x0005131d) blid_firmament_pane_t4

0x0003,

0x008d,	// (0x00042b40) blid_firmament_pane_t

0xe881,	// (0x00051334) blid_sat_info_pane

0xe891,	// (0x00051344) blid_sat_info_pane_g1

0xe891,	// (0x00051344) blid_sat_info_pane_g2

0x0001,

0x0096,	// (0x00042b49) blid_sat_info_pane_g

0xe89b,	// (0x0005134e) blid_sat_info_pane_t1

0xe8a9,	// (0x0005135c) smil2_volume_content_pane

0xe8b2,	// (0x00051365) smil2_volume_pane_g1

0xe8ba,	// (0x0005136d) smil2_volume_content_pane_g1

0xe8c3,	// (0x00051376) smil2_volume_content_pane_g2

0xe8cc,	// (0x0005137f) smil2_volume_content_pane_g3

0xe8d5,	// (0x00051388) smil2_volume_content_pane_g4

0xe8de,	// (0x00051391) smil2_volume_content_pane_g5

0xe8e7,	// (0x0005139a) smil2_volume_content_pane_g6

0xe8f0,	// (0x000513a3) smil2_volume_content_pane_g7

0xe8f9,	// (0x000513ac) smil2_volume_content_pane_g8

0xe902,	// (0x000513b5) smil2_volume_content_pane_g9

0xe90b,	// (0x000513be) smil2_volume_content_pane_g10

0x0009,

0x009b,	// (0x00042b4e) smil2_volume_content_pane_g

0x1d32,	// (0x000447e5) cale_week_day_heading_pane_t1_ParamLimits

0x1d46,	// (0x000447f9) cale_week_day_heading_pane_t2_ParamLimits

0x1d5a,	// (0x0004480d) cale_week_day_heading_pane_t3_ParamLimits

0x1d6e,	// (0x00044821) cale_week_day_heading_pane_t4_ParamLimits

0x1d82,	// (0x00044835) cale_week_day_heading_pane_t5_ParamLimits

0x1d96,	// (0x00044849) cale_week_day_heading_pane_t6_ParamLimits

0x1daa,	// (0x0004485d) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x00051c9f) cale_week_day_heading_pane_t_ParamLimits

0xc6db,	// (0x0004f18e) bg_cale_side_pane_ParamLimits

0x1dbe,	// (0x00044871) cale_week_time_pane_t1_ParamLimits

0x1dd6,	// (0x00044889) cale_week_time_pane_t2_ParamLimits

0x1dee,	// (0x000448a1) cale_week_time_pane_t3_ParamLimits

0x1e06,	// (0x000448b9) cale_week_time_pane_t4_ParamLimits

0x1e1e,	// (0x000448d1) cale_week_time_pane_t5_ParamLimits

0x1e36,	// (0x000448e9) cale_week_time_pane_t6_ParamLimits

0x1e4e,	// (0x00044901) cale_week_time_pane_t7_ParamLimits

0x1e6a,	// (0x0004491d) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x00051cae) cale_week_time_pane_t_ParamLimits

0x1e8a,	// (0x0004493d) cell_cale_week_pane_g2_ParamLimits

0xc6db,	// (0x0004f18e) bg_cale_side_pane_cp01_ParamLimits

0x2d56,	// (0x00045809) cale_month_week_pane_t1_ParamLimits

0x2d6d,	// (0x00045820) cale_month_week_pane_t2_ParamLimits

0x2d84,	// (0x00045837) cale_month_week_pane_t3_ParamLimits

0x2d9b,	// (0x0004584e) cale_month_week_pane_t4_ParamLimits

0x2db2,	// (0x00045865) cale_month_week_pane_t5_ParamLimits

0x2dc9,	// (0x0004587c) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x00051d87) cale_month_week_pane_t_ParamLimits

0xab27,	// (0x0004d5da) cell_cale_month_pane_g1_ParamLimits

0xa6a9,	// (0x0004d15c) main_cale_event_viewer_pane

0xa6a9,	// (0x0004d15c) listscroll_cale_event_viewer_pane

0xe914,	// (0x000513c7) list_cale_ev_pane

0xe91c,	// (0x000513cf) scroll_pane_cp023

0x4fd4,	// (0x00047a87) field_cale_ev_pane_ParamLimits

0x4fd4,	// (0x00047a87) field_cale_ev_pane

0xe928,	// (0x000513db) field_cale_ev_content_pane_ParamLimits

0xe928,	// (0x000513db) field_cale_ev_content_pane

0xe934,	// (0x000513e7) field_cale_ev_pane_g1_ParamLimits

0xe934,	// (0x000513e7) field_cale_ev_pane_g1

0xe940,	// (0x000513f3) field_cale_ev_pane_g2_ParamLimits

0xe940,	// (0x000513f3) field_cale_ev_pane_g2

0xe958,	// (0x0005140b) field_cale_ev_pane_g3_ParamLimits

0xe958,	// (0x0005140b) field_cale_ev_pane_g3

0x0002,

0x00b0,	// (0x00042b63) field_cale_ev_pane_g_ParamLimits

0x00b0,	// (0x00042b63) field_cale_ev_pane_g

0xe970,	// (0x00051423) field_cale_ev_pane_t1_ParamLimits

0xe970,	// (0x00051423) field_cale_ev_pane_t1

0x4ff8,	// (0x00047aab) field_cale_ev_content_pane_t1_ParamLimits

0x4ff8,	// (0x00047aab) field_cale_ev_content_pane_t1

0xd14a,	// (0x0004fbfd) bg_button_pane_cp01

0xc589,	// (0x0004f03c) listscroll_cale_week_pane_ParamLimits

0x1b1c,	// (0x000445cf) popup_toolbar_window_cp01

0xc6c9,	// (0x0004f17c) listscroll_cale_week_pane_t1_ParamLimits

0xc589,	// (0x0004f03c) listscroll_cale_day_pane_ParamLimits

0x2f1d,	// (0x000459d0) popup_toolbar_window_cp02

0xc6c9,	// (0x0004f17c) listscroll_cale_day_pane_t1_ParamLimits

0xc589,	// (0x0004f03c) main_cale_month_pane_ParamLimits

0x4562,	// (0x00047015) popup_toolbar_window_cp03_ParamLimits

0x4562,	// (0x00047015) popup_toolbar_window_cp03

0x3b85,	// (0x00046638) main_image_pane_g2_ParamLimits

0x3b85,	// (0x00046638) main_image_pane_g2

0x3b96,	// (0x00046649) main_image_pane_g3_ParamLimits

0x3b96,	// (0x00046649) main_image_pane_g3

0x0002,

0xf506,	// (0x00051fb9) main_image_pane_g_ParamLimits

0xf506,	// (0x00051fb9) main_image_pane_g

0xd264,	// (0x0004fd17) main_image_pane_t1_ParamLimits

0x3ba7,	// (0x0004665a) main_image_pane_t2_ParamLimits

0x3ba7,	// (0x0004665a) main_image_pane_t2

0x3bb9,	// (0x0004666c) main_image_pane_t3_ParamLimits

0x3bb9,	// (0x0004666c) main_image_pane_t3

0x3be1,	// (0x00046694) main_image_pane_t4_ParamLimits

0x3be1,	// (0x00046694) main_image_pane_t4

0x0003,

0xf50d,	// (0x00051fc0) main_image_pane_t_ParamLimits

0xf50d,	// (0x00051fc0) main_image_pane_t

0x3c01,	// (0x000466b4) popup_image_details_window_cp01

0x3c0b,	// (0x000466be) popup_toobar_trans_pane_cp01_ParamLimits

0x3c0b,	// (0x000466be) popup_toobar_trans_pane_cp01

0x43d5,	// (0x00046e88) popup_image_details_window_ParamLimits

0x43d5,	// (0x00046e88) popup_image_details_window

0xe430,	// (0x00050ee3) popup_image_focus_window

0x4818,	// (0x000472cb) camera2_autofocus_pane_ParamLimits

0x4818,	// (0x000472cb) camera2_autofocus_pane

0xa6a9,	// (0x0004d15c) bg_popup_sub_pane_cp06

0xe987,	// (0x0005143a) popup_image_focus_window_g1

0xe98f,	// (0x00051442) popup_image_focus_window_g2

0xe997,	// (0x0005144a) popup_image_focus_window_g3

0xe99f,	// (0x00051452) popup_image_focus_window_g4

0x0003,

0x00b7,	// (0x00042b6a) popup_image_focus_window_g

0xe9a7,	// (0x0005145a) popup_image_focus_window_t1

0xe9b5,	// (0x00051468) popup_image_focus_window_t2

0xe9c5,	// (0x00051478) popup_image_focus_window_t3

0x0002,

0x00c0,	// (0x00042b73) popup_image_focus_window_t

0xe9d3,	// (0x00051486) camera2_autofocus_pane_g1

0xa722,	// (0x0004d1d5) bg_tb_trans_pane_cp01

0xe9e1,	// (0x00051494) popup_image_details_window_g1

0xe9f4,	// (0x000514a7) popup_image_details_window_g2

0x0002,

0x00d2,	// (0x00042b85) popup_image_details_window_g

0xea1d,	// (0x000514d0) popup_image_details_window_t1

0xea2f,	// (0x000514e2) popup_image_details_window_t2

0xea48,	// (0x000514fb) popup_image_details_window_t3

0xea5c,	// (0x0005150f) popup_image_details_window_t4

0xea77,	// (0x0005152a) popup_image_details_window_t5

0x0004,

0x00d9,	// (0x00042b8c) popup_image_details_window_t

0xc575,	// (0x0004f028) bg_calc_paper_pane_ParamLimits

0xa6a9,	// (0x0004d15c) grid_highlight_pane_cp013

0xa945,	// (0x0004d3f8) list_calc_pane_ParamLimits

0xa957,	// (0x0004d40a) scroll_pane_cp024

0xc589,	// (0x0004f03c) bg_calc_display_pane_ParamLimits

0x1961,	// (0x00044414) calc_display_pane_t1_ParamLimits

0x1973,	// (0x00044426) calc_display_pane_t2_ParamLimits

0xa95f,	// (0x0004d412) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x00051c21) calc_display_pane_t_ParamLimits

0x1a36,	// (0x000444e9) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x00051c3e) cell_calc_pane_g

0x1a3f,	// (0x000444f2) cell_calc_pane_t1

0xc5e8,	// (0x0004f09b) grid_highlight_pane_cp02_ParamLimits

0xc5fe,	// (0x0004f0b1) toolbar_button_pane_cp01_ParamLimits

0xc5fe,	// (0x0004f0b1) toolbar_button_pane_cp01

0xd2a9,	// (0x0004fd5c) temp_image_control_pane_ParamLimits

0xd2a9,	// (0x0004fd5c) temp_image_control_pane

0xa722,	// (0x0004d1d5) main_mp3_pane

0xea91,	// (0x00051544) temp_image_control_pane_g1_ParamLimits

0xea91,	// (0x00051544) temp_image_control_pane_g1

0xea9f,	// (0x00051552) temp_image_control_pane_g2_ParamLimits

0xea9f,	// (0x00051552) temp_image_control_pane_g2

0xeab1,	// (0x00051564) temp_image_control_pane_g3_ParamLimits

0xeab1,	// (0x00051564) temp_image_control_pane_g3

0x5049,	// (0x00047afc) temp_image_control_pane_g4_ParamLimits

0x5049,	// (0x00047afc) temp_image_control_pane_g4

0x0003,

0xf6e5,	// (0x00052198) temp_image_control_pane_g_ParamLimits

0xf6e5,	// (0x00052198) temp_image_control_pane_g

0xea91,	// (0x00051544) main_mp3_pane_g1

0x505c,	// (0x00047b0f) main_mp3_pane_g2

0x0007,

0xf6ee,	// (0x000521a1) main_mp3_pane_g

0xeaf4,	// (0x000515a7) main_mp3_pane_t1

0xc740,	// (0x0004f1f3) main_camera_pane_g8_ParamLimits

0xc740,	// (0x0004f1f3) main_camera_pane_g8

0x215b,	// (0x00044c0e) main_video_pane_g7_ParamLimits

0x215b,	// (0x00044c0e) main_video_pane_g7

0xacca,	// (0x0004d77d) main_camera2_pane_t7_ParamLimits

0xacca,	// (0x0004d77d) main_camera2_pane_t7

0xc88c,	// (0x0004f33f) scroll_pane_cp025_ParamLimits

0xc88c,	// (0x0004f33f) scroll_pane_cp025

0xc8a0,	// (0x0004f353) scroll_pane_cp026_ParamLimits

0xc8a0,	// (0x0004f353) scroll_pane_cp026

0xc8af,	// (0x0004f362) wml_content_pane_ParamLimits

0xa6a9,	// (0x0004d15c) main_touch_calib_pane

0x5124,	// (0x00047bd7) main_touch_calib_pane_g1

0x5130,	// (0x00047be3) main_touch_calib_pane_g2

0x513c,	// (0x00047bef) main_touch_calib_pane_g3

0x5148,	// (0x00047bfb) main_touch_calib_pane_g4

0x0003,

0xf70c,	// (0x000521bf) main_touch_calib_pane_g

0x5154,	// (0x00047c07) main_touch_calib_pane_t1

0x516e,	// (0x00047c21) main_touch_calib_pane_t2

0x0004,

0xf715,	// (0x000521c8) main_touch_calib_pane_t

0xcf12,	// (0x0004f9c5) mup_progress_pane_cp02

0xcf31,	// (0x0004f9e4) navi_pane_g1

0xcf93,	// (0x0004fa46) navi_pane_mp_t3

0xa722,	// (0x0004d1d5) main_mp3_pane_ParamLimits

0x45a4,	// (0x00047057) navi_pane_ParamLimits

0xea91,	// (0x00051544) main_mp3_pane_g1_ParamLimits

0x505c,	// (0x00047b0f) main_mp3_pane_g2_ParamLimits

0x5068,	// (0x00047b1b) main_mp3_pane_g3_ParamLimits

0x5068,	// (0x00047b1b) main_mp3_pane_g3

0x5076,	// (0x00047b29) main_mp3_pane_g4_ParamLimits

0x5076,	// (0x00047b29) main_mp3_pane_g4

0xeac1,	// (0x00051574) main_mp3_pane_g5_ParamLimits

0xeac1,	// (0x00051574) main_mp3_pane_g5

0xeacf,	// (0x00051582) main_mp3_pane_g6_ParamLimits

0xeacf,	// (0x00051582) main_mp3_pane_g6

0xeadc,	// (0x0005158f) main_mp3_pane_g7_ParamLimits

0xeadc,	// (0x0005158f) main_mp3_pane_g7

0xeae8,	// (0x0005159b) main_mp3_pane_g8_ParamLimits

0xeae8,	// (0x0005159b) main_mp3_pane_g8

0xf6ee,	// (0x000521a1) main_mp3_pane_g_ParamLimits

0x5082,	// (0x00047b35) main_mp3_pane_t2

0x5090,	// (0x00047b43) main_mp3_pane_t3

0xeb02,	// (0x000515b5) main_mp3_pane_t4

0xeb10,	// (0x000515c3) main_mp3_pane_t5

0x0005,

0xf6ff,	// (0x000521b2) main_mp3_pane_t

0xeb1e,	// (0x000515d1) mup_progress_pane_cp01

0xa6d7,	// (0x0004d18a) aid_zoom_text_secondary2

0xe914,	// (0x000513c7) list_cale_ev2_pane

0xe91c,	// (0x000513cf) scroll_pane_cp023_ParamLimits

0x51c6,	// (0x00047c79) field_cale_ev2_pane_ParamLimits

0x51c6,	// (0x00047c79) field_cale_ev2_pane

0x0a9c,	// (0x0004354f) field_cale_ev2_pane_g1_ParamLimits

0x0a9c,	// (0x0004354f) field_cale_ev2_pane_g1

0x0aa8,	// (0x0004355b) field_cale_ev2_pane_g2_ParamLimits

0x0aa8,	// (0x0004355b) field_cale_ev2_pane_g2

0x0ac0,	// (0x00043573) field_cale_ev2_pane_g3_ParamLimits

0x0ac0,	// (0x00043573) field_cale_ev2_pane_g3

0x0003,

0xf720,	// (0x000521d3) field_cale_ev2_pane_g_ParamLimits

0xf720,	// (0x000521d3) field_cale_ev2_pane_g

0x0ad8,	// (0x0004358b) field_cale_ev2_pane_t1_ParamLimits

0x0ad8,	// (0x0004358b) field_cale_ev2_pane_t1

0x0aef,	// (0x000435a2) field_cale_ev2_pane_t2_ParamLimits

0x0aef,	// (0x000435a2) field_cale_ev2_pane_t2

0x0001,

0xf729,	// (0x000521dc) field_cale_ev2_pane_t_ParamLimits

0xf729,	// (0x000521dc) field_cale_ev2_pane_t

0x3a20,	// (0x000464d3) main_postcard_pane_g5_ParamLimits

0x3a20,	// (0x000464d3) main_postcard_pane_g5

0x3a36,	// (0x000464e9) main_postcard_pane_g6_ParamLimits

0x3a36,	// (0x000464e9) main_postcard_pane_g6

0x1f07,	// (0x000449ba) camera2_autofocus_pane_cp_ParamLimits

0x1f07,	// (0x000449ba) camera2_autofocus_pane_cp

0xa722,	// (0x0004d1d5) main_mup3_pane

0x520a,	// (0x00047cbd) main_mup3_pane_g1_ParamLimits

0x520a,	// (0x00047cbd) main_mup3_pane_g1

0x522c,	// (0x00047cdf) main_mup3_pane_g2_ParamLimits

0x522c,	// (0x00047cdf) main_mup3_pane_g2

0x52af,	// (0x00047d62) main_mup3_pane_g3_ParamLimits

0x52af,	// (0x00047d62) main_mup3_pane_g3

0x52f7,	// (0x00047daa) main_mup3_pane_g4_ParamLimits

0x52f7,	// (0x00047daa) main_mup3_pane_g4

0x533f,	// (0x00047df2) main_mup3_pane_g5_ParamLimits

0x533f,	// (0x00047df2) main_mup3_pane_g5

0x5387,	// (0x00047e3a) main_mup3_pane_g6_ParamLimits

0x5387,	// (0x00047e3a) main_mup3_pane_g6

0xeb26,	// (0x000515d9) main_mup3_pane_g7_ParamLimits

0xeb26,	// (0x000515d9) main_mup3_pane_g7

0x0007,

0xf739,	// (0x000521ec) main_mup3_pane_g_ParamLimits

0xf739,	// (0x000521ec) main_mup3_pane_g

0x5407,	// (0x00047eba) main_mup3_pane_t1_ParamLimits

0x5407,	// (0x00047eba) main_mup3_pane_t1

0x5479,	// (0x00047f2c) main_mup3_pane_t2_ParamLimits

0x5479,	// (0x00047f2c) main_mup3_pane_t2

0x554f,	// (0x00048002) main_mup3_pane_t4_ParamLimits

0x554f,	// (0x00048002) main_mup3_pane_t4

0x55ad,	// (0x00048060) main_mup3_pane_t5_ParamLimits

0x55ad,	// (0x00048060) main_mup3_pane_t5

0x5669,	// (0x0004811c) main_mup3_pane_t6_ParamLimits

0x5669,	// (0x0004811c) main_mup3_pane_t6

0x0005,

0xf74a,	// (0x000521fd) main_mup3_pane_t_ParamLimits

0xf74a,	// (0x000521fd) main_mup3_pane_t

0x571f,	// (0x000481d2) mup3_progress_pane_ParamLimits

0x571f,	// (0x000481d2) mup3_progress_pane

0x57b3,	// (0x00048266) popup_mup3_control_window_ParamLimits

0x57b3,	// (0x00048266) popup_mup3_control_window

0xeb34,	// (0x000515e7) popup_mup3_text_window

0x57e9,	// (0x0004829c) mup3_progress_pane_t1

0x5800,	// (0x000482b3) mup3_progress_pane_t2

0xeb3c,	// (0x000515ef) mup3_progress_pane_t3

0x0002,

0xf757,	// (0x0005220a) mup3_progress_pane_t

0xeb53,	// (0x00051606) mup_progress_pane_cp03

0xa6a9,	// (0x0004d15c) bg_tb_trans_pane_cp04

0x5817,	// (0x000482ca) mup3_volume_pane

0x581f,	// (0x000482d2) popup_mup3_control_window_g1

0x5828,	// (0x000482db) mup3_volume_pane_g1

0x5831,	// (0x000482e4) mup3_volume_pane_g2

0x583a,	// (0x000482ed) mup3_volume_pane_g3

0x0002,

0xf75e,	// (0x00052211) mup3_volume_pane_g

0xa6a9,	// (0x0004d15c) bg_tb_trans_pane_cp03

0xeb63,	// (0x00051616) popup_mup3_text_window_g1

0xeb6b,	// (0x0005161e) popup_mup3_text_window_t1

0xc5d1,	// (0x0004f084) list_calc_item_pane_g1_ParamLimits

0xe5d6,	// (0x00051089) mup_volume_pane_cp_g1

0x5188,	// (0x00047c3b) main_touch_calib_pane_t3

0x519c,	// (0x00047c4f) main_touch_calib_pane_t4

0x51b0,	// (0x00047c63) main_touch_calib_pane_t5

0xa6b3,	// (0x0004d166) aid_cell_size_toolbar2

0xa6bb,	// (0x0004d16e) aid_popup3_width_pane

0xa6c7,	// (0x0004d17a) aid_zoom_text_msg_primary

0xaa29,	// (0x0004d4dc) vorec_t7

0xc595,	// (0x0004f048) bg_calc_paper_pane_g1_ParamLimits

0xc5a1,	// (0x0004f054) bg_calc_paper_pane_g2_ParamLimits

0xc5ad,	// (0x0004f060) bg_calc_paper_pane_g3_ParamLimits

0xc5b9,	// (0x0004f06c) bg_calc_paper_pane_g4_ParamLimits

0xc5c5,	// (0x0004f078) bg_calc_paper_pane_g5_ParamLimits

0x19c0,	// (0x00044473) bg_calc_paper_pane_g6_ParamLimits

0x19d3,	// (0x00044486) bg_calc_paper_pane_g7_ParamLimits

0x19e6,	// (0x00044499) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x00051c28) bg_calc_paper_pane_g_ParamLimits

0x19f7,	// (0x000444aa) calc_bg_paper_pane_g9_ParamLimits

0x2069,	// (0x00044b1c) image_qvga_pane_ParamLimits

0x2069,	// (0x00044b1c) image_qvga_pane

0xc4b6,	// (0x0004ef69) bg_popup_sub_pane_cp04_ParamLimits

0xd1e0,	// (0x0004fc93) popup_mup_playback_window_g1_ParamLimits

0xd1ec,	// (0x0004fc9f) popup_mup_playback_window_t1_ParamLimits

0xd201,	// (0x0004fcb4) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x00051fb4) popup_mup_playback_window_t_ParamLimits

0x4c9c,	// (0x0004774f) main_mup2_pane_g3_ParamLimits

0x4c9c,	// (0x0004774f) main_mup2_pane_g3

0x235a,	// (0x00044e0d) popup_toolbar_window_cp04

0xd5fc,	// (0x000500af) popup_call2_audio_second_window_g3_ParamLimits

0xd5fc,	// (0x000500af) popup_call2_audio_second_window_g3

0xda12,	// (0x000504c5) popup_call2_audio_first_window_g4_ParamLimits

0xda12,	// (0x000504c5) popup_call2_audio_first_window_g4

0xe0a9,	// (0x00050b5c) popup_call2_audio_in_window_g4_ParamLimits

0xe0a9,	// (0x00050b5c) popup_call2_audio_in_window_g4

0x3b67,	// (0x0004661a) aid_area_sk_bg_cut_ParamLimits

0x3b67,	// (0x0004661a) aid_area_sk_bg_cut

0xd216,	// (0x0004fcc9) aid_area_sk_bg_cut_2_ParamLimits

0xd216,	// (0x0004fcc9) aid_area_sk_bg_cut_2

0x4faa,	// (0x00047a5d) aid_placing_details_win

0x4fb2,	// (0x00047a65) aid_placing_details_win_2

0xe9d3,	// (0x00051486) camera2_autofocus_pane_g1_ParamLimits

0x15e1,	// (0x00044094) popup_fixed_preview_cale_window_ParamLimits

0x15e1,	// (0x00044094) popup_fixed_preview_cale_window

0xcfe2,	// (0x0004fa95) navi_slider_pane_g3

0xcfeb,	// (0x0004fa9e) navi_slider_pane_g4

0xcff4,	// (0x0004faa7) navi_slider_pane_g5

0xcfe2,	// (0x0004fa95) navi_slider_pane_g6

0xac44,	// (0x0004d6f7) navi_slider_pane_g7

0xd117,	// (0x0004fbca) mup_scale_pane_g3

0xd120,	// (0x0004fbd3) mup_scale_pane_g4

0xd129,	// (0x0004fbdc) mup_scale_pane_g5

0x38c7,	// (0x0004637a) mup_scale_pane_g6

0x38d0,	// (0x00046383) mup_scale_pane_g7

0xcfe2,	// (0x0004fa95) cams2_slider_pane_g3

0xe658,	// (0x0005110b) cams2_slider_pane_g4

0xad38,	// (0x0004d7eb) cams2_slider_pane_g5

0xcfe2,	// (0x0004fa95) cams2_slider_pane_g6

0xad40,	// (0x0004d7f3) cams2_slider_pane_g7

0xe891,	// (0x00051344) camera2_autofocus_pane_cp_g1

0xeb79,	// (0x0005162c) bg_popup_preview_window_pane_cp02_ParamLimits

0xeb79,	// (0x0005162c) bg_popup_preview_window_pane_cp02

0xeb85,	// (0x00051638) list_fp_cale_pane_ParamLimits

0xeb85,	// (0x00051638) list_fp_cale_pane

0xeb91,	// (0x00051644) popup_fixed_preview_cale_window_t1_ParamLimits

0xeb91,	// (0x00051644) popup_fixed_preview_cale_window_t1

0x5843,	// (0x000482f6) popup_fixed_preview_cale_window_t2_ParamLimits

0x5843,	// (0x000482f6) popup_fixed_preview_cale_window_t2

0x5858,	// (0x0004830b) popup_fixed_preview_cale_window_t3_ParamLimits

0x5858,	// (0x0004830b) popup_fixed_preview_cale_window_t3

0x0002,

0xf765,	// (0x00052218) popup_fixed_preview_cale_window_t_ParamLimits

0xf765,	// (0x00052218) popup_fixed_preview_cale_window_t

0xdc72,	// (0x00050725) list_single_fp_cale_pane_ParamLimits

0xdc72,	// (0x00050725) list_single_fp_cale_pane

0xebaf,	// (0x00051662) list_single_fp_cale_pane_g1_ParamLimits

0xebaf,	// (0x00051662) list_single_fp_cale_pane_g1

0xebbb,	// (0x0005166e) list_single_fp_cale_pane_g2_ParamLimits

0xebbb,	// (0x0005166e) list_single_fp_cale_pane_g2

0x0002,

0x016b,	// (0x00042c1e) list_single_fp_cale_pane_g_ParamLimits

0x016b,	// (0x00042c1e) list_single_fp_cale_pane_g

0xebd4,	// (0x00051687) list_single_fp_cale_pane_t1_ParamLimits

0xebd4,	// (0x00051687) list_single_fp_cale_pane_t1

0xebe6,	// (0x00051699) list_single_fp_cale_pane_t2_ParamLimits

0xebe6,	// (0x00051699) list_single_fp_cale_pane_t2

0x0001,

0x0172,	// (0x00042c25) list_single_fp_cale_pane_t_ParamLimits

0x0172,	// (0x00042c25) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa6a9,	// (0x0004d15c) main_dialer_pane

0x586f,	// (0x00048322) aid_cell_size_keypad

0x5879,	// (0x0004832c) dialer_ne_pane

0x5883,	// (0x00048336) grid_dialer_command_1_pane

0x588b,	// (0x0004833e) grid_dialer_command_2_pane

0x5893,	// (0x00048346) grid_dialer_keypad_pane

0x58a7,	// (0x0004835a) bg_popup_call_pane_cp06_ParamLimits

0x58a7,	// (0x0004835a) bg_popup_call_pane_cp06

0x58b3,	// (0x00048366) dialer_ne_clear_pane_ParamLimits

0x58b3,	// (0x00048366) dialer_ne_clear_pane

0xec19,	// (0x000516cc) dialer_ne_pane_g1

0xec21,	// (0x000516d4) dialer_ne_pane_t1_ParamLimits

0xec21,	// (0x000516d4) dialer_ne_pane_t1

0x58bf,	// (0x00048372) dialer_ne_pane_t2_ParamLimits

0x58bf,	// (0x00048372) dialer_ne_pane_t2

0x58e9,	// (0x0004839c) dialer_ne_pane_t3_ParamLimits

0x58e9,	// (0x0004839c) dialer_ne_pane_t3

0x0002,

0xf76c,	// (0x0005221f) dialer_ne_pane_t_ParamLimits

0xf76c,	// (0x0005221f) dialer_ne_pane_t

0x5919,	// (0x000483cc) dialer_ne_pane_t3_copy1_ParamLimits

0x5919,	// (0x000483cc) dialer_ne_pane_t3_copy1

0x5948,	// (0x000483fb) cell_dialer_keypad_pane_ParamLimits

0x5948,	// (0x000483fb) cell_dialer_keypad_pane

0x595f,	// (0x00048412) cell_dialer_command_1_pane_ParamLimits

0x595f,	// (0x00048412) cell_dialer_command_1_pane

0x5975,	// (0x00048428) cell_dialer_command_2_pane_ParamLimits

0x5975,	// (0x00048428) cell_dialer_command_2_pane

0xec33,	// (0x000516e6) bg_button_pane_cp02_ParamLimits

0xec33,	// (0x000516e6) bg_button_pane_cp02

0x5984,	// (0x00048437) cell_dialer_keypad_pane_g1_ParamLimits

0x5984,	// (0x00048437) cell_dialer_keypad_pane_g1

0xec33,	// (0x000516e6) bg_button_pane_cp03_ParamLimits

0xec33,	// (0x000516e6) bg_button_pane_cp03

0x5999,	// (0x0004844c) cell_dialer_command_1_pane_g1_ParamLimits

0x5999,	// (0x0004844c) cell_dialer_command_1_pane_g1

0xec3f,	// (0x000516f2) bg_button_pane_cp04

0x59ad,	// (0x00048460) cell_dialer_command_2_pane_g1

0xcfd1,	// (0x0004fa84) bg_button_pane_cp06

0xec47,	// (0x000516fa) dialer_ne_clear_pane_g1

0x33ab,	// (0x00045e5e) navi_pane_g2

0x33d9,	// (0x00045e8c) navi_pane_g3

0x0002,

0xf404,	// (0x00051eb7) navi_pane_g

0x3404,	// (0x00045eb7) navi_pane_mv_g2

0x342b,	// (0x00045ede) navi_pane_mv_g5

0x3433,	// (0x00045ee6) navi_pane_mv_t1

0xc589,	// (0x0004f03c) main_clock2_pane

0x59e7,	// (0x0004849a) main_clock2_list_pane_ParamLimits

0x59e7,	// (0x0004849a) main_clock2_list_pane

0x5a21,	// (0x000484d4) main_clock2_pane_t1_ParamLimits

0x5a21,	// (0x000484d4) main_clock2_pane_t1

0x5a5d,	// (0x00048510) main_clock2_pane_t2_ParamLimits

0x5a5d,	// (0x00048510) main_clock2_pane_t2

0x0004,

0xf773,	// (0x00052226) main_clock2_pane_t_ParamLimits

0xf773,	// (0x00052226) main_clock2_pane_t

0x5aec,	// (0x0004859f) popup_clock_analogue_window_cp03_ParamLimits

0x5aec,	// (0x0004859f) popup_clock_analogue_window_cp03

0x5b13,	// (0x000485c6) popup_clock_digital_window_cp02_ParamLimits

0x5b13,	// (0x000485c6) popup_clock_digital_window_cp02

0x5b8e,	// (0x00048641) main_clock2_list_single_pane_ParamLimits

0x5b8e,	// (0x00048641) main_clock2_list_single_pane

0xcfd1,	// (0x0004fa84) list_highlight_pane_cp05

0xec4f,	// (0x00051702) main_clock2_list_single_pane_t1

0x235a,	// (0x00044e0d) popup_toolbar_window_cp04_ParamLimits

0x5019,	// (0x00047acc) camera2_autofocus_pane_g2_ParamLimits

0x5019,	// (0x00047acc) camera2_autofocus_pane_g2

0x5025,	// (0x00047ad8) camera2_autofocus_pane_g3_ParamLimits

0x5025,	// (0x00047ad8) camera2_autofocus_pane_g3

0x5031,	// (0x00047ae4) camera2_autofocus_pane_g4_ParamLimits

0x5031,	// (0x00047ae4) camera2_autofocus_pane_g4

0x503d,	// (0x00047af0) camera2_autofocus_pane_g5_ParamLimits

0x503d,	// (0x00047af0) camera2_autofocus_pane_g5

0x0004,

0xf6da,	// (0x0005218d) camera2_autofocus_pane_g_ParamLimits

0xf6da,	// (0x0005218d) camera2_autofocus_pane_g

0x51ea,	// (0x00047c9d) camera2_autofocus_pane_cp_g2

0x51f2,	// (0x00047ca5) camera2_autofocus_pane_cp_g3

0x51fa,	// (0x00047cad) camera2_autofocus_pane_cp_g4

0x5202,	// (0x00047cb5) camera2_autofocus_pane_cp_g5

0x0004,

0xf72e,	// (0x000521e1) camera2_autofocus_pane_cp_g

0x589f,	// (0x00048352) popup_dialer_spcha_window

0xa6a9,	// (0x0004d15c) bg_popup_sub_pane_cp07

0xec5d,	// (0x00051710) list_spcha_pane

0xec65,	// (0x00051718) list_single_spcha_pane_ParamLimits

0xec65,	// (0x00051718) list_single_spcha_pane

0xa6a9,	// (0x0004d15c) list_highlight_pane_cp06

0xec76,	// (0x00051729) list_single_spcha_pane_t1

0xde53,	// (0x00050906) popup_call2_audio_out_window_g4_ParamLimits

0xde53,	// (0x00050906) popup_call2_audio_out_window_g4

0xa6a9,	// (0x0004d15c) main_imed2_pane

0xe43a,	// (0x00050eed) popup_imed_adjust2_window

0x43ed,	// (0x00046ea0) popup_imed_trans_window_ParamLimits

0x43ed,	// (0x00046ea0) popup_imed_trans_window

0xe6c1,	// (0x00051174) popup_blid_sat_info2_window_t1

0xe6cf,	// (0x00051182) popup_blid_sat_info2_window_t2

0x000a,

0xf6ba,	// (0x0005216d) popup_blid_sat_info2_window_t

0x5c44,	// (0x000486f7) aid_size_cell_colour_35

0x5c64,	// (0x00048717) aid_size_cell_colour_112

0x5c84,	// (0x00048737) aid_size_cell_effect

0xe40e,	// (0x00050ec1) bg_tb_trans_pane_cp02

0xcb3d,	// (0x0004f5f0) heading_imed_pane

0x5ca4,	// (0x00048757) listscroll_imed_pane

0xec84,	// (0x00051737) heading_imed_pane_g1

0xec8c,	// (0x0005173f) heading_imed_pane_t1

0xec9a,	// (0x0005174d) grid_imed_colour_35_pane_ParamLimits

0xec9a,	// (0x0005174d) grid_imed_colour_35_pane

0x5cb0,	// (0x00048763) grid_imed_effect_pane

0xecb6,	// (0x00051769) list_imed_aspect_pane

0x5cc7,	// (0x0004877a) scroll_pane_cp027_ParamLimits

0x5cc7,	// (0x0004877a) scroll_pane_cp027

0x5cd8,	// (0x0004878b) cell_imed_effect_pane_ParamLimits

0x5cd8,	// (0x0004878b) cell_imed_effect_pane

0xecbe,	// (0x00051771) cell_imed_colour_pane_ParamLimits

0xecbe,	// (0x00051771) cell_imed_colour_pane

0xed08,	// (0x000517bb) cell_imed_colour_pane_g1_ParamLimits

0xed08,	// (0x000517bb) cell_imed_colour_pane_g1

0xed19,	// (0x000517cc) hgihlgiht_grid_pane_cp016_ParamLimits

0xed19,	// (0x000517cc) hgihlgiht_grid_pane_cp016

0x5cfd,	// (0x000487b0) cell_imed_effect_pane_g1

0x5d05,	// (0x000487b8) grid_highlight_pane_cp017

0xed2a,	// (0x000517dd) list_imed_single_pane_ParamLimits

0xed2a,	// (0x000517dd) list_imed_single_pane

0xa6a9,	// (0x0004d15c) list_highlight_pane_cp07

0xed3e,	// (0x000517f1) list_imed_aspect_pane_comp1_t1

0xe40e,	// (0x00050ec1) bg_tb_trans_pane_cp05

0xed60,	// (0x00051813) popup_imed_adjust2_window_g1

0xed87,	// (0x0005183a) popup_imed_adjust2_window_t1

0xed9f,	// (0x00051852) slider_imed_adjust_pane

0xedb3,	// (0x00051866) slider_imed_adjust_pane_g1

0xedc3,	// (0x00051876) slider_imed_adjust_pane_g2

0xedd3,	// (0x00051886) slider_imed_adjust_pane_g3

0xede4,	// (0x00051897) slider_imed_adjust_pane_g4

0x0003,

0x019b,	// (0x00042c4e) slider_imed_adjust_pane_g

0x5d0e,	// (0x000487c1) aid_size_cell_clipart2

0x5d1a,	// (0x000487cd) grid_imed_clipart_pane

0xedf5,	// (0x000518a8) scroll_pane_cp031

0x5d24,	// (0x000487d7) cell_imed_clipart_pane_ParamLimits

0x5d24,	// (0x000487d7) cell_imed_clipart_pane

0x5d41,	// (0x000487f4) cell_imed_clipart_pane_g1

0xa6a9,	// (0x0004d15c) grid_highlight_pane_cp014

0x59fc,	// (0x000484af) main_clock2_pane_g1_ParamLimits

0x59fc,	// (0x000484af) main_clock2_pane_g1

0x5b35,	// (0x000485e8) aid_call2_pane_cp10

0x5b47,	// (0x000485fa) aid_call_pane_cp10

0xcf06,	// (0x0004f9b9) popup_clock_analogue_window_cp10_g1

0xcf06,	// (0x0004f9b9) popup_clock_analogue_window_cp10_g2

0x5b59,	// (0x0004860c) popup_clock_analogue_window_cp10_g3

0x5b59,	// (0x0004860c) popup_clock_analogue_window_cp10_g4

0xcf06,	// (0x0004f9b9) popup_clock_analogue_window_cp10_g5

0x0004,

0xf77e,	// (0x00052231) popup_clock_analogue_window_cp10_g

0x5b6f,	// (0x00048622) popup_clock_analogue_window_cp10_t1

0x5ba0,	// (0x00048653) clock_digital_number_pane_cp10_ParamLimits

0x5ba0,	// (0x00048653) clock_digital_number_pane_cp10

0x5bba,	// (0x0004866d) clock_digital_number_pane_cp11_ParamLimits

0x5bba,	// (0x0004866d) clock_digital_number_pane_cp11

0x5bd4,	// (0x00048687) clock_digital_number_pane_cp12_ParamLimits

0x5bd4,	// (0x00048687) clock_digital_number_pane_cp12

0x5bee,	// (0x000486a1) clock_digital_number_pane_cp13_ParamLimits

0x5bee,	// (0x000486a1) clock_digital_number_pane_cp13

0x5c08,	// (0x000486bb) clock_digital_separator_pane_cp10_ParamLimits

0x5c08,	// (0x000486bb) clock_digital_separator_pane_cp10

0x5c22,	// (0x000486d5) popup_clock_digital_window_cp02_t1_ParamLimits

0x5c22,	// (0x000486d5) popup_clock_digital_window_cp02_t1

0xc4ae,	// (0x0004ef61) clock_digital_number_pane_cp10_g1

0xc4ae,	// (0x0004ef61) clock_digital_number_pane_cp10_g2

0x0001,

0x01a4,	// (0x00042c57) clock_digital_number_pane_cp10_g

0xc4ae,	// (0x0004ef61) clock_digital_separator_pane_cp10_g1

0xc4ae,	// (0x0004ef61) clock_digital_separator_pane_g2_cp10

0xcfa1,	// (0x0004fa54) navi_pane_vded_g4

0xcfaa,	// (0x0004fa5d) navi_pane_vded_g5

0xcfb3,	// (0x0004fa66) navi_pane_vded_t1

0xa6a9,	// (0x0004d15c) main_vded_pane

0x5d4a,	// (0x000487fd) main_vded_pane_g1

0x5d56,	// (0x00048809) main_vded_pane_g2

0x5d62,	// (0x00048815) main_vded_pane_g3

0x0002,

0xf789,	// (0x0005223c) main_vded_pane_g

0x5d6e,	// (0x00048821) main_vded_pane_t1

0x5d7c,	// (0x0004882f) main_vded_pane_t2

0x0001,

0xf790,	// (0x00052243) main_vded_pane_t

0x5d8a,	// (0x0004883d) vded_slider_pane

0x5d94,	// (0x00048847) vded_video_pane

0xedfd,	// (0x000518b0) vded_video_pane_g1

0x5da0,	// (0x00048853) vded_video_pane_g2

0xe891,	// (0x00051344) vded_video_pane_g3

0x0002,

0xf795,	// (0x00052248) vded_video_pane_g

0xee07,	// (0x000518ba) vded_slider_pane_g1

0xe5d6,	// (0x00051089) vded_slider_pane_g2

0xee10,	// (0x000518c3) vded_slider_pane_g3

0xee19,	// (0x000518cc) vded_slider_pane_g4

0xee22,	// (0x000518d5) vded_slider_pane_g5

0x0004,

0x01bc,	// (0x00042c6f) vded_slider_pane_g

0x579d,	// (0x00048250) mup3_rocker_pane_ParamLimits

0x579d,	// (0x00048250) mup3_rocker_pane

0x5da9,	// (0x0004885c) mup3_control_keys_pane_g1

0x5db1,	// (0x00048864) mup3_control_keys_pane_g2

0x5db9,	// (0x0004886c) mup3_control_keys_pane_g3

0x5dc1,	// (0x00048874) mup3_control_keys_pane_g4

0x0003,

0xf79c,	// (0x0005224f) mup3_control_keys_pane_g

0x1618,	// (0x000440cb) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1618,	// (0x000440cb) popup_toolbar2_fixed_window_cp01

0x57d3,	// (0x00048286) popup_toolbar2_fixed_window_cp02_ParamLimits

0x57d3,	// (0x00048286) popup_toolbar2_fixed_window_cp02

0xd77a,	// (0x0005022d) popup_call2_audio_second_window_t4_ParamLimits

0xd77a,	// (0x0005022d) popup_call2_audio_second_window_t4

0xdcc0,	// (0x00050773) popup_call2_audio_first_window_t6_ParamLimits

0xdcc0,	// (0x00050773) popup_call2_audio_first_window_t6

0xdf56,	// (0x00050a09) popup_call2_audio_out_window_t6_ParamLimits

0xdf56,	// (0x00050a09) popup_call2_audio_out_window_t6

0xa6a9,	// (0x0004d15c) main_vitu_pane

0x5dd1,	// (0x00048884) aid_size_cell_itu_ParamLimits

0x5dd1,	// (0x00048884) aid_size_cell_itu

0xa722,	// (0x0004d1d5) bg_popup_window_pane_cp08_ParamLimits

0xa722,	// (0x0004d1d5) bg_popup_window_pane_cp08

0x5de7,	// (0x0004889a) field_vitu_entry_pane_ParamLimits

0x5de7,	// (0x0004889a) field_vitu_entry_pane

0x5dfe,	// (0x000488b1) grid_vitu_function_pane_ParamLimits

0x5dfe,	// (0x000488b1) grid_vitu_function_pane

0x5e19,	// (0x000488cc) grid_vitu_itu_pane_ParamLimits

0x5e19,	// (0x000488cc) grid_vitu_itu_pane

0x5e35,	// (0x000488e8) cell_vitu_itu_pane_ParamLimits

0x5e35,	// (0x000488e8) cell_vitu_itu_pane

0x5e5b,	// (0x0004890e) cell_vitu_function_pane_ParamLimits

0x5e5b,	// (0x0004890e) cell_vitu_function_pane

0xa722,	// (0x0004d1d5) bg_popup_sub_pane_cp08_ParamLimits

0xa722,	// (0x0004d1d5) bg_popup_sub_pane_cp08

0x5e76,	// (0x00048929) field_vitu_entry_pane_t1_ParamLimits

0x5e76,	// (0x00048929) field_vitu_entry_pane_t1

0xee43,	// (0x000518f6) field_vitu_entry_pane_t2_ParamLimits

0xee43,	// (0x000518f6) field_vitu_entry_pane_t2

0x0001,

0xf7a5,	// (0x00052258) field_vitu_entry_pane_t_ParamLimits

0xf7a5,	// (0x00052258) field_vitu_entry_pane_t

0xee60,	// (0x00051913) bg_button_pane_cp05_ParamLimits

0xee60,	// (0x00051913) bg_button_pane_cp05

0x5e96,	// (0x00048949) cell_vitu_itu_pane_g1

0x5eae,	// (0x00048961) cell_vitu_itu_pane_t1_ParamLimits

0x5eae,	// (0x00048961) cell_vitu_itu_pane_t1

0x5ec0,	// (0x00048973) cell_vitu_itu_pane_t2_ParamLimits

0x5ec0,	// (0x00048973) cell_vitu_itu_pane_t2

0x0002,

0xf7aa,	// (0x0005225d) cell_vitu_itu_pane_t_ParamLimits

0xf7aa,	// (0x0005225d) cell_vitu_itu_pane_t

0xee6e,	// (0x00051921) bg_button_pane_cp07

0x5ef5,	// (0x000489a8) cell_vitu_function_pane_g1

0xa93d,	// (0x0004d3f0) main_calc_pane_g1

0x1453,	// (0x00043f06) aid_visual_content_pane

0xa6a9,	// (0x0004d15c) main_vradio_pane

0x5efe,	// (0x000489b1) main_vradio_pane_g1_ParamLimits

0x5efe,	// (0x000489b1) main_vradio_pane_g1

0xee78,	// (0x0005192b) main_vradio_pane_g2_ParamLimits

0xee78,	// (0x0005192b) main_vradio_pane_g2

0x0001,

0xf7b1,	// (0x00052264) main_vradio_pane_g_ParamLimits

0xf7b1,	// (0x00052264) main_vradio_pane_g

0x5f15,	// (0x000489c8) main_vradio_pane_t1_ParamLimits

0x5f15,	// (0x000489c8) main_vradio_pane_t1

0x5f2a,	// (0x000489dd) main_vradio_pane_t2_ParamLimits

0x5f2a,	// (0x000489dd) main_vradio_pane_t2

0xee85,	// (0x00051938) main_vradio_pane_t3_ParamLimits

0xee85,	// (0x00051938) main_vradio_pane_t3

0x0002,

0xf7b6,	// (0x00052269) main_vradio_pane_t_ParamLimits

0xf7b6,	// (0x00052269) main_vradio_pane_t

0x5f3f,	// (0x000489f2) vradio_rocker_control_pane_ParamLimits

0x5f3f,	// (0x000489f2) vradio_rocker_control_pane

0x5f51,	// (0x00048a04) vradio_station_info_pane_ParamLimits

0x5f51,	// (0x00048a04) vradio_station_info_pane

0xee99,	// (0x0005194c) vradio_frequency_info_pane_ParamLimits

0xee99,	// (0x0005194c) vradio_frequency_info_pane

0xe891,	// (0x00051344) vradio_station_info_pane_g1

0xeea8,	// (0x0005195b) vradio_station_info_pane_t1_ParamLimits

0xeea8,	// (0x0005195b) vradio_station_info_pane_t1

0xeeca,	// (0x0005197d) vradio_station_info_pane_t2_ParamLimits

0xeeca,	// (0x0005197d) vradio_station_info_pane_t2

0x0001,

0x01ed,	// (0x00042ca0) vradio_station_info_pane_t_ParamLimits

0x01ed,	// (0x00042ca0) vradio_station_info_pane_t

0xeedc,	// (0x0005198f) vradio_tuning_pane

0xeee4,	// (0x00051997) vradio_rocker_control_pane_g1

0xeeec,	// (0x0005199f) vradio_rocker_control_pane_g2

0xeef4,	// (0x000519a7) vradio_rocker_control_pane_g3

0xeefc,	// (0x000519af) vradio_rocker_control_pane_g4

0xef04,	// (0x000519b7) vradio_rocker_control_pane_g5

0x0004,

0x01f2,	// (0x00042ca5) vradio_rocker_control_pane_g

0x5f61,	// (0x00048a14) vradio_frequency_info_pane_g1

0xef0c,	// (0x000519bf) vradio_frequency_info_pane_t1_ParamLimits

0xef0c,	// (0x000519bf) vradio_frequency_info_pane_t1

0x5f6b,	// (0x00048a1e) vradio_tuning_pane_g1

0x5f76,	// (0x00048a29) vradio_tuning_pane_t1

0xa6df,	// (0x0004d192) area_side_right_pane_ParamLimits

0xa6df,	// (0x0004d192) area_side_right_pane

0xe3d5,	// (0x00050e88) status_small_pane_g1

0xe3dd,	// (0x00050e90) status_small_pane_g2

0xe3e6,	// (0x00050e99) status_small_pane_g3

0xe3ef,	// (0x00050ea2) status_small_pane_g4

0x0003,

0xf617,	// (0x000520ca) status_small_pane_g

0xe3f8,	// (0x00050eab) status_small_pane_t1

0xa6a9,	// (0x0004d15c) main_video3_pane

0xef20,	// (0x000519d3) cams_zoom_vslider_pane

0xef28,	// (0x000519db) image3_wide_pane_ParamLimits

0xef28,	// (0x000519db) image3_wide_pane

0xef42,	// (0x000519f5) image3_wide_small_pane

0xef4e,	// (0x00051a01) main_video3_pane_g1_ParamLimits

0xef4e,	// (0x00051a01) main_video3_pane_g1

0xef6a,	// (0x00051a1d) main_video3_pane_g2_ParamLimits

0xef6a,	// (0x00051a1d) main_video3_pane_g2

0x0001,

0x01fd,	// (0x00042cb0) main_video3_pane_g_ParamLimits

0x01fd,	// (0x00042cb0) main_video3_pane_g

0xef86,	// (0x00051a39) main_video3_pane_t1_ParamLimits

0xef86,	// (0x00051a39) main_video3_pane_t1

0xefb1,	// (0x00051a64) main_video3_pane_t2_ParamLimits

0xefb1,	// (0x00051a64) main_video3_pane_t2

0xefde,	// (0x00051a91) main_video3_pane_t3_ParamLimits

0xefde,	// (0x00051a91) main_video3_pane_t3

0x0002,

0x0202,	// (0x00042cb5) main_video3_pane_t_ParamLimits

0x0202,	// (0x00042cb5) main_video3_pane_t

0xf00b,	// (0x00051abe) cams_zoom_vslider_pane_g1

0xf014,	// (0x00051ac7) cams_zoom_vslider_pane_g2

0x0001,

0x0209,	// (0x00042cbc) cams_zoom_vslider_pane_g

0xf01c,	// (0x00051acf) small_slider_vertical_pane

0xe891,	// (0x00051344) small_slider_vertical_pane_g1

0xe891,	// (0x00051344) small_slider_vertical_pane_g2

0xf024,	// (0x00051ad7) small_slider_vertical_pane_g3

0x0002,

0x020e,	// (0x00042cc1) small_slider_vertical_pane_g

0xa6a9,	// (0x0004d15c) main_hwr_training_pane

0xf02d,	// (0x00051ae0) hwr_training_instruct_pane_ParamLimits

0xf02d,	// (0x00051ae0) hwr_training_instruct_pane

0x5f85,	// (0x00048a38) hwr_training_navi_pane_ParamLimits

0x5f85,	// (0x00048a38) hwr_training_navi_pane

0x5fa4,	// (0x00048a57) hwr_training_write_pane_ParamLimits

0x5fa4,	// (0x00048a57) hwr_training_write_pane

0xa6a9,	// (0x0004d15c) bg_frame_shadow_pane

0xf064,	// (0x00051b17) hwr_training_write_pane_g1

0xf06c,	// (0x00051b1f) hwr_training_write_pane_g2

0xf074,	// (0x00051b27) hwr_training_write_pane_g3

0xf07c,	// (0x00051b2f) hwr_training_write_pane_g4

0xf084,	// (0x00051b37) hwr_training_write_pane_g5

0xf08c,	// (0x00051b3f) hwr_training_write_pane_g6

0xf094,	// (0x00051b47) hwr_training_write_pane_g7

0x0006,

0x0215,	// (0x00042cc8) hwr_training_write_pane_g

0xad55,	// (0x0004d808) hwr_training_navi_pane_g1_ParamLimits

0xad55,	// (0x0004d808) hwr_training_navi_pane_g1

0xad67,	// (0x0004d81a) hwr_training_navi_pane_g2_ParamLimits

0xad67,	// (0x0004d81a) hwr_training_navi_pane_g2

0xad79,	// (0x0004d82c) hwr_training_navi_pane_g3_ParamLimits

0xad79,	// (0x0004d82c) hwr_training_navi_pane_g3

0xad89,	// (0x0004d83c) hwr_training_navi_pane_g4_ParamLimits

0xad89,	// (0x0004d83c) hwr_training_navi_pane_g4

0x0004,

0xf7bd,	// (0x00052270) hwr_training_navi_pane_g_ParamLimits

0xf7bd,	// (0x00052270) hwr_training_navi_pane_g

0xad96,	// (0x0004d849) hwr_training_navi_pane_t1

0x5fec,	// (0x00048a9f) list_single_hwr_training_instruct_pane_ParamLimits

0x5fec,	// (0x00048a9f) list_single_hwr_training_instruct_pane

0xf09c,	// (0x00051b4f) list_single_hwr_training_instruct_pane_t1

0xe7d1,	// (0x00051284) bg_frame_shadow_pane_g1

0xf0ab,	// (0x00051b5e) bg_frame_shadow_pane_g2

0xf0b3,	// (0x00051b66) bg_frame_shadow_pane_g3

0xf0bb,	// (0x00051b6e) bg_frame_shadow_pane_g4

0xf0c3,	// (0x00051b76) bg_frame_shadow_pane_g5

0xf0cb,	// (0x00051b7e) bg_frame_shadow_pane_g6

0xf0d3,	// (0x00051b86) bg_frame_shadow_pane_g7

0xc654,	// (0x0004f107) bg_frame_shadow_pane_g8

0x0007,

0x022f,	// (0x00042ce2) bg_frame_shadow_pane_g

0xa6a9,	// (0x0004d15c) main_video_tele_dialer_pane

0x6008,	// (0x00048abb) aid_size_cell_video_keypad_ParamLimits

0x6008,	// (0x00048abb) aid_size_cell_video_keypad

0x6022,	// (0x00048ad5) grid_video_dialer_keypad_pane_ParamLimits

0x6022,	// (0x00048ad5) grid_video_dialer_keypad_pane

0x606e,	// (0x00048b21) video_down_pane_cp_ParamLimits

0x606e,	// (0x00048b21) video_down_pane_cp

0x609e,	// (0x00048b51) cell_video_dialer_keypad_pane_ParamLimits

0x609e,	// (0x00048b51) cell_video_dialer_keypad_pane

0xf0db,	// (0x00051b8e) bg_button_pane_cp08_ParamLimits

0xf0db,	// (0x00051b8e) bg_button_pane_cp08

0x60c4,	// (0x00048b77) cell_video_dialer_keypad_pane_g1_ParamLimits

0x60c4,	// (0x00048b77) cell_video_dialer_keypad_pane_g1

0x5787,	// (0x0004823a) mup3_rocker2_pane_ParamLimits

0x5787,	// (0x0004823a) mup3_rocker2_pane

0xe891,	// (0x00051344) mup3_rocker2_pane_g1

0x42ba,	// (0x00046d6d) main_dialer2_pane

0xa6a9,	// (0x0004d15c) main_mp4_pane

0xadac,	// (0x0004d85f) main_mp4_pane_g1_ParamLimits

0xadac,	// (0x0004d85f) main_mp4_pane_g1

0xadac,	// (0x0004d85f) main_mp4_pane_g2_ParamLimits

0xadac,	// (0x0004d85f) main_mp4_pane_g2

0x60ff,	// (0x00048bb2) main_mp4_pane_g3_ParamLimits

0x60ff,	// (0x00048bb2) main_mp4_pane_g3

0xadba,	// (0x0004d86d) main_mp4_pane_g4_ParamLimits

0xadba,	// (0x0004d86d) main_mp4_pane_g4

0xade2,	// (0x0004d895) main_mp4_pane_g5_ParamLimits

0xade2,	// (0x0004d895) main_mp4_pane_g5

0x0005,

0xf7d7,	// (0x0005228a) main_mp4_pane_g_ParamLimits

0xf7d7,	// (0x0005228a) main_mp4_pane_g

0xae32,	// (0x0004d8e5) main_mp4_pane_t1_ParamLimits

0xae32,	// (0x0004d8e5) main_mp4_pane_t1

0xae8e,	// (0x0004d941) main_mp4_pane_t2_ParamLimits

0xae8e,	// (0x0004d941) main_mp4_pane_t2

0x6149,	// (0x00048bfc) main_mp4_pane_t3_ParamLimits

0x6149,	// (0x00048bfc) main_mp4_pane_t3

0xaee0,	// (0x0004d993) main_mp4_pane_t4_ParamLimits

0xaee0,	// (0x0004d993) main_mp4_pane_t4

0x0003,

0xf7e4,	// (0x00052297) main_mp4_pane_t_ParamLimits

0xf7e4,	// (0x00052297) main_mp4_pane_t

0xaf20,	// (0x0004d9d3) mp4_progress_pane_ParamLimits

0xaf20,	// (0x0004d9d3) mp4_progress_pane

0xaf6a,	// (0x0004da1d) mp4_rocker_pane_ParamLimits

0xaf6a,	// (0x0004da1d) mp4_rocker_pane

0x6171,	// (0x00048c24) mp4_progress_pane_t1

0x618a,	// (0x00048c3d) mp4_progress_pane_t2

0x0001,

0xf7ed,	// (0x000522a0) mp4_progress_pane_t

0x61a3,	// (0x00048c56) mup_progress_pane_cp04

0xe891,	// (0x00051344) mp4_rocker_pane_g1

0x61af,	// (0x00048c62) aid_cell_size_keypad2_ParamLimits

0x61af,	// (0x00048c62) aid_cell_size_keypad2

0x61c5,	// (0x00048c78) dialer2_ne_pane_ParamLimits

0x61c5,	// (0x00048c78) dialer2_ne_pane

0x61dd,	// (0x00048c90) grid_dialer2_keypad_pane_ParamLimits

0x61dd,	// (0x00048c90) grid_dialer2_keypad_pane

0xe668,	// (0x0005111b) bg_popup_call_pane_cp07_ParamLimits

0xe668,	// (0x0005111b) bg_popup_call_pane_cp07

0x61f9,	// (0x00048cac) dialer2_ne_pane_t1_ParamLimits

0x61f9,	// (0x00048cac) dialer2_ne_pane_t1

0x624b,	// (0x00048cfe) cell_dialer2_keypad_pane_ParamLimits

0x624b,	// (0x00048cfe) cell_dialer2_keypad_pane

0x6271,	// (0x00048d24) bg_button_pane_pane_cp04_ParamLimits

0x6271,	// (0x00048d24) bg_button_pane_pane_cp04

0x627d,	// (0x00048d30) cell_dialer2_keypad_pane_g1_ParamLimits

0x627d,	// (0x00048d30) cell_dialer2_keypad_pane_g1

0x2241,	// (0x00044cf4) aid_placing_vt_set_content_ParamLimits

0x2241,	// (0x00044cf4) aid_placing_vt_set_content

0x2265,	// (0x00044d18) aid_placing_vt_set_title_ParamLimits

0x2265,	// (0x00044d18) aid_placing_vt_set_title

0xa6a9,	// (0x0004d15c) main_image3_pane

0x6343,	// (0x00048df6) area_side_right_pane_cp01_ParamLimits

0x6343,	// (0x00048df6) area_side_right_pane_cp01

0xadac,	// (0x0004d85f) main_image3_pane_g1_ParamLimits

0xadac,	// (0x0004d85f) main_image3_pane_g1

0x635c,	// (0x00048e0f) main_image3_pane_g2_ParamLimits

0x635c,	// (0x00048e0f) main_image3_pane_g2

0x6384,	// (0x00048e37) main_image3_pane_g3_ParamLimits

0x6384,	// (0x00048e37) main_image3_pane_g3

0x63ae,	// (0x00048e61) main_image3_pane_g4_ParamLimits

0x63ae,	// (0x00048e61) main_image3_pane_g4

0x0003,

0xf7fc,	// (0x000522af) main_image3_pane_g_ParamLimits

0xf7fc,	// (0x000522af) main_image3_pane_g

0x63d8,	// (0x00048e8b) main_image3_pane_t1_ParamLimits

0x63d8,	// (0x00048e8b) main_image3_pane_t1

0x6430,	// (0x00048ee3) main_image3_pane_t2_ParamLimits

0x6430,	// (0x00048ee3) main_image3_pane_t2

0x6482,	// (0x00048f35) main_image3_pane_t3_ParamLimits

0x6482,	// (0x00048f35) main_image3_pane_t3

0x0003,

0xf805,	// (0x000522b8) main_image3_pane_t_ParamLimits

0xf805,	// (0x000522b8) main_image3_pane_t

0xa722,	// (0x0004d1d5) grid_sctrl_middle_pane_cp01_ParamLimits

0xa722,	// (0x0004d1d5) grid_sctrl_middle_pane_cp01

0x650a,	// (0x00048fbd) cell_sctrl_middle_pane_cp01_ParamLimits

0x650a,	// (0x00048fbd) cell_sctrl_middle_pane_cp01

0x6527,	// (0x00048fda) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6527,	// (0x00048fda) cell_sctrl_middle_pane_cp01_g1

0xa6a9,	// (0x0004d15c) main_call4_pane

0x653c,	// (0x00048fef) aid_size_button_call4_ParamLimits

0x653c,	// (0x00048fef) aid_size_button_call4

0x656f,	// (0x00049022) call4_windows_pane_ParamLimits

0x656f,	// (0x00049022) call4_windows_pane

0x6591,	// (0x00049044) grid_call4_button_pane_ParamLimits

0x6591,	// (0x00049044) grid_call4_button_pane

0x65bc,	// (0x0004906f) call4_windows_conf_pane

0x65d7,	// (0x0004908a) popup_call4_audio_first_window_ParamLimits

0x65d7,	// (0x0004908a) popup_call4_audio_first_window

0x6625,	// (0x000490d8) popup_call4_audio_second_window_ParamLimits

0x6625,	// (0x000490d8) popup_call4_audio_second_window

0x663b,	// (0x000490ee) popup_call4_audio_wait_window_ParamLimits

0x663b,	// (0x000490ee) popup_call4_audio_wait_window

0x6649,	// (0x000490fc) cell_call4_button_pane_ParamLimits

0x6649,	// (0x000490fc) cell_call4_button_pane

0x6670,	// (0x00049123) bg_button_pane_cp09_ParamLimits

0x6670,	// (0x00049123) bg_button_pane_cp09

0x667c,	// (0x0004912f) cell_call4_button_pane_g1_ParamLimits

0x667c,	// (0x0004912f) cell_call4_button_pane_g1

0x66a2,	// (0x00049155) cell_call4_button_pane_t1_ParamLimits

0x66a2,	// (0x00049155) cell_call4_button_pane_t1

0x6702,	// (0x000491b5) popup_call4_audio_conf_window_ParamLimits

0x6702,	// (0x000491b5) popup_call4_audio_conf_window

0x57e9,	// (0x0004829c) mup3_progress_pane_t1_ParamLimits

0x5800,	// (0x000482b3) mup3_progress_pane_t2_ParamLimits

0xeb3c,	// (0x000515ef) mup3_progress_pane_t3_ParamLimits

0xf757,	// (0x0005220a) mup3_progress_pane_t_ParamLimits

0xeb53,	// (0x00051606) mup_progress_pane_cp03_ParamLimits

0x5dc9,	// (0x0004887c) mup3_control_keys_pane_g4_copy1

0xaf4e,	// (0x0004da01) mp4_rocker2_pane_ParamLimits

0xaf4e,	// (0x0004da01) mp4_rocker2_pane

0x671c,	// (0x000491cf) mp4_rocker2_pane_g1

0x6724,	// (0x000491d7) mp4_rocker2_pane_g2

0xafc0,	// (0x0004da73) mp4_rocker2_pane_g3

0xafc8,	// (0x0004da7b) mp4_rocker2_pane_g4

0xafd0,	// (0x0004da83) mp4_rocker2_pane_g5

0x0004,

0xf80e,	// (0x000522c1) mp4_rocker2_pane_g

0xa6a9,	// (0x0004d15c) main_camera4_pane

0xa6a9,	// (0x0004d15c) main_video4_pane

0x603c,	// (0x00048aef) main_video_tele_dialer_pane_t1_ParamLimits

0x603c,	// (0x00048aef) main_video_tele_dialer_pane_t1

0x6055,	// (0x00048b08) main_video_tele_dialer_pane_t2_ParamLimits

0x6055,	// (0x00048b08) main_video_tele_dialer_pane_t2

0x0001,

0xf7c8,	// (0x0005227b) main_video_tele_dialer_pane_t_ParamLimits

0xf7c8,	// (0x0005227b) main_video_tele_dialer_pane_t

0x6744,	// (0x000491f7) cam4_autofocus_pane_ParamLimits

0x6744,	// (0x000491f7) cam4_autofocus_pane

0x675a,	// (0x0004920d) cam4_image_uncrop_pane_ParamLimits

0x675a,	// (0x0004920d) cam4_image_uncrop_pane

0x6773,	// (0x00049226) cam4_indicators_pane_ParamLimits

0x6773,	// (0x00049226) cam4_indicators_pane

0x67a2,	// (0x00049255) main_camera4_pane_g1_ParamLimits

0x67a2,	// (0x00049255) main_camera4_pane_g1

0x67b5,	// (0x00049268) main_camera4_pane_g2_ParamLimits

0x67b5,	// (0x00049268) main_camera4_pane_g2

0x67c8,	// (0x0004927b) main_camera4_pane_g3_ParamLimits

0x67c8,	// (0x0004927b) main_camera4_pane_g3

0x67db,	// (0x0004928e) main_camera4_pane_g4_ParamLimits

0x67db,	// (0x0004928e) main_camera4_pane_g4

0x67ee,	// (0x000492a1) main_camera4_pane_g5_ParamLimits

0x67ee,	// (0x000492a1) main_camera4_pane_g5

0x0005,

0xf819,	// (0x000522cc) main_camera4_pane_g_ParamLimits

0xf819,	// (0x000522cc) main_camera4_pane_g

0x6812,	// (0x000492c5) main_camera4_pane_t1_ParamLimits

0x6812,	// (0x000492c5) main_camera4_pane_t1

0xeac1,	// (0x00051574) bg_tb_trans_pane_cp06

0xaffe,	// (0x0004dab1) cam4_indicators_pane_g1

0xb00e,	// (0x0004dac1) cam4_indicators_pane_g2

0x0002,

0xf834,	// (0x000522e7) cam4_indicators_pane_g

0xb026,	// (0x0004dad9) cam4_indicators_pane_t1

0x688a,	// (0x0004933d) main_video4_pane_g1_ParamLimits

0x688a,	// (0x0004933d) main_video4_pane_g1

0x689d,	// (0x00049350) main_video4_pane_g2_ParamLimits

0x689d,	// (0x00049350) main_video4_pane_g2

0x68b1,	// (0x00049364) main_video4_pane_g3_ParamLimits

0x68b1,	// (0x00049364) main_video4_pane_g3

0x68c5,	// (0x00049378) main_video4_pane_g4_ParamLimits

0x68c5,	// (0x00049378) main_video4_pane_g4

0x0004,

0xf83b,	// (0x000522ee) main_video4_pane_g_ParamLimits

0xf83b,	// (0x000522ee) main_video4_pane_g

0x68ed,	// (0x000493a0) vid4_indicators_pane_ParamLimits

0x68ed,	// (0x000493a0) vid4_indicators_pane

0x691d,	// (0x000493d0) video4_image_uncrop_cif_pane_ParamLimits

0x691d,	// (0x000493d0) video4_image_uncrop_cif_pane

0x6937,	// (0x000493ea) video4_image_uncrop_nhd_pane_ParamLimits

0x6937,	// (0x000493ea) video4_image_uncrop_nhd_pane

0x675a,	// (0x0004920d) video4_image_uncrop_vga_pane_ParamLimits

0x675a,	// (0x0004920d) video4_image_uncrop_vga_pane

0xb04c,	// (0x0004daff) bg_tb_trans_pane_cp07

0x694d,	// (0x00049400) vid4_indicators_pane_g1

0x695c,	// (0x0004940f) vid4_indicators_pane_g2

0x696b,	// (0x0004941e) vid4_indicators_pane_g3

0x0004,

0xf846,	// (0x000522f9) vid4_indicators_pane_g

0x6990,	// (0x00049443) vid4_indicators_pane_t1

0x69a4,	// (0x00049457) cam4_autofocus_pane_g1

0x69ac,	// (0x0004945f) cam4_autofocus_pane_g2

0x69b4,	// (0x00049467) cam4_autofocus_pane_g3

0x0002,

0xf851,	// (0x00052304) cam4_autofocus_pane_g

0x69bc,	// (0x0004946f) cam4_autofocus_pane_g3_copy1

0x6082,	// (0x00048b35) video_down_pane_cp_t1

0x6090,	// (0x00048b43) video_down_pane_cp_t2

0x0001,

0xf7cd,	// (0x00052280) video_down_pane_cp_t

0xa722,	// (0x0004d1d5) popup_vitu2_window_ParamLimits

0xa722,	// (0x0004d1d5) popup_vitu2_window

0x69c4,	// (0x00049477) aid_size_cell2_itu2_ParamLimits

0x69c4,	// (0x00049477) aid_size_cell2_itu2

0x69ea,	// (0x0004949d) aid_size_cell_itu2_ParamLimits

0x69ea,	// (0x0004949d) aid_size_cell_itu2

0x6a48,	// (0x000494fb) bg_popup_window_pane_cp09_ParamLimits

0x6a48,	// (0x000494fb) bg_popup_window_pane_cp09

0x6a56,	// (0x00049509) field_vitu2_entry_pane_ParamLimits

0x6a56,	// (0x00049509) field_vitu2_entry_pane

0x6a7e,	// (0x00049531) grid_vitu2_function_pane_ParamLimits

0x6a7e,	// (0x00049531) grid_vitu2_function_pane

0x6acf,	// (0x00049582) grid_vitu2_itu_pane_ParamLimits

0x6acf,	// (0x00049582) grid_vitu2_itu_pane

0x6b5a,	// (0x0004960d) cell_vitu2_itu_pane_ParamLimits

0x6b5a,	// (0x0004960d) cell_vitu2_itu_pane

0x6b80,	// (0x00049633) cell_vitu2_function_pane_ParamLimits

0x6b80,	// (0x00049633) cell_vitu2_function_pane

0x6bc4,	// (0x00049677) bg_popup_call_pane_cp08_ParamLimits

0x6bc4,	// (0x00049677) bg_popup_call_pane_cp08

0x6bdd,	// (0x00049690) field_vitu2_entry_pane_g1

0x6be9,	// (0x0004969c) field_vitu2_entry_pane_g2

0x0002,

0xf858,	// (0x0005230b) field_vitu2_entry_pane_g

0xb064,	// (0x0004db17) field_vitu2_entry_pane_t1_ParamLimits

0xb064,	// (0x0004db17) field_vitu2_entry_pane_t1

0xb093,	// (0x0004db46) field_vitu2_entry_pane_t2_ParamLimits

0xb093,	// (0x0004db46) field_vitu2_entry_pane_t2

0x0001,

0xf85f,	// (0x00052312) field_vitu2_entry_pane_t_ParamLimits

0xf85f,	// (0x00052312) field_vitu2_entry_pane_t

0x6c0b,	// (0x000496be) bg_button_pane_cp010_ParamLimits

0x6c0b,	// (0x000496be) bg_button_pane_cp010

0x6c19,	// (0x000496cc) cell_vitu2_itu_pane_g1

0x6c37,	// (0x000496ea) cell_vitu2_itu_pane_t1_ParamLimits

0x6c37,	// (0x000496ea) cell_vitu2_itu_pane_t1

0x0b04,	// (0x000435b7) cell_vitu2_itu_pane_t2_ParamLimits

0x0b04,	// (0x000435b7) cell_vitu2_itu_pane_t2

0x0002,

0xf869,	// (0x0005231c) cell_vitu2_itu_pane_t_ParamLimits

0xf869,	// (0x0005231c) cell_vitu2_itu_pane_t

0xa722,	// (0x0004d1d5) bg_button_pane_cp011

0x6c9d,	// (0x00049750) cell_vitu2_function_pane_g1

0xa6a9,	// (0x0004d15c) main_myfav_hc_pane

0x64d2,	// (0x00048f85) popup_image3_note_pane_ParamLimits

0x64d2,	// (0x00048f85) popup_image3_note_pane

0x64ee,	// (0x00048fa1) popup_image3_tool_bar_pane_ParamLimits

0x64ee,	// (0x00048fa1) popup_image3_tool_bar_pane

0x0b88,	// (0x0004363b) cell_vitu2_itu_pane_t3_ParamLimits

0x0b88,	// (0x0004363b) cell_vitu2_itu_pane_t3

0xa6a9,	// (0x0004d15c) bg_popup_trans_pane

0x6cb1,	// (0x00049764) grid_image3_tool_bar_pane

0x6cbb,	// (0x0004976e) bg_popup_trans_pane_g1

0xc995,	// (0x0004f448) bg_popup_trans_pane_g2

0x6cc3,	// (0x00049776) bg_popup_trans_pane_g3

0x6ccb,	// (0x0004977e) bg_popup_trans_pane_g4

0x6cd3,	// (0x00049786) bg_popup_trans_pane_g5

0x6cdb,	// (0x0004978e) bg_popup_trans_pane_g6

0x6ce3,	// (0x00049796) bg_popup_trans_pane_g7

0x6ceb,	// (0x0004979e) bg_popup_trans_pane_g8

0xc975,	// (0x0004f428) bg_popup_trans_pane_g9

0x0008,

0xf870,	// (0x00052323) bg_popup_trans_pane_g

0x6cf3,	// (0x000497a6) cell_image3_tool_bar_pane_ParamLimits

0x6cf3,	// (0x000497a6) cell_image3_tool_bar_pane

0xe891,	// (0x00051344) cell_image3_tool_bar_pane_g1

0xa6a9,	// (0x0004d15c) bg_popup_trans_pane_cp1

0x6d09,	// (0x000497bc) popup_image3_note_pane_t1

0x6d17,	// (0x000497ca) popup_image3_note_pane_t2

0x6d25,	// (0x000497d8) popup_image3_note_pane_t3

0x0002,

0xf883,	// (0x00052336) popup_image3_note_pane_t

0x6d35,	// (0x000497e8) popup_image3_note_pane_t3_copy1

0x6d43,	// (0x000497f6) bg_myfav_hc_instruction_pane_ParamLimits

0x6d43,	// (0x000497f6) bg_myfav_hc_instruction_pane

0x6d5b,	// (0x0004980e) cell_myfav_contact_pane_ParamLimits

0x6d5b,	// (0x0004980e) cell_myfav_contact_pane

0x6d77,	// (0x0004982a) cell_myfav_contact_pane_cp1_ParamLimits

0x6d77,	// (0x0004982a) cell_myfav_contact_pane_cp1

0x6d8f,	// (0x00049842) cell_myfav_contact_pane_cp2_ParamLimits

0x6d8f,	// (0x00049842) cell_myfav_contact_pane_cp2

0x6da7,	// (0x0004985a) cell_myfav_contact_pane_cp3_ParamLimits

0x6da7,	// (0x0004985a) cell_myfav_contact_pane_cp3

0x6dbe,	// (0x00049871) cell_myfav_contact_pane_cp4_ParamLimits

0x6dbe,	// (0x00049871) cell_myfav_contact_pane_cp4

0x6dd6,	// (0x00049889) cell_myfav_contact_pane_cp5_ParamLimits

0x6dd6,	// (0x00049889) cell_myfav_contact_pane_cp5

0x6dea,	// (0x0004989d) cell_myfav_contact_pane_cp6_ParamLimits

0x6dea,	// (0x0004989d) cell_myfav_contact_pane_cp6

0x6e00,	// (0x000498b3) cell_myfav_contact_pane_cp7_ParamLimits

0x6e00,	// (0x000498b3) cell_myfav_contact_pane_cp7

0x6e18,	// (0x000498cb) listscroll_gen_pane_cp05

0x6e21,	// (0x000498d4) main_myfav_hc_pane_g1_ParamLimits

0x6e21,	// (0x000498d4) main_myfav_hc_pane_g1

0x6e3b,	// (0x000498ee) main_myfav_hc_pane_g2_ParamLimits

0x6e3b,	// (0x000498ee) main_myfav_hc_pane_g2

0x0002,

0xf88a,	// (0x0005233d) main_myfav_hc_pane_g_ParamLimits

0xf88a,	// (0x0005233d) main_myfav_hc_pane_g

0x6e6f,	// (0x00049922) main_myfav_hc_pane_t1_ParamLimits

0x6e6f,	// (0x00049922) main_myfav_hc_pane_t1

0x6e86,	// (0x00049939) main_myfav_hc_pane_t2_ParamLimits

0x6e86,	// (0x00049939) main_myfav_hc_pane_t2

0x6e98,	// (0x0004994b) main_myfav_hc_pane_t3_ParamLimits

0x6e98,	// (0x0004994b) main_myfav_hc_pane_t3

0x6eaa,	// (0x0004995d) main_myfav_hc_pane_t4_ParamLimits

0x6eaa,	// (0x0004995d) main_myfav_hc_pane_t4

0x0004,

0xf891,	// (0x00052344) main_myfav_hc_pane_t_ParamLimits

0xf891,	// (0x00052344) main_myfav_hc_pane_t

0xe891,	// (0x00051344) bg_myfav_hc_instruction_pane_g1

0x6ed4,	// (0x00049987) cell_myfav_contact_pane_g1_ParamLimits

0x6ed4,	// (0x00049987) cell_myfav_contact_pane_g1

0x6ed4,	// (0x00049987) cell_myfav_contact_pane_g2_ParamLimits

0x6ed4,	// (0x00049987) cell_myfav_contact_pane_g2

0x6ee0,	// (0x00049993) cell_myfav_contact_pane_g3_ParamLimits

0x6ee0,	// (0x00049993) cell_myfav_contact_pane_g3

0xeb26,	// (0x000515d9) cell_myfav_contact_pane_g4_ParamLimits

0xeb26,	// (0x000515d9) cell_myfav_contact_pane_g4

0x6eed,	// (0x000499a0) cell_myfav_contact_pane_g5_ParamLimits

0x6eed,	// (0x000499a0) cell_myfav_contact_pane_g5

0x0004,

0xf89c,	// (0x0005234f) cell_myfav_contact_pane_g_ParamLimits

0xf89c,	// (0x0005234f) cell_myfav_contact_pane_g

0x6e55,	// (0x00049908) main_myfav_hc_pane_g3_ParamLimits

0x6e55,	// (0x00049908) main_myfav_hc_pane_g3

0x1579,	// (0x0004402c) popup_adpt_find_window

0x6ef9,	// (0x000499ac) afind_page_pane_ParamLimits

0x6ef9,	// (0x000499ac) afind_page_pane

0x6f0e,	// (0x000499c1) aid_size_cell_afind_ParamLimits

0x6f0e,	// (0x000499c1) aid_size_cell_afind

0x6f2c,	// (0x000499df) bg_popup_sub_pane_cp09_ParamLimits

0x6f2c,	// (0x000499df) bg_popup_sub_pane_cp09

0x6f39,	// (0x000499ec) find_pane_cp01_ParamLimits

0x6f39,	// (0x000499ec) find_pane_cp01

0x6f46,	// (0x000499f9) grid_afind_control_pane_ParamLimits

0x6f46,	// (0x000499f9) grid_afind_control_pane

0x6f5a,	// (0x00049a0d) grid_afind_pane_ParamLimits

0x6f5a,	// (0x00049a0d) grid_afind_pane

0x6f7c,	// (0x00049a2f) cell_afind_pane_ParamLimits

0x6f7c,	// (0x00049a2f) cell_afind_pane

0xe891,	// (0x00051344) afind_page_pane_g1

0x6fdf,	// (0x00049a92) afind_page_pane_g2

0x6fe8,	// (0x00049a9b) afind_page_pane_g3

0x0002,

0xf8a7,	// (0x0005235a) afind_page_pane_g

0x6ff1,	// (0x00049aa4) afind_page_pane_t1

0x7011,	// (0x00049ac4) cell_afind_grid_control_pane_ParamLimits

0x7011,	// (0x00049ac4) cell_afind_grid_control_pane

0x6271,	// (0x00048d24) bg_button_pane_cp69_ParamLimits

0x6271,	// (0x00048d24) bg_button_pane_cp69

0x7020,	// (0x00049ad3) cell_afind_pane_g1_ParamLimits

0x7020,	// (0x00049ad3) cell_afind_pane_g1

0x702d,	// (0x00049ae0) cell_afind_pane_t1_ParamLimits

0x702d,	// (0x00049ae0) cell_afind_pane_t1

0xc78a,	// (0x0004f23d) bg_button_pane_cp72

0x703f,	// (0x00049af2) cell_afind_grid_control_pane_g1

0x3d5a,	// (0x0004680d) aid_image_placing_area_ParamLimits

0x3d5a,	// (0x0004680d) aid_image_placing_area

0xee2b,	// (0x000518de) field_vitu_entry_pane_g1_ParamLimits

0xee2b,	// (0x000518de) field_vitu_entry_pane_g1

0xee37,	// (0x000518ea) field_vitu_entry_pane_g2_ParamLimits

0xee37,	// (0x000518ea) field_vitu_entry_pane_g2

0x0001,

0x01d0,	// (0x00042c83) field_vitu_entry_pane_g_ParamLimits

0x01d0,	// (0x00042c83) field_vitu_entry_pane_g

0x5e96,	// (0x00048949) cell_vitu_itu_pane_g1_ParamLimits

0x5ed8,	// (0x0004898b) cell_vitu_itu_pane_t3_ParamLimits

0x5ed8,	// (0x0004898b) cell_vitu_itu_pane_t3

0x6171,	// (0x00048c24) mp4_progress_pane_t1_ParamLimits

0x618a,	// (0x00048c3d) mp4_progress_pane_t2_ParamLimits

0xf7ed,	// (0x000522a0) mp4_progress_pane_t_ParamLimits

0x61a3,	// (0x00048c56) mup_progress_pane_cp04_ParamLimits

0x6ebe,	// (0x00049971) main_myfav_hc_pane_t5_ParamLimits

0x6ebe,	// (0x00049971) main_myfav_hc_pane_t5

0xa6cf,	// (0x0004d182) aid_zoom_text_primary

0x1579,	// (0x0004402c) popup_adpt_find_window_ParamLimits

0xa722,	// (0x0004d1d5) main_cam_set_pane

0x678c,	// (0x0004923f) cam4_zoom_pane_ParamLimits

0x678c,	// (0x0004923f) cam4_zoom_pane

0x7048,	// (0x00049afb) main_cam_set_pane_g1_ParamLimits

0x7048,	// (0x00049afb) main_cam_set_pane_g1

0x7056,	// (0x00049b09) main_cam_set_pane_g2_ParamLimits

0x7056,	// (0x00049b09) main_cam_set_pane_g2

0x0001,

0xf8ae,	// (0x00052361) main_cam_set_pane_g_ParamLimits

0xf8ae,	// (0x00052361) main_cam_set_pane_g

0x7079,	// (0x00049b2c) main_cam_set_pane_t1_ParamLimits

0x7079,	// (0x00049b2c) main_cam_set_pane_t1

0x7094,	// (0x00049b47) main_cset_listscroll_pane_ParamLimits

0x7094,	// (0x00049b47) main_cset_listscroll_pane

0x70b8,	// (0x00049b6b) main_cset_slider_pane_ParamLimits

0x70b8,	// (0x00049b6b) main_cset_slider_pane

0x70ea,	// (0x00049b9d) main_cset_list_pane_ParamLimits

0x70ea,	// (0x00049b9d) main_cset_list_pane

0x70fa,	// (0x00049bad) scroll_pane_cp028

0x7103,	// (0x00049bb6) aid_area_touch_slider

0x711f,	// (0x00049bd2) cset_slider_pane

0x7149,	// (0x00049bfc) main_cset_slider_pane_g1

0x715e,	// (0x00049c11) main_cset_slider_pane_g2

0x0011,

0xf8b3,	// (0x00052366) main_cset_slider_pane_g

0x7250,	// (0x00049d03) main_cset_slider_pane_t1

0x727e,	// (0x00049d31) main_cset_slider_pane_t2

0x7298,	// (0x00049d4b) main_cset_slider_pane_t3

0x72b2,	// (0x00049d65) main_cset_slider_pane_t4

0x72cc,	// (0x00049d7f) main_cset_slider_pane_t5

0x72ea,	// (0x00049d9d) main_cset_slider_pane_t6

0x7301,	// (0x00049db4) main_cset_slider_pane_t7

0x000e,

0xf8d8,	// (0x0005238b) main_cset_slider_pane_t

0x747f,	// (0x00049f32) cset_list_set_pane_ParamLimits

0x747f,	// (0x00049f32) cset_list_set_pane

0x7493,	// (0x00049f46) aid_position_infowindow_above

0x749b,	// (0x00049f4e) aid_position_infowindow_below

0x0be0,	// (0x00043693) cset_list_set_pane_g1_ParamLimits

0x0be0,	// (0x00043693) cset_list_set_pane_g1

0x0bec,	// (0x0004369f) cset_list_set_pane_g3_ParamLimits

0x0bec,	// (0x0004369f) cset_list_set_pane_g3

0x0001,

0xf8f7,	// (0x000523aa) cset_list_set_pane_g_ParamLimits

0xf8f7,	// (0x000523aa) cset_list_set_pane_g

0x0bfb,	// (0x000436ae) cset_list_set_pane_t1_ParamLimits

0x0bfb,	// (0x000436ae) cset_list_set_pane_t1

0xa722,	// (0x0004d1d5) list_highlight_pane_cp021_ParamLimits

0xa722,	// (0x0004d1d5) list_highlight_pane_cp021

0xd117,	// (0x0004fbca) cset_slider_pane_g1

0xd129,	// (0x0004fbdc) cset_slider_pane_g2

0xd120,	// (0x0004fbd3) cset_slider_pane_g3

0x0002,

0x0374,	// (0x00042e27) cset_slider_pane_g

0xb0b0,	// (0x0004db63) aid_area_touch_cam4_zoom

0xb0b8,	// (0x0004db6b) cam4_zoom_cont_pane

0xb0c0,	// (0x0004db73) cam4_zoom_pane_g1

0xb0c8,	// (0x0004db7b) cam4_zoom_pane_g2

0x74a3,	// (0x00049f56) cam4_zoom_pane_g3

0x0002,

0xf8fc,	// (0x000523af) cam4_zoom_pane_g

0x74ab,	// (0x00049f5e) cam4_zoom_cont_pane_g1

0x74b4,	// (0x00049f67) cam4_zoom_cont_pane_g2

0x74bd,	// (0x00049f70) cam4_zoom_cont_pane_g3

0x0002,

0xf903,	// (0x000523b6) cam4_zoom_cont_pane_g

0x655a,	// (0x0004900d) call4_image_pane_ParamLimits

0x655a,	// (0x0004900d) call4_image_pane

0x65bc,	// (0x0004906f) call4_windows_conf_pane_ParamLimits

0x6603,	// (0x000490b6) popup_call4_audio_in_window_ParamLimits

0x6603,	// (0x000490b6) popup_call4_audio_in_window

0xa6a9,	// (0x0004d15c) bg_popup_call2_act_pane_cp02

0x66fa,	// (0x000491ad) call4_list_conf_pane

0xe891,	// (0x00051344) call4_image_pane_g1

0xe891,	// (0x00051344) call4_image_pane_g2

0x0001,

0x0096,	// (0x00042b49) call4_image_pane_g

0x74c6,	// (0x00049f79) list_single_graphic_popup_conf4_pane_ParamLimits

0x74c6,	// (0x00049f79) list_single_graphic_popup_conf4_pane

0xa6a9,	// (0x0004d15c) list_highlight_pane_cp022

0x74db,	// (0x00049f8e) list_single_graphic_popup_conf4_pane_g1

0xce03,	// (0x0004f8b6) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf90a,	// (0x000523bd) list_single_graphic_popup_conf4_pane_g

0x74e3,	// (0x00049f96) list_single_graphic_popup_conf4_pane_t1

0x237c,	// (0x00044e2f) popup_vtel_slider_window_ParamLimits

0x237c,	// (0x00044e2f) popup_vtel_slider_window

0x6239,	// (0x00048cec) dialer2_ne_pane_t2_ParamLimits

0x6239,	// (0x00048cec) dialer2_ne_pane_t2

0x0001,

0xf7f2,	// (0x000522a5) dialer2_ne_pane_t_ParamLimits

0xf7f2,	// (0x000522a5) dialer2_ne_pane_t

0xe668,	// (0x0005111b) bg_popup_sub_pane_cp010_ParamLimits

0xe668,	// (0x0005111b) bg_popup_sub_pane_cp010

0x74f9,	// (0x00049fac) popup_vtel_slider_window_g1_ParamLimits

0x74f9,	// (0x00049fac) popup_vtel_slider_window_g1

0x750c,	// (0x00049fbf) popup_vtel_slider_window_g2_ParamLimits

0x750c,	// (0x00049fbf) popup_vtel_slider_window_g2

0x0003,

0xf90f,	// (0x000523c2) popup_vtel_slider_window_g_ParamLimits

0xf90f,	// (0x000523c2) popup_vtel_slider_window_g

0x7562,	// (0x0004a015) vtel_slider_pane_ParamLimits

0x7562,	// (0x0004a015) vtel_slider_pane

0x7584,	// (0x0004a037) vtel_slider_pane_g1_ParamLimits

0x7584,	// (0x0004a037) vtel_slider_pane_g1

0x7598,	// (0x0004a04b) vtel_slider_pane_g2_ParamLimits

0x7598,	// (0x0004a04b) vtel_slider_pane_g2

0x75b0,	// (0x0004a063) vtel_slider_pane_g3_ParamLimits

0x75b0,	// (0x0004a063) vtel_slider_pane_g3

0x7584,	// (0x0004a037) vtel_slider_pane_g4_ParamLimits

0x7584,	// (0x0004a037) vtel_slider_pane_g4

0x75c6,	// (0x0004a079) vtel_slider_pane_g5_ParamLimits

0x75c6,	// (0x0004a079) vtel_slider_pane_g5

0x0004,

0xf918,	// (0x000523cb) vtel_slider_pane_g_ParamLimits

0xf918,	// (0x000523cb) vtel_slider_pane_g

0xa6a9,	// (0x0004d15c) main_gallery2_pane

0x6a16,	// (0x000494c9) aid_size_row_itut2_dropdow_list_ParamLimits

0x6a16,	// (0x000494c9) aid_size_row_itut2_dropdow_list

0x6aa6,	// (0x00049559) grid_vitu2_function_top_pane_ParamLimits

0x6aa6,	// (0x00049559) grid_vitu2_function_top_pane

0x6b05,	// (0x000495b8) popup_vitu2_dropdown_list_window_ParamLimits

0x6b05,	// (0x000495b8) popup_vitu2_dropdown_list_window

0x6b2e,	// (0x000495e1) popup_vitu2_match_list_window

0x75dc,	// (0x0004a08f) cell_vitu2_function_top_pane_ParamLimits

0x75dc,	// (0x0004a08f) cell_vitu2_function_top_pane

0x75fc,	// (0x0004a0af) cell_vitu2_function_top_pane_cp01_ParamLimits

0x75fc,	// (0x0004a0af) cell_vitu2_function_top_pane_cp01

0x761a,	// (0x0004a0cd) cell_vitu2_function_top_wide_pane_ParamLimits

0x761a,	// (0x0004a0cd) cell_vitu2_function_top_wide_pane

0xa722,	// (0x0004d1d5) bg_button_pane_cp012

0x7638,	// (0x0004a0eb) cell_vitu2_function_top_pane_g1

0xb0de,	// (0x0004db91) bg_button_pane_cp013_ParamLimits

0xb0de,	// (0x0004db91) bg_button_pane_cp013

0x764c,	// (0x0004a0ff) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x764c,	// (0x0004a0ff) cell_vitu2_function_top_wide_pane_g1

0xa722,	// (0x0004d1d5) bg_popup_sub_pane_cp20

0x7664,	// (0x0004a117) list_vitu2_match_list_pane

0x6cbb,	// (0x0004976e) bg_popup_sub_pane_cp20_g1

0x6cc3,	// (0x00049776) bg_popup_sub_pane_cp20_g2

0xc995,	// (0x0004f448) bg_popup_sub_pane_cp20_g3

0x6ccb,	// (0x0004977e) bg_popup_sub_pane_cp20_g4

0xc975,	// (0x0004f428) bg_popup_sub_pane_cp20_g5

0x7682,	// (0x0004a135) bg_popup_sub_pane_cp20_g6

0x6cdb,	// (0x0004978e) bg_popup_sub_pane_cp20_g7

0x6ce3,	// (0x00049796) bg_popup_sub_pane_cp20_g8

0x6ceb,	// (0x0004979e) bg_popup_sub_pane_cp20_g9

0x0008,

0xf923,	// (0x000523d6) bg_popup_sub_pane_cp20_g

0xb0fa,	// (0x0004dbad) list_vitu2_match_list_item_pane_ParamLimits

0xb0fa,	// (0x0004dbad) list_vitu2_match_list_item_pane

0xb10c,	// (0x0004dbbf) list_vitu2_match_list_item_pane_t1

0xa6a9,	// (0x0004d15c) bg_popup_sub_pane_cp21

0xcd2c,	// (0x0004f7df) grid_vitu2_dropdown_list_pane

0x768a,	// (0x0004a13d) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x768a,	// (0x0004a13d) cell_vitu2_dropdown_list_char_pane

0x76ad,	// (0x0004a160) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x76ad,	// (0x0004a160) cell_vitu2_dropdown_list_ctrl_pane

0x76db,	// (0x0004a18e) cell_vitu2_dropdown_list_char_pane_g1

0x76e4,	// (0x0004a197) cell_vitu2_dropdown_list_char_pane_g2

0x76ed,	// (0x0004a1a0) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf940,	// (0x000523f3) cell_vitu2_dropdown_list_char_pane_g

0x76f6,	// (0x0004a1a9) cell_vitu2_dropdown_list_char_pane_t1

0x7704,	// (0x0004a1b7) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7704,	// (0x0004a1b7) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7714,	// (0x0004a1c7) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7714,	// (0x0004a1c7) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7725,	// (0x0004a1d8) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7725,	// (0x0004a1d8) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7735,	// (0x0004a1e8) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7735,	// (0x0004a1e8) cell_vitu2_dropdown_list_ctrl_pane_g4

0xeac1,	// (0x00051574) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xeac1,	// (0x00051574) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf947,	// (0x000523fa) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf947,	// (0x000523fa) cell_vitu2_dropdown_list_ctrl_pane_g

0x7751,	// (0x0004a204) aid_size_cell_gallery2_ParamLimits

0x7751,	// (0x0004a204) aid_size_cell_gallery2

0x7767,	// (0x0004a21a) grid_gallery2_pane_ParamLimits

0x7767,	// (0x0004a21a) grid_gallery2_pane

0x777b,	// (0x0004a22e) scroll_pane_cp029_ParamLimits

0x777b,	// (0x0004a22e) scroll_pane_cp029

0x7787,	// (0x0004a23a) cell_gallery2_pane_ParamLimits

0x7787,	// (0x0004a23a) cell_gallery2_pane

0x77c1,	// (0x0004a274) cell_gallery2_pane_g2

0x77cb,	// (0x0004a27e) cell_gallery2_pane_g3

0x77d3,	// (0x0004a286) cell_gallery2_pane_g4

0x77db,	// (0x0004a28e) cell_gallery2_pane_g5

0xcfd1,	// (0x0004fa84) grid_highlight_pane_cp10

0x6b2e,	// (0x000495e1) popup_vitu2_match_list_window_ParamLimits

0x6b45,	// (0x000495f8) popup_vitu2_query_window_ParamLimits

0x6b45,	// (0x000495f8) popup_vitu2_query_window

0xa6a9,	// (0x0004d15c) bg_vitu2_candi_button_pane

0x76db,	// (0x0004a18e) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x76e4,	// (0x0004a197) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x76ed,	// (0x0004a1a0) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0c3f,	// (0x000436f2) bg_button_pane_cp015

0x77e3,	// (0x0004a296) bg_button_pane_cp016

0x77f6,	// (0x0004a2a9) bg_button_pane_cp017

0xe40e,	// (0x00050ec1) bg_popup_sub_pane_cp22

0x781a,	// (0x0004a2cd) popup_vitu2_query_window_g1

0x0c74,	// (0x00043727) popup_vitu2_query_window_g2

0x0002,

0xf952,	// (0x00052405) popup_vitu2_query_window_g

0x0c93,	// (0x00043746) popup_vitu2_query_window_t1_ParamLimits

0x0c93,	// (0x00043746) popup_vitu2_query_window_t1

0x0cc8,	// (0x0004377b) popup_vitu2_query_window_t2_ParamLimits

0x0cc8,	// (0x0004377b) popup_vitu2_query_window_t2

0x0cda,	// (0x0004378d) popup_vitu2_query_window_t3_ParamLimits

0x0cda,	// (0x0004378d) popup_vitu2_query_window_t3

0x7826,	// (0x0004a2d9) popup_vitu2_query_window_t4_ParamLimits

0x7826,	// (0x0004a2d9) popup_vitu2_query_window_t4

0x7847,	// (0x0004a2fa) popup_vitu2_query_window_t5_ParamLimits

0x7847,	// (0x0004a2fa) popup_vitu2_query_window_t5

0x0006,

0xf959,	// (0x0005240c) popup_vitu2_query_window_t_ParamLimits

0xf959,	// (0x0005240c) popup_vitu2_query_window_t

0x70e2,	// (0x00049b95) main_cset_text_pane

0x7103,	// (0x00049bb6) aid_area_touch_slider_ParamLimits

0x711f,	// (0x00049bd2) cset_slider_pane_ParamLimits

0x7149,	// (0x00049bfc) main_cset_slider_pane_g1_ParamLimits

0x715e,	// (0x00049c11) main_cset_slider_pane_g2_ParamLimits

0x7173,	// (0x00049c26) main_cset_slider_pane_g3_ParamLimits

0x7173,	// (0x00049c26) main_cset_slider_pane_g3

0x717f,	// (0x00049c32) main_cset_slider_pane_g4_ParamLimits

0x717f,	// (0x00049c32) main_cset_slider_pane_g4

0x718e,	// (0x00049c41) main_cset_slider_pane_g5_ParamLimits

0x718e,	// (0x00049c41) main_cset_slider_pane_g5

0x719c,	// (0x00049c4f) main_cset_slider_pane_g6_ParamLimits

0x719c,	// (0x00049c4f) main_cset_slider_pane_g6

0xf8b3,	// (0x00052366) main_cset_slider_pane_g_ParamLimits

0x7250,	// (0x00049d03) main_cset_slider_pane_t1_ParamLimits

0x727e,	// (0x00049d31) main_cset_slider_pane_t2_ParamLimits

0x7298,	// (0x00049d4b) main_cset_slider_pane_t3_ParamLimits

0x72b2,	// (0x00049d65) main_cset_slider_pane_t4_ParamLimits

0x72cc,	// (0x00049d7f) main_cset_slider_pane_t5_ParamLimits

0x72ea,	// (0x00049d9d) main_cset_slider_pane_t6_ParamLimits

0x7301,	// (0x00049db4) main_cset_slider_pane_t7_ParamLimits

0x732f,	// (0x00049de2) main_cset_slider_pane_t8_ParamLimits

0x732f,	// (0x00049de2) main_cset_slider_pane_t8

0x7357,	// (0x00049e0a) main_cset_slider_pane_t9_ParamLimits

0x7357,	// (0x00049e0a) main_cset_slider_pane_t9

0x737f,	// (0x00049e32) main_cset_slider_pane_t10_ParamLimits

0x737f,	// (0x00049e32) main_cset_slider_pane_t10

0x73a7,	// (0x00049e5a) main_cset_slider_pane_t11_ParamLimits

0x73a7,	// (0x00049e5a) main_cset_slider_pane_t11

0x73d1,	// (0x00049e84) main_cset_slider_pane_t12_ParamLimits

0x73d1,	// (0x00049e84) main_cset_slider_pane_t12

0x73ee,	// (0x00049ea1) main_cset_slider_pane_t13_ParamLimits

0x73ee,	// (0x00049ea1) main_cset_slider_pane_t13

0xf8d8,	// (0x0005238b) main_cset_slider_pane_t_ParamLimits

0xa6a9,	// (0x0004d15c) bg_popup_sub_pane_cp011

0x7868,	// (0x0004a31b) main_cset_text_pane_g1

0x7870,	// (0x0004a323) main_cset_text_pane_t1

0x787e,	// (0x0004a331) main_cset_text_pane_t2

0x788c,	// (0x0004a33f) main_cset_text_pane_t3

0x789a,	// (0x0004a34d) main_cset_text_pane_t4

0x78a8,	// (0x0004a35b) main_cset_text_pane_t5

0x78b6,	// (0x0004a369) main_cset_text_pane_t6

0x78c4,	// (0x0004a377) main_cset_text_pane_t7

0x0006,

0xf968,	// (0x0005241b) main_cset_text_pane_t

0xa6a9,	// (0x0004d15c) main_cam4_burst_pane

0xa6a9,	// (0x0004d15c) main_cam5_pane

0x6fff,	// (0x00049ab2) bg_button_pane_cp019

0x7008,	// (0x00049abb) bg_button_pane_cp020

0x71b0,	// (0x00049c63) main_cset_slider_pane_g7_ParamLimits

0x71b0,	// (0x00049c63) main_cset_slider_pane_g7

0x71bc,	// (0x00049c6f) main_cset_slider_pane_g8_ParamLimits

0x71bc,	// (0x00049c6f) main_cset_slider_pane_g8

0x71c8,	// (0x00049c7b) main_cset_slider_pane_g9_ParamLimits

0x71c8,	// (0x00049c7b) main_cset_slider_pane_g9

0x71d4,	// (0x00049c87) main_cset_slider_pane_g10_ParamLimits

0x71d4,	// (0x00049c87) main_cset_slider_pane_g10

0x71e0,	// (0x00049c93) main_cset_slider_pane_g11_ParamLimits

0x71e0,	// (0x00049c93) main_cset_slider_pane_g11

0x71ec,	// (0x00049c9f) main_cset_slider_pane_g12_ParamLimits

0x71ec,	// (0x00049c9f) main_cset_slider_pane_g12

0x71f8,	// (0x00049cab) main_cset_slider_pane_g13_ParamLimits

0x71f8,	// (0x00049cab) main_cset_slider_pane_g13

0x7204,	// (0x00049cb7) main_cset_slider_pane_g14_ParamLimits

0x7204,	// (0x00049cb7) main_cset_slider_pane_g14

0x7210,	// (0x00049cc3) main_cset_slider_pane_g15_ParamLimits

0x7210,	// (0x00049cc3) main_cset_slider_pane_g15

0x740d,	// (0x00049ec0) main_cset_slider_pane_t14_ParamLimits

0x740d,	// (0x00049ec0) main_cset_slider_pane_t14

0x7446,	// (0x00049ef9) main_cset_slider_pane_t15_ParamLimits

0x7446,	// (0x00049ef9) main_cset_slider_pane_t15

0x78d2,	// (0x0004a385) aid_cam4_burst_size_cell_ParamLimits

0x78d2,	// (0x0004a385) aid_cam4_burst_size_cell

0x78f2,	// (0x0004a3a5) grid_cam4_burst_pane_ParamLimits

0x78f2,	// (0x0004a3a5) grid_cam4_burst_pane

0x792c,	// (0x0004a3df) linegrid_cam4_burst_pane_ParamLimits

0x792c,	// (0x0004a3df) linegrid_cam4_burst_pane

0x794e,	// (0x0004a401) scroll_pane_cp30_ParamLimits

0x794e,	// (0x0004a401) scroll_pane_cp30

0x795a,	// (0x0004a40d) cell_cam4_burst_pane_ParamLimits

0x795a,	// (0x0004a40d) cell_cam4_burst_pane

0x79af,	// (0x0004a462) linegrid_cam4_burst_pane_g1_ParamLimits

0x79af,	// (0x0004a462) linegrid_cam4_burst_pane_g1

0x79bc,	// (0x0004a46f) linegrid_cam4_burst_pane_g2_ParamLimits

0x79bc,	// (0x0004a46f) linegrid_cam4_burst_pane_g2

0x79cd,	// (0x0004a480) linegrid_cam4_burst_pane_g3_ParamLimits

0x79cd,	// (0x0004a480) linegrid_cam4_burst_pane_g3

0x0002,

0xf977,	// (0x0005242a) linegrid_cam4_burst_pane_g_ParamLimits

0xf977,	// (0x0005242a) linegrid_cam4_burst_pane_g

0x79da,	// (0x0004a48d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x79da,	// (0x0004a48d) linegrid_cam4_burst_pane_g3_copy1

0x79f8,	// (0x0004a4ab) linegrid_cam4_burst_pane_g4_ParamLimits

0x79f8,	// (0x0004a4ab) linegrid_cam4_burst_pane_g4

0x7a05,	// (0x0004a4b8) linegrid_cam4_burst_pane_g5_ParamLimits

0x7a05,	// (0x0004a4b8) linegrid_cam4_burst_pane_g5

0x7a16,	// (0x0004a4c9) linegrid_cam4_burst_pane_g6_ParamLimits

0x7a16,	// (0x0004a4c9) linegrid_cam4_burst_pane_g6

0x7a2d,	// (0x0004a4e0) linegrid_cam4_burst_pane_g7_ParamLimits

0x7a2d,	// (0x0004a4e0) linegrid_cam4_burst_pane_g7

0x7a3a,	// (0x0004a4ed) cell_cam4_burst_pane_g1

0x7a59,	// (0x0004a50c) main_cam5_pane_t1_ParamLimits

0x7a59,	// (0x0004a50c) main_cam5_pane_t1

0x7a6b,	// (0x0004a51e) main_cam5_pane_t2_ParamLimits

0x7a6b,	// (0x0004a51e) main_cam5_pane_t2

0x7a7d,	// (0x0004a530) main_cam5_pane_t3_ParamLimits

0x7a7d,	// (0x0004a530) main_cam5_pane_t3

0x7a8f,	// (0x0004a542) main_cam5_pane_t4_ParamLimits

0x7a8f,	// (0x0004a542) main_cam5_pane_t4

0x7aa7,	// (0x0004a55a) main_cam5_pane_t5_ParamLimits

0x7aa7,	// (0x0004a55a) main_cam5_pane_t5

0x7abb,	// (0x0004a56e) main_cam5_pane_t6_ParamLimits

0x7abb,	// (0x0004a56e) main_cam5_pane_t6

0x7acf,	// (0x0004a582) main_cam5_pane_t7_ParamLimits

0x7acf,	// (0x0004a582) main_cam5_pane_t7

0x7ae1,	// (0x0004a594) main_cam5_pane_t8_ParamLimits

0x7ae1,	// (0x0004a594) main_cam5_pane_t8

0x7aff,	// (0x0004a5b2) main_cam5_pane_t9_ParamLimits

0x7aff,	// (0x0004a5b2) main_cam5_pane_t9

0x7b11,	// (0x0004a5c4) main_cam5_pane_t10_ParamLimits

0x7b11,	// (0x0004a5c4) main_cam5_pane_t10

0x7b23,	// (0x0004a5d6) main_cam5_pane_t11_ParamLimits

0x7b23,	// (0x0004a5d6) main_cam5_pane_t11

0x7b37,	// (0x0004a5ea) main_cam5_pane_t12_ParamLimits

0x7b37,	// (0x0004a5ea) main_cam5_pane_t12

0x7b4e,	// (0x0004a601) main_cam5_pane_t13_ParamLimits

0x7b4e,	// (0x0004a601) main_cam5_pane_t13

0x000c,

0xf983,	// (0x00052436) main_cam5_pane_t_ParamLimits

0xf983,	// (0x00052436) main_cam5_pane_t

0x15fc,	// (0x000440af) popup_scut_keymap_window_ParamLimits

0x15fc,	// (0x000440af) popup_scut_keymap_window

0x7b71,	// (0x0004a624) aid_size_cell_brow_shortcut

0xcfd1,	// (0x0004fa84) bg_popup_window_pane_cp010

0x7b7d,	// (0x0004a630) grid_scut_pane

0x7b89,	// (0x0004a63c) cell_scut_pane_ParamLimits

0x7b89,	// (0x0004a63c) cell_scut_pane

0x7ba2,	// (0x0004a655) cell_scut_pane_g1

0x7bab,	// (0x0004a65e) cell_scut_pane_t1

0x7bba,	// (0x0004a66d) cell_scut_pane_t2

0x7bc9,	// (0x0004a67c) cell_scut_pane_t3

0x0002,

0xf99e,	// (0x00052451) cell_scut_pane_t

0x539a,	// (0x00047e4d) main_mup3_pane_g8_ParamLimits

0x539a,	// (0x00047e4d) main_mup3_pane_g8

0x6a30,	// (0x000494e3) area_vitu2_query_pane_ParamLimits

0x6a30,	// (0x000494e3) area_vitu2_query_pane

0x0c53,	// (0x00043706) input_focus_pane_cp08

0x7bd7,	// (0x0004a68a) area_vitu2_query_pane_g1

0x0d58,	// (0x0004380b) area_vitu2_query_pane_g2

0x0001,

0xf9a5,	// (0x00052458) area_vitu2_query_pane_g

0x7be3,	// (0x0004a696) area_vitu2_query_pane_t1_ParamLimits

0x7be3,	// (0x0004a696) area_vitu2_query_pane_t1

0x7bf7,	// (0x0004a6aa) area_vitu2_query_pane_t2_ParamLimits

0x7bf7,	// (0x0004a6aa) area_vitu2_query_pane_t2

0x0d69,	// (0x0004381c) area_vitu2_query_pane_t3_ParamLimits

0x0d69,	// (0x0004381c) area_vitu2_query_pane_t3

0xb132,	// (0x0004dbe5) area_vitu2_query_pane_t4_ParamLimits

0xb132,	// (0x0004dbe5) area_vitu2_query_pane_t4

0xb15a,	// (0x0004dc0d) area_vitu2_query_pane_t5_ParamLimits

0xb15a,	// (0x0004dc0d) area_vitu2_query_pane_t5

0xb182,	// (0x0004dc35) area_vitu2_query_pane_t6_ParamLimits

0xb182,	// (0x0004dc35) area_vitu2_query_pane_t6

0x0006,

0xf9aa,	// (0x0005245d) area_vitu2_query_pane_t_ParamLimits

0xf9aa,	// (0x0005245d) area_vitu2_query_pane_t

0x7c0b,	// (0x0004a6be) bg_button_pane_cp018

0x7c19,	// (0x0004a6cc) bg_button_pane_cp021

0x0d91,	// (0x00043844) bg_button_pane_cp022

0x0da2,	// (0x00043855) input_focus_pane_cp09

0x3343,	// (0x00045df6) aid_size_touch_mv_arrow_left

0x336c,	// (0x00045e1f) aid_size_touch_mv_arrow_right

0x7228,	// (0x00049cdb) main_cset_slider_pane_g16_ParamLimits

0x7228,	// (0x00049cdb) main_cset_slider_pane_g16

0x7236,	// (0x00049ce9) main_cset_slider_pane_g17_ParamLimits

0x7236,	// (0x00049ce9) main_cset_slider_pane_g17

0x7a3a,	// (0x0004a4ed) cell_cam4_burst_pane_g1_ParamLimits

0xa6a9,	// (0x0004d15c) compa_mode_pane

0x751c,	// (0x00049fcf) popup_vtel_slider_window_g3_ParamLimits

0x751c,	// (0x00049fcf) popup_vtel_slider_window_g3

0x7533,	// (0x00049fe6) popup_vtel_slider_window_g4_ParamLimits

0x7533,	// (0x00049fe6) popup_vtel_slider_window_g4

0x754a,	// (0x00049ffd) popup_vtel_slider_window_t1_ParamLimits

0x754a,	// (0x00049ffd) popup_vtel_slider_window_t1

0xa6a9,	// (0x0004d15c) main_cl_pane

0xe43a,	// (0x00050eed) popup_imed_adjust2_window_ParamLimits

0xe40e,	// (0x00050ec1) bg_tb_trans_pane_cp05_ParamLimits

0xed60,	// (0x00051813) popup_imed_adjust2_window_g1_ParamLimits

0xed6f,	// (0x00051822) popup_imed_adjust2_window_g2_ParamLimits

0xed6f,	// (0x00051822) popup_imed_adjust2_window_g2

0xed7b,	// (0x0005182e) popup_imed_adjust2_window_g3_ParamLimits

0xed7b,	// (0x0005182e) popup_imed_adjust2_window_g3

0x0002,

0x0194,	// (0x00042c47) popup_imed_adjust2_window_g_ParamLimits

0x0194,	// (0x00042c47) popup_imed_adjust2_window_g

0xed87,	// (0x0005183a) popup_imed_adjust2_window_t1_ParamLimits

0xed9f,	// (0x00051852) slider_imed_adjust_pane_ParamLimits

0xedb3,	// (0x00051866) slider_imed_adjust_pane_g1_ParamLimits

0xedc3,	// (0x00051876) slider_imed_adjust_pane_g2_ParamLimits

0xedd3,	// (0x00051886) slider_imed_adjust_pane_g3_ParamLimits

0xede4,	// (0x00051897) slider_imed_adjust_pane_g4_ParamLimits

0x019b,	// (0x00042c4e) slider_imed_adjust_pane_g_ParamLimits

0x672c,	// (0x000491df) aid_touch_area_cam4_ParamLimits

0x672c,	// (0x000491df) aid_touch_area_cam4

0xafd8,	// (0x0004da8b) battery_pane_cp01

0x67ff,	// (0x000492b2) main_camera4_pane_g6_ParamLimits

0x67ff,	// (0x000492b2) main_camera4_pane_g6

0x6829,	// (0x000492dc) main_camera4_pane_t2_ParamLimits

0x6829,	// (0x000492dc) main_camera4_pane_t2

0x0001,

0xf826,	// (0x000522d9) main_camera4_pane_t_ParamLimits

0xf826,	// (0x000522d9) main_camera4_pane_t

0x6872,	// (0x00049325) aid_touch_area_vid4_ParamLimits

0x6872,	// (0x00049325) aid_touch_area_vid4

0x68d9,	// (0x0004938c) main_video4_pane_g5_ParamLimits

0x68d9,	// (0x0004938c) main_video4_pane_g5

0x6904,	// (0x000493b7) vid4_progress_pane_ParamLimits

0x6904,	// (0x000493b7) vid4_progress_pane

0x7244,	// (0x00049cf7) main_cset_slider_pane_g18_ParamLimits

0x7244,	// (0x00049cf7) main_cset_slider_pane_g18

0x7a4d,	// (0x0004a500) cell_cam4_burst_pane_g2_ParamLimits

0x7a4d,	// (0x0004a500) cell_cam4_burst_pane_g2

0x0001,

0xf97e,	// (0x00052431) cell_cam4_burst_pane_g_ParamLimits

0xf97e,	// (0x00052431) cell_cam4_burst_pane_g

0xc589,	// (0x0004f03c) bg_cl_pane_ParamLimits

0xc589,	// (0x0004f03c) bg_cl_pane

0x7c25,	// (0x0004a6d8) cl_header_pane_ParamLimits

0x7c25,	// (0x0004a6d8) cl_header_pane

0x7c39,	// (0x0004a6ec) cl_listscroll_pane_ParamLimits

0x7c39,	// (0x0004a6ec) cl_listscroll_pane

0x7c49,	// (0x0004a6fc) bg_cl_pane_g1

0x7c51,	// (0x0004a704) bg_cl_pane_g2

0x7c59,	// (0x0004a70c) bg_cl_pane_g3

0x7c61,	// (0x0004a714) bg_cl_pane_g4

0x7c69,	// (0x0004a71c) bg_cl_pane_g5

0x7c71,	// (0x0004a724) bg_cl_pane_g6

0x7c79,	// (0x0004a72c) bg_cl_pane_g7

0x7c81,	// (0x0004a734) bg_cl_pane_g8

0x7c89,	// (0x0004a73c) bg_cl_pane_g9

0x0008,

0xf9b9,	// (0x0005246c) bg_cl_pane_g

0x7c91,	// (0x0004a744) aid_height_cl_leading_ParamLimits

0x7c91,	// (0x0004a744) aid_height_cl_leading

0x7c9d,	// (0x0004a750) aid_height_cl_text_ParamLimits

0x7c9d,	// (0x0004a750) aid_height_cl_text

0xa722,	// (0x0004d1d5) bg_cl_header_pane_ParamLimits

0xa722,	// (0x0004d1d5) bg_cl_header_pane

0x7cbc,	// (0x0004a76f) cl_header_pane_g1_ParamLimits

0x7cbc,	// (0x0004a76f) cl_header_pane_g1

0x7cd2,	// (0x0004a785) cl_header_pane_t1_ParamLimits

0x7cd2,	// (0x0004a785) cl_header_pane_t1

0x7ceb,	// (0x0004a79e) cl_list_pane

0x70fa,	// (0x00049bad) hc_scroll_pane_cp01

0xc975,	// (0x0004f428) bg_cl_header_pane_g1

0x6cbb,	// (0x0004976e) bg_cl_header_pane_g2

0xc995,	// (0x0004f448) bg_cl_header_pane_g3

0x6ccb,	// (0x0004977e) bg_cl_header_pane_g4

0x6cc3,	// (0x00049776) bg_cl_header_pane_g5

0x7682,	// (0x0004a135) bg_cl_header_pane_g6

0x6ce3,	// (0x00049796) bg_cl_header_pane_g7

0x6ceb,	// (0x0004979e) bg_cl_header_pane_g8

0x6cdb,	// (0x0004978e) bg_cl_header_pane_g9

0x0008,

0xf9cc,	// (0x0005247f) bg_cl_header_pane_g

0x7cf4,	// (0x0004a7a7) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7cf4,	// (0x0004a7a7) hc_cl_list_double_graphic_heading_pane

0x7d07,	// (0x0004a7ba) hc_cl_list_single_graphic_pane_ParamLimits

0x7d07,	// (0x0004a7ba) hc_cl_list_single_graphic_pane

0x7d1f,	// (0x0004a7d2) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7d1f,	// (0x0004a7d2) hc_cl_list_single_graphic_pane_g1

0x7d2b,	// (0x0004a7de) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7d2b,	// (0x0004a7de) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9df,	// (0x00052492) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9df,	// (0x00052492) hc_cl_list_single_graphic_pane_g

0x7d3f,	// (0x0004a7f2) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7d3f,	// (0x0004a7f2) hc_cl_list_single_graphic_pane_t1

0x7d1f,	// (0x0004a7d2) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7d1f,	// (0x0004a7d2) hc_cl_list_double_graphic_heading_pane_g1

0x7d54,	// (0x0004a807) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7d54,	// (0x0004a807) hc_cl_list_double_graphic_heading_pane_g2

0x7d68,	// (0x0004a81b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7d68,	// (0x0004a81b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9e4,	// (0x00052497) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9e4,	// (0x00052497) hc_cl_list_double_graphic_heading_pane_g

0x7d7c,	// (0x0004a82f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7d7c,	// (0x0004a82f) hc_cl_list_double_graphic_heading_pane_t1

0x7d91,	// (0x0004a844) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7d91,	// (0x0004a844) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9eb,	// (0x0005249e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9eb,	// (0x0005249e) hc_cl_list_double_graphic_heading_pane_t

0x7db0,	// (0x0004a863) vid4_progress_pane_g1

0x7dc1,	// (0x0004a874) vid4_progress_pane_g2

0xac77,	// (0x0004d72a) vid4_progress_pane_g3

0xb00e,	// (0x0004dac1) vid4_progress_pane_g4

0x0004,

0xf9f0,	// (0x000524a3) vid4_progress_pane_g

0xb1d6,	// (0x0004dc89) vid4_progress_pane_t1

0x7dd3,	// (0x0004a886) vid4_progress_pane_t2

0x0002,

0xf9fb,	// (0x000524ae) vid4_progress_pane_t

0x7e02,	// (0x0004a8b5) wait_bar_pane_cp07

0xe676,	// (0x00051129) blid_firmament_pane_ParamLimits

0xe6b9,	// (0x0005116c) popup_blid_sat_info2_window_g1

0xe6dd,	// (0x00051190) popup_blid_sat_info2_window_t3

0xe6eb,	// (0x0005119e) popup_blid_sat_info2_window_t4

0xe6f9,	// (0x000511ac) popup_blid_sat_info2_window_t5

0xe707,	// (0x000511ba) popup_blid_sat_info2_window_t6

0xe717,	// (0x000511ca) popup_blid_sat_info2_window_t7

0xe725,	// (0x000511d8) popup_blid_sat_info2_window_t8

0xe733,	// (0x000511e6) popup_blid_sat_info2_window_t9

0xe741,	// (0x000511f4) popup_blid_sat_info2_window_t10

0xe811,	// (0x000512c4) aid_firma_cardinal_ParamLimits

0xe825,	// (0x000512d8) blid_firmament_pane_t1_ParamLimits

0xe83c,	// (0x000512ef) blid_firmament_pane_t2_ParamLimits

0xe853,	// (0x00051306) blid_firmament_pane_t3_ParamLimits

0xe86a,	// (0x0005131d) blid_firmament_pane_t4_ParamLimits

0x008d,	// (0x00042b40) blid_firmament_pane_t_ParamLimits

0xe881,	// (0x00051334) blid_sat_info_pane_ParamLimits

0xa722,	// (0x0004d1d5) main_cam_set_pane_ParamLimits

0x5c44,	// (0x000486f7) aid_size_cell_colour_35_ParamLimits

0x5c64,	// (0x00048717) aid_size_cell_colour_112_ParamLimits

0x5c84,	// (0x00048737) aid_size_cell_effect_ParamLimits

0xe40e,	// (0x00050ec1) bg_tb_trans_pane_cp02_ParamLimits

0xcb3d,	// (0x0004f5f0) heading_imed_pane_ParamLimits

0x5ca4,	// (0x00048757) listscroll_imed_pane_ParamLimits

0xda24,	// (0x000504d7) popup_call2_audio_first_window_g5_ParamLimits

0xda24,	// (0x000504d7) popup_call2_audio_first_window_g5

0x62e5,	// (0x00048d98) aid_size_touch_image3_arrow_left_ParamLimits

0x62e5,	// (0x00048d98) aid_size_touch_image3_arrow_left

0x6311,	// (0x00048dc4) aid_size_touch_image3_arrow_right_ParamLimits

0x6311,	// (0x00048dc4) aid_size_touch_image3_arrow_right

0x7deb,	// (0x0004a89e) vid4_progress_pane_t3

0x5fbf,	// (0x00048a72) main_hwr_training_symbol_option_pane_ParamLimits

0x5fbf,	// (0x00048a72) main_hwr_training_symbol_option_pane

0xf04f,	// (0x00051b02) popup_hwr_training_preview_window_ParamLimits

0xf04f,	// (0x00051b02) popup_hwr_training_preview_window

0x5fdf,	// (0x00048a92) hwr_training_navi_pane_g5_ParamLimits

0x5fdf,	// (0x00048a92) hwr_training_navi_pane_g5

0x6c03,	// (0x000496b6) popup_char_count_window

0xa722,	// (0x0004d1d5) bg_popup_sub_pane_cp20_ParamLimits

0x7664,	// (0x0004a117) list_vitu2_match_list_pane_ParamLimits

0x7673,	// (0x0004a126) vitu2_page_scroll_pane_ParamLimits

0x7673,	// (0x0004a126) vitu2_page_scroll_pane

0x7e14,	// (0x0004a8c7) list_single_hwr_training_symbol_option_pane_ParamLimits

0x7e14,	// (0x0004a8c7) list_single_hwr_training_symbol_option_pane

0x7e27,	// (0x0004a8da) list_single_hwr_training_symbol_option_pane_g1

0x7e2f,	// (0x0004a8e2) list_single_hwr_training_symbol_option_pane_t1

0x7e3d,	// (0x0004a8f0) bg_button_pane_cp023

0x7e46,	// (0x0004a8f9) bg_button_pane_cp024

0x7e79,	// (0x0004a92c) vitu2_page_scroll_pane_g1

0x7e81,	// (0x0004a934) vitu2_page_scroll_pane_g2

0x0001,

0xfa02,	// (0x000524b5) vitu2_page_scroll_pane_g

0x7e8b,	// (0x0004a93e) vitu2_page_scroll_pane_t1

0xe5d6,	// (0x00051089) popup_char_count_window_g1

0x7e9a,	// (0x0004a94d) popup_char_count_window_g2

0x7ea3,	// (0x0004a956) popup_char_count_window_g3

0x0002,

0xfa07,	// (0x000524ba) popup_char_count_window_g

0x7eac,	// (0x0004a95f) popup_char_count_window_t1

0xa6a9,	// (0x0004d15c) main_vded2_pane

0xed4c,	// (0x000517ff) aid_size_cell_imed_line

0xed56,	// (0x00051809) grid_imed_line_width_pane

0x6978,	// (0x0004942b) vid4_indicators_pane_g4

0x7eba,	// (0x0004a96d) cell_imed_line_width_pane_ParamLimits

0x7eba,	// (0x0004a96d) cell_imed_line_width_pane

0x7ed0,	// (0x0004a983) cell_imed_line_width_pane_g1

0xe789,	// (0x0005123c) cell_imed_line_width_pane_g2

0x0001,

0xfa0e,	// (0x000524c1) cell_imed_line_width_pane_g

0x7ed9,	// (0x0004a98c) main_vded2_pane_g1_ParamLimits

0x7ed9,	// (0x0004a98c) main_vded2_pane_g1

0x7ef4,	// (0x0004a9a7) main_vded2_pane_g2_ParamLimits

0x7ef4,	// (0x0004a9a7) main_vded2_pane_g2

0x0001,

0xfa13,	// (0x000524c6) main_vded2_pane_g_ParamLimits

0xfa13,	// (0x000524c6) main_vded2_pane_g

0x7f06,	// (0x0004a9b9) vded2_slider_pane_ParamLimits

0x7f06,	// (0x0004a9b9) vded2_slider_pane

0x7f16,	// (0x0004a9c9) aid_size_touch_vded2_end

0x7f20,	// (0x0004a9d3) aid_size_touch_vded2_playhead

0x7f2a,	// (0x0004a9dd) aid_size_touch_vded2_start

0x7f32,	// (0x0004a9e5) vded2_slider_bg_pane

0x7f3b,	// (0x0004a9ee) vded2_slider_pane_g1

0x7f44,	// (0x0004a9f7) vded2_slider_pane_g2

0x7f4c,	// (0x0004a9ff) vded2_slider_pane_g3

0x0002,

0xfa18,	// (0x000524cb) vded2_slider_pane_g

0x7f57,	// (0x0004aa0a) vded2_slider_bg_pane_g1

0x7f60,	// (0x0004aa13) vded2_slider_bg_pane_g2

0x7f69,	// (0x0004aa1c) vded2_slider_bg_pane_g3

0x0002,

0xfa1f,	// (0x000524d2) vded2_slider_bg_pane_g

0x3997,	// (0x0004644a) aid_postcard_touch_down_pane_ParamLimits

0x3997,	// (0x0004644a) aid_postcard_touch_down_pane

0x39af,	// (0x00046462) aid_postcard_touch_up_pane_ParamLimits

0x39af,	// (0x00046462) aid_postcard_touch_up_pane

0xa6a9,	// (0x0004d15c) main_blid2_pane

0xe41c,	// (0x00050ecf) popup_blid2_search_window

0xa6a9,	// (0x0004d15c) blid2_gps_pane

0xa6a9,	// (0x0004d15c) blid2_navig_pane

0xa6a9,	// (0x0004d15c) blid2_search_pane

0xa6a9,	// (0x0004d15c) blid2_tripm_pane

0x7f72,	// (0x0004aa25) blid2_search_pane_g1_ParamLimits

0x7f72,	// (0x0004aa25) blid2_search_pane_g1

0x7f85,	// (0x0004aa38) blid2_search_pane_t1_ParamLimits

0x7f85,	// (0x0004aa38) blid2_search_pane_t1

0x7f97,	// (0x0004aa4a) aid_size_cell_blid2_gps_ParamLimits

0x7f97,	// (0x0004aa4a) aid_size_cell_blid2_gps

0x7faf,	// (0x0004aa62) blid2_gps_pane_g1_ParamLimits

0x7faf,	// (0x0004aa62) blid2_gps_pane_g1

0x7fc3,	// (0x0004aa76) grid_blid2_satellite_pane_ParamLimits

0x7fc3,	// (0x0004aa76) grid_blid2_satellite_pane

0x7fdb,	// (0x0004aa8e) blid2_navig_pane_g1_ParamLimits

0x7fdb,	// (0x0004aa8e) blid2_navig_pane_g1

0x7fe7,	// (0x0004aa9a) blid2_navig_pane_t1_ParamLimits

0x7fe7,	// (0x0004aa9a) blid2_navig_pane_t1

0x8002,	// (0x0004aab5) blid2_navig_pane_t2_ParamLimits

0x8002,	// (0x0004aab5) blid2_navig_pane_t2

0x0001,

0xfa26,	// (0x000524d9) blid2_navig_pane_t_ParamLimits

0xfa26,	// (0x000524d9) blid2_navig_pane_t

0x801d,	// (0x0004aad0) blid2_navig_ring_pane_ParamLimits

0x801d,	// (0x0004aad0) blid2_navig_ring_pane

0x8038,	// (0x0004aaeb) blid2_speed_pane_ParamLimits

0x8038,	// (0x0004aaeb) blid2_speed_pane

0x8044,	// (0x0004aaf7) blid2_tripm_pane_g1_ParamLimits

0x8044,	// (0x0004aaf7) blid2_tripm_pane_g1

0x805f,	// (0x0004ab12) blid2_tripm_pane_g2_ParamLimits

0x805f,	// (0x0004ab12) blid2_tripm_pane_g2

0x8073,	// (0x0004ab26) blid2_tripm_pane_g3_ParamLimits

0x8073,	// (0x0004ab26) blid2_tripm_pane_g3

0x8087,	// (0x0004ab3a) blid2_tripm_pane_g4_ParamLimits

0x8087,	// (0x0004ab3a) blid2_tripm_pane_g4

0x809b,	// (0x0004ab4e) blid2_tripm_pane_g5_ParamLimits

0x809b,	// (0x0004ab4e) blid2_tripm_pane_g5

0x0005,

0xfa2b,	// (0x000524de) blid2_tripm_pane_g_ParamLimits

0xfa2b,	// (0x000524de) blid2_tripm_pane_g

0x80c1,	// (0x0004ab74) blid2_tripm_pane_t1_ParamLimits

0x80c1,	// (0x0004ab74) blid2_tripm_pane_t1

0x80da,	// (0x0004ab8d) blid2_tripm_pane_t2_ParamLimits

0x80da,	// (0x0004ab8d) blid2_tripm_pane_t2

0x80f3,	// (0x0004aba6) blid2_tripm_pane_t3_ParamLimits

0x80f3,	// (0x0004aba6) blid2_tripm_pane_t3

0x0003,

0xfa38,	// (0x000524eb) blid2_tripm_pane_t_ParamLimits

0xfa38,	// (0x000524eb) blid2_tripm_pane_t

0x813a,	// (0x0004abed) cell_blid2_satellite_pane_ParamLimits

0x813a,	// (0x0004abed) cell_blid2_satellite_pane

0x8156,	// (0x0004ac09) cell_blid2_satellite_pane_g1

0x815f,	// (0x0004ac12) cell_blid2_satellite_pane_t1

0xe891,	// (0x00051344) blid2_speed_pane_g1

0x816d,	// (0x0004ac20) blid2_speed_pane_t1

0x817b,	// (0x0004ac2e) blid2_speed_pane_t2

0x0001,

0xfa41,	// (0x000524f4) blid2_speed_pane_t

0xe891,	// (0x00051344) blid2_navig_ring_pane_g1

0x8189,	// (0x0004ac3c) blid2_navig_ring_pane_g2

0x8191,	// (0x0004ac44) blid2_navig_ring_pane_g3

0x8199,	// (0x0004ac4c) blid2_navig_ring_pane_g4

0x81a1,	// (0x0004ac54) blid2_navig_ring_pane_g5

0x0004,

0xfa46,	// (0x000524f9) blid2_navig_ring_pane_g

0xa6a9,	// (0x0004d15c) bg_popup_window_pane_cp011

0x81a9,	// (0x0004ac5c) popup_blid2_search_window_g1

0x81b1,	// (0x0004ac64) popup_blid2_search_window_t1

0x81bf,	// (0x0004ac72) popup_blid2_search_window_t2

0x0001,

0xfa51,	// (0x00052504) popup_blid2_search_window_t

0xc884,	// (0x0004f337) main_browser_pane_g1

0xc589,	// (0x0004f03c) main_browser_pane_ParamLimits

0xa722,	// (0x0004d1d5) bg_button_pane_cp011_ParamLimits

0x6c9d,	// (0x00049750) cell_vitu2_function_pane_g1_ParamLimits

0xe40e,	// (0x00050ec1) bg_popup_sub_pane_cp22_ParamLimits

0x0c53,	// (0x00043706) input_focus_pane_cp08_ParamLimits

0x7809,	// (0x0004a2bc) popup_vitu2_query_button_pane_ParamLimits

0x7809,	// (0x0004a2bc) popup_vitu2_query_button_pane

0x0c6a,	// (0x0004371d) popup_vitu2_query_input_button_pane

0x781a,	// (0x0004a2cd) popup_vitu2_query_window_g1_ParamLimits

0x0c74,	// (0x00043727) popup_vitu2_query_window_g2_ParamLimits

0xf952,	// (0x00052405) popup_vitu2_query_window_g_ParamLimits

0xa6a9,	// (0x0004d15c) bg_button_pane_cp026

0x81cd,	// (0x0004ac80) popup_vitu2_query_input_button_pane_g1

0xa6a9,	// (0x0004d15c) bg_button_pane_cp025

0x81d5,	// (0x0004ac88) popup_vitu2_query_button_pane_t1

0x509e,	// (0x00047b51) main_mp3_pane_t6

0x50ac,	// (0x00047b5f) popup_slider_window_cp01

0xaff6,	// (0x0004daa9) cam4_battery_pane

0xb05a,	// (0x0004db0d) cam4_battery_pane_cp02

0x7da6,	// (0x0004a859) cam4_battery_pane_cp01

0xb1ce,	// (0x0004dc81) cam4_battery_pane_cp03

0xe891,	// (0x00051344) cam4_battery_pane_g1

0x81e3,	// (0x0004ac96) cam4_battery_pane_g2

0x0001,

0xfa56,	// (0x00052509) cam4_battery_pane_g

0xe74f,	// (0x00051202) popup_blid_sat_info2_window_t11

0x3343,	// (0x00045df6) aid_size_touch_mv_arrow_left_ParamLimits

0x336c,	// (0x00045e1f) aid_size_touch_mv_arrow_right_ParamLimits

0xcf31,	// (0x0004f9e4) navi_pane_g1_ParamLimits

0x33ab,	// (0x00045e5e) navi_pane_g2_ParamLimits

0x33d9,	// (0x00045e8c) navi_pane_g3_ParamLimits

0xf404,	// (0x00051eb7) navi_pane_g_ParamLimits

0x3433,	// (0x00045ee6) navi_pane_mv_t1_ParamLimits

0x5cb0,	// (0x00048763) grid_imed_effect_pane_ParamLimits

0x2284,	// (0x00044d37) aid_placing_vt_slider_lsc

0xc7cf,	// (0x0004f282) aid_placing_vt_slider_prt

0xa722,	// (0x0004d1d5) bg_tb_trans_pane_cp01_ParamLimits

0xe9e1,	// (0x00051494) popup_image_details_window_g1_ParamLimits

0xe9f4,	// (0x000514a7) popup_image_details_window_g2_ParamLimits

0xea09,	// (0x000514bc) popup_image_details_window_g3_ParamLimits

0xea09,	// (0x000514bc) popup_image_details_window_g3

0x00d2,	// (0x00042b85) popup_image_details_window_g_ParamLimits

0xea1d,	// (0x000514d0) popup_image_details_window_t1_ParamLimits

0xea2f,	// (0x000514e2) popup_image_details_window_t2_ParamLimits

0xea48,	// (0x000514fb) popup_image_details_window_t3_ParamLimits

0xea5c,	// (0x0005150f) popup_image_details_window_t4_ParamLimits

0xea77,	// (0x0005152a) popup_image_details_window_t5_ParamLimits

0x00d9,	// (0x00042b8c) popup_image_details_window_t_ParamLimits

0x7ca9,	// (0x0004a75c) cl_header_name_pane_ParamLimits

0x7ca9,	// (0x0004a75c) cl_header_name_pane

0x81ed,	// (0x0004aca0) cl_header_name_pane_t1_ParamLimits

0x81ed,	// (0x0004aca0) cl_header_name_pane_t1

0x820e,	// (0x0004acc1) cl_header_name_pane_t2_ParamLimits

0x820e,	// (0x0004acc1) cl_header_name_pane_t2

0x8250,	// (0x0004ad03) cl_header_name_pane_t3_ParamLimits

0x8250,	// (0x0004ad03) cl_header_name_pane_t3

0x0002,

0xfa5b,	// (0x0005250e) cl_header_name_pane_t_ParamLimits

0xfa5b,	// (0x0005250e) cl_header_name_pane_t

0x3404,	// (0x00045eb7) navi_pane_mv_g2_ParamLimits

0x6bdd,	// (0x00049690) field_vitu2_entry_pane_g1_ParamLimits

0x6be9,	// (0x0004969c) field_vitu2_entry_pane_g2_ParamLimits

0x6bf5,	// (0x000496a8) field_vitu2_entry_pane_g3_ParamLimits

0x6bf5,	// (0x000496a8) field_vitu2_entry_pane_g3

0xf858,	// (0x0005230b) field_vitu2_entry_pane_g_ParamLimits

0x6c19,	// (0x000496cc) cell_vitu2_itu_pane_g1_ParamLimits

0x6c29,	// (0x000496dc) cell_vitu2_itu_pane_g2_ParamLimits

0x6c29,	// (0x000496dc) cell_vitu2_itu_pane_g2

0x0001,

0xf864,	// (0x00052317) cell_vitu2_itu_pane_g_ParamLimits

0xf864,	// (0x00052317) cell_vitu2_itu_pane_g

0xa722,	// (0x0004d1d5) bg_vkb2_func_pane_cp05_ParamLimits

0xa722,	// (0x0004d1d5) bg_vkb2_func_pane_cp05

0xa722,	// (0x0004d1d5) bg_vkb2_func_pane_cp03

0xa722,	// (0x0004d1d5) bg_vkb2_func_pane_cp04

0xa722,	// (0x0004d1d5) bg_vkb2_func_pane_cp10_ParamLimits

0xa722,	// (0x0004d1d5) bg_vkb2_func_pane_cp10

0x0d91,	// (0x00043844) bg_vkb2_func_pane_cp08

0x7c0b,	// (0x0004a6be) bg_vkb2_func_pane_cp06

0x7c19,	// (0x0004a6cc) bg_vkb2_func_pane_cp07

0x7e4f,	// (0x0004a902) bg_vkb2_func_pane_cp11_ParamLimits

0x7e4f,	// (0x0004a902) bg_vkb2_func_pane_cp11

0x7e64,	// (0x0004a917) bg_vkb2_func_pane_cp12_ParamLimits

0x7e64,	// (0x0004a917) bg_vkb2_func_pane_cp12

0xa6a9,	// (0x0004d15c) bg_vkb2_func_pane_cp09

0x6cbb,	// (0x0004976e) bg_vkb2_func_pane_g1

0xc995,	// (0x0004f448) bg_vkb2_func_pane_g2

0x6cc3,	// (0x00049776) bg_vkb2_func_pane_g3

0x6ccb,	// (0x0004977e) bg_vkb2_func_pane_g4

0x7682,	// (0x0004a135) bg_vkb2_func_pane_g5

0x6ce3,	// (0x00049796) bg_vkb2_func_pane_g6

0x6ceb,	// (0x0004979e) bg_vkb2_func_pane_g7

0x6cdb,	// (0x0004978e) bg_vkb2_func_pane_g8

0xc975,	// (0x0004f428) bg_vkb2_func_pane_g9

0x0008,

0xfa62,	// (0x00052515) bg_vkb2_func_pane_g

0x80af,	// (0x0004ab62) blid2_tripm_pane_g6_ParamLimits

0x80af,	// (0x0004ab62) blid2_tripm_pane_g6

0x6169,	// (0x00048c1c) mp4_progress_pane_g1

0x8126,	// (0x0004abd9) blid2_tripm_values_pane_ParamLimits

0x8126,	// (0x0004abd9) blid2_tripm_values_pane

0x8281,	// (0x0004ad34) blid2_tripm_values_pane_t1

0x828f,	// (0x0004ad42) blid2_tripm_values_pane_t2

0x829d,	// (0x0004ad50) blid2_tripm_values_pane_t3

0x82ab,	// (0x0004ad5e) blid2_tripm_values_pane_t4

0x82b9,	// (0x0004ad6c) blid2_tripm_values_pane_t5

0x82c7,	// (0x0004ad7a) blid2_tripm_values_pane_t6

0x82d5,	// (0x0004ad88) blid2_tripm_values_pane_t7

0x82e3,	// (0x0004ad96) blid2_tripm_values_pane_t8

0x82f1,	// (0x0004ada4) blid2_tripm_values_pane_t9

0x0008,

0xfa75,	// (0x00052528) blid2_tripm_values_pane_t

0x22c1,	// (0x00044d74) call_video_pane_t1_ParamLimits

0x22db,	// (0x00044d8e) call_video_pane_t2_ParamLimits

0xf28d,	// (0x00051d40) call_video_pane_t_ParamLimits

0x0a13,	// (0x000434c6) msg_header_pane_g1_ParamLimits

0xd15c,	// (0x0004fc0f) msg_header_pane_g2_ParamLimits

0xd15c,	// (0x0004fc0f) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x00051f5a) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x00051f5a) msg_header_pane_g

0xc589,	// (0x0004f03c) main_clock2_pane_ParamLimits

0x59b5,	// (0x00048468) grid_clock2_toolbar_pane_ParamLimits

0x59b5,	// (0x00048468) grid_clock2_toolbar_pane

0x59b5,	// (0x00048468) listscroll_clock2_pane_ParamLimits

0x59b5,	// (0x00048468) listscroll_clock2_pane

0x5a9d,	// (0x00048550) main_clock2_pane_t3_ParamLimits

0x5a9d,	// (0x00048550) main_clock2_pane_t3

0x5ab8,	// (0x0004856b) main_clock2_pane_t4_ParamLimits

0x5ab8,	// (0x0004856b) main_clock2_pane_t4

0x82ff,	// (0x0004adb2) cell_clock2_toolbar_pane

0x8307,	// (0x0004adba) cell_clock2_toolbar_pane_cp01

0x8307,	// (0x0004adba) cell_clock2_toolbar_pane_cp02

0x830f,	// (0x0004adc2) cell_clock2_toolbar_pane_cp03

0x8317,	// (0x0004adca) list_clock2_pane

0xce97,	// (0x0004f94a) scroll_pane_cp10

0x831f,	// (0x0004add2) list_single_clock2_pane_ParamLimits

0x831f,	// (0x0004add2) list_single_clock2_pane

0xcfd1,	// (0x0004fa84) list_highlight_pane_cp08

0x832c,	// (0x0004addf) list_single_clock2_pane_t1

0x833a,	// (0x0004aded) list_single_clock2_pane_t2

0x0001,

0xfa88,	// (0x0005253b) list_single_clock2_pane_t

0xa6a9,	// (0x0004d15c) bg_button_pane_cp10

0x8348,	// (0x0004adfb) cell_clock2_toolbar_pane_g1

0x3923,	// (0x000463d6) aid_main_viewer_pane_g1_ParamLimits

0x3923,	// (0x000463d6) aid_main_viewer_pane_g1

0x3931,	// (0x000463e4) aid_main_viewer_pane_g2_ParamLimits

0x3931,	// (0x000463e4) aid_main_viewer_pane_g2

0x393f,	// (0x000463f2) aid_main_viewer_pane_g3_ParamLimits

0x393f,	// (0x000463f2) aid_main_viewer_pane_g3

0x394e,	// (0x00046401) aid_main_viewer_pane_g4_ParamLimits

0x394e,	// (0x00046401) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x00051f6b) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x00051f6b) aid_main_viewer_pane_g

0x42a6,	// (0x00046d59) main_calc_pane_ParamLimits

0x42ba,	// (0x00046d6d) main_dialer2_pane_ParamLimits

0xa6a9,	// (0x0004d15c) main_cam6_pane

0xa6a9,	// (0x0004d15c) main_vid6_pane

0x59c1,	// (0x00048474) listscroll_gen_pane_cp06_ParamLimits

0x59c1,	// (0x00048474) listscroll_gen_pane_cp06

0x5ad3,	// (0x00048586) main_clock2_pane_t5_ParamLimits

0x5ad3,	// (0x00048586) main_clock2_pane_t5

0x5b35,	// (0x000485e8) aid_call2_pane_cp10_ParamLimits

0x5b47,	// (0x000485fa) aid_call_pane_cp10_ParamLimits

0xcf06,	// (0x0004f9b9) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcf06,	// (0x0004f9b9) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5b59,	// (0x0004860c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5b59,	// (0x0004860c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcf06,	// (0x0004f9b9) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf77e,	// (0x00052231) popup_clock_analogue_window_cp10_g_ParamLimits

0x5b6f,	// (0x00048622) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6292,	// (0x00048d45) cell_dialer2_keypad_pane_g2_ParamLimits

0x6292,	// (0x00048d45) cell_dialer2_keypad_pane_g2

0x0001,

0xf7f7,	// (0x000522aa) cell_dialer2_keypad_pane_g_ParamLimits

0xf7f7,	// (0x000522aa) cell_dialer2_keypad_pane_g

0x62ae,	// (0x00048d61) cell_dialer2_keypad_pane_t1

0x70d4,	// (0x00049b87) main_cset_text2_pane_ParamLimits

0x70d4,	// (0x00049b87) main_cset_text2_pane

0x7bd7,	// (0x0004a68a) area_vitu2_query_pane_g1_ParamLimits

0x0d58,	// (0x0004380b) area_vitu2_query_pane_g2_ParamLimits

0xf9a5,	// (0x00052458) area_vitu2_query_pane_g_ParamLimits

0xb1aa,	// (0x0004dc5d) area_vitu2_query_pane_t7_ParamLimits

0xb1aa,	// (0x0004dc5d) area_vitu2_query_pane_t7

0x7c0b,	// (0x0004a6be) bg_button_pane_cp018_ParamLimits

0x7c19,	// (0x0004a6cc) bg_button_pane_cp021_ParamLimits

0x0d91,	// (0x00043844) bg_button_pane_cp022_ParamLimits

0x0d91,	// (0x00043844) bg_vkb2_func_pane_cp08_ParamLimits

0x7c0b,	// (0x0004a6be) bg_vkb2_func_pane_cp06_ParamLimits

0x7c19,	// (0x0004a6cc) bg_vkb2_func_pane_cp07_ParamLimits

0x0da2,	// (0x00043855) input_focus_pane_cp09_ParamLimits

0xb245,	// (0x0004dcf8) cam6_autofocus_pane_ParamLimits

0xb245,	// (0x0004dcf8) cam6_autofocus_pane

0x8350,	// (0x0004ae03) cam6_image_uncrop_pane_ParamLimits

0x8350,	// (0x0004ae03) cam6_image_uncrop_pane

0x835f,	// (0x0004ae12) cam6_indi_pane_ParamLimits

0x835f,	// (0x0004ae12) cam6_indi_pane

0x8375,	// (0x0004ae28) cam6_mode_pane_ParamLimits

0x8375,	// (0x0004ae28) cam6_mode_pane

0x8387,	// (0x0004ae3a) cam6_timer_pane_ParamLimits

0x8387,	// (0x0004ae3a) cam6_timer_pane

0x8393,	// (0x0004ae46) cam6_zoom_pane_ParamLimits

0x8393,	// (0x0004ae46) cam6_zoom_pane

0x83a1,	// (0x0004ae54) cam6_mode_pane_g1_ParamLimits

0x83a1,	// (0x0004ae54) cam6_mode_pane_g1

0x83b1,	// (0x0004ae64) cam6_mode_pane_g2_ParamLimits

0x83b1,	// (0x0004ae64) cam6_mode_pane_g2

0x83c1,	// (0x0004ae74) cam6_mode_pane_g3_ParamLimits

0x83c1,	// (0x0004ae74) cam6_mode_pane_g3

0x83d1,	// (0x0004ae84) cam6_mode_pane_g4_ParamLimits

0x83d1,	// (0x0004ae84) cam6_mode_pane_g4

0x0003,

0xfa8d,	// (0x00052540) cam6_mode_pane_g_ParamLimits

0xfa8d,	// (0x00052540) cam6_mode_pane_g

0x83e1,	// (0x0004ae94) bg_tb_trans_pane_cp08_ParamLimits

0x83e1,	// (0x0004ae94) bg_tb_trans_pane_cp08

0x83ef,	// (0x0004aea2) cam6_battery_pane_ParamLimits

0x83ef,	// (0x0004aea2) cam6_battery_pane

0x8405,	// (0x0004aeb8) cam6_indi_pane_g1_ParamLimits

0x8405,	// (0x0004aeb8) cam6_indi_pane_g1

0x8417,	// (0x0004aeca) cam6_indi_pane_g2_ParamLimits

0x8417,	// (0x0004aeca) cam6_indi_pane_g2

0x8429,	// (0x0004aedc) cam6_indi_pane_g3_ParamLimits

0x8429,	// (0x0004aedc) cam6_indi_pane_g3

0x0002,

0xfa96,	// (0x00052549) cam6_indi_pane_g_ParamLimits

0xfa96,	// (0x00052549) cam6_indi_pane_g

0x843b,	// (0x0004aeee) cam6_indi_pane_t1_ParamLimits

0x843b,	// (0x0004aeee) cam6_indi_pane_t1

0x69a4,	// (0x00049457) cam6_autofocus_pane_g1

0x69ac,	// (0x0004945f) cam6_autofocus_pane_g2

0x69b4,	// (0x00049467) cam6_autofocus_pane_g3

0x69bc,	// (0x0004946f) cam6_autofocus_pane_g4

0x0003,

0xfa9d,	// (0x00052550) cam6_autofocus_pane_g

0x8461,	// (0x0004af14) cam6_timer_pane_g1

0x8469,	// (0x0004af1c) cam6_timer_pane_t1

0x8477,	// (0x0004af2a) cam6_zoom_cont_pane

0x847f,	// (0x0004af32) cam6_zoom_pane_g1

0x8487,	// (0x0004af3a) cam6_zoom_pane_g2

0x848f,	// (0x0004af42) cam6_zoom_pane_g3

0x0002,

0xfaa6,	// (0x00052559) cam6_zoom_pane_g

0xe891,	// (0x00051344) cam6_battery_pane_g1

0xe891,	// (0x00051344) cam6_battery_pane_g2

0x0001,

0x0096,	// (0x00042b49) cam6_battery_pane_g

0x8497,	// (0x0004af4a) cam6_zoom_cont_pane_g1

0x84a0,	// (0x0004af53) cam6_zoom_cont_pane_g2

0x84a9,	// (0x0004af5c) cam6_zoom_cont_pane_g3

0x0002,

0xfaad,	// (0x00052560) cam6_zoom_cont_pane_g

0x84c6,	// (0x0004af79) cam6_mode_pane_cp_ParamLimits

0x84c6,	// (0x0004af79) cam6_mode_pane_cp

0x8393,	// (0x0004ae46) cam6_zoom_pane_cp_ParamLimits

0x8393,	// (0x0004ae46) cam6_zoom_pane_cp

0x84d8,	// (0x0004af8b) vid6_image_uncrop_cif_pane_ParamLimits

0x84d8,	// (0x0004af8b) vid6_image_uncrop_cif_pane

0x84e8,	// (0x0004af9b) vid6_image_uncrop_nhd_pane_ParamLimits

0x84e8,	// (0x0004af9b) vid6_image_uncrop_nhd_pane

0x8350,	// (0x0004ae03) vid6_image_uncrop_vga_pane_ParamLimits

0x8350,	// (0x0004ae03) vid6_image_uncrop_vga_pane

0x8507,	// (0x0004afba) vid6_image_uncrop_wvga_pane_ParamLimits

0x8507,	// (0x0004afba) vid6_image_uncrop_wvga_pane

0x8516,	// (0x0004afc9) vid6_indi_pane_ParamLimits

0x8516,	// (0x0004afc9) vid6_indi_pane

0x83e1,	// (0x0004ae94) bg_tb_trans_pane_cp09_ParamLimits

0x83e1,	// (0x0004ae94) bg_tb_trans_pane_cp09

0x852e,	// (0x0004afe1) cam6_battery_pane_cp_ParamLimits

0x852e,	// (0x0004afe1) cam6_battery_pane_cp

0x853a,	// (0x0004afed) vid6_indi_pane_g1_ParamLimits

0x853a,	// (0x0004afed) vid6_indi_pane_g1

0x854c,	// (0x0004afff) vid6_indi_pane_g2_ParamLimits

0x854c,	// (0x0004afff) vid6_indi_pane_g2

0x855e,	// (0x0004b011) vid6_indi_pane_g3_ParamLimits

0x855e,	// (0x0004b011) vid6_indi_pane_g3

0x8575,	// (0x0004b028) vid6_indi_pane_g4_ParamLimits

0x8575,	// (0x0004b028) vid6_indi_pane_g4

0x858c,	// (0x0004b03f) vid6_indi_pane_g5_ParamLimits

0x858c,	// (0x0004b03f) vid6_indi_pane_g5

0x0004,

0xfab4,	// (0x00052567) vid6_indi_pane_g_ParamLimits

0xfab4,	// (0x00052567) vid6_indi_pane_g

0x85a6,	// (0x0004b059) vid6_indi_pane_t1_ParamLimits

0x85a6,	// (0x0004b059) vid6_indi_pane_t1

0x85bc,	// (0x0004b06f) vid6_indi_pane_t2_ParamLimits

0x85bc,	// (0x0004b06f) vid6_indi_pane_t2

0x85e4,	// (0x0004b097) vid6_indi_pane_t3_ParamLimits

0x85e4,	// (0x0004b097) vid6_indi_pane_t3

0x860c,	// (0x0004b0bf) vid6_indi_pane_t4_ParamLimits

0x860c,	// (0x0004b0bf) vid6_indi_pane_t4

0x0003,

0xfabf,	// (0x00052572) vid6_indi_pane_t_ParamLimits

0xfabf,	// (0x00052572) vid6_indi_pane_t

0x8630,	// (0x0004b0e3) wait_bar_pane_cp08

0x863f,	// (0x0004b0f2) main_cset_text2_pane_t1_ParamLimits

0x863f,	// (0x0004b0f2) main_cset_text2_pane_t1

0x84b1,	// (0x0004af64) listscroll_gen_pane_cp06_t1_ParamLimits

0x84b1,	// (0x0004af64) listscroll_gen_pane_cp06_t1

0xa6a9,	// (0x0004d15c) main_cam6_set_pane

0xeac1,	// (0x00051574) bg_tb_trans_pane_cp06_ParamLimits

0xaffe,	// (0x0004dab1) cam4_indicators_pane_g1_ParamLimits

0xb00e,	// (0x0004dac1) cam4_indicators_pane_g2_ParamLimits

0xf834,	// (0x000522e7) cam4_indicators_pane_g_ParamLimits

0xb026,	// (0x0004dad9) cam4_indicators_pane_t1_ParamLimits

0xb04c,	// (0x0004daff) bg_tb_trans_pane_cp07_ParamLimits

0x694d,	// (0x00049400) vid4_indicators_pane_g1_ParamLimits

0x695c,	// (0x0004940f) vid4_indicators_pane_g2_ParamLimits

0x696b,	// (0x0004941e) vid4_indicators_pane_g3_ParamLimits

0x6978,	// (0x0004942b) vid4_indicators_pane_g4_ParamLimits

0xf846,	// (0x000522f9) vid4_indicators_pane_g_ParamLimits

0x6990,	// (0x00049443) vid4_indicators_pane_t1_ParamLimits

0x7db0,	// (0x0004a863) vid4_progress_pane_g1_ParamLimits

0x7dc1,	// (0x0004a874) vid4_progress_pane_g2_ParamLimits

0xac77,	// (0x0004d72a) vid4_progress_pane_g3_ParamLimits

0xb00e,	// (0x0004dac1) vid4_progress_pane_g4_ParamLimits

0xf9f0,	// (0x000524a3) vid4_progress_pane_g_ParamLimits

0xb1d6,	// (0x0004dc89) vid4_progress_pane_t1_ParamLimits

0x7dd3,	// (0x0004a886) vid4_progress_pane_t2_ParamLimits

0x7deb,	// (0x0004a89e) vid4_progress_pane_t3_ParamLimits

0xf9fb,	// (0x000524ae) vid4_progress_pane_t_ParamLimits

0x7e02,	// (0x0004a8b5) wait_bar_pane_cp07_ParamLimits

0x8660,	// (0x0004b113) main_cam6_set_pane_g2_ParamLimits

0x8660,	// (0x0004b113) main_cam6_set_pane_g2

0x8686,	// (0x0004b139) main_cset6_listscroll_pane_ParamLimits

0x8686,	// (0x0004b139) main_cset6_listscroll_pane

0x86a4,	// (0x0004b157) main_cset6_slider_pane_ParamLimits

0x86a4,	// (0x0004b157) main_cset6_slider_pane

0x86ba,	// (0x0004b16d) main_cset6_text2_pane_ParamLimits

0x86ba,	// (0x0004b16d) main_cset6_text2_pane

0x86c8,	// (0x0004b17b) main_cset6_text_pane

0x86d0,	// (0x0004b183) main_cset_list_pane_copy1_ParamLimits

0x86d0,	// (0x0004b183) main_cset_list_pane_copy1

0x86e0,	// (0x0004b193) scroll_pane_cp028_copy1

0x86e9,	// (0x0004b19c) cset_list_set_pane_copy1

0x86fd,	// (0x0004b1b0) aid_position_infowindow_above_copy1

0x8705,	// (0x0004b1b8) aid_position_infowindow_below_copy1

0x0db3,	// (0x00043866) cset_list_set_pane_g1_copy1

0x0dbb,	// (0x0004386e) cset_list_set_pane_g3_copy1_ParamLimits

0x0dbb,	// (0x0004386e) cset_list_set_pane_g3_copy1

0x0dca,	// (0x0004387d) cset_list_set_pane_t1_copy1_ParamLimits

0x0dca,	// (0x0004387d) cset_list_set_pane_t1_copy1

0xa722,	// (0x0004d1d5) list_highlight_pane_cp021_copy1_ParamLimits

0xa722,	// (0x0004d1d5) list_highlight_pane_cp021_copy1

0x870d,	// (0x0004b1c0) cset6_slider_pane_ParamLimits

0x870d,	// (0x0004b1c0) cset6_slider_pane

0x8739,	// (0x0004b1ec) main_cset6_slider_pane_g1_ParamLimits

0x8739,	// (0x0004b1ec) main_cset6_slider_pane_g1

0x8761,	// (0x0004b214) main_cset6_slider_pane_g2_ParamLimits

0x8761,	// (0x0004b214) main_cset6_slider_pane_g2

0x8789,	// (0x0004b23c) main_cset6_slider_pane_g3_ParamLimits

0x8789,	// (0x0004b23c) main_cset6_slider_pane_g3

0x8795,	// (0x0004b248) main_cset6_slider_pane_g4_ParamLimits

0x8795,	// (0x0004b248) main_cset6_slider_pane_g4

0x87a1,	// (0x0004b254) main_cset6_slider_pane_g5_ParamLimits

0x87a1,	// (0x0004b254) main_cset6_slider_pane_g5

0x71b0,	// (0x00049c63) main_cset6_slider_pane_g7_ParamLimits

0x71b0,	// (0x00049c63) main_cset6_slider_pane_g7

0x71bc,	// (0x00049c6f) main_cset6_slider_pane_g8_ParamLimits

0x71bc,	// (0x00049c6f) main_cset6_slider_pane_g8

0x71c8,	// (0x00049c7b) main_cset6_slider_pane_g9_ParamLimits

0x71c8,	// (0x00049c7b) main_cset6_slider_pane_g9

0x71d4,	// (0x00049c87) main_cset6_slider_pane_g10_ParamLimits

0x71d4,	// (0x00049c87) main_cset6_slider_pane_g10

0x71e0,	// (0x00049c93) main_cset6_slider_pane_g11_ParamLimits

0x71e0,	// (0x00049c93) main_cset6_slider_pane_g11

0x71ec,	// (0x00049c9f) main_cset6_slider_pane_g12_ParamLimits

0x71ec,	// (0x00049c9f) main_cset6_slider_pane_g12

0x71f8,	// (0x00049cab) main_cset6_slider_pane_g13_ParamLimits

0x71f8,	// (0x00049cab) main_cset6_slider_pane_g13

0x7204,	// (0x00049cb7) main_cset6_slider_pane_g14_ParamLimits

0x7204,	// (0x00049cb7) main_cset6_slider_pane_g14

0x87af,	// (0x0004b262) main_cset6_slider_pane_g15_ParamLimits

0x87af,	// (0x0004b262) main_cset6_slider_pane_g15

0x7228,	// (0x00049cdb) main_cset6_slider_pane_g16_ParamLimits

0x7228,	// (0x00049cdb) main_cset6_slider_pane_g16

0x7236,	// (0x00049ce9) main_cset6_slider_pane_g17_ParamLimits

0x7236,	// (0x00049ce9) main_cset6_slider_pane_g17

0x0011,

0xfac8,	// (0x0005257b) main_cset6_slider_pane_g_ParamLimits

0xfac8,	// (0x0005257b) main_cset6_slider_pane_g

0x87df,	// (0x0004b292) main_cset6_slider_pane_t1_ParamLimits

0x87df,	// (0x0004b292) main_cset6_slider_pane_t1

0x8820,	// (0x0004b2d3) main_cset6_slider_pane_t2_ParamLimits

0x8820,	// (0x0004b2d3) main_cset6_slider_pane_t2

0x884b,	// (0x0004b2fe) main_cset6_slider_pane_t3_ParamLimits

0x884b,	// (0x0004b2fe) main_cset6_slider_pane_t3

0x8876,	// (0x0004b329) main_cset6_slider_pane_t4_ParamLimits

0x8876,	// (0x0004b329) main_cset6_slider_pane_t4

0x88a3,	// (0x0004b356) main_cset6_slider_pane_t5_ParamLimits

0x88a3,	// (0x0004b356) main_cset6_slider_pane_t5

0x88d0,	// (0x0004b383) main_cset6_slider_pane_t7_ParamLimits

0x88d0,	// (0x0004b383) main_cset6_slider_pane_t7

0x8906,	// (0x0004b3b9) main_cset6_slider_pane_t8_ParamLimits

0x8906,	// (0x0004b3b9) main_cset6_slider_pane_t8

0x892a,	// (0x0004b3dd) main_cset6_slider_pane_t9_ParamLimits

0x892a,	// (0x0004b3dd) main_cset6_slider_pane_t9

0x894e,	// (0x0004b401) main_cset6_slider_pane_t10_ParamLimits

0x894e,	// (0x0004b401) main_cset6_slider_pane_t10

0x8972,	// (0x0004b425) main_cset6_slider_pane_t11_ParamLimits

0x8972,	// (0x0004b425) main_cset6_slider_pane_t11

0x8998,	// (0x0004b44b) main_cset6_slider_pane_t14_ParamLimits

0x8998,	// (0x0004b44b) main_cset6_slider_pane_t14

0x89d1,	// (0x0004b484) main_cset6_slider_pane_t15_ParamLimits

0x89d1,	// (0x0004b484) main_cset6_slider_pane_t15

0x000b,

0xfaed,	// (0x000525a0) main_cset6_slider_pane_t_ParamLimits

0xfaed,	// (0x000525a0) main_cset6_slider_pane_t

0x74ab,	// (0x00049f5e) cset_slider_pane_g1_copy1

0x74b4,	// (0x00049f67) cset_slider_pane_g2_copy1

0x74bd,	// (0x00049f70) cset_slider_pane_g3_copy1

0xa6a9,	// (0x0004d15c) bg_popup_sub_pane_cp011_copy1

0x7868,	// (0x0004a31b) main_cset_text_pane_g1_copy1

0x7870,	// (0x0004a323) main_cset_text_pane_t1_copy1

0x787e,	// (0x0004a331) main_cset_text_pane_t2_copy1

0x788c,	// (0x0004a33f) main_cset_text_pane_t3_copy1

0x789a,	// (0x0004a34d) main_cset_text_pane_t4_copy1

0x78a8,	// (0x0004a35b) main_cset_text_pane_t5_copy1

0x78b6,	// (0x0004a369) main_cset_text_pane_t6_copy1

0x78c4,	// (0x0004a377) main_cset_text_pane_t7_copy1

0x863f,	// (0x0004b0f2) main_cset_text2_pane_t1_copy1

0xa6a9,	// (0x0004d15c) main_ncimui_pane

0x4548,	// (0x00046ffb) popup_query_ncimui_window_ParamLimits

0x4548,	// (0x00046ffb) popup_query_ncimui_window

0xad49,	// (0x0004d7fc) field_cale_ev2_pane_g4_ParamLimits

0xad49,	// (0x0004d7fc) field_cale_ev2_pane_g4

0x60d9,	// (0x00048b8c) cell_video_dialer_keypad_pane_g2_ParamLimits

0x60d9,	// (0x00048b8c) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7d2,	// (0x00052285) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7d2,	// (0x00052285) cell_video_dialer_keypad_pane_g

0x60f1,	// (0x00048ba4) cell_video_dialer_keypad_pane_t1

0xa6a9,	// (0x0004d15c) bg_popup_window_pane_cp012

0xcd83,	// (0x0004f836) heading_pane_cp06

0x8b21,	// (0x0004b5d4) ncim_query_content_pane

0xa6a9,	// (0x0004d15c) bg_popup_heading_pane_cp01

0x8b29,	// (0x0004b5dc) ncim_heading_pane_t1

0x8b37,	// (0x0004b5ea) ncim_indicator_popup_pane

0x8b49,	// (0x0004b5fc) ncim_query_button_pane

0x8b6b,	// (0x0004b61e) ncim_query_content_pane_t1

0x8b7d,	// (0x0004b630) ncim_query_content_pane_t2

0x0005,

0xfb2c,	// (0x000525df) ncim_query_content_pane_t

0x8c2f,	// (0x0004b6e2) ncim_query_list_pane

0x8c41,	// (0x0004b6f4) ncim_query_popup_pane

0x8b37,	// (0x0004b5ea) ncim_indicator_popup_pane_ParamLimits

0x8b51,	// (0x0004b604) ncim_query_content_pane_g1_ParamLimits

0x8b51,	// (0x0004b604) ncim_query_content_pane_g1

0x8b6b,	// (0x0004b61e) ncim_query_content_pane_t1_ParamLimits

0x8b7d,	// (0x0004b630) ncim_query_content_pane_t2_ParamLimits

0x8b8f,	// (0x0004b642) ncim_query_content_pane_t3_ParamLimits

0x8b8f,	// (0x0004b642) ncim_query_content_pane_t3

0x8bb7,	// (0x0004b66a) ncim_query_content_pane_t4_ParamLimits

0x8bb7,	// (0x0004b66a) ncim_query_content_pane_t4

0x8bdf,	// (0x0004b692) ncim_query_content_pane_t5_ParamLimits

0x8bdf,	// (0x0004b692) ncim_query_content_pane_t5

0x8c07,	// (0x0004b6ba) ncim_query_content_pane_t6_ParamLimits

0x8c07,	// (0x0004b6ba) ncim_query_content_pane_t6

0xfb2c,	// (0x000525df) ncim_query_content_pane_t_ParamLimits

0x8c2f,	// (0x0004b6e2) ncim_query_list_pane_ParamLimits

0x8c41,	// (0x0004b6f4) ncim_query_popup_pane_ParamLimits

0x8c55,	// (0x0004b708) wait_bar_pane_cp04

0xa6a9,	// (0x0004d15c) input_focus_pane_cp011

0x8c5d,	// (0x0004b710) ncim_query_popup_pane_t1

0x8c6b,	// (0x0004b71e) ncim_list_query_list_pane_ParamLimits

0x8c6b,	// (0x0004b71e) ncim_list_query_list_pane

0xa6a9,	// (0x0004d15c) bg_button_pane_cp027

0x8c7e,	// (0x0004b731) ncim_query_button_pane_g1

0xa6a9,	// (0x0004d15c) list_highlight_pane_cp012

0x8c88,	// (0x0004b73b) ncim_list_query_list_pane_g1

0x8c90,	// (0x0004b743) ncim_list_query_list_pane_t1

0xb01a,	// (0x0004dacd) cam4_indicators_pane_g3_ParamLimits

0xb01a,	// (0x0004dacd) cam4_indicators_pane_g3

0x6984,	// (0x00049437) vid4_indicators_pane_g5_ParamLimits

0x6984,	// (0x00049437) vid4_indicators_pane_g5

0xb01a,	// (0x0004dacd) vid4_progress_pane_g5_ParamLimits

0xb01a,	// (0x0004dacd) vid4_progress_pane_g5

0x8a3a,	// (0x0004b4ed) main_ncimui_pane_g1

0x8a90,	// (0x0004b543) ncimui_group_query_pane_ParamLimits

0x8a90,	// (0x0004b543) ncimui_group_query_pane

0x8acc,	// (0x0004b57f) ncimui_list_pane_ParamLimits

0x8acc,	// (0x0004b57f) ncimui_list_pane

0x8aed,	// (0x0004b5a0) ncimui_text_pane_ParamLimits

0x8aed,	// (0x0004b5a0) ncimui_text_pane

0x8c9e,	// (0x0004b751) ncimui_text_pane_t1_ParamLimits

0x8c9e,	// (0x0004b751) ncimui_text_pane_t1

0x8cbc,	// (0x0004b76f) ncimui_list_single_graphic_pane_ParamLimits

0x8cbc,	// (0x0004b76f) ncimui_list_single_graphic_pane

0x8ccc,	// (0x0004b77f) ncimui_query_pane_ParamLimits

0x8ccc,	// (0x0004b77f) ncimui_query_pane

0xa6a9,	// (0x0004d15c) list_highlight_pane_cp013

0x8cdf,	// (0x0004b792) ncim_list_query_list_pane_t1_copy1

0x8c88,	// (0x0004b73b) ncim_list_single_graphic_pane_g1

0x8ced,	// (0x0004b7a0) ncim_query_button_pane_cp01

0x8cf9,	// (0x0004b7ac) ncim_query_entry_pane_ParamLimits

0x8cf9,	// (0x0004b7ac) ncim_query_entry_pane

0x8d0c,	// (0x0004b7bf) ncimui_query_pane_g1

0x8d18,	// (0x0004b7cb) ncimui_query_pane_t1_ParamLimits

0x8d18,	// (0x0004b7cb) ncimui_query_pane_t1

0xa722,	// (0x0004d1d5) input_focus_pane_cp012

0x8d31,	// (0x0004b7e4) ncim_query_entry_pane_t1

0xc589,	// (0x0004f03c) main_im_pane_ParamLimits

0xa722,	// (0x0004d1d5) main_mobtv_pane_ParamLimits

0xa722,	// (0x0004d1d5) main_mobtv_pane

0x87c7,	// (0x0004b27a) main_cset6_slider_pane_g18_ParamLimits

0x87c7,	// (0x0004b27a) main_cset6_slider_pane_g18

0x87d3,	// (0x0004b286) main_cset6_slider_pane_g19_ParamLimits

0x87d3,	// (0x0004b286) main_cset6_slider_pane_g19

0x8d43,	// (0x0004b7f6) bg_main_mobtv_pane_ParamLimits

0x8d43,	// (0x0004b7f6) bg_main_mobtv_pane

0x8d51,	// (0x0004b804) main_mobtv_info_pane

0x8d5c,	// (0x0004b80f) main_mobtv_loading_pane_ParamLimits

0x8d5c,	// (0x0004b80f) main_mobtv_loading_pane

0x8d69,	// (0x0004b81c) main_mobtv_pg_channel_list_pane

0x8d73,	// (0x0004b826) main_mobtv_pg_hdr_pane

0x8d7c,	// (0x0004b82f) main_mobtv_programe_curr_pane_ParamLimits

0x8d7c,	// (0x0004b82f) main_mobtv_programe_curr_pane

0x8d89,	// (0x0004b83c) main_mobtv_programe_next_pane_ParamLimits

0x8d89,	// (0x0004b83c) main_mobtv_programe_next_pane

0x8d96,	// (0x0004b849) popup_mobtv_noti_window

0xe891,	// (0x00051344) main_tv_pg_hdr_pane_g1

0x8da0,	// (0x0004b853) main_tv_pg_hdr_pane_g2

0x8da8,	// (0x0004b85b) main_tv_pg_hdr_pane_g3

0x8db0,	// (0x0004b863) main_tv_pg_hdr_pane_g4

0x8db8,	// (0x0004b86b) main_tv_pg_hdr_pane_g5

0x8dc2,	// (0x0004b875) main_tv_pg_hdr_pane_g6

0x8dcc,	// (0x0004b87f) main_tv_pg_hdr_pane_g7

0x8dd6,	// (0x0004b889) main_tv_pg_hdr_pane_g8

0x8de0,	// (0x0004b893) main_tv_pg_hdr_pane_g9

0x8dea,	// (0x0004b89d) main_tv_pg_hdr_pane_g10

0x8df4,	// (0x0004b8a7) main_tv_pg_hdr_pane_g11

0x000a,

0xfb39,	// (0x000525ec) main_tv_pg_hdr_pane_g

0x8dfe,	// (0x0004b8b1) main_tv_pg_hdr_pane_t1

0x8e0c,	// (0x0004b8bf) main_tv_pg_hdr_pane_t2

0x8e1a,	// (0x0004b8cd) main_tv_pg_hdr_pane_t3

0x8e2a,	// (0x0004b8dd) main_tv_pg_hdr_pane_t4

0x8e3a,	// (0x0004b8ed) main_tv_pg_hdr_pane_t5

0x0004,

0xfb50,	// (0x00052603) main_tv_pg_hdr_pane_t

0x8e4a,	// (0x0004b8fd) single_mobtv_pg_channel_pane_ParamLimits

0x8e4a,	// (0x0004b8fd) single_mobtv_pg_channel_pane

0x8e5c,	// (0x0004b90f) single_mobtv_pg_channel_table_pane

0x8e65,	// (0x0004b918) single_mobtv_pg_channel_thumb_pane

0x8e6e,	// (0x0004b921) single_tv_pg_channel_pane_g1

0x8e77,	// (0x0004b92a) single_tv_pg_channel_pane_g2

0x0001,

0xfb5b,	// (0x0005260e) single_tv_pg_channel_pane_g

0xeac1,	// (0x00051574) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xeac1,	// (0x00051574) bg_single_mobtv_pg_channel_thumb_pane

0x8e80,	// (0x0004b933) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x8e80,	// (0x0004b933) single_mobtv_pg_channel_thumb_pane_g1

0x8e8e,	// (0x0004b941) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x8e8e,	// (0x0004b941) single_mobtv_pg_channel_thumb_pane_g2

0x8e9a,	// (0x0004b94d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x8e9a,	// (0x0004b94d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb60,	// (0x00052613) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb60,	// (0x00052613) single_mobtv_pg_channel_thumb_pane_g

0x8ea6,	// (0x0004b959) single_mobtv_pg_channel_thumb_pane_t1

0x8eb4,	// (0x0004b967) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb67,	// (0x0005261a) single_mobtv_pg_channel_thumb_pane_t

0xe891,	// (0x00051344) bg_single_mobtv_pg_channel_table_pane_g1

0xe891,	// (0x00051344) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x0096,	// (0x00042b49) bg_single_mobtv_pg_channel_table_pane_g

0x8ec2,	// (0x0004b975) single_mobtv_pg_channel_table_pane_t1

0x8ed0,	// (0x0004b983) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb6c,	// (0x0005261f) single_mobtv_pg_channel_table_pane_t

0x8ee6,	// (0x0004b999) main_mobtv_info_pane_g1_ParamLimits

0x8ee6,	// (0x0004b999) main_mobtv_info_pane_g1

0x8f04,	// (0x0004b9b7) main_mobtv_info_pane_t1_ParamLimits

0x8f04,	// (0x0004b9b7) main_mobtv_info_pane_t1

0x8f7c,	// (0x0004ba2f) main_mobtv_info_pane_t2_ParamLimits

0x8f7c,	// (0x0004ba2f) main_mobtv_info_pane_t2

0x0002,

0xfb76,	// (0x00052629) main_mobtv_info_pane_t_ParamLimits

0xfb76,	// (0x00052629) main_mobtv_info_pane_t

0x900d,	// (0x0004bac0) wait_bar_pane_cp05

0x901f,	// (0x0004bad2) main_mobtv_loading_pane_g1_ParamLimits

0x901f,	// (0x0004bad2) main_mobtv_loading_pane_g1

0x9030,	// (0x0004bae3) main_mobtv_loading_pane_g2_ParamLimits

0x9030,	// (0x0004bae3) main_mobtv_loading_pane_g2

0x903c,	// (0x0004baef) main_mobtv_loading_pane_g3_ParamLimits

0x903c,	// (0x0004baef) main_mobtv_loading_pane_g3

0x0002,

0xfb7d,	// (0x00052630) main_mobtv_loading_pane_g_ParamLimits

0xfb7d,	// (0x00052630) main_mobtv_loading_pane_g

0x904f,	// (0x0004bb02) main_mobtv_loading_pane_t1_ParamLimits

0x904f,	// (0x0004bb02) main_mobtv_loading_pane_t1

0x9067,	// (0x0004bb1a) main_mobtv_loading_pane_t2_ParamLimits

0x9067,	// (0x0004bb1a) main_mobtv_loading_pane_t2

0x0001,

0xfb84,	// (0x00052637) main_mobtv_loading_pane_t_ParamLimits

0xfb84,	// (0x00052637) main_mobtv_loading_pane_t

0x908b,	// (0x0004bb3e) wait_bar_pane_cp06_ParamLimits

0x908b,	// (0x0004bb3e) wait_bar_pane_cp06

0x909a,	// (0x0004bb4d) main_mobtv_programe_curr_pane_t1

0x90a8,	// (0x0004bb5b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb89,	// (0x0005263c) main_mobtv_programe_curr_pane_t

0x90b6,	// (0x0004bb69) main_mobtv_programe_next_pane_t1

0x90c4,	// (0x0004bb77) main_mobtv_programe_next_pane_t2

0x90d2,	// (0x0004bb85) main_mobtv_programe_next_pane_t3

0x0002,

0xfb8e,	// (0x00052641) main_mobtv_programe_next_pane_t

0xa6a9,	// (0x0004d15c) bg_popup_mobtv_noti_window_pane

0x90e0,	// (0x0004bb93) popup_mobtv_noti_window_g1

0x90e8,	// (0x0004bb9b) popup_mobtv_noti_window_t1

0x90f6,	// (0x0004bba9) popup_mobtv_noti_window_t2

0x0001,

0xfb95,	// (0x00052648) popup_mobtv_noti_window_t

0xe891,	// (0x00051344) bg_popup_mobtv_noti_window_pane_g1

0xa6a9,	// (0x0004d15c) sc_clock_pane

0xa6a9,	// (0x0004d15c) main_fs_bigclock_pane

0x8110,	// (0x0004abc3) blid2_tripm_pane_t4_ParamLimits

0x8110,	// (0x0004abc3) blid2_tripm_pane_t4

0x9104,	// (0x0004bbb7) sc_clock_pane_g1_ParamLimits

0x9104,	// (0x0004bbb7) sc_clock_pane_g1

0x9116,	// (0x0004bbc9) sc_clock_pane_t1_ParamLimits

0x9116,	// (0x0004bbc9) sc_clock_pane_t1

0x913a,	// (0x0004bbed) sc_clock_pane_t2_ParamLimits

0x913a,	// (0x0004bbed) sc_clock_pane_t2

0x9152,	// (0x0004bc05) sc_clock_pane_t3_ParamLimits

0x9152,	// (0x0004bc05) sc_clock_pane_t3

0x0004,

0xfb9a,	// (0x0005264d) sc_clock_pane_t_ParamLimits

0xfb9a,	// (0x0005264d) sc_clock_pane_t

0x9e36,	// (0x0004c8e9) main_fs_bigclock_indicator_pane_ParamLimits

0x9e36,	// (0x0004c8e9) main_fs_bigclock_indicator_pane

0xea91,	// (0x00051544) main_fs_bigclock_pane_g1_ParamLimits

0xea91,	// (0x00051544) main_fs_bigclock_pane_g1

0x9e42,	// (0x0004c8f5) main_fs_bigclock_pane_t1_ParamLimits

0x9e42,	// (0x0004c8f5) main_fs_bigclock_pane_t1

0x9e54,	// (0x0004c907) main_fs_bigclock_pane_t2_ParamLimits

0x9e54,	// (0x0004c907) main_fs_bigclock_pane_t2

0x9e68,	// (0x0004c91b) main_fs_bigclock_pane_t3_ParamLimits

0x9e68,	// (0x0004c91b) main_fs_bigclock_pane_t3

0x0002,

0xfd9e,	// (0x00052851) main_fs_bigclock_pane_t_ParamLimits

0xfd9e,	// (0x00052851) main_fs_bigclock_pane_t

0xbbb2,	// (0x0004e665) main_fs_bigclock_indicator_pane_g1

0x8b5d,	// (0x0004b610) ncim_query_content_pane_g2_ParamLimits

0x8b5d,	// (0x0004b610) ncim_query_content_pane_g2

0x0001,

0xfb27,	// (0x000525da) ncim_query_content_pane_g_ParamLimits

0xfb27,	// (0x000525da) ncim_query_content_pane_g

0x9169,	// (0x0004bc1c) sc_clock_pane_t4_ParamLimits

0x9169,	// (0x0004bc1c) sc_clock_pane_t4

0xa722,	// (0x0004d1d5) main_radioblah_pane

0x66c8,	// (0x0004917b) cell_call4_button_pane_t1_copy1_ParamLimits

0x66c8,	// (0x0004917b) cell_call4_button_pane_t1_copy1

0x8a42,	// (0x0004b4f5) main_ncimui_pane_t1_ParamLimits

0x8a42,	// (0x0004b4f5) main_ncimui_pane_t1

0x8a5c,	// (0x0004b50f) main_ncimui_pane_t2_ParamLimits

0x8a5c,	// (0x0004b50f) main_ncimui_pane_t2

0x0002,

0xfb20,	// (0x000525d3) main_ncimui_pane_t_ParamLimits

0xfb20,	// (0x000525d3) main_ncimui_pane_t

0x9345,	// (0x0004bdf8) main_radioblah_anim_pane_ParamLimits

0x9345,	// (0x0004bdf8) main_radioblah_anim_pane

0x9356,	// (0x0004be09) main_radioblah_info_pane_ParamLimits

0x9356,	// (0x0004be09) main_radioblah_info_pane

0x937c,	// (0x0004be2f) main_radioblah_pane_t1_ParamLimits

0x937c,	// (0x0004be2f) main_radioblah_pane_t1

0x9398,	// (0x0004be4b) main_radioblah_pane_t2_ParamLimits

0x9398,	// (0x0004be4b) main_radioblah_pane_t2

0x0003,

0xfbbb,	// (0x0005266e) main_radioblah_pane_t_ParamLimits

0xfbbb,	// (0x0005266e) main_radioblah_pane_t

0x93e0,	// (0x0004be93) main_radioblah_rocker_ctrl_pane_ParamLimits

0x93e0,	// (0x0004be93) main_radioblah_rocker_ctrl_pane

0x9438,	// (0x0004beeb) main_radioblah_info_pane_t1_ParamLimits

0x9438,	// (0x0004beeb) main_radioblah_info_pane_t1

0x9472,	// (0x0004bf25) main_radioblah_info_pane_t2_ParamLimits

0x9472,	// (0x0004bf25) main_radioblah_info_pane_t2

0x0003,

0xfbc4,	// (0x00052677) main_radioblah_info_pane_t_ParamLimits

0xfbc4,	// (0x00052677) main_radioblah_info_pane_t

0xe891,	// (0x00051344) main_radioblah_rocker_ctrl_pane_g1

0x9522,	// (0x0004bfd5) main_radioblah_rocker_ctrl_pane_g2

0x952a,	// (0x0004bfdd) main_radioblah_rocker_ctrl_pane_g3

0x9532,	// (0x0004bfe5) main_radioblah_rocker_ctrl_pane_g4

0x953a,	// (0x0004bfed) main_radioblah_rocker_ctrl_pane_g5

0x9542,	// (0x0004bff5) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbcd,	// (0x00052680) main_radioblah_rocker_ctrl_pane_g

0x863f,	// (0x0004b0f2) main_cset_text2_pane_t1_copy1_ParamLimits

0xafec,	// (0x0004da9f) cam4_image_uncrop_qvga_pane

0xb042,	// (0x0004daf5) vid4_image_uncrop_qcif_pane

0xb245,	// (0x0004dcf8) cam6_image_uncrop_qvga_pane_ParamLimits

0xb245,	// (0x0004dcf8) cam6_image_uncrop_qvga_pane

0x84f7,	// (0x0004afaa) vid6_image_uncrop_qcif_pane_ParamLimits

0x84f7,	// (0x0004afaa) vid6_image_uncrop_qcif_pane

0xa6a9,	// (0x0004d15c) bg_popup_preview_window_pane_cp03

0x8a0a,	// (0x0004b4bd) list_cset_text2_pane

0x8a12,	// (0x0004b4c5) main_cset6_text2_pane_g1

0x8a1a,	// (0x0004b4cd) main_cset6_text2_pane_t1

0x954a,	// (0x0004bffd) list_cset_text2_pane_t1_ParamLimits

0x954a,	// (0x0004bffd) list_cset_text2_pane_t1

0xa722,	// (0x0004d1d5) main_radioblah_pane_ParamLimits

0x8ff9,	// (0x0004baac) main_mobtv_info_pane_t3_ParamLimits

0x8ff9,	// (0x0004baac) main_mobtv_info_pane_t3

0x936a,	// (0x0004be1d) main_radioblah_pane_g1

0x9408,	// (0x0004bebb) main_radioblah_info_pane_g1

0x94c7,	// (0x0004bf7a) main_radioblah_info_pane_t3_ParamLimits

0x94c7,	// (0x0004bf7a) main_radioblah_info_pane_t3

0x2e78,	// (0x0004592b) highlight_cell_cale_month_pane_ParamLimits

0x2e78,	// (0x0004592b) highlight_cell_cale_month_pane

0xa6a9,	// (0x0004d15c) main_phob_fisheye_pane

0xeba3,	// (0x00051656) scroll_pane_cp0031_ParamLimits

0xeba3,	// (0x00051656) scroll_pane_cp0031

0x8630,	// (0x0004b0e3) wait_bar_pane_cp08_ParamLimits

0x86e9,	// (0x0004b19c) cset_list_set_pane_copy1_ParamLimits

0x9564,	// (0x0004c017) highlight_cell_cale_month_pane_g1

0x956c,	// (0x0004c01f) highlight_cell_cale_month_pane_t1

0x7ceb,	// (0x0004a79e) list_gen_pane_cp01

0x70fa,	// (0x00049bad) scroll_pane_01

0x957a,	// (0x0004c02d) list_single_double_fisheye_pane

0x0ddf,	// (0x00043892) list_double_fisheye_pane_g1_ParamLimits

0x0ddf,	// (0x00043892) list_double_fisheye_pane_g1

0x0deb,	// (0x0004389e) list_double_fisheye_pane_g2_ParamLimits

0x0deb,	// (0x0004389e) list_double_fisheye_pane_g2

0x9583,	// (0x0004c036) list_double_fisheye_pane_g3_ParamLimits

0x9583,	// (0x0004c036) list_double_fisheye_pane_g3

0x0004,

0xfbda,	// (0x0005268d) list_double_fisheye_pane_g_ParamLimits

0xfbda,	// (0x0005268d) list_double_fisheye_pane_g

0x0e1c,	// (0x000438cf) list_double_fisheye_pane_t1_ParamLimits

0x0e1c,	// (0x000438cf) list_double_fisheye_pane_t1

0x0e37,	// (0x000438ea) list_double_fisheye_pane_t2_ParamLimits

0x0e37,	// (0x000438ea) list_double_fisheye_pane_t2

0x0001,

0xfbe5,	// (0x00052698) list_double_fisheye_pane_t_ParamLimits

0xfbe5,	// (0x00052698) list_double_fisheye_pane_t

0xa6a9,	// (0x0004d15c) main_call5_pane

0x9194,	// (0x0004bc47) sc_swipe_pane_ParamLimits

0x9194,	// (0x0004bc47) sc_swipe_pane

0x95a2,	// (0x0004c055) call5_image_pane_ParamLimits

0x95a2,	// (0x0004c055) call5_image_pane

0x95bf,	// (0x0004c072) call5_swipe_1_pane_ParamLimits

0x95bf,	// (0x0004c072) call5_swipe_1_pane

0x95d2,	// (0x0004c085) call5_swipe_2_pane_ParamLimits

0x95d2,	// (0x0004c085) call5_swipe_2_pane

0x95ff,	// (0x0004c0b2) popup_call5_audio_first_window_ParamLimits

0x95ff,	// (0x0004c0b2) popup_call5_audio_first_window

0xeac1,	// (0x00051574) call5_swipe_1_pane_g1_ParamLimits

0xeac1,	// (0x00051574) call5_swipe_1_pane_g1

0x9614,	// (0x0004c0c7) call5_swipe_1_pane_g2_ParamLimits

0x9614,	// (0x0004c0c7) call5_swipe_1_pane_g2

0x0001,

0xfbea,	// (0x0005269d) call5_swipe_1_pane_g_ParamLimits

0xfbea,	// (0x0005269d) call5_swipe_1_pane_g

0x9620,	// (0x0004c0d3) call5_swipe_1_pane_t1_ParamLimits

0x9620,	// (0x0004c0d3) call5_swipe_1_pane_t1

0xeac1,	// (0x00051574) call5_swipe_2_pane_g1_ParamLimits

0xeac1,	// (0x00051574) call5_swipe_2_pane_g1

0x9635,	// (0x0004c0e8) call5_swipe_2_pane_g2_ParamLimits

0x9635,	// (0x0004c0e8) call5_swipe_2_pane_g2

0x0001,

0xfbef,	// (0x000526a2) call5_swipe_2_pane_g_ParamLimits

0xfbef,	// (0x000526a2) call5_swipe_2_pane_g

0x9641,	// (0x0004c0f4) call5_swipe_2_pane_t1_ParamLimits

0x9641,	// (0x0004c0f4) call5_swipe_2_pane_t1

0x9656,	// (0x0004c109) sc_swipe_pane_g1_ParamLimits

0x9656,	// (0x0004c109) sc_swipe_pane_g1

0x9663,	// (0x0004c116) sc_swipe_pane_g2_ParamLimits

0x9663,	// (0x0004c116) sc_swipe_pane_g2

0x0001,

0xfbf4,	// (0x000526a7) sc_swipe_pane_g_ParamLimits

0xfbf4,	// (0x000526a7) sc_swipe_pane_g

0x966f,	// (0x0004c122) sc_swipe_pane_t1_ParamLimits

0x966f,	// (0x0004c122) sc_swipe_pane_t1

0xa6a9,	// (0x0004d15c) main_cmail_launcher_pane

0x9684,	// (0x0004c137) aid_size_cell_cmail_l_ParamLimits

0x9684,	// (0x0004c137) aid_size_cell_cmail_l

0x969e,	// (0x0004c151) grid_cmail_l_pane_ParamLimits

0x969e,	// (0x0004c151) grid_cmail_l_pane

0x96b9,	// (0x0004c16c) cell_cmail_l_pane_ParamLimits

0x96b9,	// (0x0004c16c) cell_cmail_l_pane

0x96e1,	// (0x0004c194) cell_cmail_l_pane_g1_ParamLimits

0x96e1,	// (0x0004c194) cell_cmail_l_pane_g1

0x96ed,	// (0x0004c1a0) cell_cmail_l_pane_t1_ParamLimits

0x96ed,	// (0x0004c1a0) cell_cmail_l_pane_t1

0x9703,	// (0x0004c1b6) cell_cmail_l_pane_t2_ParamLimits

0x9703,	// (0x0004c1b6) cell_cmail_l_pane_t2

0x0001,

0xfbf9,	// (0x000526ac) cell_cmail_l_pane_t_ParamLimits

0xfbf9,	// (0x000526ac) cell_cmail_l_pane_t

0xa722,	// (0x0004d1d5) grid_highlight_pane_cp018_ParamLimits

0xa722,	// (0x0004d1d5) grid_highlight_pane_cp018

0x14f5,	// (0x00043fa8) main2_pane_ParamLimits

0x14f5,	// (0x00043fa8) main2_pane

0xc634,	// (0x0004f0e7) popup_sp_fs_action_menu_bg_pane_g1

0xc63c,	// (0x0004f0ef) popup_sp_fs_action_menu_bg_pane_g2

0xc644,	// (0x0004f0f7) popup_sp_fs_action_menu_bg_pane_g3

0xc64c,	// (0x0004f0ff) popup_sp_fs_action_menu_bg_pane_g4

0xc654,	// (0x0004f107) popup_sp_fs_action_menu_bg_pane_g5

0xc65c,	// (0x0004f10f) popup_sp_fs_action_menu_bg_pane_g6

0xc664,	// (0x0004f117) popup_sp_fs_action_menu_bg_pane_g7

0xc66c,	// (0x0004f11f) popup_sp_fs_action_menu_bg_pane_g8

0xc674,	// (0x0004f127) popup_sp_fs_action_menu_bg_pane_g9

0xc67c,	// (0x0004f12f) popup_sp_fs_action_menu_bg_pane_g10

0xc67c,	// (0x0004f12f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x00051c5a) popup_sp_fs_action_menu_bg_pane_g

0xaa3f,	// (0x0004d4f2) list_medium_line_x2_t3_g3_g1_ParamLimits

0xaa3f,	// (0x0004d4f2) list_medium_line_x2_t3_g3_g1

0xaa4b,	// (0x0004d4fe) list_medium_line_x2_t3_g3_g2_ParamLimits

0xaa4b,	// (0x0004d4fe) list_medium_line_x2_t3_g3_g2

0xaa57,	// (0x0004d50a) list_medium_line_x2_t3_g3_g3_ParamLimits

0xaa57,	// (0x0004d50a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x00051d0a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x00051d0a) list_medium_line_x2_t3_g3_g

0xaa63,	// (0x0004d516) list_medium_line_x2_t3_g3_t1_ParamLimits

0xaa63,	// (0x0004d516) list_medium_line_x2_t3_g3_t1

0x0909,	// (0x000433bc) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0909,	// (0x000433bc) list_medium_line_x2_t3_g3_t2

0xaa78,	// (0x0004d52b) list_medium_line_x2_t3_g3_t3_ParamLimits

0xaa78,	// (0x0004d52b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x00051d11) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x00051d11) list_medium_line_x2_t3_g3_t

0xaa3f,	// (0x0004d4f2) list_medium_line_x2_t3_g2_g1_ParamLimits

0xaa3f,	// (0x0004d4f2) list_medium_line_x2_t3_g2_g1

0xaa57,	// (0x0004d50a) list_medium_line_x2_t3_g2_g2_ParamLimits

0xaa57,	// (0x0004d50a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x00051d18) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x00051d18) list_medium_line_x2_t3_g2_g

0xaa8d,	// (0x0004d540) list_medium_line_x2_t3_g2_t1_ParamLimits

0xaa8d,	// (0x0004d540) list_medium_line_x2_t3_g2_t1

0xaaa3,	// (0x0004d556) list_medium_line_x2_t3_g2_t2_ParamLimits

0xaaa3,	// (0x0004d556) list_medium_line_x2_t3_g2_t2

0xaab5,	// (0x0004d568) list_medium_line_x2_t3_g2_t3_ParamLimits

0xaab5,	// (0x0004d568) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x00051d1d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x00051d1d) list_medium_line_x2_t3_g2_t

0xaa3f,	// (0x0004d4f2) list_medium_line_x2_t4_g4_g1_ParamLimits

0xaa3f,	// (0x0004d4f2) list_medium_line_x2_t4_g4_g1

0xaad3,	// (0x0004d586) list_medium_line_x2_t4_g4_g2_ParamLimits

0xaad3,	// (0x0004d586) list_medium_line_x2_t4_g4_g2

0xaa4b,	// (0x0004d4fe) list_medium_line_x2_t4_g4_g3_ParamLimits

0xaa4b,	// (0x0004d4fe) list_medium_line_x2_t4_g4_g3

0xaadf,	// (0x0004d592) list_medium_line_x2_t4_g4_g4_ParamLimits

0xaadf,	// (0x0004d592) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x00051d24) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x00051d24) list_medium_line_x2_t4_g4_g

0x091d,	// (0x000433d0) list_medium_line_x2_t4_g4_t1_ParamLimits

0x091d,	// (0x000433d0) list_medium_line_x2_t4_g4_t1

0x0937,	// (0x000433ea) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0937,	// (0x000433ea) list_medium_line_x2_t4_g4_t2

0x094d,	// (0x00043400) list_medium_line_x2_t4_g4_t3_ParamLimits

0x094d,	// (0x00043400) list_medium_line_x2_t4_g4_t3

0xaaeb,	// (0x0004d59e) list_medium_line_x2_t4_g4_t4_ParamLimits

0xaaeb,	// (0x0004d59e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x00051d2d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x00051d2d) list_medium_line_x2_t4_g4_t

0xaa3f,	// (0x0004d4f2) list_medium_line_x2_t2_g4_g1_ParamLimits

0xaa3f,	// (0x0004d4f2) list_medium_line_x2_t2_g4_g1

0xaad3,	// (0x0004d586) list_medium_line_x2_t2_g4_g2_ParamLimits

0xaad3,	// (0x0004d586) list_medium_line_x2_t2_g4_g2

0xaa4b,	// (0x0004d4fe) list_medium_line_x2_t2_g4_g3_ParamLimits

0xaa4b,	// (0x0004d4fe) list_medium_line_x2_t2_g4_g3

0xaa57,	// (0x0004d50a) list_medium_line_x2_t2_g4_g4_ParamLimits

0xaa57,	// (0x0004d50a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x00051d94) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x00051d94) list_medium_line_x2_t2_g4_g

0xaafd,	// (0x0004d5b0) list_medium_line_x2_t2_g4_t1_ParamLimits

0xaafd,	// (0x0004d5b0) list_medium_line_x2_t2_g4_t1

0xaa78,	// (0x0004d52b) list_medium_line_x2_t2_g4_t2_ParamLimits

0xaa78,	// (0x0004d52b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x00051d9d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x00051d9d) list_medium_line_x2_t2_g4_t

0xaa3f,	// (0x0004d4f2) list_medium_line_x2_t2_g3_g1_ParamLimits

0xaa3f,	// (0x0004d4f2) list_medium_line_x2_t2_g3_g1

0xaa4b,	// (0x0004d4fe) list_medium_line_x2_t2_g3_g2_ParamLimits

0xaa4b,	// (0x0004d4fe) list_medium_line_x2_t2_g3_g2

0xaa57,	// (0x0004d50a) list_medium_line_x2_t2_g3_g3_ParamLimits

0xaa57,	// (0x0004d50a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x00051d0a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x00051d0a) list_medium_line_x2_t2_g3_g

0xab12,	// (0x0004d5c5) list_medium_line_x2_t2_g3_t1_ParamLimits

0xab12,	// (0x0004d5c5) list_medium_line_x2_t2_g3_t1

0xaa78,	// (0x0004d52b) list_medium_line_x2_t2_g3_t2_ParamLimits

0xaa78,	// (0x0004d52b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x00051da2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x00051da2) list_medium_line_x2_t2_g3_t

0x3051,	// (0x00045b04) main_sp_fs_list_pane_ParamLimits

0x3051,	// (0x00045b04) main_sp_fs_list_pane

0x305d,	// (0x00045b10) sp_fs_scroll_pane_ParamLimits

0x305d,	// (0x00045b10) sp_fs_scroll_pane

0x0962,	// (0x00043415) list_medium_line_x2_t3_t1

0x0972,	// (0x00043425) list_medium_line_x2_t3_t2

0xab55,	// (0x0004d608) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x00051ded) list_medium_line_x2_t3_t

0x0980,	// (0x00043433) list_medium_line_x3_t4_t1

0x0990,	// (0x00043443) list_medium_line_x3_t4_t2

0xab63,	// (0x0004d616) list_medium_line_x3_t4_t3

0xab55,	// (0x0004d608) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x00051df4) list_medium_line_x3_t4_t

0x099e,	// (0x00043451) list_medium_line_x4_t5_t1

0x09ae,	// (0x00043461) list_medium_line_x4_t5_t2

0xab63,	// (0x0004d616) list_medium_line_x4_t5_t3

0xab71,	// (0x0004d624) list_medium_line_x4_t5_t4

0xab55,	// (0x0004d608) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x00051dfd) list_medium_line_x4_t5_t

0xaa3f,	// (0x0004d4f2) list_medium_line_t4_g4_g1_ParamLimits

0xaa3f,	// (0x0004d4f2) list_medium_line_t4_g4_g1

0xaadf,	// (0x0004d592) list_medium_line_t4_g4_g2_ParamLimits

0xaadf,	// (0x0004d592) list_medium_line_t4_g4_g2

0xab7f,	// (0x0004d632) list_medium_line_t4_g4_g3_ParamLimits

0xab7f,	// (0x0004d632) list_medium_line_t4_g4_g3

0xaa57,	// (0x0004d50a) list_medium_line_t4_g4_g4_ParamLimits

0xaa57,	// (0x0004d50a) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x00051e08) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x00051e08) list_medium_line_t4_g4_g

0xab8b,	// (0x0004d63e) list_medium_line_t4_g4_t1_ParamLimits

0xab8b,	// (0x0004d63e) list_medium_line_t4_g4_t1

0xaba0,	// (0x0004d653) list_medium_line_t4_g4_t2_ParamLimits

0xaba0,	// (0x0004d653) list_medium_line_t4_g4_t2

0xabb6,	// (0x0004d669) list_medium_line_t4_g4_t3_ParamLimits

0xabb6,	// (0x0004d669) list_medium_line_t4_g4_t3

0xaa78,	// (0x0004d52b) list_medium_line_t4_g4_t4_ParamLimits

0xaa78,	// (0x0004d52b) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x00051e11) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x00051e11) list_medium_line_t4_g4_t

0x312f,	// (0x00045be2) chi_dic_find_pane_g1

0x42ce,	// (0x00046d81) main_tport_pane

0xb0d0,	// (0x0004db83) list_medium_line_plain_t1

0xb11a,	// (0x0004dbcd) list_medium_line_t2_g2_g1_ParamLimits

0xb11a,	// (0x0004dbcd) list_medium_line_t2_g2_g1

0xb126,	// (0x0004dbd9) list_medium_line_t2_g2_g2_ParamLimits

0xb126,	// (0x0004dbd9) list_medium_line_t2_g2_g2

0x0001,

0xf936,	// (0x000523e9) list_medium_line_t2_g2_g_ParamLimits

0xf936,	// (0x000523e9) list_medium_line_t2_g2_g

0x0c0d,	// (0x000436c0) list_medium_line_t2_g2_t1_ParamLimits

0x0c0d,	// (0x000436c0) list_medium_line_t2_g2_t1

0x0c24,	// (0x000436d7) list_medium_line_t2_g2_t2_ParamLimits

0x0c24,	// (0x000436d7) list_medium_line_t2_g2_t2

0x0001,

0xf93b,	// (0x000523ee) list_medium_line_t2_g2_t_ParamLimits

0xf93b,	// (0x000523ee) list_medium_line_t2_g2_t

0xb1eb,	// (0x0004dc9e) aid_sp_fs_list_icon_a_sm

0xb1f3,	// (0x0004dca6) aid_sp_fs_list_icon_d

0xb1fb,	// (0x0004dcae) aid_sp_fs_text_primary

0xb204,	// (0x0004dcb7) aid_sp_fs_text_secondary

0xb20d,	// (0x0004dcc0) list_medium_line

0xb20d,	// (0x0004dcc0) list_medium_line_g2

0xb20d,	// (0x0004dcc0) list_medium_line_g3

0xb20d,	// (0x0004dcc0) list_medium_line_plain

0xb20d,	// (0x0004dcc0) list_medium_line_plain_t2

0xb20d,	// (0x0004dcc0) list_medium_line_plain_t3

0xb20d,	// (0x0004dcc0) list_medium_line_right_icon

0xb20d,	// (0x0004dcc0) list_medium_line_right_iconx2

0xb20d,	// (0x0004dcc0) list_medium_line_t2

0xb20d,	// (0x0004dcc0) list_medium_line_t2_g2

0xb20d,	// (0x0004dcc0) list_medium_line_t2_g3

0xb20d,	// (0x0004dcc0) list_medium_line_t2_right_icon

0xb20d,	// (0x0004dcc0) list_medium_line_t2_right_iconx2

0xb20d,	// (0x0004dcc0) list_medium_line_t3

0xb20d,	// (0x0004dcc0) list_medium_line_t3_g2

0xb20d,	// (0x0004dcc0) list_medium_line_t3_g3

0xb20d,	// (0x0004dcc0) list_medium_line_t3_right_iconx2

0xb216,	// (0x0004dcc9) list_medium_line_t4_g4

0xb21f,	// (0x0004dcd2) list_medium_line_x2

0xb21f,	// (0x0004dcd2) list_medium_line_x2_t2_g2

0xb21f,	// (0x0004dcd2) list_medium_line_x2_t2_g3

0xb21f,	// (0x0004dcd2) list_medium_line_x2_t2_g4

0xb21f,	// (0x0004dcd2) list_medium_line_x2_t3

0xb21f,	// (0x0004dcd2) list_medium_line_x2_t3_g2

0xb21f,	// (0x0004dcd2) list_medium_line_x2_t3_g3

0xb21f,	// (0x0004dcd2) list_medium_line_x2_t3_g4

0xb21f,	// (0x0004dcd2) list_medium_line_x2_t4_g2

0xb21f,	// (0x0004dcd2) list_medium_line_x2_t4_g4

0xb228,	// (0x0004dcdb) list_medium_line_x3

0xb228,	// (0x0004dcdb) list_medium_line_x3_t4

0xb228,	// (0x0004dcdb) list_medium_line_x3_t4_g4

0xb216,	// (0x0004dcc9) list_medium_line_x4_t4

0xb216,	// (0x0004dcc9) list_medium_line_x4_t4_g7

0xb216,	// (0x0004dcc9) list_medium_line_x4_t5

0xb231,	// (0x0004dce4) list_single_fs_dyc_pane_ParamLimits

0xb231,	// (0x0004dce4) list_single_fs_dyc_pane

0xaa3f,	// (0x0004d4f2) list_medium_line_x4_t4_g7_g1_ParamLimits

0xaa3f,	// (0x0004d4f2) list_medium_line_x4_t4_g7_g1

0xb253,	// (0x0004dd06) list_medium_line_x4_t4_g7_g2_ParamLimits

0xb253,	// (0x0004dd06) list_medium_line_x4_t4_g7_g2

0xb25f,	// (0x0004dd12) list_medium_line_x4_t4_g7_g3_ParamLimits

0xb25f,	// (0x0004dd12) list_medium_line_x4_t4_g7_g3

0xb26e,	// (0x0004dd21) list_medium_line_x4_t4_g7_g4_ParamLimits

0xb26e,	// (0x0004dd21) list_medium_line_x4_t4_g7_g4

0xb27a,	// (0x0004dd2d) list_medium_line_x4_t4_g7_g5_ParamLimits

0xb27a,	// (0x0004dd2d) list_medium_line_x4_t4_g7_g5

0xb289,	// (0x0004dd3c) list_medium_line_x4_t4_g7_g6_ParamLimits

0xb289,	// (0x0004dd3c) list_medium_line_x4_t4_g7_g6

0xb298,	// (0x0004dd4b) list_medium_line_x4_t4_g7_g7_ParamLimits

0xb298,	// (0x0004dd4b) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb06,	// (0x000525b9) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb06,	// (0x000525b9) list_medium_line_x4_t4_g7_g

0xb2a4,	// (0x0004dd57) list_medium_line_x4_t4_g7_t1_ParamLimits

0xb2a4,	// (0x0004dd57) list_medium_line_x4_t4_g7_t1

0xb2b9,	// (0x0004dd6c) list_medium_line_x4_t4_g7_t2_ParamLimits

0xb2b9,	// (0x0004dd6c) list_medium_line_x4_t4_g7_t2

0xb2ce,	// (0x0004dd81) list_medium_line_x4_t4_g7_t3_ParamLimits

0xb2ce,	// (0x0004dd81) list_medium_line_x4_t4_g7_t3

0xb2e3,	// (0x0004dd96) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb2e3,	// (0x0004dd96) list_medium_line_x4_t4_g7_t4

0xb2f5,	// (0x0004dda8) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb2f5,	// (0x0004dda8) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb15,	// (0x000525c8) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb15,	// (0x000525c8) list_medium_line_x4_t4_g7_t

0xb307,	// (0x0004ddba) list_single_dyc_row_pane_ParamLimits

0xb307,	// (0x0004ddba) list_single_dyc_row_pane

0x958f,	// (0x0004c042) call5_gesture_pane_ParamLimits

0x958f,	// (0x0004c042) call5_gesture_pane

0x95e5,	// (0x0004c098) call5_windows_pane_ParamLimits

0x95e5,	// (0x0004c098) call5_windows_pane

0x9715,	// (0x0004c1c8) call5_swipe_1_pane_cp_ParamLimits

0x9715,	// (0x0004c1c8) call5_swipe_1_pane_cp

0x9721,	// (0x0004c1d4) call5_swipe_2_pane_cp_ParamLimits

0x9721,	// (0x0004c1d4) call5_swipe_2_pane_cp

0xcfd1,	// (0x0004fa84) call5_image_pane_cp

0x972d,	// (0x0004c1e0) popup_call5_audio_first_window_cp_ParamLimits

0x972d,	// (0x0004c1e0) popup_call5_audio_first_window_cp

0x9656,	// (0x0004c109) call5_swipe_1_pane_g1_cp_ParamLimits

0x9656,	// (0x0004c109) call5_swipe_1_pane_g1_cp

0x973b,	// (0x0004c1ee) call5_swipe_1_pane_g2_cp

0x966f,	// (0x0004c122) call5_swipe_1_pane_t1_cp_ParamLimits

0x966f,	// (0x0004c122) call5_swipe_1_pane_t1_cp

0x9656,	// (0x0004c109) call5_swipe_2_pane_g1_cp_ParamLimits

0x9656,	// (0x0004c109) call5_swipe_2_pane_g1_cp

0x9743,	// (0x0004c1f6) call5_swipe_2_pane_g2_cp

0x974b,	// (0x0004c1fe) call5_swipe_2_pane_t1_cp_ParamLimits

0x974b,	// (0x0004c1fe) call5_swipe_2_pane_t1_cp

0xa722,	// (0x0004d1d5) main_sp_fs_email_pane

0x9760,	// (0x0004c213) main_sp_fs_listscroll_pane_te

0xb324,	// (0x0004ddd7) popup_sp_fs_action_menu_pane_ParamLimits

0xb324,	// (0x0004ddd7) popup_sp_fs_action_menu_pane

0xe891,	// (0x00051344) bg_sp_fs_ctrlbar_pane_g1

0x9769,	// (0x0004c21c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x9772,	// (0x0004c225) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x977b,	// (0x0004c22e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe891,	// (0x00051344) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbfe,	// (0x000526b1) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe668,	// (0x0005111b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe668,	// (0x0005111b) bg_sp_fs_ctrlbar_ddmenu_pane

0x9784,	// (0x0004c237) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x9784,	// (0x0004c237) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x9790,	// (0x0004c243) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x9790,	// (0x0004c243) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc07,	// (0x000526ba) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc07,	// (0x000526ba) main_sp_fs_ctrlbar_ddmenu_pane_g

0x979c,	// (0x0004c24f) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x979c,	// (0x0004c24f) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xb36a,	// (0x0004de1d) list_medium_line_t2_right_icon_g1

0x0e59,	// (0x0004390c) list_medium_line_t2_right_icon_t1

0x0e69,	// (0x0004391c) list_medium_line_t2_right_icon_t2

0x0001,

0xfc0c,	// (0x000526bf) list_medium_line_t2_right_icon_t

0xe40e,	// (0x00050ec1) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe40e,	// (0x00050ec1) bg_sp_fs_ctrlbar_pane

0x9838,	// (0x0004c2eb) main_sp_fs_ctrlbar_button_pane_cp01

0x9842,	// (0x0004c2f5) main_sp_fs_ctrlbar_ddmenu_pane

0x984c,	// (0x0004c2ff) main_sp_fs_ctrlbar_pane_g1

0x9858,	// (0x0004c30b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfc11,	// (0x000526c4) main_sp_fs_ctrlbar_pane_g

0x9864,	// (0x0004c317) main_sp_fs_ctrlbar_pane_t1

0x0e7b,	// (0x0004392e) main_sp_fs_ctrlbar_pane

0x0e9f,	// (0x00043952) main_sp_fs_listscroll_pane_te_cp01

0x0ebf,	// (0x00043972) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0ebf,	// (0x00043972) popup_sp_fs_action_menu_pane_cp01

0xa722,	// (0x0004d1d5) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa722,	// (0x0004d1d5) bg_sp_fs_highlight_list_pane_cp01

0xb372,	// (0x0004de25) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xb372,	// (0x0004de25) sp_fs_action_menu_list_gene_pane_g1

0x9889,	// (0x0004c33c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x9889,	// (0x0004c33c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc1b,	// (0x000526ce) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc1b,	// (0x000526ce) sp_fs_action_menu_list_gene_pane_g

0xb381,	// (0x0004de34) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xb381,	// (0x0004de34) sp_fs_action_menu_list_gene_pane_t1

0xb399,	// (0x0004de4c) sp_fs_action_menu_list_gene_pane_ParamLimits

0xb399,	// (0x0004de4c) sp_fs_action_menu_list_gene_pane

0x9896,	// (0x0004c349) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x9896,	// (0x0004c349) popup_sp_fs_action_menu_bg_pane

0xb3bc,	// (0x0004de6f) sp_fs_action_menu_list_pane_ParamLimits

0xb3bc,	// (0x0004de6f) sp_fs_action_menu_list_pane

0x98a4,	// (0x0004c357) sp_fs_scroll_pane_cp01_ParamLimits

0x98a4,	// (0x0004c357) sp_fs_scroll_pane_cp01

0x0edb,	// (0x0004398e) list_medium_line_plain_t2_t1

0x0eeb,	// (0x0004399e) list_medium_line_plain_t2_t2

0x0001,

0xfc20,	// (0x000526d3) list_medium_line_plain_t2_t

0x0efb,	// (0x000439ae) list_medium_line_plain_t3_t1

0x0f0b,	// (0x000439be) list_medium_line_plain_t3_t2

0x0f19,	// (0x000439cc) list_medium_line_plain_t3_t3

0x0002,

0xfc25,	// (0x000526d8) list_medium_line_plain_t3_t

0xaa3f,	// (0x0004d4f2) list_medium_line_x2_t2_g2_g1_ParamLimits

0xaa3f,	// (0x0004d4f2) list_medium_line_x2_t2_g2_g1

0xaa57,	// (0x0004d50a) list_medium_line_x2_t2_g2_g2_ParamLimits

0xaa57,	// (0x0004d50a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x00051d18) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x00051d18) list_medium_line_x2_t2_g2_g

0xab8b,	// (0x0004d63e) list_medium_line_x2_t2_g2_t1_ParamLimits

0xab8b,	// (0x0004d63e) list_medium_line_x2_t2_g2_t1

0xaa78,	// (0x0004d52b) list_medium_line_x2_t2_g2_t2_ParamLimits

0xaa78,	// (0x0004d52b) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc2c,	// (0x000526df) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc2c,	// (0x000526df) list_medium_line_x2_t2_g2_t

0xaa3f,	// (0x0004d4f2) list_medium_line_x2_t4_g2_g1_ParamLimits

0xaa3f,	// (0x0004d4f2) list_medium_line_x2_t4_g2_g1

0xb3e0,	// (0x0004de93) list_medium_line_x2_t4_g2_g2_ParamLimits

0xb3e0,	// (0x0004de93) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc31,	// (0x000526e4) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc31,	// (0x000526e4) list_medium_line_x2_t4_g2_g

0x0f27,	// (0x000439da) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0f27,	// (0x000439da) list_medium_line_x2_t4_g2_t1

0x0f41,	// (0x000439f4) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0f41,	// (0x000439f4) list_medium_line_x2_t4_g2_t2

0x0f57,	// (0x00043a0a) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0f57,	// (0x00043a0a) list_medium_line_x2_t4_g2_t3

0xaa78,	// (0x0004d52b) list_medium_line_x2_t4_g2_t4_ParamLimits

0xaa78,	// (0x0004d52b) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc36,	// (0x000526e9) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc36,	// (0x000526e9) list_medium_line_x2_t4_g2_t

0xb3f2,	// (0x0004dea5) list_medium_line_t3_right_iconx2_g1

0xb36a,	// (0x0004de1d) list_medium_line_t3_right_iconx2_g2

0x0f6c,	// (0x00043a1f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc3f,	// (0x000526f2) list_medium_line_t3_right_iconx2_g

0x0f76,	// (0x00043a29) list_medium_line_t3_right_iconx2_t1

0x0f86,	// (0x00043a39) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc46,	// (0x000526f9) list_medium_line_t3_right_iconx2_t

0xaa3f,	// (0x0004d4f2) list_medium_line_x3_t4_g4_g1_ParamLimits

0xaa3f,	// (0x0004d4f2) list_medium_line_x3_t4_g4_g1

0xaa4b,	// (0x0004d4fe) list_medium_line_x3_t4_g4_g2_ParamLimits

0xaa4b,	// (0x0004d4fe) list_medium_line_x3_t4_g4_g2

0xaadf,	// (0x0004d592) list_medium_line_x3_t4_g4_g3_ParamLimits

0xaadf,	// (0x0004d592) list_medium_line_x3_t4_g4_g3

0xb3fa,	// (0x0004dead) list_medium_line_x3_t4_g4_g4_ParamLimits

0xb3fa,	// (0x0004dead) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc4b,	// (0x000526fe) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc4b,	// (0x000526fe) list_medium_line_x3_t4_g4_g

0x0f94,	// (0x00043a47) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0f94,	// (0x00043a47) list_medium_line_x3_t4_g4_t1

0x0fab,	// (0x00043a5e) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0fab,	// (0x00043a5e) list_medium_line_x3_t4_g4_t2

0xb406,	// (0x0004deb9) list_medium_line_x3_t4_g4_t3_ParamLimits

0xb406,	// (0x0004deb9) list_medium_line_x3_t4_g4_t3

0xb41b,	// (0x0004dece) list_medium_line_x3_t4_g4_t4_ParamLimits

0xb41b,	// (0x0004dece) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc54,	// (0x00052707) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc54,	// (0x00052707) list_medium_line_x3_t4_g4_t

0x0fc6,	// (0x00043a79) list_single_dyc_row_text_pane_t1_ParamLimits

0x0fc6,	// (0x00043a79) list_single_dyc_row_text_pane_t1

0x100f,	// (0x00043ac2) list_single_dyc_row_text_pane_t2_ParamLimits

0x100f,	// (0x00043ac2) list_single_dyc_row_text_pane_t2

0xb438,	// (0x0004deeb) list_single_dyc_row_text_pane_t3_ParamLimits

0xb438,	// (0x0004deeb) list_single_dyc_row_text_pane_t3

0x0002,

0xfc5d,	// (0x00052710) list_single_dyc_row_text_pane_t_ParamLimits

0xfc5d,	// (0x00052710) list_single_dyc_row_text_pane_t

0xb44a,	// (0x0004defd) list_single_dyc_row_pane_g1_ParamLimits

0xb44a,	// (0x0004defd) list_single_dyc_row_pane_g1

0xb456,	// (0x0004df09) list_single_dyc_row_pane_g2_ParamLimits

0xb456,	// (0x0004df09) list_single_dyc_row_pane_g2

0xb462,	// (0x0004df15) list_single_dyc_row_pane_g3_ParamLimits

0xb462,	// (0x0004df15) list_single_dyc_row_pane_g3

0xb46e,	// (0x0004df21) list_single_dyc_row_pane_g4_ParamLimits

0xb46e,	// (0x0004df21) list_single_dyc_row_pane_g4

0x0003,

0xfc64,	// (0x00052717) list_single_dyc_row_pane_g_ParamLimits

0xfc64,	// (0x00052717) list_single_dyc_row_pane_g

0xb47a,	// (0x0004df2d) list_single_dyc_row_text_pane_ParamLimits

0xb47a,	// (0x0004df2d) list_single_dyc_row_text_pane

0xa6a9,	// (0x0004d15c) bg_sp_fs_scroll_pane

0x98ca,	// (0x0004c37d) thumb_sp_fs_scroll_pane

0xb11a,	// (0x0004dbcd) list_medium_line_g1_ParamLimits

0xb11a,	// (0x0004dbcd) list_medium_line_g1

0xb499,	// (0x0004df4c) list_medium_line_t1_ParamLimits

0xb499,	// (0x0004df4c) list_medium_line_t1

0xaa3f,	// (0x0004d4f2) list_medium_line_x2_g1_ParamLimits

0xaa3f,	// (0x0004d4f2) list_medium_line_x2_g1

0xaa4b,	// (0x0004d4fe) list_medium_line_x2_g2_ParamLimits

0xaa4b,	// (0x0004d4fe) list_medium_line_x2_g2

0x0001,

0xfc6d,	// (0x00052720) list_medium_line_x2_g_ParamLimits

0xfc6d,	// (0x00052720) list_medium_line_x2_g

0xb4ae,	// (0x0004df61) list_medium_line_x2_t1_ParamLimits

0xb4ae,	// (0x0004df61) list_medium_line_x2_t1

0xaa3f,	// (0x0004d4f2) list_medium_line_x3_g1_ParamLimits

0xaa3f,	// (0x0004d4f2) list_medium_line_x3_g1

0xaa4b,	// (0x0004d4fe) list_medium_line_x3_g2_ParamLimits

0xaa4b,	// (0x0004d4fe) list_medium_line_x3_g2

0x0001,

0xfc6d,	// (0x00052720) list_medium_line_x3_g_ParamLimits

0xfc6d,	// (0x00052720) list_medium_line_x3_g

0xb4ae,	// (0x0004df61) list_medium_line_x3_t1_ParamLimits

0xb4ae,	// (0x0004df61) list_medium_line_x3_t1

0x98d3,	// (0x0004c386) thumb_sp_fs_scroll_pane_g1

0x98dc,	// (0x0004c38f) thumb_sp_fs_scroll_pane_g2

0x98e5,	// (0x0004c398) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc72,	// (0x00052725) thumb_sp_fs_scroll_pane_g

0x98d3,	// (0x0004c386) bg_sp_fs_scroll_pane_g1

0x98dc,	// (0x0004c38f) bg_sp_fs_scroll_pane_g2

0x98e5,	// (0x0004c398) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc72,	// (0x00052725) bg_sp_fs_scroll_pane_g

0xaa3f,	// (0x0004d4f2) list_medium_line_x2_t3_g4_g1_ParamLimits

0xaa3f,	// (0x0004d4f2) list_medium_line_x2_t3_g4_g1

0xaad3,	// (0x0004d586) list_medium_line_x2_t3_g4_g2_ParamLimits

0xaad3,	// (0x0004d586) list_medium_line_x2_t3_g4_g2

0xaa4b,	// (0x0004d4fe) list_medium_line_x2_t3_g4_g3_ParamLimits

0xaa4b,	// (0x0004d4fe) list_medium_line_x2_t3_g4_g3

0xaa57,	// (0x0004d50a) list_medium_line_x2_t3_g4_g4_ParamLimits

0xaa57,	// (0x0004d50a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x00051d94) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x00051d94) list_medium_line_x2_t3_g4_g

0x1069,	// (0x00043b1c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1069,	// (0x00043b1c) list_medium_line_x2_t3_g4_t1

0x107f,	// (0x00043b32) list_medium_line_x2_t3_g4_t2_ParamLimits

0x107f,	// (0x00043b32) list_medium_line_x2_t3_g4_t2

0xaa78,	// (0x0004d52b) list_medium_line_x2_t3_g4_t3_ParamLimits

0xaa78,	// (0x0004d52b) list_medium_line_x2_t3_g4_t3

0x0002,

0xfc79,	// (0x0005272c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfc79,	// (0x0005272c) list_medium_line_x2_t3_g4_t

0xb11a,	// (0x0004dbcd) list_medium_line_g2_g1_ParamLimits

0xb11a,	// (0x0004dbcd) list_medium_line_g2_g1

0xb126,	// (0x0004dbd9) list_medium_line_g2_g2_ParamLimits

0xb126,	// (0x0004dbd9) list_medium_line_g2_g2

0x0001,

0xf936,	// (0x000523e9) list_medium_line_g2_g_ParamLimits

0xf936,	// (0x000523e9) list_medium_line_g2_g

0xb4c4,	// (0x0004df77) list_medium_line_g2_t1_ParamLimits

0xb4c4,	// (0x0004df77) list_medium_line_g2_t1

0xb11a,	// (0x0004dbcd) list_medium_line_t3_g2_g1_ParamLimits

0xb11a,	// (0x0004dbcd) list_medium_line_t3_g2_g1

0xb126,	// (0x0004dbd9) list_medium_line_t3_g2_g2_ParamLimits

0xb126,	// (0x0004dbd9) list_medium_line_t3_g2_g2

0x0001,

0xf936,	// (0x000523e9) list_medium_line_t3_g2_g_ParamLimits

0xf936,	// (0x000523e9) list_medium_line_t3_g2_g

0x1098,	// (0x00043b4b) list_medium_line_t3_g2_t1_ParamLimits

0x1098,	// (0x00043b4b) list_medium_line_t3_g2_t1

0x10b2,	// (0x00043b65) list_medium_line_t3_g2_t2_ParamLimits

0x10b2,	// (0x00043b65) list_medium_line_t3_g2_t2

0x10c8,	// (0x00043b7b) list_medium_line_t3_g2_t3_ParamLimits

0x10c8,	// (0x00043b7b) list_medium_line_t3_g2_t3

0x0002,

0xfc80,	// (0x00052733) list_medium_line_t3_g2_t_ParamLimits

0xfc80,	// (0x00052733) list_medium_line_t3_g2_t

0xb36a,	// (0x0004de1d) list_medium_line_right_icon_g1

0xb4d9,	// (0x0004df8c) list_medium_line_right_icon_t1

0xb11a,	// (0x0004dbcd) list_medium_line_t2_g1_ParamLimits

0xb11a,	// (0x0004dbcd) list_medium_line_t2_g1

0x10df,	// (0x00043b92) list_medium_line_t2_t1_ParamLimits

0x10df,	// (0x00043b92) list_medium_line_t2_t1

0x10f9,	// (0x00043bac) list_medium_line_t2_t2_ParamLimits

0x10f9,	// (0x00043bac) list_medium_line_t2_t2

0x0001,

0xfc87,	// (0x0005273a) list_medium_line_t2_t_ParamLimits

0xfc87,	// (0x0005273a) list_medium_line_t2_t

0xb11a,	// (0x0004dbcd) list_medium_line_t3_g1_ParamLimits

0xb11a,	// (0x0004dbcd) list_medium_line_t3_g1

0x1112,	// (0x00043bc5) list_medium_line_t3_t1_ParamLimits

0x1112,	// (0x00043bc5) list_medium_line_t3_t1

0x1129,	// (0x00043bdc) list_medium_line_t3_t2_ParamLimits

0x1129,	// (0x00043bdc) list_medium_line_t3_t2

0x113e,	// (0x00043bf1) list_medium_line_t3_t3_ParamLimits

0x113e,	// (0x00043bf1) list_medium_line_t3_t3

0x0002,

0xfc8c,	// (0x0005273f) list_medium_line_t3_t_ParamLimits

0xfc8c,	// (0x0005273f) list_medium_line_t3_t

0xb11a,	// (0x0004dbcd) list_medium_line_g3_g1_ParamLimits

0xb11a,	// (0x0004dbcd) list_medium_line_g3_g1

0xb4e7,	// (0x0004df9a) list_medium_line_g3_g2_ParamLimits

0xb4e7,	// (0x0004df9a) list_medium_line_g3_g2

0xb126,	// (0x0004dbd9) list_medium_line_g3_g3_ParamLimits

0xb126,	// (0x0004dbd9) list_medium_line_g3_g3

0x0002,

0xfc93,	// (0x00052746) list_medium_line_g3_g_ParamLimits

0xfc93,	// (0x00052746) list_medium_line_g3_g

0xb4f3,	// (0x0004dfa6) list_medium_line_g3_t1_ParamLimits

0xb4f3,	// (0x0004dfa6) list_medium_line_g3_t1

0xb11a,	// (0x0004dbcd) list_medium_line_t2_g3_g1_ParamLimits

0xb11a,	// (0x0004dbcd) list_medium_line_t2_g3_g1

0xb4e7,	// (0x0004df9a) list_medium_line_t2_g3_g2_ParamLimits

0xb4e7,	// (0x0004df9a) list_medium_line_t2_g3_g2

0xb126,	// (0x0004dbd9) list_medium_line_t2_g3_g3_ParamLimits

0xb126,	// (0x0004dbd9) list_medium_line_t2_g3_g3

0x0002,

0xfc93,	// (0x00052746) list_medium_line_t2_g3_g_ParamLimits

0xfc93,	// (0x00052746) list_medium_line_t2_g3_g

0x1150,	// (0x00043c03) list_medium_line_t2_g3_t1_ParamLimits

0x1150,	// (0x00043c03) list_medium_line_t2_g3_t1

0x1167,	// (0x00043c1a) list_medium_line_t2_g3_t2_ParamLimits

0x1167,	// (0x00043c1a) list_medium_line_t2_g3_t2

0x0001,

0xfc9a,	// (0x0005274d) list_medium_line_t2_g3_t_ParamLimits

0xfc9a,	// (0x0005274d) list_medium_line_t2_g3_t

0xb11a,	// (0x0004dbcd) list_medium_line_t3_g3_g1_ParamLimits

0xb11a,	// (0x0004dbcd) list_medium_line_t3_g3_g1

0xb4e7,	// (0x0004df9a) list_medium_line_t3_g3_g2_ParamLimits

0xb4e7,	// (0x0004df9a) list_medium_line_t3_g3_g2

0xb126,	// (0x0004dbd9) list_medium_line_t3_g3_g3_ParamLimits

0xb126,	// (0x0004dbd9) list_medium_line_t3_g3_g3

0x0002,

0xfc93,	// (0x00052746) list_medium_line_t3_g3_g_ParamLimits

0xfc93,	// (0x00052746) list_medium_line_t3_g3_g

0x1180,	// (0x00043c33) list_medium_line_t3_g3_t1_ParamLimits

0x1180,	// (0x00043c33) list_medium_line_t3_g3_t1

0x1199,	// (0x00043c4c) list_medium_line_t3_g3_t2_ParamLimits

0x1199,	// (0x00043c4c) list_medium_line_t3_g3_t2

0x11af,	// (0x00043c62) list_medium_line_t3_g3_t3_ParamLimits

0x11af,	// (0x00043c62) list_medium_line_t3_g3_t3

0x0002,

0xfc9f,	// (0x00052752) list_medium_line_t3_g3_t_ParamLimits

0xfc9f,	// (0x00052752) list_medium_line_t3_g3_t

0xb3f2,	// (0x0004dea5) list_medium_line_right_iconx2_g1

0xb36a,	// (0x0004de1d) list_medium_line_right_iconx2_g2

0x0001,

0xfca6,	// (0x00052759) list_medium_line_right_iconx2_g

0xb508,	// (0x0004dfbb) list_medium_line_right_iconx2_t1

0xb3f2,	// (0x0004dea5) list_medium_line_t2_right_iconx2_g1

0xb36a,	// (0x0004de1d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfca6,	// (0x00052759) list_medium_line_t2_right_iconx2_g

0x11c9,	// (0x00043c7c) list_medium_line_t2_right_iconx2_t1

0x11d9,	// (0x00043c8c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfcab,	// (0x0005275e) list_medium_line_t2_right_iconx2_t

0xb516,	// (0x0004dfc9) list_medium_line_x4_t4_t1

0x11eb,	// (0x00043c9e) list_medium_line_x4_t4_t2

0x11fb,	// (0x00043cae) list_medium_line_x4_t4_t3

0x120b,	// (0x00043cbe) list_medium_line_x4_t4_t4

0x0003,

0xfcb0,	// (0x00052763) list_medium_line_x4_t4_t

0x9928,	// (0x0004c3db) tport_appsw_pane_ParamLimits

0x9928,	// (0x0004c3db) tport_appsw_pane

0x993b,	// (0x0004c3ee) tport_contact_pane_ParamLimits

0x993b,	// (0x0004c3ee) tport_contact_pane

0x994e,	// (0x0004c401) tport_listscroll_pane_ParamLimits

0x994e,	// (0x0004c401) tport_listscroll_pane

0x9964,	// (0x0004c417) cell_tport_appsw_pane_ParamLimits

0x9964,	// (0x0004c417) cell_tport_appsw_pane

0x6bf5,	// (0x000496a8) tport_appsw_pane_g1_ParamLimits

0x6bf5,	// (0x000496a8) tport_appsw_pane_g1

0xb524,	// (0x0004dfd7) tport_contact_pane_g1

0xb52d,	// (0x0004dfe0) tport_contact_pane_t1

0xb53b,	// (0x0004dfee) tport_contact_pane_t2

0x0001,

0xfcb9,	// (0x0005276c) tport_contact_pane_t

0xb549,	// (0x0004dffc) list_tport_pane

0xb552,	// (0x0004e005) scroll_pane_cp_030

0x99aa,	// (0x0004c45d) cell_tport_appsw_pane_g1

0xb56b,	// (0x0004e01e) cell_tport_appsw_pane_t1

0xa6a9,	// (0x0004d15c) grid_highlight_pane_cp019

0x99ba,	// (0x0004c46d) list_tport_double_graphic_pane_ParamLimits

0x99ba,	// (0x0004c46d) list_tport_double_graphic_pane

0xa722,	// (0x0004d1d5) list_highlight_pane_cp023_ParamLimits

0xa722,	// (0x0004d1d5) list_highlight_pane_cp023

0x99ca,	// (0x0004c47d) list_tport_double_graphic_pane_g1_ParamLimits

0x99ca,	// (0x0004c47d) list_tport_double_graphic_pane_g1

0x99d7,	// (0x0004c48a) list_tport_double_graphic_pane_t1_ParamLimits

0x99d7,	// (0x0004c48a) list_tport_double_graphic_pane_t1

0x99ec,	// (0x0004c49f) list_tport_double_graphic_pane_t2_ParamLimits

0x99ec,	// (0x0004c49f) list_tport_double_graphic_pane_t2

0x0001,

0xfcc5,	// (0x00052778) list_tport_double_graphic_pane_t_ParamLimits

0xfcc5,	// (0x00052778) list_tport_double_graphic_pane_t

0xa6a9,	// (0x0004d15c) main_cale_note_pane

0x6ba9,	// (0x0004965c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6ba9,	// (0x0004965c) cell_vitu2_function_top_wide_pane_cp01

0x900d,	// (0x0004bac0) wait_bar_pane_cp05_ParamLimits

0xa6a9,	// (0x0004d15c) listscroll_cmail_pane

0xb581,	// (0x0004e034) list_cmail_pane

0x9a08,	// (0x0004c4bb) list_cmail_body_pane

0x9a20,	// (0x0004c4d3) list_single_cmail_header_caption_pane

0x9a3d,	// (0x0004c4f0) list_single_cmail_header_detail_pane_ParamLimits

0x9a3d,	// (0x0004c4f0) list_single_cmail_header_detail_pane

0x9a6f,	// (0x0004c522) list_single_cmail_header_caption_pane_t1

0x121b,	// (0x00043cce) list_single_cmail_header_detail_pane_g1_ParamLimits

0x121b,	// (0x00043cce) list_single_cmail_header_detail_pane_g1

0xb5a1,	// (0x0004e054) list_single_cmail_header_detail_pane_g2_ParamLimits

0xb5a1,	// (0x0004e054) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcca,	// (0x0005277d) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcca,	// (0x0005277d) list_single_cmail_header_detail_pane_g

0xb5ba,	// (0x0004e06d) list_single_cmail_header_detail_pane_t1_ParamLimits

0xb5ba,	// (0x0004e06d) list_single_cmail_header_detail_pane_t1

0xb5f8,	// (0x0004e0ab) list_single_cmail_header_editor_pane_bg_ParamLimits

0xb5f8,	// (0x0004e0ab) list_single_cmail_header_editor_pane_bg

0x8e77,	// (0x0004b92a) list_cmail_body_pane_g1

0xb60a,	// (0x0004e0bd) list_cmail_body_pane_t1

0x6cbb,	// (0x0004976e) list_single_cmail_header_editor_pane_bg_g1

0xc995,	// (0x0004f448) list_single_cmail_header_editor_pane_bg_g1_copy1

0x6ccb,	// (0x0004977e) list_single_cmail_header_editor_pane_bg_g1_copy2

0x6cc3,	// (0x00049776) list_single_cmail_header_editor_pane_bg_g1_copy3

0x7682,	// (0x0004a135) list_single_cmail_header_editor_pane_bg_g1_copy4

0x6ceb,	// (0x0004979e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x6cdb,	// (0x0004978e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x6ce3,	// (0x00049796) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc975,	// (0x0004f428) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9a7f,	// (0x0004c532) calenote_gesture_pane_ParamLimits

0x9a7f,	// (0x0004c532) calenote_gesture_pane

0x9a9f,	// (0x0004c552) calenote_window_pane_ParamLimits

0x9a9f,	// (0x0004c552) calenote_window_pane

0xb618,	// (0x0004e0cb) popup_note_window_cp01

0x9abb,	// (0x0004c56e) calenote_swipe_1_pane_ParamLimits

0x9abb,	// (0x0004c56e) calenote_swipe_1_pane

0x9721,	// (0x0004c1d4) calenote_swipe_2_pane_ParamLimits

0x9721,	// (0x0004c1d4) calenote_swipe_2_pane

0x9656,	// (0x0004c109) calenote_swipe_1_pane_g1_ParamLimits

0x9656,	// (0x0004c109) calenote_swipe_1_pane_g1

0x9663,	// (0x0004c116) calenote_swipe_1_pane_g2_ParamLimits

0x9663,	// (0x0004c116) calenote_swipe_1_pane_g2

0x0001,

0xfbf4,	// (0x000526a7) calenote_swipe_1_pane_g_ParamLimits

0xfbf4,	// (0x000526a7) calenote_swipe_1_pane_g

0xb62a,	// (0x0004e0dd) calenote_swipe_1_pane_t1_ParamLimits

0xb62a,	// (0x0004e0dd) calenote_swipe_1_pane_t1

0x9656,	// (0x0004c109) calenote_swipe_2_pane_g1_ParamLimits

0x9656,	// (0x0004c109) calenote_swipe_2_pane_g1

0xb649,	// (0x0004e0fc) calenote_swipe_2_pane_g2_ParamLimits

0xb649,	// (0x0004e0fc) calenote_swipe_2_pane_g2

0x0001,

0xfcd6,	// (0x00052789) calenote_swipe_2_pane_g_ParamLimits

0xfcd6,	// (0x00052789) calenote_swipe_2_pane_g

0xb655,	// (0x0004e108) calenote_swipe_2_pane_t1_ParamLimits

0xb655,	// (0x0004e108) calenote_swipe_2_pane_t1

0xa6a9,	// (0x0004d15c) main_mup_navstr_pane

0x567b,	// (0x0004812e) main_mup3_pane_t7_ParamLimits

0x567b,	// (0x0004812e) main_mup3_pane_t7

0xae0a,	// (0x0004d8bd) main_mp4_pane_g6_ParamLimits

0xae0a,	// (0x0004d8bd) main_mp4_pane_g6

0xafae,	// (0x0004da61) main_image3_pane_t4_ParamLimits

0xafae,	// (0x0004da61) main_image3_pane_t4

0x9ad0,	// (0x0004c583) popup_navstr_preview_pane_ParamLimits

0x9ad0,	// (0x0004c583) popup_navstr_preview_pane

0x9ae0,	// (0x0004c593) scroll_navstr_pane_ParamLimits

0x9ae0,	// (0x0004c593) scroll_navstr_pane

0xa6a9,	// (0x0004d15c) bg_popup_preview_window_pane_cp04

0xb67c,	// (0x0004e12f) popup_navstr_preview_pane_t1

0x9af4,	// (0x0004c5a7) scroll_navstr_pane_g1_ParamLimits

0x9af4,	// (0x0004c5a7) scroll_navstr_pane_g1

0x9b08,	// (0x0004c5bb) scroll_navstr_pane_t1_ParamLimits

0x9b08,	// (0x0004c5bb) scroll_navstr_pane_t1

0xb621,	// (0x0004e0d4) bg_button_pane_cp014

0xb621,	// (0x0004e0d4) bg_button_pane_cp030

0x0dff,	// (0x000438b2) list_double_fisheye_pane_g4_ParamLimits

0x0dff,	// (0x000438b2) list_double_fisheye_pane_g4

0x0e0b,	// (0x000438be) list_double_fisheye_pane_g5_ParamLimits

0x0e0b,	// (0x000438be) list_double_fisheye_pane_g5

0xb589,	// (0x0004e03c) sp_fs_scroll_pane_cp03

0x984c,	// (0x0004c2ff) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x9858,	// (0x0004c30b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc11,	// (0x000526c4) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9864,	// (0x0004c317) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x99fe,	// (0x0004c4b1) sp_fs_scroll_pane_cp02

0xc69f,	// (0x0004f152) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc69f,	// (0x0004f152) popup_sp_fs_calendar_preview_list_single_pane

0xa6a9,	// (0x0004d15c) main_cam6_pano_pane

0xa722,	// (0x0004d1d5) main_mup3_pane_ParamLimits

0xa6a9,	// (0x0004d15c) main_phacti_pane

0x8ede,	// (0x0004b991) bg_button_pane_cp11

0x8ef8,	// (0x0004b9ab) main_mobtv_info_pane_g2_ParamLimits

0x8ef8,	// (0x0004b9ab) main_mobtv_info_pane_g2

0x0001,

0xfb71,	// (0x00052624) main_mobtv_info_pane_g_ParamLimits

0xfb71,	// (0x00052624) main_mobtv_info_pane_g

0x917b,	// (0x0004bc2e) sc_clock_pane_t5_ParamLimits

0x917b,	// (0x0004bc2e) sc_clock_pane_t5

0x936a,	// (0x0004be1d) main_radioblah_pane_g1_ParamLimits

0x93b0,	// (0x0004be63) main_radioblah_pane_t3_ParamLimits

0x93b0,	// (0x0004be63) main_radioblah_pane_t3

0x93c8,	// (0x0004be7b) main_radioblah_pane_t4_ParamLimits

0x93c8,	// (0x0004be7b) main_radioblah_pane_t4

0x93f6,	// (0x0004bea9) main_radioblah_text_pane_ParamLimits

0x93f6,	// (0x0004bea9) main_radioblah_text_pane

0x9408,	// (0x0004bebb) main_radioblah_info_pane_g1_ParamLimits

0x94db,	// (0x0004bf8e) main_radioblah_info_pane_t4_ParamLimits

0x94db,	// (0x0004bf8e) main_radioblah_info_pane_t4

0xa722,	// (0x0004d1d5) main_sp_fs_calendar_pane

0x9b1f,	// (0x0004c5d2) main_phacti_pane_g1

0x9b27,	// (0x0004c5da) phacti_note_pane_ParamLimits

0x9b27,	// (0x0004c5da) phacti_note_pane

0xb693,	// (0x0004e146) phacti_term_pane_ParamLimits

0xb693,	// (0x0004e146) phacti_term_pane

0xb6a8,	// (0x0004e15b) phacti_note_pane_t1_ParamLimits

0xb6a8,	// (0x0004e15b) phacti_note_pane_t1

0xb6bf,	// (0x0004e172) phacti_term_pane_g1

0xb6c7,	// (0x0004e17a) phacti_term_pane_t1_ParamLimits

0xb6c7,	// (0x0004e17a) phacti_term_pane_t1

0xb6f1,	// (0x0004e1a4) popup_sp_fs_calendar_preview_list_single_pane_g1

0xb6f9,	// (0x0004e1ac) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfce0,	// (0x00052793) popup_sp_fs_calendar_preview_list_single_pane_g

0xb701,	// (0x0004e1b4) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xb701,	// (0x0004e1b4) popup_sp_fs_calendar_preview_list_single_pane_t1

0xb717,	// (0x0004e1ca) aid_popup_sp_fs_bg_corner_pane

0xe891,	// (0x00051344) popup_sp_fs_calendar_preview_bg_pane_g1

0xa6a9,	// (0x0004d15c) popup_sp_fs_calendar_preview_bg_pane

0xb71f,	// (0x0004e1d2) popup_sp_fs_calendar_preview_list_pane

0xa722,	// (0x0004d1d5) bg_main_sp_fs_cale_pane_ParamLimits

0xa722,	// (0x0004d1d5) bg_main_sp_fs_cale_pane

0xb727,	// (0x0004e1da) listscroll_cale_mrui_pane_ParamLimits

0xb727,	// (0x0004e1da) listscroll_cale_mrui_pane

0xb73b,	// (0x0004e1ee) listscroll_sp_fs_schedule_track_pane

0xb744,	// (0x0004e1f7) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xb744,	// (0x0004e1f7) main_sp_fs_ctrlbar_pane_cp01

0xb755,	// (0x0004e208) main_sp_fs_ribbon_pane

0xb75d,	// (0x0004e210) popup_sp_fs_cale_preview_window

0x9b82,	// (0x0004c635) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9b82,	// (0x0004c635) list_single_sp_fs_schedule_track_pane

0xa722,	// (0x0004d1d5) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa722,	// (0x0004d1d5) bg_sp_fs_highlight_list_pane_cp03

0x9b95,	// (0x0004c648) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9b95,	// (0x0004c648) list_single_sp_fs_schedule_track_pane_g1

0x9ba1,	// (0x0004c654) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9ba1,	// (0x0004c654) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfce5,	// (0x00052798) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfce5,	// (0x00052798) list_single_sp_fs_schedule_track_pane_g

0x9bad,	// (0x0004c660) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9bad,	// (0x0004c660) list_single_sp_fs_schedule_track_pane_t1

0x9bcf,	// (0x0004c682) sp_fs_schedule_track_pane_ParamLimits

0x9bcf,	// (0x0004c682) sp_fs_schedule_track_pane

0xb76f,	// (0x0004e222) sp_fs_schedule_track_pane_g1

0xb777,	// (0x0004e22a) sp_fs_schedule_track_pane_g2

0xb77f,	// (0x0004e232) sp_fs_schedule_track_pane_g3

0xb787,	// (0x0004e23a) sp_fs_schedule_track_pane_g4

0xb78f,	// (0x0004e242) sp_fs_schedule_track_pane_g5

0x0004,

0xfcea,	// (0x0005279d) sp_fs_schedule_track_pane_g

0x6cbb,	// (0x0004976e) bg_sp_fs_schedule_viewer_highlight_g1

0xc995,	// (0x0004f448) bg_sp_fs_schedule_viewer_highlight_g2

0x6cc3,	// (0x00049776) bg_sp_fs_schedule_viewer_highlight_g3

0x6ccb,	// (0x0004977e) bg_sp_fs_schedule_viewer_highlight_g4

0x7682,	// (0x0004a135) bg_sp_fs_schedule_viewer_highlight_g5

0x6cdb,	// (0x0004978e) bg_sp_fs_schedule_viewer_highlight_g6

0x6ce3,	// (0x00049796) bg_sp_fs_schedule_viewer_highlight_g7

0x6ceb,	// (0x0004979e) bg_sp_fs_schedule_viewer_highlight_g8

0xc975,	// (0x0004f428) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcf5,	// (0x000527a8) bg_sp_fs_schedule_viewer_highlight_g

0xa6a9,	// (0x0004d15c) bg_main_sp_fs_ribbon_pane

0x9be4,	// (0x0004c697) main_sp_fs_ribbon_pane_g1

0xb797,	// (0x0004e24a) main_sp_fs_ribbon_pane_t1

0x9bed,	// (0x0004c6a0) main_sp_fs_ribbon_pane_t2

0xb7a6,	// (0x0004e259) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd08,	// (0x000527bb) main_sp_fs_ribbon_pane_t

0xb7b5,	// (0x0004e268) main_sp_fs_ribbon_scheduler_pane

0xb7bd,	// (0x0004e270) bg_main_sp_fs_ribbon_pane_g1

0xb7c6,	// (0x0004e279) bg_main_sp_fs_ribbon_pane_g2

0xb7cf,	// (0x0004e282) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd0f,	// (0x000527c2) bg_main_sp_fs_ribbon_pane_g

0xb7d7,	// (0x0004e28a) main_sp_fs_ribbon_scheduler_pane_g1

0xb7e0,	// (0x0004e293) main_sp_fs_ribbon_scheduler_pane_g2

0xb7e9,	// (0x0004e29c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd16,	// (0x000527c9) main_sp_fs_ribbon_scheduler_pane_g

0xb7f2,	// (0x0004e2a5) list_cale_mrui_pane

0x9bfc,	// (0x0004c6af) sp_fs_scroll_pane_cp07_ParamLimits

0x9bfc,	// (0x0004c6af) sp_fs_scroll_pane_cp07

0x9c12,	// (0x0004c6c5) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9c12,	// (0x0004c6c5) bg_sp_fs_schedule_viewer_highlight

0xb7fb,	// (0x0004e2ae) list_single_sp_fs_schedule_track_pane_cp01

0xb803,	// (0x0004e2b6) list_sp_fs_schedule_track_pane

0xb80b,	// (0x0004e2be) sp_fs_scroll_pane_cp06_ParamLimits

0xb80b,	// (0x0004e2be) sp_fs_scroll_pane_cp06

0xe891,	// (0x00051344) bgmain_sp_fs_calendar_pane_g1

0xb81d,	// (0x0004e2d0) list_single_cale_mrui_pane_ParamLimits

0xb81d,	// (0x0004e2d0) list_single_cale_mrui_pane

0xb840,	// (0x0004e2f3) list_single_cale_mrui_row_pane_ParamLimits

0xb840,	// (0x0004e2f3) list_single_cale_mrui_row_pane

0xb84d,	// (0x0004e300) list_single_cale_mrui_row_pane_g1_ParamLimits

0xb84d,	// (0x0004e300) list_single_cale_mrui_row_pane_g1

0xb892,	// (0x0004e345) list_single_cale_mrui_row_pane_t1_ParamLimits

0xb892,	// (0x0004e345) list_single_cale_mrui_row_pane_t1

0x1259,	// (0x00043d0c) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1259,	// (0x00043d0c) list_single_cale_mrui_row_pane_t2

0xb8a4,	// (0x0004e357) list_single_cale_mrui_row_pane_t3_ParamLimits

0xb8a4,	// (0x0004e357) list_single_cale_mrui_row_pane_t3

0xb8d3,	// (0x0004e386) list_single_cale_mrui_row_pane_t4_ParamLimits

0xb8d3,	// (0x0004e386) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd24,	// (0x000527d7) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd24,	// (0x000527d7) list_single_cale_mrui_row_pane_t

0x12c1,	// (0x00043d74) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x12c1,	// (0x00043d74) list_single_cmail_header_editor_pane_bg_cp01

0x12e7,	// (0x00043d9a) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x12e7,	// (0x00043d9a) list_single_cmail_header_editor_pane_bg_cp02

0x9c24,	// (0x0004c6d7) main_radioblah_text_pane_t1_ParamLimits

0x9c24,	// (0x0004c6d7) main_radioblah_text_pane_t1

0xb902,	// (0x0004e3b5) cam6_indi_pane_cp01

0xb90a,	// (0x0004e3bd) cam6_mode_pane_cp01

0xb912,	// (0x0004e3c5) cam6_pano_pane

0xb91b,	// (0x0004e3ce) cam6_zoom_pane_cp01

0xb925,	// (0x0004e3d8) cam6_pano_image_pane

0xb92e,	// (0x0004e3e1) cam6_pano_pane_g1

0x8e77,	// (0x0004b92a) cam6_pano_pane_g2

0xb937,	// (0x0004e3ea) cam6_pano_pane_g3

0xb940,	// (0x0004e3f3) cam6_pano_pane_g4

0xedfd,	// (0x000518b0) cam6_pano_pane_g5

0xb949,	// (0x0004e3fc) cam6_pano_pane_g6

0xb951,	// (0x0004e404) cam6_pano_pane_g7

0xb959,	// (0x0004e40c) cam6_pano_pane_g8

0xb962,	// (0x0004e415) cam6_pano_pane_g9

0x0008,

0xfd2d,	// (0x000527e0) cam6_pano_pane_g

0xa6a9,	// (0x0004d15c) main_browser_tag_pane

0xb674,	// (0x0004e127) grid_navstr_albumart_pane

0xb96d,	// (0x0004e420) cell_navstr_albumart_pane_ParamLimits

0xb96d,	// (0x0004e420) cell_navstr_albumart_pane

0xb989,	// (0x0004e43c) cell_navstr_albumart_pane_g1

0xe227,	// (0x00050cda) cell_navstr_albumart_pane_g2

0xe237,	// (0x00050cea) cell_navstr_albumart_pane_g3

0xe22f,	// (0x00050ce2) cell_navstr_albumart_pane_g4

0x0003,

0xfd40,	// (0x000527f3) cell_navstr_albumart_pane_g

0x9c3f,	// (0x0004c6f2) bt_list_pane_ParamLimits

0x9c3f,	// (0x0004c6f2) bt_list_pane

0x9c55,	// (0x0004c708) bt_list_pane_t1

0x9c64,	// (0x0004c717) bt_list_pane_t2

0x0001,

0xfd49,	// (0x000527fc) bt_list_pane_t

0xa6a9,	// (0x0004d15c) main_cale_prevew_pane

0x9c73,	// (0x0004c726) popup_cale_preview_window_ParamLimits

0x9c73,	// (0x0004c726) popup_cale_preview_window

0xa722,	// (0x0004d1d5) bg_popup_preview_window_pane_cp05_ParamLimits

0xa722,	// (0x0004d1d5) bg_popup_preview_window_pane_cp05

0xb991,	// (0x0004e444) list_cale_preview_pane_ParamLimits

0xb991,	// (0x0004e444) list_cale_preview_pane

0x9c8e,	// (0x0004c741) list_double_cale_preview_pane_ParamLimits

0x9c8e,	// (0x0004c741) list_double_cale_preview_pane

0x9ca2,	// (0x0004c755) list_single_cale_preview_pane_ParamLimits

0x9ca2,	// (0x0004c755) list_single_cale_preview_pane

0x9cba,	// (0x0004c76d) list_single_cale_preview_pane_g1

0x9cc2,	// (0x0004c775) list_single_cale_preview_pane_t1_ParamLimits

0x9cc2,	// (0x0004c775) list_single_cale_preview_pane_t1

0x9cd7,	// (0x0004c78a) list_double_cale_preview_pane_g1

0x9cdf,	// (0x0004c792) list_double_cale_preview_pane_t1_ParamLimits

0x9cdf,	// (0x0004c792) list_double_cale_preview_pane_t1

0x9cf4,	// (0x0004c7a7) list_double_cale_preview_pane_t2_ParamLimits

0x9cf4,	// (0x0004c7a7) list_double_cale_preview_pane_t2

0x0001,

0xfd4e,	// (0x00052801) list_double_cale_preview_pane_t_ParamLimits

0xfd4e,	// (0x00052801) list_double_cale_preview_pane_t

0xa6a9,	// (0x0004d15c) main_ezdial_pane

0xa722,	// (0x0004d1d5) main_sp_fs_email_pane_ParamLimits

0x97b6,	// (0x0004c269) cmail_ddmenu_btn01_pane_ParamLimits

0x97b6,	// (0x0004c269) cmail_ddmenu_btn01_pane

0x97c9,	// (0x0004c27c) cmail_ddmenu_btn02_pane_ParamLimits

0x97c9,	// (0x0004c27c) cmail_ddmenu_btn02_pane

0x9826,	// (0x0004c2d9) cmail_ddmenu_btn03_pane_ParamLimits

0x9826,	// (0x0004c2d9) cmail_ddmenu_btn03_pane

0x0e7b,	// (0x0004392e) main_sp_fs_ctrlbar_pane_ParamLimits

0x0e9f,	// (0x00043952) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9a08,	// (0x0004c4bb) list_cmail_body_pane_ParamLimits

0xb598,	// (0x0004e04b) bg_button_pane_cp12

0xb5ad,	// (0x0004e060) list_single_cmail_header_detail_pane_g3_ParamLimits

0xb5ad,	// (0x0004e060) list_single_cmail_header_detail_pane_g3

0x1233,	// (0x00043ce6) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1233,	// (0x00043ce6) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcd1,	// (0x00052784) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcd1,	// (0x00052784) list_single_cmail_header_detail_pane_t

0xb6dc,	// (0x0004e18f) phacti_term_pane_t2_ParamLimits

0xb6dc,	// (0x0004e18f) phacti_term_pane_t2

0x0001,

0xfcdb,	// (0x0005278e) phacti_term_pane_t_ParamLimits

0xfcdb,	// (0x0005278e) phacti_term_pane_t

0xb99d,	// (0x0004e450) aid_size_list_single_double

0x9d0c,	// (0x0004c7bf) popup_ezdial_listscroll_window

0x9d28,	// (0x0004c7db) popup_number_entry_window_cp01

0xcfd1,	// (0x0004fa84) bg_popup_call_pane_cp09

0xb9a9,	// (0x0004e45c) ezdial_list_pane

0xb9b1,	// (0x0004e464) scroll_pane_cp23

0xe40e,	// (0x00050ec1) bg_button_pane_cp028_ParamLimits

0xe40e,	// (0x00050ec1) bg_button_pane_cp028

0x9d36,	// (0x0004c7e9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9d36,	// (0x0004c7e9) cmail_ddmenu_btn01_pane_g1

0x9d42,	// (0x0004c7f5) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9d42,	// (0x0004c7f5) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd53,	// (0x00052806) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd53,	// (0x00052806) cmail_ddmenu_btn01_pane_g

0xb9b9,	// (0x0004e46c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xb9b9,	// (0x0004e46c) cmail_ddmenu_btn01_pane_t1

0xe40e,	// (0x00050ec1) bg_button_pane_cp029_ParamLimits

0xe40e,	// (0x00050ec1) bg_button_pane_cp029

0x9d4e,	// (0x0004c801) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9d4e,	// (0x0004c801) cmail_ddmenu_btn02_pane_g1

0x9d66,	// (0x0004c819) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9d66,	// (0x0004c819) cmail_ddmenu_btn02_pane_t1

0xa722,	// (0x0004d1d5) bg_button_pane_cp031_ParamLimits

0xa722,	// (0x0004d1d5) bg_button_pane_cp031

0x9d4e,	// (0x0004c801) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9d4e,	// (0x0004c801) cmail_ddmenu_btn03_pane_g1

0x9d66,	// (0x0004c819) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9d66,	// (0x0004c819) cmail_ddmenu_btn03_pane_t1

0x62ae,	// (0x00048d61) cell_dialer2_keypad_pane_t1_ParamLimits

0x62c8,	// (0x00048d7b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x62c8,	// (0x00048d7b) cell_dialer2_keypad_pane_t1_copy1

0x8a88,	// (0x0004b53b) ncimui_group_button_pane

0xa722,	// (0x0004d1d5) main_sp_fs_calendar_pane_ParamLimits

0x9a20,	// (0x0004c4d3) list_single_cmail_header_caption_pane_ParamLimits

0xb204,	// (0x0004dcb7) aid_recal_txt_sm_pane

0xa6a9,	// (0x0004d15c) mian_recal_day_pane

0xb75d,	// (0x0004e210) popup_sp_fs_cale_preview_window_ParamLimits

0xa6a9,	// (0x0004d15c) list_recal_day_pane

0xb9e7,	// (0x0004e49a) list_single_recal_day_pane_ParamLimits

0xb9e7,	// (0x0004e49a) list_single_recal_day_pane

0xb9f9,	// (0x0004e4ac) list_single_recal_day_pane_g1_ParamLimits

0xb9f9,	// (0x0004e4ac) list_single_recal_day_pane_g1

0xba05,	// (0x0004e4b8) list_single_recal_day_pane_g2_ParamLimits

0xba05,	// (0x0004e4b8) list_single_recal_day_pane_g2

0xba15,	// (0x0004e4c8) list_single_recal_day_pane_g3_ParamLimits

0xba15,	// (0x0004e4c8) list_single_recal_day_pane_g3

0x9d8a,	// (0x0004c83d) list_single_recal_day_pane_g4_ParamLimits

0x9d8a,	// (0x0004c83d) list_single_recal_day_pane_g4

0xba21,	// (0x0004e4d4) list_single_recal_day_pane_g5_ParamLimits

0xba21,	// (0x0004e4d4) list_single_recal_day_pane_g5

0xba31,	// (0x0004e4e4) list_single_recal_day_pane_g6_ParamLimits

0xba31,	// (0x0004e4e4) list_single_recal_day_pane_g6

0x0004,

0xfd62,	// (0x00052815) list_single_recal_day_pane_g_ParamLimits

0xfd62,	// (0x00052815) list_single_recal_day_pane_g

0xba48,	// (0x0004e4fb) list_single_recal_day_pane_t1

0xba5a,	// (0x0004e50d) list_single_recal_day_pane_t2

0x0001,

0xfd6d,	// (0x00052820) list_single_recal_day_pane_t

0x9daa,	// (0x0004c85d) ncimui_query_button_pane_ParamLimits

0x9daa,	// (0x0004c85d) ncimui_query_button_pane

0x9dba,	// (0x0004c86d) ncimui_query_button_pane_t1_ParamLimits

0x9dba,	// (0x0004c86d) ncimui_query_button_pane_t1

0xba6f,	// (0x0004e522) ncimui_query_button_pane_t2_ParamLimits

0xba6f,	// (0x0004e522) ncimui_query_button_pane_t2

0x0001,

0xfd72,	// (0x00052825) ncimui_query_button_pane_t_ParamLimits

0xfd72,	// (0x00052825) ncimui_query_button_pane_t

0x9dcd,	// (0x0004c880) query_button_pane_ParamLimits

0x9dcd,	// (0x0004c880) query_button_pane

0xa6a9,	// (0x0004d15c) bg_button_pane_cp0028

0xba82,	// (0x0004e535) query_button_pane_t1

0x42ce,	// (0x00046d81) main_tport_pane_ParamLimits

0x98ee,	// (0x0004c3a1) bg_popup_window_pane_cp01_ParamLimits

0x98ee,	// (0x0004c3a1) bg_popup_window_pane_cp01

0x9904,	// (0x0004c3b7) heading_pane_cp08_ParamLimits

0x9904,	// (0x0004c3b7) heading_pane_cp08

0x9915,	// (0x0004c3c8) heading_pane_cp07_ParamLimits

0x9915,	// (0x0004c3c8) heading_pane_cp07

0xb563,	// (0x0004e016) cell_tport_appsw_pane_g2

0x0002,

0xfcbe,	// (0x00052771) cell_tport_appsw_pane_g

0x09da,	// (0x0004348d) input_candi_list_open_g1

0xcb30,	// (0x0004f5e3) list_cale_time_pane_g6_ParamLimits

0xcb30,	// (0x0004f5e3) list_cale_time_pane_g6

0x50b6,	// (0x00047b69) aid_size_touch_calib_1_ParamLimits

0x50b6,	// (0x00047b69) aid_size_touch_calib_1

0x50c2,	// (0x00047b75) aid_size_touch_calib_2_ParamLimits

0x50c2,	// (0x00047b75) aid_size_touch_calib_2

0x50d8,	// (0x00047b8b) aid_size_touch_calib_3_ParamLimits

0x50d8,	// (0x00047b8b) aid_size_touch_calib_3

0x50f6,	// (0x00047ba9) aid_size_touch_calib_4_ParamLimits

0x50f6,	// (0x00047ba9) aid_size_touch_calib_4

0x510c,	// (0x00047bbf) main_touch_calib_button_group_pane_ParamLimits

0x510c,	// (0x00047bbf) main_touch_calib_button_group_pane

0x5124,	// (0x00047bd7) main_touch_calib_pane_g1_ParamLimits

0x5130,	// (0x00047be3) main_touch_calib_pane_g2_ParamLimits

0x513c,	// (0x00047bef) main_touch_calib_pane_g3_ParamLimits

0x5148,	// (0x00047bfb) main_touch_calib_pane_g4_ParamLimits

0xf70c,	// (0x000521bf) main_touch_calib_pane_g_ParamLimits

0x5154,	// (0x00047c07) main_touch_calib_pane_t1_ParamLimits

0x516e,	// (0x00047c21) main_touch_calib_pane_t2_ParamLimits

0x5188,	// (0x00047c3b) main_touch_calib_pane_t3_ParamLimits

0x519c,	// (0x00047c4f) main_touch_calib_pane_t4_ParamLimits

0x51b0,	// (0x00047c63) main_touch_calib_pane_t5_ParamLimits

0xf715,	// (0x000521c8) main_touch_calib_pane_t_ParamLimits

0xebc7,	// (0x0005167a) list_single_fp_cale_pane_g3_ParamLimits

0xebc7,	// (0x0005167a) list_single_fp_cale_pane_g3

0xa722,	// (0x0004d1d5) bg_button_pane_cp012_ParamLimits

0xa722,	// (0x0004d1d5) bg_vkb2_func_pane_cp03_ParamLimits

0x7638,	// (0x0004a0eb) cell_vitu2_function_top_pane_g1_ParamLimits

0xa722,	// (0x0004d1d5) bg_vkb2_func_pane_cp04_ParamLimits

0x8a28,	// (0x0004b4db) main_ncimui_button_group_pane_ParamLimits

0x8a28,	// (0x0004b4db) main_ncimui_button_group_pane

0x8a76,	// (0x0004b529) main_ncimui_pane_t3_ParamLimits

0x8a76,	// (0x0004b529) main_ncimui_pane_t3

0xb68a,	// (0x0004e13d) phacti_button_group_pane

0xb99d,	// (0x0004e450) aid_size_list_single_double_ParamLimits

0x9d0c,	// (0x0004c7bf) popup_ezdial_listscroll_window_ParamLimits

0x9d28,	// (0x0004c7db) popup_number_entry_window_cp01_ParamLimits

0x9de0,	// (0x0004c893) phacti_button_pane_ParamLimits

0x9de0,	// (0x0004c893) phacti_button_pane

0xa6a9,	// (0x0004d15c) bg_button_pane_cp14

0xba90,	// (0x0004e543) phacti_button_pane_t1

0x9df1,	// (0x0004c8a4) main_touch_calib_button_pane_ParamLimits

0x9df1,	// (0x0004c8a4) main_touch_calib_button_pane

0xc589,	// (0x0004f03c) bg_button_pane_cp18_ParamLimits

0xc589,	// (0x0004f03c) bg_button_pane_cp18

0xba9e,	// (0x0004e551) main_touch_calib_button_pane_t1_ParamLimits

0xba9e,	// (0x0004e551) main_touch_calib_button_pane_t1

0xbab4,	// (0x0004e567) main_touch_calib_button_pane_t2_ParamLimits

0xbab4,	// (0x0004e567) main_touch_calib_button_pane_t2

0x0001,

0xfd77,	// (0x0005282a) main_touch_calib_button_pane_t_ParamLimits

0xfd77,	// (0x0005282a) main_touch_calib_button_pane_t

0xa6a9,	// (0x0004d15c) cell_ncimui_button_pane

0xa6a9,	// (0x0004d15c) bg_button_pane_cp032

0xbad2,	// (0x0004e585) cell_ncimui_button_pane_t1

0xaf8c,	// (0x0004da3f) image3_infobar_pane_ParamLimits

0xaf8c,	// (0x0004da3f) image3_infobar_pane

0x91a7,	// (0x0004bc5a) fs_bigclock_status_pane_ParamLimits

0x91a7,	// (0x0004bc5a) fs_bigclock_status_pane

0x91b4,	// (0x0004bc67) main_fs_bigclock_clock_pane_ParamLimits

0x91b4,	// (0x0004bc67) main_fs_bigclock_clock_pane

0x91c8,	// (0x0004bc7b) main_fs_bigclock_indi_pane_ParamLimits

0x91c8,	// (0x0004bc7b) main_fs_bigclock_indi_pane

0x91e3,	// (0x0004bc96) main_fs_bigclock_swipe_pane_ParamLimits

0x91e3,	// (0x0004bc96) main_fs_bigclock_swipe_pane

0xa6a9,	// (0x0004d15c) main_fs_clock_dumped_data

0x9207,	// (0x0004bcba) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x9207,	// (0x0004bcba) list_single_fs_bigclock_indicator_pane_g1

0x9231,	// (0x0004bce4) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x9231,	// (0x0004bce4) list_single_fs_bigclock_indicator_pane_g2

0x924b,	// (0x0004bcfe) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x924b,	// (0x0004bcfe) list_single_fs_bigclock_indicator_pane_g3

0x9265,	// (0x0004bd18) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x9265,	// (0x0004bd18) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfba5,	// (0x00052658) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfba5,	// (0x00052658) list_single_fs_bigclock_indicator_pane_g

0x9290,	// (0x0004bd43) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x9290,	// (0x0004bd43) list_single_fs_bigclock_indicator_pane_t1

0x92b8,	// (0x0004bd6b) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x92b8,	// (0x0004bd6b) list_single_fs_bigclock_indicator_pane_t2

0x92e0,	// (0x0004bd93) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x92e0,	// (0x0004bd93) list_single_fs_bigclock_indicator_pane_t3

0x9308,	// (0x0004bdbb) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x9308,	// (0x0004bdbb) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbb0,	// (0x00052663) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbb0,	// (0x00052663) list_single_fs_bigclock_indicator_pane_t

0xbae0,	// (0x0004e593) image3_infobar_fav_pane_ParamLimits

0xbae0,	// (0x0004e593) image3_infobar_fav_pane

0xbaf0,	// (0x0004e5a3) image3_infobar_loc_pane_ParamLimits

0xbaf0,	// (0x0004e5a3) image3_infobar_loc_pane

0xbb06,	// (0x0004e5b9) image3_infobar_time_pane_ParamLimits

0xbb06,	// (0x0004e5b9) image3_infobar_time_pane

0xe891,	// (0x00051344) image3_infobar_time_pane_g1

0xbb16,	// (0x0004e5c9) image3_infobar_time_pane_t1

0xe891,	// (0x00051344) image3_infobar_loc_pane_g1

0xbb24,	// (0x0004e5d7) image3_infobar_loc_pane_g2

0x0001,

0xfd7c,	// (0x0005282f) image3_infobar_loc_pane_g

0xbb2c,	// (0x0004e5df) image3_infobar_loc_pane_t1

0xe891,	// (0x00051344) image3_infobar_fav_pane_g1

0xbb3a,	// (0x0004e5ed) image3_infobar_fav_pane_g2

0x0001,

0xfd81,	// (0x00052834) image3_infobar_fav_pane_g

0xbb42,	// (0x0004e5f5) fs_bigclock_status_battery_pane

0xbb4b,	// (0x0004e5fe) fs_bigclock_status_signal_pane

0xbb54,	// (0x0004e607) fs_bigclock_status_title_pane

0xbb5d,	// (0x0004e610) fs_bigclock_status_signal_pane_g1

0xbb66,	// (0x0004e619) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd86,	// (0x00052839) fs_bigclock_status_signal_pane_g

0xbb6e,	// (0x0004e621) fs_bigclock_status_battery_pane_g1

0xbb77,	// (0x0004e62a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd8b,	// (0x0005283e) fs_bigclock_status_battery_pane_g

0xbb7f,	// (0x0004e632) fs_bigclock_status_title_pane_t1

0xe891,	// (0x00051344) main_fs_bigclock_clock_pane_g1

0xbb8d,	// (0x0004e640) main_fs_bigclock_clock_pane_g2

0xbb8d,	// (0x0004e640) main_fs_bigclock_clock_pane_g3

0xbb8d,	// (0x0004e640) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd90,	// (0x00052843) main_fs_bigclock_clock_pane_g

0xbb95,	// (0x0004e648) main_fs_bigclock_clock_pane_t1

0xbba3,	// (0x0004e656) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd99,	// (0x0005284c) main_fs_bigclock_clock_pane_t

0x9e06,	// (0x0004c8b9) list_single_fs_bigclock_indicator_pane_ParamLimits

0x9e06,	// (0x0004c8b9) list_single_fs_bigclock_indicator_pane

0x9e17,	// (0x0004c8ca) list_single_fs_bigclock_pane_ParamLimits

0x9e17,	// (0x0004c8ca) list_single_fs_bigclock_pane

0xbbbb,	// (0x0004e66e) main_fs_bigclock_indicator_pane_t1

0xbbca,	// (0x0004e67d) list_single_fs_bigclock_pane_g1

0xbbd2,	// (0x0004e685) list_single_fs_bigclock_pane_t1

0xe891,	// (0x00051344) main_fs_bigclock_swipe_pane_g1

0xbc15,	// (0x0004e6c8) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdaa,	// (0x0005285d) main_fs_bigclock_swipe_pane_g

0xbc1d,	// (0x0004e6d0) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xbc1d,	// (0x0004e6d0) main_fs_bigclock_swipe_pane_t1

0x3069,	// (0x00045b1c) call_type_pane_ParamLimits

0xa6a9,	// (0x0004d15c) main_btmg_pane

0xb879,	// (0x0004e32c) list_single_cale_mrui_row_pane_g2_ParamLimits

0xb879,	// (0x0004e32c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd1d,	// (0x000527d0) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd1d,	// (0x000527d0) list_single_cale_mrui_row_pane_g

0xb9d7,	// (0x0004e48a) list_recal_vselct_arw_lo_pane

0xb9df,	// (0x0004e492) list_recal_vselct_arw_up_pane

0xb1fb,	// (0x0004dcae) list_recal_vselct_pane

0xbc3a,	// (0x0004e6ed) btmg_button_pane

0x9e7a,	// (0x0004c92d) main_btmg_pane_g1

0xa6a9,	// (0x0004d15c) bg_button_pane_cp044

0xbc44,	// (0x0004e6f7) btmg_button_pane_t1

0xe406,	// (0x00050eb9) aid_listscroll_gen

0xa722,	// (0x0004d1d5) main_cntbar_detail_pane

0xb579,	// (0x0004e02c) list_cmail_folder_pane

0xb589,	// (0x0004e03c) sp_fs_scroll_pane_cp03_ParamLimits

0x1307,	// (0x00043dba) list_single_fs_dyc_pane_cp01_ParamLimits

0x1307,	// (0x00043dba) list_single_fs_dyc_pane_cp01

0xbc52,	// (0x0004e705) aid_size_cmail_indent

0xbc5b,	// (0x0004e70e) list_single_dyc_row_pane_cp01

0x9eb4,	// (0x0004c967) cntbar_detail_list_pane_ParamLimits

0x9eb4,	// (0x0004c967) cntbar_detail_list_pane

0x9f06,	// (0x0004c9b9) main_cntbar_detail_cont_pane_ParamLimits

0x9f06,	// (0x0004c9b9) main_cntbar_detail_cont_pane

0x305d,	// (0x00045b10) scroll_pane_cp032_ParamLimits

0x305d,	// (0x00045b10) scroll_pane_cp032

0x9f1a,	// (0x0004c9cd) cntbar_detail_list_event_pane_ParamLimits

0x9f1a,	// (0x0004c9cd) cntbar_detail_list_event_pane

0x9ec6,	// (0x0004c979) cntbar_detail_list_shct_pane

0xc9e3,	// (0x0004f496) aid_list_gen

0xbc64,	// (0x0004e717) aid_scroll

0xbc6d,	// (0x0004e720) aid_size_touch_scroll_bar

0x9f2a,	// (0x0004c9dd) aid_list_double

0xbc76,	// (0x0004e729) aid_list_single

0x9f33,	// (0x0004c9e6) aid_list_single_lg

0xbc7f,	// (0x0004e732) aid_list_z_g_a_sm

0xbc87,	// (0x0004e73a) aid_list_z_g_d

0xbc8f,	// (0x0004e742) aid_txt_z_prm

0x1322,	// (0x00043dd5) aid_txt_z_prm_cp01

0x1330,	// (0x00043de3) aid_txt_z_sec

0x9f3c,	// (0x0004c9ef) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9f3c,	// (0x0004c9ef) main_cntbar_detail_cont_pane_g1

0x9f50,	// (0x0004ca03) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9f50,	// (0x0004ca03) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdaf,	// (0x00052862) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdaf,	// (0x00052862) main_cntbar_detail_cont_pane_g

0xbc9d,	// (0x0004e750) main_cntbar_detail_cont_pane_t1

0xbcab,	// (0x0004e75e) main_cntbar_detail_cont_pane_t2

0xbcb9,	// (0x0004e76c) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdb4,	// (0x00052867) main_cntbar_detail_cont_pane_t

0x9f60,	// (0x0004ca13) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9f60,	// (0x0004ca13) cell_cntbar_detail_list_shct_pane

0xbcc7,	// (0x0004e77a) cntbar_detail_list_shct_pane_g1

0xbcd0,	// (0x0004e783) cntbar_detail_list_shct_pane_g2

0x0001,

0xfdbb,	// (0x0005286e) cntbar_detail_list_shct_pane_g

0x9f72,	// (0x0004ca25) cntbar_detail_list_event_pane_g1_ParamLimits

0x9f72,	// (0x0004ca25) cntbar_detail_list_event_pane_g1

0x9f7e,	// (0x0004ca31) cntbar_detail_list_event_pane_g2_ParamLimits

0x9f7e,	// (0x0004ca31) cntbar_detail_list_event_pane_g2

0x0005,

0xfdc0,	// (0x00052873) cntbar_detail_list_event_pane_g_ParamLimits

0xfdc0,	// (0x00052873) cntbar_detail_list_event_pane_g

0x9fec,	// (0x0004ca9f) cntbar_detail_list_event_pane_t1_ParamLimits

0x9fec,	// (0x0004ca9f) cntbar_detail_list_event_pane_t1

0xa001,	// (0x0004cab4) cntbar_detail_list_event_pane_t2_ParamLimits

0xa001,	// (0x0004cab4) cntbar_detail_list_event_pane_t2

0x0002,

0xfdcd,	// (0x00052880) cntbar_detail_list_event_pane_t_ParamLimits

0xfdcd,	// (0x00052880) cntbar_detail_list_event_pane_t

0xe891,	// (0x00051344) cell_cntbar_detail_list_shct_pane_g1

0x3423,	// (0x00045ed6) navi_pane_mv_g3

0xa722,	// (0x0004d1d5) main_cntbar_detail_pane_ParamLimits

0xa6a9,	// (0x0004d15c) main_notif_wgt_pane

0xada4,	// (0x0004d857) aid_tch_main_mp4_pane_g4

0xaf82,	// (0x0004da35) popup_slider_window_cp02

0xb9ce,	// (0x0004e481) list_recal_day_event_pane

0x9e84,	// (0x0004c937) cntbar_detail_btn_pane_ParamLimits

0x9e84,	// (0x0004c937) cntbar_detail_btn_pane

0x9e9c,	// (0x0004c94f) cntbar_detail_btn_pane_cp01_ParamLimits

0x9e9c,	// (0x0004c94f) cntbar_detail_btn_pane_cp01

0x9ec6,	// (0x0004c979) cntbar_detail_list_shct_pane_ParamLimits

0x9ed6,	// (0x0004c989) cntbar_detail_pane_g1_ParamLimits

0x9ed6,	// (0x0004c989) cntbar_detail_pane_g1

0x9eea,	// (0x0004c99d) cntbar_detail_pane_t1_ParamLimits

0x9eea,	// (0x0004c99d) cntbar_detail_pane_t1

0x9f8a,	// (0x0004ca3d) cntbar_detail_list_event_pane_g3_ParamLimits

0x9f8a,	// (0x0004ca3d) cntbar_detail_list_event_pane_g3

0x9fa2,	// (0x0004ca55) cntbar_detail_list_event_pane_g4_ParamLimits

0x9fa2,	// (0x0004ca55) cntbar_detail_list_event_pane_g4

0x9fba,	// (0x0004ca6d) cntbar_detail_list_event_pane_g5_ParamLimits

0x9fba,	// (0x0004ca6d) cntbar_detail_list_event_pane_g5

0x9fd2,	// (0x0004ca85) cntbar_detail_list_event_pane_g6_ParamLimits

0x9fd2,	// (0x0004ca85) cntbar_detail_list_event_pane_g6

0xa016,	// (0x0004cac9) cntbar_detail_list_event_pane_t3_ParamLimits

0xa016,	// (0x0004cac9) cntbar_detail_list_event_pane_t3

0xa028,	// (0x0004cadb) popup_notif_wgt_window_ParamLimits

0xa028,	// (0x0004cadb) popup_notif_wgt_window

0xa041,	// (0x0004caf4) popup_submenu_window_cp01_ParamLimits

0xa041,	// (0x0004caf4) popup_submenu_window_cp01

0xcfd1,	// (0x0004fa84) bg_popup_window_pane_cp10

0xbcd9,	// (0x0004e78c) listscroll_notif_wgt_pane

0xbce3,	// (0x0004e796) list_notif_wgt_window

0xbcec,	// (0x0004e79f) scroll_pane_cp033

0xbcf5,	// (0x0004e7a8) list_notif_wgt_row_pane_ParamLimits

0xbcf5,	// (0x0004e7a8) list_notif_wgt_row_pane

0xbd09,	// (0x0004e7bc) aid_size_list_notif_wgt_del

0xbd12,	// (0x0004e7c5) list_notif_wgt_row_pane_g1

0xbd1a,	// (0x0004e7cd) list_notif_wgt_row_pane_g2

0xbd22,	// (0x0004e7d5) list_notif_wgt_row_pane_g3

0x0002,

0xfdd4,	// (0x00052887) list_notif_wgt_row_pane_g

0xbd2b,	// (0x0004e7de) list_notif_wgt_row_pane_t1

0xbd39,	// (0x0004e7ec) list_notif_wgt_row_pane_t2

0xbd47,	// (0x0004e7fa) list_notif_wgt_row_pane_t3

0x0002,

0xfddb,	// (0x0005288e) list_notif_wgt_row_pane_t

0x76db,	// (0x0004a18e) list_recal_day_event_pane_g1

0xbd55,	// (0x0004e808) list_recal_day_event_pane_t1

0xa6a9,	// (0x0004d15c) bg_button_pane_cp045

0xbd64,	// (0x0004e817) cntbar_detail_btn_pane_t1

0xe40e,	// (0x00050ec1) main_callh_pane_ParamLimits

0xe40e,	// (0x00050ec1) main_callh_pane

0xa6a9,	// (0x0004d15c) main_coverflow0_pane

0xa6a9,	// (0x0004d15c) main_wgtman_pane

0x91f1,	// (0x0004bca4) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x91f1,	// (0x0004bca4) main_fs_bigclock_unlock_btn_pane

0xb55b,	// (0x0004e00e) bg_button_pane_cp16

0x99b2,	// (0x0004c465) cell_tport_appsw_pane_g3

0xa055,	// (0x0004cb08) cf0_flow_pane_ParamLimits

0xa055,	// (0x0004cb08) cf0_flow_pane

0xbd72,	// (0x0004e825) listscroll_cf0_pane

0xbd7b,	// (0x0004e82e) main_cf0_pane_g1

0xa06a,	// (0x0004cb1d) main_cf0_pane_t1_ParamLimits

0xa06a,	// (0x0004cb1d) main_cf0_pane_t1

0xa081,	// (0x0004cb34) main_cf0_pane_t2_ParamLimits

0xa081,	// (0x0004cb34) main_cf0_pane_t2

0x0001,

0xfde2,	// (0x00052895) main_cf0_pane_t_ParamLimits

0xfde2,	// (0x00052895) main_cf0_pane_t

0xbd85,	// (0x0004e838) scroll_pane_cp11

0xa098,	// (0x0004cb4b) cf0_flow_pane_g1

0xa0a4,	// (0x0004cb57) cf0_flow_pane_g2

0x0001,

0xfde7,	// (0x0005289a) cf0_flow_pane_g

0xa0b0,	// (0x0004cb63) cf0_flow_pane_t1

0xa6a9,	// (0x0004d15c) main_call6_pane

0xa6a9,	// (0x0004d15c) main_calllock_pane

0xa0c2,	// (0x0004cb75) call6_btn_grp_pane_ParamLimits

0xa0c2,	// (0x0004cb75) call6_btn_grp_pane

0xa0dc,	// (0x0004cb8f) call6_pane_g1_ParamLimits

0xa0dc,	// (0x0004cb8f) call6_pane_g1

0xa0f2,	// (0x0004cba5) popup_call6_1st_window_ParamLimits

0xa0f2,	// (0x0004cba5) popup_call6_1st_window

0xa103,	// (0x0004cbb6) popup_call6_2nd_window_ParamLimits

0xa103,	// (0x0004cbb6) popup_call6_2nd_window

0xa114,	// (0x0004cbc7) cell_call6_btn_pane_ParamLimits

0xa114,	// (0x0004cbc7) cell_call6_btn_pane

0xcfd1,	// (0x0004fa84) bg_popup_call2_in_pane_cp03

0xbd90,	// (0x0004e843) popup_call6_1st_window_g1

0xbd98,	// (0x0004e84b) popup_call6_1st_window_g2

0xbda0,	// (0x0004e853) popup_call6_1st_window_g3

0x0002,

0xfdec,	// (0x0005289f) popup_call6_1st_window_g

0xbda8,	// (0x0004e85b) popup_call6_1st_window_t1

0xbdb7,	// (0x0004e86a) popup_call6_1st_window_t2

0xbdc7,	// (0x0004e87a) popup_call6_1st_window_t3

0x0002,

0xfdf3,	// (0x000528a6) popup_call6_1st_window_t

0xcfd1,	// (0x0004fa84) bg_popup_call2_in_pane_cp04

0xbd90,	// (0x0004e843) popup_call6_2nd_window_g1

0xbd98,	// (0x0004e84b) popup_call6_2nd_window_g2

0xbda0,	// (0x0004e853) popup_call6_2nd_window_g3

0x0002,

0xfdec,	// (0x0005289f) popup_call6_2nd_window_g

0xbda8,	// (0x0004e85b) popup_call6_2nd_window_t1

0xa6a9,	// (0x0004d15c) bg_button_pane_cp15

0xbdd7,	// (0x0004e88a) cell_call6_btn_pane_g1

0xbde0,	// (0x0004e893) cell_call6_btn_pane_t1

0xa128,	// (0x0004cbdb) listscroll_wgtman_pane_ParamLimits

0xa128,	// (0x0004cbdb) listscroll_wgtman_pane

0xa14b,	// (0x0004cbfe) wgtman_btn_pane_ParamLimits

0xa14b,	// (0x0004cbfe) wgtman_btn_pane

0xce97,	// (0x0004f94a) aid_scroll_copy1

0xbdef,	// (0x0004e8a2) list_wgtman_pane

0xa18e,	// (0x0004cc41) wgtman_btn_pane_g1_ParamLimits

0xa18e,	// (0x0004cc41) wgtman_btn_pane_g1

0xa1ba,	// (0x0004cc6d) wgtman_btn_pane_t1_ParamLimits

0xa1ba,	// (0x0004cc6d) wgtman_btn_pane_t1

0xbdf9,	// (0x0004e8ac) wgtman_btn_pane_t2_ParamLimits

0xbdf9,	// (0x0004e8ac) wgtman_btn_pane_t2

0x0001,

0xfdfa,	// (0x000528ad) wgtman_btn_pane_t_ParamLimits

0xfdfa,	// (0x000528ad) wgtman_btn_pane_t

0xa1f7,	// (0x0004ccaa) listrow_wgtman_pane_ParamLimits

0xa1f7,	// (0x0004ccaa) listrow_wgtman_pane

0xa20b,	// (0x0004ccbe) listrow_wgtman_pane_g1

0xa214,	// (0x0004ccc7) listrow_wgtman_pane_g2

0x0001,

0xfdff,	// (0x000528b2) listrow_wgtman_pane_g

0x133e,	// (0x00043df1) listrow_wgtman_pane_t1

0x134c,	// (0x00043dff) listrow_wgtman_pane_t2

0x0001,

0xfe04,	// (0x000528b7) listrow_wgtman_pane_t

0x135a,	// (0x00043e0d) wait_bar_pane_cp09

0xbe10,	// (0x0004e8c3) main_calllock_btn_pane

0xbe1a,	// (0x0004e8cd) main_calllock_pane_g1

0xa6a9,	// (0x0004d15c) bg_button_pane_cp17

0xbe26,	// (0x0004e8d9) main_calllock_btn_pane_g1

0xbe2f,	// (0x0004e8e2) main_calllock_btn_pane_t1

0xa6a9,	// (0x0004d15c) main_dialer3_pane

0xa6a9,	// (0x0004d15c) main_fmrd2_pane

0xe891,	// (0x00051344) main_fs_bigclock_unlock_btn_pane_g1

0xbe46,	// (0x0004e8f9) main_fs_bigclock_unlock_btn_pane_t1

0xa21e,	// (0x0004ccd1) area_fmrd2_info_pane_ParamLimits

0xa21e,	// (0x0004ccd1) area_fmrd2_info_pane

0xa22f,	// (0x0004cce2) area_fmrd2_visual_pane_ParamLimits

0xa22f,	// (0x0004cce2) area_fmrd2_visual_pane

0xa23d,	// (0x0004ccf0) fmrd2_indi_pane_ParamLimits

0xa23d,	// (0x0004ccf0) fmrd2_indi_pane

0xa24a,	// (0x0004ccfd) area_fmrd2_visual_pane_g1

0xa252,	// (0x0004cd05) area_fmrd2_visual_pane_t1

0xa262,	// (0x0004cd15) area_fmrd2_visual_pane_t2

0xa272,	// (0x0004cd25) area_fmrd2_visual_pane_t3

0x0002,

0xfe0e,	// (0x000528c1) area_fmrd2_visual_pane_t

0xa282,	// (0x0004cd35) area_fmrd2_info_pane_g1

0xa28a,	// (0x0004cd3d) area_fmrd2_info_pane_t1

0xa29a,	// (0x0004cd4d) area_fmrd2_info_pane_t2

0xa2aa,	// (0x0004cd5d) area_fmrd2_info_pane_t3

0xa2ba,	// (0x0004cd6d) area_fmrd2_info_pane_t4

0x0003,

0xfe15,	// (0x000528c8) area_fmrd2_info_pane_t

0xa2ca,	// (0x0004cd7d) fmrd2_indi_pane_t1

0xa2da,	// (0x0004cd8d) fmrd2_indi_pane_t2

0xa2ea,	// (0x0004cd9d) fmrd2_indi_pane_t3

0x0002,

0xfe1e,	// (0x000528d1) fmrd2_indi_pane_t

0x9274,	// (0x0004bd27) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x9274,	// (0x0004bd27) list_single_fs_bigclock_indicator_pane_g5

0x931d,	// (0x0004bdd0) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x931d,	// (0x0004bdd0) list_single_fs_bigclock_indicator_pane_t5

0x9b3b,	// (0x0004c5ee) aid_cell_bcale_month_pane_ParamLimits

0x9b3b,	// (0x0004c5ee) aid_cell_bcale_month_pane

0x9b4d,	// (0x0004c600) bcale_month_pane_ParamLimits

0x9b4d,	// (0x0004c600) bcale_month_pane

0x9b67,	// (0x0004c61a) bcale_preview_pane_ParamLimits

0x9b67,	// (0x0004c61a) bcale_preview_pane

0xbbd2,	// (0x0004e685) list_single_fs_bigclock_pane_t1_ParamLimits

0xbbf1,	// (0x0004e6a4) list_single_fs_bigclock_pane_t2_ParamLimits

0xbbf1,	// (0x0004e6a4) list_single_fs_bigclock_pane_t2

0x0001,

0xfda5,	// (0x00052858) list_single_fs_bigclock_pane_t_ParamLimits

0xfda5,	// (0x00052858) list_single_fs_bigclock_pane_t

0xbe3e,	// (0x0004e8f1) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe09,	// (0x000528bc) main_fs_bigclock_unlock_btn_pane_g

0xa2fa,	// (0x0004cdad) aid_dia3_key_size_ParamLimits

0xa2fa,	// (0x0004cdad) aid_dia3_key_size

0xa309,	// (0x0004cdbc) aid_dia3_listrow_size_ParamLimits

0xa309,	// (0x0004cdbc) aid_dia3_listrow_size

0xa317,	// (0x0004cdca) dia3_keypad_fun_pane_ParamLimits

0xa317,	// (0x0004cdca) dia3_keypad_fun_pane

0xa333,	// (0x0004cde6) dia3_keypad_num_pane_ParamLimits

0xa333,	// (0x0004cde6) dia3_keypad_num_pane

0xa34c,	// (0x0004cdff) dia3_listscroll_pane_ParamLimits

0xa34c,	// (0x0004cdff) dia3_listscroll_pane

0xa361,	// (0x0004ce14) dia3_numentry_pane_ParamLimits

0xa361,	// (0x0004ce14) dia3_numentry_pane

0xbe54,	// (0x0004e907) dia3_list_pane

0xbe5f,	// (0x0004e912) scroll_pane_cp12

0xa6a9,	// (0x0004d15c) bg_dia3_numentry_pane

0xbe6a,	// (0x0004e91d) dia3_numentry_pane_t1

0xa374,	// (0x0004ce27) cell_dia3_key_num_pane

0xa37c,	// (0x0004ce2f) cell_dia3_key0_fun_pane_ParamLimits

0xa37c,	// (0x0004ce2f) cell_dia3_key0_fun_pane

0xa390,	// (0x0004ce43) cell_dia3_key1_fun_pane_ParamLimits

0xa390,	// (0x0004ce43) cell_dia3_key1_fun_pane

0xa3a8,	// (0x0004ce5b) dia3_listrow_pane

0x8c7e,	// (0x0004b731) bg_dia3_numentry_pane_g1

0xa6a9,	// (0x0004d15c) bg_button_pane_cp21

0xbe79,	// (0x0004e92c) cell_dia3_key_num_pane_t1

0xbe87,	// (0x0004e93a) cell_dia3_key_num_pane_t2

0xbe96,	// (0x0004e949) cell_dia3_key_num_pane_t3

0xbea5,	// (0x0004e958) cell_dia3_key_num_pane_t4

0x0003,

0xfe25,	// (0x000528d8) cell_dia3_key_num_pane_t

0xa6a9,	// (0x0004d15c) bg_button_pane_cp19

0xa3ba,	// (0x0004ce6d) cell_dia3_key0_fun_pane_g1

0xa6a9,	// (0x0004d15c) bg_button_pane_cp20

0xa3c2,	// (0x0004ce75) cell_dia3_key1_fun_pane_g1

0xa3ca,	// (0x0004ce7d) area_left_week_number_pane

0xa3d3,	// (0x0004ce86) area_top_day_name_pane

0xa3dc,	// (0x0004ce8f) frame_month_view_pane

0xa3e8,	// (0x0004ce9b) grid_month_view_pane

0xa3f2,	// (0x0004cea5) cell_top_day_name_pane_ParamLimits

0xa3f2,	// (0x0004cea5) cell_top_day_name_pane

0xa40c,	// (0x0004cebf) cell_area_left_week_number_pane_ParamLimits

0xa40c,	// (0x0004cebf) cell_area_left_week_number_pane

0xa422,	// (0x0004ced5) cell_month_view_pane_ParamLimits

0xa422,	// (0x0004ced5) cell_month_view_pane

0xbeb4,	// (0x0004e967) frm_month_g1

0xa441,	// (0x0004cef4) frm_month_g2

0xa44b,	// (0x0004cefe) frm_month_g3

0xa455,	// (0x0004cf08) frm_month_g4

0xa45f,	// (0x0004cf12) frm_month_g5

0xa469,	// (0x0004cf1c) frm_month_g6

0xa475,	// (0x0004cf28) frm_month_g7

0xbebd,	// (0x0004e970) frm_month_g8

0xa481,	// (0x0004cf34) frm_month_g9

0xa48a,	// (0x0004cf3d) frm_month_g10

0xa493,	// (0x0004cf46) frm_month_g11

0xa49c,	// (0x0004cf4f) frm_month_g12

0xa4a5,	// (0x0004cf58) frm_month_g13

0xa4ae,	// (0x0004cf61) frm_month_g14

0xa4b7,	// (0x0004cf6a) frm_month_g15

0xa4c2,	// (0x0004cf75) frm_month_g16

0x000f,

0xfe2e,	// (0x000528e1) frm_month_g

0xa4cd,	// (0x0004cf80) cell_top_day_name_pane_t1

0xa4dc,	// (0x0004cf8f) cell_area_left_week_number_pane_g1

0xa4cd,	// (0x0004cf80) cell_area_left_week_number_pane_t1

0xe891,	// (0x00051344) cell_month_view_pane_g1

0xa4e4,	// (0x0004cf97) cell_month_view_pane_t1

0xa6a9,	// (0x0004d15c) main_fps_pane

0x97ec,	// (0x0004c29f) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x97ec,	// (0x0004c29f) cmail_ddmenu_btn02_pane_cp1

0x9808,	// (0x0004c2bb) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x9808,	// (0x0004c2bb) cmail_ddmenu_btn02_pane_cp2

0x9d5a,	// (0x0004c80d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9d5a,	// (0x0004c80d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd58,	// (0x0005280b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd58,	// (0x0005280b) cmail_ddmenu_btn02_pane_g

0x9d78,	// (0x0004c82b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9d78,	// (0x0004c82b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd5d,	// (0x00052810) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd5d,	// (0x00052810) cmail_ddmenu_btn02_pane_t

0xa4f3,	// (0x0004cfa6) fps_text_pane_ParamLimits

0xa4f3,	// (0x0004cfa6) fps_text_pane

0xa50a,	// (0x0004cfbd) main_fps_pane_g1_ParamLimits

0xa50a,	// (0x0004cfbd) main_fps_pane_g1

0xa522,	// (0x0004cfd5) wait_bar_pane_cp010_ParamLimits

0xa522,	// (0x0004cfd5) wait_bar_pane_cp010

0xa535,	// (0x0004cfe8) fps_text_pane_t1_ParamLimits

0xa535,	// (0x0004cfe8) fps_text_pane_t1

0x684a,	// (0x000492fd) cam4_image_uncrop_pane_g1

0x6853,	// (0x00049306) cam4_image_uncrop_pane_g2

0x685e,	// (0x00049311) cam4_image_uncrop_pane_g3

0x6867,	// (0x0004931a) cam4_image_uncrop_pane_g4

0x0003,

0xf82b,	// (0x000522de) cam4_image_uncrop_pane_g

0xa3a8,	// (0x0004ce5b) dia3_listrow_pane_ParamLimits

0xa6a9,	// (0x0004d15c) main_phob2_pane

0x9979,	// (0x0004c42c) cell_tport_appsw_pane_cp02_ParamLimits

0x9979,	// (0x0004c42c) cell_tport_appsw_pane_cp02

0x998d,	// (0x0004c440) cell_tport_appsw_pane_cp03_ParamLimits

0x998d,	// (0x0004c440) cell_tport_appsw_pane_cp03

0xa6a9,	// (0x0004d15c) phob2_contact_card_pane

0xa6a9,	// (0x0004d15c) phob2_listscroll_pane

0xbec6,	// (0x0004e979) phob2_list_pane

0xbece,	// (0x0004e981) scroll_pane_cp034

0xa54d,	// (0x0004d000) phob2_cc_data_pane_ParamLimits

0xa54d,	// (0x0004d000) phob2_cc_data_pane

0xa56e,	// (0x0004d021) phob2_cc_listscroll_pane_ParamLimits

0xa56e,	// (0x0004d021) phob2_cc_listscroll_pane

0xa590,	// (0x0004d043) list_double_large_graphic_phob2_pane_ParamLimits

0xa590,	// (0x0004d043) list_double_large_graphic_phob2_pane

0xa5a5,	// (0x0004d058) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa5a5,	// (0x0004d058) list_double_large_graphic_phob2_pane_g1

0x1362,	// (0x00043e15) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1362,	// (0x00043e15) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe4f,	// (0x00052902) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe4f,	// (0x00052902) list_double_large_graphic_phob2_pane_g

0x136e,	// (0x00043e21) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x136e,	// (0x00043e21) list_double_large_graphic_phob2_pane_t1

0x1383,	// (0x00043e36) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1383,	// (0x00043e36) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe54,	// (0x00052907) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe54,	// (0x00052907) list_double_large_graphic_phob2_pane_t

0xa6a9,	// (0x0004d15c) list_highlight_pane_cp024

0xbed6,	// (0x0004e989) phob2_cc_button_pane

0xa5b2,	// (0x0004d065) phob2_cc_data_pane_g1_ParamLimits

0xa5b2,	// (0x0004d065) phob2_cc_data_pane_g1

0xa5c8,	// (0x0004d07b) phob2_cc_data_pane_g2_ParamLimits

0xa5c8,	// (0x0004d07b) phob2_cc_data_pane_g2

0x0001,

0xfe59,	// (0x0005290c) phob2_cc_data_pane_g_ParamLimits

0xfe59,	// (0x0005290c) phob2_cc_data_pane_g

0xa5dc,	// (0x0004d08f) phob2_cc_data_pane_t1_ParamLimits

0xa5dc,	// (0x0004d08f) phob2_cc_data_pane_t1

0xa5f6,	// (0x0004d0a9) phob2_cc_data_pane_t2_ParamLimits

0xa5f6,	// (0x0004d0a9) phob2_cc_data_pane_t2

0xa610,	// (0x0004d0c3) phob2_cc_data_pane_t3_ParamLimits

0xa610,	// (0x0004d0c3) phob2_cc_data_pane_t3

0x0002,

0xfe5e,	// (0x00052911) phob2_cc_data_pane_t_ParamLimits

0xfe5e,	// (0x00052911) phob2_cc_data_pane_t

0xbede,	// (0x0004e991) phob2_cc_list_pane_ParamLimits

0xbede,	// (0x0004e991) phob2_cc_list_pane

0x794e,	// (0x0004a401) scroll_pane_cp035_ParamLimits

0x794e,	// (0x0004a401) scroll_pane_cp035

0xa722,	// (0x0004d1d5) bg_button_pane_cp033

0xbeea,	// (0x0004e99d) phob2_cc_button_pane_g1

0xbef6,	// (0x0004e9a9) phob2_cc_button_pane_t1

0xbf0b,	// (0x0004e9be) phob2_cc_button_pane_t2

0x0001,

0xfe65,	// (0x00052918) phob2_cc_button_pane_t

0xa62a,	// (0x0004d0dd) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa62a,	// (0x0004d0dd) list_double_large_graphic_phob2_cc_pane

0xa63f,	// (0x0004d0f2) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa63f,	// (0x0004d0f2) list_double_large_graphic_phob2_cc_pane_g1

0x1395,	// (0x00043e48) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1395,	// (0x00043e48) list_double_large_graphic_phob2_cc_pane_g2

0x13a1,	// (0x00043e54) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x13a1,	// (0x00043e54) list_double_large_graphic_phob2_cc_pane_g3

0x13ad,	// (0x00043e60) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x13ad,	// (0x00043e60) list_double_large_graphic_phob2_cc_pane_g4

0x13b9,	// (0x00043e6c) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x13b9,	// (0x00043e6c) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe6a,	// (0x0005291d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe6a,	// (0x0005291d) list_double_large_graphic_phob2_cc_pane_g

0x13c5,	// (0x00043e78) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x13c5,	// (0x00043e78) list_double_large_graphic_phob2_cc_pane_t1

0x13ee,	// (0x00043ea1) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x13ee,	// (0x00043ea1) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe75,	// (0x00052928) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe75,	// (0x00052928) list_double_large_graphic_phob2_cc_pane_t

0xbf1d,	// (0x0004e9d0) list_highlight_pane_cp025_ParamLimits

0xbf1d,	// (0x0004e9d0) list_highlight_pane_cp025

0xa722,	// (0x0004d1d5) bg_button_pane_cp033_ParamLimits

0xbeea,	// (0x0004e99d) phob2_cc_button_pane_g1_ParamLimits

0xbef6,	// (0x0004e9a9) phob2_cc_button_pane_t1_ParamLimits

0xbf0b,	// (0x0004e9be) phob2_cc_button_pane_t2_ParamLimits

0xfe65,	// (0x00052918) phob2_cc_button_pane_t_ParamLimits

0x1636,	// (0x000440e9) popup_wgtman_window

0x70fa,	// (0x00049bad) scroll_pane_cp038

0xa170,	// (0x0004cc23) wgtman_btn_pane_cp_01_ParamLimits

0xa170,	// (0x0004cc23) wgtman_btn_pane_cp_01

0xbf2b,	// (0x0004e9de) wgtman_content_pane

0xbf34,	// (0x0004e9e7) wgtman_heading_pane

0xa6a9,	// (0x0004d15c) bg_heading_pane_cp02

0xbf3d,	// (0x0004e9f0) wgtman_heading_pane_g1

0xbf45,	// (0x0004e9f8) wgtman_heading_pane_t1

0xbf53,	// (0x0004ea06) scroll_pane_cp036

0xbf5b,	// (0x0004ea0e) wgtman_list_pane

0xbf63,	// (0x0004ea16) wgtman_list_pane_t1_ParamLimits

0xbf63,	// (0x0004ea16) wgtman_list_pane_t1

0xafe0,	// (0x0004da93) cam4_grid_pane

0x0c3f,	// (0x000436f2) bg_button_pane_cp015_ParamLimits

0x77e3,	// (0x0004a296) bg_button_pane_cp016_ParamLimits

0x77f6,	// (0x0004a2a9) bg_button_pane_cp017_ParamLimits

0x0c87,	// (0x0004373a) popup_vitu2_query_window_g3_ParamLimits

0x0c87,	// (0x0004373a) popup_vitu2_query_window_g3

0x0d02,	// (0x000437b5) popup_vitu2_query_window_t6_ParamLimits

0x0d02,	// (0x000437b5) popup_vitu2_query_window_t6

0x0d2d,	// (0x000437e0) popup_vitu2_query_window_t7_ParamLimits

0x0d2d,	// (0x000437e0) popup_vitu2_query_window_t7

0x684a,	// (0x000492fd) cam4_grid_pane_g1

0x6853,	// (0x00049306) cam4_grid_pane_g2

0xbf86,	// (0x0004ea39) cam4_grid_pane_g3

0xbf8f,	// (0x0004ea42) cam4_grid_pane_g4

0x0003,

0xfe7a,	// (0x0005292d) cam4_grid_pane_g

0x2284,	// (0x00044d37) aid_placing_vt_slider_lsc_ParamLimits

0x2571,	// (0x00045024) vidtel_button_pane_ParamLimits

0x2571,	// (0x00045024) vidtel_button_pane

0xbf9a,	// (0x0004ea4d) bg_button_pane_cp034

0xa64b,	// (0x0004d0fe) vidtel_button_pane_g1

0xbfa4,	// (0x0004ea57) vidtel_button_pane_t1

0x74f1,	// (0x00049fa4) aid_size_vtel_slider_touch

0x794e,	// (0x0004a401) scroll_pane_cp039

0x8ced,	// (0x0004b7a0) ncim_query_button_pane_cp01_ParamLimits

0x8d0c,	// (0x0004b7bf) ncimui_query_pane_g1_ParamLimits

0xa722,	// (0x0004d1d5) input_focus_pane_cp012_ParamLimits

0x8d31,	// (0x0004b7e4) ncim_query_entry_pane_t1_ParamLimits

0x794e,	// (0x0004a401) scroll_pane_cp039_ParamLimits

0x3395,	// (0x00045e48) navi_pane_bcale_mc_g1

0x339d,	// (0x00045e50) navi_pane_bcale_mc_t1

0x9879,	// (0x0004c32c) main_sp_fs_email_pane_g1

0x9881,	// (0x0004c334) main_sp_fs_email_pane_g2

0x0001,

0xfc16,	// (0x000526c9) main_sp_fs_email_pane_g

0xb885,	// (0x0004e338) list_single_cale_mrui_row_pane_g3_ParamLimits

0xb885,	// (0x0004e338) list_single_cale_mrui_row_pane_g3

0x9da0,	// (0x0004c853) list_single_recal_day_pane_g5_event_pane

0xba40,	// (0x0004e4f3) list_single_recal_day_pane_g7

0xbfb2,	// (0x0004ea65) list_recal_day_event_pane_cp01

0xbfbb,	// (0x0004ea6e) list_recal_vselct_arw_lo_pane_cp01

0xbfc3,	// (0x0004ea76) list_recal_vselct_arw_up_pane_cp01

0xbfcb,	// (0x0004ea7e) list_recal_vselct_pane_cp01

0x76db,	// (0x0004a18e) list_recal_day_event_pane_cp01_g1

0xbfd5,	// (0x0004ea88) list_recal_day_event_pane_cp01_t1

0xba48,	// (0x0004e4fb) list_single_recal_day_pane_t1_ParamLimits

0xba5a,	// (0x0004e50d) list_single_recal_day_pane_t2_ParamLimits

0xfd6d,	// (0x00052820) list_single_recal_day_pane_t_ParamLimits

0xc559,	// (0x0004f00c) bg_notes_pane_ParamLimits

0xc567,	// (0x0004f01a) list_notes_pane_ParamLimits

0x194d,	// (0x00044400) scroll_pane_cp06_ParamLimits

0xc589,	// (0x0004f03c) main_notes_pane_ParamLimits

0xa6a9,	// (0x0004d15c) main_welc_pane

0xa653,	// (0x0004d106) main_welc_body_pane_ParamLimits

0xa653,	// (0x0004d106) main_welc_body_pane

0xa669,	// (0x0004d11c) main_welc_opti_pane_ParamLimits

0xa669,	// (0x0004d11c) main_welc_opti_pane

0xa680,	// (0x0004d133) main_welc_pane_t1_ParamLimits

0xa680,	// (0x0004d133) main_welc_pane_t1

0xbfe3,	// (0x0004ea96) main_welc_body_row_pane_ParamLimits

0xbfe3,	// (0x0004ea96) main_welc_body_row_pane

0xa699,	// (0x0004d14c) main_welc_opti_row_pane_ParamLimits

0xa699,	// (0x0004d14c) main_welc_opti_row_pane

0xbffa,	// (0x0004eaad) main_welc_opti_row_pane_g1

0xc002,	// (0x0004eab5) main_welc_opti_row_pane_t1

0xc011,	// (0x0004eac4) main_welc_body_row_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
