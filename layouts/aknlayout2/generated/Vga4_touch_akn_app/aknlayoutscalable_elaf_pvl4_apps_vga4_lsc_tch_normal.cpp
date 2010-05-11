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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0000f82c };

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
0xfbdb,	// (0x0000f407) Screen

0xfbe7,	// (0x0000f413) application_window

0xfc23,	// (0x0000f44f) area_bottom_pane_ParamLimits

0xfc23,	// (0x0000f44f) area_bottom_pane

0xfc5c,	// (0x0000f488) area_top_pane_ParamLimits

0xfc5c,	// (0x0000f488) area_top_pane

0x956f,	// (0x00018d9b) call_video_uplink_pane_ParamLimits

0x956f,	// (0x00018d9b) call_video_uplink_pane

0xfcea,	// (0x0000f516) main_pane_ParamLimits

0xfcea,	// (0x0000f516) main_pane

0xbe0b,	// (0x0001b637) context_pane

0x3890,	// (0x000130bc) navi_pane

0x38c0,	// (0x000130ec) popup_cale_events_window_ParamLimits

0x38c0,	// (0x000130ec) popup_cale_events_window

0xbe1e,	// (0x0001b64a) popup_mup_playback_window

0x38d8,	// (0x00013104) signal_pane

0x9cf0,	// (0x0001951c) main_browser_pane

0x9f1c,	// (0x00019748) main_burst_pane

0x3592,	// (0x00012dbe) main_calc_pane

0xbdae,	// (0x0001b5da) main_cale_day_pane

0x033a,	// (0x0000fb66) main_cale_month_pane

0xbdae,	// (0x0001b5da) main_cale_week_pane

0x9f1c,	// (0x00019748) main_call_pane

0x99ae,	// (0x000191da) main_call_poc_pane

0x9f1c,	// (0x00019748) main_camera_pane

0x9f1c,	// (0x00019748) main_chi_dic_pane

0xa79b,	// (0x00019fc7) main_clock_pane

0x99ae,	// (0x000191da) main_fmradio_pane

0x9f1c,	// (0x00019748) main_graph_messa_pane

0x99ae,	// (0x000191da) main_help_pane

0x9cf0,	// (0x0001951c) main_im_pane

0x9c09,	// (0x00019435) main_image_pane_ParamLimits

0x9c09,	// (0x00019435) main_image_pane

0x99ae,	// (0x000191da) main_location2_pane

0x9f1c,	// (0x00019748) main_location_pane

0x9c09,	// (0x00019435) main_messa_pane

0x99ae,	// (0x000191da) main_mp2_pane

0x9f1c,	// (0x00019748) main_mp_pane

0x99ae,	// (0x000191da) main_msg_pane

0x99ae,	// (0x000191da) main_mup_eq_pane

0x99ae,	// (0x000191da) main_mup_pane

0x9cf0,	// (0x0001951c) main_notes_pane

0x99ae,	// (0x000191da) main_pec_pane

0x99ae,	// (0x000191da) main_phob_pane

0x99ae,	// (0x000191da) main_pinb_pane

0x99ae,	// (0x000191da) main_postcard_pane

0x99ae,	// (0x000191da) main_qdial_pane

0x9f1c,	// (0x00019748) main_skin_pane

0x99ae,	// (0x000191da) main_smil2_pane

0x9f1c,	// (0x00019748) main_smil_pane

0x9f1c,	// (0x00019748) main_video_pane

0x9f1c,	// (0x00019748) main_video_tele_pane

0x9c09,	// (0x00019435) main_viewer_pane_ParamLimits

0x9c09,	// (0x00019435) main_viewer_pane

0x9f1c,	// (0x00019748) main_vorec_pane

0x35e8,	// (0x00012e14) popup_blid_sat_info_window_ParamLimits

0x35e8,	// (0x00012e14) popup_blid_sat_info_window

0x364c,	// (0x00012e78) popup_dyc_status_message_window_ParamLimits

0x364c,	// (0x00012e78) popup_dyc_status_message_window

0x3666,	// (0x00012e92) popup_grid_large_graphic_window_ParamLimits

0x3666,	// (0x00012e92) popup_grid_large_graphic_window

0x3728,	// (0x00012f54) popup_loc_request_window_ParamLimits

0x3728,	// (0x00012f54) popup_loc_request_window

0x3864,	// (0x00013090) popup_wml_address_window_ParamLimits

0x3864,	// (0x00013090) popup_wml_address_window

0x33d0,	// (0x00012bfc) call_muted_g1

0x3064,	// (0x00012890) popup_call_audio_conf_window_ParamLimits

0x3064,	// (0x00012890) popup_call_audio_conf_window

0x33e0,	// (0x00012c0c) popup_call_audio_first_window_ParamLimits

0x33e0,	// (0x00012c0c) popup_call_audio_first_window

0x3456,	// (0x00012c82) popup_call_audio_in_window_ParamLimits

0x3456,	// (0x00012c82) popup_call_audio_in_window

0x3492,	// (0x00012cbe) popup_call_audio_out_window_ParamLimits

0x3492,	// (0x00012cbe) popup_call_audio_out_window

0x34cc,	// (0x00012cf8) popup_call_audio_second_window_ParamLimits

0x34cc,	// (0x00012cf8) popup_call_audio_second_window

0x3522,	// (0x00012d4e) popup_call_audio_wait_window_ParamLimits

0x3522,	// (0x00012d4e) popup_call_audio_wait_window

0x3557,	// (0x00012d83) popup_number_entry_window_ParamLimits

0x3557,	// (0x00012d83) popup_number_entry_window

0x959b,	// (0x00018dc7) bg_popup_call_pane_cp05_ParamLimits

0x959b,	// (0x00018dc7) bg_popup_call_pane_cp05

0x95bb,	// (0x00018de7) popup_number_entry_window_t1

0x95ce,	// (0x00018dfa) popup_number_entry_window_t2

0x95e0,	// (0x00018e0c) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0001e8f6) popup_number_entry_window_t

0x95f2,	// (0x00018e1e) text_title_cp2

0x9605,	// (0x00018e31) bg_popup_call_pane_cp_ParamLimits

0x9605,	// (0x00018e31) bg_popup_call_pane_cp

0x9613,	// (0x00018e3f) call_thumbnail_pane

0x961b,	// (0x00018e47) popup_call_audio_in_window_g1_ParamLimits

0x961b,	// (0x00018e47) popup_call_audio_in_window_g1

0x9627,	// (0x00018e53) popup_call_audio_in_window_g2_ParamLimits

0x9627,	// (0x00018e53) popup_call_audio_in_window_g2

0x9633,	// (0x00018e5f) popup_call_audio_in_window_g3_ParamLimits

0x9633,	// (0x00018e5f) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0001e8ff) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0001e8ff) popup_call_audio_in_window_g

0x963f,	// (0x00018e6b) popup_call_audio_in_window_t1_ParamLimits

0x963f,	// (0x00018e6b) popup_call_audio_in_window_t1

0x965b,	// (0x00018e87) popup_call_audio_in_window_t2_ParamLimits

0x965b,	// (0x00018e87) popup_call_audio_in_window_t2

0x9677,	// (0x00018ea3) popup_call_audio_in_window_t3_ParamLimits

0x9677,	// (0x00018ea3) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0001e906) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0001e906) popup_call_audio_in_window_t

0x9605,	// (0x00018e31) bg_popup_call_pane_cp01_ParamLimits

0x9605,	// (0x00018e31) bg_popup_call_pane_cp01

0x9613,	// (0x00018e3f) call_thumbnail_pane_cp02

0x968a,	// (0x00018eb6) call_type_pane_cp022

0x9692,	// (0x00018ebe) popup_call_audio_out_window_g1_ParamLimits

0x9692,	// (0x00018ebe) popup_call_audio_out_window_g1

0x96a4,	// (0x00018ed0) popup_call_audio_out_window_g2_ParamLimits

0x96a4,	// (0x00018ed0) popup_call_audio_out_window_g2

0x96b0,	// (0x00018edc) popup_call_audio_out_window_g3_ParamLimits

0x96b0,	// (0x00018edc) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0001e90d) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0001e90d) popup_call_audio_out_window_g

0x96c2,	// (0x00018eee) popup_call_audio_out_window_t1_ParamLimits

0x96c2,	// (0x00018eee) popup_call_audio_out_window_t1

0x96da,	// (0x00018f06) popup_call_audio_out_window_t2_ParamLimits

0x96da,	// (0x00018f06) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0001e914) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0001e914) popup_call_audio_out_window_t

0x96ef,	// (0x00018f1b) bg_popup_call_pane_ParamLimits

0x96ef,	// (0x00018f1b) bg_popup_call_pane

0xfea9,	// (0x0000f6d5) call_thumbnail_pane_cp_ParamLimits

0xfea9,	// (0x0000f6d5) call_thumbnail_pane_cp

0x9773,	// (0x00018f9f) call_type_pane_cp01_ParamLimits

0x9773,	// (0x00018f9f) call_type_pane_cp01

0x97b7,	// (0x00018fe3) popup_call_audio_first_window_g1_ParamLimits

0x97b7,	// (0x00018fe3) popup_call_audio_first_window_g1

0x9803,	// (0x0001902f) popup_call_audio_first_window_g2_ParamLimits

0x9803,	// (0x0001902f) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0001e919) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0001e919) popup_call_audio_first_window_g

0x9847,	// (0x00019073) popup_call_audio_first_window_t1_ParamLimits

0x9847,	// (0x00019073) popup_call_audio_first_window_t1

0x98f3,	// (0x0001911f) popup_call_audio_first_window_t4_ParamLimits

0x98f3,	// (0x0001911f) popup_call_audio_first_window_t4

0x997f,	// (0x000191ab) popup_call_audio_first_window_t5_ParamLimits

0x997f,	// (0x000191ab) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0001e91e) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0001e91e) popup_call_audio_first_window_t

0x99ae,	// (0x000191da) bg_popup_call_pane_cp02

0x99b8,	// (0x000191e4) call_type_pane_cp023

0x99c0,	// (0x000191ec) popup_call_audio_wait_window_g1

0x99c8,	// (0x000191f4) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0001e925) popup_call_audio_wait_window_g

0x99d0,	// (0x000191fc) popup_call_audio_wait_window_t3

0x99de,	// (0x0001920a) bg_popup_call_pane_cp03_ParamLimits

0x99de,	// (0x0001920a) bg_popup_call_pane_cp03

0x9a3e,	// (0x0001926a) call_thumbnail_pane_cp011_ParamLimits

0x9a3e,	// (0x0001926a) call_thumbnail_pane_cp011

0x9a4a,	// (0x00019276) call_type_pane_cp034_ParamLimits

0x9a4a,	// (0x00019276) call_type_pane_cp034

0x9a86,	// (0x000192b2) popup_call_audio_second_window_g1_ParamLimits

0x9a86,	// (0x000192b2) popup_call_audio_second_window_g1

0x9ac2,	// (0x000192ee) popup_call_audio_second_window_g2_ParamLimits

0x9ac2,	// (0x000192ee) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0001e92a) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0001e92a) popup_call_audio_second_window_g

0x9afe,	// (0x0001932a) popup_call_audio_second_window_t1_ParamLimits

0x9afe,	// (0x0001932a) popup_call_audio_second_window_t1

0x9b7f,	// (0x000193ab) popup_call_audio_second_window_t2_ParamLimits

0x9b7f,	// (0x000193ab) popup_call_audio_second_window_t2

0x9bb5,	// (0x000193e1) popup_call_audio_second_window_t3_ParamLimits

0x9bb5,	// (0x000193e1) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0001e92f) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0001e92f) popup_call_audio_second_window_t

0x99ae,	// (0x000191da) bg_popup_call_pane_cp04

0x9beb,	// (0x00019417) list_conf_pane

0x9bf3,	// (0x0001941f) popup_call_audio_conf_window_t1

0x9c01,	// (0x0001942d) call_thumbnail_pane_g1

0x9c09,	// (0x00019435) bg_pinb_pane_ParamLimits

0x9c09,	// (0x00019435) bg_pinb_pane

0x9c17,	// (0x00019443) find_pinb_pane

0x9c20,	// (0x0001944c) listscroll_pinb_pane_ParamLimits

0x9c20,	// (0x0001944c) listscroll_pinb_pane

0x9c2f,	// (0x0001945b) pinb_bg_pane_g1

0xfecd,	// (0x0000f6f9) pinb_bg_pane_g2

0xfed9,	// (0x0000f705) pinb_bg_pane_g3

0xfee5,	// (0x0000f711) pinb_bg_pane_g4

0xfef1,	// (0x0000f71d) pinb_bg_pane_g5

0xfefd,	// (0x0000f729) pinb_bg_pane_g6

0xff08,	// (0x0000f734) pinb_bg_pane_g7

0xff13,	// (0x0000f73f) pinb_bg_pane_g8

0xff1e,	// (0x0000f74a) pinb_bg_pane_g9

0xff28,	// (0x0000f754) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0001e936) pinb_bg_pane_g

0xff45,	// (0x0000f771) grid_pinb_pane

0xff50,	// (0x0000f77c) list_pinb_pane

0xff5b,	// (0x0000f787) scroll_pane_cp01_ParamLimits

0xff5b,	// (0x0000f787) scroll_pane_cp01

0x9c39,	// (0x00019465) find_pinb_pane_g1_ParamLimits

0x9c39,	// (0x00019465) find_pinb_pane_g1

0x9c51,	// (0x0001947d) find_pinb_pane_t1

0x9c63,	// (0x0001948f) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0001e950) find_pinb_pane_t

0x9c78,	// (0x000194a4) input_focus_pane_cp01_ParamLimits

0x9c78,	// (0x000194a4) input_focus_pane_cp01

0xff6d,	// (0x0000f799) cell_pinb_pane_ParamLimits

0xff6d,	// (0x0000f799) cell_pinb_pane

0xff8f,	// (0x0000f7bb) cell_pinb_pane_g1_ParamLimits

0xff8f,	// (0x0000f7bb) cell_pinb_pane_g1

0xffa4,	// (0x0000f7d0) cell_pinb_pane_g2_ParamLimits

0xffa4,	// (0x0000f7d0) cell_pinb_pane_g2

0x9c84,	// (0x000194b0) cell_pinb_pane_g3_ParamLimits

0x9c84,	// (0x000194b0) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0001e955) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0001e955) cell_pinb_pane_g

0x99ae,	// (0x000191da) grid_highlight_pane_cp01

0xffb0,	// (0x0000f7dc) list_pinb_item_pane_ParamLimits

0xffb0,	// (0x0000f7dc) list_pinb_item_pane

0x99ae,	// (0x000191da) list_highlight_pane_cp02

0xffc2,	// (0x0000f7ee) list_pinb_item_pane_g1_ParamLimits

0xffc2,	// (0x0000f7ee) list_pinb_item_pane_g1

0xffcf,	// (0x0000f7fb) list_pinb_item_pane_g2_ParamLimits

0xffcf,	// (0x0000f7fb) list_pinb_item_pane_g2

0xffdb,	// (0x0000f807) list_pinb_item_pane_g3_ParamLimits

0xffdb,	// (0x0000f807) list_pinb_item_pane_g3

0xffec,	// (0x0000f818) list_pinb_item_pane_g4_ParamLimits

0xffec,	// (0x0000f818) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0001e95c) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0001e95c) list_pinb_item_pane_g

0xfff8,	// (0x0000f824) list_pinb_item_pane_t1_ParamLimits

0xfff8,	// (0x0000f824) list_pinb_item_pane_t1

0x002d,	// (0x0000f859) calc_display_pane

0x0055,	// (0x0000f881) calc_paper_pane

0x0078,	// (0x0000f8a4) grid_calc_pane

0x99ae,	// (0x000191da) bg_list_pane_cp01

0x00a6,	// (0x0000f8d2) clock_g1

0x00ae,	// (0x0000f8da) clock_g2

0x0001,

0xf139,	// (0x0001e965) clock_g

0x00b6,	// (0x0000f8e2) clock_t1_ParamLimits

0x00b6,	// (0x0000f8e2) clock_t1

0x00cb,	// (0x0000f8f7) clock_t2_ParamLimits

0x00cb,	// (0x0000f8f7) clock_t2

0x00dd,	// (0x0000f909) clock_t3_ParamLimits

0x00dd,	// (0x0000f909) clock_t3

0x00ef,	// (0x0000f91b) clock_t4_ParamLimits

0x00ef,	// (0x0000f91b) clock_t4

0x0101,	// (0x0000f92d) clock_t5_ParamLimits

0x0101,	// (0x0000f92d) clock_t5

0x0116,	// (0x0000f942) clock_t6_ParamLimits

0x0116,	// (0x0000f942) clock_t6

0x0128,	// (0x0000f954) clock_t7_ParamLimits

0x0128,	// (0x0000f954) clock_t7

0x013a,	// (0x0000f966) clock_t8_ParamLimits

0x013a,	// (0x0000f966) clock_t8

0x014e,	// (0x0000f97a) clock_t9_ParamLimits

0x014e,	// (0x0000f97a) clock_t9

0x0008,

0xf13e,	// (0x0001e96a) clock_t_ParamLimits

0xf13e,	// (0x0001e96a) clock_t

0x9c98,	// (0x000194c4) popup_clock_analogue_window_cp02

0x9c98,	// (0x000194c4) popup_clock_digital_window_cp01

0x9ca0,	// (0x000194cc) listscroll_help_pane

0x99ae,	// (0x000191da) phob_pre_status_pane

0x9caa,	// (0x000194d6) grid_qdial_pane

0x9c09,	// (0x00019435) listscroll_mce_pane

0x9c09,	// (0x00019435) bg_notes_pane

0x9cb4,	// (0x000194e0) list_notes_pane

0x0164,	// (0x0000f990) scroll_pane_cp06

0x9cc2,	// (0x000194ee) bg_calc_paper_pane

0x9cd6,	// (0x00019502) list_calc_pane

0x9cf0,	// (0x0001951c) bg_calc_display_pane

0x0178,	// (0x0000f9a4) calc_display_pane_t1

0x018a,	// (0x0000f9b6) calc_display_pane_t2

0x9cfc,	// (0x00019528) calc_display_pane_t3

0x0002,

0xf151,	// (0x0001e97d) calc_display_pane_t

0x019c,	// (0x0000f9c8) cell_calc_pane_ParamLimits

0x019c,	// (0x0000f9c8) cell_calc_pane

0x9d0e,	// (0x0001953a) bg_calc_paper_pane_g1

0x9d1a,	// (0x00019546) bg_calc_paper_pane_g2

0x9d26,	// (0x00019552) bg_calc_paper_pane_g3

0x9d32,	// (0x0001955e) bg_calc_paper_pane_g4

0x9d3e,	// (0x0001956a) bg_calc_paper_pane_g5

0x01d9,	// (0x0000fa05) bg_calc_paper_pane_g6

0x01ec,	// (0x0000fa18) bg_calc_paper_pane_g7

0x01ff,	// (0x0000fa2b) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0001e984) bg_calc_paper_pane_g

0x0210,	// (0x0000fa3c) calc_bg_paper_pane_g9

0x0221,	// (0x0000fa4d) list_calc_item_pane_ParamLimits

0x0221,	// (0x0000fa4d) list_calc_item_pane

0x9d4a,	// (0x00019576) list_calc_item_pane_g1

0x9d57,	// (0x00019583) list_calc_item_pane_t1_ParamLimits

0x9d57,	// (0x00019583) list_calc_item_pane_t1

0x0239,	// (0x0000fa65) list_calc_item_pane_t2_ParamLimits

0x0239,	// (0x0000fa65) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0001e995) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0001e995) list_calc_item_pane_t

0x9d69,	// (0x00019595) cell_calc_pane_g1

0x9d73,	// (0x0001959f) grid_highlight_pane_cp02

0x9d95,	// (0x000195c1) bg_calc_display_pane_g1

0x9d9e,	// (0x000195ca) bg_calc_display_pane_g2

0x9da8,	// (0x000195d4) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0001e99f) bg_calc_display_pane_g

0x026b,	// (0x0000fa97) cell_qdial_pane_ParamLimits

0x026b,	// (0x0000fa97) cell_qdial_pane

0x027f,	// (0x0000faab) cell_qdial_pane_g1_ParamLimits

0x027f,	// (0x0000faab) cell_qdial_pane_g1

0x0295,	// (0x0000fac1) cell_qdial_pane_g2_ParamLimits

0x0295,	// (0x0000fac1) cell_qdial_pane_g2

0x9db1,	// (0x000195dd) cell_qdial_pane_g3_ParamLimits

0x9db1,	// (0x000195dd) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0001e9a6) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0001e9a6) cell_qdial_pane_g

0x02bc,	// (0x0000fae8) cell_qdial_pane_t1_ParamLimits

0x02bc,	// (0x0000fae8) cell_qdial_pane_t1

0x02d4,	// (0x0000fb00) cell_qdial_pane_t2_ParamLimits

0x02d4,	// (0x0000fb00) cell_qdial_pane_t2

0x02e7,	// (0x0000fb13) cell_qdial_pane_t3_ParamLimits

0x02e7,	// (0x0000fb13) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0001e9af) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0001e9af) cell_qdial_pane_t

0x99ae,	// (0x000191da) grid_highlight_pane_cp04

0x9dbd,	// (0x000195e9) thumbnail_qdial_pane_ParamLimits

0x9dbd,	// (0x000195e9) thumbnail_qdial_pane

0x9e19,	// (0x00019645) list_help_pane

0x9e22,	// (0x0001964e) scroll_pane_cp02

0x02fa,	// (0x0000fb26) help_list_pane_t1_ParamLimits

0x02fa,	// (0x0000fb26) help_list_pane_t1

0x9e2b,	// (0x00019657) bg_notes_pane_g2

0x9e33,	// (0x0001965f) bg_notes_pane_g3

0x9e3b,	// (0x00019667) notes_bg_pane_g1

0x9e43,	// (0x0001966f) notes_bg_pane_g4

0x9e4b,	// (0x00019677) notes_bg_pane_g5

0x9e53,	// (0x0001967f) notes_bg_pane_g6

0x9e5b,	// (0x00019687) notes_bg_pane_g7

0x9e63,	// (0x0001968f) notes_bg_pane_g8

0x9e6b,	// (0x00019697) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0001e9cd) notes_bg_pane_g

0x0318,	// (0x0000fb44) list_notes_text_pane_ParamLimits

0x0318,	// (0x0000fb44) list_notes_text_pane

0x9e73,	// (0x0001969f) list_notes_text_pane_g1

0x032c,	// (0x0000fb58) list_notes_text_pane_t1

0x033a,	// (0x0000fb66) listscroll_cale_week_pane

0x0370,	// (0x0000fb9c) bg_cale_heading_pane

0x0399,	// (0x0000fbc5) bg_cale_pane_cp01

0x03bb,	// (0x0000fbe7) cale_week_corner_pane

0x03da,	// (0x0000fc06) cale_week_day_heading_pane

0x0408,	// (0x0000fc34) cale_week_scroll_pane_g1

0x042c,	// (0x0000fc58) cale_week_scroll_pane_g2

0x0444,	// (0x0000fc70) cale_week_scroll_pane_g3

0x045c,	// (0x0000fc88) cale_week_scroll_pane_g4

0x0478,	// (0x0000fca4) cale_week_scroll_pane_g5

0x0498,	// (0x0000fcc4) cale_week_scroll_pane_g6

0x04b8,	// (0x0000fce4) cale_week_scroll_pane_g7

0x04dc,	// (0x0000fd08) cale_week_scroll_pane_g8

0x0500,	// (0x0000fd2c) cale_week_scroll_pane_g9

0x051d,	// (0x0000fd49) cale_week_scroll_pane_g10

0x053a,	// (0x0000fd66) cale_week_scroll_pane_g11

0x0557,	// (0x0000fd83) cale_week_scroll_pane_g12

0x0574,	// (0x0000fda0) cale_week_scroll_pane_g13

0x0591,	// (0x0000fdbd) cale_week_scroll_pane_g14

0x05ba,	// (0x0000fde6) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0001e9dc) cale_week_scroll_pane_g

0x0607,	// (0x0000fe33) cale_week_time_pane

0x062b,	// (0x0000fe57) grid_cale_week_pane

0x9e9f,	// (0x000196cb) scroll_pane_cp08

0x0662,	// (0x0000fe8e) cell_cale_week_pane_ParamLimits

0x0662,	// (0x0000fe8e) cell_cale_week_pane

0x06f2,	// (0x0000ff1e) cale_week_day_heading_pane_t1

0x073c,	// (0x0000ff68) cale_week_day_heading_pane_t2

0x078b,	// (0x0000ffb7) cale_week_day_heading_pane_t3

0x07da,	// (0x00010006) cale_week_day_heading_pane_t4

0x0829,	// (0x00010055) cale_week_day_heading_pane_t5

0x087c,	// (0x000100a8) cale_week_day_heading_pane_t6

0x08d3,	// (0x000100ff) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0001e9fd) cale_week_day_heading_pane_t

0x9ec1,	// (0x000196ed) bg_cale_side_pane

0x091d,	// (0x00010149) cale_week_time_pane_t1

0x0957,	// (0x00010183) cale_week_time_pane_t2

0x0991,	// (0x000101bd) cale_week_time_pane_t3

0x09cb,	// (0x000101f7) cale_week_time_pane_t4

0x0a05,	// (0x00010231) cale_week_time_pane_t5

0x0a3f,	// (0x0001026b) cale_week_time_pane_t6

0x0a79,	// (0x000102a5) cale_week_time_pane_t7

0x0ab3,	// (0x000102df) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0001ea0c) cale_week_time_pane_t

0x0af3,	// (0x0001031f) cell_cale_week_pane_g2

0x0b12,	// (0x0001033e) cell_cale_week_pane_g3_ParamLimits

0x0b12,	// (0x0001033e) cell_cale_week_pane_g3

0x9ecf,	// (0x000196fb) grid_highlight_pane_cp07

0x9ed7,	// (0x00019703) listscroll_gms_pane

0x9ee1,	// (0x0001970d) grid_gms_pane

0x9eea,	// (0x00019716) listscroll_gms_pane_g1

0x9ef2,	// (0x0001971e) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0001ea1d) listscroll_gms_pane_g

0x0b2a,	// (0x00010356) scroll_pane_cp010

0x0b35,	// (0x00010361) cell_gms_pane_ParamLimits

0x0b35,	// (0x00010361) cell_gms_pane

0x0b4f,	// (0x0001037b) cell_gms_pane_g1

0x9efa,	// (0x00019726) cell_gms_pane_g2

0x9f02,	// (0x0001972e) cell_gms_pane_g3

0x9f0b,	// (0x00019737) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0001ea22) cell_gms_pane_g

0x9f14,	// (0x00019740) grid_highlight_pane_cp09

0x3378,	// (0x00012ba4) phob_pre_status_pane_g1

0x3380,	// (0x00012bac) phob_pre_status_pane_g2

0x3388,	// (0x00012bb4) phob_pre_status_pane_g3

0x3390,	// (0x00012bbc) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0001ee0d) phob_pre_status_pane_g

0x33a0,	// (0x00012bcc) phob_pre_status_pane_t1

0x33b0,	// (0x00012bdc) phob_pre_status_pane_t2

0x33c0,	// (0x00012bec) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0001ee18) phob_pre_status_pane_t

0x9f1c,	// (0x00019748) bg_list_pane_cp05

0x0b5f,	// (0x0001038b) grid_vorec_pane

0x0b6b,	// (0x00010397) vorec_t1

0x0b79,	// (0x000103a5) vorec_t2

0x0b87,	// (0x000103b3) vorec_t3

0x0b95,	// (0x000103c1) vorec_t4

0x9506,	// (0x00018d32) vorec_t5

0x9514,	// (0x00018d40) vorec_t6

0x0004,

0xf1ff,	// (0x0001ea2b) vorec_t

0x9522,	// (0x00018d4e) wait_bar_pane_cp01

0x0bb1,	// (0x000103dd) cell_vorec_pane_ParamLimits

0x0bb1,	// (0x000103dd) cell_vorec_pane

0x9f24,	// (0x00019750) cell_vorec_pane_g1

0x99ae,	// (0x000191da) grid_highlight_pane_cp05

0x0bdc,	// (0x00010408) cams_zoom_pane

0x0beb,	// (0x00010417) image_vga_pane

0x0c05,	// (0x00010431) main_camera_pane_g1

0x0c17,	// (0x00010443) main_camera_pane_g2

0x0c27,	// (0x00010453) main_camera_pane_g3

0x0c3b,	// (0x00010467) main_camera_pane_g4

0x0c4f,	// (0x0001047b) main_camera_pane_g5

0x0c63,	// (0x0001048f) main_camera_pane_g6

0x0c77,	// (0x000104a3) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0001ea36) main_camera_pane_g

0x0c8b,	// (0x000104b7) main_camera_pane_t1

0x0ca1,	// (0x000104cd) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0001ea47) main_camera_pane_t

0x0cdf,	// (0x0001050b) cams_zoom_pane_cp_ParamLimits

0x0cdf,	// (0x0001050b) cams_zoom_pane_cp

0x0d07,	// (0x00010533) image_cif_pane_ParamLimits

0x0d07,	// (0x00010533) image_cif_pane

0x0d42,	// (0x0001056e) image_subqcif_pane

0x0d4c,	// (0x00010578) main_video_pane_g1_ParamLimits

0x0d4c,	// (0x00010578) main_video_pane_g1

0x0d70,	// (0x0001059c) main_video_pane_g2_ParamLimits

0x0d70,	// (0x0001059c) main_video_pane_g2

0x0da6,	// (0x000105d2) main_video_pane_g3_ParamLimits

0x0da6,	// (0x000105d2) main_video_pane_g3

0x0dd4,	// (0x00010600) main_video_pane_g4_ParamLimits

0x0dd4,	// (0x00010600) main_video_pane_g4

0x0e02,	// (0x0001062e) main_video_pane_g5_ParamLimits

0x0e02,	// (0x0001062e) main_video_pane_g5

0x9f3a,	// (0x00019766) main_video_pane_g6_ParamLimits

0x9f3a,	// (0x00019766) main_video_pane_g6

0x0006,

0xf220,	// (0x0001ea4c) main_video_pane_g_ParamLimits

0xf220,	// (0x0001ea4c) main_video_pane_g

0x0e2b,	// (0x00010657) main_video_pane_t1_ParamLimits

0x0e2b,	// (0x00010657) main_video_pane_t1

0x9f54,	// (0x00019780) cams_zoom_pane_g1

0x9f5d,	// (0x00019789) cams_zoom_pane_g2

0x9f66,	// (0x00019792) cams_zoom_pane_g3

0x9f6f,	// (0x0001979b) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0001ea5b) cams_zoom_pane_g

0x0e88,	// (0x000106b4) grid_cams_pane

0x0ea2,	// (0x000106ce) linegrid_cams_pane

0x0eb4,	// (0x000106e0) cell_cams_pane_ParamLimits

0x0eb4,	// (0x000106e0) cell_cams_pane

0x9f78,	// (0x000197a4) cams_burst_image_pane

0x9f80,	// (0x000197ac) cell_cams_pane_g1

0x99ae,	// (0x000191da) grid_highlight_pane_cp03

0x9d69,	// (0x00019595) mp_bg_pane_g1

0x99ae,	// (0x000191da) bg_list_pane_cp03

0xbcd1,	// (0x0001b4fd) bg_mp_pane

0xbcd9,	// (0x0001b505) grid_mp_pane

0xbce1,	// (0x0001b50d) media_player_g1

0xbceb,	// (0x0001b517) media_player_t1

0xbcf9,	// (0x0001b525) media_player_t2

0xbd07,	// (0x0001b533) media_player_t3

0xbd15,	// (0x0001b541) media_player_t4

0xbd23,	// (0x0001b54f) media_player_t5

0xbd31,	// (0x0001b55d) media_player_t6

0xbd3f,	// (0x0001b56b) media_player_t7

0x0006,

0xf5cb,	// (0x0001edf7) media_player_t

0xbd4d,	// (0x0001b579) wait_bar_pane_cp02

0xf5b0,	// (0x0001eddc) main_usb_pane_t

0x336f,	// (0x00012b9b) cell_mp_pane

0x9d69,	// (0x00019595) cell_mp_pane_g1

0x99ae,	// (0x000191da) grid_highlight_pane_cp06

0x9f88,	// (0x000197b4) grid_skin_colour_pane

0x9f90,	// (0x000197bc) list_highlight_pane_cp03

0x0fda,	// (0x00010806) skin_g1

0x9f98,	// (0x000197c4) skin_t1

0x9fa7,	// (0x000197d3) skin_t2

0x0001,

0xf264,	// (0x0001ea90) skin_t

0x0fe2,	// (0x0001080e) cell_skin_colour_pane_ParamLimits

0x0fe2,	// (0x0001080e) cell_skin_colour_pane

0x9fb5,	// (0x000197e1) cell_skin_colour_pane_g1

0x1055,	// (0x00010881) call_video_g1_ParamLimits

0x1055,	// (0x00010881) call_video_g1

0x1071,	// (0x0001089d) call_video_g2_ParamLimits

0x1071,	// (0x0001089d) call_video_g2

0x0001,

0xf269,	// (0x0001ea95) call_video_g_ParamLimits

0xf269,	// (0x0001ea95) call_video_g

0x10b6,	// (0x000108e2) call_video_uplink_pane_cp1_ParamLimits

0x10b6,	// (0x000108e2) call_video_uplink_pane_cp1

0x9fc7,	// (0x000197f3) call_video_uplink_pane_cp2

0x1157,	// (0x00010983) video_down_crop_pane_ParamLimits

0x1157,	// (0x00010983) video_down_crop_pane

0x1240,	// (0x00010a6c) video_down_pane_ParamLimits

0x1240,	// (0x00010a6c) video_down_pane

0x9fcf,	// (0x000197fb) video_down_subqcif_pane_ParamLimits

0x9fcf,	// (0x000197fb) video_down_subqcif_pane

0x9fe9,	// (0x00019815) video_down_subqcif_pane_cp_ParamLimits

0x9fe9,	// (0x00019815) video_down_subqcif_pane_cp

0xa011,	// (0x0001983d) im_reading_pane_ParamLimits

0xa011,	// (0x0001983d) im_reading_pane

0x1349,	// (0x00010b75) im_writing_pane_ParamLimits

0x1349,	// (0x00010b75) im_writing_pane

0x1365,	// (0x00010b91) im_reading_pane_t1

0xa02b,	// (0x00019857) list_im_pane

0xa03c,	// (0x00019868) scroll_pane_cp07

0x13a1,	// (0x00010bcd) im_writing_pane_t1_ParamLimits

0x13a1,	// (0x00010bcd) im_writing_pane_t1

0xa055,	// (0x00019881) im_writing_pane_t2_ParamLimits

0xa055,	// (0x00019881) im_writing_pane_t2

0x0001,

0xf273,	// (0x0001ea9f) im_writing_pane_t_ParamLimits

0xf273,	// (0x0001ea9f) im_writing_pane_t

0x99ae,	// (0x000191da) input_focus_pane_cp04

0x99ae,	// (0x000191da) input_focus_pane_cp05

0x13b6,	// (0x00010be2) list_im_single_pane_ParamLimits

0x13b6,	// (0x00010be2) list_im_single_pane

0x13cc,	// (0x00010bf8) list_single_im_pane_t1

0x332f,	// (0x00012b5b) blid_accuracy_pane

0x3337,	// (0x00012b63) blid_compass_pane

0x3341,	// (0x00012b6d) main_location_t1

0x3351,	// (0x00012b7d) main_location_t2

0x3361,	// (0x00012b8d) main_location_t3

0x0002,

0xf5da,	// (0x0001ee06) main_location_t

0x99ae,	// (0x000191da) aid_levels_location

0x9d69,	// (0x00019595) blid_accuracy_pane_g1

0x9d69,	// (0x00019595) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0001eb01) blid_accuracy_pane_g

0xa09d,	// (0x000198c9) wml_content_pane

0xa0db,	// (0x00019907) wml_button_pane_ParamLimits

0xa0db,	// (0x00019907) wml_button_pane

0x13db,	// (0x00010c07) wml_list_single_large_pane_ParamLimits

0x13db,	// (0x00010c07) wml_list_single_large_pane

0x13f1,	// (0x00010c1d) wml_list_single_medium_pane_ParamLimits

0x13f1,	// (0x00010c1d) wml_list_single_medium_pane

0x1408,	// (0x00010c34) wml_list_single_small_pane_ParamLimits

0x1408,	// (0x00010c34) wml_list_single_small_pane

0xa0ef,	// (0x0001991b) wml_selection_box_pane_ParamLimits

0xa0ef,	// (0x0001991b) wml_selection_box_pane

0xa102,	// (0x0001992e) wml_list_single_pane_t1

0xa111,	// (0x0001993d) wml_list_single_medium_pane_t1

0xa120,	// (0x0001994c) wml_list_single_large_pane_t1

0xa12f,	// (0x0001995b) input_focus_pane_cp02_ParamLimits

0xa12f,	// (0x0001995b) input_focus_pane_cp02

0xa142,	// (0x0001996e) wml_selection_box_pane_g1

0xa14b,	// (0x00019977) wml_selection_box_pane_t1_ParamLimits

0xa14b,	// (0x00019977) wml_selection_box_pane_t1

0x9c09,	// (0x00019435) bg_wml_button_pane_ParamLimits

0x9c09,	// (0x00019435) bg_wml_button_pane

0xa163,	// (0x0001998f) wml_button_pane_g1

0xa16b,	// (0x00019997) wml_button_pane_t1

0xa163,	// (0x0001998f) wml_button_bg_pane_g1

0xa17b,	// (0x000199a7) wml_button_bg_pane_g2

0xa183,	// (0x000199af) wml_button_bg_pane_g3

0xa18b,	// (0x000199b7) wml_button_bg_pane_g4

0xa193,	// (0x000199bf) wml_button_bg_pane_g5

0xa19b,	// (0x000199c7) wml_button_bg_pane_g6

0xa1a3,	// (0x000199cf) wml_button_bg_pane_g7

0xa1ab,	// (0x000199d7) wml_button_bg_pane_g8

0xa1b3,	// (0x000199df) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0001eaa4) wml_button_bg_pane_g

0x1424,	// (0x00010c50) bg_list_pane_cp02

0xa1bb,	// (0x000199e7) mce_header_pane_ParamLimits

0xa1bb,	// (0x000199e7) mce_header_pane

0xa1d1,	// (0x000199fd) mce_icon_pane

0xa1d1,	// (0x000199fd) mce_image_pane

0xa1da,	// (0x00019a06) mce_text_pane_ParamLimits

0xa1da,	// (0x00019a06) mce_text_pane

0x142e,	// (0x00010c5a) scroll_pane_cp03

0xa0d3,	// (0x000198ff) scroll_pane_cp04

0xa1ed,	// (0x00019a19) scroll_pane_cp05_ParamLimits

0xa1ed,	// (0x00019a19) scroll_pane_cp05

0x1438,	// (0x00010c64) mce_header_field_pane_ParamLimits

0x1438,	// (0x00010c64) mce_header_field_pane

0x1451,	// (0x00010c7d) mce_header_field_pane_2_ParamLimits

0x1451,	// (0x00010c7d) mce_header_field_pane_2

0x1467,	// (0x00010c93) mce_header_field_pane_3

0x146f,	// (0x00010c9b) list_single_mce_message_pane_ParamLimits

0x146f,	// (0x00010c9b) list_single_mce_message_pane

0x1488,	// (0x00010cb4) list_single_mce_smart_pane_ParamLimits

0x1488,	// (0x00010cb4) list_single_mce_smart_pane

0xa1f9,	// (0x00019a25) input_focus_pane_cp03

0xa202,	// (0x00019a2e) list_header_data_pane

0x14ac,	// (0x00010cd8) mce_header_field_pane_t1

0x14bc,	// (0x00010ce8) list_single_mce_header_pane_ParamLimits

0x14bc,	// (0x00010ce8) list_single_mce_header_pane

0xa20a,	// (0x00019a36) list_single_mce_header_pane_t1

0xa219,	// (0x00019a45) list_single_mce_message_pane_g1

0xa221,	// (0x00019a4d) list_single_mce_message_pane_t1

0x14f6,	// (0x00010d22) bg_cale_heading_pane_cp01_ParamLimits

0x14f6,	// (0x00010d22) bg_cale_heading_pane_cp01

0xa22f,	// (0x00019a5b) bg_cale_pane_cp02_ParamLimits

0xa22f,	// (0x00019a5b) bg_cale_pane_cp02

0x153d,	// (0x00010d69) cale_month_corner_pane

0x155c,	// (0x00010d88) cale_month_day_heading_pane_ParamLimits

0x155c,	// (0x00010d88) cale_month_day_heading_pane

0x15bb,	// (0x00010de7) cale_month_pane_g1_ParamLimits

0x15bb,	// (0x00010de7) cale_month_pane_g1

0x15f7,	// (0x00010e23) cale_month_pane_g2_ParamLimits

0x15f7,	// (0x00010e23) cale_month_pane_g2

0x1633,	// (0x00010e5f) cale_month_pane_g3_ParamLimits

0x1633,	// (0x00010e5f) cale_month_pane_g3

0x1687,	// (0x00010eb3) cale_month_pane_g4_ParamLimits

0x1687,	// (0x00010eb3) cale_month_pane_g4

0x16db,	// (0x00010f07) cale_month_pane_g5_ParamLimits

0x16db,	// (0x00010f07) cale_month_pane_g5

0x1737,	// (0x00010f63) cale_month_pane_g6_ParamLimits

0x1737,	// (0x00010f63) cale_month_pane_g6

0x179b,	// (0x00010fc7) cale_month_pane_g7_ParamLimits

0x179b,	// (0x00010fc7) cale_month_pane_g7

0x1807,	// (0x00011033) cale_month_pane_g8_ParamLimits

0x1807,	// (0x00011033) cale_month_pane_g8

0x1873,	// (0x0001109f) cale_month_pane_g9_ParamLimits

0x1873,	// (0x0001109f) cale_month_pane_g9

0x18d1,	// (0x000110fd) cale_month_pane_g10_ParamLimits

0x18d1,	// (0x000110fd) cale_month_pane_g10

0x1923,	// (0x0001114f) cale_month_pane_g11_ParamLimits

0x1923,	// (0x0001114f) cale_month_pane_g11

0x1975,	// (0x000111a1) cale_month_pane_g12_ParamLimits

0x1975,	// (0x000111a1) cale_month_pane_g12

0x19cd,	// (0x000111f9) cale_month_pane_g13_ParamLimits

0x19cd,	// (0x000111f9) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0001eab7) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0001eab7) cale_month_pane_g

0x1a25,	// (0x00011251) cale_month_week_pane

0x1a49,	// (0x00011275) grid_cale_month_pane_ParamLimits

0x1a49,	// (0x00011275) grid_cale_month_pane

0x1a9f,	// (0x000112cb) cale_month_day_heading_pane_t1

0x1b25,	// (0x00011351) cale_month_day_heading_pane_t2

0x1bb6,	// (0x000113e2) cale_month_day_heading_pane_t3

0x1c47,	// (0x00011473) cale_month_day_heading_pane_t4

0x1cd8,	// (0x00011504) cale_month_day_heading_pane_t5

0x1d79,	// (0x000115a5) cale_month_day_heading_pane_t6

0x1e1e,	// (0x0001164a) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0001ead2) cale_month_day_heading_pane_t

0x9ec1,	// (0x000196ed) bg_cale_side_pane_cp01

0x1ec7,	// (0x000116f3) cale_month_week_pane_t1

0x1ee0,	// (0x0001170c) cale_month_week_pane_t2

0x1ef9,	// (0x00011725) cale_month_week_pane_t3

0x1f12,	// (0x0001173e) cale_month_week_pane_t4

0x1f2b,	// (0x00011757) cale_month_week_pane_t5

0x1f44,	// (0x00011770) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0001eae1) cale_month_week_pane_t

0x1f63,	// (0x0001178f) cell_cale_month_pane_ParamLimits

0x1f63,	// (0x0001178f) cell_cale_month_pane

0xa26e,	// (0x00019a9a) cell_cale_month_pane_g1

0x20b7,	// (0x000118e3) cell_cale_month_pane_t1_ParamLimits

0x20b7,	// (0x000118e3) cell_cale_month_pane_t1

0x9ecf,	// (0x000196fb) grid_highlight_pane_cp08

0x9d69,	// (0x00019595) main_smil_g1

0x20d7,	// (0x00011903) smil_status_pane

0xa27a,	// (0x00019aa6) smil_text_pane

0xbbef,	// (0x0001b41b) bg_popup_call3_rect_pane_g8

0xbbf7,	// (0x0001b423) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0001ed9a) bg_popup_call3_rect_pane_g

0xbe85,	// (0x0001b6b1) smil_status_volume_pane_g1

0x20ea,	// (0x00011916) smil_status_pane_t1

0xbeb8,	// (0x0001b6e4) volume_smil_pane

0xa284,	// (0x00019ab0) list_smil_text_pane

0x2103,	// (0x0001192f) scroll_pane_cp011

0x210e,	// (0x0001193a) smil_text_list_pane_t1_ParamLimits

0x210e,	// (0x0001193a) smil_text_list_pane_t1

0xa28e,	// (0x00019aba) aid_volume_smil_ParamLimits

0xa28e,	// (0x00019aba) aid_volume_smil

0x9d69,	// (0x00019595) smil_volume_pane_g1

0x9d69,	// (0x00019595) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0001eb01) smil_volume_pane_g

0x033a,	// (0x0000fb66) listscroll_cale_day_pane

0xa2b0,	// (0x00019adc) bg_cale_pane

0xa2c8,	// (0x00019af4) list_cale_pane

0xa2eb,	// (0x00019b17) scroll_pane_cp09

0xa2fc,	// (0x00019b28) cale_bg_pane_g1

0xa304,	// (0x00019b30) cale_bg_pane_g2

0xa30c,	// (0x00019b38) cale_bg_pane_g3

0xa314,	// (0x00019b40) cale_bg_pane_g4

0xa31c,	// (0x00019b48) cale_bg_pane_g5

0xa324,	// (0x00019b50) cale_bg_pane_g6

0xa32c,	// (0x00019b58) cale_bg_pane_g7

0xa334,	// (0x00019b60) cale_bg_pane_g8

0xa33c,	// (0x00019b68) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0001eb06) cale_bg_pane_g

0x2147,	// (0x00011973) list_cale_time_pane_ParamLimits

0x2147,	// (0x00011973) list_cale_time_pane

0xa34c,	// (0x00019b78) list_cale_time_pane_g1_ParamLimits

0xa34c,	// (0x00019b78) list_cale_time_pane_g1

0xa358,	// (0x00019b84) list_cale_time_pane_g2_ParamLimits

0xa358,	// (0x00019b84) list_cale_time_pane_g2

0x215b,	// (0x00011987) list_cale_time_pane_g3_ParamLimits

0x215b,	// (0x00011987) list_cale_time_pane_g3

0x2169,	// (0x00011995) list_cale_time_pane_g4_ParamLimits

0x2169,	// (0x00011995) list_cale_time_pane_g4

0x2177,	// (0x000119a3) list_cale_time_pane_g5_ParamLimits

0x2177,	// (0x000119a3) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0001eb19) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0001eb19) list_cale_time_pane_g

0xa372,	// (0x00019b9e) list_cale_time_pane_t1_ParamLimits

0xa372,	// (0x00019b9e) list_cale_time_pane_t1

0xa39a,	// (0x00019bc6) list_cale_time_pane_t2_ParamLimits

0xa39a,	// (0x00019bc6) list_cale_time_pane_t2

0x2516,	// (0x00011d42) aid_blid_cardinal_pane

0x2554,	// (0x00011d80) compass_pane_t4

0xa3c2,	// (0x00019bee) list_cale_time_pane_t4_ParamLimits

0xa3c2,	// (0x00019bee) list_cale_time_pane_t4

0x2562,	// (0x00011d8e) compass_pane_t5

0x2570,	// (0x00011d9c) compass_pane_t6

0x257e,	// (0x00011daa) compass_pane_t7

0xa84b,	// (0x0001a077) navi_pane_cc_t1

0xa9aa,	// (0x0001a1d6) aid_phob_thumbnail_center_pane

0x2cfa,	// (0x00012526) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0001eb26) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0001eb26) list_cale_time_pane_t

0x9605,	// (0x00018e31) bg_popup_window_pane_cp02_ParamLimits

0x9605,	// (0x00018e31) bg_popup_window_pane_cp02

0xa3ea,	// (0x00019c16) heading_pane_cp01_ParamLimits

0xa3ea,	// (0x00019c16) heading_pane_cp01

0xa3f6,	// (0x00019c22) loc_req_pane_ParamLimits

0xa3f6,	// (0x00019c22) loc_req_pane

0xa406,	// (0x00019c32) loc_type_pane_ParamLimits

0xa406,	// (0x00019c32) loc_type_pane

0xa418,	// (0x00019c44) loc_type_pane_t1_ParamLimits

0xa418,	// (0x00019c44) loc_type_pane_t1

0xa42a,	// (0x00019c56) loc_type_pane_t2_ParamLimits

0xa42a,	// (0x00019c56) loc_type_pane_t2

0xa43c,	// (0x00019c68) loc_type_pane_t3_ParamLimits

0xa43c,	// (0x00019c68) loc_type_pane_t3

0x0002,

0xf301,	// (0x0001eb2d) loc_type_pane_t_ParamLimits

0xf301,	// (0x0001eb2d) loc_type_pane_t

0xa44e,	// (0x00019c7a) list_loc_req_pane

0xa458,	// (0x00019c84) scroll_pane_cp012

0x2185,	// (0x000119b1) list_single_loc_request_popup_menu_pane_ParamLimits

0x2185,	// (0x000119b1) list_single_loc_request_popup_menu_pane

0xa463,	// (0x00019c8f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa463,	// (0x00019c8f) list_single_loc_request_popup_menu_pane_g1

0xa46f,	// (0x00019c9b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa46f,	// (0x00019c9b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0001eb34) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0001eb34) list_single_loc_request_popup_menu_pane_g

0xa47b,	// (0x00019ca7) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa47b,	// (0x00019ca7) list_single_loc_request_popup_menu_pane_t1

0x9c09,	// (0x00019435) bg_popup_window_pane_cp03_ParamLimits

0x9c09,	// (0x00019435) bg_popup_window_pane_cp03

0xa491,	// (0x00019cbd) heading_loc_req_pane_ParamLimits

0xa491,	// (0x00019cbd) heading_loc_req_pane

0x2192,	// (0x000119be) popup_dyc_status_message_window_g1_ParamLimits

0x2192,	// (0x000119be) popup_dyc_status_message_window_g1

0x21a6,	// (0x000119d2) popup_dyc_status_message_window_t1_ParamLimits

0x21a6,	// (0x000119d2) popup_dyc_status_message_window_t1

0x21bb,	// (0x000119e7) popup_dyc_status_message_window_t2_ParamLimits

0x21bb,	// (0x000119e7) popup_dyc_status_message_window_t2

0x21d0,	// (0x000119fc) popup_dyc_status_message_window_t3_ParamLimits

0x21d0,	// (0x000119fc) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0001eb39) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0001eb39) popup_dyc_status_message_window_t

0x99ae,	// (0x000191da) bg_heading_pane_cp01

0xa49d,	// (0x00019cc9) heading_loc_req_pane_g1

0xa4a5,	// (0x00019cd1) heading_loc_req_pane_g2

0xa4ad,	// (0x00019cd9) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0001eb40) heading_loc_req_pane_g

0xa4b5,	// (0x00019ce1) heading_loc_req_pane_t1

0xa4c5,	// (0x00019cf1) bg_popup_sub_pane_cp01_ParamLimits

0xa4c5,	// (0x00019cf1) bg_popup_sub_pane_cp01

0xa4d3,	// (0x00019cff) popup_cale_events_window_g1_ParamLimits

0xa4d3,	// (0x00019cff) popup_cale_events_window_g1

0xa4f3,	// (0x00019d1f) popup_cale_events_window_g2_ParamLimits

0xa4f3,	// (0x00019d1f) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0001eb74) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0001eb74) popup_cale_events_window_g

0xa513,	// (0x00019d3f) popup_cale_events_window_t1_ParamLimits

0xa513,	// (0x00019d3f) popup_cale_events_window_t1

0xa525,	// (0x00019d51) popup_cale_events_window_t2_ParamLimits

0xa525,	// (0x00019d51) popup_cale_events_window_t2

0xa563,	// (0x00019d8f) popup_cale_events_window_t3_ParamLimits

0xa563,	// (0x00019d8f) popup_cale_events_window_t3

0xa59d,	// (0x00019dc9) popup_cale_events_window_t4_ParamLimits

0xa59d,	// (0x00019dc9) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0001eb79) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0001eb79) popup_cale_events_window_t

0x22d5,	// (0x00011b01) call_type_pane

0x22e5,	// (0x00011b11) popup_call_status_window_g1

0x22f9,	// (0x00011b25) popup_call_status_window_g2

0x230d,	// (0x00011b39) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0001eb82) popup_call_status_window_g

0xa5d3,	// (0x00019dff) call_type_pane_g1

0xa5dc,	// (0x00019e08) call_type_pane_g2

0x0001,

0xf35d,	// (0x0001eb89) call_type_pane_g

0x99ae,	// (0x000191da) bg_popup_sub_pane_cp02

0xa5e5,	// (0x00019e11) listscroll_popup_wml_pane

0xa5ed,	// (0x00019e19) list_wml_pane

0xa5f7,	// (0x00019e23) scroll_pane_cp013

0xa602,	// (0x00019e2e) list_single_graphic_popup_wml_pane_ParamLimits

0xa602,	// (0x00019e2e) list_single_graphic_popup_wml_pane

0x9d69,	// (0x00019595) list_single_graphic_popup_wml_pane_g1

0xa616,	// (0x00019e42) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0001eb8e) list_single_graphic_popup_wml_pane_g

0xa61e,	// (0x00019e4a) list_single_graphic_popup_wml_pane_t1

0xa634,	// (0x00019e60) aid_call_pane

0x9c01,	// (0x0001942d) popup_clock_analogue_window_g1

0x9c01,	// (0x0001942d) popup_clock_analogue_window_g2

0xa63c,	// (0x00019e68) popup_clock_analogue_window_g3

0xa63c,	// (0x00019e68) popup_clock_analogue_window_g4

0x9d69,	// (0x00019595) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0001eb93) popup_clock_analogue_window_g

0xa644,	// (0x00019e70) popup_clock_analogue_window_t1

0xa652,	// (0x00019e7e) clock_digital_number_pane_ParamLimits

0xa652,	// (0x00019e7e) clock_digital_number_pane

0xa65e,	// (0x00019e8a) clock_digital_number_pane_cp02_ParamLimits

0xa65e,	// (0x00019e8a) clock_digital_number_pane_cp02

0xa66a,	// (0x00019e96) clock_digital_number_pane_cp03_ParamLimits

0xa66a,	// (0x00019e96) clock_digital_number_pane_cp03

0xa676,	// (0x00019ea2) clock_digital_number_pane_cp04_ParamLimits

0xa676,	// (0x00019ea2) clock_digital_number_pane_cp04

0xa682,	// (0x00019eae) clock_digital_separator_pane_ParamLimits

0xa682,	// (0x00019eae) clock_digital_separator_pane

0xa68e,	// (0x00019eba) popup_clock_digital_window_t1

0x9d69,	// (0x00019595) clock_digital_number_pane_g1

0x9d69,	// (0x00019595) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0001eb01) clock_digital_number_pane_g

0x9d69,	// (0x00019595) clock_digital_separator_pane_g1

0x9d69,	// (0x00019595) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0001eb01) clock_digital_separator_pane_g

0x99ae,	// (0x000191da) bg_popup_window_pane_cp04

0xa6ab,	// (0x00019ed7) heading_pane_cp03

0xa6b3,	// (0x00019edf) listscroll_popup_gms_pane

0xa6bb,	// (0x00019ee7) grid_large_graphic_popup_pane

0xa6c5,	// (0x00019ef1) listscroll_popup_gms_pane_g1

0xa6cd,	// (0x00019ef9) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0001eb9e) listscroll_popup_gms_pane_g

0xa0d3,	// (0x000198ff) scroll_pane_cp014

0x231d,	// (0x00011b49) cell_large_graphic_popup_pane_ParamLimits

0x231d,	// (0x00011b49) cell_large_graphic_popup_pane

0x2335,	// (0x00011b61) cell_large_graphic_popup_pane_g1_ParamLimits

0x2335,	// (0x00011b61) cell_large_graphic_popup_pane_g1

0xa6d5,	// (0x00019f01) cell_large_graphic_popup_pane_g2_ParamLimits

0xa6d5,	// (0x00019f01) cell_large_graphic_popup_pane_g2

0xa6e1,	// (0x00019f0d) cell_large_graphic_popup_pane_g3_ParamLimits

0xa6e1,	// (0x00019f0d) cell_large_graphic_popup_pane_g3

0xa6ee,	// (0x00019f1a) cell_large_graphic_popup_pane_g4_ParamLimits

0xa6ee,	// (0x00019f1a) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0001eba3) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0001eba3) cell_large_graphic_popup_pane_g

0xa6fe,	// (0x00019f2a) grid_highlight_pane_cp010

0x9d69,	// (0x00019595) bg_popup_call_pane_g1

0xa708,	// (0x00019f34) list_single_graphic_popup_conf_pane_ParamLimits

0xa708,	// (0x00019f34) list_single_graphic_popup_conf_pane

0xa71a,	// (0x00019f46) list_highlight_pane_cp01

0xa723,	// (0x00019f4f) list_single_graphic_popup_conf_pane_g1

0xa72b,	// (0x00019f57) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0001ebac) list_single_graphic_popup_conf_pane_g

0xa733,	// (0x00019f5f) list_single_graphic_popup_conf_pane_t1

0xa741,	// (0x00019f6d) linegrid_cams_pane_g1

0x2341,	// (0x00011b6d) linegrid_cams_pane_g2

0x9f02,	// (0x0001972e) linegrid_cams_pane_g3

0xa74a,	// (0x00019f76) linegrid_cams_pane_g4

0x234a,	// (0x00011b76) linegrid_cams_pane_g5

0x2353,	// (0x00011b7f) linegrid_cams_pane_g6

0x9f0b,	// (0x00019737) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0001ebb1) linegrid_cams_pane_g

0xa753,	// (0x00019f7f) popup_clock_analogue_window

0xa753,	// (0x00019f7f) popup_clock_digital_window

0x99ae,	// (0x000191da) popup_phob_thumbnail_window

0x9d69,	// (0x00019595) call_video_uplink_pane_g1

0xa75c,	// (0x00019f88) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0001ebc0) call_video_uplink_pane_g

0xa764,	// (0x00019f90) video_uplink_pane

0xa76c,	// (0x00019f98) mce_image_pane_g1

0x235e,	// (0x00011b8a) mce_image_pane_g2

0x2368,	// (0x00011b94) mce_image_pane_g3

0x2372,	// (0x00011b9e) mce_image_pane_g4

0x237a,	// (0x00011ba6) mce_image_pane_g5

0x0004,

0xf399,	// (0x0001ebc5) mce_image_pane_g

0xa776,	// (0x00019fa2) control_top_pane_stacon_cp01_ParamLimits

0xa776,	// (0x00019fa2) control_top_pane_stacon_cp01

0xa78a,	// (0x00019fb6) uni_indicator_pane_stacon_cp01_ParamLimits

0xa78a,	// (0x00019fb6) uni_indicator_pane_stacon_cp01

0xa79b,	// (0x00019fc7) bg_popup_sub_pane_cp03

0x2382,	// (0x00011bae) chi_dic_find_pane

0x238a,	// (0x00011bb6) listscroll_chi_dic_pane

0x2393,	// (0x00011bbf) main_pane_chidic_g1

0x23a6,	// (0x00011bd2) chi_dic_find_pane_t1

0xa7a5,	// (0x00019fd1) find_chidic_pane

0xa7ae,	// (0x00019fda) chi_dic_list_pane_ParamLimits

0xa7ae,	// (0x00019fda) chi_dic_list_pane

0xa7bf,	// (0x00019feb) scroll_pane_cp020

0x23b4,	// (0x00011be0) find_chidic_pane_t1

0x99ae,	// (0x000191da) input_focus_pane_cp06

0xf0b8,	// (0x0001e8e4) list_chi_dic_pane_ParamLimits

0xf0b8,	// (0x0001e8e4) list_chi_dic_pane

0x23c3,	// (0x00011bef) list_chi_dic_pane_t1_ParamLimits

0x23c3,	// (0x00011bef) list_chi_dic_pane_t1

0x99ae,	// (0x000191da) list_highlight_pane_cp020

0xa7c7,	// (0x00019ff3) bg_cale_heading_pane_g1

0x23d6,	// (0x00011c02) bg_cale_heading_pane_g2

0x23de,	// (0x00011c0a) bg_cale_heading_pane_g3

0x23e6,	// (0x00011c12) bg_cale_heading_pane_g4

0x23f0,	// (0x00011c1c) bg_cale_heading_pane_g5

0x23fa,	// (0x00011c26) bg_cale_heading_pane_g6

0x2402,	// (0x00011c2e) bg_cale_heading_pane_g7

0x240a,	// (0x00011c36) bg_cale_heading_pane_g8

0x2414,	// (0x00011c40) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0001ebd0) bg_cale_heading_pane_g

0xa7c7,	// (0x00019ff3) bg_cale_side_pane_g1

0x241e,	// (0x00011c4a) bg_cale_side_pane_g2

0x2428,	// (0x00011c54) bg_cale_side_pane_g3

0x2432,	// (0x00011c5e) bg_cale_side_pane_g4

0x243c,	// (0x00011c68) bg_cale_side_pane_g5

0x2446,	// (0x00011c72) bg_cale_side_pane_g6

0x2450,	// (0x00011c7c) bg_cale_side_pane_g7

0x245a,	// (0x00011c86) bg_cale_side_pane_g8

0x2462,	// (0x00011c8e) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0001ebe3) bg_cale_side_pane_g

0x246a,	// (0x00011c96) popup_call_status_window_ParamLimits

0x246a,	// (0x00011c96) popup_call_status_window

0xa7cf,	// (0x00019ffb) stacon_top_pane

0xa7d7,	// (0x0001a003) status_pane_ParamLimits

0xa7d7,	// (0x0001a003) status_pane

0xa7ec,	// (0x0001a018) status_small_pane

0xa7f4,	// (0x0001a020) control_pane

0x99ae,	// (0x000191da) stacon_bottom_pane

0xa7fc,	// (0x0001a028) list_single_mce_smart_pane_t1_ParamLimits

0xa7fc,	// (0x0001a028) list_single_mce_smart_pane_t1

0xa80f,	// (0x0001a03b) list_single_mce_smart_pane_t2_ParamLimits

0xa80f,	// (0x0001a03b) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0001ebf6) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0001ebf6) list_single_mce_smart_pane_t

0x24b7,	// (0x00011ce3) compass_pane

0x24c2,	// (0x00011cee) main_location2_pane_t1

0x24d6,	// (0x00011d02) main_location2_pane_t2

0x24ec,	// (0x00011d18) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0001ebfb) main_location2_pane_t

0xa82e,	// (0x0001a05a) compass_pane_g1_ParamLimits

0xa82e,	// (0x0001a05a) compass_pane_g1

0x2536,	// (0x00011d62) compass_pane_t1

0x2545,	// (0x00011d71) compass_pane_t2

0x0005,

0xf3d8,	// (0x0001ec04) compass_pane_t

0x258c,	// (0x00011db8) text_secondary_cp61

0xa842,	// (0x0001a06e) navi_pane_cams_g5

0xa865,	// (0x0001a091) navi_pane_im_t1

0xa873,	// (0x0001a09f) navi_pane_mp_g1_ParamLimits

0xa873,	// (0x0001a09f) navi_pane_mp_g1

0xa887,	// (0x0001a0b3) navi_pane_mp_g2_ParamLimits

0xa887,	// (0x0001a0b3) navi_pane_mp_g2

0xa893,	// (0x0001a0bf) navi_pane_mp_g3_ParamLimits

0xa893,	// (0x0001a0bf) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0001ec18) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0001ec18) navi_pane_mp_g

0xa89f,	// (0x0001a0cb) navi_pane_mp_t1

0xa8ad,	// (0x0001a0d9) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0001ec1f) navi_pane_mp_t

0xa8e9,	// (0x0001a115) navi_pane_vt_g1

0xa89f,	// (0x0001a0cb) navi_pane_vt_t1

0xa8f1,	// (0x0001a11d) navi_slider_pane

0x9f1c,	// (0x00019748) zooming_pane

0xa8f9,	// (0x0001a125) navi_slider_pane_g1

0xa902,	// (0x0001a12e) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0001ec26) navi_slider_pane_g

0xa92f,	// (0x0001a15b) aid_levels_zoom

0xa937,	// (0x0001a163) zooming_pane_g1

0xa93f,	// (0x0001a16b) zooming_pane_g2

0xa93f,	// (0x0001a16b) zooming_pane_g3

0x0002,

0xf409,	// (0x0001ec35) zooming_pane_g

0xa947,	// (0x0001a173) level_10_zoom

0xa950,	// (0x0001a17c) level_11_zoom

0xa959,	// (0x0001a185) level_1_zoom

0xa962,	// (0x0001a18e) level_2_zoom

0xa96b,	// (0x0001a197) level_3_zoom

0xa974,	// (0x0001a1a0) level_4_zoom

0xa97d,	// (0x0001a1a9) level_5_zoom

0xa986,	// (0x0001a1b2) level_6_zoom

0xa98f,	// (0x0001a1bb) level_7_zoom

0xa998,	// (0x0001a1c4) level_8_zoom

0xa9a1,	// (0x0001a1cd) level_9_zoom

0xa9b2,	// (0x0001a1de) popup_phob_thumbnail_window_g1

0xa9ba,	// (0x0001a1e6) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0001ec3c) popup_phob_thumbnail_window_g

0xbd55,	// (0x0001b581) level_1_location

0xbd5d,	// (0x0001b589) level_2_location

0xbd65,	// (0x0001b591) level_3_location

0xbd6d,	// (0x0001b599) level_4_location

0x9f1c,	// (0x00019748) level_5_location

0x26d5,	// (0x00011f01) mce_icon_pane_g1

0x26df,	// (0x00011f0b) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0001ec41) mce_icon_pane_g

0x26e7,	// (0x00011f13) main_mup_pane_g1_ParamLimits

0x26e7,	// (0x00011f13) main_mup_pane_g1

0x26fd,	// (0x00011f29) main_mup_pane_g2_ParamLimits

0x26fd,	// (0x00011f29) main_mup_pane_g2

0x2715,	// (0x00011f41) main_mup_pane_g3_ParamLimits

0x2715,	// (0x00011f41) main_mup_pane_g3

0x272d,	// (0x00011f59) main_mup_pane_g4_ParamLimits

0x272d,	// (0x00011f59) main_mup_pane_g4

0x2745,	// (0x00011f71) main_mup_pane_g5_ParamLimits

0x2745,	// (0x00011f71) main_mup_pane_g5

0x2761,	// (0x00011f8d) main_mup_pane_g6_ParamLimits

0x2761,	// (0x00011f8d) main_mup_pane_g6

0x277b,	// (0x00011fa7) main_mup_pane_g7_ParamLimits

0x277b,	// (0x00011fa7) main_mup_pane_g7

0x2799,	// (0x00011fc5) main_mup_pane_g8_ParamLimits

0x2799,	// (0x00011fc5) main_mup_pane_g8

0x27b7,	// (0x00011fe3) main_mup_pane_g9_ParamLimits

0x27b7,	// (0x00011fe3) main_mup_pane_g9

0x27d3,	// (0x00011fff) main_mup_pane_g10_ParamLimits

0x27d3,	// (0x00011fff) main_mup_pane_g10

0x27f1,	// (0x0001201d) main_mup_pane_g11_ParamLimits

0x27f1,	// (0x0001201d) main_mup_pane_g11

0x280b,	// (0x00012037) main_mup_pane_g12_ParamLimits

0x280b,	// (0x00012037) main_mup_pane_g12

0x2821,	// (0x0001204d) main_mup_pane_g13_ParamLimits

0x2821,	// (0x0001204d) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0001ec46) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0001ec46) main_mup_pane_g

0x2835,	// (0x00012061) main_mup_pane_t1_ParamLimits

0x2835,	// (0x00012061) main_mup_pane_t1

0x2851,	// (0x0001207d) main_mup_pane_t2_ParamLimits

0x2851,	// (0x0001207d) main_mup_pane_t2

0x2869,	// (0x00012095) main_mup_pane_t3_ParamLimits

0x2869,	// (0x00012095) main_mup_pane_t3

0x2881,	// (0x000120ad) main_mup_pane_t4_ParamLimits

0x2881,	// (0x000120ad) main_mup_pane_t4

0x289f,	// (0x000120cb) main_mup_pane_t5_ParamLimits

0x289f,	// (0x000120cb) main_mup_pane_t5

0x28b4,	// (0x000120e0) main_mup_pane_t6_ParamLimits

0x28b4,	// (0x000120e0) main_mup_pane_t6

0x0005,

0xf435,	// (0x0001ec61) main_mup_pane_t_ParamLimits

0xf435,	// (0x0001ec61) main_mup_pane_t

0x28c6,	// (0x000120f2) mup_progress_pane_ParamLimits

0x28c6,	// (0x000120f2) mup_progress_pane

0x28d2,	// (0x000120fe) mup_visualizer_pane_ParamLimits

0x28d2,	// (0x000120fe) mup_visualizer_pane

0x2906,	// (0x00012132) mup_volume_pane_ParamLimits

0x2906,	// (0x00012132) mup_volume_pane

0xa9c2,	// (0x0001a1ee) mup_visualizer_pane_g1_ParamLimits

0xa9c2,	// (0x0001a1ee) mup_visualizer_pane_g1

0xa9c2,	// (0x0001a1ee) mup_visualizer_pane_g2_ParamLimits

0xa9c2,	// (0x0001a1ee) mup_visualizer_pane_g2

0xa82e,	// (0x0001a05a) mup_visualizer_pane_g3_ParamLimits

0xa82e,	// (0x0001a05a) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0001ec6e) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0001ec6e) mup_visualizer_pane_g

0x9d69,	// (0x00019595) mup_volume_pane_g1

0xa9d8,	// (0x0001a204) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0001ec75) mup_volume_pane_g

0x9d69,	// (0x00019595) mup_progress_pane_g1

0xa9e1,	// (0x0001a20d) mup_progress_pane_g2

0xa9ea,	// (0x0001a216) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0001ec7a) mup_progress_pane_g

0x99ae,	// (0x000191da) bg_popup_window_pane_cp05

0xa9f3,	// (0x0001a21f) heading_pane_cp02_ParamLimits

0xa9f3,	// (0x0001a21f) heading_pane_cp02

0xaa0f,	// (0x0001a23b) list_popup_blid_pane

0xaa17,	// (0x0001a243) list_blid_sat_info_pane_ParamLimits

0xaa17,	// (0x0001a243) list_blid_sat_info_pane

0xaa2a,	// (0x0001a256) list_blid_sat_info_pane_g1

0xaa32,	// (0x0001a25e) list_blid_sat_info_pane_t1

0x2a30,	// (0x0001225c) mup_equalizer_pane_ParamLimits

0x2a30,	// (0x0001225c) mup_equalizer_pane

0x2a51,	// (0x0001227d) mup_equalizer_pane_cp1_ParamLimits

0x2a51,	// (0x0001227d) mup_equalizer_pane_cp1

0x2a72,	// (0x0001229e) mup_equalizer_pane_cp2_ParamLimits

0x2a72,	// (0x0001229e) mup_equalizer_pane_cp2

0x2a97,	// (0x000122c3) mup_equalizer_pane_cp3_ParamLimits

0x2a97,	// (0x000122c3) mup_equalizer_pane_cp3

0x2ac0,	// (0x000122ec) mup_equalizer_pane_cp4_ParamLimits

0x2ac0,	// (0x000122ec) mup_equalizer_pane_cp4

0x2ae9,	// (0x00012315) mup_equalizer_pane_cp5

0x2b01,	// (0x0001232d) mup_equalizer_pane_cp6

0x2b19,	// (0x00012345) mup_equalizer_pane_cp7

0xbc6f,	// (0x0001b49b) bg_popup_call_poc_act_pane_g9

0xbc77,	// (0x0001b4a3) bg_popup_call_poc_act_pane_g10

0xbc7f,	// (0x0001b4ab) bg_popup_call_poc_act_pane_g11

0x000a,

0x9c09,	// (0x00019435) mup_scale_pane

0x9d69,	// (0x00019595) mup_scale_pane_g1

0xaa40,	// (0x0001a26c) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0001ec96) mup_scale_pane_g

0xaa64,	// (0x0001a290) msg_data_pane

0xaa6c,	// (0x0001a298) scroll_pane_cp017

0x2b43,	// (0x0001236f) bg_list_pane_cp04_ParamLimits

0x2b43,	// (0x0001236f) bg_list_pane_cp04

0xaa7c,	// (0x0001a2a8) msg_data_pane_g1

0x2b63,	// (0x0001238f) msg_data_pane_g2

0x2b6d,	// (0x00012399) msg_data_pane_g3

0x2b77,	// (0x000123a3) msg_data_pane_g4

0x2b7f,	// (0x000123ab) msg_data_pane_g5

0x2b87,	// (0x000123b3) msg_data_pane_g6

0x2b8f,	// (0x000123bb) msg_data_pane_g7

0x0006,

0xf479,	// (0x0001eca5) msg_data_pane_g

0x2b97,	// (0x000123c3) msg_text_pane_ParamLimits

0x2b97,	// (0x000123c3) msg_text_pane

0x2bbf,	// (0x000123eb) qrid_highlight_pane_cp011_ParamLimits

0x2bbf,	// (0x000123eb) qrid_highlight_pane_cp011

0x99ae,	// (0x000191da) msg_body_pane

0x99ae,	// (0x000191da) msg_header_pane

0xaa8d,	// (0x0001a2b9) input_focus_pane_cp07

0xaaa2,	// (0x0001a2ce) msg_header_pane_t1_ParamLimits

0xaaa2,	// (0x0001a2ce) msg_header_pane_t1

0xaab4,	// (0x0001a2e0) msg_header_pane_t2_ParamLimits

0xaab4,	// (0x0001a2e0) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0001ecb9) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0001ecb9) msg_header_pane_t

0xaac6,	// (0x0001a2f2) msg_body_pane_g1

0x2be3,	// (0x0001240f) msg_body_pane_t1_ParamLimits

0x2be3,	// (0x0001240f) msg_body_pane_t1

0xaace,	// (0x0001a2fa) msg_body_pane_t2_ParamLimits

0xaace,	// (0x0001a2fa) msg_body_pane_t2

0xaae0,	// (0x0001a30c) msg_body_pane_t3_ParamLimits

0xaae0,	// (0x0001a30c) msg_body_pane_t3

0x0002,

0xf492,	// (0x0001ecbe) msg_body_pane_t_ParamLimits

0xf492,	// (0x0001ecbe) msg_body_pane_t

0x2c4e,	// (0x0001247a) main_viewer_pane_g1_ParamLimits

0x2c4e,	// (0x0001247a) main_viewer_pane_g1

0x2c5c,	// (0x00012488) main_viewer_pane_g2_ParamLimits

0x2c5c,	// (0x00012488) main_viewer_pane_g2

0x2c6a,	// (0x00012496) main_viewer_pane_g3_ParamLimits

0x2c6a,	// (0x00012496) main_viewer_pane_g3

0x2c79,	// (0x000124a5) main_viewer_pane_g4_ParamLimits

0x2c79,	// (0x000124a5) main_viewer_pane_g4

0xab0a,	// (0x0001a336) main_viewer_pane_g5_ParamLimits

0xab0a,	// (0x0001a336) main_viewer_pane_g5

0xab0a,	// (0x0001a336) main_viewer_pane_g7_ParamLimits

0xab0a,	// (0x0001a336) main_viewer_pane_g7

0xab1c,	// (0x0001a348) main_viewer_pane_g8_ParamLimits

0xab1c,	// (0x0001a348) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0001ecce) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0001ecce) main_viewer_pane_g

0xab34,	// (0x0001a360) viewer_content_pane_ParamLimits

0xab34,	// (0x0001a360) viewer_content_pane

0x2cb7,	// (0x000124e3) main_postcard_pane_g1_ParamLimits

0x2cb7,	// (0x000124e3) main_postcard_pane_g1

0x2ccd,	// (0x000124f9) main_postcard_pane_g2_ParamLimits

0x2ccd,	// (0x000124f9) main_postcard_pane_g2

0x2ce3,	// (0x0001250f) main_postcard_pane_g3_ParamLimits

0x2ce3,	// (0x0001250f) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0001ecdf) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0001ecdf) main_postcard_pane_g

0x2cfa,	// (0x00012526) main_postcard_pane_g4

0xbe98,	// (0x0001b6c4) smil_status_volume_pane_g2

0x2d3d,	// (0x00012569) postcard_pane_ParamLimits

0x2d3d,	// (0x00012569) postcard_pane

0xab42,	// (0x0001a36e) postcard_pane_g1_ParamLimits

0xab42,	// (0x0001a36e) postcard_pane_g1

0x2d8d,	// (0x000125b9) postcard_pane_g2_ParamLimits

0x2d8d,	// (0x000125b9) postcard_pane_g2

0x2d99,	// (0x000125c5) postcard_pane_g3_ParamLimits

0x2d99,	// (0x000125c5) postcard_pane_g3

0xab50,	// (0x0001a37c) postcard_pane_g4_ParamLimits

0xab50,	// (0x0001a37c) postcard_pane_g4

0x2da5,	// (0x000125d1) postcard_pane_g5_ParamLimits

0x2da5,	// (0x000125d1) postcard_pane_g5

0x2dba,	// (0x000125e6) postcard_pane_g6_ParamLimits

0x2dba,	// (0x000125e6) postcard_pane_g6

0xab42,	// (0x0001a36e) postcard_pane_g7_ParamLimits

0xab42,	// (0x0001a36e) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0001ecec) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0001ecec) postcard_pane_g

0x2dd2,	// (0x000125fe) main_mp2_pane_g1_ParamLimits

0x2dd2,	// (0x000125fe) main_mp2_pane_g1

0x2de0,	// (0x0001260c) main_mp2_pane_g2_ParamLimits

0x2de0,	// (0x0001260c) main_mp2_pane_g2

0x2dec,	// (0x00012618) main_mp2_pane_g3_ParamLimits

0x2dec,	// (0x00012618) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0001ecfb) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0001ecfb) main_mp2_pane_g

0x2df8,	// (0x00012624) main_mp2_pane_t1_ParamLimits

0x2df8,	// (0x00012624) main_mp2_pane_t1

0x2e0f,	// (0x0001263b) main_mp2_pane_t2_ParamLimits

0x2e0f,	// (0x0001263b) main_mp2_pane_t2

0x2e21,	// (0x0001264d) main_mp2_pane_t3_ParamLimits

0x2e21,	// (0x0001264d) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0001ed02) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0001ed02) main_mp2_pane_t

0xab5e,	// (0x0001a38a) pec_content_pane_ParamLimits

0xab5e,	// (0x0001a38a) pec_content_pane

0xa0d3,	// (0x000198ff) scroll_pane_cp015

0xab70,	// (0x0001a39c) pec_attribute_pane_ParamLimits

0xab70,	// (0x0001a39c) pec_attribute_pane

0x2e33,	// (0x0001265f) pec_content_pane_g1_ParamLimits

0x2e33,	// (0x0001265f) pec_content_pane_g1

0xab80,	// (0x0001a3ac) pec_content_pane_t1_ParamLimits

0xab80,	// (0x0001a3ac) pec_content_pane_t1

0xab92,	// (0x0001a3be) pec_content_pane_t2_ParamLimits

0xab92,	// (0x0001a3be) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0001ed09) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0001ed09) pec_content_pane_t

0x2e3f,	// (0x0001266b) list_single_graphic_pane_cp01_ParamLimits

0x2e3f,	// (0x0001266b) list_single_graphic_pane_cp01

0x9c09,	// (0x00019435) bg_popup_sub_pane_cp04

0xaba4,	// (0x0001a3d0) popup_mup_playback_window_g1

0xabb0,	// (0x0001a3dc) popup_mup_playback_window_t1

0xabc5,	// (0x0001a3f1) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0001ed0e) popup_mup_playback_window_t

0xabfc,	// (0x0001a428) main_image_pane_g1_ParamLimits

0xabfc,	// (0x0001a428) main_image_pane_g1

0xac3f,	// (0x0001a46b) scroll_pane_cp018_ParamLimits

0xac3f,	// (0x0001a46b) scroll_pane_cp018

0xac57,	// (0x0001a483) scroll_pane_cp016_ParamLimits

0xac57,	// (0x0001a483) scroll_pane_cp016

0x2f0e,	// (0x0001273a) smil2_image_pane_ParamLimits

0x2f0e,	// (0x0001273a) smil2_image_pane

0x2f44,	// (0x00012770) smil2_root_pane_ParamLimits

0x2f44,	// (0x00012770) smil2_root_pane

0x2f7c,	// (0x000127a8) smil2_text_pane_ParamLimits

0x2f7c,	// (0x000127a8) smil2_text_pane

0x99ae,	// (0x000191da) bg_list_pane_cp06

0xac93,	// (0x0001a4bf) grid_radio_pane

0x99ae,	// (0x000191da) bg_popup_window_pane_cp06

0xac9d,	// (0x0001a4c9) main_fmradio_pane_t1

0xa6ab,	// (0x00019ed7) heading_pane_cp04

0xacab,	// (0x0001a4d7) main_fmradio_pane_t2

0xbc87,	// (0x0001b4b3) popup_cale_lunar_info_window_g1

0xacb9,	// (0x0001a4e5) main_fmradio_pane_t3

0xbc8f,	// (0x0001b4bb) popup_cale_lunar_info_window_g2

0xacc9,	// (0x0001a4f5) main_fmradio_pane_t4

0x0001,

0xacd7,	// (0x0001a503) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0001ede9) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0001ed23) main_fmradio_pane_t

0xace5,	// (0x0001a511) wait_bar_pane_cp03

0xaced,	// (0x0001a519) cell_fmradio_pane_ParamLimits

0xaced,	// (0x0001a519) cell_fmradio_pane

0xab42,	// (0x0001a36e) cell_fmradio_pane_g1_ParamLimits

0xab42,	// (0x0001a36e) cell_fmradio_pane_g1

0x99ae,	// (0x000191da) grid_highlight_pane_cp011

0xad02,	// (0x0001a52e) poc_content_pane_ParamLimits

0xad02,	// (0x0001a52e) poc_content_pane

0xad14,	// (0x0001a540) scroll_pane_cp019

0x300c,	// (0x00012838) popup_call_poc_act_window_ParamLimits

0x300c,	// (0x00012838) popup_call_poc_act_window

0x3030,	// (0x0001285c) popup_call_poc_inact_window_ParamLimits

0x3030,	// (0x0001285c) popup_call_poc_inact_window

0xf594,	// (0x0001edc0) bg_popup_call_poc_act_pane_g

0xbbff,	// (0x0001b42b) bg_popup_call_poc_inact_pane_g1

0xbc07,	// (0x0001b433) bg_popup_call_poc_inact_pane_g2

0xad1c,	// (0x0001a548) popup_call_poc_act_window_g2

0xbc0f,	// (0x0001b43b) bg_popup_call_poc_inact_pane_g3

0xbc17,	// (0x0001b443) bg_popup_call_poc_inact_pane_g4

0xbc1f,	// (0x0001b44b) bg_popup_call_poc_inact_pane_g5

0xad24,	// (0x0001a550) popup_call_poc_act_window_t1_ParamLimits

0xad24,	// (0x0001a550) popup_call_poc_act_window_t1

0xad4c,	// (0x0001a578) popup_call_poc_act_window_t2_ParamLimits

0xad4c,	// (0x0001a578) popup_call_poc_act_window_t2

0xad74,	// (0x0001a5a0) popup_call_poc_act_window_t3_ParamLimits

0xad74,	// (0x0001a5a0) popup_call_poc_act_window_t3

0xad9c,	// (0x0001a5c8) popup_call_poc_act_window_t4_ParamLimits

0xad9c,	// (0x0001a5c8) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0001ed2e) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0001ed2e) popup_call_poc_act_window_t

0xbc27,	// (0x0001b453) bg_popup_call_poc_inact_pane_g6

0xbc2f,	// (0x0001b45b) bg_popup_call_poc_inact_pane_g7

0xbc37,	// (0x0001b463) bg_popup_call_poc_inact_pane_g8

0xadae,	// (0x0001a5da) popup_call_poc_inact_window_g2

0xbc3f,	// (0x0001b46b) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0001edad) bg_popup_call_poc_inact_pane_g

0xadb6,	// (0x0001a5e2) popup_call_poc_inact_window_t1_ParamLimits

0xadb6,	// (0x0001a5e2) popup_call_poc_inact_window_t1

0xadcb,	// (0x0001a5f7) popup_call_poc_inact_window_t2_ParamLimits

0xadcb,	// (0x0001a5f7) popup_call_poc_inact_window_t2

0xade0,	// (0x0001a60c) popup_call_poc_inact_window_t3_ParamLimits

0xade0,	// (0x0001a60c) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0001ed37) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0001ed37) popup_call_poc_inact_window_t

0xbe0b,	// (0x0001b637) context_pane_ParamLimits

0x38d8,	// (0x00013104) signal_pane_ParamLimits

0x9f1c,	// (0x00019748) main_call2_pane

0xbdf9,	// (0x0001b625) popup_phob_thumbnail2_window_ParamLimits

0xbdf9,	// (0x0001b625) popup_phob_thumbnail2_window

0xaaf2,	// (0x0001a31e) aid_hotspot_pointer_arrow_pane

0xaafa,	// (0x0001a326) aid_hotspot_pointer_hand_pane

0x3398,	// (0x00012bc4) phob_pre_status_pane_g5

0x0bdc,	// (0x00010408) cams_zoom_pane_ParamLimits

0x0beb,	// (0x00010417) image_vga_pane_ParamLimits

0x0c05,	// (0x00010431) main_camera_pane_g1_ParamLimits

0x0c17,	// (0x00010443) main_camera_pane_g2_ParamLimits

0x0c27,	// (0x00010453) main_camera_pane_g3_ParamLimits

0x0c3b,	// (0x00010467) main_camera_pane_g4_ParamLimits

0x0c4f,	// (0x0001047b) main_camera_pane_g5_ParamLimits

0x0c63,	// (0x0001048f) main_camera_pane_g6_ParamLimits

0x0c77,	// (0x000104a3) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0001ea36) main_camera_pane_g_ParamLimits

0x0c8b,	// (0x000104b7) main_camera_pane_t1_ParamLimits

0x0ca1,	// (0x000104cd) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0001ea47) main_camera_pane_t_ParamLimits

0x9c09,	// (0x00019435) bg_popup_preview_window_pane_cp01_ParamLimits

0x9c09,	// (0x00019435) bg_popup_preview_window_pane_cp01

0xadf5,	// (0x0001a621) popup_phob_thumbnail2_window_g1_ParamLimits

0xadf5,	// (0x0001a621) popup_phob_thumbnail2_window_g1

0x99ae,	// (0x000191da) call2_cli_visual_pane

0x3064,	// (0x00012890) popup_call2_audio_conf_window_ParamLimits

0x3064,	// (0x00012890) popup_call2_audio_conf_window

0x308c,	// (0x000128b8) popup_call2_audio_first_window_ParamLimits

0x308c,	// (0x000128b8) popup_call2_audio_first_window

0x3122,	// (0x0001294e) popup_call2_audio_in_window_ParamLimits

0x3122,	// (0x0001294e) popup_call2_audio_in_window

0x316e,	// (0x0001299a) popup_call2_audio_out_window_ParamLimits

0x316e,	// (0x0001299a) popup_call2_audio_out_window

0x31e0,	// (0x00012a0c) popup_call2_audio_second_window_ParamLimits

0x31e0,	// (0x00012a0c) popup_call2_audio_second_window

0x3246,	// (0x00012a72) popup_call2_audio_wait_window_ParamLimits

0x3246,	// (0x00012a72) popup_call2_audio_wait_window

0x99ae,	// (0x000191da) bg_popup_call2_act_pane_cp03

0x9beb,	// (0x00019417) list_conf_pane_cp

0xae01,	// (0x0001a62d) popup_call2_audio_conf_window_t1

0xae0f,	// (0x0001a63b) list_single_graphic_popup_conf2_pane_ParamLimits

0xae0f,	// (0x0001a63b) list_single_graphic_popup_conf2_pane

0xa71a,	// (0x00019f46) list_highlight_pane_cp04

0xae22,	// (0x0001a64e) list_single_graphic_popup_conf2_pane_g1

0xa72b,	// (0x00019f57) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0001ed3e) list_single_graphic_popup_conf2_pane_g

0xae2c,	// (0x0001a658) list_single_graphic_popup_conf2_pane_t1

0xae3a,	// (0x0001a666) bg_popup_call2_act_pane_cp01_ParamLimits

0xae3a,	// (0x0001a666) bg_popup_call2_act_pane_cp01

0xaec4,	// (0x0001a6f0) call_type_pane_cp05_ParamLimits

0xaec4,	// (0x0001a6f0) call_type_pane_cp05

0xaf18,	// (0x0001a744) popup_call2_audio_second_window_g1_ParamLimits

0xaf18,	// (0x0001a744) popup_call2_audio_second_window_g1

0xaf6c,	// (0x0001a798) popup_call2_audio_second_window_g2_ParamLimits

0xaf6c,	// (0x0001a798) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0001ed43) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0001ed43) popup_call2_audio_second_window_g

0xafd1,	// (0x0001a7fd) popup_call2_audio_second_window_t1_ParamLimits

0xafd1,	// (0x0001a7fd) popup_call2_audio_second_window_t1

0xb08c,	// (0x0001a8b8) popup_call2_audio_second_window_t2_ParamLimits

0xb08c,	// (0x0001a8b8) popup_call2_audio_second_window_t2

0xb0df,	// (0x0001a90b) popup_call2_audio_second_window_t3_ParamLimits

0xb0df,	// (0x0001a90b) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0001ed4a) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0001ed4a) popup_call2_audio_second_window_t

0x99ae,	// (0x000191da) bg_popup_call2_in_pane_cp02

0x99b8,	// (0x000191e4) call_type_pane_cp04

0x99c0,	// (0x000191ec) popup_call2_audio_wait_window_g1

0x99c8,	// (0x000191f4) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0001e925) popup_call2_audio_wait_window_g

0x99d0,	// (0x000191fc) popup_call2_audio_wait_window_t3

0xb1d2,	// (0x0001a9fe) bg_popup_call2_act_pane_ParamLimits

0xb1d2,	// (0x0001a9fe) bg_popup_call2_act_pane

0xb292,	// (0x0001aabe) call_type_pane_cp03_ParamLimits

0xb292,	// (0x0001aabe) call_type_pane_cp03

0xb2f6,	// (0x0001ab22) popup_call2_audio_first_window_g1_ParamLimits

0xb2f6,	// (0x0001ab22) popup_call2_audio_first_window_g1

0xb366,	// (0x0001ab92) popup_call2_audio_first_window_g2_ParamLimits

0xb366,	// (0x0001ab92) popup_call2_audio_first_window_g2

0xa9c2,	// (0x0001a1ee) popup_call2_audio_first_window_g3_ParamLimits

0xa9c2,	// (0x0001a1ee) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0001ed53) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0001ed53) popup_call2_audio_first_window_g

0xb444,	// (0x0001ac70) popup_call2_audio_first_window_t1_ParamLimits

0xb444,	// (0x0001ac70) popup_call2_audio_first_window_t1

0xb547,	// (0x0001ad73) popup_call2_audio_first_window_t4_ParamLimits

0xb547,	// (0x0001ad73) popup_call2_audio_first_window_t4

0xb62a,	// (0x0001ae56) popup_call2_audio_first_window_t5_ParamLimits

0xb62a,	// (0x0001ae56) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0001ed5e) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0001ed5e) popup_call2_audio_first_window_t

0x9c01,	// (0x0001942d) bg_popup_call2_act_pane_g1

0xbc99,	// (0x0001b4c5) popup_cale_lunar_info_window_t1

0xbca7,	// (0x0001b4d3) popup_cale_lunar_info_window_t2

0xbcb5,	// (0x0001b4e1) popup_cale_lunar_info_window_t3

0x99ae,	// (0x000191da) bg_popup_call2_bubble_pane

0xb72b,	// (0x0001af57) bg_popup_call2_in_pane_cp01_ParamLimits

0xb72b,	// (0x0001af57) bg_popup_call2_in_pane_cp01

0x968a,	// (0x00018eb6) call_type_pane_cp02

0xb773,	// (0x0001af9f) popup_call2_audio_out_window_g1_ParamLimits

0xb773,	// (0x0001af9f) popup_call2_audio_out_window_g1

0xb79f,	// (0x0001afcb) popup_call2_audio_out_window_g2_ParamLimits

0xb79f,	// (0x0001afcb) popup_call2_audio_out_window_g2

0xb7c7,	// (0x0001aff3) popup_call2_audio_out_window_g3_ParamLimits

0xb7c7,	// (0x0001aff3) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0001ed67) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0001ed67) popup_call2_audio_out_window_g

0xb802,	// (0x0001b02e) popup_call2_audio_out_window_t1_ParamLimits

0xb802,	// (0x0001b02e) popup_call2_audio_out_window_t1

0xb861,	// (0x0001b08d) popup_call2_audio_out_window_t2_ParamLimits

0xb861,	// (0x0001b08d) popup_call2_audio_out_window_t2

0xb8b5,	// (0x0001b0e1) popup_call2_audio_out_window_t3_ParamLimits

0xb8b5,	// (0x0001b0e1) popup_call2_audio_out_window_t3

0xb8cb,	// (0x0001b0f7) popup_call2_audio_out_window_t4_ParamLimits

0xb8cb,	// (0x0001b0f7) popup_call2_audio_out_window_t4

0xb8e1,	// (0x0001b10d) popup_call2_audio_out_window_t5_ParamLimits

0xb8e1,	// (0x0001b10d) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0001ed70) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0001ed70) popup_call2_audio_out_window_t

0xb945,	// (0x0001b171) bg_popup_call2_in_pane_ParamLimits

0xb945,	// (0x0001b171) bg_popup_call2_in_pane

0xb9a1,	// (0x0001b1cd) popup_call2_audio_in_window_g1_ParamLimits

0xb9a1,	// (0x0001b1cd) popup_call2_audio_in_window_g1

0xb9d9,	// (0x0001b205) popup_call2_audio_in_window_g2_ParamLimits

0xb9d9,	// (0x0001b205) popup_call2_audio_in_window_g2

0xba11,	// (0x0001b23d) popup_call2_audio_in_window_g3_ParamLimits

0xba11,	// (0x0001b23d) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0001ed7d) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0001ed7d) popup_call2_audio_in_window_g

0xba69,	// (0x0001b295) popup_call2_audio_in_window_t1_ParamLimits

0xba69,	// (0x0001b295) popup_call2_audio_in_window_t1

0xbae9,	// (0x0001b315) popup_call2_audio_in_window_t2_ParamLimits

0xbae9,	// (0x0001b315) popup_call2_audio_in_window_t2

0xbb69,	// (0x0001b395) popup_call2_audio_in_window_t3_ParamLimits

0xbb69,	// (0x0001b395) popup_call2_audio_in_window_t3

0xbb83,	// (0x0001b3af) popup_call2_audio_in_window_t4_ParamLimits

0xbb83,	// (0x0001b3af) popup_call2_audio_in_window_t4

0xbb95,	// (0x0001b3c1) popup_call2_audio_in_window_t5_ParamLimits

0xbb95,	// (0x0001b3c1) popup_call2_audio_in_window_t5

0xbbaa,	// (0x0001b3d6) popup_call2_audio_in_window_t6_ParamLimits

0xbbaa,	// (0x0001b3d6) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0001ed86) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0001ed86) popup_call2_audio_in_window_t

0x9c01,	// (0x0001942d) bg_popup_call2_in_pane_g1

0xbcc3,	// (0x0001b4ef) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0001edee) popup_cale_lunar_info_window_t

0x9c09,	// (0x00019435) bg_popup_call2_rect_pane_ParamLimits

0x9c09,	// (0x00019435) bg_popup_call2_rect_pane

0x99ae,	// (0x000191da) call2_cli_visual_graphic_pane

0x99ae,	// (0x000191da) call2_cli_visual_text_pane

0xbeab,	// (0x0001b6d7) smil_status_volume_pane_g3

0x0002,

0x9d69,	// (0x00019595) call2_cli_visual_graphic_pane_g1

0x9d69,	// (0x00019595) call2_cli_visual_graphic_pane_g2

0x9d69,	// (0x00019595) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0001ed93) call2_cli_visual_graphic_pane_g

0xbbbf,	// (0x0001b3eb) bg_popup_call2_rect_pane_g1

0x9e11,	// (0x0001963d) bg_popup_call2_rect_pane_g2

0xbbc7,	// (0x0001b3f3) bg_popup_call2_rect_pane_g3

0xbbcf,	// (0x0001b3fb) bg_popup_call2_rect_pane_g4

0xbbd7,	// (0x0001b403) bg_popup_call2_rect_pane_g5

0xbbdf,	// (0x0001b40b) bg_popup_call2_rect_pane_g6

0xbbe7,	// (0x0001b413) bg_popup_call2_rect_pane_g7

0xbbef,	// (0x0001b41b) bg_popup_call2_rect_pane_g8

0xbbf7,	// (0x0001b423) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0001ed9a) bg_popup_call2_rect_pane_g

0xbbff,	// (0x0001b42b) bg_popup_call2_bubble_pane_g1

0xbc07,	// (0x0001b433) bg_popup_call2_bubble_pane_g2

0xbc0f,	// (0x0001b43b) bg_popup_call2_bubble_pane_g3

0xbc17,	// (0x0001b443) bg_popup_call2_bubble_pane_g4

0xbc1f,	// (0x0001b44b) bg_popup_call2_bubble_pane_g5

0xbc27,	// (0x0001b453) bg_popup_call2_bubble_pane_g6

0xbc2f,	// (0x0001b45b) bg_popup_call2_bubble_pane_g7

0xbc37,	// (0x0001b463) bg_popup_call2_bubble_pane_g8

0xbc3f,	// (0x0001b46b) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0001edad) bg_popup_call2_bubble_pane_g

0x0356,	// (0x0000fb82) aid_cale_week_size_cell_pane

0x0cbb,	// (0x000104e7) aid_cams_cif_uncrop_pane_ParamLimits

0x0cbb,	// (0x000104e7) aid_cams_cif_uncrop_pane

0x0e74,	// (0x000106a0) aid_cams_size_cell_ParamLimits

0x0e74,	// (0x000106a0) aid_cams_size_cell

0x0e88,	// (0x000106b4) grid_cams_pane_ParamLimits

0x0ea2,	// (0x000106ce) linegrid_cams_pane_ParamLimits

0x1082,	// (0x000108ae) call_video_pane_t1

0x109c,	// (0x000108c8) call_video_pane_t2

0x0001,

0xf26e,	// (0x0001ea9a) call_video_pane_t

0x14d0,	// (0x00010cfc) aid_cale_month_size_cell_pane_ParamLimits

0x14d0,	// (0x00010cfc) aid_cale_month_size_cell_pane

0xf60b,	// (0x0001ee37) smil_status_volume_pane_g

0xbeb8,	// (0x0001b6e4) volume_smil_pane_ParamLimits

0x953e,	// (0x00018d6a) aid_popup2_width_pane

0x02a6,	// (0x0000fad2) cell_qdial_pane_g4_ParamLimits

0x02a6,	// (0x0000fad2) cell_qdial_pane_g4

0x2516,	// (0x00011d42) aid_blid_cardinal_pane_ParamLimits

0x2522,	// (0x00011d4e) aid_blid_destination_pane_ParamLimits

0x2522,	// (0x00011d4e) aid_blid_destination_pane

0x9c09,	// (0x00019435) bg_popup_call_poc_act_pane_ParamLimits

0x9c09,	// (0x00019435) bg_popup_call_poc_act_pane

0x9c09,	// (0x00019435) bg_popup_call_poc_inact_pane_ParamLimits

0x9c09,	// (0x00019435) bg_popup_call_poc_inact_pane

0xbc47,	// (0x0001b473) bg_popup_call_poc_act_pane_g1

0xbc4f,	// (0x0001b47b) bg_popup_call_poc_act_pane_g2

0xbc57,	// (0x0001b483) bg_popup_call_poc_act_pane_g3

0xbc17,	// (0x0001b443) bg_popup_call_poc_act_pane_g4

0xbc1f,	// (0x0001b44b) bg_popup_call_poc_act_pane_g5

0xbc5f,	// (0x0001b48b) bg_popup_call_poc_act_pane_g6

0xbc2f,	// (0x0001b45b) bg_popup_call_poc_act_pane_g7

0xbc67,	// (0x0001b493) bg_popup_call_poc_act_pane_g8

0x99ae,	// (0x000191da) main_usb_pane

0xbdd0,	// (0x0001b5fc) popup_cale_lunar_info_window

0x1365,	// (0x00010b91) im_reading_pane_t1_ParamLimits

0xa02b,	// (0x00019857) list_im_pane_ParamLimits

0xa03c,	// (0x00019868) scroll_pane_cp07_ParamLimits

0x99ae,	// (0x000191da) grid_highlight_pane_cp012

0x9c09,	// (0x00019435) mup_scale_pane_ParamLimits

0xab42,	// (0x0001a36e) main_usb_pane_g1_ParamLimits

0xab42,	// (0x0001a36e) main_usb_pane_g1

0x32a4,	// (0x00012ad0) main_usb_pane_g2_ParamLimits

0x32a4,	// (0x00012ad0) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0001edd7) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0001edd7) main_usb_pane_g

0x32ba,	// (0x00012ae6) main_usb_pane_t1_ParamLimits

0x32ba,	// (0x00012ae6) main_usb_pane_t1

0x32cc,	// (0x00012af8) main_usb_pane_t2_ParamLimits

0x32cc,	// (0x00012af8) main_usb_pane_t2

0x32de,	// (0x00012b0a) main_usb_pane_t3_ParamLimits

0x32de,	// (0x00012b0a) main_usb_pane_t3

0x32f0,	// (0x00012b1c) main_usb_pane_t4_ParamLimits

0x32f0,	// (0x00012b1c) main_usb_pane_t4

0x3305,	// (0x00012b31) main_usb_pane_t5_ParamLimits

0x3305,	// (0x00012b31) main_usb_pane_t5

0x331a,	// (0x00012b46) main_usb_pane_t6_ParamLimits

0x331a,	// (0x00012b46) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0001eddc) main_usb_pane_t_ParamLimits

0x24b7,	// (0x00011ce3) aid_text_placing

0x24c2,	// (0x00011cee) main_location2_pane_t1_ParamLimits

0x24d6,	// (0x00011d02) main_location2_pane_t2_ParamLimits

0x24ec,	// (0x00011d18) main_location2_pane_t3_ParamLimits

0x2502,	// (0x00011d2e) main_location2_pane_t4_ParamLimits

0x2502,	// (0x00011d2e) main_location2_pane_t4

0xf3cf,	// (0x0001ebfb) main_location2_pane_t_ParamLimits

0x9c45,	// (0x00019471) find_pinb_pane_g2_ParamLimits

0x9c45,	// (0x00019471) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0001e94b) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0001e94b) find_pinb_pane_g

0x9c51,	// (0x0001947d) find_pinb_pane_t1_ParamLimits

0x9c63,	// (0x0001948f) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0001e950) find_pinb_pane_t_ParamLimits

0x99ae,	// (0x000191da) main_call3_pane

0x1a9f,	// (0x000112cb) cale_month_day_heading_pane_t1_ParamLimits

0x1b25,	// (0x00011351) cale_month_day_heading_pane_t2_ParamLimits

0x1bb6,	// (0x000113e2) cale_month_day_heading_pane_t3_ParamLimits

0x1c47,	// (0x00011473) cale_month_day_heading_pane_t4_ParamLimits

0x1cd8,	// (0x00011504) cale_month_day_heading_pane_t5_ParamLimits

0x1d79,	// (0x000115a5) cale_month_day_heading_pane_t6_ParamLimits

0x1e1e,	// (0x0001164a) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0001ead2) cale_month_day_heading_pane_t_ParamLimits

0x20fa,	// (0x00011926) smil_status_volume_pane

0x2d61,	// (0x0001258d) postcard_address_pane_ParamLimits

0x2d61,	// (0x0001258d) postcard_address_pane

0x2d77,	// (0x000125a3) postcard_message_pane_ParamLimits

0x2d77,	// (0x000125a3) postcard_message_pane

0x3280,	// (0x00012aac) call2_cli_visual_pane_t1_ParamLimits

0x3280,	// (0x00012aac) call2_cli_visual_pane_t1

0x3b0d,	// (0x00013339) postcard_message_pane_t1_ParamLimits

0x3b0d,	// (0x00013339) postcard_message_pane_t1

0x3af6,	// (0x00013322) postcard_address_pane_t1_ParamLimits

0x3af6,	// (0x00013322) postcard_address_pane_t1

0x3ae2,	// (0x0001330e) popup_call3_audio_in_window_ParamLimits

0x3ae2,	// (0x0001330e) popup_call3_audio_in_window

0x3967,	// (0x00013193) bg_popup_call3_in_pane_ParamLimits

0x3967,	// (0x00013193) bg_popup_call3_in_pane

0x39e3,	// (0x0001320f) popup_call3_audio_in_window_g1_ParamLimits

0x39e3,	// (0x0001320f) popup_call3_audio_in_window_g1

0x3a03,	// (0x0001322f) popup_call3_audio_in_window_g2_ParamLimits

0x3a03,	// (0x0001322f) popup_call3_audio_in_window_g2

0x3a23,	// (0x0001324f) popup_call3_audio_in_window_g3_ParamLimits

0x3a23,	// (0x0001324f) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0001ee3e) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0001ee3e) popup_call3_audio_in_window_g

0x3a54,	// (0x00013280) popup_call3_audio_in_window_t1_ParamLimits

0x3a54,	// (0x00013280) popup_call3_audio_in_window_t1

0x3a92,	// (0x000132be) popup_call3_audio_in_window_t2_ParamLimits

0x3a92,	// (0x000132be) popup_call3_audio_in_window_t2

0x3ad0,	// (0x000132fc) popup_call3_audio_in_window_t3_ParamLimits

0x3ad0,	// (0x000132fc) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0001ee47) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0001ee47) popup_call3_audio_in_window_t

0x9f1c,	// (0x00019748) bg_popup_call3_rect_pane

0xbbbf,	// (0x0001b3eb) bg_popup_call3_rect_pane_g1

0x9e11,	// (0x0001963d) bg_popup_call3_rect_pane_g2

0xbbc7,	// (0x0001b3f3) bg_popup_call3_rect_pane_g3

0xbbcf,	// (0x0001b3fb) bg_popup_call3_rect_pane_g4

0xbbd7,	// (0x0001b403) bg_popup_call3_rect_pane_g5

0xbbdf,	// (0x0001b40b) bg_popup_call3_rect_pane_g6

0xbbe7,	// (0x0001b413) bg_popup_call3_rect_pane_g7

0x291c,	// (0x00012148) mup_visualizer_osc_pane

0xa9d0,	// (0x0001a1fc) mup_visualizer_spec_pane

0x3997,	// (0x000131c3) call3_video_qcif_pane_ParamLimits

0x3997,	// (0x000131c3) call3_video_qcif_pane

0x39aa,	// (0x000131d6) call3_video_qcif_uncrop_pane_ParamLimits

0x39aa,	// (0x000131d6) call3_video_qcif_uncrop_pane

0x39ba,	// (0x000131e6) call3_video_subqcif_pane_ParamLimits

0x39ba,	// (0x000131e6) call3_video_subqcif_pane

0x39d0,	// (0x000131fc) call3_video_subqcif_uncrop_pane_ParamLimits

0x39d0,	// (0x000131fc) call3_video_subqcif_uncrop_pane

0x3a43,	// (0x0001326f) popup_call3_audio_in_window_g4_ParamLimits

0x3a43,	// (0x0001326f) popup_call3_audio_in_window_g4

0x3956,	// (0x00013182) mup_spec_half_pane

0x395f,	// (0x0001318b) mup_spec_half_pane_cp

0xbe6b,	// (0x0001b697) mup_osc_middle_pane

0xbe74,	// (0x0001b6a0) mup_visualizer_osc_pane_g1

0x3936,	// (0x00013162) mup_spec_bar_pane_ParamLimits

0x3936,	// (0x00013162) mup_spec_bar_pane

0xbe58,	// (0x0001b684) mup_spec_bar_pane_g1

0xbe62,	// (0x0001b68e) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0001ee32) mup_spec_bar_pane_g

0x0356,	// (0x0000fb82) aid_cale_week_size_cell_pane_ParamLimits

0x0370,	// (0x0000fb9c) bg_cale_heading_pane_ParamLimits

0x0399,	// (0x0000fbc5) bg_cale_pane_cp01_ParamLimits

0x03bb,	// (0x0000fbe7) cale_week_corner_pane_ParamLimits

0x03da,	// (0x0000fc06) cale_week_day_heading_pane_ParamLimits

0x0408,	// (0x0000fc34) cale_week_scroll_pane_g1_ParamLimits

0x042c,	// (0x0000fc58) cale_week_scroll_pane_g2_ParamLimits

0x0444,	// (0x0000fc70) cale_week_scroll_pane_g3_ParamLimits

0x045c,	// (0x0000fc88) cale_week_scroll_pane_g4_ParamLimits

0x0478,	// (0x0000fca4) cale_week_scroll_pane_g5_ParamLimits

0x0498,	// (0x0000fcc4) cale_week_scroll_pane_g6_ParamLimits

0x04b8,	// (0x0000fce4) cale_week_scroll_pane_g7_ParamLimits

0x04dc,	// (0x0000fd08) cale_week_scroll_pane_g8_ParamLimits

0x0500,	// (0x0000fd2c) cale_week_scroll_pane_g9_ParamLimits

0x051d,	// (0x0000fd49) cale_week_scroll_pane_g10_ParamLimits

0x053a,	// (0x0000fd66) cale_week_scroll_pane_g11_ParamLimits

0x0557,	// (0x0000fd83) cale_week_scroll_pane_g12_ParamLimits

0x0574,	// (0x0000fda0) cale_week_scroll_pane_g13_ParamLimits

0x0591,	// (0x0000fdbd) cale_week_scroll_pane_g14_ParamLimits

0x05ba,	// (0x0000fde6) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0001e9dc) cale_week_scroll_pane_g_ParamLimits

0x0607,	// (0x0000fe33) cale_week_time_pane_ParamLimits

0x062b,	// (0x0000fe57) grid_cale_week_pane_ParamLimits

0x9e8d,	// (0x000196b9) listscroll_cale_week_pane_t1

0x9e9f,	// (0x000196cb) scroll_pane_cp08_ParamLimits

0x153d,	// (0x00010d69) cale_month_corner_pane_ParamLimits

0xa25c,	// (0x00019a88) cale_month_pane_t1

0x1a25,	// (0x00011251) cale_month_week_pane_ParamLimits

0x22e5,	// (0x00011b11) popup_call_status_window_g1_ParamLimits

0x22f9,	// (0x00011b25) popup_call_status_window_g2_ParamLimits

0x230d,	// (0x00011b39) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0001eb82) popup_call_status_window_g_ParamLimits

0xa62c,	// (0x00019e58) aid_call2_pane

0x2bd5,	// (0x00012401) msg_header_pane_g1

0x2d61,	// (0x0001258d) postcard_address2_pane_ParamLimits

0x2d61,	// (0x0001258d) postcard_address2_pane

0x2d77,	// (0x000125a3) postcard_message2_pane_ParamLimits

0x2d77,	// (0x000125a3) postcard_message2_pane

0x38e6,	// (0x00013112) message2_row_pane_ParamLimits

0x38e6,	// (0x00013112) message2_row_pane

0x3903,	// (0x0001312f) address2_row_pane_ParamLimits

0x3903,	// (0x0001312f) address2_row_pane

0xbe26,	// (0x0001b652) postcard_message2_row_pane_g1

0xbe2e,	// (0x0001b65a) postcard_message2_row_pane_t1

0xbe26,	// (0x0001b652) address2_row_pane_g1

0xbe2e,	// (0x0001b65a) address2_row_pane_t1

0x0b57,	// (0x00010383) aid_size_cell_vorec

0x99ae,	// (0x000191da) main_rss_pane

0x3916,	// (0x00013142) rss_list_single_pane_ParamLimits

0x3916,	// (0x00013142) rss_list_single_pane

0xbe3c,	// (0x0001b668) rss_list_single_pane_t1

0xbe4a,	// (0x0001b676) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0001ee2d) rss_list_single_pane_t

0x99ae,	// (0x000191da) main_camera2_pane

0x99ae,	// (0x000191da) main_video2_pane

0x3b7c,	// (0x000133a8) cams_zoom_pane_cp2_ParamLimits

0x3b7c,	// (0x000133a8) cams_zoom_pane_cp2

0x3b93,	// (0x000133bf) image2_vga_pane_ParamLimits

0x3b93,	// (0x000133bf) image2_vga_pane

0x3bdb,	// (0x00013407) main_camera2_pane_g1_ParamLimits

0x3bdb,	// (0x00013407) main_camera2_pane_g1

0x3bfb,	// (0x00013427) main_camera2_pane_g2_ParamLimits

0x3bfb,	// (0x00013427) main_camera2_pane_g2

0x3c12,	// (0x0001343e) main_camera2_pane_g3_ParamLimits

0x3c12,	// (0x0001343e) main_camera2_pane_g3

0x3c29,	// (0x00013455) main_camera2_pane_g4_ParamLimits

0x3c29,	// (0x00013455) main_camera2_pane_g4

0x3c40,	// (0x0001346c) main_camera2_pane_g5_ParamLimits

0x3c40,	// (0x0001346c) main_camera2_pane_g5

0x3c57,	// (0x00013483) main_camera2_pane_g6_ParamLimits

0x3c57,	// (0x00013483) main_camera2_pane_g6

0x3c6e,	// (0x0001349a) main_camera2_pane_g7_ParamLimits

0x3c6e,	// (0x0001349a) main_camera2_pane_g7

0x3c85,	// (0x000134b1) main_camera2_pane_g8_ParamLimits

0x3c85,	// (0x000134b1) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0001ee4e) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0001ee4e) main_camera2_pane_g

0x3cb3,	// (0x000134df) main_camera2_pane_t1_ParamLimits

0x3cb3,	// (0x000134df) main_camera2_pane_t1

0x3ce8,	// (0x00013514) main_camera2_pane_t2_ParamLimits

0x3ce8,	// (0x00013514) main_camera2_pane_t2

0x3d05,	// (0x00013531) main_camera2_pane_t3_ParamLimits

0x3d05,	// (0x00013531) main_camera2_pane_t3

0x3d63,	// (0x0001358f) main_camera2_pane_t4_ParamLimits

0x3d63,	// (0x0001358f) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0001ee61) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0001ee61) main_camera2_pane_t

0x3dec,	// (0x00013618) cams_zoom_pane_cp4_ParamLimits

0x3dec,	// (0x00013618) cams_zoom_pane_cp4

0x3e02,	// (0x0001362e) image2_cif_pane_ParamLimits

0x3e02,	// (0x0001362e) image2_cif_pane

0x3e2d,	// (0x00013659) image2_subqcif_pane_ParamLimits

0x3e2d,	// (0x00013659) image2_subqcif_pane

0x3e48,	// (0x00013674) main_video2_pane_g1_ParamLimits

0x3e48,	// (0x00013674) main_video2_pane_g1

0x3e62,	// (0x0001368e) main_video2_pane_g2_ParamLimits

0x3e62,	// (0x0001368e) main_video2_pane_g2

0x3e78,	// (0x000136a4) main_video2_pane_g3_ParamLimits

0x3e78,	// (0x000136a4) main_video2_pane_g3

0x3e8e,	// (0x000136ba) main_video2_pane_g4_ParamLimits

0x3e8e,	// (0x000136ba) main_video2_pane_g4

0x3ea4,	// (0x000136d0) main_video2_pane_g5_ParamLimits

0x3ea4,	// (0x000136d0) main_video2_pane_g5

0x3eba,	// (0x000136e6) main_video2_pane_g6_ParamLimits

0x3eba,	// (0x000136e6) main_video2_pane_g6

0x0005,

0xf644,	// (0x0001ee70) main_video2_pane_g_ParamLimits

0xf644,	// (0x0001ee70) main_video2_pane_g

0x3ed4,	// (0x00013700) main_video2_pane_t1_ParamLimits

0x3ed4,	// (0x00013700) main_video2_pane_t1

0x3ef8,	// (0x00013724) main_video2_pane_t2_ParamLimits

0x3ef8,	// (0x00013724) main_video2_pane_t2

0x3f48,	// (0x00013774) main_video2_pane_t3_ParamLimits

0x3f48,	// (0x00013774) main_video2_pane_t3

0x0002,

0xf651,	// (0x0001ee7d) main_video2_pane_t_ParamLimits

0xf651,	// (0x0001ee7d) main_video2_pane_t

0x33d8,	// (0x00012c04) call_muted_g2

0x0001,

0xf5f3,	// (0x0001ee1f) call_muted_g

0x99ae,	// (0x000191da) main_mup2_pane

0x3f90,	// (0x000137bc) main_mup2_pane_g1_ParamLimits

0x3f90,	// (0x000137bc) main_mup2_pane_g1

0x3f9c,	// (0x000137c8) main_mup2_pane_g2_ParamLimits

0x3f9c,	// (0x000137c8) main_mup2_pane_g2

0xbfd9,	// (0x0001b805) main_mup_pane_g13_cp1

0xbfe1,	// (0x0001b80d) mup_volume_pane_cp1

0x3fba,	// (0x000137e6) main_mup2_pane_g4_ParamLimits

0x3fba,	// (0x000137e6) main_mup2_pane_g4

0x3fcc,	// (0x000137f8) main_mup2_pane_g5_ParamLimits

0x3fcc,	// (0x000137f8) main_mup2_pane_g5

0x3fde,	// (0x0001380a) main_mup2_pane_g6_ParamLimits

0x3fde,	// (0x0001380a) main_mup2_pane_g6

0x3ff0,	// (0x0001381c) main_mup2_pane_g7_ParamLimits

0x3ff0,	// (0x0001381c) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0001ee84) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0001ee84) main_mup2_pane_g

0x4008,	// (0x00013834) main_mup2_pane_t1_ParamLimits

0x4008,	// (0x00013834) main_mup2_pane_t1

0x401e,	// (0x0001384a) main_mup2_pane_t2_ParamLimits

0x401e,	// (0x0001384a) main_mup2_pane_t2

0x4034,	// (0x00013860) main_mup2_pane_t3_ParamLimits

0x4034,	// (0x00013860) main_mup2_pane_t3

0x404a,	// (0x00013876) main_mup2_pane_t4_ParamLimits

0x404a,	// (0x00013876) main_mup2_pane_t4

0x4062,	// (0x0001388e) main_mup2_pane_t5_ParamLimits

0x4062,	// (0x0001388e) main_mup2_pane_t5

0x407a,	// (0x000138a6) main_mup2_pane_t6_ParamLimits

0x407a,	// (0x000138a6) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0001ee93) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0001ee93) main_mup2_pane_t

0x40aa,	// (0x000138d6) mup2_visualizer_pane_ParamLimits

0x40aa,	// (0x000138d6) mup2_visualizer_pane

0x40d8,	// (0x00013904) mup_progress_pane_cp_ParamLimits

0x40d8,	// (0x00013904) mup_progress_pane_cp

0xbfbb,	// (0x0001b7e7) mup_volume_pane_cp_ParamLimits

0xbfbb,	// (0x0001b7e7) mup_volume_pane_cp

0x40ee,	// (0x0001391a) mup2_visualizer_pane_g1_ParamLimits

0x40ee,	// (0x0001391a) mup2_visualizer_pane_g1

0xbefa,	// (0x0001b726) mup2_visualizer_pane_g2_ParamLimits

0xbefa,	// (0x0001b726) mup2_visualizer_pane_g2

0x4105,	// (0x00013931) mup2_visualizer_pane_g3_ParamLimits

0x4105,	// (0x00013931) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0001eea0) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0001eea0) mup2_visualizer_pane_g

0xac8b,	// (0x0001a4b7) aid_size_cell_fmradio

0x3588,	// (0x00012db4) aid_height_parent_landcape

0xa0ba,	// (0x000198e6) wml_content_pane_cp

0xa0c2,	// (0x000198ee) wml_tabs_pane

0xa0cb,	// (0x000198f7) popup_wml_miniature_window

0xa0d3,	// (0x000198ff) scroll_pane_cp021

0xa0e7,	// (0x00019913) wml_content_pane_comp8

0x99ae,	// (0x000191da) bg_popup_sub_pane_cp05

0xbf18,	// (0x0001b744) popup_wml_miniature_window_g1

0xbf20,	// (0x0001b74c) wml_miniature_view_pane

0x4111,	// (0x0001393d) aid_size_wml_view

0x4119,	// (0x00013945) wml_miniature_view_pane_g1

0x4122,	// (0x0001394e) wml_miniature_view_pane_g2

0x412b,	// (0x00013957) wml_miniature_view_pane_g3

0x4133,	// (0x0001395f) wml_miniature_view_pane_g4

0x413b,	// (0x00013967) wml_miniature_view_pane_g5

0x4143,	// (0x0001396f) wml_miniature_view_pane_g6

0x414b,	// (0x00013977) wml_miniature_view_pane_g7

0x4153,	// (0x0001397f) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0001eea7) wml_miniature_view_pane_g

0xbf28,	// (0x0001b754) background_graphic_ParamLimits

0xbf28,	// (0x0001b754) background_graphic

0xbf34,	// (0x0001b760) wml_tabs_2_pane

0xbf3d,	// (0x0001b769) wml_tabs_3_pane_ParamLimits

0xbf3d,	// (0x0001b769) wml_tabs_3_pane

0xbf4f,	// (0x0001b77b) wml_tabs_4_pane_ParamLimits

0xbf4f,	// (0x0001b77b) wml_tabs_4_pane

0xbf65,	// (0x0001b791) wml_tabs_5_pane_ParamLimits

0xbf65,	// (0x0001b791) wml_tabs_5_pane

0xbf7f,	// (0x0001b7ab) wml_tabs_pane_g2_ParamLimits

0xbf7f,	// (0x0001b7ab) wml_tabs_pane_g2

0xbf93,	// (0x0001b7bf) wml_tabs_pane_g3_ParamLimits

0xbf93,	// (0x0001b7bf) wml_tabs_pane_g3

0x415b,	// (0x00013987) wml_tabs_2_active_pane_ParamLimits

0x415b,	// (0x00013987) wml_tabs_2_active_pane

0x416f,	// (0x0001399b) wml_tabs_2_passive_pane_ParamLimits

0x416f,	// (0x0001399b) wml_tabs_2_passive_pane

0x4183,	// (0x000139af) wml_tabs_3_active_pane_cp_ParamLimits

0x4183,	// (0x000139af) wml_tabs_3_active_pane_cp

0x4198,	// (0x000139c4) wml_tabs_3_passive_pane_ParamLimits

0x4198,	// (0x000139c4) wml_tabs_3_passive_pane

0x41ab,	// (0x000139d7) wml_tabs_3_passive_pane_cp_ParamLimits

0x41ab,	// (0x000139d7) wml_tabs_3_passive_pane_cp

0x41c2,	// (0x000139ee) tabs_4_active_pane

0x41ca,	// (0x000139f6) tabs_4_passive_pane

0x41d4,	// (0x00013a00) tabs_4_passive_pane_cp

0x41dc,	// (0x00013a08) tabs_4_passive_pane_cp2

0x329c,	// (0x00012ac8) aid_height_text

0x28ee,	// (0x0001211a) mup_volume_cont_pane_ParamLimits

0x28ee,	// (0x0001211a) mup_volume_cont_pane

0xff33,	// (0x0000f75f) aid_size_cell_pinb

0xff3d,	// (0x0000f769) aid_size_list_pinb

0x40c4,	// (0x000138f0) mup2_volume_cont_pane_ParamLimits

0x40c4,	// (0x000138f0) mup2_volume_cont_pane

0xbfa7,	// (0x0001b7d3) mup2_volume_cont_pane_g1_ParamLimits

0xbfa7,	// (0x0001b7d3) mup2_volume_cont_pane_g1

0xfbf3,	// (0x0000f41f) aid_size_cell_touch_ParamLimits

0xfbf3,	// (0x0000f41f) aid_size_cell_touch

0xfe23,	// (0x0000f64f) touch_pane_ParamLimits

0xfe23,	// (0x0000f64f) touch_pane

0x952c,	// (0x00018d58) main_rss2_pane

0xbfe9,	// (0x0001b815) listscroll_rss2_pane

0xbff2,	// (0x0001b81e) rss2_navigation_pane

0xbffa,	// (0x0001b826) list_rss2_pane

0xa7bf,	// (0x00019feb) scroll_pane_cp22

0xc002,	// (0x0001b82e) rss2_navigation_pane_g1

0xc00b,	// (0x0001b837) rss2_navigation_pane_g2

0xc013,	// (0x0001b83f) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0001eeb8) rss2_navigation_pane_g

0xc01b,	// (0x0001b847) rss2_navigation_pane_t1

0x41e6,	// (0x00013a12) rss2_list_single_pane_ParamLimits

0x41e6,	// (0x00013a12) rss2_list_single_pane

0xc029,	// (0x0001b855) rss2_list_single_pane_t2

0xc037,	// (0x0001b863) rss2_list_single_pane_t3_ParamLimits

0xc037,	// (0x0001b863) rss2_list_single_pane_t3

0xc054,	// (0x0001b880) rss2_list_single_pane_t4

0x20e2,	// (0x0001190e) smil_status_pane_g1

0x958d,	// (0x00018db9) main_image2_pane_ParamLimits

0x958d,	// (0x00018db9) main_image2_pane

0x3c9c,	// (0x000134c8) main_camera2_pane_g9_ParamLimits

0x3c9c,	// (0x000134c8) main_camera2_pane_g9

0x3db8,	// (0x000135e4) main_camera2_pane_t5_ParamLimits

0x3db8,	// (0x000135e4) main_camera2_pane_t5

0xbecf,	// (0x0001b6fb) main_camera2_pane_t6_ParamLimits

0xbecf,	// (0x0001b6fb) main_camera2_pane_t6

0x41fc,	// (0x00013a28) main_image2_pane_g1_ParamLimits

0x41fc,	// (0x00013a28) main_image2_pane_g1

0x2fb6,	// (0x000127e2) smil2_video_pane_ParamLimits

0x2fb6,	// (0x000127e2) smil2_video_pane

0x954a,	// (0x00018d76) aid_zoom_text_primary_cp

0x9583,	// (0x00018daf) popup_preview_fixed_window

0xa023,	// (0x0001984f) im_reading_pane_g1

0x3b6e,	// (0x0001339a) cams2_bc_adjust_pane_cp_ParamLimits

0x3b6e,	// (0x0001339a) cams2_bc_adjust_pane_cp

0x3dde,	// (0x0001360a) cams2_bc_adjust_pane_ParamLimits

0x3dde,	// (0x0001360a) cams2_bc_adjust_pane

0xc062,	// (0x0001b88e) cams2_bc_adjust_pane_g1

0xc06a,	// (0x0001b896) cams2_slider_pane

0xc073,	// (0x0001b89f) cams2_slider_pane_g1

0xc07c,	// (0x0001b8a8) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0001eebf) cams2_slider_pane_g

0x002d,	// (0x0000f859) calc_display_pane_ParamLimits

0x0055,	// (0x0000f881) calc_paper_pane_ParamLimits

0x0078,	// (0x0000f8a4) grid_calc_pane_ParamLimits

0xa68e,	// (0x00019eba) popup_clock_digital_window_t1_ParamLimits

0xac28,	// (0x0001a454) main_image_pane_t1

0x000f,	// (0x0000f83b) aid_size_cell_calc_ParamLimits

0x000f,	// (0x0000f83b) aid_size_cell_calc

0x35ce,	// (0x00012dfa) popup_blid_sat_info2_window_ParamLimits

0x35ce,	// (0x00012dfa) popup_blid_sat_info2_window

0xc09e,	// (0x0001b8ca) aid_size_cell_blid

0xc0a6,	// (0x0001b8d2) bg_popup_window_pane_cp07

0xc0c9,	// (0x0001b8f5) grid_popup_blid_pane

0xc0d3,	// (0x0001b8ff) heading_pane_cp05_ParamLimits

0xc0d3,	// (0x0001b8ff) heading_pane_cp05

0xc19d,	// (0x0001b9c9) cell_popup_blid_pane_ParamLimits

0xc19d,	// (0x0001b9c9) cell_popup_blid_pane

0xc1c7,	// (0x0001b9f3) cell_popup_blid_pane_g1

0xc1cf,	// (0x0001b9fb) cell_popup_blid_pane_t1

0x4094,	// (0x000138c0) mup2_indicator_pane_ParamLimits

0x4094,	// (0x000138c0) mup2_indicator_pane

0x9f1c,	// (0x00019748) mup2_visualizer_osc_pane

0xbf06,	// (0x0001b732) mup2_visualizer_spec_pane_ParamLimits

0xbf06,	// (0x0001b732) mup2_visualizer_spec_pane

0x4212,	// (0x00013a3e) mup2_spec_half_pane

0x421b,	// (0x00013a47) mup2_spec_half_pane_cp

0x4223,	// (0x00013a4f) mup2_spec_bar_pane_ParamLimits

0x4223,	// (0x00013a4f) mup2_spec_bar_pane

0xbe58,	// (0x0001b684) mup2_spec_bar_pane_g1

0xbe62,	// (0x0001b68e) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0001ee32) mup2_spec_bar_pane_g

0x4243,	// (0x00013a6f) mup2_osc_middle_pane

0xbe74,	// (0x0001b6a0) mup2_visualizer_osc_pane_g1

0x95bb,	// (0x00018de7) popup_number_entry_window_t1_ParamLimits

0x95ce,	// (0x00018dfa) popup_number_entry_window_t2_ParamLimits

0x95e0,	// (0x00018e0c) popup_number_entry_window_t3_ParamLimits

0xfe75,	// (0x0000f6a1) popup_number_entry_window_t5_ParamLimits

0xfe75,	// (0x0000f6a1) popup_number_entry_window_t5

0xf0ca,	// (0x0001e8f6) popup_number_entry_window_t_ParamLimits

0x95f2,	// (0x00018e1e) text_title_cp2_ParamLimits

0xab02,	// (0x0001a32e) aid_hotspot_pointer_text2_pane

0xab28,	// (0x0001a354) main_viewer_pane_g9_ParamLimits

0xab28,	// (0x0001a354) main_viewer_pane_g9

0xa25c,	// (0x00019a88) cale_month_pane_t1_ParamLimits

0xa2b0,	// (0x00019adc) bg_cale_pane_ParamLimits

0xa2c8,	// (0x00019af4) list_cale_pane_ParamLimits

0xa2d9,	// (0x00019b05) listscroll_cale_day_pane_t1

0xa2eb,	// (0x00019b17) scroll_pane_cp09_ParamLimits

0x2924,	// (0x00012150) main_mup_eq_pane_t1_ParamLimits

0x2924,	// (0x00012150) main_mup_eq_pane_t1

0x2940,	// (0x0001216c) main_mup_eq_pane_t2_ParamLimits

0x2940,	// (0x0001216c) main_mup_eq_pane_t2

0x295c,	// (0x00012188) main_mup_eq_pane_t3_ParamLimits

0x295c,	// (0x00012188) main_mup_eq_pane_t3

0x297a,	// (0x000121a6) main_mup_eq_pane_t4_ParamLimits

0x297a,	// (0x000121a6) main_mup_eq_pane_t4

0x2998,	// (0x000121c4) main_mup_eq_pane_t5_ParamLimits

0x2998,	// (0x000121c4) main_mup_eq_pane_t5

0x29b6,	// (0x000121e2) main_mup_eq_pane_t6_ParamLimits

0x29b6,	// (0x000121e2) main_mup_eq_pane_t6

0x29cc,	// (0x000121f8) main_mup_eq_pane_t7_ParamLimits

0x29cc,	// (0x000121f8) main_mup_eq_pane_t7

0x29e2,	// (0x0001220e) main_mup_eq_pane_t8_ParamLimits

0x29e2,	// (0x0001220e) main_mup_eq_pane_t8

0x29f8,	// (0x00012224) main_mup_eq_pane_t9_ParamLimits

0x29f8,	// (0x00012224) main_mup_eq_pane_t9

0x2a14,	// (0x00012240) main_mup_eq_pane_t10_ParamLimits

0x2a14,	// (0x00012240) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0001ec81) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0001ec81) main_mup_eq_pane_t

0x2ae9,	// (0x00012315) mup_equalizer_pane_cp5_ParamLimits

0x2b01,	// (0x0001232d) mup_equalizer_pane_cp6_ParamLimits

0x2b19,	// (0x00012345) mup_equalizer_pane_cp7_ParamLimits

0x952c,	// (0x00018d58) main_gallery_pane

0xbe7d,	// (0x0001b6a9) smil2_volume_pane

0xbe85,	// (0x0001b6b1) smil_status_volume_pane_g1_ParamLimits

0xbe98,	// (0x0001b6c4) smil_status_volume_pane_g2_ParamLimits

0xbeab,	// (0x0001b6d7) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0001ee37) smil_status_volume_pane_g_ParamLimits

0xc0a6,	// (0x0001b8d2) bg_popup_window_pane_cp07_ParamLimits

0xc0b4,	// (0x0001b8e0) blid_firmament_pane

0x424c,	// (0x00013a78) aid_size_cell_gallery_ParamLimits

0x424c,	// (0x00013a78) aid_size_cell_gallery

0x4262,	// (0x00013a8e) grid_gallery_pane_ParamLimits

0x4262,	// (0x00013a8e) grid_gallery_pane

0x427d,	// (0x00013aa9) cell_gallery_pane_ParamLimits

0x427d,	// (0x00013aa9) cell_gallery_pane

0xc1dd,	// (0x0001ba09) bg_cell_gallery_focus_pane_ParamLimits

0xc1dd,	// (0x0001ba09) bg_cell_gallery_focus_pane

0xc1ef,	// (0x0001ba1b) cell_gallery_pane_g1_ParamLimits

0xc1ef,	// (0x0001ba1b) cell_gallery_pane_g1

0x42c8,	// (0x00013af4) cell_gallery_pane_g2_ParamLimits

0x42c8,	// (0x00013af4) cell_gallery_pane_g2

0x42d5,	// (0x00013b01) cell_gallery_pane_g3_ParamLimits

0x42d5,	// (0x00013b01) cell_gallery_pane_g3

0xc1fb,	// (0x0001ba27) cell_gallery_pane_g4_ParamLimits

0xc1fb,	// (0x0001ba27) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0001eee5) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0001eee5) cell_gallery_pane_g

0xc207,	// (0x0001ba33) bg_cell_gallery_focus_pane_g1

0xc20f,	// (0x0001ba3b) bg_cell_gallery_focus_pane_g2

0xc217,	// (0x0001ba43) bg_cell_gallery_focus_pane_g3

0xc21f,	// (0x0001ba4b) bg_cell_gallery_focus_pane_g4

0xc227,	// (0x0001ba53) bg_cell_gallery_focus_pane_g5

0xc22f,	// (0x0001ba5b) bg_cell_gallery_focus_pane_g6

0xc237,	// (0x0001ba63) bg_cell_gallery_focus_pane_g7

0xc23f,	// (0x0001ba6b) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0001eeee) bg_cell_gallery_focus_pane_g

0xc247,	// (0x0001ba73) aid_firma_cardinal

0xc25b,	// (0x0001ba87) blid_firmament_pane_t1

0xc272,	// (0x0001ba9e) blid_firmament_pane_t2

0xc289,	// (0x0001bab5) blid_firmament_pane_t3

0xc2a0,	// (0x0001bacc) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0001eeff) blid_firmament_pane_t

0xc2b7,	// (0x0001bae3) blid_sat_info_pane

0xc2c7,	// (0x0001baf3) blid_sat_info_pane_g1

0xc2c7,	// (0x0001baf3) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0001ef08) blid_sat_info_pane_g

0xc2d1,	// (0x0001bafd) blid_sat_info_pane_t1

0xc2df,	// (0x0001bb0b) smil2_volume_content_pane

0xc2e8,	// (0x0001bb14) smil2_volume_pane_g1

0xc2f0,	// (0x0001bb1c) smil2_volume_content_pane_g1

0xc2f9,	// (0x0001bb25) smil2_volume_content_pane_g2

0xc302,	// (0x0001bb2e) smil2_volume_content_pane_g3

0xc30b,	// (0x0001bb37) smil2_volume_content_pane_g4

0xc314,	// (0x0001bb40) smil2_volume_content_pane_g5

0xc31d,	// (0x0001bb49) smil2_volume_content_pane_g6

0xc326,	// (0x0001bb52) smil2_volume_content_pane_g7

0xc32f,	// (0x0001bb5b) smil2_volume_content_pane_g8

0xc338,	// (0x0001bb64) smil2_volume_content_pane_g9

0xc341,	// (0x0001bb6d) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0001ef0d) smil2_volume_content_pane_g

0x06f2,	// (0x0000ff1e) cale_week_day_heading_pane_t1_ParamLimits

0x073c,	// (0x0000ff68) cale_week_day_heading_pane_t2_ParamLimits

0x078b,	// (0x0000ffb7) cale_week_day_heading_pane_t3_ParamLimits

0x07da,	// (0x00010006) cale_week_day_heading_pane_t4_ParamLimits

0x0829,	// (0x00010055) cale_week_day_heading_pane_t5_ParamLimits

0x087c,	// (0x000100a8) cale_week_day_heading_pane_t6_ParamLimits

0x08d3,	// (0x000100ff) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0001e9fd) cale_week_day_heading_pane_t_ParamLimits

0x9ec1,	// (0x000196ed) bg_cale_side_pane_ParamLimits

0x091d,	// (0x00010149) cale_week_time_pane_t1_ParamLimits

0x0957,	// (0x00010183) cale_week_time_pane_t2_ParamLimits

0x0991,	// (0x000101bd) cale_week_time_pane_t3_ParamLimits

0x09cb,	// (0x000101f7) cale_week_time_pane_t4_ParamLimits

0x0a05,	// (0x00010231) cale_week_time_pane_t5_ParamLimits

0x0a3f,	// (0x0001026b) cale_week_time_pane_t6_ParamLimits

0x0a79,	// (0x000102a5) cale_week_time_pane_t7_ParamLimits

0x0ab3,	// (0x000102df) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0001ea0c) cale_week_time_pane_t_ParamLimits

0x0af3,	// (0x0001031f) cell_cale_week_pane_g2_ParamLimits

0x9ec1,	// (0x000196ed) bg_cale_side_pane_cp01_ParamLimits

0x1ec7,	// (0x000116f3) cale_month_week_pane_t1_ParamLimits

0x1ee0,	// (0x0001170c) cale_month_week_pane_t2_ParamLimits

0x1ef9,	// (0x00011725) cale_month_week_pane_t3_ParamLimits

0x1f12,	// (0x0001173e) cale_month_week_pane_t4_ParamLimits

0x1f2b,	// (0x00011757) cale_month_week_pane_t5_ParamLimits

0x1f44,	// (0x00011770) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0001eae1) cale_month_week_pane_t_ParamLimits

0xa26e,	// (0x00019a9a) cell_cale_month_pane_g1_ParamLimits

0x952c,	// (0x00018d58) main_cale_event_viewer_pane

0x952c,	// (0x00018d58) listscroll_cale_event_viewer_pane

0xc34a,	// (0x0001bb76) list_cale_ev_pane

0xc352,	// (0x0001bb7e) scroll_pane_cp023

0x42e2,	// (0x00013b0e) field_cale_ev_pane_ParamLimits

0x42e2,	// (0x00013b0e) field_cale_ev_pane

0xc35e,	// (0x0001bb8a) field_cale_ev_content_pane_ParamLimits

0xc35e,	// (0x0001bb8a) field_cale_ev_content_pane

0xc36a,	// (0x0001bb96) field_cale_ev_pane_g1_ParamLimits

0xc36a,	// (0x0001bb96) field_cale_ev_pane_g1

0xc376,	// (0x0001bba2) field_cale_ev_pane_g2_ParamLimits

0xc376,	// (0x0001bba2) field_cale_ev_pane_g2

0xc38e,	// (0x0001bbba) field_cale_ev_pane_g3_ParamLimits

0xc38e,	// (0x0001bbba) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0001ef22) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0001ef22) field_cale_ev_pane_g

0xc3a6,	// (0x0001bbd2) field_cale_ev_pane_t1_ParamLimits

0xc3a6,	// (0x0001bbd2) field_cale_ev_pane_t1

0x4306,	// (0x00013b32) field_cale_ev_content_pane_t1_ParamLimits

0x4306,	// (0x00013b32) field_cale_ev_content_pane_t1

0xaa84,	// (0x0001a2b0) bg_button_pane_cp01

0x033a,	// (0x0000fb66) listscroll_cale_week_pane_ParamLimits

0x034c,	// (0x0000fb78) popup_toolbar_window_cp01

0x9e8d,	// (0x000196b9) listscroll_cale_week_pane_t1_ParamLimits

0x033a,	// (0x0000fb66) listscroll_cale_day_pane_ParamLimits

0x034c,	// (0x0000fb78) popup_toolbar_window_cp02

0xa2d9,	// (0x00019b05) listscroll_cale_day_pane_t1_ParamLimits

0x033a,	// (0x0000fb66) main_cale_month_pane_ParamLimits

0x384e,	// (0x0001307a) popup_toolbar_window_cp03_ParamLimits

0x384e,	// (0x0001307a) popup_toolbar_window_cp03

0x2e74,	// (0x000126a0) main_image_pane_g2_ParamLimits

0x2e74,	// (0x000126a0) main_image_pane_g2

0x2e85,	// (0x000126b1) main_image_pane_g3_ParamLimits

0x2e85,	// (0x000126b1) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0001ed13) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0001ed13) main_image_pane_g

0xac28,	// (0x0001a454) main_image_pane_t1_ParamLimits

0x2e96,	// (0x000126c2) main_image_pane_t2_ParamLimits

0x2e96,	// (0x000126c2) main_image_pane_t2

0x2ea8,	// (0x000126d4) main_image_pane_t3_ParamLimits

0x2ea8,	// (0x000126d4) main_image_pane_t3

0x2ed0,	// (0x000126fc) main_image_pane_t4_ParamLimits

0x2ed0,	// (0x000126fc) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0001ed1a) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0001ed1a) main_image_pane_t

0x2ef0,	// (0x0001271c) popup_image_details_window_cp01

0x2efa,	// (0x00012726) popup_toobar_trans_pane_cp01_ParamLimits

0x2efa,	// (0x00012726) popup_toobar_trans_pane_cp01

0x36c1,	// (0x00012eed) popup_image_details_window_ParamLimits

0x36c1,	// (0x00012eed) popup_image_details_window

0xbddc,	// (0x0001b608) popup_image_focus_window

0x3b28,	// (0x00013354) camera2_autofocus_pane_ParamLimits

0x3b28,	// (0x00013354) camera2_autofocus_pane

0x952c,	// (0x00018d58) bg_popup_sub_pane_cp06

0xc3bd,	// (0x0001bbe9) popup_image_focus_window_g1

0xc3c5,	// (0x0001bbf1) popup_image_focus_window_g2

0xc3cd,	// (0x0001bbf9) popup_image_focus_window_g3

0xc3d5,	// (0x0001bc01) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0001ef29) popup_image_focus_window_g

0xc3dd,	// (0x0001bc09) popup_image_focus_window_t1

0xc3eb,	// (0x0001bc17) popup_image_focus_window_t2

0xc3fb,	// (0x0001bc27) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0001ef32) popup_image_focus_window_t

0xc409,	// (0x0001bc35) camera2_autofocus_pane_g1

0x958d,	// (0x00018db9) bg_tb_trans_pane_cp01

0xc417,	// (0x0001bc43) popup_image_details_window_g1

0xc42a,	// (0x0001bc56) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0001ef44) popup_image_details_window_g

0xc453,	// (0x0001bc7f) popup_image_details_window_t1

0xc465,	// (0x0001bc91) popup_image_details_window_t2

0xc47e,	// (0x0001bcaa) popup_image_details_window_t3

0xc492,	// (0x0001bcbe) popup_image_details_window_t4

0xc4ad,	// (0x0001bcd9) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0001ef4b) popup_image_details_window_t

0x9cc2,	// (0x000194ee) bg_calc_paper_pane_ParamLimits

0x952c,	// (0x00018d58) grid_highlight_pane_cp013

0x9cd6,	// (0x00019502) list_calc_pane_ParamLimits

0x9ce8,	// (0x00019514) scroll_pane_cp024

0x9cf0,	// (0x0001951c) bg_calc_display_pane_ParamLimits

0x0178,	// (0x0000f9a4) calc_display_pane_t1_ParamLimits

0x018a,	// (0x0000f9b6) calc_display_pane_t2_ParamLimits

0x9cfc,	// (0x00019528) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0001e97d) calc_display_pane_t_ParamLimits

0x0253,	// (0x0000fa7f) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0001e99a) cell_calc_pane_g

0x025c,	// (0x0000fa88) cell_calc_pane_t1

0x9d73,	// (0x0001959f) grid_highlight_pane_cp02_ParamLimits

0x9d89,	// (0x000195b5) toolbar_button_pane_cp01_ParamLimits

0x9d89,	// (0x000195b5) toolbar_button_pane_cp01

0xac6d,	// (0x0001a499) temp_image_control_pane_ParamLimits

0xac6d,	// (0x0001a499) temp_image_control_pane

0x958d,	// (0x00018db9) main_mp3_pane

0xc4c7,	// (0x0001bcf3) temp_image_control_pane_g1_ParamLimits

0xc4c7,	// (0x0001bcf3) temp_image_control_pane_g1

0xc4d5,	// (0x0001bd01) temp_image_control_pane_g2_ParamLimits

0xc4d5,	// (0x0001bd01) temp_image_control_pane_g2

0xc4e7,	// (0x0001bd13) temp_image_control_pane_g3_ParamLimits

0xc4e7,	// (0x0001bd13) temp_image_control_pane_g3

0x4357,	// (0x00013b83) temp_image_control_pane_g4_ParamLimits

0x4357,	// (0x00013b83) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0001ef56) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0001ef56) temp_image_control_pane_g

0xc4c7,	// (0x0001bcf3) main_mp3_pane_g1

0x436a,	// (0x00013b96) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0001ef5f) main_mp3_pane_g

0xc52a,	// (0x0001bd56) main_mp3_pane_t1

0x9f2e,	// (0x0001975a) main_camera_pane_g8_ParamLimits

0x9f2e,	// (0x0001975a) main_camera_pane_g8

0x0e1a,	// (0x00010646) main_video_pane_g7_ParamLimits

0x0e1a,	// (0x00010646) main_video_pane_g7

0xbee8,	// (0x0001b714) main_camera2_pane_t7_ParamLimits

0xbee8,	// (0x0001b714) main_camera2_pane_t7

0xa07a,	// (0x000198a6) scroll_pane_cp025_ParamLimits

0xa07a,	// (0x000198a6) scroll_pane_cp025

0xa08e,	// (0x000198ba) scroll_pane_cp026_ParamLimits

0xa08e,	// (0x000198ba) scroll_pane_cp026

0xa09d,	// (0x000198c9) wml_content_pane_ParamLimits

0x952c,	// (0x00018d58) main_touch_calib_pane

0x443c,	// (0x00013c68) main_touch_calib_pane_g1

0x444e,	// (0x00013c7a) main_touch_calib_pane_g2

0x4460,	// (0x00013c8c) main_touch_calib_pane_g3

0x4472,	// (0x00013c9e) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0001ef7d) main_touch_calib_pane_g

0x4484,	// (0x00013cb0) main_touch_calib_pane_t1

0x449e,	// (0x00013cca) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0001ef86) main_touch_calib_pane_t

0xa83a,	// (0x0001a066) mup_progress_pane_cp02

0xa859,	// (0x0001a085) navi_pane_g1

0xa8bb,	// (0x0001a0e7) navi_pane_mp_t3

0x958d,	// (0x00018db9) main_mp3_pane_ParamLimits

0x3890,	// (0x000130bc) navi_pane_ParamLimits

0xc4c7,	// (0x0001bcf3) main_mp3_pane_g1_ParamLimits

0x436a,	// (0x00013b96) main_mp3_pane_g2_ParamLimits

0x4376,	// (0x00013ba2) main_mp3_pane_g3_ParamLimits

0x4376,	// (0x00013ba2) main_mp3_pane_g3

0x4384,	// (0x00013bb0) main_mp3_pane_g4_ParamLimits

0x4384,	// (0x00013bb0) main_mp3_pane_g4

0xc4f7,	// (0x0001bd23) main_mp3_pane_g5_ParamLimits

0xc4f7,	// (0x0001bd23) main_mp3_pane_g5

0xc505,	// (0x0001bd31) main_mp3_pane_g6_ParamLimits

0xc505,	// (0x0001bd31) main_mp3_pane_g6

0xc512,	// (0x0001bd3e) main_mp3_pane_g7_ParamLimits

0xc512,	// (0x0001bd3e) main_mp3_pane_g7

0xc51e,	// (0x0001bd4a) main_mp3_pane_g8_ParamLimits

0xc51e,	// (0x0001bd4a) main_mp3_pane_g8

0xf733,	// (0x0001ef5f) main_mp3_pane_g_ParamLimits

0x4390,	// (0x00013bbc) main_mp3_pane_t2

0x439e,	// (0x00013bca) main_mp3_pane_t3

0xc538,	// (0x0001bd64) main_mp3_pane_t4

0xc546,	// (0x0001bd72) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0001ef70) main_mp3_pane_t

0xc554,	// (0x0001bd80) mup_progress_pane_cp01

0x954a,	// (0x00018d76) aid_zoom_text_secondary2

0xc34a,	// (0x0001bb76) list_cale_ev2_pane

0xc352,	// (0x0001bb7e) scroll_pane_cp023_ParamLimits

0x44f8,	// (0x00013d24) field_cale_ev2_pane_ParamLimits

0x44f8,	// (0x00013d24) field_cale_ev2_pane

0x451c,	// (0x00013d48) field_cale_ev2_pane_g1_ParamLimits

0x451c,	// (0x00013d48) field_cale_ev2_pane_g1

0x4528,	// (0x00013d54) field_cale_ev2_pane_g2_ParamLimits

0x4528,	// (0x00013d54) field_cale_ev2_pane_g2

0x4540,	// (0x00013d6c) field_cale_ev2_pane_g3_ParamLimits

0x4540,	// (0x00013d6c) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0001ef91) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0001ef91) field_cale_ev2_pane_g

0x4558,	// (0x00013d84) field_cale_ev2_pane_t1_ParamLimits

0x4558,	// (0x00013d84) field_cale_ev2_pane_t1

0x456f,	// (0x00013d9b) field_cale_ev2_pane_t2_ParamLimits

0x456f,	// (0x00013d9b) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0001ef9a) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0001ef9a) field_cale_ev2_pane_t

0x2d11,	// (0x0001253d) main_postcard_pane_g5_ParamLimits

0x2d11,	// (0x0001253d) main_postcard_pane_g5

0x2d27,	// (0x00012553) main_postcard_pane_g6_ParamLimits

0x2d27,	// (0x00012553) main_postcard_pane_g6

0x0bc6,	// (0x000103f2) camera2_autofocus_pane_cp_ParamLimits

0x0bc6,	// (0x000103f2) camera2_autofocus_pane_cp

0x958d,	// (0x00018db9) main_mup3_pane

0x45a4,	// (0x00013dd0) main_mup3_pane_g1_ParamLimits

0x45a4,	// (0x00013dd0) main_mup3_pane_g1

0x45c6,	// (0x00013df2) main_mup3_pane_g2_ParamLimits

0x45c6,	// (0x00013df2) main_mup3_pane_g2

0x4647,	// (0x00013e73) main_mup3_pane_g3_ParamLimits

0x4647,	// (0x00013e73) main_mup3_pane_g3

0x468f,	// (0x00013ebb) main_mup3_pane_g4_ParamLimits

0x468f,	// (0x00013ebb) main_mup3_pane_g4

0x46d5,	// (0x00013f01) main_mup3_pane_g5_ParamLimits

0x46d5,	// (0x00013f01) main_mup3_pane_g5

0x471d,	// (0x00013f49) main_mup3_pane_g6_ParamLimits

0x471d,	// (0x00013f49) main_mup3_pane_g6

0xc568,	// (0x0001bd94) main_mup3_pane_g7_ParamLimits

0xc568,	// (0x0001bd94) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0001efaa) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0001efaa) main_mup3_pane_g

0x479d,	// (0x00013fc9) main_mup3_pane_t1_ParamLimits

0x479d,	// (0x00013fc9) main_mup3_pane_t1

0x480b,	// (0x00014037) main_mup3_pane_t2_ParamLimits

0x480b,	// (0x00014037) main_mup3_pane_t2

0x48e1,	// (0x0001410d) main_mup3_pane_t4_ParamLimits

0x48e1,	// (0x0001410d) main_mup3_pane_t4

0x493f,	// (0x0001416b) main_mup3_pane_t5_ParamLimits

0x493f,	// (0x0001416b) main_mup3_pane_t5

0x49f9,	// (0x00014225) main_mup3_pane_t6_ParamLimits

0x49f9,	// (0x00014225) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0001efbb) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0001efbb) main_mup3_pane_t

0x4ab1,	// (0x000142dd) mup3_progress_pane_ParamLimits

0x4ab1,	// (0x000142dd) mup3_progress_pane

0x4b43,	// (0x0001436f) popup_mup3_control_window_ParamLimits

0x4b43,	// (0x0001436f) popup_mup3_control_window

0xc576,	// (0x0001bda2) popup_mup3_text_window

0x4b79,	// (0x000143a5) mup3_progress_pane_t1

0x4b97,	// (0x000143c3) mup3_progress_pane_t2

0xc57e,	// (0x0001bdaa) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0001efc8) mup3_progress_pane_t

0xc59b,	// (0x0001bdc7) mup_progress_pane_cp03

0x952c,	// (0x00018d58) bg_tb_trans_pane_cp04

0x4bb5,	// (0x000143e1) mup3_volume_pane

0x4bbd,	// (0x000143e9) popup_mup3_control_window_g1

0x4bc6,	// (0x000143f2) mup3_volume_pane_g1

0x4bcf,	// (0x000143fb) mup3_volume_pane_g2

0x4bd8,	// (0x00014404) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0001efcf) mup3_volume_pane_g

0x952c,	// (0x00018d58) bg_tb_trans_pane_cp03

0xc5ab,	// (0x0001bdd7) popup_mup3_text_window_g1

0xc5b3,	// (0x0001bddf) popup_mup3_text_window_t1

0x9d4a,	// (0x00019576) list_calc_item_pane_g1_ParamLimits

0xbfd0,	// (0x0001b7fc) mup_volume_pane_cp_g1

0x44b8,	// (0x00013ce4) main_touch_calib_pane_t3

0x44cc,	// (0x00013cf8) main_touch_calib_pane_t4

0x44e2,	// (0x00013d0e) main_touch_calib_pane_t5

0x9536,	// (0x00018d62) aid_cell_size_toolbar2

0x953e,	// (0x00018d6a) aid_popup3_width_pane

0x954a,	// (0x00018d76) aid_zoom_text_msg_primary

0x0ba3,	// (0x000103cf) vorec_t7

0x9d0e,	// (0x0001953a) bg_calc_paper_pane_g1_ParamLimits

0x9d1a,	// (0x00019546) bg_calc_paper_pane_g2_ParamLimits

0x9d26,	// (0x00019552) bg_calc_paper_pane_g3_ParamLimits

0x9d32,	// (0x0001955e) bg_calc_paper_pane_g4_ParamLimits

0x9d3e,	// (0x0001956a) bg_calc_paper_pane_g5_ParamLimits

0x01d9,	// (0x0000fa05) bg_calc_paper_pane_g6_ParamLimits

0x01ec,	// (0x0000fa18) bg_calc_paper_pane_g7_ParamLimits

0x01ff,	// (0x0000fa2b) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0001e984) bg_calc_paper_pane_g_ParamLimits

0x0210,	// (0x0000fa3c) calc_bg_paper_pane_g9_ParamLimits

0x0d28,	// (0x00010554) image_qvga_pane_ParamLimits

0x0d28,	// (0x00010554) image_qvga_pane

0x9c09,	// (0x00019435) bg_popup_sub_pane_cp04_ParamLimits

0xaba4,	// (0x0001a3d0) popup_mup_playback_window_g1_ParamLimits

0xabb0,	// (0x0001a3dc) popup_mup_playback_window_t1_ParamLimits

0xabc5,	// (0x0001a3f1) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0001ed0e) popup_mup_playback_window_t_ParamLimits

0x3fac,	// (0x000137d8) main_mup2_pane_g3_ParamLimits

0x3fac,	// (0x000137d8) main_mup2_pane_g3

0x111b,	// (0x00010947) popup_toolbar_window_cp04

0xafc0,	// (0x0001a7ec) popup_call2_audio_second_window_g3_ParamLimits

0xafc0,	// (0x0001a7ec) popup_call2_audio_second_window_g3

0xb3ca,	// (0x0001abf6) popup_call2_audio_first_window_g4_ParamLimits

0xb3ca,	// (0x0001abf6) popup_call2_audio_first_window_g4

0xba49,	// (0x0001b275) popup_call2_audio_in_window_g4_ParamLimits

0xba49,	// (0x0001b275) popup_call2_audio_in_window_g4

0x2e56,	// (0x00012682) aid_area_sk_bg_cut_ParamLimits

0x2e56,	// (0x00012682) aid_area_sk_bg_cut

0xabda,	// (0x0001a406) aid_area_sk_bg_cut_2_ParamLimits

0xabda,	// (0x0001a406) aid_area_sk_bg_cut_2

0x42b8,	// (0x00013ae4) aid_placing_details_win

0x42c0,	// (0x00013aec) aid_placing_details_win_2

0xc409,	// (0x0001bc35) camera2_autofocus_pane_g1_ParamLimits

0xfdbc,	// (0x0000f5e8) popup_fixed_preview_cale_window_ParamLimits

0xfdbc,	// (0x0000f5e8) popup_fixed_preview_cale_window

0xa90b,	// (0x0001a137) navi_slider_pane_g3

0xa914,	// (0x0001a140) navi_slider_pane_g4

0xa91d,	// (0x0001a149) navi_slider_pane_g5

0xa90b,	// (0x0001a137) navi_slider_pane_g6

0xa926,	// (0x0001a152) navi_slider_pane_g7

0xaa49,	// (0x0001a275) mup_scale_pane_g3

0xaa52,	// (0x0001a27e) mup_scale_pane_g4

0xaa5b,	// (0x0001a287) mup_scale_pane_g5

0x2b31,	// (0x0001235d) mup_scale_pane_g6

0x2b3a,	// (0x00012366) mup_scale_pane_g7

0xa90b,	// (0x0001a137) cams2_slider_pane_g3

0xc085,	// (0x0001b8b1) cams2_slider_pane_g4

0xc08d,	// (0x0001b8b9) cams2_slider_pane_g5

0xa90b,	// (0x0001a137) cams2_slider_pane_g6

0xc095,	// (0x0001b8c1) cams2_slider_pane_g7

0xc2c7,	// (0x0001baf3) camera2_autofocus_pane_cp_g1

0xbdae,	// (0x0001b5da) bg_popup_preview_window_pane_cp02_ParamLimits

0xbdae,	// (0x0001b5da) bg_popup_preview_window_pane_cp02

0xc5c1,	// (0x0001bded) list_fp_cale_pane_ParamLimits

0xc5c1,	// (0x0001bded) list_fp_cale_pane

0xc5cd,	// (0x0001bdf9) popup_fixed_preview_cale_window_t1_ParamLimits

0xc5cd,	// (0x0001bdf9) popup_fixed_preview_cale_window_t1

0x4be1,	// (0x0001440d) popup_fixed_preview_cale_window_t2_ParamLimits

0x4be1,	// (0x0001440d) popup_fixed_preview_cale_window_t2

0x4bf6,	// (0x00014422) popup_fixed_preview_cale_window_t3_ParamLimits

0x4bf6,	// (0x00014422) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0001efd6) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0001efd6) popup_fixed_preview_cale_window_t

0x4c0b,	// (0x00014437) list_single_fp_cale_pane_ParamLimits

0x4c0b,	// (0x00014437) list_single_fp_cale_pane

0xc5eb,	// (0x0001be17) list_single_fp_cale_pane_g1_ParamLimits

0xc5eb,	// (0x0001be17) list_single_fp_cale_pane_g1

0xc5f7,	// (0x0001be23) list_single_fp_cale_pane_g2_ParamLimits

0xc5f7,	// (0x0001be23) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0001efdd) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0001efdd) list_single_fp_cale_pane_g

0xc610,	// (0x0001be3c) list_single_fp_cale_pane_t1_ParamLimits

0xc610,	// (0x0001be3c) list_single_fp_cale_pane_t1

0xc622,	// (0x0001be4e) list_single_fp_cale_pane_t2_ParamLimits

0xc622,	// (0x0001be4e) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0001efe4) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0001efe4) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x952c,	// (0x00018d58) main_dialer_pane

0x4c20,	// (0x0001444c) aid_cell_size_keypad

0x4c2a,	// (0x00014456) dialer_ne_pane

0x4c34,	// (0x00014460) grid_dialer_command_1_pane

0x4c3c,	// (0x00014468) grid_dialer_command_2_pane

0x4c44,	// (0x00014470) grid_dialer_keypad_pane

0x4c56,	// (0x00014482) bg_popup_call_pane_cp06_ParamLimits

0x4c56,	// (0x00014482) bg_popup_call_pane_cp06

0x4c62,	// (0x0001448e) dialer_ne_clear_pane_ParamLimits

0x4c62,	// (0x0001448e) dialer_ne_clear_pane

0xc655,	// (0x0001be81) dialer_ne_pane_g1

0xc65d,	// (0x0001be89) dialer_ne_pane_t1_ParamLimits

0xc65d,	// (0x0001be89) dialer_ne_pane_t1

0x4c6e,	// (0x0001449a) dialer_ne_pane_t2_ParamLimits

0x4c6e,	// (0x0001449a) dialer_ne_pane_t2

0x4c98,	// (0x000144c4) dialer_ne_pane_t3_ParamLimits

0x4c98,	// (0x000144c4) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0001efe9) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0001efe9) dialer_ne_pane_t

0x4cc8,	// (0x000144f4) dialer_ne_pane_t3_copy1_ParamLimits

0x4cc8,	// (0x000144f4) dialer_ne_pane_t3_copy1

0x4cf7,	// (0x00014523) cell_dialer_keypad_pane_ParamLimits

0x4cf7,	// (0x00014523) cell_dialer_keypad_pane

0x4d0e,	// (0x0001453a) cell_dialer_command_1_pane_ParamLimits

0x4d0e,	// (0x0001453a) cell_dialer_command_1_pane

0x4d24,	// (0x00014550) cell_dialer_command_2_pane_ParamLimits

0x4d24,	// (0x00014550) cell_dialer_command_2_pane

0xc66f,	// (0x0001be9b) bg_button_pane_cp02_ParamLimits

0xc66f,	// (0x0001be9b) bg_button_pane_cp02

0x4d33,	// (0x0001455f) cell_dialer_keypad_pane_g1_ParamLimits

0x4d33,	// (0x0001455f) cell_dialer_keypad_pane_g1

0xc66f,	// (0x0001be9b) bg_button_pane_cp03_ParamLimits

0xc66f,	// (0x0001be9b) bg_button_pane_cp03

0x4d48,	// (0x00014574) cell_dialer_command_1_pane_g1_ParamLimits

0x4d48,	// (0x00014574) cell_dialer_command_1_pane_g1

0xc67b,	// (0x0001bea7) bg_button_pane_cp04

0x4d5c,	// (0x00014588) cell_dialer_command_2_pane_g1

0x9f1c,	// (0x00019748) bg_button_pane_cp06

0xc683,	// (0x0001beaf) dialer_ne_clear_pane_g1

0x2603,	// (0x00011e2f) navi_pane_g2

0x2631,	// (0x00011e5d) navi_pane_g3

0x0002,

0xf3e5,	// (0x0001ec11) navi_pane_g

0x265c,	// (0x00011e88) navi_pane_mv_g2

0x2683,	// (0x00011eaf) navi_pane_mv_g5

0x268b,	// (0x00011eb7) navi_pane_mv_t1

0x9cf0,	// (0x0001951c) main_clock2_pane

0x4da7,	// (0x000145d3) main_clock2_list_pane_ParamLimits

0x4da7,	// (0x000145d3) main_clock2_list_pane

0x4ddf,	// (0x0001460b) main_clock2_pane_t1_ParamLimits

0x4ddf,	// (0x0001460b) main_clock2_pane_t1

0x4e1b,	// (0x00014647) main_clock2_pane_t2_ParamLimits

0x4e1b,	// (0x00014647) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0001eff5) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0001eff5) main_clock2_pane_t

0x4ebb,	// (0x000146e7) popup_clock_analogue_window_cp03_ParamLimits

0x4ebb,	// (0x000146e7) popup_clock_analogue_window_cp03

0x4ee2,	// (0x0001470e) popup_clock_digital_window_cp02_ParamLimits

0x4ee2,	// (0x0001470e) popup_clock_digital_window_cp02

0x4f5b,	// (0x00014787) main_clock2_list_single_pane_ParamLimits

0x4f5b,	// (0x00014787) main_clock2_list_single_pane

0x9f1c,	// (0x00019748) list_highlight_pane_cp05

0xc6bf,	// (0x0001beeb) main_clock2_list_single_pane_t1

0x111b,	// (0x00010947) popup_toolbar_window_cp04_ParamLimits

0x4327,	// (0x00013b53) camera2_autofocus_pane_g2_ParamLimits

0x4327,	// (0x00013b53) camera2_autofocus_pane_g2

0x4333,	// (0x00013b5f) camera2_autofocus_pane_g3_ParamLimits

0x4333,	// (0x00013b5f) camera2_autofocus_pane_g3

0x433f,	// (0x00013b6b) camera2_autofocus_pane_g4_ParamLimits

0x433f,	// (0x00013b6b) camera2_autofocus_pane_g4

0x434b,	// (0x00013b77) camera2_autofocus_pane_g5_ParamLimits

0x434b,	// (0x00013b77) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0001ef39) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0001ef39) camera2_autofocus_pane_g

0x4584,	// (0x00013db0) camera2_autofocus_pane_cp_g2

0x458c,	// (0x00013db8) camera2_autofocus_pane_cp_g3

0x4594,	// (0x00013dc0) camera2_autofocus_pane_cp_g4

0x459c,	// (0x00013dc8) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0001ef9f) camera2_autofocus_pane_cp_g

0x4c4e,	// (0x0001447a) popup_dialer_spcha_window

0x952c,	// (0x00018d58) bg_popup_sub_pane_cp07

0xc6cd,	// (0x0001bef9) list_spcha_pane

0xc6d5,	// (0x0001bf01) list_single_spcha_pane_ParamLimits

0xc6d5,	// (0x0001bf01) list_single_spcha_pane

0x952c,	// (0x00018d58) list_highlight_pane_cp06

0xc6e6,	// (0x0001bf12) list_single_spcha_pane_t1

0xb7f3,	// (0x0001b01f) popup_call2_audio_out_window_g4_ParamLimits

0xb7f3,	// (0x0001b01f) popup_call2_audio_out_window_g4

0x952c,	// (0x00018d58) main_imed2_pane

0xbde6,	// (0x0001b612) popup_imed_adjust2_window

0x36d9,	// (0x00012f05) popup_imed_trans_window_ParamLimits

0x36d9,	// (0x00012f05) popup_imed_trans_window

0xc0ff,	// (0x0001b92b) popup_blid_sat_info2_window_t1

0xc10d,	// (0x0001b939) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0001eece) popup_blid_sat_info2_window_t

0x5011,	// (0x0001483d) aid_size_cell_colour_35

0x5031,	// (0x0001485d) aid_size_cell_colour_112

0x5051,	// (0x0001487d) aid_size_cell_effect

0xbdba,	// (0x0001b5e6) bg_tb_trans_pane_cp02

0xa3ea,	// (0x00019c16) heading_imed_pane

0x5071,	// (0x0001489d) listscroll_imed_pane

0xc6f4,	// (0x0001bf20) heading_imed_pane_g1

0xc6fc,	// (0x0001bf28) heading_imed_pane_t1

0xc70a,	// (0x0001bf36) grid_imed_colour_35_pane_ParamLimits

0xc70a,	// (0x0001bf36) grid_imed_colour_35_pane

0x507d,	// (0x000148a9) grid_imed_effect_pane

0xc726,	// (0x0001bf52) list_imed_aspect_pane

0x5092,	// (0x000148be) scroll_pane_cp027_ParamLimits

0x5092,	// (0x000148be) scroll_pane_cp027

0x50a3,	// (0x000148cf) cell_imed_effect_pane_ParamLimits

0x50a3,	// (0x000148cf) cell_imed_effect_pane

0xc72e,	// (0x0001bf5a) cell_imed_colour_pane_ParamLimits

0xc72e,	// (0x0001bf5a) cell_imed_colour_pane

0xc778,	// (0x0001bfa4) cell_imed_colour_pane_g1_ParamLimits

0xc778,	// (0x0001bfa4) cell_imed_colour_pane_g1

0xc789,	// (0x0001bfb5) hgihlgiht_grid_pane_cp016_ParamLimits

0xc789,	// (0x0001bfb5) hgihlgiht_grid_pane_cp016

0x50ce,	// (0x000148fa) cell_imed_effect_pane_g1

0x50d6,	// (0x00014902) grid_highlight_pane_cp017

0xc79a,	// (0x0001bfc6) list_imed_single_pane_ParamLimits

0xc79a,	// (0x0001bfc6) list_imed_single_pane

0x952c,	// (0x00018d58) list_highlight_pane_cp07

0xc7ae,	// (0x0001bfda) list_imed_aspect_pane_comp1_t1

0xbdba,	// (0x0001b5e6) bg_tb_trans_pane_cp05

0xc7d0,	// (0x0001bffc) popup_imed_adjust2_window_g1

0xc7f7,	// (0x0001c023) popup_imed_adjust2_window_t1

0xc80f,	// (0x0001c03b) slider_imed_adjust_pane

0xc823,	// (0x0001c04f) slider_imed_adjust_pane_g1

0xc833,	// (0x0001c05f) slider_imed_adjust_pane_g2

0xc843,	// (0x0001c06f) slider_imed_adjust_pane_g3

0xc854,	// (0x0001c080) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0001f012) slider_imed_adjust_pane_g

0x50df,	// (0x0001490b) aid_size_cell_clipart2

0x50eb,	// (0x00014917) grid_imed_clipart_pane

0xc865,	// (0x0001c091) scroll_pane_cp031

0x50f5,	// (0x00014921) cell_imed_clipart_pane_ParamLimits

0x50f5,	// (0x00014921) cell_imed_clipart_pane

0x5112,	// (0x0001493e) cell_imed_clipart_pane_g1

0x952c,	// (0x00018d58) grid_highlight_pane_cp014

0x4dbc,	// (0x000145e8) main_clock2_pane_g1_ParamLimits

0x4dbc,	// (0x000145e8) main_clock2_pane_g1

0x4f02,	// (0x0001472e) aid_call2_pane_cp10

0x4f14,	// (0x00014740) aid_call_pane_cp10

0xa82e,	// (0x0001a05a) popup_clock_analogue_window_cp10_g1

0xa82e,	// (0x0001a05a) popup_clock_analogue_window_cp10_g2

0x4f26,	// (0x00014752) popup_clock_analogue_window_cp10_g3

0x4f26,	// (0x00014752) popup_clock_analogue_window_cp10_g4

0xa82e,	// (0x0001a05a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0001f000) popup_clock_analogue_window_cp10_g

0x4f3c,	// (0x00014768) popup_clock_analogue_window_cp10_t1

0x4f6d,	// (0x00014799) clock_digital_number_pane_cp10_ParamLimits

0x4f6d,	// (0x00014799) clock_digital_number_pane_cp10

0x4f87,	// (0x000147b3) clock_digital_number_pane_cp11_ParamLimits

0x4f87,	// (0x000147b3) clock_digital_number_pane_cp11

0x4fa1,	// (0x000147cd) clock_digital_number_pane_cp12_ParamLimits

0x4fa1,	// (0x000147cd) clock_digital_number_pane_cp12

0x4fbb,	// (0x000147e7) clock_digital_number_pane_cp13_ParamLimits

0x4fbb,	// (0x000147e7) clock_digital_number_pane_cp13

0x4fd5,	// (0x00014801) clock_digital_separator_pane_cp10_ParamLimits

0x4fd5,	// (0x00014801) clock_digital_separator_pane_cp10

0x4fef,	// (0x0001481b) popup_clock_digital_window_cp02_t1_ParamLimits

0x4fef,	// (0x0001481b) popup_clock_digital_window_cp02_t1

0x9c01,	// (0x0001942d) clock_digital_number_pane_cp10_g1

0x9c01,	// (0x0001942d) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0001f01b) clock_digital_number_pane_cp10_g

0x9c01,	// (0x0001942d) clock_digital_separator_pane_cp10_g1

0x9c01,	// (0x0001942d) clock_digital_separator_pane_g2_cp10

0xa8c9,	// (0x0001a0f5) navi_pane_vded_g4

0xa8d2,	// (0x0001a0fe) navi_pane_vded_g5

0xa8db,	// (0x0001a107) navi_pane_vded_t1

0x952c,	// (0x00018d58) main_vded_pane

0x511b,	// (0x00014947) main_vded_pane_g1

0x5127,	// (0x00014953) main_vded_pane_g2

0x5133,	// (0x0001495f) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0001f020) main_vded_pane_g

0x513f,	// (0x0001496b) main_vded_pane_t1

0x514d,	// (0x00014979) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0001f027) main_vded_pane_t

0x515b,	// (0x00014987) vded_slider_pane

0x5165,	// (0x00014991) vded_video_pane

0xc86d,	// (0x0001c099) vded_video_pane_g1

0x516f,	// (0x0001499b) vded_video_pane_g2

0xc2c7,	// (0x0001baf3) vded_video_pane_g3

0x0002,

0xf800,	// (0x0001f02c) vded_video_pane_g

0xc877,	// (0x0001c0a3) vded_slider_pane_g1

0xbfd0,	// (0x0001b7fc) vded_slider_pane_g2

0xc880,	// (0x0001c0ac) vded_slider_pane_g3

0xc889,	// (0x0001c0b5) vded_slider_pane_g4

0xc892,	// (0x0001c0be) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0001f033) vded_slider_pane_g

0x4b2d,	// (0x00014359) mup3_rocker_pane_ParamLimits

0x4b2d,	// (0x00014359) mup3_rocker_pane

0x5178,	// (0x000149a4) mup3_control_keys_pane_g1

0x5180,	// (0x000149ac) mup3_control_keys_pane_g2

0x5188,	// (0x000149b4) mup3_control_keys_pane_g3

0x5190,	// (0x000149bc) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0001f03e) mup3_control_keys_pane_g

0xfdf3,	// (0x0000f61f) popup_toolbar2_fixed_window_cp01_ParamLimits

0xfdf3,	// (0x0000f61f) popup_toolbar2_fixed_window_cp01

0x4b63,	// (0x0001438f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4b63,	// (0x0001438f) popup_toolbar2_fixed_window_cp02

0xb132,	// (0x0001a95e) popup_call2_audio_second_window_t4_ParamLimits

0xb132,	// (0x0001a95e) popup_call2_audio_second_window_t4

0xb660,	// (0x0001ae8c) popup_call2_audio_first_window_t6_ParamLimits

0xb660,	// (0x0001ae8c) popup_call2_audio_first_window_t6

0xb8f6,	// (0x0001b122) popup_call2_audio_out_window_t6_ParamLimits

0xb8f6,	// (0x0001b122) popup_call2_audio_out_window_t6

0x952c,	// (0x00018d58) main_vitu_pane

0x51a0,	// (0x000149cc) aid_size_cell_itu_ParamLimits

0x51a0,	// (0x000149cc) aid_size_cell_itu

0x958d,	// (0x00018db9) bg_popup_window_pane_cp08_ParamLimits

0x958d,	// (0x00018db9) bg_popup_window_pane_cp08

0x51b6,	// (0x000149e2) field_vitu_entry_pane_ParamLimits

0x51b6,	// (0x000149e2) field_vitu_entry_pane

0x51cd,	// (0x000149f9) grid_vitu_function_pane_ParamLimits

0x51cd,	// (0x000149f9) grid_vitu_function_pane

0x51e8,	// (0x00014a14) grid_vitu_itu_pane_ParamLimits

0x51e8,	// (0x00014a14) grid_vitu_itu_pane

0x5206,	// (0x00014a32) cell_vitu_itu_pane_ParamLimits

0x5206,	// (0x00014a32) cell_vitu_itu_pane

0x522c,	// (0x00014a58) cell_vitu_function_pane_ParamLimits

0x522c,	// (0x00014a58) cell_vitu_function_pane

0x958d,	// (0x00018db9) bg_popup_sub_pane_cp08_ParamLimits

0x958d,	// (0x00018db9) bg_popup_sub_pane_cp08

0x5247,	// (0x00014a73) field_vitu_entry_pane_t1_ParamLimits

0x5247,	// (0x00014a73) field_vitu_entry_pane_t1

0xc8b3,	// (0x0001c0df) field_vitu_entry_pane_t2_ParamLimits

0xc8b3,	// (0x0001c0df) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0001f04c) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0001f04c) field_vitu_entry_pane_t

0xc8d0,	// (0x0001c0fc) bg_button_pane_cp05_ParamLimits

0xc8d0,	// (0x0001c0fc) bg_button_pane_cp05

0x5267,	// (0x00014a93) cell_vitu_itu_pane_g1

0x527f,	// (0x00014aab) cell_vitu_itu_pane_t1_ParamLimits

0x527f,	// (0x00014aab) cell_vitu_itu_pane_t1

0x5291,	// (0x00014abd) cell_vitu_itu_pane_t2_ParamLimits

0x5291,	// (0x00014abd) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0001f051) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0001f051) cell_vitu_itu_pane_t

0xc8de,	// (0x0001c10a) bg_button_pane_cp07

0x52c6,	// (0x00014af2) cell_vitu_function_pane_g1

0x9c90,	// (0x000194bc) main_calc_pane_g1

0xfc17,	// (0x0000f443) aid_visual_content_pane

0x952c,	// (0x00018d58) main_vradio_pane

0x52cf,	// (0x00014afb) main_vradio_pane_g1_ParamLimits

0x52cf,	// (0x00014afb) main_vradio_pane_g1

0xc8e8,	// (0x0001c114) main_vradio_pane_g2_ParamLimits

0xc8e8,	// (0x0001c114) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0001f058) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0001f058) main_vradio_pane_g

0x52e6,	// (0x00014b12) main_vradio_pane_t1_ParamLimits

0x52e6,	// (0x00014b12) main_vradio_pane_t1

0x52fb,	// (0x00014b27) main_vradio_pane_t2_ParamLimits

0x52fb,	// (0x00014b27) main_vradio_pane_t2

0xc8f5,	// (0x0001c121) main_vradio_pane_t3_ParamLimits

0xc8f5,	// (0x0001c121) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0001f05d) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0001f05d) main_vradio_pane_t

0x5310,	// (0x00014b3c) vradio_rocker_control_pane_ParamLimits

0x5310,	// (0x00014b3c) vradio_rocker_control_pane

0x5322,	// (0x00014b4e) vradio_station_info_pane_ParamLimits

0x5322,	// (0x00014b4e) vradio_station_info_pane

0xc909,	// (0x0001c135) vradio_frequency_info_pane_ParamLimits

0xc909,	// (0x0001c135) vradio_frequency_info_pane

0xc2c7,	// (0x0001baf3) vradio_station_info_pane_g1

0xc918,	// (0x0001c144) vradio_station_info_pane_t1_ParamLimits

0xc918,	// (0x0001c144) vradio_station_info_pane_t1

0xc93a,	// (0x0001c166) vradio_station_info_pane_t2_ParamLimits

0xc93a,	// (0x0001c166) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0001f064) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0001f064) vradio_station_info_pane_t

0xc94c,	// (0x0001c178) vradio_tuning_pane

0xc954,	// (0x0001c180) vradio_rocker_control_pane_g1

0xc95c,	// (0x0001c188) vradio_rocker_control_pane_g2

0xc964,	// (0x0001c190) vradio_rocker_control_pane_g3

0xc96c,	// (0x0001c198) vradio_rocker_control_pane_g4

0xc974,	// (0x0001c1a0) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0001f069) vradio_rocker_control_pane_g

0x5332,	// (0x00014b5e) vradio_frequency_info_pane_g1

0xc97c,	// (0x0001c1a8) vradio_frequency_info_pane_t1_ParamLimits

0xc97c,	// (0x0001c1a8) vradio_frequency_info_pane_t1

0x533c,	// (0x00014b68) vradio_tuning_pane_g1

0x5347,	// (0x00014b73) vradio_tuning_pane_t1

0x955a,	// (0x00018d86) area_side_right_pane_ParamLimits

0x955a,	// (0x00018d86) area_side_right_pane

0xbd75,	// (0x0001b5a1) status_small_pane_g1

0xbd7d,	// (0x0001b5a9) status_small_pane_g2

0xbd86,	// (0x0001b5b2) status_small_pane_g3

0xbd8f,	// (0x0001b5bb) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0001ee24) status_small_pane_g

0xbd98,	// (0x0001b5c4) status_small_pane_t1

0x952c,	// (0x00018d58) main_video3_pane

0xc990,	// (0x0001c1bc) cams_zoom_vslider_pane

0xc998,	// (0x0001c1c4) image3_wide_pane_ParamLimits

0xc998,	// (0x0001c1c4) image3_wide_pane

0xc9b2,	// (0x0001c1de) image3_wide_small_pane

0xc9be,	// (0x0001c1ea) main_video3_pane_g1_ParamLimits

0xc9be,	// (0x0001c1ea) main_video3_pane_g1

0xc9da,	// (0x0001c206) main_video3_pane_g2_ParamLimits

0xc9da,	// (0x0001c206) main_video3_pane_g2

0x0001,

0xf848,	// (0x0001f074) main_video3_pane_g_ParamLimits

0xf848,	// (0x0001f074) main_video3_pane_g

0xc9f6,	// (0x0001c222) main_video3_pane_t1_ParamLimits

0xc9f6,	// (0x0001c222) main_video3_pane_t1

0xca21,	// (0x0001c24d) main_video3_pane_t2_ParamLimits

0xca21,	// (0x0001c24d) main_video3_pane_t2

0xca4e,	// (0x0001c27a) main_video3_pane_t3_ParamLimits

0xca4e,	// (0x0001c27a) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0001f079) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0001f079) main_video3_pane_t

0xca7b,	// (0x0001c2a7) cams_zoom_vslider_pane_g1

0xca84,	// (0x0001c2b0) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0001f080) cams_zoom_vslider_pane_g

0xca8c,	// (0x0001c2b8) small_slider_vertical_pane

0xc2c7,	// (0x0001baf3) small_slider_vertical_pane_g1

0xc2c7,	// (0x0001baf3) small_slider_vertical_pane_g2

0xca94,	// (0x0001c2c0) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0001f085) small_slider_vertical_pane_g

0x952c,	// (0x00018d58) main_hwr_training_pane

0xca9d,	// (0x0001c2c9) hwr_training_instruct_pane_ParamLimits

0xca9d,	// (0x0001c2c9) hwr_training_instruct_pane

0x5356,	// (0x00014b82) hwr_training_navi_pane_ParamLimits

0x5356,	// (0x00014b82) hwr_training_navi_pane

0x5375,	// (0x00014ba1) hwr_training_write_pane_ParamLimits

0x5375,	// (0x00014ba1) hwr_training_write_pane

0x952c,	// (0x00018d58) bg_frame_shadow_pane

0xcad4,	// (0x0001c300) hwr_training_write_pane_g1

0xcadc,	// (0x0001c308) hwr_training_write_pane_g2

0xcae4,	// (0x0001c310) hwr_training_write_pane_g3

0xcaec,	// (0x0001c318) hwr_training_write_pane_g4

0xcaf4,	// (0x0001c320) hwr_training_write_pane_g5

0xcafc,	// (0x0001c328) hwr_training_write_pane_g6

0xcb04,	// (0x0001c330) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0001f08c) hwr_training_write_pane_g

0xcb0c,	// (0x0001c338) hwr_training_navi_pane_g1_ParamLimits

0xcb0c,	// (0x0001c338) hwr_training_navi_pane_g1

0xcb1e,	// (0x0001c34a) hwr_training_navi_pane_g2_ParamLimits

0xcb1e,	// (0x0001c34a) hwr_training_navi_pane_g2

0xcb30,	// (0x0001c35c) hwr_training_navi_pane_g3_ParamLimits

0xcb30,	// (0x0001c35c) hwr_training_navi_pane_g3

0xcb40,	// (0x0001c36c) hwr_training_navi_pane_g4_ParamLimits

0xcb40,	// (0x0001c36c) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0001f09b) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0001f09b) hwr_training_navi_pane_g

0xcb4d,	// (0x0001c379) hwr_training_navi_pane_t1

0x53bd,	// (0x00014be9) list_single_hwr_training_instruct_pane_ParamLimits

0x53bd,	// (0x00014be9) list_single_hwr_training_instruct_pane

0xcb5b,	// (0x0001c387) list_single_hwr_training_instruct_pane_t1

0xc207,	// (0x0001ba33) bg_frame_shadow_pane_g1

0xcb6a,	// (0x0001c396) bg_frame_shadow_pane_g2

0xcb72,	// (0x0001c39e) bg_frame_shadow_pane_g3

0xcb7a,	// (0x0001c3a6) bg_frame_shadow_pane_g4

0xcb82,	// (0x0001c3ae) bg_frame_shadow_pane_g5

0xcb8a,	// (0x0001c3b6) bg_frame_shadow_pane_g6

0xcb92,	// (0x0001c3be) bg_frame_shadow_pane_g7

0x9de9,	// (0x00019615) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0001f0a6) bg_frame_shadow_pane_g

0x952c,	// (0x00018d58) main_video_tele_dialer_pane

0x53d2,	// (0x00014bfe) aid_size_cell_video_keypad_ParamLimits

0x53d2,	// (0x00014bfe) aid_size_cell_video_keypad

0x53ec,	// (0x00014c18) grid_video_dialer_keypad_pane_ParamLimits

0x53ec,	// (0x00014c18) grid_video_dialer_keypad_pane

0x5438,	// (0x00014c64) video_down_pane_cp_ParamLimits

0x5438,	// (0x00014c64) video_down_pane_cp

0x5468,	// (0x00014c94) cell_video_dialer_keypad_pane_ParamLimits

0x5468,	// (0x00014c94) cell_video_dialer_keypad_pane

0xcb9a,	// (0x0001c3c6) bg_button_pane_cp08_ParamLimits

0xcb9a,	// (0x0001c3c6) bg_button_pane_cp08

0x548c,	// (0x00014cb8) cell_video_dialer_keypad_pane_g1_ParamLimits

0x548c,	// (0x00014cb8) cell_video_dialer_keypad_pane_g1

0x4b17,	// (0x00014343) mup3_rocker2_pane_ParamLimits

0x4b17,	// (0x00014343) mup3_rocker2_pane

0xc2c7,	// (0x0001baf3) mup3_rocker2_pane_g1

0x35a6,	// (0x00012dd2) main_dialer2_pane

0x952c,	// (0x00018d58) main_mp4_pane

0xcbae,	// (0x0001c3da) main_mp4_pane_g1_ParamLimits

0xcbae,	// (0x0001c3da) main_mp4_pane_g1

0xcbae,	// (0x0001c3da) main_mp4_pane_g2_ParamLimits

0xcbae,	// (0x0001c3da) main_mp4_pane_g2

0x54c7,	// (0x00014cf3) main_mp4_pane_g3_ParamLimits

0x54c7,	// (0x00014cf3) main_mp4_pane_g3

0xcbbc,	// (0x0001c3e8) main_mp4_pane_g4_ParamLimits

0xcbbc,	// (0x0001c3e8) main_mp4_pane_g4

0xcbe4,	// (0x0001c410) main_mp4_pane_g5_ParamLimits

0xcbe4,	// (0x0001c410) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0001f0c6) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0001f0c6) main_mp4_pane_g

0xcc34,	// (0x0001c460) main_mp4_pane_t1_ParamLimits

0xcc34,	// (0x0001c460) main_mp4_pane_t1

0xcc90,	// (0x0001c4bc) main_mp4_pane_t2_ParamLimits

0xcc90,	// (0x0001c4bc) main_mp4_pane_t2

0xcce2,	// (0x0001c50e) main_mp4_pane_t3_ParamLimits

0xcce2,	// (0x0001c50e) main_mp4_pane_t3

0xcd02,	// (0x0001c52e) main_mp4_pane_t4_ParamLimits

0xcd02,	// (0x0001c52e) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0001f0d3) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0001f0d3) main_mp4_pane_t

0xcd42,	// (0x0001c56e) mp4_progress_pane_ParamLimits

0xcd42,	// (0x0001c56e) mp4_progress_pane

0xcd8c,	// (0x0001c5b8) mp4_rocker_pane_ParamLimits

0xcd8c,	// (0x0001c5b8) mp4_rocker_pane

0xcdb6,	// (0x0001c5e2) mp4_progress_pane_t1

0xcdcf,	// (0x0001c5fb) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0001f0dc) mp4_progress_pane_t

0xcde8,	// (0x0001c614) mup_progress_pane_cp04

0xc2c7,	// (0x0001baf3) mp4_rocker_pane_g1

0x5511,	// (0x00014d3d) aid_cell_size_keypad2_ParamLimits

0x5511,	// (0x00014d3d) aid_cell_size_keypad2

0x5527,	// (0x00014d53) dialer2_ne_pane_ParamLimits

0x5527,	// (0x00014d53) dialer2_ne_pane

0x553f,	// (0x00014d6b) grid_dialer2_keypad_pane_ParamLimits

0x553f,	// (0x00014d6b) grid_dialer2_keypad_pane

0xc0a6,	// (0x0001b8d2) bg_popup_call_pane_cp07_ParamLimits

0xc0a6,	// (0x0001b8d2) bg_popup_call_pane_cp07

0x555b,	// (0x00014d87) dialer2_ne_pane_t1_ParamLimits

0x555b,	// (0x00014d87) dialer2_ne_pane_t1

0x5596,	// (0x00014dc2) cell_dialer2_keypad_pane_ParamLimits

0x5596,	// (0x00014dc2) cell_dialer2_keypad_pane

0xce06,	// (0x0001c632) bg_button_pane_pane_cp04_ParamLimits

0xce06,	// (0x0001c632) bg_button_pane_pane_cp04

0x55ba,	// (0x00014de6) cell_dialer2_keypad_pane_g1_ParamLimits

0x55ba,	// (0x00014de6) cell_dialer2_keypad_pane_g1

0x1002,	// (0x0001082e) aid_placing_vt_set_content_ParamLimits

0x1002,	// (0x0001082e) aid_placing_vt_set_content

0x1026,	// (0x00010852) aid_placing_vt_set_title_ParamLimits

0x1026,	// (0x00010852) aid_placing_vt_set_title

0x952c,	// (0x00018d58) main_image3_pane

0x5680,	// (0x00014eac) area_side_right_pane_cp01_ParamLimits

0x5680,	// (0x00014eac) area_side_right_pane_cp01

0xcbae,	// (0x0001c3da) main_image3_pane_g1_ParamLimits

0xcbae,	// (0x0001c3da) main_image3_pane_g1

0x5699,	// (0x00014ec5) main_image3_pane_g2_ParamLimits

0x5699,	// (0x00014ec5) main_image3_pane_g2

0x56c1,	// (0x00014eed) main_image3_pane_g3_ParamLimits

0x56c1,	// (0x00014eed) main_image3_pane_g3

0x56eb,	// (0x00014f17) main_image3_pane_g4_ParamLimits

0x56eb,	// (0x00014f17) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0001f0eb) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0001f0eb) main_image3_pane_g

0x5715,	// (0x00014f41) main_image3_pane_t1_ParamLimits

0x5715,	// (0x00014f41) main_image3_pane_t1

0x576d,	// (0x00014f99) main_image3_pane_t2_ParamLimits

0x576d,	// (0x00014f99) main_image3_pane_t2

0x57bf,	// (0x00014feb) main_image3_pane_t3_ParamLimits

0x57bf,	// (0x00014feb) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0001f0f4) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0001f0f4) main_image3_pane_t

0x958d,	// (0x00018db9) grid_sctrl_middle_pane_cp01_ParamLimits

0x958d,	// (0x00018db9) grid_sctrl_middle_pane_cp01

0x5847,	// (0x00015073) cell_sctrl_middle_pane_cp01_ParamLimits

0x5847,	// (0x00015073) cell_sctrl_middle_pane_cp01

0x5864,	// (0x00015090) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5864,	// (0x00015090) cell_sctrl_middle_pane_cp01_g1

0x952c,	// (0x00018d58) main_call4_pane

0x5879,	// (0x000150a5) aid_size_button_call4_ParamLimits

0x5879,	// (0x000150a5) aid_size_button_call4

0x58ac,	// (0x000150d8) call4_windows_pane_ParamLimits

0x58ac,	// (0x000150d8) call4_windows_pane

0x58ce,	// (0x000150fa) grid_call4_button_pane_ParamLimits

0x58ce,	// (0x000150fa) grid_call4_button_pane

0xce46,	// (0x0001c672) call4_windows_conf_pane

0x58f9,	// (0x00015125) popup_call4_audio_first_window_ParamLimits

0x58f9,	// (0x00015125) popup_call4_audio_first_window

0x5925,	// (0x00015151) popup_call4_audio_second_window_ParamLimits

0x5925,	// (0x00015151) popup_call4_audio_second_window

0xce83,	// (0x0001c6af) popup_call4_audio_wait_window_ParamLimits

0xce83,	// (0x0001c6af) popup_call4_audio_wait_window

0x593b,	// (0x00015167) cell_call4_button_pane_ParamLimits

0x593b,	// (0x00015167) cell_call4_button_pane

0x5962,	// (0x0001518e) bg_button_pane_cp09_ParamLimits

0x5962,	// (0x0001518e) bg_button_pane_cp09

0x596e,	// (0x0001519a) cell_call4_button_pane_g1_ParamLimits

0x596e,	// (0x0001519a) cell_call4_button_pane_g1

0x5994,	// (0x000151c0) cell_call4_button_pane_t1_ParamLimits

0x5994,	// (0x000151c0) cell_call4_button_pane_t1

0xcecb,	// (0x0001c6f7) popup_call4_audio_conf_window_ParamLimits

0xcecb,	// (0x0001c6f7) popup_call4_audio_conf_window

0x4b79,	// (0x000143a5) mup3_progress_pane_t1_ParamLimits

0x4b97,	// (0x000143c3) mup3_progress_pane_t2_ParamLimits

0xc57e,	// (0x0001bdaa) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0001efc8) mup3_progress_pane_t_ParamLimits

0xc59b,	// (0x0001bdc7) mup_progress_pane_cp03_ParamLimits

0x5198,	// (0x000149c4) mup3_control_keys_pane_g4_copy1

0xcd70,	// (0x0001c59c) mp4_rocker2_pane_ParamLimits

0xcd70,	// (0x0001c59c) mp4_rocker2_pane

0xcee5,	// (0x0001c711) mp4_rocker2_pane_g1

0xceed,	// (0x0001c719) mp4_rocker2_pane_g2

0xcef5,	// (0x0001c721) mp4_rocker2_pane_g3

0xcefd,	// (0x0001c729) mp4_rocker2_pane_g4

0xcf05,	// (0x0001c731) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0001f0fd) mp4_rocker2_pane_g

0x952c,	// (0x00018d58) main_camera4_pane

0x952c,	// (0x00018d58) main_video4_pane

0x5406,	// (0x00014c32) main_video_tele_dialer_pane_t1_ParamLimits

0x5406,	// (0x00014c32) main_video_tele_dialer_pane_t1

0x541f,	// (0x00014c4b) main_video_tele_dialer_pane_t2_ParamLimits

0x541f,	// (0x00014c4b) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0001f0b7) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0001f0b7) main_video_tele_dialer_pane_t

0x59d2,	// (0x000151fe) cam4_autofocus_pane_ParamLimits

0x59d2,	// (0x000151fe) cam4_autofocus_pane

0x59e8,	// (0x00015214) cam4_image_uncrop_pane_ParamLimits

0x59e8,	// (0x00015214) cam4_image_uncrop_pane

0x5a01,	// (0x0001522d) cam4_indicators_pane_ParamLimits

0x5a01,	// (0x0001522d) cam4_indicators_pane

0x5a30,	// (0x0001525c) main_camera4_pane_g1_ParamLimits

0x5a30,	// (0x0001525c) main_camera4_pane_g1

0x5a42,	// (0x0001526e) main_camera4_pane_g2_ParamLimits

0x5a42,	// (0x0001526e) main_camera4_pane_g2

0x5a55,	// (0x00015281) main_camera4_pane_g3_ParamLimits

0x5a55,	// (0x00015281) main_camera4_pane_g3

0x5a68,	// (0x00015294) main_camera4_pane_g4_ParamLimits

0x5a68,	// (0x00015294) main_camera4_pane_g4

0x5a7b,	// (0x000152a7) main_camera4_pane_g5_ParamLimits

0x5a7b,	// (0x000152a7) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0001f108) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0001f108) main_camera4_pane_g

0x5a9f,	// (0x000152cb) main_camera4_pane_t1_ParamLimits

0x5a9f,	// (0x000152cb) main_camera4_pane_t1

0xc4f7,	// (0x0001bd23) bg_tb_trans_pane_cp06

0xcf33,	// (0x0001c75f) cam4_indicators_pane_g1

0xcf44,	// (0x0001c770) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0001f123) cam4_indicators_pane_g

0xcf5c,	// (0x0001c788) cam4_indicators_pane_t1

0x5b03,	// (0x0001532f) main_video4_pane_g1_ParamLimits

0x5b03,	// (0x0001532f) main_video4_pane_g1

0x5b12,	// (0x0001533e) main_video4_pane_g2_ParamLimits

0x5b12,	// (0x0001533e) main_video4_pane_g2

0x5b21,	// (0x0001534d) main_video4_pane_g3_ParamLimits

0x5b21,	// (0x0001534d) main_video4_pane_g3

0x5b30,	// (0x0001535c) main_video4_pane_g4_ParamLimits

0x5b30,	// (0x0001535c) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0001f12a) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0001f12a) main_video4_pane_g

0x5b4e,	// (0x0001537a) vid4_indicators_pane_ParamLimits

0x5b4e,	// (0x0001537a) vid4_indicators_pane

0x5b7c,	// (0x000153a8) video4_image_uncrop_cif_pane_ParamLimits

0x5b7c,	// (0x000153a8) video4_image_uncrop_cif_pane

0x5b96,	// (0x000153c2) video4_image_uncrop_nhd_pane_ParamLimits

0x5b96,	// (0x000153c2) video4_image_uncrop_nhd_pane

0x59e8,	// (0x00015214) video4_image_uncrop_vga_pane_ParamLimits

0x59e8,	// (0x00015214) video4_image_uncrop_vga_pane

0x958d,	// (0x00018db9) bg_tb_trans_pane_cp07

0xcf8a,	// (0x0001c7b6) vid4_indicators_pane_g1

0xcfa0,	// (0x0001c7cc) vid4_indicators_pane_g2

0xcfb4,	// (0x0001c7e0) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0001f135) vid4_indicators_pane_g

0xcfe5,	// (0x0001c811) vid4_indicators_pane_t1

0x5bac,	// (0x000153d8) cam4_autofocus_pane_g1

0x5bb4,	// (0x000153e0) cam4_autofocus_pane_g2

0x5bbc,	// (0x000153e8) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0001f140) cam4_autofocus_pane_g

0x5bc4,	// (0x000153f0) cam4_autofocus_pane_g3_copy1

0x544c,	// (0x00014c78) video_down_pane_cp_t1

0x545a,	// (0x00014c86) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0001f0bc) video_down_pane_cp_t

0x958d,	// (0x00018db9) popup_vitu2_window_ParamLimits

0x958d,	// (0x00018db9) popup_vitu2_window

0x5bcc,	// (0x000153f8) aid_size_cell2_itu2_ParamLimits

0x5bcc,	// (0x000153f8) aid_size_cell2_itu2

0x5bf2,	// (0x0001541e) aid_size_cell_itu2_ParamLimits

0x5bf2,	// (0x0001541e) aid_size_cell_itu2

0x5c52,	// (0x0001547e) bg_popup_window_pane_cp09_ParamLimits

0x5c52,	// (0x0001547e) bg_popup_window_pane_cp09

0x5c60,	// (0x0001548c) field_vitu2_entry_pane_ParamLimits

0x5c60,	// (0x0001548c) field_vitu2_entry_pane

0x5c88,	// (0x000154b4) grid_vitu2_function_pane_ParamLimits

0x5c88,	// (0x000154b4) grid_vitu2_function_pane

0x5cd9,	// (0x00015505) grid_vitu2_itu_pane_ParamLimits

0x5cd9,	// (0x00015505) grid_vitu2_itu_pane

0x5d6d,	// (0x00015599) cell_vitu2_itu_pane_ParamLimits

0x5d6d,	// (0x00015599) cell_vitu2_itu_pane

0x5d93,	// (0x000155bf) cell_vitu2_function_pane_ParamLimits

0x5d93,	// (0x000155bf) cell_vitu2_function_pane

0xcffc,	// (0x0001c828) bg_popup_call_pane_cp08_ParamLimits

0xcffc,	// (0x0001c828) bg_popup_call_pane_cp08

0xd013,	// (0x0001c83f) field_vitu2_entry_pane_g1

0xd01f,	// (0x0001c84b) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0001f147) field_vitu2_entry_pane_g

0x5dd7,	// (0x00015603) field_vitu2_entry_pane_t1_ParamLimits

0x5dd7,	// (0x00015603) field_vitu2_entry_pane_t1

0xd039,	// (0x0001c865) field_vitu2_entry_pane_t2_ParamLimits

0xd039,	// (0x0001c865) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0001f14e) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0001f14e) field_vitu2_entry_pane_t

0x5e06,	// (0x00015632) bg_button_pane_cp010_ParamLimits

0x5e06,	// (0x00015632) bg_button_pane_cp010

0xd05e,	// (0x0001c88a) cell_vitu2_itu_pane_g1

0x5e22,	// (0x0001564e) cell_vitu2_itu_pane_t1_ParamLimits

0x5e22,	// (0x0001564e) cell_vitu2_itu_pane_t1

0x5e80,	// (0x000156ac) cell_vitu2_itu_pane_t2_ParamLimits

0x5e80,	// (0x000156ac) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0001f158) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0001f158) cell_vitu2_itu_pane_t

0x958d,	// (0x00018db9) bg_button_pane_cp011

0x5f6c,	// (0x00015798) cell_vitu2_function_pane_g1

0x952c,	// (0x00018d58) main_myfav_hc_pane

0x580f,	// (0x0001503b) popup_image3_note_pane_ParamLimits

0x580f,	// (0x0001503b) popup_image3_note_pane

0x582b,	// (0x00015057) popup_image3_tool_bar_pane_ParamLimits

0x582b,	// (0x00015057) popup_image3_tool_bar_pane

0x5f0e,	// (0x0001573a) cell_vitu2_itu_pane_t3_ParamLimits

0x5f0e,	// (0x0001573a) cell_vitu2_itu_pane_t3

0x952c,	// (0x00018d58) bg_popup_trans_pane

0xd070,	// (0x0001c89c) grid_image3_tool_bar_pane

0xd07a,	// (0x0001c8a6) bg_popup_trans_pane_g1

0xa183,	// (0x000199af) bg_popup_trans_pane_g2

0xd082,	// (0x0001c8ae) bg_popup_trans_pane_g3

0xd08a,	// (0x0001c8b6) bg_popup_trans_pane_g4

0xd092,	// (0x0001c8be) bg_popup_trans_pane_g5

0xd09a,	// (0x0001c8c6) bg_popup_trans_pane_g6

0xd0a2,	// (0x0001c8ce) bg_popup_trans_pane_g7

0xd0aa,	// (0x0001c8d6) bg_popup_trans_pane_g8

0xa163,	// (0x0001998f) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0001f15f) bg_popup_trans_pane_g

0xd0b2,	// (0x0001c8de) cell_image3_tool_bar_pane_ParamLimits

0xd0b2,	// (0x0001c8de) cell_image3_tool_bar_pane

0xc2c7,	// (0x0001baf3) cell_image3_tool_bar_pane_g1

0x952c,	// (0x00018d58) bg_popup_trans_pane_cp1

0xd0c8,	// (0x0001c8f4) popup_image3_note_pane_t1

0xd0d6,	// (0x0001c902) popup_image3_note_pane_t2

0xd0e4,	// (0x0001c910) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0001f172) popup_image3_note_pane_t

0xd0f4,	// (0x0001c920) popup_image3_note_pane_t3_copy1

0x5f80,	// (0x000157ac) bg_myfav_hc_instruction_pane_ParamLimits

0x5f80,	// (0x000157ac) bg_myfav_hc_instruction_pane

0x5f98,	// (0x000157c4) cell_myfav_contact_pane_ParamLimits

0x5f98,	// (0x000157c4) cell_myfav_contact_pane

0x5fb4,	// (0x000157e0) cell_myfav_contact_pane_cp1_ParamLimits

0x5fb4,	// (0x000157e0) cell_myfav_contact_pane_cp1

0x5fcc,	// (0x000157f8) cell_myfav_contact_pane_cp2_ParamLimits

0x5fcc,	// (0x000157f8) cell_myfav_contact_pane_cp2

0x5fe4,	// (0x00015810) cell_myfav_contact_pane_cp3_ParamLimits

0x5fe4,	// (0x00015810) cell_myfav_contact_pane_cp3

0x5ffb,	// (0x00015827) cell_myfav_contact_pane_cp4_ParamLimits

0x5ffb,	// (0x00015827) cell_myfav_contact_pane_cp4

0x6013,	// (0x0001583f) cell_myfav_contact_pane_cp5_ParamLimits

0x6013,	// (0x0001583f) cell_myfav_contact_pane_cp5

0x6027,	// (0x00015853) cell_myfav_contact_pane_cp6_ParamLimits

0x6027,	// (0x00015853) cell_myfav_contact_pane_cp6

0x603d,	// (0x00015869) cell_myfav_contact_pane_cp7_ParamLimits

0x603d,	// (0x00015869) cell_myfav_contact_pane_cp7

0xd102,	// (0x0001c92e) listscroll_gen_pane_cp05

0x6055,	// (0x00015881) main_myfav_hc_pane_g1_ParamLimits

0x6055,	// (0x00015881) main_myfav_hc_pane_g1

0x606f,	// (0x0001589b) main_myfav_hc_pane_g2_ParamLimits

0x606f,	// (0x0001589b) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0001f179) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0001f179) main_myfav_hc_pane_g

0x60a3,	// (0x000158cf) main_myfav_hc_pane_t1_ParamLimits

0x60a3,	// (0x000158cf) main_myfav_hc_pane_t1

0xd10b,	// (0x0001c937) main_myfav_hc_pane_t2_ParamLimits

0xd10b,	// (0x0001c937) main_myfav_hc_pane_t2

0xd11d,	// (0x0001c949) main_myfav_hc_pane_t3_ParamLimits

0xd11d,	// (0x0001c949) main_myfav_hc_pane_t3

0x60ba,	// (0x000158e6) main_myfav_hc_pane_t4_ParamLimits

0x60ba,	// (0x000158e6) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0001f180) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0001f180) main_myfav_hc_pane_t

0xc2c7,	// (0x0001baf3) bg_myfav_hc_instruction_pane_g1

0xd12f,	// (0x0001c95b) cell_myfav_contact_pane_g1_ParamLimits

0xd12f,	// (0x0001c95b) cell_myfav_contact_pane_g1

0xd12f,	// (0x0001c95b) cell_myfav_contact_pane_g2_ParamLimits

0xd12f,	// (0x0001c95b) cell_myfav_contact_pane_g2

0xd13b,	// (0x0001c967) cell_myfav_contact_pane_g3_ParamLimits

0xd13b,	// (0x0001c967) cell_myfav_contact_pane_g3

0xc568,	// (0x0001bd94) cell_myfav_contact_pane_g4_ParamLimits

0xc568,	// (0x0001bd94) cell_myfav_contact_pane_g4

0xd148,	// (0x0001c974) cell_myfav_contact_pane_g5_ParamLimits

0xd148,	// (0x0001c974) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0001f18b) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0001f18b) cell_myfav_contact_pane_g

0x6089,	// (0x000158b5) main_myfav_hc_pane_g3_ParamLimits

0x6089,	// (0x000158b5) main_myfav_hc_pane_g3

0xfd54,	// (0x0000f580) popup_adpt_find_window

0x60e4,	// (0x00015910) afind_page_pane_ParamLimits

0x60e4,	// (0x00015910) afind_page_pane

0x60f9,	// (0x00015925) aid_size_cell_afind_ParamLimits

0x60f9,	// (0x00015925) aid_size_cell_afind

0x6117,	// (0x00015943) bg_popup_sub_pane_cp09_ParamLimits

0x6117,	// (0x00015943) bg_popup_sub_pane_cp09

0x6124,	// (0x00015950) find_pane_cp01_ParamLimits

0x6124,	// (0x00015950) find_pane_cp01

0xd154,	// (0x0001c980) grid_afind_control_pane_ParamLimits

0xd154,	// (0x0001c980) grid_afind_control_pane

0x6131,	// (0x0001595d) grid_afind_pane_ParamLimits

0x6131,	// (0x0001595d) grid_afind_pane

0x6153,	// (0x0001597f) cell_afind_pane_ParamLimits

0x6153,	// (0x0001597f) cell_afind_pane

0xc2c7,	// (0x0001baf3) afind_page_pane_g1

0x61bc,	// (0x000159e8) afind_page_pane_g2

0x61c5,	// (0x000159f1) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0001f196) afind_page_pane_g

0x61ce,	// (0x000159fa) afind_page_pane_t1

0xd168,	// (0x0001c994) cell_afind_grid_control_pane_ParamLimits

0xd168,	// (0x0001c994) cell_afind_grid_control_pane

0xce06,	// (0x0001c632) bg_button_pane_cp69_ParamLimits

0xce06,	// (0x0001c632) bg_button_pane_cp69

0x61ee,	// (0x00015a1a) cell_afind_pane_g1_ParamLimits

0x61ee,	// (0x00015a1a) cell_afind_pane_g1

0x61fb,	// (0x00015a27) cell_afind_pane_t1_ParamLimits

0x61fb,	// (0x00015a27) cell_afind_pane_t1

0x9f78,	// (0x000197a4) bg_button_pane_cp72

0xd177,	// (0x0001c9a3) cell_afind_grid_control_pane_g1

0x3049,	// (0x00012875) aid_image_placing_area_ParamLimits

0x3049,	// (0x00012875) aid_image_placing_area

0xc89b,	// (0x0001c0c7) field_vitu_entry_pane_g1_ParamLimits

0xc89b,	// (0x0001c0c7) field_vitu_entry_pane_g1

0xc8a7,	// (0x0001c0d3) field_vitu_entry_pane_g2_ParamLimits

0xc8a7,	// (0x0001c0d3) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0001f047) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0001f047) field_vitu_entry_pane_g

0x5267,	// (0x00014a93) cell_vitu_itu_pane_g1_ParamLimits

0x52a9,	// (0x00014ad5) cell_vitu_itu_pane_t3_ParamLimits

0x52a9,	// (0x00014ad5) cell_vitu_itu_pane_t3

0xcdb6,	// (0x0001c5e2) mp4_progress_pane_t1_ParamLimits

0xcdcf,	// (0x0001c5fb) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0001f0dc) mp4_progress_pane_t_ParamLimits

0xcde8,	// (0x0001c614) mup_progress_pane_cp04_ParamLimits

0x60ce,	// (0x000158fa) main_myfav_hc_pane_t5_ParamLimits

0x60ce,	// (0x000158fa) main_myfav_hc_pane_t5

0x9552,	// (0x00018d7e) aid_zoom_text_primary

0xfd54,	// (0x0000f580) popup_adpt_find_window_ParamLimits

0x958d,	// (0x00018db9) main_cam_set_pane

0x5a1a,	// (0x00015246) cam4_zoom_pane_ParamLimits

0x5a1a,	// (0x00015246) cam4_zoom_pane

0x620d,	// (0x00015a39) main_cam_set_pane_g1_ParamLimits

0x620d,	// (0x00015a39) main_cam_set_pane_g1

0x621b,	// (0x00015a47) main_cam_set_pane_g2_ParamLimits

0x621b,	// (0x00015a47) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0001f19d) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0001f19d) main_cam_set_pane_g

0x623c,	// (0x00015a68) main_cam_set_pane_t1_ParamLimits

0x623c,	// (0x00015a68) main_cam_set_pane_t1

0x6257,	// (0x00015a83) main_cset_listscroll_pane_ParamLimits

0x6257,	// (0x00015a83) main_cset_listscroll_pane

0x627b,	// (0x00015aa7) main_cset_slider_pane_ParamLimits

0x627b,	// (0x00015aa7) main_cset_slider_pane

0xd188,	// (0x0001c9b4) main_cset_list_pane_ParamLimits

0xd188,	// (0x0001c9b4) main_cset_list_pane

0xd198,	// (0x0001c9c4) scroll_pane_cp028

0x62a5,	// (0x00015ad1) aid_area_touch_slider

0x62c1,	// (0x00015aed) cset_slider_pane

0x62eb,	// (0x00015b17) main_cset_slider_pane_g1

0x6300,	// (0x00015b2c) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0001f1a2) main_cset_slider_pane_g

0xd1d1,	// (0x0001c9fd) main_cset_slider_pane_t1

0x63c2,	// (0x00015bee) main_cset_slider_pane_t2

0x63dc,	// (0x00015c08) main_cset_slider_pane_t3

0x63f6,	// (0x00015c22) main_cset_slider_pane_t4

0x6410,	// (0x00015c3c) main_cset_slider_pane_t5

0x642e,	// (0x00015c5a) main_cset_slider_pane_t6

0x6443,	// (0x00015c6f) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0001f1c7) main_cset_slider_pane_t

0x654f,	// (0x00015d7b) cset_list_set_pane_ParamLimits

0x654f,	// (0x00015d7b) cset_list_set_pane

0x6563,	// (0x00015d8f) aid_position_infowindow_above

0x656b,	// (0x00015d97) aid_position_infowindow_below

0x6573,	// (0x00015d9f) cset_list_set_pane_g1_ParamLimits

0x6573,	// (0x00015d9f) cset_list_set_pane_g1

0x657f,	// (0x00015dab) cset_list_set_pane_g3_ParamLimits

0x657f,	// (0x00015dab) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0001f1e6) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0001f1e6) cset_list_set_pane_g

0x658e,	// (0x00015dba) cset_list_set_pane_t1_ParamLimits

0x658e,	// (0x00015dba) cset_list_set_pane_t1

0x958d,	// (0x00018db9) list_highlight_pane_cp021_ParamLimits

0x958d,	// (0x00018db9) list_highlight_pane_cp021

0xaa49,	// (0x0001a275) cset_slider_pane_g1

0xaa5b,	// (0x0001a287) cset_slider_pane_g2

0xaa52,	// (0x0001a27e) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0001f1eb) cset_slider_pane_g

0xd271,	// (0x0001ca9d) aid_area_touch_cam4_zoom

0xd279,	// (0x0001caa5) cam4_zoom_cont_pane

0xd281,	// (0x0001caad) cam4_zoom_pane_g1

0xd289,	// (0x0001cab5) cam4_zoom_pane_g2

0x65a3,	// (0x00015dcf) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0001f1f2) cam4_zoom_pane_g

0xd291,	// (0x0001cabd) cam4_zoom_cont_pane_g1

0xd29a,	// (0x0001cac6) cam4_zoom_cont_pane_g2

0xd2a3,	// (0x0001cacf) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0001f1f9) cam4_zoom_cont_pane_g

0x5897,	// (0x000150c3) call4_image_pane_ParamLimits

0x5897,	// (0x000150c3) call4_image_pane

0xce46,	// (0x0001c672) call4_windows_conf_pane_ParamLimits

0xce61,	// (0x0001c68d) popup_call4_audio_in_window_ParamLimits

0xce61,	// (0x0001c68d) popup_call4_audio_in_window

0x952c,	// (0x00018d58) bg_popup_call2_act_pane_cp02

0xcec3,	// (0x0001c6ef) call4_list_conf_pane

0xc2c7,	// (0x0001baf3) call4_image_pane_g1

0xc2c7,	// (0x0001baf3) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0001ef08) call4_image_pane_g

0xd2ac,	// (0x0001cad8) list_single_graphic_popup_conf4_pane_ParamLimits

0xd2ac,	// (0x0001cad8) list_single_graphic_popup_conf4_pane

0x952c,	// (0x00018d58) list_highlight_pane_cp022

0xd2c1,	// (0x0001caed) list_single_graphic_popup_conf4_pane_g1

0xa72b,	// (0x00019f57) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0001f200) list_single_graphic_popup_conf4_pane_g

0xd2c9,	// (0x0001caf5) list_single_graphic_popup_conf4_pane_t1

0x113d,	// (0x00010969) popup_vtel_slider_window_ParamLimits

0x113d,	// (0x00010969) popup_vtel_slider_window

0xcdf4,	// (0x0001c620) dialer2_ne_pane_t2_ParamLimits

0xcdf4,	// (0x0001c620) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0001f0e1) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0001f0e1) dialer2_ne_pane_t

0xc0a6,	// (0x0001b8d2) bg_popup_sub_pane_cp010_ParamLimits

0xc0a6,	// (0x0001b8d2) bg_popup_sub_pane_cp010

0x65ab,	// (0x00015dd7) popup_vtel_slider_window_g1_ParamLimits

0x65ab,	// (0x00015dd7) popup_vtel_slider_window_g1

0x65be,	// (0x00015dea) popup_vtel_slider_window_g2_ParamLimits

0x65be,	// (0x00015dea) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0001f205) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0001f205) popup_vtel_slider_window_g

0x6614,	// (0x00015e40) vtel_slider_pane_ParamLimits

0x6614,	// (0x00015e40) vtel_slider_pane

0x6636,	// (0x00015e62) vtel_slider_pane_g1_ParamLimits

0x6636,	// (0x00015e62) vtel_slider_pane_g1

0x664a,	// (0x00015e76) vtel_slider_pane_g2_ParamLimits

0x664a,	// (0x00015e76) vtel_slider_pane_g2

0x6662,	// (0x00015e8e) vtel_slider_pane_g3_ParamLimits

0x6662,	// (0x00015e8e) vtel_slider_pane_g3

0x6636,	// (0x00015e62) vtel_slider_pane_g4_ParamLimits

0x6636,	// (0x00015e62) vtel_slider_pane_g4

0x6678,	// (0x00015ea4) vtel_slider_pane_g5_ParamLimits

0x6678,	// (0x00015ea4) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0001f20e) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0001f20e) vtel_slider_pane_g

0x958d,	// (0x00018db9) main_gallery2_pane

0x5c1e,	// (0x0001544a) aid_size_row_itut2_dropdow_list_ParamLimits

0x5c1e,	// (0x0001544a) aid_size_row_itut2_dropdow_list

0x5cb0,	// (0x000154dc) grid_vitu2_function_top_pane_ParamLimits

0x5cb0,	// (0x000154dc) grid_vitu2_function_top_pane

0x5d14,	// (0x00015540) popup_vitu2_dropdown_list_window_ParamLimits

0x5d14,	// (0x00015540) popup_vitu2_dropdown_list_window

0x5d41,	// (0x0001556d) popup_vitu2_match_list_window

0x668e,	// (0x00015eba) cell_vitu2_function_top_pane_ParamLimits

0x668e,	// (0x00015eba) cell_vitu2_function_top_pane

0x66ae,	// (0x00015eda) cell_vitu2_function_top_pane_cp01_ParamLimits

0x66ae,	// (0x00015eda) cell_vitu2_function_top_pane_cp01

0x66ca,	// (0x00015ef6) cell_vitu2_function_top_wide_pane_ParamLimits

0x66ca,	// (0x00015ef6) cell_vitu2_function_top_wide_pane

0x958d,	// (0x00018db9) bg_button_pane_cp012

0x66e6,	// (0x00015f12) cell_vitu2_function_top_pane_g1

0xd34b,	// (0x0001cb77) bg_button_pane_cp013_ParamLimits

0xd34b,	// (0x0001cb77) bg_button_pane_cp013

0x66fa,	// (0x00015f26) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x66fa,	// (0x00015f26) cell_vitu2_function_top_wide_pane_g1

0x958d,	// (0x00018db9) bg_popup_sub_pane_cp20

0x6712,	// (0x00015f3e) list_vitu2_match_list_pane

0xd07a,	// (0x0001c8a6) bg_popup_sub_pane_cp20_g1

0xd082,	// (0x0001c8ae) bg_popup_sub_pane_cp20_g2

0xa183,	// (0x000199af) bg_popup_sub_pane_cp20_g3

0xd08a,	// (0x0001c8b6) bg_popup_sub_pane_cp20_g4

0xa163,	// (0x0001998f) bg_popup_sub_pane_cp20_g5

0xd367,	// (0x0001cb93) bg_popup_sub_pane_cp20_g6

0xd09a,	// (0x0001c8c6) bg_popup_sub_pane_cp20_g7

0xd0a2,	// (0x0001c8ce) bg_popup_sub_pane_cp20_g8

0xd0aa,	// (0x0001c8d6) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0001f219) bg_popup_sub_pane_cp20_g

0xd36f,	// (0x0001cb9b) list_vitu2_match_list_item_pane_ParamLimits

0xd36f,	// (0x0001cb9b) list_vitu2_match_list_item_pane

0xd381,	// (0x0001cbad) list_vitu2_match_list_item_pane_t1

0x952c,	// (0x00018d58) bg_popup_sub_pane_cp21

0xa5e5,	// (0x00019e11) grid_vitu2_dropdown_list_pane

0x676e,	// (0x00015f9a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x676e,	// (0x00015f9a) cell_vitu2_dropdown_list_char_pane

0x6791,	// (0x00015fbd) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6791,	// (0x00015fbd) cell_vitu2_dropdown_list_ctrl_pane

0xd39b,	// (0x0001cbc7) cell_vitu2_dropdown_list_char_pane_g1

0xd3a4,	// (0x0001cbd0) cell_vitu2_dropdown_list_char_pane_g2

0xd3ad,	// (0x0001cbd9) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0001f236) cell_vitu2_dropdown_list_char_pane_g

0x67bf,	// (0x00015feb) cell_vitu2_dropdown_list_char_pane_t1

0x67cd,	// (0x00015ff9) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x67cd,	// (0x00015ff9) cell_vitu2_dropdown_list_ctrl_pane_g1

0x67dd,	// (0x00016009) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x67dd,	// (0x00016009) cell_vitu2_dropdown_list_ctrl_pane_g2

0x67ee,	// (0x0001601a) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x67ee,	// (0x0001601a) cell_vitu2_dropdown_list_ctrl_pane_g3

0x67fe,	// (0x0001602a) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x67fe,	// (0x0001602a) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc4f7,	// (0x0001bd23) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc4f7,	// (0x0001bd23) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0001f23d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0001f23d) cell_vitu2_dropdown_list_ctrl_pane_g

0x681a,	// (0x00016046) aid_size_cell_gallery2_ParamLimits

0x681a,	// (0x00016046) aid_size_cell_gallery2

0x6838,	// (0x00016064) grid_gallery2_pane_ParamLimits

0x6838,	// (0x00016064) grid_gallery2_pane

0x6852,	// (0x0001607e) scroll_pane_cp029_ParamLimits

0x6852,	// (0x0001607e) scroll_pane_cp029

0x685e,	// (0x0001608a) cell_gallery2_pane_ParamLimits

0x685e,	// (0x0001608a) cell_gallery2_pane

0xd3b6,	// (0x0001cbe2) cell_gallery2_pane_g2

0x68bf,	// (0x000160eb) cell_gallery2_pane_g3

0xd3be,	// (0x0001cbea) cell_gallery2_pane_g4

0xd3c6,	// (0x0001cbf2) cell_gallery2_pane_g5

0x9f1c,	// (0x00019748) grid_highlight_pane_cp10

0x5d41,	// (0x0001556d) popup_vitu2_match_list_window_ParamLimits

0x5d58,	// (0x00015584) popup_vitu2_query_window_ParamLimits

0x5d58,	// (0x00015584) popup_vitu2_query_window

0x952c,	// (0x00018d58) bg_vitu2_candi_button_pane

0xd39b,	// (0x0001cbc7) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd3a4,	// (0x0001cbd0) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd3ad,	// (0x0001cbd9) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x68c7,	// (0x000160f3) bg_button_pane_cp015

0x68db,	// (0x00016107) bg_button_pane_cp016

0x68ee,	// (0x0001611a) bg_button_pane_cp017

0xbdba,	// (0x0001b5e6) bg_popup_sub_pane_cp22

0xd3ce,	// (0x0001cbfa) popup_vitu2_query_window_g1

0x6933,	// (0x0001615f) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0001f248) popup_vitu2_query_window_g

0x6952,	// (0x0001617e) popup_vitu2_query_window_t1_ParamLimits

0x6952,	// (0x0001617e) popup_vitu2_query_window_t1

0x6987,	// (0x000161b3) popup_vitu2_query_window_t2_ParamLimits

0x6987,	// (0x000161b3) popup_vitu2_query_window_t2

0x6999,	// (0x000161c5) popup_vitu2_query_window_t3_ParamLimits

0x6999,	// (0x000161c5) popup_vitu2_query_window_t3

0x69c1,	// (0x000161ed) popup_vitu2_query_window_t4_ParamLimits

0x69c1,	// (0x000161ed) popup_vitu2_query_window_t4

0x69e2,	// (0x0001620e) popup_vitu2_query_window_t5_ParamLimits

0x69e2,	// (0x0001620e) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0001f24f) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0001f24f) popup_vitu2_query_window_t

0xd180,	// (0x0001c9ac) main_cset_text_pane

0x62a5,	// (0x00015ad1) aid_area_touch_slider_ParamLimits

0x62c1,	// (0x00015aed) cset_slider_pane_ParamLimits

0x62eb,	// (0x00015b17) main_cset_slider_pane_g1_ParamLimits

0x6300,	// (0x00015b2c) main_cset_slider_pane_g2_ParamLimits

0xd1a1,	// (0x0001c9cd) main_cset_slider_pane_g3_ParamLimits

0xd1a1,	// (0x0001c9cd) main_cset_slider_pane_g3

0x6315,	// (0x00015b41) main_cset_slider_pane_g4_ParamLimits

0x6315,	// (0x00015b41) main_cset_slider_pane_g4

0x6324,	// (0x00015b50) main_cset_slider_pane_g5_ParamLimits

0x6324,	// (0x00015b50) main_cset_slider_pane_g5

0x6332,	// (0x00015b5e) main_cset_slider_pane_g6_ParamLimits

0x6332,	// (0x00015b5e) main_cset_slider_pane_g6

0xf976,	// (0x0001f1a2) main_cset_slider_pane_g_ParamLimits

0xd1d1,	// (0x0001c9fd) main_cset_slider_pane_t1_ParamLimits

0x63c2,	// (0x00015bee) main_cset_slider_pane_t2_ParamLimits

0x63dc,	// (0x00015c08) main_cset_slider_pane_t3_ParamLimits

0x63f6,	// (0x00015c22) main_cset_slider_pane_t4_ParamLimits

0x6410,	// (0x00015c3c) main_cset_slider_pane_t5_ParamLimits

0x642e,	// (0x00015c5a) main_cset_slider_pane_t6_ParamLimits

0x6443,	// (0x00015c6f) main_cset_slider_pane_t7_ParamLimits

0x6471,	// (0x00015c9d) main_cset_slider_pane_t8_ParamLimits

0x6471,	// (0x00015c9d) main_cset_slider_pane_t8

0x6499,	// (0x00015cc5) main_cset_slider_pane_t9_ParamLimits

0x6499,	// (0x00015cc5) main_cset_slider_pane_t9

0x64c1,	// (0x00015ced) main_cset_slider_pane_t10_ParamLimits

0x64c1,	// (0x00015ced) main_cset_slider_pane_t10

0x64e9,	// (0x00015d15) main_cset_slider_pane_t11_ParamLimits

0x64e9,	// (0x00015d15) main_cset_slider_pane_t11

0x6513,	// (0x00015d3f) main_cset_slider_pane_t12_ParamLimits

0x6513,	// (0x00015d3f) main_cset_slider_pane_t12

0x6530,	// (0x00015d5c) main_cset_slider_pane_t13_ParamLimits

0x6530,	// (0x00015d5c) main_cset_slider_pane_t13

0xf99b,	// (0x0001f1c7) main_cset_slider_pane_t_ParamLimits

0x952c,	// (0x00018d58) bg_popup_sub_pane_cp011

0xd3da,	// (0x0001cc06) main_cset_text_pane_g1

0xd3e2,	// (0x0001cc0e) main_cset_text_pane_t1

0xd3f0,	// (0x0001cc1c) main_cset_text_pane_t2

0xd3fe,	// (0x0001cc2a) main_cset_text_pane_t3

0xd40c,	// (0x0001cc38) main_cset_text_pane_t4

0xd41a,	// (0x0001cc46) main_cset_text_pane_t5

0xd428,	// (0x0001cc54) main_cset_text_pane_t6

0xd436,	// (0x0001cc62) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0001f25e) main_cset_text_pane_t

0x952c,	// (0x00018d58) main_cam4_burst_pane

0x952c,	// (0x00018d58) main_cam5_pane

0x61dc,	// (0x00015a08) bg_button_pane_cp019

0x61e5,	// (0x00015a11) bg_button_pane_cp020

0xd1ad,	// (0x0001c9d9) main_cset_slider_pane_g7_ParamLimits

0xd1ad,	// (0x0001c9d9) main_cset_slider_pane_g7

0xd1b9,	// (0x0001c9e5) main_cset_slider_pane_g8_ParamLimits

0xd1b9,	// (0x0001c9e5) main_cset_slider_pane_g8

0x6346,	// (0x00015b72) main_cset_slider_pane_g9_ParamLimits

0x6346,	// (0x00015b72) main_cset_slider_pane_g9

0x6352,	// (0x00015b7e) main_cset_slider_pane_g10_ParamLimits

0x6352,	// (0x00015b7e) main_cset_slider_pane_g10

0x635e,	// (0x00015b8a) main_cset_slider_pane_g11_ParamLimits

0x635e,	// (0x00015b8a) main_cset_slider_pane_g11

0x636a,	// (0x00015b96) main_cset_slider_pane_g12_ParamLimits

0x636a,	// (0x00015b96) main_cset_slider_pane_g12

0x6376,	// (0x00015ba2) main_cset_slider_pane_g13_ParamLimits

0x6376,	// (0x00015ba2) main_cset_slider_pane_g13

0x6382,	// (0x00015bae) main_cset_slider_pane_g14_ParamLimits

0x6382,	// (0x00015bae) main_cset_slider_pane_g14

0x638e,	// (0x00015bba) main_cset_slider_pane_g15_ParamLimits

0x638e,	// (0x00015bba) main_cset_slider_pane_g15

0xd1ff,	// (0x0001ca2b) main_cset_slider_pane_t14_ParamLimits

0xd1ff,	// (0x0001ca2b) main_cset_slider_pane_t14

0xd238,	// (0x0001ca64) main_cset_slider_pane_t15_ParamLimits

0xd238,	// (0x0001ca64) main_cset_slider_pane_t15

0x6a59,	// (0x00016285) aid_cam4_burst_size_cell_ParamLimits

0x6a59,	// (0x00016285) aid_cam4_burst_size_cell

0x6a79,	// (0x000162a5) grid_cam4_burst_pane_ParamLimits

0x6a79,	// (0x000162a5) grid_cam4_burst_pane

0x6ab3,	// (0x000162df) linegrid_cam4_burst_pane_ParamLimits

0x6ab3,	// (0x000162df) linegrid_cam4_burst_pane

0xd444,	// (0x0001cc70) scroll_pane_cp30_ParamLimits

0xd444,	// (0x0001cc70) scroll_pane_cp30

0x6ad5,	// (0x00016301) cell_cam4_burst_pane_ParamLimits

0x6ad5,	// (0x00016301) cell_cam4_burst_pane

0xd450,	// (0x0001cc7c) linegrid_cam4_burst_pane_g1_ParamLimits

0xd450,	// (0x0001cc7c) linegrid_cam4_burst_pane_g1

0x6b2a,	// (0x00016356) linegrid_cam4_burst_pane_g2_ParamLimits

0x6b2a,	// (0x00016356) linegrid_cam4_burst_pane_g2

0xd45d,	// (0x0001cc89) linegrid_cam4_burst_pane_g3_ParamLimits

0xd45d,	// (0x0001cc89) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0001f26d) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0001f26d) linegrid_cam4_burst_pane_g

0x6b3b,	// (0x00016367) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6b3b,	// (0x00016367) linegrid_cam4_burst_pane_g3_copy1

0xd46a,	// (0x0001cc96) linegrid_cam4_burst_pane_g4_ParamLimits

0xd46a,	// (0x0001cc96) linegrid_cam4_burst_pane_g4

0x6b59,	// (0x00016385) linegrid_cam4_burst_pane_g5_ParamLimits

0x6b59,	// (0x00016385) linegrid_cam4_burst_pane_g5

0x6b6a,	// (0x00016396) linegrid_cam4_burst_pane_g6_ParamLimits

0x6b6a,	// (0x00016396) linegrid_cam4_burst_pane_g6

0xd477,	// (0x0001cca3) linegrid_cam4_burst_pane_g7_ParamLimits

0xd477,	// (0x0001cca3) linegrid_cam4_burst_pane_g7

0x6b81,	// (0x000163ad) cell_cam4_burst_pane_g1

0xd490,	// (0x0001ccbc) main_cam5_pane_t1_ParamLimits

0xd490,	// (0x0001ccbc) main_cam5_pane_t1

0xd4a2,	// (0x0001ccce) main_cam5_pane_t2_ParamLimits

0xd4a2,	// (0x0001ccce) main_cam5_pane_t2

0xd4b4,	// (0x0001cce0) main_cam5_pane_t3_ParamLimits

0xd4b4,	// (0x0001cce0) main_cam5_pane_t3

0xd4c6,	// (0x0001ccf2) main_cam5_pane_t4_ParamLimits

0xd4c6,	// (0x0001ccf2) main_cam5_pane_t4

0xd4de,	// (0x0001cd0a) main_cam5_pane_t5_ParamLimits

0xd4de,	// (0x0001cd0a) main_cam5_pane_t5

0xd4f2,	// (0x0001cd1e) main_cam5_pane_t6_ParamLimits

0xd4f2,	// (0x0001cd1e) main_cam5_pane_t6

0xd506,	// (0x0001cd32) main_cam5_pane_t7_ParamLimits

0xd506,	// (0x0001cd32) main_cam5_pane_t7

0xd518,	// (0x0001cd44) main_cam5_pane_t8_ParamLimits

0xd518,	// (0x0001cd44) main_cam5_pane_t8

0xd536,	// (0x0001cd62) main_cam5_pane_t9_ParamLimits

0xd536,	// (0x0001cd62) main_cam5_pane_t9

0xd548,	// (0x0001cd74) main_cam5_pane_t10_ParamLimits

0xd548,	// (0x0001cd74) main_cam5_pane_t10

0xd55a,	// (0x0001cd86) main_cam5_pane_t11_ParamLimits

0xd55a,	// (0x0001cd86) main_cam5_pane_t11

0xd56e,	// (0x0001cd9a) main_cam5_pane_t12_ParamLimits

0xd56e,	// (0x0001cd9a) main_cam5_pane_t12

0xd585,	// (0x0001cdb1) main_cam5_pane_t13_ParamLimits

0xd585,	// (0x0001cdb1) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0001f279) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0001f279) main_cam5_pane_t

0xfdd7,	// (0x0000f603) popup_scut_keymap_window_ParamLimits

0xfdd7,	// (0x0000f603) popup_scut_keymap_window

0x6b94,	// (0x000163c0) aid_size_cell_brow_shortcut

0x9f1c,	// (0x00019748) bg_popup_window_pane_cp010

0x6ba0,	// (0x000163cc) grid_scut_pane

0x6bac,	// (0x000163d8) cell_scut_pane_ParamLimits

0x6bac,	// (0x000163d8) cell_scut_pane

0x6bc5,	// (0x000163f1) cell_scut_pane_g1

0xd5a8,	// (0x0001cdd4) cell_scut_pane_t1

0xd5b7,	// (0x0001cde3) cell_scut_pane_t2

0x6bce,	// (0x000163fa) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0001f294) cell_scut_pane_t

0x4730,	// (0x00013f5c) main_mup3_pane_g8_ParamLimits

0x4730,	// (0x00013f5c) main_mup3_pane_g8

0x5c3a,	// (0x00015466) area_vitu2_query_pane_ParamLimits

0x5c3a,	// (0x00015466) area_vitu2_query_pane

0x6901,	// (0x0001612d) input_focus_pane_cp08

0xd5c6,	// (0x0001cdf2) area_vitu2_query_pane_g1

0x6bdc,	// (0x00016408) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0001f29b) area_vitu2_query_pane_g

0x6bed,	// (0x00016419) area_vitu2_query_pane_t1_ParamLimits

0x6bed,	// (0x00016419) area_vitu2_query_pane_t1

0x6c01,	// (0x0001642d) area_vitu2_query_pane_t2_ParamLimits

0x6c01,	// (0x0001642d) area_vitu2_query_pane_t2

0x6c15,	// (0x00016441) area_vitu2_query_pane_t3_ParamLimits

0x6c15,	// (0x00016441) area_vitu2_query_pane_t3

0xd5d2,	// (0x0001cdfe) area_vitu2_query_pane_t4_ParamLimits

0xd5d2,	// (0x0001cdfe) area_vitu2_query_pane_t4

0xd5fa,	// (0x0001ce26) area_vitu2_query_pane_t5_ParamLimits

0xd5fa,	// (0x0001ce26) area_vitu2_query_pane_t5

0xd622,	// (0x0001ce4e) area_vitu2_query_pane_t6_ParamLimits

0xd622,	// (0x0001ce4e) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0001f2a0) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0001f2a0) area_vitu2_query_pane_t

0x6c3d,	// (0x00016469) bg_button_pane_cp018

0x6c4b,	// (0x00016477) bg_button_pane_cp021

0x6c57,	// (0x00016483) bg_button_pane_cp022

0x6c68,	// (0x00016494) input_focus_pane_cp09

0x259b,	// (0x00011dc7) aid_size_touch_mv_arrow_left

0x25c4,	// (0x00011df0) aid_size_touch_mv_arrow_right

0x63a6,	// (0x00015bd2) main_cset_slider_pane_g16_ParamLimits

0x63a6,	// (0x00015bd2) main_cset_slider_pane_g16

0x63b4,	// (0x00015be0) main_cset_slider_pane_g17_ParamLimits

0x63b4,	// (0x00015be0) main_cset_slider_pane_g17

0x6b81,	// (0x000163ad) cell_cam4_burst_pane_g1_ParamLimits

0x952c,	// (0x00018d58) compa_mode_pane

0x65ce,	// (0x00015dfa) popup_vtel_slider_window_g3_ParamLimits

0x65ce,	// (0x00015dfa) popup_vtel_slider_window_g3

0x65e5,	// (0x00015e11) popup_vtel_slider_window_g4_ParamLimits

0x65e5,	// (0x00015e11) popup_vtel_slider_window_g4

0x65fc,	// (0x00015e28) popup_vtel_slider_window_t1_ParamLimits

0x65fc,	// (0x00015e28) popup_vtel_slider_window_t1

0x952c,	// (0x00018d58) main_cl_pane

0xbde6,	// (0x0001b612) popup_imed_adjust2_window_ParamLimits

0xbdba,	// (0x0001b5e6) bg_tb_trans_pane_cp05_ParamLimits

0xc7d0,	// (0x0001bffc) popup_imed_adjust2_window_g1_ParamLimits

0xc7df,	// (0x0001c00b) popup_imed_adjust2_window_g2_ParamLimits

0xc7df,	// (0x0001c00b) popup_imed_adjust2_window_g2

0xc7eb,	// (0x0001c017) popup_imed_adjust2_window_g3_ParamLimits

0xc7eb,	// (0x0001c017) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0001f00b) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0001f00b) popup_imed_adjust2_window_g

0xc7f7,	// (0x0001c023) popup_imed_adjust2_window_t1_ParamLimits

0xc80f,	// (0x0001c03b) slider_imed_adjust_pane_ParamLimits

0xc823,	// (0x0001c04f) slider_imed_adjust_pane_g1_ParamLimits

0xc833,	// (0x0001c05f) slider_imed_adjust_pane_g2_ParamLimits

0xc843,	// (0x0001c06f) slider_imed_adjust_pane_g3_ParamLimits

0xc854,	// (0x0001c080) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0001f012) slider_imed_adjust_pane_g_ParamLimits

0x59ba,	// (0x000151e6) aid_touch_area_cam4_ParamLimits

0x59ba,	// (0x000151e6) aid_touch_area_cam4

0xcf0d,	// (0x0001c739) battery_pane_cp01

0x5a8c,	// (0x000152b8) main_camera4_pane_g6_ParamLimits

0x5a8c,	// (0x000152b8) main_camera4_pane_g6

0x5ab6,	// (0x000152e2) main_camera4_pane_t2_ParamLimits

0x5ab6,	// (0x000152e2) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0001f115) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0001f115) main_camera4_pane_t

0x5aeb,	// (0x00015317) aid_touch_area_vid4_ParamLimits

0x5aeb,	// (0x00015317) aid_touch_area_vid4

0x5b3f,	// (0x0001536b) main_video4_pane_g5_ParamLimits

0x5b3f,	// (0x0001536b) main_video4_pane_g5

0x5b64,	// (0x00015390) vid4_progress_pane_ParamLimits

0x5b64,	// (0x00015390) vid4_progress_pane

0xd1c5,	// (0x0001c9f1) main_cset_slider_pane_g18_ParamLimits

0xd1c5,	// (0x0001c9f1) main_cset_slider_pane_g18

0xd484,	// (0x0001ccb0) cell_cam4_burst_pane_g2_ParamLimits

0xd484,	// (0x0001ccb0) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0001f274) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0001f274) cell_cam4_burst_pane_g

0x9cf0,	// (0x0001951c) bg_cl_pane_ParamLimits

0x9cf0,	// (0x0001951c) bg_cl_pane

0x6c79,	// (0x000164a5) cl_header_pane_ParamLimits

0x6c79,	// (0x000164a5) cl_header_pane

0x6c8d,	// (0x000164b9) cl_listscroll_pane_ParamLimits

0x6c8d,	// (0x000164b9) cl_listscroll_pane

0xd66e,	// (0x0001ce9a) bg_cl_pane_g1

0xd676,	// (0x0001cea2) bg_cl_pane_g2

0xd67e,	// (0x0001ceaa) bg_cl_pane_g3

0xd686,	// (0x0001ceb2) bg_cl_pane_g4

0xd68e,	// (0x0001ceba) bg_cl_pane_g5

0xd696,	// (0x0001cec2) bg_cl_pane_g6

0xd69e,	// (0x0001ceca) bg_cl_pane_g7

0xd6a6,	// (0x0001ced2) bg_cl_pane_g8

0xd6ae,	// (0x0001ceda) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0001f2af) bg_cl_pane_g

0x6c9d,	// (0x000164c9) aid_height_cl_leading_ParamLimits

0x6c9d,	// (0x000164c9) aid_height_cl_leading

0x6ca9,	// (0x000164d5) aid_height_cl_text_ParamLimits

0x6ca9,	// (0x000164d5) aid_height_cl_text

0x958d,	// (0x00018db9) bg_cl_header_pane_ParamLimits

0x958d,	// (0x00018db9) bg_cl_header_pane

0x6cc8,	// (0x000164f4) cl_header_pane_g1_ParamLimits

0x6cc8,	// (0x000164f4) cl_header_pane_g1

0x6cde,	// (0x0001650a) cl_header_pane_t1_ParamLimits

0x6cde,	// (0x0001650a) cl_header_pane_t1

0xd6b6,	// (0x0001cee2) cl_list_pane

0xd198,	// (0x0001c9c4) hc_scroll_pane_cp01

0xa163,	// (0x0001998f) bg_cl_header_pane_g1

0xd07a,	// (0x0001c8a6) bg_cl_header_pane_g2

0xa183,	// (0x000199af) bg_cl_header_pane_g3

0xd08a,	// (0x0001c8b6) bg_cl_header_pane_g4

0xd082,	// (0x0001c8ae) bg_cl_header_pane_g5

0xd367,	// (0x0001cb93) bg_cl_header_pane_g6

0xd0a2,	// (0x0001c8ce) bg_cl_header_pane_g7

0xd0aa,	// (0x0001c8d6) bg_cl_header_pane_g8

0xd09a,	// (0x0001c8c6) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0001f2c2) bg_cl_header_pane_g

0x6cf7,	// (0x00016523) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6cf7,	// (0x00016523) hc_cl_list_double_graphic_heading_pane

0x6d0a,	// (0x00016536) hc_cl_list_single_graphic_pane_ParamLimits

0x6d0a,	// (0x00016536) hc_cl_list_single_graphic_pane

0x6d22,	// (0x0001654e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6d22,	// (0x0001654e) hc_cl_list_single_graphic_pane_g1

0x6d2e,	// (0x0001655a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6d2e,	// (0x0001655a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0001f2d5) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0001f2d5) hc_cl_list_single_graphic_pane_g

0x6d42,	// (0x0001656e) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6d42,	// (0x0001656e) hc_cl_list_single_graphic_pane_t1

0x6d22,	// (0x0001654e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6d22,	// (0x0001654e) hc_cl_list_double_graphic_heading_pane_g1

0x6d57,	// (0x00016583) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6d57,	// (0x00016583) hc_cl_list_double_graphic_heading_pane_g2

0x6d6b,	// (0x00016597) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6d6b,	// (0x00016597) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0001f2da) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0001f2da) hc_cl_list_double_graphic_heading_pane_g

0x6d7f,	// (0x000165ab) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6d7f,	// (0x000165ab) hc_cl_list_double_graphic_heading_pane_t1

0x6d94,	// (0x000165c0) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6d94,	// (0x000165c0) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0001f2e1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0001f2e1) hc_cl_list_double_graphic_heading_pane_t

0x6da9,	// (0x000165d5) vid4_progress_pane_g1

0x6dbb,	// (0x000165e7) vid4_progress_pane_g2

0xab1c,	// (0x0001a348) vid4_progress_pane_g3

0xd6c7,	// (0x0001cef3) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0001f2e6) vid4_progress_pane_g

0xd6e5,	// (0x0001cf11) vid4_progress_pane_t1

0xd6fa,	// (0x0001cf26) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0001f2f1) vid4_progress_pane_t

0xd725,	// (0x0001cf51) wait_bar_pane_cp07

0xc0b4,	// (0x0001b8e0) blid_firmament_pane_ParamLimits

0xc0f7,	// (0x0001b923) popup_blid_sat_info2_window_g1

0xc11b,	// (0x0001b947) popup_blid_sat_info2_window_t3

0xc129,	// (0x0001b955) popup_blid_sat_info2_window_t4

0xc137,	// (0x0001b963) popup_blid_sat_info2_window_t5

0xc145,	// (0x0001b971) popup_blid_sat_info2_window_t6

0xc155,	// (0x0001b981) popup_blid_sat_info2_window_t7

0xc163,	// (0x0001b98f) popup_blid_sat_info2_window_t8

0xc171,	// (0x0001b99d) popup_blid_sat_info2_window_t9

0xc17f,	// (0x0001b9ab) popup_blid_sat_info2_window_t10

0xc247,	// (0x0001ba73) aid_firma_cardinal_ParamLimits

0xc25b,	// (0x0001ba87) blid_firmament_pane_t1_ParamLimits

0xc272,	// (0x0001ba9e) blid_firmament_pane_t2_ParamLimits

0xc289,	// (0x0001bab5) blid_firmament_pane_t3_ParamLimits

0xc2a0,	// (0x0001bacc) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0001eeff) blid_firmament_pane_t_ParamLimits

0xc2b7,	// (0x0001bae3) blid_sat_info_pane_ParamLimits

0x958d,	// (0x00018db9) main_cam_set_pane_ParamLimits

0x5011,	// (0x0001483d) aid_size_cell_colour_35_ParamLimits

0x5031,	// (0x0001485d) aid_size_cell_colour_112_ParamLimits

0x5051,	// (0x0001487d) aid_size_cell_effect_ParamLimits

0xbdba,	// (0x0001b5e6) bg_tb_trans_pane_cp02_ParamLimits

0xa3ea,	// (0x00019c16) heading_imed_pane_ParamLimits

0x5071,	// (0x0001489d) listscroll_imed_pane_ParamLimits

0xb3dc,	// (0x0001ac08) popup_call2_audio_first_window_g5_ParamLimits

0xb3dc,	// (0x0001ac08) popup_call2_audio_first_window_g5

0x5622,	// (0x00014e4e) aid_size_touch_image3_arrow_left_ParamLimits

0x5622,	// (0x00014e4e) aid_size_touch_image3_arrow_left

0x564e,	// (0x00014e7a) aid_size_touch_image3_arrow_right_ParamLimits

0x564e,	// (0x00014e7a) aid_size_touch_image3_arrow_right

0xd710,	// (0x0001cf3c) vid4_progress_pane_t3

0x5390,	// (0x00014bbc) main_hwr_training_symbol_option_pane_ParamLimits

0x5390,	// (0x00014bbc) main_hwr_training_symbol_option_pane

0xcabf,	// (0x0001c2eb) popup_hwr_training_preview_window_ParamLimits

0xcabf,	// (0x0001c2eb) popup_hwr_training_preview_window

0x53b0,	// (0x00014bdc) hwr_training_navi_pane_g5_ParamLimits

0x53b0,	// (0x00014bdc) hwr_training_navi_pane_g5

0xd056,	// (0x0001c882) popup_char_count_window

0x958d,	// (0x00018db9) bg_popup_sub_pane_cp20_ParamLimits

0x6712,	// (0x00015f3e) list_vitu2_match_list_pane_ParamLimits

0x6721,	// (0x00015f4d) vitu2_page_scroll_pane_ParamLimits

0x6721,	// (0x00015f4d) vitu2_page_scroll_pane

0xd75b,	// (0x0001cf87) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd75b,	// (0x0001cf87) list_single_hwr_training_symbol_option_pane

0xd76e,	// (0x0001cf9a) list_single_hwr_training_symbol_option_pane_g1

0xd776,	// (0x0001cfa2) list_single_hwr_training_symbol_option_pane_t1

0xd784,	// (0x0001cfb0) bg_button_pane_cp023

0xd78d,	// (0x0001cfb9) bg_button_pane_cp024

0x6dfc,	// (0x00016628) vitu2_page_scroll_pane_g1

0x6e04,	// (0x00016630) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0001f2f8) vitu2_page_scroll_pane_g

0x6e0e,	// (0x0001663a) vitu2_page_scroll_pane_t1

0xd7c0,	// (0x0001cfec) popup_char_count_window_g1

0xd7c9,	// (0x0001cff5) popup_char_count_window_g2

0xd7d2,	// (0x0001cffe) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0001f2fd) popup_char_count_window_g

0xd7db,	// (0x0001d007) popup_char_count_window_t1

0x952c,	// (0x00018d58) main_vded2_pane

0xc7bc,	// (0x0001bfe8) aid_size_cell_imed_line

0xc7c6,	// (0x0001bff2) grid_imed_line_width_pane

0xcfc7,	// (0x0001c7f3) vid4_indicators_pane_g4

0xd7e9,	// (0x0001d015) cell_imed_line_width_pane_ParamLimits

0xd7e9,	// (0x0001d015) cell_imed_line_width_pane

0xd7ff,	// (0x0001d02b) cell_imed_line_width_pane_g1

0xd808,	// (0x0001d034) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0001f304) cell_imed_line_width_pane_g

0x6e1d,	// (0x00016649) main_vded2_pane_g1_ParamLimits

0x6e1d,	// (0x00016649) main_vded2_pane_g1

0x6e38,	// (0x00016664) main_vded2_pane_g2_ParamLimits

0x6e38,	// (0x00016664) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0001f309) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0001f309) main_vded2_pane_g

0x6e4a,	// (0x00016676) vded2_slider_pane_ParamLimits

0x6e4a,	// (0x00016676) vded2_slider_pane

0x6e5a,	// (0x00016686) aid_size_touch_vded2_end

0x6e64,	// (0x00016690) aid_size_touch_vded2_playhead

0xd810,	// (0x0001d03c) aid_size_touch_vded2_start

0xd818,	// (0x0001d044) vded2_slider_bg_pane

0xd821,	// (0x0001d04d) vded2_slider_pane_g1

0xd82a,	// (0x0001d056) vded2_slider_pane_g2

0x6e6e,	// (0x0001669a) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0001f30e) vded2_slider_pane_g

0xd2ed,	// (0x0001cb19) vded2_slider_bg_pane_g1

0xd2f6,	// (0x0001cb22) vded2_slider_bg_pane_g2

0xd2ff,	// (0x0001cb2b) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0001f315) vded2_slider_bg_pane_g

0x2c88,	// (0x000124b4) aid_postcard_touch_down_pane_ParamLimits

0x2c88,	// (0x000124b4) aid_postcard_touch_down_pane

0x2ca0,	// (0x000124cc) aid_postcard_touch_up_pane_ParamLimits

0x2ca0,	// (0x000124cc) aid_postcard_touch_up_pane

0x952c,	// (0x00018d58) main_blid2_pane

0xbdc8,	// (0x0001b5f4) popup_blid2_search_window

0x952c,	// (0x00018d58) blid2_gps_pane

0x952c,	// (0x00018d58) blid2_navig_pane

0x952c,	// (0x00018d58) blid2_search_pane

0x952c,	// (0x00018d58) blid2_tripm_pane

0x6e79,	// (0x000166a5) blid2_search_pane_g1_ParamLimits

0x6e79,	// (0x000166a5) blid2_search_pane_g1

0x6e8c,	// (0x000166b8) blid2_search_pane_t1_ParamLimits

0x6e8c,	// (0x000166b8) blid2_search_pane_t1

0x6e9e,	// (0x000166ca) aid_size_cell_blid2_gps_ParamLimits

0x6e9e,	// (0x000166ca) aid_size_cell_blid2_gps

0x6eb6,	// (0x000166e2) blid2_gps_pane_g1_ParamLimits

0x6eb6,	// (0x000166e2) blid2_gps_pane_g1

0x6eca,	// (0x000166f6) grid_blid2_satellite_pane_ParamLimits

0x6eca,	// (0x000166f6) grid_blid2_satellite_pane

0x6ee2,	// (0x0001670e) blid2_navig_pane_g1_ParamLimits

0x6ee2,	// (0x0001670e) blid2_navig_pane_g1

0x6eee,	// (0x0001671a) blid2_navig_pane_t1_ParamLimits

0x6eee,	// (0x0001671a) blid2_navig_pane_t1

0x6f09,	// (0x00016735) blid2_navig_pane_t2_ParamLimits

0x6f09,	// (0x00016735) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0001f31c) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0001f31c) blid2_navig_pane_t

0x6f24,	// (0x00016750) blid2_navig_ring_pane_ParamLimits

0x6f24,	// (0x00016750) blid2_navig_ring_pane

0x6f3f,	// (0x0001676b) blid2_speed_pane_ParamLimits

0x6f3f,	// (0x0001676b) blid2_speed_pane

0x6f4b,	// (0x00016777) blid2_tripm_pane_g1_ParamLimits

0x6f4b,	// (0x00016777) blid2_tripm_pane_g1

0x6f66,	// (0x00016792) blid2_tripm_pane_g2_ParamLimits

0x6f66,	// (0x00016792) blid2_tripm_pane_g2

0x6f7a,	// (0x000167a6) blid2_tripm_pane_g3_ParamLimits

0x6f7a,	// (0x000167a6) blid2_tripm_pane_g3

0x6f8e,	// (0x000167ba) blid2_tripm_pane_g4_ParamLimits

0x6f8e,	// (0x000167ba) blid2_tripm_pane_g4

0x6fa2,	// (0x000167ce) blid2_tripm_pane_g5_ParamLimits

0x6fa2,	// (0x000167ce) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0001f321) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0001f321) blid2_tripm_pane_g

0x6fc8,	// (0x000167f4) blid2_tripm_pane_t1_ParamLimits

0x6fc8,	// (0x000167f4) blid2_tripm_pane_t1

0x6fe1,	// (0x0001680d) blid2_tripm_pane_t2_ParamLimits

0x6fe1,	// (0x0001680d) blid2_tripm_pane_t2

0x6ffa,	// (0x00016826) blid2_tripm_pane_t3_ParamLimits

0x6ffa,	// (0x00016826) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0001f32e) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0001f32e) blid2_tripm_pane_t

0x7041,	// (0x0001686d) cell_blid2_satellite_pane_ParamLimits

0x7041,	// (0x0001686d) cell_blid2_satellite_pane

0x705f,	// (0x0001688b) cell_blid2_satellite_pane_g1

0xd832,	// (0x0001d05e) cell_blid2_satellite_pane_t1

0xc2c7,	// (0x0001baf3) blid2_speed_pane_g1

0xd840,	// (0x0001d06c) blid2_speed_pane_t1

0xd84e,	// (0x0001d07a) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0001f337) blid2_speed_pane_t

0xc2c7,	// (0x0001baf3) blid2_navig_ring_pane_g1

0x7068,	// (0x00016894) blid2_navig_ring_pane_g2

0x7070,	// (0x0001689c) blid2_navig_ring_pane_g3

0x7078,	// (0x000168a4) blid2_navig_ring_pane_g4

0x7080,	// (0x000168ac) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0001f33c) blid2_navig_ring_pane_g

0x952c,	// (0x00018d58) bg_popup_window_pane_cp011

0xd85c,	// (0x0001d088) popup_blid2_search_window_g1

0xd864,	// (0x0001d090) popup_blid2_search_window_t1

0xd872,	// (0x0001d09e) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0001f347) popup_blid2_search_window_t

0xa072,	// (0x0001989e) main_browser_pane_g1

0x9cf0,	// (0x0001951c) main_browser_pane_ParamLimits

0x958d,	// (0x00018db9) bg_button_pane_cp011_ParamLimits

0x5f6c,	// (0x00015798) cell_vitu2_function_pane_g1_ParamLimits

0xbdba,	// (0x0001b5e6) bg_popup_sub_pane_cp22_ParamLimits

0x6901,	// (0x0001612d) input_focus_pane_cp08_ParamLimits

0x6918,	// (0x00016144) popup_vitu2_query_button_pane_ParamLimits

0x6918,	// (0x00016144) popup_vitu2_query_button_pane

0x6929,	// (0x00016155) popup_vitu2_query_input_button_pane

0xd3ce,	// (0x0001cbfa) popup_vitu2_query_window_g1_ParamLimits

0x6933,	// (0x0001615f) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0001f248) popup_vitu2_query_window_g_ParamLimits

0x952c,	// (0x00018d58) bg_button_pane_cp026

0x7088,	// (0x000168b4) popup_vitu2_query_input_button_pane_g1

0x952c,	// (0x00018d58) bg_button_pane_cp025

0xd880,	// (0x0001d0ac) popup_vitu2_query_button_pane_t1

0x43ac,	// (0x00013bd8) main_mp3_pane_t6

0x43ba,	// (0x00013be6) popup_slider_window_cp01

0xcf2b,	// (0x0001c757) cam4_battery_pane

0xcf80,	// (0x0001c7ac) cam4_battery_pane_cp02

0xd6bf,	// (0x0001ceeb) cam4_battery_pane_cp01

0xd6bf,	// (0x0001ceeb) cam4_battery_pane_cp03

0xc2c7,	// (0x0001baf3) cam4_battery_pane_g1

0xd88e,	// (0x0001d0ba) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0001f34c) cam4_battery_pane_g

0xc18d,	// (0x0001b9b9) popup_blid_sat_info2_window_t11

0x259b,	// (0x00011dc7) aid_size_touch_mv_arrow_left_ParamLimits

0x25c4,	// (0x00011df0) aid_size_touch_mv_arrow_right_ParamLimits

0xa859,	// (0x0001a085) navi_pane_g1_ParamLimits

0x2603,	// (0x00011e2f) navi_pane_g2_ParamLimits

0x2631,	// (0x00011e5d) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0001ec11) navi_pane_g_ParamLimits

0x268b,	// (0x00011eb7) navi_pane_mv_t1_ParamLimits

0x507d,	// (0x000148a9) grid_imed_effect_pane_ParamLimits

0x1045,	// (0x00010871) aid_placing_vt_slider_lsc

0x9fbd,	// (0x000197e9) aid_placing_vt_slider_prt

0x958d,	// (0x00018db9) bg_tb_trans_pane_cp01_ParamLimits

0xc417,	// (0x0001bc43) popup_image_details_window_g1_ParamLimits

0xc42a,	// (0x0001bc56) popup_image_details_window_g2_ParamLimits

0xc43f,	// (0x0001bc6b) popup_image_details_window_g3_ParamLimits

0xc43f,	// (0x0001bc6b) popup_image_details_window_g3

0xf718,	// (0x0001ef44) popup_image_details_window_g_ParamLimits

0xc453,	// (0x0001bc7f) popup_image_details_window_t1_ParamLimits

0xc465,	// (0x0001bc91) popup_image_details_window_t2_ParamLimits

0xc47e,	// (0x0001bcaa) popup_image_details_window_t3_ParamLimits

0xc492,	// (0x0001bcbe) popup_image_details_window_t4_ParamLimits

0xc4ad,	// (0x0001bcd9) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0001ef4b) popup_image_details_window_t_ParamLimits

0x6cb5,	// (0x000164e1) cl_header_name_pane_ParamLimits

0x6cb5,	// (0x000164e1) cl_header_name_pane

0x7090,	// (0x000168bc) cl_header_name_pane_t1_ParamLimits

0x7090,	// (0x000168bc) cl_header_name_pane_t1

0x70b1,	// (0x000168dd) cl_header_name_pane_t2_ParamLimits

0x70b1,	// (0x000168dd) cl_header_name_pane_t2

0x70f3,	// (0x0001691f) cl_header_name_pane_t3_ParamLimits

0x70f3,	// (0x0001691f) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0001f351) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0001f351) cl_header_name_pane_t

0x265c,	// (0x00011e88) navi_pane_mv_g2_ParamLimits

0xd013,	// (0x0001c83f) field_vitu2_entry_pane_g1_ParamLimits

0xd01f,	// (0x0001c84b) field_vitu2_entry_pane_g2_ParamLimits

0xd02b,	// (0x0001c857) field_vitu2_entry_pane_g3_ParamLimits

0xd02b,	// (0x0001c857) field_vitu2_entry_pane_g3

0xf91b,	// (0x0001f147) field_vitu2_entry_pane_g_ParamLimits

0xd05e,	// (0x0001c88a) cell_vitu2_itu_pane_g1_ParamLimits

0x5e14,	// (0x00015640) cell_vitu2_itu_pane_g2_ParamLimits

0x5e14,	// (0x00015640) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0001f153) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0001f153) cell_vitu2_itu_pane_g

0x958d,	// (0x00018db9) bg_vkb2_func_pane_cp05_ParamLimits

0x958d,	// (0x00018db9) bg_vkb2_func_pane_cp05

0x958d,	// (0x00018db9) bg_vkb2_func_pane_cp03

0x958d,	// (0x00018db9) bg_vkb2_func_pane_cp04

0x958d,	// (0x00018db9) bg_vkb2_func_pane_cp10_ParamLimits

0x958d,	// (0x00018db9) bg_vkb2_func_pane_cp10

0x6c57,	// (0x00016483) bg_vkb2_func_pane_cp08

0x6c3d,	// (0x00016469) bg_vkb2_func_pane_cp06

0x6c4b,	// (0x00016477) bg_vkb2_func_pane_cp07

0xd796,	// (0x0001cfc2) bg_vkb2_func_pane_cp11_ParamLimits

0xd796,	// (0x0001cfc2) bg_vkb2_func_pane_cp11

0xd7ab,	// (0x0001cfd7) bg_vkb2_func_pane_cp12_ParamLimits

0xd7ab,	// (0x0001cfd7) bg_vkb2_func_pane_cp12

0x952c,	// (0x00018d58) bg_vkb2_func_pane_cp09

0xd07a,	// (0x0001c8a6) bg_vkb2_func_pane_g1

0xa183,	// (0x000199af) bg_vkb2_func_pane_g2

0xd082,	// (0x0001c8ae) bg_vkb2_func_pane_g3

0xd08a,	// (0x0001c8b6) bg_vkb2_func_pane_g4

0xd367,	// (0x0001cb93) bg_vkb2_func_pane_g5

0xd0a2,	// (0x0001c8ce) bg_vkb2_func_pane_g6

0xd0aa,	// (0x0001c8d6) bg_vkb2_func_pane_g7

0xd09a,	// (0x0001c8c6) bg_vkb2_func_pane_g8

0xa163,	// (0x0001998f) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0001f358) bg_vkb2_func_pane_g

0x6fb6,	// (0x000167e2) blid2_tripm_pane_g6_ParamLimits

0x6fb6,	// (0x000167e2) blid2_tripm_pane_g6

0xcdae,	// (0x0001c5da) mp4_progress_pane_g1

0x702d,	// (0x00016859) blid2_tripm_values_pane_ParamLimits

0x702d,	// (0x00016859) blid2_tripm_values_pane

0x7124,	// (0x00016950) blid2_tripm_values_pane_t1

0x7132,	// (0x0001695e) blid2_tripm_values_pane_t2

0x7140,	// (0x0001696c) blid2_tripm_values_pane_t3

0x714e,	// (0x0001697a) blid2_tripm_values_pane_t4

0x715c,	// (0x00016988) blid2_tripm_values_pane_t5

0x716a,	// (0x00016996) blid2_tripm_values_pane_t6

0x7178,	// (0x000169a4) blid2_tripm_values_pane_t7

0x7186,	// (0x000169b2) blid2_tripm_values_pane_t8

0x7194,	// (0x000169c0) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0001f36b) blid2_tripm_values_pane_t

0x1082,	// (0x000108ae) call_video_pane_t1_ParamLimits

0x109c,	// (0x000108c8) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0001ea9a) call_video_pane_t_ParamLimits

0x2bd5,	// (0x00012401) msg_header_pane_g1_ParamLimits

0xaa96,	// (0x0001a2c2) msg_header_pane_g2_ParamLimits

0xaa96,	// (0x0001a2c2) msg_header_pane_g2

0x0001,

0xf488,	// (0x0001ecb4) msg_header_pane_g_ParamLimits

0xf488,	// (0x0001ecb4) msg_header_pane_g

0x9cf0,	// (0x0001951c) main_clock2_pane_ParamLimits

0x4d64,	// (0x00014590) grid_clock2_toolbar_pane_ParamLimits

0x4d64,	// (0x00014590) grid_clock2_toolbar_pane

0x4d64,	// (0x00014590) listscroll_clock2_pane_ParamLimits

0x4d64,	// (0x00014590) listscroll_clock2_pane

0x4e5b,	// (0x00014687) main_clock2_pane_t3_ParamLimits

0x4e5b,	// (0x00014687) main_clock2_pane_t3

0x4e7f,	// (0x000146ab) main_clock2_pane_t4_ParamLimits

0x4e7f,	// (0x000146ab) main_clock2_pane_t4

0xd898,	// (0x0001d0c4) cell_clock2_toolbar_pane

0xd8a0,	// (0x0001d0cc) cell_clock2_toolbar_pane_cp01

0xd8a0,	// (0x0001d0cc) cell_clock2_toolbar_pane_cp02

0xd8a8,	// (0x0001d0d4) cell_clock2_toolbar_pane_cp03

0xd8b0,	// (0x0001d0dc) list_clock2_pane

0xa7bf,	// (0x00019feb) scroll_pane_cp10

0xd8b8,	// (0x0001d0e4) list_single_clock2_pane_ParamLimits

0xd8b8,	// (0x0001d0e4) list_single_clock2_pane

0x9f1c,	// (0x00019748) list_highlight_pane_cp08

0xd8c5,	// (0x0001d0f1) list_single_clock2_pane_t1

0xd8d3,	// (0x0001d0ff) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0001f37e) list_single_clock2_pane_t

0x952c,	// (0x00018d58) bg_button_pane_cp10

0xd8e1,	// (0x0001d10d) cell_clock2_toolbar_pane_g1

0x2c14,	// (0x00012440) aid_main_viewer_pane_g1_ParamLimits

0x2c14,	// (0x00012440) aid_main_viewer_pane_g1

0x2c22,	// (0x0001244e) aid_main_viewer_pane_g2_ParamLimits

0x2c22,	// (0x0001244e) aid_main_viewer_pane_g2

0x2c30,	// (0x0001245c) aid_main_viewer_pane_g3_ParamLimits

0x2c30,	// (0x0001245c) aid_main_viewer_pane_g3

0x2c3f,	// (0x0001246b) aid_main_viewer_pane_g4_ParamLimits

0x2c3f,	// (0x0001246b) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0001ecc5) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0001ecc5) aid_main_viewer_pane_g

0x3592,	// (0x00012dbe) main_calc_pane_ParamLimits

0x35a6,	// (0x00012dd2) main_dialer2_pane_ParamLimits

0x952c,	// (0x00018d58) main_cam6_pane

0x952c,	// (0x00018d58) main_vid6_pane

0x4d70,	// (0x0001459c) listscroll_gen_pane_cp06_ParamLimits

0x4d70,	// (0x0001459c) listscroll_gen_pane_cp06

0x4ea2,	// (0x000146ce) main_clock2_pane_t5_ParamLimits

0x4ea2,	// (0x000146ce) main_clock2_pane_t5

0x4f02,	// (0x0001472e) aid_call2_pane_cp10_ParamLimits

0x4f14,	// (0x00014740) aid_call_pane_cp10_ParamLimits

0xa82e,	// (0x0001a05a) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa82e,	// (0x0001a05a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4f26,	// (0x00014752) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4f26,	// (0x00014752) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa82e,	// (0x0001a05a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0001f000) popup_clock_analogue_window_cp10_g_ParamLimits

0x4f3c,	// (0x00014768) popup_clock_analogue_window_cp10_t1_ParamLimits

0x55cf,	// (0x00014dfb) cell_dialer2_keypad_pane_g2_ParamLimits

0x55cf,	// (0x00014dfb) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0001f0e6) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0001f0e6) cell_dialer2_keypad_pane_g

0x55eb,	// (0x00014e17) cell_dialer2_keypad_pane_t1

0x6297,	// (0x00015ac3) main_cset_text2_pane_ParamLimits

0x6297,	// (0x00015ac3) main_cset_text2_pane

0xd5c6,	// (0x0001cdf2) area_vitu2_query_pane_g1_ParamLimits

0x6bdc,	// (0x00016408) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0001f29b) area_vitu2_query_pane_g_ParamLimits

0xd64a,	// (0x0001ce76) area_vitu2_query_pane_t7_ParamLimits

0xd64a,	// (0x0001ce76) area_vitu2_query_pane_t7

0x6c3d,	// (0x00016469) bg_button_pane_cp018_ParamLimits

0x6c4b,	// (0x00016477) bg_button_pane_cp021_ParamLimits

0x6c57,	// (0x00016483) bg_button_pane_cp022_ParamLimits

0x6c57,	// (0x00016483) bg_vkb2_func_pane_cp08_ParamLimits

0x6c3d,	// (0x00016469) bg_vkb2_func_pane_cp06_ParamLimits

0x6c4b,	// (0x00016477) bg_vkb2_func_pane_cp07_ParamLimits

0x6c68,	// (0x00016494) input_focus_pane_cp09_ParamLimits

0xd8e9,	// (0x0001d115) cam6_autofocus_pane_ParamLimits

0xd8e9,	// (0x0001d115) cam6_autofocus_pane

0x71a2,	// (0x000169ce) cam6_image_uncrop_pane_ParamLimits

0x71a2,	// (0x000169ce) cam6_image_uncrop_pane

0x71b1,	// (0x000169dd) cam6_indi_pane_ParamLimits

0x71b1,	// (0x000169dd) cam6_indi_pane

0x71c7,	// (0x000169f3) cam6_mode_pane_ParamLimits

0x71c7,	// (0x000169f3) cam6_mode_pane

0x71d9,	// (0x00016a05) cam6_timer_pane_ParamLimits

0x71d9,	// (0x00016a05) cam6_timer_pane

0x71e5,	// (0x00016a11) cam6_zoom_pane_ParamLimits

0x71e5,	// (0x00016a11) cam6_zoom_pane

0x71f3,	// (0x00016a1f) cam6_mode_pane_g1_ParamLimits

0x71f3,	// (0x00016a1f) cam6_mode_pane_g1

0x7203,	// (0x00016a2f) cam6_mode_pane_g2_ParamLimits

0x7203,	// (0x00016a2f) cam6_mode_pane_g2

0x7213,	// (0x00016a3f) cam6_mode_pane_g3_ParamLimits

0x7213,	// (0x00016a3f) cam6_mode_pane_g3

0x7223,	// (0x00016a4f) cam6_mode_pane_g4_ParamLimits

0x7223,	// (0x00016a4f) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0001f383) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0001f383) cam6_mode_pane_g

0xd308,	// (0x0001cb34) bg_tb_trans_pane_cp08_ParamLimits

0xd308,	// (0x0001cb34) bg_tb_trans_pane_cp08

0xd8f7,	// (0x0001d123) cam6_battery_pane_ParamLimits

0xd8f7,	// (0x0001d123) cam6_battery_pane

0xd90d,	// (0x0001d139) cam6_indi_pane_g1_ParamLimits

0xd90d,	// (0x0001d139) cam6_indi_pane_g1

0xd91f,	// (0x0001d14b) cam6_indi_pane_g2_ParamLimits

0xd91f,	// (0x0001d14b) cam6_indi_pane_g2

0xd931,	// (0x0001d15d) cam6_indi_pane_g3_ParamLimits

0xd931,	// (0x0001d15d) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0001f38c) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0001f38c) cam6_indi_pane_g

0xd943,	// (0x0001d16f) cam6_indi_pane_t1_ParamLimits

0xd943,	// (0x0001d16f) cam6_indi_pane_t1

0x5bac,	// (0x000153d8) cam6_autofocus_pane_g1

0x5bb4,	// (0x000153e0) cam6_autofocus_pane_g2

0x5bbc,	// (0x000153e8) cam6_autofocus_pane_g3

0x5bc4,	// (0x000153f0) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0001f393) cam6_autofocus_pane_g

0xd969,	// (0x0001d195) cam6_timer_pane_g1

0xd971,	// (0x0001d19d) cam6_timer_pane_t1

0xd97f,	// (0x0001d1ab) cam6_zoom_cont_pane

0xd987,	// (0x0001d1b3) cam6_zoom_pane_g1

0xd98f,	// (0x0001d1bb) cam6_zoom_pane_g2

0x7233,	// (0x00016a5f) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0001f39c) cam6_zoom_pane_g

0xc2c7,	// (0x0001baf3) cam6_battery_pane_g1

0xc2c7,	// (0x0001baf3) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0001ef08) cam6_battery_pane_g

0xd997,	// (0x0001d1c3) cam6_zoom_cont_pane_g1

0xd9a0,	// (0x0001d1cc) cam6_zoom_cont_pane_g2

0xd9a9,	// (0x0001d1d5) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0001f3a3) cam6_zoom_cont_pane_g

0x7250,	// (0x00016a7c) cam6_mode_pane_cp_ParamLimits

0x7250,	// (0x00016a7c) cam6_mode_pane_cp

0x71e5,	// (0x00016a11) cam6_zoom_pane_cp_ParamLimits

0x71e5,	// (0x00016a11) cam6_zoom_pane_cp

0x7262,	// (0x00016a8e) vid6_image_uncrop_cif_pane_ParamLimits

0x7262,	// (0x00016a8e) vid6_image_uncrop_cif_pane

0x7272,	// (0x00016a9e) vid6_image_uncrop_nhd_pane_ParamLimits

0x7272,	// (0x00016a9e) vid6_image_uncrop_nhd_pane

0x71a2,	// (0x000169ce) vid6_image_uncrop_vga_pane_ParamLimits

0x71a2,	// (0x000169ce) vid6_image_uncrop_vga_pane

0x7281,	// (0x00016aad) vid6_image_uncrop_wvga_pane_ParamLimits

0x7281,	// (0x00016aad) vid6_image_uncrop_wvga_pane

0x7290,	// (0x00016abc) vid6_indi_pane_ParamLimits

0x7290,	// (0x00016abc) vid6_indi_pane

0xd308,	// (0x0001cb34) bg_tb_trans_pane_cp09_ParamLimits

0xd308,	// (0x0001cb34) bg_tb_trans_pane_cp09

0xd9c1,	// (0x0001d1ed) cam6_battery_pane_cp_ParamLimits

0xd9c1,	// (0x0001d1ed) cam6_battery_pane_cp

0xd9cd,	// (0x0001d1f9) vid6_indi_pane_g1_ParamLimits

0xd9cd,	// (0x0001d1f9) vid6_indi_pane_g1

0xd9df,	// (0x0001d20b) vid6_indi_pane_g2_ParamLimits

0xd9df,	// (0x0001d20b) vid6_indi_pane_g2

0xd9f1,	// (0x0001d21d) vid6_indi_pane_g3_ParamLimits

0xd9f1,	// (0x0001d21d) vid6_indi_pane_g3

0xda08,	// (0x0001d234) vid6_indi_pane_g4_ParamLimits

0xda08,	// (0x0001d234) vid6_indi_pane_g4

0xda1f,	// (0x0001d24b) vid6_indi_pane_g5_ParamLimits

0xda1f,	// (0x0001d24b) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0001f3aa) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0001f3aa) vid6_indi_pane_g

0xda39,	// (0x0001d265) vid6_indi_pane_t1_ParamLimits

0xda39,	// (0x0001d265) vid6_indi_pane_t1

0xda4f,	// (0x0001d27b) vid6_indi_pane_t2_ParamLimits

0xda4f,	// (0x0001d27b) vid6_indi_pane_t2

0xda77,	// (0x0001d2a3) vid6_indi_pane_t3_ParamLimits

0xda77,	// (0x0001d2a3) vid6_indi_pane_t3

0xda9f,	// (0x0001d2cb) vid6_indi_pane_t4_ParamLimits

0xda9f,	// (0x0001d2cb) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0001f3b5) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0001f3b5) vid6_indi_pane_t

0xdac3,	// (0x0001d2ef) wait_bar_pane_cp08

0x72a8,	// (0x00016ad4) main_cset_text2_pane_t1_ParamLimits

0x72a8,	// (0x00016ad4) main_cset_text2_pane_t1

0x723b,	// (0x00016a67) listscroll_gen_pane_cp06_t1_ParamLimits

0x723b,	// (0x00016a67) listscroll_gen_pane_cp06_t1

0x952c,	// (0x00018d58) main_cam6_set_pane

0xc4f7,	// (0x0001bd23) bg_tb_trans_pane_cp06_ParamLimits

0xcf33,	// (0x0001c75f) cam4_indicators_pane_g1_ParamLimits

0xcf44,	// (0x0001c770) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0001f123) cam4_indicators_pane_g_ParamLimits

0xcf5c,	// (0x0001c788) cam4_indicators_pane_t1_ParamLimits

0x958d,	// (0x00018db9) bg_tb_trans_pane_cp07_ParamLimits

0xcf8a,	// (0x0001c7b6) vid4_indicators_pane_g1_ParamLimits

0xcfa0,	// (0x0001c7cc) vid4_indicators_pane_g2_ParamLimits

0xcfb4,	// (0x0001c7e0) vid4_indicators_pane_g3_ParamLimits

0xcfc7,	// (0x0001c7f3) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0001f135) vid4_indicators_pane_g_ParamLimits

0xcfe5,	// (0x0001c811) vid4_indicators_pane_t1_ParamLimits

0x6da9,	// (0x000165d5) vid4_progress_pane_g1_ParamLimits

0x6dbb,	// (0x000165e7) vid4_progress_pane_g2_ParamLimits

0xab1c,	// (0x0001a348) vid4_progress_pane_g3_ParamLimits

0xd6c7,	// (0x0001cef3) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0001f2e6) vid4_progress_pane_g_ParamLimits

0xd6e5,	// (0x0001cf11) vid4_progress_pane_t1_ParamLimits

0xd6fa,	// (0x0001cf26) vid4_progress_pane_t2_ParamLimits

0xd710,	// (0x0001cf3c) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0001f2f1) vid4_progress_pane_t_ParamLimits

0xd725,	// (0x0001cf51) wait_bar_pane_cp07_ParamLimits

0x72c6,	// (0x00016af2) main_cam6_set_pane_g2_ParamLimits

0x72c6,	// (0x00016af2) main_cam6_set_pane_g2

0x72ec,	// (0x00016b18) main_cset6_listscroll_pane_ParamLimits

0x72ec,	// (0x00016b18) main_cset6_listscroll_pane

0x730a,	// (0x00016b36) main_cset6_slider_pane_ParamLimits

0x730a,	// (0x00016b36) main_cset6_slider_pane

0x7320,	// (0x00016b4c) main_cset6_text2_pane_ParamLimits

0x7320,	// (0x00016b4c) main_cset6_text2_pane

0xdad2,	// (0x0001d2fe) main_cset6_text_pane

0xdada,	// (0x0001d306) main_cset_list_pane_copy1_ParamLimits

0xdada,	// (0x0001d306) main_cset_list_pane_copy1

0xdaea,	// (0x0001d316) scroll_pane_cp028_copy1

0x2147,	// (0x00011973) cset_list_set_pane_copy1

0x732e,	// (0x00016b5a) aid_position_infowindow_above_copy1

0x7336,	// (0x00016b62) aid_position_infowindow_below_copy1

0x733e,	// (0x00016b6a) cset_list_set_pane_g1_copy1

0x7346,	// (0x00016b72) cset_list_set_pane_g3_copy1_ParamLimits

0x7346,	// (0x00016b72) cset_list_set_pane_g3_copy1

0x7355,	// (0x00016b81) cset_list_set_pane_t1_copy1_ParamLimits

0x7355,	// (0x00016b81) cset_list_set_pane_t1_copy1

0x958d,	// (0x00018db9) list_highlight_pane_cp021_copy1_ParamLimits

0x958d,	// (0x00018db9) list_highlight_pane_cp021_copy1

0xdaf3,	// (0x0001d31f) cset6_slider_pane_ParamLimits

0xdaf3,	// (0x0001d31f) cset6_slider_pane

0xdb1f,	// (0x0001d34b) main_cset6_slider_pane_g1_ParamLimits

0xdb1f,	// (0x0001d34b) main_cset6_slider_pane_g1

0x736a,	// (0x00016b96) main_cset6_slider_pane_g2_ParamLimits

0x736a,	// (0x00016b96) main_cset6_slider_pane_g2

0xdb47,	// (0x0001d373) main_cset6_slider_pane_g3_ParamLimits

0xdb47,	// (0x0001d373) main_cset6_slider_pane_g3

0x7392,	// (0x00016bbe) main_cset6_slider_pane_g4_ParamLimits

0x7392,	// (0x00016bbe) main_cset6_slider_pane_g4

0x739e,	// (0x00016bca) main_cset6_slider_pane_g5_ParamLimits

0x739e,	// (0x00016bca) main_cset6_slider_pane_g5

0xd1ad,	// (0x0001c9d9) main_cset6_slider_pane_g7_ParamLimits

0xd1ad,	// (0x0001c9d9) main_cset6_slider_pane_g7

0xd1b9,	// (0x0001c9e5) main_cset6_slider_pane_g8_ParamLimits

0xd1b9,	// (0x0001c9e5) main_cset6_slider_pane_g8

0x6346,	// (0x00015b72) main_cset6_slider_pane_g9_ParamLimits

0x6346,	// (0x00015b72) main_cset6_slider_pane_g9

0x6352,	// (0x00015b7e) main_cset6_slider_pane_g10_ParamLimits

0x6352,	// (0x00015b7e) main_cset6_slider_pane_g10

0x635e,	// (0x00015b8a) main_cset6_slider_pane_g11_ParamLimits

0x635e,	// (0x00015b8a) main_cset6_slider_pane_g11

0x636a,	// (0x00015b96) main_cset6_slider_pane_g12_ParamLimits

0x636a,	// (0x00015b96) main_cset6_slider_pane_g12

0x6376,	// (0x00015ba2) main_cset6_slider_pane_g13_ParamLimits

0x6376,	// (0x00015ba2) main_cset6_slider_pane_g13

0x6382,	// (0x00015bae) main_cset6_slider_pane_g14_ParamLimits

0x6382,	// (0x00015bae) main_cset6_slider_pane_g14

0x73ac,	// (0x00016bd8) main_cset6_slider_pane_g15_ParamLimits

0x73ac,	// (0x00016bd8) main_cset6_slider_pane_g15

0x63a6,	// (0x00015bd2) main_cset6_slider_pane_g16_ParamLimits

0x63a6,	// (0x00015bd2) main_cset6_slider_pane_g16

0x63b4,	// (0x00015be0) main_cset6_slider_pane_g17_ParamLimits

0x63b4,	// (0x00015be0) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0001f3be) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0001f3be) main_cset6_slider_pane_g

0xdb53,	// (0x0001d37f) main_cset6_slider_pane_t1_ParamLimits

0xdb53,	// (0x0001d37f) main_cset6_slider_pane_t1

0x73dc,	// (0x00016c08) main_cset6_slider_pane_t2_ParamLimits

0x73dc,	// (0x00016c08) main_cset6_slider_pane_t2

0x7407,	// (0x00016c33) main_cset6_slider_pane_t3_ParamLimits

0x7407,	// (0x00016c33) main_cset6_slider_pane_t3

0x7432,	// (0x00016c5e) main_cset6_slider_pane_t4_ParamLimits

0x7432,	// (0x00016c5e) main_cset6_slider_pane_t4

0x745d,	// (0x00016c89) main_cset6_slider_pane_t5_ParamLimits

0x745d,	// (0x00016c89) main_cset6_slider_pane_t5

0xdb94,	// (0x0001d3c0) main_cset6_slider_pane_t7_ParamLimits

0xdb94,	// (0x0001d3c0) main_cset6_slider_pane_t7

0x748a,	// (0x00016cb6) main_cset6_slider_pane_t8_ParamLimits

0x748a,	// (0x00016cb6) main_cset6_slider_pane_t8

0x74ae,	// (0x00016cda) main_cset6_slider_pane_t9_ParamLimits

0x74ae,	// (0x00016cda) main_cset6_slider_pane_t9

0x74d2,	// (0x00016cfe) main_cset6_slider_pane_t10_ParamLimits

0x74d2,	// (0x00016cfe) main_cset6_slider_pane_t10

0x74f6,	// (0x00016d22) main_cset6_slider_pane_t11_ParamLimits

0x74f6,	// (0x00016d22) main_cset6_slider_pane_t11

0xdbca,	// (0x0001d3f6) main_cset6_slider_pane_t14_ParamLimits

0xdbca,	// (0x0001d3f6) main_cset6_slider_pane_t14

0xdc03,	// (0x0001d42f) main_cset6_slider_pane_t15_ParamLimits

0xdc03,	// (0x0001d42f) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0001f3e3) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0001f3e3) main_cset6_slider_pane_t

0xd291,	// (0x0001cabd) cset_slider_pane_g1_copy1

0xd29a,	// (0x0001cac6) cset_slider_pane_g2_copy1

0xd2a3,	// (0x0001cacf) cset_slider_pane_g3_copy1

0x952c,	// (0x00018d58) bg_popup_sub_pane_cp011_copy1

0xdc3c,	// (0x0001d468) main_cset_text_pane_g1_copy1

0xd3e2,	// (0x0001cc0e) main_cset_text_pane_t1_copy1

0xd3f0,	// (0x0001cc1c) main_cset_text_pane_t2_copy1

0xd3fe,	// (0x0001cc2a) main_cset_text_pane_t3_copy1

0xd40c,	// (0x0001cc38) main_cset_text_pane_t4_copy1

0xd41a,	// (0x0001cc46) main_cset_text_pane_t5_copy1

0xdc44,	// (0x0001d470) main_cset_text_pane_t6_copy1

0xdc52,	// (0x0001d47e) main_cset_text_pane_t7_copy1

0x72a8,	// (0x00016ad4) main_cset_text2_pane_t1_copy1

0x958d,	// (0x00018db9) main_ncimui_pane

0x3834,	// (0x00013060) popup_query_ncimui_window_ParamLimits

0x3834,	// (0x00013060) popup_query_ncimui_window

0xc55c,	// (0x0001bd88) field_cale_ev2_pane_g4_ParamLimits

0xc55c,	// (0x0001bd88) field_cale_ev2_pane_g4

0x54a1,	// (0x00014ccd) cell_video_dialer_keypad_pane_g2_ParamLimits

0x54a1,	// (0x00014ccd) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0001f0c1) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0001f0c1) cell_video_dialer_keypad_pane_g

0x54b9,	// (0x00014ce5) cell_video_dialer_keypad_pane_t1

0x952c,	// (0x00018d58) bg_popup_window_pane_cp012

0xa6ab,	// (0x00019ed7) heading_pane_cp06

0xdc7e,	// (0x0001d4aa) ncim_query_content_pane

0x952c,	// (0x00018d58) bg_popup_heading_pane_cp01

0xdc86,	// (0x0001d4b2) ncim_heading_pane_t1

0xdc94,	// (0x0001d4c0) ncim_indicator_popup_pane

0xdca6,	// (0x0001d4d2) ncim_query_button_pane

0xdcbc,	// (0x0001d4e8) ncim_query_content_pane_t1

0xdcce,	// (0x0001d4fa) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0001f427) ncim_query_content_pane_t

0xdd08,	// (0x0001d534) ncim_query_list_pane

0xdd1a,	// (0x0001d546) ncim_query_popup_pane

0xdc94,	// (0x0001d4c0) ncim_indicator_popup_pane_ParamLimits

0x7711,	// (0x00016f3d) ncim_query_content_pane_g1_ParamLimits

0x7711,	// (0x00016f3d) ncim_query_content_pane_g1

0xdcbc,	// (0x0001d4e8) ncim_query_content_pane_t1_ParamLimits

0xdcce,	// (0x0001d4fa) ncim_query_content_pane_t2_ParamLimits

0x771d,	// (0x00016f49) ncim_query_content_pane_t3_ParamLimits

0x771d,	// (0x00016f49) ncim_query_content_pane_t3

0x7745,	// (0x00016f71) ncim_query_content_pane_t4_ParamLimits

0x7745,	// (0x00016f71) ncim_query_content_pane_t4

0x776d,	// (0x00016f99) ncim_query_content_pane_t5_ParamLimits

0x776d,	// (0x00016f99) ncim_query_content_pane_t5

0xdce0,	// (0x0001d50c) ncim_query_content_pane_t6_ParamLimits

0xdce0,	// (0x0001d50c) ncim_query_content_pane_t6

0xfbfb,	// (0x0001f427) ncim_query_content_pane_t_ParamLimits

0xdd08,	// (0x0001d534) ncim_query_list_pane_ParamLimits

0xdd1a,	// (0x0001d546) ncim_query_popup_pane_ParamLimits

0xdd2e,	// (0x0001d55a) wait_bar_pane_cp04

0x952c,	// (0x00018d58) input_focus_pane_cp011

0xdd36,	// (0x0001d562) ncim_query_popup_pane_t1

0xdd44,	// (0x0001d570) ncim_list_query_list_pane_ParamLimits

0xdd44,	// (0x0001d570) ncim_list_query_list_pane

0x952c,	// (0x00018d58) bg_button_pane_cp027

0xdd57,	// (0x0001d583) ncim_query_button_pane_g1

0x952c,	// (0x00018d58) list_highlight_pane_cp012

0xdd61,	// (0x0001d58d) ncim_list_query_list_pane_g1

0xdd69,	// (0x0001d595) ncim_list_query_list_pane_t1

0xcf50,	// (0x0001c77c) cam4_indicators_pane_g3_ParamLimits

0xcf50,	// (0x0001c77c) cam4_indicators_pane_g3

0xcfd3,	// (0x0001c7ff) vid4_indicators_pane_g5_ParamLimits

0xcfd3,	// (0x0001c7ff) vid4_indicators_pane_g5

0xd6d6,	// (0x0001cf02) vid4_progress_pane_g5_ParamLimits

0xd6d6,	// (0x0001cf02) vid4_progress_pane_g5

0x75ff,	// (0x00016e2b) main_ncimui_pane_g1

0x7665,	// (0x00016e91) ncimui_group_query_pane_ParamLimits

0x7665,	// (0x00016e91) ncimui_group_query_pane

0x76ad,	// (0x00016ed9) ncimui_list_pane_ParamLimits

0x76ad,	// (0x00016ed9) ncimui_list_pane

0x76d4,	// (0x00016f00) ncimui_text_pane_ParamLimits

0x76d4,	// (0x00016f00) ncimui_text_pane

0x7795,	// (0x00016fc1) ncimui_text_pane_t1_ParamLimits

0x7795,	// (0x00016fc1) ncimui_text_pane_t1

0xdd77,	// (0x0001d5a3) ncimui_list_single_graphic_pane_ParamLimits

0xdd77,	// (0x0001d5a3) ncimui_list_single_graphic_pane

0x77b3,	// (0x00016fdf) ncimui_query_pane_ParamLimits

0x77b3,	// (0x00016fdf) ncimui_query_pane

0x952c,	// (0x00018d58) list_highlight_pane_cp013

0xdd87,	// (0x0001d5b3) ncim_list_query_list_pane_t1_copy1

0xdd61,	// (0x0001d58d) ncim_list_single_graphic_pane_g1

0xdd95,	// (0x0001d5c1) ncim_query_button_pane_cp01

0xdda1,	// (0x0001d5cd) ncim_query_entry_pane_ParamLimits

0xdda1,	// (0x0001d5cd) ncim_query_entry_pane

0xddb4,	// (0x0001d5e0) ncimui_query_pane_g1

0xddc0,	// (0x0001d5ec) ncimui_query_pane_t1_ParamLimits

0xddc0,	// (0x0001d5ec) ncimui_query_pane_t1

0x958d,	// (0x00018db9) input_focus_pane_cp012

0xddd9,	// (0x0001d605) ncim_query_entry_pane_t1

0x9cf0,	// (0x0001951c) main_im_pane_ParamLimits

0x958d,	// (0x00018db9) main_mobtv_pane_ParamLimits

0x958d,	// (0x00018db9) main_mobtv_pane

0x73c4,	// (0x00016bf0) main_cset6_slider_pane_g18_ParamLimits

0x73c4,	// (0x00016bf0) main_cset6_slider_pane_g18

0x73d0,	// (0x00016bfc) main_cset6_slider_pane_g19_ParamLimits

0x73d0,	// (0x00016bfc) main_cset6_slider_pane_g19

0xd316,	// (0x0001cb42) bg_main_mobtv_pane_ParamLimits

0xd316,	// (0x0001cb42) bg_main_mobtv_pane

0x77c6,	// (0x00016ff2) main_mobtv_info_pane

0x77d1,	// (0x00016ffd) main_mobtv_loading_pane_ParamLimits

0x77d1,	// (0x00016ffd) main_mobtv_loading_pane

0xddeb,	// (0x0001d617) main_mobtv_pg_channel_list_pane

0xddf5,	// (0x0001d621) main_mobtv_pg_hdr_pane

0x77de,	// (0x0001700a) main_mobtv_programe_curr_pane_ParamLimits

0x77de,	// (0x0001700a) main_mobtv_programe_curr_pane

0x77eb,	// (0x00017017) main_mobtv_programe_next_pane_ParamLimits

0x77eb,	// (0x00017017) main_mobtv_programe_next_pane

0xddfe,	// (0x0001d62a) popup_mobtv_noti_window

0xc2c7,	// (0x0001baf3) main_tv_pg_hdr_pane_g1

0xde08,	// (0x0001d634) main_tv_pg_hdr_pane_g2

0xde10,	// (0x0001d63c) main_tv_pg_hdr_pane_g3

0xde18,	// (0x0001d644) main_tv_pg_hdr_pane_g4

0xde20,	// (0x0001d64c) main_tv_pg_hdr_pane_g5

0xde2a,	// (0x0001d656) main_tv_pg_hdr_pane_g6

0xde34,	// (0x0001d660) main_tv_pg_hdr_pane_g7

0xde3e,	// (0x0001d66a) main_tv_pg_hdr_pane_g8

0xde48,	// (0x0001d674) main_tv_pg_hdr_pane_g9

0xde52,	// (0x0001d67e) main_tv_pg_hdr_pane_g10

0xde5c,	// (0x0001d688) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0001f434) main_tv_pg_hdr_pane_g

0xde66,	// (0x0001d692) main_tv_pg_hdr_pane_t1

0xde74,	// (0x0001d6a0) main_tv_pg_hdr_pane_t2

0xde82,	// (0x0001d6ae) main_tv_pg_hdr_pane_t3

0xde92,	// (0x0001d6be) main_tv_pg_hdr_pane_t4

0xdea2,	// (0x0001d6ce) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0001f44b) main_tv_pg_hdr_pane_t

0xdeb2,	// (0x0001d6de) single_mobtv_pg_channel_pane_ParamLimits

0xdeb2,	// (0x0001d6de) single_mobtv_pg_channel_pane

0xdec4,	// (0x0001d6f0) single_mobtv_pg_channel_table_pane

0xdecd,	// (0x0001d6f9) single_mobtv_pg_channel_thumb_pane

0xded6,	// (0x0001d702) single_tv_pg_channel_pane_g1

0xdedf,	// (0x0001d70b) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0001f456) single_tv_pg_channel_pane_g

0xc4f7,	// (0x0001bd23) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc4f7,	// (0x0001bd23) bg_single_mobtv_pg_channel_thumb_pane

0xdee8,	// (0x0001d714) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdee8,	// (0x0001d714) single_mobtv_pg_channel_thumb_pane_g1

0xdef6,	// (0x0001d722) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdef6,	// (0x0001d722) single_mobtv_pg_channel_thumb_pane_g2

0xdf02,	// (0x0001d72e) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf02,	// (0x0001d72e) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0001f45b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0001f45b) single_mobtv_pg_channel_thumb_pane_g

0xdf0e,	// (0x0001d73a) single_mobtv_pg_channel_thumb_pane_t1

0xdf1c,	// (0x0001d748) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0001f462) single_mobtv_pg_channel_thumb_pane_t

0xc2c7,	// (0x0001baf3) bg_single_mobtv_pg_channel_table_pane_g1

0xc2c7,	// (0x0001baf3) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0001ef08) bg_single_mobtv_pg_channel_table_pane_g

0xdf2a,	// (0x0001d756) single_mobtv_pg_channel_table_pane_t1

0xdf38,	// (0x0001d764) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0001f467) single_mobtv_pg_channel_table_pane_t

0x7800,	// (0x0001702c) main_mobtv_info_pane_g1_ParamLimits

0x7800,	// (0x0001702c) main_mobtv_info_pane_g1

0x781e,	// (0x0001704a) main_mobtv_info_pane_t1_ParamLimits

0x781e,	// (0x0001704a) main_mobtv_info_pane_t1

0x7896,	// (0x000170c2) main_mobtv_info_pane_t2_ParamLimits

0x7896,	// (0x000170c2) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0001f471) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0001f471) main_mobtv_info_pane_t

0x7925,	// (0x00017151) wait_bar_pane_cp05

0x7937,	// (0x00017163) main_mobtv_loading_pane_g1_ParamLimits

0x7937,	// (0x00017163) main_mobtv_loading_pane_g1

0x7948,	// (0x00017174) main_mobtv_loading_pane_g2_ParamLimits

0x7948,	// (0x00017174) main_mobtv_loading_pane_g2

0x7954,	// (0x00017180) main_mobtv_loading_pane_g3_ParamLimits

0x7954,	// (0x00017180) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0001f478) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0001f478) main_mobtv_loading_pane_g

0xdf46,	// (0x0001d772) main_mobtv_loading_pane_t1_ParamLimits

0xdf46,	// (0x0001d772) main_mobtv_loading_pane_t1

0xdf5e,	// (0x0001d78a) main_mobtv_loading_pane_t2_ParamLimits

0xdf5e,	// (0x0001d78a) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0001f47f) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0001f47f) main_mobtv_loading_pane_t

0x7967,	// (0x00017193) wait_bar_pane_cp06_ParamLimits

0x7967,	// (0x00017193) wait_bar_pane_cp06

0xdf82,	// (0x0001d7ae) main_mobtv_programe_curr_pane_t1

0xdf90,	// (0x0001d7bc) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0001f484) main_mobtv_programe_curr_pane_t

0xdf9e,	// (0x0001d7ca) main_mobtv_programe_next_pane_t1

0xdfac,	// (0x0001d7d8) main_mobtv_programe_next_pane_t2

0xdfba,	// (0x0001d7e6) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0001f489) main_mobtv_programe_next_pane_t

0x952c,	// (0x00018d58) bg_popup_mobtv_noti_window_pane

0xdfc8,	// (0x0001d7f4) popup_mobtv_noti_window_g1

0xdfd0,	// (0x0001d7fc) popup_mobtv_noti_window_t1

0xdfde,	// (0x0001d80a) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0001f490) popup_mobtv_noti_window_t

0xc2c7,	// (0x0001baf3) bg_popup_mobtv_noti_window_pane_g1

0x952c,	// (0x00018d58) sc_clock_pane

0x952c,	// (0x00018d58) main_fs_bigclock_pane

0x7017,	// (0x00016843) blid2_tripm_pane_t4_ParamLimits

0x7017,	// (0x00016843) blid2_tripm_pane_t4

0x7976,	// (0x000171a2) sc_clock_pane_g1_ParamLimits

0x7976,	// (0x000171a2) sc_clock_pane_g1

0x7988,	// (0x000171b4) sc_clock_pane_t1_ParamLimits

0x7988,	// (0x000171b4) sc_clock_pane_t1

0x79ac,	// (0x000171d8) sc_clock_pane_t2_ParamLimits

0x79ac,	// (0x000171d8) sc_clock_pane_t2

0x79c4,	// (0x000171f0) sc_clock_pane_t3_ParamLimits

0x79c4,	// (0x000171f0) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0001f495) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0001f495) sc_clock_pane_t

0x89ba,	// (0x000181e6) main_fs_bigclock_indicator_pane_ParamLimits

0x89ba,	// (0x000181e6) main_fs_bigclock_indicator_pane

0x7a80,	// (0x000172ac) main_fs_bigclock_pane_g1_ParamLimits

0x7a80,	// (0x000172ac) main_fs_bigclock_pane_g1

0x89c6,	// (0x000181f2) main_fs_bigclock_pane_t1_ParamLimits

0x89c6,	// (0x000181f2) main_fs_bigclock_pane_t1

0x89d8,	// (0x00018204) main_fs_bigclock_pane_t2_ParamLimits

0x89d8,	// (0x00018204) main_fs_bigclock_pane_t2

0x89ec,	// (0x00018218) main_fs_bigclock_pane_t3_ParamLimits

0x89ec,	// (0x00018218) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0001f69a) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0001f69a) main_fs_bigclock_pane_t

0xec2a,	// (0x0001e456) main_fs_bigclock_indicator_pane_g1

0xdcae,	// (0x0001d4da) ncim_query_content_pane_g2_ParamLimits

0xdcae,	// (0x0001d4da) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0001f422) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0001f422) ncim_query_content_pane_g

0x79db,	// (0x00017207) sc_clock_pane_t4_ParamLimits

0x79db,	// (0x00017207) sc_clock_pane_t4

0x958d,	// (0x00018db9) main_radioblah_pane

0xce91,	// (0x0001c6bd) cell_call4_button_pane_t1_copy1_ParamLimits

0xce91,	// (0x0001c6bd) cell_call4_button_pane_t1_copy1

0x7617,	// (0x00016e43) main_ncimui_pane_t1_ParamLimits

0x7617,	// (0x00016e43) main_ncimui_pane_t1

0x7631,	// (0x00016e5d) main_ncimui_pane_t2_ParamLimits

0x7631,	// (0x00016e5d) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0001f41b) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0001f41b) main_ncimui_pane_t

0xe131,	// (0x0001d95d) main_radioblah_anim_pane_ParamLimits

0xe131,	// (0x0001d95d) main_radioblah_anim_pane

0xe142,	// (0x0001d96e) main_radioblah_info_pane_ParamLimits

0xe142,	// (0x0001d96e) main_radioblah_info_pane

0xe156,	// (0x0001d982) main_radioblah_pane_t1_ParamLimits

0xe156,	// (0x0001d982) main_radioblah_pane_t1

0xe172,	// (0x0001d99e) main_radioblah_pane_t2_ParamLimits

0xe172,	// (0x0001d99e) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0001f4b6) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0001f4b6) main_radioblah_pane_t

0x7add,	// (0x00017309) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7add,	// (0x00017309) main_radioblah_rocker_ctrl_pane

0xe1ba,	// (0x0001d9e6) main_radioblah_info_pane_t1_ParamLimits

0xe1ba,	// (0x0001d9e6) main_radioblah_info_pane_t1

0x7b35,	// (0x00017361) main_radioblah_info_pane_t2_ParamLimits

0x7b35,	// (0x00017361) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0001f4bf) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0001f4bf) main_radioblah_info_pane_t

0xc2c7,	// (0x0001baf3) main_radioblah_rocker_ctrl_pane_g1

0x7be5,	// (0x00017411) main_radioblah_rocker_ctrl_pane_g2

0x7bed,	// (0x00017419) main_radioblah_rocker_ctrl_pane_g3

0x7bf5,	// (0x00017421) main_radioblah_rocker_ctrl_pane_g4

0x7bfd,	// (0x00017429) main_radioblah_rocker_ctrl_pane_g5

0x7c05,	// (0x00017431) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0001f4c8) main_radioblah_rocker_ctrl_pane_g

0x72a8,	// (0x00016ad4) main_cset_text2_pane_t1_copy1_ParamLimits

0xcf21,	// (0x0001c74d) cam4_image_uncrop_qvga_pane

0xcf76,	// (0x0001c7a2) vid4_image_uncrop_qcif_pane

0xd8e9,	// (0x0001d115) cam6_image_uncrop_qvga_pane_ParamLimits

0xd8e9,	// (0x0001d115) cam6_image_uncrop_qvga_pane

0xd9b1,	// (0x0001d1dd) vid6_image_uncrop_qcif_pane_ParamLimits

0xd9b1,	// (0x0001d1dd) vid6_image_uncrop_qcif_pane

0x952c,	// (0x00018d58) bg_popup_preview_window_pane_cp03

0xdc60,	// (0x0001d48c) list_cset_text2_pane

0xdc68,	// (0x0001d494) main_cset6_text2_pane_g1

0xdc70,	// (0x0001d49c) main_cset6_text2_pane_t1

0x7c0d,	// (0x00017439) list_cset_text2_pane_t1_ParamLimits

0x7c0d,	// (0x00017439) list_cset_text2_pane_t1

0x958d,	// (0x00018db9) main_radioblah_pane_ParamLimits

0x7911,	// (0x0001713d) main_mobtv_info_pane_t3_ParamLimits

0x7911,	// (0x0001713d) main_mobtv_info_pane_t3

0x7acb,	// (0x000172f7) main_radioblah_pane_g1

0x7b05,	// (0x00017331) main_radioblah_info_pane_g1

0x7b8a,	// (0x000173b6) main_radioblah_info_pane_t3_ParamLimits

0x7b8a,	// (0x000173b6) main_radioblah_info_pane_t3

0x2067,	// (0x00011893) highlight_cell_cale_month_pane_ParamLimits

0x2067,	// (0x00011893) highlight_cell_cale_month_pane

0x952c,	// (0x00018d58) main_phob_fisheye_pane

0xc5df,	// (0x0001be0b) scroll_pane_cp0031_ParamLimits

0xc5df,	// (0x0001be0b) scroll_pane_cp0031

0xdac3,	// (0x0001d2ef) wait_bar_pane_cp08_ParamLimits

0x2147,	// (0x00011973) cset_list_set_pane_copy1_ParamLimits

0xe1f4,	// (0x0001da20) highlight_cell_cale_month_pane_g1

0x7c26,	// (0x00017452) highlight_cell_cale_month_pane_t1

0xd6b6,	// (0x0001cee2) list_gen_pane_cp01

0xd198,	// (0x0001c9c4) scroll_pane_01

0x7c34,	// (0x00017460) list_single_double_fisheye_pane

0x7c3d,	// (0x00017469) list_double_fisheye_pane_g1_ParamLimits

0x7c3d,	// (0x00017469) list_double_fisheye_pane_g1

0x7c49,	// (0x00017475) list_double_fisheye_pane_g2_ParamLimits

0x7c49,	// (0x00017475) list_double_fisheye_pane_g2

0x7c5d,	// (0x00017489) list_double_fisheye_pane_g3_ParamLimits

0x7c5d,	// (0x00017489) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0001f4d5) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0001f4d5) list_double_fisheye_pane_g

0x7c86,	// (0x000174b2) list_double_fisheye_pane_t1_ParamLimits

0x7c86,	// (0x000174b2) list_double_fisheye_pane_t1

0x7ca1,	// (0x000174cd) list_double_fisheye_pane_t2_ParamLimits

0x7ca1,	// (0x000174cd) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0001f4e0) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0001f4e0) list_double_fisheye_pane_t

0x952c,	// (0x00018d58) main_call5_pane

0x7a06,	// (0x00017232) sc_swipe_pane_ParamLimits

0x7a06,	// (0x00017232) sc_swipe_pane

0x7cd6,	// (0x00017502) call5_image_pane_ParamLimits

0x7cd6,	// (0x00017502) call5_image_pane

0x7cf3,	// (0x0001751f) call5_swipe_1_pane_ParamLimits

0x7cf3,	// (0x0001751f) call5_swipe_1_pane

0x7d06,	// (0x00017532) call5_swipe_2_pane_ParamLimits

0x7d06,	// (0x00017532) call5_swipe_2_pane

0x7d33,	// (0x0001755f) popup_call5_audio_first_window_ParamLimits

0x7d33,	// (0x0001755f) popup_call5_audio_first_window

0xc4f7,	// (0x0001bd23) call5_swipe_1_pane_g1_ParamLimits

0xc4f7,	// (0x0001bd23) call5_swipe_1_pane_g1

0xe1fc,	// (0x0001da28) call5_swipe_1_pane_g2_ParamLimits

0xe1fc,	// (0x0001da28) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0001f4e5) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0001f4e5) call5_swipe_1_pane_g

0xe208,	// (0x0001da34) call5_swipe_1_pane_t1_ParamLimits

0xe208,	// (0x0001da34) call5_swipe_1_pane_t1

0xc4f7,	// (0x0001bd23) call5_swipe_2_pane_g1_ParamLimits

0xc4f7,	// (0x0001bd23) call5_swipe_2_pane_g1

0xe21d,	// (0x0001da49) call5_swipe_2_pane_g2_ParamLimits

0xe21d,	// (0x0001da49) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0001f4ea) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0001f4ea) call5_swipe_2_pane_g

0xe229,	// (0x0001da55) call5_swipe_2_pane_t1_ParamLimits

0xe229,	// (0x0001da55) call5_swipe_2_pane_t1

0xe23e,	// (0x0001da6a) sc_swipe_pane_g1_ParamLimits

0xe23e,	// (0x0001da6a) sc_swipe_pane_g1

0xe24b,	// (0x0001da77) sc_swipe_pane_g2_ParamLimits

0xe24b,	// (0x0001da77) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0001f4ef) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0001f4ef) sc_swipe_pane_g

0xe257,	// (0x0001da83) sc_swipe_pane_t1_ParamLimits

0xe257,	// (0x0001da83) sc_swipe_pane_t1

0x952c,	// (0x00018d58) main_cmail_launcher_pane

0x7d48,	// (0x00017574) aid_size_cell_cmail_l_ParamLimits

0x7d48,	// (0x00017574) aid_size_cell_cmail_l

0x7d62,	// (0x0001758e) grid_cmail_l_pane_ParamLimits

0x7d62,	// (0x0001758e) grid_cmail_l_pane

0x7d7d,	// (0x000175a9) cell_cmail_l_pane_ParamLimits

0x7d7d,	// (0x000175a9) cell_cmail_l_pane

0x7da5,	// (0x000175d1) cell_cmail_l_pane_g1_ParamLimits

0x7da5,	// (0x000175d1) cell_cmail_l_pane_g1

0x7db1,	// (0x000175dd) cell_cmail_l_pane_t1_ParamLimits

0x7db1,	// (0x000175dd) cell_cmail_l_pane_t1

0xe26c,	// (0x0001da98) cell_cmail_l_pane_t2_ParamLimits

0xe26c,	// (0x0001da98) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0001f4f4) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0001f4f4) cell_cmail_l_pane_t

0x958d,	// (0x00018db9) grid_highlight_pane_cp018_ParamLimits

0x958d,	// (0x00018db9) grid_highlight_pane_cp018

0xfcb9,	// (0x0000f4e5) main2_pane_ParamLimits

0xfcb9,	// (0x0000f4e5) main2_pane

0x9dc9,	// (0x000195f5) popup_sp_fs_action_menu_bg_pane_g1

0x9dd1,	// (0x000195fd) popup_sp_fs_action_menu_bg_pane_g2

0x9dd9,	// (0x00019605) popup_sp_fs_action_menu_bg_pane_g3

0x9de1,	// (0x0001960d) popup_sp_fs_action_menu_bg_pane_g4

0x9de9,	// (0x00019615) popup_sp_fs_action_menu_bg_pane_g5

0x9df1,	// (0x0001961d) popup_sp_fs_action_menu_bg_pane_g6

0x9df9,	// (0x00019625) popup_sp_fs_action_menu_bg_pane_g7

0x9e01,	// (0x0001962d) popup_sp_fs_action_menu_bg_pane_g8

0x9e09,	// (0x00019635) popup_sp_fs_action_menu_bg_pane_g9

0x9e11,	// (0x0001963d) popup_sp_fs_action_menu_bg_pane_g10

0x9e11,	// (0x0001963d) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0001e9b6) popup_sp_fs_action_menu_bg_pane_g

0xd33f,	// (0x0001cb6b) list_medium_line_x2_t3_g3_g1_ParamLimits

0xd33f,	// (0x0001cb6b) list_medium_line_x2_t3_g3_g1

0x0ed6,	// (0x00010702) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0ed6,	// (0x00010702) list_medium_line_x2_t3_g3_g2

0x0ee2,	// (0x0001070e) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0ee2,	// (0x0001070e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0001ea64) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0001ea64) list_medium_line_x2_t3_g3_g

0x0eee,	// (0x0001071a) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0eee,	// (0x0001071a) list_medium_line_x2_t3_g3_t1

0x0f03,	// (0x0001072f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0f03,	// (0x0001072f) list_medium_line_x2_t3_g3_t2

0x0f17,	// (0x00010743) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0f17,	// (0x00010743) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0001ea6b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0001ea6b) list_medium_line_x2_t3_g3_t

0xd33f,	// (0x0001cb6b) list_medium_line_x2_t3_g2_g1_ParamLimits

0xd33f,	// (0x0001cb6b) list_medium_line_x2_t3_g2_g1

0x0ee2,	// (0x0001070e) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0ee2,	// (0x0001070e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0001ea72) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0001ea72) list_medium_line_x2_t3_g2_g

0x0f2c,	// (0x00010758) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0f2c,	// (0x00010758) list_medium_line_x2_t3_g2_t1

0x0f42,	// (0x0001076e) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0f42,	// (0x0001076e) list_medium_line_x2_t3_g2_t2

0x0f54,	// (0x00010780) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0f54,	// (0x00010780) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0001ea77) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0001ea77) list_medium_line_x2_t3_g2_t

0xd33f,	// (0x0001cb6b) list_medium_line_x2_t4_g4_g1_ParamLimits

0xd33f,	// (0x0001cb6b) list_medium_line_x2_t4_g4_g1

0x0f72,	// (0x0001079e) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0f72,	// (0x0001079e) list_medium_line_x2_t4_g4_g2

0x0ed6,	// (0x00010702) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0ed6,	// (0x00010702) list_medium_line_x2_t4_g4_g3

0x0f7e,	// (0x000107aa) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0f7e,	// (0x000107aa) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0001ea7e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0001ea7e) list_medium_line_x2_t4_g4_g

0x0f8a,	// (0x000107b6) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0f8a,	// (0x000107b6) list_medium_line_x2_t4_g4_t1

0x0fa1,	// (0x000107cd) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0fa1,	// (0x000107cd) list_medium_line_x2_t4_g4_t2

0x0fb6,	// (0x000107e2) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0fb6,	// (0x000107e2) list_medium_line_x2_t4_g4_t3

0x0fc8,	// (0x000107f4) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0fc8,	// (0x000107f4) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0001ea87) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0001ea87) list_medium_line_x2_t4_g4_t

0xd33f,	// (0x0001cb6b) list_medium_line_x2_t2_g4_g1_ParamLimits

0xd33f,	// (0x0001cb6b) list_medium_line_x2_t2_g4_g1

0x0f72,	// (0x0001079e) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0f72,	// (0x0001079e) list_medium_line_x2_t2_g4_g2

0x0ed6,	// (0x00010702) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0ed6,	// (0x00010702) list_medium_line_x2_t2_g4_g3

0x0ee2,	// (0x0001070e) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0ee2,	// (0x0001070e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0001eaee) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0001eaee) list_medium_line_x2_t2_g4_g

0x208d,	// (0x000118b9) list_medium_line_x2_t2_g4_t1_ParamLimits

0x208d,	// (0x000118b9) list_medium_line_x2_t2_g4_t1

0x0f17,	// (0x00010743) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0f17,	// (0x00010743) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0001eaf7) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0001eaf7) list_medium_line_x2_t2_g4_t

0xd33f,	// (0x0001cb6b) list_medium_line_x2_t2_g3_g1_ParamLimits

0xd33f,	// (0x0001cb6b) list_medium_line_x2_t2_g3_g1

0x0ed6,	// (0x00010702) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0ed6,	// (0x00010702) list_medium_line_x2_t2_g3_g2

0x0ee2,	// (0x0001070e) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0ee2,	// (0x0001070e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0001ea64) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0001ea64) list_medium_line_x2_t2_g3_g

0x20a2,	// (0x000118ce) list_medium_line_x2_t2_g3_t1_ParamLimits

0x20a2,	// (0x000118ce) list_medium_line_x2_t2_g3_t1

0x0f17,	// (0x00010743) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0f17,	// (0x00010743) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0001eafc) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0001eafc) list_medium_line_x2_t2_g3_t

0x21ec,	// (0x00011a18) main_sp_fs_list_pane_ParamLimits

0x21ec,	// (0x00011a18) main_sp_fs_list_pane

0x21f8,	// (0x00011a24) sp_fs_scroll_pane_ParamLimits

0x21f8,	// (0x00011a24) sp_fs_scroll_pane

0x2204,	// (0x00011a30) list_medium_line_x2_t3_t1

0x2214,	// (0x00011a40) list_medium_line_x2_t3_t2

0x2222,	// (0x00011a4e) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0001eb47) list_medium_line_x2_t3_t

0x2230,	// (0x00011a5c) list_medium_line_x3_t4_t1

0x2240,	// (0x00011a6c) list_medium_line_x3_t4_t2

0x224e,	// (0x00011a7a) list_medium_line_x3_t4_t3

0x2222,	// (0x00011a4e) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0001eb4e) list_medium_line_x3_t4_t

0x225c,	// (0x00011a88) list_medium_line_x4_t5_t1

0x226c,	// (0x00011a98) list_medium_line_x4_t5_t2

0x224e,	// (0x00011a7a) list_medium_line_x4_t5_t3

0x227a,	// (0x00011aa6) list_medium_line_x4_t5_t4

0x2222,	// (0x00011a4e) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0001eb57) list_medium_line_x4_t5_t

0xd33f,	// (0x0001cb6b) list_medium_line_t4_g4_g1_ParamLimits

0xd33f,	// (0x0001cb6b) list_medium_line_t4_g4_g1

0x0f7e,	// (0x000107aa) list_medium_line_t4_g4_g2_ParamLimits

0x0f7e,	// (0x000107aa) list_medium_line_t4_g4_g2

0x2288,	// (0x00011ab4) list_medium_line_t4_g4_g3_ParamLimits

0x2288,	// (0x00011ab4) list_medium_line_t4_g4_g3

0x0ee2,	// (0x0001070e) list_medium_line_t4_g4_g4_ParamLimits

0x0ee2,	// (0x0001070e) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0001eb62) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0001eb62) list_medium_line_t4_g4_g

0x2294,	// (0x00011ac0) list_medium_line_t4_g4_t1_ParamLimits

0x2294,	// (0x00011ac0) list_medium_line_t4_g4_t1

0x22a9,	// (0x00011ad5) list_medium_line_t4_g4_t2_ParamLimits

0x22a9,	// (0x00011ad5) list_medium_line_t4_g4_t2

0x22bf,	// (0x00011aeb) list_medium_line_t4_g4_t3_ParamLimits

0x22bf,	// (0x00011aeb) list_medium_line_t4_g4_t3

0x0f17,	// (0x00010743) list_medium_line_t4_g4_t4_ParamLimits

0x0f17,	// (0x00010743) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0001eb6b) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0001eb6b) list_medium_line_t4_g4_t

0x239b,	// (0x00011bc7) chi_dic_find_pane_g1

0x35ba,	// (0x00012de6) main_tport_pane

0xd2df,	// (0x0001cb0b) list_medium_line_plain_t1

0x6730,	// (0x00015f5c) list_medium_line_t2_g2_g1_ParamLimits

0x6730,	// (0x00015f5c) list_medium_line_t2_g2_g1

0xd38f,	// (0x0001cbbb) list_medium_line_t2_g2_g2_ParamLimits

0xd38f,	// (0x0001cbbb) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0001f22c) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0001f22c) list_medium_line_t2_g2_g

0x673c,	// (0x00015f68) list_medium_line_t2_g2_t1_ParamLimits

0x673c,	// (0x00015f68) list_medium_line_t2_g2_t1

0x6753,	// (0x00015f7f) list_medium_line_t2_g2_t2_ParamLimits

0x6753,	// (0x00015f7f) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0001f231) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0001f231) list_medium_line_t2_g2_t

0xd739,	// (0x0001cf65) aid_sp_fs_list_icon_a_sm

0xd741,	// (0x0001cf6d) aid_sp_fs_list_icon_d

0xd749,	// (0x0001cf75) aid_sp_fs_text_primary

0xd752,	// (0x0001cf7e) aid_sp_fs_text_secondary

0x6dcd,	// (0x000165f9) list_medium_line

0x6dcd,	// (0x000165f9) list_medium_line_g2

0x6dcd,	// (0x000165f9) list_medium_line_g3

0x6dcd,	// (0x000165f9) list_medium_line_plain

0x6dcd,	// (0x000165f9) list_medium_line_plain_t2

0x6dcd,	// (0x000165f9) list_medium_line_plain_t3

0x6dcd,	// (0x000165f9) list_medium_line_right_icon

0x6dcd,	// (0x000165f9) list_medium_line_right_iconx2

0x6dcd,	// (0x000165f9) list_medium_line_t2

0x6dcd,	// (0x000165f9) list_medium_line_t2_g2

0x6dcd,	// (0x000165f9) list_medium_line_t2_g3

0x6dcd,	// (0x000165f9) list_medium_line_t2_right_icon

0x6dcd,	// (0x000165f9) list_medium_line_t2_right_iconx2

0x6dcd,	// (0x000165f9) list_medium_line_t3

0x6dcd,	// (0x000165f9) list_medium_line_t3_g2

0x6dcd,	// (0x000165f9) list_medium_line_t3_g3

0x6dcd,	// (0x000165f9) list_medium_line_t3_right_iconx2

0x6dd6,	// (0x00016602) list_medium_line_t4_g4

0x6dcd,	// (0x000165f9) list_medium_line_x2

0x6dcd,	// (0x000165f9) list_medium_line_x2_t2_g2

0x6dcd,	// (0x000165f9) list_medium_line_x2_t2_g3

0x6dcd,	// (0x000165f9) list_medium_line_x2_t2_g4

0x6dcd,	// (0x000165f9) list_medium_line_x2_t3

0x6dcd,	// (0x000165f9) list_medium_line_x2_t3_g2

0x6dcd,	// (0x000165f9) list_medium_line_x2_t3_g3

0x6dcd,	// (0x000165f9) list_medium_line_x2_t3_g4

0x6dcd,	// (0x000165f9) list_medium_line_x2_t4_g2

0x6dcd,	// (0x000165f9) list_medium_line_x2_t4_g4

0x6ddf,	// (0x0001660b) list_medium_line_x3

0x6ddf,	// (0x0001660b) list_medium_line_x3_t4

0x6ddf,	// (0x0001660b) list_medium_line_x3_t4_g4

0x6dd6,	// (0x00016602) list_medium_line_x4_t4

0x6dd6,	// (0x00016602) list_medium_line_x4_t4_g7

0x6dd6,	// (0x00016602) list_medium_line_x4_t5

0x6de8,	// (0x00016614) list_single_fs_dyc_pane_ParamLimits

0x6de8,	// (0x00016614) list_single_fs_dyc_pane

0xd33f,	// (0x0001cb6b) list_medium_line_x4_t4_g7_g1_ParamLimits

0xd33f,	// (0x0001cb6b) list_medium_line_x4_t4_g7_g1

0x751c,	// (0x00016d48) list_medium_line_x4_t4_g7_g2_ParamLimits

0x751c,	// (0x00016d48) list_medium_line_x4_t4_g7_g2

0x7528,	// (0x00016d54) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7528,	// (0x00016d54) list_medium_line_x4_t4_g7_g3

0x7537,	// (0x00016d63) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7537,	// (0x00016d63) list_medium_line_x4_t4_g7_g4

0x7543,	// (0x00016d6f) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7543,	// (0x00016d6f) list_medium_line_x4_t4_g7_g5

0x7552,	// (0x00016d7e) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7552,	// (0x00016d7e) list_medium_line_x4_t4_g7_g6

0x7561,	// (0x00016d8d) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7561,	// (0x00016d8d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0001f3fc) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0001f3fc) list_medium_line_x4_t4_g7_g

0x756d,	// (0x00016d99) list_medium_line_x4_t4_g7_t1_ParamLimits

0x756d,	// (0x00016d99) list_medium_line_x4_t4_g7_t1

0x7582,	// (0x00016dae) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7582,	// (0x00016dae) list_medium_line_x4_t4_g7_t2

0x7597,	// (0x00016dc3) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7597,	// (0x00016dc3) list_medium_line_x4_t4_g7_t3

0x75ac,	// (0x00016dd8) list_medium_line_x4_t4_g7_t4_ParamLimits

0x75ac,	// (0x00016dd8) list_medium_line_x4_t4_g7_t4

0x75be,	// (0x00016dea) list_medium_line_x4_t4_g7_t5_ParamLimits

0x75be,	// (0x00016dea) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0001f40b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0001f40b) list_medium_line_x4_t4_g7_t

0x75d0,	// (0x00016dfc) list_single_dyc_row_pane_ParamLimits

0x75d0,	// (0x00016dfc) list_single_dyc_row_pane

0x7cc3,	// (0x000174ef) call5_gesture_pane_ParamLimits

0x7cc3,	// (0x000174ef) call5_gesture_pane

0x7d19,	// (0x00017545) call5_windows_pane_ParamLimits

0x7d19,	// (0x00017545) call5_windows_pane

0x7dc7,	// (0x000175f3) call5_swipe_1_pane_cp_ParamLimits

0x7dc7,	// (0x000175f3) call5_swipe_1_pane_cp

0x7dd3,	// (0x000175ff) call5_swipe_2_pane_cp_ParamLimits

0x7dd3,	// (0x000175ff) call5_swipe_2_pane_cp

0x9f1c,	// (0x00019748) call5_image_pane_cp

0x7ddf,	// (0x0001760b) popup_call5_audio_first_window_cp_ParamLimits

0x7ddf,	// (0x0001760b) popup_call5_audio_first_window_cp

0xe23e,	// (0x0001da6a) call5_swipe_1_pane_g1_cp_ParamLimits

0xe23e,	// (0x0001da6a) call5_swipe_1_pane_g1_cp

0xe27e,	// (0x0001daaa) call5_swipe_1_pane_g2_cp

0xe257,	// (0x0001da83) call5_swipe_1_pane_t1_cp_ParamLimits

0xe257,	// (0x0001da83) call5_swipe_1_pane_t1_cp

0xe23e,	// (0x0001da6a) call5_swipe_2_pane_g1_cp_ParamLimits

0xe23e,	// (0x0001da6a) call5_swipe_2_pane_g1_cp

0xe286,	// (0x0001dab2) call5_swipe_2_pane_g2_cp

0xe28e,	// (0x0001daba) call5_swipe_2_pane_t1_cp_ParamLimits

0xe28e,	// (0x0001daba) call5_swipe_2_pane_t1_cp

0x958d,	// (0x00018db9) main_sp_fs_email_pane

0xe2a3,	// (0x0001dacf) main_sp_fs_listscroll_pane_te

0xe2ac,	// (0x0001dad8) popup_sp_fs_action_menu_pane_ParamLimits

0xe2ac,	// (0x0001dad8) popup_sp_fs_action_menu_pane

0xc2c7,	// (0x0001baf3) bg_sp_fs_ctrlbar_pane_g1

0xc880,	// (0x0001c0ac) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc892,	// (0x0001c0be) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc889,	// (0x0001c0b5) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc2c7,	// (0x0001baf3) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0001f4f9) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc0a6,	// (0x0001b8d2) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc0a6,	// (0x0001b8d2) bg_sp_fs_ctrlbar_ddmenu_pane

0xe2f2,	// (0x0001db1e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe2f2,	// (0x0001db1e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2fe,	// (0x0001db2a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe2fe,	// (0x0001db2a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0001f502) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0001f502) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe30a,	// (0x0001db36) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe30a,	// (0x0001db36) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe324,	// (0x0001db50) list_medium_line_t2_right_icon_g1

0x7ded,	// (0x00017619) list_medium_line_t2_right_icon_t1

0x7dfd,	// (0x00017629) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0001f507) list_medium_line_t2_right_icon_t

0xbdba,	// (0x0001b5e6) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbdba,	// (0x0001b5e6) bg_sp_fs_ctrlbar_pane

0x7e5c,	// (0x00017688) main_sp_fs_ctrlbar_button_pane_cp01

0x7e66,	// (0x00017692) main_sp_fs_ctrlbar_ddmenu_pane

0xd33f,	// (0x0001cb6b) main_sp_fs_ctrlbar_pane_g1

0xe364,	// (0x0001db90) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0001f50c) main_sp_fs_ctrlbar_pane_g

0xe370,	// (0x0001db9c) main_sp_fs_ctrlbar_pane_t1

0x7e70,	// (0x0001769c) main_sp_fs_ctrlbar_pane

0x7e94,	// (0x000176c0) main_sp_fs_listscroll_pane_te_cp01

0x7eb4,	// (0x000176e0) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7eb4,	// (0x000176e0) popup_sp_fs_action_menu_pane_cp01

0x958d,	// (0x00018db9) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x958d,	// (0x00018db9) bg_sp_fs_highlight_list_pane_cp01

0xe3a0,	// (0x0001dbcc) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe3a0,	// (0x0001dbcc) sp_fs_action_menu_list_gene_pane_g1

0xe3af,	// (0x0001dbdb) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe3af,	// (0x0001dbdb) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0001f516) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0001f516) sp_fs_action_menu_list_gene_pane_g

0xe3bc,	// (0x0001dbe8) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe3bc,	// (0x0001dbe8) sp_fs_action_menu_list_gene_pane_t1

0xe3d4,	// (0x0001dc00) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe3d4,	// (0x0001dc00) sp_fs_action_menu_list_gene_pane

0xe3f7,	// (0x0001dc23) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe3f7,	// (0x0001dc23) popup_sp_fs_action_menu_bg_pane

0xe405,	// (0x0001dc31) sp_fs_action_menu_list_pane_ParamLimits

0xe405,	// (0x0001dc31) sp_fs_action_menu_list_pane

0xe429,	// (0x0001dc55) sp_fs_scroll_pane_cp01_ParamLimits

0xe429,	// (0x0001dc55) sp_fs_scroll_pane_cp01

0x7eea,	// (0x00017716) list_medium_line_plain_t2_t1

0x7efa,	// (0x00017726) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0001f51b) list_medium_line_plain_t2_t

0x7f0a,	// (0x00017736) list_medium_line_plain_t3_t1

0x7f1a,	// (0x00017746) list_medium_line_plain_t3_t2

0x7f28,	// (0x00017754) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0001f520) list_medium_line_plain_t3_t

0xd33f,	// (0x0001cb6b) list_medium_line_x2_t2_g2_g1_ParamLimits

0xd33f,	// (0x0001cb6b) list_medium_line_x2_t2_g2_g1

0x0ee2,	// (0x0001070e) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0ee2,	// (0x0001070e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0001ea72) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0001ea72) list_medium_line_x2_t2_g2_g

0x2294,	// (0x00011ac0) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2294,	// (0x00011ac0) list_medium_line_x2_t2_g2_t1

0x0f17,	// (0x00010743) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0f17,	// (0x00010743) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0001f527) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0001f527) list_medium_line_x2_t2_g2_t

0xd33f,	// (0x0001cb6b) list_medium_line_x2_t4_g2_g1_ParamLimits

0xd33f,	// (0x0001cb6b) list_medium_line_x2_t4_g2_g1

0x0ee2,	// (0x0001070e) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0ee2,	// (0x0001070e) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0001ea72) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0001ea72) list_medium_line_x2_t4_g2_g

0x7f36,	// (0x00017762) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7f36,	// (0x00017762) list_medium_line_x2_t4_g2_t1

0x7f50,	// (0x0001777c) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7f50,	// (0x0001777c) list_medium_line_x2_t4_g2_t2

0x7f66,	// (0x00017792) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7f66,	// (0x00017792) list_medium_line_x2_t4_g2_t3

0x0f17,	// (0x00010743) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0f17,	// (0x00010743) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0001f52c) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0001f52c) list_medium_line_x2_t4_g2_t

0xe44f,	// (0x0001dc7b) list_medium_line_t3_right_iconx2_g1

0xe324,	// (0x0001db50) list_medium_line_t3_right_iconx2_g2

0x7f7b,	// (0x000177a7) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0001f535) list_medium_line_t3_right_iconx2_g

0x7f85,	// (0x000177b1) list_medium_line_t3_right_iconx2_t1

0x7f95,	// (0x000177c1) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0001f53c) list_medium_line_t3_right_iconx2_t

0xd33f,	// (0x0001cb6b) list_medium_line_x3_t4_g4_g1_ParamLimits

0xd33f,	// (0x0001cb6b) list_medium_line_x3_t4_g4_g1

0x0ed6,	// (0x00010702) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0ed6,	// (0x00010702) list_medium_line_x3_t4_g4_g2

0x0f7e,	// (0x000107aa) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0f7e,	// (0x000107aa) list_medium_line_x3_t4_g4_g3

0x7fa3,	// (0x000177cf) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7fa3,	// (0x000177cf) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0001f541) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0001f541) list_medium_line_x3_t4_g4_g

0x7faf,	// (0x000177db) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7faf,	// (0x000177db) list_medium_line_x3_t4_g4_t1

0x7fc6,	// (0x000177f2) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7fc6,	// (0x000177f2) list_medium_line_x3_t4_g4_t2

0x7fe1,	// (0x0001780d) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7fe1,	// (0x0001780d) list_medium_line_x3_t4_g4_t3

0x7ff6,	// (0x00017822) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7ff6,	// (0x00017822) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0001f54a) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0001f54a) list_medium_line_x3_t4_g4_t

0x8013,	// (0x0001783f) list_single_dyc_row_text_pane_t1_ParamLimits

0x8013,	// (0x0001783f) list_single_dyc_row_text_pane_t1

0x805c,	// (0x00017888) list_single_dyc_row_text_pane_t2_ParamLimits

0x805c,	// (0x00017888) list_single_dyc_row_text_pane_t2

0xe457,	// (0x0001dc83) list_single_dyc_row_text_pane_t3_ParamLimits

0xe457,	// (0x0001dc83) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0001f553) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0001f553) list_single_dyc_row_text_pane_t

0xe47b,	// (0x0001dca7) list_single_dyc_row_pane_g1_ParamLimits

0xe47b,	// (0x0001dca7) list_single_dyc_row_pane_g1

0xe487,	// (0x0001dcb3) list_single_dyc_row_pane_g2_ParamLimits

0xe487,	// (0x0001dcb3) list_single_dyc_row_pane_g2

0xe493,	// (0x0001dcbf) list_single_dyc_row_pane_g3_ParamLimits

0xe493,	// (0x0001dcbf) list_single_dyc_row_pane_g3

0xe49f,	// (0x0001dccb) list_single_dyc_row_pane_g4_ParamLimits

0xe49f,	// (0x0001dccb) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0001f560) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0001f560) list_single_dyc_row_pane_g

0xe4ab,	// (0x0001dcd7) list_single_dyc_row_text_pane_ParamLimits

0xe4ab,	// (0x0001dcd7) list_single_dyc_row_text_pane

0x952c,	// (0x00018d58) bg_sp_fs_scroll_pane

0xe4ca,	// (0x0001dcf6) thumb_sp_fs_scroll_pane

0x6730,	// (0x00015f5c) list_medium_line_g1_ParamLimits

0x6730,	// (0x00015f5c) list_medium_line_g1

0xe4d3,	// (0x0001dcff) list_medium_line_t1_ParamLimits

0xe4d3,	// (0x0001dcff) list_medium_line_t1

0xd33f,	// (0x0001cb6b) list_medium_line_x2_g1_ParamLimits

0xd33f,	// (0x0001cb6b) list_medium_line_x2_g1

0x0ed6,	// (0x00010702) list_medium_line_x2_g2_ParamLimits

0x0ed6,	// (0x00010702) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0001f569) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0001f569) list_medium_line_x2_g

0xe4e8,	// (0x0001dd14) list_medium_line_x2_t1_ParamLimits

0xe4e8,	// (0x0001dd14) list_medium_line_x2_t1

0xd33f,	// (0x0001cb6b) list_medium_line_x3_g1_ParamLimits

0xd33f,	// (0x0001cb6b) list_medium_line_x3_g1

0x0ed6,	// (0x00010702) list_medium_line_x3_g2_ParamLimits

0x0ed6,	// (0x00010702) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0001f569) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0001f569) list_medium_line_x3_g

0xe4e8,	// (0x0001dd14) list_medium_line_x3_t1_ParamLimits

0xe4e8,	// (0x0001dd14) list_medium_line_x3_t1

0xe4fe,	// (0x0001dd2a) thumb_sp_fs_scroll_pane_g1

0xe507,	// (0x0001dd33) thumb_sp_fs_scroll_pane_g2

0xe510,	// (0x0001dd3c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001f56e) thumb_sp_fs_scroll_pane_g

0xe4fe,	// (0x0001dd2a) bg_sp_fs_scroll_pane_g1

0xe507,	// (0x0001dd33) bg_sp_fs_scroll_pane_g2

0xe510,	// (0x0001dd3c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001f56e) bg_sp_fs_scroll_pane_g

0xd33f,	// (0x0001cb6b) list_medium_line_x2_t3_g4_g1_ParamLimits

0xd33f,	// (0x0001cb6b) list_medium_line_x2_t3_g4_g1

0x0f72,	// (0x0001079e) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0f72,	// (0x0001079e) list_medium_line_x2_t3_g4_g2

0x0ed6,	// (0x00010702) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0ed6,	// (0x00010702) list_medium_line_x2_t3_g4_g3

0x0ee2,	// (0x0001070e) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0ee2,	// (0x0001070e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0001eaee) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0001eaee) list_medium_line_x2_t3_g4_g

0x8191,	// (0x000179bd) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8191,	// (0x000179bd) list_medium_line_x2_t3_g4_t1

0x81a7,	// (0x000179d3) list_medium_line_x2_t3_g4_t2_ParamLimits

0x81a7,	// (0x000179d3) list_medium_line_x2_t3_g4_t2

0x0f17,	// (0x00010743) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0f17,	// (0x00010743) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0001f575) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0001f575) list_medium_line_x2_t3_g4_t

0x6730,	// (0x00015f5c) list_medium_line_g2_g1_ParamLimits

0x6730,	// (0x00015f5c) list_medium_line_g2_g1

0xd38f,	// (0x0001cbbb) list_medium_line_g2_g2_ParamLimits

0xd38f,	// (0x0001cbbb) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0001f22c) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0001f22c) list_medium_line_g2_g

0xe519,	// (0x0001dd45) list_medium_line_g2_t1_ParamLimits

0xe519,	// (0x0001dd45) list_medium_line_g2_t1

0x6730,	// (0x00015f5c) list_medium_line_t3_g2_g1_ParamLimits

0x6730,	// (0x00015f5c) list_medium_line_t3_g2_g1

0xd38f,	// (0x0001cbbb) list_medium_line_t3_g2_g2_ParamLimits

0xd38f,	// (0x0001cbbb) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0001f22c) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0001f22c) list_medium_line_t3_g2_g

0x81c0,	// (0x000179ec) list_medium_line_t3_g2_t1_ParamLimits

0x81c0,	// (0x000179ec) list_medium_line_t3_g2_t1

0x81da,	// (0x00017a06) list_medium_line_t3_g2_t2_ParamLimits

0x81da,	// (0x00017a06) list_medium_line_t3_g2_t2

0x81f0,	// (0x00017a1c) list_medium_line_t3_g2_t3_ParamLimits

0x81f0,	// (0x00017a1c) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0001f57c) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0001f57c) list_medium_line_t3_g2_t

0xe324,	// (0x0001db50) list_medium_line_right_icon_g1

0xe52e,	// (0x0001dd5a) list_medium_line_right_icon_t1

0x6730,	// (0x00015f5c) list_medium_line_t2_g1_ParamLimits

0x6730,	// (0x00015f5c) list_medium_line_t2_g1

0x8207,	// (0x00017a33) list_medium_line_t2_t1_ParamLimits

0x8207,	// (0x00017a33) list_medium_line_t2_t1

0x8221,	// (0x00017a4d) list_medium_line_t2_t2_ParamLimits

0x8221,	// (0x00017a4d) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0001f583) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0001f583) list_medium_line_t2_t

0x6730,	// (0x00015f5c) list_medium_line_t3_g1_ParamLimits

0x6730,	// (0x00015f5c) list_medium_line_t3_g1

0x823a,	// (0x00017a66) list_medium_line_t3_t1_ParamLimits

0x823a,	// (0x00017a66) list_medium_line_t3_t1

0x8251,	// (0x00017a7d) list_medium_line_t3_t2_ParamLimits

0x8251,	// (0x00017a7d) list_medium_line_t3_t2

0x8266,	// (0x00017a92) list_medium_line_t3_t3_ParamLimits

0x8266,	// (0x00017a92) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0001f588) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0001f588) list_medium_line_t3_t

0x6730,	// (0x00015f5c) list_medium_line_g3_g1_ParamLimits

0x6730,	// (0x00015f5c) list_medium_line_g3_g1

0xe53c,	// (0x0001dd68) list_medium_line_g3_g2_ParamLimits

0xe53c,	// (0x0001dd68) list_medium_line_g3_g2

0xd38f,	// (0x0001cbbb) list_medium_line_g3_g3_ParamLimits

0xd38f,	// (0x0001cbbb) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0001f58f) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0001f58f) list_medium_line_g3_g

0xe548,	// (0x0001dd74) list_medium_line_g3_t1_ParamLimits

0xe548,	// (0x0001dd74) list_medium_line_g3_t1

0x6730,	// (0x00015f5c) list_medium_line_t2_g3_g1_ParamLimits

0x6730,	// (0x00015f5c) list_medium_line_t2_g3_g1

0xe53c,	// (0x0001dd68) list_medium_line_t2_g3_g2_ParamLimits

0xe53c,	// (0x0001dd68) list_medium_line_t2_g3_g2

0xd38f,	// (0x0001cbbb) list_medium_line_t2_g3_g3_ParamLimits

0xd38f,	// (0x0001cbbb) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0001f58f) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0001f58f) list_medium_line_t2_g3_g

0x8278,	// (0x00017aa4) list_medium_line_t2_g3_t1_ParamLimits

0x8278,	// (0x00017aa4) list_medium_line_t2_g3_t1

0x828f,	// (0x00017abb) list_medium_line_t2_g3_t2_ParamLimits

0x828f,	// (0x00017abb) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0001f596) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0001f596) list_medium_line_t2_g3_t

0x6730,	// (0x00015f5c) list_medium_line_t3_g3_g1_ParamLimits

0x6730,	// (0x00015f5c) list_medium_line_t3_g3_g1

0xe53c,	// (0x0001dd68) list_medium_line_t3_g3_g2_ParamLimits

0xe53c,	// (0x0001dd68) list_medium_line_t3_g3_g2

0xd38f,	// (0x0001cbbb) list_medium_line_t3_g3_g3_ParamLimits

0xd38f,	// (0x0001cbbb) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0001f58f) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0001f58f) list_medium_line_t3_g3_g

0x82a8,	// (0x00017ad4) list_medium_line_t3_g3_t1_ParamLimits

0x82a8,	// (0x00017ad4) list_medium_line_t3_g3_t1

0x82c1,	// (0x00017aed) list_medium_line_t3_g3_t2_ParamLimits

0x82c1,	// (0x00017aed) list_medium_line_t3_g3_t2

0x82d7,	// (0x00017b03) list_medium_line_t3_g3_t3_ParamLimits

0x82d7,	// (0x00017b03) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0001f59b) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0001f59b) list_medium_line_t3_g3_t

0xe44f,	// (0x0001dc7b) list_medium_line_right_iconx2_g1

0xe324,	// (0x0001db50) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001f5a2) list_medium_line_right_iconx2_g

0xe55d,	// (0x0001dd89) list_medium_line_right_iconx2_t1

0xe44f,	// (0x0001dc7b) list_medium_line_t2_right_iconx2_g1

0xe324,	// (0x0001db50) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001f5a2) list_medium_line_t2_right_iconx2_g

0x82f1,	// (0x00017b1d) list_medium_line_t2_right_iconx2_t1

0x8301,	// (0x00017b2d) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0001f5a7) list_medium_line_t2_right_iconx2_t

0x8313,	// (0x00017b3f) list_medium_line_x4_t4_t1

0x8321,	// (0x00017b4d) list_medium_line_x4_t4_t2

0x8331,	// (0x00017b5d) list_medium_line_x4_t4_t3

0x8341,	// (0x00017b6d) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0001f5ac) list_medium_line_x4_t4_t

0x8394,	// (0x00017bc0) tport_appsw_pane_ParamLimits

0x8394,	// (0x00017bc0) tport_appsw_pane

0x83ac,	// (0x00017bd8) tport_contact_pane_ParamLimits

0x83ac,	// (0x00017bd8) tport_contact_pane

0x83c4,	// (0x00017bf0) tport_listscroll_pane_ParamLimits

0x83c4,	// (0x00017bf0) tport_listscroll_pane

0x83de,	// (0x00017c0a) cell_tport_appsw_pane_ParamLimits

0x83de,	// (0x00017c0a) cell_tport_appsw_pane

0xd02b,	// (0x0001c857) tport_appsw_pane_g1_ParamLimits

0xd02b,	// (0x0001c857) tport_appsw_pane_g1

0xe56b,	// (0x0001dd97) tport_contact_pane_g1

0xe574,	// (0x0001dda0) tport_contact_pane_t1

0xe582,	// (0x0001ddae) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0001f5b5) tport_contact_pane_t

0xe590,	// (0x0001ddbc) list_tport_pane

0xe599,	// (0x0001ddc5) scroll_pane_cp_030

0x8430,	// (0x00017c5c) cell_tport_appsw_pane_g1

0x8440,	// (0x00017c6c) cell_tport_appsw_pane_t1

0x844e,	// (0x00017c7a) grid_highlight_pane_cp019

0x8456,	// (0x00017c82) list_tport_double_graphic_pane_ParamLimits

0x8456,	// (0x00017c82) list_tport_double_graphic_pane

0x958d,	// (0x00018db9) list_highlight_pane_cp023_ParamLimits

0x958d,	// (0x00018db9) list_highlight_pane_cp023

0x8463,	// (0x00017c8f) list_tport_double_graphic_pane_g1_ParamLimits

0x8463,	// (0x00017c8f) list_tport_double_graphic_pane_g1

0x8470,	// (0x00017c9c) list_tport_double_graphic_pane_t1_ParamLimits

0x8470,	// (0x00017c9c) list_tport_double_graphic_pane_t1

0x8485,	// (0x00017cb1) list_tport_double_graphic_pane_t2_ParamLimits

0x8485,	// (0x00017cb1) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0001f5c1) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0001f5c1) list_tport_double_graphic_pane_t

0x952c,	// (0x00018d58) main_cale_note_pane

0x5dbc,	// (0x000155e8) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5dbc,	// (0x000155e8) cell_vitu2_function_top_wide_pane_cp01

0x7925,	// (0x00017151) wait_bar_pane_cp05_ParamLimits

0x958d,	// (0x00018db9) listscroll_cmail_pane

0xe5aa,	// (0x0001ddd6) list_cmail_pane

0x84a1,	// (0x00017ccd) list_cmail_body_pane

0xd324,	// (0x0001cb50) list_single_cmail_header_caption_pane

0x84b4,	// (0x00017ce0) list_single_cmail_header_detail_pane_ParamLimits

0x84b4,	// (0x00017ce0) list_single_cmail_header_detail_pane

0x84df,	// (0x00017d0b) list_single_cmail_header_caption_pane_t1

0x84ef,	// (0x00017d1b) list_single_cmail_header_detail_pane_g1_ParamLimits

0x84ef,	// (0x00017d1b) list_single_cmail_header_detail_pane_g1

0xe5ca,	// (0x0001ddf6) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5ca,	// (0x0001ddf6) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0001f5c6) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0001f5c6) list_single_cmail_header_detail_pane_g

0xe5e3,	// (0x0001de0f) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe5e3,	// (0x0001de0f) list_single_cmail_header_detail_pane_t1

0xe655,	// (0x0001de81) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe655,	// (0x0001de81) list_single_cmail_header_editor_pane_bg

0xdedf,	// (0x0001d70b) list_cmail_body_pane_g1

0xe66c,	// (0x0001de98) list_cmail_body_pane_t1

0xd07a,	// (0x0001c8a6) list_single_cmail_header_editor_pane_bg_g1

0xa183,	// (0x000199af) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd08a,	// (0x0001c8b6) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd082,	// (0x0001c8ae) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd367,	// (0x0001cb93) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd0aa,	// (0x0001c8d6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd09a,	// (0x0001c8c6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd0a2,	// (0x0001c8ce) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa163,	// (0x0001998f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8507,	// (0x00017d33) calenote_gesture_pane_ParamLimits

0x8507,	// (0x00017d33) calenote_gesture_pane

0x8527,	// (0x00017d53) calenote_window_pane_ParamLimits

0x8527,	// (0x00017d53) calenote_window_pane

0xe67a,	// (0x0001dea6) popup_note_window_cp01

0x8543,	// (0x00017d6f) calenote_swipe_1_pane_ParamLimits

0x8543,	// (0x00017d6f) calenote_swipe_1_pane

0x7dd3,	// (0x000175ff) calenote_swipe_2_pane_ParamLimits

0x7dd3,	// (0x000175ff) calenote_swipe_2_pane

0xe23e,	// (0x0001da6a) calenote_swipe_1_pane_g1_ParamLimits

0xe23e,	// (0x0001da6a) calenote_swipe_1_pane_g1

0xe24b,	// (0x0001da77) calenote_swipe_1_pane_g2_ParamLimits

0xe24b,	// (0x0001da77) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0001f4ef) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0001f4ef) calenote_swipe_1_pane_g

0xe68c,	// (0x0001deb8) calenote_swipe_1_pane_t1_ParamLimits

0xe68c,	// (0x0001deb8) calenote_swipe_1_pane_t1

0xe23e,	// (0x0001da6a) calenote_swipe_2_pane_g1_ParamLimits

0xe23e,	// (0x0001da6a) calenote_swipe_2_pane_g1

0xe6ab,	// (0x0001ded7) calenote_swipe_2_pane_g2_ParamLimits

0xe6ab,	// (0x0001ded7) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0001f5d2) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0001f5d2) calenote_swipe_2_pane_g

0xe6b7,	// (0x0001dee3) calenote_swipe_2_pane_t1_ParamLimits

0xe6b7,	// (0x0001dee3) calenote_swipe_2_pane_t1

0x952c,	// (0x00018d58) main_mup_navstr_pane

0x4a0b,	// (0x00014237) main_mup3_pane_t7_ParamLimits

0x4a0b,	// (0x00014237) main_mup3_pane_t7

0xcc0c,	// (0x0001c438) main_mp4_pane_g6_ParamLimits

0xcc0c,	// (0x0001c438) main_mp4_pane_g6

0xce34,	// (0x0001c660) main_image3_pane_t4_ParamLimits

0xce34,	// (0x0001c660) main_image3_pane_t4

0x8558,	// (0x00017d84) popup_navstr_preview_pane_ParamLimits

0x8558,	// (0x00017d84) popup_navstr_preview_pane

0x8568,	// (0x00017d94) scroll_navstr_pane_ParamLimits

0x8568,	// (0x00017d94) scroll_navstr_pane

0x952c,	// (0x00018d58) bg_popup_preview_window_pane_cp04

0xe6de,	// (0x0001df0a) popup_navstr_preview_pane_t1

0x857c,	// (0x00017da8) scroll_navstr_pane_g1_ParamLimits

0x857c,	// (0x00017da8) scroll_navstr_pane_g1

0x8590,	// (0x00017dbc) scroll_navstr_pane_t1_ParamLimits

0x8590,	// (0x00017dbc) scroll_navstr_pane_t1

0xe683,	// (0x0001deaf) bg_button_pane_cp014

0xe683,	// (0x0001deaf) bg_button_pane_cp030

0x7c69,	// (0x00017495) list_double_fisheye_pane_g4_ParamLimits

0x7c69,	// (0x00017495) list_double_fisheye_pane_g4

0x7c75,	// (0x000174a1) list_double_fisheye_pane_g5_ParamLimits

0x7c75,	// (0x000174a1) list_double_fisheye_pane_g5

0xe5b2,	// (0x0001ddde) sp_fs_scroll_pane_cp03

0xd33f,	// (0x0001cb6b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe364,	// (0x0001db90) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0001f50c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe370,	// (0x0001db9c) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8497,	// (0x00017cc3) sp_fs_scroll_pane_cp02

0x9e7c,	// (0x000196a8) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9e7c,	// (0x000196a8) popup_sp_fs_calendar_preview_list_single_pane

0x952c,	// (0x00018d58) main_cam6_pano_pane

0x958d,	// (0x00018db9) main_mup3_pane_ParamLimits

0x952c,	// (0x00018d58) main_phacti_pane

0x77f8,	// (0x00017024) bg_button_pane_cp11

0x7812,	// (0x0001703e) main_mobtv_info_pane_g2_ParamLimits

0x7812,	// (0x0001703e) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0001f46c) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0001f46c) main_mobtv_info_pane_g

0x79ed,	// (0x00017219) sc_clock_pane_t5_ParamLimits

0x79ed,	// (0x00017219) sc_clock_pane_t5

0x7acb,	// (0x000172f7) main_radioblah_pane_g1_ParamLimits

0xe18a,	// (0x0001d9b6) main_radioblah_pane_t3_ParamLimits

0xe18a,	// (0x0001d9b6) main_radioblah_pane_t3

0xe1a2,	// (0x0001d9ce) main_radioblah_pane_t4_ParamLimits

0xe1a2,	// (0x0001d9ce) main_radioblah_pane_t4

0x7af3,	// (0x0001731f) main_radioblah_text_pane_ParamLimits

0x7af3,	// (0x0001731f) main_radioblah_text_pane

0x7b05,	// (0x00017331) main_radioblah_info_pane_g1_ParamLimits

0x7b9e,	// (0x000173ca) main_radioblah_info_pane_t4_ParamLimits

0x7b9e,	// (0x000173ca) main_radioblah_info_pane_t4

0x958d,	// (0x00018db9) main_sp_fs_calendar_pane

0x85a7,	// (0x00017dd3) main_phacti_pane_g1

0x85af,	// (0x00017ddb) phacti_note_pane_ParamLimits

0x85af,	// (0x00017ddb) phacti_note_pane

0xe6f5,	// (0x0001df21) phacti_term_pane_ParamLimits

0xe6f5,	// (0x0001df21) phacti_term_pane

0xe70a,	// (0x0001df36) phacti_note_pane_t1_ParamLimits

0xe70a,	// (0x0001df36) phacti_note_pane_t1

0xe721,	// (0x0001df4d) phacti_term_pane_g1

0xe729,	// (0x0001df55) phacti_term_pane_t1_ParamLimits

0xe729,	// (0x0001df55) phacti_term_pane_t1

0xe753,	// (0x0001df7f) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe75b,	// (0x0001df87) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0001f5dc) popup_sp_fs_calendar_preview_list_single_pane_g

0xe763,	// (0x0001df8f) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe763,	// (0x0001df8f) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe779,	// (0x0001dfa5) aid_popup_sp_fs_bg_corner_pane

0xc2c7,	// (0x0001baf3) popup_sp_fs_calendar_preview_bg_pane_g1

0x952c,	// (0x00018d58) popup_sp_fs_calendar_preview_bg_pane

0xe781,	// (0x0001dfad) popup_sp_fs_calendar_preview_list_pane

0xbdba,	// (0x0001b5e6) bg_main_sp_fs_cale_pane_ParamLimits

0xbdba,	// (0x0001b5e6) bg_main_sp_fs_cale_pane

0xe792,	// (0x0001dfbe) listscroll_cale_mrui_pane_ParamLimits

0xe792,	// (0x0001dfbe) listscroll_cale_mrui_pane

0xe7a7,	// (0x0001dfd3) listscroll_sp_fs_schedule_track_pane

0xe7b0,	// (0x0001dfdc) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7b0,	// (0x0001dfdc) main_sp_fs_ctrlbar_pane_cp01

0xe7c3,	// (0x0001dfef) main_sp_fs_ribbon_pane

0xe7cb,	// (0x0001dff7) popup_sp_fs_cale_preview_window

0x8620,	// (0x00017e4c) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8620,	// (0x00017e4c) list_single_sp_fs_schedule_track_pane

0x958d,	// (0x00018db9) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x958d,	// (0x00018db9) bg_sp_fs_highlight_list_pane_cp03

0x8634,	// (0x00017e60) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8634,	// (0x00017e60) list_single_sp_fs_schedule_track_pane_g1

0x8640,	// (0x00017e6c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8640,	// (0x00017e6c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0001f5e1) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0001f5e1) list_single_sp_fs_schedule_track_pane_g

0x864c,	// (0x00017e78) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x864c,	// (0x00017e78) list_single_sp_fs_schedule_track_pane_t1

0x866e,	// (0x00017e9a) sp_fs_schedule_track_pane_ParamLimits

0x866e,	// (0x00017e9a) sp_fs_schedule_track_pane

0xe7dd,	// (0x0001e009) sp_fs_schedule_track_pane_g1

0xe7e5,	// (0x0001e011) sp_fs_schedule_track_pane_g2

0xe7ed,	// (0x0001e019) sp_fs_schedule_track_pane_g3

0xe7f5,	// (0x0001e021) sp_fs_schedule_track_pane_g4

0xe7fd,	// (0x0001e029) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0001f5e6) sp_fs_schedule_track_pane_g

0xd07a,	// (0x0001c8a6) bg_sp_fs_schedule_viewer_highlight_g1

0xa183,	// (0x000199af) bg_sp_fs_schedule_viewer_highlight_g2

0xd082,	// (0x0001c8ae) bg_sp_fs_schedule_viewer_highlight_g3

0xd08a,	// (0x0001c8b6) bg_sp_fs_schedule_viewer_highlight_g4

0xd367,	// (0x0001cb93) bg_sp_fs_schedule_viewer_highlight_g5

0xd09a,	// (0x0001c8c6) bg_sp_fs_schedule_viewer_highlight_g6

0xd0a2,	// (0x0001c8ce) bg_sp_fs_schedule_viewer_highlight_g7

0xd0aa,	// (0x0001c8d6) bg_sp_fs_schedule_viewer_highlight_g8

0xa163,	// (0x0001998f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0001f5f1) bg_sp_fs_schedule_viewer_highlight_g

0x952c,	// (0x00018d58) bg_main_sp_fs_ribbon_pane

0x8683,	// (0x00017eaf) main_sp_fs_ribbon_pane_g1

0xe805,	// (0x0001e031) main_sp_fs_ribbon_pane_t1

0x868c,	// (0x00017eb8) main_sp_fs_ribbon_pane_t2

0xe814,	// (0x0001e040) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0001f604) main_sp_fs_ribbon_pane_t

0xe823,	// (0x0001e04f) main_sp_fs_ribbon_scheduler_pane

0xe82b,	// (0x0001e057) bg_main_sp_fs_ribbon_pane_g1

0xe834,	// (0x0001e060) bg_main_sp_fs_ribbon_pane_g2

0xe83d,	// (0x0001e069) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0001f60b) bg_main_sp_fs_ribbon_pane_g

0xe845,	// (0x0001e071) main_sp_fs_ribbon_scheduler_pane_g1

0xe84e,	// (0x0001e07a) main_sp_fs_ribbon_scheduler_pane_g2

0xe857,	// (0x0001e083) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0001f612) main_sp_fs_ribbon_scheduler_pane_g

0xe860,	// (0x0001e08c) list_cale_mrui_pane

0x869b,	// (0x00017ec7) sp_fs_scroll_pane_cp07_ParamLimits

0x869b,	// (0x00017ec7) sp_fs_scroll_pane_cp07

0x86b7,	// (0x00017ee3) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x86b7,	// (0x00017ee3) bg_sp_fs_schedule_viewer_highlight

0xe86d,	// (0x0001e099) list_single_sp_fs_schedule_track_pane_cp01

0xe875,	// (0x0001e0a1) list_sp_fs_schedule_track_pane

0xe87d,	// (0x0001e0a9) sp_fs_scroll_pane_cp06_ParamLimits

0xe87d,	// (0x0001e0a9) sp_fs_scroll_pane_cp06

0xc2c7,	// (0x0001baf3) bgmain_sp_fs_calendar_pane_g1

0x86c9,	// (0x00017ef5) list_single_cale_mrui_pane_ParamLimits

0x86c9,	// (0x00017ef5) list_single_cale_mrui_pane

0xe88f,	// (0x0001e0bb) list_single_cale_mrui_row_pane_ParamLimits

0xe88f,	// (0x0001e0bb) list_single_cale_mrui_row_pane

0xe8a5,	// (0x0001e0d1) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8a5,	// (0x0001e0d1) list_single_cale_mrui_row_pane_g1

0xe8ea,	// (0x0001e116) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8ea,	// (0x0001e116) list_single_cale_mrui_row_pane_t1

0x86de,	// (0x00017f0a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x86de,	// (0x00017f0a) list_single_cale_mrui_row_pane_t2

0xe8fc,	// (0x0001e128) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8fc,	// (0x0001e128) list_single_cale_mrui_row_pane_t3

0xe92b,	// (0x0001e157) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe92b,	// (0x0001e157) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0001f620) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0001f620) list_single_cale_mrui_row_pane_t

0x8746,	// (0x00017f72) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8746,	// (0x00017f72) list_single_cmail_header_editor_pane_bg_cp01

0x876c,	// (0x00017f98) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x876c,	// (0x00017f98) list_single_cmail_header_editor_pane_bg_cp02

0x878c,	// (0x00017fb8) main_radioblah_text_pane_t1_ParamLimits

0x878c,	// (0x00017fb8) main_radioblah_text_pane_t1

0xe95a,	// (0x0001e186) cam6_indi_pane_cp01

0xe962,	// (0x0001e18e) cam6_mode_pane_cp01

0xe96a,	// (0x0001e196) cam6_pano_pane

0xe973,	// (0x0001e19f) cam6_zoom_pane_cp01

0xe97d,	// (0x0001e1a9) cam6_pano_image_pane

0xe986,	// (0x0001e1b2) cam6_pano_pane_g1

0xdedf,	// (0x0001d70b) cam6_pano_pane_g2

0xe98f,	// (0x0001e1bb) cam6_pano_pane_g3

0xe998,	// (0x0001e1c4) cam6_pano_pane_g4

0xc86d,	// (0x0001c099) cam6_pano_pane_g5

0xe9a1,	// (0x0001e1cd) cam6_pano_pane_g6

0xe9a9,	// (0x0001e1d5) cam6_pano_pane_g7

0xe9b1,	// (0x0001e1dd) cam6_pano_pane_g8

0xe9ba,	// (0x0001e1e6) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0001f629) cam6_pano_pane_g

0x952c,	// (0x00018d58) main_browser_tag_pane

0xe6d6,	// (0x0001df02) grid_navstr_albumart_pane

0xe9c5,	// (0x0001e1f1) cell_navstr_albumart_pane_ParamLimits

0xe9c5,	// (0x0001e1f1) cell_navstr_albumart_pane

0xe9e4,	// (0x0001e210) cell_navstr_albumart_pane_g1

0xbbc7,	// (0x0001b3f3) cell_navstr_albumart_pane_g2

0xbbd7,	// (0x0001b403) cell_navstr_albumart_pane_g3

0xbbcf,	// (0x0001b3fb) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0001f63c) cell_navstr_albumart_pane_g

0x87a7,	// (0x00017fd3) bt_list_pane_ParamLimits

0x87a7,	// (0x00017fd3) bt_list_pane

0x87bd,	// (0x00017fe9) bt_list_pane_t1

0x87cc,	// (0x00017ff8) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0001f645) bt_list_pane_t

0x952c,	// (0x00018d58) main_cale_prevew_pane

0x87db,	// (0x00018007) popup_cale_preview_window_ParamLimits

0x87db,	// (0x00018007) popup_cale_preview_window

0x958d,	// (0x00018db9) bg_popup_preview_window_pane_cp05_ParamLimits

0x958d,	// (0x00018db9) bg_popup_preview_window_pane_cp05

0xe9ec,	// (0x0001e218) list_cale_preview_pane_ParamLimits

0xe9ec,	// (0x0001e218) list_cale_preview_pane

0x87f8,	// (0x00018024) list_double_cale_preview_pane_ParamLimits

0x87f8,	// (0x00018024) list_double_cale_preview_pane

0x880c,	// (0x00018038) list_single_cale_preview_pane_ParamLimits

0x880c,	// (0x00018038) list_single_cale_preview_pane

0x8824,	// (0x00018050) list_single_cale_preview_pane_g1

0x882c,	// (0x00018058) list_single_cale_preview_pane_t1_ParamLimits

0x882c,	// (0x00018058) list_single_cale_preview_pane_t1

0x8841,	// (0x0001806d) list_double_cale_preview_pane_g1

0x8849,	// (0x00018075) list_double_cale_preview_pane_t1_ParamLimits

0x8849,	// (0x00018075) list_double_cale_preview_pane_t1

0x885e,	// (0x0001808a) list_double_cale_preview_pane_t2_ParamLimits

0x885e,	// (0x0001808a) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0001f64a) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0001f64a) list_double_cale_preview_pane_t

0x952c,	// (0x00018d58) main_ezdial_pane

0x958d,	// (0x00018db9) main_sp_fs_email_pane_ParamLimits

0x7e0f,	// (0x0001763b) cmail_ddmenu_btn01_pane_ParamLimits

0x7e0f,	// (0x0001763b) cmail_ddmenu_btn01_pane

0x7e22,	// (0x0001764e) cmail_ddmenu_btn02_pane_ParamLimits

0x7e22,	// (0x0001764e) cmail_ddmenu_btn02_pane

0x7e45,	// (0x00017671) cmail_ddmenu_btn03_pane_ParamLimits

0x7e45,	// (0x00017671) cmail_ddmenu_btn03_pane

0x7e70,	// (0x0001769c) main_sp_fs_ctrlbar_pane_ParamLimits

0x7e94,	// (0x000176c0) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x84a1,	// (0x00017ccd) list_cmail_body_pane_ParamLimits

0xe5c1,	// (0x0001dded) bg_button_pane_cp12

0xe5d6,	// (0x0001de02) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5d6,	// (0x0001de02) list_single_cmail_header_detail_pane_g3

0xe631,	// (0x0001de5d) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe631,	// (0x0001de5d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0001f5cd) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0001f5cd) list_single_cmail_header_detail_pane_t

0xe73e,	// (0x0001df6a) phacti_term_pane_t2_ParamLimits

0xe73e,	// (0x0001df6a) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0001f5d7) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0001f5d7) phacti_term_pane_t

0xe9f8,	// (0x0001e224) aid_size_list_single_double

0x8876,	// (0x000180a2) popup_ezdial_listscroll_window

0x8892,	// (0x000180be) popup_number_entry_window_cp01

0x9f1c,	// (0x00019748) bg_popup_call_pane_cp09

0xea04,	// (0x0001e230) ezdial_list_pane

0xea0c,	// (0x0001e238) scroll_pane_cp23

0xbdba,	// (0x0001b5e6) bg_button_pane_cp028_ParamLimits

0xbdba,	// (0x0001b5e6) bg_button_pane_cp028

0x88a0,	// (0x000180cc) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x88a0,	// (0x000180cc) cmail_ddmenu_btn01_pane_g1

0x88af,	// (0x000180db) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x88af,	// (0x000180db) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0001f64f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0001f64f) cmail_ddmenu_btn01_pane_g

0xea14,	// (0x0001e240) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea14,	// (0x0001e240) cmail_ddmenu_btn01_pane_t1

0xbdba,	// (0x0001b5e6) bg_button_pane_cp029_ParamLimits

0xbdba,	// (0x0001b5e6) bg_button_pane_cp029

0x88c5,	// (0x000180f1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x88c5,	// (0x000180f1) cmail_ddmenu_btn02_pane_g1

0x88e0,	// (0x0001810c) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x88e0,	// (0x0001810c) cmail_ddmenu_btn02_pane_t1

0x958d,	// (0x00018db9) bg_button_pane_cp031_ParamLimits

0x958d,	// (0x00018db9) bg_button_pane_cp031

0x88c5,	// (0x000180f1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x88c5,	// (0x000180f1) cmail_ddmenu_btn03_pane_g1

0x88e0,	// (0x0001810c) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x88e0,	// (0x0001810c) cmail_ddmenu_btn03_pane_t1

0x55eb,	// (0x00014e17) cell_dialer2_keypad_pane_t1_ParamLimits

0x5605,	// (0x00014e31) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5605,	// (0x00014e31) cell_dialer2_keypad_pane_t1_copy1

0x765d,	// (0x00016e89) ncimui_group_button_pane

0x958d,	// (0x00018db9) main_sp_fs_calendar_pane_ParamLimits

0xd324,	// (0x0001cb50) list_single_cmail_header_caption_pane_ParamLimits

0xe789,	// (0x0001dfb5) aid_recal_txt_sm_pane

0x952c,	// (0x00018d58) mian_recal_day_pane

0xe7cb,	// (0x0001dff7) popup_sp_fs_cale_preview_window_ParamLimits

0xea2a,	// (0x0001e256) list_recal_day_pane

0xea6d,	// (0x0001e299) list_single_recal_day_pane_ParamLimits

0xea6d,	// (0x0001e299) list_single_recal_day_pane

0xea7f,	// (0x0001e2ab) list_single_recal_day_pane_g1_ParamLimits

0xea7f,	// (0x0001e2ab) list_single_recal_day_pane_g1

0xea8b,	// (0x0001e2b7) list_single_recal_day_pane_g2_ParamLimits

0xea8b,	// (0x0001e2b7) list_single_recal_day_pane_g2

0xea97,	// (0x0001e2c3) list_single_recal_day_pane_g3_ParamLimits

0xea97,	// (0x0001e2c3) list_single_recal_day_pane_g3

0x8907,	// (0x00018133) list_single_recal_day_pane_g4_ParamLimits

0x8907,	// (0x00018133) list_single_recal_day_pane_g4

0xeaa3,	// (0x0001e2cf) list_single_recal_day_pane_g5_ParamLimits

0xeaa3,	// (0x0001e2cf) list_single_recal_day_pane_g5

0xeaaf,	// (0x0001e2db) list_single_recal_day_pane_g6_ParamLimits

0xeaaf,	// (0x0001e2db) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0001f65e) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0001f65e) list_single_recal_day_pane_g

0xeac3,	// (0x0001e2ef) list_single_recal_day_pane_t1

0xead5,	// (0x0001e301) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0001f669) list_single_recal_day_pane_t

0x891f,	// (0x0001814b) ncimui_query_button_pane_ParamLimits

0x891f,	// (0x0001814b) ncimui_query_button_pane

0x892f,	// (0x0001815b) ncimui_query_button_pane_t1_ParamLimits

0x892f,	// (0x0001815b) ncimui_query_button_pane_t1

0xeae7,	// (0x0001e313) ncimui_query_button_pane_t2_ParamLimits

0xeae7,	// (0x0001e313) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0001f66e) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0001f66e) ncimui_query_button_pane_t

0x8942,	// (0x0001816e) query_button_pane_ParamLimits

0x8942,	// (0x0001816e) query_button_pane

0x952c,	// (0x00018d58) bg_button_pane_cp0028

0xeafa,	// (0x0001e326) query_button_pane_t1

0x35ba,	// (0x00012de6) main_tport_pane_ParamLimits

0x8351,	// (0x00017b7d) bg_popup_window_pane_cp01_ParamLimits

0x8351,	// (0x00017b7d) bg_popup_window_pane_cp01

0x836c,	// (0x00017b98) heading_pane_cp08_ParamLimits

0x836c,	// (0x00017b98) heading_pane_cp08

0x837f,	// (0x00017bab) heading_pane_cp07_ParamLimits

0x837f,	// (0x00017bab) heading_pane_cp07

0x8430,	// (0x00017c5c) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0001f5ba) cell_tport_appsw_pane_g

0xaa74,	// (0x0001a2a0) input_candi_list_open_g1

0xa365,	// (0x00019b91) list_cale_time_pane_g6_ParamLimits

0xa365,	// (0x00019b91) list_cale_time_pane_g6

0x43c4,	// (0x00013bf0) aid_size_touch_calib_1_ParamLimits

0x43c4,	// (0x00013bf0) aid_size_touch_calib_1

0x43d6,	// (0x00013c02) aid_size_touch_calib_2_ParamLimits

0x43d6,	// (0x00013c02) aid_size_touch_calib_2

0x43ee,	// (0x00013c1a) aid_size_touch_calib_3_ParamLimits

0x43ee,	// (0x00013c1a) aid_size_touch_calib_3

0x440c,	// (0x00013c38) aid_size_touch_calib_4_ParamLimits

0x440c,	// (0x00013c38) aid_size_touch_calib_4

0x4424,	// (0x00013c50) main_touch_calib_button_group_pane_ParamLimits

0x4424,	// (0x00013c50) main_touch_calib_button_group_pane

0x443c,	// (0x00013c68) main_touch_calib_pane_g1_ParamLimits

0x444e,	// (0x00013c7a) main_touch_calib_pane_g2_ParamLimits

0x4460,	// (0x00013c8c) main_touch_calib_pane_g3_ParamLimits

0x4472,	// (0x00013c9e) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0001ef7d) main_touch_calib_pane_g_ParamLimits

0x4484,	// (0x00013cb0) main_touch_calib_pane_t1_ParamLimits

0x449e,	// (0x00013cca) main_touch_calib_pane_t2_ParamLimits

0x44b8,	// (0x00013ce4) main_touch_calib_pane_t3_ParamLimits

0x44cc,	// (0x00013cf8) main_touch_calib_pane_t4_ParamLimits

0x44e2,	// (0x00013d0e) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0001ef86) main_touch_calib_pane_t_ParamLimits

0xc603,	// (0x0001be2f) list_single_fp_cale_pane_g3_ParamLimits

0xc603,	// (0x0001be2f) list_single_fp_cale_pane_g3

0x958d,	// (0x00018db9) bg_button_pane_cp012_ParamLimits

0x958d,	// (0x00018db9) bg_vkb2_func_pane_cp03_ParamLimits

0x66e6,	// (0x00015f12) cell_vitu2_function_top_pane_g1_ParamLimits

0x958d,	// (0x00018db9) bg_vkb2_func_pane_cp04_ParamLimits

0x75eb,	// (0x00016e17) main_ncimui_button_group_pane_ParamLimits

0x75eb,	// (0x00016e17) main_ncimui_button_group_pane

0x764b,	// (0x00016e77) main_ncimui_pane_t3_ParamLimits

0x764b,	// (0x00016e77) main_ncimui_pane_t3

0xe6ec,	// (0x0001df18) phacti_button_group_pane

0xe9f8,	// (0x0001e224) aid_size_list_single_double_ParamLimits

0x8876,	// (0x000180a2) popup_ezdial_listscroll_window_ParamLimits

0x8892,	// (0x000180be) popup_number_entry_window_cp01_ParamLimits

0x8955,	// (0x00018181) phacti_button_pane_ParamLimits

0x8955,	// (0x00018181) phacti_button_pane

0x952c,	// (0x00018d58) bg_button_pane_cp14

0xeb08,	// (0x0001e334) phacti_button_pane_t1

0x8966,	// (0x00018192) main_touch_calib_button_pane_ParamLimits

0x8966,	// (0x00018192) main_touch_calib_button_pane

0x9cf0,	// (0x0001951c) bg_button_pane_cp18_ParamLimits

0x9cf0,	// (0x0001951c) bg_button_pane_cp18

0xeb16,	// (0x0001e342) main_touch_calib_button_pane_t1_ParamLimits

0xeb16,	// (0x0001e342) main_touch_calib_button_pane_t1

0xeb2c,	// (0x0001e358) main_touch_calib_button_pane_t2_ParamLimits

0xeb2c,	// (0x0001e358) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0001f673) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0001f673) main_touch_calib_button_pane_t

0x952c,	// (0x00018d58) cell_ncimui_button_pane

0x952c,	// (0x00018d58) bg_button_pane_cp032

0xeb4a,	// (0x0001e376) cell_ncimui_button_pane_t1

0xce12,	// (0x0001c63e) image3_infobar_pane_ParamLimits

0xce12,	// (0x0001c63e) image3_infobar_pane

0x7a19,	// (0x00017245) fs_bigclock_status_pane_ParamLimits

0x7a19,	// (0x00017245) fs_bigclock_status_pane

0x7a26,	// (0x00017252) main_fs_bigclock_clock_pane_ParamLimits

0x7a26,	// (0x00017252) main_fs_bigclock_clock_pane

0x7a50,	// (0x0001727c) main_fs_bigclock_indi_pane_ParamLimits

0x7a50,	// (0x0001727c) main_fs_bigclock_indi_pane

0x7a8e,	// (0x000172ba) main_fs_bigclock_swipe_pane_ParamLimits

0x7a8e,	// (0x000172ba) main_fs_bigclock_swipe_pane

0x952c,	// (0x00018d58) main_fs_clock_dumped_data

0xdfec,	// (0x0001d818) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdfec,	// (0x0001d818) list_single_fs_bigclock_indicator_pane_g1

0xe016,	// (0x0001d842) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe016,	// (0x0001d842) list_single_fs_bigclock_indicator_pane_g2

0xe030,	// (0x0001d85c) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe030,	// (0x0001d85c) list_single_fs_bigclock_indicator_pane_g3

0xe04a,	// (0x0001d876) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe04a,	// (0x0001d876) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0001f4a0) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0001f4a0) list_single_fs_bigclock_indicator_pane_g

0xe075,	// (0x0001d8a1) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe075,	// (0x0001d8a1) list_single_fs_bigclock_indicator_pane_t1

0xe09d,	// (0x0001d8c9) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe09d,	// (0x0001d8c9) list_single_fs_bigclock_indicator_pane_t2

0xe0c5,	// (0x0001d8f1) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe0c5,	// (0x0001d8f1) list_single_fs_bigclock_indicator_pane_t3

0xe0ed,	// (0x0001d919) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe0ed,	// (0x0001d919) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0001f4ab) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0001f4ab) list_single_fs_bigclock_indicator_pane_t

0xeb58,	// (0x0001e384) image3_infobar_fav_pane_ParamLimits

0xeb58,	// (0x0001e384) image3_infobar_fav_pane

0xeb68,	// (0x0001e394) image3_infobar_loc_pane_ParamLimits

0xeb68,	// (0x0001e394) image3_infobar_loc_pane

0xeb7e,	// (0x0001e3aa) image3_infobar_time_pane_ParamLimits

0xeb7e,	// (0x0001e3aa) image3_infobar_time_pane

0xc2c7,	// (0x0001baf3) image3_infobar_time_pane_g1

0xeb8e,	// (0x0001e3ba) image3_infobar_time_pane_t1

0xc2c7,	// (0x0001baf3) image3_infobar_loc_pane_g1

0xeb9c,	// (0x0001e3c8) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0001f678) image3_infobar_loc_pane_g

0xeba4,	// (0x0001e3d0) image3_infobar_loc_pane_t1

0xc2c7,	// (0x0001baf3) image3_infobar_fav_pane_g1

0xebb2,	// (0x0001e3de) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0001f67d) image3_infobar_fav_pane_g

0xebba,	// (0x0001e3e6) fs_bigclock_status_battery_pane

0xebc3,	// (0x0001e3ef) fs_bigclock_status_signal_pane

0xebcc,	// (0x0001e3f8) fs_bigclock_status_title_pane

0xebd5,	// (0x0001e401) fs_bigclock_status_signal_pane_g1

0xebde,	// (0x0001e40a) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0001f682) fs_bigclock_status_signal_pane_g

0xebe6,	// (0x0001e412) fs_bigclock_status_battery_pane_g1

0xebef,	// (0x0001e41b) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0001f687) fs_bigclock_status_battery_pane_g

0xebf7,	// (0x0001e423) fs_bigclock_status_title_pane_t1

0xc2c7,	// (0x0001baf3) main_fs_bigclock_clock_pane_g1

0xec05,	// (0x0001e431) main_fs_bigclock_clock_pane_g2

0xec10,	// (0x0001e43c) main_fs_bigclock_clock_pane_g3

0xec10,	// (0x0001e43c) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0001f68c) main_fs_bigclock_clock_pane_g

0xec1c,	// (0x0001e448) main_fs_bigclock_clock_pane_t1

0x897b,	// (0x000181a7) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0001f695) main_fs_bigclock_clock_pane_t

0x898a,	// (0x000181b6) list_single_fs_bigclock_indicator_pane_ParamLimits

0x898a,	// (0x000181b6) list_single_fs_bigclock_indicator_pane

0x899b,	// (0x000181c7) list_single_fs_bigclock_pane_ParamLimits

0x899b,	// (0x000181c7) list_single_fs_bigclock_pane

0xec33,	// (0x0001e45f) main_fs_bigclock_indicator_pane_t1

0xec42,	// (0x0001e46e) list_single_fs_bigclock_pane_g1

0xec4a,	// (0x0001e476) list_single_fs_bigclock_pane_t1

0xc2c7,	// (0x0001baf3) main_fs_bigclock_swipe_pane_g1

0xec8d,	// (0x0001e4b9) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0001f6a6) main_fs_bigclock_swipe_pane_g

0xec95,	// (0x0001e4c1) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec95,	// (0x0001e4c1) main_fs_bigclock_swipe_pane_t1

0x22d5,	// (0x00011b01) call_type_pane_ParamLimits

0x952c,	// (0x00018d58) main_btmg_pane

0xe8d1,	// (0x0001e0fd) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8d1,	// (0x0001e0fd) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0001f619) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0001f619) list_single_cale_mrui_row_pane_g

0xea53,	// (0x0001e27f) list_recal_vselct_arw_lo_pane

0xea5b,	// (0x0001e287) list_recal_vselct_arw_up_pane

0xea63,	// (0x0001e28f) list_recal_vselct_pane

0x89fe,	// (0x0001822a) btmg_button_pane

0x8a08,	// (0x00018234) main_btmg_pane_g1

0x952c,	// (0x00018d58) bg_button_pane_cp044

0xecb2,	// (0x0001e4de) btmg_button_pane_t1

0xbda6,	// (0x0001b5d2) aid_listscroll_gen

0x958d,	// (0x00018db9) main_cntbar_detail_pane

0xe5a2,	// (0x0001ddce) list_cmail_folder_pane

0xe5b2,	// (0x0001ddde) sp_fs_scroll_pane_cp03_ParamLimits

0x8a12,	// (0x0001823e) list_single_fs_dyc_pane_cp01_ParamLimits

0x8a12,	// (0x0001823e) list_single_fs_dyc_pane_cp01

0xecc0,	// (0x0001e4ec) aid_size_cmail_indent

0xecc9,	// (0x0001e4f5) list_single_dyc_row_pane_cp01

0x8a5a,	// (0x00018286) cntbar_detail_list_pane_ParamLimits

0x8a5a,	// (0x00018286) cntbar_detail_list_pane

0x8aac,	// (0x000182d8) main_cntbar_detail_cont_pane_ParamLimits

0x8aac,	// (0x000182d8) main_cntbar_detail_cont_pane

0x21f8,	// (0x00011a24) scroll_pane_cp032_ParamLimits

0x21f8,	// (0x00011a24) scroll_pane_cp032

0x8ac0,	// (0x000182ec) cntbar_detail_list_event_pane_ParamLimits

0x8ac0,	// (0x000182ec) cntbar_detail_list_event_pane

0x8a6c,	// (0x00018298) cntbar_detail_list_shct_pane

0xa1d1,	// (0x000199fd) aid_list_gen

0xecd2,	// (0x0001e4fe) aid_scroll

0xecdb,	// (0x0001e507) aid_size_touch_scroll_bar

0x6dcd,	// (0x000165f9) aid_list_double

0xece4,	// (0x0001e510) aid_list_single

0x6dcd,	// (0x000165f9) aid_list_single_lg

0xeced,	// (0x0001e519) aid_list_z_g_a_sm

0xecf5,	// (0x0001e521) aid_list_z_g_d

0x8ad0,	// (0x000182fc) aid_txt_z_prm

0x8ae0,	// (0x0001830c) aid_txt_z_prm_cp01

0x8aee,	// (0x0001831a) aid_txt_z_sec

0x8afc,	// (0x00018328) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8afc,	// (0x00018328) main_cntbar_detail_cont_pane_g1

0x8b10,	// (0x0001833c) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8b10,	// (0x0001833c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0001f6ab) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0001f6ab) main_cntbar_detail_cont_pane_g

0xecfd,	// (0x0001e529) main_cntbar_detail_cont_pane_t1

0xed0b,	// (0x0001e537) main_cntbar_detail_cont_pane_t2

0xed19,	// (0x0001e545) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0001f6b0) main_cntbar_detail_cont_pane_t

0x8b20,	// (0x0001834c) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8b20,	// (0x0001834c) cell_cntbar_detail_list_shct_pane

0xed27,	// (0x0001e553) cntbar_detail_list_shct_pane_g1

0xed30,	// (0x0001e55c) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0001f6b7) cntbar_detail_list_shct_pane_g

0x8b32,	// (0x0001835e) cntbar_detail_list_event_pane_g1_ParamLimits

0x8b32,	// (0x0001835e) cntbar_detail_list_event_pane_g1

0x8b3e,	// (0x0001836a) cntbar_detail_list_event_pane_g2_ParamLimits

0x8b3e,	// (0x0001836a) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0001f6bc) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0001f6bc) cntbar_detail_list_event_pane_g

0x8bac,	// (0x000183d8) cntbar_detail_list_event_pane_t1_ParamLimits

0x8bac,	// (0x000183d8) cntbar_detail_list_event_pane_t1

0x8bc1,	// (0x000183ed) cntbar_detail_list_event_pane_t2_ParamLimits

0x8bc1,	// (0x000183ed) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0001f6c9) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0001f6c9) cntbar_detail_list_event_pane_t

0xc2c7,	// (0x0001baf3) cell_cntbar_detail_list_shct_pane_g1

0x267b,	// (0x00011ea7) navi_pane_mv_g3

0x958d,	// (0x00018db9) main_cntbar_detail_pane_ParamLimits

0x952c,	// (0x00018d58) main_notif_wgt_pane

0xcba6,	// (0x0001c3d2) aid_tch_main_mp4_pane_g4

0xcda4,	// (0x0001c5d0) popup_slider_window_cp02

0xea49,	// (0x0001e275) list_recal_day_event_pane

0x8a2a,	// (0x00018256) cntbar_detail_btn_pane_ParamLimits

0x8a2a,	// (0x00018256) cntbar_detail_btn_pane

0x8a42,	// (0x0001826e) cntbar_detail_btn_pane_cp01_ParamLimits

0x8a42,	// (0x0001826e) cntbar_detail_btn_pane_cp01

0x8a6c,	// (0x00018298) cntbar_detail_list_shct_pane_ParamLimits

0x8a7c,	// (0x000182a8) cntbar_detail_pane_g1_ParamLimits

0x8a7c,	// (0x000182a8) cntbar_detail_pane_g1

0x8a90,	// (0x000182bc) cntbar_detail_pane_t1_ParamLimits

0x8a90,	// (0x000182bc) cntbar_detail_pane_t1

0x8b4a,	// (0x00018376) cntbar_detail_list_event_pane_g3_ParamLimits

0x8b4a,	// (0x00018376) cntbar_detail_list_event_pane_g3

0x8b62,	// (0x0001838e) cntbar_detail_list_event_pane_g4_ParamLimits

0x8b62,	// (0x0001838e) cntbar_detail_list_event_pane_g4

0x8b7a,	// (0x000183a6) cntbar_detail_list_event_pane_g5_ParamLimits

0x8b7a,	// (0x000183a6) cntbar_detail_list_event_pane_g5

0x8b92,	// (0x000183be) cntbar_detail_list_event_pane_g6_ParamLimits

0x8b92,	// (0x000183be) cntbar_detail_list_event_pane_g6

0x8bd6,	// (0x00018402) cntbar_detail_list_event_pane_t3_ParamLimits

0x8bd6,	// (0x00018402) cntbar_detail_list_event_pane_t3

0x8be8,	// (0x00018414) popup_notif_wgt_window_ParamLimits

0x8be8,	// (0x00018414) popup_notif_wgt_window

0x8c01,	// (0x0001842d) popup_submenu_window_cp01_ParamLimits

0x8c01,	// (0x0001842d) popup_submenu_window_cp01

0x9f1c,	// (0x00019748) bg_popup_window_pane_cp10

0xed39,	// (0x0001e565) listscroll_notif_wgt_pane

0xed4b,	// (0x0001e577) list_notif_wgt_window

0xed54,	// (0x0001e580) scroll_pane_cp033

0x8c15,	// (0x00018441) list_notif_wgt_row_pane_ParamLimits

0x8c15,	// (0x00018441) list_notif_wgt_row_pane

0xed5d,	// (0x0001e589) aid_size_list_notif_wgt_del

0xed6a,	// (0x0001e596) list_notif_wgt_row_pane_g1

0xed76,	// (0x0001e5a2) list_notif_wgt_row_pane_g2

0xed8a,	// (0x0001e5b6) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0001f6d0) list_notif_wgt_row_pane_g

0xed97,	// (0x0001e5c3) list_notif_wgt_row_pane_t1

0xedad,	// (0x0001e5d9) list_notif_wgt_row_pane_t2

0xedbf,	// (0x0001e5eb) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0001f6d7) list_notif_wgt_row_pane_t

0xd39b,	// (0x0001cbc7) list_recal_day_event_pane_g1

0xedd1,	// (0x0001e5fd) list_recal_day_event_pane_t1

0x952c,	// (0x00018d58) bg_button_pane_cp045

0xede0,	// (0x0001e60c) cntbar_detail_btn_pane_t1

0xbdba,	// (0x0001b5e6) main_callh_pane_ParamLimits

0xbdba,	// (0x0001b5e6) main_callh_pane

0x952c,	// (0x00018d58) main_coverflow0_pane

0x952c,	// (0x00018d58) main_wgtman_pane

0x7aa6,	// (0x000172d2) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7aa6,	// (0x000172d2) main_fs_bigclock_unlock_btn_pane

0x8428,	// (0x00017c54) bg_button_pane_cp16

0x8438,	// (0x00017c64) cell_tport_appsw_pane_g3

0x8c25,	// (0x00018451) cf0_flow_pane_ParamLimits

0x8c25,	// (0x00018451) cf0_flow_pane

0xee02,	// (0x0001e62e) listscroll_cf0_pane

0xee0d,	// (0x0001e639) main_cf0_pane_g1

0x8c3a,	// (0x00018466) main_cf0_pane_t1_ParamLimits

0x8c3a,	// (0x00018466) main_cf0_pane_t1

0x8c51,	// (0x0001847d) main_cf0_pane_t2_ParamLimits

0x8c51,	// (0x0001847d) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0001f6e3) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0001f6e3) main_cf0_pane_t

0xee1f,	// (0x0001e64b) scroll_pane_cp11

0x8c68,	// (0x00018494) cf0_flow_pane_g1

0x8c74,	// (0x000184a0) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0001f6e8) cf0_flow_pane_g

0x8c80,	// (0x000184ac) cf0_flow_pane_t1

0x952c,	// (0x00018d58) main_call6_pane

0x952c,	// (0x00018d58) main_calllock_pane

0x8c92,	// (0x000184be) call6_btn_grp_pane_ParamLimits

0x8c92,	// (0x000184be) call6_btn_grp_pane

0x8cac,	// (0x000184d8) call6_pane_g1_ParamLimits

0x8cac,	// (0x000184d8) call6_pane_g1

0x8cc2,	// (0x000184ee) popup_call6_1st_window_ParamLimits

0x8cc2,	// (0x000184ee) popup_call6_1st_window

0x8cd3,	// (0x000184ff) popup_call6_2nd_window_ParamLimits

0x8cd3,	// (0x000184ff) popup_call6_2nd_window

0x8ce4,	// (0x00018510) cell_call6_btn_pane_ParamLimits

0x8ce4,	// (0x00018510) cell_call6_btn_pane

0x9f1c,	// (0x00019748) bg_popup_call2_in_pane_cp03

0xee2a,	// (0x0001e656) popup_call6_1st_window_g1

0xee32,	// (0x0001e65e) popup_call6_1st_window_g2

0xee3a,	// (0x0001e666) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0001f6ed) popup_call6_1st_window_g

0xee42,	// (0x0001e66e) popup_call6_1st_window_t1

0xee51,	// (0x0001e67d) popup_call6_1st_window_t2

0xee61,	// (0x0001e68d) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0001f6f4) popup_call6_1st_window_t

0x9f1c,	// (0x00019748) bg_popup_call2_in_pane_cp04

0xee2a,	// (0x0001e656) popup_call6_2nd_window_g1

0xee32,	// (0x0001e65e) popup_call6_2nd_window_g2

0xee3a,	// (0x0001e666) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0001f6ed) popup_call6_2nd_window_g

0xee42,	// (0x0001e66e) popup_call6_2nd_window_t1

0x952c,	// (0x00018d58) bg_button_pane_cp15

0xee71,	// (0x0001e69d) cell_call6_btn_pane_g1

0xee7a,	// (0x0001e6a6) cell_call6_btn_pane_t1

0x8cf8,	// (0x00018524) listscroll_wgtman_pane_ParamLimits

0x8cf8,	// (0x00018524) listscroll_wgtman_pane

0x8d19,	// (0x00018545) wgtman_btn_pane_ParamLimits

0x8d19,	// (0x00018545) wgtman_btn_pane

0xa7bf,	// (0x00019feb) aid_scroll_copy1

0xee89,	// (0x0001e6b5) list_wgtman_pane

0x8d5c,	// (0x00018588) wgtman_btn_pane_g1_ParamLimits

0x8d5c,	// (0x00018588) wgtman_btn_pane_g1

0x8d88,	// (0x000185b4) wgtman_btn_pane_t1_ParamLimits

0x8d88,	// (0x000185b4) wgtman_btn_pane_t1

0xee93,	// (0x0001e6bf) wgtman_btn_pane_t2_ParamLimits

0xee93,	// (0x0001e6bf) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0001f6fb) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0001f6fb) wgtman_btn_pane_t

0xd36f,	// (0x0001cb9b) listrow_wgtman_pane_ParamLimits

0xd36f,	// (0x0001cb9b) listrow_wgtman_pane

0x8dc5,	// (0x000185f1) listrow_wgtman_pane_g1

0x8dd2,	// (0x000185fe) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0001f700) listrow_wgtman_pane_g

0x8df0,	// (0x0001861c) listrow_wgtman_pane_t1

0x8e08,	// (0x00018634) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0001f705) listrow_wgtman_pane_t

0x8e2e,	// (0x0001865a) wait_bar_pane_cp09

0xeeaa,	// (0x0001e6d6) main_calllock_btn_pane

0xeeb4,	// (0x0001e6e0) main_calllock_pane_g1

0x952c,	// (0x00018d58) bg_button_pane_cp17

0xeec0,	// (0x0001e6ec) main_calllock_btn_pane_g1

0xeec9,	// (0x0001e6f5) main_calllock_btn_pane_t1

0x952c,	// (0x00018d58) main_dialer3_pane

0x952c,	// (0x00018d58) main_fmrd2_pane

0xc2c7,	// (0x0001baf3) main_fs_bigclock_unlock_btn_pane_g1

0xeee0,	// (0x0001e70c) main_fs_bigclock_unlock_btn_pane_t1

0x8e40,	// (0x0001866c) area_fmrd2_info_pane_ParamLimits

0x8e40,	// (0x0001866c) area_fmrd2_info_pane

0x8e4f,	// (0x0001867b) area_fmrd2_visual_pane_ParamLimits

0x8e4f,	// (0x0001867b) area_fmrd2_visual_pane

0x8e5d,	// (0x00018689) fmrd2_indi_pane_ParamLimits

0x8e5d,	// (0x00018689) fmrd2_indi_pane

0x8e6a,	// (0x00018696) area_fmrd2_visual_pane_g1

0x8e72,	// (0x0001869e) area_fmrd2_visual_pane_t1

0x8e82,	// (0x000186ae) area_fmrd2_visual_pane_t2

0x8e92,	// (0x000186be) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0001f70f) area_fmrd2_visual_pane_t

0x8ea2,	// (0x000186ce) area_fmrd2_info_pane_g1

0x8eaa,	// (0x000186d6) area_fmrd2_info_pane_t1

0x8eba,	// (0x000186e6) area_fmrd2_info_pane_t2

0x8eca,	// (0x000186f6) area_fmrd2_info_pane_t3

0x8eda,	// (0x00018706) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0001f716) area_fmrd2_info_pane_t

0x8eea,	// (0x00018716) fmrd2_indi_pane_t1

0x8efa,	// (0x00018726) fmrd2_indi_pane_t2

0x8f0a,	// (0x00018736) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0001f71f) fmrd2_indi_pane_t

0xe059,	// (0x0001d885) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe059,	// (0x0001d885) list_single_fs_bigclock_indicator_pane_g5

0xe109,	// (0x0001d935) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe109,	// (0x0001d935) list_single_fs_bigclock_indicator_pane_t5

0x85c3,	// (0x00017def) aid_cell_bcale_month_pane_ParamLimits

0x85c3,	// (0x00017def) aid_cell_bcale_month_pane

0x85e1,	// (0x00017e0d) bcale_month_pane_ParamLimits

0x85e1,	// (0x00017e0d) bcale_month_pane

0x8603,	// (0x00017e2f) bcale_preview_pane_ParamLimits

0x8603,	// (0x00017e2f) bcale_preview_pane

0xec4a,	// (0x0001e476) list_single_fs_bigclock_pane_t1_ParamLimits

0xec69,	// (0x0001e495) list_single_fs_bigclock_pane_t2_ParamLimits

0xec69,	// (0x0001e495) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0001f6a1) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0001f6a1) list_single_fs_bigclock_pane_t

0xeed8,	// (0x0001e704) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0001f70a) main_fs_bigclock_unlock_btn_pane_g

0x8f1a,	// (0x00018746) aid_dia3_key_size_ParamLimits

0x8f1a,	// (0x00018746) aid_dia3_key_size

0x8f29,	// (0x00018755) aid_dia3_listrow_size_ParamLimits

0x8f29,	// (0x00018755) aid_dia3_listrow_size

0x8f3e,	// (0x0001876a) dia3_keypad_fun_pane_ParamLimits

0x8f3e,	// (0x0001876a) dia3_keypad_fun_pane

0x8f5a,	// (0x00018786) dia3_keypad_num_pane_ParamLimits

0x8f5a,	// (0x00018786) dia3_keypad_num_pane

0x8f73,	// (0x0001879f) dia3_listscroll_pane_ParamLimits

0x8f73,	// (0x0001879f) dia3_listscroll_pane

0x8f86,	// (0x000187b2) dia3_numentry_pane_ParamLimits

0x8f86,	// (0x000187b2) dia3_numentry_pane

0xeeee,	// (0x0001e71a) dia3_list_pane

0xeef9,	// (0x0001e725) scroll_pane_cp12

0x952c,	// (0x00018d58) bg_dia3_numentry_pane

0x8f9a,	// (0x000187c6) dia3_numentry_pane_t1

0x8fa9,	// (0x000187d5) cell_dia3_key_num_pane

0x8fb1,	// (0x000187dd) cell_dia3_key0_fun_pane_ParamLimits

0x8fb1,	// (0x000187dd) cell_dia3_key0_fun_pane

0x8fc5,	// (0x000187f1) cell_dia3_key1_fun_pane_ParamLimits

0x8fc5,	// (0x000187f1) cell_dia3_key1_fun_pane

0x8fdd,	// (0x00018809) dia3_listrow_pane

0xdd57,	// (0x0001d583) bg_dia3_numentry_pane_g1

0x952c,	// (0x00018d58) bg_button_pane_cp21

0xef04,	// (0x0001e730) cell_dia3_key_num_pane_t1

0xef12,	// (0x0001e73e) cell_dia3_key_num_pane_t2

0xef21,	// (0x0001e74d) cell_dia3_key_num_pane_t3

0xef30,	// (0x0001e75c) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0001f726) cell_dia3_key_num_pane_t

0x952c,	// (0x00018d58) bg_button_pane_cp19

0x8fef,	// (0x0001881b) cell_dia3_key0_fun_pane_g1

0x952c,	// (0x00018d58) bg_button_pane_cp20

0x8ff7,	// (0x00018823) cell_dia3_key1_fun_pane_g1

0x8fff,	// (0x0001882b) area_left_week_number_pane

0x900d,	// (0x00018839) area_top_day_name_pane

0x9020,	// (0x0001884c) frame_month_view_pane

0xef3f,	// (0x0001e76b) grid_month_view_pane

0x9035,	// (0x00018861) cell_top_day_name_pane_ParamLimits

0x9035,	// (0x00018861) cell_top_day_name_pane

0x9064,	// (0x00018890) cell_area_left_week_number_pane_ParamLimits

0x9064,	// (0x00018890) cell_area_left_week_number_pane

0x9078,	// (0x000188a4) cell_month_view_pane_ParamLimits

0x9078,	// (0x000188a4) cell_month_view_pane

0xef4d,	// (0x0001e779) frm_month_g1

0x90a7,	// (0x000188d3) frm_month_g2

0x90ba,	// (0x000188e6) frm_month_g3

0x90cd,	// (0x000188f9) frm_month_g4

0x90e0,	// (0x0001890c) frm_month_g5

0x90f3,	// (0x0001891f) frm_month_g6

0x9106,	// (0x00018932) frm_month_g7

0xef5a,	// (0x0001e786) frm_month_g8

0x911b,	// (0x00018947) frm_month_g9

0x912b,	// (0x00018957) frm_month_g10

0x913b,	// (0x00018967) frm_month_g11

0x914b,	// (0x00018977) frm_month_g12

0x915d,	// (0x00018989) frm_month_g13

0x9171,	// (0x0001899d) frm_month_g14

0x9185,	// (0x000189b1) frm_month_g15

0x9199,	// (0x000189c5) frm_month_g16

0x000f,

0xff03,	// (0x0001f72f) frm_month_g

0xef67,	// (0x0001e793) cell_top_day_name_pane_t1

0x91ad,	// (0x000189d9) cell_area_left_week_number_pane_g1

0x91b9,	// (0x000189e5) cell_area_left_week_number_pane_t1

0xc4f7,	// (0x0001bd23) cell_month_view_pane_g1

0x91cc,	// (0x000189f8) cell_month_view_pane_t1

0x952c,	// (0x00018d58) main_fps_pane

0xe32c,	// (0x0001db58) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe32c,	// (0x0001db58) cmail_ddmenu_btn02_pane_cp1

0xe348,	// (0x0001db74) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe348,	// (0x0001db74) cmail_ddmenu_btn02_pane_cp2

0x88d4,	// (0x00018100) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x88d4,	// (0x00018100) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0001f654) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0001f654) cmail_ddmenu_btn02_pane_g

0x88f5,	// (0x00018121) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x88f5,	// (0x00018121) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0001f659) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0001f659) cmail_ddmenu_btn02_pane_t

0x91df,	// (0x00018a0b) fps_text_pane_ParamLimits

0x91df,	// (0x00018a0b) fps_text_pane

0x91f6,	// (0x00018a22) main_fps_pane_g1_ParamLimits

0x91f6,	// (0x00018a22) main_fps_pane_g1

0x920e,	// (0x00018a3a) wait_bar_pane_cp010_ParamLimits

0x920e,	// (0x00018a3a) wait_bar_pane_cp010

0x9221,	// (0x00018a4d) fps_text_pane_t1_ParamLimits

0x9221,	// (0x00018a4d) fps_text_pane_t1

0xedee,	// (0x0001e61a) cam4_image_uncrop_pane_g1

0xedf7,	// (0x0001e623) cam4_image_uncrop_pane_g2

0x5ad7,	// (0x00015303) cam4_image_uncrop_pane_g3

0x5ae0,	// (0x0001530c) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0001f11a) cam4_image_uncrop_pane_g

0x8fdd,	// (0x00018809) dia3_listrow_pane_ParamLimits

0x952c,	// (0x00018d58) main_phob2_pane

0x83f7,	// (0x00017c23) cell_tport_appsw_pane_cp02_ParamLimits

0x83f7,	// (0x00017c23) cell_tport_appsw_pane_cp02

0x840b,	// (0x00017c37) cell_tport_appsw_pane_cp03_ParamLimits

0x840b,	// (0x00017c37) cell_tport_appsw_pane_cp03

0x952c,	// (0x00018d58) phob2_contact_card_pane

0x952c,	// (0x00018d58) phob2_listscroll_pane

0xef7a,	// (0x0001e7a6) phob2_list_pane

0xef82,	// (0x0001e7ae) scroll_pane_cp034

0x9239,	// (0x00018a65) phob2_cc_data_pane_ParamLimits

0x9239,	// (0x00018a65) phob2_cc_data_pane

0x925a,	// (0x00018a86) phob2_cc_listscroll_pane_ParamLimits

0x925a,	// (0x00018a86) phob2_cc_listscroll_pane

0x927c,	// (0x00018aa8) list_double_large_graphic_phob2_pane_ParamLimits

0x927c,	// (0x00018aa8) list_double_large_graphic_phob2_pane

0x9290,	// (0x00018abc) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9290,	// (0x00018abc) list_double_large_graphic_phob2_pane_g1

0x92a6,	// (0x00018ad2) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x92a6,	// (0x00018ad2) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0001f750) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0001f750) list_double_large_graphic_phob2_pane_g

0x92b2,	// (0x00018ade) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x92b2,	// (0x00018ade) list_double_large_graphic_phob2_pane_t1

0x92c7,	// (0x00018af3) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x92c7,	// (0x00018af3) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0001f755) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0001f755) list_double_large_graphic_phob2_pane_t

0x952c,	// (0x00018d58) list_highlight_pane_cp024

0x92d9,	// (0x00018b05) phob2_cc_button_pane

0x92e1,	// (0x00018b0d) phob2_cc_data_pane_g1_ParamLimits

0x92e1,	// (0x00018b0d) phob2_cc_data_pane_g1

0x92f7,	// (0x00018b23) phob2_cc_data_pane_g2_ParamLimits

0x92f7,	// (0x00018b23) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0001f75a) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0001f75a) phob2_cc_data_pane_g

0x9307,	// (0x00018b33) phob2_cc_data_pane_t1_ParamLimits

0x9307,	// (0x00018b33) phob2_cc_data_pane_t1

0x931f,	// (0x00018b4b) phob2_cc_data_pane_t2_ParamLimits

0x931f,	// (0x00018b4b) phob2_cc_data_pane_t2

0x9339,	// (0x00018b65) phob2_cc_data_pane_t3_ParamLimits

0x9339,	// (0x00018b65) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0001f75f) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0001f75f) phob2_cc_data_pane_t

0xef8a,	// (0x0001e7b6) phob2_cc_list_pane_ParamLimits

0xef8a,	// (0x0001e7b6) phob2_cc_list_pane

0xd444,	// (0x0001cc70) scroll_pane_cp035_ParamLimits

0xd444,	// (0x0001cc70) scroll_pane_cp035

0x958d,	// (0x00018db9) bg_button_pane_cp033

0xef96,	// (0x0001e7c2) phob2_cc_button_pane_g1

0xefa2,	// (0x0001e7ce) phob2_cc_button_pane_t1

0xefb7,	// (0x0001e7e3) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0001f766) phob2_cc_button_pane_t

0x9353,	// (0x00018b7f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9353,	// (0x00018b7f) list_double_large_graphic_phob2_cc_pane

0x9367,	// (0x00018b93) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9367,	// (0x00018b93) list_double_large_graphic_phob2_cc_pane_g1

0x9373,	// (0x00018b9f) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9373,	// (0x00018b9f) list_double_large_graphic_phob2_cc_pane_g2

0x937f,	// (0x00018bab) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x937f,	// (0x00018bab) list_double_large_graphic_phob2_cc_pane_g3

0x938b,	// (0x00018bb7) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x938b,	// (0x00018bb7) list_double_large_graphic_phob2_cc_pane_g4

0x9397,	// (0x00018bc3) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9397,	// (0x00018bc3) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0001f76b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0001f76b) list_double_large_graphic_phob2_cc_pane_g

0x93a3,	// (0x00018bcf) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x93a3,	// (0x00018bcf) list_double_large_graphic_phob2_cc_pane_t1

0x93cc,	// (0x00018bf8) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x93cc,	// (0x00018bf8) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0001f776) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0001f776) list_double_large_graphic_phob2_cc_pane_t

0xefc9,	// (0x0001e7f5) list_highlight_pane_cp025_ParamLimits

0xefc9,	// (0x0001e7f5) list_highlight_pane_cp025

0x958d,	// (0x00018db9) bg_button_pane_cp033_ParamLimits

0xef96,	// (0x0001e7c2) phob2_cc_button_pane_g1_ParamLimits

0xefa2,	// (0x0001e7ce) phob2_cc_button_pane_t1_ParamLimits

0xefb7,	// (0x0001e7e3) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0001f766) phob2_cc_button_pane_t_ParamLimits

0xfe17,	// (0x0000f643) popup_wgtman_window

0xd198,	// (0x0001c9c4) scroll_pane_cp038

0x8d3e,	// (0x0001856a) wgtman_btn_pane_cp_01_ParamLimits

0x8d3e,	// (0x0001856a) wgtman_btn_pane_cp_01

0xefd7,	// (0x0001e803) wgtman_content_pane

0xefe0,	// (0x0001e80c) wgtman_heading_pane

0x952c,	// (0x00018d58) bg_heading_pane_cp02

0xefe9,	// (0x0001e815) wgtman_heading_pane_g1

0xeff1,	// (0x0001e81d) wgtman_heading_pane_t1

0xefff,	// (0x0001e82b) scroll_pane_cp036

0xf007,	// (0x0001e833) wgtman_list_pane

0xf00f,	// (0x0001e83b) wgtman_list_pane_t1_ParamLimits

0xf00f,	// (0x0001e83b) wgtman_list_pane_t1

0xcf15,	// (0x0001c741) cam4_grid_pane

0x68c7,	// (0x000160f3) bg_button_pane_cp015_ParamLimits

0x68db,	// (0x00016107) bg_button_pane_cp016_ParamLimits

0x68ee,	// (0x0001611a) bg_button_pane_cp017_ParamLimits

0x6946,	// (0x00016172) popup_vitu2_query_window_g3_ParamLimits

0x6946,	// (0x00016172) popup_vitu2_query_window_g3

0x6a03,	// (0x0001622f) popup_vitu2_query_window_t6_ParamLimits

0x6a03,	// (0x0001622f) popup_vitu2_query_window_t6

0x6a2e,	// (0x0001625a) popup_vitu2_query_window_t7_ParamLimits

0x6a2e,	// (0x0001625a) popup_vitu2_query_window_t7

0xedee,	// (0x0001e61a) cam4_grid_pane_g1

0xedf7,	// (0x0001e623) cam4_grid_pane_g2

0xf029,	// (0x0001e855) cam4_grid_pane_g3

0xf032,	// (0x0001e85e) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0001f77b) cam4_grid_pane_g

0x1045,	// (0x00010871) aid_placing_vt_slider_lsc_ParamLimits

0x1332,	// (0x00010b5e) vidtel_button_pane_ParamLimits

0x1332,	// (0x00010b5e) vidtel_button_pane

0x952c,	// (0x00018d58) bg_button_pane_cp034

0x93f5,	// (0x00018c21) vidtel_button_pane_g1

0x93fd,	// (0x00018c29) vidtel_button_pane_t1

0xd2d7,	// (0x0001cb03) aid_size_vtel_slider_touch

0xd444,	// (0x0001cc70) scroll_pane_cp039

0xdd95,	// (0x0001d5c1) ncim_query_button_pane_cp01_ParamLimits

0xddb4,	// (0x0001d5e0) ncimui_query_pane_g1_ParamLimits

0x958d,	// (0x00018db9) input_focus_pane_cp012_ParamLimits

0xddd9,	// (0x0001d605) ncim_query_entry_pane_t1_ParamLimits

0xd444,	// (0x0001cc70) scroll_pane_cp039_ParamLimits

0x25ed,	// (0x00011e19) navi_pane_bcale_mc_g1

0x25f5,	// (0x00011e21) navi_pane_bcale_mc_t1

0xe385,	// (0x0001dbb1) main_sp_fs_email_pane_g1

0xe391,	// (0x0001dbbd) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0001f511) main_sp_fs_email_pane_g

0xe8dd,	// (0x0001e109) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8dd,	// (0x0001e109) list_single_cale_mrui_row_pane_g3

0x8915,	// (0x00018141) list_single_recal_day_pane_g5_event_pane

0xeabb,	// (0x0001e2e7) list_single_recal_day_pane_g7

0xf03d,	// (0x0001e869) list_recal_day_event_pane_cp01

0xf046,	// (0x0001e872) list_recal_vselct_arw_lo_pane_cp01

0xf04e,	// (0x0001e87a) list_recal_vselct_arw_up_pane_cp01

0xf056,	// (0x0001e882) list_recal_vselct_pane_cp01

0xd39b,	// (0x0001cbc7) list_recal_day_event_pane_cp01_g1

0xf060,	// (0x0001e88c) list_recal_day_event_pane_cp01_t1

0xeac3,	// (0x0001e2ef) list_single_recal_day_pane_t1_ParamLimits

0xead5,	// (0x0001e301) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0001f669) list_single_recal_day_pane_t_ParamLimits

0x9c09,	// (0x00019435) bg_notes_pane_ParamLimits

0x9cb4,	// (0x000194e0) list_notes_pane_ParamLimits

0x0164,	// (0x0000f990) scroll_pane_cp06_ParamLimits

0x9cf0,	// (0x0001951c) main_notes_pane_ParamLimits

0x952c,	// (0x00018d58) main_welc_pane

0x9413,	// (0x00018c3f) main_welc_body_pane_ParamLimits

0x9413,	// (0x00018c3f) main_welc_body_pane

0x9432,	// (0x00018c5e) main_welc_opti_pane_ParamLimits

0x9432,	// (0x00018c5e) main_welc_opti_pane

0x947b,	// (0x00018ca7) main_welc_pane_t1_ParamLimits

0x947b,	// (0x00018ca7) main_welc_pane_t1

0x949d,	// (0x00018cc9) main_welc_body_row_pane_ParamLimits

0x949d,	// (0x00018cc9) main_welc_body_row_pane

0x94b1,	// (0x00018cdd) main_welc_opti_row_pane_ParamLimits

0x94b1,	// (0x00018cdd) main_welc_opti_row_pane

0xf06e,	// (0x0001e89a) main_welc_opti_row_pane_g1

0xf076,	// (0x0001e8a2) main_welc_opti_row_pane_t1

0xf085,	// (0x0001e8b1) main_welc_body_row_pane_t1

0xed43,	// (0x0001e56f) popup_notif_wgt_heading_pane

0xed5d,	// (0x0001e589) aid_size_list_notif_wgt_del_ParamLimits

0xed6a,	// (0x0001e596) list_notif_wgt_row_pane_g1_ParamLimits

0xed76,	// (0x0001e5a2) list_notif_wgt_row_pane_g2_ParamLimits

0xed8a,	// (0x0001e5b6) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0001f6d0) list_notif_wgt_row_pane_g_ParamLimits

0xed97,	// (0x0001e5c3) list_notif_wgt_row_pane_t1_ParamLimits

0xedad,	// (0x0001e5d9) list_notif_wgt_row_pane_t2_ParamLimits

0xedbf,	// (0x0001e5eb) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0001f6d7) list_notif_wgt_row_pane_t_ParamLimits

0x8dc5,	// (0x000185f1) listrow_wgtman_pane_g1_ParamLimits

0x8dd2,	// (0x000185fe) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0001f700) listrow_wgtman_pane_g_ParamLimits

0x8df0,	// (0x0001861c) listrow_wgtman_pane_t1_ParamLimits

0x8e08,	// (0x00018634) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0001f705) listrow_wgtman_pane_t_ParamLimits

0x8e2e,	// (0x0001865a) wait_bar_pane_cp09_ParamLimits

0x952c,	// (0x00018d58) bg_popup_heading_pane_cp02

0xf094,	// (0x0001e8c0) popup_notif_wgt_heading_pane_g1

0xf09c,	// (0x0001e8c8) popup_notif_wgt_heading_pane_t1

0x952c,	// (0x00018d58) main_vids_pane

0x952c,	// (0x00018d58) vids_listscroll_pane

0x94c1,	// (0x00018ced) scroll_pane_cp040

0x952c,	// (0x00018d58) vids_list_pane

0x94cc,	// (0x00018cf8) vids_list_double_pane_ParamLimits

0x94cc,	// (0x00018cf8) vids_list_double_pane

0x94dd,	// (0x00018d09) vids_list_double_pane_g1

0x94e6,	// (0x00018d12) vids_list_double_pane_t1

0x94f6,	// (0x00018d22) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0001f789) vids_list_double_pane_t

0x958d,	// (0x00018db9) main_ncimui_pane_ParamLimits

0x75ff,	// (0x00016e2b) main_ncimui_pane_g1_ParamLimits

0x760b,	// (0x00016e37) main_ncimui_pane_g2_ParamLimits

0x760b,	// (0x00016e37) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0001f416) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0001f416) main_ncimui_pane_g

0x9451,	// (0x00018c7d) main_welc_pane_g1_ParamLimits

0x9451,	// (0x00018c7d) main_welc_pane_g1

0x9466,	// (0x00018c92) main_welc_pane_g2_ParamLimits

0x9466,	// (0x00018c92) main_welc_pane_g2

0x0001,

0xff58,	// (0x0001f784) main_welc_pane_g_ParamLimits

0xff58,	// (0x0001f784) main_welc_pane_g

0x9c09,	// (0x00019435) listscroll_mce_pane_ParamLimits

0x26cd,	// (0x00011ef9) wait_bar_pane_cp10

0xbdae,	// (0x0001b5da) main_cale_day_pane_ParamLimits

0xbdae,	// (0x0001b5da) main_cale_week_pane_ParamLimits

0x9c09,	// (0x00019435) main_messa_pane_ParamLimits

0x4d95,	// (0x000145c1) main_clock2_btn_pane_ParamLimits

0x4d95,	// (0x000145c1) main_clock2_btn_pane

0xc68b,	// (0x0001beb7) main_clock2_btn_pane_cp01_ParamLimits

0xc68b,	// (0x0001beb7) main_clock2_btn_pane_cp01

0xe860,	// (0x0001e08c) list_cale_mrui_pane_ParamLimits

0xee17,	// (0x0001e643) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0001f6de) main_cf0_pane_g

0x8fff,	// (0x0001882b) area_left_week_number_pane_ParamLimits

0x900d,	// (0x00018839) area_top_day_name_pane_ParamLimits

0x9020,	// (0x0001884c) frame_month_view_pane_ParamLimits

0xef3f,	// (0x0001e76b) grid_month_view_pane_ParamLimits

0xef4d,	// (0x0001e779) frm_month_g1_ParamLimits

0x90a7,	// (0x000188d3) frm_month_g2_ParamLimits

0x90ba,	// (0x000188e6) frm_month_g3_ParamLimits

0x90cd,	// (0x000188f9) frm_month_g4_ParamLimits

0x90e0,	// (0x0001890c) frm_month_g5_ParamLimits

0x90f3,	// (0x0001891f) frm_month_g6_ParamLimits

0x9106,	// (0x00018932) frm_month_g7_ParamLimits

0xef5a,	// (0x0001e786) frm_month_g8_ParamLimits

0x911b,	// (0x00018947) frm_month_g9_ParamLimits

0x912b,	// (0x00018957) frm_month_g10_ParamLimits

0x913b,	// (0x00018967) frm_month_g11_ParamLimits

0x914b,	// (0x00018977) frm_month_g12_ParamLimits

0x915d,	// (0x00018989) frm_month_g13_ParamLimits

0x9171,	// (0x0001899d) frm_month_g14_ParamLimits

0x9185,	// (0x000189b1) frm_month_g15_ParamLimits

0x9199,	// (0x000189c5) frm_month_g16_ParamLimits

0xff03,	// (0x0001f72f) frm_month_g_ParamLimits

0xef67,	// (0x0001e793) cell_top_day_name_pane_t1_ParamLimits

0x91ad,	// (0x000189d9) cell_area_left_week_number_pane_g1_ParamLimits

0x91b9,	// (0x000189e5) cell_area_left_week_number_pane_t1_ParamLimits

0xc4f7,	// (0x0001bd23) cell_month_view_pane_g1_ParamLimits

0x91cc,	// (0x000189f8) cell_month_view_pane_t1_ParamLimits

0x9c01,	// (0x0001942d) main_clock2_btn_pane_g1

0xf0aa,	// (0x0001e8d6) main_clock2_btn_pane_t1

0x958d,	// (0x00018db9) listscroll_cmail_pane_ParamLimits

0xe385,	// (0x0001dbb1) main_sp_fs_email_pane_g1_ParamLimits

0xe391,	// (0x0001dbbd) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0001f511) main_sp_fs_email_pane_g_ParamLimits

0xea2a,	// (0x0001e256) list_recal_day_pane_ParamLimits

0xea3b,	// (0x0001e267) mian_recal_day_pane_t1

0x80d2,	// (0x000178fe) list_single_dyc_row_text_pane_t4_ParamLimits

0x80d2,	// (0x000178fe) list_single_dyc_row_text_pane_t4

0x811b,	// (0x00017947) list_single_dyc_row_text_pane_t5_ParamLimits

0x811b,	// (0x00017947) list_single_dyc_row_text_pane_t5

0xe469,	// (0x0001dc95) list_single_dyc_row_text_pane_t6_ParamLimits

0xe469,	// (0x0001dc95) list_single_dyc_row_text_pane_t6

0xa344,	// (0x00019b70) aid_mgn_list_cale_time_pane

0x958d,	// (0x00018db9) main_gallery2_pane_ParamLimits

0xc69f,	// (0x0001becb) main_clock2_pane_cp01_t1

0xc6af,	// (0x0001bedb) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0001eff0) main_clock2_pane_cp01_t

0x05e3,	// (0x0000fe0f) cale_week_scroll_pane_g16_ParamLimits

0x05e3,	// (0x0000fe0f) cale_week_scroll_pane_g16

0x9f1c,	// (0x00019748) vorec_slider_pane

0x93fd,	// (0x00018c29) vidtel_button_pane_t1_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal
