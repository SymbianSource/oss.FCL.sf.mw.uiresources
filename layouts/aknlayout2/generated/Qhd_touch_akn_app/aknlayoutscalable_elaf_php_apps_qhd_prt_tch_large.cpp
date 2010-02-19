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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00064e21 };

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
0x7838,	// (0x0006c659) Screen

0x7844,	// (0x0006c665) application_window

0x78aa,	// (0x0006c6cb) area_bottom_pane_ParamLimits

0x78aa,	// (0x0006c6cb) area_bottom_pane

0x7903,	// (0x0006c724) area_top_pane_ParamLimits

0x7903,	// (0x0006c724) area_top_pane

0x7967,	// (0x0006c788) call_video_uplink_pane_ParamLimits

0x7967,	// (0x0006c788) call_video_uplink_pane

0x79a4,	// (0x0006c7c5) main_pane_ParamLimits

0x79a4,	// (0x0006c7c5) main_pane

0x290a,	// (0x0006772b) context_pane

0xa91a,	// (0x0006f73b) navi_pane

0xa93a,	// (0x0006f75b) popup_cale_events_window_ParamLimits

0xa93a,	// (0x0006f75b) popup_cale_events_window

0x291d,	// (0x0006773e) popup_mup_playback_window

0xa952,	// (0x0006f773) signal_pane

0x0825,	// (0x00065646) main_browser_pane

0x147b,	// (0x0006629c) main_burst_pane

0xa7e4,	// (0x0006f605) main_calc_pane

0x147b,	// (0x0006629c) main_cale_day_pane

0x0825,	// (0x00065646) main_cale_month_pane

0x147b,	// (0x0006629c) main_cale_week_pane

0x147b,	// (0x0006629c) main_call_pane

0x04cb,	// (0x000652ec) main_call_poc_pane

0x147b,	// (0x0006629c) main_camera_pane

0x147b,	// (0x0006629c) main_chi_dic_pane

0x1300,	// (0x00066121) main_clock_pane

0x04cb,	// (0x000652ec) main_fmradio_pane

0x147b,	// (0x0006629c) main_graph_messa_pane

0x04cb,	// (0x000652ec) main_help_pane

0x0825,	// (0x00065646) main_im_pane

0x0726,	// (0x00065547) main_image_pane_ParamLimits

0x0726,	// (0x00065547) main_image_pane

0x04cb,	// (0x000652ec) main_location2_pane

0x147b,	// (0x0006629c) main_location_pane

0x04cb,	// (0x000652ec) main_messa_pane

0x04cb,	// (0x000652ec) main_mp2_pane

0x147b,	// (0x0006629c) main_mp_pane

0x04cb,	// (0x000652ec) main_msg_pane

0x04cb,	// (0x000652ec) main_mup_eq_pane

0x04cb,	// (0x000652ec) main_mup_pane

0x0825,	// (0x00065646) main_notes_pane

0x04cb,	// (0x000652ec) main_pec_pane

0x04cb,	// (0x000652ec) main_phob_pane

0x04cb,	// (0x000652ec) main_pinb_pane

0x04cb,	// (0x000652ec) main_postcard_pane

0x04cb,	// (0x000652ec) main_qdial_pane

0x147b,	// (0x0006629c) main_skin_pane

0x04cb,	// (0x000652ec) main_smil2_pane

0x147b,	// (0x0006629c) main_smil_pane

0x147b,	// (0x0006629c) main_video_pane

0x147b,	// (0x0006629c) main_video_tele_pane

0x0726,	// (0x00065547) main_viewer_pane_ParamLimits

0x0726,	// (0x00065547) main_viewer_pane

0x147b,	// (0x0006629c) main_vorec_pane

0xa81a,	// (0x0006f63b) popup_blid_sat_info_window_ParamLimits

0xa81a,	// (0x0006f63b) popup_blid_sat_info_window

0xa830,	// (0x0006f651) popup_dyc_status_message_window_ParamLimits

0xa830,	// (0x0006f651) popup_dyc_status_message_window

0xa840,	// (0x0006f661) popup_grid_large_graphic_window_ParamLimits

0xa840,	// (0x0006f661) popup_grid_large_graphic_window

0xa8b6,	// (0x0006f6d7) popup_loc_request_window_ParamLimits

0xa8b6,	// (0x0006f6d7) popup_loc_request_window

0xa8f2,	// (0x0006f713) popup_wml_address_window_ParamLimits

0xa8f2,	// (0x0006f713) popup_wml_address_window

0xa6bc,	// (0x0006f4dd) call_muted_g1

0xa37e,	// (0x0006f19f) popup_call_audio_conf_window_ParamLimits

0xa37e,	// (0x0006f19f) popup_call_audio_conf_window

0xa6cc,	// (0x0006f4ed) popup_call_audio_first_window_ParamLimits

0xa6cc,	// (0x0006f4ed) popup_call_audio_first_window

0xa70c,	// (0x0006f52d) popup_call_audio_in_window_ParamLimits

0xa70c,	// (0x0006f52d) popup_call_audio_in_window

0xa730,	// (0x0006f551) popup_call_audio_out_window_ParamLimits

0xa730,	// (0x0006f551) popup_call_audio_out_window

0xa752,	// (0x0006f573) popup_call_audio_second_window_ParamLimits

0xa752,	// (0x0006f573) popup_call_audio_second_window

0xa782,	// (0x0006f5a3) popup_call_audio_wait_window_ParamLimits

0xa782,	// (0x0006f5a3) popup_call_audio_wait_window

0xa7a3,	// (0x0006f5c4) popup_number_entry_window_ParamLimits

0xa7a3,	// (0x0006f5c4) popup_number_entry_window

0x00b8,	// (0x00064ed9) bg_popup_call_pane_cp05_ParamLimits

0x00b8,	// (0x00064ed9) bg_popup_call_pane_cp05

0x00d8,	// (0x00064ef9) popup_number_entry_window_t1

0x00eb,	// (0x00064f0c) popup_number_entry_window_t2

0x00fd,	// (0x00064f1e) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x00073f08) popup_number_entry_window_t

0x010f,	// (0x00064f30) text_title_cp2

0x0122,	// (0x00064f43) bg_popup_call_pane_cp_ParamLimits

0x0122,	// (0x00064f43) bg_popup_call_pane_cp

0x0130,	// (0x00064f51) call_thumbnail_pane

0x0138,	// (0x00064f59) popup_call_audio_in_window_g1_ParamLimits

0x0138,	// (0x00064f59) popup_call_audio_in_window_g1

0x0144,	// (0x00064f65) popup_call_audio_in_window_g2_ParamLimits

0x0144,	// (0x00064f65) popup_call_audio_in_window_g2

0x0150,	// (0x00064f71) popup_call_audio_in_window_g3_ParamLimits

0x0150,	// (0x00064f71) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x00073f11) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x00073f11) popup_call_audio_in_window_g

0x015c,	// (0x00064f7d) popup_call_audio_in_window_t1_ParamLimits

0x015c,	// (0x00064f7d) popup_call_audio_in_window_t1

0x0178,	// (0x00064f99) popup_call_audio_in_window_t2_ParamLimits

0x0178,	// (0x00064f99) popup_call_audio_in_window_t2

0x0194,	// (0x00064fb5) popup_call_audio_in_window_t3_ParamLimits

0x0194,	// (0x00064fb5) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x00073f18) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x00073f18) popup_call_audio_in_window_t

0x0122,	// (0x00064f43) bg_popup_call_pane_cp01_ParamLimits

0x0122,	// (0x00064f43) bg_popup_call_pane_cp01

0x0130,	// (0x00064f51) call_thumbnail_pane_cp02

0x01a7,	// (0x00064fc8) call_type_pane_cp022

0x01af,	// (0x00064fd0) popup_call_audio_out_window_g1_ParamLimits

0x01af,	// (0x00064fd0) popup_call_audio_out_window_g1

0x01c1,	// (0x00064fe2) popup_call_audio_out_window_g2_ParamLimits

0x01c1,	// (0x00064fe2) popup_call_audio_out_window_g2

0x01cd,	// (0x00064fee) popup_call_audio_out_window_g3_ParamLimits

0x01cd,	// (0x00064fee) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x00073f1f) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x00073f1f) popup_call_audio_out_window_g

0x01df,	// (0x00065000) popup_call_audio_out_window_t1_ParamLimits

0x01df,	// (0x00065000) popup_call_audio_out_window_t1

0x01f7,	// (0x00065018) popup_call_audio_out_window_t2_ParamLimits

0x01f7,	// (0x00065018) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x00073f26) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x00073f26) popup_call_audio_out_window_t

0x020c,	// (0x0006502d) bg_popup_call_pane_ParamLimits

0x020c,	// (0x0006502d) bg_popup_call_pane

0x7ba9,	// (0x0006c9ca) call_thumbnail_pane_cp_ParamLimits

0x7ba9,	// (0x0006c9ca) call_thumbnail_pane_cp

0x0290,	// (0x000650b1) call_type_pane_cp01_ParamLimits

0x0290,	// (0x000650b1) call_type_pane_cp01

0x02d4,	// (0x000650f5) popup_call_audio_first_window_g1_ParamLimits

0x02d4,	// (0x000650f5) popup_call_audio_first_window_g1

0x0320,	// (0x00065141) popup_call_audio_first_window_g2_ParamLimits

0x0320,	// (0x00065141) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x00073f2b) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x00073f2b) popup_call_audio_first_window_g

0x0364,	// (0x00065185) popup_call_audio_first_window_t1_ParamLimits

0x0364,	// (0x00065185) popup_call_audio_first_window_t1

0x0410,	// (0x00065231) popup_call_audio_first_window_t4_ParamLimits

0x0410,	// (0x00065231) popup_call_audio_first_window_t4

0x049c,	// (0x000652bd) popup_call_audio_first_window_t5_ParamLimits

0x049c,	// (0x000652bd) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x00073f30) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x00073f30) popup_call_audio_first_window_t

0x04cb,	// (0x000652ec) bg_popup_call_pane_cp02

0x04d5,	// (0x000652f6) call_type_pane_cp023

0x04dd,	// (0x000652fe) popup_call_audio_wait_window_g1

0x04e5,	// (0x00065306) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x00073f37) popup_call_audio_wait_window_g

0x04ed,	// (0x0006530e) popup_call_audio_wait_window_t3

0x04fb,	// (0x0006531c) bg_popup_call_pane_cp03_ParamLimits

0x04fb,	// (0x0006531c) bg_popup_call_pane_cp03

0x055b,	// (0x0006537c) call_thumbnail_pane_cp011_ParamLimits

0x055b,	// (0x0006537c) call_thumbnail_pane_cp011

0x0567,	// (0x00065388) call_type_pane_cp034_ParamLimits

0x0567,	// (0x00065388) call_type_pane_cp034

0x05a3,	// (0x000653c4) popup_call_audio_second_window_g1_ParamLimits

0x05a3,	// (0x000653c4) popup_call_audio_second_window_g1

0x05df,	// (0x00065400) popup_call_audio_second_window_g2_ParamLimits

0x05df,	// (0x00065400) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x00073f3c) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x00073f3c) popup_call_audio_second_window_g

0x061b,	// (0x0006543c) popup_call_audio_second_window_t1_ParamLimits

0x061b,	// (0x0006543c) popup_call_audio_second_window_t1

0x069c,	// (0x000654bd) popup_call_audio_second_window_t2_ParamLimits

0x069c,	// (0x000654bd) popup_call_audio_second_window_t2

0x06d2,	// (0x000654f3) popup_call_audio_second_window_t3_ParamLimits

0x06d2,	// (0x000654f3) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x00073f41) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x00073f41) popup_call_audio_second_window_t

0x04cb,	// (0x000652ec) bg_popup_call_pane_cp04

0x0708,	// (0x00065529) list_conf_pane

0x0710,	// (0x00065531) popup_call_audio_conf_window_t1

0x071e,	// (0x0006553f) call_thumbnail_pane_g1

0x0726,	// (0x00065547) bg_pinb_pane_ParamLimits

0x0726,	// (0x00065547) bg_pinb_pane

0x0734,	// (0x00065555) find_pinb_pane

0x073d,	// (0x0006555e) listscroll_pinb_pane_ParamLimits

0x073d,	// (0x0006555e) listscroll_pinb_pane

0x074c,	// (0x0006556d) pinb_bg_pane_g1

0x7bcd,	// (0x0006c9ee) pinb_bg_pane_g2

0x7bd9,	// (0x0006c9fa) pinb_bg_pane_g3

0x7be5,	// (0x0006ca06) pinb_bg_pane_g4

0x7bf1,	// (0x0006ca12) pinb_bg_pane_g5

0x7bfd,	// (0x0006ca1e) pinb_bg_pane_g6

0x7c08,	// (0x0006ca29) pinb_bg_pane_g7

0x7c13,	// (0x0006ca34) pinb_bg_pane_g8

0x7c1e,	// (0x0006ca3f) pinb_bg_pane_g9

0x7c28,	// (0x0006ca49) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x00073f48) pinb_bg_pane_g

0x7c45,	// (0x0006ca66) grid_pinb_pane

0x7c50,	// (0x0006ca71) list_pinb_pane

0x7c5b,	// (0x0006ca7c) scroll_pane_cp01_ParamLimits

0x7c5b,	// (0x0006ca7c) scroll_pane_cp01

0x0756,	// (0x00065577) find_pinb_pane_g1_ParamLimits

0x0756,	// (0x00065577) find_pinb_pane_g1

0x076e,	// (0x0006558f) find_pinb_pane_t1

0x0780,	// (0x000655a1) find_pinb_pane_t2

0x0001,

0xf141,	// (0x00073f62) find_pinb_pane_t

0x0795,	// (0x000655b6) input_focus_pane_cp01_ParamLimits

0x0795,	// (0x000655b6) input_focus_pane_cp01

0x7c6d,	// (0x0006ca8e) cell_pinb_pane_ParamLimits

0x7c6d,	// (0x0006ca8e) cell_pinb_pane

0x7c95,	// (0x0006cab6) cell_pinb_pane_g1_ParamLimits

0x7c95,	// (0x0006cab6) cell_pinb_pane_g1

0x7caa,	// (0x0006cacb) cell_pinb_pane_g2_ParamLimits

0x7caa,	// (0x0006cacb) cell_pinb_pane_g2

0x07a1,	// (0x000655c2) cell_pinb_pane_g3_ParamLimits

0x07a1,	// (0x000655c2) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x00073f67) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x00073f67) cell_pinb_pane_g

0x04cb,	// (0x000652ec) grid_highlight_pane_cp01

0x7cb6,	// (0x0006cad7) list_pinb_item_pane_ParamLimits

0x7cb6,	// (0x0006cad7) list_pinb_item_pane

0x04cb,	// (0x000652ec) list_highlight_pane_cp02

0x7cdc,	// (0x0006cafd) list_pinb_item_pane_g1_ParamLimits

0x7cdc,	// (0x0006cafd) list_pinb_item_pane_g1

0x7ce9,	// (0x0006cb0a) list_pinb_item_pane_g2_ParamLimits

0x7ce9,	// (0x0006cb0a) list_pinb_item_pane_g2

0x7cf5,	// (0x0006cb16) list_pinb_item_pane_g3_ParamLimits

0x7cf5,	// (0x0006cb16) list_pinb_item_pane_g3

0x7d06,	// (0x0006cb27) list_pinb_item_pane_g4_ParamLimits

0x7d06,	// (0x0006cb27) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x00073f6e) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x00073f6e) list_pinb_item_pane_g

0x7d12,	// (0x0006cb33) list_pinb_item_pane_t1_ParamLimits

0x7d12,	// (0x0006cb33) list_pinb_item_pane_t1

0x7d43,	// (0x0006cb64) calc_display_pane

0x7d61,	// (0x0006cb82) calc_paper_pane

0x7d7d,	// (0x0006cb9e) grid_calc_pane

0x04cb,	// (0x000652ec) bg_list_pane_cp01

0x7da9,	// (0x0006cbca) clock_g1

0x7db1,	// (0x0006cbd2) clock_g2

0x0001,

0xf156,	// (0x00073f77) clock_g

0x7dbb,	// (0x0006cbdc) clock_t1_ParamLimits

0x7dbb,	// (0x0006cbdc) clock_t1

0x7dd0,	// (0x0006cbf1) clock_t2_ParamLimits

0x7dd0,	// (0x0006cbf1) clock_t2

0x7de2,	// (0x0006cc03) clock_t3_ParamLimits

0x7de2,	// (0x0006cc03) clock_t3

0x7df4,	// (0x0006cc15) clock_t4_ParamLimits

0x7df4,	// (0x0006cc15) clock_t4

0x7e06,	// (0x0006cc27) clock_t5_ParamLimits

0x7e06,	// (0x0006cc27) clock_t5

0x7e1b,	// (0x0006cc3c) clock_t6_ParamLimits

0x7e1b,	// (0x0006cc3c) clock_t6

0x7e2d,	// (0x0006cc4e) clock_t7_ParamLimits

0x7e2d,	// (0x0006cc4e) clock_t7

0x7e3f,	// (0x0006cc60) clock_t8_ParamLimits

0x7e3f,	// (0x0006cc60) clock_t8

0x7e55,	// (0x0006cc76) clock_t9_ParamLimits

0x7e55,	// (0x0006cc76) clock_t9

0x0008,

0xf15b,	// (0x00073f7c) clock_t_ParamLimits

0xf15b,	// (0x00073f7c) clock_t

0x07b5,	// (0x000655d6) popup_clock_analogue_window_cp02

0x07b5,	// (0x000655d6) popup_clock_digital_window_cp01

0x07bd,	// (0x000655de) listscroll_help_pane

0x04cb,	// (0x000652ec) phob_pre_status_pane

0x07c7,	// (0x000655e8) grid_qdial_pane

0x04cb,	// (0x000652ec) listscroll_mce_pane

0x07d1,	// (0x000655f2) bg_notes_pane

0x07df,	// (0x00065600) list_notes_pane

0x7e6b,	// (0x0006cc8c) scroll_pane_cp06

0x07ed,	// (0x0006560e) bg_calc_paper_pane

0x7e7a,	// (0x0006cc9b) list_calc_pane

0x0825,	// (0x00065646) bg_calc_display_pane

0x7e94,	// (0x0006ccb5) calc_display_pane_t1

0x7ea9,	// (0x0006ccca) calc_display_pane_t2

0x7ebe,	// (0x0006ccdf) calc_display_pane_t3

0x0002,

0xf16e,	// (0x00073f8f) calc_display_pane_t

0x7ed0,	// (0x0006ccf1) cell_calc_pane_ParamLimits

0x7ed0,	// (0x0006ccf1) cell_calc_pane

0x0843,	// (0x00065664) bg_calc_paper_pane_g1

0x085b,	// (0x0006567c) bg_calc_paper_pane_g2

0x084f,	// (0x00065670) bg_calc_paper_pane_g3

0x0873,	// (0x00065694) bg_calc_paper_pane_g4

0x0867,	// (0x00065688) bg_calc_paper_pane_g5

0x7efd,	// (0x0006cd1e) bg_calc_paper_pane_g6

0x7f0e,	// (0x0006cd2f) bg_calc_paper_pane_g7

0x7f1f,	// (0x0006cd40) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x00073f96) bg_calc_paper_pane_g

0x7f30,	// (0x0006cd51) calc_bg_paper_pane_g9

0x7f41,	// (0x0006cd62) list_calc_item_pane_ParamLimits

0x7f41,	// (0x0006cd62) list_calc_item_pane

0x087f,	// (0x000656a0) list_calc_item_pane_g1

0x7f70,	// (0x0006cd91) list_calc_item_pane_t1_ParamLimits

0x7f70,	// (0x0006cd91) list_calc_item_pane_t1

0x7f82,	// (0x0006cda3) list_calc_item_pane_t2_ParamLimits

0x7f82,	// (0x0006cda3) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x00073fa7) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x00073fa7) list_calc_item_pane_t

0x089e,	// (0x000656bf) cell_calc_pane_g1

0x08a8,	// (0x000656c9) grid_highlight_pane_cp02

0x2dec,	// (0x00067c0d) bg_calc_display_pane_g1

0x7fb2,	// (0x0006cdd3) bg_calc_display_pane_g2

0x7fbc,	// (0x0006cddd) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x00073fb1) bg_calc_display_pane_g

0x7fc5,	// (0x0006cde6) cell_qdial_pane_ParamLimits

0x7fc5,	// (0x0006cde6) cell_qdial_pane

0x7fd9,	// (0x0006cdfa) cell_qdial_pane_g1_ParamLimits

0x7fd9,	// (0x0006cdfa) cell_qdial_pane_g1

0x7fe6,	// (0x0006ce07) cell_qdial_pane_g2_ParamLimits

0x7fe6,	// (0x0006ce07) cell_qdial_pane_g2

0x08ca,	// (0x000656eb) cell_qdial_pane_g3_ParamLimits

0x08ca,	// (0x000656eb) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x00073fb8) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x00073fb8) cell_qdial_pane_g

0x8004,	// (0x0006ce25) cell_qdial_pane_t1_ParamLimits

0x8004,	// (0x0006ce25) cell_qdial_pane_t1

0x801c,	// (0x0006ce3d) cell_qdial_pane_t2_ParamLimits

0x801c,	// (0x0006ce3d) cell_qdial_pane_t2

0x802f,	// (0x0006ce50) cell_qdial_pane_t3_ParamLimits

0x802f,	// (0x0006ce50) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x00073fc1) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x00073fc1) cell_qdial_pane_t

0x04cb,	// (0x000652ec) grid_highlight_pane_cp04

0x08d6,	// (0x000656f7) thumbnail_qdial_pane_ParamLimits

0x08d6,	// (0x000656f7) thumbnail_qdial_pane

0x0932,	// (0x00065753) list_help_pane

0x093b,	// (0x0006575c) scroll_pane_cp02

0x8042,	// (0x0006ce63) help_list_pane_t1_ParamLimits

0x8042,	// (0x0006ce63) help_list_pane_t1

0x8075,	// (0x0006ce96) bg_notes_pane_g2

0x807d,	// (0x0006ce9e) bg_notes_pane_g3

0x8085,	// (0x0006cea6) notes_bg_pane_g1

0x808d,	// (0x0006ceae) notes_bg_pane_g4

0x8095,	// (0x0006ceb6) notes_bg_pane_g5

0x809d,	// (0x0006cebe) notes_bg_pane_g6

0x80a5,	// (0x0006cec6) notes_bg_pane_g7

0x80ad,	// (0x0006cece) notes_bg_pane_g8

0x80b5,	// (0x0006ced6) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x00073fdf) notes_bg_pane_g

0x80bd,	// (0x0006cede) list_notes_text_pane_ParamLimits

0x80bd,	// (0x0006cede) list_notes_text_pane

0x098c,	// (0x000657ad) list_notes_text_pane_g1

0x66ec,	// (0x0006b50d) list_notes_text_pane_t1

0x0825,	// (0x00065646) listscroll_cale_week_pane

0x8102,	// (0x0006cf23) bg_cale_heading_pane

0x09a6,	// (0x000657c7) bg_cale_pane_cp01

0x811e,	// (0x0006cf3f) cale_week_corner_pane

0x8134,	// (0x0006cf55) cale_week_day_heading_pane

0x8150,	// (0x0006cf71) cale_week_scroll_pane_g1

0x8169,	// (0x0006cf8a) cale_week_scroll_pane_g2

0x817a,	// (0x0006cf9b) cale_week_scroll_pane_g3

0x818b,	// (0x0006cfac) cale_week_scroll_pane_g4

0x819c,	// (0x0006cfbd) cale_week_scroll_pane_g5

0x81ad,	// (0x0006cfce) cale_week_scroll_pane_g6

0x81be,	// (0x0006cfdf) cale_week_scroll_pane_g7

0x81d1,	// (0x0006cff2) cale_week_scroll_pane_g8

0x81e4,	// (0x0006d005) cale_week_scroll_pane_g9

0x81f5,	// (0x0006d016) cale_week_scroll_pane_g10

0x8206,	// (0x0006d027) cale_week_scroll_pane_g11

0x8217,	// (0x0006d038) cale_week_scroll_pane_g12

0x8228,	// (0x0006d049) cale_week_scroll_pane_g13

0x8241,	// (0x0006d062) cale_week_scroll_pane_g14

0x825a,	// (0x0006d07b) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x00073fee) cale_week_scroll_pane_g

0x8273,	// (0x0006d094) cale_week_time_pane

0x8286,	// (0x0006d0a7) grid_cale_week_pane

0x82a3,	// (0x0006d0c4) scroll_pane_cp08

0x82bd,	// (0x0006d0de) cell_cale_week_pane_ParamLimits

0x82bd,	// (0x0006d0de) cell_cale_week_pane

0x8309,	// (0x0006d12a) cale_week_day_heading_pane_t1

0x8322,	// (0x0006d143) cale_week_day_heading_pane_t2

0x833b,	// (0x0006d15c) cale_week_day_heading_pane_t3

0x8354,	// (0x0006d175) cale_week_day_heading_pane_t4

0x836d,	// (0x0006d18e) cale_week_day_heading_pane_t5

0x8386,	// (0x0006d1a7) cale_week_day_heading_pane_t6

0x839f,	// (0x0006d1c0) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x0007400d) cale_week_day_heading_pane_t

0x09d1,	// (0x000657f2) bg_cale_side_pane

0x83b8,	// (0x0006d1d9) cale_week_time_pane_t1

0x83d0,	// (0x0006d1f1) cale_week_time_pane_t2

0x83e8,	// (0x0006d209) cale_week_time_pane_t3

0x8400,	// (0x0006d221) cale_week_time_pane_t4

0x8418,	// (0x0006d239) cale_week_time_pane_t5

0x8430,	// (0x0006d251) cale_week_time_pane_t6

0x8448,	// (0x0006d269) cale_week_time_pane_t7

0x8468,	// (0x0006d289) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x0007401c) cale_week_time_pane_t

0x8488,	// (0x0006d2a9) cell_cale_week_pane_g2

0x8499,	// (0x0006d2ba) cell_cale_week_pane_g3_ParamLimits

0x8499,	// (0x0006d2ba) cell_cale_week_pane_g3

0x09df,	// (0x00065800) grid_highlight_pane_cp07

0x09e7,	// (0x00065808) listscroll_gms_pane

0x09f1,	// (0x00065812) grid_gms_pane

0x09fa,	// (0x0006581b) listscroll_gms_pane_g1

0x0a02,	// (0x00065823) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x0007402d) listscroll_gms_pane_g

0x84b1,	// (0x0006d2d2) scroll_pane_cp010

0x84bc,	// (0x0006d2dd) cell_gms_pane_ParamLimits

0x84bc,	// (0x0006d2dd) cell_gms_pane

0x84cf,	// (0x0006d2f0) cell_gms_pane_g1

0x0a0a,	// (0x0006582b) cell_gms_pane_g2

0x0a12,	// (0x00065833) cell_gms_pane_g3

0x0a1b,	// (0x0006583c) cell_gms_pane_g4

0x0003,

0xf211,	// (0x00074032) cell_gms_pane_g

0x0a24,	// (0x00065845) grid_highlight_pane_cp09

0xa664,	// (0x0006f485) phob_pre_status_pane_g1

0xa66c,	// (0x0006f48d) phob_pre_status_pane_g2

0xa674,	// (0x0006f495) phob_pre_status_pane_g3

0xa67c,	// (0x0006f49d) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x00074421) phob_pre_status_pane_g

0xa68c,	// (0x0006f4ad) phob_pre_status_pane_t1

0xa69c,	// (0x0006f4bd) phob_pre_status_pane_t2

0xa6ac,	// (0x0006f4cd) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x0007442c) phob_pre_status_pane_t

0x04cb,	// (0x000652ec) bg_list_pane_cp05

0x84df,	// (0x0006d300) grid_vorec_pane

0x84e9,	// (0x0006d30a) vorec_t1

0x84f7,	// (0x0006d318) vorec_t2

0x8505,	// (0x0006d326) vorec_t3

0x8513,	// (0x0006d334) vorec_t4

0x8521,	// (0x0006d342) vorec_t5

0x852f,	// (0x0006d350) vorec_t6

0x0006,

0xf21a,	// (0x0007403b) vorec_t

0x854b,	// (0x0006d36c) wait_bar_pane_cp01

0x8553,	// (0x0006d374) cell_vorec_pane_ParamLimits

0x8553,	// (0x0006d374) cell_vorec_pane

0x0a96,	// (0x000658b7) cell_vorec_pane_g1

0x04cb,	// (0x000652ec) grid_highlight_pane_cp05

0x8576,	// (0x0006d397) cams_zoom_pane

0x8582,	// (0x0006d3a3) image_vga_pane

0x8591,	// (0x0006d3b2) main_camera_pane_g1

0x859f,	// (0x0006d3c0) main_camera_pane_g2

0x85ab,	// (0x0006d3cc) main_camera_pane_g3

0x85b7,	// (0x0006d3d8) main_camera_pane_g4

0x85c3,	// (0x0006d3e4) main_camera_pane_g5

0x85cf,	// (0x0006d3f0) main_camera_pane_g6

0x85db,	// (0x0006d3fc) main_camera_pane_g7

0x0007,

0xf229,	// (0x0007404a) main_camera_pane_g

0x85e7,	// (0x0006d408) main_camera_pane_t1

0x85f9,	// (0x0006d41a) main_camera_pane_t2

0x0001,

0xf23a,	// (0x0007405b) main_camera_pane_t

0x861a,	// (0x0006d43b) cams_zoom_pane_cp_ParamLimits

0x861a,	// (0x0006d43b) cams_zoom_pane_cp

0x863e,	// (0x0006d45f) image_cif_pane_ParamLimits

0x863e,	// (0x0006d45f) image_cif_pane

0x865c,	// (0x0006d47d) image_subqcif_pane

0x8664,	// (0x0006d485) main_video_pane_g1_ParamLimits

0x8664,	// (0x0006d485) main_video_pane_g1

0x8684,	// (0x0006d4a5) main_video_pane_g2_ParamLimits

0x8684,	// (0x0006d4a5) main_video_pane_g2

0x86b4,	// (0x0006d4d5) main_video_pane_g3_ParamLimits

0x86b4,	// (0x0006d4d5) main_video_pane_g3

0x86dd,	// (0x0006d4fe) main_video_pane_g4_ParamLimits

0x86dd,	// (0x0006d4fe) main_video_pane_g4

0x8706,	// (0x0006d527) main_video_pane_g5_ParamLimits

0x8706,	// (0x0006d527) main_video_pane_g5

0x0aac,	// (0x000658cd) main_video_pane_g6_ParamLimits

0x0aac,	// (0x000658cd) main_video_pane_g6

0x0006,

0xf23f,	// (0x00074060) main_video_pane_g_ParamLimits

0xf23f,	// (0x00074060) main_video_pane_g

0x8728,	// (0x0006d549) main_video_pane_t1_ParamLimits

0x8728,	// (0x0006d549) main_video_pane_t1

0x0ac6,	// (0x000658e7) cams_zoom_pane_g1

0x0acf,	// (0x000658f0) cams_zoom_pane_g2

0x0ad8,	// (0x000658f9) cams_zoom_pane_g3

0x0ae1,	// (0x00065902) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x0007406f) cams_zoom_pane_g

0x8772,	// (0x0006d593) grid_cams_pane

0x8780,	// (0x0006d5a1) linegrid_cams_pane

0x878e,	// (0x0006d5af) cell_cams_pane_ParamLimits

0x878e,	// (0x0006d5af) cell_cams_pane

0x0aea,	// (0x0006590b) cams_burst_image_pane

0x0af2,	// (0x00065913) cell_cams_pane_g1

0x04cb,	// (0x000652ec) grid_highlight_pane_cp03

0x089e,	// (0x000656bf) mp_bg_pane_g1

0x04cb,	// (0x000652ec) bg_list_pane_cp03

0x27e2,	// (0x00067603) bg_mp_pane

0x27ea,	// (0x0006760b) grid_mp_pane

0x27f2,	// (0x00067613) media_player_g1

0x27fa,	// (0x0006761b) media_player_t1

0x2808,	// (0x00067629) media_player_t2

0x2816,	// (0x00067637) media_player_t3

0x2824,	// (0x00067645) media_player_t4

0x2832,	// (0x00067653) media_player_t5

0x2840,	// (0x00067661) media_player_t6

0x284e,	// (0x0006766f) media_player_t7

0x0006,

0xf5ea,	// (0x0007440b) media_player_t

0x285c,	// (0x0006767d) wait_bar_pane_cp02

0xf5cf,	// (0x000743f0) main_usb_pane_t

0xa65b,	// (0x0006f47c) cell_mp_pane

0x089e,	// (0x000656bf) cell_mp_pane_g1

0x04cb,	// (0x000652ec) grid_highlight_pane_cp06

0x0afa,	// (0x0006591b) grid_skin_colour_pane

0x0b02,	// (0x00065923) list_highlight_pane_cp03

0x87a1,	// (0x0006d5c2) skin_g1

0x0b0a,	// (0x0006592b) skin_t1

0x0b19,	// (0x0006593a) skin_t2

0x0001,

0xf283,	// (0x000740a4) skin_t

0x87ab,	// (0x0006d5cc) cell_skin_colour_pane_ParamLimits

0x87ab,	// (0x0006d5cc) cell_skin_colour_pane

0x0b27,	// (0x00065948) cell_skin_colour_pane_g1

0x882f,	// (0x0006d650) call_video_g1_ParamLimits

0x882f,	// (0x0006d650) call_video_g1

0x883f,	// (0x0006d660) call_video_g2_ParamLimits

0x883f,	// (0x0006d660) call_video_g2

0x0001,

0xf288,	// (0x000740a9) call_video_g_ParamLimits

0xf288,	// (0x000740a9) call_video_g

0x8899,	// (0x0006d6ba) call_video_uplink_pane_cp1_ParamLimits

0x8899,	// (0x0006d6ba) call_video_uplink_pane_cp1

0x0b39,	// (0x0006595a) call_video_uplink_pane_cp2

0x8965,	// (0x0006d786) video_down_crop_pane_ParamLimits

0x8965,	// (0x0006d786) video_down_crop_pane

0x8a63,	// (0x0006d884) video_down_pane_ParamLimits

0x8a63,	// (0x0006d884) video_down_pane

0x0b41,	// (0x00065962) video_down_subqcif_pane_ParamLimits

0x0b41,	// (0x00065962) video_down_subqcif_pane

0x0b59,	// (0x0006597a) video_down_subqcif_pane_cp_ParamLimits

0x0b59,	// (0x0006597a) video_down_subqcif_pane_cp

0x0b7f,	// (0x000659a0) im_reading_pane_ParamLimits

0x0b7f,	// (0x000659a0) im_reading_pane

0x8b85,	// (0x0006d9a6) im_writing_pane_ParamLimits

0x8b85,	// (0x0006d9a6) im_writing_pane

0x8ba3,	// (0x0006d9c4) im_reading_pane_t1

0x0b99,	// (0x000659ba) list_im_pane

0x0baa,	// (0x000659cb) scroll_pane_cp07

0x8bf7,	// (0x0006da18) im_writing_pane_t1_ParamLimits

0x8bf7,	// (0x0006da18) im_writing_pane_t1

0x0bc3,	// (0x000659e4) im_writing_pane_t2_ParamLimits

0x0bc3,	// (0x000659e4) im_writing_pane_t2

0x0001,

0xf292,	// (0x000740b3) im_writing_pane_t_ParamLimits

0xf292,	// (0x000740b3) im_writing_pane_t

0x04cb,	// (0x000652ec) input_focus_pane_cp04

0x04cb,	// (0x000652ec) input_focus_pane_cp05

0x8c0c,	// (0x0006da2d) list_im_single_pane_ParamLimits

0x8c0c,	// (0x0006da2d) list_im_single_pane

0x8c30,	// (0x0006da51) list_single_im_pane_t1

0xa61f,	// (0x0006f440) blid_accuracy_pane

0xa627,	// (0x0006f448) blid_compass_pane

0xa631,	// (0x0006f452) main_location_t1

0xa63f,	// (0x0006f460) main_location_t2

0xa64d,	// (0x0006f46e) main_location_t3

0x0002,

0xf5f9,	// (0x0007441a) main_location_t

0x04cb,	// (0x000652ec) aid_levels_location

0x089e,	// (0x000656bf) blid_accuracy_pane_g1

0x089e,	// (0x000656bf) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x00074115) blid_accuracy_pane_g

0x0c0b,	// (0x00065a2c) wml_content_pane

0x0c49,	// (0x00065a6a) wml_button_pane_ParamLimits

0x0c49,	// (0x00065a6a) wml_button_pane

0x8c3f,	// (0x0006da60) wml_list_single_large_pane_ParamLimits

0x8c3f,	// (0x0006da60) wml_list_single_large_pane

0x8c69,	// (0x0006da8a) wml_list_single_medium_pane_ParamLimits

0x8c69,	// (0x0006da8a) wml_list_single_medium_pane

0x8c9a,	// (0x0006dabb) wml_list_single_small_pane_ParamLimits

0x8c9a,	// (0x0006dabb) wml_list_single_small_pane

0x0c5d,	// (0x00065a7e) wml_selection_box_pane_ParamLimits

0x0c5d,	// (0x00065a7e) wml_selection_box_pane

0x0c70,	// (0x00065a91) wml_list_single_pane_t1

0x0c7f,	// (0x00065aa0) wml_list_single_medium_pane_t1

0x0c8e,	// (0x00065aaf) wml_list_single_large_pane_t1

0x0c9d,	// (0x00065abe) input_focus_pane_cp02_ParamLimits

0x0c9d,	// (0x00065abe) input_focus_pane_cp02

0x0cb0,	// (0x00065ad1) wml_selection_box_pane_g1

0x0cb9,	// (0x00065ada) wml_selection_box_pane_t1_ParamLimits

0x0cb9,	// (0x00065ada) wml_selection_box_pane_t1

0x0726,	// (0x00065547) bg_wml_button_pane_ParamLimits

0x0726,	// (0x00065547) bg_wml_button_pane

0x0cd1,	// (0x00065af2) wml_button_pane_g1

0x0cd9,	// (0x00065afa) wml_button_pane_t1

0x0cd1,	// (0x00065af2) wml_button_bg_pane_g1

0x0ce9,	// (0x00065b0a) wml_button_bg_pane_g2

0x0cf1,	// (0x00065b12) wml_button_bg_pane_g3

0x0cf9,	// (0x00065b1a) wml_button_bg_pane_g4

0x0d01,	// (0x00065b22) wml_button_bg_pane_g5

0x0d09,	// (0x00065b2a) wml_button_bg_pane_g6

0x0d11,	// (0x00065b32) wml_button_bg_pane_g7

0x0d19,	// (0x00065b3a) wml_button_bg_pane_g8

0x0d21,	// (0x00065b42) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x000740b8) wml_button_bg_pane_g

0x8cd4,	// (0x0006daf5) bg_list_pane_cp02

0x0d29,	// (0x00065b4a) mce_header_pane_ParamLimits

0x0d29,	// (0x00065b4a) mce_header_pane

0x0d3f,	// (0x00065b60) mce_icon_pane

0x0d3f,	// (0x00065b60) mce_image_pane

0x0d48,	// (0x00065b69) mce_text_pane_ParamLimits

0x0d48,	// (0x00065b69) mce_text_pane

0x8cde,	// (0x0006daff) scroll_pane_cp03

0x0c41,	// (0x00065a62) scroll_pane_cp04

0x0d5b,	// (0x00065b7c) scroll_pane_cp05_ParamLimits

0x0d5b,	// (0x00065b7c) scroll_pane_cp05

0x8ce8,	// (0x0006db09) mce_header_field_pane_ParamLimits

0x8ce8,	// (0x0006db09) mce_header_field_pane

0x8d08,	// (0x0006db29) mce_header_field_pane_2_ParamLimits

0x8d08,	// (0x0006db29) mce_header_field_pane_2

0x8d1e,	// (0x0006db3f) mce_header_field_pane_3

0x8d26,	// (0x0006db47) list_single_mce_message_pane_ParamLimits

0x8d26,	// (0x0006db47) list_single_mce_message_pane

0x8d4b,	// (0x0006db6c) list_single_mce_smart_pane_ParamLimits

0x8d4b,	// (0x0006db6c) list_single_mce_smart_pane

0x0d67,	// (0x00065b88) input_focus_pane_cp03

0x0d70,	// (0x00065b91) list_header_data_pane

0x8d7b,	// (0x0006db9c) mce_header_field_pane_t1

0x8d89,	// (0x0006dbaa) list_single_mce_header_pane_ParamLimits

0x8d89,	// (0x0006dbaa) list_single_mce_header_pane

0x0d78,	// (0x00065b99) list_single_mce_header_pane_t1

0x0d87,	// (0x00065ba8) list_single_mce_message_pane_g1

0x0d8f,	// (0x00065bb0) list_single_mce_message_pane_t1

0x8dcd,	// (0x0006dbee) bg_cale_heading_pane_cp01_ParamLimits

0x8dcd,	// (0x0006dbee) bg_cale_heading_pane_cp01

0x0d9d,	// (0x00065bbe) bg_cale_pane_cp02_ParamLimits

0x0d9d,	// (0x00065bbe) bg_cale_pane_cp02

0x8e00,	// (0x0006dc21) cale_month_corner_pane

0x8e16,	// (0x0006dc37) cale_month_day_heading_pane_ParamLimits

0x8e16,	// (0x0006dc37) cale_month_day_heading_pane

0x8e59,	// (0x0006dc7a) cale_month_pane_g1_ParamLimits

0x8e59,	// (0x0006dc7a) cale_month_pane_g1

0x8e85,	// (0x0006dca6) cale_month_pane_g2_ParamLimits

0x8e85,	// (0x0006dca6) cale_month_pane_g2

0x8ea8,	// (0x0006dcc9) cale_month_pane_g3_ParamLimits

0x8ea8,	// (0x0006dcc9) cale_month_pane_g3

0x8ee4,	// (0x0006dd05) cale_month_pane_g4_ParamLimits

0x8ee4,	// (0x0006dd05) cale_month_pane_g4

0x8f20,	// (0x0006dd41) cale_month_pane_g5_ParamLimits

0x8f20,	// (0x0006dd41) cale_month_pane_g5

0x8f5c,	// (0x0006dd7d) cale_month_pane_g6_ParamLimits

0x8f5c,	// (0x0006dd7d) cale_month_pane_g6

0x8f98,	// (0x0006ddb9) cale_month_pane_g7_ParamLimits

0x8f98,	// (0x0006ddb9) cale_month_pane_g7

0x8fe4,	// (0x0006de05) cale_month_pane_g8_ParamLimits

0x8fe4,	// (0x0006de05) cale_month_pane_g8

0x9030,	// (0x0006de51) cale_month_pane_g9_ParamLimits

0x9030,	// (0x0006de51) cale_month_pane_g9

0x9076,	// (0x0006de97) cale_month_pane_g10_ParamLimits

0x9076,	// (0x0006de97) cale_month_pane_g10

0x90b0,	// (0x0006ded1) cale_month_pane_g11_ParamLimits

0x90b0,	// (0x0006ded1) cale_month_pane_g11

0x90ee,	// (0x0006df0f) cale_month_pane_g12_ParamLimits

0x90ee,	// (0x0006df0f) cale_month_pane_g12

0x912c,	// (0x0006df4d) cale_month_pane_g13_ParamLimits

0x912c,	// (0x0006df4d) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x000740cb) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x000740cb) cale_month_pane_g

0x916a,	// (0x0006df8b) cale_month_week_pane

0x917d,	// (0x0006df9e) grid_cale_month_pane_ParamLimits

0x917d,	// (0x0006df9e) grid_cale_month_pane

0x91bb,	// (0x0006dfdc) cale_month_day_heading_pane_t1

0x9219,	// (0x0006e03a) cale_month_day_heading_pane_t2

0x927e,	// (0x0006e09f) cale_month_day_heading_pane_t3

0x92e3,	// (0x0006e104) cale_month_day_heading_pane_t4

0x9348,	// (0x0006e169) cale_month_day_heading_pane_t5

0x93ad,	// (0x0006e1ce) cale_month_day_heading_pane_t6

0x9412,	// (0x0006e233) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x000740e6) cale_month_day_heading_pane_t

0x09d1,	// (0x000657f2) bg_cale_side_pane_cp01

0x9487,	// (0x0006e2a8) cale_month_week_pane_t1

0x949e,	// (0x0006e2bf) cale_month_week_pane_t2

0x94b5,	// (0x0006e2d6) cale_month_week_pane_t3

0x94cc,	// (0x0006e2ed) cale_month_week_pane_t4

0x94e3,	// (0x0006e304) cale_month_week_pane_t5

0x94fe,	// (0x0006e31f) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x000740f5) cale_month_week_pane_t

0x951d,	// (0x0006e33e) cell_cale_month_pane_ParamLimits

0x951d,	// (0x0006e33e) cell_cale_month_pane

0x95e3,	// (0x0006e404) cell_cale_month_pane_g1

0x95ef,	// (0x0006e410) cell_cale_month_pane_t1_ParamLimits

0x95ef,	// (0x0006e410) cell_cale_month_pane_t1

0x09df,	// (0x00065800) grid_highlight_pane_cp08

0x089e,	// (0x000656bf) main_smil_g1

0x960b,	// (0x0006e42c) smil_status_pane

0x0dde,	// (0x00065bff) smil_text_pane

0x2702,	// (0x00067523) bg_popup_call3_rect_pane_g8

0x270a,	// (0x0006752b) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x000743ae) bg_popup_call3_rect_pane_g

0x2997,	// (0x000677b8) smil_status_volume_pane_g1

0x0de8,	// (0x00065c09) smil_status_pane_t1

0xaa05,	// (0x0006f826) volume_smil_pane

0x0dff,	// (0x00065c20) list_smil_text_pane

0x961e,	// (0x0006e43f) scroll_pane_cp011

0x9629,	// (0x0006e44a) smil_text_list_pane_t1_ParamLimits

0x9629,	// (0x0006e44a) smil_text_list_pane_t1

0x96a1,	// (0x0006e4c2) aid_volume_smil_ParamLimits

0x96a1,	// (0x0006e4c2) aid_volume_smil

0x089e,	// (0x000656bf) smil_volume_pane_g1

0x089e,	// (0x000656bf) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x00074115) smil_volume_pane_g

0x0825,	// (0x00065646) listscroll_cale_day_pane

0x0e2b,	// (0x00065c4c) bg_cale_pane

0x0e43,	// (0x00065c64) list_cale_pane

0x0e54,	// (0x00065c75) scroll_pane_cp09

0x0e65,	// (0x00065c86) cale_bg_pane_g1

0x0e6d,	// (0x00065c8e) cale_bg_pane_g2

0x0e75,	// (0x00065c96) cale_bg_pane_g3

0x0e7d,	// (0x00065c9e) cale_bg_pane_g4

0x0e85,	// (0x00065ca6) cale_bg_pane_g5

0x0e8d,	// (0x00065cae) cale_bg_pane_g6

0x0e95,	// (0x00065cb6) cale_bg_pane_g7

0x0e9d,	// (0x00065cbe) cale_bg_pane_g8

0x0ea5,	// (0x00065cc6) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x0007411a) cale_bg_pane_g

0x96c3,	// (0x0006e4e4) list_cale_time_pane_ParamLimits

0x96c3,	// (0x0006e4e4) list_cale_time_pane

0x0ead,	// (0x00065cce) list_cale_time_pane_g1_ParamLimits

0x0ead,	// (0x00065cce) list_cale_time_pane_g1

0x0eb9,	// (0x00065cda) list_cale_time_pane_g2_ParamLimits

0x0eb9,	// (0x00065cda) list_cale_time_pane_g2

0x96df,	// (0x0006e500) list_cale_time_pane_g3_ParamLimits

0x96df,	// (0x0006e500) list_cale_time_pane_g3

0x96ed,	// (0x0006e50e) list_cale_time_pane_g4_ParamLimits

0x96ed,	// (0x0006e50e) list_cale_time_pane_g4

0x96fb,	// (0x0006e51c) list_cale_time_pane_g5_ParamLimits

0x96fb,	// (0x0006e51c) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x0007412d) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x0007412d) list_cale_time_pane_g

0x0ed3,	// (0x00065cf4) list_cale_time_pane_t1_ParamLimits

0x0ed3,	// (0x00065cf4) list_cale_time_pane_t1

0x0efb,	// (0x00065d1c) list_cale_time_pane_t2_ParamLimits

0x0efb,	// (0x00065d1c) list_cale_time_pane_t2

0x99d2,	// (0x0006e7f3) aid_blid_cardinal_pane

0x9a14,	// (0x0006e835) compass_pane_t4

0x0f23,	// (0x00065d44) list_cale_time_pane_t4_ParamLimits

0x0f23,	// (0x00065d44) list_cale_time_pane_t4

0x9a22,	// (0x0006e843) compass_pane_t5

0x9a32,	// (0x0006e853) compass_pane_t6

0x9a40,	// (0x0006e861) compass_pane_t7

0x13cd,	// (0x000661ee) navi_pane_cc_t1

0x1534,	// (0x00066355) aid_phob_thumbnail_center_pane

0xa125,	// (0x0006ef46) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x0007413a) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x0007413a) list_cale_time_pane_t

0x0122,	// (0x00064f43) bg_popup_window_pane_cp02_ParamLimits

0x0122,	// (0x00064f43) bg_popup_window_pane_cp02

0x0f4b,	// (0x00065d6c) heading_pane_cp01_ParamLimits

0x0f4b,	// (0x00065d6c) heading_pane_cp01

0x0f57,	// (0x00065d78) loc_req_pane_ParamLimits

0x0f57,	// (0x00065d78) loc_req_pane

0x0f67,	// (0x00065d88) loc_type_pane_ParamLimits

0x0f67,	// (0x00065d88) loc_type_pane

0x0f79,	// (0x00065d9a) loc_type_pane_t1_ParamLimits

0x0f79,	// (0x00065d9a) loc_type_pane_t1

0x0f8b,	// (0x00065dac) loc_type_pane_t2_ParamLimits

0x0f8b,	// (0x00065dac) loc_type_pane_t2

0x0f9d,	// (0x00065dbe) loc_type_pane_t3_ParamLimits

0x0f9d,	// (0x00065dbe) loc_type_pane_t3

0x0002,

0xf320,	// (0x00074141) loc_type_pane_t_ParamLimits

0xf320,	// (0x00074141) loc_type_pane_t

0x0faf,	// (0x00065dd0) list_loc_req_pane

0x0fb9,	// (0x00065dda) scroll_pane_cp012

0x9709,	// (0x0006e52a) list_single_loc_request_popup_menu_pane_ParamLimits

0x9709,	// (0x0006e52a) list_single_loc_request_popup_menu_pane

0x0fc4,	// (0x00065de5) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0fc4,	// (0x00065de5) list_single_loc_request_popup_menu_pane_g1

0x0fd0,	// (0x00065df1) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0fd0,	// (0x00065df1) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x00074148) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x00074148) list_single_loc_request_popup_menu_pane_g

0x0fdc,	// (0x00065dfd) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0fdc,	// (0x00065dfd) list_single_loc_request_popup_menu_pane_t1

0x971b,	// (0x0006e53c) bg_popup_window_pane_cp03_ParamLimits

0x971b,	// (0x0006e53c) bg_popup_window_pane_cp03

0x9729,	// (0x0006e54a) heading_loc_req_pane_ParamLimits

0x9729,	// (0x0006e54a) heading_loc_req_pane

0x9735,	// (0x0006e556) popup_dyc_status_message_window_g1_ParamLimits

0x9735,	// (0x0006e556) popup_dyc_status_message_window_g1

0x9741,	// (0x0006e562) popup_dyc_status_message_window_t1_ParamLimits

0x9741,	// (0x0006e562) popup_dyc_status_message_window_t1

0x9753,	// (0x0006e574) popup_dyc_status_message_window_t2_ParamLimits

0x9753,	// (0x0006e574) popup_dyc_status_message_window_t2

0x9765,	// (0x0006e586) popup_dyc_status_message_window_t3_ParamLimits

0x9765,	// (0x0006e586) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x0007414d) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x0007414d) popup_dyc_status_message_window_t

0x04cb,	// (0x000652ec) bg_heading_pane_cp01

0x0ffe,	// (0x00065e1f) heading_loc_req_pane_g1

0x1006,	// (0x00065e27) heading_loc_req_pane_g2

0x100e,	// (0x00065e2f) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x00074154) heading_loc_req_pane_g

0x1016,	// (0x00065e37) heading_loc_req_pane_t1

0x1025,	// (0x00065e46) bg_popup_sub_pane_cp01_ParamLimits

0x1025,	// (0x00065e46) bg_popup_sub_pane_cp01

0x1033,	// (0x00065e54) popup_cale_events_window_g1_ParamLimits

0x1033,	// (0x00065e54) popup_cale_events_window_g1

0x1053,	// (0x00065e74) popup_cale_events_window_g2_ParamLimits

0x1053,	// (0x00065e74) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x00074188) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x00074188) popup_cale_events_window_g

0x1073,	// (0x00065e94) popup_cale_events_window_t1_ParamLimits

0x1073,	// (0x00065e94) popup_cale_events_window_t1

0x1085,	// (0x00065ea6) popup_cale_events_window_t2_ParamLimits

0x1085,	// (0x00065ea6) popup_cale_events_window_t2

0x10c3,	// (0x00065ee4) popup_cale_events_window_t3_ParamLimits

0x10c3,	// (0x00065ee4) popup_cale_events_window_t3

0x10fd,	// (0x00065f1e) popup_cale_events_window_t4_ParamLimits

0x10fd,	// (0x00065f1e) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x0007418d) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x0007418d) popup_cale_events_window_t

0x978f,	// (0x0006e5b0) call_type_pane

0x154c,	// (0x0006636d) popup_call_status_window_g1

0x979b,	// (0x0006e5bc) popup_call_status_window_g2

0x97a7,	// (0x0006e5c8) popup_call_status_window_g3

0x0002,

0xf375,	// (0x00074196) popup_call_status_window_g

0x1133,	// (0x00065f54) call_type_pane_g1

0x113c,	// (0x00065f5d) call_type_pane_g2

0x0001,

0xf37c,	// (0x0007419d) call_type_pane_g

0x04cb,	// (0x000652ec) bg_popup_sub_pane_cp02

0x1145,	// (0x00065f66) listscroll_popup_wml_pane

0x114d,	// (0x00065f6e) list_wml_pane

0x1157,	// (0x00065f78) scroll_pane_cp013

0x1162,	// (0x00065f83) list_single_graphic_popup_wml_pane_ParamLimits

0x1162,	// (0x00065f83) list_single_graphic_popup_wml_pane

0x089e,	// (0x000656bf) list_single_graphic_popup_wml_pane_g1

0x1176,	// (0x00065f97) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x000741a2) list_single_graphic_popup_wml_pane_g

0x117e,	// (0x00065f9f) list_single_graphic_popup_wml_pane_t1

0x118c,	// (0x00065fad) aid_call_pane

0x071e,	// (0x0006553f) popup_clock_analogue_window_g1

0x071e,	// (0x0006553f) popup_clock_analogue_window_g2

0x97b3,	// (0x0006e5d4) popup_clock_analogue_window_g3

0x97b3,	// (0x0006e5d4) popup_clock_analogue_window_g4

0x089e,	// (0x000656bf) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x000741a7) popup_clock_analogue_window_g

0x97bb,	// (0x0006e5dc) popup_clock_analogue_window_t1

0x97c9,	// (0x0006e5ea) clock_digital_number_pane_ParamLimits

0x97c9,	// (0x0006e5ea) clock_digital_number_pane

0x97d5,	// (0x0006e5f6) clock_digital_number_pane_cp02_ParamLimits

0x97d5,	// (0x0006e5f6) clock_digital_number_pane_cp02

0x97e1,	// (0x0006e602) clock_digital_number_pane_cp03_ParamLimits

0x97e1,	// (0x0006e602) clock_digital_number_pane_cp03

0x97ed,	// (0x0006e60e) clock_digital_number_pane_cp04_ParamLimits

0x97ed,	// (0x0006e60e) clock_digital_number_pane_cp04

0x97fd,	// (0x0006e61e) clock_digital_separator_pane_ParamLimits

0x97fd,	// (0x0006e61e) clock_digital_separator_pane

0x9809,	// (0x0006e62a) popup_clock_digital_window_t1

0x089e,	// (0x000656bf) clock_digital_number_pane_g1

0x089e,	// (0x000656bf) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x00074115) clock_digital_number_pane_g

0x089e,	// (0x000656bf) clock_digital_separator_pane_g1

0x089e,	// (0x000656bf) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x00074115) clock_digital_separator_pane_g

0x04cb,	// (0x000652ec) bg_popup_window_pane_cp04

0x120f,	// (0x00066030) heading_pane_cp03

0x1217,	// (0x00066038) listscroll_popup_gms_pane

0x121f,	// (0x00066040) grid_large_graphic_popup_pane

0x1229,	// (0x0006604a) listscroll_popup_gms_pane_g1

0x1231,	// (0x00066052) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x000741b2) listscroll_popup_gms_pane_g

0x0c41,	// (0x00065a62) scroll_pane_cp014

0x9826,	// (0x0006e647) cell_large_graphic_popup_pane_ParamLimits

0x9826,	// (0x0006e647) cell_large_graphic_popup_pane

0x983e,	// (0x0006e65f) cell_large_graphic_popup_pane_g1_ParamLimits

0x983e,	// (0x0006e65f) cell_large_graphic_popup_pane_g1

0x1239,	// (0x0006605a) cell_large_graphic_popup_pane_g2_ParamLimits

0x1239,	// (0x0006605a) cell_large_graphic_popup_pane_g2

0x1245,	// (0x00066066) cell_large_graphic_popup_pane_g3_ParamLimits

0x1245,	// (0x00066066) cell_large_graphic_popup_pane_g3

0x1252,	// (0x00066073) cell_large_graphic_popup_pane_g4_ParamLimits

0x1252,	// (0x00066073) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x000741b7) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x000741b7) cell_large_graphic_popup_pane_g

0x1262,	// (0x00066083) grid_highlight_pane_cp010

0x089e,	// (0x000656bf) bg_popup_call_pane_g1

0x126c,	// (0x0006608d) list_single_graphic_popup_conf_pane_ParamLimits

0x126c,	// (0x0006608d) list_single_graphic_popup_conf_pane

0x127f,	// (0x000660a0) list_highlight_pane_cp01

0x1288,	// (0x000660a9) list_single_graphic_popup_conf_pane_g1

0x1290,	// (0x000660b1) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x000741c0) list_single_graphic_popup_conf_pane_g

0x1298,	// (0x000660b9) list_single_graphic_popup_conf_pane_t1

0x12a6,	// (0x000660c7) linegrid_cams_pane_g1

0x984a,	// (0x0006e66b) linegrid_cams_pane_g2

0x0a12,	// (0x00065833) linegrid_cams_pane_g3

0x12af,	// (0x000660d0) linegrid_cams_pane_g4

0x9853,	// (0x0006e674) linegrid_cams_pane_g5

0x985c,	// (0x0006e67d) linegrid_cams_pane_g6

0x0a1b,	// (0x0006583c) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x000741c5) linegrid_cams_pane_g

0x12b8,	// (0x000660d9) popup_clock_analogue_window

0x12b8,	// (0x000660d9) popup_clock_digital_window

0x04cb,	// (0x000652ec) popup_phob_thumbnail_window

0x089e,	// (0x000656bf) call_video_uplink_pane_g1

0x12c1,	// (0x000660e2) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x000741d4) call_video_uplink_pane_g

0x12c9,	// (0x000660ea) video_uplink_pane

0x12d1,	// (0x000660f2) mce_image_pane_g1

0x9865,	// (0x0006e686) mce_image_pane_g2

0x986f,	// (0x0006e690) mce_image_pane_g3

0x9877,	// (0x0006e698) mce_image_pane_g4

0x987f,	// (0x0006e6a0) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x000741d9) mce_image_pane_g

0x12db,	// (0x000660fc) control_top_pane_stacon_cp01_ParamLimits

0x12db,	// (0x000660fc) control_top_pane_stacon_cp01

0x12ef,	// (0x00066110) uni_indicator_pane_stacon_cp01_ParamLimits

0x12ef,	// (0x00066110) uni_indicator_pane_stacon_cp01

0x1300,	// (0x00066121) bg_popup_sub_pane_cp03

0x9887,	// (0x0006e6a8) chi_dic_find_pane

0x988f,	// (0x0006e6b0) listscroll_chi_dic_pane

0x9898,	// (0x0006e6b9) main_pane_chidic_g1

0x130a,	// (0x0006612b) chi_dic_find_pane_t1

0x1318,	// (0x00066139) find_chidic_pane

0x1321,	// (0x00066142) chi_dic_list_pane_ParamLimits

0x1321,	// (0x00066142) chi_dic_list_pane

0x1332,	// (0x00066153) scroll_pane_cp020

0x133a,	// (0x0006615b) find_chidic_pane_t1

0x04cb,	// (0x000652ec) input_focus_pane_cp06

0x98ab,	// (0x0006e6cc) list_chi_dic_pane_ParamLimits

0x98ab,	// (0x0006e6cc) list_chi_dic_pane

0x98c5,	// (0x0006e6e6) list_chi_dic_pane_t1_ParamLimits

0x98c5,	// (0x0006e6e6) list_chi_dic_pane_t1

0x04cb,	// (0x000652ec) list_highlight_pane_cp020

0x1349,	// (0x0006616a) bg_cale_heading_pane_g1

0x98d8,	// (0x0006e6f9) bg_cale_heading_pane_g2

0x98e0,	// (0x0006e701) bg_cale_heading_pane_g3

0x98e8,	// (0x0006e709) bg_cale_heading_pane_g4

0x98f2,	// (0x0006e713) bg_cale_heading_pane_g5

0x98fc,	// (0x0006e71d) bg_cale_heading_pane_g6

0x9904,	// (0x0006e725) bg_cale_heading_pane_g7

0x990c,	// (0x0006e72d) bg_cale_heading_pane_g8

0x9916,	// (0x0006e737) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x000741e4) bg_cale_heading_pane_g

0x1349,	// (0x0006616a) bg_cale_side_pane_g1

0x9920,	// (0x0006e741) bg_cale_side_pane_g2

0x992a,	// (0x0006e74b) bg_cale_side_pane_g3

0x9934,	// (0x0006e755) bg_cale_side_pane_g4

0x993e,	// (0x0006e75f) bg_cale_side_pane_g5

0x9948,	// (0x0006e769) bg_cale_side_pane_g6

0x9952,	// (0x0006e773) bg_cale_side_pane_g7

0x995c,	// (0x0006e77d) bg_cale_side_pane_g8

0x9964,	// (0x0006e785) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x000741f7) bg_cale_side_pane_g

0x996c,	// (0x0006e78d) popup_call_status_window_ParamLimits

0x996c,	// (0x0006e78d) popup_call_status_window

0x1351,	// (0x00066172) stacon_top_pane

0x1359,	// (0x0006617a) status_pane_ParamLimits

0x1359,	// (0x0006617a) status_pane

0x136e,	// (0x0006618f) status_small_pane

0x1376,	// (0x00066197) control_pane

0x04cb,	// (0x000652ec) stacon_bottom_pane

0x137e,	// (0x0006619f) list_single_mce_smart_pane_t1_ParamLimits

0x137e,	// (0x0006619f) list_single_mce_smart_pane_t1

0x1391,	// (0x000661b2) list_single_mce_smart_pane_t2_ParamLimits

0x1391,	// (0x000661b2) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x0007420a) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x0007420a) list_single_mce_smart_pane_t

0x9978,	// (0x0006e799) compass_pane

0x9984,	// (0x0006e7a5) main_location2_pane_t1

0x9998,	// (0x0006e7b9) main_location2_pane_t2

0x99ac,	// (0x0006e7cd) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x0007420f) main_location2_pane_t

0x13b0,	// (0x000661d1) compass_pane_g1_ParamLimits

0x13b0,	// (0x000661d1) compass_pane_g1

0x99f6,	// (0x0006e817) compass_pane_t1

0x9a05,	// (0x0006e826) compass_pane_t2

0x0005,

0xf3f7,	// (0x00074218) compass_pane_t

0x9a50,	// (0x0006e871) text_secondary_cp61

0x13c4,	// (0x000661e5) navi_pane_cams_g5

0x13e7,	// (0x00066208) navi_pane_im_t1

0x13f5,	// (0x00066216) navi_pane_mp_g1_ParamLimits

0x13f5,	// (0x00066216) navi_pane_mp_g1

0x1409,	// (0x0006622a) navi_pane_mp_g2_ParamLimits

0x1409,	// (0x0006622a) navi_pane_mp_g2

0x1415,	// (0x00066236) navi_pane_mp_g3_ParamLimits

0x1415,	// (0x00066236) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x0007422c) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x0007422c) navi_pane_mp_g

0x1421,	// (0x00066242) navi_pane_mp_t1

0x142f,	// (0x00066250) navi_pane_mp_t2

0x0002,

0xf412,	// (0x00074233) navi_pane_mp_t

0x146b,	// (0x0006628c) navi_pane_vt_g1

0x1421,	// (0x00066242) navi_pane_vt_t1

0x1473,	// (0x00066294) navi_slider_pane

0x147b,	// (0x0006629c) zooming_pane

0x1483,	// (0x000662a4) navi_slider_pane_g1

0x9b7b,	// (0x0006e99c) navi_slider_pane_g2

0x0006,

0xf419,	// (0x0007423a) navi_slider_pane_g

0x14b9,	// (0x000662da) aid_levels_zoom

0x14c1,	// (0x000662e2) zooming_pane_g1

0x14c9,	// (0x000662ea) zooming_pane_g2

0x14c9,	// (0x000662ea) zooming_pane_g3

0x0002,

0xf428,	// (0x00074249) zooming_pane_g

0x14d1,	// (0x000662f2) level_10_zoom

0x14da,	// (0x000662fb) level_11_zoom

0x14e3,	// (0x00066304) level_1_zoom

0x14ec,	// (0x0006630d) level_2_zoom

0x14f5,	// (0x00066316) level_3_zoom

0x14fe,	// (0x0006631f) level_4_zoom

0x1507,	// (0x00066328) level_5_zoom

0x1510,	// (0x00066331) level_6_zoom

0x1519,	// (0x0006633a) level_7_zoom

0x1522,	// (0x00066343) level_8_zoom

0x152b,	// (0x0006634c) level_9_zoom

0x153c,	// (0x0006635d) popup_phob_thumbnail_window_g1

0x1544,	// (0x00066365) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x00074250) popup_phob_thumbnail_window_g

0x2864,	// (0x00067685) level_1_location

0x286c,	// (0x0006768d) level_2_location

0x2874,	// (0x00067695) level_3_location

0x287c,	// (0x0006769d) level_4_location

0x147b,	// (0x0006629c) level_5_location

0x9b8d,	// (0x0006e9ae) mce_icon_pane_g1

0x9b95,	// (0x0006e9b6) mce_icon_pane_g2

0x0001,

0xf434,	// (0x00074255) mce_icon_pane_g

0x9b9d,	// (0x0006e9be) main_mup_pane_g1_ParamLimits

0x9b9d,	// (0x0006e9be) main_mup_pane_g1

0x9bb5,	// (0x0006e9d6) main_mup_pane_g2_ParamLimits

0x9bb5,	// (0x0006e9d6) main_mup_pane_g2

0x9bd1,	// (0x0006e9f2) main_mup_pane_g3_ParamLimits

0x9bd1,	// (0x0006e9f2) main_mup_pane_g3

0x9bed,	// (0x0006ea0e) main_mup_pane_g4_ParamLimits

0x9bed,	// (0x0006ea0e) main_mup_pane_g4

0x9c09,	// (0x0006ea2a) main_mup_pane_g5_ParamLimits

0x9c09,	// (0x0006ea2a) main_mup_pane_g5

0x9c2a,	// (0x0006ea4b) main_mup_pane_g6_ParamLimits

0x9c2a,	// (0x0006ea4b) main_mup_pane_g6

0x9c46,	// (0x0006ea67) main_mup_pane_g7_ParamLimits

0x9c46,	// (0x0006ea67) main_mup_pane_g7

0x9c62,	// (0x0006ea83) main_mup_pane_g8_ParamLimits

0x9c62,	// (0x0006ea83) main_mup_pane_g8

0x9c82,	// (0x0006eaa3) main_mup_pane_g9_ParamLimits

0x9c82,	// (0x0006eaa3) main_mup_pane_g9

0x9ca1,	// (0x0006eac2) main_mup_pane_g10_ParamLimits

0x9ca1,	// (0x0006eac2) main_mup_pane_g10

0x9cc0,	// (0x0006eae1) main_mup_pane_g11_ParamLimits

0x9cc0,	// (0x0006eae1) main_mup_pane_g11

0x9cd8,	// (0x0006eaf9) main_mup_pane_g12_ParamLimits

0x9cd8,	// (0x0006eaf9) main_mup_pane_g12

0x9ce6,	// (0x0006eb07) main_mup_pane_g13_ParamLimits

0x9ce6,	// (0x0006eb07) main_mup_pane_g13

0x000c,

0xf439,	// (0x0007425a) main_mup_pane_g_ParamLimits

0xf439,	// (0x0007425a) main_mup_pane_g

0x9cfc,	// (0x0006eb1d) main_mup_pane_t1_ParamLimits

0x9cfc,	// (0x0006eb1d) main_mup_pane_t1

0x9d19,	// (0x0006eb3a) main_mup_pane_t2_ParamLimits

0x9d19,	// (0x0006eb3a) main_mup_pane_t2

0x9d33,	// (0x0006eb54) main_mup_pane_t3_ParamLimits

0x9d33,	// (0x0006eb54) main_mup_pane_t3

0x9d4d,	// (0x0006eb6e) main_mup_pane_t4_ParamLimits

0x9d4d,	// (0x0006eb6e) main_mup_pane_t4

0x9d5f,	// (0x0006eb80) main_mup_pane_t5_ParamLimits

0x9d5f,	// (0x0006eb80) main_mup_pane_t5

0x9d71,	// (0x0006eb92) main_mup_pane_t6_ParamLimits

0x9d71,	// (0x0006eb92) main_mup_pane_t6

0x0005,

0xf454,	// (0x00074275) main_mup_pane_t_ParamLimits

0xf454,	// (0x00074275) main_mup_pane_t

0x9d87,	// (0x0006eba8) mup_progress_pane_ParamLimits

0x9d87,	// (0x0006eba8) mup_progress_pane

0x9d93,	// (0x0006ebb4) mup_visualizer_pane_ParamLimits

0x9d93,	// (0x0006ebb4) mup_visualizer_pane

0x9dcd,	// (0x0006ebee) mup_volume_pane_ParamLimits

0x9dcd,	// (0x0006ebee) mup_volume_pane

0x154c,	// (0x0006636d) mup_visualizer_pane_g1_ParamLimits

0x154c,	// (0x0006636d) mup_visualizer_pane_g1

0x154c,	// (0x0006636d) mup_visualizer_pane_g2_ParamLimits

0x154c,	// (0x0006636d) mup_visualizer_pane_g2

0x13b0,	// (0x000661d1) mup_visualizer_pane_g3_ParamLimits

0x13b0,	// (0x000661d1) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x00074282) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x00074282) mup_visualizer_pane_g

0x089e,	// (0x000656bf) mup_volume_pane_g1

0x1562,	// (0x00066383) mup_volume_pane_g2

0x0001,

0xf468,	// (0x00074289) mup_volume_pane_g

0x089e,	// (0x000656bf) mup_progress_pane_g1

0x156b,	// (0x0006638c) mup_progress_pane_g2

0x1574,	// (0x00066395) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x0007428e) mup_progress_pane_g

0x04cb,	// (0x000652ec) bg_popup_window_pane_cp05

0x157d,	// (0x0006639e) heading_pane_cp02_ParamLimits

0x157d,	// (0x0006639e) heading_pane_cp02

0x1597,	// (0x000663b8) list_popup_blid_pane

0x159f,	// (0x000663c0) list_blid_sat_info_pane_ParamLimits

0x159f,	// (0x000663c0) list_blid_sat_info_pane

0x15b2,	// (0x000663d3) list_blid_sat_info_pane_g1

0x15ba,	// (0x000663db) list_blid_sat_info_pane_t1

0x9eda,	// (0x0006ecfb) mup_equalizer_pane_ParamLimits

0x9eda,	// (0x0006ecfb) mup_equalizer_pane

0x9efb,	// (0x0006ed1c) mup_equalizer_pane_cp1_ParamLimits

0x9efb,	// (0x0006ed1c) mup_equalizer_pane_cp1

0x9f1c,	// (0x0006ed3d) mup_equalizer_pane_cp2_ParamLimits

0x9f1c,	// (0x0006ed3d) mup_equalizer_pane_cp2

0x9f3d,	// (0x0006ed5e) mup_equalizer_pane_cp3_ParamLimits

0x9f3d,	// (0x0006ed5e) mup_equalizer_pane_cp3

0x9f5e,	// (0x0006ed7f) mup_equalizer_pane_cp4_ParamLimits

0x9f5e,	// (0x0006ed7f) mup_equalizer_pane_cp4

0x9f7f,	// (0x0006eda0) mup_equalizer_pane_cp5

0x9f95,	// (0x0006edb6) mup_equalizer_pane_cp6

0x9fad,	// (0x0006edce) mup_equalizer_pane_cp7

0x2782,	// (0x000675a3) bg_popup_call_poc_act_pane_g9

0x278a,	// (0x000675ab) bg_popup_call_poc_act_pane_g10

0x2792,	// (0x000675b3) bg_popup_call_poc_act_pane_g11

0x000a,

0x0726,	// (0x00065547) mup_scale_pane

0x089e,	// (0x000656bf) mup_scale_pane_g1

0x15c8,	// (0x000663e9) mup_scale_pane_g2

0x0006,

0xf489,	// (0x000742aa) mup_scale_pane_g

0x15ec,	// (0x0006640d) msg_data_pane

0x15f4,	// (0x00066415) scroll_pane_cp017

0x6907,	// (0x0006b728) bg_list_pane_cp04_ParamLimits

0x6907,	// (0x0006b728) bg_list_pane_cp04

0x15fc,	// (0x0006641d) msg_data_pane_g1

0x9fd7,	// (0x0006edf8) msg_data_pane_g2

0x9fe1,	// (0x0006ee02) msg_data_pane_g3

0x9fe9,	// (0x0006ee0a) msg_data_pane_g4

0x9ff1,	// (0x0006ee12) msg_data_pane_g5

0x9ff9,	// (0x0006ee1a) msg_data_pane_g6

0xa001,	// (0x0006ee22) msg_data_pane_g7

0x0006,

0xf498,	// (0x000742b9) msg_data_pane_g

0x692d,	// (0x0006b74e) msg_text_pane_ParamLimits

0x692d,	// (0x0006b74e) msg_text_pane

0xa009,	// (0x0006ee2a) qrid_highlight_pane_cp011_ParamLimits

0xa009,	// (0x0006ee2a) qrid_highlight_pane_cp011

0x04cb,	// (0x000652ec) msg_body_pane

0x04cb,	// (0x000652ec) msg_header_pane

0x160d,	// (0x0006642e) input_focus_pane_cp07

0x6970,	// (0x0006b791) msg_header_pane_t1_ParamLimits

0x6970,	// (0x0006b791) msg_header_pane_t1

0x6982,	// (0x0006b7a3) msg_header_pane_t2_ParamLimits

0x6982,	// (0x0006b7a3) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x000742cd) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x000742cd) msg_header_pane_t

0x1622,	// (0x00066443) msg_body_pane_g1

0x6994,	// (0x0006b7b5) msg_body_pane_t1_ParamLimits

0x6994,	// (0x0006b7b5) msg_body_pane_t1

0x69c5,	// (0x0006b7e6) msg_body_pane_t2_ParamLimits

0x69c5,	// (0x0006b7e6) msg_body_pane_t2

0x69d7,	// (0x0006b7f8) msg_body_pane_t3_ParamLimits

0x69d7,	// (0x0006b7f8) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x000742d2) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x000742d2) msg_body_pane_t

0xa075,	// (0x0006ee96) main_viewer_pane_g1_ParamLimits

0xa075,	// (0x0006ee96) main_viewer_pane_g1

0xa081,	// (0x0006eea2) main_viewer_pane_g2_ParamLimits

0xa081,	// (0x0006eea2) main_viewer_pane_g2

0xa08d,	// (0x0006eeae) main_viewer_pane_g3_ParamLimits

0xa08d,	// (0x0006eeae) main_viewer_pane_g3

0xa09e,	// (0x0006eebf) main_viewer_pane_g4_ParamLimits

0xa09e,	// (0x0006eebf) main_viewer_pane_g4

0xa0af,	// (0x0006eed0) main_viewer_pane_g5_ParamLimits

0xa0af,	// (0x0006eed0) main_viewer_pane_g5

0xa0af,	// (0x0006eed0) main_viewer_pane_g7_ParamLimits

0xa0af,	// (0x0006eed0) main_viewer_pane_g7

0xa0c1,	// (0x0006eee2) main_viewer_pane_g8_ParamLimits

0xa0c1,	// (0x0006eee2) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x000742e2) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x000742e2) main_viewer_pane_g

0x1660,	// (0x00066481) viewer_content_pane_ParamLimits

0x1660,	// (0x00066481) viewer_content_pane

0xa0f9,	// (0x0006ef1a) main_postcard_pane_g1_ParamLimits

0xa0f9,	// (0x0006ef1a) main_postcard_pane_g1

0xa107,	// (0x0006ef28) main_postcard_pane_g2_ParamLimits

0xa107,	// (0x0006ef28) main_postcard_pane_g2

0xa115,	// (0x0006ef36) main_postcard_pane_g3_ParamLimits

0xa115,	// (0x0006ef36) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x000742f3) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x000742f3) main_postcard_pane_g

0xa125,	// (0x0006ef46) main_postcard_pane_g4

0x2984,	// (0x000677a5) smil_status_volume_pane_g2

0xa151,	// (0x0006ef72) postcard_pane_ParamLimits

0xa151,	// (0x0006ef72) postcard_pane

0x154c,	// (0x0006636d) postcard_pane_g1_ParamLimits

0x154c,	// (0x0006636d) postcard_pane_g1

0xa183,	// (0x0006efa4) postcard_pane_g2_ParamLimits

0xa183,	// (0x0006efa4) postcard_pane_g2

0xa18f,	// (0x0006efb0) postcard_pane_g3_ParamLimits

0xa18f,	// (0x0006efb0) postcard_pane_g3

0x167c,	// (0x0006649d) postcard_pane_g4_ParamLimits

0x167c,	// (0x0006649d) postcard_pane_g4

0xa19b,	// (0x0006efbc) postcard_pane_g5_ParamLimits

0xa19b,	// (0x0006efbc) postcard_pane_g5

0xa1a7,	// (0x0006efc8) postcard_pane_g6_ParamLimits

0xa1a7,	// (0x0006efc8) postcard_pane_g6

0x166e,	// (0x0006648f) postcard_pane_g7_ParamLimits

0x166e,	// (0x0006648f) postcard_pane_g7

0x0006,

0xf4df,	// (0x00074300) postcard_pane_g_ParamLimits

0xf4df,	// (0x00074300) postcard_pane_g

0xa1b3,	// (0x0006efd4) main_mp2_pane_g1_ParamLimits

0xa1b3,	// (0x0006efd4) main_mp2_pane_g1

0xa1bf,	// (0x0006efe0) main_mp2_pane_g2_ParamLimits

0xa1bf,	// (0x0006efe0) main_mp2_pane_g2

0xa1cb,	// (0x0006efec) main_mp2_pane_g3_ParamLimits

0xa1cb,	// (0x0006efec) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x0007430f) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x0007430f) main_mp2_pane_g

0xa1d7,	// (0x0006eff8) main_mp2_pane_t1_ParamLimits

0xa1d7,	// (0x0006eff8) main_mp2_pane_t1

0xa1ee,	// (0x0006f00f) main_mp2_pane_t2_ParamLimits

0xa1ee,	// (0x0006f00f) main_mp2_pane_t2

0xa202,	// (0x0006f023) main_mp2_pane_t3_ParamLimits

0xa202,	// (0x0006f023) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x00074316) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x00074316) main_mp2_pane_t

0x168a,	// (0x000664ab) pec_content_pane_ParamLimits

0x168a,	// (0x000664ab) pec_content_pane

0x0c41,	// (0x00065a62) scroll_pane_cp015

0x169c,	// (0x000664bd) pec_attribute_pane_ParamLimits

0x169c,	// (0x000664bd) pec_attribute_pane

0xa214,	// (0x0006f035) pec_content_pane_g1_ParamLimits

0xa214,	// (0x0006f035) pec_content_pane_g1

0x16ac,	// (0x000664cd) pec_content_pane_t1_ParamLimits

0x16ac,	// (0x000664cd) pec_content_pane_t1

0x16be,	// (0x000664df) pec_content_pane_t2_ParamLimits

0x16be,	// (0x000664df) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x0007431d) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x0007431d) pec_content_pane_t

0xa220,	// (0x0006f041) list_single_graphic_pane_cp01_ParamLimits

0xa220,	// (0x0006f041) list_single_graphic_pane_cp01

0x0726,	// (0x00065547) bg_popup_sub_pane_cp04

0x16d0,	// (0x000664f1) popup_mup_playback_window_g1

0x16dc,	// (0x000664fd) popup_mup_playback_window_t1

0x16f1,	// (0x00066512) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x00074322) popup_mup_playback_window_t

0x1728,	// (0x00066549) main_image_pane_g1_ParamLimits

0x1728,	// (0x00066549) main_image_pane_g1

0x176b,	// (0x0006658c) scroll_pane_cp018_ParamLimits

0x176b,	// (0x0006658c) scroll_pane_cp018

0x1783,	// (0x000665a4) scroll_pane_cp016_ParamLimits

0x1783,	// (0x000665a4) scroll_pane_cp016

0xa2b9,	// (0x0006f0da) smil2_image_pane_ParamLimits

0xa2b9,	// (0x0006f0da) smil2_image_pane

0xa2e9,	// (0x0006f10a) smil2_root_pane_ParamLimits

0xa2e9,	// (0x0006f10a) smil2_root_pane

0xa315,	// (0x0006f136) smil2_text_pane_ParamLimits

0xa315,	// (0x0006f136) smil2_text_pane

0x04cb,	// (0x000652ec) bg_list_pane_cp06

0x17bf,	// (0x000665e0) grid_radio_pane

0x04cb,	// (0x000652ec) bg_popup_window_pane_cp06

0x17c7,	// (0x000665e8) main_fmradio_pane_t1

0x120f,	// (0x00066030) heading_pane_cp04

0x17d5,	// (0x000665f6) main_fmradio_pane_t2

0x279a,	// (0x000675bb) popup_cale_lunar_info_window_g1

0x17e3,	// (0x00066604) main_fmradio_pane_t3

0x27a2,	// (0x000675c3) popup_cale_lunar_info_window_g2

0x17f1,	// (0x00066612) main_fmradio_pane_t4

0x0001,

0x17ff,	// (0x00066620) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x000743fd) popup_cale_lunar_info_window_g

0xf516,	// (0x00074337) main_fmradio_pane_t

0x180d,	// (0x0006662e) wait_bar_pane_cp03

0x1815,	// (0x00066636) cell_fmradio_pane_ParamLimits

0x1815,	// (0x00066636) cell_fmradio_pane

0x166e,	// (0x0006648f) cell_fmradio_pane_g1_ParamLimits

0x166e,	// (0x0006648f) cell_fmradio_pane_g1

0x04cb,	// (0x000652ec) grid_highlight_pane_cp011

0x1828,	// (0x00066649) poc_content_pane_ParamLimits

0x1828,	// (0x00066649) poc_content_pane

0x183a,	// (0x0006665b) scroll_pane_cp019

0xa355,	// (0x0006f176) popup_call_poc_act_window_ParamLimits

0xa355,	// (0x0006f176) popup_call_poc_act_window

0xa362,	// (0x0006f183) popup_call_poc_inact_window_ParamLimits

0xa362,	// (0x0006f183) popup_call_poc_inact_window

0xf5b3,	// (0x000743d4) bg_popup_call_poc_act_pane_g

0x2712,	// (0x00067533) bg_popup_call_poc_inact_pane_g1

0x271a,	// (0x0006753b) bg_popup_call_poc_inact_pane_g2

0x1842,	// (0x00066663) popup_call_poc_act_window_g2

0x2722,	// (0x00067543) bg_popup_call_poc_inact_pane_g3

0x272a,	// (0x0006754b) bg_popup_call_poc_inact_pane_g4

0x2732,	// (0x00067553) bg_popup_call_poc_inact_pane_g5

0x184a,	// (0x0006666b) popup_call_poc_act_window_t1_ParamLimits

0x184a,	// (0x0006666b) popup_call_poc_act_window_t1

0x1872,	// (0x00066693) popup_call_poc_act_window_t2_ParamLimits

0x1872,	// (0x00066693) popup_call_poc_act_window_t2

0x189a,	// (0x000666bb) popup_call_poc_act_window_t3_ParamLimits

0x189a,	// (0x000666bb) popup_call_poc_act_window_t3

0x18c2,	// (0x000666e3) popup_call_poc_act_window_t4_ParamLimits

0x18c2,	// (0x000666e3) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x00074342) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x00074342) popup_call_poc_act_window_t

0x273a,	// (0x0006755b) bg_popup_call_poc_inact_pane_g6

0x2742,	// (0x00067563) bg_popup_call_poc_inact_pane_g7

0x274a,	// (0x0006756b) bg_popup_call_poc_inact_pane_g8

0x18d4,	// (0x000666f5) popup_call_poc_inact_window_g2

0x2752,	// (0x00067573) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x000743c1) bg_popup_call_poc_inact_pane_g

0x18dc,	// (0x000666fd) popup_call_poc_inact_window_t1_ParamLimits

0x18dc,	// (0x000666fd) popup_call_poc_inact_window_t1

0x18f1,	// (0x00066712) popup_call_poc_inact_window_t2_ParamLimits

0x18f1,	// (0x00066712) popup_call_poc_inact_window_t2

0x1906,	// (0x00066727) popup_call_poc_inact_window_t3_ParamLimits

0x1906,	// (0x00066727) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x0007434b) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x0007434b) popup_call_poc_inact_window_t

0x290a,	// (0x0006772b) context_pane_ParamLimits

0xa952,	// (0x0006f773) signal_pane_ParamLimits

0x147b,	// (0x0006629c) main_call2_pane

0x28f8,	// (0x00067719) popup_phob_thumbnail2_window_ParamLimits

0x28f8,	// (0x00067719) popup_phob_thumbnail2_window

0xa023,	// (0x0006ee44) aid_hotspot_pointer_arrow_pane

0xa02b,	// (0x0006ee4c) aid_hotspot_pointer_hand_pane

0xa684,	// (0x0006f4a5) phob_pre_status_pane_g5

0x8576,	// (0x0006d397) cams_zoom_pane_ParamLimits

0x8582,	// (0x0006d3a3) image_vga_pane_ParamLimits

0x8591,	// (0x0006d3b2) main_camera_pane_g1_ParamLimits

0x859f,	// (0x0006d3c0) main_camera_pane_g2_ParamLimits

0x85ab,	// (0x0006d3cc) main_camera_pane_g3_ParamLimits

0x85b7,	// (0x0006d3d8) main_camera_pane_g4_ParamLimits

0x85c3,	// (0x0006d3e4) main_camera_pane_g5_ParamLimits

0x85cf,	// (0x0006d3f0) main_camera_pane_g6_ParamLimits

0x85db,	// (0x0006d3fc) main_camera_pane_g7_ParamLimits

0xf229,	// (0x0007404a) main_camera_pane_g_ParamLimits

0x85e7,	// (0x0006d408) main_camera_pane_t1_ParamLimits

0x85f9,	// (0x0006d41a) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x0007405b) main_camera_pane_t_ParamLimits

0x0726,	// (0x00065547) bg_popup_preview_window_pane_cp01_ParamLimits

0x0726,	// (0x00065547) bg_popup_preview_window_pane_cp01

0x191b,	// (0x0006673c) popup_phob_thumbnail2_window_g1_ParamLimits

0x191b,	// (0x0006673c) popup_phob_thumbnail2_window_g1

0x04cb,	// (0x000652ec) call2_cli_visual_pane

0xa37e,	// (0x0006f19f) popup_call2_audio_conf_window_ParamLimits

0xa37e,	// (0x0006f19f) popup_call2_audio_conf_window

0xa393,	// (0x0006f1b4) popup_call2_audio_first_window_ParamLimits

0xa393,	// (0x0006f1b4) popup_call2_audio_first_window

0xa431,	// (0x0006f252) popup_call2_audio_in_window_ParamLimits

0xa431,	// (0x0006f252) popup_call2_audio_in_window

0xa473,	// (0x0006f294) popup_call2_audio_out_window_ParamLimits

0xa473,	// (0x0006f294) popup_call2_audio_out_window

0xa4d5,	// (0x0006f2f6) popup_call2_audio_second_window_ParamLimits

0xa4d5,	// (0x0006f2f6) popup_call2_audio_second_window

0xa533,	// (0x0006f354) popup_call2_audio_wait_window_ParamLimits

0xa533,	// (0x0006f354) popup_call2_audio_wait_window

0x04cb,	// (0x000652ec) bg_popup_call2_act_pane_cp03

0x0708,	// (0x00065529) list_conf_pane_cp

0x1927,	// (0x00066748) popup_call2_audio_conf_window_t1

0x126c,	// (0x0006608d) list_single_graphic_popup_conf2_pane_ParamLimits

0x126c,	// (0x0006608d) list_single_graphic_popup_conf2_pane

0x127f,	// (0x000660a0) list_highlight_pane_cp04

0x1935,	// (0x00066756) list_single_graphic_popup_conf2_pane_g1

0x1290,	// (0x000660b1) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x00074352) list_single_graphic_popup_conf2_pane_g

0x193f,	// (0x00066760) list_single_graphic_popup_conf2_pane_t1

0x194d,	// (0x0006676e) bg_popup_call2_act_pane_cp01_ParamLimits

0x194d,	// (0x0006676e) bg_popup_call2_act_pane_cp01

0x19d7,	// (0x000667f8) call_type_pane_cp05_ParamLimits

0x19d7,	// (0x000667f8) call_type_pane_cp05

0x1a2b,	// (0x0006684c) popup_call2_audio_second_window_g1_ParamLimits

0x1a2b,	// (0x0006684c) popup_call2_audio_second_window_g1

0x1a7f,	// (0x000668a0) popup_call2_audio_second_window_g2_ParamLimits

0x1a7f,	// (0x000668a0) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x00074357) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x00074357) popup_call2_audio_second_window_g

0x1ae4,	// (0x00066905) popup_call2_audio_second_window_t1_ParamLimits

0x1ae4,	// (0x00066905) popup_call2_audio_second_window_t1

0x1b9f,	// (0x000669c0) popup_call2_audio_second_window_t2_ParamLimits

0x1b9f,	// (0x000669c0) popup_call2_audio_second_window_t2

0x1bf2,	// (0x00066a13) popup_call2_audio_second_window_t3_ParamLimits

0x1bf2,	// (0x00066a13) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x0007435e) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x0007435e) popup_call2_audio_second_window_t

0x04cb,	// (0x000652ec) bg_popup_call2_in_pane_cp02

0x04d5,	// (0x000652f6) call_type_pane_cp04

0x04dd,	// (0x000652fe) popup_call2_audio_wait_window_g1

0x04e5,	// (0x00065306) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x00073f37) popup_call2_audio_wait_window_g

0x04ed,	// (0x0006530e) popup_call2_audio_wait_window_t3

0x1ce5,	// (0x00066b06) bg_popup_call2_act_pane_ParamLimits

0x1ce5,	// (0x00066b06) bg_popup_call2_act_pane

0x1da5,	// (0x00066bc6) call_type_pane_cp03_ParamLimits

0x1da5,	// (0x00066bc6) call_type_pane_cp03

0x1e09,	// (0x00066c2a) popup_call2_audio_first_window_g1_ParamLimits

0x1e09,	// (0x00066c2a) popup_call2_audio_first_window_g1

0x1e79,	// (0x00066c9a) popup_call2_audio_first_window_g2_ParamLimits

0x1e79,	// (0x00066c9a) popup_call2_audio_first_window_g2

0x154c,	// (0x0006636d) popup_call2_audio_first_window_g3_ParamLimits

0x154c,	// (0x0006636d) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x00074367) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x00074367) popup_call2_audio_first_window_g

0x1f57,	// (0x00066d78) popup_call2_audio_first_window_t1_ParamLimits

0x1f57,	// (0x00066d78) popup_call2_audio_first_window_t1

0x205a,	// (0x00066e7b) popup_call2_audio_first_window_t4_ParamLimits

0x205a,	// (0x00066e7b) popup_call2_audio_first_window_t4

0x213d,	// (0x00066f5e) popup_call2_audio_first_window_t5_ParamLimits

0x213d,	// (0x00066f5e) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x00074372) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x00074372) popup_call2_audio_first_window_t

0x071e,	// (0x0006553f) bg_popup_call2_act_pane_g1

0x27aa,	// (0x000675cb) popup_cale_lunar_info_window_t1

0x27b8,	// (0x000675d9) popup_cale_lunar_info_window_t2

0x27c6,	// (0x000675e7) popup_cale_lunar_info_window_t3

0x04cb,	// (0x000652ec) bg_popup_call2_bubble_pane

0x223e,	// (0x0006705f) bg_popup_call2_in_pane_cp01_ParamLimits

0x223e,	// (0x0006705f) bg_popup_call2_in_pane_cp01

0x01a7,	// (0x00064fc8) call_type_pane_cp02

0x2286,	// (0x000670a7) popup_call2_audio_out_window_g1_ParamLimits

0x2286,	// (0x000670a7) popup_call2_audio_out_window_g1

0x22b2,	// (0x000670d3) popup_call2_audio_out_window_g2_ParamLimits

0x22b2,	// (0x000670d3) popup_call2_audio_out_window_g2

0x22da,	// (0x000670fb) popup_call2_audio_out_window_g3_ParamLimits

0x22da,	// (0x000670fb) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x0007437b) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x0007437b) popup_call2_audio_out_window_g

0x2315,	// (0x00067136) popup_call2_audio_out_window_t1_ParamLimits

0x2315,	// (0x00067136) popup_call2_audio_out_window_t1

0x2374,	// (0x00067195) popup_call2_audio_out_window_t2_ParamLimits

0x2374,	// (0x00067195) popup_call2_audio_out_window_t2

0x23c8,	// (0x000671e9) popup_call2_audio_out_window_t3_ParamLimits

0x23c8,	// (0x000671e9) popup_call2_audio_out_window_t3

0x23de,	// (0x000671ff) popup_call2_audio_out_window_t4_ParamLimits

0x23de,	// (0x000671ff) popup_call2_audio_out_window_t4

0x23f4,	// (0x00067215) popup_call2_audio_out_window_t5_ParamLimits

0x23f4,	// (0x00067215) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x00074384) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x00074384) popup_call2_audio_out_window_t

0x2458,	// (0x00067279) bg_popup_call2_in_pane_ParamLimits

0x2458,	// (0x00067279) bg_popup_call2_in_pane

0x24b4,	// (0x000672d5) popup_call2_audio_in_window_g1_ParamLimits

0x24b4,	// (0x000672d5) popup_call2_audio_in_window_g1

0x24ec,	// (0x0006730d) popup_call2_audio_in_window_g2_ParamLimits

0x24ec,	// (0x0006730d) popup_call2_audio_in_window_g2

0x2524,	// (0x00067345) popup_call2_audio_in_window_g3_ParamLimits

0x2524,	// (0x00067345) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x00074391) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x00074391) popup_call2_audio_in_window_g

0x257c,	// (0x0006739d) popup_call2_audio_in_window_t1_ParamLimits

0x257c,	// (0x0006739d) popup_call2_audio_in_window_t1

0x25fc,	// (0x0006741d) popup_call2_audio_in_window_t2_ParamLimits

0x25fc,	// (0x0006741d) popup_call2_audio_in_window_t2

0x267c,	// (0x0006749d) popup_call2_audio_in_window_t3_ParamLimits

0x267c,	// (0x0006749d) popup_call2_audio_in_window_t3

0x2696,	// (0x000674b7) popup_call2_audio_in_window_t4_ParamLimits

0x2696,	// (0x000674b7) popup_call2_audio_in_window_t4

0x26a8,	// (0x000674c9) popup_call2_audio_in_window_t5_ParamLimits

0x26a8,	// (0x000674c9) popup_call2_audio_in_window_t5

0x26bd,	// (0x000674de) popup_call2_audio_in_window_t6_ParamLimits

0x26bd,	// (0x000674de) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x0007439a) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x0007439a) popup_call2_audio_in_window_t

0x071e,	// (0x0006553f) bg_popup_call2_in_pane_g1

0x27d4,	// (0x000675f5) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x00074402) popup_cale_lunar_info_window_t

0x0726,	// (0x00065547) bg_popup_call2_rect_pane_ParamLimits

0x0726,	// (0x00065547) bg_popup_call2_rect_pane

0x04cb,	// (0x000652ec) call2_cli_visual_graphic_pane

0x04cb,	// (0x000652ec) call2_cli_visual_text_pane

0xa9f8,	// (0x0006f819) smil_status_volume_pane_g3

0x0002,

0x089e,	// (0x000656bf) call2_cli_visual_graphic_pane_g1

0x089e,	// (0x000656bf) call2_cli_visual_graphic_pane_g2

0x089e,	// (0x000656bf) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x000743a7) call2_cli_visual_graphic_pane_g

0x26d2,	// (0x000674f3) bg_popup_call2_rect_pane_g1

0x092a,	// (0x0006574b) bg_popup_call2_rect_pane_g2

0x26da,	// (0x000674fb) bg_popup_call2_rect_pane_g3

0x26e2,	// (0x00067503) bg_popup_call2_rect_pane_g4

0x26ea,	// (0x0006750b) bg_popup_call2_rect_pane_g5

0x26f2,	// (0x00067513) bg_popup_call2_rect_pane_g6

0x26fa,	// (0x0006751b) bg_popup_call2_rect_pane_g7

0x2702,	// (0x00067523) bg_popup_call2_rect_pane_g8

0x270a,	// (0x0006752b) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x000743ae) bg_popup_call2_rect_pane_g

0x2712,	// (0x00067533) bg_popup_call2_bubble_pane_g1

0x271a,	// (0x0006753b) bg_popup_call2_bubble_pane_g2

0x2722,	// (0x00067543) bg_popup_call2_bubble_pane_g3

0x272a,	// (0x0006754b) bg_popup_call2_bubble_pane_g4

0x2732,	// (0x00067553) bg_popup_call2_bubble_pane_g5

0x273a,	// (0x0006755b) bg_popup_call2_bubble_pane_g6

0x2742,	// (0x00067563) bg_popup_call2_bubble_pane_g7

0x274a,	// (0x0006756b) bg_popup_call2_bubble_pane_g8

0x2752,	// (0x00067573) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x000743c1) bg_popup_call2_bubble_pane_g

0x80ef,	// (0x0006cf10) aid_cale_week_size_cell_pane

0x860b,	// (0x0006d42c) aid_cams_cif_uncrop_pane_ParamLimits

0x860b,	// (0x0006d42c) aid_cams_cif_uncrop_pane

0x8766,	// (0x0006d587) aid_cams_size_cell_ParamLimits

0x8766,	// (0x0006d587) aid_cams_size_cell

0x8772,	// (0x0006d593) grid_cams_pane_ParamLimits

0x8780,	// (0x0006d5a1) linegrid_cams_pane_ParamLimits

0x8857,	// (0x0006d678) call_video_pane_t1

0x8878,	// (0x0006d699) call_video_pane_t2

0x0001,

0xf28d,	// (0x000740ae) call_video_pane_t

0x8daf,	// (0x0006dbd0) aid_cale_month_size_cell_pane_ParamLimits

0x8daf,	// (0x0006dbd0) aid_cale_month_size_cell_pane

0xf62a,	// (0x0007444b) smil_status_volume_pane_g

0xaa05,	// (0x0006f826) volume_smil_pane_ParamLimits

0x7862,	// (0x0006c683) aid_popup2_width_pane

0x7ff7,	// (0x0006ce18) cell_qdial_pane_g4_ParamLimits

0x7ff7,	// (0x0006ce18) cell_qdial_pane_g4

0x99d2,	// (0x0006e7f3) aid_blid_cardinal_pane_ParamLimits

0x99e2,	// (0x0006e803) aid_blid_destination_pane_ParamLimits

0x99e2,	// (0x0006e803) aid_blid_destination_pane

0x0726,	// (0x00065547) bg_popup_call_poc_act_pane_ParamLimits

0x0726,	// (0x00065547) bg_popup_call_poc_act_pane

0x0726,	// (0x00065547) bg_popup_call_poc_inact_pane_ParamLimits

0x0726,	// (0x00065547) bg_popup_call_poc_inact_pane

0x275a,	// (0x0006757b) bg_popup_call_poc_act_pane_g1

0x2762,	// (0x00067583) bg_popup_call_poc_act_pane_g2

0x276a,	// (0x0006758b) bg_popup_call_poc_act_pane_g3

0x272a,	// (0x0006754b) bg_popup_call_poc_act_pane_g4

0x2732,	// (0x00067553) bg_popup_call_poc_act_pane_g5

0x2772,	// (0x00067593) bg_popup_call_poc_act_pane_g6

0x2742,	// (0x00067563) bg_popup_call_poc_act_pane_g7

0x277a,	// (0x0006759b) bg_popup_call_poc_act_pane_g8

0x04cb,	// (0x000652ec) main_usb_pane

0x28d3,	// (0x000676f4) popup_cale_lunar_info_window

0x8ba3,	// (0x0006d9c4) im_reading_pane_t1_ParamLimits

0x0b99,	// (0x000659ba) list_im_pane_ParamLimits

0x0baa,	// (0x000659cb) scroll_pane_cp07_ParamLimits

0x04cb,	// (0x000652ec) grid_highlight_pane_cp012

0x0726,	// (0x00065547) mup_scale_pane_ParamLimits

0x154c,	// (0x0006636d) main_usb_pane_g1_ParamLimits

0x154c,	// (0x0006636d) main_usb_pane_g1

0xa5a7,	// (0x0006f3c8) main_usb_pane_g2_ParamLimits

0xa5a7,	// (0x0006f3c8) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x000743eb) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x000743eb) main_usb_pane_g

0xa5b3,	// (0x0006f3d4) main_usb_pane_t1_ParamLimits

0xa5b3,	// (0x0006f3d4) main_usb_pane_t1

0xa5c5,	// (0x0006f3e6) main_usb_pane_t2_ParamLimits

0xa5c5,	// (0x0006f3e6) main_usb_pane_t2

0xa5d7,	// (0x0006f3f8) main_usb_pane_t3_ParamLimits

0xa5d7,	// (0x0006f3f8) main_usb_pane_t3

0xa5e9,	// (0x0006f40a) main_usb_pane_t4_ParamLimits

0xa5e9,	// (0x0006f40a) main_usb_pane_t4

0xa5fb,	// (0x0006f41c) main_usb_pane_t5_ParamLimits

0xa5fb,	// (0x0006f41c) main_usb_pane_t5

0xa60d,	// (0x0006f42e) main_usb_pane_t6_ParamLimits

0xa60d,	// (0x0006f42e) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x000743f0) main_usb_pane_t_ParamLimits

0x9978,	// (0x0006e799) aid_text_placing

0x9984,	// (0x0006e7a5) main_location2_pane_t1_ParamLimits

0x9998,	// (0x0006e7b9) main_location2_pane_t2_ParamLimits

0x99ac,	// (0x0006e7cd) main_location2_pane_t3_ParamLimits

0x99c0,	// (0x0006e7e1) main_location2_pane_t4_ParamLimits

0x99c0,	// (0x0006e7e1) main_location2_pane_t4

0xf3ee,	// (0x0007420f) main_location2_pane_t_ParamLimits

0x0762,	// (0x00065583) find_pinb_pane_g2_ParamLimits

0x0762,	// (0x00065583) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x00073f5d) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x00073f5d) find_pinb_pane_g

0x076e,	// (0x0006558f) find_pinb_pane_t1_ParamLimits

0x0780,	// (0x000655a1) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x00073f62) find_pinb_pane_t_ParamLimits

0x04cb,	// (0x000652ec) main_call3_pane

0x91bb,	// (0x0006dfdc) cale_month_day_heading_pane_t1_ParamLimits

0x9219,	// (0x0006e03a) cale_month_day_heading_pane_t2_ParamLimits

0x927e,	// (0x0006e09f) cale_month_day_heading_pane_t3_ParamLimits

0x92e3,	// (0x0006e104) cale_month_day_heading_pane_t4_ParamLimits

0x9348,	// (0x0006e169) cale_month_day_heading_pane_t5_ParamLimits

0x93ad,	// (0x0006e1ce) cale_month_day_heading_pane_t6_ParamLimits

0x9412,	// (0x0006e233) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x000740e6) cale_month_day_heading_pane_t_ParamLimits

0x0df6,	// (0x00065c17) smil_status_volume_pane

0xa16b,	// (0x0006ef8c) postcard_address_pane_ParamLimits

0xa16b,	// (0x0006ef8c) postcard_address_pane

0xa177,	// (0x0006ef98) postcard_message_pane_ParamLimits

0xa177,	// (0x0006ef98) postcard_message_pane

0xa572,	// (0x0006f393) call2_cli_visual_pane_t1_ParamLimits

0xa572,	// (0x0006f393) call2_cli_visual_pane_t1

0xab5c,	// (0x0006f97d) postcard_message_pane_t1_ParamLimits

0xab5c,	// (0x0006f97d) postcard_message_pane_t1

0xab45,	// (0x0006f966) postcard_address_pane_t1_ParamLimits

0xab45,	// (0x0006f966) postcard_address_pane_t1

0xab36,	// (0x0006f957) popup_call3_audio_in_window_ParamLimits

0xab36,	// (0x0006f957) popup_call3_audio_in_window

0xaa1a,	// (0x0006f83b) bg_popup_call3_in_pane_ParamLimits

0xaa1a,	// (0x0006f83b) bg_popup_call3_in_pane

0xaa7c,	// (0x0006f89d) popup_call3_audio_in_window_g1_ParamLimits

0xaa7c,	// (0x0006f89d) popup_call3_audio_in_window_g1

0xaa94,	// (0x0006f8b5) popup_call3_audio_in_window_g2_ParamLimits

0xaa94,	// (0x0006f8b5) popup_call3_audio_in_window_g2

0xaaac,	// (0x0006f8cd) popup_call3_audio_in_window_g3_ParamLimits

0xaaac,	// (0x0006f8cd) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x00074452) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x00074452) popup_call3_audio_in_window_g

0xaad4,	// (0x0006f8f5) popup_call3_audio_in_window_t1_ParamLimits

0xaad4,	// (0x0006f8f5) popup_call3_audio_in_window_t1

0xaafc,	// (0x0006f91d) popup_call3_audio_in_window_t2_ParamLimits

0xaafc,	// (0x0006f91d) popup_call3_audio_in_window_t2

0xab24,	// (0x0006f945) popup_call3_audio_in_window_t3_ParamLimits

0xab24,	// (0x0006f945) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x0007445b) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x0007445b) popup_call3_audio_in_window_t

0x147b,	// (0x0006629c) bg_popup_call3_rect_pane

0x26d2,	// (0x000674f3) bg_popup_call3_rect_pane_g1

0x092a,	// (0x0006574b) bg_popup_call3_rect_pane_g2

0x26da,	// (0x000674fb) bg_popup_call3_rect_pane_g3

0x26e2,	// (0x00067503) bg_popup_call3_rect_pane_g4

0x26ea,	// (0x0006750b) bg_popup_call3_rect_pane_g5

0x26f2,	// (0x00067513) bg_popup_call3_rect_pane_g6

0x26fa,	// (0x0006751b) bg_popup_call3_rect_pane_g7

0x9de8,	// (0x0006ec09) mup_visualizer_osc_pane

0x155a,	// (0x0006637b) mup_visualizer_spec_pane

0xaa3a,	// (0x0006f85b) call3_video_qcif_pane_ParamLimits

0xaa3a,	// (0x0006f85b) call3_video_qcif_pane

0xaa4c,	// (0x0006f86d) call3_video_qcif_uncrop_pane_ParamLimits

0xaa4c,	// (0x0006f86d) call3_video_qcif_uncrop_pane

0xaa5a,	// (0x0006f87b) call3_video_subqcif_pane_ParamLimits

0xaa5a,	// (0x0006f87b) call3_video_subqcif_pane

0xaa6c,	// (0x0006f88d) call3_video_subqcif_uncrop_pane_ParamLimits

0xaa6c,	// (0x0006f88d) call3_video_subqcif_uncrop_pane

0xaac4,	// (0x0006f8e5) popup_call3_audio_in_window_g4_ParamLimits

0xaac4,	// (0x0006f8e5) popup_call3_audio_in_window_g4

0xa9e7,	// (0x0006f808) mup_spec_half_pane

0xa9f0,	// (0x0006f811) mup_spec_half_pane_cp

0x296a,	// (0x0006778b) mup_osc_middle_pane

0x2973,	// (0x00067794) mup_visualizer_osc_pane_g1

0xa9c8,	// (0x0006f7e9) mup_spec_bar_pane_ParamLimits

0xa9c8,	// (0x0006f7e9) mup_spec_bar_pane

0x2957,	// (0x00067778) mup_spec_bar_pane_g1

0x2961,	// (0x00067782) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x00074446) mup_spec_bar_pane_g

0x80ef,	// (0x0006cf10) aid_cale_week_size_cell_pane_ParamLimits

0x8102,	// (0x0006cf23) bg_cale_heading_pane_ParamLimits

0x09a6,	// (0x000657c7) bg_cale_pane_cp01_ParamLimits

0x811e,	// (0x0006cf3f) cale_week_corner_pane_ParamLimits

0x8134,	// (0x0006cf55) cale_week_day_heading_pane_ParamLimits

0x8150,	// (0x0006cf71) cale_week_scroll_pane_g1_ParamLimits

0x8169,	// (0x0006cf8a) cale_week_scroll_pane_g2_ParamLimits

0x817a,	// (0x0006cf9b) cale_week_scroll_pane_g3_ParamLimits

0x818b,	// (0x0006cfac) cale_week_scroll_pane_g4_ParamLimits

0x819c,	// (0x0006cfbd) cale_week_scroll_pane_g5_ParamLimits

0x81ad,	// (0x0006cfce) cale_week_scroll_pane_g6_ParamLimits

0x81be,	// (0x0006cfdf) cale_week_scroll_pane_g7_ParamLimits

0x81d1,	// (0x0006cff2) cale_week_scroll_pane_g8_ParamLimits

0x81e4,	// (0x0006d005) cale_week_scroll_pane_g9_ParamLimits

0x81f5,	// (0x0006d016) cale_week_scroll_pane_g10_ParamLimits

0x8206,	// (0x0006d027) cale_week_scroll_pane_g11_ParamLimits

0x8217,	// (0x0006d038) cale_week_scroll_pane_g12_ParamLimits

0x8228,	// (0x0006d049) cale_week_scroll_pane_g13_ParamLimits

0x8241,	// (0x0006d062) cale_week_scroll_pane_g14_ParamLimits

0x825a,	// (0x0006d07b) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x00073fee) cale_week_scroll_pane_g_ParamLimits

0x8273,	// (0x0006d094) cale_week_time_pane_ParamLimits

0x8286,	// (0x0006d0a7) grid_cale_week_pane_ParamLimits

0x09bf,	// (0x000657e0) listscroll_cale_week_pane_t1

0x82a3,	// (0x0006d0c4) scroll_pane_cp08_ParamLimits

0x8e00,	// (0x0006dc21) cale_month_corner_pane_ParamLimits

0x0dc0,	// (0x00065be1) cale_month_pane_t1

0x916a,	// (0x0006df8b) cale_month_week_pane_ParamLimits

0x154c,	// (0x0006636d) popup_call_status_window_g1_ParamLimits

0x979b,	// (0x0006e5bc) popup_call_status_window_g2_ParamLimits

0x97a7,	// (0x0006e5c8) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x00074196) popup_call_status_window_g_ParamLimits

0x1194,	// (0x00065fb5) aid_call2_pane

0x6964,	// (0x0006b785) msg_header_pane_g1

0xa16b,	// (0x0006ef8c) postcard_address2_pane_ParamLimits

0xa16b,	// (0x0006ef8c) postcard_address2_pane

0xa177,	// (0x0006ef98) postcard_message2_pane_ParamLimits

0xa177,	// (0x0006ef98) postcard_message2_pane

0xa960,	// (0x0006f781) message2_row_pane_ParamLimits

0xa960,	// (0x0006f781) message2_row_pane

0xa97b,	// (0x0006f79c) address2_row_pane_ParamLimits

0xa97b,	// (0x0006f79c) address2_row_pane

0x2925,	// (0x00067746) postcard_message2_row_pane_g1

0x292d,	// (0x0006774e) postcard_message2_row_pane_t1

0x2925,	// (0x00067746) address2_row_pane_g1

0x292d,	// (0x0006774e) address2_row_pane_t1

0x84d7,	// (0x0006d2f8) aid_size_cell_vorec

0x04cb,	// (0x000652ec) main_rss_pane

0xa98e,	// (0x0006f7af) rss_list_single_pane_ParamLimits

0xa98e,	// (0x0006f7af) rss_list_single_pane

0x293b,	// (0x0006775c) rss_list_single_pane_t1

0x2949,	// (0x0006776a) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x00074441) rss_list_single_pane_t

0x04cb,	// (0x000652ec) main_camera2_pane

0x04cb,	// (0x000652ec) main_video2_pane

0xabc0,	// (0x0006f9e1) cams_zoom_pane_cp2_ParamLimits

0xabc0,	// (0x0006f9e1) cams_zoom_pane_cp2

0xabcc,	// (0x0006f9ed) image2_vga_pane_ParamLimits

0xabcc,	// (0x0006f9ed) image2_vga_pane

0xabdb,	// (0x0006f9fc) main_camera2_pane_g1_ParamLimits

0xabdb,	// (0x0006f9fc) main_camera2_pane_g1

0xabe7,	// (0x0006fa08) main_camera2_pane_g2_ParamLimits

0xabe7,	// (0x0006fa08) main_camera2_pane_g2

0xabf3,	// (0x0006fa14) main_camera2_pane_g3_ParamLimits

0xabf3,	// (0x0006fa14) main_camera2_pane_g3

0xabff,	// (0x0006fa20) main_camera2_pane_g4_ParamLimits

0xabff,	// (0x0006fa20) main_camera2_pane_g4

0xac0b,	// (0x0006fa2c) main_camera2_pane_g5_ParamLimits

0xac0b,	// (0x0006fa2c) main_camera2_pane_g5

0xac17,	// (0x0006fa38) main_camera2_pane_g6_ParamLimits

0xac17,	// (0x0006fa38) main_camera2_pane_g6

0xac23,	// (0x0006fa44) main_camera2_pane_g7_ParamLimits

0xac23,	// (0x0006fa44) main_camera2_pane_g7

0xac2f,	// (0x0006fa50) main_camera2_pane_g8_ParamLimits

0xac2f,	// (0x0006fa50) main_camera2_pane_g8

0x0008,

0xf641,	// (0x00074462) main_camera2_pane_g_ParamLimits

0xf641,	// (0x00074462) main_camera2_pane_g

0xac47,	// (0x0006fa68) main_camera2_pane_t1_ParamLimits

0xac47,	// (0x0006fa68) main_camera2_pane_t1

0xac59,	// (0x0006fa7a) main_camera2_pane_t2_ParamLimits

0xac59,	// (0x0006fa7a) main_camera2_pane_t2

0xac6b,	// (0x0006fa8c) main_camera2_pane_t3_ParamLimits

0xac6b,	// (0x0006fa8c) main_camera2_pane_t3

0xac7d,	// (0x0006fa9e) main_camera2_pane_t4_ParamLimits

0xac7d,	// (0x0006fa9e) main_camera2_pane_t4

0x0006,

0xf654,	// (0x00074475) main_camera2_pane_t_ParamLimits

0xf654,	// (0x00074475) main_camera2_pane_t

0xacdf,	// (0x0006fb00) cams_zoom_pane_cp4_ParamLimits

0xacdf,	// (0x0006fb00) cams_zoom_pane_cp4

0xacef,	// (0x0006fb10) image2_cif_pane_ParamLimits

0xacef,	// (0x0006fb10) image2_cif_pane

0xad04,	// (0x0006fb25) image2_subqcif_pane_ParamLimits

0xad04,	// (0x0006fb25) image2_subqcif_pane

0xad13,	// (0x0006fb34) main_video2_pane_g1_ParamLimits

0xad13,	// (0x0006fb34) main_video2_pane_g1

0xad25,	// (0x0006fb46) main_video2_pane_g2_ParamLimits

0xad25,	// (0x0006fb46) main_video2_pane_g2

0xad35,	// (0x0006fb56) main_video2_pane_g3_ParamLimits

0xad35,	// (0x0006fb56) main_video2_pane_g3

0xad45,	// (0x0006fb66) main_video2_pane_g4_ParamLimits

0xad45,	// (0x0006fb66) main_video2_pane_g4

0xad55,	// (0x0006fb76) main_video2_pane_g5_ParamLimits

0xad55,	// (0x0006fb76) main_video2_pane_g5

0xad65,	// (0x0006fb86) main_video2_pane_g6_ParamLimits

0xad65,	// (0x0006fb86) main_video2_pane_g6

0x0005,

0xf663,	// (0x00074484) main_video2_pane_g_ParamLimits

0xf663,	// (0x00074484) main_video2_pane_g

0xad77,	// (0x0006fb98) main_video2_pane_t1_ParamLimits

0xad77,	// (0x0006fb98) main_video2_pane_t1

0xad91,	// (0x0006fbb2) main_video2_pane_t2_ParamLimits

0xad91,	// (0x0006fbb2) main_video2_pane_t2

0xadb7,	// (0x0006fbd8) main_video2_pane_t3_ParamLimits

0xadb7,	// (0x0006fbd8) main_video2_pane_t3

0x0002,

0xf670,	// (0x00074491) main_video2_pane_t_ParamLimits

0xf670,	// (0x00074491) main_video2_pane_t

0xa6c4,	// (0x0006f4e5) call_muted_g2

0x0001,

0xf612,	// (0x00074433) call_muted_g

0x04cb,	// (0x000652ec) main_mup2_pane

0x2a2a,	// (0x0006784b) main_mup2_pane_g1_ParamLimits

0x2a2a,	// (0x0006784b) main_mup2_pane_g1

0xaddd,	// (0x0006fbfe) main_mup2_pane_g2_ParamLimits

0xaddd,	// (0x0006fbfe) main_mup2_pane_g2

0xb05f,	// (0x0006fe80) main_mup_pane_g13_cp1

0xb067,	// (0x0006fe88) mup_volume_pane_cp1

0xadfd,	// (0x0006fc1e) main_mup2_pane_g4_ParamLimits

0xadfd,	// (0x0006fc1e) main_mup2_pane_g4

0xae12,	// (0x0006fc33) main_mup2_pane_g5_ParamLimits

0xae12,	// (0x0006fc33) main_mup2_pane_g5

0xae27,	// (0x0006fc48) main_mup2_pane_g6_ParamLimits

0xae27,	// (0x0006fc48) main_mup2_pane_g6

0xae3c,	// (0x0006fc5d) main_mup2_pane_g7_ParamLimits

0xae3c,	// (0x0006fc5d) main_mup2_pane_g7

0x0006,

0xf677,	// (0x00074498) main_mup2_pane_g_ParamLimits

0xf677,	// (0x00074498) main_mup2_pane_g

0xae58,	// (0x0006fc79) main_mup2_pane_t1_ParamLimits

0xae58,	// (0x0006fc79) main_mup2_pane_t1

0xae6f,	// (0x0006fc90) main_mup2_pane_t2_ParamLimits

0xae6f,	// (0x0006fc90) main_mup2_pane_t2

0xae86,	// (0x0006fca7) main_mup2_pane_t3_ParamLimits

0xae86,	// (0x0006fca7) main_mup2_pane_t3

0xae9d,	// (0x0006fcbe) main_mup2_pane_t4_ParamLimits

0xae9d,	// (0x0006fcbe) main_mup2_pane_t4

0xaeb7,	// (0x0006fcd8) main_mup2_pane_t5_ParamLimits

0xaeb7,	// (0x0006fcd8) main_mup2_pane_t5

0xaed1,	// (0x0006fcf2) main_mup2_pane_t6_ParamLimits

0xaed1,	// (0x0006fcf2) main_mup2_pane_t6

0x0005,

0xf686,	// (0x000744a7) main_mup2_pane_t_ParamLimits

0xf686,	// (0x000744a7) main_mup2_pane_t

0xaf09,	// (0x0006fd2a) mup2_visualizer_pane_ParamLimits

0xaf09,	// (0x0006fd2a) mup2_visualizer_pane

0xaf3f,	// (0x0006fd60) mup_progress_pane_cp_ParamLimits

0xaf3f,	// (0x0006fd60) mup_progress_pane_cp

0xb04a,	// (0x0006fe6b) mup_volume_pane_cp_ParamLimits

0xb04a,	// (0x0006fe6b) mup_volume_pane_cp

0xaf56,	// (0x0006fd77) mup2_visualizer_pane_g1_ParamLimits

0xaf56,	// (0x0006fd77) mup2_visualizer_pane_g1

0x29fc,	// (0x0006781d) mup2_visualizer_pane_g2_ParamLimits

0x29fc,	// (0x0006781d) mup2_visualizer_pane_g2

0xaf6b,	// (0x0006fd8c) mup2_visualizer_pane_g3_ParamLimits

0xaf6b,	// (0x0006fd8c) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x000744b4) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x000744b4) mup2_visualizer_pane_g

0x17b7,	// (0x000665d8) aid_size_cell_fmradio

0xa7da,	// (0x0006f5fb) aid_height_parent_landcape

0x0c28,	// (0x00065a49) wml_content_pane_cp

0x0c30,	// (0x00065a51) wml_tabs_pane

0x0c39,	// (0x00065a5a) popup_wml_miniature_window

0x0c41,	// (0x00065a62) scroll_pane_cp021

0x0c55,	// (0x00065a76) wml_content_pane_comp8

0x04cb,	// (0x000652ec) bg_popup_sub_pane_cp05

0x2a1a,	// (0x0006783b) popup_wml_miniature_window_g1

0x2a22,	// (0x00067843) wml_miniature_view_pane

0xaf79,	// (0x0006fd9a) aid_size_wml_view

0xaf81,	// (0x0006fda2) wml_miniature_view_pane_g1

0xaf8a,	// (0x0006fdab) wml_miniature_view_pane_g2

0xaf93,	// (0x0006fdb4) wml_miniature_view_pane_g3

0xaf9b,	// (0x0006fdbc) wml_miniature_view_pane_g4

0xafa3,	// (0x0006fdc4) wml_miniature_view_pane_g5

0xafab,	// (0x0006fdcc) wml_miniature_view_pane_g6

0xafb3,	// (0x0006fdd4) wml_miniature_view_pane_g7

0xafbb,	// (0x0006fddc) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x000744bb) wml_miniature_view_pane_g

0x2a2a,	// (0x0006784b) background_graphic_ParamLimits

0x2a2a,	// (0x0006784b) background_graphic

0x2a36,	// (0x00067857) wml_tabs_2_pane

0x2a3f,	// (0x00067860) wml_tabs_3_pane_ParamLimits

0x2a3f,	// (0x00067860) wml_tabs_3_pane

0x2a51,	// (0x00067872) wml_tabs_4_pane_ParamLimits

0x2a51,	// (0x00067872) wml_tabs_4_pane

0x2a67,	// (0x00067888) wml_tabs_5_pane_ParamLimits

0x2a67,	// (0x00067888) wml_tabs_5_pane

0x2a81,	// (0x000678a2) wml_tabs_pane_g2_ParamLimits

0x2a81,	// (0x000678a2) wml_tabs_pane_g2

0x2a95,	// (0x000678b6) wml_tabs_pane_g3_ParamLimits

0x2a95,	// (0x000678b6) wml_tabs_pane_g3

0xafc3,	// (0x0006fde4) wml_tabs_2_active_pane_ParamLimits

0xafc3,	// (0x0006fde4) wml_tabs_2_active_pane

0xafd3,	// (0x0006fdf4) wml_tabs_2_passive_pane_ParamLimits

0xafd3,	// (0x0006fdf4) wml_tabs_2_passive_pane

0xafe3,	// (0x0006fe04) wml_tabs_3_active_pane_cp_ParamLimits

0xafe3,	// (0x0006fe04) wml_tabs_3_active_pane_cp

0xaff4,	// (0x0006fe15) wml_tabs_3_passive_pane_ParamLimits

0xaff4,	// (0x0006fe15) wml_tabs_3_passive_pane

0xb005,	// (0x0006fe26) wml_tabs_3_passive_pane_cp_ParamLimits

0xb005,	// (0x0006fe26) wml_tabs_3_passive_pane_cp

0xb016,	// (0x0006fe37) tabs_4_active_pane

0xb01e,	// (0x0006fe3f) tabs_4_passive_pane

0xb026,	// (0x0006fe47) tabs_4_passive_pane_cp

0xb02e,	// (0x0006fe4f) tabs_4_passive_pane_cp2

0xa59f,	// (0x0006f3c0) aid_height_text

0x9db5,	// (0x0006ebd6) mup_volume_cont_pane_ParamLimits

0x9db5,	// (0x0006ebd6) mup_volume_cont_pane

0x7c33,	// (0x0006ca54) aid_size_cell_pinb

0x7c3d,	// (0x0006ca5e) aid_size_list_pinb

0xaf28,	// (0x0006fd49) mup2_volume_cont_pane_ParamLimits

0xaf28,	// (0x0006fd49) mup2_volume_cont_pane

0xb036,	// (0x0006fe57) mup2_volume_cont_pane_g1_ParamLimits

0xb036,	// (0x0006fe57) mup2_volume_cont_pane_g1

0x786e,	// (0x0006c68f) aid_size_cell_touch_ParamLimits

0x786e,	// (0x0006c68f) aid_size_cell_touch

0x7b19,	// (0x0006c93a) touch_pane_ParamLimits

0x7b19,	// (0x0006c93a) touch_pane

0x7850,	// (0x0006c671) main_rss2_pane

0x2aeb,	// (0x0006790c) listscroll_rss2_pane

0x2af4,	// (0x00067915) rss2_navigation_pane

0x2afc,	// (0x0006791d) list_rss2_pane

0x1332,	// (0x00066153) scroll_pane_cp22

0x2b04,	// (0x00067925) rss2_navigation_pane_g1

0x2b0d,	// (0x0006792e) rss2_navigation_pane_g2

0x2b15,	// (0x00067936) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x000744cc) rss2_navigation_pane_g

0x2b1d,	// (0x0006793e) rss2_navigation_pane_t1

0xb06f,	// (0x0006fe90) rss2_list_single_pane_ParamLimits

0xb06f,	// (0x0006fe90) rss2_list_single_pane

0x2b2b,	// (0x0006794c) rss2_list_single_pane_t2

0x2b39,	// (0x0006795a) rss2_list_single_pane_t3_ParamLimits

0x2b39,	// (0x0006795a) rss2_list_single_pane_t3

0x2b56,	// (0x00067977) rss2_list_single_pane_t4

0x9616,	// (0x0006e437) smil_status_pane_g1

0x00aa,	// (0x00064ecb) main_image2_pane_ParamLimits

0x00aa,	// (0x00064ecb) main_image2_pane

0xac3b,	// (0x0006fa5c) main_camera2_pane_g9_ParamLimits

0xac3b,	// (0x0006fa5c) main_camera2_pane_g9

0xac8f,	// (0x0006fab0) main_camera2_pane_t5_ParamLimits

0xac8f,	// (0x0006fab0) main_camera2_pane_t5

0xaca1,	// (0x0006fac2) main_camera2_pane_t6_ParamLimits

0xaca1,	// (0x0006fac2) main_camera2_pane_t6

0xb0a0,	// (0x0006fec1) main_image2_pane_g1_ParamLimits

0xb0a0,	// (0x0006fec1) main_image2_pane_g1

0xa33f,	// (0x0006f160) smil2_video_pane_ParamLimits

0xa33f,	// (0x0006f160) smil2_video_pane

0x78a2,	// (0x0006c6c3) aid_zoom_text_primary_cp

0x7abe,	// (0x0006c8df) popup_preview_fixed_window

0x0b91,	// (0x000659b2) im_reading_pane_g1

0xab85,	// (0x0006f9a6) cams2_bc_adjust_pane_cp_ParamLimits

0xab85,	// (0x0006f9a6) cams2_bc_adjust_pane_cp

0xacd1,	// (0x0006faf2) cams2_bc_adjust_pane_ParamLimits

0xacd1,	// (0x0006faf2) cams2_bc_adjust_pane

0xb0ac,	// (0x0006fecd) cams2_bc_adjust_pane_g1

0xb0b4,	// (0x0006fed5) cams2_slider_pane

0xb0bd,	// (0x0006fede) cams2_slider_pane_g1

0xb0c6,	// (0x0006fee7) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x000744d3) cams2_slider_pane_g

0x7d43,	// (0x0006cb64) calc_display_pane_ParamLimits

0x7d61,	// (0x0006cb82) calc_paper_pane_ParamLimits

0x7d7d,	// (0x0006cb9e) grid_calc_pane_ParamLimits

0x9809,	// (0x0006e62a) popup_clock_digital_window_t1_ParamLimits

0x1754,	// (0x00066575) main_image_pane_t1

0x7d29,	// (0x0006cb4a) aid_size_cell_calc_ParamLimits

0x7d29,	// (0x0006cb4a) aid_size_cell_calc

0xa80c,	// (0x0006f62d) popup_blid_sat_info2_window_ParamLimits

0xa80c,	// (0x0006f62d) popup_blid_sat_info2_window

0x2ba0,	// (0x000679c1) aid_size_cell_blid

0x2ba8,	// (0x000679c9) bg_popup_window_pane_cp07

0x2bcb,	// (0x000679ec) grid_popup_blid_pane

0x2bd5,	// (0x000679f6) heading_pane_cp05_ParamLimits

0x2bd5,	// (0x000679f6) heading_pane_cp05

0x2c9f,	// (0x00067ac0) cell_popup_blid_pane_ParamLimits

0x2c9f,	// (0x00067ac0) cell_popup_blid_pane

0x2cc3,	// (0x00067ae4) cell_popup_blid_pane_g1

0x2ccb,	// (0x00067aec) cell_popup_blid_pane_t1

0xaeee,	// (0x0006fd0f) mup2_indicator_pane_ParamLimits

0xaeee,	// (0x0006fd0f) mup2_indicator_pane

0x147b,	// (0x0006629c) mup2_visualizer_osc_pane

0x2a08,	// (0x00067829) mup2_visualizer_spec_pane_ParamLimits

0x2a08,	// (0x00067829) mup2_visualizer_spec_pane

0xb0e0,	// (0x0006ff01) mup2_spec_half_pane

0xb0e9,	// (0x0006ff0a) mup2_spec_half_pane_cp

0xb0f3,	// (0x0006ff14) mup2_spec_bar_pane_ParamLimits

0xb0f3,	// (0x0006ff14) mup2_spec_bar_pane

0x2957,	// (0x00067778) mup2_spec_bar_pane_g1

0x2961,	// (0x00067782) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x00074446) mup2_spec_bar_pane_g

0xb112,	// (0x0006ff33) mup2_osc_middle_pane

0x2973,	// (0x00067794) mup2_visualizer_osc_pane_g1

0x00d8,	// (0x00064ef9) popup_number_entry_window_t1_ParamLimits

0x00eb,	// (0x00064f0c) popup_number_entry_window_t2_ParamLimits

0x00fd,	// (0x00064f1e) popup_number_entry_window_t3_ParamLimits

0x7b70,	// (0x0006c991) popup_number_entry_window_t5_ParamLimits

0x7b70,	// (0x0006c991) popup_number_entry_window_t5

0xf0e7,	// (0x00073f08) popup_number_entry_window_t_ParamLimits

0x010f,	// (0x00064f30) text_title_cp2_ParamLimits

0xa033,	// (0x0006ee54) aid_hotspot_pointer_text2_pane

0xa0cd,	// (0x0006eeee) main_viewer_pane_g9_ParamLimits

0xa0cd,	// (0x0006eeee) main_viewer_pane_g9

0x0dc0,	// (0x00065be1) cale_month_pane_t1_ParamLimits

0x0e2b,	// (0x00065c4c) bg_cale_pane_ParamLimits

0x0e43,	// (0x00065c64) list_cale_pane_ParamLimits

0x09bf,	// (0x000657e0) listscroll_cale_day_pane_t1

0x0e54,	// (0x00065c75) scroll_pane_cp09_ParamLimits

0x9df0,	// (0x0006ec11) main_mup_eq_pane_t1_ParamLimits

0x9df0,	// (0x0006ec11) main_mup_eq_pane_t1

0x9e0a,	// (0x0006ec2b) main_mup_eq_pane_t2_ParamLimits

0x9e0a,	// (0x0006ec2b) main_mup_eq_pane_t2

0x9e24,	// (0x0006ec45) main_mup_eq_pane_t3_ParamLimits

0x9e24,	// (0x0006ec45) main_mup_eq_pane_t3

0x9e3c,	// (0x0006ec5d) main_mup_eq_pane_t4_ParamLimits

0x9e3c,	// (0x0006ec5d) main_mup_eq_pane_t4

0x9e54,	// (0x0006ec75) main_mup_eq_pane_t5_ParamLimits

0x9e54,	// (0x0006ec75) main_mup_eq_pane_t5

0x9e6c,	// (0x0006ec8d) main_mup_eq_pane_t6_ParamLimits

0x9e6c,	// (0x0006ec8d) main_mup_eq_pane_t6

0x9e80,	// (0x0006eca1) main_mup_eq_pane_t7_ParamLimits

0x9e80,	// (0x0006eca1) main_mup_eq_pane_t7

0x9e94,	// (0x0006ecb5) main_mup_eq_pane_t8_ParamLimits

0x9e94,	// (0x0006ecb5) main_mup_eq_pane_t8

0x9eaa,	// (0x0006eccb) main_mup_eq_pane_t9_ParamLimits

0x9eaa,	// (0x0006eccb) main_mup_eq_pane_t9

0x9ec2,	// (0x0006ece3) main_mup_eq_pane_t10_ParamLimits

0x9ec2,	// (0x0006ece3) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x00074295) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x00074295) main_mup_eq_pane_t

0x9f7f,	// (0x0006eda0) mup_equalizer_pane_cp5_ParamLimits

0x9f95,	// (0x0006edb6) mup_equalizer_pane_cp6_ParamLimits

0x9fad,	// (0x0006edce) mup_equalizer_pane_cp7_ParamLimits

0x7850,	// (0x0006c671) main_gallery_pane

0x297c,	// (0x0006779d) smil2_volume_pane

0x2997,	// (0x000677b8) smil_status_volume_pane_g1_ParamLimits

0x2984,	// (0x000677a5) smil_status_volume_pane_g2_ParamLimits

0xa9f8,	// (0x0006f819) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x0007444b) smil_status_volume_pane_g_ParamLimits

0x2ba8,	// (0x000679c9) bg_popup_window_pane_cp07_ParamLimits

0x2bb6,	// (0x000679d7) blid_firmament_pane

0xb11b,	// (0x0006ff3c) aid_size_cell_gallery_ParamLimits

0xb11b,	// (0x0006ff3c) aid_size_cell_gallery

0xb129,	// (0x0006ff4a) grid_gallery_pane_ParamLimits

0xb129,	// (0x0006ff4a) grid_gallery_pane

0xb139,	// (0x0006ff5a) cell_gallery_pane_ParamLimits

0xb139,	// (0x0006ff5a) cell_gallery_pane

0x2cd9,	// (0x00067afa) bg_cell_gallery_focus_pane_ParamLimits

0x2cd9,	// (0x00067afa) bg_cell_gallery_focus_pane

0x2ceb,	// (0x00067b0c) cell_gallery_pane_g1_ParamLimits

0x2ceb,	// (0x00067b0c) cell_gallery_pane_g1

0xb187,	// (0x0006ffa8) cell_gallery_pane_g2_ParamLimits

0xb187,	// (0x0006ffa8) cell_gallery_pane_g2

0xb194,	// (0x0006ffb5) cell_gallery_pane_g3_ParamLimits

0xb194,	// (0x0006ffb5) cell_gallery_pane_g3

0x2cf7,	// (0x00067b18) cell_gallery_pane_g4_ParamLimits

0x2cf7,	// (0x00067b18) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x000744f9) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x000744f9) cell_gallery_pane_g

0x2d03,	// (0x00067b24) bg_cell_gallery_focus_pane_g1

0x2d0b,	// (0x00067b2c) bg_cell_gallery_focus_pane_g2

0x2d13,	// (0x00067b34) bg_cell_gallery_focus_pane_g3

0x2d1b,	// (0x00067b3c) bg_cell_gallery_focus_pane_g4

0x2d23,	// (0x00067b44) bg_cell_gallery_focus_pane_g5

0x2d2b,	// (0x00067b4c) bg_cell_gallery_focus_pane_g6

0x2d33,	// (0x00067b54) bg_cell_gallery_focus_pane_g7

0x2d3b,	// (0x00067b5c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x00074502) bg_cell_gallery_focus_pane_g

0x2d43,	// (0x00067b64) aid_firma_cardinal

0x2d57,	// (0x00067b78) blid_firmament_pane_t1

0x2d6e,	// (0x00067b8f) blid_firmament_pane_t2

0x2d85,	// (0x00067ba6) blid_firmament_pane_t3

0x2d9c,	// (0x00067bbd) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x00074513) blid_firmament_pane_t

0x2db3,	// (0x00067bd4) blid_sat_info_pane

0x2dc3,	// (0x00067be4) blid_sat_info_pane_g1

0x2dc3,	// (0x00067be4) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x0007451c) blid_sat_info_pane_g

0x2dcd,	// (0x00067bee) blid_sat_info_pane_t1

0x2ddb,	// (0x00067bfc) smil2_volume_content_pane

0x2de4,	// (0x00067c05) smil2_volume_pane_g1

0x2dec,	// (0x00067c0d) smil2_volume_content_pane_g1

0x2df5,	// (0x00067c16) smil2_volume_content_pane_g2

0x2dfe,	// (0x00067c1f) smil2_volume_content_pane_g3

0x2e07,	// (0x00067c28) smil2_volume_content_pane_g4

0x2e10,	// (0x00067c31) smil2_volume_content_pane_g5

0x2e19,	// (0x00067c3a) smil2_volume_content_pane_g6

0x2e22,	// (0x00067c43) smil2_volume_content_pane_g7

0x2e2b,	// (0x00067c4c) smil2_volume_content_pane_g8

0x2e34,	// (0x00067c55) smil2_volume_content_pane_g9

0x2e3d,	// (0x00067c5e) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x00074521) smil2_volume_content_pane_g

0x8309,	// (0x0006d12a) cale_week_day_heading_pane_t1_ParamLimits

0x8322,	// (0x0006d143) cale_week_day_heading_pane_t2_ParamLimits

0x833b,	// (0x0006d15c) cale_week_day_heading_pane_t3_ParamLimits

0x8354,	// (0x0006d175) cale_week_day_heading_pane_t4_ParamLimits

0x836d,	// (0x0006d18e) cale_week_day_heading_pane_t5_ParamLimits

0x8386,	// (0x0006d1a7) cale_week_day_heading_pane_t6_ParamLimits

0x839f,	// (0x0006d1c0) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x0007400d) cale_week_day_heading_pane_t_ParamLimits

0x09d1,	// (0x000657f2) bg_cale_side_pane_ParamLimits

0x83b8,	// (0x0006d1d9) cale_week_time_pane_t1_ParamLimits

0x83d0,	// (0x0006d1f1) cale_week_time_pane_t2_ParamLimits

0x83e8,	// (0x0006d209) cale_week_time_pane_t3_ParamLimits

0x8400,	// (0x0006d221) cale_week_time_pane_t4_ParamLimits

0x8418,	// (0x0006d239) cale_week_time_pane_t5_ParamLimits

0x8430,	// (0x0006d251) cale_week_time_pane_t6_ParamLimits

0x8448,	// (0x0006d269) cale_week_time_pane_t7_ParamLimits

0x8468,	// (0x0006d289) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x0007401c) cale_week_time_pane_t_ParamLimits

0x8488,	// (0x0006d2a9) cell_cale_week_pane_g2_ParamLimits

0x09d1,	// (0x000657f2) bg_cale_side_pane_cp01_ParamLimits

0x9487,	// (0x0006e2a8) cale_month_week_pane_t1_ParamLimits

0x949e,	// (0x0006e2bf) cale_month_week_pane_t2_ParamLimits

0x94b5,	// (0x0006e2d6) cale_month_week_pane_t3_ParamLimits

0x94cc,	// (0x0006e2ed) cale_month_week_pane_t4_ParamLimits

0x94e3,	// (0x0006e304) cale_month_week_pane_t5_ParamLimits

0x94fe,	// (0x0006e31f) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x000740f5) cale_month_week_pane_t_ParamLimits

0x95e3,	// (0x0006e404) cell_cale_month_pane_g1_ParamLimits

0x7850,	// (0x0006c671) main_cale_event_viewer_pane

0x7850,	// (0x0006c671) listscroll_cale_event_viewer_pane

0x2e46,	// (0x00067c67) list_cale_ev_pane

0x2e4e,	// (0x00067c6f) scroll_pane_cp023

0x2e5a,	// (0x00067c7b) field_cale_ev_pane_ParamLimits

0x2e5a,	// (0x00067c7b) field_cale_ev_pane

0x2e78,	// (0x00067c99) field_cale_ev_content_pane_ParamLimits

0x2e78,	// (0x00067c99) field_cale_ev_content_pane

0x2e84,	// (0x00067ca5) field_cale_ev_pane_g1_ParamLimits

0x2e84,	// (0x00067ca5) field_cale_ev_pane_g1

0x2e90,	// (0x00067cb1) field_cale_ev_pane_g2_ParamLimits

0x2e90,	// (0x00067cb1) field_cale_ev_pane_g2

0x2ea8,	// (0x00067cc9) field_cale_ev_pane_g3_ParamLimits

0x2ea8,	// (0x00067cc9) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x00074536) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x00074536) field_cale_ev_pane_g

0x2ec0,	// (0x00067ce1) field_cale_ev_pane_t1_ParamLimits

0x2ec0,	// (0x00067ce1) field_cale_ev_pane_t1

0x2ed7,	// (0x00067cf8) field_cale_ev_content_pane_t1_ParamLimits

0x2ed7,	// (0x00067cf8) field_cale_ev_content_pane_t1

0x1604,	// (0x00066425) bg_button_pane_cp01

0x0825,	// (0x00065646) listscroll_cale_week_pane_ParamLimits

0x80e5,	// (0x0006cf06) popup_toolbar_window_cp01

0x09bf,	// (0x000657e0) listscroll_cale_week_pane_t1_ParamLimits

0x0825,	// (0x00065646) listscroll_cale_day_pane_ParamLimits

0x80e5,	// (0x0006cf06) popup_toolbar_window_cp02

0x09bf,	// (0x000657e0) listscroll_cale_day_pane_t1_ParamLimits

0x0825,	// (0x00065646) main_cale_month_pane_ParamLimits

0xa8dc,	// (0x0006f6fd) popup_toolbar_window_cp03_ParamLimits

0xa8dc,	// (0x0006f6fd) popup_toolbar_window_cp03

0xa255,	// (0x0006f076) main_image_pane_g2_ParamLimits

0xa255,	// (0x0006f076) main_image_pane_g2

0xa261,	// (0x0006f082) main_image_pane_g3_ParamLimits

0xa261,	// (0x0006f082) main_image_pane_g3

0x0002,

0xf506,	// (0x00074327) main_image_pane_g_ParamLimits

0xf506,	// (0x00074327) main_image_pane_g

0x1754,	// (0x00066575) main_image_pane_t1_ParamLimits

0xa26d,	// (0x0006f08e) main_image_pane_t2_ParamLimits

0xa26d,	// (0x0006f08e) main_image_pane_t2

0xa27f,	// (0x0006f0a0) main_image_pane_t3_ParamLimits

0xa27f,	// (0x0006f0a0) main_image_pane_t3

0xa291,	// (0x0006f0b2) main_image_pane_t4_ParamLimits

0xa291,	// (0x0006f0b2) main_image_pane_t4

0x0003,

0xf50d,	// (0x0007432e) main_image_pane_t_ParamLimits

0xf50d,	// (0x0007432e) main_image_pane_t

0xa2a3,	// (0x0006f0c4) popup_image_details_window_cp01

0xa2ad,	// (0x0006f0ce) popup_toobar_trans_pane_cp01_ParamLimits

0xa2ad,	// (0x0006f0ce) popup_toobar_trans_pane_cp01

0xa859,	// (0x0006f67a) popup_image_details_window_ParamLimits

0xa859,	// (0x0006f67a) popup_image_details_window

0x28dd,	// (0x000676fe) popup_image_focus_window

0xab77,	// (0x0006f998) camera2_autofocus_pane_ParamLimits

0xab77,	// (0x0006f998) camera2_autofocus_pane

0x7850,	// (0x0006c671) bg_popup_sub_pane_cp06

0x2ef5,	// (0x00067d16) popup_image_focus_window_g1

0x2efd,	// (0x00067d1e) popup_image_focus_window_g2

0x2f05,	// (0x00067d26) popup_image_focus_window_g3

0x2f0d,	// (0x00067d2e) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x0007453d) popup_image_focus_window_g

0x2f15,	// (0x00067d36) popup_image_focus_window_t1

0x2f23,	// (0x00067d44) popup_image_focus_window_t2

0x2f33,	// (0x00067d54) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x00074546) popup_image_focus_window_t

0x2f41,	// (0x00067d62) camera2_autofocus_pane_g1

0x00aa,	// (0x00064ecb) bg_tb_trans_pane_cp01

0x2f4f,	// (0x00067d70) popup_image_details_window_g1

0x2f62,	// (0x00067d83) popup_image_details_window_g2

0x0002,

0xf737,	// (0x00074558) popup_image_details_window_g

0x2f8b,	// (0x00067dac) popup_image_details_window_t1

0x2f9d,	// (0x00067dbe) popup_image_details_window_t2

0x2fb6,	// (0x00067dd7) popup_image_details_window_t3

0x2fca,	// (0x00067deb) popup_image_details_window_t4

0x2fe5,	// (0x00067e06) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x0007455f) popup_image_details_window_t

0x07ed,	// (0x0006560e) bg_calc_paper_pane_ParamLimits

0x7850,	// (0x0006c671) grid_highlight_pane_cp013

0x7e7a,	// (0x0006cc9b) list_calc_pane_ParamLimits

0x7e8c,	// (0x0006ccad) scroll_pane_cp024

0x0825,	// (0x00065646) bg_calc_display_pane_ParamLimits

0x7e94,	// (0x0006ccb5) calc_display_pane_t1_ParamLimits

0x7ea9,	// (0x0006ccca) calc_display_pane_t2_ParamLimits

0x7ebe,	// (0x0006ccdf) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x00073f8f) calc_display_pane_t_ParamLimits

0x7f9a,	// (0x0006cdbb) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x00073fac) cell_calc_pane_g

0x7fa3,	// (0x0006cdc4) cell_calc_pane_t1

0x08a8,	// (0x000656c9) grid_highlight_pane_cp02_ParamLimits

0x08be,	// (0x000656df) toolbar_button_pane_cp01_ParamLimits

0x08be,	// (0x000656df) toolbar_button_pane_cp01

0x1799,	// (0x000665ba) temp_image_control_pane_ParamLimits

0x1799,	// (0x000665ba) temp_image_control_pane

0x00aa,	// (0x00064ecb) main_mp3_pane

0x2fff,	// (0x00067e20) temp_image_control_pane_g1_ParamLimits

0x2fff,	// (0x00067e20) temp_image_control_pane_g1

0x300d,	// (0x00067e2e) temp_image_control_pane_g2_ParamLimits

0x300d,	// (0x00067e2e) temp_image_control_pane_g2

0x301f,	// (0x00067e40) temp_image_control_pane_g3_ParamLimits

0x301f,	// (0x00067e40) temp_image_control_pane_g3

0xb1d1,	// (0x0006fff2) temp_image_control_pane_g4_ParamLimits

0xb1d1,	// (0x0006fff2) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x0007456a) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x0007456a) temp_image_control_pane_g

0x2fff,	// (0x00067e20) main_mp3_pane_g1

0xb1e2,	// (0x00070003) main_mp3_pane_g2

0x0007,

0xf752,	// (0x00074573) main_mp3_pane_g

0x3062,	// (0x00067e83) main_mp3_pane_t1

0x0aa0,	// (0x000658c1) main_camera_pane_g8_ParamLimits

0x0aa0,	// (0x000658c1) main_camera_pane_g8

0x871c,	// (0x0006d53d) main_video_pane_g7_ParamLimits

0x871c,	// (0x0006d53d) main_video_pane_g7

0xacbf,	// (0x0006fae0) main_camera2_pane_t7_ParamLimits

0xacbf,	// (0x0006fae0) main_camera2_pane_t7

0x0be8,	// (0x00065a09) scroll_pane_cp025_ParamLimits

0x0be8,	// (0x00065a09) scroll_pane_cp025

0x0bfc,	// (0x00065a1d) scroll_pane_cp026_ParamLimits

0x0bfc,	// (0x00065a1d) scroll_pane_cp026

0x0c0b,	// (0x00065a2c) wml_content_pane_ParamLimits

0x7850,	// (0x0006c671) main_touch_calib_pane

0xb286,	// (0x000700a7) main_touch_calib_pane_g1

0xb292,	// (0x000700b3) main_touch_calib_pane_g2

0xb29e,	// (0x000700bf) main_touch_calib_pane_g3

0xb2aa,	// (0x000700cb) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x00074591) main_touch_calib_pane_g

0xb2b6,	// (0x000700d7) main_touch_calib_pane_t1

0xb2cd,	// (0x000700ee) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x0007459a) main_touch_calib_pane_t

0x13bc,	// (0x000661dd) mup_progress_pane_cp02

0x13db,	// (0x000661fc) navi_pane_g1

0x143d,	// (0x0006625e) navi_pane_mp_t3

0x00aa,	// (0x00064ecb) main_mp3_pane_ParamLimits

0xa91a,	// (0x0006f73b) navi_pane_ParamLimits

0x2fff,	// (0x00067e20) main_mp3_pane_g1_ParamLimits

0xb1e2,	// (0x00070003) main_mp3_pane_g2_ParamLimits

0xb1ee,	// (0x0007000f) main_mp3_pane_g3_ParamLimits

0xb1ee,	// (0x0007000f) main_mp3_pane_g3

0xb1fa,	// (0x0007001b) main_mp3_pane_g4_ParamLimits

0xb1fa,	// (0x0007001b) main_mp3_pane_g4

0x302f,	// (0x00067e50) main_mp3_pane_g5_ParamLimits

0x302f,	// (0x00067e50) main_mp3_pane_g5

0x303d,	// (0x00067e5e) main_mp3_pane_g6_ParamLimits

0x303d,	// (0x00067e5e) main_mp3_pane_g6

0x304a,	// (0x00067e6b) main_mp3_pane_g7_ParamLimits

0x304a,	// (0x00067e6b) main_mp3_pane_g7

0x3056,	// (0x00067e77) main_mp3_pane_g8_ParamLimits

0x3056,	// (0x00067e77) main_mp3_pane_g8

0xf752,	// (0x00074573) main_mp3_pane_g_ParamLimits

0xb206,	// (0x00070027) main_mp3_pane_t2

0xb216,	// (0x00070037) main_mp3_pane_t3

0x3070,	// (0x00067e91) main_mp3_pane_t4

0x307e,	// (0x00067e9f) main_mp3_pane_t5

0x0005,

0xf763,	// (0x00074584) main_mp3_pane_t

0x308c,	// (0x00067ead) mup_progress_pane_cp01

0x78a2,	// (0x0006c6c3) aid_zoom_text_secondary2

0x2e46,	// (0x00067c67) list_cale_ev2_pane

0x2e4e,	// (0x00067c6f) scroll_pane_cp023_ParamLimits

0xb322,	// (0x00070143) field_cale_ev2_pane_ParamLimits

0xb322,	// (0x00070143) field_cale_ev2_pane

0xb34b,	// (0x0007016c) field_cale_ev2_pane_g1_ParamLimits

0xb34b,	// (0x0007016c) field_cale_ev2_pane_g1

0xb357,	// (0x00070178) field_cale_ev2_pane_g2_ParamLimits

0xb357,	// (0x00070178) field_cale_ev2_pane_g2

0xb36f,	// (0x00070190) field_cale_ev2_pane_g3_ParamLimits

0xb36f,	// (0x00070190) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x000745a5) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x000745a5) field_cale_ev2_pane_g

0x69e9,	// (0x0006b80a) field_cale_ev2_pane_t1_ParamLimits

0x69e9,	// (0x0006b80a) field_cale_ev2_pane_t1

0x6a00,	// (0x0006b821) field_cale_ev2_pane_t2_ParamLimits

0x6a00,	// (0x0006b821) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x000745ae) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x000745ae) field_cale_ev2_pane_t

0xa135,	// (0x0006ef56) main_postcard_pane_g5_ParamLimits

0xa135,	// (0x0006ef56) main_postcard_pane_g5

0xa143,	// (0x0006ef64) main_postcard_pane_g6_ParamLimits

0xa143,	// (0x0006ef64) main_postcard_pane_g6

0x8566,	// (0x0006d387) camera2_autofocus_pane_cp_ParamLimits

0x8566,	// (0x0006d387) camera2_autofocus_pane_cp

0x00aa,	// (0x00064ecb) main_mup3_pane

0xb3b3,	// (0x000701d4) main_mup3_pane_g1_ParamLimits

0xb3b3,	// (0x000701d4) main_mup3_pane_g1

0xb3d4,	// (0x000701f5) main_mup3_pane_g2_ParamLimits

0xb3d4,	// (0x000701f5) main_mup3_pane_g2

0xb44c,	// (0x0007026d) main_mup3_pane_g3_ParamLimits

0xb44c,	// (0x0007026d) main_mup3_pane_g3

0xb48f,	// (0x000702b0) main_mup3_pane_g4_ParamLimits

0xb48f,	// (0x000702b0) main_mup3_pane_g4

0xb4d2,	// (0x000702f3) main_mup3_pane_g5_ParamLimits

0xb4d2,	// (0x000702f3) main_mup3_pane_g5

0xb515,	// (0x00070336) main_mup3_pane_g6_ParamLimits

0xb515,	// (0x00070336) main_mup3_pane_g6

0x3094,	// (0x00067eb5) main_mup3_pane_g7_ParamLimits

0x3094,	// (0x00067eb5) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x000745be) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x000745be) main_mup3_pane_g

0xb58b,	// (0x000703ac) main_mup3_pane_t1_ParamLimits

0xb58b,	// (0x000703ac) main_mup3_pane_t1

0xb5fa,	// (0x0007041b) main_mup3_pane_t2_ParamLimits

0xb5fa,	// (0x0007041b) main_mup3_pane_t2

0xb6c3,	// (0x000704e4) main_mup3_pane_t4_ParamLimits

0xb6c3,	// (0x000704e4) main_mup3_pane_t4

0xb711,	// (0x00070532) main_mup3_pane_t5_ParamLimits

0xb711,	// (0x00070532) main_mup3_pane_t5

0xb7c1,	// (0x000705e2) main_mup3_pane_t6_ParamLimits

0xb7c1,	// (0x000705e2) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x000745cf) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x000745cf) main_mup3_pane_t

0xb86d,	// (0x0007068e) mup3_progress_pane_ParamLimits

0xb86d,	// (0x0007068e) mup3_progress_pane

0xb8eb,	// (0x0007070c) popup_mup3_control_window_ParamLimits

0xb8eb,	// (0x0007070c) popup_mup3_control_window

0x30a2,	// (0x00067ec3) popup_mup3_text_window

0xb904,	// (0x00070725) mup3_progress_pane_t1

0xb923,	// (0x00070744) mup3_progress_pane_t2

0x30aa,	// (0x00067ecb) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x000745dc) mup3_progress_pane_t

0x30c7,	// (0x00067ee8) mup_progress_pane_cp03

0x7850,	// (0x0006c671) bg_tb_trans_pane_cp04

0xb942,	// (0x00070763) mup3_volume_pane

0xb94a,	// (0x0007076b) popup_mup3_control_window_g1

0xb953,	// (0x00070774) mup3_volume_pane_g1

0xb95c,	// (0x0007077d) mup3_volume_pane_g2

0xb965,	// (0x00070786) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x000745e3) mup3_volume_pane_g

0x7850,	// (0x0006c671) bg_tb_trans_pane_cp03

0x30d7,	// (0x00067ef8) popup_mup3_text_window_g1

0x30df,	// (0x00067f00) popup_mup3_text_window_t1

0x087f,	// (0x000656a0) list_calc_item_pane_g1_ParamLimits

0x2ad2,	// (0x000678f3) mup_volume_pane_cp_g1

0xb2e4,	// (0x00070105) main_touch_calib_pane_t3

0xb2f8,	// (0x00070119) main_touch_calib_pane_t4

0xb30c,	// (0x0007012d) main_touch_calib_pane_t5

0x785a,	// (0x0006c67b) aid_cell_size_toolbar2

0x7862,	// (0x0006c683) aid_popup3_width_pane

0x66dc,	// (0x0006b4fd) aid_zoom_text_msg_primary

0x853d,	// (0x0006d35e) vorec_t7

0x0843,	// (0x00065664) bg_calc_paper_pane_g1_ParamLimits

0x085b,	// (0x0006567c) bg_calc_paper_pane_g2_ParamLimits

0x084f,	// (0x00065670) bg_calc_paper_pane_g3_ParamLimits

0x0873,	// (0x00065694) bg_calc_paper_pane_g4_ParamLimits

0x0867,	// (0x00065688) bg_calc_paper_pane_g5_ParamLimits

0x7efd,	// (0x0006cd1e) bg_calc_paper_pane_g6_ParamLimits

0x7f0e,	// (0x0006cd2f) bg_calc_paper_pane_g7_ParamLimits

0x7f1f,	// (0x0006cd40) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x00073f96) bg_calc_paper_pane_g_ParamLimits

0x7f30,	// (0x0006cd51) calc_bg_paper_pane_g9_ParamLimits

0x864d,	// (0x0006d46e) image_qvga_pane_ParamLimits

0x864d,	// (0x0006d46e) image_qvga_pane

0x0726,	// (0x00065547) bg_popup_sub_pane_cp04_ParamLimits

0x16d0,	// (0x000664f1) popup_mup_playback_window_g1_ParamLimits

0x16dc,	// (0x000664fd) popup_mup_playback_window_t1_ParamLimits

0x16f1,	// (0x00066512) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x00074322) popup_mup_playback_window_t_ParamLimits

0xadee,	// (0x0006fc0f) main_mup2_pane_g3_ParamLimits

0xadee,	// (0x0006fc0f) main_mup2_pane_g3

0x8905,	// (0x0006d726) popup_toolbar_window_cp04

0x1ad3,	// (0x000668f4) popup_call2_audio_second_window_g3_ParamLimits

0x1ad3,	// (0x000668f4) popup_call2_audio_second_window_g3

0x1edd,	// (0x00066cfe) popup_call2_audio_first_window_g4_ParamLimits

0x1edd,	// (0x00066cfe) popup_call2_audio_first_window_g4

0x255c,	// (0x0006737d) popup_call2_audio_in_window_g4_ParamLimits

0x255c,	// (0x0006737d) popup_call2_audio_in_window_g4

0xa248,	// (0x0006f069) aid_area_sk_bg_cut_ParamLimits

0xa248,	// (0x0006f069) aid_area_sk_bg_cut

0x1706,	// (0x00066527) aid_area_sk_bg_cut_2_ParamLimits

0x1706,	// (0x00066527) aid_area_sk_bg_cut_2

0xb177,	// (0x0006ff98) aid_placing_details_win

0xb17f,	// (0x0006ffa0) aid_placing_details_win_2

0x2f41,	// (0x00067d62) camera2_autofocus_pane_g1_ParamLimits

0x7aaf,	// (0x0006c8d0) popup_fixed_preview_cale_window_ParamLimits

0x7aaf,	// (0x0006c8d0) popup_fixed_preview_cale_window

0x14a7,	// (0x000662c8) navi_slider_pane_g3

0x149e,	// (0x000662bf) navi_slider_pane_g4

0x1495,	// (0x000662b6) navi_slider_pane_g5

0x14a7,	// (0x000662c8) navi_slider_pane_g6

0x9b84,	// (0x0006e9a5) navi_slider_pane_g7

0x15d1,	// (0x000663f2) mup_scale_pane_g3

0x15da,	// (0x000663fb) mup_scale_pane_g4

0x15e3,	// (0x00066404) mup_scale_pane_g5

0x9fc5,	// (0x0006ede6) mup_scale_pane_g6

0x9fce,	// (0x0006edef) mup_scale_pane_g7

0x14a7,	// (0x000662c8) cams2_slider_pane_g3

0x2b87,	// (0x000679a8) cams2_slider_pane_g4

0xb0cf,	// (0x0006fef0) cams2_slider_pane_g5

0x14a7,	// (0x000662c8) cams2_slider_pane_g6

0xb0d7,	// (0x0006fef8) cams2_slider_pane_g7

0x2dc3,	// (0x00067be4) camera2_autofocus_pane_cp_g1

0x30ed,	// (0x00067f0e) bg_popup_preview_window_pane_cp02_ParamLimits

0x30ed,	// (0x00067f0e) bg_popup_preview_window_pane_cp02

0x30f9,	// (0x00067f1a) list_fp_cale_pane_ParamLimits

0x30f9,	// (0x00067f1a) list_fp_cale_pane

0x3105,	// (0x00067f26) popup_fixed_preview_cale_window_t1_ParamLimits

0x3105,	// (0x00067f26) popup_fixed_preview_cale_window_t1

0xb96e,	// (0x0007078f) popup_fixed_preview_cale_window_t2_ParamLimits

0xb96e,	// (0x0007078f) popup_fixed_preview_cale_window_t2

0xb983,	// (0x000707a4) popup_fixed_preview_cale_window_t3_ParamLimits

0xb983,	// (0x000707a4) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x000745ea) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x000745ea) popup_fixed_preview_cale_window_t

0xb998,	// (0x000707b9) list_single_fp_cale_pane_ParamLimits

0xb998,	// (0x000707b9) list_single_fp_cale_pane

0x3123,	// (0x00067f44) list_single_fp_cale_pane_g1_ParamLimits

0x3123,	// (0x00067f44) list_single_fp_cale_pane_g1

0x312f,	// (0x00067f50) list_single_fp_cale_pane_g2_ParamLimits

0x312f,	// (0x00067f50) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x000745f1) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x000745f1) list_single_fp_cale_pane_g

0x3148,	// (0x00067f69) list_single_fp_cale_pane_t1_ParamLimits

0x3148,	// (0x00067f69) list_single_fp_cale_pane_t1

0x315a,	// (0x00067f7b) list_single_fp_cale_pane_t2_ParamLimits

0x315a,	// (0x00067f7b) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x000745f8) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x000745f8) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7850,	// (0x0006c671) main_dialer_pane

0xb9aa,	// (0x000707cb) aid_cell_size_keypad

0xb9b4,	// (0x000707d5) dialer_ne_pane

0xb9be,	// (0x000707df) grid_dialer_command_1_pane

0xb9c6,	// (0x000707e7) grid_dialer_command_2_pane

0xb9ce,	// (0x000707ef) grid_dialer_keypad_pane

0xb9e0,	// (0x00070801) bg_popup_call_pane_cp06_ParamLimits

0xb9e0,	// (0x00070801) bg_popup_call_pane_cp06

0xb9ec,	// (0x0007080d) dialer_ne_clear_pane_ParamLimits

0xb9ec,	// (0x0007080d) dialer_ne_clear_pane

0x318d,	// (0x00067fae) dialer_ne_pane_g1

0x3195,	// (0x00067fb6) dialer_ne_pane_t1_ParamLimits

0x3195,	// (0x00067fb6) dialer_ne_pane_t1

0xb9f8,	// (0x00070819) dialer_ne_pane_t2_ParamLimits

0xb9f8,	// (0x00070819) dialer_ne_pane_t2

0xba15,	// (0x00070836) dialer_ne_pane_t3_ParamLimits

0xba15,	// (0x00070836) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x000745fd) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x000745fd) dialer_ne_pane_t

0xba39,	// (0x0007085a) dialer_ne_pane_t3_copy1_ParamLimits

0xba39,	// (0x0007085a) dialer_ne_pane_t3_copy1

0xba5d,	// (0x0007087e) cell_dialer_keypad_pane_ParamLimits

0xba5d,	// (0x0007087e) cell_dialer_keypad_pane

0xba74,	// (0x00070895) cell_dialer_command_1_pane_ParamLimits

0xba74,	// (0x00070895) cell_dialer_command_1_pane

0xba8a,	// (0x000708ab) cell_dialer_command_2_pane_ParamLimits

0xba8a,	// (0x000708ab) cell_dialer_command_2_pane

0x31a7,	// (0x00067fc8) bg_button_pane_cp02_ParamLimits

0x31a7,	// (0x00067fc8) bg_button_pane_cp02

0xba99,	// (0x000708ba) cell_dialer_keypad_pane_g1_ParamLimits

0xba99,	// (0x000708ba) cell_dialer_keypad_pane_g1

0x31a7,	// (0x00067fc8) bg_button_pane_cp03_ParamLimits

0x31a7,	// (0x00067fc8) bg_button_pane_cp03

0xbaae,	// (0x000708cf) cell_dialer_command_1_pane_g1_ParamLimits

0xbaae,	// (0x000708cf) cell_dialer_command_1_pane_g1

0x31b3,	// (0x00067fd4) bg_button_pane_cp04

0xbac2,	// (0x000708e3) cell_dialer_command_2_pane_g1

0x147b,	// (0x0006629c) bg_button_pane_cp06

0x31bb,	// (0x00067fdc) dialer_ne_clear_pane_g1

0x9ac7,	// (0x0006e8e8) navi_pane_g2

0x9af5,	// (0x0006e916) navi_pane_g3

0x0002,

0xf404,	// (0x00074225) navi_pane_g

0x9b20,	// (0x0006e941) navi_pane_mv_g2

0x9b47,	// (0x0006e968) navi_pane_mv_g5

0x9b4f,	// (0x0006e970) navi_pane_mv_t1

0x0825,	// (0x00065646) main_clock2_pane

0xbaf3,	// (0x00070914) main_clock2_list_pane_ParamLimits

0xbaf3,	// (0x00070914) main_clock2_list_pane

0xbb1b,	// (0x0007093c) main_clock2_pane_t1_ParamLimits

0xbb1b,	// (0x0007093c) main_clock2_pane_t1

0xbb3d,	// (0x0007095e) main_clock2_pane_t2_ParamLimits

0xbb3d,	// (0x0007095e) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x00074604) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x00074604) main_clock2_pane_t

0xbb98,	// (0x000709b9) popup_clock_analogue_window_cp03_ParamLimits

0xbb98,	// (0x000709b9) popup_clock_analogue_window_cp03

0xbbb6,	// (0x000709d7) popup_clock_digital_window_cp02_ParamLimits

0xbbb6,	// (0x000709d7) popup_clock_digital_window_cp02

0xbc23,	// (0x00070a44) main_clock2_list_single_pane_ParamLimits

0xbc23,	// (0x00070a44) main_clock2_list_single_pane

0x147b,	// (0x0006629c) list_highlight_pane_cp05

0x31c3,	// (0x00067fe4) main_clock2_list_single_pane_t1

0x8905,	// (0x0006d726) popup_toolbar_window_cp04_ParamLimits

0xb1a1,	// (0x0006ffc2) camera2_autofocus_pane_g2_ParamLimits

0xb1a1,	// (0x0006ffc2) camera2_autofocus_pane_g2

0xb1ad,	// (0x0006ffce) camera2_autofocus_pane_g3_ParamLimits

0xb1ad,	// (0x0006ffce) camera2_autofocus_pane_g3

0xb1b9,	// (0x0006ffda) camera2_autofocus_pane_g4_ParamLimits

0xb1b9,	// (0x0006ffda) camera2_autofocus_pane_g4

0xb1c5,	// (0x0006ffe6) camera2_autofocus_pane_g5_ParamLimits

0xb1c5,	// (0x0006ffe6) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x0007454d) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x0007454d) camera2_autofocus_pane_g

0xb393,	// (0x000701b4) camera2_autofocus_pane_cp_g2

0xb39b,	// (0x000701bc) camera2_autofocus_pane_cp_g3

0xb3a3,	// (0x000701c4) camera2_autofocus_pane_cp_g4

0xb3ab,	// (0x000701cc) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x000745b3) camera2_autofocus_pane_cp_g

0xb9d8,	// (0x000707f9) popup_dialer_spcha_window

0x7850,	// (0x0006c671) bg_popup_sub_pane_cp07

0x31d1,	// (0x00067ff2) list_spcha_pane

0x31d9,	// (0x00067ffa) list_single_spcha_pane_ParamLimits

0x31d9,	// (0x00067ffa) list_single_spcha_pane

0x7850,	// (0x0006c671) list_highlight_pane_cp06

0x31ea,	// (0x0006800b) list_single_spcha_pane_t1

0x2306,	// (0x00067127) popup_call2_audio_out_window_g4_ParamLimits

0x2306,	// (0x00067127) popup_call2_audio_out_window_g4

0x7850,	// (0x0006c671) main_imed2_pane

0x28e5,	// (0x00067706) popup_imed_adjust2_window

0xa867,	// (0x0006f688) popup_imed_trans_window_ParamLimits

0xa867,	// (0x0006f688) popup_imed_trans_window

0x2c01,	// (0x00067a22) popup_blid_sat_info2_window_t1

0x2c0f,	// (0x00067a30) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x000744e2) popup_blid_sat_info2_window_t

0xbccd,	// (0x00070aee) aid_size_cell_colour_35

0xbce7,	// (0x00070b08) aid_size_cell_colour_112

0xbcfe,	// (0x00070b1f) aid_size_cell_effect

0x00aa,	// (0x00064ecb) bg_tb_trans_pane_cp02

0x0ff2,	// (0x00065e13) heading_imed_pane

0xbd18,	// (0x00070b39) listscroll_imed_pane

0x31f8,	// (0x00068019) heading_imed_pane_g1

0x3200,	// (0x00068021) heading_imed_pane_t1

0x320e,	// (0x0006802f) grid_imed_colour_35_pane_ParamLimits

0x320e,	// (0x0006802f) grid_imed_colour_35_pane

0xbd24,	// (0x00070b45) grid_imed_effect_pane

0x3225,	// (0x00068046) list_imed_aspect_pane

0xbd34,	// (0x00070b55) scroll_pane_cp027_ParamLimits

0xbd34,	// (0x00070b55) scroll_pane_cp027

0xbd40,	// (0x00070b61) cell_imed_effect_pane_ParamLimits

0xbd40,	// (0x00070b61) cell_imed_effect_pane

0x322d,	// (0x0006804e) cell_imed_colour_pane_ParamLimits

0x322d,	// (0x0006804e) cell_imed_colour_pane

0x326f,	// (0x00068090) cell_imed_colour_pane_g1_ParamLimits

0x326f,	// (0x00068090) cell_imed_colour_pane_g1

0x3280,	// (0x000680a1) hgihlgiht_grid_pane_cp016_ParamLimits

0x3280,	// (0x000680a1) hgihlgiht_grid_pane_cp016

0xbd58,	// (0x00070b79) cell_imed_effect_pane_g1

0xbd60,	// (0x00070b81) grid_highlight_pane_cp017

0x3291,	// (0x000680b2) list_imed_single_pane_ParamLimits

0x3291,	// (0x000680b2) list_imed_single_pane

0x7850,	// (0x0006c671) list_highlight_pane_cp07

0x32a6,	// (0x000680c7) list_imed_aspect_pane_comp1_t1

0x28bd,	// (0x000676de) bg_tb_trans_pane_cp05

0x32c8,	// (0x000680e9) popup_imed_adjust2_window_g1

0x32ef,	// (0x00068110) popup_imed_adjust2_window_t1

0x3307,	// (0x00068128) slider_imed_adjust_pane

0x331b,	// (0x0006813c) slider_imed_adjust_pane_g1

0x332b,	// (0x0006814c) slider_imed_adjust_pane_g2

0x333b,	// (0x0006815c) slider_imed_adjust_pane_g3

0x334c,	// (0x0006816d) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x00074621) slider_imed_adjust_pane_g

0xbd69,	// (0x00070b8a) aid_size_cell_clipart2

0xbd75,	// (0x00070b96) grid_imed_clipart_pane

0x335d,	// (0x0006817e) scroll_pane_cp031

0xbd7f,	// (0x00070ba0) cell_imed_clipart_pane_ParamLimits

0xbd7f,	// (0x00070ba0) cell_imed_clipart_pane

0xbda1,	// (0x00070bc2) cell_imed_clipart_pane_g1

0x7850,	// (0x0006c671) grid_highlight_pane_cp014

0xbaff,	// (0x00070920) main_clock2_pane_g1_ParamLimits

0xbaff,	// (0x00070920) main_clock2_pane_g1

0xbbce,	// (0x000709ef) aid_call2_pane_cp10

0xbbe0,	// (0x00070a01) aid_call_pane_cp10

0x13b0,	// (0x000661d1) popup_clock_analogue_window_cp10_g1

0x13b0,	// (0x000661d1) popup_clock_analogue_window_cp10_g2

0xbbf2,	// (0x00070a13) popup_clock_analogue_window_cp10_g3

0xbbf2,	// (0x00070a13) popup_clock_analogue_window_cp10_g4

0x13b0,	// (0x000661d1) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x0007460f) popup_clock_analogue_window_cp10_g

0xbc04,	// (0x00070a25) popup_clock_analogue_window_cp10_t1

0xbc35,	// (0x00070a56) clock_digital_number_pane_cp10_ParamLimits

0xbc35,	// (0x00070a56) clock_digital_number_pane_cp10

0xbc4d,	// (0x00070a6e) clock_digital_number_pane_cp11_ParamLimits

0xbc4d,	// (0x00070a6e) clock_digital_number_pane_cp11

0xbc65,	// (0x00070a86) clock_digital_number_pane_cp12_ParamLimits

0xbc65,	// (0x00070a86) clock_digital_number_pane_cp12

0xbc7d,	// (0x00070a9e) clock_digital_number_pane_cp13_ParamLimits

0xbc7d,	// (0x00070a9e) clock_digital_number_pane_cp13

0xbc95,	// (0x00070ab6) clock_digital_separator_pane_cp10_ParamLimits

0xbc95,	// (0x00070ab6) clock_digital_separator_pane_cp10

0xbcad,	// (0x00070ace) popup_clock_digital_window_cp02_t1_ParamLimits

0xbcad,	// (0x00070ace) popup_clock_digital_window_cp02_t1

0x071e,	// (0x0006553f) clock_digital_number_pane_cp10_g1

0x071e,	// (0x0006553f) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x0007462a) clock_digital_number_pane_cp10_g

0x071e,	// (0x0006553f) clock_digital_separator_pane_cp10_g1

0x071e,	// (0x0006553f) clock_digital_separator_pane_g2_cp10

0x144b,	// (0x0006626c) navi_pane_vded_g4

0x1454,	// (0x00066275) navi_pane_vded_g5

0x145d,	// (0x0006627e) navi_pane_vded_t1

0x7850,	// (0x0006c671) main_vded_pane

0xbdaa,	// (0x00070bcb) main_vded_pane_g1

0xbdb6,	// (0x00070bd7) main_vded_pane_g2

0xbdc0,	// (0x00070be1) main_vded_pane_g3

0x0002,

0xf80e,	// (0x0007462f) main_vded_pane_g

0xbdca,	// (0x00070beb) main_vded_pane_t1

0xbdd8,	// (0x00070bf9) main_vded_pane_t2

0x0001,

0xf815,	// (0x00074636) main_vded_pane_t

0xbde6,	// (0x00070c07) vded_slider_pane

0xbdf0,	// (0x00070c11) vded_video_pane

0x3365,	// (0x00068186) vded_video_pane_g1

0xbdfa,	// (0x00070c1b) vded_video_pane_g2

0x2dc3,	// (0x00067be4) vded_video_pane_g3

0x0002,

0xf81a,	// (0x0007463b) vded_video_pane_g

0x336f,	// (0x00068190) vded_slider_pane_g1

0x2ad2,	// (0x000678f3) vded_slider_pane_g2

0x3378,	// (0x00068199) vded_slider_pane_g3

0x3381,	// (0x000681a2) vded_slider_pane_g4

0x338a,	// (0x000681ab) vded_slider_pane_g5

0x0004,

0xf821,	// (0x00074642) vded_slider_pane_g

0xb8dd,	// (0x000706fe) mup3_rocker_pane_ParamLimits

0xb8dd,	// (0x000706fe) mup3_rocker_pane

0xbe03,	// (0x00070c24) mup3_control_keys_pane_g1

0xbe0b,	// (0x00070c2c) mup3_control_keys_pane_g2

0xbe13,	// (0x00070c34) mup3_control_keys_pane_g3

0xbe1b,	// (0x00070c3c) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x0007464d) mup3_control_keys_pane_g

0x7ad7,	// (0x0006c8f8) popup_toolbar2_fixed_window_cp01_ParamLimits

0x7ad7,	// (0x0006c8f8) popup_toolbar2_fixed_window_cp01

0xb8f7,	// (0x00070718) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb8f7,	// (0x00070718) popup_toolbar2_fixed_window_cp02

0x1c45,	// (0x00066a66) popup_call2_audio_second_window_t4_ParamLimits

0x1c45,	// (0x00066a66) popup_call2_audio_second_window_t4

0x2173,	// (0x00066f94) popup_call2_audio_first_window_t6_ParamLimits

0x2173,	// (0x00066f94) popup_call2_audio_first_window_t6

0x2409,	// (0x0006722a) popup_call2_audio_out_window_t6_ParamLimits

0x2409,	// (0x0006722a) popup_call2_audio_out_window_t6

0x7850,	// (0x0006c671) main_vitu_pane

0xbe2b,	// (0x00070c4c) aid_size_cell_itu_ParamLimits

0xbe2b,	// (0x00070c4c) aid_size_cell_itu

0x7aff,	// (0x0006c920) bg_popup_window_pane_cp08_ParamLimits

0x7aff,	// (0x0006c920) bg_popup_window_pane_cp08

0xbe39,	// (0x00070c5a) field_vitu_entry_pane_ParamLimits

0xbe39,	// (0x00070c5a) field_vitu_entry_pane

0xbe48,	// (0x00070c69) grid_vitu_function_pane_ParamLimits

0xbe48,	// (0x00070c69) grid_vitu_function_pane

0xbe58,	// (0x00070c79) grid_vitu_itu_pane_ParamLimits

0xbe58,	// (0x00070c79) grid_vitu_itu_pane

0xbe68,	// (0x00070c89) cell_vitu_itu_pane_ParamLimits

0xbe68,	// (0x00070c89) cell_vitu_itu_pane

0xbe7d,	// (0x00070c9e) cell_vitu_function_pane_ParamLimits

0xbe7d,	// (0x00070c9e) cell_vitu_function_pane

0x00aa,	// (0x00064ecb) bg_popup_sub_pane_cp08_ParamLimits

0x00aa,	// (0x00064ecb) bg_popup_sub_pane_cp08

0xbe8f,	// (0x00070cb0) field_vitu_entry_pane_t1_ParamLimits

0xbe8f,	// (0x00070cb0) field_vitu_entry_pane_t1

0x33ab,	// (0x000681cc) field_vitu_entry_pane_t2_ParamLimits

0x33ab,	// (0x000681cc) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x0007465b) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x0007465b) field_vitu_entry_pane_t

0x33c8,	// (0x000681e9) bg_button_pane_cp05_ParamLimits

0x33c8,	// (0x000681e9) bg_button_pane_cp05

0xbeab,	// (0x00070ccc) cell_vitu_itu_pane_g1

0xbec3,	// (0x00070ce4) cell_vitu_itu_pane_t1_ParamLimits

0xbec3,	// (0x00070ce4) cell_vitu_itu_pane_t1

0xbed5,	// (0x00070cf6) cell_vitu_itu_pane_t2_ParamLimits

0xbed5,	// (0x00070cf6) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x00074660) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x00074660) cell_vitu_itu_pane_t

0x33d6,	// (0x000681f7) bg_button_pane_cp07

0xbf0a,	// (0x00070d2b) cell_vitu_function_pane_g1

0x7da1,	// (0x0006cbc2) main_calc_pane_g1

0x7896,	// (0x0006c6b7) aid_visual_content_pane

0x7850,	// (0x0006c671) main_vradio_pane

0xbf13,	// (0x00070d34) main_vradio_pane_g1_ParamLimits

0xbf13,	// (0x00070d34) main_vradio_pane_g1

0x33e0,	// (0x00068201) main_vradio_pane_g2_ParamLimits

0x33e0,	// (0x00068201) main_vradio_pane_g2

0x0001,

0xf846,	// (0x00074667) main_vradio_pane_g_ParamLimits

0xf846,	// (0x00074667) main_vradio_pane_g

0xbf23,	// (0x00070d44) main_vradio_pane_t1_ParamLimits

0xbf23,	// (0x00070d44) main_vradio_pane_t1

0xbf35,	// (0x00070d56) main_vradio_pane_t2_ParamLimits

0xbf35,	// (0x00070d56) main_vradio_pane_t2

0x33ed,	// (0x0006820e) main_vradio_pane_t3_ParamLimits

0x33ed,	// (0x0006820e) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x0007466c) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x0007466c) main_vradio_pane_t

0xbf47,	// (0x00070d68) vradio_rocker_control_pane_ParamLimits

0xbf47,	// (0x00070d68) vradio_rocker_control_pane

0xbf53,	// (0x00070d74) vradio_station_info_pane_ParamLimits

0xbf53,	// (0x00070d74) vradio_station_info_pane

0x3401,	// (0x00068222) vradio_frequency_info_pane_ParamLimits

0x3401,	// (0x00068222) vradio_frequency_info_pane

0x2dc3,	// (0x00067be4) vradio_station_info_pane_g1

0x3410,	// (0x00068231) vradio_station_info_pane_t1_ParamLimits

0x3410,	// (0x00068231) vradio_station_info_pane_t1

0x3432,	// (0x00068253) vradio_station_info_pane_t2_ParamLimits

0x3432,	// (0x00068253) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x00074673) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x00074673) vradio_station_info_pane_t

0x3444,	// (0x00068265) vradio_tuning_pane

0x344c,	// (0x0006826d) vradio_rocker_control_pane_g1

0x3454,	// (0x00068275) vradio_rocker_control_pane_g2

0x345c,	// (0x0006827d) vradio_rocker_control_pane_g3

0x3464,	// (0x00068285) vradio_rocker_control_pane_g4

0x346c,	// (0x0006828d) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x00074678) vradio_rocker_control_pane_g

0xbf62,	// (0x00070d83) vradio_frequency_info_pane_g1

0x3474,	// (0x00068295) vradio_frequency_info_pane_t1_ParamLimits

0x3474,	// (0x00068295) vradio_frequency_info_pane_t1

0xbf6c,	// (0x00070d8d) vradio_tuning_pane_g1

0xbf75,	// (0x00070d96) vradio_tuning_pane_t1

0x78df,	// (0x0006c700) area_side_right_pane_ParamLimits

0x78df,	// (0x0006c700) area_side_right_pane

0x2884,	// (0x000676a5) status_small_pane_g1

0x288c,	// (0x000676ad) status_small_pane_g2

0x2895,	// (0x000676b6) status_small_pane_g3

0x289e,	// (0x000676bf) status_small_pane_g4

0x0003,

0xf617,	// (0x00074438) status_small_pane_g

0x28a7,	// (0x000676c8) status_small_pane_t1

0x7850,	// (0x0006c671) main_video3_pane

0x3488,	// (0x000682a9) cams_zoom_vslider_pane

0x3490,	// (0x000682b1) image3_wide_pane_ParamLimits

0x3490,	// (0x000682b1) image3_wide_pane

0x34aa,	// (0x000682cb) image3_wide_small_pane

0x34b6,	// (0x000682d7) main_video3_pane_g1_ParamLimits

0x34b6,	// (0x000682d7) main_video3_pane_g1

0x34d2,	// (0x000682f3) main_video3_pane_g2_ParamLimits

0x34d2,	// (0x000682f3) main_video3_pane_g2

0x0001,

0xf862,	// (0x00074683) main_video3_pane_g_ParamLimits

0xf862,	// (0x00074683) main_video3_pane_g

0x34ee,	// (0x0006830f) main_video3_pane_t1_ParamLimits

0x34ee,	// (0x0006830f) main_video3_pane_t1

0x3519,	// (0x0006833a) main_video3_pane_t2_ParamLimits

0x3519,	// (0x0006833a) main_video3_pane_t2

0x3544,	// (0x00068365) main_video3_pane_t3_ParamLimits

0x3544,	// (0x00068365) main_video3_pane_t3

0x0002,

0xf867,	// (0x00074688) main_video3_pane_t_ParamLimits

0xf867,	// (0x00074688) main_video3_pane_t

0x3571,	// (0x00068392) cams_zoom_vslider_pane_g1

0x357a,	// (0x0006839b) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x0007468f) cams_zoom_vslider_pane_g

0x3582,	// (0x000683a3) small_slider_vertical_pane

0x2dc3,	// (0x00067be4) small_slider_vertical_pane_g1

0x2dc3,	// (0x00067be4) small_slider_vertical_pane_g2

0x358a,	// (0x000683ab) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x00074694) small_slider_vertical_pane_g

0x7850,	// (0x0006c671) main_hwr_training_pane

0x3593,	// (0x000683b4) hwr_training_instruct_pane_ParamLimits

0x3593,	// (0x000683b4) hwr_training_instruct_pane

0xbf84,	// (0x00070da5) hwr_training_navi_pane_ParamLimits

0xbf84,	// (0x00070da5) hwr_training_navi_pane

0xbf9e,	// (0x00070dbf) hwr_training_write_pane_ParamLimits

0xbf9e,	// (0x00070dbf) hwr_training_write_pane

0x7850,	// (0x0006c671) bg_frame_shadow_pane

0x35ca,	// (0x000683eb) hwr_training_write_pane_g1

0x35d2,	// (0x000683f3) hwr_training_write_pane_g2

0x35da,	// (0x000683fb) hwr_training_write_pane_g3

0x35e2,	// (0x00068403) hwr_training_write_pane_g4

0x35ea,	// (0x0006840b) hwr_training_write_pane_g5

0x35f2,	// (0x00068413) hwr_training_write_pane_g6

0x35fa,	// (0x0006841b) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x0007469b) hwr_training_write_pane_g

0xbfd6,	// (0x00070df7) hwr_training_navi_pane_g1_ParamLimits

0xbfd6,	// (0x00070df7) hwr_training_navi_pane_g1

0xbfe8,	// (0x00070e09) hwr_training_navi_pane_g2_ParamLimits

0xbfe8,	// (0x00070e09) hwr_training_navi_pane_g2

0xbffa,	// (0x00070e1b) hwr_training_navi_pane_g3_ParamLimits

0xbffa,	// (0x00070e1b) hwr_training_navi_pane_g3

0xc00a,	// (0x00070e2b) hwr_training_navi_pane_g4_ParamLimits

0xc00a,	// (0x00070e2b) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x000746aa) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x000746aa) hwr_training_navi_pane_g

0xc024,	// (0x00070e45) hwr_training_navi_pane_t1

0xc032,	// (0x00070e53) list_single_hwr_training_instruct_pane_ParamLimits

0xc032,	// (0x00070e53) list_single_hwr_training_instruct_pane

0x3602,	// (0x00068423) list_single_hwr_training_instruct_pane_t1

0x2d03,	// (0x00067b24) bg_frame_shadow_pane_g1

0x3611,	// (0x00068432) bg_frame_shadow_pane_g2

0x3619,	// (0x0006843a) bg_frame_shadow_pane_g3

0x3621,	// (0x00068442) bg_frame_shadow_pane_g4

0x3629,	// (0x0006844a) bg_frame_shadow_pane_g5

0x3631,	// (0x00068452) bg_frame_shadow_pane_g6

0x3639,	// (0x0006845a) bg_frame_shadow_pane_g7

0x0902,	// (0x00065723) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x000746b5) bg_frame_shadow_pane_g

0x7850,	// (0x0006c671) main_video_tele_dialer_pane

0xc057,	// (0x00070e78) aid_size_cell_video_keypad_ParamLimits

0xc057,	// (0x00070e78) aid_size_cell_video_keypad

0xc067,	// (0x00070e88) grid_video_dialer_keypad_pane_ParamLimits

0xc067,	// (0x00070e88) grid_video_dialer_keypad_pane

0xc099,	// (0x00070eba) video_down_pane_cp_ParamLimits

0xc099,	// (0x00070eba) video_down_pane_cp

0xc0a5,	// (0x00070ec6) cell_video_dialer_keypad_pane_ParamLimits

0xc0a5,	// (0x00070ec6) cell_video_dialer_keypad_pane

0x365d,	// (0x0006847e) bg_button_pane_cp08_ParamLimits

0x365d,	// (0x0006847e) bg_button_pane_cp08

0xc0ba,	// (0x00070edb) cell_video_dialer_keypad_pane_g1_ParamLimits

0xc0ba,	// (0x00070edb) cell_video_dialer_keypad_pane_g1

0xb8d1,	// (0x000706f2) mup3_rocker2_pane_ParamLimits

0xb8d1,	// (0x000706f2) mup3_rocker2_pane

0x2dc3,	// (0x00067be4) mup3_rocker2_pane_g1

0xa7f1,	// (0x0006f612) main_dialer2_pane

0x7850,	// (0x0006c671) main_mp4_pane

0xc0fc,	// (0x00070f1d) main_mp4_pane_g1_ParamLimits

0xc0fc,	// (0x00070f1d) main_mp4_pane_g1

0xc10a,	// (0x00070f2b) main_mp4_pane_g2_ParamLimits

0xc10a,	// (0x00070f2b) main_mp4_pane_g2

0xc118,	// (0x00070f39) main_mp4_pane_g3_ParamLimits

0xc118,	// (0x00070f39) main_mp4_pane_g3

0xc15d,	// (0x00070f7e) main_mp4_pane_g4_ParamLimits

0xc15d,	// (0x00070f7e) main_mp4_pane_g4

0xc185,	// (0x00070fa6) main_mp4_pane_g5_ParamLimits

0xc185,	// (0x00070fa6) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x000746d5) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x000746d5) main_mp4_pane_g

0xc1d5,	// (0x00070ff6) main_mp4_pane_t1_ParamLimits

0xc1d5,	// (0x00070ff6) main_mp4_pane_t1

0xc231,	// (0x00071052) main_mp4_pane_t2_ParamLimits

0xc231,	// (0x00071052) main_mp4_pane_t2

0x4678,	// (0x00069499) main_mp4_pane_t3_ParamLimits

0x4678,	// (0x00069499) main_mp4_pane_t3

0xc283,	// (0x000710a4) main_mp4_pane_t4_ParamLimits

0xc283,	// (0x000710a4) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x000746e2) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x000746e2) main_mp4_pane_t

0xc2c7,	// (0x000710e8) mp4_progress_pane_ParamLimits

0xc2c7,	// (0x000710e8) mp4_progress_pane

0xc311,	// (0x00071132) mp4_rocker_pane_ParamLimits

0xc311,	// (0x00071132) mp4_rocker_pane

0x46a0,	// (0x000694c1) mp4_progress_pane_t1

0x46b9,	// (0x000694da) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x000746eb) mp4_progress_pane_t

0x46d2,	// (0x000694f3) mup_progress_pane_cp04

0x2dc3,	// (0x00067be4) mp4_rocker_pane_g1

0xc331,	// (0x00071152) aid_cell_size_keypad2_ParamLimits

0xc331,	// (0x00071152) aid_cell_size_keypad2

0xc341,	// (0x00071162) dialer2_ne_pane_ParamLimits

0xc341,	// (0x00071162) dialer2_ne_pane

0xc34f,	// (0x00071170) grid_dialer2_keypad_pane_ParamLimits

0xc34f,	// (0x00071170) grid_dialer2_keypad_pane

0x49bb,	// (0x000697dc) bg_popup_call_pane_cp07_ParamLimits

0x49bb,	// (0x000697dc) bg_popup_call_pane_cp07

0xc35f,	// (0x00071180) dialer2_ne_pane_t1_ParamLimits

0xc35f,	// (0x00071180) dialer2_ne_pane_t1

0xc384,	// (0x000711a5) cell_dialer2_keypad_pane_ParamLimits

0xc384,	// (0x000711a5) cell_dialer2_keypad_pane

0x46fa,	// (0x0006951b) bg_button_pane_pane_cp04_ParamLimits

0x46fa,	// (0x0006951b) bg_button_pane_pane_cp04

0xc399,	// (0x000711ba) cell_dialer2_keypad_pane_g1_ParamLimits

0xc399,	// (0x000711ba) cell_dialer2_keypad_pane_g1

0x87c7,	// (0x0006d5e8) aid_placing_vt_set_content_ParamLimits

0x87c7,	// (0x0006d5e8) aid_placing_vt_set_content

0x87f3,	// (0x0006d614) aid_placing_vt_set_title_ParamLimits

0x87f3,	// (0x0006d614) aid_placing_vt_set_title

0x7850,	// (0x0006c671) main_image3_pane

0xc433,	// (0x00071254) area_side_right_pane_cp01_ParamLimits

0xc433,	// (0x00071254) area_side_right_pane_cp01

0xf0c7,	// (0x00073ee8) main_image3_pane_g1_ParamLimits

0xf0c7,	// (0x00073ee8) main_image3_pane_g1

0xc460,	// (0x00071281) main_image3_pane_g2_ParamLimits

0xc460,	// (0x00071281) main_image3_pane_g2

0xc479,	// (0x0007129a) main_image3_pane_g3_ParamLimits

0xc479,	// (0x0007129a) main_image3_pane_g3

0xc492,	// (0x000712b3) main_image3_pane_g4_ParamLimits

0xc492,	// (0x000712b3) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x000746fa) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x000746fa) main_image3_pane_g

0xc4ab,	// (0x000712cc) main_image3_pane_t1_ParamLimits

0xc4ab,	// (0x000712cc) main_image3_pane_t1

0xc4d0,	// (0x000712f1) main_image3_pane_t2_ParamLimits

0xc4d0,	// (0x000712f1) main_image3_pane_t2

0xc4ef,	// (0x00071310) main_image3_pane_t3_ParamLimits

0xc4ef,	// (0x00071310) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x00074703) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x00074703) main_image3_pane_t

0x7aff,	// (0x0006c920) grid_sctrl_middle_pane_cp01_ParamLimits

0x7aff,	// (0x0006c920) grid_sctrl_middle_pane_cp01

0xc550,	// (0x00071371) cell_sctrl_middle_pane_cp01_ParamLimits

0xc550,	// (0x00071371) cell_sctrl_middle_pane_cp01

0xc561,	// (0x00071382) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc561,	// (0x00071382) cell_sctrl_middle_pane_cp01_g1

0x7850,	// (0x0006c671) main_call4_pane

0xc56e,	// (0x0007138f) aid_size_button_call4_ParamLimits

0xc56e,	// (0x0007138f) aid_size_button_call4

0xc59e,	// (0x000713bf) call4_windows_pane_ParamLimits

0xc59e,	// (0x000713bf) call4_windows_pane

0xc5b8,	// (0x000713d9) grid_call4_button_pane_ParamLimits

0xc5b8,	// (0x000713d9) grid_call4_button_pane

0x4706,	// (0x00069527) call4_windows_conf_pane

0x471d,	// (0x0006953e) popup_call4_audio_first_window_ParamLimits

0x471d,	// (0x0006953e) popup_call4_audio_first_window

0x4769,	// (0x0006958a) popup_call4_audio_second_window_ParamLimits

0x4769,	// (0x0006958a) popup_call4_audio_second_window

0x477d,	// (0x0006959e) popup_call4_audio_wait_window_ParamLimits

0x477d,	// (0x0006959e) popup_call4_audio_wait_window

0xc5dc,	// (0x000713fd) cell_call4_button_pane_ParamLimits

0xc5dc,	// (0x000713fd) cell_call4_button_pane

0xc601,	// (0x00071422) bg_button_pane_cp09_ParamLimits

0xc601,	// (0x00071422) bg_button_pane_cp09

0xc60d,	// (0x0007142e) cell_call4_button_pane_g1_ParamLimits

0xc60d,	// (0x0007142e) cell_call4_button_pane_g1

0xc61a,	// (0x0007143b) cell_call4_button_pane_t1_ParamLimits

0xc61a,	// (0x0007143b) cell_call4_button_pane_t1

0x47c5,	// (0x000695e6) popup_call4_audio_conf_window_ParamLimits

0x47c5,	// (0x000695e6) popup_call4_audio_conf_window

0xb904,	// (0x00070725) mup3_progress_pane_t1_ParamLimits

0xb923,	// (0x00070744) mup3_progress_pane_t2_ParamLimits

0x30aa,	// (0x00067ecb) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x000745dc) mup3_progress_pane_t_ParamLimits

0x30c7,	// (0x00067ee8) mup_progress_pane_cp03_ParamLimits

0xbe23,	// (0x00070c44) mup3_control_keys_pane_g4_copy1

0xc2f5,	// (0x00071116) mp4_rocker2_pane_ParamLimits

0xc2f5,	// (0x00071116) mp4_rocker2_pane

0x47e1,	// (0x00069602) mp4_rocker2_pane_g1

0x47d9,	// (0x000695fa) mp4_rocker2_pane_g2

0xc62c,	// (0x0007144d) mp4_rocker2_pane_g3

0xc634,	// (0x00071455) mp4_rocker2_pane_g4

0xc63c,	// (0x0007145d) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x0007470c) mp4_rocker2_pane_g

0x7850,	// (0x0006c671) main_camera4_pane

0x7850,	// (0x0006c671) main_video4_pane

0xc075,	// (0x00070e96) main_video_tele_dialer_pane_t1_ParamLimits

0xc075,	// (0x00070e96) main_video_tele_dialer_pane_t1

0xc087,	// (0x00070ea8) main_video_tele_dialer_pane_t2_ParamLimits

0xc087,	// (0x00070ea8) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x000746c6) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x000746c6) main_video_tele_dialer_pane_t

0xc65c,	// (0x0007147d) cam4_autofocus_pane_ParamLimits

0xc65c,	// (0x0007147d) cam4_autofocus_pane

0xc676,	// (0x00071497) cam4_image_uncrop_pane_ParamLimits

0xc676,	// (0x00071497) cam4_image_uncrop_pane

0xc68d,	// (0x000714ae) cam4_indicators_pane_ParamLimits

0xc68d,	// (0x000714ae) cam4_indicators_pane

0xc6a9,	// (0x000714ca) main_camera4_pane_g1_ParamLimits

0xc6a9,	// (0x000714ca) main_camera4_pane_g1

0xc6b5,	// (0x000714d6) main_camera4_pane_g2_ParamLimits

0xc6b5,	// (0x000714d6) main_camera4_pane_g2

0xc6b5,	// (0x000714d6) main_camera4_pane_g3_ParamLimits

0xc6b5,	// (0x000714d6) main_camera4_pane_g3

0xc6c1,	// (0x000714e2) main_camera4_pane_g4_ParamLimits

0xc6c1,	// (0x000714e2) main_camera4_pane_g4

0xc6cd,	// (0x000714ee) main_camera4_pane_g5_ParamLimits

0xc6cd,	// (0x000714ee) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x00074717) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x00074717) main_camera4_pane_g

0xc6e7,	// (0x00071508) main_camera4_pane_t1_ParamLimits

0xc6e7,	// (0x00071508) main_camera4_pane_t1

0x302f,	// (0x00067e50) bg_tb_trans_pane_cp06

0xc737,	// (0x00071558) cam4_indicators_pane_g1

0xc748,	// (0x00071569) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x00074732) cam4_indicators_pane_g

0xc766,	// (0x00071587) cam4_indicators_pane_t1

0xc790,	// (0x000715b1) main_video4_pane_g1_ParamLimits

0xc790,	// (0x000715b1) main_video4_pane_g1

0xc79c,	// (0x000715bd) main_video4_pane_g2_ParamLimits

0xc79c,	// (0x000715bd) main_video4_pane_g2

0xc7a8,	// (0x000715c9) main_video4_pane_g3_ParamLimits

0xc7a8,	// (0x000715c9) main_video4_pane_g3

0xc7b4,	// (0x000715d5) main_video4_pane_g4_ParamLimits

0xc7b4,	// (0x000715d5) main_video4_pane_g4

0x0004,

0xf918,	// (0x00074739) main_video4_pane_g_ParamLimits

0xf918,	// (0x00074739) main_video4_pane_g

0xc7d4,	// (0x000715f5) vid4_indicators_pane_ParamLimits

0xc7d4,	// (0x000715f5) vid4_indicators_pane

0xc7f2,	// (0x00071613) video4_image_uncrop_cif_pane_ParamLimits

0xc7f2,	// (0x00071613) video4_image_uncrop_cif_pane

0xc801,	// (0x00071622) video4_image_uncrop_nhd_pane_ParamLimits

0xc801,	// (0x00071622) video4_image_uncrop_nhd_pane

0xc676,	// (0x00071497) video4_image_uncrop_vga_pane_ParamLimits

0xc676,	// (0x00071497) video4_image_uncrop_vga_pane

0x00aa,	// (0x00064ecb) bg_tb_trans_pane_cp07

0xc818,	// (0x00071639) vid4_indicators_pane_g1

0xc829,	// (0x0007164a) vid4_indicators_pane_g2

0xc83a,	// (0x0007165b) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x00074744) vid4_indicators_pane_g

0xc867,	// (0x00071688) vid4_indicators_pane_t1

0xc880,	// (0x000716a1) cam4_autofocus_pane_g1

0xc888,	// (0x000716a9) cam4_autofocus_pane_g2

0xc890,	// (0x000716b1) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x0007474f) cam4_autofocus_pane_g

0xc898,	// (0x000716b9) cam4_autofocus_pane_g3_copy1

0x3641,	// (0x00068462) video_down_pane_cp_t1

0x364f,	// (0x00068470) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x000746cb) video_down_pane_cp_t

0x7aff,	// (0x0006c920) popup_vitu2_window_ParamLimits

0x7aff,	// (0x0006c920) popup_vitu2_window

0xc8a0,	// (0x000716c1) aid_size_cell2_itu2_ParamLimits

0xc8a0,	// (0x000716c1) aid_size_cell2_itu2

0xc8c2,	// (0x000716e3) aid_size_cell_itu2_ParamLimits

0xc8c2,	// (0x000716e3) aid_size_cell_itu2

0x49bb,	// (0x000697dc) bg_popup_window_pane_cp09_ParamLimits

0x49bb,	// (0x000697dc) bg_popup_window_pane_cp09

0xc906,	// (0x00071727) field_vitu2_entry_pane_ParamLimits

0xc906,	// (0x00071727) field_vitu2_entry_pane

0xc926,	// (0x00071747) grid_vitu2_function_pane_ParamLimits

0xc926,	// (0x00071747) grid_vitu2_function_pane

0xc96a,	// (0x0007178b) grid_vitu2_itu_pane_ParamLimits

0xc96a,	// (0x0007178b) grid_vitu2_itu_pane

0xc9e2,	// (0x00071803) cell_vitu2_itu_pane_ParamLimits

0xc9e2,	// (0x00071803) cell_vitu2_itu_pane

0xc9f7,	// (0x00071818) cell_vitu2_function_pane_ParamLimits

0xc9f7,	// (0x00071818) cell_vitu2_function_pane

0x47e9,	// (0x0006960a) bg_popup_call_pane_cp08_ParamLimits

0x47e9,	// (0x0006960a) bg_popup_call_pane_cp08

0x4802,	// (0x00069623) field_vitu2_entry_pane_g1

0x480e,	// (0x0006962f) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x00074756) field_vitu2_entry_pane_g

0x6a15,	// (0x0006b836) field_vitu2_entry_pane_t1_ParamLimits

0x6a15,	// (0x0006b836) field_vitu2_entry_pane_t1

0x6a44,	// (0x0006b865) field_vitu2_entry_pane_t2_ParamLimits

0x6a44,	// (0x0006b865) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x0007475d) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x0007475d) field_vitu2_entry_pane_t

0xca36,	// (0x00071857) bg_button_pane_cp010_ParamLimits

0xca36,	// (0x00071857) bg_button_pane_cp010

0xca44,	// (0x00071865) cell_vitu2_itu_pane_g1

0xca62,	// (0x00071883) cell_vitu2_itu_pane_t1_ParamLimits

0xca62,	// (0x00071883) cell_vitu2_itu_pane_t1

0x6a61,	// (0x0006b882) cell_vitu2_itu_pane_t2_ParamLimits

0x6a61,	// (0x0006b882) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x00074767) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x00074767) cell_vitu2_itu_pane_t

0x00aa,	// (0x00064ecb) bg_button_pane_cp011

0xcab4,	// (0x000718d5) cell_vitu2_function_pane_g1

0x7850,	// (0x0006c671) main_myfav_hc_pane

0xc531,	// (0x00071352) popup_image3_note_pane_ParamLimits

0xc531,	// (0x00071352) popup_image3_note_pane

0xc53f,	// (0x00071360) popup_image3_tool_bar_pane_ParamLimits

0xc53f,	// (0x00071360) popup_image3_tool_bar_pane

0x6acf,	// (0x0006b8f0) cell_vitu2_itu_pane_t3_ParamLimits

0x6acf,	// (0x0006b8f0) cell_vitu2_itu_pane_t3

0x7850,	// (0x0006c671) bg_popup_trans_pane

0x4830,	// (0x00069651) grid_image3_tool_bar_pane

0x483a,	// (0x0006965b) bg_popup_trans_pane_g1

0x0cf1,	// (0x00065b12) bg_popup_trans_pane_g2

0x4842,	// (0x00069663) bg_popup_trans_pane_g3

0x484a,	// (0x0006966b) bg_popup_trans_pane_g4

0x4852,	// (0x00069673) bg_popup_trans_pane_g5

0x485a,	// (0x0006967b) bg_popup_trans_pane_g6

0x4862,	// (0x00069683) bg_popup_trans_pane_g7

0x486a,	// (0x0006968b) bg_popup_trans_pane_g8

0x0cd1,	// (0x00065af2) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x0007476e) bg_popup_trans_pane_g

0x4872,	// (0x00069693) cell_image3_tool_bar_pane_ParamLimits

0x4872,	// (0x00069693) cell_image3_tool_bar_pane

0x2dc3,	// (0x00067be4) cell_image3_tool_bar_pane_g1

0x7850,	// (0x0006c671) bg_popup_trans_pane_cp1

0x4886,	// (0x000696a7) popup_image3_note_pane_t1

0x4894,	// (0x000696b5) popup_image3_note_pane_t2

0x48a2,	// (0x000696c3) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x00074781) popup_image3_note_pane_t

0x48b0,	// (0x000696d1) popup_image3_note_pane_t3_copy1

0xcac8,	// (0x000718e9) bg_myfav_hc_instruction_pane_ParamLimits

0xcac8,	// (0x000718e9) bg_myfav_hc_instruction_pane

0xcae0,	// (0x00071901) cell_myfav_contact_pane_ParamLimits

0xcae0,	// (0x00071901) cell_myfav_contact_pane

0xcafa,	// (0x0007191b) cell_myfav_contact_pane_cp1_ParamLimits

0xcafa,	// (0x0007191b) cell_myfav_contact_pane_cp1

0xcb12,	// (0x00071933) cell_myfav_contact_pane_cp2_ParamLimits

0xcb12,	// (0x00071933) cell_myfav_contact_pane_cp2

0xcb2a,	// (0x0007194b) cell_myfav_contact_pane_cp3_ParamLimits

0xcb2a,	// (0x0007194b) cell_myfav_contact_pane_cp3

0xcb41,	// (0x00071962) cell_myfav_contact_pane_cp4_ParamLimits

0xcb41,	// (0x00071962) cell_myfav_contact_pane_cp4

0xcb57,	// (0x00071978) cell_myfav_contact_pane_cp5_ParamLimits

0xcb57,	// (0x00071978) cell_myfav_contact_pane_cp5

0xcb6b,	// (0x0007198c) cell_myfav_contact_pane_cp6_ParamLimits

0xcb6b,	// (0x0007198c) cell_myfav_contact_pane_cp6

0xcb7f,	// (0x000719a0) cell_myfav_contact_pane_cp7_ParamLimits

0xcb7f,	// (0x000719a0) cell_myfav_contact_pane_cp7

0x48be,	// (0x000696df) listscroll_gen_pane_cp05

0xcb97,	// (0x000719b8) main_myfav_hc_pane_g1_ParamLimits

0xcb97,	// (0x000719b8) main_myfav_hc_pane_g1

0xcbad,	// (0x000719ce) main_myfav_hc_pane_g2_ParamLimits

0xcbad,	// (0x000719ce) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x00074788) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x00074788) main_myfav_hc_pane_g

0xcbdb,	// (0x000719fc) main_myfav_hc_pane_t1_ParamLimits

0xcbdb,	// (0x000719fc) main_myfav_hc_pane_t1

0x48c7,	// (0x000696e8) main_myfav_hc_pane_t2_ParamLimits

0x48c7,	// (0x000696e8) main_myfav_hc_pane_t2

0x48d9,	// (0x000696fa) main_myfav_hc_pane_t3_ParamLimits

0x48d9,	// (0x000696fa) main_myfav_hc_pane_t3

0xcbf2,	// (0x00071a13) main_myfav_hc_pane_t4_ParamLimits

0xcbf2,	// (0x00071a13) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x0007478f) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x0007478f) main_myfav_hc_pane_t

0x2dc3,	// (0x00067be4) bg_myfav_hc_instruction_pane_g1

0x48eb,	// (0x0006970c) cell_myfav_contact_pane_g1_ParamLimits

0x48eb,	// (0x0006970c) cell_myfav_contact_pane_g1

0x48eb,	// (0x0006970c) cell_myfav_contact_pane_g2_ParamLimits

0x48eb,	// (0x0006970c) cell_myfav_contact_pane_g2

0x48f7,	// (0x00069718) cell_myfav_contact_pane_g3_ParamLimits

0x48f7,	// (0x00069718) cell_myfav_contact_pane_g3

0x3094,	// (0x00067eb5) cell_myfav_contact_pane_g4_ParamLimits

0x3094,	// (0x00067eb5) cell_myfav_contact_pane_g4

0x4904,	// (0x00069725) cell_myfav_contact_pane_g5_ParamLimits

0x4904,	// (0x00069725) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x0007479a) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x0007479a) cell_myfav_contact_pane_g

0xcbc3,	// (0x000719e4) main_myfav_hc_pane_g3_ParamLimits

0xcbc3,	// (0x000719e4) main_myfav_hc_pane_g3

0x7a12,	// (0x0006c833) popup_adpt_find_window

0xcc1c,	// (0x00071a3d) afind_page_pane_ParamLimits

0xcc1c,	// (0x00071a3d) afind_page_pane

0xcc29,	// (0x00071a4a) aid_size_cell_afind_ParamLimits

0xcc29,	// (0x00071a4a) aid_size_cell_afind

0xcc43,	// (0x00071a64) bg_popup_sub_pane_cp09_ParamLimits

0xcc43,	// (0x00071a64) bg_popup_sub_pane_cp09

0xcc50,	// (0x00071a71) find_pane_cp01_ParamLimits

0xcc50,	// (0x00071a71) find_pane_cp01

0x4910,	// (0x00069731) grid_afind_control_pane_ParamLimits

0x4910,	// (0x00069731) grid_afind_control_pane

0xcc5d,	// (0x00071a7e) grid_afind_pane_ParamLimits

0xcc5d,	// (0x00071a7e) grid_afind_pane

0xcc79,	// (0x00071a9a) cell_afind_pane_ParamLimits

0xcc79,	// (0x00071a9a) cell_afind_pane

0x2dc3,	// (0x00067be4) afind_page_pane_g1

0xccc1,	// (0x00071ae2) afind_page_pane_g2

0xccca,	// (0x00071aeb) afind_page_pane_g3

0x0002,

0xf984,	// (0x000747a5) afind_page_pane_g

0xccd3,	// (0x00071af4) afind_page_pane_t1

0x4924,	// (0x00069745) cell_afind_grid_control_pane_ParamLimits

0x4924,	// (0x00069745) cell_afind_grid_control_pane

0x46fa,	// (0x0006951b) bg_button_pane_cp69_ParamLimits

0x46fa,	// (0x0006951b) bg_button_pane_cp69

0xccf3,	// (0x00071b14) cell_afind_pane_g1_ParamLimits

0xccf3,	// (0x00071b14) cell_afind_pane_g1

0xcd00,	// (0x00071b21) cell_afind_pane_t1_ParamLimits

0xcd00,	// (0x00071b21) cell_afind_pane_t1

0x0aea,	// (0x0006590b) bg_button_pane_cp72

0x4933,	// (0x00069754) cell_afind_grid_control_pane_g1

0xa36f,	// (0x0006f190) aid_image_placing_area_ParamLimits

0xa36f,	// (0x0006f190) aid_image_placing_area

0x3393,	// (0x000681b4) field_vitu_entry_pane_g1_ParamLimits

0x3393,	// (0x000681b4) field_vitu_entry_pane_g1

0x339f,	// (0x000681c0) field_vitu_entry_pane_g2_ParamLimits

0x339f,	// (0x000681c0) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x00074656) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x00074656) field_vitu_entry_pane_g

0xbeab,	// (0x00070ccc) cell_vitu_itu_pane_g1_ParamLimits

0xbeed,	// (0x00070d0e) cell_vitu_itu_pane_t3_ParamLimits

0xbeed,	// (0x00070d0e) cell_vitu_itu_pane_t3

0x46a0,	// (0x000694c1) mp4_progress_pane_t1_ParamLimits

0x46b9,	// (0x000694da) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x000746eb) mp4_progress_pane_t_ParamLimits

0x46d2,	// (0x000694f3) mup_progress_pane_cp04_ParamLimits

0xcc06,	// (0x00071a27) main_myfav_hc_pane_t5_ParamLimits

0xcc06,	// (0x00071a27) main_myfav_hc_pane_t5

0x66e4,	// (0x0006b505) aid_zoom_text_primary

0x7a12,	// (0x0006c833) popup_adpt_find_window_ParamLimits

0x00aa,	// (0x00064ecb) main_cam_set_pane

0xc69b,	// (0x000714bc) cam4_zoom_pane_ParamLimits

0xc69b,	// (0x000714bc) cam4_zoom_pane

0xcd12,	// (0x00071b33) main_cam_set_pane_g1_ParamLimits

0xcd12,	// (0x00071b33) main_cam_set_pane_g1

0xcd20,	// (0x00071b41) main_cam_set_pane_g2_ParamLimits

0xcd20,	// (0x00071b41) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x000747ac) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x000747ac) main_cam_set_pane_g

0xcd2c,	// (0x00071b4d) main_cam_set_pane_t1_ParamLimits

0xcd2c,	// (0x00071b4d) main_cam_set_pane_t1

0xcd48,	// (0x00071b69) main_cset_listscroll_pane_ParamLimits

0xcd48,	// (0x00071b69) main_cset_listscroll_pane

0xcd73,	// (0x00071b94) main_cset_slider_pane_ParamLimits

0xcd73,	// (0x00071b94) main_cset_slider_pane

0x4944,	// (0x00069765) main_cset_list_pane_ParamLimits

0x4944,	// (0x00069765) main_cset_list_pane

0x4954,	// (0x00069775) scroll_pane_cp028

0xcd92,	// (0x00071bb3) aid_area_touch_slider

0xcdae,	// (0x00071bcf) cset_slider_pane

0xcdd8,	// (0x00071bf9) main_cset_slider_pane_g1

0xcded,	// (0x00071c0e) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x000747b1) main_cset_slider_pane_g

0x498d,	// (0x000697ae) main_cset_slider_pane_t1

0xceaf,	// (0x00071cd0) main_cset_slider_pane_t2

0xcec9,	// (0x00071cea) main_cset_slider_pane_t3

0xcee3,	// (0x00071d04) main_cset_slider_pane_t4

0xcefd,	// (0x00071d1e) main_cset_slider_pane_t5

0xcf1b,	// (0x00071d3c) main_cset_slider_pane_t6

0xcf32,	// (0x00071d53) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x000747d6) main_cset_slider_pane_t

0xd03e,	// (0x00071e5f) cset_list_set_pane_ParamLimits

0xd03e,	// (0x00071e5f) cset_list_set_pane

0xd054,	// (0x00071e75) aid_position_infowindow_above

0xd05c,	// (0x00071e7d) aid_position_infowindow_below

0xd064,	// (0x00071e85) cset_list_set_pane_g1_ParamLimits

0xd064,	// (0x00071e85) cset_list_set_pane_g1

0x6b1c,	// (0x0006b93d) cset_list_set_pane_g3_ParamLimits

0x6b1c,	// (0x0006b93d) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x000747f5) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x000747f5) cset_list_set_pane_g

0x6b2b,	// (0x0006b94c) cset_list_set_pane_t1_ParamLimits

0x6b2b,	// (0x0006b94c) cset_list_set_pane_t1

0x00aa,	// (0x00064ecb) list_highlight_pane_cp021_ParamLimits

0x00aa,	// (0x00064ecb) list_highlight_pane_cp021

0x15d1,	// (0x000663f2) cset_slider_pane_g1

0x15e3,	// (0x00066404) cset_slider_pane_g2

0x15da,	// (0x000663fb) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x000747fa) cset_slider_pane_g

0xd070,	// (0x00071e91) aid_area_touch_cam4_zoom

0xd078,	// (0x00071e99) cam4_zoom_cont_pane

0xd080,	// (0x00071ea1) cam4_zoom_pane_g1

0xd088,	// (0x00071ea9) cam4_zoom_pane_g2

0xd090,	// (0x00071eb1) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x00074801) cam4_zoom_pane_g

0x51c8,	// (0x00069fe9) cam4_zoom_cont_pane_g1

0x51d1,	// (0x00069ff2) cam4_zoom_cont_pane_g2

0x51da,	// (0x00069ffb) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x00074808) cam4_zoom_cont_pane_g

0xc588,	// (0x000713a9) call4_image_pane_ParamLimits

0xc588,	// (0x000713a9) call4_image_pane

0x4706,	// (0x00069527) call4_windows_conf_pane_ParamLimits

0x4747,	// (0x00069568) popup_call4_audio_in_window_ParamLimits

0x4747,	// (0x00069568) popup_call4_audio_in_window

0x7850,	// (0x0006c671) bg_popup_call2_act_pane_cp02

0x47bd,	// (0x000695de) call4_list_conf_pane

0x2dc3,	// (0x00067be4) call4_image_pane_g1

0x2dc3,	// (0x00067be4) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x0007451c) call4_image_pane_g

0x4a3b,	// (0x0006985c) list_single_graphic_popup_conf4_pane_ParamLimits

0x4a3b,	// (0x0006985c) list_single_graphic_popup_conf4_pane

0x7850,	// (0x0006c671) list_highlight_pane_cp022

0x4a4e,	// (0x0006986f) list_single_graphic_popup_conf4_pane_g1

0x1290,	// (0x000660b1) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x0007480f) list_single_graphic_popup_conf4_pane_g

0x4a56,	// (0x00069877) list_single_graphic_popup_conf4_pane_t1

0x8957,	// (0x0006d778) popup_vtel_slider_window_ParamLimits

0x8957,	// (0x0006d778) popup_vtel_slider_window

0x46e8,	// (0x00069509) dialer2_ne_pane_t2_ParamLimits

0x46e8,	// (0x00069509) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x000746f0) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x000746f0) dialer2_ne_pane_t

0x00aa,	// (0x00064ecb) bg_popup_sub_pane_cp010_ParamLimits

0x00aa,	// (0x00064ecb) bg_popup_sub_pane_cp010

0xd098,	// (0x00071eb9) popup_vtel_slider_window_g1_ParamLimits

0xd098,	// (0x00071eb9) popup_vtel_slider_window_g1

0xd0a4,	// (0x00071ec5) popup_vtel_slider_window_g2_ParamLimits

0xd0a4,	// (0x00071ec5) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x00074814) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x00074814) popup_vtel_slider_window_g

0xd0ec,	// (0x00071f0d) vtel_slider_pane_ParamLimits

0xd0ec,	// (0x00071f0d) vtel_slider_pane

0xd0fb,	// (0x00071f1c) vtel_slider_pane_g1_ParamLimits

0xd0fb,	// (0x00071f1c) vtel_slider_pane_g1

0xd108,	// (0x00071f29) vtel_slider_pane_g2_ParamLimits

0xd108,	// (0x00071f29) vtel_slider_pane_g2

0xd115,	// (0x00071f36) vtel_slider_pane_g3_ParamLimits

0xd115,	// (0x00071f36) vtel_slider_pane_g3

0xd0fb,	// (0x00071f1c) vtel_slider_pane_g4_ParamLimits

0xd0fb,	// (0x00071f1c) vtel_slider_pane_g4

0xd122,	// (0x00071f43) vtel_slider_pane_g5_ParamLimits

0xd122,	// (0x00071f43) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x0007481d) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x0007481d) vtel_slider_pane_g

0x7850,	// (0x0006c671) main_gallery2_pane

0xc8e8,	// (0x00071709) aid_size_row_itut2_dropdow_list_ParamLimits

0xc8e8,	// (0x00071709) aid_size_row_itut2_dropdow_list

0xc948,	// (0x00071769) grid_vitu2_function_top_pane_ParamLimits

0xc948,	// (0x00071769) grid_vitu2_function_top_pane

0xc99e,	// (0x000717bf) popup_vitu2_dropdown_list_window_ParamLimits

0xc99e,	// (0x000717bf) popup_vitu2_dropdown_list_window

0xc9be,	// (0x000717df) popup_vitu2_match_list_window

0xd12f,	// (0x00071f50) cell_vitu2_function_top_pane_ParamLimits

0xd12f,	// (0x00071f50) cell_vitu2_function_top_pane

0xd14f,	// (0x00071f70) cell_vitu2_function_top_pane_cp01_ParamLimits

0xd14f,	// (0x00071f70) cell_vitu2_function_top_pane_cp01

0xd16d,	// (0x00071f8e) cell_vitu2_function_top_wide_pane_ParamLimits

0xd16d,	// (0x00071f8e) cell_vitu2_function_top_wide_pane

0x00aa,	// (0x00064ecb) bg_button_pane_cp012

0xd18b,	// (0x00071fac) cell_vitu2_function_top_pane_g1

0xd19a,	// (0x00071fbb) bg_button_pane_cp013_ParamLimits

0xd19a,	// (0x00071fbb) bg_button_pane_cp013

0xd1b6,	// (0x00071fd7) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xd1b6,	// (0x00071fd7) cell_vitu2_function_top_wide_pane_g1

0x7aff,	// (0x0006c920) bg_popup_sub_pane_cp20

0xd1ce,	// (0x00071fef) list_vitu2_match_list_pane

0x483a,	// (0x0006965b) bg_popup_sub_pane_cp20_g1

0x4842,	// (0x00069663) bg_popup_sub_pane_cp20_g2

0x0cf1,	// (0x00065b12) bg_popup_sub_pane_cp20_g3

0x484a,	// (0x0006966b) bg_popup_sub_pane_cp20_g4

0x0cd1,	// (0x00065af2) bg_popup_sub_pane_cp20_g5

0x4a6c,	// (0x0006988d) bg_popup_sub_pane_cp20_g6

0x485a,	// (0x0006967b) bg_popup_sub_pane_cp20_g7

0x4862,	// (0x00069683) bg_popup_sub_pane_cp20_g8

0x486a,	// (0x0006968b) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x00074828) bg_popup_sub_pane_cp20_g

0xd1e6,	// (0x00072007) list_vitu2_match_list_item_pane_ParamLimits

0xd1e6,	// (0x00072007) list_vitu2_match_list_item_pane

0xd1f8,	// (0x00072019) list_vitu2_match_list_item_pane_t1

0x7850,	// (0x0006c671) bg_popup_sub_pane_cp21

0x1145,	// (0x00065f66) grid_vitu2_dropdown_list_pane

0xd206,	// (0x00072027) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xd206,	// (0x00072027) cell_vitu2_dropdown_list_char_pane

0xd227,	// (0x00072048) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xd227,	// (0x00072048) cell_vitu2_dropdown_list_ctrl_pane

0x4a86,	// (0x000698a7) cell_vitu2_dropdown_list_char_pane_g1

0x4a7d,	// (0x0006989e) cell_vitu2_dropdown_list_char_pane_g2

0x4a74,	// (0x00069895) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa24,	// (0x00074845) cell_vitu2_dropdown_list_char_pane_g

0xd253,	// (0x00072074) cell_vitu2_dropdown_list_char_pane_t1

0xd261,	// (0x00072082) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xd261,	// (0x00072082) cell_vitu2_dropdown_list_ctrl_pane_g1

0xd271,	// (0x00072092) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xd271,	// (0x00072092) cell_vitu2_dropdown_list_ctrl_pane_g2

0xd282,	// (0x000720a3) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xd282,	// (0x000720a3) cell_vitu2_dropdown_list_ctrl_pane_g3

0xd292,	// (0x000720b3) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xd292,	// (0x000720b3) cell_vitu2_dropdown_list_ctrl_pane_g4

0x302f,	// (0x00067e50) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x302f,	// (0x00067e50) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa2b,	// (0x0007484c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa2b,	// (0x0007484c) cell_vitu2_dropdown_list_ctrl_pane_g

0xd2ae,	// (0x000720cf) aid_size_cell_gallery2_ParamLimits

0xd2ae,	// (0x000720cf) aid_size_cell_gallery2

0xd2bc,	// (0x000720dd) grid_gallery2_pane_ParamLimits

0xd2bc,	// (0x000720dd) grid_gallery2_pane

0xd2cb,	// (0x000720ec) scroll_pane_cp029_ParamLimits

0xd2cb,	// (0x000720ec) scroll_pane_cp029

0xd2d7,	// (0x000720f8) cell_gallery2_pane_ParamLimits

0xd2d7,	// (0x000720f8) cell_gallery2_pane

0x4a8f,	// (0x000698b0) cell_gallery2_pane_g2

0x3b6f,	// (0x00068990) cell_gallery2_pane_g3

0x4a99,	// (0x000698ba) cell_gallery2_pane_g4

0x4aa1,	// (0x000698c2) cell_gallery2_pane_g5

0x147b,	// (0x0006629c) grid_highlight_pane_cp10

0xc9be,	// (0x000717df) popup_vitu2_match_list_window_ParamLimits

0xc9d2,	// (0x000717f3) popup_vitu2_query_window_ParamLimits

0xc9d2,	// (0x000717f3) popup_vitu2_query_window

0x7850,	// (0x0006c671) bg_vitu2_candi_button_pane

0x4a86,	// (0x000698a7) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x4a7d,	// (0x0006989e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x4a74,	// (0x00069895) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6b95,	// (0x0006b9b6) bg_button_pane_cp015

0xd305,	// (0x00072126) bg_button_pane_cp016

0xd318,	// (0x00072139) bg_button_pane_cp017

0x28bd,	// (0x000676de) bg_popup_sub_pane_cp22

0x4aa9,	// (0x000698ca) popup_vitu2_query_window_g1

0x6bc8,	// (0x0006b9e9) popup_vitu2_query_window_g2

0x0002,

0xfa36,	// (0x00074857) popup_vitu2_query_window_g

0x6be5,	// (0x0006ba06) popup_vitu2_query_window_t1_ParamLimits

0x6be5,	// (0x0006ba06) popup_vitu2_query_window_t1

0x6c18,	// (0x0006ba39) popup_vitu2_query_window_t2_ParamLimits

0x6c18,	// (0x0006ba39) popup_vitu2_query_window_t2

0x6c2a,	// (0x0006ba4b) popup_vitu2_query_window_t3_ParamLimits

0x6c2a,	// (0x0006ba4b) popup_vitu2_query_window_t3

0xd33c,	// (0x0007215d) popup_vitu2_query_window_t4_ParamLimits

0xd33c,	// (0x0007215d) popup_vitu2_query_window_t4

0xd35d,	// (0x0007217e) popup_vitu2_query_window_t5_ParamLimits

0xd35d,	// (0x0007217e) popup_vitu2_query_window_t5

0x0006,

0xfa3d,	// (0x0007485e) popup_vitu2_query_window_t_ParamLimits

0xfa3d,	// (0x0007485e) popup_vitu2_query_window_t

0x493c,	// (0x0006975d) main_cset_text_pane

0xcd92,	// (0x00071bb3) aid_area_touch_slider_ParamLimits

0xcdae,	// (0x00071bcf) cset_slider_pane_ParamLimits

0xcdd8,	// (0x00071bf9) main_cset_slider_pane_g1_ParamLimits

0xcded,	// (0x00071c0e) main_cset_slider_pane_g2_ParamLimits

0x495d,	// (0x0006977e) main_cset_slider_pane_g3_ParamLimits

0x495d,	// (0x0006977e) main_cset_slider_pane_g3

0xce02,	// (0x00071c23) main_cset_slider_pane_g4_ParamLimits

0xce02,	// (0x00071c23) main_cset_slider_pane_g4

0xce11,	// (0x00071c32) main_cset_slider_pane_g5_ParamLimits

0xce11,	// (0x00071c32) main_cset_slider_pane_g5

0xce1f,	// (0x00071c40) main_cset_slider_pane_g6_ParamLimits

0xce1f,	// (0x00071c40) main_cset_slider_pane_g6

0xf990,	// (0x000747b1) main_cset_slider_pane_g_ParamLimits

0x498d,	// (0x000697ae) main_cset_slider_pane_t1_ParamLimits

0xceaf,	// (0x00071cd0) main_cset_slider_pane_t2_ParamLimits

0xcec9,	// (0x00071cea) main_cset_slider_pane_t3_ParamLimits

0xcee3,	// (0x00071d04) main_cset_slider_pane_t4_ParamLimits

0xcefd,	// (0x00071d1e) main_cset_slider_pane_t5_ParamLimits

0xcf1b,	// (0x00071d3c) main_cset_slider_pane_t6_ParamLimits

0xcf32,	// (0x00071d53) main_cset_slider_pane_t7_ParamLimits

0xcf60,	// (0x00071d81) main_cset_slider_pane_t8_ParamLimits

0xcf60,	// (0x00071d81) main_cset_slider_pane_t8

0xcf88,	// (0x00071da9) main_cset_slider_pane_t9_ParamLimits

0xcf88,	// (0x00071da9) main_cset_slider_pane_t9

0xcfb0,	// (0x00071dd1) main_cset_slider_pane_t10_ParamLimits

0xcfb0,	// (0x00071dd1) main_cset_slider_pane_t10

0xcfd8,	// (0x00071df9) main_cset_slider_pane_t11_ParamLimits

0xcfd8,	// (0x00071df9) main_cset_slider_pane_t11

0xd002,	// (0x00071e23) main_cset_slider_pane_t12_ParamLimits

0xd002,	// (0x00071e23) main_cset_slider_pane_t12

0xd01f,	// (0x00071e40) main_cset_slider_pane_t13_ParamLimits

0xd01f,	// (0x00071e40) main_cset_slider_pane_t13

0xf9b5,	// (0x000747d6) main_cset_slider_pane_t_ParamLimits

0x7850,	// (0x0006c671) bg_popup_sub_pane_cp011

0x4ab5,	// (0x000698d6) main_cset_text_pane_g1

0x4abd,	// (0x000698de) main_cset_text_pane_t1

0x4acb,	// (0x000698ec) main_cset_text_pane_t2

0x4ad9,	// (0x000698fa) main_cset_text_pane_t3

0x4ae7,	// (0x00069908) main_cset_text_pane_t4

0x4af5,	// (0x00069916) main_cset_text_pane_t5

0x4b03,	// (0x00069924) main_cset_text_pane_t6

0x4b11,	// (0x00069932) main_cset_text_pane_t7

0x0006,

0xfa4c,	// (0x0007486d) main_cset_text_pane_t

0x7850,	// (0x0006c671) main_cam4_burst_pane

0x7850,	// (0x0006c671) main_cam5_pane

0xcce1,	// (0x00071b02) bg_button_pane_cp019

0xccea,	// (0x00071b0b) bg_button_pane_cp020

0x4969,	// (0x0006978a) main_cset_slider_pane_g7_ParamLimits

0x4969,	// (0x0006978a) main_cset_slider_pane_g7

0x4975,	// (0x00069796) main_cset_slider_pane_g8_ParamLimits

0x4975,	// (0x00069796) main_cset_slider_pane_g8

0xce33,	// (0x00071c54) main_cset_slider_pane_g9_ParamLimits

0xce33,	// (0x00071c54) main_cset_slider_pane_g9

0xce3f,	// (0x00071c60) main_cset_slider_pane_g10_ParamLimits

0xce3f,	// (0x00071c60) main_cset_slider_pane_g10

0xce4b,	// (0x00071c6c) main_cset_slider_pane_g11_ParamLimits

0xce4b,	// (0x00071c6c) main_cset_slider_pane_g11

0xce57,	// (0x00071c78) main_cset_slider_pane_g12_ParamLimits

0xce57,	// (0x00071c78) main_cset_slider_pane_g12

0xce63,	// (0x00071c84) main_cset_slider_pane_g13_ParamLimits

0xce63,	// (0x00071c84) main_cset_slider_pane_g13

0xce6f,	// (0x00071c90) main_cset_slider_pane_g14_ParamLimits

0xce6f,	// (0x00071c90) main_cset_slider_pane_g14

0xce7b,	// (0x00071c9c) main_cset_slider_pane_g15_ParamLimits

0xce7b,	// (0x00071c9c) main_cset_slider_pane_g15

0x49c9,	// (0x000697ea) main_cset_slider_pane_t14_ParamLimits

0x49c9,	// (0x000697ea) main_cset_slider_pane_t14

0x4a02,	// (0x00069823) main_cset_slider_pane_t15_ParamLimits

0x4a02,	// (0x00069823) main_cset_slider_pane_t15

0xd37e,	// (0x0007219f) aid_cam4_burst_size_cell_ParamLimits

0xd37e,	// (0x0007219f) aid_cam4_burst_size_cell

0xd39a,	// (0x000721bb) grid_cam4_burst_pane_ParamLimits

0xd39a,	// (0x000721bb) grid_cam4_burst_pane

0xd3ca,	// (0x000721eb) linegrid_cam4_burst_pane_ParamLimits

0xd3ca,	// (0x000721eb) linegrid_cam4_burst_pane

0xd3ea,	// (0x0007220b) scroll_pane_cp30_ParamLimits

0xd3ea,	// (0x0007220b) scroll_pane_cp30

0xd3f6,	// (0x00072217) cell_cam4_burst_pane_ParamLimits

0xd3f6,	// (0x00072217) cell_cam4_burst_pane

0x4b1f,	// (0x00069940) linegrid_cam4_burst_pane_g1_ParamLimits

0x4b1f,	// (0x00069940) linegrid_cam4_burst_pane_g1

0xd432,	// (0x00072253) linegrid_cam4_burst_pane_g2_ParamLimits

0xd432,	// (0x00072253) linegrid_cam4_burst_pane_g2

0x4b2c,	// (0x0006994d) linegrid_cam4_burst_pane_g3_ParamLimits

0x4b2c,	// (0x0006994d) linegrid_cam4_burst_pane_g3

0x0002,

0xfa5b,	// (0x0007487c) linegrid_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0007487c) linegrid_cam4_burst_pane_g

0xd443,	// (0x00072264) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xd443,	// (0x00072264) linegrid_cam4_burst_pane_g3_copy1

0x4b39,	// (0x0006995a) linegrid_cam4_burst_pane_g4_ParamLimits

0x4b39,	// (0x0006995a) linegrid_cam4_burst_pane_g4

0xd45d,	// (0x0007227e) linegrid_cam4_burst_pane_g5_ParamLimits

0xd45d,	// (0x0007227e) linegrid_cam4_burst_pane_g5

0xd46e,	// (0x0007228f) linegrid_cam4_burst_pane_g6_ParamLimits

0xd46e,	// (0x0007228f) linegrid_cam4_burst_pane_g6

0x4b46,	// (0x00069967) linegrid_cam4_burst_pane_g7_ParamLimits

0x4b46,	// (0x00069967) linegrid_cam4_burst_pane_g7

0xd47f,	// (0x000722a0) cell_cam4_burst_pane_g1

0x4b5f,	// (0x00069980) main_cam5_pane_t1_ParamLimits

0x4b5f,	// (0x00069980) main_cam5_pane_t1

0x4b71,	// (0x00069992) main_cam5_pane_t2_ParamLimits

0x4b71,	// (0x00069992) main_cam5_pane_t2

0x4b83,	// (0x000699a4) main_cam5_pane_t3_ParamLimits

0x4b83,	// (0x000699a4) main_cam5_pane_t3

0x4b95,	// (0x000699b6) main_cam5_pane_t4_ParamLimits

0x4b95,	// (0x000699b6) main_cam5_pane_t4

0x4bad,	// (0x000699ce) main_cam5_pane_t5_ParamLimits

0x4bad,	// (0x000699ce) main_cam5_pane_t5

0x4bc1,	// (0x000699e2) main_cam5_pane_t6_ParamLimits

0x4bc1,	// (0x000699e2) main_cam5_pane_t6

0x4bd5,	// (0x000699f6) main_cam5_pane_t7_ParamLimits

0x4bd5,	// (0x000699f6) main_cam5_pane_t7

0x4be7,	// (0x00069a08) main_cam5_pane_t8_ParamLimits

0x4be7,	// (0x00069a08) main_cam5_pane_t8

0x4c03,	// (0x00069a24) main_cam5_pane_t9_ParamLimits

0x4c03,	// (0x00069a24) main_cam5_pane_t9

0x4c15,	// (0x00069a36) main_cam5_pane_t10_ParamLimits

0x4c15,	// (0x00069a36) main_cam5_pane_t10

0x4c27,	// (0x00069a48) main_cam5_pane_t11_ParamLimits

0x4c27,	// (0x00069a48) main_cam5_pane_t11

0x4c39,	// (0x00069a5a) main_cam5_pane_t12_ParamLimits

0x4c39,	// (0x00069a5a) main_cam5_pane_t12

0x4c4e,	// (0x00069a6f) main_cam5_pane_t13_ParamLimits

0x4c4e,	// (0x00069a6f) main_cam5_pane_t13

0x000c,

0xfa67,	// (0x00074888) main_cam5_pane_t_ParamLimits

0xfa67,	// (0x00074888) main_cam5_pane_t

0x7ac8,	// (0x0006c8e9) popup_scut_keymap_window_ParamLimits

0x7ac8,	// (0x0006c8e9) popup_scut_keymap_window

0xd492,	// (0x000722b3) aid_size_cell_brow_shortcut

0x147b,	// (0x0006629c) bg_popup_window_pane_cp010

0xd49e,	// (0x000722bf) grid_scut_pane

0xd4aa,	// (0x000722cb) cell_scut_pane_ParamLimits

0xd4aa,	// (0x000722cb) cell_scut_pane

0xd4c1,	// (0x000722e2) cell_scut_pane_g1

0x4c6b,	// (0x00069a8c) cell_scut_pane_t1

0x4c7a,	// (0x00069a9b) cell_scut_pane_t2

0xd4ca,	// (0x000722eb) cell_scut_pane_t3

0x0002,

0xfa82,	// (0x000748a3) cell_scut_pane_t

0xb523,	// (0x00070344) main_mup3_pane_g8_ParamLimits

0xb523,	// (0x00070344) main_mup3_pane_g8

0xc8f6,	// (0x00071717) area_vitu2_query_pane_ParamLimits

0xc8f6,	// (0x00071717) area_vitu2_query_pane

0x6ba7,	// (0x0006b9c8) input_focus_pane_cp08

0x4c89,	// (0x00069aaa) area_vitu2_query_pane_g1

0x6ca8,	// (0x0006bac9) area_vitu2_query_pane_g2

0x0001,

0xfa89,	// (0x000748aa) area_vitu2_query_pane_g

0xd4d8,	// (0x000722f9) area_vitu2_query_pane_t1_ParamLimits

0xd4d8,	// (0x000722f9) area_vitu2_query_pane_t1

0xd4ec,	// (0x0007230d) area_vitu2_query_pane_t2_ParamLimits

0xd4ec,	// (0x0007230d) area_vitu2_query_pane_t2

0x6cb9,	// (0x0006bada) area_vitu2_query_pane_t3_ParamLimits

0x6cb9,	// (0x0006bada) area_vitu2_query_pane_t3

0x6ce1,	// (0x0006bb02) area_vitu2_query_pane_t4_ParamLimits

0x6ce1,	// (0x0006bb02) area_vitu2_query_pane_t4

0x6d09,	// (0x0006bb2a) area_vitu2_query_pane_t5_ParamLimits

0x6d09,	// (0x0006bb2a) area_vitu2_query_pane_t5

0x6d31,	// (0x0006bb52) area_vitu2_query_pane_t6_ParamLimits

0x6d31,	// (0x0006bb52) area_vitu2_query_pane_t6

0x0006,

0xfa8e,	// (0x000748af) area_vitu2_query_pane_t_ParamLimits

0xfa8e,	// (0x000748af) area_vitu2_query_pane_t

0xd500,	// (0x00072321) bg_button_pane_cp018

0xd50e,	// (0x0007232f) bg_button_pane_cp021

0x6d7d,	// (0x0006bb9e) bg_button_pane_cp022

0x6d8e,	// (0x0006bbaf) input_focus_pane_cp09

0x9a5f,	// (0x0006e880) aid_size_touch_mv_arrow_left

0x9a88,	// (0x0006e8a9) aid_size_touch_mv_arrow_right

0xce93,	// (0x00071cb4) main_cset_slider_pane_g16_ParamLimits

0xce93,	// (0x00071cb4) main_cset_slider_pane_g16

0xcea1,	// (0x00071cc2) main_cset_slider_pane_g17_ParamLimits

0xcea1,	// (0x00071cc2) main_cset_slider_pane_g17

0xd47f,	// (0x000722a0) cell_cam4_burst_pane_g1_ParamLimits

0x7850,	// (0x0006c671) compa_mode_pane

0xd0b0,	// (0x00071ed1) popup_vtel_slider_window_g3_ParamLimits

0xd0b0,	// (0x00071ed1) popup_vtel_slider_window_g3

0xd0c4,	// (0x00071ee5) popup_vtel_slider_window_g4_ParamLimits

0xd0c4,	// (0x00071ee5) popup_vtel_slider_window_g4

0xd0d8,	// (0x00071ef9) popup_vtel_slider_window_t1_ParamLimits

0xd0d8,	// (0x00071ef9) popup_vtel_slider_window_t1

0x7850,	// (0x0006c671) main_cl_pane

0x28e5,	// (0x00067706) popup_imed_adjust2_window_ParamLimits

0x28bd,	// (0x000676de) bg_tb_trans_pane_cp05_ParamLimits

0x32c8,	// (0x000680e9) popup_imed_adjust2_window_g1_ParamLimits

0x32d7,	// (0x000680f8) popup_imed_adjust2_window_g2_ParamLimits

0x32d7,	// (0x000680f8) popup_imed_adjust2_window_g2

0x32e3,	// (0x00068104) popup_imed_adjust2_window_g3_ParamLimits

0x32e3,	// (0x00068104) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x0007461a) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x0007461a) popup_imed_adjust2_window_g

0x32ef,	// (0x00068110) popup_imed_adjust2_window_t1_ParamLimits

0x3307,	// (0x00068128) slider_imed_adjust_pane_ParamLimits

0x331b,	// (0x0006813c) slider_imed_adjust_pane_g1_ParamLimits

0x332b,	// (0x0006814c) slider_imed_adjust_pane_g2_ParamLimits

0x333b,	// (0x0006815c) slider_imed_adjust_pane_g3_ParamLimits

0x334c,	// (0x0006816d) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x00074621) slider_imed_adjust_pane_g_ParamLimits

0xc644,	// (0x00071465) aid_touch_area_cam4_ParamLimits

0xc644,	// (0x00071465) aid_touch_area_cam4

0xc654,	// (0x00071475) battery_pane_cp01

0xc6db,	// (0x000714fc) main_camera4_pane_g6_ParamLimits

0xc6db,	// (0x000714fc) main_camera4_pane_g6

0xc6f9,	// (0x0007151a) main_camera4_pane_t2_ParamLimits

0xc6f9,	// (0x0007151a) main_camera4_pane_t2

0x0001,

0xf903,	// (0x00074724) main_camera4_pane_t_ParamLimits

0xf903,	// (0x00074724) main_camera4_pane_t

0xc780,	// (0x000715a1) aid_touch_area_vid4_ParamLimits

0xc780,	// (0x000715a1) aid_touch_area_vid4

0xc7c0,	// (0x000715e1) main_video4_pane_g5_ParamLimits

0xc7c0,	// (0x000715e1) main_video4_pane_g5

0xc7e2,	// (0x00071603) vid4_progress_pane_ParamLimits

0xc7e2,	// (0x00071603) vid4_progress_pane

0x4981,	// (0x000697a2) main_cset_slider_pane_g18_ParamLimits

0x4981,	// (0x000697a2) main_cset_slider_pane_g18

0x4b53,	// (0x00069974) cell_cam4_burst_pane_g2_ParamLimits

0x4b53,	// (0x00069974) cell_cam4_burst_pane_g2

0x0001,

0xfa62,	// (0x00074883) cell_cam4_burst_pane_g_ParamLimits

0xfa62,	// (0x00074883) cell_cam4_burst_pane_g

0xd51a,	// (0x0007233b) bg_cl_pane_ParamLimits

0xd51a,	// (0x0007233b) bg_cl_pane

0xd526,	// (0x00072347) cl_header_pane_ParamLimits

0xd526,	// (0x00072347) cl_header_pane

0xd532,	// (0x00072353) cl_listscroll_pane_ParamLimits

0xd532,	// (0x00072353) cl_listscroll_pane

0x4c95,	// (0x00069ab6) bg_cl_pane_g1

0x4c9d,	// (0x00069abe) bg_cl_pane_g2

0x4ca5,	// (0x00069ac6) bg_cl_pane_g3

0x4cad,	// (0x00069ace) bg_cl_pane_g4

0x4cb5,	// (0x00069ad6) bg_cl_pane_g5

0x4cbd,	// (0x00069ade) bg_cl_pane_g6

0x4cc5,	// (0x00069ae6) bg_cl_pane_g7

0x4ccd,	// (0x00069aee) bg_cl_pane_g8

0x4cd5,	// (0x00069af6) bg_cl_pane_g9

0x0008,

0xfa9d,	// (0x000748be) bg_cl_pane_g

0xd53e,	// (0x0007235f) aid_height_cl_leading_ParamLimits

0xd53e,	// (0x0007235f) aid_height_cl_leading

0xd54a,	// (0x0007236b) aid_height_cl_text_ParamLimits

0xd54a,	// (0x0007236b) aid_height_cl_text

0x7aff,	// (0x0006c920) bg_cl_header_pane_ParamLimits

0x7aff,	// (0x0006c920) bg_cl_header_pane

0xd562,	// (0x00072383) cl_header_pane_g1_ParamLimits

0xd562,	// (0x00072383) cl_header_pane_g1

0xd56f,	// (0x00072390) cl_header_pane_t1_ParamLimits

0xd56f,	// (0x00072390) cl_header_pane_t1

0x4cdd,	// (0x00069afe) cl_list_pane

0x4954,	// (0x00069775) hc_scroll_pane_cp01

0x0cd1,	// (0x00065af2) bg_cl_header_pane_g1

0x483a,	// (0x0006965b) bg_cl_header_pane_g2

0x0cf1,	// (0x00065b12) bg_cl_header_pane_g3

0x484a,	// (0x0006966b) bg_cl_header_pane_g4

0x4842,	// (0x00069663) bg_cl_header_pane_g5

0x4a6c,	// (0x0006988d) bg_cl_header_pane_g6

0x4862,	// (0x00069683) bg_cl_header_pane_g7

0x486a,	// (0x0006968b) bg_cl_header_pane_g8

0x485a,	// (0x0006967b) bg_cl_header_pane_g9

0x0008,

0xfab0,	// (0x000748d1) bg_cl_header_pane_g

0xd581,	// (0x000723a2) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xd581,	// (0x000723a2) hc_cl_list_double_graphic_heading_pane

0xd592,	// (0x000723b3) hc_cl_list_single_graphic_pane_ParamLimits

0xd592,	// (0x000723b3) hc_cl_list_single_graphic_pane

0xd5ab,	// (0x000723cc) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xd5ab,	// (0x000723cc) hc_cl_list_single_graphic_pane_g1

0xd5b7,	// (0x000723d8) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xd5b7,	// (0x000723d8) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac3,	// (0x000748e4) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac3,	// (0x000748e4) hc_cl_list_single_graphic_pane_g

0xd5cb,	// (0x000723ec) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xd5cb,	// (0x000723ec) hc_cl_list_single_graphic_pane_t1

0xd5ab,	// (0x000723cc) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xd5ab,	// (0x000723cc) hc_cl_list_double_graphic_heading_pane_g1

0xd5e0,	// (0x00072401) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xd5e0,	// (0x00072401) hc_cl_list_double_graphic_heading_pane_g2

0xd5f4,	// (0x00072415) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xd5f4,	// (0x00072415) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac8,	// (0x000748e9) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac8,	// (0x000748e9) hc_cl_list_double_graphic_heading_pane_g

0xd608,	// (0x00072429) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd608,	// (0x00072429) hc_cl_list_double_graphic_heading_pane_t1

0xd61d,	// (0x0007243e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd61d,	// (0x0007243e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfacf,	// (0x000748f0) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfacf,	// (0x000748f0) hc_cl_list_double_graphic_heading_pane_t

0xd63a,	// (0x0007245b) vid4_progress_pane_g1

0xd64a,	// (0x0007246b) vid4_progress_pane_g2

0xa0c1,	// (0x0006eee2) vid4_progress_pane_g3

0xd65a,	// (0x0007247b) vid4_progress_pane_g4

0x0004,

0xfad4,	// (0x000748f5) vid4_progress_pane_g

0xd678,	// (0x00072499) vid4_progress_pane_t1

0xd68d,	// (0x000724ae) vid4_progress_pane_t2

0x0002,

0xfadf,	// (0x00074900) vid4_progress_pane_t

0xd6b8,	// (0x000724d9) wait_bar_pane_cp07

0x2bb6,	// (0x000679d7) blid_firmament_pane_ParamLimits

0x2bf9,	// (0x00067a1a) popup_blid_sat_info2_window_g1

0x2c1d,	// (0x00067a3e) popup_blid_sat_info2_window_t3

0x2c2b,	// (0x00067a4c) popup_blid_sat_info2_window_t4

0x2c39,	// (0x00067a5a) popup_blid_sat_info2_window_t5

0x2c47,	// (0x00067a68) popup_blid_sat_info2_window_t6

0x2c57,	// (0x00067a78) popup_blid_sat_info2_window_t7

0x2c65,	// (0x00067a86) popup_blid_sat_info2_window_t8

0x2c73,	// (0x00067a94) popup_blid_sat_info2_window_t9

0x2c81,	// (0x00067aa2) popup_blid_sat_info2_window_t10

0x2d43,	// (0x00067b64) aid_firma_cardinal_ParamLimits

0x2d57,	// (0x00067b78) blid_firmament_pane_t1_ParamLimits

0x2d6e,	// (0x00067b8f) blid_firmament_pane_t2_ParamLimits

0x2d85,	// (0x00067ba6) blid_firmament_pane_t3_ParamLimits

0x2d9c,	// (0x00067bbd) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x00074513) blid_firmament_pane_t_ParamLimits

0x2db3,	// (0x00067bd4) blid_sat_info_pane_ParamLimits

0x00aa,	// (0x00064ecb) main_cam_set_pane_ParamLimits

0xbccd,	// (0x00070aee) aid_size_cell_colour_35_ParamLimits

0xbce7,	// (0x00070b08) aid_size_cell_colour_112_ParamLimits

0xbcfe,	// (0x00070b1f) aid_size_cell_effect_ParamLimits

0x00aa,	// (0x00064ecb) bg_tb_trans_pane_cp02_ParamLimits

0x0ff2,	// (0x00065e13) heading_imed_pane_ParamLimits

0xbd18,	// (0x00070b39) listscroll_imed_pane_ParamLimits

0x1eef,	// (0x00066d10) popup_call2_audio_first_window_g5_ParamLimits

0x1eef,	// (0x00066d10) popup_call2_audio_first_window_g5

0xc401,	// (0x00071222) aid_size_touch_image3_arrow_left_ParamLimits

0xc401,	// (0x00071222) aid_size_touch_image3_arrow_left

0xc417,	// (0x00071238) aid_size_touch_image3_arrow_right_ParamLimits

0xc417,	// (0x00071238) aid_size_touch_image3_arrow_right

0xd6a3,	// (0x000724c4) vid4_progress_pane_t3

0xbfb6,	// (0x00070dd7) main_hwr_training_symbol_option_pane_ParamLimits

0xbfb6,	// (0x00070dd7) main_hwr_training_symbol_option_pane

0x35b5,	// (0x000683d6) popup_hwr_training_preview_window_ParamLimits

0x35b5,	// (0x000683d6) popup_hwr_training_preview_window

0xc017,	// (0x00070e38) hwr_training_navi_pane_g5_ParamLimits

0xc017,	// (0x00070e38) hwr_training_navi_pane_g5

0x4828,	// (0x00069649) popup_char_count_window

0x7aff,	// (0x0006c920) bg_popup_sub_pane_cp20_ParamLimits

0xd1ce,	// (0x00071fef) list_vitu2_match_list_pane_ParamLimits

0xd1da,	// (0x00071ffb) vitu2_page_scroll_pane_ParamLimits

0xd1da,	// (0x00071ffb) vitu2_page_scroll_pane

0x4ce6,	// (0x00069b07) list_single_hwr_training_symbol_option_pane_ParamLimits

0x4ce6,	// (0x00069b07) list_single_hwr_training_symbol_option_pane

0x4cf9,	// (0x00069b1a) list_single_hwr_training_symbol_option_pane_g1

0x4d01,	// (0x00069b22) list_single_hwr_training_symbol_option_pane_t1

0x4d0f,	// (0x00069b30) bg_button_pane_cp023

0x4d18,	// (0x00069b39) bg_button_pane_cp024

0xd6d2,	// (0x000724f3) vitu2_page_scroll_pane_g1

0xd6da,	// (0x000724fb) vitu2_page_scroll_pane_g2

0x0001,

0xfae6,	// (0x00074907) vitu2_page_scroll_pane_g

0xd6e2,	// (0x00072503) vitu2_page_scroll_pane_t1

0x4d4b,	// (0x00069b6c) popup_char_count_window_g1

0x4d54,	// (0x00069b75) popup_char_count_window_g2

0x4d5d,	// (0x00069b7e) popup_char_count_window_g3

0x0002,

0xfaeb,	// (0x0007490c) popup_char_count_window_g

0x4d66,	// (0x00069b87) popup_char_count_window_t1

0x7850,	// (0x0006c671) main_vded2_pane

0x32b4,	// (0x000680d5) aid_size_cell_imed_line

0x32be,	// (0x000680df) grid_imed_line_width_pane

0xc84b,	// (0x0007166c) vid4_indicators_pane_g4

0x4d74,	// (0x00069b95) cell_imed_line_width_pane_ParamLimits

0x4d74,	// (0x00069b95) cell_imed_line_width_pane

0x4d88,	// (0x00069ba9) cell_imed_line_width_pane_g1

0x2b64,	// (0x00067985) cell_imed_line_width_pane_g2

0x0001,

0xfaf2,	// (0x00074913) cell_imed_line_width_pane_g

0xd6f1,	// (0x00072512) main_vded2_pane_g1_ParamLimits

0xd6f1,	// (0x00072512) main_vded2_pane_g1

0xd6fe,	// (0x0007251f) main_vded2_pane_g2_ParamLimits

0xd6fe,	// (0x0007251f) main_vded2_pane_g2

0x0001,

0xfaf7,	// (0x00074918) main_vded2_pane_g_ParamLimits

0xfaf7,	// (0x00074918) main_vded2_pane_g

0xd70c,	// (0x0007252d) vded2_slider_pane_ParamLimits

0xd70c,	// (0x0007252d) vded2_slider_pane

0xd719,	// (0x0007253a) aid_size_touch_vded2_end

0xd723,	// (0x00072544) aid_size_touch_vded2_playhead

0x4d91,	// (0x00069bb2) aid_size_touch_vded2_start

0x4d99,	// (0x00069bba) vded2_slider_bg_pane

0x4da2,	// (0x00069bc3) vded2_slider_pane_g1

0x4dab,	// (0x00069bcc) vded2_slider_pane_g2

0xd72b,	// (0x0007254c) vded2_slider_pane_g3

0x0002,

0xfafc,	// (0x0007491d) vded2_slider_pane_g

0x4db3,	// (0x00069bd4) vded2_slider_bg_pane_g1

0x4dbc,	// (0x00069bdd) vded2_slider_bg_pane_g2

0x4dc5,	// (0x00069be6) vded2_slider_bg_pane_g3

0x0002,

0xfb03,	// (0x00074924) vded2_slider_bg_pane_g

0xa0d9,	// (0x0006eefa) aid_postcard_touch_down_pane_ParamLimits

0xa0d9,	// (0x0006eefa) aid_postcard_touch_down_pane

0xa0e9,	// (0x0006ef0a) aid_postcard_touch_up_pane_ParamLimits

0xa0e9,	// (0x0006ef0a) aid_postcard_touch_up_pane

0x7850,	// (0x0006c671) main_blid2_pane

0x28cb,	// (0x000676ec) popup_blid2_search_window

0x7850,	// (0x0006c671) blid2_gps_pane

0x7850,	// (0x0006c671) blid2_navig_pane

0x7850,	// (0x0006c671) blid2_search_pane

0x7850,	// (0x0006c671) blid2_tripm_pane

0xd734,	// (0x00072555) blid2_search_pane_g1_ParamLimits

0xd734,	// (0x00072555) blid2_search_pane_g1

0xd744,	// (0x00072565) blid2_search_pane_t1_ParamLimits

0xd744,	// (0x00072565) blid2_search_pane_t1

0xd756,	// (0x00072577) aid_size_cell_blid2_gps_ParamLimits

0xd756,	// (0x00072577) aid_size_cell_blid2_gps

0xd766,	// (0x00072587) blid2_gps_pane_g1_ParamLimits

0xd766,	// (0x00072587) blid2_gps_pane_g1

0xd772,	// (0x00072593) grid_blid2_satellite_pane_ParamLimits

0xd772,	// (0x00072593) grid_blid2_satellite_pane

0xd782,	// (0x000725a3) blid2_navig_pane_g1_ParamLimits

0xd782,	// (0x000725a3) blid2_navig_pane_g1

0xd78e,	// (0x000725af) blid2_navig_pane_t1_ParamLimits

0xd78e,	// (0x000725af) blid2_navig_pane_t1

0xd7a0,	// (0x000725c1) blid2_navig_pane_t2_ParamLimits

0xd7a0,	// (0x000725c1) blid2_navig_pane_t2

0x0001,

0xfb0a,	// (0x0007492b) blid2_navig_pane_t_ParamLimits

0xfb0a,	// (0x0007492b) blid2_navig_pane_t

0xd7b2,	// (0x000725d3) blid2_navig_ring_pane_ParamLimits

0xd7b2,	// (0x000725d3) blid2_navig_ring_pane

0xd7c2,	// (0x000725e3) blid2_speed_pane_ParamLimits

0xd7c2,	// (0x000725e3) blid2_speed_pane

0xd7ce,	// (0x000725ef) blid2_tripm_pane_g1_ParamLimits

0xd7ce,	// (0x000725ef) blid2_tripm_pane_g1

0xd7de,	// (0x000725ff) blid2_tripm_pane_g2_ParamLimits

0xd7de,	// (0x000725ff) blid2_tripm_pane_g2

0xd7ea,	// (0x0007260b) blid2_tripm_pane_g3_ParamLimits

0xd7ea,	// (0x0007260b) blid2_tripm_pane_g3

0xd7f6,	// (0x00072617) blid2_tripm_pane_g4_ParamLimits

0xd7f6,	// (0x00072617) blid2_tripm_pane_g4

0xd802,	// (0x00072623) blid2_tripm_pane_g5_ParamLimits

0xd802,	// (0x00072623) blid2_tripm_pane_g5

0x0005,

0xfb0f,	// (0x00074930) blid2_tripm_pane_g_ParamLimits

0xfb0f,	// (0x00074930) blid2_tripm_pane_g

0xd81e,	// (0x0007263f) blid2_tripm_pane_t1_ParamLimits

0xd81e,	// (0x0007263f) blid2_tripm_pane_t1

0xd832,	// (0x00072653) blid2_tripm_pane_t2_ParamLimits

0xd832,	// (0x00072653) blid2_tripm_pane_t2

0xd844,	// (0x00072665) blid2_tripm_pane_t3_ParamLimits

0xd844,	// (0x00072665) blid2_tripm_pane_t3

0x0003,

0xfb1c,	// (0x0007493d) blid2_tripm_pane_t_ParamLimits

0xfb1c,	// (0x0007493d) blid2_tripm_pane_t

0xd876,	// (0x00072697) cell_blid2_satellite_pane_ParamLimits

0xd876,	// (0x00072697) cell_blid2_satellite_pane

0xd890,	// (0x000726b1) cell_blid2_satellite_pane_g1

0x4dce,	// (0x00069bef) cell_blid2_satellite_pane_t1

0x2dc3,	// (0x00067be4) blid2_speed_pane_g1

0x4ddc,	// (0x00069bfd) blid2_speed_pane_t1

0x4dea,	// (0x00069c0b) blid2_speed_pane_t2

0x0001,

0xfb25,	// (0x00074946) blid2_speed_pane_t

0x2dc3,	// (0x00067be4) blid2_navig_ring_pane_g1

0xd899,	// (0x000726ba) blid2_navig_ring_pane_g2

0xd8a1,	// (0x000726c2) blid2_navig_ring_pane_g3

0xd8a9,	// (0x000726ca) blid2_navig_ring_pane_g4

0xd8b1,	// (0x000726d2) blid2_navig_ring_pane_g5

0x0004,

0xfb2a,	// (0x0007494b) blid2_navig_ring_pane_g

0x7850,	// (0x0006c671) bg_popup_window_pane_cp011

0x4df8,	// (0x00069c19) popup_blid2_search_window_g1

0x4e00,	// (0x00069c21) popup_blid2_search_window_t1

0x4e0e,	// (0x00069c2f) popup_blid2_search_window_t2

0x0001,

0xfb35,	// (0x00074956) popup_blid2_search_window_t

0x0be0,	// (0x00065a01) main_browser_pane_g1

0x0825,	// (0x00065646) main_browser_pane_ParamLimits

0x00aa,	// (0x00064ecb) bg_button_pane_cp011_ParamLimits

0xcab4,	// (0x000718d5) cell_vitu2_function_pane_g1_ParamLimits

0x28bd,	// (0x000676de) bg_popup_sub_pane_cp22_ParamLimits

0x6ba7,	// (0x0006b9c8) input_focus_pane_cp08_ParamLimits

0xd32b,	// (0x0007214c) popup_vitu2_query_button_pane_ParamLimits

0xd32b,	// (0x0007214c) popup_vitu2_query_button_pane

0x6bbe,	// (0x0006b9df) popup_vitu2_query_input_button_pane

0x4aa9,	// (0x000698ca) popup_vitu2_query_window_g1_ParamLimits

0x6bc8,	// (0x0006b9e9) popup_vitu2_query_window_g2_ParamLimits

0xfa36,	// (0x00074857) popup_vitu2_query_window_g_ParamLimits

0x7850,	// (0x0006c671) bg_button_pane_cp026

0xd8b9,	// (0x000726da) popup_vitu2_query_input_button_pane_g1

0x7850,	// (0x0006c671) bg_button_pane_cp025

0x4e1c,	// (0x00069c3d) popup_vitu2_query_button_pane_t1

0xb226,	// (0x00070047) main_mp3_pane_t6

0xb236,	// (0x00070057) popup_slider_window_cp01

0xc72f,	// (0x00071550) cam4_battery_pane

0xc80e,	// (0x0007162f) cam4_battery_pane_cp02

0xd632,	// (0x00072453) cam4_battery_pane_cp01

0xd632,	// (0x00072453) cam4_battery_pane_cp03

0x2dc3,	// (0x00067be4) cam4_battery_pane_g1

0x46de,	// (0x000694ff) cam4_battery_pane_g2

0x0001,

0xfb3a,	// (0x0007495b) cam4_battery_pane_g

0x2c8f,	// (0x00067ab0) popup_blid_sat_info2_window_t11

0x9a5f,	// (0x0006e880) aid_size_touch_mv_arrow_left_ParamLimits

0x9a88,	// (0x0006e8a9) aid_size_touch_mv_arrow_right_ParamLimits

0x13db,	// (0x000661fc) navi_pane_g1_ParamLimits

0x9ac7,	// (0x0006e8e8) navi_pane_g2_ParamLimits

0x9af5,	// (0x0006e916) navi_pane_g3_ParamLimits

0xf404,	// (0x00074225) navi_pane_g_ParamLimits

0x9b4f,	// (0x0006e970) navi_pane_mv_t1_ParamLimits

0xbd24,	// (0x00070b45) grid_imed_effect_pane_ParamLimits

0x8817,	// (0x0006d638) aid_placing_vt_slider_lsc

0x0b2f,	// (0x00065950) aid_placing_vt_slider_prt

0x00aa,	// (0x00064ecb) bg_tb_trans_pane_cp01_ParamLimits

0x2f4f,	// (0x00067d70) popup_image_details_window_g1_ParamLimits

0x2f62,	// (0x00067d83) popup_image_details_window_g2_ParamLimits

0x2f77,	// (0x00067d98) popup_image_details_window_g3_ParamLimits

0x2f77,	// (0x00067d98) popup_image_details_window_g3

0xf737,	// (0x00074558) popup_image_details_window_g_ParamLimits

0x2f8b,	// (0x00067dac) popup_image_details_window_t1_ParamLimits

0x2f9d,	// (0x00067dbe) popup_image_details_window_t2_ParamLimits

0x2fb6,	// (0x00067dd7) popup_image_details_window_t3_ParamLimits

0x2fca,	// (0x00067deb) popup_image_details_window_t4_ParamLimits

0x2fe5,	// (0x00067e06) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x0007455f) popup_image_details_window_t_ParamLimits

0xd556,	// (0x00072377) cl_header_name_pane_ParamLimits

0xd556,	// (0x00072377) cl_header_name_pane

0xd8c1,	// (0x000726e2) cl_header_name_pane_t1_ParamLimits

0xd8c1,	// (0x000726e2) cl_header_name_pane_t1

0xd8d8,	// (0x000726f9) cl_header_name_pane_t2_ParamLimits

0xd8d8,	// (0x000726f9) cl_header_name_pane_t2

0xd902,	// (0x00072723) cl_header_name_pane_t3_ParamLimits

0xd902,	// (0x00072723) cl_header_name_pane_t3

0x0002,

0xfb3f,	// (0x00074960) cl_header_name_pane_t_ParamLimits

0xfb3f,	// (0x00074960) cl_header_name_pane_t

0x9b20,	// (0x0006e941) navi_pane_mv_g2_ParamLimits

0x4802,	// (0x00069623) field_vitu2_entry_pane_g1_ParamLimits

0x480e,	// (0x0006962f) field_vitu2_entry_pane_g2_ParamLimits

0x481a,	// (0x0006963b) field_vitu2_entry_pane_g3_ParamLimits

0x481a,	// (0x0006963b) field_vitu2_entry_pane_g3

0xf935,	// (0x00074756) field_vitu2_entry_pane_g_ParamLimits

0xca44,	// (0x00071865) cell_vitu2_itu_pane_g1_ParamLimits

0xca54,	// (0x00071875) cell_vitu2_itu_pane_g2_ParamLimits

0xca54,	// (0x00071875) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x00074762) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x00074762) cell_vitu2_itu_pane_g

0x00aa,	// (0x00064ecb) bg_vkb2_func_pane_cp05_ParamLimits

0x00aa,	// (0x00064ecb) bg_vkb2_func_pane_cp05

0x00aa,	// (0x00064ecb) bg_vkb2_func_pane_cp03

0x00aa,	// (0x00064ecb) bg_vkb2_func_pane_cp04

0x00aa,	// (0x00064ecb) bg_vkb2_func_pane_cp10_ParamLimits

0x00aa,	// (0x00064ecb) bg_vkb2_func_pane_cp10

0x6d7d,	// (0x0006bb9e) bg_vkb2_func_pane_cp08

0xd500,	// (0x00072321) bg_vkb2_func_pane_cp06

0xd50e,	// (0x0007232f) bg_vkb2_func_pane_cp07

0x4d21,	// (0x00069b42) bg_vkb2_func_pane_cp11_ParamLimits

0x4d21,	// (0x00069b42) bg_vkb2_func_pane_cp11

0x4d36,	// (0x00069b57) bg_vkb2_func_pane_cp12_ParamLimits

0x4d36,	// (0x00069b57) bg_vkb2_func_pane_cp12

0x7850,	// (0x0006c671) bg_vkb2_func_pane_cp09

0x483a,	// (0x0006965b) bg_vkb2_func_pane_g1

0x0cf1,	// (0x00065b12) bg_vkb2_func_pane_g2

0x4842,	// (0x00069663) bg_vkb2_func_pane_g3

0x484a,	// (0x0006966b) bg_vkb2_func_pane_g4

0x4a6c,	// (0x0006988d) bg_vkb2_func_pane_g5

0x4862,	// (0x00069683) bg_vkb2_func_pane_g6

0x486a,	// (0x0006968b) bg_vkb2_func_pane_g7

0x485a,	// (0x0006967b) bg_vkb2_func_pane_g8

0x0cd1,	// (0x00065af2) bg_vkb2_func_pane_g9

0x0008,

0xfb46,	// (0x00074967) bg_vkb2_func_pane_g

0xd810,	// (0x00072631) blid2_tripm_pane_g6_ParamLimits

0xd810,	// (0x00072631) blid2_tripm_pane_g6

0x4698,	// (0x000694b9) mp4_progress_pane_g1

0xd86a,	// (0x0007268b) blid2_tripm_values_pane_ParamLimits

0xd86a,	// (0x0007268b) blid2_tripm_values_pane

0xd927,	// (0x00072748) blid2_tripm_values_pane_t1

0xd935,	// (0x00072756) blid2_tripm_values_pane_t2

0xd943,	// (0x00072764) blid2_tripm_values_pane_t3

0xd951,	// (0x00072772) blid2_tripm_values_pane_t4

0xd95f,	// (0x00072780) blid2_tripm_values_pane_t5

0xd96d,	// (0x0007278e) blid2_tripm_values_pane_t6

0xd97b,	// (0x0007279c) blid2_tripm_values_pane_t7

0xd989,	// (0x000727aa) blid2_tripm_values_pane_t8

0xd997,	// (0x000727b8) blid2_tripm_values_pane_t9

0x0008,

0xfb59,	// (0x0007497a) blid2_tripm_values_pane_t

0x8857,	// (0x0006d678) call_video_pane_t1_ParamLimits

0x8878,	// (0x0006d699) call_video_pane_t2_ParamLimits

0xf28d,	// (0x000740ae) call_video_pane_t_ParamLimits

0x6964,	// (0x0006b785) msg_header_pane_g1_ParamLimits

0x1616,	// (0x00066437) msg_header_pane_g2_ParamLimits

0x1616,	// (0x00066437) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x000742c8) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x000742c8) msg_header_pane_g

0x0825,	// (0x00065646) main_clock2_pane_ParamLimits

0xbaca,	// (0x000708eb) grid_clock2_toolbar_pane_ParamLimits

0xbaca,	// (0x000708eb) grid_clock2_toolbar_pane

0xbaca,	// (0x000708eb) listscroll_clock2_pane_ParamLimits

0xbaca,	// (0x000708eb) listscroll_clock2_pane

0xbb61,	// (0x00070982) main_clock2_pane_t3_ParamLimits

0xbb61,	// (0x00070982) main_clock2_pane_t3

0xbb73,	// (0x00070994) main_clock2_pane_t4_ParamLimits

0xbb73,	// (0x00070994) main_clock2_pane_t4

0x4e2a,	// (0x00069c4b) cell_clock2_toolbar_pane

0x4e32,	// (0x00069c53) cell_clock2_toolbar_pane_cp01

0x4e32,	// (0x00069c53) cell_clock2_toolbar_pane_cp02

0x4e3a,	// (0x00069c5b) cell_clock2_toolbar_pane_cp03

0x4e42,	// (0x00069c63) list_clock2_pane

0x1332,	// (0x00066153) scroll_pane_cp10

0x4e4a,	// (0x00069c6b) list_single_clock2_pane_ParamLimits

0x4e4a,	// (0x00069c6b) list_single_clock2_pane

0x147b,	// (0x0006629c) list_highlight_pane_cp08

0x4e57,	// (0x00069c78) list_single_clock2_pane_t1

0x4e65,	// (0x00069c86) list_single_clock2_pane_t2

0x0001,

0xfb6c,	// (0x0007498d) list_single_clock2_pane_t

0x7850,	// (0x0006c671) bg_button_pane_cp10

0x4e73,	// (0x00069c94) cell_clock2_toolbar_pane_g1

0xa03b,	// (0x0006ee5c) aid_main_viewer_pane_g1_ParamLimits

0xa03b,	// (0x0006ee5c) aid_main_viewer_pane_g1

0xa047,	// (0x0006ee68) aid_main_viewer_pane_g2_ParamLimits

0xa047,	// (0x0006ee68) aid_main_viewer_pane_g2

0xa053,	// (0x0006ee74) aid_main_viewer_pane_g3_ParamLimits

0xa053,	// (0x0006ee74) aid_main_viewer_pane_g3

0xa064,	// (0x0006ee85) aid_main_viewer_pane_g4_ParamLimits

0xa064,	// (0x0006ee85) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x000742d9) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x000742d9) aid_main_viewer_pane_g

0xa7e4,	// (0x0006f605) main_calc_pane_ParamLimits

0xa7f1,	// (0x0006f612) main_dialer2_pane_ParamLimits

0x7850,	// (0x0006c671) main_cam6_pane

0x7850,	// (0x0006c671) main_vid6_pane

0xbad6,	// (0x000708f7) listscroll_gen_pane_cp06_ParamLimits

0xbad6,	// (0x000708f7) listscroll_gen_pane_cp06

0xbb85,	// (0x000709a6) main_clock2_pane_t5_ParamLimits

0xbb85,	// (0x000709a6) main_clock2_pane_t5

0xbbce,	// (0x000709ef) aid_call2_pane_cp10_ParamLimits

0xbbe0,	// (0x00070a01) aid_call_pane_cp10_ParamLimits

0x13b0,	// (0x000661d1) popup_clock_analogue_window_cp10_g1_ParamLimits

0x13b0,	// (0x000661d1) popup_clock_analogue_window_cp10_g2_ParamLimits

0xbbf2,	// (0x00070a13) popup_clock_analogue_window_cp10_g3_ParamLimits

0xbbf2,	// (0x00070a13) popup_clock_analogue_window_cp10_g4_ParamLimits

0x13b0,	// (0x000661d1) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x0007460f) popup_clock_analogue_window_cp10_g_ParamLimits

0xbc04,	// (0x00070a25) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc3ae,	// (0x000711cf) cell_dialer2_keypad_pane_g2_ParamLimits

0xc3ae,	// (0x000711cf) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x000746f5) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x000746f5) cell_dialer2_keypad_pane_g

0xc3ca,	// (0x000711eb) cell_dialer2_keypad_pane_t1

0xcd7f,	// (0x00071ba0) main_cset_text2_pane_ParamLimits

0xcd7f,	// (0x00071ba0) main_cset_text2_pane

0x4c89,	// (0x00069aaa) area_vitu2_query_pane_g1_ParamLimits

0x6ca8,	// (0x0006bac9) area_vitu2_query_pane_g2_ParamLimits

0xfa89,	// (0x000748aa) area_vitu2_query_pane_g_ParamLimits

0x6d59,	// (0x0006bb7a) area_vitu2_query_pane_t7_ParamLimits

0x6d59,	// (0x0006bb7a) area_vitu2_query_pane_t7

0xd500,	// (0x00072321) bg_button_pane_cp018_ParamLimits

0xd50e,	// (0x0007232f) bg_button_pane_cp021_ParamLimits

0x6d7d,	// (0x0006bb9e) bg_button_pane_cp022_ParamLimits

0x6d7d,	// (0x0006bb9e) bg_vkb2_func_pane_cp08_ParamLimits

0xd500,	// (0x00072321) bg_vkb2_func_pane_cp06_ParamLimits

0xd50e,	// (0x0007232f) bg_vkb2_func_pane_cp07_ParamLimits

0x6d8e,	// (0x0006bbaf) input_focus_pane_cp09_ParamLimits

0xd9a5,	// (0x000727c6) cam6_autofocus_pane_ParamLimits

0xd9a5,	// (0x000727c6) cam6_autofocus_pane

0xd9c7,	// (0x000727e8) cam6_image_uncrop_pane_ParamLimits

0xd9c7,	// (0x000727e8) cam6_image_uncrop_pane

0xd9f4,	// (0x00072815) cam6_indi_pane_ParamLimits

0xd9f4,	// (0x00072815) cam6_indi_pane

0xda0e,	// (0x0007282f) cam6_mode_pane_ParamLimits

0xda0e,	// (0x0007282f) cam6_mode_pane

0xda22,	// (0x00072843) cam6_timer_pane_ParamLimits

0xda22,	// (0x00072843) cam6_timer_pane

0xda2e,	// (0x0007284f) cam6_zoom_pane_ParamLimits

0xda2e,	// (0x0007284f) cam6_zoom_pane

0xc790,	// (0x000715b1) cam6_mode_pane_g1_ParamLimits

0xc790,	// (0x000715b1) cam6_mode_pane_g1

0xc7a8,	// (0x000715c9) cam6_mode_pane_g2_ParamLimits

0xc7a8,	// (0x000715c9) cam6_mode_pane_g2

0xc7b4,	// (0x000715d5) cam6_mode_pane_g3_ParamLimits

0xc7b4,	// (0x000715d5) cam6_mode_pane_g3

0xc7c0,	// (0x000715e1) cam6_mode_pane_g4_ParamLimits

0xc7c0,	// (0x000715e1) cam6_mode_pane_g4

0x0003,

0xfb71,	// (0x00074992) cam6_mode_pane_g_ParamLimits

0xfb71,	// (0x00074992) cam6_mode_pane_g

0x49bb,	// (0x000697dc) bg_tb_trans_pane_cp08_ParamLimits

0x49bb,	// (0x000697dc) bg_tb_trans_pane_cp08

0x4e7b,	// (0x00069c9c) cam6_battery_pane_ParamLimits

0x4e7b,	// (0x00069c9c) cam6_battery_pane

0x4e91,	// (0x00069cb2) cam6_indi_pane_g1_ParamLimits

0x4e91,	// (0x00069cb2) cam6_indi_pane_g1

0x4ea3,	// (0x00069cc4) cam6_indi_pane_g2_ParamLimits

0x4ea3,	// (0x00069cc4) cam6_indi_pane_g2

0x4eb5,	// (0x00069cd6) cam6_indi_pane_g3_ParamLimits

0x4eb5,	// (0x00069cd6) cam6_indi_pane_g3

0x0002,

0xfb7a,	// (0x0007499b) cam6_indi_pane_g_ParamLimits

0xfb7a,	// (0x0007499b) cam6_indi_pane_g

0x4ec7,	// (0x00069ce8) cam6_indi_pane_t1_ParamLimits

0x4ec7,	// (0x00069ce8) cam6_indi_pane_t1

0xc880,	// (0x000716a1) cam6_autofocus_pane_g1

0xc888,	// (0x000716a9) cam6_autofocus_pane_g2

0xc890,	// (0x000716b1) cam6_autofocus_pane_g3

0xc898,	// (0x000716b9) cam6_autofocus_pane_g4

0x0003,

0xfb81,	// (0x000749a2) cam6_autofocus_pane_g

0x4eed,	// (0x00069d0e) cam6_timer_pane_g1

0x4ef5,	// (0x00069d16) cam6_timer_pane_t1

0x4f03,	// (0x00069d24) cam6_zoom_cont_pane

0x4f0b,	// (0x00069d2c) cam6_zoom_pane_g1

0x4f13,	// (0x00069d34) cam6_zoom_pane_g2

0xda46,	// (0x00072867) cam6_zoom_pane_g3

0x0002,

0xfb8a,	// (0x000749ab) cam6_zoom_pane_g

0x2dc3,	// (0x00067be4) cam6_battery_pane_g1

0x2dc3,	// (0x00067be4) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x0007451c) cam6_battery_pane_g

0x4f1b,	// (0x00069d3c) cam6_zoom_cont_pane_g1

0x4f24,	// (0x00069d45) cam6_zoom_cont_pane_g2

0x4f2d,	// (0x00069d4e) cam6_zoom_cont_pane_g3

0x0002,

0xfb91,	// (0x000749b2) cam6_zoom_cont_pane_g

0xda63,	// (0x00072884) cam6_mode_pane_cp_ParamLimits

0xda63,	// (0x00072884) cam6_mode_pane_cp

0xda2e,	// (0x0007284f) cam6_zoom_pane_cp_ParamLimits

0xda2e,	// (0x0007284f) cam6_zoom_pane_cp

0xda77,	// (0x00072898) vid6_image_uncrop_cif_pane_ParamLimits

0xda77,	// (0x00072898) vid6_image_uncrop_cif_pane

0xdaa3,	// (0x000728c4) vid6_image_uncrop_nhd_pane_ParamLimits

0xdaa3,	// (0x000728c4) vid6_image_uncrop_nhd_pane

0xd9c7,	// (0x000727e8) vid6_image_uncrop_vga_pane_ParamLimits

0xd9c7,	// (0x000727e8) vid6_image_uncrop_vga_pane

0xdac0,	// (0x000728e1) vid6_image_uncrop_wvga_pane_ParamLimits

0xdac0,	// (0x000728e1) vid6_image_uncrop_wvga_pane

0xdadd,	// (0x000728fe) vid6_indi_pane_ParamLimits

0xdadd,	// (0x000728fe) vid6_indi_pane

0x49bb,	// (0x000697dc) bg_tb_trans_pane_cp09_ParamLimits

0x49bb,	// (0x000697dc) bg_tb_trans_pane_cp09

0x4f45,	// (0x00069d66) cam6_battery_pane_cp_ParamLimits

0x4f45,	// (0x00069d66) cam6_battery_pane_cp

0x4f51,	// (0x00069d72) vid6_indi_pane_g1_ParamLimits

0x4f51,	// (0x00069d72) vid6_indi_pane_g1

0x4f63,	// (0x00069d84) vid6_indi_pane_g2_ParamLimits

0x4f63,	// (0x00069d84) vid6_indi_pane_g2

0x4f75,	// (0x00069d96) vid6_indi_pane_g3_ParamLimits

0x4f75,	// (0x00069d96) vid6_indi_pane_g3

0x4f8a,	// (0x00069dab) vid6_indi_pane_g4_ParamLimits

0x4f8a,	// (0x00069dab) vid6_indi_pane_g4

0x4f9f,	// (0x00069dc0) vid6_indi_pane_g5_ParamLimits

0x4f9f,	// (0x00069dc0) vid6_indi_pane_g5

0x0004,

0xfb98,	// (0x000749b9) vid6_indi_pane_g_ParamLimits

0xfb98,	// (0x000749b9) vid6_indi_pane_g

0x4fb9,	// (0x00069dda) vid6_indi_pane_t1_ParamLimits

0x4fb9,	// (0x00069dda) vid6_indi_pane_t1

0x4fcf,	// (0x00069df0) vid6_indi_pane_t2_ParamLimits

0x4fcf,	// (0x00069df0) vid6_indi_pane_t2

0x4ff7,	// (0x00069e18) vid6_indi_pane_t3_ParamLimits

0x4ff7,	// (0x00069e18) vid6_indi_pane_t3

0x501f,	// (0x00069e40) vid6_indi_pane_t4_ParamLimits

0x501f,	// (0x00069e40) vid6_indi_pane_t4

0x0003,

0xfba3,	// (0x000749c4) vid6_indi_pane_t_ParamLimits

0xfba3,	// (0x000749c4) vid6_indi_pane_t

0x5043,	// (0x00069e64) wait_bar_pane_cp08

0xdb02,	// (0x00072923) main_cset_text2_pane_t1_ParamLimits

0xdb02,	// (0x00072923) main_cset_text2_pane_t1

0xda4e,	// (0x0007286f) listscroll_gen_pane_cp06_t1_ParamLimits

0xda4e,	// (0x0007286f) listscroll_gen_pane_cp06_t1

0x7850,	// (0x0006c671) main_cam6_set_pane

0x302f,	// (0x00067e50) bg_tb_trans_pane_cp06_ParamLimits

0xc737,	// (0x00071558) cam4_indicators_pane_g1_ParamLimits

0xc748,	// (0x00071569) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x00074732) cam4_indicators_pane_g_ParamLimits

0xc766,	// (0x00071587) cam4_indicators_pane_t1_ParamLimits

0x00aa,	// (0x00064ecb) bg_tb_trans_pane_cp07_ParamLimits

0xc818,	// (0x00071639) vid4_indicators_pane_g1_ParamLimits

0xc829,	// (0x0007164a) vid4_indicators_pane_g2_ParamLimits

0xc83a,	// (0x0007165b) vid4_indicators_pane_g3_ParamLimits

0xc84b,	// (0x0007166c) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x00074744) vid4_indicators_pane_g_ParamLimits

0xc867,	// (0x00071688) vid4_indicators_pane_t1_ParamLimits

0xd63a,	// (0x0007245b) vid4_progress_pane_g1_ParamLimits

0xd64a,	// (0x0007246b) vid4_progress_pane_g2_ParamLimits

0xa0c1,	// (0x0006eee2) vid4_progress_pane_g3_ParamLimits

0xd65a,	// (0x0007247b) vid4_progress_pane_g4_ParamLimits

0xfad4,	// (0x000748f5) vid4_progress_pane_g_ParamLimits

0xd678,	// (0x00072499) vid4_progress_pane_t1_ParamLimits

0xd68d,	// (0x000724ae) vid4_progress_pane_t2_ParamLimits

0xd6a3,	// (0x000724c4) vid4_progress_pane_t3_ParamLimits

0xfadf,	// (0x00074900) vid4_progress_pane_t_ParamLimits

0xd6b8,	// (0x000724d9) wait_bar_pane_cp07_ParamLimits

0xdb35,	// (0x00072956) main_cam6_set_pane_g2_ParamLimits

0xdb35,	// (0x00072956) main_cam6_set_pane_g2

0xdb41,	// (0x00072962) main_cset6_listscroll_pane_ParamLimits

0xdb41,	// (0x00072962) main_cset6_listscroll_pane

0xdb6c,	// (0x0007298d) main_cset6_slider_pane_ParamLimits

0xdb6c,	// (0x0007298d) main_cset6_slider_pane

0xdb78,	// (0x00072999) main_cset6_text2_pane_ParamLimits

0xdb78,	// (0x00072999) main_cset6_text2_pane

0x505e,	// (0x00069e7f) main_cset6_text_pane

0x5066,	// (0x00069e87) main_cset_list_pane_copy1_ParamLimits

0x5066,	// (0x00069e87) main_cset_list_pane_copy1

0x5076,	// (0x00069e97) scroll_pane_cp028_copy1

0xdb8b,	// (0x000729ac) cset_list_set_pane_copy1

0xdb9e,	// (0x000729bf) aid_position_infowindow_above_copy1

0xdba6,	// (0x000729c7) aid_position_infowindow_below_copy1

0xdbae,	// (0x000729cf) cset_list_set_pane_g1_copy1

0x6b1c,	// (0x0006b93d) cset_list_set_pane_g3_copy1_ParamLimits

0x6b1c,	// (0x0006b93d) cset_list_set_pane_g3_copy1

0x6b2b,	// (0x0006b94c) cset_list_set_pane_t1_copy1_ParamLimits

0x6b2b,	// (0x0006b94c) cset_list_set_pane_t1_copy1

0x00aa,	// (0x00064ecb) list_highlight_pane_cp021_copy1_ParamLimits

0x00aa,	// (0x00064ecb) list_highlight_pane_cp021_copy1

0x507f,	// (0x00069ea0) cset6_slider_pane_ParamLimits

0x507f,	// (0x00069ea0) cset6_slider_pane

0x50ab,	// (0x00069ecc) main_cset6_slider_pane_g1_ParamLimits

0x50ab,	// (0x00069ecc) main_cset6_slider_pane_g1

0xdbb6,	// (0x000729d7) main_cset6_slider_pane_g2_ParamLimits

0xdbb6,	// (0x000729d7) main_cset6_slider_pane_g2

0x50d3,	// (0x00069ef4) main_cset6_slider_pane_g3_ParamLimits

0x50d3,	// (0x00069ef4) main_cset6_slider_pane_g3

0xdbde,	// (0x000729ff) main_cset6_slider_pane_g4_ParamLimits

0xdbde,	// (0x000729ff) main_cset6_slider_pane_g4

0xdbea,	// (0x00072a0b) main_cset6_slider_pane_g5_ParamLimits

0xdbea,	// (0x00072a0b) main_cset6_slider_pane_g5

0x4969,	// (0x0006978a) main_cset6_slider_pane_g7_ParamLimits

0x4969,	// (0x0006978a) main_cset6_slider_pane_g7

0x4975,	// (0x00069796) main_cset6_slider_pane_g8_ParamLimits

0x4975,	// (0x00069796) main_cset6_slider_pane_g8

0xdbf8,	// (0x00072a19) main_cset6_slider_pane_g9_ParamLimits

0xdbf8,	// (0x00072a19) main_cset6_slider_pane_g9

0xdc04,	// (0x00072a25) main_cset6_slider_pane_g10_ParamLimits

0xdc04,	// (0x00072a25) main_cset6_slider_pane_g10

0xdc10,	// (0x00072a31) main_cset6_slider_pane_g11_ParamLimits

0xdc10,	// (0x00072a31) main_cset6_slider_pane_g11

0xdc1c,	// (0x00072a3d) main_cset6_slider_pane_g12_ParamLimits

0xdc1c,	// (0x00072a3d) main_cset6_slider_pane_g12

0xdc28,	// (0x00072a49) main_cset6_slider_pane_g13_ParamLimits

0xdc28,	// (0x00072a49) main_cset6_slider_pane_g13

0xdc34,	// (0x00072a55) main_cset6_slider_pane_g14_ParamLimits

0xdc34,	// (0x00072a55) main_cset6_slider_pane_g14

0xdc40,	// (0x00072a61) main_cset6_slider_pane_g15_ParamLimits

0xdc40,	// (0x00072a61) main_cset6_slider_pane_g15

0xdc58,	// (0x00072a79) main_cset6_slider_pane_g16_ParamLimits

0xdc58,	// (0x00072a79) main_cset6_slider_pane_g16

0xdc66,	// (0x00072a87) main_cset6_slider_pane_g17_ParamLimits

0xdc66,	// (0x00072a87) main_cset6_slider_pane_g17

0x0011,

0xfbac,	// (0x000749cd) main_cset6_slider_pane_g_ParamLimits

0xfbac,	// (0x000749cd) main_cset6_slider_pane_g

0x50df,	// (0x00069f00) main_cset6_slider_pane_t1_ParamLimits

0x50df,	// (0x00069f00) main_cset6_slider_pane_t1

0xdc8c,	// (0x00072aad) main_cset6_slider_pane_t2_ParamLimits

0xdc8c,	// (0x00072aad) main_cset6_slider_pane_t2

0xdcb7,	// (0x00072ad8) main_cset6_slider_pane_t3_ParamLimits

0xdcb7,	// (0x00072ad8) main_cset6_slider_pane_t3

0xdce2,	// (0x00072b03) main_cset6_slider_pane_t4_ParamLimits

0xdce2,	// (0x00072b03) main_cset6_slider_pane_t4

0xdd0d,	// (0x00072b2e) main_cset6_slider_pane_t5_ParamLimits

0xdd0d,	// (0x00072b2e) main_cset6_slider_pane_t5

0x5120,	// (0x00069f41) main_cset6_slider_pane_t7_ParamLimits

0x5120,	// (0x00069f41) main_cset6_slider_pane_t7

0xdd3a,	// (0x00072b5b) main_cset6_slider_pane_t8_ParamLimits

0xdd3a,	// (0x00072b5b) main_cset6_slider_pane_t8

0xdd5e,	// (0x00072b7f) main_cset6_slider_pane_t9_ParamLimits

0xdd5e,	// (0x00072b7f) main_cset6_slider_pane_t9

0xdd82,	// (0x00072ba3) main_cset6_slider_pane_t10_ParamLimits

0xdd82,	// (0x00072ba3) main_cset6_slider_pane_t10

0xdda6,	// (0x00072bc7) main_cset6_slider_pane_t11_ParamLimits

0xdda6,	// (0x00072bc7) main_cset6_slider_pane_t11

0x5156,	// (0x00069f77) main_cset6_slider_pane_t14_ParamLimits

0x5156,	// (0x00069f77) main_cset6_slider_pane_t14

0x518f,	// (0x00069fb0) main_cset6_slider_pane_t15_ParamLimits

0x518f,	// (0x00069fb0) main_cset6_slider_pane_t15

0x000b,

0xfbd1,	// (0x000749f2) main_cset6_slider_pane_t_ParamLimits

0xfbd1,	// (0x000749f2) main_cset6_slider_pane_t

0x51c8,	// (0x00069fe9) cset_slider_pane_g1_copy1

0x51d1,	// (0x00069ff2) cset_slider_pane_g2_copy1

0x51da,	// (0x00069ffb) cset_slider_pane_g3_copy1

0x7850,	// (0x0006c671) bg_popup_sub_pane_cp011_copy1

0x4ab5,	// (0x000698d6) main_cset_text_pane_g1_copy1

0x4abd,	// (0x000698de) main_cset_text_pane_t1_copy1

0x4acb,	// (0x000698ec) main_cset_text_pane_t2_copy1

0x4ad9,	// (0x000698fa) main_cset_text_pane_t3_copy1

0x4ae7,	// (0x00069908) main_cset_text_pane_t4_copy1

0x4af5,	// (0x00069916) main_cset_text_pane_t5_copy1

0x4b03,	// (0x00069924) main_cset_text_pane_t6_copy1

0x4b11,	// (0x00069932) main_cset_text_pane_t7_copy1

0xddca,	// (0x00072beb) main_cset_text2_pane_t1_copy1

0x7850,	// (0x0006c671) main_ncimui_pane

0xa830,	// (0x0006f651) popup_query_ncimui_window_ParamLimits

0xa830,	// (0x0006f651) popup_query_ncimui_window

0xb387,	// (0x000701a8) field_cale_ev2_pane_g4_ParamLimits

0xb387,	// (0x000701a8) field_cale_ev2_pane_g4

0xc0ce,	// (0x00070eef) cell_video_dialer_keypad_pane_g2_ParamLimits

0xc0ce,	// (0x00070eef) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x000746d0) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x000746d0) cell_video_dialer_keypad_pane_g

0xc0e6,	// (0x00070f07) cell_video_dialer_keypad_pane_t1

0x7850,	// (0x0006c671) bg_popup_window_pane_cp012

0x120f,	// (0x00066030) heading_pane_cp06

0x5201,	// (0x0006a022) ncim_query_content_pane

0x7850,	// (0x0006c671) bg_popup_heading_pane_cp01

0x5209,	// (0x0006a02a) ncim_heading_pane_t1

0x5217,	// (0x0006a038) ncim_indicator_popup_pane

0x5229,	// (0x0006a04a) ncim_query_button_pane

0x523d,	// (0x0006a05e) ncim_query_content_pane_t1

0x524f,	// (0x0006a070) ncim_query_content_pane_t2

0x0005,

0xfc10,	// (0x00074a31) ncim_query_content_pane_t

0x5289,	// (0x0006a0aa) ncim_query_list_pane

0x529b,	// (0x0006a0bc) ncim_query_popup_pane

0x5217,	// (0x0006a038) ncim_indicator_popup_pane_ParamLimits

0xdeec,	// (0x00072d0d) ncim_query_content_pane_g1_ParamLimits

0xdeec,	// (0x00072d0d) ncim_query_content_pane_g1

0x523d,	// (0x0006a05e) ncim_query_content_pane_t1_ParamLimits

0x524f,	// (0x0006a070) ncim_query_content_pane_t2_ParamLimits

0xdef8,	// (0x00072d19) ncim_query_content_pane_t3_ParamLimits

0xdef8,	// (0x00072d19) ncim_query_content_pane_t3

0xdf15,	// (0x00072d36) ncim_query_content_pane_t4_ParamLimits

0xdf15,	// (0x00072d36) ncim_query_content_pane_t4

0xdf32,	// (0x00072d53) ncim_query_content_pane_t5_ParamLimits

0xdf32,	// (0x00072d53) ncim_query_content_pane_t5

0x5261,	// (0x0006a082) ncim_query_content_pane_t6_ParamLimits

0x5261,	// (0x0006a082) ncim_query_content_pane_t6

0xfc10,	// (0x00074a31) ncim_query_content_pane_t_ParamLimits

0x5289,	// (0x0006a0aa) ncim_query_list_pane_ParamLimits

0x529b,	// (0x0006a0bc) ncim_query_popup_pane_ParamLimits

0x52af,	// (0x0006a0d0) wait_bar_pane_cp04

0x7850,	// (0x0006c671) input_focus_pane_cp011

0x52b7,	// (0x0006a0d8) ncim_query_popup_pane_t1

0x52c5,	// (0x0006a0e6) ncim_list_query_list_pane_ParamLimits

0x52c5,	// (0x0006a0e6) ncim_list_query_list_pane

0x7850,	// (0x0006c671) bg_button_pane_cp027

0x52d2,	// (0x0006a0f3) ncim_query_button_pane_g1

0x7850,	// (0x0006c671) list_highlight_pane_cp012

0x52dc,	// (0x0006a0fd) ncim_list_query_list_pane_g1

0x52e4,	// (0x0006a105) ncim_list_query_list_pane_t1

0xc757,	// (0x00071578) cam4_indicators_pane_g3_ParamLimits

0xc757,	// (0x00071578) cam4_indicators_pane_g3

0xc857,	// (0x00071678) vid4_indicators_pane_g5_ParamLimits

0xc857,	// (0x00071678) vid4_indicators_pane_g5

0xd669,	// (0x0007248a) vid4_progress_pane_g5_ParamLimits

0xd669,	// (0x0007248a) vid4_progress_pane_g5

0xde05,	// (0x00072c26) main_ncimui_pane_g1

0xde5b,	// (0x00072c7c) ncimui_group_query_pane_ParamLimits

0xde5b,	// (0x00072c7c) ncimui_group_query_pane

0xde97,	// (0x00072cb8) ncimui_list_pane_ParamLimits

0xde97,	// (0x00072cb8) ncimui_list_pane

0xdeb8,	// (0x00072cd9) ncimui_text_pane_ParamLimits

0xdeb8,	// (0x00072cd9) ncimui_text_pane

0xdf4f,	// (0x00072d70) ncimui_text_pane_t1_ParamLimits

0xdf4f,	// (0x00072d70) ncimui_text_pane_t1

0x52f2,	// (0x0006a113) ncimui_list_single_graphic_pane_ParamLimits

0x52f2,	// (0x0006a113) ncimui_list_single_graphic_pane

0xdf6e,	// (0x00072d8f) ncimui_query_pane_ParamLimits

0xdf6e,	// (0x00072d8f) ncimui_query_pane

0x7850,	// (0x0006c671) list_highlight_pane_cp013

0x5302,	// (0x0006a123) ncim_list_query_list_pane_t1_copy1

0x52dc,	// (0x0006a0fd) ncim_list_single_graphic_pane_g1

0x5310,	// (0x0006a131) ncim_query_button_pane_cp01

0x531c,	// (0x0006a13d) ncim_query_entry_pane_ParamLimits

0x531c,	// (0x0006a13d) ncim_query_entry_pane

0x532f,	// (0x0006a150) ncimui_query_pane_g1

0x533b,	// (0x0006a15c) ncimui_query_pane_t1_ParamLimits

0x533b,	// (0x0006a15c) ncimui_query_pane_t1

0x00aa,	// (0x00064ecb) input_focus_pane_cp012

0x5354,	// (0x0006a175) ncim_query_entry_pane_t1

0x0825,	// (0x00065646) main_im_pane_ParamLimits

0x00aa,	// (0x00064ecb) main_mobtv_pane_ParamLimits

0x00aa,	// (0x00064ecb) main_mobtv_pane

0xdc74,	// (0x00072a95) main_cset6_slider_pane_g18_ParamLimits

0xdc74,	// (0x00072a95) main_cset6_slider_pane_g18

0xdc80,	// (0x00072aa1) main_cset6_slider_pane_g19_ParamLimits

0xdc80,	// (0x00072aa1) main_cset6_slider_pane_g19

0x481a,	// (0x0006963b) bg_main_mobtv_pane_ParamLimits

0x481a,	// (0x0006963b) bg_main_mobtv_pane

0xdf81,	// (0x00072da2) main_mobtv_info_pane

0xdf8c,	// (0x00072dad) main_mobtv_loading_pane_ParamLimits

0xdf8c,	// (0x00072dad) main_mobtv_loading_pane

0x5366,	// (0x0006a187) main_mobtv_pg_channel_list_pane

0x5370,	// (0x0006a191) main_mobtv_pg_hdr_pane

0xdf99,	// (0x00072dba) main_mobtv_programe_curr_pane_ParamLimits

0xdf99,	// (0x00072dba) main_mobtv_programe_curr_pane

0xdfa6,	// (0x00072dc7) main_mobtv_programe_next_pane_ParamLimits

0xdfa6,	// (0x00072dc7) main_mobtv_programe_next_pane

0x5379,	// (0x0006a19a) popup_mobtv_noti_window

0x2dc3,	// (0x00067be4) main_tv_pg_hdr_pane_g1

0x5381,	// (0x0006a1a2) main_tv_pg_hdr_pane_g2

0x5389,	// (0x0006a1aa) main_tv_pg_hdr_pane_g3

0x53a3,	// (0x0006a1c4) main_tv_pg_hdr_pane_g4

0x53ab,	// (0x0006a1cc) main_tv_pg_hdr_pane_g5

0x53b5,	// (0x0006a1d6) main_tv_pg_hdr_pane_g6

0x53bf,	// (0x0006a1e0) main_tv_pg_hdr_pane_g7

0x53c9,	// (0x0006a1ea) main_tv_pg_hdr_pane_g8

0x53d3,	// (0x0006a1f4) main_tv_pg_hdr_pane_g9

0x53dd,	// (0x0006a1fe) main_tv_pg_hdr_pane_g10

0x53e7,	// (0x0006a208) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1d,	// (0x00074a3e) main_tv_pg_hdr_pane_g

0x53f1,	// (0x0006a212) main_tv_pg_hdr_pane_t1

0x53ff,	// (0x0006a220) main_tv_pg_hdr_pane_t2

0x540d,	// (0x0006a22e) main_tv_pg_hdr_pane_t3

0x541d,	// (0x0006a23e) main_tv_pg_hdr_pane_t4

0x542d,	// (0x0006a24e) main_tv_pg_hdr_pane_t5

0x0004,

0xfc34,	// (0x00074a55) main_tv_pg_hdr_pane_t

0x543d,	// (0x0006a25e) single_mobtv_pg_channel_pane_ParamLimits

0x543d,	// (0x0006a25e) single_mobtv_pg_channel_pane

0x544f,	// (0x0006a270) single_mobtv_pg_channel_table_pane

0x5458,	// (0x0006a279) single_mobtv_pg_channel_thumb_pane

0x5461,	// (0x0006a282) single_tv_pg_channel_pane_g1

0x546a,	// (0x0006a28b) single_tv_pg_channel_pane_g2

0x0001,

0xfc3f,	// (0x00074a60) single_tv_pg_channel_pane_g

0x302f,	// (0x00067e50) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x302f,	// (0x00067e50) bg_single_mobtv_pg_channel_thumb_pane

0x5473,	// (0x0006a294) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x5473,	// (0x0006a294) single_mobtv_pg_channel_thumb_pane_g1

0x5481,	// (0x0006a2a2) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x5481,	// (0x0006a2a2) single_mobtv_pg_channel_thumb_pane_g2

0x548d,	// (0x0006a2ae) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x548d,	// (0x0006a2ae) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc44,	// (0x00074a65) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc44,	// (0x00074a65) single_mobtv_pg_channel_thumb_pane_g

0x5499,	// (0x0006a2ba) single_mobtv_pg_channel_thumb_pane_t1

0x54a7,	// (0x0006a2c8) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc4b,	// (0x00074a6c) single_mobtv_pg_channel_thumb_pane_t

0x2dc3,	// (0x00067be4) bg_single_mobtv_pg_channel_table_pane_g1

0x2dc3,	// (0x00067be4) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x0007451c) bg_single_mobtv_pg_channel_table_pane_g

0x54b5,	// (0x0006a2d6) single_mobtv_pg_channel_table_pane_t1

0x54c3,	// (0x0006a2e4) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc50,	// (0x00074a71) single_mobtv_pg_channel_table_pane_t

0xdfbb,	// (0x00072ddc) main_mobtv_info_pane_g1_ParamLimits

0xdfbb,	// (0x00072ddc) main_mobtv_info_pane_g1

0xdfd7,	// (0x00072df8) main_mobtv_info_pane_t1_ParamLimits

0xdfd7,	// (0x00072df8) main_mobtv_info_pane_t1

0xe04f,	// (0x00072e70) main_mobtv_info_pane_t2_ParamLimits

0xe04f,	// (0x00072e70) main_mobtv_info_pane_t2

0x0002,

0xfc5a,	// (0x00074a7b) main_mobtv_info_pane_t_ParamLimits

0xfc5a,	// (0x00074a7b) main_mobtv_info_pane_t

0xe0de,	// (0x00072eff) wait_bar_pane_cp05

0xe0f0,	// (0x00072f11) main_mobtv_loading_pane_g1_ParamLimits

0xe0f0,	// (0x00072f11) main_mobtv_loading_pane_g1

0xe0fe,	// (0x00072f1f) main_mobtv_loading_pane_g2_ParamLimits

0xe0fe,	// (0x00072f1f) main_mobtv_loading_pane_g2

0xe10a,	// (0x00072f2b) main_mobtv_loading_pane_g3_ParamLimits

0xe10a,	// (0x00072f2b) main_mobtv_loading_pane_g3

0x0002,

0xfc61,	// (0x00074a82) main_mobtv_loading_pane_g_ParamLimits

0xfc61,	// (0x00074a82) main_mobtv_loading_pane_g

0x54d1,	// (0x0006a2f2) main_mobtv_loading_pane_t1_ParamLimits

0x54d1,	// (0x0006a2f2) main_mobtv_loading_pane_t1

0x54e9,	// (0x0006a30a) main_mobtv_loading_pane_t2_ParamLimits

0x54e9,	// (0x0006a30a) main_mobtv_loading_pane_t2

0x0001,

0xfc68,	// (0x00074a89) main_mobtv_loading_pane_t_ParamLimits

0xfc68,	// (0x00074a89) main_mobtv_loading_pane_t

0xe118,	// (0x00072f39) wait_bar_pane_cp06_ParamLimits

0xe118,	// (0x00072f39) wait_bar_pane_cp06

0x550d,	// (0x0006a32e) main_mobtv_programe_curr_pane_t1

0x551b,	// (0x0006a33c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6d,	// (0x00074a8e) main_mobtv_programe_curr_pane_t

0x5529,	// (0x0006a34a) main_mobtv_programe_next_pane_t1

0x5537,	// (0x0006a358) main_mobtv_programe_next_pane_t2

0x5545,	// (0x0006a366) main_mobtv_programe_next_pane_t3

0x0002,

0xfc72,	// (0x00074a93) main_mobtv_programe_next_pane_t

0x7850,	// (0x0006c671) bg_popup_mobtv_noti_window_pane

0x5553,	// (0x0006a374) popup_mobtv_noti_window_g1

0x555b,	// (0x0006a37c) popup_mobtv_noti_window_t1

0x5569,	// (0x0006a38a) popup_mobtv_noti_window_t2

0x0001,

0xfc79,	// (0x00074a9a) popup_mobtv_noti_window_t

0x2dc3,	// (0x00067be4) bg_popup_mobtv_noti_window_pane_g1

0x7850,	// (0x0006c671) sc_clock_pane

0x7850,	// (0x0006c671) main_fs_bigclock_pane

0xd858,	// (0x00072679) blid2_tripm_pane_t4_ParamLimits

0xd858,	// (0x00072679) blid2_tripm_pane_t4

0xe124,	// (0x00072f45) sc_clock_pane_g1_ParamLimits

0xe124,	// (0x00072f45) sc_clock_pane_g1

0xe132,	// (0x00072f53) sc_clock_pane_t1_ParamLimits

0xe132,	// (0x00072f53) sc_clock_pane_t1

0xe145,	// (0x00072f66) sc_clock_pane_t2_ParamLimits

0xe145,	// (0x00072f66) sc_clock_pane_t2

0xe157,	// (0x00072f78) sc_clock_pane_t3_ParamLimits

0xe157,	// (0x00072f78) sc_clock_pane_t3

0x0004,

0xfc7e,	// (0x00074a9f) sc_clock_pane_t_ParamLimits

0xfc7e,	// (0x00074a9f) sc_clock_pane_t

0xe937,	// (0x00073758) main_fs_bigclock_indicator_pane_ParamLimits

0xe937,	// (0x00073758) main_fs_bigclock_indicator_pane

0xe1e4,	// (0x00073005) main_fs_bigclock_pane_g1_ParamLimits

0xe1e4,	// (0x00073005) main_fs_bigclock_pane_g1

0xe943,	// (0x00073764) main_fs_bigclock_pane_t1_ParamLimits

0xe943,	// (0x00073764) main_fs_bigclock_pane_t1

0xe955,	// (0x00073776) main_fs_bigclock_pane_t2_ParamLimits

0xe955,	// (0x00073776) main_fs_bigclock_pane_t2

0xe969,	// (0x0007378a) main_fs_bigclock_pane_t3_ParamLimits

0xe969,	// (0x0007378a) main_fs_bigclock_pane_t3

0x0002,

0xfe82,	// (0x00074ca3) main_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x00074ca3) main_fs_bigclock_pane_t

0x3de7,	// (0x00068c08) main_fs_bigclock_indicator_pane_g1

0x5231,	// (0x0006a052) ncim_query_content_pane_g2_ParamLimits

0x5231,	// (0x0006a052) ncim_query_content_pane_g2

0x0001,

0xfc0b,	// (0x00074a2c) ncim_query_content_pane_g_ParamLimits

0xfc0b,	// (0x00074a2c) ncim_query_content_pane_g

0xe16b,	// (0x00072f8c) sc_clock_pane_t4_ParamLimits

0xe16b,	// (0x00072f8c) sc_clock_pane_t4

0x00aa,	// (0x00064ecb) main_radioblah_pane

0x478b,	// (0x000695ac) cell_call4_button_pane_t1_copy1_ParamLimits

0x478b,	// (0x000695ac) cell_call4_button_pane_t1_copy1

0xde0d,	// (0x00072c2e) main_ncimui_pane_t1_ParamLimits

0xde0d,	// (0x00072c2e) main_ncimui_pane_t1

0xde27,	// (0x00072c48) main_ncimui_pane_t2_ParamLimits

0xde27,	// (0x00072c48) main_ncimui_pane_t2

0x0002,

0xfc04,	// (0x00074a25) main_ncimui_pane_t_ParamLimits

0xfc04,	// (0x00074a25) main_ncimui_pane_t

0x56af,	// (0x0006a4d0) main_radioblah_anim_pane_ParamLimits

0x56af,	// (0x0006a4d0) main_radioblah_anim_pane

0x56c0,	// (0x0006a4e1) main_radioblah_info_pane_ParamLimits

0x56c0,	// (0x0006a4e1) main_radioblah_info_pane

0x56d4,	// (0x0006a4f5) main_radioblah_pane_t1_ParamLimits

0x56d4,	// (0x0006a4f5) main_radioblah_pane_t1

0x56f0,	// (0x0006a511) main_radioblah_pane_t2_ParamLimits

0x56f0,	// (0x0006a511) main_radioblah_pane_t2

0x0003,

0xfc9f,	// (0x00074ac0) main_radioblah_pane_t_ParamLimits

0xfc9f,	// (0x00074ac0) main_radioblah_pane_t

0xe236,	// (0x00073057) main_radioblah_rocker_ctrl_pane_ParamLimits

0xe236,	// (0x00073057) main_radioblah_rocker_ctrl_pane

0x5738,	// (0x0006a559) main_radioblah_info_pane_t1_ParamLimits

0x5738,	// (0x0006a559) main_radioblah_info_pane_t1

0xe27b,	// (0x0007309c) main_radioblah_info_pane_t2_ParamLimits

0xe27b,	// (0x0007309c) main_radioblah_info_pane_t2

0x0003,

0xfca8,	// (0x00074ac9) main_radioblah_info_pane_t_ParamLimits

0xfca8,	// (0x00074ac9) main_radioblah_info_pane_t

0x2dc3,	// (0x00067be4) main_radioblah_rocker_ctrl_pane_g1

0xe32b,	// (0x0007314c) main_radioblah_rocker_ctrl_pane_g2

0xe333,	// (0x00073154) main_radioblah_rocker_ctrl_pane_g3

0xe33b,	// (0x0007315c) main_radioblah_rocker_ctrl_pane_g4

0xe343,	// (0x00073164) main_radioblah_rocker_ctrl_pane_g5

0xe34b,	// (0x0007316c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb1,	// (0x00074ad2) main_radioblah_rocker_ctrl_pane_g

0xddca,	// (0x00072beb) main_cset_text2_pane_t1_copy1_ParamLimits

0xc685,	// (0x000714a6) cam4_image_uncrop_qvga_pane

0xc7cc,	// (0x000715ed) vid4_image_uncrop_qcif_pane

0xd9e6,	// (0x00072807) cam6_image_uncrop_qvga_pane_ParamLimits

0xd9e6,	// (0x00072807) cam6_image_uncrop_qvga_pane

0x4f35,	// (0x00069d56) vid6_image_uncrop_qcif_pane_ParamLimits

0x4f35,	// (0x00069d56) vid6_image_uncrop_qcif_pane

0x7850,	// (0x0006c671) bg_popup_preview_window_pane_cp03

0x51e3,	// (0x0006a004) list_cset_text2_pane

0x51eb,	// (0x0006a00c) main_cset6_text2_pane_g1

0x51f3,	// (0x0006a014) main_cset6_text2_pane_t1

0x4187,	// (0x00068fa8) list_cset_text2_pane_t1_ParamLimits

0x4187,	// (0x00068fa8) list_cset_text2_pane_t1

0x00aa,	// (0x00064ecb) main_radioblah_pane_ParamLimits

0xe0ca,	// (0x00072eeb) main_mobtv_info_pane_t3_ParamLimits

0xe0ca,	// (0x00072eeb) main_mobtv_info_pane_t3

0xe224,	// (0x00073045) main_radioblah_pane_g1

0xe24f,	// (0x00073070) main_radioblah_info_pane_g1

0xe2d0,	// (0x000730f1) main_radioblah_info_pane_t3_ParamLimits

0xe2d0,	// (0x000730f1) main_radioblah_info_pane_t3

0x95c5,	// (0x0006e3e6) highlight_cell_cale_month_pane_ParamLimits

0x95c5,	// (0x0006e3e6) highlight_cell_cale_month_pane

0x7850,	// (0x0006c671) main_phob_fisheye_pane

0x3117,	// (0x00067f38) scroll_pane_cp0031_ParamLimits

0x3117,	// (0x00067f38) scroll_pane_cp0031

0x5043,	// (0x00069e64) wait_bar_pane_cp08_ParamLimits

0xdb8b,	// (0x000729ac) cset_list_set_pane_copy1_ParamLimits

0x5772,	// (0x0006a593) highlight_cell_cale_month_pane_g1

0xe353,	// (0x00073174) highlight_cell_cale_month_pane_t1

0x4cdd,	// (0x00069afe) list_gen_pane_cp01

0x4954,	// (0x00069775) scroll_pane_01

0x6eb9,	// (0x0006bcda) list_single_double_fisheye_pane

0x6ec2,	// (0x0006bce3) list_double_fisheye_pane_g1_ParamLimits

0x6ec2,	// (0x0006bce3) list_double_fisheye_pane_g1

0x6ece,	// (0x0006bcef) list_double_fisheye_pane_g2_ParamLimits

0x6ece,	// (0x0006bcef) list_double_fisheye_pane_g2

0x6ee2,	// (0x0006bd03) list_double_fisheye_pane_g3_ParamLimits

0x6ee2,	// (0x0006bd03) list_double_fisheye_pane_g3

0x0004,

0xfcbe,	// (0x00074adf) list_double_fisheye_pane_g_ParamLimits

0xfcbe,	// (0x00074adf) list_double_fisheye_pane_g

0x6f0b,	// (0x0006bd2c) list_double_fisheye_pane_t1_ParamLimits

0x6f0b,	// (0x0006bd2c) list_double_fisheye_pane_t1

0x6f26,	// (0x0006bd47) list_double_fisheye_pane_t2_ParamLimits

0x6f26,	// (0x0006bd47) list_double_fisheye_pane_t2

0x0001,

0xfcc9,	// (0x00074aea) list_double_fisheye_pane_t_ParamLimits

0xfcc9,	// (0x00074aea) list_double_fisheye_pane_t

0x7850,	// (0x0006c671) main_call5_pane

0xe191,	// (0x00072fb2) sc_swipe_pane_ParamLimits

0xe191,	// (0x00072fb2) sc_swipe_pane

0xe36d,	// (0x0007318e) call5_image_pane_ParamLimits

0xe36d,	// (0x0007318e) call5_image_pane

0xe37d,	// (0x0007319e) call5_swipe_1_pane_ParamLimits

0xe37d,	// (0x0007319e) call5_swipe_1_pane

0xe389,	// (0x000731aa) call5_swipe_2_pane_ParamLimits

0xe389,	// (0x000731aa) call5_swipe_2_pane

0xe3a3,	// (0x000731c4) popup_call5_audio_first_window_ParamLimits

0xe3a3,	// (0x000731c4) popup_call5_audio_first_window

0x302f,	// (0x00067e50) call5_swipe_1_pane_g1_ParamLimits

0x302f,	// (0x00067e50) call5_swipe_1_pane_g1

0x577a,	// (0x0006a59b) call5_swipe_1_pane_g2_ParamLimits

0x577a,	// (0x0006a59b) call5_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x00074aef) call5_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x00074aef) call5_swipe_1_pane_g

0x5786,	// (0x0006a5a7) call5_swipe_1_pane_t1_ParamLimits

0x5786,	// (0x0006a5a7) call5_swipe_1_pane_t1

0x302f,	// (0x00067e50) call5_swipe_2_pane_g1_ParamLimits

0x302f,	// (0x00067e50) call5_swipe_2_pane_g1

0x579b,	// (0x0006a5bc) call5_swipe_2_pane_g2_ParamLimits

0x579b,	// (0x0006a5bc) call5_swipe_2_pane_g2

0x0001,

0xfcd3,	// (0x00074af4) call5_swipe_2_pane_g_ParamLimits

0xfcd3,	// (0x00074af4) call5_swipe_2_pane_g

0x57a7,	// (0x0006a5c8) call5_swipe_2_pane_t1_ParamLimits

0x57a7,	// (0x0006a5c8) call5_swipe_2_pane_t1

0x57bc,	// (0x0006a5dd) sc_swipe_pane_g1_ParamLimits

0x57bc,	// (0x0006a5dd) sc_swipe_pane_g1

0x57c9,	// (0x0006a5ea) sc_swipe_pane_g2_ParamLimits

0x57c9,	// (0x0006a5ea) sc_swipe_pane_g2

0x0001,

0xfcd8,	// (0x00074af9) sc_swipe_pane_g_ParamLimits

0xfcd8,	// (0x00074af9) sc_swipe_pane_g

0x57d5,	// (0x0006a5f6) sc_swipe_pane_t1_ParamLimits

0x57d5,	// (0x0006a5f6) sc_swipe_pane_t1

0x7850,	// (0x0006c671) main_cmail_launcher_pane

0xe3b1,	// (0x000731d2) aid_size_cell_cmail_l_ParamLimits

0xe3b1,	// (0x000731d2) aid_size_cell_cmail_l

0xe3c1,	// (0x000731e2) grid_cmail_l_pane_ParamLimits

0xe3c1,	// (0x000731e2) grid_cmail_l_pane

0xe3d1,	// (0x000731f2) cell_cmail_l_pane_ParamLimits

0xe3d1,	// (0x000731f2) cell_cmail_l_pane

0xe3e5,	// (0x00073206) cell_cmail_l_pane_g1_ParamLimits

0xe3e5,	// (0x00073206) cell_cmail_l_pane_g1

0xe3f1,	// (0x00073212) cell_cmail_l_pane_t1_ParamLimits

0xe3f1,	// (0x00073212) cell_cmail_l_pane_t1

0x57ea,	// (0x0006a60b) cell_cmail_l_pane_t2_ParamLimits

0x57ea,	// (0x0006a60b) cell_cmail_l_pane_t2

0x0001,

0xfcdd,	// (0x00074afe) cell_cmail_l_pane_t_ParamLimits

0xfcdd,	// (0x00074afe) cell_cmail_l_pane_t

0x00aa,	// (0x00064ecb) grid_highlight_pane_cp018_ParamLimits

0x00aa,	// (0x00064ecb) grid_highlight_pane_cp018

0x797b,	// (0x0006c79c) main2_pane_ParamLimits

0x797b,	// (0x0006c79c) main2_pane

0x08e2,	// (0x00065703) popup_sp_fs_action_menu_bg_pane_g1

0x08ea,	// (0x0006570b) popup_sp_fs_action_menu_bg_pane_g2

0x08f2,	// (0x00065713) popup_sp_fs_action_menu_bg_pane_g3

0x08fa,	// (0x0006571b) popup_sp_fs_action_menu_bg_pane_g4

0x0902,	// (0x00065723) popup_sp_fs_action_menu_bg_pane_g5

0x090a,	// (0x0006572b) popup_sp_fs_action_menu_bg_pane_g6

0x0912,	// (0x00065733) popup_sp_fs_action_menu_bg_pane_g7

0x091a,	// (0x0006573b) popup_sp_fs_action_menu_bg_pane_g8

0x0922,	// (0x00065743) popup_sp_fs_action_menu_bg_pane_g9

0x092a,	// (0x0006574b) popup_sp_fs_action_menu_bg_pane_g10

0x092a,	// (0x0006574b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x00073fc8) popup_sp_fs_action_menu_bg_pane_g

0x66fa,	// (0x0006b51b) list_medium_line_x2_t3_g3_g1_ParamLimits

0x66fa,	// (0x0006b51b) list_medium_line_x2_t3_g3_g1

0x6706,	// (0x0006b527) list_medium_line_x2_t3_g3_g2_ParamLimits

0x6706,	// (0x0006b527) list_medium_line_x2_t3_g3_g2

0x6712,	// (0x0006b533) list_medium_line_x2_t3_g3_g3_ParamLimits

0x6712,	// (0x0006b533) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x00074078) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x00074078) list_medium_line_x2_t3_g3_g

0x671e,	// (0x0006b53f) list_medium_line_x2_t3_g3_t1_ParamLimits

0x671e,	// (0x0006b53f) list_medium_line_x2_t3_g3_t1

0x6733,	// (0x0006b554) list_medium_line_x2_t3_g3_t2_ParamLimits

0x6733,	// (0x0006b554) list_medium_line_x2_t3_g3_t2

0x6745,	// (0x0006b566) list_medium_line_x2_t3_g3_t3_ParamLimits

0x6745,	// (0x0006b566) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x0007407f) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x0007407f) list_medium_line_x2_t3_g3_t

0x66fa,	// (0x0006b51b) list_medium_line_x2_t3_g2_g1_ParamLimits

0x66fa,	// (0x0006b51b) list_medium_line_x2_t3_g2_g1

0x6712,	// (0x0006b533) list_medium_line_x2_t3_g2_g2_ParamLimits

0x6712,	// (0x0006b533) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x00074086) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x00074086) list_medium_line_x2_t3_g2_g

0x675a,	// (0x0006b57b) list_medium_line_x2_t3_g2_t1_ParamLimits

0x675a,	// (0x0006b57b) list_medium_line_x2_t3_g2_t1

0x6770,	// (0x0006b591) list_medium_line_x2_t3_g2_t2_ParamLimits

0x6770,	// (0x0006b591) list_medium_line_x2_t3_g2_t2

0x6782,	// (0x0006b5a3) list_medium_line_x2_t3_g2_t3_ParamLimits

0x6782,	// (0x0006b5a3) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x0007408b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x0007408b) list_medium_line_x2_t3_g2_t

0x66fa,	// (0x0006b51b) list_medium_line_x2_t4_g4_g1_ParamLimits

0x66fa,	// (0x0006b51b) list_medium_line_x2_t4_g4_g1

0x679f,	// (0x0006b5c0) list_medium_line_x2_t4_g4_g2_ParamLimits

0x679f,	// (0x0006b5c0) list_medium_line_x2_t4_g4_g2

0x6706,	// (0x0006b527) list_medium_line_x2_t4_g4_g3_ParamLimits

0x6706,	// (0x0006b527) list_medium_line_x2_t4_g4_g3

0x67ab,	// (0x0006b5cc) list_medium_line_x2_t4_g4_g4_ParamLimits

0x67ab,	// (0x0006b5cc) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x00074092) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x00074092) list_medium_line_x2_t4_g4_g

0x67b7,	// (0x0006b5d8) list_medium_line_x2_t4_g4_t1_ParamLimits

0x67b7,	// (0x0006b5d8) list_medium_line_x2_t4_g4_t1

0x67d1,	// (0x0006b5f2) list_medium_line_x2_t4_g4_t2_ParamLimits

0x67d1,	// (0x0006b5f2) list_medium_line_x2_t4_g4_t2

0x67e7,	// (0x0006b608) list_medium_line_x2_t4_g4_t3_ParamLimits

0x67e7,	// (0x0006b608) list_medium_line_x2_t4_g4_t3

0x67fc,	// (0x0006b61d) list_medium_line_x2_t4_g4_t4_ParamLimits

0x67fc,	// (0x0006b61d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x0007409b) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x0007409b) list_medium_line_x2_t4_g4_t

0x66fa,	// (0x0006b51b) list_medium_line_x2_t2_g4_g1_ParamLimits

0x66fa,	// (0x0006b51b) list_medium_line_x2_t2_g4_g1

0x679f,	// (0x0006b5c0) list_medium_line_x2_t2_g4_g2_ParamLimits

0x679f,	// (0x0006b5c0) list_medium_line_x2_t2_g4_g2

0x6706,	// (0x0006b527) list_medium_line_x2_t2_g4_g3_ParamLimits

0x6706,	// (0x0006b527) list_medium_line_x2_t2_g4_g3

0x6712,	// (0x0006b533) list_medium_line_x2_t2_g4_g4_ParamLimits

0x6712,	// (0x0006b533) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x00074102) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x00074102) list_medium_line_x2_t2_g4_g

0x680e,	// (0x0006b62f) list_medium_line_x2_t2_g4_t1_ParamLimits

0x680e,	// (0x0006b62f) list_medium_line_x2_t2_g4_t1

0x6745,	// (0x0006b566) list_medium_line_x2_t2_g4_t2_ParamLimits

0x6745,	// (0x0006b566) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x0007410b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x0007410b) list_medium_line_x2_t2_g4_t

0x66fa,	// (0x0006b51b) list_medium_line_x2_t2_g3_g1_ParamLimits

0x66fa,	// (0x0006b51b) list_medium_line_x2_t2_g3_g1

0x6706,	// (0x0006b527) list_medium_line_x2_t2_g3_g2_ParamLimits

0x6706,	// (0x0006b527) list_medium_line_x2_t2_g3_g2

0x6712,	// (0x0006b533) list_medium_line_x2_t2_g3_g3_ParamLimits

0x6712,	// (0x0006b533) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x00074078) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x00074078) list_medium_line_x2_t2_g3_g

0x6823,	// (0x0006b644) list_medium_line_x2_t2_g3_t1_ParamLimits

0x6823,	// (0x0006b644) list_medium_line_x2_t2_g3_t1

0x6745,	// (0x0006b566) list_medium_line_x2_t2_g3_t2_ParamLimits

0x6745,	// (0x0006b566) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x00074110) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x00074110) list_medium_line_x2_t2_g3_t

0x9777,	// (0x0006e598) main_sp_fs_list_pane_ParamLimits

0x9777,	// (0x0006e598) main_sp_fs_list_pane

0x9783,	// (0x0006e5a4) sp_fs_scroll_pane_ParamLimits

0x9783,	// (0x0006e5a4) sp_fs_scroll_pane

0x6838,	// (0x0006b659) list_medium_line_x2_t3_t1

0x6848,	// (0x0006b669) list_medium_line_x2_t3_t2

0x6856,	// (0x0006b677) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x0007415b) list_medium_line_x2_t3_t

0x6864,	// (0x0006b685) list_medium_line_x3_t4_t1

0x6874,	// (0x0006b695) list_medium_line_x3_t4_t2

0x6882,	// (0x0006b6a3) list_medium_line_x3_t4_t3

0x6856,	// (0x0006b677) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x00074162) list_medium_line_x3_t4_t

0x6890,	// (0x0006b6b1) list_medium_line_x4_t5_t1

0x68a0,	// (0x0006b6c1) list_medium_line_x4_t5_t2

0x6882,	// (0x0006b6a3) list_medium_line_x4_t5_t3

0x68ae,	// (0x0006b6cf) list_medium_line_x4_t5_t4

0x6856,	// (0x0006b677) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x0007416b) list_medium_line_x4_t5_t

0x66fa,	// (0x0006b51b) list_medium_line_t4_g4_g1_ParamLimits

0x66fa,	// (0x0006b51b) list_medium_line_t4_g4_g1

0x67ab,	// (0x0006b5cc) list_medium_line_t4_g4_g2_ParamLimits

0x67ab,	// (0x0006b5cc) list_medium_line_t4_g4_g2

0x68bc,	// (0x0006b6dd) list_medium_line_t4_g4_g3_ParamLimits

0x68bc,	// (0x0006b6dd) list_medium_line_t4_g4_g3

0x6712,	// (0x0006b533) list_medium_line_t4_g4_g4_ParamLimits

0x6712,	// (0x0006b533) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x00074176) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x00074176) list_medium_line_t4_g4_g

0x68c8,	// (0x0006b6e9) list_medium_line_t4_g4_t1_ParamLimits

0x68c8,	// (0x0006b6e9) list_medium_line_t4_g4_t1

0x68dd,	// (0x0006b6fe) list_medium_line_t4_g4_t2_ParamLimits

0x68dd,	// (0x0006b6fe) list_medium_line_t4_g4_t2

0x68f2,	// (0x0006b713) list_medium_line_t4_g4_t3_ParamLimits

0x68f2,	// (0x0006b713) list_medium_line_t4_g4_t3

0x6745,	// (0x0006b566) list_medium_line_t4_g4_t4_ParamLimits

0x6745,	// (0x0006b566) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x0007417f) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x0007417f) list_medium_line_t4_g4_t

0x98a0,	// (0x0006e6c1) chi_dic_find_pane_g1

0xa7ff,	// (0x0006f620) main_tport_pane

0x6b40,	// (0x0006b961) list_medium_line_plain_t1

0x6b4e,	// (0x0006b96f) list_medium_line_t2_g2_g1_ParamLimits

0x6b4e,	// (0x0006b96f) list_medium_line_t2_g2_g1

0x6b5a,	// (0x0006b97b) list_medium_line_t2_g2_g2_ParamLimits

0x6b5a,	// (0x0006b97b) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x0007483b) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x0007483b) list_medium_line_t2_g2_g

0x6b66,	// (0x0006b987) list_medium_line_t2_g2_t1_ParamLimits

0x6b66,	// (0x0006b987) list_medium_line_t2_g2_t1

0x6b80,	// (0x0006b9a1) list_medium_line_t2_g2_t2_ParamLimits

0x6b80,	// (0x0006b9a1) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x00074840) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x00074840) list_medium_line_t2_g2_t

0x6d9f,	// (0x0006bbc0) aid_sp_fs_list_icon_a_sm

0xd6ca,	// (0x000724eb) aid_sp_fs_list_icon_d

0x3e90,	// (0x00068cb1) aid_sp_fs_text_primary

0x6da7,	// (0x0006bbc8) aid_sp_fs_text_secondary

0x6db0,	// (0x0006bbd1) list_medium_line

0x6db0,	// (0x0006bbd1) list_medium_line_g2

0x6db0,	// (0x0006bbd1) list_medium_line_g3

0x6db0,	// (0x0006bbd1) list_medium_line_plain

0x6db0,	// (0x0006bbd1) list_medium_line_plain_t2

0x6db0,	// (0x0006bbd1) list_medium_line_plain_t3

0x6db0,	// (0x0006bbd1) list_medium_line_right_icon

0x6db0,	// (0x0006bbd1) list_medium_line_right_iconx2

0x6db0,	// (0x0006bbd1) list_medium_line_t2

0x6db0,	// (0x0006bbd1) list_medium_line_t2_g2

0x6db0,	// (0x0006bbd1) list_medium_line_t2_g3

0x6db0,	// (0x0006bbd1) list_medium_line_t2_right_icon

0x6db0,	// (0x0006bbd1) list_medium_line_t2_right_iconx2

0x6db0,	// (0x0006bbd1) list_medium_line_t3

0x6db0,	// (0x0006bbd1) list_medium_line_t3_g2

0x6db0,	// (0x0006bbd1) list_medium_line_t3_g3

0x6db0,	// (0x0006bbd1) list_medium_line_t3_right_iconx2

0x6db9,	// (0x0006bbda) list_medium_line_t4_g4

0x6dc2,	// (0x0006bbe3) list_medium_line_x2

0x6dc2,	// (0x0006bbe3) list_medium_line_x2_t2_g2

0x6dc2,	// (0x0006bbe3) list_medium_line_x2_t2_g3

0x6dc2,	// (0x0006bbe3) list_medium_line_x2_t2_g4

0x6dc2,	// (0x0006bbe3) list_medium_line_x2_t3

0x6dc2,	// (0x0006bbe3) list_medium_line_x2_t3_g2

0x6dc2,	// (0x0006bbe3) list_medium_line_x2_t3_g3

0x6dc2,	// (0x0006bbe3) list_medium_line_x2_t3_g4

0x6dc2,	// (0x0006bbe3) list_medium_line_x2_t4_g2

0x6dc2,	// (0x0006bbe3) list_medium_line_x2_t4_g4

0x6dcb,	// (0x0006bbec) list_medium_line_x3

0x6dcb,	// (0x0006bbec) list_medium_line_x3_t4

0x6dcb,	// (0x0006bbec) list_medium_line_x3_t4_g4

0x6db9,	// (0x0006bbda) list_medium_line_x4_t4

0x6db9,	// (0x0006bbda) list_medium_line_x4_t4_g7

0x6db9,	// (0x0006bbda) list_medium_line_x4_t5

0x6dd4,	// (0x0006bbf5) list_single_fs_dyc_pane_ParamLimits

0x6dd4,	// (0x0006bbf5) list_single_fs_dyc_pane

0x66fa,	// (0x0006b51b) list_medium_line_x4_t4_g7_g1_ParamLimits

0x66fa,	// (0x0006b51b) list_medium_line_x4_t4_g7_g1

0x6de8,	// (0x0006bc09) list_medium_line_x4_t4_g7_g2_ParamLimits

0x6de8,	// (0x0006bc09) list_medium_line_x4_t4_g7_g2

0x6df4,	// (0x0006bc15) list_medium_line_x4_t4_g7_g3_ParamLimits

0x6df4,	// (0x0006bc15) list_medium_line_x4_t4_g7_g3

0x6e03,	// (0x0006bc24) list_medium_line_x4_t4_g7_g4_ParamLimits

0x6e03,	// (0x0006bc24) list_medium_line_x4_t4_g7_g4

0x6e0f,	// (0x0006bc30) list_medium_line_x4_t4_g7_g5_ParamLimits

0x6e0f,	// (0x0006bc30) list_medium_line_x4_t4_g7_g5

0x6e1e,	// (0x0006bc3f) list_medium_line_x4_t4_g7_g6_ParamLimits

0x6e1e,	// (0x0006bc3f) list_medium_line_x4_t4_g7_g6

0x6e2d,	// (0x0006bc4e) list_medium_line_x4_t4_g7_g7_ParamLimits

0x6e2d,	// (0x0006bc4e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbea,	// (0x00074a0b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbea,	// (0x00074a0b) list_medium_line_x4_t4_g7_g

0x6e39,	// (0x0006bc5a) list_medium_line_x4_t4_g7_t1_ParamLimits

0x6e39,	// (0x0006bc5a) list_medium_line_x4_t4_g7_t1

0x6e4e,	// (0x0006bc6f) list_medium_line_x4_t4_g7_t2_ParamLimits

0x6e4e,	// (0x0006bc6f) list_medium_line_x4_t4_g7_t2

0x6e63,	// (0x0006bc84) list_medium_line_x4_t4_g7_t3_ParamLimits

0x6e63,	// (0x0006bc84) list_medium_line_x4_t4_g7_t3

0x6e78,	// (0x0006bc99) list_medium_line_x4_t4_g7_t4_ParamLimits

0x6e78,	// (0x0006bc99) list_medium_line_x4_t4_g7_t4

0x6e8a,	// (0x0006bcab) list_medium_line_x4_t4_g7_t5_ParamLimits

0x6e8a,	// (0x0006bcab) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf9,	// (0x00074a1a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf9,	// (0x00074a1a) list_medium_line_x4_t4_g7_t

0x6e9c,	// (0x0006bcbd) list_single_dyc_row_pane_ParamLimits

0x6e9c,	// (0x0006bcbd) list_single_dyc_row_pane

0xe361,	// (0x00073182) call5_gesture_pane_ParamLimits

0xe361,	// (0x00073182) call5_gesture_pane

0xe395,	// (0x000731b6) call5_windows_pane_ParamLimits

0xe395,	// (0x000731b6) call5_windows_pane

0xe407,	// (0x00073228) call5_swipe_1_pane_cp_ParamLimits

0xe407,	// (0x00073228) call5_swipe_1_pane_cp

0xe413,	// (0x00073234) call5_swipe_2_pane_cp_ParamLimits

0xe413,	// (0x00073234) call5_swipe_2_pane_cp

0x147b,	// (0x0006629c) call5_image_pane_cp

0xe41f,	// (0x00073240) popup_call5_audio_first_window_cp_ParamLimits

0xe41f,	// (0x00073240) popup_call5_audio_first_window_cp

0x57bc,	// (0x0006a5dd) call5_swipe_1_pane_g1_cp_ParamLimits

0x57bc,	// (0x0006a5dd) call5_swipe_1_pane_g1_cp

0x57fc,	// (0x0006a61d) call5_swipe_1_pane_g2_cp

0x57d5,	// (0x0006a5f6) call5_swipe_1_pane_t1_cp_ParamLimits

0x57d5,	// (0x0006a5f6) call5_swipe_1_pane_t1_cp

0x57bc,	// (0x0006a5dd) call5_swipe_2_pane_g1_cp_ParamLimits

0x57bc,	// (0x0006a5dd) call5_swipe_2_pane_g1_cp

0x5804,	// (0x0006a625) call5_swipe_2_pane_g2_cp

0x580c,	// (0x0006a62d) call5_swipe_2_pane_t1_cp_ParamLimits

0x580c,	// (0x0006a62d) call5_swipe_2_pane_t1_cp

0x00aa,	// (0x00064ecb) main_sp_fs_email_pane

0x5821,	// (0x0006a642) main_sp_fs_listscroll_pane_te

0x6f48,	// (0x0006bd69) popup_sp_fs_action_menu_pane_ParamLimits

0x6f48,	// (0x0006bd69) popup_sp_fs_action_menu_pane

0x2dc3,	// (0x00067be4) bg_sp_fs_ctrlbar_pane_g1

0x582a,	// (0x0006a64b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x5833,	// (0x0006a654) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x583c,	// (0x0006a65d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x2dc3,	// (0x00067be4) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce2,	// (0x00074b03) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2ba8,	// (0x000679c9) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2ba8,	// (0x000679c9) bg_sp_fs_ctrlbar_ddmenu_pane

0x5845,	// (0x0006a666) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x5845,	// (0x0006a666) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x5851,	// (0x0006a672) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x5851,	// (0x0006a672) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfceb,	// (0x00074b0c) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfceb,	// (0x00074b0c) main_sp_fs_ctrlbar_ddmenu_pane_g

0x585d,	// (0x0006a67e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x585d,	// (0x0006a67e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x6f8c,	// (0x0006bdad) list_medium_line_t2_right_icon_g1

0x6f94,	// (0x0006bdb5) list_medium_line_t2_right_icon_t1

0x6fa4,	// (0x0006bdc5) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf0,	// (0x00074b11) list_medium_line_t2_right_icon_t

0x28bd,	// (0x000676de) bg_sp_fs_ctrlbar_pane_ParamLimits

0x28bd,	// (0x000676de) bg_sp_fs_ctrlbar_pane

0xe484,	// (0x000732a5) main_sp_fs_ctrlbar_button_pane_cp01

0xe48c,	// (0x000732ad) main_sp_fs_ctrlbar_ddmenu_pane

0x58af,	// (0x0006a6d0) main_sp_fs_ctrlbar_pane_g1

0x58bb,	// (0x0006a6dc) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf5,	// (0x00074b16) main_sp_fs_ctrlbar_pane_g

0x58c7,	// (0x0006a6e8) main_sp_fs_ctrlbar_pane_t1

0x6fb2,	// (0x0006bdd3) main_sp_fs_ctrlbar_pane

0x6fcc,	// (0x0006bded) main_sp_fs_listscroll_pane_te_cp01

0x6fdd,	// (0x0006bdfe) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6fdd,	// (0x0006bdfe) popup_sp_fs_action_menu_pane_cp01

0x00aa,	// (0x00064ecb) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x00aa,	// (0x00064ecb) bg_sp_fs_highlight_list_pane_cp01

0x6ff7,	// (0x0006be18) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x6ff7,	// (0x0006be18) sp_fs_action_menu_list_gene_pane_g1

0x58ec,	// (0x0006a70d) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x58ec,	// (0x0006a70d) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x00074b20) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x00074b20) sp_fs_action_menu_list_gene_pane_g

0x7006,	// (0x0006be27) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x7006,	// (0x0006be27) sp_fs_action_menu_list_gene_pane_t1

0x701e,	// (0x0006be3f) sp_fs_action_menu_list_gene_pane_ParamLimits

0x701e,	// (0x0006be3f) sp_fs_action_menu_list_gene_pane

0x58f9,	// (0x0006a71a) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x58f9,	// (0x0006a71a) popup_sp_fs_action_menu_bg_pane

0x703f,	// (0x0006be60) sp_fs_action_menu_list_pane_ParamLimits

0x703f,	// (0x0006be60) sp_fs_action_menu_list_pane

0x5907,	// (0x0006a728) sp_fs_scroll_pane_cp01_ParamLimits

0x5907,	// (0x0006a728) sp_fs_scroll_pane_cp01

0x7061,	// (0x0006be82) list_medium_line_plain_t2_t1

0x7071,	// (0x0006be92) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x00074b25) list_medium_line_plain_t2_t

0x707f,	// (0x0006bea0) list_medium_line_plain_t3_t1

0x708f,	// (0x0006beb0) list_medium_line_plain_t3_t2

0x709d,	// (0x0006bebe) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x00074b2a) list_medium_line_plain_t3_t

0x66fa,	// (0x0006b51b) list_medium_line_x2_t2_g2_g1_ParamLimits

0x66fa,	// (0x0006b51b) list_medium_line_x2_t2_g2_g1

0x6712,	// (0x0006b533) list_medium_line_x2_t2_g2_g2_ParamLimits

0x6712,	// (0x0006b533) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x00074086) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x00074086) list_medium_line_x2_t2_g2_g

0x68c8,	// (0x0006b6e9) list_medium_line_x2_t2_g2_t1_ParamLimits

0x68c8,	// (0x0006b6e9) list_medium_line_x2_t2_g2_t1

0x6745,	// (0x0006b566) list_medium_line_x2_t2_g2_t2_ParamLimits

0x6745,	// (0x0006b566) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x00074b31) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x00074b31) list_medium_line_x2_t2_g2_t

0x66fa,	// (0x0006b51b) list_medium_line_x2_t4_g2_g1_ParamLimits

0x66fa,	// (0x0006b51b) list_medium_line_x2_t4_g2_g1

0x70ab,	// (0x0006becc) list_medium_line_x2_t4_g2_g2_ParamLimits

0x70ab,	// (0x0006becc) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd15,	// (0x00074b36) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd15,	// (0x00074b36) list_medium_line_x2_t4_g2_g

0x70bd,	// (0x0006bede) list_medium_line_x2_t4_g2_t1_ParamLimits

0x70bd,	// (0x0006bede) list_medium_line_x2_t4_g2_t1

0x70d4,	// (0x0006bef5) list_medium_line_x2_t4_g2_t2_ParamLimits

0x70d4,	// (0x0006bef5) list_medium_line_x2_t4_g2_t2

0x70e9,	// (0x0006bf0a) list_medium_line_x2_t4_g2_t3_ParamLimits

0x70e9,	// (0x0006bf0a) list_medium_line_x2_t4_g2_t3

0x6745,	// (0x0006b566) list_medium_line_x2_t4_g2_t4_ParamLimits

0x6745,	// (0x0006b566) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1a,	// (0x00074b3b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1a,	// (0x00074b3b) list_medium_line_x2_t4_g2_t

0x70fb,	// (0x0006bf1c) list_medium_line_t3_right_iconx2_g1

0x6f8c,	// (0x0006bdad) list_medium_line_t3_right_iconx2_g2

0x7103,	// (0x0006bf24) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd23,	// (0x00074b44) list_medium_line_t3_right_iconx2_g

0x710b,	// (0x0006bf2c) list_medium_line_t3_right_iconx2_t1

0x711b,	// (0x0006bf3c) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2a,	// (0x00074b4b) list_medium_line_t3_right_iconx2_t

0x66fa,	// (0x0006b51b) list_medium_line_x3_t4_g4_g1_ParamLimits

0x66fa,	// (0x0006b51b) list_medium_line_x3_t4_g4_g1

0x6706,	// (0x0006b527) list_medium_line_x3_t4_g4_g2_ParamLimits

0x6706,	// (0x0006b527) list_medium_line_x3_t4_g4_g2

0x67ab,	// (0x0006b5cc) list_medium_line_x3_t4_g4_g3_ParamLimits

0x67ab,	// (0x0006b5cc) list_medium_line_x3_t4_g4_g3

0x7129,	// (0x0006bf4a) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7129,	// (0x0006bf4a) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2f,	// (0x00074b50) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2f,	// (0x00074b50) list_medium_line_x3_t4_g4_g

0x7135,	// (0x0006bf56) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7135,	// (0x0006bf56) list_medium_line_x3_t4_g4_t1

0x714c,	// (0x0006bf6d) list_medium_line_x3_t4_g4_t2_ParamLimits

0x714c,	// (0x0006bf6d) list_medium_line_x3_t4_g4_t2

0x68dd,	// (0x0006b6fe) list_medium_line_x3_t4_g4_t3_ParamLimits

0x68dd,	// (0x0006b6fe) list_medium_line_x3_t4_g4_t3

0x7161,	// (0x0006bf82) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7161,	// (0x0006bf82) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd38,	// (0x00074b59) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd38,	// (0x00074b59) list_medium_line_x3_t4_g4_t

0x717e,	// (0x0006bf9f) list_single_dyc_row_text_pane_t1_ParamLimits

0x717e,	// (0x0006bf9f) list_single_dyc_row_text_pane_t1

0x71b5,	// (0x0006bfd6) list_single_dyc_row_text_pane_t2_ParamLimits

0x71b5,	// (0x0006bfd6) list_single_dyc_row_text_pane_t2

0x720f,	// (0x0006c030) list_single_dyc_row_text_pane_t3_ParamLimits

0x720f,	// (0x0006c030) list_single_dyc_row_text_pane_t3

0x0002,

0xfd41,	// (0x00074b62) list_single_dyc_row_text_pane_t_ParamLimits

0xfd41,	// (0x00074b62) list_single_dyc_row_text_pane_t

0x7221,	// (0x0006c042) list_single_dyc_row_pane_g1_ParamLimits

0x7221,	// (0x0006c042) list_single_dyc_row_pane_g1

0x722d,	// (0x0006c04e) list_single_dyc_row_pane_g2_ParamLimits

0x722d,	// (0x0006c04e) list_single_dyc_row_pane_g2

0x7239,	// (0x0006c05a) list_single_dyc_row_pane_g3_ParamLimits

0x7239,	// (0x0006c05a) list_single_dyc_row_pane_g3

0x7245,	// (0x0006c066) list_single_dyc_row_pane_g4_ParamLimits

0x7245,	// (0x0006c066) list_single_dyc_row_pane_g4

0x0003,

0xfd48,	// (0x00074b69) list_single_dyc_row_pane_g_ParamLimits

0xfd48,	// (0x00074b69) list_single_dyc_row_pane_g

0x7251,	// (0x0006c072) list_single_dyc_row_text_pane_ParamLimits

0x7251,	// (0x0006c072) list_single_dyc_row_text_pane

0x7850,	// (0x0006c671) bg_sp_fs_scroll_pane

0x36ca,	// (0x000684eb) thumb_sp_fs_scroll_pane

0x6b4e,	// (0x0006b96f) list_medium_line_g1_ParamLimits

0x6b4e,	// (0x0006b96f) list_medium_line_g1

0x7270,	// (0x0006c091) list_medium_line_t1_ParamLimits

0x7270,	// (0x0006c091) list_medium_line_t1

0x66fa,	// (0x0006b51b) list_medium_line_x2_g1_ParamLimits

0x66fa,	// (0x0006b51b) list_medium_line_x2_g1

0x6706,	// (0x0006b527) list_medium_line_x2_g2_ParamLimits

0x6706,	// (0x0006b527) list_medium_line_x2_g2

0x0001,

0xfd51,	// (0x00074b72) list_medium_line_x2_g_ParamLimits

0xfd51,	// (0x00074b72) list_medium_line_x2_g

0x7285,	// (0x0006c0a6) list_medium_line_x2_t1_ParamLimits

0x7285,	// (0x0006c0a6) list_medium_line_x2_t1

0x66fa,	// (0x0006b51b) list_medium_line_x3_g1_ParamLimits

0x66fa,	// (0x0006b51b) list_medium_line_x3_g1

0x6706,	// (0x0006b527) list_medium_line_x3_g2_ParamLimits

0x6706,	// (0x0006b527) list_medium_line_x3_g2

0x0001,

0xfd51,	// (0x00074b72) list_medium_line_x3_g_ParamLimits

0xfd51,	// (0x00074b72) list_medium_line_x3_g

0x7285,	// (0x0006c0a6) list_medium_line_x3_t1_ParamLimits

0x7285,	// (0x0006c0a6) list_medium_line_x3_t1

0x36fe,	// (0x0006851f) thumb_sp_fs_scroll_pane_g1

0x3707,	// (0x00068528) thumb_sp_fs_scroll_pane_g2

0x3710,	// (0x00068531) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x00074b77) thumb_sp_fs_scroll_pane_g

0x36fe,	// (0x0006851f) bg_sp_fs_scroll_pane_g1

0x3707,	// (0x00068528) bg_sp_fs_scroll_pane_g2

0x3710,	// (0x00068531) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x00074b77) bg_sp_fs_scroll_pane_g

0x66fa,	// (0x0006b51b) list_medium_line_x2_t3_g4_g1_ParamLimits

0x66fa,	// (0x0006b51b) list_medium_line_x2_t3_g4_g1

0x679f,	// (0x0006b5c0) list_medium_line_x2_t3_g4_g2_ParamLimits

0x679f,	// (0x0006b5c0) list_medium_line_x2_t3_g4_g2

0x6706,	// (0x0006b527) list_medium_line_x2_t3_g4_g3_ParamLimits

0x6706,	// (0x0006b527) list_medium_line_x2_t3_g4_g3

0x6712,	// (0x0006b533) list_medium_line_x2_t3_g4_g4_ParamLimits

0x6712,	// (0x0006b533) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x00074102) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x00074102) list_medium_line_x2_t3_g4_g

0x729b,	// (0x0006c0bc) list_medium_line_x2_t3_g4_t1_ParamLimits

0x729b,	// (0x0006c0bc) list_medium_line_x2_t3_g4_t1

0x72b1,	// (0x0006c0d2) list_medium_line_x2_t3_g4_t2_ParamLimits

0x72b1,	// (0x0006c0d2) list_medium_line_x2_t3_g4_t2

0x6745,	// (0x0006b566) list_medium_line_x2_t3_g4_t3_ParamLimits

0x6745,	// (0x0006b566) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5d,	// (0x00074b7e) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5d,	// (0x00074b7e) list_medium_line_x2_t3_g4_t

0x6b4e,	// (0x0006b96f) list_medium_line_g2_g1_ParamLimits

0x6b4e,	// (0x0006b96f) list_medium_line_g2_g1

0x6b5a,	// (0x0006b97b) list_medium_line_g2_g2_ParamLimits

0x6b5a,	// (0x0006b97b) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x0007483b) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x0007483b) list_medium_line_g2_g

0x72cb,	// (0x0006c0ec) list_medium_line_g2_t1_ParamLimits

0x72cb,	// (0x0006c0ec) list_medium_line_g2_t1

0x6b4e,	// (0x0006b96f) list_medium_line_t3_g2_g1_ParamLimits

0x6b4e,	// (0x0006b96f) list_medium_line_t3_g2_g1

0x6b5a,	// (0x0006b97b) list_medium_line_t3_g2_g2_ParamLimits

0x6b5a,	// (0x0006b97b) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x0007483b) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x0007483b) list_medium_line_t3_g2_g

0x72e0,	// (0x0006c101) list_medium_line_t3_g2_t1_ParamLimits

0x72e0,	// (0x0006c101) list_medium_line_t3_g2_t1

0x72f7,	// (0x0006c118) list_medium_line_t3_g2_t2_ParamLimits

0x72f7,	// (0x0006c118) list_medium_line_t3_g2_t2

0x730c,	// (0x0006c12d) list_medium_line_t3_g2_t3_ParamLimits

0x730c,	// (0x0006c12d) list_medium_line_t3_g2_t3

0x0002,

0xfd64,	// (0x00074b85) list_medium_line_t3_g2_t_ParamLimits

0xfd64,	// (0x00074b85) list_medium_line_t3_g2_t

0x6f8c,	// (0x0006bdad) list_medium_line_right_icon_g1

0x7321,	// (0x0006c142) list_medium_line_right_icon_t1

0x6b4e,	// (0x0006b96f) list_medium_line_t2_g1_ParamLimits

0x6b4e,	// (0x0006b96f) list_medium_line_t2_g1

0x732f,	// (0x0006c150) list_medium_line_t2_t1_ParamLimits

0x732f,	// (0x0006c150) list_medium_line_t2_t1

0x7349,	// (0x0006c16a) list_medium_line_t2_t2_ParamLimits

0x7349,	// (0x0006c16a) list_medium_line_t2_t2

0x0001,

0xfd6b,	// (0x00074b8c) list_medium_line_t2_t_ParamLimits

0xfd6b,	// (0x00074b8c) list_medium_line_t2_t

0x6b4e,	// (0x0006b96f) list_medium_line_t3_g1_ParamLimits

0x6b4e,	// (0x0006b96f) list_medium_line_t3_g1

0x735e,	// (0x0006c17f) list_medium_line_t3_t1_ParamLimits

0x735e,	// (0x0006c17f) list_medium_line_t3_t1

0x7375,	// (0x0006c196) list_medium_line_t3_t2_ParamLimits

0x7375,	// (0x0006c196) list_medium_line_t3_t2

0x738a,	// (0x0006c1ab) list_medium_line_t3_t3_ParamLimits

0x738a,	// (0x0006c1ab) list_medium_line_t3_t3

0x0002,

0xfd70,	// (0x00074b91) list_medium_line_t3_t_ParamLimits

0xfd70,	// (0x00074b91) list_medium_line_t3_t

0x6b4e,	// (0x0006b96f) list_medium_line_g3_g1_ParamLimits

0x6b4e,	// (0x0006b96f) list_medium_line_g3_g1

0x739c,	// (0x0006c1bd) list_medium_line_g3_g2_ParamLimits

0x739c,	// (0x0006c1bd) list_medium_line_g3_g2

0x6b5a,	// (0x0006b97b) list_medium_line_g3_g3_ParamLimits

0x6b5a,	// (0x0006b97b) list_medium_line_g3_g3

0x0002,

0xfd77,	// (0x00074b98) list_medium_line_g3_g_ParamLimits

0xfd77,	// (0x00074b98) list_medium_line_g3_g

0x73a8,	// (0x0006c1c9) list_medium_line_g3_t1_ParamLimits

0x73a8,	// (0x0006c1c9) list_medium_line_g3_t1

0x6b4e,	// (0x0006b96f) list_medium_line_t2_g3_g1_ParamLimits

0x6b4e,	// (0x0006b96f) list_medium_line_t2_g3_g1

0x739c,	// (0x0006c1bd) list_medium_line_t2_g3_g2_ParamLimits

0x739c,	// (0x0006c1bd) list_medium_line_t2_g3_g2

0x6b5a,	// (0x0006b97b) list_medium_line_t2_g3_g3_ParamLimits

0x6b5a,	// (0x0006b97b) list_medium_line_t2_g3_g3

0x0002,

0xfd77,	// (0x00074b98) list_medium_line_t2_g3_g_ParamLimits

0xfd77,	// (0x00074b98) list_medium_line_t2_g3_g

0x73bd,	// (0x0006c1de) list_medium_line_t2_g3_t1_ParamLimits

0x73bd,	// (0x0006c1de) list_medium_line_t2_g3_t1

0x73d7,	// (0x0006c1f8) list_medium_line_t2_g3_t2_ParamLimits

0x73d7,	// (0x0006c1f8) list_medium_line_t2_g3_t2

0x0001,

0xfd7e,	// (0x00074b9f) list_medium_line_t2_g3_t_ParamLimits

0xfd7e,	// (0x00074b9f) list_medium_line_t2_g3_t

0x6b4e,	// (0x0006b96f) list_medium_line_t3_g3_g1_ParamLimits

0x6b4e,	// (0x0006b96f) list_medium_line_t3_g3_g1

0x739c,	// (0x0006c1bd) list_medium_line_t3_g3_g2_ParamLimits

0x739c,	// (0x0006c1bd) list_medium_line_t3_g3_g2

0x6b5a,	// (0x0006b97b) list_medium_line_t3_g3_g3_ParamLimits

0x6b5a,	// (0x0006b97b) list_medium_line_t3_g3_g3

0x0002,

0xfd77,	// (0x00074b98) list_medium_line_t3_g3_g_ParamLimits

0xfd77,	// (0x00074b98) list_medium_line_t3_g3_g

0x73ec,	// (0x0006c20d) list_medium_line_t3_g3_t1_ParamLimits

0x73ec,	// (0x0006c20d) list_medium_line_t3_g3_t1

0x7400,	// (0x0006c221) list_medium_line_t3_g3_t2_ParamLimits

0x7400,	// (0x0006c221) list_medium_line_t3_g3_t2

0x7412,	// (0x0006c233) list_medium_line_t3_g3_t3_ParamLimits

0x7412,	// (0x0006c233) list_medium_line_t3_g3_t3

0x0002,

0xfd83,	// (0x00074ba4) list_medium_line_t3_g3_t_ParamLimits

0xfd83,	// (0x00074ba4) list_medium_line_t3_g3_t

0x70fb,	// (0x0006bf1c) list_medium_line_right_iconx2_g1

0x6f8c,	// (0x0006bdad) list_medium_line_right_iconx2_g2

0x0001,

0xfd8a,	// (0x00074bab) list_medium_line_right_iconx2_g

0x7424,	// (0x0006c245) list_medium_line_right_iconx2_t1

0x70fb,	// (0x0006bf1c) list_medium_line_t2_right_iconx2_g1

0x6f8c,	// (0x0006bdad) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8a,	// (0x00074bab) list_medium_line_t2_right_iconx2_g

0x7432,	// (0x0006c253) list_medium_line_t2_right_iconx2_t1

0x7442,	// (0x0006c263) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8f,	// (0x00074bb0) list_medium_line_t2_right_iconx2_t

0x7450,	// (0x0006c271) list_medium_line_x4_t4_t1

0x745e,	// (0x0006c27f) list_medium_line_x4_t4_t2

0x746e,	// (0x0006c28f) list_medium_line_x4_t4_t3

0x747e,	// (0x0006c29f) list_medium_line_x4_t4_t4

0x0003,

0xfd94,	// (0x00074bb5) list_medium_line_x4_t4_t

0xe4bf,	// (0x000732e0) tport_appsw_pane_ParamLimits

0xe4bf,	// (0x000732e0) tport_appsw_pane

0xe4cb,	// (0x000732ec) tport_contact_pane_ParamLimits

0xe4cb,	// (0x000732ec) tport_contact_pane

0xe4db,	// (0x000732fc) tport_listscroll_pane_ParamLimits

0xe4db,	// (0x000732fc) tport_listscroll_pane

0xe4eb,	// (0x0007330c) cell_tport_appsw_pane_ParamLimits

0xe4eb,	// (0x0007330c) cell_tport_appsw_pane

0x3094,	// (0x00067eb5) tport_appsw_pane_g1_ParamLimits

0x3094,	// (0x00067eb5) tport_appsw_pane_g1

0x3779,	// (0x0006859a) tport_contact_pane_g1

0x52b7,	// (0x0006a0d8) tport_contact_pane_t1

0x3782,	// (0x000685a3) tport_contact_pane_t2

0x0001,

0xfd9d,	// (0x00074bbe) tport_contact_pane_t

0x3790,	// (0x000685b1) list_tport_pane

0x3799,	// (0x000685ba) scroll_pane_cp_030

0x37aa,	// (0x000685cb) cell_tport_appsw_pane_g1

0x37ba,	// (0x000685db) cell_tport_appsw_pane_t1

0x7850,	// (0x0006c671) grid_highlight_pane_cp019

0xe516,	// (0x00073337) list_tport_double_graphic_pane_ParamLimits

0xe516,	// (0x00073337) list_tport_double_graphic_pane

0x00aa,	// (0x00064ecb) list_highlight_pane_cp023_ParamLimits

0x00aa,	// (0x00064ecb) list_highlight_pane_cp023

0xe528,	// (0x00073349) list_tport_double_graphic_pane_g1_ParamLimits

0xe528,	// (0x00073349) list_tport_double_graphic_pane_g1

0xe535,	// (0x00073356) list_tport_double_graphic_pane_t1_ParamLimits

0xe535,	// (0x00073356) list_tport_double_graphic_pane_t1

0xe54a,	// (0x0007336b) list_tport_double_graphic_pane_t2_ParamLimits

0xe54a,	// (0x0007336b) list_tport_double_graphic_pane_t2

0x0001,

0xfda9,	// (0x00074bca) list_tport_double_graphic_pane_t_ParamLimits

0xfda9,	// (0x00074bca) list_tport_double_graphic_pane_t

0x7850,	// (0x0006c671) main_cale_note_pane

0xca1c,	// (0x0007183d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xca1c,	// (0x0007183d) cell_vitu2_function_top_wide_pane_cp01

0xe0de,	// (0x00072eff) wait_bar_pane_cp05_ParamLimits

0x7850,	// (0x0006c671) listscroll_cmail_pane

0x37d0,	// (0x000685f1) list_cmail_pane

0xe566,	// (0x00073387) list_cmail_body_pane

0xe580,	// (0x000733a1) list_single_cmail_header_caption_pane

0xe5a5,	// (0x000733c6) list_single_cmail_header_detail_pane_ParamLimits

0xe5a5,	// (0x000733c6) list_single_cmail_header_detail_pane

0xe5d5,	// (0x000733f6) list_single_cmail_header_caption_pane_t1

0x748e,	// (0x0006c2af) list_single_cmail_header_detail_pane_g1_ParamLimits

0x748e,	// (0x0006c2af) list_single_cmail_header_detail_pane_g1

0xe5e3,	// (0x00073404) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5e3,	// (0x00073404) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdae,	// (0x00074bcf) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdae,	// (0x00074bcf) list_single_cmail_header_detail_pane_g

0x74a4,	// (0x0006c2c5) list_single_cmail_header_detail_pane_t1_ParamLimits

0x74a4,	// (0x0006c2c5) list_single_cmail_header_detail_pane_t1

0x7502,	// (0x0006c323) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7502,	// (0x0006c323) list_single_cmail_header_editor_pane_bg

0x546a,	// (0x0006a28b) list_cmail_body_pane_g1

0x3852,	// (0x00068673) list_cmail_body_pane_t1

0x483a,	// (0x0006965b) list_single_cmail_header_editor_pane_bg_g1

0x0cf1,	// (0x00065b12) list_single_cmail_header_editor_pane_bg_g1_copy1

0x484a,	// (0x0006966b) list_single_cmail_header_editor_pane_bg_g1_copy2

0x4842,	// (0x00069663) list_single_cmail_header_editor_pane_bg_g1_copy3

0x4a6c,	// (0x0006988d) list_single_cmail_header_editor_pane_bg_g1_copy4

0x486a,	// (0x0006968b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x485a,	// (0x0006967b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x4862,	// (0x00069683) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0cd1,	// (0x00065af2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe5ef,	// (0x00073410) calenote_gesture_pane_ParamLimits

0xe5ef,	// (0x00073410) calenote_gesture_pane

0xe609,	// (0x0007342a) calenote_window_pane_ParamLimits

0xe609,	// (0x0007342a) calenote_window_pane

0x3860,	// (0x00068681) popup_note_window_cp01

0xe621,	// (0x00073442) calenote_swipe_1_pane_ParamLimits

0xe621,	// (0x00073442) calenote_swipe_1_pane

0xe413,	// (0x00073234) calenote_swipe_2_pane_ParamLimits

0xe413,	// (0x00073234) calenote_swipe_2_pane

0x57bc,	// (0x0006a5dd) calenote_swipe_1_pane_g1_ParamLimits

0x57bc,	// (0x0006a5dd) calenote_swipe_1_pane_g1

0x57c9,	// (0x0006a5ea) calenote_swipe_1_pane_g2_ParamLimits

0x57c9,	// (0x0006a5ea) calenote_swipe_1_pane_g2

0x0001,

0xfcd8,	// (0x00074af9) calenote_swipe_1_pane_g_ParamLimits

0xfcd8,	// (0x00074af9) calenote_swipe_1_pane_g

0x3872,	// (0x00068693) calenote_swipe_1_pane_t1_ParamLimits

0x3872,	// (0x00068693) calenote_swipe_1_pane_t1

0x57bc,	// (0x0006a5dd) calenote_swipe_2_pane_g1_ParamLimits

0x57bc,	// (0x0006a5dd) calenote_swipe_2_pane_g1

0x3891,	// (0x000686b2) calenote_swipe_2_pane_g2_ParamLimits

0x3891,	// (0x000686b2) calenote_swipe_2_pane_g2

0x0001,

0xfdba,	// (0x00074bdb) calenote_swipe_2_pane_g_ParamLimits

0xfdba,	// (0x00074bdb) calenote_swipe_2_pane_g

0x389d,	// (0x000686be) calenote_swipe_2_pane_t1_ParamLimits

0x389d,	// (0x000686be) calenote_swipe_2_pane_t1

0x7850,	// (0x0006c671) main_mup_navstr_pane

0xb7d3,	// (0x000705f4) main_mup3_pane_t7_ParamLimits

0xb7d3,	// (0x000705f4) main_mup3_pane_t7

0xc1ad,	// (0x00070fce) main_mp4_pane_g6_ParamLimits

0xc1ad,	// (0x00070fce) main_mp4_pane_g6

0xc51f,	// (0x00071340) main_image3_pane_t4_ParamLimits

0xc51f,	// (0x00071340) main_image3_pane_t4

0xe634,	// (0x00073455) popup_navstr_preview_pane_ParamLimits

0xe634,	// (0x00073455) popup_navstr_preview_pane

0xe640,	// (0x00073461) scroll_navstr_pane_ParamLimits

0xe640,	// (0x00073461) scroll_navstr_pane

0x7850,	// (0x0006c671) bg_popup_preview_window_pane_cp04

0x38c4,	// (0x000686e5) popup_navstr_preview_pane_t1

0xe64c,	// (0x0007346d) scroll_navstr_pane_g1_ParamLimits

0xe64c,	// (0x0007346d) scroll_navstr_pane_g1

0xe659,	// (0x0007347a) scroll_navstr_pane_t1_ParamLimits

0xe659,	// (0x0007347a) scroll_navstr_pane_t1

0x3869,	// (0x0006868a) bg_button_pane_cp014

0x3869,	// (0x0006868a) bg_button_pane_cp030

0x6eee,	// (0x0006bd0f) list_double_fisheye_pane_g4_ParamLimits

0x6eee,	// (0x0006bd0f) list_double_fisheye_pane_g4

0x6efa,	// (0x0006bd1b) list_double_fisheye_pane_g5_ParamLimits

0x6efa,	// (0x0006bd1b) list_double_fisheye_pane_g5

0x37d8,	// (0x000685f9) sp_fs_scroll_pane_cp03

0x58af,	// (0x0006a6d0) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x58bb,	// (0x0006a6dc) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf5,	// (0x00074b16) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x58c7,	// (0x0006a6e8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe55c,	// (0x0007337d) sp_fs_scroll_pane_cp02

0x0995,	// (0x000657b6) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0995,	// (0x000657b6) popup_sp_fs_calendar_preview_list_single_pane

0x7850,	// (0x0006c671) main_cam6_pano_pane

0x00aa,	// (0x00064ecb) main_mup3_pane_ParamLimits

0x7850,	// (0x0006c671) main_phacti_pane

0xdfb3,	// (0x00072dd4) bg_button_pane_cp11

0xdfcb,	// (0x00072dec) main_mobtv_info_pane_g2_ParamLimits

0xdfcb,	// (0x00072dec) main_mobtv_info_pane_g2

0x0001,

0xfc55,	// (0x00074a76) main_mobtv_info_pane_g_ParamLimits

0xfc55,	// (0x00074a76) main_mobtv_info_pane_g

0xe17d,	// (0x00072f9e) sc_clock_pane_t5_ParamLimits

0xe17d,	// (0x00072f9e) sc_clock_pane_t5

0xe224,	// (0x00073045) main_radioblah_pane_g1_ParamLimits

0x5708,	// (0x0006a529) main_radioblah_pane_t3_ParamLimits

0x5708,	// (0x0006a529) main_radioblah_pane_t3

0x5720,	// (0x0006a541) main_radioblah_pane_t4_ParamLimits

0x5720,	// (0x0006a541) main_radioblah_pane_t4

0xe242,	// (0x00073063) main_radioblah_text_pane_ParamLimits

0xe242,	// (0x00073063) main_radioblah_text_pane

0xe24f,	// (0x00073070) main_radioblah_info_pane_g1_ParamLimits

0xe2e4,	// (0x00073105) main_radioblah_info_pane_t4_ParamLimits

0xe2e4,	// (0x00073105) main_radioblah_info_pane_t4

0x00aa,	// (0x00064ecb) main_sp_fs_calendar_pane

0xe66b,	// (0x0007348c) main_phacti_pane_g1

0xe673,	// (0x00073494) phacti_note_pane_ParamLimits

0xe673,	// (0x00073494) phacti_note_pane

0x38db,	// (0x000686fc) phacti_term_pane_ParamLimits

0x38db,	// (0x000686fc) phacti_term_pane

0x38f0,	// (0x00068711) phacti_note_pane_t1_ParamLimits

0x38f0,	// (0x00068711) phacti_note_pane_t1

0x7514,	// (0x0006c335) phacti_term_pane_g1

0x751c,	// (0x0006c33d) phacti_term_pane_t1_ParamLimits

0x751c,	// (0x0006c33d) phacti_term_pane_t1

0x3939,	// (0x0006875a) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0af2,	// (0x00065913) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc4,	// (0x00074be5) popup_sp_fs_calendar_preview_list_single_pane_g

0x3941,	// (0x00068762) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3941,	// (0x00068762) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3956,	// (0x00068777) aid_popup_sp_fs_bg_corner_pane

0x2dc3,	// (0x00067be4) popup_sp_fs_calendar_preview_bg_pane_g1

0x7850,	// (0x0006c671) popup_sp_fs_calendar_preview_bg_pane

0x395e,	// (0x0006877f) popup_sp_fs_calendar_preview_list_pane

0x00aa,	// (0x00064ecb) bg_main_sp_fs_cale_pane_ParamLimits

0x00aa,	// (0x00064ecb) bg_main_sp_fs_cale_pane

0x7546,	// (0x0006c367) listscroll_cale_mrui_pane_ParamLimits

0x7546,	// (0x0006c367) listscroll_cale_mrui_pane

0x755a,	// (0x0006c37b) listscroll_sp_fs_schedule_track_pane

0x7563,	// (0x0006c384) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x7563,	// (0x0006c384) main_sp_fs_ctrlbar_pane_cp01

0x3994,	// (0x000687b5) main_sp_fs_ribbon_pane

0x399c,	// (0x000687bd) popup_sp_fs_cale_preview_window

0xe6b6,	// (0x000734d7) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe6b6,	// (0x000734d7) list_single_sp_fs_schedule_track_pane

0x7aff,	// (0x0006c920) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x7aff,	// (0x0006c920) bg_sp_fs_highlight_list_pane_cp03

0xe6d5,	// (0x000734f6) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe6d5,	// (0x000734f6) list_single_sp_fs_schedule_track_pane_g1

0xe6e1,	// (0x00073502) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe6e1,	// (0x00073502) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc9,	// (0x00074bea) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc9,	// (0x00074bea) list_single_sp_fs_schedule_track_pane_g

0xe6ed,	// (0x0007350e) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe6ed,	// (0x0007350e) list_single_sp_fs_schedule_track_pane_t1

0xe705,	// (0x00073526) sp_fs_schedule_track_pane_ParamLimits

0xe705,	// (0x00073526) sp_fs_schedule_track_pane

0x39ae,	// (0x000687cf) sp_fs_schedule_track_pane_g1

0x39b6,	// (0x000687d7) sp_fs_schedule_track_pane_g2

0x39be,	// (0x000687df) sp_fs_schedule_track_pane_g3

0x39c6,	// (0x000687e7) sp_fs_schedule_track_pane_g4

0x39ce,	// (0x000687ef) sp_fs_schedule_track_pane_g5

0x0004,

0xfdce,	// (0x00074bef) sp_fs_schedule_track_pane_g

0x483a,	// (0x0006965b) bg_sp_fs_schedule_viewer_highlight_g1

0x0cf1,	// (0x00065b12) bg_sp_fs_schedule_viewer_highlight_g2

0x4842,	// (0x00069663) bg_sp_fs_schedule_viewer_highlight_g3

0x484a,	// (0x0006966b) bg_sp_fs_schedule_viewer_highlight_g4

0x4a6c,	// (0x0006988d) bg_sp_fs_schedule_viewer_highlight_g5

0x485a,	// (0x0006967b) bg_sp_fs_schedule_viewer_highlight_g6

0x4862,	// (0x00069683) bg_sp_fs_schedule_viewer_highlight_g7

0x486a,	// (0x0006968b) bg_sp_fs_schedule_viewer_highlight_g8

0x0cd1,	// (0x00065af2) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd9,	// (0x00074bfa) bg_sp_fs_schedule_viewer_highlight_g

0x7850,	// (0x0006c671) bg_main_sp_fs_ribbon_pane

0xe715,	// (0x00073536) main_sp_fs_ribbon_pane_g1

0x39d6,	// (0x000687f7) main_sp_fs_ribbon_pane_t1

0xe71e,	// (0x0007353f) main_sp_fs_ribbon_pane_t2

0x39e5,	// (0x00068806) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdec,	// (0x00074c0d) main_sp_fs_ribbon_pane_t

0x39f4,	// (0x00068815) main_sp_fs_ribbon_scheduler_pane

0x39fc,	// (0x0006881d) bg_main_sp_fs_ribbon_pane_g1

0x3a05,	// (0x00068826) bg_main_sp_fs_ribbon_pane_g2

0x3a0e,	// (0x0006882f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf3,	// (0x00074c14) bg_main_sp_fs_ribbon_pane_g

0x3a16,	// (0x00068837) main_sp_fs_ribbon_scheduler_pane_g1

0x3a1f,	// (0x00068840) main_sp_fs_ribbon_scheduler_pane_g2

0x3a28,	// (0x00068849) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfa,	// (0x00074c1b) main_sp_fs_ribbon_scheduler_pane_g

0x3a31,	// (0x00068852) list_cale_mrui_pane

0xe72d,	// (0x0007354e) sp_fs_scroll_pane_cp07_ParamLimits

0xe72d,	// (0x0007354e) sp_fs_scroll_pane_cp07

0xe743,	// (0x00073564) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe743,	// (0x00073564) bg_sp_fs_schedule_viewer_highlight

0x3a3a,	// (0x0006885b) list_single_sp_fs_schedule_track_pane_cp01

0x3a42,	// (0x00068863) list_sp_fs_schedule_track_pane

0x3a4a,	// (0x0006886b) sp_fs_scroll_pane_cp06_ParamLimits

0x3a4a,	// (0x0006886b) sp_fs_scroll_pane_cp06

0x2dc3,	// (0x00067be4) bgmain_sp_fs_calendar_pane_g1

0x7574,	// (0x0006c395) list_single_cale_mrui_pane_ParamLimits

0x7574,	// (0x0006c395) list_single_cale_mrui_pane

0x759c,	// (0x0006c3bd) list_single_cale_mrui_row_pane_ParamLimits

0x759c,	// (0x0006c3bd) list_single_cale_mrui_row_pane

0x75a9,	// (0x0006c3ca) list_single_cale_mrui_row_pane_g1_ParamLimits

0x75a9,	// (0x0006c3ca) list_single_cale_mrui_row_pane_g1

0x75e1,	// (0x0006c402) list_single_cale_mrui_row_pane_t1_ParamLimits

0x75e1,	// (0x0006c402) list_single_cale_mrui_row_pane_t1

0x75f3,	// (0x0006c414) list_single_cale_mrui_row_pane_t2_ParamLimits

0x75f3,	// (0x0006c414) list_single_cale_mrui_row_pane_t2

0x7659,	// (0x0006c47a) list_single_cale_mrui_row_pane_t3_ParamLimits

0x7659,	// (0x0006c47a) list_single_cale_mrui_row_pane_t3

0x7688,	// (0x0006c4a9) list_single_cale_mrui_row_pane_t4_ParamLimits

0x7688,	// (0x0006c4a9) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe08,	// (0x00074c29) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe08,	// (0x00074c29) list_single_cale_mrui_row_pane_t

0x76b7,	// (0x0006c4d8) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x76b7,	// (0x0006c4d8) list_single_cmail_header_editor_pane_bg_cp01

0x76d7,	// (0x0006c4f8) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x76d7,	// (0x0006c4f8) list_single_cmail_header_editor_pane_bg_cp02

0xe750,	// (0x00073571) main_radioblah_text_pane_t1_ParamLimits

0xe750,	// (0x00073571) main_radioblah_text_pane_t1

0x3b1e,	// (0x0006893f) cam6_indi_pane_cp01

0x3b26,	// (0x00068947) cam6_mode_pane_cp01

0x3b2e,	// (0x0006894f) cam6_pano_pane

0x3b37,	// (0x00068958) cam6_zoom_pane_cp01

0x3b3f,	// (0x00068960) cam6_pano_image_pane

0x3b4a,	// (0x0006896b) cam6_pano_pane_g1

0x546a,	// (0x0006a28b) cam6_pano_pane_g2

0x3b53,	// (0x00068974) cam6_pano_pane_g3

0x3b5c,	// (0x0006897d) cam6_pano_pane_g4

0x3365,	// (0x00068186) cam6_pano_pane_g5

0x3b65,	// (0x00068986) cam6_pano_pane_g6

0x3b6f,	// (0x00068990) cam6_pano_pane_g7

0x3b77,	// (0x00068998) cam6_pano_pane_g8

0x3b80,	// (0x000689a1) cam6_pano_pane_g9

0x0008,

0xfe11,	// (0x00074c32) cam6_pano_pane_g

0x7850,	// (0x0006c671) main_browser_tag_pane

0x38bc,	// (0x000686dd) grid_navstr_albumart_pane

0x3b8b,	// (0x000689ac) cell_navstr_albumart_pane_ParamLimits

0x3b8b,	// (0x000689ac) cell_navstr_albumart_pane

0x3bae,	// (0x000689cf) cell_navstr_albumart_pane_g1

0x26da,	// (0x000674fb) cell_navstr_albumart_pane_g2

0x26ea,	// (0x0006750b) cell_navstr_albumart_pane_g3

0x26e2,	// (0x00067503) cell_navstr_albumart_pane_g4

0x0003,

0xfe24,	// (0x00074c45) cell_navstr_albumart_pane_g

0xe76b,	// (0x0007358c) bt_list_pane_ParamLimits

0xe76b,	// (0x0007358c) bt_list_pane

0xe78b,	// (0x000735ac) bt_list_pane_t1

0xe79a,	// (0x000735bb) bt_list_pane_t2

0x0001,

0xfe2d,	// (0x00074c4e) bt_list_pane_t

0x7850,	// (0x0006c671) main_cale_prevew_pane

0xe7a9,	// (0x000735ca) popup_cale_preview_window_ParamLimits

0xe7a9,	// (0x000735ca) popup_cale_preview_window

0x00aa,	// (0x00064ecb) bg_popup_preview_window_pane_cp05_ParamLimits

0x00aa,	// (0x00064ecb) bg_popup_preview_window_pane_cp05

0x3bb6,	// (0x000689d7) list_cale_preview_pane_ParamLimits

0x3bb6,	// (0x000689d7) list_cale_preview_pane

0x3f2a,	// (0x00068d4b) list_double_cale_preview_pane_ParamLimits

0x3f2a,	// (0x00068d4b) list_double_cale_preview_pane

0xe7c2,	// (0x000735e3) list_single_cale_preview_pane_ParamLimits

0xe7c2,	// (0x000735e3) list_single_cale_preview_pane

0xe7d8,	// (0x000735f9) list_single_cale_preview_pane_g1

0xe7e0,	// (0x00073601) list_single_cale_preview_pane_t1_ParamLimits

0xe7e0,	// (0x00073601) list_single_cale_preview_pane_t1

0xe7f5,	// (0x00073616) list_double_cale_preview_pane_g1

0xe7fd,	// (0x0007361e) list_double_cale_preview_pane_t1_ParamLimits

0xe7fd,	// (0x0007361e) list_double_cale_preview_pane_t1

0xe812,	// (0x00073633) list_double_cale_preview_pane_t2_ParamLimits

0xe812,	// (0x00073633) list_double_cale_preview_pane_t2

0x0001,

0xfe32,	// (0x00074c53) list_double_cale_preview_pane_t_ParamLimits

0xfe32,	// (0x00074c53) list_double_cale_preview_pane_t

0x7850,	// (0x0006c671) main_ezdial_pane

0x00aa,	// (0x00064ecb) main_sp_fs_email_pane_ParamLimits

0xe42d,	// (0x0007324e) cmail_ddmenu_btn01_pane_ParamLimits

0xe42d,	// (0x0007324e) cmail_ddmenu_btn01_pane

0xe44a,	// (0x0007326b) cmail_ddmenu_btn02_pane_ParamLimits

0xe44a,	// (0x0007326b) cmail_ddmenu_btn02_pane

0xe468,	// (0x00073289) cmail_ddmenu_btn03_pane_ParamLimits

0xe468,	// (0x00073289) cmail_ddmenu_btn03_pane

0x6fb2,	// (0x0006bdd3) main_sp_fs_ctrlbar_pane_ParamLimits

0x6fcc,	// (0x0006bded) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe566,	// (0x00073387) list_cmail_body_pane_ParamLimits

0x37e8,	// (0x00068609) bg_button_pane_cp12

0x37fd,	// (0x0006861e) list_single_cmail_header_detail_pane_g3_ParamLimits

0x37fd,	// (0x0006861e) list_single_cmail_header_detail_pane_g3

0x74de,	// (0x0006c2ff) list_single_cmail_header_detail_pane_t2_ParamLimits

0x74de,	// (0x0006c2ff) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb5,	// (0x00074bd6) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb5,	// (0x00074bd6) list_single_cmail_header_detail_pane_t

0x7531,	// (0x0006c352) phacti_term_pane_t2_ParamLimits

0x7531,	// (0x0006c352) phacti_term_pane_t2

0x0001,

0xfdbf,	// (0x00074be0) phacti_term_pane_t_ParamLimits

0xfdbf,	// (0x00074be0) phacti_term_pane_t

0x3bc2,	// (0x000689e3) aid_size_list_single_double

0xe82a,	// (0x0007364b) popup_ezdial_listscroll_window

0xe84b,	// (0x0007366c) popup_number_entry_window_cp01

0x147b,	// (0x0006629c) bg_popup_call_pane_cp09

0x3bce,	// (0x000689ef) ezdial_list_pane

0x3bd6,	// (0x000689f7) scroll_pane_cp23

0x2ba8,	// (0x000679c9) bg_button_pane_cp028_ParamLimits

0x2ba8,	// (0x000679c9) bg_button_pane_cp028

0xe859,	// (0x0007367a) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe859,	// (0x0007367a) cmail_ddmenu_btn01_pane_g1

0xe86b,	// (0x0007368c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe86b,	// (0x0007368c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe37,	// (0x00074c58) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe37,	// (0x00074c58) cmail_ddmenu_btn01_pane_g

0x3bde,	// (0x000689ff) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3bde,	// (0x000689ff) cmail_ddmenu_btn01_pane_t1

0x28bd,	// (0x000676de) bg_button_pane_cp029_ParamLimits

0x28bd,	// (0x000676de) bg_button_pane_cp029

0xe86b,	// (0x0007368c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe86b,	// (0x0007368c) cmail_ddmenu_btn02_pane_g1

0xe883,	// (0x000736a4) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe883,	// (0x000736a4) cmail_ddmenu_btn02_pane_t1

0x7aff,	// (0x0006c920) bg_button_pane_cp031_ParamLimits

0x7aff,	// (0x0006c920) bg_button_pane_cp031

0xe86b,	// (0x0007368c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe86b,	// (0x0007368c) cmail_ddmenu_btn03_pane_g1

0xe883,	// (0x000736a4) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe883,	// (0x000736a4) cmail_ddmenu_btn03_pane_t1

0xc3ca,	// (0x000711eb) cell_dialer2_keypad_pane_t1_ParamLimits

0xc3e4,	// (0x00071205) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc3e4,	// (0x00071205) cell_dialer2_keypad_pane_t1_copy1

0xde53,	// (0x00072c74) ncimui_group_button_pane

0x00aa,	// (0x00064ecb) main_sp_fs_calendar_pane_ParamLimits

0xe580,	// (0x000733a1) list_single_cmail_header_caption_pane_ParamLimits

0xf0d5,	// (0x00073ef6) aid_recal_txt_sm_pane

0x7850,	// (0x0006c671) mian_recal_day_pane

0x399c,	// (0x000687bd) popup_sp_fs_cale_preview_window_ParamLimits

0x7850,	// (0x0006c671) list_recal_day_pane

0x3c0d,	// (0x00068a2e) list_single_recal_day_pane_ParamLimits

0x3c0d,	// (0x00068a2e) list_single_recal_day_pane

0x3c1f,	// (0x00068a40) list_single_recal_day_pane_g1_ParamLimits

0x3c1f,	// (0x00068a40) list_single_recal_day_pane_g1

0x3c2b,	// (0x00068a4c) list_single_recal_day_pane_g2_ParamLimits

0x3c2b,	// (0x00068a4c) list_single_recal_day_pane_g2

0x3c3b,	// (0x00068a5c) list_single_recal_day_pane_g3_ParamLimits

0x3c3b,	// (0x00068a5c) list_single_recal_day_pane_g3

0xe8a7,	// (0x000736c8) list_single_recal_day_pane_g4_ParamLimits

0xe8a7,	// (0x000736c8) list_single_recal_day_pane_g4

0x3c47,	// (0x00068a68) list_single_recal_day_pane_g5_ParamLimits

0x3c47,	// (0x00068a68) list_single_recal_day_pane_g5

0x3c57,	// (0x00068a78) list_single_recal_day_pane_g6_ParamLimits

0x3c57,	// (0x00068a78) list_single_recal_day_pane_g6

0x0004,

0xfe46,	// (0x00074c67) list_single_recal_day_pane_g_ParamLimits

0xfe46,	// (0x00074c67) list_single_recal_day_pane_g

0x3c6e,	// (0x00068a8f) list_single_recal_day_pane_t1

0x3c80,	// (0x00068aa1) list_single_recal_day_pane_t2

0x0001,

0xfe51,	// (0x00074c72) list_single_recal_day_pane_t

0xe8c7,	// (0x000736e8) ncimui_query_button_pane_ParamLimits

0xe8c7,	// (0x000736e8) ncimui_query_button_pane

0xe8d7,	// (0x000736f8) ncimui_query_button_pane_t1_ParamLimits

0xe8d7,	// (0x000736f8) ncimui_query_button_pane_t1

0x3c95,	// (0x00068ab6) ncimui_query_button_pane_t2_ParamLimits

0x3c95,	// (0x00068ab6) ncimui_query_button_pane_t2

0x0001,

0xfe56,	// (0x00074c77) ncimui_query_button_pane_t_ParamLimits

0xfe56,	// (0x00074c77) ncimui_query_button_pane_t

0xe8ea,	// (0x0007370b) query_button_pane_ParamLimits

0xe8ea,	// (0x0007370b) query_button_pane

0x7850,	// (0x0006c671) bg_button_pane_cp0028

0x3ca8,	// (0x00068ac9) query_button_pane_t1

0xa7ff,	// (0x0006f620) main_tport_pane_ParamLimits

0xe496,	// (0x000732b7) bg_popup_window_pane_cp01_ParamLimits

0xe496,	// (0x000732b7) bg_popup_window_pane_cp01

0xe4a3,	// (0x000732c4) heading_pane_cp08_ParamLimits

0xe4a3,	// (0x000732c4) heading_pane_cp08

0xe4b1,	// (0x000732d2) heading_pane_cp07_ParamLimits

0xe4b1,	// (0x000732d2) heading_pane_cp07

0x37aa,	// (0x000685cb) cell_tport_appsw_pane_g2

0x0002,

0xfda2,	// (0x00074bc3) cell_tport_appsw_pane_g

0x6925,	// (0x0006b746) input_candi_list_open_g1

0x0ec6,	// (0x00065ce7) list_cale_time_pane_g6_ParamLimits

0x0ec6,	// (0x00065ce7) list_cale_time_pane_g6

0xb240,	// (0x00070061) aid_size_touch_calib_1_ParamLimits

0xb240,	// (0x00070061) aid_size_touch_calib_1

0xb24c,	// (0x0007006d) aid_size_touch_calib_2_ParamLimits

0xb24c,	// (0x0007006d) aid_size_touch_calib_2

0xb25a,	// (0x0007007b) aid_size_touch_calib_3_ParamLimits

0xb25a,	// (0x0007007b) aid_size_touch_calib_3

0xb26a,	// (0x0007008b) aid_size_touch_calib_4_ParamLimits

0xb26a,	// (0x0007008b) aid_size_touch_calib_4

0xb278,	// (0x00070099) main_touch_calib_button_group_pane_ParamLimits

0xb278,	// (0x00070099) main_touch_calib_button_group_pane

0xb286,	// (0x000700a7) main_touch_calib_pane_g1_ParamLimits

0xb292,	// (0x000700b3) main_touch_calib_pane_g2_ParamLimits

0xb29e,	// (0x000700bf) main_touch_calib_pane_g3_ParamLimits

0xb2aa,	// (0x000700cb) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x00074591) main_touch_calib_pane_g_ParamLimits

0xb2b6,	// (0x000700d7) main_touch_calib_pane_t1_ParamLimits

0xb2cd,	// (0x000700ee) main_touch_calib_pane_t2_ParamLimits

0xb2e4,	// (0x00070105) main_touch_calib_pane_t3_ParamLimits

0xb2f8,	// (0x00070119) main_touch_calib_pane_t4_ParamLimits

0xb30c,	// (0x0007012d) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x0007459a) main_touch_calib_pane_t_ParamLimits

0x313b,	// (0x00067f5c) list_single_fp_cale_pane_g3_ParamLimits

0x313b,	// (0x00067f5c) list_single_fp_cale_pane_g3

0x00aa,	// (0x00064ecb) bg_button_pane_cp012_ParamLimits

0x00aa,	// (0x00064ecb) bg_vkb2_func_pane_cp03_ParamLimits

0xd18b,	// (0x00071fac) cell_vitu2_function_top_pane_g1_ParamLimits

0x00aa,	// (0x00064ecb) bg_vkb2_func_pane_cp04_ParamLimits

0xddf1,	// (0x00072c12) main_ncimui_button_group_pane_ParamLimits

0xddf1,	// (0x00072c12) main_ncimui_button_group_pane

0xde41,	// (0x00072c62) main_ncimui_pane_t3_ParamLimits

0xde41,	// (0x00072c62) main_ncimui_pane_t3

0x38d2,	// (0x000686f3) phacti_button_group_pane

0x3bc2,	// (0x000689e3) aid_size_list_single_double_ParamLimits

0xe82a,	// (0x0007364b) popup_ezdial_listscroll_window_ParamLimits

0xe84b,	// (0x0007366c) popup_number_entry_window_cp01_ParamLimits

0xe8f7,	// (0x00073718) phacti_button_pane_ParamLimits

0xe8f7,	// (0x00073718) phacti_button_pane

0x7850,	// (0x0006c671) bg_button_pane_cp14

0x3cb6,	// (0x00068ad7) phacti_button_pane_t1

0xe908,	// (0x00073729) main_touch_calib_button_pane_ParamLimits

0xe908,	// (0x00073729) main_touch_calib_button_pane

0x0825,	// (0x00065646) bg_button_pane_cp18_ParamLimits

0x0825,	// (0x00065646) bg_button_pane_cp18

0x3cc4,	// (0x00068ae5) main_touch_calib_button_pane_t1_ParamLimits

0x3cc4,	// (0x00068ae5) main_touch_calib_button_pane_t1

0x3cda,	// (0x00068afb) main_touch_calib_button_pane_t2_ParamLimits

0x3cda,	// (0x00068afb) main_touch_calib_button_pane_t2

0x0001,

0xfe5b,	// (0x00074c7c) main_touch_calib_button_pane_t_ParamLimits

0xfe5b,	// (0x00074c7c) main_touch_calib_button_pane_t

0x7850,	// (0x0006c671) cell_ncimui_button_pane

0x7850,	// (0x0006c671) bg_button_pane_cp032

0x3cf8,	// (0x00068b19) cell_ncimui_button_pane_t1

0xc440,	// (0x00071261) image3_infobar_pane_ParamLimits

0xc440,	// (0x00071261) image3_infobar_pane

0xe19f,	// (0x00072fc0) fs_bigclock_status_pane_ParamLimits

0xe19f,	// (0x00072fc0) fs_bigclock_status_pane

0xe1ac,	// (0x00072fcd) main_fs_bigclock_clock_pane_ParamLimits

0xe1ac,	// (0x00072fcd) main_fs_bigclock_clock_pane

0xe1c2,	// (0x00072fe3) main_fs_bigclock_indi_pane_ParamLimits

0xe1c2,	// (0x00072fe3) main_fs_bigclock_indi_pane

0xe1f2,	// (0x00073013) main_fs_bigclock_swipe_pane_ParamLimits

0xe1f2,	// (0x00073013) main_fs_bigclock_swipe_pane

0x7850,	// (0x0006c671) main_fs_clock_dumped_data

0x5577,	// (0x0006a398) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x5577,	// (0x0006a398) list_single_fs_bigclock_indicator_pane_g1

0x559d,	// (0x0006a3be) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x559d,	// (0x0006a3be) list_single_fs_bigclock_indicator_pane_g2

0x55b7,	// (0x0006a3d8) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x55b7,	// (0x0006a3d8) list_single_fs_bigclock_indicator_pane_g3

0x55d1,	// (0x0006a3f2) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x55d1,	// (0x0006a3f2) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc89,	// (0x00074aaa) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc89,	// (0x00074aaa) list_single_fs_bigclock_indicator_pane_g

0x55fa,	// (0x0006a41b) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x55fa,	// (0x0006a41b) list_single_fs_bigclock_indicator_pane_t1

0x5622,	// (0x0006a443) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x5622,	// (0x0006a443) list_single_fs_bigclock_indicator_pane_t2

0x564a,	// (0x0006a46b) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x564a,	// (0x0006a46b) list_single_fs_bigclock_indicator_pane_t3

0x5672,	// (0x0006a493) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x5672,	// (0x0006a493) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc94,	// (0x00074ab5) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc94,	// (0x00074ab5) list_single_fs_bigclock_indicator_pane_t

0x3d06,	// (0x00068b27) image3_infobar_fav_pane_ParamLimits

0x3d06,	// (0x00068b27) image3_infobar_fav_pane

0x3d16,	// (0x00068b37) image3_infobar_loc_pane_ParamLimits

0x3d16,	// (0x00068b37) image3_infobar_loc_pane

0x3d2a,	// (0x00068b4b) image3_infobar_time_pane_ParamLimits

0x3d2a,	// (0x00068b4b) image3_infobar_time_pane

0x2dc3,	// (0x00067be4) image3_infobar_time_pane_g1

0x3d3a,	// (0x00068b5b) image3_infobar_time_pane_t1

0x2dc3,	// (0x00067be4) image3_infobar_loc_pane_g1

0x3d48,	// (0x00068b69) image3_infobar_loc_pane_g2

0x0001,

0xfe60,	// (0x00074c81) image3_infobar_loc_pane_g

0x3d50,	// (0x00068b71) image3_infobar_loc_pane_t1

0x2dc3,	// (0x00067be4) image3_infobar_fav_pane_g1

0x3d5e,	// (0x00068b7f) image3_infobar_fav_pane_g2

0x0001,

0xfe65,	// (0x00074c86) image3_infobar_fav_pane_g

0x3d66,	// (0x00068b87) fs_bigclock_status_battery_pane

0x3d6f,	// (0x00068b90) fs_bigclock_status_signal_pane

0x3d78,	// (0x00068b99) fs_bigclock_status_title_pane

0x3d81,	// (0x00068ba2) fs_bigclock_status_signal_pane_g1

0x3d8a,	// (0x00068bab) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6a,	// (0x00074c8b) fs_bigclock_status_signal_pane_g

0x3d92,	// (0x00068bb3) fs_bigclock_status_battery_pane_g1

0x3d9b,	// (0x00068bbc) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6f,	// (0x00074c90) fs_bigclock_status_battery_pane_g

0x3da3,	// (0x00068bc4) fs_bigclock_status_title_pane_t1

0x2dc3,	// (0x00067be4) main_fs_bigclock_clock_pane_g1

0x3db1,	// (0x00068bd2) main_fs_bigclock_clock_pane_g2

0x3db1,	// (0x00068bd2) main_fs_bigclock_clock_pane_g3

0x3db1,	// (0x00068bd2) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe74,	// (0x00074c95) main_fs_bigclock_clock_pane_g

0x3db9,	// (0x00068bda) main_fs_bigclock_clock_pane_t1

0x3dc7,	// (0x00068be8) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7d,	// (0x00074c9e) main_fs_bigclock_clock_pane_t

0x3dd6,	// (0x00068bf7) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3dd6,	// (0x00068bf7) list_single_fs_bigclock_indicator_pane

0xe91a,	// (0x0007373b) list_single_fs_bigclock_pane_ParamLimits

0xe91a,	// (0x0007373b) list_single_fs_bigclock_pane

0x3df0,	// (0x00068c11) main_fs_bigclock_indicator_pane_t1

0x3dff,	// (0x00068c20) list_single_fs_bigclock_pane_g1

0x3e07,	// (0x00068c28) list_single_fs_bigclock_pane_t1

0x2dc3,	// (0x00067be4) main_fs_bigclock_swipe_pane_g1

0x3e4a,	// (0x00068c6b) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8e,	// (0x00074caf) main_fs_bigclock_swipe_pane_g

0x3e52,	// (0x00068c73) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3e52,	// (0x00068c73) main_fs_bigclock_swipe_pane_t1

0x978f,	// (0x0006e5b0) call_type_pane_ParamLimits

0x7850,	// (0x0006c671) main_btmg_pane

0x75d5,	// (0x0006c3f6) list_single_cale_mrui_row_pane_g2_ParamLimits

0x75d5,	// (0x0006c3f6) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe01,	// (0x00074c22) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe01,	// (0x00074c22) list_single_cale_mrui_row_pane_g

0x3bfd,	// (0x00068a1e) list_recal_vselct_arw_lo_pane

0x3c05,	// (0x00068a26) list_recal_vselct_arw_up_pane

0xf0de,	// (0x00073eff) list_recal_vselct_pane

0x3e6f,	// (0x00068c90) btmg_button_pane

0xe97b,	// (0x0007379c) main_btmg_pane_g1

0x7850,	// (0x0006c671) bg_button_pane_cp044

0x3e79,	// (0x00068c9a) btmg_button_pane_t1

0x28b5,	// (0x000676d6) aid_listscroll_gen

0x00aa,	// (0x00064ecb) main_cntbar_detail_pane

0x37c8,	// (0x000685e9) list_cmail_folder_pane

0x37d8,	// (0x000685f9) sp_fs_scroll_pane_cp03_ParamLimits

0x76f3,	// (0x0006c514) list_single_fs_dyc_pane_cp01_ParamLimits

0x76f3,	// (0x0006c514) list_single_fs_dyc_pane_cp01

0x3e87,	// (0x00068ca8) aid_size_cmail_indent

0x7715,	// (0x0006c536) list_single_dyc_row_pane_cp01

0xe9a3,	// (0x000737c4) cntbar_detail_list_pane_ParamLimits

0xe9a3,	// (0x000737c4) cntbar_detail_list_pane

0xe9dd,	// (0x000737fe) main_cntbar_detail_cont_pane_ParamLimits

0xe9dd,	// (0x000737fe) main_cntbar_detail_cont_pane

0x9783,	// (0x0006e5a4) scroll_pane_cp032_ParamLimits

0x9783,	// (0x0006e5a4) scroll_pane_cp032

0xe9e9,	// (0x0007380a) cntbar_detail_list_event_pane_ParamLimits

0xe9e9,	// (0x0007380a) cntbar_detail_list_event_pane

0xe9af,	// (0x000737d0) cntbar_detail_list_shct_pane

0x0d3f,	// (0x00065b60) aid_list_gen

0x3e99,	// (0x00068cba) aid_scroll

0x3ea2,	// (0x00068cc3) aid_size_touch_scroll_bar

0x771e,	// (0x0006c53f) aid_list_double

0x3eab,	// (0x00068ccc) aid_list_single

0xe9fd,	// (0x0007381e) aid_list_single_lg

0x7727,	// (0x0006c548) aid_list_z_g_a_sm

0xea06,	// (0x00073827) aid_list_z_g_d

0x772f,	// (0x0006c550) aid_txt_z_prm

0x773d,	// (0x0006c55e) aid_txt_z_prm_cp01

0x774b,	// (0x0006c56c) aid_txt_z_sec

0xea0e,	// (0x0007382f) main_cntbar_detail_cont_pane_g1_ParamLimits

0xea0e,	// (0x0007382f) main_cntbar_detail_cont_pane_g1

0xea1b,	// (0x0007383c) main_cntbar_detail_cont_pane_g2_ParamLimits

0xea1b,	// (0x0007383c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe93,	// (0x00074cb4) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe93,	// (0x00074cb4) main_cntbar_detail_cont_pane_g

0x3ed2,	// (0x00068cf3) main_cntbar_detail_cont_pane_t1

0x3ee0,	// (0x00068d01) main_cntbar_detail_cont_pane_t2

0x3eee,	// (0x00068d0f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe98,	// (0x00074cb9) main_cntbar_detail_cont_pane_t

0xea27,	// (0x00073848) cell_cntbar_detail_list_shct_pane_ParamLimits

0xea27,	// (0x00073848) cell_cntbar_detail_list_shct_pane

0x3efc,	// (0x00068d1d) cntbar_detail_list_shct_pane_g1

0x3f05,	// (0x00068d26) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9f,	// (0x00074cc0) cntbar_detail_list_shct_pane_g

0xea3b,	// (0x0007385c) cntbar_detail_list_event_pane_g1_ParamLimits

0xea3b,	// (0x0007385c) cntbar_detail_list_event_pane_g1

0xea47,	// (0x00073868) cntbar_detail_list_event_pane_g2_ParamLimits

0xea47,	// (0x00073868) cntbar_detail_list_event_pane_g2

0x0005,

0xfea4,	// (0x00074cc5) cntbar_detail_list_event_pane_g_ParamLimits

0xfea4,	// (0x00074cc5) cntbar_detail_list_event_pane_g

0xeab3,	// (0x000738d4) cntbar_detail_list_event_pane_t1_ParamLimits

0xeab3,	// (0x000738d4) cntbar_detail_list_event_pane_t1

0xeac8,	// (0x000738e9) cntbar_detail_list_event_pane_t2_ParamLimits

0xeac8,	// (0x000738e9) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb1,	// (0x00074cd2) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb1,	// (0x00074cd2) cntbar_detail_list_event_pane_t

0x2dc3,	// (0x00067be4) cell_cntbar_detail_list_shct_pane_g1

0x9b3f,	// (0x0006e960) navi_pane_mv_g3

0x00aa,	// (0x00064ecb) main_cntbar_detail_pane_ParamLimits

0x7850,	// (0x0006c671) main_notif_wgt_pane

0xc0f4,	// (0x00070f15) aid_tch_main_mp4_pane_g4

0xc329,	// (0x0007114a) popup_slider_window_cp02

0x3bf3,	// (0x00068a14) list_recal_day_event_pane

0xe983,	// (0x000737a4) cntbar_detail_btn_pane_ParamLimits

0xe983,	// (0x000737a4) cntbar_detail_btn_pane

0xe993,	// (0x000737b4) cntbar_detail_btn_pane_cp01_ParamLimits

0xe993,	// (0x000737b4) cntbar_detail_btn_pane_cp01

0xe9af,	// (0x000737d0) cntbar_detail_list_shct_pane_ParamLimits

0xe9bb,	// (0x000737dc) cntbar_detail_pane_g1_ParamLimits

0xe9bb,	// (0x000737dc) cntbar_detail_pane_g1

0xe9c7,	// (0x000737e8) cntbar_detail_pane_t1_ParamLimits

0xe9c7,	// (0x000737e8) cntbar_detail_pane_t1

0xea53,	// (0x00073874) cntbar_detail_list_event_pane_g3_ParamLimits

0xea53,	// (0x00073874) cntbar_detail_list_event_pane_g3

0xea6b,	// (0x0007388c) cntbar_detail_list_event_pane_g4_ParamLimits

0xea6b,	// (0x0007388c) cntbar_detail_list_event_pane_g4

0xea83,	// (0x000738a4) cntbar_detail_list_event_pane_g5_ParamLimits

0xea83,	// (0x000738a4) cntbar_detail_list_event_pane_g5

0xea9b,	// (0x000738bc) cntbar_detail_list_event_pane_g6_ParamLimits

0xea9b,	// (0x000738bc) cntbar_detail_list_event_pane_g6

0xeadd,	// (0x000738fe) cntbar_detail_list_event_pane_t3_ParamLimits

0xeadd,	// (0x000738fe) cntbar_detail_list_event_pane_t3

0xeaef,	// (0x00073910) popup_notif_wgt_window_ParamLimits

0xeaef,	// (0x00073910) popup_notif_wgt_window

0xeaff,	// (0x00073920) popup_submenu_window_cp01_ParamLimits

0xeaff,	// (0x00073920) popup_submenu_window_cp01

0x147b,	// (0x0006629c) bg_popup_window_pane_cp10

0x3f0e,	// (0x00068d2f) listscroll_notif_wgt_pane

0x3f18,	// (0x00068d39) list_notif_wgt_window

0x3f21,	// (0x00068d42) scroll_pane_cp033

0x3f2a,	// (0x00068d4b) list_notif_wgt_row_pane_ParamLimits

0x3f2a,	// (0x00068d4b) list_notif_wgt_row_pane

0x3f3c,	// (0x00068d5d) aid_size_list_notif_wgt_del

0x3f45,	// (0x00068d66) list_notif_wgt_row_pane_g1

0x3f4d,	// (0x00068d6e) list_notif_wgt_row_pane_g2

0x3f55,	// (0x00068d76) list_notif_wgt_row_pane_g3

0x0002,

0xfeb8,	// (0x00074cd9) list_notif_wgt_row_pane_g

0x3f5e,	// (0x00068d7f) list_notif_wgt_row_pane_t1

0x3f6c,	// (0x00068d8d) list_notif_wgt_row_pane_t2

0x3f7a,	// (0x00068d9b) list_notif_wgt_row_pane_t3

0x0002,

0xfebf,	// (0x00074ce0) list_notif_wgt_row_pane_t

0x4a86,	// (0x000698a7) list_recal_day_event_pane_g1

0x3f88,	// (0x00068da9) list_recal_day_event_pane_t1

0x7850,	// (0x0006c671) bg_button_pane_cp045

0x3f97,	// (0x00068db8) cntbar_detail_btn_pane_t1

0x28bd,	// (0x000676de) main_callh_pane_ParamLimits

0x28bd,	// (0x000676de) main_callh_pane

0x7850,	// (0x0006c671) main_coverflow0_pane

0x7850,	// (0x0006c671) main_wgtman_pane

0xe20a,	// (0x0007302b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xe20a,	// (0x0007302b) main_fs_bigclock_unlock_btn_pane

0x37a2,	// (0x000685c3) bg_button_pane_cp16

0x37b2,	// (0x000685d3) cell_tport_appsw_pane_g3

0xeb0d,	// (0x0007392e) cf0_flow_pane_ParamLimits

0xeb0d,	// (0x0007392e) cf0_flow_pane

0x3fa5,	// (0x00068dc6) listscroll_cf0_pane

0x3fae,	// (0x00068dcf) main_cf0_pane_g1

0xeb1c,	// (0x0007393d) main_cf0_pane_t1_ParamLimits

0xeb1c,	// (0x0007393d) main_cf0_pane_t1

0xeb30,	// (0x00073951) main_cf0_pane_t2_ParamLimits

0xeb30,	// (0x00073951) main_cf0_pane_t2

0x0001,

0xfec6,	// (0x00074ce7) main_cf0_pane_t_ParamLimits

0xfec6,	// (0x00074ce7) main_cf0_pane_t

0x3fb8,	// (0x00068dd9) scroll_pane_cp11

0xeb44,	// (0x00073965) cf0_flow_pane_g1

0xeb4c,	// (0x0007396d) cf0_flow_pane_g2

0x0001,

0xfecb,	// (0x00074cec) cf0_flow_pane_g

0xeb54,	// (0x00073975) cf0_flow_pane_t1

0x7850,	// (0x0006c671) main_call6_pane

0x7850,	// (0x0006c671) main_calllock_pane

0xeb62,	// (0x00073983) call6_btn_grp_pane_ParamLimits

0xeb62,	// (0x00073983) call6_btn_grp_pane

0xeb71,	// (0x00073992) call6_pane_g1_ParamLimits

0xeb71,	// (0x00073992) call6_pane_g1

0xeb80,	// (0x000739a1) popup_call6_1st_window_ParamLimits

0xeb80,	// (0x000739a1) popup_call6_1st_window

0xeb8e,	// (0x000739af) popup_call6_2nd_window_ParamLimits

0xeb8e,	// (0x000739af) popup_call6_2nd_window

0xeb9c,	// (0x000739bd) cell_call6_btn_pane_ParamLimits

0xeb9c,	// (0x000739bd) cell_call6_btn_pane

0x147b,	// (0x0006629c) bg_popup_call2_in_pane_cp03

0x3fc3,	// (0x00068de4) popup_call6_1st_window_g1

0x3fcb,	// (0x00068dec) popup_call6_1st_window_g2

0x3fd3,	// (0x00068df4) popup_call6_1st_window_g3

0x0002,

0xfed0,	// (0x00074cf1) popup_call6_1st_window_g

0x3fdb,	// (0x00068dfc) popup_call6_1st_window_t1

0x3fea,	// (0x00068e0b) popup_call6_1st_window_t2

0x3ffa,	// (0x00068e1b) popup_call6_1st_window_t3

0x0002,

0xfed7,	// (0x00074cf8) popup_call6_1st_window_t

0x147b,	// (0x0006629c) bg_popup_call2_in_pane_cp04

0x3fc3,	// (0x00068de4) popup_call6_2nd_window_g1

0x3fcb,	// (0x00068dec) popup_call6_2nd_window_g2

0x3fd3,	// (0x00068df4) popup_call6_2nd_window_g3

0x0002,

0xfed0,	// (0x00074cf1) popup_call6_2nd_window_g

0x3fdb,	// (0x00068dfc) popup_call6_2nd_window_t1

0x7850,	// (0x0006c671) bg_button_pane_cp15

0x400a,	// (0x00068e2b) cell_call6_btn_pane_g1

0x4013,	// (0x00068e34) cell_call6_btn_pane_t1

0xebab,	// (0x000739cc) listscroll_wgtman_pane_ParamLimits

0xebab,	// (0x000739cc) listscroll_wgtman_pane

0xebc9,	// (0x000739ea) wgtman_btn_pane_ParamLimits

0xebc9,	// (0x000739ea) wgtman_btn_pane

0x1332,	// (0x00066153) aid_scroll_copy1

0x4022,	// (0x00068e43) list_wgtman_pane

0xebfe,	// (0x00073a1f) wgtman_btn_pane_g1_ParamLimits

0xebfe,	// (0x00073a1f) wgtman_btn_pane_g1

0xec26,	// (0x00073a47) wgtman_btn_pane_t1_ParamLimits

0xec26,	// (0x00073a47) wgtman_btn_pane_t1

0x402c,	// (0x00068e4d) wgtman_btn_pane_t2_ParamLimits

0x402c,	// (0x00068e4d) wgtman_btn_pane_t2

0x0001,

0xfede,	// (0x00074cff) wgtman_btn_pane_t_ParamLimits

0xfede,	// (0x00074cff) wgtman_btn_pane_t

0xec5d,	// (0x00073a7e) listrow_wgtman_pane_ParamLimits

0xec5d,	// (0x00073a7e) listrow_wgtman_pane

0xec78,	// (0x00073a99) listrow_wgtman_pane_g1

0xec81,	// (0x00073aa2) listrow_wgtman_pane_g2

0x0001,

0xfee3,	// (0x00074d04) listrow_wgtman_pane_g

0x7759,	// (0x0006c57a) listrow_wgtman_pane_t1

0x7767,	// (0x0006c588) listrow_wgtman_pane_t2

0x0001,

0xfee8,	// (0x00074d09) listrow_wgtman_pane_t

0xec8b,	// (0x00073aac) wait_bar_pane_cp09

0x4043,	// (0x00068e64) main_calllock_btn_pane

0x404d,	// (0x00068e6e) main_calllock_pane_g1

0x7850,	// (0x0006c671) bg_button_pane_cp17

0x4059,	// (0x00068e7a) main_calllock_btn_pane_g1

0x4062,	// (0x00068e83) main_calllock_btn_pane_t1

0x7850,	// (0x0006c671) main_dialer3_pane

0x7850,	// (0x0006c671) main_fmrd2_pane

0x2dc3,	// (0x00067be4) main_fs_bigclock_unlock_btn_pane_g1

0x4079,	// (0x00068e9a) main_fs_bigclock_unlock_btn_pane_t1

0xec93,	// (0x00073ab4) area_fmrd2_info_pane_ParamLimits

0xec93,	// (0x00073ab4) area_fmrd2_info_pane

0xeca1,	// (0x00073ac2) area_fmrd2_visual_pane_ParamLimits

0xeca1,	// (0x00073ac2) area_fmrd2_visual_pane

0xecaf,	// (0x00073ad0) fmrd2_indi_pane_ParamLimits

0xecaf,	// (0x00073ad0) fmrd2_indi_pane

0xecbc,	// (0x00073add) area_fmrd2_visual_pane_g1

0xecc4,	// (0x00073ae5) area_fmrd2_visual_pane_t1

0xecd4,	// (0x00073af5) area_fmrd2_visual_pane_t2

0xece4,	// (0x00073b05) area_fmrd2_visual_pane_t3

0x0002,

0xfef2,	// (0x00074d13) area_fmrd2_visual_pane_t

0xecf4,	// (0x00073b15) area_fmrd2_info_pane_g1

0xecfc,	// (0x00073b1d) area_fmrd2_info_pane_t1

0xed0c,	// (0x00073b2d) area_fmrd2_info_pane_t2

0xed1c,	// (0x00073b3d) area_fmrd2_info_pane_t3

0xed2c,	// (0x00073b4d) area_fmrd2_info_pane_t4

0x0003,

0xfef9,	// (0x00074d1a) area_fmrd2_info_pane_t

0xed3a,	// (0x00073b5b) fmrd2_indi_pane_t1

0xed4a,	// (0x00073b6b) fmrd2_indi_pane_t2

0xed5a,	// (0x00073b7b) fmrd2_indi_pane_t3

0x0002,

0xff02,	// (0x00074d23) fmrd2_indi_pane_t

0x55e0,	// (0x0006a401) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x55e0,	// (0x0006a401) list_single_fs_bigclock_indicator_pane_g5

0x5687,	// (0x0006a4a8) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x5687,	// (0x0006a4a8) list_single_fs_bigclock_indicator_pane_t5

0xe689,	// (0x000734aa) aid_cell_bcale_month_pane_ParamLimits

0xe689,	// (0x000734aa) aid_cell_bcale_month_pane

0xe695,	// (0x000734b6) bcale_month_pane_ParamLimits

0xe695,	// (0x000734b6) bcale_month_pane

0xe6a5,	// (0x000734c6) bcale_preview_pane_ParamLimits

0xe6a5,	// (0x000734c6) bcale_preview_pane

0x3e07,	// (0x00068c28) list_single_fs_bigclock_pane_t1_ParamLimits

0x3e26,	// (0x00068c47) list_single_fs_bigclock_pane_t2_ParamLimits

0x3e26,	// (0x00068c47) list_single_fs_bigclock_pane_t2

0x0001,

0xfe89,	// (0x00074caa) list_single_fs_bigclock_pane_t_ParamLimits

0xfe89,	// (0x00074caa) list_single_fs_bigclock_pane_t

0x4071,	// (0x00068e92) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeed,	// (0x00074d0e) main_fs_bigclock_unlock_btn_pane_g

0xed68,	// (0x00073b89) aid_dia3_key_size_ParamLimits

0xed68,	// (0x00073b89) aid_dia3_key_size

0xed74,	// (0x00073b95) aid_dia3_listrow_size_ParamLimits

0xed74,	// (0x00073b95) aid_dia3_listrow_size

0xed84,	// (0x00073ba5) dia3_keypad_fun_pane_ParamLimits

0xed84,	// (0x00073ba5) dia3_keypad_fun_pane

0xed96,	// (0x00073bb7) dia3_keypad_num_pane_ParamLimits

0xed96,	// (0x00073bb7) dia3_keypad_num_pane

0xeda8,	// (0x00073bc9) dia3_listscroll_pane_ParamLimits

0xeda8,	// (0x00073bc9) dia3_listscroll_pane

0xedb6,	// (0x00073bd7) dia3_numentry_pane_ParamLimits

0xedb6,	// (0x00073bd7) dia3_numentry_pane

0x4087,	// (0x00068ea8) dia3_list_pane

0x4092,	// (0x00068eb3) scroll_pane_cp12

0x7850,	// (0x0006c671) bg_dia3_numentry_pane

0xedc4,	// (0x00073be5) dia3_numentry_pane_t1

0xedd3,	// (0x00073bf4) cell_dia3_key_num_pane

0xeddb,	// (0x00073bfc) cell_dia3_key0_fun_pane_ParamLimits

0xeddb,	// (0x00073bfc) cell_dia3_key0_fun_pane

0xede8,	// (0x00073c09) cell_dia3_key1_fun_pane_ParamLimits

0xede8,	// (0x00073c09) cell_dia3_key1_fun_pane

0xedf5,	// (0x00073c16) dia3_listrow_pane

0x52d2,	// (0x0006a0f3) bg_dia3_numentry_pane_g1

0x7850,	// (0x0006c671) bg_button_pane_cp21

0x409d,	// (0x00068ebe) cell_dia3_key_num_pane_t1

0x40ab,	// (0x00068ecc) cell_dia3_key_num_pane_t2

0x40ba,	// (0x00068edb) cell_dia3_key_num_pane_t3

0x40c9,	// (0x00068eea) cell_dia3_key_num_pane_t4

0x0003,

0xff09,	// (0x00074d2a) cell_dia3_key_num_pane_t

0x7850,	// (0x0006c671) bg_button_pane_cp19

0xee02,	// (0x00073c23) cell_dia3_key0_fun_pane_g1

0x7850,	// (0x0006c671) bg_button_pane_cp20

0xee0a,	// (0x00073c2b) cell_dia3_key1_fun_pane_g1

0xee12,	// (0x00073c33) area_left_week_number_pane

0xee1b,	// (0x00073c3c) area_top_day_name_pane

0xee24,	// (0x00073c45) frame_month_view_pane

0xee2e,	// (0x00073c4f) grid_month_view_pane

0xee38,	// (0x00073c59) cell_top_day_name_pane_ParamLimits

0xee38,	// (0x00073c59) cell_top_day_name_pane

0xee52,	// (0x00073c73) cell_area_left_week_number_pane_ParamLimits

0xee52,	// (0x00073c73) cell_area_left_week_number_pane

0xee66,	// (0x00073c87) cell_month_view_pane_ParamLimits

0xee66,	// (0x00073c87) cell_month_view_pane

0x40d8,	// (0x00068ef9) frm_month_g1

0xee83,	// (0x00073ca4) frm_month_g2

0xee8d,	// (0x00073cae) frm_month_g3

0xee97,	// (0x00073cb8) frm_month_g4

0xeea1,	// (0x00073cc2) frm_month_g5

0xeeab,	// (0x00073ccc) frm_month_g6

0xeeb5,	// (0x00073cd6) frm_month_g7

0x40e1,	// (0x00068f02) frm_month_g8

0xeebf,	// (0x00073ce0) frm_month_g9

0xeec8,	// (0x00073ce9) frm_month_g10

0xeed1,	// (0x00073cf2) frm_month_g11

0xeeda,	// (0x00073cfb) frm_month_g12

0xeee3,	// (0x00073d04) frm_month_g13

0xeeec,	// (0x00073d0d) frm_month_g14

0xeef5,	// (0x00073d16) frm_month_g15

0xef00,	// (0x00073d21) frm_month_g16

0x000f,

0xff12,	// (0x00074d33) frm_month_g

0xef0b,	// (0x00073d2c) cell_top_day_name_pane_t1

0xef1a,	// (0x00073d3b) cell_area_left_week_number_pane_g1

0xef0b,	// (0x00073d2c) cell_area_left_week_number_pane_t1

0x2dc3,	// (0x00067be4) cell_month_view_pane_g1

0xef22,	// (0x00073d43) cell_month_view_pane_t1

0x7850,	// (0x0006c671) main_fps_pane

0x5877,	// (0x0006a698) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x5877,	// (0x0006a698) cmail_ddmenu_btn02_pane_cp1

0x5893,	// (0x0006a6b4) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x5893,	// (0x0006a6b4) cmail_ddmenu_btn02_pane_cp2

0xe877,	// (0x00073698) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe877,	// (0x00073698) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3c,	// (0x00074c5d) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3c,	// (0x00074c5d) cmail_ddmenu_btn02_pane_g

0xe895,	// (0x000736b6) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe895,	// (0x000736b6) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe41,	// (0x00074c62) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe41,	// (0x00074c62) cmail_ddmenu_btn02_pane_t

0xef31,	// (0x00073d52) fps_text_pane_ParamLimits

0xef31,	// (0x00073d52) fps_text_pane

0xef3e,	// (0x00073d5f) main_fps_pane_g1_ParamLimits

0xef3e,	// (0x00073d5f) main_fps_pane_g1

0xef4c,	// (0x00073d6d) wait_bar_pane_cp010_ParamLimits

0xef4c,	// (0x00073d6d) wait_bar_pane_cp010

0xef58,	// (0x00073d79) fps_text_pane_t1_ParamLimits

0xef58,	// (0x00073d79) fps_text_pane_t1

0xc70b,	// (0x0007152c) cam4_image_uncrop_pane_g1

0xc714,	// (0x00071535) cam4_image_uncrop_pane_g2

0xc71d,	// (0x0007153e) cam4_image_uncrop_pane_g3

0xc726,	// (0x00071547) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x00074729) cam4_image_uncrop_pane_g

0xedf5,	// (0x00073c16) dia3_listrow_pane_ParamLimits

0x7850,	// (0x0006c671) main_phob2_pane

0xe4f8,	// (0x00073319) cell_tport_appsw_pane_cp02_ParamLimits

0xe4f8,	// (0x00073319) cell_tport_appsw_pane_cp02

0xe507,	// (0x00073328) cell_tport_appsw_pane_cp03_ParamLimits

0xe507,	// (0x00073328) cell_tport_appsw_pane_cp03

0x7850,	// (0x0006c671) phob2_contact_card_pane

0x7850,	// (0x0006c671) phob2_listscroll_pane

0x40ea,	// (0x00068f0b) phob2_list_pane

0x40f2,	// (0x00068f13) scroll_pane_cp034

0xef71,	// (0x00073d92) phob2_cc_data_pane_ParamLimits

0xef71,	// (0x00073d92) phob2_cc_data_pane

0xef8b,	// (0x00073dac) phob2_cc_listscroll_pane_ParamLimits

0xef8b,	// (0x00073dac) phob2_cc_listscroll_pane

0xefa5,	// (0x00073dc6) list_double_large_graphic_phob2_pane_ParamLimits

0xefa5,	// (0x00073dc6) list_double_large_graphic_phob2_pane

0xefc3,	// (0x00073de4) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xefc3,	// (0x00073de4) list_double_large_graphic_phob2_pane_g1

0x7775,	// (0x0006c596) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x7775,	// (0x0006c596) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x00074d54) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x00074d54) list_double_large_graphic_phob2_pane_g

0x7781,	// (0x0006c5a2) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x7781,	// (0x0006c5a2) list_double_large_graphic_phob2_pane_t1

0x7796,	// (0x0006c5b7) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x7796,	// (0x0006c5b7) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x00074d59) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x00074d59) list_double_large_graphic_phob2_pane_t

0x7850,	// (0x0006c671) list_highlight_pane_cp024

0x40fa,	// (0x00068f1b) phob2_cc_button_pane

0xefd0,	// (0x00073df1) phob2_cc_data_pane_g1_ParamLimits

0xefd0,	// (0x00073df1) phob2_cc_data_pane_g1

0xefdc,	// (0x00073dfd) phob2_cc_data_pane_g2_ParamLimits

0xefdc,	// (0x00073dfd) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x00074d5e) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x00074d5e) phob2_cc_data_pane_g

0xefe8,	// (0x00073e09) phob2_cc_data_pane_t1_ParamLimits

0xefe8,	// (0x00073e09) phob2_cc_data_pane_t1

0xeffa,	// (0x00073e1b) phob2_cc_data_pane_t2_ParamLimits

0xeffa,	// (0x00073e1b) phob2_cc_data_pane_t2

0xf00c,	// (0x00073e2d) phob2_cc_data_pane_t3_ParamLimits

0xf00c,	// (0x00073e2d) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x00074d63) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x00074d63) phob2_cc_data_pane_t

0x4102,	// (0x00068f23) phob2_cc_list_pane_ParamLimits

0x4102,	// (0x00068f23) phob2_cc_list_pane

0x5052,	// (0x00069e73) scroll_pane_cp035_ParamLimits

0x5052,	// (0x00069e73) scroll_pane_cp035

0x00aa,	// (0x00064ecb) bg_button_pane_cp033

0x410e,	// (0x00068f2f) phob2_cc_button_pane_g1

0x411a,	// (0x00068f3b) phob2_cc_button_pane_t1

0x412f,	// (0x00068f50) phob2_cc_button_pane_t2

0x0001,

0xff49,	// (0x00074d6a) phob2_cc_button_pane_t

0xf01e,	// (0x00073e3f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xf01e,	// (0x00073e3f) list_double_large_graphic_phob2_cc_pane

0xf045,	// (0x00073e66) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xf045,	// (0x00073e66) list_double_large_graphic_phob2_cc_pane_g1

0x77a8,	// (0x0006c5c9) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x77a8,	// (0x0006c5c9) list_double_large_graphic_phob2_cc_pane_g2

0x77b7,	// (0x0006c5d8) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x77b7,	// (0x0006c5d8) list_double_large_graphic_phob2_cc_pane_g3

0x77c6,	// (0x0006c5e7) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x77c6,	// (0x0006c5e7) list_double_large_graphic_phob2_cc_pane_g4

0x77d7,	// (0x0006c5f8) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x77d7,	// (0x0006c5f8) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4e,	// (0x00074d6f) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4e,	// (0x00074d6f) list_double_large_graphic_phob2_cc_pane_g

0x77e6,	// (0x0006c607) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x77e6,	// (0x0006c607) list_double_large_graphic_phob2_cc_pane_t1

0x780f,	// (0x0006c630) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x780f,	// (0x0006c630) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff59,	// (0x00074d7a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff59,	// (0x00074d7a) list_double_large_graphic_phob2_cc_pane_t

0x4141,	// (0x00068f62) list_highlight_pane_cp025_ParamLimits

0x4141,	// (0x00068f62) list_highlight_pane_cp025

0x00aa,	// (0x00064ecb) bg_button_pane_cp033_ParamLimits

0x410e,	// (0x00068f2f) phob2_cc_button_pane_g1_ParamLimits

0x411a,	// (0x00068f3b) phob2_cc_button_pane_t1_ParamLimits

0x412f,	// (0x00068f50) phob2_cc_button_pane_t2_ParamLimits

0xff49,	// (0x00074d6a) phob2_cc_button_pane_t_ParamLimits

0x7b0d,	// (0x0006c92e) popup_wgtman_window

0x4954,	// (0x00069775) scroll_pane_cp038

0xebe6,	// (0x00073a07) wgtman_btn_pane_cp_01_ParamLimits

0xebe6,	// (0x00073a07) wgtman_btn_pane_cp_01

0x414f,	// (0x00068f70) wgtman_content_pane

0x4158,	// (0x00068f79) wgtman_heading_pane

0x7850,	// (0x0006c671) bg_heading_pane_cp02

0x4161,	// (0x00068f82) wgtman_heading_pane_g1

0x4169,	// (0x00068f8a) wgtman_heading_pane_t1

0x4177,	// (0x00068f98) scroll_pane_cp036

0x417f,	// (0x00068fa0) wgtman_list_pane

0x4187,	// (0x00068fa8) wgtman_list_pane_t1_ParamLimits

0x4187,	// (0x00068fa8) wgtman_list_pane_t1

0xc66a,	// (0x0007148b) cam4_grid_pane

0x6b95,	// (0x0006b9b6) bg_button_pane_cp015_ParamLimits

0xd305,	// (0x00072126) bg_button_pane_cp016_ParamLimits

0xd318,	// (0x00072139) bg_button_pane_cp017_ParamLimits

0x6bd9,	// (0x0006b9fa) popup_vitu2_query_window_g3_ParamLimits

0x6bd9,	// (0x0006b9fa) popup_vitu2_query_window_g3

0x6c52,	// (0x0006ba73) popup_vitu2_query_window_t6_ParamLimits

0x6c52,	// (0x0006ba73) popup_vitu2_query_window_t6

0x6c7d,	// (0x0006ba9e) popup_vitu2_query_window_t7_ParamLimits

0x6c7d,	// (0x0006ba9e) popup_vitu2_query_window_t7

0x5391,	// (0x0006a1b2) cam4_grid_pane_g1

0x539a,	// (0x0006a1bb) cam4_grid_pane_g2

0x41a4,	// (0x00068fc5) cam4_grid_pane_g3

0x41ad,	// (0x00068fce) cam4_grid_pane_g4

0x0003,

0xff5e,	// (0x00074d7f) cam4_grid_pane_g

0x8817,	// (0x0006d638) aid_placing_vt_slider_lsc_ParamLimits

0x8b63,	// (0x0006d984) vidtel_button_pane_ParamLimits

0x8b63,	// (0x0006d984) vidtel_button_pane

0x41b8,	// (0x00068fd9) bg_button_pane_cp034

0xf056,	// (0x00073e77) vidtel_button_pane_g1

0x41c2,	// (0x00068fe3) vidtel_button_pane_t1

0x4a64,	// (0x00069885) aid_size_vtel_slider_touch

0x5052,	// (0x00069e73) scroll_pane_cp039

0x5310,	// (0x0006a131) ncim_query_button_pane_cp01_ParamLimits

0x532f,	// (0x0006a150) ncimui_query_pane_g1_ParamLimits

0x00aa,	// (0x00064ecb) input_focus_pane_cp012_ParamLimits

0x5354,	// (0x0006a175) ncim_query_entry_pane_t1_ParamLimits

0x5052,	// (0x00069e73) scroll_pane_cp039_ParamLimits

0x9ab1,	// (0x0006e8d2) navi_pane_bcale_mc_g1

0x9ab9,	// (0x0006e8da) navi_pane_bcale_mc_t1

0x58dc,	// (0x0006a6fd) main_sp_fs_email_pane_g1

0x58e4,	// (0x0006a705) main_sp_fs_email_pane_g2

0x0001,

0xfcfa,	// (0x00074b1b) main_sp_fs_email_pane_g

0x3aa1,	// (0x000688c2) list_single_cale_mrui_row_pane_g3_ParamLimits

0x3aa1,	// (0x000688c2) list_single_cale_mrui_row_pane_g3

0xe8bd,	// (0x000736de) list_single_recal_day_pane_g5_event_pane

0x3c66,	// (0x00068a87) list_single_recal_day_pane_g7

0x41d0,	// (0x00068ff1) list_recal_day_event_pane_cp01

0x41d9,	// (0x00068ffa) list_recal_vselct_arw_lo_pane_cp01

0x41e1,	// (0x00069002) list_recal_vselct_arw_up_pane_cp01

0x41e9,	// (0x0006900a) list_recal_vselct_pane_cp01

0x4a86,	// (0x000698a7) list_recal_day_event_pane_cp01_g1

0x41f3,	// (0x00069014) list_recal_day_event_pane_cp01_t1

0x3c6e,	// (0x00068a8f) list_single_recal_day_pane_t1_ParamLimits

0x3c80,	// (0x00068aa1) list_single_recal_day_pane_t2_ParamLimits

0xfe51,	// (0x00074c72) list_single_recal_day_pane_t_ParamLimits

0x07d1,	// (0x000655f2) bg_notes_pane_ParamLimits

0x07df,	// (0x00065600) list_notes_pane_ParamLimits

0x7e6b,	// (0x0006cc8c) scroll_pane_cp06_ParamLimits

0x0825,	// (0x00065646) main_notes_pane_ParamLimits

0x7850,	// (0x0006c671) main_welc_pane

0xf05e,	// (0x00073e7f) main_welc_body_pane_ParamLimits

0xf05e,	// (0x00073e7f) main_welc_body_pane

0xf06d,	// (0x00073e8e) main_welc_opti_pane_ParamLimits

0xf06d,	// (0x00073e8e) main_welc_opti_pane

0xf07c,	// (0x00073e9d) main_welc_pane_t1_ParamLimits

0xf07c,	// (0x00073e9d) main_welc_pane_t1

0xf08e,	// (0x00073eaf) main_welc_body_row_pane_ParamLimits

0xf08e,	// (0x00073eaf) main_welc_body_row_pane

0xf0b6,	// (0x00073ed7) main_welc_opti_row_pane_ParamLimits

0xf0b6,	// (0x00073ed7) main_welc_opti_row_pane

0x4201,	// (0x00069022) main_welc_opti_row_pane_g1

0x4209,	// (0x0006902a) main_welc_opti_row_pane_t1

0x4218,	// (0x00069039) main_welc_body_row_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
