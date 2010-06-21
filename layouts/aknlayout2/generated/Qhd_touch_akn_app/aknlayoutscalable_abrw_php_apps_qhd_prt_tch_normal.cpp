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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0001e09b };

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
0x281d,	// (0x000208b8) Screen

0x2829,	// (0x000208c4) application_window

0x2835,	// (0x000208d0) area_bottom_pane_ParamLimits

0x2835,	// (0x000208d0) area_bottom_pane

0x0e68,	// (0x0001ef03) area_top_pane_ParamLimits

0x0e68,	// (0x0001ef03) area_top_pane

0x0ecc,	// (0x0001ef67) call_video_uplink_pane_ParamLimits

0x0ecc,	// (0x0001ef67) call_video_uplink_pane

0x0f0b,	// (0x0001efa6) main_pane_ParamLimits

0x0f0b,	// (0x0001efa6) main_pane

0xc502,	// (0x0002a59d) context_pane

0x55d7,	// (0x00023672) navi_pane

0x55fd,	// (0x00023698) popup_cale_events_window_ParamLimits

0x55fd,	// (0x00023698) popup_cale_events_window

0xc515,	// (0x0002a5b0) popup_mup_playback_window

0x5615,	// (0x000236b0) signal_pane

0xa433,	// (0x000284ce) main_browser_pane

0xa60f,	// (0x000286aa) main_burst_pane

0x14c9,	// (0x0001f564) main_calc_pane

0xc4e8,	// (0x0002a583) main_cale_day_pane

0x2c54,	// (0x00020cef) main_cale_month_pane

0xc4e8,	// (0x0002a583) main_cale_week_pane

0xa60f,	// (0x000286aa) main_call_pane

0xa113,	// (0x000281ae) main_call_poc_pane

0xa60f,	// (0x000286aa) main_camera_pane

0xa60f,	// (0x000286aa) main_chi_dic_pane

0xae00,	// (0x00028e9b) main_clock_pane

0xa113,	// (0x000281ae) main_fmradio_pane

0xa60f,	// (0x000286aa) main_graph_messa_pane

0xa113,	// (0x000281ae) main_help_pane

0xa433,	// (0x000284ce) main_im_pane

0xa36e,	// (0x00028409) main_image_pane_ParamLimits

0xa36e,	// (0x00028409) main_image_pane

0xa113,	// (0x000281ae) main_location2_pane

0xa60f,	// (0x000286aa) main_location_pane

0xa36e,	// (0x00028409) main_messa_pane

0xa113,	// (0x000281ae) main_mp2_pane

0xa60f,	// (0x000286aa) main_mp_pane

0xa113,	// (0x000281ae) main_msg_pane

0xa113,	// (0x000281ae) main_mup_eq_pane

0xa113,	// (0x000281ae) main_mup_pane

0xa433,	// (0x000284ce) main_notes_pane

0xa113,	// (0x000281ae) main_pec_pane

0xa113,	// (0x000281ae) main_phob_pane

0xa113,	// (0x000281ae) main_pinb_pane

0xa113,	// (0x000281ae) main_postcard_pane

0xa113,	// (0x000281ae) main_qdial_pane

0xa60f,	// (0x000286aa) main_skin_pane

0xa113,	// (0x000281ae) main_smil2_pane

0xa60f,	// (0x000286aa) main_smil_pane

0xa60f,	// (0x000286aa) main_video_pane

0xa60f,	// (0x000286aa) main_video_tele_pane

0xa36e,	// (0x00028409) main_viewer_pane_ParamLimits

0xa36e,	// (0x00028409) main_viewer_pane

0xa60f,	// (0x000286aa) main_vorec_pane

0x1515,	// (0x0001f5b0) popup_blid_sat_info_window_ParamLimits

0x1515,	// (0x0001f5b0) popup_blid_sat_info_window

0x1535,	// (0x0001f5d0) popup_dyc_status_message_window_ParamLimits

0x1535,	// (0x0001f5d0) popup_dyc_status_message_window

0x1545,	// (0x0001f5e0) popup_grid_large_graphic_window_ParamLimits

0x1545,	// (0x0001f5e0) popup_grid_large_graphic_window

0x15d6,	// (0x0001f671) popup_loc_request_window_ParamLimits

0x15d6,	// (0x0001f671) popup_loc_request_window

0x1623,	// (0x0001f6be) popup_wml_address_window_ParamLimits

0x1623,	// (0x0001f6be) popup_wml_address_window

0x54b9,	// (0x00023554) call_muted_g1

0x517b,	// (0x00023216) popup_call_audio_conf_window_ParamLimits

0x517b,	// (0x00023216) popup_call_audio_conf_window

0x54c9,	// (0x00023564) popup_call_audio_first_window_ParamLimits

0x54c9,	// (0x00023564) popup_call_audio_first_window

0x5509,	// (0x000235a4) popup_call_audio_in_window_ParamLimits

0x5509,	// (0x000235a4) popup_call_audio_in_window

0x552d,	// (0x000235c8) popup_call_audio_out_window_ParamLimits

0x552d,	// (0x000235c8) popup_call_audio_out_window

0x554f,	// (0x000235ea) popup_call_audio_second_window_ParamLimits

0x554f,	// (0x000235ea) popup_call_audio_second_window

0x557f,	// (0x0002361a) popup_call_audio_wait_window_ParamLimits

0x557f,	// (0x0002361a) popup_call_audio_wait_window

0x55a0,	// (0x0002363b) popup_number_entry_window_ParamLimits

0x55a0,	// (0x0002363b) popup_number_entry_window

0x9d00,	// (0x00027d9b) bg_popup_call_pane_cp05_ParamLimits

0x9d00,	// (0x00027d9b) bg_popup_call_pane_cp05

0x9d20,	// (0x00027dbb) popup_number_entry_window_t1

0x9d33,	// (0x00027dce) popup_number_entry_window_t2

0x9d45,	// (0x00027de0) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0002d161) popup_number_entry_window_t

0x9d57,	// (0x00027df2) text_title_cp2

0x9d6a,	// (0x00027e05) bg_popup_call_pane_cp_ParamLimits

0x9d6a,	// (0x00027e05) bg_popup_call_pane_cp

0x9d78,	// (0x00027e13) call_thumbnail_pane

0x9d80,	// (0x00027e1b) popup_call_audio_in_window_g1_ParamLimits

0x9d80,	// (0x00027e1b) popup_call_audio_in_window_g1

0x9d8c,	// (0x00027e27) popup_call_audio_in_window_g2_ParamLimits

0x9d8c,	// (0x00027e27) popup_call_audio_in_window_g2

0x9d98,	// (0x00027e33) popup_call_audio_in_window_g3_ParamLimits

0x9d98,	// (0x00027e33) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0002d16a) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0002d16a) popup_call_audio_in_window_g

0x9da4,	// (0x00027e3f) popup_call_audio_in_window_t1_ParamLimits

0x9da4,	// (0x00027e3f) popup_call_audio_in_window_t1

0x9dc0,	// (0x00027e5b) popup_call_audio_in_window_t2_ParamLimits

0x9dc0,	// (0x00027e5b) popup_call_audio_in_window_t2

0x9ddc,	// (0x00027e77) popup_call_audio_in_window_t3_ParamLimits

0x9ddc,	// (0x00027e77) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0002d171) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0002d171) popup_call_audio_in_window_t

0x9d6a,	// (0x00027e05) bg_popup_call_pane_cp01_ParamLimits

0x9d6a,	// (0x00027e05) bg_popup_call_pane_cp01

0x9d78,	// (0x00027e13) call_thumbnail_pane_cp02

0x9def,	// (0x00027e8a) call_type_pane_cp022

0x9df7,	// (0x00027e92) popup_call_audio_out_window_g1_ParamLimits

0x9df7,	// (0x00027e92) popup_call_audio_out_window_g1

0x9e09,	// (0x00027ea4) popup_call_audio_out_window_g2_ParamLimits

0x9e09,	// (0x00027ea4) popup_call_audio_out_window_g2

0x9e15,	// (0x00027eb0) popup_call_audio_out_window_g3_ParamLimits

0x9e15,	// (0x00027eb0) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0002d178) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0002d178) popup_call_audio_out_window_g

0x9e27,	// (0x00027ec2) popup_call_audio_out_window_t1_ParamLimits

0x9e27,	// (0x00027ec2) popup_call_audio_out_window_t1

0x9e3f,	// (0x00027eda) popup_call_audio_out_window_t2_ParamLimits

0x9e3f,	// (0x00027eda) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0002d17f) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0002d17f) popup_call_audio_out_window_t

0x9e54,	// (0x00027eef) bg_popup_call_pane_ParamLimits

0x9e54,	// (0x00027eef) bg_popup_call_pane

0x28af,	// (0x0002094a) call_thumbnail_pane_cp_ParamLimits

0x28af,	// (0x0002094a) call_thumbnail_pane_cp

0x9ed8,	// (0x00027f73) call_type_pane_cp01_ParamLimits

0x9ed8,	// (0x00027f73) call_type_pane_cp01

0x9f1c,	// (0x00027fb7) popup_call_audio_first_window_g1_ParamLimits

0x9f1c,	// (0x00027fb7) popup_call_audio_first_window_g1

0x9f68,	// (0x00028003) popup_call_audio_first_window_g2_ParamLimits

0x9f68,	// (0x00028003) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0002d184) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0002d184) popup_call_audio_first_window_g

0x9fac,	// (0x00028047) popup_call_audio_first_window_t1_ParamLimits

0x9fac,	// (0x00028047) popup_call_audio_first_window_t1

0xa058,	// (0x000280f3) popup_call_audio_first_window_t4_ParamLimits

0xa058,	// (0x000280f3) popup_call_audio_first_window_t4

0xa0e4,	// (0x0002817f) popup_call_audio_first_window_t5_ParamLimits

0xa0e4,	// (0x0002817f) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0002d189) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0002d189) popup_call_audio_first_window_t

0xa113,	// (0x000281ae) bg_popup_call_pane_cp02

0xa11d,	// (0x000281b8) call_type_pane_cp023

0xa125,	// (0x000281c0) popup_call_audio_wait_window_g1

0xa12d,	// (0x000281c8) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0002d190) popup_call_audio_wait_window_g

0xa135,	// (0x000281d0) popup_call_audio_wait_window_t3

0xa143,	// (0x000281de) bg_popup_call_pane_cp03_ParamLimits

0xa143,	// (0x000281de) bg_popup_call_pane_cp03

0xa1a3,	// (0x0002823e) call_thumbnail_pane_cp011_ParamLimits

0xa1a3,	// (0x0002823e) call_thumbnail_pane_cp011

0xa1af,	// (0x0002824a) call_type_pane_cp034_ParamLimits

0xa1af,	// (0x0002824a) call_type_pane_cp034

0xa1eb,	// (0x00028286) popup_call_audio_second_window_g1_ParamLimits

0xa1eb,	// (0x00028286) popup_call_audio_second_window_g1

0xa227,	// (0x000282c2) popup_call_audio_second_window_g2_ParamLimits

0xa227,	// (0x000282c2) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0002d195) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0002d195) popup_call_audio_second_window_g

0xa263,	// (0x000282fe) popup_call_audio_second_window_t1_ParamLimits

0xa263,	// (0x000282fe) popup_call_audio_second_window_t1

0xa2e4,	// (0x0002837f) popup_call_audio_second_window_t2_ParamLimits

0xa2e4,	// (0x0002837f) popup_call_audio_second_window_t2

0xa31a,	// (0x000283b5) popup_call_audio_second_window_t3_ParamLimits

0xa31a,	// (0x000283b5) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0002d19a) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0002d19a) popup_call_audio_second_window_t

0xa113,	// (0x000281ae) bg_popup_call_pane_cp04

0xa350,	// (0x000283eb) list_conf_pane

0xa358,	// (0x000283f3) popup_call_audio_conf_window_t1

0xa366,	// (0x00028401) call_thumbnail_pane_g1

0xa36e,	// (0x00028409) bg_pinb_pane_ParamLimits

0xa36e,	// (0x00028409) bg_pinb_pane

0xa37c,	// (0x00028417) find_pinb_pane

0xa385,	// (0x00028420) listscroll_pinb_pane_ParamLimits

0xa385,	// (0x00028420) listscroll_pinb_pane

0xa394,	// (0x0002842f) pinb_bg_pane_g1

0x28d3,	// (0x0002096e) pinb_bg_pane_g2

0x28df,	// (0x0002097a) pinb_bg_pane_g3

0x28eb,	// (0x00020986) pinb_bg_pane_g4

0x28f7,	// (0x00020992) pinb_bg_pane_g5

0x2903,	// (0x0002099e) pinb_bg_pane_g6

0x290e,	// (0x000209a9) pinb_bg_pane_g7

0x2919,	// (0x000209b4) pinb_bg_pane_g8

0x2924,	// (0x000209bf) pinb_bg_pane_g9

0x292e,	// (0x000209c9) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0002d1a1) pinb_bg_pane_g

0x294b,	// (0x000209e6) grid_pinb_pane

0x2956,	// (0x000209f1) list_pinb_pane

0x2961,	// (0x000209fc) scroll_pane_cp01_ParamLimits

0x2961,	// (0x000209fc) scroll_pane_cp01

0xa39e,	// (0x00028439) find_pinb_pane_g1_ParamLimits

0xa39e,	// (0x00028439) find_pinb_pane_g1

0xa3b6,	// (0x00028451) find_pinb_pane_t1

0xa3c8,	// (0x00028463) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0002d1bb) find_pinb_pane_t

0xa3dd,	// (0x00028478) input_focus_pane_cp01_ParamLimits

0xa3dd,	// (0x00028478) input_focus_pane_cp01

0x2973,	// (0x00020a0e) cell_pinb_pane_ParamLimits

0x2973,	// (0x00020a0e) cell_pinb_pane

0x299b,	// (0x00020a36) cell_pinb_pane_g1_ParamLimits

0x299b,	// (0x00020a36) cell_pinb_pane_g1

0x29b0,	// (0x00020a4b) cell_pinb_pane_g2_ParamLimits

0x29b0,	// (0x00020a4b) cell_pinb_pane_g2

0xa3e9,	// (0x00028484) cell_pinb_pane_g3_ParamLimits

0xa3e9,	// (0x00028484) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0002d1c0) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0002d1c0) cell_pinb_pane_g

0xa113,	// (0x000281ae) grid_highlight_pane_cp01

0x29bc,	// (0x00020a57) list_pinb_item_pane_ParamLimits

0x29bc,	// (0x00020a57) list_pinb_item_pane

0xa113,	// (0x000281ae) list_highlight_pane_cp02

0x29e2,	// (0x00020a7d) list_pinb_item_pane_g1_ParamLimits

0x29e2,	// (0x00020a7d) list_pinb_item_pane_g1

0x29ef,	// (0x00020a8a) list_pinb_item_pane_g2_ParamLimits

0x29ef,	// (0x00020a8a) list_pinb_item_pane_g2

0x29fb,	// (0x00020a96) list_pinb_item_pane_g3_ParamLimits

0x29fb,	// (0x00020a96) list_pinb_item_pane_g3

0x2a0c,	// (0x00020aa7) list_pinb_item_pane_g4_ParamLimits

0x2a0c,	// (0x00020aa7) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0002d1c7) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0002d1c7) list_pinb_item_pane_g

0x2a18,	// (0x00020ab3) list_pinb_item_pane_t1_ParamLimits

0x2a18,	// (0x00020ab3) list_pinb_item_pane_t1

0x10f9,	// (0x0001f194) calc_display_pane

0x1117,	// (0x0001f1b2) calc_paper_pane

0x1133,	// (0x0001f1ce) grid_calc_pane

0xa113,	// (0x000281ae) bg_list_pane_cp01

0x2a2f,	// (0x00020aca) clock_g1

0x2a37,	// (0x00020ad2) clock_g2

0x0001,

0xf135,	// (0x0002d1d0) clock_g

0x2a41,	// (0x00020adc) clock_t1_ParamLimits

0x2a41,	// (0x00020adc) clock_t1

0x2a56,	// (0x00020af1) clock_t2_ParamLimits

0x2a56,	// (0x00020af1) clock_t2

0x2a68,	// (0x00020b03) clock_t3_ParamLimits

0x2a68,	// (0x00020b03) clock_t3

0x2a7a,	// (0x00020b15) clock_t4_ParamLimits

0x2a7a,	// (0x00020b15) clock_t4

0x2a8c,	// (0x00020b27) clock_t5_ParamLimits

0x2a8c,	// (0x00020b27) clock_t5

0x2aa1,	// (0x00020b3c) clock_t6_ParamLimits

0x2aa1,	// (0x00020b3c) clock_t6

0x2ab3,	// (0x00020b4e) clock_t7_ParamLimits

0x2ab3,	// (0x00020b4e) clock_t7

0x2ac5,	// (0x00020b60) clock_t8_ParamLimits

0x2ac5,	// (0x00020b60) clock_t8

0x2adb,	// (0x00020b76) clock_t9_ParamLimits

0x2adb,	// (0x00020b76) clock_t9

0x0008,

0xf13a,	// (0x0002d1d5) clock_t_ParamLimits

0xf13a,	// (0x0002d1d5) clock_t

0xa3f5,	// (0x00028490) popup_clock_analogue_window_cp02

0xa3f5,	// (0x00028490) popup_clock_digital_window_cp01

0xa3fd,	// (0x00028498) listscroll_help_pane

0xa113,	// (0x000281ae) phob_pre_status_pane

0xa407,	// (0x000284a2) grid_qdial_pane

0xa36e,	// (0x00028409) listscroll_mce_pane

0xa36e,	// (0x00028409) bg_notes_pane

0xa411,	// (0x000284ac) list_notes_pane

0x2af1,	// (0x00020b8c) scroll_pane_cp06

0xa41f,	// (0x000284ba) bg_calc_paper_pane

0x115f,	// (0x0001f1fa) list_calc_pane

0xa433,	// (0x000284ce) bg_calc_display_pane

0x1179,	// (0x0001f214) calc_display_pane_t1

0x118e,	// (0x0001f229) calc_display_pane_t2

0x11a3,	// (0x0001f23e) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0002d1e8) calc_display_pane_t

0x11b5,	// (0x0001f250) cell_calc_pane_ParamLimits

0x11b5,	// (0x0001f250) cell_calc_pane

0xa43f,	// (0x000284da) bg_calc_paper_pane_g1

0xa44b,	// (0x000284e6) bg_calc_paper_pane_g2

0xa457,	// (0x000284f2) bg_calc_paper_pane_g3

0xa463,	// (0x000284fe) bg_calc_paper_pane_g4

0xa46f,	// (0x0002850a) bg_calc_paper_pane_g5

0x2b00,	// (0x00020b9b) bg_calc_paper_pane_g6

0x2b11,	// (0x00020bac) bg_calc_paper_pane_g7

0x2b22,	// (0x00020bbd) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0002d1ef) bg_calc_paper_pane_g

0x2b33,	// (0x00020bce) calc_bg_paper_pane_g9

0x2b44,	// (0x00020bdf) list_calc_item_pane_ParamLimits

0x2b44,	// (0x00020bdf) list_calc_item_pane

0xa47b,	// (0x00028516) list_calc_item_pane_g1

0x11e2,	// (0x0001f27d) list_calc_item_pane_t1_ParamLimits

0x11e2,	// (0x0001f27d) list_calc_item_pane_t1

0x11f4,	// (0x0001f28f) list_calc_item_pane_t2_ParamLimits

0x11f4,	// (0x0001f28f) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0002d200) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0002d200) list_calc_item_pane_t

0xa488,	// (0x00028523) cell_calc_pane_g1

0xa492,	// (0x0002852d) grid_highlight_pane_cp02

0x2b70,	// (0x00020c0b) bg_calc_display_pane_g1

0x1224,	// (0x0001f2bf) bg_calc_display_pane_g2

0x2b79,	// (0x00020c14) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0002d20a) bg_calc_display_pane_g

0x122e,	// (0x0001f2c9) cell_qdial_pane_ParamLimits

0x122e,	// (0x0001f2c9) cell_qdial_pane

0x2b82,	// (0x00020c1d) cell_qdial_pane_g1_ParamLimits

0x2b82,	// (0x00020c1d) cell_qdial_pane_g1

0x2b8f,	// (0x00020c2a) cell_qdial_pane_g2_ParamLimits

0x2b8f,	// (0x00020c2a) cell_qdial_pane_g2

0xa4b4,	// (0x0002854f) cell_qdial_pane_g3_ParamLimits

0xa4b4,	// (0x0002854f) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0002d211) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0002d211) cell_qdial_pane_g

0x2bad,	// (0x00020c48) cell_qdial_pane_t1_ParamLimits

0x2bad,	// (0x00020c48) cell_qdial_pane_t1

0x2bc5,	// (0x00020c60) cell_qdial_pane_t2_ParamLimits

0x2bc5,	// (0x00020c60) cell_qdial_pane_t2

0x2bd8,	// (0x00020c73) cell_qdial_pane_t3_ParamLimits

0x2bd8,	// (0x00020c73) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0002d21a) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0002d21a) cell_qdial_pane_t

0xa113,	// (0x000281ae) grid_highlight_pane_cp04

0xa4c0,	// (0x0002855b) thumbnail_qdial_pane_ParamLimits

0xa4c0,	// (0x0002855b) thumbnail_qdial_pane

0xa533,	// (0x000285ce) list_help_pane

0xa53c,	// (0x000285d7) scroll_pane_cp02

0x2beb,	// (0x00020c86) help_list_pane_t1_ParamLimits

0x2beb,	// (0x00020c86) help_list_pane_t1

0x1242,	// (0x0001f2dd) bg_notes_pane_g2

0x124a,	// (0x0001f2e5) bg_notes_pane_g3

0x1252,	// (0x0001f2ed) notes_bg_pane_g1

0x125a,	// (0x0001f2f5) notes_bg_pane_g4

0x1262,	// (0x0001f2fd) notes_bg_pane_g5

0x126a,	// (0x0001f305) notes_bg_pane_g6

0x1272,	// (0x0001f30d) notes_bg_pane_g7

0x127a,	// (0x0001f315) notes_bg_pane_g8

0x1282,	// (0x0001f31d) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0002d238) notes_bg_pane_g

0x2c1e,	// (0x00020cb9) list_notes_text_pane_ParamLimits

0x2c1e,	// (0x00020cb9) list_notes_text_pane

0xa545,	// (0x000285e0) list_notes_text_pane_g1

0x2c46,	// (0x00020ce1) list_notes_text_pane_t1

0x2c54,	// (0x00020cef) listscroll_cale_week_pane

0x2c79,	// (0x00020d14) bg_cale_heading_pane

0xa568,	// (0x00028603) bg_cale_pane_cp01

0x2c99,	// (0x00020d34) cale_week_corner_pane

0x2cb3,	// (0x00020d4e) cale_week_day_heading_pane

0x2cd3,	// (0x00020d6e) cale_week_scroll_pane_g1

0x2cee,	// (0x00020d89) cale_week_scroll_pane_g2

0x2d01,	// (0x00020d9c) cale_week_scroll_pane_g3

0x2d14,	// (0x00020daf) cale_week_scroll_pane_g4

0x2d27,	// (0x00020dc2) cale_week_scroll_pane_g5

0x2d3a,	// (0x00020dd5) cale_week_scroll_pane_g6

0x2d4d,	// (0x00020de8) cale_week_scroll_pane_g7

0x2d62,	// (0x00020dfd) cale_week_scroll_pane_g8

0x2d77,	// (0x00020e12) cale_week_scroll_pane_g9

0x2d8a,	// (0x00020e25) cale_week_scroll_pane_g10

0x2d9d,	// (0x00020e38) cale_week_scroll_pane_g11

0x2db0,	// (0x00020e4b) cale_week_scroll_pane_g12

0x2dc7,	// (0x00020e62) cale_week_scroll_pane_g13

0x2de2,	// (0x00020e7d) cale_week_scroll_pane_g14

0x2dfd,	// (0x00020e98) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0002d247) cale_week_scroll_pane_g

0x2e2d,	// (0x00020ec8) cale_week_time_pane

0x2e42,	// (0x00020edd) grid_cale_week_pane

0xa597,	// (0x00028632) scroll_pane_cp08

0x2e61,	// (0x00020efc) cell_cale_week_pane_ParamLimits

0x2e61,	// (0x00020efc) cell_cale_week_pane

0x2ec3,	// (0x00020f5e) cale_week_day_heading_pane_t1

0x2ede,	// (0x00020f79) cale_week_day_heading_pane_t2

0x2ef9,	// (0x00020f94) cale_week_day_heading_pane_t3

0x2f14,	// (0x00020faf) cale_week_day_heading_pane_t4

0x2f2f,	// (0x00020fca) cale_week_day_heading_pane_t5

0x2f4a,	// (0x00020fe5) cale_week_day_heading_pane_t6

0x2f65,	// (0x00021000) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0002d268) cale_week_day_heading_pane_t

0xa5b4,	// (0x0002864f) bg_cale_side_pane

0x128a,	// (0x0001f325) cale_week_time_pane_t1

0x12a4,	// (0x0001f33f) cale_week_time_pane_t2

0x12be,	// (0x0001f359) cale_week_time_pane_t3

0x12d8,	// (0x0001f373) cale_week_time_pane_t4

0x12f2,	// (0x0001f38d) cale_week_time_pane_t5

0x130c,	// (0x0001f3a7) cale_week_time_pane_t6

0x132a,	// (0x0001f3c5) cale_week_time_pane_t7

0x134c,	// (0x0001f3e7) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0002d277) cale_week_time_pane_t

0x2f80,	// (0x0002101b) cell_cale_week_pane_g2

0x2fa4,	// (0x0002103f) cell_cale_week_pane_g3_ParamLimits

0x2fa4,	// (0x0002103f) cell_cale_week_pane_g3

0xa5c2,	// (0x0002865d) grid_highlight_pane_cp07

0xa5ca,	// (0x00028665) listscroll_gms_pane

0xa5d4,	// (0x0002866f) grid_gms_pane

0xa5dd,	// (0x00028678) listscroll_gms_pane_g1

0xa5e5,	// (0x00028680) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0002d288) listscroll_gms_pane_g

0x2fbc,	// (0x00021057) scroll_pane_cp010

0x2fc7,	// (0x00021062) cell_gms_pane_ParamLimits

0x2fc7,	// (0x00021062) cell_gms_pane

0x2fda,	// (0x00021075) cell_gms_pane_g1

0xa5ed,	// (0x00028688) cell_gms_pane_g2

0xa5f5,	// (0x00028690) cell_gms_pane_g3

0xa5fe,	// (0x00028699) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0002d28d) cell_gms_pane_g

0xa607,	// (0x000286a2) grid_highlight_pane_cp09

0x5461,	// (0x000234fc) phob_pre_status_pane_g1

0x5469,	// (0x00023504) phob_pre_status_pane_g2

0x5471,	// (0x0002350c) phob_pre_status_pane_g3

0x5479,	// (0x00023514) phob_pre_status_pane_g4

0x0004,

0xf5dd,	// (0x0002d678) phob_pre_status_pane_g

0x5489,	// (0x00023524) phob_pre_status_pane_t1

0x5499,	// (0x00023534) phob_pre_status_pane_t2

0x54a9,	// (0x00023544) phob_pre_status_pane_t3

0x0002,

0xf5e8,	// (0x0002d683) phob_pre_status_pane_t

0xa60f,	// (0x000286aa) bg_list_pane_cp05

0x2fea,	// (0x00021085) grid_vorec_pane

0x2ff4,	// (0x0002108f) vorec_t1

0x3002,	// (0x0002109d) vorec_t2

0x3010,	// (0x000210ab) vorec_t3

0x301e,	// (0x000210b9) vorec_t4

0x27f7,	// (0x00020892) vorec_t5

0x2805,	// (0x000208a0) vorec_t6

0x0004,

0xf1fb,	// (0x0002d296) vorec_t

0x2813,	// (0x000208ae) wait_bar_pane_cp01

0x303a,	// (0x000210d5) cell_vorec_pane_ParamLimits

0x303a,	// (0x000210d5) cell_vorec_pane

0x1370,	// (0x0001f40b) cell_vorec_pane_g1

0xa113,	// (0x000281ae) grid_highlight_pane_cp05

0x305d,	// (0x000210f8) cams_zoom_pane

0x3069,	// (0x00021104) image_vga_pane

0x3078,	// (0x00021113) main_camera_pane_g1

0x3086,	// (0x00021121) main_camera_pane_g2

0x3092,	// (0x0002112d) main_camera_pane_g3

0x309e,	// (0x00021139) main_camera_pane_g4

0x30aa,	// (0x00021145) main_camera_pane_g5

0x30b6,	// (0x00021151) main_camera_pane_g6

0x30c2,	// (0x0002115d) main_camera_pane_g7

0x0007,

0xf206,	// (0x0002d2a1) main_camera_pane_g

0x30ce,	// (0x00021169) main_camera_pane_t1

0x30e0,	// (0x0002117b) main_camera_pane_t2

0x0001,

0xf217,	// (0x0002d2b2) main_camera_pane_t

0x3101,	// (0x0002119c) cams_zoom_pane_cp_ParamLimits

0x3101,	// (0x0002119c) cams_zoom_pane_cp

0x3125,	// (0x000211c0) image_cif_pane_ParamLimits

0x3125,	// (0x000211c0) image_cif_pane

0x3143,	// (0x000211de) image_subqcif_pane

0x314b,	// (0x000211e6) main_video_pane_g1_ParamLimits

0x314b,	// (0x000211e6) main_video_pane_g1

0x316b,	// (0x00021206) main_video_pane_g2_ParamLimits

0x316b,	// (0x00021206) main_video_pane_g2

0x319b,	// (0x00021236) main_video_pane_g3_ParamLimits

0x319b,	// (0x00021236) main_video_pane_g3

0x31c4,	// (0x0002125f) main_video_pane_g4_ParamLimits

0x31c4,	// (0x0002125f) main_video_pane_g4

0x31ed,	// (0x00021288) main_video_pane_g5_ParamLimits

0x31ed,	// (0x00021288) main_video_pane_g5

0xa623,	// (0x000286be) main_video_pane_g6_ParamLimits

0xa623,	// (0x000286be) main_video_pane_g6

0x0006,

0xf21c,	// (0x0002d2b7) main_video_pane_g_ParamLimits

0xf21c,	// (0x0002d2b7) main_video_pane_g

0x320f,	// (0x000212aa) main_video_pane_t1_ParamLimits

0x320f,	// (0x000212aa) main_video_pane_t1

0xa63d,	// (0x000286d8) cams_zoom_pane_g1

0xa646,	// (0x000286e1) cams_zoom_pane_g2

0xa64f,	// (0x000286ea) cams_zoom_pane_g3

0xa658,	// (0x000286f3) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0002d2c6) cams_zoom_pane_g

0x3259,	// (0x000212f4) grid_cams_pane

0x3267,	// (0x00021302) linegrid_cams_pane

0x3275,	// (0x00021310) cell_cams_pane_ParamLimits

0x3275,	// (0x00021310) cell_cams_pane

0xa661,	// (0x000286fc) cams_burst_image_pane

0xa669,	// (0x00028704) cell_cams_pane_g1

0xa113,	// (0x000281ae) grid_highlight_pane_cp03

0xa488,	// (0x00028523) mp_bg_pane_g1

0xa113,	// (0x000281ae) bg_list_pane_cp03

0xc40d,	// (0x0002a4a8) bg_mp_pane

0xc415,	// (0x0002a4b0) grid_mp_pane

0xc41d,	// (0x0002a4b8) media_player_g1

0xc425,	// (0x0002a4c0) media_player_t1

0xc433,	// (0x0002a4ce) media_player_t2

0xc441,	// (0x0002a4dc) media_player_t3

0xc44f,	// (0x0002a4ea) media_player_t4

0xc45d,	// (0x0002a4f8) media_player_t5

0xc46b,	// (0x0002a506) media_player_t6

0xc479,	// (0x0002a514) media_player_t7

0x0006,

0xf5c7,	// (0x0002d662) media_player_t

0xc487,	// (0x0002a522) wait_bar_pane_cp02

0xf5ac,	// (0x0002d647) main_usb_pane_t

0x5458,	// (0x000234f3) cell_mp_pane

0xa488,	// (0x00028523) cell_mp_pane_g1

0xa113,	// (0x000281ae) grid_highlight_pane_cp06

0xa671,	// (0x0002870c) grid_skin_colour_pane

0xa679,	// (0x00028714) list_highlight_pane_cp03

0x339c,	// (0x00021437) skin_g1

0xa681,	// (0x0002871c) skin_t1

0xa690,	// (0x0002872b) skin_t2

0x0001,

0xf260,	// (0x0002d2fb) skin_t

0x33a6,	// (0x00021441) cell_skin_colour_pane_ParamLimits

0x33a6,	// (0x00021441) cell_skin_colour_pane

0xa69e,	// (0x00028739) cell_skin_colour_pane_g1

0x342a,	// (0x000214c5) call_video_g1_ParamLimits

0x342a,	// (0x000214c5) call_video_g1

0x343a,	// (0x000214d5) call_video_g2_ParamLimits

0x343a,	// (0x000214d5) call_video_g2

0x0001,

0xf265,	// (0x0002d300) call_video_g_ParamLimits

0xf265,	// (0x0002d300) call_video_g

0x3494,	// (0x0002152f) call_video_uplink_pane_cp1_ParamLimits

0x3494,	// (0x0002152f) call_video_uplink_pane_cp1

0xa6b0,	// (0x0002874b) call_video_uplink_pane_cp2

0x3560,	// (0x000215fb) video_down_crop_pane_ParamLimits

0x3560,	// (0x000215fb) video_down_crop_pane

0x365e,	// (0x000216f9) video_down_pane_ParamLimits

0x365e,	// (0x000216f9) video_down_pane

0xa6b8,	// (0x00028753) video_down_subqcif_pane_ParamLimits

0xa6b8,	// (0x00028753) video_down_subqcif_pane

0xa6d0,	// (0x0002876b) video_down_subqcif_pane_cp_ParamLimits

0xa6d0,	// (0x0002876b) video_down_subqcif_pane_cp

0xa6f6,	// (0x00028791) im_reading_pane_ParamLimits

0xa6f6,	// (0x00028791) im_reading_pane

0x377e,	// (0x00021819) im_writing_pane_ParamLimits

0x377e,	// (0x00021819) im_writing_pane

0x379c,	// (0x00021837) im_reading_pane_t1

0xa710,	// (0x000287ab) list_im_pane

0xa721,	// (0x000287bc) scroll_pane_cp07

0x37f0,	// (0x0002188b) im_writing_pane_t1_ParamLimits

0x37f0,	// (0x0002188b) im_writing_pane_t1

0xa73a,	// (0x000287d5) im_writing_pane_t2_ParamLimits

0xa73a,	// (0x000287d5) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0002d30a) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0002d30a) im_writing_pane_t

0xa113,	// (0x000281ae) input_focus_pane_cp04

0xa113,	// (0x000281ae) input_focus_pane_cp05

0x3805,	// (0x000218a0) list_im_single_pane_ParamLimits

0x3805,	// (0x000218a0) list_im_single_pane

0x3829,	// (0x000218c4) list_single_im_pane_t1

0x541c,	// (0x000234b7) blid_accuracy_pane

0x5424,	// (0x000234bf) blid_compass_pane

0x542e,	// (0x000234c9) main_location_t1

0x543c,	// (0x000234d7) main_location_t2

0x544a,	// (0x000234e5) main_location_t3

0x0002,

0xf5d6,	// (0x0002d671) main_location_t

0xa113,	// (0x000281ae) aid_levels_location

0xa488,	// (0x00028523) blid_accuracy_pane_g1

0xa488,	// (0x00028523) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x0002d36c) blid_accuracy_pane_g

0xa782,	// (0x0002881d) wml_content_pane

0xa7c0,	// (0x0002885b) wml_button_pane_ParamLimits

0xa7c0,	// (0x0002885b) wml_button_pane

0x3838,	// (0x000218d3) wml_list_single_large_pane_ParamLimits

0x3838,	// (0x000218d3) wml_list_single_large_pane

0x3862,	// (0x000218fd) wml_list_single_medium_pane_ParamLimits

0x3862,	// (0x000218fd) wml_list_single_medium_pane

0x3893,	// (0x0002192e) wml_list_single_small_pane_ParamLimits

0x3893,	// (0x0002192e) wml_list_single_small_pane

0xa7d4,	// (0x0002886f) wml_selection_box_pane_ParamLimits

0xa7d4,	// (0x0002886f) wml_selection_box_pane

0xa7e7,	// (0x00028882) wml_list_single_pane_t1

0xa7f6,	// (0x00028891) wml_list_single_medium_pane_t1

0xa805,	// (0x000288a0) wml_list_single_large_pane_t1

0xa814,	// (0x000288af) input_focus_pane_cp02_ParamLimits

0xa814,	// (0x000288af) input_focus_pane_cp02

0xa827,	// (0x000288c2) wml_selection_box_pane_g1

0xa830,	// (0x000288cb) wml_selection_box_pane_t1_ParamLimits

0xa830,	// (0x000288cb) wml_selection_box_pane_t1

0xa36e,	// (0x00028409) bg_wml_button_pane_ParamLimits

0xa36e,	// (0x00028409) bg_wml_button_pane

0xa848,	// (0x000288e3) wml_button_pane_g1

0xa850,	// (0x000288eb) wml_button_pane_t1

0xa848,	// (0x000288e3) wml_button_bg_pane_g1

0xa860,	// (0x000288fb) wml_button_bg_pane_g2

0xa868,	// (0x00028903) wml_button_bg_pane_g3

0xa870,	// (0x0002890b) wml_button_bg_pane_g4

0xa878,	// (0x00028913) wml_button_bg_pane_g5

0xa880,	// (0x0002891b) wml_button_bg_pane_g6

0xa888,	// (0x00028923) wml_button_bg_pane_g7

0xa890,	// (0x0002892b) wml_button_bg_pane_g8

0xa898,	// (0x00028933) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0002d30f) wml_button_bg_pane_g

0x38cd,	// (0x00021968) bg_list_pane_cp02

0xa8a0,	// (0x0002893b) mce_header_pane_ParamLimits

0xa8a0,	// (0x0002893b) mce_header_pane

0xa8b6,	// (0x00028951) mce_icon_pane

0xa8b6,	// (0x00028951) mce_image_pane

0xa8bf,	// (0x0002895a) mce_text_pane_ParamLimits

0xa8bf,	// (0x0002895a) mce_text_pane

0x38d7,	// (0x00021972) scroll_pane_cp03

0xa7b8,	// (0x00028853) scroll_pane_cp04

0xa8d2,	// (0x0002896d) scroll_pane_cp05_ParamLimits

0xa8d2,	// (0x0002896d) scroll_pane_cp05

0x38e1,	// (0x0002197c) mce_header_field_pane_ParamLimits

0x38e1,	// (0x0002197c) mce_header_field_pane

0x3901,	// (0x0002199c) mce_header_field_pane_2_ParamLimits

0x3901,	// (0x0002199c) mce_header_field_pane_2

0x3917,	// (0x000219b2) mce_header_field_pane_3

0x391f,	// (0x000219ba) list_single_mce_message_pane_ParamLimits

0x391f,	// (0x000219ba) list_single_mce_message_pane

0x394a,	// (0x000219e5) list_single_mce_smart_pane_ParamLimits

0x394a,	// (0x000219e5) list_single_mce_smart_pane

0xa8de,	// (0x00028979) input_focus_pane_cp03

0xa8e7,	// (0x00028982) list_header_data_pane

0x3980,	// (0x00021a1b) mce_header_field_pane_t1

0x398e,	// (0x00021a29) list_single_mce_header_pane_ParamLimits

0x398e,	// (0x00021a29) list_single_mce_header_pane

0xa8ef,	// (0x0002898a) list_single_mce_header_pane_t1

0xa8fe,	// (0x00028999) list_single_mce_message_pane_g1

0xa906,	// (0x000289a1) list_single_mce_message_pane_t1

0x39e0,	// (0x00021a7b) bg_cale_heading_pane_cp01_ParamLimits

0x39e0,	// (0x00021a7b) bg_cale_heading_pane_cp01

0xa914,	// (0x000289af) bg_cale_pane_cp02_ParamLimits

0xa914,	// (0x000289af) bg_cale_pane_cp02

0x3a2e,	// (0x00021ac9) cale_month_corner_pane

0x3a4d,	// (0x00021ae8) cale_month_day_heading_pane_ParamLimits

0x3a4d,	// (0x00021ae8) cale_month_day_heading_pane

0x3ab3,	// (0x00021b4e) cale_month_pane_g1_ParamLimits

0x3ab3,	// (0x00021b4e) cale_month_pane_g1

0x3af6,	// (0x00021b91) cale_month_pane_g2_ParamLimits

0x3af6,	// (0x00021b91) cale_month_pane_g2

0x3b2e,	// (0x00021bc9) cale_month_pane_g3_ParamLimits

0x3b2e,	// (0x00021bc9) cale_month_pane_g3

0x3b7a,	// (0x00021c15) cale_month_pane_g4_ParamLimits

0x3b7a,	// (0x00021c15) cale_month_pane_g4

0x3bc6,	// (0x00021c61) cale_month_pane_g5_ParamLimits

0x3bc6,	// (0x00021c61) cale_month_pane_g5

0x3c12,	// (0x00021cad) cale_month_pane_g6_ParamLimits

0x3c12,	// (0x00021cad) cale_month_pane_g6

0x3c5e,	// (0x00021cf9) cale_month_pane_g7_ParamLimits

0x3c5e,	// (0x00021cf9) cale_month_pane_g7

0x3cc2,	// (0x00021d5d) cale_month_pane_g8_ParamLimits

0x3cc2,	// (0x00021d5d) cale_month_pane_g8

0x3d26,	// (0x00021dc1) cale_month_pane_g9_ParamLimits

0x3d26,	// (0x00021dc1) cale_month_pane_g9

0x3d84,	// (0x00021e1f) cale_month_pane_g10_ParamLimits

0x3d84,	// (0x00021e1f) cale_month_pane_g10

0x3de0,	// (0x00021e7b) cale_month_pane_g11_ParamLimits

0x3de0,	// (0x00021e7b) cale_month_pane_g11

0x3e34,	// (0x00021ecf) cale_month_pane_g12_ParamLimits

0x3e34,	// (0x00021ecf) cale_month_pane_g12

0x3e8a,	// (0x00021f25) cale_month_pane_g13_ParamLimits

0x3e8a,	// (0x00021f25) cale_month_pane_g13

0x000c,

0xf287,	// (0x0002d322) cale_month_pane_g_ParamLimits

0xf287,	// (0x0002d322) cale_month_pane_g

0x3ee0,	// (0x00021f7b) cale_month_week_pane

0x3f04,	// (0x00021f9f) grid_cale_month_pane_ParamLimits

0x3f04,	// (0x00021f9f) grid_cale_month_pane

0x3f5d,	// (0x00021ff8) cale_month_day_heading_pane_t1

0x3fe3,	// (0x0002207e) cale_month_day_heading_pane_t2

0x405c,	// (0x000220f7) cale_month_day_heading_pane_t3

0x40d5,	// (0x00022170) cale_month_day_heading_pane_t4

0x414e,	// (0x000221e9) cale_month_day_heading_pane_t5

0x41c7,	// (0x00022262) cale_month_day_heading_pane_t6

0x4240,	// (0x000222db) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0002d33d) cale_month_day_heading_pane_t

0xa5b4,	// (0x0002864f) bg_cale_side_pane_cp01

0x42d1,	// (0x0002236c) cale_month_week_pane_t1

0x42ea,	// (0x00022385) cale_month_week_pane_t2

0x4303,	// (0x0002239e) cale_month_week_pane_t3

0x431c,	// (0x000223b7) cale_month_week_pane_t4

0x4335,	// (0x000223d0) cale_month_week_pane_t5

0x4356,	// (0x000223f1) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0002d34c) cale_month_week_pane_t

0x4377,	// (0x00022412) cell_cale_month_pane_ParamLimits

0x4377,	// (0x00022412) cell_cale_month_pane

0x137a,	// (0x0001f415) cell_cale_month_pane_g1

0x1386,	// (0x0001f421) cell_cale_month_pane_t1_ParamLimits

0x1386,	// (0x0001f421) cell_cale_month_pane_t1

0xa5c2,	// (0x0002865d) grid_highlight_pane_cp08

0xa488,	// (0x00028523) main_smil_g1

0x44c3,	// (0x0002255e) smil_status_pane

0xa953,	// (0x000289ee) smil_text_pane

0xc32d,	// (0x0002a3c8) bg_popup_call3_rect_pane_g8

0xc335,	// (0x0002a3d0) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x0002d605) bg_popup_call3_rect_pane_g

0xc57c,	// (0x0002a617) smil_status_volume_pane_g1

0xa95d,	// (0x000289f8) smil_status_pane_t1

0x1658,	// (0x0001f6f3) volume_smil_pane

0xa974,	// (0x00028a0f) list_smil_text_pane

0x44d6,	// (0x00022571) scroll_pane_cp011

0x44e1,	// (0x0002257c) smil_text_list_pane_t1_ParamLimits

0x44e1,	// (0x0002257c) smil_text_list_pane_t1

0x13b2,	// (0x0001f44d) aid_volume_smil_ParamLimits

0x13b2,	// (0x0001f44d) aid_volume_smil

0xa488,	// (0x00028523) smil_volume_pane_g1

0xa488,	// (0x00028523) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x0002d36c) smil_volume_pane_g

0x2c54,	// (0x00020cef) listscroll_cale_day_pane

0xa97e,	// (0x00028a19) bg_cale_pane

0xa996,	// (0x00028a31) list_cale_pane

0xa9b9,	// (0x00028a54) scroll_pane_cp09

0xa9ca,	// (0x00028a65) cale_bg_pane_g1

0xa9d2,	// (0x00028a6d) cale_bg_pane_g2

0xa9da,	// (0x00028a75) cale_bg_pane_g3

0xa9e2,	// (0x00028a7d) cale_bg_pane_g4

0xa9ea,	// (0x00028a85) cale_bg_pane_g5

0xa9f2,	// (0x00028a8d) cale_bg_pane_g6

0xa9fa,	// (0x00028a95) cale_bg_pane_g7

0xaa02,	// (0x00028a9d) cale_bg_pane_g8

0xaa0a,	// (0x00028aa5) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x0002d371) cale_bg_pane_g

0x4561,	// (0x000225fc) list_cale_time_pane_ParamLimits

0x4561,	// (0x000225fc) list_cale_time_pane

0xaa12,	// (0x00028aad) list_cale_time_pane_g1_ParamLimits

0xaa12,	// (0x00028aad) list_cale_time_pane_g1

0xaa1e,	// (0x00028ab9) list_cale_time_pane_g2_ParamLimits

0xaa1e,	// (0x00028ab9) list_cale_time_pane_g2

0x4583,	// (0x0002261e) list_cale_time_pane_g3_ParamLimits

0x4583,	// (0x0002261e) list_cale_time_pane_g3

0x4591,	// (0x0002262c) list_cale_time_pane_g4_ParamLimits

0x4591,	// (0x0002262c) list_cale_time_pane_g4

0x459f,	// (0x0002263a) list_cale_time_pane_g5_ParamLimits

0x459f,	// (0x0002263a) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0002d384) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0002d384) list_cale_time_pane_g

0xaa38,	// (0x00028ad3) list_cale_time_pane_t1_ParamLimits

0xaa38,	// (0x00028ad3) list_cale_time_pane_t1

0xaa60,	// (0x00028afb) list_cale_time_pane_t2_ParamLimits

0xaa60,	// (0x00028afb) list_cale_time_pane_t2

0x48ce,	// (0x00022969) aid_blid_cardinal_pane

0x4910,	// (0x000229ab) compass_pane_t4

0xaa88,	// (0x00028b23) list_cale_time_pane_t4_ParamLimits

0xaa88,	// (0x00028b23) list_cale_time_pane_t4

0x491e,	// (0x000229b9) compass_pane_t5

0x492e,	// (0x000229c9) compass_pane_t6

0x493c,	// (0x000229d7) compass_pane_t7

0xaf45,	// (0x00028fe0) navi_pane_cc_t1

0xb122,	// (0x000291bd) aid_phob_thumbnail_center_pane

0x4f22,	// (0x00022fbd) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x0002d391) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x0002d391) list_cale_time_pane_t

0x9d6a,	// (0x00027e05) bg_popup_window_pane_cp02_ParamLimits

0x9d6a,	// (0x00027e05) bg_popup_window_pane_cp02

0xaab0,	// (0x00028b4b) heading_pane_cp01_ParamLimits

0xaab0,	// (0x00028b4b) heading_pane_cp01

0xaabc,	// (0x00028b57) loc_req_pane_ParamLimits

0xaabc,	// (0x00028b57) loc_req_pane

0xaacc,	// (0x00028b67) loc_type_pane_ParamLimits

0xaacc,	// (0x00028b67) loc_type_pane

0xaade,	// (0x00028b79) loc_type_pane_t1_ParamLimits

0xaade,	// (0x00028b79) loc_type_pane_t1

0xaaf0,	// (0x00028b8b) loc_type_pane_t2_ParamLimits

0xaaf0,	// (0x00028b8b) loc_type_pane_t2

0xab02,	// (0x00028b9d) loc_type_pane_t3_ParamLimits

0xab02,	// (0x00028b9d) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x0002d398) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x0002d398) loc_type_pane_t

0xab14,	// (0x00028baf) list_loc_req_pane

0xab1e,	// (0x00028bb9) scroll_pane_cp012

0x45ad,	// (0x00022648) list_single_loc_request_popup_menu_pane_ParamLimits

0x45ad,	// (0x00022648) list_single_loc_request_popup_menu_pane

0xab29,	// (0x00028bc4) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xab29,	// (0x00028bc4) list_single_loc_request_popup_menu_pane_g1

0xab35,	// (0x00028bd0) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xab35,	// (0x00028bd0) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x0002d39f) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x0002d39f) list_single_loc_request_popup_menu_pane_g

0xab41,	// (0x00028bdc) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xab41,	// (0x00028bdc) list_single_loc_request_popup_menu_pane_t1

0x45bf,	// (0x0002265a) bg_popup_window_pane_cp03_ParamLimits

0x45bf,	// (0x0002265a) bg_popup_window_pane_cp03

0x45cd,	// (0x00022668) heading_loc_req_pane_ParamLimits

0x45cd,	// (0x00022668) heading_loc_req_pane

0x45d9,	// (0x00022674) popup_dyc_status_message_window_g1_ParamLimits

0x45d9,	// (0x00022674) popup_dyc_status_message_window_g1

0x45e5,	// (0x00022680) popup_dyc_status_message_window_t1_ParamLimits

0x45e5,	// (0x00022680) popup_dyc_status_message_window_t1

0x45f7,	// (0x00022692) popup_dyc_status_message_window_t2_ParamLimits

0x45f7,	// (0x00022692) popup_dyc_status_message_window_t2

0x4609,	// (0x000226a4) popup_dyc_status_message_window_t3_ParamLimits

0x4609,	// (0x000226a4) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x0002d3a4) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x0002d3a4) popup_dyc_status_message_window_t

0xa113,	// (0x000281ae) bg_heading_pane_cp01

0xab57,	// (0x00028bf2) heading_loc_req_pane_g1

0xab5f,	// (0x00028bfa) heading_loc_req_pane_g2

0xab67,	// (0x00028c02) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x0002d3ab) heading_loc_req_pane_g

0xab6f,	// (0x00028c0a) heading_loc_req_pane_t1

0xab7e,	// (0x00028c19) bg_popup_sub_pane_cp01_ParamLimits

0xab7e,	// (0x00028c19) bg_popup_sub_pane_cp01

0xab8c,	// (0x00028c27) popup_cale_events_window_g1_ParamLimits

0xab8c,	// (0x00028c27) popup_cale_events_window_g1

0xabac,	// (0x00028c47) popup_cale_events_window_g2_ParamLimits

0xabac,	// (0x00028c47) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x0002d3df) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x0002d3df) popup_cale_events_window_g

0xabcc,	// (0x00028c67) popup_cale_events_window_t1_ParamLimits

0xabcc,	// (0x00028c67) popup_cale_events_window_t1

0xabde,	// (0x00028c79) popup_cale_events_window_t2_ParamLimits

0xabde,	// (0x00028c79) popup_cale_events_window_t2

0xac1c,	// (0x00028cb7) popup_cale_events_window_t3_ParamLimits

0xac1c,	// (0x00028cb7) popup_cale_events_window_t3

0xac62,	// (0x00028cfd) popup_cale_events_window_t4_ParamLimits

0xac62,	// (0x00028cfd) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x0002d3e4) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x0002d3e4) popup_cale_events_window_t

0x470e,	// (0x000227a9) call_type_pane

0xac98,	// (0x00028d33) popup_call_status_window_g1

0x471a,	// (0x000227b5) popup_call_status_window_g2

0x4726,	// (0x000227c1) popup_call_status_window_g3

0x0002,

0xf352,	// (0x0002d3ed) popup_call_status_window_g

0xaca6,	// (0x00028d41) call_type_pane_g1

0xacaf,	// (0x00028d4a) call_type_pane_g2

0x0001,

0xf359,	// (0x0002d3f4) call_type_pane_g

0xa113,	// (0x000281ae) bg_popup_sub_pane_cp02

0xacb8,	// (0x00028d53) listscroll_popup_wml_pane

0xacc0,	// (0x00028d5b) list_wml_pane

0xacca,	// (0x00028d65) scroll_pane_cp013

0xacd5,	// (0x00028d70) list_single_graphic_popup_wml_pane_ParamLimits

0xacd5,	// (0x00028d70) list_single_graphic_popup_wml_pane

0xa488,	// (0x00028523) list_single_graphic_popup_wml_pane_g1

0xace9,	// (0x00028d84) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x0002d3f9) list_single_graphic_popup_wml_pane_g

0xacf1,	// (0x00028d8c) list_single_graphic_popup_wml_pane_t1

0xad07,	// (0x00028da2) aid_call_pane

0xa366,	// (0x00028401) popup_clock_analogue_window_g1

0xa366,	// (0x00028401) popup_clock_analogue_window_g2

0x13d4,	// (0x0001f46f) popup_clock_analogue_window_g3

0x13d4,	// (0x0001f46f) popup_clock_analogue_window_g4

0xa488,	// (0x00028523) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x0002d3fe) popup_clock_analogue_window_g

0x13dc,	// (0x0001f477) popup_clock_analogue_window_t1

0x13ea,	// (0x0001f485) clock_digital_number_pane_ParamLimits

0x13ea,	// (0x0001f485) clock_digital_number_pane

0x13f6,	// (0x0001f491) clock_digital_number_pane_cp02_ParamLimits

0x13f6,	// (0x0001f491) clock_digital_number_pane_cp02

0x1402,	// (0x0001f49d) clock_digital_number_pane_cp03_ParamLimits

0x1402,	// (0x0001f49d) clock_digital_number_pane_cp03

0x140e,	// (0x0001f4a9) clock_digital_number_pane_cp04_ParamLimits

0x140e,	// (0x0001f4a9) clock_digital_number_pane_cp04

0x141e,	// (0x0001f4b9) clock_digital_separator_pane_ParamLimits

0x141e,	// (0x0001f4b9) clock_digital_separator_pane

0x142a,	// (0x0001f4c5) popup_clock_digital_window_t1

0xa488,	// (0x00028523) clock_digital_number_pane_g1

0xa488,	// (0x00028523) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x0002d36c) clock_digital_number_pane_g

0xa488,	// (0x00028523) clock_digital_separator_pane_g1

0xa488,	// (0x00028523) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x0002d36c) clock_digital_separator_pane_g

0xa113,	// (0x000281ae) bg_popup_window_pane_cp04

0xad0f,	// (0x00028daa) heading_pane_cp03

0xad17,	// (0x00028db2) listscroll_popup_gms_pane

0xad1f,	// (0x00028dba) grid_large_graphic_popup_pane

0xad29,	// (0x00028dc4) listscroll_popup_gms_pane_g1

0xad31,	// (0x00028dcc) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x0002d409) listscroll_popup_gms_pane_g

0xa7b8,	// (0x00028853) scroll_pane_cp014

0x4732,	// (0x000227cd) cell_large_graphic_popup_pane_ParamLimits

0x4732,	// (0x000227cd) cell_large_graphic_popup_pane

0x474a,	// (0x000227e5) cell_large_graphic_popup_pane_g1_ParamLimits

0x474a,	// (0x000227e5) cell_large_graphic_popup_pane_g1

0xad39,	// (0x00028dd4) cell_large_graphic_popup_pane_g2_ParamLimits

0xad39,	// (0x00028dd4) cell_large_graphic_popup_pane_g2

0xad45,	// (0x00028de0) cell_large_graphic_popup_pane_g3_ParamLimits

0xad45,	// (0x00028de0) cell_large_graphic_popup_pane_g3

0xad52,	// (0x00028ded) cell_large_graphic_popup_pane_g4_ParamLimits

0xad52,	// (0x00028ded) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x0002d40e) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x0002d40e) cell_large_graphic_popup_pane_g

0xad62,	// (0x00028dfd) grid_highlight_pane_cp010

0xa488,	// (0x00028523) bg_popup_call_pane_g1

0xad6c,	// (0x00028e07) list_single_graphic_popup_conf_pane_ParamLimits

0xad6c,	// (0x00028e07) list_single_graphic_popup_conf_pane

0xad7f,	// (0x00028e1a) list_highlight_pane_cp01

0xad88,	// (0x00028e23) list_single_graphic_popup_conf_pane_g1

0xad90,	// (0x00028e2b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x0002d417) list_single_graphic_popup_conf_pane_g

0xad98,	// (0x00028e33) list_single_graphic_popup_conf_pane_t1

0xada6,	// (0x00028e41) linegrid_cams_pane_g1

0x4756,	// (0x000227f1) linegrid_cams_pane_g2

0xa5f5,	// (0x00028690) linegrid_cams_pane_g3

0xadaf,	// (0x00028e4a) linegrid_cams_pane_g4

0x475f,	// (0x000227fa) linegrid_cams_pane_g5

0x4768,	// (0x00022803) linegrid_cams_pane_g6

0xa5fe,	// (0x00028699) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x0002d41c) linegrid_cams_pane_g

0xadb8,	// (0x00028e53) popup_clock_analogue_window

0xadb8,	// (0x00028e53) popup_clock_digital_window

0xa113,	// (0x000281ae) popup_phob_thumbnail_window

0xa488,	// (0x00028523) call_video_uplink_pane_g1

0xadc1,	// (0x00028e5c) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x0002d42b) call_video_uplink_pane_g

0xadc9,	// (0x00028e64) video_uplink_pane

0xadd1,	// (0x00028e6c) mce_image_pane_g1

0x4771,	// (0x0002280c) mce_image_pane_g2

0x477b,	// (0x00022816) mce_image_pane_g3

0x4783,	// (0x0002281e) mce_image_pane_g4

0x478b,	// (0x00022826) mce_image_pane_g5

0x0004,

0xf395,	// (0x0002d430) mce_image_pane_g

0xaddb,	// (0x00028e76) control_top_pane_stacon_cp01_ParamLimits

0xaddb,	// (0x00028e76) control_top_pane_stacon_cp01

0xadef,	// (0x00028e8a) uni_indicator_pane_stacon_cp01_ParamLimits

0xadef,	// (0x00028e8a) uni_indicator_pane_stacon_cp01

0xae00,	// (0x00028e9b) bg_popup_sub_pane_cp03

0xae0a,	// (0x00028ea5) chi_dic_find_pane

0x4793,	// (0x0002282e) listscroll_chi_dic_pane

0xae12,	// (0x00028ead) main_pane_chidic_g1

0xae1a,	// (0x00028eb5) chi_dic_find_pane_t1

0xae28,	// (0x00028ec3) find_chidic_pane

0xae31,	// (0x00028ecc) chi_dic_list_pane_ParamLimits

0xae31,	// (0x00028ecc) chi_dic_list_pane

0xae42,	// (0x00028edd) scroll_pane_cp020

0xae4a,	// (0x00028ee5) find_chidic_pane_t1

0xa113,	// (0x000281ae) input_focus_pane_cp06

0x47a7,	// (0x00022842) list_chi_dic_pane_ParamLimits

0x47a7,	// (0x00022842) list_chi_dic_pane

0x47c1,	// (0x0002285c) list_chi_dic_pane_t1_ParamLimits

0x47c1,	// (0x0002285c) list_chi_dic_pane_t1

0xa113,	// (0x000281ae) list_highlight_pane_cp020

0xae59,	// (0x00028ef4) bg_cale_heading_pane_g1

0x47d4,	// (0x0002286f) bg_cale_heading_pane_g2

0x47dc,	// (0x00022877) bg_cale_heading_pane_g3

0x47e4,	// (0x0002287f) bg_cale_heading_pane_g4

0x47ee,	// (0x00022889) bg_cale_heading_pane_g5

0x47f8,	// (0x00022893) bg_cale_heading_pane_g6

0x4800,	// (0x0002289b) bg_cale_heading_pane_g7

0x4808,	// (0x000228a3) bg_cale_heading_pane_g8

0x4812,	// (0x000228ad) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x0002d43b) bg_cale_heading_pane_g

0xae59,	// (0x00028ef4) bg_cale_side_pane_g1

0x481c,	// (0x000228b7) bg_cale_side_pane_g2

0x4826,	// (0x000228c1) bg_cale_side_pane_g3

0x4830,	// (0x000228cb) bg_cale_side_pane_g4

0x483a,	// (0x000228d5) bg_cale_side_pane_g5

0x4844,	// (0x000228df) bg_cale_side_pane_g6

0x484e,	// (0x000228e9) bg_cale_side_pane_g7

0x4858,	// (0x000228f3) bg_cale_side_pane_g8

0x4860,	// (0x000228fb) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x0002d44e) bg_cale_side_pane_g

0x4868,	// (0x00022903) popup_call_status_window_ParamLimits

0x4868,	// (0x00022903) popup_call_status_window

0xae61,	// (0x00028efc) stacon_top_pane

0xae69,	// (0x00028f04) status_pane_ParamLimits

0xae69,	// (0x00028f04) status_pane

0xae7e,	// (0x00028f19) status_small_pane

0xae86,	// (0x00028f21) control_pane

0xa113,	// (0x000281ae) stacon_bottom_pane

0xae8e,	// (0x00028f29) list_single_mce_smart_pane_t1_ParamLimits

0xae8e,	// (0x00028f29) list_single_mce_smart_pane_t1

0xaea1,	// (0x00028f3c) list_single_mce_smart_pane_t2_ParamLimits

0xaea1,	// (0x00028f3c) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x0002d461) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x0002d461) list_single_mce_smart_pane_t

0x4874,	// (0x0002290f) compass_pane

0x4880,	// (0x0002291b) main_location2_pane_t1

0x4894,	// (0x0002292f) main_location2_pane_t2

0x48a8,	// (0x00022943) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x0002d466) main_location2_pane_t

0xaec0,	// (0x00028f5b) compass_pane_g1_ParamLimits

0xaec0,	// (0x00028f5b) compass_pane_g1

0x48f2,	// (0x0002298d) compass_pane_t1

0x4901,	// (0x0002299c) compass_pane_t2

0x0005,

0xf3d4,	// (0x0002d46f) compass_pane_t

0x494c,	// (0x000229e7) text_secondary_cp61

0xaf3c,	// (0x00028fd7) navi_pane_cams_g5

0xafb8,	// (0x00029053) navi_pane_im_t1

0xafc6,	// (0x00029061) navi_pane_mp_g1_ParamLimits

0xafc6,	// (0x00029061) navi_pane_mp_g1

0xafda,	// (0x00029075) navi_pane_mp_g2_ParamLimits

0xafda,	// (0x00029075) navi_pane_mp_g2

0xafe6,	// (0x00029081) navi_pane_mp_g3_ParamLimits

0xafe6,	// (0x00029081) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x0002d483) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x0002d483) navi_pane_mp_g

0xaff2,	// (0x0002908d) navi_pane_mp_t1

0xb000,	// (0x0002909b) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x0002d48a) navi_pane_mp_t

0xb06b,	// (0x00029106) navi_pane_vt_g1

0xaff2,	// (0x0002908d) navi_pane_vt_t1

0xb073,	// (0x0002910e) navi_slider_pane

0xa60f,	// (0x000286aa) zooming_pane

0xb083,	// (0x0002911e) navi_slider_pane_g1

0x1447,	// (0x0001f4e2) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x0002d491) navi_slider_pane_g

0xb0a7,	// (0x00029142) aid_levels_zoom

0xb0af,	// (0x0002914a) zooming_pane_g1

0xb0b7,	// (0x00029152) zooming_pane_g2

0xb0b7,	// (0x00029152) zooming_pane_g3

0x0002,

0xf405,	// (0x0002d4a0) zooming_pane_g

0xb0bf,	// (0x0002915a) level_10_zoom

0xb0c8,	// (0x00029163) level_11_zoom

0xb0d1,	// (0x0002916c) level_1_zoom

0xb0da,	// (0x00029175) level_2_zoom

0xb0e3,	// (0x0002917e) level_3_zoom

0xb0ec,	// (0x00029187) level_4_zoom

0xb0f5,	// (0x00029190) level_5_zoom

0xb0fe,	// (0x00029199) level_6_zoom

0xb107,	// (0x000291a2) level_7_zoom

0xb110,	// (0x000291ab) level_8_zoom

0xb119,	// (0x000291b4) level_9_zoom

0xb12a,	// (0x000291c5) popup_phob_thumbnail_window_g1

0xb132,	// (0x000291cd) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x0002d4a7) popup_phob_thumbnail_window_g

0xc48f,	// (0x0002a52a) level_1_location

0xc497,	// (0x0002a532) level_2_location

0xc49f,	// (0x0002a53a) level_3_location

0xc4a7,	// (0x0002a542) level_4_location

0xa60f,	// (0x000286aa) level_5_location

0x4987,	// (0x00022a22) mce_icon_pane_g1

0x498f,	// (0x00022a2a) mce_icon_pane_g2

0x0001,

0xf411,	// (0x0002d4ac) mce_icon_pane_g

0x4997,	// (0x00022a32) main_mup_pane_g1_ParamLimits

0x4997,	// (0x00022a32) main_mup_pane_g1

0x49af,	// (0x00022a4a) main_mup_pane_g2_ParamLimits

0x49af,	// (0x00022a4a) main_mup_pane_g2

0x49cb,	// (0x00022a66) main_mup_pane_g3_ParamLimits

0x49cb,	// (0x00022a66) main_mup_pane_g3

0x49e7,	// (0x00022a82) main_mup_pane_g4_ParamLimits

0x49e7,	// (0x00022a82) main_mup_pane_g4

0x4a03,	// (0x00022a9e) main_mup_pane_g5_ParamLimits

0x4a03,	// (0x00022a9e) main_mup_pane_g5

0x4a24,	// (0x00022abf) main_mup_pane_g6_ParamLimits

0x4a24,	// (0x00022abf) main_mup_pane_g6

0x4a40,	// (0x00022adb) main_mup_pane_g7_ParamLimits

0x4a40,	// (0x00022adb) main_mup_pane_g7

0x4a5c,	// (0x00022af7) main_mup_pane_g8_ParamLimits

0x4a5c,	// (0x00022af7) main_mup_pane_g8

0x4a7c,	// (0x00022b17) main_mup_pane_g9_ParamLimits

0x4a7c,	// (0x00022b17) main_mup_pane_g9

0x4a9b,	// (0x00022b36) main_mup_pane_g10_ParamLimits

0x4a9b,	// (0x00022b36) main_mup_pane_g10

0x4aba,	// (0x00022b55) main_mup_pane_g11_ParamLimits

0x4aba,	// (0x00022b55) main_mup_pane_g11

0x4ad2,	// (0x00022b6d) main_mup_pane_g12_ParamLimits

0x4ad2,	// (0x00022b6d) main_mup_pane_g12

0x4ae0,	// (0x00022b7b) main_mup_pane_g13_ParamLimits

0x4ae0,	// (0x00022b7b) main_mup_pane_g13

0x000c,

0xf416,	// (0x0002d4b1) main_mup_pane_g_ParamLimits

0xf416,	// (0x0002d4b1) main_mup_pane_g

0x4af6,	// (0x00022b91) main_mup_pane_t1_ParamLimits

0x4af6,	// (0x00022b91) main_mup_pane_t1

0x4b13,	// (0x00022bae) main_mup_pane_t2_ParamLimits

0x4b13,	// (0x00022bae) main_mup_pane_t2

0x4b2d,	// (0x00022bc8) main_mup_pane_t3_ParamLimits

0x4b2d,	// (0x00022bc8) main_mup_pane_t3

0x4b47,	// (0x00022be2) main_mup_pane_t4_ParamLimits

0x4b47,	// (0x00022be2) main_mup_pane_t4

0x4b59,	// (0x00022bf4) main_mup_pane_t5_ParamLimits

0x4b59,	// (0x00022bf4) main_mup_pane_t5

0x4b6b,	// (0x00022c06) main_mup_pane_t6_ParamLimits

0x4b6b,	// (0x00022c06) main_mup_pane_t6

0x0005,

0xf431,	// (0x0002d4cc) main_mup_pane_t_ParamLimits

0xf431,	// (0x0002d4cc) main_mup_pane_t

0x4b81,	// (0x00022c1c) mup_progress_pane_ParamLimits

0x4b81,	// (0x00022c1c) mup_progress_pane

0x4b8d,	// (0x00022c28) mup_visualizer_pane_ParamLimits

0x4b8d,	// (0x00022c28) mup_visualizer_pane

0x4bc7,	// (0x00022c62) mup_volume_pane_ParamLimits

0x4bc7,	// (0x00022c62) mup_volume_pane

0xac98,	// (0x00028d33) mup_visualizer_pane_g1_ParamLimits

0xac98,	// (0x00028d33) mup_visualizer_pane_g1

0xac98,	// (0x00028d33) mup_visualizer_pane_g2_ParamLimits

0xac98,	// (0x00028d33) mup_visualizer_pane_g2

0xaec0,	// (0x00028f5b) mup_visualizer_pane_g3_ParamLimits

0xaec0,	// (0x00028f5b) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x0002d4d9) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x0002d4d9) mup_visualizer_pane_g

0xa488,	// (0x00028523) mup_volume_pane_g1

0xb142,	// (0x000291dd) mup_volume_pane_g2

0x0001,

0xf445,	// (0x0002d4e0) mup_volume_pane_g

0xa488,	// (0x00028523) mup_progress_pane_g1

0xb14b,	// (0x000291e6) mup_progress_pane_g2

0xb154,	// (0x000291ef) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x0002d4e5) mup_progress_pane_g

0xa113,	// (0x000281ae) bg_popup_window_pane_cp05

0xb15d,	// (0x000291f8) heading_pane_cp02_ParamLimits

0xb15d,	// (0x000291f8) heading_pane_cp02

0xb177,	// (0x00029212) list_popup_blid_pane

0xb17f,	// (0x0002921a) list_blid_sat_info_pane_ParamLimits

0xb17f,	// (0x0002921a) list_blid_sat_info_pane

0xb192,	// (0x0002922d) list_blid_sat_info_pane_g1

0xb19a,	// (0x00029235) list_blid_sat_info_pane_t1

0x4cd4,	// (0x00022d6f) mup_equalizer_pane_ParamLimits

0x4cd4,	// (0x00022d6f) mup_equalizer_pane

0x4cf5,	// (0x00022d90) mup_equalizer_pane_cp1_ParamLimits

0x4cf5,	// (0x00022d90) mup_equalizer_pane_cp1

0x4d16,	// (0x00022db1) mup_equalizer_pane_cp2_ParamLimits

0x4d16,	// (0x00022db1) mup_equalizer_pane_cp2

0x4d37,	// (0x00022dd2) mup_equalizer_pane_cp3_ParamLimits

0x4d37,	// (0x00022dd2) mup_equalizer_pane_cp3

0x4d58,	// (0x00022df3) mup_equalizer_pane_cp4_ParamLimits

0x4d58,	// (0x00022df3) mup_equalizer_pane_cp4

0x4d79,	// (0x00022e14) mup_equalizer_pane_cp5

0x4d8f,	// (0x00022e2a) mup_equalizer_pane_cp6

0x4da7,	// (0x00022e42) mup_equalizer_pane_cp7

0xc3ad,	// (0x0002a448) bg_popup_call_poc_act_pane_g9

0xc3b5,	// (0x0002a450) bg_popup_call_poc_act_pane_g10

0xc3bd,	// (0x0002a458) bg_popup_call_poc_act_pane_g11

0x000a,

0xa36e,	// (0x00028409) mup_scale_pane

0xa488,	// (0x00028523) mup_scale_pane_g1

0xb1a8,	// (0x00029243) mup_scale_pane_g2

0x0006,

0xf466,	// (0x0002d501) mup_scale_pane_g

0xb1cc,	// (0x00029267) msg_data_pane

0xb1d4,	// (0x0002926f) scroll_pane_cp017

0x4dd1,	// (0x00022e6c) bg_list_pane_cp04_ParamLimits

0x4dd1,	// (0x00022e6c) bg_list_pane_cp04

0xb1e4,	// (0x0002927f) msg_data_pane_g1

0x4ded,	// (0x00022e88) msg_data_pane_g2

0x4df7,	// (0x00022e92) msg_data_pane_g3

0x4dff,	// (0x00022e9a) msg_data_pane_g4

0x4e07,	// (0x00022ea2) msg_data_pane_g5

0x4e0f,	// (0x00022eaa) msg_data_pane_g6

0x4e17,	// (0x00022eb2) msg_data_pane_g7

0x0006,

0xf475,	// (0x0002d510) msg_data_pane_g

0x4e1f,	// (0x00022eba) msg_text_pane_ParamLimits

0x4e1f,	// (0x00022eba) msg_text_pane

0x4e6c,	// (0x00022f07) qrid_highlight_pane_cp011_ParamLimits

0x4e6c,	// (0x00022f07) qrid_highlight_pane_cp011

0xa113,	// (0x000281ae) msg_body_pane

0xa113,	// (0x000281ae) msg_header_pane

0xb1f5,	// (0x00029290) input_focus_pane_cp07

0xb20a,	// (0x000292a5) msg_header_pane_t1_ParamLimits

0xb20a,	// (0x000292a5) msg_header_pane_t1

0xb21c,	// (0x000292b7) msg_header_pane_t2_ParamLimits

0xb21c,	// (0x000292b7) msg_header_pane_t2

0x0001,

0xf489,	// (0x0002d524) msg_header_pane_t_ParamLimits

0xf489,	// (0x0002d524) msg_header_pane_t

0xb22e,	// (0x000292c9) msg_body_pane_g1

0xb236,	// (0x000292d1) msg_body_pane_t1_ParamLimits

0xb236,	// (0x000292d1) msg_body_pane_t1

0xb267,	// (0x00029302) msg_body_pane_t2_ParamLimits

0xb267,	// (0x00029302) msg_body_pane_t2

0xb279,	// (0x00029314) msg_body_pane_t3_ParamLimits

0xb279,	// (0x00029314) msg_body_pane_t3

0x0002,

0xf48e,	// (0x0002d529) msg_body_pane_t_ParamLimits

0xf48e,	// (0x0002d529) msg_body_pane_t

0x1489,	// (0x0001f524) main_viewer_pane_g1_ParamLimits

0x1489,	// (0x0001f524) main_viewer_pane_g1

0x1495,	// (0x0001f530) main_viewer_pane_g2_ParamLimits

0x1495,	// (0x0001f530) main_viewer_pane_g2

0x4eb4,	// (0x00022f4f) main_viewer_pane_g3_ParamLimits

0x4eb4,	// (0x00022f4f) main_viewer_pane_g3

0x4ec5,	// (0x00022f60) main_viewer_pane_g4_ParamLimits

0x4ec5,	// (0x00022f60) main_viewer_pane_g4

0x14a1,	// (0x0001f53c) main_viewer_pane_g5_ParamLimits

0x14a1,	// (0x0001f53c) main_viewer_pane_g5

0x14a1,	// (0x0001f53c) main_viewer_pane_g7_ParamLimits

0x14a1,	// (0x0001f53c) main_viewer_pane_g7

0xab29,	// (0x00028bc4) main_viewer_pane_g8_ParamLimits

0xab29,	// (0x00028bc4) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x0002d539) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0002d539) main_viewer_pane_g

0xb28b,	// (0x00029326) viewer_content_pane_ParamLimits

0xb28b,	// (0x00029326) viewer_content_pane

0x4ef6,	// (0x00022f91) main_postcard_pane_g1_ParamLimits

0x4ef6,	// (0x00022f91) main_postcard_pane_g1

0x4f04,	// (0x00022f9f) main_postcard_pane_g2_ParamLimits

0x4f04,	// (0x00022f9f) main_postcard_pane_g2

0x4f12,	// (0x00022fad) main_postcard_pane_g3_ParamLimits

0x4f12,	// (0x00022fad) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x0002d54a) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x0002d54a) main_postcard_pane_g

0x4f22,	// (0x00022fbd) main_postcard_pane_g4

0xc58f,	// (0x0002a62a) smil_status_volume_pane_g2

0x4f4e,	// (0x00022fe9) postcard_pane_ParamLimits

0x4f4e,	// (0x00022fe9) postcard_pane

0xac98,	// (0x00028d33) postcard_pane_g1_ParamLimits

0xac98,	// (0x00028d33) postcard_pane_g1

0x4f80,	// (0x0002301b) postcard_pane_g2_ParamLimits

0x4f80,	// (0x0002301b) postcard_pane_g2

0x4f8c,	// (0x00023027) postcard_pane_g3_ParamLimits

0x4f8c,	// (0x00023027) postcard_pane_g3

0xb299,	// (0x00029334) postcard_pane_g4_ParamLimits

0xb299,	// (0x00029334) postcard_pane_g4

0x4f98,	// (0x00023033) postcard_pane_g5_ParamLimits

0x4f98,	// (0x00023033) postcard_pane_g5

0x4fa4,	// (0x0002303f) postcard_pane_g6_ParamLimits

0x4fa4,	// (0x0002303f) postcard_pane_g6

0xb2a7,	// (0x00029342) postcard_pane_g7_ParamLimits

0xb2a7,	// (0x00029342) postcard_pane_g7

0x0006,

0xf4bc,	// (0x0002d557) postcard_pane_g_ParamLimits

0xf4bc,	// (0x0002d557) postcard_pane_g

0x4fb0,	// (0x0002304b) main_mp2_pane_g1_ParamLimits

0x4fb0,	// (0x0002304b) main_mp2_pane_g1

0x4fbc,	// (0x00023057) main_mp2_pane_g2_ParamLimits

0x4fbc,	// (0x00023057) main_mp2_pane_g2

0x4fc8,	// (0x00023063) main_mp2_pane_g3_ParamLimits

0x4fc8,	// (0x00023063) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x0002d566) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x0002d566) main_mp2_pane_g

0x4fd4,	// (0x0002306f) main_mp2_pane_t1_ParamLimits

0x4fd4,	// (0x0002306f) main_mp2_pane_t1

0x4feb,	// (0x00023086) main_mp2_pane_t2_ParamLimits

0x4feb,	// (0x00023086) main_mp2_pane_t2

0x4fff,	// (0x0002309a) main_mp2_pane_t3_ParamLimits

0x4fff,	// (0x0002309a) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x0002d56d) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x0002d56d) main_mp2_pane_t

0xb2b5,	// (0x00029350) pec_content_pane_ParamLimits

0xb2b5,	// (0x00029350) pec_content_pane

0xa7b8,	// (0x00028853) scroll_pane_cp015

0xb2c7,	// (0x00029362) pec_attribute_pane_ParamLimits

0xb2c7,	// (0x00029362) pec_attribute_pane

0x5011,	// (0x000230ac) pec_content_pane_g1_ParamLimits

0x5011,	// (0x000230ac) pec_content_pane_g1

0xb2d7,	// (0x00029372) pec_content_pane_t1_ParamLimits

0xb2d7,	// (0x00029372) pec_content_pane_t1

0xb2e9,	// (0x00029384) pec_content_pane_t2_ParamLimits

0xb2e9,	// (0x00029384) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x0002d574) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x0002d574) pec_content_pane_t

0x501d,	// (0x000230b8) list_single_graphic_pane_cp01_ParamLimits

0x501d,	// (0x000230b8) list_single_graphic_pane_cp01

0xa36e,	// (0x00028409) bg_popup_sub_pane_cp04

0xb2fb,	// (0x00029396) popup_mup_playback_window_g1

0xb307,	// (0x000293a2) popup_mup_playback_window_t1

0xb31c,	// (0x000293b7) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x0002d579) popup_mup_playback_window_t

0xb353,	// (0x000293ee) main_image_pane_g1_ParamLimits

0xb353,	// (0x000293ee) main_image_pane_g1

0xb396,	// (0x00029431) scroll_pane_cp018_ParamLimits

0xb396,	// (0x00029431) scroll_pane_cp018

0xb3ae,	// (0x00029449) scroll_pane_cp016_ParamLimits

0xb3ae,	// (0x00029449) scroll_pane_cp016

0x50b6,	// (0x00023151) smil2_image_pane_ParamLimits

0x50b6,	// (0x00023151) smil2_image_pane

0x50e6,	// (0x00023181) smil2_root_pane_ParamLimits

0x50e6,	// (0x00023181) smil2_root_pane

0x5112,	// (0x000231ad) smil2_text_pane_ParamLimits

0x5112,	// (0x000231ad) smil2_text_pane

0xa113,	// (0x000281ae) bg_list_pane_cp06

0xb3ea,	// (0x00029485) grid_radio_pane

0xa113,	// (0x000281ae) bg_popup_window_pane_cp06

0xb3f2,	// (0x0002948d) main_fmradio_pane_t1

0xad0f,	// (0x00028daa) heading_pane_cp04

0xb400,	// (0x0002949b) main_fmradio_pane_t2

0xc3c5,	// (0x0002a460) popup_cale_lunar_info_window_g1

0xb40e,	// (0x000294a9) main_fmradio_pane_t3

0xc3cd,	// (0x0002a468) popup_cale_lunar_info_window_g2

0xb41c,	// (0x000294b7) main_fmradio_pane_t4

0x0001,

0xb42a,	// (0x000294c5) main_fmradio_pane_t5

0x0004,

0xf5b9,	// (0x0002d654) popup_cale_lunar_info_window_g

0xf4f3,	// (0x0002d58e) main_fmradio_pane_t

0xb438,	// (0x000294d3) wait_bar_pane_cp03

0xb440,	// (0x000294db) cell_fmradio_pane_ParamLimits

0xb440,	// (0x000294db) cell_fmradio_pane

0xb2a7,	// (0x00029342) cell_fmradio_pane_g1_ParamLimits

0xb2a7,	// (0x00029342) cell_fmradio_pane_g1

0xa113,	// (0x000281ae) grid_highlight_pane_cp011

0xb453,	// (0x000294ee) poc_content_pane_ParamLimits

0xb453,	// (0x000294ee) poc_content_pane

0xb465,	// (0x00029500) scroll_pane_cp019

0x5152,	// (0x000231ed) popup_call_poc_act_window_ParamLimits

0x5152,	// (0x000231ed) popup_call_poc_act_window

0x515f,	// (0x000231fa) popup_call_poc_inact_window_ParamLimits

0x515f,	// (0x000231fa) popup_call_poc_inact_window

0xf590,	// (0x0002d62b) bg_popup_call_poc_act_pane_g

0xc33d,	// (0x0002a3d8) bg_popup_call_poc_inact_pane_g1

0xc345,	// (0x0002a3e0) bg_popup_call_poc_inact_pane_g2

0xb46d,	// (0x00029508) popup_call_poc_act_window_g2

0xc34d,	// (0x0002a3e8) bg_popup_call_poc_inact_pane_g3

0xc355,	// (0x0002a3f0) bg_popup_call_poc_inact_pane_g4

0xc35d,	// (0x0002a3f8) bg_popup_call_poc_inact_pane_g5

0xb475,	// (0x00029510) popup_call_poc_act_window_t1_ParamLimits

0xb475,	// (0x00029510) popup_call_poc_act_window_t1

0xb49d,	// (0x00029538) popup_call_poc_act_window_t2_ParamLimits

0xb49d,	// (0x00029538) popup_call_poc_act_window_t2

0xb4c5,	// (0x00029560) popup_call_poc_act_window_t3_ParamLimits

0xb4c5,	// (0x00029560) popup_call_poc_act_window_t3

0xb4ed,	// (0x00029588) popup_call_poc_act_window_t4_ParamLimits

0xb4ed,	// (0x00029588) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x0002d599) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x0002d599) popup_call_poc_act_window_t

0xc365,	// (0x0002a400) bg_popup_call_poc_inact_pane_g6

0xc36d,	// (0x0002a408) bg_popup_call_poc_inact_pane_g7

0xc375,	// (0x0002a410) bg_popup_call_poc_inact_pane_g8

0xb4ff,	// (0x0002959a) popup_call_poc_inact_window_g2

0xc37d,	// (0x0002a418) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf57d,	// (0x0002d618) bg_popup_call_poc_inact_pane_g

0xb507,	// (0x000295a2) popup_call_poc_inact_window_t1_ParamLimits

0xb507,	// (0x000295a2) popup_call_poc_inact_window_t1

0xb51c,	// (0x000295b7) popup_call_poc_inact_window_t2_ParamLimits

0xb51c,	// (0x000295b7) popup_call_poc_inact_window_t2

0xb531,	// (0x000295cc) popup_call_poc_inact_window_t3_ParamLimits

0xb531,	// (0x000295cc) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x0002d5a2) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x0002d5a2) popup_call_poc_inact_window_t

0xc502,	// (0x0002a59d) context_pane_ParamLimits

0x5615,	// (0x000236b0) signal_pane_ParamLimits

0xa60f,	// (0x000286aa) main_call2_pane

0x15fc,	// (0x0001f697) popup_phob_thumbnail2_window_ParamLimits

0x15fc,	// (0x0001f697) popup_phob_thumbnail2_window

0x1459,	// (0x0001f4f4) aid_hotspot_pointer_arrow_pane

0x1461,	// (0x0001f4fc) aid_hotspot_pointer_hand_pane

0x5481,	// (0x0002351c) phob_pre_status_pane_g5

0x305d,	// (0x000210f8) cams_zoom_pane_ParamLimits

0x3069,	// (0x00021104) image_vga_pane_ParamLimits

0x3078,	// (0x00021113) main_camera_pane_g1_ParamLimits

0x3086,	// (0x00021121) main_camera_pane_g2_ParamLimits

0x3092,	// (0x0002112d) main_camera_pane_g3_ParamLimits

0x309e,	// (0x00021139) main_camera_pane_g4_ParamLimits

0x30aa,	// (0x00021145) main_camera_pane_g5_ParamLimits

0x30b6,	// (0x00021151) main_camera_pane_g6_ParamLimits

0x30c2,	// (0x0002115d) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0002d2a1) main_camera_pane_g_ParamLimits

0x30ce,	// (0x00021169) main_camera_pane_t1_ParamLimits

0x30e0,	// (0x0002117b) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0002d2b2) main_camera_pane_t_ParamLimits

0xa36e,	// (0x00028409) bg_popup_preview_window_pane_cp01_ParamLimits

0xa36e,	// (0x00028409) bg_popup_preview_window_pane_cp01

0xb546,	// (0x000295e1) popup_phob_thumbnail2_window_g1_ParamLimits

0xb546,	// (0x000295e1) popup_phob_thumbnail2_window_g1

0xa113,	// (0x000281ae) call2_cli_visual_pane

0x517b,	// (0x00023216) popup_call2_audio_conf_window_ParamLimits

0x517b,	// (0x00023216) popup_call2_audio_conf_window

0x5190,	// (0x0002322b) popup_call2_audio_first_window_ParamLimits

0x5190,	// (0x0002322b) popup_call2_audio_first_window

0x522e,	// (0x000232c9) popup_call2_audio_in_window_ParamLimits

0x522e,	// (0x000232c9) popup_call2_audio_in_window

0x5270,	// (0x0002330b) popup_call2_audio_out_window_ParamLimits

0x5270,	// (0x0002330b) popup_call2_audio_out_window

0x52d2,	// (0x0002336d) popup_call2_audio_second_window_ParamLimits

0x52d2,	// (0x0002336d) popup_call2_audio_second_window

0x5330,	// (0x000233cb) popup_call2_audio_wait_window_ParamLimits

0x5330,	// (0x000233cb) popup_call2_audio_wait_window

0xa113,	// (0x000281ae) bg_popup_call2_act_pane_cp03

0xa350,	// (0x000283eb) list_conf_pane_cp

0xb552,	// (0x000295ed) popup_call2_audio_conf_window_t1

0xad6c,	// (0x00028e07) list_single_graphic_popup_conf2_pane_ParamLimits

0xad6c,	// (0x00028e07) list_single_graphic_popup_conf2_pane

0xad7f,	// (0x00028e1a) list_highlight_pane_cp04

0xb560,	// (0x000295fb) list_single_graphic_popup_conf2_pane_g1

0xad90,	// (0x00028e2b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x0002d5a9) list_single_graphic_popup_conf2_pane_g

0xb56a,	// (0x00029605) list_single_graphic_popup_conf2_pane_t1

0xb578,	// (0x00029613) bg_popup_call2_act_pane_cp01_ParamLimits

0xb578,	// (0x00029613) bg_popup_call2_act_pane_cp01

0xb602,	// (0x0002969d) call_type_pane_cp05_ParamLimits

0xb602,	// (0x0002969d) call_type_pane_cp05

0xb656,	// (0x000296f1) popup_call2_audio_second_window_g1_ParamLimits

0xb656,	// (0x000296f1) popup_call2_audio_second_window_g1

0xb6aa,	// (0x00029745) popup_call2_audio_second_window_g2_ParamLimits

0xb6aa,	// (0x00029745) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x0002d5ae) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x0002d5ae) popup_call2_audio_second_window_g

0xb70f,	// (0x000297aa) popup_call2_audio_second_window_t1_ParamLimits

0xb70f,	// (0x000297aa) popup_call2_audio_second_window_t1

0xb7ca,	// (0x00029865) popup_call2_audio_second_window_t2_ParamLimits

0xb7ca,	// (0x00029865) popup_call2_audio_second_window_t2

0xb81d,	// (0x000298b8) popup_call2_audio_second_window_t3_ParamLimits

0xb81d,	// (0x000298b8) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x0002d5b5) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x0002d5b5) popup_call2_audio_second_window_t

0xa113,	// (0x000281ae) bg_popup_call2_in_pane_cp02

0xa11d,	// (0x000281b8) call_type_pane_cp04

0xa125,	// (0x000281c0) popup_call2_audio_wait_window_g1

0xa12d,	// (0x000281c8) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0002d190) popup_call2_audio_wait_window_g

0xa135,	// (0x000281d0) popup_call2_audio_wait_window_t3

0xb910,	// (0x000299ab) bg_popup_call2_act_pane_ParamLimits

0xb910,	// (0x000299ab) bg_popup_call2_act_pane

0xb9d0,	// (0x00029a6b) call_type_pane_cp03_ParamLimits

0xb9d0,	// (0x00029a6b) call_type_pane_cp03

0xba34,	// (0x00029acf) popup_call2_audio_first_window_g1_ParamLimits

0xba34,	// (0x00029acf) popup_call2_audio_first_window_g1

0xbaa4,	// (0x00029b3f) popup_call2_audio_first_window_g2_ParamLimits

0xbaa4,	// (0x00029b3f) popup_call2_audio_first_window_g2

0xac98,	// (0x00028d33) popup_call2_audio_first_window_g3_ParamLimits

0xac98,	// (0x00028d33) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x0002d5be) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x0002d5be) popup_call2_audio_first_window_g

0xbb82,	// (0x00029c1d) popup_call2_audio_first_window_t1_ParamLimits

0xbb82,	// (0x00029c1d) popup_call2_audio_first_window_t1

0xbc85,	// (0x00029d20) popup_call2_audio_first_window_t4_ParamLimits

0xbc85,	// (0x00029d20) popup_call2_audio_first_window_t4

0xbd68,	// (0x00029e03) popup_call2_audio_first_window_t5_ParamLimits

0xbd68,	// (0x00029e03) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x0002d5c9) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x0002d5c9) popup_call2_audio_first_window_t

0xa366,	// (0x00028401) bg_popup_call2_act_pane_g1

0xc3d5,	// (0x0002a470) popup_cale_lunar_info_window_t1

0xc3e3,	// (0x0002a47e) popup_cale_lunar_info_window_t2

0xc3f1,	// (0x0002a48c) popup_cale_lunar_info_window_t3

0xa113,	// (0x000281ae) bg_popup_call2_bubble_pane

0xbe69,	// (0x00029f04) bg_popup_call2_in_pane_cp01_ParamLimits

0xbe69,	// (0x00029f04) bg_popup_call2_in_pane_cp01

0x9def,	// (0x00027e8a) call_type_pane_cp02

0xbeb1,	// (0x00029f4c) popup_call2_audio_out_window_g1_ParamLimits

0xbeb1,	// (0x00029f4c) popup_call2_audio_out_window_g1

0xbedd,	// (0x00029f78) popup_call2_audio_out_window_g2_ParamLimits

0xbedd,	// (0x00029f78) popup_call2_audio_out_window_g2

0xbf05,	// (0x00029fa0) popup_call2_audio_out_window_g3_ParamLimits

0xbf05,	// (0x00029fa0) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x0002d5d2) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x0002d5d2) popup_call2_audio_out_window_g

0xbf40,	// (0x00029fdb) popup_call2_audio_out_window_t1_ParamLimits

0xbf40,	// (0x00029fdb) popup_call2_audio_out_window_t1

0xbf9f,	// (0x0002a03a) popup_call2_audio_out_window_t2_ParamLimits

0xbf9f,	// (0x0002a03a) popup_call2_audio_out_window_t2

0xbff3,	// (0x0002a08e) popup_call2_audio_out_window_t3_ParamLimits

0xbff3,	// (0x0002a08e) popup_call2_audio_out_window_t3

0xc009,	// (0x0002a0a4) popup_call2_audio_out_window_t4_ParamLimits

0xc009,	// (0x0002a0a4) popup_call2_audio_out_window_t4

0xc01f,	// (0x0002a0ba) popup_call2_audio_out_window_t5_ParamLimits

0xc01f,	// (0x0002a0ba) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x0002d5db) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x0002d5db) popup_call2_audio_out_window_t

0xc083,	// (0x0002a11e) bg_popup_call2_in_pane_ParamLimits

0xc083,	// (0x0002a11e) bg_popup_call2_in_pane

0xc0df,	// (0x0002a17a) popup_call2_audio_in_window_g1_ParamLimits

0xc0df,	// (0x0002a17a) popup_call2_audio_in_window_g1

0xc117,	// (0x0002a1b2) popup_call2_audio_in_window_g2_ParamLimits

0xc117,	// (0x0002a1b2) popup_call2_audio_in_window_g2

0xc14f,	// (0x0002a1ea) popup_call2_audio_in_window_g3_ParamLimits

0xc14f,	// (0x0002a1ea) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x0002d5e8) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x0002d5e8) popup_call2_audio_in_window_g

0xc1a7,	// (0x0002a242) popup_call2_audio_in_window_t1_ParamLimits

0xc1a7,	// (0x0002a242) popup_call2_audio_in_window_t1

0xc227,	// (0x0002a2c2) popup_call2_audio_in_window_t2_ParamLimits

0xc227,	// (0x0002a2c2) popup_call2_audio_in_window_t2

0xc2a7,	// (0x0002a342) popup_call2_audio_in_window_t3_ParamLimits

0xc2a7,	// (0x0002a342) popup_call2_audio_in_window_t3

0xc2c1,	// (0x0002a35c) popup_call2_audio_in_window_t4_ParamLimits

0xc2c1,	// (0x0002a35c) popup_call2_audio_in_window_t4

0xc2d3,	// (0x0002a36e) popup_call2_audio_in_window_t5_ParamLimits

0xc2d3,	// (0x0002a36e) popup_call2_audio_in_window_t5

0xc2e8,	// (0x0002a383) popup_call2_audio_in_window_t6_ParamLimits

0xc2e8,	// (0x0002a383) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x0002d5f1) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x0002d5f1) popup_call2_audio_in_window_t

0xa366,	// (0x00028401) bg_popup_call2_in_pane_g1

0xc3ff,	// (0x0002a49a) popup_cale_lunar_info_window_t4

0x0003,

0xf5be,	// (0x0002d659) popup_cale_lunar_info_window_t

0xa36e,	// (0x00028409) bg_popup_call2_rect_pane_ParamLimits

0xa36e,	// (0x00028409) bg_popup_call2_rect_pane

0xa113,	// (0x000281ae) call2_cli_visual_graphic_pane

0xa113,	// (0x000281ae) call2_cli_visual_text_pane

0x164b,	// (0x0001f6e6) smil_status_volume_pane_g3

0x0002,

0xa488,	// (0x00028523) call2_cli_visual_graphic_pane_g1

0xa488,	// (0x00028523) call2_cli_visual_graphic_pane_g2

0xa488,	// (0x00028523) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x0002d5fe) call2_cli_visual_graphic_pane_g

0xc2fd,	// (0x0002a398) bg_popup_call2_rect_pane_g1

0xa52b,	// (0x000285c6) bg_popup_call2_rect_pane_g2

0xc305,	// (0x0002a3a0) bg_popup_call2_rect_pane_g3

0xc30d,	// (0x0002a3a8) bg_popup_call2_rect_pane_g4

0xc315,	// (0x0002a3b0) bg_popup_call2_rect_pane_g5

0xc31d,	// (0x0002a3b8) bg_popup_call2_rect_pane_g6

0xc325,	// (0x0002a3c0) bg_popup_call2_rect_pane_g7

0xc32d,	// (0x0002a3c8) bg_popup_call2_rect_pane_g8

0xc335,	// (0x0002a3d0) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x0002d605) bg_popup_call2_rect_pane_g

0xc33d,	// (0x0002a3d8) bg_popup_call2_bubble_pane_g1

0xc345,	// (0x0002a3e0) bg_popup_call2_bubble_pane_g2

0xc34d,	// (0x0002a3e8) bg_popup_call2_bubble_pane_g3

0xc355,	// (0x0002a3f0) bg_popup_call2_bubble_pane_g4

0xc35d,	// (0x0002a3f8) bg_popup_call2_bubble_pane_g5

0xc365,	// (0x0002a400) bg_popup_call2_bubble_pane_g6

0xc36d,	// (0x0002a408) bg_popup_call2_bubble_pane_g7

0xc375,	// (0x0002a410) bg_popup_call2_bubble_pane_g8

0xc37d,	// (0x0002a418) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x0002d618) bg_popup_call2_bubble_pane_g

0x2c64,	// (0x00020cff) aid_cale_week_size_cell_pane

0x30f2,	// (0x0002118d) aid_cams_cif_uncrop_pane_ParamLimits

0x30f2,	// (0x0002118d) aid_cams_cif_uncrop_pane

0x324d,	// (0x000212e8) aid_cams_size_cell_ParamLimits

0x324d,	// (0x000212e8) aid_cams_size_cell

0x3259,	// (0x000212f4) grid_cams_pane_ParamLimits

0x3267,	// (0x00021302) linegrid_cams_pane_ParamLimits

0x3452,	// (0x000214ed) call_video_pane_t1

0x3473,	// (0x0002150e) call_video_pane_t2

0x0001,

0xf26a,	// (0x0002d305) call_video_pane_t

0x39ba,	// (0x00021a55) aid_cale_month_size_cell_pane_ParamLimits

0x39ba,	// (0x00021a55) aid_cale_month_size_cell_pane

0xf607,	// (0x0002d6a2) smil_status_volume_pane_g

0x1658,	// (0x0001f6f3) volume_smil_pane_ParamLimits

0x0df4,	// (0x0001ee8f) aid_popup2_width_pane

0x2ba0,	// (0x00020c3b) cell_qdial_pane_g4_ParamLimits

0x2ba0,	// (0x00020c3b) cell_qdial_pane_g4

0x48ce,	// (0x00022969) aid_blid_cardinal_pane_ParamLimits

0x48de,	// (0x00022979) aid_blid_destination_pane_ParamLimits

0x48de,	// (0x00022979) aid_blid_destination_pane

0xa36e,	// (0x00028409) bg_popup_call_poc_act_pane_ParamLimits

0xa36e,	// (0x00028409) bg_popup_call_poc_act_pane

0xa36e,	// (0x00028409) bg_popup_call_poc_inact_pane_ParamLimits

0xa36e,	// (0x00028409) bg_popup_call_poc_inact_pane

0xc385,	// (0x0002a420) bg_popup_call_poc_act_pane_g1

0xc38d,	// (0x0002a428) bg_popup_call_poc_act_pane_g2

0xc395,	// (0x0002a430) bg_popup_call_poc_act_pane_g3

0xc355,	// (0x0002a3f0) bg_popup_call_poc_act_pane_g4

0xc35d,	// (0x0002a3f8) bg_popup_call_poc_act_pane_g5

0xc39d,	// (0x0002a438) bg_popup_call_poc_act_pane_g6

0xc36d,	// (0x0002a408) bg_popup_call_poc_act_pane_g7

0xc3a5,	// (0x0002a440) bg_popup_call_poc_act_pane_g8

0xa113,	// (0x000281ae) main_usb_pane

0x152b,	// (0x0001f5c6) popup_cale_lunar_info_window

0x379c,	// (0x00021837) im_reading_pane_t1_ParamLimits

0xa710,	// (0x000287ab) list_im_pane_ParamLimits

0xa721,	// (0x000287bc) scroll_pane_cp07_ParamLimits

0xa113,	// (0x000281ae) grid_highlight_pane_cp012

0xa36e,	// (0x00028409) mup_scale_pane_ParamLimits

0xac98,	// (0x00028d33) main_usb_pane_g1_ParamLimits

0xac98,	// (0x00028d33) main_usb_pane_g1

0x53a4,	// (0x0002343f) main_usb_pane_g2_ParamLimits

0x53a4,	// (0x0002343f) main_usb_pane_g2

0x0001,

0xf5a7,	// (0x0002d642) main_usb_pane_g_ParamLimits

0xf5a7,	// (0x0002d642) main_usb_pane_g

0x53b0,	// (0x0002344b) main_usb_pane_t1_ParamLimits

0x53b0,	// (0x0002344b) main_usb_pane_t1

0x53c2,	// (0x0002345d) main_usb_pane_t2_ParamLimits

0x53c2,	// (0x0002345d) main_usb_pane_t2

0x53d4,	// (0x0002346f) main_usb_pane_t3_ParamLimits

0x53d4,	// (0x0002346f) main_usb_pane_t3

0x53e6,	// (0x00023481) main_usb_pane_t4_ParamLimits

0x53e6,	// (0x00023481) main_usb_pane_t4

0x53f8,	// (0x00023493) main_usb_pane_t5_ParamLimits

0x53f8,	// (0x00023493) main_usb_pane_t5

0x540a,	// (0x000234a5) main_usb_pane_t6_ParamLimits

0x540a,	// (0x000234a5) main_usb_pane_t6

0x0005,

0xf5ac,	// (0x0002d647) main_usb_pane_t_ParamLimits

0x4874,	// (0x0002290f) aid_text_placing

0x4880,	// (0x0002291b) main_location2_pane_t1_ParamLimits

0x4894,	// (0x0002292f) main_location2_pane_t2_ParamLimits

0x48a8,	// (0x00022943) main_location2_pane_t3_ParamLimits

0x48bc,	// (0x00022957) main_location2_pane_t4_ParamLimits

0x48bc,	// (0x00022957) main_location2_pane_t4

0xf3cb,	// (0x0002d466) main_location2_pane_t_ParamLimits

0xa3aa,	// (0x00028445) find_pinb_pane_g2_ParamLimits

0xa3aa,	// (0x00028445) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0002d1b6) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0002d1b6) find_pinb_pane_g

0xa3b6,	// (0x00028451) find_pinb_pane_t1_ParamLimits

0xa3c8,	// (0x00028463) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0002d1bb) find_pinb_pane_t_ParamLimits

0xa113,	// (0x000281ae) main_call3_pane

0x3f5d,	// (0x00021ff8) cale_month_day_heading_pane_t1_ParamLimits

0x3fe3,	// (0x0002207e) cale_month_day_heading_pane_t2_ParamLimits

0x405c,	// (0x000220f7) cale_month_day_heading_pane_t3_ParamLimits

0x40d5,	// (0x00022170) cale_month_day_heading_pane_t4_ParamLimits

0x414e,	// (0x000221e9) cale_month_day_heading_pane_t5_ParamLimits

0x41c7,	// (0x00022262) cale_month_day_heading_pane_t6_ParamLimits

0x4240,	// (0x000222db) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0002d33d) cale_month_day_heading_pane_t_ParamLimits

0xa96b,	// (0x00028a06) smil_status_volume_pane

0x4f68,	// (0x00023003) postcard_address_pane_ParamLimits

0x4f68,	// (0x00023003) postcard_address_pane

0x4f74,	// (0x0002300f) postcard_message_pane_ParamLimits

0x4f74,	// (0x0002300f) postcard_message_pane

0x536f,	// (0x0002340a) call2_cli_visual_pane_t1_ParamLimits

0x536f,	// (0x0002340a) call2_cli_visual_pane_t1

0x57fd,	// (0x00023898) postcard_message_pane_t1_ParamLimits

0x57fd,	// (0x00023898) postcard_message_pane_t1

0x57e6,	// (0x00023881) postcard_address_pane_t1_ParamLimits

0x57e6,	// (0x00023881) postcard_address_pane_t1

0x57d7,	// (0x00023872) popup_call3_audio_in_window_ParamLimits

0x57d7,	// (0x00023872) popup_call3_audio_in_window

0x56bb,	// (0x00023756) bg_popup_call3_in_pane_ParamLimits

0x56bb,	// (0x00023756) bg_popup_call3_in_pane

0x571d,	// (0x000237b8) popup_call3_audio_in_window_g1_ParamLimits

0x571d,	// (0x000237b8) popup_call3_audio_in_window_g1

0x5735,	// (0x000237d0) popup_call3_audio_in_window_g2_ParamLimits

0x5735,	// (0x000237d0) popup_call3_audio_in_window_g2

0x574d,	// (0x000237e8) popup_call3_audio_in_window_g3_ParamLimits

0x574d,	// (0x000237e8) popup_call3_audio_in_window_g3

0x0003,

0xf60e,	// (0x0002d6a9) popup_call3_audio_in_window_g_ParamLimits

0xf60e,	// (0x0002d6a9) popup_call3_audio_in_window_g

0x5775,	// (0x00023810) popup_call3_audio_in_window_t1_ParamLimits

0x5775,	// (0x00023810) popup_call3_audio_in_window_t1

0x579d,	// (0x00023838) popup_call3_audio_in_window_t2_ParamLimits

0x579d,	// (0x00023838) popup_call3_audio_in_window_t2

0x57c5,	// (0x00023860) popup_call3_audio_in_window_t3_ParamLimits

0x57c5,	// (0x00023860) popup_call3_audio_in_window_t3

0x0002,

0xf617,	// (0x0002d6b2) popup_call3_audio_in_window_t_ParamLimits

0xf617,	// (0x0002d6b2) popup_call3_audio_in_window_t

0xa60f,	// (0x000286aa) bg_popup_call3_rect_pane

0xc2fd,	// (0x0002a398) bg_popup_call3_rect_pane_g1

0xa52b,	// (0x000285c6) bg_popup_call3_rect_pane_g2

0xc305,	// (0x0002a3a0) bg_popup_call3_rect_pane_g3

0xc30d,	// (0x0002a3a8) bg_popup_call3_rect_pane_g4

0xc315,	// (0x0002a3b0) bg_popup_call3_rect_pane_g5

0xc31d,	// (0x0002a3b8) bg_popup_call3_rect_pane_g6

0xc325,	// (0x0002a3c0) bg_popup_call3_rect_pane_g7

0x4be2,	// (0x00022c7d) mup_visualizer_osc_pane

0xb13a,	// (0x000291d5) mup_visualizer_spec_pane

0x56db,	// (0x00023776) call3_video_qcif_pane_ParamLimits

0x56db,	// (0x00023776) call3_video_qcif_pane

0x56ed,	// (0x00023788) call3_video_qcif_uncrop_pane_ParamLimits

0x56ed,	// (0x00023788) call3_video_qcif_uncrop_pane

0x56fb,	// (0x00023796) call3_video_subqcif_pane_ParamLimits

0x56fb,	// (0x00023796) call3_video_subqcif_pane

0x570d,	// (0x000237a8) call3_video_subqcif_uncrop_pane_ParamLimits

0x570d,	// (0x000237a8) call3_video_subqcif_uncrop_pane

0x5765,	// (0x00023800) popup_call3_audio_in_window_g4_ParamLimits

0x5765,	// (0x00023800) popup_call3_audio_in_window_g4

0x56aa,	// (0x00023745) mup_spec_half_pane

0x56b3,	// (0x0002374e) mup_spec_half_pane_cp

0xc562,	// (0x0002a5fd) mup_osc_middle_pane

0xc56b,	// (0x0002a606) mup_visualizer_osc_pane_g1

0x568b,	// (0x00023726) mup_spec_bar_pane_ParamLimits

0x568b,	// (0x00023726) mup_spec_bar_pane

0xc54f,	// (0x0002a5ea) mup_spec_bar_pane_g1

0xc559,	// (0x0002a5f4) mup_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0002d69d) mup_spec_bar_pane_g

0x2c64,	// (0x00020cff) aid_cale_week_size_cell_pane_ParamLimits

0x2c79,	// (0x00020d14) bg_cale_heading_pane_ParamLimits

0xa568,	// (0x00028603) bg_cale_pane_cp01_ParamLimits

0x2c99,	// (0x00020d34) cale_week_corner_pane_ParamLimits

0x2cb3,	// (0x00020d4e) cale_week_day_heading_pane_ParamLimits

0x2cd3,	// (0x00020d6e) cale_week_scroll_pane_g1_ParamLimits

0x2cee,	// (0x00020d89) cale_week_scroll_pane_g2_ParamLimits

0x2d01,	// (0x00020d9c) cale_week_scroll_pane_g3_ParamLimits

0x2d14,	// (0x00020daf) cale_week_scroll_pane_g4_ParamLimits

0x2d27,	// (0x00020dc2) cale_week_scroll_pane_g5_ParamLimits

0x2d3a,	// (0x00020dd5) cale_week_scroll_pane_g6_ParamLimits

0x2d4d,	// (0x00020de8) cale_week_scroll_pane_g7_ParamLimits

0x2d62,	// (0x00020dfd) cale_week_scroll_pane_g8_ParamLimits

0x2d77,	// (0x00020e12) cale_week_scroll_pane_g9_ParamLimits

0x2d8a,	// (0x00020e25) cale_week_scroll_pane_g10_ParamLimits

0x2d9d,	// (0x00020e38) cale_week_scroll_pane_g11_ParamLimits

0x2db0,	// (0x00020e4b) cale_week_scroll_pane_g12_ParamLimits

0x2dc7,	// (0x00020e62) cale_week_scroll_pane_g13_ParamLimits

0x2de2,	// (0x00020e7d) cale_week_scroll_pane_g14_ParamLimits

0x2dfd,	// (0x00020e98) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0002d247) cale_week_scroll_pane_g_ParamLimits

0x2e2d,	// (0x00020ec8) cale_week_time_pane_ParamLimits

0x2e42,	// (0x00020edd) grid_cale_week_pane_ParamLimits

0xa585,	// (0x00028620) listscroll_cale_week_pane_t1

0xa597,	// (0x00028632) scroll_pane_cp08_ParamLimits

0x3a2e,	// (0x00021ac9) cale_month_corner_pane_ParamLimits

0xa941,	// (0x000289dc) cale_month_pane_t1

0x3ee0,	// (0x00021f7b) cale_month_week_pane_ParamLimits

0xac98,	// (0x00028d33) popup_call_status_window_g1_ParamLimits

0x471a,	// (0x000227b5) popup_call_status_window_g2_ParamLimits

0x4726,	// (0x000227c1) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x0002d3ed) popup_call_status_window_g_ParamLimits

0xacff,	// (0x00028d9a) aid_call2_pane

0x4e86,	// (0x00022f21) msg_header_pane_g1

0x4f68,	// (0x00023003) postcard_address2_pane_ParamLimits

0x4f68,	// (0x00023003) postcard_address2_pane

0x4f74,	// (0x0002300f) postcard_message2_pane_ParamLimits

0x4f74,	// (0x0002300f) postcard_message2_pane

0x5623,	// (0x000236be) message2_row_pane_ParamLimits

0x5623,	// (0x000236be) message2_row_pane

0x563e,	// (0x000236d9) address2_row_pane_ParamLimits

0x563e,	// (0x000236d9) address2_row_pane

0xc51d,	// (0x0002a5b8) postcard_message2_row_pane_g1

0xc525,	// (0x0002a5c0) postcard_message2_row_pane_t1

0xc51d,	// (0x0002a5b8) address2_row_pane_g1

0xc525,	// (0x0002a5c0) address2_row_pane_t1

0x2fe2,	// (0x0002107d) aid_size_cell_vorec

0xa113,	// (0x000281ae) main_rss_pane

0x5651,	// (0x000236ec) rss_list_single_pane_ParamLimits

0x5651,	// (0x000236ec) rss_list_single_pane

0xc533,	// (0x0002a5ce) rss_list_single_pane_t1

0xc541,	// (0x0002a5dc) rss_list_single_pane_t2

0x0001,

0xf5fd,	// (0x0002d698) rss_list_single_pane_t

0xa113,	// (0x000281ae) main_camera2_pane

0xa113,	// (0x000281ae) main_video2_pane

0x16b6,	// (0x0001f751) cams_zoom_pane_cp2_ParamLimits

0x16b6,	// (0x0001f751) cams_zoom_pane_cp2

0x16c2,	// (0x0001f75d) image2_vga_pane_ParamLimits

0x16c2,	// (0x0001f75d) image2_vga_pane

0x16d1,	// (0x0001f76c) main_camera2_pane_g1_ParamLimits

0x16d1,	// (0x0001f76c) main_camera2_pane_g1

0x16dd,	// (0x0001f778) main_camera2_pane_g2_ParamLimits

0x16dd,	// (0x0001f778) main_camera2_pane_g2

0x16e9,	// (0x0001f784) main_camera2_pane_g3_ParamLimits

0x16e9,	// (0x0001f784) main_camera2_pane_g3

0x16f5,	// (0x0001f790) main_camera2_pane_g4_ParamLimits

0x16f5,	// (0x0001f790) main_camera2_pane_g4

0x1701,	// (0x0001f79c) main_camera2_pane_g5_ParamLimits

0x1701,	// (0x0001f79c) main_camera2_pane_g5

0x170d,	// (0x0001f7a8) main_camera2_pane_g6_ParamLimits

0x170d,	// (0x0001f7a8) main_camera2_pane_g6

0x1719,	// (0x0001f7b4) main_camera2_pane_g7_ParamLimits

0x1719,	// (0x0001f7b4) main_camera2_pane_g7

0x1725,	// (0x0001f7c0) main_camera2_pane_g8_ParamLimits

0x1725,	// (0x0001f7c0) main_camera2_pane_g8

0x0008,

0xf61e,	// (0x0002d6b9) main_camera2_pane_g_ParamLimits

0xf61e,	// (0x0002d6b9) main_camera2_pane_g

0x173d,	// (0x0001f7d8) main_camera2_pane_t1_ParamLimits

0x173d,	// (0x0001f7d8) main_camera2_pane_t1

0x174f,	// (0x0001f7ea) main_camera2_pane_t2_ParamLimits

0x174f,	// (0x0001f7ea) main_camera2_pane_t2

0x1761,	// (0x0001f7fc) main_camera2_pane_t3_ParamLimits

0x1761,	// (0x0001f7fc) main_camera2_pane_t3

0x1773,	// (0x0001f80e) main_camera2_pane_t4_ParamLimits

0x1773,	// (0x0001f80e) main_camera2_pane_t4

0x0006,

0xf631,	// (0x0002d6cc) main_camera2_pane_t_ParamLimits

0xf631,	// (0x0002d6cc) main_camera2_pane_t

0x17d5,	// (0x0001f870) cams_zoom_pane_cp4_ParamLimits

0x17d5,	// (0x0001f870) cams_zoom_pane_cp4

0x17e5,	// (0x0001f880) image2_cif_pane_ParamLimits

0x17e5,	// (0x0001f880) image2_cif_pane

0x17fa,	// (0x0001f895) image2_subqcif_pane_ParamLimits

0x17fa,	// (0x0001f895) image2_subqcif_pane

0x1809,	// (0x0001f8a4) main_video2_pane_g1_ParamLimits

0x1809,	// (0x0001f8a4) main_video2_pane_g1

0x181b,	// (0x0001f8b6) main_video2_pane_g2_ParamLimits

0x181b,	// (0x0001f8b6) main_video2_pane_g2

0x182b,	// (0x0001f8c6) main_video2_pane_g3_ParamLimits

0x182b,	// (0x0001f8c6) main_video2_pane_g3

0x183b,	// (0x0001f8d6) main_video2_pane_g4_ParamLimits

0x183b,	// (0x0001f8d6) main_video2_pane_g4

0x184b,	// (0x0001f8e6) main_video2_pane_g5_ParamLimits

0x184b,	// (0x0001f8e6) main_video2_pane_g5

0x185b,	// (0x0001f8f6) main_video2_pane_g6_ParamLimits

0x185b,	// (0x0001f8f6) main_video2_pane_g6

0x0005,

0xf640,	// (0x0002d6db) main_video2_pane_g_ParamLimits

0xf640,	// (0x0002d6db) main_video2_pane_g

0x186d,	// (0x0001f908) main_video2_pane_t1_ParamLimits

0x186d,	// (0x0001f908) main_video2_pane_t1

0x1887,	// (0x0001f922) main_video2_pane_t2_ParamLimits

0x1887,	// (0x0001f922) main_video2_pane_t2

0x18ad,	// (0x0001f948) main_video2_pane_t3_ParamLimits

0x18ad,	// (0x0001f948) main_video2_pane_t3

0x0002,

0xf64d,	// (0x0002d6e8) main_video2_pane_t_ParamLimits

0xf64d,	// (0x0002d6e8) main_video2_pane_t

0x54c1,	// (0x0002355c) call_muted_g2

0x0001,

0xf5ef,	// (0x0002d68a) call_muted_g

0xa113,	// (0x000281ae) main_mup2_pane

0xc5a2,	// (0x0002a63d) main_mup2_pane_g1_ParamLimits

0xc5a2,	// (0x0002a63d) main_mup2_pane_g1

0x5818,	// (0x000238b3) main_mup2_pane_g2_ParamLimits

0x5818,	// (0x000238b3) main_mup2_pane_g2

0x18fc,	// (0x0001f997) main_mup_pane_g13_cp1

0x1904,	// (0x0001f99f) mup_volume_pane_cp1

0x5838,	// (0x000238d3) main_mup2_pane_g4_ParamLimits

0x5838,	// (0x000238d3) main_mup2_pane_g4

0x584d,	// (0x000238e8) main_mup2_pane_g5_ParamLimits

0x584d,	// (0x000238e8) main_mup2_pane_g5

0x5862,	// (0x000238fd) main_mup2_pane_g6_ParamLimits

0x5862,	// (0x000238fd) main_mup2_pane_g6

0x5877,	// (0x00023912) main_mup2_pane_g7_ParamLimits

0x5877,	// (0x00023912) main_mup2_pane_g7

0x0006,

0xf654,	// (0x0002d6ef) main_mup2_pane_g_ParamLimits

0xf654,	// (0x0002d6ef) main_mup2_pane_g

0x5893,	// (0x0002392e) main_mup2_pane_t1_ParamLimits

0x5893,	// (0x0002392e) main_mup2_pane_t1

0x58aa,	// (0x00023945) main_mup2_pane_t2_ParamLimits

0x58aa,	// (0x00023945) main_mup2_pane_t2

0x58c1,	// (0x0002395c) main_mup2_pane_t3_ParamLimits

0x58c1,	// (0x0002395c) main_mup2_pane_t3

0x58d8,	// (0x00023973) main_mup2_pane_t4_ParamLimits

0x58d8,	// (0x00023973) main_mup2_pane_t4

0x58f2,	// (0x0002398d) main_mup2_pane_t5_ParamLimits

0x58f2,	// (0x0002398d) main_mup2_pane_t5

0x590c,	// (0x000239a7) main_mup2_pane_t6_ParamLimits

0x590c,	// (0x000239a7) main_mup2_pane_t6

0x0005,

0xf663,	// (0x0002d6fe) main_mup2_pane_t_ParamLimits

0xf663,	// (0x0002d6fe) main_mup2_pane_t

0x5944,	// (0x000239df) mup2_visualizer_pane_ParamLimits

0x5944,	// (0x000239df) mup2_visualizer_pane

0x597a,	// (0x00023a15) mup_progress_pane_cp_ParamLimits

0x597a,	// (0x00023a15) mup_progress_pane_cp

0x18e7,	// (0x0001f982) mup_volume_pane_cp_ParamLimits

0x18e7,	// (0x0001f982) mup_volume_pane_cp

0x5991,	// (0x00023a2c) mup2_visualizer_pane_g1_ParamLimits

0x5991,	// (0x00023a2c) mup2_visualizer_pane_g1

0xc5ae,	// (0x0002a649) mup2_visualizer_pane_g2_ParamLimits

0xc5ae,	// (0x0002a649) mup2_visualizer_pane_g2

0x59a6,	// (0x00023a41) mup2_visualizer_pane_g3_ParamLimits

0x59a6,	// (0x00023a41) mup2_visualizer_pane_g3

0x0002,

0xf670,	// (0x0002d70b) mup2_visualizer_pane_g_ParamLimits

0xf670,	// (0x0002d70b) mup2_visualizer_pane_g

0xb3e2,	// (0x0002947d) aid_size_cell_fmradio

0x14bf,	// (0x0001f55a) aid_height_parent_landcape

0xa79f,	// (0x0002883a) wml_content_pane_cp

0xa7a7,	// (0x00028842) wml_tabs_pane

0xa7b0,	// (0x0002884b) popup_wml_miniature_window

0xa7b8,	// (0x00028853) scroll_pane_cp021

0xa7cc,	// (0x00028867) wml_content_pane_comp8

0xa113,	// (0x000281ae) bg_popup_sub_pane_cp05

0xc5cc,	// (0x0002a667) popup_wml_miniature_window_g1

0xc5d4,	// (0x0002a66f) wml_miniature_view_pane

0x59b4,	// (0x00023a4f) aid_size_wml_view

0x59bc,	// (0x00023a57) wml_miniature_view_pane_g1

0x59c5,	// (0x00023a60) wml_miniature_view_pane_g2

0x59ce,	// (0x00023a69) wml_miniature_view_pane_g3

0x59d6,	// (0x00023a71) wml_miniature_view_pane_g4

0x59de,	// (0x00023a79) wml_miniature_view_pane_g5

0x59e6,	// (0x00023a81) wml_miniature_view_pane_g6

0x59ee,	// (0x00023a89) wml_miniature_view_pane_g7

0x59f6,	// (0x00023a91) wml_miniature_view_pane_g8

0x0007,

0xf677,	// (0x0002d712) wml_miniature_view_pane_g

0xc5a2,	// (0x0002a63d) background_graphic_ParamLimits

0xc5a2,	// (0x0002a63d) background_graphic

0xc5dc,	// (0x0002a677) wml_tabs_2_pane

0xc5e5,	// (0x0002a680) wml_tabs_3_pane_ParamLimits

0xc5e5,	// (0x0002a680) wml_tabs_3_pane

0xc5f7,	// (0x0002a692) wml_tabs_4_pane_ParamLimits

0xc5f7,	// (0x0002a692) wml_tabs_4_pane

0xc60d,	// (0x0002a6a8) wml_tabs_5_pane_ParamLimits

0xc60d,	// (0x0002a6a8) wml_tabs_5_pane

0xc627,	// (0x0002a6c2) wml_tabs_pane_g2_ParamLimits

0xc627,	// (0x0002a6c2) wml_tabs_pane_g2

0xc63b,	// (0x0002a6d6) wml_tabs_pane_g3_ParamLimits

0xc63b,	// (0x0002a6d6) wml_tabs_pane_g3

0x59fe,	// (0x00023a99) wml_tabs_2_active_pane_ParamLimits

0x59fe,	// (0x00023a99) wml_tabs_2_active_pane

0x5a0e,	// (0x00023aa9) wml_tabs_2_passive_pane_ParamLimits

0x5a0e,	// (0x00023aa9) wml_tabs_2_passive_pane

0x5a1e,	// (0x00023ab9) wml_tabs_3_active_pane_cp_ParamLimits

0x5a1e,	// (0x00023ab9) wml_tabs_3_active_pane_cp

0x5a2f,	// (0x00023aca) wml_tabs_3_passive_pane_ParamLimits

0x5a2f,	// (0x00023aca) wml_tabs_3_passive_pane

0x5a40,	// (0x00023adb) wml_tabs_3_passive_pane_cp_ParamLimits

0x5a40,	// (0x00023adb) wml_tabs_3_passive_pane_cp

0x5a51,	// (0x00023aec) tabs_4_active_pane

0x5a59,	// (0x00023af4) tabs_4_passive_pane

0x5a61,	// (0x00023afc) tabs_4_passive_pane_cp

0x5a69,	// (0x00023b04) tabs_4_passive_pane_cp2

0x539c,	// (0x00023437) aid_height_text

0x4baf,	// (0x00022c4a) mup_volume_cont_pane_ParamLimits

0x4baf,	// (0x00022c4a) mup_volume_cont_pane

0x2939,	// (0x000209d4) aid_size_cell_pinb

0x2943,	// (0x000209de) aid_size_list_pinb

0x5963,	// (0x000239fe) mup2_volume_cont_pane_ParamLimits

0x5963,	// (0x000239fe) mup2_volume_cont_pane

0x18d3,	// (0x0001f96e) mup2_volume_cont_pane_g1_ParamLimits

0x18d3,	// (0x0001f96e) mup2_volume_cont_pane_g1

0x0e00,	// (0x0001ee9b) aid_size_cell_touch_ParamLimits

0x0e00,	// (0x0001ee9b) aid_size_cell_touch

0x1088,	// (0x0001f123) touch_pane_ParamLimits

0x1088,	// (0x0001f123) touch_pane

0x107e,	// (0x0001f119) main_rss2_pane

0xc658,	// (0x0002a6f3) listscroll_rss2_pane

0xc661,	// (0x0002a6fc) rss2_navigation_pane

0xc669,	// (0x0002a704) list_rss2_pane

0xae42,	// (0x00028edd) scroll_pane_cp22

0xc671,	// (0x0002a70c) rss2_navigation_pane_g1

0xc67a,	// (0x0002a715) rss2_navigation_pane_g2

0xc682,	// (0x0002a71d) rss2_navigation_pane_g3

0x0002,

0xf688,	// (0x0002d723) rss2_navigation_pane_g

0xc68a,	// (0x0002a725) rss2_navigation_pane_t1

0x5a71,	// (0x00023b0c) rss2_list_single_pane_ParamLimits

0x5a71,	// (0x00023b0c) rss2_list_single_pane

0xc698,	// (0x0002a733) rss2_list_single_pane_t2

0xc6a6,	// (0x0002a741) rss2_list_single_pane_t3_ParamLimits

0xc6a6,	// (0x0002a741) rss2_list_single_pane_t3

0xc6c3,	// (0x0002a75e) rss2_list_single_pane_t4

0x44ce,	// (0x00022569) smil_status_pane_g1

0x14d6,	// (0x0001f571) main_image2_pane_ParamLimits

0x14d6,	// (0x0001f571) main_image2_pane

0x1731,	// (0x0001f7cc) main_camera2_pane_g9_ParamLimits

0x1731,	// (0x0001f7cc) main_camera2_pane_g9

0x1785,	// (0x0001f820) main_camera2_pane_t5_ParamLimits

0x1785,	// (0x0001f820) main_camera2_pane_t5

0x1797,	// (0x0001f832) main_camera2_pane_t6_ParamLimits

0x1797,	// (0x0001f832) main_camera2_pane_t6

0x5aa2,	// (0x00023b3d) main_image2_pane_g1_ParamLimits

0x5aa2,	// (0x00023b3d) main_image2_pane_g1

0x513c,	// (0x000231d7) smil2_video_pane_ParamLimits

0x513c,	// (0x000231d7) smil2_video_pane

0x0e34,	// (0x0001eecf) aid_zoom_text_primary_cp

0x1025,	// (0x0001f0c0) popup_preview_fixed_window

0xa708,	// (0x000287a3) im_reading_pane_g1

0x167b,	// (0x0001f716) cams2_bc_adjust_pane_cp_ParamLimits

0x167b,	// (0x0001f716) cams2_bc_adjust_pane_cp

0x17c7,	// (0x0001f862) cams2_bc_adjust_pane_ParamLimits

0x17c7,	// (0x0001f862) cams2_bc_adjust_pane

0xd96e,	// (0x0002ba09) cams2_bc_adjust_pane_g1

0x190c,	// (0x0001f9a7) cams2_slider_pane

0x1915,	// (0x0001f9b0) cams2_slider_pane_g1

0x191e,	// (0x0001f9b9) cams2_slider_pane_g2

0x0006,

0xf68f,	// (0x0002d72a) cams2_slider_pane_g

0x10f9,	// (0x0001f194) calc_display_pane_ParamLimits

0x1117,	// (0x0001f1b2) calc_paper_pane_ParamLimits

0x1133,	// (0x0001f1ce) grid_calc_pane_ParamLimits

0x142a,	// (0x0001f4c5) popup_clock_digital_window_t1_ParamLimits

0xb37f,	// (0x0002941a) main_image_pane_t1

0x10df,	// (0x0001f17a) aid_size_cell_calc_ParamLimits

0x10df,	// (0x0001f17a) aid_size_cell_calc

0x1507,	// (0x0001f5a2) popup_blid_sat_info2_window_ParamLimits

0x1507,	// (0x0001f5a2) popup_blid_sat_info2_window

0xc6d9,	// (0x0002a774) aid_size_cell_blid

0xc6e1,	// (0x0002a77c) bg_popup_window_pane_cp07

0xc704,	// (0x0002a79f) grid_popup_blid_pane

0xc70e,	// (0x0002a7a9) heading_pane_cp05_ParamLimits

0xc70e,	// (0x0002a7a9) heading_pane_cp05

0xc7d8,	// (0x0002a873) cell_popup_blid_pane_ParamLimits

0xc7d8,	// (0x0002a873) cell_popup_blid_pane

0xc7fc,	// (0x0002a897) cell_popup_blid_pane_g1

0xc804,	// (0x0002a89f) cell_popup_blid_pane_t1

0x5929,	// (0x000239c4) mup2_indicator_pane_ParamLimits

0x5929,	// (0x000239c4) mup2_indicator_pane

0xa60f,	// (0x000286aa) mup2_visualizer_osc_pane

0xc5ba,	// (0x0002a655) mup2_visualizer_spec_pane_ParamLimits

0xc5ba,	// (0x0002a655) mup2_visualizer_spec_pane

0x5aae,	// (0x00023b49) mup2_spec_half_pane

0x5ab7,	// (0x00023b52) mup2_spec_half_pane_cp

0x5ac1,	// (0x00023b5c) mup2_spec_bar_pane_ParamLimits

0x5ac1,	// (0x00023b5c) mup2_spec_bar_pane

0xc54f,	// (0x0002a5ea) mup2_spec_bar_pane_g1

0xc559,	// (0x0002a5f4) mup2_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0002d69d) mup2_spec_bar_pane_g

0x5ae0,	// (0x00023b7b) mup2_osc_middle_pane

0xc56b,	// (0x0002a606) mup2_visualizer_osc_pane_g1

0x9d20,	// (0x00027dbb) popup_number_entry_window_t1_ParamLimits

0x9d33,	// (0x00027dce) popup_number_entry_window_t2_ParamLimits

0x9d45,	// (0x00027de0) popup_number_entry_window_t3_ParamLimits

0x2876,	// (0x00020911) popup_number_entry_window_t5_ParamLimits

0x2876,	// (0x00020911) popup_number_entry_window_t5

0xf0c6,	// (0x0002d161) popup_number_entry_window_t_ParamLimits

0x9d57,	// (0x00027df2) text_title_cp2_ParamLimits

0x1469,	// (0x0001f504) aid_hotspot_pointer_text2_pane

0x14b3,	// (0x0001f54e) main_viewer_pane_g9_ParamLimits

0x14b3,	// (0x0001f54e) main_viewer_pane_g9

0xa941,	// (0x000289dc) cale_month_pane_t1_ParamLimits

0xa97e,	// (0x00028a19) bg_cale_pane_ParamLimits

0xa996,	// (0x00028a31) list_cale_pane_ParamLimits

0xa9a7,	// (0x00028a42) listscroll_cale_day_pane_t1

0xa9b9,	// (0x00028a54) scroll_pane_cp09_ParamLimits

0x4bea,	// (0x00022c85) main_mup_eq_pane_t1_ParamLimits

0x4bea,	// (0x00022c85) main_mup_eq_pane_t1

0x4c04,	// (0x00022c9f) main_mup_eq_pane_t2_ParamLimits

0x4c04,	// (0x00022c9f) main_mup_eq_pane_t2

0x4c1e,	// (0x00022cb9) main_mup_eq_pane_t3_ParamLimits

0x4c1e,	// (0x00022cb9) main_mup_eq_pane_t3

0x4c36,	// (0x00022cd1) main_mup_eq_pane_t4_ParamLimits

0x4c36,	// (0x00022cd1) main_mup_eq_pane_t4

0x4c4e,	// (0x00022ce9) main_mup_eq_pane_t5_ParamLimits

0x4c4e,	// (0x00022ce9) main_mup_eq_pane_t5

0x4c66,	// (0x00022d01) main_mup_eq_pane_t6_ParamLimits

0x4c66,	// (0x00022d01) main_mup_eq_pane_t6

0x4c7a,	// (0x00022d15) main_mup_eq_pane_t7_ParamLimits

0x4c7a,	// (0x00022d15) main_mup_eq_pane_t7

0x4c8e,	// (0x00022d29) main_mup_eq_pane_t8_ParamLimits

0x4c8e,	// (0x00022d29) main_mup_eq_pane_t8

0x4ca4,	// (0x00022d3f) main_mup_eq_pane_t9_ParamLimits

0x4ca4,	// (0x00022d3f) main_mup_eq_pane_t9

0x4cbc,	// (0x00022d57) main_mup_eq_pane_t10_ParamLimits

0x4cbc,	// (0x00022d57) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x0002d4ec) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x0002d4ec) main_mup_eq_pane_t

0x4d79,	// (0x00022e14) mup_equalizer_pane_cp5_ParamLimits

0x4d8f,	// (0x00022e2a) mup_equalizer_pane_cp6_ParamLimits

0x4da7,	// (0x00022e42) mup_equalizer_pane_cp7_ParamLimits

0x107e,	// (0x0001f119) main_gallery_pane

0xc574,	// (0x0002a60f) smil2_volume_pane

0xc57c,	// (0x0002a617) smil_status_volume_pane_g1_ParamLimits

0xc58f,	// (0x0002a62a) smil_status_volume_pane_g2_ParamLimits

0x164b,	// (0x0001f6e6) smil_status_volume_pane_g3_ParamLimits

0xf607,	// (0x0002d6a2) smil_status_volume_pane_g_ParamLimits

0xc6e1,	// (0x0002a77c) bg_popup_window_pane_cp07_ParamLimits

0xc6ef,	// (0x0002a78a) blid_firmament_pane

0x5ae9,	// (0x00023b84) aid_size_cell_gallery_ParamLimits

0x5ae9,	// (0x00023b84) aid_size_cell_gallery

0x5af7,	// (0x00023b92) grid_gallery_pane_ParamLimits

0x5af7,	// (0x00023b92) grid_gallery_pane

0x5b07,	// (0x00023ba2) cell_gallery_pane_ParamLimits

0x5b07,	// (0x00023ba2) cell_gallery_pane

0xc812,	// (0x0002a8ad) bg_cell_gallery_focus_pane_ParamLimits

0xc812,	// (0x0002a8ad) bg_cell_gallery_focus_pane

0xc824,	// (0x0002a8bf) cell_gallery_pane_g1_ParamLimits

0xc824,	// (0x0002a8bf) cell_gallery_pane_g1

0x5b55,	// (0x00023bf0) cell_gallery_pane_g2_ParamLimits

0x5b55,	// (0x00023bf0) cell_gallery_pane_g2

0x5b62,	// (0x00023bfd) cell_gallery_pane_g3_ParamLimits

0x5b62,	// (0x00023bfd) cell_gallery_pane_g3

0xc830,	// (0x0002a8cb) cell_gallery_pane_g4_ParamLimits

0xc830,	// (0x0002a8cb) cell_gallery_pane_g4

0x0003,

0xf6b5,	// (0x0002d750) cell_gallery_pane_g_ParamLimits

0xf6b5,	// (0x0002d750) cell_gallery_pane_g

0xc83c,	// (0x0002a8d7) bg_cell_gallery_focus_pane_g1

0xc844,	// (0x0002a8df) bg_cell_gallery_focus_pane_g2

0xc84c,	// (0x0002a8e7) bg_cell_gallery_focus_pane_g3

0xc854,	// (0x0002a8ef) bg_cell_gallery_focus_pane_g4

0xc85c,	// (0x0002a8f7) bg_cell_gallery_focus_pane_g5

0xc864,	// (0x0002a8ff) bg_cell_gallery_focus_pane_g6

0xc86c,	// (0x0002a907) bg_cell_gallery_focus_pane_g7

0xc874,	// (0x0002a90f) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6be,	// (0x0002d759) bg_cell_gallery_focus_pane_g

0xc87c,	// (0x0002a917) aid_firma_cardinal

0xc890,	// (0x0002a92b) blid_firmament_pane_t1

0xc8a7,	// (0x0002a942) blid_firmament_pane_t2

0xc8be,	// (0x0002a959) blid_firmament_pane_t3

0xc8d5,	// (0x0002a970) blid_firmament_pane_t4

0x0003,

0xf6cf,	// (0x0002d76a) blid_firmament_pane_t

0xc8ec,	// (0x0002a987) blid_sat_info_pane

0xc8fc,	// (0x0002a997) blid_sat_info_pane_g1

0xc8fc,	// (0x0002a997) blid_sat_info_pane_g2

0x0001,

0xf6d8,	// (0x0002d773) blid_sat_info_pane_g

0xc906,	// (0x0002a9a1) blid_sat_info_pane_t1

0xc914,	// (0x0002a9af) smil2_volume_content_pane

0xc91d,	// (0x0002a9b8) smil2_volume_pane_g1

0xa4e2,	// (0x0002857d) smil2_volume_content_pane_g1

0xc925,	// (0x0002a9c0) smil2_volume_content_pane_g2

0xc92e,	// (0x0002a9c9) smil2_volume_content_pane_g3

0xc937,	// (0x0002a9d2) smil2_volume_content_pane_g4

0xc940,	// (0x0002a9db) smil2_volume_content_pane_g5

0xc949,	// (0x0002a9e4) smil2_volume_content_pane_g6

0xc952,	// (0x0002a9ed) smil2_volume_content_pane_g7

0xc95b,	// (0x0002a9f6) smil2_volume_content_pane_g8

0xc964,	// (0x0002a9ff) smil2_volume_content_pane_g9

0xc96d,	// (0x0002aa08) smil2_volume_content_pane_g10

0x0009,

0xf6dd,	// (0x0002d778) smil2_volume_content_pane_g

0x2ec3,	// (0x00020f5e) cale_week_day_heading_pane_t1_ParamLimits

0x2ede,	// (0x00020f79) cale_week_day_heading_pane_t2_ParamLimits

0x2ef9,	// (0x00020f94) cale_week_day_heading_pane_t3_ParamLimits

0x2f14,	// (0x00020faf) cale_week_day_heading_pane_t4_ParamLimits

0x2f2f,	// (0x00020fca) cale_week_day_heading_pane_t5_ParamLimits

0x2f4a,	// (0x00020fe5) cale_week_day_heading_pane_t6_ParamLimits

0x2f65,	// (0x00021000) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0002d268) cale_week_day_heading_pane_t_ParamLimits

0xa5b4,	// (0x0002864f) bg_cale_side_pane_ParamLimits

0x128a,	// (0x0001f325) cale_week_time_pane_t1_ParamLimits

0x12a4,	// (0x0001f33f) cale_week_time_pane_t2_ParamLimits

0x12be,	// (0x0001f359) cale_week_time_pane_t3_ParamLimits

0x12d8,	// (0x0001f373) cale_week_time_pane_t4_ParamLimits

0x12f2,	// (0x0001f38d) cale_week_time_pane_t5_ParamLimits

0x130c,	// (0x0001f3a7) cale_week_time_pane_t6_ParamLimits

0x132a,	// (0x0001f3c5) cale_week_time_pane_t7_ParamLimits

0x134c,	// (0x0001f3e7) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0002d277) cale_week_time_pane_t_ParamLimits

0x2f80,	// (0x0002101b) cell_cale_week_pane_g2_ParamLimits

0xa5b4,	// (0x0002864f) bg_cale_side_pane_cp01_ParamLimits

0x42d1,	// (0x0002236c) cale_month_week_pane_t1_ParamLimits

0x42ea,	// (0x00022385) cale_month_week_pane_t2_ParamLimits

0x4303,	// (0x0002239e) cale_month_week_pane_t3_ParamLimits

0x431c,	// (0x000223b7) cale_month_week_pane_t4_ParamLimits

0x4335,	// (0x000223d0) cale_month_week_pane_t5_ParamLimits

0x4356,	// (0x000223f1) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0002d34c) cale_month_week_pane_t_ParamLimits

0x137a,	// (0x0001f415) cell_cale_month_pane_g1_ParamLimits

0x107e,	// (0x0001f119) main_cale_event_viewer_pane

0x9cf6,	// (0x00027d91) listscroll_cale_event_viewer_pane

0xc976,	// (0x0002aa11) list_cale_ev_pane

0xc97e,	// (0x0002aa19) scroll_pane_cp023

0xc98a,	// (0x0002aa25) field_cale_ev_pane_ParamLimits

0xc98a,	// (0x0002aa25) field_cale_ev_pane

0xc9a8,	// (0x0002aa43) field_cale_ev_content_pane_ParamLimits

0xc9a8,	// (0x0002aa43) field_cale_ev_content_pane

0xc9b4,	// (0x0002aa4f) field_cale_ev_pane_g1_ParamLimits

0xc9b4,	// (0x0002aa4f) field_cale_ev_pane_g1

0xc9c0,	// (0x0002aa5b) field_cale_ev_pane_g2_ParamLimits

0xc9c0,	// (0x0002aa5b) field_cale_ev_pane_g2

0xc9d8,	// (0x0002aa73) field_cale_ev_pane_g3_ParamLimits

0xc9d8,	// (0x0002aa73) field_cale_ev_pane_g3

0x0002,

0xf6f2,	// (0x0002d78d) field_cale_ev_pane_g_ParamLimits

0xf6f2,	// (0x0002d78d) field_cale_ev_pane_g

0xc9f0,	// (0x0002aa8b) field_cale_ev_pane_t1_ParamLimits

0xc9f0,	// (0x0002aa8b) field_cale_ev_pane_t1

0xca07,	// (0x0002aaa2) field_cale_ev_content_pane_t1_ParamLimits

0xca07,	// (0x0002aaa2) field_cale_ev_content_pane_t1

0xb1ec,	// (0x00029287) bg_button_pane_cp01

0x2c54,	// (0x00020cef) listscroll_cale_week_pane_ParamLimits

0xa55f,	// (0x000285fa) popup_toolbar_window_cp01

0xa585,	// (0x00028620) listscroll_cale_week_pane_t1_ParamLimits

0x2c54,	// (0x00020cef) listscroll_cale_day_pane_ParamLimits

0xa55f,	// (0x000285fa) popup_toolbar_window_cp02

0xa9a7,	// (0x00028a42) listscroll_cale_day_pane_t1_ParamLimits

0x2c54,	// (0x00020cef) main_cale_month_pane_ParamLimits

0x160e,	// (0x0001f6a9) popup_toolbar_window_cp03_ParamLimits

0x160e,	// (0x0001f6a9) popup_toolbar_window_cp03

0x5052,	// (0x000230ed) main_image_pane_g2_ParamLimits

0x5052,	// (0x000230ed) main_image_pane_g2

0x505e,	// (0x000230f9) main_image_pane_g3_ParamLimits

0x505e,	// (0x000230f9) main_image_pane_g3

0x0002,

0xf4e3,	// (0x0002d57e) main_image_pane_g_ParamLimits

0xf4e3,	// (0x0002d57e) main_image_pane_g

0xb37f,	// (0x0002941a) main_image_pane_t1_ParamLimits

0x506a,	// (0x00023105) main_image_pane_t2_ParamLimits

0x506a,	// (0x00023105) main_image_pane_t2

0x507c,	// (0x00023117) main_image_pane_t3_ParamLimits

0x507c,	// (0x00023117) main_image_pane_t3

0x508e,	// (0x00023129) main_image_pane_t4_ParamLimits

0x508e,	// (0x00023129) main_image_pane_t4

0x0003,

0xf4ea,	// (0x0002d585) main_image_pane_t_ParamLimits

0xf4ea,	// (0x0002d585) main_image_pane_t

0x50a0,	// (0x0002313b) popup_image_details_window_cp01

0x50aa,	// (0x00023145) popup_toobar_trans_pane_cp01_ParamLimits

0x50aa,	// (0x00023145) popup_toobar_trans_pane_cp01

0x155e,	// (0x0001f5f9) popup_image_details_window_ParamLimits

0x155e,	// (0x0001f5f9) popup_image_details_window

0x156c,	// (0x0001f607) popup_image_focus_window

0x166d,	// (0x0001f708) camera2_autofocus_pane_ParamLimits

0x166d,	// (0x0001f708) camera2_autofocus_pane

0x9cf6,	// (0x00027d91) bg_popup_sub_pane_cp06

0xca25,	// (0x0002aac0) popup_image_focus_window_g1

0xca2d,	// (0x0002aac8) popup_image_focus_window_g2

0xca35,	// (0x0002aad0) popup_image_focus_window_g3

0xca3d,	// (0x0002aad8) popup_image_focus_window_g4

0x0003,

0xf6f9,	// (0x0002d794) popup_image_focus_window_g

0xca45,	// (0x0002aae0) popup_image_focus_window_t1

0xca53,	// (0x0002aaee) popup_image_focus_window_t2

0xca63,	// (0x0002aafe) popup_image_focus_window_t3

0x0002,

0xf702,	// (0x0002d79d) popup_image_focus_window_t

0xca71,	// (0x0002ab0c) camera2_autofocus_pane_g1

0xa4d4,	// (0x0002856f) bg_tb_trans_pane_cp01

0xca7f,	// (0x0002ab1a) popup_image_details_window_g1

0xca92,	// (0x0002ab2d) popup_image_details_window_g2

0x0002,

0xf714,	// (0x0002d7af) popup_image_details_window_g

0xcabb,	// (0x0002ab56) popup_image_details_window_t1

0xcacd,	// (0x0002ab68) popup_image_details_window_t2

0xcae6,	// (0x0002ab81) popup_image_details_window_t3

0xcafa,	// (0x0002ab95) popup_image_details_window_t4

0xcb15,	// (0x0002abb0) popup_image_details_window_t5

0x0004,

0xf71b,	// (0x0002d7b6) popup_image_details_window_t

0xa41f,	// (0x000284ba) bg_calc_paper_pane_ParamLimits

0x107e,	// (0x0001f119) grid_highlight_pane_cp013

0x115f,	// (0x0001f1fa) list_calc_pane_ParamLimits

0x1171,	// (0x0001f20c) scroll_pane_cp024

0xa433,	// (0x000284ce) bg_calc_display_pane_ParamLimits

0x1179,	// (0x0001f214) calc_display_pane_t1_ParamLimits

0x118e,	// (0x0001f229) calc_display_pane_t2_ParamLimits

0x11a3,	// (0x0001f23e) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0002d1e8) calc_display_pane_t_ParamLimits

0x120c,	// (0x0001f2a7) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0002d205) cell_calc_pane_g

0x1215,	// (0x0001f2b0) cell_calc_pane_t1

0xa492,	// (0x0002852d) grid_highlight_pane_cp02_ParamLimits

0xa4a8,	// (0x00028543) toolbar_button_pane_cp01_ParamLimits

0xa4a8,	// (0x00028543) toolbar_button_pane_cp01

0xb3c4,	// (0x0002945f) temp_image_control_pane_ParamLimits

0xb3c4,	// (0x0002945f) temp_image_control_pane

0x14d6,	// (0x0001f571) main_mp3_pane

0xcb2f,	// (0x0002abca) temp_image_control_pane_g1_ParamLimits

0xcb2f,	// (0x0002abca) temp_image_control_pane_g1

0xcb3d,	// (0x0002abd8) temp_image_control_pane_g2_ParamLimits

0xcb3d,	// (0x0002abd8) temp_image_control_pane_g2

0xcb4f,	// (0x0002abea) temp_image_control_pane_g3_ParamLimits

0xcb4f,	// (0x0002abea) temp_image_control_pane_g3

0x5b9f,	// (0x00023c3a) temp_image_control_pane_g4_ParamLimits

0x5b9f,	// (0x00023c3a) temp_image_control_pane_g4

0x0003,

0xf726,	// (0x0002d7c1) temp_image_control_pane_g_ParamLimits

0xf726,	// (0x0002d7c1) temp_image_control_pane_g

0xcb2f,	// (0x0002abca) main_mp3_pane_g1

0x5bb0,	// (0x00023c4b) main_mp3_pane_g2

0x0007,

0xf72f,	// (0x0002d7ca) main_mp3_pane_g

0xcb92,	// (0x0002ac2d) main_mp3_pane_t1

0xa617,	// (0x000286b2) main_camera_pane_g8_ParamLimits

0xa617,	// (0x000286b2) main_camera_pane_g8

0x3203,	// (0x0002129e) main_video_pane_g7_ParamLimits

0x3203,	// (0x0002129e) main_video_pane_g7

0x17b5,	// (0x0001f850) main_camera2_pane_t7_ParamLimits

0x17b5,	// (0x0001f850) main_camera2_pane_t7

0xa75f,	// (0x000287fa) scroll_pane_cp025_ParamLimits

0xa75f,	// (0x000287fa) scroll_pane_cp025

0xa773,	// (0x0002880e) scroll_pane_cp026_ParamLimits

0xa773,	// (0x0002880e) scroll_pane_cp026

0xa782,	// (0x0002881d) wml_content_pane_ParamLimits

0x107e,	// (0x0001f119) main_touch_calib_pane

0x5c54,	// (0x00023cef) main_touch_calib_pane_g1

0x5c60,	// (0x00023cfb) main_touch_calib_pane_g2

0x5c6c,	// (0x00023d07) main_touch_calib_pane_g3

0x5c78,	// (0x00023d13) main_touch_calib_pane_g4

0x0003,

0xf74d,	// (0x0002d7e8) main_touch_calib_pane_g

0x5c84,	// (0x00023d1f) main_touch_calib_pane_t1

0x5c9d,	// (0x00023d38) main_touch_calib_pane_t2

0x0004,

0xf756,	// (0x0002d7f1) main_touch_calib_pane_t

0xaf1e,	// (0x00028fb9) mup_progress_pane_cp02

0xaf53,	// (0x00028fee) navi_pane_g1

0xb00e,	// (0x000290a9) navi_pane_mp_t3

0x14d6,	// (0x0001f571) main_mp3_pane_ParamLimits

0x55d7,	// (0x00023672) navi_pane_ParamLimits

0xcb2f,	// (0x0002abca) main_mp3_pane_g1_ParamLimits

0x5bb0,	// (0x00023c4b) main_mp3_pane_g2_ParamLimits

0x5bbc,	// (0x00023c57) main_mp3_pane_g3_ParamLimits

0x5bbc,	// (0x00023c57) main_mp3_pane_g3

0x5bc8,	// (0x00023c63) main_mp3_pane_g4_ParamLimits

0x5bc8,	// (0x00023c63) main_mp3_pane_g4

0xcb5f,	// (0x0002abfa) main_mp3_pane_g5_ParamLimits

0xcb5f,	// (0x0002abfa) main_mp3_pane_g5

0xcb6d,	// (0x0002ac08) main_mp3_pane_g6_ParamLimits

0xcb6d,	// (0x0002ac08) main_mp3_pane_g6

0xcb7a,	// (0x0002ac15) main_mp3_pane_g7_ParamLimits

0xcb7a,	// (0x0002ac15) main_mp3_pane_g7

0xcb86,	// (0x0002ac21) main_mp3_pane_g8_ParamLimits

0xcb86,	// (0x0002ac21) main_mp3_pane_g8

0xf72f,	// (0x0002d7ca) main_mp3_pane_g_ParamLimits

0x5bd4,	// (0x00023c6f) main_mp3_pane_t2

0x5be4,	// (0x00023c7f) main_mp3_pane_t3

0xcba0,	// (0x0002ac3b) main_mp3_pane_t4

0xcbae,	// (0x0002ac49) main_mp3_pane_t5

0x0005,

0xf740,	// (0x0002d7db) main_mp3_pane_t

0xcbbc,	// (0x0002ac57) mup_progress_pane_cp01

0x0e34,	// (0x0001eecf) aid_zoom_text_secondary2

0xc976,	// (0x0002aa11) list_cale_ev2_pane

0xc97e,	// (0x0002aa19) scroll_pane_cp023_ParamLimits

0x5cf8,	// (0x00023d93) field_cale_ev2_pane_ParamLimits

0x5cf8,	// (0x00023d93) field_cale_ev2_pane

0x5d21,	// (0x00023dbc) field_cale_ev2_pane_g1_ParamLimits

0x5d21,	// (0x00023dbc) field_cale_ev2_pane_g1

0x5d2d,	// (0x00023dc8) field_cale_ev2_pane_g2_ParamLimits

0x5d2d,	// (0x00023dc8) field_cale_ev2_pane_g2

0x5d45,	// (0x00023de0) field_cale_ev2_pane_g3_ParamLimits

0x5d45,	// (0x00023de0) field_cale_ev2_pane_g3

0x0003,

0xf761,	// (0x0002d7fc) field_cale_ev2_pane_g_ParamLimits

0xf761,	// (0x0002d7fc) field_cale_ev2_pane_g

0x5d5d,	// (0x00023df8) field_cale_ev2_pane_t1_ParamLimits

0x5d5d,	// (0x00023df8) field_cale_ev2_pane_t1

0x5d74,	// (0x00023e0f) field_cale_ev2_pane_t2_ParamLimits

0x5d74,	// (0x00023e0f) field_cale_ev2_pane_t2

0x0001,

0xf76a,	// (0x0002d805) field_cale_ev2_pane_t_ParamLimits

0xf76a,	// (0x0002d805) field_cale_ev2_pane_t

0x4f32,	// (0x00022fcd) main_postcard_pane_g5_ParamLimits

0x4f32,	// (0x00022fcd) main_postcard_pane_g5

0x4f40,	// (0x00022fdb) main_postcard_pane_g6_ParamLimits

0x4f40,	// (0x00022fdb) main_postcard_pane_g6

0x304d,	// (0x000210e8) camera2_autofocus_pane_cp_ParamLimits

0x304d,	// (0x000210e8) camera2_autofocus_pane_cp

0x14d6,	// (0x0001f571) main_mup3_pane

0x5da8,	// (0x00023e43) main_mup3_pane_g1_ParamLimits

0x5da8,	// (0x00023e43) main_mup3_pane_g1

0x5dc9,	// (0x00023e64) main_mup3_pane_g2_ParamLimits

0x5dc9,	// (0x00023e64) main_mup3_pane_g2

0x5e41,	// (0x00023edc) main_mup3_pane_g3_ParamLimits

0x5e41,	// (0x00023edc) main_mup3_pane_g3

0x5e84,	// (0x00023f1f) main_mup3_pane_g4_ParamLimits

0x5e84,	// (0x00023f1f) main_mup3_pane_g4

0x5ec7,	// (0x00023f62) main_mup3_pane_g5_ParamLimits

0x5ec7,	// (0x00023f62) main_mup3_pane_g5

0x5f0a,	// (0x00023fa5) main_mup3_pane_g6_ParamLimits

0x5f0a,	// (0x00023fa5) main_mup3_pane_g6

0xcbf0,	// (0x0002ac8b) main_mup3_pane_g7_ParamLimits

0xcbf0,	// (0x0002ac8b) main_mup3_pane_g7

0x0007,

0xf77a,	// (0x0002d815) main_mup3_pane_g_ParamLimits

0xf77a,	// (0x0002d815) main_mup3_pane_g

0x5f80,	// (0x0002401b) main_mup3_pane_t1_ParamLimits

0x5f80,	// (0x0002401b) main_mup3_pane_t1

0x5fef,	// (0x0002408a) main_mup3_pane_t2_ParamLimits

0x5fef,	// (0x0002408a) main_mup3_pane_t2

0x60b8,	// (0x00024153) main_mup3_pane_t4_ParamLimits

0x60b8,	// (0x00024153) main_mup3_pane_t4

0x6106,	// (0x000241a1) main_mup3_pane_t5_ParamLimits

0x6106,	// (0x000241a1) main_mup3_pane_t5

0x61b6,	// (0x00024251) main_mup3_pane_t6_ParamLimits

0x61b6,	// (0x00024251) main_mup3_pane_t6

0x0005,

0xf78b,	// (0x0002d826) main_mup3_pane_t_ParamLimits

0xf78b,	// (0x0002d826) main_mup3_pane_t

0x6262,	// (0x000242fd) mup3_progress_pane_ParamLimits

0x6262,	// (0x000242fd) mup3_progress_pane

0x62e0,	// (0x0002437b) popup_mup3_control_window_ParamLimits

0x62e0,	// (0x0002437b) popup_mup3_control_window

0xcbfe,	// (0x0002ac99) popup_mup3_text_window

0x62f9,	// (0x00024394) mup3_progress_pane_t1

0x6318,	// (0x000243b3) mup3_progress_pane_t2

0xcc06,	// (0x0002aca1) mup3_progress_pane_t3

0x0002,

0xf798,	// (0x0002d833) mup3_progress_pane_t

0xcc23,	// (0x0002acbe) mup_progress_pane_cp03

0x9cf6,	// (0x00027d91) bg_tb_trans_pane_cp04

0x6337,	// (0x000243d2) mup3_volume_pane

0x633f,	// (0x000243da) popup_mup3_control_window_g1

0x6348,	// (0x000243e3) mup3_volume_pane_g1

0x6351,	// (0x000243ec) mup3_volume_pane_g2

0x635a,	// (0x000243f5) mup3_volume_pane_g3

0x0002,

0xf79f,	// (0x0002d83a) mup3_volume_pane_g

0x9cf6,	// (0x00027d91) bg_tb_trans_pane_cp03

0xcc33,	// (0x0002acce) popup_mup3_text_window_g1

0xcc3b,	// (0x0002acd6) popup_mup3_text_window_t1

0xa47b,	// (0x00028516) list_calc_item_pane_g1_ParamLimits

0xc64f,	// (0x0002a6ea) mup_volume_pane_cp_g1

0x5cb6,	// (0x00023d51) main_touch_calib_pane_t3

0x5ccc,	// (0x00023d67) main_touch_calib_pane_t4

0x5ce2,	// (0x00023d7d) main_touch_calib_pane_t5

0x0dec,	// (0x0001ee87) aid_cell_size_toolbar2

0x0df4,	// (0x0001ee8f) aid_popup3_width_pane

0x0e34,	// (0x0001eecf) aid_zoom_text_msg_primary

0x302c,	// (0x000210c7) vorec_t7

0xa43f,	// (0x000284da) bg_calc_paper_pane_g1_ParamLimits

0xa44b,	// (0x000284e6) bg_calc_paper_pane_g2_ParamLimits

0xa457,	// (0x000284f2) bg_calc_paper_pane_g3_ParamLimits

0xa463,	// (0x000284fe) bg_calc_paper_pane_g4_ParamLimits

0xa46f,	// (0x0002850a) bg_calc_paper_pane_g5_ParamLimits

0x2b00,	// (0x00020b9b) bg_calc_paper_pane_g6_ParamLimits

0x2b11,	// (0x00020bac) bg_calc_paper_pane_g7_ParamLimits

0x2b22,	// (0x00020bbd) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0002d1ef) bg_calc_paper_pane_g_ParamLimits

0x2b33,	// (0x00020bce) calc_bg_paper_pane_g9_ParamLimits

0x3134,	// (0x000211cf) image_qvga_pane_ParamLimits

0x3134,	// (0x000211cf) image_qvga_pane

0xa36e,	// (0x00028409) bg_popup_sub_pane_cp04_ParamLimits

0xb2fb,	// (0x00029396) popup_mup_playback_window_g1_ParamLimits

0xb307,	// (0x000293a2) popup_mup_playback_window_t1_ParamLimits

0xb31c,	// (0x000293b7) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x0002d579) popup_mup_playback_window_t_ParamLimits

0x5829,	// (0x000238c4) main_mup2_pane_g3_ParamLimits

0x5829,	// (0x000238c4) main_mup2_pane_g3

0x3500,	// (0x0002159b) popup_toolbar_window_cp04

0xb6fe,	// (0x00029799) popup_call2_audio_second_window_g3_ParamLimits

0xb6fe,	// (0x00029799) popup_call2_audio_second_window_g3

0xbb08,	// (0x00029ba3) popup_call2_audio_first_window_g4_ParamLimits

0xbb08,	// (0x00029ba3) popup_call2_audio_first_window_g4

0xc187,	// (0x0002a222) popup_call2_audio_in_window_g4_ParamLimits

0xc187,	// (0x0002a222) popup_call2_audio_in_window_g4

0x5045,	// (0x000230e0) aid_area_sk_bg_cut_ParamLimits

0x5045,	// (0x000230e0) aid_area_sk_bg_cut

0xb331,	// (0x000293cc) aid_area_sk_bg_cut_2_ParamLimits

0xb331,	// (0x000293cc) aid_area_sk_bg_cut_2

0x5b45,	// (0x00023be0) aid_placing_details_win

0x5b4d,	// (0x00023be8) aid_placing_details_win_2

0xca71,	// (0x0002ab0c) camera2_autofocus_pane_g1_ParamLimits

0x1016,	// (0x0001f0b1) popup_fixed_preview_cale_window_ParamLimits

0x1016,	// (0x0001f0b1) popup_fixed_preview_cale_window

0xb08c,	// (0x00029127) navi_slider_pane_g3

0xb095,	// (0x00029130) navi_slider_pane_g4

0xb09e,	// (0x00029139) navi_slider_pane_g5

0xb08c,	// (0x00029127) navi_slider_pane_g6

0x1450,	// (0x0001f4eb) navi_slider_pane_g7

0xb1b1,	// (0x0002924c) mup_scale_pane_g3

0xb1ba,	// (0x00029255) mup_scale_pane_g4

0xb1c3,	// (0x0002925e) mup_scale_pane_g5

0x4dbf,	// (0x00022e5a) mup_scale_pane_g6

0x4dc8,	// (0x00022e63) mup_scale_pane_g7

0xb08c,	// (0x00029127) cams2_slider_pane_g3

0xc6d1,	// (0x0002a76c) cams2_slider_pane_g4

0x1927,	// (0x0001f9c2) cams2_slider_pane_g5

0xb08c,	// (0x00029127) cams2_slider_pane_g6

0x192f,	// (0x0001f9ca) cams2_slider_pane_g7

0xc8fc,	// (0x0002a997) camera2_autofocus_pane_cp_g1

0xc4e8,	// (0x0002a583) bg_popup_preview_window_pane_cp02_ParamLimits

0xc4e8,	// (0x0002a583) bg_popup_preview_window_pane_cp02

0xcc49,	// (0x0002ace4) list_fp_cale_pane_ParamLimits

0xcc49,	// (0x0002ace4) list_fp_cale_pane

0xcc55,	// (0x0002acf0) popup_fixed_preview_cale_window_t1_ParamLimits

0xcc55,	// (0x0002acf0) popup_fixed_preview_cale_window_t1

0x6363,	// (0x000243fe) popup_fixed_preview_cale_window_t2_ParamLimits

0x6363,	// (0x000243fe) popup_fixed_preview_cale_window_t2

0x6378,	// (0x00024413) popup_fixed_preview_cale_window_t3_ParamLimits

0x6378,	// (0x00024413) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a6,	// (0x0002d841) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a6,	// (0x0002d841) popup_fixed_preview_cale_window_t

0x638d,	// (0x00024428) list_single_fp_cale_pane_ParamLimits

0x638d,	// (0x00024428) list_single_fp_cale_pane

0xcc73,	// (0x0002ad0e) list_single_fp_cale_pane_g1_ParamLimits

0xcc73,	// (0x0002ad0e) list_single_fp_cale_pane_g1

0xcc7f,	// (0x0002ad1a) list_single_fp_cale_pane_g2_ParamLimits

0xcc7f,	// (0x0002ad1a) list_single_fp_cale_pane_g2

0x0002,

0xf7ad,	// (0x0002d848) list_single_fp_cale_pane_g_ParamLimits

0xf7ad,	// (0x0002d848) list_single_fp_cale_pane_g

0xcc98,	// (0x0002ad33) list_single_fp_cale_pane_t1_ParamLimits

0xcc98,	// (0x0002ad33) list_single_fp_cale_pane_t1

0xccaa,	// (0x0002ad45) list_single_fp_cale_pane_t2_ParamLimits

0xccaa,	// (0x0002ad45) list_single_fp_cale_pane_t2

0x0001,

0xf7b4,	// (0x0002d84f) list_single_fp_cale_pane_t_ParamLimits

0xf7b4,	// (0x0002d84f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x107e,	// (0x0001f119) main_dialer_pane

0x63a0,	// (0x0002443b) aid_cell_size_keypad

0x63aa,	// (0x00024445) dialer_ne_pane

0x63b4,	// (0x0002444f) grid_dialer_command_1_pane

0x63bc,	// (0x00024457) grid_dialer_command_2_pane

0x63c4,	// (0x0002445f) grid_dialer_keypad_pane

0x63d6,	// (0x00024471) bg_popup_call_pane_cp06_ParamLimits

0x63d6,	// (0x00024471) bg_popup_call_pane_cp06

0x63e2,	// (0x0002447d) dialer_ne_clear_pane_ParamLimits

0x63e2,	// (0x0002447d) dialer_ne_clear_pane

0xccdd,	// (0x0002ad78) dialer_ne_pane_g1

0xcce5,	// (0x0002ad80) dialer_ne_pane_t1_ParamLimits

0xcce5,	// (0x0002ad80) dialer_ne_pane_t1

0x63ee,	// (0x00024489) dialer_ne_pane_t2_ParamLimits

0x63ee,	// (0x00024489) dialer_ne_pane_t2

0x640b,	// (0x000244a6) dialer_ne_pane_t3_ParamLimits

0x640b,	// (0x000244a6) dialer_ne_pane_t3

0x0002,

0xf7b9,	// (0x0002d854) dialer_ne_pane_t_ParamLimits

0xf7b9,	// (0x0002d854) dialer_ne_pane_t

0x642f,	// (0x000244ca) dialer_ne_pane_t3_copy1_ParamLimits

0x642f,	// (0x000244ca) dialer_ne_pane_t3_copy1

0x6453,	// (0x000244ee) cell_dialer_keypad_pane_ParamLimits

0x6453,	// (0x000244ee) cell_dialer_keypad_pane

0x646a,	// (0x00024505) cell_dialer_command_1_pane_ParamLimits

0x646a,	// (0x00024505) cell_dialer_command_1_pane

0x6480,	// (0x0002451b) cell_dialer_command_2_pane_ParamLimits

0x6480,	// (0x0002451b) cell_dialer_command_2_pane

0xccf7,	// (0x0002ad92) bg_button_pane_cp02_ParamLimits

0xccf7,	// (0x0002ad92) bg_button_pane_cp02

0x648f,	// (0x0002452a) cell_dialer_keypad_pane_g1_ParamLimits

0x648f,	// (0x0002452a) cell_dialer_keypad_pane_g1

0xccf7,	// (0x0002ad92) bg_button_pane_cp03_ParamLimits

0xccf7,	// (0x0002ad92) bg_button_pane_cp03

0x64a4,	// (0x0002453f) cell_dialer_command_1_pane_g1_ParamLimits

0x64a4,	// (0x0002453f) cell_dialer_command_1_pane_g1

0xcd03,	// (0x0002ad9e) bg_button_pane_cp04

0x64b8,	// (0x00024553) cell_dialer_command_2_pane_g1

0xa60f,	// (0x000286aa) bg_button_pane_cp06

0xcd0b,	// (0x0002ada6) dialer_ne_clear_pane_g1

0xaf5f,	// (0x00028ffa) navi_pane_g2

0xaf8d,	// (0x00029028) navi_pane_g3

0x0002,

0xf3e1,	// (0x0002d47c) navi_pane_g

0xb01c,	// (0x000290b7) navi_pane_mv_g2

0xb043,	// (0x000290de) navi_pane_mv_g5

0x495b,	// (0x000229f6) navi_pane_mv_t1

0xa433,	// (0x000284ce) main_clock2_pane

0xd32c,	// (0x0002b3c7) main_clock2_list_pane_ParamLimits

0xd32c,	// (0x0002b3c7) main_clock2_list_pane

0x6514,	// (0x000245af) main_clock2_pane_t1_ParamLimits

0x6514,	// (0x000245af) main_clock2_pane_t1

0x6542,	// (0x000245dd) main_clock2_pane_t2_ParamLimits

0x6542,	// (0x000245dd) main_clock2_pane_t2

0x0004,

0xf7c5,	// (0x0002d860) main_clock2_pane_t_ParamLimits

0xf7c5,	// (0x0002d860) main_clock2_pane_t

0x65a7,	// (0x00024642) popup_clock_analogue_window_cp03_ParamLimits

0x65a7,	// (0x00024642) popup_clock_analogue_window_cp03

0x65c5,	// (0x00024660) popup_clock_digital_window_cp02_ParamLimits

0x65c5,	// (0x00024660) popup_clock_digital_window_cp02

0x663a,	// (0x000246d5) main_clock2_list_single_pane_ParamLimits

0x663a,	// (0x000246d5) main_clock2_list_single_pane

0xa60f,	// (0x000286aa) list_highlight_pane_cp05

0xcd49,	// (0x0002ade4) main_clock2_list_single_pane_t1

0x3500,	// (0x0002159b) popup_toolbar_window_cp04_ParamLimits

0x5b6f,	// (0x00023c0a) camera2_autofocus_pane_g2_ParamLimits

0x5b6f,	// (0x00023c0a) camera2_autofocus_pane_g2

0x5b7b,	// (0x00023c16) camera2_autofocus_pane_g3_ParamLimits

0x5b7b,	// (0x00023c16) camera2_autofocus_pane_g3

0x5b87,	// (0x00023c22) camera2_autofocus_pane_g4_ParamLimits

0x5b87,	// (0x00023c22) camera2_autofocus_pane_g4

0x5b93,	// (0x00023c2e) camera2_autofocus_pane_g5_ParamLimits

0x5b93,	// (0x00023c2e) camera2_autofocus_pane_g5

0x0004,

0xf709,	// (0x0002d7a4) camera2_autofocus_pane_g_ParamLimits

0xf709,	// (0x0002d7a4) camera2_autofocus_pane_g

0xcbd0,	// (0x0002ac6b) camera2_autofocus_pane_cp_g2

0xcbd8,	// (0x0002ac73) camera2_autofocus_pane_cp_g3

0xcbe0,	// (0x0002ac7b) camera2_autofocus_pane_cp_g4

0xcbe8,	// (0x0002ac83) camera2_autofocus_pane_cp_g5

0x0004,

0xf76f,	// (0x0002d80a) camera2_autofocus_pane_cp_g

0x63ce,	// (0x00024469) popup_dialer_spcha_window

0x9cf6,	// (0x00027d91) bg_popup_sub_pane_cp07

0xcd57,	// (0x0002adf2) list_spcha_pane

0xcd5f,	// (0x0002adfa) list_single_spcha_pane_ParamLimits

0xcd5f,	// (0x0002adfa) list_single_spcha_pane

0x9cf6,	// (0x00027d91) list_highlight_pane_cp06

0xcd70,	// (0x0002ae0b) list_single_spcha_pane_t1

0xbf31,	// (0x00029fcc) popup_call2_audio_out_window_g4_ParamLimits

0xbf31,	// (0x00029fcc) popup_call2_audio_out_window_g4

0x107e,	// (0x0001f119) main_imed2_pane

0x1574,	// (0x0001f60f) popup_imed_adjust2_window

0x1587,	// (0x0001f622) popup_imed_trans_window_ParamLimits

0x1587,	// (0x0001f622) popup_imed_trans_window

0xc73a,	// (0x0002a7d5) popup_blid_sat_info2_window_t1

0xc748,	// (0x0002a7e3) popup_blid_sat_info2_window_t2

0x000a,

0xf69e,	// (0x0002d739) popup_blid_sat_info2_window_t

0x664c,	// (0x000246e7) aid_size_cell_colour_35

0x6666,	// (0x00024701) aid_size_cell_colour_112

0x667d,	// (0x00024718) aid_size_cell_effect

0xa4d4,	// (0x0002856f) bg_tb_trans_pane_cp02

0xac56,	// (0x00028cf1) heading_imed_pane

0x6697,	// (0x00024732) listscroll_imed_pane

0xcd7e,	// (0x0002ae19) heading_imed_pane_g1

0xcd86,	// (0x0002ae21) heading_imed_pane_t1

0xcd94,	// (0x0002ae2f) grid_imed_colour_35_pane_ParamLimits

0xcd94,	// (0x0002ae2f) grid_imed_colour_35_pane

0x66a3,	// (0x0002473e) grid_imed_effect_pane

0xcdab,	// (0x0002ae46) list_imed_aspect_pane

0x66b3,	// (0x0002474e) scroll_pane_cp027_ParamLimits

0x66b3,	// (0x0002474e) scroll_pane_cp027

0x66bf,	// (0x0002475a) cell_imed_effect_pane_ParamLimits

0x66bf,	// (0x0002475a) cell_imed_effect_pane

0xcdb3,	// (0x0002ae4e) cell_imed_colour_pane_ParamLimits

0xcdb3,	// (0x0002ae4e) cell_imed_colour_pane

0xcdf5,	// (0x0002ae90) cell_imed_colour_pane_g1_ParamLimits

0xcdf5,	// (0x0002ae90) cell_imed_colour_pane_g1

0xce06,	// (0x0002aea1) hgihlgiht_grid_pane_cp016_ParamLimits

0xce06,	// (0x0002aea1) hgihlgiht_grid_pane_cp016

0x66d7,	// (0x00024772) cell_imed_effect_pane_g1

0x66df,	// (0x0002477a) grid_highlight_pane_cp017

0xce17,	// (0x0002aeb2) list_imed_single_pane_ParamLimits

0xce17,	// (0x0002aeb2) list_imed_single_pane

0x9cf6,	// (0x00027d91) list_highlight_pane_cp07

0xce2c,	// (0x0002aec7) list_imed_aspect_pane_comp1_t1

0xc4f4,	// (0x0002a58f) bg_tb_trans_pane_cp05

0xce4e,	// (0x0002aee9) popup_imed_adjust2_window_g1

0xce75,	// (0x0002af10) popup_imed_adjust2_window_t1

0xce8d,	// (0x0002af28) slider_imed_adjust_pane

0xcea1,	// (0x0002af3c) slider_imed_adjust_pane_g1

0xceb1,	// (0x0002af4c) slider_imed_adjust_pane_g2

0xcec1,	// (0x0002af5c) slider_imed_adjust_pane_g3

0xced2,	// (0x0002af6d) slider_imed_adjust_pane_g4

0x0003,

0xf7e2,	// (0x0002d87d) slider_imed_adjust_pane_g

0x66e8,	// (0x00024783) aid_size_cell_clipart2

0x66f4,	// (0x0002478f) grid_imed_clipart_pane

0xcee3,	// (0x0002af7e) scroll_pane_cp031

0x66fe,	// (0x00024799) cell_imed_clipart_pane_ParamLimits

0x66fe,	// (0x00024799) cell_imed_clipart_pane

0x6720,	// (0x000247bb) cell_imed_clipart_pane_g1

0x9cf6,	// (0x00027d91) grid_highlight_pane_cp014

0x64f6,	// (0x00024591) main_clock2_pane_g1_ParamLimits

0x64f6,	// (0x00024591) main_clock2_pane_g1

0x65e1,	// (0x0002467c) aid_call2_pane_cp10

0x65f3,	// (0x0002468e) aid_call_pane_cp10

0xaec0,	// (0x00028f5b) popup_clock_analogue_window_cp10_g1

0xaec0,	// (0x00028f5b) popup_clock_analogue_window_cp10_g2

0x6605,	// (0x000246a0) popup_clock_analogue_window_cp10_g3

0x6605,	// (0x000246a0) popup_clock_analogue_window_cp10_g4

0xaec0,	// (0x00028f5b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d0,	// (0x0002d86b) popup_clock_analogue_window_cp10_g

0x661b,	// (0x000246b6) popup_clock_analogue_window_cp10_t1

0x1938,	// (0x0001f9d3) clock_digital_number_pane_cp10_ParamLimits

0x1938,	// (0x0001f9d3) clock_digital_number_pane_cp10

0x1952,	// (0x0001f9ed) clock_digital_number_pane_cp11_ParamLimits

0x1952,	// (0x0001f9ed) clock_digital_number_pane_cp11

0x196c,	// (0x0001fa07) clock_digital_number_pane_cp12_ParamLimits

0x196c,	// (0x0001fa07) clock_digital_number_pane_cp12

0x1986,	// (0x0001fa21) clock_digital_number_pane_cp13_ParamLimits

0x1986,	// (0x0001fa21) clock_digital_number_pane_cp13

0x19a0,	// (0x0001fa3b) clock_digital_separator_pane_cp10_ParamLimits

0x19a0,	// (0x0001fa3b) clock_digital_separator_pane_cp10

0x19ba,	// (0x0001fa55) popup_clock_digital_window_cp02_t1_ParamLimits

0x19ba,	// (0x0001fa55) popup_clock_digital_window_cp02_t1

0xa366,	// (0x00028401) clock_digital_number_pane_cp10_g1

0xa366,	// (0x00028401) clock_digital_number_pane_cp10_g2

0x0001,

0xf7eb,	// (0x0002d886) clock_digital_number_pane_cp10_g

0xa366,	// (0x00028401) clock_digital_separator_pane_cp10_g1

0xa366,	// (0x00028401) clock_digital_separator_pane_g2_cp10

0xb04b,	// (0x000290e6) navi_pane_vded_g4

0xb054,	// (0x000290ef) navi_pane_vded_g5

0xb05d,	// (0x000290f8) navi_pane_vded_t1

0x107e,	// (0x0001f119) main_vded_pane

0x6729,	// (0x000247c4) main_vded_pane_g1

0x6735,	// (0x000247d0) main_vded_pane_g2

0x673f,	// (0x000247da) main_vded_pane_g3

0x0002,

0xf7f0,	// (0x0002d88b) main_vded_pane_g

0x6749,	// (0x000247e4) main_vded_pane_t1

0x6757,	// (0x000247f2) main_vded_pane_t2

0x0001,

0xf7f7,	// (0x0002d892) main_vded_pane_t

0x6765,	// (0x00024800) vded_slider_pane

0x676f,	// (0x0002480a) vded_video_pane

0xceeb,	// (0x0002af86) vded_video_pane_g1

0x6779,	// (0x00024814) vded_video_pane_g2

0xc8fc,	// (0x0002a997) vded_video_pane_g3

0x0002,

0xf7fc,	// (0x0002d897) vded_video_pane_g

0xcef5,	// (0x0002af90) vded_slider_pane_g1

0xc64f,	// (0x0002a6ea) vded_slider_pane_g2

0xcefe,	// (0x0002af99) vded_slider_pane_g3

0xcf07,	// (0x0002afa2) vded_slider_pane_g4

0xcf10,	// (0x0002afab) vded_slider_pane_g5

0x0004,

0xf803,	// (0x0002d89e) vded_slider_pane_g

0x62d2,	// (0x0002436d) mup3_rocker_pane_ParamLimits

0x62d2,	// (0x0002436d) mup3_rocker_pane

0x6782,	// (0x0002481d) mup3_control_keys_pane_g1

0x678a,	// (0x00024825) mup3_control_keys_pane_g2

0x6792,	// (0x0002482d) mup3_control_keys_pane_g3

0x679a,	// (0x00024835) mup3_control_keys_pane_g4

0x0003,

0xf80e,	// (0x0002d8a9) mup3_control_keys_pane_g

0x103e,	// (0x0001f0d9) popup_toolbar2_fixed_window_cp01_ParamLimits

0x103e,	// (0x0001f0d9) popup_toolbar2_fixed_window_cp01

0x62ec,	// (0x00024387) popup_toolbar2_fixed_window_cp02_ParamLimits

0x62ec,	// (0x00024387) popup_toolbar2_fixed_window_cp02

0xb870,	// (0x0002990b) popup_call2_audio_second_window_t4_ParamLimits

0xb870,	// (0x0002990b) popup_call2_audio_second_window_t4

0xbd9e,	// (0x00029e39) popup_call2_audio_first_window_t6_ParamLimits

0xbd9e,	// (0x00029e39) popup_call2_audio_first_window_t6

0xc034,	// (0x0002a0cf) popup_call2_audio_out_window_t6_ParamLimits

0xc034,	// (0x0002a0cf) popup_call2_audio_out_window_t6

0x107e,	// (0x0001f119) main_vitu_pane

0x67aa,	// (0x00024845) aid_size_cell_itu_ParamLimits

0x67aa,	// (0x00024845) aid_size_cell_itu

0xd32c,	// (0x0002b3c7) bg_popup_window_pane_cp08_ParamLimits

0xd32c,	// (0x0002b3c7) bg_popup_window_pane_cp08

0x67b8,	// (0x00024853) field_vitu_entry_pane_ParamLimits

0x67b8,	// (0x00024853) field_vitu_entry_pane

0x67c7,	// (0x00024862) grid_vitu_function_pane_ParamLimits

0x67c7,	// (0x00024862) grid_vitu_function_pane

0x67d7,	// (0x00024872) grid_vitu_itu_pane_ParamLimits

0x67d7,	// (0x00024872) grid_vitu_itu_pane

0x67e7,	// (0x00024882) cell_vitu_itu_pane_ParamLimits

0x67e7,	// (0x00024882) cell_vitu_itu_pane

0x67fc,	// (0x00024897) cell_vitu_function_pane_ParamLimits

0x67fc,	// (0x00024897) cell_vitu_function_pane

0xa4d4,	// (0x0002856f) bg_popup_sub_pane_cp08_ParamLimits

0xa4d4,	// (0x0002856f) bg_popup_sub_pane_cp08

0x680e,	// (0x000248a9) field_vitu_entry_pane_t1_ParamLimits

0x680e,	// (0x000248a9) field_vitu_entry_pane_t1

0xcf31,	// (0x0002afcc) field_vitu_entry_pane_t2_ParamLimits

0xcf31,	// (0x0002afcc) field_vitu_entry_pane_t2

0x0001,

0xf81c,	// (0x0002d8b7) field_vitu_entry_pane_t_ParamLimits

0xf81c,	// (0x0002d8b7) field_vitu_entry_pane_t

0xcf4e,	// (0x0002afe9) bg_button_pane_cp05_ParamLimits

0xcf4e,	// (0x0002afe9) bg_button_pane_cp05

0x682a,	// (0x000248c5) cell_vitu_itu_pane_g1

0x6842,	// (0x000248dd) cell_vitu_itu_pane_t1_ParamLimits

0x6842,	// (0x000248dd) cell_vitu_itu_pane_t1

0x6854,	// (0x000248ef) cell_vitu_itu_pane_t2_ParamLimits

0x6854,	// (0x000248ef) cell_vitu_itu_pane_t2

0x0002,

0xf821,	// (0x0002d8bc) cell_vitu_itu_pane_t_ParamLimits

0xf821,	// (0x0002d8bc) cell_vitu_itu_pane_t

0xcf5c,	// (0x0002aff7) bg_button_pane_cp07

0x6889,	// (0x00024924) cell_vitu_function_pane_g1

0x1157,	// (0x0001f1f2) main_calc_pane_g1

0x0e28,	// (0x0001eec3) aid_visual_content_pane

0x107e,	// (0x0001f119) main_vradio_pane

0x6892,	// (0x0002492d) main_vradio_pane_g1_ParamLimits

0x6892,	// (0x0002492d) main_vradio_pane_g1

0xcf66,	// (0x0002b001) main_vradio_pane_g2_ParamLimits

0xcf66,	// (0x0002b001) main_vradio_pane_g2

0x0001,

0xf828,	// (0x0002d8c3) main_vradio_pane_g_ParamLimits

0xf828,	// (0x0002d8c3) main_vradio_pane_g

0x68a2,	// (0x0002493d) main_vradio_pane_t1_ParamLimits

0x68a2,	// (0x0002493d) main_vradio_pane_t1

0x68b4,	// (0x0002494f) main_vradio_pane_t2_ParamLimits

0x68b4,	// (0x0002494f) main_vradio_pane_t2

0xcf73,	// (0x0002b00e) main_vradio_pane_t3_ParamLimits

0xcf73,	// (0x0002b00e) main_vradio_pane_t3

0x0002,

0xf82d,	// (0x0002d8c8) main_vradio_pane_t_ParamLimits

0xf82d,	// (0x0002d8c8) main_vradio_pane_t

0x68c6,	// (0x00024961) vradio_rocker_control_pane_ParamLimits

0x68c6,	// (0x00024961) vradio_rocker_control_pane

0x68d2,	// (0x0002496d) vradio_station_info_pane_ParamLimits

0x68d2,	// (0x0002496d) vradio_station_info_pane

0xcf87,	// (0x0002b022) vradio_frequency_info_pane_ParamLimits

0xcf87,	// (0x0002b022) vradio_frequency_info_pane

0xc8fc,	// (0x0002a997) vradio_station_info_pane_g1

0xcf96,	// (0x0002b031) vradio_station_info_pane_t1_ParamLimits

0xcf96,	// (0x0002b031) vradio_station_info_pane_t1

0xcfb8,	// (0x0002b053) vradio_station_info_pane_t2_ParamLimits

0xcfb8,	// (0x0002b053) vradio_station_info_pane_t2

0x0001,

0xf834,	// (0x0002d8cf) vradio_station_info_pane_t_ParamLimits

0xf834,	// (0x0002d8cf) vradio_station_info_pane_t

0xcfca,	// (0x0002b065) vradio_tuning_pane

0xcfd2,	// (0x0002b06d) vradio_rocker_control_pane_g1

0xcfda,	// (0x0002b075) vradio_rocker_control_pane_g2

0xcfe2,	// (0x0002b07d) vradio_rocker_control_pane_g3

0xcfea,	// (0x0002b085) vradio_rocker_control_pane_g4

0xcff2,	// (0x0002b08d) vradio_rocker_control_pane_g5

0x0004,

0xf839,	// (0x0002d8d4) vradio_rocker_control_pane_g

0x68e1,	// (0x0002497c) vradio_frequency_info_pane_g1

0xcffa,	// (0x0002b095) vradio_frequency_info_pane_t1_ParamLimits

0xcffa,	// (0x0002b095) vradio_frequency_info_pane_t1

0x68eb,	// (0x00024986) vradio_tuning_pane_g1

0x68f4,	// (0x0002498f) vradio_tuning_pane_t1

0x0e44,	// (0x0001eedf) area_side_right_pane_ParamLimits

0x0e44,	// (0x0001eedf) area_side_right_pane

0xc4af,	// (0x0002a54a) status_small_pane_g1

0xc4b7,	// (0x0002a552) status_small_pane_g2

0xc4c0,	// (0x0002a55b) status_small_pane_g3

0xc4c9,	// (0x0002a564) status_small_pane_g4

0x0003,

0xf5f4,	// (0x0002d68f) status_small_pane_g

0xc4d2,	// (0x0002a56d) status_small_pane_t1

0x107e,	// (0x0001f119) main_video3_pane

0xd00e,	// (0x0002b0a9) cams_zoom_vslider_pane

0xd016,	// (0x0002b0b1) image3_wide_pane_ParamLimits

0xd016,	// (0x0002b0b1) image3_wide_pane

0xd030,	// (0x0002b0cb) image3_wide_small_pane

0xd03c,	// (0x0002b0d7) main_video3_pane_g1_ParamLimits

0xd03c,	// (0x0002b0d7) main_video3_pane_g1

0xd058,	// (0x0002b0f3) main_video3_pane_g2_ParamLimits

0xd058,	// (0x0002b0f3) main_video3_pane_g2

0x0001,

0xf844,	// (0x0002d8df) main_video3_pane_g_ParamLimits

0xf844,	// (0x0002d8df) main_video3_pane_g

0xd074,	// (0x0002b10f) main_video3_pane_t1_ParamLimits

0xd074,	// (0x0002b10f) main_video3_pane_t1

0xd09f,	// (0x0002b13a) main_video3_pane_t2_ParamLimits

0xd09f,	// (0x0002b13a) main_video3_pane_t2

0xd0ca,	// (0x0002b165) main_video3_pane_t3_ParamLimits

0xd0ca,	// (0x0002b165) main_video3_pane_t3

0x0002,

0xf849,	// (0x0002d8e4) main_video3_pane_t_ParamLimits

0xf849,	// (0x0002d8e4) main_video3_pane_t

0xd0f7,	// (0x0002b192) cams_zoom_vslider_pane_g1

0xd100,	// (0x0002b19b) cams_zoom_vslider_pane_g2

0x0001,

0xf850,	// (0x0002d8eb) cams_zoom_vslider_pane_g

0xd108,	// (0x0002b1a3) small_slider_vertical_pane

0xc8fc,	// (0x0002a997) small_slider_vertical_pane_g1

0xc8fc,	// (0x0002a997) small_slider_vertical_pane_g2

0xd110,	// (0x0002b1ab) small_slider_vertical_pane_g3

0x0002,

0xf855,	// (0x0002d8f0) small_slider_vertical_pane_g

0x107e,	// (0x0001f119) main_hwr_training_pane

0xd119,	// (0x0002b1b4) hwr_training_instruct_pane_ParamLimits

0xd119,	// (0x0002b1b4) hwr_training_instruct_pane

0x6903,	// (0x0002499e) hwr_training_navi_pane_ParamLimits

0x6903,	// (0x0002499e) hwr_training_navi_pane

0x691d,	// (0x000249b8) hwr_training_write_pane_ParamLimits

0x691d,	// (0x000249b8) hwr_training_write_pane

0x9cf6,	// (0x00027d91) bg_frame_shadow_pane

0xd150,	// (0x0002b1eb) hwr_training_write_pane_g1

0xd158,	// (0x0002b1f3) hwr_training_write_pane_g2

0xd160,	// (0x0002b1fb) hwr_training_write_pane_g3

0xd168,	// (0x0002b203) hwr_training_write_pane_g4

0xd170,	// (0x0002b20b) hwr_training_write_pane_g5

0xd178,	// (0x0002b213) hwr_training_write_pane_g6

0xd180,	// (0x0002b21b) hwr_training_write_pane_g7

0x0006,

0xf85c,	// (0x0002d8f7) hwr_training_write_pane_g

0x19db,	// (0x0001fa76) hwr_training_navi_pane_g1_ParamLimits

0x19db,	// (0x0001fa76) hwr_training_navi_pane_g1

0x19ed,	// (0x0001fa88) hwr_training_navi_pane_g2_ParamLimits

0x19ed,	// (0x0001fa88) hwr_training_navi_pane_g2

0x19ff,	// (0x0001fa9a) hwr_training_navi_pane_g3_ParamLimits

0x19ff,	// (0x0001fa9a) hwr_training_navi_pane_g3

0x1a0f,	// (0x0001faaa) hwr_training_navi_pane_g4_ParamLimits

0x1a0f,	// (0x0001faaa) hwr_training_navi_pane_g4

0x0004,

0xf86b,	// (0x0002d906) hwr_training_navi_pane_g_ParamLimits

0xf86b,	// (0x0002d906) hwr_training_navi_pane_g

0x1a29,	// (0x0001fac4) hwr_training_navi_pane_t1

0x6955,	// (0x000249f0) list_single_hwr_training_instruct_pane_ParamLimits

0x6955,	// (0x000249f0) list_single_hwr_training_instruct_pane

0xd188,	// (0x0002b223) list_single_hwr_training_instruct_pane_t1

0xc83c,	// (0x0002a8d7) bg_frame_shadow_pane_g1

0xd197,	// (0x0002b232) bg_frame_shadow_pane_g2

0xd19f,	// (0x0002b23a) bg_frame_shadow_pane_g3

0xd1a7,	// (0x0002b242) bg_frame_shadow_pane_g4

0xd1af,	// (0x0002b24a) bg_frame_shadow_pane_g5

0xd1b7,	// (0x0002b252) bg_frame_shadow_pane_g6

0xd1bf,	// (0x0002b25a) bg_frame_shadow_pane_g7

0xa503,	// (0x0002859e) bg_frame_shadow_pane_g8

0x0007,

0xf876,	// (0x0002d911) bg_frame_shadow_pane_g

0x107e,	// (0x0001f119) main_video_tele_dialer_pane

0x1a37,	// (0x0001fad2) aid_size_cell_video_keypad_ParamLimits

0x1a37,	// (0x0001fad2) aid_size_cell_video_keypad

0x1a47,	// (0x0001fae2) grid_video_dialer_keypad_pane_ParamLimits

0x1a47,	// (0x0001fae2) grid_video_dialer_keypad_pane

0x1a7b,	// (0x0001fb16) video_down_pane_cp_ParamLimits

0x1a7b,	// (0x0001fb16) video_down_pane_cp

0x1a89,	// (0x0001fb24) cell_video_dialer_keypad_pane_ParamLimits

0x1a89,	// (0x0001fb24) cell_video_dialer_keypad_pane

0xd1c7,	// (0x0002b262) bg_button_pane_cp08_ParamLimits

0xd1c7,	// (0x0002b262) bg_button_pane_cp08

0x6996,	// (0x00024a31) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6996,	// (0x00024a31) cell_video_dialer_keypad_pane_g1

0x62c6,	// (0x00024361) mup3_rocker2_pane_ParamLimits

0x62c6,	// (0x00024361) mup3_rocker2_pane

0xc8fc,	// (0x0002a997) mup3_rocker2_pane_g1

0x14e4,	// (0x0001f57f) main_dialer2_pane

0x107e,	// (0x0001f119) main_mp4_pane

0x1abc,	// (0x0001fb57) main_mp4_pane_g1_ParamLimits

0x1abc,	// (0x0001fb57) main_mp4_pane_g1

0x1aca,	// (0x0001fb65) main_mp4_pane_g2_ParamLimits

0x1aca,	// (0x0001fb65) main_mp4_pane_g2

0x1ad8,	// (0x0001fb73) main_mp4_pane_g3_ParamLimits

0x1ad8,	// (0x0001fb73) main_mp4_pane_g3

0x1b1d,	// (0x0001fbb8) main_mp4_pane_g4_ParamLimits

0x1b1d,	// (0x0001fbb8) main_mp4_pane_g4

0x1b4b,	// (0x0001fbe6) main_mp4_pane_g5_ParamLimits

0x1b4b,	// (0x0001fbe6) main_mp4_pane_g5

0x0007,

0xf896,	// (0x0002d931) main_mp4_pane_g_ParamLimits

0xf896,	// (0x0002d931) main_mp4_pane_g

0x1bbf,	// (0x0001fc5a) main_mp4_pane_t1_ParamLimits

0x1bbf,	// (0x0001fc5a) main_mp4_pane_t1

0x1c1b,	// (0x0001fcb6) main_mp4_pane_t2_ParamLimits

0x1c1b,	// (0x0001fcb6) main_mp4_pane_t2

0xd1d3,	// (0x0002b26e) main_mp4_pane_t3_ParamLimits

0xd1d3,	// (0x0002b26e) main_mp4_pane_t3

0x1c6d,	// (0x0001fd08) main_mp4_pane_t4_ParamLimits

0x1c6d,	// (0x0001fd08) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0002d942) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0002d942) main_mp4_pane_t

0x1cb1,	// (0x0001fd4c) mp4_progress_pane_ParamLimits

0x1cb1,	// (0x0001fd4c) mp4_progress_pane

0x1cfb,	// (0x0001fd96) mp4_rocker_pane_ParamLimits

0x1cfb,	// (0x0001fd96) mp4_rocker_pane

0xd201,	// (0x0002b29c) mp4_progress_pane_t1

0xd21a,	// (0x0002b2b5) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0002d94b) mp4_progress_pane_t

0xd233,	// (0x0002b2ce) mup_progress_pane_cp04

0xd976,	// (0x0002ba11) mp4_rocker_pane_g1

0x1d1b,	// (0x0001fdb6) aid_cell_size_keypad2_ParamLimits

0x1d1b,	// (0x0001fdb6) aid_cell_size_keypad2

0x1d2b,	// (0x0001fdc6) dialer2_ne_pane_ParamLimits

0x1d2b,	// (0x0001fdc6) dialer2_ne_pane

0x1d39,	// (0x0001fdd4) grid_dialer2_keypad_pane_ParamLimits

0x1d39,	// (0x0001fdd4) grid_dialer2_keypad_pane

0xd33a,	// (0x0002b3d5) bg_popup_call_pane_cp07_ParamLimits

0xd33a,	// (0x0002b3d5) bg_popup_call_pane_cp07

0x69cd,	// (0x00024a68) dialer2_ne_pane_t1_ParamLimits

0x69cd,	// (0x00024a68) dialer2_ne_pane_t1

0x1d49,	// (0x0001fde4) cell_dialer2_keypad_pane_ParamLimits

0x1d49,	// (0x0001fde4) cell_dialer2_keypad_pane

0xd258,	// (0x0002b2f3) bg_button_pane_pane_cp04_ParamLimits

0xd258,	// (0x0002b2f3) bg_button_pane_pane_cp04

0x69f2,	// (0x00024a8d) cell_dialer2_keypad_pane_g1_ParamLimits

0x69f2,	// (0x00024a8d) cell_dialer2_keypad_pane_g1

0x33c2,	// (0x0002145d) aid_placing_vt_set_content_ParamLimits

0x33c2,	// (0x0002145d) aid_placing_vt_set_content

0x33ee,	// (0x00021489) aid_placing_vt_set_title_ParamLimits

0x33ee,	// (0x00021489) aid_placing_vt_set_title

0x107e,	// (0x0001f119) main_image3_pane

0x1d90,	// (0x0001fe2b) area_side_right_pane_cp01_ParamLimits

0x1d90,	// (0x0001fe2b) area_side_right_pane_cp01

0x1dbd,	// (0x0001fe58) main_image3_pane_g1_ParamLimits

0x1dbd,	// (0x0001fe58) main_image3_pane_g1

0x1dcb,	// (0x0001fe66) main_image3_pane_g2_ParamLimits

0x1dcb,	// (0x0001fe66) main_image3_pane_g2

0x1de4,	// (0x0001fe7f) main_image3_pane_g3_ParamLimits

0x1de4,	// (0x0001fe7f) main_image3_pane_g3

0x1dfd,	// (0x0001fe98) main_image3_pane_g4_ParamLimits

0x1dfd,	// (0x0001fe98) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0002d95a) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0002d95a) main_image3_pane_g

0x1e16,	// (0x0001feb1) main_image3_pane_t1_ParamLimits

0x1e16,	// (0x0001feb1) main_image3_pane_t1

0x1e3b,	// (0x0001fed6) main_image3_pane_t2_ParamLimits

0x1e3b,	// (0x0001fed6) main_image3_pane_t2

0x1e5a,	// (0x0001fef5) main_image3_pane_t3_ParamLimits

0x1e5a,	// (0x0001fef5) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0002d963) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0002d963) main_image3_pane_t

0xd32c,	// (0x0002b3c7) grid_sctrl_middle_pane_cp01_ParamLimits

0xd32c,	// (0x0002b3c7) grid_sctrl_middle_pane_cp01

0x6a5a,	// (0x00024af5) cell_sctrl_middle_pane_cp01_ParamLimits

0x6a5a,	// (0x00024af5) cell_sctrl_middle_pane_cp01

0x6a6b,	// (0x00024b06) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6a6b,	// (0x00024b06) cell_sctrl_middle_pane_cp01_g1

0x107e,	// (0x0001f119) main_call4_pane

0x1ebb,	// (0x0001ff56) aid_size_button_call4_ParamLimits

0x1ebb,	// (0x0001ff56) aid_size_button_call4

0x1ef1,	// (0x0001ff8c) call4_windows_pane_ParamLimits

0x1ef1,	// (0x0001ff8c) call4_windows_pane

0x1f06,	// (0x0001ffa1) grid_call4_button_pane_ParamLimits

0x1f06,	// (0x0001ffa1) grid_call4_button_pane

0x6a84,	// (0x00024b1f) call4_windows_conf_pane

0x6a9b,	// (0x00024b36) popup_call4_audio_first_window_ParamLimits

0x6a9b,	// (0x00024b36) popup_call4_audio_first_window

0x6aeb,	// (0x00024b86) popup_call4_audio_second_window_ParamLimits

0x6aeb,	// (0x00024b86) popup_call4_audio_second_window

0x6b04,	// (0x00024b9f) popup_call4_audio_wait_window_ParamLimits

0x6b04,	// (0x00024b9f) popup_call4_audio_wait_window

0x1f28,	// (0x0001ffc3) cell_call4_button_pane_ParamLimits

0x1f28,	// (0x0001ffc3) cell_call4_button_pane

0x6b12,	// (0x00024bad) bg_button_pane_cp09_ParamLimits

0x6b12,	// (0x00024bad) bg_button_pane_cp09

0x1f4b,	// (0x0001ffe6) cell_call4_button_pane_g1_ParamLimits

0x1f4b,	// (0x0001ffe6) cell_call4_button_pane_g1

0x6b1e,	// (0x00024bb9) cell_call4_button_pane_t1_ParamLimits

0x6b1e,	// (0x00024bb9) cell_call4_button_pane_t1

0xd26c,	// (0x0002b307) popup_call4_audio_conf_window_ParamLimits

0xd26c,	// (0x0002b307) popup_call4_audio_conf_window

0x62f9,	// (0x00024394) mup3_progress_pane_t1_ParamLimits

0x6318,	// (0x000243b3) mup3_progress_pane_t2_ParamLimits

0xcc06,	// (0x0002aca1) mup3_progress_pane_t3_ParamLimits

0xf798,	// (0x0002d833) mup3_progress_pane_t_ParamLimits

0xcc23,	// (0x0002acbe) mup_progress_pane_cp03_ParamLimits

0x67a2,	// (0x0002483d) mup3_control_keys_pane_g4_copy1

0x1cdf,	// (0x0001fd7a) mp4_rocker2_pane_ParamLimits

0x1cdf,	// (0x0001fd7a) mp4_rocker2_pane

0xd280,	// (0x0002b31b) mp4_rocker2_pane_g1

0xd288,	// (0x0002b323) mp4_rocker2_pane_g2

0x1f8a,	// (0x00020025) mp4_rocker2_pane_g3

0x1f92,	// (0x0002002d) mp4_rocker2_pane_g4

0x1f9a,	// (0x00020035) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0002d96c) mp4_rocker2_pane_g

0x107e,	// (0x0001f119) main_camera4_pane

0x107e,	// (0x0001f119) main_video4_pane

0x1a57,	// (0x0001faf2) main_video_tele_dialer_pane_t1_ParamLimits

0x1a57,	// (0x0001faf2) main_video_tele_dialer_pane_t1

0x1a69,	// (0x0001fb04) main_video_tele_dialer_pane_t2_ParamLimits

0x1a69,	// (0x0001fb04) main_video_tele_dialer_pane_t2

0x0001,

0xf887,	// (0x0002d922) main_video_tele_dialer_pane_t_ParamLimits

0xf887,	// (0x0002d922) main_video_tele_dialer_pane_t

0x1fba,	// (0x00020055) cam4_autofocus_pane_ParamLimits

0x1fba,	// (0x00020055) cam4_autofocus_pane

0x1fd4,	// (0x0002006f) cam4_image_uncrop_pane_ParamLimits

0x1fd4,	// (0x0002006f) cam4_image_uncrop_pane

0x1feb,	// (0x00020086) cam4_indicators_pane_ParamLimits

0x1feb,	// (0x00020086) cam4_indicators_pane

0x2007,	// (0x000200a2) main_camera4_pane_g1_ParamLimits

0x2007,	// (0x000200a2) main_camera4_pane_g1

0x2013,	// (0x000200ae) main_camera4_pane_g2_ParamLimits

0x2013,	// (0x000200ae) main_camera4_pane_g2

0x2013,	// (0x000200ae) main_camera4_pane_g3_ParamLimits

0x2013,	// (0x000200ae) main_camera4_pane_g3

0x201f,	// (0x000200ba) main_camera4_pane_g4_ParamLimits

0x201f,	// (0x000200ba) main_camera4_pane_g4

0x202b,	// (0x000200c6) main_camera4_pane_g5_ParamLimits

0x202b,	// (0x000200c6) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0002d977) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0002d977) main_camera4_pane_g

0x2045,	// (0x000200e0) main_camera4_pane_t1_ParamLimits

0x2045,	// (0x000200e0) main_camera4_pane_t1

0x2069,	// (0x00020104) bg_tb_trans_pane_cp06

0x207f,	// (0x0002011a) cam4_indicators_pane_g1

0x2090,	// (0x0002012b) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0002d992) cam4_indicators_pane_g

0x20ae,	// (0x00020149) cam4_indicators_pane_t1

0x20d8,	// (0x00020173) main_video4_pane_g1_ParamLimits

0x20d8,	// (0x00020173) main_video4_pane_g1

0x20e4,	// (0x0002017f) main_video4_pane_g2_ParamLimits

0x20e4,	// (0x0002017f) main_video4_pane_g2

0x20f0,	// (0x0002018b) main_video4_pane_g3_ParamLimits

0x20f0,	// (0x0002018b) main_video4_pane_g3

0x20fc,	// (0x00020197) main_video4_pane_g4_ParamLimits

0x20fc,	// (0x00020197) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0002d999) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0002d999) main_video4_pane_g

0x211c,	// (0x000201b7) vid4_indicators_pane_ParamLimits

0x211c,	// (0x000201b7) vid4_indicators_pane

0x213b,	// (0x000201d6) video4_image_uncrop_cif_pane_ParamLimits

0x213b,	// (0x000201d6) video4_image_uncrop_cif_pane

0x214a,	// (0x000201e5) video4_image_uncrop_nhd_pane_ParamLimits

0x214a,	// (0x000201e5) video4_image_uncrop_nhd_pane

0x1fd4,	// (0x0002006f) video4_image_uncrop_vga_pane_ParamLimits

0x1fd4,	// (0x0002006f) video4_image_uncrop_vga_pane

0x14d6,	// (0x0001f571) bg_tb_trans_pane_cp07

0x2161,	// (0x000201fc) vid4_indicators_pane_g1

0x2175,	// (0x00020210) vid4_indicators_pane_g2

0x2189,	// (0x00020224) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0002d9a4) vid4_indicators_pane_g

0x21b8,	// (0x00020253) vid4_indicators_pane_t1

0x6b54,	// (0x00024bef) cam4_autofocus_pane_g1

0x6b5c,	// (0x00024bf7) cam4_autofocus_pane_g2

0x6b64,	// (0x00024bff) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0002d9af) cam4_autofocus_pane_g

0x6b6c,	// (0x00024c07) cam4_autofocus_pane_g3_copy1

0x697a,	// (0x00024a15) video_down_pane_cp_t1

0x6988,	// (0x00024a23) video_down_pane_cp_t2

0x0001,

0xf88c,	// (0x0002d927) video_down_pane_cp_t

0x1070,	// (0x0001f10b) popup_vitu2_window_ParamLimits

0x1070,	// (0x0001f10b) popup_vitu2_window

0x21cf,	// (0x0002026a) aid_size_cell2_itu2_ParamLimits

0x21cf,	// (0x0002026a) aid_size_cell2_itu2

0x21f1,	// (0x0002028c) aid_size_cell_itu2_ParamLimits

0x21f1,	// (0x0002028c) aid_size_cell_itu2

0x2235,	// (0x000202d0) bg_popup_window_pane_cp09_ParamLimits

0x2235,	// (0x000202d0) bg_popup_window_pane_cp09

0x2243,	// (0x000202de) field_vitu2_entry_pane_ParamLimits

0x2243,	// (0x000202de) field_vitu2_entry_pane

0x2263,	// (0x000202fe) grid_vitu2_function_pane_ParamLimits

0x2263,	// (0x000202fe) grid_vitu2_function_pane

0x22a7,	// (0x00020342) grid_vitu2_itu_pane_ParamLimits

0x22a7,	// (0x00020342) grid_vitu2_itu_pane

0x2323,	// (0x000203be) cell_vitu2_itu_pane_ParamLimits

0x2323,	// (0x000203be) cell_vitu2_itu_pane

0x233c,	// (0x000203d7) cell_vitu2_function_pane_ParamLimits

0x233c,	// (0x000203d7) cell_vitu2_function_pane

0xd290,	// (0x0002b32b) bg_popup_call_pane_cp08_ParamLimits

0xd290,	// (0x0002b32b) bg_popup_call_pane_cp08

0xd2a7,	// (0x0002b342) field_vitu2_entry_pane_g1

0xd2b3,	// (0x0002b34e) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0002d9b6) field_vitu2_entry_pane_g

0x6b74,	// (0x00024c0f) field_vitu2_entry_pane_t1_ParamLimits

0x6b74,	// (0x00024c0f) field_vitu2_entry_pane_t1

0xd2cd,	// (0x0002b368) field_vitu2_entry_pane_t2_ParamLimits

0xd2cd,	// (0x0002b368) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0002d9bd) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0002d9bd) field_vitu2_entry_pane_t

0x237d,	// (0x00020418) bg_button_pane_cp010_ParamLimits

0x237d,	// (0x00020418) bg_button_pane_cp010

0x238b,	// (0x00020426) cell_vitu2_itu_pane_g1

0x23ab,	// (0x00020446) cell_vitu2_itu_pane_t1_ParamLimits

0x23ab,	// (0x00020446) cell_vitu2_itu_pane_t1

0x23f7,	// (0x00020492) cell_vitu2_itu_pane_t2_ParamLimits

0x23f7,	// (0x00020492) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0002d9c7) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0002d9c7) cell_vitu2_itu_pane_t

0x14d6,	// (0x0001f571) bg_button_pane_cp011

0x24bf,	// (0x0002055a) cell_vitu2_function_pane_g1

0x107e,	// (0x0001f119) main_myfav_hc_pane

0x1e9c,	// (0x0001ff37) popup_image3_note_pane_ParamLimits

0x1e9c,	// (0x0001ff37) popup_image3_note_pane

0x1eaa,	// (0x0001ff45) popup_image3_tool_bar_pane_ParamLimits

0x1eaa,	// (0x0001ff45) popup_image3_tool_bar_pane

0x246d,	// (0x00020508) cell_vitu2_itu_pane_t3_ParamLimits

0x246d,	// (0x00020508) cell_vitu2_itu_pane_t3

0x9cf6,	// (0x00027d91) bg_popup_trans_pane

0xd2f2,	// (0x0002b38d) grid_image3_tool_bar_pane

0xd2fc,	// (0x0002b397) bg_popup_trans_pane_g1

0xa868,	// (0x00028903) bg_popup_trans_pane_g2

0xd304,	// (0x0002b39f) bg_popup_trans_pane_g3

0xd30c,	// (0x0002b3a7) bg_popup_trans_pane_g4

0xd314,	// (0x0002b3af) bg_popup_trans_pane_g5

0xd31c,	// (0x0002b3b7) bg_popup_trans_pane_g6

0xd324,	// (0x0002b3bf) bg_popup_trans_pane_g7

0xd348,	// (0x0002b3e3) bg_popup_trans_pane_g8

0xa848,	// (0x000288e3) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0002d9ce) bg_popup_trans_pane_g

0xd350,	// (0x0002b3eb) cell_image3_tool_bar_pane_ParamLimits

0xd350,	// (0x0002b3eb) cell_image3_tool_bar_pane

0xc8fc,	// (0x0002a997) cell_image3_tool_bar_pane_g1

0x9cf6,	// (0x00027d91) bg_popup_trans_pane_cp1

0xd364,	// (0x0002b3ff) popup_image3_note_pane_t1

0xd372,	// (0x0002b40d) popup_image3_note_pane_t2

0xd380,	// (0x0002b41b) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0002d9e1) popup_image3_note_pane_t

0xd38e,	// (0x0002b429) popup_image3_note_pane_t3_copy1

0x6ba4,	// (0x00024c3f) bg_myfav_hc_instruction_pane_ParamLimits

0x6ba4,	// (0x00024c3f) bg_myfav_hc_instruction_pane

0x6bbc,	// (0x00024c57) cell_myfav_contact_pane_ParamLimits

0x6bbc,	// (0x00024c57) cell_myfav_contact_pane

0x6bd6,	// (0x00024c71) cell_myfav_contact_pane_cp1_ParamLimits

0x6bd6,	// (0x00024c71) cell_myfav_contact_pane_cp1

0x6bee,	// (0x00024c89) cell_myfav_contact_pane_cp2_ParamLimits

0x6bee,	// (0x00024c89) cell_myfav_contact_pane_cp2

0x6c06,	// (0x00024ca1) cell_myfav_contact_pane_cp3_ParamLimits

0x6c06,	// (0x00024ca1) cell_myfav_contact_pane_cp3

0x6c1d,	// (0x00024cb8) cell_myfav_contact_pane_cp4_ParamLimits

0x6c1d,	// (0x00024cb8) cell_myfav_contact_pane_cp4

0x6c33,	// (0x00024cce) cell_myfav_contact_pane_cp5_ParamLimits

0x6c33,	// (0x00024cce) cell_myfav_contact_pane_cp5

0x6c47,	// (0x00024ce2) cell_myfav_contact_pane_cp6_ParamLimits

0x6c47,	// (0x00024ce2) cell_myfav_contact_pane_cp6

0x6c5b,	// (0x00024cf6) cell_myfav_contact_pane_cp7_ParamLimits

0x6c5b,	// (0x00024cf6) cell_myfav_contact_pane_cp7

0xd39c,	// (0x0002b437) listscroll_gen_pane_cp05

0x6c73,	// (0x00024d0e) main_myfav_hc_pane_g1_ParamLimits

0x6c73,	// (0x00024d0e) main_myfav_hc_pane_g1

0x6c89,	// (0x00024d24) main_myfav_hc_pane_g2_ParamLimits

0x6c89,	// (0x00024d24) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0002d9e8) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0002d9e8) main_myfav_hc_pane_g

0x6cb7,	// (0x00024d52) main_myfav_hc_pane_t1_ParamLimits

0x6cb7,	// (0x00024d52) main_myfav_hc_pane_t1

0xd3a5,	// (0x0002b440) main_myfav_hc_pane_t2_ParamLimits

0xd3a5,	// (0x0002b440) main_myfav_hc_pane_t2

0xd3b7,	// (0x0002b452) main_myfav_hc_pane_t3_ParamLimits

0xd3b7,	// (0x0002b452) main_myfav_hc_pane_t3

0x6cce,	// (0x00024d69) main_myfav_hc_pane_t4_ParamLimits

0x6cce,	// (0x00024d69) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0002d9ef) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0002d9ef) main_myfav_hc_pane_t

0xc8fc,	// (0x0002a997) bg_myfav_hc_instruction_pane_g1

0xd3c9,	// (0x0002b464) cell_myfav_contact_pane_g1_ParamLimits

0xd3c9,	// (0x0002b464) cell_myfav_contact_pane_g1

0xd3c9,	// (0x0002b464) cell_myfav_contact_pane_g2_ParamLimits

0xd3c9,	// (0x0002b464) cell_myfav_contact_pane_g2

0xd3d5,	// (0x0002b470) cell_myfav_contact_pane_g3_ParamLimits

0xd3d5,	// (0x0002b470) cell_myfav_contact_pane_g3

0xcbf0,	// (0x0002ac8b) cell_myfav_contact_pane_g4_ParamLimits

0xcbf0,	// (0x0002ac8b) cell_myfav_contact_pane_g4

0xd3e2,	// (0x0002b47d) cell_myfav_contact_pane_g5_ParamLimits

0xd3e2,	// (0x0002b47d) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0002d9fa) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0002d9fa) cell_myfav_contact_pane_g

0x6c9f,	// (0x00024d3a) main_myfav_hc_pane_g3_ParamLimits

0x6c9f,	// (0x00024d3a) main_myfav_hc_pane_g3

0x0f79,	// (0x0001f014) popup_adpt_find_window

0x6cf8,	// (0x00024d93) afind_page_pane_ParamLimits

0x6cf8,	// (0x00024d93) afind_page_pane

0x6d05,	// (0x00024da0) aid_size_cell_afind_ParamLimits

0x6d05,	// (0x00024da0) aid_size_cell_afind

0x6d1f,	// (0x00024dba) bg_popup_sub_pane_cp09_ParamLimits

0x6d1f,	// (0x00024dba) bg_popup_sub_pane_cp09

0x6d2c,	// (0x00024dc7) find_pane_cp01_ParamLimits

0x6d2c,	// (0x00024dc7) find_pane_cp01

0xd3ee,	// (0x0002b489) grid_afind_control_pane_ParamLimits

0xd3ee,	// (0x0002b489) grid_afind_control_pane

0x6d39,	// (0x00024dd4) grid_afind_pane_ParamLimits

0x6d39,	// (0x00024dd4) grid_afind_pane

0x6d55,	// (0x00024df0) cell_afind_pane_ParamLimits

0x6d55,	// (0x00024df0) cell_afind_pane

0xc8fc,	// (0x0002a997) afind_page_pane_g1

0x6d9d,	// (0x00024e38) afind_page_pane_g2

0x6da6,	// (0x00024e41) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0002da05) afind_page_pane_g

0x6daf,	// (0x00024e4a) afind_page_pane_t1

0xd402,	// (0x0002b49d) cell_afind_grid_control_pane_ParamLimits

0xd402,	// (0x0002b49d) cell_afind_grid_control_pane

0xd258,	// (0x0002b2f3) bg_button_pane_cp69_ParamLimits

0xd258,	// (0x0002b2f3) bg_button_pane_cp69

0x6dcf,	// (0x00024e6a) cell_afind_pane_g1_ParamLimits

0x6dcf,	// (0x00024e6a) cell_afind_pane_g1

0x6ddc,	// (0x00024e77) cell_afind_pane_t1_ParamLimits

0x6ddc,	// (0x00024e77) cell_afind_pane_t1

0xa661,	// (0x000286fc) bg_button_pane_cp72

0xd411,	// (0x0002b4ac) cell_afind_grid_control_pane_g1

0x516c,	// (0x00023207) aid_image_placing_area_ParamLimits

0x516c,	// (0x00023207) aid_image_placing_area

0xcf19,	// (0x0002afb4) field_vitu_entry_pane_g1_ParamLimits

0xcf19,	// (0x0002afb4) field_vitu_entry_pane_g1

0xcf25,	// (0x0002afc0) field_vitu_entry_pane_g2_ParamLimits

0xcf25,	// (0x0002afc0) field_vitu_entry_pane_g2

0x0001,

0xf817,	// (0x0002d8b2) field_vitu_entry_pane_g_ParamLimits

0xf817,	// (0x0002d8b2) field_vitu_entry_pane_g

0x682a,	// (0x000248c5) cell_vitu_itu_pane_g1_ParamLimits

0x686c,	// (0x00024907) cell_vitu_itu_pane_t3_ParamLimits

0x686c,	// (0x00024907) cell_vitu_itu_pane_t3

0xd201,	// (0x0002b29c) mp4_progress_pane_t1_ParamLimits

0xd21a,	// (0x0002b2b5) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0002d94b) mp4_progress_pane_t_ParamLimits

0xd233,	// (0x0002b2ce) mup_progress_pane_cp04_ParamLimits

0x6ce2,	// (0x00024d7d) main_myfav_hc_pane_t5_ParamLimits

0x6ce2,	// (0x00024d7d) main_myfav_hc_pane_t5

0x0e3c,	// (0x0001eed7) aid_zoom_text_primary

0x0f79,	// (0x0001f014) popup_adpt_find_window_ParamLimits

0x14d6,	// (0x0001f571) main_cam_set_pane

0x1ff9,	// (0x00020094) cam4_zoom_pane_ParamLimits

0x1ff9,	// (0x00020094) cam4_zoom_pane

0x6dee,	// (0x00024e89) main_cam_set_pane_g1_ParamLimits

0x6dee,	// (0x00024e89) main_cam_set_pane_g1

0x6dfc,	// (0x00024e97) main_cam_set_pane_g2_ParamLimits

0x6dfc,	// (0x00024e97) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0002da0c) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0002da0c) main_cam_set_pane_g

0x6e08,	// (0x00024ea3) main_cam_set_pane_t1_ParamLimits

0x6e08,	// (0x00024ea3) main_cam_set_pane_t1

0x6e24,	// (0x00024ebf) main_cset_listscroll_pane_ParamLimits

0x6e24,	// (0x00024ebf) main_cset_listscroll_pane

0x6e4f,	// (0x00024eea) main_cset_slider_pane_ParamLimits

0x6e4f,	// (0x00024eea) main_cset_slider_pane

0xd422,	// (0x0002b4bd) main_cset_list_pane_ParamLimits

0xd422,	// (0x0002b4bd) main_cset_list_pane

0xd432,	// (0x0002b4cd) scroll_pane_cp028

0x6e6e,	// (0x00024f09) aid_area_touch_slider

0x6e8a,	// (0x00024f25) cset_slider_pane

0x6eb4,	// (0x00024f4f) main_cset_slider_pane_g1

0x6ec9,	// (0x00024f64) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0002da11) main_cset_slider_pane_g

0xd46b,	// (0x0002b506) main_cset_slider_pane_t1

0x6f8b,	// (0x00025026) main_cset_slider_pane_t2

0x6fa5,	// (0x00025040) main_cset_slider_pane_t3

0x6fbf,	// (0x0002505a) main_cset_slider_pane_t4

0x6fd9,	// (0x00025074) main_cset_slider_pane_t5

0x6ff7,	// (0x00025092) main_cset_slider_pane_t6

0x700e,	// (0x000250a9) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0002da36) main_cset_slider_pane_t

0x711a,	// (0x000251b5) cset_list_set_pane_ParamLimits

0x711a,	// (0x000251b5) cset_list_set_pane

0x7130,	// (0x000251cb) aid_position_infowindow_above

0x7138,	// (0x000251d3) aid_position_infowindow_below

0xd517,	// (0x0002b5b2) cset_list_set_pane_g1_ParamLimits

0xd517,	// (0x0002b5b2) cset_list_set_pane_g1

0xd523,	// (0x0002b5be) cset_list_set_pane_g3_ParamLimits

0xd523,	// (0x0002b5be) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0002da55) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0002da55) cset_list_set_pane_g

0xd532,	// (0x0002b5cd) cset_list_set_pane_t1_ParamLimits

0xd532,	// (0x0002b5cd) cset_list_set_pane_t1

0xa4d4,	// (0x0002856f) list_highlight_pane_cp021_ParamLimits

0xa4d4,	// (0x0002856f) list_highlight_pane_cp021

0xb1b1,	// (0x0002924c) cset_slider_pane_g1

0xb1c3,	// (0x0002925e) cset_slider_pane_g2

0xb1ba,	// (0x00029255) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0002da5a) cset_slider_pane_g

0x24d3,	// (0x0002056e) aid_area_touch_cam4_zoom

0x24db,	// (0x00020576) cam4_zoom_cont_pane

0x24e3,	// (0x0002057e) cam4_zoom_pane_g1

0x24eb,	// (0x00020586) cam4_zoom_pane_g2

0x24f3,	// (0x0002058e) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0002da61) cam4_zoom_pane_g

0x24fb,	// (0x00020596) cam4_zoom_cont_pane_g1

0x2504,	// (0x0002059f) cam4_zoom_cont_pane_g2

0x250d,	// (0x000205a8) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0002da68) cam4_zoom_cont_pane_g

0x1ed5,	// (0x0001ff70) call4_image_pane_ParamLimits

0x1ed5,	// (0x0001ff70) call4_image_pane

0x6a84,	// (0x00024b1f) call4_windows_conf_pane_ParamLimits

0x6ac9,	// (0x00024b64) popup_call4_audio_in_window_ParamLimits

0x6ac9,	// (0x00024b64) popup_call4_audio_in_window

0x9cf6,	// (0x00027d91) bg_popup_call2_act_pane_cp02

0xd264,	// (0x0002b2ff) call4_list_conf_pane

0xc8fc,	// (0x0002a997) call4_image_pane_g1

0xc8fc,	// (0x0002a997) call4_image_pane_g2

0x0001,

0xf6d8,	// (0x0002d773) call4_image_pane_g

0xd547,	// (0x0002b5e2) list_single_graphic_popup_conf4_pane_ParamLimits

0xd547,	// (0x0002b5e2) list_single_graphic_popup_conf4_pane

0x9cf6,	// (0x00027d91) list_highlight_pane_cp022

0xd55a,	// (0x0002b5f5) list_single_graphic_popup_conf4_pane_g1

0xad90,	// (0x00028e2b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0002da6f) list_single_graphic_popup_conf4_pane_g

0xd562,	// (0x0002b5fd) list_single_graphic_popup_conf4_pane_t1

0x3552,	// (0x000215ed) popup_vtel_slider_window_ParamLimits

0x3552,	// (0x000215ed) popup_vtel_slider_window

0xd246,	// (0x0002b2e1) dialer2_ne_pane_t2_ParamLimits

0xd246,	// (0x0002b2e1) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0002d950) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0002d950) dialer2_ne_pane_t

0xa4d4,	// (0x0002856f) bg_popup_sub_pane_cp010_ParamLimits

0xa4d4,	// (0x0002856f) bg_popup_sub_pane_cp010

0x7140,	// (0x000251db) popup_vtel_slider_window_g1_ParamLimits

0x7140,	// (0x000251db) popup_vtel_slider_window_g1

0x714c,	// (0x000251e7) popup_vtel_slider_window_g2_ParamLimits

0x714c,	// (0x000251e7) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0002da74) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0002da74) popup_vtel_slider_window_g

0x7194,	// (0x0002522f) vtel_slider_pane_ParamLimits

0x7194,	// (0x0002522f) vtel_slider_pane

0x71a3,	// (0x0002523e) vtel_slider_pane_g1_ParamLimits

0x71a3,	// (0x0002523e) vtel_slider_pane_g1

0x71b0,	// (0x0002524b) vtel_slider_pane_g2_ParamLimits

0x71b0,	// (0x0002524b) vtel_slider_pane_g2

0x71bd,	// (0x00025258) vtel_slider_pane_g3_ParamLimits

0x71bd,	// (0x00025258) vtel_slider_pane_g3

0x71a3,	// (0x0002523e) vtel_slider_pane_g4_ParamLimits

0x71a3,	// (0x0002523e) vtel_slider_pane_g4

0x71ca,	// (0x00025265) vtel_slider_pane_g5_ParamLimits

0x71ca,	// (0x00025265) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0002da7d) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0002da7d) vtel_slider_pane_g

0x14d6,	// (0x0001f571) main_gallery2_pane

0x2217,	// (0x000202b2) aid_size_row_itut2_dropdow_list_ParamLimits

0x2217,	// (0x000202b2) aid_size_row_itut2_dropdow_list

0x2285,	// (0x00020320) grid_vitu2_function_top_pane_ParamLimits

0x2285,	// (0x00020320) grid_vitu2_function_top_pane

0x22df,	// (0x0002037a) popup_vitu2_dropdown_list_window_ParamLimits

0x22df,	// (0x0002037a) popup_vitu2_dropdown_list_window

0x22ff,	// (0x0002039a) popup_vitu2_match_list_window

0x2516,	// (0x000205b1) cell_vitu2_function_top_pane_ParamLimits

0x2516,	// (0x000205b1) cell_vitu2_function_top_pane

0x2530,	// (0x000205cb) cell_vitu2_function_top_pane_cp01_ParamLimits

0x2530,	// (0x000205cb) cell_vitu2_function_top_pane_cp01

0x254c,	// (0x000205e7) cell_vitu2_function_top_wide_pane_ParamLimits

0x254c,	// (0x000205e7) cell_vitu2_function_top_wide_pane

0x14d6,	// (0x0001f571) bg_button_pane_cp012

0x2568,	// (0x00020603) cell_vitu2_function_top_pane_g1

0x257c,	// (0x00020617) bg_button_pane_cp013_ParamLimits

0x257c,	// (0x00020617) bg_button_pane_cp013

0x71e5,	// (0x00025280) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x71e5,	// (0x00025280) cell_vitu2_function_top_wide_pane_g1

0x1070,	// (0x0001f10b) bg_popup_sub_pane_cp20

0x2598,	// (0x00020633) list_vitu2_match_list_pane

0xd2fc,	// (0x0002b397) bg_popup_sub_pane_cp20_g1

0xd304,	// (0x0002b39f) bg_popup_sub_pane_cp20_g2

0xa868,	// (0x00028903) bg_popup_sub_pane_cp20_g3

0xd30c,	// (0x0002b3a7) bg_popup_sub_pane_cp20_g4

0xa848,	// (0x000288e3) bg_popup_sub_pane_cp20_g5

0xd578,	// (0x0002b613) bg_popup_sub_pane_cp20_g6

0xd31c,	// (0x0002b3b7) bg_popup_sub_pane_cp20_g7

0xd324,	// (0x0002b3bf) bg_popup_sub_pane_cp20_g8

0xd348,	// (0x0002b3e3) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0002da88) bg_popup_sub_pane_cp20_g

0x25b0,	// (0x0002064b) list_vitu2_match_list_item_pane_ParamLimits

0x25b0,	// (0x0002064b) list_vitu2_match_list_item_pane

0x25c2,	// (0x0002065d) list_vitu2_match_list_item_pane_t1

0x107e,	// (0x0001f119) bg_popup_sub_pane_cp21

0x25d0,	// (0x0002066b) grid_vitu2_dropdown_list_pane

0x25d8,	// (0x00020673) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x25d8,	// (0x00020673) cell_vitu2_dropdown_list_char_pane

0x25f9,	// (0x00020694) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x25f9,	// (0x00020694) cell_vitu2_dropdown_list_ctrl_pane

0xd580,	// (0x0002b61b) cell_vitu2_dropdown_list_char_pane_g1

0xd589,	// (0x0002b624) cell_vitu2_dropdown_list_char_pane_g2

0xd592,	// (0x0002b62d) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0002daa5) cell_vitu2_dropdown_list_char_pane_g

0x2625,	// (0x000206c0) cell_vitu2_dropdown_list_char_pane_t1

0x7245,	// (0x000252e0) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7245,	// (0x000252e0) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7255,	// (0x000252f0) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7255,	// (0x000252f0) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7266,	// (0x00025301) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7266,	// (0x00025301) cell_vitu2_dropdown_list_ctrl_pane_g3

0x2633,	// (0x000206ce) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x2633,	// (0x000206ce) cell_vitu2_dropdown_list_ctrl_pane_g4

0x2069,	// (0x00020104) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x2069,	// (0x00020104) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0002daac) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0002daac) cell_vitu2_dropdown_list_ctrl_pane_g

0x7276,	// (0x00025311) aid_size_cell_gallery2_ParamLimits

0x7276,	// (0x00025311) aid_size_cell_gallery2

0x7290,	// (0x0002532b) grid_gallery2_pane_ParamLimits

0x7290,	// (0x0002532b) grid_gallery2_pane

0x72a7,	// (0x00025342) scroll_pane_cp029_ParamLimits

0x72a7,	// (0x00025342) scroll_pane_cp029

0x72b7,	// (0x00025352) cell_gallery2_pane_ParamLimits

0x72b7,	// (0x00025352) cell_gallery2_pane

0xd59b,	// (0x0002b636) cell_gallery2_pane_g2

0xe9f8,	// (0x0002ca93) cell_gallery2_pane_g3

0xd5a3,	// (0x0002b63e) cell_gallery2_pane_g4

0xd5ab,	// (0x0002b646) cell_gallery2_pane_g5

0xa60f,	// (0x000286aa) grid_highlight_pane_cp10

0x22ff,	// (0x0002039a) popup_vitu2_match_list_window_ParamLimits

0x2313,	// (0x000203ae) popup_vitu2_query_window_ParamLimits

0x2313,	// (0x000203ae) popup_vitu2_query_window

0x107e,	// (0x0001f119) bg_vitu2_candi_button_pane

0xd580,	// (0x0002b61b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd589,	// (0x0002b624) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd592,	// (0x0002b62d) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x730c,	// (0x000253a7) bg_button_pane_cp015

0x731e,	// (0x000253b9) bg_button_pane_cp016

0x7331,	// (0x000253cc) bg_button_pane_cp017

0xc4f4,	// (0x0002a58f) bg_popup_sub_pane_cp22

0xd5b3,	// (0x0002b64e) popup_vitu2_query_window_g1

0x7376,	// (0x00025411) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0002dab7) popup_vitu2_query_window_g

0x7393,	// (0x0002542e) popup_vitu2_query_window_t1_ParamLimits

0x7393,	// (0x0002542e) popup_vitu2_query_window_t1

0x73c6,	// (0x00025461) popup_vitu2_query_window_t2_ParamLimits

0x73c6,	// (0x00025461) popup_vitu2_query_window_t2

0x73d8,	// (0x00025473) popup_vitu2_query_window_t3_ParamLimits

0x73d8,	// (0x00025473) popup_vitu2_query_window_t3

0x7400,	// (0x0002549b) popup_vitu2_query_window_t4_ParamLimits

0x7400,	// (0x0002549b) popup_vitu2_query_window_t4

0x7421,	// (0x000254bc) popup_vitu2_query_window_t5_ParamLimits

0x7421,	// (0x000254bc) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0002dabe) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0002dabe) popup_vitu2_query_window_t

0xd41a,	// (0x0002b4b5) main_cset_text_pane

0x6e6e,	// (0x00024f09) aid_area_touch_slider_ParamLimits

0x6e8a,	// (0x00024f25) cset_slider_pane_ParamLimits

0x6eb4,	// (0x00024f4f) main_cset_slider_pane_g1_ParamLimits

0x6ec9,	// (0x00024f64) main_cset_slider_pane_g2_ParamLimits

0xd43b,	// (0x0002b4d6) main_cset_slider_pane_g3_ParamLimits

0xd43b,	// (0x0002b4d6) main_cset_slider_pane_g3

0x6ede,	// (0x00024f79) main_cset_slider_pane_g4_ParamLimits

0x6ede,	// (0x00024f79) main_cset_slider_pane_g4

0x6eed,	// (0x00024f88) main_cset_slider_pane_g5_ParamLimits

0x6eed,	// (0x00024f88) main_cset_slider_pane_g5

0x6efb,	// (0x00024f96) main_cset_slider_pane_g6_ParamLimits

0x6efb,	// (0x00024f96) main_cset_slider_pane_g6

0xf976,	// (0x0002da11) main_cset_slider_pane_g_ParamLimits

0xd46b,	// (0x0002b506) main_cset_slider_pane_t1_ParamLimits

0x6f8b,	// (0x00025026) main_cset_slider_pane_t2_ParamLimits

0x6fa5,	// (0x00025040) main_cset_slider_pane_t3_ParamLimits

0x6fbf,	// (0x0002505a) main_cset_slider_pane_t4_ParamLimits

0x6fd9,	// (0x00025074) main_cset_slider_pane_t5_ParamLimits

0x6ff7,	// (0x00025092) main_cset_slider_pane_t6_ParamLimits

0x700e,	// (0x000250a9) main_cset_slider_pane_t7_ParamLimits

0x703c,	// (0x000250d7) main_cset_slider_pane_t8_ParamLimits

0x703c,	// (0x000250d7) main_cset_slider_pane_t8

0x7064,	// (0x000250ff) main_cset_slider_pane_t9_ParamLimits

0x7064,	// (0x000250ff) main_cset_slider_pane_t9

0x708c,	// (0x00025127) main_cset_slider_pane_t10_ParamLimits

0x708c,	// (0x00025127) main_cset_slider_pane_t10

0x70b4,	// (0x0002514f) main_cset_slider_pane_t11_ParamLimits

0x70b4,	// (0x0002514f) main_cset_slider_pane_t11

0x70de,	// (0x00025179) main_cset_slider_pane_t12_ParamLimits

0x70de,	// (0x00025179) main_cset_slider_pane_t12

0x70fb,	// (0x00025196) main_cset_slider_pane_t13_ParamLimits

0x70fb,	// (0x00025196) main_cset_slider_pane_t13

0xf99b,	// (0x0002da36) main_cset_slider_pane_t_ParamLimits

0x9cf6,	// (0x00027d91) bg_popup_sub_pane_cp011

0xd5bf,	// (0x0002b65a) main_cset_text_pane_g1

0xd5c7,	// (0x0002b662) main_cset_text_pane_t1

0xd5d5,	// (0x0002b670) main_cset_text_pane_t2

0xd5e3,	// (0x0002b67e) main_cset_text_pane_t3

0xd5f1,	// (0x0002b68c) main_cset_text_pane_t4

0xd61a,	// (0x0002b6b5) main_cset_text_pane_t5

0xd628,	// (0x0002b6c3) main_cset_text_pane_t6

0xd636,	// (0x0002b6d1) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0002dacd) main_cset_text_pane_t

0x107e,	// (0x0001f119) main_cam4_burst_pane

0x107e,	// (0x0001f119) main_cam5_pane

0x6dbd,	// (0x00024e58) bg_button_pane_cp019

0x6dc6,	// (0x00024e61) bg_button_pane_cp020

0xd447,	// (0x0002b4e2) main_cset_slider_pane_g7_ParamLimits

0xd447,	// (0x0002b4e2) main_cset_slider_pane_g7

0xd453,	// (0x0002b4ee) main_cset_slider_pane_g8_ParamLimits

0xd453,	// (0x0002b4ee) main_cset_slider_pane_g8

0x6f0f,	// (0x00024faa) main_cset_slider_pane_g9_ParamLimits

0x6f0f,	// (0x00024faa) main_cset_slider_pane_g9

0x6f1b,	// (0x00024fb6) main_cset_slider_pane_g10_ParamLimits

0x6f1b,	// (0x00024fb6) main_cset_slider_pane_g10

0x6f27,	// (0x00024fc2) main_cset_slider_pane_g11_ParamLimits

0x6f27,	// (0x00024fc2) main_cset_slider_pane_g11

0x6f33,	// (0x00024fce) main_cset_slider_pane_g12_ParamLimits

0x6f33,	// (0x00024fce) main_cset_slider_pane_g12

0x6f3f,	// (0x00024fda) main_cset_slider_pane_g13_ParamLimits

0x6f3f,	// (0x00024fda) main_cset_slider_pane_g13

0x6f4b,	// (0x00024fe6) main_cset_slider_pane_g14_ParamLimits

0x6f4b,	// (0x00024fe6) main_cset_slider_pane_g14

0x6f57,	// (0x00024ff2) main_cset_slider_pane_g15_ParamLimits

0x6f57,	// (0x00024ff2) main_cset_slider_pane_g15

0xd499,	// (0x0002b534) main_cset_slider_pane_t14_ParamLimits

0xd499,	// (0x0002b534) main_cset_slider_pane_t14

0xd4de,	// (0x0002b579) main_cset_slider_pane_t15_ParamLimits

0xd4de,	// (0x0002b579) main_cset_slider_pane_t15

0x7498,	// (0x00025533) aid_cam4_burst_size_cell_ParamLimits

0x7498,	// (0x00025533) aid_cam4_burst_size_cell

0x74b4,	// (0x0002554f) grid_cam4_burst_pane_ParamLimits

0x74b4,	// (0x0002554f) grid_cam4_burst_pane

0x74e4,	// (0x0002557f) linegrid_cam4_burst_pane_ParamLimits

0x74e4,	// (0x0002557f) linegrid_cam4_burst_pane

0x7504,	// (0x0002559f) scroll_pane_cp30_ParamLimits

0x7504,	// (0x0002559f) scroll_pane_cp30

0x7510,	// (0x000255ab) cell_cam4_burst_pane_ParamLimits

0x7510,	// (0x000255ab) cell_cam4_burst_pane

0xd644,	// (0x0002b6df) linegrid_cam4_burst_pane_g1_ParamLimits

0xd644,	// (0x0002b6df) linegrid_cam4_burst_pane_g1

0x754c,	// (0x000255e7) linegrid_cam4_burst_pane_g2_ParamLimits

0x754c,	// (0x000255e7) linegrid_cam4_burst_pane_g2

0xd651,	// (0x0002b6ec) linegrid_cam4_burst_pane_g3_ParamLimits

0xd651,	// (0x0002b6ec) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0002dadc) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0002dadc) linegrid_cam4_burst_pane_g

0x755d,	// (0x000255f8) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x755d,	// (0x000255f8) linegrid_cam4_burst_pane_g3_copy1

0xd65e,	// (0x0002b6f9) linegrid_cam4_burst_pane_g4_ParamLimits

0xd65e,	// (0x0002b6f9) linegrid_cam4_burst_pane_g4

0x7577,	// (0x00025612) linegrid_cam4_burst_pane_g5_ParamLimits

0x7577,	// (0x00025612) linegrid_cam4_burst_pane_g5

0x7588,	// (0x00025623) linegrid_cam4_burst_pane_g6_ParamLimits

0x7588,	// (0x00025623) linegrid_cam4_burst_pane_g6

0xd66b,	// (0x0002b706) linegrid_cam4_burst_pane_g7_ParamLimits

0xd66b,	// (0x0002b706) linegrid_cam4_burst_pane_g7

0x7599,	// (0x00025634) cell_cam4_burst_pane_g1

0xd684,	// (0x0002b71f) main_cam5_pane_t1_ParamLimits

0xd684,	// (0x0002b71f) main_cam5_pane_t1

0xd696,	// (0x0002b731) main_cam5_pane_t2_ParamLimits

0xd696,	// (0x0002b731) main_cam5_pane_t2

0xd6a8,	// (0x0002b743) main_cam5_pane_t3_ParamLimits

0xd6a8,	// (0x0002b743) main_cam5_pane_t3

0xd6ba,	// (0x0002b755) main_cam5_pane_t4_ParamLimits

0xd6ba,	// (0x0002b755) main_cam5_pane_t4

0xd6d2,	// (0x0002b76d) main_cam5_pane_t5_ParamLimits

0xd6d2,	// (0x0002b76d) main_cam5_pane_t5

0xd6e6,	// (0x0002b781) main_cam5_pane_t6_ParamLimits

0xd6e6,	// (0x0002b781) main_cam5_pane_t6

0xd6fa,	// (0x0002b795) main_cam5_pane_t7_ParamLimits

0xd6fa,	// (0x0002b795) main_cam5_pane_t7

0xd70c,	// (0x0002b7a7) main_cam5_pane_t8_ParamLimits

0xd70c,	// (0x0002b7a7) main_cam5_pane_t8

0xd728,	// (0x0002b7c3) main_cam5_pane_t9_ParamLimits

0xd728,	// (0x0002b7c3) main_cam5_pane_t9

0xd73a,	// (0x0002b7d5) main_cam5_pane_t10_ParamLimits

0xd73a,	// (0x0002b7d5) main_cam5_pane_t10

0xd758,	// (0x0002b7f3) main_cam5_pane_t11_ParamLimits

0xd758,	// (0x0002b7f3) main_cam5_pane_t11

0xd76a,	// (0x0002b805) main_cam5_pane_t12_ParamLimits

0xd76a,	// (0x0002b805) main_cam5_pane_t12

0xd77f,	// (0x0002b81a) main_cam5_pane_t13_ParamLimits

0xd77f,	// (0x0002b81a) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0002dae8) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0002dae8) main_cam5_pane_t

0x102f,	// (0x0001f0ca) popup_scut_keymap_window_ParamLimits

0x102f,	// (0x0001f0ca) popup_scut_keymap_window

0x75ac,	// (0x00025647) aid_size_cell_brow_shortcut

0xa60f,	// (0x000286aa) bg_popup_window_pane_cp010

0x75b8,	// (0x00025653) grid_scut_pane

0x75c4,	// (0x0002565f) cell_scut_pane_ParamLimits

0x75c4,	// (0x0002565f) cell_scut_pane

0x75db,	// (0x00025676) cell_scut_pane_g1

0xd79c,	// (0x0002b837) cell_scut_pane_t1

0xd7ab,	// (0x0002b846) cell_scut_pane_t2

0x75e4,	// (0x0002567f) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0002db03) cell_scut_pane_t

0x5f18,	// (0x00023fb3) main_mup3_pane_g8_ParamLimits

0x5f18,	// (0x00023fb3) main_mup3_pane_g8

0x2225,	// (0x000202c0) area_vitu2_query_pane_ParamLimits

0x2225,	// (0x000202c0) area_vitu2_query_pane

0x7344,	// (0x000253df) input_focus_pane_cp08

0xd7ba,	// (0x0002b855) area_vitu2_query_pane_g1

0x75f2,	// (0x0002568d) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0002db0a) area_vitu2_query_pane_g

0x7603,	// (0x0002569e) area_vitu2_query_pane_t1_ParamLimits

0x7603,	// (0x0002569e) area_vitu2_query_pane_t1

0x7617,	// (0x000256b2) area_vitu2_query_pane_t2_ParamLimits

0x7617,	// (0x000256b2) area_vitu2_query_pane_t2

0x762b,	// (0x000256c6) area_vitu2_query_pane_t3_ParamLimits

0x762b,	// (0x000256c6) area_vitu2_query_pane_t3

0xd7c6,	// (0x0002b861) area_vitu2_query_pane_t4_ParamLimits

0xd7c6,	// (0x0002b861) area_vitu2_query_pane_t4

0xd7ee,	// (0x0002b889) area_vitu2_query_pane_t5_ParamLimits

0xd7ee,	// (0x0002b889) area_vitu2_query_pane_t5

0xd816,	// (0x0002b8b1) area_vitu2_query_pane_t6_ParamLimits

0xd816,	// (0x0002b8b1) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0002db0f) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0002db0f) area_vitu2_query_pane_t

0x7653,	// (0x000256ee) bg_button_pane_cp018

0x7661,	// (0x000256fc) bg_button_pane_cp021

0x766d,	// (0x00025708) bg_button_pane_cp022

0x767e,	// (0x00025719) input_focus_pane_cp09

0xaecc,	// (0x00028f67) aid_size_touch_mv_arrow_left

0xaef5,	// (0x00028f90) aid_size_touch_mv_arrow_right

0x6f6f,	// (0x0002500a) main_cset_slider_pane_g16_ParamLimits

0x6f6f,	// (0x0002500a) main_cset_slider_pane_g16

0x6f7d,	// (0x00025018) main_cset_slider_pane_g17_ParamLimits

0x6f7d,	// (0x00025018) main_cset_slider_pane_g17

0x7599,	// (0x00025634) cell_cam4_burst_pane_g1_ParamLimits

0x9cf6,	// (0x00027d91) compa_mode_pane

0x7158,	// (0x000251f3) popup_vtel_slider_window_g3_ParamLimits

0x7158,	// (0x000251f3) popup_vtel_slider_window_g3

0x716c,	// (0x00025207) popup_vtel_slider_window_g4_ParamLimits

0x716c,	// (0x00025207) popup_vtel_slider_window_g4

0x7180,	// (0x0002521b) popup_vtel_slider_window_t1_ParamLimits

0x7180,	// (0x0002521b) popup_vtel_slider_window_t1

0x107e,	// (0x0001f119) main_cl_pane

0x1574,	// (0x0001f60f) popup_imed_adjust2_window_ParamLimits

0xc4f4,	// (0x0002a58f) bg_tb_trans_pane_cp05_ParamLimits

0xce4e,	// (0x0002aee9) popup_imed_adjust2_window_g1_ParamLimits

0xce5d,	// (0x0002aef8) popup_imed_adjust2_window_g2_ParamLimits

0xce5d,	// (0x0002aef8) popup_imed_adjust2_window_g2

0xce69,	// (0x0002af04) popup_imed_adjust2_window_g3_ParamLimits

0xce69,	// (0x0002af04) popup_imed_adjust2_window_g3

0x0002,

0xf7db,	// (0x0002d876) popup_imed_adjust2_window_g_ParamLimits

0xf7db,	// (0x0002d876) popup_imed_adjust2_window_g

0xce75,	// (0x0002af10) popup_imed_adjust2_window_t1_ParamLimits

0xce8d,	// (0x0002af28) slider_imed_adjust_pane_ParamLimits

0xcea1,	// (0x0002af3c) slider_imed_adjust_pane_g1_ParamLimits

0xceb1,	// (0x0002af4c) slider_imed_adjust_pane_g2_ParamLimits

0xcec1,	// (0x0002af5c) slider_imed_adjust_pane_g3_ParamLimits

0xced2,	// (0x0002af6d) slider_imed_adjust_pane_g4_ParamLimits

0xf7e2,	// (0x0002d87d) slider_imed_adjust_pane_g_ParamLimits

0x1fa2,	// (0x0002003d) aid_touch_area_cam4_ParamLimits

0x1fa2,	// (0x0002003d) aid_touch_area_cam4

0x1fb2,	// (0x0002004d) battery_pane_cp01

0x2039,	// (0x000200d4) main_camera4_pane_g6_ParamLimits

0x2039,	// (0x000200d4) main_camera4_pane_g6

0x2057,	// (0x000200f2) main_camera4_pane_t2_ParamLimits

0x2057,	// (0x000200f2) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0002d984) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0002d984) main_camera4_pane_t

0x20c8,	// (0x00020163) aid_touch_area_vid4_ParamLimits

0x20c8,	// (0x00020163) aid_touch_area_vid4

0x2108,	// (0x000201a3) main_video4_pane_g5_ParamLimits

0x2108,	// (0x000201a3) main_video4_pane_g5

0x212c,	// (0x000201c7) vid4_progress_pane_ParamLimits

0x212c,	// (0x000201c7) vid4_progress_pane

0xd45f,	// (0x0002b4fa) main_cset_slider_pane_g18_ParamLimits

0xd45f,	// (0x0002b4fa) main_cset_slider_pane_g18

0xd678,	// (0x0002b713) cell_cam4_burst_pane_g2_ParamLimits

0xd678,	// (0x0002b713) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0002dae3) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0002dae3) cell_cam4_burst_pane_g

0x768f,	// (0x0002572a) bg_cl_pane_ParamLimits

0x768f,	// (0x0002572a) bg_cl_pane

0x769b,	// (0x00025736) cl_header_pane_ParamLimits

0x769b,	// (0x00025736) cl_header_pane

0x76a7,	// (0x00025742) cl_listscroll_pane_ParamLimits

0x76a7,	// (0x00025742) cl_listscroll_pane

0xd862,	// (0x0002b8fd) bg_cl_pane_g1

0xd86a,	// (0x0002b905) bg_cl_pane_g2

0xd872,	// (0x0002b90d) bg_cl_pane_g3

0xd87a,	// (0x0002b915) bg_cl_pane_g4

0xd882,	// (0x0002b91d) bg_cl_pane_g5

0xd88a,	// (0x0002b925) bg_cl_pane_g6

0xd892,	// (0x0002b92d) bg_cl_pane_g7

0xd89a,	// (0x0002b935) bg_cl_pane_g8

0xd8a2,	// (0x0002b93d) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0002db1e) bg_cl_pane_g

0x76b3,	// (0x0002574e) aid_height_cl_leading_ParamLimits

0x76b3,	// (0x0002574e) aid_height_cl_leading

0x76bf,	// (0x0002575a) aid_height_cl_text_ParamLimits

0x76bf,	// (0x0002575a) aid_height_cl_text

0xd32c,	// (0x0002b3c7) bg_cl_header_pane_ParamLimits

0xd32c,	// (0x0002b3c7) bg_cl_header_pane

0x76d7,	// (0x00025772) cl_header_pane_g1_ParamLimits

0x76d7,	// (0x00025772) cl_header_pane_g1

0x76e4,	// (0x0002577f) cl_header_pane_t1_ParamLimits

0x76e4,	// (0x0002577f) cl_header_pane_t1

0xd8aa,	// (0x0002b945) cl_list_pane

0xd432,	// (0x0002b4cd) hc_scroll_pane_cp01

0xa848,	// (0x000288e3) bg_cl_header_pane_g1

0xd2fc,	// (0x0002b397) bg_cl_header_pane_g2

0xa868,	// (0x00028903) bg_cl_header_pane_g3

0xd30c,	// (0x0002b3a7) bg_cl_header_pane_g4

0xd304,	// (0x0002b39f) bg_cl_header_pane_g5

0xd578,	// (0x0002b613) bg_cl_header_pane_g6

0xd324,	// (0x0002b3bf) bg_cl_header_pane_g7

0xd348,	// (0x0002b3e3) bg_cl_header_pane_g8

0xd31c,	// (0x0002b3b7) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0002db31) bg_cl_header_pane_g

0x76f6,	// (0x00025791) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x76f6,	// (0x00025791) hc_cl_list_double_graphic_heading_pane

0x7707,	// (0x000257a2) hc_cl_list_single_graphic_pane_ParamLimits

0x7707,	// (0x000257a2) hc_cl_list_single_graphic_pane

0x7720,	// (0x000257bb) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7720,	// (0x000257bb) hc_cl_list_single_graphic_pane_g1

0x772c,	// (0x000257c7) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x772c,	// (0x000257c7) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0002db44) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0002db44) hc_cl_list_single_graphic_pane_g

0x7740,	// (0x000257db) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7740,	// (0x000257db) hc_cl_list_single_graphic_pane_t1

0x7720,	// (0x000257bb) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7720,	// (0x000257bb) hc_cl_list_double_graphic_heading_pane_g1

0x7755,	// (0x000257f0) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7755,	// (0x000257f0) hc_cl_list_double_graphic_heading_pane_g2

0x7769,	// (0x00025804) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7769,	// (0x00025804) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0002db49) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0002db49) hc_cl_list_double_graphic_heading_pane_g

0x777d,	// (0x00025818) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x777d,	// (0x00025818) hc_cl_list_double_graphic_heading_pane_t1

0x7792,	// (0x0002582d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7792,	// (0x0002582d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0002db50) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0002db50) hc_cl_list_double_graphic_heading_pane_t

0x2657,	// (0x000206f2) vid4_progress_pane_g1

0x2667,	// (0x00020702) vid4_progress_pane_g2

0x2677,	// (0x00020712) vid4_progress_pane_g3

0x2689,	// (0x00020724) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0002db55) vid4_progress_pane_g

0x26a1,	// (0x0002073c) vid4_progress_pane_t1

0x26b7,	// (0x00020752) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0002db60) vid4_progress_pane_t

0x26e1,	// (0x0002077c) wait_bar_pane_cp07

0xc6ef,	// (0x0002a78a) blid_firmament_pane_ParamLimits

0xc732,	// (0x0002a7cd) popup_blid_sat_info2_window_g1

0xc756,	// (0x0002a7f1) popup_blid_sat_info2_window_t3

0xc764,	// (0x0002a7ff) popup_blid_sat_info2_window_t4

0xc772,	// (0x0002a80d) popup_blid_sat_info2_window_t5

0xc780,	// (0x0002a81b) popup_blid_sat_info2_window_t6

0xc790,	// (0x0002a82b) popup_blid_sat_info2_window_t7

0xc79e,	// (0x0002a839) popup_blid_sat_info2_window_t8

0xc7ac,	// (0x0002a847) popup_blid_sat_info2_window_t9

0xc7ba,	// (0x0002a855) popup_blid_sat_info2_window_t10

0xc87c,	// (0x0002a917) aid_firma_cardinal_ParamLimits

0xc890,	// (0x0002a92b) blid_firmament_pane_t1_ParamLimits

0xc8a7,	// (0x0002a942) blid_firmament_pane_t2_ParamLimits

0xc8be,	// (0x0002a959) blid_firmament_pane_t3_ParamLimits

0xc8d5,	// (0x0002a970) blid_firmament_pane_t4_ParamLimits

0xf6cf,	// (0x0002d76a) blid_firmament_pane_t_ParamLimits

0xc8ec,	// (0x0002a987) blid_sat_info_pane_ParamLimits

0x14d6,	// (0x0001f571) main_cam_set_pane_ParamLimits

0x664c,	// (0x000246e7) aid_size_cell_colour_35_ParamLimits

0x6666,	// (0x00024701) aid_size_cell_colour_112_ParamLimits

0x667d,	// (0x00024718) aid_size_cell_effect_ParamLimits

0xa4d4,	// (0x0002856f) bg_tb_trans_pane_cp02_ParamLimits

0xac56,	// (0x00028cf1) heading_imed_pane_ParamLimits

0x6697,	// (0x00024732) listscroll_imed_pane_ParamLimits

0xbb1a,	// (0x00029bb5) popup_call2_audio_first_window_g5_ParamLimits

0xbb1a,	// (0x00029bb5) popup_call2_audio_first_window_g5

0x1d5e,	// (0x0001fdf9) aid_size_touch_image3_arrow_left_ParamLimits

0x1d5e,	// (0x0001fdf9) aid_size_touch_image3_arrow_left

0x1d74,	// (0x0001fe0f) aid_size_touch_image3_arrow_right_ParamLimits

0x1d74,	// (0x0001fe0f) aid_size_touch_image3_arrow_right

0x26cc,	// (0x00020767) vid4_progress_pane_t3

0x6935,	// (0x000249d0) main_hwr_training_symbol_option_pane_ParamLimits

0x6935,	// (0x000249d0) main_hwr_training_symbol_option_pane

0xd13b,	// (0x0002b1d6) popup_hwr_training_preview_window_ParamLimits

0xd13b,	// (0x0002b1d6) popup_hwr_training_preview_window

0x1a1c,	// (0x0001fab7) hwr_training_navi_pane_g5_ParamLimits

0x1a1c,	// (0x0001fab7) hwr_training_navi_pane_g5

0xd2ea,	// (0x0002b385) popup_char_count_window

0x1070,	// (0x0001f10b) bg_popup_sub_pane_cp20_ParamLimits

0x2598,	// (0x00020633) list_vitu2_match_list_pane_ParamLimits

0x25a4,	// (0x0002063f) vitu2_page_scroll_pane_ParamLimits

0x25a4,	// (0x0002063f) vitu2_page_scroll_pane

0xd8d5,	// (0x0002b970) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd8d5,	// (0x0002b970) list_single_hwr_training_symbol_option_pane

0xd8e8,	// (0x0002b983) list_single_hwr_training_symbol_option_pane_g1

0xd8f0,	// (0x0002b98b) list_single_hwr_training_symbol_option_pane_t1

0xd8fe,	// (0x0002b999) bg_button_pane_cp023

0xd907,	// (0x0002b9a2) bg_button_pane_cp024

0x77d6,	// (0x00025871) vitu2_page_scroll_pane_g1

0x77de,	// (0x00025879) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0002db67) vitu2_page_scroll_pane_g

0x77e6,	// (0x00025881) vitu2_page_scroll_pane_t1

0xc64f,	// (0x0002a6ea) popup_char_count_window_g1

0xd93a,	// (0x0002b9d5) popup_char_count_window_g2

0xd943,	// (0x0002b9de) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0002db6c) popup_char_count_window_g

0xd94c,	// (0x0002b9e7) popup_char_count_window_t1

0x107e,	// (0x0001f119) main_vded2_pane

0xce3a,	// (0x0002aed5) aid_size_cell_imed_line

0xce44,	// (0x0002aedf) grid_imed_line_width_pane

0x219a,	// (0x00020235) vid4_indicators_pane_g4

0xd95a,	// (0x0002b9f5) cell_imed_line_width_pane_ParamLimits

0xd95a,	// (0x0002b9f5) cell_imed_line_width_pane

0xd980,	// (0x0002ba1b) cell_imed_line_width_pane_g1

0xd96e,	// (0x0002ba09) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0002db73) cell_imed_line_width_pane_g

0x77f5,	// (0x00025890) main_vded2_pane_g1_ParamLimits

0x77f5,	// (0x00025890) main_vded2_pane_g1

0x7802,	// (0x0002589d) main_vded2_pane_g2_ParamLimits

0x7802,	// (0x0002589d) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0002db78) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0002db78) main_vded2_pane_g

0x7810,	// (0x000258ab) vded2_slider_pane_ParamLimits

0x7810,	// (0x000258ab) vded2_slider_pane

0x781d,	// (0x000258b8) aid_size_touch_vded2_end

0x7827,	// (0x000258c2) aid_size_touch_vded2_playhead

0xd989,	// (0x0002ba24) aid_size_touch_vded2_start

0xd991,	// (0x0002ba2c) vded2_slider_bg_pane

0xd99a,	// (0x0002ba35) vded2_slider_pane_g1

0xd9a3,	// (0x0002ba3e) vded2_slider_pane_g2

0x782f,	// (0x000258ca) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0002db7d) vded2_slider_pane_g

0xd9ab,	// (0x0002ba46) vded2_slider_bg_pane_g1

0xd9b4,	// (0x0002ba4f) vded2_slider_bg_pane_g2

0xd9bd,	// (0x0002ba58) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0002db84) vded2_slider_bg_pane_g

0x4ed6,	// (0x00022f71) aid_postcard_touch_down_pane_ParamLimits

0x4ed6,	// (0x00022f71) aid_postcard_touch_down_pane

0x4ee6,	// (0x00022f81) aid_postcard_touch_up_pane_ParamLimits

0x4ee6,	// (0x00022f81) aid_postcard_touch_up_pane

0x107e,	// (0x0001f119) main_blid2_pane

0x14ff,	// (0x0001f59a) popup_blid2_search_window

0x9cf6,	// (0x00027d91) blid2_gps_pane

0x9cf6,	// (0x00027d91) blid2_navig_pane

0x9cf6,	// (0x00027d91) blid2_search_pane

0x9cf6,	// (0x00027d91) blid2_tripm_pane

0x7838,	// (0x000258d3) blid2_search_pane_g1_ParamLimits

0x7838,	// (0x000258d3) blid2_search_pane_g1

0x7848,	// (0x000258e3) blid2_search_pane_t1_ParamLimits

0x7848,	// (0x000258e3) blid2_search_pane_t1

0x785a,	// (0x000258f5) aid_size_cell_blid2_gps_ParamLimits

0x785a,	// (0x000258f5) aid_size_cell_blid2_gps

0x786a,	// (0x00025905) blid2_gps_pane_g1_ParamLimits

0x786a,	// (0x00025905) blid2_gps_pane_g1

0x7876,	// (0x00025911) grid_blid2_satellite_pane_ParamLimits

0x7876,	// (0x00025911) grid_blid2_satellite_pane

0x7886,	// (0x00025921) blid2_navig_pane_g1_ParamLimits

0x7886,	// (0x00025921) blid2_navig_pane_g1

0x7892,	// (0x0002592d) blid2_navig_pane_t1_ParamLimits

0x7892,	// (0x0002592d) blid2_navig_pane_t1

0x78a4,	// (0x0002593f) blid2_navig_pane_t2_ParamLimits

0x78a4,	// (0x0002593f) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0002db8b) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0002db8b) blid2_navig_pane_t

0x78b6,	// (0x00025951) blid2_navig_ring_pane_ParamLimits

0x78b6,	// (0x00025951) blid2_navig_ring_pane

0x78c6,	// (0x00025961) blid2_speed_pane_ParamLimits

0x78c6,	// (0x00025961) blid2_speed_pane

0x78d2,	// (0x0002596d) blid2_tripm_pane_g1_ParamLimits

0x78d2,	// (0x0002596d) blid2_tripm_pane_g1

0x78e2,	// (0x0002597d) blid2_tripm_pane_g2_ParamLimits

0x78e2,	// (0x0002597d) blid2_tripm_pane_g2

0x78ee,	// (0x00025989) blid2_tripm_pane_g3_ParamLimits

0x78ee,	// (0x00025989) blid2_tripm_pane_g3

0x78fa,	// (0x00025995) blid2_tripm_pane_g4_ParamLimits

0x78fa,	// (0x00025995) blid2_tripm_pane_g4

0x7906,	// (0x000259a1) blid2_tripm_pane_g5_ParamLimits

0x7906,	// (0x000259a1) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0002db90) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0002db90) blid2_tripm_pane_g

0x7922,	// (0x000259bd) blid2_tripm_pane_t1_ParamLimits

0x7922,	// (0x000259bd) blid2_tripm_pane_t1

0x7936,	// (0x000259d1) blid2_tripm_pane_t2_ParamLimits

0x7936,	// (0x000259d1) blid2_tripm_pane_t2

0x7948,	// (0x000259e3) blid2_tripm_pane_t3_ParamLimits

0x7948,	// (0x000259e3) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0002db9d) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0002db9d) blid2_tripm_pane_t

0x797a,	// (0x00025a15) cell_blid2_satellite_pane_ParamLimits

0x797a,	// (0x00025a15) cell_blid2_satellite_pane

0x7994,	// (0x00025a2f) cell_blid2_satellite_pane_g1

0xd9c6,	// (0x0002ba61) cell_blid2_satellite_pane_t1

0xc8fc,	// (0x0002a997) blid2_speed_pane_g1

0xd9d4,	// (0x0002ba6f) blid2_speed_pane_t1

0xd9e2,	// (0x0002ba7d) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0002dba6) blid2_speed_pane_t

0xc8fc,	// (0x0002a997) blid2_navig_ring_pane_g1

0x799d,	// (0x00025a38) blid2_navig_ring_pane_g2

0x79a5,	// (0x00025a40) blid2_navig_ring_pane_g3

0x79ad,	// (0x00025a48) blid2_navig_ring_pane_g4

0x79b5,	// (0x00025a50) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0002dbab) blid2_navig_ring_pane_g

0x9cf6,	// (0x00027d91) bg_popup_window_pane_cp011

0xd9f0,	// (0x0002ba8b) popup_blid2_search_window_g1

0xd9f8,	// (0x0002ba93) popup_blid2_search_window_t1

0xda06,	// (0x0002baa1) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0002dbb6) popup_blid2_search_window_t

0xa757,	// (0x000287f2) main_browser_pane_g1

0xa433,	// (0x000284ce) main_browser_pane_ParamLimits

0x14d6,	// (0x0001f571) bg_button_pane_cp011_ParamLimits

0x24bf,	// (0x0002055a) cell_vitu2_function_pane_g1_ParamLimits

0xc4f4,	// (0x0002a58f) bg_popup_sub_pane_cp22_ParamLimits

0x7344,	// (0x000253df) input_focus_pane_cp08_ParamLimits

0x735b,	// (0x000253f6) popup_vitu2_query_button_pane_ParamLimits

0x735b,	// (0x000253f6) popup_vitu2_query_button_pane

0x736c,	// (0x00025407) popup_vitu2_query_input_button_pane

0xd5b3,	// (0x0002b64e) popup_vitu2_query_window_g1_ParamLimits

0x7376,	// (0x00025411) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0002dab7) popup_vitu2_query_window_g_ParamLimits

0x9cf6,	// (0x00027d91) bg_button_pane_cp026

0x79bd,	// (0x00025a58) popup_vitu2_query_input_button_pane_g1

0x9cf6,	// (0x00027d91) bg_button_pane_cp025

0xda14,	// (0x0002baaf) popup_vitu2_query_button_pane_t1

0x5bf4,	// (0x00023c8f) main_mp3_pane_t6

0x5c04,	// (0x00023c9f) popup_slider_window_cp01

0x2077,	// (0x00020112) cam4_battery_pane

0x2157,	// (0x000201f2) cam4_battery_pane_cp02

0x264f,	// (0x000206ea) cam4_battery_pane_cp01

0x264f,	// (0x000206ea) cam4_battery_pane_cp03

0xd976,	// (0x0002ba11) cam4_battery_pane_g1

0xc8fc,	// (0x0002a997) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0002dbbb) cam4_battery_pane_g

0xc7c8,	// (0x0002a863) popup_blid_sat_info2_window_t11

0xaecc,	// (0x00028f67) aid_size_touch_mv_arrow_left_ParamLimits

0xaef5,	// (0x00028f90) aid_size_touch_mv_arrow_right_ParamLimits

0xaf53,	// (0x00028fee) navi_pane_g1_ParamLimits

0xaf5f,	// (0x00028ffa) navi_pane_g2_ParamLimits

0xaf8d,	// (0x00029028) navi_pane_g3_ParamLimits

0xf3e1,	// (0x0002d47c) navi_pane_g_ParamLimits

0x495b,	// (0x000229f6) navi_pane_mv_t1_ParamLimits

0x66a3,	// (0x0002473e) grid_imed_effect_pane_ParamLimits

0x3412,	// (0x000214ad) aid_placing_vt_slider_lsc

0xa6a6,	// (0x00028741) aid_placing_vt_slider_prt

0xa4d4,	// (0x0002856f) bg_tb_trans_pane_cp01_ParamLimits

0xca7f,	// (0x0002ab1a) popup_image_details_window_g1_ParamLimits

0xca92,	// (0x0002ab2d) popup_image_details_window_g2_ParamLimits

0xcaa7,	// (0x0002ab42) popup_image_details_window_g3_ParamLimits

0xcaa7,	// (0x0002ab42) popup_image_details_window_g3

0xf714,	// (0x0002d7af) popup_image_details_window_g_ParamLimits

0xcabb,	// (0x0002ab56) popup_image_details_window_t1_ParamLimits

0xcacd,	// (0x0002ab68) popup_image_details_window_t2_ParamLimits

0xcae6,	// (0x0002ab81) popup_image_details_window_t3_ParamLimits

0xcafa,	// (0x0002ab95) popup_image_details_window_t4_ParamLimits

0xcb15,	// (0x0002abb0) popup_image_details_window_t5_ParamLimits

0xf71b,	// (0x0002d7b6) popup_image_details_window_t_ParamLimits

0x76cb,	// (0x00025766) cl_header_name_pane_ParamLimits

0x76cb,	// (0x00025766) cl_header_name_pane

0x79c5,	// (0x00025a60) cl_header_name_pane_t1_ParamLimits

0x79c5,	// (0x00025a60) cl_header_name_pane_t1

0x79dc,	// (0x00025a77) cl_header_name_pane_t2_ParamLimits

0x79dc,	// (0x00025a77) cl_header_name_pane_t2

0x7a06,	// (0x00025aa1) cl_header_name_pane_t3_ParamLimits

0x7a06,	// (0x00025aa1) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0002dbc0) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0002dbc0) cl_header_name_pane_t

0xb01c,	// (0x000290b7) navi_pane_mv_g2_ParamLimits

0xd2a7,	// (0x0002b342) field_vitu2_entry_pane_g1_ParamLimits

0xd2b3,	// (0x0002b34e) field_vitu2_entry_pane_g2_ParamLimits

0xd2bf,	// (0x0002b35a) field_vitu2_entry_pane_g3_ParamLimits

0xd2bf,	// (0x0002b35a) field_vitu2_entry_pane_g3

0xf91b,	// (0x0002d9b6) field_vitu2_entry_pane_g_ParamLimits

0x238b,	// (0x00020426) cell_vitu2_itu_pane_g1_ParamLimits

0x239d,	// (0x00020438) cell_vitu2_itu_pane_g2_ParamLimits

0x239d,	// (0x00020438) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0002d9c2) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0002d9c2) cell_vitu2_itu_pane_g

0x14d6,	// (0x0001f571) bg_vkb2_func_pane_cp05_ParamLimits

0x14d6,	// (0x0001f571) bg_vkb2_func_pane_cp05

0x14d6,	// (0x0001f571) bg_vkb2_func_pane_cp03

0x14d6,	// (0x0001f571) bg_vkb2_func_pane_cp04

0x14d6,	// (0x0001f571) bg_vkb2_func_pane_cp10_ParamLimits

0x14d6,	// (0x0001f571) bg_vkb2_func_pane_cp10

0x766d,	// (0x00025708) bg_vkb2_func_pane_cp08

0x7653,	// (0x000256ee) bg_vkb2_func_pane_cp06

0x7661,	// (0x000256fc) bg_vkb2_func_pane_cp07

0xd910,	// (0x0002b9ab) bg_vkb2_func_pane_cp11_ParamLimits

0xd910,	// (0x0002b9ab) bg_vkb2_func_pane_cp11

0xd925,	// (0x0002b9c0) bg_vkb2_func_pane_cp12_ParamLimits

0xd925,	// (0x0002b9c0) bg_vkb2_func_pane_cp12

0x9cf6,	// (0x00027d91) bg_vkb2_func_pane_cp09

0xd2fc,	// (0x0002b397) bg_vkb2_func_pane_g1

0xa868,	// (0x00028903) bg_vkb2_func_pane_g2

0xd304,	// (0x0002b39f) bg_vkb2_func_pane_g3

0xd30c,	// (0x0002b3a7) bg_vkb2_func_pane_g4

0xd578,	// (0x0002b613) bg_vkb2_func_pane_g5

0xd324,	// (0x0002b3bf) bg_vkb2_func_pane_g6

0xd348,	// (0x0002b3e3) bg_vkb2_func_pane_g7

0xd31c,	// (0x0002b3b7) bg_vkb2_func_pane_g8

0xa848,	// (0x000288e3) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0002dbc7) bg_vkb2_func_pane_g

0x7914,	// (0x000259af) blid2_tripm_pane_g6_ParamLimits

0x7914,	// (0x000259af) blid2_tripm_pane_g6

0xd1f9,	// (0x0002b294) mp4_progress_pane_g1

0x796e,	// (0x00025a09) blid2_tripm_values_pane_ParamLimits

0x796e,	// (0x00025a09) blid2_tripm_values_pane

0x7a2b,	// (0x00025ac6) blid2_tripm_values_pane_t1

0x7a39,	// (0x00025ad4) blid2_tripm_values_pane_t2

0x7a47,	// (0x00025ae2) blid2_tripm_values_pane_t3

0x7a55,	// (0x00025af0) blid2_tripm_values_pane_t4

0x7a63,	// (0x00025afe) blid2_tripm_values_pane_t5

0x7a71,	// (0x00025b0c) blid2_tripm_values_pane_t6

0x7a7f,	// (0x00025b1a) blid2_tripm_values_pane_t7

0x7a8d,	// (0x00025b28) blid2_tripm_values_pane_t8

0x7a9b,	// (0x00025b36) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0002dbda) blid2_tripm_values_pane_t

0x3452,	// (0x000214ed) call_video_pane_t1_ParamLimits

0x3473,	// (0x0002150e) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0002d305) call_video_pane_t_ParamLimits

0x4e86,	// (0x00022f21) msg_header_pane_g1_ParamLimits

0xb1fe,	// (0x00029299) msg_header_pane_g2_ParamLimits

0xb1fe,	// (0x00029299) msg_header_pane_g2

0x0001,

0xf484,	// (0x0002d51f) msg_header_pane_g_ParamLimits

0xf484,	// (0x0002d51f) msg_header_pane_g

0xa433,	// (0x000284ce) main_clock2_pane_ParamLimits

0x64c0,	// (0x0002455b) grid_clock2_toolbar_pane_ParamLimits

0x64c0,	// (0x0002455b) grid_clock2_toolbar_pane

0x64c0,	// (0x0002455b) listscroll_clock2_pane_ParamLimits

0x64c0,	// (0x0002455b) listscroll_clock2_pane

0x6570,	// (0x0002460b) main_clock2_pane_t3_ParamLimits

0x6570,	// (0x0002460b) main_clock2_pane_t3

0x6582,	// (0x0002461d) main_clock2_pane_t4_ParamLimits

0x6582,	// (0x0002461d) main_clock2_pane_t4

0xda22,	// (0x0002babd) cell_clock2_toolbar_pane

0xda2a,	// (0x0002bac5) cell_clock2_toolbar_pane_cp01

0xda2a,	// (0x0002bac5) cell_clock2_toolbar_pane_cp02

0xda32,	// (0x0002bacd) cell_clock2_toolbar_pane_cp03

0xda3a,	// (0x0002bad5) list_clock2_pane

0xae42,	// (0x00028edd) scroll_pane_cp10

0xda42,	// (0x0002badd) list_single_clock2_pane_ParamLimits

0xda42,	// (0x0002badd) list_single_clock2_pane

0xa60f,	// (0x000286aa) list_highlight_pane_cp08

0xda4f,	// (0x0002baea) list_single_clock2_pane_t1

0xda5d,	// (0x0002baf8) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0002dbed) list_single_clock2_pane_t

0x9cf6,	// (0x00027d91) bg_button_pane_cp10

0xda6b,	// (0x0002bb06) cell_clock2_toolbar_pane_g1

0x1471,	// (0x0001f50c) aid_main_viewer_pane_g1_ParamLimits

0x1471,	// (0x0001f50c) aid_main_viewer_pane_g1

0x147d,	// (0x0001f518) aid_main_viewer_pane_g2_ParamLimits

0x147d,	// (0x0001f518) aid_main_viewer_pane_g2

0x4e92,	// (0x00022f2d) aid_main_viewer_pane_g3_ParamLimits

0x4e92,	// (0x00022f2d) aid_main_viewer_pane_g3

0x4ea3,	// (0x00022f3e) aid_main_viewer_pane_g4_ParamLimits

0x4ea3,	// (0x00022f3e) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x0002d530) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x0002d530) aid_main_viewer_pane_g

0x14c9,	// (0x0001f564) main_calc_pane_ParamLimits

0x14e4,	// (0x0001f57f) main_dialer2_pane_ParamLimits

0x107e,	// (0x0001f119) main_cam6_pane

0x107e,	// (0x0001f119) main_vid6_pane

0x64cc,	// (0x00024567) listscroll_gen_pane_cp06_ParamLimits

0x64cc,	// (0x00024567) listscroll_gen_pane_cp06

0x6594,	// (0x0002462f) main_clock2_pane_t5_ParamLimits

0x6594,	// (0x0002462f) main_clock2_pane_t5

0x65e1,	// (0x0002467c) aid_call2_pane_cp10_ParamLimits

0x65f3,	// (0x0002468e) aid_call_pane_cp10_ParamLimits

0xaec0,	// (0x00028f5b) popup_clock_analogue_window_cp10_g1_ParamLimits

0xaec0,	// (0x00028f5b) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6605,	// (0x000246a0) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6605,	// (0x000246a0) popup_clock_analogue_window_cp10_g4_ParamLimits

0xaec0,	// (0x00028f5b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d0,	// (0x0002d86b) popup_clock_analogue_window_cp10_g_ParamLimits

0x661b,	// (0x000246b6) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6a07,	// (0x00024aa2) cell_dialer2_keypad_pane_g2_ParamLimits

0x6a07,	// (0x00024aa2) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0002d955) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0002d955) cell_dialer2_keypad_pane_g

0x6a23,	// (0x00024abe) cell_dialer2_keypad_pane_t1

0x6e5b,	// (0x00024ef6) main_cset_text2_pane_ParamLimits

0x6e5b,	// (0x00024ef6) main_cset_text2_pane

0xd7ba,	// (0x0002b855) area_vitu2_query_pane_g1_ParamLimits

0x75f2,	// (0x0002568d) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0002db0a) area_vitu2_query_pane_g_ParamLimits

0xd83e,	// (0x0002b8d9) area_vitu2_query_pane_t7_ParamLimits

0xd83e,	// (0x0002b8d9) area_vitu2_query_pane_t7

0x7653,	// (0x000256ee) bg_button_pane_cp018_ParamLimits

0x7661,	// (0x000256fc) bg_button_pane_cp021_ParamLimits

0x766d,	// (0x00025708) bg_button_pane_cp022_ParamLimits

0x766d,	// (0x00025708) bg_vkb2_func_pane_cp08_ParamLimits

0x7653,	// (0x000256ee) bg_vkb2_func_pane_cp06_ParamLimits

0x7661,	// (0x000256fc) bg_vkb2_func_pane_cp07_ParamLimits

0x767e,	// (0x00025719) input_focus_pane_cp09_ParamLimits

0x26f4,	// (0x0002078f) cam6_autofocus_pane_ParamLimits

0x26f4,	// (0x0002078f) cam6_autofocus_pane

0x2716,	// (0x000207b1) cam6_image_uncrop_pane_ParamLimits

0x2716,	// (0x000207b1) cam6_image_uncrop_pane

0x2743,	// (0x000207de) cam6_indi_pane_ParamLimits

0x2743,	// (0x000207de) cam6_indi_pane

0x275d,	// (0x000207f8) cam6_mode_pane_ParamLimits

0x275d,	// (0x000207f8) cam6_mode_pane

0x2771,	// (0x0002080c) cam6_timer_pane_ParamLimits

0x2771,	// (0x0002080c) cam6_timer_pane

0x277d,	// (0x00020818) cam6_zoom_pane_ParamLimits

0x277d,	// (0x00020818) cam6_zoom_pane

0x7aa9,	// (0x00025b44) cam6_mode_pane_g1_ParamLimits

0x7aa9,	// (0x00025b44) cam6_mode_pane_g1

0x7ab5,	// (0x00025b50) cam6_mode_pane_g2_ParamLimits

0x7ab5,	// (0x00025b50) cam6_mode_pane_g2

0x7ac1,	// (0x00025b5c) cam6_mode_pane_g3_ParamLimits

0x7ac1,	// (0x00025b5c) cam6_mode_pane_g3

0x7acd,	// (0x00025b68) cam6_mode_pane_g4_ParamLimits

0x7acd,	// (0x00025b68) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0002dbf2) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0002dbf2) cam6_mode_pane_g

0xd33a,	// (0x0002b3d5) bg_tb_trans_pane_cp08_ParamLimits

0xd33a,	// (0x0002b3d5) bg_tb_trans_pane_cp08

0xda73,	// (0x0002bb0e) cam6_battery_pane_ParamLimits

0xda73,	// (0x0002bb0e) cam6_battery_pane

0xda89,	// (0x0002bb24) cam6_indi_pane_g1_ParamLimits

0xda89,	// (0x0002bb24) cam6_indi_pane_g1

0xda9b,	// (0x0002bb36) cam6_indi_pane_g2_ParamLimits

0xda9b,	// (0x0002bb36) cam6_indi_pane_g2

0xdaad,	// (0x0002bb48) cam6_indi_pane_g3_ParamLimits

0xdaad,	// (0x0002bb48) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0002dbfb) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0002dbfb) cam6_indi_pane_g

0xdabf,	// (0x0002bb5a) cam6_indi_pane_t1_ParamLimits

0xdabf,	// (0x0002bb5a) cam6_indi_pane_t1

0x6b5c,	// (0x00024bf7) cam6_autofocus_pane_g1

0x6b54,	// (0x00024bef) cam6_autofocus_pane_g2

0x6b6c,	// (0x00024c07) cam6_autofocus_pane_g3

0x6b64,	// (0x00024bff) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0002dc02) cam6_autofocus_pane_g

0xdae5,	// (0x0002bb80) cam6_timer_pane_g1

0xdaed,	// (0x0002bb88) cam6_timer_pane_t1

0xdafb,	// (0x0002bb96) cam6_zoom_cont_pane

0xdb03,	// (0x0002bb9e) cam6_zoom_pane_g1

0xdb0b,	// (0x0002bba6) cam6_zoom_pane_g2

0x7ad9,	// (0x00025b74) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0002dc0b) cam6_zoom_pane_g

0xc8fc,	// (0x0002a997) cam6_battery_pane_g1

0xc8fc,	// (0x0002a997) cam6_battery_pane_g2

0x0001,

0xf6d8,	// (0x0002d773) cam6_battery_pane_g

0xdb13,	// (0x0002bbae) cam6_zoom_cont_pane_g1

0xdb1c,	// (0x0002bbb7) cam6_zoom_cont_pane_g2

0xdb25,	// (0x0002bbc0) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0002dc12) cam6_zoom_cont_pane_g

0x7af6,	// (0x00025b91) cam6_mode_pane_cp_ParamLimits

0x7af6,	// (0x00025b91) cam6_mode_pane_cp

0x7b0a,	// (0x00025ba5) cam6_zoom_pane_cp_ParamLimits

0x7b0a,	// (0x00025ba5) cam6_zoom_pane_cp

0x7b22,	// (0x00025bbd) vid6_image_uncrop_cif_pane_ParamLimits

0x7b22,	// (0x00025bbd) vid6_image_uncrop_cif_pane

0x7b4e,	// (0x00025be9) vid6_image_uncrop_nhd_pane_ParamLimits

0x7b4e,	// (0x00025be9) vid6_image_uncrop_nhd_pane

0x7b6b,	// (0x00025c06) vid6_image_uncrop_vga_pane_ParamLimits

0x7b6b,	// (0x00025c06) vid6_image_uncrop_vga_pane

0x7b8a,	// (0x00025c25) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b8a,	// (0x00025c25) vid6_image_uncrop_wvga_pane

0x7ba7,	// (0x00025c42) vid6_indi_pane_ParamLimits

0x7ba7,	// (0x00025c42) vid6_indi_pane

0xd33a,	// (0x0002b3d5) bg_tb_trans_pane_cp09_ParamLimits

0xd33a,	// (0x0002b3d5) bg_tb_trans_pane_cp09

0xdb3d,	// (0x0002bbd8) cam6_battery_pane_cp_ParamLimits

0xdb3d,	// (0x0002bbd8) cam6_battery_pane_cp

0xdb49,	// (0x0002bbe4) vid6_indi_pane_g1_ParamLimits

0xdb49,	// (0x0002bbe4) vid6_indi_pane_g1

0xdb5b,	// (0x0002bbf6) vid6_indi_pane_g2_ParamLimits

0xdb5b,	// (0x0002bbf6) vid6_indi_pane_g2

0xdb6d,	// (0x0002bc08) vid6_indi_pane_g3_ParamLimits

0xdb6d,	// (0x0002bc08) vid6_indi_pane_g3

0xdb82,	// (0x0002bc1d) vid6_indi_pane_g4_ParamLimits

0xdb82,	// (0x0002bc1d) vid6_indi_pane_g4

0xdb97,	// (0x0002bc32) vid6_indi_pane_g5_ParamLimits

0xdb97,	// (0x0002bc32) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0002dc19) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0002dc19) vid6_indi_pane_g

0xdbb1,	// (0x0002bc4c) vid6_indi_pane_t1_ParamLimits

0xdbb1,	// (0x0002bc4c) vid6_indi_pane_t1

0xdbc7,	// (0x0002bc62) vid6_indi_pane_t2_ParamLimits

0xdbc7,	// (0x0002bc62) vid6_indi_pane_t2

0xdbef,	// (0x0002bc8a) vid6_indi_pane_t3_ParamLimits

0xdbef,	// (0x0002bc8a) vid6_indi_pane_t3

0xdc17,	// (0x0002bcb2) vid6_indi_pane_t4_ParamLimits

0xdc17,	// (0x0002bcb2) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0002dc24) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0002dc24) vid6_indi_pane_t

0xdc3b,	// (0x0002bcd6) wait_bar_pane_cp08

0x7bcc,	// (0x00025c67) main_cset_text2_pane_t1_ParamLimits

0x7bcc,	// (0x00025c67) main_cset_text2_pane_t1

0x7ae1,	// (0x00025b7c) listscroll_gen_pane_cp06_t1_ParamLimits

0x7ae1,	// (0x00025b7c) listscroll_gen_pane_cp06_t1

0x107e,	// (0x0001f119) main_cam6_set_pane

0x2069,	// (0x00020104) bg_tb_trans_pane_cp06_ParamLimits

0x207f,	// (0x0002011a) cam4_indicators_pane_g1_ParamLimits

0x2090,	// (0x0002012b) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0002d992) cam4_indicators_pane_g_ParamLimits

0x20ae,	// (0x00020149) cam4_indicators_pane_t1_ParamLimits

0x14d6,	// (0x0001f571) bg_tb_trans_pane_cp07_ParamLimits

0x2161,	// (0x000201fc) vid4_indicators_pane_g1_ParamLimits

0x2175,	// (0x00020210) vid4_indicators_pane_g2_ParamLimits

0x2189,	// (0x00020224) vid4_indicators_pane_g3_ParamLimits

0x219a,	// (0x00020235) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0002d9a4) vid4_indicators_pane_g_ParamLimits

0x21b8,	// (0x00020253) vid4_indicators_pane_t1_ParamLimits

0x2657,	// (0x000206f2) vid4_progress_pane_g1_ParamLimits

0x2667,	// (0x00020702) vid4_progress_pane_g2_ParamLimits

0x2677,	// (0x00020712) vid4_progress_pane_g3_ParamLimits

0x2689,	// (0x00020724) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0002db55) vid4_progress_pane_g_ParamLimits

0x26a1,	// (0x0002073c) vid4_progress_pane_t1_ParamLimits

0x26b7,	// (0x00020752) vid4_progress_pane_t2_ParamLimits

0x26cc,	// (0x00020767) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0002db60) vid4_progress_pane_t_ParamLimits

0x26e1,	// (0x0002077c) wait_bar_pane_cp07_ParamLimits

0x7bff,	// (0x00025c9a) main_cam6_set_pane_g2_ParamLimits

0x7bff,	// (0x00025c9a) main_cam6_set_pane_g2

0x7c0b,	// (0x00025ca6) main_cset6_listscroll_pane_ParamLimits

0x7c0b,	// (0x00025ca6) main_cset6_listscroll_pane

0x7c36,	// (0x00025cd1) main_cset6_slider_pane_ParamLimits

0x7c36,	// (0x00025cd1) main_cset6_slider_pane

0x7c42,	// (0x00025cdd) main_cset6_text2_pane_ParamLimits

0x7c42,	// (0x00025cdd) main_cset6_text2_pane

0xdc4a,	// (0x0002bce5) main_cset6_text_pane

0xdc52,	// (0x0002bced) main_cset_list_pane_copy1_ParamLimits

0xdc52,	// (0x0002bced) main_cset_list_pane_copy1

0xdc62,	// (0x0002bcfd) scroll_pane_cp028_copy1

0x7c55,	// (0x00025cf0) cset_list_set_pane_copy1

0x7c68,	// (0x00025d03) aid_position_infowindow_above_copy1

0x7c70,	// (0x00025d0b) aid_position_infowindow_below_copy1

0x7c78,	// (0x00025d13) cset_list_set_pane_g1_copy1

0xd523,	// (0x0002b5be) cset_list_set_pane_g3_copy1_ParamLimits

0xd523,	// (0x0002b5be) cset_list_set_pane_g3_copy1

0xd532,	// (0x0002b5cd) cset_list_set_pane_t1_copy1_ParamLimits

0xd532,	// (0x0002b5cd) cset_list_set_pane_t1_copy1

0xa4d4,	// (0x0002856f) list_highlight_pane_cp021_copy1_ParamLimits

0xa4d4,	// (0x0002856f) list_highlight_pane_cp021_copy1

0xdc6b,	// (0x0002bd06) cset6_slider_pane_ParamLimits

0xdc6b,	// (0x0002bd06) cset6_slider_pane

0xdc97,	// (0x0002bd32) main_cset6_slider_pane_g1_ParamLimits

0xdc97,	// (0x0002bd32) main_cset6_slider_pane_g1

0x7c80,	// (0x00025d1b) main_cset6_slider_pane_g2_ParamLimits

0x7c80,	// (0x00025d1b) main_cset6_slider_pane_g2

0xdcbf,	// (0x0002bd5a) main_cset6_slider_pane_g3_ParamLimits

0xdcbf,	// (0x0002bd5a) main_cset6_slider_pane_g3

0x7ca8,	// (0x00025d43) main_cset6_slider_pane_g4_ParamLimits

0x7ca8,	// (0x00025d43) main_cset6_slider_pane_g4

0x7cb4,	// (0x00025d4f) main_cset6_slider_pane_g5_ParamLimits

0x7cb4,	// (0x00025d4f) main_cset6_slider_pane_g5

0xd447,	// (0x0002b4e2) main_cset6_slider_pane_g7_ParamLimits

0xd447,	// (0x0002b4e2) main_cset6_slider_pane_g7

0xd453,	// (0x0002b4ee) main_cset6_slider_pane_g8_ParamLimits

0xd453,	// (0x0002b4ee) main_cset6_slider_pane_g8

0x7cc2,	// (0x00025d5d) main_cset6_slider_pane_g9_ParamLimits

0x7cc2,	// (0x00025d5d) main_cset6_slider_pane_g9

0x7cce,	// (0x00025d69) main_cset6_slider_pane_g10_ParamLimits

0x7cce,	// (0x00025d69) main_cset6_slider_pane_g10

0x7cda,	// (0x00025d75) main_cset6_slider_pane_g11_ParamLimits

0x7cda,	// (0x00025d75) main_cset6_slider_pane_g11

0x7ce6,	// (0x00025d81) main_cset6_slider_pane_g12_ParamLimits

0x7ce6,	// (0x00025d81) main_cset6_slider_pane_g12

0x7cf2,	// (0x00025d8d) main_cset6_slider_pane_g13_ParamLimits

0x7cf2,	// (0x00025d8d) main_cset6_slider_pane_g13

0x7cfe,	// (0x00025d99) main_cset6_slider_pane_g14_ParamLimits

0x7cfe,	// (0x00025d99) main_cset6_slider_pane_g14

0x7d0a,	// (0x00025da5) main_cset6_slider_pane_g15_ParamLimits

0x7d0a,	// (0x00025da5) main_cset6_slider_pane_g15

0x7d22,	// (0x00025dbd) main_cset6_slider_pane_g16_ParamLimits

0x7d22,	// (0x00025dbd) main_cset6_slider_pane_g16

0x7d30,	// (0x00025dcb) main_cset6_slider_pane_g17_ParamLimits

0x7d30,	// (0x00025dcb) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0002dc2d) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0002dc2d) main_cset6_slider_pane_g

0xdccb,	// (0x0002bd66) main_cset6_slider_pane_t1_ParamLimits

0xdccb,	// (0x0002bd66) main_cset6_slider_pane_t1

0x7d56,	// (0x00025df1) main_cset6_slider_pane_t2_ParamLimits

0x7d56,	// (0x00025df1) main_cset6_slider_pane_t2

0x7d81,	// (0x00025e1c) main_cset6_slider_pane_t3_ParamLimits

0x7d81,	// (0x00025e1c) main_cset6_slider_pane_t3

0x7dac,	// (0x00025e47) main_cset6_slider_pane_t4_ParamLimits

0x7dac,	// (0x00025e47) main_cset6_slider_pane_t4

0x7dd7,	// (0x00025e72) main_cset6_slider_pane_t5_ParamLimits

0x7dd7,	// (0x00025e72) main_cset6_slider_pane_t5

0xdd0c,	// (0x0002bda7) main_cset6_slider_pane_t7_ParamLimits

0xdd0c,	// (0x0002bda7) main_cset6_slider_pane_t7

0x7e04,	// (0x00025e9f) main_cset6_slider_pane_t8_ParamLimits

0x7e04,	// (0x00025e9f) main_cset6_slider_pane_t8

0x7e28,	// (0x00025ec3) main_cset6_slider_pane_t9_ParamLimits

0x7e28,	// (0x00025ec3) main_cset6_slider_pane_t9

0x7e4c,	// (0x00025ee7) main_cset6_slider_pane_t10_ParamLimits

0x7e4c,	// (0x00025ee7) main_cset6_slider_pane_t10

0x7e70,	// (0x00025f0b) main_cset6_slider_pane_t11_ParamLimits

0x7e70,	// (0x00025f0b) main_cset6_slider_pane_t11

0xdd42,	// (0x0002bddd) main_cset6_slider_pane_t14_ParamLimits

0xdd42,	// (0x0002bddd) main_cset6_slider_pane_t14

0xdd7b,	// (0x0002be16) main_cset6_slider_pane_t15_ParamLimits

0xdd7b,	// (0x0002be16) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0002dc52) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0002dc52) main_cset6_slider_pane_t

0xd5ff,	// (0x0002b69a) cset_slider_pane_g1_copy1

0xd608,	// (0x0002b6a3) cset_slider_pane_g2_copy1

0xd611,	// (0x0002b6ac) cset_slider_pane_g3_copy1

0x9cf6,	// (0x00027d91) bg_popup_sub_pane_cp011_copy1

0xddb4,	// (0x0002be4f) main_cset_text_pane_g1_copy1

0xd5c7,	// (0x0002b662) main_cset_text_pane_t1_copy1

0xd5d5,	// (0x0002b670) main_cset_text_pane_t2_copy1

0xd5e3,	// (0x0002b67e) main_cset_text_pane_t3_copy1

0xd5f1,	// (0x0002b68c) main_cset_text_pane_t4_copy1

0xd61a,	// (0x0002b6b5) main_cset_text_pane_t5_copy1

0xddbc,	// (0x0002be57) main_cset_text_pane_t6_copy1

0xddca,	// (0x0002be65) main_cset_text_pane_t7_copy1

0x7f6c,	// (0x00026007) main_cset_text2_pane_t1_copy1

0x14d6,	// (0x0001f571) main_ncimui_pane

0x1535,	// (0x0001f5d0) popup_query_ncimui_window_ParamLimits

0x1535,	// (0x0001f5d0) popup_query_ncimui_window

0xcbc4,	// (0x0002ac5f) field_cale_ev2_pane_g4_ParamLimits

0xcbc4,	// (0x0002ac5f) field_cale_ev2_pane_g4

0x69a7,	// (0x00024a42) cell_video_dialer_keypad_pane_g2_ParamLimits

0x69a7,	// (0x00024a42) cell_video_dialer_keypad_pane_g2

0x0001,

0xf891,	// (0x0002d92c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf891,	// (0x0002d92c) cell_video_dialer_keypad_pane_g

0x69bf,	// (0x00024a5a) cell_video_dialer_keypad_pane_t1

0x9cf6,	// (0x00027d91) bg_popup_window_pane_cp012

0xad0f,	// (0x00028daa) heading_pane_cp06

0xddf6,	// (0x0002be91) ncim_query_content_pane

0x9cf6,	// (0x00027d91) bg_popup_heading_pane_cp01

0xddfe,	// (0x0002be99) ncim_heading_pane_t1

0xde0c,	// (0x0002bea7) ncim_indicator_popup_pane

0xde1e,	// (0x0002beb9) ncim_query_button_pane

0xde32,	// (0x0002becd) ncim_query_content_pane_t1

0xde44,	// (0x0002bedf) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0002dc96) ncim_query_content_pane_t

0xde7e,	// (0x0002bf19) ncim_query_list_pane

0xde90,	// (0x0002bf2b) ncim_query_popup_pane

0xde0c,	// (0x0002bea7) ncim_indicator_popup_pane_ParamLimits

0x80bf,	// (0x0002615a) ncim_query_content_pane_g1_ParamLimits

0x80bf,	// (0x0002615a) ncim_query_content_pane_g1

0xde32,	// (0x0002becd) ncim_query_content_pane_t1_ParamLimits

0xde44,	// (0x0002bedf) ncim_query_content_pane_t2_ParamLimits

0x80cb,	// (0x00026166) ncim_query_content_pane_t3_ParamLimits

0x80cb,	// (0x00026166) ncim_query_content_pane_t3

0x80e8,	// (0x00026183) ncim_query_content_pane_t4_ParamLimits

0x80e8,	// (0x00026183) ncim_query_content_pane_t4

0x8105,	// (0x000261a0) ncim_query_content_pane_t5_ParamLimits

0x8105,	// (0x000261a0) ncim_query_content_pane_t5

0xde56,	// (0x0002bef1) ncim_query_content_pane_t6_ParamLimits

0xde56,	// (0x0002bef1) ncim_query_content_pane_t6

0xfbfb,	// (0x0002dc96) ncim_query_content_pane_t_ParamLimits

0xde7e,	// (0x0002bf19) ncim_query_list_pane_ParamLimits

0xde90,	// (0x0002bf2b) ncim_query_popup_pane_ParamLimits

0xdea4,	// (0x0002bf3f) wait_bar_pane_cp04

0x9cf6,	// (0x00027d91) input_focus_pane_cp011

0xdeac,	// (0x0002bf47) ncim_query_popup_pane_t1

0xdeba,	// (0x0002bf55) ncim_list_query_list_pane_ParamLimits

0xdeba,	// (0x0002bf55) ncim_list_query_list_pane

0x9cf6,	// (0x00027d91) bg_button_pane_cp027

0xdec7,	// (0x0002bf62) ncim_query_button_pane_g1

0x9cf6,	// (0x00027d91) list_highlight_pane_cp012

0xded1,	// (0x0002bf6c) ncim_list_query_list_pane_g1

0xded9,	// (0x0002bf74) ncim_list_query_list_pane_t1

0x209f,	// (0x0002013a) cam4_indicators_pane_g3_ParamLimits

0x209f,	// (0x0002013a) cam4_indicators_pane_g3

0x21a6,	// (0x00020241) vid4_indicators_pane_g5_ParamLimits

0x21a6,	// (0x00020241) vid4_indicators_pane_g5

0x2695,	// (0x00020730) vid4_progress_pane_g5_ParamLimits

0x2695,	// (0x00020730) vid4_progress_pane_g5

0x7fab,	// (0x00026046) main_ncimui_pane_g1

0x8013,	// (0x000260ae) ncimui_group_query_pane_ParamLimits

0x8013,	// (0x000260ae) ncimui_group_query_pane

0x805b,	// (0x000260f6) ncimui_list_pane_ParamLimits

0x805b,	// (0x000260f6) ncimui_list_pane

0x8082,	// (0x0002611d) ncimui_text_pane_ParamLimits

0x8082,	// (0x0002611d) ncimui_text_pane

0x8122,	// (0x000261bd) ncimui_text_pane_t1_ParamLimits

0x8122,	// (0x000261bd) ncimui_text_pane_t1

0xdee7,	// (0x0002bf82) ncimui_list_single_graphic_pane_ParamLimits

0xdee7,	// (0x0002bf82) ncimui_list_single_graphic_pane

0x8141,	// (0x000261dc) ncimui_query_pane_ParamLimits

0x8141,	// (0x000261dc) ncimui_query_pane

0x9cf6,	// (0x00027d91) list_highlight_pane_cp013

0xdef7,	// (0x0002bf92) ncim_list_query_list_pane_t1_copy1

0xded1,	// (0x0002bf6c) ncim_list_single_graphic_pane_g1

0x8154,	// (0x000261ef) ncim_query_button_pane_cp01

0x8160,	// (0x000261fb) ncim_query_entry_pane_ParamLimits

0x8160,	// (0x000261fb) ncim_query_entry_pane

0x8173,	// (0x0002620e) ncimui_query_pane_g1

0x817f,	// (0x0002621a) ncimui_query_pane_t1_ParamLimits

0x817f,	// (0x0002621a) ncimui_query_pane_t1

0xa4d4,	// (0x0002856f) input_focus_pane_cp012

0xdf05,	// (0x0002bfa0) ncim_query_entry_pane_t1

0xa433,	// (0x000284ce) main_im_pane_ParamLimits

0x14d6,	// (0x0001f571) main_mobtv_pane_ParamLimits

0x14d6,	// (0x0001f571) main_mobtv_pane

0x7d3e,	// (0x00025dd9) main_cset6_slider_pane_g18_ParamLimits

0x7d3e,	// (0x00025dd9) main_cset6_slider_pane_g18

0x7d4a,	// (0x00025de5) main_cset6_slider_pane_g19_ParamLimits

0x7d4a,	// (0x00025de5) main_cset6_slider_pane_g19

0xd2bf,	// (0x0002b35a) bg_main_mobtv_pane_ParamLimits

0xd2bf,	// (0x0002b35a) bg_main_mobtv_pane

0x8198,	// (0x00026233) main_mobtv_info_pane

0x81a3,	// (0x0002623e) main_mobtv_loading_pane_ParamLimits

0x81a3,	// (0x0002623e) main_mobtv_loading_pane

0xdf17,	// (0x0002bfb2) main_mobtv_pg_channel_list_pane

0xdf21,	// (0x0002bfbc) main_mobtv_pg_hdr_pane

0x81b0,	// (0x0002624b) main_mobtv_programe_curr_pane_ParamLimits

0x81b0,	// (0x0002624b) main_mobtv_programe_curr_pane

0x81bd,	// (0x00026258) main_mobtv_programe_next_pane_ParamLimits

0x81bd,	// (0x00026258) main_mobtv_programe_next_pane

0xdf2a,	// (0x0002bfc5) popup_mobtv_noti_window

0xc8fc,	// (0x0002a997) main_tv_pg_hdr_pane_g1

0xdf32,	// (0x0002bfcd) main_tv_pg_hdr_pane_g2

0xdf3a,	// (0x0002bfd5) main_tv_pg_hdr_pane_g3

0xdf42,	// (0x0002bfdd) main_tv_pg_hdr_pane_g4

0xdf4a,	// (0x0002bfe5) main_tv_pg_hdr_pane_g5

0xdf54,	// (0x0002bfef) main_tv_pg_hdr_pane_g6

0xdf5e,	// (0x0002bff9) main_tv_pg_hdr_pane_g7

0xdf68,	// (0x0002c003) main_tv_pg_hdr_pane_g8

0xdf72,	// (0x0002c00d) main_tv_pg_hdr_pane_g9

0xdf7c,	// (0x0002c017) main_tv_pg_hdr_pane_g10

0xdf86,	// (0x0002c021) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0002dca3) main_tv_pg_hdr_pane_g

0xdf90,	// (0x0002c02b) main_tv_pg_hdr_pane_t1

0xdf9e,	// (0x0002c039) main_tv_pg_hdr_pane_t2

0xdfac,	// (0x0002c047) main_tv_pg_hdr_pane_t3

0xdfbc,	// (0x0002c057) main_tv_pg_hdr_pane_t4

0xdfcc,	// (0x0002c067) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0002dcba) main_tv_pg_hdr_pane_t

0xdfdc,	// (0x0002c077) single_mobtv_pg_channel_pane_ParamLimits

0xdfdc,	// (0x0002c077) single_mobtv_pg_channel_pane

0xdfee,	// (0x0002c089) single_mobtv_pg_channel_table_pane

0xdff7,	// (0x0002c092) single_mobtv_pg_channel_thumb_pane

0xe000,	// (0x0002c09b) single_tv_pg_channel_pane_g1

0xe009,	// (0x0002c0a4) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0002dcc5) single_tv_pg_channel_pane_g

0xcb5f,	// (0x0002abfa) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcb5f,	// (0x0002abfa) bg_single_mobtv_pg_channel_thumb_pane

0xe012,	// (0x0002c0ad) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe012,	// (0x0002c0ad) single_mobtv_pg_channel_thumb_pane_g1

0xe020,	// (0x0002c0bb) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe020,	// (0x0002c0bb) single_mobtv_pg_channel_thumb_pane_g2

0xe02c,	// (0x0002c0c7) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe02c,	// (0x0002c0c7) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0002dcca) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0002dcca) single_mobtv_pg_channel_thumb_pane_g

0xe038,	// (0x0002c0d3) single_mobtv_pg_channel_thumb_pane_t1

0xe046,	// (0x0002c0e1) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0002dcd1) single_mobtv_pg_channel_thumb_pane_t

0xc8fc,	// (0x0002a997) bg_single_mobtv_pg_channel_table_pane_g1

0xc8fc,	// (0x0002a997) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d8,	// (0x0002d773) bg_single_mobtv_pg_channel_table_pane_g

0xe054,	// (0x0002c0ef) single_mobtv_pg_channel_table_pane_t1

0xe062,	// (0x0002c0fd) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0002dcd6) single_mobtv_pg_channel_table_pane_t

0x81d2,	// (0x0002626d) main_mobtv_info_pane_g1_ParamLimits

0x81d2,	// (0x0002626d) main_mobtv_info_pane_g1

0x81ee,	// (0x00026289) main_mobtv_info_pane_t1_ParamLimits

0x81ee,	// (0x00026289) main_mobtv_info_pane_t1

0x8266,	// (0x00026301) main_mobtv_info_pane_t2_ParamLimits

0x8266,	// (0x00026301) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0002dce0) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0002dce0) main_mobtv_info_pane_t

0x82f5,	// (0x00026390) wait_bar_pane_cp05

0x8307,	// (0x000263a2) main_mobtv_loading_pane_g1_ParamLimits

0x8307,	// (0x000263a2) main_mobtv_loading_pane_g1

0x8315,	// (0x000263b0) main_mobtv_loading_pane_g2_ParamLimits

0x8315,	// (0x000263b0) main_mobtv_loading_pane_g2

0x8321,	// (0x000263bc) main_mobtv_loading_pane_g3_ParamLimits

0x8321,	// (0x000263bc) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0002dce7) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0002dce7) main_mobtv_loading_pane_g

0xe070,	// (0x0002c10b) main_mobtv_loading_pane_t1_ParamLimits

0xe070,	// (0x0002c10b) main_mobtv_loading_pane_t1

0xe088,	// (0x0002c123) main_mobtv_loading_pane_t2_ParamLimits

0xe088,	// (0x0002c123) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0002dcee) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0002dcee) main_mobtv_loading_pane_t

0x832f,	// (0x000263ca) wait_bar_pane_cp06_ParamLimits

0x832f,	// (0x000263ca) wait_bar_pane_cp06

0xe0ac,	// (0x0002c147) main_mobtv_programe_curr_pane_t1

0xe0ba,	// (0x0002c155) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0002dcf3) main_mobtv_programe_curr_pane_t

0xe0c8,	// (0x0002c163) main_mobtv_programe_next_pane_t1

0xe0d6,	// (0x0002c171) main_mobtv_programe_next_pane_t2

0xe0e4,	// (0x0002c17f) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0002dcf8) main_mobtv_programe_next_pane_t

0x9cf6,	// (0x00027d91) bg_popup_mobtv_noti_window_pane

0xe0f2,	// (0x0002c18d) popup_mobtv_noti_window_g1

0xe0fa,	// (0x0002c195) popup_mobtv_noti_window_t1

0xe108,	// (0x0002c1a3) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0002dcff) popup_mobtv_noti_window_t

0xc8fc,	// (0x0002a997) bg_popup_mobtv_noti_window_pane_g1

0x107e,	// (0x0001f119) sc_clock_pane

0x107e,	// (0x0001f119) main_fs_bigclock_pane

0x795c,	// (0x000259f7) blid2_tripm_pane_t4_ParamLimits

0x795c,	// (0x000259f7) blid2_tripm_pane_t4

0x833b,	// (0x000263d6) sc_clock_pane_g1_ParamLimits

0x833b,	// (0x000263d6) sc_clock_pane_g1

0x8349,	// (0x000263e4) sc_clock_pane_t1_ParamLimits

0x8349,	// (0x000263e4) sc_clock_pane_t1

0x835c,	// (0x000263f7) sc_clock_pane_t2_ParamLimits

0x835c,	// (0x000263f7) sc_clock_pane_t2

0x836e,	// (0x00026409) sc_clock_pane_t3_ParamLimits

0x836e,	// (0x00026409) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0002dd04) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0002dd04) sc_clock_pane_t

0x929f,	// (0x0002733a) main_fs_bigclock_indicator_pane_ParamLimits

0x929f,	// (0x0002733a) main_fs_bigclock_indicator_pane

0x83f1,	// (0x0002648c) main_fs_bigclock_pane_g1_ParamLimits

0x83f1,	// (0x0002648c) main_fs_bigclock_pane_g1

0x92ab,	// (0x00027346) main_fs_bigclock_pane_t1_ParamLimits

0x92ab,	// (0x00027346) main_fs_bigclock_pane_t1

0x92bd,	// (0x00027358) main_fs_bigclock_pane_t2_ParamLimits

0x92bd,	// (0x00027358) main_fs_bigclock_pane_t2

0x92d1,	// (0x0002736c) main_fs_bigclock_pane_t3_ParamLimits

0x92d1,	// (0x0002736c) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0002df09) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0002df09) main_fs_bigclock_pane_t

0xec9b,	// (0x0002cd36) main_fs_bigclock_indicator_pane_g1

0xde26,	// (0x0002bec1) ncim_query_content_pane_g2_ParamLimits

0xde26,	// (0x0002bec1) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0002dc91) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0002dc91) ncim_query_content_pane_g

0x8382,	// (0x0002641d) sc_clock_pane_t4_ParamLimits

0x8382,	// (0x0002641d) sc_clock_pane_t4

0x14d6,	// (0x0001f571) main_radioblah_pane

0x1f58,	// (0x0001fff3) cell_call4_button_pane_t1_copy1_ParamLimits

0x1f58,	// (0x0001fff3) cell_call4_button_pane_t1_copy1

0x7fc5,	// (0x00026060) main_ncimui_pane_t1_ParamLimits

0x7fc5,	// (0x00026060) main_ncimui_pane_t1

0x7fdf,	// (0x0002607a) main_ncimui_pane_t2_ParamLimits

0x7fdf,	// (0x0002607a) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0002dc8a) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0002dc8a) main_ncimui_pane_t

0xe24d,	// (0x0002c2e8) main_radioblah_anim_pane_ParamLimits

0xe24d,	// (0x0002c2e8) main_radioblah_anim_pane

0xe25e,	// (0x0002c2f9) main_radioblah_info_pane_ParamLimits

0xe25e,	// (0x0002c2f9) main_radioblah_info_pane

0xe272,	// (0x0002c30d) main_radioblah_pane_t1_ParamLimits

0xe272,	// (0x0002c30d) main_radioblah_pane_t1

0xe28e,	// (0x0002c329) main_radioblah_pane_t2_ParamLimits

0xe28e,	// (0x0002c329) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0002dd25) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0002dd25) main_radioblah_pane_t

0x8447,	// (0x000264e2) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8447,	// (0x000264e2) main_radioblah_rocker_ctrl_pane

0xe2d6,	// (0x0002c371) main_radioblah_info_pane_t1_ParamLimits

0xe2d6,	// (0x0002c371) main_radioblah_info_pane_t1

0x848c,	// (0x00026527) main_radioblah_info_pane_t2_ParamLimits

0x848c,	// (0x00026527) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0002dd2e) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0002dd2e) main_radioblah_info_pane_t

0xc8fc,	// (0x0002a997) main_radioblah_rocker_ctrl_pane_g1

0x853c,	// (0x000265d7) main_radioblah_rocker_ctrl_pane_g2

0x8544,	// (0x000265df) main_radioblah_rocker_ctrl_pane_g3

0x854c,	// (0x000265e7) main_radioblah_rocker_ctrl_pane_g4

0x8554,	// (0x000265ef) main_radioblah_rocker_ctrl_pane_g5

0x855c,	// (0x000265f7) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0002dd37) main_radioblah_rocker_ctrl_pane_g

0x7f6c,	// (0x00026007) main_cset_text2_pane_t1_copy1_ParamLimits

0x1fe3,	// (0x0002007e) cam4_image_uncrop_qvga_pane

0x2114,	// (0x000201af) vid4_image_uncrop_qcif_pane

0x2735,	// (0x000207d0) cam6_image_uncrop_qvga_pane_ParamLimits

0x2735,	// (0x000207d0) cam6_image_uncrop_qvga_pane

0xdb2d,	// (0x0002bbc8) vid6_image_uncrop_qcif_pane_ParamLimits

0xdb2d,	// (0x0002bbc8) vid6_image_uncrop_qcif_pane

0x9cf6,	// (0x00027d91) bg_popup_preview_window_pane_cp03

0xddd8,	// (0x0002be73) list_cset_text2_pane

0xdde0,	// (0x0002be7b) main_cset6_text2_pane_g1

0xdde8,	// (0x0002be83) main_cset6_text2_pane_t1

0x8564,	// (0x000265ff) list_cset_text2_pane_t1_ParamLimits

0x8564,	// (0x000265ff) list_cset_text2_pane_t1

0x14d6,	// (0x0001f571) main_radioblah_pane_ParamLimits

0x82e1,	// (0x0002637c) main_mobtv_info_pane_t3_ParamLimits

0x82e1,	// (0x0002637c) main_mobtv_info_pane_t3

0x8435,	// (0x000264d0) main_radioblah_pane_g1

0x8460,	// (0x000264fb) main_radioblah_info_pane_g1

0x84e1,	// (0x0002657c) main_radioblah_info_pane_t3_ParamLimits

0x84e1,	// (0x0002657c) main_radioblah_info_pane_t3

0x4473,	// (0x0002250e) highlight_cell_cale_month_pane_ParamLimits

0x4473,	// (0x0002250e) highlight_cell_cale_month_pane

0x107e,	// (0x0001f119) main_phob_fisheye_pane

0xcc67,	// (0x0002ad02) scroll_pane_cp0031_ParamLimits

0xcc67,	// (0x0002ad02) scroll_pane_cp0031

0xdc3b,	// (0x0002bcd6) wait_bar_pane_cp08_ParamLimits

0x7c55,	// (0x00025cf0) cset_list_set_pane_copy1_ParamLimits

0xe319,	// (0x0002c3b4) highlight_cell_cale_month_pane_g1

0x8581,	// (0x0002661c) highlight_cell_cale_month_pane_t1

0xd8aa,	// (0x0002b945) list_gen_pane_cp01

0xd432,	// (0x0002b4cd) scroll_pane_01

0x858f,	// (0x0002662a) list_single_double_fisheye_pane

0x8598,	// (0x00026633) list_double_fisheye_pane_g1_ParamLimits

0x8598,	// (0x00026633) list_double_fisheye_pane_g1

0x85a4,	// (0x0002663f) list_double_fisheye_pane_g2_ParamLimits

0x85a4,	// (0x0002663f) list_double_fisheye_pane_g2

0x85b8,	// (0x00026653) list_double_fisheye_pane_g3_ParamLimits

0x85b8,	// (0x00026653) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0002dd44) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0002dd44) list_double_fisheye_pane_g

0x85e1,	// (0x0002667c) list_double_fisheye_pane_t1_ParamLimits

0x85e1,	// (0x0002667c) list_double_fisheye_pane_t1

0x85fc,	// (0x00026697) list_double_fisheye_pane_t2_ParamLimits

0x85fc,	// (0x00026697) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0002dd4f) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0002dd4f) list_double_fisheye_pane_t

0x107e,	// (0x0001f119) main_call5_pane

0x83a8,	// (0x00026443) sc_swipe_pane_ParamLimits

0x83a8,	// (0x00026443) sc_swipe_pane

0x862a,	// (0x000266c5) call5_image_pane_ParamLimits

0x862a,	// (0x000266c5) call5_image_pane

0x863a,	// (0x000266d5) call5_swipe_1_pane_ParamLimits

0x863a,	// (0x000266d5) call5_swipe_1_pane

0x8646,	// (0x000266e1) call5_swipe_2_pane_ParamLimits

0x8646,	// (0x000266e1) call5_swipe_2_pane

0x8660,	// (0x000266fb) popup_call5_audio_first_window_ParamLimits

0x8660,	// (0x000266fb) popup_call5_audio_first_window

0xcb5f,	// (0x0002abfa) call5_swipe_1_pane_g1_ParamLimits

0xcb5f,	// (0x0002abfa) call5_swipe_1_pane_g1

0xe321,	// (0x0002c3bc) call5_swipe_1_pane_g2_ParamLimits

0xe321,	// (0x0002c3bc) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0002dd54) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0002dd54) call5_swipe_1_pane_g

0xe32d,	// (0x0002c3c8) call5_swipe_1_pane_t1_ParamLimits

0xe32d,	// (0x0002c3c8) call5_swipe_1_pane_t1

0xcb5f,	// (0x0002abfa) call5_swipe_2_pane_g1_ParamLimits

0xcb5f,	// (0x0002abfa) call5_swipe_2_pane_g1

0xe342,	// (0x0002c3dd) call5_swipe_2_pane_g2_ParamLimits

0xe342,	// (0x0002c3dd) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0002dd59) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0002dd59) call5_swipe_2_pane_g

0xe34e,	// (0x0002c3e9) call5_swipe_2_pane_t1_ParamLimits

0xe34e,	// (0x0002c3e9) call5_swipe_2_pane_t1

0xe363,	// (0x0002c3fe) sc_swipe_pane_g1_ParamLimits

0xe363,	// (0x0002c3fe) sc_swipe_pane_g1

0xe370,	// (0x0002c40b) sc_swipe_pane_g2_ParamLimits

0xe370,	// (0x0002c40b) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0002dd5e) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0002dd5e) sc_swipe_pane_g

0xe37c,	// (0x0002c417) sc_swipe_pane_t1_ParamLimits

0xe37c,	// (0x0002c417) sc_swipe_pane_t1

0x107e,	// (0x0001f119) main_cmail_launcher_pane

0x866e,	// (0x00026709) aid_size_cell_cmail_l_ParamLimits

0x866e,	// (0x00026709) aid_size_cell_cmail_l

0x867c,	// (0x00026717) grid_cmail_l_pane_ParamLimits

0x867c,	// (0x00026717) grid_cmail_l_pane

0x868c,	// (0x00026727) cell_cmail_l_pane_ParamLimits

0x868c,	// (0x00026727) cell_cmail_l_pane

0xe391,	// (0x0002c42c) cell_cmail_l_pane_g1_ParamLimits

0xe391,	// (0x0002c42c) cell_cmail_l_pane_g1

0xe39d,	// (0x0002c438) cell_cmail_l_pane_t1_ParamLimits

0xe39d,	// (0x0002c438) cell_cmail_l_pane_t1

0xe3b3,	// (0x0002c44e) cell_cmail_l_pane_t2_ParamLimits

0xe3b3,	// (0x0002c44e) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0002dd63) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0002dd63) cell_cmail_l_pane_t

0xa4d4,	// (0x0002856f) grid_highlight_pane_cp018_ParamLimits

0xa4d4,	// (0x0002856f) grid_highlight_pane_cp018

0x0ee0,	// (0x0001ef7b) main2_pane_ParamLimits

0x0ee0,	// (0x0001ef7b) main2_pane

0xa4cc,	// (0x00028567) popup_sp_fs_action_menu_bg_pane_g1

0xa4eb,	// (0x00028586) popup_sp_fs_action_menu_bg_pane_g2

0xa4f3,	// (0x0002858e) popup_sp_fs_action_menu_bg_pane_g3

0xa4fb,	// (0x00028596) popup_sp_fs_action_menu_bg_pane_g4

0xa503,	// (0x0002859e) popup_sp_fs_action_menu_bg_pane_g5

0xa50b,	// (0x000285a6) popup_sp_fs_action_menu_bg_pane_g6

0xa513,	// (0x000285ae) popup_sp_fs_action_menu_bg_pane_g7

0xa51b,	// (0x000285b6) popup_sp_fs_action_menu_bg_pane_g8

0xa523,	// (0x000285be) popup_sp_fs_action_menu_bg_pane_g9

0xa52b,	// (0x000285c6) popup_sp_fs_action_menu_bg_pane_g10

0xa52b,	// (0x000285c6) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0002d221) popup_sp_fs_action_menu_bg_pane_g

0x3288,	// (0x00021323) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3288,	// (0x00021323) list_medium_line_x2_t3_g3_g1

0x3294,	// (0x0002132f) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3294,	// (0x0002132f) list_medium_line_x2_t3_g3_g2

0x32a0,	// (0x0002133b) list_medium_line_x2_t3_g3_g3_ParamLimits

0x32a0,	// (0x0002133b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0002d2cf) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0002d2cf) list_medium_line_x2_t3_g3_g

0x32ac,	// (0x00021347) list_medium_line_x2_t3_g3_t1_ParamLimits

0x32ac,	// (0x00021347) list_medium_line_x2_t3_g3_t1

0x32c1,	// (0x0002135c) list_medium_line_x2_t3_g3_t2_ParamLimits

0x32c1,	// (0x0002135c) list_medium_line_x2_t3_g3_t2

0x32d3,	// (0x0002136e) list_medium_line_x2_t3_g3_t3_ParamLimits

0x32d3,	// (0x0002136e) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0002d2d6) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0002d2d6) list_medium_line_x2_t3_g3_t

0x3288,	// (0x00021323) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3288,	// (0x00021323) list_medium_line_x2_t3_g2_g1

0x32a0,	// (0x0002133b) list_medium_line_x2_t3_g2_g2_ParamLimits

0x32a0,	// (0x0002133b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0002d2dd) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0002d2dd) list_medium_line_x2_t3_g2_g

0x32e8,	// (0x00021383) list_medium_line_x2_t3_g2_t1_ParamLimits

0x32e8,	// (0x00021383) list_medium_line_x2_t3_g2_t1

0x32fe,	// (0x00021399) list_medium_line_x2_t3_g2_t2_ParamLimits

0x32fe,	// (0x00021399) list_medium_line_x2_t3_g2_t2

0x3310,	// (0x000213ab) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3310,	// (0x000213ab) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0002d2e2) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0002d2e2) list_medium_line_x2_t3_g2_t

0x3288,	// (0x00021323) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3288,	// (0x00021323) list_medium_line_x2_t4_g4_g1

0x332d,	// (0x000213c8) list_medium_line_x2_t4_g4_g2_ParamLimits

0x332d,	// (0x000213c8) list_medium_line_x2_t4_g4_g2

0x3294,	// (0x0002132f) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3294,	// (0x0002132f) list_medium_line_x2_t4_g4_g3

0x3339,	// (0x000213d4) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3339,	// (0x000213d4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0002d2e9) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0002d2e9) list_medium_line_x2_t4_g4_g

0x3345,	// (0x000213e0) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3345,	// (0x000213e0) list_medium_line_x2_t4_g4_t1

0x335f,	// (0x000213fa) list_medium_line_x2_t4_g4_t2_ParamLimits

0x335f,	// (0x000213fa) list_medium_line_x2_t4_g4_t2

0x3375,	// (0x00021410) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3375,	// (0x00021410) list_medium_line_x2_t4_g4_t3

0x338a,	// (0x00021425) list_medium_line_x2_t4_g4_t4_ParamLimits

0x338a,	// (0x00021425) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0002d2f2) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0002d2f2) list_medium_line_x2_t4_g4_t

0x3288,	// (0x00021323) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3288,	// (0x00021323) list_medium_line_x2_t2_g4_g1

0x332d,	// (0x000213c8) list_medium_line_x2_t2_g4_g2_ParamLimits

0x332d,	// (0x000213c8) list_medium_line_x2_t2_g4_g2

0x3294,	// (0x0002132f) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3294,	// (0x0002132f) list_medium_line_x2_t2_g4_g3

0x32a0,	// (0x0002133b) list_medium_line_x2_t2_g4_g4_ParamLimits

0x32a0,	// (0x0002133b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0002d359) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0002d359) list_medium_line_x2_t2_g4_g

0x4499,	// (0x00022534) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4499,	// (0x00022534) list_medium_line_x2_t2_g4_t1

0x32d3,	// (0x0002136e) list_medium_line_x2_t2_g4_t2_ParamLimits

0x32d3,	// (0x0002136e) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0002d362) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0002d362) list_medium_line_x2_t2_g4_t

0x3288,	// (0x00021323) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3288,	// (0x00021323) list_medium_line_x2_t2_g3_g1

0x3294,	// (0x0002132f) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3294,	// (0x0002132f) list_medium_line_x2_t2_g3_g2

0x32a0,	// (0x0002133b) list_medium_line_x2_t2_g3_g3_ParamLimits

0x32a0,	// (0x0002133b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x0002d2cf) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x0002d2cf) list_medium_line_x2_t2_g3_g

0x44ae,	// (0x00022549) list_medium_line_x2_t2_g3_t1_ParamLimits

0x44ae,	// (0x00022549) list_medium_line_x2_t2_g3_t1

0x32d3,	// (0x0002136e) list_medium_line_x2_t2_g3_t2_ParamLimits

0x32d3,	// (0x0002136e) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0002d367) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0002d367) list_medium_line_x2_t2_g3_t

0x461b,	// (0x000226b6) main_sp_fs_list_pane_ParamLimits

0x461b,	// (0x000226b6) main_sp_fs_list_pane

0x4627,	// (0x000226c2) sp_fs_scroll_pane_ParamLimits

0x4627,	// (0x000226c2) sp_fs_scroll_pane

0x4633,	// (0x000226ce) list_medium_line_x2_t3_t1

0x4643,	// (0x000226de) list_medium_line_x2_t3_t2

0x4651,	// (0x000226ec) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x0002d3b2) list_medium_line_x2_t3_t

0x465f,	// (0x000226fa) list_medium_line_x3_t4_t1

0x466f,	// (0x0002270a) list_medium_line_x3_t4_t2

0x467d,	// (0x00022718) list_medium_line_x3_t4_t3

0x4651,	// (0x000226ec) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x0002d3b9) list_medium_line_x3_t4_t

0x468b,	// (0x00022726) list_medium_line_x4_t5_t1

0x469b,	// (0x00022736) list_medium_line_x4_t5_t2

0x467d,	// (0x00022718) list_medium_line_x4_t5_t3

0x46a9,	// (0x00022744) list_medium_line_x4_t5_t4

0x4651,	// (0x000226ec) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x0002d3c2) list_medium_line_x4_t5_t

0x3288,	// (0x00021323) list_medium_line_t4_g4_g1_ParamLimits

0x3288,	// (0x00021323) list_medium_line_t4_g4_g1

0x46b7,	// (0x00022752) list_medium_line_t4_g4_g2_ParamLimits

0x46b7,	// (0x00022752) list_medium_line_t4_g4_g2

0x46c3,	// (0x0002275e) list_medium_line_t4_g4_g3_ParamLimits

0x46c3,	// (0x0002275e) list_medium_line_t4_g4_g3

0x32a0,	// (0x0002133b) list_medium_line_t4_g4_g4_ParamLimits

0x32a0,	// (0x0002133b) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x0002d3cd) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x0002d3cd) list_medium_line_t4_g4_g

0x46cf,	// (0x0002276a) list_medium_line_t4_g4_t1_ParamLimits

0x46cf,	// (0x0002276a) list_medium_line_t4_g4_t1

0x46e4,	// (0x0002277f) list_medium_line_t4_g4_t2_ParamLimits

0x46e4,	// (0x0002277f) list_medium_line_t4_g4_t2

0x46f9,	// (0x00022794) list_medium_line_t4_g4_t3_ParamLimits

0x46f9,	// (0x00022794) list_medium_line_t4_g4_t3

0x32d3,	// (0x0002136e) list_medium_line_t4_g4_t4_ParamLimits

0x32d3,	// (0x0002136e) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x0002d3d6) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x0002d3d6) list_medium_line_t4_g4_t

0x479c,	// (0x00022837) chi_dic_find_pane_g1

0x14f2,	// (0x0001f58d) main_tport_pane

0x71d7,	// (0x00025272) list_medium_line_plain_t1

0x71fd,	// (0x00025298) list_medium_line_t2_g2_g1_ParamLimits

0x71fd,	// (0x00025298) list_medium_line_t2_g2_g1

0x7209,	// (0x000252a4) list_medium_line_t2_g2_g2_ParamLimits

0x7209,	// (0x000252a4) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0002da9b) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0002da9b) list_medium_line_t2_g2_g

0x7215,	// (0x000252b0) list_medium_line_t2_g2_t1_ParamLimits

0x7215,	// (0x000252b0) list_medium_line_t2_g2_t1

0x722f,	// (0x000252ca) list_medium_line_t2_g2_t2_ParamLimits

0x722f,	// (0x000252ca) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0002daa0) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0002daa0) list_medium_line_t2_g2_t

0xd8b3,	// (0x0002b94e) aid_sp_fs_list_icon_a_sm

0xd8bb,	// (0x0002b956) aid_sp_fs_list_icon_d

0xd8c3,	// (0x0002b95e) aid_sp_fs_text_primary

0xd8cc,	// (0x0002b967) aid_sp_fs_text_secondary

0x77a7,	// (0x00025842) list_medium_line

0x77a7,	// (0x00025842) list_medium_line_g2

0x77a7,	// (0x00025842) list_medium_line_g3

0x77a7,	// (0x00025842) list_medium_line_plain

0x77a7,	// (0x00025842) list_medium_line_plain_t2

0x77a7,	// (0x00025842) list_medium_line_plain_t3

0x77a7,	// (0x00025842) list_medium_line_right_icon

0x77a7,	// (0x00025842) list_medium_line_right_iconx2

0x77a7,	// (0x00025842) list_medium_line_t2

0x77a7,	// (0x00025842) list_medium_line_t2_g2

0x77a7,	// (0x00025842) list_medium_line_t2_g3

0x77a7,	// (0x00025842) list_medium_line_t2_right_icon

0x77a7,	// (0x00025842) list_medium_line_t2_right_iconx2

0x77a7,	// (0x00025842) list_medium_line_t3

0x77a7,	// (0x00025842) list_medium_line_t3_g2

0x77a7,	// (0x00025842) list_medium_line_t3_g3

0x77a7,	// (0x00025842) list_medium_line_t3_right_iconx2

0x77b0,	// (0x0002584b) list_medium_line_t4_g4

0xe310,	// (0x0002c3ab) list_medium_line_x2

0xe310,	// (0x0002c3ab) list_medium_line_x2_t2_g2

0xe310,	// (0x0002c3ab) list_medium_line_x2_t2_g3

0xe310,	// (0x0002c3ab) list_medium_line_x2_t2_g4

0xe310,	// (0x0002c3ab) list_medium_line_x2_t3

0xe310,	// (0x0002c3ab) list_medium_line_x2_t3_g2

0xe310,	// (0x0002c3ab) list_medium_line_x2_t3_g3

0xe310,	// (0x0002c3ab) list_medium_line_x2_t3_g4

0xe310,	// (0x0002c3ab) list_medium_line_x2_t4_g2

0xe310,	// (0x0002c3ab) list_medium_line_x2_t4_g4

0x77b9,	// (0x00025854) list_medium_line_x3

0x77b9,	// (0x00025854) list_medium_line_x3_t4

0x77b9,	// (0x00025854) list_medium_line_x3_t4_g4

0x77b0,	// (0x0002584b) list_medium_line_x4_t4

0x77b0,	// (0x0002584b) list_medium_line_x4_t4_g7

0x77b0,	// (0x0002584b) list_medium_line_x4_t5

0x77c2,	// (0x0002585d) list_single_fs_dyc_pane_ParamLimits

0x77c2,	// (0x0002585d) list_single_fs_dyc_pane

0x3288,	// (0x00021323) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3288,	// (0x00021323) list_medium_line_x4_t4_g7_g1

0x7e94,	// (0x00025f2f) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7e94,	// (0x00025f2f) list_medium_line_x4_t4_g7_g2

0x7ea0,	// (0x00025f3b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7ea0,	// (0x00025f3b) list_medium_line_x4_t4_g7_g3

0x7eaf,	// (0x00025f4a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7eaf,	// (0x00025f4a) list_medium_line_x4_t4_g7_g4

0x7ebb,	// (0x00025f56) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7ebb,	// (0x00025f56) list_medium_line_x4_t4_g7_g5

0x7eca,	// (0x00025f65) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7eca,	// (0x00025f65) list_medium_line_x4_t4_g7_g6

0x7ed9,	// (0x00025f74) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7ed9,	// (0x00025f74) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0002dc6b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0002dc6b) list_medium_line_x4_t4_g7_g

0x7ee5,	// (0x00025f80) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7ee5,	// (0x00025f80) list_medium_line_x4_t4_g7_t1

0x7efa,	// (0x00025f95) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7efa,	// (0x00025f95) list_medium_line_x4_t4_g7_t2

0x7f0f,	// (0x00025faa) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7f0f,	// (0x00025faa) list_medium_line_x4_t4_g7_t3

0x7f24,	// (0x00025fbf) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7f24,	// (0x00025fbf) list_medium_line_x4_t4_g7_t4

0x7f36,	// (0x00025fd1) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7f36,	// (0x00025fd1) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0002dc7a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0002dc7a) list_medium_line_x4_t4_g7_t

0x7f48,	// (0x00025fe3) list_single_dyc_row_pane_ParamLimits

0x7f48,	// (0x00025fe3) list_single_dyc_row_pane

0x861e,	// (0x000266b9) call5_gesture_pane_ParamLimits

0x861e,	// (0x000266b9) call5_gesture_pane

0x8652,	// (0x000266ed) call5_windows_pane_ParamLimits

0x8652,	// (0x000266ed) call5_windows_pane

0x86a5,	// (0x00026740) call5_swipe_1_pane_cp_ParamLimits

0x86a5,	// (0x00026740) call5_swipe_1_pane_cp

0x86b1,	// (0x0002674c) call5_swipe_2_pane_cp_ParamLimits

0x86b1,	// (0x0002674c) call5_swipe_2_pane_cp

0xa60f,	// (0x000286aa) call5_image_pane_cp

0x86bd,	// (0x00026758) popup_call5_audio_first_window_cp_ParamLimits

0x86bd,	// (0x00026758) popup_call5_audio_first_window_cp

0xe363,	// (0x0002c3fe) call5_swipe_1_pane_g1_cp_ParamLimits

0xe363,	// (0x0002c3fe) call5_swipe_1_pane_g1_cp

0xe3d0,	// (0x0002c46b) call5_swipe_1_pane_g2_cp

0xe37c,	// (0x0002c417) call5_swipe_1_pane_t1_cp_ParamLimits

0xe37c,	// (0x0002c417) call5_swipe_1_pane_t1_cp

0xe363,	// (0x0002c3fe) call5_swipe_2_pane_g1_cp_ParamLimits

0xe363,	// (0x0002c3fe) call5_swipe_2_pane_g1_cp

0xe3d8,	// (0x0002c473) call5_swipe_2_pane_g2_cp

0xe3e0,	// (0x0002c47b) call5_swipe_2_pane_t1_cp_ParamLimits

0xe3e0,	// (0x0002c47b) call5_swipe_2_pane_t1_cp

0xa4d4,	// (0x0002856f) main_sp_fs_email_pane

0xe3f5,	// (0x0002c490) main_sp_fs_listscroll_pane_te

0x86cb,	// (0x00026766) popup_sp_fs_action_menu_pane_ParamLimits

0x86cb,	// (0x00026766) popup_sp_fs_action_menu_pane

0xc8fc,	// (0x0002a997) bg_sp_fs_ctrlbar_pane_g1

0xe3fe,	// (0x0002c499) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe407,	// (0x0002c4a2) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe410,	// (0x0002c4ab) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc8fc,	// (0x0002a997) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0002dd68) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc6e1,	// (0x0002a77c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc6e1,	// (0x0002a77c) bg_sp_fs_ctrlbar_ddmenu_pane

0xe419,	// (0x0002c4b4) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe419,	// (0x0002c4b4) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe425,	// (0x0002c4c0) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe425,	// (0x0002c4c0) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0002dd71) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0002dd71) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe431,	// (0x0002c4cc) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe431,	// (0x0002c4cc) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x870f,	// (0x000267aa) list_medium_line_t2_right_icon_g1

0x8717,	// (0x000267b2) list_medium_line_t2_right_icon_t1

0x8727,	// (0x000267c2) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0002dd76) list_medium_line_t2_right_icon_t

0xc4f4,	// (0x0002a58f) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc4f4,	// (0x0002a58f) bg_sp_fs_ctrlbar_pane

0x878c,	// (0x00026827) main_sp_fs_ctrlbar_button_pane_cp01

0x8794,	// (0x0002682f) main_sp_fs_ctrlbar_ddmenu_pane

0xe483,	// (0x0002c51e) main_sp_fs_ctrlbar_pane_g1

0xe48f,	// (0x0002c52a) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0002dd7b) main_sp_fs_ctrlbar_pane_g

0xe49b,	// (0x0002c536) main_sp_fs_ctrlbar_pane_t1

0x879e,	// (0x00026839) main_sp_fs_ctrlbar_pane

0x87b4,	// (0x0002684f) main_sp_fs_listscroll_pane_te_cp01

0x87c5,	// (0x00026860) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x87c5,	// (0x00026860) popup_sp_fs_action_menu_pane_cp01

0xa4d4,	// (0x0002856f) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa4d4,	// (0x0002856f) bg_sp_fs_highlight_list_pane_cp01

0xe4cb,	// (0x0002c566) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe4cb,	// (0x0002c566) sp_fs_action_menu_list_gene_pane_g1

0xe4da,	// (0x0002c575) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe4da,	// (0x0002c575) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0002dd85) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0002dd85) sp_fs_action_menu_list_gene_pane_g

0xe4e7,	// (0x0002c582) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe4e7,	// (0x0002c582) sp_fs_action_menu_list_gene_pane_t1

0xe4ff,	// (0x0002c59a) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4ff,	// (0x0002c59a) sp_fs_action_menu_list_gene_pane

0xe520,	// (0x0002c5bb) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe520,	// (0x0002c5bb) popup_sp_fs_action_menu_bg_pane

0xe52e,	// (0x0002c5c9) sp_fs_action_menu_list_pane_ParamLimits

0xe52e,	// (0x0002c5c9) sp_fs_action_menu_list_pane

0x87ef,	// (0x0002688a) sp_fs_scroll_pane_cp01_ParamLimits

0x87ef,	// (0x0002688a) sp_fs_scroll_pane_cp01

0x8815,	// (0x000268b0) list_medium_line_plain_t2_t1

0x8825,	// (0x000268c0) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0002dd8a) list_medium_line_plain_t2_t

0x8833,	// (0x000268ce) list_medium_line_plain_t3_t1

0x8843,	// (0x000268de) list_medium_line_plain_t3_t2

0x8851,	// (0x000268ec) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0002dd8f) list_medium_line_plain_t3_t

0x3288,	// (0x00021323) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3288,	// (0x00021323) list_medium_line_x2_t2_g2_g1

0x32a0,	// (0x0002133b) list_medium_line_x2_t2_g2_g2_ParamLimits

0x32a0,	// (0x0002133b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0002d2dd) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0002d2dd) list_medium_line_x2_t2_g2_g

0x46cf,	// (0x0002276a) list_medium_line_x2_t2_g2_t1_ParamLimits

0x46cf,	// (0x0002276a) list_medium_line_x2_t2_g2_t1

0x32d3,	// (0x0002136e) list_medium_line_x2_t2_g2_t2_ParamLimits

0x32d3,	// (0x0002136e) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0002dd96) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0002dd96) list_medium_line_x2_t2_g2_t

0x3288,	// (0x00021323) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3288,	// (0x00021323) list_medium_line_x2_t4_g2_g1

0x32a0,	// (0x0002133b) list_medium_line_x2_t4_g2_g2_ParamLimits

0x32a0,	// (0x0002133b) list_medium_line_x2_t4_g2_g2

0x0001,

0xf242,	// (0x0002d2dd) list_medium_line_x2_t4_g2_g_ParamLimits

0xf242,	// (0x0002d2dd) list_medium_line_x2_t4_g2_g

0x885f,	// (0x000268fa) list_medium_line_x2_t4_g2_t1_ParamLimits

0x885f,	// (0x000268fa) list_medium_line_x2_t4_g2_t1

0x8879,	// (0x00026914) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8879,	// (0x00026914) list_medium_line_x2_t4_g2_t2

0x888f,	// (0x0002692a) list_medium_line_x2_t4_g2_t3_ParamLimits

0x888f,	// (0x0002692a) list_medium_line_x2_t4_g2_t3

0x32d3,	// (0x0002136e) list_medium_line_x2_t4_g2_t4_ParamLimits

0x32d3,	// (0x0002136e) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0002dd9b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0002dd9b) list_medium_line_x2_t4_g2_t

0x88a4,	// (0x0002693f) list_medium_line_t3_right_iconx2_g1

0x870f,	// (0x000267aa) list_medium_line_t3_right_iconx2_g2

0x88ac,	// (0x00026947) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0002dda4) list_medium_line_t3_right_iconx2_g

0x88b4,	// (0x0002694f) list_medium_line_t3_right_iconx2_t1

0x88c4,	// (0x0002695f) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0002ddab) list_medium_line_t3_right_iconx2_t

0x3288,	// (0x00021323) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3288,	// (0x00021323) list_medium_line_x3_t4_g4_g1

0x3294,	// (0x0002132f) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3294,	// (0x0002132f) list_medium_line_x3_t4_g4_g2

0x46b7,	// (0x00022752) list_medium_line_x3_t4_g4_g3_ParamLimits

0x46b7,	// (0x00022752) list_medium_line_x3_t4_g4_g3

0x88d2,	// (0x0002696d) list_medium_line_x3_t4_g4_g4_ParamLimits

0x88d2,	// (0x0002696d) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0002ddb0) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0002ddb0) list_medium_line_x3_t4_g4_g

0x88de,	// (0x00026979) list_medium_line_x3_t4_g4_t1_ParamLimits

0x88de,	// (0x00026979) list_medium_line_x3_t4_g4_t1

0x88f5,	// (0x00026990) list_medium_line_x3_t4_g4_t2_ParamLimits

0x88f5,	// (0x00026990) list_medium_line_x3_t4_g4_t2

0x46e4,	// (0x0002277f) list_medium_line_x3_t4_g4_t3_ParamLimits

0x46e4,	// (0x0002277f) list_medium_line_x3_t4_g4_t3

0x890a,	// (0x000269a5) list_medium_line_x3_t4_g4_t4_ParamLimits

0x890a,	// (0x000269a5) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0002ddb9) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0002ddb9) list_medium_line_x3_t4_g4_t

0x8927,	// (0x000269c2) list_single_dyc_row_text_pane_t1_ParamLimits

0x8927,	// (0x000269c2) list_single_dyc_row_text_pane_t1

0x895e,	// (0x000269f9) list_single_dyc_row_text_pane_t2_ParamLimits

0x895e,	// (0x000269f9) list_single_dyc_row_text_pane_t2

0xe550,	// (0x0002c5eb) list_single_dyc_row_text_pane_t3_ParamLimits

0xe550,	// (0x0002c5eb) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0002ddc2) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0002ddc2) list_single_dyc_row_text_pane_t

0xe574,	// (0x0002c60f) list_single_dyc_row_pane_g1_ParamLimits

0xe574,	// (0x0002c60f) list_single_dyc_row_pane_g1

0xe580,	// (0x0002c61b) list_single_dyc_row_pane_g2_ParamLimits

0xe580,	// (0x0002c61b) list_single_dyc_row_pane_g2

0xe58c,	// (0x0002c627) list_single_dyc_row_pane_g3_ParamLimits

0xe58c,	// (0x0002c627) list_single_dyc_row_pane_g3

0xe598,	// (0x0002c633) list_single_dyc_row_pane_g4_ParamLimits

0xe598,	// (0x0002c633) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0002ddcf) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0002ddcf) list_single_dyc_row_pane_g

0xe5a4,	// (0x0002c63f) list_single_dyc_row_text_pane_ParamLimits

0xe5a4,	// (0x0002c63f) list_single_dyc_row_text_pane

0x9cf6,	// (0x00027d91) bg_sp_fs_scroll_pane

0xe5c3,	// (0x0002c65e) thumb_sp_fs_scroll_pane

0x71fd,	// (0x00025298) list_medium_line_g1_ParamLimits

0x71fd,	// (0x00025298) list_medium_line_g1

0x8a81,	// (0x00026b1c) list_medium_line_t1_ParamLimits

0x8a81,	// (0x00026b1c) list_medium_line_t1

0x3288,	// (0x00021323) list_medium_line_x2_g1_ParamLimits

0x3288,	// (0x00021323) list_medium_line_x2_g1

0x3294,	// (0x0002132f) list_medium_line_x2_g2_ParamLimits

0x3294,	// (0x0002132f) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0002ddd8) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0002ddd8) list_medium_line_x2_g

0xe5cc,	// (0x0002c667) list_medium_line_x2_t1_ParamLimits

0xe5cc,	// (0x0002c667) list_medium_line_x2_t1

0x3288,	// (0x00021323) list_medium_line_x3_g1_ParamLimits

0x3288,	// (0x00021323) list_medium_line_x3_g1

0x3294,	// (0x0002132f) list_medium_line_x3_g2_ParamLimits

0x3294,	// (0x0002132f) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0002ddd8) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0002ddd8) list_medium_line_x3_g

0xe5cc,	// (0x0002c667) list_medium_line_x3_t1_ParamLimits

0xe5cc,	// (0x0002c667) list_medium_line_x3_t1

0xe5e2,	// (0x0002c67d) thumb_sp_fs_scroll_pane_g1

0xe5eb,	// (0x0002c686) thumb_sp_fs_scroll_pane_g2

0xe5f4,	// (0x0002c68f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0002dddd) thumb_sp_fs_scroll_pane_g

0xe5e2,	// (0x0002c67d) bg_sp_fs_scroll_pane_g1

0xe5eb,	// (0x0002c686) bg_sp_fs_scroll_pane_g2

0xe5f4,	// (0x0002c68f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0002dddd) bg_sp_fs_scroll_pane_g

0x3288,	// (0x00021323) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3288,	// (0x00021323) list_medium_line_x2_t3_g4_g1

0x332d,	// (0x000213c8) list_medium_line_x2_t3_g4_g2_ParamLimits

0x332d,	// (0x000213c8) list_medium_line_x2_t3_g4_g2

0x3294,	// (0x0002132f) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3294,	// (0x0002132f) list_medium_line_x2_t3_g4_g3

0x32a0,	// (0x0002133b) list_medium_line_x2_t3_g4_g4_ParamLimits

0x32a0,	// (0x0002133b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0002d359) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0002d359) list_medium_line_x2_t3_g4_g

0x8a96,	// (0x00026b31) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8a96,	// (0x00026b31) list_medium_line_x2_t3_g4_t1

0x8aac,	// (0x00026b47) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8aac,	// (0x00026b47) list_medium_line_x2_t3_g4_t2

0x32d3,	// (0x0002136e) list_medium_line_x2_t3_g4_t3_ParamLimits

0x32d3,	// (0x0002136e) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0002dde4) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0002dde4) list_medium_line_x2_t3_g4_t

0x71fd,	// (0x00025298) list_medium_line_g2_g1_ParamLimits

0x71fd,	// (0x00025298) list_medium_line_g2_g1

0x7209,	// (0x000252a4) list_medium_line_g2_g2_ParamLimits

0x7209,	// (0x000252a4) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0002da9b) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0002da9b) list_medium_line_g2_g

0x8ac6,	// (0x00026b61) list_medium_line_g2_t1_ParamLimits

0x8ac6,	// (0x00026b61) list_medium_line_g2_t1

0x71fd,	// (0x00025298) list_medium_line_t3_g2_g1_ParamLimits

0x71fd,	// (0x00025298) list_medium_line_t3_g2_g1

0x7209,	// (0x000252a4) list_medium_line_t3_g2_g2_ParamLimits

0x7209,	// (0x000252a4) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0002da9b) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0002da9b) list_medium_line_t3_g2_g

0x8adb,	// (0x00026b76) list_medium_line_t3_g2_t1_ParamLimits

0x8adb,	// (0x00026b76) list_medium_line_t3_g2_t1

0x8af5,	// (0x00026b90) list_medium_line_t3_g2_t2_ParamLimits

0x8af5,	// (0x00026b90) list_medium_line_t3_g2_t2

0x8b0b,	// (0x00026ba6) list_medium_line_t3_g2_t3_ParamLimits

0x8b0b,	// (0x00026ba6) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0002ddeb) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0002ddeb) list_medium_line_t3_g2_t

0x870f,	// (0x000267aa) list_medium_line_right_icon_g1

0x8b21,	// (0x00026bbc) list_medium_line_right_icon_t1

0x71fd,	// (0x00025298) list_medium_line_t2_g1_ParamLimits

0x71fd,	// (0x00025298) list_medium_line_t2_g1

0x8b2f,	// (0x00026bca) list_medium_line_t2_t1_ParamLimits

0x8b2f,	// (0x00026bca) list_medium_line_t2_t1

0x8b49,	// (0x00026be4) list_medium_line_t2_t2_ParamLimits

0x8b49,	// (0x00026be4) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0002ddf2) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0002ddf2) list_medium_line_t2_t

0x71fd,	// (0x00025298) list_medium_line_t3_g1_ParamLimits

0x71fd,	// (0x00025298) list_medium_line_t3_g1

0x8b5e,	// (0x00026bf9) list_medium_line_t3_t1_ParamLimits

0x8b5e,	// (0x00026bf9) list_medium_line_t3_t1

0x8b78,	// (0x00026c13) list_medium_line_t3_t2_ParamLimits

0x8b78,	// (0x00026c13) list_medium_line_t3_t2

0x8b8e,	// (0x00026c29) list_medium_line_t3_t3_ParamLimits

0x8b8e,	// (0x00026c29) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0002ddf7) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0002ddf7) list_medium_line_t3_t

0x71fd,	// (0x00025298) list_medium_line_g3_g1_ParamLimits

0x71fd,	// (0x00025298) list_medium_line_g3_g1

0x8ba3,	// (0x00026c3e) list_medium_line_g3_g2_ParamLimits

0x8ba3,	// (0x00026c3e) list_medium_line_g3_g2

0x7209,	// (0x000252a4) list_medium_line_g3_g3_ParamLimits

0x7209,	// (0x000252a4) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0002ddfe) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0002ddfe) list_medium_line_g3_g

0x8baf,	// (0x00026c4a) list_medium_line_g3_t1_ParamLimits

0x8baf,	// (0x00026c4a) list_medium_line_g3_t1

0x71fd,	// (0x00025298) list_medium_line_t2_g3_g1_ParamLimits

0x71fd,	// (0x00025298) list_medium_line_t2_g3_g1

0x8ba3,	// (0x00026c3e) list_medium_line_t2_g3_g2_ParamLimits

0x8ba3,	// (0x00026c3e) list_medium_line_t2_g3_g2

0x7209,	// (0x000252a4) list_medium_line_t2_g3_g3_ParamLimits

0x7209,	// (0x000252a4) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0002ddfe) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0002ddfe) list_medium_line_t2_g3_g

0x8bc4,	// (0x00026c5f) list_medium_line_t2_g3_t1_ParamLimits

0x8bc4,	// (0x00026c5f) list_medium_line_t2_g3_t1

0x8bde,	// (0x00026c79) list_medium_line_t2_g3_t2_ParamLimits

0x8bde,	// (0x00026c79) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0002de05) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0002de05) list_medium_line_t2_g3_t

0x71fd,	// (0x00025298) list_medium_line_t3_g3_g1_ParamLimits

0x71fd,	// (0x00025298) list_medium_line_t3_g3_g1

0x8ba3,	// (0x00026c3e) list_medium_line_t3_g3_g2_ParamLimits

0x8ba3,	// (0x00026c3e) list_medium_line_t3_g3_g2

0x7209,	// (0x000252a4) list_medium_line_t3_g3_g3_ParamLimits

0x7209,	// (0x000252a4) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0002ddfe) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0002ddfe) list_medium_line_t3_g3_g

0x8bf4,	// (0x00026c8f) list_medium_line_t3_g3_t1_ParamLimits

0x8bf4,	// (0x00026c8f) list_medium_line_t3_g3_t1

0x8c0d,	// (0x00026ca8) list_medium_line_t3_g3_t2_ParamLimits

0x8c0d,	// (0x00026ca8) list_medium_line_t3_g3_t2

0x8c23,	// (0x00026cbe) list_medium_line_t3_g3_t3_ParamLimits

0x8c23,	// (0x00026cbe) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0002de0a) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0002de0a) list_medium_line_t3_g3_t

0x88a4,	// (0x0002693f) list_medium_line_right_iconx2_g1

0x870f,	// (0x000267aa) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0002de11) list_medium_line_right_iconx2_g

0x8c39,	// (0x00026cd4) list_medium_line_right_iconx2_t1

0x88a4,	// (0x0002693f) list_medium_line_t2_right_iconx2_g1

0x870f,	// (0x000267aa) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0002de11) list_medium_line_t2_right_iconx2_g

0x8c47,	// (0x00026ce2) list_medium_line_t2_right_iconx2_t1

0x8c57,	// (0x00026cf2) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0002de16) list_medium_line_t2_right_iconx2_t

0x8c65,	// (0x00026d00) list_medium_line_x4_t4_t1

0x8c73,	// (0x00026d0e) list_medium_line_x4_t4_t2

0x8c83,	// (0x00026d1e) list_medium_line_x4_t4_t3

0x8c93,	// (0x00026d2e) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0002de1b) list_medium_line_x4_t4_t

0x8ccd,	// (0x00026d68) tport_appsw_pane_ParamLimits

0x8ccd,	// (0x00026d68) tport_appsw_pane

0x8cdb,	// (0x00026d76) tport_contact_pane_ParamLimits

0x8cdb,	// (0x00026d76) tport_contact_pane

0x8ceb,	// (0x00026d86) tport_listscroll_pane_ParamLimits

0x8ceb,	// (0x00026d86) tport_listscroll_pane

0x8cfb,	// (0x00026d96) cell_tport_appsw_pane_ParamLimits

0x8cfb,	// (0x00026d96) cell_tport_appsw_pane

0xcbf0,	// (0x0002ac8b) tport_appsw_pane_g1_ParamLimits

0xcbf0,	// (0x0002ac8b) tport_appsw_pane_g1

0xe5fd,	// (0x0002c698) tport_contact_pane_g1

0xdeac,	// (0x0002bf47) tport_contact_pane_t1

0xe606,	// (0x0002c6a1) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0002de24) tport_contact_pane_t

0xe614,	// (0x0002c6af) list_tport_pane

0xe61d,	// (0x0002c6b8) scroll_pane_cp_030

0x8d2e,	// (0x00026dc9) cell_tport_appsw_pane_g1

0x8d3e,	// (0x00026dd9) cell_tport_appsw_pane_t1

0x8d4c,	// (0x00026de7) grid_highlight_pane_cp019

0x8d54,	// (0x00026def) list_tport_double_graphic_pane_ParamLimits

0x8d54,	// (0x00026def) list_tport_double_graphic_pane

0xa4d4,	// (0x0002856f) list_highlight_pane_cp023_ParamLimits

0xa4d4,	// (0x0002856f) list_highlight_pane_cp023

0x8d65,	// (0x00026e00) list_tport_double_graphic_pane_g1_ParamLimits

0x8d65,	// (0x00026e00) list_tport_double_graphic_pane_g1

0x8d72,	// (0x00026e0d) list_tport_double_graphic_pane_t1_ParamLimits

0x8d72,	// (0x00026e0d) list_tport_double_graphic_pane_t1

0x8d87,	// (0x00026e22) list_tport_double_graphic_pane_t2_ParamLimits

0x8d87,	// (0x00026e22) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0002de30) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0002de30) list_tport_double_graphic_pane_t

0x9cf6,	// (0x00027d91) main_cale_note_pane

0x2363,	// (0x000203fe) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x2363,	// (0x000203fe) cell_vitu2_function_top_wide_pane_cp01

0x82f5,	// (0x00026390) wait_bar_pane_cp05_ParamLimits

0xa4d4,	// (0x0002856f) listscroll_cmail_pane

0xe626,	// (0x0002c6c1) list_cmail_pane

0x8d99,	// (0x00026e34) list_cmail_body_pane

0x8dc0,	// (0x00026e5b) list_single_cmail_header_caption_pane

0x8deb,	// (0x00026e86) list_single_cmail_header_detail_pane_ParamLimits

0x8deb,	// (0x00026e86) list_single_cmail_header_detail_pane

0xe636,	// (0x0002c6d1) list_single_cmail_header_caption_pane_t1

0x8e21,	// (0x00026ebc) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8e21,	// (0x00026ebc) list_single_cmail_header_detail_pane_g1

0xe64d,	// (0x0002c6e8) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe64d,	// (0x0002c6e8) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0002de35) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0002de35) list_single_cmail_header_detail_pane_g

0xe666,	// (0x0002c701) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe666,	// (0x0002c701) list_single_cmail_header_detail_pane_t1

0xe6c6,	// (0x0002c761) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe6c6,	// (0x0002c761) list_single_cmail_header_editor_pane_bg

0xe009,	// (0x0002c0a4) list_cmail_body_pane_g1

0xe6dd,	// (0x0002c778) list_cmail_body_pane_t1

0xd2fc,	// (0x0002b397) list_single_cmail_header_editor_pane_bg_g1

0xa868,	// (0x00028903) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd30c,	// (0x0002b3a7) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd304,	// (0x0002b39f) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd578,	// (0x0002b613) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd348,	// (0x0002b3e3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd31c,	// (0x0002b3b7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd324,	// (0x0002b3bf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa848,	// (0x000288e3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8e37,	// (0x00026ed2) calenote_gesture_pane_ParamLimits

0x8e37,	// (0x00026ed2) calenote_gesture_pane

0x8e51,	// (0x00026eec) calenote_window_pane_ParamLimits

0x8e51,	// (0x00026eec) calenote_window_pane

0xe6eb,	// (0x0002c786) popup_note_window_cp01

0x8e69,	// (0x00026f04) calenote_swipe_1_pane_ParamLimits

0x8e69,	// (0x00026f04) calenote_swipe_1_pane

0x86b1,	// (0x0002674c) calenote_swipe_2_pane_ParamLimits

0x86b1,	// (0x0002674c) calenote_swipe_2_pane

0xe363,	// (0x0002c3fe) calenote_swipe_1_pane_g1_ParamLimits

0xe363,	// (0x0002c3fe) calenote_swipe_1_pane_g1

0xe370,	// (0x0002c40b) calenote_swipe_1_pane_g2_ParamLimits

0xe370,	// (0x0002c40b) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0002dd5e) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0002dd5e) calenote_swipe_1_pane_g

0xe6fd,	// (0x0002c798) calenote_swipe_1_pane_t1_ParamLimits

0xe6fd,	// (0x0002c798) calenote_swipe_1_pane_t1

0xe363,	// (0x0002c3fe) calenote_swipe_2_pane_g1_ParamLimits

0xe363,	// (0x0002c3fe) calenote_swipe_2_pane_g1

0xe71c,	// (0x0002c7b7) calenote_swipe_2_pane_g2_ParamLimits

0xe71c,	// (0x0002c7b7) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0002de41) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0002de41) calenote_swipe_2_pane_g

0xe728,	// (0x0002c7c3) calenote_swipe_2_pane_t1_ParamLimits

0xe728,	// (0x0002c7c3) calenote_swipe_2_pane_t1

0x9cf6,	// (0x00027d91) main_mup_navstr_pane

0x61c8,	// (0x00024263) main_mup3_pane_t7_ParamLimits

0x61c8,	// (0x00024263) main_mup3_pane_t7

0x1b79,	// (0x0001fc14) main_mp4_pane_g6_ParamLimits

0x1b79,	// (0x0001fc14) main_mp4_pane_g6

0x1e8a,	// (0x0001ff25) main_image3_pane_t4_ParamLimits

0x1e8a,	// (0x0001ff25) main_image3_pane_t4

0x8e7c,	// (0x00026f17) popup_navstr_preview_pane_ParamLimits

0x8e7c,	// (0x00026f17) popup_navstr_preview_pane

0x8e88,	// (0x00026f23) scroll_navstr_pane_ParamLimits

0x8e88,	// (0x00026f23) scroll_navstr_pane

0x9cf6,	// (0x00027d91) bg_popup_preview_window_pane_cp04

0xe74f,	// (0x0002c7ea) popup_navstr_preview_pane_t1

0x8e94,	// (0x00026f2f) scroll_navstr_pane_g1_ParamLimits

0x8e94,	// (0x00026f2f) scroll_navstr_pane_g1

0x8ea1,	// (0x00026f3c) scroll_navstr_pane_t1_ParamLimits

0x8ea1,	// (0x00026f3c) scroll_navstr_pane_t1

0xe6f4,	// (0x0002c78f) bg_button_pane_cp014

0xe6f4,	// (0x0002c78f) bg_button_pane_cp030

0x85c4,	// (0x0002665f) list_double_fisheye_pane_g4_ParamLimits

0x85c4,	// (0x0002665f) list_double_fisheye_pane_g4

0x85d0,	// (0x0002666b) list_double_fisheye_pane_g5_ParamLimits

0x85d0,	// (0x0002666b) list_double_fisheye_pane_g5

0xd4d2,	// (0x0002b56d) sp_fs_scroll_pane_cp03

0xe483,	// (0x0002c51e) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe48f,	// (0x0002c52a) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0002dd7b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe49b,	// (0x0002c536) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe62e,	// (0x0002c6c9) sp_fs_scroll_pane_cp02

0xa54e,	// (0x000285e9) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa54e,	// (0x000285e9) popup_sp_fs_calendar_preview_list_single_pane

0x9cf6,	// (0x00027d91) main_cam6_pano_pane

0x14d6,	// (0x0001f571) main_mup3_pane_ParamLimits

0x9cf6,	// (0x00027d91) main_phacti_pane

0x81ca,	// (0x00026265) bg_button_pane_cp11

0x81e2,	// (0x0002627d) main_mobtv_info_pane_g2_ParamLimits

0x81e2,	// (0x0002627d) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0002dcdb) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0002dcdb) main_mobtv_info_pane_g

0x8394,	// (0x0002642f) sc_clock_pane_t5_ParamLimits

0x8394,	// (0x0002642f) sc_clock_pane_t5

0x8435,	// (0x000264d0) main_radioblah_pane_g1_ParamLimits

0xe2a6,	// (0x0002c341) main_radioblah_pane_t3_ParamLimits

0xe2a6,	// (0x0002c341) main_radioblah_pane_t3

0xe2be,	// (0x0002c359) main_radioblah_pane_t4_ParamLimits

0xe2be,	// (0x0002c359) main_radioblah_pane_t4

0x8453,	// (0x000264ee) main_radioblah_text_pane_ParamLimits

0x8453,	// (0x000264ee) main_radioblah_text_pane

0x8460,	// (0x000264fb) main_radioblah_info_pane_g1_ParamLimits

0x84f5,	// (0x00026590) main_radioblah_info_pane_t4_ParamLimits

0x84f5,	// (0x00026590) main_radioblah_info_pane_t4

0xa4d4,	// (0x0002856f) main_sp_fs_calendar_pane

0x8eb3,	// (0x00026f4e) main_phacti_pane_g1

0x8ebb,	// (0x00026f56) phacti_note_pane_ParamLimits

0x8ebb,	// (0x00026f56) phacti_note_pane

0xe766,	// (0x0002c801) phacti_term_pane_ParamLimits

0xe766,	// (0x0002c801) phacti_term_pane

0xe77b,	// (0x0002c816) phacti_note_pane_t1_ParamLimits

0xe77b,	// (0x0002c816) phacti_note_pane_t1

0xe792,	// (0x0002c82d) phacti_term_pane_g1

0xe79a,	// (0x0002c835) phacti_term_pane_t1_ParamLimits

0xe79a,	// (0x0002c835) phacti_term_pane_t1

0xe7c4,	// (0x0002c85f) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa5ed,	// (0x00028688) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0002de4b) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7cc,	// (0x0002c867) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7cc,	// (0x0002c867) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7e2,	// (0x0002c87d) aid_popup_sp_fs_bg_corner_pane

0xc8fc,	// (0x0002a997) popup_sp_fs_calendar_preview_bg_pane_g1

0x9cf6,	// (0x00027d91) popup_sp_fs_calendar_preview_bg_pane

0xe7ea,	// (0x0002c885) popup_sp_fs_calendar_preview_list_pane

0xc4f4,	// (0x0002a58f) bg_main_sp_fs_cale_pane_ParamLimits

0xc4f4,	// (0x0002a58f) bg_main_sp_fs_cale_pane

0xe7fb,	// (0x0002c896) listscroll_cale_mrui_pane_ParamLimits

0xe7fb,	// (0x0002c896) listscroll_cale_mrui_pane

0xd39c,	// (0x0002b437) listscroll_sp_fs_schedule_track_pane

0xe810,	// (0x0002c8ab) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe810,	// (0x0002c8ab) main_sp_fs_ctrlbar_pane_cp01

0xe823,	// (0x0002c8be) main_sp_fs_ribbon_pane

0xe82b,	// (0x0002c8c6) popup_sp_fs_cale_preview_window

0x8f1e,	// (0x00026fb9) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8f1e,	// (0x00026fb9) list_single_sp_fs_schedule_track_pane

0xd32c,	// (0x0002b3c7) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd32c,	// (0x0002b3c7) bg_sp_fs_highlight_list_pane_cp03

0x8f40,	// (0x00026fdb) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8f40,	// (0x00026fdb) list_single_sp_fs_schedule_track_pane_g1

0x8f4c,	// (0x00026fe7) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8f4c,	// (0x00026fe7) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0002de50) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0002de50) list_single_sp_fs_schedule_track_pane_g

0x8f58,	// (0x00026ff3) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8f58,	// (0x00026ff3) list_single_sp_fs_schedule_track_pane_t1

0x8f70,	// (0x0002700b) sp_fs_schedule_track_pane_ParamLimits

0x8f70,	// (0x0002700b) sp_fs_schedule_track_pane

0xe83d,	// (0x0002c8d8) sp_fs_schedule_track_pane_g1

0xe845,	// (0x0002c8e0) sp_fs_schedule_track_pane_g2

0xe84d,	// (0x0002c8e8) sp_fs_schedule_track_pane_g3

0xe855,	// (0x0002c8f0) sp_fs_schedule_track_pane_g4

0xe85d,	// (0x0002c8f8) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0002de55) sp_fs_schedule_track_pane_g

0xd2fc,	// (0x0002b397) bg_sp_fs_schedule_viewer_highlight_g1

0xa868,	// (0x00028903) bg_sp_fs_schedule_viewer_highlight_g2

0xd304,	// (0x0002b39f) bg_sp_fs_schedule_viewer_highlight_g3

0xd30c,	// (0x0002b3a7) bg_sp_fs_schedule_viewer_highlight_g4

0xd578,	// (0x0002b613) bg_sp_fs_schedule_viewer_highlight_g5

0xd31c,	// (0x0002b3b7) bg_sp_fs_schedule_viewer_highlight_g6

0xd324,	// (0x0002b3bf) bg_sp_fs_schedule_viewer_highlight_g7

0xd348,	// (0x0002b3e3) bg_sp_fs_schedule_viewer_highlight_g8

0xa848,	// (0x000288e3) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0002de60) bg_sp_fs_schedule_viewer_highlight_g

0x9cf6,	// (0x00027d91) bg_main_sp_fs_ribbon_pane

0x8f80,	// (0x0002701b) main_sp_fs_ribbon_pane_g1

0xe865,	// (0x0002c900) main_sp_fs_ribbon_pane_t1

0x8f89,	// (0x00027024) main_sp_fs_ribbon_pane_t2

0xe874,	// (0x0002c90f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0002de73) main_sp_fs_ribbon_pane_t

0xe883,	// (0x0002c91e) main_sp_fs_ribbon_scheduler_pane

0xe88b,	// (0x0002c926) bg_main_sp_fs_ribbon_pane_g1

0xe894,	// (0x0002c92f) bg_main_sp_fs_ribbon_pane_g2

0xe89d,	// (0x0002c938) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0002de7a) bg_main_sp_fs_ribbon_pane_g

0xe8a5,	// (0x0002c940) main_sp_fs_ribbon_scheduler_pane_g1

0xe8ae,	// (0x0002c949) main_sp_fs_ribbon_scheduler_pane_g2

0xe8b7,	// (0x0002c952) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0002de81) main_sp_fs_ribbon_scheduler_pane_g

0xe8c0,	// (0x0002c95b) list_cale_mrui_pane

0x8f98,	// (0x00027033) sp_fs_scroll_pane_cp07_ParamLimits

0x8f98,	// (0x00027033) sp_fs_scroll_pane_cp07

0x8fb4,	// (0x0002704f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8fb4,	// (0x0002704f) bg_sp_fs_schedule_viewer_highlight

0xe8cd,	// (0x0002c968) list_single_sp_fs_schedule_track_pane_cp01

0xe8d5,	// (0x0002c970) list_sp_fs_schedule_track_pane

0xe8dd,	// (0x0002c978) sp_fs_scroll_pane_cp06_ParamLimits

0xe8dd,	// (0x0002c978) sp_fs_scroll_pane_cp06

0xc8fc,	// (0x0002a997) bgmain_sp_fs_calendar_pane_g1

0x8fc1,	// (0x0002705c) list_single_cale_mrui_pane_ParamLimits

0x8fc1,	// (0x0002705c) list_single_cale_mrui_pane

0xe8ef,	// (0x0002c98a) list_single_cale_mrui_row_pane_ParamLimits

0xe8ef,	// (0x0002c98a) list_single_cale_mrui_row_pane

0xe8fc,	// (0x0002c997) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8fc,	// (0x0002c997) list_single_cale_mrui_row_pane_g1

0xe941,	// (0x0002c9dc) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe941,	// (0x0002c9dc) list_single_cale_mrui_row_pane_t1

0x8fee,	// (0x00027089) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8fee,	// (0x00027089) list_single_cale_mrui_row_pane_t2

0xe953,	// (0x0002c9ee) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe953,	// (0x0002c9ee) list_single_cale_mrui_row_pane_t3

0xe982,	// (0x0002ca1d) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe982,	// (0x0002ca1d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0002de8f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0002de8f) list_single_cale_mrui_row_pane_t

0x9054,	// (0x000270ef) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9054,	// (0x000270ef) list_single_cmail_header_editor_pane_bg_cp01

0x9074,	// (0x0002710f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9074,	// (0x0002710f) list_single_cmail_header_editor_pane_bg_cp02

0x9090,	// (0x0002712b) main_radioblah_text_pane_t1_ParamLimits

0x9090,	// (0x0002712b) main_radioblah_text_pane_t1

0xe9b1,	// (0x0002ca4c) cam6_indi_pane_cp01

0xe9b9,	// (0x0002ca54) cam6_mode_pane_cp01

0xe9c1,	// (0x0002ca5c) cam6_pano_pane

0xe9ca,	// (0x0002ca65) cam6_zoom_pane_cp01

0xe9d2,	// (0x0002ca6d) cam6_pano_image_pane

0xe9dd,	// (0x0002ca78) cam6_pano_pane_g1

0xe009,	// (0x0002c0a4) cam6_pano_pane_g2

0xe9e6,	// (0x0002ca81) cam6_pano_pane_g3

0xe9ef,	// (0x0002ca8a) cam6_pano_pane_g4

0xceeb,	// (0x0002af86) cam6_pano_pane_g5

0xea00,	// (0x0002ca9b) cam6_pano_pane_g6

0xe9f8,	// (0x0002ca93) cam6_pano_pane_g7

0xea0a,	// (0x0002caa5) cam6_pano_pane_g8

0xea13,	// (0x0002caae) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0002de98) cam6_pano_pane_g

0x9cf6,	// (0x00027d91) main_browser_tag_pane

0xe747,	// (0x0002c7e2) grid_navstr_albumart_pane

0xea1e,	// (0x0002cab9) cell_navstr_albumart_pane_ParamLimits

0xea1e,	// (0x0002cab9) cell_navstr_albumart_pane

0xea3e,	// (0x0002cad9) cell_navstr_albumart_pane_g1

0xc305,	// (0x0002a3a0) cell_navstr_albumart_pane_g2

0xc315,	// (0x0002a3b0) cell_navstr_albumart_pane_g3

0xc30d,	// (0x0002a3a8) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0002deab) cell_navstr_albumart_pane_g

0x90ab,	// (0x00027146) bt_list_pane_ParamLimits

0x90ab,	// (0x00027146) bt_list_pane

0x90cb,	// (0x00027166) bt_list_pane_t1

0x90da,	// (0x00027175) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0002deb4) bt_list_pane_t

0x9cf6,	// (0x00027d91) main_cale_prevew_pane

0x90e9,	// (0x00027184) popup_cale_preview_window_ParamLimits

0x90e9,	// (0x00027184) popup_cale_preview_window

0xa4d4,	// (0x0002856f) bg_popup_preview_window_pane_cp05_ParamLimits

0xa4d4,	// (0x0002856f) bg_popup_preview_window_pane_cp05

0xea46,	// (0x0002cae1) list_cale_preview_pane_ParamLimits

0xea46,	// (0x0002cae1) list_cale_preview_pane

0x9102,	// (0x0002719d) list_double_cale_preview_pane_ParamLimits

0x9102,	// (0x0002719d) list_double_cale_preview_pane

0x9114,	// (0x000271af) list_single_cale_preview_pane_ParamLimits

0x9114,	// (0x000271af) list_single_cale_preview_pane

0x912a,	// (0x000271c5) list_single_cale_preview_pane_g1

0x9132,	// (0x000271cd) list_single_cale_preview_pane_t1_ParamLimits

0x9132,	// (0x000271cd) list_single_cale_preview_pane_t1

0x9147,	// (0x000271e2) list_double_cale_preview_pane_g1

0x914f,	// (0x000271ea) list_double_cale_preview_pane_t1_ParamLimits

0x914f,	// (0x000271ea) list_double_cale_preview_pane_t1

0x9164,	// (0x000271ff) list_double_cale_preview_pane_t2_ParamLimits

0x9164,	// (0x000271ff) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0002deb9) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0002deb9) list_double_cale_preview_pane_t

0x9cf6,	// (0x00027d91) main_ezdial_pane

0xa4d4,	// (0x0002856f) main_sp_fs_email_pane_ParamLimits

0x8735,	// (0x000267d0) cmail_ddmenu_btn01_pane_ParamLimits

0x8735,	// (0x000267d0) cmail_ddmenu_btn01_pane

0x8752,	// (0x000267ed) cmail_ddmenu_btn02_pane_ParamLimits

0x8752,	// (0x000267ed) cmail_ddmenu_btn02_pane

0x8770,	// (0x0002680b) cmail_ddmenu_btn03_pane_ParamLimits

0x8770,	// (0x0002680b) cmail_ddmenu_btn03_pane

0x879e,	// (0x00026839) main_sp_fs_ctrlbar_pane_ParamLimits

0x87b4,	// (0x0002684f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8d99,	// (0x00026e34) list_cmail_body_pane_ParamLimits

0xe644,	// (0x0002c6df) bg_button_pane_cp12

0xe659,	// (0x0002c6f4) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe659,	// (0x0002c6f4) list_single_cmail_header_detail_pane_g3

0xe6a2,	// (0x0002c73d) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe6a2,	// (0x0002c73d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0002de3c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0002de3c) list_single_cmail_header_detail_pane_t

0xe7af,	// (0x0002c84a) phacti_term_pane_t2_ParamLimits

0xe7af,	// (0x0002c84a) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0002de46) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0002de46) phacti_term_pane_t

0xea52,	// (0x0002caed) aid_size_list_single_double

0x917c,	// (0x00027217) popup_ezdial_listscroll_window

0x919d,	// (0x00027238) popup_number_entry_window_cp01

0xa60f,	// (0x000286aa) bg_popup_call_pane_cp09

0xea5e,	// (0x0002caf9) ezdial_list_pane

0xea66,	// (0x0002cb01) scroll_pane_cp23

0xc6e1,	// (0x0002a77c) bg_button_pane_cp028_ParamLimits

0xc6e1,	// (0x0002a77c) bg_button_pane_cp028

0x91ab,	// (0x00027246) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x91ab,	// (0x00027246) cmail_ddmenu_btn01_pane_g1

0x91bb,	// (0x00027256) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x91bb,	// (0x00027256) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0002debe) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0002debe) cmail_ddmenu_btn01_pane_g

0xea6e,	// (0x0002cb09) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea6e,	// (0x0002cb09) cmail_ddmenu_btn01_pane_t1

0xc4f4,	// (0x0002a58f) bg_button_pane_cp029_ParamLimits

0xc4f4,	// (0x0002a58f) bg_button_pane_cp029

0x91bb,	// (0x00027256) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x91bb,	// (0x00027256) cmail_ddmenu_btn02_pane_g1

0x91d3,	// (0x0002726e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x91d3,	// (0x0002726e) cmail_ddmenu_btn02_pane_t1

0xd32c,	// (0x0002b3c7) bg_button_pane_cp031_ParamLimits

0xd32c,	// (0x0002b3c7) bg_button_pane_cp031

0x91bb,	// (0x00027256) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x91bb,	// (0x00027256) cmail_ddmenu_btn03_pane_g1

0x91d3,	// (0x0002726e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x91d3,	// (0x0002726e) cmail_ddmenu_btn03_pane_t1

0x6a23,	// (0x00024abe) cell_dialer2_keypad_pane_t1_ParamLimits

0x6a3d,	// (0x00024ad8) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6a3d,	// (0x00024ad8) cell_dialer2_keypad_pane_t1_copy1

0x800b,	// (0x000260a6) ncimui_group_button_pane

0xa4d4,	// (0x0002856f) main_sp_fs_calendar_pane_ParamLimits

0x8dc0,	// (0x00026e5b) list_single_cmail_header_caption_pane_ParamLimits

0xe7f2,	// (0x0002c88d) aid_recal_txt_sm_pane

0x9cf6,	// (0x00027d91) mian_recal_day_pane

0xe82b,	// (0x0002c8c6) popup_sp_fs_cale_preview_window_ParamLimits

0xea83,	// (0x0002cb1e) list_recal_day_pane

0xeac5,	// (0x0002cb60) list_single_recal_day_pane_ParamLimits

0xeac5,	// (0x0002cb60) list_single_recal_day_pane

0xead7,	// (0x0002cb72) list_single_recal_day_pane_g1_ParamLimits

0xead7,	// (0x0002cb72) list_single_recal_day_pane_g1

0xeae3,	// (0x0002cb7e) list_single_recal_day_pane_g2_ParamLimits

0xeae3,	// (0x0002cb7e) list_single_recal_day_pane_g2

0xeaef,	// (0x0002cb8a) list_single_recal_day_pane_g3_ParamLimits

0xeaef,	// (0x0002cb8a) list_single_recal_day_pane_g3

0x91f7,	// (0x00027292) list_single_recal_day_pane_g4_ParamLimits

0x91f7,	// (0x00027292) list_single_recal_day_pane_g4

0xeafb,	// (0x0002cb96) list_single_recal_day_pane_g5_ParamLimits

0xeafb,	// (0x0002cb96) list_single_recal_day_pane_g5

0xeb07,	// (0x0002cba2) list_single_recal_day_pane_g6_ParamLimits

0xeb07,	// (0x0002cba2) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0002decd) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0002decd) list_single_recal_day_pane_g

0xeb1b,	// (0x0002cbb6) list_single_recal_day_pane_t1

0xeb2d,	// (0x0002cbc8) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0002ded8) list_single_recal_day_pane_t

0x920f,	// (0x000272aa) ncimui_query_button_pane_ParamLimits

0x920f,	// (0x000272aa) ncimui_query_button_pane

0x921f,	// (0x000272ba) ncimui_query_button_pane_t1_ParamLimits

0x921f,	// (0x000272ba) ncimui_query_button_pane_t1

0xeb3f,	// (0x0002cbda) ncimui_query_button_pane_t2_ParamLimits

0xeb3f,	// (0x0002cbda) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0002dedd) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0002dedd) ncimui_query_button_pane_t

0x9232,	// (0x000272cd) query_button_pane_ParamLimits

0x9232,	// (0x000272cd) query_button_pane

0x9cf6,	// (0x00027d91) bg_button_pane_cp0028

0xeb52,	// (0x0002cbed) query_button_pane_t1

0x14f2,	// (0x0001f58d) main_tport_pane_ParamLimits

0x8ca3,	// (0x00026d3e) bg_popup_window_pane_cp01_ParamLimits

0x8ca3,	// (0x00026d3e) bg_popup_window_pane_cp01

0x8cb1,	// (0x00026d4c) heading_pane_cp08_ParamLimits

0x8cb1,	// (0x00026d4c) heading_pane_cp08

0x8cbf,	// (0x00026d5a) heading_pane_cp07_ParamLimits

0x8cbf,	// (0x00026d5a) heading_pane_cp07

0x8d2e,	// (0x00026dc9) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0002de29) cell_tport_appsw_pane_g

0xb1dc,	// (0x00029277) input_candi_list_open_g1

0xaa2b,	// (0x00028ac6) list_cale_time_pane_g6_ParamLimits

0xaa2b,	// (0x00028ac6) list_cale_time_pane_g6

0x5c0e,	// (0x00023ca9) aid_size_touch_calib_1_ParamLimits

0x5c0e,	// (0x00023ca9) aid_size_touch_calib_1

0x5c1a,	// (0x00023cb5) aid_size_touch_calib_2_ParamLimits

0x5c1a,	// (0x00023cb5) aid_size_touch_calib_2

0x5c28,	// (0x00023cc3) aid_size_touch_calib_3_ParamLimits

0x5c28,	// (0x00023cc3) aid_size_touch_calib_3

0x5c38,	// (0x00023cd3) aid_size_touch_calib_4_ParamLimits

0x5c38,	// (0x00023cd3) aid_size_touch_calib_4

0x5c46,	// (0x00023ce1) main_touch_calib_button_group_pane_ParamLimits

0x5c46,	// (0x00023ce1) main_touch_calib_button_group_pane

0x5c54,	// (0x00023cef) main_touch_calib_pane_g1_ParamLimits

0x5c60,	// (0x00023cfb) main_touch_calib_pane_g2_ParamLimits

0x5c6c,	// (0x00023d07) main_touch_calib_pane_g3_ParamLimits

0x5c78,	// (0x00023d13) main_touch_calib_pane_g4_ParamLimits

0xf74d,	// (0x0002d7e8) main_touch_calib_pane_g_ParamLimits

0x5c84,	// (0x00023d1f) main_touch_calib_pane_t1_ParamLimits

0x5c9d,	// (0x00023d38) main_touch_calib_pane_t2_ParamLimits

0x5cb6,	// (0x00023d51) main_touch_calib_pane_t3_ParamLimits

0x5ccc,	// (0x00023d67) main_touch_calib_pane_t4_ParamLimits

0x5ce2,	// (0x00023d7d) main_touch_calib_pane_t5_ParamLimits

0xf756,	// (0x0002d7f1) main_touch_calib_pane_t_ParamLimits

0xcc8b,	// (0x0002ad26) list_single_fp_cale_pane_g3_ParamLimits

0xcc8b,	// (0x0002ad26) list_single_fp_cale_pane_g3

0x14d6,	// (0x0001f571) bg_button_pane_cp012_ParamLimits

0x14d6,	// (0x0001f571) bg_vkb2_func_pane_cp03_ParamLimits

0x2568,	// (0x00020603) cell_vitu2_function_top_pane_g1_ParamLimits

0x14d6,	// (0x0001f571) bg_vkb2_func_pane_cp04_ParamLimits

0x7f93,	// (0x0002602e) main_ncimui_button_group_pane_ParamLimits

0x7f93,	// (0x0002602e) main_ncimui_button_group_pane

0x7ff9,	// (0x00026094) main_ncimui_pane_t3_ParamLimits

0x7ff9,	// (0x00026094) main_ncimui_pane_t3

0xe75d,	// (0x0002c7f8) phacti_button_group_pane

0xea52,	// (0x0002caed) aid_size_list_single_double_ParamLimits

0x917c,	// (0x00027217) popup_ezdial_listscroll_window_ParamLimits

0x919d,	// (0x00027238) popup_number_entry_window_cp01_ParamLimits

0x923f,	// (0x000272da) phacti_button_pane_ParamLimits

0x923f,	// (0x000272da) phacti_button_pane

0x9cf6,	// (0x00027d91) bg_button_pane_cp14

0xeb60,	// (0x0002cbfb) phacti_button_pane_t1

0x9250,	// (0x000272eb) main_touch_calib_button_pane_ParamLimits

0x9250,	// (0x000272eb) main_touch_calib_button_pane

0xa433,	// (0x000284ce) bg_button_pane_cp18_ParamLimits

0xa433,	// (0x000284ce) bg_button_pane_cp18

0xeb80,	// (0x0002cc1b) main_touch_calib_button_pane_t1_ParamLimits

0xeb80,	// (0x0002cc1b) main_touch_calib_button_pane_t1

0xeb96,	// (0x0002cc31) main_touch_calib_button_pane_t2_ParamLimits

0xeb96,	// (0x0002cc31) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0002dee2) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0002dee2) main_touch_calib_button_pane_t

0x9cf6,	// (0x00027d91) cell_ncimui_button_pane

0x9cf6,	// (0x00027d91) bg_button_pane_cp032

0xebb4,	// (0x0002cc4f) cell_ncimui_button_pane_t1

0x1d9d,	// (0x0001fe38) image3_infobar_pane_ParamLimits

0x1d9d,	// (0x0001fe38) image3_infobar_pane

0x83b6,	// (0x00026451) fs_bigclock_status_pane_ParamLimits

0x83b6,	// (0x00026451) fs_bigclock_status_pane

0x83c3,	// (0x0002645e) main_fs_bigclock_clock_pane_ParamLimits

0x83c3,	// (0x0002645e) main_fs_bigclock_clock_pane

0x83d7,	// (0x00026472) main_fs_bigclock_indi_pane_ParamLimits

0x83d7,	// (0x00026472) main_fs_bigclock_indi_pane

0x83ff,	// (0x0002649a) main_fs_bigclock_swipe_pane_ParamLimits

0x83ff,	// (0x0002649a) main_fs_bigclock_swipe_pane

0x9cf6,	// (0x00027d91) main_fs_clock_dumped_data

0xe116,	// (0x0002c1b1) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe116,	// (0x0002c1b1) list_single_fs_bigclock_indicator_pane_g1

0xe131,	// (0x0002c1cc) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe131,	// (0x0002c1cc) list_single_fs_bigclock_indicator_pane_g2

0xe14b,	// (0x0002c1e6) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe14b,	// (0x0002c1e6) list_single_fs_bigclock_indicator_pane_g3

0xe165,	// (0x0002c200) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe165,	// (0x0002c200) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0002dd0f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0002dd0f) list_single_fs_bigclock_indicator_pane_g

0xe190,	// (0x0002c22b) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe190,	// (0x0002c22b) list_single_fs_bigclock_indicator_pane_t1

0xe1b8,	// (0x0002c253) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe1b8,	// (0x0002c253) list_single_fs_bigclock_indicator_pane_t2

0xe1e0,	// (0x0002c27b) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe1e0,	// (0x0002c27b) list_single_fs_bigclock_indicator_pane_t3

0xe208,	// (0x0002c2a3) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe208,	// (0x0002c2a3) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0002dd1a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0002dd1a) list_single_fs_bigclock_indicator_pane_t

0xebc2,	// (0x0002cc5d) image3_infobar_fav_pane_ParamLimits

0xebc2,	// (0x0002cc5d) image3_infobar_fav_pane

0xebd2,	// (0x0002cc6d) image3_infobar_loc_pane_ParamLimits

0xebd2,	// (0x0002cc6d) image3_infobar_loc_pane

0xebe6,	// (0x0002cc81) image3_infobar_time_pane_ParamLimits

0xebe6,	// (0x0002cc81) image3_infobar_time_pane

0xc8fc,	// (0x0002a997) image3_infobar_time_pane_g1

0xebf6,	// (0x0002cc91) image3_infobar_time_pane_t1

0xc8fc,	// (0x0002a997) image3_infobar_loc_pane_g1

0xec04,	// (0x0002cc9f) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0002dee7) image3_infobar_loc_pane_g

0xec0c,	// (0x0002cca7) image3_infobar_loc_pane_t1

0xc8fc,	// (0x0002a997) image3_infobar_fav_pane_g1

0xec1a,	// (0x0002ccb5) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0002deec) image3_infobar_fav_pane_g

0xec22,	// (0x0002ccbd) fs_bigclock_status_battery_pane

0xec2b,	// (0x0002ccc6) fs_bigclock_status_signal_pane

0xec34,	// (0x0002cccf) fs_bigclock_status_title_pane

0xec3d,	// (0x0002ccd8) fs_bigclock_status_signal_pane_g1

0xec46,	// (0x0002cce1) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0002def1) fs_bigclock_status_signal_pane_g

0xec4e,	// (0x0002cce9) fs_bigclock_status_battery_pane_g1

0xec57,	// (0x0002ccf2) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0002def6) fs_bigclock_status_battery_pane_g

0xec5f,	// (0x0002ccfa) fs_bigclock_status_title_pane_t1

0x9260,	// (0x000272fb) main_fs_bigclock_clock_pane_g1

0x9260,	// (0x000272fb) main_fs_bigclock_clock_pane_g2

0x926d,	// (0x00027308) main_fs_bigclock_clock_pane_g3

0x926d,	// (0x00027308) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0002defb) main_fs_bigclock_clock_pane_g

0x9279,	// (0x00027314) main_fs_bigclock_clock_pane_t1

0x928c,	// (0x00027327) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0002df04) main_fs_bigclock_clock_pane_t

0xec6d,	// (0x0002cd08) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec6d,	// (0x0002cd08) list_single_fs_bigclock_indicator_pane

0xec7e,	// (0x0002cd19) list_single_fs_bigclock_pane_ParamLimits

0xec7e,	// (0x0002cd19) list_single_fs_bigclock_pane

0xeca4,	// (0x0002cd3f) main_fs_bigclock_indicator_pane_t1

0xecb3,	// (0x0002cd4e) list_single_fs_bigclock_pane_g1

0xecbb,	// (0x0002cd56) list_single_fs_bigclock_pane_t1

0xc8fc,	// (0x0002a997) main_fs_bigclock_swipe_pane_g1

0xecfe,	// (0x0002cd99) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0002df15) main_fs_bigclock_swipe_pane_g

0xed06,	// (0x0002cda1) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed06,	// (0x0002cda1) main_fs_bigclock_swipe_pane_t1

0x470e,	// (0x000227a9) call_type_pane_ParamLimits

0x9cf6,	// (0x00027d91) main_btmg_pane

0xe928,	// (0x0002c9c3) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe928,	// (0x0002c9c3) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0002de88) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0002de88) list_single_cale_mrui_row_pane_g

0xeaac,	// (0x0002cb47) list_recal_vselct_arw_lo_pane

0xeab4,	// (0x0002cb4f) list_recal_vselct_arw_up_pane

0xeabc,	// (0x0002cb57) list_recal_vselct_pane

0x92e3,	// (0x0002737e) btmg_button_pane

0x92ef,	// (0x0002738a) main_btmg_pane_g1

0x9cf6,	// (0x00027d91) bg_button_pane_cp044

0xed23,	// (0x0002cdbe) btmg_button_pane_t1

0xc4e0,	// (0x0002a57b) aid_listscroll_gen

0xa4d4,	// (0x0002856f) main_cntbar_detail_pane

0xe626,	// (0x0002c6c1) list_cmail_folder_pane

0xd4d2,	// (0x0002b56d) sp_fs_scroll_pane_cp03_ParamLimits

0x8dc0,	// (0x00026e5b) list_single_fs_dyc_pane_cp01_ParamLimits

0x8dc0,	// (0x00026e5b) list_single_fs_dyc_pane_cp01

0xed31,	// (0x0002cdcc) aid_size_cmail_indent

0xed3a,	// (0x0002cdd5) list_single_dyc_row_pane_cp01

0x9317,	// (0x000273b2) cntbar_detail_list_pane_ParamLimits

0x9317,	// (0x000273b2) cntbar_detail_list_pane

0x9351,	// (0x000273ec) main_cntbar_detail_cont_pane_ParamLimits

0x9351,	// (0x000273ec) main_cntbar_detail_cont_pane

0x4627,	// (0x000226c2) scroll_pane_cp032_ParamLimits

0x4627,	// (0x000226c2) scroll_pane_cp032

0x935d,	// (0x000273f8) cntbar_detail_list_event_pane_ParamLimits

0x935d,	// (0x000273f8) cntbar_detail_list_event_pane

0x9323,	// (0x000273be) cntbar_detail_list_shct_pane

0xa8b6,	// (0x00028951) aid_list_gen

0xed43,	// (0x0002cdde) aid_scroll

0xed4c,	// (0x0002cde7) aid_size_touch_scroll_bar

0xe310,	// (0x0002c3ab) aid_list_double

0x9371,	// (0x0002740c) aid_list_single

0x77a7,	// (0x00025842) aid_list_single_lg

0x937a,	// (0x00027415) aid_list_z_g_a_sm

0x9382,	// (0x0002741d) aid_list_z_g_d

0x938a,	// (0x00027425) aid_txt_z_prm

0x9398,	// (0x00027433) aid_txt_z_prm_cp01

0x93a6,	// (0x00027441) aid_txt_z_sec

0x93b4,	// (0x0002744f) main_cntbar_detail_cont_pane_g1_ParamLimits

0x93b4,	// (0x0002744f) main_cntbar_detail_cont_pane_g1

0x93c1,	// (0x0002745c) main_cntbar_detail_cont_pane_g2_ParamLimits

0x93c1,	// (0x0002745c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0002df1a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0002df1a) main_cntbar_detail_cont_pane_g

0xed55,	// (0x0002cdf0) main_cntbar_detail_cont_pane_t1

0xed63,	// (0x0002cdfe) main_cntbar_detail_cont_pane_t2

0xed71,	// (0x0002ce0c) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0002df1f) main_cntbar_detail_cont_pane_t

0x93cd,	// (0x00027468) cell_cntbar_detail_list_shct_pane_ParamLimits

0x93cd,	// (0x00027468) cell_cntbar_detail_list_shct_pane

0xed7f,	// (0x0002ce1a) cntbar_detail_list_shct_pane_g1

0xed88,	// (0x0002ce23) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0002df26) cntbar_detail_list_shct_pane_g

0x93e1,	// (0x0002747c) cntbar_detail_list_event_pane_g1_ParamLimits

0x93e1,	// (0x0002747c) cntbar_detail_list_event_pane_g1

0x93ed,	// (0x00027488) cntbar_detail_list_event_pane_g2_ParamLimits

0x93ed,	// (0x00027488) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0002df2b) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0002df2b) cntbar_detail_list_event_pane_g

0x9459,	// (0x000274f4) cntbar_detail_list_event_pane_t1_ParamLimits

0x9459,	// (0x000274f4) cntbar_detail_list_event_pane_t1

0x946e,	// (0x00027509) cntbar_detail_list_event_pane_t2_ParamLimits

0x946e,	// (0x00027509) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0002df38) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0002df38) cntbar_detail_list_event_pane_t

0xc8fc,	// (0x0002a997) cell_cntbar_detail_list_shct_pane_g1

0xb03b,	// (0x000290d6) navi_pane_mv_g3

0xa4d4,	// (0x0002856f) main_cntbar_detail_pane_ParamLimits

0x9cf6,	// (0x00027d91) main_notif_wgt_pane

0x1ab4,	// (0x0001fb4f) aid_tch_main_mp4_pane_g4

0x1d13,	// (0x0001fdae) popup_slider_window_cp02

0xeaa2,	// (0x0002cb3d) list_recal_day_event_pane

0x92f7,	// (0x00027392) cntbar_detail_btn_pane_ParamLimits

0x92f7,	// (0x00027392) cntbar_detail_btn_pane

0x9307,	// (0x000273a2) cntbar_detail_btn_pane_cp01_ParamLimits

0x9307,	// (0x000273a2) cntbar_detail_btn_pane_cp01

0x9323,	// (0x000273be) cntbar_detail_list_shct_pane_ParamLimits

0x932f,	// (0x000273ca) cntbar_detail_pane_g1_ParamLimits

0x932f,	// (0x000273ca) cntbar_detail_pane_g1

0x933b,	// (0x000273d6) cntbar_detail_pane_t1_ParamLimits

0x933b,	// (0x000273d6) cntbar_detail_pane_t1

0x93f9,	// (0x00027494) cntbar_detail_list_event_pane_g3_ParamLimits

0x93f9,	// (0x00027494) cntbar_detail_list_event_pane_g3

0x9411,	// (0x000274ac) cntbar_detail_list_event_pane_g4_ParamLimits

0x9411,	// (0x000274ac) cntbar_detail_list_event_pane_g4

0x9429,	// (0x000274c4) cntbar_detail_list_event_pane_g5_ParamLimits

0x9429,	// (0x000274c4) cntbar_detail_list_event_pane_g5

0x9441,	// (0x000274dc) cntbar_detail_list_event_pane_g6_ParamLimits

0x9441,	// (0x000274dc) cntbar_detail_list_event_pane_g6

0x9483,	// (0x0002751e) cntbar_detail_list_event_pane_t3_ParamLimits

0x9483,	// (0x0002751e) cntbar_detail_list_event_pane_t3

0x9495,	// (0x00027530) popup_notif_wgt_window_ParamLimits

0x9495,	// (0x00027530) popup_notif_wgt_window

0x94a5,	// (0x00027540) popup_submenu_window_cp01_ParamLimits

0x94a5,	// (0x00027540) popup_submenu_window_cp01

0xa60f,	// (0x000286aa) bg_popup_window_pane_cp10

0xed91,	// (0x0002ce2c) listscroll_notif_wgt_pane

0xeda3,	// (0x0002ce3e) list_notif_wgt_window

0xedac,	// (0x0002ce47) scroll_pane_cp033

0x94b7,	// (0x00027552) list_notif_wgt_row_pane_ParamLimits

0x94b7,	// (0x00027552) list_notif_wgt_row_pane

0xedb5,	// (0x0002ce50) aid_size_list_notif_wgt_del

0xedc2,	// (0x0002ce5d) list_notif_wgt_row_pane_g1

0xedce,	// (0x0002ce69) list_notif_wgt_row_pane_g2

0xeddd,	// (0x0002ce78) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0002df3f) list_notif_wgt_row_pane_g

0xedea,	// (0x0002ce85) list_notif_wgt_row_pane_t1

0xee00,	// (0x0002ce9b) list_notif_wgt_row_pane_t2

0xee12,	// (0x0002cead) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0002df46) list_notif_wgt_row_pane_t

0xd592,	// (0x0002b62d) list_recal_day_event_pane_g1

0xee24,	// (0x0002cebf) list_recal_day_event_pane_t1

0x9cf6,	// (0x00027d91) bg_button_pane_cp045

0x94c9,	// (0x00027564) cntbar_detail_btn_pane_t1

0xc4f4,	// (0x0002a58f) main_callh_pane_ParamLimits

0xc4f4,	// (0x0002a58f) main_callh_pane

0x9cf6,	// (0x00027d91) main_coverflow0_pane

0x9cf6,	// (0x00027d91) main_wgtman_pane

0x8417,	// (0x000264b2) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8417,	// (0x000264b2) main_fs_bigclock_unlock_btn_pane

0x8d26,	// (0x00026dc1) bg_button_pane_cp16

0x8d36,	// (0x00026dd1) cell_tport_appsw_pane_g3

0x94d7,	// (0x00027572) cf0_flow_pane_ParamLimits

0x94d7,	// (0x00027572) cf0_flow_pane

0xee33,	// (0x0002cece) listscroll_cf0_pane

0xee3e,	// (0x0002ced9) main_cf0_pane_g1

0x94e6,	// (0x00027581) main_cf0_pane_t1_ParamLimits

0x94e6,	// (0x00027581) main_cf0_pane_t1

0x94fa,	// (0x00027595) main_cf0_pane_t2_ParamLimits

0x94fa,	// (0x00027595) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0002df52) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0002df52) main_cf0_pane_t

0xee50,	// (0x0002ceeb) scroll_pane_cp11

0x950e,	// (0x000275a9) cf0_flow_pane_g1

0x9516,	// (0x000275b1) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0002df57) cf0_flow_pane_g

0x951e,	// (0x000275b9) cf0_flow_pane_t1

0x9cf6,	// (0x00027d91) main_call6_pane

0x9cf6,	// (0x00027d91) main_calllock_pane

0x2795,	// (0x00020830) call6_btn_grp_pane_ParamLimits

0x2795,	// (0x00020830) call6_btn_grp_pane

0x27a4,	// (0x0002083f) call6_pane_g1_ParamLimits

0x27a4,	// (0x0002083f) call6_pane_g1

0x27b4,	// (0x0002084f) popup_call6_1st_window_ParamLimits

0x27b4,	// (0x0002084f) popup_call6_1st_window

0x27c2,	// (0x0002085d) popup_call6_2nd_window_ParamLimits

0x27c2,	// (0x0002085d) popup_call6_2nd_window

0x27d0,	// (0x0002086b) cell_call6_btn_pane_ParamLimits

0x27d0,	// (0x0002086b) cell_call6_btn_pane

0xa60f,	// (0x000286aa) bg_popup_call2_in_pane_cp03

0xee5b,	// (0x0002cef6) popup_call6_1st_window_g1

0xee63,	// (0x0002cefe) popup_call6_1st_window_g2

0xee6b,	// (0x0002cf06) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0002df5c) popup_call6_1st_window_g

0xee73,	// (0x0002cf0e) popup_call6_1st_window_t1

0xee82,	// (0x0002cf1d) popup_call6_1st_window_t2

0xee90,	// (0x0002cf2b) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0002df63) popup_call6_1st_window_t

0xa60f,	// (0x000286aa) bg_popup_call2_in_pane_cp04

0xee5b,	// (0x0002cef6) popup_call6_2nd_window_g1

0xee63,	// (0x0002cefe) popup_call6_2nd_window_g2

0xee6b,	// (0x0002cf06) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0002df5c) popup_call6_2nd_window_g

0xee73,	// (0x0002cf0e) popup_call6_2nd_window_t1

0x107e,	// (0x0001f119) bg_button_pane_cp15

0x27df,	// (0x0002087a) cell_call6_btn_pane_g1

0x27e8,	// (0x00020883) cell_call6_btn_pane_t1

0x952c,	// (0x000275c7) listscroll_wgtman_pane_ParamLimits

0x952c,	// (0x000275c7) listscroll_wgtman_pane

0x9548,	// (0x000275e3) wgtman_btn_pane_ParamLimits

0x9548,	// (0x000275e3) wgtman_btn_pane

0xae42,	// (0x00028edd) aid_scroll_copy1

0xee9e,	// (0x0002cf39) list_wgtman_pane

0x957d,	// (0x00027618) wgtman_btn_pane_g1_ParamLimits

0x957d,	// (0x00027618) wgtman_btn_pane_g1

0x95a5,	// (0x00027640) wgtman_btn_pane_t1_ParamLimits

0x95a5,	// (0x00027640) wgtman_btn_pane_t1

0xeea8,	// (0x0002cf43) wgtman_btn_pane_t2_ParamLimits

0xeea8,	// (0x0002cf43) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0002df6a) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0002df6a) wgtman_btn_pane_t

0x95dc,	// (0x00027677) listrow_wgtman_pane_ParamLimits

0x95dc,	// (0x00027677) listrow_wgtman_pane

0x95f7,	// (0x00027692) listrow_wgtman_pane_g1

0x9604,	// (0x0002769f) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0002df6f) listrow_wgtman_pane_g

0x9622,	// (0x000276bd) listrow_wgtman_pane_t1

0x963a,	// (0x000276d5) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0002df74) listrow_wgtman_pane_t

0x9660,	// (0x000276fb) wait_bar_pane_cp09

0xeebf,	// (0x0002cf5a) main_calllock_btn_pane

0xeec9,	// (0x0002cf64) main_calllock_pane_g1

0x9cf6,	// (0x00027d91) bg_button_pane_cp17

0xeed5,	// (0x0002cf70) main_calllock_btn_pane_g1

0xeede,	// (0x0002cf79) main_calllock_btn_pane_t1

0x9cf6,	// (0x00027d91) main_dialer3_pane

0x9cf6,	// (0x00027d91) main_fmrd2_pane

0xc8fc,	// (0x0002a997) main_fs_bigclock_unlock_btn_pane_g1

0x967a,	// (0x00027715) main_fs_bigclock_unlock_btn_pane_t1

0x9688,	// (0x00027723) area_fmrd2_info_pane_ParamLimits

0x9688,	// (0x00027723) area_fmrd2_info_pane

0x9696,	// (0x00027731) area_fmrd2_visual_pane_ParamLimits

0x9696,	// (0x00027731) area_fmrd2_visual_pane

0x96a4,	// (0x0002773f) fmrd2_indi_pane_ParamLimits

0x96a4,	// (0x0002773f) fmrd2_indi_pane

0x96b1,	// (0x0002774c) area_fmrd2_visual_pane_g1

0x96b9,	// (0x00027754) area_fmrd2_visual_pane_t1

0x96c9,	// (0x00027764) area_fmrd2_visual_pane_t2

0x96d9,	// (0x00027774) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0002df7e) area_fmrd2_visual_pane_t

0x96e9,	// (0x00027784) area_fmrd2_info_pane_g1

0x96f1,	// (0x0002778c) area_fmrd2_info_pane_t1

0x9701,	// (0x0002779c) area_fmrd2_info_pane_t2

0x9711,	// (0x000277ac) area_fmrd2_info_pane_t3

0x9721,	// (0x000277bc) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0002df85) area_fmrd2_info_pane_t

0x972f,	// (0x000277ca) fmrd2_indi_pane_t1

0x973f,	// (0x000277da) fmrd2_indi_pane_t2

0x974f,	// (0x000277ea) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0002df8e) fmrd2_indi_pane_t

0xe174,	// (0x0002c20f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe174,	// (0x0002c20f) list_single_fs_bigclock_indicator_pane_g5

0xe225,	// (0x0002c2c0) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe225,	// (0x0002c2c0) list_single_fs_bigclock_indicator_pane_t5

0x8ed1,	// (0x00026f6c) aid_cell_bcale_month_pane_ParamLimits

0x8ed1,	// (0x00026f6c) aid_cell_bcale_month_pane

0x8eef,	// (0x00026f8a) bcale_month_pane_ParamLimits

0x8eef,	// (0x00026f8a) bcale_month_pane

0x8f0d,	// (0x00026fa8) bcale_preview_pane_ParamLimits

0x8f0d,	// (0x00026fa8) bcale_preview_pane

0xecbb,	// (0x0002cd56) list_single_fs_bigclock_pane_t1_ParamLimits

0xecda,	// (0x0002cd75) list_single_fs_bigclock_pane_t2_ParamLimits

0xecda,	// (0x0002cd75) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0002df10) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0002df10) list_single_fs_bigclock_pane_t

0x9672,	// (0x0002770d) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0002df79) main_fs_bigclock_unlock_btn_pane_g

0x975d,	// (0x000277f8) aid_dia3_key_size_ParamLimits

0x975d,	// (0x000277f8) aid_dia3_key_size

0x9769,	// (0x00027804) aid_dia3_listrow_size_ParamLimits

0x9769,	// (0x00027804) aid_dia3_listrow_size

0x9779,	// (0x00027814) dia3_keypad_fun_pane_ParamLimits

0x9779,	// (0x00027814) dia3_keypad_fun_pane

0x978b,	// (0x00027826) dia3_keypad_num_pane_ParamLimits

0x978b,	// (0x00027826) dia3_keypad_num_pane

0x979d,	// (0x00027838) dia3_listscroll_pane_ParamLimits

0x979d,	// (0x00027838) dia3_listscroll_pane

0x97ab,	// (0x00027846) dia3_numentry_pane_ParamLimits

0x97ab,	// (0x00027846) dia3_numentry_pane

0xeeed,	// (0x0002cf88) dia3_list_pane

0xeef8,	// (0x0002cf93) scroll_pane_cp12

0x9cf6,	// (0x00027d91) bg_dia3_numentry_pane

0x97b9,	// (0x00027854) dia3_numentry_pane_t1

0x97c8,	// (0x00027863) cell_dia3_key_num_pane

0x97d0,	// (0x0002786b) cell_dia3_key0_fun_pane_ParamLimits

0x97d0,	// (0x0002786b) cell_dia3_key0_fun_pane

0x97dd,	// (0x00027878) cell_dia3_key1_fun_pane_ParamLimits

0x97dd,	// (0x00027878) cell_dia3_key1_fun_pane

0x97ea,	// (0x00027885) dia3_listrow_pane

0xdec7,	// (0x0002bf62) bg_dia3_numentry_pane_g1

0x9cf6,	// (0x00027d91) bg_button_pane_cp21

0xef03,	// (0x0002cf9e) cell_dia3_key_num_pane_t1

0xef11,	// (0x0002cfac) cell_dia3_key_num_pane_t2

0xef20,	// (0x0002cfbb) cell_dia3_key_num_pane_t3

0xef2f,	// (0x0002cfca) cell_dia3_key_num_pane_t4

0x0003,

0x0d84,	// (0x0001ee1f) cell_dia3_key_num_pane_t

0x9cf6,	// (0x00027d91) bg_button_pane_cp19

0x97f7,	// (0x00027892) cell_dia3_key0_fun_pane_g1

0x9cf6,	// (0x00027d91) bg_button_pane_cp20

0x97ff,	// (0x0002789a) cell_dia3_key1_fun_pane_g1

0x9807,	// (0x000278a2) area_left_week_number_pane

0x981a,	// (0x000278b5) area_top_day_name_pane

0x9828,	// (0x000278c3) frame_month_view_pane

0xef3e,	// (0x0002cfd9) grid_month_view_pane

0x983d,	// (0x000278d8) cell_top_day_name_pane_ParamLimits

0x983d,	// (0x000278d8) cell_top_day_name_pane

0x9857,	// (0x000278f2) cell_area_left_week_number_pane_ParamLimits

0x9857,	// (0x000278f2) cell_area_left_week_number_pane

0x987a,	// (0x00027915) cell_month_view_pane_ParamLimits

0x987a,	// (0x00027915) cell_month_view_pane

0xef4c,	// (0x0002cfe7) frm_month_g1

0x98a6,	// (0x00027941) frm_month_g2

0x98b7,	// (0x00027952) frm_month_g3

0x98c8,	// (0x00027963) frm_month_g4

0x98d9,	// (0x00027974) frm_month_g5

0x98ec,	// (0x00027987) frm_month_g6

0x98ff,	// (0x0002799a) frm_month_g7

0xef59,	// (0x0002cff4) frm_month_g8

0x9912,	// (0x000279ad) frm_month_g9

0x991f,	// (0x000279ba) frm_month_g10

0x992c,	// (0x000279c7) frm_month_g11

0x9939,	// (0x000279d4) frm_month_g12

0x9946,	// (0x000279e1) frm_month_g13

0x9953,	// (0x000279ee) frm_month_g14

0x9962,	// (0x000279fd) frm_month_g15

0x9971,	// (0x00027a0c) frm_month_g16

0x000f,

0xfefa,	// (0x0002df95) frm_month_g

0xef66,	// (0x0002d001) cell_top_day_name_pane_t1

0x9980,	// (0x00027a1b) cell_area_left_week_number_pane_g1

0x998f,	// (0x00027a2a) cell_area_left_week_number_pane_t1

0xcb5f,	// (0x0002abfa) cell_month_view_pane_g1

0x99a5,	// (0x00027a40) cell_month_view_pane_t1

0x9cf6,	// (0x00027d91) main_fps_pane

0xe44b,	// (0x0002c4e6) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe44b,	// (0x0002c4e6) cmail_ddmenu_btn02_pane_cp1

0xe467,	// (0x0002c502) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe467,	// (0x0002c502) cmail_ddmenu_btn02_pane_cp2

0x91c7,	// (0x00027262) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x91c7,	// (0x00027262) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0002dec3) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0002dec3) cmail_ddmenu_btn02_pane_g

0x91e5,	// (0x00027280) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x91e5,	// (0x00027280) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0002dec8) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0002dec8) cmail_ddmenu_btn02_pane_t

0x99bb,	// (0x00027a56) fps_text_pane_ParamLimits

0x99bb,	// (0x00027a56) fps_text_pane

0x99c8,	// (0x00027a63) main_fps_pane_g1_ParamLimits

0x99c8,	// (0x00027a63) main_fps_pane_g1

0x99d6,	// (0x00027a71) wait_bar_pane_cp010_ParamLimits

0x99d6,	// (0x00027a71) wait_bar_pane_cp010

0x99e2,	// (0x00027a7d) fps_text_pane_t1_ParamLimits

0x99e2,	// (0x00027a7d) fps_text_pane_t1

0x6b30,	// (0x00024bcb) cam4_image_uncrop_pane_g1

0x6b39,	// (0x00024bd4) cam4_image_uncrop_pane_g2

0x6b42,	// (0x00024bdd) cam4_image_uncrop_pane_g3

0x6b4b,	// (0x00024be6) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0002d989) cam4_image_uncrop_pane_g

0x97ea,	// (0x00027885) dia3_listrow_pane_ParamLimits

0x9cf6,	// (0x00027d91) main_phob2_pane

0x8d08,	// (0x00026da3) cell_tport_appsw_pane_cp02_ParamLimits

0x8d08,	// (0x00026da3) cell_tport_appsw_pane_cp02

0x8d17,	// (0x00026db2) cell_tport_appsw_pane_cp03_ParamLimits

0x8d17,	// (0x00026db2) cell_tport_appsw_pane_cp03

0x9cf6,	// (0x00027d91) phob2_contact_card_pane

0x9cf6,	// (0x00027d91) phob2_listscroll_pane

0xef79,	// (0x0002d014) phob2_list_pane

0xef81,	// (0x0002d01c) scroll_pane_cp034

0x99fb,	// (0x00027a96) phob2_cc_data_pane_ParamLimits

0x99fb,	// (0x00027a96) phob2_cc_data_pane

0x9a15,	// (0x00027ab0) phob2_cc_listscroll_pane_ParamLimits

0x9a15,	// (0x00027ab0) phob2_cc_listscroll_pane

0x95dc,	// (0x00027677) list_double_large_graphic_phob2_pane_ParamLimits

0x95dc,	// (0x00027677) list_double_large_graphic_phob2_pane

0x9a2f,	// (0x00027aca) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9a2f,	// (0x00027aca) list_double_large_graphic_phob2_pane_g1

0x9a45,	// (0x00027ae0) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9a45,	// (0x00027ae0) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff1b,	// (0x0002dfb6) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff1b,	// (0x0002dfb6) list_double_large_graphic_phob2_pane_g

0x9a51,	// (0x00027aec) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9a51,	// (0x00027aec) list_double_large_graphic_phob2_pane_t1

0x9a66,	// (0x00027b01) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9a66,	// (0x00027b01) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff20,	// (0x0002dfbb) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff20,	// (0x0002dfbb) list_double_large_graphic_phob2_pane_t

0x9cf6,	// (0x00027d91) list_highlight_pane_cp024

0x9a78,	// (0x00027b13) phob2_cc_button_pane

0x9a80,	// (0x00027b1b) phob2_cc_data_pane_g1_ParamLimits

0x9a80,	// (0x00027b1b) phob2_cc_data_pane_g1

0x9a8c,	// (0x00027b27) phob2_cc_data_pane_g2_ParamLimits

0x9a8c,	// (0x00027b27) phob2_cc_data_pane_g2

0x0001,

0xff25,	// (0x0002dfc0) phob2_cc_data_pane_g_ParamLimits

0xff25,	// (0x0002dfc0) phob2_cc_data_pane_g

0x9a98,	// (0x00027b33) phob2_cc_data_pane_t1_ParamLimits

0x9a98,	// (0x00027b33) phob2_cc_data_pane_t1

0x9aaa,	// (0x00027b45) phob2_cc_data_pane_t2_ParamLimits

0x9aaa,	// (0x00027b45) phob2_cc_data_pane_t2

0x9abc,	// (0x00027b57) phob2_cc_data_pane_t3_ParamLimits

0x9abc,	// (0x00027b57) phob2_cc_data_pane_t3

0x0002,

0xff2a,	// (0x0002dfc5) phob2_cc_data_pane_t_ParamLimits

0xff2a,	// (0x0002dfc5) phob2_cc_data_pane_t

0xef89,	// (0x0002d024) phob2_cc_list_pane_ParamLimits

0xef89,	// (0x0002d024) phob2_cc_list_pane

0xd74c,	// (0x0002b7e7) scroll_pane_cp035_ParamLimits

0xd74c,	// (0x0002b7e7) scroll_pane_cp035

0xa4d4,	// (0x0002856f) bg_button_pane_cp033

0xef95,	// (0x0002d030) phob2_cc_button_pane_g1

0xefa1,	// (0x0002d03c) phob2_cc_button_pane_t1

0xefb6,	// (0x0002d051) phob2_cc_button_pane_t2

0x0001,

0x0dc4,	// (0x0001ee5f) phob2_cc_button_pane_t

0x9ace,	// (0x00027b69) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9ace,	// (0x00027b69) list_double_large_graphic_phob2_cc_pane

0x9b3c,	// (0x00027bd7) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9b3c,	// (0x00027bd7) list_double_large_graphic_phob2_cc_pane_g1

0x9b4d,	// (0x00027be8) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9b4d,	// (0x00027be8) list_double_large_graphic_phob2_cc_pane_g2

0x9b5c,	// (0x00027bf7) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9b5c,	// (0x00027bf7) list_double_large_graphic_phob2_cc_pane_g3

0x9b6b,	// (0x00027c06) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9b6b,	// (0x00027c06) list_double_large_graphic_phob2_cc_pane_g4

0x9b7c,	// (0x00027c17) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9b7c,	// (0x00027c17) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff31,	// (0x0002dfcc) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff31,	// (0x0002dfcc) list_double_large_graphic_phob2_cc_pane_g

0x9b8b,	// (0x00027c26) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9b8b,	// (0x00027c26) list_double_large_graphic_phob2_cc_pane_t1

0x9bb4,	// (0x00027c4f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9bb4,	// (0x00027c4f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff3c,	// (0x0002dfd7) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff3c,	// (0x0002dfd7) list_double_large_graphic_phob2_cc_pane_t

0xefc8,	// (0x0002d063) list_highlight_pane_cp025_ParamLimits

0xefc8,	// (0x0002d063) list_highlight_pane_cp025

0xa4d4,	// (0x0002856f) bg_button_pane_cp033_ParamLimits

0xef95,	// (0x0002d030) phob2_cc_button_pane_g1_ParamLimits

0xefa1,	// (0x0002d03c) phob2_cc_button_pane_t1_ParamLimits

0xefb6,	// (0x0002d051) phob2_cc_button_pane_t2_ParamLimits

0x0dc4,	// (0x0001ee5f) phob2_cc_button_pane_t_ParamLimits

0x286a,	// (0x00020905) popup_wgtman_window

0xd432,	// (0x0002b4cd) scroll_pane_cp038

0x9565,	// (0x00027600) wgtman_btn_pane_cp_01_ParamLimits

0x9565,	// (0x00027600) wgtman_btn_pane_cp_01

0xefd6,	// (0x0002d071) wgtman_content_pane

0xefdf,	// (0x0002d07a) wgtman_heading_pane

0x9cf6,	// (0x00027d91) bg_heading_pane_cp02

0xefe8,	// (0x0002d083) wgtman_heading_pane_g1

0xeff0,	// (0x0002d08b) wgtman_heading_pane_t1

0xeffe,	// (0x0002d099) scroll_pane_cp036

0xf006,	// (0x0002d0a1) wgtman_list_pane

0xf00e,	// (0x0002d0a9) wgtman_list_pane_t1_ParamLimits

0xf00e,	// (0x0002d0a9) wgtman_list_pane_t1

0x1fc8,	// (0x00020063) cam4_grid_pane

0x730c,	// (0x000253a7) bg_button_pane_cp015_ParamLimits

0x731e,	// (0x000253b9) bg_button_pane_cp016_ParamLimits

0x7331,	// (0x000253cc) bg_button_pane_cp017_ParamLimits

0x7387,	// (0x00025422) popup_vitu2_query_window_g3_ParamLimits

0x7387,	// (0x00025422) popup_vitu2_query_window_g3

0x7442,	// (0x000254dd) popup_vitu2_query_window_t6_ParamLimits

0x7442,	// (0x000254dd) popup_vitu2_query_window_t6

0x746d,	// (0x00025508) popup_vitu2_query_window_t7_ParamLimits

0x746d,	// (0x00025508) popup_vitu2_query_window_t7

0xeb6e,	// (0x0002cc09) cam4_grid_pane_g1

0xeb77,	// (0x0002cc12) cam4_grid_pane_g2

0xf028,	// (0x0002d0c3) cam4_grid_pane_g3

0xf031,	// (0x0002d0cc) cam4_grid_pane_g4

0x0003,

0xff41,	// (0x0002dfdc) cam4_grid_pane_g

0x3412,	// (0x000214ad) aid_placing_vt_slider_lsc_ParamLimits

0x375e,	// (0x000217f9) vidtel_button_pane_ParamLimits

0x375e,	// (0x000217f9) vidtel_button_pane

0x9cf6,	// (0x00027d91) bg_button_pane_cp034

0xf03c,	// (0x0002d0d7) vidtel_button_pane_g1

0xf044,	// (0x0002d0df) vidtel_button_pane_t1

0xd570,	// (0x0002b60b) aid_size_vtel_slider_touch

0xd74c,	// (0x0002b7e7) scroll_pane_cp039

0x8154,	// (0x000261ef) ncim_query_button_pane_cp01_ParamLimits

0x8173,	// (0x0002620e) ncimui_query_pane_g1_ParamLimits

0xa4d4,	// (0x0002856f) input_focus_pane_cp012_ParamLimits

0xdf05,	// (0x0002bfa0) ncim_query_entry_pane_t1_ParamLimits

0xd74c,	// (0x0002b7e7) scroll_pane_cp039_ParamLimits

0xaf26,	// (0x00028fc1) navi_pane_bcale_mc_g1

0xaf2e,	// (0x00028fc9) navi_pane_bcale_mc_t1

0xe4b0,	// (0x0002c54b) main_sp_fs_email_pane_g1

0xe4bc,	// (0x0002c557) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0002dd80) main_sp_fs_email_pane_g

0xe934,	// (0x0002c9cf) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe934,	// (0x0002c9cf) list_single_cale_mrui_row_pane_g3

0x9205,	// (0x000272a0) list_single_recal_day_pane_g5_event_pane

0xeb13,	// (0x0002cbae) list_single_recal_day_pane_g7

0xf05a,	// (0x0002d0f5) list_recal_day_event_pane_cp01

0xf063,	// (0x0002d0fe) list_recal_vselct_arw_lo_pane_cp01

0xf06b,	// (0x0002d106) list_recal_vselct_arw_up_pane_cp01

0xf073,	// (0x0002d10e) list_recal_vselct_pane_cp01

0xd592,	// (0x0002b62d) list_recal_day_event_pane_cp01_g1

0xf07d,	// (0x0002d118) list_recal_day_event_pane_cp01_t1

0xeb1b,	// (0x0002cbb6) list_single_recal_day_pane_t1_ParamLimits

0xeb2d,	// (0x0002cbc8) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0002ded8) list_single_recal_day_pane_t_ParamLimits

0xa36e,	// (0x00028409) bg_notes_pane_ParamLimits

0xa411,	// (0x000284ac) list_notes_pane_ParamLimits

0x2af1,	// (0x00020b8c) scroll_pane_cp06_ParamLimits

0xa433,	// (0x000284ce) main_notes_pane_ParamLimits

0x9cf6,	// (0x00027d91) main_welc_pane

0x9bdd,	// (0x00027c78) main_welc_body_pane_ParamLimits

0x9bdd,	// (0x00027c78) main_welc_body_pane

0x9bf7,	// (0x00027c92) main_welc_opti_pane_ParamLimits

0x9bf7,	// (0x00027c92) main_welc_opti_pane

0x9c2a,	// (0x00027cc5) main_welc_pane_t1_ParamLimits

0x9c2a,	// (0x00027cc5) main_welc_pane_t1

0x9c44,	// (0x00027cdf) main_welc_body_row_pane_ParamLimits

0x9c44,	// (0x00027cdf) main_welc_body_row_pane

0xd32c,	// (0x0002b3c7) main_welc_opti_row_pane_ParamLimits

0xd32c,	// (0x0002b3c7) main_welc_opti_row_pane

0xf08b,	// (0x0002d126) main_welc_opti_row_pane_g1

0x9c69,	// (0x00027d04) main_welc_opti_row_pane_t1

0xf093,	// (0x0002d12e) main_welc_body_row_pane_t1

0xed9b,	// (0x0002ce36) popup_notif_wgt_heading_pane

0xedb5,	// (0x0002ce50) aid_size_list_notif_wgt_del_ParamLimits

0xedc2,	// (0x0002ce5d) list_notif_wgt_row_pane_g1_ParamLimits

0xedce,	// (0x0002ce69) list_notif_wgt_row_pane_g2_ParamLimits

0xeddd,	// (0x0002ce78) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0002df3f) list_notif_wgt_row_pane_g_ParamLimits

0xedea,	// (0x0002ce85) list_notif_wgt_row_pane_t1_ParamLimits

0xee00,	// (0x0002ce9b) list_notif_wgt_row_pane_t2_ParamLimits

0xee12,	// (0x0002cead) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0002df46) list_notif_wgt_row_pane_t_ParamLimits

0x95f7,	// (0x00027692) listrow_wgtman_pane_g1_ParamLimits

0x9604,	// (0x0002769f) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0002df6f) listrow_wgtman_pane_g_ParamLimits

0x9622,	// (0x000276bd) listrow_wgtman_pane_t1_ParamLimits

0x963a,	// (0x000276d5) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0002df74) listrow_wgtman_pane_t_ParamLimits

0x9660,	// (0x000276fb) wait_bar_pane_cp09_ParamLimits

0x9cf6,	// (0x00027d91) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0002d13d) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0002d145) popup_notif_wgt_heading_pane_t1

0x9cf6,	// (0x00027d91) main_vids_pane

0x9cf6,	// (0x00027d91) vids_listscroll_pane

0x9c78,	// (0x00027d13) scroll_pane_cp040

0x9cf6,	// (0x00027d91) vids_list_pane

0x9c83,	// (0x00027d1e) vids_list_double_pane_ParamLimits

0x9c83,	// (0x00027d1e) vids_list_double_pane

0x9c9d,	// (0x00027d38) vids_list_double_pane_g1

0x9ca6,	// (0x00027d41) vids_list_double_pane_t1

0x9cb6,	// (0x00027d51) vids_list_double_pane_t2

0x0001,

0xff4f,	// (0x0002dfea) vids_list_double_pane_t

0x14d6,	// (0x0001f571) main_ncimui_pane_ParamLimits

0x7fab,	// (0x00026046) main_ncimui_pane_g1_ParamLimits

0x7fb7,	// (0x00026052) main_ncimui_pane_g2_ParamLimits

0x7fb7,	// (0x00026052) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0002dc85) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0002dc85) main_ncimui_pane_g

0x9c10,	// (0x00027cab) main_welc_pane_g1_ParamLimits

0x9c10,	// (0x00027cab) main_welc_pane_g1

0x9c1c,	// (0x00027cb7) main_welc_pane_g2_ParamLimits

0x9c1c,	// (0x00027cb7) main_welc_pane_g2

0x0001,

0xff4a,	// (0x0002dfe5) main_welc_pane_g_ParamLimits

0xff4a,	// (0x0002dfe5) main_welc_pane_g

0xa36e,	// (0x00028409) listscroll_mce_pane_ParamLimits

0xb07b,	// (0x00029116) wait_bar_pane_cp10

0xc4e8,	// (0x0002a583) main_cale_day_pane_ParamLimits

0xc4e8,	// (0x0002a583) main_cale_week_pane_ParamLimits

0xa36e,	// (0x00028409) main_messa_pane_ParamLimits

0x64ea,	// (0x00024585) main_clock2_btn_pane_ParamLimits

0x64ea,	// (0x00024585) main_clock2_btn_pane

0xcd13,	// (0x0002adae) main_clock2_btn_pane_cp01_ParamLimits

0xcd13,	// (0x0002adae) main_clock2_btn_pane_cp01

0xe8c0,	// (0x0002c95b) list_cale_mrui_pane_ParamLimits

0xee48,	// (0x0002cee3) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0002df4d) main_cf0_pane_g

0x9807,	// (0x000278a2) area_left_week_number_pane_ParamLimits

0x981a,	// (0x000278b5) area_top_day_name_pane_ParamLimits

0x9828,	// (0x000278c3) frame_month_view_pane_ParamLimits

0xef3e,	// (0x0002cfd9) grid_month_view_pane_ParamLimits

0xef4c,	// (0x0002cfe7) frm_month_g1_ParamLimits

0x98a6,	// (0x00027941) frm_month_g2_ParamLimits

0x98b7,	// (0x00027952) frm_month_g3_ParamLimits

0x98c8,	// (0x00027963) frm_month_g4_ParamLimits

0x98d9,	// (0x00027974) frm_month_g5_ParamLimits

0x98ec,	// (0x00027987) frm_month_g6_ParamLimits

0x98ff,	// (0x0002799a) frm_month_g7_ParamLimits

0xef59,	// (0x0002cff4) frm_month_g8_ParamLimits

0x9912,	// (0x000279ad) frm_month_g9_ParamLimits

0x991f,	// (0x000279ba) frm_month_g10_ParamLimits

0x992c,	// (0x000279c7) frm_month_g11_ParamLimits

0x9939,	// (0x000279d4) frm_month_g12_ParamLimits

0x9946,	// (0x000279e1) frm_month_g13_ParamLimits

0x9953,	// (0x000279ee) frm_month_g14_ParamLimits

0x9962,	// (0x000279fd) frm_month_g15_ParamLimits

0x9971,	// (0x00027a0c) frm_month_g16_ParamLimits

0xfefa,	// (0x0002df95) frm_month_g_ParamLimits

0xef66,	// (0x0002d001) cell_top_day_name_pane_t1_ParamLimits

0x9980,	// (0x00027a1b) cell_area_left_week_number_pane_g1_ParamLimits

0x998f,	// (0x00027a2a) cell_area_left_week_number_pane_t1_ParamLimits

0xcb5f,	// (0x0002abfa) cell_month_view_pane_g1_ParamLimits

0x99a5,	// (0x00027a40) cell_month_view_pane_t1_ParamLimits

0xa366,	// (0x00028401) main_clock2_btn_pane_g1

0xf0b8,	// (0x0002d153) main_clock2_btn_pane_t1

0xa4d4,	// (0x0002856f) listscroll_cmail_pane_ParamLimits

0xe4b0,	// (0x0002c54b) main_sp_fs_email_pane_g1_ParamLimits

0xe4bc,	// (0x0002c557) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0002dd80) main_sp_fs_email_pane_g_ParamLimits

0xea83,	// (0x0002cb1e) list_recal_day_pane_ParamLimits

0xea94,	// (0x0002cb2f) mian_recal_day_pane_t1

0x89d4,	// (0x00026a6f) list_single_dyc_row_text_pane_t4_ParamLimits

0x89d4,	// (0x00026a6f) list_single_dyc_row_text_pane_t4

0x8a0b,	// (0x00026aa6) list_single_dyc_row_text_pane_t5_ParamLimits

0x8a0b,	// (0x00026aa6) list_single_dyc_row_text_pane_t5

0xe562,	// (0x0002c5fd) list_single_dyc_row_text_pane_t6_ParamLimits

0xe562,	// (0x0002c5fd) list_single_dyc_row_text_pane_t6

0x4559,	// (0x000225f4) aid_mgn_list_cale_time_pane

0x14d6,	// (0x0001f571) main_gallery2_pane_ParamLimits

0xcd29,	// (0x0002adc4) main_clock2_pane_cp01_t1

0xcd39,	// (0x0002add4) main_clock2_pane_cp01_t3

0x0001,

0xf7c0,	// (0x0002d85b) main_clock2_pane_cp01_t

0x2e18,	// (0x00020eb3) cale_week_scroll_pane_g16_ParamLimits

0x2e18,	// (0x00020eb3) cale_week_scroll_pane_g16

0xa60f,	// (0x000286aa) vorec_slider_pane

0xf044,	// (0x0002d0df) vidtel_button_pane_t1_ParamLimits

0x9260,	// (0x000272fb) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9260,	// (0x000272fb) main_fs_bigclock_clock_pane_g2_ParamLimits

0x926d,	// (0x00027308) main_fs_bigclock_clock_pane_g3_ParamLimits

0x926d,	// (0x00027308) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe60,	// (0x0002defb) main_fs_bigclock_clock_pane_g_ParamLimits

0x9279,	// (0x00027314) main_fs_bigclock_clock_pane_t1_ParamLimits

0x928c,	// (0x00027327) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe69,	// (0x0002df04) main_fs_bigclock_clock_pane_t_ParamLimits

0x5d89,	// (0x00023e24) main_mup3_lyrics_pane_ParamLimits

0x5d89,	// (0x00023e24) main_mup3_lyrics_pane

0x9cc4,	// (0x00027d5f) main_mup3_lyrics_pane_t1_ParamLimits

0x9cc4,	// (0x00027d5f) main_mup3_lyrics_pane_t1

0x1a9e,	// (0x0001fb39) aid_main_mp4_pane_t1_area

0x1aa8,	// (0x0001fb43) aid_main_mp4_pane_t2_area

0x1ba7,	// (0x0001fc42) main_mp4_pane_g7_ParamLimits

0x1ba7,	// (0x0001fc42) main_mp4_pane_g7

0x1bb3,	// (0x0001fc4e) main_mp4_pane_g8_ParamLimits

0x1bb3,	// (0x0001fc4e) main_mp4_pane_g8

0x6a78,	// (0x00024b13) aid_call6_pane_g1_size

0x9b10,	// (0x00027bab) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9b10,	// (0x00027bab) list_double_large_graphic_phob2_other_pane

0xa9ca,	// (0x00028a65) list_double_large_graphic_phob2_other_pane_g1

0x9cf6,	// (0x00027d91) list_highlight_pane_cp026
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
