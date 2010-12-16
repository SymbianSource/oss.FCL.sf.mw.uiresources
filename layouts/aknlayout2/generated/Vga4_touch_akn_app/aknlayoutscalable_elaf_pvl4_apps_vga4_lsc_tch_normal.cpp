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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0000e878 };

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
0x03c3,	// (0x0000ec3b) Screen

0x03cf,	// (0x0000ec47) application_window

0x040b,	// (0x0000ec83) area_bottom_pane_ParamLimits

0x040b,	// (0x0000ec83) area_bottom_pane

0x0444,	// (0x0000ecbc) area_top_pane_ParamLimits

0x0444,	// (0x0000ecbc) area_top_pane

0x956d,	// (0x00017de5) call_video_uplink_pane_ParamLimits

0x956d,	// (0x00017de5) call_video_uplink_pane

0x04d2,	// (0x0000ed4a) main_pane_ParamLimits

0x04d2,	// (0x0000ed4a) main_pane

0xbc5c,	// (0x0001a4d4) context_pane

0x35fc,	// (0x00011e74) navi_pane

0x3633,	// (0x00011eab) popup_cale_events_window_ParamLimits

0x3633,	// (0x00011eab) popup_cale_events_window

0xbc6f,	// (0x0001a4e7) popup_mup_playback_window

0x364b,	// (0x00011ec3) signal_pane

0x9d75,	// (0x000185ed) main_browser_pane

0x9f96,	// (0x0001880e) main_burst_pane

0x3314,	// (0x00011b8c) main_calc_pane

0xbbf8,	// (0x0001a470) main_cale_day_pane

0x0902,	// (0x0000f17a) main_cale_month_pane

0xbbf8,	// (0x0001a470) main_cale_week_pane

0x9f96,	// (0x0001880e) main_call_pane

0x99e1,	// (0x00018259) main_call_poc_pane

0x9f96,	// (0x0001880e) main_camera_pane

0x9f96,	// (0x0001880e) main_chi_dic_pane

0xa7c5,	// (0x0001903d) main_clock_pane

0x99e1,	// (0x00018259) main_fmradio_pane

0x9f96,	// (0x0001880e) main_graph_messa_pane

0x99e1,	// (0x00018259) main_help_pane

0x9d75,	// (0x000185ed) main_im_pane

0x9c3c,	// (0x000184b4) main_image_pane_ParamLimits

0x9c3c,	// (0x000184b4) main_image_pane

0x99e1,	// (0x00018259) main_location2_pane

0x9f96,	// (0x0001880e) main_location_pane

0x9c3c,	// (0x000184b4) main_messa_pane

0x99e1,	// (0x00018259) main_mp2_pane

0x9f96,	// (0x0001880e) main_mp_pane

0x99e1,	// (0x00018259) main_msg_pane

0x99e1,	// (0x00018259) main_mup_eq_pane

0x99e1,	// (0x00018259) main_mup_pane

0x9d75,	// (0x000185ed) main_notes_pane

0x99e1,	// (0x00018259) main_pec_pane

0x99e1,	// (0x00018259) main_phob_pane

0x99e1,	// (0x00018259) main_pinb_pane

0x99e1,	// (0x00018259) main_postcard_pane

0x99e1,	// (0x00018259) main_qdial_pane

0x9f96,	// (0x0001880e) main_skin_pane

0x99e1,	// (0x00018259) main_smil2_pane

0x9f96,	// (0x0001880e) main_smil_pane

0x9f96,	// (0x0001880e) main_video_pane

0x9f96,	// (0x0001880e) main_video_tele_pane

0x9c3c,	// (0x000184b4) main_viewer_pane_ParamLimits

0x9c3c,	// (0x000184b4) main_viewer_pane

0x9f96,	// (0x0001880e) main_vorec_pane

0x336a,	// (0x00011be2) popup_blid_sat_info_window_ParamLimits

0x336a,	// (0x00011be2) popup_blid_sat_info_window

0x33ce,	// (0x00011c46) popup_dyc_status_message_window_ParamLimits

0x33ce,	// (0x00011c46) popup_dyc_status_message_window

0x33e8,	// (0x00011c60) popup_grid_large_graphic_window_ParamLimits

0x33e8,	// (0x00011c60) popup_grid_large_graphic_window

0x34aa,	// (0x00011d22) popup_loc_request_window_ParamLimits

0x34aa,	// (0x00011d22) popup_loc_request_window

0x35d0,	// (0x00011e48) popup_wml_address_window_ParamLimits

0x35d0,	// (0x00011e48) popup_wml_address_window

0x3152,	// (0x000119ca) call_muted_g1

0x2e2b,	// (0x000116a3) popup_call_audio_conf_window_ParamLimits

0x2e2b,	// (0x000116a3) popup_call_audio_conf_window

0x3162,	// (0x000119da) popup_call_audio_first_window_ParamLimits

0x3162,	// (0x000119da) popup_call_audio_first_window

0x31d8,	// (0x00011a50) popup_call_audio_in_window_ParamLimits

0x31d8,	// (0x00011a50) popup_call_audio_in_window

0x3214,	// (0x00011a8c) popup_call_audio_out_window_ParamLimits

0x3214,	// (0x00011a8c) popup_call_audio_out_window

0x324e,	// (0x00011ac6) popup_call_audio_second_window_ParamLimits

0x324e,	// (0x00011ac6) popup_call_audio_second_window

0x32a4,	// (0x00011b1c) popup_call_audio_wait_window_ParamLimits

0x32a4,	// (0x00011b1c) popup_call_audio_wait_window

0x32d9,	// (0x00011b51) popup_number_entry_window_ParamLimits

0x32d9,	// (0x00011b51) popup_number_entry_window

0x9599,	// (0x00017e11) bg_popup_call_pane_cp05_ParamLimits

0x9599,	// (0x00017e11) bg_popup_call_pane_cp05

0x95b9,	// (0x00017e31) popup_number_entry_window_t1

0x95cc,	// (0x00017e44) popup_number_entry_window_t2

0x95de,	// (0x00017e56) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x0001d895) popup_number_entry_window_t

0x9625,	// (0x00017e9d) text_title_cp2

0x9638,	// (0x00017eb0) bg_popup_call_pane_cp_ParamLimits

0x9638,	// (0x00017eb0) bg_popup_call_pane_cp

0x9646,	// (0x00017ebe) call_thumbnail_pane

0x964e,	// (0x00017ec6) popup_call_audio_in_window_g1_ParamLimits

0x964e,	// (0x00017ec6) popup_call_audio_in_window_g1

0x965a,	// (0x00017ed2) popup_call_audio_in_window_g2_ParamLimits

0x965a,	// (0x00017ed2) popup_call_audio_in_window_g2

0x9666,	// (0x00017ede) popup_call_audio_in_window_g3_ParamLimits

0x9666,	// (0x00017ede) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x0001d89e) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x0001d89e) popup_call_audio_in_window_g

0x9672,	// (0x00017eea) popup_call_audio_in_window_t1_ParamLimits

0x9672,	// (0x00017eea) popup_call_audio_in_window_t1

0x968e,	// (0x00017f06) popup_call_audio_in_window_t2_ParamLimits

0x968e,	// (0x00017f06) popup_call_audio_in_window_t2

0x96aa,	// (0x00017f22) popup_call_audio_in_window_t3_ParamLimits

0x96aa,	// (0x00017f22) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x0001d8a5) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x0001d8a5) popup_call_audio_in_window_t

0x9638,	// (0x00017eb0) bg_popup_call_pane_cp01_ParamLimits

0x9638,	// (0x00017eb0) bg_popup_call_pane_cp01

0x9646,	// (0x00017ebe) call_thumbnail_pane_cp02

0x96bd,	// (0x00017f35) call_type_pane_cp022

0x96c5,	// (0x00017f3d) popup_call_audio_out_window_g1_ParamLimits

0x96c5,	// (0x00017f3d) popup_call_audio_out_window_g1

0x96d7,	// (0x00017f4f) popup_call_audio_out_window_g2_ParamLimits

0x96d7,	// (0x00017f4f) popup_call_audio_out_window_g2

0x96e3,	// (0x00017f5b) popup_call_audio_out_window_g3_ParamLimits

0x96e3,	// (0x00017f5b) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x0001d8ac) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x0001d8ac) popup_call_audio_out_window_g

0x96f5,	// (0x00017f6d) popup_call_audio_out_window_t1_ParamLimits

0x96f5,	// (0x00017f6d) popup_call_audio_out_window_t1

0x970d,	// (0x00017f85) popup_call_audio_out_window_t2_ParamLimits

0x970d,	// (0x00017f85) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x0001d8b3) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x0001d8b3) popup_call_audio_out_window_t

0x9722,	// (0x00017f9a) bg_popup_call_pane_ParamLimits

0x9722,	// (0x00017f9a) bg_popup_call_pane

0x0659,	// (0x0000eed1) call_thumbnail_pane_cp_ParamLimits

0x0659,	// (0x0000eed1) call_thumbnail_pane_cp

0x97a6,	// (0x0001801e) call_type_pane_cp01_ParamLimits

0x97a6,	// (0x0001801e) call_type_pane_cp01

0x97ea,	// (0x00018062) popup_call_audio_first_window_g1_ParamLimits

0x97ea,	// (0x00018062) popup_call_audio_first_window_g1

0x9836,	// (0x000180ae) popup_call_audio_first_window_g2_ParamLimits

0x9836,	// (0x000180ae) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x0001d8b8) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x0001d8b8) popup_call_audio_first_window_g

0x987a,	// (0x000180f2) popup_call_audio_first_window_t1_ParamLimits

0x987a,	// (0x000180f2) popup_call_audio_first_window_t1

0x9926,	// (0x0001819e) popup_call_audio_first_window_t4_ParamLimits

0x9926,	// (0x0001819e) popup_call_audio_first_window_t4

0x99b2,	// (0x0001822a) popup_call_audio_first_window_t5_ParamLimits

0x99b2,	// (0x0001822a) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x0001d8bd) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x0001d8bd) popup_call_audio_first_window_t

0x99e1,	// (0x00018259) bg_popup_call_pane_cp02

0x99eb,	// (0x00018263) call_type_pane_cp023

0x99f3,	// (0x0001826b) popup_call_audio_wait_window_g1

0x99fb,	// (0x00018273) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x0001d8c4) popup_call_audio_wait_window_g

0x9a03,	// (0x0001827b) popup_call_audio_wait_window_t3

0x9a11,	// (0x00018289) bg_popup_call_pane_cp03_ParamLimits

0x9a11,	// (0x00018289) bg_popup_call_pane_cp03

0x9a71,	// (0x000182e9) call_thumbnail_pane_cp011_ParamLimits

0x9a71,	// (0x000182e9) call_thumbnail_pane_cp011

0x9a7d,	// (0x000182f5) call_type_pane_cp034_ParamLimits

0x9a7d,	// (0x000182f5) call_type_pane_cp034

0x9ab9,	// (0x00018331) popup_call_audio_second_window_g1_ParamLimits

0x9ab9,	// (0x00018331) popup_call_audio_second_window_g1

0x9af5,	// (0x0001836d) popup_call_audio_second_window_g2_ParamLimits

0x9af5,	// (0x0001836d) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x0001d8c9) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x0001d8c9) popup_call_audio_second_window_g

0x9b31,	// (0x000183a9) popup_call_audio_second_window_t1_ParamLimits

0x9b31,	// (0x000183a9) popup_call_audio_second_window_t1

0x9bb2,	// (0x0001842a) popup_call_audio_second_window_t2_ParamLimits

0x9bb2,	// (0x0001842a) popup_call_audio_second_window_t2

0x9be8,	// (0x00018460) popup_call_audio_second_window_t3_ParamLimits

0x9be8,	// (0x00018460) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x0001d8ce) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x0001d8ce) popup_call_audio_second_window_t

0x99e1,	// (0x00018259) bg_popup_call_pane_cp04

0x9c1e,	// (0x00018496) list_conf_pane

0x9c26,	// (0x0001849e) popup_call_audio_conf_window_t1

0x9c34,	// (0x000184ac) call_thumbnail_pane_g1

0x9c3c,	// (0x000184b4) bg_pinb_pane_ParamLimits

0x9c3c,	// (0x000184b4) bg_pinb_pane

0x9c4a,	// (0x000184c2) find_pinb_pane

0x9c3c,	// (0x000184b4) listscroll_pinb_pane_ParamLimits

0x9c3c,	// (0x000184b4) listscroll_pinb_pane

0x9c54,	// (0x000184cc) pinb_bg_pane_g1

0x9c54,	// (0x000184cc) pinb_bg_pane_g2

0x9c54,	// (0x000184cc) pinb_bg_pane_g3

0x9c54,	// (0x000184cc) pinb_bg_pane_g4

0x9c54,	// (0x000184cc) pinb_bg_pane_g5

0x9c54,	// (0x000184cc) pinb_bg_pane_g6

0x9c54,	// (0x000184cc) pinb_bg_pane_g7

0x9c54,	// (0x000184cc) pinb_bg_pane_g8

0x9c54,	// (0x000184cc) pinb_bg_pane_g9

0x9c54,	// (0x000184cc) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x0001d8d5) pinb_bg_pane_g

0x9516,	// (0x00017d8e) grid_pinb_pane

0x9516,	// (0x00017d8e) list_pinb_pane

0x958b,	// (0x00017e03) scroll_pane_cp01_ParamLimits

0x958b,	// (0x00017e03) scroll_pane_cp01

0x9c5e,	// (0x000184d6) find_pinb_pane_g1_ParamLimits

0x9c5e,	// (0x000184d6) find_pinb_pane_g1

0x9c76,	// (0x000184ee) find_pinb_pane_t1

0x9c88,	// (0x00018500) find_pinb_pane_t2

0x0001,

0xf077,	// (0x0001d8ef) find_pinb_pane_t

0x9c9d,	// (0x00018515) input_focus_pane_cp01_ParamLimits

0x9c9d,	// (0x00018515) input_focus_pane_cp01

0x9ca9,	// (0x00018521) cell_pinb_pane_ParamLimits

0x9ca9,	// (0x00018521) cell_pinb_pane

0x9cb7,	// (0x0001852f) cell_pinb_pane_g1_ParamLimits

0x9cb7,	// (0x0001852f) cell_pinb_pane_g1

0x9cc5,	// (0x0001853d) cell_pinb_pane_g2_ParamLimits

0x9cc5,	// (0x0001853d) cell_pinb_pane_g2

0x9cc5,	// (0x0001853d) cell_pinb_pane_g3_ParamLimits

0x9cc5,	// (0x0001853d) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x0001d8f4) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x0001d8f4) cell_pinb_pane_g

0x99e1,	// (0x00018259) grid_highlight_pane_cp01

0x9ca9,	// (0x00018521) list_pinb_item_pane_ParamLimits

0x9ca9,	// (0x00018521) list_pinb_item_pane

0x9516,	// (0x00017d8e) list_highlight_pane_cp02

0x9cd3,	// (0x0001854b) list_pinb_item_pane_g1_ParamLimits

0x9cd3,	// (0x0001854b) list_pinb_item_pane_g1

0x9cc5,	// (0x0001853d) list_pinb_item_pane_g2_ParamLimits

0x9cc5,	// (0x0001853d) list_pinb_item_pane_g2

0x9cb7,	// (0x0001852f) list_pinb_item_pane_g3_ParamLimits

0x9cb7,	// (0x0001852f) list_pinb_item_pane_g3

0x9cc5,	// (0x0001853d) list_pinb_item_pane_g4_ParamLimits

0x9cc5,	// (0x0001853d) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x0001d8fb) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x0001d8fb) list_pinb_item_pane_g

0x9ce1,	// (0x00018559) list_pinb_item_pane_t1_ParamLimits

0x9ce1,	// (0x00018559) list_pinb_item_pane_t1

0x069d,	// (0x0000ef15) calc_display_pane

0x06c2,	// (0x0000ef3a) calc_paper_pane

0x06e5,	// (0x0000ef5d) grid_calc_pane

0x9516,	// (0x00017d8e) bg_list_pane_cp01

0x9cfd,	// (0x00018575) clock_g1

0x9cfd,	// (0x00018575) clock_g2

0x0001,

0xf08c,	// (0x0001d904) clock_g

0x9d07,	// (0x0001857f) clock_t1_ParamLimits

0x9d07,	// (0x0001857f) clock_t1

0x9d1b,	// (0x00018593) clock_t2_ParamLimits

0x9d1b,	// (0x00018593) clock_t2

0x9d1b,	// (0x00018593) clock_t3_ParamLimits

0x9d1b,	// (0x00018593) clock_t3

0x9d1b,	// (0x00018593) clock_t4_ParamLimits

0x9d1b,	// (0x00018593) clock_t4

0x9d07,	// (0x0001857f) clock_t5_ParamLimits

0x9d07,	// (0x0001857f) clock_t5

0x9d1b,	// (0x00018593) clock_t6_ParamLimits

0x9d1b,	// (0x00018593) clock_t6

0x9d1b,	// (0x00018593) clock_t7_ParamLimits

0x9d1b,	// (0x00018593) clock_t7

0x9d1b,	// (0x00018593) clock_t8_ParamLimits

0x9d1b,	// (0x00018593) clock_t8

0x9d1b,	// (0x00018593) clock_t9_ParamLimits

0x9d1b,	// (0x00018593) clock_t9

0x0008,

0xf091,	// (0x0001d909) clock_t_ParamLimits

0xf091,	// (0x0001d909) clock_t

0x9516,	// (0x00017d8e) popup_clock_analogue_window_cp02

0x9516,	// (0x00017d8e) popup_clock_digital_window_cp01

0x99e1,	// (0x00018259) listscroll_help_pane

0x99e1,	// (0x00018259) phob_pre_status_pane

0x9d2f,	// (0x000185a7) grid_qdial_pane

0x9c3c,	// (0x000184b4) listscroll_mce_pane

0x9c3c,	// (0x000184b4) bg_notes_pane

0x9d39,	// (0x000185b1) list_notes_pane

0x0713,	// (0x0000ef8b) scroll_pane_cp06

0x9d47,	// (0x000185bf) bg_calc_paper_pane

0x9d5b,	// (0x000185d3) list_calc_pane

0x9d75,	// (0x000185ed) bg_calc_display_pane

0x0727,	// (0x0000ef9f) calc_display_pane_t1

0x073c,	// (0x0000efb4) calc_display_pane_t2

0x9d81,	// (0x000185f9) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x0001d91c) calc_display_pane_t

0x0751,	// (0x0000efc9) cell_calc_pane_ParamLimits

0x0751,	// (0x0000efc9) cell_calc_pane

0x9d93,	// (0x0001860b) bg_calc_paper_pane_g1

0x9d9f,	// (0x00018617) bg_calc_paper_pane_g2

0x9dab,	// (0x00018623) bg_calc_paper_pane_g3

0x9db7,	// (0x0001862f) bg_calc_paper_pane_g4

0x9dc3,	// (0x0001863b) bg_calc_paper_pane_g5

0x078c,	// (0x0000f004) bg_calc_paper_pane_g6

0x079f,	// (0x0000f017) bg_calc_paper_pane_g7

0x07b2,	// (0x0000f02a) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x0001d923) bg_calc_paper_pane_g

0x07c5,	// (0x0000f03d) calc_bg_paper_pane_g9

0x07d8,	// (0x0000f050) list_calc_item_pane_ParamLimits

0x07d8,	// (0x0000f050) list_calc_item_pane

0x9dcf,	// (0x00018647) list_calc_item_pane_g1

0x9ddc,	// (0x00018654) list_calc_item_pane_t1_ParamLimits

0x9ddc,	// (0x00018654) list_calc_item_pane_t1

0x07f0,	// (0x0000f068) list_calc_item_pane_t2_ParamLimits

0x07f0,	// (0x0000f068) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x0001d934) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x0001d934) list_calc_item_pane_t

0x9c54,	// (0x000184cc) cell_calc_pane_g1

0x9dee,	// (0x00018666) grid_highlight_pane_cp02

0x9e10,	// (0x00018688) bg_calc_display_pane_g1

0x0822,	// (0x0000f09a) bg_calc_display_pane_g2

0x082c,	// (0x0000f0a4) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x0001d93e) bg_calc_display_pane_g

0x0835,	// (0x0000f0ad) cell_qdial_pane_ParamLimits

0x0835,	// (0x0000f0ad) cell_qdial_pane

0x0849,	// (0x0000f0c1) cell_qdial_pane_g1_ParamLimits

0x0849,	// (0x0000f0c1) cell_qdial_pane_g1

0x085f,	// (0x0000f0d7) cell_qdial_pane_g2_ParamLimits

0x085f,	// (0x0000f0d7) cell_qdial_pane_g2

0x9e19,	// (0x00018691) cell_qdial_pane_g3_ParamLimits

0x9e19,	// (0x00018691) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x0001d945) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x0001d945) cell_qdial_pane_g

0x0886,	// (0x0000f0fe) cell_qdial_pane_t1_ParamLimits

0x0886,	// (0x0000f0fe) cell_qdial_pane_t1

0x089e,	// (0x0000f116) cell_qdial_pane_t2_ParamLimits

0x089e,	// (0x0000f116) cell_qdial_pane_t2

0x08b1,	// (0x0000f129) cell_qdial_pane_t3_ParamLimits

0x08b1,	// (0x0000f129) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x0001d94e) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x0001d94e) cell_qdial_pane_t

0x99e1,	// (0x00018259) grid_highlight_pane_cp04

0x9e25,	// (0x0001869d) thumbnail_qdial_pane_ParamLimits

0x9e25,	// (0x0001869d) thumbnail_qdial_pane

0x9e81,	// (0x000186f9) list_help_pane

0x9e8a,	// (0x00018702) scroll_pane_cp02

0x08c4,	// (0x0000f13c) help_list_pane_t1_ParamLimits

0x08c4,	// (0x0000f13c) help_list_pane_t1

0x9e93,	// (0x0001870b) bg_notes_pane_g2

0x9e9b,	// (0x00018713) bg_notes_pane_g3

0x9ea3,	// (0x0001871b) notes_bg_pane_g1

0x9eab,	// (0x00018723) notes_bg_pane_g4

0x9eb3,	// (0x0001872b) notes_bg_pane_g5

0x9ebb,	// (0x00018733) notes_bg_pane_g6

0x9ec3,	// (0x0001873b) notes_bg_pane_g7

0x9ecb,	// (0x00018743) notes_bg_pane_g8

0x9ed3,	// (0x0001874b) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x0001d96c) notes_bg_pane_g

0x08e8,	// (0x0000f160) list_notes_text_pane_ParamLimits

0x08e8,	// (0x0000f160) list_notes_text_pane

0x9edb,	// (0x00018753) list_notes_text_pane_g1

0x9ee4,	// (0x0001875c) list_notes_text_pane_t1

0x0902,	// (0x0000f17a) listscroll_cale_week_pane

0x092e,	// (0x0000f1a6) bg_cale_heading_pane

0x0952,	// (0x0000f1ca) bg_cale_pane_cp01

0x096f,	// (0x0000f1e7) cale_week_corner_pane

0x098e,	// (0x0000f206) cale_week_day_heading_pane

0x09b7,	// (0x0000f22f) cale_week_scroll_pane_g1

0x09d6,	// (0x0000f24e) cale_week_scroll_pane_g2

0x09ee,	// (0x0000f266) cale_week_scroll_pane_g3

0x0a06,	// (0x0000f27e) cale_week_scroll_pane_g4

0x0a1e,	// (0x0000f296) cale_week_scroll_pane_g5

0x0a3e,	// (0x0000f2b6) cale_week_scroll_pane_g6

0x0a5e,	// (0x0000f2d6) cale_week_scroll_pane_g7

0x0a7e,	// (0x0000f2f6) cale_week_scroll_pane_g8

0x0aa2,	// (0x0000f31a) cale_week_scroll_pane_g9

0x0aba,	// (0x0000f332) cale_week_scroll_pane_g10

0x0ad2,	// (0x0000f34a) cale_week_scroll_pane_g11

0x0aea,	// (0x0000f362) cale_week_scroll_pane_g12

0x0b0a,	// (0x0000f382) cale_week_scroll_pane_g13

0x0b2e,	// (0x0000f3a6) cale_week_scroll_pane_g14

0x0b52,	// (0x0000f3ca) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x0001d97b) cale_week_scroll_pane_g

0x0b9a,	// (0x0000f412) cale_week_time_pane

0x0bbe,	// (0x0000f436) grid_cale_week_pane

0x9f1e,	// (0x00018796) scroll_pane_cp08

0x0bec,	// (0x0000f464) cell_cale_week_pane_ParamLimits

0x0bec,	// (0x0000f464) cell_cale_week_pane

0x0c84,	// (0x0000f4fc) cale_week_day_heading_pane_t1

0x0cae,	// (0x0000f526) cale_week_day_heading_pane_t2

0x0cdd,	// (0x0000f555) cale_week_day_heading_pane_t3

0x0d0c,	// (0x0000f584) cale_week_day_heading_pane_t4

0x0d3b,	// (0x0000f5b3) cale_week_day_heading_pane_t5

0x0d6e,	// (0x0000f5e6) cale_week_day_heading_pane_t6

0x0da5,	// (0x0000f61d) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x0001d99c) cale_week_day_heading_pane_t

0x9f3b,	// (0x000187b3) bg_cale_side_pane

0x0dcf,	// (0x0000f647) cale_week_time_pane_t1

0x0de9,	// (0x0000f661) cale_week_time_pane_t2

0x0e03,	// (0x0000f67b) cale_week_time_pane_t3

0x0e1d,	// (0x0000f695) cale_week_time_pane_t4

0x0e37,	// (0x0000f6af) cale_week_time_pane_t5

0x0e51,	// (0x0000f6c9) cale_week_time_pane_t6

0x0e6f,	// (0x0000f6e7) cale_week_time_pane_t7

0x0e91,	// (0x0000f709) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x0001d9ab) cale_week_time_pane_t

0x0eb5,	// (0x0000f72d) cell_cale_week_pane_g2

0x0ed9,	// (0x0000f751) cell_cale_week_pane_g3_ParamLimits

0x0ed9,	// (0x0000f751) cell_cale_week_pane_g3

0x9f49,	// (0x000187c1) grid_highlight_pane_cp07

0x9f51,	// (0x000187c9) listscroll_gms_pane

0x9f5b,	// (0x000187d3) grid_gms_pane

0x9f64,	// (0x000187dc) listscroll_gms_pane_g1

0x9f6c,	// (0x000187e4) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x0001d9bc) listscroll_gms_pane_g

0x0ef1,	// (0x0000f769) scroll_pane_cp010

0x0efc,	// (0x0000f774) cell_gms_pane_ParamLimits

0x0efc,	// (0x0000f774) cell_gms_pane

0x0f13,	// (0x0000f78b) cell_gms_pane_g1

0x9f74,	// (0x000187ec) cell_gms_pane_g2

0x9f7c,	// (0x000187f4) cell_gms_pane_g3

0x9f85,	// (0x000187fd) cell_gms_pane_g4

0x0003,

0xf149,	// (0x0001d9c1) cell_gms_pane_g

0x9f8e,	// (0x00018806) grid_highlight_pane_cp09

0x30d6,	// (0x0001194e) phob_pre_status_pane_g1

0x30de,	// (0x00011956) phob_pre_status_pane_g2

0x30e6,	// (0x0001195e) phob_pre_status_pane_g3

0x30ee,	// (0x00011966) phob_pre_status_pane_g4

0x0004,

0xf4e5,	// (0x0001dd5d) phob_pre_status_pane_g

0x30fe,	// (0x00011976) phob_pre_status_pane_t1

0x310e,	// (0x00011986) phob_pre_status_pane_t2

0x311e,	// (0x00011996) phob_pre_status_pane_t3

0x0002,

0xf4f0,	// (0x0001dd68) phob_pre_status_pane_t

0x9f96,	// (0x0001880e) bg_list_pane_cp05

0x0f23,	// (0x0000f79b) grid_vorec_pane

0x0f2d,	// (0x0000f7a5) vorec_t1

0x0f3b,	// (0x0000f7b3) vorec_t2

0x0f49,	// (0x0000f7c1) vorec_t3

0x0f57,	// (0x0000f7cf) vorec_t4

0xea20,	// (0x0001d298) vorec_t5

0x8694,	// (0x00016f0c) vorec_t6

0x0004,

0xf152,	// (0x0001d9ca) vorec_t

0x86a2,	// (0x00016f1a) wait_bar_pane_cp01

0x0f73,	// (0x0000f7eb) cell_vorec_pane_ParamLimits

0x0f73,	// (0x0000f7eb) cell_vorec_pane

0x9f9e,	// (0x00018816) cell_vorec_pane_g1

0x99e1,	// (0x00018259) grid_highlight_pane_cp05

0x958b,	// (0x00017e03) cams_zoom_pane

0x958b,	// (0x00017e03) image_vga_pane

0x9cb7,	// (0x0001852f) main_camera_pane_g1

0x9cb7,	// (0x0001852f) main_camera_pane_g2

0x9cb7,	// (0x0001852f) main_camera_pane_g3

0x9cb7,	// (0x0001852f) main_camera_pane_g4

0x9cb7,	// (0x0001852f) main_camera_pane_g5

0x9cb7,	// (0x0001852f) main_camera_pane_g6

0x9cb7,	// (0x0001852f) main_camera_pane_g7

0x0007,

0xf15d,	// (0x0001d9d5) main_camera_pane_g

0x9d07,	// (0x0001857f) main_camera_pane_t1

0x9d07,	// (0x0001857f) main_camera_pane_t2

0x0001,

0xf16e,	// (0x0001d9e6) main_camera_pane_t

0x0f9c,	// (0x0000f814) cams_zoom_pane_cp_ParamLimits

0x0f9c,	// (0x0000f814) cams_zoom_pane_cp

0x0fd0,	// (0x0000f848) image_cif_pane_ParamLimits

0x0fd0,	// (0x0000f848) image_cif_pane

0x9516,	// (0x00017d8e) image_subqcif_pane

0x0fe2,	// (0x0000f85a) main_video_pane_g1_ParamLimits

0x0fe2,	// (0x0000f85a) main_video_pane_g1

0x1010,	// (0x0000f888) main_video_pane_g2_ParamLimits

0x1010,	// (0x0000f888) main_video_pane_g2

0x104a,	// (0x0000f8c2) main_video_pane_g3_ParamLimits

0x104a,	// (0x0000f8c2) main_video_pane_g3

0x104a,	// (0x0000f8c2) main_video_pane_g4_ParamLimits

0x104a,	// (0x0000f8c2) main_video_pane_g4

0x107e,	// (0x0000f8f6) main_video_pane_g5_ParamLimits

0x107e,	// (0x0000f8f6) main_video_pane_g5

0x9fa8,	// (0x00018820) main_video_pane_g6_ParamLimits

0x9fa8,	// (0x00018820) main_video_pane_g6

0x0006,

0xf173,	// (0x0001d9eb) main_video_pane_g_ParamLimits

0xf173,	// (0x0001d9eb) main_video_pane_g

0x109a,	// (0x0000f912) main_video_pane_t1_ParamLimits

0x109a,	// (0x0000f912) main_video_pane_t1

0x9cfd,	// (0x00018575) cams_zoom_pane_g1

0x9cfd,	// (0x00018575) cams_zoom_pane_g2

0x9cfd,	// (0x00018575) cams_zoom_pane_g3

0x9cfd,	// (0x00018575) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x0001d9fa) cams_zoom_pane_g

0x958b,	// (0x00017e03) grid_cams_pane

0x958b,	// (0x00017e03) linegrid_cams_pane

0x10de,	// (0x0000f956) cell_cams_pane_ParamLimits

0x10de,	// (0x0000f956) cell_cams_pane

0x9516,	// (0x00017d8e) cams_burst_image_pane

0x9cfd,	// (0x00018575) cell_cams_pane_g1

0x9516,	// (0x00017d8e) grid_highlight_pane_cp03

0x9c54,	// (0x000184cc) mp_bg_pane_g1

0x9516,	// (0x00017d8e) bg_list_pane_cp03

0x9516,	// (0x00017d8e) bg_mp_pane

0x9516,	// (0x00017d8e) grid_mp_pane

0x9cfd,	// (0x00018575) media_player_g1

0xa4ec,	// (0x00018d64) media_player_t1

0xa4ec,	// (0x00018d64) media_player_t2

0xa4ec,	// (0x00018d64) media_player_t3

0xa4ec,	// (0x00018d64) media_player_t4

0xa4ec,	// (0x00018d64) media_player_t5

0xa4ec,	// (0x00018d64) media_player_t6

0xa4ec,	// (0x00018d64) media_player_t7

0x0006,

0xf4cf,	// (0x0001dd47) media_player_t

0x9516,	// (0x00017d8e) wait_bar_pane_cp02

0xf4b4,	// (0x0001dd2c) main_usb_pane_t

0xa7c5,	// (0x0001903d) cell_mp_pane

0x9c54,	// (0x000184cc) cell_mp_pane_g1

0x99e1,	// (0x00018259) grid_highlight_pane_cp06

0x9fc2,	// (0x0001883a) grid_skin_colour_pane

0x9fca,	// (0x00018842) list_highlight_pane_cp03

0x10f3,	// (0x0000f96b) skin_g1

0x9fd2,	// (0x0001884a) skin_t1

0x9fe1,	// (0x00018859) skin_t2

0x0001,

0xf1b0,	// (0x0001da28) skin_t

0x10fb,	// (0x0000f973) cell_skin_colour_pane_ParamLimits

0x10fb,	// (0x0000f973) cell_skin_colour_pane

0x9fef,	// (0x00018867) cell_skin_colour_pane_g1

0x116d,	// (0x0000f9e5) call_video_g1_ParamLimits

0x116d,	// (0x0000f9e5) call_video_g1

0x1189,	// (0x0000fa01) call_video_g2_ParamLimits

0x1189,	// (0x0000fa01) call_video_g2

0x0001,

0xf1b5,	// (0x0001da2d) call_video_g_ParamLimits

0xf1b5,	// (0x0001da2d) call_video_g

0x11d1,	// (0x0000fa49) call_video_uplink_pane_cp1_ParamLimits

0x11d1,	// (0x0000fa49) call_video_uplink_pane_cp1

0xa001,	// (0x00018879) call_video_uplink_pane_cp2

0x1261,	// (0x0000fad9) video_down_crop_pane_ParamLimits

0x1261,	// (0x0000fad9) video_down_crop_pane

0x1349,	// (0x0000fbc1) video_down_pane_ParamLimits

0x1349,	// (0x0000fbc1) video_down_pane

0xa009,	// (0x00018881) video_down_subqcif_pane_ParamLimits

0xa009,	// (0x00018881) video_down_subqcif_pane

0xa023,	// (0x0001889b) video_down_subqcif_pane_cp_ParamLimits

0xa023,	// (0x0001889b) video_down_subqcif_pane_cp

0xa049,	// (0x000188c1) im_reading_pane_ParamLimits

0xa049,	// (0x000188c1) im_reading_pane

0x1454,	// (0x0000fccc) im_writing_pane_ParamLimits

0x1454,	// (0x0000fccc) im_writing_pane

0x1472,	// (0x0000fcea) im_reading_pane_t1

0xa063,	// (0x000188db) list_im_pane

0xa074,	// (0x000188ec) scroll_pane_cp07

0x14b1,	// (0x0000fd29) im_writing_pane_t1_ParamLimits

0x14b1,	// (0x0000fd29) im_writing_pane_t1

0xa08d,	// (0x00018905) im_writing_pane_t2_ParamLimits

0xa08d,	// (0x00018905) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x0001da37) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x0001da37) im_writing_pane_t

0x99e1,	// (0x00018259) input_focus_pane_cp04

0x99e1,	// (0x00018259) input_focus_pane_cp05

0x14c6,	// (0x0000fd3e) list_im_single_pane_ParamLimits

0x14c6,	// (0x0000fd3e) list_im_single_pane

0xa0aa,	// (0x00018922) list_single_im_pane_t1

0x9f96,	// (0x0001880e) blid_accuracy_pane

0x9f96,	// (0x0001880e) blid_compass_pane

0xbbb0,	// (0x0001a428) main_location_t1

0xbbb0,	// (0x0001a428) main_location_t2

0xbbb0,	// (0x0001a428) main_location_t3

0x0002,

0xf4de,	// (0x0001dd56) main_location_t

0x99e1,	// (0x00018259) aid_levels_location

0x9c54,	// (0x000184cc) blid_accuracy_pane_g1

0x9c54,	// (0x000184cc) blid_accuracy_pane_g2

0x0001,

0xf20e,	// (0x0001da86) blid_accuracy_pane_g

0xa0e4,	// (0x0001895c) wml_content_pane

0xa122,	// (0x0001899a) wml_button_pane_ParamLimits

0xa122,	// (0x0001899a) wml_button_pane

0x14dc,	// (0x0000fd54) wml_list_single_large_pane_ParamLimits

0x14dc,	// (0x0000fd54) wml_list_single_large_pane

0x14f5,	// (0x0000fd6d) wml_list_single_medium_pane_ParamLimits

0x14f5,	// (0x0000fd6d) wml_list_single_medium_pane

0x150f,	// (0x0000fd87) wml_list_single_small_pane_ParamLimits

0x150f,	// (0x0000fd87) wml_list_single_small_pane

0xa136,	// (0x000189ae) wml_selection_box_pane_ParamLimits

0xa136,	// (0x000189ae) wml_selection_box_pane

0xa149,	// (0x000189c1) wml_list_single_pane_t1

0xa158,	// (0x000189d0) wml_list_single_medium_pane_t1

0xa167,	// (0x000189df) wml_list_single_large_pane_t1

0xa176,	// (0x000189ee) input_focus_pane_cp02_ParamLimits

0xa176,	// (0x000189ee) input_focus_pane_cp02

0xa189,	// (0x00018a01) wml_selection_box_pane_g1

0xa192,	// (0x00018a0a) wml_selection_box_pane_t1_ParamLimits

0xa192,	// (0x00018a0a) wml_selection_box_pane_t1

0x9c3c,	// (0x000184b4) bg_wml_button_pane_ParamLimits

0x9c3c,	// (0x000184b4) bg_wml_button_pane

0xa1aa,	// (0x00018a22) wml_button_pane_g1

0xa1b2,	// (0x00018a2a) wml_button_pane_t1

0xa1aa,	// (0x00018a22) wml_button_bg_pane_g1

0xa1c2,	// (0x00018a3a) wml_button_bg_pane_g2

0xa1ca,	// (0x00018a42) wml_button_bg_pane_g3

0xa1d2,	// (0x00018a4a) wml_button_bg_pane_g4

0xa1da,	// (0x00018a52) wml_button_bg_pane_g5

0xa1e2,	// (0x00018a5a) wml_button_bg_pane_g6

0xa1ea,	// (0x00018a62) wml_button_bg_pane_g7

0xa1f2,	// (0x00018a6a) wml_button_bg_pane_g8

0xa1fa,	// (0x00018a72) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x0001da3c) wml_button_bg_pane_g

0x152b,	// (0x0000fda3) bg_list_pane_cp02

0xa202,	// (0x00018a7a) mce_header_pane_ParamLimits

0xa202,	// (0x00018a7a) mce_header_pane

0xa218,	// (0x00018a90) mce_icon_pane

0xa218,	// (0x00018a90) mce_image_pane

0xa221,	// (0x00018a99) mce_text_pane_ParamLimits

0xa221,	// (0x00018a99) mce_text_pane

0x1535,	// (0x0000fdad) scroll_pane_cp03

0xa11a,	// (0x00018992) scroll_pane_cp04

0xa234,	// (0x00018aac) scroll_pane_cp05_ParamLimits

0xa234,	// (0x00018aac) scroll_pane_cp05

0x153f,	// (0x0000fdb7) mce_header_field_pane_ParamLimits

0x153f,	// (0x0000fdb7) mce_header_field_pane

0x1558,	// (0x0000fdd0) mce_header_field_pane_2_ParamLimits

0x1558,	// (0x0000fdd0) mce_header_field_pane_2

0x156e,	// (0x0000fde6) mce_header_field_pane_3

0x1576,	// (0x0000fdee) list_single_mce_message_pane_ParamLimits

0x1576,	// (0x0000fdee) list_single_mce_message_pane

0x1592,	// (0x0000fe0a) list_single_mce_smart_pane_ParamLimits

0x1592,	// (0x0000fe0a) list_single_mce_smart_pane

0xa240,	// (0x00018ab8) input_focus_pane_cp03

0xa249,	// (0x00018ac1) list_header_data_pane

0x15b9,	// (0x0000fe31) mce_header_field_pane_t1

0x15c9,	// (0x0000fe41) list_single_mce_header_pane_ParamLimits

0x15c9,	// (0x0000fe41) list_single_mce_header_pane

0xa251,	// (0x00018ac9) list_single_mce_header_pane_t1

0xa260,	// (0x00018ad8) list_single_mce_message_pane_g1

0xa268,	// (0x00018ae0) list_single_mce_message_pane_t1

0x1603,	// (0x0000fe7b) bg_cale_heading_pane_cp01_ParamLimits

0x1603,	// (0x0000fe7b) bg_cale_heading_pane_cp01

0xa276,	// (0x00018aee) bg_cale_pane_cp02_ParamLimits

0xa276,	// (0x00018aee) bg_cale_pane_cp02

0x1655,	// (0x0000fecd) cale_month_corner_pane

0x1674,	// (0x0000feec) cale_month_day_heading_pane_ParamLimits

0x1674,	// (0x0000feec) cale_month_day_heading_pane

0x16de,	// (0x0000ff56) cale_month_pane_g1_ParamLimits

0x16de,	// (0x0000ff56) cale_month_pane_g1

0x1725,	// (0x0000ff9d) cale_month_pane_g2_ParamLimits

0x1725,	// (0x0000ff9d) cale_month_pane_g2

0x1761,	// (0x0000ffd9) cale_month_pane_g3_ParamLimits

0x1761,	// (0x0000ffd9) cale_month_pane_g3

0x17b5,	// (0x0001002d) cale_month_pane_g4_ParamLimits

0x17b5,	// (0x0001002d) cale_month_pane_g4

0x1809,	// (0x00010081) cale_month_pane_g5_ParamLimits

0x1809,	// (0x00010081) cale_month_pane_g5

0x1865,	// (0x000100dd) cale_month_pane_g6_ParamLimits

0x1865,	// (0x000100dd) cale_month_pane_g6

0x18c9,	// (0x00010141) cale_month_pane_g7_ParamLimits

0x18c9,	// (0x00010141) cale_month_pane_g7

0x1931,	// (0x000101a9) cale_month_pane_g8_ParamLimits

0x1931,	// (0x000101a9) cale_month_pane_g8

0x199d,	// (0x00010215) cale_month_pane_g9_ParamLimits

0x199d,	// (0x00010215) cale_month_pane_g9

0x1a01,	// (0x00010279) cale_month_pane_g10_ParamLimits

0x1a01,	// (0x00010279) cale_month_pane_g10

0x1a53,	// (0x000102cb) cale_month_pane_g11_ParamLimits

0x1a53,	// (0x000102cb) cale_month_pane_g11

0x1aa5,	// (0x0001031d) cale_month_pane_g12_ParamLimits

0x1aa5,	// (0x0001031d) cale_month_pane_g12

0x1afd,	// (0x00010375) cale_month_pane_g13_ParamLimits

0x1afd,	// (0x00010375) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x0001da4f) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x0001da4f) cale_month_pane_g

0x1b55,	// (0x000103cd) cale_month_week_pane

0x1b79,	// (0x000103f1) grid_cale_month_pane_ParamLimits

0x1b79,	// (0x000103f1) grid_cale_month_pane

0x1bda,	// (0x00010452) cale_month_day_heading_pane_t1

0x1c60,	// (0x000104d8) cale_month_day_heading_pane_t2

0x1cd9,	// (0x00010551) cale_month_day_heading_pane_t3

0x1d52,	// (0x000105ca) cale_month_day_heading_pane_t4

0x1dd3,	// (0x0001064b) cale_month_day_heading_pane_t5

0x1e5c,	// (0x000106d4) cale_month_day_heading_pane_t6

0x1ee5,	// (0x0001075d) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x0001da6a) cale_month_day_heading_pane_t

0x9f3b,	// (0x000187b3) bg_cale_side_pane_cp01

0x1f76,	// (0x000107ee) cale_month_week_pane_t1

0x1f8f,	// (0x00010807) cale_month_week_pane_t2

0x1fa8,	// (0x00010820) cale_month_week_pane_t3

0x1fc1,	// (0x00010839) cale_month_week_pane_t4

0x1fda,	// (0x00010852) cale_month_week_pane_t5

0x1ff3,	// (0x0001086b) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x0001da79) cale_month_week_pane_t

0x2018,	// (0x00010890) cell_cale_month_pane_ParamLimits

0x2018,	// (0x00010890) cell_cale_month_pane

0xa2b5,	// (0x00018b2d) cell_cale_month_pane_g1

0x214e,	// (0x000109c6) cell_cale_month_pane_t1_ParamLimits

0x214e,	// (0x000109c6) cell_cale_month_pane_t1

0x9f49,	// (0x000187c1) grid_highlight_pane_cp08

0x9c54,	// (0x000184cc) main_smil_g1

0x217a,	// (0x000109f2) smil_status_pane

0xa2c1,	// (0x00018b39) smil_text_pane

0x9ecb,	// (0x00018743) bg_popup_call3_rect_pane_g8

0x9ed3,	// (0x0001874b) bg_popup_call3_rect_pane_g9

0x0008,

0xf213,	// (0x0001da8b) bg_popup_call3_rect_pane_g

0xbcd1,	// (0x0001a549) smil_status_volume_pane_g1

0xa2cb,	// (0x00018b43) smil_status_pane_t1

0xbd04,	// (0x0001a57c) volume_smil_pane

0xa2e2,	// (0x00018b5a) list_smil_text_pane

0x218f,	// (0x00010a07) scroll_pane_cp011

0x219a,	// (0x00010a12) smil_text_list_pane_t1_ParamLimits

0x219a,	// (0x00010a12) smil_text_list_pane_t1

0xa2ec,	// (0x00018b64) aid_volume_smil_ParamLimits

0xa2ec,	// (0x00018b64) aid_volume_smil

0x9c54,	// (0x000184cc) smil_volume_pane_g1

0x9c54,	// (0x000184cc) smil_volume_pane_g2

0x0001,

0xf20e,	// (0x0001da86) smil_volume_pane_g

0x0902,	// (0x0000f17a) listscroll_cale_day_pane

0xa30e,	// (0x00018b86) bg_cale_pane

0xa326,	// (0x00018b9e) list_cale_pane

0xa349,	// (0x00018bc1) scroll_pane_cp09

0x9ea3,	// (0x0001871b) cale_bg_pane_g1

0x9e93,	// (0x0001870b) cale_bg_pane_g2

0x9e9b,	// (0x00018713) cale_bg_pane_g3

0x9eab,	// (0x00018723) cale_bg_pane_g4

0x9eb3,	// (0x0001872b) cale_bg_pane_g5

0x9ebb,	// (0x00018733) cale_bg_pane_g6

0x9ec3,	// (0x0001873b) cale_bg_pane_g7

0x9ecb,	// (0x00018743) cale_bg_pane_g8

0x9ed3,	// (0x0001874b) cale_bg_pane_g9

0x0008,

0xf213,	// (0x0001da8b) cale_bg_pane_g

0xa35a,	// (0x00018bd2) list_cale_time_pane_ParamLimits

0xa35a,	// (0x00018bd2) list_cale_time_pane

0xa371,	// (0x00018be9) list_cale_time_pane_g1_ParamLimits

0xa371,	// (0x00018be9) list_cale_time_pane_g1

0xa37d,	// (0x00018bf5) list_cale_time_pane_g2_ParamLimits

0xa37d,	// (0x00018bf5) list_cale_time_pane_g2

0x21ee,	// (0x00010a66) list_cale_time_pane_g3_ParamLimits

0x21ee,	// (0x00010a66) list_cale_time_pane_g3

0x21fc,	// (0x00010a74) list_cale_time_pane_g4_ParamLimits

0x21fc,	// (0x00010a74) list_cale_time_pane_g4

0x220a,	// (0x00010a82) list_cale_time_pane_g5_ParamLimits

0x220a,	// (0x00010a82) list_cale_time_pane_g5

0x0005,

0xf226,	// (0x0001da9e) list_cale_time_pane_g_ParamLimits

0xf226,	// (0x0001da9e) list_cale_time_pane_g

0xa397,	// (0x00018c0f) list_cale_time_pane_t1_ParamLimits

0xa397,	// (0x00018c0f) list_cale_time_pane_t1

0xa3bf,	// (0x00018c37) list_cale_time_pane_t2_ParamLimits

0xa3bf,	// (0x00018c37) list_cale_time_pane_t2

0x24bc,	// (0x00010d34) aid_blid_cardinal_pane

0x24fa,	// (0x00010d72) compass_pane_t4

0xa3e7,	// (0x00018c5f) list_cale_time_pane_t4_ParamLimits

0xa3e7,	// (0x00018c5f) list_cale_time_pane_t4

0x2508,	// (0x00010d80) compass_pane_t5

0x2518,	// (0x00010d90) compass_pane_t6

0x2526,	// (0x00010d9e) compass_pane_t7

0xa875,	// (0x000190ed) navi_pane_cc_t1

0xa9d4,	// (0x0001924c) aid_phob_thumbnail_center_pane

0x2ae4,	// (0x0001135c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf233,	// (0x0001daab) list_cale_time_pane_t_ParamLimits

0xf233,	// (0x0001daab) list_cale_time_pane_t

0x9638,	// (0x00017eb0) bg_popup_window_pane_cp02_ParamLimits

0x9638,	// (0x00017eb0) bg_popup_window_pane_cp02

0xa40f,	// (0x00018c87) heading_pane_cp01_ParamLimits

0xa40f,	// (0x00018c87) heading_pane_cp01

0xa41b,	// (0x00018c93) loc_req_pane_ParamLimits

0xa41b,	// (0x00018c93) loc_req_pane

0xa42d,	// (0x00018ca5) loc_type_pane_ParamLimits

0xa42d,	// (0x00018ca5) loc_type_pane

0xa43f,	// (0x00018cb7) loc_type_pane_t1_ParamLimits

0xa43f,	// (0x00018cb7) loc_type_pane_t1

0xa451,	// (0x00018cc9) loc_type_pane_t2_ParamLimits

0xa451,	// (0x00018cc9) loc_type_pane_t2

0xa463,	// (0x00018cdb) loc_type_pane_t3_ParamLimits

0xa463,	// (0x00018cdb) loc_type_pane_t3

0x0002,

0xf23a,	// (0x0001dab2) loc_type_pane_t_ParamLimits

0xf23a,	// (0x0001dab2) loc_type_pane_t

0xa475,	// (0x00018ced) list_loc_req_pane

0xa47f,	// (0x00018cf7) scroll_pane_cp012

0x2218,	// (0x00010a90) list_single_loc_request_popup_menu_pane_ParamLimits

0x2218,	// (0x00010a90) list_single_loc_request_popup_menu_pane

0xa48a,	// (0x00018d02) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa48a,	// (0x00018d02) list_single_loc_request_popup_menu_pane_g1

0xa496,	// (0x00018d0e) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa496,	// (0x00018d0e) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf241,	// (0x0001dab9) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf241,	// (0x0001dab9) list_single_loc_request_popup_menu_pane_g

0xa4a2,	// (0x00018d1a) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa4a2,	// (0x00018d1a) list_single_loc_request_popup_menu_pane_t1

0x9c3c,	// (0x000184b4) bg_popup_window_pane_cp03_ParamLimits

0x9c3c,	// (0x000184b4) bg_popup_window_pane_cp03

0xa4b8,	// (0x00018d30) heading_loc_req_pane_ParamLimits

0xa4b8,	// (0x00018d30) heading_loc_req_pane

0x2225,	// (0x00010a9d) popup_dyc_status_message_window_g1_ParamLimits

0x2225,	// (0x00010a9d) popup_dyc_status_message_window_g1

0x2239,	// (0x00010ab1) popup_dyc_status_message_window_t1_ParamLimits

0x2239,	// (0x00010ab1) popup_dyc_status_message_window_t1

0x224e,	// (0x00010ac6) popup_dyc_status_message_window_t2_ParamLimits

0x224e,	// (0x00010ac6) popup_dyc_status_message_window_t2

0x2263,	// (0x00010adb) popup_dyc_status_message_window_t3_ParamLimits

0x2263,	// (0x00010adb) popup_dyc_status_message_window_t3

0x0002,

0xf246,	// (0x0001dabe) popup_dyc_status_message_window_t_ParamLimits

0xf246,	// (0x0001dabe) popup_dyc_status_message_window_t

0x99e1,	// (0x00018259) bg_heading_pane_cp01

0xa4c4,	// (0x00018d3c) heading_loc_req_pane_g1

0xa4cc,	// (0x00018d44) heading_loc_req_pane_g2

0xa4d4,	// (0x00018d4c) heading_loc_req_pane_g3

0x0002,

0xf24d,	// (0x0001dac5) heading_loc_req_pane_g

0xa4dc,	// (0x00018d54) heading_loc_req_pane_t1

0xa4fc,	// (0x00018d74) bg_popup_sub_pane_cp01_ParamLimits

0xa4fc,	// (0x00018d74) bg_popup_sub_pane_cp01

0xa50a,	// (0x00018d82) popup_cale_events_window_g1_ParamLimits

0xa50a,	// (0x00018d82) popup_cale_events_window_g1

0xa52a,	// (0x00018da2) popup_cale_events_window_g2_ParamLimits

0xa52a,	// (0x00018da2) popup_cale_events_window_g2

0x0001,

0xf26f,	// (0x0001dae7) popup_cale_events_window_g_ParamLimits

0xf26f,	// (0x0001dae7) popup_cale_events_window_g

0xa54a,	// (0x00018dc2) popup_cale_events_window_t1_ParamLimits

0xa54a,	// (0x00018dc2) popup_cale_events_window_t1

0xa55c,	// (0x00018dd4) popup_cale_events_window_t2_ParamLimits

0xa55c,	// (0x00018dd4) popup_cale_events_window_t2

0xa59a,	// (0x00018e12) popup_cale_events_window_t3_ParamLimits

0xa59a,	// (0x00018e12) popup_cale_events_window_t3

0xa5d4,	// (0x00018e4c) popup_cale_events_window_t4_ParamLimits

0xa5d4,	// (0x00018e4c) popup_cale_events_window_t4

0x0003,

0xf274,	// (0x0001daec) popup_cale_events_window_t_ParamLimits

0xf274,	// (0x0001daec) popup_cale_events_window_t

0x228b,	// (0x00010b03) call_type_pane

0x229b,	// (0x00010b13) popup_call_status_window_g1

0x22af,	// (0x00010b27) popup_call_status_window_g2

0x22c3,	// (0x00010b3b) popup_call_status_window_g3

0x0002,

0xf27d,	// (0x0001daf5) popup_call_status_window_g

0xa60a,	// (0x00018e82) call_type_pane_g1

0xa613,	// (0x00018e8b) call_type_pane_g2

0x0001,

0xf284,	// (0x0001dafc) call_type_pane_g

0x99e1,	// (0x00018259) bg_popup_sub_pane_cp02

0xa61c,	// (0x00018e94) listscroll_popup_wml_pane

0xa624,	// (0x00018e9c) list_wml_pane

0xa62e,	// (0x00018ea6) scroll_pane_cp013

0xa639,	// (0x00018eb1) list_single_graphic_popup_wml_pane_ParamLimits

0xa639,	// (0x00018eb1) list_single_graphic_popup_wml_pane

0x9c54,	// (0x000184cc) list_single_graphic_popup_wml_pane_g1

0xa64d,	// (0x00018ec5) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf289,	// (0x0001db01) list_single_graphic_popup_wml_pane_g

0xa655,	// (0x00018ecd) list_single_graphic_popup_wml_pane_t1

0xa66b,	// (0x00018ee3) aid_call_pane

0x9c34,	// (0x000184ac) popup_clock_analogue_window_g1

0x9c34,	// (0x000184ac) popup_clock_analogue_window_g2

0xa673,	// (0x00018eeb) popup_clock_analogue_window_g3

0xa673,	// (0x00018eeb) popup_clock_analogue_window_g4

0x9c54,	// (0x000184cc) popup_clock_analogue_window_g5

0x0004,

0xf28e,	// (0x0001db06) popup_clock_analogue_window_g

0xa67b,	// (0x00018ef3) popup_clock_analogue_window_t1

0xa689,	// (0x00018f01) clock_digital_number_pane_ParamLimits

0xa689,	// (0x00018f01) clock_digital_number_pane

0xa695,	// (0x00018f0d) clock_digital_number_pane_cp02_ParamLimits

0xa695,	// (0x00018f0d) clock_digital_number_pane_cp02

0xa6a1,	// (0x00018f19) clock_digital_number_pane_cp03_ParamLimits

0xa6a1,	// (0x00018f19) clock_digital_number_pane_cp03

0xa6ad,	// (0x00018f25) clock_digital_number_pane_cp04_ParamLimits

0xa6ad,	// (0x00018f25) clock_digital_number_pane_cp04

0xa6b9,	// (0x00018f31) clock_digital_separator_pane_ParamLimits

0xa6b9,	// (0x00018f31) clock_digital_separator_pane

0xa6c5,	// (0x00018f3d) popup_clock_digital_window_t1

0x9c54,	// (0x000184cc) clock_digital_number_pane_g1

0x9c54,	// (0x000184cc) clock_digital_number_pane_g2

0x0001,

0xf20e,	// (0x0001da86) clock_digital_number_pane_g

0x9c54,	// (0x000184cc) clock_digital_separator_pane_g1

0x9c54,	// (0x000184cc) clock_digital_separator_pane_g2

0x0001,

0xf20e,	// (0x0001da86) clock_digital_separator_pane_g

0x99e1,	// (0x00018259) bg_popup_window_pane_cp04

0xa6e2,	// (0x00018f5a) heading_pane_cp03

0x9f96,	// (0x0001880e) listscroll_popup_gms_pane

0x99e1,	// (0x00018259) grid_large_graphic_popup_pane

0xa6ea,	// (0x00018f62) listscroll_popup_gms_pane_g1

0xa6f3,	// (0x00018f6b) listscroll_popup_gms_pane_g2

0x0001,

0xf299,	// (0x0001db11) listscroll_popup_gms_pane_g

0xa6fc,	// (0x00018f74) scroll_pane_cp014

0x9ca9,	// (0x00018521) cell_large_graphic_popup_pane_ParamLimits

0x9ca9,	// (0x00018521) cell_large_graphic_popup_pane

0x9cb7,	// (0x0001852f) cell_large_graphic_popup_pane_g1_ParamLimits

0x9cb7,	// (0x0001852f) cell_large_graphic_popup_pane_g1

0xa705,	// (0x00018f7d) cell_large_graphic_popup_pane_g2_ParamLimits

0xa705,	// (0x00018f7d) cell_large_graphic_popup_pane_g2

0xa713,	// (0x00018f8b) cell_large_graphic_popup_pane_g3_ParamLimits

0xa713,	// (0x00018f8b) cell_large_graphic_popup_pane_g3

0xa721,	// (0x00018f99) cell_large_graphic_popup_pane_g4_ParamLimits

0xa721,	// (0x00018f99) cell_large_graphic_popup_pane_g4

0x0003,

0xf29e,	// (0x0001db16) cell_large_graphic_popup_pane_g_ParamLimits

0xf29e,	// (0x0001db16) cell_large_graphic_popup_pane_g

0x99e1,	// (0x00018259) grid_highlight_pane_cp010

0x9c54,	// (0x000184cc) bg_popup_call_pane_g1

0xa732,	// (0x00018faa) list_single_graphic_popup_conf_pane_ParamLimits

0xa732,	// (0x00018faa) list_single_graphic_popup_conf_pane

0xa744,	// (0x00018fbc) list_highlight_pane_cp01

0xa74d,	// (0x00018fc5) list_single_graphic_popup_conf_pane_g1

0xa755,	// (0x00018fcd) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2a7,	// (0x0001db1f) list_single_graphic_popup_conf_pane_g

0xa75d,	// (0x00018fd5) list_single_graphic_popup_conf_pane_t1

0xa76b,	// (0x00018fe3) linegrid_cams_pane_g1

0x22d3,	// (0x00010b4b) linegrid_cams_pane_g2

0x9f7c,	// (0x000187f4) linegrid_cams_pane_g3

0xa774,	// (0x00018fec) linegrid_cams_pane_g4

0x22dc,	// (0x00010b54) linegrid_cams_pane_g5

0x22e5,	// (0x00010b5d) linegrid_cams_pane_g6

0x9f85,	// (0x000187fd) linegrid_cams_pane_g7

0x0006,

0xf2ac,	// (0x0001db24) linegrid_cams_pane_g

0xa77d,	// (0x00018ff5) popup_clock_analogue_window

0xa77d,	// (0x00018ff5) popup_clock_digital_window

0x99e1,	// (0x00018259) popup_phob_thumbnail_window

0x9c54,	// (0x000184cc) call_video_uplink_pane_g1

0xa786,	// (0x00018ffe) call_video_uplink_pane_g2

0x0001,

0xf2bb,	// (0x0001db33) call_video_uplink_pane_g

0xa78e,	// (0x00019006) video_uplink_pane

0xa796,	// (0x0001900e) mce_image_pane_g1

0x22f0,	// (0x00010b68) mce_image_pane_g2

0x22fa,	// (0x00010b72) mce_image_pane_g3

0x2304,	// (0x00010b7c) mce_image_pane_g4

0x230c,	// (0x00010b84) mce_image_pane_g5

0x0004,

0xf2c0,	// (0x0001db38) mce_image_pane_g

0xa7a0,	// (0x00019018) control_top_pane_stacon_cp01_ParamLimits

0xa7a0,	// (0x00019018) control_top_pane_stacon_cp01

0xa7b4,	// (0x0001902c) uni_indicator_pane_stacon_cp01_ParamLimits

0xa7b4,	// (0x0001902c) uni_indicator_pane_stacon_cp01

0xa7c5,	// (0x0001903d) bg_popup_sub_pane_cp03

0x2314,	// (0x00010b8c) chi_dic_find_pane

0x231c,	// (0x00010b94) listscroll_chi_dic_pane

0x2325,	// (0x00010b9d) main_pane_chidic_g1

0x2338,	// (0x00010bb0) chi_dic_find_pane_t1

0xa7cf,	// (0x00019047) find_chidic_pane

0xa7d8,	// (0x00019050) chi_dic_list_pane_ParamLimits

0xa7d8,	// (0x00019050) chi_dic_list_pane

0xa7e9,	// (0x00019061) scroll_pane_cp020

0x2346,	// (0x00010bbe) find_chidic_pane_t1

0x99e1,	// (0x00018259) input_focus_pane_cp06

0x2355,	// (0x00010bcd) list_chi_dic_pane_ParamLimits

0x2355,	// (0x00010bcd) list_chi_dic_pane

0x2367,	// (0x00010bdf) list_chi_dic_pane_t1_ParamLimits

0x2367,	// (0x00010bdf) list_chi_dic_pane_t1

0x99e1,	// (0x00018259) list_highlight_pane_cp020

0xa7f1,	// (0x00019069) bg_cale_heading_pane_g1

0x237a,	// (0x00010bf2) bg_cale_heading_pane_g2

0x2382,	// (0x00010bfa) bg_cale_heading_pane_g3

0x238a,	// (0x00010c02) bg_cale_heading_pane_g4

0x2394,	// (0x00010c0c) bg_cale_heading_pane_g5

0x239e,	// (0x00010c16) bg_cale_heading_pane_g6

0x23a6,	// (0x00010c1e) bg_cale_heading_pane_g7

0x23ae,	// (0x00010c26) bg_cale_heading_pane_g8

0x23b8,	// (0x00010c30) bg_cale_heading_pane_g9

0x0008,

0xf2cb,	// (0x0001db43) bg_cale_heading_pane_g

0xa7f1,	// (0x00019069) bg_cale_side_pane_g1

0x23c2,	// (0x00010c3a) bg_cale_side_pane_g2

0x23cc,	// (0x00010c44) bg_cale_side_pane_g3

0x23d6,	// (0x00010c4e) bg_cale_side_pane_g4

0x23e0,	// (0x00010c58) bg_cale_side_pane_g5

0x23ea,	// (0x00010c62) bg_cale_side_pane_g6

0x23f4,	// (0x00010c6c) bg_cale_side_pane_g7

0x23fe,	// (0x00010c76) bg_cale_side_pane_g8

0x2406,	// (0x00010c7e) bg_cale_side_pane_g9

0x0008,

0xf2de,	// (0x0001db56) bg_cale_side_pane_g

0x240e,	// (0x00010c86) popup_call_status_window_ParamLimits

0x240e,	// (0x00010c86) popup_call_status_window

0xa7f9,	// (0x00019071) stacon_top_pane

0xa801,	// (0x00019079) status_pane_ParamLimits

0xa801,	// (0x00019079) status_pane

0xa816,	// (0x0001908e) status_small_pane

0xa81e,	// (0x00019096) control_pane

0x99e1,	// (0x00018259) stacon_bottom_pane

0xa826,	// (0x0001909e) list_single_mce_smart_pane_t1_ParamLimits

0xa826,	// (0x0001909e) list_single_mce_smart_pane_t1

0xa839,	// (0x000190b1) list_single_mce_smart_pane_t2_ParamLimits

0xa839,	// (0x000190b1) list_single_mce_smart_pane_t2

0x0001,

0xf2f1,	// (0x0001db69) list_single_mce_smart_pane_t_ParamLimits

0xf2f1,	// (0x0001db69) list_single_mce_smart_pane_t

0x245b,	// (0x00010cd3) compass_pane

0x2466,	// (0x00010cde) main_location2_pane_t1

0x247c,	// (0x00010cf4) main_location2_pane_t2

0x2492,	// (0x00010d0a) main_location2_pane_t3

0x0003,

0xf2f6,	// (0x0001db6e) main_location2_pane_t

0xa858,	// (0x000190d0) compass_pane_g1_ParamLimits

0xa858,	// (0x000190d0) compass_pane_g1

0x24dc,	// (0x00010d54) compass_pane_t1

0x24eb,	// (0x00010d63) compass_pane_t2

0x0005,

0xf2ff,	// (0x0001db77) compass_pane_t

0x2536,	// (0x00010dae) text_secondary_cp61

0xa86c,	// (0x000190e4) navi_pane_cams_g5

0xa88f,	// (0x00019107) navi_pane_im_t1

0xa89d,	// (0x00019115) navi_pane_mp_g1_ParamLimits

0xa89d,	// (0x00019115) navi_pane_mp_g1

0xa8b1,	// (0x00019129) navi_pane_mp_g2_ParamLimits

0xa8b1,	// (0x00019129) navi_pane_mp_g2

0xa8bd,	// (0x00019135) navi_pane_mp_g3_ParamLimits

0xa8bd,	// (0x00019135) navi_pane_mp_g3

0x0002,

0xf313,	// (0x0001db8b) navi_pane_mp_g_ParamLimits

0xf313,	// (0x0001db8b) navi_pane_mp_g

0xa8c9,	// (0x00019141) navi_pane_mp_t1

0xa8d7,	// (0x0001914f) navi_pane_mp_t2

0x0002,

0xf31a,	// (0x0001db92) navi_pane_mp_t

0xa913,	// (0x0001918b) navi_pane_vt_g1

0xa8c9,	// (0x00019141) navi_pane_vt_t1

0xa91b,	// (0x00019193) navi_slider_pane

0x9f96,	// (0x0001880e) zooming_pane

0xa923,	// (0x0001919b) navi_slider_pane_g1

0xa92c,	// (0x000191a4) navi_slider_pane_g2

0x0006,

0xf321,	// (0x0001db99) navi_slider_pane_g

0xa959,	// (0x000191d1) aid_levels_zoom

0xa961,	// (0x000191d9) zooming_pane_g1

0xa969,	// (0x000191e1) zooming_pane_g2

0xa969,	// (0x000191e1) zooming_pane_g3

0x0002,

0xf330,	// (0x0001dba8) zooming_pane_g

0xa971,	// (0x000191e9) level_10_zoom

0xa97a,	// (0x000191f2) level_11_zoom

0xa983,	// (0x000191fb) level_1_zoom

0xa98c,	// (0x00019204) level_2_zoom

0xa995,	// (0x0001920d) level_3_zoom

0xa99e,	// (0x00019216) level_4_zoom

0xa9a7,	// (0x0001921f) level_5_zoom

0xa9b0,	// (0x00019228) level_6_zoom

0xa9b9,	// (0x00019231) level_7_zoom

0xa9c2,	// (0x0001923a) level_8_zoom

0xa9cb,	// (0x00019243) level_9_zoom

0xa9dc,	// (0x00019254) popup_phob_thumbnail_window_g1

0xa9e4,	// (0x0001925c) popup_phob_thumbnail_window_g2

0x0001,

0xf337,	// (0x0001dbaf) popup_phob_thumbnail_window_g

0x312e,	// (0x000119a6) level_1_location

0x3136,	// (0x000119ae) level_2_location

0x313e,	// (0x000119b6) level_3_location

0x3148,	// (0x000119c0) level_4_location

0x9f96,	// (0x0001880e) level_5_location

0x267f,	// (0x00010ef7) mce_icon_pane_g1

0x2689,	// (0x00010f01) mce_icon_pane_g2

0x0001,

0xf33c,	// (0x0001dbb4) mce_icon_pane_g

0xa9ec,	// (0x00019264) main_mup_pane_g1_ParamLimits

0xa9ec,	// (0x00019264) main_mup_pane_g1

0xa9ec,	// (0x00019264) main_mup_pane_g2_ParamLimits

0xa9ec,	// (0x00019264) main_mup_pane_g2

0xa9ec,	// (0x00019264) main_mup_pane_g3_ParamLimits

0xa9ec,	// (0x00019264) main_mup_pane_g3

0xa9ec,	// (0x00019264) main_mup_pane_g4_ParamLimits

0xa9ec,	// (0x00019264) main_mup_pane_g4

0xa9ec,	// (0x00019264) main_mup_pane_g5_ParamLimits

0xa9ec,	// (0x00019264) main_mup_pane_g5

0xa9ec,	// (0x00019264) main_mup_pane_g6_ParamLimits

0xa9ec,	// (0x00019264) main_mup_pane_g6

0xa9ec,	// (0x00019264) main_mup_pane_g7_ParamLimits

0xa9ec,	// (0x00019264) main_mup_pane_g7

0xa9ec,	// (0x00019264) main_mup_pane_g8_ParamLimits

0xa9ec,	// (0x00019264) main_mup_pane_g8

0xa9ec,	// (0x00019264) main_mup_pane_g9_ParamLimits

0xa9ec,	// (0x00019264) main_mup_pane_g9

0xa9ec,	// (0x00019264) main_mup_pane_g10_ParamLimits

0xa9ec,	// (0x00019264) main_mup_pane_g10

0xa9ec,	// (0x00019264) main_mup_pane_g11_ParamLimits

0xa9ec,	// (0x00019264) main_mup_pane_g11

0x9cb7,	// (0x0001852f) main_mup_pane_g12_ParamLimits

0x9cb7,	// (0x0001852f) main_mup_pane_g12

0xa9ec,	// (0x00019264) main_mup_pane_g13_ParamLimits

0xa9ec,	// (0x00019264) main_mup_pane_g13

0x000c,

0xf341,	// (0x0001dbb9) main_mup_pane_g_ParamLimits

0xf341,	// (0x0001dbb9) main_mup_pane_g

0xa9fa,	// (0x00019272) main_mup_pane_t1_ParamLimits

0xa9fa,	// (0x00019272) main_mup_pane_t1

0xa9fa,	// (0x00019272) main_mup_pane_t2_ParamLimits

0xa9fa,	// (0x00019272) main_mup_pane_t2

0xa9fa,	// (0x00019272) main_mup_pane_t3_ParamLimits

0xa9fa,	// (0x00019272) main_mup_pane_t3

0x9d07,	// (0x0001857f) main_mup_pane_t4_ParamLimits

0x9d07,	// (0x0001857f) main_mup_pane_t4

0x9d07,	// (0x0001857f) main_mup_pane_t5_ParamLimits

0x9d07,	// (0x0001857f) main_mup_pane_t5

0x9d1b,	// (0x00018593) main_mup_pane_t6_ParamLimits

0x9d1b,	// (0x00018593) main_mup_pane_t6

0x0005,

0xf35c,	// (0x0001dbd4) main_mup_pane_t_ParamLimits

0xf35c,	// (0x0001dbd4) main_mup_pane_t

0x9ca9,	// (0x00018521) mup_progress_pane_ParamLimits

0x9ca9,	// (0x00018521) mup_progress_pane

0xaa0e,	// (0x00019286) mup_visualizer_pane_ParamLimits

0xaa0e,	// (0x00019286) mup_visualizer_pane

0xaa0e,	// (0x00019286) mup_volume_pane_ParamLimits

0xaa0e,	// (0x00019286) mup_volume_pane

0x9cc5,	// (0x0001853d) mup_visualizer_pane_g1_ParamLimits

0x9cc5,	// (0x0001853d) mup_visualizer_pane_g1

0xaa1c,	// (0x00019294) mup_visualizer_pane_g2_ParamLimits

0xaa1c,	// (0x00019294) mup_visualizer_pane_g2

0x9cb7,	// (0x0001852f) mup_visualizer_pane_g3_ParamLimits

0x9cb7,	// (0x0001852f) mup_visualizer_pane_g3

0x0002,

0xf369,	// (0x0001dbe1) mup_visualizer_pane_g_ParamLimits

0xf369,	// (0x0001dbe1) mup_visualizer_pane_g

0x9cfd,	// (0x00018575) mup_volume_pane_g1

0x9cfd,	// (0x00018575) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x0001d904) mup_volume_pane_g

0x9cfd,	// (0x00018575) mup_progress_pane_g1

0x9cfd,	// (0x00018575) mup_progress_pane_g2

0x9cfd,	// (0x00018575) mup_progress_pane_g3

0x0002,

0xf370,	// (0x0001dbe8) mup_progress_pane_g

0x99e1,	// (0x00018259) bg_popup_window_pane_cp05

0xaa2a,	// (0x000192a2) heading_pane_cp02_ParamLimits

0xaa2a,	// (0x000192a2) heading_pane_cp02

0xaa46,	// (0x000192be) list_popup_blid_pane

0xaa4e,	// (0x000192c6) list_blid_sat_info_pane_ParamLimits

0xaa4e,	// (0x000192c6) list_blid_sat_info_pane

0xaa61,	// (0x000192d9) list_blid_sat_info_pane_g1

0xaa69,	// (0x000192e1) list_blid_sat_info_pane_t1

0x279d,	// (0x00011015) mup_equalizer_pane_ParamLimits

0x279d,	// (0x00011015) mup_equalizer_pane

0x27be,	// (0x00011036) mup_equalizer_pane_cp1_ParamLimits

0x27be,	// (0x00011036) mup_equalizer_pane_cp1

0x27df,	// (0x00011057) mup_equalizer_pane_cp2_ParamLimits

0x27df,	// (0x00011057) mup_equalizer_pane_cp2

0x2804,	// (0x0001107c) mup_equalizer_pane_cp3_ParamLimits

0x2804,	// (0x0001107c) mup_equalizer_pane_cp3

0x282d,	// (0x000110a5) mup_equalizer_pane_cp4_ParamLimits

0x282d,	// (0x000110a5) mup_equalizer_pane_cp4

0x2856,	// (0x000110ce) mup_equalizer_pane_cp5

0x286e,	// (0x000110e6) mup_equalizer_pane_cp6

0x2886,	// (0x000110fe) mup_equalizer_pane_cp7

0xbb4e,	// (0x0001a3c6) bg_popup_call_poc_act_pane_g9

0xbb56,	// (0x0001a3ce) bg_popup_call_poc_act_pane_g10

0xbb5e,	// (0x0001a3d6) bg_popup_call_poc_act_pane_g11

0x000a,

0x9c3c,	// (0x000184b4) mup_scale_pane

0x9c54,	// (0x000184cc) mup_scale_pane_g1

0xaa77,	// (0x000192ef) mup_scale_pane_g2

0x0006,

0xf38c,	// (0x0001dc04) mup_scale_pane_g

0xaa9b,	// (0x00019313) msg_data_pane

0xaaa3,	// (0x0001931b) scroll_pane_cp017

0x28b0,	// (0x00011128) bg_list_pane_cp04_ParamLimits

0x28b0,	// (0x00011128) bg_list_pane_cp04

0xaaab,	// (0x00019323) msg_data_pane_g1

0x28d8,	// (0x00011150) msg_data_pane_g2

0x28e2,	// (0x0001115a) msg_data_pane_g3

0x28ec,	// (0x00011164) msg_data_pane_g4

0x28f4,	// (0x0001116c) msg_data_pane_g5

0x28fc,	// (0x00011174) msg_data_pane_g6

0x2904,	// (0x0001117c) msg_data_pane_g7

0x0006,

0xf39b,	// (0x0001dc13) msg_data_pane_g

0x290c,	// (0x00011184) msg_text_pane_ParamLimits

0x290c,	// (0x00011184) msg_text_pane

0x2949,	// (0x000111c1) qrid_highlight_pane_cp011_ParamLimits

0x2949,	// (0x000111c1) qrid_highlight_pane_cp011

0x99e1,	// (0x00018259) msg_body_pane

0x9c3c,	// (0x000184b4) msg_header_pane

0xaac7,	// (0x0001933f) input_focus_pane_cp07

0x296d,	// (0x000111e5) msg_header_pane_t1_ParamLimits

0x296d,	// (0x000111e5) msg_header_pane_t1

0x2989,	// (0x00011201) msg_header_pane_t2_ParamLimits

0x2989,	// (0x00011201) msg_header_pane_t2

0x0001,

0xf3af,	// (0x0001dc27) msg_header_pane_t_ParamLimits

0xf3af,	// (0x0001dc27) msg_header_pane_t

0xaae8,	// (0x00019360) msg_body_pane_g1

0x29a9,	// (0x00011221) msg_body_pane_t1_ParamLimits

0x29a9,	// (0x00011221) msg_body_pane_t1

0x29da,	// (0x00011252) msg_body_pane_t2_ParamLimits

0x29da,	// (0x00011252) msg_body_pane_t2

0x29ec,	// (0x00011264) msg_body_pane_t3_ParamLimits

0x29ec,	// (0x00011264) msg_body_pane_t3

0x0002,

0xf3b4,	// (0x0001dc2c) msg_body_pane_t_ParamLimits

0xf3b4,	// (0x0001dc2c) msg_body_pane_t

0x2a38,	// (0x000112b0) main_viewer_pane_g1_ParamLimits

0x2a38,	// (0x000112b0) main_viewer_pane_g1

0x2a46,	// (0x000112be) main_viewer_pane_g2_ParamLimits

0x2a46,	// (0x000112be) main_viewer_pane_g2

0x2a54,	// (0x000112cc) main_viewer_pane_g3_ParamLimits

0x2a54,	// (0x000112cc) main_viewer_pane_g3

0x2a63,	// (0x000112db) main_viewer_pane_g4_ParamLimits

0x2a63,	// (0x000112db) main_viewer_pane_g4

0xab08,	// (0x00019380) main_viewer_pane_g5_ParamLimits

0xab08,	// (0x00019380) main_viewer_pane_g5

0xab08,	// (0x00019380) main_viewer_pane_g7_ParamLimits

0xab08,	// (0x00019380) main_viewer_pane_g7

0xab1a,	// (0x00019392) main_viewer_pane_g8_ParamLimits

0xab1a,	// (0x00019392) main_viewer_pane_g8

0x0007,

0xf3c4,	// (0x0001dc3c) main_viewer_pane_g_ParamLimits

0xf3c4,	// (0x0001dc3c) main_viewer_pane_g

0xab32,	// (0x000193aa) viewer_content_pane_ParamLimits

0xab32,	// (0x000193aa) viewer_content_pane

0x2aa1,	// (0x00011319) main_postcard_pane_g1_ParamLimits

0x2aa1,	// (0x00011319) main_postcard_pane_g1

0x2ab7,	// (0x0001132f) main_postcard_pane_g2_ParamLimits

0x2ab7,	// (0x0001132f) main_postcard_pane_g2

0x2acd,	// (0x00011345) main_postcard_pane_g3_ParamLimits

0x2acd,	// (0x00011345) main_postcard_pane_g3

0x0005,

0xf3d5,	// (0x0001dc4d) main_postcard_pane_g_ParamLimits

0xf3d5,	// (0x0001dc4d) main_postcard_pane_g

0x2ae4,	// (0x0001135c) main_postcard_pane_g4

0xbce4,	// (0x0001a55c) smil_status_volume_pane_g2

0x2b27,	// (0x0001139f) postcard_pane_ParamLimits

0x2b27,	// (0x0001139f) postcard_pane

0xab40,	// (0x000193b8) postcard_pane_g1_ParamLimits

0xab40,	// (0x000193b8) postcard_pane_g1

0x2b77,	// (0x000113ef) postcard_pane_g2_ParamLimits

0x2b77,	// (0x000113ef) postcard_pane_g2

0x2b83,	// (0x000113fb) postcard_pane_g3_ParamLimits

0x2b83,	// (0x000113fb) postcard_pane_g3

0xab4e,	// (0x000193c6) postcard_pane_g4_ParamLimits

0xab4e,	// (0x000193c6) postcard_pane_g4

0x2b8f,	// (0x00011407) postcard_pane_g5_ParamLimits

0x2b8f,	// (0x00011407) postcard_pane_g5

0x2ba4,	// (0x0001141c) postcard_pane_g6_ParamLimits

0x2ba4,	// (0x0001141c) postcard_pane_g6

0xab40,	// (0x000193b8) postcard_pane_g7_ParamLimits

0xab40,	// (0x000193b8) postcard_pane_g7

0x0006,

0xf3e2,	// (0x0001dc5a) postcard_pane_g_ParamLimits

0xf3e2,	// (0x0001dc5a) postcard_pane_g

0x2bbc,	// (0x00011434) main_mp2_pane_g1_ParamLimits

0x2bbc,	// (0x00011434) main_mp2_pane_g1

0x2bca,	// (0x00011442) main_mp2_pane_g2_ParamLimits

0x2bca,	// (0x00011442) main_mp2_pane_g2

0x2bd6,	// (0x0001144e) main_mp2_pane_g3_ParamLimits

0x2bd6,	// (0x0001144e) main_mp2_pane_g3

0x0002,

0xf3f1,	// (0x0001dc69) main_mp2_pane_g_ParamLimits

0xf3f1,	// (0x0001dc69) main_mp2_pane_g

0x2be2,	// (0x0001145a) main_mp2_pane_t1_ParamLimits

0x2be2,	// (0x0001145a) main_mp2_pane_t1

0x2bf9,	// (0x00011471) main_mp2_pane_t2_ParamLimits

0x2bf9,	// (0x00011471) main_mp2_pane_t2

0x2c0b,	// (0x00011483) main_mp2_pane_t3_ParamLimits

0x2c0b,	// (0x00011483) main_mp2_pane_t3

0x0002,

0xf3f8,	// (0x0001dc70) main_mp2_pane_t_ParamLimits

0xf3f8,	// (0x0001dc70) main_mp2_pane_t

0x958b,	// (0x00017e03) pec_content_pane_ParamLimits

0x958b,	// (0x00017e03) pec_content_pane

0x9516,	// (0x00017d8e) scroll_pane_cp015

0xaa0e,	// (0x00019286) pec_attribute_pane_ParamLimits

0xaa0e,	// (0x00019286) pec_attribute_pane

0x9cb7,	// (0x0001852f) pec_content_pane_g1_ParamLimits

0x9cb7,	// (0x0001852f) pec_content_pane_g1

0xab5c,	// (0x000193d4) pec_content_pane_t1_ParamLimits

0xab5c,	// (0x000193d4) pec_content_pane_t1

0xab70,	// (0x000193e8) pec_content_pane_t2_ParamLimits

0xab70,	// (0x000193e8) pec_content_pane_t2

0x0001,

0xf3ff,	// (0x0001dc77) pec_content_pane_t_ParamLimits

0xf3ff,	// (0x0001dc77) pec_content_pane_t

0x9ca9,	// (0x00018521) list_single_graphic_pane_cp01_ParamLimits

0x9ca9,	// (0x00018521) list_single_graphic_pane_cp01

0x9c3c,	// (0x000184b4) bg_popup_sub_pane_cp04

0xab84,	// (0x000193fc) popup_mup_playback_window_g1

0xab90,	// (0x00019408) popup_mup_playback_window_t1

0xaba5,	// (0x0001941d) popup_mup_playback_window_t2

0x0001,

0xf404,	// (0x0001dc7c) popup_mup_playback_window_t

0xabdc,	// (0x00019454) main_image_pane_g1_ParamLimits

0xabdc,	// (0x00019454) main_image_pane_g1

0xac1f,	// (0x00019497) scroll_pane_cp018_ParamLimits

0xac1f,	// (0x00019497) scroll_pane_cp018

0xac37,	// (0x000194af) scroll_pane_cp016_ParamLimits

0xac37,	// (0x000194af) scroll_pane_cp016

0x2cd5,	// (0x0001154d) smil2_image_pane_ParamLimits

0x2cd5,	// (0x0001154d) smil2_image_pane

0x2d0b,	// (0x00011583) smil2_root_pane_ParamLimits

0x2d0b,	// (0x00011583) smil2_root_pane

0x2d43,	// (0x000115bb) smil2_text_pane_ParamLimits

0x2d43,	// (0x000115bb) smil2_text_pane

0x9516,	// (0x00017d8e) bg_list_pane_cp06

0x9516,	// (0x00017d8e) grid_radio_pane

0x99e1,	// (0x00018259) bg_popup_window_pane_cp06

0xa4ec,	// (0x00018d64) main_fmradio_pane_t1

0xa6e2,	// (0x00018f5a) heading_pane_cp04

0xa4ec,	// (0x00018d64) main_fmradio_pane_t2

0xbb66,	// (0x0001a3de) popup_cale_lunar_info_window_g1

0xa4ec,	// (0x00018d64) main_fmradio_pane_t3

0xbb6e,	// (0x0001a3e6) popup_cale_lunar_info_window_g2

0xa4ec,	// (0x00018d64) main_fmradio_pane_t4

0x0001,

0xa4ec,	// (0x00018d64) main_fmradio_pane_t5

0x0004,

0xf4c1,	// (0x0001dd39) popup_cale_lunar_info_window_g

0xf264,	// (0x0001dadc) main_fmradio_pane_t

0x9516,	// (0x00017d8e) wait_bar_pane_cp03

0x9ca9,	// (0x00018521) cell_fmradio_pane_ParamLimits

0x9ca9,	// (0x00018521) cell_fmradio_pane

0x9cb7,	// (0x0001852f) cell_fmradio_pane_g1_ParamLimits

0x9cb7,	// (0x0001852f) cell_fmradio_pane_g1

0x9516,	// (0x00017d8e) grid_highlight_pane_cp011

0xac6b,	// (0x000194e3) poc_content_pane_ParamLimits

0xac6b,	// (0x000194e3) poc_content_pane

0xac7d,	// (0x000194f5) scroll_pane_cp019

0x2dd3,	// (0x0001164b) popup_call_poc_act_window_ParamLimits

0x2dd3,	// (0x0001164b) popup_call_poc_act_window

0x2df7,	// (0x0001166f) popup_call_poc_inact_window_ParamLimits

0x2df7,	// (0x0001166f) popup_call_poc_inact_window

0xf49d,	// (0x0001dd15) bg_popup_call_poc_act_pane_g

0xbade,	// (0x0001a356) bg_popup_call_poc_inact_pane_g1

0xbae6,	// (0x0001a35e) bg_popup_call_poc_inact_pane_g2

0xac85,	// (0x000194fd) popup_call_poc_act_window_g2

0xbaee,	// (0x0001a366) bg_popup_call_poc_inact_pane_g3

0xbaf6,	// (0x0001a36e) bg_popup_call_poc_inact_pane_g4

0xbafe,	// (0x0001a376) bg_popup_call_poc_inact_pane_g5

0xac8d,	// (0x00019505) popup_call_poc_act_window_t1_ParamLimits

0xac8d,	// (0x00019505) popup_call_poc_act_window_t1

0xacb5,	// (0x0001952d) popup_call_poc_act_window_t2_ParamLimits

0xacb5,	// (0x0001952d) popup_call_poc_act_window_t2

0xacdd,	// (0x00019555) popup_call_poc_act_window_t3_ParamLimits

0xacdd,	// (0x00019555) popup_call_poc_act_window_t3

0xad05,	// (0x0001957d) popup_call_poc_act_window_t4_ParamLimits

0xad05,	// (0x0001957d) popup_call_poc_act_window_t4

0x0003,

0xf419,	// (0x0001dc91) popup_call_poc_act_window_t_ParamLimits

0xf419,	// (0x0001dc91) popup_call_poc_act_window_t

0xbb06,	// (0x0001a37e) bg_popup_call_poc_inact_pane_g6

0xbb0e,	// (0x0001a386) bg_popup_call_poc_inact_pane_g7

0xbb16,	// (0x0001a38e) bg_popup_call_poc_inact_pane_g8

0xad17,	// (0x0001958f) popup_call_poc_inact_window_g2

0xbb1e,	// (0x0001a396) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf48a,	// (0x0001dd02) bg_popup_call_poc_inact_pane_g

0xad1f,	// (0x00019597) popup_call_poc_inact_window_t1_ParamLimits

0xad1f,	// (0x00019597) popup_call_poc_inact_window_t1

0xad34,	// (0x000195ac) popup_call_poc_inact_window_t2_ParamLimits

0xad34,	// (0x000195ac) popup_call_poc_inact_window_t2

0xad49,	// (0x000195c1) popup_call_poc_inact_window_t3_ParamLimits

0xad49,	// (0x000195c1) popup_call_poc_inact_window_t3

0x0002,

0xf422,	// (0x0001dc9a) popup_call_poc_inact_window_t_ParamLimits

0xf422,	// (0x0001dc9a) popup_call_poc_inact_window_t

0xbc5c,	// (0x0001a4d4) context_pane_ParamLimits

0x364b,	// (0x00011ec3) signal_pane_ParamLimits

0x9f96,	// (0x0001880e) main_call2_pane

0xbc35,	// (0x0001a4ad) popup_phob_thumbnail2_window_ParamLimits

0xbc35,	// (0x0001a4ad) popup_phob_thumbnail2_window

0xaaf0,	// (0x00019368) aid_hotspot_pointer_arrow_pane

0xaaf8,	// (0x00019370) aid_hotspot_pointer_hand_pane

0x30f6,	// (0x0001196e) phob_pre_status_pane_g5

0x958b,	// (0x00017e03) cams_zoom_pane_ParamLimits

0x958b,	// (0x00017e03) image_vga_pane_ParamLimits

0x9cb7,	// (0x0001852f) main_camera_pane_g1_ParamLimits

0x9cb7,	// (0x0001852f) main_camera_pane_g2_ParamLimits

0x9cb7,	// (0x0001852f) main_camera_pane_g3_ParamLimits

0x9cb7,	// (0x0001852f) main_camera_pane_g4_ParamLimits

0x9cb7,	// (0x0001852f) main_camera_pane_g5_ParamLimits

0x9cb7,	// (0x0001852f) main_camera_pane_g6_ParamLimits

0x9cb7,	// (0x0001852f) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x0001d9d5) main_camera_pane_g_ParamLimits

0x9d07,	// (0x0001857f) main_camera_pane_t1_ParamLimits

0x9d07,	// (0x0001857f) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x0001d9e6) main_camera_pane_t_ParamLimits

0x9c3c,	// (0x000184b4) bg_popup_preview_window_pane_cp01_ParamLimits

0x9c3c,	// (0x000184b4) bg_popup_preview_window_pane_cp01

0xad5e,	// (0x000195d6) popup_phob_thumbnail2_window_g1_ParamLimits

0xad5e,	// (0x000195d6) popup_phob_thumbnail2_window_g1

0x99e1,	// (0x00018259) call2_cli_visual_pane

0x2e2b,	// (0x000116a3) popup_call2_audio_conf_window_ParamLimits

0x2e2b,	// (0x000116a3) popup_call2_audio_conf_window

0x2e53,	// (0x000116cb) popup_call2_audio_first_window_ParamLimits

0x2e53,	// (0x000116cb) popup_call2_audio_first_window

0x2ee9,	// (0x00011761) popup_call2_audio_in_window_ParamLimits

0x2ee9,	// (0x00011761) popup_call2_audio_in_window

0x2f35,	// (0x000117ad) popup_call2_audio_out_window_ParamLimits

0x2f35,	// (0x000117ad) popup_call2_audio_out_window

0x2fa7,	// (0x0001181f) popup_call2_audio_second_window_ParamLimits

0x2fa7,	// (0x0001181f) popup_call2_audio_second_window

0x300d,	// (0x00011885) popup_call2_audio_wait_window_ParamLimits

0x300d,	// (0x00011885) popup_call2_audio_wait_window

0x99e1,	// (0x00018259) bg_popup_call2_act_pane_cp03

0x9c1e,	// (0x00018496) list_conf_pane_cp

0xad6a,	// (0x000195e2) popup_call2_audio_conf_window_t1

0xad78,	// (0x000195f0) list_single_graphic_popup_conf2_pane_ParamLimits

0xad78,	// (0x000195f0) list_single_graphic_popup_conf2_pane

0xa744,	// (0x00018fbc) list_highlight_pane_cp04

0xad8b,	// (0x00019603) list_single_graphic_popup_conf2_pane_g1

0xa755,	// (0x00018fcd) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf429,	// (0x0001dca1) list_single_graphic_popup_conf2_pane_g

0xad95,	// (0x0001960d) list_single_graphic_popup_conf2_pane_t1

0xada3,	// (0x0001961b) bg_popup_call2_act_pane_cp01_ParamLimits

0xada3,	// (0x0001961b) bg_popup_call2_act_pane_cp01

0xae2d,	// (0x000196a5) call_type_pane_cp05_ParamLimits

0xae2d,	// (0x000196a5) call_type_pane_cp05

0xae81,	// (0x000196f9) popup_call2_audio_second_window_g1_ParamLimits

0xae81,	// (0x000196f9) popup_call2_audio_second_window_g1

0xaed5,	// (0x0001974d) popup_call2_audio_second_window_g2_ParamLimits

0xaed5,	// (0x0001974d) popup_call2_audio_second_window_g2

0x0002,

0xf42e,	// (0x0001dca6) popup_call2_audio_second_window_g_ParamLimits

0xf42e,	// (0x0001dca6) popup_call2_audio_second_window_g

0xaf3a,	// (0x000197b2) popup_call2_audio_second_window_t1_ParamLimits

0xaf3a,	// (0x000197b2) popup_call2_audio_second_window_t1

0xaff5,	// (0x0001986d) popup_call2_audio_second_window_t2_ParamLimits

0xaff5,	// (0x0001986d) popup_call2_audio_second_window_t2

0xb048,	// (0x000198c0) popup_call2_audio_second_window_t3_ParamLimits

0xb048,	// (0x000198c0) popup_call2_audio_second_window_t3

0x0003,

0xf435,	// (0x0001dcad) popup_call2_audio_second_window_t_ParamLimits

0xf435,	// (0x0001dcad) popup_call2_audio_second_window_t

0x99e1,	// (0x00018259) bg_popup_call2_in_pane_cp02

0x99eb,	// (0x00018263) call_type_pane_cp04

0x3047,	// (0x000118bf) popup_call2_audio_wait_window_g1

0x304f,	// (0x000118c7) popup_call2_audio_wait_window_g2

0x0001,

0xf43e,	// (0x0001dcb6) popup_call2_audio_wait_window_g

0x9a03,	// (0x0001827b) popup_call2_audio_wait_window_t3

0xb13b,	// (0x000199b3) bg_popup_call2_act_pane_ParamLimits

0xb13b,	// (0x000199b3) bg_popup_call2_act_pane

0xb1fb,	// (0x00019a73) call_type_pane_cp03_ParamLimits

0xb1fb,	// (0x00019a73) call_type_pane_cp03

0xb25f,	// (0x00019ad7) popup_call2_audio_first_window_g1_ParamLimits

0xb25f,	// (0x00019ad7) popup_call2_audio_first_window_g1

0xb2cf,	// (0x00019b47) popup_call2_audio_first_window_g2_ParamLimits

0xb2cf,	// (0x00019b47) popup_call2_audio_first_window_g2

0xb333,	// (0x00019bab) popup_call2_audio_first_window_g3_ParamLimits

0xb333,	// (0x00019bab) popup_call2_audio_first_window_g3

0x0004,

0xf443,	// (0x0001dcbb) popup_call2_audio_first_window_g_ParamLimits

0xf443,	// (0x0001dcbb) popup_call2_audio_first_window_g

0xb3bb,	// (0x00019c33) popup_call2_audio_first_window_t1_ParamLimits

0xb3bb,	// (0x00019c33) popup_call2_audio_first_window_t1

0xb4be,	// (0x00019d36) popup_call2_audio_first_window_t4_ParamLimits

0xb4be,	// (0x00019d36) popup_call2_audio_first_window_t4

0xb5a1,	// (0x00019e19) popup_call2_audio_first_window_t5_ParamLimits

0xb5a1,	// (0x00019e19) popup_call2_audio_first_window_t5

0x0003,

0xf44e,	// (0x0001dcc6) popup_call2_audio_first_window_t_ParamLimits

0xf44e,	// (0x0001dcc6) popup_call2_audio_first_window_t

0x9c34,	// (0x000184ac) bg_popup_call2_act_pane_g1

0xbb78,	// (0x0001a3f0) popup_cale_lunar_info_window_t1

0xbb86,	// (0x0001a3fe) popup_cale_lunar_info_window_t2

0xbb94,	// (0x0001a40c) popup_cale_lunar_info_window_t3

0x99e1,	// (0x00018259) bg_popup_call2_bubble_pane

0xb6a2,	// (0x00019f1a) bg_popup_call2_in_pane_cp01_ParamLimits

0xb6a2,	// (0x00019f1a) bg_popup_call2_in_pane_cp01

0x96bd,	// (0x00017f35) call_type_pane_cp02

0x3057,	// (0x000118cf) popup_call2_audio_out_window_g1_ParamLimits

0x3057,	// (0x000118cf) popup_call2_audio_out_window_g1

0xb6ea,	// (0x00019f62) popup_call2_audio_out_window_g2_ParamLimits

0xb6ea,	// (0x00019f62) popup_call2_audio_out_window_g2

0x3083,	// (0x000118fb) popup_call2_audio_out_window_g3_ParamLimits

0x3083,	// (0x000118fb) popup_call2_audio_out_window_g3

0x0003,

0xf457,	// (0x0001dccf) popup_call2_audio_out_window_g_ParamLimits

0xf457,	// (0x0001dccf) popup_call2_audio_out_window_g

0xb721,	// (0x00019f99) popup_call2_audio_out_window_t1_ParamLimits

0xb721,	// (0x00019f99) popup_call2_audio_out_window_t1

0xb780,	// (0x00019ff8) popup_call2_audio_out_window_t2_ParamLimits

0xb780,	// (0x00019ff8) popup_call2_audio_out_window_t2

0xb7d4,	// (0x0001a04c) popup_call2_audio_out_window_t3_ParamLimits

0xb7d4,	// (0x0001a04c) popup_call2_audio_out_window_t3

0xb7ea,	// (0x0001a062) popup_call2_audio_out_window_t4_ParamLimits

0xb7ea,	// (0x0001a062) popup_call2_audio_out_window_t4

0xb800,	// (0x0001a078) popup_call2_audio_out_window_t5_ParamLimits

0xb800,	// (0x0001a078) popup_call2_audio_out_window_t5

0x0005,

0xf460,	// (0x0001dcd8) popup_call2_audio_out_window_t_ParamLimits

0xf460,	// (0x0001dcd8) popup_call2_audio_out_window_t

0xb864,	// (0x0001a0dc) bg_popup_call2_in_pane_ParamLimits

0xb864,	// (0x0001a0dc) bg_popup_call2_in_pane

0xb8c0,	// (0x0001a138) popup_call2_audio_in_window_g1_ParamLimits

0xb8c0,	// (0x0001a138) popup_call2_audio_in_window_g1

0xb8f8,	// (0x0001a170) popup_call2_audio_in_window_g2_ParamLimits

0xb8f8,	// (0x0001a170) popup_call2_audio_in_window_g2

0xb930,	// (0x0001a1a8) popup_call2_audio_in_window_g3_ParamLimits

0xb930,	// (0x0001a1a8) popup_call2_audio_in_window_g3

0x0003,

0xf46d,	// (0x0001dce5) popup_call2_audio_in_window_g_ParamLimits

0xf46d,	// (0x0001dce5) popup_call2_audio_in_window_g

0xb988,	// (0x0001a200) popup_call2_audio_in_window_t1_ParamLimits

0xb988,	// (0x0001a200) popup_call2_audio_in_window_t1

0xba08,	// (0x0001a280) popup_call2_audio_in_window_t2_ParamLimits

0xba08,	// (0x0001a280) popup_call2_audio_in_window_t2

0xba88,	// (0x0001a300) popup_call2_audio_in_window_t3_ParamLimits

0xba88,	// (0x0001a300) popup_call2_audio_in_window_t3

0xbaa2,	// (0x0001a31a) popup_call2_audio_in_window_t4_ParamLimits

0xbaa2,	// (0x0001a31a) popup_call2_audio_in_window_t4

0xbab4,	// (0x0001a32c) popup_call2_audio_in_window_t5_ParamLimits

0xbab4,	// (0x0001a32c) popup_call2_audio_in_window_t5

0xbac9,	// (0x0001a341) popup_call2_audio_in_window_t6_ParamLimits

0xbac9,	// (0x0001a341) popup_call2_audio_in_window_t6

0x0005,

0xf476,	// (0x0001dcee) popup_call2_audio_in_window_t_ParamLimits

0xf476,	// (0x0001dcee) popup_call2_audio_in_window_t

0x9c34,	// (0x000184ac) bg_popup_call2_in_pane_g1

0xbba2,	// (0x0001a41a) popup_cale_lunar_info_window_t4

0x0003,

0xf4c6,	// (0x0001dd3e) popup_cale_lunar_info_window_t

0x9c3c,	// (0x000184b4) bg_popup_call2_rect_pane_ParamLimits

0x9c3c,	// (0x000184b4) bg_popup_call2_rect_pane

0x99e1,	// (0x00018259) call2_cli_visual_graphic_pane

0x99e1,	// (0x00018259) call2_cli_visual_text_pane

0xbcf7,	// (0x0001a56f) smil_status_volume_pane_g3

0x0002,

0x9c54,	// (0x000184cc) call2_cli_visual_graphic_pane_g1

0x9c54,	// (0x000184cc) call2_cli_visual_graphic_pane_g2

0x9c54,	// (0x000184cc) call2_cli_visual_graphic_pane_g3

0x0002,

0xf483,	// (0x0001dcfb) call2_cli_visual_graphic_pane_g

0x9ea3,	// (0x0001871b) bg_popup_call2_rect_pane_g1

0x9e93,	// (0x0001870b) bg_popup_call2_rect_pane_g2

0x9e9b,	// (0x00018713) bg_popup_call2_rect_pane_g3

0x9eab,	// (0x00018723) bg_popup_call2_rect_pane_g4

0x9eb3,	// (0x0001872b) bg_popup_call2_rect_pane_g5

0x9ebb,	// (0x00018733) bg_popup_call2_rect_pane_g6

0x9ec3,	// (0x0001873b) bg_popup_call2_rect_pane_g7

0x9ecb,	// (0x00018743) bg_popup_call2_rect_pane_g8

0x9ed3,	// (0x0001874b) bg_popup_call2_rect_pane_g9

0x0008,

0xf213,	// (0x0001da8b) bg_popup_call2_rect_pane_g

0xbade,	// (0x0001a356) bg_popup_call2_bubble_pane_g1

0xbae6,	// (0x0001a35e) bg_popup_call2_bubble_pane_g2

0xbaee,	// (0x0001a366) bg_popup_call2_bubble_pane_g3

0xbaf6,	// (0x0001a36e) bg_popup_call2_bubble_pane_g4

0xbafe,	// (0x0001a376) bg_popup_call2_bubble_pane_g5

0xbb06,	// (0x0001a37e) bg_popup_call2_bubble_pane_g6

0xbb0e,	// (0x0001a386) bg_popup_call2_bubble_pane_g7

0xbb16,	// (0x0001a38e) bg_popup_call2_bubble_pane_g8

0xbb1e,	// (0x0001a396) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48a,	// (0x0001dd02) bg_popup_call2_bubble_pane_g

0x0914,	// (0x0000f18c) aid_cale_week_size_cell_pane

0x0f88,	// (0x0000f800) aid_cams_cif_uncrop_pane_ParamLimits

0x0f88,	// (0x0000f800) aid_cams_cif_uncrop_pane

0x958b,	// (0x00017e03) aid_cams_size_cell_ParamLimits

0x958b,	// (0x00017e03) aid_cams_size_cell

0x958b,	// (0x00017e03) grid_cams_pane_ParamLimits

0x958b,	// (0x00017e03) linegrid_cams_pane_ParamLimits

0x119d,	// (0x0000fa15) call_video_pane_t1

0x11b7,	// (0x0000fa2f) call_video_pane_t2

0x0001,

0xf1ba,	// (0x0001da32) call_video_pane_t

0x15dd,	// (0x0000fe55) aid_cale_month_size_cell_pane_ParamLimits

0x15dd,	// (0x0000fe55) aid_cale_month_size_cell_pane

0xf50a,	// (0x0001dd82) smil_status_volume_pane_g

0xbd04,	// (0x0001a57c) volume_smil_pane_ParamLimits

0x9528,	// (0x00017da0) aid_popup2_width_pane

0x0870,	// (0x0000f0e8) cell_qdial_pane_g4_ParamLimits

0x0870,	// (0x0000f0e8) cell_qdial_pane_g4

0x24bc,	// (0x00010d34) aid_blid_cardinal_pane_ParamLimits

0x24c8,	// (0x00010d40) aid_blid_destination_pane_ParamLimits

0x24c8,	// (0x00010d40) aid_blid_destination_pane

0x9c3c,	// (0x000184b4) bg_popup_call_poc_act_pane_ParamLimits

0x9c3c,	// (0x000184b4) bg_popup_call_poc_act_pane

0x9c3c,	// (0x000184b4) bg_popup_call_poc_inact_pane_ParamLimits

0x9c3c,	// (0x000184b4) bg_popup_call_poc_inact_pane

0xbb26,	// (0x0001a39e) bg_popup_call_poc_act_pane_g1

0xbb2e,	// (0x0001a3a6) bg_popup_call_poc_act_pane_g2

0xbb36,	// (0x0001a3ae) bg_popup_call_poc_act_pane_g3

0xbaf6,	// (0x0001a36e) bg_popup_call_poc_act_pane_g4

0xbafe,	// (0x0001a376) bg_popup_call_poc_act_pane_g5

0xbb3e,	// (0x0001a3b6) bg_popup_call_poc_act_pane_g6

0xbb0e,	// (0x0001a386) bg_popup_call_poc_act_pane_g7

0xbb46,	// (0x0001a3be) bg_popup_call_poc_act_pane_g8

0x99e1,	// (0x00018259) main_usb_pane

0xbc0c,	// (0x0001a484) popup_cale_lunar_info_window

0x1472,	// (0x0000fcea) im_reading_pane_t1_ParamLimits

0xa063,	// (0x000188db) list_im_pane_ParamLimits

0xa074,	// (0x000188ec) scroll_pane_cp07_ParamLimits

0x99e1,	// (0x00018259) grid_highlight_pane_cp012

0x9c3c,	// (0x000184b4) mup_scale_pane_ParamLimits

0x9cb7,	// (0x0001852f) main_usb_pane_g1_ParamLimits

0x9cb7,	// (0x0001852f) main_usb_pane_g1

0x9cb7,	// (0x0001852f) main_usb_pane_g2_ParamLimits

0x9cb7,	// (0x0001852f) main_usb_pane_g2

0x0001,

0xf199,	// (0x0001da11) main_usb_pane_g_ParamLimits

0xf199,	// (0x0001da11) main_usb_pane_g

0x9d07,	// (0x0001857f) main_usb_pane_t1_ParamLimits

0x9d07,	// (0x0001857f) main_usb_pane_t1

0x9d07,	// (0x0001857f) main_usb_pane_t2_ParamLimits

0x9d07,	// (0x0001857f) main_usb_pane_t2

0x9d07,	// (0x0001857f) main_usb_pane_t3_ParamLimits

0x9d07,	// (0x0001857f) main_usb_pane_t3

0x9d07,	// (0x0001857f) main_usb_pane_t4_ParamLimits

0x9d07,	// (0x0001857f) main_usb_pane_t4

0x9d07,	// (0x0001857f) main_usb_pane_t5_ParamLimits

0x9d07,	// (0x0001857f) main_usb_pane_t5

0x9d07,	// (0x0001857f) main_usb_pane_t6_ParamLimits

0x9d07,	// (0x0001857f) main_usb_pane_t6

0x0005,

0xf4b4,	// (0x0001dd2c) main_usb_pane_t_ParamLimits

0x245b,	// (0x00010cd3) aid_text_placing

0x2466,	// (0x00010cde) main_location2_pane_t1_ParamLimits

0x247c,	// (0x00010cf4) main_location2_pane_t2_ParamLimits

0x2492,	// (0x00010d0a) main_location2_pane_t3_ParamLimits

0x24a8,	// (0x00010d20) main_location2_pane_t4_ParamLimits

0x24a8,	// (0x00010d20) main_location2_pane_t4

0xf2f6,	// (0x0001db6e) main_location2_pane_t_ParamLimits

0x9c6a,	// (0x000184e2) find_pinb_pane_g2_ParamLimits

0x9c6a,	// (0x000184e2) find_pinb_pane_g2

0x0001,

0xf072,	// (0x0001d8ea) find_pinb_pane_g_ParamLimits

0xf072,	// (0x0001d8ea) find_pinb_pane_g

0x9c76,	// (0x000184ee) find_pinb_pane_t1_ParamLimits

0x9c88,	// (0x00018500) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x0001d8ef) find_pinb_pane_t_ParamLimits

0x99e1,	// (0x00018259) main_call3_pane

0x1bda,	// (0x00010452) cale_month_day_heading_pane_t1_ParamLimits

0x1c60,	// (0x000104d8) cale_month_day_heading_pane_t2_ParamLimits

0x1cd9,	// (0x00010551) cale_month_day_heading_pane_t3_ParamLimits

0x1d52,	// (0x000105ca) cale_month_day_heading_pane_t4_ParamLimits

0x1dd3,	// (0x0001064b) cale_month_day_heading_pane_t5_ParamLimits

0x1e5c,	// (0x000106d4) cale_month_day_heading_pane_t6_ParamLimits

0x1ee5,	// (0x0001075d) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x0001da6a) cale_month_day_heading_pane_t_ParamLimits

0xa2d9,	// (0x00018b51) smil_status_volume_pane

0x2b4b,	// (0x000113c3) postcard_address_pane_ParamLimits

0x2b4b,	// (0x000113c3) postcard_address_pane

0x2b61,	// (0x000113d9) postcard_message_pane_ParamLimits

0x2b61,	// (0x000113d9) postcard_message_pane

0x30af,	// (0x00011927) call2_cli_visual_pane_t1_ParamLimits

0x30af,	// (0x00011927) call2_cli_visual_pane_t1

0xbd31,	// (0x0001a5a9) postcard_message_pane_t1_ParamLimits

0xbd31,	// (0x0001a5a9) postcard_message_pane_t1

0xbd19,	// (0x0001a591) postcard_address_pane_t1_ParamLimits

0xbd19,	// (0x0001a591) postcard_address_pane_t1

0x3807,	// (0x0001207f) popup_call3_audio_in_window_ParamLimits

0x3807,	// (0x0001207f) popup_call3_audio_in_window

0x368c,	// (0x00011f04) bg_popup_call3_in_pane_ParamLimits

0x368c,	// (0x00011f04) bg_popup_call3_in_pane

0x3708,	// (0x00011f80) popup_call3_audio_in_window_g1_ParamLimits

0x3708,	// (0x00011f80) popup_call3_audio_in_window_g1

0x3728,	// (0x00011fa0) popup_call3_audio_in_window_g2_ParamLimits

0x3728,	// (0x00011fa0) popup_call3_audio_in_window_g2

0x3748,	// (0x00011fc0) popup_call3_audio_in_window_g3_ParamLimits

0x3748,	// (0x00011fc0) popup_call3_audio_in_window_g3

0x0003,

0xf511,	// (0x0001dd89) popup_call3_audio_in_window_g_ParamLimits

0xf511,	// (0x0001dd89) popup_call3_audio_in_window_g

0x3779,	// (0x00011ff1) popup_call3_audio_in_window_t1_ParamLimits

0x3779,	// (0x00011ff1) popup_call3_audio_in_window_t1

0x37b7,	// (0x0001202f) popup_call3_audio_in_window_t2_ParamLimits

0x37b7,	// (0x0001202f) popup_call3_audio_in_window_t2

0x37f5,	// (0x0001206d) popup_call3_audio_in_window_t3_ParamLimits

0x37f5,	// (0x0001206d) popup_call3_audio_in_window_t3

0x0002,

0xf51a,	// (0x0001dd92) popup_call3_audio_in_window_t_ParamLimits

0xf51a,	// (0x0001dd92) popup_call3_audio_in_window_t

0x9f96,	// (0x0001880e) bg_popup_call3_rect_pane

0x9ea3,	// (0x0001871b) bg_popup_call3_rect_pane_g1

0x9e93,	// (0x0001870b) bg_popup_call3_rect_pane_g2

0x9e9b,	// (0x00018713) bg_popup_call3_rect_pane_g3

0x9eab,	// (0x00018723) bg_popup_call3_rect_pane_g4

0x9eb3,	// (0x0001872b) bg_popup_call3_rect_pane_g5

0x9ebb,	// (0x00018733) bg_popup_call3_rect_pane_g6

0x9ec3,	// (0x0001873b) bg_popup_call3_rect_pane_g7

0x9516,	// (0x00017d8e) mup_visualizer_osc_pane

0x9516,	// (0x00017d8e) mup_visualizer_spec_pane

0x36bc,	// (0x00011f34) call3_video_qcif_pane_ParamLimits

0x36bc,	// (0x00011f34) call3_video_qcif_pane

0x36cf,	// (0x00011f47) call3_video_qcif_uncrop_pane_ParamLimits

0x36cf,	// (0x00011f47) call3_video_qcif_uncrop_pane

0x36df,	// (0x00011f57) call3_video_subqcif_pane_ParamLimits

0x36df,	// (0x00011f57) call3_video_subqcif_pane

0x36f5,	// (0x00011f6d) call3_video_subqcif_uncrop_pane_ParamLimits

0x36f5,	// (0x00011f6d) call3_video_subqcif_uncrop_pane

0x3768,	// (0x00011fe0) popup_call3_audio_in_window_g4_ParamLimits

0x3768,	// (0x00011fe0) popup_call3_audio_in_window_g4

0x9516,	// (0x00017d8e) mup_spec_half_pane

0x9516,	// (0x00017d8e) mup_spec_half_pane_cp

0x9516,	// (0x00017d8e) mup_osc_middle_pane

0x9cfd,	// (0x00018575) mup_visualizer_osc_pane_g1

0xbcaa,	// (0x0001a522) mup_spec_bar_pane_ParamLimits

0xbcaa,	// (0x0001a522) mup_spec_bar_pane

0x9cfd,	// (0x00018575) mup_spec_bar_pane_g1

0x9cfd,	// (0x00018575) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x0001d904) mup_spec_bar_pane_g

0x0914,	// (0x0000f18c) aid_cale_week_size_cell_pane_ParamLimits

0x092e,	// (0x0000f1a6) bg_cale_heading_pane_ParamLimits

0x0952,	// (0x0000f1ca) bg_cale_pane_cp01_ParamLimits

0x096f,	// (0x0000f1e7) cale_week_corner_pane_ParamLimits

0x098e,	// (0x0000f206) cale_week_day_heading_pane_ParamLimits

0x09b7,	// (0x0000f22f) cale_week_scroll_pane_g1_ParamLimits

0x09d6,	// (0x0000f24e) cale_week_scroll_pane_g2_ParamLimits

0x09ee,	// (0x0000f266) cale_week_scroll_pane_g3_ParamLimits

0x0a06,	// (0x0000f27e) cale_week_scroll_pane_g4_ParamLimits

0x0a1e,	// (0x0000f296) cale_week_scroll_pane_g5_ParamLimits

0x0a3e,	// (0x0000f2b6) cale_week_scroll_pane_g6_ParamLimits

0x0a5e,	// (0x0000f2d6) cale_week_scroll_pane_g7_ParamLimits

0x0a7e,	// (0x0000f2f6) cale_week_scroll_pane_g8_ParamLimits

0x0aa2,	// (0x0000f31a) cale_week_scroll_pane_g9_ParamLimits

0x0aba,	// (0x0000f332) cale_week_scroll_pane_g10_ParamLimits

0x0ad2,	// (0x0000f34a) cale_week_scroll_pane_g11_ParamLimits

0x0aea,	// (0x0000f362) cale_week_scroll_pane_g12_ParamLimits

0x0b0a,	// (0x0000f382) cale_week_scroll_pane_g13_ParamLimits

0x0b2e,	// (0x0000f3a6) cale_week_scroll_pane_g14_ParamLimits

0x0b52,	// (0x0000f3ca) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x0001d97b) cale_week_scroll_pane_g_ParamLimits

0x0b9a,	// (0x0000f412) cale_week_time_pane_ParamLimits

0x0bbe,	// (0x0000f436) grid_cale_week_pane_ParamLimits

0x9f0c,	// (0x00018784) listscroll_cale_week_pane_t1

0x9f1e,	// (0x00018796) scroll_pane_cp08_ParamLimits

0x1655,	// (0x0000fecd) cale_month_corner_pane_ParamLimits

0xa2a3,	// (0x00018b1b) cale_month_pane_t1

0x1b55,	// (0x000103cd) cale_month_week_pane_ParamLimits

0x229b,	// (0x00010b13) popup_call_status_window_g1_ParamLimits

0x22af,	// (0x00010b27) popup_call_status_window_g2_ParamLimits

0x22c3,	// (0x00010b3b) popup_call_status_window_g3_ParamLimits

0xf27d,	// (0x0001daf5) popup_call_status_window_g_ParamLimits

0xa663,	// (0x00018edb) aid_call2_pane

0x295f,	// (0x000111d7) msg_header_pane_g1

0x2b4b,	// (0x000113c3) postcard_address2_pane_ParamLimits

0x2b4b,	// (0x000113c3) postcard_address2_pane

0x2b61,	// (0x000113d9) postcard_message2_pane_ParamLimits

0x2b61,	// (0x000113d9) postcard_message2_pane

0x3659,	// (0x00011ed1) message2_row_pane_ParamLimits

0x3659,	// (0x00011ed1) message2_row_pane

0x3679,	// (0x00011ef1) address2_row_pane_ParamLimits

0x3679,	// (0x00011ef1) address2_row_pane

0xbc77,	// (0x0001a4ef) postcard_message2_row_pane_g1

0xbc7f,	// (0x0001a4f7) postcard_message2_row_pane_t1

0xbc77,	// (0x0001a4ef) address2_row_pane_g1

0xbc7f,	// (0x0001a4f7) address2_row_pane_t1

0x0f1b,	// (0x0000f793) aid_size_cell_vorec

0x99e1,	// (0x00018259) main_rss_pane

0xbc8d,	// (0x0001a505) rss_list_single_pane_ParamLimits

0xbc8d,	// (0x0001a505) rss_list_single_pane

0xbc9b,	// (0x0001a513) rss_list_single_pane_t1

0xbc9b,	// (0x0001a513) rss_list_single_pane_t2

0x0001,

0xf505,	// (0x0001dd7d) rss_list_single_pane_t

0x99e1,	// (0x00018259) main_camera2_pane

0x99e1,	// (0x00018259) main_video2_pane

0xbd4d,	// (0x0001a5c5) cams_zoom_pane_cp2_ParamLimits

0xbd4d,	// (0x0001a5c5) cams_zoom_pane_cp2

0xbd4d,	// (0x0001a5c5) image2_vga_pane_ParamLimits

0xbd4d,	// (0x0001a5c5) image2_vga_pane

0xbd5b,	// (0x0001a5d3) main_camera2_pane_g1_ParamLimits

0xbd5b,	// (0x0001a5d3) main_camera2_pane_g1

0xbd5b,	// (0x0001a5d3) main_camera2_pane_g2_ParamLimits

0xbd5b,	// (0x0001a5d3) main_camera2_pane_g2

0xbd5b,	// (0x0001a5d3) main_camera2_pane_g3_ParamLimits

0xbd5b,	// (0x0001a5d3) main_camera2_pane_g3

0xbd5b,	// (0x0001a5d3) main_camera2_pane_g4_ParamLimits

0xbd5b,	// (0x0001a5d3) main_camera2_pane_g4

0xbd5b,	// (0x0001a5d3) main_camera2_pane_g5_ParamLimits

0xbd5b,	// (0x0001a5d3) main_camera2_pane_g5

0xbd5b,	// (0x0001a5d3) main_camera2_pane_g6_ParamLimits

0xbd5b,	// (0x0001a5d3) main_camera2_pane_g6

0xbd5b,	// (0x0001a5d3) main_camera2_pane_g7_ParamLimits

0xbd5b,	// (0x0001a5d3) main_camera2_pane_g7

0xbd5b,	// (0x0001a5d3) main_camera2_pane_g8_ParamLimits

0xbd5b,	// (0x0001a5d3) main_camera2_pane_g8

0x0008,

0xf521,	// (0x0001dd99) main_camera2_pane_g_ParamLimits

0xf521,	// (0x0001dd99) main_camera2_pane_g

0x3829,	// (0x000120a1) main_camera2_pane_t1_ParamLimits

0x3829,	// (0x000120a1) main_camera2_pane_t1

0x3829,	// (0x000120a1) main_camera2_pane_t2_ParamLimits

0x3829,	// (0x000120a1) main_camera2_pane_t2

0x3829,	// (0x000120a1) main_camera2_pane_t3_ParamLimits

0x3829,	// (0x000120a1) main_camera2_pane_t3

0x3829,	// (0x000120a1) main_camera2_pane_t4_ParamLimits

0x3829,	// (0x000120a1) main_camera2_pane_t4

0x0006,

0xf534,	// (0x0001ddac) main_camera2_pane_t_ParamLimits

0xf534,	// (0x0001ddac) main_camera2_pane_t

0xbd7d,	// (0x0001a5f5) cams_zoom_pane_cp4_ParamLimits

0xbd7d,	// (0x0001a5f5) cams_zoom_pane_cp4

0xbd8b,	// (0x0001a603) image2_cif_pane_ParamLimits

0xbd8b,	// (0x0001a603) image2_cif_pane

0x958b,	// (0x00017e03) image2_subqcif_pane_ParamLimits

0x958b,	// (0x00017e03) image2_subqcif_pane

0x383d,	// (0x000120b5) main_video2_pane_g1_ParamLimits

0x383d,	// (0x000120b5) main_video2_pane_g1

0x383d,	// (0x000120b5) main_video2_pane_g2_ParamLimits

0x383d,	// (0x000120b5) main_video2_pane_g2

0x383d,	// (0x000120b5) main_video2_pane_g3_ParamLimits

0x383d,	// (0x000120b5) main_video2_pane_g3

0x383d,	// (0x000120b5) main_video2_pane_g4_ParamLimits

0x383d,	// (0x000120b5) main_video2_pane_g4

0x383d,	// (0x000120b5) main_video2_pane_g5_ParamLimits

0x383d,	// (0x000120b5) main_video2_pane_g5

0x383d,	// (0x000120b5) main_video2_pane_g6_ParamLimits

0x383d,	// (0x000120b5) main_video2_pane_g6

0x0005,

0xf543,	// (0x0001ddbb) main_video2_pane_g_ParamLimits

0xf543,	// (0x0001ddbb) main_video2_pane_g

0x384b,	// (0x000120c3) main_video2_pane_t1_ParamLimits

0x384b,	// (0x000120c3) main_video2_pane_t1

0x384b,	// (0x000120c3) main_video2_pane_t2_ParamLimits

0x384b,	// (0x000120c3) main_video2_pane_t2

0x384b,	// (0x000120c3) main_video2_pane_t3_ParamLimits

0x384b,	// (0x000120c3) main_video2_pane_t3

0x0002,

0xf550,	// (0x0001ddc8) main_video2_pane_t_ParamLimits

0xf550,	// (0x0001ddc8) main_video2_pane_t

0x315a,	// (0x000119d2) call_muted_g2

0x0001,

0xf4f7,	// (0x0001dd6f) call_muted_g

0x99e1,	// (0x00018259) main_mup2_pane

0xa9ec,	// (0x00019264) main_mup2_pane_g1_ParamLimits

0xa9ec,	// (0x00019264) main_mup2_pane_g1

0xa9ec,	// (0x00019264) main_mup2_pane_g2_ParamLimits

0xa9ec,	// (0x00019264) main_mup2_pane_g2

0x9cfd,	// (0x00018575) main_mup_pane_g13_cp1

0x9516,	// (0x00017d8e) mup_volume_pane_cp1

0xa9ec,	// (0x00019264) main_mup2_pane_g4_ParamLimits

0xa9ec,	// (0x00019264) main_mup2_pane_g4

0xa9ec,	// (0x00019264) main_mup2_pane_g5_ParamLimits

0xa9ec,	// (0x00019264) main_mup2_pane_g5

0xa9ec,	// (0x00019264) main_mup2_pane_g6_ParamLimits

0xa9ec,	// (0x00019264) main_mup2_pane_g6

0xa9ec,	// (0x00019264) main_mup2_pane_g7_ParamLimits

0xa9ec,	// (0x00019264) main_mup2_pane_g7

0x0006,

0xf557,	// (0x0001ddcf) main_mup2_pane_g_ParamLimits

0xf557,	// (0x0001ddcf) main_mup2_pane_g

0xa9fa,	// (0x00019272) main_mup2_pane_t1_ParamLimits

0xa9fa,	// (0x00019272) main_mup2_pane_t1

0xa9fa,	// (0x00019272) main_mup2_pane_t2_ParamLimits

0xa9fa,	// (0x00019272) main_mup2_pane_t2

0xa9fa,	// (0x00019272) main_mup2_pane_t3_ParamLimits

0xa9fa,	// (0x00019272) main_mup2_pane_t3

0xa9fa,	// (0x00019272) main_mup2_pane_t4_ParamLimits

0xa9fa,	// (0x00019272) main_mup2_pane_t4

0xa9fa,	// (0x00019272) main_mup2_pane_t5_ParamLimits

0xa9fa,	// (0x00019272) main_mup2_pane_t5

0xa9fa,	// (0x00019272) main_mup2_pane_t6_ParamLimits

0xa9fa,	// (0x00019272) main_mup2_pane_t6

0x0005,

0xf566,	// (0x0001ddde) main_mup2_pane_t_ParamLimits

0xf566,	// (0x0001ddde) main_mup2_pane_t

0xaa0e,	// (0x00019286) mup2_visualizer_pane_ParamLimits

0xaa0e,	// (0x00019286) mup2_visualizer_pane

0xaa0e,	// (0x00019286) mup_progress_pane_cp_ParamLimits

0xaa0e,	// (0x00019286) mup_progress_pane_cp

0xbd99,	// (0x0001a611) mup_volume_pane_cp_ParamLimits

0xbd99,	// (0x0001a611) mup_volume_pane_cp

0x9cb7,	// (0x0001852f) mup2_visualizer_pane_g1_ParamLimits

0x9cb7,	// (0x0001852f) mup2_visualizer_pane_g1

0x9cc5,	// (0x0001853d) mup2_visualizer_pane_g2_ParamLimits

0x9cc5,	// (0x0001853d) mup2_visualizer_pane_g2

0x9cc5,	// (0x0001853d) mup2_visualizer_pane_g3_ParamLimits

0x9cc5,	// (0x0001853d) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x0001d8f4) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x0001d8f4) mup2_visualizer_pane_g

0x9516,	// (0x00017d8e) aid_size_cell_fmradio

0x330a,	// (0x00011b82) aid_height_parent_landcape

0xa101,	// (0x00018979) wml_content_pane_cp

0xa109,	// (0x00018981) wml_tabs_pane

0xa112,	// (0x0001898a) popup_wml_miniature_window

0xa11a,	// (0x00018992) scroll_pane_cp021

0xa12e,	// (0x000189a6) wml_content_pane_comp8

0x99e1,	// (0x00018259) bg_popup_sub_pane_cp05

0xbdaf,	// (0x0001a627) popup_wml_miniature_window_g1

0xbdb7,	// (0x0001a62f) wml_miniature_view_pane

0x385f,	// (0x000120d7) aid_size_wml_view

0x3867,	// (0x000120df) wml_miniature_view_pane_g1

0x3870,	// (0x000120e8) wml_miniature_view_pane_g2

0x3879,	// (0x000120f1) wml_miniature_view_pane_g3

0x3881,	// (0x000120f9) wml_miniature_view_pane_g4

0x3889,	// (0x00012101) wml_miniature_view_pane_g5

0x3891,	// (0x00012109) wml_miniature_view_pane_g6

0x3899,	// (0x00012111) wml_miniature_view_pane_g7

0x38a1,	// (0x00012119) wml_miniature_view_pane_g8

0x0007,

0xf573,	// (0x0001ddeb) wml_miniature_view_pane_g

0xbdbf,	// (0x0001a637) background_graphic_ParamLimits

0xbdbf,	// (0x0001a637) background_graphic

0xbdcb,	// (0x0001a643) wml_tabs_2_pane

0xbdd4,	// (0x0001a64c) wml_tabs_3_pane_ParamLimits

0xbdd4,	// (0x0001a64c) wml_tabs_3_pane

0xbde6,	// (0x0001a65e) wml_tabs_4_pane_ParamLimits

0xbde6,	// (0x0001a65e) wml_tabs_4_pane

0xbdfc,	// (0x0001a674) wml_tabs_5_pane_ParamLimits

0xbdfc,	// (0x0001a674) wml_tabs_5_pane

0xbe16,	// (0x0001a68e) wml_tabs_pane_g2_ParamLimits

0xbe16,	// (0x0001a68e) wml_tabs_pane_g2

0xbe2b,	// (0x0001a6a3) wml_tabs_pane_g3_ParamLimits

0xbe2b,	// (0x0001a6a3) wml_tabs_pane_g3

0xbe40,	// (0x0001a6b8) wml_tabs_2_active_pane_ParamLimits

0xbe40,	// (0x0001a6b8) wml_tabs_2_active_pane

0xbe40,	// (0x0001a6b8) wml_tabs_2_passive_pane_ParamLimits

0xbe40,	// (0x0001a6b8) wml_tabs_2_passive_pane

0x38a9,	// (0x00012121) wml_tabs_3_active_pane_cp_ParamLimits

0x38a9,	// (0x00012121) wml_tabs_3_active_pane_cp

0x38be,	// (0x00012136) wml_tabs_3_passive_pane_ParamLimits

0x38be,	// (0x00012136) wml_tabs_3_passive_pane

0x38d1,	// (0x00012149) wml_tabs_3_passive_pane_cp_ParamLimits

0x38d1,	// (0x00012149) wml_tabs_3_passive_pane_cp

0x38e8,	// (0x00012160) tabs_4_active_pane

0x38f0,	// (0x00012168) tabs_4_passive_pane

0x38fa,	// (0x00012172) tabs_4_passive_pane_cp

0x3902,	// (0x0001217a) tabs_4_passive_pane_cp2

0x30ce,	// (0x00011946) aid_height_text

0xaa0e,	// (0x00019286) mup_volume_cont_pane_ParamLimits

0xaa0e,	// (0x00019286) mup_volume_cont_pane

0x9516,	// (0x00017d8e) aid_size_cell_pinb

0x9516,	// (0x00017d8e) aid_size_list_pinb

0xaa0e,	// (0x00019286) mup2_volume_cont_pane_ParamLimits

0xaa0e,	// (0x00019286) mup2_volume_cont_pane

0xbe4e,	// (0x0001a6c6) mup2_volume_cont_pane_g1_ParamLimits

0xbe4e,	// (0x0001a6c6) mup2_volume_cont_pane_g1

0x03db,	// (0x0000ec53) aid_size_cell_touch_ParamLimits

0x03db,	// (0x0000ec53) aid_size_cell_touch

0x0607,	// (0x0000ee7f) touch_pane_ParamLimits

0x0607,	// (0x0000ee7f) touch_pane

0x9516,	// (0x00017d8e) main_rss2_pane

0xbe6d,	// (0x0001a6e5) listscroll_rss2_pane

0xbe76,	// (0x0001a6ee) rss2_navigation_pane

0xbe7e,	// (0x0001a6f6) list_rss2_pane

0xa7e9,	// (0x00019061) scroll_pane_cp22

0xbe86,	// (0x0001a6fe) rss2_navigation_pane_g1

0xbe8f,	// (0x0001a707) rss2_navigation_pane_g2

0xbe97,	// (0x0001a70f) rss2_navigation_pane_g3

0x0002,

0xf584,	// (0x0001ddfc) rss2_navigation_pane_g

0xbe9f,	// (0x0001a717) rss2_navigation_pane_t1

0x390c,	// (0x00012184) rss2_list_single_pane_ParamLimits

0x390c,	// (0x00012184) rss2_list_single_pane

0xbead,	// (0x0001a725) rss2_list_single_pane_t2

0xbebb,	// (0x0001a733) rss2_list_single_pane_t3_ParamLimits

0xbebb,	// (0x0001a733) rss2_list_single_pane_t3

0xbed8,	// (0x0001a750) rss2_list_single_pane_t4

0x2185,	// (0x000109fd) smil_status_pane_g1

0x958b,	// (0x00017e03) main_image2_pane_ParamLimits

0x958b,	// (0x00017e03) main_image2_pane

0xbd5b,	// (0x0001a5d3) main_camera2_pane_g9_ParamLimits

0xbd5b,	// (0x0001a5d3) main_camera2_pane_g9

0x3829,	// (0x000120a1) main_camera2_pane_t5_ParamLimits

0x3829,	// (0x000120a1) main_camera2_pane_t5

0xbd69,	// (0x0001a5e1) main_camera2_pane_t6_ParamLimits

0xbd69,	// (0x0001a5e1) main_camera2_pane_t6

0x3923,	// (0x0001219b) main_image2_pane_g1_ParamLimits

0x3923,	// (0x0001219b) main_image2_pane_g1

0x2d7d,	// (0x000115f5) smil2_video_pane_ParamLimits

0x2d7d,	// (0x000115f5) smil2_video_pane

0x9534,	// (0x00017dac) aid_zoom_text_primary_cp

0x9581,	// (0x00017df9) popup_preview_fixed_window

0xa05b,	// (0x000188d3) im_reading_pane_g1

0x381b,	// (0x00012093) cams2_bc_adjust_pane_cp_ParamLimits

0x381b,	// (0x00012093) cams2_bc_adjust_pane_cp

0xaa0e,	// (0x00019286) cams2_bc_adjust_pane_ParamLimits

0xaa0e,	// (0x00019286) cams2_bc_adjust_pane

0x9cfd,	// (0x00018575) cams2_bc_adjust_pane_g1

0x9516,	// (0x00017d8e) cams2_slider_pane

0x9cfd,	// (0x00018575) cams2_slider_pane_g1

0x9cfd,	// (0x00018575) cams2_slider_pane_g2

0x0006,

0xf58b,	// (0x0001de03) cams2_slider_pane_g

0x069d,	// (0x0000ef15) calc_display_pane_ParamLimits

0x06c2,	// (0x0000ef3a) calc_paper_pane_ParamLimits

0x06e5,	// (0x0000ef5d) grid_calc_pane_ParamLimits

0xa6c5,	// (0x00018f3d) popup_clock_digital_window_t1_ParamLimits

0xac08,	// (0x00019480) main_image_pane_t1

0x067d,	// (0x0000eef5) aid_size_cell_calc_ParamLimits

0x067d,	// (0x0000eef5) aid_size_cell_calc

0x3350,	// (0x00011bc8) popup_blid_sat_info2_window_ParamLimits

0x3350,	// (0x00011bc8) popup_blid_sat_info2_window

0xbee6,	// (0x0001a75e) aid_size_cell_blid

0xbd8b,	// (0x0001a603) bg_popup_window_pane_cp07

0xbf03,	// (0x0001a77b) grid_popup_blid_pane

0xbf0d,	// (0x0001a785) heading_pane_cp05_ParamLimits

0xbf0d,	// (0x0001a785) heading_pane_cp05

0xbfd7,	// (0x0001a84f) cell_popup_blid_pane_ParamLimits

0xbfd7,	// (0x0001a84f) cell_popup_blid_pane

0xc001,	// (0x0001a879) cell_popup_blid_pane_g1

0xc009,	// (0x0001a881) cell_popup_blid_pane_t1

0xaa0e,	// (0x00019286) mup2_indicator_pane_ParamLimits

0xaa0e,	// (0x00019286) mup2_indicator_pane

0x9516,	// (0x00017d8e) mup2_visualizer_osc_pane

0xbd99,	// (0x0001a611) mup2_visualizer_spec_pane_ParamLimits

0xbd99,	// (0x0001a611) mup2_visualizer_spec_pane

0x9516,	// (0x00017d8e) mup2_spec_half_pane

0x9516,	// (0x00017d8e) mup2_spec_half_pane_cp

0xc017,	// (0x0001a88f) mup2_spec_bar_pane_ParamLimits

0xc017,	// (0x0001a88f) mup2_spec_bar_pane

0x9cfd,	// (0x00018575) mup2_spec_bar_pane_g1

0xc036,	// (0x0001a8ae) mup2_spec_bar_pane_g2

0x0001,

0xf5b1,	// (0x0001de29) mup2_spec_bar_pane_g

0x9516,	// (0x00017d8e) mup2_osc_middle_pane

0x9cfd,	// (0x00018575) mup2_visualizer_osc_pane_g1

0x95b9,	// (0x00017e31) popup_number_entry_window_t1_ParamLimits

0x95cc,	// (0x00017e44) popup_number_entry_window_t2_ParamLimits

0x95de,	// (0x00017e56) popup_number_entry_window_t3_ParamLimits

0x95f0,	// (0x00017e68) popup_number_entry_window_t5_ParamLimits

0x95f0,	// (0x00017e68) popup_number_entry_window_t5

0xf01d,	// (0x0001d895) popup_number_entry_window_t_ParamLimits

0x9625,	// (0x00017e9d) text_title_cp2_ParamLimits

0xab00,	// (0x00019378) aid_hotspot_pointer_text2_pane

0xab26,	// (0x0001939e) main_viewer_pane_g9_ParamLimits

0xab26,	// (0x0001939e) main_viewer_pane_g9

0xa2a3,	// (0x00018b1b) cale_month_pane_t1_ParamLimits

0xa30e,	// (0x00018b86) bg_cale_pane_ParamLimits

0xa326,	// (0x00018b9e) list_cale_pane_ParamLimits

0xa337,	// (0x00018baf) listscroll_cale_day_pane_t1

0xa349,	// (0x00018bc1) scroll_pane_cp09_ParamLimits

0x2691,	// (0x00010f09) main_mup_eq_pane_t1_ParamLimits

0x2691,	// (0x00010f09) main_mup_eq_pane_t1

0x26ad,	// (0x00010f25) main_mup_eq_pane_t2_ParamLimits

0x26ad,	// (0x00010f25) main_mup_eq_pane_t2

0x26c9,	// (0x00010f41) main_mup_eq_pane_t3_ParamLimits

0x26c9,	// (0x00010f41) main_mup_eq_pane_t3

0x26e7,	// (0x00010f5f) main_mup_eq_pane_t4_ParamLimits

0x26e7,	// (0x00010f5f) main_mup_eq_pane_t4

0x2705,	// (0x00010f7d) main_mup_eq_pane_t5_ParamLimits

0x2705,	// (0x00010f7d) main_mup_eq_pane_t5

0x2723,	// (0x00010f9b) main_mup_eq_pane_t6_ParamLimits

0x2723,	// (0x00010f9b) main_mup_eq_pane_t6

0x2739,	// (0x00010fb1) main_mup_eq_pane_t7_ParamLimits

0x2739,	// (0x00010fb1) main_mup_eq_pane_t7

0x274f,	// (0x00010fc7) main_mup_eq_pane_t8_ParamLimits

0x274f,	// (0x00010fc7) main_mup_eq_pane_t8

0x2765,	// (0x00010fdd) main_mup_eq_pane_t9_ParamLimits

0x2765,	// (0x00010fdd) main_mup_eq_pane_t9

0x2781,	// (0x00010ff9) main_mup_eq_pane_t10_ParamLimits

0x2781,	// (0x00010ff9) main_mup_eq_pane_t10

0x0009,

0xf377,	// (0x0001dbef) main_mup_eq_pane_t_ParamLimits

0xf377,	// (0x0001dbef) main_mup_eq_pane_t

0x2856,	// (0x000110ce) mup_equalizer_pane_cp5_ParamLimits

0x286e,	// (0x000110e6) mup_equalizer_pane_cp6_ParamLimits

0x2886,	// (0x000110fe) mup_equalizer_pane_cp7_ParamLimits

0x9516,	// (0x00017d8e) main_gallery_pane

0xbcc9,	// (0x0001a541) smil2_volume_pane

0xbcd1,	// (0x0001a549) smil_status_volume_pane_g1_ParamLimits

0xbce4,	// (0x0001a55c) smil_status_volume_pane_g2_ParamLimits

0xbcf7,	// (0x0001a56f) smil_status_volume_pane_g3_ParamLimits

0xf50a,	// (0x0001dd82) smil_status_volume_pane_g_ParamLimits

0xbd8b,	// (0x0001a603) bg_popup_window_pane_cp07_ParamLimits

0xbeee,	// (0x0001a766) blid_firmament_pane

0x958b,	// (0x00017e03) aid_size_cell_gallery_ParamLimits

0x958b,	// (0x00017e03) aid_size_cell_gallery

0x958b,	// (0x00017e03) grid_gallery_pane_ParamLimits

0x958b,	// (0x00017e03) grid_gallery_pane

0xbd8b,	// (0x0001a603) cell_gallery_pane_ParamLimits

0xbd8b,	// (0x0001a603) cell_gallery_pane

0x958b,	// (0x00017e03) bg_cell_gallery_focus_pane_ParamLimits

0x958b,	// (0x00017e03) bg_cell_gallery_focus_pane

0x9cb7,	// (0x0001852f) cell_gallery_pane_g1_ParamLimits

0x9cb7,	// (0x0001852f) cell_gallery_pane_g1

0x9cb7,	// (0x0001852f) cell_gallery_pane_g2_ParamLimits

0x9cb7,	// (0x0001852f) cell_gallery_pane_g2

0x9cb7,	// (0x0001852f) cell_gallery_pane_g3_ParamLimits

0x9cb7,	// (0x0001852f) cell_gallery_pane_g3

0x9cc5,	// (0x0001853d) cell_gallery_pane_g4_ParamLimits

0x9cc5,	// (0x0001853d) cell_gallery_pane_g4

0x0003,

0xf5b6,	// (0x0001de2e) cell_gallery_pane_g_ParamLimits

0xf5b6,	// (0x0001de2e) cell_gallery_pane_g

0xc040,	// (0x0001a8b8) bg_cell_gallery_focus_pane_g1

0xc048,	// (0x0001a8c0) bg_cell_gallery_focus_pane_g2

0xc050,	// (0x0001a8c8) bg_cell_gallery_focus_pane_g3

0xc058,	// (0x0001a8d0) bg_cell_gallery_focus_pane_g4

0xc060,	// (0x0001a8d8) bg_cell_gallery_focus_pane_g5

0xc068,	// (0x0001a8e0) bg_cell_gallery_focus_pane_g6

0xc070,	// (0x0001a8e8) bg_cell_gallery_focus_pane_g7

0xc078,	// (0x0001a8f0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5bf,	// (0x0001de37) bg_cell_gallery_focus_pane_g

0xc080,	// (0x0001a8f8) aid_firma_cardinal

0xc094,	// (0x0001a90c) blid_firmament_pane_t1

0xc0ab,	// (0x0001a923) blid_firmament_pane_t2

0xc0c2,	// (0x0001a93a) blid_firmament_pane_t3

0xc0d9,	// (0x0001a951) blid_firmament_pane_t4

0x0003,

0xf5d0,	// (0x0001de48) blid_firmament_pane_t

0xc0f0,	// (0x0001a968) blid_sat_info_pane

0x9cfd,	// (0x00018575) blid_sat_info_pane_g1

0x9cfd,	// (0x00018575) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x0001d904) blid_sat_info_pane_g

0xc100,	// (0x0001a978) blid_sat_info_pane_t1

0xc10e,	// (0x0001a986) smil2_volume_content_pane

0xc117,	// (0x0001a98f) smil2_volume_pane_g1

0x9e10,	// (0x00018688) smil2_volume_content_pane_g1

0xc11f,	// (0x0001a997) smil2_volume_content_pane_g2

0xc128,	// (0x0001a9a0) smil2_volume_content_pane_g3

0xc131,	// (0x0001a9a9) smil2_volume_content_pane_g4

0xc13a,	// (0x0001a9b2) smil2_volume_content_pane_g5

0xc143,	// (0x0001a9bb) smil2_volume_content_pane_g6

0xc14c,	// (0x0001a9c4) smil2_volume_content_pane_g7

0xc155,	// (0x0001a9cd) smil2_volume_content_pane_g8

0xc15e,	// (0x0001a9d6) smil2_volume_content_pane_g9

0xc167,	// (0x0001a9df) smil2_volume_content_pane_g10

0x0009,

0xf5d9,	// (0x0001de51) smil2_volume_content_pane_g

0x0c84,	// (0x0000f4fc) cale_week_day_heading_pane_t1_ParamLimits

0x0cae,	// (0x0000f526) cale_week_day_heading_pane_t2_ParamLimits

0x0cdd,	// (0x0000f555) cale_week_day_heading_pane_t3_ParamLimits

0x0d0c,	// (0x0000f584) cale_week_day_heading_pane_t4_ParamLimits

0x0d3b,	// (0x0000f5b3) cale_week_day_heading_pane_t5_ParamLimits

0x0d6e,	// (0x0000f5e6) cale_week_day_heading_pane_t6_ParamLimits

0x0da5,	// (0x0000f61d) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x0001d99c) cale_week_day_heading_pane_t_ParamLimits

0x9f3b,	// (0x000187b3) bg_cale_side_pane_ParamLimits

0x0dcf,	// (0x0000f647) cale_week_time_pane_t1_ParamLimits

0x0de9,	// (0x0000f661) cale_week_time_pane_t2_ParamLimits

0x0e03,	// (0x0000f67b) cale_week_time_pane_t3_ParamLimits

0x0e1d,	// (0x0000f695) cale_week_time_pane_t4_ParamLimits

0x0e37,	// (0x0000f6af) cale_week_time_pane_t5_ParamLimits

0x0e51,	// (0x0000f6c9) cale_week_time_pane_t6_ParamLimits

0x0e6f,	// (0x0000f6e7) cale_week_time_pane_t7_ParamLimits

0x0e91,	// (0x0000f709) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x0001d9ab) cale_week_time_pane_t_ParamLimits

0x0eb5,	// (0x0000f72d) cell_cale_week_pane_g2_ParamLimits

0x9f3b,	// (0x000187b3) bg_cale_side_pane_cp01_ParamLimits

0x1f76,	// (0x000107ee) cale_month_week_pane_t1_ParamLimits

0x1f8f,	// (0x00010807) cale_month_week_pane_t2_ParamLimits

0x1fa8,	// (0x00010820) cale_month_week_pane_t3_ParamLimits

0x1fc1,	// (0x00010839) cale_month_week_pane_t4_ParamLimits

0x1fda,	// (0x00010852) cale_month_week_pane_t5_ParamLimits

0x1ff3,	// (0x0001086b) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x0001da79) cale_month_week_pane_t_ParamLimits

0xa2b5,	// (0x00018b2d) cell_cale_month_pane_g1_ParamLimits

0x9516,	// (0x00017d8e) main_cale_event_viewer_pane

0x9516,	// (0x00017d8e) listscroll_cale_event_viewer_pane

0xc170,	// (0x0001a9e8) list_cale_ev_pane

0xc178,	// (0x0001a9f0) scroll_pane_cp023

0x3939,	// (0x000121b1) field_cale_ev_pane_ParamLimits

0x3939,	// (0x000121b1) field_cale_ev_pane

0xc184,	// (0x0001a9fc) field_cale_ev_content_pane_ParamLimits

0xc184,	// (0x0001a9fc) field_cale_ev_content_pane

0xc190,	// (0x0001aa08) field_cale_ev_pane_g1_ParamLimits

0xc190,	// (0x0001aa08) field_cale_ev_pane_g1

0xc19c,	// (0x0001aa14) field_cale_ev_pane_g2_ParamLimits

0xc19c,	// (0x0001aa14) field_cale_ev_pane_g2

0xc1b4,	// (0x0001aa2c) field_cale_ev_pane_g3_ParamLimits

0xc1b4,	// (0x0001aa2c) field_cale_ev_pane_g3

0x0002,

0xf5ee,	// (0x0001de66) field_cale_ev_pane_g_ParamLimits

0xf5ee,	// (0x0001de66) field_cale_ev_pane_g

0xc1cc,	// (0x0001aa44) field_cale_ev_pane_t1_ParamLimits

0xc1cc,	// (0x0001aa44) field_cale_ev_pane_t1

0x395d,	// (0x000121d5) field_cale_ev_content_pane_t1_ParamLimits

0x395d,	// (0x000121d5) field_cale_ev_content_pane_t1

0xaab3,	// (0x0001932b) bg_button_pane_cp01

0x0902,	// (0x0000f17a) listscroll_cale_week_pane_ParamLimits

0x9f03,	// (0x0001877b) popup_toolbar_window_cp01

0x9f0c,	// (0x00018784) listscroll_cale_week_pane_t1_ParamLimits

0x0902,	// (0x0000f17a) listscroll_cale_day_pane_ParamLimits

0x9f03,	// (0x0001877b) popup_toolbar_window_cp02

0xa337,	// (0x00018baf) listscroll_cale_day_pane_t1_ParamLimits

0x0902,	// (0x0000f17a) main_cale_month_pane_ParamLimits

0xbc47,	// (0x0001a4bf) popup_toolbar_window_cp03_ParamLimits

0xbc47,	// (0x0001a4bf) popup_toolbar_window_cp03

0x2c3b,	// (0x000114b3) main_image_pane_g2_ParamLimits

0x2c3b,	// (0x000114b3) main_image_pane_g2

0x2c4c,	// (0x000114c4) main_image_pane_g3_ParamLimits

0x2c4c,	// (0x000114c4) main_image_pane_g3

0x0002,

0xf409,	// (0x0001dc81) main_image_pane_g_ParamLimits

0xf409,	// (0x0001dc81) main_image_pane_g

0xac08,	// (0x00019480) main_image_pane_t1_ParamLimits

0x2c5d,	// (0x000114d5) main_image_pane_t2_ParamLimits

0x2c5d,	// (0x000114d5) main_image_pane_t2

0x2c6f,	// (0x000114e7) main_image_pane_t3_ParamLimits

0x2c6f,	// (0x000114e7) main_image_pane_t3

0x2c97,	// (0x0001150f) main_image_pane_t4_ParamLimits

0x2c97,	// (0x0001150f) main_image_pane_t4

0x0003,

0xf410,	// (0x0001dc88) main_image_pane_t_ParamLimits

0xf410,	// (0x0001dc88) main_image_pane_t

0x2cb7,	// (0x0001152f) popup_image_details_window_cp01

0x2cc1,	// (0x00011539) popup_toobar_trans_pane_cp01_ParamLimits

0x2cc1,	// (0x00011539) popup_toobar_trans_pane_cp01

0x3443,	// (0x00011cbb) popup_image_details_window_ParamLimits

0x3443,	// (0x00011cbb) popup_image_details_window

0xbc18,	// (0x0001a490) popup_image_focus_window

0xbd4d,	// (0x0001a5c5) camera2_autofocus_pane_ParamLimits

0xbd4d,	// (0x0001a5c5) camera2_autofocus_pane

0x9516,	// (0x00017d8e) bg_popup_sub_pane_cp06

0xc1e3,	// (0x0001aa5b) popup_image_focus_window_g1

0xc1eb,	// (0x0001aa63) popup_image_focus_window_g2

0xc1f3,	// (0x0001aa6b) popup_image_focus_window_g3

0xc1fb,	// (0x0001aa73) popup_image_focus_window_g4

0x0003,

0xf5f5,	// (0x0001de6d) popup_image_focus_window_g

0xc203,	// (0x0001aa7b) popup_image_focus_window_t1

0xc211,	// (0x0001aa89) popup_image_focus_window_t2

0xc221,	// (0x0001aa99) popup_image_focus_window_t3

0x0002,

0xf5fe,	// (0x0001de76) popup_image_focus_window_t

0x9cb7,	// (0x0001852f) camera2_autofocus_pane_g1

0x958b,	// (0x00017e03) bg_tb_trans_pane_cp01

0xc22f,	// (0x0001aaa7) popup_image_details_window_g1

0xc242,	// (0x0001aaba) popup_image_details_window_g2

0x0002,

0xf610,	// (0x0001de88) popup_image_details_window_g

0xc26b,	// (0x0001aae3) popup_image_details_window_t1

0xc27d,	// (0x0001aaf5) popup_image_details_window_t2

0xc296,	// (0x0001ab0e) popup_image_details_window_t3

0xc2aa,	// (0x0001ab22) popup_image_details_window_t4

0xc2c5,	// (0x0001ab3d) popup_image_details_window_t5

0x0004,

0xf617,	// (0x0001de8f) popup_image_details_window_t

0x9d47,	// (0x000185bf) bg_calc_paper_pane_ParamLimits

0x9516,	// (0x00017d8e) grid_highlight_pane_cp013

0x9d5b,	// (0x000185d3) list_calc_pane_ParamLimits

0x9d6d,	// (0x000185e5) scroll_pane_cp024

0x9d75,	// (0x000185ed) bg_calc_display_pane_ParamLimits

0x0727,	// (0x0000ef9f) calc_display_pane_t1_ParamLimits

0x073c,	// (0x0000efb4) calc_display_pane_t2_ParamLimits

0x9d81,	// (0x000185f9) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x0001d91c) calc_display_pane_t_ParamLimits

0x080a,	// (0x0000f082) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x0001d939) cell_calc_pane_g

0x0813,	// (0x0000f08b) cell_calc_pane_t1

0x9dee,	// (0x00018666) grid_highlight_pane_cp02_ParamLimits

0x9e04,	// (0x0001867c) toolbar_button_pane_cp01_ParamLimits

0x9e04,	// (0x0001867c) toolbar_button_pane_cp01

0xac4d,	// (0x000194c5) temp_image_control_pane_ParamLimits

0xac4d,	// (0x000194c5) temp_image_control_pane

0x958b,	// (0x00017e03) main_mp3_pane

0xc2df,	// (0x0001ab57) temp_image_control_pane_g1_ParamLimits

0xc2df,	// (0x0001ab57) temp_image_control_pane_g1

0xc2ed,	// (0x0001ab65) temp_image_control_pane_g2_ParamLimits

0xc2ed,	// (0x0001ab65) temp_image_control_pane_g2

0xc2ff,	// (0x0001ab77) temp_image_control_pane_g3_ParamLimits

0xc2ff,	// (0x0001ab77) temp_image_control_pane_g3

0x397e,	// (0x000121f6) temp_image_control_pane_g4_ParamLimits

0x397e,	// (0x000121f6) temp_image_control_pane_g4

0x0003,

0xf622,	// (0x0001de9a) temp_image_control_pane_g_ParamLimits

0xf622,	// (0x0001de9a) temp_image_control_pane_g

0xc2df,	// (0x0001ab57) main_mp3_pane_g1

0x3991,	// (0x00012209) main_mp3_pane_g2

0x0007,

0xf62b,	// (0x0001dea3) main_mp3_pane_g

0xc334,	// (0x0001abac) main_mp3_pane_t1

0x9cc5,	// (0x0001853d) main_camera_pane_g8_ParamLimits

0x9cc5,	// (0x0001853d) main_camera_pane_g8

0x108c,	// (0x0000f904) main_video_pane_g7_ParamLimits

0x108c,	// (0x0000f904) main_video_pane_g7

0x9d1b,	// (0x00018593) main_camera2_pane_t7_ParamLimits

0x9d1b,	// (0x00018593) main_camera2_pane_t7

0xa0c1,	// (0x00018939) scroll_pane_cp025_ParamLimits

0xa0c1,	// (0x00018939) scroll_pane_cp025

0xa0d5,	// (0x0001894d) scroll_pane_cp026_ParamLimits

0xa0d5,	// (0x0001894d) scroll_pane_cp026

0xa0e4,	// (0x0001895c) wml_content_pane_ParamLimits

0x9516,	// (0x00017d8e) main_touch_calib_pane

0x3a63,	// (0x000122db) main_touch_calib_pane_g1

0x3a75,	// (0x000122ed) main_touch_calib_pane_g2

0x3a87,	// (0x000122ff) main_touch_calib_pane_g3

0x3a99,	// (0x00012311) main_touch_calib_pane_g4

0x0003,

0xf649,	// (0x0001dec1) main_touch_calib_pane_g

0x3aab,	// (0x00012323) main_touch_calib_pane_t1

0x3ac5,	// (0x0001233d) main_touch_calib_pane_t2

0x0004,

0xf652,	// (0x0001deca) main_touch_calib_pane_t

0xa864,	// (0x000190dc) mup_progress_pane_cp02

0xa883,	// (0x000190fb) navi_pane_g1

0xa8e5,	// (0x0001915d) navi_pane_mp_t3

0x958b,	// (0x00017e03) main_mp3_pane_ParamLimits

0x35fc,	// (0x00011e74) navi_pane_ParamLimits

0xc2df,	// (0x0001ab57) main_mp3_pane_g1_ParamLimits

0x3991,	// (0x00012209) main_mp3_pane_g2_ParamLimits

0x399d,	// (0x00012215) main_mp3_pane_g3_ParamLimits

0x399d,	// (0x00012215) main_mp3_pane_g3

0x39ab,	// (0x00012223) main_mp3_pane_g4_ParamLimits

0x39ab,	// (0x00012223) main_mp3_pane_g4

0x9cb7,	// (0x0001852f) main_mp3_pane_g5_ParamLimits

0x9cb7,	// (0x0001852f) main_mp3_pane_g5

0xc30f,	// (0x0001ab87) main_mp3_pane_g6_ParamLimits

0xc30f,	// (0x0001ab87) main_mp3_pane_g6

0xc31c,	// (0x0001ab94) main_mp3_pane_g7_ParamLimits

0xc31c,	// (0x0001ab94) main_mp3_pane_g7

0xc328,	// (0x0001aba0) main_mp3_pane_g8_ParamLimits

0xc328,	// (0x0001aba0) main_mp3_pane_g8

0xf62b,	// (0x0001dea3) main_mp3_pane_g_ParamLimits

0x39b7,	// (0x0001222f) main_mp3_pane_t2

0x39c5,	// (0x0001223d) main_mp3_pane_t3

0xc342,	// (0x0001abba) main_mp3_pane_t4

0xc350,	// (0x0001abc8) main_mp3_pane_t5

0x0005,

0xf63c,	// (0x0001deb4) main_mp3_pane_t

0xc35e,	// (0x0001abd6) mup_progress_pane_cp01

0x9534,	// (0x00017dac) aid_zoom_text_secondary2

0xc170,	// (0x0001a9e8) list_cale_ev2_pane

0xc178,	// (0x0001a9f0) scroll_pane_cp023_ParamLimits

0x3b1f,	// (0x00012397) field_cale_ev2_pane_ParamLimits

0x3b1f,	// (0x00012397) field_cale_ev2_pane

0x3b43,	// (0x000123bb) field_cale_ev2_pane_g1_ParamLimits

0x3b43,	// (0x000123bb) field_cale_ev2_pane_g1

0x3b4f,	// (0x000123c7) field_cale_ev2_pane_g2_ParamLimits

0x3b4f,	// (0x000123c7) field_cale_ev2_pane_g2

0x3b67,	// (0x000123df) field_cale_ev2_pane_g3_ParamLimits

0x3b67,	// (0x000123df) field_cale_ev2_pane_g3

0x0003,

0xf65d,	// (0x0001ded5) field_cale_ev2_pane_g_ParamLimits

0xf65d,	// (0x0001ded5) field_cale_ev2_pane_g

0x3b7f,	// (0x000123f7) field_cale_ev2_pane_t1_ParamLimits

0x3b7f,	// (0x000123f7) field_cale_ev2_pane_t1

0x3b96,	// (0x0001240e) field_cale_ev2_pane_t2_ParamLimits

0x3b96,	// (0x0001240e) field_cale_ev2_pane_t2

0x0001,

0xf666,	// (0x0001dede) field_cale_ev2_pane_t_ParamLimits

0xf666,	// (0x0001dede) field_cale_ev2_pane_t

0x2afb,	// (0x00011373) main_postcard_pane_g5_ParamLimits

0x2afb,	// (0x00011373) main_postcard_pane_g5

0x2b11,	// (0x00011389) main_postcard_pane_g6_ParamLimits

0x2b11,	// (0x00011389) main_postcard_pane_g6

0x958b,	// (0x00017e03) camera2_autofocus_pane_cp_ParamLimits

0x958b,	// (0x00017e03) camera2_autofocus_pane_cp

0x958b,	// (0x00017e03) main_mup3_pane

0x3bf5,	// (0x0001246d) main_mup3_pane_g1_ParamLimits

0x3bf5,	// (0x0001246d) main_mup3_pane_g1

0x3c47,	// (0x000124bf) main_mup3_pane_g2_ParamLimits

0x3c47,	// (0x000124bf) main_mup3_pane_g2

0x3ca7,	// (0x0001251f) main_mup3_pane_g3_ParamLimits

0x3ca7,	// (0x0001251f) main_mup3_pane_g3

0x3d0f,	// (0x00012587) main_mup3_pane_g4_ParamLimits

0x3d0f,	// (0x00012587) main_mup3_pane_g4

0x3d77,	// (0x000125ef) main_mup3_pane_g5_ParamLimits

0x3d77,	// (0x000125ef) main_mup3_pane_g5

0xd1dc,	// (0x0001ba54) main_mup3_pane_g6_ParamLimits

0xd1dc,	// (0x0001ba54) main_mup3_pane_g6

0x9cc5,	// (0x0001853d) main_mup3_pane_g7_ParamLimits

0x9cc5,	// (0x0001853d) main_mup3_pane_g7

0x0007,

0xf676,	// (0x0001deee) main_mup3_pane_g_ParamLimits

0xf676,	// (0x0001deee) main_mup3_pane_g

0x3e50,	// (0x000126c8) main_mup3_pane_t1_ParamLimits

0x3e50,	// (0x000126c8) main_mup3_pane_t1

0x3f36,	// (0x000127ae) main_mup3_pane_t2_ParamLimits

0x3f36,	// (0x000127ae) main_mup3_pane_t2

0x4020,	// (0x00012898) main_mup3_pane_t4_ParamLimits

0x4020,	// (0x00012898) main_mup3_pane_t4

0x4032,	// (0x000128aa) main_mup3_pane_t5_ParamLimits

0x4032,	// (0x000128aa) main_mup3_pane_t5

0x410c,	// (0x00012984) main_mup3_pane_t6_ParamLimits

0x410c,	// (0x00012984) main_mup3_pane_t6

0x0005,

0xf687,	// (0x0001deff) main_mup3_pane_t_ParamLimits

0xf687,	// (0x0001deff) main_mup3_pane_t

0x41b4,	// (0x00012a2c) mup3_progress_pane_ParamLimits

0x41b4,	// (0x00012a2c) mup3_progress_pane

0x421c,	// (0x00012a94) popup_mup3_control_window_ParamLimits

0x421c,	// (0x00012a94) popup_mup3_control_window

0xc372,	// (0x0001abea) popup_mup3_text_window

0x4234,	// (0x00012aac) mup3_progress_pane_t1

0x424b,	// (0x00012ac3) mup3_progress_pane_t2

0xc37a,	// (0x0001abf2) mup3_progress_pane_t3

0x0002,

0xf694,	// (0x0001df0c) mup3_progress_pane_t

0xc391,	// (0x0001ac09) mup_progress_pane_cp03

0xc3a2,	// (0x0001ac1a) bg_tb_trans_pane_cp04

0xc3a2,	// (0x0001ac1a) mup3_volume_pane

0xc3aa,	// (0x0001ac22) popup_mup3_control_window_g1

0xc3aa,	// (0x0001ac22) mup3_volume_pane_g1

0xc3aa,	// (0x0001ac22) mup3_volume_pane_g2

0xc3aa,	// (0x0001ac22) mup3_volume_pane_g3

0x0002,

0xf69b,	// (0x0001df13) mup3_volume_pane_g

0x9516,	// (0x00017d8e) bg_tb_trans_pane_cp03

0xc3b2,	// (0x0001ac2a) popup_mup3_text_window_g1

0xc3ba,	// (0x0001ac32) popup_mup3_text_window_t1

0x9dcf,	// (0x00018647) list_calc_item_pane_g1_ParamLimits

0xbe64,	// (0x0001a6dc) mup_volume_pane_cp_g1

0x3adf,	// (0x00012357) main_touch_calib_pane_t3

0x3af3,	// (0x0001236b) main_touch_calib_pane_t4

0x3b09,	// (0x00012381) main_touch_calib_pane_t5

0x9520,	// (0x00017d98) aid_cell_size_toolbar2

0x9528,	// (0x00017da0) aid_popup3_width_pane

0x9534,	// (0x00017dac) aid_zoom_text_msg_primary

0x0f65,	// (0x0000f7dd) vorec_t7

0x9d93,	// (0x0001860b) bg_calc_paper_pane_g1_ParamLimits

0x9d9f,	// (0x00018617) bg_calc_paper_pane_g2_ParamLimits

0x9dab,	// (0x00018623) bg_calc_paper_pane_g3_ParamLimits

0x9db7,	// (0x0001862f) bg_calc_paper_pane_g4_ParamLimits

0x9dc3,	// (0x0001863b) bg_calc_paper_pane_g5_ParamLimits

0x078c,	// (0x0000f004) bg_calc_paper_pane_g6_ParamLimits

0x079f,	// (0x0000f017) bg_calc_paper_pane_g7_ParamLimits

0x07b2,	// (0x0000f02a) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x0001d923) bg_calc_paper_pane_g_ParamLimits

0x07c5,	// (0x0000f03d) calc_bg_paper_pane_g9_ParamLimits

0x958b,	// (0x00017e03) image_qvga_pane_ParamLimits

0x958b,	// (0x00017e03) image_qvga_pane

0x9c3c,	// (0x000184b4) bg_popup_sub_pane_cp04_ParamLimits

0xab84,	// (0x000193fc) popup_mup_playback_window_g1_ParamLimits

0xab90,	// (0x00019408) popup_mup_playback_window_t1_ParamLimits

0xaba5,	// (0x0001941d) popup_mup_playback_window_t2_ParamLimits

0xf404,	// (0x0001dc7c) popup_mup_playback_window_t_ParamLimits

0x9cc5,	// (0x0001853d) main_mup2_pane_g3_ParamLimits

0x9cc5,	// (0x0001853d) main_mup2_pane_g3

0x1225,	// (0x0000fa9d) popup_toolbar_window_cp04

0xaf29,	// (0x000197a1) popup_call2_audio_second_window_g3_ParamLimits

0xaf29,	// (0x000197a1) popup_call2_audio_second_window_g3

0xb341,	// (0x00019bb9) popup_call2_audio_first_window_g4_ParamLimits

0xb341,	// (0x00019bb9) popup_call2_audio_first_window_g4

0xb968,	// (0x0001a1e0) popup_call2_audio_in_window_g4_ParamLimits

0xb968,	// (0x0001a1e0) popup_call2_audio_in_window_g4

0x2c1d,	// (0x00011495) aid_area_sk_bg_cut_ParamLimits

0x2c1d,	// (0x00011495) aid_area_sk_bg_cut

0xabba,	// (0x00019432) aid_area_sk_bg_cut_2_ParamLimits

0xabba,	// (0x00019432) aid_area_sk_bg_cut_2

0x9516,	// (0x00017d8e) aid_placing_details_win

0x9516,	// (0x00017d8e) aid_placing_details_win_2

0x9cb7,	// (0x0001852f) camera2_autofocus_pane_g1_ParamLimits

0x05a0,	// (0x0000ee18) popup_fixed_preview_cale_window_ParamLimits

0x05a0,	// (0x0000ee18) popup_fixed_preview_cale_window

0xa935,	// (0x000191ad) navi_slider_pane_g3

0xa93e,	// (0x000191b6) navi_slider_pane_g4

0xa947,	// (0x000191bf) navi_slider_pane_g5

0xa935,	// (0x000191ad) navi_slider_pane_g6

0xa950,	// (0x000191c8) navi_slider_pane_g7

0xaa80,	// (0x000192f8) mup_scale_pane_g3

0xaa89,	// (0x00019301) mup_scale_pane_g4

0xaa92,	// (0x0001930a) mup_scale_pane_g5

0x289e,	// (0x00011116) mup_scale_pane_g6

0x28a7,	// (0x0001111f) mup_scale_pane_g7

0x9cfd,	// (0x00018575) cams2_slider_pane_g3

0x9cfd,	// (0x00018575) cams2_slider_pane_g4

0x9cfd,	// (0x00018575) cams2_slider_pane_g5

0x9cfd,	// (0x00018575) cams2_slider_pane_g6

0x9cfd,	// (0x00018575) cams2_slider_pane_g7

0x9cfd,	// (0x00018575) camera2_autofocus_pane_cp_g1

0xbbf8,	// (0x0001a470) bg_popup_preview_window_pane_cp02_ParamLimits

0xbbf8,	// (0x0001a470) bg_popup_preview_window_pane_cp02

0xc3c8,	// (0x0001ac40) list_fp_cale_pane_ParamLimits

0xc3c8,	// (0x0001ac40) list_fp_cale_pane

0xc3d4,	// (0x0001ac4c) popup_fixed_preview_cale_window_t1_ParamLimits

0xc3d4,	// (0x0001ac4c) popup_fixed_preview_cale_window_t1

0x4262,	// (0x00012ada) popup_fixed_preview_cale_window_t2_ParamLimits

0x4262,	// (0x00012ada) popup_fixed_preview_cale_window_t2

0x4277,	// (0x00012aef) popup_fixed_preview_cale_window_t3_ParamLimits

0x4277,	// (0x00012aef) popup_fixed_preview_cale_window_t3

0x0002,

0xf6a2,	// (0x0001df1a) popup_fixed_preview_cale_window_t_ParamLimits

0xf6a2,	// (0x0001df1a) popup_fixed_preview_cale_window_t

0x428e,	// (0x00012b06) list_single_fp_cale_pane_ParamLimits

0x428e,	// (0x00012b06) list_single_fp_cale_pane

0xc3f2,	// (0x0001ac6a) list_single_fp_cale_pane_g1_ParamLimits

0xc3f2,	// (0x0001ac6a) list_single_fp_cale_pane_g1

0xc3fe,	// (0x0001ac76) list_single_fp_cale_pane_g2_ParamLimits

0xc3fe,	// (0x0001ac76) list_single_fp_cale_pane_g2

0x0002,

0xf6a9,	// (0x0001df21) list_single_fp_cale_pane_g_ParamLimits

0xf6a9,	// (0x0001df21) list_single_fp_cale_pane_g

0xc417,	// (0x0001ac8f) list_single_fp_cale_pane_t1_ParamLimits

0xc417,	// (0x0001ac8f) list_single_fp_cale_pane_t1

0xc429,	// (0x0001aca1) list_single_fp_cale_pane_t2_ParamLimits

0xc429,	// (0x0001aca1) list_single_fp_cale_pane_t2

0x0001,

0xf6b0,	// (0x0001df28) list_single_fp_cale_pane_t_ParamLimits

0xf6b0,	// (0x0001df28) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9516,	// (0x00017d8e) main_dialer_pane

0x9516,	// (0x00017d8e) aid_cell_size_keypad

0x9516,	// (0x00017d8e) dialer_ne_pane

0x9516,	// (0x00017d8e) grid_dialer_command_1_pane

0x9516,	// (0x00017d8e) grid_dialer_command_2_pane

0x9516,	// (0x00017d8e) grid_dialer_keypad_pane

0x42a3,	// (0x00012b1b) bg_popup_call_pane_cp06_ParamLimits

0x42a3,	// (0x00012b1b) bg_popup_call_pane_cp06

0x42a3,	// (0x00012b1b) dialer_ne_clear_pane_ParamLimits

0x42a3,	// (0x00012b1b) dialer_ne_clear_pane

0x9cfd,	// (0x00018575) dialer_ne_pane_g1

0x9d1b,	// (0x00018593) dialer_ne_pane_t1_ParamLimits

0x9d1b,	// (0x00018593) dialer_ne_pane_t1

0x42b1,	// (0x00012b29) dialer_ne_pane_t2_ParamLimits

0x42b1,	// (0x00012b29) dialer_ne_pane_t2

0x42d9,	// (0x00012b51) dialer_ne_pane_t3_ParamLimits

0x42d9,	// (0x00012b51) dialer_ne_pane_t3

0x0002,

0xf6b5,	// (0x0001df2d) dialer_ne_pane_t_ParamLimits

0xf6b5,	// (0x0001df2d) dialer_ne_pane_t

0x42d9,	// (0x00012b51) dialer_ne_pane_t3_copy1_ParamLimits

0x42d9,	// (0x00012b51) dialer_ne_pane_t3_copy1

0xc45c,	// (0x0001acd4) cell_dialer_keypad_pane_ParamLimits

0xc45c,	// (0x0001acd4) cell_dialer_keypad_pane

0x958b,	// (0x00017e03) cell_dialer_command_1_pane_ParamLimits

0x958b,	// (0x00017e03) cell_dialer_command_1_pane

0xc473,	// (0x0001aceb) cell_dialer_command_2_pane_ParamLimits

0xc473,	// (0x0001aceb) cell_dialer_command_2_pane

0x958b,	// (0x00017e03) bg_button_pane_cp02_ParamLimits

0x958b,	// (0x00017e03) bg_button_pane_cp02

0x9cb7,	// (0x0001852f) cell_dialer_keypad_pane_g1_ParamLimits

0x9cb7,	// (0x0001852f) cell_dialer_keypad_pane_g1

0x958b,	// (0x00017e03) bg_button_pane_cp03_ParamLimits

0x958b,	// (0x00017e03) bg_button_pane_cp03

0x9cb7,	// (0x0001852f) cell_dialer_command_1_pane_g1_ParamLimits

0x9cb7,	// (0x0001852f) cell_dialer_command_1_pane_g1

0x9516,	// (0x00017d8e) bg_button_pane_cp04

0x9cfd,	// (0x00018575) cell_dialer_command_2_pane_g1

0x9516,	// (0x00017d8e) bg_button_pane_cp06

0x9cfd,	// (0x00018575) dialer_ne_clear_pane_g1

0x25ad,	// (0x00010e25) navi_pane_g2

0x25db,	// (0x00010e53) navi_pane_g3

0x0002,

0xf30c,	// (0x0001db84) navi_pane_g

0x2606,	// (0x00010e7e) navi_pane_mv_g2

0x262d,	// (0x00010ea5) navi_pane_mv_g5

0x2635,	// (0x00010ead) navi_pane_mv_t1

0x9d75,	// (0x000185ed) main_clock2_pane

0x958b,	// (0x00017e03) main_clock2_list_pane_ParamLimits

0x958b,	// (0x00017e03) main_clock2_list_pane

0x436c,	// (0x00012be4) main_clock2_pane_t1_ParamLimits

0x436c,	// (0x00012be4) main_clock2_pane_t1

0x43a7,	// (0x00012c1f) main_clock2_pane_t2_ParamLimits

0x43a7,	// (0x00012c1f) main_clock2_pane_t2

0x0004,

0xf6c1,	// (0x0001df39) main_clock2_pane_t_ParamLimits

0xf6c1,	// (0x0001df39) main_clock2_pane_t

0x443d,	// (0x00012cb5) popup_clock_analogue_window_cp03_ParamLimits

0x443d,	// (0x00012cb5) popup_clock_analogue_window_cp03

0x4462,	// (0x00012cda) popup_clock_digital_window_cp02_ParamLimits

0x4462,	// (0x00012cda) popup_clock_digital_window_cp02

0x44db,	// (0x00012d53) main_clock2_list_single_pane_ParamLimits

0x44db,	// (0x00012d53) main_clock2_list_single_pane

0x9f96,	// (0x0001880e) list_highlight_pane_cp05

0xc4b4,	// (0x0001ad2c) main_clock2_list_single_pane_t1

0x1225,	// (0x0000fa9d) popup_toolbar_window_cp04_ParamLimits

0x9cc5,	// (0x0001853d) camera2_autofocus_pane_g2_ParamLimits

0x9cc5,	// (0x0001853d) camera2_autofocus_pane_g2

0x9cc5,	// (0x0001853d) camera2_autofocus_pane_g3_ParamLimits

0x9cc5,	// (0x0001853d) camera2_autofocus_pane_g3

0x9cc5,	// (0x0001853d) camera2_autofocus_pane_g4_ParamLimits

0x9cc5,	// (0x0001853d) camera2_autofocus_pane_g4

0x9cc5,	// (0x0001853d) camera2_autofocus_pane_g5_ParamLimits

0x9cc5,	// (0x0001853d) camera2_autofocus_pane_g5

0x0004,

0xf605,	// (0x0001de7d) camera2_autofocus_pane_g_ParamLimits

0xf605,	// (0x0001de7d) camera2_autofocus_pane_g

0x3bab,	// (0x00012423) camera2_autofocus_pane_cp_g2

0x3bb3,	// (0x0001242b) camera2_autofocus_pane_cp_g3

0x3bbb,	// (0x00012433) camera2_autofocus_pane_cp_g4

0x3bc3,	// (0x0001243b) camera2_autofocus_pane_cp_g5

0x0004,

0xf66b,	// (0x0001dee3) camera2_autofocus_pane_cp_g

0x9516,	// (0x00017d8e) popup_dialer_spcha_window

0x9516,	// (0x00017d8e) bg_popup_sub_pane_cp07

0x9516,	// (0x00017d8e) list_spcha_pane

0xc4c2,	// (0x0001ad3a) list_single_spcha_pane_ParamLimits

0xc4c2,	// (0x0001ad3a) list_single_spcha_pane

0x9516,	// (0x00017d8e) list_highlight_pane_cp06

0xa4ec,	// (0x00018d64) list_single_spcha_pane_t1

0xb712,	// (0x00019f8a) popup_call2_audio_out_window_g4_ParamLimits

0xb712,	// (0x00019f8a) popup_call2_audio_out_window_g4

0x9516,	// (0x00017d8e) main_imed2_pane

0xbc22,	// (0x0001a49a) popup_imed_adjust2_window

0x345b,	// (0x00011cd3) popup_imed_trans_window_ParamLimits

0x345b,	// (0x00011cd3) popup_imed_trans_window

0xbf39,	// (0x0001a7b1) popup_blid_sat_info2_window_t1

0xbf47,	// (0x0001a7bf) popup_blid_sat_info2_window_t2

0x000a,

0xf59a,	// (0x0001de12) popup_blid_sat_info2_window_t

0x4596,	// (0x00012e0e) aid_size_cell_colour_35

0x45b6,	// (0x00012e2e) aid_size_cell_colour_112

0x45d6,	// (0x00012e4e) aid_size_cell_effect

0xaa0e,	// (0x00019286) bg_tb_trans_pane_cp02

0x45f6,	// (0x00012e6e) heading_imed_pane

0x4602,	// (0x00012e7a) listscroll_imed_pane

0xc4d4,	// (0x0001ad4c) heading_imed_pane_g1

0xc4dc,	// (0x0001ad54) heading_imed_pane_t1

0xc4ea,	// (0x0001ad62) grid_imed_colour_35_pane_ParamLimits

0xc4ea,	// (0x0001ad62) grid_imed_colour_35_pane

0x460e,	// (0x00012e86) grid_imed_effect_pane

0xc506,	// (0x0001ad7e) list_imed_aspect_pane

0x4625,	// (0x00012e9d) scroll_pane_cp027_ParamLimits

0x4625,	// (0x00012e9d) scroll_pane_cp027

0x4636,	// (0x00012eae) cell_imed_effect_pane_ParamLimits

0x4636,	// (0x00012eae) cell_imed_effect_pane

0xc50e,	// (0x0001ad86) cell_imed_colour_pane_ParamLimits

0xc50e,	// (0x0001ad86) cell_imed_colour_pane

0xc558,	// (0x0001add0) cell_imed_colour_pane_g1_ParamLimits

0xc558,	// (0x0001add0) cell_imed_colour_pane_g1

0xc569,	// (0x0001ade1) hgihlgiht_grid_pane_cp016_ParamLimits

0xc569,	// (0x0001ade1) hgihlgiht_grid_pane_cp016

0x4661,	// (0x00012ed9) cell_imed_effect_pane_g1

0x4669,	// (0x00012ee1) grid_highlight_pane_cp017

0xc57a,	// (0x0001adf2) list_imed_single_pane_ParamLimits

0xc57a,	// (0x0001adf2) list_imed_single_pane

0x9516,	// (0x00017d8e) list_highlight_pane_cp07

0xc58e,	// (0x0001ae06) list_imed_aspect_pane_comp1_t1

0xaa0e,	// (0x00019286) bg_tb_trans_pane_cp05

0xc5b0,	// (0x0001ae28) popup_imed_adjust2_window_g1

0xc5d7,	// (0x0001ae4f) popup_imed_adjust2_window_t1

0xc5ef,	// (0x0001ae67) slider_imed_adjust_pane

0xc603,	// (0x0001ae7b) slider_imed_adjust_pane_g1

0xc613,	// (0x0001ae8b) slider_imed_adjust_pane_g2

0xc623,	// (0x0001ae9b) slider_imed_adjust_pane_g3

0xc634,	// (0x0001aeac) slider_imed_adjust_pane_g4

0x0003,

0xf6de,	// (0x0001df56) slider_imed_adjust_pane_g

0x4672,	// (0x00012eea) aid_size_cell_clipart2

0xc645,	// (0x0001aebd) grid_imed_clipart_pane

0xaaa3,	// (0x0001931b) scroll_pane_cp031

0x467e,	// (0x00012ef6) cell_imed_clipart_pane_ParamLimits

0x467e,	// (0x00012ef6) cell_imed_clipart_pane

0x469b,	// (0x00012f13) cell_imed_clipart_pane_g1

0x9516,	// (0x00017d8e) grid_highlight_pane_cp014

0x4348,	// (0x00012bc0) main_clock2_pane_g1_ParamLimits

0x4348,	// (0x00012bc0) main_clock2_pane_g1

0x4482,	// (0x00012cfa) aid_call2_pane_cp10

0x4494,	// (0x00012d0c) aid_call_pane_cp10

0xa858,	// (0x000190d0) popup_clock_analogue_window_cp10_g1

0xa858,	// (0x000190d0) popup_clock_analogue_window_cp10_g2

0x44a6,	// (0x00012d1e) popup_clock_analogue_window_cp10_g3

0x44a6,	// (0x00012d1e) popup_clock_analogue_window_cp10_g4

0xa858,	// (0x000190d0) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6cc,	// (0x0001df44) popup_clock_analogue_window_cp10_g

0x44bc,	// (0x00012d34) popup_clock_analogue_window_cp10_t1

0x44ed,	// (0x00012d65) clock_digital_number_pane_cp10_ParamLimits

0x44ed,	// (0x00012d65) clock_digital_number_pane_cp10

0x4507,	// (0x00012d7f) clock_digital_number_pane_cp11_ParamLimits

0x4507,	// (0x00012d7f) clock_digital_number_pane_cp11

0x4521,	// (0x00012d99) clock_digital_number_pane_cp12_ParamLimits

0x4521,	// (0x00012d99) clock_digital_number_pane_cp12

0x453d,	// (0x00012db5) clock_digital_number_pane_cp13_ParamLimits

0x453d,	// (0x00012db5) clock_digital_number_pane_cp13

0x4559,	// (0x00012dd1) clock_digital_separator_pane_cp10_ParamLimits

0x4559,	// (0x00012dd1) clock_digital_separator_pane_cp10

0x4575,	// (0x00012ded) popup_clock_digital_window_cp02_t1_ParamLimits

0x4575,	// (0x00012ded) popup_clock_digital_window_cp02_t1

0x9c34,	// (0x000184ac) clock_digital_number_pane_cp10_g1

0x9c34,	// (0x000184ac) clock_digital_number_pane_cp10_g2

0x0001,

0xf6e7,	// (0x0001df5f) clock_digital_number_pane_cp10_g

0x9c34,	// (0x000184ac) clock_digital_separator_pane_cp10_g1

0x9c34,	// (0x000184ac) clock_digital_separator_pane_g2_cp10

0xa8f3,	// (0x0001916b) navi_pane_vded_g4

0xa8fc,	// (0x00019174) navi_pane_vded_g5

0xa905,	// (0x0001917d) navi_pane_vded_t1

0x9516,	// (0x00017d8e) main_vded_pane

0x46a4,	// (0x00012f1c) main_vded_pane_g1

0x46b0,	// (0x00012f28) main_vded_pane_g2

0x46bc,	// (0x00012f34) main_vded_pane_g3

0x0002,

0xf6ec,	// (0x0001df64) main_vded_pane_g

0x46c8,	// (0x00012f40) main_vded_pane_t1

0x46d6,	// (0x00012f4e) main_vded_pane_t2

0x0001,

0xf6f3,	// (0x0001df6b) main_vded_pane_t

0x46e4,	// (0x00012f5c) vded_slider_pane

0x46ee,	// (0x00012f66) vded_video_pane

0xc64f,	// (0x0001aec7) vded_video_pane_g1

0x46fa,	// (0x00012f72) vded_video_pane_g2

0x9cfd,	// (0x00018575) vded_video_pane_g3

0x0002,

0xf6f8,	// (0x0001df70) vded_video_pane_g

0xc659,	// (0x0001aed1) vded_slider_pane_g1

0xbe64,	// (0x0001a6dc) vded_slider_pane_g2

0xc662,	// (0x0001aeda) vded_slider_pane_g3

0xc66b,	// (0x0001aee3) vded_slider_pane_g4

0xc674,	// (0x0001aeec) vded_slider_pane_g5

0x0004,

0xf6ff,	// (0x0001df77) vded_slider_pane_g

0xd1e8,	// (0x0001ba60) mup3_rocker_pane_ParamLimits

0xd1e8,	// (0x0001ba60) mup3_rocker_pane

0xc3aa,	// (0x0001ac22) mup3_control_keys_pane_g1

0xc67d,	// (0x0001aef5) mup3_control_keys_pane_g2

0xc3aa,	// (0x0001ac22) mup3_control_keys_pane_g3

0xc685,	// (0x0001aefd) mup3_control_keys_pane_g4

0x0003,

0xf70a,	// (0x0001df82) mup3_control_keys_pane_g

0x05d7,	// (0x0000ee4f) popup_toolbar2_fixed_window_cp01_ParamLimits

0x05d7,	// (0x0000ee4f) popup_toolbar2_fixed_window_cp01

0xd1e8,	// (0x0001ba60) popup_toolbar2_fixed_window_cp02_ParamLimits

0xd1e8,	// (0x0001ba60) popup_toolbar2_fixed_window_cp02

0xb09b,	// (0x00019913) popup_call2_audio_second_window_t4_ParamLimits

0xb09b,	// (0x00019913) popup_call2_audio_second_window_t4

0xb5d7,	// (0x00019e4f) popup_call2_audio_first_window_t6_ParamLimits

0xb5d7,	// (0x00019e4f) popup_call2_audio_first_window_t6

0xb815,	// (0x0001a08d) popup_call2_audio_out_window_t6_ParamLimits

0xb815,	// (0x0001a08d) popup_call2_audio_out_window_t6

0x9516,	// (0x00017d8e) main_vitu_pane

0x958b,	// (0x00017e03) aid_size_cell_itu_ParamLimits

0x958b,	// (0x00017e03) aid_size_cell_itu

0x958b,	// (0x00017e03) bg_popup_window_pane_cp08_ParamLimits

0x958b,	// (0x00017e03) bg_popup_window_pane_cp08

0x958b,	// (0x00017e03) field_vitu_entry_pane_ParamLimits

0x958b,	// (0x00017e03) field_vitu_entry_pane

0x958b,	// (0x00017e03) grid_vitu_function_pane_ParamLimits

0x958b,	// (0x00017e03) grid_vitu_function_pane

0x958b,	// (0x00017e03) grid_vitu_itu_pane_ParamLimits

0x958b,	// (0x00017e03) grid_vitu_itu_pane

0x958b,	// (0x00017e03) cell_vitu_itu_pane_ParamLimits

0x958b,	// (0x00017e03) cell_vitu_itu_pane

0x958b,	// (0x00017e03) cell_vitu_function_pane_ParamLimits

0x958b,	// (0x00017e03) cell_vitu_function_pane

0x958b,	// (0x00017e03) bg_popup_sub_pane_cp08_ParamLimits

0x958b,	// (0x00017e03) bg_popup_sub_pane_cp08

0x9d07,	// (0x0001857f) field_vitu_entry_pane_t1_ParamLimits

0x9d07,	// (0x0001857f) field_vitu_entry_pane_t1

0xc68d,	// (0x0001af05) field_vitu_entry_pane_t2_ParamLimits

0xc68d,	// (0x0001af05) field_vitu_entry_pane_t2

0x0001,

0xf713,	// (0x0001df8b) field_vitu_entry_pane_t_ParamLimits

0xf713,	// (0x0001df8b) field_vitu_entry_pane_t

0xbd8b,	// (0x0001a603) bg_button_pane_cp05_ParamLimits

0xbd8b,	// (0x0001a603) bg_button_pane_cp05

0xc6aa,	// (0x0001af22) cell_vitu_itu_pane_g1

0xa9fa,	// (0x00019272) cell_vitu_itu_pane_t1_ParamLimits

0xa9fa,	// (0x00019272) cell_vitu_itu_pane_t1

0xa9fa,	// (0x00019272) cell_vitu_itu_pane_t2_ParamLimits

0xa9fa,	// (0x00019272) cell_vitu_itu_pane_t2

0x0002,

0xf718,	// (0x0001df90) cell_vitu_itu_pane_t_ParamLimits

0xf718,	// (0x0001df90) cell_vitu_itu_pane_t

0x9516,	// (0x00017d8e) bg_button_pane_cp07

0x9cfd,	// (0x00018575) cell_vitu_function_pane_g1

0x9cf5,	// (0x0001856d) main_calc_pane_g1

0x03ff,	// (0x0000ec77) aid_visual_content_pane

0x9516,	// (0x00017d8e) main_vradio_pane

0x9cb7,	// (0x0001852f) main_vradio_pane_g1_ParamLimits

0x9cb7,	// (0x0001852f) main_vradio_pane_g1

0x9cc5,	// (0x0001853d) main_vradio_pane_g2_ParamLimits

0x9cc5,	// (0x0001853d) main_vradio_pane_g2

0x0001,

0xf71f,	// (0x0001df97) main_vradio_pane_g_ParamLimits

0xf71f,	// (0x0001df97) main_vradio_pane_g

0x9d07,	// (0x0001857f) main_vradio_pane_t1_ParamLimits

0x9d07,	// (0x0001857f) main_vradio_pane_t1

0x9d07,	// (0x0001857f) main_vradio_pane_t2_ParamLimits

0x9d07,	// (0x0001857f) main_vradio_pane_t2

0x9d1b,	// (0x00018593) main_vradio_pane_t3_ParamLimits

0x9d1b,	// (0x00018593) main_vradio_pane_t3

0x0002,

0xf724,	// (0x0001df9c) main_vradio_pane_t_ParamLimits

0xf724,	// (0x0001df9c) main_vradio_pane_t

0x958b,	// (0x00017e03) vradio_rocker_control_pane_ParamLimits

0x958b,	// (0x00017e03) vradio_rocker_control_pane

0x958b,	// (0x00017e03) vradio_station_info_pane_ParamLimits

0x958b,	// (0x00017e03) vradio_station_info_pane

0x958b,	// (0x00017e03) vradio_frequency_info_pane_ParamLimits

0x958b,	// (0x00017e03) vradio_frequency_info_pane

0x9cfd,	// (0x00018575) vradio_station_info_pane_g1

0xa9fa,	// (0x00019272) vradio_station_info_pane_t1_ParamLimits

0xa9fa,	// (0x00019272) vradio_station_info_pane_t1

0x9d1b,	// (0x00018593) vradio_station_info_pane_t2_ParamLimits

0x9d1b,	// (0x00018593) vradio_station_info_pane_t2

0x0001,

0xf72b,	// (0x0001dfa3) vradio_station_info_pane_t_ParamLimits

0xf72b,	// (0x0001dfa3) vradio_station_info_pane_t

0x9516,	// (0x00017d8e) vradio_tuning_pane

0x4703,	// (0x00012f7b) vradio_rocker_control_pane_g1

0xc6c6,	// (0x0001af3e) vradio_rocker_control_pane_g2

0x470d,	// (0x00012f85) vradio_rocker_control_pane_g3

0x4717,	// (0x00012f8f) vradio_rocker_control_pane_g4

0x4721,	// (0x00012f99) vradio_rocker_control_pane_g5

0x0004,

0xf730,	// (0x0001dfa8) vradio_rocker_control_pane_g

0x9cfd,	// (0x00018575) vradio_frequency_info_pane_g1

0x9d07,	// (0x0001857f) vradio_frequency_info_pane_t1_ParamLimits

0x9d07,	// (0x0001857f) vradio_frequency_info_pane_t1

0x472b,	// (0x00012fa3) vradio_tuning_pane_g1

0x4736,	// (0x00012fae) vradio_tuning_pane_t1

0x9544,	// (0x00017dbc) area_side_right_pane_ParamLimits

0x9544,	// (0x00017dbc) area_side_right_pane

0xbbbf,	// (0x0001a437) status_small_pane_g1

0xbbc7,	// (0x0001a43f) status_small_pane_g2

0xbbd0,	// (0x0001a448) status_small_pane_g3

0xbbd9,	// (0x0001a451) status_small_pane_g4

0x0003,

0xf4fc,	// (0x0001dd74) status_small_pane_g

0xbbe2,	// (0x0001a45a) status_small_pane_t1

0x9516,	// (0x00017d8e) main_video3_pane

0x9516,	// (0x00017d8e) cams_zoom_vslider_pane

0xc6ce,	// (0x0001af46) image3_wide_pane_ParamLimits

0xc6ce,	// (0x0001af46) image3_wide_pane

0x9516,	// (0x00017d8e) image3_wide_small_pane

0xc6e8,	// (0x0001af60) main_video3_pane_g1_ParamLimits

0xc6e8,	// (0x0001af60) main_video3_pane_g1

0xc6e8,	// (0x0001af60) main_video3_pane_g2_ParamLimits

0xc6e8,	// (0x0001af60) main_video3_pane_g2

0x0001,

0xf73b,	// (0x0001dfb3) main_video3_pane_g_ParamLimits

0xf73b,	// (0x0001dfb3) main_video3_pane_g

0xc706,	// (0x0001af7e) main_video3_pane_t1_ParamLimits

0xc706,	// (0x0001af7e) main_video3_pane_t1

0xc706,	// (0x0001af7e) main_video3_pane_t2_ParamLimits

0xc706,	// (0x0001af7e) main_video3_pane_t2

0xc706,	// (0x0001af7e) main_video3_pane_t3_ParamLimits

0xc706,	// (0x0001af7e) main_video3_pane_t3

0x0002,

0xf740,	// (0x0001dfb8) main_video3_pane_t_ParamLimits

0xf740,	// (0x0001dfb8) main_video3_pane_t

0x9cfd,	// (0x00018575) cams_zoom_vslider_pane_g1

0x9cfd,	// (0x00018575) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x0001d904) cams_zoom_vslider_pane_g

0x9516,	// (0x00017d8e) small_slider_vertical_pane

0x9cfd,	// (0x00018575) small_slider_vertical_pane_g1

0x9cfd,	// (0x00018575) small_slider_vertical_pane_g2

0xc72d,	// (0x0001afa5) small_slider_vertical_pane_g3

0x0002,

0xf747,	// (0x0001dfbf) small_slider_vertical_pane_g

0x9516,	// (0x00017d8e) main_hwr_training_pane

0xc736,	// (0x0001afae) hwr_training_instruct_pane_ParamLimits

0xc736,	// (0x0001afae) hwr_training_instruct_pane

0x4745,	// (0x00012fbd) hwr_training_navi_pane_ParamLimits

0x4745,	// (0x00012fbd) hwr_training_navi_pane

0x4764,	// (0x00012fdc) hwr_training_write_pane_ParamLimits

0x4764,	// (0x00012fdc) hwr_training_write_pane

0x9516,	// (0x00017d8e) bg_frame_shadow_pane

0xc76d,	// (0x0001afe5) hwr_training_write_pane_g1

0xc775,	// (0x0001afed) hwr_training_write_pane_g2

0xc77d,	// (0x0001aff5) hwr_training_write_pane_g3

0xc785,	// (0x0001affd) hwr_training_write_pane_g4

0xc78d,	// (0x0001b005) hwr_training_write_pane_g5

0xc795,	// (0x0001b00d) hwr_training_write_pane_g6

0xc79d,	// (0x0001b015) hwr_training_write_pane_g7

0x0006,

0xf74e,	// (0x0001dfc6) hwr_training_write_pane_g

0xc7a5,	// (0x0001b01d) hwr_training_navi_pane_g1_ParamLimits

0xc7a5,	// (0x0001b01d) hwr_training_navi_pane_g1

0xc7b7,	// (0x0001b02f) hwr_training_navi_pane_g2_ParamLimits

0xc7b7,	// (0x0001b02f) hwr_training_navi_pane_g2

0xc7c9,	// (0x0001b041) hwr_training_navi_pane_g3_ParamLimits

0xc7c9,	// (0x0001b041) hwr_training_navi_pane_g3

0xc7d9,	// (0x0001b051) hwr_training_navi_pane_g4_ParamLimits

0xc7d9,	// (0x0001b051) hwr_training_navi_pane_g4

0x0004,

0xf75d,	// (0x0001dfd5) hwr_training_navi_pane_g_ParamLimits

0xf75d,	// (0x0001dfd5) hwr_training_navi_pane_g

0xc7e6,	// (0x0001b05e) hwr_training_navi_pane_t1

0x47ac,	// (0x00013024) list_single_hwr_training_instruct_pane_ParamLimits

0x47ac,	// (0x00013024) list_single_hwr_training_instruct_pane

0xc7f4,	// (0x0001b06c) list_single_hwr_training_instruct_pane_t1

0xc040,	// (0x0001a8b8) bg_frame_shadow_pane_g1

0xc803,	// (0x0001b07b) bg_frame_shadow_pane_g2

0xc80b,	// (0x0001b083) bg_frame_shadow_pane_g3

0xc813,	// (0x0001b08b) bg_frame_shadow_pane_g4

0xc81b,	// (0x0001b093) bg_frame_shadow_pane_g5

0xc823,	// (0x0001b09b) bg_frame_shadow_pane_g6

0xc82b,	// (0x0001b0a3) bg_frame_shadow_pane_g7

0x9e51,	// (0x000186c9) bg_frame_shadow_pane_g8

0x0007,

0xf768,	// (0x0001dfe0) bg_frame_shadow_pane_g

0x9516,	// (0x00017d8e) main_video_tele_dialer_pane

0x47c8,	// (0x00013040) aid_size_cell_video_keypad_ParamLimits

0x47c8,	// (0x00013040) aid_size_cell_video_keypad

0x47e2,	// (0x0001305a) grid_video_dialer_keypad_pane_ParamLimits

0x47e2,	// (0x0001305a) grid_video_dialer_keypad_pane

0x482e,	// (0x000130a6) video_down_pane_cp_ParamLimits

0x482e,	// (0x000130a6) video_down_pane_cp

0x4860,	// (0x000130d8) cell_video_dialer_keypad_pane_ParamLimits

0x4860,	// (0x000130d8) cell_video_dialer_keypad_pane

0xc833,	// (0x0001b0ab) bg_button_pane_cp08_ParamLimits

0xc833,	// (0x0001b0ab) bg_button_pane_cp08

0x4886,	// (0x000130fe) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4886,	// (0x000130fe) cell_video_dialer_keypad_pane_g1

0xd1e8,	// (0x0001ba60) mup3_rocker2_pane_ParamLimits

0xd1e8,	// (0x0001ba60) mup3_rocker2_pane

0x9cfd,	// (0x00018575) mup3_rocker2_pane_g1

0x3328,	// (0x00011ba0) main_dialer2_pane

0x9516,	// (0x00017d8e) main_mp4_pane

0xc85d,	// (0x0001b0d5) main_mp4_pane_g1_ParamLimits

0xc85d,	// (0x0001b0d5) main_mp4_pane_g1

0xc85d,	// (0x0001b0d5) main_mp4_pane_g2_ParamLimits

0xc85d,	// (0x0001b0d5) main_mp4_pane_g2

0x48c1,	// (0x00013139) main_mp4_pane_g3_ParamLimits

0x48c1,	// (0x00013139) main_mp4_pane_g3

0xc87b,	// (0x0001b0f3) main_mp4_pane_g4_ParamLimits

0xc87b,	// (0x0001b0f3) main_mp4_pane_g4

0xc8a3,	// (0x0001b11b) main_mp4_pane_g5_ParamLimits

0xc8a3,	// (0x0001b11b) main_mp4_pane_g5

0x0007,

0xf788,	// (0x0001e000) main_mp4_pane_g_ParamLimits

0xf788,	// (0x0001e000) main_mp4_pane_g

0xc90b,	// (0x0001b183) main_mp4_pane_t1_ParamLimits

0xc90b,	// (0x0001b183) main_mp4_pane_t1

0xc96d,	// (0x0001b1e5) main_mp4_pane_t2_ParamLimits

0xc96d,	// (0x0001b1e5) main_mp4_pane_t2

0xc9d1,	// (0x0001b249) main_mp4_pane_t3_ParamLimits

0xc9d1,	// (0x0001b249) main_mp4_pane_t3

0xca2f,	// (0x0001b2a7) main_mp4_pane_t4_ParamLimits

0xca2f,	// (0x0001b2a7) main_mp4_pane_t4

0x0003,

0xf799,	// (0x0001e011) main_mp4_pane_t_ParamLimits

0xf799,	// (0x0001e011) main_mp4_pane_t

0xca8d,	// (0x0001b305) mp4_progress_pane_ParamLimits

0xca8d,	// (0x0001b305) mp4_progress_pane

0xcac1,	// (0x0001b339) mp4_rocker_pane_ParamLimits

0xcac1,	// (0x0001b339) mp4_rocker_pane

0xcadf,	// (0x0001b357) mp4_progress_pane_t1

0xcafd,	// (0x0001b375) mp4_progress_pane_t2

0x0001,

0xf7a2,	// (0x0001e01a) mp4_progress_pane_t

0xcb1c,	// (0x0001b394) mup_progress_pane_cp04

0x9cfd,	// (0x00018575) mp4_rocker_pane_g1

0x958b,	// (0x00017e03) aid_cell_size_keypad2_ParamLimits

0x958b,	// (0x00017e03) aid_cell_size_keypad2

0x958b,	// (0x00017e03) dialer2_ne_pane_ParamLimits

0x958b,	// (0x00017e03) dialer2_ne_pane

0x958b,	// (0x00017e03) grid_dialer2_keypad_pane_ParamLimits

0x958b,	// (0x00017e03) grid_dialer2_keypad_pane

0xbd8b,	// (0x0001a603) bg_popup_call_pane_cp07_ParamLimits

0xbd8b,	// (0x0001a603) bg_popup_call_pane_cp07

0x48f3,	// (0x0001316b) dialer2_ne_pane_t1_ParamLimits

0x48f3,	// (0x0001316b) dialer2_ne_pane_t1

0x4933,	// (0x000131ab) cell_dialer2_keypad_pane_ParamLimits

0x4933,	// (0x000131ab) cell_dialer2_keypad_pane

0xbd8b,	// (0x0001a603) bg_button_pane_pane_cp04_ParamLimits

0xbd8b,	// (0x0001a603) bg_button_pane_pane_cp04

0x9cb7,	// (0x0001852f) cell_dialer2_keypad_pane_g1_ParamLimits

0x9cb7,	// (0x0001852f) cell_dialer2_keypad_pane_g1

0x111b,	// (0x0000f993) aid_placing_vt_set_content_ParamLimits

0x111b,	// (0x0000f993) aid_placing_vt_set_content

0x113f,	// (0x0000f9b7) aid_placing_vt_set_title_ParamLimits

0x113f,	// (0x0000f9b7) aid_placing_vt_set_title

0x9516,	// (0x00017d8e) main_image3_pane

0x49a8,	// (0x00013220) area_side_right_pane_cp01_ParamLimits

0x49a8,	// (0x00013220) area_side_right_pane_cp01

0x49c1,	// (0x00013239) main_image3_pane_g1_ParamLimits

0x49c1,	// (0x00013239) main_image3_pane_g1

0x49cf,	// (0x00013247) main_image3_pane_g2_ParamLimits

0x49cf,	// (0x00013247) main_image3_pane_g2

0x49f7,	// (0x0001326f) main_image3_pane_g3_ParamLimits

0x49f7,	// (0x0001326f) main_image3_pane_g3

0x4a21,	// (0x00013299) main_image3_pane_g4_ParamLimits

0x4a21,	// (0x00013299) main_image3_pane_g4

0x0003,

0xf7b1,	// (0x0001e029) main_image3_pane_g_ParamLimits

0xf7b1,	// (0x0001e029) main_image3_pane_g

0x4a4b,	// (0x000132c3) main_image3_pane_t1_ParamLimits

0x4a4b,	// (0x000132c3) main_image3_pane_t1

0x4aa3,	// (0x0001331b) main_image3_pane_t2_ParamLimits

0x4aa3,	// (0x0001331b) main_image3_pane_t2

0x4af5,	// (0x0001336d) main_image3_pane_t3_ParamLimits

0x4af5,	// (0x0001336d) main_image3_pane_t3

0x0003,

0xf7ba,	// (0x0001e032) main_image3_pane_t_ParamLimits

0xf7ba,	// (0x0001e032) main_image3_pane_t

0x958b,	// (0x00017e03) grid_sctrl_middle_pane_cp01_ParamLimits

0x958b,	// (0x00017e03) grid_sctrl_middle_pane_cp01

0x4b7d,	// (0x000133f5) cell_sctrl_middle_pane_cp01_ParamLimits

0x4b7d,	// (0x000133f5) cell_sctrl_middle_pane_cp01

0x4b9a,	// (0x00013412) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x4b9a,	// (0x00013412) cell_sctrl_middle_pane_cp01_g1

0x9516,	// (0x00017d8e) main_call4_pane

0x4baf,	// (0x00013427) aid_size_button_call4_ParamLimits

0x4baf,	// (0x00013427) aid_size_button_call4

0x4be2,	// (0x0001345a) call4_windows_pane_ParamLimits

0x4be2,	// (0x0001345a) call4_windows_pane

0x4c01,	// (0x00013479) grid_call4_button_pane_ParamLimits

0x4c01,	// (0x00013479) grid_call4_button_pane

0x4c38,	// (0x000134b0) call4_windows_conf_pane

0x4c51,	// (0x000134c9) popup_call4_audio_first_window_ParamLimits

0x4c51,	// (0x000134c9) popup_call4_audio_first_window

0x4ca1,	// (0x00013519) popup_call4_audio_second_window_ParamLimits

0x4ca1,	// (0x00013519) popup_call4_audio_second_window

0x4cba,	// (0x00013532) popup_call4_audio_wait_window_ParamLimits

0x4cba,	// (0x00013532) popup_call4_audio_wait_window

0x4cc8,	// (0x00013540) cell_call4_button_pane_ParamLimits

0x4cc8,	// (0x00013540) cell_call4_button_pane

0x4cef,	// (0x00013567) bg_button_pane_cp09_ParamLimits

0x4cef,	// (0x00013567) bg_button_pane_cp09

0x4cfb,	// (0x00013573) cell_call4_button_pane_g1_ParamLimits

0x4cfb,	// (0x00013573) cell_call4_button_pane_g1

0x4d21,	// (0x00013599) cell_call4_button_pane_t1_ParamLimits

0x4d21,	// (0x00013599) cell_call4_button_pane_t1

0xcbcb,	// (0x0001b443) popup_call4_audio_conf_window_ParamLimits

0xcbcb,	// (0x0001b443) popup_call4_audio_conf_window

0x4234,	// (0x00012aac) mup3_progress_pane_t1_ParamLimits

0x424b,	// (0x00012ac3) mup3_progress_pane_t2_ParamLimits

0xc37a,	// (0x0001abf2) mup3_progress_pane_t3_ParamLimits

0xf694,	// (0x0001df0c) mup3_progress_pane_t_ParamLimits

0xc391,	// (0x0001ac09) mup_progress_pane_cp03_ParamLimits

0xc3aa,	// (0x0001ac22) mup3_control_keys_pane_g4_copy1

0xcac1,	// (0x0001b339) mp4_rocker2_pane_ParamLimits

0xcac1,	// (0x0001b339) mp4_rocker2_pane

0xc3aa,	// (0x0001ac22) mp4_rocker2_pane_g1

0xc3aa,	// (0x0001ac22) mp4_rocker2_pane_g2

0xc3aa,	// (0x0001ac22) mp4_rocker2_pane_g3

0xc3aa,	// (0x0001ac22) mp4_rocker2_pane_g4

0xc3aa,	// (0x0001ac22) mp4_rocker2_pane_g5

0x0004,

0xf7c3,	// (0x0001e03b) mp4_rocker2_pane_g

0x9516,	// (0x00017d8e) main_camera4_pane

0x9516,	// (0x00017d8e) main_video4_pane

0x47fc,	// (0x00013074) main_video_tele_dialer_pane_t1_ParamLimits

0x47fc,	// (0x00013074) main_video_tele_dialer_pane_t1

0x4815,	// (0x0001308d) main_video_tele_dialer_pane_t2_ParamLimits

0x4815,	// (0x0001308d) main_video_tele_dialer_pane_t2

0x0001,

0xf779,	// (0x0001dff1) main_video_tele_dialer_pane_t_ParamLimits

0xf779,	// (0x0001dff1) main_video_tele_dialer_pane_t

0x4d5f,	// (0x000135d7) cam4_autofocus_pane_ParamLimits

0x4d5f,	// (0x000135d7) cam4_autofocus_pane

0x4d75,	// (0x000135ed) cam4_image_uncrop_pane_ParamLimits

0x4d75,	// (0x000135ed) cam4_image_uncrop_pane

0x4d8e,	// (0x00013606) cam4_indicators_pane_ParamLimits

0x4d8e,	// (0x00013606) cam4_indicators_pane

0x4dbe,	// (0x00013636) main_camera4_pane_g1_ParamLimits

0x4dbe,	// (0x00013636) main_camera4_pane_g1

0x4dd0,	// (0x00013648) main_camera4_pane_g2_ParamLimits

0x4dd0,	// (0x00013648) main_camera4_pane_g2

0x4de3,	// (0x0001365b) main_camera4_pane_g3_ParamLimits

0x4de3,	// (0x0001365b) main_camera4_pane_g3

0x4df6,	// (0x0001366e) main_camera4_pane_g4_ParamLimits

0x4df6,	// (0x0001366e) main_camera4_pane_g4

0x4e09,	// (0x00013681) main_camera4_pane_g5_ParamLimits

0x4e09,	// (0x00013681) main_camera4_pane_g5

0x0005,

0xf7ce,	// (0x0001e046) main_camera4_pane_g_ParamLimits

0xf7ce,	// (0x0001e046) main_camera4_pane_g

0x4e2d,	// (0x000136a5) main_camera4_pane_t1_ParamLimits

0x4e2d,	// (0x000136a5) main_camera4_pane_t1

0x9cb7,	// (0x0001852f) bg_tb_trans_pane_cp06

0xcc0b,	// (0x0001b483) cam4_indicators_pane_g1

0xcc1c,	// (0x0001b494) cam4_indicators_pane_g2

0x0002,

0xf7e9,	// (0x0001e061) cam4_indicators_pane_g

0xcc34,	// (0x0001b4ac) cam4_indicators_pane_t1

0x4e91,	// (0x00013709) main_video4_pane_g1_ParamLimits

0x4e91,	// (0x00013709) main_video4_pane_g1

0x4ea0,	// (0x00013718) main_video4_pane_g2_ParamLimits

0x4ea0,	// (0x00013718) main_video4_pane_g2

0x4eb0,	// (0x00013728) main_video4_pane_g3_ParamLimits

0x4eb0,	// (0x00013728) main_video4_pane_g3

0x4ec0,	// (0x00013738) main_video4_pane_g4_ParamLimits

0x4ec0,	// (0x00013738) main_video4_pane_g4

0x0004,

0xf7f0,	// (0x0001e068) main_video4_pane_g_ParamLimits

0xf7f0,	// (0x0001e068) main_video4_pane_g

0x4ee0,	// (0x00013758) vid4_indicators_pane_ParamLimits

0x4ee0,	// (0x00013758) vid4_indicators_pane

0x4f0a,	// (0x00013782) video4_image_uncrop_cif_pane_ParamLimits

0x4f0a,	// (0x00013782) video4_image_uncrop_cif_pane

0x4f24,	// (0x0001379c) video4_image_uncrop_nhd_pane_ParamLimits

0x4f24,	// (0x0001379c) video4_image_uncrop_nhd_pane

0x4d75,	// (0x000135ed) video4_image_uncrop_vga_pane_ParamLimits

0x4d75,	// (0x000135ed) video4_image_uncrop_vga_pane

0x958b,	// (0x00017e03) bg_tb_trans_pane_cp07

0xcc62,	// (0x0001b4da) vid4_indicators_pane_g1

0xcc78,	// (0x0001b4f0) vid4_indicators_pane_g2

0xcc8c,	// (0x0001b504) vid4_indicators_pane_g3

0x0004,

0xf7fb,	// (0x0001e073) vid4_indicators_pane_g

0xccbd,	// (0x0001b535) vid4_indicators_pane_t1

0x4f3b,	// (0x000137b3) cam4_autofocus_pane_g1

0x4f43,	// (0x000137bb) cam4_autofocus_pane_g2

0x4f4b,	// (0x000137c3) cam4_autofocus_pane_g3

0x0002,

0xf806,	// (0x0001e07e) cam4_autofocus_pane_g

0x4f53,	// (0x000137cb) cam4_autofocus_pane_g3_copy1

0x4844,	// (0x000130bc) video_down_pane_cp_t1

0x4852,	// (0x000130ca) video_down_pane_cp_t2

0x0001,

0xf77e,	// (0x0001dff6) video_down_pane_cp_t

0x958b,	// (0x00017e03) popup_vitu2_window_ParamLimits

0x958b,	// (0x00017e03) popup_vitu2_window

0x4f5b,	// (0x000137d3) aid_size_cell2_itu2_ParamLimits

0x4f5b,	// (0x000137d3) aid_size_cell2_itu2

0x4f81,	// (0x000137f9) aid_size_cell_itu2_ParamLimits

0x4f81,	// (0x000137f9) aid_size_cell_itu2

0x42a3,	// (0x00012b1b) bg_popup_window_pane_cp09_ParamLimits

0x42a3,	// (0x00012b1b) bg_popup_window_pane_cp09

0x4fdf,	// (0x00013857) field_vitu2_entry_pane_ParamLimits

0x4fdf,	// (0x00013857) field_vitu2_entry_pane

0x5007,	// (0x0001387f) grid_vitu2_function_pane_ParamLimits

0x5007,	// (0x0001387f) grid_vitu2_function_pane

0x5058,	// (0x000138d0) grid_vitu2_itu_pane_ParamLimits

0x5058,	// (0x000138d0) grid_vitu2_itu_pane

0x50e8,	// (0x00013960) cell_vitu2_itu_pane_ParamLimits

0x50e8,	// (0x00013960) cell_vitu2_itu_pane

0x5116,	// (0x0001398e) cell_vitu2_function_pane_ParamLimits

0x5116,	// (0x0001398e) cell_vitu2_function_pane

0xccd4,	// (0x0001b54c) bg_popup_call_pane_cp08_ParamLimits

0xccd4,	// (0x0001b54c) bg_popup_call_pane_cp08

0xcceb,	// (0x0001b563) field_vitu2_entry_pane_g1

0xccf7,	// (0x0001b56f) field_vitu2_entry_pane_g2

0x0002,

0xf80d,	// (0x0001e085) field_vitu2_entry_pane_g

0xcd03,	// (0x0001b57b) field_vitu2_entry_pane_t1_ParamLimits

0xcd03,	// (0x0001b57b) field_vitu2_entry_pane_t1

0xcd32,	// (0x0001b5aa) field_vitu2_entry_pane_t2_ParamLimits

0xcd32,	// (0x0001b5aa) field_vitu2_entry_pane_t2

0x0001,

0xf814,	// (0x0001e08c) field_vitu2_entry_pane_t_ParamLimits

0xf814,	// (0x0001e08c) field_vitu2_entry_pane_t

0x515a,	// (0x000139d2) bg_button_pane_cp010_ParamLimits

0x515a,	// (0x000139d2) bg_button_pane_cp010

0x5168,	// (0x000139e0) cell_vitu2_itu_pane_g1

0x518e,	// (0x00013a06) cell_vitu2_itu_pane_t1_ParamLimits

0x518e,	// (0x00013a06) cell_vitu2_itu_pane_t1

0x51ec,	// (0x00013a64) cell_vitu2_itu_pane_t2_ParamLimits

0x51ec,	// (0x00013a64) cell_vitu2_itu_pane_t2

0x0002,

0xf81e,	// (0x0001e096) cell_vitu2_itu_pane_t_ParamLimits

0xf81e,	// (0x0001e096) cell_vitu2_itu_pane_t

0x958b,	// (0x00017e03) bg_button_pane_cp011

0x52d8,	// (0x00013b50) cell_vitu2_function_pane_g1

0x9516,	// (0x00017d8e) main_myfav_hc_pane

0x4b45,	// (0x000133bd) popup_image3_note_pane_ParamLimits

0x4b45,	// (0x000133bd) popup_image3_note_pane

0x4b61,	// (0x000133d9) popup_image3_tool_bar_pane_ParamLimits

0x4b61,	// (0x000133d9) popup_image3_tool_bar_pane

0x527a,	// (0x00013af2) cell_vitu2_itu_pane_t3_ParamLimits

0x527a,	// (0x00013af2) cell_vitu2_itu_pane_t3

0x9516,	// (0x00017d8e) bg_popup_trans_pane

0xcd57,	// (0x0001b5cf) grid_image3_tool_bar_pane

0xcd61,	// (0x0001b5d9) bg_popup_trans_pane_g1

0xa1ca,	// (0x00018a42) bg_popup_trans_pane_g2

0xcd69,	// (0x0001b5e1) bg_popup_trans_pane_g3

0xcd71,	// (0x0001b5e9) bg_popup_trans_pane_g4

0xcd79,	// (0x0001b5f1) bg_popup_trans_pane_g5

0xcd81,	// (0x0001b5f9) bg_popup_trans_pane_g6

0xcd89,	// (0x0001b601) bg_popup_trans_pane_g7

0xcd91,	// (0x0001b609) bg_popup_trans_pane_g8

0xa1aa,	// (0x00018a22) bg_popup_trans_pane_g9

0x0008,

0xf825,	// (0x0001e09d) bg_popup_trans_pane_g

0xcd99,	// (0x0001b611) cell_image3_tool_bar_pane_ParamLimits

0xcd99,	// (0x0001b611) cell_image3_tool_bar_pane

0x9cfd,	// (0x00018575) cell_image3_tool_bar_pane_g1

0x9516,	// (0x00017d8e) bg_popup_trans_pane_cp1

0xcdaf,	// (0x0001b627) popup_image3_note_pane_t1

0xcdbd,	// (0x0001b635) popup_image3_note_pane_t2

0xcdcb,	// (0x0001b643) popup_image3_note_pane_t3

0x0002,

0xf838,	// (0x0001e0b0) popup_image3_note_pane_t

0xcddb,	// (0x0001b653) popup_image3_note_pane_t3_copy1

0x52ec,	// (0x00013b64) bg_myfav_hc_instruction_pane_ParamLimits

0x52ec,	// (0x00013b64) bg_myfav_hc_instruction_pane

0x5304,	// (0x00013b7c) cell_myfav_contact_pane_ParamLimits

0x5304,	// (0x00013b7c) cell_myfav_contact_pane

0x5320,	// (0x00013b98) cell_myfav_contact_pane_cp1_ParamLimits

0x5320,	// (0x00013b98) cell_myfav_contact_pane_cp1

0x5338,	// (0x00013bb0) cell_myfav_contact_pane_cp2_ParamLimits

0x5338,	// (0x00013bb0) cell_myfav_contact_pane_cp2

0x5350,	// (0x00013bc8) cell_myfav_contact_pane_cp3_ParamLimits

0x5350,	// (0x00013bc8) cell_myfav_contact_pane_cp3

0x5367,	// (0x00013bdf) cell_myfav_contact_pane_cp4_ParamLimits

0x5367,	// (0x00013bdf) cell_myfav_contact_pane_cp4

0x537f,	// (0x00013bf7) cell_myfav_contact_pane_cp5_ParamLimits

0x537f,	// (0x00013bf7) cell_myfav_contact_pane_cp5

0x5393,	// (0x00013c0b) cell_myfav_contact_pane_cp6_ParamLimits

0x5393,	// (0x00013c0b) cell_myfav_contact_pane_cp6

0x53a9,	// (0x00013c21) cell_myfav_contact_pane_cp7_ParamLimits

0x53a9,	// (0x00013c21) cell_myfav_contact_pane_cp7

0xcde9,	// (0x0001b661) listscroll_gen_pane_cp05

0x53c1,	// (0x00013c39) main_myfav_hc_pane_g1_ParamLimits

0x53c1,	// (0x00013c39) main_myfav_hc_pane_g1

0x53db,	// (0x00013c53) main_myfav_hc_pane_g2_ParamLimits

0x53db,	// (0x00013c53) main_myfav_hc_pane_g2

0x0002,

0xf83f,	// (0x0001e0b7) main_myfav_hc_pane_g_ParamLimits

0xf83f,	// (0x0001e0b7) main_myfav_hc_pane_g

0x540f,	// (0x00013c87) main_myfav_hc_pane_t1_ParamLimits

0x540f,	// (0x00013c87) main_myfav_hc_pane_t1

0xcdf2,	// (0x0001b66a) main_myfav_hc_pane_t2_ParamLimits

0xcdf2,	// (0x0001b66a) main_myfav_hc_pane_t2

0xce04,	// (0x0001b67c) main_myfav_hc_pane_t3_ParamLimits

0xce04,	// (0x0001b67c) main_myfav_hc_pane_t3

0x5426,	// (0x00013c9e) main_myfav_hc_pane_t4_ParamLimits

0x5426,	// (0x00013c9e) main_myfav_hc_pane_t4

0x0004,

0xf846,	// (0x0001e0be) main_myfav_hc_pane_t_ParamLimits

0xf846,	// (0x0001e0be) main_myfav_hc_pane_t

0x9cfd,	// (0x00018575) bg_myfav_hc_instruction_pane_g1

0xce16,	// (0x0001b68e) cell_myfav_contact_pane_g1_ParamLimits

0xce16,	// (0x0001b68e) cell_myfav_contact_pane_g1

0xce16,	// (0x0001b68e) cell_myfav_contact_pane_g2_ParamLimits

0xce16,	// (0x0001b68e) cell_myfav_contact_pane_g2

0xce22,	// (0x0001b69a) cell_myfav_contact_pane_g3_ParamLimits

0xce22,	// (0x0001b69a) cell_myfav_contact_pane_g3

0x9cc5,	// (0x0001853d) cell_myfav_contact_pane_g4_ParamLimits

0x9cc5,	// (0x0001853d) cell_myfav_contact_pane_g4

0xce2f,	// (0x0001b6a7) cell_myfav_contact_pane_g5_ParamLimits

0xce2f,	// (0x0001b6a7) cell_myfav_contact_pane_g5

0x0004,

0xf851,	// (0x0001e0c9) cell_myfav_contact_pane_g_ParamLimits

0xf851,	// (0x0001e0c9) cell_myfav_contact_pane_g

0x53f5,	// (0x00013c6d) main_myfav_hc_pane_g3_ParamLimits

0x53f5,	// (0x00013c6d) main_myfav_hc_pane_g3

0x053a,	// (0x0000edb2) popup_adpt_find_window

0x5450,	// (0x00013cc8) afind_page_pane_ParamLimits

0x5450,	// (0x00013cc8) afind_page_pane

0x5466,	// (0x00013cde) aid_size_cell_afind_ParamLimits

0x5466,	// (0x00013cde) aid_size_cell_afind

0x5484,	// (0x00013cfc) bg_popup_sub_pane_cp09_ParamLimits

0x5484,	// (0x00013cfc) bg_popup_sub_pane_cp09

0x5496,	// (0x00013d0e) find_pane_cp01_ParamLimits

0x5496,	// (0x00013d0e) find_pane_cp01

0xce3b,	// (0x0001b6b3) grid_afind_control_pane_ParamLimits

0xce3b,	// (0x0001b6b3) grid_afind_control_pane

0x54aa,	// (0x00013d22) grid_afind_pane_ParamLimits

0x54aa,	// (0x00013d22) grid_afind_pane

0x54cc,	// (0x00013d44) cell_afind_pane_ParamLimits

0x54cc,	// (0x00013d44) cell_afind_pane

0x9cfd,	// (0x00018575) afind_page_pane_g1

0x5535,	// (0x00013dad) afind_page_pane_g2

0x553d,	// (0x00013db5) afind_page_pane_g3

0x0002,

0xf85c,	// (0x0001e0d4) afind_page_pane_g

0x5545,	// (0x00013dbd) afind_page_pane_t1

0xce61,	// (0x0001b6d9) cell_afind_grid_control_pane_ParamLimits

0xce61,	// (0x0001b6d9) cell_afind_grid_control_pane

0xce70,	// (0x0001b6e8) bg_button_pane_cp69_ParamLimits

0xce70,	// (0x0001b6e8) bg_button_pane_cp69

0x5553,	// (0x00013dcb) cell_afind_pane_g1_ParamLimits

0x5553,	// (0x00013dcb) cell_afind_pane_g1

0x5560,	// (0x00013dd8) cell_afind_pane_t1_ParamLimits

0x5560,	// (0x00013dd8) cell_afind_pane_t1

0xce7c,	// (0x0001b6f4) bg_button_pane_cp72

0xce84,	// (0x0001b6fc) cell_afind_grid_control_pane_g1

0x2e10,	// (0x00011688) aid_image_placing_area_ParamLimits

0x2e10,	// (0x00011688) aid_image_placing_area

0x9cb7,	// (0x0001852f) field_vitu_entry_pane_g1_ParamLimits

0x9cb7,	// (0x0001852f) field_vitu_entry_pane_g1

0x9cb7,	// (0x0001852f) field_vitu_entry_pane_g2_ParamLimits

0x9cb7,	// (0x0001852f) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x0001da11) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x0001da11) field_vitu_entry_pane_g

0xc6aa,	// (0x0001af22) cell_vitu_itu_pane_g1_ParamLimits

0xc68d,	// (0x0001af05) cell_vitu_itu_pane_t3_ParamLimits

0xc68d,	// (0x0001af05) cell_vitu_itu_pane_t3

0xcadf,	// (0x0001b357) mp4_progress_pane_t1_ParamLimits

0xcafd,	// (0x0001b375) mp4_progress_pane_t2_ParamLimits

0xf7a2,	// (0x0001e01a) mp4_progress_pane_t_ParamLimits

0xcb1c,	// (0x0001b394) mup_progress_pane_cp04_ParamLimits

0x543a,	// (0x00013cb2) main_myfav_hc_pane_t5_ParamLimits

0x543a,	// (0x00013cb2) main_myfav_hc_pane_t5

0x953c,	// (0x00017db4) aid_zoom_text_primary

0x053a,	// (0x0000edb2) popup_adpt_find_window_ParamLimits

0x958b,	// (0x00017e03) main_cam_set_pane

0x4da7,	// (0x0001361f) cam4_zoom_pane_ParamLimits

0x4da7,	// (0x0001361f) cam4_zoom_pane

0x5572,	// (0x00013dea) main_cam_set_pane_g1_ParamLimits

0x5572,	// (0x00013dea) main_cam_set_pane_g1

0x5580,	// (0x00013df8) main_cam_set_pane_g2_ParamLimits

0x5580,	// (0x00013df8) main_cam_set_pane_g2

0x0001,

0xf863,	// (0x0001e0db) main_cam_set_pane_g_ParamLimits

0xf863,	// (0x0001e0db) main_cam_set_pane_g

0x55a1,	// (0x00013e19) main_cam_set_pane_t1_ParamLimits

0x55a1,	// (0x00013e19) main_cam_set_pane_t1

0x55bc,	// (0x00013e34) main_cset_listscroll_pane_ParamLimits

0x55bc,	// (0x00013e34) main_cset_listscroll_pane

0x55e4,	// (0x00013e5c) main_cset_slider_pane_ParamLimits

0x55e4,	// (0x00013e5c) main_cset_slider_pane

0xce95,	// (0x0001b70d) main_cset_list_pane_ParamLimits

0xce95,	// (0x0001b70d) main_cset_list_pane

0xcea5,	// (0x0001b71d) scroll_pane_cp028

0x560e,	// (0x00013e86) aid_area_touch_slider

0x562a,	// (0x00013ea2) cset_slider_pane

0x564d,	// (0x00013ec5) main_cset_slider_pane_g1

0x5662,	// (0x00013eda) main_cset_slider_pane_g2

0x0011,

0xf868,	// (0x0001e0e0) main_cset_slider_pane_g

0xcede,	// (0x0001b756) main_cset_slider_pane_t1

0x5724,	// (0x00013f9c) main_cset_slider_pane_t2

0x573e,	// (0x00013fb6) main_cset_slider_pane_t3

0x5758,	// (0x00013fd0) main_cset_slider_pane_t4

0x5772,	// (0x00013fea) main_cset_slider_pane_t5

0x5790,	// (0x00014008) main_cset_slider_pane_t6

0x57a5,	// (0x0001401d) main_cset_slider_pane_t7

0x000e,

0xf88d,	// (0x0001e105) main_cset_slider_pane_t

0x58b1,	// (0x00014129) cset_list_set_pane_ParamLimits

0x58b1,	// (0x00014129) cset_list_set_pane

0xcf78,	// (0x0001b7f0) aid_position_infowindow_above

0xcf80,	// (0x0001b7f8) aid_position_infowindow_below

0x58c5,	// (0x0001413d) cset_list_set_pane_g1_ParamLimits

0x58c5,	// (0x0001413d) cset_list_set_pane_g1

0x58d1,	// (0x00014149) cset_list_set_pane_g3_ParamLimits

0x58d1,	// (0x00014149) cset_list_set_pane_g3

0x0001,

0xf8ac,	// (0x0001e124) cset_list_set_pane_g_ParamLimits

0xf8ac,	// (0x0001e124) cset_list_set_pane_g

0x58e0,	// (0x00014158) cset_list_set_pane_t1_ParamLimits

0x58e0,	// (0x00014158) cset_list_set_pane_t1

0x958b,	// (0x00017e03) list_highlight_pane_cp021_ParamLimits

0x958b,	// (0x00017e03) list_highlight_pane_cp021

0xaa80,	// (0x000192f8) cset_slider_pane_g1

0xaa92,	// (0x0001930a) cset_slider_pane_g2

0xaa89,	// (0x00019301) cset_slider_pane_g3

0x0002,

0xf8b1,	// (0x0001e129) cset_slider_pane_g

0xcf88,	// (0x0001b800) aid_area_touch_cam4_zoom

0x58f5,	// (0x0001416d) cam4_zoom_cont_pane

0x58fd,	// (0x00014175) cam4_zoom_pane_g1

0x5905,	// (0x0001417d) cam4_zoom_pane_g2

0x590d,	// (0x00014185) cam4_zoom_pane_g3

0x0002,

0xf8b8,	// (0x0001e130) cam4_zoom_pane_g

0xcf91,	// (0x0001b809) cam4_zoom_cont_pane_g1

0xcf9a,	// (0x0001b812) cam4_zoom_cont_pane_g2

0xcfa3,	// (0x0001b81b) cam4_zoom_cont_pane_g3

0x0002,

0xf8bf,	// (0x0001e137) cam4_zoom_cont_pane_g

0x4bcd,	// (0x00013445) call4_image_pane_ParamLimits

0x4bcd,	// (0x00013445) call4_image_pane

0x4c38,	// (0x000134b0) call4_windows_conf_pane_ParamLimits

0x4c7f,	// (0x000134f7) popup_call4_audio_in_window_ParamLimits

0x4c7f,	// (0x000134f7) popup_call4_audio_in_window

0x9516,	// (0x00017d8e) bg_popup_call2_act_pane_cp02

0xcbc3,	// (0x0001b43b) call4_list_conf_pane

0x9cfd,	// (0x00018575) call4_image_pane_g1

0x9cfd,	// (0x00018575) call4_image_pane_g2

0x0001,

0xf08c,	// (0x0001d904) call4_image_pane_g

0xcfac,	// (0x0001b824) list_single_graphic_popup_conf4_pane_ParamLimits

0xcfac,	// (0x0001b824) list_single_graphic_popup_conf4_pane

0x9516,	// (0x00017d8e) list_highlight_pane_cp022

0xcfc1,	// (0x0001b839) list_single_graphic_popup_conf4_pane_g1

0xa755,	// (0x00018fcd) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8c6,	// (0x0001e13e) list_single_graphic_popup_conf4_pane_g

0xcfc9,	// (0x0001b841) list_single_graphic_popup_conf4_pane_t1

0x1247,	// (0x0000fabf) popup_vtel_slider_window_ParamLimits

0x1247,	// (0x0000fabf) popup_vtel_slider_window

0xcb2f,	// (0x0001b3a7) dialer2_ne_pane_t2_ParamLimits

0xcb2f,	// (0x0001b3a7) dialer2_ne_pane_t2

0x0001,

0xf7a7,	// (0x0001e01f) dialer2_ne_pane_t_ParamLimits

0xf7a7,	// (0x0001e01f) dialer2_ne_pane_t

0xbd8b,	// (0x0001a603) bg_popup_sub_pane_cp010_ParamLimits

0xbd8b,	// (0x0001a603) bg_popup_sub_pane_cp010

0x5915,	// (0x0001418d) popup_vtel_slider_window_g1_ParamLimits

0x5915,	// (0x0001418d) popup_vtel_slider_window_g1

0x5928,	// (0x000141a0) popup_vtel_slider_window_g2_ParamLimits

0x5928,	// (0x000141a0) popup_vtel_slider_window_g2

0x0003,

0xf8cb,	// (0x0001e143) popup_vtel_slider_window_g_ParamLimits

0xf8cb,	// (0x0001e143) popup_vtel_slider_window_g

0x597e,	// (0x000141f6) vtel_slider_pane_ParamLimits

0x597e,	// (0x000141f6) vtel_slider_pane

0x59a0,	// (0x00014218) vtel_slider_pane_g1_ParamLimits

0x59a0,	// (0x00014218) vtel_slider_pane_g1

0x59b4,	// (0x0001422c) vtel_slider_pane_g2_ParamLimits

0x59b4,	// (0x0001422c) vtel_slider_pane_g2

0x59cc,	// (0x00014244) vtel_slider_pane_g3_ParamLimits

0x59cc,	// (0x00014244) vtel_slider_pane_g3

0x59a0,	// (0x00014218) vtel_slider_pane_g4_ParamLimits

0x59a0,	// (0x00014218) vtel_slider_pane_g4

0x59e2,	// (0x0001425a) vtel_slider_pane_g5_ParamLimits

0x59e2,	// (0x0001425a) vtel_slider_pane_g5

0x0004,

0xf8d4,	// (0x0001e14c) vtel_slider_pane_g_ParamLimits

0xf8d4,	// (0x0001e14c) vtel_slider_pane_g

0x958b,	// (0x00017e03) main_gallery2_pane

0x4fad,	// (0x00013825) aid_size_row_itut2_dropdow_list_ParamLimits

0x4fad,	// (0x00013825) aid_size_row_itut2_dropdow_list

0x502f,	// (0x000138a7) grid_vitu2_function_top_pane_ParamLimits

0x502f,	// (0x000138a7) grid_vitu2_function_top_pane

0x5093,	// (0x0001390b) popup_vitu2_dropdown_list_window_ParamLimits

0x5093,	// (0x0001390b) popup_vitu2_dropdown_list_window

0x50ba,	// (0x00013932) popup_vitu2_match_list_window

0x59f8,	// (0x00014270) cell_vitu2_function_top_pane_ParamLimits

0x59f8,	// (0x00014270) cell_vitu2_function_top_pane

0x5a12,	// (0x0001428a) cell_vitu2_function_top_pane_cp01_ParamLimits

0x5a12,	// (0x0001428a) cell_vitu2_function_top_pane_cp01

0x5a2e,	// (0x000142a6) cell_vitu2_function_top_wide_pane_ParamLimits

0x5a2e,	// (0x000142a6) cell_vitu2_function_top_wide_pane

0x958b,	// (0x00017e03) bg_button_pane_cp012

0x5a4c,	// (0x000142c4) cell_vitu2_function_top_pane_g1

0xcfdf,	// (0x0001b857) bg_button_pane_cp013_ParamLimits

0xcfdf,	// (0x0001b857) bg_button_pane_cp013

0x5a60,	// (0x000142d8) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5a60,	// (0x000142d8) cell_vitu2_function_top_wide_pane_g1

0x958b,	// (0x00017e03) bg_popup_sub_pane_cp20

0x5a78,	// (0x000142f0) list_vitu2_match_list_pane

0xcd61,	// (0x0001b5d9) bg_popup_sub_pane_cp20_g1

0xcd69,	// (0x0001b5e1) bg_popup_sub_pane_cp20_g2

0xa1ca,	// (0x00018a42) bg_popup_sub_pane_cp20_g3

0xcd71,	// (0x0001b5e9) bg_popup_sub_pane_cp20_g4

0xa1aa,	// (0x00018a22) bg_popup_sub_pane_cp20_g5

0xcffb,	// (0x0001b873) bg_popup_sub_pane_cp20_g6

0xcd81,	// (0x0001b5f9) bg_popup_sub_pane_cp20_g7

0xcd89,	// (0x0001b601) bg_popup_sub_pane_cp20_g8

0xcd91,	// (0x0001b609) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8df,	// (0x0001e157) bg_popup_sub_pane_cp20_g

0xd003,	// (0x0001b87b) list_vitu2_match_list_item_pane_ParamLimits

0xd003,	// (0x0001b87b) list_vitu2_match_list_item_pane

0xd015,	// (0x0001b88d) list_vitu2_match_list_item_pane_t1

0x9516,	// (0x00017d8e) bg_popup_sub_pane_cp21

0x9f96,	// (0x0001880e) grid_vitu2_dropdown_list_pane

0x5a90,	// (0x00014308) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x5a90,	// (0x00014308) cell_vitu2_dropdown_list_char_pane

0x5ab2,	// (0x0001432a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x5ab2,	// (0x0001432a) cell_vitu2_dropdown_list_ctrl_pane

0xd023,	// (0x0001b89b) cell_vitu2_dropdown_list_char_pane_g1

0xd02c,	// (0x0001b8a4) cell_vitu2_dropdown_list_char_pane_g2

0xd035,	// (0x0001b8ad) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8f2,	// (0x0001e16a) cell_vitu2_dropdown_list_char_pane_g

0x5adc,	// (0x00014354) cell_vitu2_dropdown_list_char_pane_t1

0x5aea,	// (0x00014362) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x5aea,	// (0x00014362) cell_vitu2_dropdown_list_ctrl_pane_g1

0x5afa,	// (0x00014372) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x5afa,	// (0x00014372) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5b0b,	// (0x00014383) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5b0b,	// (0x00014383) cell_vitu2_dropdown_list_ctrl_pane_g3

0x5b1b,	// (0x00014393) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x5b1b,	// (0x00014393) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9cb7,	// (0x0001852f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9cb7,	// (0x0001852f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8f9,	// (0x0001e171) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8f9,	// (0x0001e171) cell_vitu2_dropdown_list_ctrl_pane_g

0x5b37,	// (0x000143af) aid_size_cell_gallery2_ParamLimits

0x5b37,	// (0x000143af) aid_size_cell_gallery2

0x5b55,	// (0x000143cd) grid_gallery2_pane_ParamLimits

0x5b55,	// (0x000143cd) grid_gallery2_pane

0x5b6f,	// (0x000143e7) scroll_pane_cp029_ParamLimits

0x5b6f,	// (0x000143e7) scroll_pane_cp029

0x5b80,	// (0x000143f8) cell_gallery2_pane_ParamLimits

0x5b80,	// (0x000143f8) cell_gallery2_pane

0xd03e,	// (0x0001b8b6) cell_gallery2_pane_g2

0x5be4,	// (0x0001445c) cell_gallery2_pane_g3

0xd046,	// (0x0001b8be) cell_gallery2_pane_g4

0xd04e,	// (0x0001b8c6) cell_gallery2_pane_g5

0x9f96,	// (0x0001880e) grid_highlight_pane_cp10

0x50ba,	// (0x00013932) popup_vitu2_match_list_window_ParamLimits

0x50d1,	// (0x00013949) popup_vitu2_query_window_ParamLimits

0x50d1,	// (0x00013949) popup_vitu2_query_window

0x9516,	// (0x00017d8e) bg_vitu2_candi_button_pane

0xd023,	// (0x0001b89b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd02c,	// (0x0001b8a4) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd035,	// (0x0001b8ad) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5bec,	// (0x00014464) bg_button_pane_cp015

0x5c03,	// (0x0001447b) bg_button_pane_cp016

0x5c0f,	// (0x00014487) bg_button_pane_cp017

0xaa0e,	// (0x00019286) bg_popup_sub_pane_cp22

0xd056,	// (0x0001b8ce) popup_vitu2_query_window_g1

0x5c50,	// (0x000144c8) popup_vitu2_query_window_g2

0x0002,

0xf904,	// (0x0001e17c) popup_vitu2_query_window_g

0x5c76,	// (0x000144ee) popup_vitu2_query_window_t1_ParamLimits

0x5c76,	// (0x000144ee) popup_vitu2_query_window_t1

0x5cab,	// (0x00014523) popup_vitu2_query_window_t2_ParamLimits

0x5cab,	// (0x00014523) popup_vitu2_query_window_t2

0x5cbd,	// (0x00014535) popup_vitu2_query_window_t3_ParamLimits

0x5cbd,	// (0x00014535) popup_vitu2_query_window_t3

0x5ce5,	// (0x0001455d) popup_vitu2_query_window_t4_ParamLimits

0x5ce5,	// (0x0001455d) popup_vitu2_query_window_t4

0x5cf9,	// (0x00014571) popup_vitu2_query_window_t5_ParamLimits

0x5cf9,	// (0x00014571) popup_vitu2_query_window_t5

0x0006,

0xf90b,	// (0x0001e183) popup_vitu2_query_window_t_ParamLimits

0xf90b,	// (0x0001e183) popup_vitu2_query_window_t

0xce8d,	// (0x0001b705) main_cset_text_pane

0x560e,	// (0x00013e86) aid_area_touch_slider_ParamLimits

0x562a,	// (0x00013ea2) cset_slider_pane_ParamLimits

0x564d,	// (0x00013ec5) main_cset_slider_pane_g1_ParamLimits

0x5662,	// (0x00013eda) main_cset_slider_pane_g2_ParamLimits

0xceae,	// (0x0001b726) main_cset_slider_pane_g3_ParamLimits

0xceae,	// (0x0001b726) main_cset_slider_pane_g3

0x5677,	// (0x00013eef) main_cset_slider_pane_g4_ParamLimits

0x5677,	// (0x00013eef) main_cset_slider_pane_g4

0x5686,	// (0x00013efe) main_cset_slider_pane_g5_ParamLimits

0x5686,	// (0x00013efe) main_cset_slider_pane_g5

0x5694,	// (0x00013f0c) main_cset_slider_pane_g6_ParamLimits

0x5694,	// (0x00013f0c) main_cset_slider_pane_g6

0xf868,	// (0x0001e0e0) main_cset_slider_pane_g_ParamLimits

0xcede,	// (0x0001b756) main_cset_slider_pane_t1_ParamLimits

0x5724,	// (0x00013f9c) main_cset_slider_pane_t2_ParamLimits

0x573e,	// (0x00013fb6) main_cset_slider_pane_t3_ParamLimits

0x5758,	// (0x00013fd0) main_cset_slider_pane_t4_ParamLimits

0x5772,	// (0x00013fea) main_cset_slider_pane_t5_ParamLimits

0x5790,	// (0x00014008) main_cset_slider_pane_t6_ParamLimits

0x57a5,	// (0x0001401d) main_cset_slider_pane_t7_ParamLimits

0x57d3,	// (0x0001404b) main_cset_slider_pane_t8_ParamLimits

0x57d3,	// (0x0001404b) main_cset_slider_pane_t8

0x57fb,	// (0x00014073) main_cset_slider_pane_t9_ParamLimits

0x57fb,	// (0x00014073) main_cset_slider_pane_t9

0x5823,	// (0x0001409b) main_cset_slider_pane_t10_ParamLimits

0x5823,	// (0x0001409b) main_cset_slider_pane_t10

0x584b,	// (0x000140c3) main_cset_slider_pane_t11_ParamLimits

0x584b,	// (0x000140c3) main_cset_slider_pane_t11

0x5875,	// (0x000140ed) main_cset_slider_pane_t12_ParamLimits

0x5875,	// (0x000140ed) main_cset_slider_pane_t12

0x5892,	// (0x0001410a) main_cset_slider_pane_t13_ParamLimits

0x5892,	// (0x0001410a) main_cset_slider_pane_t13

0xf88d,	// (0x0001e105) main_cset_slider_pane_t_ParamLimits

0x9516,	// (0x00017d8e) bg_popup_sub_pane_cp011

0xd062,	// (0x0001b8da) main_cset_text_pane_g1

0xd06a,	// (0x0001b8e2) main_cset_text_pane_t1

0xd078,	// (0x0001b8f0) main_cset_text_pane_t2

0xd086,	// (0x0001b8fe) main_cset_text_pane_t3

0xd094,	// (0x0001b90c) main_cset_text_pane_t4

0xd0a2,	// (0x0001b91a) main_cset_text_pane_t5

0xd0b0,	// (0x0001b928) main_cset_text_pane_t6

0xd0be,	// (0x0001b936) main_cset_text_pane_t7

0x0006,

0xf91a,	// (0x0001e192) main_cset_text_pane_t

0x9516,	// (0x00017d8e) main_cam4_burst_pane

0x9516,	// (0x00017d8e) main_cam5_pane

0xce4f,	// (0x0001b6c7) bg_button_pane_cp019

0xce58,	// (0x0001b6d0) bg_button_pane_cp020

0xceba,	// (0x0001b732) main_cset_slider_pane_g7_ParamLimits

0xceba,	// (0x0001b732) main_cset_slider_pane_g7

0xcec6,	// (0x0001b73e) main_cset_slider_pane_g8_ParamLimits

0xcec6,	// (0x0001b73e) main_cset_slider_pane_g8

0x56a8,	// (0x00013f20) main_cset_slider_pane_g9_ParamLimits

0x56a8,	// (0x00013f20) main_cset_slider_pane_g9

0x56b4,	// (0x00013f2c) main_cset_slider_pane_g10_ParamLimits

0x56b4,	// (0x00013f2c) main_cset_slider_pane_g10

0x56c0,	// (0x00013f38) main_cset_slider_pane_g11_ParamLimits

0x56c0,	// (0x00013f38) main_cset_slider_pane_g11

0x56cc,	// (0x00013f44) main_cset_slider_pane_g12_ParamLimits

0x56cc,	// (0x00013f44) main_cset_slider_pane_g12

0x56d8,	// (0x00013f50) main_cset_slider_pane_g13_ParamLimits

0x56d8,	// (0x00013f50) main_cset_slider_pane_g13

0x56e4,	// (0x00013f5c) main_cset_slider_pane_g14_ParamLimits

0x56e4,	// (0x00013f5c) main_cset_slider_pane_g14

0x56f0,	// (0x00013f68) main_cset_slider_pane_g15_ParamLimits

0x56f0,	// (0x00013f68) main_cset_slider_pane_g15

0xcf06,	// (0x0001b77e) main_cset_slider_pane_t14_ParamLimits

0xcf06,	// (0x0001b77e) main_cset_slider_pane_t14

0xcf3f,	// (0x0001b7b7) main_cset_slider_pane_t15_ParamLimits

0xcf3f,	// (0x0001b7b7) main_cset_slider_pane_t15

0x5d63,	// (0x000145db) aid_cam4_burst_size_cell_ParamLimits

0x5d63,	// (0x000145db) aid_cam4_burst_size_cell

0x5d83,	// (0x000145fb) grid_cam4_burst_pane_ParamLimits

0x5d83,	// (0x000145fb) grid_cam4_burst_pane

0x5dbd,	// (0x00014635) linegrid_cam4_burst_pane_ParamLimits

0x5dbd,	// (0x00014635) linegrid_cam4_burst_pane

0xd208,	// (0x0001ba80) scroll_pane_cp30_ParamLimits

0xd208,	// (0x0001ba80) scroll_pane_cp30

0x5ddf,	// (0x00014657) cell_cam4_burst_pane_ParamLimits

0x5ddf,	// (0x00014657) cell_cam4_burst_pane

0xd0cc,	// (0x0001b944) linegrid_cam4_burst_pane_g1_ParamLimits

0xd0cc,	// (0x0001b944) linegrid_cam4_burst_pane_g1

0x5e34,	// (0x000146ac) linegrid_cam4_burst_pane_g2_ParamLimits

0x5e34,	// (0x000146ac) linegrid_cam4_burst_pane_g2

0xd0d9,	// (0x0001b951) linegrid_cam4_burst_pane_g3_ParamLimits

0xd0d9,	// (0x0001b951) linegrid_cam4_burst_pane_g3

0x0002,

0xf929,	// (0x0001e1a1) linegrid_cam4_burst_pane_g_ParamLimits

0xf929,	// (0x0001e1a1) linegrid_cam4_burst_pane_g

0x5e45,	// (0x000146bd) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x5e45,	// (0x000146bd) linegrid_cam4_burst_pane_g3_copy1

0xd0e6,	// (0x0001b95e) linegrid_cam4_burst_pane_g4_ParamLimits

0xd0e6,	// (0x0001b95e) linegrid_cam4_burst_pane_g4

0x5e63,	// (0x000146db) linegrid_cam4_burst_pane_g5_ParamLimits

0x5e63,	// (0x000146db) linegrid_cam4_burst_pane_g5

0x5e74,	// (0x000146ec) linegrid_cam4_burst_pane_g6_ParamLimits

0x5e74,	// (0x000146ec) linegrid_cam4_burst_pane_g6

0xd0f3,	// (0x0001b96b) linegrid_cam4_burst_pane_g7_ParamLimits

0xd0f3,	// (0x0001b96b) linegrid_cam4_burst_pane_g7

0x5e8b,	// (0x00014703) cell_cam4_burst_pane_g1

0xd10c,	// (0x0001b984) main_cam5_pane_t1_ParamLimits

0xd10c,	// (0x0001b984) main_cam5_pane_t1

0xd11e,	// (0x0001b996) main_cam5_pane_t2_ParamLimits

0xd11e,	// (0x0001b996) main_cam5_pane_t2

0xd130,	// (0x0001b9a8) main_cam5_pane_t3_ParamLimits

0xd130,	// (0x0001b9a8) main_cam5_pane_t3

0xd142,	// (0x0001b9ba) main_cam5_pane_t4_ParamLimits

0xd142,	// (0x0001b9ba) main_cam5_pane_t4

0xd15a,	// (0x0001b9d2) main_cam5_pane_t5_ParamLimits

0xd15a,	// (0x0001b9d2) main_cam5_pane_t5

0xd16e,	// (0x0001b9e6) main_cam5_pane_t6_ParamLimits

0xd16e,	// (0x0001b9e6) main_cam5_pane_t6

0xd182,	// (0x0001b9fa) main_cam5_pane_t7_ParamLimits

0xd182,	// (0x0001b9fa) main_cam5_pane_t7

0xd194,	// (0x0001ba0c) main_cam5_pane_t8_ParamLimits

0xd194,	// (0x0001ba0c) main_cam5_pane_t8

0xd214,	// (0x0001ba8c) main_cam5_pane_t9_ParamLimits

0xd214,	// (0x0001ba8c) main_cam5_pane_t9

0xd226,	// (0x0001ba9e) main_cam5_pane_t10_ParamLimits

0xd226,	// (0x0001ba9e) main_cam5_pane_t10

0xd238,	// (0x0001bab0) main_cam5_pane_t11_ParamLimits

0xd238,	// (0x0001bab0) main_cam5_pane_t11

0xd24c,	// (0x0001bac4) main_cam5_pane_t12_ParamLimits

0xd24c,	// (0x0001bac4) main_cam5_pane_t12

0xd263,	// (0x0001badb) main_cam5_pane_t13_ParamLimits

0xd263,	// (0x0001badb) main_cam5_pane_t13

0x000c,

0xf935,	// (0x0001e1ad) main_cam5_pane_t_ParamLimits

0xf935,	// (0x0001e1ad) main_cam5_pane_t

0x05bb,	// (0x0000ee33) popup_scut_keymap_window_ParamLimits

0x05bb,	// (0x0000ee33) popup_scut_keymap_window

0x5e9e,	// (0x00014716) aid_size_cell_brow_shortcut

0x9f96,	// (0x0001880e) bg_popup_window_pane_cp010

0x5eaa,	// (0x00014722) grid_scut_pane

0x5eb6,	// (0x0001472e) cell_scut_pane_ParamLimits

0x5eb6,	// (0x0001472e) cell_scut_pane

0x5ecf,	// (0x00014747) cell_scut_pane_g1

0xd286,	// (0x0001bafe) cell_scut_pane_t1

0xd295,	// (0x0001bb0d) cell_scut_pane_t2

0x5ed8,	// (0x00014750) cell_scut_pane_t3

0x0002,

0xf950,	// (0x0001e1c8) cell_scut_pane_t

0x3ddf,	// (0x00012657) main_mup3_pane_g8_ParamLimits

0x3ddf,	// (0x00012657) main_mup3_pane_g8

0x4fc7,	// (0x0001383f) area_vitu2_query_pane_ParamLimits

0x4fc7,	// (0x0001383f) area_vitu2_query_pane

0x5c1b,	// (0x00014493) input_focus_pane_cp08

0xd2a4,	// (0x0001bb1c) area_vitu2_query_pane_g1

0x5ee6,	// (0x0001475e) area_vitu2_query_pane_g2

0x0001,

0xf957,	// (0x0001e1cf) area_vitu2_query_pane_g

0x5efb,	// (0x00014773) area_vitu2_query_pane_t1_ParamLimits

0x5efb,	// (0x00014773) area_vitu2_query_pane_t1

0x5f0f,	// (0x00014787) area_vitu2_query_pane_t2_ParamLimits

0x5f0f,	// (0x00014787) area_vitu2_query_pane_t2

0x5f23,	// (0x0001479b) area_vitu2_query_pane_t3_ParamLimits

0x5f23,	// (0x0001479b) area_vitu2_query_pane_t3

0xd2b0,	// (0x0001bb28) area_vitu2_query_pane_t4_ParamLimits

0xd2b0,	// (0x0001bb28) area_vitu2_query_pane_t4

0xd2d8,	// (0x0001bb50) area_vitu2_query_pane_t5_ParamLimits

0xd2d8,	// (0x0001bb50) area_vitu2_query_pane_t5

0xd300,	// (0x0001bb78) area_vitu2_query_pane_t6_ParamLimits

0xd300,	// (0x0001bb78) area_vitu2_query_pane_t6

0x0006,

0xf95c,	// (0x0001e1d4) area_vitu2_query_pane_t_ParamLimits

0xf95c,	// (0x0001e1d4) area_vitu2_query_pane_t

0x5f4f,	// (0x000147c7) bg_button_pane_cp018

0x5f5b,	// (0x000147d3) bg_button_pane_cp021

0x5f67,	// (0x000147df) bg_button_pane_cp022

0x5f92,	// (0x0001480a) input_focus_pane_cp09

0x2545,	// (0x00010dbd) aid_size_touch_mv_arrow_left

0x256e,	// (0x00010de6) aid_size_touch_mv_arrow_right

0x5708,	// (0x00013f80) main_cset_slider_pane_g16_ParamLimits

0x5708,	// (0x00013f80) main_cset_slider_pane_g16

0x5716,	// (0x00013f8e) main_cset_slider_pane_g17_ParamLimits

0x5716,	// (0x00013f8e) main_cset_slider_pane_g17

0x5e8b,	// (0x00014703) cell_cam4_burst_pane_g1_ParamLimits

0x9516,	// (0x00017d8e) compa_mode_pane

0x5938,	// (0x000141b0) popup_vtel_slider_window_g3_ParamLimits

0x5938,	// (0x000141b0) popup_vtel_slider_window_g3

0x594f,	// (0x000141c7) popup_vtel_slider_window_g4_ParamLimits

0x594f,	// (0x000141c7) popup_vtel_slider_window_g4

0x5966,	// (0x000141de) popup_vtel_slider_window_t1_ParamLimits

0x5966,	// (0x000141de) popup_vtel_slider_window_t1

0x9516,	// (0x00017d8e) main_cl_pane

0xbc22,	// (0x0001a49a) popup_imed_adjust2_window_ParamLimits

0xaa0e,	// (0x00019286) bg_tb_trans_pane_cp05_ParamLimits

0xc5b0,	// (0x0001ae28) popup_imed_adjust2_window_g1_ParamLimits

0xc5bf,	// (0x0001ae37) popup_imed_adjust2_window_g2_ParamLimits

0xc5bf,	// (0x0001ae37) popup_imed_adjust2_window_g2

0xc5cb,	// (0x0001ae43) popup_imed_adjust2_window_g3_ParamLimits

0xc5cb,	// (0x0001ae43) popup_imed_adjust2_window_g3

0x0002,

0xf6d7,	// (0x0001df4f) popup_imed_adjust2_window_g_ParamLimits

0xf6d7,	// (0x0001df4f) popup_imed_adjust2_window_g

0xc5d7,	// (0x0001ae4f) popup_imed_adjust2_window_t1_ParamLimits

0xc5ef,	// (0x0001ae67) slider_imed_adjust_pane_ParamLimits

0xc603,	// (0x0001ae7b) slider_imed_adjust_pane_g1_ParamLimits

0xc613,	// (0x0001ae8b) slider_imed_adjust_pane_g2_ParamLimits

0xc623,	// (0x0001ae9b) slider_imed_adjust_pane_g3_ParamLimits

0xc634,	// (0x0001aeac) slider_imed_adjust_pane_g4_ParamLimits

0xf6de,	// (0x0001df56) slider_imed_adjust_pane_g_ParamLimits

0x4d47,	// (0x000135bf) aid_touch_area_cam4_ParamLimits

0x4d47,	// (0x000135bf) aid_touch_area_cam4

0xcbe5,	// (0x0001b45d) battery_pane_cp01

0x4e1a,	// (0x00013692) main_camera4_pane_g6_ParamLimits

0x4e1a,	// (0x00013692) main_camera4_pane_g6

0x4e44,	// (0x000136bc) main_camera4_pane_t2_ParamLimits

0x4e44,	// (0x000136bc) main_camera4_pane_t2

0x0001,

0xf7db,	// (0x0001e053) main_camera4_pane_t_ParamLimits

0xf7db,	// (0x0001e053) main_camera4_pane_t

0x4e79,	// (0x000136f1) aid_touch_area_vid4_ParamLimits

0x4e79,	// (0x000136f1) aid_touch_area_vid4

0x4ed0,	// (0x00013748) main_video4_pane_g5_ParamLimits

0x4ed0,	// (0x00013748) main_video4_pane_g5

0x4ef6,	// (0x0001376e) vid4_progress_pane_ParamLimits

0x4ef6,	// (0x0001376e) vid4_progress_pane

0xced2,	// (0x0001b74a) main_cset_slider_pane_g18_ParamLimits

0xced2,	// (0x0001b74a) main_cset_slider_pane_g18

0xd100,	// (0x0001b978) cell_cam4_burst_pane_g2_ParamLimits

0xd100,	// (0x0001b978) cell_cam4_burst_pane_g2

0x0001,

0xf930,	// (0x0001e1a8) cell_cam4_burst_pane_g_ParamLimits

0xf930,	// (0x0001e1a8) cell_cam4_burst_pane_g

0x9d75,	// (0x000185ed) bg_cl_pane_ParamLimits

0x9d75,	// (0x000185ed) bg_cl_pane

0x5fa3,	// (0x0001481b) cl_header_pane_ParamLimits

0x5fa3,	// (0x0001481b) cl_header_pane

0x5fb7,	// (0x0001482f) cl_listscroll_pane_ParamLimits

0x5fb7,	// (0x0001482f) cl_listscroll_pane

0xd34c,	// (0x0001bbc4) bg_cl_pane_g1

0xd354,	// (0x0001bbcc) bg_cl_pane_g2

0xd35c,	// (0x0001bbd4) bg_cl_pane_g3

0xd364,	// (0x0001bbdc) bg_cl_pane_g4

0xd36c,	// (0x0001bbe4) bg_cl_pane_g5

0xd374,	// (0x0001bbec) bg_cl_pane_g6

0xd37c,	// (0x0001bbf4) bg_cl_pane_g7

0xd384,	// (0x0001bbfc) bg_cl_pane_g8

0xd38c,	// (0x0001bc04) bg_cl_pane_g9

0x0008,

0xf96b,	// (0x0001e1e3) bg_cl_pane_g

0x5fc7,	// (0x0001483f) aid_height_cl_leading_ParamLimits

0x5fc7,	// (0x0001483f) aid_height_cl_leading

0x5fd3,	// (0x0001484b) aid_height_cl_text_ParamLimits

0x5fd3,	// (0x0001484b) aid_height_cl_text

0x958b,	// (0x00017e03) bg_cl_header_pane_ParamLimits

0x958b,	// (0x00017e03) bg_cl_header_pane

0x5ff2,	// (0x0001486a) cl_header_pane_g1_ParamLimits

0x5ff2,	// (0x0001486a) cl_header_pane_g1

0x6008,	// (0x00014880) cl_header_pane_t1_ParamLimits

0x6008,	// (0x00014880) cl_header_pane_t1

0xd394,	// (0x0001bc0c) cl_list_pane

0xcea5,	// (0x0001b71d) hc_scroll_pane_cp01

0xa1aa,	// (0x00018a22) bg_cl_header_pane_g1

0xcd61,	// (0x0001b5d9) bg_cl_header_pane_g2

0xa1ca,	// (0x00018a42) bg_cl_header_pane_g3

0xcd71,	// (0x0001b5e9) bg_cl_header_pane_g4

0xcd69,	// (0x0001b5e1) bg_cl_header_pane_g5

0xcffb,	// (0x0001b873) bg_cl_header_pane_g6

0xcd89,	// (0x0001b601) bg_cl_header_pane_g7

0xcd91,	// (0x0001b609) bg_cl_header_pane_g8

0xcd81,	// (0x0001b5f9) bg_cl_header_pane_g9

0x0008,

0xf97e,	// (0x0001e1f6) bg_cl_header_pane_g

0x6021,	// (0x00014899) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6021,	// (0x00014899) hc_cl_list_double_graphic_heading_pane

0x6034,	// (0x000148ac) hc_cl_list_single_graphic_pane_ParamLimits

0x6034,	// (0x000148ac) hc_cl_list_single_graphic_pane

0x604c,	// (0x000148c4) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x604c,	// (0x000148c4) hc_cl_list_single_graphic_pane_g1

0x6058,	// (0x000148d0) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6058,	// (0x000148d0) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf991,	// (0x0001e209) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf991,	// (0x0001e209) hc_cl_list_single_graphic_pane_g

0x606c,	// (0x000148e4) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x606c,	// (0x000148e4) hc_cl_list_single_graphic_pane_t1

0x604c,	// (0x000148c4) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x604c,	// (0x000148c4) hc_cl_list_double_graphic_heading_pane_g1

0x6081,	// (0x000148f9) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6081,	// (0x000148f9) hc_cl_list_double_graphic_heading_pane_g2

0x6095,	// (0x0001490d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6095,	// (0x0001490d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf996,	// (0x0001e20e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf996,	// (0x0001e20e) hc_cl_list_double_graphic_heading_pane_g

0x60a9,	// (0x00014921) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x60a9,	// (0x00014921) hc_cl_list_double_graphic_heading_pane_t1

0x60be,	// (0x00014936) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x60be,	// (0x00014936) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf99d,	// (0x0001e215) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf99d,	// (0x0001e215) hc_cl_list_double_graphic_heading_pane_t

0xd3a5,	// (0x0001bc1d) vid4_progress_pane_g1

0xd3b5,	// (0x0001bc2d) vid4_progress_pane_g2

0x60d3,	// (0x0001494b) vid4_progress_pane_g3

0xd3c5,	// (0x0001bc3d) vid4_progress_pane_g4

0x0004,

0xf9a2,	// (0x0001e21a) vid4_progress_pane_g

0x60e5,	// (0x0001495d) vid4_progress_pane_t1

0xd3e3,	// (0x0001bc5b) vid4_progress_pane_t2

0x0002,

0xf9ad,	// (0x0001e225) vid4_progress_pane_t

0x60ff,	// (0x00014977) wait_bar_pane_cp07

0xbeee,	// (0x0001a766) blid_firmament_pane_ParamLimits

0xbf31,	// (0x0001a7a9) popup_blid_sat_info2_window_g1

0xbf55,	// (0x0001a7cd) popup_blid_sat_info2_window_t3

0xbf63,	// (0x0001a7db) popup_blid_sat_info2_window_t4

0xbf71,	// (0x0001a7e9) popup_blid_sat_info2_window_t5

0xbf7f,	// (0x0001a7f7) popup_blid_sat_info2_window_t6

0xbf8f,	// (0x0001a807) popup_blid_sat_info2_window_t7

0xbf9d,	// (0x0001a815) popup_blid_sat_info2_window_t8

0xbfab,	// (0x0001a823) popup_blid_sat_info2_window_t9

0xbfb9,	// (0x0001a831) popup_blid_sat_info2_window_t10

0xc080,	// (0x0001a8f8) aid_firma_cardinal_ParamLimits

0xc094,	// (0x0001a90c) blid_firmament_pane_t1_ParamLimits

0xc0ab,	// (0x0001a923) blid_firmament_pane_t2_ParamLimits

0xc0c2,	// (0x0001a93a) blid_firmament_pane_t3_ParamLimits

0xc0d9,	// (0x0001a951) blid_firmament_pane_t4_ParamLimits

0xf5d0,	// (0x0001de48) blid_firmament_pane_t_ParamLimits

0xc0f0,	// (0x0001a968) blid_sat_info_pane_ParamLimits

0x958b,	// (0x00017e03) main_cam_set_pane_ParamLimits

0x4596,	// (0x00012e0e) aid_size_cell_colour_35_ParamLimits

0x45b6,	// (0x00012e2e) aid_size_cell_colour_112_ParamLimits

0x45d6,	// (0x00012e4e) aid_size_cell_effect_ParamLimits

0xaa0e,	// (0x00019286) bg_tb_trans_pane_cp02_ParamLimits

0x45f6,	// (0x00012e6e) heading_imed_pane_ParamLimits

0x4602,	// (0x00012e7a) listscroll_imed_pane_ParamLimits

0xb353,	// (0x00019bcb) popup_call2_audio_first_window_g5_ParamLimits

0xb353,	// (0x00019bcb) popup_call2_audio_first_window_g5

0x494a,	// (0x000131c2) aid_size_touch_image3_arrow_left_ParamLimits

0x494a,	// (0x000131c2) aid_size_touch_image3_arrow_left

0x4976,	// (0x000131ee) aid_size_touch_image3_arrow_right_ParamLimits

0x4976,	// (0x000131ee) aid_size_touch_image3_arrow_right

0xd3fc,	// (0x0001bc74) vid4_progress_pane_t3

0x477f,	// (0x00012ff7) main_hwr_training_symbol_option_pane_ParamLimits

0x477f,	// (0x00012ff7) main_hwr_training_symbol_option_pane

0xc758,	// (0x0001afd0) popup_hwr_training_preview_window_ParamLimits

0xc758,	// (0x0001afd0) popup_hwr_training_preview_window

0x479f,	// (0x00013017) hwr_training_navi_pane_g5_ParamLimits

0x479f,	// (0x00013017) hwr_training_navi_pane_g5

0xcd4f,	// (0x0001b5c7) popup_char_count_window

0x958b,	// (0x00017e03) bg_popup_sub_pane_cp20_ParamLimits

0x5a78,	// (0x000142f0) list_vitu2_match_list_pane_ParamLimits

0x5a84,	// (0x000142fc) vitu2_page_scroll_pane_ParamLimits

0x5a84,	// (0x000142fc) vitu2_page_scroll_pane

0xd433,	// (0x0001bcab) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd433,	// (0x0001bcab) list_single_hwr_training_symbol_option_pane

0xd446,	// (0x0001bcbe) list_single_hwr_training_symbol_option_pane_g1

0xd44e,	// (0x0001bcc6) list_single_hwr_training_symbol_option_pane_t1

0xd45c,	// (0x0001bcd4) bg_button_pane_cp023

0xd465,	// (0x0001bcdd) bg_button_pane_cp024

0xd498,	// (0x0001bd10) vitu2_page_scroll_pane_g1

0xd4a0,	// (0x0001bd18) vitu2_page_scroll_pane_g2

0x0001,

0xf9b4,	// (0x0001e22c) vitu2_page_scroll_pane_g

0xd4a8,	// (0x0001bd20) vitu2_page_scroll_pane_t1

0xd1b2,	// (0x0001ba2a) popup_char_count_window_g1

0xd4b7,	// (0x0001bd2f) popup_char_count_window_g2

0xd1bb,	// (0x0001ba33) popup_char_count_window_g3

0x0002,

0xf9b9,	// (0x0001e231) popup_char_count_window_g

0xd4c0,	// (0x0001bd38) popup_char_count_window_t1

0x9516,	// (0x00017d8e) main_vded2_pane

0xc59c,	// (0x0001ae14) aid_size_cell_imed_line

0xc5a6,	// (0x0001ae1e) grid_imed_line_width_pane

0xcc9f,	// (0x0001b517) vid4_indicators_pane_g4

0xd4ce,	// (0x0001bd46) cell_imed_line_width_pane_ParamLimits

0xd4ce,	// (0x0001bd46) cell_imed_line_width_pane

0xd4e4,	// (0x0001bd5c) cell_imed_line_width_pane_g1

0xd4ed,	// (0x0001bd65) cell_imed_line_width_pane_g2

0x0001,

0xf9c0,	// (0x0001e238) cell_imed_line_width_pane_g

0x6126,	// (0x0001499e) main_vded2_pane_g1_ParamLimits

0x6126,	// (0x0001499e) main_vded2_pane_g1

0x6141,	// (0x000149b9) main_vded2_pane_g2_ParamLimits

0x6141,	// (0x000149b9) main_vded2_pane_g2

0x0001,

0xf9c5,	// (0x0001e23d) main_vded2_pane_g_ParamLimits

0xf9c5,	// (0x0001e23d) main_vded2_pane_g

0x6153,	// (0x000149cb) vded2_slider_pane_ParamLimits

0x6153,	// (0x000149cb) vded2_slider_pane

0x6163,	// (0x000149db) aid_size_touch_vded2_end

0x616d,	// (0x000149e5) aid_size_touch_vded2_playhead

0xd4f5,	// (0x0001bd6d) aid_size_touch_vded2_start

0xd4fd,	// (0x0001bd75) vded2_slider_bg_pane

0xd506,	// (0x0001bd7e) vded2_slider_pane_g1

0xd50f,	// (0x0001bd87) vded2_slider_pane_g2

0x6177,	// (0x000149ef) vded2_slider_pane_g3

0x0002,

0xf9ca,	// (0x0001e242) vded2_slider_pane_g

0xd517,	// (0x0001bd8f) vded2_slider_bg_pane_g1

0xd520,	// (0x0001bd98) vded2_slider_bg_pane_g2

0xd529,	// (0x0001bda1) vded2_slider_bg_pane_g3

0x0002,

0xf9d1,	// (0x0001e249) vded2_slider_bg_pane_g

0x2a72,	// (0x000112ea) aid_postcard_touch_down_pane_ParamLimits

0x2a72,	// (0x000112ea) aid_postcard_touch_down_pane

0x2a8a,	// (0x00011302) aid_postcard_touch_up_pane_ParamLimits

0x2a8a,	// (0x00011302) aid_postcard_touch_up_pane

0x9516,	// (0x00017d8e) main_blid2_pane

0xbc04,	// (0x0001a47c) popup_blid2_search_window

0x9516,	// (0x00017d8e) blid2_gps_pane

0x9516,	// (0x00017d8e) blid2_navig_pane

0x9516,	// (0x00017d8e) blid2_search_pane

0x9516,	// (0x00017d8e) blid2_tripm_pane

0x6182,	// (0x000149fa) blid2_search_pane_g1_ParamLimits

0x6182,	// (0x000149fa) blid2_search_pane_g1

0x6195,	// (0x00014a0d) blid2_search_pane_t1_ParamLimits

0x6195,	// (0x00014a0d) blid2_search_pane_t1

0x61a7,	// (0x00014a1f) aid_size_cell_blid2_gps_ParamLimits

0x61a7,	// (0x00014a1f) aid_size_cell_blid2_gps

0x61bf,	// (0x00014a37) blid2_gps_pane_g1_ParamLimits

0x61bf,	// (0x00014a37) blid2_gps_pane_g1

0x61d3,	// (0x00014a4b) grid_blid2_satellite_pane_ParamLimits

0x61d3,	// (0x00014a4b) grid_blid2_satellite_pane

0x61eb,	// (0x00014a63) blid2_navig_pane_g1_ParamLimits

0x61eb,	// (0x00014a63) blid2_navig_pane_g1

0x61f7,	// (0x00014a6f) blid2_navig_pane_t1_ParamLimits

0x61f7,	// (0x00014a6f) blid2_navig_pane_t1

0x6212,	// (0x00014a8a) blid2_navig_pane_t2_ParamLimits

0x6212,	// (0x00014a8a) blid2_navig_pane_t2

0x0001,

0xf9d8,	// (0x0001e250) blid2_navig_pane_t_ParamLimits

0xf9d8,	// (0x0001e250) blid2_navig_pane_t

0x622d,	// (0x00014aa5) blid2_navig_ring_pane_ParamLimits

0x622d,	// (0x00014aa5) blid2_navig_ring_pane

0x6248,	// (0x00014ac0) blid2_speed_pane_ParamLimits

0x6248,	// (0x00014ac0) blid2_speed_pane

0x6254,	// (0x00014acc) blid2_tripm_pane_g1_ParamLimits

0x6254,	// (0x00014acc) blid2_tripm_pane_g1

0x626f,	// (0x00014ae7) blid2_tripm_pane_g2_ParamLimits

0x626f,	// (0x00014ae7) blid2_tripm_pane_g2

0x6282,	// (0x00014afa) blid2_tripm_pane_g3_ParamLimits

0x6282,	// (0x00014afa) blid2_tripm_pane_g3

0x6293,	// (0x00014b0b) blid2_tripm_pane_g4_ParamLimits

0x6293,	// (0x00014b0b) blid2_tripm_pane_g4

0x62a4,	// (0x00014b1c) blid2_tripm_pane_g5_ParamLimits

0x62a4,	// (0x00014b1c) blid2_tripm_pane_g5

0x0005,

0xf9dd,	// (0x0001e255) blid2_tripm_pane_g_ParamLimits

0xf9dd,	// (0x0001e255) blid2_tripm_pane_g

0x62ca,	// (0x00014b42) blid2_tripm_pane_t1_ParamLimits

0x62ca,	// (0x00014b42) blid2_tripm_pane_t1

0x62e3,	// (0x00014b5b) blid2_tripm_pane_t2_ParamLimits

0x62e3,	// (0x00014b5b) blid2_tripm_pane_t2

0x62fc,	// (0x00014b74) blid2_tripm_pane_t3_ParamLimits

0x62fc,	// (0x00014b74) blid2_tripm_pane_t3

0x0003,

0xf9ea,	// (0x0001e262) blid2_tripm_pane_t_ParamLimits

0xf9ea,	// (0x0001e262) blid2_tripm_pane_t

0x6343,	// (0x00014bbb) cell_blid2_satellite_pane_ParamLimits

0x6343,	// (0x00014bbb) cell_blid2_satellite_pane

0x635f,	// (0x00014bd7) cell_blid2_satellite_pane_g1

0xd532,	// (0x0001bdaa) cell_blid2_satellite_pane_t1

0x9cfd,	// (0x00018575) blid2_speed_pane_g1

0xd540,	// (0x0001bdb8) blid2_speed_pane_t1

0xd54e,	// (0x0001bdc6) blid2_speed_pane_t2

0x0001,

0xf9f3,	// (0x0001e26b) blid2_speed_pane_t

0x9cfd,	// (0x00018575) blid2_navig_ring_pane_g1

0x6368,	// (0x00014be0) blid2_navig_ring_pane_g2

0x6370,	// (0x00014be8) blid2_navig_ring_pane_g3

0x6378,	// (0x00014bf0) blid2_navig_ring_pane_g4

0x6380,	// (0x00014bf8) blid2_navig_ring_pane_g5

0x0004,

0xf9f8,	// (0x0001e270) blid2_navig_ring_pane_g

0x9516,	// (0x00017d8e) bg_popup_window_pane_cp011

0xd55c,	// (0x0001bdd4) popup_blid2_search_window_g1

0xd564,	// (0x0001bddc) popup_blid2_search_window_t1

0xd572,	// (0x0001bdea) popup_blid2_search_window_t2

0x0001,

0xfa03,	// (0x0001e27b) popup_blid2_search_window_t

0xa0b9,	// (0x00018931) main_browser_pane_g1

0x9d75,	// (0x000185ed) main_browser_pane_ParamLimits

0x958b,	// (0x00017e03) bg_button_pane_cp011_ParamLimits

0x52d8,	// (0x00013b50) cell_vitu2_function_pane_g1_ParamLimits

0xaa0e,	// (0x00019286) bg_popup_sub_pane_cp22_ParamLimits

0x5c1b,	// (0x00014493) input_focus_pane_cp08_ParamLimits

0x5c37,	// (0x000144af) popup_vitu2_query_button_pane_ParamLimits

0x5c37,	// (0x000144af) popup_vitu2_query_button_pane

0x5c46,	// (0x000144be) popup_vitu2_query_input_button_pane

0xd056,	// (0x0001b8ce) popup_vitu2_query_window_g1_ParamLimits

0x5c50,	// (0x000144c8) popup_vitu2_query_window_g2_ParamLimits

0xf904,	// (0x0001e17c) popup_vitu2_query_window_g_ParamLimits

0x9516,	// (0x00017d8e) bg_button_pane_cp026

0x6388,	// (0x00014c00) popup_vitu2_query_input_button_pane_g1

0x9516,	// (0x00017d8e) bg_button_pane_cp025

0xd580,	// (0x0001bdf8) popup_vitu2_query_button_pane_t1

0x39d3,	// (0x0001224b) main_mp3_pane_t6

0x39e1,	// (0x00012259) popup_slider_window_cp01

0xcc03,	// (0x0001b47b) cam4_battery_pane

0xcc58,	// (0x0001b4d0) cam4_battery_pane_cp02

0xd39d,	// (0x0001bc15) cam4_battery_pane_cp01

0xd39d,	// (0x0001bc15) cam4_battery_pane_cp03

0x9cfd,	// (0x00018575) cam4_battery_pane_g1

0xd58e,	// (0x0001be06) cam4_battery_pane_g2

0x0001,

0xfa08,	// (0x0001e280) cam4_battery_pane_g

0xbfc7,	// (0x0001a83f) popup_blid_sat_info2_window_t11

0x2545,	// (0x00010dbd) aid_size_touch_mv_arrow_left_ParamLimits

0x256e,	// (0x00010de6) aid_size_touch_mv_arrow_right_ParamLimits

0xa883,	// (0x000190fb) navi_pane_g1_ParamLimits

0x25ad,	// (0x00010e25) navi_pane_g2_ParamLimits

0x25db,	// (0x00010e53) navi_pane_g3_ParamLimits

0xf30c,	// (0x0001db84) navi_pane_g_ParamLimits

0x2635,	// (0x00010ead) navi_pane_mv_t1_ParamLimits

0x460e,	// (0x00012e86) grid_imed_effect_pane_ParamLimits

0x115e,	// (0x0000f9d6) aid_placing_vt_slider_lsc

0x9ff7,	// (0x0001886f) aid_placing_vt_slider_prt

0x958b,	// (0x00017e03) bg_tb_trans_pane_cp01_ParamLimits

0xc22f,	// (0x0001aaa7) popup_image_details_window_g1_ParamLimits

0xc242,	// (0x0001aaba) popup_image_details_window_g2_ParamLimits

0xc257,	// (0x0001aacf) popup_image_details_window_g3_ParamLimits

0xc257,	// (0x0001aacf) popup_image_details_window_g3

0xf610,	// (0x0001de88) popup_image_details_window_g_ParamLimits

0xc26b,	// (0x0001aae3) popup_image_details_window_t1_ParamLimits

0xc27d,	// (0x0001aaf5) popup_image_details_window_t2_ParamLimits

0xc296,	// (0x0001ab0e) popup_image_details_window_t3_ParamLimits

0xc2aa,	// (0x0001ab22) popup_image_details_window_t4_ParamLimits

0xc2c5,	// (0x0001ab3d) popup_image_details_window_t5_ParamLimits

0xf617,	// (0x0001de8f) popup_image_details_window_t_ParamLimits

0x5fdf,	// (0x00014857) cl_header_name_pane_ParamLimits

0x5fdf,	// (0x00014857) cl_header_name_pane

0x6390,	// (0x00014c08) cl_header_name_pane_t1_ParamLimits

0x6390,	// (0x00014c08) cl_header_name_pane_t1

0x63b1,	// (0x00014c29) cl_header_name_pane_t2_ParamLimits

0x63b1,	// (0x00014c29) cl_header_name_pane_t2

0x63f3,	// (0x00014c6b) cl_header_name_pane_t3_ParamLimits

0x63f3,	// (0x00014c6b) cl_header_name_pane_t3

0x0002,

0xfa0d,	// (0x0001e285) cl_header_name_pane_t_ParamLimits

0xfa0d,	// (0x0001e285) cl_header_name_pane_t

0x2606,	// (0x00010e7e) navi_pane_mv_g2_ParamLimits

0xcceb,	// (0x0001b563) field_vitu2_entry_pane_g1_ParamLimits

0xccf7,	// (0x0001b56f) field_vitu2_entry_pane_g2_ParamLimits

0xa9ec,	// (0x00019264) field_vitu2_entry_pane_g3_ParamLimits

0xa9ec,	// (0x00019264) field_vitu2_entry_pane_g3

0xf80d,	// (0x0001e085) field_vitu2_entry_pane_g_ParamLimits

0x5168,	// (0x000139e0) cell_vitu2_itu_pane_g1_ParamLimits

0x5180,	// (0x000139f8) cell_vitu2_itu_pane_g2_ParamLimits

0x5180,	// (0x000139f8) cell_vitu2_itu_pane_g2

0x0001,

0xf819,	// (0x0001e091) cell_vitu2_itu_pane_g_ParamLimits

0xf819,	// (0x0001e091) cell_vitu2_itu_pane_g

0x958b,	// (0x00017e03) bg_vkb2_func_pane_cp05_ParamLimits

0x958b,	// (0x00017e03) bg_vkb2_func_pane_cp05

0x958b,	// (0x00017e03) bg_vkb2_func_pane_cp03

0x958b,	// (0x00017e03) bg_vkb2_func_pane_cp04

0x958b,	// (0x00017e03) bg_vkb2_func_pane_cp10_ParamLimits

0x958b,	// (0x00017e03) bg_vkb2_func_pane_cp10

0x5f7c,	// (0x000147f4) bg_vkb2_func_pane_cp08

0x5f4f,	// (0x000147c7) bg_vkb2_func_pane_cp06

0x5f5b,	// (0x000147d3) bg_vkb2_func_pane_cp07

0xd46e,	// (0x0001bce6) bg_vkb2_func_pane_cp11_ParamLimits

0xd46e,	// (0x0001bce6) bg_vkb2_func_pane_cp11

0xd483,	// (0x0001bcfb) bg_vkb2_func_pane_cp12_ParamLimits

0xd483,	// (0x0001bcfb) bg_vkb2_func_pane_cp12

0x9516,	// (0x00017d8e) bg_vkb2_func_pane_cp09

0xcd61,	// (0x0001b5d9) bg_vkb2_func_pane_g1

0xa1ca,	// (0x00018a42) bg_vkb2_func_pane_g2

0xcd69,	// (0x0001b5e1) bg_vkb2_func_pane_g3

0xcd71,	// (0x0001b5e9) bg_vkb2_func_pane_g4

0xcffb,	// (0x0001b873) bg_vkb2_func_pane_g5

0xcd89,	// (0x0001b601) bg_vkb2_func_pane_g6

0xcd91,	// (0x0001b609) bg_vkb2_func_pane_g7

0xcd81,	// (0x0001b5f9) bg_vkb2_func_pane_g8

0xa1aa,	// (0x00018a22) bg_vkb2_func_pane_g9

0x0008,

0xfa14,	// (0x0001e28c) bg_vkb2_func_pane_g

0x62b8,	// (0x00014b30) blid2_tripm_pane_g6_ParamLimits

0x62b8,	// (0x00014b30) blid2_tripm_pane_g6

0xcad7,	// (0x0001b34f) mp4_progress_pane_g1

0x632f,	// (0x00014ba7) blid2_tripm_values_pane_ParamLimits

0x632f,	// (0x00014ba7) blid2_tripm_values_pane

0x6424,	// (0x00014c9c) blid2_tripm_values_pane_t1

0x6432,	// (0x00014caa) blid2_tripm_values_pane_t2

0xd598,	// (0x0001be10) blid2_tripm_values_pane_t3

0x6440,	// (0x00014cb8) blid2_tripm_values_pane_t4

0x644e,	// (0x00014cc6) blid2_tripm_values_pane_t5

0x645c,	// (0x00014cd4) blid2_tripm_values_pane_t6

0xd5a6,	// (0x0001be1e) blid2_tripm_values_pane_t7

0x646a,	// (0x00014ce2) blid2_tripm_values_pane_t8

0x6478,	// (0x00014cf0) blid2_tripm_values_pane_t9

0x0008,

0xfa27,	// (0x0001e29f) blid2_tripm_values_pane_t

0x119d,	// (0x0000fa15) call_video_pane_t1_ParamLimits

0x11b7,	// (0x0000fa2f) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x0001da32) call_video_pane_t_ParamLimits

0x295f,	// (0x000111d7) msg_header_pane_g1_ParamLimits

0xaadc,	// (0x00019354) msg_header_pane_g2_ParamLimits

0xaadc,	// (0x00019354) msg_header_pane_g2

0x0001,

0xf3aa,	// (0x0001dc22) msg_header_pane_g_ParamLimits

0xf3aa,	// (0x0001dc22) msg_header_pane_g

0x9d75,	// (0x000185ed) main_clock2_pane_ParamLimits

0x4306,	// (0x00012b7e) grid_clock2_toolbar_pane_ParamLimits

0x4306,	// (0x00012b7e) grid_clock2_toolbar_pane

0x4306,	// (0x00012b7e) listscroll_clock2_pane_ParamLimits

0x4306,	// (0x00012b7e) listscroll_clock2_pane

0x43e2,	// (0x00012c5a) main_clock2_pane_t3_ParamLimits

0x43e2,	// (0x00012c5a) main_clock2_pane_t3

0x4403,	// (0x00012c7b) main_clock2_pane_t4_ParamLimits

0x4403,	// (0x00012c7b) main_clock2_pane_t4

0xd5b4,	// (0x0001be2c) cell_clock2_toolbar_pane

0xd5bc,	// (0x0001be34) cell_clock2_toolbar_pane_cp01

0xd5bc,	// (0x0001be34) cell_clock2_toolbar_pane_cp02

0xd5c4,	// (0x0001be3c) cell_clock2_toolbar_pane_cp03

0xd5cc,	// (0x0001be44) list_clock2_pane

0xa7e9,	// (0x00019061) scroll_pane_cp10

0xd5d4,	// (0x0001be4c) list_single_clock2_pane_ParamLimits

0xd5d4,	// (0x0001be4c) list_single_clock2_pane

0x9f96,	// (0x0001880e) list_highlight_pane_cp08

0xd5e1,	// (0x0001be59) list_single_clock2_pane_t1

0xd5ef,	// (0x0001be67) list_single_clock2_pane_t2

0x0001,

0xfa3a,	// (0x0001e2b2) list_single_clock2_pane_t

0x9516,	// (0x00017d8e) bg_button_pane_cp10

0xd5fd,	// (0x0001be75) cell_clock2_toolbar_pane_g1

0x29fe,	// (0x00011276) aid_main_viewer_pane_g1_ParamLimits

0x29fe,	// (0x00011276) aid_main_viewer_pane_g1

0x2a0c,	// (0x00011284) aid_main_viewer_pane_g2_ParamLimits

0x2a0c,	// (0x00011284) aid_main_viewer_pane_g2

0x2a1a,	// (0x00011292) aid_main_viewer_pane_g3_ParamLimits

0x2a1a,	// (0x00011292) aid_main_viewer_pane_g3

0x2a29,	// (0x000112a1) aid_main_viewer_pane_g4_ParamLimits

0x2a29,	// (0x000112a1) aid_main_viewer_pane_g4

0x0003,

0xf3bb,	// (0x0001dc33) aid_main_viewer_pane_g_ParamLimits

0xf3bb,	// (0x0001dc33) aid_main_viewer_pane_g

0x3314,	// (0x00011b8c) main_calc_pane_ParamLimits

0x3328,	// (0x00011ba0) main_dialer2_pane_ParamLimits

0x9516,	// (0x00017d8e) main_cam6_pane

0x9516,	// (0x00017d8e) main_vid6_pane

0x4312,	// (0x00012b8a) listscroll_gen_pane_cp06_ParamLimits

0x4312,	// (0x00012b8a) listscroll_gen_pane_cp06

0x4424,	// (0x00012c9c) main_clock2_pane_t5_ParamLimits

0x4424,	// (0x00012c9c) main_clock2_pane_t5

0x4482,	// (0x00012cfa) aid_call2_pane_cp10_ParamLimits

0x4494,	// (0x00012d0c) aid_call_pane_cp10_ParamLimits

0xa858,	// (0x000190d0) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa858,	// (0x000190d0) popup_clock_analogue_window_cp10_g2_ParamLimits

0x44a6,	// (0x00012d1e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x44a6,	// (0x00012d1e) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa858,	// (0x000190d0) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6cc,	// (0x0001df44) popup_clock_analogue_window_cp10_g_ParamLimits

0x44bc,	// (0x00012d34) popup_clock_analogue_window_cp10_t1_ParamLimits

0xcb41,	// (0x0001b3b9) cell_dialer2_keypad_pane_g2_ParamLimits

0xcb41,	// (0x0001b3b9) cell_dialer2_keypad_pane_g2

0x0001,

0xf7ac,	// (0x0001e024) cell_dialer2_keypad_pane_g_ParamLimits

0xf7ac,	// (0x0001e024) cell_dialer2_keypad_pane_g

0x9d07,	// (0x0001857f) cell_dialer2_keypad_pane_t1

0x5600,	// (0x00013e78) main_cset_text2_pane_ParamLimits

0x5600,	// (0x00013e78) main_cset_text2_pane

0xd2a4,	// (0x0001bb1c) area_vitu2_query_pane_g1_ParamLimits

0x5ee6,	// (0x0001475e) area_vitu2_query_pane_g2_ParamLimits

0xf957,	// (0x0001e1cf) area_vitu2_query_pane_g_ParamLimits

0xd328,	// (0x0001bba0) area_vitu2_query_pane_t7_ParamLimits

0xd328,	// (0x0001bba0) area_vitu2_query_pane_t7

0x5f4f,	// (0x000147c7) bg_button_pane_cp018_ParamLimits

0x5f5b,	// (0x000147d3) bg_button_pane_cp021_ParamLimits

0x5f67,	// (0x000147df) bg_button_pane_cp022_ParamLimits

0x5f7c,	// (0x000147f4) bg_vkb2_func_pane_cp08_ParamLimits

0x5f4f,	// (0x000147c7) bg_vkb2_func_pane_cp06_ParamLimits

0x5f5b,	// (0x000147d3) bg_vkb2_func_pane_cp07_ParamLimits

0x5f92,	// (0x0001480a) input_focus_pane_cp09_ParamLimits

0xd605,	// (0x0001be7d) cam6_autofocus_pane_ParamLimits

0xd605,	// (0x0001be7d) cam6_autofocus_pane

0x6486,	// (0x00014cfe) cam6_image_uncrop_pane_ParamLimits

0x6486,	// (0x00014cfe) cam6_image_uncrop_pane

0x6496,	// (0x00014d0e) cam6_indi_pane_ParamLimits

0x6496,	// (0x00014d0e) cam6_indi_pane

0x64ac,	// (0x00014d24) cam6_mode_pane_ParamLimits

0x64ac,	// (0x00014d24) cam6_mode_pane

0x64be,	// (0x00014d36) cam6_timer_pane_ParamLimits

0x64be,	// (0x00014d36) cam6_timer_pane

0x64ca,	// (0x00014d42) cam6_zoom_pane_ParamLimits

0x64ca,	// (0x00014d42) cam6_zoom_pane

0x64d8,	// (0x00014d50) cam6_mode_pane_g1_ParamLimits

0x64d8,	// (0x00014d50) cam6_mode_pane_g1

0x64e8,	// (0x00014d60) cam6_mode_pane_g2_ParamLimits

0x64e8,	// (0x00014d60) cam6_mode_pane_g2

0x64f8,	// (0x00014d70) cam6_mode_pane_g3_ParamLimits

0x64f8,	// (0x00014d70) cam6_mode_pane_g3

0x6508,	// (0x00014d80) cam6_mode_pane_g4_ParamLimits

0x6508,	// (0x00014d80) cam6_mode_pane_g4

0x0003,

0xfa3f,	// (0x0001e2b7) cam6_mode_pane_g_ParamLimits

0xfa3f,	// (0x0001e2b7) cam6_mode_pane_g

0xbd7d,	// (0x0001a5f5) bg_tb_trans_pane_cp08_ParamLimits

0xbd7d,	// (0x0001a5f5) bg_tb_trans_pane_cp08

0xd613,	// (0x0001be8b) cam6_battery_pane_ParamLimits

0xd613,	// (0x0001be8b) cam6_battery_pane

0xd629,	// (0x0001bea1) cam6_indi_pane_g1_ParamLimits

0xd629,	// (0x0001bea1) cam6_indi_pane_g1

0xd63b,	// (0x0001beb3) cam6_indi_pane_g2_ParamLimits

0xd63b,	// (0x0001beb3) cam6_indi_pane_g2

0xd64d,	// (0x0001bec5) cam6_indi_pane_g3_ParamLimits

0xd64d,	// (0x0001bec5) cam6_indi_pane_g3

0x0002,

0xfa48,	// (0x0001e2c0) cam6_indi_pane_g_ParamLimits

0xfa48,	// (0x0001e2c0) cam6_indi_pane_g

0xd65f,	// (0x0001bed7) cam6_indi_pane_t1_ParamLimits

0xd65f,	// (0x0001bed7) cam6_indi_pane_t1

0x4f3b,	// (0x000137b3) cam6_autofocus_pane_g1

0x4f43,	// (0x000137bb) cam6_autofocus_pane_g2

0x4f4b,	// (0x000137c3) cam6_autofocus_pane_g3

0x4f53,	// (0x000137cb) cam6_autofocus_pane_g4

0x0003,

0xfa4f,	// (0x0001e2c7) cam6_autofocus_pane_g

0xd685,	// (0x0001befd) cam6_timer_pane_g1

0xd68d,	// (0x0001bf05) cam6_timer_pane_t1

0xd69b,	// (0x0001bf13) cam6_zoom_cont_pane

0xd6a3,	// (0x0001bf1b) cam6_zoom_pane_g1

0xd6ac,	// (0x0001bf24) cam6_zoom_pane_g2

0x6518,	// (0x00014d90) cam6_zoom_pane_g3

0x0002,

0xfa58,	// (0x0001e2d0) cam6_zoom_pane_g

0x9cfd,	// (0x00018575) cam6_battery_pane_g1

0x9cfd,	// (0x00018575) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x0001d904) cam6_battery_pane_g

0xd6a3,	// (0x0001bf1b) cam6_zoom_cont_pane_g1

0xd6ac,	// (0x0001bf24) cam6_zoom_cont_pane_g2

0xd6b5,	// (0x0001bf2d) cam6_zoom_cont_pane_g3

0x0002,

0xfa5f,	// (0x0001e2d7) cam6_zoom_cont_pane_g

0x6536,	// (0x00014dae) cam6_mode_pane_cp_ParamLimits

0x6536,	// (0x00014dae) cam6_mode_pane_cp

0x6548,	// (0x00014dc0) cam6_zoom_pane_cp_ParamLimits

0x6548,	// (0x00014dc0) cam6_zoom_pane_cp

0x6556,	// (0x00014dce) vid6_image_uncrop_cif_pane_ParamLimits

0x6556,	// (0x00014dce) vid6_image_uncrop_cif_pane

0x6566,	// (0x00014dde) vid6_image_uncrop_nhd_pane_ParamLimits

0x6566,	// (0x00014dde) vid6_image_uncrop_nhd_pane

0x6575,	// (0x00014ded) vid6_image_uncrop_vga_pane_ParamLimits

0x6575,	// (0x00014ded) vid6_image_uncrop_vga_pane

0x6584,	// (0x00014dfc) vid6_image_uncrop_wvga_pane_ParamLimits

0x6584,	// (0x00014dfc) vid6_image_uncrop_wvga_pane

0x6593,	// (0x00014e0b) vid6_indi_pane_ParamLimits

0x6593,	// (0x00014e0b) vid6_indi_pane

0xbd7d,	// (0x0001a5f5) bg_tb_trans_pane_cp09_ParamLimits

0xbd7d,	// (0x0001a5f5) bg_tb_trans_pane_cp09

0xd6cd,	// (0x0001bf45) cam6_battery_pane_cp_ParamLimits

0xd6cd,	// (0x0001bf45) cam6_battery_pane_cp

0xd6d9,	// (0x0001bf51) vid6_indi_pane_g1_ParamLimits

0xd6d9,	// (0x0001bf51) vid6_indi_pane_g1

0xd6eb,	// (0x0001bf63) vid6_indi_pane_g2_ParamLimits

0xd6eb,	// (0x0001bf63) vid6_indi_pane_g2

0xd6fd,	// (0x0001bf75) vid6_indi_pane_g3_ParamLimits

0xd6fd,	// (0x0001bf75) vid6_indi_pane_g3

0xd714,	// (0x0001bf8c) vid6_indi_pane_g4_ParamLimits

0xd714,	// (0x0001bf8c) vid6_indi_pane_g4

0xd72b,	// (0x0001bfa3) vid6_indi_pane_g5_ParamLimits

0xd72b,	// (0x0001bfa3) vid6_indi_pane_g5

0x0004,

0xfa66,	// (0x0001e2de) vid6_indi_pane_g_ParamLimits

0xfa66,	// (0x0001e2de) vid6_indi_pane_g

0xd745,	// (0x0001bfbd) vid6_indi_pane_t1_ParamLimits

0xd745,	// (0x0001bfbd) vid6_indi_pane_t1

0xd75b,	// (0x0001bfd3) vid6_indi_pane_t2_ParamLimits

0xd75b,	// (0x0001bfd3) vid6_indi_pane_t2

0xd783,	// (0x0001bffb) vid6_indi_pane_t3_ParamLimits

0xd783,	// (0x0001bffb) vid6_indi_pane_t3

0xd7ab,	// (0x0001c023) vid6_indi_pane_t4_ParamLimits

0xd7ab,	// (0x0001c023) vid6_indi_pane_t4

0x0003,

0xfa71,	// (0x0001e2e9) vid6_indi_pane_t_ParamLimits

0xfa71,	// (0x0001e2e9) vid6_indi_pane_t

0xd7cf,	// (0x0001c047) wait_bar_pane_cp08

0x65ab,	// (0x00014e23) main_cset_text2_pane_t1_ParamLimits

0x65ab,	// (0x00014e23) main_cset_text2_pane_t1

0x6521,	// (0x00014d99) listscroll_gen_pane_cp06_t1_ParamLimits

0x6521,	// (0x00014d99) listscroll_gen_pane_cp06_t1

0x9516,	// (0x00017d8e) main_cam6_set_pane

0x9cb7,	// (0x0001852f) bg_tb_trans_pane_cp06_ParamLimits

0xcc0b,	// (0x0001b483) cam4_indicators_pane_g1_ParamLimits

0xcc1c,	// (0x0001b494) cam4_indicators_pane_g2_ParamLimits

0xf7e9,	// (0x0001e061) cam4_indicators_pane_g_ParamLimits

0xcc34,	// (0x0001b4ac) cam4_indicators_pane_t1_ParamLimits

0x958b,	// (0x00017e03) bg_tb_trans_pane_cp07_ParamLimits

0xcc62,	// (0x0001b4da) vid4_indicators_pane_g1_ParamLimits

0xcc78,	// (0x0001b4f0) vid4_indicators_pane_g2_ParamLimits

0xcc8c,	// (0x0001b504) vid4_indicators_pane_g3_ParamLimits

0xcc9f,	// (0x0001b517) vid4_indicators_pane_g4_ParamLimits

0xf7fb,	// (0x0001e073) vid4_indicators_pane_g_ParamLimits

0xccbd,	// (0x0001b535) vid4_indicators_pane_t1_ParamLimits

0xd3a5,	// (0x0001bc1d) vid4_progress_pane_g1_ParamLimits

0xd3b5,	// (0x0001bc2d) vid4_progress_pane_g2_ParamLimits

0x60d3,	// (0x0001494b) vid4_progress_pane_g3_ParamLimits

0xd3c5,	// (0x0001bc3d) vid4_progress_pane_g4_ParamLimits

0xf9a2,	// (0x0001e21a) vid4_progress_pane_g_ParamLimits

0x60e5,	// (0x0001495d) vid4_progress_pane_t1_ParamLimits

0xd3e3,	// (0x0001bc5b) vid4_progress_pane_t2_ParamLimits

0xd3fc,	// (0x0001bc74) vid4_progress_pane_t3_ParamLimits

0xf9ad,	// (0x0001e225) vid4_progress_pane_t_ParamLimits

0x60ff,	// (0x00014977) wait_bar_pane_cp07_ParamLimits

0x65cc,	// (0x00014e44) main_cam6_set_pane_g2_ParamLimits

0x65cc,	// (0x00014e44) main_cam6_set_pane_g2

0x65f2,	// (0x00014e6a) main_cset6_listscroll_pane_ParamLimits

0x65f2,	// (0x00014e6a) main_cset6_listscroll_pane

0x6610,	// (0x00014e88) main_cset6_slider_pane_ParamLimits

0x6610,	// (0x00014e88) main_cset6_slider_pane

0x6626,	// (0x00014e9e) main_cset6_text2_pane_ParamLimits

0x6626,	// (0x00014e9e) main_cset6_text2_pane

0xd7de,	// (0x0001c056) main_cset6_text_pane

0xd7e6,	// (0x0001c05e) main_cset_list_pane_copy1_ParamLimits

0xd7e6,	// (0x0001c05e) main_cset_list_pane_copy1

0xd7f6,	// (0x0001c06e) scroll_pane_cp028_copy1

0x6634,	// (0x00014eac) cset_list_set_pane_copy1

0x6648,	// (0x00014ec0) aid_position_infowindow_above_copy1

0x6650,	// (0x00014ec8) aid_position_infowindow_below_copy1

0x6658,	// (0x00014ed0) cset_list_set_pane_g1_copy1

0x6660,	// (0x00014ed8) cset_list_set_pane_g3_copy1_ParamLimits

0x6660,	// (0x00014ed8) cset_list_set_pane_g3_copy1

0x666f,	// (0x00014ee7) cset_list_set_pane_t1_copy1_ParamLimits

0x666f,	// (0x00014ee7) cset_list_set_pane_t1_copy1

0x958b,	// (0x00017e03) list_highlight_pane_cp021_copy1_ParamLimits

0x958b,	// (0x00017e03) list_highlight_pane_cp021_copy1

0xd7ff,	// (0x0001c077) cset6_slider_pane_ParamLimits

0xd7ff,	// (0x0001c077) cset6_slider_pane

0xd82b,	// (0x0001c0a3) main_cset6_slider_pane_g1_ParamLimits

0xd82b,	// (0x0001c0a3) main_cset6_slider_pane_g1

0x6684,	// (0x00014efc) main_cset6_slider_pane_g2_ParamLimits

0x6684,	// (0x00014efc) main_cset6_slider_pane_g2

0xd853,	// (0x0001c0cb) main_cset6_slider_pane_g3_ParamLimits

0xd853,	// (0x0001c0cb) main_cset6_slider_pane_g3

0x66ac,	// (0x00014f24) main_cset6_slider_pane_g4_ParamLimits

0x66ac,	// (0x00014f24) main_cset6_slider_pane_g4

0x66b8,	// (0x00014f30) main_cset6_slider_pane_g5_ParamLimits

0x66b8,	// (0x00014f30) main_cset6_slider_pane_g5

0xceba,	// (0x0001b732) main_cset6_slider_pane_g7_ParamLimits

0xceba,	// (0x0001b732) main_cset6_slider_pane_g7

0xcec6,	// (0x0001b73e) main_cset6_slider_pane_g8_ParamLimits

0xcec6,	// (0x0001b73e) main_cset6_slider_pane_g8

0x56a8,	// (0x00013f20) main_cset6_slider_pane_g9_ParamLimits

0x56a8,	// (0x00013f20) main_cset6_slider_pane_g9

0x56b4,	// (0x00013f2c) main_cset6_slider_pane_g10_ParamLimits

0x56b4,	// (0x00013f2c) main_cset6_slider_pane_g10

0x56c0,	// (0x00013f38) main_cset6_slider_pane_g11_ParamLimits

0x56c0,	// (0x00013f38) main_cset6_slider_pane_g11

0x56cc,	// (0x00013f44) main_cset6_slider_pane_g12_ParamLimits

0x56cc,	// (0x00013f44) main_cset6_slider_pane_g12

0x56d8,	// (0x00013f50) main_cset6_slider_pane_g13_ParamLimits

0x56d8,	// (0x00013f50) main_cset6_slider_pane_g13

0x56e4,	// (0x00013f5c) main_cset6_slider_pane_g14_ParamLimits

0x56e4,	// (0x00013f5c) main_cset6_slider_pane_g14

0x66c6,	// (0x00014f3e) main_cset6_slider_pane_g15_ParamLimits

0x66c6,	// (0x00014f3e) main_cset6_slider_pane_g15

0x5708,	// (0x00013f80) main_cset6_slider_pane_g16_ParamLimits

0x5708,	// (0x00013f80) main_cset6_slider_pane_g16

0x5716,	// (0x00013f8e) main_cset6_slider_pane_g17_ParamLimits

0x5716,	// (0x00013f8e) main_cset6_slider_pane_g17

0x0011,

0xfa7a,	// (0x0001e2f2) main_cset6_slider_pane_g_ParamLimits

0xfa7a,	// (0x0001e2f2) main_cset6_slider_pane_g

0xd85f,	// (0x0001c0d7) main_cset6_slider_pane_t1_ParamLimits

0xd85f,	// (0x0001c0d7) main_cset6_slider_pane_t1

0x66f6,	// (0x00014f6e) main_cset6_slider_pane_t2_ParamLimits

0x66f6,	// (0x00014f6e) main_cset6_slider_pane_t2

0x6721,	// (0x00014f99) main_cset6_slider_pane_t3_ParamLimits

0x6721,	// (0x00014f99) main_cset6_slider_pane_t3

0x674c,	// (0x00014fc4) main_cset6_slider_pane_t4_ParamLimits

0x674c,	// (0x00014fc4) main_cset6_slider_pane_t4

0x6777,	// (0x00014fef) main_cset6_slider_pane_t5_ParamLimits

0x6777,	// (0x00014fef) main_cset6_slider_pane_t5

0xd8a0,	// (0x0001c118) main_cset6_slider_pane_t7_ParamLimits

0xd8a0,	// (0x0001c118) main_cset6_slider_pane_t7

0x67a4,	// (0x0001501c) main_cset6_slider_pane_t8_ParamLimits

0x67a4,	// (0x0001501c) main_cset6_slider_pane_t8

0x67c8,	// (0x00015040) main_cset6_slider_pane_t9_ParamLimits

0x67c8,	// (0x00015040) main_cset6_slider_pane_t9

0x67ec,	// (0x00015064) main_cset6_slider_pane_t10_ParamLimits

0x67ec,	// (0x00015064) main_cset6_slider_pane_t10

0x6810,	// (0x00015088) main_cset6_slider_pane_t11_ParamLimits

0x6810,	// (0x00015088) main_cset6_slider_pane_t11

0xd8d6,	// (0x0001c14e) main_cset6_slider_pane_t14_ParamLimits

0xd8d6,	// (0x0001c14e) main_cset6_slider_pane_t14

0xd90f,	// (0x0001c187) main_cset6_slider_pane_t15_ParamLimits

0xd90f,	// (0x0001c187) main_cset6_slider_pane_t15

0x000b,

0xfa9f,	// (0x0001e317) main_cset6_slider_pane_t_ParamLimits

0xfa9f,	// (0x0001e317) main_cset6_slider_pane_t

0xcf91,	// (0x0001b809) cset_slider_pane_g1_copy1

0xcf9a,	// (0x0001b812) cset_slider_pane_g2_copy1

0xcfa3,	// (0x0001b81b) cset_slider_pane_g3_copy1

0x9516,	// (0x00017d8e) bg_popup_sub_pane_cp011_copy1

0xd951,	// (0x0001c1c9) main_cset_text_pane_g1_copy1

0xd06a,	// (0x0001b8e2) main_cset_text_pane_t1_copy1

0xd078,	// (0x0001b8f0) main_cset_text_pane_t2_copy1

0xd086,	// (0x0001b8fe) main_cset_text_pane_t3_copy1

0xd094,	// (0x0001b90c) main_cset_text_pane_t4_copy1

0xd0a2,	// (0x0001b91a) main_cset_text_pane_t5_copy1

0xd959,	// (0x0001c1d1) main_cset_text_pane_t6_copy1

0xd967,	// (0x0001c1df) main_cset_text_pane_t7_copy1

0x65ab,	// (0x00014e23) main_cset_text2_pane_t1_copy1

0x958b,	// (0x00017e03) main_ncimui_pane

0x35b6,	// (0x00011e2e) popup_query_ncimui_window_ParamLimits

0x35b6,	// (0x00011e2e) popup_query_ncimui_window

0xc366,	// (0x0001abde) field_cale_ev2_pane_g4_ParamLimits

0xc366,	// (0x0001abde) field_cale_ev2_pane_g4

0x489b,	// (0x00013113) cell_video_dialer_keypad_pane_g2_ParamLimits

0x489b,	// (0x00013113) cell_video_dialer_keypad_pane_g2

0x0001,

0xf783,	// (0x0001dffb) cell_video_dialer_keypad_pane_g_ParamLimits

0xf783,	// (0x0001dffb) cell_video_dialer_keypad_pane_g

0x48b3,	// (0x0001312b) cell_video_dialer_keypad_pane_t1

0x9516,	// (0x00017d8e) bg_popup_window_pane_cp012

0xa6e2,	// (0x00018f5a) heading_pane_cp06

0xd993,	// (0x0001c20b) ncim_query_content_pane

0x9516,	// (0x00017d8e) bg_popup_heading_pane_cp01

0xd99b,	// (0x0001c213) ncim_heading_pane_t1

0xd9a9,	// (0x0001c221) ncim_indicator_popup_pane

0xd9bb,	// (0x0001c233) ncim_query_button_pane

0xd9d1,	// (0x0001c249) ncim_query_content_pane_t1

0xd9e3,	// (0x0001c25b) ncim_query_content_pane_t2

0x0005,

0xfae3,	// (0x0001e35b) ncim_query_content_pane_t

0xda1d,	// (0x0001c295) ncim_query_list_pane

0xda2f,	// (0x0001c2a7) ncim_query_popup_pane

0xd9a9,	// (0x0001c221) ncim_indicator_popup_pane_ParamLimits

0x697c,	// (0x000151f4) ncim_query_content_pane_g1_ParamLimits

0x697c,	// (0x000151f4) ncim_query_content_pane_g1

0xd9d1,	// (0x0001c249) ncim_query_content_pane_t1_ParamLimits

0xd9e3,	// (0x0001c25b) ncim_query_content_pane_t2_ParamLimits

0x6988,	// (0x00015200) ncim_query_content_pane_t3_ParamLimits

0x6988,	// (0x00015200) ncim_query_content_pane_t3

0x69b0,	// (0x00015228) ncim_query_content_pane_t4_ParamLimits

0x69b0,	// (0x00015228) ncim_query_content_pane_t4

0x69d8,	// (0x00015250) ncim_query_content_pane_t5_ParamLimits

0x69d8,	// (0x00015250) ncim_query_content_pane_t5

0xd9f5,	// (0x0001c26d) ncim_query_content_pane_t6_ParamLimits

0xd9f5,	// (0x0001c26d) ncim_query_content_pane_t6

0xfae3,	// (0x0001e35b) ncim_query_content_pane_t_ParamLimits

0xda1d,	// (0x0001c295) ncim_query_list_pane_ParamLimits

0xda2f,	// (0x0001c2a7) ncim_query_popup_pane_ParamLimits

0xda43,	// (0x0001c2bb) wait_bar_pane_cp04

0x9516,	// (0x00017d8e) input_focus_pane_cp011

0xda4b,	// (0x0001c2c3) ncim_query_popup_pane_t1

0xda59,	// (0x0001c2d1) ncim_list_query_list_pane_ParamLimits

0xda59,	// (0x0001c2d1) ncim_list_query_list_pane

0x9516,	// (0x00017d8e) bg_button_pane_cp027

0xda6c,	// (0x0001c2e4) ncim_query_button_pane_g1

0x9516,	// (0x00017d8e) list_highlight_pane_cp012

0xda76,	// (0x0001c2ee) ncim_list_query_list_pane_g1

0xda7e,	// (0x0001c2f6) ncim_list_query_list_pane_t1

0xcc28,	// (0x0001b4a0) cam4_indicators_pane_g3_ParamLimits

0xcc28,	// (0x0001b4a0) cam4_indicators_pane_g3

0xccab,	// (0x0001b523) vid4_indicators_pane_g5_ParamLimits

0xccab,	// (0x0001b523) vid4_indicators_pane_g5

0xd3d4,	// (0x0001bc4c) vid4_progress_pane_g5_ParamLimits

0xd3d4,	// (0x0001bc4c) vid4_progress_pane_g5

0x6867,	// (0x000150df) main_ncimui_pane_g1

0x68d0,	// (0x00015148) ncimui_group_query_pane_ParamLimits

0x68d0,	// (0x00015148) ncimui_group_query_pane

0x6918,	// (0x00015190) ncimui_list_pane_ParamLimits

0x6918,	// (0x00015190) ncimui_list_pane

0x693f,	// (0x000151b7) ncimui_text_pane_ParamLimits

0x693f,	// (0x000151b7) ncimui_text_pane

0x6a00,	// (0x00015278) ncimui_text_pane_t1_ParamLimits

0x6a00,	// (0x00015278) ncimui_text_pane_t1

0xda8c,	// (0x0001c304) ncimui_list_single_graphic_pane_ParamLimits

0xda8c,	// (0x0001c304) ncimui_list_single_graphic_pane

0x6a1e,	// (0x00015296) ncimui_query_pane_ParamLimits

0x6a1e,	// (0x00015296) ncimui_query_pane

0x9516,	// (0x00017d8e) list_highlight_pane_cp013

0xda9c,	// (0x0001c314) ncim_list_query_list_pane_t1_copy1

0xda76,	// (0x0001c2ee) ncim_list_single_graphic_pane_g1

0x6a31,	// (0x000152a9) ncim_query_button_pane_cp01

0x6a3d,	// (0x000152b5) ncim_query_entry_pane_ParamLimits

0x6a3d,	// (0x000152b5) ncim_query_entry_pane

0x6a50,	// (0x000152c8) ncimui_query_pane_g1

0x6a5c,	// (0x000152d4) ncimui_query_pane_t1_ParamLimits

0x6a5c,	// (0x000152d4) ncimui_query_pane_t1

0x958b,	// (0x00017e03) input_focus_pane_cp012

0xdaaa,	// (0x0001c322) ncim_query_entry_pane_t1

0x9d75,	// (0x000185ed) main_im_pane_ParamLimits

0x958b,	// (0x00017e03) main_mobtv_pane_ParamLimits

0x958b,	// (0x00017e03) main_mobtv_pane

0x66de,	// (0x00014f56) main_cset6_slider_pane_g18_ParamLimits

0x66de,	// (0x00014f56) main_cset6_slider_pane_g18

0x66ea,	// (0x00014f62) main_cset6_slider_pane_g19_ParamLimits

0x66ea,	// (0x00014f62) main_cset6_slider_pane_g19

0x9cd3,	// (0x0001854b) bg_main_mobtv_pane_ParamLimits

0x9cd3,	// (0x0001854b) bg_main_mobtv_pane

0x6a75,	// (0x000152ed) main_mobtv_info_pane

0x6a80,	// (0x000152f8) main_mobtv_loading_pane_ParamLimits

0x6a80,	// (0x000152f8) main_mobtv_loading_pane

0xdabc,	// (0x0001c334) main_mobtv_pg_channel_list_pane

0xdac6,	// (0x0001c33e) main_mobtv_pg_hdr_pane

0x6a8d,	// (0x00015305) main_mobtv_programe_curr_pane_ParamLimits

0x6a8d,	// (0x00015305) main_mobtv_programe_curr_pane

0x6a9a,	// (0x00015312) main_mobtv_programe_next_pane_ParamLimits

0x6a9a,	// (0x00015312) main_mobtv_programe_next_pane

0xdacf,	// (0x0001c347) popup_mobtv_noti_window

0x9cfd,	// (0x00018575) main_tv_pg_hdr_pane_g1

0xdad9,	// (0x0001c351) main_tv_pg_hdr_pane_g2

0xdae1,	// (0x0001c359) main_tv_pg_hdr_pane_g3

0xdae9,	// (0x0001c361) main_tv_pg_hdr_pane_g4

0xdaf1,	// (0x0001c369) main_tv_pg_hdr_pane_g5

0xdafb,	// (0x0001c373) main_tv_pg_hdr_pane_g6

0xdb05,	// (0x0001c37d) main_tv_pg_hdr_pane_g7

0xdb0f,	// (0x0001c387) main_tv_pg_hdr_pane_g8

0xdb19,	// (0x0001c391) main_tv_pg_hdr_pane_g9

0xdb23,	// (0x0001c39b) main_tv_pg_hdr_pane_g10

0xdb2d,	// (0x0001c3a5) main_tv_pg_hdr_pane_g11

0x000a,

0xfaf0,	// (0x0001e368) main_tv_pg_hdr_pane_g

0xdb37,	// (0x0001c3af) main_tv_pg_hdr_pane_t1

0xdb45,	// (0x0001c3bd) main_tv_pg_hdr_pane_t2

0xdb53,	// (0x0001c3cb) main_tv_pg_hdr_pane_t3

0xdb63,	// (0x0001c3db) main_tv_pg_hdr_pane_t4

0xdb73,	// (0x0001c3eb) main_tv_pg_hdr_pane_t5

0x0004,

0xfb07,	// (0x0001e37f) main_tv_pg_hdr_pane_t

0xdb83,	// (0x0001c3fb) single_mobtv_pg_channel_pane_ParamLimits

0xdb83,	// (0x0001c3fb) single_mobtv_pg_channel_pane

0xdb95,	// (0x0001c40d) single_mobtv_pg_channel_table_pane

0xdb9e,	// (0x0001c416) single_mobtv_pg_channel_thumb_pane

0xdba7,	// (0x0001c41f) single_tv_pg_channel_pane_g1

0xdbb0,	// (0x0001c428) single_tv_pg_channel_pane_g2

0x0001,

0xfb12,	// (0x0001e38a) single_tv_pg_channel_pane_g

0x9cb7,	// (0x0001852f) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x9cb7,	// (0x0001852f) bg_single_mobtv_pg_channel_thumb_pane

0xdbb9,	// (0x0001c431) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdbb9,	// (0x0001c431) single_mobtv_pg_channel_thumb_pane_g1

0xdbc7,	// (0x0001c43f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdbc7,	// (0x0001c43f) single_mobtv_pg_channel_thumb_pane_g2

0xdbd3,	// (0x0001c44b) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdbd3,	// (0x0001c44b) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb17,	// (0x0001e38f) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb17,	// (0x0001e38f) single_mobtv_pg_channel_thumb_pane_g

0xdbdf,	// (0x0001c457) single_mobtv_pg_channel_thumb_pane_t1

0xdbed,	// (0x0001c465) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb1e,	// (0x0001e396) single_mobtv_pg_channel_thumb_pane_t

0x9cfd,	// (0x00018575) bg_single_mobtv_pg_channel_table_pane_g1

0x9cfd,	// (0x00018575) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x0001d904) bg_single_mobtv_pg_channel_table_pane_g

0xdbfb,	// (0x0001c473) single_mobtv_pg_channel_table_pane_t1

0xdc09,	// (0x0001c481) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb23,	// (0x0001e39b) single_mobtv_pg_channel_table_pane_t

0x6aaf,	// (0x00015327) main_mobtv_info_pane_g1_ParamLimits

0x6aaf,	// (0x00015327) main_mobtv_info_pane_g1

0x6acd,	// (0x00015345) main_mobtv_info_pane_t1_ParamLimits

0x6acd,	// (0x00015345) main_mobtv_info_pane_t1

0x6b45,	// (0x000153bd) main_mobtv_info_pane_t2_ParamLimits

0x6b45,	// (0x000153bd) main_mobtv_info_pane_t2

0x0002,

0xfb2d,	// (0x0001e3a5) main_mobtv_info_pane_t_ParamLimits

0xfb2d,	// (0x0001e3a5) main_mobtv_info_pane_t

0x6bd6,	// (0x0001544e) wait_bar_pane_cp05

0x6be8,	// (0x00015460) main_mobtv_loading_pane_g1_ParamLimits

0x6be8,	// (0x00015460) main_mobtv_loading_pane_g1

0x6bf9,	// (0x00015471) main_mobtv_loading_pane_g2_ParamLimits

0x6bf9,	// (0x00015471) main_mobtv_loading_pane_g2

0x6c05,	// (0x0001547d) main_mobtv_loading_pane_g3_ParamLimits

0x6c05,	// (0x0001547d) main_mobtv_loading_pane_g3

0x0002,

0xfb34,	// (0x0001e3ac) main_mobtv_loading_pane_g_ParamLimits

0xfb34,	// (0x0001e3ac) main_mobtv_loading_pane_g

0xdc17,	// (0x0001c48f) main_mobtv_loading_pane_t1_ParamLimits

0xdc17,	// (0x0001c48f) main_mobtv_loading_pane_t1

0xdc2f,	// (0x0001c4a7) main_mobtv_loading_pane_t2_ParamLimits

0xdc2f,	// (0x0001c4a7) main_mobtv_loading_pane_t2

0x0001,

0xfb3b,	// (0x0001e3b3) main_mobtv_loading_pane_t_ParamLimits

0xfb3b,	// (0x0001e3b3) main_mobtv_loading_pane_t

0x6c18,	// (0x00015490) wait_bar_pane_cp06_ParamLimits

0x6c18,	// (0x00015490) wait_bar_pane_cp06

0xdc53,	// (0x0001c4cb) main_mobtv_programe_curr_pane_t1

0xdc61,	// (0x0001c4d9) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb40,	// (0x0001e3b8) main_mobtv_programe_curr_pane_t

0xdc6f,	// (0x0001c4e7) main_mobtv_programe_next_pane_t1

0xdc7d,	// (0x0001c4f5) main_mobtv_programe_next_pane_t2

0xdc8b,	// (0x0001c503) main_mobtv_programe_next_pane_t3

0x0002,

0xfb45,	// (0x0001e3bd) main_mobtv_programe_next_pane_t

0x9516,	// (0x00017d8e) bg_popup_mobtv_noti_window_pane

0xdc99,	// (0x0001c511) popup_mobtv_noti_window_g1

0xdca1,	// (0x0001c519) popup_mobtv_noti_window_t1

0xdcaf,	// (0x0001c527) popup_mobtv_noti_window_t2

0x0001,

0xfb4c,	// (0x0001e3c4) popup_mobtv_noti_window_t

0x9cfd,	// (0x00018575) bg_popup_mobtv_noti_window_pane_g1

0x9516,	// (0x00017d8e) sc_clock_pane

0x9516,	// (0x00017d8e) main_fs_bigclock_pane

0x6319,	// (0x00014b91) blid2_tripm_pane_t4_ParamLimits

0x6319,	// (0x00014b91) blid2_tripm_pane_t4

0x9cb7,	// (0x0001852f) sc_clock_pane_g1_ParamLimits

0x9cb7,	// (0x0001852f) sc_clock_pane_g1

0x9d07,	// (0x0001857f) sc_clock_pane_t1_ParamLimits

0x9d07,	// (0x0001857f) sc_clock_pane_t1

0x9d07,	// (0x0001857f) sc_clock_pane_t2_ParamLimits

0x9d07,	// (0x0001857f) sc_clock_pane_t2

0x9d07,	// (0x0001857f) sc_clock_pane_t3_ParamLimits

0x9d07,	// (0x0001857f) sc_clock_pane_t3

0x0004,

0xfb51,	// (0x0001e3c9) sc_clock_pane_t_ParamLimits

0xfb51,	// (0x0001e3c9) sc_clock_pane_t

0x794d,	// (0x000161c5) main_fs_bigclock_indicator_pane_ParamLimits

0x794d,	// (0x000161c5) main_fs_bigclock_indicator_pane

0x6c98,	// (0x00015510) main_fs_bigclock_pane_g1_ParamLimits

0x6c98,	// (0x00015510) main_fs_bigclock_pane_g1

0x7959,	// (0x000161d1) main_fs_bigclock_pane_t1_ParamLimits

0x7959,	// (0x000161d1) main_fs_bigclock_pane_t1

0x796b,	// (0x000161e3) main_fs_bigclock_pane_t2_ParamLimits

0x796b,	// (0x000161e3) main_fs_bigclock_pane_t2

0x797f,	// (0x000161f7) main_fs_bigclock_pane_t3_ParamLimits

0x797f,	// (0x000161f7) main_fs_bigclock_pane_t3

0x0002,

0xfccf,	// (0x0001e547) main_fs_bigclock_pane_t_ParamLimits

0xfccf,	// (0x0001e547) main_fs_bigclock_pane_t

0xe64d,	// (0x0001cec5) main_fs_bigclock_indicator_pane_g1

0xd9c3,	// (0x0001c23b) ncim_query_content_pane_g2_ParamLimits

0xd9c3,	// (0x0001c23b) ncim_query_content_pane_g2

0x0001,

0xfade,	// (0x0001e356) ncim_query_content_pane_g_ParamLimits

0xfade,	// (0x0001e356) ncim_query_content_pane_g

0x9d07,	// (0x0001857f) sc_clock_pane_t4_ParamLimits

0x9d07,	// (0x0001857f) sc_clock_pane_t4

0x958b,	// (0x00017e03) main_radioblah_pane

0xcb91,	// (0x0001b409) cell_call4_button_pane_t1_copy1_ParamLimits

0xcb91,	// (0x0001b409) cell_call4_button_pane_t1_copy1

0x687f,	// (0x000150f7) main_ncimui_pane_t1_ParamLimits

0x687f,	// (0x000150f7) main_ncimui_pane_t1

0x6899,	// (0x00015111) main_ncimui_pane_t2_ParamLimits

0x6899,	// (0x00015111) main_ncimui_pane_t2

0x0002,

0xfad7,	// (0x0001e34f) main_ncimui_pane_t_ParamLimits

0xfad7,	// (0x0001e34f) main_ncimui_pane_t

0xaa0e,	// (0x00019286) main_radioblah_anim_pane_ParamLimits

0xaa0e,	// (0x00019286) main_radioblah_anim_pane

0xaa0e,	// (0x00019286) main_radioblah_info_pane_ParamLimits

0xaa0e,	// (0x00019286) main_radioblah_info_pane

0xa9fa,	// (0x00019272) main_radioblah_pane_t1_ParamLimits

0xa9fa,	// (0x00019272) main_radioblah_pane_t1

0xa9fa,	// (0x00019272) main_radioblah_pane_t2_ParamLimits

0xa9fa,	// (0x00019272) main_radioblah_pane_t2

0x0003,

0xfb72,	// (0x0001e3ea) main_radioblah_pane_t_ParamLimits

0xfb72,	// (0x0001e3ea) main_radioblah_pane_t

0x958b,	// (0x00017e03) main_radioblah_rocker_ctrl_pane_ParamLimits

0x958b,	// (0x00017e03) main_radioblah_rocker_ctrl_pane

0xbd69,	// (0x0001a5e1) main_radioblah_info_pane_t1_ParamLimits

0xbd69,	// (0x0001a5e1) main_radioblah_info_pane_t1

0xdced,	// (0x0001c565) main_radioblah_info_pane_t2_ParamLimits

0xdced,	// (0x0001c565) main_radioblah_info_pane_t2

0x0003,

0xfb7b,	// (0x0001e3f3) main_radioblah_info_pane_t_ParamLimits

0xfb7b,	// (0x0001e3f3) main_radioblah_info_pane_t

0x9cfd,	// (0x00018575) main_radioblah_rocker_ctrl_pane_g1

0x9cfd,	// (0x00018575) main_radioblah_rocker_ctrl_pane_g2

0x9cfd,	// (0x00018575) main_radioblah_rocker_ctrl_pane_g3

0x9cfd,	// (0x00018575) main_radioblah_rocker_ctrl_pane_g4

0x9cfd,	// (0x00018575) main_radioblah_rocker_ctrl_pane_g5

0x9cfd,	// (0x00018575) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb84,	// (0x0001e3fc) main_radioblah_rocker_ctrl_pane_g

0x65ab,	// (0x00014e23) main_cset_text2_pane_t1_copy1_ParamLimits

0xcbf9,	// (0x0001b471) cam4_image_uncrop_qvga_pane

0xcc4e,	// (0x0001b4c6) vid4_image_uncrop_qcif_pane

0xd605,	// (0x0001be7d) cam6_image_uncrop_qvga_pane_ParamLimits

0xd605,	// (0x0001be7d) cam6_image_uncrop_qvga_pane

0xd6bd,	// (0x0001bf35) vid6_image_uncrop_qcif_pane_ParamLimits

0xd6bd,	// (0x0001bf35) vid6_image_uncrop_qcif_pane

0x9516,	// (0x00017d8e) bg_popup_preview_window_pane_cp03

0xd975,	// (0x0001c1ed) list_cset_text2_pane

0xd97d,	// (0x0001c1f5) main_cset6_text2_pane_g1

0xd985,	// (0x0001c1fd) main_cset6_text2_pane_t1

0xdd3c,	// (0x0001c5b4) list_cset_text2_pane_t1_ParamLimits

0xdd3c,	// (0x0001c5b4) list_cset_text2_pane_t1

0x958b,	// (0x00017e03) main_radioblah_pane_ParamLimits

0x6bc2,	// (0x0001543a) main_mobtv_info_pane_t3_ParamLimits

0x6bc2,	// (0x0001543a) main_mobtv_info_pane_t3

0xa9ec,	// (0x00019264) main_radioblah_pane_g1

0xdcbd,	// (0x0001c535) main_radioblah_info_pane_g1

0x9d1b,	// (0x00018593) main_radioblah_info_pane_t3_ParamLimits

0x9d1b,	// (0x00018593) main_radioblah_info_pane_t3

0x2128,	// (0x000109a0) highlight_cell_cale_month_pane_ParamLimits

0x2128,	// (0x000109a0) highlight_cell_cale_month_pane

0x9516,	// (0x00017d8e) main_phob_fisheye_pane

0xc3e6,	// (0x0001ac5e) scroll_pane_cp0031_ParamLimits

0xc3e6,	// (0x0001ac5e) scroll_pane_cp0031

0xd7cf,	// (0x0001c047) wait_bar_pane_cp08_ParamLimits

0x6634,	// (0x00014eac) cset_list_set_pane_copy1_ParamLimits

0xdd56,	// (0x0001c5ce) highlight_cell_cale_month_pane_g1

0x6e2f,	// (0x000156a7) highlight_cell_cale_month_pane_t1

0xd394,	// (0x0001bc0c) list_gen_pane_cp01

0xcea5,	// (0x0001b71d) scroll_pane_01

0x6e3d,	// (0x000156b5) list_single_double_fisheye_pane

0x6e46,	// (0x000156be) list_double_fisheye_pane_g1_ParamLimits

0x6e46,	// (0x000156be) list_double_fisheye_pane_g1

0x6e52,	// (0x000156ca) list_double_fisheye_pane_g2_ParamLimits

0x6e52,	// (0x000156ca) list_double_fisheye_pane_g2

0x6e66,	// (0x000156de) list_double_fisheye_pane_g3_ParamLimits

0x6e66,	// (0x000156de) list_double_fisheye_pane_g3

0x0004,

0xfb91,	// (0x0001e409) list_double_fisheye_pane_g_ParamLimits

0xfb91,	// (0x0001e409) list_double_fisheye_pane_g

0x6e8f,	// (0x00015707) list_double_fisheye_pane_t1_ParamLimits

0x6e8f,	// (0x00015707) list_double_fisheye_pane_t1

0x6eaa,	// (0x00015722) list_double_fisheye_pane_t2_ParamLimits

0x6eaa,	// (0x00015722) list_double_fisheye_pane_t2

0x0001,

0xfb9c,	// (0x0001e414) list_double_fisheye_pane_t_ParamLimits

0xfb9c,	// (0x0001e414) list_double_fisheye_pane_t

0x9516,	// (0x00017d8e) main_call5_pane

0x958b,	// (0x00017e03) sc_swipe_pane_ParamLimits

0x958b,	// (0x00017e03) sc_swipe_pane

0x6edf,	// (0x00015757) call5_image_pane_ParamLimits

0x6edf,	// (0x00015757) call5_image_pane

0x6efc,	// (0x00015774) call5_swipe_1_pane_ParamLimits

0x6efc,	// (0x00015774) call5_swipe_1_pane

0x6f0f,	// (0x00015787) call5_swipe_2_pane_ParamLimits

0x6f0f,	// (0x00015787) call5_swipe_2_pane

0x6f3a,	// (0x000157b2) popup_call5_audio_first_window_ParamLimits

0x6f3a,	// (0x000157b2) popup_call5_audio_first_window

0x9cb7,	// (0x0001852f) call5_swipe_1_pane_g1_ParamLimits

0x9cb7,	// (0x0001852f) call5_swipe_1_pane_g1

0xdd5e,	// (0x0001c5d6) call5_swipe_1_pane_g2_ParamLimits

0xdd5e,	// (0x0001c5d6) call5_swipe_1_pane_g2

0x0001,

0xfba1,	// (0x0001e419) call5_swipe_1_pane_g_ParamLimits

0xfba1,	// (0x0001e419) call5_swipe_1_pane_g

0xdd6a,	// (0x0001c5e2) call5_swipe_1_pane_t1_ParamLimits

0xdd6a,	// (0x0001c5e2) call5_swipe_1_pane_t1

0x9cb7,	// (0x0001852f) call5_swipe_2_pane_g1_ParamLimits

0x9cb7,	// (0x0001852f) call5_swipe_2_pane_g1

0xdd7f,	// (0x0001c5f7) call5_swipe_2_pane_g2_ParamLimits

0xdd7f,	// (0x0001c5f7) call5_swipe_2_pane_g2

0x0001,

0xfba6,	// (0x0001e41e) call5_swipe_2_pane_g_ParamLimits

0xfba6,	// (0x0001e41e) call5_swipe_2_pane_g

0xdd8b,	// (0x0001c603) call5_swipe_2_pane_t1_ParamLimits

0xdd8b,	// (0x0001c603) call5_swipe_2_pane_t1

0x9cb7,	// (0x0001852f) sc_swipe_pane_g1_ParamLimits

0x9cb7,	// (0x0001852f) sc_swipe_pane_g1

0x9cc5,	// (0x0001853d) sc_swipe_pane_g2_ParamLimits

0x9cc5,	// (0x0001853d) sc_swipe_pane_g2

0x0001,

0xf71f,	// (0x0001df97) sc_swipe_pane_g_ParamLimits

0xf71f,	// (0x0001df97) sc_swipe_pane_g

0x9d07,	// (0x0001857f) sc_swipe_pane_t1_ParamLimits

0x9d07,	// (0x0001857f) sc_swipe_pane_t1

0x9516,	// (0x00017d8e) main_cmail_launcher_pane

0x6f4f,	// (0x000157c7) aid_size_cell_cmail_l_ParamLimits

0x6f4f,	// (0x000157c7) aid_size_cell_cmail_l

0x6f64,	// (0x000157dc) grid_cmail_l_pane_ParamLimits

0x6f64,	// (0x000157dc) grid_cmail_l_pane

0x6f7e,	// (0x000157f6) cell_cmail_l_pane_ParamLimits

0x6f7e,	// (0x000157f6) cell_cmail_l_pane

0x6f9f,	// (0x00015817) cell_cmail_l_pane_g1_ParamLimits

0x6f9f,	// (0x00015817) cell_cmail_l_pane_g1

0x6fab,	// (0x00015823) cell_cmail_l_pane_t1_ParamLimits

0x6fab,	// (0x00015823) cell_cmail_l_pane_t1

0x6fc1,	// (0x00015839) cell_cmail_l_pane_t2_ParamLimits

0x6fc1,	// (0x00015839) cell_cmail_l_pane_t2

0x0001,

0xfbab,	// (0x0001e423) cell_cmail_l_pane_t_ParamLimits

0xfbab,	// (0x0001e423) cell_cmail_l_pane_t

0x958b,	// (0x00017e03) grid_highlight_pane_cp018_ParamLimits

0x958b,	// (0x00017e03) grid_highlight_pane_cp018

0x04a1,	// (0x0000ed19) main2_pane_ParamLimits

0x04a1,	// (0x0000ed19) main2_pane

0x9e31,	// (0x000186a9) popup_sp_fs_action_menu_bg_pane_g1

0x9e39,	// (0x000186b1) popup_sp_fs_action_menu_bg_pane_g2

0x9e41,	// (0x000186b9) popup_sp_fs_action_menu_bg_pane_g3

0x9e49,	// (0x000186c1) popup_sp_fs_action_menu_bg_pane_g4

0x9e51,	// (0x000186c9) popup_sp_fs_action_menu_bg_pane_g5

0x9e59,	// (0x000186d1) popup_sp_fs_action_menu_bg_pane_g6

0x9e61,	// (0x000186d9) popup_sp_fs_action_menu_bg_pane_g7

0x9e69,	// (0x000186e1) popup_sp_fs_action_menu_bg_pane_g8

0x9e71,	// (0x000186e9) popup_sp_fs_action_menu_bg_pane_g9

0x9e79,	// (0x000186f1) popup_sp_fs_action_menu_bg_pane_g10

0x9e79,	// (0x000186f1) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x0001d955) popup_sp_fs_action_menu_bg_pane_g

0x9cb7,	// (0x0001852f) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x2_t3_g3_g1

0x9cb7,	// (0x0001852f) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x2_t3_g3_g2

0x9cb7,	// (0x0001852f) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x0001da03) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x0001da03) list_medium_line_x2_t3_g3_g

0x9d07,	// (0x0001857f) list_medium_line_x2_t3_g3_t1_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x2_t3_g3_t1

0x9d07,	// (0x0001857f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x2_t3_g3_t2

0x9d07,	// (0x0001857f) list_medium_line_x2_t3_g3_t3_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x0001da0a) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x0001da0a) list_medium_line_x2_t3_g3_t

0x9cb7,	// (0x0001852f) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x2_t3_g2_g1

0x9cb7,	// (0x0001852f) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x0001da11) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x0001da11) list_medium_line_x2_t3_g2_g

0x9d07,	// (0x0001857f) list_medium_line_x2_t3_g2_t1_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x2_t3_g2_t1

0x9d07,	// (0x0001857f) list_medium_line_x2_t3_g2_t2_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x2_t3_g2_t2

0x9d07,	// (0x0001857f) list_medium_line_x2_t3_g2_t3_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x0001da0a) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x0001da0a) list_medium_line_x2_t3_g2_t

0x9cb7,	// (0x0001852f) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x2_t4_g4_g1

0x9cb7,	// (0x0001852f) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x2_t4_g4_g2

0x9cb7,	// (0x0001852f) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x2_t4_g4_g3

0x9cb7,	// (0x0001852f) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x0001da16) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x0001da16) list_medium_line_x2_t4_g4_g

0x9d07,	// (0x0001857f) list_medium_line_x2_t4_g4_t1_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x2_t4_g4_t1

0x9d07,	// (0x0001857f) list_medium_line_x2_t4_g4_t2_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x2_t4_g4_t2

0x9d07,	// (0x0001857f) list_medium_line_x2_t4_g4_t3_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x2_t4_g4_t3

0x9d07,	// (0x0001857f) list_medium_line_x2_t4_g4_t4_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x0001da1f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x0001da1f) list_medium_line_x2_t4_g4_t

0x9cb7,	// (0x0001852f) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x2_t2_g4_g1

0x9cb7,	// (0x0001852f) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x2_t2_g4_g2

0x9cb7,	// (0x0001852f) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x2_t2_g4_g3

0x9cb7,	// (0x0001852f) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x0001da16) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x0001da16) list_medium_line_x2_t2_g4_g

0x9d07,	// (0x0001857f) list_medium_line_x2_t2_g4_t1_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x2_t2_g4_t1

0x9d07,	// (0x0001857f) list_medium_line_x2_t2_g4_t2_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf16e,	// (0x0001d9e6) list_medium_line_x2_t2_g4_t_ParamLimits

0xf16e,	// (0x0001d9e6) list_medium_line_x2_t2_g4_t

0x9cb7,	// (0x0001852f) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x2_t2_g3_g1

0x9cb7,	// (0x0001852f) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x2_t2_g3_g2

0x9cb7,	// (0x0001852f) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x0001da03) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x0001da03) list_medium_line_x2_t2_g3_g

0x9d07,	// (0x0001857f) list_medium_line_x2_t2_g3_t1_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x2_t2_g3_t1

0x9d07,	// (0x0001857f) list_medium_line_x2_t2_g3_t2_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf16e,	// (0x0001d9e6) list_medium_line_x2_t2_g3_t_ParamLimits

0xf16e,	// (0x0001d9e6) list_medium_line_x2_t2_g3_t

0x227f,	// (0x00010af7) main_sp_fs_list_pane_ParamLimits

0x227f,	// (0x00010af7) main_sp_fs_list_pane

0xd1d0,	// (0x0001ba48) sp_fs_scroll_pane_ParamLimits

0xd1d0,	// (0x0001ba48) sp_fs_scroll_pane

0xa4ec,	// (0x00018d64) list_medium_line_x2_t3_t1

0xa4ec,	// (0x00018d64) list_medium_line_x2_t3_t2

0xa4ec,	// (0x00018d64) list_medium_line_x2_t3_t3

0x0002,

0xf254,	// (0x0001dacc) list_medium_line_x2_t3_t

0xa4ec,	// (0x00018d64) list_medium_line_x3_t4_t1

0xa4ec,	// (0x00018d64) list_medium_line_x3_t4_t2

0xa4ec,	// (0x00018d64) list_medium_line_x3_t4_t3

0xa4ec,	// (0x00018d64) list_medium_line_x3_t4_t4

0x0003,

0xf25b,	// (0x0001dad3) list_medium_line_x3_t4_t

0xa4ec,	// (0x00018d64) list_medium_line_x4_t5_t1

0xa4ec,	// (0x00018d64) list_medium_line_x4_t5_t2

0xa4ec,	// (0x00018d64) list_medium_line_x4_t5_t3

0xa4ec,	// (0x00018d64) list_medium_line_x4_t5_t4

0xa4ec,	// (0x00018d64) list_medium_line_x4_t5_t5

0x0004,

0xf264,	// (0x0001dadc) list_medium_line_x4_t5_t

0x9cb7,	// (0x0001852f) list_medium_line_t4_g4_g1_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_t4_g4_g1

0x9cb7,	// (0x0001852f) list_medium_line_t4_g4_g2_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_t4_g4_g2

0x9cb7,	// (0x0001852f) list_medium_line_t4_g4_g3_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_t4_g4_g3

0x9cb7,	// (0x0001852f) list_medium_line_t4_g4_g4_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x0001da16) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x0001da16) list_medium_line_t4_g4_g

0x9d07,	// (0x0001857f) list_medium_line_t4_g4_t1_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_t4_g4_t1

0x9d07,	// (0x0001857f) list_medium_line_t4_g4_t2_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_t4_g4_t2

0x9d07,	// (0x0001857f) list_medium_line_t4_g4_t3_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_t4_g4_t3

0x9d07,	// (0x0001857f) list_medium_line_t4_g4_t4_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x0001da1f) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x0001da1f) list_medium_line_t4_g4_t

0x232d,	// (0x00010ba5) chi_dic_find_pane_g1

0x333c,	// (0x00011bb4) main_tport_pane

0xa4ec,	// (0x00018d64) list_medium_line_plain_t1

0x9cb7,	// (0x0001852f) list_medium_line_t2_g2_g1_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_t2_g2_g1

0x9cb7,	// (0x0001852f) list_medium_line_t2_g2_g2_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x0001da11) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x0001da11) list_medium_line_t2_g2_g

0x9d07,	// (0x0001857f) list_medium_line_t2_g2_t1_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_t2_g2_t1

0x9d07,	// (0x0001857f) list_medium_line_t2_g2_t2_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_t2_g2_t2

0x0001,

0xf16e,	// (0x0001d9e6) list_medium_line_t2_g2_t_ParamLimits

0xf16e,	// (0x0001d9e6) list_medium_line_t2_g2_t

0xd411,	// (0x0001bc89) aid_sp_fs_list_icon_a_sm

0xd419,	// (0x0001bc91) aid_sp_fs_list_icon_d

0xd421,	// (0x0001bc99) aid_sp_fs_text_primary

0xd42a,	// (0x0001bca2) aid_sp_fs_text_secondary

0x9516,	// (0x00017d8e) list_medium_line

0x9516,	// (0x00017d8e) list_medium_line_g2

0x9516,	// (0x00017d8e) list_medium_line_g3

0x9516,	// (0x00017d8e) list_medium_line_plain

0x9516,	// (0x00017d8e) list_medium_line_plain_t2

0x9516,	// (0x00017d8e) list_medium_line_plain_t3

0x9516,	// (0x00017d8e) list_medium_line_right_icon

0x9516,	// (0x00017d8e) list_medium_line_right_iconx2

0x9516,	// (0x00017d8e) list_medium_line_t2

0x9516,	// (0x00017d8e) list_medium_line_t2_g2

0x9516,	// (0x00017d8e) list_medium_line_t2_g3

0x9516,	// (0x00017d8e) list_medium_line_t2_right_icon

0x9516,	// (0x00017d8e) list_medium_line_t2_right_iconx2

0x9516,	// (0x00017d8e) list_medium_line_t3

0x9516,	// (0x00017d8e) list_medium_line_t3_g2

0x9516,	// (0x00017d8e) list_medium_line_t3_g3

0x9516,	// (0x00017d8e) list_medium_line_t3_right_iconx2

0x9516,	// (0x00017d8e) list_medium_line_t4_g4

0x9516,	// (0x00017d8e) list_medium_line_x2

0x9516,	// (0x00017d8e) list_medium_line_x2_t2_g2

0x9516,	// (0x00017d8e) list_medium_line_x2_t2_g3

0x9516,	// (0x00017d8e) list_medium_line_x2_t2_g4

0x9516,	// (0x00017d8e) list_medium_line_x2_t3

0x9516,	// (0x00017d8e) list_medium_line_x2_t3_g2

0x9516,	// (0x00017d8e) list_medium_line_x2_t3_g3

0x9516,	// (0x00017d8e) list_medium_line_x2_t3_g4

0x9516,	// (0x00017d8e) list_medium_line_x2_t4_g2

0x9516,	// (0x00017d8e) list_medium_line_x2_t4_g4

0x9516,	// (0x00017d8e) list_medium_line_x3

0x9516,	// (0x00017d8e) list_medium_line_x3_t4

0x9516,	// (0x00017d8e) list_medium_line_x3_t4_g4

0x9516,	// (0x00017d8e) list_medium_line_x4_t4

0x9516,	// (0x00017d8e) list_medium_line_x4_t4_g7

0x9516,	// (0x00017d8e) list_medium_line_x4_t5

0x6112,	// (0x0001498a) list_single_fs_dyc_pane_ParamLimits

0x6112,	// (0x0001498a) list_single_fs_dyc_pane

0x9cb7,	// (0x0001852f) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x4_t4_g7_g1

0x9cb7,	// (0x0001852f) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x4_t4_g7_g2

0x9cb7,	// (0x0001852f) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x4_t4_g7_g3

0x9cb7,	// (0x0001852f) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x4_t4_g7_g4

0x9cb7,	// (0x0001852f) list_medium_line_x4_t4_g7_g5_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x4_t4_g7_g5

0x9cb7,	// (0x0001852f) list_medium_line_x4_t4_g7_g6_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x4_t4_g7_g6

0x9cc5,	// (0x0001853d) list_medium_line_x4_t4_g7_g7_ParamLimits

0x9cc5,	// (0x0001853d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfab8,	// (0x0001e330) list_medium_line_x4_t4_g7_g_ParamLimits

0xfab8,	// (0x0001e330) list_medium_line_x4_t4_g7_g

0x9d07,	// (0x0001857f) list_medium_line_x4_t4_g7_t1_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x4_t4_g7_t1

0x9d07,	// (0x0001857f) list_medium_line_x4_t4_g7_t2_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x4_t4_g7_t2

0x9d07,	// (0x0001857f) list_medium_line_x4_t4_g7_t3_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x4_t4_g7_t3

0x9d1b,	// (0x00018593) list_medium_line_x4_t4_g7_t4_ParamLimits

0x9d1b,	// (0x00018593) list_medium_line_x4_t4_g7_t4

0x9d1b,	// (0x00018593) list_medium_line_x4_t4_g7_t5_ParamLimits

0x9d1b,	// (0x00018593) list_medium_line_x4_t4_g7_t5

0x0004,

0xfac7,	// (0x0001e33f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfac7,	// (0x0001e33f) list_medium_line_x4_t4_g7_t

0x6836,	// (0x000150ae) list_single_dyc_row_pane_ParamLimits

0x6836,	// (0x000150ae) list_single_dyc_row_pane

0x6ecc,	// (0x00015744) call5_gesture_pane_ParamLimits

0x6ecc,	// (0x00015744) call5_gesture_pane

0x6f22,	// (0x0001579a) call5_windows_pane_ParamLimits

0x6f22,	// (0x0001579a) call5_windows_pane

0x6fde,	// (0x00015856) call5_swipe_1_pane_cp_ParamLimits

0x6fde,	// (0x00015856) call5_swipe_1_pane_cp

0x6fea,	// (0x00015862) call5_swipe_2_pane_cp_ParamLimits

0x6fea,	// (0x00015862) call5_swipe_2_pane_cp

0x9f96,	// (0x0001880e) call5_image_pane_cp

0x6ff6,	// (0x0001586e) popup_call5_audio_first_window_cp_ParamLimits

0x6ff6,	// (0x0001586e) popup_call5_audio_first_window_cp

0xdda0,	// (0x0001c618) call5_swipe_1_pane_g1_cp_ParamLimits

0xdda0,	// (0x0001c618) call5_swipe_1_pane_g1_cp

0xddad,	// (0x0001c625) call5_swipe_1_pane_g2_cp

0xddb5,	// (0x0001c62d) call5_swipe_1_pane_t1_cp_ParamLimits

0xddb5,	// (0x0001c62d) call5_swipe_1_pane_t1_cp

0xdda0,	// (0x0001c618) call5_swipe_2_pane_g1_cp_ParamLimits

0xdda0,	// (0x0001c618) call5_swipe_2_pane_g1_cp

0xddca,	// (0x0001c642) call5_swipe_2_pane_g2_cp

0xddd2,	// (0x0001c64a) call5_swipe_2_pane_t1_cp_ParamLimits

0xddd2,	// (0x0001c64a) call5_swipe_2_pane_t1_cp

0x958b,	// (0x00017e03) main_sp_fs_email_pane

0xcf88,	// (0x0001b800) main_sp_fs_listscroll_pane_te

0x7004,	// (0x0001587c) popup_sp_fs_action_menu_pane_ParamLimits

0x7004,	// (0x0001587c) popup_sp_fs_action_menu_pane

0x9cfd,	// (0x00018575) bg_sp_fs_ctrlbar_pane_g1

0xdde7,	// (0x0001c65f) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xddf0,	// (0x0001c668) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xddf9,	// (0x0001c671) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x9cfd,	// (0x00018575) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbb0,	// (0x0001e428) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbd8b,	// (0x0001a603) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbd8b,	// (0x0001a603) bg_sp_fs_ctrlbar_ddmenu_pane

0xde02,	// (0x0001c67a) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xde02,	// (0x0001c67a) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xde0e,	// (0x0001c686) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xde0e,	// (0x0001c686) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbb9,	// (0x0001e431) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbb9,	// (0x0001e431) main_sp_fs_ctrlbar_ddmenu_pane_g

0xde1a,	// (0x0001c692) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xde1a,	// (0x0001c692) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x9cfd,	// (0x00018575) list_medium_line_t2_right_icon_g1

0xa4ec,	// (0x00018d64) list_medium_line_t2_right_icon_t1

0xa4ec,	// (0x00018d64) list_medium_line_t2_right_icon_t2

0x0001,

0xfbbe,	// (0x0001e436) list_medium_line_t2_right_icon_t

0xaa0e,	// (0x00019286) bg_sp_fs_ctrlbar_pane_ParamLimits

0xaa0e,	// (0x00019286) bg_sp_fs_ctrlbar_pane

0x7097,	// (0x0001590f) main_sp_fs_ctrlbar_button_pane_cp01

0x70a1,	// (0x00015919) main_sp_fs_ctrlbar_ddmenu_pane

0xde6e,	// (0x0001c6e6) main_sp_fs_ctrlbar_pane_g1

0xde7a,	// (0x0001c6f2) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbc3,	// (0x0001e43b) main_sp_fs_ctrlbar_pane_g

0x70df,	// (0x00015957) main_sp_fs_ctrlbar_pane_t1

0x711e,	// (0x00015996) main_sp_fs_ctrlbar_pane

0x7142,	// (0x000159ba) main_sp_fs_listscroll_pane_te_cp01

0x716e,	// (0x000159e6) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x716e,	// (0x000159e6) popup_sp_fs_action_menu_pane_cp01

0x958b,	// (0x00017e03) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x958b,	// (0x00017e03) bg_sp_fs_highlight_list_pane_cp01

0xdea1,	// (0x0001c719) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdea1,	// (0x0001c719) sp_fs_action_menu_list_gene_pane_g1

0xdeb0,	// (0x0001c728) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdeb0,	// (0x0001c728) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbd1,	// (0x0001e449) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbd1,	// (0x0001e449) sp_fs_action_menu_list_gene_pane_g

0xdebd,	// (0x0001c735) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdebd,	// (0x0001c735) sp_fs_action_menu_list_gene_pane_t1

0xded5,	// (0x0001c74d) sp_fs_action_menu_list_gene_pane_ParamLimits

0xded5,	// (0x0001c74d) sp_fs_action_menu_list_gene_pane

0xdef8,	// (0x0001c770) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdef8,	// (0x0001c770) popup_sp_fs_action_menu_bg_pane

0xdf06,	// (0x0001c77e) sp_fs_action_menu_list_pane_ParamLimits

0xdf06,	// (0x0001c77e) sp_fs_action_menu_list_pane

0x7193,	// (0x00015a0b) sp_fs_scroll_pane_cp01_ParamLimits

0x7193,	// (0x00015a0b) sp_fs_scroll_pane_cp01

0xa4ec,	// (0x00018d64) list_medium_line_plain_t2_t1

0xa4ec,	// (0x00018d64) list_medium_line_plain_t2_t2

0x0001,

0xfbbe,	// (0x0001e436) list_medium_line_plain_t2_t

0xa4ec,	// (0x00018d64) list_medium_line_plain_t3_t1

0xa4ec,	// (0x00018d64) list_medium_line_plain_t3_t2

0xa4ec,	// (0x00018d64) list_medium_line_plain_t3_t3

0x0002,

0xf254,	// (0x0001dacc) list_medium_line_plain_t3_t

0x9cb7,	// (0x0001852f) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x2_t2_g2_g1

0x9cb7,	// (0x0001852f) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x0001da11) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x0001da11) list_medium_line_x2_t2_g2_g

0x9d07,	// (0x0001857f) list_medium_line_x2_t2_g2_t1_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x2_t2_g2_t1

0x9d07,	// (0x0001857f) list_medium_line_x2_t2_g2_t2_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x2_t2_g2_t2

0x0001,

0xf16e,	// (0x0001d9e6) list_medium_line_x2_t2_g2_t_ParamLimits

0xf16e,	// (0x0001d9e6) list_medium_line_x2_t2_g2_t

0x9cb7,	// (0x0001852f) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x2_t4_g2_g1

0x9cb7,	// (0x0001852f) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x0001da11) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x0001da11) list_medium_line_x2_t4_g2_g

0x9d07,	// (0x0001857f) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x2_t4_g2_t1

0x9d07,	// (0x0001857f) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x2_t4_g2_t2

0x9d07,	// (0x0001857f) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x2_t4_g2_t3

0x9d07,	// (0x0001857f) list_medium_line_x2_t4_g2_t4_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x0001da1f) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x0001da1f) list_medium_line_x2_t4_g2_t

0x9cfd,	// (0x00018575) list_medium_line_t3_right_iconx2_g1

0x9cfd,	// (0x00018575) list_medium_line_t3_right_iconx2_g2

0x9cfd,	// (0x00018575) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf370,	// (0x0001dbe8) list_medium_line_t3_right_iconx2_g

0xa4ec,	// (0x00018d64) list_medium_line_t3_right_iconx2_t1

0xa4ec,	// (0x00018d64) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbbe,	// (0x0001e436) list_medium_line_t3_right_iconx2_t

0x9cb7,	// (0x0001852f) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x3_t4_g4_g1

0x9cb7,	// (0x0001852f) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x3_t4_g4_g2

0x9cb7,	// (0x0001852f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x3_t4_g4_g3

0x9cb7,	// (0x0001852f) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x0001da16) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x0001da16) list_medium_line_x3_t4_g4_g

0x9d07,	// (0x0001857f) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x3_t4_g4_t1

0x9d07,	// (0x0001857f) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x3_t4_g4_t2

0x9d07,	// (0x0001857f) list_medium_line_x3_t4_g4_t3_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x3_t4_g4_t3

0x9d07,	// (0x0001857f) list_medium_line_x3_t4_g4_t4_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x0001da1f) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x0001da1f) list_medium_line_x3_t4_g4_t

0x71b9,	// (0x00015a31) list_single_dyc_row_text_pane_t1_ParamLimits

0x71b9,	// (0x00015a31) list_single_dyc_row_text_pane_t1

0x7202,	// (0x00015a7a) list_single_dyc_row_text_pane_t2_ParamLimits

0x7202,	// (0x00015a7a) list_single_dyc_row_text_pane_t2

0xdf2a,	// (0x0001c7a2) list_single_dyc_row_text_pane_t3_ParamLimits

0xdf2a,	// (0x0001c7a2) list_single_dyc_row_text_pane_t3

0x0005,

0xfbd6,	// (0x0001e44e) list_single_dyc_row_text_pane_t_ParamLimits

0xfbd6,	// (0x0001e44e) list_single_dyc_row_text_pane_t

0xdf4e,	// (0x0001c7c6) list_single_dyc_row_pane_g1_ParamLimits

0xdf4e,	// (0x0001c7c6) list_single_dyc_row_pane_g1

0xdf5a,	// (0x0001c7d2) list_single_dyc_row_pane_g2_ParamLimits

0xdf5a,	// (0x0001c7d2) list_single_dyc_row_pane_g2

0xdf66,	// (0x0001c7de) list_single_dyc_row_pane_g3_ParamLimits

0xdf66,	// (0x0001c7de) list_single_dyc_row_pane_g3

0xdf79,	// (0x0001c7f1) list_single_dyc_row_pane_g4_ParamLimits

0xdf79,	// (0x0001c7f1) list_single_dyc_row_pane_g4

0x0006,

0xfbe3,	// (0x0001e45b) list_single_dyc_row_pane_g_ParamLimits

0xfbe3,	// (0x0001e45b) list_single_dyc_row_pane_g

0xdfcb,	// (0x0001c843) list_single_dyc_row_text_pane_ParamLimits

0xdfcb,	// (0x0001c843) list_single_dyc_row_text_pane

0x9516,	// (0x00017d8e) bg_sp_fs_scroll_pane

0xdff0,	// (0x0001c868) thumb_sp_fs_scroll_pane

0x9cb7,	// (0x0001852f) list_medium_line_g1_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_g1

0x9d07,	// (0x0001857f) list_medium_line_t1_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_t1

0x9cb7,	// (0x0001852f) list_medium_line_x2_g1_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x2_g1

0x9cb7,	// (0x0001852f) list_medium_line_x2_g2_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x0001da11) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x0001da11) list_medium_line_x2_g

0x9d07,	// (0x0001857f) list_medium_line_x2_t1_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x2_t1

0x9cb7,	// (0x0001852f) list_medium_line_x3_g1_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x3_g1

0xdff9,	// (0x0001c871) list_medium_line_x3_g2_ParamLimits

0xdff9,	// (0x0001c871) list_medium_line_x3_g2

0x0001,

0xfbf2,	// (0x0001e46a) list_medium_line_x3_g_ParamLimits

0xfbf2,	// (0x0001e46a) list_medium_line_x3_g

0xe007,	// (0x0001c87f) list_medium_line_x3_t1_ParamLimits

0xe007,	// (0x0001c87f) list_medium_line_x3_t1

0xe01b,	// (0x0001c893) thumb_sp_fs_scroll_pane_g1

0xe024,	// (0x0001c89c) thumb_sp_fs_scroll_pane_g2

0xe02d,	// (0x0001c8a5) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfbf7,	// (0x0001e46f) thumb_sp_fs_scroll_pane_g

0xe01b,	// (0x0001c893) bg_sp_fs_scroll_pane_g1

0xe024,	// (0x0001c89c) bg_sp_fs_scroll_pane_g2

0xe02d,	// (0x0001c8a5) bg_sp_fs_scroll_pane_g3

0x0002,

0xfbf7,	// (0x0001e46f) bg_sp_fs_scroll_pane_g

0x9cb7,	// (0x0001852f) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x2_t3_g4_g1

0x9cb7,	// (0x0001852f) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x2_t3_g4_g2

0x9cb7,	// (0x0001852f) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x2_t3_g4_g3

0x9cb7,	// (0x0001852f) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x0001da16) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x0001da16) list_medium_line_x2_t3_g4_g

0x9d07,	// (0x0001857f) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x2_t3_g4_t1

0x9d07,	// (0x0001857f) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x2_t3_g4_t2

0x9d07,	// (0x0001857f) list_medium_line_x2_t3_g4_t3_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x0001da0a) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x0001da0a) list_medium_line_x2_t3_g4_t

0x9cb7,	// (0x0001852f) list_medium_line_g2_g1_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_g2_g1

0x9cb7,	// (0x0001852f) list_medium_line_g2_g2_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x0001da11) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x0001da11) list_medium_line_g2_g

0x9d07,	// (0x0001857f) list_medium_line_g2_t1_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_g2_t1

0x9cb7,	// (0x0001852f) list_medium_line_t3_g2_g1_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_t3_g2_g1

0x9cb7,	// (0x0001852f) list_medium_line_t3_g2_g2_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x0001da11) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x0001da11) list_medium_line_t3_g2_g

0x9d07,	// (0x0001857f) list_medium_line_t3_g2_t1_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_t3_g2_t1

0x9d07,	// (0x0001857f) list_medium_line_t3_g2_t2_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_t3_g2_t2

0x9d07,	// (0x0001857f) list_medium_line_t3_g2_t3_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x0001da0a) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x0001da0a) list_medium_line_t3_g2_t

0x9cfd,	// (0x00018575) list_medium_line_right_icon_g1

0xa4ec,	// (0x00018d64) list_medium_line_right_icon_t1

0x9cb7,	// (0x0001852f) list_medium_line_t2_g1_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_t2_g1

0x9d07,	// (0x0001857f) list_medium_line_t2_t1_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_t2_t1

0x9d07,	// (0x0001857f) list_medium_line_t2_t2_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_t2_t2

0x0001,

0xf16e,	// (0x0001d9e6) list_medium_line_t2_t_ParamLimits

0xf16e,	// (0x0001d9e6) list_medium_line_t2_t

0x9cb7,	// (0x0001852f) list_medium_line_t3_g1_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_t3_g1

0x9d07,	// (0x0001857f) list_medium_line_t3_t1_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_t3_t1

0x9d07,	// (0x0001857f) list_medium_line_t3_t2_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_t3_t2

0x9d07,	// (0x0001857f) list_medium_line_t3_t3_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x0001da0a) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x0001da0a) list_medium_line_t3_t

0x9cb7,	// (0x0001852f) list_medium_line_g3_g1_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_g3_g1

0x9cb7,	// (0x0001852f) list_medium_line_g3_g2_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_g3_g2

0x9cb7,	// (0x0001852f) list_medium_line_g3_g3_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x0001da03) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x0001da03) list_medium_line_g3_g

0x9d07,	// (0x0001857f) list_medium_line_g3_t1_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_g3_t1

0x9cb7,	// (0x0001852f) list_medium_line_t2_g3_g1_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_t2_g3_g1

0x9cb7,	// (0x0001852f) list_medium_line_t2_g3_g2_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_t2_g3_g2

0x9cb7,	// (0x0001852f) list_medium_line_t2_g3_g3_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x0001da03) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x0001da03) list_medium_line_t2_g3_g

0x9d07,	// (0x0001857f) list_medium_line_t2_g3_t1_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_t2_g3_t1

0x9d07,	// (0x0001857f) list_medium_line_t2_g3_t2_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_t2_g3_t2

0x0001,

0xf16e,	// (0x0001d9e6) list_medium_line_t2_g3_t_ParamLimits

0xf16e,	// (0x0001d9e6) list_medium_line_t2_g3_t

0x9cb7,	// (0x0001852f) list_medium_line_t3_g3_g1_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_t3_g3_g1

0x9cb7,	// (0x0001852f) list_medium_line_t3_g3_g2_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_t3_g3_g2

0x9cb7,	// (0x0001852f) list_medium_line_t3_g3_g3_ParamLimits

0x9cb7,	// (0x0001852f) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x0001da03) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x0001da03) list_medium_line_t3_g3_g

0x9d07,	// (0x0001857f) list_medium_line_t3_g3_t1_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_t3_g3_t1

0x9d07,	// (0x0001857f) list_medium_line_t3_g3_t2_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_t3_g3_t2

0x9d07,	// (0x0001857f) list_medium_line_t3_g3_t3_ParamLimits

0x9d07,	// (0x0001857f) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x0001da0a) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x0001da0a) list_medium_line_t3_g3_t

0x9cfd,	// (0x00018575) list_medium_line_right_iconx2_g1

0x9cfd,	// (0x00018575) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x0001d904) list_medium_line_right_iconx2_g

0xa4ec,	// (0x00018d64) list_medium_line_right_iconx2_t1

0x9cfd,	// (0x00018575) list_medium_line_t2_right_iconx2_g1

0x9cfd,	// (0x00018575) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x0001d904) list_medium_line_t2_right_iconx2_g

0xa4ec,	// (0x00018d64) list_medium_line_t2_right_iconx2_t1

0xa4ec,	// (0x00018d64) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbbe,	// (0x0001e436) list_medium_line_t2_right_iconx2_t

0xa4ec,	// (0x00018d64) list_medium_line_x4_t4_t1

0xa4ec,	// (0x00018d64) list_medium_line_x4_t4_t2

0xa4ec,	// (0x00018d64) list_medium_line_x4_t4_t3

0xa4ec,	// (0x00018d64) list_medium_line_x4_t4_t4

0x0003,

0xf25b,	// (0x0001dad3) list_medium_line_x4_t4_t

0x737b,	// (0x00015bf3) tport_appsw_pane_ParamLimits

0x737b,	// (0x00015bf3) tport_appsw_pane

0x7393,	// (0x00015c0b) tport_contact_pane_ParamLimits

0x7393,	// (0x00015c0b) tport_contact_pane

0x73ae,	// (0x00015c26) tport_listscroll_pane_ParamLimits

0x73ae,	// (0x00015c26) tport_listscroll_pane

0x73c6,	// (0x00015c3e) cell_tport_appsw_pane_ParamLimits

0x73c6,	// (0x00015c3e) cell_tport_appsw_pane

0xa9ec,	// (0x00019264) tport_appsw_pane_g1_ParamLimits

0xa9ec,	// (0x00019264) tport_appsw_pane_g1

0x7410,	// (0x00015c88) tport_contact_pane_g1

0x7419,	// (0x00015c91) tport_contact_pane_t1

0x7427,	// (0x00015c9f) tport_contact_pane_t2

0x0001,

0xfbfe,	// (0x0001e476) tport_contact_pane_t

0xe036,	// (0x0001c8ae) list_tport_pane

0xe03f,	// (0x0001c8b7) scroll_pane_cp_030

0x743d,	// (0x00015cb5) cell_tport_appsw_pane_g1

0x744d,	// (0x00015cc5) cell_tport_appsw_pane_t1

0x745b,	// (0x00015cd3) grid_highlight_pane_cp019

0x7463,	// (0x00015cdb) list_tport_double_graphic_pane_ParamLimits

0x7463,	// (0x00015cdb) list_tport_double_graphic_pane

0x958b,	// (0x00017e03) list_highlight_pane_cp023_ParamLimits

0x958b,	// (0x00017e03) list_highlight_pane_cp023

0x7470,	// (0x00015ce8) list_tport_double_graphic_pane_g1_ParamLimits

0x7470,	// (0x00015ce8) list_tport_double_graphic_pane_g1

0x747d,	// (0x00015cf5) list_tport_double_graphic_pane_t1_ParamLimits

0x747d,	// (0x00015cf5) list_tport_double_graphic_pane_t1

0x7492,	// (0x00015d0a) list_tport_double_graphic_pane_t2_ParamLimits

0x7492,	// (0x00015d0a) list_tport_double_graphic_pane_t2

0x0001,

0xfc0a,	// (0x0001e482) list_tport_double_graphic_pane_t_ParamLimits

0xfc0a,	// (0x0001e482) list_tport_double_graphic_pane_t

0x9516,	// (0x00017d8e) main_cale_note_pane

0x513f,	// (0x000139b7) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x513f,	// (0x000139b7) cell_vitu2_function_top_wide_pane_cp01

0x6bd6,	// (0x0001544e) wait_bar_pane_cp05_ParamLimits

0x958b,	// (0x00017e03) listscroll_cmail_pane

0xe050,	// (0x0001c8c8) list_cmail_pane

0x74a4,	// (0x00015d1c) list_cmail_body_pane

0x74bb,	// (0x00015d33) list_single_cmail_header_caption_pane

0x74d5,	// (0x00015d4d) list_single_cmail_header_detail_pane_ParamLimits

0x74d5,	// (0x00015d4d) list_single_cmail_header_detail_pane

0xe067,	// (0x0001c8df) list_single_cmail_header_caption_pane_t1

0x7508,	// (0x00015d80) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7508,	// (0x00015d80) list_single_cmail_header_detail_pane_g1

0xe07e,	// (0x0001c8f6) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe07e,	// (0x0001c8f6) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc0f,	// (0x0001e487) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc0f,	// (0x0001e487) list_single_cmail_header_detail_pane_g

0x7520,	// (0x00015d98) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7520,	// (0x00015d98) list_single_cmail_header_detail_pane_t1

0x755c,	// (0x00015dd4) list_single_cmail_header_editor_pane_bg_ParamLimits

0x755c,	// (0x00015dd4) list_single_cmail_header_editor_pane_bg

0xdbb0,	// (0x0001c428) list_cmail_body_pane_g1

0xe0bb,	// (0x0001c933) list_cmail_body_pane_t1

0xcd61,	// (0x0001b5d9) list_single_cmail_header_editor_pane_bg_g1

0xa1ca,	// (0x00018a42) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcd71,	// (0x0001b5e9) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcd69,	// (0x0001b5e1) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcffb,	// (0x0001b873) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcd91,	// (0x0001b609) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcd81,	// (0x0001b5f9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcd89,	// (0x0001b601) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa1aa,	// (0x00018a22) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7573,	// (0x00015deb) calenote_gesture_pane_ParamLimits

0x7573,	// (0x00015deb) calenote_gesture_pane

0x7593,	// (0x00015e0b) calenote_window_pane_ParamLimits

0x7593,	// (0x00015e0b) calenote_window_pane

0xe0c9,	// (0x0001c941) popup_note_window_cp01

0x75af,	// (0x00015e27) calenote_swipe_1_pane_ParamLimits

0x75af,	// (0x00015e27) calenote_swipe_1_pane

0x6fea,	// (0x00015862) calenote_swipe_2_pane_ParamLimits

0x6fea,	// (0x00015862) calenote_swipe_2_pane

0xdda0,	// (0x0001c618) calenote_swipe_1_pane_g1_ParamLimits

0xdda0,	// (0x0001c618) calenote_swipe_1_pane_g1

0xe0db,	// (0x0001c953) calenote_swipe_1_pane_g2_ParamLimits

0xe0db,	// (0x0001c953) calenote_swipe_1_pane_g2

0x0001,

0xfc1b,	// (0x0001e493) calenote_swipe_1_pane_g_ParamLimits

0xfc1b,	// (0x0001e493) calenote_swipe_1_pane_g

0xe0e7,	// (0x0001c95f) calenote_swipe_1_pane_t1_ParamLimits

0xe0e7,	// (0x0001c95f) calenote_swipe_1_pane_t1

0xdda0,	// (0x0001c618) calenote_swipe_2_pane_g1_ParamLimits

0xdda0,	// (0x0001c618) calenote_swipe_2_pane_g1

0xe106,	// (0x0001c97e) calenote_swipe_2_pane_g2_ParamLimits

0xe106,	// (0x0001c97e) calenote_swipe_2_pane_g2

0x0001,

0xfc20,	// (0x0001e498) calenote_swipe_2_pane_g_ParamLimits

0xfc20,	// (0x0001e498) calenote_swipe_2_pane_g

0xe112,	// (0x0001c98a) calenote_swipe_2_pane_t1_ParamLimits

0xe112,	// (0x0001c98a) calenote_swipe_2_pane_t1

0x9516,	// (0x00017d8e) main_mup_navstr_pane

0x411e,	// (0x00012996) main_mup3_pane_t7_ParamLimits

0x411e,	// (0x00012996) main_mup3_pane_t7

0xc8cb,	// (0x0001b143) main_mp4_pane_g6_ParamLimits

0xc8cb,	// (0x0001b143) main_mp4_pane_g6

0xcb7f,	// (0x0001b3f7) main_image3_pane_t4_ParamLimits

0xcb7f,	// (0x0001b3f7) main_image3_pane_t4

0x75c4,	// (0x00015e3c) popup_navstr_preview_pane_ParamLimits

0x75c4,	// (0x00015e3c) popup_navstr_preview_pane

0x75d4,	// (0x00015e4c) scroll_navstr_pane_ParamLimits

0x75d4,	// (0x00015e4c) scroll_navstr_pane

0x9516,	// (0x00017d8e) bg_popup_preview_window_pane_cp04

0xe139,	// (0x0001c9b1) popup_navstr_preview_pane_t1

0x75e8,	// (0x00015e60) scroll_navstr_pane_g1_ParamLimits

0x75e8,	// (0x00015e60) scroll_navstr_pane_g1

0x75fc,	// (0x00015e74) scroll_navstr_pane_t1_ParamLimits

0x75fc,	// (0x00015e74) scroll_navstr_pane_t1

0xe0d2,	// (0x0001c94a) bg_button_pane_cp014

0xe0d2,	// (0x0001c94a) bg_button_pane_cp030

0x6e72,	// (0x000156ea) list_double_fisheye_pane_g4_ParamLimits

0x6e72,	// (0x000156ea) list_double_fisheye_pane_g4

0x6e7e,	// (0x000156f6) list_double_fisheye_pane_g5_ParamLimits

0x6e7e,	// (0x000156f6) list_double_fisheye_pane_g5

0xd1d0,	// (0x0001ba48) sp_fs_scroll_pane_cp03

0xde6e,	// (0x0001c6e6) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xde7a,	// (0x0001c6f2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbc3,	// (0x0001e43b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x70df,	// (0x00015957) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe05f,	// (0x0001c8d7) sp_fs_scroll_pane_cp02

0x9ef2,	// (0x0001876a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9ef2,	// (0x0001876a) popup_sp_fs_calendar_preview_list_single_pane

0x9516,	// (0x00017d8e) main_cam6_pano_pane

0x958b,	// (0x00017e03) main_mup3_pane_ParamLimits

0x9516,	// (0x00017d8e) main_phacti_pane

0x6aa7,	// (0x0001531f) bg_button_pane_cp11

0x6ac1,	// (0x00015339) main_mobtv_info_pane_g2_ParamLimits

0x6ac1,	// (0x00015339) main_mobtv_info_pane_g2

0x0001,

0xfb28,	// (0x0001e3a0) main_mobtv_info_pane_g_ParamLimits

0xfb28,	// (0x0001e3a0) main_mobtv_info_pane_g

0x9d07,	// (0x0001857f) sc_clock_pane_t5_ParamLimits

0x9d07,	// (0x0001857f) sc_clock_pane_t5

0xa9ec,	// (0x00019264) main_radioblah_pane_g1_ParamLimits

0xa9fa,	// (0x00019272) main_radioblah_pane_t3_ParamLimits

0xa9fa,	// (0x00019272) main_radioblah_pane_t3

0xa9fa,	// (0x00019272) main_radioblah_pane_t4_ParamLimits

0xa9fa,	// (0x00019272) main_radioblah_pane_t4

0x958b,	// (0x00017e03) main_radioblah_text_pane_ParamLimits

0x958b,	// (0x00017e03) main_radioblah_text_pane

0xdcbd,	// (0x0001c535) main_radioblah_info_pane_g1_ParamLimits

0xdd01,	// (0x0001c579) main_radioblah_info_pane_t4_ParamLimits

0xdd01,	// (0x0001c579) main_radioblah_info_pane_t4

0x958b,	// (0x00017e03) main_sp_fs_calendar_pane

0x7613,	// (0x00015e8b) main_phacti_pane_g1

0x761b,	// (0x00015e93) phacti_note_pane_ParamLimits

0x761b,	// (0x00015e93) phacti_note_pane

0xe150,	// (0x0001c9c8) phacti_term_pane_ParamLimits

0xe150,	// (0x0001c9c8) phacti_term_pane

0xe165,	// (0x0001c9dd) phacti_note_pane_t1_ParamLimits

0xe165,	// (0x0001c9dd) phacti_note_pane_t1

0xe17c,	// (0x0001c9f4) phacti_term_pane_g1

0xe184,	// (0x0001c9fc) phacti_term_pane_t1_ParamLimits

0xe184,	// (0x0001c9fc) phacti_term_pane_t1

0xe1ae,	// (0x0001ca26) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe1b6,	// (0x0001ca2e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc2a,	// (0x0001e4a2) popup_sp_fs_calendar_preview_list_single_pane_g

0xe1be,	// (0x0001ca36) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe1be,	// (0x0001ca36) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe1d4,	// (0x0001ca4c) aid_popup_sp_fs_bg_corner_pane

0x9cfd,	// (0x00018575) popup_sp_fs_calendar_preview_bg_pane_g1

0x9516,	// (0x00017d8e) popup_sp_fs_calendar_preview_bg_pane

0xe1dc,	// (0x0001ca54) popup_sp_fs_calendar_preview_list_pane

0xe1ed,	// (0x0001ca65) bg_main_sp_fs_cale_pane_ParamLimits

0xe1ed,	// (0x0001ca65) bg_main_sp_fs_cale_pane

0xe205,	// (0x0001ca7d) listscroll_cale_mrui_pane_ParamLimits

0xe205,	// (0x0001ca7d) listscroll_cale_mrui_pane

0xc3a2,	// (0x0001ac1a) listscroll_sp_fs_schedule_track_pane

0xe21d,	// (0x0001ca95) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe21d,	// (0x0001ca95) main_sp_fs_ctrlbar_pane_cp01

0xc3a2,	// (0x0001ac1a) main_sp_fs_ribbon_pane

0xe233,	// (0x0001caab) popup_sp_fs_cale_preview_window

0xd1c4,	// (0x0001ba3c) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd1c4,	// (0x0001ba3c) list_single_sp_fs_schedule_track_pane

0xd1e8,	// (0x0001ba60) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd1e8,	// (0x0001ba60) bg_sp_fs_highlight_list_pane_cp03

0xd1dc,	// (0x0001ba54) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd1dc,	// (0x0001ba54) list_single_sp_fs_schedule_track_pane_g1

0xd1dc,	// (0x0001ba54) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd1dc,	// (0x0001ba54) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc2f,	// (0x0001e4a7) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc2f,	// (0x0001e4a7) list_single_sp_fs_schedule_track_pane_g

0x762f,	// (0x00015ea7) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x762f,	// (0x00015ea7) list_single_sp_fs_schedule_track_pane_t1

0x7641,	// (0x00015eb9) sp_fs_schedule_track_pane_ParamLimits

0x7641,	// (0x00015eb9) sp_fs_schedule_track_pane

0xc3aa,	// (0x0001ac22) sp_fs_schedule_track_pane_g1

0xc3aa,	// (0x0001ac22) sp_fs_schedule_track_pane_g2

0xc3aa,	// (0x0001ac22) sp_fs_schedule_track_pane_g3

0xc3aa,	// (0x0001ac22) sp_fs_schedule_track_pane_g4

0xc3aa,	// (0x0001ac22) sp_fs_schedule_track_pane_g5

0x0004,

0xf7c3,	// (0x0001e03b) sp_fs_schedule_track_pane_g

0xc3aa,	// (0x0001ac22) bg_sp_fs_schedule_viewer_highlight_g1

0xc3aa,	// (0x0001ac22) bg_sp_fs_schedule_viewer_highlight_g2

0xc3aa,	// (0x0001ac22) bg_sp_fs_schedule_viewer_highlight_g3

0xc3aa,	// (0x0001ac22) bg_sp_fs_schedule_viewer_highlight_g4

0xc3aa,	// (0x0001ac22) bg_sp_fs_schedule_viewer_highlight_g5

0xc3aa,	// (0x0001ac22) bg_sp_fs_schedule_viewer_highlight_g6

0xc3aa,	// (0x0001ac22) bg_sp_fs_schedule_viewer_highlight_g7

0xc3aa,	// (0x0001ac22) bg_sp_fs_schedule_viewer_highlight_g8

0xc3aa,	// (0x0001ac22) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc34,	// (0x0001e4ac) bg_sp_fs_schedule_viewer_highlight_g

0xc3a2,	// (0x0001ac1a) bg_main_sp_fs_ribbon_pane

0xc3aa,	// (0x0001ac22) main_sp_fs_ribbon_pane_g1

0xe245,	// (0x0001cabd) main_sp_fs_ribbon_pane_t1

0xe245,	// (0x0001cabd) main_sp_fs_ribbon_pane_t2

0xe245,	// (0x0001cabd) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc47,	// (0x0001e4bf) main_sp_fs_ribbon_pane_t

0xc3a2,	// (0x0001ac1a) main_sp_fs_ribbon_scheduler_pane

0xc3aa,	// (0x0001ac22) bg_main_sp_fs_ribbon_pane_g1

0xc3aa,	// (0x0001ac22) bg_main_sp_fs_ribbon_pane_g2

0xc3aa,	// (0x0001ac22) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf69b,	// (0x0001df13) bg_main_sp_fs_ribbon_pane_g

0xc3aa,	// (0x0001ac22) main_sp_fs_ribbon_scheduler_pane_g1

0xc3aa,	// (0x0001ac22) main_sp_fs_ribbon_scheduler_pane_g2

0xc3aa,	// (0x0001ac22) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf69b,	// (0x0001df13) main_sp_fs_ribbon_scheduler_pane_g

0xe253,	// (0x0001cacb) list_cale_mrui_pane

0x764d,	// (0x00015ec5) sp_fs_scroll_pane_cp07_ParamLimits

0x764d,	// (0x00015ec5) sp_fs_scroll_pane_cp07

0xd1e8,	// (0x0001ba60) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd1e8,	// (0x0001ba60) bg_sp_fs_schedule_viewer_highlight

0xc3a2,	// (0x0001ac1a) list_single_sp_fs_schedule_track_pane_cp01

0xc3a2,	// (0x0001ac1a) list_sp_fs_schedule_track_pane

0xe260,	// (0x0001cad8) sp_fs_scroll_pane_cp06_ParamLimits

0xe260,	// (0x0001cad8) sp_fs_scroll_pane_cp06

0x9cfd,	// (0x00018575) bgmain_sp_fs_calendar_pane_g1

0x7669,	// (0x00015ee1) list_single_cale_mrui_pane_ParamLimits

0x7669,	// (0x00015ee1) list_single_cale_mrui_pane

0xe274,	// (0x0001caec) list_single_cale_mrui_row_pane_ParamLimits

0xe274,	// (0x0001caec) list_single_cale_mrui_row_pane

0xe281,	// (0x0001caf9) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe281,	// (0x0001caf9) list_single_cale_mrui_row_pane_g1

0xe2c6,	// (0x0001cb3e) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe2c6,	// (0x0001cb3e) list_single_cale_mrui_row_pane_t1

0x7689,	// (0x00015f01) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7689,	// (0x00015f01) list_single_cale_mrui_row_pane_t2

0xe2d8,	// (0x0001cb50) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe2d8,	// (0x0001cb50) list_single_cale_mrui_row_pane_t3

0xe307,	// (0x0001cb7f) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe307,	// (0x0001cb7f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc55,	// (0x0001e4cd) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc55,	// (0x0001e4cd) list_single_cale_mrui_row_pane_t

0x76ef,	// (0x00015f67) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x76ef,	// (0x00015f67) list_single_cmail_header_editor_pane_bg_cp01

0x771b,	// (0x00015f93) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x771b,	// (0x00015f93) list_single_cmail_header_editor_pane_bg_cp02

0xe338,	// (0x0001cbb0) main_radioblah_text_pane_t1_ParamLimits

0xe338,	// (0x0001cbb0) main_radioblah_text_pane_t1

0xe352,	// (0x0001cbca) cam6_indi_pane_cp01

0xe35a,	// (0x0001cbd2) cam6_mode_pane_cp01

0xe362,	// (0x0001cbda) cam6_pano_pane

0xe36b,	// (0x0001cbe3) cam6_zoom_pane_cp01

0xe375,	// (0x0001cbed) cam6_pano_image_pane

0xe37e,	// (0x0001cbf6) cam6_pano_pane_g1

0xdbb0,	// (0x0001c428) cam6_pano_pane_g2

0xe387,	// (0x0001cbff) cam6_pano_pane_g3

0xe390,	// (0x0001cc08) cam6_pano_pane_g4

0xc64f,	// (0x0001aec7) cam6_pano_pane_g5

0xe399,	// (0x0001cc11) cam6_pano_pane_g6

0xe3a1,	// (0x0001cc19) cam6_pano_pane_g7

0xe3a9,	// (0x0001cc21) cam6_pano_pane_g8

0xe3b2,	// (0x0001cc2a) cam6_pano_pane_g9

0x0008,

0xfc5e,	// (0x0001e4d6) cam6_pano_pane_g

0x9516,	// (0x00017d8e) main_browser_tag_pane

0xe131,	// (0x0001c9a9) grid_navstr_albumart_pane

0xe3bd,	// (0x0001cc35) cell_navstr_albumart_pane_ParamLimits

0xe3bd,	// (0x0001cc35) cell_navstr_albumart_pane

0xe3d9,	// (0x0001cc51) cell_navstr_albumart_pane_g1

0xe3e1,	// (0x0001cc59) cell_navstr_albumart_pane_g2

0xe3e9,	// (0x0001cc61) cell_navstr_albumart_pane_g3

0xe3f1,	// (0x0001cc69) cell_navstr_albumart_pane_g4

0x0003,

0xfc71,	// (0x0001e4e9) cell_navstr_albumart_pane_g

0x7739,	// (0x00015fb1) bt_list_pane_ParamLimits

0x7739,	// (0x00015fb1) bt_list_pane

0x774f,	// (0x00015fc7) bt_list_pane_t1

0x775e,	// (0x00015fd6) bt_list_pane_t2

0x0001,

0xfc7a,	// (0x0001e4f2) bt_list_pane_t

0x9516,	// (0x00017d8e) main_cale_prevew_pane

0x776d,	// (0x00015fe5) popup_cale_preview_window_ParamLimits

0x776d,	// (0x00015fe5) popup_cale_preview_window

0x958b,	// (0x00017e03) bg_popup_preview_window_pane_cp05_ParamLimits

0x958b,	// (0x00017e03) bg_popup_preview_window_pane_cp05

0xe3f9,	// (0x0001cc71) list_cale_preview_pane_ParamLimits

0xe3f9,	// (0x0001cc71) list_cale_preview_pane

0x778a,	// (0x00016002) list_double_cale_preview_pane_ParamLimits

0x778a,	// (0x00016002) list_double_cale_preview_pane

0x779e,	// (0x00016016) list_single_cale_preview_pane_ParamLimits

0x779e,	// (0x00016016) list_single_cale_preview_pane

0x77b6,	// (0x0001602e) list_single_cale_preview_pane_g1

0x77be,	// (0x00016036) list_single_cale_preview_pane_t1_ParamLimits

0x77be,	// (0x00016036) list_single_cale_preview_pane_t1

0x77d3,	// (0x0001604b) list_double_cale_preview_pane_g1

0x77db,	// (0x00016053) list_double_cale_preview_pane_t1_ParamLimits

0x77db,	// (0x00016053) list_double_cale_preview_pane_t1

0x77f0,	// (0x00016068) list_double_cale_preview_pane_t2_ParamLimits

0x77f0,	// (0x00016068) list_double_cale_preview_pane_t2

0x0001,

0xfc7f,	// (0x0001e4f7) list_double_cale_preview_pane_t_ParamLimits

0xfc7f,	// (0x0001e4f7) list_double_cale_preview_pane_t

0x9516,	// (0x00017d8e) main_ezdial_pane

0x958b,	// (0x00017e03) main_sp_fs_email_pane_ParamLimits

0x704a,	// (0x000158c2) cmail_ddmenu_btn01_pane_ParamLimits

0x704a,	// (0x000158c2) cmail_ddmenu_btn01_pane

0x705d,	// (0x000158d5) cmail_ddmenu_btn02_pane_ParamLimits

0x705d,	// (0x000158d5) cmail_ddmenu_btn02_pane

0x7080,	// (0x000158f8) cmail_ddmenu_btn03_pane_ParamLimits

0x7080,	// (0x000158f8) cmail_ddmenu_btn03_pane

0x711e,	// (0x00015996) main_sp_fs_ctrlbar_pane_ParamLimits

0x7142,	// (0x000159ba) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x74a4,	// (0x00015d1c) list_cmail_body_pane_ParamLimits

0xe075,	// (0x0001c8ed) bg_button_pane_cp12

0xe08a,	// (0x0001c902) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe08a,	// (0x0001c902) list_single_cmail_header_detail_pane_g3

0xe097,	// (0x0001c90f) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe097,	// (0x0001c90f) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc16,	// (0x0001e48e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc16,	// (0x0001e48e) list_single_cmail_header_detail_pane_t

0xe199,	// (0x0001ca11) phacti_term_pane_t2_ParamLimits

0xe199,	// (0x0001ca11) phacti_term_pane_t2

0x0001,

0xfc25,	// (0x0001e49d) phacti_term_pane_t_ParamLimits

0xfc25,	// (0x0001e49d) phacti_term_pane_t

0xe405,	// (0x0001cc7d) aid_size_list_single_double

0x7808,	// (0x00016080) popup_ezdial_listscroll_window

0xe411,	// (0x0001cc89) popup_number_entry_window_cp01

0x9f96,	// (0x0001880e) bg_popup_call_pane_cp09

0xe41e,	// (0x0001cc96) ezdial_list_pane

0xe426,	// (0x0001cc9e) scroll_pane_cp23

0xaa0e,	// (0x00019286) bg_button_pane_cp028_ParamLimits

0xaa0e,	// (0x00019286) bg_button_pane_cp028

0x7824,	// (0x0001609c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x7824,	// (0x0001609c) cmail_ddmenu_btn01_pane_g1

0x7833,	// (0x000160ab) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x7833,	// (0x000160ab) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc84,	// (0x0001e4fc) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc84,	// (0x0001e4fc) cmail_ddmenu_btn01_pane_g

0xe42e,	// (0x0001cca6) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe42e,	// (0x0001cca6) cmail_ddmenu_btn01_pane_t1

0xaa0e,	// (0x00019286) bg_button_pane_cp029_ParamLimits

0xaa0e,	// (0x00019286) bg_button_pane_cp029

0x7849,	// (0x000160c1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x7849,	// (0x000160c1) cmail_ddmenu_btn02_pane_g1

0x7864,	// (0x000160dc) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x7864,	// (0x000160dc) cmail_ddmenu_btn02_pane_t1

0x958b,	// (0x00017e03) bg_button_pane_cp031_ParamLimits

0x958b,	// (0x00017e03) bg_button_pane_cp031

0x7849,	// (0x000160c1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x7849,	// (0x000160c1) cmail_ddmenu_btn03_pane_g1

0x7864,	// (0x000160dc) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x7864,	// (0x000160dc) cmail_ddmenu_btn03_pane_t1

0x9d07,	// (0x0001857f) cell_dialer2_keypad_pane_t1_ParamLimits

0xc68d,	// (0x0001af05) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc68d,	// (0x0001af05) cell_dialer2_keypad_pane_t1_copy1

0x68c8,	// (0x00015140) ncimui_group_button_pane

0x958b,	// (0x00017e03) main_sp_fs_calendar_pane_ParamLimits

0x74bb,	// (0x00015d33) list_single_cmail_header_caption_pane_ParamLimits

0xe1e4,	// (0x0001ca5c) aid_recal_txt_sm_pane

0x9516,	// (0x00017d8e) mian_recal_day_pane

0xe233,	// (0x0001caab) popup_sp_fs_cale_preview_window_ParamLimits

0xe444,	// (0x0001ccbc) list_recal_day_pane

0xe487,	// (0x0001ccff) list_single_recal_day_pane_ParamLimits

0xe487,	// (0x0001ccff) list_single_recal_day_pane

0xe499,	// (0x0001cd11) list_single_recal_day_pane_g1_ParamLimits

0xe499,	// (0x0001cd11) list_single_recal_day_pane_g1

0xe4a5,	// (0x0001cd1d) list_single_recal_day_pane_g2_ParamLimits

0xe4a5,	// (0x0001cd1d) list_single_recal_day_pane_g2

0xe4b1,	// (0x0001cd29) list_single_recal_day_pane_g3_ParamLimits

0xe4b1,	// (0x0001cd29) list_single_recal_day_pane_g3

0x788b,	// (0x00016103) list_single_recal_day_pane_g4_ParamLimits

0x788b,	// (0x00016103) list_single_recal_day_pane_g4

0xe4bd,	// (0x0001cd35) list_single_recal_day_pane_g5_ParamLimits

0xe4bd,	// (0x0001cd35) list_single_recal_day_pane_g5

0xe4c9,	// (0x0001cd41) list_single_recal_day_pane_g6_ParamLimits

0xe4c9,	// (0x0001cd41) list_single_recal_day_pane_g6

0x0004,

0xfc93,	// (0x0001e50b) list_single_recal_day_pane_g_ParamLimits

0xfc93,	// (0x0001e50b) list_single_recal_day_pane_g

0xe4dd,	// (0x0001cd55) list_single_recal_day_pane_t1

0xe4ef,	// (0x0001cd67) list_single_recal_day_pane_t2

0x0001,

0xfc9e,	// (0x0001e516) list_single_recal_day_pane_t

0x78a3,	// (0x0001611b) ncimui_query_button_pane_ParamLimits

0x78a3,	// (0x0001611b) ncimui_query_button_pane

0x78b3,	// (0x0001612b) ncimui_query_button_pane_t1_ParamLimits

0x78b3,	// (0x0001612b) ncimui_query_button_pane_t1

0xe501,	// (0x0001cd79) ncimui_query_button_pane_t2_ParamLimits

0xe501,	// (0x0001cd79) ncimui_query_button_pane_t2

0x0001,

0xfca3,	// (0x0001e51b) ncimui_query_button_pane_t_ParamLimits

0xfca3,	// (0x0001e51b) ncimui_query_button_pane_t

0x78c6,	// (0x0001613e) query_button_pane_ParamLimits

0x78c6,	// (0x0001613e) query_button_pane

0x9516,	// (0x00017d8e) bg_button_pane_cp0028

0xe514,	// (0x0001cd8c) query_button_pane_t1

0x333c,	// (0x00011bb4) main_tport_pane_ParamLimits

0x7337,	// (0x00015baf) bg_popup_window_pane_cp01_ParamLimits

0x7337,	// (0x00015baf) bg_popup_window_pane_cp01

0x7350,	// (0x00015bc8) heading_pane_cp08_ParamLimits

0x7350,	// (0x00015bc8) heading_pane_cp08

0x7366,	// (0x00015bde) heading_pane_cp07_ParamLimits

0x7366,	// (0x00015bde) heading_pane_cp07

0x743d,	// (0x00015cb5) cell_tport_appsw_pane_g2

0x0002,

0xfc03,	// (0x0001e47b) cell_tport_appsw_pane_g

0x28d0,	// (0x00011148) input_candi_list_open_g1

0xa38a,	// (0x00018c02) list_cale_time_pane_g6_ParamLimits

0xa38a,	// (0x00018c02) list_cale_time_pane_g6

0x39eb,	// (0x00012263) aid_size_touch_calib_1_ParamLimits

0x39eb,	// (0x00012263) aid_size_touch_calib_1

0x39fd,	// (0x00012275) aid_size_touch_calib_2_ParamLimits

0x39fd,	// (0x00012275) aid_size_touch_calib_2

0x3a15,	// (0x0001228d) aid_size_touch_calib_3_ParamLimits

0x3a15,	// (0x0001228d) aid_size_touch_calib_3

0x3a33,	// (0x000122ab) aid_size_touch_calib_4_ParamLimits

0x3a33,	// (0x000122ab) aid_size_touch_calib_4

0x3a4b,	// (0x000122c3) main_touch_calib_button_group_pane_ParamLimits

0x3a4b,	// (0x000122c3) main_touch_calib_button_group_pane

0x3a63,	// (0x000122db) main_touch_calib_pane_g1_ParamLimits

0x3a75,	// (0x000122ed) main_touch_calib_pane_g2_ParamLimits

0x3a87,	// (0x000122ff) main_touch_calib_pane_g3_ParamLimits

0x3a99,	// (0x00012311) main_touch_calib_pane_g4_ParamLimits

0xf649,	// (0x0001dec1) main_touch_calib_pane_g_ParamLimits

0x3aab,	// (0x00012323) main_touch_calib_pane_t1_ParamLimits

0x3ac5,	// (0x0001233d) main_touch_calib_pane_t2_ParamLimits

0x3adf,	// (0x00012357) main_touch_calib_pane_t3_ParamLimits

0x3af3,	// (0x0001236b) main_touch_calib_pane_t4_ParamLimits

0x3b09,	// (0x00012381) main_touch_calib_pane_t5_ParamLimits

0xf652,	// (0x0001deca) main_touch_calib_pane_t_ParamLimits

0xc40a,	// (0x0001ac82) list_single_fp_cale_pane_g3_ParamLimits

0xc40a,	// (0x0001ac82) list_single_fp_cale_pane_g3

0x958b,	// (0x00017e03) bg_button_pane_cp012_ParamLimits

0x958b,	// (0x00017e03) bg_vkb2_func_pane_cp03_ParamLimits

0x5a4c,	// (0x000142c4) cell_vitu2_function_top_pane_g1_ParamLimits

0x958b,	// (0x00017e03) bg_vkb2_func_pane_cp04_ParamLimits

0x6853,	// (0x000150cb) main_ncimui_button_group_pane_ParamLimits

0x6853,	// (0x000150cb) main_ncimui_button_group_pane

0x68b3,	// (0x0001512b) main_ncimui_pane_t3_ParamLimits

0x68b3,	// (0x0001512b) main_ncimui_pane_t3

0xe147,	// (0x0001c9bf) phacti_button_group_pane

0xe405,	// (0x0001cc7d) aid_size_list_single_double_ParamLimits

0x7808,	// (0x00016080) popup_ezdial_listscroll_window_ParamLimits

0xe411,	// (0x0001cc89) popup_number_entry_window_cp01_ParamLimits

0x78d9,	// (0x00016151) phacti_button_pane_ParamLimits

0x78d9,	// (0x00016151) phacti_button_pane

0x9516,	// (0x00017d8e) bg_button_pane_cp14

0xe522,	// (0x0001cd9a) phacti_button_pane_t1

0x78ea,	// (0x00016162) main_touch_calib_button_pane_ParamLimits

0x78ea,	// (0x00016162) main_touch_calib_button_pane

0x9d75,	// (0x000185ed) bg_button_pane_cp18_ParamLimits

0x9d75,	// (0x000185ed) bg_button_pane_cp18

0xe530,	// (0x0001cda8) main_touch_calib_button_pane_t1_ParamLimits

0xe530,	// (0x0001cda8) main_touch_calib_button_pane_t1

0xe546,	// (0x0001cdbe) main_touch_calib_button_pane_t2_ParamLimits

0xe546,	// (0x0001cdbe) main_touch_calib_button_pane_t2

0x0001,

0xfca8,	// (0x0001e520) main_touch_calib_button_pane_t_ParamLimits

0xfca8,	// (0x0001e520) main_touch_calib_button_pane_t

0x9516,	// (0x00017d8e) cell_ncimui_button_pane

0x9516,	// (0x00017d8e) bg_button_pane_cp032

0xe564,	// (0x0001cddc) cell_ncimui_button_pane_t1

0xcb5d,	// (0x0001b3d5) image3_infobar_pane_ParamLimits

0xcb5d,	// (0x0001b3d5) image3_infobar_pane

0x6c27,	// (0x0001549f) fs_bigclock_status_pane_ParamLimits

0x6c27,	// (0x0001549f) fs_bigclock_status_pane

0x6c34,	// (0x000154ac) main_fs_bigclock_clock_pane_ParamLimits

0x6c34,	// (0x000154ac) main_fs_bigclock_clock_pane

0x6c66,	// (0x000154de) main_fs_bigclock_indi_pane_ParamLimits

0x6c66,	// (0x000154de) main_fs_bigclock_indi_pane

0x6ca6,	// (0x0001551e) main_fs_bigclock_swipe_pane_ParamLimits

0x6ca6,	// (0x0001551e) main_fs_bigclock_swipe_pane

0x9516,	// (0x00017d8e) main_fs_clock_dumped_data

0x6cf2,	// (0x0001556a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x6cf2,	// (0x0001556a) list_single_fs_bigclock_indicator_pane_g1

0x6d0b,	// (0x00015583) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x6d0b,	// (0x00015583) list_single_fs_bigclock_indicator_pane_g2

0x6d25,	// (0x0001559d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x6d25,	// (0x0001559d) list_single_fs_bigclock_indicator_pane_g3

0x6d3f,	// (0x000155b7) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x6d3f,	// (0x000155b7) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb5c,	// (0x0001e3d4) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb5c,	// (0x0001e3d4) list_single_fs_bigclock_indicator_pane_g

0x6d6e,	// (0x000155e6) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x6d6e,	// (0x000155e6) list_single_fs_bigclock_indicator_pane_t1

0x6d96,	// (0x0001560e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x6d96,	// (0x0001560e) list_single_fs_bigclock_indicator_pane_t2

0x6dbe,	// (0x00015636) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x6dbe,	// (0x00015636) list_single_fs_bigclock_indicator_pane_t3

0x6de6,	// (0x0001565e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x6de6,	// (0x0001565e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb67,	// (0x0001e3df) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb67,	// (0x0001e3df) list_single_fs_bigclock_indicator_pane_t

0xe572,	// (0x0001cdea) image3_infobar_fav_pane_ParamLimits

0xe572,	// (0x0001cdea) image3_infobar_fav_pane

0xe582,	// (0x0001cdfa) image3_infobar_loc_pane_ParamLimits

0xe582,	// (0x0001cdfa) image3_infobar_loc_pane

0xe598,	// (0x0001ce10) image3_infobar_time_pane_ParamLimits

0xe598,	// (0x0001ce10) image3_infobar_time_pane

0x9cfd,	// (0x00018575) image3_infobar_time_pane_g1

0xe5a8,	// (0x0001ce20) image3_infobar_time_pane_t1

0x9cfd,	// (0x00018575) image3_infobar_loc_pane_g1

0xe5b6,	// (0x0001ce2e) image3_infobar_loc_pane_g2

0x0001,

0xfcad,	// (0x0001e525) image3_infobar_loc_pane_g

0xe5be,	// (0x0001ce36) image3_infobar_loc_pane_t1

0x9cfd,	// (0x00018575) image3_infobar_fav_pane_g1

0xe5cc,	// (0x0001ce44) image3_infobar_fav_pane_g2

0x0001,

0xfcb2,	// (0x0001e52a) image3_infobar_fav_pane_g

0xe5d4,	// (0x0001ce4c) fs_bigclock_status_battery_pane

0xe5dd,	// (0x0001ce55) fs_bigclock_status_signal_pane

0xe5e6,	// (0x0001ce5e) fs_bigclock_status_title_pane

0xe5ef,	// (0x0001ce67) fs_bigclock_status_signal_pane_g1

0xe5f8,	// (0x0001ce70) fs_bigclock_status_signal_pane_g2

0x0001,

0xfcb7,	// (0x0001e52f) fs_bigclock_status_signal_pane_g

0xe600,	// (0x0001ce78) fs_bigclock_status_battery_pane_g1

0xe609,	// (0x0001ce81) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcbc,	// (0x0001e534) fs_bigclock_status_battery_pane_g

0xe611,	// (0x0001ce89) fs_bigclock_status_title_pane_t1

0x78ff,	// (0x00016177) main_fs_bigclock_clock_pane_g1

0x78ff,	// (0x00016177) main_fs_bigclock_clock_pane_g2

0x78ff,	// (0x00016177) main_fs_bigclock_clock_pane_g3

0x78ff,	// (0x00016177) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcc1,	// (0x0001e539) main_fs_bigclock_clock_pane_g

0x7917,	// (0x0001618f) main_fs_bigclock_clock_pane_t1

0x792f,	// (0x000161a7) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcca,	// (0x0001e542) main_fs_bigclock_clock_pane_t

0xe61f,	// (0x0001ce97) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe61f,	// (0x0001ce97) list_single_fs_bigclock_indicator_pane

0xe630,	// (0x0001cea8) list_single_fs_bigclock_pane_ParamLimits

0xe630,	// (0x0001cea8) list_single_fs_bigclock_pane

0xe656,	// (0x0001cece) main_fs_bigclock_indicator_pane_t1

0xe665,	// (0x0001cedd) list_single_fs_bigclock_pane_g1

0xe66d,	// (0x0001cee5) list_single_fs_bigclock_pane_t1

0x9cfd,	// (0x00018575) main_fs_bigclock_swipe_pane_g1

0xe6b0,	// (0x0001cf28) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfcdb,	// (0x0001e553) main_fs_bigclock_swipe_pane_g

0xe6b8,	// (0x0001cf30) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe6b8,	// (0x0001cf30) main_fs_bigclock_swipe_pane_t1

0x228b,	// (0x00010b03) call_type_pane_ParamLimits

0x9516,	// (0x00017d8e) main_btmg_pane

0xe2ad,	// (0x0001cb25) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe2ad,	// (0x0001cb25) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc4e,	// (0x0001e4c6) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc4e,	// (0x0001e4c6) list_single_cale_mrui_row_pane_g

0xe46d,	// (0x0001cce5) list_recal_vselct_arw_lo_pane

0xe475,	// (0x0001cced) list_recal_vselct_arw_up_pane

0xe47d,	// (0x0001ccf5) list_recal_vselct_pane

0x7991,	// (0x00016209) btmg_button_pane

0x799b,	// (0x00016213) main_btmg_pane_g1

0x9516,	// (0x00017d8e) bg_button_pane_cp044

0xe6d5,	// (0x0001cf4d) btmg_button_pane_t1

0xbbf0,	// (0x0001a468) aid_listscroll_gen

0x958b,	// (0x00017e03) main_cntbar_detail_pane

0xe048,	// (0x0001c8c0) list_cmail_folder_pane

0xd1d0,	// (0x0001ba48) sp_fs_scroll_pane_cp03_ParamLimits

0xe6e3,	// (0x0001cf5b) list_single_fs_dyc_pane_cp01_ParamLimits

0xe6e3,	// (0x0001cf5b) list_single_fs_dyc_pane_cp01

0xe6fd,	// (0x0001cf75) aid_size_cmail_indent

0xe706,	// (0x0001cf7e) list_single_dyc_row_pane_cp01

0x79d9,	// (0x00016251) cntbar_detail_list_pane_ParamLimits

0x79d9,	// (0x00016251) cntbar_detail_list_pane

0x7a2b,	// (0x000162a3) main_cntbar_detail_cont_pane_ParamLimits

0x7a2b,	// (0x000162a3) main_cntbar_detail_cont_pane

0xd1d0,	// (0x0001ba48) scroll_pane_cp032_ParamLimits

0xd1d0,	// (0x0001ba48) scroll_pane_cp032

0x7a3f,	// (0x000162b7) cntbar_detail_list_event_pane_ParamLimits

0x7a3f,	// (0x000162b7) cntbar_detail_list_event_pane

0x79eb,	// (0x00016263) cntbar_detail_list_shct_pane

0xa218,	// (0x00018a90) aid_list_gen

0xe70f,	// (0x0001cf87) aid_scroll

0xe718,	// (0x0001cf90) aid_size_touch_scroll_bar

0x6e3d,	// (0x000156b5) aid_list_double

0x7a4f,	// (0x000162c7) aid_list_single

0x7a4f,	// (0x000162c7) aid_list_single_lg

0x7a58,	// (0x000162d0) aid_list_z_g_a_sm

0x7a60,	// (0x000162d8) aid_list_z_g_d

0x7a68,	// (0x000162e0) aid_txt_z_prm

0x7a76,	// (0x000162ee) aid_txt_z_prm_cp01

0x7a84,	// (0x000162fc) aid_txt_z_sec

0x7a92,	// (0x0001630a) main_cntbar_detail_cont_pane_g1_ParamLimits

0x7a92,	// (0x0001630a) main_cntbar_detail_cont_pane_g1

0x7aa6,	// (0x0001631e) main_cntbar_detail_cont_pane_g2_ParamLimits

0x7aa6,	// (0x0001631e) main_cntbar_detail_cont_pane_g2

0x0001,

0xfce0,	// (0x0001e558) main_cntbar_detail_cont_pane_g_ParamLimits

0xfce0,	// (0x0001e558) main_cntbar_detail_cont_pane_g

0xe721,	// (0x0001cf99) main_cntbar_detail_cont_pane_t1

0xe72f,	// (0x0001cfa7) main_cntbar_detail_cont_pane_t2

0xe73d,	// (0x0001cfb5) main_cntbar_detail_cont_pane_t3

0x0002,

0xfce5,	// (0x0001e55d) main_cntbar_detail_cont_pane_t

0x7ab6,	// (0x0001632e) cell_cntbar_detail_list_shct_pane_ParamLimits

0x7ab6,	// (0x0001632e) cell_cntbar_detail_list_shct_pane

0xe74b,	// (0x0001cfc3) cntbar_detail_list_shct_pane_g1

0xe754,	// (0x0001cfcc) cntbar_detail_list_shct_pane_g2

0x0001,

0xfcec,	// (0x0001e564) cntbar_detail_list_shct_pane_g

0x7ac8,	// (0x00016340) cntbar_detail_list_event_pane_g1_ParamLimits

0x7ac8,	// (0x00016340) cntbar_detail_list_event_pane_g1

0x7ad4,	// (0x0001634c) cntbar_detail_list_event_pane_g2_ParamLimits

0x7ad4,	// (0x0001634c) cntbar_detail_list_event_pane_g2

0x0005,

0xfcf1,	// (0x0001e569) cntbar_detail_list_event_pane_g_ParamLimits

0xfcf1,	// (0x0001e569) cntbar_detail_list_event_pane_g

0x7b42,	// (0x000163ba) cntbar_detail_list_event_pane_t1_ParamLimits

0x7b42,	// (0x000163ba) cntbar_detail_list_event_pane_t1

0x7b57,	// (0x000163cf) cntbar_detail_list_event_pane_t2_ParamLimits

0x7b57,	// (0x000163cf) cntbar_detail_list_event_pane_t2

0x0002,

0xfcfe,	// (0x0001e576) cntbar_detail_list_event_pane_t_ParamLimits

0xfcfe,	// (0x0001e576) cntbar_detail_list_event_pane_t

0x9cfd,	// (0x00018575) cell_cntbar_detail_list_shct_pane_g1

0x2625,	// (0x00010e9d) navi_pane_mv_g3

0x958b,	// (0x00017e03) main_cntbar_detail_pane_ParamLimits

0x9516,	// (0x00017d8e) main_notif_wgt_pane

0xc855,	// (0x0001b0cd) aid_tch_main_mp4_pane_g4

0xcacd,	// (0x0001b345) popup_slider_window_cp02

0xe463,	// (0x0001ccdb) list_recal_day_event_pane

0x79a5,	// (0x0001621d) cntbar_detail_btn_pane_ParamLimits

0x79a5,	// (0x0001621d) cntbar_detail_btn_pane

0x79be,	// (0x00016236) cntbar_detail_btn_pane_cp01_ParamLimits

0x79be,	// (0x00016236) cntbar_detail_btn_pane_cp01

0x79eb,	// (0x00016263) cntbar_detail_list_shct_pane_ParamLimits

0x79fb,	// (0x00016273) cntbar_detail_pane_g1_ParamLimits

0x79fb,	// (0x00016273) cntbar_detail_pane_g1

0x7a0f,	// (0x00016287) cntbar_detail_pane_t1_ParamLimits

0x7a0f,	// (0x00016287) cntbar_detail_pane_t1

0x7ae0,	// (0x00016358) cntbar_detail_list_event_pane_g3_ParamLimits

0x7ae0,	// (0x00016358) cntbar_detail_list_event_pane_g3

0x7af8,	// (0x00016370) cntbar_detail_list_event_pane_g4_ParamLimits

0x7af8,	// (0x00016370) cntbar_detail_list_event_pane_g4

0x7b10,	// (0x00016388) cntbar_detail_list_event_pane_g5_ParamLimits

0x7b10,	// (0x00016388) cntbar_detail_list_event_pane_g5

0x7b28,	// (0x000163a0) cntbar_detail_list_event_pane_g6_ParamLimits

0x7b28,	// (0x000163a0) cntbar_detail_list_event_pane_g6

0x7b6c,	// (0x000163e4) cntbar_detail_list_event_pane_t3_ParamLimits

0x7b6c,	// (0x000163e4) cntbar_detail_list_event_pane_t3

0x7b7e,	// (0x000163f6) popup_notif_wgt_window_ParamLimits

0x7b7e,	// (0x000163f6) popup_notif_wgt_window

0x7b97,	// (0x0001640f) popup_submenu_window_cp01_ParamLimits

0x7b97,	// (0x0001640f) popup_submenu_window_cp01

0x9f96,	// (0x0001880e) bg_popup_window_pane_cp10

0xe75d,	// (0x0001cfd5) listscroll_notif_wgt_pane

0xe76f,	// (0x0001cfe7) list_notif_wgt_window

0xe778,	// (0x0001cff0) scroll_pane_cp033

0x7bab,	// (0x00016423) list_notif_wgt_row_pane_ParamLimits

0x7bab,	// (0x00016423) list_notif_wgt_row_pane

0xe781,	// (0x0001cff9) aid_size_list_notif_wgt_del

0xe78e,	// (0x0001d006) list_notif_wgt_row_pane_g1

0xe79a,	// (0x0001d012) list_notif_wgt_row_pane_g2

0xe7a9,	// (0x0001d021) list_notif_wgt_row_pane_g3

0x0002,

0xfd05,	// (0x0001e57d) list_notif_wgt_row_pane_g

0xe7b6,	// (0x0001d02e) list_notif_wgt_row_pane_t1

0xe7cc,	// (0x0001d044) list_notif_wgt_row_pane_t2

0xe7de,	// (0x0001d056) list_notif_wgt_row_pane_t3

0x0002,

0xfd0c,	// (0x0001e584) list_notif_wgt_row_pane_t

0xd023,	// (0x0001b89b) list_recal_day_event_pane_g1

0xe7f0,	// (0x0001d068) list_recal_day_event_pane_t1

0x9516,	// (0x00017d8e) bg_button_pane_cp045

0x7bbb,	// (0x00016433) cntbar_detail_btn_pane_t1

0xaa0e,	// (0x00019286) main_callh_pane_ParamLimits

0xaa0e,	// (0x00019286) main_callh_pane

0x9516,	// (0x00017d8e) main_coverflow0_pane

0x9516,	// (0x00017d8e) main_wgtman_pane

0x6cc7,	// (0x0001553f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x6cc7,	// (0x0001553f) main_fs_bigclock_unlock_btn_pane

0x7435,	// (0x00015cad) bg_button_pane_cp16

0x7445,	// (0x00015cbd) cell_tport_appsw_pane_g3

0x7bc9,	// (0x00016441) cf0_flow_pane_ParamLimits

0x7bc9,	// (0x00016441) cf0_flow_pane

0xe7ff,	// (0x0001d077) listscroll_cf0_pane

0xe80a,	// (0x0001d082) main_cf0_pane_g1

0x7bde,	// (0x00016456) main_cf0_pane_t1_ParamLimits

0x7bde,	// (0x00016456) main_cf0_pane_t1

0x7bf5,	// (0x0001646d) main_cf0_pane_t2_ParamLimits

0x7bf5,	// (0x0001646d) main_cf0_pane_t2

0x0001,

0xfd18,	// (0x0001e590) main_cf0_pane_t_ParamLimits

0xfd18,	// (0x0001e590) main_cf0_pane_t

0xe81c,	// (0x0001d094) scroll_pane_cp11

0x7c0c,	// (0x00016484) cf0_flow_pane_g1

0x7c18,	// (0x00016490) cf0_flow_pane_g2

0x0001,

0xfd1d,	// (0x0001e595) cf0_flow_pane_g

0x7c24,	// (0x0001649c) cf0_flow_pane_t1

0x9516,	// (0x00017d8e) main_call6_pane

0x9516,	// (0x00017d8e) main_calllock_pane

0x7c36,	// (0x000164ae) call6_btn_grp_pane_ParamLimits

0x7c36,	// (0x000164ae) call6_btn_grp_pane

0x7c50,	// (0x000164c8) call6_pane_g1_ParamLimits

0x7c50,	// (0x000164c8) call6_pane_g1

0x7c69,	// (0x000164e1) popup_call6_1st_window_ParamLimits

0x7c69,	// (0x000164e1) popup_call6_1st_window

0x7c7d,	// (0x000164f5) popup_call6_2nd_window_ParamLimits

0x7c7d,	// (0x000164f5) popup_call6_2nd_window

0x7c91,	// (0x00016509) cell_call6_btn_pane_ParamLimits

0x7c91,	// (0x00016509) cell_call6_btn_pane

0x9f96,	// (0x0001880e) bg_popup_call2_in_pane_cp03

0xe827,	// (0x0001d09f) popup_call6_1st_window_g1

0xe82f,	// (0x0001d0a7) popup_call6_1st_window_g2

0xe837,	// (0x0001d0af) popup_call6_1st_window_g3

0x0002,

0xfd22,	// (0x0001e59a) popup_call6_1st_window_g

0xe83f,	// (0x0001d0b7) popup_call6_1st_window_t1

0xe84e,	// (0x0001d0c6) popup_call6_1st_window_t2

0xe85e,	// (0x0001d0d6) popup_call6_1st_window_t3

0x0002,

0xfd29,	// (0x0001e5a1) popup_call6_1st_window_t

0x9f96,	// (0x0001880e) bg_popup_call2_in_pane_cp04

0xe86e,	// (0x0001d0e6) popup_call6_2nd_window_g1

0xe876,	// (0x0001d0ee) popup_call6_2nd_window_g2

0xe87e,	// (0x0001d0f6) popup_call6_2nd_window_g3

0x0002,

0xfd30,	// (0x0001e5a8) popup_call6_2nd_window_g

0xe886,	// (0x0001d0fe) popup_call6_2nd_window_t1

0x9516,	// (0x00017d8e) bg_button_pane_cp15

0xe895,	// (0x0001d10d) cell_call6_btn_pane_g1

0xe89e,	// (0x0001d116) cell_call6_btn_pane_t1

0x7ca5,	// (0x0001651d) listscroll_wgtman_pane_ParamLimits

0x7ca5,	// (0x0001651d) listscroll_wgtman_pane

0x7cc6,	// (0x0001653e) wgtman_btn_pane_ParamLimits

0x7cc6,	// (0x0001653e) wgtman_btn_pane

0xa7e9,	// (0x00019061) aid_scroll_copy1

0xe8ad,	// (0x0001d125) list_wgtman_pane

0x7d09,	// (0x00016581) wgtman_btn_pane_g1_ParamLimits

0x7d09,	// (0x00016581) wgtman_btn_pane_g1

0x7d35,	// (0x000165ad) wgtman_btn_pane_t1_ParamLimits

0x7d35,	// (0x000165ad) wgtman_btn_pane_t1

0xe8b7,	// (0x0001d12f) wgtman_btn_pane_t2_ParamLimits

0xe8b7,	// (0x0001d12f) wgtman_btn_pane_t2

0x0001,

0xfd37,	// (0x0001e5af) wgtman_btn_pane_t_ParamLimits

0xfd37,	// (0x0001e5af) wgtman_btn_pane_t

0x7d72,	// (0x000165ea) listrow_wgtman_pane_ParamLimits

0x7d72,	// (0x000165ea) listrow_wgtman_pane

0x7d86,	// (0x000165fe) listrow_wgtman_pane_g1

0x7d93,	// (0x0001660b) listrow_wgtman_pane_g2

0x0001,

0xfd3c,	// (0x0001e5b4) listrow_wgtman_pane_g

0x7db1,	// (0x00016629) listrow_wgtman_pane_t1

0x7dc9,	// (0x00016641) listrow_wgtman_pane_t2

0x0001,

0xfd41,	// (0x0001e5b9) listrow_wgtman_pane_t

0x7def,	// (0x00016667) wait_bar_pane_cp09

0xe8ce,	// (0x0001d146) main_calllock_btn_pane

0xe8d8,	// (0x0001d150) main_calllock_pane_g1

0x9516,	// (0x00017d8e) bg_button_pane_cp17

0xe895,	// (0x0001d10d) main_calllock_btn_pane_g1

0xe8e4,	// (0x0001d15c) main_calllock_btn_pane_t1

0x9516,	// (0x00017d8e) main_dialer3_pane

0x9516,	// (0x00017d8e) main_fmrd2_pane

0x9cfd,	// (0x00018575) main_fs_bigclock_unlock_btn_pane_g1

0x7e09,	// (0x00016681) main_fs_bigclock_unlock_btn_pane_t1

0x7e17,	// (0x0001668f) area_fmrd2_info_pane_ParamLimits

0x7e17,	// (0x0001668f) area_fmrd2_info_pane

0x7e28,	// (0x000166a0) area_fmrd2_visual_pane_ParamLimits

0x7e28,	// (0x000166a0) area_fmrd2_visual_pane

0x7e36,	// (0x000166ae) fmrd2_indi_pane_ParamLimits

0x7e36,	// (0x000166ae) fmrd2_indi_pane

0x7e43,	// (0x000166bb) area_fmrd2_visual_pane_g1

0x7e4b,	// (0x000166c3) area_fmrd2_visual_pane_t1

0x7e5b,	// (0x000166d3) area_fmrd2_visual_pane_t2

0x7e6b,	// (0x000166e3) area_fmrd2_visual_pane_t3

0x0002,

0xfd4b,	// (0x0001e5c3) area_fmrd2_visual_pane_t

0x7e7b,	// (0x000166f3) area_fmrd2_info_pane_g1

0x7e83,	// (0x000166fb) area_fmrd2_info_pane_t1

0x7e93,	// (0x0001670b) area_fmrd2_info_pane_t2

0x7ea3,	// (0x0001671b) area_fmrd2_info_pane_t3

0x7eb3,	// (0x0001672b) area_fmrd2_info_pane_t4

0x0003,

0xfd52,	// (0x0001e5ca) area_fmrd2_info_pane_t

0x7ec3,	// (0x0001673b) fmrd2_indi_pane_t1

0x7ed3,	// (0x0001674b) fmrd2_indi_pane_t2

0x7ee3,	// (0x0001675b) fmrd2_indi_pane_t3

0x0002,

0xfd5b,	// (0x0001e5d3) fmrd2_indi_pane_t

0x6d50,	// (0x000155c8) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x6d50,	// (0x000155c8) list_single_fs_bigclock_indicator_pane_g5

0x6e05,	// (0x0001567d) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x6e05,	// (0x0001567d) list_single_fs_bigclock_indicator_pane_t5

0xcac1,	// (0x0001b339) aid_cell_bcale_month_pane_ParamLimits

0xcac1,	// (0x0001b339) aid_cell_bcale_month_pane

0xcac1,	// (0x0001b339) bcale_month_pane_ParamLimits

0xcac1,	// (0x0001b339) bcale_month_pane

0xd1e8,	// (0x0001ba60) bcale_preview_pane_ParamLimits

0xd1e8,	// (0x0001ba60) bcale_preview_pane

0xe66d,	// (0x0001cee5) list_single_fs_bigclock_pane_t1_ParamLimits

0xe68c,	// (0x0001cf04) list_single_fs_bigclock_pane_t2_ParamLimits

0xe68c,	// (0x0001cf04) list_single_fs_bigclock_pane_t2

0x0001,

0xfcd6,	// (0x0001e54e) list_single_fs_bigclock_pane_t_ParamLimits

0xfcd6,	// (0x0001e54e) list_single_fs_bigclock_pane_t

0x7e01,	// (0x00016679) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd46,	// (0x0001e5be) main_fs_bigclock_unlock_btn_pane_g

0x7ef3,	// (0x0001676b) aid_dia3_key_size_ParamLimits

0x7ef3,	// (0x0001676b) aid_dia3_key_size

0x7f07,	// (0x0001677f) aid_dia3_listrow_size_ParamLimits

0x7f07,	// (0x0001677f) aid_dia3_listrow_size

0x7f21,	// (0x00016799) dia3_keypad_fun_pane_ParamLimits

0x7f21,	// (0x00016799) dia3_keypad_fun_pane

0x7f3b,	// (0x000167b3) dia3_keypad_num_pane_ParamLimits

0x7f3b,	// (0x000167b3) dia3_keypad_num_pane

0x7f55,	// (0x000167cd) dia3_listscroll_pane_ParamLimits

0x7f55,	// (0x000167cd) dia3_listscroll_pane

0x7f6b,	// (0x000167e3) dia3_numentry_pane_ParamLimits

0x7f6b,	// (0x000167e3) dia3_numentry_pane

0xe8f3,	// (0x0001d16b) dia3_list_pane

0x7f85,	// (0x000167fd) scroll_pane_cp12

0x9516,	// (0x00017d8e) bg_dia3_numentry_pane

0x7f90,	// (0x00016808) dia3_numentry_pane_t1

0xc3a2,	// (0x0001ac1a) cell_dia3_key_num_pane

0x7f9f,	// (0x00016817) cell_dia3_key0_fun_pane_ParamLimits

0x7f9f,	// (0x00016817) cell_dia3_key0_fun_pane

0x7fb3,	// (0x0001682b) cell_dia3_key1_fun_pane_ParamLimits

0x7fb3,	// (0x0001682b) cell_dia3_key1_fun_pane

0x7fc8,	// (0x00016840) dia3_listrow_pane

0xda6c,	// (0x0001c2e4) bg_dia3_numentry_pane_g1

0x9516,	// (0x00017d8e) bg_button_pane_cp21

0x7fda,	// (0x00016852) cell_dia3_key_num_pane_t1

0x7fe8,	// (0x00016860) cell_dia3_key_num_pane_t2

0x7fe8,	// (0x00016860) cell_dia3_key_num_pane_t3

0x7fe8,	// (0x00016860) cell_dia3_key_num_pane_t4

0x0003,

0xfd62,	// (0x0001e5da) cell_dia3_key_num_pane_t

0x9516,	// (0x00017d8e) bg_button_pane_cp19

0x7ff7,	// (0x0001686f) cell_dia3_key0_fun_pane_g1

0x9516,	// (0x00017d8e) bg_button_pane_cp20

0x7fff,	// (0x00016877) cell_dia3_key1_fun_pane_g1

0xd1e8,	// (0x0001ba60) area_left_week_number_pane

0xd1e8,	// (0x0001ba60) area_top_day_name_pane

0xd1e8,	// (0x0001ba60) frame_month_view_pane

0xd1e8,	// (0x0001ba60) grid_month_view_pane

0xd1e8,	// (0x0001ba60) cell_top_day_name_pane_ParamLimits

0xd1e8,	// (0x0001ba60) cell_top_day_name_pane

0xd1e8,	// (0x0001ba60) cell_area_left_week_number_pane_ParamLimits

0xd1e8,	// (0x0001ba60) cell_area_left_week_number_pane

0xd1e8,	// (0x0001ba60) cell_month_view_pane_ParamLimits

0xd1e8,	// (0x0001ba60) cell_month_view_pane

0xd1dc,	// (0x0001ba54) frm_month_g1

0xd1dc,	// (0x0001ba54) frm_month_g2

0xd1dc,	// (0x0001ba54) frm_month_g3

0xd1dc,	// (0x0001ba54) frm_month_g4

0xd1dc,	// (0x0001ba54) frm_month_g5

0xd1dc,	// (0x0001ba54) frm_month_g6

0xd1dc,	// (0x0001ba54) frm_month_g7

0xd1dc,	// (0x0001ba54) frm_month_g8

0xd1dc,	// (0x0001ba54) frm_month_g9

0xd1dc,	// (0x0001ba54) frm_month_g10

0xd1dc,	// (0x0001ba54) frm_month_g11

0xd1dc,	// (0x0001ba54) frm_month_g12

0xd1dc,	// (0x0001ba54) frm_month_g13

0xd1dc,	// (0x0001ba54) frm_month_g14

0xd1dc,	// (0x0001ba54) frm_month_g15

0xd1dc,	// (0x0001ba54) frm_month_g16

0x000f,

0xfd6b,	// (0x0001e5e3) frm_month_g

0xe8fd,	// (0x0001d175) cell_top_day_name_pane_t1

0xd1dc,	// (0x0001ba54) cell_area_left_week_number_pane_g1

0xe8fd,	// (0x0001d175) cell_area_left_week_number_pane_t1

0xd1dc,	// (0x0001ba54) cell_month_view_pane_g1

0xe8fd,	// (0x0001d175) cell_month_view_pane_t1

0x9516,	// (0x00017d8e) main_fps_pane

0xde34,	// (0x0001c6ac) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xde34,	// (0x0001c6ac) cmail_ddmenu_btn02_pane_cp1

0xde50,	// (0x0001c6c8) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xde50,	// (0x0001c6c8) cmail_ddmenu_btn02_pane_cp2

0x7858,	// (0x000160d0) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x7858,	// (0x000160d0) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc89,	// (0x0001e501) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc89,	// (0x0001e501) cmail_ddmenu_btn02_pane_g

0x7879,	// (0x000160f1) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x7879,	// (0x000160f1) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc8e,	// (0x0001e506) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc8e,	// (0x0001e506) cmail_ddmenu_btn02_pane_t

0x8007,	// (0x0001687f) fps_text_pane_ParamLimits

0x8007,	// (0x0001687f) fps_text_pane

0x801e,	// (0x00016896) main_fps_pane_g1_ParamLimits

0x801e,	// (0x00016896) main_fps_pane_g1

0x8036,	// (0x000168ae) wait_bar_pane_cp010_ParamLimits

0x8036,	// (0x000168ae) wait_bar_pane_cp010

0x8049,	// (0x000168c1) fps_text_pane_t1_ParamLimits

0x8049,	// (0x000168c1) fps_text_pane_t1

0xd1f4,	// (0x0001ba6c) cam4_image_uncrop_pane_g1

0xd1fd,	// (0x0001ba75) cam4_image_uncrop_pane_g2

0x4e65,	// (0x000136dd) cam4_image_uncrop_pane_g3

0x4e6e,	// (0x000136e6) cam4_image_uncrop_pane_g4

0x0003,

0xf7e0,	// (0x0001e058) cam4_image_uncrop_pane_g

0x7fc8,	// (0x00016840) dia3_listrow_pane_ParamLimits

0x9516,	// (0x00017d8e) main_phob2_pane

0x73df,	// (0x00015c57) cell_tport_appsw_pane_cp02_ParamLimits

0x73df,	// (0x00015c57) cell_tport_appsw_pane_cp02

0x73f3,	// (0x00015c6b) cell_tport_appsw_pane_cp03_ParamLimits

0x73f3,	// (0x00015c6b) cell_tport_appsw_pane_cp03

0x9516,	// (0x00017d8e) phob2_contact_card_pane

0x9516,	// (0x00017d8e) phob2_listscroll_pane

0xe90f,	// (0x0001d187) phob2_list_pane

0xe917,	// (0x0001d18f) scroll_pane_cp034

0x8061,	// (0x000168d9) phob2_cc_data_pane_ParamLimits

0x8061,	// (0x000168d9) phob2_cc_data_pane

0x807a,	// (0x000168f2) phob2_cc_listscroll_pane_ParamLimits

0x807a,	// (0x000168f2) phob2_cc_listscroll_pane

0x809b,	// (0x00016913) list_double_large_graphic_phob2_pane_ParamLimits

0x809b,	// (0x00016913) list_double_large_graphic_phob2_pane

0x80bc,	// (0x00016934) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x80bc,	// (0x00016934) list_double_large_graphic_phob2_pane_g1

0x80ce,	// (0x00016946) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x80ce,	// (0x00016946) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd8c,	// (0x0001e604) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd8c,	// (0x0001e604) list_double_large_graphic_phob2_pane_g

0x8102,	// (0x0001697a) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x8102,	// (0x0001697a) list_double_large_graphic_phob2_pane_t1

0x8126,	// (0x0001699e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8126,	// (0x0001699e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd95,	// (0x0001e60d) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd95,	// (0x0001e60d) list_double_large_graphic_phob2_pane_t

0x958b,	// (0x00017e03) list_highlight_pane_cp024

0x8147,	// (0x000169bf) phob2_cc_button_pane

0x8153,	// (0x000169cb) phob2_cc_data_pane_g1_ParamLimits

0x8153,	// (0x000169cb) phob2_cc_data_pane_g1

0x816b,	// (0x000169e3) phob2_cc_data_pane_g2_ParamLimits

0x816b,	// (0x000169e3) phob2_cc_data_pane_g2

0x0001,

0xfd9a,	// (0x0001e612) phob2_cc_data_pane_g_ParamLimits

0xfd9a,	// (0x0001e612) phob2_cc_data_pane_g

0x8183,	// (0x000169fb) phob2_cc_data_pane_t1_ParamLimits

0x8183,	// (0x000169fb) phob2_cc_data_pane_t1

0x81b1,	// (0x00016a29) phob2_cc_data_pane_t2_ParamLimits

0x81b1,	// (0x00016a29) phob2_cc_data_pane_t2

0x81e3,	// (0x00016a5b) phob2_cc_data_pane_t3_ParamLimits

0x81e3,	// (0x00016a5b) phob2_cc_data_pane_t3

0x0002,

0xfd9f,	// (0x0001e617) phob2_cc_data_pane_t_ParamLimits

0xfd9f,	// (0x0001e617) phob2_cc_data_pane_t

0xe91f,	// (0x0001d197) phob2_cc_list_pane_ParamLimits

0xe91f,	// (0x0001d197) phob2_cc_list_pane

0xd208,	// (0x0001ba80) scroll_pane_cp035_ParamLimits

0xd208,	// (0x0001ba80) scroll_pane_cp035

0x958b,	// (0x00017e03) bg_button_pane_cp033

0x8213,	// (0x00016a8b) phob2_cc_button_pane_g1

0x821f,	// (0x00016a97) phob2_cc_button_pane_t1

0x8234,	// (0x00016aac) phob2_cc_button_pane_t2

0x0001,

0xfda6,	// (0x0001e61e) phob2_cc_button_pane_t

0x8246,	// (0x00016abe) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8246,	// (0x00016abe) list_double_large_graphic_phob2_cc_pane

0x827d,	// (0x00016af5) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x827d,	// (0x00016af5) list_double_large_graphic_phob2_cc_pane_g1

0x8289,	// (0x00016b01) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x8289,	// (0x00016b01) list_double_large_graphic_phob2_cc_pane_g2

0x8295,	// (0x00016b0d) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x8295,	// (0x00016b0d) list_double_large_graphic_phob2_cc_pane_g3

0x82a1,	// (0x00016b19) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x82a1,	// (0x00016b19) list_double_large_graphic_phob2_cc_pane_g4

0x82ad,	// (0x00016b25) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x82ad,	// (0x00016b25) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdab,	// (0x0001e623) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdab,	// (0x0001e623) list_double_large_graphic_phob2_cc_pane_g

0x82b9,	// (0x00016b31) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x82b9,	// (0x00016b31) list_double_large_graphic_phob2_cc_pane_t1

0x82e2,	// (0x00016b5a) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x82e2,	// (0x00016b5a) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdb6,	// (0x0001e62e) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdb6,	// (0x0001e62e) list_double_large_graphic_phob2_cc_pane_t

0xe92b,	// (0x0001d1a3) list_highlight_pane_cp025_ParamLimits

0xe92b,	// (0x0001d1a3) list_highlight_pane_cp025

0x958b,	// (0x00017e03) bg_button_pane_cp033_ParamLimits

0x8213,	// (0x00016a8b) phob2_cc_button_pane_g1_ParamLimits

0x821f,	// (0x00016a97) phob2_cc_button_pane_t1_ParamLimits

0x8234,	// (0x00016aac) phob2_cc_button_pane_t2_ParamLimits

0xfda6,	// (0x0001e61e) phob2_cc_button_pane_t_ParamLimits

0x05fb,	// (0x0000ee73) popup_wgtman_window

0xcea5,	// (0x0001b71d) scroll_pane_cp038

0x7ceb,	// (0x00016563) wgtman_btn_pane_cp_01_ParamLimits

0x7ceb,	// (0x00016563) wgtman_btn_pane_cp_01

0xe939,	// (0x0001d1b1) wgtman_content_pane

0xe942,	// (0x0001d1ba) wgtman_heading_pane

0x9516,	// (0x00017d8e) bg_heading_pane_cp02

0xe94b,	// (0x0001d1c3) wgtman_heading_pane_g1

0xe953,	// (0x0001d1cb) wgtman_heading_pane_t1

0xe961,	// (0x0001d1d9) scroll_pane_cp036

0xe969,	// (0x0001d1e1) wgtman_list_pane

0xdd3c,	// (0x0001c5b4) wgtman_list_pane_t1_ParamLimits

0xdd3c,	// (0x0001c5b4) wgtman_list_pane_t1

0xcbed,	// (0x0001b465) cam4_grid_pane

0x5bec,	// (0x00014464) bg_button_pane_cp015_ParamLimits

0x5c03,	// (0x0001447b) bg_button_pane_cp016_ParamLimits

0x5c0f,	// (0x00014487) bg_button_pane_cp017_ParamLimits

0x5c6a,	// (0x000144e2) popup_vitu2_query_window_g3_ParamLimits

0x5c6a,	// (0x000144e2) popup_vitu2_query_window_g3

0x5d0d,	// (0x00014585) popup_vitu2_query_window_t6_ParamLimits

0x5d0d,	// (0x00014585) popup_vitu2_query_window_t6

0x5d38,	// (0x000145b0) popup_vitu2_query_window_t7_ParamLimits

0x5d38,	// (0x000145b0) popup_vitu2_query_window_t7

0xd1f4,	// (0x0001ba6c) cam4_grid_pane_g1

0xd1fd,	// (0x0001ba75) cam4_grid_pane_g2

0xe971,	// (0x0001d1e9) cam4_grid_pane_g3

0xe97a,	// (0x0001d1f2) cam4_grid_pane_g4

0x0003,

0xfdbb,	// (0x0001e633) cam4_grid_pane_g

0x115e,	// (0x0000f9d6) aid_placing_vt_slider_lsc_ParamLimits

0x143b,	// (0x0000fcb3) vidtel_button_pane_ParamLimits

0x143b,	// (0x0000fcb3) vidtel_button_pane

0x9516,	// (0x00017d8e) bg_button_pane_cp034

0xe985,	// (0x0001d1fd) vidtel_button_pane_g1

0xe98d,	// (0x0001d205) vidtel_button_pane_t1

0xcfd7,	// (0x0001b84f) aid_size_vtel_slider_touch

0xd208,	// (0x0001ba80) scroll_pane_cp039

0x6a31,	// (0x000152a9) ncim_query_button_pane_cp01_ParamLimits

0x6a50,	// (0x000152c8) ncimui_query_pane_g1_ParamLimits

0x958b,	// (0x00017e03) input_focus_pane_cp012_ParamLimits

0xdaaa,	// (0x0001c322) ncim_query_entry_pane_t1_ParamLimits

0xd208,	// (0x0001ba80) scroll_pane_cp039_ParamLimits

0x2597,	// (0x00010e0f) navi_pane_bcale_mc_g1

0x259f,	// (0x00010e17) navi_pane_bcale_mc_t1

0xde86,	// (0x0001c6fe) main_sp_fs_email_pane_g1

0xde92,	// (0x0001c70a) main_sp_fs_email_pane_g2

0x0001,

0xfbcc,	// (0x0001e444) main_sp_fs_email_pane_g

0xe2b9,	// (0x0001cb31) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe2b9,	// (0x0001cb31) list_single_cale_mrui_row_pane_g3

0x7899,	// (0x00016111) list_single_recal_day_pane_g5_event_pane

0xe4d5,	// (0x0001cd4d) list_single_recal_day_pane_g7

0xe9a3,	// (0x0001d21b) list_recal_day_event_pane_cp01

0xe9ac,	// (0x0001d224) list_recal_vselct_arw_lo_pane_cp01

0xe9b4,	// (0x0001d22c) list_recal_vselct_arw_up_pane_cp01

0xe9bc,	// (0x0001d234) list_recal_vselct_pane_cp01

0xd023,	// (0x0001b89b) list_recal_day_event_pane_cp01_g1

0xe9c6,	// (0x0001d23e) list_recal_day_event_pane_cp01_t1

0xe4dd,	// (0x0001cd55) list_single_recal_day_pane_t1_ParamLimits

0xe4ef,	// (0x0001cd67) list_single_recal_day_pane_t2_ParamLimits

0xfc9e,	// (0x0001e516) list_single_recal_day_pane_t_ParamLimits

0x9c3c,	// (0x000184b4) bg_notes_pane_ParamLimits

0x9d39,	// (0x000185b1) list_notes_pane_ParamLimits

0x0713,	// (0x0000ef8b) scroll_pane_cp06_ParamLimits

0x9d75,	// (0x000185ed) main_notes_pane_ParamLimits

0x958b,	// (0x00017e03) main_welc_pane

0x8353,	// (0x00016bcb) main_welc_body_pane_ParamLimits

0x8353,	// (0x00016bcb) main_welc_body_pane

0x8372,	// (0x00016bea) main_welc_opti_pane_ParamLimits

0x8372,	// (0x00016bea) main_welc_opti_pane

0x83e7,	// (0x00016c5f) main_welc_pane_t1_ParamLimits

0x83e7,	// (0x00016c5f) main_welc_pane_t1

0x862a,	// (0x00016ea2) main_welc_body_row_pane_ParamLimits

0x862a,	// (0x00016ea2) main_welc_body_row_pane

0x9ca9,	// (0x00018521) main_welc_opti_row_pane_ParamLimits

0x9ca9,	// (0x00018521) main_welc_opti_row_pane

0xe9dc,	// (0x0001d254) main_welc_opti_row_pane_g1

0x863e,	// (0x00016eb6) main_welc_opti_row_pane_t1

0xe9ed,	// (0x0001d265) main_welc_body_row_pane_t1

0xe767,	// (0x0001cfdf) popup_notif_wgt_heading_pane

0xe781,	// (0x0001cff9) aid_size_list_notif_wgt_del_ParamLimits

0xe78e,	// (0x0001d006) list_notif_wgt_row_pane_g1_ParamLimits

0xe79a,	// (0x0001d012) list_notif_wgt_row_pane_g2_ParamLimits

0xe7a9,	// (0x0001d021) list_notif_wgt_row_pane_g3_ParamLimits

0xfd05,	// (0x0001e57d) list_notif_wgt_row_pane_g_ParamLimits

0xe7b6,	// (0x0001d02e) list_notif_wgt_row_pane_t1_ParamLimits

0xe7cc,	// (0x0001d044) list_notif_wgt_row_pane_t2_ParamLimits

0xe7de,	// (0x0001d056) list_notif_wgt_row_pane_t3_ParamLimits

0xfd0c,	// (0x0001e584) list_notif_wgt_row_pane_t_ParamLimits

0x7d86,	// (0x000165fe) listrow_wgtman_pane_g1_ParamLimits

0x7d93,	// (0x0001660b) listrow_wgtman_pane_g2_ParamLimits

0xfd3c,	// (0x0001e5b4) listrow_wgtman_pane_g_ParamLimits

0x7db1,	// (0x00016629) listrow_wgtman_pane_t1_ParamLimits

0x7dc9,	// (0x00016641) listrow_wgtman_pane_t2_ParamLimits

0xfd41,	// (0x0001e5b9) listrow_wgtman_pane_t_ParamLimits

0x7def,	// (0x00016667) wait_bar_pane_cp09_ParamLimits

0x9516,	// (0x00017d8e) bg_popup_heading_pane_cp02

0xe9fc,	// (0x0001d274) popup_notif_wgt_heading_pane_g1

0xea04,	// (0x0001d27c) popup_notif_wgt_heading_pane_t1

0x9516,	// (0x00017d8e) main_vids_pane

0x9516,	// (0x00017d8e) vids_listscroll_pane

0x864d,	// (0x00016ec5) scroll_pane_cp040

0x9516,	// (0x00017d8e) vids_list_pane

0x8658,	// (0x00016ed0) vids_list_double_pane_ParamLimits

0x8658,	// (0x00016ed0) vids_list_double_pane

0x866b,	// (0x00016ee3) vids_list_double_pane_g1

0x8674,	// (0x00016eec) vids_list_double_pane_t1

0x8684,	// (0x00016efc) vids_list_double_pane_t2

0x0001,

0xfdda,	// (0x0001e652) vids_list_double_pane_t

0x958b,	// (0x00017e03) main_ncimui_pane_ParamLimits

0x6867,	// (0x000150df) main_ncimui_pane_g1_ParamLimits

0x6873,	// (0x000150eb) main_ncimui_pane_g2_ParamLimits

0x6873,	// (0x000150eb) main_ncimui_pane_g2

0x0001,

0xfad2,	// (0x0001e34a) main_ncimui_pane_g_ParamLimits

0xfad2,	// (0x0001e34a) main_ncimui_pane_g

0x8391,	// (0x00016c09) main_welc_pane_g1_ParamLimits

0x8391,	// (0x00016c09) main_welc_pane_g1

0x83a6,	// (0x00016c1e) main_welc_pane_g2_ParamLimits

0x83a6,	// (0x00016c1e) main_welc_pane_g2

0x0003,

0xfdc4,	// (0x0001e63c) main_welc_pane_g_ParamLimits

0xfdc4,	// (0x0001e63c) main_welc_pane_g

0x9c3c,	// (0x000184b4) listscroll_mce_pane_ParamLimits

0x2677,	// (0x00010eef) wait_bar_pane_cp10

0xbbf8,	// (0x0001a470) main_cale_day_pane_ParamLimits

0xbbf8,	// (0x0001a470) main_cale_week_pane_ParamLimits

0x9c3c,	// (0x000184b4) main_messa_pane_ParamLimits

0x4336,	// (0x00012bae) main_clock2_btn_pane_ParamLimits

0x4336,	// (0x00012bae) main_clock2_btn_pane

0xc484,	// (0x0001acfc) main_clock2_btn_pane_cp01_ParamLimits

0xc484,	// (0x0001acfc) main_clock2_btn_pane_cp01

0xe253,	// (0x0001cacb) list_cale_mrui_pane_ParamLimits

0xe814,	// (0x0001d08c) main_cf0_pane_g2

0x0001,

0xfd13,	// (0x0001e58b) main_cf0_pane_g

0xd1e8,	// (0x0001ba60) area_left_week_number_pane_ParamLimits

0xd1e8,	// (0x0001ba60) area_top_day_name_pane_ParamLimits

0xd1e8,	// (0x0001ba60) frame_month_view_pane_ParamLimits

0xd1e8,	// (0x0001ba60) grid_month_view_pane_ParamLimits

0xd1dc,	// (0x0001ba54) frm_month_g1_ParamLimits

0xd1dc,	// (0x0001ba54) frm_month_g2_ParamLimits

0xd1dc,	// (0x0001ba54) frm_month_g3_ParamLimits

0xd1dc,	// (0x0001ba54) frm_month_g4_ParamLimits

0xd1dc,	// (0x0001ba54) frm_month_g5_ParamLimits

0xd1dc,	// (0x0001ba54) frm_month_g6_ParamLimits

0xd1dc,	// (0x0001ba54) frm_month_g7_ParamLimits

0xd1dc,	// (0x0001ba54) frm_month_g8_ParamLimits

0xd1dc,	// (0x0001ba54) frm_month_g9_ParamLimits

0xd1dc,	// (0x0001ba54) frm_month_g10_ParamLimits

0xd1dc,	// (0x0001ba54) frm_month_g11_ParamLimits

0xd1dc,	// (0x0001ba54) frm_month_g12_ParamLimits

0xd1dc,	// (0x0001ba54) frm_month_g13_ParamLimits

0xd1dc,	// (0x0001ba54) frm_month_g14_ParamLimits

0xd1dc,	// (0x0001ba54) frm_month_g15_ParamLimits

0xd1dc,	// (0x0001ba54) frm_month_g16_ParamLimits

0xfd6b,	// (0x0001e5e3) frm_month_g_ParamLimits

0xe8fd,	// (0x0001d175) cell_top_day_name_pane_t1_ParamLimits

0xd1dc,	// (0x0001ba54) cell_area_left_week_number_pane_g1_ParamLimits

0xe8fd,	// (0x0001d175) cell_area_left_week_number_pane_t1_ParamLimits

0xd1dc,	// (0x0001ba54) cell_month_view_pane_g1_ParamLimits

0xe8fd,	// (0x0001d175) cell_month_view_pane_t1_ParamLimits

0x9c34,	// (0x000184ac) main_clock2_btn_pane_g1

0xea12,	// (0x0001d28a) main_clock2_btn_pane_t1

0x958b,	// (0x00017e03) listscroll_cmail_pane_ParamLimits

0xde86,	// (0x0001c6fe) main_sp_fs_email_pane_g1_ParamLimits

0xde92,	// (0x0001c70a) main_sp_fs_email_pane_g2_ParamLimits

0xfbcc,	// (0x0001e444) main_sp_fs_email_pane_g_ParamLimits

0xe444,	// (0x0001ccbc) list_recal_day_pane_ParamLimits

0xe455,	// (0x0001cccd) mian_recal_day_pane_t1

0x7278,	// (0x00015af0) list_single_dyc_row_text_pane_t4_ParamLimits

0x7278,	// (0x00015af0) list_single_dyc_row_text_pane_t4

0x72c1,	// (0x00015b39) list_single_dyc_row_text_pane_t5_ParamLimits

0x72c1,	// (0x00015b39) list_single_dyc_row_text_pane_t5

0xdf3c,	// (0x0001c7b4) list_single_dyc_row_text_pane_t6_ParamLimits

0xdf3c,	// (0x0001c7b4) list_single_dyc_row_text_pane_t6

0x21e6,	// (0x00010a5e) aid_mgn_list_cale_time_pane

0x958b,	// (0x00017e03) main_gallery2_pane_ParamLimits

0xc498,	// (0x0001ad10) main_clock2_pane_cp01_t1

0xc4a6,	// (0x0001ad1e) main_clock2_pane_cp01_t3

0x0001,

0xf6bc,	// (0x0001df34) main_clock2_pane_cp01_t

0x0b76,	// (0x0000f3ee) cale_week_scroll_pane_g16_ParamLimits

0x0b76,	// (0x0000f3ee) cale_week_scroll_pane_g16

0x9f96,	// (0x0001880e) vorec_slider_pane

0xe98d,	// (0x0001d205) vidtel_button_pane_t1_ParamLimits

0x78ff,	// (0x00016177) main_fs_bigclock_clock_pane_g1_ParamLimits

0x78ff,	// (0x00016177) main_fs_bigclock_clock_pane_g2_ParamLimits

0x78ff,	// (0x00016177) main_fs_bigclock_clock_pane_g3_ParamLimits

0x78ff,	// (0x00016177) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfcc1,	// (0x0001e539) main_fs_bigclock_clock_pane_g_ParamLimits

0x7917,	// (0x0001618f) main_fs_bigclock_clock_pane_t1_ParamLimits

0x792f,	// (0x000161a7) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcca,	// (0x0001e542) main_fs_bigclock_clock_pane_t_ParamLimits

0x3bcb,	// (0x00012443) main_mup3_lyrics_pane_ParamLimits

0x3bcb,	// (0x00012443) main_mup3_lyrics_pane

0x86ac,	// (0x00016f24) main_mup3_lyrics_pane_t1_ParamLimits

0x86ac,	// (0x00016f24) main_mup3_lyrics_pane_t1

0xc83f,	// (0x0001b0b7) aid_main_mp4_pane_t1_area

0xc849,	// (0x0001b0c1) aid_main_mp4_pane_t2_area

0xc8f3,	// (0x0001b16b) main_mp4_pane_g7_ParamLimits

0xc8f3,	// (0x0001b16b) main_mp4_pane_g7

0xc8ff,	// (0x0001b177) main_mp4_pane_g8_ParamLimits

0xc8ff,	// (0x0001b177) main_mp4_pane_g8

0x4c2c,	// (0x000134a4) aid_call6_pane_g1_size

0x8265,	// (0x00016add) list_double_large_graphic_phob2_other_pane_ParamLimits

0x8265,	// (0x00016add) list_double_large_graphic_phob2_other_pane

0x9ea3,	// (0x0001871b) list_double_large_graphic_phob2_other_pane_g1

0x9516,	// (0x00017d8e) list_highlight_pane_cp026

0x958b,	// (0x00017e03) main_welc_pane_ParamLimits

0x70ab,	// (0x00015923) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x70ab,	// (0x00015923) main_sp_fs_ctrlbar_pane_g3

0x70c5,	// (0x0001593d) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x70c5,	// (0x0001593d) main_sp_fs_ctrlbar_pane_g4

0x70f9,	// (0x00015971) toolbar2_fixed_button_pane_cp01

0x7104,	// (0x0001597c) toolbar2_fixed_button_pane_cp02

0x7111,	// (0x00015989) toolbar2_fixed_button_pane_cp03

0x832d,	// (0x00016ba5) list_welc_entry_pane_ParamLimits

0x832d,	// (0x00016ba5) list_welc_entry_pane

0x83bb,	// (0x00016c33) main_welc_pane_g3_ParamLimits

0x83bb,	// (0x00016c33) main_welc_pane_g3

0x8409,	// (0x00016c81) main_welc_pane_t2_ParamLimits

0x8409,	// (0x00016c81) main_welc_pane_t2

0x842c,	// (0x00016ca4) main_welc_pane_t3_ParamLimits

0x842c,	// (0x00016ca4) main_welc_pane_t3

0x0005,

0xfdcd,	// (0x0001e645) main_welc_pane_t_ParamLimits

0xfdcd,	// (0x0001e645) main_welc_pane_t

0x8579,	// (0x00016df1) welc_button_pane_ParamLimits

0x8579,	// (0x00016df1) welc_button_pane

0x8612,	// (0x00016e8a) welc_service_logo_pane_ParamLimits

0x8612,	// (0x00016e8a) welc_service_logo_pane

0x86c7,	// (0x00016f3f) list_single_welc_entry_pane_ParamLimits

0x86c7,	// (0x00016f3f) list_single_welc_entry_pane

0x86d8,	// (0x00016f50) list_single_welc_entry_pane_g1

0x86e0,	// (0x00016f58) list_single_welc_entry_pane_t1

0x86ee,	// (0x00016f66) list_single_welc_entry_pane_t2

0x0001,

0xfddf,	// (0x0001e657) list_single_welc_entry_pane_t

0x9516,	// (0x00017d8e) bg_button_pane_cp035

0xea2e,	// (0x0001d2a6) welc_button_pane_t1

0x86fc,	// (0x00016f74) welc_service_logo_pane_g1

0x8705,	// (0x00016f7d) welc_service_logo_pane_g2

0x0001,

0xfde4,	// (0x0001e65c) welc_service_logo_pane_g

0x9516,	// (0x00017d8e) main_int_radio_pane

0xd948,	// (0x0001c1c0) list_single_fs_dyc_pane_g1

0x80dd,	// (0x00016955) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x80dd,	// (0x00016955) list_double_large_graphic_phob2_pane_g3

0x80ef,	// (0x00016967) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x80ef,	// (0x00016967) list_double_large_graphic_phob2_pane_g4

0x870e,	// (0x00016f86) main_int_radio1_pane_ParamLimits

0x870e,	// (0x00016f86) main_int_radio1_pane

0xea3c,	// (0x0001d2b4) find_pane_cp02

0x872b,	// (0x00016fa3) input_focus_pane_cp12_ParamLimits

0x872b,	// (0x00016fa3) input_focus_pane_cp12

0x873b,	// (0x00016fb3) input_focus_pane_cp13_ParamLimits

0x873b,	// (0x00016fb3) input_focus_pane_cp13

0x874f,	// (0x00016fc7) input_focus_pane_cp14_ParamLimits

0x874f,	// (0x00016fc7) input_focus_pane_cp14

0xea45,	// (0x0001d2bd) int_radio1_listscroll_pane

0x8763,	// (0x00016fdb) main_int_radio1_pane_g1_ParamLimits

0x8763,	// (0x00016fdb) main_int_radio1_pane_g1

0x8779,	// (0x00016ff1) main_int_radio1_pane_t1_ParamLimits

0x8779,	// (0x00016ff1) main_int_radio1_pane_t1

0x8792,	// (0x0001700a) main_int_radio1_pane_t2_ParamLimits

0x8792,	// (0x0001700a) main_int_radio1_pane_t2

0x87ad,	// (0x00017025) main_int_radio1_pane_t3_ParamLimits

0x87ad,	// (0x00017025) main_int_radio1_pane_t3

0x87c8,	// (0x00017040) main_int_radio1_pane_t4_ParamLimits

0x87c8,	// (0x00017040) main_int_radio1_pane_t4

0xea4f,	// (0x0001d2c7) main_int_radio1_pane_t5_ParamLimits

0xea4f,	// (0x0001d2c7) main_int_radio1_pane_t5

0x87da,	// (0x00017052) main_int_radio1_pane_t6_ParamLimits

0x87da,	// (0x00017052) main_int_radio1_pane_t6

0x87ef,	// (0x00017067) main_int_radio1_pane_t7_ParamLimits

0x87ef,	// (0x00017067) main_int_radio1_pane_t7

0x8804,	// (0x0001707c) main_int_radio1_pane_t8_ParamLimits

0x8804,	// (0x0001707c) main_int_radio1_pane_t8

0x8821,	// (0x00017099) main_int_radio1_pane_t9_ParamLimits

0x8821,	// (0x00017099) main_int_radio1_pane_t9

0x8833,	// (0x000170ab) main_int_radio1_pane_t10_ParamLimits

0x8833,	// (0x000170ab) main_int_radio1_pane_t10

0x8859,	// (0x000170d1) main_int_radio1_pane_t11_ParamLimits

0x8859,	// (0x000170d1) main_int_radio1_pane_t11

0x887f,	// (0x000170f7) main_int_radio1_pane_t12_ParamLimits

0x887f,	// (0x000170f7) main_int_radio1_pane_t12

0x000b,

0xfde9,	// (0x0001e661) main_int_radio1_pane_t_ParamLimits

0xfde9,	// (0x0001e661) main_int_radio1_pane_t

0xe90f,	// (0x0001d187) int_radio_list_pane

0xe917,	// (0x0001d18f) scroll_pane_cp037

0xea61,	// (0x0001d2d9) list_double_large_graphic_int_radio_pane_ParamLimits

0xea61,	// (0x0001d2d9) list_double_large_graphic_int_radio_pane

0xea75,	// (0x0001d2ed) list_double_large_graphic_int_radio_pane_g1

0xea7e,	// (0x0001d2f6) list_double_large_graphic_int_radio_pane_t1

0xea8c,	// (0x0001d304) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe02,	// (0x0001e67a) list_double_large_graphic_int_radio_pane_t

0x9516,	// (0x00017d8e) list_highlight_pane_cp027

0xe9d4,	// (0x0001d24c) main_button_pane_4

0x83cf,	// (0x00016c47) main_welc_pane_g4_ParamLimits

0x83cf,	// (0x00016c47) main_welc_pane_g4

0x844f,	// (0x00016cc7) main_welc_pane_t4_ParamLimits

0x844f,	// (0x00016cc7) main_welc_pane_t4

0x8472,	// (0x00016cea) main_welc_pane_t5_ParamLimits

0x8472,	// (0x00016cea) main_welc_pane_t5

0x84b1,	// (0x00016d29) main_welc_pane_t6_ParamLimits

0x84b1,	// (0x00016d29) main_welc_pane_t6

0x858d,	// (0x00016e05) welc_button_pane_2_ParamLimits

0x858d,	// (0x00016e05) welc_button_pane_2

0x85b4,	// (0x00016e2c) welc_button_pane_3_ParamLimits

0x85b4,	// (0x00016e2c) welc_button_pane_3

0xe9d4,	// (0x0001d24c) welc_button_pane_4

0x85de,	// (0x00016e56) welc_button_pane_5_ParamLimits

0x85de,	// (0x00016e56) welc_button_pane_5

0x03ff,	// (0x0000ec77) main_popup_welc_pane

0xeab2,	// (0x0001d32a) main_welc_sk_g3

0xeabc,	// (0x0001d334) main_welc_sk_g4

0xeac6,	// (0x0001d33e) main_welc_sk_t3

0xead6,	// (0x0001d34e) main_welc_sk_t4

0xeae6,	// (0x0001d35e) popup_welc_pane_t4

0xeaf4,	// (0x0001d36c) popup_welc_pane_t5

0xeb02,	// (0x0001d37a) popup_welc_pane_t6

0x9516,	// (0x00017d8e) main_acti_pane

0x9516,	// (0x00017d8e) main_sso_pane

0x8891,	// (0x00017109) sso_body_pane_ParamLimits

0x8891,	// (0x00017109) sso_body_pane

0x88b4,	// (0x0001712c) sso_logo_pane_ParamLimits

0x88b4,	// (0x0001712c) sso_logo_pane

0x88f2,	// (0x0001716a) sso_sk_pane_ParamLimits

0x88f2,	// (0x0001716a) sso_sk_pane

0x8904,	// (0x0001717c) main_sso_logo_pane_g1

0x890d,	// (0x00017185) sso_sk_pane_t1_ParamLimits

0x890d,	// (0x00017185) sso_sk_pane_t1

0x8927,	// (0x0001719f) sso_sk_pane_t2_ParamLimits

0x8927,	// (0x0001719f) sso_sk_pane_t2

0x0001,

0xfe07,	// (0x0001e67f) sso_sk_pane_t_ParamLimits

0xfe07,	// (0x0001e67f) sso_sk_pane_t

0xeb44,	// (0x0001d3bc) aid_sso_gap

0xeb4d,	// (0x0001d3c5) aid_sso_txt1

0xeb57,	// (0x0001d3cf) aid_sso_txt2

0xeb61,	// (0x0001d3d9) aid_sso_txt3

0x0002,

0xfe0c,	// (0x0001e684) aid_sso_txt

0xeb6b,	// (0x0001d3e3) aid_sso_widget

0x8991,	// (0x00017209) sso_btn_pane_ParamLimits

0x8991,	// (0x00017209) sso_btn_pane

0x8a25,	// (0x0001729d) sso_option_pane_ParamLimits

0x8a25,	// (0x0001729d) sso_option_pane

0x8ad9,	// (0x00017351) sso_query_pane_ParamLimits

0x8ad9,	// (0x00017351) sso_query_pane

0x8b2f,	// (0x000173a7) sso_query_pane_cp01_ParamLimits

0x8b2f,	// (0x000173a7) sso_query_pane_cp01

0x8b8d,	// (0x00017405) sso_t_hdr_pane_ParamLimits

0x8b8d,	// (0x00017405) sso_t_hdr_pane

0x8bb7,	// (0x0001742f) sso_t_nml_pane_ParamLimits

0x8bb7,	// (0x0001742f) sso_t_nml_pane

0xeb75,	// (0x0001d3ed) sso_t_sub_pane

0x88c6,	// (0x0001713e) sso_popup_window_ParamLimits

0x88c6,	// (0x0001713e) sso_popup_window

0x893d,	// (0x000171b5) sso_apps_pane_ParamLimits

0x893d,	// (0x000171b5) sso_apps_pane

0x8967,	// (0x000171df) sso_body_pane_g1

0x8971,	// (0x000171e9) sso_body_pane_t1

0x8981,	// (0x000171f9) sso_body_pane_t2

0x0001,

0xfe13,	// (0x0001e68b) sso_body_pane_t

0x89dd,	// (0x00017255) sso_btn_pane_cp01_ParamLimits

0x89dd,	// (0x00017255) sso_btn_pane_cp01

0x8aad,	// (0x00017325) sso_prog_pane_ParamLimits

0x8aad,	// (0x00017325) sso_prog_pane

0x8c29,	// (0x000174a1) sso_t_hdr_pane_t1_ParamLimits

0x8c29,	// (0x000174a1) sso_t_hdr_pane_t1

0xeb8a,	// (0x0001d402) input_focus_pane_cp10_ParamLimits

0xeb8a,	// (0x0001d402) input_focus_pane_cp10

0xeb9e,	// (0x0001d416) sso_query_pane_t1_ParamLimits

0xeb9e,	// (0x0001d416) sso_query_pane_t1

0xebb1,	// (0x0001d429) sso_query_pane_t2_ParamLimits

0xebb1,	// (0x0001d429) sso_query_pane_t2

0xebcb,	// (0x0001d443) sso_query_pane_t3_ParamLimits

0xebcb,	// (0x0001d443) sso_query_pane_t3

0xebf5,	// (0x0001d46d) sso_query_pane_t4_ParamLimits

0xebf5,	// (0x0001d46d) sso_query_pane_t4

0x0003,

0xfe18,	// (0x0001e690) sso_query_pane_t_ParamLimits

0xfe18,	// (0x0001e690) sso_query_pane_t

0xe9e4,	// (0x0001d25c) bg_button_pane_cp22

0xec19,	// (0x0001d491) sso_btn_pane_t1

0x8c3c,	// (0x000174b4) sso_t_nml_pane_t1_ParamLimits

0x8c3c,	// (0x000174b4) sso_t_nml_pane_t1

0xec28,	// (0x0001d4a0) sso_option_row_pane_ParamLimits

0xec28,	// (0x0001d4a0) sso_option_row_pane

0xec35,	// (0x0001d4ad) sso_t_sub_pane_t1_ParamLimits

0xec35,	// (0x0001d4ad) sso_t_sub_pane_t1

0x958b,	// (0x00017e03) bg_popup_window_pane_cp11_ParamLimits

0x958b,	// (0x00017e03) bg_popup_window_pane_cp11

0xec52,	// (0x0001d4ca) popup_sk_window_cp01_ParamLimits

0xec52,	// (0x0001d4ca) popup_sk_window_cp01

0xec5f,	// (0x0001d4d7) sso_popup_body_pane_ParamLimits

0xec5f,	// (0x0001d4d7) sso_popup_body_pane

0xec6c,	// (0x0001d4e4) scroll_pane_cp21_ParamLimits

0xec6c,	// (0x0001d4e4) scroll_pane_cp21

0xec79,	// (0x0001d4f1) sso_popup_body_t_pane_ParamLimits

0xec79,	// (0x0001d4f1) sso_popup_body_t_pane

0xec86,	// (0x0001d4fe) sso_popup_body_t_hdr_pane_ParamLimits

0xec86,	// (0x0001d4fe) sso_popup_body_t_hdr_pane

0x8c57,	// (0x000174cf) sso_popup_body_t_nml_pane_ParamLimits

0x8c57,	// (0x000174cf) sso_popup_body_t_nml_pane

0x8c7e,	// (0x000174f6) sso_popup_body_t_sub_pane_ParamLimits

0x8c7e,	// (0x000174f6) sso_popup_body_t_sub_pane

0xec98,	// (0x0001d510) sso_popup_body_t_hdr_pane_t1

0x8ca1,	// (0x00017519) sso_popup_body_t_nml_pane_t1_ParamLimits

0x8ca1,	// (0x00017519) sso_popup_body_t_nml_pane_t1

0xeca8,	// (0x0001d520) sso_popup_body_t_sub_pane_t1_ParamLimits

0xeca8,	// (0x0001d520) sso_popup_body_t_sub_pane_t1

0x9cfd,	// (0x00018575) sso_prog_pane_g1

0x8cd9,	// (0x00017551) sso_apps_pane_comp1_ParamLimits

0x8cd9,	// (0x00017551) sso_apps_pane_comp1

0xeccd,	// (0x0001d545) sso_apps_pane_comp1_g1

0xecd5,	// (0x0001d54d) sso_apps_pane_comp1_t1

0xecf1,	// (0x0001d569) sso_option_row_pane_g1

0xed09,	// (0x0001d581) sso_option_row_pane_t1

0xe050,	// (0x0001c8c8) list_cmail_pane_ParamLimits

0x9516,	// (0x00017d8e) main_call7_pane

0x830b,	// (0x00016b83) bg_welc_area_ParamLimits

0x830b,	// (0x00016b83) bg_welc_area

0x84f4,	// (0x00016d6c) sso_t_hdr_pane_a_t1_ParamLimits

0x84f4,	// (0x00016d6c) sso_t_hdr_pane_a_t1

0x850f,	// (0x00016d87) sso_t_nml_pane_a_t1_ParamLimits

0x850f,	// (0x00016d87) sso_t_nml_pane_a_t1

0x853e,	// (0x00016db6) sso_t_sub_pane_a_t1_ParamLimits

0x853e,	// (0x00016db6) sso_t_sub_pane_a_t1

0x85f9,	// (0x00016e71) welc_button_pane_cp01_ParamLimits

0x85f9,	// (0x00016e71) welc_button_pane_cp01

0xea9a,	// (0x0001d312) sso_btn_pane_t1_copy1

0xeaa9,	// (0x0001d321) welc_button_pane_2_comp1

0xeb12,	// (0x0001d38a) sso_t_hdr_pane_p_t1

0xeb22,	// (0x0001d39a) sso_t_nml_pane_p_t1

0xeb32,	// (0x0001d3aa) sso_t_sub_pane_p_t1

0x9516,	// (0x00017d8e) main_att_pane

0x9516,	// (0x00017d8e) main_vod_pane

0xeb75,	// (0x0001d3ed) sso_t_sub_pane_ParamLimits

0xece3,	// (0x0001d55b) input_focus_pane_cp10_t1

0xed09,	// (0x0001d581) sso_option_row_pane_t1_ParamLimits

0x8cf3,	// (0x0001756b) main_att_body_pane_ParamLimits

0x8cf3,	// (0x0001756b) main_att_body_pane

0x8d09,	// (0x00017581) att_btn_emg_pane_ParamLimits

0x8d09,	// (0x00017581) att_btn_emg_pane

0x8d28,	// (0x000175a0) att_btn_pane_ParamLimits

0x8d28,	// (0x000175a0) att_btn_pane

0x8d9b,	// (0x00017613) att_btn_pane_cp01_ParamLimits

0x8d9b,	// (0x00017613) att_btn_pane_cp01

0x8dd9,	// (0x00017651) att_li_srv_pane_ParamLimits

0x8dd9,	// (0x00017651) att_li_srv_pane

0x8df6,	// (0x0001766e) att_opt_pane_ParamLimits

0x8df6,	// (0x0001766e) att_opt_pane

0x8e40,	// (0x000176b8) att_query_pane_ParamLimits

0x8e40,	// (0x000176b8) att_query_pane

0x8eb9,	// (0x00017731) att_query_pane_cp01_ParamLimits

0x8eb9,	// (0x00017731) att_query_pane_cp01

0x8f05,	// (0x0001777d) att_t_hdr_pane_ParamLimits

0x8f05,	// (0x0001777d) att_t_hdr_pane

0x8f75,	// (0x000177ed) att_t_nml_pane_ParamLimits

0x8f75,	// (0x000177ed) att_t_nml_pane

0x8ff3,	// (0x0001786b) att_t_nml_pane_cp01_ParamLimits

0x8ff3,	// (0x0001786b) att_t_nml_pane_cp01

0x9021,	// (0x00017899) att_t_nmlb_pane_ParamLimits

0x9021,	// (0x00017899) att_t_nmlb_pane

0x9090,	// (0x00017908) att_term_pane_ParamLimits

0x9090,	// (0x00017908) att_term_pane

0x90e0,	// (0x00017958) main_att_body_pane_g1_ParamLimits

0x90e0,	// (0x00017958) main_att_body_pane_g1

0xed25,	// (0x0001d59d) att_t_hdr_pane_t1_ParamLimits

0xed25,	// (0x0001d59d) att_t_hdr_pane_t1

0xed38,	// (0x0001d5b0) att_t_nml_pane_t1_ParamLimits

0xed38,	// (0x0001d5b0) att_t_nml_pane_t1

0xec19,	// (0x0001d491) att_btn_pane_t1

0xe9e4,	// (0x0001d25c) bg_button_pane_cp23

0x910c,	// (0x00017984) att_li_srv_row_pane_ParamLimits

0x910c,	// (0x00017984) att_li_srv_row_pane

0xed5d,	// (0x0001d5d5) att_t_nmlb_pane_t1_ParamLimits

0xed5d,	// (0x0001d5d5) att_t_nmlb_pane_t1

0xed79,	// (0x0001d5f1) att_query_pane_t1

0xed88,	// (0x0001d600) att_query_pane_t2

0xed97,	// (0x0001d60f) att_query_pane_t3

0x0002,

0xfe26,	// (0x0001e69e) att_query_pane_t

0xeda6,	// (0x0001d61e) input_focus_pane_cp11

0xedaf,	// (0x0001d627) att_term_pane_t1_ParamLimits

0xedaf,	// (0x0001d627) att_term_pane_t1

0x9516,	// (0x00017d8e) att_opt_row_pane

0xedcc,	// (0x0001d644) att_opt_row_pane_g1

0xedd4,	// (0x0001d64c) att_opt_row_pane_t1_ParamLimits

0xedd4,	// (0x0001d64c) att_opt_row_pane_t1

0x911c,	// (0x00017994) att_li_srv_row_pane_g1

0x9124,	// (0x0001799c) att_li_srv_row_pane_t1_ParamLimits

0x9124,	// (0x0001799c) att_li_srv_row_pane_t1

0x9124,	// (0x0001799c) att_li_srv_row_pane_t2_ParamLimits

0x9124,	// (0x0001799c) att_li_srv_row_pane_t2

0x0001,

0xfe2d,	// (0x0001e6a5) att_li_srv_row_pane_t_ParamLimits

0xfe2d,	// (0x0001e6a5) att_li_srv_row_pane_t

0xeded,	// (0x0001d665) att_btn_close_pane_g1

0x9516,	// (0x00017d8e) bg_button_pane_cp24

0x9139,	// (0x000179b1) main_vod_body_pane_ParamLimits

0x9139,	// (0x000179b1) main_vod_body_pane

0x914d,	// (0x000179c5) main_vod_body_pane_g1_ParamLimits

0x914d,	// (0x000179c5) main_vod_body_pane_g1

0x9181,	// (0x000179f9) scroll_pane_cp24_ParamLimits

0x9181,	// (0x000179f9) scroll_pane_cp24

0x91cf,	// (0x00017a47) vod_btn_pane_ParamLimits

0x91cf,	// (0x00017a47) vod_btn_pane

0x9215,	// (0x00017a8d) vod_det_pane_ParamLimits

0x9215,	// (0x00017a8d) vod_det_pane

0x9249,	// (0x00017ac1) vod_logo_g1_ParamLimits

0x9249,	// (0x00017ac1) vod_logo_g1

0x9287,	// (0x00017aff) vod_opt_pane_ParamLimits

0x9287,	// (0x00017aff) vod_opt_pane

0x92ba,	// (0x00017b32) vod_opt_pane_cp01_ParamLimits

0x92ba,	// (0x00017b32) vod_opt_pane_cp01

0x92e6,	// (0x00017b5e) vod_query_pane_ParamLimits

0x92e6,	// (0x00017b5e) vod_query_pane

0x9311,	// (0x00017b89) vod_query_pane_cp01_ParamLimits

0x9311,	// (0x00017b89) vod_query_pane_cp01

0x931d,	// (0x00017b95) vod_t_nml_pane_ParamLimits

0x931d,	// (0x00017b95) vod_t_nml_pane

0x93ce,	// (0x00017c46) vod_t_nml_pane_cp01_ParamLimits

0x93ce,	// (0x00017c46) vod_t_nml_pane_cp01

0x940a,	// (0x00017c82) vod_t_sub_pane_ParamLimits

0x940a,	// (0x00017c82) vod_t_sub_pane

0x943b,	// (0x00017cb3) vod_t_sub_pane_cp01_ParamLimits

0x943b,	// (0x00017cb3) vod_t_sub_pane_cp01

0xeda6,	// (0x0001d61e) vod_query_field_pane

0xedf5,	// (0x0001d66d) vod_query_pane_t1

0xee04,	// (0x0001d67c) bg_button_pane_cp25

0xec19,	// (0x0001d491) sso_btn_pane_t1_copy2

0x9467,	// (0x00017cdf) vod_t_nml_pane_t1_ParamLimits

0x9467,	// (0x00017cdf) vod_t_nml_pane_t1

0xee0d,	// (0x0001d685) vod_opt_row_pane_ParamLimits

0xee0d,	// (0x0001d685) vod_opt_row_pane

0xee1f,	// (0x0001d697) vod_t_sub_pane_t1_ParamLimits

0xee1f,	// (0x0001d697) vod_t_sub_pane_t1

0xee38,	// (0x0001d6b0) vod_det_cell_pane_ParamLimits

0xee38,	// (0x0001d6b0) vod_det_cell_pane

0x9516,	// (0x00017d8e) input_focus_pane_cp15

0xee49,	// (0x0001d6c1) vod_query_field_pane_t1

0xee57,	// (0x0001d6cf) vod_opt_row_pane_g1_ParamLimits

0xee57,	// (0x0001d6cf) vod_opt_row_pane_g1

0xee63,	// (0x0001d6db) vod_opt_row_pane_t1_ParamLimits

0xee63,	// (0x0001d6db) vod_opt_row_pane_t1

0xee85,	// (0x0001d6fd) vod_det_cell_field_pane

0xee8e,	// (0x0001d706) vod_det_cell_pane_g1

0xee96,	// (0x0001d70e) vod_det_cell_pane_t1

0x9516,	// (0x00017d8e) input_focus_pane_cp16

0xeea5,	// (0x0001d71d) vod_det_cell_field_pane_t1

0x7c36,	// (0x000164ae) call7_btn_grp_pane_ParamLimits

0x7c36,	// (0x000164ae) call7_btn_grp_pane

0x958b,	// (0x00017e03) call7_bubble_pane_ParamLimits

0x958b,	// (0x00017e03) call7_bubble_pane

0x949c,	// (0x00017d14) cell_call7_btn_pane_ParamLimits

0x949c,	// (0x00017d14) cell_call7_btn_pane

0x94b0,	// (0x00017d28) call7_pane_g1_ParamLimits

0x94b0,	// (0x00017d28) call7_pane_g1

0x94c2,	// (0x00017d3a) call7_windows_conf_pane_ParamLimits

0x94c2,	// (0x00017d3a) call7_windows_conf_pane

0x94e0,	// (0x00017d58) popup_call7_1st_window_ParamLimits

0x94e0,	// (0x00017d58) popup_call7_1st_window

0x94f2,	// (0x00017d6a) popup_call7_2nd_window_ParamLimits

0x94f2,	// (0x00017d6a) popup_call7_2nd_window

0x9504,	// (0x00017d7c) popup_call7_3rd_window_ParamLimits

0x9504,	// (0x00017d7c) popup_call7_3rd_window

0x9516,	// (0x00017d8e) bg_button_pane_cp26

0xe895,	// (0x0001d10d) cell_call7_btn_pane_g1

0xe89e,	// (0x0001d116) cell_call7_btn_pane_t1

0x9516,	// (0x00017d8e) bg_popup_window_pane_cp12

0xeeb3,	// (0x0001d72b) popup_call7_1st_window_g1

0xeebb,	// (0x0001d733) popup_call7_1st_window_g2

0xeec3,	// (0x0001d73b) popup_call7_1st_window_g3

0x0002,

0xfe32,	// (0x0001e6aa) popup_call7_1st_window_g

0xeecb,	// (0x0001d743) popup_call7_1st_window_t1

0xeeda,	// (0x0001d752) popup_call7_1st_window_t2

0xeeea,	// (0x0001d762) popup_call7_1st_window_t3

0x0002,

0xfe39,	// (0x0001e6b1) popup_call7_1st_window_t

0x9516,	// (0x00017d8e) bg_popup_window_pane_cp13

0xeefa,	// (0x0001d772) popup_call7_2nd_window_g1

0xef02,	// (0x0001d77a) popup_call7_2nd_window_g2

0xef0a,	// (0x0001d782) popup_call7_2nd_window_g3

0x0002,

0xfe40,	// (0x0001e6b8) popup_call7_2nd_window_g

0xef12,	// (0x0001d78a) popup_call7_2nd_window_t1

0x9516,	// (0x00017d8e) bg_popup_window_pane_cp14

0xef21,	// (0x0001d799) call7_list_conf_pane

0xef29,	// (0x0001d7a1) call7_list_conf_row_pane_ParamLimits

0xef29,	// (0x0001d7a1) call7_list_conf_row_pane

0xef3c,	// (0x0001d7b4) call7_list_conf_row_pane_g1

0xef44,	// (0x0001d7bc) call7_list_conf_row_pane_g2

0x0001,

0xfe47,	// (0x0001e6bf) call7_list_conf_row_pane_g

0xef4c,	// (0x0001d7c4) call7_list_conf_row_pane_t1

0x9516,	// (0x00017d8e) list_highlight_pane_cp22

0x8a79,	// (0x000172f1) sso_option_pane_cp01_ParamLimits

0x8a79,	// (0x000172f1) sso_option_pane_cp01

0x9c3c,	// (0x000184b4) msg_header_pane_ParamLimits

0xaab3,	// (0x0001932b) bg_button_pane_cp01_ParamLimits

0xaac7,	// (0x0001933f) input_focus_pane_cp07_ParamLimits

0x7162,	// (0x000159da) popup_email_progress_window

0x9cfd,	// (0x00018575) popup_email_progress_window_g1

0xef5a,	// (0x0001d7d2) popup_email_progress_window_g2

0x0001,

0xfe4c,	// (0x0001e6c4) popup_email_progress_window_g

0xef62,	// (0x0001d7da) popup_email_progress_window_t1

0x9516,	// (0x00017d8e) cmail_conv_pane

0xdf8f,	// (0x0001c807) list_single_dyc_row_pane_g5_ParamLimits

0xdf8f,	// (0x0001c807) list_single_dyc_row_pane_g5

0xdf9b,	// (0x0001c813) list_single_dyc_row_pane_g6_ParamLimits

0xdf9b,	// (0x0001c813) list_single_dyc_row_pane_g6

0xdfb3,	// (0x0001c82b) list_single_dyc_row_pane_g7_ParamLimits

0xdfb3,	// (0x0001c82b) list_single_dyc_row_pane_g7

0x8347,	// (0x00016bbf) main_button_pane_5_ParamLimits

0x8347,	// (0x00016bbf) main_button_pane_5

0x88a8,	// (0x00017120) sso_emg_call_btn_pane_ParamLimits

0x88a8,	// (0x00017120) sso_emg_call_btn_pane

0x8c0d,	// (0x00017485) sso_t_sub_pane_cp01_ParamLimits

0x8c0d,	// (0x00017485) sso_t_sub_pane_cp01

0xecf1,	// (0x0001d569) sso_option_row_pane_g1_ParamLimits

0xecfd,	// (0x0001d575) sso_option_row_pane_g2_ParamLimits

0xecfd,	// (0x0001d575) sso_option_row_pane_g2

0x0001,

0xfe21,	// (0x0001e699) sso_option_row_pane_g_ParamLimits

0xfe21,	// (0x0001e699) sso_option_row_pane_g

0x8db7,	// (0x0001762f) att_btn_pane_cp02_ParamLimits

0x8db7,	// (0x0001762f) att_btn_pane_cp02

0xef70,	// (0x0001d7e8) cmail_conv_hdr_pane

0xef79,	// (0x0001d7f1) list_cmail_conv_pane

0xef83,	// (0x0001d7fb) scroll_pane_cp31

0xef8b,	// (0x0001d803) cmail_conv_hdr_pane_t1

0xef99,	// (0x0001d811) cmail_conv_hdr_pane_t2

0x0001,

0xfe51,	// (0x0001e6c9) cmail_conv_hdr_pane_t

0xefa7,	// (0x0001d81f) bubble_cmail_conv_pane_ParamLimits

0xefa7,	// (0x0001d81f) bubble_cmail_conv_pane

0xe1d4,	// (0x0001ca4c) aid_size_colorization_pane

0x9f96,	// (0x0001880e) bg_bubble_cmail_conv_pane

0xefc3,	// (0x0001d83b) body_bubble_cmail_conv_pane

0xa4c4,	// (0x00018d3c) bubble_cmail_conv_pane_g1

0xa4cc,	// (0x00018d44) bubble_cmail_conv_pane_g2

0xa4d4,	// (0x00018d4c) bubble_cmail_conv_pane_g3

0x0002,

0xf24d,	// (0x0001dac5) bubble_cmail_conv_pane_g

0xefcb,	// (0x0001d843) bubble_cmail_conv_pane_t1

0xefd9,	// (0x0001d851) bg_bubble_cmail_conv_pane_g1

0xefe2,	// (0x0001d85a) bg_bubble_cmail_conv_pane_g2

0xefeb,	// (0x0001d863) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfe56,	// (0x0001e6ce) bg_bubble_cmail_conv_pane_g

0xeff4,	// (0x0001d86c) body_bubble_cmail_conv_pane_t1_ParamLimits

0xeff4,	// (0x0001d86c) body_bubble_cmail_conv_pane_t1

0xf00b,	// (0x0001d883) body_bubble_cmail_conv_pane_t2_ParamLimits

0xf00b,	// (0x0001d883) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe5d,	// (0x0001e6d5) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe5d,	// (0x0001e6d5) body_bubble_cmail_conv_pane_t

0x958b,	// (0x00017e03) list_highlight_pane_cp024_ParamLimits
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal
