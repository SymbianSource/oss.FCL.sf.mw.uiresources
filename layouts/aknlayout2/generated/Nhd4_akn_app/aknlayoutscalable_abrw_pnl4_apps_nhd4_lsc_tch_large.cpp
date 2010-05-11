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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x000a9e8d };

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
0x019c,	// (0x000aa029) Screen

0x01a8,	// (0x000aa035) application_window

0x01e4,	// (0x000aa071) area_bottom_pane_ParamLimits

0x01e4,	// (0x000aa071) area_bottom_pane

0x021d,	// (0x000aa0aa) area_top_pane_ParamLimits

0x021d,	// (0x000aa0aa) area_top_pane

0x93c6,	// (0x000b3253) call_video_uplink_pane_ParamLimits

0x93c6,	// (0x000b3253) call_video_uplink_pane

0x02ab,	// (0x000aa138) main_pane_ParamLimits

0x02ab,	// (0x000aa138) main_pane

0xc867,	// (0x000b66f4) context_pane

0x3895,	// (0x000ad722) navi_pane

0x38c7,	// (0x000ad754) popup_cale_events_window_ParamLimits

0x38c7,	// (0x000ad754) popup_cale_events_window

0xc87a,	// (0x000b6707) popup_mup_playback_window

0x38df,	// (0x000ad76c) signal_pane

0xa265,	// (0x000b40f2) main_browser_pane

0xa9bb,	// (0x000b4848) main_burst_pane

0x35eb,	// (0x000ad478) main_calc_pane

0xc84d,	// (0x000b66da) main_cale_day_pane

0x35ff,	// (0x000ad48c) main_cale_month_pane

0xc84d,	// (0x000b66da) main_cale_week_pane

0xa9bb,	// (0x000b4848) main_call_pane

0x9f39,	// (0x000b3dc6) main_call_poc_pane

0xa9bb,	// (0x000b4848) main_camera_pane

0xa9bb,	// (0x000b4848) main_chi_dic_pane

0xb19e,	// (0x000b502b) main_clock_pane

0x9f39,	// (0x000b3dc6) main_fmradio_pane

0xa9bb,	// (0x000b4848) main_graph_messa_pane

0x9f39,	// (0x000b3dc6) main_help_pane

0xa265,	// (0x000b40f2) main_im_pane

0xa194,	// (0x000b4021) main_image_pane_ParamLimits

0xa194,	// (0x000b4021) main_image_pane

0x9f39,	// (0x000b3dc6) main_location2_pane

0xa9bb,	// (0x000b4848) main_location_pane

0xa194,	// (0x000b4021) main_messa_pane

0x9f39,	// (0x000b3dc6) main_mp2_pane

0xa9bb,	// (0x000b4848) main_mp_pane

0x9f39,	// (0x000b3dc6) main_msg_pane

0x9f39,	// (0x000b3dc6) main_mup_eq_pane

0x9f39,	// (0x000b3dc6) main_mup_pane

0xa265,	// (0x000b40f2) main_notes_pane

0x9f39,	// (0x000b3dc6) main_pec_pane

0x9f39,	// (0x000b3dc6) main_phob_pane

0x9f39,	// (0x000b3dc6) main_pinb_pane

0x9f39,	// (0x000b3dc6) main_postcard_pane

0x9f39,	// (0x000b3dc6) main_qdial_pane

0xa9bb,	// (0x000b4848) main_skin_pane

0x9f39,	// (0x000b3dc6) main_smil2_pane

0xa9bb,	// (0x000b4848) main_smil_pane

0xa9bb,	// (0x000b4848) main_video_pane

0xa9bb,	// (0x000b4848) main_video_tele_pane

0xa194,	// (0x000b4021) main_viewer_pane_ParamLimits

0xa194,	// (0x000b4021) main_viewer_pane

0xa9bb,	// (0x000b4848) main_vorec_pane

0x3651,	// (0x000ad4de) popup_blid_sat_info_window_ParamLimits

0x3651,	// (0x000ad4de) popup_blid_sat_info_window

0x36a9,	// (0x000ad536) popup_dyc_status_message_window_ParamLimits

0x36a9,	// (0x000ad536) popup_dyc_status_message_window

0x36c1,	// (0x000ad54e) popup_grid_large_graphic_window_ParamLimits

0x36c1,	// (0x000ad54e) popup_grid_large_graphic_window

0x3771,	// (0x000ad5fe) popup_loc_request_window_ParamLimits

0x3771,	// (0x000ad5fe) popup_loc_request_window

0x386d,	// (0x000ad6fa) popup_wml_address_window_ParamLimits

0x386d,	// (0x000ad6fa) popup_wml_address_window

0x3425,	// (0x000ad2b2) call_muted_g1

0x30d9,	// (0x000acf66) popup_call_audio_conf_window_ParamLimits

0x30d9,	// (0x000acf66) popup_call_audio_conf_window

0x3439,	// (0x000ad2c6) popup_call_audio_first_window_ParamLimits

0x3439,	// (0x000ad2c6) popup_call_audio_first_window

0x34af,	// (0x000ad33c) popup_call_audio_in_window_ParamLimits

0x34af,	// (0x000ad33c) popup_call_audio_in_window

0x34eb,	// (0x000ad378) popup_call_audio_out_window_ParamLimits

0x34eb,	// (0x000ad378) popup_call_audio_out_window

0x3525,	// (0x000ad3b2) popup_call_audio_second_window_ParamLimits

0x3525,	// (0x000ad3b2) popup_call_audio_second_window

0x357b,	// (0x000ad408) popup_call_audio_wait_window_ParamLimits

0x357b,	// (0x000ad408) popup_call_audio_wait_window

0x35b0,	// (0x000ad43d) popup_number_entry_window_ParamLimits

0x35b0,	// (0x000ad43d) popup_number_entry_window

0x93fc,	// (0x000b3289) bg_popup_call_pane_cp05_ParamLimits

0x93fc,	// (0x000b3289) bg_popup_call_pane_cp05

0x941c,	// (0x000b32a9) popup_number_entry_window_t1

0x942f,	// (0x000b32bc) popup_number_entry_window_t2

0x9441,	// (0x000b32ce) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x000b8f57) popup_number_entry_window_t

0x9453,	// (0x000b32e0) text_title_cp2

0x9466,	// (0x000b32f3) bg_popup_call_pane_cp_ParamLimits

0x9466,	// (0x000b32f3) bg_popup_call_pane_cp

0x9474,	// (0x000b3301) call_thumbnail_pane

0x947c,	// (0x000b3309) popup_call_audio_in_window_g1_ParamLimits

0x947c,	// (0x000b3309) popup_call_audio_in_window_g1

0x9488,	// (0x000b3315) popup_call_audio_in_window_g2_ParamLimits

0x9488,	// (0x000b3315) popup_call_audio_in_window_g2

0x9494,	// (0x000b3321) popup_call_audio_in_window_g3_ParamLimits

0x9494,	// (0x000b3321) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x000b8f60) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x000b8f60) popup_call_audio_in_window_g

0x94a0,	// (0x000b332d) popup_call_audio_in_window_t1_ParamLimits

0x94a0,	// (0x000b332d) popup_call_audio_in_window_t1

0x94bc,	// (0x000b3349) popup_call_audio_in_window_t2_ParamLimits

0x94bc,	// (0x000b3349) popup_call_audio_in_window_t2

0x94d8,	// (0x000b3365) popup_call_audio_in_window_t3_ParamLimits

0x94d8,	// (0x000b3365) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x000b8f67) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x000b8f67) popup_call_audio_in_window_t

0x9466,	// (0x000b32f3) bg_popup_call_pane_cp01_ParamLimits

0x9466,	// (0x000b32f3) bg_popup_call_pane_cp01

0x9474,	// (0x000b3301) call_thumbnail_pane_cp02

0x94eb,	// (0x000b3378) call_type_pane_cp022

0x94f3,	// (0x000b3380) popup_call_audio_out_window_g1_ParamLimits

0x94f3,	// (0x000b3380) popup_call_audio_out_window_g1

0x9505,	// (0x000b3392) popup_call_audio_out_window_g2_ParamLimits

0x9505,	// (0x000b3392) popup_call_audio_out_window_g2

0x9511,	// (0x000b339e) popup_call_audio_out_window_g3_ParamLimits

0x9511,	// (0x000b339e) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x000b8f6e) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x000b8f6e) popup_call_audio_out_window_g

0x9523,	// (0x000b33b0) popup_call_audio_out_window_t1_ParamLimits

0x9523,	// (0x000b33b0) popup_call_audio_out_window_t1

0x953b,	// (0x000b33c8) popup_call_audio_out_window_t2_ParamLimits

0x953b,	// (0x000b33c8) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x000b8f75) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x000b8f75) popup_call_audio_out_window_t

0x9550,	// (0x000b33dd) bg_popup_call_pane_ParamLimits

0x9550,	// (0x000b33dd) bg_popup_call_pane

0x0468,	// (0x000aa2f5) call_thumbnail_pane_cp_ParamLimits

0x0468,	// (0x000aa2f5) call_thumbnail_pane_cp

0x95d4,	// (0x000b3461) call_type_pane_cp01_ParamLimits

0x95d4,	// (0x000b3461) call_type_pane_cp01

0x9618,	// (0x000b34a5) popup_call_audio_first_window_g1_ParamLimits

0x9618,	// (0x000b34a5) popup_call_audio_first_window_g1

0x9664,	// (0x000b34f1) popup_call_audio_first_window_g2_ParamLimits

0x9664,	// (0x000b34f1) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x000b8f7a) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x000b8f7a) popup_call_audio_first_window_g

0x96a8,	// (0x000b3535) popup_call_audio_first_window_t1_ParamLimits

0x96a8,	// (0x000b3535) popup_call_audio_first_window_t1

0x9e7e,	// (0x000b3d0b) popup_call_audio_first_window_t4_ParamLimits

0x9e7e,	// (0x000b3d0b) popup_call_audio_first_window_t4

0x9f0a,	// (0x000b3d97) popup_call_audio_first_window_t5_ParamLimits

0x9f0a,	// (0x000b3d97) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x000b8f7f) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x000b8f7f) popup_call_audio_first_window_t

0x9f39,	// (0x000b3dc6) bg_popup_call_pane_cp02

0x9f43,	// (0x000b3dd0) call_type_pane_cp023

0x9f4b,	// (0x000b3dd8) popup_call_audio_wait_window_g1

0x9f53,	// (0x000b3de0) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000b8f86) popup_call_audio_wait_window_g

0x9f5b,	// (0x000b3de8) popup_call_audio_wait_window_t3

0x9f69,	// (0x000b3df6) bg_popup_call_pane_cp03_ParamLimits

0x9f69,	// (0x000b3df6) bg_popup_call_pane_cp03

0x9fc9,	// (0x000b3e56) call_thumbnail_pane_cp011_ParamLimits

0x9fc9,	// (0x000b3e56) call_thumbnail_pane_cp011

0x9fd5,	// (0x000b3e62) call_type_pane_cp034_ParamLimits

0x9fd5,	// (0x000b3e62) call_type_pane_cp034

0xa011,	// (0x000b3e9e) popup_call_audio_second_window_g1_ParamLimits

0xa011,	// (0x000b3e9e) popup_call_audio_second_window_g1

0xa04d,	// (0x000b3eda) popup_call_audio_second_window_g2_ParamLimits

0xa04d,	// (0x000b3eda) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x000b8f8b) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x000b8f8b) popup_call_audio_second_window_g

0xa089,	// (0x000b3f16) popup_call_audio_second_window_t1_ParamLimits

0xa089,	// (0x000b3f16) popup_call_audio_second_window_t1

0xa10a,	// (0x000b3f97) popup_call_audio_second_window_t2_ParamLimits

0xa10a,	// (0x000b3f97) popup_call_audio_second_window_t2

0xa140,	// (0x000b3fcd) popup_call_audio_second_window_t3_ParamLimits

0xa140,	// (0x000b3fcd) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x000b8f90) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x000b8f90) popup_call_audio_second_window_t

0x9f39,	// (0x000b3dc6) bg_popup_call_pane_cp04

0xa176,	// (0x000b4003) list_conf_pane

0xa17e,	// (0x000b400b) popup_call_audio_conf_window_t1

0xa18c,	// (0x000b4019) call_thumbnail_pane_g1

0xa194,	// (0x000b4021) bg_pinb_pane_ParamLimits

0xa194,	// (0x000b4021) bg_pinb_pane

0xa1a2,	// (0x000b402f) find_pinb_pane

0xa1ab,	// (0x000b4038) listscroll_pinb_pane_ParamLimits

0xa1ab,	// (0x000b4038) listscroll_pinb_pane

0xa1ba,	// (0x000b4047) pinb_bg_pane_g1

0x048c,	// (0x000aa319) pinb_bg_pane_g2

0x0498,	// (0x000aa325) pinb_bg_pane_g3

0x04a4,	// (0x000aa331) pinb_bg_pane_g4

0x04b0,	// (0x000aa33d) pinb_bg_pane_g5

0x04bc,	// (0x000aa349) pinb_bg_pane_g6

0x04c7,	// (0x000aa354) pinb_bg_pane_g7

0x04d2,	// (0x000aa35f) pinb_bg_pane_g8

0x04dd,	// (0x000aa36a) pinb_bg_pane_g9

0x04e7,	// (0x000aa374) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x000b8f97) pinb_bg_pane_g

0x0504,	// (0x000aa391) grid_pinb_pane

0x050d,	// (0x000aa39a) list_pinb_pane

0x0516,	// (0x000aa3a3) scroll_pane_cp01_ParamLimits

0x0516,	// (0x000aa3a3) scroll_pane_cp01

0xa1c4,	// (0x000b4051) find_pinb_pane_g1_ParamLimits

0xa1c4,	// (0x000b4051) find_pinb_pane_g1

0xa1dc,	// (0x000b4069) find_pinb_pane_t1

0xa1ee,	// (0x000b407b) find_pinb_pane_t2

0x0001,

0xf124,	// (0x000b8fb1) find_pinb_pane_t

0xa203,	// (0x000b4090) input_focus_pane_cp01_ParamLimits

0xa203,	// (0x000b4090) input_focus_pane_cp01

0x0528,	// (0x000aa3b5) cell_pinb_pane_ParamLimits

0x0528,	// (0x000aa3b5) cell_pinb_pane

0x0553,	// (0x000aa3e0) cell_pinb_pane_g1_ParamLimits

0x0553,	// (0x000aa3e0) cell_pinb_pane_g1

0xa20f,	// (0x000b409c) cell_pinb_pane_g2_ParamLimits

0xa20f,	// (0x000b409c) cell_pinb_pane_g2

0xa21b,	// (0x000b40a8) cell_pinb_pane_g3_ParamLimits

0xa21b,	// (0x000b40a8) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x000b8fb6) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x000b8fb6) cell_pinb_pane_g

0x9f39,	// (0x000b3dc6) grid_highlight_pane_cp01

0x0566,	// (0x000aa3f3) list_pinb_item_pane_ParamLimits

0x0566,	// (0x000aa3f3) list_pinb_item_pane

0x9f39,	// (0x000b3dc6) list_highlight_pane_cp02

0x0579,	// (0x000aa406) list_pinb_item_pane_g1_ParamLimits

0x0579,	// (0x000aa406) list_pinb_item_pane_g1

0x0586,	// (0x000aa413) list_pinb_item_pane_g2_ParamLimits

0x0586,	// (0x000aa413) list_pinb_item_pane_g2

0x0592,	// (0x000aa41f) list_pinb_item_pane_g3_ParamLimits

0x0592,	// (0x000aa41f) list_pinb_item_pane_g3

0x05a3,	// (0x000aa430) list_pinb_item_pane_g4_ParamLimits

0x05a3,	// (0x000aa430) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x000b8fbd) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x000b8fbd) list_pinb_item_pane_g

0x05af,	// (0x000aa43c) list_pinb_item_pane_t1_ParamLimits

0x05af,	// (0x000aa43c) list_pinb_item_pane_t1

0x05e4,	// (0x000aa471) calc_display_pane

0x060c,	// (0x000aa499) calc_paper_pane

0x062f,	// (0x000aa4bc) grid_calc_pane

0x9f39,	// (0x000b3dc6) bg_list_pane_cp01

0x065d,	// (0x000aa4ea) clock_g1

0x0665,	// (0x000aa4f2) clock_g2

0x0001,

0xf139,	// (0x000b8fc6) clock_g

0x066d,	// (0x000aa4fa) clock_t1_ParamLimits

0x066d,	// (0x000aa4fa) clock_t1

0x0682,	// (0x000aa50f) clock_t2_ParamLimits

0x0682,	// (0x000aa50f) clock_t2

0x0694,	// (0x000aa521) clock_t3_ParamLimits

0x0694,	// (0x000aa521) clock_t3

0x06a6,	// (0x000aa533) clock_t4_ParamLimits

0x06a6,	// (0x000aa533) clock_t4

0x06b8,	// (0x000aa545) clock_t5_ParamLimits

0x06b8,	// (0x000aa545) clock_t5

0x06cd,	// (0x000aa55a) clock_t6_ParamLimits

0x06cd,	// (0x000aa55a) clock_t6

0x06df,	// (0x000aa56c) clock_t7_ParamLimits

0x06df,	// (0x000aa56c) clock_t7

0x06f1,	// (0x000aa57e) clock_t8_ParamLimits

0x06f1,	// (0x000aa57e) clock_t8

0x0705,	// (0x000aa592) clock_t9_ParamLimits

0x0705,	// (0x000aa592) clock_t9

0x0008,

0xf13e,	// (0x000b8fcb) clock_t_ParamLimits

0xf13e,	// (0x000b8fcb) clock_t

0xa227,	// (0x000b40b4) popup_clock_analogue_window_cp02

0xa227,	// (0x000b40b4) popup_clock_digital_window_cp01

0xa22f,	// (0x000b40bc) listscroll_help_pane

0x9f39,	// (0x000b3dc6) phob_pre_status_pane

0xa239,	// (0x000b40c6) grid_qdial_pane

0xa194,	// (0x000b4021) listscroll_mce_pane

0xa194,	// (0x000b4021) bg_notes_pane

0xa243,	// (0x000b40d0) list_notes_pane

0x0719,	// (0x000aa5a6) scroll_pane_cp06

0xa251,	// (0x000b40de) bg_calc_paper_pane

0x975c,	// (0x000b35e9) list_calc_pane

0xa265,	// (0x000b40f2) bg_calc_display_pane

0x072d,	// (0x000aa5ba) calc_display_pane_t1

0x073f,	// (0x000aa5cc) calc_display_pane_t2

0x9776,	// (0x000b3603) calc_display_pane_t3

0x0002,

0xf151,	// (0x000b8fde) calc_display_pane_t

0x0751,	// (0x000aa5de) cell_calc_pane_ParamLimits

0x0751,	// (0x000aa5de) cell_calc_pane

0xa271,	// (0x000b40fe) bg_calc_paper_pane_g1

0xa27d,	// (0x000b410a) bg_calc_paper_pane_g2

0xa289,	// (0x000b4116) bg_calc_paper_pane_g3

0xa295,	// (0x000b4122) bg_calc_paper_pane_g4

0xa2a1,	// (0x000b412e) bg_calc_paper_pane_g5

0x0788,	// (0x000aa615) bg_calc_paper_pane_g6

0x0797,	// (0x000aa624) bg_calc_paper_pane_g7

0x07a6,	// (0x000aa633) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x000b8fe5) bg_calc_paper_pane_g

0x07b9,	// (0x000aa646) calc_bg_paper_pane_g9

0x07cc,	// (0x000aa659) list_calc_item_pane_ParamLimits

0x07cc,	// (0x000aa659) list_calc_item_pane

0xa2ad,	// (0x000b413a) list_calc_item_pane_g1

0x9788,	// (0x000b3615) list_calc_item_pane_t1_ParamLimits

0x9788,	// (0x000b3615) list_calc_item_pane_t1

0x07e5,	// (0x000aa672) list_calc_item_pane_t2_ParamLimits

0x07e5,	// (0x000aa672) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x000b8ff6) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x000b8ff6) list_calc_item_pane_t

0xa2ba,	// (0x000b4147) cell_calc_pane_g1

0xa2c4,	// (0x000b4151) grid_highlight_pane_cp02

0xa2e6,	// (0x000b4173) bg_calc_display_pane_g1

0x979a,	// (0x000b3627) bg_calc_display_pane_g2

0xa2ef,	// (0x000b417c) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x000b9000) bg_calc_display_pane_g

0x0817,	// (0x000aa6a4) cell_qdial_pane_ParamLimits

0x0817,	// (0x000aa6a4) cell_qdial_pane

0x082b,	// (0x000aa6b8) cell_qdial_pane_g1_ParamLimits

0x082b,	// (0x000aa6b8) cell_qdial_pane_g1

0x0841,	// (0x000aa6ce) cell_qdial_pane_g2_ParamLimits

0x0841,	// (0x000aa6ce) cell_qdial_pane_g2

0xa2f8,	// (0x000b4185) cell_qdial_pane_g3_ParamLimits

0xa2f8,	// (0x000b4185) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000b9007) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000b9007) cell_qdial_pane_g

0x0867,	// (0x000aa6f4) cell_qdial_pane_t1_ParamLimits

0x0867,	// (0x000aa6f4) cell_qdial_pane_t1

0x087f,	// (0x000aa70c) cell_qdial_pane_t2_ParamLimits

0x087f,	// (0x000aa70c) cell_qdial_pane_t2

0x0892,	// (0x000aa71f) cell_qdial_pane_t3_ParamLimits

0x0892,	// (0x000aa71f) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000b9010) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000b9010) cell_qdial_pane_t

0x9f39,	// (0x000b3dc6) grid_highlight_pane_cp04

0xa304,	// (0x000b4191) thumbnail_qdial_pane_ParamLimits

0xa304,	// (0x000b4191) thumbnail_qdial_pane

0xa360,	// (0x000b41ed) list_help_pane

0xa369,	// (0x000b41f6) scroll_pane_cp02

0xa372,	// (0x000b41ff) help_list_pane_t1_ParamLimits

0xa372,	// (0x000b41ff) help_list_pane_t1

0x97a4,	// (0x000b3631) bg_notes_pane_g2

0x97ac,	// (0x000b3639) bg_notes_pane_g3

0x97b4,	// (0x000b3641) notes_bg_pane_g1

0x97bc,	// (0x000b3649) notes_bg_pane_g4

0x97c4,	// (0x000b3651) notes_bg_pane_g5

0x97cc,	// (0x000b3659) notes_bg_pane_g6

0x97d4,	// (0x000b3661) notes_bg_pane_g7

0x97dc,	// (0x000b3669) notes_bg_pane_g8

0x97e4,	// (0x000b3671) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x000b902e) notes_bg_pane_g

0x08a5,	// (0x000aa732) list_notes_text_pane_ParamLimits

0x08a5,	// (0x000aa732) list_notes_text_pane

0xa390,	// (0x000b421d) list_notes_text_pane_g1

0xa399,	// (0x000b4226) list_notes_text_pane_t1

0x08bb,	// (0x000aa748) listscroll_cale_week_pane

0x08e7,	// (0x000aa774) bg_cale_heading_pane

0xa3c1,	// (0x000b424e) bg_cale_pane_cp01

0x08ff,	// (0x000aa78c) cale_week_corner_pane

0x091e,	// (0x000aa7ab) cale_week_day_heading_pane

0x093b,	// (0x000aa7c8) cale_week_scroll_pane_g1

0x094e,	// (0x000aa7db) cale_week_scroll_pane_g2

0x0966,	// (0x000aa7f3) cale_week_scroll_pane_g3

0x097e,	// (0x000aa80b) cale_week_scroll_pane_g4

0x0996,	// (0x000aa823) cale_week_scroll_pane_g5

0x09b6,	// (0x000aa843) cale_week_scroll_pane_g6

0x09d6,	// (0x000aa863) cale_week_scroll_pane_g7

0x09f6,	// (0x000aa883) cale_week_scroll_pane_g8

0x0a1a,	// (0x000aa8a7) cale_week_scroll_pane_g9

0x0a32,	// (0x000aa8bf) cale_week_scroll_pane_g10

0x0a4a,	// (0x000aa8d7) cale_week_scroll_pane_g11

0x0a62,	// (0x000aa8ef) cale_week_scroll_pane_g12

0x0a7a,	// (0x000aa907) cale_week_scroll_pane_g13

0x0a7a,	// (0x000aa907) cale_week_scroll_pane_g14

0x0a7a,	// (0x000aa907) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000b903d) cale_week_scroll_pane_g

0x0ab6,	// (0x000aa943) cale_week_time_pane

0x0ada,	// (0x000aa967) grid_cale_week_pane

0xa3f0,	// (0x000b427d) scroll_pane_cp08

0x0b00,	// (0x000aa98d) cell_cale_week_pane_ParamLimits

0x0b00,	// (0x000aa98d) cell_cale_week_pane

0x0b8e,	// (0x000aaa1b) cale_week_day_heading_pane_t1

0x0bd8,	// (0x000aaa65) cale_week_day_heading_pane_t2

0x0c27,	// (0x000aaab4) cale_week_day_heading_pane_t3

0x0c76,	// (0x000aab03) cale_week_day_heading_pane_t4

0x0cc5,	// (0x000aab52) cale_week_day_heading_pane_t5

0x0d1c,	// (0x000aaba9) cale_week_day_heading_pane_t6

0x0d73,	// (0x000aac00) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000b905e) cale_week_day_heading_pane_t

0xa40d,	// (0x000b429a) bg_cale_side_pane

0x0dbd,	// (0x000aac4a) cale_week_time_pane_t1

0x0dd7,	// (0x000aac64) cale_week_time_pane_t2

0x0df1,	// (0x000aac7e) cale_week_time_pane_t3

0x0e0b,	// (0x000aac98) cale_week_time_pane_t4

0x0e25,	// (0x000aacb2) cale_week_time_pane_t5

0x0e3f,	// (0x000aaccc) cale_week_time_pane_t6

0x0e59,	// (0x000aace6) cale_week_time_pane_t7

0x0e73,	// (0x000aad00) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x000b906d) cale_week_time_pane_t

0x0e93,	// (0x000aad20) cell_cale_week_pane_g2

0x0eb7,	// (0x000aad44) cell_cale_week_pane_g3_ParamLimits

0x0eb7,	// (0x000aad44) cell_cale_week_pane_g3

0xa41b,	// (0x000b42a8) grid_highlight_pane_cp07

0xa423,	// (0x000b42b0) listscroll_gms_pane

0xa980,	// (0x000b480d) grid_gms_pane

0xa989,	// (0x000b4816) listscroll_gms_pane_g1

0xa991,	// (0x000b481e) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x000b907e) listscroll_gms_pane_g

0x0ecf,	// (0x000aad5c) scroll_pane_cp010

0x0eda,	// (0x000aad67) cell_gms_pane_ParamLimits

0x0eda,	// (0x000aad67) cell_gms_pane

0x0eec,	// (0x000aad79) cell_gms_pane_g1

0xa999,	// (0x000b4826) cell_gms_pane_g2

0xa9a1,	// (0x000b482e) cell_gms_pane_g3

0xa9aa,	// (0x000b4837) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x000b9083) cell_gms_pane_g

0xa9b3,	// (0x000b4840) grid_highlight_pane_cp09

0x33cf,	// (0x000ad25c) phob_pre_status_pane_g1

0x33d7,	// (0x000ad264) phob_pre_status_pane_g2

0x33df,	// (0x000ad26c) phob_pre_status_pane_g3

0x33e7,	// (0x000ad274) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x000b9481) phob_pre_status_pane_g

0x33f7,	// (0x000ad284) phob_pre_status_pane_t1

0x3405,	// (0x000ad292) phob_pre_status_pane_t2

0x3415,	// (0x000ad2a2) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x000b948c) phob_pre_status_pane_t

0xa9bb,	// (0x000b4848) bg_list_pane_cp05

0x0efc,	// (0x000aad89) grid_vorec_pane

0x0f04,	// (0x000aad91) vorec_t1

0x0f12,	// (0x000aad9f) vorec_t2

0x0f20,	// (0x000aadad) vorec_t3

0x0f2e,	// (0x000aadbb) vorec_t4

0x9346,	// (0x000b31d3) vorec_t5

0x9354,	// (0x000b31e1) vorec_t6

0x0004,

0xf1ff,	// (0x000b908c) vorec_t

0x9362,	// (0x000b31ef) wait_bar_pane_cp01

0x0f4a,	// (0x000aadd7) cell_vorec_pane_ParamLimits

0x0f4a,	// (0x000aadd7) cell_vorec_pane

0x97ec,	// (0x000b3679) cell_vorec_pane_g1

0x9f39,	// (0x000b3dc6) grid_highlight_pane_cp05

0x0f75,	// (0x000aae02) cams_zoom_pane

0x0f84,	// (0x000aae11) image_vga_pane

0x0f9e,	// (0x000aae2b) main_camera_pane_g1

0x0fb0,	// (0x000aae3d) main_camera_pane_g2

0x0fc0,	// (0x000aae4d) main_camera_pane_g3

0x0fd0,	// (0x000aae5d) main_camera_pane_g4

0x0fe0,	// (0x000aae6d) main_camera_pane_g5

0x0ff0,	// (0x000aae7d) main_camera_pane_g6

0x1000,	// (0x000aae8d) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000b9097) main_camera_pane_g

0x1010,	// (0x000aae9d) main_camera_pane_t1

0x1026,	// (0x000aaeb3) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000b90a8) main_camera_pane_t

0x1060,	// (0x000aaeed) cams_zoom_pane_cp_ParamLimits

0x1060,	// (0x000aaeed) cams_zoom_pane_cp

0x1088,	// (0x000aaf15) image_cif_pane_ParamLimits

0x1088,	// (0x000aaf15) image_cif_pane

0x10c3,	// (0x000aaf50) image_subqcif_pane

0x10cb,	// (0x000aaf58) main_video_pane_g1_ParamLimits

0x10cb,	// (0x000aaf58) main_video_pane_g1

0x10ef,	// (0x000aaf7c) main_video_pane_g2_ParamLimits

0x10ef,	// (0x000aaf7c) main_video_pane_g2

0x1123,	// (0x000aafb0) main_video_pane_g3_ParamLimits

0x1123,	// (0x000aafb0) main_video_pane_g3

0x1151,	// (0x000aafde) main_video_pane_g4_ParamLimits

0x1151,	// (0x000aafde) main_video_pane_g4

0x117f,	// (0x000ab00c) main_video_pane_g5_ParamLimits

0x117f,	// (0x000ab00c) main_video_pane_g5

0xa9cf,	// (0x000b485c) main_video_pane_g6_ParamLimits

0xa9cf,	// (0x000b485c) main_video_pane_g6

0x0006,

0xf220,	// (0x000b90ad) main_video_pane_g_ParamLimits

0xf220,	// (0x000b90ad) main_video_pane_g

0x11a8,	// (0x000ab035) main_video_pane_t1_ParamLimits

0x11a8,	// (0x000ab035) main_video_pane_t1

0xa9e9,	// (0x000b4876) cams_zoom_pane_g1

0xa9f2,	// (0x000b487f) cams_zoom_pane_g2

0xa9fb,	// (0x000b4888) cams_zoom_pane_g3

0xaa04,	// (0x000b4891) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000b90bc) cams_zoom_pane_g

0x1205,	// (0x000ab092) grid_cams_pane

0x121f,	// (0x000ab0ac) linegrid_cams_pane

0x1232,	// (0x000ab0bf) cell_cams_pane_ParamLimits

0x1232,	// (0x000ab0bf) cell_cams_pane

0xaa0d,	// (0x000b489a) cams_burst_image_pane

0xaa15,	// (0x000b48a2) cell_cams_pane_g1

0x9f39,	// (0x000b3dc6) grid_highlight_pane_cp03

0xa2ba,	// (0x000b4147) mp_bg_pane_g1

0x9f39,	// (0x000b3dc6) bg_list_pane_cp03

0xc772,	// (0x000b65ff) bg_mp_pane

0xc77a,	// (0x000b6607) grid_mp_pane

0xc782,	// (0x000b660f) media_player_g1

0xc78a,	// (0x000b6617) media_player_t1

0xc798,	// (0x000b6625) media_player_t2

0xc7a6,	// (0x000b6633) media_player_t3

0xc7b4,	// (0x000b6641) media_player_t4

0xc7c2,	// (0x000b664f) media_player_t5

0xc7d0,	// (0x000b665d) media_player_t6

0xc7de,	// (0x000b666b) media_player_t7

0x0006,

0xf5de,	// (0x000b946b) media_player_t

0xc7ec,	// (0x000b6679) wait_bar_pane_cp02

0xf5c3,	// (0x000b9450) main_usb_pane_t

0x33c6,	// (0x000ad253) cell_mp_pane

0xa2ba,	// (0x000b4147) cell_mp_pane_g1

0x9f39,	// (0x000b3dc6) grid_highlight_pane_cp06

0xaa1d,	// (0x000b48aa) grid_skin_colour_pane

0xaa25,	// (0x000b48b2) list_highlight_pane_cp03

0x134b,	// (0x000ab1d8) skin_g1

0xaa2d,	// (0x000b48ba) skin_t1

0xaa3c,	// (0x000b48c9) skin_t2

0x0001,

0xf264,	// (0x000b90f1) skin_t

0x1353,	// (0x000ab1e0) cell_skin_colour_pane_ParamLimits

0x1353,	// (0x000ab1e0) cell_skin_colour_pane

0xaa4a,	// (0x000b48d7) cell_skin_colour_pane_g1

0x13cc,	// (0x000ab259) call_video_g1_ParamLimits

0x13cc,	// (0x000ab259) call_video_g1

0x13e8,	// (0x000ab275) call_video_g2_ParamLimits

0x13e8,	// (0x000ab275) call_video_g2

0x0001,

0xf269,	// (0x000b90f6) call_video_g_ParamLimits

0xf269,	// (0x000b90f6) call_video_g

0x143a,	// (0x000ab2c7) call_video_uplink_pane_cp1_ParamLimits

0x143a,	// (0x000ab2c7) call_video_uplink_pane_cp1

0xaa5c,	// (0x000b48e9) call_video_uplink_pane_cp2

0x14d9,	// (0x000ab366) video_down_crop_pane_ParamLimits

0x14d9,	// (0x000ab366) video_down_crop_pane

0x15c2,	// (0x000ab44f) video_down_pane_ParamLimits

0x15c2,	// (0x000ab44f) video_down_pane

0xaa64,	// (0x000b48f1) video_down_subqcif_pane_ParamLimits

0xaa64,	// (0x000b48f1) video_down_subqcif_pane

0xaa7c,	// (0x000b4909) video_down_subqcif_pane_cp_ParamLimits

0xaa7c,	// (0x000b4909) video_down_subqcif_pane_cp

0xaaa2,	// (0x000b492f) im_reading_pane_ParamLimits

0xaaa2,	// (0x000b492f) im_reading_pane

0x16d0,	// (0x000ab55d) im_writing_pane_ParamLimits

0x16d0,	// (0x000ab55d) im_writing_pane

0x16e6,	// (0x000ab573) im_reading_pane_t1

0xaabc,	// (0x000b4949) list_im_pane

0xaacd,	// (0x000b495a) scroll_pane_cp07

0x1720,	// (0x000ab5ad) im_writing_pane_t1_ParamLimits

0x1720,	// (0x000ab5ad) im_writing_pane_t1

0xaae6,	// (0x000b4973) im_writing_pane_t2_ParamLimits

0xaae6,	// (0x000b4973) im_writing_pane_t2

0x0001,

0xf273,	// (0x000b9100) im_writing_pane_t_ParamLimits

0xf273,	// (0x000b9100) im_writing_pane_t

0x9f39,	// (0x000b3dc6) input_focus_pane_cp04

0x9f39,	// (0x000b3dc6) input_focus_pane_cp05

0x1735,	// (0x000ab5c2) list_im_single_pane_ParamLimits

0x1735,	// (0x000ab5c2) list_im_single_pane

0x174a,	// (0x000ab5d7) list_single_im_pane_t1

0x3386,	// (0x000ad213) blid_accuracy_pane

0x338e,	// (0x000ad21b) blid_compass_pane

0x3398,	// (0x000ad225) main_location_t1

0x33a8,	// (0x000ad235) main_location_t2

0x33b8,	// (0x000ad245) main_location_t3

0x0002,

0xf5ed,	// (0x000b947a) main_location_t

0x9f39,	// (0x000b3dc6) aid_levels_location

0xa2ba,	// (0x000b4147) blid_accuracy_pane_g1

0xa2ba,	// (0x000b4147) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000b9162) blid_accuracy_pane_g

0xab2e,	// (0x000b49bb) wml_content_pane

0xab6c,	// (0x000b49f9) wml_button_pane_ParamLimits

0xab6c,	// (0x000b49f9) wml_button_pane

0x1759,	// (0x000ab5e6) wml_list_single_large_pane_ParamLimits

0x1759,	// (0x000ab5e6) wml_list_single_large_pane

0x176e,	// (0x000ab5fb) wml_list_single_medium_pane_ParamLimits

0x176e,	// (0x000ab5fb) wml_list_single_medium_pane

0x1785,	// (0x000ab612) wml_list_single_small_pane_ParamLimits

0x1785,	// (0x000ab612) wml_list_single_small_pane

0xab80,	// (0x000b4a0d) wml_selection_box_pane_ParamLimits

0xab80,	// (0x000b4a0d) wml_selection_box_pane

0xab93,	// (0x000b4a20) wml_list_single_pane_t1

0xaba2,	// (0x000b4a2f) wml_list_single_medium_pane_t1

0xabb1,	// (0x000b4a3e) wml_list_single_large_pane_t1

0xabc0,	// (0x000b4a4d) input_focus_pane_cp02_ParamLimits

0xabc0,	// (0x000b4a4d) input_focus_pane_cp02

0xabd3,	// (0x000b4a60) wml_selection_box_pane_g1

0xabdc,	// (0x000b4a69) wml_selection_box_pane_t1_ParamLimits

0xabdc,	// (0x000b4a69) wml_selection_box_pane_t1

0xa194,	// (0x000b4021) bg_wml_button_pane_ParamLimits

0xa194,	// (0x000b4021) bg_wml_button_pane

0xabf4,	// (0x000b4a81) wml_button_pane_g1

0xabfc,	// (0x000b4a89) wml_button_pane_t1

0xabf4,	// (0x000b4a81) wml_button_bg_pane_g1

0xac0c,	// (0x000b4a99) wml_button_bg_pane_g2

0xac14,	// (0x000b4aa1) wml_button_bg_pane_g3

0xac1c,	// (0x000b4aa9) wml_button_bg_pane_g4

0xac24,	// (0x000b4ab1) wml_button_bg_pane_g5

0xac2c,	// (0x000b4ab9) wml_button_bg_pane_g6

0xac34,	// (0x000b4ac1) wml_button_bg_pane_g7

0xac3c,	// (0x000b4ac9) wml_button_bg_pane_g8

0xac44,	// (0x000b4ad1) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000b9105) wml_button_bg_pane_g

0x179e,	// (0x000ab62b) bg_list_pane_cp02

0xac4c,	// (0x000b4ad9) mce_header_pane_ParamLimits

0xac4c,	// (0x000b4ad9) mce_header_pane

0xac62,	// (0x000b4aef) mce_icon_pane

0xac62,	// (0x000b4aef) mce_image_pane

0xac6b,	// (0x000b4af8) mce_text_pane_ParamLimits

0xac6b,	// (0x000b4af8) mce_text_pane

0x17a6,	// (0x000ab633) scroll_pane_cp03

0xab64,	// (0x000b49f1) scroll_pane_cp04

0xac7e,	// (0x000b4b0b) scroll_pane_cp05_ParamLimits

0xac7e,	// (0x000b4b0b) scroll_pane_cp05

0x17b0,	// (0x000ab63d) mce_header_field_pane_ParamLimits

0x17b0,	// (0x000ab63d) mce_header_field_pane

0x17c7,	// (0x000ab654) mce_header_field_pane_2_ParamLimits

0x17c7,	// (0x000ab654) mce_header_field_pane_2

0x17dd,	// (0x000ab66a) mce_header_field_pane_3

0x17e5,	// (0x000ab672) list_single_mce_message_pane_ParamLimits

0x17e5,	// (0x000ab672) list_single_mce_message_pane

0x17fb,	// (0x000ab688) list_single_mce_smart_pane_ParamLimits

0x17fb,	// (0x000ab688) list_single_mce_smart_pane

0xac8a,	// (0x000b4b17) input_focus_pane_cp03

0xac93,	// (0x000b4b20) list_header_data_pane

0x181c,	// (0x000ab6a9) mce_header_field_pane_t1

0x182c,	// (0x000ab6b9) list_single_mce_header_pane_ParamLimits

0x182c,	// (0x000ab6b9) list_single_mce_header_pane

0xac9b,	// (0x000b4b28) list_single_mce_header_pane_t1

0xacaa,	// (0x000b4b37) list_single_mce_message_pane_g1

0xacb2,	// (0x000b4b3f) list_single_mce_message_pane_t1

0x1866,	// (0x000ab6f3) bg_cale_heading_pane_cp01_ParamLimits

0x1866,	// (0x000ab6f3) bg_cale_heading_pane_cp01

0xacc0,	// (0x000b4b4d) bg_cale_pane_cp02_ParamLimits

0xacc0,	// (0x000b4b4d) bg_cale_pane_cp02

0x1895,	// (0x000ab722) cale_month_corner_pane

0x18b4,	// (0x000ab741) cale_month_day_heading_pane_ParamLimits

0x18b4,	// (0x000ab741) cale_month_day_heading_pane

0x18fb,	// (0x000ab788) cale_month_pane_g1_ParamLimits

0x18fb,	// (0x000ab788) cale_month_pane_g1

0x191f,	// (0x000ab7ac) cale_month_pane_g2_ParamLimits

0x191f,	// (0x000ab7ac) cale_month_pane_g2

0x194f,	// (0x000ab7dc) cale_month_pane_g3_ParamLimits

0x194f,	// (0x000ab7dc) cale_month_pane_g3

0x198b,	// (0x000ab818) cale_month_pane_g4_ParamLimits

0x198b,	// (0x000ab818) cale_month_pane_g4

0x19c7,	// (0x000ab854) cale_month_pane_g5_ParamLimits

0x19c7,	// (0x000ab854) cale_month_pane_g5

0x1a0f,	// (0x000ab89c) cale_month_pane_g6_ParamLimits

0x1a0f,	// (0x000ab89c) cale_month_pane_g6

0x1a5b,	// (0x000ab8e8) cale_month_pane_g7_ParamLimits

0x1a5b,	// (0x000ab8e8) cale_month_pane_g7

0x1aab,	// (0x000ab938) cale_month_pane_g8_ParamLimits

0x1aab,	// (0x000ab938) cale_month_pane_g8

0x1aff,	// (0x000ab98c) cale_month_pane_g9_ParamLimits

0x1aff,	// (0x000ab98c) cale_month_pane_g9

0x1b51,	// (0x000ab9de) cale_month_pane_g10_ParamLimits

0x1b51,	// (0x000ab9de) cale_month_pane_g10

0x1ba3,	// (0x000aba30) cale_month_pane_g11_ParamLimits

0x1ba3,	// (0x000aba30) cale_month_pane_g11

0x1bf5,	// (0x000aba82) cale_month_pane_g12_ParamLimits

0x1bf5,	// (0x000aba82) cale_month_pane_g12

0x1c47,	// (0x000abad4) cale_month_pane_g13_ParamLimits

0x1c47,	// (0x000abad4) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000b9118) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000b9118) cale_month_pane_g

0x1c99,	// (0x000abb26) cale_month_week_pane

0x1cbd,	// (0x000abb4a) grid_cale_month_pane_ParamLimits

0x1cbd,	// (0x000abb4a) grid_cale_month_pane

0x1cfb,	// (0x000abb88) cale_month_day_heading_pane_t1

0x1d81,	// (0x000abc0e) cale_month_day_heading_pane_t2

0x1e12,	// (0x000abc9f) cale_month_day_heading_pane_t3

0x1ea3,	// (0x000abd30) cale_month_day_heading_pane_t4

0x1f3c,	// (0x000abdc9) cale_month_day_heading_pane_t5

0x1fdd,	// (0x000abe6a) cale_month_day_heading_pane_t6

0x207e,	// (0x000abf0b) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000b9133) cale_month_day_heading_pane_t

0xa40d,	// (0x000b429a) bg_cale_side_pane_cp01

0x2127,	// (0x000abfb4) cale_month_week_pane_t1

0x2140,	// (0x000abfcd) cale_month_week_pane_t2

0x2159,	// (0x000abfe6) cale_month_week_pane_t3

0x2172,	// (0x000abfff) cale_month_week_pane_t4

0x218b,	// (0x000ac018) cale_month_week_pane_t5

0x21a4,	// (0x000ac031) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000b9142) cale_month_week_pane_t

0x21bd,	// (0x000ac04a) cell_cale_month_pane_ParamLimits

0x21bd,	// (0x000ac04a) cell_cale_month_pane

0x97f6,	// (0x000b3683) cell_cale_month_pane_g1

0x2315,	// (0x000ac1a2) cell_cale_month_pane_t1_ParamLimits

0x2315,	// (0x000ac1a2) cell_cale_month_pane_t1

0xa41b,	// (0x000b42a8) grid_highlight_pane_cp08

0xa2ba,	// (0x000b4147) main_smil_g1

0x2341,	// (0x000ac1ce) smil_status_pane

0xacff,	// (0x000b4b8c) smil_text_pane

0xc652,	// (0x000b64df) bg_popup_call3_rect_pane_g8

0xc65a,	// (0x000b64e7) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000b93fb) bg_popup_call3_rect_pane_g

0xc8e1,	// (0x000b676e) smil_status_volume_pane_g1

0xad09,	// (0x000b4b96) smil_status_pane_t1

0x9956,	// (0x000b37e3) volume_smil_pane

0xad20,	// (0x000b4bad) list_smil_text_pane

0x2356,	// (0x000ac1e3) scroll_pane_cp011

0x2361,	// (0x000ac1ee) smil_text_list_pane_t1_ParamLimits

0x2361,	// (0x000ac1ee) smil_text_list_pane_t1

0x981c,	// (0x000b36a9) aid_volume_smil_ParamLimits

0x981c,	// (0x000b36a9) aid_volume_smil

0xa2ba,	// (0x000b4147) smil_volume_pane_g1

0xa2ba,	// (0x000b4147) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000b9162) smil_volume_pane_g

0x08bb,	// (0x000aa748) listscroll_cale_day_pane

0xad2a,	// (0x000b4bb7) bg_cale_pane

0xad42,	// (0x000b4bcf) list_cale_pane

0xad65,	// (0x000b4bf2) scroll_pane_cp09

0xad76,	// (0x000b4c03) cale_bg_pane_g1

0xad7e,	// (0x000b4c0b) cale_bg_pane_g2

0xad86,	// (0x000b4c13) cale_bg_pane_g3

0xad8e,	// (0x000b4c1b) cale_bg_pane_g4

0xad96,	// (0x000b4c23) cale_bg_pane_g5

0xad9e,	// (0x000b4c2b) cale_bg_pane_g6

0xada6,	// (0x000b4c33) cale_bg_pane_g7

0xadae,	// (0x000b4c3b) cale_bg_pane_g8

0xadb6,	// (0x000b4c43) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000b9167) cale_bg_pane_g

0x23ad,	// (0x000ac23a) list_cale_time_pane_ParamLimits

0x23ad,	// (0x000ac23a) list_cale_time_pane

0xadbe,	// (0x000b4c4b) list_cale_time_pane_g1_ParamLimits

0xadbe,	// (0x000b4c4b) list_cale_time_pane_g1

0xadca,	// (0x000b4c57) list_cale_time_pane_g2_ParamLimits

0xadca,	// (0x000b4c57) list_cale_time_pane_g2

0x23c3,	// (0x000ac250) list_cale_time_pane_g3_ParamLimits

0x23c3,	// (0x000ac250) list_cale_time_pane_g3

0x23d1,	// (0x000ac25e) list_cale_time_pane_g4_ParamLimits

0x23d1,	// (0x000ac25e) list_cale_time_pane_g4

0x23df,	// (0x000ac26c) list_cale_time_pane_g5_ParamLimits

0x23df,	// (0x000ac26c) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000b917a) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000b917a) list_cale_time_pane_g

0xade4,	// (0x000b4c71) list_cale_time_pane_t1_ParamLimits

0xade4,	// (0x000b4c71) list_cale_time_pane_t1

0xae0c,	// (0x000b4c99) list_cale_time_pane_t2_ParamLimits

0xae0c,	// (0x000b4c99) list_cale_time_pane_t2

0x275f,	// (0x000ac5ec) aid_blid_cardinal_pane

0x279d,	// (0x000ac62a) compass_pane_t4

0xae34,	// (0x000b4cc1) list_cale_time_pane_t4_ParamLimits

0xae34,	// (0x000b4cc1) list_cale_time_pane_t4

0x27ab,	// (0x000ac638) compass_pane_t5

0x27b9,	// (0x000ac646) compass_pane_t6

0x27c7,	// (0x000ac654) compass_pane_t7

0xb2b8,	// (0x000b5145) navi_pane_cc_t1

0xb4a7,	// (0x000b5334) aid_phob_thumbnail_center_pane

0x2d9c,	// (0x000acc29) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000b9187) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000b9187) list_cale_time_pane_t

0x9466,	// (0x000b32f3) bg_popup_window_pane_cp02_ParamLimits

0x9466,	// (0x000b32f3) bg_popup_window_pane_cp02

0xae5c,	// (0x000b4ce9) heading_pane_cp01_ParamLimits

0xae5c,	// (0x000b4ce9) heading_pane_cp01

0xae68,	// (0x000b4cf5) loc_req_pane_ParamLimits

0xae68,	// (0x000b4cf5) loc_req_pane

0xae78,	// (0x000b4d05) loc_type_pane_ParamLimits

0xae78,	// (0x000b4d05) loc_type_pane

0xae8a,	// (0x000b4d17) loc_type_pane_t1_ParamLimits

0xae8a,	// (0x000b4d17) loc_type_pane_t1

0xae9c,	// (0x000b4d29) loc_type_pane_t2_ParamLimits

0xae9c,	// (0x000b4d29) loc_type_pane_t2

0xaeae,	// (0x000b4d3b) loc_type_pane_t3_ParamLimits

0xaeae,	// (0x000b4d3b) loc_type_pane_t3

0x0002,

0xf301,	// (0x000b918e) loc_type_pane_t_ParamLimits

0xf301,	// (0x000b918e) loc_type_pane_t

0xaec0,	// (0x000b4d4d) list_loc_req_pane

0xaeca,	// (0x000b4d57) scroll_pane_cp012

0x23ed,	// (0x000ac27a) list_single_loc_request_popup_menu_pane_ParamLimits

0x23ed,	// (0x000ac27a) list_single_loc_request_popup_menu_pane

0xaed5,	// (0x000b4d62) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaed5,	// (0x000b4d62) list_single_loc_request_popup_menu_pane_g1

0xaee1,	// (0x000b4d6e) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaee1,	// (0x000b4d6e) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000b9195) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000b9195) list_single_loc_request_popup_menu_pane_g

0xaeed,	// (0x000b4d7a) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaeed,	// (0x000b4d7a) list_single_loc_request_popup_menu_pane_t1

0xa194,	// (0x000b4021) bg_popup_window_pane_cp03_ParamLimits

0xa194,	// (0x000b4021) bg_popup_window_pane_cp03

0xaf03,	// (0x000b4d90) heading_loc_req_pane_ParamLimits

0xaf03,	// (0x000b4d90) heading_loc_req_pane

0x23fa,	// (0x000ac287) popup_dyc_status_message_window_g1_ParamLimits

0x23fa,	// (0x000ac287) popup_dyc_status_message_window_g1

0x240e,	// (0x000ac29b) popup_dyc_status_message_window_t1_ParamLimits

0x240e,	// (0x000ac29b) popup_dyc_status_message_window_t1

0x2423,	// (0x000ac2b0) popup_dyc_status_message_window_t2_ParamLimits

0x2423,	// (0x000ac2b0) popup_dyc_status_message_window_t2

0x2438,	// (0x000ac2c5) popup_dyc_status_message_window_t3_ParamLimits

0x2438,	// (0x000ac2c5) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000b919a) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000b919a) popup_dyc_status_message_window_t

0x9f39,	// (0x000b3dc6) bg_heading_pane_cp01

0xaf0f,	// (0x000b4d9c) heading_loc_req_pane_g1

0xaf17,	// (0x000b4da4) heading_loc_req_pane_g2

0xaf1f,	// (0x000b4dac) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000b91a1) heading_loc_req_pane_g

0xaf27,	// (0x000b4db4) heading_loc_req_pane_t1

0xaf36,	// (0x000b4dc3) bg_popup_sub_pane_cp01_ParamLimits

0xaf36,	// (0x000b4dc3) bg_popup_sub_pane_cp01

0xaf44,	// (0x000b4dd1) popup_cale_events_window_g1_ParamLimits

0xaf44,	// (0x000b4dd1) popup_cale_events_window_g1

0xaf64,	// (0x000b4df1) popup_cale_events_window_g2_ParamLimits

0xaf64,	// (0x000b4df1) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000b91d5) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000b91d5) popup_cale_events_window_g

0xaf84,	// (0x000b4e11) popup_cale_events_window_t1_ParamLimits

0xaf84,	// (0x000b4e11) popup_cale_events_window_t1

0xaf96,	// (0x000b4e23) popup_cale_events_window_t2_ParamLimits

0xaf96,	// (0x000b4e23) popup_cale_events_window_t2

0xafd4,	// (0x000b4e61) popup_cale_events_window_t3_ParamLimits

0xafd4,	// (0x000b4e61) popup_cale_events_window_t3

0xb00e,	// (0x000b4e9b) popup_cale_events_window_t4_ParamLimits

0xb00e,	// (0x000b4e9b) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000b91da) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000b91da) popup_cale_events_window_t

0x252f,	// (0x000ac3bc) call_type_pane

0x253f,	// (0x000ac3cc) popup_call_status_window_g1

0x2553,	// (0x000ac3e0) popup_call_status_window_g2

0x2567,	// (0x000ac3f4) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000b91e3) popup_call_status_window_g

0xb044,	// (0x000b4ed1) call_type_pane_g1

0xb04d,	// (0x000b4eda) call_type_pane_g2

0x0001,

0xf35d,	// (0x000b91ea) call_type_pane_g

0x9f39,	// (0x000b3dc6) bg_popup_sub_pane_cp02

0xb056,	// (0x000b4ee3) listscroll_popup_wml_pane

0xb05e,	// (0x000b4eeb) list_wml_pane

0xb068,	// (0x000b4ef5) scroll_pane_cp013

0xb073,	// (0x000b4f00) list_single_graphic_popup_wml_pane_ParamLimits

0xb073,	// (0x000b4f00) list_single_graphic_popup_wml_pane

0xa2ba,	// (0x000b4147) list_single_graphic_popup_wml_pane_g1

0xb087,	// (0x000b4f14) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000b91ef) list_single_graphic_popup_wml_pane_g

0xb08f,	// (0x000b4f1c) list_single_graphic_popup_wml_pane_t1

0xb0a5,	// (0x000b4f32) aid_call_pane

0xa18c,	// (0x000b4019) popup_clock_analogue_window_g1

0xa18c,	// (0x000b4019) popup_clock_analogue_window_g2

0x983e,	// (0x000b36cb) popup_clock_analogue_window_g3

0x983e,	// (0x000b36cb) popup_clock_analogue_window_g4

0xa2ba,	// (0x000b4147) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000b91f4) popup_clock_analogue_window_g

0x9846,	// (0x000b36d3) popup_clock_analogue_window_t1

0x9854,	// (0x000b36e1) clock_digital_number_pane_ParamLimits

0x9854,	// (0x000b36e1) clock_digital_number_pane

0x9860,	// (0x000b36ed) clock_digital_number_pane_cp02_ParamLimits

0x9860,	// (0x000b36ed) clock_digital_number_pane_cp02

0x986c,	// (0x000b36f9) clock_digital_number_pane_cp03_ParamLimits

0x986c,	// (0x000b36f9) clock_digital_number_pane_cp03

0x9878,	// (0x000b3705) clock_digital_number_pane_cp04_ParamLimits

0x9878,	// (0x000b3705) clock_digital_number_pane_cp04

0x9884,	// (0x000b3711) clock_digital_separator_pane_ParamLimits

0x9884,	// (0x000b3711) clock_digital_separator_pane

0x9890,	// (0x000b371d) popup_clock_digital_window_t1

0xa2ba,	// (0x000b4147) clock_digital_number_pane_g1

0xa2ba,	// (0x000b4147) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000b9162) clock_digital_number_pane_g

0xa2ba,	// (0x000b4147) clock_digital_separator_pane_g1

0xa2ba,	// (0x000b4147) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000b9162) clock_digital_separator_pane_g

0x9f39,	// (0x000b3dc6) bg_popup_window_pane_cp04

0xb0ad,	// (0x000b4f3a) heading_pane_cp03

0xb0b5,	// (0x000b4f42) listscroll_popup_gms_pane

0xb0bd,	// (0x000b4f4a) grid_large_graphic_popup_pane

0xb0c7,	// (0x000b4f54) listscroll_popup_gms_pane_g1

0xb0cf,	// (0x000b4f5c) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000b91ff) listscroll_popup_gms_pane_g

0xab64,	// (0x000b49f1) scroll_pane_cp014

0x2576,	// (0x000ac403) cell_large_graphic_popup_pane_ParamLimits

0x2576,	// (0x000ac403) cell_large_graphic_popup_pane

0x258e,	// (0x000ac41b) cell_large_graphic_popup_pane_g1_ParamLimits

0x258e,	// (0x000ac41b) cell_large_graphic_popup_pane_g1

0xb0d7,	// (0x000b4f64) cell_large_graphic_popup_pane_g2_ParamLimits

0xb0d7,	// (0x000b4f64) cell_large_graphic_popup_pane_g2

0xb0e3,	// (0x000b4f70) cell_large_graphic_popup_pane_g3_ParamLimits

0xb0e3,	// (0x000b4f70) cell_large_graphic_popup_pane_g3

0xb0f0,	// (0x000b4f7d) cell_large_graphic_popup_pane_g4_ParamLimits

0xb0f0,	// (0x000b4f7d) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000b9204) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000b9204) cell_large_graphic_popup_pane_g

0xb100,	// (0x000b4f8d) grid_highlight_pane_cp010

0xa2ba,	// (0x000b4147) bg_popup_call_pane_g1

0xb10a,	// (0x000b4f97) list_single_graphic_popup_conf_pane_ParamLimits

0xb10a,	// (0x000b4f97) list_single_graphic_popup_conf_pane

0xb11d,	// (0x000b4faa) list_highlight_pane_cp01

0xb126,	// (0x000b4fb3) list_single_graphic_popup_conf_pane_g1

0xb12e,	// (0x000b4fbb) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000b920d) list_single_graphic_popup_conf_pane_g

0xb136,	// (0x000b4fc3) list_single_graphic_popup_conf_pane_t1

0xb144,	// (0x000b4fd1) linegrid_cams_pane_g1

0x259a,	// (0x000ac427) linegrid_cams_pane_g2

0xa9a1,	// (0x000b482e) linegrid_cams_pane_g3

0xb14d,	// (0x000b4fda) linegrid_cams_pane_g4

0x25a3,	// (0x000ac430) linegrid_cams_pane_g5

0x25ac,	// (0x000ac439) linegrid_cams_pane_g6

0xa9aa,	// (0x000b4837) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000b9212) linegrid_cams_pane_g

0xb156,	// (0x000b4fe3) popup_clock_analogue_window

0xb156,	// (0x000b4fe3) popup_clock_digital_window

0x9f39,	// (0x000b3dc6) popup_phob_thumbnail_window

0xa2ba,	// (0x000b4147) call_video_uplink_pane_g1

0xb15f,	// (0x000b4fec) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000b9221) call_video_uplink_pane_g

0xb167,	// (0x000b4ff4) video_uplink_pane

0xb16f,	// (0x000b4ffc) mce_image_pane_g1

0x25b7,	// (0x000ac444) mce_image_pane_g2

0x25bf,	// (0x000ac44c) mce_image_pane_g3

0x25c7,	// (0x000ac454) mce_image_pane_g4

0x25d1,	// (0x000ac45e) mce_image_pane_g5

0x0004,

0xf399,	// (0x000b9226) mce_image_pane_g

0xb179,	// (0x000b5006) control_top_pane_stacon_cp01_ParamLimits

0xb179,	// (0x000b5006) control_top_pane_stacon_cp01

0xb18d,	// (0x000b501a) uni_indicator_pane_stacon_cp01_ParamLimits

0xb18d,	// (0x000b501a) uni_indicator_pane_stacon_cp01

0xb19e,	// (0x000b502b) bg_popup_sub_pane_cp03

0x25d9,	// (0x000ac466) chi_dic_find_pane

0x25e1,	// (0x000ac46e) listscroll_chi_dic_pane

0x25ea,	// (0x000ac477) main_pane_chidic_g1

0x25fd,	// (0x000ac48a) chi_dic_find_pane_t1

0xb1a8,	// (0x000b5035) find_chidic_pane

0xb1b1,	// (0x000b503e) chi_dic_list_pane_ParamLimits

0xb1b1,	// (0x000b503e) chi_dic_list_pane

0xb1c2,	// (0x000b504f) scroll_pane_cp020

0x260b,	// (0x000ac498) find_chidic_pane_t1

0x9f39,	// (0x000b3dc6) input_focus_pane_cp06

0x261a,	// (0x000ac4a7) list_chi_dic_pane_ParamLimits

0x261a,	// (0x000ac4a7) list_chi_dic_pane

0x262c,	// (0x000ac4b9) list_chi_dic_pane_t1_ParamLimits

0x262c,	// (0x000ac4b9) list_chi_dic_pane_t1

0x9f39,	// (0x000b3dc6) list_highlight_pane_cp020

0xb1ca,	// (0x000b5057) bg_cale_heading_pane_g1

0x263f,	// (0x000ac4cc) bg_cale_heading_pane_g2

0x2647,	// (0x000ac4d4) bg_cale_heading_pane_g3

0x264f,	// (0x000ac4dc) bg_cale_heading_pane_g4

0x2659,	// (0x000ac4e6) bg_cale_heading_pane_g5

0x2663,	// (0x000ac4f0) bg_cale_heading_pane_g6

0x266b,	// (0x000ac4f8) bg_cale_heading_pane_g7

0x2673,	// (0x000ac500) bg_cale_heading_pane_g8

0x267d,	// (0x000ac50a) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000b9231) bg_cale_heading_pane_g

0xb1ca,	// (0x000b5057) bg_cale_side_pane_g1

0x2687,	// (0x000ac514) bg_cale_side_pane_g2

0x268f,	// (0x000ac51c) bg_cale_side_pane_g3

0x2697,	// (0x000ac524) bg_cale_side_pane_g4

0x269f,	// (0x000ac52c) bg_cale_side_pane_g5

0x26a7,	// (0x000ac534) bg_cale_side_pane_g6

0x26af,	// (0x000ac53c) bg_cale_side_pane_g7

0x26b7,	// (0x000ac544) bg_cale_side_pane_g8

0x26bf,	// (0x000ac54c) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000b9244) bg_cale_side_pane_g

0x26c7,	// (0x000ac554) popup_call_status_window_ParamLimits

0x26c7,	// (0x000ac554) popup_call_status_window

0xb1d2,	// (0x000b505f) stacon_top_pane

0xb1da,	// (0x000b5067) status_pane_ParamLimits

0xb1da,	// (0x000b5067) status_pane

0xb1ef,	// (0x000b507c) status_small_pane

0xb1f7,	// (0x000b5084) control_pane

0x9f39,	// (0x000b3dc6) stacon_bottom_pane

0xb1ff,	// (0x000b508c) list_single_mce_smart_pane_t1_ParamLimits

0xb1ff,	// (0x000b508c) list_single_mce_smart_pane_t1

0xb212,	// (0x000b509f) list_single_mce_smart_pane_t2_ParamLimits

0xb212,	// (0x000b509f) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000b9257) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000b9257) list_single_mce_smart_pane_t

0x270e,	// (0x000ac59b) compass_pane

0x2717,	// (0x000ac5a4) main_location2_pane_t1

0x2729,	// (0x000ac5b6) main_location2_pane_t2

0x273b,	// (0x000ac5c8) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000b925c) main_location2_pane_t

0xb231,	// (0x000b50be) compass_pane_g1_ParamLimits

0xb231,	// (0x000b50be) compass_pane_g1

0x277f,	// (0x000ac60c) compass_pane_t1

0x278e,	// (0x000ac61b) compass_pane_t2

0x0005,

0xf3d8,	// (0x000b9265) compass_pane_t

0x27d5,	// (0x000ac662) text_secondary_cp61

0xb2af,	// (0x000b513c) navi_pane_cams_g5

0xb32b,	// (0x000b51b8) navi_pane_im_t1

0xb339,	// (0x000b51c6) navi_pane_mp_g1_ParamLimits

0xb339,	// (0x000b51c6) navi_pane_mp_g1

0xb34d,	// (0x000b51da) navi_pane_mp_g2_ParamLimits

0xb34d,	// (0x000b51da) navi_pane_mp_g2

0xb359,	// (0x000b51e6) navi_pane_mp_g3_ParamLimits

0xb359,	// (0x000b51e6) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000b9279) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000b9279) navi_pane_mp_g

0xb365,	// (0x000b51f2) navi_pane_mp_t1

0xb373,	// (0x000b5200) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000b9280) navi_pane_mp_t

0xb3de,	// (0x000b526b) navi_pane_vt_g1

0xb365,	// (0x000b51f2) navi_pane_vt_t1

0xb3e6,	// (0x000b5273) navi_slider_pane

0xa9bb,	// (0x000b4848) zooming_pane

0xb3f6,	// (0x000b5283) navi_slider_pane_g1

0x98ad,	// (0x000b373a) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000b9287) navi_slider_pane_g

0xb41a,	// (0x000b52a7) aid_levels_zoom

0xb422,	// (0x000b52af) zooming_pane_g1

0xb42a,	// (0x000b52b7) zooming_pane_g2

0xb42a,	// (0x000b52b7) zooming_pane_g3

0x0002,

0xf409,	// (0x000b9296) zooming_pane_g

0xb432,	// (0x000b52bf) level_10_zoom

0xb43b,	// (0x000b52c8) level_11_zoom

0xb444,	// (0x000b52d1) level_1_zoom

0xb44d,	// (0x000b52da) level_2_zoom

0xb456,	// (0x000b52e3) level_3_zoom

0xb45f,	// (0x000b52ec) level_4_zoom

0xb47a,	// (0x000b5307) level_5_zoom

0xb483,	// (0x000b5310) level_6_zoom

0xb48c,	// (0x000b5319) level_7_zoom

0xb495,	// (0x000b5322) level_8_zoom

0xb49e,	// (0x000b532b) level_9_zoom

0xb4af,	// (0x000b533c) popup_phob_thumbnail_window_g1

0xb4b7,	// (0x000b5344) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000b929d) popup_phob_thumbnail_window_g

0xc7f4,	// (0x000b6681) level_1_location

0xc7fc,	// (0x000b6689) level_2_location

0xc804,	// (0x000b6691) level_3_location

0xc80c,	// (0x000b6699) level_4_location

0xa9bb,	// (0x000b4848) level_5_location

0x2826,	// (0x000ac6b3) mce_icon_pane_g1

0x2830,	// (0x000ac6bd) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000b92a2) mce_icon_pane_g

0x2838,	// (0x000ac6c5) main_mup_pane_g1_ParamLimits

0x2838,	// (0x000ac6c5) main_mup_pane_g1

0x284e,	// (0x000ac6db) main_mup_pane_g2_ParamLimits

0x284e,	// (0x000ac6db) main_mup_pane_g2

0x2860,	// (0x000ac6ed) main_mup_pane_g3_ParamLimits

0x2860,	// (0x000ac6ed) main_mup_pane_g3

0x2872,	// (0x000ac6ff) main_mup_pane_g4_ParamLimits

0x2872,	// (0x000ac6ff) main_mup_pane_g4

0x288a,	// (0x000ac717) main_mup_pane_g5_ParamLimits

0x288a,	// (0x000ac717) main_mup_pane_g5

0x28a6,	// (0x000ac733) main_mup_pane_g6_ParamLimits

0x28a6,	// (0x000ac733) main_mup_pane_g6

0x28be,	// (0x000ac74b) main_mup_pane_g7_ParamLimits

0x28be,	// (0x000ac74b) main_mup_pane_g7

0x28d6,	// (0x000ac763) main_mup_pane_g8_ParamLimits

0x28d6,	// (0x000ac763) main_mup_pane_g8

0x28ee,	// (0x000ac77b) main_mup_pane_g9_ParamLimits

0x28ee,	// (0x000ac77b) main_mup_pane_g9

0x2908,	// (0x000ac795) main_mup_pane_g10_ParamLimits

0x2908,	// (0x000ac795) main_mup_pane_g10

0x2922,	// (0x000ac7af) main_mup_pane_g11_ParamLimits

0x2922,	// (0x000ac7af) main_mup_pane_g11

0x2936,	// (0x000ac7c3) main_mup_pane_g12_ParamLimits

0x2936,	// (0x000ac7c3) main_mup_pane_g12

0x294c,	// (0x000ac7d9) main_mup_pane_g13_ParamLimits

0x294c,	// (0x000ac7d9) main_mup_pane_g13

0x000c,

0xf41a,	// (0x000b92a7) main_mup_pane_g_ParamLimits

0xf41a,	// (0x000b92a7) main_mup_pane_g

0x2960,	// (0x000ac7ed) main_mup_pane_t1_ParamLimits

0x2960,	// (0x000ac7ed) main_mup_pane_t1

0x297a,	// (0x000ac807) main_mup_pane_t2_ParamLimits

0x297a,	// (0x000ac807) main_mup_pane_t2

0x2992,	// (0x000ac81f) main_mup_pane_t3_ParamLimits

0x2992,	// (0x000ac81f) main_mup_pane_t3

0x29aa,	// (0x000ac837) main_mup_pane_t4_ParamLimits

0x29aa,	// (0x000ac837) main_mup_pane_t4

0x29c8,	// (0x000ac855) main_mup_pane_t5_ParamLimits

0x29c8,	// (0x000ac855) main_mup_pane_t5

0x29dd,	// (0x000ac86a) main_mup_pane_t6_ParamLimits

0x29dd,	// (0x000ac86a) main_mup_pane_t6

0x0005,

0xf435,	// (0x000b92c2) main_mup_pane_t_ParamLimits

0xf435,	// (0x000b92c2) main_mup_pane_t

0x29ef,	// (0x000ac87c) mup_progress_pane_ParamLimits

0x29ef,	// (0x000ac87c) mup_progress_pane

0x29fb,	// (0x000ac888) mup_visualizer_pane_ParamLimits

0x29fb,	// (0x000ac888) mup_visualizer_pane

0x2a2f,	// (0x000ac8bc) mup_volume_pane_ParamLimits

0x2a2f,	// (0x000ac8bc) mup_volume_pane

0xb4bf,	// (0x000b534c) mup_visualizer_pane_g1_ParamLimits

0xb4bf,	// (0x000b534c) mup_visualizer_pane_g1

0xb4bf,	// (0x000b534c) mup_visualizer_pane_g2_ParamLimits

0xb4bf,	// (0x000b534c) mup_visualizer_pane_g2

0xb231,	// (0x000b50be) mup_visualizer_pane_g3_ParamLimits

0xb231,	// (0x000b50be) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000b92cf) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000b92cf) mup_visualizer_pane_g

0xa2ba,	// (0x000b4147) mup_volume_pane_g1

0xb4d5,	// (0x000b5362) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000b92d6) mup_volume_pane_g

0xa2ba,	// (0x000b4147) mup_progress_pane_g1

0xb4de,	// (0x000b536b) mup_progress_pane_g2

0xb4e7,	// (0x000b5374) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000b92db) mup_progress_pane_g

0x9f39,	// (0x000b3dc6) bg_popup_window_pane_cp05

0xb4f0,	// (0x000b537d) heading_pane_cp02_ParamLimits

0xb4f0,	// (0x000b537d) heading_pane_cp02

0xb50a,	// (0x000b5397) list_popup_blid_pane

0xb512,	// (0x000b539f) list_blid_sat_info_pane_ParamLimits

0xb512,	// (0x000b539f) list_blid_sat_info_pane

0xb525,	// (0x000b53b2) list_blid_sat_info_pane_g1

0xb52d,	// (0x000b53ba) list_blid_sat_info_pane_t1

0x2b45,	// (0x000ac9d2) mup_equalizer_pane_ParamLimits

0x2b45,	// (0x000ac9d2) mup_equalizer_pane

0x2b5e,	// (0x000ac9eb) mup_equalizer_pane_cp1_ParamLimits

0x2b5e,	// (0x000ac9eb) mup_equalizer_pane_cp1

0x2b7b,	// (0x000aca08) mup_equalizer_pane_cp2_ParamLimits

0x2b7b,	// (0x000aca08) mup_equalizer_pane_cp2

0x2b98,	// (0x000aca25) mup_equalizer_pane_cp3_ParamLimits

0x2b98,	// (0x000aca25) mup_equalizer_pane_cp3

0x2bb9,	// (0x000aca46) mup_equalizer_pane_cp4_ParamLimits

0x2bb9,	// (0x000aca46) mup_equalizer_pane_cp4

0x2bda,	// (0x000aca67) mup_equalizer_pane_cp5

0x2bee,	// (0x000aca7b) mup_equalizer_pane_cp6

0x2c02,	// (0x000aca8f) mup_equalizer_pane_cp7

0xc6d2,	// (0x000b655f) bg_popup_call_poc_act_pane_g9

0xc6da,	// (0x000b6567) bg_popup_call_poc_act_pane_g10

0xc6e2,	// (0x000b656f) bg_popup_call_poc_act_pane_g11

0x000a,

0xa194,	// (0x000b4021) mup_scale_pane

0xa2ba,	// (0x000b4147) mup_scale_pane_g1

0xb53b,	// (0x000b53c8) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000b92f7) mup_scale_pane_g

0xb55f,	// (0x000b53ec) msg_data_pane

0xb567,	// (0x000b53f4) scroll_pane_cp017

0x2c28,	// (0x000acab5) bg_list_pane_cp04_ParamLimits

0x2c28,	// (0x000acab5) bg_list_pane_cp04

0xb56f,	// (0x000b53fc) msg_data_pane_g1

0x2c40,	// (0x000acacd) msg_data_pane_g2

0x2c48,	// (0x000acad5) msg_data_pane_g3

0x2c50,	// (0x000acadd) msg_data_pane_g4

0x2c58,	// (0x000acae5) msg_data_pane_g5

0x2c60,	// (0x000acaed) msg_data_pane_g6

0x2c68,	// (0x000acaf5) msg_data_pane_g7

0x0006,

0xf479,	// (0x000b9306) msg_data_pane_g

0x2c70,	// (0x000acafd) msg_text_pane_ParamLimits

0x2c70,	// (0x000acafd) msg_text_pane

0x2c94,	// (0x000acb21) qrid_highlight_pane_cp011_ParamLimits

0x2c94,	// (0x000acb21) qrid_highlight_pane_cp011

0x9f39,	// (0x000b3dc6) msg_body_pane

0x9f39,	// (0x000b3dc6) msg_header_pane

0xb580,	// (0x000b540d) input_focus_pane_cp07

0xa435,	// (0x000b42c2) msg_header_pane_t1_ParamLimits

0xa435,	// (0x000b42c2) msg_header_pane_t1

0xa447,	// (0x000b42d4) msg_header_pane_t2_ParamLimits

0xa447,	// (0x000b42d4) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000b931a) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000b931a) msg_header_pane_t

0xb595,	// (0x000b5422) msg_body_pane_g1

0xa459,	// (0x000b42e6) msg_body_pane_t1_ParamLimits

0xa459,	// (0x000b42e6) msg_body_pane_t1

0xa48a,	// (0x000b4317) msg_body_pane_t2_ParamLimits

0xa48a,	// (0x000b4317) msg_body_pane_t2

0xa49c,	// (0x000b4329) msg_body_pane_t3_ParamLimits

0xa49c,	// (0x000b4329) msg_body_pane_t3

0x0002,

0xf492,	// (0x000b931f) msg_body_pane_t_ParamLimits

0xf492,	// (0x000b931f) msg_body_pane_t

0x2cf2,	// (0x000acb7f) main_viewer_pane_g1_ParamLimits

0x2cf2,	// (0x000acb7f) main_viewer_pane_g1

0x2d00,	// (0x000acb8d) main_viewer_pane_g2_ParamLimits

0x2d00,	// (0x000acb8d) main_viewer_pane_g2

0x2d0e,	// (0x000acb9b) main_viewer_pane_g3_ParamLimits

0x2d0e,	// (0x000acb9b) main_viewer_pane_g3

0x2d1d,	// (0x000acbaa) main_viewer_pane_g4_ParamLimits

0x2d1d,	// (0x000acbaa) main_viewer_pane_g4

0x98d7,	// (0x000b3764) main_viewer_pane_g5_ParamLimits

0x98d7,	// (0x000b3764) main_viewer_pane_g5

0x98d7,	// (0x000b3764) main_viewer_pane_g7_ParamLimits

0x98d7,	// (0x000b3764) main_viewer_pane_g7

0xaed5,	// (0x000b4d62) main_viewer_pane_g8_ParamLimits

0xaed5,	// (0x000b4d62) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000b932f) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000b932f) main_viewer_pane_g

0xb59d,	// (0x000b542a) viewer_content_pane_ParamLimits

0xb59d,	// (0x000b542a) viewer_content_pane

0x2d59,	// (0x000acbe6) main_postcard_pane_g1_ParamLimits

0x2d59,	// (0x000acbe6) main_postcard_pane_g1

0x2d6f,	// (0x000acbfc) main_postcard_pane_g2_ParamLimits

0x2d6f,	// (0x000acbfc) main_postcard_pane_g2

0x2d85,	// (0x000acc12) main_postcard_pane_g3_ParamLimits

0x2d85,	// (0x000acc12) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000b9340) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000b9340) main_postcard_pane_g

0x2d9c,	// (0x000acc29) main_postcard_pane_g4

0xc8f4,	// (0x000b6781) smil_status_volume_pane_g2

0x2ddf,	// (0x000acc6c) postcard_pane_ParamLimits

0x2ddf,	// (0x000acc6c) postcard_pane

0xb5ab,	// (0x000b5438) postcard_pane_g1_ParamLimits

0xb5ab,	// (0x000b5438) postcard_pane_g1

0x2e21,	// (0x000accae) postcard_pane_g2_ParamLimits

0x2e21,	// (0x000accae) postcard_pane_g2

0x2e2d,	// (0x000accba) postcard_pane_g3_ParamLimits

0x2e2d,	// (0x000accba) postcard_pane_g3

0xb5b9,	// (0x000b5446) postcard_pane_g4_ParamLimits

0xb5b9,	// (0x000b5446) postcard_pane_g4

0x2e39,	// (0x000accc6) postcard_pane_g5_ParamLimits

0x2e39,	// (0x000accc6) postcard_pane_g5

0x2e4e,	// (0x000accdb) postcard_pane_g6_ParamLimits

0x2e4e,	// (0x000accdb) postcard_pane_g6

0xb5ab,	// (0x000b5438) postcard_pane_g7_ParamLimits

0xb5ab,	// (0x000b5438) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000b934d) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000b934d) postcard_pane_g

0x2e62,	// (0x000accef) main_mp2_pane_g1_ParamLimits

0x2e62,	// (0x000accef) main_mp2_pane_g1

0x2e6e,	// (0x000accfb) main_mp2_pane_g2_ParamLimits

0x2e6e,	// (0x000accfb) main_mp2_pane_g2

0x2e7a,	// (0x000acd07) main_mp2_pane_g3_ParamLimits

0x2e7a,	// (0x000acd07) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000b935c) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000b935c) main_mp2_pane_g

0x2e86,	// (0x000acd13) main_mp2_pane_t1_ParamLimits

0x2e86,	// (0x000acd13) main_mp2_pane_t1

0x2e9b,	// (0x000acd28) main_mp2_pane_t2_ParamLimits

0x2e9b,	// (0x000acd28) main_mp2_pane_t2

0x2ead,	// (0x000acd3a) main_mp2_pane_t3_ParamLimits

0x2ead,	// (0x000acd3a) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000b9363) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000b9363) main_mp2_pane_t

0xb5c7,	// (0x000b5454) pec_content_pane_ParamLimits

0xb5c7,	// (0x000b5454) pec_content_pane

0xab64,	// (0x000b49f1) scroll_pane_cp015

0xb5d9,	// (0x000b5466) pec_attribute_pane_ParamLimits

0xb5d9,	// (0x000b5466) pec_attribute_pane

0x2ebf,	// (0x000acd4c) pec_content_pane_g1_ParamLimits

0x2ebf,	// (0x000acd4c) pec_content_pane_g1

0xb5e9,	// (0x000b5476) pec_content_pane_t1_ParamLimits

0xb5e9,	// (0x000b5476) pec_content_pane_t1

0xb5fb,	// (0x000b5488) pec_content_pane_t2_ParamLimits

0xb5fb,	// (0x000b5488) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000b936a) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000b936a) pec_content_pane_t

0x2ecb,	// (0x000acd58) list_single_graphic_pane_cp01_ParamLimits

0x2ecb,	// (0x000acd58) list_single_graphic_pane_cp01

0xa194,	// (0x000b4021) bg_popup_sub_pane_cp04

0xb60d,	// (0x000b549a) popup_mup_playback_window_g1

0xb619,	// (0x000b54a6) popup_mup_playback_window_t1

0xb62e,	// (0x000b54bb) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000b936f) popup_mup_playback_window_t

0xb665,	// (0x000b54f2) main_image_pane_g1_ParamLimits

0xb665,	// (0x000b54f2) main_image_pane_g1

0xb6a8,	// (0x000b5535) scroll_pane_cp018_ParamLimits

0xb6a8,	// (0x000b5535) scroll_pane_cp018

0xb6c0,	// (0x000b554d) scroll_pane_cp016_ParamLimits

0xb6c0,	// (0x000b554d) scroll_pane_cp016

0x2f99,	// (0x000ace26) smil2_image_pane_ParamLimits

0x2f99,	// (0x000ace26) smil2_image_pane

0x2fc9,	// (0x000ace56) smil2_root_pane_ParamLimits

0x2fc9,	// (0x000ace56) smil2_root_pane

0x3001,	// (0x000ace8e) smil2_text_pane_ParamLimits

0x3001,	// (0x000ace8e) smil2_text_pane

0x9f39,	// (0x000b3dc6) bg_list_pane_cp06

0xb6fc,	// (0x000b5589) grid_radio_pane

0x9f39,	// (0x000b3dc6) bg_popup_window_pane_cp06

0xb704,	// (0x000b5591) main_fmradio_pane_t1

0xb0ad,	// (0x000b4f3a) heading_pane_cp04

0xb712,	// (0x000b559f) main_fmradio_pane_t2

0xc72a,	// (0x000b65b7) popup_cale_lunar_info_window_g1

0xb720,	// (0x000b55ad) main_fmradio_pane_t3

0xc732,	// (0x000b65bf) popup_cale_lunar_info_window_g2

0xb72e,	// (0x000b55bb) main_fmradio_pane_t4

0x0001,

0xb73c,	// (0x000b55c9) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x000b945d) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000b9384) main_fmradio_pane_t

0xb74a,	// (0x000b55d7) wait_bar_pane_cp03

0xb752,	// (0x000b55df) cell_fmradio_pane_ParamLimits

0xb752,	// (0x000b55df) cell_fmradio_pane

0xb5ab,	// (0x000b5438) cell_fmradio_pane_g1_ParamLimits

0xb5ab,	// (0x000b5438) cell_fmradio_pane_g1

0x9f39,	// (0x000b3dc6) grid_highlight_pane_cp011

0xb765,	// (0x000b55f2) poc_content_pane_ParamLimits

0xb765,	// (0x000b55f2) poc_content_pane

0xb777,	// (0x000b5604) scroll_pane_cp019

0x3081,	// (0x000acf0e) popup_call_poc_act_window_ParamLimits

0x3081,	// (0x000acf0e) popup_call_poc_act_window

0x30a5,	// (0x000acf32) popup_call_poc_inact_window_ParamLimits

0x30a5,	// (0x000acf32) popup_call_poc_inact_window

0xf594,	// (0x000b9421) bg_popup_call_poc_act_pane_g

0xc6ea,	// (0x000b6577) bg_popup_call_poc_inact_pane_g1

0xc6f2,	// (0x000b657f) bg_popup_call_poc_inact_pane_g2

0xb77f,	// (0x000b560c) popup_call_poc_act_window_g2

0xc6fa,	// (0x000b6587) bg_popup_call_poc_inact_pane_g3

0xc67a,	// (0x000b6507) bg_popup_call_poc_inact_pane_g4

0xc702,	// (0x000b658f) bg_popup_call_poc_inact_pane_g5

0xb787,	// (0x000b5614) popup_call_poc_act_window_t1_ParamLimits

0xb787,	// (0x000b5614) popup_call_poc_act_window_t1

0xb7af,	// (0x000b563c) popup_call_poc_act_window_t2_ParamLimits

0xb7af,	// (0x000b563c) popup_call_poc_act_window_t2

0xb7d7,	// (0x000b5664) popup_call_poc_act_window_t3_ParamLimits

0xb7d7,	// (0x000b5664) popup_call_poc_act_window_t3

0xb7ff,	// (0x000b568c) popup_call_poc_act_window_t4_ParamLimits

0xb7ff,	// (0x000b568c) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000b938f) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000b938f) popup_call_poc_act_window_t

0xc70a,	// (0x000b6597) bg_popup_call_poc_inact_pane_g6

0xc712,	// (0x000b659f) bg_popup_call_poc_inact_pane_g7

0xc71a,	// (0x000b65a7) bg_popup_call_poc_inact_pane_g8

0xb811,	// (0x000b569e) popup_call_poc_inact_window_g2

0xc722,	// (0x000b65af) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x000b9438) bg_popup_call_poc_inact_pane_g

0xb819,	// (0x000b56a6) popup_call_poc_inact_window_t1_ParamLimits

0xb819,	// (0x000b56a6) popup_call_poc_inact_window_t1

0xb82e,	// (0x000b56bb) popup_call_poc_inact_window_t2_ParamLimits

0xb82e,	// (0x000b56bb) popup_call_poc_inact_window_t2

0xb843,	// (0x000b56d0) popup_call_poc_inact_window_t3_ParamLimits

0xb843,	// (0x000b56d0) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x000b9398) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x000b9398) popup_call_poc_inact_window_t

0xc867,	// (0x000b66f4) context_pane_ParamLimits

0x38df,	// (0x000ad76c) signal_pane_ParamLimits

0xa9bb,	// (0x000b4848) main_call2_pane

0x9922,	// (0x000b37af) popup_phob_thumbnail2_window_ParamLimits

0x9922,	// (0x000b37af) popup_phob_thumbnail2_window

0x98bf,	// (0x000b374c) aid_hotspot_pointer_arrow_pane

0x98c7,	// (0x000b3754) aid_hotspot_pointer_hand_pane

0x33ef,	// (0x000ad27c) phob_pre_status_pane_g5

0x0f75,	// (0x000aae02) cams_zoom_pane_ParamLimits

0x0f84,	// (0x000aae11) image_vga_pane_ParamLimits

0x0f9e,	// (0x000aae2b) main_camera_pane_g1_ParamLimits

0x0fb0,	// (0x000aae3d) main_camera_pane_g2_ParamLimits

0x0fc0,	// (0x000aae4d) main_camera_pane_g3_ParamLimits

0x0fd0,	// (0x000aae5d) main_camera_pane_g4_ParamLimits

0x0fe0,	// (0x000aae6d) main_camera_pane_g5_ParamLimits

0x0ff0,	// (0x000aae7d) main_camera_pane_g6_ParamLimits

0x1000,	// (0x000aae8d) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000b9097) main_camera_pane_g_ParamLimits

0x1010,	// (0x000aae9d) main_camera_pane_t1_ParamLimits

0x1026,	// (0x000aaeb3) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000b90a8) main_camera_pane_t_ParamLimits

0xa194,	// (0x000b4021) bg_popup_preview_window_pane_cp01_ParamLimits

0xa194,	// (0x000b4021) bg_popup_preview_window_pane_cp01

0xb858,	// (0x000b56e5) popup_phob_thumbnail2_window_g1_ParamLimits

0xb858,	// (0x000b56e5) popup_phob_thumbnail2_window_g1

0x9f39,	// (0x000b3dc6) call2_cli_visual_pane

0x30d9,	// (0x000acf66) popup_call2_audio_conf_window_ParamLimits

0x30d9,	// (0x000acf66) popup_call2_audio_conf_window

0x30f9,	// (0x000acf86) popup_call2_audio_first_window_ParamLimits

0x30f9,	// (0x000acf86) popup_call2_audio_first_window

0x318f,	// (0x000ad01c) popup_call2_audio_in_window_ParamLimits

0x318f,	// (0x000ad01c) popup_call2_audio_in_window

0x31d7,	// (0x000ad064) popup_call2_audio_out_window_ParamLimits

0x31d7,	// (0x000ad064) popup_call2_audio_out_window

0x3241,	// (0x000ad0ce) popup_call2_audio_second_window_ParamLimits

0x3241,	// (0x000ad0ce) popup_call2_audio_second_window

0x32a7,	// (0x000ad134) popup_call2_audio_wait_window_ParamLimits

0x32a7,	// (0x000ad134) popup_call2_audio_wait_window

0x9f39,	// (0x000b3dc6) bg_popup_call2_act_pane_cp03

0xa176,	// (0x000b4003) list_conf_pane_cp

0xb864,	// (0x000b56f1) popup_call2_audio_conf_window_t1

0xb872,	// (0x000b56ff) list_single_graphic_popup_conf2_pane_ParamLimits

0xb872,	// (0x000b56ff) list_single_graphic_popup_conf2_pane

0xb11d,	// (0x000b4faa) list_highlight_pane_cp04

0xb885,	// (0x000b5712) list_single_graphic_popup_conf2_pane_g1

0xb12e,	// (0x000b4fbb) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x000b939f) list_single_graphic_popup_conf2_pane_g

0xb88f,	// (0x000b571c) list_single_graphic_popup_conf2_pane_t1

0xb89d,	// (0x000b572a) bg_popup_call2_act_pane_cp01_ParamLimits

0xb89d,	// (0x000b572a) bg_popup_call2_act_pane_cp01

0xb927,	// (0x000b57b4) call_type_pane_cp05_ParamLimits

0xb927,	// (0x000b57b4) call_type_pane_cp05

0xb97b,	// (0x000b5808) popup_call2_audio_second_window_g1_ParamLimits

0xb97b,	// (0x000b5808) popup_call2_audio_second_window_g1

0xb9cf,	// (0x000b585c) popup_call2_audio_second_window_g2_ParamLimits

0xb9cf,	// (0x000b585c) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x000b93a4) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x000b93a4) popup_call2_audio_second_window_g

0xba34,	// (0x000b58c1) popup_call2_audio_second_window_t1_ParamLimits

0xba34,	// (0x000b58c1) popup_call2_audio_second_window_t1

0xbaef,	// (0x000b597c) popup_call2_audio_second_window_t2_ParamLimits

0xbaef,	// (0x000b597c) popup_call2_audio_second_window_t2

0xbb42,	// (0x000b59cf) popup_call2_audio_second_window_t3_ParamLimits

0xbb42,	// (0x000b59cf) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x000b93ab) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x000b93ab) popup_call2_audio_second_window_t

0x9f39,	// (0x000b3dc6) bg_popup_call2_in_pane_cp02

0x9f43,	// (0x000b3dd0) call_type_pane_cp04

0x9f4b,	// (0x000b3dd8) popup_call2_audio_wait_window_g1

0x9f53,	// (0x000b3de0) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000b8f86) popup_call2_audio_wait_window_g

0x9f5b,	// (0x000b3de8) popup_call2_audio_wait_window_t3

0xbc35,	// (0x000b5ac2) bg_popup_call2_act_pane_ParamLimits

0xbc35,	// (0x000b5ac2) bg_popup_call2_act_pane

0xbcf5,	// (0x000b5b82) call_type_pane_cp03_ParamLimits

0xbcf5,	// (0x000b5b82) call_type_pane_cp03

0xbd59,	// (0x000b5be6) popup_call2_audio_first_window_g1_ParamLimits

0xbd59,	// (0x000b5be6) popup_call2_audio_first_window_g1

0xbdc9,	// (0x000b5c56) popup_call2_audio_first_window_g2_ParamLimits

0xbdc9,	// (0x000b5c56) popup_call2_audio_first_window_g2

0xb4bf,	// (0x000b534c) popup_call2_audio_first_window_g3_ParamLimits

0xb4bf,	// (0x000b534c) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x000b93b4) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x000b93b4) popup_call2_audio_first_window_g

0xbea7,	// (0x000b5d34) popup_call2_audio_first_window_t1_ParamLimits

0xbea7,	// (0x000b5d34) popup_call2_audio_first_window_t1

0xbfaa,	// (0x000b5e37) popup_call2_audio_first_window_t4_ParamLimits

0xbfaa,	// (0x000b5e37) popup_call2_audio_first_window_t4

0xc08d,	// (0x000b5f1a) popup_call2_audio_first_window_t5_ParamLimits

0xc08d,	// (0x000b5f1a) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x000b93bf) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x000b93bf) popup_call2_audio_first_window_t

0xa18c,	// (0x000b4019) bg_popup_call2_act_pane_g1

0xc73a,	// (0x000b65c7) popup_cale_lunar_info_window_t1

0xc748,	// (0x000b65d5) popup_cale_lunar_info_window_t2

0xc756,	// (0x000b65e3) popup_cale_lunar_info_window_t3

0x9f39,	// (0x000b3dc6) bg_popup_call2_bubble_pane

0xc18e,	// (0x000b601b) bg_popup_call2_in_pane_cp01_ParamLimits

0xc18e,	// (0x000b601b) bg_popup_call2_in_pane_cp01

0x94eb,	// (0x000b3378) call_type_pane_cp02

0xc1d6,	// (0x000b6063) popup_call2_audio_out_window_g1_ParamLimits

0xc1d6,	// (0x000b6063) popup_call2_audio_out_window_g1

0xc202,	// (0x000b608f) popup_call2_audio_out_window_g2_ParamLimits

0xc202,	// (0x000b608f) popup_call2_audio_out_window_g2

0xc22a,	// (0x000b60b7) popup_call2_audio_out_window_g3_ParamLimits

0xc22a,	// (0x000b60b7) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x000b93c8) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x000b93c8) popup_call2_audio_out_window_g

0xc265,	// (0x000b60f2) popup_call2_audio_out_window_t1_ParamLimits

0xc265,	// (0x000b60f2) popup_call2_audio_out_window_t1

0xc2c4,	// (0x000b6151) popup_call2_audio_out_window_t2_ParamLimits

0xc2c4,	// (0x000b6151) popup_call2_audio_out_window_t2

0xc318,	// (0x000b61a5) popup_call2_audio_out_window_t3_ParamLimits

0xc318,	// (0x000b61a5) popup_call2_audio_out_window_t3

0xc32e,	// (0x000b61bb) popup_call2_audio_out_window_t4_ParamLimits

0xc32e,	// (0x000b61bb) popup_call2_audio_out_window_t4

0xc344,	// (0x000b61d1) popup_call2_audio_out_window_t5_ParamLimits

0xc344,	// (0x000b61d1) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x000b93d1) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x000b93d1) popup_call2_audio_out_window_t

0xc3a8,	// (0x000b6235) bg_popup_call2_in_pane_ParamLimits

0xc3a8,	// (0x000b6235) bg_popup_call2_in_pane

0xc404,	// (0x000b6291) popup_call2_audio_in_window_g1_ParamLimits

0xc404,	// (0x000b6291) popup_call2_audio_in_window_g1

0xc43c,	// (0x000b62c9) popup_call2_audio_in_window_g2_ParamLimits

0xc43c,	// (0x000b62c9) popup_call2_audio_in_window_g2

0xc474,	// (0x000b6301) popup_call2_audio_in_window_g3_ParamLimits

0xc474,	// (0x000b6301) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000b93de) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000b93de) popup_call2_audio_in_window_g

0xc4cc,	// (0x000b6359) popup_call2_audio_in_window_t1_ParamLimits

0xc4cc,	// (0x000b6359) popup_call2_audio_in_window_t1

0xc54c,	// (0x000b63d9) popup_call2_audio_in_window_t2_ParamLimits

0xc54c,	// (0x000b63d9) popup_call2_audio_in_window_t2

0xc5cc,	// (0x000b6459) popup_call2_audio_in_window_t3_ParamLimits

0xc5cc,	// (0x000b6459) popup_call2_audio_in_window_t3

0xc5e6,	// (0x000b6473) popup_call2_audio_in_window_t4_ParamLimits

0xc5e6,	// (0x000b6473) popup_call2_audio_in_window_t4

0xc5f8,	// (0x000b6485) popup_call2_audio_in_window_t5_ParamLimits

0xc5f8,	// (0x000b6485) popup_call2_audio_in_window_t5

0xc60d,	// (0x000b649a) popup_call2_audio_in_window_t6_ParamLimits

0xc60d,	// (0x000b649a) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x000b93e7) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x000b93e7) popup_call2_audio_in_window_t

0xa18c,	// (0x000b4019) bg_popup_call2_in_pane_g1

0xc764,	// (0x000b65f1) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x000b9462) popup_cale_lunar_info_window_t

0xa194,	// (0x000b4021) bg_popup_call2_rect_pane_ParamLimits

0xa194,	// (0x000b4021) bg_popup_call2_rect_pane

0x9f39,	// (0x000b3dc6) call2_cli_visual_graphic_pane

0x9f39,	// (0x000b3dc6) call2_cli_visual_text_pane

0x9949,	// (0x000b37d6) smil_status_volume_pane_g3

0x0002,

0xa2ba,	// (0x000b4147) call2_cli_visual_graphic_pane_g1

0xa2ba,	// (0x000b4147) call2_cli_visual_graphic_pane_g2

0xa2ba,	// (0x000b4147) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x000b93f4) call2_cli_visual_graphic_pane_g

0xc622,	// (0x000b64af) bg_popup_call2_rect_pane_g1

0xa358,	// (0x000b41e5) bg_popup_call2_rect_pane_g2

0xc62a,	// (0x000b64b7) bg_popup_call2_rect_pane_g3

0xc632,	// (0x000b64bf) bg_popup_call2_rect_pane_g4

0xc63a,	// (0x000b64c7) bg_popup_call2_rect_pane_g5

0xc642,	// (0x000b64cf) bg_popup_call2_rect_pane_g6

0xc64a,	// (0x000b64d7) bg_popup_call2_rect_pane_g7

0xc652,	// (0x000b64df) bg_popup_call2_rect_pane_g8

0xc65a,	// (0x000b64e7) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000b93fb) bg_popup_call2_rect_pane_g

0xc662,	// (0x000b64ef) bg_popup_call2_bubble_pane_g1

0xc66a,	// (0x000b64f7) bg_popup_call2_bubble_pane_g2

0xc672,	// (0x000b64ff) bg_popup_call2_bubble_pane_g3

0xc67a,	// (0x000b6507) bg_popup_call2_bubble_pane_g4

0xc682,	// (0x000b650f) bg_popup_call2_bubble_pane_g5

0xc68a,	// (0x000b6517) bg_popup_call2_bubble_pane_g6

0xc692,	// (0x000b651f) bg_popup_call2_bubble_pane_g7

0xc69a,	// (0x000b6527) bg_popup_call2_bubble_pane_g8

0xc6a2,	// (0x000b652f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000b940e) bg_popup_call2_bubble_pane_g

0x08cd,	// (0x000aa75a) aid_cale_week_size_cell_pane

0x103c,	// (0x000aaec9) aid_cams_cif_uncrop_pane_ParamLimits

0x103c,	// (0x000aaec9) aid_cams_cif_uncrop_pane

0x11f1,	// (0x000ab07e) aid_cams_size_cell_ParamLimits

0x11f1,	// (0x000ab07e) aid_cams_size_cell

0x1205,	// (0x000ab092) grid_cams_pane_ParamLimits

0x121f,	// (0x000ab0ac) linegrid_cams_pane_ParamLimits

0x13fe,	// (0x000ab28b) call_video_pane_t1

0x141c,	// (0x000ab2a9) call_video_pane_t2

0x0001,

0xf26e,	// (0x000b90fb) call_video_pane_t

0x1840,	// (0x000ab6cd) aid_cale_month_size_cell_pane_ParamLimits

0x1840,	// (0x000ab6cd) aid_cale_month_size_cell_pane

0xf61e,	// (0x000b94ab) smil_status_volume_pane_g

0x9956,	// (0x000b37e3) volume_smil_pane_ParamLimits

0x937e,	// (0x000b320b) aid_popup2_width_pane

0x0851,	// (0x000aa6de) cell_qdial_pane_g4_ParamLimits

0x0851,	// (0x000aa6de) cell_qdial_pane_g4

0x275f,	// (0x000ac5ec) aid_blid_cardinal_pane_ParamLimits

0x276b,	// (0x000ac5f8) aid_blid_destination_pane_ParamLimits

0x276b,	// (0x000ac5f8) aid_blid_destination_pane

0xa194,	// (0x000b4021) bg_popup_call_poc_act_pane_ParamLimits

0xa194,	// (0x000b4021) bg_popup_call_poc_act_pane

0xa194,	// (0x000b4021) bg_popup_call_poc_inact_pane_ParamLimits

0xa194,	// (0x000b4021) bg_popup_call_poc_inact_pane

0xc6aa,	// (0x000b6537) bg_popup_call_poc_act_pane_g1

0xc6b2,	// (0x000b653f) bg_popup_call_poc_act_pane_g2

0xc6ba,	// (0x000b6547) bg_popup_call_poc_act_pane_g3

0xc67a,	// (0x000b6507) bg_popup_call_poc_act_pane_g4

0xc682,	// (0x000b650f) bg_popup_call_poc_act_pane_g5

0xc6c2,	// (0x000b654f) bg_popup_call_poc_act_pane_g6

0xc692,	// (0x000b651f) bg_popup_call_poc_act_pane_g7

0xc6ca,	// (0x000b6557) bg_popup_call_poc_act_pane_g8

0x9f39,	// (0x000b3dc6) main_usb_pane

0x98fd,	// (0x000b378a) popup_cale_lunar_info_window

0x16e6,	// (0x000ab573) im_reading_pane_t1_ParamLimits

0xaabc,	// (0x000b4949) list_im_pane_ParamLimits

0xaacd,	// (0x000b495a) scroll_pane_cp07_ParamLimits

0x9f39,	// (0x000b3dc6) grid_highlight_pane_cp012

0xa194,	// (0x000b4021) mup_scale_pane_ParamLimits

0xb5ab,	// (0x000b5438) main_usb_pane_g1_ParamLimits

0xb5ab,	// (0x000b5438) main_usb_pane_g1

0x3304,	// (0x000ad191) main_usb_pane_g2_ParamLimits

0x3304,	// (0x000ad191) main_usb_pane_g2

0x0001,

0xf5be,	// (0x000b944b) main_usb_pane_g_ParamLimits

0xf5be,	// (0x000b944b) main_usb_pane_g

0x331a,	// (0x000ad1a7) main_usb_pane_t1_ParamLimits

0x331a,	// (0x000ad1a7) main_usb_pane_t1

0x332c,	// (0x000ad1b9) main_usb_pane_t2_ParamLimits

0x332c,	// (0x000ad1b9) main_usb_pane_t2

0x333e,	// (0x000ad1cb) main_usb_pane_t3_ParamLimits

0x333e,	// (0x000ad1cb) main_usb_pane_t3

0x3350,	// (0x000ad1dd) main_usb_pane_t4_ParamLimits

0x3350,	// (0x000ad1dd) main_usb_pane_t4

0x3362,	// (0x000ad1ef) main_usb_pane_t5_ParamLimits

0x3362,	// (0x000ad1ef) main_usb_pane_t5

0x3374,	// (0x000ad201) main_usb_pane_t6_ParamLimits

0x3374,	// (0x000ad201) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x000b9450) main_usb_pane_t_ParamLimits

0x270e,	// (0x000ac59b) aid_text_placing

0x2717,	// (0x000ac5a4) main_location2_pane_t1_ParamLimits

0x2729,	// (0x000ac5b6) main_location2_pane_t2_ParamLimits

0x273b,	// (0x000ac5c8) main_location2_pane_t3_ParamLimits

0x274d,	// (0x000ac5da) main_location2_pane_t4_ParamLimits

0x274d,	// (0x000ac5da) main_location2_pane_t4

0xf3cf,	// (0x000b925c) main_location2_pane_t_ParamLimits

0xa1d0,	// (0x000b405d) find_pinb_pane_g2_ParamLimits

0xa1d0,	// (0x000b405d) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x000b8fac) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x000b8fac) find_pinb_pane_g

0xa1dc,	// (0x000b4069) find_pinb_pane_t1_ParamLimits

0xa1ee,	// (0x000b407b) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x000b8fb1) find_pinb_pane_t_ParamLimits

0x9f39,	// (0x000b3dc6) main_call3_pane

0x1cfb,	// (0x000abb88) cale_month_day_heading_pane_t1_ParamLimits

0x1d81,	// (0x000abc0e) cale_month_day_heading_pane_t2_ParamLimits

0x1e12,	// (0x000abc9f) cale_month_day_heading_pane_t3_ParamLimits

0x1ea3,	// (0x000abd30) cale_month_day_heading_pane_t4_ParamLimits

0x1f3c,	// (0x000abdc9) cale_month_day_heading_pane_t5_ParamLimits

0x1fdd,	// (0x000abe6a) cale_month_day_heading_pane_t6_ParamLimits

0x207e,	// (0x000abf0b) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000b9133) cale_month_day_heading_pane_t_ParamLimits

0xad17,	// (0x000b4ba4) smil_status_volume_pane

0x2dfd,	// (0x000acc8a) postcard_address_pane_ParamLimits

0x2dfd,	// (0x000acc8a) postcard_address_pane

0x2e0f,	// (0x000acc9c) postcard_message_pane_ParamLimits

0x2e0f,	// (0x000acc9c) postcard_message_pane

0x32e1,	// (0x000ad16e) call2_cli_visual_pane_t1_ParamLimits

0x32e1,	// (0x000ad16e) call2_cli_visual_pane_t1

0x3b0e,	// (0x000ad99b) postcard_message_pane_t1_ParamLimits

0x3b0e,	// (0x000ad99b) postcard_message_pane_t1

0x3af7,	// (0x000ad984) postcard_address_pane_t1_ParamLimits

0x3af7,	// (0x000ad984) postcard_address_pane_t1

0x3ae3,	// (0x000ad970) popup_call3_audio_in_window_ParamLimits

0x3ae3,	// (0x000ad970) popup_call3_audio_in_window

0x396e,	// (0x000ad7fb) bg_popup_call3_in_pane_ParamLimits

0x396e,	// (0x000ad7fb) bg_popup_call3_in_pane

0x39e4,	// (0x000ad871) popup_call3_audio_in_window_g1_ParamLimits

0x39e4,	// (0x000ad871) popup_call3_audio_in_window_g1

0x3a04,	// (0x000ad891) popup_call3_audio_in_window_g2_ParamLimits

0x3a04,	// (0x000ad891) popup_call3_audio_in_window_g2

0x3a24,	// (0x000ad8b1) popup_call3_audio_in_window_g3_ParamLimits

0x3a24,	// (0x000ad8b1) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x000b94b2) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x000b94b2) popup_call3_audio_in_window_g

0x3a55,	// (0x000ad8e2) popup_call3_audio_in_window_t1_ParamLimits

0x3a55,	// (0x000ad8e2) popup_call3_audio_in_window_t1

0x3a93,	// (0x000ad920) popup_call3_audio_in_window_t2_ParamLimits

0x3a93,	// (0x000ad920) popup_call3_audio_in_window_t2

0x3ad1,	// (0x000ad95e) popup_call3_audio_in_window_t3_ParamLimits

0x3ad1,	// (0x000ad95e) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x000b94bb) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x000b94bb) popup_call3_audio_in_window_t

0xa9bb,	// (0x000b4848) bg_popup_call3_rect_pane

0xc622,	// (0x000b64af) bg_popup_call3_rect_pane_g1

0xa358,	// (0x000b41e5) bg_popup_call3_rect_pane_g2

0xc62a,	// (0x000b64b7) bg_popup_call3_rect_pane_g3

0xc632,	// (0x000b64bf) bg_popup_call3_rect_pane_g4

0xc63a,	// (0x000b64c7) bg_popup_call3_rect_pane_g5

0xc642,	// (0x000b64cf) bg_popup_call3_rect_pane_g6

0xc64a,	// (0x000b64d7) bg_popup_call3_rect_pane_g7

0x2a45,	// (0x000ac8d2) mup_visualizer_osc_pane

0xb4cd,	// (0x000b535a) mup_visualizer_spec_pane

0x399e,	// (0x000ad82b) call3_video_qcif_pane_ParamLimits

0x399e,	// (0x000ad82b) call3_video_qcif_pane

0x39b1,	// (0x000ad83e) call3_video_qcif_uncrop_pane_ParamLimits

0x39b1,	// (0x000ad83e) call3_video_qcif_uncrop_pane

0x39bf,	// (0x000ad84c) call3_video_subqcif_pane_ParamLimits

0x39bf,	// (0x000ad84c) call3_video_subqcif_pane

0x39d3,	// (0x000ad860) call3_video_subqcif_uncrop_pane_ParamLimits

0x39d3,	// (0x000ad860) call3_video_subqcif_uncrop_pane

0x3a44,	// (0x000ad8d1) popup_call3_audio_in_window_g4_ParamLimits

0x3a44,	// (0x000ad8d1) popup_call3_audio_in_window_g4

0x395d,	// (0x000ad7ea) mup_spec_half_pane

0x3966,	// (0x000ad7f3) mup_spec_half_pane_cp

0xc8c7,	// (0x000b6754) mup_osc_middle_pane

0xc8d0,	// (0x000b675d) mup_visualizer_osc_pane_g1

0x393d,	// (0x000ad7ca) mup_spec_bar_pane_ParamLimits

0x393d,	// (0x000ad7ca) mup_spec_bar_pane

0xc8b4,	// (0x000b6741) mup_spec_bar_pane_g1

0xc8be,	// (0x000b674b) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x000b94a6) mup_spec_bar_pane_g

0x08cd,	// (0x000aa75a) aid_cale_week_size_cell_pane_ParamLimits

0x08e7,	// (0x000aa774) bg_cale_heading_pane_ParamLimits

0xa3c1,	// (0x000b424e) bg_cale_pane_cp01_ParamLimits

0x08ff,	// (0x000aa78c) cale_week_corner_pane_ParamLimits

0x091e,	// (0x000aa7ab) cale_week_day_heading_pane_ParamLimits

0x093b,	// (0x000aa7c8) cale_week_scroll_pane_g1_ParamLimits

0x094e,	// (0x000aa7db) cale_week_scroll_pane_g2_ParamLimits

0x0966,	// (0x000aa7f3) cale_week_scroll_pane_g3_ParamLimits

0x097e,	// (0x000aa80b) cale_week_scroll_pane_g4_ParamLimits

0x0996,	// (0x000aa823) cale_week_scroll_pane_g5_ParamLimits

0x09b6,	// (0x000aa843) cale_week_scroll_pane_g6_ParamLimits

0x09d6,	// (0x000aa863) cale_week_scroll_pane_g7_ParamLimits

0x09f6,	// (0x000aa883) cale_week_scroll_pane_g8_ParamLimits

0x0a1a,	// (0x000aa8a7) cale_week_scroll_pane_g9_ParamLimits

0x0a32,	// (0x000aa8bf) cale_week_scroll_pane_g10_ParamLimits

0x0a4a,	// (0x000aa8d7) cale_week_scroll_pane_g11_ParamLimits

0x0a62,	// (0x000aa8ef) cale_week_scroll_pane_g12_ParamLimits

0x0a7a,	// (0x000aa907) cale_week_scroll_pane_g13_ParamLimits

0x0a7a,	// (0x000aa907) cale_week_scroll_pane_g14_ParamLimits

0x0a7a,	// (0x000aa907) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000b903d) cale_week_scroll_pane_g_ParamLimits

0x0ab6,	// (0x000aa943) cale_week_time_pane_ParamLimits

0x0ada,	// (0x000aa967) grid_cale_week_pane_ParamLimits

0xa3de,	// (0x000b426b) listscroll_cale_week_pane_t1

0xa3f0,	// (0x000b427d) scroll_pane_cp08_ParamLimits

0x1895,	// (0x000ab722) cale_month_corner_pane_ParamLimits

0xaced,	// (0x000b4b7a) cale_month_pane_t1

0x1c99,	// (0x000abb26) cale_month_week_pane_ParamLimits

0x253f,	// (0x000ac3cc) popup_call_status_window_g1_ParamLimits

0x2553,	// (0x000ac3e0) popup_call_status_window_g2_ParamLimits

0x2567,	// (0x000ac3f4) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000b91e3) popup_call_status_window_g_ParamLimits

0xb09d,	// (0x000b4f2a) aid_call2_pane

0x2caa,	// (0x000acb37) msg_header_pane_g1

0x2dfd,	// (0x000acc8a) postcard_address2_pane_ParamLimits

0x2dfd,	// (0x000acc8a) postcard_address2_pane

0x2e0f,	// (0x000acc9c) postcard_message2_pane_ParamLimits

0x2e0f,	// (0x000acc9c) postcard_message2_pane

0x38ed,	// (0x000ad77a) message2_row_pane_ParamLimits

0x38ed,	// (0x000ad77a) message2_row_pane

0x390a,	// (0x000ad797) address2_row_pane_ParamLimits

0x390a,	// (0x000ad797) address2_row_pane

0xc882,	// (0x000b670f) postcard_message2_row_pane_g1

0xc88a,	// (0x000b6717) postcard_message2_row_pane_t1

0xc882,	// (0x000b670f) address2_row_pane_g1

0xc88a,	// (0x000b6717) address2_row_pane_t1

0x0ef4,	// (0x000aad81) aid_size_cell_vorec

0x9f39,	// (0x000b3dc6) main_rss_pane

0x391d,	// (0x000ad7aa) rss_list_single_pane_ParamLimits

0x391d,	// (0x000ad7aa) rss_list_single_pane

0xc898,	// (0x000b6725) rss_list_single_pane_t1

0xc8a6,	// (0x000b6733) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x000b94a1) rss_list_single_pane_t

0x9f39,	// (0x000b3dc6) main_camera2_pane

0x9f39,	// (0x000b3dc6) main_video2_pane

0x3b87,	// (0x000ada14) cams_zoom_pane_cp2_ParamLimits

0x3b87,	// (0x000ada14) cams_zoom_pane_cp2

0x3ba7,	// (0x000ada34) image2_vga_pane_ParamLimits

0x3ba7,	// (0x000ada34) image2_vga_pane

0x3bf8,	// (0x000ada85) main_camera2_pane_g1_ParamLimits

0x3bf8,	// (0x000ada85) main_camera2_pane_g1

0x3c18,	// (0x000adaa5) main_camera2_pane_g2_ParamLimits

0x3c18,	// (0x000adaa5) main_camera2_pane_g2

0x3c38,	// (0x000adac5) main_camera2_pane_g3_ParamLimits

0x3c38,	// (0x000adac5) main_camera2_pane_g3

0x3c58,	// (0x000adae5) main_camera2_pane_g4_ParamLimits

0x3c58,	// (0x000adae5) main_camera2_pane_g4

0x3c78,	// (0x000adb05) main_camera2_pane_g5_ParamLimits

0x3c78,	// (0x000adb05) main_camera2_pane_g5

0x3c98,	// (0x000adb25) main_camera2_pane_g6_ParamLimits

0x3c98,	// (0x000adb25) main_camera2_pane_g6

0x3cb8,	// (0x000adb45) main_camera2_pane_g7_ParamLimits

0x3cb8,	// (0x000adb45) main_camera2_pane_g7

0x3cd8,	// (0x000adb65) main_camera2_pane_g8_ParamLimits

0x3cd8,	// (0x000adb65) main_camera2_pane_g8

0x0008,

0xf635,	// (0x000b94c2) main_camera2_pane_g_ParamLimits

0xf635,	// (0x000b94c2) main_camera2_pane_g

0x3d18,	// (0x000adba5) main_camera2_pane_t1_ParamLimits

0x3d18,	// (0x000adba5) main_camera2_pane_t1

0x3d4d,	// (0x000adbda) main_camera2_pane_t2_ParamLimits

0x3d4d,	// (0x000adbda) main_camera2_pane_t2

0x3d73,	// (0x000adc00) main_camera2_pane_t3_ParamLimits

0x3d73,	// (0x000adc00) main_camera2_pane_t3

0x3dd1,	// (0x000adc5e) main_camera2_pane_t4_ParamLimits

0x3dd1,	// (0x000adc5e) main_camera2_pane_t4

0x0006,

0xf648,	// (0x000b94d5) main_camera2_pane_t_ParamLimits

0xf648,	// (0x000b94d5) main_camera2_pane_t

0x3e63,	// (0x000adcf0) cams_zoom_pane_cp4_ParamLimits

0x3e63,	// (0x000adcf0) cams_zoom_pane_cp4

0x3e79,	// (0x000add06) image2_cif_pane_ParamLimits

0x3e79,	// (0x000add06) image2_cif_pane

0x3ea4,	// (0x000add31) image2_subqcif_pane_ParamLimits

0x3ea4,	// (0x000add31) image2_subqcif_pane

0x3ebe,	// (0x000add4b) main_video2_pane_g1_ParamLimits

0x3ebe,	// (0x000add4b) main_video2_pane_g1

0x3ed8,	// (0x000add65) main_video2_pane_g2_ParamLimits

0x3ed8,	// (0x000add65) main_video2_pane_g2

0x3eee,	// (0x000add7b) main_video2_pane_g3_ParamLimits

0x3eee,	// (0x000add7b) main_video2_pane_g3

0x3f04,	// (0x000add91) main_video2_pane_g4_ParamLimits

0x3f04,	// (0x000add91) main_video2_pane_g4

0x3f1a,	// (0x000adda7) main_video2_pane_g5_ParamLimits

0x3f1a,	// (0x000adda7) main_video2_pane_g5

0x3f30,	// (0x000addbd) main_video2_pane_g6_ParamLimits

0x3f30,	// (0x000addbd) main_video2_pane_g6

0x0005,

0xf657,	// (0x000b94e4) main_video2_pane_g_ParamLimits

0xf657,	// (0x000b94e4) main_video2_pane_g

0x3f4a,	// (0x000addd7) main_video2_pane_t1_ParamLimits

0x3f4a,	// (0x000addd7) main_video2_pane_t1

0x3f6e,	// (0x000addfb) main_video2_pane_t2_ParamLimits

0x3f6e,	// (0x000addfb) main_video2_pane_t2

0x3fbc,	// (0x000ade49) main_video2_pane_t3_ParamLimits

0x3fbc,	// (0x000ade49) main_video2_pane_t3

0x0002,

0xf664,	// (0x000b94f1) main_video2_pane_t_ParamLimits

0xf664,	// (0x000b94f1) main_video2_pane_t

0x342f,	// (0x000ad2bc) call_muted_g2

0x0001,

0xf606,	// (0x000b9493) call_muted_g

0x9f39,	// (0x000b3dc6) main_mup2_pane

0x4004,	// (0x000ade91) main_mup2_pane_g1_ParamLimits

0x4004,	// (0x000ade91) main_mup2_pane_g1

0x4010,	// (0x000ade9d) main_mup2_pane_g2_ParamLimits

0x4010,	// (0x000ade9d) main_mup2_pane_g2

0x99c4,	// (0x000b3851) main_mup_pane_g13_cp1

0x99cc,	// (0x000b3859) mup_volume_pane_cp1

0x402c,	// (0x000adeb9) main_mup2_pane_g4_ParamLimits

0x402c,	// (0x000adeb9) main_mup2_pane_g4

0x403e,	// (0x000adecb) main_mup2_pane_g5_ParamLimits

0x403e,	// (0x000adecb) main_mup2_pane_g5

0x4050,	// (0x000adedd) main_mup2_pane_g6_ParamLimits

0x4050,	// (0x000adedd) main_mup2_pane_g6

0x4062,	// (0x000adeef) main_mup2_pane_g7_ParamLimits

0x4062,	// (0x000adeef) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x000b94f8) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x000b94f8) main_mup2_pane_g

0x407a,	// (0x000adf07) main_mup2_pane_t1_ParamLimits

0x407a,	// (0x000adf07) main_mup2_pane_t1

0x4090,	// (0x000adf1d) main_mup2_pane_t2_ParamLimits

0x4090,	// (0x000adf1d) main_mup2_pane_t2

0x40a6,	// (0x000adf33) main_mup2_pane_t3_ParamLimits

0x40a6,	// (0x000adf33) main_mup2_pane_t3

0x40bc,	// (0x000adf49) main_mup2_pane_t4_ParamLimits

0x40bc,	// (0x000adf49) main_mup2_pane_t4

0x40d4,	// (0x000adf61) main_mup2_pane_t5_ParamLimits

0x40d4,	// (0x000adf61) main_mup2_pane_t5

0x40ec,	// (0x000adf79) main_mup2_pane_t6_ParamLimits

0x40ec,	// (0x000adf79) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x000b9507) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x000b9507) main_mup2_pane_t

0x411c,	// (0x000adfa9) mup2_visualizer_pane_ParamLimits

0x411c,	// (0x000adfa9) mup2_visualizer_pane

0x414a,	// (0x000adfd7) mup_progress_pane_cp_ParamLimits

0x414a,	// (0x000adfd7) mup_progress_pane_cp

0x99af,	// (0x000b383c) mup_volume_pane_cp_ParamLimits

0x99af,	// (0x000b383c) mup_volume_pane_cp

0x415e,	// (0x000adfeb) mup2_visualizer_pane_g1_ParamLimits

0x415e,	// (0x000adfeb) mup2_visualizer_pane_g1

0xc907,	// (0x000b6794) mup2_visualizer_pane_g2_ParamLimits

0xc907,	// (0x000b6794) mup2_visualizer_pane_g2

0x4175,	// (0x000ae002) mup2_visualizer_pane_g3_ParamLimits

0x4175,	// (0x000ae002) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x000b9514) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x000b9514) mup2_visualizer_pane_g

0xb6f4,	// (0x000b5581) aid_size_cell_fmradio

0x35e1,	// (0x000ad46e) aid_height_parent_landcape

0xab4b,	// (0x000b49d8) wml_content_pane_cp

0xab53,	// (0x000b49e0) wml_tabs_pane

0xab5c,	// (0x000b49e9) popup_wml_miniature_window

0xab64,	// (0x000b49f1) scroll_pane_cp021

0xab78,	// (0x000b4a05) wml_content_pane_comp8

0x9f39,	// (0x000b3dc6) bg_popup_sub_pane_cp05

0xc925,	// (0x000b67b2) popup_wml_miniature_window_g1

0xc92d,	// (0x000b67ba) wml_miniature_view_pane

0x4181,	// (0x000ae00e) aid_size_wml_view

0x4189,	// (0x000ae016) wml_miniature_view_pane_g1

0x4192,	// (0x000ae01f) wml_miniature_view_pane_g2

0x419b,	// (0x000ae028) wml_miniature_view_pane_g3

0x41a3,	// (0x000ae030) wml_miniature_view_pane_g4

0x41ab,	// (0x000ae038) wml_miniature_view_pane_g5

0x41b3,	// (0x000ae040) wml_miniature_view_pane_g6

0x41bb,	// (0x000ae048) wml_miniature_view_pane_g7

0x41c3,	// (0x000ae050) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x000b951b) wml_miniature_view_pane_g

0xc935,	// (0x000b67c2) background_graphic_ParamLimits

0xc935,	// (0x000b67c2) background_graphic

0xc941,	// (0x000b67ce) wml_tabs_2_pane

0xc94a,	// (0x000b67d7) wml_tabs_3_pane_ParamLimits

0xc94a,	// (0x000b67d7) wml_tabs_3_pane

0xc95c,	// (0x000b67e9) wml_tabs_4_pane_ParamLimits

0xc95c,	// (0x000b67e9) wml_tabs_4_pane

0xc972,	// (0x000b67ff) wml_tabs_5_pane_ParamLimits

0xc972,	// (0x000b67ff) wml_tabs_5_pane

0xc98c,	// (0x000b6819) wml_tabs_pane_g2_ParamLimits

0xc98c,	// (0x000b6819) wml_tabs_pane_g2

0xc9a0,	// (0x000b682d) wml_tabs_pane_g3_ParamLimits

0xc9a0,	// (0x000b682d) wml_tabs_pane_g3

0x41cb,	// (0x000ae058) wml_tabs_2_active_pane_ParamLimits

0x41cb,	// (0x000ae058) wml_tabs_2_active_pane

0x41df,	// (0x000ae06c) wml_tabs_2_passive_pane_ParamLimits

0x41df,	// (0x000ae06c) wml_tabs_2_passive_pane

0x41f3,	// (0x000ae080) wml_tabs_3_active_pane_cp_ParamLimits

0x41f3,	// (0x000ae080) wml_tabs_3_active_pane_cp

0x4208,	// (0x000ae095) wml_tabs_3_passive_pane_ParamLimits

0x4208,	// (0x000ae095) wml_tabs_3_passive_pane

0x421b,	// (0x000ae0a8) wml_tabs_3_passive_pane_cp_ParamLimits

0x421b,	// (0x000ae0a8) wml_tabs_3_passive_pane_cp

0x4232,	// (0x000ae0bf) tabs_4_active_pane

0x423a,	// (0x000ae0c7) tabs_4_passive_pane

0x4244,	// (0x000ae0d1) tabs_4_passive_pane_cp

0x424c,	// (0x000ae0d9) tabs_4_passive_pane_cp2

0x32fc,	// (0x000ad189) aid_height_text

0x2a17,	// (0x000ac8a4) mup_volume_cont_pane_ParamLimits

0x2a17,	// (0x000ac8a4) mup_volume_cont_pane

0x04f2,	// (0x000aa37f) aid_size_cell_pinb

0x04fc,	// (0x000aa389) aid_size_list_pinb

0x4136,	// (0x000adfc3) mup2_volume_cont_pane_ParamLimits

0x4136,	// (0x000adfc3) mup2_volume_cont_pane

0x999b,	// (0x000b3828) mup2_volume_cont_pane_g1_ParamLimits

0x999b,	// (0x000b3828) mup2_volume_cont_pane_g1

0x01b4,	// (0x000aa041) aid_size_cell_touch_ParamLimits

0x01b4,	// (0x000aa041) aid_size_cell_touch

0x03e1,	// (0x000aa26e) touch_pane_ParamLimits

0x03e1,	// (0x000aa26e) touch_pane

0x93f2,	// (0x000b327f) main_rss2_pane

0xc9bd,	// (0x000b684a) listscroll_rss2_pane

0xc9c6,	// (0x000b6853) rss2_navigation_pane

0xc9ce,	// (0x000b685b) list_rss2_pane

0xb1c2,	// (0x000b504f) scroll_pane_cp22

0xc9d6,	// (0x000b6863) rss2_navigation_pane_g1

0xc9df,	// (0x000b686c) rss2_navigation_pane_g2

0xc9e7,	// (0x000b6874) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x000b952c) rss2_navigation_pane_g

0xc9ef,	// (0x000b687c) rss2_navigation_pane_t1

0x4256,	// (0x000ae0e3) rss2_list_single_pane_ParamLimits

0x4256,	// (0x000ae0e3) rss2_list_single_pane

0xc9fd,	// (0x000b688a) rss2_list_single_pane_t2

0xca0b,	// (0x000b6898) rss2_list_single_pane_t3_ParamLimits

0xca0b,	// (0x000b6898) rss2_list_single_pane_t3

0xca28,	// (0x000b68b5) rss2_list_single_pane_t4

0x234c,	// (0x000ac1d9) smil_status_pane_g1

0x93e4,	// (0x000b3271) main_image2_pane_ParamLimits

0x93e4,	// (0x000b3271) main_image2_pane

0x3cf8,	// (0x000adb85) main_camera2_pane_g9_ParamLimits

0x3cf8,	// (0x000adb85) main_camera2_pane_g9

0x3e26,	// (0x000adcb3) main_camera2_pane_t5_ParamLimits

0x3e26,	// (0x000adcb3) main_camera2_pane_t5

0x996b,	// (0x000b37f8) main_camera2_pane_t6_ParamLimits

0x996b,	// (0x000b37f8) main_camera2_pane_t6

0x426c,	// (0x000ae0f9) main_image2_pane_g1_ParamLimits

0x426c,	// (0x000ae0f9) main_image2_pane_g1

0x3037,	// (0x000acec4) smil2_video_pane_ParamLimits

0x3037,	// (0x000acec4) smil2_video_pane

0x939a,	// (0x000b3227) aid_zoom_text_primary_cp

0x93da,	// (0x000b3267) popup_preview_fixed_window

0xaab4,	// (0x000b4941) im_reading_pane_g1

0x3b6f,	// (0x000ad9fc) cams2_bc_adjust_pane_cp_ParamLimits

0x3b6f,	// (0x000ad9fc) cams2_bc_adjust_pane_cp

0x3e55,	// (0x000adce2) cams2_bc_adjust_pane_ParamLimits

0x3e55,	// (0x000adce2) cams2_bc_adjust_pane

0xd5c5,	// (0x000b7452) cams2_bc_adjust_pane_g1

0x99d4,	// (0x000b3861) cams2_slider_pane

0x99dd,	// (0x000b386a) cams2_slider_pane_g1

0x99e6,	// (0x000b3873) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x000b9533) cams2_slider_pane_g

0x05e4,	// (0x000aa471) calc_display_pane_ParamLimits

0x060c,	// (0x000aa499) calc_paper_pane_ParamLimits

0x062f,	// (0x000aa4bc) grid_calc_pane_ParamLimits

0x9890,	// (0x000b371d) popup_clock_digital_window_t1_ParamLimits

0xb691,	// (0x000b551e) main_image_pane_t1

0x05c6,	// (0x000aa453) aid_size_cell_calc_ParamLimits

0x05c6,	// (0x000aa453) aid_size_cell_calc

0x3639,	// (0x000ad4c6) popup_blid_sat_info2_window_ParamLimits

0x3639,	// (0x000ad4c6) popup_blid_sat_info2_window

0xca3e,	// (0x000b68cb) aid_size_cell_blid

0xca46,	// (0x000b68d3) bg_popup_window_pane_cp07

0xca69,	// (0x000b68f6) grid_popup_blid_pane

0xca73,	// (0x000b6900) heading_pane_cp05_ParamLimits

0xca73,	// (0x000b6900) heading_pane_cp05

0xcb49,	// (0x000b69d6) cell_popup_blid_pane_ParamLimits

0xcb49,	// (0x000b69d6) cell_popup_blid_pane

0xcb6d,	// (0x000b69fa) cell_popup_blid_pane_g1

0xcb75,	// (0x000b6a02) cell_popup_blid_pane_t1

0x4106,	// (0x000adf93) mup2_indicator_pane_ParamLimits

0x4106,	// (0x000adf93) mup2_indicator_pane

0xa9bb,	// (0x000b4848) mup2_visualizer_osc_pane

0xc913,	// (0x000b67a0) mup2_visualizer_spec_pane_ParamLimits

0xc913,	// (0x000b67a0) mup2_visualizer_spec_pane

0x4282,	// (0x000ae10f) mup2_spec_half_pane

0x428b,	// (0x000ae118) mup2_spec_half_pane_cp

0x4293,	// (0x000ae120) mup2_spec_bar_pane_ParamLimits

0x4293,	// (0x000ae120) mup2_spec_bar_pane

0xc8b4,	// (0x000b6741) mup2_spec_bar_pane_g1

0xc8be,	// (0x000b674b) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x000b94a6) mup2_spec_bar_pane_g

0x42b3,	// (0x000ae140) mup2_osc_middle_pane

0xc8d0,	// (0x000b675d) mup2_visualizer_osc_pane_g1

0x941c,	// (0x000b32a9) popup_number_entry_window_t1_ParamLimits

0x942f,	// (0x000b32bc) popup_number_entry_window_t2_ParamLimits

0x9441,	// (0x000b32ce) popup_number_entry_window_t3_ParamLimits

0x0433,	// (0x000aa2c0) popup_number_entry_window_t5_ParamLimits

0x0433,	// (0x000aa2c0) popup_number_entry_window_t5

0xf0ca,	// (0x000b8f57) popup_number_entry_window_t_ParamLimits

0x9453,	// (0x000b32e0) text_title_cp2_ParamLimits

0x98cf,	// (0x000b375c) aid_hotspot_pointer_text2_pane

0x98e9,	// (0x000b3776) main_viewer_pane_g9_ParamLimits

0x98e9,	// (0x000b3776) main_viewer_pane_g9

0xaced,	// (0x000b4b7a) cale_month_pane_t1_ParamLimits

0xad2a,	// (0x000b4bb7) bg_cale_pane_ParamLimits

0xad42,	// (0x000b4bcf) list_cale_pane_ParamLimits

0xad53,	// (0x000b4be0) listscroll_cale_day_pane_t1

0xad65,	// (0x000b4bf2) scroll_pane_cp09_ParamLimits

0x2a4d,	// (0x000ac8da) main_mup_eq_pane_t1_ParamLimits

0x2a4d,	// (0x000ac8da) main_mup_eq_pane_t1

0x2a67,	// (0x000ac8f4) main_mup_eq_pane_t2_ParamLimits

0x2a67,	// (0x000ac8f4) main_mup_eq_pane_t2

0x2a81,	// (0x000ac90e) main_mup_eq_pane_t3_ParamLimits

0x2a81,	// (0x000ac90e) main_mup_eq_pane_t3

0x2a9d,	// (0x000ac92a) main_mup_eq_pane_t4_ParamLimits

0x2a9d,	// (0x000ac92a) main_mup_eq_pane_t4

0x2ab9,	// (0x000ac946) main_mup_eq_pane_t5_ParamLimits

0x2ab9,	// (0x000ac946) main_mup_eq_pane_t5

0x2ad5,	// (0x000ac962) main_mup_eq_pane_t6_ParamLimits

0x2ad5,	// (0x000ac962) main_mup_eq_pane_t6

0x2ae9,	// (0x000ac976) main_mup_eq_pane_t7_ParamLimits

0x2ae9,	// (0x000ac976) main_mup_eq_pane_t7

0x2afd,	// (0x000ac98a) main_mup_eq_pane_t8_ParamLimits

0x2afd,	// (0x000ac98a) main_mup_eq_pane_t8

0x2b11,	// (0x000ac99e) main_mup_eq_pane_t9_ParamLimits

0x2b11,	// (0x000ac99e) main_mup_eq_pane_t9

0x2b2b,	// (0x000ac9b8) main_mup_eq_pane_t10_ParamLimits

0x2b2b,	// (0x000ac9b8) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000b92e2) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000b92e2) main_mup_eq_pane_t

0x2bda,	// (0x000aca67) mup_equalizer_pane_cp5_ParamLimits

0x2bee,	// (0x000aca7b) mup_equalizer_pane_cp6_ParamLimits

0x2c02,	// (0x000aca8f) mup_equalizer_pane_cp7_ParamLimits

0x93f2,	// (0x000b327f) main_gallery_pane

0xc8d9,	// (0x000b6766) smil2_volume_pane

0xc8e1,	// (0x000b676e) smil_status_volume_pane_g1_ParamLimits

0xc8f4,	// (0x000b6781) smil_status_volume_pane_g2_ParamLimits

0x9949,	// (0x000b37d6) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x000b94ab) smil_status_volume_pane_g_ParamLimits

0xca46,	// (0x000b68d3) bg_popup_window_pane_cp07_ParamLimits

0xca54,	// (0x000b68e1) blid_firmament_pane

0x42bc,	// (0x000ae149) aid_size_cell_gallery_ParamLimits

0x42bc,	// (0x000ae149) aid_size_cell_gallery

0x42d2,	// (0x000ae15f) grid_gallery_pane_ParamLimits

0x42d2,	// (0x000ae15f) grid_gallery_pane

0x42eb,	// (0x000ae178) cell_gallery_pane_ParamLimits

0x42eb,	// (0x000ae178) cell_gallery_pane

0xcb83,	// (0x000b6a10) bg_cell_gallery_focus_pane_ParamLimits

0xcb83,	// (0x000b6a10) bg_cell_gallery_focus_pane

0xcb95,	// (0x000b6a22) cell_gallery_pane_g1_ParamLimits

0xcb95,	// (0x000b6a22) cell_gallery_pane_g1

0x4334,	// (0x000ae1c1) cell_gallery_pane_g2_ParamLimits

0x4334,	// (0x000ae1c1) cell_gallery_pane_g2

0x4341,	// (0x000ae1ce) cell_gallery_pane_g3_ParamLimits

0x4341,	// (0x000ae1ce) cell_gallery_pane_g3

0xcba1,	// (0x000b6a2e) cell_gallery_pane_g4_ParamLimits

0xcba1,	// (0x000b6a2e) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x000b9559) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x000b9559) cell_gallery_pane_g

0xcbad,	// (0x000b6a3a) bg_cell_gallery_focus_pane_g1

0xcbb5,	// (0x000b6a42) bg_cell_gallery_focus_pane_g2

0xcbbd,	// (0x000b6a4a) bg_cell_gallery_focus_pane_g3

0xcbc5,	// (0x000b6a52) bg_cell_gallery_focus_pane_g4

0xcbcd,	// (0x000b6a5a) bg_cell_gallery_focus_pane_g5

0xcbd5,	// (0x000b6a62) bg_cell_gallery_focus_pane_g6

0xcbdd,	// (0x000b6a6a) bg_cell_gallery_focus_pane_g7

0xcbe5,	// (0x000b6a72) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x000b9562) bg_cell_gallery_focus_pane_g

0xcbed,	// (0x000b6a7a) aid_firma_cardinal

0xcc01,	// (0x000b6a8e) blid_firmament_pane_t1

0xcc18,	// (0x000b6aa5) blid_firmament_pane_t2

0xcc2f,	// (0x000b6abc) blid_firmament_pane_t3

0xcc46,	// (0x000b6ad3) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x000b9573) blid_firmament_pane_t

0xcc5d,	// (0x000b6aea) blid_sat_info_pane

0xcc6d,	// (0x000b6afa) blid_sat_info_pane_g1

0xcc6d,	// (0x000b6afa) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x000b957c) blid_sat_info_pane_g

0xcc77,	// (0x000b6b04) blid_sat_info_pane_t1

0xcc85,	// (0x000b6b12) smil2_volume_content_pane

0xcc8e,	// (0x000b6b1b) smil2_volume_pane_g1

0xcc96,	// (0x000b6b23) smil2_volume_content_pane_g1

0xcc9f,	// (0x000b6b2c) smil2_volume_content_pane_g2

0xcca8,	// (0x000b6b35) smil2_volume_content_pane_g3

0xccb1,	// (0x000b6b3e) smil2_volume_content_pane_g4

0xccba,	// (0x000b6b47) smil2_volume_content_pane_g5

0xccc3,	// (0x000b6b50) smil2_volume_content_pane_g6

0xcccc,	// (0x000b6b59) smil2_volume_content_pane_g7

0xccd5,	// (0x000b6b62) smil2_volume_content_pane_g8

0xccde,	// (0x000b6b6b) smil2_volume_content_pane_g9

0xcce7,	// (0x000b6b74) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x000b9581) smil2_volume_content_pane_g

0x0b8e,	// (0x000aaa1b) cale_week_day_heading_pane_t1_ParamLimits

0x0bd8,	// (0x000aaa65) cale_week_day_heading_pane_t2_ParamLimits

0x0c27,	// (0x000aaab4) cale_week_day_heading_pane_t3_ParamLimits

0x0c76,	// (0x000aab03) cale_week_day_heading_pane_t4_ParamLimits

0x0cc5,	// (0x000aab52) cale_week_day_heading_pane_t5_ParamLimits

0x0d1c,	// (0x000aaba9) cale_week_day_heading_pane_t6_ParamLimits

0x0d73,	// (0x000aac00) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000b905e) cale_week_day_heading_pane_t_ParamLimits

0xa40d,	// (0x000b429a) bg_cale_side_pane_ParamLimits

0x0dbd,	// (0x000aac4a) cale_week_time_pane_t1_ParamLimits

0x0dd7,	// (0x000aac64) cale_week_time_pane_t2_ParamLimits

0x0df1,	// (0x000aac7e) cale_week_time_pane_t3_ParamLimits

0x0e0b,	// (0x000aac98) cale_week_time_pane_t4_ParamLimits

0x0e25,	// (0x000aacb2) cale_week_time_pane_t5_ParamLimits

0x0e3f,	// (0x000aaccc) cale_week_time_pane_t6_ParamLimits

0x0e59,	// (0x000aace6) cale_week_time_pane_t7_ParamLimits

0x0e73,	// (0x000aad00) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x000b906d) cale_week_time_pane_t_ParamLimits

0x0e93,	// (0x000aad20) cell_cale_week_pane_g2_ParamLimits

0xa40d,	// (0x000b429a) bg_cale_side_pane_cp01_ParamLimits

0x2127,	// (0x000abfb4) cale_month_week_pane_t1_ParamLimits

0x2140,	// (0x000abfcd) cale_month_week_pane_t2_ParamLimits

0x2159,	// (0x000abfe6) cale_month_week_pane_t3_ParamLimits

0x2172,	// (0x000abfff) cale_month_week_pane_t4_ParamLimits

0x218b,	// (0x000ac018) cale_month_week_pane_t5_ParamLimits

0x21a4,	// (0x000ac031) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000b9142) cale_month_week_pane_t_ParamLimits

0x97f6,	// (0x000b3683) cell_cale_month_pane_g1_ParamLimits

0x93f2,	// (0x000b327f) main_cale_event_viewer_pane

0x936c,	// (0x000b31f9) listscroll_cale_event_viewer_pane

0xccf0,	// (0x000b6b7d) list_cale_ev_pane

0xccf8,	// (0x000b6b85) scroll_pane_cp023

0xcd04,	// (0x000b6b91) field_cale_ev_pane_ParamLimits

0xcd04,	// (0x000b6b91) field_cale_ev_pane

0xcd22,	// (0x000b6baf) field_cale_ev_content_pane_ParamLimits

0xcd22,	// (0x000b6baf) field_cale_ev_content_pane

0xcd2e,	// (0x000b6bbb) field_cale_ev_pane_g1_ParamLimits

0xcd2e,	// (0x000b6bbb) field_cale_ev_pane_g1

0xcd3a,	// (0x000b6bc7) field_cale_ev_pane_g2_ParamLimits

0xcd3a,	// (0x000b6bc7) field_cale_ev_pane_g2

0xcd52,	// (0x000b6bdf) field_cale_ev_pane_g3_ParamLimits

0xcd52,	// (0x000b6bdf) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x000b9596) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x000b9596) field_cale_ev_pane_g

0xcd6a,	// (0x000b6bf7) field_cale_ev_pane_t1_ParamLimits

0xcd6a,	// (0x000b6bf7) field_cale_ev_pane_t1

0xa372,	// (0x000b41ff) field_cale_ev_content_pane_t1_ParamLimits

0xa372,	// (0x000b41ff) field_cale_ev_content_pane_t1

0xb577,	// (0x000b5404) bg_button_pane_cp01

0x08bb,	// (0x000aa748) listscroll_cale_week_pane_ParamLimits

0xa3b8,	// (0x000b4245) popup_toolbar_window_cp01

0xa3de,	// (0x000b426b) listscroll_cale_week_pane_t1_ParamLimits

0x08bb,	// (0x000aa748) listscroll_cale_day_pane_ParamLimits

0xa3b8,	// (0x000b4245) popup_toolbar_window_cp02

0xad53,	// (0x000b4be0) listscroll_cale_day_pane_t1_ParamLimits

0x35ff,	// (0x000ad48c) main_cale_month_pane_ParamLimits

0x9934,	// (0x000b37c1) popup_toolbar_window_cp03_ParamLimits

0x9934,	// (0x000b37c1) popup_toolbar_window_cp03

0x2eff,	// (0x000acd8c) main_image_pane_g2_ParamLimits

0x2eff,	// (0x000acd8c) main_image_pane_g2

0x2f10,	// (0x000acd9d) main_image_pane_g3_ParamLimits

0x2f10,	// (0x000acd9d) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000b9374) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000b9374) main_image_pane_g

0xb691,	// (0x000b551e) main_image_pane_t1_ParamLimits

0x2f21,	// (0x000acdae) main_image_pane_t2_ParamLimits

0x2f21,	// (0x000acdae) main_image_pane_t2

0x2f33,	// (0x000acdc0) main_image_pane_t3_ParamLimits

0x2f33,	// (0x000acdc0) main_image_pane_t3

0x2f5b,	// (0x000acde8) main_image_pane_t4_ParamLimits

0x2f5b,	// (0x000acde8) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000b937b) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000b937b) main_image_pane_t

0x2f7b,	// (0x000ace08) popup_image_details_window_cp01

0x2f85,	// (0x000ace12) popup_toobar_trans_pane_cp01_ParamLimits

0x2f85,	// (0x000ace12) popup_toobar_trans_pane_cp01

0x370a,	// (0x000ad597) popup_image_details_window_ParamLimits

0x370a,	// (0x000ad597) popup_image_details_window

0x9907,	// (0x000b3794) popup_image_focus_window

0x3b29,	// (0x000ad9b6) camera2_autofocus_pane_ParamLimits

0x3b29,	// (0x000ad9b6) camera2_autofocus_pane

0x936c,	// (0x000b31f9) bg_popup_sub_pane_cp06

0xcd81,	// (0x000b6c0e) popup_image_focus_window_g1

0xcd89,	// (0x000b6c16) popup_image_focus_window_g2

0xcd91,	// (0x000b6c1e) popup_image_focus_window_g3

0xcd99,	// (0x000b6c26) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x000b959d) popup_image_focus_window_g

0xcda1,	// (0x000b6c2e) popup_image_focus_window_t1

0xcdaf,	// (0x000b6c3c) popup_image_focus_window_t2

0xcdbf,	// (0x000b6c4c) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x000b95a6) popup_image_focus_window_t

0xcdcd,	// (0x000b6c5a) camera2_autofocus_pane_g1

0xa4ae,	// (0x000b433b) bg_tb_trans_pane_cp01

0xcddb,	// (0x000b6c68) popup_image_details_window_g1

0xcdee,	// (0x000b6c7b) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x000b95b8) popup_image_details_window_g

0xce17,	// (0x000b6ca4) popup_image_details_window_t1

0xce29,	// (0x000b6cb6) popup_image_details_window_t2

0xce42,	// (0x000b6ccf) popup_image_details_window_t3

0xce56,	// (0x000b6ce3) popup_image_details_window_t4

0xce71,	// (0x000b6cfe) popup_image_details_window_t5

0x0004,

0xf732,	// (0x000b95bf) popup_image_details_window_t

0xa251,	// (0x000b40de) bg_calc_paper_pane_ParamLimits

0x93f2,	// (0x000b327f) grid_highlight_pane_cp013

0x975c,	// (0x000b35e9) list_calc_pane_ParamLimits

0x976e,	// (0x000b35fb) scroll_pane_cp024

0xa265,	// (0x000b40f2) bg_calc_display_pane_ParamLimits

0x072d,	// (0x000aa5ba) calc_display_pane_t1_ParamLimits

0x073f,	// (0x000aa5cc) calc_display_pane_t2_ParamLimits

0x9776,	// (0x000b3603) calc_display_pane_t3_ParamLimits

0xf151,	// (0x000b8fde) calc_display_pane_t_ParamLimits

0x07ff,	// (0x000aa68c) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x000b8ffb) cell_calc_pane_g

0x0808,	// (0x000aa695) cell_calc_pane_t1

0xa2c4,	// (0x000b4151) grid_highlight_pane_cp02_ParamLimits

0xa2da,	// (0x000b4167) toolbar_button_pane_cp01_ParamLimits

0xa2da,	// (0x000b4167) toolbar_button_pane_cp01

0xb6d6,	// (0x000b5563) temp_image_control_pane_ParamLimits

0xb6d6,	// (0x000b5563) temp_image_control_pane

0x93e4,	// (0x000b3271) main_mp3_pane

0xce8b,	// (0x000b6d18) temp_image_control_pane_g1_ParamLimits

0xce8b,	// (0x000b6d18) temp_image_control_pane_g1

0xce99,	// (0x000b6d26) temp_image_control_pane_g2_ParamLimits

0xce99,	// (0x000b6d26) temp_image_control_pane_g2

0xceab,	// (0x000b6d38) temp_image_control_pane_g3_ParamLimits

0xceab,	// (0x000b6d38) temp_image_control_pane_g3

0x437e,	// (0x000ae20b) temp_image_control_pane_g4_ParamLimits

0x437e,	// (0x000ae20b) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x000b95ca) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x000b95ca) temp_image_control_pane_g

0xce8b,	// (0x000b6d18) main_mp3_pane_g1

0x4391,	// (0x000ae21e) main_mp3_pane_g2

0x0007,

0xf746,	// (0x000b95d3) main_mp3_pane_g

0xceee,	// (0x000b6d7b) main_mp3_pane_t1

0xa9c3,	// (0x000b4850) main_camera_pane_g8_ParamLimits

0xa9c3,	// (0x000b4850) main_camera_pane_g8

0x1197,	// (0x000ab024) main_video_pane_g7_ParamLimits

0x1197,	// (0x000ab024) main_video_pane_g7

0x9989,	// (0x000b3816) main_camera2_pane_t7_ParamLimits

0x9989,	// (0x000b3816) main_camera2_pane_t7

0xab0b,	// (0x000b4998) scroll_pane_cp025_ParamLimits

0xab0b,	// (0x000b4998) scroll_pane_cp025

0xab1f,	// (0x000b49ac) scroll_pane_cp026_ParamLimits

0xab1f,	// (0x000b49ac) scroll_pane_cp026

0xab2e,	// (0x000b49bb) wml_content_pane_ParamLimits

0x93f2,	// (0x000b327f) main_touch_calib_pane

0x4465,	// (0x000ae2f2) main_touch_calib_pane_g1

0x4477,	// (0x000ae304) main_touch_calib_pane_g2

0x4489,	// (0x000ae316) main_touch_calib_pane_g3

0x449b,	// (0x000ae328) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x000b95f1) main_touch_calib_pane_g

0x44ad,	// (0x000ae33a) main_touch_calib_pane_t1

0x44c7,	// (0x000ae354) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x000b95fa) main_touch_calib_pane_t

0xb291,	// (0x000b511e) mup_progress_pane_cp02

0xb2c6,	// (0x000b5153) navi_pane_g1

0xb381,	// (0x000b520e) navi_pane_mp_t3

0x93e4,	// (0x000b3271) main_mp3_pane_ParamLimits

0x3895,	// (0x000ad722) navi_pane_ParamLimits

0xce8b,	// (0x000b6d18) main_mp3_pane_g1_ParamLimits

0x4391,	// (0x000ae21e) main_mp3_pane_g2_ParamLimits

0x439f,	// (0x000ae22c) main_mp3_pane_g3_ParamLimits

0x439f,	// (0x000ae22c) main_mp3_pane_g3

0x43ad,	// (0x000ae23a) main_mp3_pane_g4_ParamLimits

0x43ad,	// (0x000ae23a) main_mp3_pane_g4

0xcebb,	// (0x000b6d48) main_mp3_pane_g5_ParamLimits

0xcebb,	// (0x000b6d48) main_mp3_pane_g5

0xcec9,	// (0x000b6d56) main_mp3_pane_g6_ParamLimits

0xcec9,	// (0x000b6d56) main_mp3_pane_g6

0xced6,	// (0x000b6d63) main_mp3_pane_g7_ParamLimits

0xced6,	// (0x000b6d63) main_mp3_pane_g7

0xcee2,	// (0x000b6d6f) main_mp3_pane_g8_ParamLimits

0xcee2,	// (0x000b6d6f) main_mp3_pane_g8

0xf746,	// (0x000b95d3) main_mp3_pane_g_ParamLimits

0x43b9,	// (0x000ae246) main_mp3_pane_t2

0x43c7,	// (0x000ae254) main_mp3_pane_t3

0xcefc,	// (0x000b6d89) main_mp3_pane_t4

0xcf0a,	// (0x000b6d97) main_mp3_pane_t5

0x0005,

0xf757,	// (0x000b95e4) main_mp3_pane_t

0xcf18,	// (0x000b6da5) mup_progress_pane_cp01

0x939a,	// (0x000b3227) aid_zoom_text_secondary2

0xccf0,	// (0x000b6b7d) list_cale_ev2_pane

0xccf8,	// (0x000b6b85) scroll_pane_cp023_ParamLimits

0x451d,	// (0x000ae3aa) field_cale_ev2_pane_ParamLimits

0x451d,	// (0x000ae3aa) field_cale_ev2_pane

0xa4bc,	// (0x000b4349) field_cale_ev2_pane_g1_ParamLimits

0xa4bc,	// (0x000b4349) field_cale_ev2_pane_g1

0xa4c8,	// (0x000b4355) field_cale_ev2_pane_g2_ParamLimits

0xa4c8,	// (0x000b4355) field_cale_ev2_pane_g2

0xa4e0,	// (0x000b436d) field_cale_ev2_pane_g3_ParamLimits

0xa4e0,	// (0x000b436d) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x000b9605) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x000b9605) field_cale_ev2_pane_g

0xa504,	// (0x000b4391) field_cale_ev2_pane_t1_ParamLimits

0xa504,	// (0x000b4391) field_cale_ev2_pane_t1

0xa51b,	// (0x000b43a8) field_cale_ev2_pane_t2_ParamLimits

0xa51b,	// (0x000b43a8) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x000b960e) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x000b960e) field_cale_ev2_pane_t

0x2db3,	// (0x000acc40) main_postcard_pane_g5_ParamLimits

0x2db3,	// (0x000acc40) main_postcard_pane_g5

0x2dc9,	// (0x000acc56) main_postcard_pane_g6_ParamLimits

0x2dc9,	// (0x000acc56) main_postcard_pane_g6

0x0f5d,	// (0x000aadea) camera2_autofocus_pane_cp_ParamLimits

0x0f5d,	// (0x000aadea) camera2_autofocus_pane_cp

0x93e4,	// (0x000b3271) main_mup3_pane

0x455e,	// (0x000ae3eb) main_mup3_pane_g1_ParamLimits

0x455e,	// (0x000ae3eb) main_mup3_pane_g1

0x4580,	// (0x000ae40d) main_mup3_pane_g2_ParamLimits

0x4580,	// (0x000ae40d) main_mup3_pane_g2

0x4600,	// (0x000ae48d) main_mup3_pane_g3_ParamLimits

0x4600,	// (0x000ae48d) main_mup3_pane_g3

0x4646,	// (0x000ae4d3) main_mup3_pane_g4_ParamLimits

0x4646,	// (0x000ae4d3) main_mup3_pane_g4

0x468c,	// (0x000ae519) main_mup3_pane_g5_ParamLimits

0x468c,	// (0x000ae519) main_mup3_pane_g5

0x46d2,	// (0x000ae55f) main_mup3_pane_g6_ParamLimits

0x46d2,	// (0x000ae55f) main_mup3_pane_g6

0xcf20,	// (0x000b6dad) main_mup3_pane_g7_ParamLimits

0xcf20,	// (0x000b6dad) main_mup3_pane_g7

0x0007,

0xf791,	// (0x000b961e) main_mup3_pane_g_ParamLimits

0xf791,	// (0x000b961e) main_mup3_pane_g

0x4750,	// (0x000ae5dd) main_mup3_pane_t1_ParamLimits

0x4750,	// (0x000ae5dd) main_mup3_pane_t1

0x47c4,	// (0x000ae651) main_mup3_pane_t2_ParamLimits

0x47c4,	// (0x000ae651) main_mup3_pane_t2

0x4898,	// (0x000ae725) main_mup3_pane_t4_ParamLimits

0x4898,	// (0x000ae725) main_mup3_pane_t4

0x48ee,	// (0x000ae77b) main_mup3_pane_t5_ParamLimits

0x48ee,	// (0x000ae77b) main_mup3_pane_t5

0x49aa,	// (0x000ae837) main_mup3_pane_t6_ParamLimits

0x49aa,	// (0x000ae837) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x000b962f) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x000b962f) main_mup3_pane_t

0x4a62,	// (0x000ae8ef) mup3_progress_pane_ParamLimits

0x4a62,	// (0x000ae8ef) mup3_progress_pane

0x4aee,	// (0x000ae97b) popup_mup3_control_window_ParamLimits

0x4aee,	// (0x000ae97b) popup_mup3_control_window

0xcf2e,	// (0x000b6dbb) popup_mup3_text_window

0x4b20,	// (0x000ae9ad) mup3_progress_pane_t1

0x4b3f,	// (0x000ae9cc) mup3_progress_pane_t2

0xcf36,	// (0x000b6dc3) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x000b963c) mup3_progress_pane_t

0xcf53,	// (0x000b6de0) mup_progress_pane_cp03

0x936c,	// (0x000b31f9) bg_tb_trans_pane_cp04

0x4b5e,	// (0x000ae9eb) mup3_volume_pane

0x4b66,	// (0x000ae9f3) popup_mup3_control_window_g1

0x4b6f,	// (0x000ae9fc) mup3_volume_pane_g1

0x4b78,	// (0x000aea05) mup3_volume_pane_g2

0x4b81,	// (0x000aea0e) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x000b9643) mup3_volume_pane_g

0x936c,	// (0x000b31f9) bg_tb_trans_pane_cp03

0xcf63,	// (0x000b6df0) popup_mup3_text_window_g1

0xcf6b,	// (0x000b6df8) popup_mup3_text_window_t1

0xa2ad,	// (0x000b413a) list_calc_item_pane_g1_ParamLimits

0xc9b4,	// (0x000b6841) mup_volume_pane_cp_g1

0x44e1,	// (0x000ae36e) main_touch_calib_pane_t3

0x44f5,	// (0x000ae382) main_touch_calib_pane_t4

0x4509,	// (0x000ae396) main_touch_calib_pane_t5

0x9376,	// (0x000b3203) aid_cell_size_toolbar2

0x937e,	// (0x000b320b) aid_popup3_width_pane

0x938a,	// (0x000b3217) aid_zoom_text_msg_primary

0x0f3c,	// (0x000aadc9) vorec_t7

0xa271,	// (0x000b40fe) bg_calc_paper_pane_g1_ParamLimits

0xa27d,	// (0x000b410a) bg_calc_paper_pane_g2_ParamLimits

0xa289,	// (0x000b4116) bg_calc_paper_pane_g3_ParamLimits

0xa295,	// (0x000b4122) bg_calc_paper_pane_g4_ParamLimits

0xa2a1,	// (0x000b412e) bg_calc_paper_pane_g5_ParamLimits

0x0788,	// (0x000aa615) bg_calc_paper_pane_g6_ParamLimits

0x0797,	// (0x000aa624) bg_calc_paper_pane_g7_ParamLimits

0x07a6,	// (0x000aa633) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x000b8fe5) bg_calc_paper_pane_g_ParamLimits

0x07b9,	// (0x000aa646) calc_bg_paper_pane_g9_ParamLimits

0x10a9,	// (0x000aaf36) image_qvga_pane_ParamLimits

0x10a9,	// (0x000aaf36) image_qvga_pane

0xa194,	// (0x000b4021) bg_popup_sub_pane_cp04_ParamLimits

0xb60d,	// (0x000b549a) popup_mup_playback_window_g1_ParamLimits

0xb619,	// (0x000b54a6) popup_mup_playback_window_t1_ParamLimits

0xb62e,	// (0x000b54bb) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000b936f) popup_mup_playback_window_t_ParamLimits

0x4020,	// (0x000adead) main_mup2_pane_g3_ParamLimits

0x4020,	// (0x000adead) main_mup2_pane_g3

0x149f,	// (0x000ab32c) popup_toolbar_window_cp04

0xba23,	// (0x000b58b0) popup_call2_audio_second_window_g3_ParamLimits

0xba23,	// (0x000b58b0) popup_call2_audio_second_window_g3

0xbe2d,	// (0x000b5cba) popup_call2_audio_first_window_g4_ParamLimits

0xbe2d,	// (0x000b5cba) popup_call2_audio_first_window_g4

0xc4ac,	// (0x000b6339) popup_call2_audio_in_window_g4_ParamLimits

0xc4ac,	// (0x000b6339) popup_call2_audio_in_window_g4

0x2ee1,	// (0x000acd6e) aid_area_sk_bg_cut_ParamLimits

0x2ee1,	// (0x000acd6e) aid_area_sk_bg_cut

0xb643,	// (0x000b54d0) aid_area_sk_bg_cut_2_ParamLimits

0xb643,	// (0x000b54d0) aid_area_sk_bg_cut_2

0x4324,	// (0x000ae1b1) aid_placing_details_win

0x432c,	// (0x000ae1b9) aid_placing_details_win_2

0xcdcd,	// (0x000b6c5a) camera2_autofocus_pane_g1_ParamLimits

0x037a,	// (0x000aa207) popup_fixed_preview_cale_window_ParamLimits

0x037a,	// (0x000aa207) popup_fixed_preview_cale_window

0xb3ff,	// (0x000b528c) navi_slider_pane_g3

0xb408,	// (0x000b5295) navi_slider_pane_g4

0xb411,	// (0x000b529e) navi_slider_pane_g5

0xb3ff,	// (0x000b528c) navi_slider_pane_g6

0x98b6,	// (0x000b3743) navi_slider_pane_g7

0xb544,	// (0x000b53d1) mup_scale_pane_g3

0xb54d,	// (0x000b53da) mup_scale_pane_g4

0xb556,	// (0x000b53e3) mup_scale_pane_g5

0x2c16,	// (0x000acaa3) mup_scale_pane_g6

0x2c1f,	// (0x000acaac) mup_scale_pane_g7

0xb3ff,	// (0x000b528c) cams2_slider_pane_g3

0xca36,	// (0x000b68c3) cams2_slider_pane_g4

0x99ef,	// (0x000b387c) cams2_slider_pane_g5

0xb3ff,	// (0x000b528c) cams2_slider_pane_g6

0x99f7,	// (0x000b3884) cams2_slider_pane_g7

0xcc6d,	// (0x000b6afa) camera2_autofocus_pane_cp_g1

0xc84d,	// (0x000b66da) bg_popup_preview_window_pane_cp02_ParamLimits

0xc84d,	// (0x000b66da) bg_popup_preview_window_pane_cp02

0xcf79,	// (0x000b6e06) list_fp_cale_pane_ParamLimits

0xcf79,	// (0x000b6e06) list_fp_cale_pane

0xcf85,	// (0x000b6e12) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf85,	// (0x000b6e12) popup_fixed_preview_cale_window_t1

0x4b8a,	// (0x000aea17) popup_fixed_preview_cale_window_t2_ParamLimits

0x4b8a,	// (0x000aea17) popup_fixed_preview_cale_window_t2

0x4b9f,	// (0x000aea2c) popup_fixed_preview_cale_window_t3_ParamLimits

0x4b9f,	// (0x000aea2c) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x000b964a) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x000b964a) popup_fixed_preview_cale_window_t

0x4bb4,	// (0x000aea41) list_single_fp_cale_pane_ParamLimits

0x4bb4,	// (0x000aea41) list_single_fp_cale_pane

0xcfa3,	// (0x000b6e30) list_single_fp_cale_pane_g1_ParamLimits

0xcfa3,	// (0x000b6e30) list_single_fp_cale_pane_g1

0xcfaf,	// (0x000b6e3c) list_single_fp_cale_pane_g2_ParamLimits

0xcfaf,	// (0x000b6e3c) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x000b9651) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x000b9651) list_single_fp_cale_pane_g

0xcfc8,	// (0x000b6e55) list_single_fp_cale_pane_t1_ParamLimits

0xcfc8,	// (0x000b6e55) list_single_fp_cale_pane_t1

0xcfda,	// (0x000b6e67) list_single_fp_cale_pane_t2_ParamLimits

0xcfda,	// (0x000b6e67) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x000b9658) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x000b9658) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x93f2,	// (0x000b327f) main_dialer_pane

0x4bca,	// (0x000aea57) aid_cell_size_keypad

0x4bd4,	// (0x000aea61) dialer_ne_pane

0x4bdc,	// (0x000aea69) grid_dialer_command_1_pane

0x4be4,	// (0x000aea71) grid_dialer_command_2_pane

0x4bec,	// (0x000aea79) grid_dialer_keypad_pane

0x4bfe,	// (0x000aea8b) bg_popup_call_pane_cp06_ParamLimits

0x4bfe,	// (0x000aea8b) bg_popup_call_pane_cp06

0x4c0a,	// (0x000aea97) dialer_ne_clear_pane_ParamLimits

0x4c0a,	// (0x000aea97) dialer_ne_clear_pane

0xd00d,	// (0x000b6e9a) dialer_ne_pane_g1

0xd015,	// (0x000b6ea2) dialer_ne_pane_t1_ParamLimits

0xd015,	// (0x000b6ea2) dialer_ne_pane_t1

0x4c16,	// (0x000aeaa3) dialer_ne_pane_t2_ParamLimits

0x4c16,	// (0x000aeaa3) dialer_ne_pane_t2

0x4c40,	// (0x000aeacd) dialer_ne_pane_t3_ParamLimits

0x4c40,	// (0x000aeacd) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x000b965d) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x000b965d) dialer_ne_pane_t

0x4c70,	// (0x000aeafd) dialer_ne_pane_t3_copy1_ParamLimits

0x4c70,	// (0x000aeafd) dialer_ne_pane_t3_copy1

0x4c9f,	// (0x000aeb2c) cell_dialer_keypad_pane_ParamLimits

0x4c9f,	// (0x000aeb2c) cell_dialer_keypad_pane

0x4cb6,	// (0x000aeb43) cell_dialer_command_1_pane_ParamLimits

0x4cb6,	// (0x000aeb43) cell_dialer_command_1_pane

0x4ccc,	// (0x000aeb59) cell_dialer_command_2_pane_ParamLimits

0x4ccc,	// (0x000aeb59) cell_dialer_command_2_pane

0xd027,	// (0x000b6eb4) bg_button_pane_cp02_ParamLimits

0xd027,	// (0x000b6eb4) bg_button_pane_cp02

0x4cdb,	// (0x000aeb68) cell_dialer_keypad_pane_g1_ParamLimits

0x4cdb,	// (0x000aeb68) cell_dialer_keypad_pane_g1

0xd027,	// (0x000b6eb4) bg_button_pane_cp03_ParamLimits

0xd027,	// (0x000b6eb4) bg_button_pane_cp03

0x4cef,	// (0x000aeb7c) cell_dialer_command_1_pane_g1_ParamLimits

0x4cef,	// (0x000aeb7c) cell_dialer_command_1_pane_g1

0xd033,	// (0x000b6ec0) bg_button_pane_cp04

0x4d03,	// (0x000aeb90) cell_dialer_command_2_pane_g1

0xa9bb,	// (0x000b4848) bg_button_pane_cp06

0xd03b,	// (0x000b6ec8) dialer_ne_clear_pane_g1

0xb2d2,	// (0x000b515f) navi_pane_g2

0xb300,	// (0x000b518d) navi_pane_g3

0x0002,

0xf3e5,	// (0x000b9272) navi_pane_g

0xb38f,	// (0x000b521c) navi_pane_mv_g2

0xb3b6,	// (0x000b5243) navi_pane_mv_g5

0x27e4,	// (0x000ac671) navi_pane_mv_t1

0xa265,	// (0x000b40f2) main_clock2_pane

0x4d4e,	// (0x000aebdb) main_clock2_list_pane_ParamLimits

0x4d4e,	// (0x000aebdb) main_clock2_list_pane

0x4d86,	// (0x000aec13) main_clock2_pane_t1_ParamLimits

0x4d86,	// (0x000aec13) main_clock2_pane_t1

0x4dc4,	// (0x000aec51) main_clock2_pane_t2_ParamLimits

0x4dc4,	// (0x000aec51) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x000b9669) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x000b9669) main_clock2_pane_t

0x4e62,	// (0x000aecef) popup_clock_analogue_window_cp03_ParamLimits

0x4e62,	// (0x000aecef) popup_clock_analogue_window_cp03

0x4e87,	// (0x000aed14) popup_clock_digital_window_cp02_ParamLimits

0x4e87,	// (0x000aed14) popup_clock_digital_window_cp02

0x4ef8,	// (0x000aed85) main_clock2_list_single_pane_ParamLimits

0x4ef8,	// (0x000aed85) main_clock2_list_single_pane

0xa9bb,	// (0x000b4848) list_highlight_pane_cp05

0xd075,	// (0x000b6f02) main_clock2_list_single_pane_t1

0x149f,	// (0x000ab32c) popup_toolbar_window_cp04_ParamLimits

0x434e,	// (0x000ae1db) camera2_autofocus_pane_g2_ParamLimits

0x434e,	// (0x000ae1db) camera2_autofocus_pane_g2

0x435a,	// (0x000ae1e7) camera2_autofocus_pane_g3_ParamLimits

0x435a,	// (0x000ae1e7) camera2_autofocus_pane_g3

0x4366,	// (0x000ae1f3) camera2_autofocus_pane_g4_ParamLimits

0x4366,	// (0x000ae1f3) camera2_autofocus_pane_g4

0x4372,	// (0x000ae1ff) camera2_autofocus_pane_g5_ParamLimits

0x4372,	// (0x000ae1ff) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x000b95ad) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x000b95ad) camera2_autofocus_pane_g

0x453e,	// (0x000ae3cb) camera2_autofocus_pane_cp_g2

0x4546,	// (0x000ae3d3) camera2_autofocus_pane_cp_g3

0x454e,	// (0x000ae3db) camera2_autofocus_pane_cp_g4

0x4556,	// (0x000ae3e3) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x000b9613) camera2_autofocus_pane_cp_g

0x4bf6,	// (0x000aea83) popup_dialer_spcha_window

0x936c,	// (0x000b31f9) bg_popup_sub_pane_cp07

0xd083,	// (0x000b6f10) list_spcha_pane

0xd08b,	// (0x000b6f18) list_single_spcha_pane_ParamLimits

0xd08b,	// (0x000b6f18) list_single_spcha_pane

0x936c,	// (0x000b31f9) list_highlight_pane_cp06

0xd09c,	// (0x000b6f29) list_single_spcha_pane_t1

0xc256,	// (0x000b60e3) popup_call2_audio_out_window_g4_ParamLimits

0xc256,	// (0x000b60e3) popup_call2_audio_out_window_g4

0x93f2,	// (0x000b327f) main_imed2_pane

0x990f,	// (0x000b379c) popup_imed_adjust2_window

0x3722,	// (0x000ad5af) popup_imed_trans_window_ParamLimits

0x3722,	// (0x000ad5af) popup_imed_trans_window

0xca9f,	// (0x000b692c) popup_blid_sat_info2_window_t1

0xcab9,	// (0x000b6946) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x000b9542) popup_blid_sat_info2_window_t

0x4fa2,	// (0x000aee2f) aid_size_cell_colour_35

0x4fc2,	// (0x000aee4f) aid_size_cell_colour_112

0x4fe2,	// (0x000aee6f) aid_size_cell_effect

0xc859,	// (0x000b66e6) bg_tb_trans_pane_cp02

0xae5c,	// (0x000b4ce9) heading_imed_pane

0x5002,	// (0x000aee8f) listscroll_imed_pane

0xd0aa,	// (0x000b6f37) heading_imed_pane_g1

0xd0b2,	// (0x000b6f3f) heading_imed_pane_t1

0xd0c0,	// (0x000b6f4d) grid_imed_colour_35_pane_ParamLimits

0xd0c0,	// (0x000b6f4d) grid_imed_colour_35_pane

0x500e,	// (0x000aee9b) grid_imed_effect_pane

0xd0d8,	// (0x000b6f65) list_imed_aspect_pane

0x5024,	// (0x000aeeb1) scroll_pane_cp027_ParamLimits

0x5024,	// (0x000aeeb1) scroll_pane_cp027

0x5035,	// (0x000aeec2) cell_imed_effect_pane_ParamLimits

0x5035,	// (0x000aeec2) cell_imed_effect_pane

0xd0e0,	// (0x000b6f6d) cell_imed_colour_pane_ParamLimits

0xd0e0,	// (0x000b6f6d) cell_imed_colour_pane

0xd122,	// (0x000b6faf) cell_imed_colour_pane_g1_ParamLimits

0xd122,	// (0x000b6faf) cell_imed_colour_pane_g1

0xd133,	// (0x000b6fc0) hgihlgiht_grid_pane_cp016_ParamLimits

0xd133,	// (0x000b6fc0) hgihlgiht_grid_pane_cp016

0x505c,	// (0x000aeee9) cell_imed_effect_pane_g1

0x5064,	// (0x000aeef1) grid_highlight_pane_cp017

0xd144,	// (0x000b6fd1) list_imed_single_pane_ParamLimits

0xd144,	// (0x000b6fd1) list_imed_single_pane

0x936c,	// (0x000b31f9) list_highlight_pane_cp07

0xd159,	// (0x000b6fe6) list_imed_aspect_pane_comp1_t1

0xc859,	// (0x000b66e6) bg_tb_trans_pane_cp05

0xd17b,	// (0x000b7008) popup_imed_adjust2_window_g1

0xd1a2,	// (0x000b702f) popup_imed_adjust2_window_t1

0xd1ba,	// (0x000b7047) slider_imed_adjust_pane

0xd1ce,	// (0x000b705b) slider_imed_adjust_pane_g1

0xd1de,	// (0x000b706b) slider_imed_adjust_pane_g2

0xd1ee,	// (0x000b707b) slider_imed_adjust_pane_g3

0xd1ff,	// (0x000b708c) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x000b9686) slider_imed_adjust_pane_g

0x506d,	// (0x000aeefa) aid_size_cell_clipart2

0x5079,	// (0x000aef06) grid_imed_clipart_pane

0xd210,	// (0x000b709d) scroll_pane_cp031

0x5083,	// (0x000aef10) cell_imed_clipart_pane_ParamLimits

0x5083,	// (0x000aef10) cell_imed_clipart_pane

0x50a5,	// (0x000aef32) cell_imed_clipart_pane_g1

0x936c,	// (0x000b31f9) grid_highlight_pane_cp014

0x4d63,	// (0x000aebf0) main_clock2_pane_g1_ParamLimits

0x4d63,	// (0x000aebf0) main_clock2_pane_g1

0x4ea3,	// (0x000aed30) aid_call2_pane_cp10

0x4eb5,	// (0x000aed42) aid_call_pane_cp10

0xb231,	// (0x000b50be) popup_clock_analogue_window_cp10_g1

0xb231,	// (0x000b50be) popup_clock_analogue_window_cp10_g2

0x4ec7,	// (0x000aed54) popup_clock_analogue_window_cp10_g3

0x4ec7,	// (0x000aed54) popup_clock_analogue_window_cp10_g4

0xb231,	// (0x000b50be) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x000b9674) popup_clock_analogue_window_cp10_g

0x4ed9,	// (0x000aed66) popup_clock_analogue_window_cp10_t1

0x4f0a,	// (0x000aed97) clock_digital_number_pane_cp10_ParamLimits

0x4f0a,	// (0x000aed97) clock_digital_number_pane_cp10

0x4f22,	// (0x000aedaf) clock_digital_number_pane_cp11_ParamLimits

0x4f22,	// (0x000aedaf) clock_digital_number_pane_cp11

0x4f3a,	// (0x000aedc7) clock_digital_number_pane_cp12_ParamLimits

0x4f3a,	// (0x000aedc7) clock_digital_number_pane_cp12

0x4f52,	// (0x000aeddf) clock_digital_number_pane_cp13_ParamLimits

0x4f52,	// (0x000aeddf) clock_digital_number_pane_cp13

0x4f6a,	// (0x000aedf7) clock_digital_separator_pane_cp10_ParamLimits

0x4f6a,	// (0x000aedf7) clock_digital_separator_pane_cp10

0x4f82,	// (0x000aee0f) popup_clock_digital_window_cp02_t1_ParamLimits

0x4f82,	// (0x000aee0f) popup_clock_digital_window_cp02_t1

0xa18c,	// (0x000b4019) clock_digital_number_pane_cp10_g1

0xa18c,	// (0x000b4019) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x000b968f) clock_digital_number_pane_cp10_g

0xa18c,	// (0x000b4019) clock_digital_separator_pane_cp10_g1

0xa18c,	// (0x000b4019) clock_digital_separator_pane_g2_cp10

0xb3be,	// (0x000b524b) navi_pane_vded_g4

0xb3c7,	// (0x000b5254) navi_pane_vded_g5

0xb3d0,	// (0x000b525d) navi_pane_vded_t1

0x93f2,	// (0x000b327f) main_vded_pane

0x50ae,	// (0x000aef3b) main_vded_pane_g1

0x50b8,	// (0x000aef45) main_vded_pane_g2

0x50c2,	// (0x000aef4f) main_vded_pane_g3

0x0002,

0xf807,	// (0x000b9694) main_vded_pane_g

0x50cc,	// (0x000aef59) main_vded_pane_t1

0x50da,	// (0x000aef67) main_vded_pane_t2

0x0001,

0xf80e,	// (0x000b969b) main_vded_pane_t

0x50e8,	// (0x000aef75) vded_slider_pane

0x50f0,	// (0x000aef7d) vded_video_pane

0xd218,	// (0x000b70a5) vded_video_pane_g1

0x50f8,	// (0x000aef85) vded_video_pane_g2

0xcc6d,	// (0x000b6afa) vded_video_pane_g3

0x0002,

0xf813,	// (0x000b96a0) vded_video_pane_g

0xd222,	// (0x000b70af) vded_slider_pane_g1

0xc9b4,	// (0x000b6841) vded_slider_pane_g2

0xd22b,	// (0x000b70b8) vded_slider_pane_g3

0xd234,	// (0x000b70c1) vded_slider_pane_g4

0xd23d,	// (0x000b70ca) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x000b96a7) vded_slider_pane_g

0x4ad6,	// (0x000ae963) mup3_rocker_pane_ParamLimits

0x4ad6,	// (0x000ae963) mup3_rocker_pane

0x5101,	// (0x000aef8e) mup3_control_keys_pane_g1

0x5109,	// (0x000aef96) mup3_control_keys_pane_g2

0x5111,	// (0x000aef9e) mup3_control_keys_pane_g3

0x5119,	// (0x000aefa6) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x000b96b2) mup3_control_keys_pane_g

0x03b1,	// (0x000aa23e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x03b1,	// (0x000aa23e) popup_toolbar2_fixed_window_cp01

0x4b0a,	// (0x000ae997) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4b0a,	// (0x000ae997) popup_toolbar2_fixed_window_cp02

0xbb95,	// (0x000b5a22) popup_call2_audio_second_window_t4_ParamLimits

0xbb95,	// (0x000b5a22) popup_call2_audio_second_window_t4

0xc0c3,	// (0x000b5f50) popup_call2_audio_first_window_t6_ParamLimits

0xc0c3,	// (0x000b5f50) popup_call2_audio_first_window_t6

0xc359,	// (0x000b61e6) popup_call2_audio_out_window_t6_ParamLimits

0xc359,	// (0x000b61e6) popup_call2_audio_out_window_t6

0x93f2,	// (0x000b327f) main_vitu_pane

0x5129,	// (0x000aefb6) aid_size_cell_itu_ParamLimits

0x5129,	// (0x000aefb6) aid_size_cell_itu

0xa4ae,	// (0x000b433b) bg_popup_window_pane_cp08_ParamLimits

0xa4ae,	// (0x000b433b) bg_popup_window_pane_cp08

0x513f,	// (0x000aefcc) field_vitu_entry_pane_ParamLimits

0x513f,	// (0x000aefcc) field_vitu_entry_pane

0x5157,	// (0x000aefe4) grid_vitu_function_pane_ParamLimits

0x5157,	// (0x000aefe4) grid_vitu_function_pane

0x5172,	// (0x000aefff) grid_vitu_itu_pane_ParamLimits

0x5172,	// (0x000aefff) grid_vitu_itu_pane

0x5190,	// (0x000af01d) cell_vitu_itu_pane_ParamLimits

0x5190,	// (0x000af01d) cell_vitu_itu_pane

0x51b2,	// (0x000af03f) cell_vitu_function_pane_ParamLimits

0x51b2,	// (0x000af03f) cell_vitu_function_pane

0xa4ae,	// (0x000b433b) bg_popup_sub_pane_cp08_ParamLimits

0xa4ae,	// (0x000b433b) bg_popup_sub_pane_cp08

0x51cb,	// (0x000af058) field_vitu_entry_pane_t1_ParamLimits

0x51cb,	// (0x000af058) field_vitu_entry_pane_t1

0xd25e,	// (0x000b70eb) field_vitu_entry_pane_t2_ParamLimits

0xd25e,	// (0x000b70eb) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x000b96c0) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x000b96c0) field_vitu_entry_pane_t

0xd27b,	// (0x000b7108) bg_button_pane_cp05_ParamLimits

0xd27b,	// (0x000b7108) bg_button_pane_cp05

0x51ea,	// (0x000af077) cell_vitu_itu_pane_g1

0x5202,	// (0x000af08f) cell_vitu_itu_pane_t1_ParamLimits

0x5202,	// (0x000af08f) cell_vitu_itu_pane_t1

0x5214,	// (0x000af0a1) cell_vitu_itu_pane_t2_ParamLimits

0x5214,	// (0x000af0a1) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x000b96c5) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x000b96c5) cell_vitu_itu_pane_t

0xd289,	// (0x000b7116) bg_button_pane_cp07

0x5249,	// (0x000af0d6) cell_vitu_function_pane_g1

0x9754,	// (0x000b35e1) main_calc_pane_g1

0x01d8,	// (0x000aa065) aid_visual_content_pane

0x93f2,	// (0x000b327f) main_vradio_pane

0x5252,	// (0x000af0df) main_vradio_pane_g1_ParamLimits

0x5252,	// (0x000af0df) main_vradio_pane_g1

0xd293,	// (0x000b7120) main_vradio_pane_g2_ParamLimits

0xd293,	// (0x000b7120) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x000b96cc) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x000b96cc) main_vradio_pane_g

0x526b,	// (0x000af0f8) main_vradio_pane_t1_ParamLimits

0x526b,	// (0x000af0f8) main_vradio_pane_t1

0x5280,	// (0x000af10d) main_vradio_pane_t2_ParamLimits

0x5280,	// (0x000af10d) main_vradio_pane_t2

0xd2a0,	// (0x000b712d) main_vradio_pane_t3_ParamLimits

0xd2a0,	// (0x000b712d) main_vradio_pane_t3

0x0002,

0xf844,	// (0x000b96d1) main_vradio_pane_t_ParamLimits

0xf844,	// (0x000b96d1) main_vradio_pane_t

0x5295,	// (0x000af122) vradio_rocker_control_pane_ParamLimits

0x5295,	// (0x000af122) vradio_rocker_control_pane

0x52a7,	// (0x000af134) vradio_station_info_pane_ParamLimits

0x52a7,	// (0x000af134) vradio_station_info_pane

0xd2b4,	// (0x000b7141) vradio_frequency_info_pane_ParamLimits

0xd2b4,	// (0x000b7141) vradio_frequency_info_pane

0xcc6d,	// (0x000b6afa) vradio_station_info_pane_g1

0xd2c3,	// (0x000b7150) vradio_station_info_pane_t1_ParamLimits

0xd2c3,	// (0x000b7150) vradio_station_info_pane_t1

0xd2e5,	// (0x000b7172) vradio_station_info_pane_t2_ParamLimits

0xd2e5,	// (0x000b7172) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x000b96d8) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x000b96d8) vradio_station_info_pane_t

0xd2f7,	// (0x000b7184) vradio_tuning_pane

0xd2ff,	// (0x000b718c) vradio_rocker_control_pane_g1

0xd307,	// (0x000b7194) vradio_rocker_control_pane_g2

0xd30f,	// (0x000b719c) vradio_rocker_control_pane_g3

0xd317,	// (0x000b71a4) vradio_rocker_control_pane_g4

0xd31f,	// (0x000b71ac) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x000b96dd) vradio_rocker_control_pane_g

0x52b9,	// (0x000af146) vradio_frequency_info_pane_g1

0xd327,	// (0x000b71b4) vradio_frequency_info_pane_t1_ParamLimits

0xd327,	// (0x000b71b4) vradio_frequency_info_pane_t1

0x52c3,	// (0x000af150) vradio_tuning_pane_g1

0x52ce,	// (0x000af15b) vradio_tuning_pane_t1

0x93a2,	// (0x000b322f) area_side_right_pane_ParamLimits

0x93a2,	// (0x000b322f) area_side_right_pane

0xc814,	// (0x000b66a1) status_small_pane_g1

0xc81c,	// (0x000b66a9) status_small_pane_g2

0xc825,	// (0x000b66b2) status_small_pane_g3

0xc82e,	// (0x000b66bb) status_small_pane_g4

0x0003,

0xf60b,	// (0x000b9498) status_small_pane_g

0xc837,	// (0x000b66c4) status_small_pane_t1

0x93f2,	// (0x000b327f) main_video3_pane

0xd33b,	// (0x000b71c8) cams_zoom_vslider_pane

0xd343,	// (0x000b71d0) image3_wide_pane_ParamLimits

0xd343,	// (0x000b71d0) image3_wide_pane

0xd35d,	// (0x000b71ea) image3_wide_small_pane

0xd369,	// (0x000b71f6) main_video3_pane_g1_ParamLimits

0xd369,	// (0x000b71f6) main_video3_pane_g1

0xd385,	// (0x000b7212) main_video3_pane_g2_ParamLimits

0xd385,	// (0x000b7212) main_video3_pane_g2

0x0001,

0xf85b,	// (0x000b96e8) main_video3_pane_g_ParamLimits

0xf85b,	// (0x000b96e8) main_video3_pane_g

0xd3a1,	// (0x000b722e) main_video3_pane_t1_ParamLimits

0xd3a1,	// (0x000b722e) main_video3_pane_t1

0xd3cc,	// (0x000b7259) main_video3_pane_t2_ParamLimits

0xd3cc,	// (0x000b7259) main_video3_pane_t2

0xd3f7,	// (0x000b7284) main_video3_pane_t3_ParamLimits

0xd3f7,	// (0x000b7284) main_video3_pane_t3

0x0002,

0xf860,	// (0x000b96ed) main_video3_pane_t_ParamLimits

0xf860,	// (0x000b96ed) main_video3_pane_t

0xd424,	// (0x000b72b1) cams_zoom_vslider_pane_g1

0xd42d,	// (0x000b72ba) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x000b96f4) cams_zoom_vslider_pane_g

0xd435,	// (0x000b72c2) small_slider_vertical_pane

0xcc6d,	// (0x000b6afa) small_slider_vertical_pane_g1

0xcc6d,	// (0x000b6afa) small_slider_vertical_pane_g2

0xd43d,	// (0x000b72ca) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x000b96f9) small_slider_vertical_pane_g

0x93f2,	// (0x000b327f) main_hwr_training_pane

0xd446,	// (0x000b72d3) hwr_training_instruct_pane_ParamLimits

0xd446,	// (0x000b72d3) hwr_training_instruct_pane

0x52dd,	// (0x000af16a) hwr_training_navi_pane_ParamLimits

0x52dd,	// (0x000af16a) hwr_training_navi_pane

0x52fc,	// (0x000af189) hwr_training_write_pane_ParamLimits

0x52fc,	// (0x000af189) hwr_training_write_pane

0x936c,	// (0x000b31f9) bg_frame_shadow_pane

0xd47d,	// (0x000b730a) hwr_training_write_pane_g1

0xd485,	// (0x000b7312) hwr_training_write_pane_g2

0xd48d,	// (0x000b731a) hwr_training_write_pane_g3

0xd495,	// (0x000b7322) hwr_training_write_pane_g4

0xd49d,	// (0x000b732a) hwr_training_write_pane_g5

0xd4a5,	// (0x000b7332) hwr_training_write_pane_g6

0xd4ad,	// (0x000b733a) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x000b9700) hwr_training_write_pane_g

0x9a00,	// (0x000b388d) hwr_training_navi_pane_g1_ParamLimits

0x9a00,	// (0x000b388d) hwr_training_navi_pane_g1

0x9a12,	// (0x000b389f) hwr_training_navi_pane_g2_ParamLimits

0x9a12,	// (0x000b389f) hwr_training_navi_pane_g2

0x9a24,	// (0x000b38b1) hwr_training_navi_pane_g3_ParamLimits

0x9a24,	// (0x000b38b1) hwr_training_navi_pane_g3

0x9a34,	// (0x000b38c1) hwr_training_navi_pane_g4_ParamLimits

0x9a34,	// (0x000b38c1) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x000b970f) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x000b970f) hwr_training_navi_pane_g

0x9a41,	// (0x000b38ce) hwr_training_navi_pane_t1

0x5346,	// (0x000af1d3) list_single_hwr_training_instruct_pane_ParamLimits

0x5346,	// (0x000af1d3) list_single_hwr_training_instruct_pane

0xd4b5,	// (0x000b7342) list_single_hwr_training_instruct_pane_t1

0xcbad,	// (0x000b6a3a) bg_frame_shadow_pane_g1

0xd4c4,	// (0x000b7351) bg_frame_shadow_pane_g2

0xd4cc,	// (0x000b7359) bg_frame_shadow_pane_g3

0xd4d4,	// (0x000b7361) bg_frame_shadow_pane_g4

0xd4dc,	// (0x000b7369) bg_frame_shadow_pane_g5

0xd4e4,	// (0x000b7371) bg_frame_shadow_pane_g6

0xd4ec,	// (0x000b7379) bg_frame_shadow_pane_g7

0xa330,	// (0x000b41bd) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x000b971a) bg_frame_shadow_pane_g

0x93f2,	// (0x000b327f) main_video_tele_dialer_pane

0x535c,	// (0x000af1e9) aid_size_cell_video_keypad_ParamLimits

0x535c,	// (0x000af1e9) aid_size_cell_video_keypad

0x5376,	// (0x000af203) grid_video_dialer_keypad_pane_ParamLimits

0x5376,	// (0x000af203) grid_video_dialer_keypad_pane

0x53c4,	// (0x000af251) video_down_pane_cp_ParamLimits

0x53c4,	// (0x000af251) video_down_pane_cp

0x53f6,	// (0x000af283) cell_video_dialer_keypad_pane_ParamLimits

0x53f6,	// (0x000af283) cell_video_dialer_keypad_pane

0xd4f4,	// (0x000b7381) bg_button_pane_cp08_ParamLimits

0xd4f4,	// (0x000b7381) bg_button_pane_cp08

0x5418,	// (0x000af2a5) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5418,	// (0x000af2a5) cell_video_dialer_keypad_pane_g1

0x4ac0,	// (0x000ae94d) mup3_rocker2_pane_ParamLimits

0x4ac0,	// (0x000ae94d) mup3_rocker2_pane

0xcc6d,	// (0x000b6afa) mup3_rocker2_pane_g1

0x3611,	// (0x000ad49e) main_dialer2_pane

0x93f2,	// (0x000b327f) main_mp4_pane

0x9a57,	// (0x000b38e4) main_mp4_pane_g1_ParamLimits

0x9a57,	// (0x000b38e4) main_mp4_pane_g1

0x9a57,	// (0x000b38e4) main_mp4_pane_g2_ParamLimits

0x9a57,	// (0x000b38e4) main_mp4_pane_g2

0x5452,	// (0x000af2df) main_mp4_pane_g3_ParamLimits

0x5452,	// (0x000af2df) main_mp4_pane_g3

0x9a65,	// (0x000b38f2) main_mp4_pane_g4_ParamLimits

0x9a65,	// (0x000b38f2) main_mp4_pane_g4

0x9a8d,	// (0x000b391a) main_mp4_pane_g5_ParamLimits

0x9a8d,	// (0x000b391a) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x000b973a) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x000b973a) main_mp4_pane_g

0x9add,	// (0x000b396a) main_mp4_pane_t1_ParamLimits

0x9add,	// (0x000b396a) main_mp4_pane_t1

0x9b39,	// (0x000b39c6) main_mp4_pane_t2_ParamLimits

0x9b39,	// (0x000b39c6) main_mp4_pane_t2

0xd500,	// (0x000b738d) main_mp4_pane_t3_ParamLimits

0xd500,	// (0x000b738d) main_mp4_pane_t3

0x9b8b,	// (0x000b3a18) main_mp4_pane_t4_ParamLimits

0x9b8b,	// (0x000b3a18) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x000b9747) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x000b9747) main_mp4_pane_t

0x9bcf,	// (0x000b3a5c) mp4_progress_pane_ParamLimits

0x9bcf,	// (0x000b3a5c) mp4_progress_pane

0x9c19,	// (0x000b3aa6) mp4_rocker_pane_ParamLimits

0x9c19,	// (0x000b3aa6) mp4_rocker_pane

0xd528,	// (0x000b73b5) mp4_progress_pane_t1

0xd541,	// (0x000b73ce) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x000b9750) mp4_progress_pane_t

0xd55a,	// (0x000b73e7) mup_progress_pane_cp04

0xd5cd,	// (0x000b745a) mp4_rocker_pane_g1

0x548e,	// (0x000af31b) aid_cell_size_keypad2_ParamLimits

0x548e,	// (0x000af31b) aid_cell_size_keypad2

0x54a4,	// (0x000af331) dialer2_ne_pane_ParamLimits

0x54a4,	// (0x000af331) dialer2_ne_pane

0x54be,	// (0x000af34b) grid_dialer2_keypad_pane_ParamLimits

0x54be,	// (0x000af34b) grid_dialer2_keypad_pane

0xca46,	// (0x000b68d3) bg_popup_call_pane_cp07_ParamLimits

0xca46,	// (0x000b68d3) bg_popup_call_pane_cp07

0x54da,	// (0x000af367) dialer2_ne_pane_t1_ParamLimits

0x54da,	// (0x000af367) dialer2_ne_pane_t1

0x5516,	// (0x000af3a3) cell_dialer2_keypad_pane_ParamLimits

0x5516,	// (0x000af3a3) cell_dialer2_keypad_pane

0xd578,	// (0x000b7405) bg_button_pane_pane_cp04_ParamLimits

0xd578,	// (0x000b7405) bg_button_pane_pane_cp04

0x5538,	// (0x000af3c5) cell_dialer2_keypad_pane_g1_ParamLimits

0x5538,	// (0x000af3c5) cell_dialer2_keypad_pane_g1

0x1373,	// (0x000ab200) aid_placing_vt_set_content_ParamLimits

0x1373,	// (0x000ab200) aid_placing_vt_set_content

0x139b,	// (0x000ab228) aid_placing_vt_set_title_ParamLimits

0x139b,	// (0x000ab228) aid_placing_vt_set_title

0x93f2,	// (0x000b327f) main_image3_pane

0x55fe,	// (0x000af48b) area_side_right_pane_cp01_ParamLimits

0x55fe,	// (0x000af48b) area_side_right_pane_cp01

0x9a57,	// (0x000b38e4) main_image3_pane_g1_ParamLimits

0x9a57,	// (0x000b38e4) main_image3_pane_g1

0x5615,	// (0x000af4a2) main_image3_pane_g2_ParamLimits

0x5615,	// (0x000af4a2) main_image3_pane_g2

0x563d,	// (0x000af4ca) main_image3_pane_g3_ParamLimits

0x563d,	// (0x000af4ca) main_image3_pane_g3

0x5667,	// (0x000af4f4) main_image3_pane_g4_ParamLimits

0x5667,	// (0x000af4f4) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x000b975f) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x000b975f) main_image3_pane_g

0x5691,	// (0x000af51e) main_image3_pane_t1_ParamLimits

0x5691,	// (0x000af51e) main_image3_pane_t1

0x56e9,	// (0x000af576) main_image3_pane_t2_ParamLimits

0x56e9,	// (0x000af576) main_image3_pane_t2

0x573b,	// (0x000af5c8) main_image3_pane_t3_ParamLimits

0x573b,	// (0x000af5c8) main_image3_pane_t3

0x0003,

0xf8db,	// (0x000b9768) main_image3_pane_t_ParamLimits

0xf8db,	// (0x000b9768) main_image3_pane_t

0xa4ae,	// (0x000b433b) grid_sctrl_middle_pane_cp01_ParamLimits

0xa4ae,	// (0x000b433b) grid_sctrl_middle_pane_cp01

0x57c3,	// (0x000af650) cell_sctrl_middle_pane_cp01_ParamLimits

0x57c3,	// (0x000af650) cell_sctrl_middle_pane_cp01

0x57e0,	// (0x000af66d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x57e0,	// (0x000af66d) cell_sctrl_middle_pane_cp01_g1

0x93f2,	// (0x000b327f) main_call4_pane

0x57f6,	// (0x000af683) aid_size_button_call4_ParamLimits

0x57f6,	// (0x000af683) aid_size_button_call4

0x5827,	// (0x000af6b4) call4_windows_pane_ParamLimits

0x5827,	// (0x000af6b4) call4_windows_pane

0x5847,	// (0x000af6d4) grid_call4_button_pane_ParamLimits

0x5847,	// (0x000af6d4) grid_call4_button_pane

0xd584,	// (0x000b7411) call4_windows_conf_pane

0xd59b,	// (0x000b7428) popup_call4_audio_first_window_ParamLimits

0xd59b,	// (0x000b7428) popup_call4_audio_first_window

0xd5f9,	// (0x000b7486) popup_call4_audio_second_window_ParamLimits

0xd5f9,	// (0x000b7486) popup_call4_audio_second_window

0xd60d,	// (0x000b749a) popup_call4_audio_wait_window_ParamLimits

0xd60d,	// (0x000b749a) popup_call4_audio_wait_window

0x5874,	// (0x000af701) cell_call4_button_pane_ParamLimits

0x5874,	// (0x000af701) cell_call4_button_pane

0x589d,	// (0x000af72a) bg_button_pane_cp09_ParamLimits

0x589d,	// (0x000af72a) bg_button_pane_cp09

0x58a9,	// (0x000af736) cell_call4_button_pane_g1_ParamLimits

0x58a9,	// (0x000af736) cell_call4_button_pane_g1

0x58cf,	// (0x000af75c) cell_call4_button_pane_t1_ParamLimits

0x58cf,	// (0x000af75c) cell_call4_button_pane_t1

0xd655,	// (0x000b74e2) popup_call4_audio_conf_window_ParamLimits

0xd655,	// (0x000b74e2) popup_call4_audio_conf_window

0x4b20,	// (0x000ae9ad) mup3_progress_pane_t1_ParamLimits

0x4b3f,	// (0x000ae9cc) mup3_progress_pane_t2_ParamLimits

0xcf36,	// (0x000b6dc3) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x000b963c) mup3_progress_pane_t_ParamLimits

0xcf53,	// (0x000b6de0) mup_progress_pane_cp03_ParamLimits

0x5121,	// (0x000aefae) mup3_control_keys_pane_g4_copy1

0x9bfd,	// (0x000b3a8a) mp4_rocker2_pane_ParamLimits

0x9bfd,	// (0x000b3a8a) mp4_rocker2_pane

0xd669,	// (0x000b74f6) mp4_rocker2_pane_g1

0xd671,	// (0x000b74fe) mp4_rocker2_pane_g2

0x9c6b,	// (0x000b3af8) mp4_rocker2_pane_g3

0x9c73,	// (0x000b3b00) mp4_rocker2_pane_g4

0x9c7b,	// (0x000b3b08) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x000b9771) mp4_rocker2_pane_g

0x93f2,	// (0x000b327f) main_camera4_pane

0x93f2,	// (0x000b327f) main_video4_pane

0x5392,	// (0x000af21f) main_video_tele_dialer_pane_t1_ParamLimits

0x5392,	// (0x000af21f) main_video_tele_dialer_pane_t1

0x53ab,	// (0x000af238) main_video_tele_dialer_pane_t2_ParamLimits

0x53ab,	// (0x000af238) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x000b972b) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x000b972b) main_video_tele_dialer_pane_t

0x5911,	// (0x000af79e) cam4_autofocus_pane_ParamLimits

0x5911,	// (0x000af79e) cam4_autofocus_pane

0x5927,	// (0x000af7b4) cam4_image_uncrop_pane_ParamLimits

0x5927,	// (0x000af7b4) cam4_image_uncrop_pane

0x5941,	// (0x000af7ce) cam4_indicators_pane_ParamLimits

0x5941,	// (0x000af7ce) cam4_indicators_pane

0x596c,	// (0x000af7f9) main_camera4_pane_g1_ParamLimits

0x596c,	// (0x000af7f9) main_camera4_pane_g1

0x597e,	// (0x000af80b) main_camera4_pane_g2_ParamLimits

0x597e,	// (0x000af80b) main_camera4_pane_g2

0x5991,	// (0x000af81e) main_camera4_pane_g3_ParamLimits

0x5991,	// (0x000af81e) main_camera4_pane_g3

0x59a4,	// (0x000af831) main_camera4_pane_g4_ParamLimits

0x59a4,	// (0x000af831) main_camera4_pane_g4

0x59b7,	// (0x000af844) main_camera4_pane_g5_ParamLimits

0x59b7,	// (0x000af844) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x000b977c) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x000b977c) main_camera4_pane_g

0x59db,	// (0x000af868) main_camera4_pane_t1_ParamLimits

0x59db,	// (0x000af868) main_camera4_pane_t1

0x9c9f,	// (0x000b3b2c) bg_tb_trans_pane_cp06

0x9cb5,	// (0x000b3b42) cam4_indicators_pane_g1

0x9cc6,	// (0x000b3b53) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x000b9797) cam4_indicators_pane_g

0x9cde,	// (0x000b3b6b) cam4_indicators_pane_t1

0x5a3f,	// (0x000af8cc) main_video4_pane_g1_ParamLimits

0x5a3f,	// (0x000af8cc) main_video4_pane_g1

0x5a4e,	// (0x000af8db) main_video4_pane_g2_ParamLimits

0x5a4e,	// (0x000af8db) main_video4_pane_g2

0x5a5d,	// (0x000af8ea) main_video4_pane_g3_ParamLimits

0x5a5d,	// (0x000af8ea) main_video4_pane_g3

0x5a6c,	// (0x000af8f9) main_video4_pane_g4_ParamLimits

0x5a6c,	// (0x000af8f9) main_video4_pane_g4

0x0004,

0xf911,	// (0x000b979e) main_video4_pane_g_ParamLimits

0xf911,	// (0x000b979e) main_video4_pane_g

0x5a8a,	// (0x000af917) vid4_indicators_pane_ParamLimits

0x5a8a,	// (0x000af917) vid4_indicators_pane

0x5ab8,	// (0x000af945) video4_image_uncrop_cif_pane_ParamLimits

0x5ab8,	// (0x000af945) video4_image_uncrop_cif_pane

0x5ad2,	// (0x000af95f) video4_image_uncrop_nhd_pane_ParamLimits

0x5ad2,	// (0x000af95f) video4_image_uncrop_nhd_pane

0x5927,	// (0x000af7b4) video4_image_uncrop_vga_pane_ParamLimits

0x5927,	// (0x000af7b4) video4_image_uncrop_vga_pane

0x93e4,	// (0x000b3271) bg_tb_trans_pane_cp07

0x9d08,	// (0x000b3b95) vid4_indicators_pane_g1

0x9d1c,	// (0x000b3ba9) vid4_indicators_pane_g2

0x9d30,	// (0x000b3bbd) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x000b97a9) vid4_indicators_pane_g

0x9d5d,	// (0x000b3bea) vid4_indicators_pane_t1

0x5ae6,	// (0x000af973) cam4_autofocus_pane_g1

0x5aee,	// (0x000af97b) cam4_autofocus_pane_g2

0x5af6,	// (0x000af983) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x000b97b4) cam4_autofocus_pane_g

0x5afe,	// (0x000af98b) cam4_autofocus_pane_g3_copy1

0x53da,	// (0x000af267) video_down_pane_cp_t1

0x53e8,	// (0x000af275) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x000b9730) video_down_pane_cp_t

0x93e4,	// (0x000b3271) popup_vitu2_window_ParamLimits

0x93e4,	// (0x000b3271) popup_vitu2_window

0x5b06,	// (0x000af993) aid_size_cell2_itu2_ParamLimits

0x5b06,	// (0x000af993) aid_size_cell2_itu2

0x5b2c,	// (0x000af9b9) aid_size_cell_itu2_ParamLimits

0x5b2c,	// (0x000af9b9) aid_size_cell_itu2

0x5b88,	// (0x000afa15) bg_popup_window_pane_cp09_ParamLimits

0x5b88,	// (0x000afa15) bg_popup_window_pane_cp09

0x5b96,	// (0x000afa23) field_vitu2_entry_pane_ParamLimits

0x5b96,	// (0x000afa23) field_vitu2_entry_pane

0x5bbc,	// (0x000afa49) grid_vitu2_function_pane_ParamLimits

0x5bbc,	// (0x000afa49) grid_vitu2_function_pane

0x5c0d,	// (0x000afa9a) grid_vitu2_itu_pane_ParamLimits

0x5c0d,	// (0x000afa9a) grid_vitu2_itu_pane

0x5ca3,	// (0x000afb30) cell_vitu2_itu_pane_ParamLimits

0x5ca3,	// (0x000afb30) cell_vitu2_itu_pane

0x5ccf,	// (0x000afb5c) cell_vitu2_function_pane_ParamLimits

0x5ccf,	// (0x000afb5c) cell_vitu2_function_pane

0xd68b,	// (0x000b7518) bg_popup_call_pane_cp08_ParamLimits

0xd68b,	// (0x000b7518) bg_popup_call_pane_cp08

0xd6a2,	// (0x000b752f) field_vitu2_entry_pane_g1

0xd6ae,	// (0x000b753b) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x000b97bb) field_vitu2_entry_pane_g

0x5d0e,	// (0x000afb9b) field_vitu2_entry_pane_t1_ParamLimits

0x5d0e,	// (0x000afb9b) field_vitu2_entry_pane_t1

0xa530,	// (0x000b43bd) field_vitu2_entry_pane_t2_ParamLimits

0xa530,	// (0x000b43bd) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x000b97c2) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x000b97c2) field_vitu2_entry_pane_t

0x5d3d,	// (0x000afbca) bg_button_pane_cp010_ParamLimits

0x5d3d,	// (0x000afbca) bg_button_pane_cp010

0x9d74,	// (0x000b3c01) cell_vitu2_itu_pane_g1

0x5d59,	// (0x000afbe6) cell_vitu2_itu_pane_t1_ParamLimits

0x5d59,	// (0x000afbe6) cell_vitu2_itu_pane_t1

0x00b0,	// (0x000a9f3d) cell_vitu2_itu_pane_t2_ParamLimits

0x00b0,	// (0x000a9f3d) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x000b97cc) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x000b97cc) cell_vitu2_itu_pane_t

0x93e4,	// (0x000b3271) bg_button_pane_cp011

0x5db7,	// (0x000afc44) cell_vitu2_function_pane_g1

0x93f2,	// (0x000b327f) main_myfav_hc_pane

0x578b,	// (0x000af618) popup_image3_note_pane_ParamLimits

0x578b,	// (0x000af618) popup_image3_note_pane

0x57a7,	// (0x000af634) popup_image3_tool_bar_pane_ParamLimits

0x57a7,	// (0x000af634) popup_image3_tool_bar_pane

0x013e,	// (0x000a9fcb) cell_vitu2_itu_pane_t3_ParamLimits

0x013e,	// (0x000a9fcb) cell_vitu2_itu_pane_t3

0x936c,	// (0x000b31f9) bg_popup_trans_pane

0xd6d0,	// (0x000b755d) grid_image3_tool_bar_pane

0xd6da,	// (0x000b7567) bg_popup_trans_pane_g1

0xac14,	// (0x000b4aa1) bg_popup_trans_pane_g2

0xd6e2,	// (0x000b756f) bg_popup_trans_pane_g3

0xd6ea,	// (0x000b7577) bg_popup_trans_pane_g4

0xd6f2,	// (0x000b757f) bg_popup_trans_pane_g5

0xd6fa,	// (0x000b7587) bg_popup_trans_pane_g6

0xd702,	// (0x000b758f) bg_popup_trans_pane_g7

0xd70a,	// (0x000b7597) bg_popup_trans_pane_g8

0xabf4,	// (0x000b4a81) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x000b97d3) bg_popup_trans_pane_g

0xd712,	// (0x000b759f) cell_image3_tool_bar_pane_ParamLimits

0xd712,	// (0x000b759f) cell_image3_tool_bar_pane

0xcc6d,	// (0x000b6afa) cell_image3_tool_bar_pane_g1

0x936c,	// (0x000b31f9) bg_popup_trans_pane_cp1

0xd726,	// (0x000b75b3) popup_image3_note_pane_t1

0xd734,	// (0x000b75c1) popup_image3_note_pane_t2

0xd742,	// (0x000b75cf) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x000b97e6) popup_image3_note_pane_t

0xd750,	// (0x000b75dd) popup_image3_note_pane_t3_copy1

0x5dcb,	// (0x000afc58) bg_myfav_hc_instruction_pane_ParamLimits

0x5dcb,	// (0x000afc58) bg_myfav_hc_instruction_pane

0x5ddf,	// (0x000afc6c) cell_myfav_contact_pane_ParamLimits

0x5ddf,	// (0x000afc6c) cell_myfav_contact_pane

0x5dfd,	// (0x000afc8a) cell_myfav_contact_pane_cp1_ParamLimits

0x5dfd,	// (0x000afc8a) cell_myfav_contact_pane_cp1

0x5e15,	// (0x000afca2) cell_myfav_contact_pane_cp2_ParamLimits

0x5e15,	// (0x000afca2) cell_myfav_contact_pane_cp2

0x5e2d,	// (0x000afcba) cell_myfav_contact_pane_cp3_ParamLimits

0x5e2d,	// (0x000afcba) cell_myfav_contact_pane_cp3

0x5e44,	// (0x000afcd1) cell_myfav_contact_pane_cp4_ParamLimits

0x5e44,	// (0x000afcd1) cell_myfav_contact_pane_cp4

0x5e5c,	// (0x000afce9) cell_myfav_contact_pane_cp5_ParamLimits

0x5e5c,	// (0x000afce9) cell_myfav_contact_pane_cp5

0x5e70,	// (0x000afcfd) cell_myfav_contact_pane_cp6_ParamLimits

0x5e70,	// (0x000afcfd) cell_myfav_contact_pane_cp6

0x5e86,	// (0x000afd13) cell_myfav_contact_pane_cp7_ParamLimits

0x5e86,	// (0x000afd13) cell_myfav_contact_pane_cp7

0xd75e,	// (0x000b75eb) listscroll_gen_pane_cp05

0x5ea0,	// (0x000afd2d) main_myfav_hc_pane_g1_ParamLimits

0x5ea0,	// (0x000afd2d) main_myfav_hc_pane_g1

0x5eba,	// (0x000afd47) main_myfav_hc_pane_g2_ParamLimits

0x5eba,	// (0x000afd47) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x000b97ed) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x000b97ed) main_myfav_hc_pane_g

0x5eec,	// (0x000afd79) main_myfav_hc_pane_t1_ParamLimits

0x5eec,	// (0x000afd79) main_myfav_hc_pane_t1

0xd767,	// (0x000b75f4) main_myfav_hc_pane_t2_ParamLimits

0xd767,	// (0x000b75f4) main_myfav_hc_pane_t2

0xd779,	// (0x000b7606) main_myfav_hc_pane_t3_ParamLimits

0xd779,	// (0x000b7606) main_myfav_hc_pane_t3

0x5f03,	// (0x000afd90) main_myfav_hc_pane_t4_ParamLimits

0x5f03,	// (0x000afd90) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x000b97f4) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x000b97f4) main_myfav_hc_pane_t

0xcc6d,	// (0x000b6afa) bg_myfav_hc_instruction_pane_g1

0xd78b,	// (0x000b7618) cell_myfav_contact_pane_g1_ParamLimits

0xd78b,	// (0x000b7618) cell_myfav_contact_pane_g1

0xd78b,	// (0x000b7618) cell_myfav_contact_pane_g2_ParamLimits

0xd78b,	// (0x000b7618) cell_myfav_contact_pane_g2

0xd797,	// (0x000b7624) cell_myfav_contact_pane_g3_ParamLimits

0xd797,	// (0x000b7624) cell_myfav_contact_pane_g3

0xcf20,	// (0x000b6dad) cell_myfav_contact_pane_g4_ParamLimits

0xcf20,	// (0x000b6dad) cell_myfav_contact_pane_g4

0xd7a4,	// (0x000b7631) cell_myfav_contact_pane_g5_ParamLimits

0xd7a4,	// (0x000b7631) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x000b97ff) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x000b97ff) cell_myfav_contact_pane_g

0x5ed4,	// (0x000afd61) main_myfav_hc_pane_g3_ParamLimits

0x5ed4,	// (0x000afd61) main_myfav_hc_pane_g3

0x0313,	// (0x000aa1a0) popup_adpt_find_window

0x5f2b,	// (0x000afdb8) afind_page_pane_ParamLimits

0x5f2b,	// (0x000afdb8) afind_page_pane

0x5f40,	// (0x000afdcd) aid_size_cell_afind_ParamLimits

0x5f40,	// (0x000afdcd) aid_size_cell_afind

0x5f5e,	// (0x000afdeb) bg_popup_sub_pane_cp09_ParamLimits

0x5f5e,	// (0x000afdeb) bg_popup_sub_pane_cp09

0x5f6b,	// (0x000afdf8) find_pane_cp01_ParamLimits

0x5f6b,	// (0x000afdf8) find_pane_cp01

0xd7b0,	// (0x000b763d) grid_afind_control_pane_ParamLimits

0xd7b0,	// (0x000b763d) grid_afind_control_pane

0x5f78,	// (0x000afe05) grid_afind_pane_ParamLimits

0x5f78,	// (0x000afe05) grid_afind_pane

0x5f97,	// (0x000afe24) cell_afind_pane_ParamLimits

0x5f97,	// (0x000afe24) cell_afind_pane

0xcc6d,	// (0x000b6afa) afind_page_pane_g1

0x5ffe,	// (0x000afe8b) afind_page_pane_g2

0x6007,	// (0x000afe94) afind_page_pane_g3

0x0002,

0xf97d,	// (0x000b980a) afind_page_pane_g

0x6010,	// (0x000afe9d) afind_page_pane_t1

0xd7c4,	// (0x000b7651) cell_afind_grid_control_pane_ParamLimits

0xd7c4,	// (0x000b7651) cell_afind_grid_control_pane

0xd578,	// (0x000b7405) bg_button_pane_cp69_ParamLimits

0xd578,	// (0x000b7405) bg_button_pane_cp69

0x6030,	// (0x000afebd) cell_afind_pane_g1_ParamLimits

0x6030,	// (0x000afebd) cell_afind_pane_g1

0x603d,	// (0x000afeca) cell_afind_pane_t1_ParamLimits

0x603d,	// (0x000afeca) cell_afind_pane_t1

0xaa0d,	// (0x000b489a) bg_button_pane_cp72

0xd7d3,	// (0x000b7660) cell_afind_grid_control_pane_g1

0x30be,	// (0x000acf4b) aid_image_placing_area_ParamLimits

0x30be,	// (0x000acf4b) aid_image_placing_area

0xd246,	// (0x000b70d3) field_vitu_entry_pane_g1_ParamLimits

0xd246,	// (0x000b70d3) field_vitu_entry_pane_g1

0xd252,	// (0x000b70df) field_vitu_entry_pane_g2_ParamLimits

0xd252,	// (0x000b70df) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x000b96bb) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x000b96bb) field_vitu_entry_pane_g

0x51ea,	// (0x000af077) cell_vitu_itu_pane_g1_ParamLimits

0x522c,	// (0x000af0b9) cell_vitu_itu_pane_t3_ParamLimits

0x522c,	// (0x000af0b9) cell_vitu_itu_pane_t3

0xd528,	// (0x000b73b5) mp4_progress_pane_t1_ParamLimits

0xd541,	// (0x000b73ce) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x000b9750) mp4_progress_pane_t_ParamLimits

0xd55a,	// (0x000b73e7) mup_progress_pane_cp04_ParamLimits

0x5f17,	// (0x000afda4) main_myfav_hc_pane_t5_ParamLimits

0x5f17,	// (0x000afda4) main_myfav_hc_pane_t5

0x9392,	// (0x000b321f) aid_zoom_text_primary

0x0313,	// (0x000aa1a0) popup_adpt_find_window_ParamLimits

0x93e4,	// (0x000b3271) main_cam_set_pane

0x5958,	// (0x000af7e5) cam4_zoom_pane_ParamLimits

0x5958,	// (0x000af7e5) cam4_zoom_pane

0x604f,	// (0x000afedc) main_cam_set_pane_g1_ParamLimits

0x604f,	// (0x000afedc) main_cam_set_pane_g1

0x605d,	// (0x000afeea) main_cam_set_pane_g2_ParamLimits

0x605d,	// (0x000afeea) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x000b9811) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x000b9811) main_cam_set_pane_g

0x607e,	// (0x000aff0b) main_cam_set_pane_t1_ParamLimits

0x607e,	// (0x000aff0b) main_cam_set_pane_t1

0x6099,	// (0x000aff26) main_cset_listscroll_pane_ParamLimits

0x6099,	// (0x000aff26) main_cset_listscroll_pane

0x60b9,	// (0x000aff46) main_cset_slider_pane_ParamLimits

0x60b9,	// (0x000aff46) main_cset_slider_pane

0xd7e4,	// (0x000b7671) main_cset_list_pane_ParamLimits

0xd7e4,	// (0x000b7671) main_cset_list_pane

0xd7f4,	// (0x000b7681) scroll_pane_cp028

0x60df,	// (0x000aff6c) aid_area_touch_slider

0x60fb,	// (0x000aff88) cset_slider_pane

0x6125,	// (0x000affb2) main_cset_slider_pane_g1

0x613a,	// (0x000affc7) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x000b9816) main_cset_slider_pane_g

0xd845,	// (0x000b76d2) main_cset_slider_pane_t1

0x61de,	// (0x000b006b) main_cset_slider_pane_t2

0x61f8,	// (0x000b0085) main_cset_slider_pane_t3

0x6212,	// (0x000b009f) main_cset_slider_pane_t4

0x622c,	// (0x000b00b9) main_cset_slider_pane_t5

0x6246,	// (0x000b00d3) main_cset_slider_pane_t6

0x625b,	// (0x000b00e8) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x000b983b) main_cset_slider_pane_t

0x635f,	// (0x000b01ec) cset_list_set_pane_ParamLimits

0x635f,	// (0x000b01ec) cset_list_set_pane

0x6371,	// (0x000b01fe) aid_position_infowindow_above

0x6379,	// (0x000b0206) aid_position_infowindow_below

0x6381,	// (0x000b020e) cset_list_set_pane_g1_ParamLimits

0x6381,	// (0x000b020e) cset_list_set_pane_g1

0x638d,	// (0x000b021a) cset_list_set_pane_g3_ParamLimits

0x638d,	// (0x000b021a) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x000b985a) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x000b985a) cset_list_set_pane_g

0x639c,	// (0x000b0229) cset_list_set_pane_t1_ParamLimits

0x639c,	// (0x000b0229) cset_list_set_pane_t1

0xa4ae,	// (0x000b433b) list_highlight_pane_cp021_ParamLimits

0xa4ae,	// (0x000b433b) list_highlight_pane_cp021

0xb544,	// (0x000b53d1) cset_slider_pane_g1

0xb556,	// (0x000b53e3) cset_slider_pane_g2

0xb54d,	// (0x000b53da) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x000b985f) cset_slider_pane_g

0x9d86,	// (0x000b3c13) aid_area_touch_cam4_zoom

0x9d8e,	// (0x000b3c1b) cam4_zoom_cont_pane

0x9d96,	// (0x000b3c23) cam4_zoom_pane_g1

0x9d9e,	// (0x000b3c2b) cam4_zoom_pane_g2

0x63b1,	// (0x000b023e) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x000b9866) cam4_zoom_pane_g

0x9da6,	// (0x000b3c33) cam4_zoom_cont_pane_g1

0x9daf,	// (0x000b3c3c) cam4_zoom_cont_pane_g2

0x9db8,	// (0x000b3c45) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x000b986d) cam4_zoom_cont_pane_g

0x5814,	// (0x000af6a1) call4_image_pane_ParamLimits

0x5814,	// (0x000af6a1) call4_image_pane

0xd584,	// (0x000b7411) call4_windows_conf_pane_ParamLimits

0xd5d7,	// (0x000b7464) popup_call4_audio_in_window_ParamLimits

0xd5d7,	// (0x000b7464) popup_call4_audio_in_window

0x936c,	// (0x000b31f9) bg_popup_call2_act_pane_cp02

0xd64d,	// (0x000b74da) call4_list_conf_pane

0xcc6d,	// (0x000b6afa) call4_image_pane_g1

0xcc6d,	// (0x000b6afa) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x000b957c) call4_image_pane_g

0xd8e5,	// (0x000b7772) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8e5,	// (0x000b7772) list_single_graphic_popup_conf4_pane

0x936c,	// (0x000b31f9) list_highlight_pane_cp022

0xd8f8,	// (0x000b7785) list_single_graphic_popup_conf4_pane_g1

0xb12e,	// (0x000b4fbb) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x000b9874) list_single_graphic_popup_conf4_pane_g

0xd900,	// (0x000b778d) list_single_graphic_popup_conf4_pane_t1

0x14bf,	// (0x000ab34c) popup_vtel_slider_window_ParamLimits

0x14bf,	// (0x000ab34c) popup_vtel_slider_window

0xd566,	// (0x000b73f3) dialer2_ne_pane_t2_ParamLimits

0xd566,	// (0x000b73f3) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x000b9755) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x000b9755) dialer2_ne_pane_t

0xca46,	// (0x000b68d3) bg_popup_sub_pane_cp010_ParamLimits

0xca46,	// (0x000b68d3) bg_popup_sub_pane_cp010

0x63b9,	// (0x000b0246) popup_vtel_slider_window_g1_ParamLimits

0x63b9,	// (0x000b0246) popup_vtel_slider_window_g1

0x63cc,	// (0x000b0259) popup_vtel_slider_window_g2_ParamLimits

0x63cc,	// (0x000b0259) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x000b9879) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x000b9879) popup_vtel_slider_window_g

0x6422,	// (0x000b02af) vtel_slider_pane_ParamLimits

0x6422,	// (0x000b02af) vtel_slider_pane

0x6444,	// (0x000b02d1) vtel_slider_pane_g1_ParamLimits

0x6444,	// (0x000b02d1) vtel_slider_pane_g1

0x6458,	// (0x000b02e5) vtel_slider_pane_g2_ParamLimits

0x6458,	// (0x000b02e5) vtel_slider_pane_g2

0x6470,	// (0x000b02fd) vtel_slider_pane_g3_ParamLimits

0x6470,	// (0x000b02fd) vtel_slider_pane_g3

0x6444,	// (0x000b02d1) vtel_slider_pane_g4_ParamLimits

0x6444,	// (0x000b02d1) vtel_slider_pane_g4

0x6486,	// (0x000b0313) vtel_slider_pane_g5_ParamLimits

0x6486,	// (0x000b0313) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x000b9882) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x000b9882) vtel_slider_pane_g

0x93e4,	// (0x000b3271) main_gallery2_pane

0x5b58,	// (0x000af9e5) aid_size_row_itut2_dropdow_list_ParamLimits

0x5b58,	// (0x000af9e5) aid_size_row_itut2_dropdow_list

0x5be4,	// (0x000afa71) grid_vitu2_function_top_pane_ParamLimits

0x5be4,	// (0x000afa71) grid_vitu2_function_top_pane

0x5c4e,	// (0x000afadb) popup_vitu2_dropdown_list_window_ParamLimits

0x5c4e,	// (0x000afadb) popup_vitu2_dropdown_list_window

0x5c77,	// (0x000afb04) popup_vitu2_match_list_window

0x64aa,	// (0x000b0337) cell_vitu2_function_top_pane_ParamLimits

0x64aa,	// (0x000b0337) cell_vitu2_function_top_pane

0x64c2,	// (0x000b034f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x64c2,	// (0x000b034f) cell_vitu2_function_top_pane_cp01

0x64de,	// (0x000b036b) cell_vitu2_function_top_wide_pane_ParamLimits

0x64de,	// (0x000b036b) cell_vitu2_function_top_wide_pane

0x93e4,	// (0x000b3271) bg_button_pane_cp012

0x64fa,	// (0x000b0387) cell_vitu2_function_top_pane_g1

0x9dc1,	// (0x000b3c4e) bg_button_pane_cp013_ParamLimits

0x9dc1,	// (0x000b3c4e) bg_button_pane_cp013

0x650e,	// (0x000b039b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x650e,	// (0x000b039b) cell_vitu2_function_top_wide_pane_g1

0x93e4,	// (0x000b3271) bg_popup_sub_pane_cp20

0x6526,	// (0x000b03b3) list_vitu2_match_list_pane

0xd6da,	// (0x000b7567) bg_popup_sub_pane_cp20_g1

0xd6e2,	// (0x000b756f) bg_popup_sub_pane_cp20_g2

0xac14,	// (0x000b4aa1) bg_popup_sub_pane_cp20_g3

0xd6ea,	// (0x000b7577) bg_popup_sub_pane_cp20_g4

0xabf4,	// (0x000b4a81) bg_popup_sub_pane_cp20_g5

0xd916,	// (0x000b77a3) bg_popup_sub_pane_cp20_g6

0xd6fa,	// (0x000b7587) bg_popup_sub_pane_cp20_g7

0xd702,	// (0x000b758f) bg_popup_sub_pane_cp20_g8

0xd70a,	// (0x000b7597) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x000b988d) bg_popup_sub_pane_cp20_g

0x9ddd,	// (0x000b3c6a) list_vitu2_match_list_item_pane_ParamLimits

0x9ddd,	// (0x000b3c6a) list_vitu2_match_list_item_pane

0x9def,	// (0x000b3c7c) list_vitu2_match_list_item_pane_t1

0x93f2,	// (0x000b327f) bg_popup_sub_pane_cp21

0x9dfd,	// (0x000b3c8a) grid_vitu2_dropdown_list_pane

0x6594,	// (0x000b0421) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6594,	// (0x000b0421) cell_vitu2_dropdown_list_char_pane

0x65b5,	// (0x000b0442) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x65b5,	// (0x000b0442) cell_vitu2_dropdown_list_ctrl_pane

0xd91e,	// (0x000b77ab) cell_vitu2_dropdown_list_char_pane_g1

0xd927,	// (0x000b77b4) cell_vitu2_dropdown_list_char_pane_g2

0xd930,	// (0x000b77bd) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x000b98aa) cell_vitu2_dropdown_list_char_pane_g

0x65e1,	// (0x000b046e) cell_vitu2_dropdown_list_char_pane_t1

0x65ef,	// (0x000b047c) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x65ef,	// (0x000b047c) cell_vitu2_dropdown_list_ctrl_pane_g1

0x65fc,	// (0x000b0489) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x65fc,	// (0x000b0489) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6609,	// (0x000b0496) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6609,	// (0x000b0496) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6616,	// (0x000b04a3) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6616,	// (0x000b04a3) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9c9f,	// (0x000b3b2c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9c9f,	// (0x000b3b2c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x000b98b1) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x000b98b1) cell_vitu2_dropdown_list_ctrl_pane_g

0x6632,	// (0x000b04bf) aid_size_cell_gallery2_ParamLimits

0x6632,	// (0x000b04bf) aid_size_cell_gallery2

0x6650,	// (0x000b04dd) grid_gallery2_pane_ParamLimits

0x6650,	// (0x000b04dd) grid_gallery2_pane

0x666a,	// (0x000b04f7) scroll_pane_cp029_ParamLimits

0x666a,	// (0x000b04f7) scroll_pane_cp029

0x6676,	// (0x000b0503) cell_gallery2_pane_ParamLimits

0x6676,	// (0x000b0503) cell_gallery2_pane

0xd939,	// (0x000b77c6) cell_gallery2_pane_g2

0x66d2,	// (0x000b055f) cell_gallery2_pane_g3

0xd941,	// (0x000b77ce) cell_gallery2_pane_g4

0xd949,	// (0x000b77d6) cell_gallery2_pane_g5

0xa9bb,	// (0x000b4848) grid_highlight_pane_cp10

0x5c77,	// (0x000afb04) popup_vitu2_match_list_window_ParamLimits

0x5c8c,	// (0x000afb19) popup_vitu2_query_window_ParamLimits

0x5c8c,	// (0x000afb19) popup_vitu2_query_window

0x93f2,	// (0x000b327f) bg_vitu2_candi_button_pane

0xd91e,	// (0x000b77ab) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd927,	// (0x000b77b4) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd930,	// (0x000b77bd) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x66da,	// (0x000b0567) bg_button_pane_cp015

0x66ee,	// (0x000b057b) bg_button_pane_cp016

0x6701,	// (0x000b058e) bg_button_pane_cp017

0xc859,	// (0x000b66e6) bg_popup_sub_pane_cp22

0xd951,	// (0x000b77de) popup_vitu2_query_window_g1

0x6746,	// (0x000b05d3) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x000b98bc) popup_vitu2_query_window_g

0x6765,	// (0x000b05f2) popup_vitu2_query_window_t1_ParamLimits

0x6765,	// (0x000b05f2) popup_vitu2_query_window_t1

0x679a,	// (0x000b0627) popup_vitu2_query_window_t2_ParamLimits

0x679a,	// (0x000b0627) popup_vitu2_query_window_t2

0x67ac,	// (0x000b0639) popup_vitu2_query_window_t3_ParamLimits

0x67ac,	// (0x000b0639) popup_vitu2_query_window_t3

0x67d4,	// (0x000b0661) popup_vitu2_query_window_t4_ParamLimits

0x67d4,	// (0x000b0661) popup_vitu2_query_window_t4

0x67f5,	// (0x000b0682) popup_vitu2_query_window_t5_ParamLimits

0x67f5,	// (0x000b0682) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x000b98c3) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x000b98c3) popup_vitu2_query_window_t

0xd7dc,	// (0x000b7669) main_cset_text_pane

0x60df,	// (0x000aff6c) aid_area_touch_slider_ParamLimits

0x60fb,	// (0x000aff88) cset_slider_pane_ParamLimits

0x6125,	// (0x000affb2) main_cset_slider_pane_g1_ParamLimits

0x613a,	// (0x000affc7) main_cset_slider_pane_g2_ParamLimits

0xd7fd,	// (0x000b768a) main_cset_slider_pane_g3_ParamLimits

0xd7fd,	// (0x000b768a) main_cset_slider_pane_g3

0x614f,	// (0x000affdc) main_cset_slider_pane_g4_ParamLimits

0x614f,	// (0x000affdc) main_cset_slider_pane_g4

0x615e,	// (0x000affeb) main_cset_slider_pane_g5_ParamLimits

0x615e,	// (0x000affeb) main_cset_slider_pane_g5

0x616a,	// (0x000afff7) main_cset_slider_pane_g6_ParamLimits

0x616a,	// (0x000afff7) main_cset_slider_pane_g6

0xf989,	// (0x000b9816) main_cset_slider_pane_g_ParamLimits

0xd845,	// (0x000b76d2) main_cset_slider_pane_t1_ParamLimits

0x61de,	// (0x000b006b) main_cset_slider_pane_t2_ParamLimits

0x61f8,	// (0x000b0085) main_cset_slider_pane_t3_ParamLimits

0x6212,	// (0x000b009f) main_cset_slider_pane_t4_ParamLimits

0x622c,	// (0x000b00b9) main_cset_slider_pane_t5_ParamLimits

0x6246,	// (0x000b00d3) main_cset_slider_pane_t6_ParamLimits

0x625b,	// (0x000b00e8) main_cset_slider_pane_t7_ParamLimits

0x6285,	// (0x000b0112) main_cset_slider_pane_t8_ParamLimits

0x6285,	// (0x000b0112) main_cset_slider_pane_t8

0x62ad,	// (0x000b013a) main_cset_slider_pane_t9_ParamLimits

0x62ad,	// (0x000b013a) main_cset_slider_pane_t9

0x62d5,	// (0x000b0162) main_cset_slider_pane_t10_ParamLimits

0x62d5,	// (0x000b0162) main_cset_slider_pane_t10

0x62fd,	// (0x000b018a) main_cset_slider_pane_t11_ParamLimits

0x62fd,	// (0x000b018a) main_cset_slider_pane_t11

0x6325,	// (0x000b01b2) main_cset_slider_pane_t12_ParamLimits

0x6325,	// (0x000b01b2) main_cset_slider_pane_t12

0x6342,	// (0x000b01cf) main_cset_slider_pane_t13_ParamLimits

0x6342,	// (0x000b01cf) main_cset_slider_pane_t13

0xf9ae,	// (0x000b983b) main_cset_slider_pane_t_ParamLimits

0x936c,	// (0x000b31f9) bg_popup_sub_pane_cp011

0xd95d,	// (0x000b77ea) main_cset_text_pane_g1

0xd965,	// (0x000b77f2) main_cset_text_pane_t1

0xd973,	// (0x000b7800) main_cset_text_pane_t2

0xd981,	// (0x000b780e) main_cset_text_pane_t3

0xd98f,	// (0x000b781c) main_cset_text_pane_t4

0xd99d,	// (0x000b782a) main_cset_text_pane_t5

0xd9ab,	// (0x000b7838) main_cset_text_pane_t6

0xd9b9,	// (0x000b7846) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x000b98d2) main_cset_text_pane_t

0x93f2,	// (0x000b327f) main_cam4_burst_pane

0x93f2,	// (0x000b327f) main_cam5_pane

0x601e,	// (0x000afeab) bg_button_pane_cp019

0x6027,	// (0x000afeb4) bg_button_pane_cp020

0xd809,	// (0x000b7696) main_cset_slider_pane_g7_ParamLimits

0xd809,	// (0x000b7696) main_cset_slider_pane_g7

0xd815,	// (0x000b76a2) main_cset_slider_pane_g8_ParamLimits

0xd815,	// (0x000b76a2) main_cset_slider_pane_g8

0x617e,	// (0x000b000b) main_cset_slider_pane_g9_ParamLimits

0x617e,	// (0x000b000b) main_cset_slider_pane_g9

0x618a,	// (0x000b0017) main_cset_slider_pane_g10_ParamLimits

0x618a,	// (0x000b0017) main_cset_slider_pane_g10

0x6196,	// (0x000b0023) main_cset_slider_pane_g11_ParamLimits

0x6196,	// (0x000b0023) main_cset_slider_pane_g11

0x61a2,	// (0x000b002f) main_cset_slider_pane_g12_ParamLimits

0x61a2,	// (0x000b002f) main_cset_slider_pane_g12

0x61ae,	// (0x000b003b) main_cset_slider_pane_g13_ParamLimits

0x61ae,	// (0x000b003b) main_cset_slider_pane_g13

0x61ba,	// (0x000b0047) main_cset_slider_pane_g14_ParamLimits

0x61ba,	// (0x000b0047) main_cset_slider_pane_g14

0x61c6,	// (0x000b0053) main_cset_slider_pane_g15_ParamLimits

0x61c6,	// (0x000b0053) main_cset_slider_pane_g15

0xd873,	// (0x000b7700) main_cset_slider_pane_t14_ParamLimits

0xd873,	// (0x000b7700) main_cset_slider_pane_t14

0xd8ac,	// (0x000b7739) main_cset_slider_pane_t15_ParamLimits

0xd8ac,	// (0x000b7739) main_cset_slider_pane_t15

0x686c,	// (0x000b06f9) aid_cam4_burst_size_cell_ParamLimits

0x686c,	// (0x000b06f9) aid_cam4_burst_size_cell

0x688c,	// (0x000b0719) grid_cam4_burst_pane_ParamLimits

0x688c,	// (0x000b0719) grid_cam4_burst_pane

0x68c4,	// (0x000b0751) linegrid_cam4_burst_pane_ParamLimits

0x68c4,	// (0x000b0751) linegrid_cam4_burst_pane

0xd9c7,	// (0x000b7854) scroll_pane_cp30_ParamLimits

0xd9c7,	// (0x000b7854) scroll_pane_cp30

0x68e8,	// (0x000b0775) cell_cam4_burst_pane_ParamLimits

0x68e8,	// (0x000b0775) cell_cam4_burst_pane

0xd9d3,	// (0x000b7860) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9d3,	// (0x000b7860) linegrid_cam4_burst_pane_g1

0x6935,	// (0x000b07c2) linegrid_cam4_burst_pane_g2_ParamLimits

0x6935,	// (0x000b07c2) linegrid_cam4_burst_pane_g2

0xd9e0,	// (0x000b786d) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9e0,	// (0x000b786d) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x000b98e1) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x000b98e1) linegrid_cam4_burst_pane_g

0x6946,	// (0x000b07d3) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6946,	// (0x000b07d3) linegrid_cam4_burst_pane_g3_copy1

0xd9ed,	// (0x000b787a) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9ed,	// (0x000b787a) linegrid_cam4_burst_pane_g4

0x6960,	// (0x000b07ed) linegrid_cam4_burst_pane_g5_ParamLimits

0x6960,	// (0x000b07ed) linegrid_cam4_burst_pane_g5

0x6971,	// (0x000b07fe) linegrid_cam4_burst_pane_g6_ParamLimits

0x6971,	// (0x000b07fe) linegrid_cam4_burst_pane_g6

0xd9fa,	// (0x000b7887) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9fa,	// (0x000b7887) linegrid_cam4_burst_pane_g7

0x6988,	// (0x000b0815) cell_cam4_burst_pane_g1

0xda13,	// (0x000b78a0) main_cam5_pane_t1_ParamLimits

0xda13,	// (0x000b78a0) main_cam5_pane_t1

0xda25,	// (0x000b78b2) main_cam5_pane_t2_ParamLimits

0xda25,	// (0x000b78b2) main_cam5_pane_t2

0xda37,	// (0x000b78c4) main_cam5_pane_t3_ParamLimits

0xda37,	// (0x000b78c4) main_cam5_pane_t3

0xda49,	// (0x000b78d6) main_cam5_pane_t4_ParamLimits

0xda49,	// (0x000b78d6) main_cam5_pane_t4

0xda61,	// (0x000b78ee) main_cam5_pane_t5_ParamLimits

0xda61,	// (0x000b78ee) main_cam5_pane_t5

0xda75,	// (0x000b7902) main_cam5_pane_t6_ParamLimits

0xda75,	// (0x000b7902) main_cam5_pane_t6

0xda89,	// (0x000b7916) main_cam5_pane_t7_ParamLimits

0xda89,	// (0x000b7916) main_cam5_pane_t7

0xda9b,	// (0x000b7928) main_cam5_pane_t8_ParamLimits

0xda9b,	// (0x000b7928) main_cam5_pane_t8

0xdab7,	// (0x000b7944) main_cam5_pane_t9_ParamLimits

0xdab7,	// (0x000b7944) main_cam5_pane_t9

0xdac9,	// (0x000b7956) main_cam5_pane_t10_ParamLimits

0xdac9,	// (0x000b7956) main_cam5_pane_t10

0xdadb,	// (0x000b7968) main_cam5_pane_t11_ParamLimits

0xdadb,	// (0x000b7968) main_cam5_pane_t11

0xdaed,	// (0x000b797a) main_cam5_pane_t12_ParamLimits

0xdaed,	// (0x000b797a) main_cam5_pane_t12

0xdb02,	// (0x000b798f) main_cam5_pane_t13_ParamLimits

0xdb02,	// (0x000b798f) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x000b98ed) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x000b98ed) main_cam5_pane_t

0x0395,	// (0x000aa222) popup_scut_keymap_window_ParamLimits

0x0395,	// (0x000aa222) popup_scut_keymap_window

0x699b,	// (0x000b0828) aid_size_cell_brow_shortcut

0xa9bb,	// (0x000b4848) bg_popup_window_pane_cp010

0x69a7,	// (0x000b0834) grid_scut_pane

0x69b3,	// (0x000b0840) cell_scut_pane_ParamLimits

0x69b3,	// (0x000b0840) cell_scut_pane

0x69ca,	// (0x000b0857) cell_scut_pane_g1

0xdb1f,	// (0x000b79ac) cell_scut_pane_t1

0xdb2e,	// (0x000b79bb) cell_scut_pane_t2

0x69d3,	// (0x000b0860) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x000b9908) cell_scut_pane_t

0x46e3,	// (0x000ae570) main_mup3_pane_g8_ParamLimits

0x46e3,	// (0x000ae570) main_mup3_pane_g8

0x5b70,	// (0x000af9fd) area_vitu2_query_pane_ParamLimits

0x5b70,	// (0x000af9fd) area_vitu2_query_pane

0x6714,	// (0x000b05a1) input_focus_pane_cp08

0xdb3d,	// (0x000b79ca) area_vitu2_query_pane_g1

0x69e1,	// (0x000b086e) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x000b990f) area_vitu2_query_pane_g

0x69f2,	// (0x000b087f) area_vitu2_query_pane_t1_ParamLimits

0x69f2,	// (0x000b087f) area_vitu2_query_pane_t1

0x6a06,	// (0x000b0893) area_vitu2_query_pane_t2_ParamLimits

0x6a06,	// (0x000b0893) area_vitu2_query_pane_t2

0x6a1a,	// (0x000b08a7) area_vitu2_query_pane_t3_ParamLimits

0x6a1a,	// (0x000b08a7) area_vitu2_query_pane_t3

0xa54d,	// (0x000b43da) area_vitu2_query_pane_t4_ParamLimits

0xa54d,	// (0x000b43da) area_vitu2_query_pane_t4

0xa575,	// (0x000b4402) area_vitu2_query_pane_t5_ParamLimits

0xa575,	// (0x000b4402) area_vitu2_query_pane_t5

0xa59d,	// (0x000b442a) area_vitu2_query_pane_t6_ParamLimits

0xa59d,	// (0x000b442a) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x000b9914) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x000b9914) area_vitu2_query_pane_t

0x6a42,	// (0x000b08cf) bg_button_pane_cp018

0x6a50,	// (0x000b08dd) bg_button_pane_cp021

0x6a5c,	// (0x000b08e9) bg_button_pane_cp022

0x6a6d,	// (0x000b08fa) input_focus_pane_cp09

0xb23d,	// (0x000b50ca) aid_size_touch_mv_arrow_left

0xb268,	// (0x000b50f5) aid_size_touch_mv_arrow_right

0xd821,	// (0x000b76ae) main_cset_slider_pane_g16_ParamLimits

0xd821,	// (0x000b76ae) main_cset_slider_pane_g16

0xd82d,	// (0x000b76ba) main_cset_slider_pane_g17_ParamLimits

0xd82d,	// (0x000b76ba) main_cset_slider_pane_g17

0x6988,	// (0x000b0815) cell_cam4_burst_pane_g1_ParamLimits

0x936c,	// (0x000b31f9) compa_mode_pane

0x63dc,	// (0x000b0269) popup_vtel_slider_window_g3_ParamLimits

0x63dc,	// (0x000b0269) popup_vtel_slider_window_g3

0x63f3,	// (0x000b0280) popup_vtel_slider_window_g4_ParamLimits

0x63f3,	// (0x000b0280) popup_vtel_slider_window_g4

0x640a,	// (0x000b0297) popup_vtel_slider_window_t1_ParamLimits

0x640a,	// (0x000b0297) popup_vtel_slider_window_t1

0x93f2,	// (0x000b327f) main_cl_pane

0x990f,	// (0x000b379c) popup_imed_adjust2_window_ParamLimits

0xc859,	// (0x000b66e6) bg_tb_trans_pane_cp05_ParamLimits

0xd17b,	// (0x000b7008) popup_imed_adjust2_window_g1_ParamLimits

0xd18a,	// (0x000b7017) popup_imed_adjust2_window_g2_ParamLimits

0xd18a,	// (0x000b7017) popup_imed_adjust2_window_g2

0xd196,	// (0x000b7023) popup_imed_adjust2_window_g3_ParamLimits

0xd196,	// (0x000b7023) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x000b967f) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x000b967f) popup_imed_adjust2_window_g

0xd1a2,	// (0x000b702f) popup_imed_adjust2_window_t1_ParamLimits

0xd1ba,	// (0x000b7047) slider_imed_adjust_pane_ParamLimits

0xd1ce,	// (0x000b705b) slider_imed_adjust_pane_g1_ParamLimits

0xd1de,	// (0x000b706b) slider_imed_adjust_pane_g2_ParamLimits

0xd1ee,	// (0x000b707b) slider_imed_adjust_pane_g3_ParamLimits

0xd1ff,	// (0x000b708c) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x000b9686) slider_imed_adjust_pane_g_ParamLimits

0x58f9,	// (0x000af786) aid_touch_area_cam4_ParamLimits

0x58f9,	// (0x000af786) aid_touch_area_cam4

0x9c83,	// (0x000b3b10) battery_pane_cp01

0x59c8,	// (0x000af855) main_camera4_pane_g6_ParamLimits

0x59c8,	// (0x000af855) main_camera4_pane_g6

0x59f2,	// (0x000af87f) main_camera4_pane_t2_ParamLimits

0x59f2,	// (0x000af87f) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x000b9789) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x000b9789) main_camera4_pane_t

0x5a27,	// (0x000af8b4) aid_touch_area_vid4_ParamLimits

0x5a27,	// (0x000af8b4) aid_touch_area_vid4

0x5a7b,	// (0x000af908) main_video4_pane_g5_ParamLimits

0x5a7b,	// (0x000af908) main_video4_pane_g5

0x5aa0,	// (0x000af92d) vid4_progress_pane_ParamLimits

0x5aa0,	// (0x000af92d) vid4_progress_pane

0xd839,	// (0x000b76c6) main_cset_slider_pane_g18_ParamLimits

0xd839,	// (0x000b76c6) main_cset_slider_pane_g18

0xda07,	// (0x000b7894) cell_cam4_burst_pane_g2_ParamLimits

0xda07,	// (0x000b7894) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x000b98e8) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x000b98e8) cell_cam4_burst_pane_g

0xa265,	// (0x000b40f2) bg_cl_pane_ParamLimits

0xa265,	// (0x000b40f2) bg_cl_pane

0x6a7e,	// (0x000b090b) cl_header_pane_ParamLimits

0x6a7e,	// (0x000b090b) cl_header_pane

0x6a92,	// (0x000b091f) cl_listscroll_pane_ParamLimits

0x6a92,	// (0x000b091f) cl_listscroll_pane

0xdb49,	// (0x000b79d6) bg_cl_pane_g1

0xdb51,	// (0x000b79de) bg_cl_pane_g2

0xdb59,	// (0x000b79e6) bg_cl_pane_g3

0xdb61,	// (0x000b79ee) bg_cl_pane_g4

0xdb69,	// (0x000b79f6) bg_cl_pane_g5

0xdb71,	// (0x000b79fe) bg_cl_pane_g6

0xdb79,	// (0x000b7a06) bg_cl_pane_g7

0xdb81,	// (0x000b7a0e) bg_cl_pane_g8

0xdb89,	// (0x000b7a16) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x000b9923) bg_cl_pane_g

0x6aa2,	// (0x000b092f) aid_height_cl_leading_ParamLimits

0x6aa2,	// (0x000b092f) aid_height_cl_leading

0x6aae,	// (0x000b093b) aid_height_cl_text_ParamLimits

0x6aae,	// (0x000b093b) aid_height_cl_text

0xa4ae,	// (0x000b433b) bg_cl_header_pane_ParamLimits

0xa4ae,	// (0x000b433b) bg_cl_header_pane

0x6acd,	// (0x000b095a) cl_header_pane_g1_ParamLimits

0x6acd,	// (0x000b095a) cl_header_pane_g1

0x6ae3,	// (0x000b0970) cl_header_pane_t1_ParamLimits

0x6ae3,	// (0x000b0970) cl_header_pane_t1

0xdb91,	// (0x000b7a1e) cl_list_pane

0xd7f4,	// (0x000b7681) hc_scroll_pane_cp01

0xabf4,	// (0x000b4a81) bg_cl_header_pane_g1

0xd6da,	// (0x000b7567) bg_cl_header_pane_g2

0xac14,	// (0x000b4aa1) bg_cl_header_pane_g3

0xd6ea,	// (0x000b7577) bg_cl_header_pane_g4

0xd6e2,	// (0x000b756f) bg_cl_header_pane_g5

0xd916,	// (0x000b77a3) bg_cl_header_pane_g6

0xd702,	// (0x000b758f) bg_cl_header_pane_g7

0xd70a,	// (0x000b7597) bg_cl_header_pane_g8

0xd6fa,	// (0x000b7587) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x000b9936) bg_cl_header_pane_g

0x6afc,	// (0x000b0989) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6afc,	// (0x000b0989) hc_cl_list_double_graphic_heading_pane

0x6b0d,	// (0x000b099a) hc_cl_list_single_graphic_pane_ParamLimits

0x6b0d,	// (0x000b099a) hc_cl_list_single_graphic_pane

0x6b26,	// (0x000b09b3) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6b26,	// (0x000b09b3) hc_cl_list_single_graphic_pane_g1

0x6b32,	// (0x000b09bf) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6b32,	// (0x000b09bf) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x000b9949) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x000b9949) hc_cl_list_single_graphic_pane_g

0x6b46,	// (0x000b09d3) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6b46,	// (0x000b09d3) hc_cl_list_single_graphic_pane_t1

0x6b26,	// (0x000b09b3) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6b26,	// (0x000b09b3) hc_cl_list_double_graphic_heading_pane_g1

0x6b5b,	// (0x000b09e8) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6b5b,	// (0x000b09e8) hc_cl_list_double_graphic_heading_pane_g2

0x6b6f,	// (0x000b09fc) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6b6f,	// (0x000b09fc) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x000b994e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x000b994e) hc_cl_list_double_graphic_heading_pane_g

0x6b83,	// (0x000b0a10) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6b83,	// (0x000b0a10) hc_cl_list_double_graphic_heading_pane_t1

0x6b98,	// (0x000b0a25) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6b98,	// (0x000b0a25) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x000b9955) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x000b9955) hc_cl_list_double_graphic_heading_pane_t

0x9e0d,	// (0x000b3c9a) vid4_progress_pane_g1

0x9e1d,	// (0x000b3caa) vid4_progress_pane_g2

0x6bad,	// (0x000b0a3a) vid4_progress_pane_g3

0x9e2d,	// (0x000b3cba) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x000b995a) vid4_progress_pane_g

0x6bbf,	// (0x000b0a4c) vid4_progress_pane_t1

0x9e45,	// (0x000b3cd2) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x000b9965) vid4_progress_pane_t

0x6bd5,	// (0x000b0a62) wait_bar_pane_cp07

0xca54,	// (0x000b68e1) blid_firmament_pane_ParamLimits

0xca97,	// (0x000b6924) popup_blid_sat_info2_window_g1

0xcac7,	// (0x000b6954) popup_blid_sat_info2_window_t3

0xcad5,	// (0x000b6962) popup_blid_sat_info2_window_t4

0xcae3,	// (0x000b6970) popup_blid_sat_info2_window_t5

0xcaf1,	// (0x000b697e) popup_blid_sat_info2_window_t6

0xcb01,	// (0x000b698e) popup_blid_sat_info2_window_t7

0xcb0f,	// (0x000b699c) popup_blid_sat_info2_window_t8

0xcb1d,	// (0x000b69aa) popup_blid_sat_info2_window_t9

0xcb2b,	// (0x000b69b8) popup_blid_sat_info2_window_t10

0xcbed,	// (0x000b6a7a) aid_firma_cardinal_ParamLimits

0xcc01,	// (0x000b6a8e) blid_firmament_pane_t1_ParamLimits

0xcc18,	// (0x000b6aa5) blid_firmament_pane_t2_ParamLimits

0xcc2f,	// (0x000b6abc) blid_firmament_pane_t3_ParamLimits

0xcc46,	// (0x000b6ad3) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x000b9573) blid_firmament_pane_t_ParamLimits

0xcc5d,	// (0x000b6aea) blid_sat_info_pane_ParamLimits

0x93e4,	// (0x000b3271) main_cam_set_pane_ParamLimits

0x4fa2,	// (0x000aee2f) aid_size_cell_colour_35_ParamLimits

0x4fc2,	// (0x000aee4f) aid_size_cell_colour_112_ParamLimits

0x4fe2,	// (0x000aee6f) aid_size_cell_effect_ParamLimits

0xc859,	// (0x000b66e6) bg_tb_trans_pane_cp02_ParamLimits

0xae5c,	// (0x000b4ce9) heading_imed_pane_ParamLimits

0x5002,	// (0x000aee8f) listscroll_imed_pane_ParamLimits

0xbe3f,	// (0x000b5ccc) popup_call2_audio_first_window_g5_ParamLimits

0xbe3f,	// (0x000b5ccc) popup_call2_audio_first_window_g5

0x55a0,	// (0x000af42d) aid_size_touch_image3_arrow_left_ParamLimits

0x55a0,	// (0x000af42d) aid_size_touch_image3_arrow_left

0x55cc,	// (0x000af459) aid_size_touch_image3_arrow_right_ParamLimits

0x55cc,	// (0x000af459) aid_size_touch_image3_arrow_right

0x9e5a,	// (0x000b3ce7) vid4_progress_pane_t3

0x5317,	// (0x000af1a4) main_hwr_training_symbol_option_pane_ParamLimits

0x5317,	// (0x000af1a4) main_hwr_training_symbol_option_pane

0xd468,	// (0x000b72f5) popup_hwr_training_preview_window_ParamLimits

0xd468,	// (0x000b72f5) popup_hwr_training_preview_window

0x5337,	// (0x000af1c4) hwr_training_navi_pane_g5_ParamLimits

0x5337,	// (0x000af1c4) hwr_training_navi_pane_g5

0xd6c8,	// (0x000b7555) popup_char_count_window

0x93e4,	// (0x000b3271) bg_popup_sub_pane_cp20_ParamLimits

0x6526,	// (0x000b03b3) list_vitu2_match_list_pane_ParamLimits

0x6535,	// (0x000b03c2) vitu2_page_scroll_pane_ParamLimits

0x6535,	// (0x000b03c2) vitu2_page_scroll_pane

0xdb9a,	// (0x000b7a27) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb9a,	// (0x000b7a27) list_single_hwr_training_symbol_option_pane

0xdbad,	// (0x000b7a3a) list_single_hwr_training_symbol_option_pane_g1

0xdbb5,	// (0x000b7a42) list_single_hwr_training_symbol_option_pane_t1

0xdbc3,	// (0x000b7a50) bg_button_pane_cp023

0xdbcc,	// (0x000b7a59) bg_button_pane_cp024

0x6c1e,	// (0x000b0aab) vitu2_page_scroll_pane_g1

0x6c26,	// (0x000b0ab3) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x000b996c) vitu2_page_scroll_pane_g

0x6c2e,	// (0x000b0abb) vitu2_page_scroll_pane_t1

0xcc96,	// (0x000b6b23) popup_char_count_window_g1

0xdbff,	// (0x000b7a8c) popup_char_count_window_g2

0xdc08,	// (0x000b7a95) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x000b9971) popup_char_count_window_g

0xdc11,	// (0x000b7a9e) popup_char_count_window_t1

0x93f2,	// (0x000b327f) main_vded2_pane

0xd167,	// (0x000b6ff4) aid_size_cell_imed_line

0xd171,	// (0x000b6ffe) grid_imed_line_width_pane

0x9d41,	// (0x000b3bce) vid4_indicators_pane_g4

0xdc1f,	// (0x000b7aac) cell_imed_line_width_pane_ParamLimits

0xdc1f,	// (0x000b7aac) cell_imed_line_width_pane

0xdc33,	// (0x000b7ac0) cell_imed_line_width_pane_g1

0xd5c5,	// (0x000b7452) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x000b9978) cell_imed_line_width_pane_g

0x6c3d,	// (0x000b0aca) main_vded2_pane_g1_ParamLimits

0x6c3d,	// (0x000b0aca) main_vded2_pane_g1

0x6c53,	// (0x000b0ae0) main_vded2_pane_g2_ParamLimits

0x6c53,	// (0x000b0ae0) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x000b997d) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x000b997d) main_vded2_pane_g

0x6c65,	// (0x000b0af2) vded2_slider_pane_ParamLimits

0x6c65,	// (0x000b0af2) vded2_slider_pane

0x6c75,	// (0x000b0b02) aid_size_touch_vded2_end

0x6c7f,	// (0x000b0b0c) aid_size_touch_vded2_playhead

0xdc3c,	// (0x000b7ac9) aid_size_touch_vded2_start

0xdc44,	// (0x000b7ad1) vded2_slider_bg_pane

0xdc4d,	// (0x000b7ada) vded2_slider_pane_g1

0xdc56,	// (0x000b7ae3) vded2_slider_pane_g2

0x6c89,	// (0x000b0b16) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x000b9982) vded2_slider_pane_g

0xdc5e,	// (0x000b7aeb) vded2_slider_bg_pane_g1

0xdc67,	// (0x000b7af4) vded2_slider_bg_pane_g2

0xdc70,	// (0x000b7afd) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x000b9989) vded2_slider_bg_pane_g

0x2d2c,	// (0x000acbb9) aid_postcard_touch_down_pane_ParamLimits

0x2d2c,	// (0x000acbb9) aid_postcard_touch_down_pane

0x2d42,	// (0x000acbcf) aid_postcard_touch_up_pane_ParamLimits

0x2d42,	// (0x000acbcf) aid_postcard_touch_up_pane

0x93f2,	// (0x000b327f) main_blid2_pane

0x98f5,	// (0x000b3782) popup_blid2_search_window

0x936c,	// (0x000b31f9) blid2_gps_pane

0x936c,	// (0x000b31f9) blid2_navig_pane

0x936c,	// (0x000b31f9) blid2_search_pane

0x936c,	// (0x000b31f9) blid2_tripm_pane

0x6c94,	// (0x000b0b21) blid2_search_pane_g1_ParamLimits

0x6c94,	// (0x000b0b21) blid2_search_pane_g1

0x6cac,	// (0x000b0b39) blid2_search_pane_t1_ParamLimits

0x6cac,	// (0x000b0b39) blid2_search_pane_t1

0x6cbe,	// (0x000b0b4b) aid_size_cell_blid2_gps_ParamLimits

0x6cbe,	// (0x000b0b4b) aid_size_cell_blid2_gps

0x6cd6,	// (0x000b0b63) blid2_gps_pane_g1_ParamLimits

0x6cd6,	// (0x000b0b63) blid2_gps_pane_g1

0x6cea,	// (0x000b0b77) grid_blid2_satellite_pane_ParamLimits

0x6cea,	// (0x000b0b77) grid_blid2_satellite_pane

0x6d04,	// (0x000b0b91) blid2_navig_pane_g1_ParamLimits

0x6d04,	// (0x000b0b91) blid2_navig_pane_g1

0x6d10,	// (0x000b0b9d) blid2_navig_pane_t1_ParamLimits

0x6d10,	// (0x000b0b9d) blid2_navig_pane_t1

0x6d2b,	// (0x000b0bb8) blid2_navig_pane_t2_ParamLimits

0x6d2b,	// (0x000b0bb8) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x000b9990) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x000b9990) blid2_navig_pane_t

0x6d46,	// (0x000b0bd3) blid2_navig_ring_pane_ParamLimits

0x6d46,	// (0x000b0bd3) blid2_navig_ring_pane

0x6d5f,	// (0x000b0bec) blid2_speed_pane_ParamLimits

0x6d5f,	// (0x000b0bec) blid2_speed_pane

0x6d6b,	// (0x000b0bf8) blid2_tripm_pane_g1_ParamLimits

0x6d6b,	// (0x000b0bf8) blid2_tripm_pane_g1

0x6d86,	// (0x000b0c13) blid2_tripm_pane_g2_ParamLimits

0x6d86,	// (0x000b0c13) blid2_tripm_pane_g2

0x6d9a,	// (0x000b0c27) blid2_tripm_pane_g3_ParamLimits

0x6d9a,	// (0x000b0c27) blid2_tripm_pane_g3

0x6dae,	// (0x000b0c3b) blid2_tripm_pane_g4_ParamLimits

0x6dae,	// (0x000b0c3b) blid2_tripm_pane_g4

0x6dc2,	// (0x000b0c4f) blid2_tripm_pane_g5_ParamLimits

0x6dc2,	// (0x000b0c4f) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x000b9995) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x000b9995) blid2_tripm_pane_g

0x6de8,	// (0x000b0c75) blid2_tripm_pane_t1_ParamLimits

0x6de8,	// (0x000b0c75) blid2_tripm_pane_t1

0x6e03,	// (0x000b0c90) blid2_tripm_pane_t2_ParamLimits

0x6e03,	// (0x000b0c90) blid2_tripm_pane_t2

0x6e1c,	// (0x000b0ca9) blid2_tripm_pane_t3_ParamLimits

0x6e1c,	// (0x000b0ca9) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x000b99a2) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x000b99a2) blid2_tripm_pane_t

0x6e63,	// (0x000b0cf0) cell_blid2_satellite_pane_ParamLimits

0x6e63,	// (0x000b0cf0) cell_blid2_satellite_pane

0x6e81,	// (0x000b0d0e) cell_blid2_satellite_pane_g1

0xdc79,	// (0x000b7b06) cell_blid2_satellite_pane_t1

0xcc6d,	// (0x000b6afa) blid2_speed_pane_g1

0xdc87,	// (0x000b7b14) blid2_speed_pane_t1

0xdc95,	// (0x000b7b22) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x000b99ab) blid2_speed_pane_t

0xcc6d,	// (0x000b6afa) blid2_navig_ring_pane_g1

0x6e8a,	// (0x000b0d17) blid2_navig_ring_pane_g2

0x6e92,	// (0x000b0d1f) blid2_navig_ring_pane_g3

0x6e9a,	// (0x000b0d27) blid2_navig_ring_pane_g4

0x6ea2,	// (0x000b0d2f) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x000b99b0) blid2_navig_ring_pane_g

0x936c,	// (0x000b31f9) bg_popup_window_pane_cp011

0xdca3,	// (0x000b7b30) popup_blid2_search_window_g1

0xdcab,	// (0x000b7b38) popup_blid2_search_window_t1

0xdcb9,	// (0x000b7b46) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x000b99bb) popup_blid2_search_window_t

0xab03,	// (0x000b4990) main_browser_pane_g1

0xa265,	// (0x000b40f2) main_browser_pane_ParamLimits

0x93e4,	// (0x000b3271) bg_button_pane_cp011_ParamLimits

0x5db7,	// (0x000afc44) cell_vitu2_function_pane_g1_ParamLimits

0xc859,	// (0x000b66e6) bg_popup_sub_pane_cp22_ParamLimits

0x6714,	// (0x000b05a1) input_focus_pane_cp08_ParamLimits

0x672b,	// (0x000b05b8) popup_vitu2_query_button_pane_ParamLimits

0x672b,	// (0x000b05b8) popup_vitu2_query_button_pane

0x673c,	// (0x000b05c9) popup_vitu2_query_input_button_pane

0xd951,	// (0x000b77de) popup_vitu2_query_window_g1_ParamLimits

0x6746,	// (0x000b05d3) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x000b98bc) popup_vitu2_query_window_g_ParamLimits

0x936c,	// (0x000b31f9) bg_button_pane_cp026

0x6eaa,	// (0x000b0d37) popup_vitu2_query_input_button_pane_g1

0x936c,	// (0x000b31f9) bg_button_pane_cp025

0xdcc7,	// (0x000b7b54) popup_vitu2_query_button_pane_t1

0x43d5,	// (0x000ae262) main_mp3_pane_t6

0x43e3,	// (0x000ae270) popup_slider_window_cp01

0x9cad,	// (0x000b3b3a) cam4_battery_pane

0x9d00,	// (0x000b3b8d) cam4_battery_pane_cp02

0x9e05,	// (0x000b3c92) cam4_battery_pane_cp01

0x9e05,	// (0x000b3c92) cam4_battery_pane_cp03

0xd5cd,	// (0x000b745a) cam4_battery_pane_g1

0xcc6d,	// (0x000b6afa) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x000b99c0) cam4_battery_pane_g

0xcb39,	// (0x000b69c6) popup_blid_sat_info2_window_t11

0xb23d,	// (0x000b50ca) aid_size_touch_mv_arrow_left_ParamLimits

0xb268,	// (0x000b50f5) aid_size_touch_mv_arrow_right_ParamLimits

0xb2c6,	// (0x000b5153) navi_pane_g1_ParamLimits

0xb2d2,	// (0x000b515f) navi_pane_g2_ParamLimits

0xb300,	// (0x000b518d) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000b9272) navi_pane_g_ParamLimits

0x27e4,	// (0x000ac671) navi_pane_mv_t1_ParamLimits

0x500e,	// (0x000aee9b) grid_imed_effect_pane_ParamLimits

0x13bc,	// (0x000ab249) aid_placing_vt_slider_lsc

0xaa52,	// (0x000b48df) aid_placing_vt_slider_prt

0xa4ae,	// (0x000b433b) bg_tb_trans_pane_cp01_ParamLimits

0xcddb,	// (0x000b6c68) popup_image_details_window_g1_ParamLimits

0xcdee,	// (0x000b6c7b) popup_image_details_window_g2_ParamLimits

0xce03,	// (0x000b6c90) popup_image_details_window_g3_ParamLimits

0xce03,	// (0x000b6c90) popup_image_details_window_g3

0xf72b,	// (0x000b95b8) popup_image_details_window_g_ParamLimits

0xce17,	// (0x000b6ca4) popup_image_details_window_t1_ParamLimits

0xce29,	// (0x000b6cb6) popup_image_details_window_t2_ParamLimits

0xce42,	// (0x000b6ccf) popup_image_details_window_t3_ParamLimits

0xce56,	// (0x000b6ce3) popup_image_details_window_t4_ParamLimits

0xce71,	// (0x000b6cfe) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x000b95bf) popup_image_details_window_t_ParamLimits

0x6aba,	// (0x000b0947) cl_header_name_pane_ParamLimits

0x6aba,	// (0x000b0947) cl_header_name_pane

0x6eb2,	// (0x000b0d3f) cl_header_name_pane_t1_ParamLimits

0x6eb2,	// (0x000b0d3f) cl_header_name_pane_t1

0x6ed3,	// (0x000b0d60) cl_header_name_pane_t2_ParamLimits

0x6ed3,	// (0x000b0d60) cl_header_name_pane_t2

0x6f15,	// (0x000b0da2) cl_header_name_pane_t3_ParamLimits

0x6f15,	// (0x000b0da2) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x000b99c5) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x000b99c5) cl_header_name_pane_t

0xb38f,	// (0x000b521c) navi_pane_mv_g2_ParamLimits

0xd6a2,	// (0x000b752f) field_vitu2_entry_pane_g1_ParamLimits

0xd6ae,	// (0x000b753b) field_vitu2_entry_pane_g2_ParamLimits

0xd6ba,	// (0x000b7547) field_vitu2_entry_pane_g3_ParamLimits

0xd6ba,	// (0x000b7547) field_vitu2_entry_pane_g3

0xf92e,	// (0x000b97bb) field_vitu2_entry_pane_g_ParamLimits

0x9d74,	// (0x000b3c01) cell_vitu2_itu_pane_g1_ParamLimits

0x5d4b,	// (0x000afbd8) cell_vitu2_itu_pane_g2_ParamLimits

0x5d4b,	// (0x000afbd8) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x000b97c7) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x000b97c7) cell_vitu2_itu_pane_g

0x93e4,	// (0x000b3271) bg_vkb2_func_pane_cp05_ParamLimits

0x93e4,	// (0x000b3271) bg_vkb2_func_pane_cp05

0x93e4,	// (0x000b3271) bg_vkb2_func_pane_cp03

0x93e4,	// (0x000b3271) bg_vkb2_func_pane_cp04

0x93e4,	// (0x000b3271) bg_vkb2_func_pane_cp10_ParamLimits

0x93e4,	// (0x000b3271) bg_vkb2_func_pane_cp10

0x6a5c,	// (0x000b08e9) bg_vkb2_func_pane_cp08

0x6a42,	// (0x000b08cf) bg_vkb2_func_pane_cp06

0x6a50,	// (0x000b08dd) bg_vkb2_func_pane_cp07

0xdbd5,	// (0x000b7a62) bg_vkb2_func_pane_cp11_ParamLimits

0xdbd5,	// (0x000b7a62) bg_vkb2_func_pane_cp11

0xdbea,	// (0x000b7a77) bg_vkb2_func_pane_cp12_ParamLimits

0xdbea,	// (0x000b7a77) bg_vkb2_func_pane_cp12

0x936c,	// (0x000b31f9) bg_vkb2_func_pane_cp09

0xd6da,	// (0x000b7567) bg_vkb2_func_pane_g1

0xac14,	// (0x000b4aa1) bg_vkb2_func_pane_g2

0xd6e2,	// (0x000b756f) bg_vkb2_func_pane_g3

0xd6ea,	// (0x000b7577) bg_vkb2_func_pane_g4

0xd916,	// (0x000b77a3) bg_vkb2_func_pane_g5

0xd702,	// (0x000b758f) bg_vkb2_func_pane_g6

0xd70a,	// (0x000b7597) bg_vkb2_func_pane_g7

0xd6fa,	// (0x000b7587) bg_vkb2_func_pane_g8

0xabf4,	// (0x000b4a81) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x000b99cc) bg_vkb2_func_pane_g

0x6dd6,	// (0x000b0c63) blid2_tripm_pane_g6_ParamLimits

0x6dd6,	// (0x000b0c63) blid2_tripm_pane_g6

0xd520,	// (0x000b73ad) mp4_progress_pane_g1

0x6e4f,	// (0x000b0cdc) blid2_tripm_values_pane_ParamLimits

0x6e4f,	// (0x000b0cdc) blid2_tripm_values_pane

0x6f46,	// (0x000b0dd3) blid2_tripm_values_pane_t1

0x6f54,	// (0x000b0de1) blid2_tripm_values_pane_t2

0x6f62,	// (0x000b0def) blid2_tripm_values_pane_t3

0x6f70,	// (0x000b0dfd) blid2_tripm_values_pane_t4

0x6f7e,	// (0x000b0e0b) blid2_tripm_values_pane_t5

0x6f8c,	// (0x000b0e19) blid2_tripm_values_pane_t6

0x6f9a,	// (0x000b0e27) blid2_tripm_values_pane_t7

0x6fa8,	// (0x000b0e35) blid2_tripm_values_pane_t8

0x6fb6,	// (0x000b0e43) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x000b99df) blid2_tripm_values_pane_t

0x13fe,	// (0x000ab28b) call_video_pane_t1_ParamLimits

0x141c,	// (0x000ab2a9) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000b90fb) call_video_pane_t_ParamLimits

0x2caa,	// (0x000acb37) msg_header_pane_g1_ParamLimits

0xb589,	// (0x000b5416) msg_header_pane_g2_ParamLimits

0xb589,	// (0x000b5416) msg_header_pane_g2

0x0001,

0xf488,	// (0x000b9315) msg_header_pane_g_ParamLimits

0xf488,	// (0x000b9315) msg_header_pane_g

0xa265,	// (0x000b40f2) main_clock2_pane_ParamLimits

0x4d0b,	// (0x000aeb98) grid_clock2_toolbar_pane_ParamLimits

0x4d0b,	// (0x000aeb98) grid_clock2_toolbar_pane

0x4d0b,	// (0x000aeb98) listscroll_clock2_pane_ParamLimits

0x4d0b,	// (0x000aeb98) listscroll_clock2_pane

0x4e02,	// (0x000aec8f) main_clock2_pane_t3_ParamLimits

0x4e02,	// (0x000aec8f) main_clock2_pane_t3

0x4e26,	// (0x000aecb3) main_clock2_pane_t4_ParamLimits

0x4e26,	// (0x000aecb3) main_clock2_pane_t4

0xdcd5,	// (0x000b7b62) cell_clock2_toolbar_pane

0xdcdd,	// (0x000b7b6a) cell_clock2_toolbar_pane_cp01

0xdcdd,	// (0x000b7b6a) cell_clock2_toolbar_pane_cp02

0xdce5,	// (0x000b7b72) cell_clock2_toolbar_pane_cp03

0xdced,	// (0x000b7b7a) list_clock2_pane

0xb1c2,	// (0x000b504f) scroll_pane_cp10

0xdcf5,	// (0x000b7b82) list_single_clock2_pane_ParamLimits

0xdcf5,	// (0x000b7b82) list_single_clock2_pane

0xa9bb,	// (0x000b4848) list_highlight_pane_cp08

0xdd02,	// (0x000b7b8f) list_single_clock2_pane_t1

0xdd10,	// (0x000b7b9d) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x000b99f2) list_single_clock2_pane_t

0x936c,	// (0x000b31f9) bg_button_pane_cp10

0xdd1e,	// (0x000b7bab) cell_clock2_toolbar_pane_g1

0x2cb8,	// (0x000acb45) aid_main_viewer_pane_g1_ParamLimits

0x2cb8,	// (0x000acb45) aid_main_viewer_pane_g1

0x2cc6,	// (0x000acb53) aid_main_viewer_pane_g2_ParamLimits

0x2cc6,	// (0x000acb53) aid_main_viewer_pane_g2

0x2cd4,	// (0x000acb61) aid_main_viewer_pane_g3_ParamLimits

0x2cd4,	// (0x000acb61) aid_main_viewer_pane_g3

0x2ce3,	// (0x000acb70) aid_main_viewer_pane_g4_ParamLimits

0x2ce3,	// (0x000acb70) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000b9326) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000b9326) aid_main_viewer_pane_g

0x35eb,	// (0x000ad478) main_calc_pane_ParamLimits

0x3611,	// (0x000ad49e) main_dialer2_pane_ParamLimits

0x93f2,	// (0x000b327f) main_cam6_pane

0x93f2,	// (0x000b327f) main_vid6_pane

0x4d17,	// (0x000aeba4) listscroll_gen_pane_cp06_ParamLimits

0x4d17,	// (0x000aeba4) listscroll_gen_pane_cp06

0x4e49,	// (0x000aecd6) main_clock2_pane_t5_ParamLimits

0x4e49,	// (0x000aecd6) main_clock2_pane_t5

0x4ea3,	// (0x000aed30) aid_call2_pane_cp10_ParamLimits

0x4eb5,	// (0x000aed42) aid_call_pane_cp10_ParamLimits

0xb231,	// (0x000b50be) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb231,	// (0x000b50be) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4ec7,	// (0x000aed54) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4ec7,	// (0x000aed54) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb231,	// (0x000b50be) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x000b9674) popup_clock_analogue_window_cp10_g_ParamLimits

0x4ed9,	// (0x000aed66) popup_clock_analogue_window_cp10_t1_ParamLimits

0x554d,	// (0x000af3da) cell_dialer2_keypad_pane_g2_ParamLimits

0x554d,	// (0x000af3da) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x000b975a) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x000b975a) cell_dialer2_keypad_pane_g

0x5569,	// (0x000af3f6) cell_dialer2_keypad_pane_t1

0x60d1,	// (0x000aff5e) main_cset_text2_pane_ParamLimits

0x60d1,	// (0x000aff5e) main_cset_text2_pane

0xdb3d,	// (0x000b79ca) area_vitu2_query_pane_g1_ParamLimits

0x69e1,	// (0x000b086e) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x000b990f) area_vitu2_query_pane_g_ParamLimits

0xa5c5,	// (0x000b4452) area_vitu2_query_pane_t7_ParamLimits

0xa5c5,	// (0x000b4452) area_vitu2_query_pane_t7

0x6a42,	// (0x000b08cf) bg_button_pane_cp018_ParamLimits

0x6a50,	// (0x000b08dd) bg_button_pane_cp021_ParamLimits

0x6a5c,	// (0x000b08e9) bg_button_pane_cp022_ParamLimits

0x6a5c,	// (0x000b08e9) bg_vkb2_func_pane_cp08_ParamLimits

0x6a42,	// (0x000b08cf) bg_vkb2_func_pane_cp06_ParamLimits

0x6a50,	// (0x000b08dd) bg_vkb2_func_pane_cp07_ParamLimits

0x6a6d,	// (0x000b08fa) input_focus_pane_cp09_ParamLimits

0x9e70,	// (0x000b3cfd) cam6_autofocus_pane_ParamLimits

0x9e70,	// (0x000b3cfd) cam6_autofocus_pane

0x6fc4,	// (0x000b0e51) cam6_image_uncrop_pane_ParamLimits

0x6fc4,	// (0x000b0e51) cam6_image_uncrop_pane

0x6fd3,	// (0x000b0e60) cam6_indi_pane_ParamLimits

0x6fd3,	// (0x000b0e60) cam6_indi_pane

0x6fe9,	// (0x000b0e76) cam6_mode_pane_ParamLimits

0x6fe9,	// (0x000b0e76) cam6_mode_pane

0x6ffb,	// (0x000b0e88) cam6_timer_pane_ParamLimits

0x6ffb,	// (0x000b0e88) cam6_timer_pane

0x700b,	// (0x000b0e98) cam6_zoom_pane_ParamLimits

0x700b,	// (0x000b0e98) cam6_zoom_pane

0x7017,	// (0x000b0ea4) cam6_mode_pane_g1_ParamLimits

0x7017,	// (0x000b0ea4) cam6_mode_pane_g1

0x7027,	// (0x000b0eb4) cam6_mode_pane_g2_ParamLimits

0x7027,	// (0x000b0eb4) cam6_mode_pane_g2

0x7037,	// (0x000b0ec4) cam6_mode_pane_g3_ParamLimits

0x7037,	// (0x000b0ec4) cam6_mode_pane_g3

0x7047,	// (0x000b0ed4) cam6_mode_pane_g4_ParamLimits

0x7047,	// (0x000b0ed4) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x000b99f7) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x000b99f7) cam6_mode_pane_g

0xdd26,	// (0x000b7bb3) bg_tb_trans_pane_cp08_ParamLimits

0xdd26,	// (0x000b7bb3) bg_tb_trans_pane_cp08

0xdd34,	// (0x000b7bc1) cam6_battery_pane_ParamLimits

0xdd34,	// (0x000b7bc1) cam6_battery_pane

0xdd4a,	// (0x000b7bd7) cam6_indi_pane_g1_ParamLimits

0xdd4a,	// (0x000b7bd7) cam6_indi_pane_g1

0xdd5c,	// (0x000b7be9) cam6_indi_pane_g2_ParamLimits

0xdd5c,	// (0x000b7be9) cam6_indi_pane_g2

0xdd6e,	// (0x000b7bfb) cam6_indi_pane_g3_ParamLimits

0xdd6e,	// (0x000b7bfb) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x000b9a00) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x000b9a00) cam6_indi_pane_g

0xdd80,	// (0x000b7c0d) cam6_indi_pane_t1_ParamLimits

0xdd80,	// (0x000b7c0d) cam6_indi_pane_t1

0x7057,	// (0x000b0ee4) cam6_autofocus_pane_g1

0x705f,	// (0x000b0eec) cam6_autofocus_pane_g2

0x7067,	// (0x000b0ef4) cam6_autofocus_pane_g3

0x706f,	// (0x000b0efc) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x000b9a07) cam6_autofocus_pane_g

0xdda6,	// (0x000b7c33) cam6_timer_pane_g1

0xddae,	// (0x000b7c3b) cam6_timer_pane_t1

0xddbc,	// (0x000b7c49) cam6_zoom_cont_pane

0xddc4,	// (0x000b7c51) cam6_zoom_pane_g1

0xddcc,	// (0x000b7c59) cam6_zoom_pane_g2

0x7077,	// (0x000b0f04) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x000b9a10) cam6_zoom_pane_g

0xcc6d,	// (0x000b6afa) cam6_battery_pane_g1

0xcc6d,	// (0x000b6afa) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x000b957c) cam6_battery_pane_g

0xddd4,	// (0x000b7c61) cam6_zoom_cont_pane_g1

0xdddd,	// (0x000b7c6a) cam6_zoom_cont_pane_g2

0xdde6,	// (0x000b7c73) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x000b9a17) cam6_zoom_cont_pane_g

0x7094,	// (0x000b0f21) cam6_mode_pane_cp_ParamLimits

0x7094,	// (0x000b0f21) cam6_mode_pane_cp

0x70a6,	// (0x000b0f33) cam6_zoom_pane_cp_ParamLimits

0x70a6,	// (0x000b0f33) cam6_zoom_pane_cp

0x70b2,	// (0x000b0f3f) vid6_image_uncrop_cif_pane_ParamLimits

0x70b2,	// (0x000b0f3f) vid6_image_uncrop_cif_pane

0x70c2,	// (0x000b0f4f) vid6_image_uncrop_nhd_pane_ParamLimits

0x70c2,	// (0x000b0f4f) vid6_image_uncrop_nhd_pane

0x70d1,	// (0x000b0f5e) vid6_image_uncrop_vga_pane_ParamLimits

0x70d1,	// (0x000b0f5e) vid6_image_uncrop_vga_pane

0x70e0,	// (0x000b0f6d) vid6_image_uncrop_wvga_pane_ParamLimits

0x70e0,	// (0x000b0f6d) vid6_image_uncrop_wvga_pane

0x70ef,	// (0x000b0f7c) vid6_indi_pane_ParamLimits

0x70ef,	// (0x000b0f7c) vid6_indi_pane

0xdd26,	// (0x000b7bb3) bg_tb_trans_pane_cp09_ParamLimits

0xdd26,	// (0x000b7bb3) bg_tb_trans_pane_cp09

0xddfe,	// (0x000b7c8b) cam6_battery_pane_cp_ParamLimits

0xddfe,	// (0x000b7c8b) cam6_battery_pane_cp

0xde0a,	// (0x000b7c97) vid6_indi_pane_g1_ParamLimits

0xde0a,	// (0x000b7c97) vid6_indi_pane_g1

0xde1c,	// (0x000b7ca9) vid6_indi_pane_g2_ParamLimits

0xde1c,	// (0x000b7ca9) vid6_indi_pane_g2

0xde2e,	// (0x000b7cbb) vid6_indi_pane_g3_ParamLimits

0xde2e,	// (0x000b7cbb) vid6_indi_pane_g3

0xde43,	// (0x000b7cd0) vid6_indi_pane_g4_ParamLimits

0xde43,	// (0x000b7cd0) vid6_indi_pane_g4

0xde58,	// (0x000b7ce5) vid6_indi_pane_g5_ParamLimits

0xde58,	// (0x000b7ce5) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x000b9a1e) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x000b9a1e) vid6_indi_pane_g

0xde72,	// (0x000b7cff) vid6_indi_pane_t1_ParamLimits

0xde72,	// (0x000b7cff) vid6_indi_pane_t1

0xde88,	// (0x000b7d15) vid6_indi_pane_t2_ParamLimits

0xde88,	// (0x000b7d15) vid6_indi_pane_t2

0xdeb0,	// (0x000b7d3d) vid6_indi_pane_t3_ParamLimits

0xdeb0,	// (0x000b7d3d) vid6_indi_pane_t3

0xded8,	// (0x000b7d65) vid6_indi_pane_t4_ParamLimits

0xded8,	// (0x000b7d65) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x000b9a29) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x000b9a29) vid6_indi_pane_t

0xdefc,	// (0x000b7d89) wait_bar_pane_cp08

0x7107,	// (0x000b0f94) main_cset_text2_pane_t1_ParamLimits

0x7107,	// (0x000b0f94) main_cset_text2_pane_t1

0x707f,	// (0x000b0f0c) listscroll_gen_pane_cp06_t1_ParamLimits

0x707f,	// (0x000b0f0c) listscroll_gen_pane_cp06_t1

0x93f2,	// (0x000b327f) main_cam6_set_pane

0x9c9f,	// (0x000b3b2c) bg_tb_trans_pane_cp06_ParamLimits

0x9cb5,	// (0x000b3b42) cam4_indicators_pane_g1_ParamLimits

0x9cc6,	// (0x000b3b53) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x000b9797) cam4_indicators_pane_g_ParamLimits

0x9cde,	// (0x000b3b6b) cam4_indicators_pane_t1_ParamLimits

0x93e4,	// (0x000b3271) bg_tb_trans_pane_cp07_ParamLimits

0x9d08,	// (0x000b3b95) vid4_indicators_pane_g1_ParamLimits

0x9d1c,	// (0x000b3ba9) vid4_indicators_pane_g2_ParamLimits

0x9d30,	// (0x000b3bbd) vid4_indicators_pane_g3_ParamLimits

0x9d41,	// (0x000b3bce) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x000b97a9) vid4_indicators_pane_g_ParamLimits

0x9d5d,	// (0x000b3bea) vid4_indicators_pane_t1_ParamLimits

0x9e0d,	// (0x000b3c9a) vid4_progress_pane_g1_ParamLimits

0x9e1d,	// (0x000b3caa) vid4_progress_pane_g2_ParamLimits

0x6bad,	// (0x000b0a3a) vid4_progress_pane_g3_ParamLimits

0x9e2d,	// (0x000b3cba) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x000b995a) vid4_progress_pane_g_ParamLimits

0x6bbf,	// (0x000b0a4c) vid4_progress_pane_t1_ParamLimits

0x9e45,	// (0x000b3cd2) vid4_progress_pane_t2_ParamLimits

0x9e5a,	// (0x000b3ce7) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x000b9965) vid4_progress_pane_t_ParamLimits

0x6bd5,	// (0x000b0a62) wait_bar_pane_cp07_ParamLimits

0x7125,	// (0x000b0fb2) main_cam6_set_pane_g2_ParamLimits

0x7125,	// (0x000b0fb2) main_cam6_set_pane_g2

0x7149,	// (0x000b0fd6) main_cset6_listscroll_pane_ParamLimits

0x7149,	// (0x000b0fd6) main_cset6_listscroll_pane

0x7165,	// (0x000b0ff2) main_cset6_slider_pane_ParamLimits

0x7165,	// (0x000b0ff2) main_cset6_slider_pane

0x717b,	// (0x000b1008) main_cset6_text2_pane_ParamLimits

0x717b,	// (0x000b1008) main_cset6_text2_pane

0xdf0b,	// (0x000b7d98) main_cset6_text_pane

0xdf13,	// (0x000b7da0) main_cset_list_pane_copy1_ParamLimits

0xdf13,	// (0x000b7da0) main_cset_list_pane_copy1

0xdf23,	// (0x000b7db0) scroll_pane_cp028_copy1

0x7189,	// (0x000b1016) cset_list_set_pane_copy1

0x719b,	// (0x000b1028) aid_position_infowindow_above_copy1

0x71a3,	// (0x000b1030) aid_position_infowindow_below_copy1

0xa5f9,	// (0x000b4486) cset_list_set_pane_g1_copy1

0xa601,	// (0x000b448e) cset_list_set_pane_g3_copy1_ParamLimits

0xa601,	// (0x000b448e) cset_list_set_pane_g3_copy1

0xa610,	// (0x000b449d) cset_list_set_pane_t1_copy1_ParamLimits

0xa610,	// (0x000b449d) cset_list_set_pane_t1_copy1

0xa4ae,	// (0x000b433b) list_highlight_pane_cp021_copy1_ParamLimits

0xa4ae,	// (0x000b433b) list_highlight_pane_cp021_copy1

0xdf2c,	// (0x000b7db9) cset6_slider_pane_ParamLimits

0xdf2c,	// (0x000b7db9) cset6_slider_pane

0xdf58,	// (0x000b7de5) main_cset6_slider_pane_g1_ParamLimits

0xdf58,	// (0x000b7de5) main_cset6_slider_pane_g1

0x71ab,	// (0x000b1038) main_cset6_slider_pane_g2_ParamLimits

0x71ab,	// (0x000b1038) main_cset6_slider_pane_g2

0xdf80,	// (0x000b7e0d) main_cset6_slider_pane_g3_ParamLimits

0xdf80,	// (0x000b7e0d) main_cset6_slider_pane_g3

0x71d3,	// (0x000b1060) main_cset6_slider_pane_g4_ParamLimits

0x71d3,	// (0x000b1060) main_cset6_slider_pane_g4

0xdf8c,	// (0x000b7e19) main_cset6_slider_pane_g5_ParamLimits

0xdf8c,	// (0x000b7e19) main_cset6_slider_pane_g5

0xd809,	// (0x000b7696) main_cset6_slider_pane_g7_ParamLimits

0xd809,	// (0x000b7696) main_cset6_slider_pane_g7

0xd815,	// (0x000b76a2) main_cset6_slider_pane_g8_ParamLimits

0xd815,	// (0x000b76a2) main_cset6_slider_pane_g8

0x617e,	// (0x000b000b) main_cset6_slider_pane_g9_ParamLimits

0x617e,	// (0x000b000b) main_cset6_slider_pane_g9

0x618a,	// (0x000b0017) main_cset6_slider_pane_g10_ParamLimits

0x618a,	// (0x000b0017) main_cset6_slider_pane_g10

0x6196,	// (0x000b0023) main_cset6_slider_pane_g11_ParamLimits

0x6196,	// (0x000b0023) main_cset6_slider_pane_g11

0x61a2,	// (0x000b002f) main_cset6_slider_pane_g12_ParamLimits

0x61a2,	// (0x000b002f) main_cset6_slider_pane_g12

0x61ae,	// (0x000b003b) main_cset6_slider_pane_g13_ParamLimits

0x61ae,	// (0x000b003b) main_cset6_slider_pane_g13

0x61ba,	// (0x000b0047) main_cset6_slider_pane_g14_ParamLimits

0x61ba,	// (0x000b0047) main_cset6_slider_pane_g14

0x71df,	// (0x000b106c) main_cset6_slider_pane_g15_ParamLimits

0x71df,	// (0x000b106c) main_cset6_slider_pane_g15

0xd821,	// (0x000b76ae) main_cset6_slider_pane_g16_ParamLimits

0xd821,	// (0x000b76ae) main_cset6_slider_pane_g16

0xd82d,	// (0x000b76ba) main_cset6_slider_pane_g17_ParamLimits

0xd82d,	// (0x000b76ba) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x000b9a32) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x000b9a32) main_cset6_slider_pane_g

0xdf98,	// (0x000b7e25) main_cset6_slider_pane_t1_ParamLimits

0xdf98,	// (0x000b7e25) main_cset6_slider_pane_t1

0x720f,	// (0x000b109c) main_cset6_slider_pane_t2_ParamLimits

0x720f,	// (0x000b109c) main_cset6_slider_pane_t2

0x723a,	// (0x000b10c7) main_cset6_slider_pane_t3_ParamLimits

0x723a,	// (0x000b10c7) main_cset6_slider_pane_t3

0x7265,	// (0x000b10f2) main_cset6_slider_pane_t4_ParamLimits

0x7265,	// (0x000b10f2) main_cset6_slider_pane_t4

0x7290,	// (0x000b111d) main_cset6_slider_pane_t5_ParamLimits

0x7290,	// (0x000b111d) main_cset6_slider_pane_t5

0xdfd9,	// (0x000b7e66) main_cset6_slider_pane_t7_ParamLimits

0xdfd9,	// (0x000b7e66) main_cset6_slider_pane_t7

0x72bb,	// (0x000b1148) main_cset6_slider_pane_t8_ParamLimits

0x72bb,	// (0x000b1148) main_cset6_slider_pane_t8

0x72df,	// (0x000b116c) main_cset6_slider_pane_t9_ParamLimits

0x72df,	// (0x000b116c) main_cset6_slider_pane_t9

0x7303,	// (0x000b1190) main_cset6_slider_pane_t10_ParamLimits

0x7303,	// (0x000b1190) main_cset6_slider_pane_t10

0x7327,	// (0x000b11b4) main_cset6_slider_pane_t11_ParamLimits

0x7327,	// (0x000b11b4) main_cset6_slider_pane_t11

0xe00f,	// (0x000b7e9c) main_cset6_slider_pane_t14_ParamLimits

0xe00f,	// (0x000b7e9c) main_cset6_slider_pane_t14

0xe048,	// (0x000b7ed5) main_cset6_slider_pane_t15_ParamLimits

0xe048,	// (0x000b7ed5) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x000b9a57) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x000b9a57) main_cset6_slider_pane_t

0xd43d,	// (0x000b72ca) cset_slider_pane_g1_copy1

0xe081,	// (0x000b7f0e) cset_slider_pane_g2_copy1

0xe08a,	// (0x000b7f17) cset_slider_pane_g3_copy1

0x936c,	// (0x000b31f9) bg_popup_sub_pane_cp011_copy1

0xe093,	// (0x000b7f20) main_cset_text_pane_g1_copy1

0xd965,	// (0x000b77f2) main_cset_text_pane_t1_copy1

0xd973,	// (0x000b7800) main_cset_text_pane_t2_copy1

0xd981,	// (0x000b780e) main_cset_text_pane_t3_copy1

0xd98f,	// (0x000b781c) main_cset_text_pane_t4_copy1

0xd99d,	// (0x000b782a) main_cset_text_pane_t5_copy1

0xe09b,	// (0x000b7f28) main_cset_text_pane_t6_copy1

0xe0a9,	// (0x000b7f36) main_cset_text_pane_t7_copy1

0x7107,	// (0x000b0f94) main_cset_text2_pane_t1_copy1

0x93e4,	// (0x000b3271) main_ncimui_pane

0x3855,	// (0x000ad6e2) popup_query_ncimui_window_ParamLimits

0x3855,	// (0x000ad6e2) popup_query_ncimui_window

0xa4f8,	// (0x000b4385) field_cale_ev2_pane_g4_ParamLimits

0xa4f8,	// (0x000b4385) field_cale_ev2_pane_g4

0x542c,	// (0x000af2b9) cell_video_dialer_keypad_pane_g2_ParamLimits

0x542c,	// (0x000af2b9) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x000b9735) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x000b9735) cell_video_dialer_keypad_pane_g

0x5444,	// (0x000af2d1) cell_video_dialer_keypad_pane_t1

0x936c,	// (0x000b31f9) bg_popup_window_pane_cp012

0xb0ad,	// (0x000b4f3a) heading_pane_cp06

0xe0d5,	// (0x000b7f62) ncim_query_content_pane

0x936c,	// (0x000b31f9) bg_popup_heading_pane_cp01

0xe0dd,	// (0x000b7f6a) ncim_heading_pane_t1

0xe0eb,	// (0x000b7f78) ncim_indicator_popup_pane

0xe0fd,	// (0x000b7f8a) ncim_query_button_pane

0xe111,	// (0x000b7f9e) ncim_query_content_pane_t1

0xe123,	// (0x000b7fb0) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x000b9a9b) ncim_query_content_pane_t

0xe15d,	// (0x000b7fea) ncim_query_list_pane

0xe16f,	// (0x000b7ffc) ncim_query_popup_pane

0xe0eb,	// (0x000b7f78) ncim_indicator_popup_pane_ParamLimits

0x7540,	// (0x000b13cd) ncim_query_content_pane_g1_ParamLimits

0x7540,	// (0x000b13cd) ncim_query_content_pane_g1

0xe111,	// (0x000b7f9e) ncim_query_content_pane_t1_ParamLimits

0xe123,	// (0x000b7fb0) ncim_query_content_pane_t2_ParamLimits

0x754c,	// (0x000b13d9) ncim_query_content_pane_t3_ParamLimits

0x754c,	// (0x000b13d9) ncim_query_content_pane_t3

0x7574,	// (0x000b1401) ncim_query_content_pane_t4_ParamLimits

0x7574,	// (0x000b1401) ncim_query_content_pane_t4

0x759c,	// (0x000b1429) ncim_query_content_pane_t5_ParamLimits

0x759c,	// (0x000b1429) ncim_query_content_pane_t5

0xe135,	// (0x000b7fc2) ncim_query_content_pane_t6_ParamLimits

0xe135,	// (0x000b7fc2) ncim_query_content_pane_t6

0xfc0e,	// (0x000b9a9b) ncim_query_content_pane_t_ParamLimits

0xe15d,	// (0x000b7fea) ncim_query_list_pane_ParamLimits

0xe16f,	// (0x000b7ffc) ncim_query_popup_pane_ParamLimits

0xe183,	// (0x000b8010) wait_bar_pane_cp04

0x936c,	// (0x000b31f9) input_focus_pane_cp011

0xe18b,	// (0x000b8018) ncim_query_popup_pane_t1

0xe199,	// (0x000b8026) ncim_list_query_list_pane_ParamLimits

0xe199,	// (0x000b8026) ncim_list_query_list_pane

0x936c,	// (0x000b31f9) bg_button_pane_cp027

0xe1a6,	// (0x000b8033) ncim_query_button_pane_g1

0x936c,	// (0x000b31f9) list_highlight_pane_cp012

0xe1b0,	// (0x000b803d) ncim_list_query_list_pane_g1

0xe1b8,	// (0x000b8045) ncim_list_query_list_pane_t1

0x9cd2,	// (0x000b3b5f) cam4_indicators_pane_g3_ParamLimits

0x9cd2,	// (0x000b3b5f) cam4_indicators_pane_g3

0x9d4d,	// (0x000b3bda) vid4_indicators_pane_g5_ParamLimits

0x9d4d,	// (0x000b3bda) vid4_indicators_pane_g5

0x9e39,	// (0x000b3cc6) vid4_progress_pane_g5_ParamLimits

0x9e39,	// (0x000b3cc6) vid4_progress_pane_g5

0x742e,	// (0x000b12bb) main_ncimui_pane_g1

0x7494,	// (0x000b1321) ncimui_group_query_pane_ParamLimits

0x7494,	// (0x000b1321) ncimui_group_query_pane

0x74dc,	// (0x000b1369) ncimui_list_pane_ParamLimits

0x74dc,	// (0x000b1369) ncimui_list_pane

0x7503,	// (0x000b1390) ncimui_text_pane_ParamLimits

0x7503,	// (0x000b1390) ncimui_text_pane

0x75c4,	// (0x000b1451) ncimui_text_pane_t1_ParamLimits

0x75c4,	// (0x000b1451) ncimui_text_pane_t1

0xe1c6,	// (0x000b8053) ncimui_list_single_graphic_pane_ParamLimits

0xe1c6,	// (0x000b8053) ncimui_list_single_graphic_pane

0x75e2,	// (0x000b146f) ncimui_query_pane_ParamLimits

0x75e2,	// (0x000b146f) ncimui_query_pane

0x936c,	// (0x000b31f9) list_highlight_pane_cp013

0xe1d6,	// (0x000b8063) ncim_list_query_list_pane_t1_copy1

0xe1e4,	// (0x000b8071) ncim_list_single_graphic_pane_g1

0xe1ec,	// (0x000b8079) ncim_query_button_pane_cp01

0xe1f8,	// (0x000b8085) ncim_query_entry_pane_ParamLimits

0xe1f8,	// (0x000b8085) ncim_query_entry_pane

0xe20b,	// (0x000b8098) ncimui_query_pane_g1

0xe217,	// (0x000b80a4) ncimui_query_pane_t1_ParamLimits

0xe217,	// (0x000b80a4) ncimui_query_pane_t1

0xa4ae,	// (0x000b433b) input_focus_pane_cp012

0xe230,	// (0x000b80bd) ncim_query_entry_pane_t1

0xa265,	// (0x000b40f2) main_im_pane_ParamLimits

0x93e4,	// (0x000b3271) main_mobtv_pane_ParamLimits

0x93e4,	// (0x000b3271) main_mobtv_pane

0x71f7,	// (0x000b1084) main_cset6_slider_pane_g18_ParamLimits

0x71f7,	// (0x000b1084) main_cset6_slider_pane_g18

0x7203,	// (0x000b1090) main_cset6_slider_pane_g19_ParamLimits

0x7203,	// (0x000b1090) main_cset6_slider_pane_g19

0x75f5,	// (0x000b1482) bg_main_mobtv_pane_ParamLimits

0x75f5,	// (0x000b1482) bg_main_mobtv_pane

0x7603,	// (0x000b1490) main_mobtv_info_pane

0x760c,	// (0x000b1499) main_mobtv_loading_pane_ParamLimits

0x760c,	// (0x000b1499) main_mobtv_loading_pane

0xe242,	// (0x000b80cf) main_mobtv_pg_channel_list_pane

0xe24c,	// (0x000b80d9) main_mobtv_pg_hdr_pane

0x7619,	// (0x000b14a6) main_mobtv_programe_curr_pane_ParamLimits

0x7619,	// (0x000b14a6) main_mobtv_programe_curr_pane

0x7626,	// (0x000b14b3) main_mobtv_programe_next_pane_ParamLimits

0x7626,	// (0x000b14b3) main_mobtv_programe_next_pane

0xe255,	// (0x000b80e2) popup_mobtv_noti_window

0xcc6d,	// (0x000b6afa) main_tv_pg_hdr_pane_g1

0xe25d,	// (0x000b80ea) main_tv_pg_hdr_pane_g2

0xe265,	// (0x000b80f2) main_tv_pg_hdr_pane_g3

0xe26d,	// (0x000b80fa) main_tv_pg_hdr_pane_g4

0xe275,	// (0x000b8102) main_tv_pg_hdr_pane_g5

0xe27f,	// (0x000b810c) main_tv_pg_hdr_pane_g6

0xe289,	// (0x000b8116) main_tv_pg_hdr_pane_g7

0xe293,	// (0x000b8120) main_tv_pg_hdr_pane_g8

0xe29d,	// (0x000b812a) main_tv_pg_hdr_pane_g9

0xe2a7,	// (0x000b8134) main_tv_pg_hdr_pane_g10

0xe2b1,	// (0x000b813e) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x000b9aa8) main_tv_pg_hdr_pane_g

0xe2bb,	// (0x000b8148) main_tv_pg_hdr_pane_t1

0xe2c9,	// (0x000b8156) main_tv_pg_hdr_pane_t2

0xe2d7,	// (0x000b8164) main_tv_pg_hdr_pane_t3

0xe2e7,	// (0x000b8174) main_tv_pg_hdr_pane_t4

0xe2f7,	// (0x000b8184) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x000b9abf) main_tv_pg_hdr_pane_t

0xe307,	// (0x000b8194) single_mobtv_pg_channel_pane_ParamLimits

0xe307,	// (0x000b8194) single_mobtv_pg_channel_pane

0xe319,	// (0x000b81a6) single_mobtv_pg_channel_table_pane

0xad17,	// (0x000b4ba4) single_mobtv_pg_channel_thumb_pane

0xe322,	// (0x000b81af) single_tv_pg_channel_pane_g1

0xe32b,	// (0x000b81b8) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x000b9aca) single_tv_pg_channel_pane_g

0xcebb,	// (0x000b6d48) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcebb,	// (0x000b6d48) bg_single_mobtv_pg_channel_thumb_pane

0xe334,	// (0x000b81c1) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe334,	// (0x000b81c1) single_mobtv_pg_channel_thumb_pane_g1

0xe342,	// (0x000b81cf) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe342,	// (0x000b81cf) single_mobtv_pg_channel_thumb_pane_g2

0xe34e,	// (0x000b81db) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe34e,	// (0x000b81db) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x000b9acf) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x000b9acf) single_mobtv_pg_channel_thumb_pane_g

0xe35a,	// (0x000b81e7) single_mobtv_pg_channel_thumb_pane_t1

0xe368,	// (0x000b81f5) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x000b9ad6) single_mobtv_pg_channel_thumb_pane_t

0xcc6d,	// (0x000b6afa) bg_single_mobtv_pg_channel_table_pane_g1

0xcc6d,	// (0x000b6afa) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x000b957c) bg_single_mobtv_pg_channel_table_pane_g

0xe376,	// (0x000b8203) single_mobtv_pg_channel_table_pane_t1

0xe384,	// (0x000b8211) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x000b9adb) single_mobtv_pg_channel_table_pane_t

0x763b,	// (0x000b14c8) main_mobtv_info_pane_g1_ParamLimits

0x763b,	// (0x000b14c8) main_mobtv_info_pane_g1

0x7659,	// (0x000b14e6) main_mobtv_info_pane_t1_ParamLimits

0x7659,	// (0x000b14e6) main_mobtv_info_pane_t1

0x76d1,	// (0x000b155e) main_mobtv_info_pane_t2_ParamLimits

0x76d1,	// (0x000b155e) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x000b9ae5) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x000b9ae5) main_mobtv_info_pane_t

0x7760,	// (0x000b15ed) wait_bar_pane_cp05

0x7772,	// (0x000b15ff) main_mobtv_loading_pane_g1_ParamLimits

0x7772,	// (0x000b15ff) main_mobtv_loading_pane_g1

0x7785,	// (0x000b1612) main_mobtv_loading_pane_g2_ParamLimits

0x7785,	// (0x000b1612) main_mobtv_loading_pane_g2

0x7791,	// (0x000b161e) main_mobtv_loading_pane_g3_ParamLimits

0x7791,	// (0x000b161e) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x000b9aec) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x000b9aec) main_mobtv_loading_pane_g

0xe392,	// (0x000b821f) main_mobtv_loading_pane_t1_ParamLimits

0xe392,	// (0x000b821f) main_mobtv_loading_pane_t1

0xe3aa,	// (0x000b8237) main_mobtv_loading_pane_t2_ParamLimits

0xe3aa,	// (0x000b8237) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x000b9af3) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x000b9af3) main_mobtv_loading_pane_t

0x77a4,	// (0x000b1631) wait_bar_pane_cp06_ParamLimits

0x77a4,	// (0x000b1631) wait_bar_pane_cp06

0xe3ce,	// (0x000b825b) main_mobtv_programe_curr_pane_t1

0xe3dc,	// (0x000b8269) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x000b9af8) main_mobtv_programe_curr_pane_t

0xe3ea,	// (0x000b8277) main_mobtv_programe_next_pane_t1

0xe3f8,	// (0x000b8285) main_mobtv_programe_next_pane_t2

0xe406,	// (0x000b8293) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x000b9afd) main_mobtv_programe_next_pane_t

0x936c,	// (0x000b31f9) bg_popup_mobtv_noti_window_pane

0xe414,	// (0x000b82a1) popup_mobtv_noti_window_g1

0xe41c,	// (0x000b82a9) popup_mobtv_noti_window_t1

0xe42a,	// (0x000b82b7) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x000b9b04) popup_mobtv_noti_window_t

0xcc6d,	// (0x000b6afa) bg_popup_mobtv_noti_window_pane_g1

0x93f2,	// (0x000b327f) sc_clock_pane

0x93f2,	// (0x000b327f) main_fs_bigclock_pane

0x6e39,	// (0x000b0cc6) blid2_tripm_pane_t4_ParamLimits

0x6e39,	// (0x000b0cc6) blid2_tripm_pane_t4

0x77b3,	// (0x000b1640) sc_clock_pane_g1_ParamLimits

0x77b3,	// (0x000b1640) sc_clock_pane_g1

0x77c5,	// (0x000b1652) sc_clock_pane_t1_ParamLimits

0x77c5,	// (0x000b1652) sc_clock_pane_t1

0x77e7,	// (0x000b1674) sc_clock_pane_t2_ParamLimits

0x77e7,	// (0x000b1674) sc_clock_pane_t2

0x77ff,	// (0x000b168c) sc_clock_pane_t3_ParamLimits

0x77ff,	// (0x000b168c) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x000b9b09) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x000b9b09) sc_clock_pane_t

0x8827,	// (0x000b26b4) main_fs_bigclock_indicator_pane_ParamLimits

0x8827,	// (0x000b26b4) main_fs_bigclock_indicator_pane

0x789f,	// (0x000b172c) main_fs_bigclock_pane_g1_ParamLimits

0x789f,	// (0x000b172c) main_fs_bigclock_pane_g1

0x8833,	// (0x000b26c0) main_fs_bigclock_pane_t1_ParamLimits

0x8833,	// (0x000b26c0) main_fs_bigclock_pane_t1

0x8845,	// (0x000b26d2) main_fs_bigclock_pane_t2_ParamLimits

0x8845,	// (0x000b26d2) main_fs_bigclock_pane_t2

0x8859,	// (0x000b26e6) main_fs_bigclock_pane_t3_ParamLimits

0x8859,	// (0x000b26e6) main_fs_bigclock_pane_t3

0x0002,

0xfe86,	// (0x000b9d13) main_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x000b9d13) main_fs_bigclock_pane_t

0xec94,	// (0x000b8b21) main_fs_bigclock_indicator_pane_g1

0xe105,	// (0x000b7f92) ncim_query_content_pane_g2_ParamLimits

0xe105,	// (0x000b7f92) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x000b9a96) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x000b9a96) ncim_query_content_pane_g

0x7818,	// (0x000b16a5) sc_clock_pane_t4_ParamLimits

0x7818,	// (0x000b16a5) sc_clock_pane_t4

0x93e4,	// (0x000b3271) main_radioblah_pane

0xd61b,	// (0x000b74a8) cell_call4_button_pane_t1_copy1_ParamLimits

0xd61b,	// (0x000b74a8) cell_call4_button_pane_t1_copy1

0x7446,	// (0x000b12d3) main_ncimui_pane_t1_ParamLimits

0x7446,	// (0x000b12d3) main_ncimui_pane_t1

0x7460,	// (0x000b12ed) main_ncimui_pane_t2_ParamLimits

0x7460,	// (0x000b12ed) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x000b9a8f) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x000b9a8f) main_ncimui_pane_t

0xe56f,	// (0x000b83fc) main_radioblah_anim_pane_ParamLimits

0xe56f,	// (0x000b83fc) main_radioblah_anim_pane

0xe580,	// (0x000b840d) main_radioblah_info_pane_ParamLimits

0xe580,	// (0x000b840d) main_radioblah_info_pane

0xe594,	// (0x000b8421) main_radioblah_pane_t1_ParamLimits

0xe594,	// (0x000b8421) main_radioblah_pane_t1

0xe5b0,	// (0x000b843d) main_radioblah_pane_t2_ParamLimits

0xe5b0,	// (0x000b843d) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x000b9b2a) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x000b9b2a) main_radioblah_pane_t

0x78f7,	// (0x000b1784) main_radioblah_rocker_ctrl_pane_ParamLimits

0x78f7,	// (0x000b1784) main_radioblah_rocker_ctrl_pane

0xe5f8,	// (0x000b8485) main_radioblah_info_pane_t1_ParamLimits

0xe5f8,	// (0x000b8485) main_radioblah_info_pane_t1

0x794f,	// (0x000b17dc) main_radioblah_info_pane_t2_ParamLimits

0x794f,	// (0x000b17dc) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x000b9b33) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x000b9b33) main_radioblah_info_pane_t

0xcc6d,	// (0x000b6afa) main_radioblah_rocker_ctrl_pane_g1

0x79ff,	// (0x000b188c) main_radioblah_rocker_ctrl_pane_g2

0x7a07,	// (0x000b1894) main_radioblah_rocker_ctrl_pane_g3

0x7a0f,	// (0x000b189c) main_radioblah_rocker_ctrl_pane_g4

0x7a17,	// (0x000b18a4) main_radioblah_rocker_ctrl_pane_g5

0x7a1f,	// (0x000b18ac) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x000b9b3c) main_radioblah_rocker_ctrl_pane_g

0x7107,	// (0x000b0f94) main_cset_text2_pane_t1_copy1_ParamLimits

0x9c97,	// (0x000b3b24) cam4_image_uncrop_qvga_pane

0x9cf8,	// (0x000b3b85) vid4_image_uncrop_qcif_pane

0x9e70,	// (0x000b3cfd) cam6_image_uncrop_qvga_pane_ParamLimits

0x9e70,	// (0x000b3cfd) cam6_image_uncrop_qvga_pane

0xddee,	// (0x000b7c7b) vid6_image_uncrop_qcif_pane_ParamLimits

0xddee,	// (0x000b7c7b) vid6_image_uncrop_qcif_pane

0x936c,	// (0x000b31f9) bg_popup_preview_window_pane_cp03

0xe0b7,	// (0x000b7f44) list_cset_text2_pane

0xe0bf,	// (0x000b7f4c) main_cset6_text2_pane_g1

0xe0c7,	// (0x000b7f54) main_cset6_text2_pane_t1

0xe632,	// (0x000b84bf) list_cset_text2_pane_t1_ParamLimits

0xe632,	// (0x000b84bf) list_cset_text2_pane_t1

0x93e4,	// (0x000b3271) main_radioblah_pane_ParamLimits

0x774c,	// (0x000b15d9) main_mobtv_info_pane_t3_ParamLimits

0x774c,	// (0x000b15d9) main_mobtv_info_pane_t3

0x78e5,	// (0x000b1772) main_radioblah_pane_g1

0x791f,	// (0x000b17ac) main_radioblah_info_pane_g1

0x79a4,	// (0x000b1831) main_radioblah_info_pane_t3_ParamLimits

0x79a4,	// (0x000b1831) main_radioblah_info_pane_t3

0x22c5,	// (0x000ac152) highlight_cell_cale_month_pane_ParamLimits

0x22c5,	// (0x000ac152) highlight_cell_cale_month_pane

0x93f2,	// (0x000b327f) main_phob_fisheye_pane

0xcf97,	// (0x000b6e24) scroll_pane_cp0031_ParamLimits

0xcf97,	// (0x000b6e24) scroll_pane_cp0031

0xdefc,	// (0x000b7d89) wait_bar_pane_cp08_ParamLimits

0x7189,	// (0x000b1016) cset_list_set_pane_copy1_ParamLimits

0xe64d,	// (0x000b84da) highlight_cell_cale_month_pane_g1

0x7a27,	// (0x000b18b4) highlight_cell_cale_month_pane_t1

0xdb91,	// (0x000b7a1e) list_gen_pane_cp01

0xd7f4,	// (0x000b7681) scroll_pane_01

0x7a35,	// (0x000b18c2) list_single_double_fisheye_pane

0x7a3e,	// (0x000b18cb) list_double_fisheye_pane_g1_ParamLimits

0x7a3e,	// (0x000b18cb) list_double_fisheye_pane_g1

0x7a4a,	// (0x000b18d7) list_double_fisheye_pane_g2_ParamLimits

0x7a4a,	// (0x000b18d7) list_double_fisheye_pane_g2

0x7a5e,	// (0x000b18eb) list_double_fisheye_pane_g3_ParamLimits

0x7a5e,	// (0x000b18eb) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x000b9b49) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x000b9b49) list_double_fisheye_pane_g

0x7a87,	// (0x000b1914) list_double_fisheye_pane_t1_ParamLimits

0x7a87,	// (0x000b1914) list_double_fisheye_pane_t1

0x7aa2,	// (0x000b192f) list_double_fisheye_pane_t2_ParamLimits

0x7aa2,	// (0x000b192f) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x000b9b54) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x000b9b54) list_double_fisheye_pane_t

0x93f2,	// (0x000b327f) main_call5_pane

0x7843,	// (0x000b16d0) sc_swipe_pane_ParamLimits

0x7843,	// (0x000b16d0) sc_swipe_pane

0x7ad7,	// (0x000b1964) call5_image_pane_ParamLimits

0x7ad7,	// (0x000b1964) call5_image_pane

0x7af4,	// (0x000b1981) call5_swipe_1_pane_ParamLimits

0x7af4,	// (0x000b1981) call5_swipe_1_pane

0x7b07,	// (0x000b1994) call5_swipe_2_pane_ParamLimits

0x7b07,	// (0x000b1994) call5_swipe_2_pane

0x7b32,	// (0x000b19bf) popup_call5_audio_first_window_ParamLimits

0x7b32,	// (0x000b19bf) popup_call5_audio_first_window

0xcebb,	// (0x000b6d48) call5_swipe_1_pane_g1_ParamLimits

0xcebb,	// (0x000b6d48) call5_swipe_1_pane_g1

0xe655,	// (0x000b84e2) call5_swipe_1_pane_g2_ParamLimits

0xe655,	// (0x000b84e2) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x000b9b59) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x000b9b59) call5_swipe_1_pane_g

0xe661,	// (0x000b84ee) call5_swipe_1_pane_t1_ParamLimits

0xe661,	// (0x000b84ee) call5_swipe_1_pane_t1

0xcebb,	// (0x000b6d48) call5_swipe_2_pane_g1_ParamLimits

0xcebb,	// (0x000b6d48) call5_swipe_2_pane_g1

0xe676,	// (0x000b8503) call5_swipe_2_pane_g2_ParamLimits

0xe676,	// (0x000b8503) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x000b9b5e) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x000b9b5e) call5_swipe_2_pane_g

0xe682,	// (0x000b850f) call5_swipe_2_pane_t1_ParamLimits

0xe682,	// (0x000b850f) call5_swipe_2_pane_t1

0xe697,	// (0x000b8524) sc_swipe_pane_g1_ParamLimits

0xe697,	// (0x000b8524) sc_swipe_pane_g1

0xe6a4,	// (0x000b8531) sc_swipe_pane_g2_ParamLimits

0xe6a4,	// (0x000b8531) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x000b9b63) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x000b9b63) sc_swipe_pane_g

0xe6b0,	// (0x000b853d) sc_swipe_pane_t1_ParamLimits

0xe6b0,	// (0x000b853d) sc_swipe_pane_t1

0x93f2,	// (0x000b327f) main_cmail_launcher_pane

0x7b43,	// (0x000b19d0) aid_size_cell_cmail_l_ParamLimits

0x7b43,	// (0x000b19d0) aid_size_cell_cmail_l

0x7b5d,	// (0x000b19ea) grid_cmail_l_pane_ParamLimits

0x7b5d,	// (0x000b19ea) grid_cmail_l_pane

0x7b77,	// (0x000b1a04) cell_cmail_l_pane_ParamLimits

0x7b77,	// (0x000b1a04) cell_cmail_l_pane

0x7b9d,	// (0x000b1a2a) cell_cmail_l_pane_g1_ParamLimits

0x7b9d,	// (0x000b1a2a) cell_cmail_l_pane_g1

0x7bae,	// (0x000b1a3b) cell_cmail_l_pane_t1_ParamLimits

0x7bae,	// (0x000b1a3b) cell_cmail_l_pane_t1

0xe6c5,	// (0x000b8552) cell_cmail_l_pane_t2_ParamLimits

0xe6c5,	// (0x000b8552) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x000b9b68) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x000b9b68) cell_cmail_l_pane_t

0xa4ae,	// (0x000b433b) grid_highlight_pane_cp018_ParamLimits

0xa4ae,	// (0x000b433b) grid_highlight_pane_cp018

0x027a,	// (0x000aa107) main2_pane_ParamLimits

0x027a,	// (0x000aa107) main2_pane

0xa310,	// (0x000b419d) popup_sp_fs_action_menu_bg_pane_g1

0xa318,	// (0x000b41a5) popup_sp_fs_action_menu_bg_pane_g2

0xa320,	// (0x000b41ad) popup_sp_fs_action_menu_bg_pane_g3

0xa328,	// (0x000b41b5) popup_sp_fs_action_menu_bg_pane_g4

0xa330,	// (0x000b41bd) popup_sp_fs_action_menu_bg_pane_g5

0xa338,	// (0x000b41c5) popup_sp_fs_action_menu_bg_pane_g6

0xa340,	// (0x000b41cd) popup_sp_fs_action_menu_bg_pane_g7

0xa348,	// (0x000b41d5) popup_sp_fs_action_menu_bg_pane_g8

0xa350,	// (0x000b41dd) popup_sp_fs_action_menu_bg_pane_g9

0xa358,	// (0x000b41e5) popup_sp_fs_action_menu_bg_pane_g10

0xa358,	// (0x000b41e5) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x000b9017) popup_sp_fs_action_menu_bg_pane_g

0x1252,	// (0x000ab0df) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1252,	// (0x000ab0df) list_medium_line_x2_t3_g3_g1

0x125e,	// (0x000ab0eb) list_medium_line_x2_t3_g3_g2_ParamLimits

0x125e,	// (0x000ab0eb) list_medium_line_x2_t3_g3_g2

0x126a,	// (0x000ab0f7) list_medium_line_x2_t3_g3_g3_ParamLimits

0x126a,	// (0x000ab0f7) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000b90c5) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000b90c5) list_medium_line_x2_t3_g3_g

0x1276,	// (0x000ab103) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1276,	// (0x000ab103) list_medium_line_x2_t3_g3_t1

0x128b,	// (0x000ab118) list_medium_line_x2_t3_g3_t2_ParamLimits

0x128b,	// (0x000ab118) list_medium_line_x2_t3_g3_t2

0x129f,	// (0x000ab12c) list_medium_line_x2_t3_g3_t3_ParamLimits

0x129f,	// (0x000ab12c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000b90cc) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000b90cc) list_medium_line_x2_t3_g3_t

0x1252,	// (0x000ab0df) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1252,	// (0x000ab0df) list_medium_line_x2_t3_g2_g1

0x126a,	// (0x000ab0f7) list_medium_line_x2_t3_g2_g2_ParamLimits

0x126a,	// (0x000ab0f7) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000b90d3) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000b90d3) list_medium_line_x2_t3_g2_g

0x12b4,	// (0x000ab141) list_medium_line_x2_t3_g2_t1_ParamLimits

0x12b4,	// (0x000ab141) list_medium_line_x2_t3_g2_t1

0x12ca,	// (0x000ab157) list_medium_line_x2_t3_g2_t2_ParamLimits

0x12ca,	// (0x000ab157) list_medium_line_x2_t3_g2_t2

0x129f,	// (0x000ab12c) list_medium_line_x2_t3_g2_t3_ParamLimits

0x129f,	// (0x000ab12c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000b90d8) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000b90d8) list_medium_line_x2_t3_g2_t

0x1252,	// (0x000ab0df) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1252,	// (0x000ab0df) list_medium_line_x2_t4_g4_g1

0x12dc,	// (0x000ab169) list_medium_line_x2_t4_g4_g2_ParamLimits

0x12dc,	// (0x000ab169) list_medium_line_x2_t4_g4_g2

0x125e,	// (0x000ab0eb) list_medium_line_x2_t4_g4_g3_ParamLimits

0x125e,	// (0x000ab0eb) list_medium_line_x2_t4_g4_g3

0x12e8,	// (0x000ab175) list_medium_line_x2_t4_g4_g4_ParamLimits

0x12e8,	// (0x000ab175) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000b90df) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000b90df) list_medium_line_x2_t4_g4_g

0x12f4,	// (0x000ab181) list_medium_line_x2_t4_g4_t1_ParamLimits

0x12f4,	// (0x000ab181) list_medium_line_x2_t4_g4_t1

0x130e,	// (0x000ab19b) list_medium_line_x2_t4_g4_t2_ParamLimits

0x130e,	// (0x000ab19b) list_medium_line_x2_t4_g4_t2

0x1324,	// (0x000ab1b1) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1324,	// (0x000ab1b1) list_medium_line_x2_t4_g4_t3

0x1339,	// (0x000ab1c6) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1339,	// (0x000ab1c6) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000b90e8) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000b90e8) list_medium_line_x2_t4_g4_t

0x1252,	// (0x000ab0df) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1252,	// (0x000ab0df) list_medium_line_x2_t2_g4_g1

0x12dc,	// (0x000ab169) list_medium_line_x2_t2_g4_g2_ParamLimits

0x12dc,	// (0x000ab169) list_medium_line_x2_t2_g4_g2

0x125e,	// (0x000ab0eb) list_medium_line_x2_t2_g4_g3_ParamLimits

0x125e,	// (0x000ab0eb) list_medium_line_x2_t2_g4_g3

0x126a,	// (0x000ab0f7) list_medium_line_x2_t2_g4_g4_ParamLimits

0x126a,	// (0x000ab0f7) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000b914f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000b914f) list_medium_line_x2_t2_g4_g

0x22eb,	// (0x000ac178) list_medium_line_x2_t2_g4_t1_ParamLimits

0x22eb,	// (0x000ac178) list_medium_line_x2_t2_g4_t1

0x129f,	// (0x000ab12c) list_medium_line_x2_t2_g4_t2_ParamLimits

0x129f,	// (0x000ab12c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000b9158) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000b9158) list_medium_line_x2_t2_g4_t

0x1252,	// (0x000ab0df) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1252,	// (0x000ab0df) list_medium_line_x2_t2_g3_g1

0x125e,	// (0x000ab0eb) list_medium_line_x2_t2_g3_g2_ParamLimits

0x125e,	// (0x000ab0eb) list_medium_line_x2_t2_g3_g2

0x126a,	// (0x000ab0f7) list_medium_line_x2_t2_g3_g3_ParamLimits

0x126a,	// (0x000ab0f7) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000b90c5) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000b90c5) list_medium_line_x2_t2_g3_g

0x2300,	// (0x000ac18d) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2300,	// (0x000ac18d) list_medium_line_x2_t2_g3_t1

0x129f,	// (0x000ab12c) list_medium_line_x2_t2_g3_t2_ParamLimits

0x129f,	// (0x000ab12c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000b915d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000b915d) list_medium_line_x2_t2_g3_t

0x2454,	// (0x000ac2e1) main_sp_fs_list_pane_ParamLimits

0x2454,	// (0x000ac2e1) main_sp_fs_list_pane

0xcaad,	// (0x000b693a) sp_fs_scroll_pane_ParamLimits

0xcaad,	// (0x000b693a) sp_fs_scroll_pane

0x2460,	// (0x000ac2ed) list_medium_line_x2_t3_t1

0x2470,	// (0x000ac2fd) list_medium_line_x2_t3_t2

0x247e,	// (0x000ac30b) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000b91a8) list_medium_line_x2_t3_t

0x248c,	// (0x000ac319) list_medium_line_x3_t4_t1

0x249c,	// (0x000ac329) list_medium_line_x3_t4_t2

0x24aa,	// (0x000ac337) list_medium_line_x3_t4_t3

0x247e,	// (0x000ac30b) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000b91af) list_medium_line_x3_t4_t

0x24b8,	// (0x000ac345) list_medium_line_x4_t5_t1

0x24c8,	// (0x000ac355) list_medium_line_x4_t5_t2

0x24aa,	// (0x000ac337) list_medium_line_x4_t5_t3

0x24d6,	// (0x000ac363) list_medium_line_x4_t5_t4

0x247e,	// (0x000ac30b) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000b91b8) list_medium_line_x4_t5_t

0x1252,	// (0x000ab0df) list_medium_line_t4_g4_g1_ParamLimits

0x1252,	// (0x000ab0df) list_medium_line_t4_g4_g1

0x12e8,	// (0x000ab175) list_medium_line_t4_g4_g2_ParamLimits

0x12e8,	// (0x000ab175) list_medium_line_t4_g4_g2

0x24e4,	// (0x000ac371) list_medium_line_t4_g4_g3_ParamLimits

0x24e4,	// (0x000ac371) list_medium_line_t4_g4_g3

0x126a,	// (0x000ab0f7) list_medium_line_t4_g4_g4_ParamLimits

0x126a,	// (0x000ab0f7) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x000b91c3) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x000b91c3) list_medium_line_t4_g4_g

0x24f0,	// (0x000ac37d) list_medium_line_t4_g4_t1_ParamLimits

0x24f0,	// (0x000ac37d) list_medium_line_t4_g4_t1

0x2505,	// (0x000ac392) list_medium_line_t4_g4_t2_ParamLimits

0x2505,	// (0x000ac392) list_medium_line_t4_g4_t2

0x251a,	// (0x000ac3a7) list_medium_line_t4_g4_t3_ParamLimits

0x251a,	// (0x000ac3a7) list_medium_line_t4_g4_t3

0x129f,	// (0x000ab12c) list_medium_line_t4_g4_t4_ParamLimits

0x129f,	// (0x000ab12c) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000b91cc) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000b91cc) list_medium_line_t4_g4_t

0x25f2,	// (0x000ac47f) chi_dic_find_pane_g1

0x3625,	// (0x000ad4b2) main_tport_pane

0x649c,	// (0x000b0329) list_medium_line_plain_t1

0x6544,	// (0x000b03d1) list_medium_line_t2_g2_g1_ParamLimits

0x6544,	// (0x000b03d1) list_medium_line_t2_g2_g1

0x6550,	// (0x000b03dd) list_medium_line_t2_g2_g2_ParamLimits

0x6550,	// (0x000b03dd) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x000b98a0) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x000b98a0) list_medium_line_t2_g2_g

0x655c,	// (0x000b03e9) list_medium_line_t2_g2_t1_ParamLimits

0x655c,	// (0x000b03e9) list_medium_line_t2_g2_t1

0x6576,	// (0x000b0403) list_medium_line_t2_g2_t2_ParamLimits

0x6576,	// (0x000b0403) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x000b98a5) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x000b98a5) list_medium_line_t2_g2_t

0xa5e9,	// (0x000b4476) aid_sp_fs_list_icon_a_sm

0xa5f1,	// (0x000b447e) aid_sp_fs_list_icon_d

0xb468,	// (0x000b52f5) aid_sp_fs_text_primary

0xb471,	// (0x000b52fe) aid_sp_fs_text_secondary

0x6be6,	// (0x000b0a73) list_medium_line

0x6be6,	// (0x000b0a73) list_medium_line_g2

0x6be6,	// (0x000b0a73) list_medium_line_g3

0x6be6,	// (0x000b0a73) list_medium_line_plain

0x6be6,	// (0x000b0a73) list_medium_line_plain_t2

0x6be6,	// (0x000b0a73) list_medium_line_plain_t3

0x6be6,	// (0x000b0a73) list_medium_line_right_icon

0x6be6,	// (0x000b0a73) list_medium_line_right_iconx2

0x6be6,	// (0x000b0a73) list_medium_line_t2

0x6be6,	// (0x000b0a73) list_medium_line_t2_g2

0x6be6,	// (0x000b0a73) list_medium_line_t2_g3

0x6be6,	// (0x000b0a73) list_medium_line_t2_right_icon

0x6be6,	// (0x000b0a73) list_medium_line_t2_right_iconx2

0x6be6,	// (0x000b0a73) list_medium_line_t3

0x6be6,	// (0x000b0a73) list_medium_line_t3_g2

0x6be6,	// (0x000b0a73) list_medium_line_t3_g3

0x6be6,	// (0x000b0a73) list_medium_line_t3_right_iconx2

0x6bef,	// (0x000b0a7c) list_medium_line_t4_g4

0x6bf8,	// (0x000b0a85) list_medium_line_x2

0x6bf8,	// (0x000b0a85) list_medium_line_x2_t2_g2

0x6bf8,	// (0x000b0a85) list_medium_line_x2_t2_g3

0x6bf8,	// (0x000b0a85) list_medium_line_x2_t2_g4

0x6bf8,	// (0x000b0a85) list_medium_line_x2_t3

0x6bf8,	// (0x000b0a85) list_medium_line_x2_t3_g2

0x6bf8,	// (0x000b0a85) list_medium_line_x2_t3_g3

0x6bf8,	// (0x000b0a85) list_medium_line_x2_t3_g4

0x6bf8,	// (0x000b0a85) list_medium_line_x2_t4_g2

0x6bf8,	// (0x000b0a85) list_medium_line_x2_t4_g4

0x6c01,	// (0x000b0a8e) list_medium_line_x3

0x6c01,	// (0x000b0a8e) list_medium_line_x3_t4

0x6c01,	// (0x000b0a8e) list_medium_line_x3_t4_g4

0x6bef,	// (0x000b0a7c) list_medium_line_x4_t4

0x6bef,	// (0x000b0a7c) list_medium_line_x4_t4_g7

0x6bef,	// (0x000b0a7c) list_medium_line_x4_t5

0x6c0a,	// (0x000b0a97) list_single_fs_dyc_pane_ParamLimits

0x6c0a,	// (0x000b0a97) list_single_fs_dyc_pane

0x1252,	// (0x000ab0df) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1252,	// (0x000ab0df) list_medium_line_x4_t4_g7_g1

0x734b,	// (0x000b11d8) list_medium_line_x4_t4_g7_g2_ParamLimits

0x734b,	// (0x000b11d8) list_medium_line_x4_t4_g7_g2

0x7357,	// (0x000b11e4) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7357,	// (0x000b11e4) list_medium_line_x4_t4_g7_g3

0x7366,	// (0x000b11f3) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7366,	// (0x000b11f3) list_medium_line_x4_t4_g7_g4

0x7372,	// (0x000b11ff) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7372,	// (0x000b11ff) list_medium_line_x4_t4_g7_g5

0x7381,	// (0x000b120e) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7381,	// (0x000b120e) list_medium_line_x4_t4_g7_g6

0x7390,	// (0x000b121d) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7390,	// (0x000b121d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x000b9a70) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x000b9a70) list_medium_line_x4_t4_g7_g

0x739c,	// (0x000b1229) list_medium_line_x4_t4_g7_t1_ParamLimits

0x739c,	// (0x000b1229) list_medium_line_x4_t4_g7_t1

0x73b1,	// (0x000b123e) list_medium_line_x4_t4_g7_t2_ParamLimits

0x73b1,	// (0x000b123e) list_medium_line_x4_t4_g7_t2

0x73c6,	// (0x000b1253) list_medium_line_x4_t4_g7_t3_ParamLimits

0x73c6,	// (0x000b1253) list_medium_line_x4_t4_g7_t3

0x73db,	// (0x000b1268) list_medium_line_x4_t4_g7_t4_ParamLimits

0x73db,	// (0x000b1268) list_medium_line_x4_t4_g7_t4

0x73ed,	// (0x000b127a) list_medium_line_x4_t4_g7_t5_ParamLimits

0x73ed,	// (0x000b127a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x000b9a7f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x000b9a7f) list_medium_line_x4_t4_g7_t

0x73ff,	// (0x000b128c) list_single_dyc_row_pane_ParamLimits

0x73ff,	// (0x000b128c) list_single_dyc_row_pane

0x7ac4,	// (0x000b1951) call5_gesture_pane_ParamLimits

0x7ac4,	// (0x000b1951) call5_gesture_pane

0x7b1a,	// (0x000b19a7) call5_windows_pane_ParamLimits

0x7b1a,	// (0x000b19a7) call5_windows_pane

0x7bc4,	// (0x000b1a51) call5_swipe_1_pane_cp_ParamLimits

0x7bc4,	// (0x000b1a51) call5_swipe_1_pane_cp

0x7bd0,	// (0x000b1a5d) call5_swipe_2_pane_cp_ParamLimits

0x7bd0,	// (0x000b1a5d) call5_swipe_2_pane_cp

0xa9bb,	// (0x000b4848) call5_image_pane_cp

0x7bdc,	// (0x000b1a69) popup_call5_audio_first_window_cp_ParamLimits

0x7bdc,	// (0x000b1a69) popup_call5_audio_first_window_cp

0xe697,	// (0x000b8524) call5_swipe_1_pane_g1_cp_ParamLimits

0xe697,	// (0x000b8524) call5_swipe_1_pane_g1_cp

0xe6d7,	// (0x000b8564) call5_swipe_1_pane_g2_cp

0xe6b0,	// (0x000b853d) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6b0,	// (0x000b853d) call5_swipe_1_pane_t1_cp

0xe697,	// (0x000b8524) call5_swipe_2_pane_g1_cp_ParamLimits

0xe697,	// (0x000b8524) call5_swipe_2_pane_g1_cp

0xe6df,	// (0x000b856c) call5_swipe_2_pane_g2_cp

0xe6e7,	// (0x000b8574) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6e7,	// (0x000b8574) call5_swipe_2_pane_t1_cp

0xa4ae,	// (0x000b433b) main_sp_fs_email_pane

0xe6fc,	// (0x000b8589) main_sp_fs_listscroll_pane_te

0x7bea,	// (0x000b1a77) popup_sp_fs_action_menu_pane_ParamLimits

0x7bea,	// (0x000b1a77) popup_sp_fs_action_menu_pane

0xcc6d,	// (0x000b6afa) bg_sp_fs_ctrlbar_pane_g1

0xe705,	// (0x000b8592) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe70e,	// (0x000b859b) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe717,	// (0x000b85a4) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc6d,	// (0x000b6afa) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x000b9b6d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca46,	// (0x000b68d3) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca46,	// (0x000b68d3) bg_sp_fs_ctrlbar_ddmenu_pane

0xe720,	// (0x000b85ad) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe720,	// (0x000b85ad) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe72c,	// (0x000b85b9) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe72c,	// (0x000b85b9) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x000b9b76) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x000b9b76) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe738,	// (0x000b85c5) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe738,	// (0x000b85c5) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7c2e,	// (0x000b1abb) list_medium_line_t2_right_icon_g1

0x7c36,	// (0x000b1ac3) list_medium_line_t2_right_icon_t1

0x7c46,	// (0x000b1ad3) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x000b9b7b) list_medium_line_t2_right_icon_t

0xc859,	// (0x000b66e6) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc859,	// (0x000b66e6) bg_sp_fs_ctrlbar_pane

0x7ca0,	// (0x000b1b2d) main_sp_fs_ctrlbar_button_pane_cp01

0x7caa,	// (0x000b1b37) main_sp_fs_ctrlbar_ddmenu_pane

0xe78a,	// (0x000b8617) main_sp_fs_ctrlbar_pane_g1

0xe796,	// (0x000b8623) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x000b9b80) main_sp_fs_ctrlbar_pane_g

0xe7a2,	// (0x000b862f) main_sp_fs_ctrlbar_pane_t1

0x7cb4,	// (0x000b1b41) main_sp_fs_ctrlbar_pane

0x7cd8,	// (0x000b1b65) main_sp_fs_listscroll_pane_te_cp01

0x7cf8,	// (0x000b1b85) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7cf8,	// (0x000b1b85) popup_sp_fs_action_menu_pane_cp01

0xa4ae,	// (0x000b433b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa4ae,	// (0x000b433b) bg_sp_fs_highlight_list_pane_cp01

0xa625,	// (0x000b44b2) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa625,	// (0x000b44b2) sp_fs_action_menu_list_gene_pane_g1

0xe7d2,	// (0x000b865f) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7d2,	// (0x000b865f) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x000b9b8a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x000b9b8a) sp_fs_action_menu_list_gene_pane_g

0xa634,	// (0x000b44c1) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa634,	// (0x000b44c1) sp_fs_action_menu_list_gene_pane_t1

0xa64c,	// (0x000b44d9) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa64c,	// (0x000b44d9) sp_fs_action_menu_list_gene_pane

0xe7df,	// (0x000b866c) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7df,	// (0x000b866c) popup_sp_fs_action_menu_bg_pane

0xa66b,	// (0x000b44f8) sp_fs_action_menu_list_pane_ParamLimits

0xa66b,	// (0x000b44f8) sp_fs_action_menu_list_pane

0x7d28,	// (0x000b1bb5) sp_fs_scroll_pane_cp01_ParamLimits

0x7d28,	// (0x000b1bb5) sp_fs_scroll_pane_cp01

0x7d4e,	// (0x000b1bdb) list_medium_line_plain_t2_t1

0x7d5e,	// (0x000b1beb) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x000b9b8f) list_medium_line_plain_t2_t

0x7d6e,	// (0x000b1bfb) list_medium_line_plain_t3_t1

0x7d7e,	// (0x000b1c0b) list_medium_line_plain_t3_t2

0x7d8c,	// (0x000b1c19) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x000b9b94) list_medium_line_plain_t3_t

0x1252,	// (0x000ab0df) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1252,	// (0x000ab0df) list_medium_line_x2_t2_g2_g1

0x126a,	// (0x000ab0f7) list_medium_line_x2_t2_g2_g2_ParamLimits

0x126a,	// (0x000ab0f7) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000b90d3) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000b90d3) list_medium_line_x2_t2_g2_g

0x24f0,	// (0x000ac37d) list_medium_line_x2_t2_g2_t1_ParamLimits

0x24f0,	// (0x000ac37d) list_medium_line_x2_t2_g2_t1

0x129f,	// (0x000ab12c) list_medium_line_x2_t2_g2_t2_ParamLimits

0x129f,	// (0x000ab12c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x000b9b9b) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x000b9b9b) list_medium_line_x2_t2_g2_t

0x1252,	// (0x000ab0df) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1252,	// (0x000ab0df) list_medium_line_x2_t4_g2_g1

0x7d9a,	// (0x000b1c27) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7d9a,	// (0x000b1c27) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd13,	// (0x000b9ba0) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd13,	// (0x000b9ba0) list_medium_line_x2_t4_g2_g

0x7dac,	// (0x000b1c39) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7dac,	// (0x000b1c39) list_medium_line_x2_t4_g2_t1

0x7dc3,	// (0x000b1c50) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7dc3,	// (0x000b1c50) list_medium_line_x2_t4_g2_t2

0x7dd8,	// (0x000b1c65) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7dd8,	// (0x000b1c65) list_medium_line_x2_t4_g2_t3

0x129f,	// (0x000ab12c) list_medium_line_x2_t4_g2_t4_ParamLimits

0x129f,	// (0x000ab12c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd18,	// (0x000b9ba5) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd18,	// (0x000b9ba5) list_medium_line_x2_t4_g2_t

0x7dea,	// (0x000b1c77) list_medium_line_t3_right_iconx2_g1

0x7c2e,	// (0x000b1abb) list_medium_line_t3_right_iconx2_g2

0x7df2,	// (0x000b1c7f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd21,	// (0x000b9bae) list_medium_line_t3_right_iconx2_g

0x7dfc,	// (0x000b1c89) list_medium_line_t3_right_iconx2_t1

0x7e0c,	// (0x000b1c99) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd28,	// (0x000b9bb5) list_medium_line_t3_right_iconx2_t

0x1252,	// (0x000ab0df) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1252,	// (0x000ab0df) list_medium_line_x3_t4_g4_g1

0x125e,	// (0x000ab0eb) list_medium_line_x3_t4_g4_g2_ParamLimits

0x125e,	// (0x000ab0eb) list_medium_line_x3_t4_g4_g2

0x12e8,	// (0x000ab175) list_medium_line_x3_t4_g4_g3_ParamLimits

0x12e8,	// (0x000ab175) list_medium_line_x3_t4_g4_g3

0x7e1a,	// (0x000b1ca7) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7e1a,	// (0x000b1ca7) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2d,	// (0x000b9bba) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2d,	// (0x000b9bba) list_medium_line_x3_t4_g4_g

0x7e26,	// (0x000b1cb3) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7e26,	// (0x000b1cb3) list_medium_line_x3_t4_g4_t1

0x7e3d,	// (0x000b1cca) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7e3d,	// (0x000b1cca) list_medium_line_x3_t4_g4_t2

0x2505,	// (0x000ac392) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2505,	// (0x000ac392) list_medium_line_x3_t4_g4_t3

0x7e58,	// (0x000b1ce5) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7e58,	// (0x000b1ce5) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd36,	// (0x000b9bc3) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd36,	// (0x000b9bc3) list_medium_line_x3_t4_g4_t

0x7e75,	// (0x000b1d02) list_single_dyc_row_text_pane_t1_ParamLimits

0x7e75,	// (0x000b1d02) list_single_dyc_row_text_pane_t1

0x7ebe,	// (0x000b1d4b) list_single_dyc_row_text_pane_t2_ParamLimits

0x7ebe,	// (0x000b1d4b) list_single_dyc_row_text_pane_t2

0xa68b,	// (0x000b4518) list_single_dyc_row_text_pane_t3_ParamLimits

0xa68b,	// (0x000b4518) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3f,	// (0x000b9bcc) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3f,	// (0x000b9bcc) list_single_dyc_row_text_pane_t

0xa6af,	// (0x000b453c) list_single_dyc_row_pane_g1_ParamLimits

0xa6af,	// (0x000b453c) list_single_dyc_row_pane_g1

0xa6bb,	// (0x000b4548) list_single_dyc_row_pane_g2_ParamLimits

0xa6bb,	// (0x000b4548) list_single_dyc_row_pane_g2

0xa6c7,	// (0x000b4554) list_single_dyc_row_pane_g3_ParamLimits

0xa6c7,	// (0x000b4554) list_single_dyc_row_pane_g3

0xa6d3,	// (0x000b4560) list_single_dyc_row_pane_g4_ParamLimits

0xa6d3,	// (0x000b4560) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x000b9bd9) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x000b9bd9) list_single_dyc_row_pane_g

0xa6df,	// (0x000b456c) list_single_dyc_row_text_pane_ParamLimits

0xa6df,	// (0x000b456c) list_single_dyc_row_text_pane

0x936c,	// (0x000b31f9) bg_sp_fs_scroll_pane

0xe7ed,	// (0x000b867a) thumb_sp_fs_scroll_pane

0x6544,	// (0x000b03d1) list_medium_line_g1_ParamLimits

0x6544,	// (0x000b03d1) list_medium_line_g1

0x7ff3,	// (0x000b1e80) list_medium_line_t1_ParamLimits

0x7ff3,	// (0x000b1e80) list_medium_line_t1

0x1252,	// (0x000ab0df) list_medium_line_x2_g1_ParamLimits

0x1252,	// (0x000ab0df) list_medium_line_x2_g1

0x125e,	// (0x000ab0eb) list_medium_line_x2_g2_ParamLimits

0x125e,	// (0x000ab0eb) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x000b9be2) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x000b9be2) list_medium_line_x2_g

0xa6fe,	// (0x000b458b) list_medium_line_x2_t1_ParamLimits

0xa6fe,	// (0x000b458b) list_medium_line_x2_t1

0x1252,	// (0x000ab0df) list_medium_line_x3_g1_ParamLimits

0x1252,	// (0x000ab0df) list_medium_line_x3_g1

0x125e,	// (0x000ab0eb) list_medium_line_x3_g2_ParamLimits

0x125e,	// (0x000ab0eb) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x000b9be2) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x000b9be2) list_medium_line_x3_g

0xa6fe,	// (0x000b458b) list_medium_line_x3_t1_ParamLimits

0xa6fe,	// (0x000b458b) list_medium_line_x3_t1

0xe7f6,	// (0x000b8683) thumb_sp_fs_scroll_pane_g1

0xe7ff,	// (0x000b868c) thumb_sp_fs_scroll_pane_g2

0xe808,	// (0x000b8695) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x000b9be7) thumb_sp_fs_scroll_pane_g

0xe7f6,	// (0x000b8683) bg_sp_fs_scroll_pane_g1

0xe7ff,	// (0x000b868c) bg_sp_fs_scroll_pane_g2

0xe808,	// (0x000b8695) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x000b9be7) bg_sp_fs_scroll_pane_g

0x1252,	// (0x000ab0df) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1252,	// (0x000ab0df) list_medium_line_x2_t3_g4_g1

0x12dc,	// (0x000ab169) list_medium_line_x2_t3_g4_g2_ParamLimits

0x12dc,	// (0x000ab169) list_medium_line_x2_t3_g4_g2

0x125e,	// (0x000ab0eb) list_medium_line_x2_t3_g4_g3_ParamLimits

0x125e,	// (0x000ab0eb) list_medium_line_x2_t3_g4_g3

0x126a,	// (0x000ab0f7) list_medium_line_x2_t3_g4_g4_ParamLimits

0x126a,	// (0x000ab0f7) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000b914f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000b914f) list_medium_line_x2_t3_g4_g

0x8008,	// (0x000b1e95) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8008,	// (0x000b1e95) list_medium_line_x2_t3_g4_t1

0x8022,	// (0x000b1eaf) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8022,	// (0x000b1eaf) list_medium_line_x2_t3_g4_t2

0x129f,	// (0x000ab12c) list_medium_line_x2_t3_g4_t3_ParamLimits

0x129f,	// (0x000ab12c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x000b9bee) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x000b9bee) list_medium_line_x2_t3_g4_t

0x6544,	// (0x000b03d1) list_medium_line_g2_g1_ParamLimits

0x6544,	// (0x000b03d1) list_medium_line_g2_g1

0x6550,	// (0x000b03dd) list_medium_line_g2_g2_ParamLimits

0x6550,	// (0x000b03dd) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x000b98a0) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x000b98a0) list_medium_line_g2_g

0x803b,	// (0x000b1ec8) list_medium_line_g2_t1_ParamLimits

0x803b,	// (0x000b1ec8) list_medium_line_g2_t1

0x6544,	// (0x000b03d1) list_medium_line_t3_g2_g1_ParamLimits

0x6544,	// (0x000b03d1) list_medium_line_t3_g2_g1

0x6550,	// (0x000b03dd) list_medium_line_t3_g2_g2_ParamLimits

0x6550,	// (0x000b03dd) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x000b98a0) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x000b98a0) list_medium_line_t3_g2_g

0x8050,	// (0x000b1edd) list_medium_line_t3_g2_t1_ParamLimits

0x8050,	// (0x000b1edd) list_medium_line_t3_g2_t1

0x806a,	// (0x000b1ef7) list_medium_line_t3_g2_t2_ParamLimits

0x806a,	// (0x000b1ef7) list_medium_line_t3_g2_t2

0x8080,	// (0x000b1f0d) list_medium_line_t3_g2_t3_ParamLimits

0x8080,	// (0x000b1f0d) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x000b9bf5) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x000b9bf5) list_medium_line_t3_g2_t

0x7c2e,	// (0x000b1abb) list_medium_line_right_icon_g1

0x8097,	// (0x000b1f24) list_medium_line_right_icon_t1

0x6544,	// (0x000b03d1) list_medium_line_t2_g1_ParamLimits

0x6544,	// (0x000b03d1) list_medium_line_t2_g1

0x80a5,	// (0x000b1f32) list_medium_line_t2_t1_ParamLimits

0x80a5,	// (0x000b1f32) list_medium_line_t2_t1

0x80bf,	// (0x000b1f4c) list_medium_line_t2_t2_ParamLimits

0x80bf,	// (0x000b1f4c) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x000b9bfc) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x000b9bfc) list_medium_line_t2_t

0x6544,	// (0x000b03d1) list_medium_line_t3_g1_ParamLimits

0x6544,	// (0x000b03d1) list_medium_line_t3_g1

0x80d8,	// (0x000b1f65) list_medium_line_t3_t1_ParamLimits

0x80d8,	// (0x000b1f65) list_medium_line_t3_t1

0x80f2,	// (0x000b1f7f) list_medium_line_t3_t2_ParamLimits

0x80f2,	// (0x000b1f7f) list_medium_line_t3_t2

0x8108,	// (0x000b1f95) list_medium_line_t3_t3_ParamLimits

0x8108,	// (0x000b1f95) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x000b9c01) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x000b9c01) list_medium_line_t3_t

0x6544,	// (0x000b03d1) list_medium_line_g3_g1_ParamLimits

0x6544,	// (0x000b03d1) list_medium_line_g3_g1

0x811d,	// (0x000b1faa) list_medium_line_g3_g2_ParamLimits

0x811d,	// (0x000b1faa) list_medium_line_g3_g2

0x6550,	// (0x000b03dd) list_medium_line_g3_g3_ParamLimits

0x6550,	// (0x000b03dd) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x000b9c08) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x000b9c08) list_medium_line_g3_g

0x8129,	// (0x000b1fb6) list_medium_line_g3_t1_ParamLimits

0x8129,	// (0x000b1fb6) list_medium_line_g3_t1

0x6544,	// (0x000b03d1) list_medium_line_t2_g3_g1_ParamLimits

0x6544,	// (0x000b03d1) list_medium_line_t2_g3_g1

0x811d,	// (0x000b1faa) list_medium_line_t2_g3_g2_ParamLimits

0x811d,	// (0x000b1faa) list_medium_line_t2_g3_g2

0x6550,	// (0x000b03dd) list_medium_line_t2_g3_g3_ParamLimits

0x6550,	// (0x000b03dd) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x000b9c08) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x000b9c08) list_medium_line_t2_g3_g

0x813e,	// (0x000b1fcb) list_medium_line_t2_g3_t1_ParamLimits

0x813e,	// (0x000b1fcb) list_medium_line_t2_g3_t1

0x8158,	// (0x000b1fe5) list_medium_line_t2_g3_t2_ParamLimits

0x8158,	// (0x000b1fe5) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x000b9c0f) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x000b9c0f) list_medium_line_t2_g3_t

0x6544,	// (0x000b03d1) list_medium_line_t3_g3_g1_ParamLimits

0x6544,	// (0x000b03d1) list_medium_line_t3_g3_g1

0x811d,	// (0x000b1faa) list_medium_line_t3_g3_g2_ParamLimits

0x811d,	// (0x000b1faa) list_medium_line_t3_g3_g2

0x6550,	// (0x000b03dd) list_medium_line_t3_g3_g3_ParamLimits

0x6550,	// (0x000b03dd) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x000b9c08) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x000b9c08) list_medium_line_t3_g3_g

0x8176,	// (0x000b2003) list_medium_line_t3_g3_t1_ParamLimits

0x8176,	// (0x000b2003) list_medium_line_t3_g3_t1

0x818f,	// (0x000b201c) list_medium_line_t3_g3_t2_ParamLimits

0x818f,	// (0x000b201c) list_medium_line_t3_g3_t2

0x81a5,	// (0x000b2032) list_medium_line_t3_g3_t3_ParamLimits

0x81a5,	// (0x000b2032) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x000b9c14) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x000b9c14) list_medium_line_t3_g3_t

0x7dea,	// (0x000b1c77) list_medium_line_right_iconx2_g1

0x7c2e,	// (0x000b1abb) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x000b9c1b) list_medium_line_right_iconx2_g

0xa714,	// (0x000b45a1) list_medium_line_right_iconx2_t1

0x7dea,	// (0x000b1c77) list_medium_line_t2_right_iconx2_g1

0x7c2e,	// (0x000b1abb) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x000b9c1b) list_medium_line_t2_right_iconx2_g

0x81bf,	// (0x000b204c) list_medium_line_t2_right_iconx2_t1

0x81cf,	// (0x000b205c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x000b9c20) list_medium_line_t2_right_iconx2_t

0x81e1,	// (0x000b206e) list_medium_line_x4_t4_t1

0x81ef,	// (0x000b207c) list_medium_line_x4_t4_t2

0x81ff,	// (0x000b208c) list_medium_line_x4_t4_t3

0x820f,	// (0x000b209c) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x000b9c25) list_medium_line_x4_t4_t

0x8262,	// (0x000b20ef) tport_appsw_pane_ParamLimits

0x8262,	// (0x000b20ef) tport_appsw_pane

0x827a,	// (0x000b2107) tport_contact_pane_ParamLimits

0x827a,	// (0x000b2107) tport_contact_pane

0x8292,	// (0x000b211f) tport_listscroll_pane_ParamLimits

0x8292,	// (0x000b211f) tport_listscroll_pane

0x82ac,	// (0x000b2139) cell_tport_appsw_pane_ParamLimits

0x82ac,	// (0x000b2139) cell_tport_appsw_pane

0xd6ba,	// (0x000b7547) tport_appsw_pane_g1_ParamLimits

0xd6ba,	// (0x000b7547) tport_appsw_pane_g1

0xe811,	// (0x000b869e) tport_contact_pane_g1

0xe81a,	// (0x000b86a7) tport_contact_pane_t1

0xe828,	// (0x000b86b5) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x000b9c2e) tport_contact_pane_t

0xe836,	// (0x000b86c3) list_tport_pane

0xe83f,	// (0x000b86cc) scroll_pane_cp_030

0x82f4,	// (0x000b2181) cell_tport_appsw_pane_g1

0x8304,	// (0x000b2191) cell_tport_appsw_pane_t1

0x8312,	// (0x000b219f) grid_highlight_pane_cp019

0x831a,	// (0x000b21a7) list_tport_double_graphic_pane_ParamLimits

0x831a,	// (0x000b21a7) list_tport_double_graphic_pane

0xa4ae,	// (0x000b433b) list_highlight_pane_cp023_ParamLimits

0xa4ae,	// (0x000b433b) list_highlight_pane_cp023

0x8327,	// (0x000b21b4) list_tport_double_graphic_pane_g1_ParamLimits

0x8327,	// (0x000b21b4) list_tport_double_graphic_pane_g1

0x8334,	// (0x000b21c1) list_tport_double_graphic_pane_t1_ParamLimits

0x8334,	// (0x000b21c1) list_tport_double_graphic_pane_t1

0x8349,	// (0x000b21d6) list_tport_double_graphic_pane_t2_ParamLimits

0x8349,	// (0x000b21d6) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x000b9c3a) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x000b9c3a) list_tport_double_graphic_pane_t

0x936c,	// (0x000b31f9) main_cale_note_pane

0x5cf4,	// (0x000afb81) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5cf4,	// (0x000afb81) cell_vitu2_function_top_wide_pane_cp01

0x7760,	// (0x000b15ed) wait_bar_pane_cp05_ParamLimits

0xa4ae,	// (0x000b433b) listscroll_cmail_pane

0xe848,	// (0x000b86d5) list_cmail_pane

0x835b,	// (0x000b21e8) list_cmail_body_pane

0x836f,	// (0x000b21fc) list_single_cmail_header_caption_pane

0x8386,	// (0x000b2213) list_single_cmail_header_detail_pane_ParamLimits

0x8386,	// (0x000b2213) list_single_cmail_header_detail_pane

0xe858,	// (0x000b86e5) list_single_cmail_header_caption_pane_t1

0x83b0,	// (0x000b223d) list_single_cmail_header_detail_pane_g1_ParamLimits

0x83b0,	// (0x000b223d) list_single_cmail_header_detail_pane_g1

0xa722,	// (0x000b45af) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa722,	// (0x000b45af) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x000b9c3f) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x000b9c3f) list_single_cmail_header_detail_pane_g

0xa72e,	// (0x000b45bb) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa72e,	// (0x000b45bb) list_single_cmail_header_detail_pane_t1

0xa78e,	// (0x000b461b) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa78e,	// (0x000b461b) list_single_cmail_header_editor_pane_bg

0xe32b,	// (0x000b81b8) list_cmail_body_pane_g1

0xe87c,	// (0x000b8709) list_cmail_body_pane_t1

0xd6da,	// (0x000b7567) list_single_cmail_header_editor_pane_bg_g1

0xac14,	// (0x000b4aa1) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6ea,	// (0x000b7577) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6e2,	// (0x000b756f) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd916,	// (0x000b77a3) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd70a,	// (0x000b7597) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6fa,	// (0x000b7587) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd702,	// (0x000b758f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xabf4,	// (0x000b4a81) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x83c8,	// (0x000b2255) calenote_gesture_pane_ParamLimits

0x83c8,	// (0x000b2255) calenote_gesture_pane

0x83e8,	// (0x000b2275) calenote_window_pane_ParamLimits

0x83e8,	// (0x000b2275) calenote_window_pane

0xe88a,	// (0x000b8717) popup_note_window_cp01

0x8404,	// (0x000b2291) calenote_swipe_1_pane_ParamLimits

0x8404,	// (0x000b2291) calenote_swipe_1_pane

0x7bd0,	// (0x000b1a5d) calenote_swipe_2_pane_ParamLimits

0x7bd0,	// (0x000b1a5d) calenote_swipe_2_pane

0xe697,	// (0x000b8524) calenote_swipe_1_pane_g1_ParamLimits

0xe697,	// (0x000b8524) calenote_swipe_1_pane_g1

0xe6a4,	// (0x000b8531) calenote_swipe_1_pane_g2_ParamLimits

0xe6a4,	// (0x000b8531) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x000b9b63) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x000b9b63) calenote_swipe_1_pane_g

0xe89c,	// (0x000b8729) calenote_swipe_1_pane_t1_ParamLimits

0xe89c,	// (0x000b8729) calenote_swipe_1_pane_t1

0xe697,	// (0x000b8524) calenote_swipe_2_pane_g1_ParamLimits

0xe697,	// (0x000b8524) calenote_swipe_2_pane_g1

0xe8bb,	// (0x000b8748) calenote_swipe_2_pane_g2_ParamLimits

0xe8bb,	// (0x000b8748) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x000b9c4b) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x000b9c4b) calenote_swipe_2_pane_g

0xe8c7,	// (0x000b8754) calenote_swipe_2_pane_t1_ParamLimits

0xe8c7,	// (0x000b8754) calenote_swipe_2_pane_t1

0x936c,	// (0x000b31f9) main_mup_navstr_pane

0x49bc,	// (0x000ae849) main_mup3_pane_t7_ParamLimits

0x49bc,	// (0x000ae849) main_mup3_pane_t7

0x9ab5,	// (0x000b3942) main_mp4_pane_g6_ParamLimits

0x9ab5,	// (0x000b3942) main_mp4_pane_g6

0x9c59,	// (0x000b3ae6) main_image3_pane_t4_ParamLimits

0x9c59,	// (0x000b3ae6) main_image3_pane_t4

0x8419,	// (0x000b22a6) popup_navstr_preview_pane_ParamLimits

0x8419,	// (0x000b22a6) popup_navstr_preview_pane

0x842d,	// (0x000b22ba) scroll_navstr_pane_ParamLimits

0x842d,	// (0x000b22ba) scroll_navstr_pane

0x936c,	// (0x000b31f9) bg_popup_preview_window_pane_cp04

0xe8ee,	// (0x000b877b) popup_navstr_preview_pane_t1

0x8441,	// (0x000b22ce) scroll_navstr_pane_g1_ParamLimits

0x8441,	// (0x000b22ce) scroll_navstr_pane_g1

0x8455,	// (0x000b22e2) scroll_navstr_pane_t1_ParamLimits

0x8455,	// (0x000b22e2) scroll_navstr_pane_t1

0xe893,	// (0x000b8720) bg_button_pane_cp014

0xe893,	// (0x000b8720) bg_button_pane_cp030

0x7a6a,	// (0x000b18f7) list_double_fisheye_pane_g4_ParamLimits

0x7a6a,	// (0x000b18f7) list_double_fisheye_pane_g4

0x7a76,	// (0x000b1903) list_double_fisheye_pane_g5_ParamLimits

0x7a76,	// (0x000b1903) list_double_fisheye_pane_g5

0xcaad,	// (0x000b693a) sp_fs_scroll_pane_cp03

0xe78a,	// (0x000b8617) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe796,	// (0x000b8623) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x000b9b80) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7a2,	// (0x000b862f) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe850,	// (0x000b86dd) sp_fs_scroll_pane_cp02

0xa3a7,	// (0x000b4234) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa3a7,	// (0x000b4234) popup_sp_fs_calendar_preview_list_single_pane

0x936c,	// (0x000b31f9) main_cam6_pano_pane

0x93e4,	// (0x000b3271) main_mup3_pane_ParamLimits

0x936c,	// (0x000b31f9) main_phacti_pane

0x7633,	// (0x000b14c0) bg_button_pane_cp11

0x764d,	// (0x000b14da) main_mobtv_info_pane_g2_ParamLimits

0x764d,	// (0x000b14da) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x000b9ae0) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x000b9ae0) main_mobtv_info_pane_g

0x782a,	// (0x000b16b7) sc_clock_pane_t5_ParamLimits

0x782a,	// (0x000b16b7) sc_clock_pane_t5

0x78e5,	// (0x000b1772) main_radioblah_pane_g1_ParamLimits

0xe5c8,	// (0x000b8455) main_radioblah_pane_t3_ParamLimits

0xe5c8,	// (0x000b8455) main_radioblah_pane_t3

0xe5e0,	// (0x000b846d) main_radioblah_pane_t4_ParamLimits

0xe5e0,	// (0x000b846d) main_radioblah_pane_t4

0x790d,	// (0x000b179a) main_radioblah_text_pane_ParamLimits

0x790d,	// (0x000b179a) main_radioblah_text_pane

0x791f,	// (0x000b17ac) main_radioblah_info_pane_g1_ParamLimits

0x79b8,	// (0x000b1845) main_radioblah_info_pane_t4_ParamLimits

0x79b8,	// (0x000b1845) main_radioblah_info_pane_t4

0xa4ae,	// (0x000b433b) main_sp_fs_calendar_pane

0x846c,	// (0x000b22f9) main_phacti_pane_g1

0x8474,	// (0x000b2301) phacti_note_pane_ParamLimits

0x8474,	// (0x000b2301) phacti_note_pane

0xe905,	// (0x000b8792) phacti_term_pane_ParamLimits

0xe905,	// (0x000b8792) phacti_term_pane

0xe91a,	// (0x000b87a7) phacti_note_pane_t1_ParamLimits

0xe91a,	// (0x000b87a7) phacti_note_pane_t1

0xa7a5,	// (0x000b4632) phacti_term_pane_g1

0xa7ad,	// (0x000b463a) phacti_term_pane_t1_ParamLimits

0xa7ad,	// (0x000b463a) phacti_term_pane_t1

0xe931,	// (0x000b87be) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe939,	// (0x000b87c6) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x000b9c55) popup_sp_fs_calendar_preview_list_single_pane_g

0xe941,	// (0x000b87ce) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe941,	// (0x000b87ce) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe957,	// (0x000b87e4) aid_popup_sp_fs_bg_corner_pane

0xcc6d,	// (0x000b6afa) popup_sp_fs_calendar_preview_bg_pane_g1

0x936c,	// (0x000b31f9) popup_sp_fs_calendar_preview_bg_pane

0x10db,	// (0x000aaf68) popup_sp_fs_calendar_preview_list_pane

0xc859,	// (0x000b66e6) bg_main_sp_fs_cale_pane_ParamLimits

0xc859,	// (0x000b66e6) bg_main_sp_fs_cale_pane

0xa7e0,	// (0x000b466d) listscroll_cale_mrui_pane_ParamLimits

0xa7e0,	// (0x000b466d) listscroll_cale_mrui_pane

0xa7f5,	// (0x000b4682) listscroll_sp_fs_schedule_track_pane

0xa7fe,	// (0x000b468b) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa7fe,	// (0x000b468b) main_sp_fs_ctrlbar_pane_cp01

0xe95f,	// (0x000b87ec) main_sp_fs_ribbon_pane

0xa811,	// (0x000b469e) popup_sp_fs_cale_preview_window

0x84e9,	// (0x000b2376) list_single_sp_fs_schedule_track_pane_ParamLimits

0x84e9,	// (0x000b2376) list_single_sp_fs_schedule_track_pane

0xa4ae,	// (0x000b433b) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa4ae,	// (0x000b433b) bg_sp_fs_highlight_list_pane_cp03

0x84fd,	// (0x000b238a) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x84fd,	// (0x000b238a) list_single_sp_fs_schedule_track_pane_g1

0x8509,	// (0x000b2396) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8509,	// (0x000b2396) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x000b9c5a) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x000b9c5a) list_single_sp_fs_schedule_track_pane_g

0x8515,	// (0x000b23a2) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8515,	// (0x000b23a2) list_single_sp_fs_schedule_track_pane_t1

0x852f,	// (0x000b23bc) sp_fs_schedule_track_pane_ParamLimits

0x852f,	// (0x000b23bc) sp_fs_schedule_track_pane

0xe967,	// (0x000b87f4) sp_fs_schedule_track_pane_g1

0xe96f,	// (0x000b87fc) sp_fs_schedule_track_pane_g2

0xe977,	// (0x000b8804) sp_fs_schedule_track_pane_g3

0xe97f,	// (0x000b880c) sp_fs_schedule_track_pane_g4

0xe987,	// (0x000b8814) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x000b9c5f) sp_fs_schedule_track_pane_g

0xd6da,	// (0x000b7567) bg_sp_fs_schedule_viewer_highlight_g1

0xac14,	// (0x000b4aa1) bg_sp_fs_schedule_viewer_highlight_g2

0xd6e2,	// (0x000b756f) bg_sp_fs_schedule_viewer_highlight_g3

0xd6ea,	// (0x000b7577) bg_sp_fs_schedule_viewer_highlight_g4

0xd916,	// (0x000b77a3) bg_sp_fs_schedule_viewer_highlight_g5

0xd6fa,	// (0x000b7587) bg_sp_fs_schedule_viewer_highlight_g6

0xd702,	// (0x000b758f) bg_sp_fs_schedule_viewer_highlight_g7

0xd70a,	// (0x000b7597) bg_sp_fs_schedule_viewer_highlight_g8

0xabf4,	// (0x000b4a81) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x000b9c6a) bg_sp_fs_schedule_viewer_highlight_g

0x936c,	// (0x000b31f9) bg_main_sp_fs_ribbon_pane

0x8540,	// (0x000b23cd) main_sp_fs_ribbon_pane_g1

0xe98f,	// (0x000b881c) main_sp_fs_ribbon_pane_t1

0x8549,	// (0x000b23d6) main_sp_fs_ribbon_pane_t2

0xe99e,	// (0x000b882b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x000b9c7d) main_sp_fs_ribbon_pane_t

0xe9ad,	// (0x000b883a) main_sp_fs_ribbon_scheduler_pane

0xe9b5,	// (0x000b8842) bg_main_sp_fs_ribbon_pane_g1

0xe9be,	// (0x000b884b) bg_main_sp_fs_ribbon_pane_g2

0xe9c7,	// (0x000b8854) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x000b9c84) bg_main_sp_fs_ribbon_pane_g

0xe9cf,	// (0x000b885c) main_sp_fs_ribbon_scheduler_pane_g1

0xe9d8,	// (0x000b8865) main_sp_fs_ribbon_scheduler_pane_g2

0xe9e1,	// (0x000b886e) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x000b9c8b) main_sp_fs_ribbon_scheduler_pane_g

0xe9ea,	// (0x000b8877) list_cale_mrui_pane

0x8558,	// (0x000b23e5) sp_fs_scroll_pane_cp07_ParamLimits

0x8558,	// (0x000b23e5) sp_fs_scroll_pane_cp07

0x8574,	// (0x000b2401) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8574,	// (0x000b2401) bg_sp_fs_schedule_viewer_highlight

0xe9f7,	// (0x000b8884) list_single_sp_fs_schedule_track_pane_cp01

0xe9ff,	// (0x000b888c) list_sp_fs_schedule_track_pane

0xea07,	// (0x000b8894) sp_fs_scroll_pane_cp06_ParamLimits

0xea07,	// (0x000b8894) sp_fs_scroll_pane_cp06

0xcc6d,	// (0x000b6afa) bgmain_sp_fs_calendar_pane_g1

0x8584,	// (0x000b2411) list_single_cale_mrui_pane_ParamLimits

0x8584,	// (0x000b2411) list_single_cale_mrui_pane

0xa823,	// (0x000b46b0) list_single_cale_mrui_row_pane_ParamLimits

0xa823,	// (0x000b46b0) list_single_cale_mrui_row_pane

0xa830,	// (0x000b46bd) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa830,	// (0x000b46bd) list_single_cale_mrui_row_pane_g1

0xa868,	// (0x000b46f5) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa868,	// (0x000b46f5) list_single_cale_mrui_row_pane_t1

0x85a5,	// (0x000b2432) list_single_cale_mrui_row_pane_t2_ParamLimits

0x85a5,	// (0x000b2432) list_single_cale_mrui_row_pane_t2

0xa87a,	// (0x000b4707) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa87a,	// (0x000b4707) list_single_cale_mrui_row_pane_t3

0xa8a9,	// (0x000b4736) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa8a9,	// (0x000b4736) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0c,	// (0x000b9c99) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0c,	// (0x000b9c99) list_single_cale_mrui_row_pane_t

0x860d,	// (0x000b249a) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x860d,	// (0x000b249a) list_single_cmail_header_editor_pane_bg_cp01

0x8633,	// (0x000b24c0) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8633,	// (0x000b24c0) list_single_cmail_header_editor_pane_bg_cp02

0x8653,	// (0x000b24e0) main_radioblah_text_pane_t1_ParamLimits

0x8653,	// (0x000b24e0) main_radioblah_text_pane_t1

0xea26,	// (0x000b88b3) cam6_indi_pane_cp01

0xea2e,	// (0x000b88bb) cam6_mode_pane_cp01

0xea36,	// (0x000b88c3) cam6_pano_pane

0xea3f,	// (0x000b88cc) cam6_zoom_pane_cp01

0xea47,	// (0x000b88d4) cam6_pano_image_pane

0xea52,	// (0x000b88df) cam6_pano_pane_g1

0xe32b,	// (0x000b81b8) cam6_pano_pane_g2

0xea5b,	// (0x000b88e8) cam6_pano_pane_g3

0xea64,	// (0x000b88f1) cam6_pano_pane_g4

0xd218,	// (0x000b70a5) cam6_pano_pane_g5

0xea6d,	// (0x000b88fa) cam6_pano_pane_g6

0xea77,	// (0x000b8904) cam6_pano_pane_g7

0xea7f,	// (0x000b890c) cam6_pano_pane_g8

0xea88,	// (0x000b8915) cam6_pano_pane_g9

0x0008,

0xfe15,	// (0x000b9ca2) cam6_pano_pane_g

0x936c,	// (0x000b31f9) main_browser_tag_pane

0xe8e6,	// (0x000b8773) grid_navstr_albumart_pane

0xea93,	// (0x000b8920) cell_navstr_albumart_pane_ParamLimits

0xea93,	// (0x000b8920) cell_navstr_albumart_pane

0xeab3,	// (0x000b8940) cell_navstr_albumart_pane_g1

0xc62a,	// (0x000b64b7) cell_navstr_albumart_pane_g2

0xc63a,	// (0x000b64c7) cell_navstr_albumart_pane_g3

0xc632,	// (0x000b64bf) cell_navstr_albumart_pane_g4

0x0003,

0xfe28,	// (0x000b9cb5) cell_navstr_albumart_pane_g

0x866e,	// (0x000b24fb) bt_list_pane_ParamLimits

0x866e,	// (0x000b24fb) bt_list_pane

0x8682,	// (0x000b250f) bt_list_pane_t1

0x8691,	// (0x000b251e) bt_list_pane_t2

0x0001,

0xfe31,	// (0x000b9cbe) bt_list_pane_t

0x936c,	// (0x000b31f9) main_cale_prevew_pane

0x86a0,	// (0x000b252d) popup_cale_preview_window_ParamLimits

0x86a0,	// (0x000b252d) popup_cale_preview_window

0xa4ae,	// (0x000b433b) bg_popup_preview_window_pane_cp05_ParamLimits

0xa4ae,	// (0x000b433b) bg_popup_preview_window_pane_cp05

0xeabb,	// (0x000b8948) list_cale_preview_pane_ParamLimits

0xeabb,	// (0x000b8948) list_cale_preview_pane

0x86b9,	// (0x000b2546) list_double_cale_preview_pane_ParamLimits

0x86b9,	// (0x000b2546) list_double_cale_preview_pane

0xd712,	// (0x000b759f) list_single_cale_preview_pane_ParamLimits

0xd712,	// (0x000b759f) list_single_cale_preview_pane

0x86cb,	// (0x000b2558) list_single_cale_preview_pane_g1

0x86d3,	// (0x000b2560) list_single_cale_preview_pane_t1_ParamLimits

0x86d3,	// (0x000b2560) list_single_cale_preview_pane_t1

0x86e8,	// (0x000b2575) list_double_cale_preview_pane_g1

0x86f0,	// (0x000b257d) list_double_cale_preview_pane_t1_ParamLimits

0x86f0,	// (0x000b257d) list_double_cale_preview_pane_t1

0x8705,	// (0x000b2592) list_double_cale_preview_pane_t2_ParamLimits

0x8705,	// (0x000b2592) list_double_cale_preview_pane_t2

0x0001,

0xfe36,	// (0x000b9cc3) list_double_cale_preview_pane_t_ParamLimits

0xfe36,	// (0x000b9cc3) list_double_cale_preview_pane_t

0x936c,	// (0x000b31f9) main_ezdial_pane

0xa4ae,	// (0x000b433b) main_sp_fs_email_pane_ParamLimits

0x7c58,	// (0x000b1ae5) cmail_ddmenu_btn01_pane_ParamLimits

0x7c58,	// (0x000b1ae5) cmail_ddmenu_btn01_pane

0x7c6b,	// (0x000b1af8) cmail_ddmenu_btn02_pane_ParamLimits

0x7c6b,	// (0x000b1af8) cmail_ddmenu_btn02_pane

0x7c8e,	// (0x000b1b1b) cmail_ddmenu_btn03_pane_ParamLimits

0x7c8e,	// (0x000b1b1b) cmail_ddmenu_btn03_pane

0x7cb4,	// (0x000b1b41) main_sp_fs_ctrlbar_pane_ParamLimits

0x7cd8,	// (0x000b1b65) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x835b,	// (0x000b21e8) list_cmail_body_pane_ParamLimits

0xe866,	// (0x000b86f3) bg_button_pane_cp12

0xe86f,	// (0x000b86fc) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe86f,	// (0x000b86fc) list_single_cmail_header_detail_pane_g3

0xa76a,	// (0x000b45f7) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa76a,	// (0x000b45f7) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x000b9c46) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x000b9c46) list_single_cmail_header_detail_pane_t

0xa7c2,	// (0x000b464f) phacti_term_pane_t2_ParamLimits

0xa7c2,	// (0x000b464f) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x000b9c50) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x000b9c50) phacti_term_pane_t

0xeac7,	// (0x000b8954) aid_size_list_single_double

0x871d,	// (0x000b25aa) popup_ezdial_listscroll_window

0x8739,	// (0x000b25c6) popup_number_entry_window_cp01

0xa9bb,	// (0x000b4848) bg_popup_call_pane_cp09

0xead3,	// (0x000b8960) ezdial_list_pane

0xeadb,	// (0x000b8968) scroll_pane_cp23

0xc859,	// (0x000b66e6) bg_button_pane_cp028_ParamLimits

0xc859,	// (0x000b66e6) bg_button_pane_cp028

0x8747,	// (0x000b25d4) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8747,	// (0x000b25d4) cmail_ddmenu_btn01_pane_g1

0x8753,	// (0x000b25e0) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8753,	// (0x000b25e0) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3b,	// (0x000b9cc8) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3b,	// (0x000b9cc8) cmail_ddmenu_btn01_pane_g

0xeae3,	// (0x000b8970) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeae3,	// (0x000b8970) cmail_ddmenu_btn01_pane_t1

0xc859,	// (0x000b66e6) bg_button_pane_cp029_ParamLimits

0xc859,	// (0x000b66e6) bg_button_pane_cp029

0x875f,	// (0x000b25ec) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x875f,	// (0x000b25ec) cmail_ddmenu_btn02_pane_g1

0x8778,	// (0x000b2605) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8778,	// (0x000b2605) cmail_ddmenu_btn02_pane_t1

0xa4ae,	// (0x000b433b) bg_button_pane_cp031_ParamLimits

0xa4ae,	// (0x000b433b) bg_button_pane_cp031

0x875f,	// (0x000b25ec) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x875f,	// (0x000b25ec) cmail_ddmenu_btn03_pane_g1

0x8778,	// (0x000b2605) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8778,	// (0x000b2605) cmail_ddmenu_btn03_pane_t1

0x5569,	// (0x000af3f6) cell_dialer2_keypad_pane_t1_ParamLimits

0x5583,	// (0x000af410) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5583,	// (0x000af410) cell_dialer2_keypad_pane_t1_copy1

0x748c,	// (0x000b1319) ncimui_group_button_pane

0xa4ae,	// (0x000b433b) main_sp_fs_calendar_pane_ParamLimits

0x836f,	// (0x000b21fc) list_single_cmail_header_caption_pane_ParamLimits

0xa7d7,	// (0x000b4664) aid_recal_txt_sm_pane

0x936c,	// (0x000b31f9) mian_recal_day_pane

0xa811,	// (0x000b469e) popup_sp_fs_cale_preview_window_ParamLimits

0xeaf8,	// (0x000b8985) list_recal_day_pane

0xa8f3,	// (0x000b4780) list_single_recal_day_pane_ParamLimits

0xa8f3,	// (0x000b4780) list_single_recal_day_pane

0xeb1f,	// (0x000b89ac) list_single_recal_day_pane_g1_ParamLimits

0xeb1f,	// (0x000b89ac) list_single_recal_day_pane_g1

0xa905,	// (0x000b4792) list_single_recal_day_pane_g2_ParamLimits

0xa905,	// (0x000b4792) list_single_recal_day_pane_g2

0xa915,	// (0x000b47a2) list_single_recal_day_pane_g3_ParamLimits

0xa915,	// (0x000b47a2) list_single_recal_day_pane_g3

0x879c,	// (0x000b2629) list_single_recal_day_pane_g4_ParamLimits

0x879c,	// (0x000b2629) list_single_recal_day_pane_g4

0xa921,	// (0x000b47ae) list_single_recal_day_pane_g5_ParamLimits

0xa921,	// (0x000b47ae) list_single_recal_day_pane_g5

0xa931,	// (0x000b47be) list_single_recal_day_pane_g6_ParamLimits

0xa931,	// (0x000b47be) list_single_recal_day_pane_g6

0x0004,

0xfe4a,	// (0x000b9cd7) list_single_recal_day_pane_g_ParamLimits

0xfe4a,	// (0x000b9cd7) list_single_recal_day_pane_g

0xa945,	// (0x000b47d2) list_single_recal_day_pane_t1

0xa957,	// (0x000b47e4) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x000b9ce2) list_single_recal_day_pane_t

0x87bc,	// (0x000b2649) ncimui_query_button_pane_ParamLimits

0x87bc,	// (0x000b2649) ncimui_query_button_pane

0x87cc,	// (0x000b2659) ncimui_query_button_pane_t1_ParamLimits

0x87cc,	// (0x000b2659) ncimui_query_button_pane_t1

0xeb2b,	// (0x000b89b8) ncimui_query_button_pane_t2_ParamLimits

0xeb2b,	// (0x000b89b8) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x000b9ce7) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x000b9ce7) ncimui_query_button_pane_t

0x87df,	// (0x000b266c) query_button_pane_ParamLimits

0x87df,	// (0x000b266c) query_button_pane

0x936c,	// (0x000b31f9) bg_button_pane_cp0028

0xeb3e,	// (0x000b89cb) query_button_pane_t1

0x3625,	// (0x000ad4b2) main_tport_pane_ParamLimits

0x821f,	// (0x000b20ac) bg_popup_window_pane_cp01_ParamLimits

0x821f,	// (0x000b20ac) bg_popup_window_pane_cp01

0x823a,	// (0x000b20c7) heading_pane_cp08_ParamLimits

0x823a,	// (0x000b20c7) heading_pane_cp08

0x824d,	// (0x000b20da) heading_pane_cp07_ParamLimits

0x824d,	// (0x000b20da) heading_pane_cp07

0x82f4,	// (0x000b2181) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x000b9c33) cell_tport_appsw_pane_g

0xa42d,	// (0x000b42ba) input_candi_list_open_g1

0xadd7,	// (0x000b4c64) list_cale_time_pane_g6_ParamLimits

0xadd7,	// (0x000b4c64) list_cale_time_pane_g6

0x43ed,	// (0x000ae27a) aid_size_touch_calib_1_ParamLimits

0x43ed,	// (0x000ae27a) aid_size_touch_calib_1

0x43ff,	// (0x000ae28c) aid_size_touch_calib_2_ParamLimits

0x43ff,	// (0x000ae28c) aid_size_touch_calib_2

0x4417,	// (0x000ae2a4) aid_size_touch_calib_3_ParamLimits

0x4417,	// (0x000ae2a4) aid_size_touch_calib_3

0x4435,	// (0x000ae2c2) aid_size_touch_calib_4_ParamLimits

0x4435,	// (0x000ae2c2) aid_size_touch_calib_4

0x444d,	// (0x000ae2da) main_touch_calib_button_group_pane_ParamLimits

0x444d,	// (0x000ae2da) main_touch_calib_button_group_pane

0x4465,	// (0x000ae2f2) main_touch_calib_pane_g1_ParamLimits

0x4477,	// (0x000ae304) main_touch_calib_pane_g2_ParamLimits

0x4489,	// (0x000ae316) main_touch_calib_pane_g3_ParamLimits

0x449b,	// (0x000ae328) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x000b95f1) main_touch_calib_pane_g_ParamLimits

0x44ad,	// (0x000ae33a) main_touch_calib_pane_t1_ParamLimits

0x44c7,	// (0x000ae354) main_touch_calib_pane_t2_ParamLimits

0x44e1,	// (0x000ae36e) main_touch_calib_pane_t3_ParamLimits

0x44f5,	// (0x000ae382) main_touch_calib_pane_t4_ParamLimits

0x4509,	// (0x000ae396) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x000b95fa) main_touch_calib_pane_t_ParamLimits

0xcfbb,	// (0x000b6e48) list_single_fp_cale_pane_g3_ParamLimits

0xcfbb,	// (0x000b6e48) list_single_fp_cale_pane_g3

0x93e4,	// (0x000b3271) bg_button_pane_cp012_ParamLimits

0x93e4,	// (0x000b3271) bg_vkb2_func_pane_cp03_ParamLimits

0x64fa,	// (0x000b0387) cell_vitu2_function_top_pane_g1_ParamLimits

0x93e4,	// (0x000b3271) bg_vkb2_func_pane_cp04_ParamLimits

0x741a,	// (0x000b12a7) main_ncimui_button_group_pane_ParamLimits

0x741a,	// (0x000b12a7) main_ncimui_button_group_pane

0x747a,	// (0x000b1307) main_ncimui_pane_t3_ParamLimits

0x747a,	// (0x000b1307) main_ncimui_pane_t3

0xe8fc,	// (0x000b8789) phacti_button_group_pane

0xeac7,	// (0x000b8954) aid_size_list_single_double_ParamLimits

0x871d,	// (0x000b25aa) popup_ezdial_listscroll_window_ParamLimits

0x8739,	// (0x000b25c6) popup_number_entry_window_cp01_ParamLimits

0x87f2,	// (0x000b267f) phacti_button_pane_ParamLimits

0x87f2,	// (0x000b267f) phacti_button_pane

0x936c,	// (0x000b31f9) bg_button_pane_cp14

0xeb4c,	// (0x000b89d9) phacti_button_pane_t1

0x8803,	// (0x000b2690) main_touch_calib_button_pane_ParamLimits

0x8803,	// (0x000b2690) main_touch_calib_button_pane

0xa265,	// (0x000b40f2) bg_button_pane_cp18_ParamLimits

0xa265,	// (0x000b40f2) bg_button_pane_cp18

0xeb5a,	// (0x000b89e7) main_touch_calib_button_pane_t1_ParamLimits

0xeb5a,	// (0x000b89e7) main_touch_calib_button_pane_t1

0xeb70,	// (0x000b89fd) main_touch_calib_button_pane_t2_ParamLimits

0xeb70,	// (0x000b89fd) main_touch_calib_button_pane_t2

0x0001,

0xfe5f,	// (0x000b9cec) main_touch_calib_button_pane_t_ParamLimits

0xfe5f,	// (0x000b9cec) main_touch_calib_button_pane_t

0x936c,	// (0x000b31f9) cell_ncimui_button_pane

0x936c,	// (0x000b31f9) bg_button_pane_cp032

0xeb8e,	// (0x000b8a1b) cell_ncimui_button_pane_t1

0x9c39,	// (0x000b3ac6) image3_infobar_pane_ParamLimits

0x9c39,	// (0x000b3ac6) image3_infobar_pane

0x7856,	// (0x000b16e3) fs_bigclock_status_pane_ParamLimits

0x7856,	// (0x000b16e3) fs_bigclock_status_pane

0x7863,	// (0x000b16f0) main_fs_bigclock_clock_pane_ParamLimits

0x7863,	// (0x000b16f0) main_fs_bigclock_clock_pane

0x7883,	// (0x000b1710) main_fs_bigclock_indi_pane_ParamLimits

0x7883,	// (0x000b1710) main_fs_bigclock_indi_pane

0x78ad,	// (0x000b173a) main_fs_bigclock_swipe_pane_ParamLimits

0x78ad,	// (0x000b173a) main_fs_bigclock_swipe_pane

0x936c,	// (0x000b31f9) main_fs_clock_dumped_data

0xe438,	// (0x000b82c5) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe438,	// (0x000b82c5) list_single_fs_bigclock_indicator_pane_g1

0xe454,	// (0x000b82e1) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe454,	// (0x000b82e1) list_single_fs_bigclock_indicator_pane_g2

0xe46e,	// (0x000b82fb) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe46e,	// (0x000b82fb) list_single_fs_bigclock_indicator_pane_g3

0xe488,	// (0x000b8315) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe488,	// (0x000b8315) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x000b9b14) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x000b9b14) list_single_fs_bigclock_indicator_pane_g

0xe4b3,	// (0x000b8340) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4b3,	// (0x000b8340) list_single_fs_bigclock_indicator_pane_t1

0xe4db,	// (0x000b8368) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4db,	// (0x000b8368) list_single_fs_bigclock_indicator_pane_t2

0xe503,	// (0x000b8390) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe503,	// (0x000b8390) list_single_fs_bigclock_indicator_pane_t3

0xe52b,	// (0x000b83b8) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe52b,	// (0x000b83b8) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x000b9b1f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x000b9b1f) list_single_fs_bigclock_indicator_pane_t

0xeb9c,	// (0x000b8a29) image3_infobar_fav_pane_ParamLimits

0xeb9c,	// (0x000b8a29) image3_infobar_fav_pane

0xebac,	// (0x000b8a39) image3_infobar_loc_pane_ParamLimits

0xebac,	// (0x000b8a39) image3_infobar_loc_pane

0xebc0,	// (0x000b8a4d) image3_infobar_time_pane_ParamLimits

0xebc0,	// (0x000b8a4d) image3_infobar_time_pane

0xcc6d,	// (0x000b6afa) image3_infobar_time_pane_g1

0xebd0,	// (0x000b8a5d) image3_infobar_time_pane_t1

0xcc6d,	// (0x000b6afa) image3_infobar_loc_pane_g1

0xebde,	// (0x000b8a6b) image3_infobar_loc_pane_g2

0x0001,

0xfe64,	// (0x000b9cf1) image3_infobar_loc_pane_g

0xebe6,	// (0x000b8a73) image3_infobar_loc_pane_t1

0xcc6d,	// (0x000b6afa) image3_infobar_fav_pane_g1

0xebf4,	// (0x000b8a81) image3_infobar_fav_pane_g2

0x0001,

0xfe69,	// (0x000b9cf6) image3_infobar_fav_pane_g

0xebfc,	// (0x000b8a89) fs_bigclock_status_battery_pane

0xec05,	// (0x000b8a92) fs_bigclock_status_signal_pane

0xec0e,	// (0x000b8a9b) fs_bigclock_status_title_pane

0xec17,	// (0x000b8aa4) fs_bigclock_status_signal_pane_g1

0xec20,	// (0x000b8aad) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6e,	// (0x000b9cfb) fs_bigclock_status_signal_pane_g

0xec28,	// (0x000b8ab5) fs_bigclock_status_battery_pane_g1

0xec31,	// (0x000b8abe) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe73,	// (0x000b9d00) fs_bigclock_status_battery_pane_g

0xec39,	// (0x000b8ac6) fs_bigclock_status_title_pane_t1

0xcc6d,	// (0x000b6afa) main_fs_bigclock_clock_pane_g1

0xec47,	// (0x000b8ad4) main_fs_bigclock_clock_pane_g2

0xec50,	// (0x000b8add) main_fs_bigclock_clock_pane_g3

0xec50,	// (0x000b8add) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe78,	// (0x000b9d05) main_fs_bigclock_clock_pane_g

0xec58,	// (0x000b8ae5) main_fs_bigclock_clock_pane_t1

0x8818,	// (0x000b26a5) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe81,	// (0x000b9d0e) main_fs_bigclock_clock_pane_t

0xec66,	// (0x000b8af3) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec66,	// (0x000b8af3) list_single_fs_bigclock_indicator_pane

0xec77,	// (0x000b8b04) list_single_fs_bigclock_pane_ParamLimits

0xec77,	// (0x000b8b04) list_single_fs_bigclock_pane

0xec9d,	// (0x000b8b2a) main_fs_bigclock_indicator_pane_t1

0xecac,	// (0x000b8b39) list_single_fs_bigclock_pane_g1

0xecb4,	// (0x000b8b41) list_single_fs_bigclock_pane_t1

0xcc6d,	// (0x000b6afa) main_fs_bigclock_swipe_pane_g1

0xecf7,	// (0x000b8b84) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe92,	// (0x000b9d1f) main_fs_bigclock_swipe_pane_g

0xecff,	// (0x000b8b8c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecff,	// (0x000b8b8c) main_fs_bigclock_swipe_pane_t1

0x252f,	// (0x000ac3bc) call_type_pane_ParamLimits

0x936c,	// (0x000b31f9) main_btmg_pane

0xa85c,	// (0x000b46e9) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa85c,	// (0x000b46e9) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe05,	// (0x000b9c92) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x000b9c92) list_single_cale_mrui_row_pane_g

0xa8e2,	// (0x000b476f) list_recal_vselct_arw_lo_pane

0xeb17,	// (0x000b89a4) list_recal_vselct_arw_up_pane

0xa8ea,	// (0x000b4777) list_recal_vselct_pane

0x886b,	// (0x000b26f8) btmg_button_pane

0x8875,	// (0x000b2702) main_btmg_pane_g1

0x936c,	// (0x000b31f9) bg_button_pane_cp044

0xed1c,	// (0x000b8ba9) btmg_button_pane_t1

0xc845,	// (0x000b66d2) aid_listscroll_gen

0xa4ae,	// (0x000b433b) main_cntbar_detail_pane

0xe848,	// (0x000b86d5) list_cmail_folder_pane

0xcaad,	// (0x000b693a) sp_fs_scroll_pane_cp03_ParamLimits

0x887f,	// (0x000b270c) list_single_fs_dyc_pane_cp01_ParamLimits

0x887f,	// (0x000b270c) list_single_fs_dyc_pane_cp01

0xed2a,	// (0x000b8bb7) aid_size_cmail_indent

0xa969,	// (0x000b47f6) list_single_dyc_row_pane_cp01

0x88c7,	// (0x000b2754) cntbar_detail_list_pane_ParamLimits

0x88c7,	// (0x000b2754) cntbar_detail_list_pane

0x8913,	// (0x000b27a0) main_cntbar_detail_cont_pane_ParamLimits

0x8913,	// (0x000b27a0) main_cntbar_detail_cont_pane

0xcaad,	// (0x000b693a) scroll_pane_cp032_ParamLimits

0xcaad,	// (0x000b693a) scroll_pane_cp032

0x8927,	// (0x000b27b4) cntbar_detail_list_event_pane_ParamLimits

0x8927,	// (0x000b27b4) cntbar_detail_list_event_pane

0x88d7,	// (0x000b2764) cntbar_detail_list_shct_pane

0xac62,	// (0x000b4aef) aid_list_gen

0xed33,	// (0x000b8bc0) aid_scroll

0xed3c,	// (0x000b8bc9) aid_size_touch_scroll_bar

0x6bf8,	// (0x000b0a85) aid_list_double

0x6be6,	// (0x000b0a73) aid_list_single

0x6be6,	// (0x000b0a73) aid_list_single_lg

0x8937,	// (0x000b27c4) aid_list_z_g_a_sm

0x893f,	// (0x000b27cc) aid_list_z_g_d

0x8947,	// (0x000b27d4) aid_txt_z_prm

0x8955,	// (0x000b27e2) aid_txt_z_prm_cp01

0x8963,	// (0x000b27f0) aid_txt_z_sec

0x8971,	// (0x000b27fe) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8971,	// (0x000b27fe) main_cntbar_detail_cont_pane_g1

0x8985,	// (0x000b2812) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8985,	// (0x000b2812) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe97,	// (0x000b9d24) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe97,	// (0x000b9d24) main_cntbar_detail_cont_pane_g

0xed45,	// (0x000b8bd2) main_cntbar_detail_cont_pane_t1

0xed53,	// (0x000b8be0) main_cntbar_detail_cont_pane_t2

0xed61,	// (0x000b8bee) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9c,	// (0x000b9d29) main_cntbar_detail_cont_pane_t

0x8995,	// (0x000b2822) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8995,	// (0x000b2822) cell_cntbar_detail_list_shct_pane

0xed6f,	// (0x000b8bfc) cntbar_detail_list_shct_pane_g1

0xed78,	// (0x000b8c05) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea3,	// (0x000b9d30) cntbar_detail_list_shct_pane_g

0x89a9,	// (0x000b2836) cntbar_detail_list_event_pane_g1_ParamLimits

0x89a9,	// (0x000b2836) cntbar_detail_list_event_pane_g1

0x89b5,	// (0x000b2842) cntbar_detail_list_event_pane_g2_ParamLimits

0x89b5,	// (0x000b2842) cntbar_detail_list_event_pane_g2

0x0005,

0xfea8,	// (0x000b9d35) cntbar_detail_list_event_pane_g_ParamLimits

0xfea8,	// (0x000b9d35) cntbar_detail_list_event_pane_g

0x8a21,	// (0x000b28ae) cntbar_detail_list_event_pane_t1_ParamLimits

0x8a21,	// (0x000b28ae) cntbar_detail_list_event_pane_t1

0x8a36,	// (0x000b28c3) cntbar_detail_list_event_pane_t2_ParamLimits

0x8a36,	// (0x000b28c3) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb5,	// (0x000b9d42) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb5,	// (0x000b9d42) cntbar_detail_list_event_pane_t

0xcc6d,	// (0x000b6afa) cell_cntbar_detail_list_shct_pane_g1

0xb3ae,	// (0x000b523b) navi_pane_mv_g3

0xa4ae,	// (0x000b433b) main_cntbar_detail_pane_ParamLimits

0x936c,	// (0x000b31f9) main_notif_wgt_pane

0x9a4f,	// (0x000b38dc) aid_tch_main_mp4_pane_g4

0x9c31,	// (0x000b3abe) popup_slider_window_cp02

0xa8d8,	// (0x000b4765) list_recal_day_event_pane

0x8895,	// (0x000b2722) cntbar_detail_btn_pane_ParamLimits

0x8895,	// (0x000b2722) cntbar_detail_btn_pane

0x88ae,	// (0x000b273b) cntbar_detail_btn_pane_cp01_ParamLimits

0x88ae,	// (0x000b273b) cntbar_detail_btn_pane_cp01

0x88d7,	// (0x000b2764) cntbar_detail_list_shct_pane_ParamLimits

0x88e7,	// (0x000b2774) cntbar_detail_pane_g1_ParamLimits

0x88e7,	// (0x000b2774) cntbar_detail_pane_g1

0x88f7,	// (0x000b2784) cntbar_detail_pane_t1_ParamLimits

0x88f7,	// (0x000b2784) cntbar_detail_pane_t1

0x89c1,	// (0x000b284e) cntbar_detail_list_event_pane_g3_ParamLimits

0x89c1,	// (0x000b284e) cntbar_detail_list_event_pane_g3

0x89d9,	// (0x000b2866) cntbar_detail_list_event_pane_g4_ParamLimits

0x89d9,	// (0x000b2866) cntbar_detail_list_event_pane_g4

0x89f1,	// (0x000b287e) cntbar_detail_list_event_pane_g5_ParamLimits

0x89f1,	// (0x000b287e) cntbar_detail_list_event_pane_g5

0x8a09,	// (0x000b2896) cntbar_detail_list_event_pane_g6_ParamLimits

0x8a09,	// (0x000b2896) cntbar_detail_list_event_pane_g6

0x8a4b,	// (0x000b28d8) cntbar_detail_list_event_pane_t3_ParamLimits

0x8a4b,	// (0x000b28d8) cntbar_detail_list_event_pane_t3

0x8a5d,	// (0x000b28ea) popup_notif_wgt_window_ParamLimits

0x8a5d,	// (0x000b28ea) popup_notif_wgt_window

0x8a76,	// (0x000b2903) popup_submenu_window_cp01_ParamLimits

0x8a76,	// (0x000b2903) popup_submenu_window_cp01

0xa9bb,	// (0x000b4848) bg_popup_window_pane_cp10

0xed81,	// (0x000b8c0e) listscroll_notif_wgt_pane

0xed93,	// (0x000b8c20) list_notif_wgt_window

0xed9c,	// (0x000b8c29) scroll_pane_cp033

0x8a88,	// (0x000b2915) list_notif_wgt_row_pane_ParamLimits

0x8a88,	// (0x000b2915) list_notif_wgt_row_pane

0xeda5,	// (0x000b8c32) aid_size_list_notif_wgt_del

0xedb2,	// (0x000b8c3f) list_notif_wgt_row_pane_g1

0xedbe,	// (0x000b8c4b) list_notif_wgt_row_pane_g2

0xedd2,	// (0x000b8c5f) list_notif_wgt_row_pane_g3

0x0002,

0xfebc,	// (0x000b9d49) list_notif_wgt_row_pane_g

0xeddf,	// (0x000b8c6c) list_notif_wgt_row_pane_t1

0xedf5,	// (0x000b8c82) list_notif_wgt_row_pane_t2

0xee07,	// (0x000b8c94) list_notif_wgt_row_pane_t3

0x0002,

0xfec3,	// (0x000b9d50) list_notif_wgt_row_pane_t

0xd930,	// (0x000b77bd) list_recal_day_event_pane_g1

0xee19,	// (0x000b8ca6) list_recal_day_event_pane_t1

0x936c,	// (0x000b31f9) bg_button_pane_cp045

0x8a98,	// (0x000b2925) cntbar_detail_btn_pane_t1

0xc859,	// (0x000b66e6) main_callh_pane_ParamLimits

0xc859,	// (0x000b66e6) main_callh_pane

0x936c,	// (0x000b31f9) main_coverflow0_pane

0x936c,	// (0x000b31f9) main_wgtman_pane

0x78c5,	// (0x000b1752) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x78c5,	// (0x000b1752) main_fs_bigclock_unlock_btn_pane

0x82ec,	// (0x000b2179) bg_button_pane_cp16

0x82fc,	// (0x000b2189) cell_tport_appsw_pane_g3

0x8aa6,	// (0x000b2933) cf0_flow_pane_ParamLimits

0x8aa6,	// (0x000b2933) cf0_flow_pane

0xee28,	// (0x000b8cb5) listscroll_cf0_pane

0xee33,	// (0x000b8cc0) main_cf0_pane_g1

0x8abb,	// (0x000b2948) main_cf0_pane_t1_ParamLimits

0x8abb,	// (0x000b2948) main_cf0_pane_t1

0x8ad2,	// (0x000b295f) main_cf0_pane_t2_ParamLimits

0x8ad2,	// (0x000b295f) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x000b9d5c) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x000b9d5c) main_cf0_pane_t

0xee45,	// (0x000b8cd2) scroll_pane_cp11

0x8ae9,	// (0x000b2976) cf0_flow_pane_g1

0x8af1,	// (0x000b297e) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x000b9d61) cf0_flow_pane_g

0x8af9,	// (0x000b2986) cf0_flow_pane_t1

0x936c,	// (0x000b31f9) main_call6_pane

0x936c,	// (0x000b31f9) main_calllock_pane

0x8b07,	// (0x000b2994) call6_btn_grp_pane_ParamLimits

0x8b07,	// (0x000b2994) call6_btn_grp_pane

0x8b21,	// (0x000b29ae) call6_pane_g1_ParamLimits

0x8b21,	// (0x000b29ae) call6_pane_g1

0x8b36,	// (0x000b29c3) popup_call6_1st_window_ParamLimits

0x8b36,	// (0x000b29c3) popup_call6_1st_window

0x8b47,	// (0x000b29d4) popup_call6_2nd_window_ParamLimits

0x8b47,	// (0x000b29d4) popup_call6_2nd_window

0x8b58,	// (0x000b29e5) cell_call6_btn_pane_ParamLimits

0x8b58,	// (0x000b29e5) cell_call6_btn_pane

0xa9bb,	// (0x000b4848) bg_popup_call2_in_pane_cp03

0xee50,	// (0x000b8cdd) popup_call6_1st_window_g1

0xee58,	// (0x000b8ce5) popup_call6_1st_window_g2

0xee60,	// (0x000b8ced) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x000b9d66) popup_call6_1st_window_g

0xee68,	// (0x000b8cf5) popup_call6_1st_window_t1

0xee77,	// (0x000b8d04) popup_call6_1st_window_t2

0xee87,	// (0x000b8d14) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x000b9d6d) popup_call6_1st_window_t

0xa9bb,	// (0x000b4848) bg_popup_call2_in_pane_cp04

0xee50,	// (0x000b8cdd) popup_call6_2nd_window_g1

0xee58,	// (0x000b8ce5) popup_call6_2nd_window_g2

0xee60,	// (0x000b8ced) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x000b9d66) popup_call6_2nd_window_g

0xee68,	// (0x000b8cf5) popup_call6_2nd_window_t1

0x936c,	// (0x000b31f9) bg_button_pane_cp15

0xee97,	// (0x000b8d24) cell_call6_btn_pane_g1

0xeea0,	// (0x000b8d2d) cell_call6_btn_pane_t1

0x8b6c,	// (0x000b29f9) listscroll_wgtman_pane_ParamLimits

0x8b6c,	// (0x000b29f9) listscroll_wgtman_pane

0x8b8d,	// (0x000b2a1a) wgtman_btn_pane_ParamLimits

0x8b8d,	// (0x000b2a1a) wgtman_btn_pane

0xb1c2,	// (0x000b504f) aid_scroll_copy1

0xeeaf,	// (0x000b8d3c) list_wgtman_pane

0x8bd0,	// (0x000b2a5d) wgtman_btn_pane_g1_ParamLimits

0x8bd0,	// (0x000b2a5d) wgtman_btn_pane_g1

0x8bfc,	// (0x000b2a89) wgtman_btn_pane_t1_ParamLimits

0x8bfc,	// (0x000b2a89) wgtman_btn_pane_t1

0xeeb9,	// (0x000b8d46) wgtman_btn_pane_t2_ParamLimits

0xeeb9,	// (0x000b8d46) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x000b9d74) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x000b9d74) wgtman_btn_pane_t

0x8c39,	// (0x000b2ac6) listrow_wgtman_pane_ParamLimits

0x8c39,	// (0x000b2ac6) listrow_wgtman_pane

0x8c4b,	// (0x000b2ad8) listrow_wgtman_pane_g1

0x8c58,	// (0x000b2ae5) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x000b9d79) listrow_wgtman_pane_g

0x8c76,	// (0x000b2b03) listrow_wgtman_pane_t1

0x8c8e,	// (0x000b2b1b) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x000b9d7e) listrow_wgtman_pane_t

0x8cb4,	// (0x000b2b41) wait_bar_pane_cp09

0xeed0,	// (0x000b8d5d) main_calllock_btn_pane

0xeeda,	// (0x000b8d67) main_calllock_pane_g1

0x936c,	// (0x000b31f9) bg_button_pane_cp17

0xeee5,	// (0x000b8d72) main_calllock_btn_pane_g1

0xeeee,	// (0x000b8d7b) main_calllock_btn_pane_t1

0x936c,	// (0x000b31f9) main_dialer3_pane

0x936c,	// (0x000b31f9) main_fmrd2_pane

0xcc6d,	// (0x000b6afa) main_fs_bigclock_unlock_btn_pane_g1

0xef05,	// (0x000b8d92) main_fs_bigclock_unlock_btn_pane_t1

0x8cc6,	// (0x000b2b53) area_fmrd2_info_pane_ParamLimits

0x8cc6,	// (0x000b2b53) area_fmrd2_info_pane

0x8cd7,	// (0x000b2b64) area_fmrd2_visual_pane_ParamLimits

0x8cd7,	// (0x000b2b64) area_fmrd2_visual_pane

0x8ce5,	// (0x000b2b72) fmrd2_indi_pane_ParamLimits

0x8ce5,	// (0x000b2b72) fmrd2_indi_pane

0x8cf2,	// (0x000b2b7f) area_fmrd2_visual_pane_g1

0x8cfa,	// (0x000b2b87) area_fmrd2_visual_pane_t1

0x8d0a,	// (0x000b2b97) area_fmrd2_visual_pane_t2

0x8d1a,	// (0x000b2ba7) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x000b9d88) area_fmrd2_visual_pane_t

0x8d2a,	// (0x000b2bb7) area_fmrd2_info_pane_g1

0x8d32,	// (0x000b2bbf) area_fmrd2_info_pane_t1

0x8d42,	// (0x000b2bcf) area_fmrd2_info_pane_t2

0x8d52,	// (0x000b2bdf) area_fmrd2_info_pane_t3

0x8d62,	// (0x000b2bef) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x000b9d8f) area_fmrd2_info_pane_t

0x8d70,	// (0x000b2bfd) fmrd2_indi_pane_t1

0x8d80,	// (0x000b2c0d) fmrd2_indi_pane_t2

0x8d90,	// (0x000b2c1d) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x000b9d98) fmrd2_indi_pane_t

0xe497,	// (0x000b8324) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe497,	// (0x000b8324) list_single_fs_bigclock_indicator_pane_g5

0xe547,	// (0x000b83d4) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe547,	// (0x000b83d4) list_single_fs_bigclock_indicator_pane_t5

0x8488,	// (0x000b2315) aid_cell_bcale_month_pane_ParamLimits

0x8488,	// (0x000b2315) aid_cell_bcale_month_pane

0x84a6,	// (0x000b2333) bcale_month_pane_ParamLimits

0x84a6,	// (0x000b2333) bcale_month_pane

0x84ca,	// (0x000b2357) bcale_preview_pane_ParamLimits

0x84ca,	// (0x000b2357) bcale_preview_pane

0xecb4,	// (0x000b8b41) list_single_fs_bigclock_pane_t1_ParamLimits

0xecd3,	// (0x000b8b60) list_single_fs_bigclock_pane_t2_ParamLimits

0xecd3,	// (0x000b8b60) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8d,	// (0x000b9d1a) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8d,	// (0x000b9d1a) list_single_fs_bigclock_pane_t

0xeefd,	// (0x000b8d8a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x000b9d83) main_fs_bigclock_unlock_btn_pane_g

0x8da0,	// (0x000b2c2d) aid_dia3_key_size_ParamLimits

0x8da0,	// (0x000b2c2d) aid_dia3_key_size

0x8daf,	// (0x000b2c3c) aid_dia3_listrow_size_ParamLimits

0x8daf,	// (0x000b2c3c) aid_dia3_listrow_size

0x8dc4,	// (0x000b2c51) dia3_keypad_fun_pane_ParamLimits

0x8dc4,	// (0x000b2c51) dia3_keypad_fun_pane

0x8de0,	// (0x000b2c6d) dia3_keypad_num_pane_ParamLimits

0x8de0,	// (0x000b2c6d) dia3_keypad_num_pane

0x8dfb,	// (0x000b2c88) dia3_listscroll_pane_ParamLimits

0x8dfb,	// (0x000b2c88) dia3_listscroll_pane

0x8e0e,	// (0x000b2c9b) dia3_numentry_pane_ParamLimits

0x8e0e,	// (0x000b2c9b) dia3_numentry_pane

0xef13,	// (0x000b8da0) dia3_list_pane

0xef1e,	// (0x000b8dab) scroll_pane_cp12

0x936c,	// (0x000b31f9) bg_dia3_numentry_pane

0x8e22,	// (0x000b2caf) dia3_numentry_pane_t1

0x8e31,	// (0x000b2cbe) cell_dia3_key_num_pane

0x8e39,	// (0x000b2cc6) cell_dia3_key0_fun_pane_ParamLimits

0x8e39,	// (0x000b2cc6) cell_dia3_key0_fun_pane

0x8e4d,	// (0x000b2cda) cell_dia3_key1_fun_pane_ParamLimits

0x8e4d,	// (0x000b2cda) cell_dia3_key1_fun_pane

0x8e65,	// (0x000b2cf2) dia3_listrow_pane

0xe1a6,	// (0x000b8033) bg_dia3_numentry_pane_g1

0x936c,	// (0x000b31f9) bg_button_pane_cp21

0xef29,	// (0x000b8db6) cell_dia3_key_num_pane_t1

0xef37,	// (0x000b8dc4) cell_dia3_key_num_pane_t2

0xef46,	// (0x000b8dd3) cell_dia3_key_num_pane_t3

0xef55,	// (0x000b8de2) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x000b9d9f) cell_dia3_key_num_pane_t

0x936c,	// (0x000b31f9) bg_button_pane_cp19

0x8e77,	// (0x000b2d04) cell_dia3_key0_fun_pane_g1

0x936c,	// (0x000b31f9) bg_button_pane_cp20

0x8e7f,	// (0x000b2d0c) cell_dia3_key1_fun_pane_g1

0x8e87,	// (0x000b2d14) area_left_week_number_pane

0x8e93,	// (0x000b2d20) area_top_day_name_pane

0x8ea6,	// (0x000b2d33) frame_month_view_pane

0xef64,	// (0x000b8df1) grid_month_view_pane

0x8eb9,	// (0x000b2d46) cell_top_day_name_pane_ParamLimits

0x8eb9,	// (0x000b2d46) cell_top_day_name_pane

0x8ee6,	// (0x000b2d73) cell_area_left_week_number_pane_ParamLimits

0x8ee6,	// (0x000b2d73) cell_area_left_week_number_pane

0x8efa,	// (0x000b2d87) cell_month_view_pane_ParamLimits

0x8efa,	// (0x000b2d87) cell_month_view_pane

0xef72,	// (0x000b8dff) frm_month_g1

0x8f27,	// (0x000b2db4) frm_month_g2

0x8f3a,	// (0x000b2dc7) frm_month_g3

0x8f4d,	// (0x000b2dda) frm_month_g4

0x8f60,	// (0x000b2ded) frm_month_g5

0x8f73,	// (0x000b2e00) frm_month_g6

0x8f86,	// (0x000b2e13) frm_month_g7

0xef7f,	// (0x000b8e0c) frm_month_g8

0x8f99,	// (0x000b2e26) frm_month_g9

0x8fa9,	// (0x000b2e36) frm_month_g10

0x8fb9,	// (0x000b2e46) frm_month_g11

0x8fc9,	// (0x000b2e56) frm_month_g12

0x8fdb,	// (0x000b2e68) frm_month_g13

0x8fed,	// (0x000b2e7a) frm_month_g14

0x9001,	// (0x000b2e8e) frm_month_g15

0x9015,	// (0x000b2ea2) frm_month_g16

0x000f,

0xff1b,	// (0x000b9da8) frm_month_g

0xef8c,	// (0x000b8e19) cell_top_day_name_pane_t1

0x9029,	// (0x000b2eb6) cell_area_left_week_number_pane_g1

0x9035,	// (0x000b2ec2) cell_area_left_week_number_pane_t1

0xcebb,	// (0x000b6d48) cell_month_view_pane_g1

0x9048,	// (0x000b2ed5) cell_month_view_pane_t1

0x936c,	// (0x000b31f9) main_fps_pane

0xe752,	// (0x000b85df) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe752,	// (0x000b85df) cmail_ddmenu_btn02_pane_cp1

0xe76e,	// (0x000b85fb) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe76e,	// (0x000b85fb) cmail_ddmenu_btn02_pane_cp2

0x876b,	// (0x000b25f8) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x876b,	// (0x000b25f8) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe40,	// (0x000b9ccd) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe40,	// (0x000b9ccd) cmail_ddmenu_btn02_pane_g

0x878a,	// (0x000b2617) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x878a,	// (0x000b2617) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe45,	// (0x000b9cd2) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe45,	// (0x000b9cd2) cmail_ddmenu_btn02_pane_t

0x905b,	// (0x000b2ee8) fps_text_pane_ParamLimits

0x905b,	// (0x000b2ee8) fps_text_pane

0x9072,	// (0x000b2eff) main_fps_pane_g1_ParamLimits

0x9072,	// (0x000b2eff) main_fps_pane_g1

0x908c,	// (0x000b2f19) wait_bar_pane_cp010_ParamLimits

0x908c,	// (0x000b2f19) wait_bar_pane_cp010

0x909d,	// (0x000b2f2a) fps_text_pane_t1_ParamLimits

0x909d,	// (0x000b2f2a) fps_text_pane_t1

0xd679,	// (0x000b7506) cam4_image_uncrop_pane_g1

0xd682,	// (0x000b750f) cam4_image_uncrop_pane_g2

0x5a13,	// (0x000af8a0) cam4_image_uncrop_pane_g3

0x5a1c,	// (0x000af8a9) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x000b978e) cam4_image_uncrop_pane_g

0x8e65,	// (0x000b2cf2) dia3_listrow_pane_ParamLimits

0x936c,	// (0x000b31f9) main_phob2_pane

0x82bd,	// (0x000b214a) cell_tport_appsw_pane_cp02_ParamLimits

0x82bd,	// (0x000b214a) cell_tport_appsw_pane_cp02

0x82d1,	// (0x000b215e) cell_tport_appsw_pane_cp03_ParamLimits

0x82d1,	// (0x000b215e) cell_tport_appsw_pane_cp03

0x936c,	// (0x000b31f9) phob2_contact_card_pane

0x936c,	// (0x000b31f9) phob2_listscroll_pane

0xef9f,	// (0x000b8e2c) phob2_list_pane

0xefa7,	// (0x000b8e34) scroll_pane_cp034

0x90b5,	// (0x000b2f42) phob2_cc_data_pane_ParamLimits

0x90b5,	// (0x000b2f42) phob2_cc_data_pane

0x90d4,	// (0x000b2f61) phob2_cc_listscroll_pane_ParamLimits

0x90d4,	// (0x000b2f61) phob2_cc_listscroll_pane

0x8c39,	// (0x000b2ac6) list_double_large_graphic_phob2_pane_ParamLimits

0x8c39,	// (0x000b2ac6) list_double_large_graphic_phob2_pane

0x90f2,	// (0x000b2f7f) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x90f2,	// (0x000b2f7f) list_double_large_graphic_phob2_pane_g1

0x9108,	// (0x000b2f95) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9108,	// (0x000b2f95) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x000b9dc9) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x000b9dc9) list_double_large_graphic_phob2_pane_g

0x9114,	// (0x000b2fa1) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9114,	// (0x000b2fa1) list_double_large_graphic_phob2_pane_t1

0x912a,	// (0x000b2fb7) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x912a,	// (0x000b2fb7) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x000b9dce) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x000b9dce) list_double_large_graphic_phob2_pane_t

0x936c,	// (0x000b31f9) list_highlight_pane_cp024

0x913f,	// (0x000b2fcc) phob2_cc_button_pane

0x9147,	// (0x000b2fd4) phob2_cc_data_pane_g1_ParamLimits

0x9147,	// (0x000b2fd4) phob2_cc_data_pane_g1

0x915c,	// (0x000b2fe9) phob2_cc_data_pane_g2_ParamLimits

0x915c,	// (0x000b2fe9) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x000b9dd3) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x000b9dd3) phob2_cc_data_pane_g

0x916c,	// (0x000b2ff9) phob2_cc_data_pane_t1_ParamLimits

0x916c,	// (0x000b2ff9) phob2_cc_data_pane_t1

0x9184,	// (0x000b3011) phob2_cc_data_pane_t2_ParamLimits

0x9184,	// (0x000b3011) phob2_cc_data_pane_t2

0x919c,	// (0x000b3029) phob2_cc_data_pane_t3_ParamLimits

0x919c,	// (0x000b3029) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x000b9dd8) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x000b9dd8) phob2_cc_data_pane_t

0xefaf,	// (0x000b8e3c) phob2_cc_list_pane_ParamLimits

0xefaf,	// (0x000b8e3c) phob2_cc_list_pane

0xd9c7,	// (0x000b7854) scroll_pane_cp035_ParamLimits

0xd9c7,	// (0x000b7854) scroll_pane_cp035

0xa4ae,	// (0x000b433b) bg_button_pane_cp033

0xefbb,	// (0x000b8e48) phob2_cc_button_pane_g1

0xefc7,	// (0x000b8e54) phob2_cc_button_pane_t1

0xefdc,	// (0x000b8e69) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x000b9ddf) phob2_cc_button_pane_t

0x91b4,	// (0x000b3041) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x91b4,	// (0x000b3041) list_double_large_graphic_phob2_cc_pane

0x91c7,	// (0x000b3054) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x91c7,	// (0x000b3054) list_double_large_graphic_phob2_cc_pane_g1

0x91d3,	// (0x000b3060) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x91d3,	// (0x000b3060) list_double_large_graphic_phob2_cc_pane_g2

0x91df,	// (0x000b306c) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x91df,	// (0x000b306c) list_double_large_graphic_phob2_cc_pane_g3

0x91eb,	// (0x000b3078) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x91eb,	// (0x000b3078) list_double_large_graphic_phob2_cc_pane_g4

0x91f7,	// (0x000b3084) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x91f7,	// (0x000b3084) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x000b9de4) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x000b9de4) list_double_large_graphic_phob2_cc_pane_g

0x9203,	// (0x000b3090) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9203,	// (0x000b3090) list_double_large_graphic_phob2_cc_pane_t1

0x922c,	// (0x000b30b9) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x922c,	// (0x000b30b9) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x000b9def) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x000b9def) list_double_large_graphic_phob2_cc_pane_t

0xefee,	// (0x000b8e7b) list_highlight_pane_cp025_ParamLimits

0xefee,	// (0x000b8e7b) list_highlight_pane_cp025

0xa4ae,	// (0x000b433b) bg_button_pane_cp033_ParamLimits

0xefbb,	// (0x000b8e48) phob2_cc_button_pane_g1_ParamLimits

0xefc7,	// (0x000b8e54) phob2_cc_button_pane_t1_ParamLimits

0xefdc,	// (0x000b8e69) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x000b9ddf) phob2_cc_button_pane_t_ParamLimits

0x03d5,	// (0x000aa262) popup_wgtman_window

0xd7f4,	// (0x000b7681) scroll_pane_cp038

0x8bb2,	// (0x000b2a3f) wgtman_btn_pane_cp_01_ParamLimits

0x8bb2,	// (0x000b2a3f) wgtman_btn_pane_cp_01

0xeffc,	// (0x000b8e89) wgtman_content_pane

0xf005,	// (0x000b8e92) wgtman_heading_pane

0x936c,	// (0x000b31f9) bg_heading_pane_cp02

0xf00e,	// (0x000b8e9b) wgtman_heading_pane_g1

0xf016,	// (0x000b8ea3) wgtman_heading_pane_t1

0xf024,	// (0x000b8eb1) scroll_pane_cp036

0xf02c,	// (0x000b8eb9) wgtman_list_pane

0xe632,	// (0x000b84bf) wgtman_list_pane_t1_ParamLimits

0xe632,	// (0x000b84bf) wgtman_list_pane_t1

0x9c8b,	// (0x000b3b18) cam4_grid_pane

0x66da,	// (0x000b0567) bg_button_pane_cp015_ParamLimits

0x66ee,	// (0x000b057b) bg_button_pane_cp016_ParamLimits

0x6701,	// (0x000b058e) bg_button_pane_cp017_ParamLimits

0x6759,	// (0x000b05e6) popup_vitu2_query_window_g3_ParamLimits

0x6759,	// (0x000b05e6) popup_vitu2_query_window_g3

0x6816,	// (0x000b06a3) popup_vitu2_query_window_t6_ParamLimits

0x6816,	// (0x000b06a3) popup_vitu2_query_window_t6

0x6841,	// (0x000b06ce) popup_vitu2_query_window_t7_ParamLimits

0x6841,	// (0x000b06ce) popup_vitu2_query_window_t7

0xd679,	// (0x000b7506) cam4_grid_pane_g1

0xd682,	// (0x000b750f) cam4_grid_pane_g2

0xf034,	// (0x000b8ec1) cam4_grid_pane_g3

0xf03d,	// (0x000b8eca) cam4_grid_pane_g4

0x0003,

0xff67,	// (0x000b9df4) cam4_grid_pane_g

0x13bc,	// (0x000ab249) aid_placing_vt_slider_lsc_ParamLimits

0x16b9,	// (0x000ab546) vidtel_button_pane_ParamLimits

0x16b9,	// (0x000ab546) vidtel_button_pane

0x936c,	// (0x000b31f9) bg_button_pane_cp034

0x9255,	// (0x000b30e2) vidtel_button_pane_g1

0xf048,	// (0x000b8ed5) vidtel_button_pane_t1

0xd90e,	// (0x000b779b) aid_size_vtel_slider_touch

0xd9c7,	// (0x000b7854) scroll_pane_cp039

0xe1ec,	// (0x000b8079) ncim_query_button_pane_cp01_ParamLimits

0xe20b,	// (0x000b8098) ncimui_query_pane_g1_ParamLimits

0xa4ae,	// (0x000b433b) input_focus_pane_cp012_ParamLimits

0xe230,	// (0x000b80bd) ncim_query_entry_pane_t1_ParamLimits

0xd9c7,	// (0x000b7854) scroll_pane_cp039_ParamLimits

0xb299,	// (0x000b5126) navi_pane_bcale_mc_g1

0xb2a1,	// (0x000b512e) navi_pane_bcale_mc_t1

0xe7b7,	// (0x000b8644) main_sp_fs_email_pane_g1

0xe7c3,	// (0x000b8650) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x000b9b85) main_sp_fs_email_pane_g

0xea19,	// (0x000b88a6) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea19,	// (0x000b88a6) list_single_cale_mrui_row_pane_g3

0x87b2,	// (0x000b263f) list_single_recal_day_pane_g5_event_pane

0xa93d,	// (0x000b47ca) list_single_recal_day_pane_g7

0xf05e,	// (0x000b8eeb) list_recal_day_event_pane_cp01

0xf067,	// (0x000b8ef4) list_recal_vselct_arw_lo_pane_cp01

0xf06f,	// (0x000b8efc) list_recal_vselct_arw_up_pane_cp01

0xf077,	// (0x000b8f04) list_recal_vselct_pane_cp01

0xd930,	// (0x000b77bd) list_recal_day_event_pane_cp01_g1

0xa972,	// (0x000b47ff) list_recal_day_event_pane_cp01_t1

0xa945,	// (0x000b47d2) list_single_recal_day_pane_t1_ParamLimits

0xa957,	// (0x000b47e4) list_single_recal_day_pane_t2_ParamLimits

0xfe55,	// (0x000b9ce2) list_single_recal_day_pane_t_ParamLimits

0xa194,	// (0x000b4021) bg_notes_pane_ParamLimits

0xa243,	// (0x000b40d0) list_notes_pane_ParamLimits

0x0719,	// (0x000aa5a6) scroll_pane_cp06_ParamLimits

0xa265,	// (0x000b40f2) main_notes_pane_ParamLimits

0x936c,	// (0x000b31f9) main_welc_pane

0x925d,	// (0x000b30ea) main_welc_body_pane_ParamLimits

0x925d,	// (0x000b30ea) main_welc_body_pane

0x927a,	// (0x000b3107) main_welc_opti_pane_ParamLimits

0x927a,	// (0x000b3107) main_welc_opti_pane

0x92bf,	// (0x000b314c) main_welc_pane_t1_ParamLimits

0x92bf,	// (0x000b314c) main_welc_pane_t1

0x92dd,	// (0x000b316a) main_welc_body_row_pane_ParamLimits

0x92dd,	// (0x000b316a) main_welc_body_row_pane

0xf081,	// (0x000b8f0e) main_welc_opti_row_pane_ParamLimits

0xf081,	// (0x000b8f0e) main_welc_opti_row_pane

0xf08f,	// (0x000b8f1c) main_welc_opti_row_pane_g1

0x92f2,	// (0x000b317f) main_welc_opti_row_pane_t1

0xf097,	// (0x000b8f24) main_welc_body_row_pane_t1

0xed8b,	// (0x000b8c18) popup_notif_wgt_heading_pane

0xeda5,	// (0x000b8c32) aid_size_list_notif_wgt_del_ParamLimits

0xedb2,	// (0x000b8c3f) list_notif_wgt_row_pane_g1_ParamLimits

0xedbe,	// (0x000b8c4b) list_notif_wgt_row_pane_g2_ParamLimits

0xedd2,	// (0x000b8c5f) list_notif_wgt_row_pane_g3_ParamLimits

0xfebc,	// (0x000b9d49) list_notif_wgt_row_pane_g_ParamLimits

0xeddf,	// (0x000b8c6c) list_notif_wgt_row_pane_t1_ParamLimits

0xedf5,	// (0x000b8c82) list_notif_wgt_row_pane_t2_ParamLimits

0xee07,	// (0x000b8c94) list_notif_wgt_row_pane_t3_ParamLimits

0xfec3,	// (0x000b9d50) list_notif_wgt_row_pane_t_ParamLimits

0x8c4b,	// (0x000b2ad8) listrow_wgtman_pane_g1_ParamLimits

0x8c58,	// (0x000b2ae5) listrow_wgtman_pane_g2_ParamLimits

0xfeec,	// (0x000b9d79) listrow_wgtman_pane_g_ParamLimits

0x8c76,	// (0x000b2b03) listrow_wgtman_pane_t1_ParamLimits

0x8c8e,	// (0x000b2b1b) listrow_wgtman_pane_t2_ParamLimits

0xfef1,	// (0x000b9d7e) listrow_wgtman_pane_t_ParamLimits

0x8cb4,	// (0x000b2b41) wait_bar_pane_cp09_ParamLimits

0x936c,	// (0x000b31f9) bg_popup_heading_pane_cp02

0xf0a6,	// (0x000b8f33) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x000b8f3b) popup_notif_wgt_heading_pane_t1

0x936c,	// (0x000b31f9) main_vids_pane

0x936c,	// (0x000b31f9) vids_listscroll_pane

0x9301,	// (0x000b318e) scroll_pane_cp040

0x936c,	// (0x000b31f9) vids_list_pane

0x930c,	// (0x000b3199) vids_list_double_pane_ParamLimits

0x930c,	// (0x000b3199) vids_list_double_pane

0x931d,	// (0x000b31aa) vids_list_double_pane_g1

0x9326,	// (0x000b31b3) vids_list_double_pane_t1

0x9336,	// (0x000b31c3) vids_list_double_pane_t2

0x0001,

0xff75,	// (0x000b9e02) vids_list_double_pane_t

0x93e4,	// (0x000b3271) main_ncimui_pane_ParamLimits

0x742e,	// (0x000b12bb) main_ncimui_pane_g1_ParamLimits

0x743a,	// (0x000b12c7) main_ncimui_pane_g2_ParamLimits

0x743a,	// (0x000b12c7) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x000b9a8a) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x000b9a8a) main_ncimui_pane_g

0x9295,	// (0x000b3122) main_welc_pane_g1_ParamLimits

0x9295,	// (0x000b3122) main_welc_pane_g1

0x92aa,	// (0x000b3137) main_welc_pane_g2_ParamLimits

0x92aa,	// (0x000b3137) main_welc_pane_g2

0x0001,

0xff70,	// (0x000b9dfd) main_welc_pane_g_ParamLimits

0xff70,	// (0x000b9dfd) main_welc_pane_g

0xa194,	// (0x000b4021) listscroll_mce_pane_ParamLimits

0xb3ee,	// (0x000b527b) wait_bar_pane_cp10

0xc84d,	// (0x000b66da) main_cale_day_pane_ParamLimits

0xc84d,	// (0x000b66da) main_cale_week_pane_ParamLimits

0xa194,	// (0x000b4021) main_messa_pane_ParamLimits

0x4d3c,	// (0x000aebc9) main_clock2_btn_pane_ParamLimits

0x4d3c,	// (0x000aebc9) main_clock2_btn_pane

0xd043,	// (0x000b6ed0) main_clock2_btn_pane_cp01_ParamLimits

0xd043,	// (0x000b6ed0) main_clock2_btn_pane_cp01

0xe9ea,	// (0x000b8877) list_cale_mrui_pane_ParamLimits

0xee3d,	// (0x000b8cca) main_cf0_pane_g2

0x0001,

0xfeca,	// (0x000b9d57) main_cf0_pane_g

0x8e87,	// (0x000b2d14) area_left_week_number_pane_ParamLimits

0x8e93,	// (0x000b2d20) area_top_day_name_pane_ParamLimits

0x8ea6,	// (0x000b2d33) frame_month_view_pane_ParamLimits

0xef64,	// (0x000b8df1) grid_month_view_pane_ParamLimits

0xef72,	// (0x000b8dff) frm_month_g1_ParamLimits

0x8f27,	// (0x000b2db4) frm_month_g2_ParamLimits

0x8f3a,	// (0x000b2dc7) frm_month_g3_ParamLimits

0x8f4d,	// (0x000b2dda) frm_month_g4_ParamLimits

0x8f60,	// (0x000b2ded) frm_month_g5_ParamLimits

0x8f73,	// (0x000b2e00) frm_month_g6_ParamLimits

0x8f86,	// (0x000b2e13) frm_month_g7_ParamLimits

0xef7f,	// (0x000b8e0c) frm_month_g8_ParamLimits

0x8f99,	// (0x000b2e26) frm_month_g9_ParamLimits

0x8fa9,	// (0x000b2e36) frm_month_g10_ParamLimits

0x8fb9,	// (0x000b2e46) frm_month_g11_ParamLimits

0x8fc9,	// (0x000b2e56) frm_month_g12_ParamLimits

0x8fdb,	// (0x000b2e68) frm_month_g13_ParamLimits

0x8fed,	// (0x000b2e7a) frm_month_g14_ParamLimits

0x9001,	// (0x000b2e8e) frm_month_g15_ParamLimits

0x9015,	// (0x000b2ea2) frm_month_g16_ParamLimits

0xff1b,	// (0x000b9da8) frm_month_g_ParamLimits

0xef8c,	// (0x000b8e19) cell_top_day_name_pane_t1_ParamLimits

0x9029,	// (0x000b2eb6) cell_area_left_week_number_pane_g1_ParamLimits

0x9035,	// (0x000b2ec2) cell_area_left_week_number_pane_t1_ParamLimits

0xcebb,	// (0x000b6d48) cell_month_view_pane_g1_ParamLimits

0x9048,	// (0x000b2ed5) cell_month_view_pane_t1_ParamLimits

0xa18c,	// (0x000b4019) main_clock2_btn_pane_g1

0xf0bc,	// (0x000b8f49) main_clock2_btn_pane_t1

0xa4ae,	// (0x000b433b) listscroll_cmail_pane_ParamLimits

0xe7b7,	// (0x000b8644) main_sp_fs_email_pane_g1_ParamLimits

0xe7c3,	// (0x000b8650) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x000b9b85) main_sp_fs_email_pane_g_ParamLimits

0xeaf8,	// (0x000b8985) list_recal_day_pane_ParamLimits

0xeb09,	// (0x000b8996) mian_recal_day_pane_t1

0x7f34,	// (0x000b1dc1) list_single_dyc_row_text_pane_t4_ParamLimits

0x7f34,	// (0x000b1dc1) list_single_dyc_row_text_pane_t4

0x7f7d,	// (0x000b1e0a) list_single_dyc_row_text_pane_t5_ParamLimits

0x7f7d,	// (0x000b1e0a) list_single_dyc_row_text_pane_t5

0xa69d,	// (0x000b452a) list_single_dyc_row_text_pane_t6_ParamLimits

0xa69d,	// (0x000b452a) list_single_dyc_row_text_pane_t6

0x23a5,	// (0x000ac232) aid_mgn_list_cale_time_pane

0x93e4,	// (0x000b3271) main_gallery2_pane_ParamLimits

0xd059,	// (0x000b6ee6) main_clock2_pane_cp01_t1

0xd067,	// (0x000b6ef4) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x000b9664) main_clock2_pane_cp01_t

0x0a92,	// (0x000aa91f) cale_week_scroll_pane_g16_ParamLimits

0x0a92,	// (0x000aa91f) cale_week_scroll_pane_g16

0xa9bb,	// (0x000b4848) vorec_slider_pane

0xf048,	// (0x000b8ed5) vidtel_button_pane_t1_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
