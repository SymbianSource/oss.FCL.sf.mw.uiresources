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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x000acac7 };

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
0xfce1,	// (0x000ac7a8) Screen

0xfced,	// (0x000ac7b4) application_window

0xfd41,	// (0x000ac808) area_bottom_pane_ParamLimits

0xfd41,	// (0x000ac808) area_bottom_pane

0xfd7a,	// (0x000ac841) area_top_pane_ParamLimits

0xfd7a,	// (0x000ac841) area_top_pane

0x9591,	// (0x000b6058) call_video_uplink_pane_ParamLimits

0x9591,	// (0x000b6058) call_video_uplink_pane

0xfe08,	// (0x000ac8cf) main_pane_ParamLimits

0xfe08,	// (0x000ac8cf) main_pane

0xc8a9,	// (0x000b9370) context_pane

0x399a,	// (0x000b0461) navi_pane

0x39ca,	// (0x000b0491) popup_cale_events_window_ParamLimits

0x39ca,	// (0x000b0491) popup_cale_events_window

0xc8bc,	// (0x000b9383) popup_mup_playback_window

0x39e2,	// (0x000b04a9) signal_pane

0xa889,	// (0x000b7350) main_browser_pane

0xb38b,	// (0x000b7e52) main_burst_pane

0x369c,	// (0x000b0163) main_calc_pane

0xc84c,	// (0x000b9313) main_cale_day_pane

0x0458,	// (0x000acf1f) main_cale_month_pane

0xc84c,	// (0x000b9313) main_cale_week_pane

0xb38b,	// (0x000b7e52) main_call_pane

0x99d0,	// (0x000b6497) main_call_poc_pane

0xb38b,	// (0x000b7e52) main_camera_pane

0xb38b,	// (0x000b7e52) main_chi_dic_pane

0xb22d,	// (0x000b7cf4) main_clock_pane

0x99d0,	// (0x000b6497) main_fmradio_pane

0xb38b,	// (0x000b7e52) main_graph_messa_pane

0x99d0,	// (0x000b6497) main_help_pane

0xa889,	// (0x000b7350) main_im_pane

0x9c2b,	// (0x000b66f2) main_image_pane_ParamLimits

0x9c2b,	// (0x000b66f2) main_image_pane

0x99d0,	// (0x000b6497) main_location2_pane

0xb38b,	// (0x000b7e52) main_location_pane

0x9c2b,	// (0x000b66f2) main_messa_pane

0x99d0,	// (0x000b6497) main_mp2_pane

0xb38b,	// (0x000b7e52) main_mp_pane

0x99d0,	// (0x000b6497) main_msg_pane

0x99d0,	// (0x000b6497) main_mup_eq_pane

0x99d0,	// (0x000b6497) main_mup_pane

0xa889,	// (0x000b7350) main_notes_pane

0x99d0,	// (0x000b6497) main_pec_pane

0x99d0,	// (0x000b6497) main_phob_pane

0x99d0,	// (0x000b6497) main_pinb_pane

0x99d0,	// (0x000b6497) main_postcard_pane

0x99d0,	// (0x000b6497) main_qdial_pane

0xb38b,	// (0x000b7e52) main_skin_pane

0x99d0,	// (0x000b6497) main_smil2_pane

0xb38b,	// (0x000b7e52) main_smil_pane

0xb38b,	// (0x000b7e52) main_video_pane

0xb38b,	// (0x000b7e52) main_video_tele_pane

0x9c2b,	// (0x000b66f2) main_viewer_pane_ParamLimits

0x9c2b,	// (0x000b66f2) main_viewer_pane

0xb38b,	// (0x000b7e52) main_vorec_pane

0x36f2,	// (0x000b01b9) popup_blid_sat_info_window_ParamLimits

0x36f2,	// (0x000b01b9) popup_blid_sat_info_window

0x3756,	// (0x000b021d) popup_dyc_status_message_window_ParamLimits

0x3756,	// (0x000b021d) popup_dyc_status_message_window

0x3770,	// (0x000b0237) popup_grid_large_graphic_window_ParamLimits

0x3770,	// (0x000b0237) popup_grid_large_graphic_window

0x3832,	// (0x000b02f9) popup_loc_request_window_ParamLimits

0x3832,	// (0x000b02f9) popup_loc_request_window

0x396e,	// (0x000b0435) popup_wml_address_window_ParamLimits

0x396e,	// (0x000b0435) popup_wml_address_window

0x34da,	// (0x000affa1) call_muted_g1

0x316e,	// (0x000afc35) popup_call_audio_conf_window_ParamLimits

0x316e,	// (0x000afc35) popup_call_audio_conf_window

0x34ea,	// (0x000affb1) popup_call_audio_first_window_ParamLimits

0x34ea,	// (0x000affb1) popup_call_audio_first_window

0x3560,	// (0x000b0027) popup_call_audio_in_window_ParamLimits

0x3560,	// (0x000b0027) popup_call_audio_in_window

0x359c,	// (0x000b0063) popup_call_audio_out_window_ParamLimits

0x359c,	// (0x000b0063) popup_call_audio_out_window

0x35d6,	// (0x000b009d) popup_call_audio_second_window_ParamLimits

0x35d6,	// (0x000b009d) popup_call_audio_second_window

0x362c,	// (0x000b00f3) popup_call_audio_wait_window_ParamLimits

0x362c,	// (0x000b00f3) popup_call_audio_wait_window

0x3661,	// (0x000b0128) popup_number_entry_window_ParamLimits

0x3661,	// (0x000b0128) popup_number_entry_window

0x95bd,	// (0x000b6084) bg_popup_call_pane_cp05_ParamLimits

0x95bd,	// (0x000b6084) bg_popup_call_pane_cp05

0x95dd,	// (0x000b60a4) popup_number_entry_window_t1

0x95f0,	// (0x000b60b7) popup_number_entry_window_t2

0x9602,	// (0x000b60c9) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x000bbb94) popup_number_entry_window_t

0x9614,	// (0x000b60db) text_title_cp2

0x9627,	// (0x000b60ee) bg_popup_call_pane_cp_ParamLimits

0x9627,	// (0x000b60ee) bg_popup_call_pane_cp

0x9635,	// (0x000b60fc) call_thumbnail_pane

0x963d,	// (0x000b6104) popup_call_audio_in_window_g1_ParamLimits

0x963d,	// (0x000b6104) popup_call_audio_in_window_g1

0x9649,	// (0x000b6110) popup_call_audio_in_window_g2_ParamLimits

0x9649,	// (0x000b6110) popup_call_audio_in_window_g2

0x9655,	// (0x000b611c) popup_call_audio_in_window_g3_ParamLimits

0x9655,	// (0x000b611c) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x000bbb9d) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x000bbb9d) popup_call_audio_in_window_g

0x9661,	// (0x000b6128) popup_call_audio_in_window_t1_ParamLimits

0x9661,	// (0x000b6128) popup_call_audio_in_window_t1

0x967d,	// (0x000b6144) popup_call_audio_in_window_t2_ParamLimits

0x967d,	// (0x000b6144) popup_call_audio_in_window_t2

0x9699,	// (0x000b6160) popup_call_audio_in_window_t3_ParamLimits

0x9699,	// (0x000b6160) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x000bbba4) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x000bbba4) popup_call_audio_in_window_t

0x9627,	// (0x000b60ee) bg_popup_call_pane_cp01_ParamLimits

0x9627,	// (0x000b60ee) bg_popup_call_pane_cp01

0x9635,	// (0x000b60fc) call_thumbnail_pane_cp02

0x96ac,	// (0x000b6173) call_type_pane_cp022

0x96b4,	// (0x000b617b) popup_call_audio_out_window_g1_ParamLimits

0x96b4,	// (0x000b617b) popup_call_audio_out_window_g1

0x96c6,	// (0x000b618d) popup_call_audio_out_window_g2_ParamLimits

0x96c6,	// (0x000b618d) popup_call_audio_out_window_g2

0x96d2,	// (0x000b6199) popup_call_audio_out_window_g3_ParamLimits

0x96d2,	// (0x000b6199) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x000bbbab) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x000bbbab) popup_call_audio_out_window_g

0x96e4,	// (0x000b61ab) popup_call_audio_out_window_t1_ParamLimits

0x96e4,	// (0x000b61ab) popup_call_audio_out_window_t1

0x96fc,	// (0x000b61c3) popup_call_audio_out_window_t2_ParamLimits

0x96fc,	// (0x000b61c3) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x000bbbb2) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x000bbbb2) popup_call_audio_out_window_t

0x9711,	// (0x000b61d8) bg_popup_call_pane_ParamLimits

0x9711,	// (0x000b61d8) bg_popup_call_pane

0xffc7,	// (0x000aca8e) call_thumbnail_pane_cp_ParamLimits

0xffc7,	// (0x000aca8e) call_thumbnail_pane_cp

0x9795,	// (0x000b625c) call_type_pane_cp01_ParamLimits

0x9795,	// (0x000b625c) call_type_pane_cp01

0x97d9,	// (0x000b62a0) popup_call_audio_first_window_g1_ParamLimits

0x97d9,	// (0x000b62a0) popup_call_audio_first_window_g1

0x9825,	// (0x000b62ec) popup_call_audio_first_window_g2_ParamLimits

0x9825,	// (0x000b62ec) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x000bbbb7) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x000bbbb7) popup_call_audio_first_window_g

0x9869,	// (0x000b6330) popup_call_audio_first_window_t1_ParamLimits

0x9869,	// (0x000b6330) popup_call_audio_first_window_t1

0x9915,	// (0x000b63dc) popup_call_audio_first_window_t4_ParamLimits

0x9915,	// (0x000b63dc) popup_call_audio_first_window_t4

0x99a1,	// (0x000b6468) popup_call_audio_first_window_t5_ParamLimits

0x99a1,	// (0x000b6468) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x000bbbbc) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x000bbbbc) popup_call_audio_first_window_t

0x99d0,	// (0x000b6497) bg_popup_call_pane_cp02

0x99da,	// (0x000b64a1) call_type_pane_cp023

0x99e2,	// (0x000b64a9) popup_call_audio_wait_window_g1

0x99ea,	// (0x000b64b1) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x000bbbc3) popup_call_audio_wait_window_g

0x99f2,	// (0x000b64b9) popup_call_audio_wait_window_t3

0x9a00,	// (0x000b64c7) bg_popup_call_pane_cp03_ParamLimits

0x9a00,	// (0x000b64c7) bg_popup_call_pane_cp03

0x9a60,	// (0x000b6527) call_thumbnail_pane_cp011_ParamLimits

0x9a60,	// (0x000b6527) call_thumbnail_pane_cp011

0x9a6c,	// (0x000b6533) call_type_pane_cp034_ParamLimits

0x9a6c,	// (0x000b6533) call_type_pane_cp034

0x9aa8,	// (0x000b656f) popup_call_audio_second_window_g1_ParamLimits

0x9aa8,	// (0x000b656f) popup_call_audio_second_window_g1

0x9ae4,	// (0x000b65ab) popup_call_audio_second_window_g2_ParamLimits

0x9ae4,	// (0x000b65ab) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x000bbbc8) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x000bbbc8) popup_call_audio_second_window_g

0x9b20,	// (0x000b65e7) popup_call_audio_second_window_t1_ParamLimits

0x9b20,	// (0x000b65e7) popup_call_audio_second_window_t1

0x9ba1,	// (0x000b6668) popup_call_audio_second_window_t2_ParamLimits

0x9ba1,	// (0x000b6668) popup_call_audio_second_window_t2

0x9bd7,	// (0x000b669e) popup_call_audio_second_window_t3_ParamLimits

0x9bd7,	// (0x000b669e) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x000bbbcd) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x000bbbcd) popup_call_audio_second_window_t

0x99d0,	// (0x000b6497) bg_popup_call_pane_cp04

0x9c0d,	// (0x000b66d4) list_conf_pane

0x9c15,	// (0x000b66dc) popup_call_audio_conf_window_t1

0x9c23,	// (0x000b66ea) call_thumbnail_pane_g1

0x9c2b,	// (0x000b66f2) bg_pinb_pane_ParamLimits

0x9c2b,	// (0x000b66f2) bg_pinb_pane

0x9c39,	// (0x000b6700) find_pinb_pane

0x9c42,	// (0x000b6709) listscroll_pinb_pane_ParamLimits

0x9c42,	// (0x000b6709) listscroll_pinb_pane

0x9c51,	// (0x000b6718) pinb_bg_pane_g1

0xffeb,	// (0x000acab2) pinb_bg_pane_g2

0xfff7,	// (0x000acabe) pinb_bg_pane_g3

0x0003,	// (0x000acaca) pinb_bg_pane_g4

0x000f,	// (0x000acad6) pinb_bg_pane_g5

0x001b,	// (0x000acae2) pinb_bg_pane_g6

0x0026,	// (0x000acaed) pinb_bg_pane_g7

0x0031,	// (0x000acaf8) pinb_bg_pane_g8

0x003c,	// (0x000acb03) pinb_bg_pane_g9

0x0046,	// (0x000acb0d) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x000bbbd4) pinb_bg_pane_g

0x0063,	// (0x000acb2a) grid_pinb_pane

0x006e,	// (0x000acb35) list_pinb_pane

0x0079,	// (0x000acb40) scroll_pane_cp01_ParamLimits

0x0079,	// (0x000acb40) scroll_pane_cp01

0xa7f4,	// (0x000b72bb) find_pinb_pane_g1_ParamLimits

0xa7f4,	// (0x000b72bb) find_pinb_pane_g1

0xa80c,	// (0x000b72d3) find_pinb_pane_t1

0xa81e,	// (0x000b72e5) find_pinb_pane_t2

0x0001,

0xf127,	// (0x000bbbee) find_pinb_pane_t

0xa833,	// (0x000b72fa) input_focus_pane_cp01_ParamLimits

0xa833,	// (0x000b72fa) input_focus_pane_cp01

0x008b,	// (0x000acb52) cell_pinb_pane_ParamLimits

0x008b,	// (0x000acb52) cell_pinb_pane

0x00ad,	// (0x000acb74) cell_pinb_pane_g1_ParamLimits

0x00ad,	// (0x000acb74) cell_pinb_pane_g1

0x00c2,	// (0x000acb89) cell_pinb_pane_g2_ParamLimits

0x00c2,	// (0x000acb89) cell_pinb_pane_g2

0xa83f,	// (0x000b7306) cell_pinb_pane_g3_ParamLimits

0xa83f,	// (0x000b7306) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x000bbbf3) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x000bbbf3) cell_pinb_pane_g

0x99d0,	// (0x000b6497) grid_highlight_pane_cp01

0x00ce,	// (0x000acb95) list_pinb_item_pane_ParamLimits

0x00ce,	// (0x000acb95) list_pinb_item_pane

0x99d0,	// (0x000b6497) list_highlight_pane_cp02

0x00e0,	// (0x000acba7) list_pinb_item_pane_g1_ParamLimits

0x00e0,	// (0x000acba7) list_pinb_item_pane_g1

0x00ed,	// (0x000acbb4) list_pinb_item_pane_g2_ParamLimits

0x00ed,	// (0x000acbb4) list_pinb_item_pane_g2

0x00f9,	// (0x000acbc0) list_pinb_item_pane_g3_ParamLimits

0x00f9,	// (0x000acbc0) list_pinb_item_pane_g3

0x010a,	// (0x000acbd1) list_pinb_item_pane_g4_ParamLimits

0x010a,	// (0x000acbd1) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x000bbbfa) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x000bbbfa) list_pinb_item_pane_g

0x0116,	// (0x000acbdd) list_pinb_item_pane_t1_ParamLimits

0x0116,	// (0x000acbdd) list_pinb_item_pane_t1

0x014b,	// (0x000acc12) calc_display_pane

0x0173,	// (0x000acc3a) calc_paper_pane

0x0196,	// (0x000acc5d) grid_calc_pane

0x99d0,	// (0x000b6497) bg_list_pane_cp01

0x01c4,	// (0x000acc8b) clock_g1

0x01cc,	// (0x000acc93) clock_g2

0x0001,

0xf13c,	// (0x000bbc03) clock_g

0x01d4,	// (0x000acc9b) clock_t1_ParamLimits

0x01d4,	// (0x000acc9b) clock_t1

0x01e9,	// (0x000accb0) clock_t2_ParamLimits

0x01e9,	// (0x000accb0) clock_t2

0x01fb,	// (0x000accc2) clock_t3_ParamLimits

0x01fb,	// (0x000accc2) clock_t3

0x020d,	// (0x000accd4) clock_t4_ParamLimits

0x020d,	// (0x000accd4) clock_t4

0x021f,	// (0x000acce6) clock_t5_ParamLimits

0x021f,	// (0x000acce6) clock_t5

0x0234,	// (0x000accfb) clock_t6_ParamLimits

0x0234,	// (0x000accfb) clock_t6

0x0246,	// (0x000acd0d) clock_t7_ParamLimits

0x0246,	// (0x000acd0d) clock_t7

0x0258,	// (0x000acd1f) clock_t8_ParamLimits

0x0258,	// (0x000acd1f) clock_t8

0x026c,	// (0x000acd33) clock_t9_ParamLimits

0x026c,	// (0x000acd33) clock_t9

0x0008,

0xf141,	// (0x000bbc08) clock_t_ParamLimits

0xf141,	// (0x000bbc08) clock_t

0xa84b,	// (0x000b7312) popup_clock_analogue_window_cp02

0xa84b,	// (0x000b7312) popup_clock_digital_window_cp01

0xa853,	// (0x000b731a) listscroll_help_pane

0x99d0,	// (0x000b6497) phob_pre_status_pane

0xa85d,	// (0x000b7324) grid_qdial_pane

0x9c2b,	// (0x000b66f2) listscroll_mce_pane

0x9c2b,	// (0x000b66f2) bg_notes_pane

0xa867,	// (0x000b732e) list_notes_pane

0x0282,	// (0x000acd49) scroll_pane_cp06

0xa875,	// (0x000b733c) bg_calc_paper_pane

0x9c6d,	// (0x000b6734) list_calc_pane

0xa889,	// (0x000b7350) bg_calc_display_pane

0x0296,	// (0x000acd5d) calc_display_pane_t1

0x02a8,	// (0x000acd6f) calc_display_pane_t2

0x9c87,	// (0x000b674e) calc_display_pane_t3

0x0002,

0xf154,	// (0x000bbc1b) calc_display_pane_t

0x02ba,	// (0x000acd81) cell_calc_pane_ParamLimits

0x02ba,	// (0x000acd81) cell_calc_pane

0xa895,	// (0x000b735c) bg_calc_paper_pane_g1

0xa8a1,	// (0x000b7368) bg_calc_paper_pane_g2

0xa8ad,	// (0x000b7374) bg_calc_paper_pane_g3

0xa8b9,	// (0x000b7380) bg_calc_paper_pane_g4

0xa8c5,	// (0x000b738c) bg_calc_paper_pane_g5

0x02f7,	// (0x000acdbe) bg_calc_paper_pane_g6

0x030a,	// (0x000acdd1) bg_calc_paper_pane_g7

0x031d,	// (0x000acde4) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x000bbc22) bg_calc_paper_pane_g

0x032e,	// (0x000acdf5) calc_bg_paper_pane_g9

0x033f,	// (0x000ace06) list_calc_item_pane_ParamLimits

0x033f,	// (0x000ace06) list_calc_item_pane

0xa8d1,	// (0x000b7398) list_calc_item_pane_g1

0x9c99,	// (0x000b6760) list_calc_item_pane_t1_ParamLimits

0x9c99,	// (0x000b6760) list_calc_item_pane_t1

0x0357,	// (0x000ace1e) list_calc_item_pane_t2_ParamLimits

0x0357,	// (0x000ace1e) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x000bbc33) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x000bbc33) list_calc_item_pane_t

0xa8de,	// (0x000b73a5) cell_calc_pane_g1

0xa8e8,	// (0x000b73af) grid_highlight_pane_cp02

0xa90a,	// (0x000b73d1) bg_calc_display_pane_g1

0x9cab,	// (0x000b6772) bg_calc_display_pane_g2

0xa913,	// (0x000b73da) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x000bbc3d) bg_calc_display_pane_g

0x0389,	// (0x000ace50) cell_qdial_pane_ParamLimits

0x0389,	// (0x000ace50) cell_qdial_pane

0x039d,	// (0x000ace64) cell_qdial_pane_g1_ParamLimits

0x039d,	// (0x000ace64) cell_qdial_pane_g1

0x03b3,	// (0x000ace7a) cell_qdial_pane_g2_ParamLimits

0x03b3,	// (0x000ace7a) cell_qdial_pane_g2

0xa91c,	// (0x000b73e3) cell_qdial_pane_g3_ParamLimits

0xa91c,	// (0x000b73e3) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x000bbc44) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x000bbc44) cell_qdial_pane_g

0x03da,	// (0x000acea1) cell_qdial_pane_t1_ParamLimits

0x03da,	// (0x000acea1) cell_qdial_pane_t1

0x03f2,	// (0x000aceb9) cell_qdial_pane_t2_ParamLimits

0x03f2,	// (0x000aceb9) cell_qdial_pane_t2

0x0405,	// (0x000acecc) cell_qdial_pane_t3_ParamLimits

0x0405,	// (0x000acecc) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x000bbc4d) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x000bbc4d) cell_qdial_pane_t

0x99d0,	// (0x000b6497) grid_highlight_pane_cp04

0xa928,	// (0x000b73ef) thumbnail_qdial_pane_ParamLimits

0xa928,	// (0x000b73ef) thumbnail_qdial_pane

0xa984,	// (0x000b744b) list_help_pane

0xa98d,	// (0x000b7454) scroll_pane_cp02

0x0418,	// (0x000acedf) help_list_pane_t1_ParamLimits

0x0418,	// (0x000acedf) help_list_pane_t1

0x9cb5,	// (0x000b677c) bg_notes_pane_g2

0x9cbd,	// (0x000b6784) bg_notes_pane_g3

0x9cc5,	// (0x000b678c) notes_bg_pane_g1

0x9ccd,	// (0x000b6794) notes_bg_pane_g4

0x9cd5,	// (0x000b679c) notes_bg_pane_g5

0x9cdd,	// (0x000b67a4) notes_bg_pane_g6

0x9ce5,	// (0x000b67ac) notes_bg_pane_g7

0x9ced,	// (0x000b67b4) notes_bg_pane_g8

0x9cf5,	// (0x000b67bc) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x000bbc6b) notes_bg_pane_g

0x0436,	// (0x000acefd) list_notes_text_pane_ParamLimits

0x0436,	// (0x000acefd) list_notes_text_pane

0xa996,	// (0x000b745d) list_notes_text_pane_g1

0x044a,	// (0x000acf11) list_notes_text_pane_t1

0x0458,	// (0x000acf1f) listscroll_cale_week_pane

0x048e,	// (0x000acf55) bg_cale_heading_pane

0xa9b0,	// (0x000b7477) bg_cale_pane_cp01

0x04b7,	// (0x000acf7e) cale_week_corner_pane

0x04d6,	// (0x000acf9d) cale_week_day_heading_pane

0x0504,	// (0x000acfcb) cale_week_scroll_pane_g1

0x0528,	// (0x000acfef) cale_week_scroll_pane_g2

0x0540,	// (0x000ad007) cale_week_scroll_pane_g3

0x0558,	// (0x000ad01f) cale_week_scroll_pane_g4

0x0574,	// (0x000ad03b) cale_week_scroll_pane_g5

0x0594,	// (0x000ad05b) cale_week_scroll_pane_g6

0x05b4,	// (0x000ad07b) cale_week_scroll_pane_g7

0x05d8,	// (0x000ad09f) cale_week_scroll_pane_g8

0x05fc,	// (0x000ad0c3) cale_week_scroll_pane_g9

0x0619,	// (0x000ad0e0) cale_week_scroll_pane_g10

0x0636,	// (0x000ad0fd) cale_week_scroll_pane_g11

0x0653,	// (0x000ad11a) cale_week_scroll_pane_g12

0x0670,	// (0x000ad137) cale_week_scroll_pane_g13

0x068d,	// (0x000ad154) cale_week_scroll_pane_g14

0x06b6,	// (0x000ad17d) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x000bbc7a) cale_week_scroll_pane_g

0x06df,	// (0x000ad1a6) cale_week_time_pane

0x0703,	// (0x000ad1ca) grid_cale_week_pane

0xa9e0,	// (0x000b74a7) scroll_pane_cp08

0x073a,	// (0x000ad201) cell_cale_week_pane_ParamLimits

0x073a,	// (0x000ad201) cell_cale_week_pane

0x07ca,	// (0x000ad291) cale_week_day_heading_pane_t1

0x0814,	// (0x000ad2db) cale_week_day_heading_pane_t2

0x0863,	// (0x000ad32a) cale_week_day_heading_pane_t3

0x08b2,	// (0x000ad379) cale_week_day_heading_pane_t4

0x0901,	// (0x000ad3c8) cale_week_day_heading_pane_t5

0x0954,	// (0x000ad41b) cale_week_day_heading_pane_t6

0x09ab,	// (0x000ad472) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x000bbc99) cale_week_day_heading_pane_t

0xaa02,	// (0x000b74c9) bg_cale_side_pane

0x09f5,	// (0x000ad4bc) cale_week_time_pane_t1

0x0a2f,	// (0x000ad4f6) cale_week_time_pane_t2

0x0a69,	// (0x000ad530) cale_week_time_pane_t3

0x0aa3,	// (0x000ad56a) cale_week_time_pane_t4

0x0add,	// (0x000ad5a4) cale_week_time_pane_t5

0x0b17,	// (0x000ad5de) cale_week_time_pane_t6

0x0b51,	// (0x000ad618) cale_week_time_pane_t7

0x0b8b,	// (0x000ad652) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x000bbca8) cale_week_time_pane_t

0x0bcb,	// (0x000ad692) cell_cale_week_pane_g2

0x0bea,	// (0x000ad6b1) cell_cale_week_pane_g3_ParamLimits

0x0bea,	// (0x000ad6b1) cell_cale_week_pane_g3

0xaa10,	// (0x000b74d7) grid_highlight_pane_cp07

0xaa18,	// (0x000b74df) listscroll_gms_pane

0xaa22,	// (0x000b74e9) grid_gms_pane

0xaa2b,	// (0x000b74f2) listscroll_gms_pane_g1

0xaa33,	// (0x000b74fa) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x000bbcb9) listscroll_gms_pane_g

0x0c02,	// (0x000ad6c9) scroll_pane_cp010

0x0c0d,	// (0x000ad6d4) cell_gms_pane_ParamLimits

0x0c0d,	// (0x000ad6d4) cell_gms_pane

0x0c27,	// (0x000ad6ee) cell_gms_pane_g1

0xaa3b,	// (0x000b7502) cell_gms_pane_g2

0xaa43,	// (0x000b750a) cell_gms_pane_g3

0xaa4c,	// (0x000b7513) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x000bbcbe) cell_gms_pane_g

0xaa55,	// (0x000b751c) grid_highlight_pane_cp09

0x3482,	// (0x000aff49) phob_pre_status_pane_g1

0x348a,	// (0x000aff51) phob_pre_status_pane_g2

0x3492,	// (0x000aff59) phob_pre_status_pane_g3

0x349a,	// (0x000aff61) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x000bc0ad) phob_pre_status_pane_g

0x34aa,	// (0x000aff71) phob_pre_status_pane_t1

0x34ba,	// (0x000aff81) phob_pre_status_pane_t2

0x34ca,	// (0x000aff91) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x000bc0b8) phob_pre_status_pane_t

0x99d0,	// (0x000b6497) bg_list_pane_cp05

0x0c37,	// (0x000ad6fe) grid_vorec_pane

0x0c43,	// (0x000ad70a) vorec_t1

0x0c51,	// (0x000ad718) vorec_t2

0x0c5f,	// (0x000ad726) vorec_t3

0x0c6d,	// (0x000ad734) vorec_t4

0x0c7b,	// (0x000ad742) vorec_t5

0x9cfd,	// (0x000b67c4) vorec_t6

0x0006,

0xf200,	// (0x000bbcc7) vorec_t

0x0c97,	// (0x000ad75e) wait_bar_pane_cp01

0x0c9f,	// (0x000ad766) cell_vorec_pane_ParamLimits

0x0c9f,	// (0x000ad766) cell_vorec_pane

0x9d0b,	// (0x000b67d2) cell_vorec_pane_g1

0x99d0,	// (0x000b6497) grid_highlight_pane_cp05

0x0cca,	// (0x000ad791) cams_zoom_pane

0x0cd9,	// (0x000ad7a0) image_vga_pane

0x0cf3,	// (0x000ad7ba) main_camera_pane_g1

0x0d05,	// (0x000ad7cc) main_camera_pane_g2

0x0d15,	// (0x000ad7dc) main_camera_pane_g3

0x0d29,	// (0x000ad7f0) main_camera_pane_g4

0x0d3d,	// (0x000ad804) main_camera_pane_g5

0x0d51,	// (0x000ad818) main_camera_pane_g6

0x0d65,	// (0x000ad82c) main_camera_pane_g7

0x0007,

0xf20f,	// (0x000bbcd6) main_camera_pane_g

0x0d79,	// (0x000ad840) main_camera_pane_t1

0x0d8f,	// (0x000ad856) main_camera_pane_t2

0x0001,

0xf220,	// (0x000bbce7) main_camera_pane_t

0x0dcd,	// (0x000ad894) cams_zoom_pane_cp_ParamLimits

0x0dcd,	// (0x000ad894) cams_zoom_pane_cp

0x0df5,	// (0x000ad8bc) image_cif_pane_ParamLimits

0x0df5,	// (0x000ad8bc) image_cif_pane

0x0e30,	// (0x000ad8f7) image_subqcif_pane

0x0e3a,	// (0x000ad901) main_video_pane_g1_ParamLimits

0x0e3a,	// (0x000ad901) main_video_pane_g1

0x0e5e,	// (0x000ad925) main_video_pane_g2_ParamLimits

0x0e5e,	// (0x000ad925) main_video_pane_g2

0x0e94,	// (0x000ad95b) main_video_pane_g3_ParamLimits

0x0e94,	// (0x000ad95b) main_video_pane_g3

0x0ec2,	// (0x000ad989) main_video_pane_g4_ParamLimits

0x0ec2,	// (0x000ad989) main_video_pane_g4

0x0ef0,	// (0x000ad9b7) main_video_pane_g5_ParamLimits

0x0ef0,	// (0x000ad9b7) main_video_pane_g5

0xaa69,	// (0x000b7530) main_video_pane_g6_ParamLimits

0xaa69,	// (0x000b7530) main_video_pane_g6

0x0006,

0xf225,	// (0x000bbcec) main_video_pane_g_ParamLimits

0xf225,	// (0x000bbcec) main_video_pane_g

0x0f19,	// (0x000ad9e0) main_video_pane_t1_ParamLimits

0x0f19,	// (0x000ad9e0) main_video_pane_t1

0xaa83,	// (0x000b754a) cams_zoom_pane_g1

0xaa8c,	// (0x000b7553) cams_zoom_pane_g2

0xaa95,	// (0x000b755c) cams_zoom_pane_g3

0xaa9e,	// (0x000b7565) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x000bbcfb) cams_zoom_pane_g

0x0f76,	// (0x000ada3d) grid_cams_pane

0x0f90,	// (0x000ada57) linegrid_cams_pane

0x0fa2,	// (0x000ada69) cell_cams_pane_ParamLimits

0x0fa2,	// (0x000ada69) cell_cams_pane

0xaaa7,	// (0x000b756e) cams_burst_image_pane

0xaaaf,	// (0x000b7576) cell_cams_pane_g1

0x99d0,	// (0x000b6497) grid_highlight_pane_cp03

0xa8de,	// (0x000b73a5) mp_bg_pane_g1

0x99d0,	// (0x000b6497) bg_list_pane_cp03

0xc76f,	// (0x000b9236) bg_mp_pane

0xc777,	// (0x000b923e) grid_mp_pane

0xc77f,	// (0x000b9246) media_player_g1

0xc789,	// (0x000b9250) media_player_t1

0xc797,	// (0x000b925e) media_player_t2

0xc7a5,	// (0x000b926c) media_player_t3

0xc7b3,	// (0x000b927a) media_player_t4

0xc7c1,	// (0x000b9288) media_player_t5

0xc7cf,	// (0x000b9296) media_player_t6

0xc7dd,	// (0x000b92a4) media_player_t7

0x0006,

0xf5d0,	// (0x000bc097) media_player_t

0xc7eb,	// (0x000b92b2) wait_bar_pane_cp02

0xf5b5,	// (0x000bc07c) main_usb_pane_t

0x3479,	// (0x000aff40) cell_mp_pane

0xa8de,	// (0x000b73a5) cell_mp_pane_g1

0x99d0,	// (0x000b6497) grid_highlight_pane_cp06

0xaab7,	// (0x000b757e) grid_skin_colour_pane

0xaabf,	// (0x000b7586) list_highlight_pane_cp03

0x10db,	// (0x000adba2) skin_g1

0xaac7,	// (0x000b758e) skin_t1

0xaad6,	// (0x000b759d) skin_t2

0x0001,

0xf269,	// (0x000bbd30) skin_t

0x10e3,	// (0x000adbaa) cell_skin_colour_pane_ParamLimits

0x10e3,	// (0x000adbaa) cell_skin_colour_pane

0xaae4,	// (0x000b75ab) cell_skin_colour_pane_g1

0x1156,	// (0x000adc1d) call_video_g1_ParamLimits

0x1156,	// (0x000adc1d) call_video_g1

0x1172,	// (0x000adc39) call_video_g2_ParamLimits

0x1172,	// (0x000adc39) call_video_g2

0x0001,

0xf26e,	// (0x000bbd35) call_video_g_ParamLimits

0xf26e,	// (0x000bbd35) call_video_g

0x11b7,	// (0x000adc7e) call_video_uplink_pane_cp1_ParamLimits

0x11b7,	// (0x000adc7e) call_video_uplink_pane_cp1

0xaaf6,	// (0x000b75bd) call_video_uplink_pane_cp2

0x1258,	// (0x000add1f) video_down_crop_pane_ParamLimits

0x1258,	// (0x000add1f) video_down_crop_pane

0x1341,	// (0x000ade08) video_down_pane_ParamLimits

0x1341,	// (0x000ade08) video_down_pane

0xaafe,	// (0x000b75c5) video_down_subqcif_pane_ParamLimits

0xaafe,	// (0x000b75c5) video_down_subqcif_pane

0xab18,	// (0x000b75df) video_down_subqcif_pane_cp_ParamLimits

0xab18,	// (0x000b75df) video_down_subqcif_pane_cp

0xab40,	// (0x000b7607) im_reading_pane_ParamLimits

0xab40,	// (0x000b7607) im_reading_pane

0x144a,	// (0x000adf11) im_writing_pane_ParamLimits

0x144a,	// (0x000adf11) im_writing_pane

0x1466,	// (0x000adf2d) im_reading_pane_t1

0xab5a,	// (0x000b7621) list_im_pane

0xab6b,	// (0x000b7632) scroll_pane_cp07

0x14a2,	// (0x000adf69) im_writing_pane_t1_ParamLimits

0x14a2,	// (0x000adf69) im_writing_pane_t1

0xab84,	// (0x000b764b) im_writing_pane_t2_ParamLimits

0xab84,	// (0x000b764b) im_writing_pane_t2

0x0001,

0xf278,	// (0x000bbd3f) im_writing_pane_t_ParamLimits

0xf278,	// (0x000bbd3f) im_writing_pane_t

0x99d0,	// (0x000b6497) input_focus_pane_cp04

0x99d0,	// (0x000b6497) input_focus_pane_cp05

0x14b7,	// (0x000adf7e) list_im_single_pane_ParamLimits

0x14b7,	// (0x000adf7e) list_im_single_pane

0x14cd,	// (0x000adf94) list_single_im_pane_t1

0x3439,	// (0x000aff00) blid_accuracy_pane

0x3441,	// (0x000aff08) blid_compass_pane

0x344b,	// (0x000aff12) main_location_t1

0x345b,	// (0x000aff22) main_location_t2

0x346b,	// (0x000aff32) main_location_t3

0x0002,

0xf5df,	// (0x000bc0a6) main_location_t

0x99d0,	// (0x000b6497) aid_levels_location

0xa8de,	// (0x000b73a5) blid_accuracy_pane_g1

0xa8de,	// (0x000b73a5) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x000bbda1) blid_accuracy_pane_g

0xabcc,	// (0x000b7693) wml_content_pane

0xac0a,	// (0x000b76d1) wml_button_pane_ParamLimits

0xac0a,	// (0x000b76d1) wml_button_pane

0x14dc,	// (0x000adfa3) wml_list_single_large_pane_ParamLimits

0x14dc,	// (0x000adfa3) wml_list_single_large_pane

0x14f2,	// (0x000adfb9) wml_list_single_medium_pane_ParamLimits

0x14f2,	// (0x000adfb9) wml_list_single_medium_pane

0x1509,	// (0x000adfd0) wml_list_single_small_pane_ParamLimits

0x1509,	// (0x000adfd0) wml_list_single_small_pane

0xac1e,	// (0x000b76e5) wml_selection_box_pane_ParamLimits

0xac1e,	// (0x000b76e5) wml_selection_box_pane

0xac31,	// (0x000b76f8) wml_list_single_pane_t1

0xac40,	// (0x000b7707) wml_list_single_medium_pane_t1

0xac4f,	// (0x000b7716) wml_list_single_large_pane_t1

0xac5e,	// (0x000b7725) input_focus_pane_cp02_ParamLimits

0xac5e,	// (0x000b7725) input_focus_pane_cp02

0xac71,	// (0x000b7738) wml_selection_box_pane_g1

0xac7a,	// (0x000b7741) wml_selection_box_pane_t1_ParamLimits

0xac7a,	// (0x000b7741) wml_selection_box_pane_t1

0x9c2b,	// (0x000b66f2) bg_wml_button_pane_ParamLimits

0x9c2b,	// (0x000b66f2) bg_wml_button_pane

0xac92,	// (0x000b7759) wml_button_pane_g1

0xac9a,	// (0x000b7761) wml_button_pane_t1

0xac92,	// (0x000b7759) wml_button_bg_pane_g1

0xacaa,	// (0x000b7771) wml_button_bg_pane_g2

0xacb2,	// (0x000b7779) wml_button_bg_pane_g3

0xacba,	// (0x000b7781) wml_button_bg_pane_g4

0xacc2,	// (0x000b7789) wml_button_bg_pane_g5

0xacca,	// (0x000b7791) wml_button_bg_pane_g6

0xacd2,	// (0x000b7799) wml_button_bg_pane_g7

0xacda,	// (0x000b77a1) wml_button_bg_pane_g8

0xace2,	// (0x000b77a9) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x000bbd44) wml_button_bg_pane_g

0x1525,	// (0x000adfec) bg_list_pane_cp02

0xacea,	// (0x000b77b1) mce_header_pane_ParamLimits

0xacea,	// (0x000b77b1) mce_header_pane

0xad00,	// (0x000b77c7) mce_icon_pane

0xad00,	// (0x000b77c7) mce_image_pane

0xad09,	// (0x000b77d0) mce_text_pane_ParamLimits

0xad09,	// (0x000b77d0) mce_text_pane

0x152f,	// (0x000adff6) scroll_pane_cp03

0xac02,	// (0x000b76c9) scroll_pane_cp04

0xad1c,	// (0x000b77e3) scroll_pane_cp05_ParamLimits

0xad1c,	// (0x000b77e3) scroll_pane_cp05

0x1539,	// (0x000ae000) mce_header_field_pane_ParamLimits

0x1539,	// (0x000ae000) mce_header_field_pane

0x1552,	// (0x000ae019) mce_header_field_pane_2_ParamLimits

0x1552,	// (0x000ae019) mce_header_field_pane_2

0x1568,	// (0x000ae02f) mce_header_field_pane_3

0x1570,	// (0x000ae037) list_single_mce_message_pane_ParamLimits

0x1570,	// (0x000ae037) list_single_mce_message_pane

0x1589,	// (0x000ae050) list_single_mce_smart_pane_ParamLimits

0x1589,	// (0x000ae050) list_single_mce_smart_pane

0xad28,	// (0x000b77ef) input_focus_pane_cp03

0xad31,	// (0x000b77f8) list_header_data_pane

0x15ad,	// (0x000ae074) mce_header_field_pane_t1

0x15bd,	// (0x000ae084) list_single_mce_header_pane_ParamLimits

0x15bd,	// (0x000ae084) list_single_mce_header_pane

0xad39,	// (0x000b7800) list_single_mce_header_pane_t1

0xad48,	// (0x000b780f) list_single_mce_message_pane_g1

0xad50,	// (0x000b7817) list_single_mce_message_pane_t1

0x15f7,	// (0x000ae0be) bg_cale_heading_pane_cp01_ParamLimits

0x15f7,	// (0x000ae0be) bg_cale_heading_pane_cp01

0xad5e,	// (0x000b7825) bg_cale_pane_cp02_ParamLimits

0xad5e,	// (0x000b7825) bg_cale_pane_cp02

0x163e,	// (0x000ae105) cale_month_corner_pane

0x165d,	// (0x000ae124) cale_month_day_heading_pane_ParamLimits

0x165d,	// (0x000ae124) cale_month_day_heading_pane

0x16bc,	// (0x000ae183) cale_month_pane_g1_ParamLimits

0x16bc,	// (0x000ae183) cale_month_pane_g1

0x16f8,	// (0x000ae1bf) cale_month_pane_g2_ParamLimits

0x16f8,	// (0x000ae1bf) cale_month_pane_g2

0x1734,	// (0x000ae1fb) cale_month_pane_g3_ParamLimits

0x1734,	// (0x000ae1fb) cale_month_pane_g3

0x1788,	// (0x000ae24f) cale_month_pane_g4_ParamLimits

0x1788,	// (0x000ae24f) cale_month_pane_g4

0x17dc,	// (0x000ae2a3) cale_month_pane_g5_ParamLimits

0x17dc,	// (0x000ae2a3) cale_month_pane_g5

0x1838,	// (0x000ae2ff) cale_month_pane_g6_ParamLimits

0x1838,	// (0x000ae2ff) cale_month_pane_g6

0x189c,	// (0x000ae363) cale_month_pane_g7_ParamLimits

0x189c,	// (0x000ae363) cale_month_pane_g7

0x1908,	// (0x000ae3cf) cale_month_pane_g8_ParamLimits

0x1908,	// (0x000ae3cf) cale_month_pane_g8

0x1974,	// (0x000ae43b) cale_month_pane_g9_ParamLimits

0x1974,	// (0x000ae43b) cale_month_pane_g9

0x19d2,	// (0x000ae499) cale_month_pane_g10_ParamLimits

0x19d2,	// (0x000ae499) cale_month_pane_g10

0x1a24,	// (0x000ae4eb) cale_month_pane_g11_ParamLimits

0x1a24,	// (0x000ae4eb) cale_month_pane_g11

0x1a76,	// (0x000ae53d) cale_month_pane_g12_ParamLimits

0x1a76,	// (0x000ae53d) cale_month_pane_g12

0x1ace,	// (0x000ae595) cale_month_pane_g13_ParamLimits

0x1ace,	// (0x000ae595) cale_month_pane_g13

0x000c,

0xf290,	// (0x000bbd57) cale_month_pane_g_ParamLimits

0xf290,	// (0x000bbd57) cale_month_pane_g

0x1b26,	// (0x000ae5ed) cale_month_week_pane

0x1b4a,	// (0x000ae611) grid_cale_month_pane_ParamLimits

0x1b4a,	// (0x000ae611) grid_cale_month_pane

0x1ba0,	// (0x000ae667) cale_month_day_heading_pane_t1

0x1c26,	// (0x000ae6ed) cale_month_day_heading_pane_t2

0x1cb7,	// (0x000ae77e) cale_month_day_heading_pane_t3

0x1d48,	// (0x000ae80f) cale_month_day_heading_pane_t4

0x1dd9,	// (0x000ae8a0) cale_month_day_heading_pane_t5

0x1e7a,	// (0x000ae941) cale_month_day_heading_pane_t6

0x1f1f,	// (0x000ae9e6) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x000bbd72) cale_month_day_heading_pane_t

0xaa02,	// (0x000b74c9) bg_cale_side_pane_cp01

0x1fc8,	// (0x000aea8f) cale_month_week_pane_t1

0x1fe1,	// (0x000aeaa8) cale_month_week_pane_t2

0x1ffa,	// (0x000aeac1) cale_month_week_pane_t3

0x2013,	// (0x000aeada) cale_month_week_pane_t4

0x202c,	// (0x000aeaf3) cale_month_week_pane_t5

0x2045,	// (0x000aeb0c) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x000bbd81) cale_month_week_pane_t

0x2064,	// (0x000aeb2b) cell_cale_month_pane_ParamLimits

0x2064,	// (0x000aeb2b) cell_cale_month_pane

0x9d15,	// (0x000b67dc) cell_cale_month_pane_g1

0x21b8,	// (0x000aec7f) cell_cale_month_pane_t1_ParamLimits

0x21b8,	// (0x000aec7f) cell_cale_month_pane_t1

0xaa10,	// (0x000b74d7) grid_highlight_pane_cp08

0xa8de,	// (0x000b73a5) main_smil_g1

0x21d8,	// (0x000aec9f) smil_status_pane

0xad9d,	// (0x000b7864) smil_text_pane

0xc68d,	// (0x000b9154) bg_popup_call3_rect_pane_g8

0xc695,	// (0x000b915c) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x000bc03a) bg_popup_call3_rect_pane_g

0xc923,	// (0x000b93ea) smil_status_volume_pane_g1

0x21eb,	// (0x000aecb2) smil_status_pane_t1

0x9e63,	// (0x000b692a) volume_smil_pane

0xada7,	// (0x000b786e) list_smil_text_pane

0x2204,	// (0x000aeccb) scroll_pane_cp011

0x220f,	// (0x000aecd6) smil_text_list_pane_t1_ParamLimits

0x220f,	// (0x000aecd6) smil_text_list_pane_t1

0x9d21,	// (0x000b67e8) aid_volume_smil_ParamLimits

0x9d21,	// (0x000b67e8) aid_volume_smil

0xa8de,	// (0x000b73a5) smil_volume_pane_g1

0xa8de,	// (0x000b73a5) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x000bbda1) smil_volume_pane_g

0x0458,	// (0x000acf1f) listscroll_cale_day_pane

0xadb1,	// (0x000b7878) bg_cale_pane

0xadc9,	// (0x000b7890) list_cale_pane

0xadec,	// (0x000b78b3) scroll_pane_cp09

0xadfd,	// (0x000b78c4) cale_bg_pane_g1

0xae05,	// (0x000b78cc) cale_bg_pane_g2

0xae0d,	// (0x000b78d4) cale_bg_pane_g3

0xae15,	// (0x000b78dc) cale_bg_pane_g4

0xae1d,	// (0x000b78e4) cale_bg_pane_g5

0xae25,	// (0x000b78ec) cale_bg_pane_g6

0xae2d,	// (0x000b78f4) cale_bg_pane_g7

0xae35,	// (0x000b78fc) cale_bg_pane_g8

0xae3d,	// (0x000b7904) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x000bbda6) cale_bg_pane_g

0x2248,	// (0x000aed0f) list_cale_time_pane_ParamLimits

0x2248,	// (0x000aed0f) list_cale_time_pane

0xae4d,	// (0x000b7914) list_cale_time_pane_g1_ParamLimits

0xae4d,	// (0x000b7914) list_cale_time_pane_g1

0xae59,	// (0x000b7920) list_cale_time_pane_g2_ParamLimits

0xae59,	// (0x000b7920) list_cale_time_pane_g2

0x225c,	// (0x000aed23) list_cale_time_pane_g3_ParamLimits

0x225c,	// (0x000aed23) list_cale_time_pane_g3

0x226a,	// (0x000aed31) list_cale_time_pane_g4_ParamLimits

0x226a,	// (0x000aed31) list_cale_time_pane_g4

0x2278,	// (0x000aed3f) list_cale_time_pane_g5_ParamLimits

0x2278,	// (0x000aed3f) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x000bbdb9) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x000bbdb9) list_cale_time_pane_g

0xae73,	// (0x000b793a) list_cale_time_pane_t1_ParamLimits

0xae73,	// (0x000b793a) list_cale_time_pane_t1

0xae9b,	// (0x000b7962) list_cale_time_pane_t2_ParamLimits

0xae9b,	// (0x000b7962) list_cale_time_pane_t2

0x2617,	// (0x000af0de) aid_blid_cardinal_pane

0x2655,	// (0x000af11c) compass_pane_t4

0xaec3,	// (0x000b798a) list_cale_time_pane_t4_ParamLimits

0xaec3,	// (0x000b798a) list_cale_time_pane_t4

0x2663,	// (0x000af12a) compass_pane_t5

0x2671,	// (0x000af138) compass_pane_t6

0x267f,	// (0x000af146) compass_pane_t7

0xb2dd,	// (0x000b7da4) navi_pane_cc_t1

0xb432,	// (0x000b7ef9) aid_phob_thumbnail_center_pane

0x2e04,	// (0x000af8cb) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x000bbdc6) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x000bbdc6) list_cale_time_pane_t

0x9627,	// (0x000b60ee) bg_popup_window_pane_cp02_ParamLimits

0x9627,	// (0x000b60ee) bg_popup_window_pane_cp02

0xaeeb,	// (0x000b79b2) heading_pane_cp01_ParamLimits

0xaeeb,	// (0x000b79b2) heading_pane_cp01

0xaef7,	// (0x000b79be) loc_req_pane_ParamLimits

0xaef7,	// (0x000b79be) loc_req_pane

0xaf07,	// (0x000b79ce) loc_type_pane_ParamLimits

0xaf07,	// (0x000b79ce) loc_type_pane

0xaf19,	// (0x000b79e0) loc_type_pane_t1_ParamLimits

0xaf19,	// (0x000b79e0) loc_type_pane_t1

0xaf2b,	// (0x000b79f2) loc_type_pane_t2_ParamLimits

0xaf2b,	// (0x000b79f2) loc_type_pane_t2

0xaf3d,	// (0x000b7a04) loc_type_pane_t3_ParamLimits

0xaf3d,	// (0x000b7a04) loc_type_pane_t3

0x0002,

0xf306,	// (0x000bbdcd) loc_type_pane_t_ParamLimits

0xf306,	// (0x000bbdcd) loc_type_pane_t

0xaf4f,	// (0x000b7a16) list_loc_req_pane

0xaf59,	// (0x000b7a20) scroll_pane_cp012

0x2286,	// (0x000aed4d) list_single_loc_request_popup_menu_pane_ParamLimits

0x2286,	// (0x000aed4d) list_single_loc_request_popup_menu_pane

0xaf64,	// (0x000b7a2b) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf64,	// (0x000b7a2b) list_single_loc_request_popup_menu_pane_g1

0xaf70,	// (0x000b7a37) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf70,	// (0x000b7a37) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x000bbdd4) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x000bbdd4) list_single_loc_request_popup_menu_pane_g

0xaf7c,	// (0x000b7a43) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf7c,	// (0x000b7a43) list_single_loc_request_popup_menu_pane_t1

0x9c2b,	// (0x000b66f2) bg_popup_window_pane_cp03_ParamLimits

0x9c2b,	// (0x000b66f2) bg_popup_window_pane_cp03

0xaf92,	// (0x000b7a59) heading_loc_req_pane_ParamLimits

0xaf92,	// (0x000b7a59) heading_loc_req_pane

0x2293,	// (0x000aed5a) popup_dyc_status_message_window_g1_ParamLimits

0x2293,	// (0x000aed5a) popup_dyc_status_message_window_g1

0x22a7,	// (0x000aed6e) popup_dyc_status_message_window_t1_ParamLimits

0x22a7,	// (0x000aed6e) popup_dyc_status_message_window_t1

0x22bc,	// (0x000aed83) popup_dyc_status_message_window_t2_ParamLimits

0x22bc,	// (0x000aed83) popup_dyc_status_message_window_t2

0x22d1,	// (0x000aed98) popup_dyc_status_message_window_t3_ParamLimits

0x22d1,	// (0x000aed98) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x000bbdd9) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x000bbdd9) popup_dyc_status_message_window_t

0x99d0,	// (0x000b6497) bg_heading_pane_cp01

0xaf9e,	// (0x000b7a65) heading_loc_req_pane_g1

0xafa6,	// (0x000b7a6d) heading_loc_req_pane_g2

0xafae,	// (0x000b7a75) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x000bbde0) heading_loc_req_pane_g

0xafb6,	// (0x000b7a7d) heading_loc_req_pane_t1

0xafc6,	// (0x000b7a8d) bg_popup_sub_pane_cp01_ParamLimits

0xafc6,	// (0x000b7a8d) bg_popup_sub_pane_cp01

0xafd4,	// (0x000b7a9b) popup_cale_events_window_g1_ParamLimits

0xafd4,	// (0x000b7a9b) popup_cale_events_window_g1

0xaff4,	// (0x000b7abb) popup_cale_events_window_g2_ParamLimits

0xaff4,	// (0x000b7abb) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x000bbe14) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x000bbe14) popup_cale_events_window_g

0xb014,	// (0x000b7adb) popup_cale_events_window_t1_ParamLimits

0xb014,	// (0x000b7adb) popup_cale_events_window_t1

0xb026,	// (0x000b7aed) popup_cale_events_window_t2_ParamLimits

0xb026,	// (0x000b7aed) popup_cale_events_window_t2

0xb064,	// (0x000b7b2b) popup_cale_events_window_t3_ParamLimits

0xb064,	// (0x000b7b2b) popup_cale_events_window_t3

0xb09e,	// (0x000b7b65) popup_cale_events_window_t4_ParamLimits

0xb09e,	// (0x000b7b65) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x000bbe19) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x000bbe19) popup_cale_events_window_t

0x23d6,	// (0x000aee9d) call_type_pane

0x23e6,	// (0x000aeead) popup_call_status_window_g1

0x23fa,	// (0x000aeec1) popup_call_status_window_g2

0x240e,	// (0x000aeed5) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x000bbe22) popup_call_status_window_g

0xb0d4,	// (0x000b7b9b) call_type_pane_g1

0xb0dd,	// (0x000b7ba4) call_type_pane_g2

0x0001,

0xf362,	// (0x000bbe29) call_type_pane_g

0x99d0,	// (0x000b6497) bg_popup_sub_pane_cp02

0xb0e6,	// (0x000b7bad) listscroll_popup_wml_pane

0xb0ee,	// (0x000b7bb5) list_wml_pane

0xb0f8,	// (0x000b7bbf) scroll_pane_cp013

0xb103,	// (0x000b7bca) list_single_graphic_popup_wml_pane_ParamLimits

0xb103,	// (0x000b7bca) list_single_graphic_popup_wml_pane

0xa8de,	// (0x000b73a5) list_single_graphic_popup_wml_pane_g1

0xb117,	// (0x000b7bde) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x000bbe2e) list_single_graphic_popup_wml_pane_g

0xb11f,	// (0x000b7be6) list_single_graphic_popup_wml_pane_t1

0xb135,	// (0x000b7bfc) aid_call_pane

0x9c23,	// (0x000b66ea) popup_clock_analogue_window_g1

0x9c23,	// (0x000b66ea) popup_clock_analogue_window_g2

0x9d43,	// (0x000b680a) popup_clock_analogue_window_g3

0x9d43,	// (0x000b680a) popup_clock_analogue_window_g4

0xa8de,	// (0x000b73a5) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x000bbe33) popup_clock_analogue_window_g

0x9d4b,	// (0x000b6812) popup_clock_analogue_window_t1

0x9d59,	// (0x000b6820) clock_digital_number_pane_ParamLimits

0x9d59,	// (0x000b6820) clock_digital_number_pane

0x9d65,	// (0x000b682c) clock_digital_number_pane_cp02_ParamLimits

0x9d65,	// (0x000b682c) clock_digital_number_pane_cp02

0x9d71,	// (0x000b6838) clock_digital_number_pane_cp03_ParamLimits

0x9d71,	// (0x000b6838) clock_digital_number_pane_cp03

0x9d7d,	// (0x000b6844) clock_digital_number_pane_cp04_ParamLimits

0x9d7d,	// (0x000b6844) clock_digital_number_pane_cp04

0x9d89,	// (0x000b6850) clock_digital_separator_pane_ParamLimits

0x9d89,	// (0x000b6850) clock_digital_separator_pane

0x9d95,	// (0x000b685c) popup_clock_digital_window_t1

0xa8de,	// (0x000b73a5) clock_digital_number_pane_g1

0xa8de,	// (0x000b73a5) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x000bbda1) clock_digital_number_pane_g

0xa8de,	// (0x000b73a5) clock_digital_separator_pane_g1

0xa8de,	// (0x000b73a5) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x000bbda1) clock_digital_separator_pane_g

0x99d0,	// (0x000b6497) bg_popup_window_pane_cp04

0xb13d,	// (0x000b7c04) heading_pane_cp03

0xb145,	// (0x000b7c0c) listscroll_popup_gms_pane

0xb14d,	// (0x000b7c14) grid_large_graphic_popup_pane

0xb157,	// (0x000b7c1e) listscroll_popup_gms_pane_g1

0xb15f,	// (0x000b7c26) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x000bbe3e) listscroll_popup_gms_pane_g

0xac02,	// (0x000b76c9) scroll_pane_cp014

0x241e,	// (0x000aeee5) cell_large_graphic_popup_pane_ParamLimits

0x241e,	// (0x000aeee5) cell_large_graphic_popup_pane

0x2436,	// (0x000aeefd) cell_large_graphic_popup_pane_g1_ParamLimits

0x2436,	// (0x000aeefd) cell_large_graphic_popup_pane_g1

0xb167,	// (0x000b7c2e) cell_large_graphic_popup_pane_g2_ParamLimits

0xb167,	// (0x000b7c2e) cell_large_graphic_popup_pane_g2

0xb173,	// (0x000b7c3a) cell_large_graphic_popup_pane_g3_ParamLimits

0xb173,	// (0x000b7c3a) cell_large_graphic_popup_pane_g3

0xb180,	// (0x000b7c47) cell_large_graphic_popup_pane_g4_ParamLimits

0xb180,	// (0x000b7c47) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x000bbe43) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x000bbe43) cell_large_graphic_popup_pane_g

0xb190,	// (0x000b7c57) grid_highlight_pane_cp010

0xa8de,	// (0x000b73a5) bg_popup_call_pane_g1

0xb19a,	// (0x000b7c61) list_single_graphic_popup_conf_pane_ParamLimits

0xb19a,	// (0x000b7c61) list_single_graphic_popup_conf_pane

0xb1ac,	// (0x000b7c73) list_highlight_pane_cp01

0xb1b5,	// (0x000b7c7c) list_single_graphic_popup_conf_pane_g1

0xb1bd,	// (0x000b7c84) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x000bbe4c) list_single_graphic_popup_conf_pane_g

0xb1c5,	// (0x000b7c8c) list_single_graphic_popup_conf_pane_t1

0xb1d3,	// (0x000b7c9a) linegrid_cams_pane_g1

0x2442,	// (0x000aef09) linegrid_cams_pane_g2

0xaa43,	// (0x000b750a) linegrid_cams_pane_g3

0xb1dc,	// (0x000b7ca3) linegrid_cams_pane_g4

0x244b,	// (0x000aef12) linegrid_cams_pane_g5

0x2454,	// (0x000aef1b) linegrid_cams_pane_g6

0xaa4c,	// (0x000b7513) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x000bbe51) linegrid_cams_pane_g

0xb1e5,	// (0x000b7cac) popup_clock_analogue_window

0xb1e5,	// (0x000b7cac) popup_clock_digital_window

0x99d0,	// (0x000b6497) popup_phob_thumbnail_window

0xa8de,	// (0x000b73a5) call_video_uplink_pane_g1

0xb1ee,	// (0x000b7cb5) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x000bbe60) call_video_uplink_pane_g

0xb1f6,	// (0x000b7cbd) video_uplink_pane

0xb1fe,	// (0x000b7cc5) mce_image_pane_g1

0x245f,	// (0x000aef26) mce_image_pane_g2

0x2469,	// (0x000aef30) mce_image_pane_g3

0x2473,	// (0x000aef3a) mce_image_pane_g4

0x247b,	// (0x000aef42) mce_image_pane_g5

0x0004,

0xf39e,	// (0x000bbe65) mce_image_pane_g

0xb208,	// (0x000b7ccf) control_top_pane_stacon_cp01_ParamLimits

0xb208,	// (0x000b7ccf) control_top_pane_stacon_cp01

0xb21c,	// (0x000b7ce3) uni_indicator_pane_stacon_cp01_ParamLimits

0xb21c,	// (0x000b7ce3) uni_indicator_pane_stacon_cp01

0xb22d,	// (0x000b7cf4) bg_popup_sub_pane_cp03

0x2483,	// (0x000aef4a) chi_dic_find_pane

0x248b,	// (0x000aef52) listscroll_chi_dic_pane

0x2494,	// (0x000aef5b) main_pane_chidic_g1

0x24a7,	// (0x000aef6e) chi_dic_find_pane_t1

0xb237,	// (0x000b7cfe) find_chidic_pane

0xb240,	// (0x000b7d07) chi_dic_list_pane_ParamLimits

0xb240,	// (0x000b7d07) chi_dic_list_pane

0xb251,	// (0x000b7d18) scroll_pane_cp020

0x24b5,	// (0x000aef7c) find_chidic_pane_t1

0x99d0,	// (0x000b6497) input_focus_pane_cp06

0x00ce,	// (0x000acb95) list_chi_dic_pane_ParamLimits

0x00ce,	// (0x000acb95) list_chi_dic_pane

0x24c4,	// (0x000aef8b) list_chi_dic_pane_t1_ParamLimits

0x24c4,	// (0x000aef8b) list_chi_dic_pane_t1

0x99d0,	// (0x000b6497) list_highlight_pane_cp020

0xb259,	// (0x000b7d20) bg_cale_heading_pane_g1

0x24d7,	// (0x000aef9e) bg_cale_heading_pane_g2

0x24df,	// (0x000aefa6) bg_cale_heading_pane_g3

0x24e7,	// (0x000aefae) bg_cale_heading_pane_g4

0x24f1,	// (0x000aefb8) bg_cale_heading_pane_g5

0x24fb,	// (0x000aefc2) bg_cale_heading_pane_g6

0x2503,	// (0x000aefca) bg_cale_heading_pane_g7

0x250b,	// (0x000aefd2) bg_cale_heading_pane_g8

0x2515,	// (0x000aefdc) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x000bbe70) bg_cale_heading_pane_g

0xb259,	// (0x000b7d20) bg_cale_side_pane_g1

0x251f,	// (0x000aefe6) bg_cale_side_pane_g2

0x2529,	// (0x000aeff0) bg_cale_side_pane_g3

0x2533,	// (0x000aeffa) bg_cale_side_pane_g4

0x253d,	// (0x000af004) bg_cale_side_pane_g5

0x2547,	// (0x000af00e) bg_cale_side_pane_g6

0x2551,	// (0x000af018) bg_cale_side_pane_g7

0x255b,	// (0x000af022) bg_cale_side_pane_g8

0x2563,	// (0x000af02a) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x000bbe83) bg_cale_side_pane_g

0x256b,	// (0x000af032) popup_call_status_window_ParamLimits

0x256b,	// (0x000af032) popup_call_status_window

0xb261,	// (0x000b7d28) stacon_top_pane

0xb269,	// (0x000b7d30) status_pane_ParamLimits

0xb269,	// (0x000b7d30) status_pane

0xb27e,	// (0x000b7d45) status_small_pane

0xb286,	// (0x000b7d4d) control_pane

0x99d0,	// (0x000b6497) stacon_bottom_pane

0xb28e,	// (0x000b7d55) list_single_mce_smart_pane_t1_ParamLimits

0xb28e,	// (0x000b7d55) list_single_mce_smart_pane_t1

0xb2a1,	// (0x000b7d68) list_single_mce_smart_pane_t2_ParamLimits

0xb2a1,	// (0x000b7d68) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x000bbe96) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x000bbe96) list_single_mce_smart_pane_t

0x25b8,	// (0x000af07f) compass_pane

0x25c3,	// (0x000af08a) main_location2_pane_t1

0x25d7,	// (0x000af09e) main_location2_pane_t2

0x25ed,	// (0x000af0b4) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x000bbe9b) main_location2_pane_t

0xb2c0,	// (0x000b7d87) compass_pane_g1_ParamLimits

0xb2c0,	// (0x000b7d87) compass_pane_g1

0x2637,	// (0x000af0fe) compass_pane_t1

0x2646,	// (0x000af10d) compass_pane_t2

0x0005,

0xf3dd,	// (0x000bbea4) compass_pane_t

0x268d,	// (0x000af154) text_secondary_cp61

0xb2d4,	// (0x000b7d9b) navi_pane_cams_g5

0xb2f7,	// (0x000b7dbe) navi_pane_im_t1

0xb305,	// (0x000b7dcc) navi_pane_mp_g1_ParamLimits

0xb305,	// (0x000b7dcc) navi_pane_mp_g1

0xb319,	// (0x000b7de0) navi_pane_mp_g2_ParamLimits

0xb319,	// (0x000b7de0) navi_pane_mp_g2

0xb325,	// (0x000b7dec) navi_pane_mp_g3_ParamLimits

0xb325,	// (0x000b7dec) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x000bbeb8) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x000bbeb8) navi_pane_mp_g

0xb331,	// (0x000b7df8) navi_pane_mp_t1

0xb33f,	// (0x000b7e06) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x000bbebf) navi_pane_mp_t

0xb37b,	// (0x000b7e42) navi_pane_vt_g1

0xb331,	// (0x000b7df8) navi_pane_vt_t1

0xb383,	// (0x000b7e4a) navi_slider_pane

0xb38b,	// (0x000b7e52) zooming_pane

0xb393,	// (0x000b7e5a) navi_slider_pane_g1

0x9db2,	// (0x000b6879) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x000bbec6) navi_slider_pane_g

0xb3b7,	// (0x000b7e7e) aid_levels_zoom

0xb3bf,	// (0x000b7e86) zooming_pane_g1

0xb3c7,	// (0x000b7e8e) zooming_pane_g2

0xb3c7,	// (0x000b7e8e) zooming_pane_g3

0x0002,

0xf40e,	// (0x000bbed5) zooming_pane_g

0xb3cf,	// (0x000b7e96) level_10_zoom

0xb3d8,	// (0x000b7e9f) level_11_zoom

0xb3e1,	// (0x000b7ea8) level_1_zoom

0xb3ea,	// (0x000b7eb1) level_2_zoom

0xb3f3,	// (0x000b7eba) level_3_zoom

0xb3fc,	// (0x000b7ec3) level_4_zoom

0xb405,	// (0x000b7ecc) level_5_zoom

0xb40e,	// (0x000b7ed5) level_6_zoom

0xb417,	// (0x000b7ede) level_7_zoom

0xb420,	// (0x000b7ee7) level_8_zoom

0xb429,	// (0x000b7ef0) level_9_zoom

0xb43a,	// (0x000b7f01) popup_phob_thumbnail_window_g1

0xb442,	// (0x000b7f09) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x000bbedc) popup_phob_thumbnail_window_g

0xc7f3,	// (0x000b92ba) level_1_location

0xc7fb,	// (0x000b92c2) level_2_location

0xc803,	// (0x000b92ca) level_3_location

0xc80b,	// (0x000b92d2) level_4_location

0xb38b,	// (0x000b7e52) level_5_location

0x27d6,	// (0x000af29d) mce_icon_pane_g1

0x27e0,	// (0x000af2a7) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x000bbee1) mce_icon_pane_g

0x27e8,	// (0x000af2af) main_mup_pane_g1_ParamLimits

0x27e8,	// (0x000af2af) main_mup_pane_g1

0x27fe,	// (0x000af2c5) main_mup_pane_g2_ParamLimits

0x27fe,	// (0x000af2c5) main_mup_pane_g2

0x2816,	// (0x000af2dd) main_mup_pane_g3_ParamLimits

0x2816,	// (0x000af2dd) main_mup_pane_g3

0x282e,	// (0x000af2f5) main_mup_pane_g4_ParamLimits

0x282e,	// (0x000af2f5) main_mup_pane_g4

0x2846,	// (0x000af30d) main_mup_pane_g5_ParamLimits

0x2846,	// (0x000af30d) main_mup_pane_g5

0x2862,	// (0x000af329) main_mup_pane_g6_ParamLimits

0x2862,	// (0x000af329) main_mup_pane_g6

0x287c,	// (0x000af343) main_mup_pane_g7_ParamLimits

0x287c,	// (0x000af343) main_mup_pane_g7

0x289a,	// (0x000af361) main_mup_pane_g8_ParamLimits

0x289a,	// (0x000af361) main_mup_pane_g8

0x28b8,	// (0x000af37f) main_mup_pane_g9_ParamLimits

0x28b8,	// (0x000af37f) main_mup_pane_g9

0x28d4,	// (0x000af39b) main_mup_pane_g10_ParamLimits

0x28d4,	// (0x000af39b) main_mup_pane_g10

0x28f2,	// (0x000af3b9) main_mup_pane_g11_ParamLimits

0x28f2,	// (0x000af3b9) main_mup_pane_g11

0x290c,	// (0x000af3d3) main_mup_pane_g12_ParamLimits

0x290c,	// (0x000af3d3) main_mup_pane_g12

0x2922,	// (0x000af3e9) main_mup_pane_g13_ParamLimits

0x2922,	// (0x000af3e9) main_mup_pane_g13

0x000c,

0xf41f,	// (0x000bbee6) main_mup_pane_g_ParamLimits

0xf41f,	// (0x000bbee6) main_mup_pane_g

0x2936,	// (0x000af3fd) main_mup_pane_t1_ParamLimits

0x2936,	// (0x000af3fd) main_mup_pane_t1

0x2952,	// (0x000af419) main_mup_pane_t2_ParamLimits

0x2952,	// (0x000af419) main_mup_pane_t2

0x296a,	// (0x000af431) main_mup_pane_t3_ParamLimits

0x296a,	// (0x000af431) main_mup_pane_t3

0x2982,	// (0x000af449) main_mup_pane_t4_ParamLimits

0x2982,	// (0x000af449) main_mup_pane_t4

0x29a0,	// (0x000af467) main_mup_pane_t5_ParamLimits

0x29a0,	// (0x000af467) main_mup_pane_t5

0x29b5,	// (0x000af47c) main_mup_pane_t6_ParamLimits

0x29b5,	// (0x000af47c) main_mup_pane_t6

0x0005,

0xf43a,	// (0x000bbf01) main_mup_pane_t_ParamLimits

0xf43a,	// (0x000bbf01) main_mup_pane_t

0x29c7,	// (0x000af48e) mup_progress_pane_ParamLimits

0x29c7,	// (0x000af48e) mup_progress_pane

0x29d3,	// (0x000af49a) mup_visualizer_pane_ParamLimits

0x29d3,	// (0x000af49a) mup_visualizer_pane

0x2a07,	// (0x000af4ce) mup_volume_pane_ParamLimits

0x2a07,	// (0x000af4ce) mup_volume_pane

0xb44a,	// (0x000b7f11) mup_visualizer_pane_g1_ParamLimits

0xb44a,	// (0x000b7f11) mup_visualizer_pane_g1

0xb44a,	// (0x000b7f11) mup_visualizer_pane_g2_ParamLimits

0xb44a,	// (0x000b7f11) mup_visualizer_pane_g2

0xb2c0,	// (0x000b7d87) mup_visualizer_pane_g3_ParamLimits

0xb2c0,	// (0x000b7d87) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x000bbf0e) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x000bbf0e) mup_visualizer_pane_g

0xa8de,	// (0x000b73a5) mup_volume_pane_g1

0xb460,	// (0x000b7f27) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x000bbf15) mup_volume_pane_g

0xa8de,	// (0x000b73a5) mup_progress_pane_g1

0xb469,	// (0x000b7f30) mup_progress_pane_g2

0xb472,	// (0x000b7f39) mup_progress_pane_g3

0x0002,

0xf453,	// (0x000bbf1a) mup_progress_pane_g

0x99d0,	// (0x000b6497) bg_popup_window_pane_cp05

0xb47b,	// (0x000b7f42) heading_pane_cp02_ParamLimits

0xb47b,	// (0x000b7f42) heading_pane_cp02

0xb497,	// (0x000b7f5e) list_popup_blid_pane

0xb49f,	// (0x000b7f66) list_blid_sat_info_pane_ParamLimits

0xb49f,	// (0x000b7f66) list_blid_sat_info_pane

0xb4b2,	// (0x000b7f79) list_blid_sat_info_pane_g1

0xb4ba,	// (0x000b7f81) list_blid_sat_info_pane_t1

0x2b31,	// (0x000af5f8) mup_equalizer_pane_ParamLimits

0x2b31,	// (0x000af5f8) mup_equalizer_pane

0x2b52,	// (0x000af619) mup_equalizer_pane_cp1_ParamLimits

0x2b52,	// (0x000af619) mup_equalizer_pane_cp1

0x2b73,	// (0x000af63a) mup_equalizer_pane_cp2_ParamLimits

0x2b73,	// (0x000af63a) mup_equalizer_pane_cp2

0x2b98,	// (0x000af65f) mup_equalizer_pane_cp3_ParamLimits

0x2b98,	// (0x000af65f) mup_equalizer_pane_cp3

0x2bc1,	// (0x000af688) mup_equalizer_pane_cp4_ParamLimits

0x2bc1,	// (0x000af688) mup_equalizer_pane_cp4

0x2bea,	// (0x000af6b1) mup_equalizer_pane_cp5

0x2c02,	// (0x000af6c9) mup_equalizer_pane_cp6

0x2c1a,	// (0x000af6e1) mup_equalizer_pane_cp7

0xc70d,	// (0x000b91d4) bg_popup_call_poc_act_pane_g9

0xc715,	// (0x000b91dc) bg_popup_call_poc_act_pane_g10

0xc71d,	// (0x000b91e4) bg_popup_call_poc_act_pane_g11

0x000a,

0x9c2b,	// (0x000b66f2) mup_scale_pane

0xa8de,	// (0x000b73a5) mup_scale_pane_g1

0xb4c8,	// (0x000b7f8f) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x000bbf36) mup_scale_pane_g

0xb4ec,	// (0x000b7fb3) msg_data_pane

0xb4f4,	// (0x000b7fbb) scroll_pane_cp017

0x2c44,	// (0x000af70b) bg_list_pane_cp04_ParamLimits

0x2c44,	// (0x000af70b) bg_list_pane_cp04

0xb4fc,	// (0x000b7fc3) msg_data_pane_g1

0x2c64,	// (0x000af72b) msg_data_pane_g2

0x2c6e,	// (0x000af735) msg_data_pane_g3

0x2c78,	// (0x000af73f) msg_data_pane_g4

0x2c80,	// (0x000af747) msg_data_pane_g5

0x2c88,	// (0x000af74f) msg_data_pane_g6

0x2c90,	// (0x000af757) msg_data_pane_g7

0x0006,

0xf47e,	// (0x000bbf45) msg_data_pane_g

0x2c98,	// (0x000af75f) msg_text_pane_ParamLimits

0x2c98,	// (0x000af75f) msg_text_pane

0x2cbe,	// (0x000af785) qrid_highlight_pane_cp011_ParamLimits

0x2cbe,	// (0x000af785) qrid_highlight_pane_cp011

0x99d0,	// (0x000b6497) msg_body_pane

0x99d0,	// (0x000b6497) msg_header_pane

0xb504,	// (0x000b7fcb) input_focus_pane_cp07

0x9dcc,	// (0x000b6893) msg_header_pane_t1_ParamLimits

0x9dcc,	// (0x000b6893) msg_header_pane_t1

0x9dde,	// (0x000b68a5) msg_header_pane_t2_ParamLimits

0x9dde,	// (0x000b68a5) msg_header_pane_t2

0x0001,

0xf492,	// (0x000bbf59) msg_header_pane_t_ParamLimits

0xf492,	// (0x000bbf59) msg_header_pane_t

0xb519,	// (0x000b7fe0) msg_body_pane_g1

0x2ced,	// (0x000af7b4) msg_body_pane_t1_ParamLimits

0x2ced,	// (0x000af7b4) msg_body_pane_t1

0x9df0,	// (0x000b68b7) msg_body_pane_t2_ParamLimits

0x9df0,	// (0x000b68b7) msg_body_pane_t2

0x9e02,	// (0x000b68c9) msg_body_pane_t3_ParamLimits

0x9e02,	// (0x000b68c9) msg_body_pane_t3

0x0002,

0xf497,	// (0x000bbf5e) msg_body_pane_t_ParamLimits

0xf497,	// (0x000bbf5e) msg_body_pane_t

0x2d58,	// (0x000af81f) main_viewer_pane_g1_ParamLimits

0x2d58,	// (0x000af81f) main_viewer_pane_g1

0x2d66,	// (0x000af82d) main_viewer_pane_g2_ParamLimits

0x2d66,	// (0x000af82d) main_viewer_pane_g2

0x2d74,	// (0x000af83b) main_viewer_pane_g3_ParamLimits

0x2d74,	// (0x000af83b) main_viewer_pane_g3

0x2d83,	// (0x000af84a) main_viewer_pane_g4_ParamLimits

0x2d83,	// (0x000af84a) main_viewer_pane_g4

0x9e2c,	// (0x000b68f3) main_viewer_pane_g5_ParamLimits

0x9e2c,	// (0x000b68f3) main_viewer_pane_g5

0x9e2c,	// (0x000b68f3) main_viewer_pane_g7_ParamLimits

0x9e2c,	// (0x000b68f3) main_viewer_pane_g7

0x9e3e,	// (0x000b6905) main_viewer_pane_g8_ParamLimits

0x9e3e,	// (0x000b6905) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x000bbf6e) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x000bbf6e) main_viewer_pane_g

0xb521,	// (0x000b7fe8) viewer_content_pane_ParamLimits

0xb521,	// (0x000b7fe8) viewer_content_pane

0x2dc1,	// (0x000af888) main_postcard_pane_g1_ParamLimits

0x2dc1,	// (0x000af888) main_postcard_pane_g1

0x2dd7,	// (0x000af89e) main_postcard_pane_g2_ParamLimits

0x2dd7,	// (0x000af89e) main_postcard_pane_g2

0x2ded,	// (0x000af8b4) main_postcard_pane_g3_ParamLimits

0x2ded,	// (0x000af8b4) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x000bbf7f) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x000bbf7f) main_postcard_pane_g

0x2e04,	// (0x000af8cb) main_postcard_pane_g4

0xc936,	// (0x000b93fd) smil_status_volume_pane_g2

0x2e47,	// (0x000af90e) postcard_pane_ParamLimits

0x2e47,	// (0x000af90e) postcard_pane

0xb52f,	// (0x000b7ff6) postcard_pane_g1_ParamLimits

0xb52f,	// (0x000b7ff6) postcard_pane_g1

0x2e97,	// (0x000af95e) postcard_pane_g2_ParamLimits

0x2e97,	// (0x000af95e) postcard_pane_g2

0x2ea3,	// (0x000af96a) postcard_pane_g3_ParamLimits

0x2ea3,	// (0x000af96a) postcard_pane_g3

0xb53d,	// (0x000b8004) postcard_pane_g4_ParamLimits

0xb53d,	// (0x000b8004) postcard_pane_g4

0x2eaf,	// (0x000af976) postcard_pane_g5_ParamLimits

0x2eaf,	// (0x000af976) postcard_pane_g5

0x2ec4,	// (0x000af98b) postcard_pane_g6_ParamLimits

0x2ec4,	// (0x000af98b) postcard_pane_g6

0xb52f,	// (0x000b7ff6) postcard_pane_g7_ParamLimits

0xb52f,	// (0x000b7ff6) postcard_pane_g7

0x0006,

0xf4c5,	// (0x000bbf8c) postcard_pane_g_ParamLimits

0xf4c5,	// (0x000bbf8c) postcard_pane_g

0x2edc,	// (0x000af9a3) main_mp2_pane_g1_ParamLimits

0x2edc,	// (0x000af9a3) main_mp2_pane_g1

0x2eea,	// (0x000af9b1) main_mp2_pane_g2_ParamLimits

0x2eea,	// (0x000af9b1) main_mp2_pane_g2

0x2ef6,	// (0x000af9bd) main_mp2_pane_g3_ParamLimits

0x2ef6,	// (0x000af9bd) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x000bbf9b) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x000bbf9b) main_mp2_pane_g

0x2f02,	// (0x000af9c9) main_mp2_pane_t1_ParamLimits

0x2f02,	// (0x000af9c9) main_mp2_pane_t1

0x2f19,	// (0x000af9e0) main_mp2_pane_t2_ParamLimits

0x2f19,	// (0x000af9e0) main_mp2_pane_t2

0x2f2b,	// (0x000af9f2) main_mp2_pane_t3_ParamLimits

0x2f2b,	// (0x000af9f2) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x000bbfa2) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x000bbfa2) main_mp2_pane_t

0xb54b,	// (0x000b8012) pec_content_pane_ParamLimits

0xb54b,	// (0x000b8012) pec_content_pane

0xac02,	// (0x000b76c9) scroll_pane_cp015

0xb55d,	// (0x000b8024) pec_attribute_pane_ParamLimits

0xb55d,	// (0x000b8024) pec_attribute_pane

0x2f3d,	// (0x000afa04) pec_content_pane_g1_ParamLimits

0x2f3d,	// (0x000afa04) pec_content_pane_g1

0xb56d,	// (0x000b8034) pec_content_pane_t1_ParamLimits

0xb56d,	// (0x000b8034) pec_content_pane_t1

0xb57f,	// (0x000b8046) pec_content_pane_t2_ParamLimits

0xb57f,	// (0x000b8046) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x000bbfa9) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x000bbfa9) pec_content_pane_t

0x2f49,	// (0x000afa10) list_single_graphic_pane_cp01_ParamLimits

0x2f49,	// (0x000afa10) list_single_graphic_pane_cp01

0x9c2b,	// (0x000b66f2) bg_popup_sub_pane_cp04

0xb591,	// (0x000b8058) popup_mup_playback_window_g1

0xb59d,	// (0x000b8064) popup_mup_playback_window_t1

0xb5b2,	// (0x000b8079) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x000bbfae) popup_mup_playback_window_t

0xb5e9,	// (0x000b80b0) main_image_pane_g1_ParamLimits

0xb5e9,	// (0x000b80b0) main_image_pane_g1

0xb62c,	// (0x000b80f3) scroll_pane_cp018_ParamLimits

0xb62c,	// (0x000b80f3) scroll_pane_cp018

0xb644,	// (0x000b810b) scroll_pane_cp016_ParamLimits

0xb644,	// (0x000b810b) scroll_pane_cp016

0x3018,	// (0x000afadf) smil2_image_pane_ParamLimits

0x3018,	// (0x000afadf) smil2_image_pane

0x304e,	// (0x000afb15) smil2_root_pane_ParamLimits

0x304e,	// (0x000afb15) smil2_root_pane

0x3086,	// (0x000afb4d) smil2_text_pane_ParamLimits

0x3086,	// (0x000afb4d) smil2_text_pane

0x99d0,	// (0x000b6497) bg_list_pane_cp06

0xb680,	// (0x000b8147) grid_radio_pane

0x99d0,	// (0x000b6497) bg_popup_window_pane_cp06

0xb68a,	// (0x000b8151) main_fmradio_pane_t1

0xb13d,	// (0x000b7c04) heading_pane_cp04

0xb698,	// (0x000b815f) main_fmradio_pane_t2

0xc725,	// (0x000b91ec) popup_cale_lunar_info_window_g1

0xb6a6,	// (0x000b816d) main_fmradio_pane_t3

0xc72d,	// (0x000b91f4) popup_cale_lunar_info_window_g2

0xb6b6,	// (0x000b817d) main_fmradio_pane_t4

0x0001,

0xb6c4,	// (0x000b818b) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x000bc089) popup_cale_lunar_info_window_g

0xf4fc,	// (0x000bbfc3) main_fmradio_pane_t

0xb6d2,	// (0x000b8199) wait_bar_pane_cp03

0xb6da,	// (0x000b81a1) cell_fmradio_pane_ParamLimits

0xb6da,	// (0x000b81a1) cell_fmradio_pane

0xb52f,	// (0x000b7ff6) cell_fmradio_pane_g1_ParamLimits

0xb52f,	// (0x000b7ff6) cell_fmradio_pane_g1

0x99d0,	// (0x000b6497) grid_highlight_pane_cp011

0xb6ef,	// (0x000b81b6) poc_content_pane_ParamLimits

0xb6ef,	// (0x000b81b6) poc_content_pane

0xb701,	// (0x000b81c8) scroll_pane_cp019

0x3116,	// (0x000afbdd) popup_call_poc_act_window_ParamLimits

0x3116,	// (0x000afbdd) popup_call_poc_act_window

0x313a,	// (0x000afc01) popup_call_poc_inact_window_ParamLimits

0x313a,	// (0x000afc01) popup_call_poc_inact_window

0xf599,	// (0x000bc060) bg_popup_call_poc_act_pane_g

0xc69d,	// (0x000b9164) bg_popup_call_poc_inact_pane_g1

0xc6a5,	// (0x000b916c) bg_popup_call_poc_inact_pane_g2

0xb709,	// (0x000b81d0) popup_call_poc_act_window_g2

0xc6ad,	// (0x000b9174) bg_popup_call_poc_inact_pane_g3

0xc6b5,	// (0x000b917c) bg_popup_call_poc_inact_pane_g4

0xc6bd,	// (0x000b9184) bg_popup_call_poc_inact_pane_g5

0xb711,	// (0x000b81d8) popup_call_poc_act_window_t1_ParamLimits

0xb711,	// (0x000b81d8) popup_call_poc_act_window_t1

0xb739,	// (0x000b8200) popup_call_poc_act_window_t2_ParamLimits

0xb739,	// (0x000b8200) popup_call_poc_act_window_t2

0xb761,	// (0x000b8228) popup_call_poc_act_window_t3_ParamLimits

0xb761,	// (0x000b8228) popup_call_poc_act_window_t3

0xb789,	// (0x000b8250) popup_call_poc_act_window_t4_ParamLimits

0xb789,	// (0x000b8250) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x000bbfce) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x000bbfce) popup_call_poc_act_window_t

0xc6c5,	// (0x000b918c) bg_popup_call_poc_inact_pane_g6

0xc6cd,	// (0x000b9194) bg_popup_call_poc_inact_pane_g7

0xc6d5,	// (0x000b919c) bg_popup_call_poc_inact_pane_g8

0xb79b,	// (0x000b8262) popup_call_poc_inact_window_g2

0xc6dd,	// (0x000b91a4) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x000bc04d) bg_popup_call_poc_inact_pane_g

0xb7a3,	// (0x000b826a) popup_call_poc_inact_window_t1_ParamLimits

0xb7a3,	// (0x000b826a) popup_call_poc_inact_window_t1

0xb7b8,	// (0x000b827f) popup_call_poc_inact_window_t2_ParamLimits

0xb7b8,	// (0x000b827f) popup_call_poc_inact_window_t2

0xb7cd,	// (0x000b8294) popup_call_poc_inact_window_t3_ParamLimits

0xb7cd,	// (0x000b8294) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x000bbfd7) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x000bbfd7) popup_call_poc_inact_window_t

0xc8a9,	// (0x000b9370) context_pane_ParamLimits

0x39e2,	// (0x000b04a9) signal_pane_ParamLimits

0xb38b,	// (0x000b7e52) main_call2_pane

0xc897,	// (0x000b935e) popup_phob_thumbnail2_window_ParamLimits

0xc897,	// (0x000b935e) popup_phob_thumbnail2_window

0x9e14,	// (0x000b68db) aid_hotspot_pointer_arrow_pane

0x9e1c,	// (0x000b68e3) aid_hotspot_pointer_hand_pane

0x34a2,	// (0x000aff69) phob_pre_status_pane_g5

0x0cca,	// (0x000ad791) cams_zoom_pane_ParamLimits

0x0cd9,	// (0x000ad7a0) image_vga_pane_ParamLimits

0x0cf3,	// (0x000ad7ba) main_camera_pane_g1_ParamLimits

0x0d05,	// (0x000ad7cc) main_camera_pane_g2_ParamLimits

0x0d15,	// (0x000ad7dc) main_camera_pane_g3_ParamLimits

0x0d29,	// (0x000ad7f0) main_camera_pane_g4_ParamLimits

0x0d3d,	// (0x000ad804) main_camera_pane_g5_ParamLimits

0x0d51,	// (0x000ad818) main_camera_pane_g6_ParamLimits

0x0d65,	// (0x000ad82c) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x000bbcd6) main_camera_pane_g_ParamLimits

0x0d79,	// (0x000ad840) main_camera_pane_t1_ParamLimits

0x0d8f,	// (0x000ad856) main_camera_pane_t2_ParamLimits

0xf220,	// (0x000bbce7) main_camera_pane_t_ParamLimits

0x9c2b,	// (0x000b66f2) bg_popup_preview_window_pane_cp01_ParamLimits

0x9c2b,	// (0x000b66f2) bg_popup_preview_window_pane_cp01

0xb7e2,	// (0x000b82a9) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7e2,	// (0x000b82a9) popup_phob_thumbnail2_window_g1

0x99d0,	// (0x000b6497) call2_cli_visual_pane

0x316e,	// (0x000afc35) popup_call2_audio_conf_window_ParamLimits

0x316e,	// (0x000afc35) popup_call2_audio_conf_window

0x3196,	// (0x000afc5d) popup_call2_audio_first_window_ParamLimits

0x3196,	// (0x000afc5d) popup_call2_audio_first_window

0x322c,	// (0x000afcf3) popup_call2_audio_in_window_ParamLimits

0x322c,	// (0x000afcf3) popup_call2_audio_in_window

0x3278,	// (0x000afd3f) popup_call2_audio_out_window_ParamLimits

0x3278,	// (0x000afd3f) popup_call2_audio_out_window

0x32ea,	// (0x000afdb1) popup_call2_audio_second_window_ParamLimits

0x32ea,	// (0x000afdb1) popup_call2_audio_second_window

0x3350,	// (0x000afe17) popup_call2_audio_wait_window_ParamLimits

0x3350,	// (0x000afe17) popup_call2_audio_wait_window

0x99d0,	// (0x000b6497) bg_popup_call2_act_pane_cp03

0x9c0d,	// (0x000b66d4) list_conf_pane_cp

0xb7ee,	// (0x000b82b5) popup_call2_audio_conf_window_t1

0xb7fc,	// (0x000b82c3) list_single_graphic_popup_conf2_pane_ParamLimits

0xb7fc,	// (0x000b82c3) list_single_graphic_popup_conf2_pane

0xb1ac,	// (0x000b7c73) list_highlight_pane_cp04

0xb80f,	// (0x000b82d6) list_single_graphic_popup_conf2_pane_g1

0xb1bd,	// (0x000b7c84) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x000bbfde) list_single_graphic_popup_conf2_pane_g

0xb819,	// (0x000b82e0) list_single_graphic_popup_conf2_pane_t1

0xb827,	// (0x000b82ee) bg_popup_call2_act_pane_cp01_ParamLimits

0xb827,	// (0x000b82ee) bg_popup_call2_act_pane_cp01

0xb8b1,	// (0x000b8378) call_type_pane_cp05_ParamLimits

0xb8b1,	// (0x000b8378) call_type_pane_cp05

0xb905,	// (0x000b83cc) popup_call2_audio_second_window_g1_ParamLimits

0xb905,	// (0x000b83cc) popup_call2_audio_second_window_g1

0xb959,	// (0x000b8420) popup_call2_audio_second_window_g2_ParamLimits

0xb959,	// (0x000b8420) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x000bbfe3) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x000bbfe3) popup_call2_audio_second_window_g

0xb9be,	// (0x000b8485) popup_call2_audio_second_window_t1_ParamLimits

0xb9be,	// (0x000b8485) popup_call2_audio_second_window_t1

0xbb2a,	// (0x000b85f1) popup_call2_audio_second_window_t2_ParamLimits

0xbb2a,	// (0x000b85f1) popup_call2_audio_second_window_t2

0xbb7d,	// (0x000b8644) popup_call2_audio_second_window_t3_ParamLimits

0xbb7d,	// (0x000b8644) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x000bbfea) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x000bbfea) popup_call2_audio_second_window_t

0x99d0,	// (0x000b6497) bg_popup_call2_in_pane_cp02

0x99da,	// (0x000b64a1) call_type_pane_cp04

0x99e2,	// (0x000b64a9) popup_call2_audio_wait_window_g1

0x99ea,	// (0x000b64b1) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x000bbbc3) popup_call2_audio_wait_window_g

0x99f2,	// (0x000b64b9) popup_call2_audio_wait_window_t3

0xbc70,	// (0x000b8737) bg_popup_call2_act_pane_ParamLimits

0xbc70,	// (0x000b8737) bg_popup_call2_act_pane

0xbd30,	// (0x000b87f7) call_type_pane_cp03_ParamLimits

0xbd30,	// (0x000b87f7) call_type_pane_cp03

0xbd94,	// (0x000b885b) popup_call2_audio_first_window_g1_ParamLimits

0xbd94,	// (0x000b885b) popup_call2_audio_first_window_g1

0xbe04,	// (0x000b88cb) popup_call2_audio_first_window_g2_ParamLimits

0xbe04,	// (0x000b88cb) popup_call2_audio_first_window_g2

0xb44a,	// (0x000b7f11) popup_call2_audio_first_window_g3_ParamLimits

0xb44a,	// (0x000b7f11) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x000bbff3) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x000bbff3) popup_call2_audio_first_window_g

0xbee2,	// (0x000b89a9) popup_call2_audio_first_window_t1_ParamLimits

0xbee2,	// (0x000b89a9) popup_call2_audio_first_window_t1

0xbfe5,	// (0x000b8aac) popup_call2_audio_first_window_t4_ParamLimits

0xbfe5,	// (0x000b8aac) popup_call2_audio_first_window_t4

0xc0c8,	// (0x000b8b8f) popup_call2_audio_first_window_t5_ParamLimits

0xc0c8,	// (0x000b8b8f) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x000bbffe) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x000bbffe) popup_call2_audio_first_window_t

0x9c23,	// (0x000b66ea) bg_popup_call2_act_pane_g1

0xc737,	// (0x000b91fe) popup_cale_lunar_info_window_t1

0xc745,	// (0x000b920c) popup_cale_lunar_info_window_t2

0xc753,	// (0x000b921a) popup_cale_lunar_info_window_t3

0x99d0,	// (0x000b6497) bg_popup_call2_bubble_pane

0xc1c9,	// (0x000b8c90) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1c9,	// (0x000b8c90) bg_popup_call2_in_pane_cp01

0x96ac,	// (0x000b6173) call_type_pane_cp02

0xc211,	// (0x000b8cd8) popup_call2_audio_out_window_g1_ParamLimits

0xc211,	// (0x000b8cd8) popup_call2_audio_out_window_g1

0xc23d,	// (0x000b8d04) popup_call2_audio_out_window_g2_ParamLimits

0xc23d,	// (0x000b8d04) popup_call2_audio_out_window_g2

0xc265,	// (0x000b8d2c) popup_call2_audio_out_window_g3_ParamLimits

0xc265,	// (0x000b8d2c) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x000bc007) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x000bc007) popup_call2_audio_out_window_g

0xc2a0,	// (0x000b8d67) popup_call2_audio_out_window_t1_ParamLimits

0xc2a0,	// (0x000b8d67) popup_call2_audio_out_window_t1

0xc2ff,	// (0x000b8dc6) popup_call2_audio_out_window_t2_ParamLimits

0xc2ff,	// (0x000b8dc6) popup_call2_audio_out_window_t2

0xc353,	// (0x000b8e1a) popup_call2_audio_out_window_t3_ParamLimits

0xc353,	// (0x000b8e1a) popup_call2_audio_out_window_t3

0xc369,	// (0x000b8e30) popup_call2_audio_out_window_t4_ParamLimits

0xc369,	// (0x000b8e30) popup_call2_audio_out_window_t4

0xc37f,	// (0x000b8e46) popup_call2_audio_out_window_t5_ParamLimits

0xc37f,	// (0x000b8e46) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x000bc010) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x000bc010) popup_call2_audio_out_window_t

0xc3e3,	// (0x000b8eaa) bg_popup_call2_in_pane_ParamLimits

0xc3e3,	// (0x000b8eaa) bg_popup_call2_in_pane

0xc43f,	// (0x000b8f06) popup_call2_audio_in_window_g1_ParamLimits

0xc43f,	// (0x000b8f06) popup_call2_audio_in_window_g1

0xc477,	// (0x000b8f3e) popup_call2_audio_in_window_g2_ParamLimits

0xc477,	// (0x000b8f3e) popup_call2_audio_in_window_g2

0xc4af,	// (0x000b8f76) popup_call2_audio_in_window_g3_ParamLimits

0xc4af,	// (0x000b8f76) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x000bc01d) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x000bc01d) popup_call2_audio_in_window_g

0xc507,	// (0x000b8fce) popup_call2_audio_in_window_t1_ParamLimits

0xc507,	// (0x000b8fce) popup_call2_audio_in_window_t1

0xc587,	// (0x000b904e) popup_call2_audio_in_window_t2_ParamLimits

0xc587,	// (0x000b904e) popup_call2_audio_in_window_t2

0xc607,	// (0x000b90ce) popup_call2_audio_in_window_t3_ParamLimits

0xc607,	// (0x000b90ce) popup_call2_audio_in_window_t3

0xc621,	// (0x000b90e8) popup_call2_audio_in_window_t4_ParamLimits

0xc621,	// (0x000b90e8) popup_call2_audio_in_window_t4

0xc633,	// (0x000b90fa) popup_call2_audio_in_window_t5_ParamLimits

0xc633,	// (0x000b90fa) popup_call2_audio_in_window_t5

0xc648,	// (0x000b910f) popup_call2_audio_in_window_t6_ParamLimits

0xc648,	// (0x000b910f) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x000bc026) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x000bc026) popup_call2_audio_in_window_t

0x9c23,	// (0x000b66ea) bg_popup_call2_in_pane_g1

0xc761,	// (0x000b9228) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x000bc08e) popup_cale_lunar_info_window_t

0x9c2b,	// (0x000b66f2) bg_popup_call2_rect_pane_ParamLimits

0x9c2b,	// (0x000b66f2) bg_popup_call2_rect_pane

0x99d0,	// (0x000b6497) call2_cli_visual_graphic_pane

0x99d0,	// (0x000b6497) call2_cli_visual_text_pane

0x9e56,	// (0x000b691d) smil_status_volume_pane_g3

0x0002,

0xa8de,	// (0x000b73a5) call2_cli_visual_graphic_pane_g1

0xa8de,	// (0x000b73a5) call2_cli_visual_graphic_pane_g2

0xa8de,	// (0x000b73a5) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x000bc033) call2_cli_visual_graphic_pane_g

0xc65d,	// (0x000b9124) bg_popup_call2_rect_pane_g1

0xa97c,	// (0x000b7443) bg_popup_call2_rect_pane_g2

0xc665,	// (0x000b912c) bg_popup_call2_rect_pane_g3

0xc66d,	// (0x000b9134) bg_popup_call2_rect_pane_g4

0xc675,	// (0x000b913c) bg_popup_call2_rect_pane_g5

0xc67d,	// (0x000b9144) bg_popup_call2_rect_pane_g6

0xc685,	// (0x000b914c) bg_popup_call2_rect_pane_g7

0xc68d,	// (0x000b9154) bg_popup_call2_rect_pane_g8

0xc695,	// (0x000b915c) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x000bc03a) bg_popup_call2_rect_pane_g

0xc69d,	// (0x000b9164) bg_popup_call2_bubble_pane_g1

0xc6a5,	// (0x000b916c) bg_popup_call2_bubble_pane_g2

0xc6ad,	// (0x000b9174) bg_popup_call2_bubble_pane_g3

0xc6b5,	// (0x000b917c) bg_popup_call2_bubble_pane_g4

0xc6bd,	// (0x000b9184) bg_popup_call2_bubble_pane_g5

0xc6c5,	// (0x000b918c) bg_popup_call2_bubble_pane_g6

0xc6cd,	// (0x000b9194) bg_popup_call2_bubble_pane_g7

0xc6d5,	// (0x000b919c) bg_popup_call2_bubble_pane_g8

0xc6dd,	// (0x000b91a4) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x000bc04d) bg_popup_call2_bubble_pane_g

0x0474,	// (0x000acf3b) aid_cale_week_size_cell_pane

0x0da9,	// (0x000ad870) aid_cams_cif_uncrop_pane_ParamLimits

0x0da9,	// (0x000ad870) aid_cams_cif_uncrop_pane

0x0f62,	// (0x000ada29) aid_cams_size_cell_ParamLimits

0x0f62,	// (0x000ada29) aid_cams_size_cell

0x0f76,	// (0x000ada3d) grid_cams_pane_ParamLimits

0x0f90,	// (0x000ada57) linegrid_cams_pane_ParamLimits

0x1183,	// (0x000adc4a) call_video_pane_t1

0x119d,	// (0x000adc64) call_video_pane_t2

0x0001,

0xf273,	// (0x000bbd3a) call_video_pane_t

0x15d1,	// (0x000ae098) aid_cale_month_size_cell_pane_ParamLimits

0x15d1,	// (0x000ae098) aid_cale_month_size_cell_pane

0xf610,	// (0x000bc0d7) smil_status_volume_pane_g

0x9e63,	// (0x000b692a) volume_smil_pane_ParamLimits

0x9570,	// (0x000b6037) aid_popup2_width_pane

0x03c4,	// (0x000ace8b) cell_qdial_pane_g4_ParamLimits

0x03c4,	// (0x000ace8b) cell_qdial_pane_g4

0x2617,	// (0x000af0de) aid_blid_cardinal_pane_ParamLimits

0x2623,	// (0x000af0ea) aid_blid_destination_pane_ParamLimits

0x2623,	// (0x000af0ea) aid_blid_destination_pane

0x9c2b,	// (0x000b66f2) bg_popup_call_poc_act_pane_ParamLimits

0x9c2b,	// (0x000b66f2) bg_popup_call_poc_act_pane

0x9c2b,	// (0x000b66f2) bg_popup_call_poc_inact_pane_ParamLimits

0x9c2b,	// (0x000b66f2) bg_popup_call_poc_inact_pane

0xc6e5,	// (0x000b91ac) bg_popup_call_poc_act_pane_g1

0xc6ed,	// (0x000b91b4) bg_popup_call_poc_act_pane_g2

0xc6f5,	// (0x000b91bc) bg_popup_call_poc_act_pane_g3

0xc6b5,	// (0x000b917c) bg_popup_call_poc_act_pane_g4

0xc6bd,	// (0x000b9184) bg_popup_call_poc_act_pane_g5

0xc6fd,	// (0x000b91c4) bg_popup_call_poc_act_pane_g6

0xc6cd,	// (0x000b9194) bg_popup_call_poc_act_pane_g7

0xc705,	// (0x000b91cc) bg_popup_call_poc_act_pane_g8

0x99d0,	// (0x000b6497) main_usb_pane

0xc86e,	// (0x000b9335) popup_cale_lunar_info_window

0x1466,	// (0x000adf2d) im_reading_pane_t1_ParamLimits

0xab5a,	// (0x000b7621) list_im_pane_ParamLimits

0xab6b,	// (0x000b7632) scroll_pane_cp07_ParamLimits

0x99d0,	// (0x000b6497) grid_highlight_pane_cp012

0x9c2b,	// (0x000b66f2) mup_scale_pane_ParamLimits

0xb52f,	// (0x000b7ff6) main_usb_pane_g1_ParamLimits

0xb52f,	// (0x000b7ff6) main_usb_pane_g1

0x33ae,	// (0x000afe75) main_usb_pane_g2_ParamLimits

0x33ae,	// (0x000afe75) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x000bc077) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x000bc077) main_usb_pane_g

0x33c4,	// (0x000afe8b) main_usb_pane_t1_ParamLimits

0x33c4,	// (0x000afe8b) main_usb_pane_t1

0x33d6,	// (0x000afe9d) main_usb_pane_t2_ParamLimits

0x33d6,	// (0x000afe9d) main_usb_pane_t2

0x33e8,	// (0x000afeaf) main_usb_pane_t3_ParamLimits

0x33e8,	// (0x000afeaf) main_usb_pane_t3

0x33fa,	// (0x000afec1) main_usb_pane_t4_ParamLimits

0x33fa,	// (0x000afec1) main_usb_pane_t4

0x340f,	// (0x000afed6) main_usb_pane_t5_ParamLimits

0x340f,	// (0x000afed6) main_usb_pane_t5

0x3424,	// (0x000afeeb) main_usb_pane_t6_ParamLimits

0x3424,	// (0x000afeeb) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x000bc07c) main_usb_pane_t_ParamLimits

0x25b8,	// (0x000af07f) aid_text_placing

0x25c3,	// (0x000af08a) main_location2_pane_t1_ParamLimits

0x25d7,	// (0x000af09e) main_location2_pane_t2_ParamLimits

0x25ed,	// (0x000af0b4) main_location2_pane_t3_ParamLimits

0x2603,	// (0x000af0ca) main_location2_pane_t4_ParamLimits

0x2603,	// (0x000af0ca) main_location2_pane_t4

0xf3d4,	// (0x000bbe9b) main_location2_pane_t_ParamLimits

0xa800,	// (0x000b72c7) find_pinb_pane_g2_ParamLimits

0xa800,	// (0x000b72c7) find_pinb_pane_g2

0x0001,

0xf122,	// (0x000bbbe9) find_pinb_pane_g_ParamLimits

0xf122,	// (0x000bbbe9) find_pinb_pane_g

0xa80c,	// (0x000b72d3) find_pinb_pane_t1_ParamLimits

0xa81e,	// (0x000b72e5) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x000bbbee) find_pinb_pane_t_ParamLimits

0x99d0,	// (0x000b6497) main_call3_pane

0x1ba0,	// (0x000ae667) cale_month_day_heading_pane_t1_ParamLimits

0x1c26,	// (0x000ae6ed) cale_month_day_heading_pane_t2_ParamLimits

0x1cb7,	// (0x000ae77e) cale_month_day_heading_pane_t3_ParamLimits

0x1d48,	// (0x000ae80f) cale_month_day_heading_pane_t4_ParamLimits

0x1dd9,	// (0x000ae8a0) cale_month_day_heading_pane_t5_ParamLimits

0x1e7a,	// (0x000ae941) cale_month_day_heading_pane_t6_ParamLimits

0x1f1f,	// (0x000ae9e6) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x000bbd72) cale_month_day_heading_pane_t_ParamLimits

0x21fb,	// (0x000aecc2) smil_status_volume_pane

0x2e6b,	// (0x000af932) postcard_address_pane_ParamLimits

0x2e6b,	// (0x000af932) postcard_address_pane

0x2e81,	// (0x000af948) postcard_message_pane_ParamLimits

0x2e81,	// (0x000af948) postcard_message_pane

0x338a,	// (0x000afe51) call2_cli_visual_pane_t1_ParamLimits

0x338a,	// (0x000afe51) call2_cli_visual_pane_t1

0x3c17,	// (0x000b06de) postcard_message_pane_t1_ParamLimits

0x3c17,	// (0x000b06de) postcard_message_pane_t1

0x3c00,	// (0x000b06c7) postcard_address_pane_t1_ParamLimits

0x3c00,	// (0x000b06c7) postcard_address_pane_t1

0x3bec,	// (0x000b06b3) popup_call3_audio_in_window_ParamLimits

0x3bec,	// (0x000b06b3) popup_call3_audio_in_window

0x3a71,	// (0x000b0538) bg_popup_call3_in_pane_ParamLimits

0x3a71,	// (0x000b0538) bg_popup_call3_in_pane

0x3aed,	// (0x000b05b4) popup_call3_audio_in_window_g1_ParamLimits

0x3aed,	// (0x000b05b4) popup_call3_audio_in_window_g1

0x3b0d,	// (0x000b05d4) popup_call3_audio_in_window_g2_ParamLimits

0x3b0d,	// (0x000b05d4) popup_call3_audio_in_window_g2

0x3b2d,	// (0x000b05f4) popup_call3_audio_in_window_g3_ParamLimits

0x3b2d,	// (0x000b05f4) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x000bc0de) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x000bc0de) popup_call3_audio_in_window_g

0x3b5e,	// (0x000b0625) popup_call3_audio_in_window_t1_ParamLimits

0x3b5e,	// (0x000b0625) popup_call3_audio_in_window_t1

0x3b9c,	// (0x000b0663) popup_call3_audio_in_window_t2_ParamLimits

0x3b9c,	// (0x000b0663) popup_call3_audio_in_window_t2

0x3bda,	// (0x000b06a1) popup_call3_audio_in_window_t3_ParamLimits

0x3bda,	// (0x000b06a1) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x000bc0e7) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x000bc0e7) popup_call3_audio_in_window_t

0xb38b,	// (0x000b7e52) bg_popup_call3_rect_pane

0xc65d,	// (0x000b9124) bg_popup_call3_rect_pane_g1

0xa97c,	// (0x000b7443) bg_popup_call3_rect_pane_g2

0xc665,	// (0x000b912c) bg_popup_call3_rect_pane_g3

0xc66d,	// (0x000b9134) bg_popup_call3_rect_pane_g4

0xc675,	// (0x000b913c) bg_popup_call3_rect_pane_g5

0xc67d,	// (0x000b9144) bg_popup_call3_rect_pane_g6

0xc685,	// (0x000b914c) bg_popup_call3_rect_pane_g7

0x2a1d,	// (0x000af4e4) mup_visualizer_osc_pane

0xb458,	// (0x000b7f1f) mup_visualizer_spec_pane

0x3aa1,	// (0x000b0568) call3_video_qcif_pane_ParamLimits

0x3aa1,	// (0x000b0568) call3_video_qcif_pane

0x3ab4,	// (0x000b057b) call3_video_qcif_uncrop_pane_ParamLimits

0x3ab4,	// (0x000b057b) call3_video_qcif_uncrop_pane

0x3ac4,	// (0x000b058b) call3_video_subqcif_pane_ParamLimits

0x3ac4,	// (0x000b058b) call3_video_subqcif_pane

0x3ada,	// (0x000b05a1) call3_video_subqcif_uncrop_pane_ParamLimits

0x3ada,	// (0x000b05a1) call3_video_subqcif_uncrop_pane

0x3b4d,	// (0x000b0614) popup_call3_audio_in_window_g4_ParamLimits

0x3b4d,	// (0x000b0614) popup_call3_audio_in_window_g4

0x3a60,	// (0x000b0527) mup_spec_half_pane

0x3a69,	// (0x000b0530) mup_spec_half_pane_cp

0xc909,	// (0x000b93d0) mup_osc_middle_pane

0xc912,	// (0x000b93d9) mup_visualizer_osc_pane_g1

0x3a40,	// (0x000b0507) mup_spec_bar_pane_ParamLimits

0x3a40,	// (0x000b0507) mup_spec_bar_pane

0xc8f6,	// (0x000b93bd) mup_spec_bar_pane_g1

0xc900,	// (0x000b93c7) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x000bc0d2) mup_spec_bar_pane_g

0x0474,	// (0x000acf3b) aid_cale_week_size_cell_pane_ParamLimits

0x048e,	// (0x000acf55) bg_cale_heading_pane_ParamLimits

0xa9b0,	// (0x000b7477) bg_cale_pane_cp01_ParamLimits

0x04b7,	// (0x000acf7e) cale_week_corner_pane_ParamLimits

0x04d6,	// (0x000acf9d) cale_week_day_heading_pane_ParamLimits

0x0504,	// (0x000acfcb) cale_week_scroll_pane_g1_ParamLimits

0x0528,	// (0x000acfef) cale_week_scroll_pane_g2_ParamLimits

0x0540,	// (0x000ad007) cale_week_scroll_pane_g3_ParamLimits

0x0558,	// (0x000ad01f) cale_week_scroll_pane_g4_ParamLimits

0x0574,	// (0x000ad03b) cale_week_scroll_pane_g5_ParamLimits

0x0594,	// (0x000ad05b) cale_week_scroll_pane_g6_ParamLimits

0x05b4,	// (0x000ad07b) cale_week_scroll_pane_g7_ParamLimits

0x05d8,	// (0x000ad09f) cale_week_scroll_pane_g8_ParamLimits

0x05fc,	// (0x000ad0c3) cale_week_scroll_pane_g9_ParamLimits

0x0619,	// (0x000ad0e0) cale_week_scroll_pane_g10_ParamLimits

0x0636,	// (0x000ad0fd) cale_week_scroll_pane_g11_ParamLimits

0x0653,	// (0x000ad11a) cale_week_scroll_pane_g12_ParamLimits

0x0670,	// (0x000ad137) cale_week_scroll_pane_g13_ParamLimits

0x068d,	// (0x000ad154) cale_week_scroll_pane_g14_ParamLimits

0x06b6,	// (0x000ad17d) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x000bbc7a) cale_week_scroll_pane_g_ParamLimits

0x06df,	// (0x000ad1a6) cale_week_time_pane_ParamLimits

0x0703,	// (0x000ad1ca) grid_cale_week_pane_ParamLimits

0xa9ce,	// (0x000b7495) listscroll_cale_week_pane_t1

0xa9e0,	// (0x000b74a7) scroll_pane_cp08_ParamLimits

0x163e,	// (0x000ae105) cale_month_corner_pane_ParamLimits

0xad8b,	// (0x000b7852) cale_month_pane_t1

0x1b26,	// (0x000ae5ed) cale_month_week_pane_ParamLimits

0x23e6,	// (0x000aeead) popup_call_status_window_g1_ParamLimits

0x23fa,	// (0x000aeec1) popup_call_status_window_g2_ParamLimits

0x240e,	// (0x000aeed5) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x000bbe22) popup_call_status_window_g_ParamLimits

0xb12d,	// (0x000b7bf4) aid_call2_pane

0x2cdf,	// (0x000af7a6) msg_header_pane_g1

0x2e6b,	// (0x000af932) postcard_address2_pane_ParamLimits

0x2e6b,	// (0x000af932) postcard_address2_pane

0x2e81,	// (0x000af948) postcard_message2_pane_ParamLimits

0x2e81,	// (0x000af948) postcard_message2_pane

0x39f0,	// (0x000b04b7) message2_row_pane_ParamLimits

0x39f0,	// (0x000b04b7) message2_row_pane

0x3a0d,	// (0x000b04d4) address2_row_pane_ParamLimits

0x3a0d,	// (0x000b04d4) address2_row_pane

0xc8c4,	// (0x000b938b) postcard_message2_row_pane_g1

0xc8cc,	// (0x000b9393) postcard_message2_row_pane_t1

0xc8c4,	// (0x000b938b) address2_row_pane_g1

0xc8cc,	// (0x000b9393) address2_row_pane_t1

0x0c2f,	// (0x000ad6f6) aid_size_cell_vorec

0x99d0,	// (0x000b6497) main_rss_pane

0x3a20,	// (0x000b04e7) rss_list_single_pane_ParamLimits

0x3a20,	// (0x000b04e7) rss_list_single_pane

0xc8da,	// (0x000b93a1) rss_list_single_pane_t1

0xc8e8,	// (0x000b93af) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x000bc0cd) rss_list_single_pane_t

0x99d0,	// (0x000b6497) main_camera2_pane

0x99d0,	// (0x000b6497) main_video2_pane

0x3c86,	// (0x000b074d) cams_zoom_pane_cp2_ParamLimits

0x3c86,	// (0x000b074d) cams_zoom_pane_cp2

0x3c9d,	// (0x000b0764) image2_vga_pane_ParamLimits

0x3c9d,	// (0x000b0764) image2_vga_pane

0x3ce5,	// (0x000b07ac) main_camera2_pane_g1_ParamLimits

0x3ce5,	// (0x000b07ac) main_camera2_pane_g1

0x3d05,	// (0x000b07cc) main_camera2_pane_g2_ParamLimits

0x3d05,	// (0x000b07cc) main_camera2_pane_g2

0x3d1c,	// (0x000b07e3) main_camera2_pane_g3_ParamLimits

0x3d1c,	// (0x000b07e3) main_camera2_pane_g3

0x3d33,	// (0x000b07fa) main_camera2_pane_g4_ParamLimits

0x3d33,	// (0x000b07fa) main_camera2_pane_g4

0x3d4a,	// (0x000b0811) main_camera2_pane_g5_ParamLimits

0x3d4a,	// (0x000b0811) main_camera2_pane_g5

0x3d61,	// (0x000b0828) main_camera2_pane_g6_ParamLimits

0x3d61,	// (0x000b0828) main_camera2_pane_g6

0x3d78,	// (0x000b083f) main_camera2_pane_g7_ParamLimits

0x3d78,	// (0x000b083f) main_camera2_pane_g7

0x3d8f,	// (0x000b0856) main_camera2_pane_g8_ParamLimits

0x3d8f,	// (0x000b0856) main_camera2_pane_g8

0x0008,

0xf627,	// (0x000bc0ee) main_camera2_pane_g_ParamLimits

0xf627,	// (0x000bc0ee) main_camera2_pane_g

0x3dbd,	// (0x000b0884) main_camera2_pane_t1_ParamLimits

0x3dbd,	// (0x000b0884) main_camera2_pane_t1

0x3df2,	// (0x000b08b9) main_camera2_pane_t2_ParamLimits

0x3df2,	// (0x000b08b9) main_camera2_pane_t2

0x3e0f,	// (0x000b08d6) main_camera2_pane_t3_ParamLimits

0x3e0f,	// (0x000b08d6) main_camera2_pane_t3

0x3e6d,	// (0x000b0934) main_camera2_pane_t4_ParamLimits

0x3e6d,	// (0x000b0934) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x000bc101) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x000bc101) main_camera2_pane_t

0x3ef6,	// (0x000b09bd) cams_zoom_pane_cp4_ParamLimits

0x3ef6,	// (0x000b09bd) cams_zoom_pane_cp4

0x3f0c,	// (0x000b09d3) image2_cif_pane_ParamLimits

0x3f0c,	// (0x000b09d3) image2_cif_pane

0x3f37,	// (0x000b09fe) image2_subqcif_pane_ParamLimits

0x3f37,	// (0x000b09fe) image2_subqcif_pane

0x3f52,	// (0x000b0a19) main_video2_pane_g1_ParamLimits

0x3f52,	// (0x000b0a19) main_video2_pane_g1

0x3f6c,	// (0x000b0a33) main_video2_pane_g2_ParamLimits

0x3f6c,	// (0x000b0a33) main_video2_pane_g2

0x3f82,	// (0x000b0a49) main_video2_pane_g3_ParamLimits

0x3f82,	// (0x000b0a49) main_video2_pane_g3

0x3f98,	// (0x000b0a5f) main_video2_pane_g4_ParamLimits

0x3f98,	// (0x000b0a5f) main_video2_pane_g4

0x3fae,	// (0x000b0a75) main_video2_pane_g5_ParamLimits

0x3fae,	// (0x000b0a75) main_video2_pane_g5

0x3fc4,	// (0x000b0a8b) main_video2_pane_g6_ParamLimits

0x3fc4,	// (0x000b0a8b) main_video2_pane_g6

0x0005,

0xf649,	// (0x000bc110) main_video2_pane_g_ParamLimits

0xf649,	// (0x000bc110) main_video2_pane_g

0x3fde,	// (0x000b0aa5) main_video2_pane_t1_ParamLimits

0x3fde,	// (0x000b0aa5) main_video2_pane_t1

0x4002,	// (0x000b0ac9) main_video2_pane_t2_ParamLimits

0x4002,	// (0x000b0ac9) main_video2_pane_t2

0x4052,	// (0x000b0b19) main_video2_pane_t3_ParamLimits

0x4052,	// (0x000b0b19) main_video2_pane_t3

0x0002,

0xf656,	// (0x000bc11d) main_video2_pane_t_ParamLimits

0xf656,	// (0x000bc11d) main_video2_pane_t

0x34e2,	// (0x000affa9) call_muted_g2

0x0001,

0xf5f8,	// (0x000bc0bf) call_muted_g

0x99d0,	// (0x000b6497) main_mup2_pane

0x409a,	// (0x000b0b61) main_mup2_pane_g1_ParamLimits

0x409a,	// (0x000b0b61) main_mup2_pane_g1

0x40a6,	// (0x000b0b6d) main_mup2_pane_g2_ParamLimits

0x40a6,	// (0x000b0b6d) main_mup2_pane_g2

0x9ece,	// (0x000b6995) main_mup_pane_g13_cp1

0x9ed6,	// (0x000b699d) mup_volume_pane_cp1

0x40c4,	// (0x000b0b8b) main_mup2_pane_g4_ParamLimits

0x40c4,	// (0x000b0b8b) main_mup2_pane_g4

0x40d6,	// (0x000b0b9d) main_mup2_pane_g5_ParamLimits

0x40d6,	// (0x000b0b9d) main_mup2_pane_g5

0x40e8,	// (0x000b0baf) main_mup2_pane_g6_ParamLimits

0x40e8,	// (0x000b0baf) main_mup2_pane_g6

0x40fa,	// (0x000b0bc1) main_mup2_pane_g7_ParamLimits

0x40fa,	// (0x000b0bc1) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x000bc124) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x000bc124) main_mup2_pane_g

0x4112,	// (0x000b0bd9) main_mup2_pane_t1_ParamLimits

0x4112,	// (0x000b0bd9) main_mup2_pane_t1

0x4128,	// (0x000b0bef) main_mup2_pane_t2_ParamLimits

0x4128,	// (0x000b0bef) main_mup2_pane_t2

0x413e,	// (0x000b0c05) main_mup2_pane_t3_ParamLimits

0x413e,	// (0x000b0c05) main_mup2_pane_t3

0x4154,	// (0x000b0c1b) main_mup2_pane_t4_ParamLimits

0x4154,	// (0x000b0c1b) main_mup2_pane_t4

0x416c,	// (0x000b0c33) main_mup2_pane_t5_ParamLimits

0x416c,	// (0x000b0c33) main_mup2_pane_t5

0x4184,	// (0x000b0c4b) main_mup2_pane_t6_ParamLimits

0x4184,	// (0x000b0c4b) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x000bc133) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x000bc133) main_mup2_pane_t

0x41b4,	// (0x000b0c7b) mup2_visualizer_pane_ParamLimits

0x41b4,	// (0x000b0c7b) mup2_visualizer_pane

0x41e2,	// (0x000b0ca9) mup_progress_pane_cp_ParamLimits

0x41e2,	// (0x000b0ca9) mup_progress_pane_cp

0x9eb9,	// (0x000b6980) mup_volume_pane_cp_ParamLimits

0x9eb9,	// (0x000b6980) mup_volume_pane_cp

0x41f8,	// (0x000b0cbf) mup2_visualizer_pane_g1_ParamLimits

0x41f8,	// (0x000b0cbf) mup2_visualizer_pane_g1

0xc949,	// (0x000b9410) mup2_visualizer_pane_g2_ParamLimits

0xc949,	// (0x000b9410) mup2_visualizer_pane_g2

0x420f,	// (0x000b0cd6) mup2_visualizer_pane_g3_ParamLimits

0x420f,	// (0x000b0cd6) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x000bc140) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x000bc140) mup2_visualizer_pane_g

0xb678,	// (0x000b813f) aid_size_cell_fmradio

0x3692,	// (0x000b0159) aid_height_parent_landcape

0xabe9,	// (0x000b76b0) wml_content_pane_cp

0xabf1,	// (0x000b76b8) wml_tabs_pane

0xabfa,	// (0x000b76c1) popup_wml_miniature_window

0xac02,	// (0x000b76c9) scroll_pane_cp021

0xac16,	// (0x000b76dd) wml_content_pane_comp8

0x99d0,	// (0x000b6497) bg_popup_sub_pane_cp05

0xc967,	// (0x000b942e) popup_wml_miniature_window_g1

0xc96f,	// (0x000b9436) wml_miniature_view_pane

0x421b,	// (0x000b0ce2) aid_size_wml_view

0x4223,	// (0x000b0cea) wml_miniature_view_pane_g1

0x422c,	// (0x000b0cf3) wml_miniature_view_pane_g2

0x4235,	// (0x000b0cfc) wml_miniature_view_pane_g3

0x423d,	// (0x000b0d04) wml_miniature_view_pane_g4

0x4245,	// (0x000b0d0c) wml_miniature_view_pane_g5

0x424d,	// (0x000b0d14) wml_miniature_view_pane_g6

0x4255,	// (0x000b0d1c) wml_miniature_view_pane_g7

0x425d,	// (0x000b0d24) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x000bc147) wml_miniature_view_pane_g

0xc977,	// (0x000b943e) background_graphic_ParamLimits

0xc977,	// (0x000b943e) background_graphic

0xc983,	// (0x000b944a) wml_tabs_2_pane

0xc98c,	// (0x000b9453) wml_tabs_3_pane_ParamLimits

0xc98c,	// (0x000b9453) wml_tabs_3_pane

0xc99e,	// (0x000b9465) wml_tabs_4_pane_ParamLimits

0xc99e,	// (0x000b9465) wml_tabs_4_pane

0xc9b4,	// (0x000b947b) wml_tabs_5_pane_ParamLimits

0xc9b4,	// (0x000b947b) wml_tabs_5_pane

0xc9ce,	// (0x000b9495) wml_tabs_pane_g2_ParamLimits

0xc9ce,	// (0x000b9495) wml_tabs_pane_g2

0xc9e2,	// (0x000b94a9) wml_tabs_pane_g3_ParamLimits

0xc9e2,	// (0x000b94a9) wml_tabs_pane_g3

0x4265,	// (0x000b0d2c) wml_tabs_2_active_pane_ParamLimits

0x4265,	// (0x000b0d2c) wml_tabs_2_active_pane

0x4279,	// (0x000b0d40) wml_tabs_2_passive_pane_ParamLimits

0x4279,	// (0x000b0d40) wml_tabs_2_passive_pane

0x428d,	// (0x000b0d54) wml_tabs_3_active_pane_cp_ParamLimits

0x428d,	// (0x000b0d54) wml_tabs_3_active_pane_cp

0x42a2,	// (0x000b0d69) wml_tabs_3_passive_pane_ParamLimits

0x42a2,	// (0x000b0d69) wml_tabs_3_passive_pane

0x42b5,	// (0x000b0d7c) wml_tabs_3_passive_pane_cp_ParamLimits

0x42b5,	// (0x000b0d7c) wml_tabs_3_passive_pane_cp

0x42cc,	// (0x000b0d93) tabs_4_active_pane

0x42d4,	// (0x000b0d9b) tabs_4_passive_pane

0x42de,	// (0x000b0da5) tabs_4_passive_pane_cp

0x42e6,	// (0x000b0dad) tabs_4_passive_pane_cp2

0x33a6,	// (0x000afe6d) aid_height_text

0x29ef,	// (0x000af4b6) mup_volume_cont_pane_ParamLimits

0x29ef,	// (0x000af4b6) mup_volume_cont_pane

0x0051,	// (0x000acb18) aid_size_cell_pinb

0x005b,	// (0x000acb22) aid_size_list_pinb

0x41ce,	// (0x000b0c95) mup2_volume_cont_pane_ParamLimits

0x41ce,	// (0x000b0c95) mup2_volume_cont_pane

0x9ea5,	// (0x000b696c) mup2_volume_cont_pane_g1_ParamLimits

0x9ea5,	// (0x000b696c) mup2_volume_cont_pane_g1

0xfcf9,	// (0x000ac7c0) aid_size_cell_touch_ParamLimits

0xfcf9,	// (0x000ac7c0) aid_size_cell_touch

0xff41,	// (0x000aca08) touch_pane_ParamLimits

0xff41,	// (0x000aca08) touch_pane

0x955e,	// (0x000b6025) main_rss2_pane

0xc9ff,	// (0x000b94c6) listscroll_rss2_pane

0xca08,	// (0x000b94cf) rss2_navigation_pane

0xca10,	// (0x000b94d7) list_rss2_pane

0xb251,	// (0x000b7d18) scroll_pane_cp22

0xca18,	// (0x000b94df) rss2_navigation_pane_g1

0xca21,	// (0x000b94e8) rss2_navigation_pane_g2

0xca29,	// (0x000b94f0) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x000bc158) rss2_navigation_pane_g

0xca31,	// (0x000b94f8) rss2_navigation_pane_t1

0x42f0,	// (0x000b0db7) rss2_list_single_pane_ParamLimits

0x42f0,	// (0x000b0db7) rss2_list_single_pane

0xca3f,	// (0x000b9506) rss2_list_single_pane_t2

0xca4d,	// (0x000b9514) rss2_list_single_pane_t3_ParamLimits

0xca4d,	// (0x000b9514) rss2_list_single_pane_t3

0xca6a,	// (0x000b9531) rss2_list_single_pane_t4

0x21e3,	// (0x000aecaa) smil_status_pane_g1

0x95af,	// (0x000b6076) main_image2_pane_ParamLimits

0x95af,	// (0x000b6076) main_image2_pane

0x3da6,	// (0x000b086d) main_camera2_pane_g9_ParamLimits

0x3da6,	// (0x000b086d) main_camera2_pane_g9

0x3ec2,	// (0x000b0989) main_camera2_pane_t5_ParamLimits

0x3ec2,	// (0x000b0989) main_camera2_pane_t5

0x9e7a,	// (0x000b6941) main_camera2_pane_t6_ParamLimits

0x9e7a,	// (0x000b6941) main_camera2_pane_t6

0x4306,	// (0x000b0dcd) main_image2_pane_g1_ParamLimits

0x4306,	// (0x000b0dcd) main_image2_pane_g1

0x30c0,	// (0x000afb87) smil2_video_pane_ParamLimits

0x30c0,	// (0x000afb87) smil2_video_pane

0xfd39,	// (0x000ac800) aid_zoom_text_primary_cp

0x95a5,	// (0x000b606c) popup_preview_fixed_window

0xab52,	// (0x000b7619) im_reading_pane_g1

0x3c78,	// (0x000b073f) cams2_bc_adjust_pane_cp_ParamLimits

0x3c78,	// (0x000b073f) cams2_bc_adjust_pane_cp

0x3ee8,	// (0x000b09af) cams2_bc_adjust_pane_ParamLimits

0x3ee8,	// (0x000b09af) cams2_bc_adjust_pane

0xca78,	// (0x000b953f) cams2_bc_adjust_pane_g1

0x9ede,	// (0x000b69a5) cams2_slider_pane

0x9ee7,	// (0x000b69ae) cams2_slider_pane_g1

0x9ef0,	// (0x000b69b7) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x000bc15f) cams2_slider_pane_g

0x014b,	// (0x000acc12) calc_display_pane_ParamLimits

0x0173,	// (0x000acc3a) calc_paper_pane_ParamLimits

0x0196,	// (0x000acc5d) grid_calc_pane_ParamLimits

0x9d95,	// (0x000b685c) popup_clock_digital_window_t1_ParamLimits

0xb615,	// (0x000b80dc) main_image_pane_t1

0x012d,	// (0x000acbf4) aid_size_cell_calc_ParamLimits

0x012d,	// (0x000acbf4) aid_size_cell_calc

0x36d8,	// (0x000b019f) popup_blid_sat_info2_window_ParamLimits

0x36d8,	// (0x000b019f) popup_blid_sat_info2_window

0xca88,	// (0x000b954f) aid_size_cell_blid

0xca90,	// (0x000b9557) bg_popup_window_pane_cp07

0xcab3,	// (0x000b957a) grid_popup_blid_pane

0xcabd,	// (0x000b9584) heading_pane_cp05_ParamLimits

0xcabd,	// (0x000b9584) heading_pane_cp05

0xcb87,	// (0x000b964e) cell_popup_blid_pane_ParamLimits

0xcb87,	// (0x000b964e) cell_popup_blid_pane

0xcbb1,	// (0x000b9678) cell_popup_blid_pane_g1

0xcbb9,	// (0x000b9680) cell_popup_blid_pane_t1

0x419e,	// (0x000b0c65) mup2_indicator_pane_ParamLimits

0x419e,	// (0x000b0c65) mup2_indicator_pane

0xb38b,	// (0x000b7e52) mup2_visualizer_osc_pane

0xc955,	// (0x000b941c) mup2_visualizer_spec_pane_ParamLimits

0xc955,	// (0x000b941c) mup2_visualizer_spec_pane

0x431c,	// (0x000b0de3) mup2_spec_half_pane

0x4325,	// (0x000b0dec) mup2_spec_half_pane_cp

0x432d,	// (0x000b0df4) mup2_spec_bar_pane_ParamLimits

0x432d,	// (0x000b0df4) mup2_spec_bar_pane

0xc8f6,	// (0x000b93bd) mup2_spec_bar_pane_g1

0xc900,	// (0x000b93c7) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x000bc0d2) mup2_spec_bar_pane_g

0x434d,	// (0x000b0e14) mup2_osc_middle_pane

0xc912,	// (0x000b93d9) mup2_visualizer_osc_pane_g1

0x95dd,	// (0x000b60a4) popup_number_entry_window_t1_ParamLimits

0x95f0,	// (0x000b60b7) popup_number_entry_window_t2_ParamLimits

0x9602,	// (0x000b60c9) popup_number_entry_window_t3_ParamLimits

0xff93,	// (0x000aca5a) popup_number_entry_window_t5_ParamLimits

0xff93,	// (0x000aca5a) popup_number_entry_window_t5

0xf0cd,	// (0x000bbb94) popup_number_entry_window_t_ParamLimits

0x9614,	// (0x000b60db) text_title_cp2_ParamLimits

0x9e24,	// (0x000b68eb) aid_hotspot_pointer_text2_pane

0x9e4a,	// (0x000b6911) main_viewer_pane_g9_ParamLimits

0x9e4a,	// (0x000b6911) main_viewer_pane_g9

0xad8b,	// (0x000b7852) cale_month_pane_t1_ParamLimits

0xadb1,	// (0x000b7878) bg_cale_pane_ParamLimits

0xadc9,	// (0x000b7890) list_cale_pane_ParamLimits

0xadda,	// (0x000b78a1) listscroll_cale_day_pane_t1

0xadec,	// (0x000b78b3) scroll_pane_cp09_ParamLimits

0x2a25,	// (0x000af4ec) main_mup_eq_pane_t1_ParamLimits

0x2a25,	// (0x000af4ec) main_mup_eq_pane_t1

0x2a41,	// (0x000af508) main_mup_eq_pane_t2_ParamLimits

0x2a41,	// (0x000af508) main_mup_eq_pane_t2

0x2a5d,	// (0x000af524) main_mup_eq_pane_t3_ParamLimits

0x2a5d,	// (0x000af524) main_mup_eq_pane_t3

0x2a7b,	// (0x000af542) main_mup_eq_pane_t4_ParamLimits

0x2a7b,	// (0x000af542) main_mup_eq_pane_t4

0x2a99,	// (0x000af560) main_mup_eq_pane_t5_ParamLimits

0x2a99,	// (0x000af560) main_mup_eq_pane_t5

0x2ab7,	// (0x000af57e) main_mup_eq_pane_t6_ParamLimits

0x2ab7,	// (0x000af57e) main_mup_eq_pane_t6

0x2acd,	// (0x000af594) main_mup_eq_pane_t7_ParamLimits

0x2acd,	// (0x000af594) main_mup_eq_pane_t7

0x2ae3,	// (0x000af5aa) main_mup_eq_pane_t8_ParamLimits

0x2ae3,	// (0x000af5aa) main_mup_eq_pane_t8

0x2af9,	// (0x000af5c0) main_mup_eq_pane_t9_ParamLimits

0x2af9,	// (0x000af5c0) main_mup_eq_pane_t9

0x2b15,	// (0x000af5dc) main_mup_eq_pane_t10_ParamLimits

0x2b15,	// (0x000af5dc) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x000bbf21) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x000bbf21) main_mup_eq_pane_t

0x2bea,	// (0x000af6b1) mup_equalizer_pane_cp5_ParamLimits

0x2c02,	// (0x000af6c9) mup_equalizer_pane_cp6_ParamLimits

0x2c1a,	// (0x000af6e1) mup_equalizer_pane_cp7_ParamLimits

0x955e,	// (0x000b6025) main_gallery_pane

0xc91b,	// (0x000b93e2) smil2_volume_pane

0xc923,	// (0x000b93ea) smil_status_volume_pane_g1_ParamLimits

0xc936,	// (0x000b93fd) smil_status_volume_pane_g2_ParamLimits

0x9e56,	// (0x000b691d) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x000bc0d7) smil_status_volume_pane_g_ParamLimits

0xca90,	// (0x000b9557) bg_popup_window_pane_cp07_ParamLimits

0xca9e,	// (0x000b9565) blid_firmament_pane

0x4356,	// (0x000b0e1d) aid_size_cell_gallery_ParamLimits

0x4356,	// (0x000b0e1d) aid_size_cell_gallery

0x436c,	// (0x000b0e33) grid_gallery_pane_ParamLimits

0x436c,	// (0x000b0e33) grid_gallery_pane

0x4387,	// (0x000b0e4e) cell_gallery_pane_ParamLimits

0x4387,	// (0x000b0e4e) cell_gallery_pane

0xcbc7,	// (0x000b968e) bg_cell_gallery_focus_pane_ParamLimits

0xcbc7,	// (0x000b968e) bg_cell_gallery_focus_pane

0xcbd9,	// (0x000b96a0) cell_gallery_pane_g1_ParamLimits

0xcbd9,	// (0x000b96a0) cell_gallery_pane_g1

0x43d2,	// (0x000b0e99) cell_gallery_pane_g2_ParamLimits

0x43d2,	// (0x000b0e99) cell_gallery_pane_g2

0x43df,	// (0x000b0ea6) cell_gallery_pane_g3_ParamLimits

0x43df,	// (0x000b0ea6) cell_gallery_pane_g3

0xcbe5,	// (0x000b96ac) cell_gallery_pane_g4_ParamLimits

0xcbe5,	// (0x000b96ac) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x000bc185) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x000bc185) cell_gallery_pane_g

0xcbf1,	// (0x000b96b8) bg_cell_gallery_focus_pane_g1

0xcbf9,	// (0x000b96c0) bg_cell_gallery_focus_pane_g2

0xcc01,	// (0x000b96c8) bg_cell_gallery_focus_pane_g3

0xcc09,	// (0x000b96d0) bg_cell_gallery_focus_pane_g4

0xcc11,	// (0x000b96d8) bg_cell_gallery_focus_pane_g5

0xcc19,	// (0x000b96e0) bg_cell_gallery_focus_pane_g6

0xcc21,	// (0x000b96e8) bg_cell_gallery_focus_pane_g7

0xcc29,	// (0x000b96f0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x000bc18e) bg_cell_gallery_focus_pane_g

0xcc31,	// (0x000b96f8) aid_firma_cardinal

0xcc45,	// (0x000b970c) blid_firmament_pane_t1

0xcc5c,	// (0x000b9723) blid_firmament_pane_t2

0xcc73,	// (0x000b973a) blid_firmament_pane_t3

0xcc8a,	// (0x000b9751) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x000bc19f) blid_firmament_pane_t

0xcca1,	// (0x000b9768) blid_sat_info_pane

0xccb1,	// (0x000b9778) blid_sat_info_pane_g1

0xccb1,	// (0x000b9778) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x000bc1a8) blid_sat_info_pane_g

0xccbb,	// (0x000b9782) blid_sat_info_pane_t1

0xccc9,	// (0x000b9790) smil2_volume_content_pane

0xccd2,	// (0x000b9799) smil2_volume_pane_g1

0xccda,	// (0x000b97a1) smil2_volume_content_pane_g1

0xcce3,	// (0x000b97aa) smil2_volume_content_pane_g2

0xccec,	// (0x000b97b3) smil2_volume_content_pane_g3

0xccf5,	// (0x000b97bc) smil2_volume_content_pane_g4

0xccfe,	// (0x000b97c5) smil2_volume_content_pane_g5

0xcd07,	// (0x000b97ce) smil2_volume_content_pane_g6

0xcd10,	// (0x000b97d7) smil2_volume_content_pane_g7

0xcd19,	// (0x000b97e0) smil2_volume_content_pane_g8

0xcd22,	// (0x000b97e9) smil2_volume_content_pane_g9

0xcd2b,	// (0x000b97f2) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x000bc1ad) smil2_volume_content_pane_g

0x07ca,	// (0x000ad291) cale_week_day_heading_pane_t1_ParamLimits

0x0814,	// (0x000ad2db) cale_week_day_heading_pane_t2_ParamLimits

0x0863,	// (0x000ad32a) cale_week_day_heading_pane_t3_ParamLimits

0x08b2,	// (0x000ad379) cale_week_day_heading_pane_t4_ParamLimits

0x0901,	// (0x000ad3c8) cale_week_day_heading_pane_t5_ParamLimits

0x0954,	// (0x000ad41b) cale_week_day_heading_pane_t6_ParamLimits

0x09ab,	// (0x000ad472) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x000bbc99) cale_week_day_heading_pane_t_ParamLimits

0xaa02,	// (0x000b74c9) bg_cale_side_pane_ParamLimits

0x09f5,	// (0x000ad4bc) cale_week_time_pane_t1_ParamLimits

0x0a2f,	// (0x000ad4f6) cale_week_time_pane_t2_ParamLimits

0x0a69,	// (0x000ad530) cale_week_time_pane_t3_ParamLimits

0x0aa3,	// (0x000ad56a) cale_week_time_pane_t4_ParamLimits

0x0add,	// (0x000ad5a4) cale_week_time_pane_t5_ParamLimits

0x0b17,	// (0x000ad5de) cale_week_time_pane_t6_ParamLimits

0x0b51,	// (0x000ad618) cale_week_time_pane_t7_ParamLimits

0x0b8b,	// (0x000ad652) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x000bbca8) cale_week_time_pane_t_ParamLimits

0x0bcb,	// (0x000ad692) cell_cale_week_pane_g2_ParamLimits

0xaa02,	// (0x000b74c9) bg_cale_side_pane_cp01_ParamLimits

0x1fc8,	// (0x000aea8f) cale_month_week_pane_t1_ParamLimits

0x1fe1,	// (0x000aeaa8) cale_month_week_pane_t2_ParamLimits

0x1ffa,	// (0x000aeac1) cale_month_week_pane_t3_ParamLimits

0x2013,	// (0x000aeada) cale_month_week_pane_t4_ParamLimits

0x202c,	// (0x000aeaf3) cale_month_week_pane_t5_ParamLimits

0x2045,	// (0x000aeb0c) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x000bbd81) cale_month_week_pane_t_ParamLimits

0x9d15,	// (0x000b67dc) cell_cale_month_pane_g1_ParamLimits

0x955e,	// (0x000b6025) main_cale_event_viewer_pane

0x955e,	// (0x000b6025) listscroll_cale_event_viewer_pane

0xcd34,	// (0x000b97fb) list_cale_ev_pane

0xcd3c,	// (0x000b9803) scroll_pane_cp023

0x43ec,	// (0x000b0eb3) field_cale_ev_pane_ParamLimits

0x43ec,	// (0x000b0eb3) field_cale_ev_pane

0xcd48,	// (0x000b980f) field_cale_ev_content_pane_ParamLimits

0xcd48,	// (0x000b980f) field_cale_ev_content_pane

0xcd54,	// (0x000b981b) field_cale_ev_pane_g1_ParamLimits

0xcd54,	// (0x000b981b) field_cale_ev_pane_g1

0xcd60,	// (0x000b9827) field_cale_ev_pane_g2_ParamLimits

0xcd60,	// (0x000b9827) field_cale_ev_pane_g2

0xcd78,	// (0x000b983f) field_cale_ev_pane_g3_ParamLimits

0xcd78,	// (0x000b983f) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x000bc1c2) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x000bc1c2) field_cale_ev_pane_g

0xcd90,	// (0x000b9857) field_cale_ev_pane_t1_ParamLimits

0xcd90,	// (0x000b9857) field_cale_ev_pane_t1

0x4410,	// (0x000b0ed7) field_cale_ev_content_pane_t1_ParamLimits

0x4410,	// (0x000b0ed7) field_cale_ev_content_pane_t1

0x2cd4,	// (0x000af79b) bg_button_pane_cp01

0x0458,	// (0x000acf1f) listscroll_cale_week_pane_ParamLimits

0x046a,	// (0x000acf31) popup_toolbar_window_cp01

0xa9ce,	// (0x000b7495) listscroll_cale_week_pane_t1_ParamLimits

0x0458,	// (0x000acf1f) listscroll_cale_day_pane_ParamLimits

0x046a,	// (0x000acf31) popup_toolbar_window_cp02

0xadda,	// (0x000b78a1) listscroll_cale_day_pane_t1_ParamLimits

0x0458,	// (0x000acf1f) main_cale_month_pane_ParamLimits

0x3958,	// (0x000b041f) popup_toolbar_window_cp03_ParamLimits

0x3958,	// (0x000b041f) popup_toolbar_window_cp03

0x2f7e,	// (0x000afa45) main_image_pane_g2_ParamLimits

0x2f7e,	// (0x000afa45) main_image_pane_g2

0x2f8f,	// (0x000afa56) main_image_pane_g3_ParamLimits

0x2f8f,	// (0x000afa56) main_image_pane_g3

0x0002,

0xf4ec,	// (0x000bbfb3) main_image_pane_g_ParamLimits

0xf4ec,	// (0x000bbfb3) main_image_pane_g

0xb615,	// (0x000b80dc) main_image_pane_t1_ParamLimits

0x2fa0,	// (0x000afa67) main_image_pane_t2_ParamLimits

0x2fa0,	// (0x000afa67) main_image_pane_t2

0x2fb2,	// (0x000afa79) main_image_pane_t3_ParamLimits

0x2fb2,	// (0x000afa79) main_image_pane_t3

0x2fda,	// (0x000afaa1) main_image_pane_t4_ParamLimits

0x2fda,	// (0x000afaa1) main_image_pane_t4

0x0003,

0xf4f3,	// (0x000bbfba) main_image_pane_t_ParamLimits

0xf4f3,	// (0x000bbfba) main_image_pane_t

0x2ffa,	// (0x000afac1) popup_image_details_window_cp01

0x3004,	// (0x000afacb) popup_toobar_trans_pane_cp01_ParamLimits

0x3004,	// (0x000afacb) popup_toobar_trans_pane_cp01

0x37cb,	// (0x000b0292) popup_image_details_window_ParamLimits

0x37cb,	// (0x000b0292) popup_image_details_window

0xc87a,	// (0x000b9341) popup_image_focus_window

0x3c32,	// (0x000b06f9) camera2_autofocus_pane_ParamLimits

0x3c32,	// (0x000b06f9) camera2_autofocus_pane

0x955e,	// (0x000b6025) bg_popup_sub_pane_cp06

0xcda7,	// (0x000b986e) popup_image_focus_window_g1

0xcdaf,	// (0x000b9876) popup_image_focus_window_g2

0xcdb7,	// (0x000b987e) popup_image_focus_window_g3

0xcdbf,	// (0x000b9886) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x000bc1c9) popup_image_focus_window_g

0xcdc7,	// (0x000b988e) popup_image_focus_window_t1

0xcdd5,	// (0x000b989c) popup_image_focus_window_t2

0xcde5,	// (0x000b98ac) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x000bc1d2) popup_image_focus_window_t

0xcdf3,	// (0x000b98ba) camera2_autofocus_pane_g1

0x95af,	// (0x000b6076) bg_tb_trans_pane_cp01

0xce01,	// (0x000b98c8) popup_image_details_window_g1

0xce14,	// (0x000b98db) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x000bc1e4) popup_image_details_window_g

0xce3d,	// (0x000b9904) popup_image_details_window_t1

0xce4f,	// (0x000b9916) popup_image_details_window_t2

0xce68,	// (0x000b992f) popup_image_details_window_t3

0xce7c,	// (0x000b9943) popup_image_details_window_t4

0xce97,	// (0x000b995e) popup_image_details_window_t5

0x0004,

0xf724,	// (0x000bc1eb) popup_image_details_window_t

0xa875,	// (0x000b733c) bg_calc_paper_pane_ParamLimits

0x9c63,	// (0x000b672a) grid_highlight_pane_cp013

0x9c6d,	// (0x000b6734) list_calc_pane_ParamLimits

0x9c7f,	// (0x000b6746) scroll_pane_cp024

0xa889,	// (0x000b7350) bg_calc_display_pane_ParamLimits

0x0296,	// (0x000acd5d) calc_display_pane_t1_ParamLimits

0x02a8,	// (0x000acd6f) calc_display_pane_t2_ParamLimits

0x9c87,	// (0x000b674e) calc_display_pane_t3_ParamLimits

0xf154,	// (0x000bbc1b) calc_display_pane_t_ParamLimits

0x0371,	// (0x000ace38) cell_calc_pane_g2

0x0001,

0xf171,	// (0x000bbc38) cell_calc_pane_g

0x037a,	// (0x000ace41) cell_calc_pane_t1

0xa8e8,	// (0x000b73af) grid_highlight_pane_cp02_ParamLimits

0xa8fe,	// (0x000b73c5) toolbar_button_pane_cp01_ParamLimits

0xa8fe,	// (0x000b73c5) toolbar_button_pane_cp01

0xb65a,	// (0x000b8121) temp_image_control_pane_ParamLimits

0xb65a,	// (0x000b8121) temp_image_control_pane

0x95af,	// (0x000b6076) main_mp3_pane

0xceb1,	// (0x000b9978) temp_image_control_pane_g1_ParamLimits

0xceb1,	// (0x000b9978) temp_image_control_pane_g1

0xcebf,	// (0x000b9986) temp_image_control_pane_g2_ParamLimits

0xcebf,	// (0x000b9986) temp_image_control_pane_g2

0xced1,	// (0x000b9998) temp_image_control_pane_g3_ParamLimits

0xced1,	// (0x000b9998) temp_image_control_pane_g3

0x4461,	// (0x000b0f28) temp_image_control_pane_g4_ParamLimits

0x4461,	// (0x000b0f28) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x000bc1f6) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x000bc1f6) temp_image_control_pane_g

0xceb1,	// (0x000b9978) main_mp3_pane_g1

0x4474,	// (0x000b0f3b) main_mp3_pane_g2

0x0007,

0xf738,	// (0x000bc1ff) main_mp3_pane_g

0xcf14,	// (0x000b99db) main_mp3_pane_t1

0xaa5d,	// (0x000b7524) main_camera_pane_g8_ParamLimits

0xaa5d,	// (0x000b7524) main_camera_pane_g8

0x0f08,	// (0x000ad9cf) main_video_pane_g7_ParamLimits

0x0f08,	// (0x000ad9cf) main_video_pane_g7

0x9e93,	// (0x000b695a) main_camera2_pane_t7_ParamLimits

0x9e93,	// (0x000b695a) main_camera2_pane_t7

0xaba9,	// (0x000b7670) scroll_pane_cp025_ParamLimits

0xaba9,	// (0x000b7670) scroll_pane_cp025

0xabbd,	// (0x000b7684) scroll_pane_cp026_ParamLimits

0xabbd,	// (0x000b7684) scroll_pane_cp026

0xabcc,	// (0x000b7693) wml_content_pane_ParamLimits

0x955e,	// (0x000b6025) main_touch_calib_pane

0x4546,	// (0x000b100d) main_touch_calib_pane_g1

0x4558,	// (0x000b101f) main_touch_calib_pane_g2

0x456a,	// (0x000b1031) main_touch_calib_pane_g3

0x457c,	// (0x000b1043) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x000bc21d) main_touch_calib_pane_g

0x458e,	// (0x000b1055) main_touch_calib_pane_t1

0x45a8,	// (0x000b106f) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x000bc226) main_touch_calib_pane_t

0xb2cc,	// (0x000b7d93) mup_progress_pane_cp02

0xb2eb,	// (0x000b7db2) navi_pane_g1

0xb34d,	// (0x000b7e14) navi_pane_mp_t3

0x95af,	// (0x000b6076) main_mp3_pane_ParamLimits

0x399a,	// (0x000b0461) navi_pane_ParamLimits

0xceb1,	// (0x000b9978) main_mp3_pane_g1_ParamLimits

0x4474,	// (0x000b0f3b) main_mp3_pane_g2_ParamLimits

0x4480,	// (0x000b0f47) main_mp3_pane_g3_ParamLimits

0x4480,	// (0x000b0f47) main_mp3_pane_g3

0x448e,	// (0x000b0f55) main_mp3_pane_g4_ParamLimits

0x448e,	// (0x000b0f55) main_mp3_pane_g4

0xcee1,	// (0x000b99a8) main_mp3_pane_g5_ParamLimits

0xcee1,	// (0x000b99a8) main_mp3_pane_g5

0xceef,	// (0x000b99b6) main_mp3_pane_g6_ParamLimits

0xceef,	// (0x000b99b6) main_mp3_pane_g6

0xcefc,	// (0x000b99c3) main_mp3_pane_g7_ParamLimits

0xcefc,	// (0x000b99c3) main_mp3_pane_g7

0xcf08,	// (0x000b99cf) main_mp3_pane_g8_ParamLimits

0xcf08,	// (0x000b99cf) main_mp3_pane_g8

0xf738,	// (0x000bc1ff) main_mp3_pane_g_ParamLimits

0x449a,	// (0x000b0f61) main_mp3_pane_t2

0x44a8,	// (0x000b0f6f) main_mp3_pane_t3

0xcf22,	// (0x000b99e9) main_mp3_pane_t4

0xcf30,	// (0x000b99f7) main_mp3_pane_t5

0x0005,

0xf749,	// (0x000bc210) main_mp3_pane_t

0xcf3e,	// (0x000b9a05) mup_progress_pane_cp01

0xf0c5,	// (0x000bbb8c) aid_zoom_text_secondary2

0xcd34,	// (0x000b97fb) list_cale_ev2_pane

0xcd3c,	// (0x000b9803) scroll_pane_cp023_ParamLimits

0x4602,	// (0x000b10c9) field_cale_ev2_pane_ParamLimits

0x4602,	// (0x000b10c9) field_cale_ev2_pane

0x4626,	// (0x000b10ed) field_cale_ev2_pane_g1_ParamLimits

0x4626,	// (0x000b10ed) field_cale_ev2_pane_g1

0x4632,	// (0x000b10f9) field_cale_ev2_pane_g2_ParamLimits

0x4632,	// (0x000b10f9) field_cale_ev2_pane_g2

0x464a,	// (0x000b1111) field_cale_ev2_pane_g3_ParamLimits

0x464a,	// (0x000b1111) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x000bc231) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x000bc231) field_cale_ev2_pane_g

0x4662,	// (0x000b1129) field_cale_ev2_pane_t1_ParamLimits

0x4662,	// (0x000b1129) field_cale_ev2_pane_t1

0x4679,	// (0x000b1140) field_cale_ev2_pane_t2_ParamLimits

0x4679,	// (0x000b1140) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x000bc23a) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x000bc23a) field_cale_ev2_pane_t

0x2e1b,	// (0x000af8e2) main_postcard_pane_g5_ParamLimits

0x2e1b,	// (0x000af8e2) main_postcard_pane_g5

0x2e31,	// (0x000af8f8) main_postcard_pane_g6_ParamLimits

0x2e31,	// (0x000af8f8) main_postcard_pane_g6

0x0cb4,	// (0x000ad77b) camera2_autofocus_pane_cp_ParamLimits

0x0cb4,	// (0x000ad77b) camera2_autofocus_pane_cp

0x95af,	// (0x000b6076) main_mup3_pane

0x46ae,	// (0x000b1175) main_mup3_pane_g1_ParamLimits

0x46ae,	// (0x000b1175) main_mup3_pane_g1

0x46d0,	// (0x000b1197) main_mup3_pane_g2_ParamLimits

0x46d0,	// (0x000b1197) main_mup3_pane_g2

0x4753,	// (0x000b121a) main_mup3_pane_g3_ParamLimits

0x4753,	// (0x000b121a) main_mup3_pane_g3

0x479b,	// (0x000b1262) main_mup3_pane_g4_ParamLimits

0x479b,	// (0x000b1262) main_mup3_pane_g4

0x47e1,	// (0x000b12a8) main_mup3_pane_g5_ParamLimits

0x47e1,	// (0x000b12a8) main_mup3_pane_g5

0x4829,	// (0x000b12f0) main_mup3_pane_g6_ParamLimits

0x4829,	// (0x000b12f0) main_mup3_pane_g6

0xcf46,	// (0x000b9a0d) main_mup3_pane_g7_ParamLimits

0xcf46,	// (0x000b9a0d) main_mup3_pane_g7

0x0007,

0xf783,	// (0x000bc24a) main_mup3_pane_g_ParamLimits

0xf783,	// (0x000bc24a) main_mup3_pane_g

0x48a9,	// (0x000b1370) main_mup3_pane_t1_ParamLimits

0x48a9,	// (0x000b1370) main_mup3_pane_t1

0x4917,	// (0x000b13de) main_mup3_pane_t2_ParamLimits

0x4917,	// (0x000b13de) main_mup3_pane_t2

0x49ed,	// (0x000b14b4) main_mup3_pane_t4_ParamLimits

0x49ed,	// (0x000b14b4) main_mup3_pane_t4

0x4a4b,	// (0x000b1512) main_mup3_pane_t5_ParamLimits

0x4a4b,	// (0x000b1512) main_mup3_pane_t5

0x4b05,	// (0x000b15cc) main_mup3_pane_t6_ParamLimits

0x4b05,	// (0x000b15cc) main_mup3_pane_t6

0x0005,

0xf794,	// (0x000bc25b) main_mup3_pane_t_ParamLimits

0xf794,	// (0x000bc25b) main_mup3_pane_t

0x4bbd,	// (0x000b1684) mup3_progress_pane_ParamLimits

0x4bbd,	// (0x000b1684) mup3_progress_pane

0x4c4f,	// (0x000b1716) popup_mup3_control_window_ParamLimits

0x4c4f,	// (0x000b1716) popup_mup3_control_window

0xcf54,	// (0x000b9a1b) popup_mup3_text_window

0x4c85,	// (0x000b174c) mup3_progress_pane_t1

0x4ca3,	// (0x000b176a) mup3_progress_pane_t2

0xcf5c,	// (0x000b9a23) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x000bc268) mup3_progress_pane_t

0xcf79,	// (0x000b9a40) mup_progress_pane_cp03

0x955e,	// (0x000b6025) bg_tb_trans_pane_cp04

0x4cc1,	// (0x000b1788) mup3_volume_pane

0x4cc9,	// (0x000b1790) popup_mup3_control_window_g1

0x4cd2,	// (0x000b1799) mup3_volume_pane_g1

0x4cdb,	// (0x000b17a2) mup3_volume_pane_g2

0x4ce4,	// (0x000b17ab) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x000bc26f) mup3_volume_pane_g

0x955e,	// (0x000b6025) bg_tb_trans_pane_cp03

0xcf89,	// (0x000b9a50) popup_mup3_text_window_g1

0xcf91,	// (0x000b9a58) popup_mup3_text_window_t1

0xa8d1,	// (0x000b7398) list_calc_item_pane_g1_ParamLimits

0xc9f6,	// (0x000b94bd) mup_volume_pane_cp_g1

0x45c2,	// (0x000b1089) main_touch_calib_pane_t3

0x45d6,	// (0x000b109d) main_touch_calib_pane_t4

0x45ec,	// (0x000b10b3) main_touch_calib_pane_t5

0x9568,	// (0x000b602f) aid_cell_size_toolbar2

0x9570,	// (0x000b6037) aid_popup3_width_pane

0xfd29,	// (0x000ac7f0) aid_zoom_text_msg_primary

0x0c89,	// (0x000ad750) vorec_t7

0xa895,	// (0x000b735c) bg_calc_paper_pane_g1_ParamLimits

0xa8a1,	// (0x000b7368) bg_calc_paper_pane_g2_ParamLimits

0xa8ad,	// (0x000b7374) bg_calc_paper_pane_g3_ParamLimits

0xa8b9,	// (0x000b7380) bg_calc_paper_pane_g4_ParamLimits

0xa8c5,	// (0x000b738c) bg_calc_paper_pane_g5_ParamLimits

0x02f7,	// (0x000acdbe) bg_calc_paper_pane_g6_ParamLimits

0x030a,	// (0x000acdd1) bg_calc_paper_pane_g7_ParamLimits

0x031d,	// (0x000acde4) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x000bbc22) bg_calc_paper_pane_g_ParamLimits

0x032e,	// (0x000acdf5) calc_bg_paper_pane_g9_ParamLimits

0x0e16,	// (0x000ad8dd) image_qvga_pane_ParamLimits

0x0e16,	// (0x000ad8dd) image_qvga_pane

0x9c2b,	// (0x000b66f2) bg_popup_sub_pane_cp04_ParamLimits

0xb591,	// (0x000b8058) popup_mup_playback_window_g1_ParamLimits

0xb59d,	// (0x000b8064) popup_mup_playback_window_t1_ParamLimits

0xb5b2,	// (0x000b8079) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x000bbfae) popup_mup_playback_window_t_ParamLimits

0x40b6,	// (0x000b0b7d) main_mup2_pane_g3_ParamLimits

0x40b6,	// (0x000b0b7d) main_mup2_pane_g3

0x121c,	// (0x000adce3) popup_toolbar_window_cp04

0xb9ad,	// (0x000b8474) popup_call2_audio_second_window_g3_ParamLimits

0xb9ad,	// (0x000b8474) popup_call2_audio_second_window_g3

0xbe68,	// (0x000b892f) popup_call2_audio_first_window_g4_ParamLimits

0xbe68,	// (0x000b892f) popup_call2_audio_first_window_g4

0xc4e7,	// (0x000b8fae) popup_call2_audio_in_window_g4_ParamLimits

0xc4e7,	// (0x000b8fae) popup_call2_audio_in_window_g4

0x2f60,	// (0x000afa27) aid_area_sk_bg_cut_ParamLimits

0x2f60,	// (0x000afa27) aid_area_sk_bg_cut

0xb5c7,	// (0x000b808e) aid_area_sk_bg_cut_2_ParamLimits

0xb5c7,	// (0x000b808e) aid_area_sk_bg_cut_2

0x43c2,	// (0x000b0e89) aid_placing_details_win

0x43ca,	// (0x000b0e91) aid_placing_details_win_2

0xcdf3,	// (0x000b98ba) camera2_autofocus_pane_g1_ParamLimits

0xfeda,	// (0x000ac9a1) popup_fixed_preview_cale_window_ParamLimits

0xfeda,	// (0x000ac9a1) popup_fixed_preview_cale_window

0xb39c,	// (0x000b7e63) navi_slider_pane_g3

0xb3a5,	// (0x000b7e6c) navi_slider_pane_g4

0xb3ae,	// (0x000b7e75) navi_slider_pane_g5

0xb39c,	// (0x000b7e63) navi_slider_pane_g6

0x9dbb,	// (0x000b6882) navi_slider_pane_g7

0xb4d1,	// (0x000b7f98) mup_scale_pane_g3

0xb4da,	// (0x000b7fa1) mup_scale_pane_g4

0xb4e3,	// (0x000b7faa) mup_scale_pane_g5

0x2c32,	// (0x000af6f9) mup_scale_pane_g6

0x2c3b,	// (0x000af702) mup_scale_pane_g7

0xb39c,	// (0x000b7e63) cams2_slider_pane_g3

0xca80,	// (0x000b9547) cams2_slider_pane_g4

0x9ef9,	// (0x000b69c0) cams2_slider_pane_g5

0xb39c,	// (0x000b7e63) cams2_slider_pane_g6

0x9f01,	// (0x000b69c8) cams2_slider_pane_g7

0xccb1,	// (0x000b9778) camera2_autofocus_pane_cp_g1

0xc84c,	// (0x000b9313) bg_popup_preview_window_pane_cp02_ParamLimits

0xc84c,	// (0x000b9313) bg_popup_preview_window_pane_cp02

0xcf9f,	// (0x000b9a66) list_fp_cale_pane_ParamLimits

0xcf9f,	// (0x000b9a66) list_fp_cale_pane

0xcfab,	// (0x000b9a72) popup_fixed_preview_cale_window_t1_ParamLimits

0xcfab,	// (0x000b9a72) popup_fixed_preview_cale_window_t1

0x4ced,	// (0x000b17b4) popup_fixed_preview_cale_window_t2_ParamLimits

0x4ced,	// (0x000b17b4) popup_fixed_preview_cale_window_t2

0x4d02,	// (0x000b17c9) popup_fixed_preview_cale_window_t3_ParamLimits

0x4d02,	// (0x000b17c9) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x000bc276) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x000bc276) popup_fixed_preview_cale_window_t

0x4d17,	// (0x000b17de) list_single_fp_cale_pane_ParamLimits

0x4d17,	// (0x000b17de) list_single_fp_cale_pane

0xcfc9,	// (0x000b9a90) list_single_fp_cale_pane_g1_ParamLimits

0xcfc9,	// (0x000b9a90) list_single_fp_cale_pane_g1

0xcfd5,	// (0x000b9a9c) list_single_fp_cale_pane_g2_ParamLimits

0xcfd5,	// (0x000b9a9c) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x000bc27d) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x000bc27d) list_single_fp_cale_pane_g

0xcfee,	// (0x000b9ab5) list_single_fp_cale_pane_t1_ParamLimits

0xcfee,	// (0x000b9ab5) list_single_fp_cale_pane_t1

0xd000,	// (0x000b9ac7) list_single_fp_cale_pane_t2_ParamLimits

0xd000,	// (0x000b9ac7) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x000bc284) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x000bc284) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x955e,	// (0x000b6025) main_dialer_pane

0x4d2c,	// (0x000b17f3) aid_cell_size_keypad

0x4d36,	// (0x000b17fd) dialer_ne_pane

0x4d40,	// (0x000b1807) grid_dialer_command_1_pane

0x4d48,	// (0x000b180f) grid_dialer_command_2_pane

0x4d50,	// (0x000b1817) grid_dialer_keypad_pane

0x4d62,	// (0x000b1829) bg_popup_call_pane_cp06_ParamLimits

0x4d62,	// (0x000b1829) bg_popup_call_pane_cp06

0x4d6e,	// (0x000b1835) dialer_ne_clear_pane_ParamLimits

0x4d6e,	// (0x000b1835) dialer_ne_clear_pane

0xd033,	// (0x000b9afa) dialer_ne_pane_g1

0xd03b,	// (0x000b9b02) dialer_ne_pane_t1_ParamLimits

0xd03b,	// (0x000b9b02) dialer_ne_pane_t1

0x4d7a,	// (0x000b1841) dialer_ne_pane_t2_ParamLimits

0x4d7a,	// (0x000b1841) dialer_ne_pane_t2

0x4da4,	// (0x000b186b) dialer_ne_pane_t3_ParamLimits

0x4da4,	// (0x000b186b) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x000bc289) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x000bc289) dialer_ne_pane_t

0x4dd4,	// (0x000b189b) dialer_ne_pane_t3_copy1_ParamLimits

0x4dd4,	// (0x000b189b) dialer_ne_pane_t3_copy1

0x4e03,	// (0x000b18ca) cell_dialer_keypad_pane_ParamLimits

0x4e03,	// (0x000b18ca) cell_dialer_keypad_pane

0x4e1a,	// (0x000b18e1) cell_dialer_command_1_pane_ParamLimits

0x4e1a,	// (0x000b18e1) cell_dialer_command_1_pane

0x4e30,	// (0x000b18f7) cell_dialer_command_2_pane_ParamLimits

0x4e30,	// (0x000b18f7) cell_dialer_command_2_pane

0xd04d,	// (0x000b9b14) bg_button_pane_cp02_ParamLimits

0xd04d,	// (0x000b9b14) bg_button_pane_cp02

0x4e3f,	// (0x000b1906) cell_dialer_keypad_pane_g1_ParamLimits

0x4e3f,	// (0x000b1906) cell_dialer_keypad_pane_g1

0xd04d,	// (0x000b9b14) bg_button_pane_cp03_ParamLimits

0xd04d,	// (0x000b9b14) bg_button_pane_cp03

0x4e54,	// (0x000b191b) cell_dialer_command_1_pane_g1_ParamLimits

0x4e54,	// (0x000b191b) cell_dialer_command_1_pane_g1

0xd059,	// (0x000b9b20) bg_button_pane_cp04

0x4e68,	// (0x000b192f) cell_dialer_command_2_pane_g1

0xb38b,	// (0x000b7e52) bg_button_pane_cp06

0xd061,	// (0x000b9b28) dialer_ne_clear_pane_g1

0x2704,	// (0x000af1cb) navi_pane_g2

0x2732,	// (0x000af1f9) navi_pane_g3

0x0002,

0xf3ea,	// (0x000bbeb1) navi_pane_g

0x275d,	// (0x000af224) navi_pane_mv_g2

0x2784,	// (0x000af24b) navi_pane_mv_g5

0x278c,	// (0x000af253) navi_pane_mv_t1

0xa889,	// (0x000b7350) main_clock2_pane

0x4eb3,	// (0x000b197a) main_clock2_list_pane_ParamLimits

0x4eb3,	// (0x000b197a) main_clock2_list_pane

0x4eeb,	// (0x000b19b2) main_clock2_pane_t1_ParamLimits

0x4eeb,	// (0x000b19b2) main_clock2_pane_t1

0x4f27,	// (0x000b19ee) main_clock2_pane_t2_ParamLimits

0x4f27,	// (0x000b19ee) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x000bc290) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x000bc290) main_clock2_pane_t

0x4fc7,	// (0x000b1a8e) popup_clock_analogue_window_cp03_ParamLimits

0x4fc7,	// (0x000b1a8e) popup_clock_analogue_window_cp03

0x4fee,	// (0x000b1ab5) popup_clock_digital_window_cp02_ParamLimits

0x4fee,	// (0x000b1ab5) popup_clock_digital_window_cp02

0x5067,	// (0x000b1b2e) main_clock2_list_single_pane_ParamLimits

0x5067,	// (0x000b1b2e) main_clock2_list_single_pane

0xb38b,	// (0x000b7e52) list_highlight_pane_cp05

0xd07d,	// (0x000b9b44) main_clock2_list_single_pane_t1

0x121c,	// (0x000adce3) popup_toolbar_window_cp04_ParamLimits

0x4431,	// (0x000b0ef8) camera2_autofocus_pane_g2_ParamLimits

0x4431,	// (0x000b0ef8) camera2_autofocus_pane_g2

0x443d,	// (0x000b0f04) camera2_autofocus_pane_g3_ParamLimits

0x443d,	// (0x000b0f04) camera2_autofocus_pane_g3

0x4449,	// (0x000b0f10) camera2_autofocus_pane_g4_ParamLimits

0x4449,	// (0x000b0f10) camera2_autofocus_pane_g4

0x4455,	// (0x000b0f1c) camera2_autofocus_pane_g5_ParamLimits

0x4455,	// (0x000b0f1c) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x000bc1d9) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x000bc1d9) camera2_autofocus_pane_g

0x468e,	// (0x000b1155) camera2_autofocus_pane_cp_g2

0x4696,	// (0x000b115d) camera2_autofocus_pane_cp_g3

0x469e,	// (0x000b1165) camera2_autofocus_pane_cp_g4

0x46a6,	// (0x000b116d) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x000bc23f) camera2_autofocus_pane_cp_g

0x4d5a,	// (0x000b1821) popup_dialer_spcha_window

0x955e,	// (0x000b6025) bg_popup_sub_pane_cp07

0xd08b,	// (0x000b9b52) list_spcha_pane

0xd093,	// (0x000b9b5a) list_single_spcha_pane_ParamLimits

0xd093,	// (0x000b9b5a) list_single_spcha_pane

0x955e,	// (0x000b6025) list_highlight_pane_cp06

0xd0a4,	// (0x000b9b6b) list_single_spcha_pane_t1

0xc291,	// (0x000b8d58) popup_call2_audio_out_window_g4_ParamLimits

0xc291,	// (0x000b8d58) popup_call2_audio_out_window_g4

0x955e,	// (0x000b6025) main_imed2_pane

0xc884,	// (0x000b934b) popup_imed_adjust2_window

0x37e3,	// (0x000b02aa) popup_imed_trans_window_ParamLimits

0x37e3,	// (0x000b02aa) popup_imed_trans_window

0xcae9,	// (0x000b95b0) popup_blid_sat_info2_window_t1

0xcaf7,	// (0x000b95be) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x000bc16e) popup_blid_sat_info2_window_t

0x511d,	// (0x000b1be4) aid_size_cell_colour_35

0x513d,	// (0x000b1c04) aid_size_cell_colour_112

0x515d,	// (0x000b1c24) aid_size_cell_effect

0xc858,	// (0x000b931f) bg_tb_trans_pane_cp02

0xaeeb,	// (0x000b79b2) heading_imed_pane

0x517d,	// (0x000b1c44) listscroll_imed_pane

0xd0b2,	// (0x000b9b79) heading_imed_pane_g1

0xd0ba,	// (0x000b9b81) heading_imed_pane_t1

0xd0c8,	// (0x000b9b8f) grid_imed_colour_35_pane_ParamLimits

0xd0c8,	// (0x000b9b8f) grid_imed_colour_35_pane

0x5189,	// (0x000b1c50) grid_imed_effect_pane

0xd0e4,	// (0x000b9bab) list_imed_aspect_pane

0x519e,	// (0x000b1c65) scroll_pane_cp027_ParamLimits

0x519e,	// (0x000b1c65) scroll_pane_cp027

0x51af,	// (0x000b1c76) cell_imed_effect_pane_ParamLimits

0x51af,	// (0x000b1c76) cell_imed_effect_pane

0xd0ec,	// (0x000b9bb3) cell_imed_colour_pane_ParamLimits

0xd0ec,	// (0x000b9bb3) cell_imed_colour_pane

0xd136,	// (0x000b9bfd) cell_imed_colour_pane_g1_ParamLimits

0xd136,	// (0x000b9bfd) cell_imed_colour_pane_g1

0xd147,	// (0x000b9c0e) hgihlgiht_grid_pane_cp016_ParamLimits

0xd147,	// (0x000b9c0e) hgihlgiht_grid_pane_cp016

0x51da,	// (0x000b1ca1) cell_imed_effect_pane_g1

0x51e2,	// (0x000b1ca9) grid_highlight_pane_cp017

0xd158,	// (0x000b9c1f) list_imed_single_pane_ParamLimits

0xd158,	// (0x000b9c1f) list_imed_single_pane

0x955e,	// (0x000b6025) list_highlight_pane_cp07

0xd16c,	// (0x000b9c33) list_imed_aspect_pane_comp1_t1

0xc858,	// (0x000b931f) bg_tb_trans_pane_cp05

0xd18e,	// (0x000b9c55) popup_imed_adjust2_window_g1

0xd1b5,	// (0x000b9c7c) popup_imed_adjust2_window_t1

0xd1cd,	// (0x000b9c94) slider_imed_adjust_pane

0xd1e1,	// (0x000b9ca8) slider_imed_adjust_pane_g1

0xd1f1,	// (0x000b9cb8) slider_imed_adjust_pane_g2

0xd201,	// (0x000b9cc8) slider_imed_adjust_pane_g3

0xd212,	// (0x000b9cd9) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x000bc2ad) slider_imed_adjust_pane_g

0x51eb,	// (0x000b1cb2) aid_size_cell_clipart2

0x51f7,	// (0x000b1cbe) grid_imed_clipart_pane

0xd223,	// (0x000b9cea) scroll_pane_cp031

0x5201,	// (0x000b1cc8) cell_imed_clipart_pane_ParamLimits

0x5201,	// (0x000b1cc8) cell_imed_clipart_pane

0x521e,	// (0x000b1ce5) cell_imed_clipart_pane_g1

0x955e,	// (0x000b6025) grid_highlight_pane_cp014

0x4ec8,	// (0x000b198f) main_clock2_pane_g1_ParamLimits

0x4ec8,	// (0x000b198f) main_clock2_pane_g1

0x500e,	// (0x000b1ad5) aid_call2_pane_cp10

0x5020,	// (0x000b1ae7) aid_call_pane_cp10

0xb2c0,	// (0x000b7d87) popup_clock_analogue_window_cp10_g1

0xb2c0,	// (0x000b7d87) popup_clock_analogue_window_cp10_g2

0x5032,	// (0x000b1af9) popup_clock_analogue_window_cp10_g3

0x5032,	// (0x000b1af9) popup_clock_analogue_window_cp10_g4

0xb2c0,	// (0x000b7d87) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x000bc29b) popup_clock_analogue_window_cp10_g

0x5048,	// (0x000b1b0f) popup_clock_analogue_window_cp10_t1

0x5079,	// (0x000b1b40) clock_digital_number_pane_cp10_ParamLimits

0x5079,	// (0x000b1b40) clock_digital_number_pane_cp10

0x5093,	// (0x000b1b5a) clock_digital_number_pane_cp11_ParamLimits

0x5093,	// (0x000b1b5a) clock_digital_number_pane_cp11

0x50ad,	// (0x000b1b74) clock_digital_number_pane_cp12_ParamLimits

0x50ad,	// (0x000b1b74) clock_digital_number_pane_cp12

0x50c7,	// (0x000b1b8e) clock_digital_number_pane_cp13_ParamLimits

0x50c7,	// (0x000b1b8e) clock_digital_number_pane_cp13

0x50e1,	// (0x000b1ba8) clock_digital_separator_pane_cp10_ParamLimits

0x50e1,	// (0x000b1ba8) clock_digital_separator_pane_cp10

0x50fb,	// (0x000b1bc2) popup_clock_digital_window_cp02_t1_ParamLimits

0x50fb,	// (0x000b1bc2) popup_clock_digital_window_cp02_t1

0x9c23,	// (0x000b66ea) clock_digital_number_pane_cp10_g1

0x9c23,	// (0x000b66ea) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x000bc2b6) clock_digital_number_pane_cp10_g

0x9c23,	// (0x000b66ea) clock_digital_separator_pane_cp10_g1

0x9c23,	// (0x000b66ea) clock_digital_separator_pane_g2_cp10

0xb35b,	// (0x000b7e22) navi_pane_vded_g4

0xb364,	// (0x000b7e2b) navi_pane_vded_g5

0xb36d,	// (0x000b7e34) navi_pane_vded_t1

0x955e,	// (0x000b6025) main_vded_pane

0x5227,	// (0x000b1cee) main_vded_pane_g1

0x5233,	// (0x000b1cfa) main_vded_pane_g2

0x523f,	// (0x000b1d06) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x000bc2bb) main_vded_pane_g

0x524b,	// (0x000b1d12) main_vded_pane_t1

0x5259,	// (0x000b1d20) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x000bc2c2) main_vded_pane_t

0x5267,	// (0x000b1d2e) vded_slider_pane

0x5271,	// (0x000b1d38) vded_video_pane

0xd22b,	// (0x000b9cf2) vded_video_pane_g1

0x527b,	// (0x000b1d42) vded_video_pane_g2

0xccb1,	// (0x000b9778) vded_video_pane_g3

0x0002,

0xf800,	// (0x000bc2c7) vded_video_pane_g

0xd235,	// (0x000b9cfc) vded_slider_pane_g1

0xc9f6,	// (0x000b94bd) vded_slider_pane_g2

0xd23e,	// (0x000b9d05) vded_slider_pane_g3

0xd247,	// (0x000b9d0e) vded_slider_pane_g4

0xd250,	// (0x000b9d17) vded_slider_pane_g5

0x0004,

0xf807,	// (0x000bc2ce) vded_slider_pane_g

0x4c39,	// (0x000b1700) mup3_rocker_pane_ParamLimits

0x4c39,	// (0x000b1700) mup3_rocker_pane

0x5284,	// (0x000b1d4b) mup3_control_keys_pane_g1

0x528c,	// (0x000b1d53) mup3_control_keys_pane_g2

0x5294,	// (0x000b1d5b) mup3_control_keys_pane_g3

0x529c,	// (0x000b1d63) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x000bc2d9) mup3_control_keys_pane_g

0xff11,	// (0x000ac9d8) popup_toolbar2_fixed_window_cp01_ParamLimits

0xff11,	// (0x000ac9d8) popup_toolbar2_fixed_window_cp01

0x4c6f,	// (0x000b1736) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4c6f,	// (0x000b1736) popup_toolbar2_fixed_window_cp02

0xbbd0,	// (0x000b8697) popup_call2_audio_second_window_t4_ParamLimits

0xbbd0,	// (0x000b8697) popup_call2_audio_second_window_t4

0xc0fe,	// (0x000b8bc5) popup_call2_audio_first_window_t6_ParamLimits

0xc0fe,	// (0x000b8bc5) popup_call2_audio_first_window_t6

0xc394,	// (0x000b8e5b) popup_call2_audio_out_window_t6_ParamLimits

0xc394,	// (0x000b8e5b) popup_call2_audio_out_window_t6

0x955e,	// (0x000b6025) main_vitu_pane

0x52ac,	// (0x000b1d73) aid_size_cell_itu_ParamLimits

0x52ac,	// (0x000b1d73) aid_size_cell_itu

0x95af,	// (0x000b6076) bg_popup_window_pane_cp08_ParamLimits

0x95af,	// (0x000b6076) bg_popup_window_pane_cp08

0x52c2,	// (0x000b1d89) field_vitu_entry_pane_ParamLimits

0x52c2,	// (0x000b1d89) field_vitu_entry_pane

0x52d9,	// (0x000b1da0) grid_vitu_function_pane_ParamLimits

0x52d9,	// (0x000b1da0) grid_vitu_function_pane

0x52f4,	// (0x000b1dbb) grid_vitu_itu_pane_ParamLimits

0x52f4,	// (0x000b1dbb) grid_vitu_itu_pane

0x5312,	// (0x000b1dd9) cell_vitu_itu_pane_ParamLimits

0x5312,	// (0x000b1dd9) cell_vitu_itu_pane

0x5338,	// (0x000b1dff) cell_vitu_function_pane_ParamLimits

0x5338,	// (0x000b1dff) cell_vitu_function_pane

0x95af,	// (0x000b6076) bg_popup_sub_pane_cp08_ParamLimits

0x95af,	// (0x000b6076) bg_popup_sub_pane_cp08

0x5353,	// (0x000b1e1a) field_vitu_entry_pane_t1_ParamLimits

0x5353,	// (0x000b1e1a) field_vitu_entry_pane_t1

0xd271,	// (0x000b9d38) field_vitu_entry_pane_t2_ParamLimits

0xd271,	// (0x000b9d38) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x000bc2e7) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x000bc2e7) field_vitu_entry_pane_t

0xd28e,	// (0x000b9d55) bg_button_pane_cp05_ParamLimits

0xd28e,	// (0x000b9d55) bg_button_pane_cp05

0x5373,	// (0x000b1e3a) cell_vitu_itu_pane_g1

0x538b,	// (0x000b1e52) cell_vitu_itu_pane_t1_ParamLimits

0x538b,	// (0x000b1e52) cell_vitu_itu_pane_t1

0x539d,	// (0x000b1e64) cell_vitu_itu_pane_t2_ParamLimits

0x539d,	// (0x000b1e64) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x000bc2ec) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x000bc2ec) cell_vitu_itu_pane_t

0xd29c,	// (0x000b9d63) bg_button_pane_cp07

0x53d2,	// (0x000b1e99) cell_vitu_function_pane_g1

0x9c5b,	// (0x000b6722) main_calc_pane_g1

0xfd1d,	// (0x000ac7e4) aid_visual_content_pane

0x955e,	// (0x000b6025) main_vradio_pane

0x53db,	// (0x000b1ea2) main_vradio_pane_g1_ParamLimits

0x53db,	// (0x000b1ea2) main_vradio_pane_g1

0xd2a6,	// (0x000b9d6d) main_vradio_pane_g2_ParamLimits

0xd2a6,	// (0x000b9d6d) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x000bc2f3) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x000bc2f3) main_vradio_pane_g

0x53f2,	// (0x000b1eb9) main_vradio_pane_t1_ParamLimits

0x53f2,	// (0x000b1eb9) main_vradio_pane_t1

0x5407,	// (0x000b1ece) main_vradio_pane_t2_ParamLimits

0x5407,	// (0x000b1ece) main_vradio_pane_t2

0xd2b3,	// (0x000b9d7a) main_vradio_pane_t3_ParamLimits

0xd2b3,	// (0x000b9d7a) main_vradio_pane_t3

0x0002,

0xf831,	// (0x000bc2f8) main_vradio_pane_t_ParamLimits

0xf831,	// (0x000bc2f8) main_vradio_pane_t

0x541c,	// (0x000b1ee3) vradio_rocker_control_pane_ParamLimits

0x541c,	// (0x000b1ee3) vradio_rocker_control_pane

0x542e,	// (0x000b1ef5) vradio_station_info_pane_ParamLimits

0x542e,	// (0x000b1ef5) vradio_station_info_pane

0xd2c7,	// (0x000b9d8e) vradio_frequency_info_pane_ParamLimits

0xd2c7,	// (0x000b9d8e) vradio_frequency_info_pane

0xccb1,	// (0x000b9778) vradio_station_info_pane_g1

0xd2d6,	// (0x000b9d9d) vradio_station_info_pane_t1_ParamLimits

0xd2d6,	// (0x000b9d9d) vradio_station_info_pane_t1

0xd2f8,	// (0x000b9dbf) vradio_station_info_pane_t2_ParamLimits

0xd2f8,	// (0x000b9dbf) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x000bc2ff) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x000bc2ff) vradio_station_info_pane_t

0xd30a,	// (0x000b9dd1) vradio_tuning_pane

0xd312,	// (0x000b9dd9) vradio_rocker_control_pane_g1

0xd31a,	// (0x000b9de1) vradio_rocker_control_pane_g2

0xd322,	// (0x000b9de9) vradio_rocker_control_pane_g3

0xd32a,	// (0x000b9df1) vradio_rocker_control_pane_g4

0xd332,	// (0x000b9df9) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x000bc304) vradio_rocker_control_pane_g

0x543e,	// (0x000b1f05) vradio_frequency_info_pane_g1

0xd33a,	// (0x000b9e01) vradio_frequency_info_pane_t1_ParamLimits

0xd33a,	// (0x000b9e01) vradio_frequency_info_pane_t1

0x5448,	// (0x000b1f0f) vradio_tuning_pane_g1

0x5453,	// (0x000b1f1a) vradio_tuning_pane_t1

0x957c,	// (0x000b6043) area_side_right_pane_ParamLimits

0x957c,	// (0x000b6043) area_side_right_pane

0xc813,	// (0x000b92da) status_small_pane_g1

0xc81b,	// (0x000b92e2) status_small_pane_g2

0xc824,	// (0x000b92eb) status_small_pane_g3

0xc82d,	// (0x000b92f4) status_small_pane_g4

0x0003,

0xf5fd,	// (0x000bc0c4) status_small_pane_g

0xc836,	// (0x000b92fd) status_small_pane_t1

0x955e,	// (0x000b6025) main_video3_pane

0xd34e,	// (0x000b9e15) cams_zoom_vslider_pane

0xd356,	// (0x000b9e1d) image3_wide_pane_ParamLimits

0xd356,	// (0x000b9e1d) image3_wide_pane

0xd370,	// (0x000b9e37) image3_wide_small_pane

0xd37c,	// (0x000b9e43) main_video3_pane_g1_ParamLimits

0xd37c,	// (0x000b9e43) main_video3_pane_g1

0xd398,	// (0x000b9e5f) main_video3_pane_g2_ParamLimits

0xd398,	// (0x000b9e5f) main_video3_pane_g2

0x0001,

0xf848,	// (0x000bc30f) main_video3_pane_g_ParamLimits

0xf848,	// (0x000bc30f) main_video3_pane_g

0xd3b4,	// (0x000b9e7b) main_video3_pane_t1_ParamLimits

0xd3b4,	// (0x000b9e7b) main_video3_pane_t1

0xd3df,	// (0x000b9ea6) main_video3_pane_t2_ParamLimits

0xd3df,	// (0x000b9ea6) main_video3_pane_t2

0xd40c,	// (0x000b9ed3) main_video3_pane_t3_ParamLimits

0xd40c,	// (0x000b9ed3) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000bc314) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000bc314) main_video3_pane_t

0xd439,	// (0x000b9f00) cams_zoom_vslider_pane_g1

0xd442,	// (0x000b9f09) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000bc31b) cams_zoom_vslider_pane_g

0xd44a,	// (0x000b9f11) small_slider_vertical_pane

0xccb1,	// (0x000b9778) small_slider_vertical_pane_g1

0xccb1,	// (0x000b9778) small_slider_vertical_pane_g2

0xd452,	// (0x000b9f19) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000bc320) small_slider_vertical_pane_g

0x955e,	// (0x000b6025) main_hwr_training_pane

0xd45b,	// (0x000b9f22) hwr_training_instruct_pane_ParamLimits

0xd45b,	// (0x000b9f22) hwr_training_instruct_pane

0x5462,	// (0x000b1f29) hwr_training_navi_pane_ParamLimits

0x5462,	// (0x000b1f29) hwr_training_navi_pane

0x5481,	// (0x000b1f48) hwr_training_write_pane_ParamLimits

0x5481,	// (0x000b1f48) hwr_training_write_pane

0x955e,	// (0x000b6025) bg_frame_shadow_pane

0xd492,	// (0x000b9f59) hwr_training_write_pane_g1

0xd49a,	// (0x000b9f61) hwr_training_write_pane_g2

0xd4a2,	// (0x000b9f69) hwr_training_write_pane_g3

0xd4aa,	// (0x000b9f71) hwr_training_write_pane_g4

0xd4b2,	// (0x000b9f79) hwr_training_write_pane_g5

0xd4ba,	// (0x000b9f81) hwr_training_write_pane_g6

0xd4c2,	// (0x000b9f89) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000bc327) hwr_training_write_pane_g

0x9f0a,	// (0x000b69d1) hwr_training_navi_pane_g1_ParamLimits

0x9f0a,	// (0x000b69d1) hwr_training_navi_pane_g1

0x9f1c,	// (0x000b69e3) hwr_training_navi_pane_g2_ParamLimits

0x9f1c,	// (0x000b69e3) hwr_training_navi_pane_g2

0x9f2e,	// (0x000b69f5) hwr_training_navi_pane_g3_ParamLimits

0x9f2e,	// (0x000b69f5) hwr_training_navi_pane_g3

0x9f3e,	// (0x000b6a05) hwr_training_navi_pane_g4_ParamLimits

0x9f3e,	// (0x000b6a05) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000bc336) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000bc336) hwr_training_navi_pane_g

0x9f4b,	// (0x000b6a12) hwr_training_navi_pane_t1

0x54c9,	// (0x000b1f90) list_single_hwr_training_instruct_pane_ParamLimits

0x54c9,	// (0x000b1f90) list_single_hwr_training_instruct_pane

0xd4ca,	// (0x000b9f91) list_single_hwr_training_instruct_pane_t1

0xcbf1,	// (0x000b96b8) bg_frame_shadow_pane_g1

0xd4d9,	// (0x000b9fa0) bg_frame_shadow_pane_g2

0xd4e1,	// (0x000b9fa8) bg_frame_shadow_pane_g3

0xd4e9,	// (0x000b9fb0) bg_frame_shadow_pane_g4

0xd4f1,	// (0x000b9fb8) bg_frame_shadow_pane_g5

0xd4f9,	// (0x000b9fc0) bg_frame_shadow_pane_g6

0xd501,	// (0x000b9fc8) bg_frame_shadow_pane_g7

0xa954,	// (0x000b741b) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000bc341) bg_frame_shadow_pane_g

0x955e,	// (0x000b6025) main_video_tele_dialer_pane

0x54de,	// (0x000b1fa5) aid_size_cell_video_keypad_ParamLimits

0x54de,	// (0x000b1fa5) aid_size_cell_video_keypad

0x54f8,	// (0x000b1fbf) grid_video_dialer_keypad_pane_ParamLimits

0x54f8,	// (0x000b1fbf) grid_video_dialer_keypad_pane

0x5544,	// (0x000b200b) video_down_pane_cp_ParamLimits

0x5544,	// (0x000b200b) video_down_pane_cp

0x5574,	// (0x000b203b) cell_video_dialer_keypad_pane_ParamLimits

0x5574,	// (0x000b203b) cell_video_dialer_keypad_pane

0xd509,	// (0x000b9fd0) bg_button_pane_cp08_ParamLimits

0xd509,	// (0x000b9fd0) bg_button_pane_cp08

0x5598,	// (0x000b205f) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5598,	// (0x000b205f) cell_video_dialer_keypad_pane_g1

0x4c23,	// (0x000b16ea) mup3_rocker2_pane_ParamLimits

0x4c23,	// (0x000b16ea) mup3_rocker2_pane

0xccb1,	// (0x000b9778) mup3_rocker2_pane_g1

0x36b0,	// (0x000b0177) main_dialer2_pane

0x955e,	// (0x000b6025) main_mp4_pane

0x9f61,	// (0x000b6a28) main_mp4_pane_g1_ParamLimits

0x9f61,	// (0x000b6a28) main_mp4_pane_g1

0x9f61,	// (0x000b6a28) main_mp4_pane_g2_ParamLimits

0x9f61,	// (0x000b6a28) main_mp4_pane_g2

0x55d3,	// (0x000b209a) main_mp4_pane_g3_ParamLimits

0x55d3,	// (0x000b209a) main_mp4_pane_g3

0x9f6f,	// (0x000b6a36) main_mp4_pane_g4_ParamLimits

0x9f6f,	// (0x000b6a36) main_mp4_pane_g4

0x9f97,	// (0x000b6a5e) main_mp4_pane_g5_ParamLimits

0x9f97,	// (0x000b6a5e) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000bc361) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000bc361) main_mp4_pane_g

0x9fe7,	// (0x000b6aae) main_mp4_pane_t1_ParamLimits

0x9fe7,	// (0x000b6aae) main_mp4_pane_t1

0xa043,	// (0x000b6b0a) main_mp4_pane_t2_ParamLimits

0xa043,	// (0x000b6b0a) main_mp4_pane_t2

0xd515,	// (0x000b9fdc) main_mp4_pane_t3_ParamLimits

0xd515,	// (0x000b9fdc) main_mp4_pane_t3

0xa095,	// (0x000b6b5c) main_mp4_pane_t4_ParamLimits

0xa095,	// (0x000b6b5c) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000bc36e) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000bc36e) main_mp4_pane_t

0xa0d5,	// (0x000b6b9c) mp4_progress_pane_ParamLimits

0xa0d5,	// (0x000b6b9c) mp4_progress_pane

0xa11f,	// (0x000b6be6) mp4_rocker_pane_ParamLimits

0xa11f,	// (0x000b6be6) mp4_rocker_pane

0xd53d,	// (0x000ba004) mp4_progress_pane_t1

0xd556,	// (0x000ba01d) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000bc377) mp4_progress_pane_t

0xd56f,	// (0x000ba036) mup_progress_pane_cp04

0xd57b,	// (0x000ba042) mp4_rocker_pane_g1

0x561d,	// (0x000b20e4) aid_cell_size_keypad2_ParamLimits

0x561d,	// (0x000b20e4) aid_cell_size_keypad2

0x5633,	// (0x000b20fa) dialer2_ne_pane_ParamLimits

0x5633,	// (0x000b20fa) dialer2_ne_pane

0x564b,	// (0x000b2112) grid_dialer2_keypad_pane_ParamLimits

0x564b,	// (0x000b2112) grid_dialer2_keypad_pane

0xca90,	// (0x000b9557) bg_popup_call_pane_cp07_ParamLimits

0xca90,	// (0x000b9557) bg_popup_call_pane_cp07

0x5667,	// (0x000b212e) dialer2_ne_pane_t1_ParamLimits

0x5667,	// (0x000b212e) dialer2_ne_pane_t1

0x56a2,	// (0x000b2169) cell_dialer2_keypad_pane_ParamLimits

0x56a2,	// (0x000b2169) cell_dialer2_keypad_pane

0xd597,	// (0x000ba05e) bg_button_pane_pane_cp04_ParamLimits

0xd597,	// (0x000ba05e) bg_button_pane_pane_cp04

0x56c6,	// (0x000b218d) cell_dialer2_keypad_pane_g1_ParamLimits

0x56c6,	// (0x000b218d) cell_dialer2_keypad_pane_g1

0x1103,	// (0x000adbca) aid_placing_vt_set_content_ParamLimits

0x1103,	// (0x000adbca) aid_placing_vt_set_content

0x1127,	// (0x000adbee) aid_placing_vt_set_title_ParamLimits

0x1127,	// (0x000adbee) aid_placing_vt_set_title

0x955e,	// (0x000b6025) main_image3_pane

0x578c,	// (0x000b2253) area_side_right_pane_cp01_ParamLimits

0x578c,	// (0x000b2253) area_side_right_pane_cp01

0x9f61,	// (0x000b6a28) main_image3_pane_g1_ParamLimits

0x9f61,	// (0x000b6a28) main_image3_pane_g1

0x57a5,	// (0x000b226c) main_image3_pane_g2_ParamLimits

0x57a5,	// (0x000b226c) main_image3_pane_g2

0x57cd,	// (0x000b2294) main_image3_pane_g3_ParamLimits

0x57cd,	// (0x000b2294) main_image3_pane_g3

0x57f7,	// (0x000b22be) main_image3_pane_g4_ParamLimits

0x57f7,	// (0x000b22be) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000bc386) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000bc386) main_image3_pane_g

0x5821,	// (0x000b22e8) main_image3_pane_t1_ParamLimits

0x5821,	// (0x000b22e8) main_image3_pane_t1

0x5879,	// (0x000b2340) main_image3_pane_t2_ParamLimits

0x5879,	// (0x000b2340) main_image3_pane_t2

0x58cb,	// (0x000b2392) main_image3_pane_t3_ParamLimits

0x58cb,	// (0x000b2392) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000bc38f) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000bc38f) main_image3_pane_t

0x95af,	// (0x000b6076) grid_sctrl_middle_pane_cp01_ParamLimits

0x95af,	// (0x000b6076) grid_sctrl_middle_pane_cp01

0x5953,	// (0x000b241a) cell_sctrl_middle_pane_cp01_ParamLimits

0x5953,	// (0x000b241a) cell_sctrl_middle_pane_cp01

0x5970,	// (0x000b2437) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5970,	// (0x000b2437) cell_sctrl_middle_pane_cp01_g1

0x955e,	// (0x000b6025) main_call4_pane

0x5985,	// (0x000b244c) aid_size_button_call4_ParamLimits

0x5985,	// (0x000b244c) aid_size_button_call4

0x59b8,	// (0x000b247f) call4_windows_pane_ParamLimits

0x59b8,	// (0x000b247f) call4_windows_pane

0x59da,	// (0x000b24a1) grid_call4_button_pane_ParamLimits

0x59da,	// (0x000b24a1) grid_call4_button_pane

0xd5a3,	// (0x000ba06a) call4_windows_conf_pane

0x5a05,	// (0x000b24cc) popup_call4_audio_first_window_ParamLimits

0x5a05,	// (0x000b24cc) popup_call4_audio_first_window

0x5a31,	// (0x000b24f8) popup_call4_audio_second_window_ParamLimits

0x5a31,	// (0x000b24f8) popup_call4_audio_second_window

0xd5e0,	// (0x000ba0a7) popup_call4_audio_wait_window_ParamLimits

0xd5e0,	// (0x000ba0a7) popup_call4_audio_wait_window

0x5a47,	// (0x000b250e) cell_call4_button_pane_ParamLimits

0x5a47,	// (0x000b250e) cell_call4_button_pane

0x5a6e,	// (0x000b2535) bg_button_pane_cp09_ParamLimits

0x5a6e,	// (0x000b2535) bg_button_pane_cp09

0x5a7a,	// (0x000b2541) cell_call4_button_pane_g1_ParamLimits

0x5a7a,	// (0x000b2541) cell_call4_button_pane_g1

0x5aa0,	// (0x000b2567) cell_call4_button_pane_t1_ParamLimits

0x5aa0,	// (0x000b2567) cell_call4_button_pane_t1

0xd628,	// (0x000ba0ef) popup_call4_audio_conf_window_ParamLimits

0xd628,	// (0x000ba0ef) popup_call4_audio_conf_window

0x4c85,	// (0x000b174c) mup3_progress_pane_t1_ParamLimits

0x4ca3,	// (0x000b176a) mup3_progress_pane_t2_ParamLimits

0xcf5c,	// (0x000b9a23) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x000bc268) mup3_progress_pane_t_ParamLimits

0xcf79,	// (0x000b9a40) mup_progress_pane_cp03_ParamLimits

0x52a4,	// (0x000b1d6b) mup3_control_keys_pane_g4_copy1

0xa103,	// (0x000b6bca) mp4_rocker2_pane_ParamLimits

0xa103,	// (0x000b6bca) mp4_rocker2_pane

0xd642,	// (0x000ba109) mp4_rocker2_pane_g1

0xd64a,	// (0x000ba111) mp4_rocker2_pane_g2

0xa175,	// (0x000b6c3c) mp4_rocker2_pane_g3

0xa17d,	// (0x000b6c44) mp4_rocker2_pane_g4

0xa185,	// (0x000b6c4c) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000bc398) mp4_rocker2_pane_g

0x955e,	// (0x000b6025) main_camera4_pane

0x955e,	// (0x000b6025) main_video4_pane

0x5512,	// (0x000b1fd9) main_video_tele_dialer_pane_t1_ParamLimits

0x5512,	// (0x000b1fd9) main_video_tele_dialer_pane_t1

0x552b,	// (0x000b1ff2) main_video_tele_dialer_pane_t2_ParamLimits

0x552b,	// (0x000b1ff2) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000bc352) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000bc352) main_video_tele_dialer_pane_t

0x5ade,	// (0x000b25a5) cam4_autofocus_pane_ParamLimits

0x5ade,	// (0x000b25a5) cam4_autofocus_pane

0x5af4,	// (0x000b25bb) cam4_image_uncrop_pane_ParamLimits

0x5af4,	// (0x000b25bb) cam4_image_uncrop_pane

0x5b0d,	// (0x000b25d4) cam4_indicators_pane_ParamLimits

0x5b0d,	// (0x000b25d4) cam4_indicators_pane

0x5b3c,	// (0x000b2603) main_camera4_pane_g1_ParamLimits

0x5b3c,	// (0x000b2603) main_camera4_pane_g1

0x5b4e,	// (0x000b2615) main_camera4_pane_g2_ParamLimits

0x5b4e,	// (0x000b2615) main_camera4_pane_g2

0x5b61,	// (0x000b2628) main_camera4_pane_g3_ParamLimits

0x5b61,	// (0x000b2628) main_camera4_pane_g3

0x5b74,	// (0x000b263b) main_camera4_pane_g4_ParamLimits

0x5b74,	// (0x000b263b) main_camera4_pane_g4

0x5b87,	// (0x000b264e) main_camera4_pane_g5_ParamLimits

0x5b87,	// (0x000b264e) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000bc3a3) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000bc3a3) main_camera4_pane_g

0x5bab,	// (0x000b2672) main_camera4_pane_t1_ParamLimits

0x5bab,	// (0x000b2672) main_camera4_pane_t1

0xa1ab,	// (0x000b6c72) bg_tb_trans_pane_cp06

0xa1c1,	// (0x000b6c88) cam4_indicators_pane_g1

0xa1d2,	// (0x000b6c99) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000bc3be) cam4_indicators_pane_g

0xa1ea,	// (0x000b6cb1) cam4_indicators_pane_t1

0x5c0f,	// (0x000b26d6) main_video4_pane_g1_ParamLimits

0x5c0f,	// (0x000b26d6) main_video4_pane_g1

0x5c1e,	// (0x000b26e5) main_video4_pane_g2_ParamLimits

0x5c1e,	// (0x000b26e5) main_video4_pane_g2

0x5c2d,	// (0x000b26f4) main_video4_pane_g3_ParamLimits

0x5c2d,	// (0x000b26f4) main_video4_pane_g3

0x5c3c,	// (0x000b2703) main_video4_pane_g4_ParamLimits

0x5c3c,	// (0x000b2703) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000bc3c5) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000bc3c5) main_video4_pane_g

0x5c5a,	// (0x000b2721) vid4_indicators_pane_ParamLimits

0x5c5a,	// (0x000b2721) vid4_indicators_pane

0x5c88,	// (0x000b274f) video4_image_uncrop_cif_pane_ParamLimits

0x5c88,	// (0x000b274f) video4_image_uncrop_cif_pane

0x5ca2,	// (0x000b2769) video4_image_uncrop_nhd_pane_ParamLimits

0x5ca2,	// (0x000b2769) video4_image_uncrop_nhd_pane

0x5af4,	// (0x000b25bb) video4_image_uncrop_vga_pane_ParamLimits

0x5af4,	// (0x000b25bb) video4_image_uncrop_vga_pane

0xa20e,	// (0x000b6cd5) bg_tb_trans_pane_cp07

0xa226,	// (0x000b6ced) vid4_indicators_pane_g1

0xa23c,	// (0x000b6d03) vid4_indicators_pane_g2

0xa250,	// (0x000b6d17) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000bc3d0) vid4_indicators_pane_g

0xa281,	// (0x000b6d48) vid4_indicators_pane_t1

0x5cb8,	// (0x000b277f) cam4_autofocus_pane_g1

0x5cc0,	// (0x000b2787) cam4_autofocus_pane_g2

0x5cc8,	// (0x000b278f) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000bc3db) cam4_autofocus_pane_g

0x5cd0,	// (0x000b2797) cam4_autofocus_pane_g3_copy1

0x5558,	// (0x000b201f) video_down_pane_cp_t1

0x5566,	// (0x000b202d) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000bc357) video_down_pane_cp_t

0x95af,	// (0x000b6076) popup_vitu2_window_ParamLimits

0x95af,	// (0x000b6076) popup_vitu2_window

0x5cd8,	// (0x000b279f) aid_size_cell2_itu2_ParamLimits

0x5cd8,	// (0x000b279f) aid_size_cell2_itu2

0x5cfe,	// (0x000b27c5) aid_size_cell_itu2_ParamLimits

0x5cfe,	// (0x000b27c5) aid_size_cell_itu2

0x5d5e,	// (0x000b2825) bg_popup_window_pane_cp09_ParamLimits

0x5d5e,	// (0x000b2825) bg_popup_window_pane_cp09

0x5d6c,	// (0x000b2833) field_vitu2_entry_pane_ParamLimits

0x5d6c,	// (0x000b2833) field_vitu2_entry_pane

0x5d94,	// (0x000b285b) grid_vitu2_function_pane_ParamLimits

0x5d94,	// (0x000b285b) grid_vitu2_function_pane

0x5de5,	// (0x000b28ac) grid_vitu2_itu_pane_ParamLimits

0x5de5,	// (0x000b28ac) grid_vitu2_itu_pane

0x5e74,	// (0x000b293b) cell_vitu2_itu_pane_ParamLimits

0x5e74,	// (0x000b293b) cell_vitu2_itu_pane

0x5e9a,	// (0x000b2961) cell_vitu2_function_pane_ParamLimits

0x5e9a,	// (0x000b2961) cell_vitu2_function_pane

0xd666,	// (0x000ba12d) bg_popup_call_pane_cp08_ParamLimits

0xd666,	// (0x000ba12d) bg_popup_call_pane_cp08

0xd67f,	// (0x000ba146) field_vitu2_entry_pane_g1

0xd68b,	// (0x000ba152) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000bc3e2) field_vitu2_entry_pane_g

0x5ede,	// (0x000b29a5) field_vitu2_entry_pane_t1_ParamLimits

0x5ede,	// (0x000b29a5) field_vitu2_entry_pane_t1

0xa298,	// (0x000b6d5f) field_vitu2_entry_pane_t2_ParamLimits

0xa298,	// (0x000b6d5f) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000bc3e9) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000bc3e9) field_vitu2_entry_pane_t

0x5f0c,	// (0x000b29d3) bg_button_pane_cp010_ParamLimits

0x5f0c,	// (0x000b29d3) bg_button_pane_cp010

0x5f1a,	// (0x000b29e1) cell_vitu2_itu_pane_g1

0x5f45,	// (0x000b2a0c) cell_vitu2_itu_pane_t1_ParamLimits

0x5f45,	// (0x000b2a0c) cell_vitu2_itu_pane_t1

0xfbf5,	// (0x000ac6bc) cell_vitu2_itu_pane_t2_ParamLimits

0xfbf5,	// (0x000ac6bc) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000bc3f3) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000bc3f3) cell_vitu2_itu_pane_t

0xa20e,	// (0x000b6cd5) bg_button_pane_cp011

0x5fa3,	// (0x000b2a6a) cell_vitu2_function_pane_g1

0x955e,	// (0x000b6025) main_myfav_hc_pane

0x591b,	// (0x000b23e2) popup_image3_note_pane_ParamLimits

0x591b,	// (0x000b23e2) popup_image3_note_pane

0x5937,	// (0x000b23fe) popup_image3_tool_bar_pane_ParamLimits

0x5937,	// (0x000b23fe) popup_image3_tool_bar_pane

0xfc83,	// (0x000ac74a) cell_vitu2_itu_pane_t3_ParamLimits

0xfc83,	// (0x000ac74a) cell_vitu2_itu_pane_t3

0x955e,	// (0x000b6025) bg_popup_trans_pane

0xd6ad,	// (0x000ba174) grid_image3_tool_bar_pane

0xd6b7,	// (0x000ba17e) bg_popup_trans_pane_g1

0xacb2,	// (0x000b7779) bg_popup_trans_pane_g2

0xd6bf,	// (0x000ba186) bg_popup_trans_pane_g3

0xd6c7,	// (0x000ba18e) bg_popup_trans_pane_g4

0xd6cf,	// (0x000ba196) bg_popup_trans_pane_g5

0xd6d7,	// (0x000ba19e) bg_popup_trans_pane_g6

0xd6df,	// (0x000ba1a6) bg_popup_trans_pane_g7

0xd6e7,	// (0x000ba1ae) bg_popup_trans_pane_g8

0xac92,	// (0x000b7759) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000bc3fa) bg_popup_trans_pane_g

0xd6ef,	// (0x000ba1b6) cell_image3_tool_bar_pane_ParamLimits

0xd6ef,	// (0x000ba1b6) cell_image3_tool_bar_pane

0xccb1,	// (0x000b9778) cell_image3_tool_bar_pane_g1

0x955e,	// (0x000b6025) bg_popup_trans_pane_cp1

0xd705,	// (0x000ba1cc) popup_image3_note_pane_t1

0xd713,	// (0x000ba1da) popup_image3_note_pane_t2

0xd721,	// (0x000ba1e8) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000bc40d) popup_image3_note_pane_t

0xd731,	// (0x000ba1f8) popup_image3_note_pane_t3_copy1

0x5fb7,	// (0x000b2a7e) bg_myfav_hc_instruction_pane_ParamLimits

0x5fb7,	// (0x000b2a7e) bg_myfav_hc_instruction_pane

0x5fcf,	// (0x000b2a96) cell_myfav_contact_pane_ParamLimits

0x5fcf,	// (0x000b2a96) cell_myfav_contact_pane

0x5feb,	// (0x000b2ab2) cell_myfav_contact_pane_cp1_ParamLimits

0x5feb,	// (0x000b2ab2) cell_myfav_contact_pane_cp1

0x6003,	// (0x000b2aca) cell_myfav_contact_pane_cp2_ParamLimits

0x6003,	// (0x000b2aca) cell_myfav_contact_pane_cp2

0x601b,	// (0x000b2ae2) cell_myfav_contact_pane_cp3_ParamLimits

0x601b,	// (0x000b2ae2) cell_myfav_contact_pane_cp3

0x6032,	// (0x000b2af9) cell_myfav_contact_pane_cp4_ParamLimits

0x6032,	// (0x000b2af9) cell_myfav_contact_pane_cp4

0x604a,	// (0x000b2b11) cell_myfav_contact_pane_cp5_ParamLimits

0x604a,	// (0x000b2b11) cell_myfav_contact_pane_cp5

0x605e,	// (0x000b2b25) cell_myfav_contact_pane_cp6_ParamLimits

0x605e,	// (0x000b2b25) cell_myfav_contact_pane_cp6

0x6074,	// (0x000b2b3b) cell_myfav_contact_pane_cp7_ParamLimits

0x6074,	// (0x000b2b3b) cell_myfav_contact_pane_cp7

0xd73f,	// (0x000ba206) listscroll_gen_pane_cp05

0x608c,	// (0x000b2b53) main_myfav_hc_pane_g1_ParamLimits

0x608c,	// (0x000b2b53) main_myfav_hc_pane_g1

0x60a6,	// (0x000b2b6d) main_myfav_hc_pane_g2_ParamLimits

0x60a6,	// (0x000b2b6d) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000bc414) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000bc414) main_myfav_hc_pane_g

0x60da,	// (0x000b2ba1) main_myfav_hc_pane_t1_ParamLimits

0x60da,	// (0x000b2ba1) main_myfav_hc_pane_t1

0xd748,	// (0x000ba20f) main_myfav_hc_pane_t2_ParamLimits

0xd748,	// (0x000ba20f) main_myfav_hc_pane_t2

0xd75a,	// (0x000ba221) main_myfav_hc_pane_t3_ParamLimits

0xd75a,	// (0x000ba221) main_myfav_hc_pane_t3

0x60f1,	// (0x000b2bb8) main_myfav_hc_pane_t4_ParamLimits

0x60f1,	// (0x000b2bb8) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000bc41b) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000bc41b) main_myfav_hc_pane_t

0xccb1,	// (0x000b9778) bg_myfav_hc_instruction_pane_g1

0xd76c,	// (0x000ba233) cell_myfav_contact_pane_g1_ParamLimits

0xd76c,	// (0x000ba233) cell_myfav_contact_pane_g1

0xd76c,	// (0x000ba233) cell_myfav_contact_pane_g2_ParamLimits

0xd76c,	// (0x000ba233) cell_myfav_contact_pane_g2

0xd778,	// (0x000ba23f) cell_myfav_contact_pane_g3_ParamLimits

0xd778,	// (0x000ba23f) cell_myfav_contact_pane_g3

0xcf46,	// (0x000b9a0d) cell_myfav_contact_pane_g4_ParamLimits

0xcf46,	// (0x000b9a0d) cell_myfav_contact_pane_g4

0xd785,	// (0x000ba24c) cell_myfav_contact_pane_g5_ParamLimits

0xd785,	// (0x000ba24c) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000bc426) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000bc426) cell_myfav_contact_pane_g

0x60c0,	// (0x000b2b87) main_myfav_hc_pane_g3_ParamLimits

0x60c0,	// (0x000b2b87) main_myfav_hc_pane_g3

0xfe72,	// (0x000ac939) popup_adpt_find_window

0x611b,	// (0x000b2be2) afind_page_pane_ParamLimits

0x611b,	// (0x000b2be2) afind_page_pane

0x6130,	// (0x000b2bf7) aid_size_cell_afind_ParamLimits

0x6130,	// (0x000b2bf7) aid_size_cell_afind

0x614e,	// (0x000b2c15) bg_popup_sub_pane_cp09_ParamLimits

0x614e,	// (0x000b2c15) bg_popup_sub_pane_cp09

0x615b,	// (0x000b2c22) find_pane_cp01_ParamLimits

0x615b,	// (0x000b2c22) find_pane_cp01

0xd791,	// (0x000ba258) grid_afind_control_pane_ParamLimits

0xd791,	// (0x000ba258) grid_afind_control_pane

0x6168,	// (0x000b2c2f) grid_afind_pane_ParamLimits

0x6168,	// (0x000b2c2f) grid_afind_pane

0x618a,	// (0x000b2c51) cell_afind_pane_ParamLimits

0x618a,	// (0x000b2c51) cell_afind_pane

0xccb1,	// (0x000b9778) afind_page_pane_g1

0x61f1,	// (0x000b2cb8) afind_page_pane_g2

0x61fa,	// (0x000b2cc1) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000bc431) afind_page_pane_g

0x6203,	// (0x000b2cca) afind_page_pane_t1

0xd7a5,	// (0x000ba26c) cell_afind_grid_control_pane_ParamLimits

0xd7a5,	// (0x000ba26c) cell_afind_grid_control_pane

0xd597,	// (0x000ba05e) bg_button_pane_cp69_ParamLimits

0xd597,	// (0x000ba05e) bg_button_pane_cp69

0x6223,	// (0x000b2cea) cell_afind_pane_g1_ParamLimits

0x6223,	// (0x000b2cea) cell_afind_pane_g1

0x6230,	// (0x000b2cf7) cell_afind_pane_t1_ParamLimits

0x6230,	// (0x000b2cf7) cell_afind_pane_t1

0xaaa7,	// (0x000b756e) bg_button_pane_cp72

0xd7b4,	// (0x000ba27b) cell_afind_grid_control_pane_g1

0x3153,	// (0x000afc1a) aid_image_placing_area_ParamLimits

0x3153,	// (0x000afc1a) aid_image_placing_area

0xd259,	// (0x000b9d20) field_vitu_entry_pane_g1_ParamLimits

0xd259,	// (0x000b9d20) field_vitu_entry_pane_g1

0xd265,	// (0x000b9d2c) field_vitu_entry_pane_g2_ParamLimits

0xd265,	// (0x000b9d2c) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x000bc2e2) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x000bc2e2) field_vitu_entry_pane_g

0x5373,	// (0x000b1e3a) cell_vitu_itu_pane_g1_ParamLimits

0x53b5,	// (0x000b1e7c) cell_vitu_itu_pane_t3_ParamLimits

0x53b5,	// (0x000b1e7c) cell_vitu_itu_pane_t3

0xd53d,	// (0x000ba004) mp4_progress_pane_t1_ParamLimits

0xd556,	// (0x000ba01d) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000bc377) mp4_progress_pane_t_ParamLimits

0xd56f,	// (0x000ba036) mup_progress_pane_cp04_ParamLimits

0x6105,	// (0x000b2bcc) main_myfav_hc_pane_t5_ParamLimits

0x6105,	// (0x000b2bcc) main_myfav_hc_pane_t5

0xfd31,	// (0x000ac7f8) aid_zoom_text_primary

0xfe72,	// (0x000ac939) popup_adpt_find_window_ParamLimits

0x95af,	// (0x000b6076) main_cam_set_pane

0x5b26,	// (0x000b25ed) cam4_zoom_pane_ParamLimits

0x5b26,	// (0x000b25ed) cam4_zoom_pane

0x6242,	// (0x000b2d09) main_cam_set_pane_g1_ParamLimits

0x6242,	// (0x000b2d09) main_cam_set_pane_g1

0x6250,	// (0x000b2d17) main_cam_set_pane_g2_ParamLimits

0x6250,	// (0x000b2d17) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000bc438) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000bc438) main_cam_set_pane_g

0x6271,	// (0x000b2d38) main_cam_set_pane_t1_ParamLimits

0x6271,	// (0x000b2d38) main_cam_set_pane_t1

0x628c,	// (0x000b2d53) main_cset_listscroll_pane_ParamLimits

0x628c,	// (0x000b2d53) main_cset_listscroll_pane

0x62b0,	// (0x000b2d77) main_cset_slider_pane_ParamLimits

0x62b0,	// (0x000b2d77) main_cset_slider_pane

0xd7c5,	// (0x000ba28c) main_cset_list_pane_ParamLimits

0xd7c5,	// (0x000ba28c) main_cset_list_pane

0xd7d5,	// (0x000ba29c) scroll_pane_cp028

0x62da,	// (0x000b2da1) aid_area_touch_slider

0x62f6,	// (0x000b2dbd) cset_slider_pane

0x6320,	// (0x000b2de7) main_cset_slider_pane_g1

0x6335,	// (0x000b2dfc) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000bc43d) main_cset_slider_pane_g

0xd80e,	// (0x000ba2d5) main_cset_slider_pane_t1

0x63f7,	// (0x000b2ebe) main_cset_slider_pane_t2

0x6411,	// (0x000b2ed8) main_cset_slider_pane_t3

0x642b,	// (0x000b2ef2) main_cset_slider_pane_t4

0x6445,	// (0x000b2f0c) main_cset_slider_pane_t5

0x6463,	// (0x000b2f2a) main_cset_slider_pane_t6

0x6478,	// (0x000b2f3f) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000bc462) main_cset_slider_pane_t

0x6584,	// (0x000b304b) cset_list_set_pane_ParamLimits

0x6584,	// (0x000b304b) cset_list_set_pane

0x6598,	// (0x000b305f) aid_position_infowindow_above

0x65a0,	// (0x000b3067) aid_position_infowindow_below

0x65a8,	// (0x000b306f) cset_list_set_pane_g1_ParamLimits

0x65a8,	// (0x000b306f) cset_list_set_pane_g1

0x65b4,	// (0x000b307b) cset_list_set_pane_g3_ParamLimits

0x65b4,	// (0x000b307b) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000bc481) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000bc481) cset_list_set_pane_g

0x65c3,	// (0x000b308a) cset_list_set_pane_t1_ParamLimits

0x65c3,	// (0x000b308a) cset_list_set_pane_t1

0x95af,	// (0x000b6076) list_highlight_pane_cp021_ParamLimits

0x95af,	// (0x000b6076) list_highlight_pane_cp021

0xb4d1,	// (0x000b7f98) cset_slider_pane_g1

0xb4e3,	// (0x000b7faa) cset_slider_pane_g2

0xb4da,	// (0x000b7fa1) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000bc486) cset_slider_pane_g

0xa2b5,	// (0x000b6d7c) aid_area_touch_cam4_zoom

0xa2bd,	// (0x000b6d84) cam4_zoom_cont_pane

0xa2c5,	// (0x000b6d8c) cam4_zoom_pane_g1

0xa2cd,	// (0x000b6d94) cam4_zoom_pane_g2

0x65d8,	// (0x000b309f) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000bc48d) cam4_zoom_pane_g

0xa2d5,	// (0x000b6d9c) cam4_zoom_cont_pane_g1

0xa2de,	// (0x000b6da5) cam4_zoom_cont_pane_g2

0xa2e7,	// (0x000b6dae) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000bc494) cam4_zoom_cont_pane_g

0x59a3,	// (0x000b246a) call4_image_pane_ParamLimits

0x59a3,	// (0x000b246a) call4_image_pane

0xd5a3,	// (0x000ba06a) call4_windows_conf_pane_ParamLimits

0xd5be,	// (0x000ba085) popup_call4_audio_in_window_ParamLimits

0xd5be,	// (0x000ba085) popup_call4_audio_in_window

0x955e,	// (0x000b6025) bg_popup_call2_act_pane_cp02

0xd620,	// (0x000ba0e7) call4_list_conf_pane

0xccb1,	// (0x000b9778) call4_image_pane_g1

0xccb1,	// (0x000b9778) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x000bc1a8) call4_image_pane_g

0xd8ae,	// (0x000ba375) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8ae,	// (0x000ba375) list_single_graphic_popup_conf4_pane

0x955e,	// (0x000b6025) list_highlight_pane_cp022

0xd8c3,	// (0x000ba38a) list_single_graphic_popup_conf4_pane_g1

0xb1bd,	// (0x000b7c84) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000bc49b) list_single_graphic_popup_conf4_pane_g

0xd8cb,	// (0x000ba392) list_single_graphic_popup_conf4_pane_t1

0x123e,	// (0x000add05) popup_vtel_slider_window_ParamLimits

0x123e,	// (0x000add05) popup_vtel_slider_window

0xd585,	// (0x000ba04c) dialer2_ne_pane_t2_ParamLimits

0xd585,	// (0x000ba04c) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000bc37c) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000bc37c) dialer2_ne_pane_t

0xca90,	// (0x000b9557) bg_popup_sub_pane_cp010_ParamLimits

0xca90,	// (0x000b9557) bg_popup_sub_pane_cp010

0x65e0,	// (0x000b30a7) popup_vtel_slider_window_g1_ParamLimits

0x65e0,	// (0x000b30a7) popup_vtel_slider_window_g1

0x65f3,	// (0x000b30ba) popup_vtel_slider_window_g2_ParamLimits

0x65f3,	// (0x000b30ba) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000bc4a0) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000bc4a0) popup_vtel_slider_window_g

0x6649,	// (0x000b3110) vtel_slider_pane_ParamLimits

0x6649,	// (0x000b3110) vtel_slider_pane

0x666b,	// (0x000b3132) vtel_slider_pane_g1_ParamLimits

0x666b,	// (0x000b3132) vtel_slider_pane_g1

0x667f,	// (0x000b3146) vtel_slider_pane_g2_ParamLimits

0x667f,	// (0x000b3146) vtel_slider_pane_g2

0x6697,	// (0x000b315e) vtel_slider_pane_g3_ParamLimits

0x6697,	// (0x000b315e) vtel_slider_pane_g3

0x666b,	// (0x000b3132) vtel_slider_pane_g4_ParamLimits

0x666b,	// (0x000b3132) vtel_slider_pane_g4

0x66ad,	// (0x000b3174) vtel_slider_pane_g5_ParamLimits

0x66ad,	// (0x000b3174) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000bc4a9) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000bc4a9) vtel_slider_pane_g

0x95af,	// (0x000b6076) main_gallery2_pane

0x5d2a,	// (0x000b27f1) aid_size_row_itut2_dropdow_list_ParamLimits

0x5d2a,	// (0x000b27f1) aid_size_row_itut2_dropdow_list

0x5dbc,	// (0x000b2883) grid_vitu2_function_top_pane_ParamLimits

0x5dbc,	// (0x000b2883) grid_vitu2_function_top_pane

0x5e1b,	// (0x000b28e2) popup_vitu2_dropdown_list_window_ParamLimits

0x5e1b,	// (0x000b28e2) popup_vitu2_dropdown_list_window

0x5e48,	// (0x000b290f) popup_vitu2_match_list_window

0x66c3,	// (0x000b318a) cell_vitu2_function_top_pane_ParamLimits

0x66c3,	// (0x000b318a) cell_vitu2_function_top_pane

0x66e3,	// (0x000b31aa) cell_vitu2_function_top_pane_cp01_ParamLimits

0x66e3,	// (0x000b31aa) cell_vitu2_function_top_pane_cp01

0x6701,	// (0x000b31c8) cell_vitu2_function_top_wide_pane_ParamLimits

0x6701,	// (0x000b31c8) cell_vitu2_function_top_wide_pane

0xa20e,	// (0x000b6cd5) bg_button_pane_cp012

0x671f,	// (0x000b31e6) cell_vitu2_function_top_pane_g1

0xa2fe,	// (0x000b6dc5) bg_button_pane_cp013_ParamLimits

0xa2fe,	// (0x000b6dc5) bg_button_pane_cp013

0x6733,	// (0x000b31fa) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6733,	// (0x000b31fa) cell_vitu2_function_top_wide_pane_g1

0xa20e,	// (0x000b6cd5) bg_popup_sub_pane_cp20

0x674b,	// (0x000b3212) list_vitu2_match_list_pane

0xd6b7,	// (0x000ba17e) bg_popup_sub_pane_cp20_g1

0xd6bf,	// (0x000ba186) bg_popup_sub_pane_cp20_g2

0xacb2,	// (0x000b7779) bg_popup_sub_pane_cp20_g3

0xd6c7,	// (0x000ba18e) bg_popup_sub_pane_cp20_g4

0xac92,	// (0x000b7759) bg_popup_sub_pane_cp20_g5

0xd8e1,	// (0x000ba3a8) bg_popup_sub_pane_cp20_g6

0xd6d7,	// (0x000ba19e) bg_popup_sub_pane_cp20_g7

0xd6df,	// (0x000ba1a6) bg_popup_sub_pane_cp20_g8

0xd6e7,	// (0x000ba1ae) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000bc4b4) bg_popup_sub_pane_cp20_g

0xa31a,	// (0x000b6de1) list_vitu2_match_list_item_pane_ParamLimits

0xa31a,	// (0x000b6de1) list_vitu2_match_list_item_pane

0xa32c,	// (0x000b6df3) list_vitu2_match_list_item_pane_t1

0x9c63,	// (0x000b672a) bg_popup_sub_pane_cp21

0xa346,	// (0x000b6e0d) grid_vitu2_dropdown_list_pane

0x67a1,	// (0x000b3268) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x67a1,	// (0x000b3268) cell_vitu2_dropdown_list_char_pane

0x67c4,	// (0x000b328b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x67c4,	// (0x000b328b) cell_vitu2_dropdown_list_ctrl_pane

0xd8e9,	// (0x000ba3b0) cell_vitu2_dropdown_list_char_pane_g1

0xd8f2,	// (0x000ba3b9) cell_vitu2_dropdown_list_char_pane_g2

0xd8fb,	// (0x000ba3c2) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000bc4d1) cell_vitu2_dropdown_list_char_pane_g

0x67f2,	// (0x000b32b9) cell_vitu2_dropdown_list_char_pane_t1

0x6800,	// (0x000b32c7) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6800,	// (0x000b32c7) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6810,	// (0x000b32d7) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6810,	// (0x000b32d7) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6821,	// (0x000b32e8) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6821,	// (0x000b32e8) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6831,	// (0x000b32f8) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6831,	// (0x000b32f8) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa1ab,	// (0x000b6c72) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa1ab,	// (0x000b6c72) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000bc4d8) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000bc4d8) cell_vitu2_dropdown_list_ctrl_pane_g

0x684d,	// (0x000b3314) aid_size_cell_gallery2_ParamLimits

0x684d,	// (0x000b3314) aid_size_cell_gallery2

0x686b,	// (0x000b3332) grid_gallery2_pane_ParamLimits

0x686b,	// (0x000b3332) grid_gallery2_pane

0x6885,	// (0x000b334c) scroll_pane_cp029_ParamLimits

0x6885,	// (0x000b334c) scroll_pane_cp029

0x6891,	// (0x000b3358) cell_gallery2_pane_ParamLimits

0x6891,	// (0x000b3358) cell_gallery2_pane

0xd904,	// (0x000ba3cb) cell_gallery2_pane_g2

0x68f2,	// (0x000b33b9) cell_gallery2_pane_g3

0xd90c,	// (0x000ba3d3) cell_gallery2_pane_g4

0xd914,	// (0x000ba3db) cell_gallery2_pane_g5

0xb38b,	// (0x000b7e52) grid_highlight_pane_cp10

0x5e48,	// (0x000b290f) popup_vitu2_match_list_window_ParamLimits

0x5e5f,	// (0x000b2926) popup_vitu2_query_window_ParamLimits

0x5e5f,	// (0x000b2926) popup_vitu2_query_window

0x9c63,	// (0x000b672a) bg_vitu2_candi_button_pane

0xd8e9,	// (0x000ba3b0) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8f2,	// (0x000ba3b9) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8fb,	// (0x000ba3c2) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x68fa,	// (0x000b33c1) bg_button_pane_cp015

0x690e,	// (0x000b33d5) bg_button_pane_cp016

0x6921,	// (0x000b33e8) bg_button_pane_cp017

0xc858,	// (0x000b931f) bg_popup_sub_pane_cp22

0xd91c,	// (0x000ba3e3) popup_vitu2_query_window_g1

0x6966,	// (0x000b342d) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000bc4e3) popup_vitu2_query_window_g

0x6985,	// (0x000b344c) popup_vitu2_query_window_t1_ParamLimits

0x6985,	// (0x000b344c) popup_vitu2_query_window_t1

0x69ba,	// (0x000b3481) popup_vitu2_query_window_t2_ParamLimits

0x69ba,	// (0x000b3481) popup_vitu2_query_window_t2

0x69cc,	// (0x000b3493) popup_vitu2_query_window_t3_ParamLimits

0x69cc,	// (0x000b3493) popup_vitu2_query_window_t3

0x69f4,	// (0x000b34bb) popup_vitu2_query_window_t4_ParamLimits

0x69f4,	// (0x000b34bb) popup_vitu2_query_window_t4

0x6a15,	// (0x000b34dc) popup_vitu2_query_window_t5_ParamLimits

0x6a15,	// (0x000b34dc) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000bc4ea) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000bc4ea) popup_vitu2_query_window_t

0xd7bd,	// (0x000ba284) main_cset_text_pane

0x62da,	// (0x000b2da1) aid_area_touch_slider_ParamLimits

0x62f6,	// (0x000b2dbd) cset_slider_pane_ParamLimits

0x6320,	// (0x000b2de7) main_cset_slider_pane_g1_ParamLimits

0x6335,	// (0x000b2dfc) main_cset_slider_pane_g2_ParamLimits

0xd7de,	// (0x000ba2a5) main_cset_slider_pane_g3_ParamLimits

0xd7de,	// (0x000ba2a5) main_cset_slider_pane_g3

0x634a,	// (0x000b2e11) main_cset_slider_pane_g4_ParamLimits

0x634a,	// (0x000b2e11) main_cset_slider_pane_g4

0x6359,	// (0x000b2e20) main_cset_slider_pane_g5_ParamLimits

0x6359,	// (0x000b2e20) main_cset_slider_pane_g5

0x6367,	// (0x000b2e2e) main_cset_slider_pane_g6_ParamLimits

0x6367,	// (0x000b2e2e) main_cset_slider_pane_g6

0xf976,	// (0x000bc43d) main_cset_slider_pane_g_ParamLimits

0xd80e,	// (0x000ba2d5) main_cset_slider_pane_t1_ParamLimits

0x63f7,	// (0x000b2ebe) main_cset_slider_pane_t2_ParamLimits

0x6411,	// (0x000b2ed8) main_cset_slider_pane_t3_ParamLimits

0x642b,	// (0x000b2ef2) main_cset_slider_pane_t4_ParamLimits

0x6445,	// (0x000b2f0c) main_cset_slider_pane_t5_ParamLimits

0x6463,	// (0x000b2f2a) main_cset_slider_pane_t6_ParamLimits

0x6478,	// (0x000b2f3f) main_cset_slider_pane_t7_ParamLimits

0x64a6,	// (0x000b2f6d) main_cset_slider_pane_t8_ParamLimits

0x64a6,	// (0x000b2f6d) main_cset_slider_pane_t8

0x64ce,	// (0x000b2f95) main_cset_slider_pane_t9_ParamLimits

0x64ce,	// (0x000b2f95) main_cset_slider_pane_t9

0x64f6,	// (0x000b2fbd) main_cset_slider_pane_t10_ParamLimits

0x64f6,	// (0x000b2fbd) main_cset_slider_pane_t10

0x651e,	// (0x000b2fe5) main_cset_slider_pane_t11_ParamLimits

0x651e,	// (0x000b2fe5) main_cset_slider_pane_t11

0x6548,	// (0x000b300f) main_cset_slider_pane_t12_ParamLimits

0x6548,	// (0x000b300f) main_cset_slider_pane_t12

0x6565,	// (0x000b302c) main_cset_slider_pane_t13_ParamLimits

0x6565,	// (0x000b302c) main_cset_slider_pane_t13

0xf99b,	// (0x000bc462) main_cset_slider_pane_t_ParamLimits

0x955e,	// (0x000b6025) bg_popup_sub_pane_cp011

0xd928,	// (0x000ba3ef) main_cset_text_pane_g1

0xd930,	// (0x000ba3f7) main_cset_text_pane_t1

0xd93e,	// (0x000ba405) main_cset_text_pane_t2

0xd94c,	// (0x000ba413) main_cset_text_pane_t3

0xd95a,	// (0x000ba421) main_cset_text_pane_t4

0xd968,	// (0x000ba42f) main_cset_text_pane_t5

0xd976,	// (0x000ba43d) main_cset_text_pane_t6

0xd984,	// (0x000ba44b) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000bc4f9) main_cset_text_pane_t

0x955e,	// (0x000b6025) main_cam4_burst_pane

0x955e,	// (0x000b6025) main_cam5_pane

0x6211,	// (0x000b2cd8) bg_button_pane_cp019

0x621a,	// (0x000b2ce1) bg_button_pane_cp020

0xd7ea,	// (0x000ba2b1) main_cset_slider_pane_g7_ParamLimits

0xd7ea,	// (0x000ba2b1) main_cset_slider_pane_g7

0xd7f6,	// (0x000ba2bd) main_cset_slider_pane_g8_ParamLimits

0xd7f6,	// (0x000ba2bd) main_cset_slider_pane_g8

0x637b,	// (0x000b2e42) main_cset_slider_pane_g9_ParamLimits

0x637b,	// (0x000b2e42) main_cset_slider_pane_g9

0x6387,	// (0x000b2e4e) main_cset_slider_pane_g10_ParamLimits

0x6387,	// (0x000b2e4e) main_cset_slider_pane_g10

0x6393,	// (0x000b2e5a) main_cset_slider_pane_g11_ParamLimits

0x6393,	// (0x000b2e5a) main_cset_slider_pane_g11

0x639f,	// (0x000b2e66) main_cset_slider_pane_g12_ParamLimits

0x639f,	// (0x000b2e66) main_cset_slider_pane_g12

0x63ab,	// (0x000b2e72) main_cset_slider_pane_g13_ParamLimits

0x63ab,	// (0x000b2e72) main_cset_slider_pane_g13

0x63b7,	// (0x000b2e7e) main_cset_slider_pane_g14_ParamLimits

0x63b7,	// (0x000b2e7e) main_cset_slider_pane_g14

0x63c3,	// (0x000b2e8a) main_cset_slider_pane_g15_ParamLimits

0x63c3,	// (0x000b2e8a) main_cset_slider_pane_g15

0xd83c,	// (0x000ba303) main_cset_slider_pane_t14_ParamLimits

0xd83c,	// (0x000ba303) main_cset_slider_pane_t14

0xd875,	// (0x000ba33c) main_cset_slider_pane_t15_ParamLimits

0xd875,	// (0x000ba33c) main_cset_slider_pane_t15

0x6a8c,	// (0x000b3553) aid_cam4_burst_size_cell_ParamLimits

0x6a8c,	// (0x000b3553) aid_cam4_burst_size_cell

0x6aac,	// (0x000b3573) grid_cam4_burst_pane_ParamLimits

0x6aac,	// (0x000b3573) grid_cam4_burst_pane

0x6ae6,	// (0x000b35ad) linegrid_cam4_burst_pane_ParamLimits

0x6ae6,	// (0x000b35ad) linegrid_cam4_burst_pane

0xd992,	// (0x000ba459) scroll_pane_cp30_ParamLimits

0xd992,	// (0x000ba459) scroll_pane_cp30

0x6b08,	// (0x000b35cf) cell_cam4_burst_pane_ParamLimits

0x6b08,	// (0x000b35cf) cell_cam4_burst_pane

0xd99e,	// (0x000ba465) linegrid_cam4_burst_pane_g1_ParamLimits

0xd99e,	// (0x000ba465) linegrid_cam4_burst_pane_g1

0x6b5d,	// (0x000b3624) linegrid_cam4_burst_pane_g2_ParamLimits

0x6b5d,	// (0x000b3624) linegrid_cam4_burst_pane_g2

0xd9ab,	// (0x000ba472) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9ab,	// (0x000ba472) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000bc508) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000bc508) linegrid_cam4_burst_pane_g

0x6b6e,	// (0x000b3635) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6b6e,	// (0x000b3635) linegrid_cam4_burst_pane_g3_copy1

0xd9b8,	// (0x000ba47f) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9b8,	// (0x000ba47f) linegrid_cam4_burst_pane_g4

0x6b8c,	// (0x000b3653) linegrid_cam4_burst_pane_g5_ParamLimits

0x6b8c,	// (0x000b3653) linegrid_cam4_burst_pane_g5

0x6b9d,	// (0x000b3664) linegrid_cam4_burst_pane_g6_ParamLimits

0x6b9d,	// (0x000b3664) linegrid_cam4_burst_pane_g6

0xd9c5,	// (0x000ba48c) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9c5,	// (0x000ba48c) linegrid_cam4_burst_pane_g7

0x6bb4,	// (0x000b367b) cell_cam4_burst_pane_g1

0xd9de,	// (0x000ba4a5) main_cam5_pane_t1_ParamLimits

0xd9de,	// (0x000ba4a5) main_cam5_pane_t1

0xd9f0,	// (0x000ba4b7) main_cam5_pane_t2_ParamLimits

0xd9f0,	// (0x000ba4b7) main_cam5_pane_t2

0xda02,	// (0x000ba4c9) main_cam5_pane_t3_ParamLimits

0xda02,	// (0x000ba4c9) main_cam5_pane_t3

0xda14,	// (0x000ba4db) main_cam5_pane_t4_ParamLimits

0xda14,	// (0x000ba4db) main_cam5_pane_t4

0xda2c,	// (0x000ba4f3) main_cam5_pane_t5_ParamLimits

0xda2c,	// (0x000ba4f3) main_cam5_pane_t5

0xda40,	// (0x000ba507) main_cam5_pane_t6_ParamLimits

0xda40,	// (0x000ba507) main_cam5_pane_t6

0xda54,	// (0x000ba51b) main_cam5_pane_t7_ParamLimits

0xda54,	// (0x000ba51b) main_cam5_pane_t7

0xda66,	// (0x000ba52d) main_cam5_pane_t8_ParamLimits

0xda66,	// (0x000ba52d) main_cam5_pane_t8

0xda84,	// (0x000ba54b) main_cam5_pane_t9_ParamLimits

0xda84,	// (0x000ba54b) main_cam5_pane_t9

0xda96,	// (0x000ba55d) main_cam5_pane_t10_ParamLimits

0xda96,	// (0x000ba55d) main_cam5_pane_t10

0xdaa8,	// (0x000ba56f) main_cam5_pane_t11_ParamLimits

0xdaa8,	// (0x000ba56f) main_cam5_pane_t11

0xdabc,	// (0x000ba583) main_cam5_pane_t12_ParamLimits

0xdabc,	// (0x000ba583) main_cam5_pane_t12

0xdad3,	// (0x000ba59a) main_cam5_pane_t13_ParamLimits

0xdad3,	// (0x000ba59a) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000bc514) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000bc514) main_cam5_pane_t

0xfef5,	// (0x000ac9bc) popup_scut_keymap_window_ParamLimits

0xfef5,	// (0x000ac9bc) popup_scut_keymap_window

0x6bc7,	// (0x000b368e) aid_size_cell_brow_shortcut

0xb38b,	// (0x000b7e52) bg_popup_window_pane_cp010

0x6bd3,	// (0x000b369a) grid_scut_pane

0x6bdf,	// (0x000b36a6) cell_scut_pane_ParamLimits

0x6bdf,	// (0x000b36a6) cell_scut_pane

0x6bf8,	// (0x000b36bf) cell_scut_pane_g1

0xdaf6,	// (0x000ba5bd) cell_scut_pane_t1

0xdb05,	// (0x000ba5cc) cell_scut_pane_t2

0x6c01,	// (0x000b36c8) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000bc52f) cell_scut_pane_t

0x483c,	// (0x000b1303) main_mup3_pane_g8_ParamLimits

0x483c,	// (0x000b1303) main_mup3_pane_g8

0x5d46,	// (0x000b280d) area_vitu2_query_pane_ParamLimits

0x5d46,	// (0x000b280d) area_vitu2_query_pane

0x6934,	// (0x000b33fb) input_focus_pane_cp08

0xdb14,	// (0x000ba5db) area_vitu2_query_pane_g1

0x6c0f,	// (0x000b36d6) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000bc536) area_vitu2_query_pane_g

0x6c22,	// (0x000b36e9) area_vitu2_query_pane_t1_ParamLimits

0x6c22,	// (0x000b36e9) area_vitu2_query_pane_t1

0x6c36,	// (0x000b36fd) area_vitu2_query_pane_t2_ParamLimits

0x6c36,	// (0x000b36fd) area_vitu2_query_pane_t2

0x6c4a,	// (0x000b3711) area_vitu2_query_pane_t3_ParamLimits

0x6c4a,	// (0x000b3711) area_vitu2_query_pane_t3

0xa34e,	// (0x000b6e15) area_vitu2_query_pane_t4_ParamLimits

0xa34e,	// (0x000b6e15) area_vitu2_query_pane_t4

0xa376,	// (0x000b6e3d) area_vitu2_query_pane_t5_ParamLimits

0xa376,	// (0x000b6e3d) area_vitu2_query_pane_t5

0xa39e,	// (0x000b6e65) area_vitu2_query_pane_t6_ParamLimits

0xa39e,	// (0x000b6e65) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000bc53b) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000bc53b) area_vitu2_query_pane_t

0x6c72,	// (0x000b3739) bg_button_pane_cp018

0x6c80,	// (0x000b3747) bg_button_pane_cp021

0x6c8c,	// (0x000b3753) bg_button_pane_cp022

0x6c9d,	// (0x000b3764) input_focus_pane_cp09

0x269c,	// (0x000af163) aid_size_touch_mv_arrow_left

0x26c5,	// (0x000af18c) aid_size_touch_mv_arrow_right

0x63db,	// (0x000b2ea2) main_cset_slider_pane_g16_ParamLimits

0x63db,	// (0x000b2ea2) main_cset_slider_pane_g16

0x63e9,	// (0x000b2eb0) main_cset_slider_pane_g17_ParamLimits

0x63e9,	// (0x000b2eb0) main_cset_slider_pane_g17

0x6bb4,	// (0x000b367b) cell_cam4_burst_pane_g1_ParamLimits

0x955e,	// (0x000b6025) compa_mode_pane

0x6603,	// (0x000b30ca) popup_vtel_slider_window_g3_ParamLimits

0x6603,	// (0x000b30ca) popup_vtel_slider_window_g3

0x661a,	// (0x000b30e1) popup_vtel_slider_window_g4_ParamLimits

0x661a,	// (0x000b30e1) popup_vtel_slider_window_g4

0x6631,	// (0x000b30f8) popup_vtel_slider_window_t1_ParamLimits

0x6631,	// (0x000b30f8) popup_vtel_slider_window_t1

0x955e,	// (0x000b6025) main_cl_pane

0xc884,	// (0x000b934b) popup_imed_adjust2_window_ParamLimits

0xc858,	// (0x000b931f) bg_tb_trans_pane_cp05_ParamLimits

0xd18e,	// (0x000b9c55) popup_imed_adjust2_window_g1_ParamLimits

0xd19d,	// (0x000b9c64) popup_imed_adjust2_window_g2_ParamLimits

0xd19d,	// (0x000b9c64) popup_imed_adjust2_window_g2

0xd1a9,	// (0x000b9c70) popup_imed_adjust2_window_g3_ParamLimits

0xd1a9,	// (0x000b9c70) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x000bc2a6) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x000bc2a6) popup_imed_adjust2_window_g

0xd1b5,	// (0x000b9c7c) popup_imed_adjust2_window_t1_ParamLimits

0xd1cd,	// (0x000b9c94) slider_imed_adjust_pane_ParamLimits

0xd1e1,	// (0x000b9ca8) slider_imed_adjust_pane_g1_ParamLimits

0xd1f1,	// (0x000b9cb8) slider_imed_adjust_pane_g2_ParamLimits

0xd201,	// (0x000b9cc8) slider_imed_adjust_pane_g3_ParamLimits

0xd212,	// (0x000b9cd9) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x000bc2ad) slider_imed_adjust_pane_g_ParamLimits

0x5ac6,	// (0x000b258d) aid_touch_area_cam4_ParamLimits

0x5ac6,	// (0x000b258d) aid_touch_area_cam4

0xa18d,	// (0x000b6c54) battery_pane_cp01

0x5b98,	// (0x000b265f) main_camera4_pane_g6_ParamLimits

0x5b98,	// (0x000b265f) main_camera4_pane_g6

0x5bc2,	// (0x000b2689) main_camera4_pane_t2_ParamLimits

0x5bc2,	// (0x000b2689) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000bc3b0) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000bc3b0) main_camera4_pane_t

0x5bf7,	// (0x000b26be) aid_touch_area_vid4_ParamLimits

0x5bf7,	// (0x000b26be) aid_touch_area_vid4

0x5c4b,	// (0x000b2712) main_video4_pane_g5_ParamLimits

0x5c4b,	// (0x000b2712) main_video4_pane_g5

0x5c70,	// (0x000b2737) vid4_progress_pane_ParamLimits

0x5c70,	// (0x000b2737) vid4_progress_pane

0xd802,	// (0x000ba2c9) main_cset_slider_pane_g18_ParamLimits

0xd802,	// (0x000ba2c9) main_cset_slider_pane_g18

0xd9d2,	// (0x000ba499) cell_cam4_burst_pane_g2_ParamLimits

0xd9d2,	// (0x000ba499) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000bc50f) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000bc50f) cell_cam4_burst_pane_g

0xa889,	// (0x000b7350) bg_cl_pane_ParamLimits

0xa889,	// (0x000b7350) bg_cl_pane

0x6cae,	// (0x000b3775) cl_header_pane_ParamLimits

0x6cae,	// (0x000b3775) cl_header_pane

0x6cc2,	// (0x000b3789) cl_listscroll_pane_ParamLimits

0x6cc2,	// (0x000b3789) cl_listscroll_pane

0xdb20,	// (0x000ba5e7) bg_cl_pane_g1

0xdb28,	// (0x000ba5ef) bg_cl_pane_g2

0xdb30,	// (0x000ba5f7) bg_cl_pane_g3

0xdb38,	// (0x000ba5ff) bg_cl_pane_g4

0xdb40,	// (0x000ba607) bg_cl_pane_g5

0xdb48,	// (0x000ba60f) bg_cl_pane_g6

0xdb50,	// (0x000ba617) bg_cl_pane_g7

0xdb58,	// (0x000ba61f) bg_cl_pane_g8

0xdb60,	// (0x000ba627) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000bc54a) bg_cl_pane_g

0x6cd2,	// (0x000b3799) aid_height_cl_leading_ParamLimits

0x6cd2,	// (0x000b3799) aid_height_cl_leading

0x6cde,	// (0x000b37a5) aid_height_cl_text_ParamLimits

0x6cde,	// (0x000b37a5) aid_height_cl_text

0x95af,	// (0x000b6076) bg_cl_header_pane_ParamLimits

0x95af,	// (0x000b6076) bg_cl_header_pane

0x6cfd,	// (0x000b37c4) cl_header_pane_g1_ParamLimits

0x6cfd,	// (0x000b37c4) cl_header_pane_g1

0x6d13,	// (0x000b37da) cl_header_pane_t1_ParamLimits

0x6d13,	// (0x000b37da) cl_header_pane_t1

0xdb68,	// (0x000ba62f) cl_list_pane

0xd7d5,	// (0x000ba29c) hc_scroll_pane_cp01

0xac92,	// (0x000b7759) bg_cl_header_pane_g1

0xd6b7,	// (0x000ba17e) bg_cl_header_pane_g2

0xacb2,	// (0x000b7779) bg_cl_header_pane_g3

0xd6c7,	// (0x000ba18e) bg_cl_header_pane_g4

0xd6bf,	// (0x000ba186) bg_cl_header_pane_g5

0xd8e1,	// (0x000ba3a8) bg_cl_header_pane_g6

0xd6df,	// (0x000ba1a6) bg_cl_header_pane_g7

0xd6e7,	// (0x000ba1ae) bg_cl_header_pane_g8

0xd6d7,	// (0x000ba19e) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000bc55d) bg_cl_header_pane_g

0x6d2c,	// (0x000b37f3) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6d2c,	// (0x000b37f3) hc_cl_list_double_graphic_heading_pane

0x6d3f,	// (0x000b3806) hc_cl_list_single_graphic_pane_ParamLimits

0x6d3f,	// (0x000b3806) hc_cl_list_single_graphic_pane

0x6d57,	// (0x000b381e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6d57,	// (0x000b381e) hc_cl_list_single_graphic_pane_g1

0x6d63,	// (0x000b382a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6d63,	// (0x000b382a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000bc570) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000bc570) hc_cl_list_single_graphic_pane_g

0x6d77,	// (0x000b383e) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6d77,	// (0x000b383e) hc_cl_list_single_graphic_pane_t1

0x6d57,	// (0x000b381e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6d57,	// (0x000b381e) hc_cl_list_double_graphic_heading_pane_g1

0x6d8c,	// (0x000b3853) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6d8c,	// (0x000b3853) hc_cl_list_double_graphic_heading_pane_g2

0x6da0,	// (0x000b3867) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6da0,	// (0x000b3867) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000bc575) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000bc575) hc_cl_list_double_graphic_heading_pane_g

0x6db4,	// (0x000b387b) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6db4,	// (0x000b387b) hc_cl_list_double_graphic_heading_pane_t1

0x6dc9,	// (0x000b3890) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6dc9,	// (0x000b3890) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000bc57c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000bc57c) hc_cl_list_double_graphic_heading_pane_t

0x6dde,	// (0x000b38a5) vid4_progress_pane_g1

0x6df0,	// (0x000b38b7) vid4_progress_pane_g2

0x9e3e,	// (0x000b6905) vid4_progress_pane_g3

0xa3f2,	// (0x000b6eb9) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000bc581) vid4_progress_pane_g

0xa410,	// (0x000b6ed7) vid4_progress_pane_t1

0xa425,	// (0x000b6eec) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000bc58c) vid4_progress_pane_t

0xa450,	// (0x000b6f17) wait_bar_pane_cp07

0xca9e,	// (0x000b9565) blid_firmament_pane_ParamLimits

0xcae1,	// (0x000b95a8) popup_blid_sat_info2_window_g1

0xcb05,	// (0x000b95cc) popup_blid_sat_info2_window_t3

0xcb13,	// (0x000b95da) popup_blid_sat_info2_window_t4

0xcb21,	// (0x000b95e8) popup_blid_sat_info2_window_t5

0xcb2f,	// (0x000b95f6) popup_blid_sat_info2_window_t6

0xcb3f,	// (0x000b9606) popup_blid_sat_info2_window_t7

0xcb4d,	// (0x000b9614) popup_blid_sat_info2_window_t8

0xcb5b,	// (0x000b9622) popup_blid_sat_info2_window_t9

0xcb69,	// (0x000b9630) popup_blid_sat_info2_window_t10

0xcc31,	// (0x000b96f8) aid_firma_cardinal_ParamLimits

0xcc45,	// (0x000b970c) blid_firmament_pane_t1_ParamLimits

0xcc5c,	// (0x000b9723) blid_firmament_pane_t2_ParamLimits

0xcc73,	// (0x000b973a) blid_firmament_pane_t3_ParamLimits

0xcc8a,	// (0x000b9751) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x000bc19f) blid_firmament_pane_t_ParamLimits

0xcca1,	// (0x000b9768) blid_sat_info_pane_ParamLimits

0x95af,	// (0x000b6076) main_cam_set_pane_ParamLimits

0x511d,	// (0x000b1be4) aid_size_cell_colour_35_ParamLimits

0x513d,	// (0x000b1c04) aid_size_cell_colour_112_ParamLimits

0x515d,	// (0x000b1c24) aid_size_cell_effect_ParamLimits

0xc858,	// (0x000b931f) bg_tb_trans_pane_cp02_ParamLimits

0xaeeb,	// (0x000b79b2) heading_imed_pane_ParamLimits

0x517d,	// (0x000b1c44) listscroll_imed_pane_ParamLimits

0xbe7a,	// (0x000b8941) popup_call2_audio_first_window_g5_ParamLimits

0xbe7a,	// (0x000b8941) popup_call2_audio_first_window_g5

0x572e,	// (0x000b21f5) aid_size_touch_image3_arrow_left_ParamLimits

0x572e,	// (0x000b21f5) aid_size_touch_image3_arrow_left

0x575a,	// (0x000b2221) aid_size_touch_image3_arrow_right_ParamLimits

0x575a,	// (0x000b2221) aid_size_touch_image3_arrow_right

0xa43b,	// (0x000b6f02) vid4_progress_pane_t3

0x549c,	// (0x000b1f63) main_hwr_training_symbol_option_pane_ParamLimits

0x549c,	// (0x000b1f63) main_hwr_training_symbol_option_pane

0xd47d,	// (0x000b9f44) popup_hwr_training_preview_window_ParamLimits

0xd47d,	// (0x000b9f44) popup_hwr_training_preview_window

0x54bc,	// (0x000b1f83) hwr_training_navi_pane_g5_ParamLimits

0x54bc,	// (0x000b1f83) hwr_training_navi_pane_g5

0xd6a5,	// (0x000ba16c) popup_char_count_window

0xa20e,	// (0x000b6cd5) bg_popup_sub_pane_cp20_ParamLimits

0x674b,	// (0x000b3212) list_vitu2_match_list_pane_ParamLimits

0x675a,	// (0x000b3221) vitu2_page_scroll_pane_ParamLimits

0x675a,	// (0x000b3221) vitu2_page_scroll_pane

0xdb71,	// (0x000ba638) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb71,	// (0x000ba638) list_single_hwr_training_symbol_option_pane

0xdb84,	// (0x000ba64b) list_single_hwr_training_symbol_option_pane_g1

0xdb8c,	// (0x000ba653) list_single_hwr_training_symbol_option_pane_t1

0xdb9a,	// (0x000ba661) bg_button_pane_cp023

0xdba3,	// (0x000ba66a) bg_button_pane_cp024

0x6e3a,	// (0x000b3901) vitu2_page_scroll_pane_g1

0x6e42,	// (0x000b3909) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000bc593) vitu2_page_scroll_pane_g

0x6e4c,	// (0x000b3913) vitu2_page_scroll_pane_t1

0xc9f6,	// (0x000b94bd) popup_char_count_window_g1

0xdbd6,	// (0x000ba69d) popup_char_count_window_g2

0xdbdf,	// (0x000ba6a6) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000bc598) popup_char_count_window_g

0xdbe8,	// (0x000ba6af) popup_char_count_window_t1

0x955e,	// (0x000b6025) main_vded2_pane

0xd17a,	// (0x000b9c41) aid_size_cell_imed_line

0xd184,	// (0x000b9c4b) grid_imed_line_width_pane

0xa263,	// (0x000b6d2a) vid4_indicators_pane_g4

0xdbf6,	// (0x000ba6bd) cell_imed_line_width_pane_ParamLimits

0xdbf6,	// (0x000ba6bd) cell_imed_line_width_pane

0xdc0c,	// (0x000ba6d3) cell_imed_line_width_pane_g1

0xca78,	// (0x000b953f) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000bc59f) cell_imed_line_width_pane_g

0x6e5b,	// (0x000b3922) main_vded2_pane_g1_ParamLimits

0x6e5b,	// (0x000b3922) main_vded2_pane_g1

0x6e76,	// (0x000b393d) main_vded2_pane_g2_ParamLimits

0x6e76,	// (0x000b393d) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000bc5a4) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000bc5a4) main_vded2_pane_g

0x6e88,	// (0x000b394f) vded2_slider_pane_ParamLimits

0x6e88,	// (0x000b394f) vded2_slider_pane

0x6e98,	// (0x000b395f) aid_size_touch_vded2_end

0x6ea2,	// (0x000b3969) aid_size_touch_vded2_playhead

0xdc15,	// (0x000ba6dc) aid_size_touch_vded2_start

0xdc1d,	// (0x000ba6e4) vded2_slider_bg_pane

0xdc26,	// (0x000ba6ed) vded2_slider_pane_g1

0xdc2f,	// (0x000ba6f6) vded2_slider_pane_g2

0x6eac,	// (0x000b3973) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000bc5a9) vded2_slider_pane_g

0xdc37,	// (0x000ba6fe) vded2_slider_bg_pane_g1

0xdc40,	// (0x000ba707) vded2_slider_bg_pane_g2

0xdc49,	// (0x000ba710) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x000bc5b0) vded2_slider_bg_pane_g

0x2d92,	// (0x000af859) aid_postcard_touch_down_pane_ParamLimits

0x2d92,	// (0x000af859) aid_postcard_touch_down_pane

0x2daa,	// (0x000af871) aid_postcard_touch_up_pane_ParamLimits

0x2daa,	// (0x000af871) aid_postcard_touch_up_pane

0x955e,	// (0x000b6025) main_blid2_pane

0xc866,	// (0x000b932d) popup_blid2_search_window

0x955e,	// (0x000b6025) blid2_gps_pane

0x955e,	// (0x000b6025) blid2_navig_pane

0x955e,	// (0x000b6025) blid2_search_pane

0x955e,	// (0x000b6025) blid2_tripm_pane

0x6eb7,	// (0x000b397e) blid2_search_pane_g1_ParamLimits

0x6eb7,	// (0x000b397e) blid2_search_pane_g1

0x6eca,	// (0x000b3991) blid2_search_pane_t1_ParamLimits

0x6eca,	// (0x000b3991) blid2_search_pane_t1

0x6edc,	// (0x000b39a3) aid_size_cell_blid2_gps_ParamLimits

0x6edc,	// (0x000b39a3) aid_size_cell_blid2_gps

0x6ef4,	// (0x000b39bb) blid2_gps_pane_g1_ParamLimits

0x6ef4,	// (0x000b39bb) blid2_gps_pane_g1

0x6f08,	// (0x000b39cf) grid_blid2_satellite_pane_ParamLimits

0x6f08,	// (0x000b39cf) grid_blid2_satellite_pane

0x6f20,	// (0x000b39e7) blid2_navig_pane_g1_ParamLimits

0x6f20,	// (0x000b39e7) blid2_navig_pane_g1

0x6f2c,	// (0x000b39f3) blid2_navig_pane_t1_ParamLimits

0x6f2c,	// (0x000b39f3) blid2_navig_pane_t1

0x6f47,	// (0x000b3a0e) blid2_navig_pane_t2_ParamLimits

0x6f47,	// (0x000b3a0e) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x000bc5b7) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x000bc5b7) blid2_navig_pane_t

0x6f62,	// (0x000b3a29) blid2_navig_ring_pane_ParamLimits

0x6f62,	// (0x000b3a29) blid2_navig_ring_pane

0x6f7d,	// (0x000b3a44) blid2_speed_pane_ParamLimits

0x6f7d,	// (0x000b3a44) blid2_speed_pane

0x6f89,	// (0x000b3a50) blid2_tripm_pane_g1_ParamLimits

0x6f89,	// (0x000b3a50) blid2_tripm_pane_g1

0x6fa4,	// (0x000b3a6b) blid2_tripm_pane_g2_ParamLimits

0x6fa4,	// (0x000b3a6b) blid2_tripm_pane_g2

0x6fb8,	// (0x000b3a7f) blid2_tripm_pane_g3_ParamLimits

0x6fb8,	// (0x000b3a7f) blid2_tripm_pane_g3

0x6fcc,	// (0x000b3a93) blid2_tripm_pane_g4_ParamLimits

0x6fcc,	// (0x000b3a93) blid2_tripm_pane_g4

0x6fe0,	// (0x000b3aa7) blid2_tripm_pane_g5_ParamLimits

0x6fe0,	// (0x000b3aa7) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x000bc5bc) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x000bc5bc) blid2_tripm_pane_g

0x7006,	// (0x000b3acd) blid2_tripm_pane_t1_ParamLimits

0x7006,	// (0x000b3acd) blid2_tripm_pane_t1

0x701f,	// (0x000b3ae6) blid2_tripm_pane_t2_ParamLimits

0x701f,	// (0x000b3ae6) blid2_tripm_pane_t2

0x7038,	// (0x000b3aff) blid2_tripm_pane_t3_ParamLimits

0x7038,	// (0x000b3aff) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x000bc5c9) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x000bc5c9) blid2_tripm_pane_t

0x707f,	// (0x000b3b46) cell_blid2_satellite_pane_ParamLimits

0x707f,	// (0x000b3b46) cell_blid2_satellite_pane

0x709d,	// (0x000b3b64) cell_blid2_satellite_pane_g1

0xdc52,	// (0x000ba719) cell_blid2_satellite_pane_t1

0xccb1,	// (0x000b9778) blid2_speed_pane_g1

0xdc60,	// (0x000ba727) blid2_speed_pane_t1

0xdc6e,	// (0x000ba735) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x000bc5d2) blid2_speed_pane_t

0xccb1,	// (0x000b9778) blid2_navig_ring_pane_g1

0x70a6,	// (0x000b3b6d) blid2_navig_ring_pane_g2

0x70ae,	// (0x000b3b75) blid2_navig_ring_pane_g3

0x70b6,	// (0x000b3b7d) blid2_navig_ring_pane_g4

0x70be,	// (0x000b3b85) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x000bc5d7) blid2_navig_ring_pane_g

0x955e,	// (0x000b6025) bg_popup_window_pane_cp011

0xdc7c,	// (0x000ba743) popup_blid2_search_window_g1

0xdc84,	// (0x000ba74b) popup_blid2_search_window_t1

0xdc92,	// (0x000ba759) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x000bc5e2) popup_blid2_search_window_t

0xaba1,	// (0x000b7668) main_browser_pane_g1

0xa889,	// (0x000b7350) main_browser_pane_ParamLimits

0xa20e,	// (0x000b6cd5) bg_button_pane_cp011_ParamLimits

0x5fa3,	// (0x000b2a6a) cell_vitu2_function_pane_g1_ParamLimits

0xc858,	// (0x000b931f) bg_popup_sub_pane_cp22_ParamLimits

0x6934,	// (0x000b33fb) input_focus_pane_cp08_ParamLimits

0x694b,	// (0x000b3412) popup_vitu2_query_button_pane_ParamLimits

0x694b,	// (0x000b3412) popup_vitu2_query_button_pane

0x695c,	// (0x000b3423) popup_vitu2_query_input_button_pane

0xd91c,	// (0x000ba3e3) popup_vitu2_query_window_g1_ParamLimits

0x6966,	// (0x000b342d) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000bc4e3) popup_vitu2_query_window_g_ParamLimits

0x955e,	// (0x000b6025) bg_button_pane_cp026

0x70c6,	// (0x000b3b8d) popup_vitu2_query_input_button_pane_g1

0x955e,	// (0x000b6025) bg_button_pane_cp025

0xdca0,	// (0x000ba767) popup_vitu2_query_button_pane_t1

0x44b6,	// (0x000b0f7d) main_mp3_pane_t6

0x44c4,	// (0x000b0f8b) popup_slider_window_cp01

0xa1b9,	// (0x000b6c80) cam4_battery_pane

0xa21c,	// (0x000b6ce3) cam4_battery_pane_cp02

0xa3ea,	// (0x000b6eb1) cam4_battery_pane_cp01

0xa3ea,	// (0x000b6eb1) cam4_battery_pane_cp03

0xd57b,	// (0x000ba042) cam4_battery_pane_g1

0xccb1,	// (0x000b9778) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x000bc5e7) cam4_battery_pane_g

0xcb77,	// (0x000b963e) popup_blid_sat_info2_window_t11

0x269c,	// (0x000af163) aid_size_touch_mv_arrow_left_ParamLimits

0x26c5,	// (0x000af18c) aid_size_touch_mv_arrow_right_ParamLimits

0xb2eb,	// (0x000b7db2) navi_pane_g1_ParamLimits

0x2704,	// (0x000af1cb) navi_pane_g2_ParamLimits

0x2732,	// (0x000af1f9) navi_pane_g3_ParamLimits

0xf3ea,	// (0x000bbeb1) navi_pane_g_ParamLimits

0x278c,	// (0x000af253) navi_pane_mv_t1_ParamLimits

0x5189,	// (0x000b1c50) grid_imed_effect_pane_ParamLimits

0x1146,	// (0x000adc0d) aid_placing_vt_slider_lsc

0xaaec,	// (0x000b75b3) aid_placing_vt_slider_prt

0x95af,	// (0x000b6076) bg_tb_trans_pane_cp01_ParamLimits

0xce01,	// (0x000b98c8) popup_image_details_window_g1_ParamLimits

0xce14,	// (0x000b98db) popup_image_details_window_g2_ParamLimits

0xce29,	// (0x000b98f0) popup_image_details_window_g3_ParamLimits

0xce29,	// (0x000b98f0) popup_image_details_window_g3

0xf71d,	// (0x000bc1e4) popup_image_details_window_g_ParamLimits

0xce3d,	// (0x000b9904) popup_image_details_window_t1_ParamLimits

0xce4f,	// (0x000b9916) popup_image_details_window_t2_ParamLimits

0xce68,	// (0x000b992f) popup_image_details_window_t3_ParamLimits

0xce7c,	// (0x000b9943) popup_image_details_window_t4_ParamLimits

0xce97,	// (0x000b995e) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x000bc1eb) popup_image_details_window_t_ParamLimits

0x6cea,	// (0x000b37b1) cl_header_name_pane_ParamLimits

0x6cea,	// (0x000b37b1) cl_header_name_pane

0x70ce,	// (0x000b3b95) cl_header_name_pane_t1_ParamLimits

0x70ce,	// (0x000b3b95) cl_header_name_pane_t1

0x70ef,	// (0x000b3bb6) cl_header_name_pane_t2_ParamLimits

0x70ef,	// (0x000b3bb6) cl_header_name_pane_t2

0x7131,	// (0x000b3bf8) cl_header_name_pane_t3_ParamLimits

0x7131,	// (0x000b3bf8) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x000bc5ec) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x000bc5ec) cl_header_name_pane_t

0x275d,	// (0x000af224) navi_pane_mv_g2_ParamLimits

0xd67f,	// (0x000ba146) field_vitu2_entry_pane_g1_ParamLimits

0xd68b,	// (0x000ba152) field_vitu2_entry_pane_g2_ParamLimits

0xd697,	// (0x000ba15e) field_vitu2_entry_pane_g3_ParamLimits

0xd697,	// (0x000ba15e) field_vitu2_entry_pane_g3

0xf91b,	// (0x000bc3e2) field_vitu2_entry_pane_g_ParamLimits

0x5f1a,	// (0x000b29e1) cell_vitu2_itu_pane_g1_ParamLimits

0x5f2a,	// (0x000b29f1) cell_vitu2_itu_pane_g2_ParamLimits

0x5f2a,	// (0x000b29f1) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000bc3ee) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000bc3ee) cell_vitu2_itu_pane_g

0xa20e,	// (0x000b6cd5) bg_vkb2_func_pane_cp05_ParamLimits

0xa20e,	// (0x000b6cd5) bg_vkb2_func_pane_cp05

0xa20e,	// (0x000b6cd5) bg_vkb2_func_pane_cp03

0xa20e,	// (0x000b6cd5) bg_vkb2_func_pane_cp04

0xa20e,	// (0x000b6cd5) bg_vkb2_func_pane_cp10_ParamLimits

0xa20e,	// (0x000b6cd5) bg_vkb2_func_pane_cp10

0x6c8c,	// (0x000b3753) bg_vkb2_func_pane_cp08

0x6c72,	// (0x000b3739) bg_vkb2_func_pane_cp06

0x6c80,	// (0x000b3747) bg_vkb2_func_pane_cp07

0xdbac,	// (0x000ba673) bg_vkb2_func_pane_cp11_ParamLimits

0xdbac,	// (0x000ba673) bg_vkb2_func_pane_cp11

0xdbc1,	// (0x000ba688) bg_vkb2_func_pane_cp12_ParamLimits

0xdbc1,	// (0x000ba688) bg_vkb2_func_pane_cp12

0x955e,	// (0x000b6025) bg_vkb2_func_pane_cp09

0xd6b7,	// (0x000ba17e) bg_vkb2_func_pane_g1

0xacb2,	// (0x000b7779) bg_vkb2_func_pane_g2

0xd6bf,	// (0x000ba186) bg_vkb2_func_pane_g3

0xd6c7,	// (0x000ba18e) bg_vkb2_func_pane_g4

0xd8e1,	// (0x000ba3a8) bg_vkb2_func_pane_g5

0xd6df,	// (0x000ba1a6) bg_vkb2_func_pane_g6

0xd6e7,	// (0x000ba1ae) bg_vkb2_func_pane_g7

0xd6d7,	// (0x000ba19e) bg_vkb2_func_pane_g8

0xac92,	// (0x000b7759) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x000bc5f3) bg_vkb2_func_pane_g

0x6ff4,	// (0x000b3abb) blid2_tripm_pane_g6_ParamLimits

0x6ff4,	// (0x000b3abb) blid2_tripm_pane_g6

0xd535,	// (0x000b9ffc) mp4_progress_pane_g1

0x706b,	// (0x000b3b32) blid2_tripm_values_pane_ParamLimits

0x706b,	// (0x000b3b32) blid2_tripm_values_pane

0x7162,	// (0x000b3c29) blid2_tripm_values_pane_t1

0x7170,	// (0x000b3c37) blid2_tripm_values_pane_t2

0x717e,	// (0x000b3c45) blid2_tripm_values_pane_t3

0x718c,	// (0x000b3c53) blid2_tripm_values_pane_t4

0x719a,	// (0x000b3c61) blid2_tripm_values_pane_t5

0x71a8,	// (0x000b3c6f) blid2_tripm_values_pane_t6

0x71b6,	// (0x000b3c7d) blid2_tripm_values_pane_t7

0x71c4,	// (0x000b3c8b) blid2_tripm_values_pane_t8

0x71d2,	// (0x000b3c99) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x000bc606) blid2_tripm_values_pane_t

0x1183,	// (0x000adc4a) call_video_pane_t1_ParamLimits

0x119d,	// (0x000adc64) call_video_pane_t2_ParamLimits

0xf273,	// (0x000bbd3a) call_video_pane_t_ParamLimits

0x2cdf,	// (0x000af7a6) msg_header_pane_g1_ParamLimits

0xb50d,	// (0x000b7fd4) msg_header_pane_g2_ParamLimits

0xb50d,	// (0x000b7fd4) msg_header_pane_g2

0x0001,

0xf48d,	// (0x000bbf54) msg_header_pane_g_ParamLimits

0xf48d,	// (0x000bbf54) msg_header_pane_g

0xa889,	// (0x000b7350) main_clock2_pane_ParamLimits

0x4e70,	// (0x000b1937) grid_clock2_toolbar_pane_ParamLimits

0x4e70,	// (0x000b1937) grid_clock2_toolbar_pane

0x4e70,	// (0x000b1937) listscroll_clock2_pane_ParamLimits

0x4e70,	// (0x000b1937) listscroll_clock2_pane

0x4f67,	// (0x000b1a2e) main_clock2_pane_t3_ParamLimits

0x4f67,	// (0x000b1a2e) main_clock2_pane_t3

0x4f8b,	// (0x000b1a52) main_clock2_pane_t4_ParamLimits

0x4f8b,	// (0x000b1a52) main_clock2_pane_t4

0xdcae,	// (0x000ba775) cell_clock2_toolbar_pane

0xdcb6,	// (0x000ba77d) cell_clock2_toolbar_pane_cp01

0xdcb6,	// (0x000ba77d) cell_clock2_toolbar_pane_cp02

0xdcbe,	// (0x000ba785) cell_clock2_toolbar_pane_cp03

0xdcc6,	// (0x000ba78d) list_clock2_pane

0xb251,	// (0x000b7d18) scroll_pane_cp10

0xdcce,	// (0x000ba795) list_single_clock2_pane_ParamLimits

0xdcce,	// (0x000ba795) list_single_clock2_pane

0xb38b,	// (0x000b7e52) list_highlight_pane_cp08

0xdcdb,	// (0x000ba7a2) list_single_clock2_pane_t1

0xdce9,	// (0x000ba7b0) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x000bc619) list_single_clock2_pane_t

0x955e,	// (0x000b6025) bg_button_pane_cp10

0xdcf7,	// (0x000ba7be) cell_clock2_toolbar_pane_g1

0x2d1e,	// (0x000af7e5) aid_main_viewer_pane_g1_ParamLimits

0x2d1e,	// (0x000af7e5) aid_main_viewer_pane_g1

0x2d2c,	// (0x000af7f3) aid_main_viewer_pane_g2_ParamLimits

0x2d2c,	// (0x000af7f3) aid_main_viewer_pane_g2

0x2d3a,	// (0x000af801) aid_main_viewer_pane_g3_ParamLimits

0x2d3a,	// (0x000af801) aid_main_viewer_pane_g3

0x2d49,	// (0x000af810) aid_main_viewer_pane_g4_ParamLimits

0x2d49,	// (0x000af810) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x000bbf65) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x000bbf65) aid_main_viewer_pane_g

0x369c,	// (0x000b0163) main_calc_pane_ParamLimits

0x36b0,	// (0x000b0177) main_dialer2_pane_ParamLimits

0x955e,	// (0x000b6025) main_cam6_pane

0x955e,	// (0x000b6025) main_vid6_pane

0x4e7c,	// (0x000b1943) listscroll_gen_pane_cp06_ParamLimits

0x4e7c,	// (0x000b1943) listscroll_gen_pane_cp06

0x4fae,	// (0x000b1a75) main_clock2_pane_t5_ParamLimits

0x4fae,	// (0x000b1a75) main_clock2_pane_t5

0x500e,	// (0x000b1ad5) aid_call2_pane_cp10_ParamLimits

0x5020,	// (0x000b1ae7) aid_call_pane_cp10_ParamLimits

0xb2c0,	// (0x000b7d87) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2c0,	// (0x000b7d87) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5032,	// (0x000b1af9) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5032,	// (0x000b1af9) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2c0,	// (0x000b7d87) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x000bc29b) popup_clock_analogue_window_cp10_g_ParamLimits

0x5048,	// (0x000b1b0f) popup_clock_analogue_window_cp10_t1_ParamLimits

0x56db,	// (0x000b21a2) cell_dialer2_keypad_pane_g2_ParamLimits

0x56db,	// (0x000b21a2) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000bc381) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000bc381) cell_dialer2_keypad_pane_g

0x56f7,	// (0x000b21be) cell_dialer2_keypad_pane_t1

0x62cc,	// (0x000b2d93) main_cset_text2_pane_ParamLimits

0x62cc,	// (0x000b2d93) main_cset_text2_pane

0xdb14,	// (0x000ba5db) area_vitu2_query_pane_g1_ParamLimits

0x6c0f,	// (0x000b36d6) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000bc536) area_vitu2_query_pane_g_ParamLimits

0xa3c6,	// (0x000b6e8d) area_vitu2_query_pane_t7_ParamLimits

0xa3c6,	// (0x000b6e8d) area_vitu2_query_pane_t7

0x6c72,	// (0x000b3739) bg_button_pane_cp018_ParamLimits

0x6c80,	// (0x000b3747) bg_button_pane_cp021_ParamLimits

0x6c8c,	// (0x000b3753) bg_button_pane_cp022_ParamLimits

0x6c8c,	// (0x000b3753) bg_vkb2_func_pane_cp08_ParamLimits

0x6c72,	// (0x000b3739) bg_vkb2_func_pane_cp06_ParamLimits

0x6c80,	// (0x000b3747) bg_vkb2_func_pane_cp07_ParamLimits

0x6c9d,	// (0x000b3764) input_focus_pane_cp09_ParamLimits

0xa47e,	// (0x000b6f45) cam6_autofocus_pane_ParamLimits

0xa47e,	// (0x000b6f45) cam6_autofocus_pane

0x71e0,	// (0x000b3ca7) cam6_image_uncrop_pane_ParamLimits

0x71e0,	// (0x000b3ca7) cam6_image_uncrop_pane

0x71ef,	// (0x000b3cb6) cam6_indi_pane_ParamLimits

0x71ef,	// (0x000b3cb6) cam6_indi_pane

0x7205,	// (0x000b3ccc) cam6_mode_pane_ParamLimits

0x7205,	// (0x000b3ccc) cam6_mode_pane

0x7217,	// (0x000b3cde) cam6_timer_pane_ParamLimits

0x7217,	// (0x000b3cde) cam6_timer_pane

0x7223,	// (0x000b3cea) cam6_zoom_pane_ParamLimits

0x7223,	// (0x000b3cea) cam6_zoom_pane

0x7231,	// (0x000b3cf8) cam6_mode_pane_g1_ParamLimits

0x7231,	// (0x000b3cf8) cam6_mode_pane_g1

0x7241,	// (0x000b3d08) cam6_mode_pane_g2_ParamLimits

0x7241,	// (0x000b3d08) cam6_mode_pane_g2

0x7251,	// (0x000b3d18) cam6_mode_pane_g3_ParamLimits

0x7251,	// (0x000b3d18) cam6_mode_pane_g3

0x7261,	// (0x000b3d28) cam6_mode_pane_g4_ParamLimits

0x7261,	// (0x000b3d28) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x000bc61e) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x000bc61e) cam6_mode_pane_g

0xdcff,	// (0x000ba7c6) bg_tb_trans_pane_cp08_ParamLimits

0xdcff,	// (0x000ba7c6) bg_tb_trans_pane_cp08

0xdd0d,	// (0x000ba7d4) cam6_battery_pane_ParamLimits

0xdd0d,	// (0x000ba7d4) cam6_battery_pane

0xdd23,	// (0x000ba7ea) cam6_indi_pane_g1_ParamLimits

0xdd23,	// (0x000ba7ea) cam6_indi_pane_g1

0xdd35,	// (0x000ba7fc) cam6_indi_pane_g2_ParamLimits

0xdd35,	// (0x000ba7fc) cam6_indi_pane_g2

0xdd47,	// (0x000ba80e) cam6_indi_pane_g3_ParamLimits

0xdd47,	// (0x000ba80e) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x000bc627) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x000bc627) cam6_indi_pane_g

0xdd59,	// (0x000ba820) cam6_indi_pane_t1_ParamLimits

0xdd59,	// (0x000ba820) cam6_indi_pane_t1

0x5cc0,	// (0x000b2787) cam6_autofocus_pane_g1

0x5cb8,	// (0x000b277f) cam6_autofocus_pane_g2

0x5cd0,	// (0x000b2797) cam6_autofocus_pane_g3

0x5cc8,	// (0x000b278f) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x000bc62e) cam6_autofocus_pane_g

0xdd7f,	// (0x000ba846) cam6_timer_pane_g1

0xdd87,	// (0x000ba84e) cam6_timer_pane_t1

0xdd95,	// (0x000ba85c) cam6_zoom_cont_pane

0xdd9d,	// (0x000ba864) cam6_zoom_pane_g1

0xdda5,	// (0x000ba86c) cam6_zoom_pane_g2

0x7271,	// (0x000b3d38) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x000bc637) cam6_zoom_pane_g

0xccb1,	// (0x000b9778) cam6_battery_pane_g1

0xccb1,	// (0x000b9778) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x000bc1a8) cam6_battery_pane_g

0xddad,	// (0x000ba874) cam6_zoom_cont_pane_g1

0xddb6,	// (0x000ba87d) cam6_zoom_cont_pane_g2

0xddbf,	// (0x000ba886) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x000bc63e) cam6_zoom_cont_pane_g

0x728e,	// (0x000b3d55) cam6_mode_pane_cp_ParamLimits

0x728e,	// (0x000b3d55) cam6_mode_pane_cp

0x72a0,	// (0x000b3d67) cam6_zoom_pane_cp_ParamLimits

0x72a0,	// (0x000b3d67) cam6_zoom_pane_cp

0x72ae,	// (0x000b3d75) vid6_image_uncrop_cif_pane_ParamLimits

0x72ae,	// (0x000b3d75) vid6_image_uncrop_cif_pane

0x72be,	// (0x000b3d85) vid6_image_uncrop_nhd_pane_ParamLimits

0x72be,	// (0x000b3d85) vid6_image_uncrop_nhd_pane

0x72cd,	// (0x000b3d94) vid6_image_uncrop_vga_pane_ParamLimits

0x72cd,	// (0x000b3d94) vid6_image_uncrop_vga_pane

0x72dc,	// (0x000b3da3) vid6_image_uncrop_wvga_pane_ParamLimits

0x72dc,	// (0x000b3da3) vid6_image_uncrop_wvga_pane

0x72eb,	// (0x000b3db2) vid6_indi_pane_ParamLimits

0x72eb,	// (0x000b3db2) vid6_indi_pane

0xdcff,	// (0x000ba7c6) bg_tb_trans_pane_cp09_ParamLimits

0xdcff,	// (0x000ba7c6) bg_tb_trans_pane_cp09

0xddd7,	// (0x000ba89e) cam6_battery_pane_cp_ParamLimits

0xddd7,	// (0x000ba89e) cam6_battery_pane_cp

0xdde3,	// (0x000ba8aa) vid6_indi_pane_g1_ParamLimits

0xdde3,	// (0x000ba8aa) vid6_indi_pane_g1

0xddf5,	// (0x000ba8bc) vid6_indi_pane_g2_ParamLimits

0xddf5,	// (0x000ba8bc) vid6_indi_pane_g2

0xde07,	// (0x000ba8ce) vid6_indi_pane_g3_ParamLimits

0xde07,	// (0x000ba8ce) vid6_indi_pane_g3

0xde1e,	// (0x000ba8e5) vid6_indi_pane_g4_ParamLimits

0xde1e,	// (0x000ba8e5) vid6_indi_pane_g4

0xde35,	// (0x000ba8fc) vid6_indi_pane_g5_ParamLimits

0xde35,	// (0x000ba8fc) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x000bc645) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x000bc645) vid6_indi_pane_g

0xde4f,	// (0x000ba916) vid6_indi_pane_t1_ParamLimits

0xde4f,	// (0x000ba916) vid6_indi_pane_t1

0xde65,	// (0x000ba92c) vid6_indi_pane_t2_ParamLimits

0xde65,	// (0x000ba92c) vid6_indi_pane_t2

0xde8d,	// (0x000ba954) vid6_indi_pane_t3_ParamLimits

0xde8d,	// (0x000ba954) vid6_indi_pane_t3

0xdeb5,	// (0x000ba97c) vid6_indi_pane_t4_ParamLimits

0xdeb5,	// (0x000ba97c) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x000bc650) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x000bc650) vid6_indi_pane_t

0xded9,	// (0x000ba9a0) wait_bar_pane_cp08

0x7303,	// (0x000b3dca) main_cset_text2_pane_t1_ParamLimits

0x7303,	// (0x000b3dca) main_cset_text2_pane_t1

0x7279,	// (0x000b3d40) listscroll_gen_pane_cp06_t1_ParamLimits

0x7279,	// (0x000b3d40) listscroll_gen_pane_cp06_t1

0x955e,	// (0x000b6025) main_cam6_set_pane

0xa1ab,	// (0x000b6c72) bg_tb_trans_pane_cp06_ParamLimits

0xa1c1,	// (0x000b6c88) cam4_indicators_pane_g1_ParamLimits

0xa1d2,	// (0x000b6c99) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000bc3be) cam4_indicators_pane_g_ParamLimits

0xa1ea,	// (0x000b6cb1) cam4_indicators_pane_t1_ParamLimits

0xa20e,	// (0x000b6cd5) bg_tb_trans_pane_cp07_ParamLimits

0xa226,	// (0x000b6ced) vid4_indicators_pane_g1_ParamLimits

0xa23c,	// (0x000b6d03) vid4_indicators_pane_g2_ParamLimits

0xa250,	// (0x000b6d17) vid4_indicators_pane_g3_ParamLimits

0xa263,	// (0x000b6d2a) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000bc3d0) vid4_indicators_pane_g_ParamLimits

0xa281,	// (0x000b6d48) vid4_indicators_pane_t1_ParamLimits

0x6dde,	// (0x000b38a5) vid4_progress_pane_g1_ParamLimits

0x6df0,	// (0x000b38b7) vid4_progress_pane_g2_ParamLimits

0x9e3e,	// (0x000b6905) vid4_progress_pane_g3_ParamLimits

0xa3f2,	// (0x000b6eb9) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000bc581) vid4_progress_pane_g_ParamLimits

0xa410,	// (0x000b6ed7) vid4_progress_pane_t1_ParamLimits

0xa425,	// (0x000b6eec) vid4_progress_pane_t2_ParamLimits

0xa43b,	// (0x000b6f02) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000bc58c) vid4_progress_pane_t_ParamLimits

0xa450,	// (0x000b6f17) wait_bar_pane_cp07_ParamLimits

0x7321,	// (0x000b3de8) main_cam6_set_pane_g2_ParamLimits

0x7321,	// (0x000b3de8) main_cam6_set_pane_g2

0x7347,	// (0x000b3e0e) main_cset6_listscroll_pane_ParamLimits

0x7347,	// (0x000b3e0e) main_cset6_listscroll_pane

0x7365,	// (0x000b3e2c) main_cset6_slider_pane_ParamLimits

0x7365,	// (0x000b3e2c) main_cset6_slider_pane

0x737b,	// (0x000b3e42) main_cset6_text2_pane_ParamLimits

0x737b,	// (0x000b3e42) main_cset6_text2_pane

0xdee8,	// (0x000ba9af) main_cset6_text_pane

0xdef0,	// (0x000ba9b7) main_cset_list_pane_copy1_ParamLimits

0xdef0,	// (0x000ba9b7) main_cset_list_pane_copy1

0xdf00,	// (0x000ba9c7) scroll_pane_cp028_copy1

0x2248,	// (0x000aed0f) cset_list_set_pane_copy1

0x7389,	// (0x000b3e50) aid_position_infowindow_above_copy1

0x7391,	// (0x000b3e58) aid_position_infowindow_below_copy1

0x7399,	// (0x000b3e60) cset_list_set_pane_g1_copy1

0x73a1,	// (0x000b3e68) cset_list_set_pane_g3_copy1_ParamLimits

0x73a1,	// (0x000b3e68) cset_list_set_pane_g3_copy1

0x73b0,	// (0x000b3e77) cset_list_set_pane_t1_copy1_ParamLimits

0x73b0,	// (0x000b3e77) cset_list_set_pane_t1_copy1

0x95af,	// (0x000b6076) list_highlight_pane_cp021_copy1_ParamLimits

0x95af,	// (0x000b6076) list_highlight_pane_cp021_copy1

0xdf09,	// (0x000ba9d0) cset6_slider_pane_ParamLimits

0xdf09,	// (0x000ba9d0) cset6_slider_pane

0xdf35,	// (0x000ba9fc) main_cset6_slider_pane_g1_ParamLimits

0xdf35,	// (0x000ba9fc) main_cset6_slider_pane_g1

0x73c5,	// (0x000b3e8c) main_cset6_slider_pane_g2_ParamLimits

0x73c5,	// (0x000b3e8c) main_cset6_slider_pane_g2

0xdf5d,	// (0x000baa24) main_cset6_slider_pane_g3_ParamLimits

0xdf5d,	// (0x000baa24) main_cset6_slider_pane_g3

0x73ed,	// (0x000b3eb4) main_cset6_slider_pane_g4_ParamLimits

0x73ed,	// (0x000b3eb4) main_cset6_slider_pane_g4

0x73f9,	// (0x000b3ec0) main_cset6_slider_pane_g5_ParamLimits

0x73f9,	// (0x000b3ec0) main_cset6_slider_pane_g5

0xd7ea,	// (0x000ba2b1) main_cset6_slider_pane_g7_ParamLimits

0xd7ea,	// (0x000ba2b1) main_cset6_slider_pane_g7

0xd7f6,	// (0x000ba2bd) main_cset6_slider_pane_g8_ParamLimits

0xd7f6,	// (0x000ba2bd) main_cset6_slider_pane_g8

0x637b,	// (0x000b2e42) main_cset6_slider_pane_g9_ParamLimits

0x637b,	// (0x000b2e42) main_cset6_slider_pane_g9

0x6387,	// (0x000b2e4e) main_cset6_slider_pane_g10_ParamLimits

0x6387,	// (0x000b2e4e) main_cset6_slider_pane_g10

0x6393,	// (0x000b2e5a) main_cset6_slider_pane_g11_ParamLimits

0x6393,	// (0x000b2e5a) main_cset6_slider_pane_g11

0x639f,	// (0x000b2e66) main_cset6_slider_pane_g12_ParamLimits

0x639f,	// (0x000b2e66) main_cset6_slider_pane_g12

0x63ab,	// (0x000b2e72) main_cset6_slider_pane_g13_ParamLimits

0x63ab,	// (0x000b2e72) main_cset6_slider_pane_g13

0x63b7,	// (0x000b2e7e) main_cset6_slider_pane_g14_ParamLimits

0x63b7,	// (0x000b2e7e) main_cset6_slider_pane_g14

0x7407,	// (0x000b3ece) main_cset6_slider_pane_g15_ParamLimits

0x7407,	// (0x000b3ece) main_cset6_slider_pane_g15

0x63db,	// (0x000b2ea2) main_cset6_slider_pane_g16_ParamLimits

0x63db,	// (0x000b2ea2) main_cset6_slider_pane_g16

0x63e9,	// (0x000b2eb0) main_cset6_slider_pane_g17_ParamLimits

0x63e9,	// (0x000b2eb0) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x000bc659) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x000bc659) main_cset6_slider_pane_g

0xdf69,	// (0x000baa30) main_cset6_slider_pane_t1_ParamLimits

0xdf69,	// (0x000baa30) main_cset6_slider_pane_t1

0x7437,	// (0x000b3efe) main_cset6_slider_pane_t2_ParamLimits

0x7437,	// (0x000b3efe) main_cset6_slider_pane_t2

0x7462,	// (0x000b3f29) main_cset6_slider_pane_t3_ParamLimits

0x7462,	// (0x000b3f29) main_cset6_slider_pane_t3

0x748d,	// (0x000b3f54) main_cset6_slider_pane_t4_ParamLimits

0x748d,	// (0x000b3f54) main_cset6_slider_pane_t4

0x74b8,	// (0x000b3f7f) main_cset6_slider_pane_t5_ParamLimits

0x74b8,	// (0x000b3f7f) main_cset6_slider_pane_t5

0xdfaa,	// (0x000baa71) main_cset6_slider_pane_t7_ParamLimits

0xdfaa,	// (0x000baa71) main_cset6_slider_pane_t7

0x74e5,	// (0x000b3fac) main_cset6_slider_pane_t8_ParamLimits

0x74e5,	// (0x000b3fac) main_cset6_slider_pane_t8

0x7509,	// (0x000b3fd0) main_cset6_slider_pane_t9_ParamLimits

0x7509,	// (0x000b3fd0) main_cset6_slider_pane_t9

0x752d,	// (0x000b3ff4) main_cset6_slider_pane_t10_ParamLimits

0x752d,	// (0x000b3ff4) main_cset6_slider_pane_t10

0x7551,	// (0x000b4018) main_cset6_slider_pane_t11_ParamLimits

0x7551,	// (0x000b4018) main_cset6_slider_pane_t11

0xdfe0,	// (0x000baaa7) main_cset6_slider_pane_t14_ParamLimits

0xdfe0,	// (0x000baaa7) main_cset6_slider_pane_t14

0xe019,	// (0x000baae0) main_cset6_slider_pane_t15_ParamLimits

0xe019,	// (0x000baae0) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x000bc67e) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x000bc67e) main_cset6_slider_pane_t

0xe052,	// (0x000bab19) cset_slider_pane_g1_copy1

0xe05b,	// (0x000bab22) cset_slider_pane_g2_copy1

0xe064,	// (0x000bab2b) cset_slider_pane_g3_copy1

0x955e,	// (0x000b6025) bg_popup_sub_pane_cp011_copy1

0xe06d,	// (0x000bab34) main_cset_text_pane_g1_copy1

0xd930,	// (0x000ba3f7) main_cset_text_pane_t1_copy1

0xd93e,	// (0x000ba405) main_cset_text_pane_t2_copy1

0xd94c,	// (0x000ba413) main_cset_text_pane_t3_copy1

0xd95a,	// (0x000ba421) main_cset_text_pane_t4_copy1

0xd968,	// (0x000ba42f) main_cset_text_pane_t5_copy1

0xe075,	// (0x000bab3c) main_cset_text_pane_t6_copy1

0xe083,	// (0x000bab4a) main_cset_text_pane_t7_copy1

0x7303,	// (0x000b3dca) main_cset_text2_pane_t1_copy1

0x95af,	// (0x000b6076) main_ncimui_pane

0x393e,	// (0x000b0405) popup_query_ncimui_window_ParamLimits

0x393e,	// (0x000b0405) popup_query_ncimui_window

0xba79,	// (0x000b8540) field_cale_ev2_pane_g4_ParamLimits

0xba79,	// (0x000b8540) field_cale_ev2_pane_g4

0x55ad,	// (0x000b2074) cell_video_dialer_keypad_pane_g2_ParamLimits

0x55ad,	// (0x000b2074) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000bc35c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000bc35c) cell_video_dialer_keypad_pane_g

0x55c5,	// (0x000b208c) cell_video_dialer_keypad_pane_t1

0x955e,	// (0x000b6025) bg_popup_window_pane_cp012

0xb13d,	// (0x000b7c04) heading_pane_cp06

0xe0af,	// (0x000bab76) ncim_query_content_pane

0x955e,	// (0x000b6025) bg_popup_heading_pane_cp01

0xe0b7,	// (0x000bab7e) ncim_heading_pane_t1

0xe0c5,	// (0x000bab8c) ncim_indicator_popup_pane

0xe0d7,	// (0x000bab9e) ncim_query_button_pane

0xe0ed,	// (0x000babb4) ncim_query_content_pane_t1

0xe0ff,	// (0x000babc6) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x000bc6c2) ncim_query_content_pane_t

0xe139,	// (0x000bac00) ncim_query_list_pane

0xe14b,	// (0x000bac12) ncim_query_popup_pane

0xe0c5,	// (0x000bab8c) ncim_indicator_popup_pane_ParamLimits

0x776c,	// (0x000b4233) ncim_query_content_pane_g1_ParamLimits

0x776c,	// (0x000b4233) ncim_query_content_pane_g1

0xe0ed,	// (0x000babb4) ncim_query_content_pane_t1_ParamLimits

0xe0ff,	// (0x000babc6) ncim_query_content_pane_t2_ParamLimits

0x7778,	// (0x000b423f) ncim_query_content_pane_t3_ParamLimits

0x7778,	// (0x000b423f) ncim_query_content_pane_t3

0x77a0,	// (0x000b4267) ncim_query_content_pane_t4_ParamLimits

0x77a0,	// (0x000b4267) ncim_query_content_pane_t4

0x77c8,	// (0x000b428f) ncim_query_content_pane_t5_ParamLimits

0x77c8,	// (0x000b428f) ncim_query_content_pane_t5

0xe111,	// (0x000babd8) ncim_query_content_pane_t6_ParamLimits

0xe111,	// (0x000babd8) ncim_query_content_pane_t6

0xfbfb,	// (0x000bc6c2) ncim_query_content_pane_t_ParamLimits

0xe139,	// (0x000bac00) ncim_query_list_pane_ParamLimits

0xe14b,	// (0x000bac12) ncim_query_popup_pane_ParamLimits

0xe15f,	// (0x000bac26) wait_bar_pane_cp04

0x955e,	// (0x000b6025) input_focus_pane_cp011

0xe167,	// (0x000bac2e) ncim_query_popup_pane_t1

0xe175,	// (0x000bac3c) ncim_list_query_list_pane_ParamLimits

0xe175,	// (0x000bac3c) ncim_list_query_list_pane

0x955e,	// (0x000b6025) bg_button_pane_cp027

0xe188,	// (0x000bac4f) ncim_query_button_pane_g1

0x955e,	// (0x000b6025) list_highlight_pane_cp012

0xe192,	// (0x000bac59) ncim_list_query_list_pane_g1

0xe19a,	// (0x000bac61) ncim_list_query_list_pane_t1

0xa1de,	// (0x000b6ca5) cam4_indicators_pane_g3_ParamLimits

0xa1de,	// (0x000b6ca5) cam4_indicators_pane_g3

0xa26f,	// (0x000b6d36) vid4_indicators_pane_g5_ParamLimits

0xa26f,	// (0x000b6d36) vid4_indicators_pane_g5

0xa401,	// (0x000b6ec8) vid4_progress_pane_g5_ParamLimits

0xa401,	// (0x000b6ec8) vid4_progress_pane_g5

0x765a,	// (0x000b4121) main_ncimui_pane_g1

0x76c0,	// (0x000b4187) ncimui_group_query_pane_ParamLimits

0x76c0,	// (0x000b4187) ncimui_group_query_pane

0x7708,	// (0x000b41cf) ncimui_list_pane_ParamLimits

0x7708,	// (0x000b41cf) ncimui_list_pane

0x772f,	// (0x000b41f6) ncimui_text_pane_ParamLimits

0x772f,	// (0x000b41f6) ncimui_text_pane

0x77f0,	// (0x000b42b7) ncimui_text_pane_t1_ParamLimits

0x77f0,	// (0x000b42b7) ncimui_text_pane_t1

0xe1a8,	// (0x000bac6f) ncimui_list_single_graphic_pane_ParamLimits

0xe1a8,	// (0x000bac6f) ncimui_list_single_graphic_pane

0x780e,	// (0x000b42d5) ncimui_query_pane_ParamLimits

0x780e,	// (0x000b42d5) ncimui_query_pane

0x955e,	// (0x000b6025) list_highlight_pane_cp013

0xe1b8,	// (0x000bac7f) ncim_list_query_list_pane_t1_copy1

0xe192,	// (0x000bac59) ncim_list_single_graphic_pane_g1

0xe1c6,	// (0x000bac8d) ncim_query_button_pane_cp01

0xe1d2,	// (0x000bac99) ncim_query_entry_pane_ParamLimits

0xe1d2,	// (0x000bac99) ncim_query_entry_pane

0xe1e5,	// (0x000bacac) ncimui_query_pane_g1

0xe1f1,	// (0x000bacb8) ncimui_query_pane_t1_ParamLimits

0xe1f1,	// (0x000bacb8) ncimui_query_pane_t1

0x95af,	// (0x000b6076) input_focus_pane_cp012

0xe20a,	// (0x000bacd1) ncim_query_entry_pane_t1

0xa889,	// (0x000b7350) main_im_pane_ParamLimits

0x95af,	// (0x000b6076) main_mobtv_pane_ParamLimits

0x95af,	// (0x000b6076) main_mobtv_pane

0x741f,	// (0x000b3ee6) main_cset6_slider_pane_g18_ParamLimits

0x741f,	// (0x000b3ee6) main_cset6_slider_pane_g18

0x742b,	// (0x000b3ef2) main_cset6_slider_pane_g19_ParamLimits

0x742b,	// (0x000b3ef2) main_cset6_slider_pane_g19

0x7821,	// (0x000b42e8) bg_main_mobtv_pane_ParamLimits

0x7821,	// (0x000b42e8) bg_main_mobtv_pane

0x782f,	// (0x000b42f6) main_mobtv_info_pane

0x783a,	// (0x000b4301) main_mobtv_loading_pane_ParamLimits

0x783a,	// (0x000b4301) main_mobtv_loading_pane

0xe21c,	// (0x000bace3) main_mobtv_pg_channel_list_pane

0xe226,	// (0x000baced) main_mobtv_pg_hdr_pane

0x7847,	// (0x000b430e) main_mobtv_programe_curr_pane_ParamLimits

0x7847,	// (0x000b430e) main_mobtv_programe_curr_pane

0x7854,	// (0x000b431b) main_mobtv_programe_next_pane_ParamLimits

0x7854,	// (0x000b431b) main_mobtv_programe_next_pane

0xe22f,	// (0x000bacf6) popup_mobtv_noti_window

0xccb1,	// (0x000b9778) main_tv_pg_hdr_pane_g1

0xe239,	// (0x000bad00) main_tv_pg_hdr_pane_g2

0xe241,	// (0x000bad08) main_tv_pg_hdr_pane_g3

0xe249,	// (0x000bad10) main_tv_pg_hdr_pane_g4

0xe251,	// (0x000bad18) main_tv_pg_hdr_pane_g5

0xe25b,	// (0x000bad22) main_tv_pg_hdr_pane_g6

0xe265,	// (0x000bad2c) main_tv_pg_hdr_pane_g7

0xe26f,	// (0x000bad36) main_tv_pg_hdr_pane_g8

0xe279,	// (0x000bad40) main_tv_pg_hdr_pane_g9

0xe283,	// (0x000bad4a) main_tv_pg_hdr_pane_g10

0xe28d,	// (0x000bad54) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x000bc6cf) main_tv_pg_hdr_pane_g

0xe297,	// (0x000bad5e) main_tv_pg_hdr_pane_t1

0xe2a5,	// (0x000bad6c) main_tv_pg_hdr_pane_t2

0xe2b3,	// (0x000bad7a) main_tv_pg_hdr_pane_t3

0xe2c3,	// (0x000bad8a) main_tv_pg_hdr_pane_t4

0xe2d3,	// (0x000bad9a) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x000bc6e6) main_tv_pg_hdr_pane_t

0xe2e3,	// (0x000badaa) single_mobtv_pg_channel_pane_ParamLimits

0xe2e3,	// (0x000badaa) single_mobtv_pg_channel_pane

0xe2f5,	// (0x000badbc) single_mobtv_pg_channel_table_pane

0xe2fe,	// (0x000badc5) single_mobtv_pg_channel_thumb_pane

0xe307,	// (0x000badce) single_tv_pg_channel_pane_g1

0xe310,	// (0x000badd7) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x000bc6f1) single_tv_pg_channel_pane_g

0xcee1,	// (0x000b99a8) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcee1,	// (0x000b99a8) bg_single_mobtv_pg_channel_thumb_pane

0xe319,	// (0x000bade0) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe319,	// (0x000bade0) single_mobtv_pg_channel_thumb_pane_g1

0xe327,	// (0x000badee) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe327,	// (0x000badee) single_mobtv_pg_channel_thumb_pane_g2

0xe333,	// (0x000badfa) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe333,	// (0x000badfa) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x000bc6f6) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x000bc6f6) single_mobtv_pg_channel_thumb_pane_g

0xe33f,	// (0x000bae06) single_mobtv_pg_channel_thumb_pane_t1

0xe34d,	// (0x000bae14) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x000bc6fd) single_mobtv_pg_channel_thumb_pane_t

0xccb1,	// (0x000b9778) bg_single_mobtv_pg_channel_table_pane_g1

0xccb1,	// (0x000b9778) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x000bc1a8) bg_single_mobtv_pg_channel_table_pane_g

0xe35b,	// (0x000bae22) single_mobtv_pg_channel_table_pane_t1

0xe369,	// (0x000bae30) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x000bc702) single_mobtv_pg_channel_table_pane_t

0x7869,	// (0x000b4330) main_mobtv_info_pane_g1_ParamLimits

0x7869,	// (0x000b4330) main_mobtv_info_pane_g1

0x7887,	// (0x000b434e) main_mobtv_info_pane_t1_ParamLimits

0x7887,	// (0x000b434e) main_mobtv_info_pane_t1

0x78ff,	// (0x000b43c6) main_mobtv_info_pane_t2_ParamLimits

0x78ff,	// (0x000b43c6) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x000bc70c) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x000bc70c) main_mobtv_info_pane_t

0x798e,	// (0x000b4455) wait_bar_pane_cp05

0x79a0,	// (0x000b4467) main_mobtv_loading_pane_g1_ParamLimits

0x79a0,	// (0x000b4467) main_mobtv_loading_pane_g1

0x79b1,	// (0x000b4478) main_mobtv_loading_pane_g2_ParamLimits

0x79b1,	// (0x000b4478) main_mobtv_loading_pane_g2

0x79bd,	// (0x000b4484) main_mobtv_loading_pane_g3_ParamLimits

0x79bd,	// (0x000b4484) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x000bc713) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x000bc713) main_mobtv_loading_pane_g

0xe377,	// (0x000bae3e) main_mobtv_loading_pane_t1_ParamLimits

0xe377,	// (0x000bae3e) main_mobtv_loading_pane_t1

0xe38f,	// (0x000bae56) main_mobtv_loading_pane_t2_ParamLimits

0xe38f,	// (0x000bae56) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x000bc71a) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x000bc71a) main_mobtv_loading_pane_t

0x79d0,	// (0x000b4497) wait_bar_pane_cp06_ParamLimits

0x79d0,	// (0x000b4497) wait_bar_pane_cp06

0xe3b3,	// (0x000bae7a) main_mobtv_programe_curr_pane_t1

0xe3c1,	// (0x000bae88) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x000bc71f) main_mobtv_programe_curr_pane_t

0xe3cf,	// (0x000bae96) main_mobtv_programe_next_pane_t1

0xe3dd,	// (0x000baea4) main_mobtv_programe_next_pane_t2

0xe3eb,	// (0x000baeb2) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x000bc724) main_mobtv_programe_next_pane_t

0x955e,	// (0x000b6025) bg_popup_mobtv_noti_window_pane

0xe3f9,	// (0x000baec0) popup_mobtv_noti_window_g1

0xe401,	// (0x000baec8) popup_mobtv_noti_window_t1

0xe40f,	// (0x000baed6) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x000bc72b) popup_mobtv_noti_window_t

0xccb1,	// (0x000b9778) bg_popup_mobtv_noti_window_pane_g1

0x955e,	// (0x000b6025) sc_clock_pane

0x955e,	// (0x000b6025) main_fs_bigclock_pane

0x7055,	// (0x000b3b1c) blid2_tripm_pane_t4_ParamLimits

0x7055,	// (0x000b3b1c) blid2_tripm_pane_t4

0x79df,	// (0x000b44a6) sc_clock_pane_g1_ParamLimits

0x79df,	// (0x000b44a6) sc_clock_pane_g1

0x79f1,	// (0x000b44b8) sc_clock_pane_t1_ParamLimits

0x79f1,	// (0x000b44b8) sc_clock_pane_t1

0x7a15,	// (0x000b44dc) sc_clock_pane_t2_ParamLimits

0x7a15,	// (0x000b44dc) sc_clock_pane_t2

0x7a2d,	// (0x000b44f4) sc_clock_pane_t3_ParamLimits

0x7a2d,	// (0x000b44f4) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x000bc730) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x000bc730) sc_clock_pane_t

0x8a3e,	// (0x000b5505) main_fs_bigclock_indicator_pane_ParamLimits

0x8a3e,	// (0x000b5505) main_fs_bigclock_indicator_pane

0xceb1,	// (0x000b9978) main_fs_bigclock_pane_g1_ParamLimits

0xceb1,	// (0x000b9978) main_fs_bigclock_pane_g1

0x8a4a,	// (0x000b5511) main_fs_bigclock_pane_t1_ParamLimits

0x8a4a,	// (0x000b5511) main_fs_bigclock_pane_t1

0x8a5c,	// (0x000b5523) main_fs_bigclock_pane_t2_ParamLimits

0x8a5c,	// (0x000b5523) main_fs_bigclock_pane_t2

0x8a70,	// (0x000b5537) main_fs_bigclock_pane_t3_ParamLimits

0x8a70,	// (0x000b5537) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x000bc93a) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000bc93a) main_fs_bigclock_pane_t

0xec63,	// (0x000bb72a) main_fs_bigclock_indicator_pane_g1

0xe0df,	// (0x000baba6) ncim_query_content_pane_g2_ParamLimits

0xe0df,	// (0x000baba6) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x000bc6bd) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x000bc6bd) ncim_query_content_pane_g

0x7a44,	// (0x000b450b) sc_clock_pane_t4_ParamLimits

0x7a44,	// (0x000b450b) sc_clock_pane_t4

0x95af,	// (0x000b6076) main_radioblah_pane

0xd5ee,	// (0x000ba0b5) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5ee,	// (0x000ba0b5) cell_call4_button_pane_t1_copy1

0x7672,	// (0x000b4139) main_ncimui_pane_t1_ParamLimits

0x7672,	// (0x000b4139) main_ncimui_pane_t1

0x768c,	// (0x000b4153) main_ncimui_pane_t2_ParamLimits

0x768c,	// (0x000b4153) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x000bc6b6) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x000bc6b6) main_ncimui_pane_t

0xe55b,	// (0x000bb022) main_radioblah_anim_pane_ParamLimits

0xe55b,	// (0x000bb022) main_radioblah_anim_pane

0xe56c,	// (0x000bb033) main_radioblah_info_pane_ParamLimits

0xe56c,	// (0x000bb033) main_radioblah_info_pane

0xe580,	// (0x000bb047) main_radioblah_pane_t1_ParamLimits

0xe580,	// (0x000bb047) main_radioblah_pane_t1

0xe59c,	// (0x000bb063) main_radioblah_pane_t2_ParamLimits

0xe59c,	// (0x000bb063) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x000bc751) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x000bc751) main_radioblah_pane_t

0x7af4,	// (0x000b45bb) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7af4,	// (0x000b45bb) main_radioblah_rocker_ctrl_pane

0xe5e4,	// (0x000bb0ab) main_radioblah_info_pane_t1_ParamLimits

0xe5e4,	// (0x000bb0ab) main_radioblah_info_pane_t1

0x7b4c,	// (0x000b4613) main_radioblah_info_pane_t2_ParamLimits

0x7b4c,	// (0x000b4613) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x000bc75a) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x000bc75a) main_radioblah_info_pane_t

0xccb1,	// (0x000b9778) main_radioblah_rocker_ctrl_pane_g1

0x7bfc,	// (0x000b46c3) main_radioblah_rocker_ctrl_pane_g2

0x7c04,	// (0x000b46cb) main_radioblah_rocker_ctrl_pane_g3

0x7c0c,	// (0x000b46d3) main_radioblah_rocker_ctrl_pane_g4

0x7c14,	// (0x000b46db) main_radioblah_rocker_ctrl_pane_g5

0x7c1c,	// (0x000b46e3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x000bc763) main_radioblah_rocker_ctrl_pane_g

0x7303,	// (0x000b3dca) main_cset_text2_pane_t1_copy1_ParamLimits

0xa1a1,	// (0x000b6c68) cam4_image_uncrop_qvga_pane

0xa204,	// (0x000b6ccb) vid4_image_uncrop_qcif_pane

0xa47e,	// (0x000b6f45) cam6_image_uncrop_qvga_pane_ParamLimits

0xa47e,	// (0x000b6f45) cam6_image_uncrop_qvga_pane

0xddc7,	// (0x000ba88e) vid6_image_uncrop_qcif_pane_ParamLimits

0xddc7,	// (0x000ba88e) vid6_image_uncrop_qcif_pane

0x955e,	// (0x000b6025) bg_popup_preview_window_pane_cp03

0xe091,	// (0x000bab58) list_cset_text2_pane

0xe099,	// (0x000bab60) main_cset6_text2_pane_g1

0xe0a1,	// (0x000bab68) main_cset6_text2_pane_t1

0x7c24,	// (0x000b46eb) list_cset_text2_pane_t1_ParamLimits

0x7c24,	// (0x000b46eb) list_cset_text2_pane_t1

0x95af,	// (0x000b6076) main_radioblah_pane_ParamLimits

0x797a,	// (0x000b4441) main_mobtv_info_pane_t3_ParamLimits

0x797a,	// (0x000b4441) main_mobtv_info_pane_t3

0x7ae2,	// (0x000b45a9) main_radioblah_pane_g1

0x7b1c,	// (0x000b45e3) main_radioblah_info_pane_g1

0x7ba1,	// (0x000b4668) main_radioblah_info_pane_t3_ParamLimits

0x7ba1,	// (0x000b4668) main_radioblah_info_pane_t3

0x2168,	// (0x000aec2f) highlight_cell_cale_month_pane_ParamLimits

0x2168,	// (0x000aec2f) highlight_cell_cale_month_pane

0x955e,	// (0x000b6025) main_phob_fisheye_pane

0xcfbd,	// (0x000b9a84) scroll_pane_cp0031_ParamLimits

0xcfbd,	// (0x000b9a84) scroll_pane_cp0031

0xded9,	// (0x000ba9a0) wait_bar_pane_cp08_ParamLimits

0x2248,	// (0x000aed0f) cset_list_set_pane_copy1_ParamLimits

0xe61e,	// (0x000bb0e5) highlight_cell_cale_month_pane_g1

0x7c3d,	// (0x000b4704) highlight_cell_cale_month_pane_t1

0xdb68,	// (0x000ba62f) list_gen_pane_cp01

0xd7d5,	// (0x000ba29c) scroll_pane_01

0x7c4b,	// (0x000b4712) list_single_double_fisheye_pane

0x7c54,	// (0x000b471b) list_double_fisheye_pane_g1_ParamLimits

0x7c54,	// (0x000b471b) list_double_fisheye_pane_g1

0x7c60,	// (0x000b4727) list_double_fisheye_pane_g2_ParamLimits

0x7c60,	// (0x000b4727) list_double_fisheye_pane_g2

0x7c74,	// (0x000b473b) list_double_fisheye_pane_g3_ParamLimits

0x7c74,	// (0x000b473b) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x000bc770) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x000bc770) list_double_fisheye_pane_g

0x7c9d,	// (0x000b4764) list_double_fisheye_pane_t1_ParamLimits

0x7c9d,	// (0x000b4764) list_double_fisheye_pane_t1

0x7cb8,	// (0x000b477f) list_double_fisheye_pane_t2_ParamLimits

0x7cb8,	// (0x000b477f) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x000bc77b) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x000bc77b) list_double_fisheye_pane_t

0x955e,	// (0x000b6025) main_call5_pane

0x7a6f,	// (0x000b4536) sc_swipe_pane_ParamLimits

0x7a6f,	// (0x000b4536) sc_swipe_pane

0x7ced,	// (0x000b47b4) call5_image_pane_ParamLimits

0x7ced,	// (0x000b47b4) call5_image_pane

0x7d0a,	// (0x000b47d1) call5_swipe_1_pane_ParamLimits

0x7d0a,	// (0x000b47d1) call5_swipe_1_pane

0x7d1d,	// (0x000b47e4) call5_swipe_2_pane_ParamLimits

0x7d1d,	// (0x000b47e4) call5_swipe_2_pane

0x7d4a,	// (0x000b4811) popup_call5_audio_first_window_ParamLimits

0x7d4a,	// (0x000b4811) popup_call5_audio_first_window

0xcee1,	// (0x000b99a8) call5_swipe_1_pane_g1_ParamLimits

0xcee1,	// (0x000b99a8) call5_swipe_1_pane_g1

0xe626,	// (0x000bb0ed) call5_swipe_1_pane_g2_ParamLimits

0xe626,	// (0x000bb0ed) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x000bc780) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x000bc780) call5_swipe_1_pane_g

0xe632,	// (0x000bb0f9) call5_swipe_1_pane_t1_ParamLimits

0xe632,	// (0x000bb0f9) call5_swipe_1_pane_t1

0xcee1,	// (0x000b99a8) call5_swipe_2_pane_g1_ParamLimits

0xcee1,	// (0x000b99a8) call5_swipe_2_pane_g1

0xe647,	// (0x000bb10e) call5_swipe_2_pane_g2_ParamLimits

0xe647,	// (0x000bb10e) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x000bc785) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x000bc785) call5_swipe_2_pane_g

0xe653,	// (0x000bb11a) call5_swipe_2_pane_t1_ParamLimits

0xe653,	// (0x000bb11a) call5_swipe_2_pane_t1

0xe668,	// (0x000bb12f) sc_swipe_pane_g1_ParamLimits

0xe668,	// (0x000bb12f) sc_swipe_pane_g1

0xe675,	// (0x000bb13c) sc_swipe_pane_g2_ParamLimits

0xe675,	// (0x000bb13c) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x000bc78a) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x000bc78a) sc_swipe_pane_g

0xe681,	// (0x000bb148) sc_swipe_pane_t1_ParamLimits

0xe681,	// (0x000bb148) sc_swipe_pane_t1

0x955e,	// (0x000b6025) main_cmail_launcher_pane

0x7d5f,	// (0x000b4826) aid_size_cell_cmail_l_ParamLimits

0x7d5f,	// (0x000b4826) aid_size_cell_cmail_l

0x7d79,	// (0x000b4840) grid_cmail_l_pane_ParamLimits

0x7d79,	// (0x000b4840) grid_cmail_l_pane

0x7d94,	// (0x000b485b) cell_cmail_l_pane_ParamLimits

0x7d94,	// (0x000b485b) cell_cmail_l_pane

0x7dbc,	// (0x000b4883) cell_cmail_l_pane_g1_ParamLimits

0x7dbc,	// (0x000b4883) cell_cmail_l_pane_g1

0x7dc8,	// (0x000b488f) cell_cmail_l_pane_t1_ParamLimits

0x7dc8,	// (0x000b488f) cell_cmail_l_pane_t1

0xe696,	// (0x000bb15d) cell_cmail_l_pane_t2_ParamLimits

0xe696,	// (0x000bb15d) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x000bc78f) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x000bc78f) cell_cmail_l_pane_t

0x95af,	// (0x000b6076) grid_highlight_pane_cp018_ParamLimits

0x95af,	// (0x000b6076) grid_highlight_pane_cp018

0xfdd7,	// (0x000ac89e) main2_pane_ParamLimits

0xfdd7,	// (0x000ac89e) main2_pane

0xa934,	// (0x000b73fb) popup_sp_fs_action_menu_bg_pane_g1

0xa93c,	// (0x000b7403) popup_sp_fs_action_menu_bg_pane_g2

0xa944,	// (0x000b740b) popup_sp_fs_action_menu_bg_pane_g3

0xa94c,	// (0x000b7413) popup_sp_fs_action_menu_bg_pane_g4

0xa954,	// (0x000b741b) popup_sp_fs_action_menu_bg_pane_g5

0xa95c,	// (0x000b7423) popup_sp_fs_action_menu_bg_pane_g6

0xa964,	// (0x000b742b) popup_sp_fs_action_menu_bg_pane_g7

0xa96c,	// (0x000b7433) popup_sp_fs_action_menu_bg_pane_g8

0xa974,	// (0x000b743b) popup_sp_fs_action_menu_bg_pane_g9

0xa97c,	// (0x000b7443) popup_sp_fs_action_menu_bg_pane_g10

0xa97c,	// (0x000b7443) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x000bbc54) popup_sp_fs_action_menu_bg_pane_g

0x0fc4,	// (0x000ada8b) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0fc4,	// (0x000ada8b) list_medium_line_x2_t3_g3_g1

0x0fd0,	// (0x000ada97) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0fd0,	// (0x000ada97) list_medium_line_x2_t3_g3_g2

0x0fdc,	// (0x000adaa3) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0fdc,	// (0x000adaa3) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x000bbd04) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x000bbd04) list_medium_line_x2_t3_g3_g

0x0fe8,	// (0x000adaaf) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0fe8,	// (0x000adaaf) list_medium_line_x2_t3_g3_t1

0x0ffd,	// (0x000adac4) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0ffd,	// (0x000adac4) list_medium_line_x2_t3_g3_t2

0x1011,	// (0x000adad8) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1011,	// (0x000adad8) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x000bbd0b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x000bbd0b) list_medium_line_x2_t3_g3_t

0x0fc4,	// (0x000ada8b) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0fc4,	// (0x000ada8b) list_medium_line_x2_t3_g2_g1

0x0fdc,	// (0x000adaa3) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0fdc,	// (0x000adaa3) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x000bbd12) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x000bbd12) list_medium_line_x2_t3_g2_g

0x1026,	// (0x000adaed) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1026,	// (0x000adaed) list_medium_line_x2_t3_g2_t1

0x103c,	// (0x000adb03) list_medium_line_x2_t3_g2_t2_ParamLimits

0x103c,	// (0x000adb03) list_medium_line_x2_t3_g2_t2

0x104e,	// (0x000adb15) list_medium_line_x2_t3_g2_t3_ParamLimits

0x104e,	// (0x000adb15) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x000bbd17) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x000bbd17) list_medium_line_x2_t3_g2_t

0x0fc4,	// (0x000ada8b) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0fc4,	// (0x000ada8b) list_medium_line_x2_t4_g4_g1

0x106c,	// (0x000adb33) list_medium_line_x2_t4_g4_g2_ParamLimits

0x106c,	// (0x000adb33) list_medium_line_x2_t4_g4_g2

0x0fd0,	// (0x000ada97) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0fd0,	// (0x000ada97) list_medium_line_x2_t4_g4_g3

0x1078,	// (0x000adb3f) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1078,	// (0x000adb3f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x000bbd1e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x000bbd1e) list_medium_line_x2_t4_g4_g

0x1084,	// (0x000adb4b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1084,	// (0x000adb4b) list_medium_line_x2_t4_g4_t1

0x109e,	// (0x000adb65) list_medium_line_x2_t4_g4_t2_ParamLimits

0x109e,	// (0x000adb65) list_medium_line_x2_t4_g4_t2

0x10b4,	// (0x000adb7b) list_medium_line_x2_t4_g4_t3_ParamLimits

0x10b4,	// (0x000adb7b) list_medium_line_x2_t4_g4_t3

0x10c9,	// (0x000adb90) list_medium_line_x2_t4_g4_t4_ParamLimits

0x10c9,	// (0x000adb90) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x000bbd27) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x000bbd27) list_medium_line_x2_t4_g4_t

0x0fc4,	// (0x000ada8b) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0fc4,	// (0x000ada8b) list_medium_line_x2_t2_g4_g1

0x106c,	// (0x000adb33) list_medium_line_x2_t2_g4_g2_ParamLimits

0x106c,	// (0x000adb33) list_medium_line_x2_t2_g4_g2

0x0fd0,	// (0x000ada97) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0fd0,	// (0x000ada97) list_medium_line_x2_t2_g4_g3

0x0fdc,	// (0x000adaa3) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0fdc,	// (0x000adaa3) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x000bbd8e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x000bbd8e) list_medium_line_x2_t2_g4_g

0x218e,	// (0x000aec55) list_medium_line_x2_t2_g4_t1_ParamLimits

0x218e,	// (0x000aec55) list_medium_line_x2_t2_g4_t1

0x1011,	// (0x000adad8) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1011,	// (0x000adad8) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x000bbd97) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x000bbd97) list_medium_line_x2_t2_g4_t

0x0fc4,	// (0x000ada8b) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0fc4,	// (0x000ada8b) list_medium_line_x2_t2_g3_g1

0x0fd0,	// (0x000ada97) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0fd0,	// (0x000ada97) list_medium_line_x2_t2_g3_g2

0x0fdc,	// (0x000adaa3) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0fdc,	// (0x000adaa3) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x000bbd04) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x000bbd04) list_medium_line_x2_t2_g3_g

0x21a3,	// (0x000aec6a) list_medium_line_x2_t2_g3_t1_ParamLimits

0x21a3,	// (0x000aec6a) list_medium_line_x2_t2_g3_t1

0x1011,	// (0x000adad8) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1011,	// (0x000adad8) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x000bbd9c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x000bbd9c) list_medium_line_x2_t2_g3_t

0x22ed,	// (0x000aedb4) main_sp_fs_list_pane_ParamLimits

0x22ed,	// (0x000aedb4) main_sp_fs_list_pane

0x22f9,	// (0x000aedc0) sp_fs_scroll_pane_ParamLimits

0x22f9,	// (0x000aedc0) sp_fs_scroll_pane

0x2305,	// (0x000aedcc) list_medium_line_x2_t3_t1

0x2315,	// (0x000aeddc) list_medium_line_x2_t3_t2

0x2323,	// (0x000aedea) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x000bbde7) list_medium_line_x2_t3_t

0x2331,	// (0x000aedf8) list_medium_line_x3_t4_t1

0x2341,	// (0x000aee08) list_medium_line_x3_t4_t2

0x234f,	// (0x000aee16) list_medium_line_x3_t4_t3

0x2323,	// (0x000aedea) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x000bbdee) list_medium_line_x3_t4_t

0x235d,	// (0x000aee24) list_medium_line_x4_t5_t1

0x236d,	// (0x000aee34) list_medium_line_x4_t5_t2

0x234f,	// (0x000aee16) list_medium_line_x4_t5_t3

0x237b,	// (0x000aee42) list_medium_line_x4_t5_t4

0x2323,	// (0x000aedea) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x000bbdf7) list_medium_line_x4_t5_t

0x0fc4,	// (0x000ada8b) list_medium_line_t4_g4_g1_ParamLimits

0x0fc4,	// (0x000ada8b) list_medium_line_t4_g4_g1

0x1078,	// (0x000adb3f) list_medium_line_t4_g4_g2_ParamLimits

0x1078,	// (0x000adb3f) list_medium_line_t4_g4_g2

0x2389,	// (0x000aee50) list_medium_line_t4_g4_g3_ParamLimits

0x2389,	// (0x000aee50) list_medium_line_t4_g4_g3

0x0fdc,	// (0x000adaa3) list_medium_line_t4_g4_g4_ParamLimits

0x0fdc,	// (0x000adaa3) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x000bbe02) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x000bbe02) list_medium_line_t4_g4_g

0x2395,	// (0x000aee5c) list_medium_line_t4_g4_t1_ParamLimits

0x2395,	// (0x000aee5c) list_medium_line_t4_g4_t1

0x23aa,	// (0x000aee71) list_medium_line_t4_g4_t2_ParamLimits

0x23aa,	// (0x000aee71) list_medium_line_t4_g4_t2

0x23c0,	// (0x000aee87) list_medium_line_t4_g4_t3_ParamLimits

0x23c0,	// (0x000aee87) list_medium_line_t4_g4_t3

0x1011,	// (0x000adad8) list_medium_line_t4_g4_t4_ParamLimits

0x1011,	// (0x000adad8) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x000bbe0b) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x000bbe0b) list_medium_line_t4_g4_t

0x249c,	// (0x000aef63) chi_dic_find_pane_g1

0x36c4,	// (0x000b018b) main_tport_pane

0xa2f0,	// (0x000b6db7) list_medium_line_plain_t1

0xa33a,	// (0x000b6e01) list_medium_line_t2_g2_g1_ParamLimits

0xa33a,	// (0x000b6e01) list_medium_line_t2_g2_g1

0xba85,	// (0x000b854c) list_medium_line_t2_g2_g2_ParamLimits

0xba85,	// (0x000b854c) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000bc4c7) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000bc4c7) list_medium_line_t2_g2_g

0x6769,	// (0x000b3230) list_medium_line_t2_g2_t1_ParamLimits

0x6769,	// (0x000b3230) list_medium_line_t2_g2_t1

0x6783,	// (0x000b324a) list_medium_line_t2_g2_t2_ParamLimits

0x6783,	// (0x000b324a) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000bc4cc) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000bc4cc) list_medium_line_t2_g2_t

0xa464,	// (0x000b6f2b) aid_sp_fs_list_icon_a_sm

0xba91,	// (0x000b8558) aid_sp_fs_list_icon_d

0xa46c,	// (0x000b6f33) aid_sp_fs_text_primary

0xa475,	// (0x000b6f3c) aid_sp_fs_text_secondary

0x6e02,	// (0x000b38c9) list_medium_line

0x6e02,	// (0x000b38c9) list_medium_line_g2

0x6e02,	// (0x000b38c9) list_medium_line_g3

0x6e02,	// (0x000b38c9) list_medium_line_plain

0x6e02,	// (0x000b38c9) list_medium_line_plain_t2

0x6e02,	// (0x000b38c9) list_medium_line_plain_t3

0x6e02,	// (0x000b38c9) list_medium_line_right_icon

0x6e02,	// (0x000b38c9) list_medium_line_right_iconx2

0x6e02,	// (0x000b38c9) list_medium_line_t2

0x6e02,	// (0x000b38c9) list_medium_line_t2_g2

0x6e02,	// (0x000b38c9) list_medium_line_t2_g3

0x6e02,	// (0x000b38c9) list_medium_line_t2_right_icon

0x6e02,	// (0x000b38c9) list_medium_line_t2_right_iconx2

0x6e02,	// (0x000b38c9) list_medium_line_t3

0x6e02,	// (0x000b38c9) list_medium_line_t3_g2

0x6e02,	// (0x000b38c9) list_medium_line_t3_g3

0x6e02,	// (0x000b38c9) list_medium_line_t3_right_iconx2

0x6e0b,	// (0x000b38d2) list_medium_line_t4_g4

0x6e14,	// (0x000b38db) list_medium_line_x2

0x6e14,	// (0x000b38db) list_medium_line_x2_t2_g2

0x6e14,	// (0x000b38db) list_medium_line_x2_t2_g3

0x6e14,	// (0x000b38db) list_medium_line_x2_t2_g4

0x6e14,	// (0x000b38db) list_medium_line_x2_t3

0x6e14,	// (0x000b38db) list_medium_line_x2_t3_g2

0x6e14,	// (0x000b38db) list_medium_line_x2_t3_g3

0x6e14,	// (0x000b38db) list_medium_line_x2_t3_g4

0x6e14,	// (0x000b38db) list_medium_line_x2_t4_g2

0x6e14,	// (0x000b38db) list_medium_line_x2_t4_g4

0x6e1d,	// (0x000b38e4) list_medium_line_x3

0x6e1d,	// (0x000b38e4) list_medium_line_x3_t4

0x6e1d,	// (0x000b38e4) list_medium_line_x3_t4_g4

0x6e0b,	// (0x000b38d2) list_medium_line_x4_t4

0x6e0b,	// (0x000b38d2) list_medium_line_x4_t4_g7

0x6e0b,	// (0x000b38d2) list_medium_line_x4_t5

0x6e26,	// (0x000b38ed) list_single_fs_dyc_pane_ParamLimits

0x6e26,	// (0x000b38ed) list_single_fs_dyc_pane

0x0fc4,	// (0x000ada8b) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0fc4,	// (0x000ada8b) list_medium_line_x4_t4_g7_g1

0x7577,	// (0x000b403e) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7577,	// (0x000b403e) list_medium_line_x4_t4_g7_g2

0x7583,	// (0x000b404a) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7583,	// (0x000b404a) list_medium_line_x4_t4_g7_g3

0x7592,	// (0x000b4059) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7592,	// (0x000b4059) list_medium_line_x4_t4_g7_g4

0x759e,	// (0x000b4065) list_medium_line_x4_t4_g7_g5_ParamLimits

0x759e,	// (0x000b4065) list_medium_line_x4_t4_g7_g5

0x75ad,	// (0x000b4074) list_medium_line_x4_t4_g7_g6_ParamLimits

0x75ad,	// (0x000b4074) list_medium_line_x4_t4_g7_g6

0x75bc,	// (0x000b4083) list_medium_line_x4_t4_g7_g7_ParamLimits

0x75bc,	// (0x000b4083) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x000bc697) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x000bc697) list_medium_line_x4_t4_g7_g

0x75c8,	// (0x000b408f) list_medium_line_x4_t4_g7_t1_ParamLimits

0x75c8,	// (0x000b408f) list_medium_line_x4_t4_g7_t1

0x75dd,	// (0x000b40a4) list_medium_line_x4_t4_g7_t2_ParamLimits

0x75dd,	// (0x000b40a4) list_medium_line_x4_t4_g7_t2

0x75f2,	// (0x000b40b9) list_medium_line_x4_t4_g7_t3_ParamLimits

0x75f2,	// (0x000b40b9) list_medium_line_x4_t4_g7_t3

0x7607,	// (0x000b40ce) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7607,	// (0x000b40ce) list_medium_line_x4_t4_g7_t4

0x7619,	// (0x000b40e0) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7619,	// (0x000b40e0) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x000bc6a6) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x000bc6a6) list_medium_line_x4_t4_g7_t

0x762b,	// (0x000b40f2) list_single_dyc_row_pane_ParamLimits

0x762b,	// (0x000b40f2) list_single_dyc_row_pane

0x7cda,	// (0x000b47a1) call5_gesture_pane_ParamLimits

0x7cda,	// (0x000b47a1) call5_gesture_pane

0x7d30,	// (0x000b47f7) call5_windows_pane_ParamLimits

0x7d30,	// (0x000b47f7) call5_windows_pane

0x7dde,	// (0x000b48a5) call5_swipe_1_pane_cp_ParamLimits

0x7dde,	// (0x000b48a5) call5_swipe_1_pane_cp

0x7dea,	// (0x000b48b1) call5_swipe_2_pane_cp_ParamLimits

0x7dea,	// (0x000b48b1) call5_swipe_2_pane_cp

0xb38b,	// (0x000b7e52) call5_image_pane_cp

0x7df6,	// (0x000b48bd) popup_call5_audio_first_window_cp_ParamLimits

0x7df6,	// (0x000b48bd) popup_call5_audio_first_window_cp

0xe668,	// (0x000bb12f) call5_swipe_1_pane_g1_cp_ParamLimits

0xe668,	// (0x000bb12f) call5_swipe_1_pane_g1_cp

0xe6a8,	// (0x000bb16f) call5_swipe_1_pane_g2_cp

0xe681,	// (0x000bb148) call5_swipe_1_pane_t1_cp_ParamLimits

0xe681,	// (0x000bb148) call5_swipe_1_pane_t1_cp

0xe668,	// (0x000bb12f) call5_swipe_2_pane_g1_cp_ParamLimits

0xe668,	// (0x000bb12f) call5_swipe_2_pane_g1_cp

0xe6b0,	// (0x000bb177) call5_swipe_2_pane_g2_cp

0xe6b8,	// (0x000bb17f) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6b8,	// (0x000bb17f) call5_swipe_2_pane_t1_cp

0x95af,	// (0x000b6076) main_sp_fs_email_pane

0xe6cd,	// (0x000bb194) main_sp_fs_listscroll_pane_te

0xa48c,	// (0x000b6f53) popup_sp_fs_action_menu_pane_ParamLimits

0xa48c,	// (0x000b6f53) popup_sp_fs_action_menu_pane

0xccb1,	// (0x000b9778) bg_sp_fs_ctrlbar_pane_g1

0xd23e,	// (0x000b9d05) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd250,	// (0x000b9d17) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd247,	// (0x000b9d0e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xccb1,	// (0x000b9778) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x000bc794) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca90,	// (0x000b9557) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca90,	// (0x000b9557) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6d6,	// (0x000bb19d) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6d6,	// (0x000bb19d) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6e2,	// (0x000bb1a9) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6e2,	// (0x000bb1a9) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x000bc79d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x000bc79d) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6ee,	// (0x000bb1b5) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6ee,	// (0x000bb1b5) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xba99,	// (0x000b8560) list_medium_line_t2_right_icon_g1

0x7e04,	// (0x000b48cb) list_medium_line_t2_right_icon_t1

0x7e14,	// (0x000b48db) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x000bc7a2) list_medium_line_t2_right_icon_t

0xc858,	// (0x000b931f) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc858,	// (0x000b931f) bg_sp_fs_ctrlbar_pane

0x7e73,	// (0x000b493a) main_sp_fs_ctrlbar_button_pane_cp01

0x7e7d,	// (0x000b4944) main_sp_fs_ctrlbar_ddmenu_pane

0xe740,	// (0x000bb207) main_sp_fs_ctrlbar_pane_g1

0xe74c,	// (0x000bb213) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x000bc7a7) main_sp_fs_ctrlbar_pane_g

0xe758,	// (0x000bb21f) main_sp_fs_ctrlbar_pane_t1

0x7e87,	// (0x000b494e) main_sp_fs_ctrlbar_pane

0x7eab,	// (0x000b4972) main_sp_fs_listscroll_pane_te_cp01

0x7ecb,	// (0x000b4992) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7ecb,	// (0x000b4992) popup_sp_fs_action_menu_pane_cp01

0x95af,	// (0x000b6076) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x95af,	// (0x000b6076) bg_sp_fs_highlight_list_pane_cp01

0xa4d2,	// (0x000b6f99) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa4d2,	// (0x000b6f99) sp_fs_action_menu_list_gene_pane_g1

0xe788,	// (0x000bb24f) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe788,	// (0x000bb24f) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x000bc7b1) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x000bc7b1) sp_fs_action_menu_list_gene_pane_g

0xa4e1,	// (0x000b6fa8) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa4e1,	// (0x000b6fa8) sp_fs_action_menu_list_gene_pane_t1

0xa4f9,	// (0x000b6fc0) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa4f9,	// (0x000b6fc0) sp_fs_action_menu_list_gene_pane

0xe795,	// (0x000bb25c) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe795,	// (0x000bb25c) popup_sp_fs_action_menu_bg_pane

0xa51c,	// (0x000b6fe3) sp_fs_action_menu_list_pane_ParamLimits

0xa51c,	// (0x000b6fe3) sp_fs_action_menu_list_pane

0xe7a3,	// (0x000bb26a) sp_fs_scroll_pane_cp01_ParamLimits

0xe7a3,	// (0x000bb26a) sp_fs_scroll_pane_cp01

0x7f01,	// (0x000b49c8) list_medium_line_plain_t2_t1

0x7f11,	// (0x000b49d8) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x000bc7b6) list_medium_line_plain_t2_t

0x7f21,	// (0x000b49e8) list_medium_line_plain_t3_t1

0x7f31,	// (0x000b49f8) list_medium_line_plain_t3_t2

0x7f3f,	// (0x000b4a06) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x000bc7bb) list_medium_line_plain_t3_t

0x0fc4,	// (0x000ada8b) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0fc4,	// (0x000ada8b) list_medium_line_x2_t2_g2_g1

0x0fdc,	// (0x000adaa3) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0fdc,	// (0x000adaa3) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x000bbd12) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x000bbd12) list_medium_line_x2_t2_g2_g

0x2395,	// (0x000aee5c) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2395,	// (0x000aee5c) list_medium_line_x2_t2_g2_t1

0x1011,	// (0x000adad8) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1011,	// (0x000adad8) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x000bc7c2) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x000bc7c2) list_medium_line_x2_t2_g2_t

0x0fc4,	// (0x000ada8b) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0fc4,	// (0x000ada8b) list_medium_line_x2_t4_g2_g1

0x7f4d,	// (0x000b4a14) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7f4d,	// (0x000b4a14) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x000bc7c7) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x000bc7c7) list_medium_line_x2_t4_g2_g

0x7f5f,	// (0x000b4a26) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7f5f,	// (0x000b4a26) list_medium_line_x2_t4_g2_t1

0x7f79,	// (0x000b4a40) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7f79,	// (0x000b4a40) list_medium_line_x2_t4_g2_t2

0x7f8f,	// (0x000b4a56) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7f8f,	// (0x000b4a56) list_medium_line_x2_t4_g2_t3

0x1011,	// (0x000adad8) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1011,	// (0x000adad8) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x000bc7cc) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x000bc7cc) list_medium_line_x2_t4_g2_t

0xbaa1,	// (0x000b8568) list_medium_line_t3_right_iconx2_g1

0xba99,	// (0x000b8560) list_medium_line_t3_right_iconx2_g2

0x7fa4,	// (0x000b4a6b) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x000bc7d5) list_medium_line_t3_right_iconx2_g

0x7fae,	// (0x000b4a75) list_medium_line_t3_right_iconx2_t1

0x7fbe,	// (0x000b4a85) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x000bc7dc) list_medium_line_t3_right_iconx2_t

0x0fc4,	// (0x000ada8b) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0fc4,	// (0x000ada8b) list_medium_line_x3_t4_g4_g1

0x0fd0,	// (0x000ada97) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0fd0,	// (0x000ada97) list_medium_line_x3_t4_g4_g2

0x1078,	// (0x000adb3f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1078,	// (0x000adb3f) list_medium_line_x3_t4_g4_g3

0x7fcc,	// (0x000b4a93) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7fcc,	// (0x000b4a93) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x000bc7e1) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x000bc7e1) list_medium_line_x3_t4_g4_g

0x7fd8,	// (0x000b4a9f) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7fd8,	// (0x000b4a9f) list_medium_line_x3_t4_g4_t1

0x7fef,	// (0x000b4ab6) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7fef,	// (0x000b4ab6) list_medium_line_x3_t4_g4_t2

0x800a,	// (0x000b4ad1) list_medium_line_x3_t4_g4_t3_ParamLimits

0x800a,	// (0x000b4ad1) list_medium_line_x3_t4_g4_t3

0x801f,	// (0x000b4ae6) list_medium_line_x3_t4_g4_t4_ParamLimits

0x801f,	// (0x000b4ae6) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x000bc7ea) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x000bc7ea) list_medium_line_x3_t4_g4_t

0x803c,	// (0x000b4b03) list_single_dyc_row_text_pane_t1_ParamLimits

0x803c,	// (0x000b4b03) list_single_dyc_row_text_pane_t1

0x8085,	// (0x000b4b4c) list_single_dyc_row_text_pane_t2_ParamLimits

0x8085,	// (0x000b4b4c) list_single_dyc_row_text_pane_t2

0xa540,	// (0x000b7007) list_single_dyc_row_text_pane_t3_ParamLimits

0xa540,	// (0x000b7007) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x000bc7f3) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x000bc7f3) list_single_dyc_row_text_pane_t

0xa564,	// (0x000b702b) list_single_dyc_row_pane_g1_ParamLimits

0xa564,	// (0x000b702b) list_single_dyc_row_pane_g1

0xa570,	// (0x000b7037) list_single_dyc_row_pane_g2_ParamLimits

0xa570,	// (0x000b7037) list_single_dyc_row_pane_g2

0xa57c,	// (0x000b7043) list_single_dyc_row_pane_g3_ParamLimits

0xa57c,	// (0x000b7043) list_single_dyc_row_pane_g3

0xa588,	// (0x000b704f) list_single_dyc_row_pane_g4_ParamLimits

0xa588,	// (0x000b704f) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000bc800) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000bc800) list_single_dyc_row_pane_g

0xa594,	// (0x000b705b) list_single_dyc_row_text_pane_ParamLimits

0xa594,	// (0x000b705b) list_single_dyc_row_text_pane

0x955e,	// (0x000b6025) bg_sp_fs_scroll_pane

0xe7c9,	// (0x000bb290) thumb_sp_fs_scroll_pane

0xa33a,	// (0x000b6e01) list_medium_line_g1_ParamLimits

0xa33a,	// (0x000b6e01) list_medium_line_g1

0xa5b3,	// (0x000b707a) list_medium_line_t1_ParamLimits

0xa5b3,	// (0x000b707a) list_medium_line_t1

0x0fc4,	// (0x000ada8b) list_medium_line_x2_g1_ParamLimits

0x0fc4,	// (0x000ada8b) list_medium_line_x2_g1

0x0fd0,	// (0x000ada97) list_medium_line_x2_g2_ParamLimits

0x0fd0,	// (0x000ada97) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x000bc809) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x000bc809) list_medium_line_x2_g

0xa5c8,	// (0x000b708f) list_medium_line_x2_t1_ParamLimits

0xa5c8,	// (0x000b708f) list_medium_line_x2_t1

0x0fc4,	// (0x000ada8b) list_medium_line_x3_g1_ParamLimits

0x0fc4,	// (0x000ada8b) list_medium_line_x3_g1

0x0fd0,	// (0x000ada97) list_medium_line_x3_g2_ParamLimits

0x0fd0,	// (0x000ada97) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x000bc809) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x000bc809) list_medium_line_x3_g

0xa5c8,	// (0x000b708f) list_medium_line_x3_t1_ParamLimits

0xa5c8,	// (0x000b708f) list_medium_line_x3_t1

0xe7d2,	// (0x000bb299) thumb_sp_fs_scroll_pane_g1

0xe7db,	// (0x000bb2a2) thumb_sp_fs_scroll_pane_g2

0xe7e4,	// (0x000bb2ab) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000bc80e) thumb_sp_fs_scroll_pane_g

0xe7d2,	// (0x000bb299) bg_sp_fs_scroll_pane_g1

0xe7db,	// (0x000bb2a2) bg_sp_fs_scroll_pane_g2

0xe7e4,	// (0x000bb2ab) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000bc80e) bg_sp_fs_scroll_pane_g

0x0fc4,	// (0x000ada8b) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0fc4,	// (0x000ada8b) list_medium_line_x2_t3_g4_g1

0x106c,	// (0x000adb33) list_medium_line_x2_t3_g4_g2_ParamLimits

0x106c,	// (0x000adb33) list_medium_line_x2_t3_g4_g2

0x0fd0,	// (0x000ada97) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0fd0,	// (0x000ada97) list_medium_line_x2_t3_g4_g3

0x0fdc,	// (0x000adaa3) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0fdc,	// (0x000adaa3) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x000bbd8e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x000bbd8e) list_medium_line_x2_t3_g4_g

0x81ba,	// (0x000b4c81) list_medium_line_x2_t3_g4_t1_ParamLimits

0x81ba,	// (0x000b4c81) list_medium_line_x2_t3_g4_t1

0x81d0,	// (0x000b4c97) list_medium_line_x2_t3_g4_t2_ParamLimits

0x81d0,	// (0x000b4c97) list_medium_line_x2_t3_g4_t2

0x1011,	// (0x000adad8) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1011,	// (0x000adad8) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000bc815) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000bc815) list_medium_line_x2_t3_g4_t

0xa33a,	// (0x000b6e01) list_medium_line_g2_g1_ParamLimits

0xa33a,	// (0x000b6e01) list_medium_line_g2_g1

0xba85,	// (0x000b854c) list_medium_line_g2_g2_ParamLimits

0xba85,	// (0x000b854c) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000bc4c7) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000bc4c7) list_medium_line_g2_g

0xa5de,	// (0x000b70a5) list_medium_line_g2_t1_ParamLimits

0xa5de,	// (0x000b70a5) list_medium_line_g2_t1

0xa33a,	// (0x000b6e01) list_medium_line_t3_g2_g1_ParamLimits

0xa33a,	// (0x000b6e01) list_medium_line_t3_g2_g1

0xba85,	// (0x000b854c) list_medium_line_t3_g2_g2_ParamLimits

0xba85,	// (0x000b854c) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000bc4c7) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000bc4c7) list_medium_line_t3_g2_g

0x81e9,	// (0x000b4cb0) list_medium_line_t3_g2_t1_ParamLimits

0x81e9,	// (0x000b4cb0) list_medium_line_t3_g2_t1

0x8200,	// (0x000b4cc7) list_medium_line_t3_g2_t2_ParamLimits

0x8200,	// (0x000b4cc7) list_medium_line_t3_g2_t2

0x8215,	// (0x000b4cdc) list_medium_line_t3_g2_t3_ParamLimits

0x8215,	// (0x000b4cdc) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000bc81c) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000bc81c) list_medium_line_t3_g2_t

0xba99,	// (0x000b8560) list_medium_line_right_icon_g1

0xa5f3,	// (0x000b70ba) list_medium_line_right_icon_t1

0xa33a,	// (0x000b6e01) list_medium_line_t2_g1_ParamLimits

0xa33a,	// (0x000b6e01) list_medium_line_t2_g1

0x822e,	// (0x000b4cf5) list_medium_line_t2_t1_ParamLimits

0x822e,	// (0x000b4cf5) list_medium_line_t2_t1

0x8248,	// (0x000b4d0f) list_medium_line_t2_t2_ParamLimits

0x8248,	// (0x000b4d0f) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000bc823) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000bc823) list_medium_line_t2_t

0xa33a,	// (0x000b6e01) list_medium_line_t3_g1_ParamLimits

0xa33a,	// (0x000b6e01) list_medium_line_t3_g1

0x8261,	// (0x000b4d28) list_medium_line_t3_t1_ParamLimits

0x8261,	// (0x000b4d28) list_medium_line_t3_t1

0x827b,	// (0x000b4d42) list_medium_line_t3_t2_ParamLimits

0x827b,	// (0x000b4d42) list_medium_line_t3_t2

0x8291,	// (0x000b4d58) list_medium_line_t3_t3_ParamLimits

0x8291,	// (0x000b4d58) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000bc828) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000bc828) list_medium_line_t3_t

0xa33a,	// (0x000b6e01) list_medium_line_g3_g1_ParamLimits

0xa33a,	// (0x000b6e01) list_medium_line_g3_g1

0xbaa9,	// (0x000b8570) list_medium_line_g3_g2_ParamLimits

0xbaa9,	// (0x000b8570) list_medium_line_g3_g2

0xba85,	// (0x000b854c) list_medium_line_g3_g3_ParamLimits

0xba85,	// (0x000b854c) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000bc82f) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000bc82f) list_medium_line_g3_g

0xa601,	// (0x000b70c8) list_medium_line_g3_t1_ParamLimits

0xa601,	// (0x000b70c8) list_medium_line_g3_t1

0xa33a,	// (0x000b6e01) list_medium_line_t2_g3_g1_ParamLimits

0xa33a,	// (0x000b6e01) list_medium_line_t2_g3_g1

0xbaa9,	// (0x000b8570) list_medium_line_t2_g3_g2_ParamLimits

0xbaa9,	// (0x000b8570) list_medium_line_t2_g3_g2

0xba85,	// (0x000b854c) list_medium_line_t2_g3_g3_ParamLimits

0xba85,	// (0x000b854c) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000bc82f) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000bc82f) list_medium_line_t2_g3_g

0x82a6,	// (0x000b4d6d) list_medium_line_t2_g3_t1_ParamLimits

0x82a6,	// (0x000b4d6d) list_medium_line_t2_g3_t1

0x82c0,	// (0x000b4d87) list_medium_line_t2_g3_t2_ParamLimits

0x82c0,	// (0x000b4d87) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000bc836) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000bc836) list_medium_line_t2_g3_t

0xa33a,	// (0x000b6e01) list_medium_line_t3_g3_g1_ParamLimits

0xa33a,	// (0x000b6e01) list_medium_line_t3_g3_g1

0xbaa9,	// (0x000b8570) list_medium_line_t3_g3_g2_ParamLimits

0xbaa9,	// (0x000b8570) list_medium_line_t3_g3_g2

0xba85,	// (0x000b854c) list_medium_line_t3_g3_g3_ParamLimits

0xba85,	// (0x000b854c) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000bc82f) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000bc82f) list_medium_line_t3_g3_g

0x82da,	// (0x000b4da1) list_medium_line_t3_g3_t1_ParamLimits

0x82da,	// (0x000b4da1) list_medium_line_t3_g3_t1

0x82ee,	// (0x000b4db5) list_medium_line_t3_g3_t2_ParamLimits

0x82ee,	// (0x000b4db5) list_medium_line_t3_g3_t2

0x8300,	// (0x000b4dc7) list_medium_line_t3_g3_t3_ParamLimits

0x8300,	// (0x000b4dc7) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000bc83b) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000bc83b) list_medium_line_t3_g3_t

0xbaa1,	// (0x000b8568) list_medium_line_right_iconx2_g1

0xba99,	// (0x000b8560) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000bc842) list_medium_line_right_iconx2_g

0xbab5,	// (0x000b857c) list_medium_line_right_iconx2_t1

0xbaa1,	// (0x000b8568) list_medium_line_t2_right_iconx2_g1

0xba99,	// (0x000b8560) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000bc842) list_medium_line_t2_right_iconx2_g

0x8314,	// (0x000b4ddb) list_medium_line_t2_right_iconx2_t1

0x8324,	// (0x000b4deb) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000bc847) list_medium_line_t2_right_iconx2_t

0x8336,	// (0x000b4dfd) list_medium_line_x4_t4_t1

0x8344,	// (0x000b4e0b) list_medium_line_x4_t4_t2

0x8354,	// (0x000b4e1b) list_medium_line_x4_t4_t3

0x8364,	// (0x000b4e2b) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000bc84c) list_medium_line_x4_t4_t

0x83b7,	// (0x000b4e7e) tport_appsw_pane_ParamLimits

0x83b7,	// (0x000b4e7e) tport_appsw_pane

0x83cf,	// (0x000b4e96) tport_contact_pane_ParamLimits

0x83cf,	// (0x000b4e96) tport_contact_pane

0x83e7,	// (0x000b4eae) tport_listscroll_pane_ParamLimits

0x83e7,	// (0x000b4eae) tport_listscroll_pane

0x8401,	// (0x000b4ec8) cell_tport_appsw_pane_ParamLimits

0x8401,	// (0x000b4ec8) cell_tport_appsw_pane

0xd697,	// (0x000ba15e) tport_appsw_pane_g1_ParamLimits

0xd697,	// (0x000ba15e) tport_appsw_pane_g1

0xe7ed,	// (0x000bb2b4) tport_contact_pane_g1

0xe7f6,	// (0x000bb2bd) tport_contact_pane_t1

0xe804,	// (0x000bb2cb) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000bc855) tport_contact_pane_t

0xe812,	// (0x000bb2d9) list_tport_pane

0xe81b,	// (0x000bb2e2) scroll_pane_cp_030

0x8453,	// (0x000b4f1a) cell_tport_appsw_pane_g1

0x8463,	// (0x000b4f2a) cell_tport_appsw_pane_t1

0x8471,	// (0x000b4f38) grid_highlight_pane_cp019

0x8479,	// (0x000b4f40) list_tport_double_graphic_pane_ParamLimits

0x8479,	// (0x000b4f40) list_tport_double_graphic_pane

0x95af,	// (0x000b6076) list_highlight_pane_cp023_ParamLimits

0x95af,	// (0x000b6076) list_highlight_pane_cp023

0x8486,	// (0x000b4f4d) list_tport_double_graphic_pane_g1_ParamLimits

0x8486,	// (0x000b4f4d) list_tport_double_graphic_pane_g1

0x8493,	// (0x000b4f5a) list_tport_double_graphic_pane_t1_ParamLimits

0x8493,	// (0x000b4f5a) list_tport_double_graphic_pane_t1

0x84a8,	// (0x000b4f6f) list_tport_double_graphic_pane_t2_ParamLimits

0x84a8,	// (0x000b4f6f) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000bc861) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000bc861) list_tport_double_graphic_pane_t

0x955e,	// (0x000b6025) main_cale_note_pane

0x5ec3,	// (0x000b298a) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5ec3,	// (0x000b298a) cell_vitu2_function_top_wide_pane_cp01

0x798e,	// (0x000b4455) wait_bar_pane_cp05_ParamLimits

0x95af,	// (0x000b6076) listscroll_cmail_pane

0xe82c,	// (0x000bb2f3) list_cmail_pane

0x84c4,	// (0x000b4f8b) list_cmail_body_pane

0xe843,	// (0x000bb30a) list_single_cmail_header_caption_pane

0x84d7,	// (0x000b4f9e) list_single_cmail_header_detail_pane_ParamLimits

0x84d7,	// (0x000b4f9e) list_single_cmail_header_detail_pane

0x8502,	// (0x000b4fc9) list_single_cmail_header_caption_pane_t1

0x851d,	// (0x000b4fe4) list_single_cmail_header_detail_pane_g1_ParamLimits

0x851d,	// (0x000b4fe4) list_single_cmail_header_detail_pane_g1

0xbac3,	// (0x000b858a) list_single_cmail_header_detail_pane_g2_ParamLimits

0xbac3,	// (0x000b858a) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000bc866) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000bc866) list_single_cmail_header_detail_pane_g

0x8535,	// (0x000b4ffc) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8535,	// (0x000b4ffc) list_single_cmail_header_detail_pane_t1

0x8585,	// (0x000b504c) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8585,	// (0x000b504c) list_single_cmail_header_editor_pane_bg

0xe310,	// (0x000badd7) list_cmail_body_pane_g1

0xe86b,	// (0x000bb332) list_cmail_body_pane_t1

0xd6b7,	// (0x000ba17e) list_single_cmail_header_editor_pane_bg_g1

0xacb2,	// (0x000b7779) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6c7,	// (0x000ba18e) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6bf,	// (0x000ba186) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8e1,	// (0x000ba3a8) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6e7,	// (0x000ba1ae) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6d7,	// (0x000ba19e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6df,	// (0x000ba1a6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac92,	// (0x000b7759) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x859e,	// (0x000b5065) calenote_gesture_pane_ParamLimits

0x859e,	// (0x000b5065) calenote_gesture_pane

0x85be,	// (0x000b5085) calenote_window_pane_ParamLimits

0x85be,	// (0x000b5085) calenote_window_pane

0xe879,	// (0x000bb340) popup_note_window_cp01

0x85da,	// (0x000b50a1) calenote_swipe_1_pane_ParamLimits

0x85da,	// (0x000b50a1) calenote_swipe_1_pane

0x7dea,	// (0x000b48b1) calenote_swipe_2_pane_ParamLimits

0x7dea,	// (0x000b48b1) calenote_swipe_2_pane

0xe668,	// (0x000bb12f) calenote_swipe_1_pane_g1_ParamLimits

0xe668,	// (0x000bb12f) calenote_swipe_1_pane_g1

0xe675,	// (0x000bb13c) calenote_swipe_1_pane_g2_ParamLimits

0xe675,	// (0x000bb13c) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x000bc78a) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x000bc78a) calenote_swipe_1_pane_g

0xe88b,	// (0x000bb352) calenote_swipe_1_pane_t1_ParamLimits

0xe88b,	// (0x000bb352) calenote_swipe_1_pane_t1

0xe668,	// (0x000bb12f) calenote_swipe_2_pane_g1_ParamLimits

0xe668,	// (0x000bb12f) calenote_swipe_2_pane_g1

0xe8aa,	// (0x000bb371) calenote_swipe_2_pane_g2_ParamLimits

0xe8aa,	// (0x000bb371) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000bc872) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000bc872) calenote_swipe_2_pane_g

0xe8b6,	// (0x000bb37d) calenote_swipe_2_pane_t1_ParamLimits

0xe8b6,	// (0x000bb37d) calenote_swipe_2_pane_t1

0x955e,	// (0x000b6025) main_mup_navstr_pane

0x4b17,	// (0x000b15de) main_mup3_pane_t7_ParamLimits

0x4b17,	// (0x000b15de) main_mup3_pane_t7

0x9fbf,	// (0x000b6a86) main_mp4_pane_g6_ParamLimits

0x9fbf,	// (0x000b6a86) main_mp4_pane_g6

0xa163,	// (0x000b6c2a) main_image3_pane_t4_ParamLimits

0xa163,	// (0x000b6c2a) main_image3_pane_t4

0x85ef,	// (0x000b50b6) popup_navstr_preview_pane_ParamLimits

0x85ef,	// (0x000b50b6) popup_navstr_preview_pane

0x85ff,	// (0x000b50c6) scroll_navstr_pane_ParamLimits

0x85ff,	// (0x000b50c6) scroll_navstr_pane

0x955e,	// (0x000b6025) bg_popup_preview_window_pane_cp04

0xe8dd,	// (0x000bb3a4) popup_navstr_preview_pane_t1

0x8613,	// (0x000b50da) scroll_navstr_pane_g1_ParamLimits

0x8613,	// (0x000b50da) scroll_navstr_pane_g1

0x8627,	// (0x000b50ee) scroll_navstr_pane_t1_ParamLimits

0x8627,	// (0x000b50ee) scroll_navstr_pane_t1

0xe882,	// (0x000bb349) bg_button_pane_cp014

0xe882,	// (0x000bb349) bg_button_pane_cp030

0x7c80,	// (0x000b4747) list_double_fisheye_pane_g4_ParamLimits

0x7c80,	// (0x000b4747) list_double_fisheye_pane_g4

0x7c8c,	// (0x000b4753) list_double_fisheye_pane_g5_ParamLimits

0x7c8c,	// (0x000b4753) list_double_fisheye_pane_g5

0xe834,	// (0x000bb2fb) sp_fs_scroll_pane_cp03

0xe740,	// (0x000bb207) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe74c,	// (0x000bb213) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x000bc7a7) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe758,	// (0x000bb21f) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x84ba,	// (0x000b4f81) sp_fs_scroll_pane_cp02

0xa99f,	// (0x000b7466) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa99f,	// (0x000b7466) popup_sp_fs_calendar_preview_list_single_pane

0x955e,	// (0x000b6025) main_cam6_pano_pane

0x95af,	// (0x000b6076) main_mup3_pane_ParamLimits

0x955e,	// (0x000b6025) main_phacti_pane

0x7861,	// (0x000b4328) bg_button_pane_cp11

0x787b,	// (0x000b4342) main_mobtv_info_pane_g2_ParamLimits

0x787b,	// (0x000b4342) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x000bc707) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x000bc707) main_mobtv_info_pane_g

0x7a56,	// (0x000b451d) sc_clock_pane_t5_ParamLimits

0x7a56,	// (0x000b451d) sc_clock_pane_t5

0x7ae2,	// (0x000b45a9) main_radioblah_pane_g1_ParamLimits

0xe5b4,	// (0x000bb07b) main_radioblah_pane_t3_ParamLimits

0xe5b4,	// (0x000bb07b) main_radioblah_pane_t3

0xe5cc,	// (0x000bb093) main_radioblah_pane_t4_ParamLimits

0xe5cc,	// (0x000bb093) main_radioblah_pane_t4

0x7b0a,	// (0x000b45d1) main_radioblah_text_pane_ParamLimits

0x7b0a,	// (0x000b45d1) main_radioblah_text_pane

0x7b1c,	// (0x000b45e3) main_radioblah_info_pane_g1_ParamLimits

0x7bb5,	// (0x000b467c) main_radioblah_info_pane_t4_ParamLimits

0x7bb5,	// (0x000b467c) main_radioblah_info_pane_t4

0x95af,	// (0x000b6076) main_sp_fs_calendar_pane

0x863e,	// (0x000b5105) main_phacti_pane_g1

0x8646,	// (0x000b510d) phacti_note_pane_ParamLimits

0x8646,	// (0x000b510d) phacti_note_pane

0xe8f4,	// (0x000bb3bb) phacti_term_pane_ParamLimits

0xe8f4,	// (0x000bb3bb) phacti_term_pane

0xe909,	// (0x000bb3d0) phacti_note_pane_t1_ParamLimits

0xe909,	// (0x000bb3d0) phacti_note_pane_t1

0xa63a,	// (0x000b7101) phacti_term_pane_g1

0xa642,	// (0x000b7109) phacti_term_pane_t1_ParamLimits

0xa642,	// (0x000b7109) phacti_term_pane_t1

0xe920,	// (0x000bb3e7) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe928,	// (0x000bb3ef) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000bc87c) popup_sp_fs_calendar_preview_list_single_pane_g

0xe930,	// (0x000bb3f7) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe930,	// (0x000bb3f7) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe946,	// (0x000bb40d) aid_popup_sp_fs_bg_corner_pane

0xccb1,	// (0x000b9778) popup_sp_fs_calendar_preview_bg_pane_g1

0x955e,	// (0x000b6025) popup_sp_fs_calendar_preview_bg_pane

0xe94e,	// (0x000bb415) popup_sp_fs_calendar_preview_list_pane

0xc858,	// (0x000b931f) bg_main_sp_fs_cale_pane_ParamLimits

0xc858,	// (0x000b931f) bg_main_sp_fs_cale_pane

0xa675,	// (0x000b713c) listscroll_cale_mrui_pane_ParamLimits

0xa675,	// (0x000b713c) listscroll_cale_mrui_pane

0xa68a,	// (0x000b7151) listscroll_sp_fs_schedule_track_pane

0xa693,	// (0x000b715a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa693,	// (0x000b715a) main_sp_fs_ctrlbar_pane_cp01

0xe956,	// (0x000bb41d) main_sp_fs_ribbon_pane

0xa6a6,	// (0x000b716d) popup_sp_fs_cale_preview_window

0x86b7,	// (0x000b517e) list_single_sp_fs_schedule_track_pane_ParamLimits

0x86b7,	// (0x000b517e) list_single_sp_fs_schedule_track_pane

0x95af,	// (0x000b6076) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x95af,	// (0x000b6076) bg_sp_fs_highlight_list_pane_cp03

0x86cb,	// (0x000b5192) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x86cb,	// (0x000b5192) list_single_sp_fs_schedule_track_pane_g1

0x86d7,	// (0x000b519e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x86d7,	// (0x000b519e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000bc881) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000bc881) list_single_sp_fs_schedule_track_pane_g

0x86e3,	// (0x000b51aa) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x86e3,	// (0x000b51aa) list_single_sp_fs_schedule_track_pane_t1

0x8705,	// (0x000b51cc) sp_fs_schedule_track_pane_ParamLimits

0x8705,	// (0x000b51cc) sp_fs_schedule_track_pane

0xe95e,	// (0x000bb425) sp_fs_schedule_track_pane_g1

0xe966,	// (0x000bb42d) sp_fs_schedule_track_pane_g2

0xe96e,	// (0x000bb435) sp_fs_schedule_track_pane_g3

0xe976,	// (0x000bb43d) sp_fs_schedule_track_pane_g4

0xe97e,	// (0x000bb445) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000bc886) sp_fs_schedule_track_pane_g

0xd6b7,	// (0x000ba17e) bg_sp_fs_schedule_viewer_highlight_g1

0xacb2,	// (0x000b7779) bg_sp_fs_schedule_viewer_highlight_g2

0xd6bf,	// (0x000ba186) bg_sp_fs_schedule_viewer_highlight_g3

0xd6c7,	// (0x000ba18e) bg_sp_fs_schedule_viewer_highlight_g4

0xd8e1,	// (0x000ba3a8) bg_sp_fs_schedule_viewer_highlight_g5

0xd6d7,	// (0x000ba19e) bg_sp_fs_schedule_viewer_highlight_g6

0xd6df,	// (0x000ba1a6) bg_sp_fs_schedule_viewer_highlight_g7

0xd6e7,	// (0x000ba1ae) bg_sp_fs_schedule_viewer_highlight_g8

0xac92,	// (0x000b7759) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000bc891) bg_sp_fs_schedule_viewer_highlight_g

0x955e,	// (0x000b6025) bg_main_sp_fs_ribbon_pane

0x871a,	// (0x000b51e1) main_sp_fs_ribbon_pane_g1

0xe986,	// (0x000bb44d) main_sp_fs_ribbon_pane_t1

0x8723,	// (0x000b51ea) main_sp_fs_ribbon_pane_t2

0xe995,	// (0x000bb45c) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000bc8a4) main_sp_fs_ribbon_pane_t

0xe9a4,	// (0x000bb46b) main_sp_fs_ribbon_scheduler_pane

0xe9ac,	// (0x000bb473) bg_main_sp_fs_ribbon_pane_g1

0xe9b5,	// (0x000bb47c) bg_main_sp_fs_ribbon_pane_g2

0xe9be,	// (0x000bb485) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000bc8ab) bg_main_sp_fs_ribbon_pane_g

0xe9c6,	// (0x000bb48d) main_sp_fs_ribbon_scheduler_pane_g1

0xe9cf,	// (0x000bb496) main_sp_fs_ribbon_scheduler_pane_g2

0xe9d8,	// (0x000bb49f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000bc8b2) main_sp_fs_ribbon_scheduler_pane_g

0xe9e1,	// (0x000bb4a8) list_cale_mrui_pane

0x8732,	// (0x000b51f9) sp_fs_scroll_pane_cp07_ParamLimits

0x8732,	// (0x000b51f9) sp_fs_scroll_pane_cp07

0x874e,	// (0x000b5215) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x874e,	// (0x000b5215) bg_sp_fs_schedule_viewer_highlight

0xe9ee,	// (0x000bb4b5) list_single_sp_fs_schedule_track_pane_cp01

0xe9f6,	// (0x000bb4bd) list_sp_fs_schedule_track_pane

0xe9fe,	// (0x000bb4c5) sp_fs_scroll_pane_cp06_ParamLimits

0xe9fe,	// (0x000bb4c5) sp_fs_scroll_pane_cp06

0xccb1,	// (0x000b9778) bgmain_sp_fs_calendar_pane_g1

0x8760,	// (0x000b5227) list_single_cale_mrui_pane_ParamLimits

0x8760,	// (0x000b5227) list_single_cale_mrui_pane

0xa6b8,	// (0x000b717f) list_single_cale_mrui_row_pane_ParamLimits

0xa6b8,	// (0x000b717f) list_single_cale_mrui_row_pane

0xa6ce,	// (0x000b7195) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa6ce,	// (0x000b7195) list_single_cale_mrui_row_pane_g1

0xa6fa,	// (0x000b71c1) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa6fa,	// (0x000b71c1) list_single_cale_mrui_row_pane_t1

0x8775,	// (0x000b523c) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8775,	// (0x000b523c) list_single_cale_mrui_row_pane_t2

0xa70c,	// (0x000b71d3) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa70c,	// (0x000b71d3) list_single_cale_mrui_row_pane_t3

0xa73b,	// (0x000b7202) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa73b,	// (0x000b7202) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000bc8c0) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000bc8c0) list_single_cale_mrui_row_pane_t

0x87dd,	// (0x000b52a4) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x87dd,	// (0x000b52a4) list_single_cmail_header_editor_pane_bg_cp01

0x8801,	// (0x000b52c8) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8801,	// (0x000b52c8) list_single_cmail_header_editor_pane_bg_cp02

0x881f,	// (0x000b52e6) main_radioblah_text_pane_t1_ParamLimits

0x881f,	// (0x000b52e6) main_radioblah_text_pane_t1

0xea1d,	// (0x000bb4e4) cam6_indi_pane_cp01

0xea25,	// (0x000bb4ec) cam6_mode_pane_cp01

0xea2d,	// (0x000bb4f4) cam6_pano_pane

0xea36,	// (0x000bb4fd) cam6_zoom_pane_cp01

0xea40,	// (0x000bb507) cam6_pano_image_pane

0xea49,	// (0x000bb510) cam6_pano_pane_g1

0xe310,	// (0x000badd7) cam6_pano_pane_g2

0xea52,	// (0x000bb519) cam6_pano_pane_g3

0xea5b,	// (0x000bb522) cam6_pano_pane_g4

0xd22b,	// (0x000b9cf2) cam6_pano_pane_g5

0xea64,	// (0x000bb52b) cam6_pano_pane_g6

0xea6c,	// (0x000bb533) cam6_pano_pane_g7

0xea74,	// (0x000bb53b) cam6_pano_pane_g8

0xea7d,	// (0x000bb544) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x000bc8c9) cam6_pano_pane_g

0x955e,	// (0x000b6025) main_browser_tag_pane

0xe8d5,	// (0x000bb39c) grid_navstr_albumart_pane

0xea88,	// (0x000bb54f) cell_navstr_albumart_pane_ParamLimits

0xea88,	// (0x000bb54f) cell_navstr_albumart_pane

0xeaa7,	// (0x000bb56e) cell_navstr_albumart_pane_g1

0xc665,	// (0x000b912c) cell_navstr_albumart_pane_g2

0xc675,	// (0x000b913c) cell_navstr_albumart_pane_g3

0xc66d,	// (0x000b9134) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x000bc8dc) cell_navstr_albumart_pane_g

0x883a,	// (0x000b5301) bt_list_pane_ParamLimits

0x883a,	// (0x000b5301) bt_list_pane

0x8850,	// (0x000b5317) bt_list_pane_t1

0x885f,	// (0x000b5326) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x000bc8e5) bt_list_pane_t

0x955e,	// (0x000b6025) main_cale_prevew_pane

0x886e,	// (0x000b5335) popup_cale_preview_window_ParamLimits

0x886e,	// (0x000b5335) popup_cale_preview_window

0x95af,	// (0x000b6076) bg_popup_preview_window_pane_cp05_ParamLimits

0x95af,	// (0x000b6076) bg_popup_preview_window_pane_cp05

0xeaaf,	// (0x000bb576) list_cale_preview_pane_ParamLimits

0xeaaf,	// (0x000bb576) list_cale_preview_pane

0x888b,	// (0x000b5352) list_double_cale_preview_pane_ParamLimits

0x888b,	// (0x000b5352) list_double_cale_preview_pane

0x889f,	// (0x000b5366) list_single_cale_preview_pane_ParamLimits

0x889f,	// (0x000b5366) list_single_cale_preview_pane

0x88b7,	// (0x000b537e) list_single_cale_preview_pane_g1

0x88bf,	// (0x000b5386) list_single_cale_preview_pane_t1_ParamLimits

0x88bf,	// (0x000b5386) list_single_cale_preview_pane_t1

0x88d4,	// (0x000b539b) list_double_cale_preview_pane_g1

0x88dc,	// (0x000b53a3) list_double_cale_preview_pane_t1_ParamLimits

0x88dc,	// (0x000b53a3) list_double_cale_preview_pane_t1

0x88f1,	// (0x000b53b8) list_double_cale_preview_pane_t2_ParamLimits

0x88f1,	// (0x000b53b8) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x000bc8ea) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x000bc8ea) list_double_cale_preview_pane_t

0x955e,	// (0x000b6025) main_ezdial_pane

0x95af,	// (0x000b6076) main_sp_fs_email_pane_ParamLimits

0x7e26,	// (0x000b48ed) cmail_ddmenu_btn01_pane_ParamLimits

0x7e26,	// (0x000b48ed) cmail_ddmenu_btn01_pane

0x7e39,	// (0x000b4900) cmail_ddmenu_btn02_pane_ParamLimits

0x7e39,	// (0x000b4900) cmail_ddmenu_btn02_pane

0x7e5c,	// (0x000b4923) cmail_ddmenu_btn03_pane_ParamLimits

0x7e5c,	// (0x000b4923) cmail_ddmenu_btn03_pane

0x7e87,	// (0x000b494e) main_sp_fs_ctrlbar_pane_ParamLimits

0x7eab,	// (0x000b4972) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x84c4,	// (0x000b4f8b) list_cmail_body_pane_ParamLimits

0x8512,	// (0x000b4fd9) bg_button_pane_cp12

0xe85e,	// (0x000bb325) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe85e,	// (0x000bb325) list_single_cmail_header_detail_pane_g3

0xa616,	// (0x000b70dd) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa616,	// (0x000b70dd) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000bc86d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000bc86d) list_single_cmail_header_detail_pane_t

0xa657,	// (0x000b711e) phacti_term_pane_t2_ParamLimits

0xa657,	// (0x000b711e) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000bc877) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000bc877) phacti_term_pane_t

0xeabb,	// (0x000bb582) aid_size_list_single_double

0x8909,	// (0x000b53d0) popup_ezdial_listscroll_window

0x8925,	// (0x000b53ec) popup_number_entry_window_cp01

0xb38b,	// (0x000b7e52) bg_popup_call_pane_cp09

0xeac7,	// (0x000bb58e) ezdial_list_pane

0xeacf,	// (0x000bb596) scroll_pane_cp23

0xc858,	// (0x000b931f) bg_button_pane_cp028_ParamLimits

0xc858,	// (0x000b931f) bg_button_pane_cp028

0x8933,	// (0x000b53fa) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8933,	// (0x000b53fa) cmail_ddmenu_btn01_pane_g1

0x8942,	// (0x000b5409) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8942,	// (0x000b5409) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x000bc8ef) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x000bc8ef) cmail_ddmenu_btn01_pane_g

0xead7,	// (0x000bb59e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xead7,	// (0x000bb59e) cmail_ddmenu_btn01_pane_t1

0xc858,	// (0x000b931f) bg_button_pane_cp029_ParamLimits

0xc858,	// (0x000b931f) bg_button_pane_cp029

0x8958,	// (0x000b541f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8958,	// (0x000b541f) cmail_ddmenu_btn02_pane_g1

0x8973,	// (0x000b543a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8973,	// (0x000b543a) cmail_ddmenu_btn02_pane_t1

0x95af,	// (0x000b6076) bg_button_pane_cp031_ParamLimits

0x95af,	// (0x000b6076) bg_button_pane_cp031

0x8958,	// (0x000b541f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8958,	// (0x000b541f) cmail_ddmenu_btn03_pane_g1

0x8973,	// (0x000b543a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8973,	// (0x000b543a) cmail_ddmenu_btn03_pane_t1

0x56f7,	// (0x000b21be) cell_dialer2_keypad_pane_t1_ParamLimits

0x5711,	// (0x000b21d8) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5711,	// (0x000b21d8) cell_dialer2_keypad_pane_t1_copy1

0x76b8,	// (0x000b417f) ncimui_group_button_pane

0x95af,	// (0x000b6076) main_sp_fs_calendar_pane_ParamLimits

0xe843,	// (0x000bb30a) list_single_cmail_header_caption_pane_ParamLimits

0xa66c,	// (0x000b7133) aid_recal_txt_sm_pane

0x955e,	// (0x000b6025) mian_recal_day_pane

0xa6a6,	// (0x000b716d) popup_sp_fs_cale_preview_window_ParamLimits

0xeaed,	// (0x000bb5b4) list_recal_day_pane

0xa786,	// (0x000b724d) list_single_recal_day_pane_ParamLimits

0xa786,	// (0x000b724d) list_single_recal_day_pane

0xeb14,	// (0x000bb5db) list_single_recal_day_pane_g1_ParamLimits

0xeb14,	// (0x000bb5db) list_single_recal_day_pane_g1

0xa798,	// (0x000b725f) list_single_recal_day_pane_g2_ParamLimits

0xa798,	// (0x000b725f) list_single_recal_day_pane_g2

0xa7a4,	// (0x000b726b) list_single_recal_day_pane_g3_ParamLimits

0xa7a4,	// (0x000b726b) list_single_recal_day_pane_g3

0x899a,	// (0x000b5461) list_single_recal_day_pane_g4_ParamLimits

0x899a,	// (0x000b5461) list_single_recal_day_pane_g4

0xa7b0,	// (0x000b7277) list_single_recal_day_pane_g5_ParamLimits

0xa7b0,	// (0x000b7277) list_single_recal_day_pane_g5

0xa7bc,	// (0x000b7283) list_single_recal_day_pane_g6_ParamLimits

0xa7bc,	// (0x000b7283) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x000bc8fe) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x000bc8fe) list_single_recal_day_pane_g

0xa7d0,	// (0x000b7297) list_single_recal_day_pane_t1

0xa7e2,	// (0x000b72a9) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x000bc909) list_single_recal_day_pane_t

0x89b2,	// (0x000b5479) ncimui_query_button_pane_ParamLimits

0x89b2,	// (0x000b5479) ncimui_query_button_pane

0x89c2,	// (0x000b5489) ncimui_query_button_pane_t1_ParamLimits

0x89c2,	// (0x000b5489) ncimui_query_button_pane_t1

0xeb20,	// (0x000bb5e7) ncimui_query_button_pane_t2_ParamLimits

0xeb20,	// (0x000bb5e7) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x000bc90e) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x000bc90e) ncimui_query_button_pane_t

0x89d5,	// (0x000b549c) query_button_pane_ParamLimits

0x89d5,	// (0x000b549c) query_button_pane

0x955e,	// (0x000b6025) bg_button_pane_cp0028

0xeb33,	// (0x000bb5fa) query_button_pane_t1

0x36c4,	// (0x000b018b) main_tport_pane_ParamLimits

0x8374,	// (0x000b4e3b) bg_popup_window_pane_cp01_ParamLimits

0x8374,	// (0x000b4e3b) bg_popup_window_pane_cp01

0x838f,	// (0x000b4e56) heading_pane_cp08_ParamLimits

0x838f,	// (0x000b4e56) heading_pane_cp08

0x83a2,	// (0x000b4e69) heading_pane_cp07_ParamLimits

0x83a2,	// (0x000b4e69) heading_pane_cp07

0x8453,	// (0x000b4f1a) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000bc85a) cell_tport_appsw_pane_g

0x9dc4,	// (0x000b688b) input_candi_list_open_g1

0xae66,	// (0x000b792d) list_cale_time_pane_g6_ParamLimits

0xae66,	// (0x000b792d) list_cale_time_pane_g6

0x44ce,	// (0x000b0f95) aid_size_touch_calib_1_ParamLimits

0x44ce,	// (0x000b0f95) aid_size_touch_calib_1

0x44e0,	// (0x000b0fa7) aid_size_touch_calib_2_ParamLimits

0x44e0,	// (0x000b0fa7) aid_size_touch_calib_2

0x44f8,	// (0x000b0fbf) aid_size_touch_calib_3_ParamLimits

0x44f8,	// (0x000b0fbf) aid_size_touch_calib_3

0x4516,	// (0x000b0fdd) aid_size_touch_calib_4_ParamLimits

0x4516,	// (0x000b0fdd) aid_size_touch_calib_4

0x452e,	// (0x000b0ff5) main_touch_calib_button_group_pane_ParamLimits

0x452e,	// (0x000b0ff5) main_touch_calib_button_group_pane

0x4546,	// (0x000b100d) main_touch_calib_pane_g1_ParamLimits

0x4558,	// (0x000b101f) main_touch_calib_pane_g2_ParamLimits

0x456a,	// (0x000b1031) main_touch_calib_pane_g3_ParamLimits

0x457c,	// (0x000b1043) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x000bc21d) main_touch_calib_pane_g_ParamLimits

0x458e,	// (0x000b1055) main_touch_calib_pane_t1_ParamLimits

0x45a8,	// (0x000b106f) main_touch_calib_pane_t2_ParamLimits

0x45c2,	// (0x000b1089) main_touch_calib_pane_t3_ParamLimits

0x45d6,	// (0x000b109d) main_touch_calib_pane_t4_ParamLimits

0x45ec,	// (0x000b10b3) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x000bc226) main_touch_calib_pane_t_ParamLimits

0xcfe1,	// (0x000b9aa8) list_single_fp_cale_pane_g3_ParamLimits

0xcfe1,	// (0x000b9aa8) list_single_fp_cale_pane_g3

0xa20e,	// (0x000b6cd5) bg_button_pane_cp012_ParamLimits

0xa20e,	// (0x000b6cd5) bg_vkb2_func_pane_cp03_ParamLimits

0x671f,	// (0x000b31e6) cell_vitu2_function_top_pane_g1_ParamLimits

0xa20e,	// (0x000b6cd5) bg_vkb2_func_pane_cp04_ParamLimits

0x7646,	// (0x000b410d) main_ncimui_button_group_pane_ParamLimits

0x7646,	// (0x000b410d) main_ncimui_button_group_pane

0x76a6,	// (0x000b416d) main_ncimui_pane_t3_ParamLimits

0x76a6,	// (0x000b416d) main_ncimui_pane_t3

0xe8eb,	// (0x000bb3b2) phacti_button_group_pane

0xeabb,	// (0x000bb582) aid_size_list_single_double_ParamLimits

0x8909,	// (0x000b53d0) popup_ezdial_listscroll_window_ParamLimits

0x8925,	// (0x000b53ec) popup_number_entry_window_cp01_ParamLimits

0x89e8,	// (0x000b54af) phacti_button_pane_ParamLimits

0x89e8,	// (0x000b54af) phacti_button_pane

0x955e,	// (0x000b6025) bg_button_pane_cp14

0xeb41,	// (0x000bb608) phacti_button_pane_t1

0x89f9,	// (0x000b54c0) main_touch_calib_button_pane_ParamLimits

0x89f9,	// (0x000b54c0) main_touch_calib_button_pane

0xa889,	// (0x000b7350) bg_button_pane_cp18_ParamLimits

0xa889,	// (0x000b7350) bg_button_pane_cp18

0xeb4f,	// (0x000bb616) main_touch_calib_button_pane_t1_ParamLimits

0xeb4f,	// (0x000bb616) main_touch_calib_button_pane_t1

0xeb65,	// (0x000bb62c) main_touch_calib_button_pane_t2_ParamLimits

0xeb65,	// (0x000bb62c) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x000bc913) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x000bc913) main_touch_calib_button_pane_t

0x955e,	// (0x000b6025) cell_ncimui_button_pane

0x955e,	// (0x000b6025) bg_button_pane_cp032

0xeb83,	// (0x000bb64a) cell_ncimui_button_pane_t1

0xa141,	// (0x000b6c08) image3_infobar_pane_ParamLimits

0xa141,	// (0x000b6c08) image3_infobar_pane

0x7a82,	// (0x000b4549) fs_bigclock_status_pane_ParamLimits

0x7a82,	// (0x000b4549) fs_bigclock_status_pane

0x7a8f,	// (0x000b4556) main_fs_bigclock_clock_pane_ParamLimits

0x7a8f,	// (0x000b4556) main_fs_bigclock_clock_pane

0x7aa3,	// (0x000b456a) main_fs_bigclock_indi_pane_ParamLimits

0x7aa3,	// (0x000b456a) main_fs_bigclock_indi_pane

0x7abe,	// (0x000b4585) main_fs_bigclock_swipe_pane_ParamLimits

0x7abe,	// (0x000b4585) main_fs_bigclock_swipe_pane

0x955e,	// (0x000b6025) main_fs_clock_dumped_data

0xe41d,	// (0x000baee4) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe41d,	// (0x000baee4) list_single_fs_bigclock_indicator_pane_g1

0xe447,	// (0x000baf0e) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe447,	// (0x000baf0e) list_single_fs_bigclock_indicator_pane_g2

0xe461,	// (0x000baf28) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe461,	// (0x000baf28) list_single_fs_bigclock_indicator_pane_g3

0xe47b,	// (0x000baf42) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe47b,	// (0x000baf42) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x000bc73b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x000bc73b) list_single_fs_bigclock_indicator_pane_g

0xe4a6,	// (0x000baf6d) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4a6,	// (0x000baf6d) list_single_fs_bigclock_indicator_pane_t1

0xe4ce,	// (0x000baf95) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4ce,	// (0x000baf95) list_single_fs_bigclock_indicator_pane_t2

0xe4f6,	// (0x000bafbd) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4f6,	// (0x000bafbd) list_single_fs_bigclock_indicator_pane_t3

0xe51e,	// (0x000bafe5) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe51e,	// (0x000bafe5) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x000bc746) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x000bc746) list_single_fs_bigclock_indicator_pane_t

0xeb91,	// (0x000bb658) image3_infobar_fav_pane_ParamLimits

0xeb91,	// (0x000bb658) image3_infobar_fav_pane

0xeba1,	// (0x000bb668) image3_infobar_loc_pane_ParamLimits

0xeba1,	// (0x000bb668) image3_infobar_loc_pane

0xebb7,	// (0x000bb67e) image3_infobar_time_pane_ParamLimits

0xebb7,	// (0x000bb67e) image3_infobar_time_pane

0xccb1,	// (0x000b9778) image3_infobar_time_pane_g1

0xebc7,	// (0x000bb68e) image3_infobar_time_pane_t1

0xccb1,	// (0x000b9778) image3_infobar_loc_pane_g1

0xebd5,	// (0x000bb69c) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x000bc918) image3_infobar_loc_pane_g

0xebdd,	// (0x000bb6a4) image3_infobar_loc_pane_t1

0xccb1,	// (0x000b9778) image3_infobar_fav_pane_g1

0xebeb,	// (0x000bb6b2) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x000bc91d) image3_infobar_fav_pane_g

0xebf3,	// (0x000bb6ba) fs_bigclock_status_battery_pane

0xebfc,	// (0x000bb6c3) fs_bigclock_status_signal_pane

0xec05,	// (0x000bb6cc) fs_bigclock_status_title_pane

0xec0e,	// (0x000bb6d5) fs_bigclock_status_signal_pane_g1

0xec17,	// (0x000bb6de) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x000bc922) fs_bigclock_status_signal_pane_g

0xec1f,	// (0x000bb6e6) fs_bigclock_status_battery_pane_g1

0xec28,	// (0x000bb6ef) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x000bc927) fs_bigclock_status_battery_pane_g

0xec30,	// (0x000bb6f7) fs_bigclock_status_title_pane_t1

0xccb1,	// (0x000b9778) main_fs_bigclock_clock_pane_g1

0xec3e,	// (0x000bb705) main_fs_bigclock_clock_pane_g2

0xec3e,	// (0x000bb705) main_fs_bigclock_clock_pane_g3

0xec3e,	// (0x000bb705) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x000bc92c) main_fs_bigclock_clock_pane_g

0xec46,	// (0x000bb70d) main_fs_bigclock_clock_pane_t1

0xec54,	// (0x000bb71b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x000bc935) main_fs_bigclock_clock_pane_t

0x8a0e,	// (0x000b54d5) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8a0e,	// (0x000b54d5) list_single_fs_bigclock_indicator_pane

0x8a1f,	// (0x000b54e6) list_single_fs_bigclock_pane_ParamLimits

0x8a1f,	// (0x000b54e6) list_single_fs_bigclock_pane

0xec6c,	// (0x000bb733) main_fs_bigclock_indicator_pane_t1

0xec7b,	// (0x000bb742) list_single_fs_bigclock_pane_g1

0xec83,	// (0x000bb74a) list_single_fs_bigclock_pane_t1

0xccb1,	// (0x000b9778) main_fs_bigclock_swipe_pane_g1

0xecc6,	// (0x000bb78d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x000bc946) main_fs_bigclock_swipe_pane_g

0xecce,	// (0x000bb795) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecce,	// (0x000bb795) main_fs_bigclock_swipe_pane_t1

0x23d6,	// (0x000aee9d) call_type_pane_ParamLimits

0x955e,	// (0x000b6025) main_btmg_pane

0xbacf,	// (0x000b8596) list_single_cale_mrui_row_pane_g2_ParamLimits

0xbacf,	// (0x000b8596) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000bc8b9) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000bc8b9) list_single_cale_mrui_row_pane_g

0xa774,	// (0x000b723b) list_recal_vselct_arw_lo_pane

0xeb0c,	// (0x000bb5d3) list_recal_vselct_arw_up_pane

0xa77c,	// (0x000b7243) list_recal_vselct_pane

0x8a82,	// (0x000b5549) btmg_button_pane

0x8a8c,	// (0x000b5553) main_btmg_pane_g1

0x955e,	// (0x000b6025) bg_button_pane_cp044

0xeceb,	// (0x000bb7b2) btmg_button_pane_t1

0xc844,	// (0x000b930b) aid_listscroll_gen

0x95af,	// (0x000b6076) main_cntbar_detail_pane

0xe824,	// (0x000bb2eb) list_cmail_folder_pane

0xe834,	// (0x000bb2fb) sp_fs_scroll_pane_cp03_ParamLimits

0xbadb,	// (0x000b85a2) list_single_fs_dyc_pane_cp01_ParamLimits

0xbadb,	// (0x000b85a2) list_single_fs_dyc_pane_cp01

0xecf9,	// (0x000bb7c0) aid_size_cmail_indent

0xbaf5,	// (0x000b85bc) list_single_dyc_row_pane_cp01

0x8ac6,	// (0x000b558d) cntbar_detail_list_pane_ParamLimits

0x8ac6,	// (0x000b558d) cntbar_detail_list_pane

0x8b18,	// (0x000b55df) main_cntbar_detail_cont_pane_ParamLimits

0x8b18,	// (0x000b55df) main_cntbar_detail_cont_pane

0x22f9,	// (0x000aedc0) scroll_pane_cp032_ParamLimits

0x22f9,	// (0x000aedc0) scroll_pane_cp032

0x8b2c,	// (0x000b55f3) cntbar_detail_list_event_pane_ParamLimits

0x8b2c,	// (0x000b55f3) cntbar_detail_list_event_pane

0x8ad8,	// (0x000b559f) cntbar_detail_list_shct_pane

0xad00,	// (0x000b77c7) aid_list_gen

0xed02,	// (0x000bb7c9) aid_scroll

0xed0b,	// (0x000bb7d2) aid_size_touch_scroll_bar

0x6e14,	// (0x000b38db) aid_list_double

0xed14,	// (0x000bb7db) aid_list_single

0x6e02,	// (0x000b38c9) aid_list_single_lg

0xbafe,	// (0x000b85c5) aid_list_z_g_a_sm

0xbb06,	// (0x000b85cd) aid_list_z_g_d

0xbb0e,	// (0x000b85d5) aid_txt_z_prm

0x8b3c,	// (0x000b5603) aid_txt_z_prm_cp01

0x8b4a,	// (0x000b5611) aid_txt_z_sec

0x8b58,	// (0x000b561f) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8b58,	// (0x000b561f) main_cntbar_detail_cont_pane_g1

0x8b6c,	// (0x000b5633) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8b6c,	// (0x000b5633) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x000bc94b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x000bc94b) main_cntbar_detail_cont_pane_g

0xed1d,	// (0x000bb7e4) main_cntbar_detail_cont_pane_t1

0xed2b,	// (0x000bb7f2) main_cntbar_detail_cont_pane_t2

0xed39,	// (0x000bb800) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x000bc950) main_cntbar_detail_cont_pane_t

0x8b7c,	// (0x000b5643) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8b7c,	// (0x000b5643) cell_cntbar_detail_list_shct_pane

0xed47,	// (0x000bb80e) cntbar_detail_list_shct_pane_g1

0xed50,	// (0x000bb817) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x000bc957) cntbar_detail_list_shct_pane_g

0x8b8e,	// (0x000b5655) cntbar_detail_list_event_pane_g1_ParamLimits

0x8b8e,	// (0x000b5655) cntbar_detail_list_event_pane_g1

0x8b9a,	// (0x000b5661) cntbar_detail_list_event_pane_g2_ParamLimits

0x8b9a,	// (0x000b5661) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x000bc95c) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x000bc95c) cntbar_detail_list_event_pane_g

0x8c08,	// (0x000b56cf) cntbar_detail_list_event_pane_t1_ParamLimits

0x8c08,	// (0x000b56cf) cntbar_detail_list_event_pane_t1

0x8c1d,	// (0x000b56e4) cntbar_detail_list_event_pane_t2_ParamLimits

0x8c1d,	// (0x000b56e4) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000bc969) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000bc969) cntbar_detail_list_event_pane_t

0xccb1,	// (0x000b9778) cell_cntbar_detail_list_shct_pane_g1

0x277c,	// (0x000af243) navi_pane_mv_g3

0x95af,	// (0x000b6076) main_cntbar_detail_pane_ParamLimits

0x955e,	// (0x000b6025) main_notif_wgt_pane

0x9f59,	// (0x000b6a20) aid_tch_main_mp4_pane_g4

0xa137,	// (0x000b6bfe) popup_slider_window_cp02

0xa76a,	// (0x000b7231) list_recal_day_event_pane

0x8a96,	// (0x000b555d) cntbar_detail_btn_pane_ParamLimits

0x8a96,	// (0x000b555d) cntbar_detail_btn_pane

0x8aae,	// (0x000b5575) cntbar_detail_btn_pane_cp01_ParamLimits

0x8aae,	// (0x000b5575) cntbar_detail_btn_pane_cp01

0x8ad8,	// (0x000b559f) cntbar_detail_list_shct_pane_ParamLimits

0x8ae8,	// (0x000b55af) cntbar_detail_pane_g1_ParamLimits

0x8ae8,	// (0x000b55af) cntbar_detail_pane_g1

0x8afc,	// (0x000b55c3) cntbar_detail_pane_t1_ParamLimits

0x8afc,	// (0x000b55c3) cntbar_detail_pane_t1

0x8ba6,	// (0x000b566d) cntbar_detail_list_event_pane_g3_ParamLimits

0x8ba6,	// (0x000b566d) cntbar_detail_list_event_pane_g3

0x8bbe,	// (0x000b5685) cntbar_detail_list_event_pane_g4_ParamLimits

0x8bbe,	// (0x000b5685) cntbar_detail_list_event_pane_g4

0x8bd6,	// (0x000b569d) cntbar_detail_list_event_pane_g5_ParamLimits

0x8bd6,	// (0x000b569d) cntbar_detail_list_event_pane_g5

0x8bee,	// (0x000b56b5) cntbar_detail_list_event_pane_g6_ParamLimits

0x8bee,	// (0x000b56b5) cntbar_detail_list_event_pane_g6

0x8c32,	// (0x000b56f9) cntbar_detail_list_event_pane_t3_ParamLimits

0x8c32,	// (0x000b56f9) cntbar_detail_list_event_pane_t3

0x8c44,	// (0x000b570b) popup_notif_wgt_window_ParamLimits

0x8c44,	// (0x000b570b) popup_notif_wgt_window

0x8c5d,	// (0x000b5724) popup_submenu_window_cp01_ParamLimits

0x8c5d,	// (0x000b5724) popup_submenu_window_cp01

0xb38b,	// (0x000b7e52) bg_popup_window_pane_cp10

0xed59,	// (0x000bb820) listscroll_notif_wgt_pane

0xed6b,	// (0x000bb832) list_notif_wgt_window

0xed74,	// (0x000bb83b) scroll_pane_cp033

0x8c71,	// (0x000b5738) list_notif_wgt_row_pane_ParamLimits

0x8c71,	// (0x000b5738) list_notif_wgt_row_pane

0xed7d,	// (0x000bb844) aid_size_list_notif_wgt_del

0xed8a,	// (0x000bb851) list_notif_wgt_row_pane_g1

0xed96,	// (0x000bb85d) list_notif_wgt_row_pane_g2

0xeda2,	// (0x000bb869) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x000bc970) list_notif_wgt_row_pane_g

0xedaf,	// (0x000bb876) list_notif_wgt_row_pane_t1

0xedc4,	// (0x000bb88b) list_notif_wgt_row_pane_t2

0xedd6,	// (0x000bb89d) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x000bc977) list_notif_wgt_row_pane_t

0xd8fb,	// (0x000ba3c2) list_recal_day_event_pane_g1

0xede8,	// (0x000bb8af) list_recal_day_event_pane_t1

0x955e,	// (0x000b6025) bg_button_pane_cp045

0xedf7,	// (0x000bb8be) cntbar_detail_btn_pane_t1

0xc858,	// (0x000b931f) main_callh_pane_ParamLimits

0xc858,	// (0x000b931f) main_callh_pane

0x955e,	// (0x000b6025) main_coverflow0_pane

0x955e,	// (0x000b6025) main_wgtman_pane

0x7acc,	// (0x000b4593) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7acc,	// (0x000b4593) main_fs_bigclock_unlock_btn_pane

0x844b,	// (0x000b4f12) bg_button_pane_cp16

0x845b,	// (0x000b4f22) cell_tport_appsw_pane_g3

0x8c81,	// (0x000b5748) cf0_flow_pane_ParamLimits

0x8c81,	// (0x000b5748) cf0_flow_pane

0xee05,	// (0x000bb8cc) listscroll_cf0_pane

0xee10,	// (0x000bb8d7) main_cf0_pane_g1

0x8c96,	// (0x000b575d) main_cf0_pane_t1_ParamLimits

0x8c96,	// (0x000b575d) main_cf0_pane_t1

0x8cad,	// (0x000b5774) main_cf0_pane_t2_ParamLimits

0x8cad,	// (0x000b5774) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000bc983) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000bc983) main_cf0_pane_t

0xee22,	// (0x000bb8e9) scroll_pane_cp11

0x8cc4,	// (0x000b578b) cf0_flow_pane_g1

0x8cd0,	// (0x000b5797) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000bc988) cf0_flow_pane_g

0x8cdc,	// (0x000b57a3) cf0_flow_pane_t1

0x955e,	// (0x000b6025) main_call6_pane

0x955e,	// (0x000b6025) main_calllock_pane

0x8cee,	// (0x000b57b5) call6_btn_grp_pane_ParamLimits

0x8cee,	// (0x000b57b5) call6_btn_grp_pane

0x8d08,	// (0x000b57cf) call6_pane_g1_ParamLimits

0x8d08,	// (0x000b57cf) call6_pane_g1

0x8d1e,	// (0x000b57e5) popup_call6_1st_window_ParamLimits

0x8d1e,	// (0x000b57e5) popup_call6_1st_window

0x8d2f,	// (0x000b57f6) popup_call6_2nd_window_ParamLimits

0x8d2f,	// (0x000b57f6) popup_call6_2nd_window

0x8d40,	// (0x000b5807) cell_call6_btn_pane_ParamLimits

0x8d40,	// (0x000b5807) cell_call6_btn_pane

0xb38b,	// (0x000b7e52) bg_popup_call2_in_pane_cp03

0xee2d,	// (0x000bb8f4) popup_call6_1st_window_g1

0xee35,	// (0x000bb8fc) popup_call6_1st_window_g2

0xee3d,	// (0x000bb904) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000bc98d) popup_call6_1st_window_g

0xee45,	// (0x000bb90c) popup_call6_1st_window_t1

0xee54,	// (0x000bb91b) popup_call6_1st_window_t2

0xee64,	// (0x000bb92b) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000bc994) popup_call6_1st_window_t

0xb38b,	// (0x000b7e52) bg_popup_call2_in_pane_cp04

0xee2d,	// (0x000bb8f4) popup_call6_2nd_window_g1

0xee35,	// (0x000bb8fc) popup_call6_2nd_window_g2

0xee3d,	// (0x000bb904) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000bc98d) popup_call6_2nd_window_g

0xee45,	// (0x000bb90c) popup_call6_2nd_window_t1

0x955e,	// (0x000b6025) bg_button_pane_cp15

0xee74,	// (0x000bb93b) cell_call6_btn_pane_g1

0xee7d,	// (0x000bb944) cell_call6_btn_pane_t1

0x8d54,	// (0x000b581b) listscroll_wgtman_pane_ParamLimits

0x8d54,	// (0x000b581b) listscroll_wgtman_pane

0x8d75,	// (0x000b583c) wgtman_btn_pane_ParamLimits

0x8d75,	// (0x000b583c) wgtman_btn_pane

0xb251,	// (0x000b7d18) aid_scroll_copy1

0xee8c,	// (0x000bb953) list_wgtman_pane

0x8db8,	// (0x000b587f) wgtman_btn_pane_g1_ParamLimits

0x8db8,	// (0x000b587f) wgtman_btn_pane_g1

0x8de4,	// (0x000b58ab) wgtman_btn_pane_t1_ParamLimits

0x8de4,	// (0x000b58ab) wgtman_btn_pane_t1

0xee96,	// (0x000bb95d) wgtman_btn_pane_t2_ParamLimits

0xee96,	// (0x000bb95d) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000bc99b) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000bc99b) wgtman_btn_pane_t

0x8e21,	// (0x000b58e8) listrow_wgtman_pane_ParamLimits

0x8e21,	// (0x000b58e8) listrow_wgtman_pane

0x8e33,	// (0x000b58fa) listrow_wgtman_pane_g1

0x8e40,	// (0x000b5907) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000bc9a0) listrow_wgtman_pane_g

0x8e5e,	// (0x000b5925) listrow_wgtman_pane_t1

0x8e76,	// (0x000b593d) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000bc9a5) listrow_wgtman_pane_t

0x8e9c,	// (0x000b5963) wait_bar_pane_cp09

0xeead,	// (0x000bb974) main_calllock_btn_pane

0xeeb7,	// (0x000bb97e) main_calllock_pane_g1

0x955e,	// (0x000b6025) bg_button_pane_cp17

0xeec3,	// (0x000bb98a) main_calllock_btn_pane_g1

0xeecc,	// (0x000bb993) main_calllock_btn_pane_t1

0x955e,	// (0x000b6025) main_dialer3_pane

0x955e,	// (0x000b6025) main_fmrd2_pane

0xccb1,	// (0x000b9778) main_fs_bigclock_unlock_btn_pane_g1

0xeee3,	// (0x000bb9aa) main_fs_bigclock_unlock_btn_pane_t1

0x8eae,	// (0x000b5975) area_fmrd2_info_pane_ParamLimits

0x8eae,	// (0x000b5975) area_fmrd2_info_pane

0x8ebd,	// (0x000b5984) area_fmrd2_visual_pane_ParamLimits

0x8ebd,	// (0x000b5984) area_fmrd2_visual_pane

0x8ecb,	// (0x000b5992) fmrd2_indi_pane_ParamLimits

0x8ecb,	// (0x000b5992) fmrd2_indi_pane

0x8ed8,	// (0x000b599f) area_fmrd2_visual_pane_g1

0x8ee0,	// (0x000b59a7) area_fmrd2_visual_pane_t1

0x8ef0,	// (0x000b59b7) area_fmrd2_visual_pane_t2

0x8f00,	// (0x000b59c7) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x000bc9af) area_fmrd2_visual_pane_t

0x8f10,	// (0x000b59d7) area_fmrd2_info_pane_g1

0x8f18,	// (0x000b59df) area_fmrd2_info_pane_t1

0x8f28,	// (0x000b59ef) area_fmrd2_info_pane_t2

0x8f38,	// (0x000b59ff) area_fmrd2_info_pane_t3

0x8f48,	// (0x000b5a0f) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x000bc9b6) area_fmrd2_info_pane_t

0x8f58,	// (0x000b5a1f) fmrd2_indi_pane_t1

0x8f68,	// (0x000b5a2f) fmrd2_indi_pane_t2

0x8f78,	// (0x000b5a3f) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x000bc9bf) fmrd2_indi_pane_t

0xe48a,	// (0x000baf51) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe48a,	// (0x000baf51) list_single_fs_bigclock_indicator_pane_g5

0xe533,	// (0x000baffa) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe533,	// (0x000baffa) list_single_fs_bigclock_indicator_pane_t5

0x865a,	// (0x000b5121) aid_cell_bcale_month_pane_ParamLimits

0x865a,	// (0x000b5121) aid_cell_bcale_month_pane

0x8678,	// (0x000b513f) bcale_month_pane_ParamLimits

0x8678,	// (0x000b513f) bcale_month_pane

0x869a,	// (0x000b5161) bcale_preview_pane_ParamLimits

0x869a,	// (0x000b5161) bcale_preview_pane

0xec83,	// (0x000bb74a) list_single_fs_bigclock_pane_t1_ParamLimits

0xeca2,	// (0x000bb769) list_single_fs_bigclock_pane_t2_ParamLimits

0xeca2,	// (0x000bb769) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x000bc941) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x000bc941) list_single_fs_bigclock_pane_t

0xeedb,	// (0x000bb9a2) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000bc9aa) main_fs_bigclock_unlock_btn_pane_g

0x8f88,	// (0x000b5a4f) aid_dia3_key_size_ParamLimits

0x8f88,	// (0x000b5a4f) aid_dia3_key_size

0x8f97,	// (0x000b5a5e) aid_dia3_listrow_size_ParamLimits

0x8f97,	// (0x000b5a5e) aid_dia3_listrow_size

0x8fac,	// (0x000b5a73) dia3_keypad_fun_pane_ParamLimits

0x8fac,	// (0x000b5a73) dia3_keypad_fun_pane

0x8fc8,	// (0x000b5a8f) dia3_keypad_num_pane_ParamLimits

0x8fc8,	// (0x000b5a8f) dia3_keypad_num_pane

0x8fe1,	// (0x000b5aa8) dia3_listscroll_pane_ParamLimits

0x8fe1,	// (0x000b5aa8) dia3_listscroll_pane

0x8ff4,	// (0x000b5abb) dia3_numentry_pane_ParamLimits

0x8ff4,	// (0x000b5abb) dia3_numentry_pane

0xeef1,	// (0x000bb9b8) dia3_list_pane

0xeefc,	// (0x000bb9c3) scroll_pane_cp12

0x955e,	// (0x000b6025) bg_dia3_numentry_pane

0x9008,	// (0x000b5acf) dia3_numentry_pane_t1

0x9017,	// (0x000b5ade) cell_dia3_key_num_pane

0x901f,	// (0x000b5ae6) cell_dia3_key0_fun_pane_ParamLimits

0x901f,	// (0x000b5ae6) cell_dia3_key0_fun_pane

0x9033,	// (0x000b5afa) cell_dia3_key1_fun_pane_ParamLimits

0x9033,	// (0x000b5afa) cell_dia3_key1_fun_pane

0x904b,	// (0x000b5b12) dia3_listrow_pane

0xe188,	// (0x000bac4f) bg_dia3_numentry_pane_g1

0x955e,	// (0x000b6025) bg_button_pane_cp21

0xef07,	// (0x000bb9ce) cell_dia3_key_num_pane_t1

0xef15,	// (0x000bb9dc) cell_dia3_key_num_pane_t2

0xef24,	// (0x000bb9eb) cell_dia3_key_num_pane_t3

0xef33,	// (0x000bb9fa) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x000bc9c6) cell_dia3_key_num_pane_t

0x955e,	// (0x000b6025) bg_button_pane_cp19

0x905d,	// (0x000b5b24) cell_dia3_key0_fun_pane_g1

0x955e,	// (0x000b6025) bg_button_pane_cp20

0x9065,	// (0x000b5b2c) cell_dia3_key1_fun_pane_g1

0x906d,	// (0x000b5b34) area_left_week_number_pane

0x907b,	// (0x000b5b42) area_top_day_name_pane

0x908e,	// (0x000b5b55) frame_month_view_pane

0xef42,	// (0x000bba09) grid_month_view_pane

0x90a3,	// (0x000b5b6a) cell_top_day_name_pane_ParamLimits

0x90a3,	// (0x000b5b6a) cell_top_day_name_pane

0x90d2,	// (0x000b5b99) cell_area_left_week_number_pane_ParamLimits

0x90d2,	// (0x000b5b99) cell_area_left_week_number_pane

0x90e6,	// (0x000b5bad) cell_month_view_pane_ParamLimits

0x90e6,	// (0x000b5bad) cell_month_view_pane

0xef50,	// (0x000bba17) frm_month_g1

0x9115,	// (0x000b5bdc) frm_month_g2

0x9128,	// (0x000b5bef) frm_month_g3

0x913b,	// (0x000b5c02) frm_month_g4

0x914e,	// (0x000b5c15) frm_month_g5

0x9161,	// (0x000b5c28) frm_month_g6

0x9174,	// (0x000b5c3b) frm_month_g7

0xef5d,	// (0x000bba24) frm_month_g8

0x9189,	// (0x000b5c50) frm_month_g9

0x9199,	// (0x000b5c60) frm_month_g10

0x91a9,	// (0x000b5c70) frm_month_g11

0x91b9,	// (0x000b5c80) frm_month_g12

0x91cb,	// (0x000b5c92) frm_month_g13

0x91df,	// (0x000b5ca6) frm_month_g14

0x91f3,	// (0x000b5cba) frm_month_g15

0x9207,	// (0x000b5cce) frm_month_g16

0x000f,

0xff08,	// (0x000bc9cf) frm_month_g

0xef6a,	// (0x000bba31) cell_top_day_name_pane_t1

0x921b,	// (0x000b5ce2) cell_area_left_week_number_pane_g1

0x9227,	// (0x000b5cee) cell_area_left_week_number_pane_t1

0xcee1,	// (0x000b99a8) cell_month_view_pane_g1

0x923a,	// (0x000b5d01) cell_month_view_pane_t1

0x955e,	// (0x000b6025) main_fps_pane

0xe708,	// (0x000bb1cf) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe708,	// (0x000bb1cf) cmail_ddmenu_btn02_pane_cp1

0xe724,	// (0x000bb1eb) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe724,	// (0x000bb1eb) cmail_ddmenu_btn02_pane_cp2

0x8967,	// (0x000b542e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8967,	// (0x000b542e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x000bc8f4) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x000bc8f4) cmail_ddmenu_btn02_pane_g

0x8988,	// (0x000b544f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8988,	// (0x000b544f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x000bc8f9) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x000bc8f9) cmail_ddmenu_btn02_pane_t

0x924d,	// (0x000b5d14) fps_text_pane_ParamLimits

0x924d,	// (0x000b5d14) fps_text_pane

0x9264,	// (0x000b5d2b) main_fps_pane_g1_ParamLimits

0x9264,	// (0x000b5d2b) main_fps_pane_g1

0x927c,	// (0x000b5d43) wait_bar_pane_cp010_ParamLimits

0x927c,	// (0x000b5d43) wait_bar_pane_cp010

0x928f,	// (0x000b5d56) fps_text_pane_t1_ParamLimits

0x928f,	// (0x000b5d56) fps_text_pane_t1

0xd652,	// (0x000ba119) cam4_image_uncrop_pane_g1

0xd65b,	// (0x000ba122) cam4_image_uncrop_pane_g2

0x5be3,	// (0x000b26aa) cam4_image_uncrop_pane_g3

0x5bec,	// (0x000b26b3) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000bc3b5) cam4_image_uncrop_pane_g

0x904b,	// (0x000b5b12) dia3_listrow_pane_ParamLimits

0x955e,	// (0x000b6025) main_phob2_pane

0x841a,	// (0x000b4ee1) cell_tport_appsw_pane_cp02_ParamLimits

0x841a,	// (0x000b4ee1) cell_tport_appsw_pane_cp02

0x842e,	// (0x000b4ef5) cell_tport_appsw_pane_cp03_ParamLimits

0x842e,	// (0x000b4ef5) cell_tport_appsw_pane_cp03

0x955e,	// (0x000b6025) phob2_contact_card_pane

0x955e,	// (0x000b6025) phob2_listscroll_pane

0xef7d,	// (0x000bba44) phob2_list_pane

0xef85,	// (0x000bba4c) scroll_pane_cp034

0x92a7,	// (0x000b5d6e) phob2_cc_data_pane_ParamLimits

0x92a7,	// (0x000b5d6e) phob2_cc_data_pane

0x92c8,	// (0x000b5d8f) phob2_cc_listscroll_pane_ParamLimits

0x92c8,	// (0x000b5d8f) phob2_cc_listscroll_pane

0x92ea,	// (0x000b5db1) list_double_large_graphic_phob2_pane_ParamLimits

0x92ea,	// (0x000b5db1) list_double_large_graphic_phob2_pane

0x92fe,	// (0x000b5dc5) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x92fe,	// (0x000b5dc5) list_double_large_graphic_phob2_pane_g1

0x9314,	// (0x000b5ddb) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9314,	// (0x000b5ddb) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x000bc9f0) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x000bc9f0) list_double_large_graphic_phob2_pane_g

0x9320,	// (0x000b5de7) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9320,	// (0x000b5de7) list_double_large_graphic_phob2_pane_t1

0x9335,	// (0x000b5dfc) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9335,	// (0x000b5dfc) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x000bc9f5) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x000bc9f5) list_double_large_graphic_phob2_pane_t

0x955e,	// (0x000b6025) list_highlight_pane_cp024

0x9347,	// (0x000b5e0e) phob2_cc_button_pane

0x934f,	// (0x000b5e16) phob2_cc_data_pane_g1_ParamLimits

0x934f,	// (0x000b5e16) phob2_cc_data_pane_g1

0x9365,	// (0x000b5e2c) phob2_cc_data_pane_g2_ParamLimits

0x9365,	// (0x000b5e2c) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x000bc9fa) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x000bc9fa) phob2_cc_data_pane_g

0x9375,	// (0x000b5e3c) phob2_cc_data_pane_t1_ParamLimits

0x9375,	// (0x000b5e3c) phob2_cc_data_pane_t1

0x938d,	// (0x000b5e54) phob2_cc_data_pane_t2_ParamLimits

0x938d,	// (0x000b5e54) phob2_cc_data_pane_t2

0x93a7,	// (0x000b5e6e) phob2_cc_data_pane_t3_ParamLimits

0x93a7,	// (0x000b5e6e) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x000bc9ff) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x000bc9ff) phob2_cc_data_pane_t

0xef8d,	// (0x000bba54) phob2_cc_list_pane_ParamLimits

0xef8d,	// (0x000bba54) phob2_cc_list_pane

0xd992,	// (0x000ba459) scroll_pane_cp035_ParamLimits

0xd992,	// (0x000ba459) scroll_pane_cp035

0x95af,	// (0x000b6076) bg_button_pane_cp033

0xef99,	// (0x000bba60) phob2_cc_button_pane_g1

0xefa5,	// (0x000bba6c) phob2_cc_button_pane_t1

0xefba,	// (0x000bba81) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x000bca06) phob2_cc_button_pane_t

0x93c1,	// (0x000b5e88) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x93c1,	// (0x000b5e88) list_double_large_graphic_phob2_cc_pane

0x93d5,	// (0x000b5e9c) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x93d5,	// (0x000b5e9c) list_double_large_graphic_phob2_cc_pane_g1

0x93e1,	// (0x000b5ea8) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x93e1,	// (0x000b5ea8) list_double_large_graphic_phob2_cc_pane_g2

0x93ed,	// (0x000b5eb4) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x93ed,	// (0x000b5eb4) list_double_large_graphic_phob2_cc_pane_g3

0x93f9,	// (0x000b5ec0) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x93f9,	// (0x000b5ec0) list_double_large_graphic_phob2_cc_pane_g4

0x9405,	// (0x000b5ecc) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9405,	// (0x000b5ecc) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x000bca0b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x000bca0b) list_double_large_graphic_phob2_cc_pane_g

0x9411,	// (0x000b5ed8) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9411,	// (0x000b5ed8) list_double_large_graphic_phob2_cc_pane_t1

0x943a,	// (0x000b5f01) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x943a,	// (0x000b5f01) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x000bca16) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x000bca16) list_double_large_graphic_phob2_cc_pane_t

0xefcc,	// (0x000bba93) list_highlight_pane_cp025_ParamLimits

0xefcc,	// (0x000bba93) list_highlight_pane_cp025

0x95af,	// (0x000b6076) bg_button_pane_cp033_ParamLimits

0xef99,	// (0x000bba60) phob2_cc_button_pane_g1_ParamLimits

0xefa5,	// (0x000bba6c) phob2_cc_button_pane_t1_ParamLimits

0xefba,	// (0x000bba81) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x000bca06) phob2_cc_button_pane_t_ParamLimits

0xff35,	// (0x000ac9fc) popup_wgtman_window

0xd7d5,	// (0x000ba29c) scroll_pane_cp038

0x8d9a,	// (0x000b5861) wgtman_btn_pane_cp_01_ParamLimits

0x8d9a,	// (0x000b5861) wgtman_btn_pane_cp_01

0xefda,	// (0x000bbaa1) wgtman_content_pane

0xefe3,	// (0x000bbaaa) wgtman_heading_pane

0x955e,	// (0x000b6025) bg_heading_pane_cp02

0xefec,	// (0x000bbab3) wgtman_heading_pane_g1

0xeff4,	// (0x000bbabb) wgtman_heading_pane_t1

0xf002,	// (0x000bbac9) scroll_pane_cp036

0xf00a,	// (0x000bbad1) wgtman_list_pane

0xf012,	// (0x000bbad9) wgtman_list_pane_t1_ParamLimits

0xf012,	// (0x000bbad9) wgtman_list_pane_t1

0xa195,	// (0x000b6c5c) cam4_grid_pane

0x68fa,	// (0x000b33c1) bg_button_pane_cp015_ParamLimits

0x690e,	// (0x000b33d5) bg_button_pane_cp016_ParamLimits

0x6921,	// (0x000b33e8) bg_button_pane_cp017_ParamLimits

0x6979,	// (0x000b3440) popup_vitu2_query_window_g3_ParamLimits

0x6979,	// (0x000b3440) popup_vitu2_query_window_g3

0x6a36,	// (0x000b34fd) popup_vitu2_query_window_t6_ParamLimits

0x6a36,	// (0x000b34fd) popup_vitu2_query_window_t6

0x6a61,	// (0x000b3528) popup_vitu2_query_window_t7_ParamLimits

0x6a61,	// (0x000b3528) popup_vitu2_query_window_t7

0xd652,	// (0x000ba119) cam4_grid_pane_g1

0xd65b,	// (0x000ba122) cam4_grid_pane_g2

0xf02c,	// (0x000bbaf3) cam4_grid_pane_g3

0xf035,	// (0x000bbafc) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x000bca1b) cam4_grid_pane_g

0x1146,	// (0x000adc0d) aid_placing_vt_slider_lsc_ParamLimits

0x1433,	// (0x000adefa) vidtel_button_pane_ParamLimits

0x1433,	// (0x000adefa) vidtel_button_pane

0xf040,	// (0x000bbb07) bg_button_pane_cp034

0x9463,	// (0x000b5f2a) vidtel_button_pane_g1

0xf04a,	// (0x000bbb11) vidtel_button_pane_t1

0xd8d9,	// (0x000ba3a0) aid_size_vtel_slider_touch

0xd992,	// (0x000ba459) scroll_pane_cp039

0xe1c6,	// (0x000bac8d) ncim_query_button_pane_cp01_ParamLimits

0xe1e5,	// (0x000bacac) ncimui_query_pane_g1_ParamLimits

0x95af,	// (0x000b6076) input_focus_pane_cp012_ParamLimits

0xe20a,	// (0x000bacd1) ncim_query_entry_pane_t1_ParamLimits

0xd992,	// (0x000ba459) scroll_pane_cp039_ParamLimits

0x26ee,	// (0x000af1b5) navi_pane_bcale_mc_g1

0x26f6,	// (0x000af1bd) navi_pane_bcale_mc_t1

0xe76d,	// (0x000bb234) main_sp_fs_email_pane_g1

0xe779,	// (0x000bb240) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x000bc7ac) main_sp_fs_email_pane_g

0xea10,	// (0x000bb4d7) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea10,	// (0x000bb4d7) list_single_cale_mrui_row_pane_g3

0x89a8,	// (0x000b546f) list_single_recal_day_pane_g5_event_pane

0xa7c8,	// (0x000b728f) list_single_recal_day_pane_g7

0xf058,	// (0x000bbb1f) list_recal_day_event_pane_cp01

0xf061,	// (0x000bbb28) list_recal_vselct_arw_lo_pane_cp01

0xf069,	// (0x000bbb30) list_recal_vselct_arw_up_pane_cp01

0xf071,	// (0x000bbb38) list_recal_vselct_pane_cp01

0xd8fb,	// (0x000ba3c2) list_recal_day_event_pane_cp01_g1

0xbb1c,	// (0x000b85e3) list_recal_day_event_pane_cp01_t1

0xa7d0,	// (0x000b7297) list_single_recal_day_pane_t1_ParamLimits

0xa7e2,	// (0x000b72a9) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x000bc909) list_single_recal_day_pane_t_ParamLimits

0x9c2b,	// (0x000b66f2) bg_notes_pane_ParamLimits

0xa867,	// (0x000b732e) list_notes_pane_ParamLimits

0x0282,	// (0x000acd49) scroll_pane_cp06_ParamLimits

0xa889,	// (0x000b7350) main_notes_pane_ParamLimits

0x955e,	// (0x000b6025) main_welc_pane

0x946b,	// (0x000b5f32) main_welc_body_pane_ParamLimits

0x946b,	// (0x000b5f32) main_welc_body_pane

0x948a,	// (0x000b5f51) main_welc_opti_pane_ParamLimits

0x948a,	// (0x000b5f51) main_welc_opti_pane

0x94d3,	// (0x000b5f9a) main_welc_pane_t1_ParamLimits

0x94d3,	// (0x000b5f9a) main_welc_pane_t1

0x94f5,	// (0x000b5fbc) main_welc_body_row_pane_ParamLimits

0x94f5,	// (0x000b5fbc) main_welc_body_row_pane

0x9509,	// (0x000b5fd0) main_welc_opti_row_pane_ParamLimits

0x9509,	// (0x000b5fd0) main_welc_opti_row_pane

0xf07b,	// (0x000bbb42) main_welc_opti_row_pane_g1

0xf083,	// (0x000bbb4a) main_welc_opti_row_pane_t1

0xf092,	// (0x000bbb59) main_welc_body_row_pane_t1

0xed63,	// (0x000bb82a) popup_notif_wgt_heading_pane

0xed7d,	// (0x000bb844) aid_size_list_notif_wgt_del_ParamLimits

0xed8a,	// (0x000bb851) list_notif_wgt_row_pane_g1_ParamLimits

0xed96,	// (0x000bb85d) list_notif_wgt_row_pane_g2_ParamLimits

0xeda2,	// (0x000bb869) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x000bc970) list_notif_wgt_row_pane_g_ParamLimits

0xedaf,	// (0x000bb876) list_notif_wgt_row_pane_t1_ParamLimits

0xedc4,	// (0x000bb88b) list_notif_wgt_row_pane_t2_ParamLimits

0xedd6,	// (0x000bb89d) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x000bc977) list_notif_wgt_row_pane_t_ParamLimits

0x8e33,	// (0x000b58fa) listrow_wgtman_pane_g1_ParamLimits

0x8e40,	// (0x000b5907) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000bc9a0) listrow_wgtman_pane_g_ParamLimits

0x8e5e,	// (0x000b5925) listrow_wgtman_pane_t1_ParamLimits

0x8e76,	// (0x000b593d) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000bc9a5) listrow_wgtman_pane_t_ParamLimits

0x8e9c,	// (0x000b5963) wait_bar_pane_cp09_ParamLimits

0x955e,	// (0x000b6025) bg_popup_heading_pane_cp02

0xf0a1,	// (0x000bbb68) popup_notif_wgt_heading_pane_g1

0xf0a9,	// (0x000bbb70) popup_notif_wgt_heading_pane_t1

0x955e,	// (0x000b6025) main_vids_pane

0x955e,	// (0x000b6025) vids_listscroll_pane

0x9519,	// (0x000b5fe0) scroll_pane_cp040

0x955e,	// (0x000b6025) vids_list_pane

0x9524,	// (0x000b5feb) vids_list_double_pane_ParamLimits

0x9524,	// (0x000b5feb) vids_list_double_pane

0x9535,	// (0x000b5ffc) vids_list_double_pane_g1

0x953e,	// (0x000b6005) vids_list_double_pane_t1

0x954e,	// (0x000b6015) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x000bca29) vids_list_double_pane_t

0x95af,	// (0x000b6076) main_ncimui_pane_ParamLimits

0x765a,	// (0x000b4121) main_ncimui_pane_g1_ParamLimits

0x7666,	// (0x000b412d) main_ncimui_pane_g2_ParamLimits

0x7666,	// (0x000b412d) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x000bc6b1) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x000bc6b1) main_ncimui_pane_g

0x94a9,	// (0x000b5f70) main_welc_pane_g1_ParamLimits

0x94a9,	// (0x000b5f70) main_welc_pane_g1

0x94be,	// (0x000b5f85) main_welc_pane_g2_ParamLimits

0x94be,	// (0x000b5f85) main_welc_pane_g2

0x0001,

0xff5d,	// (0x000bca24) main_welc_pane_g_ParamLimits

0xff5d,	// (0x000bca24) main_welc_pane_g

0x9c2b,	// (0x000b66f2) listscroll_mce_pane_ParamLimits

0x27ce,	// (0x000af295) wait_bar_pane_cp10

0xc84c,	// (0x000b9313) main_cale_day_pane_ParamLimits

0xc84c,	// (0x000b9313) main_cale_week_pane_ParamLimits

0x9c2b,	// (0x000b66f2) main_messa_pane_ParamLimits

0x4ea1,	// (0x000b1968) main_clock2_btn_pane_ParamLimits

0x4ea1,	// (0x000b1968) main_clock2_btn_pane

0xd069,	// (0x000b9b30) main_clock2_btn_pane_cp01_ParamLimits

0xd069,	// (0x000b9b30) main_clock2_btn_pane_cp01

0xe9e1,	// (0x000bb4a8) list_cale_mrui_pane_ParamLimits

0xee1a,	// (0x000bb8e1) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x000bc97e) main_cf0_pane_g

0x906d,	// (0x000b5b34) area_left_week_number_pane_ParamLimits

0x907b,	// (0x000b5b42) area_top_day_name_pane_ParamLimits

0x908e,	// (0x000b5b55) frame_month_view_pane_ParamLimits

0xef42,	// (0x000bba09) grid_month_view_pane_ParamLimits

0xef50,	// (0x000bba17) frm_month_g1_ParamLimits

0x9115,	// (0x000b5bdc) frm_month_g2_ParamLimits

0x9128,	// (0x000b5bef) frm_month_g3_ParamLimits

0x913b,	// (0x000b5c02) frm_month_g4_ParamLimits

0x914e,	// (0x000b5c15) frm_month_g5_ParamLimits

0x9161,	// (0x000b5c28) frm_month_g6_ParamLimits

0x9174,	// (0x000b5c3b) frm_month_g7_ParamLimits

0xef5d,	// (0x000bba24) frm_month_g8_ParamLimits

0x9189,	// (0x000b5c50) frm_month_g9_ParamLimits

0x9199,	// (0x000b5c60) frm_month_g10_ParamLimits

0x91a9,	// (0x000b5c70) frm_month_g11_ParamLimits

0x91b9,	// (0x000b5c80) frm_month_g12_ParamLimits

0x91cb,	// (0x000b5c92) frm_month_g13_ParamLimits

0x91df,	// (0x000b5ca6) frm_month_g14_ParamLimits

0x91f3,	// (0x000b5cba) frm_month_g15_ParamLimits

0x9207,	// (0x000b5cce) frm_month_g16_ParamLimits

0xff08,	// (0x000bc9cf) frm_month_g_ParamLimits

0xef6a,	// (0x000bba31) cell_top_day_name_pane_t1_ParamLimits

0x921b,	// (0x000b5ce2) cell_area_left_week_number_pane_g1_ParamLimits

0x9227,	// (0x000b5cee) cell_area_left_week_number_pane_t1_ParamLimits

0xcee1,	// (0x000b99a8) cell_month_view_pane_g1_ParamLimits

0x923a,	// (0x000b5d01) cell_month_view_pane_t1_ParamLimits

0x9c23,	// (0x000b66ea) main_clock2_btn_pane_g1

0xf0b7,	// (0x000bbb7e) main_clock2_btn_pane_t1

0x95af,	// (0x000b6076) listscroll_cmail_pane_ParamLimits

0xe76d,	// (0x000bb234) main_sp_fs_email_pane_g1_ParamLimits

0xe779,	// (0x000bb240) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x000bc7ac) main_sp_fs_email_pane_g_ParamLimits

0xeaed,	// (0x000bb5b4) list_recal_day_pane_ParamLimits

0xeafe,	// (0x000bb5c5) mian_recal_day_pane_t1

0x80fb,	// (0x000b4bc2) list_single_dyc_row_text_pane_t4_ParamLimits

0x80fb,	// (0x000b4bc2) list_single_dyc_row_text_pane_t4

0x8144,	// (0x000b4c0b) list_single_dyc_row_text_pane_t5_ParamLimits

0x8144,	// (0x000b4c0b) list_single_dyc_row_text_pane_t5

0xa552,	// (0x000b7019) list_single_dyc_row_text_pane_t6_ParamLimits

0xa552,	// (0x000b7019) list_single_dyc_row_text_pane_t6

0xae45,	// (0x000b790c) aid_mgn_list_cale_time_pane

0x95af,	// (0x000b6076) main_gallery2_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large
